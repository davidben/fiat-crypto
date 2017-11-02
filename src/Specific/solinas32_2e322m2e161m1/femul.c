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

void force_inline femul(uint64_t* out, uint64_t x28, uint64_t x29, uint64_t x27, uint64_t x25, uint64_t x23, uint64_t x21, uint64_t x19, uint64_t x17, uint64_t x15, uint64_t x13, uint64_t x11, uint64_t x9, uint64_t x7, uint64_t x5, uint64_t x54, uint64_t x55, uint64_t x53, uint64_t x51, uint64_t x49, uint64_t x47, uint64_t x45, uint64_t x43, uint64_t x41, uint64_t x39, uint64_t x37, uint64_t x35, uint64_t x33, uint64_t x31)
{  uint64_t x56 = (((uint64_t)(x17 + x28) * (x43 + x54)) - ((uint64_t)x17 * x43));
{  uint64_t x57 = ((((uint64_t)(x15 + x29) * (x43 + x54)) + ((uint64_t)(x17 + x28) * (x41 + x55))) - (((uint64_t)x15 * x43) + ((uint64_t)x17 * x41)));
{  uint64_t x58 = ((((uint64_t)(x13 + x27) * (x43 + x54)) + (((uint64_t)(x15 + x29) * (x41 + x55)) + ((uint64_t)(x17 + x28) * (x39 + x53)))) - (((uint64_t)x13 * x43) + (((uint64_t)x15 * x41) + ((uint64_t)x17 * x39))));
{  uint64_t x59 = ((((uint64_t)(x11 + x25) * (x43 + x54)) + (((uint64_t)(x13 + x27) * (x41 + x55)) + (((uint64_t)(x15 + x29) * (x39 + x53)) + ((uint64_t)(x17 + x28) * (x37 + x51))))) - (((uint64_t)x11 * x43) + (((uint64_t)x13 * x41) + (((uint64_t)x15 * x39) + ((uint64_t)x17 * x37)))));
{  uint64_t x60 = ((((uint64_t)(x9 + x23) * (x43 + x54)) + (((uint64_t)(x11 + x25) * (x41 + x55)) + (((uint64_t)(x13 + x27) * (x39 + x53)) + (((uint64_t)(x15 + x29) * (x37 + x51)) + ((uint64_t)(x17 + x28) * (x35 + x49)))))) - (((uint64_t)x9 * x43) + (((uint64_t)x11 * x41) + (((uint64_t)x13 * x39) + (((uint64_t)x15 * x37) + ((uint64_t)x17 * x35))))));
{  uint64_t x61 = ((((uint64_t)(x7 + x21) * (x43 + x54)) + (((uint64_t)(x9 + x23) * (x41 + x55)) + (((uint64_t)(x11 + x25) * (x39 + x53)) + (((uint64_t)(x13 + x27) * (x37 + x51)) + (((uint64_t)(x15 + x29) * (x35 + x49)) + ((uint64_t)(x17 + x28) * (x33 + x47))))))) - (((uint64_t)x7 * x43) + (((uint64_t)x9 * x41) + (((uint64_t)x11 * x39) + (((uint64_t)x13 * x37) + (((uint64_t)x15 * x35) + ((uint64_t)x17 * x33)))))));
{  uint64_t x62 = ((((uint64_t)(x5 + x19) * (x43 + x54)) + (((uint64_t)(x7 + x21) * (x41 + x55)) + (((uint64_t)(x9 + x23) * (x39 + x53)) + (((uint64_t)(x11 + x25) * (x37 + x51)) + (((uint64_t)(x13 + x27) * (x35 + x49)) + (((uint64_t)(x15 + x29) * (x33 + x47)) + ((uint64_t)(x17 + x28) * (x31 + x45)))))))) - (((uint64_t)x5 * x43) + (((uint64_t)x7 * x41) + (((uint64_t)x9 * x39) + (((uint64_t)x11 * x37) + (((uint64_t)x13 * x35) + (((uint64_t)x15 * x33) + ((uint64_t)x17 * x31))))))));
{  uint64_t x63 = ((((uint64_t)(x5 + x19) * (x41 + x55)) + (((uint64_t)(x7 + x21) * (x39 + x53)) + (((uint64_t)(x9 + x23) * (x37 + x51)) + (((uint64_t)(x11 + x25) * (x35 + x49)) + (((uint64_t)(x13 + x27) * (x33 + x47)) + ((uint64_t)(x15 + x29) * (x31 + x45))))))) - (((uint64_t)x5 * x41) + (((uint64_t)x7 * x39) + (((uint64_t)x9 * x37) + (((uint64_t)x11 * x35) + (((uint64_t)x13 * x33) + ((uint64_t)x15 * x31)))))));
{  uint64_t x64 = ((((uint64_t)(x5 + x19) * (x39 + x53)) + (((uint64_t)(x7 + x21) * (x37 + x51)) + (((uint64_t)(x9 + x23) * (x35 + x49)) + (((uint64_t)(x11 + x25) * (x33 + x47)) + ((uint64_t)(x13 + x27) * (x31 + x45)))))) - (((uint64_t)x5 * x39) + (((uint64_t)x7 * x37) + (((uint64_t)x9 * x35) + (((uint64_t)x11 * x33) + ((uint64_t)x13 * x31))))));
{  uint64_t x65 = ((((uint64_t)(x5 + x19) * (x37 + x51)) + (((uint64_t)(x7 + x21) * (x35 + x49)) + (((uint64_t)(x9 + x23) * (x33 + x47)) + ((uint64_t)(x11 + x25) * (x31 + x45))))) - (((uint64_t)x5 * x37) + (((uint64_t)x7 * x35) + (((uint64_t)x9 * x33) + ((uint64_t)x11 * x31)))));
{  uint64_t x66 = ((((uint64_t)(x5 + x19) * (x35 + x49)) + (((uint64_t)(x7 + x21) * (x33 + x47)) + ((uint64_t)(x9 + x23) * (x31 + x45)))) - (((uint64_t)x5 * x35) + (((uint64_t)x7 * x33) + ((uint64_t)x9 * x31))));
{  uint64_t x67 = ((((uint64_t)(x5 + x19) * (x33 + x47)) + ((uint64_t)(x7 + x21) * (x31 + x45))) - (((uint64_t)x5 * x33) + ((uint64_t)x7 * x31)));
{  uint64_t x68 = (((uint64_t)(x5 + x19) * (x31 + x45)) - ((uint64_t)x5 * x31));
{  uint64_t x69 = (((((uint64_t)x17 * x43) + ((uint64_t)x28 * x54)) + x63) + x56);
{  uint64_t x70 = ((((((uint64_t)x15 * x43) + ((uint64_t)x17 * x41)) + (((uint64_t)x29 * x54) + ((uint64_t)x28 * x55))) + x64) + x57);
{  uint64_t x71 = ((((((uint64_t)x13 * x43) + (((uint64_t)x15 * x41) + ((uint64_t)x17 * x39))) + (((uint64_t)x27 * x54) + (((uint64_t)x29 * x55) + ((uint64_t)x28 * x53)))) + x65) + x58);
{  uint64_t x72 = ((((((uint64_t)x11 * x43) + (((uint64_t)x13 * x41) + (((uint64_t)x15 * x39) + ((uint64_t)x17 * x37)))) + (((uint64_t)x25 * x54) + (((uint64_t)x27 * x55) + (((uint64_t)x29 * x53) + ((uint64_t)x28 * x51))))) + x66) + x59);
{  uint64_t x73 = ((((((uint64_t)x9 * x43) + (((uint64_t)x11 * x41) + (((uint64_t)x13 * x39) + (((uint64_t)x15 * x37) + ((uint64_t)x17 * x35))))) + (((uint64_t)x23 * x54) + (((uint64_t)x25 * x55) + (((uint64_t)x27 * x53) + (((uint64_t)x29 * x51) + ((uint64_t)x28 * x49)))))) + x67) + x60);
{  uint64_t x74 = ((((((uint64_t)x7 * x43) + (((uint64_t)x9 * x41) + (((uint64_t)x11 * x39) + (((uint64_t)x13 * x37) + (((uint64_t)x15 * x35) + ((uint64_t)x17 * x33)))))) + (((uint64_t)x21 * x54) + (((uint64_t)x23 * x55) + (((uint64_t)x25 * x53) + (((uint64_t)x27 * x51) + (((uint64_t)x29 * x49) + ((uint64_t)x28 * x47))))))) + x68) + x61);
{  uint64_t x75 = ((((uint64_t)x5 * x43) + (((uint64_t)x7 * x41) + (((uint64_t)x9 * x39) + (((uint64_t)x11 * x37) + (((uint64_t)x13 * x35) + (((uint64_t)x15 * x33) + ((uint64_t)x17 * x31))))))) + (((uint64_t)x19 * x54) + (((uint64_t)x21 * x55) + (((uint64_t)x23 * x53) + (((uint64_t)x25 * x51) + (((uint64_t)x27 * x49) + (((uint64_t)x29 * x47) + ((uint64_t)x28 * x45))))))));
{  uint64_t x76 = (((((uint64_t)x5 * x41) + (((uint64_t)x7 * x39) + (((uint64_t)x9 * x37) + (((uint64_t)x11 * x35) + (((uint64_t)x13 * x33) + ((uint64_t)x15 * x31)))))) + (((uint64_t)x19 * x55) + (((uint64_t)x21 * x53) + (((uint64_t)x23 * x51) + (((uint64_t)x25 * x49) + (((uint64_t)x27 * x47) + ((uint64_t)x29 * x45))))))) + x56);
{  uint64_t x77 = (((((uint64_t)x5 * x39) + (((uint64_t)x7 * x37) + (((uint64_t)x9 * x35) + (((uint64_t)x11 * x33) + ((uint64_t)x13 * x31))))) + (((uint64_t)x19 * x53) + (((uint64_t)x21 * x51) + (((uint64_t)x23 * x49) + (((uint64_t)x25 * x47) + ((uint64_t)x27 * x45)))))) + x57);
{  uint64_t x78 = (((((uint64_t)x5 * x37) + (((uint64_t)x7 * x35) + (((uint64_t)x9 * x33) + ((uint64_t)x11 * x31)))) + (((uint64_t)x19 * x51) + (((uint64_t)x21 * x49) + (((uint64_t)x23 * x47) + ((uint64_t)x25 * x45))))) + x58);
{  uint64_t x79 = (((((uint64_t)x5 * x35) + (((uint64_t)x7 * x33) + ((uint64_t)x9 * x31))) + (((uint64_t)x19 * x49) + (((uint64_t)x21 * x47) + ((uint64_t)x23 * x45)))) + x59);
{  uint64_t x80 = (((((uint64_t)x5 * x33) + ((uint64_t)x7 * x31)) + (((uint64_t)x19 * x47) + ((uint64_t)x21 * x45))) + x60);
{  uint64_t x81 = ((((uint64_t)x5 * x31) + ((uint64_t)x19 * x45)) + x61);
{  uint32_t x82 = (uint32_t) (x75 >> 0x17);
{  uint32_t x83 = ((uint32_t)x75 & 0x7fffff);
{  uint32_t x84 = (uint32_t) (x62 >> 0x17);
{  uint32_t x85 = ((uint32_t)x62 & 0x7fffff);
{  uint64_t x86 = (((uint64_t)0x800000 * x84) + x85);
{  uint32_t x87 = (uint32_t) (x86 >> 0x17);
{  uint32_t x88 = ((uint32_t)x86 & 0x7fffff);
{  uint64_t x89 = ((x82 + x74) + x87);
{  uint32_t x90 = (uint32_t) (x89 >> 0x17);
{  uint32_t x91 = ((uint32_t)x89 & 0x7fffff);
{  uint64_t x92 = (x81 + x87);
{  uint32_t x93 = (uint32_t) (x92 >> 0x17);
{  uint32_t x94 = ((uint32_t)x92 & 0x7fffff);
{  uint64_t x95 = (x90 + x73);
{  uint32_t x96 = (uint32_t) (x95 >> 0x17);
{  uint32_t x97 = ((uint32_t)x95 & 0x7fffff);
{  uint64_t x98 = (x93 + x80);
{  uint32_t x99 = (uint32_t) (x98 >> 0x17);
{  uint32_t x100 = ((uint32_t)x98 & 0x7fffff);
{  uint64_t x101 = (x96 + x72);
{  uint32_t x102 = (uint32_t) (x101 >> 0x17);
{  uint32_t x103 = ((uint32_t)x101 & 0x7fffff);
{  uint64_t x104 = (x99 + x79);
{  uint32_t x105 = (uint32_t) (x104 >> 0x17);
{  uint32_t x106 = ((uint32_t)x104 & 0x7fffff);
{  uint64_t x107 = (x102 + x71);
{  uint32_t x108 = (uint32_t) (x107 >> 0x17);
{  uint32_t x109 = ((uint32_t)x107 & 0x7fffff);
{  uint64_t x110 = (x105 + x78);
{  uint32_t x111 = (uint32_t) (x110 >> 0x17);
{  uint32_t x112 = ((uint32_t)x110 & 0x7fffff);
{  uint64_t x113 = (x108 + x70);
{  uint32_t x114 = (uint32_t) (x113 >> 0x17);
{  uint32_t x115 = ((uint32_t)x113 & 0x7fffff);
{  uint64_t x116 = (x111 + x77);
{  uint32_t x117 = (uint32_t) (x116 >> 0x17);
{  uint32_t x118 = ((uint32_t)x116 & 0x7fffff);
{  uint64_t x119 = (x114 + x69);
{  uint32_t x120 = (uint32_t) (x119 >> 0x17);
{  uint32_t x121 = ((uint32_t)x119 & 0x7fffff);
{  uint64_t x122 = (x117 + x76);
{  uint32_t x123 = (uint32_t) (x122 >> 0x17);
{  uint32_t x124 = ((uint32_t)x122 & 0x7fffff);
{  uint32_t x125 = (x120 + x88);
{  uint32_t x126 = (x125 >> 0x17);
{  uint32_t x127 = (x125 & 0x7fffff);
{  uint32_t x128 = (x123 + x83);
{  uint32_t x129 = (x128 >> 0x17);
{  uint32_t x130 = (x128 & 0x7fffff);
{  uint32_t x131 = ((0x800000 * x126) + x127);
{  uint32_t x132 = (x131 >> 0x17);
{  uint32_t x133 = (x131 & 0x7fffff);
{  uint32_t x134 = ((x129 + x91) + x132);
{  uint32_t x135 = (x134 >> 0x17);
{  uint32_t x136 = (x134 & 0x7fffff);
{  uint32_t x137 = (x94 + x132);
{  uint32_t x138 = (x137 >> 0x17);
{  uint32_t x139 = (x137 & 0x7fffff);
out[0] = x133;
out[1] = x121;
out[2] = x115;
out[3] = x109;
out[4] = x103;
out[5] = x135 + x97;
out[6] = x136;
out[7] = x130;
out[8] = x124;
out[9] = x118;
out[10] = x112;
out[11] = x106;
out[12] = x138 + x100;
out[13] = x139;
}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
// caller: uint64_t out[14];
