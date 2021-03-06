Require Import Coq.QArith.Qround.
Require Export Coq.ZArith.BinInt.
Require Export Coq.Lists.List.
Require Export Crypto.Util.ZUtil.Notations.
Require Import Crypto.Util.Tactics.CacheTerm.
Require Import Crypto.Specific.Framework.RawCurveParameters.
Require Import Crypto.Util.TagList.
Require Crypto.Util.Tuple.

Local Set Primitive Projections.

Module Export Notations := RawCurveParameters.Notations.

Module TAG. (* namespacing *)
  Inductive tags := CP | sz | base | bitwidth | s | c | carry_chains | a24 | coef_div_modulus | goldilocks | karatsuba | montgomery | freeze | ladderstep | upper_bound_of_exponent_tight | upper_bound_of_exponent_loose | allowable_bit_widths | freeze_allowable_bit_widths | modinv_fuel | mul_code | square_code.
End TAG.

Module Export CurveParameters.
  Local Notation eval p :=
    (List.fold_right Z.add 0%Z (List.map (fun t => fst t * snd t) p)).

  Ltac do_compute v :=
    let v' := (eval vm_compute in v) in v'.
  Notation compute v
    := (ltac:(let v' := do_compute v in exact v'))
         (only parsing).
  Local Notation defaulted opt_v default
    := (match opt_v with
        | Some v => v
        | None => default
        end)
         (only parsing).
  Record CurveParameters :=
    {
      sz : nat;
      base : Q;
      bitwidth : Z;
      s : Z;
      c : list limb;
      carry_chains : list (list nat);
      a24 : option Z;
      coef_div_modulus : nat;

      goldilocks : bool;
      karatsuba : bool;
      montgomery : bool;
      freeze : bool;
      ladderstep : bool;

      mul_code : option (Z^sz -> Z^sz -> Z^sz);
      square_code : option (Z^sz -> Z^sz);
      upper_bound_of_exponent_tight : Z -> Z;
      upper_bound_of_exponent_loose : Z -> Z;
      allowable_bit_widths : list nat;
      freeze_allowable_bit_widths : list nat;
      modinv_fuel : nat
    }.

  Declare Reduction cbv_CurveParameters
    := cbv [sz
              base
              bitwidth
              s
              c
              carry_chains
              a24
              coef_div_modulus
              goldilocks
              karatsuba
              montgomery
              freeze
              ladderstep
              mul_code
              square_code
              upper_bound_of_exponent_tight
              upper_bound_of_exponent_loose
              allowable_bit_widths
              freeze_allowable_bit_widths
              modinv_fuel].

  Ltac default_mul CP :=
    lazymatch (eval hnf in (mul_code CP)) with
    | None => reflexivity
    | Some ?mul_code
      => instantiate (1:=mul_code)
    end.
  Ltac default_square CP :=
    lazymatch (eval hnf in (square_code CP)) with
    | None => reflexivity
    | Some ?square_code
      => instantiate (1:=square_code)
    end.

  Local Notation list_8_if_not_exists ls :=
    (if existsb (Nat.eqb 8) ls
     then nil
     else [8]%nat)
      (only parsing).

  Definition fill_defaults_CurveParameters (CP : RawCurveParameters.CurveParameters)
    : CurveParameters
    := Eval cbv_RawCurveParameters in
        let sz := RawCurveParameters.sz CP in
        let base := RawCurveParameters.base CP in
        let bitwidth := RawCurveParameters.bitwidth CP in
        let montgomery := RawCurveParameters.montgomery CP in
        let karatsuba := defaulted (RawCurveParameters.karatsuba CP) false in
        let s := RawCurveParameters.s CP in
        let c := RawCurveParameters.c CP in
        let freeze
            := defaulted
                 (RawCurveParameters.freeze CP)
                 (s =? 2^(Qceiling (base * sz))) in
        let goldilocks :=
            defaulted
              (RawCurveParameters.goldilocks CP)
              (let k := Z.log2 s / 2 in
               (s - eval c) =? (2^(2*k) - 2^k - 1)) in
        let allowable_bit_widths
            := defaulted
                 (RawCurveParameters.allowable_bit_widths CP)
                 ((if montgomery
                   then [8]
                   else nil)
                    ++ (Z.to_nat bitwidth :: 2*Z.to_nat bitwidth :: nil))%nat in
        let upper_bound_of_exponent_tight
            := defaulted (RawCurveParameters.upper_bound_of_exponent_tight CP)
                         (if montgomery
                          then (fun exp => (2^exp - 1)%Z)
                          else (fun exp => (2^exp + 2^(exp-3))%Z))
        (* max is [(0, 2^(exp+2) + 2^exp + 2^(exp-1) + 2^(exp-3) + 2^(exp-4) + 2^(exp-5) + 2^(exp-6) + 2^(exp-10) + 2^(exp-12) + 2^(exp-13) + 2^(exp-14) + 2^(exp-15) + 2^(exp-17) + 2^(exp-23) + 2^(exp-24))%Z] *) in
        let upper_bound_of_exponent_loose
            := defaulted (RawCurveParameters.upper_bound_of_exponent_loose CP)
                         (if montgomery
                          then (fun exp => (2^exp - 1)%Z)
                          else (fun exp => (3 * upper_bound_of_exponent_tight exp)%Z)) in
        {|
          sz := sz;
          base := base;
          bitwidth := bitwidth;
          s := s;
          c := c;
          carry_chains := defaulted (RawCurveParameters.carry_chains CP) [seq 0 (pred sz); [0; 1]]%nat;
          a24 := RawCurveParameters.a24 CP;
          coef_div_modulus := defaulted (RawCurveParameters.coef_div_modulus CP) 0%nat;

          goldilocks := goldilocks;
          karatsuba := karatsuba;
          montgomery := montgomery;
          freeze := freeze;
          ladderstep := RawCurveParameters.ladderstep CP;

          mul_code := RawCurveParameters.mul_code CP;
          square_code := RawCurveParameters.square_code CP;
          upper_bound_of_exponent_tight := upper_bound_of_exponent_tight;
          upper_bound_of_exponent_loose := upper_bound_of_exponent_loose;

          allowable_bit_widths := allowable_bit_widths;
          freeze_allowable_bit_widths
          := defaulted
               (RawCurveParameters.freeze_extra_allowable_bit_widths CP)
               (list_8_if_not_exists allowable_bit_widths)
               ++ allowable_bit_widths;
          modinv_fuel := defaulted (RawCurveParameters.modinv_fuel CP) (Z.to_nat (Z.log2_up s))
        |}.

  Ltac get_fill_CurveParameters CP :=
    let CP := (eval hnf in CP) in
    let v := (eval cbv [fill_defaults_CurveParameters] in
                 (fill_defaults_CurveParameters CP)) in
    let v := (eval cbv_CurveParameters in v) in
    let v := (eval cbv_RawCurveParameters in v) in
    lazymatch v with
    | ({|
          sz := ?sz';
          base := ?base';
          bitwidth := ?bitwidth';
          s := ?s';
          c := ?c';
          carry_chains := ?carry_chains';
          a24 := ?a24';
          coef_div_modulus := ?coef_div_modulus';
          goldilocks := ?goldilocks';
          karatsuba := ?karatsuba';
          montgomery := ?montgomery';
          freeze := ?freeze';
          ladderstep := ?ladderstep';
          mul_code := ?mul_code';
          square_code := ?square_code';
          upper_bound_of_exponent_tight := ?upper_bound_of_exponent_tight';
          upper_bound_of_exponent_loose := ?upper_bound_of_exponent_loose';
          allowable_bit_widths := ?allowable_bit_widths';
          freeze_allowable_bit_widths := ?freeze_allowable_bit_widths';
          modinv_fuel := ?modinv_fuel'
        |})
      => let sz' := do_compute sz' in
         let base' := do_compute base' in
         let bitwidth' := do_compute bitwidth' in
         let carry_chains' := do_compute carry_chains' in
         let goldilocks' := do_compute goldilocks' in
         let karatsuba' := do_compute karatsuba' in
         let montgomery' := do_compute montgomery' in
         let freeze' := do_compute freeze' in
         let ladderstep' := do_compute ladderstep' in
         let allowable_bit_widths' := do_compute allowable_bit_widths' in
         let freeze_allowable_bit_widths' := do_compute freeze_allowable_bit_widths' in
         let modinv_fuel' := do_compute modinv_fuel' in
         constr:({|
                    sz := sz';
                    base := base';
                    bitwidth := bitwidth';
                    s := s';
                    c := c';
                    carry_chains := carry_chains';
                    a24 := a24';
                    coef_div_modulus := coef_div_modulus';
                    goldilocks := goldilocks';
                    karatsuba := karatsuba';
                    montgomery := montgomery';
                    freeze := freeze';
                    ladderstep := ladderstep';
                    mul_code := mul_code';
                    square_code := square_code';
                    upper_bound_of_exponent_tight := upper_bound_of_exponent_tight';
                    upper_bound_of_exponent_loose := upper_bound_of_exponent_loose';
                    allowable_bit_widths := allowable_bit_widths';
                    freeze_allowable_bit_widths := freeze_allowable_bit_widths';
                    modinv_fuel := modinv_fuel'
                  |})
    end.
  Notation fill_CurveParameters CP := ltac:(let v := get_fill_CurveParameters CP in exact v) (only parsing).

  Ltac internal_pose_of_CP CP proj id :=
    let P_proj := (eval cbv_CurveParameters in (proj CP)) in
    cache_term P_proj id.
  Ltac pose_base CP base :=
    internal_pose_of_CP CP CurveParameters.base base.
  Ltac pose_sz CP sz :=
    internal_pose_of_CP CP CurveParameters.sz sz.
  Ltac pose_bitwidth CP bitwidth :=
    internal_pose_of_CP CP CurveParameters.bitwidth bitwidth.
  Ltac pose_s CP s := (* don't want to compute, e.g., [2^255] *)
    internal_pose_of_CP CP CurveParameters.s s.
  Ltac pose_c CP c :=
    internal_pose_of_CP CP CurveParameters.c c.
  Ltac pose_carry_chains CP carry_chains :=
    internal_pose_of_CP CP CurveParameters.carry_chains carry_chains.
  Ltac pose_a24 CP a24 :=
    internal_pose_of_CP CP CurveParameters.a24 a24.
  Ltac pose_coef_div_modulus CP coef_div_modulus :=
    internal_pose_of_CP CP CurveParameters.coef_div_modulus coef_div_modulus.
  Ltac pose_goldilocks CP goldilocks :=
    internal_pose_of_CP CP CurveParameters.goldilocks goldilocks.
  Ltac pose_karatsuba CP karatsuba :=
    internal_pose_of_CP CP CurveParameters.karatsuba karatsuba.
  Ltac pose_montgomery CP montgomery :=
    internal_pose_of_CP CP CurveParameters.montgomery montgomery.
  Ltac pose_freeze CP freeze :=
    internal_pose_of_CP CP CurveParameters.freeze freeze.
  Ltac pose_ladderstep CP ladderstep :=
    internal_pose_of_CP CP CurveParameters.ladderstep ladderstep.
  Ltac pose_allowable_bit_widths CP allowable_bit_widths :=
    internal_pose_of_CP CP CurveParameters.allowable_bit_widths allowable_bit_widths.
  Ltac pose_freeze_allowable_bit_widths CP freeze_allowable_bit_widths :=
    internal_pose_of_CP CP CurveParameters.freeze_allowable_bit_widths freeze_allowable_bit_widths.
  Ltac pose_upper_bound_of_exponent_tight CP upper_bound_of_exponent_tight :=
    internal_pose_of_CP CP CurveParameters.upper_bound_of_exponent_tight upper_bound_of_exponent_tight.
  Ltac pose_upper_bound_of_exponent_loose CP upper_bound_of_exponent_loose :=
    internal_pose_of_CP CP CurveParameters.upper_bound_of_exponent_loose upper_bound_of_exponent_loose.
  Ltac pose_modinv_fuel CP modinv_fuel :=
    internal_pose_of_CP CP CurveParameters.modinv_fuel modinv_fuel.
  Ltac pose_mul_code CP mul_code :=
    internal_pose_of_CP CP CurveParameters.mul_code mul_code.
  Ltac pose_square_code CP square_code :=
    internal_pose_of_CP CP CurveParameters.square_code square_code.

  (* Everything below this line autogenerated by remake_packages.py *)
  Ltac add_base pkg :=
    let CP := Tag.get pkg TAG.CP in
    let base := fresh "base" in
    let base := pose_base CP base in
    Tag.update pkg TAG.base base.

  Ltac add_sz pkg :=
    let CP := Tag.get pkg TAG.CP in
    let sz := fresh "sz" in
    let sz := pose_sz CP sz in
    Tag.update pkg TAG.sz sz.

  Ltac add_bitwidth pkg :=
    let CP := Tag.get pkg TAG.CP in
    let bitwidth := fresh "bitwidth" in
    let bitwidth := pose_bitwidth CP bitwidth in
    Tag.update pkg TAG.bitwidth bitwidth.

  Ltac add_s pkg :=
    let CP := Tag.get pkg TAG.CP in
    let s := fresh "s" in
    let s := pose_s CP s in
    Tag.update pkg TAG.s s.

  Ltac add_c pkg :=
    let CP := Tag.get pkg TAG.CP in
    let c := fresh "c" in
    let c := pose_c CP c in
    Tag.update pkg TAG.c c.

  Ltac add_carry_chains pkg :=
    let CP := Tag.get pkg TAG.CP in
    let carry_chains := fresh "carry_chains" in
    let carry_chains := pose_carry_chains CP carry_chains in
    Tag.update pkg TAG.carry_chains carry_chains.

  Ltac add_a24 pkg :=
    let CP := Tag.get pkg TAG.CP in
    let a24 := fresh "a24" in
    let a24 := pose_a24 CP a24 in
    Tag.update pkg TAG.a24 a24.

  Ltac add_coef_div_modulus pkg :=
    let CP := Tag.get pkg TAG.CP in
    let coef_div_modulus := fresh "coef_div_modulus" in
    let coef_div_modulus := pose_coef_div_modulus CP coef_div_modulus in
    Tag.update pkg TAG.coef_div_modulus coef_div_modulus.

  Ltac add_goldilocks pkg :=
    let CP := Tag.get pkg TAG.CP in
    let goldilocks := fresh "goldilocks" in
    let goldilocks := pose_goldilocks CP goldilocks in
    Tag.update pkg TAG.goldilocks goldilocks.

  Ltac add_karatsuba pkg :=
    let CP := Tag.get pkg TAG.CP in
    let karatsuba := fresh "karatsuba" in
    let karatsuba := pose_karatsuba CP karatsuba in
    Tag.update pkg TAG.karatsuba karatsuba.

  Ltac add_montgomery pkg :=
    let CP := Tag.get pkg TAG.CP in
    let montgomery := fresh "montgomery" in
    let montgomery := pose_montgomery CP montgomery in
    Tag.update pkg TAG.montgomery montgomery.

  Ltac add_freeze pkg :=
    let CP := Tag.get pkg TAG.CP in
    let freeze := fresh "freeze" in
    let freeze := pose_freeze CP freeze in
    Tag.update pkg TAG.freeze freeze.

  Ltac add_ladderstep pkg :=
    let CP := Tag.get pkg TAG.CP in
    let ladderstep := fresh "ladderstep" in
    let ladderstep := pose_ladderstep CP ladderstep in
    Tag.update pkg TAG.ladderstep ladderstep.

  Ltac add_allowable_bit_widths pkg :=
    let CP := Tag.get pkg TAG.CP in
    let allowable_bit_widths := fresh "allowable_bit_widths" in
    let allowable_bit_widths := pose_allowable_bit_widths CP allowable_bit_widths in
    Tag.update pkg TAG.allowable_bit_widths allowable_bit_widths.

  Ltac add_freeze_allowable_bit_widths pkg :=
    let CP := Tag.get pkg TAG.CP in
    let freeze_allowable_bit_widths := fresh "freeze_allowable_bit_widths" in
    let freeze_allowable_bit_widths := pose_freeze_allowable_bit_widths CP freeze_allowable_bit_widths in
    Tag.update pkg TAG.freeze_allowable_bit_widths freeze_allowable_bit_widths.

  Ltac add_upper_bound_of_exponent_tight pkg :=
    let CP := Tag.get pkg TAG.CP in
    let upper_bound_of_exponent_tight := fresh "upper_bound_of_exponent_tight" in
    let upper_bound_of_exponent_tight := pose_upper_bound_of_exponent_tight CP upper_bound_of_exponent_tight in
    Tag.update pkg TAG.upper_bound_of_exponent_tight upper_bound_of_exponent_tight.

  Ltac add_upper_bound_of_exponent_loose pkg :=
    let CP := Tag.get pkg TAG.CP in
    let upper_bound_of_exponent_loose := fresh "upper_bound_of_exponent_loose" in
    let upper_bound_of_exponent_loose := pose_upper_bound_of_exponent_loose CP upper_bound_of_exponent_loose in
    Tag.update pkg TAG.upper_bound_of_exponent_loose upper_bound_of_exponent_loose.

  Ltac add_modinv_fuel pkg :=
    let CP := Tag.get pkg TAG.CP in
    let modinv_fuel := fresh "modinv_fuel" in
    let modinv_fuel := pose_modinv_fuel CP modinv_fuel in
    Tag.update pkg TAG.modinv_fuel modinv_fuel.

  Ltac add_mul_code pkg :=
    let CP := Tag.get pkg TAG.CP in
    let mul_code := fresh "mul_code" in
    let mul_code := pose_mul_code CP mul_code in
    Tag.update pkg TAG.mul_code mul_code.

  Ltac add_square_code pkg :=
    let CP := Tag.get pkg TAG.CP in
    let square_code := fresh "square_code" in
    let square_code := pose_square_code CP square_code in
    Tag.update pkg TAG.square_code square_code.

  Ltac add_CurveParameters_package pkg :=
    let pkg := add_base pkg in
    let pkg := add_sz pkg in
    let pkg := add_bitwidth pkg in
    let pkg := add_s pkg in
    let pkg := add_c pkg in
    let pkg := add_carry_chains pkg in
    let pkg := add_a24 pkg in
    let pkg := add_coef_div_modulus pkg in
    let pkg := add_goldilocks pkg in
    let pkg := add_karatsuba pkg in
    let pkg := add_montgomery pkg in
    let pkg := add_freeze pkg in
    let pkg := add_ladderstep pkg in
    let pkg := add_allowable_bit_widths pkg in
    let pkg := add_freeze_allowable_bit_widths pkg in
    let pkg := add_upper_bound_of_exponent_tight pkg in
    let pkg := add_upper_bound_of_exponent_loose pkg in
    let pkg := add_modinv_fuel pkg in
    let pkg := add_mul_code pkg in
    let pkg := add_square_code pkg in
    Tag.strip_subst_local pkg.
End CurveParameters.
