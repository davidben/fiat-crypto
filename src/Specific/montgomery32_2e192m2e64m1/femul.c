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

void force_inline femul(uint64_t* out, uint64_t x12, uint64_t x13, uint64_t x11, uint64_t x9, uint64_t x7, uint64_t x5, uint64_t x22, uint64_t x23, uint64_t x21, uint64_t x19, uint64_t x17, uint64_t x15)
{  uint32_t x26;  uint32_t x25 = _mulx_u32(x5, x15, &x26);
{  uint32_t x29;  uint32_t x28 = _mulx_u32(x5, x17, &x29);
{  uint32_t x32;  uint32_t x31 = _mulx_u32(x5, x19, &x32);
{  uint32_t x35;  uint32_t x34 = _mulx_u32(x5, x21, &x35);
{  uint32_t x38;  uint32_t x37 = _mulx_u32(x5, x23, &x38);
{  uint32_t x41;  uint32_t x40 = _mulx_u32(x5, x22, &x41);
{  uint32_t x43; uint8_t x44 = _addcarryx_u32(0x0, x26, x28, &x43);
{  uint32_t x46; uint8_t x47 = _addcarryx_u32(x44, x29, x31, &x46);
{  uint32_t x49; uint8_t x50 = _addcarryx_u32(x47, x32, x34, &x49);
{  uint32_t x52; uint8_t x53 = _addcarryx_u32(x50, x35, x37, &x52);
{  uint32_t x55; uint8_t x56 = _addcarryx_u32(x53, x38, x40, &x55);
{  uint32_t x58; uint8_t _ = _addcarryx_u32(0x0, x56, x41, &x58);
{  uint32_t x62;  uint32_t x61 = _mulx_u32(x25, 0xffffffff, &x62);
{  uint32_t x65;  uint32_t x64 = _mulx_u32(x25, 0xffffffff, &x65);
{  uint32_t x68;  uint32_t x67 = _mulx_u32(x25, 0xfffffffe, &x68);
{  uint32_t x71;  uint32_t x70 = _mulx_u32(x25, 0xffffffff, &x71);
{  uint32_t x74;  uint32_t x73 = _mulx_u32(x25, 0xffffffff, &x74);
{  uint32_t x77;  uint32_t x76 = _mulx_u32(x25, 0xffffffff, &x77);
{  uint32_t x79; uint8_t x80 = _addcarryx_u32(0x0, x62, x64, &x79);
{  uint32_t x82; uint8_t x83 = _addcarryx_u32(x80, x65, x67, &x82);
{  uint32_t x85; uint8_t x86 = _addcarryx_u32(x83, x68, x70, &x85);
{  uint32_t x88; uint8_t x89 = _addcarryx_u32(x86, x71, x73, &x88);
{  uint32_t x91; uint8_t x92 = _addcarryx_u32(x89, x74, x76, &x91);
{  uint32_t x94; uint8_t _ = _addcarryx_u32(0x0, x92, x77, &x94);
{  uint32_t _; uint8_t x98 = _addcarryx_u32(0x0, x25, x61, &_);
{  uint32_t x100; uint8_t x101 = _addcarryx_u32(x98, x43, x79, &x100);
{  uint32_t x103; uint8_t x104 = _addcarryx_u32(x101, x46, x82, &x103);
{  uint32_t x106; uint8_t x107 = _addcarryx_u32(x104, x49, x85, &x106);
{  uint32_t x109; uint8_t x110 = _addcarryx_u32(x107, x52, x88, &x109);
{  uint32_t x112; uint8_t x113 = _addcarryx_u32(x110, x55, x91, &x112);
{  uint32_t x115; uint8_t x116 = _addcarryx_u32(x113, x58, x94, &x115);
{  uint32_t x119;  uint32_t x118 = _mulx_u32(x7, x15, &x119);
{  uint32_t x122;  uint32_t x121 = _mulx_u32(x7, x17, &x122);
{  uint32_t x125;  uint32_t x124 = _mulx_u32(x7, x19, &x125);
{  uint32_t x128;  uint32_t x127 = _mulx_u32(x7, x21, &x128);
{  uint32_t x131;  uint32_t x130 = _mulx_u32(x7, x23, &x131);
{  uint32_t x134;  uint32_t x133 = _mulx_u32(x7, x22, &x134);
{  uint32_t x136; uint8_t x137 = _addcarryx_u32(0x0, x119, x121, &x136);
{  uint32_t x139; uint8_t x140 = _addcarryx_u32(x137, x122, x124, &x139);
{  uint32_t x142; uint8_t x143 = _addcarryx_u32(x140, x125, x127, &x142);
{  uint32_t x145; uint8_t x146 = _addcarryx_u32(x143, x128, x130, &x145);
{  uint32_t x148; uint8_t x149 = _addcarryx_u32(x146, x131, x133, &x148);
{  uint32_t x151; uint8_t _ = _addcarryx_u32(0x0, x149, x134, &x151);
{  uint32_t x154; uint8_t x155 = _addcarryx_u32(0x0, x100, x118, &x154);
{  uint32_t x157; uint8_t x158 = _addcarryx_u32(x155, x103, x136, &x157);
{  uint32_t x160; uint8_t x161 = _addcarryx_u32(x158, x106, x139, &x160);
{  uint32_t x163; uint8_t x164 = _addcarryx_u32(x161, x109, x142, &x163);
{  uint32_t x166; uint8_t x167 = _addcarryx_u32(x164, x112, x145, &x166);
{  uint32_t x169; uint8_t x170 = _addcarryx_u32(x167, x115, x148, &x169);
{  uint32_t x172; uint8_t x173 = _addcarryx_u32(x170, x116, x151, &x172);
{  uint32_t x176;  uint32_t x175 = _mulx_u32(x154, 0xffffffff, &x176);
{  uint32_t x179;  uint32_t x178 = _mulx_u32(x154, 0xffffffff, &x179);
{  uint32_t x182;  uint32_t x181 = _mulx_u32(x154, 0xfffffffe, &x182);
{  uint32_t x185;  uint32_t x184 = _mulx_u32(x154, 0xffffffff, &x185);
{  uint32_t x188;  uint32_t x187 = _mulx_u32(x154, 0xffffffff, &x188);
{  uint32_t x191;  uint32_t x190 = _mulx_u32(x154, 0xffffffff, &x191);
{  uint32_t x193; uint8_t x194 = _addcarryx_u32(0x0, x176, x178, &x193);
{  uint32_t x196; uint8_t x197 = _addcarryx_u32(x194, x179, x181, &x196);
{  uint32_t x199; uint8_t x200 = _addcarryx_u32(x197, x182, x184, &x199);
{  uint32_t x202; uint8_t x203 = _addcarryx_u32(x200, x185, x187, &x202);
{  uint32_t x205; uint8_t x206 = _addcarryx_u32(x203, x188, x190, &x205);
{  uint32_t x208; uint8_t _ = _addcarryx_u32(0x0, x206, x191, &x208);
{  uint32_t _; uint8_t x212 = _addcarryx_u32(0x0, x154, x175, &_);
{  uint32_t x214; uint8_t x215 = _addcarryx_u32(x212, x157, x193, &x214);
{  uint32_t x217; uint8_t x218 = _addcarryx_u32(x215, x160, x196, &x217);
{  uint32_t x220; uint8_t x221 = _addcarryx_u32(x218, x163, x199, &x220);
{  uint32_t x223; uint8_t x224 = _addcarryx_u32(x221, x166, x202, &x223);
{  uint32_t x226; uint8_t x227 = _addcarryx_u32(x224, x169, x205, &x226);
{  uint32_t x229; uint8_t x230 = _addcarryx_u32(x227, x172, x208, &x229);
{  uint8_t x231 = (x230 + x173);
{  uint32_t x234;  uint32_t x233 = _mulx_u32(x9, x15, &x234);
{  uint32_t x237;  uint32_t x236 = _mulx_u32(x9, x17, &x237);
{  uint32_t x240;  uint32_t x239 = _mulx_u32(x9, x19, &x240);
{  uint32_t x243;  uint32_t x242 = _mulx_u32(x9, x21, &x243);
{  uint32_t x246;  uint32_t x245 = _mulx_u32(x9, x23, &x246);
{  uint32_t x249;  uint32_t x248 = _mulx_u32(x9, x22, &x249);
{  uint32_t x251; uint8_t x252 = _addcarryx_u32(0x0, x234, x236, &x251);
{  uint32_t x254; uint8_t x255 = _addcarryx_u32(x252, x237, x239, &x254);
{  uint32_t x257; uint8_t x258 = _addcarryx_u32(x255, x240, x242, &x257);
{  uint32_t x260; uint8_t x261 = _addcarryx_u32(x258, x243, x245, &x260);
{  uint32_t x263; uint8_t x264 = _addcarryx_u32(x261, x246, x248, &x263);
{  uint32_t x266; uint8_t _ = _addcarryx_u32(0x0, x264, x249, &x266);
{  uint32_t x269; uint8_t x270 = _addcarryx_u32(0x0, x214, x233, &x269);
{  uint32_t x272; uint8_t x273 = _addcarryx_u32(x270, x217, x251, &x272);
{  uint32_t x275; uint8_t x276 = _addcarryx_u32(x273, x220, x254, &x275);
{  uint32_t x278; uint8_t x279 = _addcarryx_u32(x276, x223, x257, &x278);
{  uint32_t x281; uint8_t x282 = _addcarryx_u32(x279, x226, x260, &x281);
{  uint32_t x284; uint8_t x285 = _addcarryx_u32(x282, x229, x263, &x284);
{  uint32_t x287; uint8_t x288 = _addcarryx_u32(x285, x231, x266, &x287);
{  uint32_t x291;  uint32_t x290 = _mulx_u32(x269, 0xffffffff, &x291);
{  uint32_t x294;  uint32_t x293 = _mulx_u32(x269, 0xffffffff, &x294);
{  uint32_t x297;  uint32_t x296 = _mulx_u32(x269, 0xfffffffe, &x297);
{  uint32_t x300;  uint32_t x299 = _mulx_u32(x269, 0xffffffff, &x300);
{  uint32_t x303;  uint32_t x302 = _mulx_u32(x269, 0xffffffff, &x303);
{  uint32_t x306;  uint32_t x305 = _mulx_u32(x269, 0xffffffff, &x306);
{  uint32_t x308; uint8_t x309 = _addcarryx_u32(0x0, x291, x293, &x308);
{  uint32_t x311; uint8_t x312 = _addcarryx_u32(x309, x294, x296, &x311);
{  uint32_t x314; uint8_t x315 = _addcarryx_u32(x312, x297, x299, &x314);
{  uint32_t x317; uint8_t x318 = _addcarryx_u32(x315, x300, x302, &x317);
{  uint32_t x320; uint8_t x321 = _addcarryx_u32(x318, x303, x305, &x320);
{  uint32_t x323; uint8_t _ = _addcarryx_u32(0x0, x321, x306, &x323);
{  uint32_t _; uint8_t x327 = _addcarryx_u32(0x0, x269, x290, &_);
{  uint32_t x329; uint8_t x330 = _addcarryx_u32(x327, x272, x308, &x329);
{  uint32_t x332; uint8_t x333 = _addcarryx_u32(x330, x275, x311, &x332);
{  uint32_t x335; uint8_t x336 = _addcarryx_u32(x333, x278, x314, &x335);
{  uint32_t x338; uint8_t x339 = _addcarryx_u32(x336, x281, x317, &x338);
{  uint32_t x341; uint8_t x342 = _addcarryx_u32(x339, x284, x320, &x341);
{  uint32_t x344; uint8_t x345 = _addcarryx_u32(x342, x287, x323, &x344);
{  uint8_t x346 = (x345 + x288);
{  uint32_t x349;  uint32_t x348 = _mulx_u32(x11, x15, &x349);
{  uint32_t x352;  uint32_t x351 = _mulx_u32(x11, x17, &x352);
{  uint32_t x355;  uint32_t x354 = _mulx_u32(x11, x19, &x355);
{  uint32_t x358;  uint32_t x357 = _mulx_u32(x11, x21, &x358);
{  uint32_t x361;  uint32_t x360 = _mulx_u32(x11, x23, &x361);
{  uint32_t x364;  uint32_t x363 = _mulx_u32(x11, x22, &x364);
{  uint32_t x366; uint8_t x367 = _addcarryx_u32(0x0, x349, x351, &x366);
{  uint32_t x369; uint8_t x370 = _addcarryx_u32(x367, x352, x354, &x369);
{  uint32_t x372; uint8_t x373 = _addcarryx_u32(x370, x355, x357, &x372);
{  uint32_t x375; uint8_t x376 = _addcarryx_u32(x373, x358, x360, &x375);
{  uint32_t x378; uint8_t x379 = _addcarryx_u32(x376, x361, x363, &x378);
{  uint32_t x381; uint8_t _ = _addcarryx_u32(0x0, x379, x364, &x381);
{  uint32_t x384; uint8_t x385 = _addcarryx_u32(0x0, x329, x348, &x384);
{  uint32_t x387; uint8_t x388 = _addcarryx_u32(x385, x332, x366, &x387);
{  uint32_t x390; uint8_t x391 = _addcarryx_u32(x388, x335, x369, &x390);
{  uint32_t x393; uint8_t x394 = _addcarryx_u32(x391, x338, x372, &x393);
{  uint32_t x396; uint8_t x397 = _addcarryx_u32(x394, x341, x375, &x396);
{  uint32_t x399; uint8_t x400 = _addcarryx_u32(x397, x344, x378, &x399);
{  uint32_t x402; uint8_t x403 = _addcarryx_u32(x400, x346, x381, &x402);
{  uint32_t x406;  uint32_t x405 = _mulx_u32(x384, 0xffffffff, &x406);
{  uint32_t x409;  uint32_t x408 = _mulx_u32(x384, 0xffffffff, &x409);
{  uint32_t x412;  uint32_t x411 = _mulx_u32(x384, 0xfffffffe, &x412);
{  uint32_t x415;  uint32_t x414 = _mulx_u32(x384, 0xffffffff, &x415);
{  uint32_t x418;  uint32_t x417 = _mulx_u32(x384, 0xffffffff, &x418);
{  uint32_t x421;  uint32_t x420 = _mulx_u32(x384, 0xffffffff, &x421);
{  uint32_t x423; uint8_t x424 = _addcarryx_u32(0x0, x406, x408, &x423);
{  uint32_t x426; uint8_t x427 = _addcarryx_u32(x424, x409, x411, &x426);
{  uint32_t x429; uint8_t x430 = _addcarryx_u32(x427, x412, x414, &x429);
{  uint32_t x432; uint8_t x433 = _addcarryx_u32(x430, x415, x417, &x432);
{  uint32_t x435; uint8_t x436 = _addcarryx_u32(x433, x418, x420, &x435);
{  uint32_t x438; uint8_t _ = _addcarryx_u32(0x0, x436, x421, &x438);
{  uint32_t _; uint8_t x442 = _addcarryx_u32(0x0, x384, x405, &_);
{  uint32_t x444; uint8_t x445 = _addcarryx_u32(x442, x387, x423, &x444);
{  uint32_t x447; uint8_t x448 = _addcarryx_u32(x445, x390, x426, &x447);
{  uint32_t x450; uint8_t x451 = _addcarryx_u32(x448, x393, x429, &x450);
{  uint32_t x453; uint8_t x454 = _addcarryx_u32(x451, x396, x432, &x453);
{  uint32_t x456; uint8_t x457 = _addcarryx_u32(x454, x399, x435, &x456);
{  uint32_t x459; uint8_t x460 = _addcarryx_u32(x457, x402, x438, &x459);
{  uint8_t x461 = (x460 + x403);
{  uint32_t x464;  uint32_t x463 = _mulx_u32(x13, x15, &x464);
{  uint32_t x467;  uint32_t x466 = _mulx_u32(x13, x17, &x467);
{  uint32_t x470;  uint32_t x469 = _mulx_u32(x13, x19, &x470);
{  uint32_t x473;  uint32_t x472 = _mulx_u32(x13, x21, &x473);
{  uint32_t x476;  uint32_t x475 = _mulx_u32(x13, x23, &x476);
{  uint32_t x479;  uint32_t x478 = _mulx_u32(x13, x22, &x479);
{  uint32_t x481; uint8_t x482 = _addcarryx_u32(0x0, x464, x466, &x481);
{  uint32_t x484; uint8_t x485 = _addcarryx_u32(x482, x467, x469, &x484);
{  uint32_t x487; uint8_t x488 = _addcarryx_u32(x485, x470, x472, &x487);
{  uint32_t x490; uint8_t x491 = _addcarryx_u32(x488, x473, x475, &x490);
{  uint32_t x493; uint8_t x494 = _addcarryx_u32(x491, x476, x478, &x493);
{  uint32_t x496; uint8_t _ = _addcarryx_u32(0x0, x494, x479, &x496);
{  uint32_t x499; uint8_t x500 = _addcarryx_u32(0x0, x444, x463, &x499);
{  uint32_t x502; uint8_t x503 = _addcarryx_u32(x500, x447, x481, &x502);
{  uint32_t x505; uint8_t x506 = _addcarryx_u32(x503, x450, x484, &x505);
{  uint32_t x508; uint8_t x509 = _addcarryx_u32(x506, x453, x487, &x508);
{  uint32_t x511; uint8_t x512 = _addcarryx_u32(x509, x456, x490, &x511);
{  uint32_t x514; uint8_t x515 = _addcarryx_u32(x512, x459, x493, &x514);
{  uint32_t x517; uint8_t x518 = _addcarryx_u32(x515, x461, x496, &x517);
{  uint32_t x521;  uint32_t x520 = _mulx_u32(x499, 0xffffffff, &x521);
{  uint32_t x524;  uint32_t x523 = _mulx_u32(x499, 0xffffffff, &x524);
{  uint32_t x527;  uint32_t x526 = _mulx_u32(x499, 0xfffffffe, &x527);
{  uint32_t x530;  uint32_t x529 = _mulx_u32(x499, 0xffffffff, &x530);
{  uint32_t x533;  uint32_t x532 = _mulx_u32(x499, 0xffffffff, &x533);
{  uint32_t x536;  uint32_t x535 = _mulx_u32(x499, 0xffffffff, &x536);
{  uint32_t x538; uint8_t x539 = _addcarryx_u32(0x0, x521, x523, &x538);
{  uint32_t x541; uint8_t x542 = _addcarryx_u32(x539, x524, x526, &x541);
{  uint32_t x544; uint8_t x545 = _addcarryx_u32(x542, x527, x529, &x544);
{  uint32_t x547; uint8_t x548 = _addcarryx_u32(x545, x530, x532, &x547);
{  uint32_t x550; uint8_t x551 = _addcarryx_u32(x548, x533, x535, &x550);
{  uint32_t x553; uint8_t _ = _addcarryx_u32(0x0, x551, x536, &x553);
{  uint32_t _; uint8_t x557 = _addcarryx_u32(0x0, x499, x520, &_);
{  uint32_t x559; uint8_t x560 = _addcarryx_u32(x557, x502, x538, &x559);
{  uint32_t x562; uint8_t x563 = _addcarryx_u32(x560, x505, x541, &x562);
{  uint32_t x565; uint8_t x566 = _addcarryx_u32(x563, x508, x544, &x565);
{  uint32_t x568; uint8_t x569 = _addcarryx_u32(x566, x511, x547, &x568);
{  uint32_t x571; uint8_t x572 = _addcarryx_u32(x569, x514, x550, &x571);
{  uint32_t x574; uint8_t x575 = _addcarryx_u32(x572, x517, x553, &x574);
{  uint8_t x576 = (x575 + x518);
{  uint32_t x579;  uint32_t x578 = _mulx_u32(x12, x15, &x579);
{  uint32_t x582;  uint32_t x581 = _mulx_u32(x12, x17, &x582);
{  uint32_t x585;  uint32_t x584 = _mulx_u32(x12, x19, &x585);
{  uint32_t x588;  uint32_t x587 = _mulx_u32(x12, x21, &x588);
{  uint32_t x591;  uint32_t x590 = _mulx_u32(x12, x23, &x591);
{  uint32_t x594;  uint32_t x593 = _mulx_u32(x12, x22, &x594);
{  uint32_t x596; uint8_t x597 = _addcarryx_u32(0x0, x579, x581, &x596);
{  uint32_t x599; uint8_t x600 = _addcarryx_u32(x597, x582, x584, &x599);
{  uint32_t x602; uint8_t x603 = _addcarryx_u32(x600, x585, x587, &x602);
{  uint32_t x605; uint8_t x606 = _addcarryx_u32(x603, x588, x590, &x605);
{  uint32_t x608; uint8_t x609 = _addcarryx_u32(x606, x591, x593, &x608);
{  uint32_t x611; uint8_t _ = _addcarryx_u32(0x0, x609, x594, &x611);
{  uint32_t x614; uint8_t x615 = _addcarryx_u32(0x0, x559, x578, &x614);
{  uint32_t x617; uint8_t x618 = _addcarryx_u32(x615, x562, x596, &x617);
{  uint32_t x620; uint8_t x621 = _addcarryx_u32(x618, x565, x599, &x620);
{  uint32_t x623; uint8_t x624 = _addcarryx_u32(x621, x568, x602, &x623);
{  uint32_t x626; uint8_t x627 = _addcarryx_u32(x624, x571, x605, &x626);
{  uint32_t x629; uint8_t x630 = _addcarryx_u32(x627, x574, x608, &x629);
{  uint32_t x632; uint8_t x633 = _addcarryx_u32(x630, x576, x611, &x632);
{  uint32_t x636;  uint32_t x635 = _mulx_u32(x614, 0xffffffff, &x636);
{  uint32_t x639;  uint32_t x638 = _mulx_u32(x614, 0xffffffff, &x639);
{  uint32_t x642;  uint32_t x641 = _mulx_u32(x614, 0xfffffffe, &x642);
{  uint32_t x645;  uint32_t x644 = _mulx_u32(x614, 0xffffffff, &x645);
{  uint32_t x648;  uint32_t x647 = _mulx_u32(x614, 0xffffffff, &x648);
{  uint32_t x651;  uint32_t x650 = _mulx_u32(x614, 0xffffffff, &x651);
{  uint32_t x653; uint8_t x654 = _addcarryx_u32(0x0, x636, x638, &x653);
{  uint32_t x656; uint8_t x657 = _addcarryx_u32(x654, x639, x641, &x656);
{  uint32_t x659; uint8_t x660 = _addcarryx_u32(x657, x642, x644, &x659);
{  uint32_t x662; uint8_t x663 = _addcarryx_u32(x660, x645, x647, &x662);
{  uint32_t x665; uint8_t x666 = _addcarryx_u32(x663, x648, x650, &x665);
{  uint32_t x668; uint8_t _ = _addcarryx_u32(0x0, x666, x651, &x668);
{  uint32_t _; uint8_t x672 = _addcarryx_u32(0x0, x614, x635, &_);
{  uint32_t x674; uint8_t x675 = _addcarryx_u32(x672, x617, x653, &x674);
{  uint32_t x677; uint8_t x678 = _addcarryx_u32(x675, x620, x656, &x677);
{  uint32_t x680; uint8_t x681 = _addcarryx_u32(x678, x623, x659, &x680);
{  uint32_t x683; uint8_t x684 = _addcarryx_u32(x681, x626, x662, &x683);
{  uint32_t x686; uint8_t x687 = _addcarryx_u32(x684, x629, x665, &x686);
{  uint32_t x689; uint8_t x690 = _addcarryx_u32(x687, x632, x668, &x689);
{  uint8_t x691 = (x690 + x633);
{  uint32_t x693; uint8_t x694 = _subborrow_u32(0x0, x674, 0xffffffff, &x693);
{  uint32_t x696; uint8_t x697 = _subborrow_u32(x694, x677, 0xffffffff, &x696);
{  uint32_t x699; uint8_t x700 = _subborrow_u32(x697, x680, 0xfffffffe, &x699);
{  uint32_t x702; uint8_t x703 = _subborrow_u32(x700, x683, 0xffffffff, &x702);
{  uint32_t x705; uint8_t x706 = _subborrow_u32(x703, x686, 0xffffffff, &x705);
{  uint32_t x708; uint8_t x709 = _subborrow_u32(x706, x689, 0xffffffff, &x708);
{  uint32_t _; uint8_t x712 = _subborrow_u32(x709, x691, 0x0, &_);
{  uint32_t x713 = cmovznz(x712, x708, x689);
{  uint32_t x714 = cmovznz(x712, x705, x686);
{  uint32_t x715 = cmovznz(x712, x702, x683);
{  uint32_t x716 = cmovznz(x712, x699, x680);
{  uint32_t x717 = cmovznz(x712, x696, x677);
{  uint32_t x718 = cmovznz(x712, x693, x674);
out[0] = x713;
out[1] = x714;
out[2] = x715;
out[3] = x716;
out[4] = x717;
out[5] = x718;
}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
// caller: uint64_t out[6];
