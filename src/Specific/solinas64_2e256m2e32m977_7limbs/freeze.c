static void freeze(uint64_t out[7], const uint64_t in1[7]) {
  { const uint64_t x11 = in1[6];
  { const uint64_t x12 = in1[5];
  { const uint64_t x10 = in1[4];
  { const uint64_t x8 = in1[3];
  { const uint64_t x6 = in1[2];
  { const uint64_t x4 = in1[1];
  { const uint64_t x2 = in1[0];
  { uint64_t x14, uint8_t x15 = Op (Syntax.SubWithGetBorrow 37 (Syntax.TWord 3) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 3)) (0x0, Return x2, 0x1efffffc2f);
  { uint64_t x17, uint8_t x18 = Op (Syntax.SubWithGetBorrow 37 (Syntax.TWord 3) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 3)) (Return x15, Return x4, 0x1fffffffff);
  { uint64_t x20, uint8_t x21 = Op (Syntax.SubWithGetBorrow 36 (Syntax.TWord 3) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 3)) (Return x18, Return x6, 0xfffffffff);
  { uint64_t x23, uint8_t x24 = Op (Syntax.SubWithGetBorrow 37 (Syntax.TWord 3) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 3)) (Return x21, Return x8, 0x1fffffffff);
  { uint64_t x26, uint8_t x27 = Op (Syntax.SubWithGetBorrow 36 (Syntax.TWord 3) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 3)) (Return x24, Return x10, 0xfffffffff);
  { uint64_t x29, uint8_t x30 = Op (Syntax.SubWithGetBorrow 37 (Syntax.TWord 3) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 3)) (Return x27, Return x12, 0x1fffffffff);
  { uint64_t x32, uint8_t x33 = Op (Syntax.SubWithGetBorrow 36 (Syntax.TWord 3) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 3)) (Return x30, Return x11, 0xfffffffff);
  { uint64_t x34 = cmovznz64(x33, 0x0, 0xffffffffffffffffL);
  { uint64_t x35 = (x34 & 0x1efffffc2f);
  { uint64_t x37, uint8_t x38 = Op (Syntax.AddWithGetCarry 37 (Syntax.TWord 3) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 3)) (0x0, Return x14, Return x35);
  { uint64_t x39 = (x34 & 0x1fffffffff);
  { uint64_t x41, uint8_t x42 = Op (Syntax.AddWithGetCarry 37 (Syntax.TWord 3) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 3)) (Return x38, Return x17, Return x39);
  { uint64_t x43 = (x34 & 0xfffffffff);
  { uint64_t x45, uint8_t x46 = Op (Syntax.AddWithGetCarry 36 (Syntax.TWord 3) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 3)) (Return x42, Return x20, Return x43);
  { uint64_t x47 = (x34 & 0x1fffffffff);
  { uint64_t x49, uint8_t x50 = Op (Syntax.AddWithGetCarry 37 (Syntax.TWord 3) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 3)) (Return x46, Return x23, Return x47);
  { uint64_t x51 = (x34 & 0xfffffffff);
  { uint64_t x53, uint8_t x54 = Op (Syntax.AddWithGetCarry 36 (Syntax.TWord 3) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 3)) (Return x50, Return x26, Return x51);
  { uint64_t x55 = (x34 & 0x1fffffffff);
  { uint64_t x57, uint8_t x58 = Op (Syntax.AddWithGetCarry 37 (Syntax.TWord 3) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 3)) (Return x54, Return x29, Return x55);
  { uint64_t x59 = (x34 & 0xfffffffff);
  { uint64_t x61, uint8_t _ = Op (Syntax.AddWithGetCarry 36 (Syntax.TWord 3) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 3)) (Return x58, Return x32, Return x59);
  out[0] = x37;
  out[1] = x41;
  out[2] = x45;
  out[3] = x49;
  out[4] = x53;
  out[5] = x57;
  out[6] = x61;
  }}}}}}}}}}}}}}}}}}}}}}}}}}}}}
}
