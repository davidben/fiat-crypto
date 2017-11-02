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
{  uint64_t _;  uint64_t x31 = _mulx_u64(x13, 0xf0f0f0f0f0f0f0f1L, &_);
{  uint64_t x35;  uint64_t x34 = _mulx_u64(x31, 0xffffffffffffffefL, &x35);
{  uint64_t x38;  uint64_t x37 = _mulx_u64(x31, 0xffffffffffffffffL, &x38);
{  uint64_t x41;  uint64_t x40 = _mulx_u64(x31, 0xffffff, &x41);
{  uint64_t x43; uint8_t x44 = _addcarryx_u64(0x0, x35, x37, &x43);
{  uint64_t x46; uint8_t x47 = _addcarryx_u64(x44, x38, x40, &x46);
{  uint64_t x49; uint8_t _ = _addcarryx_u64(0x0, x47, x41, &x49);
{  uint64_t _; uint8_t x53 = _addcarryx_u64(0x0, x13, x34, &_);
{  uint64_t x55; uint8_t x56 = _addcarryx_u64(x53, x22, x43, &x55);
{  uint64_t x58; uint8_t x59 = _addcarryx_u64(x56, x25, x46, &x58);
{  uint64_t x61; uint8_t x62 = _addcarryx_u64(x59, x28, x49, &x61);
{  uint64_t x65;  uint64_t x64 = _mulx_u64(x7, x9, &x65);
{  uint64_t x68;  uint64_t x67 = _mulx_u64(x7, x11, &x68);
{  uint64_t x71;  uint64_t x70 = _mulx_u64(x7, x10, &x71);
{  uint64_t x73; uint8_t x74 = _addcarryx_u64(0x0, x65, x67, &x73);
{  uint64_t x76; uint8_t x77 = _addcarryx_u64(x74, x68, x70, &x76);
{  uint64_t x79; uint8_t _ = _addcarryx_u64(0x0, x77, x71, &x79);
{  uint64_t x82; uint8_t x83 = _addcarryx_u64(0x0, x55, x64, &x82);
{  uint64_t x85; uint8_t x86 = _addcarryx_u64(x83, x58, x73, &x85);
{  uint64_t x88; uint8_t x89 = _addcarryx_u64(x86, x61, x76, &x88);
{  uint64_t x91; uint8_t x92 = _addcarryx_u64(x89, x62, x79, &x91);
{  uint64_t _;  uint64_t x94 = _mulx_u64(x82, 0xf0f0f0f0f0f0f0f1L, &_);
{  uint64_t x98;  uint64_t x97 = _mulx_u64(x94, 0xffffffffffffffefL, &x98);
{  uint64_t x101;  uint64_t x100 = _mulx_u64(x94, 0xffffffffffffffffL, &x101);
{  uint64_t x104;  uint64_t x103 = _mulx_u64(x94, 0xffffff, &x104);
{  uint64_t x106; uint8_t x107 = _addcarryx_u64(0x0, x98, x100, &x106);
{  uint64_t x109; uint8_t x110 = _addcarryx_u64(x107, x101, x103, &x109);
{  uint64_t x112; uint8_t _ = _addcarryx_u64(0x0, x110, x104, &x112);
{  uint64_t _; uint8_t x116 = _addcarryx_u64(0x0, x82, x97, &_);
{  uint64_t x118; uint8_t x119 = _addcarryx_u64(x116, x85, x106, &x118);
{  uint64_t x121; uint8_t x122 = _addcarryx_u64(x119, x88, x109, &x121);
{  uint64_t x124; uint8_t x125 = _addcarryx_u64(x122, x91, x112, &x124);
{  uint8_t x126 = (x125 + x92);
{  uint64_t x129;  uint64_t x128 = _mulx_u64(x6, x9, &x129);
{  uint64_t x132;  uint64_t x131 = _mulx_u64(x6, x11, &x132);
{  uint64_t x135;  uint64_t x134 = _mulx_u64(x6, x10, &x135);
{  uint64_t x137; uint8_t x138 = _addcarryx_u64(0x0, x129, x131, &x137);
{  uint64_t x140; uint8_t x141 = _addcarryx_u64(x138, x132, x134, &x140);
{  uint64_t x143; uint8_t _ = _addcarryx_u64(0x0, x141, x135, &x143);
{  uint64_t x146; uint8_t x147 = _addcarryx_u64(0x0, x118, x128, &x146);
{  uint64_t x149; uint8_t x150 = _addcarryx_u64(x147, x121, x137, &x149);
{  uint64_t x152; uint8_t x153 = _addcarryx_u64(x150, x124, x140, &x152);
{  uint64_t x155; uint8_t x156 = _addcarryx_u64(x153, x126, x143, &x155);
{  uint64_t _;  uint64_t x158 = _mulx_u64(x146, 0xf0f0f0f0f0f0f0f1L, &_);
{  uint64_t x162;  uint64_t x161 = _mulx_u64(x158, 0xffffffffffffffefL, &x162);
{  uint64_t x165;  uint64_t x164 = _mulx_u64(x158, 0xffffffffffffffffL, &x165);
{  uint64_t x168;  uint64_t x167 = _mulx_u64(x158, 0xffffff, &x168);
{  uint64_t x170; uint8_t x171 = _addcarryx_u64(0x0, x162, x164, &x170);
{  uint64_t x173; uint8_t x174 = _addcarryx_u64(x171, x165, x167, &x173);
{  uint64_t x176; uint8_t _ = _addcarryx_u64(0x0, x174, x168, &x176);
{  uint64_t _; uint8_t x180 = _addcarryx_u64(0x0, x146, x161, &_);
{  uint64_t x182; uint8_t x183 = _addcarryx_u64(x180, x149, x170, &x182);
{  uint64_t x185; uint8_t x186 = _addcarryx_u64(x183, x152, x173, &x185);
{  uint64_t x188; uint8_t x189 = _addcarryx_u64(x186, x155, x176, &x188);
{  uint8_t x190 = (x189 + x156);
{  uint64_t x192; uint8_t x193 = _subborrow_u64(0x0, x182, 0xffffffffffffffefL, &x192);
{  uint64_t x195; uint8_t x196 = _subborrow_u64(x193, x185, 0xffffffffffffffffL, &x195);
{  uint64_t x198; uint8_t x199 = _subborrow_u64(x196, x188, 0xffffff, &x198);
{  uint64_t _; uint8_t x202 = _subborrow_u64(x199, x190, 0x0, &_);
{  uint64_t x203 = cmovznz(x202, x198, x188);
{  uint64_t x204 = cmovznz(x202, x195, x185);
{  uint64_t x205 = cmovznz(x202, x192, x182);
out[0] = x203;
out[1] = x204;
out[2] = x205;
}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
// caller: uint64_t out[3];
