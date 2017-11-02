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

void force_inline fesquare(uint64_t* out, uint64_t x25, uint64_t x26, uint64_t x24, uint64_t x22, uint64_t x20, uint64_t x18, uint64_t x16, uint64_t x14, uint64_t x12, uint64_t x10, uint64_t x8, uint64_t x6, uint64_t x4, uint64_t x2)
{  uint64_t x27 = (((uint64_t)(x14 + x25) * (x14 + x25)) - ((uint64_t)x14 * x14));
{  uint64_t x28 = ((((uint64_t)(x12 + x26) * (x14 + x25)) + ((uint64_t)(x14 + x25) * (x12 + x26))) - (((uint64_t)x12 * x14) + ((uint64_t)x14 * x12)));
{  uint64_t x29 = ((((uint64_t)(x10 + x24) * (x14 + x25)) + (((uint64_t)(x12 + x26) * (x12 + x26)) + ((uint64_t)(x14 + x25) * (x10 + x24)))) - (((uint64_t)x10 * x14) + (((uint64_t)x12 * x12) + ((uint64_t)x14 * x10))));
{  uint64_t x30 = ((((uint64_t)(x8 + x22) * (x14 + x25)) + (((uint64_t)(x10 + x24) * (x12 + x26)) + (((uint64_t)(x12 + x26) * (x10 + x24)) + ((uint64_t)(x14 + x25) * (x8 + x22))))) - (((uint64_t)x8 * x14) + (((uint64_t)x10 * x12) + (((uint64_t)x12 * x10) + ((uint64_t)x14 * x8)))));
{  uint64_t x31 = ((((uint64_t)(x6 + x20) * (x14 + x25)) + (((uint64_t)(x8 + x22) * (x12 + x26)) + (((uint64_t)(x10 + x24) * (x10 + x24)) + (((uint64_t)(x12 + x26) * (x8 + x22)) + ((uint64_t)(x14 + x25) * (x6 + x20)))))) - (((uint64_t)x6 * x14) + (((uint64_t)x8 * x12) + (((uint64_t)x10 * x10) + (((uint64_t)x12 * x8) + ((uint64_t)x14 * x6))))));
{  uint64_t x32 = ((((uint64_t)(x4 + x18) * (x14 + x25)) + (((uint64_t)(x6 + x20) * (x12 + x26)) + (((uint64_t)(x8 + x22) * (x10 + x24)) + (((uint64_t)(x10 + x24) * (x8 + x22)) + (((uint64_t)(x12 + x26) * (x6 + x20)) + ((uint64_t)(x14 + x25) * (x4 + x18))))))) - (((uint64_t)x4 * x14) + (((uint64_t)x6 * x12) + (((uint64_t)x8 * x10) + (((uint64_t)x10 * x8) + (((uint64_t)x12 * x6) + ((uint64_t)x14 * x4)))))));
{  uint64_t x33 = ((((uint64_t)(x2 + x16) * (x14 + x25)) + (((uint64_t)(x4 + x18) * (x12 + x26)) + (((uint64_t)(x6 + x20) * (x10 + x24)) + (((uint64_t)(x8 + x22) * (x8 + x22)) + (((uint64_t)(x10 + x24) * (x6 + x20)) + (((uint64_t)(x12 + x26) * (x4 + x18)) + ((uint64_t)(x14 + x25) * (x2 + x16)))))))) - (((uint64_t)x2 * x14) + (((uint64_t)x4 * x12) + (((uint64_t)x6 * x10) + (((uint64_t)x8 * x8) + (((uint64_t)x10 * x6) + (((uint64_t)x12 * x4) + ((uint64_t)x14 * x2))))))));
{  uint64_t x34 = ((((uint64_t)(x2 + x16) * (x12 + x26)) + (((uint64_t)(x4 + x18) * (x10 + x24)) + (((uint64_t)(x6 + x20) * (x8 + x22)) + (((uint64_t)(x8 + x22) * (x6 + x20)) + (((uint64_t)(x10 + x24) * (x4 + x18)) + ((uint64_t)(x12 + x26) * (x2 + x16))))))) - (((uint64_t)x2 * x12) + (((uint64_t)x4 * x10) + (((uint64_t)x6 * x8) + (((uint64_t)x8 * x6) + (((uint64_t)x10 * x4) + ((uint64_t)x12 * x2)))))));
{  uint64_t x35 = ((((uint64_t)(x2 + x16) * (x10 + x24)) + (((uint64_t)(x4 + x18) * (x8 + x22)) + (((uint64_t)(x6 + x20) * (x6 + x20)) + (((uint64_t)(x8 + x22) * (x4 + x18)) + ((uint64_t)(x10 + x24) * (x2 + x16)))))) - (((uint64_t)x2 * x10) + (((uint64_t)x4 * x8) + (((uint64_t)x6 * x6) + (((uint64_t)x8 * x4) + ((uint64_t)x10 * x2))))));
{  uint64_t x36 = ((((uint64_t)(x2 + x16) * (x8 + x22)) + (((uint64_t)(x4 + x18) * (x6 + x20)) + (((uint64_t)(x6 + x20) * (x4 + x18)) + ((uint64_t)(x8 + x22) * (x2 + x16))))) - (((uint64_t)x2 * x8) + (((uint64_t)x4 * x6) + (((uint64_t)x6 * x4) + ((uint64_t)x8 * x2)))));
{  uint64_t x37 = ((((uint64_t)(x2 + x16) * (x6 + x20)) + (((uint64_t)(x4 + x18) * (x4 + x18)) + ((uint64_t)(x6 + x20) * (x2 + x16)))) - (((uint64_t)x2 * x6) + (((uint64_t)x4 * x4) + ((uint64_t)x6 * x2))));
{  uint64_t x38 = ((((uint64_t)(x2 + x16) * (x4 + x18)) + ((uint64_t)(x4 + x18) * (x2 + x16))) - (((uint64_t)x2 * x4) + ((uint64_t)x4 * x2)));
{  uint64_t x39 = (((uint64_t)(x2 + x16) * (x2 + x16)) - ((uint64_t)x2 * x2));
{  uint64_t x40 = (((((uint64_t)x14 * x14) + ((uint64_t)x25 * x25)) + x34) + x27);
{  uint64_t x41 = ((((((uint64_t)x12 * x14) + ((uint64_t)x14 * x12)) + (((uint64_t)x26 * x25) + ((uint64_t)x25 * x26))) + x35) + x28);
{  uint64_t x42 = ((((((uint64_t)x10 * x14) + (((uint64_t)x12 * x12) + ((uint64_t)x14 * x10))) + (((uint64_t)x24 * x25) + (((uint64_t)x26 * x26) + ((uint64_t)x25 * x24)))) + x36) + x29);
{  uint64_t x43 = ((((((uint64_t)x8 * x14) + (((uint64_t)x10 * x12) + (((uint64_t)x12 * x10) + ((uint64_t)x14 * x8)))) + (((uint64_t)x22 * x25) + (((uint64_t)x24 * x26) + (((uint64_t)x26 * x24) + ((uint64_t)x25 * x22))))) + x37) + x30);
{  uint64_t x44 = ((((((uint64_t)x6 * x14) + (((uint64_t)x8 * x12) + (((uint64_t)x10 * x10) + (((uint64_t)x12 * x8) + ((uint64_t)x14 * x6))))) + (((uint64_t)x20 * x25) + (((uint64_t)x22 * x26) + (((uint64_t)x24 * x24) + (((uint64_t)x26 * x22) + ((uint64_t)x25 * x20)))))) + x38) + x31);
{  uint64_t x45 = ((((((uint64_t)x4 * x14) + (((uint64_t)x6 * x12) + (((uint64_t)x8 * x10) + (((uint64_t)x10 * x8) + (((uint64_t)x12 * x6) + ((uint64_t)x14 * x4)))))) + (((uint64_t)x18 * x25) + (((uint64_t)x20 * x26) + (((uint64_t)x22 * x24) + (((uint64_t)x24 * x22) + (((uint64_t)x26 * x20) + ((uint64_t)x25 * x18))))))) + x39) + x32);
{  uint64_t x46 = ((((uint64_t)x2 * x14) + (((uint64_t)x4 * x12) + (((uint64_t)x6 * x10) + (((uint64_t)x8 * x8) + (((uint64_t)x10 * x6) + (((uint64_t)x12 * x4) + ((uint64_t)x14 * x2))))))) + (((uint64_t)x16 * x25) + (((uint64_t)x18 * x26) + (((uint64_t)x20 * x24) + (((uint64_t)x22 * x22) + (((uint64_t)x24 * x20) + (((uint64_t)x26 * x18) + ((uint64_t)x25 * x16))))))));
{  uint64_t x47 = (((((uint64_t)x2 * x12) + (((uint64_t)x4 * x10) + (((uint64_t)x6 * x8) + (((uint64_t)x8 * x6) + (((uint64_t)x10 * x4) + ((uint64_t)x12 * x2)))))) + (((uint64_t)x16 * x26) + (((uint64_t)x18 * x24) + (((uint64_t)x20 * x22) + (((uint64_t)x22 * x20) + (((uint64_t)x24 * x18) + ((uint64_t)x26 * x16))))))) + x27);
{  uint64_t x48 = (((((uint64_t)x2 * x10) + (((uint64_t)x4 * x8) + (((uint64_t)x6 * x6) + (((uint64_t)x8 * x4) + ((uint64_t)x10 * x2))))) + (((uint64_t)x16 * x24) + (((uint64_t)x18 * x22) + (((uint64_t)x20 * x20) + (((uint64_t)x22 * x18) + ((uint64_t)x24 * x16)))))) + x28);
{  uint64_t x49 = (((((uint64_t)x2 * x8) + (((uint64_t)x4 * x6) + (((uint64_t)x6 * x4) + ((uint64_t)x8 * x2)))) + (((uint64_t)x16 * x22) + (((uint64_t)x18 * x20) + (((uint64_t)x20 * x18) + ((uint64_t)x22 * x16))))) + x29);
{  uint64_t x50 = (((((uint64_t)x2 * x6) + (((uint64_t)x4 * x4) + ((uint64_t)x6 * x2))) + (((uint64_t)x16 * x20) + (((uint64_t)x18 * x18) + ((uint64_t)x20 * x16)))) + x30);
{  uint64_t x51 = (((((uint64_t)x2 * x4) + ((uint64_t)x4 * x2)) + (((uint64_t)x16 * x18) + ((uint64_t)x18 * x16))) + x31);
{  uint64_t x52 = ((((uint64_t)x2 * x2) + ((uint64_t)x16 * x16)) + x32);
{  uint32_t x53 = (uint32_t) (x46 >> 0x17);
{  uint32_t x54 = ((uint32_t)x46 & 0x7fffff);
{  uint32_t x55 = (uint32_t) (x33 >> 0x17);
{  uint32_t x56 = ((uint32_t)x33 & 0x7fffff);
{  uint64_t x57 = (((uint64_t)0x800000 * x55) + x56);
{  uint32_t x58 = (uint32_t) (x57 >> 0x17);
{  uint32_t x59 = ((uint32_t)x57 & 0x7fffff);
{  uint64_t x60 = ((x53 + x45) + x58);
{  uint32_t x61 = (uint32_t) (x60 >> 0x17);
{  uint32_t x62 = ((uint32_t)x60 & 0x7fffff);
{  uint64_t x63 = (x52 + x58);
{  uint32_t x64 = (uint32_t) (x63 >> 0x17);
{  uint32_t x65 = ((uint32_t)x63 & 0x7fffff);
{  uint64_t x66 = (x61 + x44);
{  uint32_t x67 = (uint32_t) (x66 >> 0x17);
{  uint32_t x68 = ((uint32_t)x66 & 0x7fffff);
{  uint64_t x69 = (x64 + x51);
{  uint32_t x70 = (uint32_t) (x69 >> 0x17);
{  uint32_t x71 = ((uint32_t)x69 & 0x7fffff);
{  uint64_t x72 = (x67 + x43);
{  uint32_t x73 = (uint32_t) (x72 >> 0x17);
{  uint32_t x74 = ((uint32_t)x72 & 0x7fffff);
{  uint64_t x75 = (x70 + x50);
{  uint32_t x76 = (uint32_t) (x75 >> 0x17);
{  uint32_t x77 = ((uint32_t)x75 & 0x7fffff);
{  uint64_t x78 = (x73 + x42);
{  uint32_t x79 = (uint32_t) (x78 >> 0x17);
{  uint32_t x80 = ((uint32_t)x78 & 0x7fffff);
{  uint64_t x81 = (x76 + x49);
{  uint32_t x82 = (uint32_t) (x81 >> 0x17);
{  uint32_t x83 = ((uint32_t)x81 & 0x7fffff);
{  uint64_t x84 = (x79 + x41);
{  uint32_t x85 = (uint32_t) (x84 >> 0x17);
{  uint32_t x86 = ((uint32_t)x84 & 0x7fffff);
{  uint64_t x87 = (x82 + x48);
{  uint32_t x88 = (uint32_t) (x87 >> 0x17);
{  uint32_t x89 = ((uint32_t)x87 & 0x7fffff);
{  uint64_t x90 = (x85 + x40);
{  uint32_t x91 = (uint32_t) (x90 >> 0x17);
{  uint32_t x92 = ((uint32_t)x90 & 0x7fffff);
{  uint64_t x93 = (x88 + x47);
{  uint32_t x94 = (uint32_t) (x93 >> 0x17);
{  uint32_t x95 = ((uint32_t)x93 & 0x7fffff);
{  uint32_t x96 = (x91 + x59);
{  uint32_t x97 = (x96 >> 0x17);
{  uint32_t x98 = (x96 & 0x7fffff);
{  uint32_t x99 = (x94 + x54);
{  uint32_t x100 = (x99 >> 0x17);
{  uint32_t x101 = (x99 & 0x7fffff);
{  uint32_t x102 = ((0x800000 * x97) + x98);
{  uint32_t x103 = (x102 >> 0x17);
{  uint32_t x104 = (x102 & 0x7fffff);
{  uint32_t x105 = ((x100 + x62) + x103);
{  uint32_t x106 = (x105 >> 0x17);
{  uint32_t x107 = (x105 & 0x7fffff);
{  uint32_t x108 = (x65 + x103);
{  uint32_t x109 = (x108 >> 0x17);
{  uint32_t x110 = (x108 & 0x7fffff);
out[0] = x104;
out[1] = x92;
out[2] = x86;
out[3] = x80;
out[4] = x74;
out[5] = x106 + x68;
out[6] = x107;
out[7] = x101;
out[8] = x95;
out[9] = x89;
out[10] = x83;
out[11] = x77;
out[12] = x109 + x71;
out[13] = x110;
}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
// caller: uint64_t out[14];
