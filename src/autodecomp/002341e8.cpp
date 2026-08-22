// coverage: addr=0x002341e8 symbol=_Z16wtarget_002341e8jjjj size=84 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:60.96;ghidra:near:31.77
#include "common/types.h"

struct S32_12_u32 { u8 _p[12]; u32 m; u8 _q[16]; };
struct S32_16_u32 { u8 _p[16]; u32 m; u8 _q[12]; };
struct S32_4_u32 { u8 _p[4]; u32 m; u8 _q[24]; };
struct S32_8_u32 { u8 _p[8]; u32 m; u8 _q[20]; };
extern "C" u32 D_0035e360 asm("D_0035e360");
extern "C" u32 D_0035e368 asm("D_0035e368");
extern "C" u32 D_01dadc00 asm("D_01dadc00");

// 0x002341e8 wtarget_002341e8(unsigned int, unsigned int, unsigned int, unsigned int)
u32 lift_002341e8(u32 a0, u32 a1, u32 a2) asm("_Z16wtarget_002341e8jjjj");
u32 lift_002341e8(u32 a0, u32 a1, u32 a2) {
    u32 t6;
    u32 t3;
    t6 = *(u32*)(&D_0035e360);
    t3 = *(u32*)(&D_0035e368);
    *(u32*)(((t6 << 5) + (u32)&D_01dadc00)) = 4;
    ((S32_4_u32*)&D_01dadc00)[t6].m = t3;
    ((S32_8_u32*)&D_01dadc00)[t6].m = a0;
    ((S32_12_u32*)&D_01dadc00)[t6].m = a1;
    ((S32_16_u32*)&D_01dadc00)[t6].m = a2;
    *(u32*)(&D_0035e360) = ((t6 + 1) & 0x3f);
    *(u32*)(&D_0035e368) = (t3 + 1);
    return t3;
}
