static void fesquare(uint32_t out[22], const uint32_t in1[22]) {
  { const uint32_t x41 = in1[21];
  { const uint32_t x42 = in1[20];
  { const uint32_t x40 = in1[19];
  { const uint32_t x38 = in1[18];
  { const uint32_t x36 = in1[17];
  { const uint32_t x34 = in1[16];
  { const uint32_t x32 = in1[15];
  { const uint32_t x30 = in1[14];
  { const uint32_t x28 = in1[13];
  { const uint32_t x26 = in1[12];
  { const uint32_t x24 = in1[11];
  { const uint32_t x22 = in1[10];
  { const uint32_t x20 = in1[9];
  { const uint32_t x18 = in1[8];
  { const uint32_t x16 = in1[7];
  { const uint32_t x14 = in1[6];
  { const uint32_t x12 = in1[5];
  { const uint32_t x10 = in1[4];
  { const uint32_t x8 = in1[3];
  { const uint32_t x6 = in1[2];
  { const uint32_t x4 = in1[1];
  { const uint32_t x2 = in1[0];
  { uint64_t x43 = (((uint64_t)x2 * x41) + ((0x2 * ((uint64_t)x4 * x42)) + ((0x2 * ((uint64_t)x6 * x40)) + ((0x2 * ((uint64_t)x8 * x38)) + (((uint64_t)x10 * x36) + ((0x2 * ((uint64_t)x12 * x34)) + ((0x2 * ((uint64_t)x14 * x32)) + ((0x2 * ((uint64_t)x16 * x30)) + (((uint64_t)x18 * x28) + ((0x2 * ((uint64_t)x20 * x26)) + ((0x2 * ((uint64_t)x22 * x24)) + ((0x2 * ((uint64_t)x24 * x22)) + ((0x2 * ((uint64_t)x26 * x20)) + (((uint64_t)x28 * x18) + ((0x2 * ((uint64_t)x30 * x16)) + ((0x2 * ((uint64_t)x32 * x14)) + ((0x2 * ((uint64_t)x34 * x12)) + (((uint64_t)x36 * x10) + ((0x2 * ((uint64_t)x38 * x8)) + ((0x2 * ((uint64_t)x40 * x6)) + ((0x2 * ((uint64_t)x42 * x4)) + ((uint64_t)x41 * x2))))))))))))))))))))));
  { uint64_t x44 = ((((uint64_t)x2 * x42) + ((0x2 * ((uint64_t)x4 * x40)) + ((0x2 * ((uint64_t)x6 * x38)) + (((uint64_t)x8 * x36) + (((uint64_t)x10 * x34) + ((0x2 * ((uint64_t)x12 * x32)) + ((0x2 * ((uint64_t)x14 * x30)) + (((uint64_t)x16 * x28) + (((uint64_t)x18 * x26) + ((0x2 * ((uint64_t)x20 * x24)) + ((0x2 * ((uint64_t)x22 * x22)) + ((0x2 * ((uint64_t)x24 * x20)) + (((uint64_t)x26 * x18) + (((uint64_t)x28 * x16) + ((0x2 * ((uint64_t)x30 * x14)) + ((0x2 * ((uint64_t)x32 * x12)) + (((uint64_t)x34 * x10) + (((uint64_t)x36 * x8) + ((0x2 * ((uint64_t)x38 * x6)) + ((0x2 * ((uint64_t)x40 * x4)) + ((uint64_t)x42 * x2))))))))))))))))))))) + (0xbb * ((uint64_t)x41 * x41)));
  { uint64_t x45 = ((((uint64_t)x2 * x40) + ((0x2 * ((uint64_t)x4 * x38)) + (((uint64_t)x6 * x36) + (((uint64_t)x8 * x34) + (((uint64_t)x10 * x32) + ((0x2 * ((uint64_t)x12 * x30)) + (((uint64_t)x14 * x28) + (((uint64_t)x16 * x26) + (((uint64_t)x18 * x24) + ((0x2 * ((uint64_t)x20 * x22)) + ((0x2 * ((uint64_t)x22 * x20)) + (((uint64_t)x24 * x18) + (((uint64_t)x26 * x16) + (((uint64_t)x28 * x14) + ((0x2 * ((uint64_t)x30 * x12)) + (((uint64_t)x32 * x10) + (((uint64_t)x34 * x8) + (((uint64_t)x36 * x6) + ((0x2 * ((uint64_t)x38 * x4)) + ((uint64_t)x40 * x2)))))))))))))))))))) + (0xbb * (((uint64_t)x42 * x41) + ((uint64_t)x41 * x42))));
  { uint64_t x46 = ((((uint64_t)x2 * x38) + (((uint64_t)x4 * x36) + (((uint64_t)x6 * x34) + (((uint64_t)x8 * x32) + (((uint64_t)x10 * x30) + (((uint64_t)x12 * x28) + (((uint64_t)x14 * x26) + (((uint64_t)x16 * x24) + (((uint64_t)x18 * x22) + ((0x2 * ((uint64_t)x20 * x20)) + (((uint64_t)x22 * x18) + (((uint64_t)x24 * x16) + (((uint64_t)x26 * x14) + (((uint64_t)x28 * x12) + (((uint64_t)x30 * x10) + (((uint64_t)x32 * x8) + (((uint64_t)x34 * x6) + (((uint64_t)x36 * x4) + ((uint64_t)x38 * x2))))))))))))))))))) + (0xbb * (((uint64_t)x40 * x41) + (((uint64_t)x42 * x42) + ((uint64_t)x41 * x40)))));
  { uint64_t x47 = ((((uint64_t)x2 * x36) + ((0x2 * ((uint64_t)x4 * x34)) + ((0x2 * ((uint64_t)x6 * x32)) + ((0x2 * ((uint64_t)x8 * x30)) + (((uint64_t)x10 * x28) + ((0x2 * ((uint64_t)x12 * x26)) + ((0x2 * ((uint64_t)x14 * x24)) + ((0x2 * ((uint64_t)x16 * x22)) + ((0x2 * ((uint64_t)x18 * x20)) + ((0x2 * ((uint64_t)x20 * x18)) + ((0x2 * ((uint64_t)x22 * x16)) + ((0x2 * ((uint64_t)x24 * x14)) + ((0x2 * ((uint64_t)x26 * x12)) + (((uint64_t)x28 * x10) + ((0x2 * ((uint64_t)x30 * x8)) + ((0x2 * ((uint64_t)x32 * x6)) + ((0x2 * ((uint64_t)x34 * x4)) + ((uint64_t)x36 * x2)))))))))))))))))) + (0xbb * ((0x2 * ((uint64_t)x38 * x41)) + ((0x2 * ((uint64_t)x40 * x42)) + ((0x2 * ((uint64_t)x42 * x40)) + (0x2 * ((uint64_t)x41 * x38)))))));
  { uint64_t x48 = ((((uint64_t)x2 * x34) + ((0x2 * ((uint64_t)x4 * x32)) + ((0x2 * ((uint64_t)x6 * x30)) + (((uint64_t)x8 * x28) + (((uint64_t)x10 * x26) + ((0x2 * ((uint64_t)x12 * x24)) + ((0x2 * ((uint64_t)x14 * x22)) + ((0x2 * ((uint64_t)x16 * x20)) + (((uint64_t)x18 * x18) + ((0x2 * ((uint64_t)x20 * x16)) + ((0x2 * ((uint64_t)x22 * x14)) + ((0x2 * ((uint64_t)x24 * x12)) + (((uint64_t)x26 * x10) + (((uint64_t)x28 * x8) + ((0x2 * ((uint64_t)x30 * x6)) + ((0x2 * ((uint64_t)x32 * x4)) + ((uint64_t)x34 * x2))))))))))))))))) + (0xbb * (((uint64_t)x36 * x41) + ((0x2 * ((uint64_t)x38 * x42)) + ((0x2 * ((uint64_t)x40 * x40)) + ((0x2 * ((uint64_t)x42 * x38)) + ((uint64_t)x41 * x36)))))));
  { uint64_t x49 = ((((uint64_t)x2 * x32) + ((0x2 * ((uint64_t)x4 * x30)) + (((uint64_t)x6 * x28) + (((uint64_t)x8 * x26) + (((uint64_t)x10 * x24) + ((0x2 * ((uint64_t)x12 * x22)) + ((0x2 * ((uint64_t)x14 * x20)) + (((uint64_t)x16 * x18) + (((uint64_t)x18 * x16) + ((0x2 * ((uint64_t)x20 * x14)) + ((0x2 * ((uint64_t)x22 * x12)) + (((uint64_t)x24 * x10) + (((uint64_t)x26 * x8) + (((uint64_t)x28 * x6) + ((0x2 * ((uint64_t)x30 * x4)) + ((uint64_t)x32 * x2)))))))))))))))) + (0xbb * (((uint64_t)x34 * x41) + (((uint64_t)x36 * x42) + ((0x2 * ((uint64_t)x38 * x40)) + ((0x2 * ((uint64_t)x40 * x38)) + (((uint64_t)x42 * x36) + ((uint64_t)x41 * x34))))))));
  { uint64_t x50 = ((((uint64_t)x2 * x30) + (((uint64_t)x4 * x28) + (((uint64_t)x6 * x26) + (((uint64_t)x8 * x24) + (((uint64_t)x10 * x22) + ((0x2 * ((uint64_t)x12 * x20)) + (((uint64_t)x14 * x18) + (((uint64_t)x16 * x16) + (((uint64_t)x18 * x14) + ((0x2 * ((uint64_t)x20 * x12)) + (((uint64_t)x22 * x10) + (((uint64_t)x24 * x8) + (((uint64_t)x26 * x6) + (((uint64_t)x28 * x4) + ((uint64_t)x30 * x2))))))))))))))) + (0xbb * (((uint64_t)x32 * x41) + (((uint64_t)x34 * x42) + (((uint64_t)x36 * x40) + ((0x2 * ((uint64_t)x38 * x38)) + (((uint64_t)x40 * x36) + (((uint64_t)x42 * x34) + ((uint64_t)x41 * x32)))))))));
  { uint64_t x51 = ((((uint64_t)x2 * x28) + ((0x2 * ((uint64_t)x4 * x26)) + ((0x2 * ((uint64_t)x6 * x24)) + ((0x2 * ((uint64_t)x8 * x22)) + ((0x2 * ((uint64_t)x10 * x20)) + ((0x2 * ((uint64_t)x12 * x18)) + ((0x2 * ((uint64_t)x14 * x16)) + ((0x2 * ((uint64_t)x16 * x14)) + ((0x2 * ((uint64_t)x18 * x12)) + ((0x2 * ((uint64_t)x20 * x10)) + ((0x2 * ((uint64_t)x22 * x8)) + ((0x2 * ((uint64_t)x24 * x6)) + ((0x2 * ((uint64_t)x26 * x4)) + ((uint64_t)x28 * x2)))))))))))))) + (0xbb * ((0x2 * ((uint64_t)x30 * x41)) + ((0x2 * ((uint64_t)x32 * x42)) + ((0x2 * ((uint64_t)x34 * x40)) + ((0x2 * ((uint64_t)x36 * x38)) + ((0x2 * ((uint64_t)x38 * x36)) + ((0x2 * ((uint64_t)x40 * x34)) + ((0x2 * ((uint64_t)x42 * x32)) + (0x2 * ((uint64_t)x41 * x30)))))))))));
  { uint64_t x52 = ((((uint64_t)x2 * x26) + ((0x2 * ((uint64_t)x4 * x24)) + ((0x2 * ((uint64_t)x6 * x22)) + ((0x2 * ((uint64_t)x8 * x20)) + (((uint64_t)x10 * x18) + ((0x2 * ((uint64_t)x12 * x16)) + ((0x2 * ((uint64_t)x14 * x14)) + ((0x2 * ((uint64_t)x16 * x12)) + (((uint64_t)x18 * x10) + ((0x2 * ((uint64_t)x20 * x8)) + ((0x2 * ((uint64_t)x22 * x6)) + ((0x2 * ((uint64_t)x24 * x4)) + ((uint64_t)x26 * x2))))))))))))) + (0xbb * (((uint64_t)x28 * x41) + ((0x2 * ((uint64_t)x30 * x42)) + ((0x2 * ((uint64_t)x32 * x40)) + ((0x2 * ((uint64_t)x34 * x38)) + (((uint64_t)x36 * x36) + ((0x2 * ((uint64_t)x38 * x34)) + ((0x2 * ((uint64_t)x40 * x32)) + ((0x2 * ((uint64_t)x42 * x30)) + ((uint64_t)x41 * x28)))))))))));
  { uint64_t x53 = ((((uint64_t)x2 * x24) + ((0x2 * ((uint64_t)x4 * x22)) + ((0x2 * ((uint64_t)x6 * x20)) + (((uint64_t)x8 * x18) + (((uint64_t)x10 * x16) + ((0x2 * ((uint64_t)x12 * x14)) + ((0x2 * ((uint64_t)x14 * x12)) + (((uint64_t)x16 * x10) + (((uint64_t)x18 * x8) + ((0x2 * ((uint64_t)x20 * x6)) + ((0x2 * ((uint64_t)x22 * x4)) + ((uint64_t)x24 * x2)))))))))))) + (0xbb * (((uint64_t)x26 * x41) + (((uint64_t)x28 * x42) + ((0x2 * ((uint64_t)x30 * x40)) + ((0x2 * ((uint64_t)x32 * x38)) + (((uint64_t)x34 * x36) + (((uint64_t)x36 * x34) + ((0x2 * ((uint64_t)x38 * x32)) + ((0x2 * ((uint64_t)x40 * x30)) + (((uint64_t)x42 * x28) + ((uint64_t)x41 * x26))))))))))));
  { uint64_t x54 = ((((uint64_t)x2 * x22) + ((0x2 * ((uint64_t)x4 * x20)) + (((uint64_t)x6 * x18) + (((uint64_t)x8 * x16) + (((uint64_t)x10 * x14) + ((0x2 * ((uint64_t)x12 * x12)) + (((uint64_t)x14 * x10) + (((uint64_t)x16 * x8) + (((uint64_t)x18 * x6) + ((0x2 * ((uint64_t)x20 * x4)) + ((uint64_t)x22 * x2))))))))))) + (0xbb * (((uint64_t)x24 * x41) + (((uint64_t)x26 * x42) + (((uint64_t)x28 * x40) + ((0x2 * ((uint64_t)x30 * x38)) + (((uint64_t)x32 * x36) + (((uint64_t)x34 * x34) + (((uint64_t)x36 * x32) + ((0x2 * ((uint64_t)x38 * x30)) + (((uint64_t)x40 * x28) + (((uint64_t)x42 * x26) + ((uint64_t)x41 * x24)))))))))))));
  { uint64_t x55 = ((((uint64_t)x2 * x20) + (((uint64_t)x4 * x18) + (((uint64_t)x6 * x16) + (((uint64_t)x8 * x14) + (((uint64_t)x10 * x12) + (((uint64_t)x12 * x10) + (((uint64_t)x14 * x8) + (((uint64_t)x16 * x6) + (((uint64_t)x18 * x4) + ((uint64_t)x20 * x2)))))))))) + (0xbb * (((uint64_t)x22 * x41) + (((uint64_t)x24 * x42) + (((uint64_t)x26 * x40) + (((uint64_t)x28 * x38) + (((uint64_t)x30 * x36) + (((uint64_t)x32 * x34) + (((uint64_t)x34 * x32) + (((uint64_t)x36 * x30) + (((uint64_t)x38 * x28) + (((uint64_t)x40 * x26) + (((uint64_t)x42 * x24) + ((uint64_t)x41 * x22))))))))))))));
  { uint64_t x56 = ((((uint64_t)x2 * x18) + ((0x2 * ((uint64_t)x4 * x16)) + ((0x2 * ((uint64_t)x6 * x14)) + ((0x2 * ((uint64_t)x8 * x12)) + (((uint64_t)x10 * x10) + ((0x2 * ((uint64_t)x12 * x8)) + ((0x2 * ((uint64_t)x14 * x6)) + ((0x2 * ((uint64_t)x16 * x4)) + ((uint64_t)x18 * x2))))))))) + (0xbb * ((0x2 * ((uint64_t)x20 * x41)) + ((0x2 * ((uint64_t)x22 * x42)) + ((0x2 * ((uint64_t)x24 * x40)) + ((0x2 * ((uint64_t)x26 * x38)) + (((uint64_t)x28 * x36) + ((0x2 * ((uint64_t)x30 * x34)) + ((0x2 * ((uint64_t)x32 * x32)) + ((0x2 * ((uint64_t)x34 * x30)) + (((uint64_t)x36 * x28) + ((0x2 * ((uint64_t)x38 * x26)) + ((0x2 * ((uint64_t)x40 * x24)) + ((0x2 * ((uint64_t)x42 * x22)) + (0x2 * ((uint64_t)x41 * x20))))))))))))))));
  { uint64_t x57 = ((((uint64_t)x2 * x16) + ((0x2 * ((uint64_t)x4 * x14)) + ((0x2 * ((uint64_t)x6 * x12)) + (((uint64_t)x8 * x10) + (((uint64_t)x10 * x8) + ((0x2 * ((uint64_t)x12 * x6)) + ((0x2 * ((uint64_t)x14 * x4)) + ((uint64_t)x16 * x2)))))))) + (0xbb * (((uint64_t)x18 * x41) + ((0x2 * ((uint64_t)x20 * x42)) + ((0x2 * ((uint64_t)x22 * x40)) + ((0x2 * ((uint64_t)x24 * x38)) + (((uint64_t)x26 * x36) + (((uint64_t)x28 * x34) + ((0x2 * ((uint64_t)x30 * x32)) + ((0x2 * ((uint64_t)x32 * x30)) + (((uint64_t)x34 * x28) + (((uint64_t)x36 * x26) + ((0x2 * ((uint64_t)x38 * x24)) + ((0x2 * ((uint64_t)x40 * x22)) + ((0x2 * ((uint64_t)x42 * x20)) + ((uint64_t)x41 * x18))))))))))))))));
  { uint64_t x58 = ((((uint64_t)x2 * x14) + ((0x2 * ((uint64_t)x4 * x12)) + (((uint64_t)x6 * x10) + (((uint64_t)x8 * x8) + (((uint64_t)x10 * x6) + ((0x2 * ((uint64_t)x12 * x4)) + ((uint64_t)x14 * x2))))))) + (0xbb * (((uint64_t)x16 * x41) + (((uint64_t)x18 * x42) + ((0x2 * ((uint64_t)x20 * x40)) + ((0x2 * ((uint64_t)x22 * x38)) + (((uint64_t)x24 * x36) + (((uint64_t)x26 * x34) + (((uint64_t)x28 * x32) + ((0x2 * ((uint64_t)x30 * x30)) + (((uint64_t)x32 * x28) + (((uint64_t)x34 * x26) + (((uint64_t)x36 * x24) + ((0x2 * ((uint64_t)x38 * x22)) + ((0x2 * ((uint64_t)x40 * x20)) + (((uint64_t)x42 * x18) + ((uint64_t)x41 * x16)))))))))))))))));
  { uint64_t x59 = ((((uint64_t)x2 * x12) + (((uint64_t)x4 * x10) + (((uint64_t)x6 * x8) + (((uint64_t)x8 * x6) + (((uint64_t)x10 * x4) + ((uint64_t)x12 * x2)))))) + (0xbb * (((uint64_t)x14 * x41) + (((uint64_t)x16 * x42) + (((uint64_t)x18 * x40) + ((0x2 * ((uint64_t)x20 * x38)) + (((uint64_t)x22 * x36) + (((uint64_t)x24 * x34) + (((uint64_t)x26 * x32) + (((uint64_t)x28 * x30) + (((uint64_t)x30 * x28) + (((uint64_t)x32 * x26) + (((uint64_t)x34 * x24) + (((uint64_t)x36 * x22) + ((0x2 * ((uint64_t)x38 * x20)) + (((uint64_t)x40 * x18) + (((uint64_t)x42 * x16) + ((uint64_t)x41 * x14))))))))))))))))));
  { uint64_t x60 = ((((uint64_t)x2 * x10) + ((0x2 * ((uint64_t)x4 * x8)) + ((0x2 * ((uint64_t)x6 * x6)) + ((0x2 * ((uint64_t)x8 * x4)) + ((uint64_t)x10 * x2))))) + (0xbb * ((0x2 * ((uint64_t)x12 * x41)) + ((0x2 * ((uint64_t)x14 * x42)) + ((0x2 * ((uint64_t)x16 * x40)) + ((0x2 * ((uint64_t)x18 * x38)) + ((0x2 * ((uint64_t)x20 * x36)) + ((0x2 * ((uint64_t)x22 * x34)) + ((0x2 * ((uint64_t)x24 * x32)) + ((0x2 * ((uint64_t)x26 * x30)) + (((uint64_t)x28 * x28) + ((0x2 * ((uint64_t)x30 * x26)) + ((0x2 * ((uint64_t)x32 * x24)) + ((0x2 * ((uint64_t)x34 * x22)) + ((0x2 * ((uint64_t)x36 * x20)) + ((0x2 * ((uint64_t)x38 * x18)) + ((0x2 * ((uint64_t)x40 * x16)) + ((0x2 * ((uint64_t)x42 * x14)) + (0x2 * ((uint64_t)x41 * x12))))))))))))))))))));
  { uint64_t x61 = ((((uint64_t)x2 * x8) + ((0x2 * ((uint64_t)x4 * x6)) + ((0x2 * ((uint64_t)x6 * x4)) + ((uint64_t)x8 * x2)))) + (0xbb * (((uint64_t)x10 * x41) + ((0x2 * ((uint64_t)x12 * x42)) + ((0x2 * ((uint64_t)x14 * x40)) + ((0x2 * ((uint64_t)x16 * x38)) + (((uint64_t)x18 * x36) + ((0x2 * ((uint64_t)x20 * x34)) + ((0x2 * ((uint64_t)x22 * x32)) + ((0x2 * ((uint64_t)x24 * x30)) + (((uint64_t)x26 * x28) + (((uint64_t)x28 * x26) + ((0x2 * ((uint64_t)x30 * x24)) + ((0x2 * ((uint64_t)x32 * x22)) + ((0x2 * ((uint64_t)x34 * x20)) + (((uint64_t)x36 * x18) + ((0x2 * ((uint64_t)x38 * x16)) + ((0x2 * ((uint64_t)x40 * x14)) + ((0x2 * ((uint64_t)x42 * x12)) + ((uint64_t)x41 * x10))))))))))))))))))));
  { uint64_t x62 = ((((uint64_t)x2 * x6) + ((0x2 * ((uint64_t)x4 * x4)) + ((uint64_t)x6 * x2))) + (0xbb * (((uint64_t)x8 * x41) + (((uint64_t)x10 * x42) + ((0x2 * ((uint64_t)x12 * x40)) + ((0x2 * ((uint64_t)x14 * x38)) + (((uint64_t)x16 * x36) + (((uint64_t)x18 * x34) + ((0x2 * ((uint64_t)x20 * x32)) + ((0x2 * ((uint64_t)x22 * x30)) + (((uint64_t)x24 * x28) + (((uint64_t)x26 * x26) + (((uint64_t)x28 * x24) + ((0x2 * ((uint64_t)x30 * x22)) + ((0x2 * ((uint64_t)x32 * x20)) + (((uint64_t)x34 * x18) + (((uint64_t)x36 * x16) + ((0x2 * ((uint64_t)x38 * x14)) + ((0x2 * ((uint64_t)x40 * x12)) + (((uint64_t)x42 * x10) + ((uint64_t)x41 * x8)))))))))))))))))))));
  { uint64_t x63 = ((((uint64_t)x2 * x4) + ((uint64_t)x4 * x2)) + (0xbb * (((uint64_t)x6 * x41) + (((uint64_t)x8 * x42) + (((uint64_t)x10 * x40) + ((0x2 * ((uint64_t)x12 * x38)) + (((uint64_t)x14 * x36) + (((uint64_t)x16 * x34) + (((uint64_t)x18 * x32) + ((0x2 * ((uint64_t)x20 * x30)) + (((uint64_t)x22 * x28) + (((uint64_t)x24 * x26) + (((uint64_t)x26 * x24) + (((uint64_t)x28 * x22) + ((0x2 * ((uint64_t)x30 * x20)) + (((uint64_t)x32 * x18) + (((uint64_t)x34 * x16) + (((uint64_t)x36 * x14) + ((0x2 * ((uint64_t)x38 * x12)) + (((uint64_t)x40 * x10) + (((uint64_t)x42 * x8) + ((uint64_t)x41 * x6))))))))))))))))))))));
  { uint64_t x64 = (((uint64_t)x2 * x2) + (0xbb * ((0x2 * ((uint64_t)x4 * x41)) + ((0x2 * ((uint64_t)x6 * x42)) + ((0x2 * ((uint64_t)x8 * x40)) + ((0x2 * ((uint64_t)x10 * x38)) + ((0x2 * ((uint64_t)x12 * x36)) + ((0x2 * ((uint64_t)x14 * x34)) + ((0x2 * ((uint64_t)x16 * x32)) + ((0x2 * ((uint64_t)x18 * x30)) + ((0x2 * ((uint64_t)x20 * x28)) + ((0x2 * ((uint64_t)x22 * x26)) + ((0x2 * ((uint64_t)x24 * x24)) + ((0x2 * ((uint64_t)x26 * x22)) + ((0x2 * ((uint64_t)x28 * x20)) + ((0x2 * ((uint64_t)x30 * x18)) + ((0x2 * ((uint64_t)x32 * x16)) + ((0x2 * ((uint64_t)x34 * x14)) + ((0x2 * ((uint64_t)x36 * x12)) + ((0x2 * ((uint64_t)x38 * x10)) + ((0x2 * ((uint64_t)x40 * x8)) + ((0x2 * ((uint64_t)x42 * x6)) + (0x2 * ((uint64_t)x41 * x4))))))))))))))))))))))));
  { uint64_t x65 = (x64 >> 0x18);
  { uint32_t x66 = ((uint32_t)x64 & 0xffffff);
  { uint64_t x67 = (x65 + x63);
  { uint64_t x68 = (x67 >> 0x17);
  { uint32_t x69 = ((uint32_t)x67 & 0x7fffff);
  { uint64_t x70 = (x68 + x62);
  { uint64_t x71 = (x70 >> 0x17);
  { uint32_t x72 = ((uint32_t)x70 & 0x7fffff);
  { uint64_t x73 = (x71 + x61);
  { uint64_t x74 = (x73 >> 0x17);
  { uint32_t x75 = ((uint32_t)x73 & 0x7fffff);
  { uint64_t x76 = (x74 + x60);
  { uint64_t x77 = (x76 >> 0x18);
  { uint32_t x78 = ((uint32_t)x76 & 0xffffff);
  { uint64_t x79 = (x77 + x59);
  { uint64_t x80 = (x79 >> 0x17);
  { uint32_t x81 = ((uint32_t)x79 & 0x7fffff);
  { uint64_t x82 = (x80 + x58);
  { uint64_t x83 = (x82 >> 0x17);
  { uint32_t x84 = ((uint32_t)x82 & 0x7fffff);
  { uint64_t x85 = (x83 + x57);
  { uint64_t x86 = (x85 >> 0x17);
  { uint32_t x87 = ((uint32_t)x85 & 0x7fffff);
  { uint64_t x88 = (x86 + x56);
  { uint64_t x89 = (x88 >> 0x18);
  { uint32_t x90 = ((uint32_t)x88 & 0xffffff);
  { uint64_t x91 = (x89 + x55);
  { uint64_t x92 = (x91 >> 0x17);
  { uint32_t x93 = ((uint32_t)x91 & 0x7fffff);
  { uint64_t x94 = (x92 + x54);
  { uint64_t x95 = (x94 >> 0x17);
  { uint32_t x96 = ((uint32_t)x94 & 0x7fffff);
  { uint64_t x97 = (x95 + x53);
  { uint64_t x98 = (x97 >> 0x17);
  { uint32_t x99 = ((uint32_t)x97 & 0x7fffff);
  { uint64_t x100 = (x98 + x52);
  { uint64_t x101 = (x100 >> 0x17);
  { uint32_t x102 = ((uint32_t)x100 & 0x7fffff);
  { uint64_t x103 = (x101 + x51);
  { uint64_t x104 = (x103 >> 0x18);
  { uint32_t x105 = ((uint32_t)x103 & 0xffffff);
  { uint64_t x106 = (x104 + x50);
  { uint64_t x107 = (x106 >> 0x17);
  { uint32_t x108 = ((uint32_t)x106 & 0x7fffff);
  { uint64_t x109 = (x107 + x49);
  { uint64_t x110 = (x109 >> 0x17);
  { uint32_t x111 = ((uint32_t)x109 & 0x7fffff);
  { uint64_t x112 = (x110 + x48);
  { uint64_t x113 = (x112 >> 0x17);
  { uint32_t x114 = ((uint32_t)x112 & 0x7fffff);
  { uint64_t x115 = (x113 + x47);
  { uint64_t x116 = (x115 >> 0x18);
  { uint32_t x117 = ((uint32_t)x115 & 0xffffff);
  { uint64_t x118 = (x116 + x46);
  { uint64_t x119 = (x118 >> 0x17);
  { uint32_t x120 = ((uint32_t)x118 & 0x7fffff);
  { uint64_t x121 = (x119 + x45);
  { uint64_t x122 = (x121 >> 0x17);
  { uint32_t x123 = ((uint32_t)x121 & 0x7fffff);
  { uint64_t x124 = (x122 + x44);
  { uint64_t x125 = (x124 >> 0x17);
  { uint32_t x126 = ((uint32_t)x124 & 0x7fffff);
  { uint64_t x127 = (x125 + x43);
  { uint64_t x128 = (x127 >> 0x17);
  { uint32_t x129 = ((uint32_t)x127 & 0x7fffff);
  { uint64_t x130 = (x66 + (0xbb * x128));
  { uint32_t x131 = (uint32_t) (x130 >> 0x18);
  { uint32_t x132 = ((uint32_t)x130 & 0xffffff);
  { uint32_t x133 = (x131 + x69);
  { uint32_t x134 = (x133 >> 0x17);
  { uint32_t x135 = (x133 & 0x7fffff);
  out[0] = x132;
  out[1] = x135;
  out[2] = (x134 + x72);
  out[3] = x75;
  out[4] = x78;
  out[5] = x81;
  out[6] = x84;
  out[7] = x87;
  out[8] = x90;
  out[9] = x93;
  out[10] = x96;
  out[11] = x99;
  out[12] = x102;
  out[13] = x105;
  out[14] = x108;
  out[15] = x111;
  out[16] = x114;
  out[17] = x117;
  out[18] = x120;
  out[19] = x123;
  out[20] = x126;
  out[21] = x129;
  }}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
}
