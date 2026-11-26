// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct S16_12_u32 { u8 _p[12]; u32 m; };
struct S16_4_u32 { u8 _p[4]; u32 m; u8 _q[8]; };
struct S16_8_u32 { u8 _p[8]; u32 m; u8 _q[4]; };
extern "C" u32 D_003780c0 asm("D_003780c0");
extern "C" u32 D_01e357e0 asm("D_01e357e0");
extern "C" void func_002fdd68(u32, u32, u32) asm("func_002fdd68");
extern "C" void func_003059e0(u32, u32) asm("func_003059e0");
extern "C" void func_003059f0(u32, u32) asm("func_003059f0");

// 0x00308248 func_00308248
void func_00308248(u32 a0, u32 a1, u32 a2) asm("func_00308248");
void func_00308248(u32 a0, u32 a1, u32 a2) {
    u8 frame[512];
    u32 loc_0;
    if (((s32)(((s32)(a1) < (s32)(0x20))) != 0)) {
        func_002fdd68((u32)&loc_0, a0, a1 << 4);
        ((S16_12_u32*)&loc_0)[a1].m = 0x44;
        ((S16_4_u32*)&loc_0)[a1].m = *(u32*)(&D_01e357e0);
        ((S16_8_u32*)&loc_0)[a1].m = 0x10;
        *(u32*)(((u32)frame + (a1 << 4))) = (u32)&D_003780c0;
        if (((s32)(a2) == 0)) {
            func_003059e0((u32)&loc_0, a1 + 1);
        } else {
            func_003059f0((u32)&loc_0, a1 + 1);
        }
    }
    return;
}
