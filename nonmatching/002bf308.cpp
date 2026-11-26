// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00361998 asm("D_00361998");
extern "C" u32 func_001024a8() asm("func_001024a8");
extern "C" u32 func_00236d60() asm("func_00236d60");
extern "C" u32 func_002ee040(u32) asm("func_002ee040");

// 0x002bf308 func_002bf308
u32 func_002bf308() asm("_ZN8worldmap10RootWindow8execTaskEP4TASK");
u32 func_002bf308() {
    u8 frame[32];
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    if (((s32)(*(u32*)(&D_00361998)) == 0)) {
        v0 = func_001024a8();
        v0_1 = v0;
    } else {
        func_00236d60();
        if (((s32)(func_002ee040(*(u32*)(&D_00361998))) != 0)) {
            *(u8*)(((u32)frame + 0x13)) = 0x80;
            *(u32*)((u32)frame) = 0;
            *(u32*)(((u32)frame + 4)) = 0;
            *(u8*)(((u32)frame + 0x10)) = 0x80;
            *(u8*)(((u32)frame + 0x11)) = 0x80;
            *(u8*)(((u32)frame + 0x12)) = 0x80;
            ((void(*)(u32, u32, u32))(*(u32*)((*(u32*)(*(u32*)(&D_00361998)) + 0x10))))(*(u32*)(&D_00361998), *(u64*)((u32)frame), *(u32*)(((u32)frame + 0x10)));
        }
        v0_0 = func_00236d60();
        v0_1 = v0_0;
    }
    return v0_1;
}
