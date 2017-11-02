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

void force_inline fesquare(uint64_t* out, uint64_t x17, uint64_t x18, uint64_t x16, uint64_t x14, uint64_t x12, uint64_t x10, uint64_t x8, uint64_t x6, uint64_t x4, uint64_t x2)
{  uint128_t x19 = (((uint128_t)x2 * x17) + ((0x2 * ((uint128_t)x4 * x18)) + ((0x2 * ((uint128_t)x6 * x16)) + ((0x2 * ((uint128_t)x8 * x14)) + (((uint128_t)x10 * x12) + (((uint128_t)x12 * x10) + ((0x2 * ((uint128_t)x14 * x8)) + ((0x2 * ((uint128_t)x16 * x6)) + ((0x2 * ((uint128_t)x18 * x4)) + ((uint128_t)x17 * x2))))))))));
{  uint128_t x20 = ((((uint128_t)x2 * x18) + ((0x2 * ((uint128_t)x4 * x16)) + ((0x2 * ((uint128_t)x6 * x14)) + (((uint128_t)x8 * x12) + (((uint128_t)x10 * x10) + (((uint128_t)x12 * x8) + ((0x2 * ((uint128_t)x14 * x6)) + ((0x2 * ((uint128_t)x16 * x4)) + ((uint128_t)x18 * x2))))))))) + (0x239 * ((uint128_t)x17 * x17)));
{  uint128_t x21 = ((((uint128_t)x2 * x16) + ((0x2 * ((uint128_t)x4 * x14)) + (((uint128_t)x6 * x12) + (((uint128_t)x8 * x10) + (((uint128_t)x10 * x8) + (((uint128_t)x12 * x6) + ((0x2 * ((uint128_t)x14 * x4)) + ((uint128_t)x16 * x2)))))))) + (0x239 * (((uint128_t)x18 * x17) + ((uint128_t)x17 * x18))));
{  uint128_t x22 = ((((uint128_t)x2 * x14) + (((uint128_t)x4 * x12) + (((uint128_t)x6 * x10) + (((uint128_t)x8 * x8) + (((uint128_t)x10 * x6) + (((uint128_t)x12 * x4) + ((uint128_t)x14 * x2))))))) + (0x239 * (((uint128_t)x16 * x17) + (((uint128_t)x18 * x18) + ((uint128_t)x17 * x16)))));
{  uint128_t x23 = ((((uint128_t)x2 * x12) + ((0x2 * ((uint128_t)x4 * x10)) + ((0x2 * ((uint128_t)x6 * x8)) + ((0x2 * ((uint128_t)x8 * x6)) + ((0x2 * ((uint128_t)x10 * x4)) + ((uint128_t)x12 * x2)))))) + (0x239 * ((0x2 * ((uint128_t)x14 * x17)) + ((0x2 * ((uint128_t)x16 * x18)) + ((0x2 * ((uint128_t)x18 * x16)) + (0x2 * ((uint128_t)x17 * x14)))))));
{  uint128_t x24 = ((((uint128_t)x2 * x10) + ((0x2 * ((uint128_t)x4 * x8)) + ((0x2 * ((uint128_t)x6 * x6)) + ((0x2 * ((uint128_t)x8 * x4)) + ((uint128_t)x10 * x2))))) + (0x239 * (((uint128_t)x12 * x17) + ((0x2 * ((uint128_t)x14 * x18)) + ((0x2 * ((uint128_t)x16 * x16)) + ((0x2 * ((uint128_t)x18 * x14)) + ((uint128_t)x17 * x12)))))));
{  uint128_t x25 = ((((uint128_t)x2 * x8) + ((0x2 * ((uint128_t)x4 * x6)) + ((0x2 * ((uint128_t)x6 * x4)) + ((uint128_t)x8 * x2)))) + (0x239 * (((uint128_t)x10 * x17) + (((uint128_t)x12 * x18) + ((0x2 * ((uint128_t)x14 * x16)) + ((0x2 * ((uint128_t)x16 * x14)) + (((uint128_t)x18 * x12) + ((uint128_t)x17 * x10))))))));
{  uint128_t x26 = ((((uint128_t)x2 * x6) + ((0x2 * ((uint128_t)x4 * x4)) + ((uint128_t)x6 * x2))) + (0x239 * (((uint128_t)x8 * x17) + (((uint128_t)x10 * x18) + (((uint128_t)x12 * x16) + ((0x2 * ((uint128_t)x14 * x14)) + (((uint128_t)x16 * x12) + (((uint128_t)x18 * x10) + ((uint128_t)x17 * x8)))))))));
{  uint128_t x27 = ((((uint128_t)x2 * x4) + ((uint128_t)x4 * x2)) + (0x239 * (((uint128_t)x6 * x17) + (((uint128_t)x8 * x18) + (((uint128_t)x10 * x16) + (((uint128_t)x12 * x14) + (((uint128_t)x14 * x12) + (((uint128_t)x16 * x10) + (((uint128_t)x18 * x8) + ((uint128_t)x17 * x6))))))))));
{  uint128_t x28 = (((uint128_t)x2 * x2) + (0x239 * ((0x2 * ((uint128_t)x4 * x17)) + ((0x2 * ((uint128_t)x6 * x18)) + ((0x2 * ((uint128_t)x8 * x16)) + ((0x2 * ((uint128_t)x10 * x14)) + (((uint128_t)x12 * x12) + ((0x2 * ((uint128_t)x14 * x10)) + ((0x2 * ((uint128_t)x16 * x8)) + ((0x2 * ((uint128_t)x18 * x6)) + (0x2 * ((uint128_t)x17 * x4))))))))))));
{  uint128_t x29 = (x28 >> 0x34);
{  uint64_t x30 = ((uint64_t)x28 & 0xfffffffffffff);
{  uint128_t x31 = (x29 + x27);
{  uint128_t x32 = (x31 >> 0x33);
{  uint64_t x33 = ((uint64_t)x31 & 0x7ffffffffffff);
{  uint128_t x34 = (x32 + x26);
{  uint128_t x35 = (x34 >> 0x33);
{  uint64_t x36 = ((uint64_t)x34 & 0x7ffffffffffff);
{  uint128_t x37 = (x35 + x25);
{  uint128_t x38 = (x37 >> 0x33);
{  uint64_t x39 = ((uint64_t)x37 & 0x7ffffffffffff);
{  uint128_t x40 = (x38 + x24);
{  uint128_t x41 = (x40 >> 0x33);
{  uint64_t x42 = ((uint64_t)x40 & 0x7ffffffffffff);
{  uint128_t x43 = (x41 + x23);
{  uint128_t x44 = (x43 >> 0x34);
{  uint64_t x45 = ((uint64_t)x43 & 0xfffffffffffff);
{  uint128_t x46 = (x44 + x22);
{  uint128_t x47 = (x46 >> 0x33);
{  uint64_t x48 = ((uint64_t)x46 & 0x7ffffffffffff);
{  uint128_t x49 = (x47 + x21);
{  uint128_t x50 = (x49 >> 0x33);
{  uint64_t x51 = ((uint64_t)x49 & 0x7ffffffffffff);
{  uint128_t x52 = (x50 + x20);
{  uint64_t x53 = (uint64_t) (x52 >> 0x33);
{  uint64_t x54 = ((uint64_t)x52 & 0x7ffffffffffff);
{  uint128_t x55 = (x53 + x19);
{  uint64_t x56 = (uint64_t) (x55 >> 0x33);
{  uint64_t x57 = ((uint64_t)x55 & 0x7ffffffffffff);
{  uint128_t x58 = (x30 + ((uint128_t)0x239 * x56));
{  uint64_t x59 = (uint64_t) (x58 >> 0x34);
{  uint64_t x60 = ((uint64_t)x58 & 0xfffffffffffff);
{  uint64_t x61 = (x59 + x33);
{  uint64_t x62 = (x61 >> 0x33);
{  uint64_t x63 = (x61 & 0x7ffffffffffff);
out[0] = x57;
out[1] = x54;
out[2] = x51;
out[3] = x48;
out[4] = x45;
out[5] = x42;
out[6] = x39;
out[7] = x62 + x36;
out[8] = x63;
out[9] = x60;
}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
// caller: uint64_t out[10];
