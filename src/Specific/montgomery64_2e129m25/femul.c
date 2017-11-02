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
{  uint64_t _;  uint64_t x31 = _mulx_u64(x13, 0x8f5c28f5c28f5c29L, &_);
{  uint64_t x35;  uint64_t x34 = _mulx_u64(x31, 0xffffffffffffffe7L, &x35);
{  uint64_t x38;  uint64_t x37 = _mulx_u64(x31, 0xffffffffffffffffL, &x38);
{  uint64_t x40; uint8_t x41 = _addcarryx_u64(0x0, x35, x37, &x40);
{  uint64_t x43; uint8_t x44 = _addcarryx_u64(x41, x38, x31, &x43);
{  uint64_t _; uint8_t x47 = _addcarryx_u64(0x0, x13, x34, &_);
{  uint64_t x49; uint8_t x50 = _addcarryx_u64(x47, x22, x40, &x49);
{  uint64_t x52; uint8_t x53 = _addcarryx_u64(x50, x25, x43, &x52);
{  uint64_t x55; uint8_t x56 = _addcarryx_u64(x53, x28, x44, &x55);
{  uint64_t x59;  uint64_t x58 = _mulx_u64(x7, x9, &x59);
{  uint64_t x62;  uint64_t x61 = _mulx_u64(x7, x11, &x62);
{  uint64_t x65;  uint64_t x64 = _mulx_u64(x7, x10, &x65);
{  uint64_t x67; uint8_t x68 = _addcarryx_u64(0x0, x59, x61, &x67);
{  uint64_t x70; uint8_t x71 = _addcarryx_u64(x68, x62, x64, &x70);
{  uint64_t x73; uint8_t _ = _addcarryx_u64(0x0, x71, x65, &x73);
{  uint64_t x76; uint8_t x77 = _addcarryx_u64(0x0, x49, x58, &x76);
{  uint64_t x79; uint8_t x80 = _addcarryx_u64(x77, x52, x67, &x79);
{  uint64_t x82; uint8_t x83 = _addcarryx_u64(x80, x55, x70, &x82);
{  uint64_t x85; uint8_t x86 = _addcarryx_u64(x83, x56, x73, &x85);
{  uint64_t _;  uint64_t x88 = _mulx_u64(x76, 0x8f5c28f5c28f5c29L, &_);
{  uint64_t x92;  uint64_t x91 = _mulx_u64(x88, 0xffffffffffffffe7L, &x92);
{  uint64_t x95;  uint64_t x94 = _mulx_u64(x88, 0xffffffffffffffffL, &x95);
{  uint64_t x97; uint8_t x98 = _addcarryx_u64(0x0, x92, x94, &x97);
{  uint64_t x100; uint8_t x101 = _addcarryx_u64(x98, x95, x88, &x100);
{  uint64_t _; uint8_t x104 = _addcarryx_u64(0x0, x76, x91, &_);
{  uint64_t x106; uint8_t x107 = _addcarryx_u64(x104, x79, x97, &x106);
{  uint64_t x109; uint8_t x110 = _addcarryx_u64(x107, x82, x100, &x109);
{  uint64_t x112; uint8_t x113 = _addcarryx_u64(x110, x85, x101, &x112);
{  uint8_t x114 = (x113 + x86);
{  uint64_t x117;  uint64_t x116 = _mulx_u64(x6, x9, &x117);
{  uint64_t x120;  uint64_t x119 = _mulx_u64(x6, x11, &x120);
{  uint64_t x123;  uint64_t x122 = _mulx_u64(x6, x10, &x123);
{  uint64_t x125; uint8_t x126 = _addcarryx_u64(0x0, x117, x119, &x125);
{  uint64_t x128; uint8_t x129 = _addcarryx_u64(x126, x120, x122, &x128);
{  uint64_t x131; uint8_t _ = _addcarryx_u64(0x0, x129, x123, &x131);
{  uint64_t x134; uint8_t x135 = _addcarryx_u64(0x0, x106, x116, &x134);
{  uint64_t x137; uint8_t x138 = _addcarryx_u64(x135, x109, x125, &x137);
{  uint64_t x140; uint8_t x141 = _addcarryx_u64(x138, x112, x128, &x140);
{  uint64_t x143; uint8_t x144 = _addcarryx_u64(x141, x114, x131, &x143);
{  uint64_t _;  uint64_t x146 = _mulx_u64(x134, 0x8f5c28f5c28f5c29L, &_);
{  uint64_t x150;  uint64_t x149 = _mulx_u64(x146, 0xffffffffffffffe7L, &x150);
{  uint64_t x153;  uint64_t x152 = _mulx_u64(x146, 0xffffffffffffffffL, &x153);
{  uint64_t x155; uint8_t x156 = _addcarryx_u64(0x0, x150, x152, &x155);
{  uint64_t x158; uint8_t x159 = _addcarryx_u64(x156, x153, x146, &x158);
{  uint64_t _; uint8_t x162 = _addcarryx_u64(0x0, x134, x149, &_);
{  uint64_t x164; uint8_t x165 = _addcarryx_u64(x162, x137, x155, &x164);
{  uint64_t x167; uint8_t x168 = _addcarryx_u64(x165, x140, x158, &x167);
{  uint64_t x170; uint8_t x171 = _addcarryx_u64(x168, x143, x159, &x170);
{  uint8_t x172 = (x171 + x144);
{  uint64_t x174; uint8_t x175 = _subborrow_u64(0x0, x164, 0xffffffffffffffe7L, &x174);
{  uint64_t x177; uint8_t x178 = _subborrow_u64(x175, x167, 0xffffffffffffffffL, &x177);
{  uint64_t x180; uint8_t x181 = _subborrow_u64(x178, x170, 0x1, &x180);
{  uint64_t _; uint8_t x184 = _subborrow_u64(x181, x172, 0x0, &_);
{  uint64_t x185 = cmovznz(x184, x180, x170);
{  uint64_t x186 = cmovznz(x184, x177, x167);
{  uint64_t x187 = cmovznz(x184, x174, x164);
out[0] = x185;
out[1] = x186;
out[2] = x187;
}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
// caller: uint64_t out[3];
