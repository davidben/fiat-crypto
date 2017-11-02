#include <stdint.h>
#include <stdbool.h>
#include <x86intrin.h>
#include "liblow.h"

#include "femul.h"

typedef unsigned int uint128_t __attribute__((mode(TI)));

#if (defined(__GNUC__) || defined(__GNUG__)) && !(defined(__clang__)||defined(__INTEL_COMPILER))
// https://gcc.gnu.org/bugzilla/show_bug.cgi?id=81294
#define _subborrow_u32 __builtin_ia32_sbb_u32
#define _subborrow_u64 __builtin_ia32_sbb_u64
#endif

#undef force_inline
#define force_inline __attribute__((always_inline))

void force_inline femul(uint64_t* out, uint64_t x6, uint64_t x7, uint64_t x5, uint64_t x10, uint64_t x11, uint64_t x9)
{  uint64_t x14;  uint64_t x13 = _mulx_u64(x5, x9, &x14);
{  uint64_t x17;  uint64_t x16 = _mulx_u64(x5, x11, &x17);
{  uint64_t x20;  uint64_t x19 = _mulx_u64(x5, x10, &x20);
{  uint64_t x22; uint8_t x23 = _addcarryx_u64(0x0, x14, x16, &x22);
{  uint64_t x25; uint8_t x26 = _addcarryx_u64(x23, x17, x19, &x25);
{  uint64_t x28; uint8_t _ = _addcarryx_u64(0x0, x26, x20, &x28);
{  uint64_t x32;  uint64_t x31 = _mulx_u64(x13, 0xffffffffffffffffL, &x32);
{  uint64_t x35;  uint64_t x34 = _mulx_u64(x13, 0xfffffffffffffffeL, &x35);
{  uint64_t x38;  uint64_t x37 = _mulx_u64(x13, 0xffffffffffffffffL, &x38);
{  uint64_t x40; uint8_t x41 = _addcarryx_u64(0x0, x32, x34, &x40);
{  uint64_t x43; uint8_t x44 = _addcarryx_u64(x41, x35, x37, &x43);
{  uint64_t x46; uint8_t _ = _addcarryx_u64(0x0, x44, x38, &x46);
{  uint64_t _; uint8_t x50 = _addcarryx_u64(0x0, x13, x31, &_);
{  uint64_t x52; uint8_t x53 = _addcarryx_u64(x50, x22, x40, &x52);
{  uint64_t x55; uint8_t x56 = _addcarryx_u64(x53, x25, x43, &x55);
{  uint64_t x58; uint8_t x59 = _addcarryx_u64(x56, x28, x46, &x58);
{  uint64_t x62;  uint64_t x61 = _mulx_u64(x7, x9, &x62);
{  uint64_t x65;  uint64_t x64 = _mulx_u64(x7, x11, &x65);
{  uint64_t x68;  uint64_t x67 = _mulx_u64(x7, x10, &x68);
{  uint64_t x70; uint8_t x71 = _addcarryx_u64(0x0, x62, x64, &x70);
{  uint64_t x73; uint8_t x74 = _addcarryx_u64(x71, x65, x67, &x73);
{  uint64_t x76; uint8_t _ = _addcarryx_u64(0x0, x74, x68, &x76);
{  uint64_t x79; uint8_t x80 = _addcarryx_u64(0x0, x52, x61, &x79);
{  uint64_t x82; uint8_t x83 = _addcarryx_u64(x80, x55, x70, &x82);
{  uint64_t x85; uint8_t x86 = _addcarryx_u64(x83, x58, x73, &x85);
{  uint64_t x88; uint8_t x89 = _addcarryx_u64(x86, x59, x76, &x88);
{  uint64_t x92;  uint64_t x91 = _mulx_u64(x79, 0xffffffffffffffffL, &x92);
{  uint64_t x95;  uint64_t x94 = _mulx_u64(x79, 0xfffffffffffffffeL, &x95);
{  uint64_t x98;  uint64_t x97 = _mulx_u64(x79, 0xffffffffffffffffL, &x98);
{  uint64_t x100; uint8_t x101 = _addcarryx_u64(0x0, x92, x94, &x100);
{  uint64_t x103; uint8_t x104 = _addcarryx_u64(x101, x95, x97, &x103);
{  uint64_t x106; uint8_t _ = _addcarryx_u64(0x0, x104, x98, &x106);
{  uint64_t _; uint8_t x110 = _addcarryx_u64(0x0, x79, x91, &_);
{  uint64_t x112; uint8_t x113 = _addcarryx_u64(x110, x82, x100, &x112);
{  uint64_t x115; uint8_t x116 = _addcarryx_u64(x113, x85, x103, &x115);
{  uint64_t x118; uint8_t x119 = _addcarryx_u64(x116, x88, x106, &x118);
{  uint8_t x120 = (x119 + x89);
{  uint64_t x123;  uint64_t x122 = _mulx_u64(x6, x9, &x123);
{  uint64_t x126;  uint64_t x125 = _mulx_u64(x6, x11, &x126);
{  uint64_t x129;  uint64_t x128 = _mulx_u64(x6, x10, &x129);
{  uint64_t x131; uint8_t x132 = _addcarryx_u64(0x0, x123, x125, &x131);
{  uint64_t x134; uint8_t x135 = _addcarryx_u64(x132, x126, x128, &x134);
{  uint64_t x137; uint8_t _ = _addcarryx_u64(0x0, x135, x129, &x137);
{  uint64_t x140; uint8_t x141 = _addcarryx_u64(0x0, x112, x122, &x140);
{  uint64_t x143; uint8_t x144 = _addcarryx_u64(x141, x115, x131, &x143);
{  uint64_t x146; uint8_t x147 = _addcarryx_u64(x144, x118, x134, &x146);
{  uint64_t x149; uint8_t x150 = _addcarryx_u64(x147, x120, x137, &x149);
{  uint64_t x153;  uint64_t x152 = _mulx_u64(x140, 0xffffffffffffffffL, &x153);
{  uint64_t x156;  uint64_t x155 = _mulx_u64(x140, 0xfffffffffffffffeL, &x156);
{  uint64_t x159;  uint64_t x158 = _mulx_u64(x140, 0xffffffffffffffffL, &x159);
{  uint64_t x161; uint8_t x162 = _addcarryx_u64(0x0, x153, x155, &x161);
{  uint64_t x164; uint8_t x165 = _addcarryx_u64(x162, x156, x158, &x164);
{  uint64_t x167; uint8_t _ = _addcarryx_u64(0x0, x165, x159, &x167);
{  uint64_t _; uint8_t x171 = _addcarryx_u64(0x0, x140, x152, &_);
{  uint64_t x173; uint8_t x174 = _addcarryx_u64(x171, x143, x161, &x173);
{  uint64_t x176; uint8_t x177 = _addcarryx_u64(x174, x146, x164, &x176);
{  uint64_t x179; uint8_t x180 = _addcarryx_u64(x177, x149, x167, &x179);
{  uint8_t x181 = (x180 + x150);
{  uint64_t x183; uint8_t x184 = _subborrow_u64(0x0, x173, 0xffffffffffffffffL, &x183);
{  uint64_t x186; uint8_t x187 = _subborrow_u64(x184, x176, 0xfffffffffffffffeL, &x186);
{  uint64_t x189; uint8_t x190 = _subborrow_u64(x187, x179, 0xffffffffffffffffL, &x189);
{  uint64_t _; uint8_t x193 = _subborrow_u64(x190, x181, 0x0, &_);
{  uint64_t x194 = cmovznz(x193, x189, x179);
{  uint64_t x195 = cmovznz(x193, x186, x176);
{  uint64_t x196 = cmovznz(x193, x183, x173);
out[0] = x194;
out[1] = x195;
out[2] = x196;
}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
// caller: uint64_t out[3];
