// coverage: addr=0x0015cc18 symbol=func_0015cc18 size=52 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:61.74;m2c:near:50.38
#include "common/types.h"

struct S4_1_u8 { u8 _p[1]; u8 m; u8 _q[2]; };
struct S4_2_u8 { u8 _p[2]; u8 m; u8 _q[1]; };
struct S4_3_u8 { u8 _p[3]; u8 m; };
extern "C" u32 D_004f3704 asm("D_004f3704");

// 0x0015cc18 func_0015cc18
void func_0015cc18(u32 a0, u8 a1, u8 a2, u8 a3, u8 a4) asm("func_0015cc18");
void func_0015cc18(u32 a0, u8 a1, u8 a2, u8 a3, u8 a4) {
    *(u8*)(((a0 << 2) + (u32)&D_004f3704)) = a1;
    ((S4_1_u8*)&D_004f3704)[a0].m = a2;
    ((S4_2_u8*)&D_004f3704)[a0].m = a3;
    ((S4_3_u8*)&D_004f3704)[a0].m = a4;
}
