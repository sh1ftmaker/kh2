// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035dcfc asm("D_0035dcfc");
extern "C" void func_001ba028(u32) asm("func_001ba028");
extern "C" void func_00232db0(u32) asm("func_00232db0");

// 0x0022f5e8 func_0022f5e8
u32 func_0022f5e8() asm("_ZN2sa5EVENT11leaveAllObjEv");
u32 func_0022f5e8() {
    u32 t5;
    u32 s1;
    u32 s0;
    t5 = 0;
    if (((s32)(*(u32*)(&D_0035dcfc)) != 0)) {
        s1 = 0x5f;
        s0 = 0;
        do {
            if (((s32)(*(u32*)(((s0 + *(u32*)(&D_0035dcfc)) + 8))) != 0)) {
                func_001ba028(*(u32*)(((s0 + *(u32*)(&D_0035dcfc)) + 8)));
                ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(((s0 + *(u32*)(&D_0035dcfc)) + 8))) + 0x28))))(*(u32*)(((s0 + *(u32*)(&D_0035dcfc)) + 8)));
                *(u32*)(((s0 + *(u32*)(&D_0035dcfc)) + 8)) = 0;
                func_00232db0(*(u32*)(((s0 + *(u32*)(&D_0035dcfc)) + 4)));
                t5 = 1;
                *(u32*)((s0 + *(u32*)(&D_0035dcfc))) = 0xffffffff;
            }
            s1 = (s1 + -1);
            s0 = (s0 + 0x28);
        } while (((s32)(s1) >= 0));
    }
    return t5;
}
