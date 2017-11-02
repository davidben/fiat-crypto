#include <stdint.h>
#include <stdbool.h>
#include <x86intrin.h>
#include "liblow.h"

#include "fesquare.h"

typedef unsigned int uint128_t __attribute__((mode(TI)));

#if (defined(__GNUC__) || defined(__GNUG__)) && !(defined(__clang__)||defined(__INTEL_COMPILER))
// https://gcc.gnu.org/bugzilla/show_bug.cgi?id=81294
#define _subborrow_u32 __builtin_ia32_sbb_u32
#define _subborrow_u64 __builtin_ia32_sbb_u64
#endif

#undef force_inline
#define force_inline __attribute__((always_inline))

void force_inline fesquare(uint64_t* out, uint64_t x27, uint64_t x28, uint64_t x26, uint64_t x24, uint64_t x22, uint64_t x20, uint64_t x18, uint64_t x16, uint64_t x14, uint64_t x12, uint64_t x10, uint64_t x8, uint64_t x6, uint64_t x4, uint64_t x2)
{  uint64_t x29 = (((uint64_t)x2 * x27) + (((uint64_t)x4 * x28) + (((uint64_t)x6 * x26) + (((uint64_t)x8 * x24) + (((uint64_t)x10 * x22) + (((uint64_t)x12 * x20) + (((uint64_t)x14 * x18) + (((uint64_t)x16 * x16) + (((uint64_t)x18 * x14) + (((uint64_t)x20 * x12) + (((uint64_t)x22 * x10) + (((uint64_t)x24 * x8) + (((uint64_t)x26 * x6) + (((uint64_t)x28 * x4) + ((uint64_t)x27 * x2)))))))))))))));
{  uint64_t x30 = ((((uint64_t)x2 * x28) + (((uint64_t)x4 * x26) + (((uint64_t)x6 * x24) + (((uint64_t)x8 * x22) + (((uint64_t)x10 * x20) + (((uint64_t)x12 * x18) + (((uint64_t)x14 * x16) + (((uint64_t)x16 * x14) + (((uint64_t)x18 * x12) + (((uint64_t)x20 * x10) + (((uint64_t)x22 * x8) + (((uint64_t)x24 * x6) + (((uint64_t)x26 * x4) + ((uint64_t)x28 * x2)))))))))))))) + (0x9 * ((uint64_t)x27 * x27)));
{  uint64_t x31 = ((((uint64_t)x2 * x26) + (((uint64_t)x4 * x24) + (((uint64_t)x6 * x22) + (((uint64_t)x8 * x20) + (((uint64_t)x10 * x18) + (((uint64_t)x12 * x16) + (((uint64_t)x14 * x14) + (((uint64_t)x16 * x12) + (((uint64_t)x18 * x10) + (((uint64_t)x20 * x8) + (((uint64_t)x22 * x6) + (((uint64_t)x24 * x4) + ((uint64_t)x26 * x2))))))))))))) + (0x9 * (((uint64_t)x28 * x27) + ((uint64_t)x27 * x28))));
{  uint64_t x32 = ((((uint64_t)x2 * x24) + (((uint64_t)x4 * x22) + (((uint64_t)x6 * x20) + (((uint64_t)x8 * x18) + (((uint64_t)x10 * x16) + (((uint64_t)x12 * x14) + (((uint64_t)x14 * x12) + (((uint64_t)x16 * x10) + (((uint64_t)x18 * x8) + (((uint64_t)x20 * x6) + (((uint64_t)x22 * x4) + ((uint64_t)x24 * x2)))))))))))) + (0x9 * (((uint64_t)x26 * x27) + (((uint64_t)x28 * x28) + ((uint64_t)x27 * x26)))));
{  uint64_t x33 = ((((uint64_t)x2 * x22) + (((uint64_t)x4 * x20) + (((uint64_t)x6 * x18) + (((uint64_t)x8 * x16) + (((uint64_t)x10 * x14) + (((uint64_t)x12 * x12) + (((uint64_t)x14 * x10) + (((uint64_t)x16 * x8) + (((uint64_t)x18 * x6) + (((uint64_t)x20 * x4) + ((uint64_t)x22 * x2))))))))))) + (0x9 * (((uint64_t)x24 * x27) + (((uint64_t)x26 * x28) + (((uint64_t)x28 * x26) + ((uint64_t)x27 * x24))))));
{  uint64_t x34 = ((((uint64_t)x2 * x20) + (((uint64_t)x4 * x18) + (((uint64_t)x6 * x16) + (((uint64_t)x8 * x14) + (((uint64_t)x10 * x12) + (((uint64_t)x12 * x10) + (((uint64_t)x14 * x8) + (((uint64_t)x16 * x6) + (((uint64_t)x18 * x4) + ((uint64_t)x20 * x2)))))))))) + (0x9 * (((uint64_t)x22 * x27) + (((uint64_t)x24 * x28) + (((uint64_t)x26 * x26) + (((uint64_t)x28 * x24) + ((uint64_t)x27 * x22)))))));
{  uint64_t x35 = ((((uint64_t)x2 * x18) + (((uint64_t)x4 * x16) + (((uint64_t)x6 * x14) + (((uint64_t)x8 * x12) + (((uint64_t)x10 * x10) + (((uint64_t)x12 * x8) + (((uint64_t)x14 * x6) + (((uint64_t)x16 * x4) + ((uint64_t)x18 * x2))))))))) + (0x9 * (((uint64_t)x20 * x27) + (((uint64_t)x22 * x28) + (((uint64_t)x24 * x26) + (((uint64_t)x26 * x24) + (((uint64_t)x28 * x22) + ((uint64_t)x27 * x20))))))));
{  uint64_t x36 = ((((uint64_t)x2 * x16) + (((uint64_t)x4 * x14) + (((uint64_t)x6 * x12) + (((uint64_t)x8 * x10) + (((uint64_t)x10 * x8) + (((uint64_t)x12 * x6) + (((uint64_t)x14 * x4) + ((uint64_t)x16 * x2)))))))) + (0x9 * (((uint64_t)x18 * x27) + (((uint64_t)x20 * x28) + (((uint64_t)x22 * x26) + (((uint64_t)x24 * x24) + (((uint64_t)x26 * x22) + (((uint64_t)x28 * x20) + ((uint64_t)x27 * x18)))))))));
{  uint64_t x37 = ((((uint64_t)x2 * x14) + (((uint64_t)x4 * x12) + (((uint64_t)x6 * x10) + (((uint64_t)x8 * x8) + (((uint64_t)x10 * x6) + (((uint64_t)x12 * x4) + ((uint64_t)x14 * x2))))))) + (0x9 * (((uint64_t)x16 * x27) + (((uint64_t)x18 * x28) + (((uint64_t)x20 * x26) + (((uint64_t)x22 * x24) + (((uint64_t)x24 * x22) + (((uint64_t)x26 * x20) + (((uint64_t)x28 * x18) + ((uint64_t)x27 * x16))))))))));
{  uint64_t x38 = ((((uint64_t)x2 * x12) + (((uint64_t)x4 * x10) + (((uint64_t)x6 * x8) + (((uint64_t)x8 * x6) + (((uint64_t)x10 * x4) + ((uint64_t)x12 * x2)))))) + (0x9 * (((uint64_t)x14 * x27) + (((uint64_t)x16 * x28) + (((uint64_t)x18 * x26) + (((uint64_t)x20 * x24) + (((uint64_t)x22 * x22) + (((uint64_t)x24 * x20) + (((uint64_t)x26 * x18) + (((uint64_t)x28 * x16) + ((uint64_t)x27 * x14)))))))))));
{  uint64_t x39 = ((((uint64_t)x2 * x10) + (((uint64_t)x4 * x8) + (((uint64_t)x6 * x6) + (((uint64_t)x8 * x4) + ((uint64_t)x10 * x2))))) + (0x9 * (((uint64_t)x12 * x27) + (((uint64_t)x14 * x28) + (((uint64_t)x16 * x26) + (((uint64_t)x18 * x24) + (((uint64_t)x20 * x22) + (((uint64_t)x22 * x20) + (((uint64_t)x24 * x18) + (((uint64_t)x26 * x16) + (((uint64_t)x28 * x14) + ((uint64_t)x27 * x12))))))))))));
{  uint64_t x40 = ((((uint64_t)x2 * x8) + (((uint64_t)x4 * x6) + (((uint64_t)x6 * x4) + ((uint64_t)x8 * x2)))) + (0x9 * (((uint64_t)x10 * x27) + (((uint64_t)x12 * x28) + (((uint64_t)x14 * x26) + (((uint64_t)x16 * x24) + (((uint64_t)x18 * x22) + (((uint64_t)x20 * x20) + (((uint64_t)x22 * x18) + (((uint64_t)x24 * x16) + (((uint64_t)x26 * x14) + (((uint64_t)x28 * x12) + ((uint64_t)x27 * x10)))))))))))));
{  uint64_t x41 = ((((uint64_t)x2 * x6) + (((uint64_t)x4 * x4) + ((uint64_t)x6 * x2))) + (0x9 * (((uint64_t)x8 * x27) + (((uint64_t)x10 * x28) + (((uint64_t)x12 * x26) + (((uint64_t)x14 * x24) + (((uint64_t)x16 * x22) + (((uint64_t)x18 * x20) + (((uint64_t)x20 * x18) + (((uint64_t)x22 * x16) + (((uint64_t)x24 * x14) + (((uint64_t)x26 * x12) + (((uint64_t)x28 * x10) + ((uint64_t)x27 * x8))))))))))))));
{  uint64_t x42 = ((((uint64_t)x2 * x4) + ((uint64_t)x4 * x2)) + (0x9 * (((uint64_t)x6 * x27) + (((uint64_t)x8 * x28) + (((uint64_t)x10 * x26) + (((uint64_t)x12 * x24) + (((uint64_t)x14 * x22) + (((uint64_t)x16 * x20) + (((uint64_t)x18 * x18) + (((uint64_t)x20 * x16) + (((uint64_t)x22 * x14) + (((uint64_t)x24 * x12) + (((uint64_t)x26 * x10) + (((uint64_t)x28 * x8) + ((uint64_t)x27 * x6)))))))))))))));
{  uint64_t x43 = (((uint64_t)x2 * x2) + (0x9 * (((uint64_t)x4 * x27) + (((uint64_t)x6 * x28) + (((uint64_t)x8 * x26) + (((uint64_t)x10 * x24) + (((uint64_t)x12 * x22) + (((uint64_t)x14 * x20) + (((uint64_t)x16 * x18) + (((uint64_t)x18 * x16) + (((uint64_t)x20 * x14) + (((uint64_t)x22 * x12) + (((uint64_t)x24 * x10) + (((uint64_t)x26 * x8) + (((uint64_t)x28 * x6) + ((uint64_t)x27 * x4))))))))))))))));
{  uint32_t x44 = (uint32_t) (x43 >> 0x13);
{  uint32_t x45 = ((uint32_t)x43 & 0x7ffff);
{  uint64_t x46 = (x44 + x42);
{  uint32_t x47 = (uint32_t) (x46 >> 0x13);
{  uint32_t x48 = ((uint32_t)x46 & 0x7ffff);
{  uint64_t x49 = (x47 + x41);
{  uint32_t x50 = (uint32_t) (x49 >> 0x13);
{  uint32_t x51 = ((uint32_t)x49 & 0x7ffff);
{  uint64_t x52 = (x50 + x40);
{  uint32_t x53 = (uint32_t) (x52 >> 0x13);
{  uint32_t x54 = ((uint32_t)x52 & 0x7ffff);
{  uint64_t x55 = (x53 + x39);
{  uint32_t x56 = (uint32_t) (x55 >> 0x13);
{  uint32_t x57 = ((uint32_t)x55 & 0x7ffff);
{  uint64_t x58 = (x56 + x38);
{  uint32_t x59 = (uint32_t) (x58 >> 0x13);
{  uint32_t x60 = ((uint32_t)x58 & 0x7ffff);
{  uint64_t x61 = (x59 + x37);
{  uint32_t x62 = (uint32_t) (x61 >> 0x13);
{  uint32_t x63 = ((uint32_t)x61 & 0x7ffff);
{  uint64_t x64 = (x62 + x36);
{  uint32_t x65 = (uint32_t) (x64 >> 0x13);
{  uint32_t x66 = ((uint32_t)x64 & 0x7ffff);
{  uint64_t x67 = (x65 + x35);
{  uint32_t x68 = (uint32_t) (x67 >> 0x13);
{  uint32_t x69 = ((uint32_t)x67 & 0x7ffff);
{  uint64_t x70 = (x68 + x34);
{  uint32_t x71 = (uint32_t) (x70 >> 0x13);
{  uint32_t x72 = ((uint32_t)x70 & 0x7ffff);
{  uint64_t x73 = (x71 + x33);
{  uint32_t x74 = (uint32_t) (x73 >> 0x13);
{  uint32_t x75 = ((uint32_t)x73 & 0x7ffff);
{  uint64_t x76 = (x74 + x32);
{  uint32_t x77 = (uint32_t) (x76 >> 0x13);
{  uint32_t x78 = ((uint32_t)x76 & 0x7ffff);
{  uint64_t x79 = (x77 + x31);
{  uint32_t x80 = (uint32_t) (x79 >> 0x13);
{  uint32_t x81 = ((uint32_t)x79 & 0x7ffff);
{  uint64_t x82 = (x80 + x30);
{  uint32_t x83 = (uint32_t) (x82 >> 0x13);
{  uint32_t x84 = ((uint32_t)x82 & 0x7ffff);
{  uint64_t x85 = (x83 + x29);
{  uint32_t x86 = (uint32_t) (x85 >> 0x13);
{  uint32_t x87 = ((uint32_t)x85 & 0x7ffff);
{  uint32_t x88 = (x45 + (0x9 * x86));
{  uint32_t x89 = (x88 >> 0x13);
{  uint32_t x90 = (x88 & 0x7ffff);
{  uint32_t x91 = (x89 + x48);
{  uint32_t x92 = (x91 >> 0x13);
{  uint32_t x93 = (x91 & 0x7ffff);
out[0] = x87;
out[1] = x84;
out[2] = x81;
out[3] = x78;
out[4] = x75;
out[5] = x72;
out[6] = x69;
out[7] = x66;
out[8] = x63;
out[9] = x60;
out[10] = x57;
out[11] = x54;
out[12] = x92 + x51;
out[13] = x93;
out[14] = x90;
}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
// caller: uint64_t out[15];
