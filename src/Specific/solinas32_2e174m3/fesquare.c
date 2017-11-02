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

void force_inline fesquare(uint64_t* out, uint64_t x9, uint64_t x10, uint64_t x8, uint64_t x6, uint64_t x4, uint64_t x2)
{  ℤ x11 = (((uint64_t)x2 * x9) +ℤ (((uint64_t)x4 * x10) + (((uint64_t)x6 * x8) + (((uint64_t)x8 * x6) + (((uint64_t)x10 * x4) + ((uint64_t)x9 * x2))))));
{  ℤ x12 = ((((uint64_t)x2 * x10) + (((uint64_t)x4 * x8) + (((uint64_t)x6 * x6) + (((uint64_t)x8 * x4) + ((uint64_t)x10 * x2))))) +ℤ (0x3 * ((uint64_t)x9 * x9)));
{  ℤ x13 = ((((uint64_t)x2 * x8) + (((uint64_t)x4 * x6) + (((uint64_t)x6 * x4) + ((uint64_t)x8 * x2)))) +ℤ (0x3 *ℤ (((uint64_t)x10 * x9) + ((uint64_t)x9 * x10))));
{  ℤ x14 = ((((uint64_t)x2 * x6) + (((uint64_t)x4 * x4) + ((uint64_t)x6 * x2))) +ℤ (0x3 *ℤ (((uint64_t)x8 * x9) + (((uint64_t)x10 * x10) + ((uint64_t)x9 * x8)))));
{  ℤ x15 = ((((uint64_t)x2 * x4) + ((uint64_t)x4 * x2)) +ℤ (0x3 *ℤ (((uint64_t)x6 * x9) + (((uint64_t)x8 * x10) + (((uint64_t)x10 * x8) + ((uint64_t)x9 * x6))))));
{  ℤ x16 = (((uint64_t)x2 * x2) +ℤ (0x3 *ℤ (((uint64_t)x4 * x9) + (((uint64_t)x6 * x10) + (((uint64_t)x8 * x8) + (((uint64_t)x10 * x6) + ((uint64_t)x9 * x4)))))));
{  uint64_t x17 = (x16 >> 0x1d);
{  uint32_t x18 = (x16 & 0x1fffffff);
{  ℤ x19 = (x17 +ℤ x15);
{  uint64_t x20 = (x19 >> 0x1d);
{  uint32_t x21 = (x19 & 0x1fffffff);
{  ℤ x22 = (x20 +ℤ x14);
{  uint64_t x23 = (x22 >> 0x1d);
{  uint32_t x24 = (x22 & 0x1fffffff);
{  ℤ x25 = (x23 +ℤ x13);
{  uint64_t x26 = (x25 >> 0x1d);
{  uint32_t x27 = (x25 & 0x1fffffff);
{  ℤ x28 = (x26 +ℤ x12);
{  uint64_t x29 = (x28 >> 0x1d);
{  uint32_t x30 = (x28 & 0x1fffffff);
{  ℤ x31 = (x29 +ℤ x11);
{  uint64_t x32 = (x31 >> 0x1d);
{  uint32_t x33 = (x31 & 0x1fffffff);
{  uint64_t x34 = (x18 + (0x3 * x32));
{  uint32_t x35 = (uint32_t) (x34 >> 0x1d);
{  uint32_t x36 = ((uint32_t)x34 & 0x1fffffff);
{  uint32_t x37 = (x35 + x21);
{  uint32_t x38 = (x37 >> 0x1d);
{  uint32_t x39 = (x37 & 0x1fffffff);
out[0] = x33;
out[1] = x30;
out[2] = x27;
out[3] = x38 + x24;
out[4] = x39;
out[5] = x36;
}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
// caller: uint64_t out[6];
