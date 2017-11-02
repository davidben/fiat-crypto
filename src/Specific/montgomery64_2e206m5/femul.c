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

void force_inline femul(uint64_t* out, uint64_t x8, uint64_t x9, uint64_t x7, uint64_t x5, uint64_t x14, uint64_t x15, uint64_t x13, uint64_t x11)
{  uint64_t x18;  uint64_t x17 = _mulx_u64(x5, x11, &x18);
{  uint64_t x21;  uint64_t x20 = _mulx_u64(x5, x13, &x21);
{  uint64_t x24;  uint64_t x23 = _mulx_u64(x5, x15, &x24);
{  uint64_t x27;  uint64_t x26 = _mulx_u64(x5, x14, &x27);
{  uint64_t x29; uint8_t x30 = _addcarryx_u64(0x0, x18, x20, &x29);
{  uint64_t x32; uint8_t x33 = _addcarryx_u64(x30, x21, x23, &x32);
{  uint64_t x35; uint8_t x36 = _addcarryx_u64(x33, x24, x26, &x35);
{  uint64_t x38; uint8_t _ = _addcarryx_u64(0x0, x36, x27, &x38);
{  uint64_t _;  uint64_t x41 = _mulx_u64(x17, 0xcccccccccccccccdL, &_);
{  uint64_t x45;  uint64_t x44 = _mulx_u64(x41, 0xfffffffffffffffbL, &x45);
{  uint64_t x48;  uint64_t x47 = _mulx_u64(x41, 0xffffffffffffffffL, &x48);
{  uint64_t x51;  uint64_t x50 = _mulx_u64(x41, 0xffffffffffffffffL, &x51);
{  uint64_t x54;  uint64_t x53 = _mulx_u64(x41, 0x3fff, &x54);
{  uint64_t x56; uint8_t x57 = _addcarryx_u64(0x0, x45, x47, &x56);
{  uint64_t x59; uint8_t x60 = _addcarryx_u64(x57, x48, x50, &x59);
{  uint64_t x62; uint8_t x63 = _addcarryx_u64(x60, x51, x53, &x62);
{  uint64_t x65; uint8_t _ = _addcarryx_u64(0x0, x63, x54, &x65);
{  uint64_t _; uint8_t x69 = _addcarryx_u64(0x0, x17, x44, &_);
{  uint64_t x71; uint8_t x72 = _addcarryx_u64(x69, x29, x56, &x71);
{  uint64_t x74; uint8_t x75 = _addcarryx_u64(x72, x32, x59, &x74);
{  uint64_t x77; uint8_t x78 = _addcarryx_u64(x75, x35, x62, &x77);
{  uint64_t x80; uint8_t x81 = _addcarryx_u64(x78, x38, x65, &x80);
{  uint64_t x84;  uint64_t x83 = _mulx_u64(x7, x11, &x84);
{  uint64_t x87;  uint64_t x86 = _mulx_u64(x7, x13, &x87);
{  uint64_t x90;  uint64_t x89 = _mulx_u64(x7, x15, &x90);
{  uint64_t x93;  uint64_t x92 = _mulx_u64(x7, x14, &x93);
{  uint64_t x95; uint8_t x96 = _addcarryx_u64(0x0, x84, x86, &x95);
{  uint64_t x98; uint8_t x99 = _addcarryx_u64(x96, x87, x89, &x98);
{  uint64_t x101; uint8_t x102 = _addcarryx_u64(x99, x90, x92, &x101);
{  uint64_t x104; uint8_t _ = _addcarryx_u64(0x0, x102, x93, &x104);
{  uint64_t x107; uint8_t x108 = _addcarryx_u64(0x0, x71, x83, &x107);
{  uint64_t x110; uint8_t x111 = _addcarryx_u64(x108, x74, x95, &x110);
{  uint64_t x113; uint8_t x114 = _addcarryx_u64(x111, x77, x98, &x113);
{  uint64_t x116; uint8_t x117 = _addcarryx_u64(x114, x80, x101, &x116);
{  uint64_t x119; uint8_t x120 = _addcarryx_u64(x117, x81, x104, &x119);
{  uint64_t _;  uint64_t x122 = _mulx_u64(x107, 0xcccccccccccccccdL, &_);
{  uint64_t x126;  uint64_t x125 = _mulx_u64(x122, 0xfffffffffffffffbL, &x126);
{  uint64_t x129;  uint64_t x128 = _mulx_u64(x122, 0xffffffffffffffffL, &x129);
{  uint64_t x132;  uint64_t x131 = _mulx_u64(x122, 0xffffffffffffffffL, &x132);
{  uint64_t x135;  uint64_t x134 = _mulx_u64(x122, 0x3fff, &x135);
{  uint64_t x137; uint8_t x138 = _addcarryx_u64(0x0, x126, x128, &x137);
{  uint64_t x140; uint8_t x141 = _addcarryx_u64(x138, x129, x131, &x140);
{  uint64_t x143; uint8_t x144 = _addcarryx_u64(x141, x132, x134, &x143);
{  uint64_t x146; uint8_t _ = _addcarryx_u64(0x0, x144, x135, &x146);
{  uint64_t _; uint8_t x150 = _addcarryx_u64(0x0, x107, x125, &_);
{  uint64_t x152; uint8_t x153 = _addcarryx_u64(x150, x110, x137, &x152);
{  uint64_t x155; uint8_t x156 = _addcarryx_u64(x153, x113, x140, &x155);
{  uint64_t x158; uint8_t x159 = _addcarryx_u64(x156, x116, x143, &x158);
{  uint64_t x161; uint8_t x162 = _addcarryx_u64(x159, x119, x146, &x161);
{  uint8_t x163 = (x162 + x120);
{  uint64_t x166;  uint64_t x165 = _mulx_u64(x9, x11, &x166);
{  uint64_t x169;  uint64_t x168 = _mulx_u64(x9, x13, &x169);
{  uint64_t x172;  uint64_t x171 = _mulx_u64(x9, x15, &x172);
{  uint64_t x175;  uint64_t x174 = _mulx_u64(x9, x14, &x175);
{  uint64_t x177; uint8_t x178 = _addcarryx_u64(0x0, x166, x168, &x177);
{  uint64_t x180; uint8_t x181 = _addcarryx_u64(x178, x169, x171, &x180);
{  uint64_t x183; uint8_t x184 = _addcarryx_u64(x181, x172, x174, &x183);
{  uint64_t x186; uint8_t _ = _addcarryx_u64(0x0, x184, x175, &x186);
{  uint64_t x189; uint8_t x190 = _addcarryx_u64(0x0, x152, x165, &x189);
{  uint64_t x192; uint8_t x193 = _addcarryx_u64(x190, x155, x177, &x192);
{  uint64_t x195; uint8_t x196 = _addcarryx_u64(x193, x158, x180, &x195);
{  uint64_t x198; uint8_t x199 = _addcarryx_u64(x196, x161, x183, &x198);
{  uint64_t x201; uint8_t x202 = _addcarryx_u64(x199, x163, x186, &x201);
{  uint64_t _;  uint64_t x204 = _mulx_u64(x189, 0xcccccccccccccccdL, &_);
{  uint64_t x208;  uint64_t x207 = _mulx_u64(x204, 0xfffffffffffffffbL, &x208);
{  uint64_t x211;  uint64_t x210 = _mulx_u64(x204, 0xffffffffffffffffL, &x211);
{  uint64_t x214;  uint64_t x213 = _mulx_u64(x204, 0xffffffffffffffffL, &x214);
{  uint64_t x217;  uint64_t x216 = _mulx_u64(x204, 0x3fff, &x217);
{  uint64_t x219; uint8_t x220 = _addcarryx_u64(0x0, x208, x210, &x219);
{  uint64_t x222; uint8_t x223 = _addcarryx_u64(x220, x211, x213, &x222);
{  uint64_t x225; uint8_t x226 = _addcarryx_u64(x223, x214, x216, &x225);
{  uint64_t x228; uint8_t _ = _addcarryx_u64(0x0, x226, x217, &x228);
{  uint64_t _; uint8_t x232 = _addcarryx_u64(0x0, x189, x207, &_);
{  uint64_t x234; uint8_t x235 = _addcarryx_u64(x232, x192, x219, &x234);
{  uint64_t x237; uint8_t x238 = _addcarryx_u64(x235, x195, x222, &x237);
{  uint64_t x240; uint8_t x241 = _addcarryx_u64(x238, x198, x225, &x240);
{  uint64_t x243; uint8_t x244 = _addcarryx_u64(x241, x201, x228, &x243);
{  uint8_t x245 = (x244 + x202);
{  uint64_t x248;  uint64_t x247 = _mulx_u64(x8, x11, &x248);
{  uint64_t x251;  uint64_t x250 = _mulx_u64(x8, x13, &x251);
{  uint64_t x254;  uint64_t x253 = _mulx_u64(x8, x15, &x254);
{  uint64_t x257;  uint64_t x256 = _mulx_u64(x8, x14, &x257);
{  uint64_t x259; uint8_t x260 = _addcarryx_u64(0x0, x248, x250, &x259);
{  uint64_t x262; uint8_t x263 = _addcarryx_u64(x260, x251, x253, &x262);
{  uint64_t x265; uint8_t x266 = _addcarryx_u64(x263, x254, x256, &x265);
{  uint64_t x268; uint8_t _ = _addcarryx_u64(0x0, x266, x257, &x268);
{  uint64_t x271; uint8_t x272 = _addcarryx_u64(0x0, x234, x247, &x271);
{  uint64_t x274; uint8_t x275 = _addcarryx_u64(x272, x237, x259, &x274);
{  uint64_t x277; uint8_t x278 = _addcarryx_u64(x275, x240, x262, &x277);
{  uint64_t x280; uint8_t x281 = _addcarryx_u64(x278, x243, x265, &x280);
{  uint64_t x283; uint8_t x284 = _addcarryx_u64(x281, x245, x268, &x283);
{  uint64_t _;  uint64_t x286 = _mulx_u64(x271, 0xcccccccccccccccdL, &_);
{  uint64_t x290;  uint64_t x289 = _mulx_u64(x286, 0xfffffffffffffffbL, &x290);
{  uint64_t x293;  uint64_t x292 = _mulx_u64(x286, 0xffffffffffffffffL, &x293);
{  uint64_t x296;  uint64_t x295 = _mulx_u64(x286, 0xffffffffffffffffL, &x296);
{  uint64_t x299;  uint64_t x298 = _mulx_u64(x286, 0x3fff, &x299);
{  uint64_t x301; uint8_t x302 = _addcarryx_u64(0x0, x290, x292, &x301);
{  uint64_t x304; uint8_t x305 = _addcarryx_u64(x302, x293, x295, &x304);
{  uint64_t x307; uint8_t x308 = _addcarryx_u64(x305, x296, x298, &x307);
{  uint64_t x310; uint8_t _ = _addcarryx_u64(0x0, x308, x299, &x310);
{  uint64_t _; uint8_t x314 = _addcarryx_u64(0x0, x271, x289, &_);
{  uint64_t x316; uint8_t x317 = _addcarryx_u64(x314, x274, x301, &x316);
{  uint64_t x319; uint8_t x320 = _addcarryx_u64(x317, x277, x304, &x319);
{  uint64_t x322; uint8_t x323 = _addcarryx_u64(x320, x280, x307, &x322);
{  uint64_t x325; uint8_t x326 = _addcarryx_u64(x323, x283, x310, &x325);
{  uint8_t x327 = (x326 + x284);
{  uint64_t x329; uint8_t x330 = _subborrow_u64(0x0, x316, 0xfffffffffffffffbL, &x329);
{  uint64_t x332; uint8_t x333 = _subborrow_u64(x330, x319, 0xffffffffffffffffL, &x332);
{  uint64_t x335; uint8_t x336 = _subborrow_u64(x333, x322, 0xffffffffffffffffL, &x335);
{  uint64_t x338; uint8_t x339 = _subborrow_u64(x336, x325, 0x3fff, &x338);
{  uint64_t _; uint8_t x342 = _subborrow_u64(x339, x327, 0x0, &_);
{  uint64_t x343 = cmovznz(x342, x338, x325);
{  uint64_t x344 = cmovznz(x342, x335, x322);
{  uint64_t x345 = cmovznz(x342, x332, x319);
{  uint64_t x346 = cmovznz(x342, x329, x316);
out[0] = x343;
out[1] = x344;
out[2] = x345;
out[3] = x346;
}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
// caller: uint64_t out[4];
