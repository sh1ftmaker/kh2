// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00347d30 asm("D_00347d30");
extern "C" u32 func_00137058(u32) asm("func_00137058");
extern "C" u32 func_00137180(u32) asm("func_00137180");
extern "C" u32 func_001a9130() asm("func_001a9130");

// 0x00136fd0 func_00136fd0
u32 func_00136fd0() asm("_ZN2dk3BGM8areaInitEv");
u32 func_00136fd0() {
    u8 frame[16];
    u32 v0;
    u32 t3;
    u32 t4;
    u32 t6;
    u32 t5;
    u32 v0_0;
    u32 v0_1;
    u32 v0_2;
    v0 = func_001a9130();
    *(u32*)((u32)frame) = *(u16*)(v0);
    *(u32*)(((u32)frame + 4)) = *(u16*)((v0 + 2));
    t3 = 0xfffffffe;
    t4 = 0xfffffffd;
    t6 = 1;
    t5 = (u32)&D_00347d30;
    do {
        *(u32*)(((t5 + ((t6 - 1) * -0x10)) + 0xc)) = ((*(u32*)(((t5 + ((t6 - 1) * -0x10)) + 0xc)) & t3) & t4);
        t6 = (t6 + -1);
    } while (((s32)(t6) >= 0));
    if ((*(u32*)((u32)frame) == *(u32*)(((u32)frame + 4)))) {
        v0_0 = func_00137058((u32)frame);
        v0_2 = v0_0;
    } else {
        v0_1 = func_00137180((u32)frame);
        v0_2 = v0_1;
    }
    return v0_2;
}
