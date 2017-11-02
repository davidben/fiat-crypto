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

void force_inline femul(uint64_t* out, uint64_t x30, uint64_t x31, uint64_t x29, uint64_t x27, uint64_t x25, uint64_t x23, uint64_t x21, uint64_t x19, uint64_t x17, uint64_t x15, uint64_t x13, uint64_t x11, uint64_t x9, uint64_t x7, uint64_t x5, uint64_t x58, uint64_t x59, uint64_t x57, uint64_t x55, uint64_t x53, uint64_t x51, uint64_t x49, uint64_t x47, uint64_t x45, uint64_t x43, uint64_t x41, uint64_t x39, uint64_t x37, uint64_t x35, uint64_t x33)
{  uint64_t x60 = (((uint64_t)x5 * x58) + (((uint64_t)x7 * x59) + (((uint64_t)x9 * x57) + (((uint64_t)x11 * x55) + (((uint64_t)x13 * x53) + (((uint64_t)x15 * x51) + (((uint64_t)x17 * x49) + (((uint64_t)x19 * x47) + (((uint64_t)x21 * x45) + (((uint64_t)x23 * x43) + (((uint64_t)x25 * x41) + (((uint64_t)x27 * x39) + (((uint64_t)x29 * x37) + (((uint64_t)x31 * x35) + ((uint64_t)x30 * x33)))))))))))))));
{  uint64_t x61 = ((((uint64_t)x5 * x59) + (((uint64_t)x7 * x57) + (((uint64_t)x9 * x55) + (((uint64_t)x11 * x53) + (((uint64_t)x13 * x51) + (((uint64_t)x15 * x49) + (((uint64_t)x17 * x47) + (((uint64_t)x19 * x45) + (((uint64_t)x21 * x43) + (((uint64_t)x23 * x41) + (((uint64_t)x25 * x39) + (((uint64_t)x27 * x37) + (((uint64_t)x29 * x35) + ((uint64_t)x31 * x33)))))))))))))) + (0x9 * ((uint64_t)x30 * x58)));
{  uint64_t x62 = ((((uint64_t)x5 * x57) + (((uint64_t)x7 * x55) + (((uint64_t)x9 * x53) + (((uint64_t)x11 * x51) + (((uint64_t)x13 * x49) + (((uint64_t)x15 * x47) + (((uint64_t)x17 * x45) + (((uint64_t)x19 * x43) + (((uint64_t)x21 * x41) + (((uint64_t)x23 * x39) + (((uint64_t)x25 * x37) + (((uint64_t)x27 * x35) + ((uint64_t)x29 * x33))))))))))))) + (0x9 * (((uint64_t)x31 * x58) + ((uint64_t)x30 * x59))));
{  uint64_t x63 = ((((uint64_t)x5 * x55) + (((uint64_t)x7 * x53) + (((uint64_t)x9 * x51) + (((uint64_t)x11 * x49) + (((uint64_t)x13 * x47) + (((uint64_t)x15 * x45) + (((uint64_t)x17 * x43) + (((uint64_t)x19 * x41) + (((uint64_t)x21 * x39) + (((uint64_t)x23 * x37) + (((uint64_t)x25 * x35) + ((uint64_t)x27 * x33)))))))))))) + (0x9 * (((uint64_t)x29 * x58) + (((uint64_t)x31 * x59) + ((uint64_t)x30 * x57)))));
{  uint64_t x64 = ((((uint64_t)x5 * x53) + (((uint64_t)x7 * x51) + (((uint64_t)x9 * x49) + (((uint64_t)x11 * x47) + (((uint64_t)x13 * x45) + (((uint64_t)x15 * x43) + (((uint64_t)x17 * x41) + (((uint64_t)x19 * x39) + (((uint64_t)x21 * x37) + (((uint64_t)x23 * x35) + ((uint64_t)x25 * x33))))))))))) + (0x9 * (((uint64_t)x27 * x58) + (((uint64_t)x29 * x59) + (((uint64_t)x31 * x57) + ((uint64_t)x30 * x55))))));
{  uint64_t x65 = ((((uint64_t)x5 * x51) + (((uint64_t)x7 * x49) + (((uint64_t)x9 * x47) + (((uint64_t)x11 * x45) + (((uint64_t)x13 * x43) + (((uint64_t)x15 * x41) + (((uint64_t)x17 * x39) + (((uint64_t)x19 * x37) + (((uint64_t)x21 * x35) + ((uint64_t)x23 * x33)))))))))) + (0x9 * (((uint64_t)x25 * x58) + (((uint64_t)x27 * x59) + (((uint64_t)x29 * x57) + (((uint64_t)x31 * x55) + ((uint64_t)x30 * x53)))))));
{  uint64_t x66 = ((((uint64_t)x5 * x49) + (((uint64_t)x7 * x47) + (((uint64_t)x9 * x45) + (((uint64_t)x11 * x43) + (((uint64_t)x13 * x41) + (((uint64_t)x15 * x39) + (((uint64_t)x17 * x37) + (((uint64_t)x19 * x35) + ((uint64_t)x21 * x33))))))))) + (0x9 * (((uint64_t)x23 * x58) + (((uint64_t)x25 * x59) + (((uint64_t)x27 * x57) + (((uint64_t)x29 * x55) + (((uint64_t)x31 * x53) + ((uint64_t)x30 * x51))))))));
{  uint64_t x67 = ((((uint64_t)x5 * x47) + (((uint64_t)x7 * x45) + (((uint64_t)x9 * x43) + (((uint64_t)x11 * x41) + (((uint64_t)x13 * x39) + (((uint64_t)x15 * x37) + (((uint64_t)x17 * x35) + ((uint64_t)x19 * x33)))))))) + (0x9 * (((uint64_t)x21 * x58) + (((uint64_t)x23 * x59) + (((uint64_t)x25 * x57) + (((uint64_t)x27 * x55) + (((uint64_t)x29 * x53) + (((uint64_t)x31 * x51) + ((uint64_t)x30 * x49)))))))));
{  uint64_t x68 = ((((uint64_t)x5 * x45) + (((uint64_t)x7 * x43) + (((uint64_t)x9 * x41) + (((uint64_t)x11 * x39) + (((uint64_t)x13 * x37) + (((uint64_t)x15 * x35) + ((uint64_t)x17 * x33))))))) + (0x9 * (((uint64_t)x19 * x58) + (((uint64_t)x21 * x59) + (((uint64_t)x23 * x57) + (((uint64_t)x25 * x55) + (((uint64_t)x27 * x53) + (((uint64_t)x29 * x51) + (((uint64_t)x31 * x49) + ((uint64_t)x30 * x47))))))))));
{  uint64_t x69 = ((((uint64_t)x5 * x43) + (((uint64_t)x7 * x41) + (((uint64_t)x9 * x39) + (((uint64_t)x11 * x37) + (((uint64_t)x13 * x35) + ((uint64_t)x15 * x33)))))) + (0x9 * (((uint64_t)x17 * x58) + (((uint64_t)x19 * x59) + (((uint64_t)x21 * x57) + (((uint64_t)x23 * x55) + (((uint64_t)x25 * x53) + (((uint64_t)x27 * x51) + (((uint64_t)x29 * x49) + (((uint64_t)x31 * x47) + ((uint64_t)x30 * x45)))))))))));
{  uint64_t x70 = ((((uint64_t)x5 * x41) + (((uint64_t)x7 * x39) + (((uint64_t)x9 * x37) + (((uint64_t)x11 * x35) + ((uint64_t)x13 * x33))))) + (0x9 * (((uint64_t)x15 * x58) + (((uint64_t)x17 * x59) + (((uint64_t)x19 * x57) + (((uint64_t)x21 * x55) + (((uint64_t)x23 * x53) + (((uint64_t)x25 * x51) + (((uint64_t)x27 * x49) + (((uint64_t)x29 * x47) + (((uint64_t)x31 * x45) + ((uint64_t)x30 * x43))))))))))));
{  uint64_t x71 = ((((uint64_t)x5 * x39) + (((uint64_t)x7 * x37) + (((uint64_t)x9 * x35) + ((uint64_t)x11 * x33)))) + (0x9 * (((uint64_t)x13 * x58) + (((uint64_t)x15 * x59) + (((uint64_t)x17 * x57) + (((uint64_t)x19 * x55) + (((uint64_t)x21 * x53) + (((uint64_t)x23 * x51) + (((uint64_t)x25 * x49) + (((uint64_t)x27 * x47) + (((uint64_t)x29 * x45) + (((uint64_t)x31 * x43) + ((uint64_t)x30 * x41)))))))))))));
{  uint64_t x72 = ((((uint64_t)x5 * x37) + (((uint64_t)x7 * x35) + ((uint64_t)x9 * x33))) + (0x9 * (((uint64_t)x11 * x58) + (((uint64_t)x13 * x59) + (((uint64_t)x15 * x57) + (((uint64_t)x17 * x55) + (((uint64_t)x19 * x53) + (((uint64_t)x21 * x51) + (((uint64_t)x23 * x49) + (((uint64_t)x25 * x47) + (((uint64_t)x27 * x45) + (((uint64_t)x29 * x43) + (((uint64_t)x31 * x41) + ((uint64_t)x30 * x39))))))))))))));
{  uint64_t x73 = ((((uint64_t)x5 * x35) + ((uint64_t)x7 * x33)) + (0x9 * (((uint64_t)x9 * x58) + (((uint64_t)x11 * x59) + (((uint64_t)x13 * x57) + (((uint64_t)x15 * x55) + (((uint64_t)x17 * x53) + (((uint64_t)x19 * x51) + (((uint64_t)x21 * x49) + (((uint64_t)x23 * x47) + (((uint64_t)x25 * x45) + (((uint64_t)x27 * x43) + (((uint64_t)x29 * x41) + (((uint64_t)x31 * x39) + ((uint64_t)x30 * x37)))))))))))))));
{  uint64_t x74 = (((uint64_t)x5 * x33) + (0x9 * (((uint64_t)x7 * x58) + (((uint64_t)x9 * x59) + (((uint64_t)x11 * x57) + (((uint64_t)x13 * x55) + (((uint64_t)x15 * x53) + (((uint64_t)x17 * x51) + (((uint64_t)x19 * x49) + (((uint64_t)x21 * x47) + (((uint64_t)x23 * x45) + (((uint64_t)x25 * x43) + (((uint64_t)x27 * x41) + (((uint64_t)x29 * x39) + (((uint64_t)x31 * x37) + ((uint64_t)x30 * x35))))))))))))))));
{  uint32_t x75 = (uint32_t) (x74 >> 0x13);
{  uint32_t x76 = ((uint32_t)x74 & 0x7ffff);
{  uint64_t x77 = (x75 + x73);
{  uint32_t x78 = (uint32_t) (x77 >> 0x13);
{  uint32_t x79 = ((uint32_t)x77 & 0x7ffff);
{  uint64_t x80 = (x78 + x72);
{  uint32_t x81 = (uint32_t) (x80 >> 0x13);
{  uint32_t x82 = ((uint32_t)x80 & 0x7ffff);
{  uint64_t x83 = (x81 + x71);
{  uint32_t x84 = (uint32_t) (x83 >> 0x13);
{  uint32_t x85 = ((uint32_t)x83 & 0x7ffff);
{  uint64_t x86 = (x84 + x70);
{  uint32_t x87 = (uint32_t) (x86 >> 0x13);
{  uint32_t x88 = ((uint32_t)x86 & 0x7ffff);
{  uint64_t x89 = (x87 + x69);
{  uint32_t x90 = (uint32_t) (x89 >> 0x13);
{  uint32_t x91 = ((uint32_t)x89 & 0x7ffff);
{  uint64_t x92 = (x90 + x68);
{  uint32_t x93 = (uint32_t) (x92 >> 0x13);
{  uint32_t x94 = ((uint32_t)x92 & 0x7ffff);
{  uint64_t x95 = (x93 + x67);
{  uint32_t x96 = (uint32_t) (x95 >> 0x13);
{  uint32_t x97 = ((uint32_t)x95 & 0x7ffff);
{  uint64_t x98 = (x96 + x66);
{  uint32_t x99 = (uint32_t) (x98 >> 0x13);
{  uint32_t x100 = ((uint32_t)x98 & 0x7ffff);
{  uint64_t x101 = (x99 + x65);
{  uint32_t x102 = (uint32_t) (x101 >> 0x13);
{  uint32_t x103 = ((uint32_t)x101 & 0x7ffff);
{  uint64_t x104 = (x102 + x64);
{  uint32_t x105 = (uint32_t) (x104 >> 0x13);
{  uint32_t x106 = ((uint32_t)x104 & 0x7ffff);
{  uint64_t x107 = (x105 + x63);
{  uint32_t x108 = (uint32_t) (x107 >> 0x13);
{  uint32_t x109 = ((uint32_t)x107 & 0x7ffff);
{  uint64_t x110 = (x108 + x62);
{  uint32_t x111 = (uint32_t) (x110 >> 0x13);
{  uint32_t x112 = ((uint32_t)x110 & 0x7ffff);
{  uint64_t x113 = (x111 + x61);
{  uint32_t x114 = (uint32_t) (x113 >> 0x13);
{  uint32_t x115 = ((uint32_t)x113 & 0x7ffff);
{  uint64_t x116 = (x114 + x60);
{  uint32_t x117 = (uint32_t) (x116 >> 0x13);
{  uint32_t x118 = ((uint32_t)x116 & 0x7ffff);
{  uint32_t x119 = (x76 + (0x9 * x117));
{  uint32_t x120 = (x119 >> 0x13);
{  uint32_t x121 = (x119 & 0x7ffff);
{  uint32_t x122 = (x120 + x79);
{  uint32_t x123 = (x122 >> 0x13);
{  uint32_t x124 = (x122 & 0x7ffff);
out[0] = x118;
out[1] = x115;
out[2] = x112;
out[3] = x109;
out[4] = x106;
out[5] = x103;
out[6] = x100;
out[7] = x97;
out[8] = x94;
out[9] = x91;
out[10] = x88;
out[11] = x85;
out[12] = x123 + x82;
out[13] = x124;
out[14] = x121;
}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
// caller: uint64_t out[15];
