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
{  uint64_t x42;  uint64_t x41 = _mulx_u64(x17, 0xffffffffffffffffL, &x42);
{  uint64_t x45;  uint64_t x44 = _mulx_u64(x17, 0xffffffffffffffffL, &x45);
{  uint64_t x48;  uint64_t x47 = _mulx_u64(x17, 0xffffffffffffffffL, &x48);
{  uint64_t x51;  uint64_t x50 = _mulx_u64(x17, 0x3f80ffffffffffff, &x51);
{  uint64_t x53; uint8_t x54 = _addcarryx_u64(0x0, x42, x44, &x53);
{  uint64_t x56; uint8_t x57 = _addcarryx_u64(x54, x45, x47, &x56);
{  uint64_t x59; uint8_t x60 = _addcarryx_u64(x57, x48, x50, &x59);
{  uint64_t x62; uint8_t _ = _addcarryx_u64(0x0, x60, x51, &x62);
{  uint64_t _; uint8_t x66 = _addcarryx_u64(0x0, x17, x41, &_);
{  uint64_t x68; uint8_t x69 = _addcarryx_u64(x66, x29, x53, &x68);
{  uint64_t x71; uint8_t x72 = _addcarryx_u64(x69, x32, x56, &x71);
{  uint64_t x74; uint8_t x75 = _addcarryx_u64(x72, x35, x59, &x74);
{  uint64_t x77; uint8_t x78 = _addcarryx_u64(x75, x38, x62, &x77);
{  uint64_t x81;  uint64_t x80 = _mulx_u64(x7, x11, &x81);
{  uint64_t x84;  uint64_t x83 = _mulx_u64(x7, x13, &x84);
{  uint64_t x87;  uint64_t x86 = _mulx_u64(x7, x15, &x87);
{  uint64_t x90;  uint64_t x89 = _mulx_u64(x7, x14, &x90);
{  uint64_t x92; uint8_t x93 = _addcarryx_u64(0x0, x81, x83, &x92);
{  uint64_t x95; uint8_t x96 = _addcarryx_u64(x93, x84, x86, &x95);
{  uint64_t x98; uint8_t x99 = _addcarryx_u64(x96, x87, x89, &x98);
{  uint64_t x101; uint8_t _ = _addcarryx_u64(0x0, x99, x90, &x101);
{  uint64_t x104; uint8_t x105 = _addcarryx_u64(0x0, x68, x80, &x104);
{  uint64_t x107; uint8_t x108 = _addcarryx_u64(x105, x71, x92, &x107);
{  uint64_t x110; uint8_t x111 = _addcarryx_u64(x108, x74, x95, &x110);
{  uint64_t x113; uint8_t x114 = _addcarryx_u64(x111, x77, x98, &x113);
{  uint64_t x116; uint8_t x117 = _addcarryx_u64(x114, x78, x101, &x116);
{  uint64_t x120;  uint64_t x119 = _mulx_u64(x104, 0xffffffffffffffffL, &x120);
{  uint64_t x123;  uint64_t x122 = _mulx_u64(x104, 0xffffffffffffffffL, &x123);
{  uint64_t x126;  uint64_t x125 = _mulx_u64(x104, 0xffffffffffffffffL, &x126);
{  uint64_t x129;  uint64_t x128 = _mulx_u64(x104, 0x3f80ffffffffffff, &x129);
{  uint64_t x131; uint8_t x132 = _addcarryx_u64(0x0, x120, x122, &x131);
{  uint64_t x134; uint8_t x135 = _addcarryx_u64(x132, x123, x125, &x134);
{  uint64_t x137; uint8_t x138 = _addcarryx_u64(x135, x126, x128, &x137);
{  uint64_t x140; uint8_t _ = _addcarryx_u64(0x0, x138, x129, &x140);
{  uint64_t _; uint8_t x144 = _addcarryx_u64(0x0, x104, x119, &_);
{  uint64_t x146; uint8_t x147 = _addcarryx_u64(x144, x107, x131, &x146);
{  uint64_t x149; uint8_t x150 = _addcarryx_u64(x147, x110, x134, &x149);
{  uint64_t x152; uint8_t x153 = _addcarryx_u64(x150, x113, x137, &x152);
{  uint64_t x155; uint8_t x156 = _addcarryx_u64(x153, x116, x140, &x155);
{  uint8_t x157 = (x156 + x117);
{  uint64_t x160;  uint64_t x159 = _mulx_u64(x9, x11, &x160);
{  uint64_t x163;  uint64_t x162 = _mulx_u64(x9, x13, &x163);
{  uint64_t x166;  uint64_t x165 = _mulx_u64(x9, x15, &x166);
{  uint64_t x169;  uint64_t x168 = _mulx_u64(x9, x14, &x169);
{  uint64_t x171; uint8_t x172 = _addcarryx_u64(0x0, x160, x162, &x171);
{  uint64_t x174; uint8_t x175 = _addcarryx_u64(x172, x163, x165, &x174);
{  uint64_t x177; uint8_t x178 = _addcarryx_u64(x175, x166, x168, &x177);
{  uint64_t x180; uint8_t _ = _addcarryx_u64(0x0, x178, x169, &x180);
{  uint64_t x183; uint8_t x184 = _addcarryx_u64(0x0, x146, x159, &x183);
{  uint64_t x186; uint8_t x187 = _addcarryx_u64(x184, x149, x171, &x186);
{  uint64_t x189; uint8_t x190 = _addcarryx_u64(x187, x152, x174, &x189);
{  uint64_t x192; uint8_t x193 = _addcarryx_u64(x190, x155, x177, &x192);
{  uint64_t x195; uint8_t x196 = _addcarryx_u64(x193, x157, x180, &x195);
{  uint64_t x199;  uint64_t x198 = _mulx_u64(x183, 0xffffffffffffffffL, &x199);
{  uint64_t x202;  uint64_t x201 = _mulx_u64(x183, 0xffffffffffffffffL, &x202);
{  uint64_t x205;  uint64_t x204 = _mulx_u64(x183, 0xffffffffffffffffL, &x205);
{  uint64_t x208;  uint64_t x207 = _mulx_u64(x183, 0x3f80ffffffffffff, &x208);
{  uint64_t x210; uint8_t x211 = _addcarryx_u64(0x0, x199, x201, &x210);
{  uint64_t x213; uint8_t x214 = _addcarryx_u64(x211, x202, x204, &x213);
{  uint64_t x216; uint8_t x217 = _addcarryx_u64(x214, x205, x207, &x216);
{  uint64_t x219; uint8_t _ = _addcarryx_u64(0x0, x217, x208, &x219);
{  uint64_t _; uint8_t x223 = _addcarryx_u64(0x0, x183, x198, &_);
{  uint64_t x225; uint8_t x226 = _addcarryx_u64(x223, x186, x210, &x225);
{  uint64_t x228; uint8_t x229 = _addcarryx_u64(x226, x189, x213, &x228);
{  uint64_t x231; uint8_t x232 = _addcarryx_u64(x229, x192, x216, &x231);
{  uint64_t x234; uint8_t x235 = _addcarryx_u64(x232, x195, x219, &x234);
{  uint8_t x236 = (x235 + x196);
{  uint64_t x239;  uint64_t x238 = _mulx_u64(x8, x11, &x239);
{  uint64_t x242;  uint64_t x241 = _mulx_u64(x8, x13, &x242);
{  uint64_t x245;  uint64_t x244 = _mulx_u64(x8, x15, &x245);
{  uint64_t x248;  uint64_t x247 = _mulx_u64(x8, x14, &x248);
{  uint64_t x250; uint8_t x251 = _addcarryx_u64(0x0, x239, x241, &x250);
{  uint64_t x253; uint8_t x254 = _addcarryx_u64(x251, x242, x244, &x253);
{  uint64_t x256; uint8_t x257 = _addcarryx_u64(x254, x245, x247, &x256);
{  uint64_t x259; uint8_t _ = _addcarryx_u64(0x0, x257, x248, &x259);
{  uint64_t x262; uint8_t x263 = _addcarryx_u64(0x0, x225, x238, &x262);
{  uint64_t x265; uint8_t x266 = _addcarryx_u64(x263, x228, x250, &x265);
{  uint64_t x268; uint8_t x269 = _addcarryx_u64(x266, x231, x253, &x268);
{  uint64_t x271; uint8_t x272 = _addcarryx_u64(x269, x234, x256, &x271);
{  uint64_t x274; uint8_t x275 = _addcarryx_u64(x272, x236, x259, &x274);
{  uint64_t x278;  uint64_t x277 = _mulx_u64(x262, 0xffffffffffffffffL, &x278);
{  uint64_t x281;  uint64_t x280 = _mulx_u64(x262, 0xffffffffffffffffL, &x281);
{  uint64_t x284;  uint64_t x283 = _mulx_u64(x262, 0xffffffffffffffffL, &x284);
{  uint64_t x287;  uint64_t x286 = _mulx_u64(x262, 0x3f80ffffffffffff, &x287);
{  uint64_t x289; uint8_t x290 = _addcarryx_u64(0x0, x278, x280, &x289);
{  uint64_t x292; uint8_t x293 = _addcarryx_u64(x290, x281, x283, &x292);
{  uint64_t x295; uint8_t x296 = _addcarryx_u64(x293, x284, x286, &x295);
{  uint64_t x298; uint8_t _ = _addcarryx_u64(0x0, x296, x287, &x298);
{  uint64_t _; uint8_t x302 = _addcarryx_u64(0x0, x262, x277, &_);
{  uint64_t x304; uint8_t x305 = _addcarryx_u64(x302, x265, x289, &x304);
{  uint64_t x307; uint8_t x308 = _addcarryx_u64(x305, x268, x292, &x307);
{  uint64_t x310; uint8_t x311 = _addcarryx_u64(x308, x271, x295, &x310);
{  uint64_t x313; uint8_t x314 = _addcarryx_u64(x311, x274, x298, &x313);
{  uint8_t x315 = (x314 + x275);
{  uint64_t x317; uint8_t x318 = _subborrow_u64(0x0, x304, 0xffffffffffffffffL, &x317);
{  uint64_t x320; uint8_t x321 = _subborrow_u64(x318, x307, 0xffffffffffffffffL, &x320);
{  uint64_t x323; uint8_t x324 = _subborrow_u64(x321, x310, 0xffffffffffffffffL, &x323);
{  uint64_t x326; uint8_t x327 = _subborrow_u64(x324, x313, 0x3f80ffffffffffff, &x326);
{  uint64_t _; uint8_t x330 = _subborrow_u64(x327, x315, 0x0, &_);
{  uint64_t x331 = cmovznz(x330, x326, x313);
{  uint64_t x332 = cmovznz(x330, x323, x310);
{  uint64_t x333 = cmovznz(x330, x320, x307);
{  uint64_t x334 = cmovznz(x330, x317, x304);
out[0] = x331;
out[1] = x332;
out[2] = x333;
out[3] = x334;
}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
// caller: uint64_t out[4];
