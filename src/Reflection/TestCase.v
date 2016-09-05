Require Import Crypto.Reflection.Syntax.
Require Export Crypto.Reflection.Reify.
Require Import Crypto.Reflection.InputSyntax.
Require Crypto.Reflection.Linearize.
Require Import Crypto.Reflection.WfReflective.

Import ReifyDebugNotations.

Inductive base_type := Tnat.
Definition interp_base_type (v : base_type) : Type :=
  match v with
  | Tnat => nat
  end.
Local Notation tnat := (Tbase Tnat).
Inductive op : flat_type base_type -> flat_type base_type -> Type :=
| Add : op (Prod tnat tnat) tnat
| Mul : op (Prod tnat tnat) tnat.
Definition interp_op src dst (f : op src dst) : interp_flat_type_gen interp_base_type src -> interp_flat_type_gen interp_base_type dst
  := match f with
     | Add => fun xy => fst xy + snd xy
     | Mul => fun xy => fst xy * snd xy
     end%nat.

Global Instance: forall x y, reify_op op (x + y)%nat 2 Add := fun _ _ => I.
Global Instance: forall x y, reify_op op (x * y)%nat 2 Mul := fun _ _ => I.
Global Instance: reify type nat := Tnat.

Ltac Reify' e := Reify.Reify' base_type interp_base_type op e.
Ltac Reify e := Reify.Reify base_type interp_base_type op e.
Ltac Reify_rhs := Reify.Reify_rhs base_type interp_base_type op interp_op.

(*Ltac reify_debug_level ::= constr:(2).*)

Goal (flat_type base_type -> Type) -> False.
  intro var.
  let x := reifyf base_type interp_base_type op var 1%nat in pose x.
  let x := Reify' 1%nat in unify x (fun var => Const (interp_base_type:=interp_base_type) (var:=var) (t:=Tbase Tnat) (op:=op) 1).
  let x := reifyf base_type interp_base_type op var (1 + 1)%nat in pose x.
  let x := Reify' (1 + 1)%nat in unify x (fun var => Op Add (Pair (Const (interp_base_type:=interp_base_type) (var:=var) (t:=Tbase Tnat) (op:=op) 1) (Const (interp_base_type:=interp_base_type) (var:=var) (t:=Tbase Tnat) (op:=op) 1))).
  let x := reify_abs base_type interp_base_type op var (fun x => x + 1)%nat in pose x.
  let x := Reify' (fun x => x + 1)%nat in unify x (fun var => Abs (fun y => Op Add (Pair (Var y) (Const (interp_base_type:=interp_base_type) (var:=var) (t:=Tbase Tnat) (op:=op) 1)))).
  let x := reifyf base_type interp_base_type op var (let '(a, b) := (1, 1) in a + b)%nat in pose x.
  let x := reifyf base_type interp_base_type op var (let '(a, b, c) := (1, 1, 1) in a + b + c)%nat in pose x.
  let x := Reify' (fun x => let '(a, b) := (1, 1) in a + x)%nat in let x := (eval vm_compute in x) in pose x.
  let x := Reify' (fun x => let '(a, b) := (1, 1) in a + x)%nat in
  unify x (fun var => Abs (fun x' =>
                          let c1 := (Const (interp_base_type:=interp_base_type) (var:=var) (t:=Tbase Tnat) (op:=op) 1) in
                          MatchPair (tC:=tnat) (Pair c1 c1)
                                    (fun x0 _ : var tnat => Op Add (Pair (Var x0) (Var x'))))).
  let x := reifyf base_type interp_base_type op var (let x := 5 in let y := 6 in (let a := 1 in let '(c, d) := (2, 3) in a + x + c + d) + y)%nat in pose x.
  let x := Reify' (fun x y => (let a := 1 in let '(c, d) := (2, 3) in a + x + c + d) + y)%nat in pose x.
Abort.


Goal (0 = let x := 1+2 in x*3)%nat.
  Reify_rhs.
Abort.

Goal (0 = let x := 1 in let y := 2 in x * y)%nat.
  Reify_rhs.
Abort.

Import Linearize.

Goal True.
  let x := Reify (fun x y => (let a := 1 in let '(c, d) := (2, 3) in a + x + c + d) + y)%nat in
  pose (InlineConst (Linearize x)) as e.
  vm_compute in e.
Abort.

Definition example_expr : Syntax.Expr base_type interp_base_type op (Tbase Tnat).
Proof.
  let x := Reify (let x := 1 in let y := 1 in (let a := 1 in let '(c, d) := (2, 3) in a + x + c + d) + y)%nat in
  exact x.
Defined.

Definition base_type_eq_semidec_transparent : forall t1 t2, option (t1 = t2)
  := fun t1 t2 => match t1, t2 with
               | Tnat, Tnat => Some eq_refl
               end.
Lemma base_type_eq_semidec_is_dec : forall t1 t2,
    base_type_eq_semidec_transparent t1 t2 = None -> t1 <> t2.
Proof.
  intros t1 t2; destruct t1, t2; simpl; intros; congruence.
Qed.
Definition op_beq t1 tR : op t1 tR -> op t1 tR -> option pointed_Prop
  := fun x y => match x, y with
             | Add, Add => Some trivial
             | Add, _ => None
             | Mul, Mul => Some trivial
             | Mul, _ => None
             end.
Lemma op_beq_bl t1 tR (x y : op t1 tR)
  : match op_beq t1 tR x y with
    | Some p => to_prop p
    | None => False
    end -> x = y.
Proof.
  destruct x; simpl.
  { refine match y with Add => _ | _ => _ end; tauto. }
  { refine match y with Add => _ | _ => _ end; tauto. }
Qed.

Lemma example_expr_wf : Wf _ _ _ example_expr.
Proof.
  cbv beta delta [example_expr Wf].
  intros var1 var2.
  repeat match goal with |- wf _ _ _ _ _ _ => constructor; intros end.
  revert var1 var2.
  vm_compute.
  let Hwf := fresh "Hwf" in
  lazymatch goal with
  | [ |- forall var1' var2', @wff ?base_type ?interp_base_type ?op var1' var2' (@?G var1' var2') ?t (@?e1 var1') (@?e2 var2') ]
    => intros var1 var2; pose proof (@reflect_wff base_type interp_base_type base_type_eq_semidec_transparent base_type_eq_semidec_is_dec op op_beq op_beq_bl var1 var2 (G var1 var2) t t (e1 _) (e2 _)) as Hwf
  end.
  revert Hwf; vm_compute.
  intro Hwf; apply Hwf; clear Hwf.
  tauto.
Qed.
