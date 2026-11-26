// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0032bae0 asm("D_0032bae0");
extern "C" u32 D_003502d8 asm("D_003502d8");
extern "C" u32 func_0016a020(u32) asm("func_0016a020");
extern "C" u32 func_0016ac38(u32, u32, u32, u32, u32) asm("func_0016ac38");
extern "C" u32 func_00196388(u32, u32) asm("func_00196388");
extern "C" u32 func_001963c8(u32) asm("func_001963c8");
extern "C" void func_001980d0(u32, u32, u32, u32) asm("func_001980d0");

// 0x00195e28 func_00195e28
void func_00195e28(u32 a0, u32 a1, u32 a2) asm("func_00195e28");
void func_00195e28(u32 a0, u32 a1, u32 a2) {
    u32 v0;
    func_001980d0(a0, a1, 7, a2);
    *(u32*)(a0) = (u32)&D_003502d8;
    *(u32*)((a0 + 0x588)) = (*(u32*)((a0 + 0x588)) | 0x1000);
    *(u32*)((a0 + 0x9f8)) = 0;
    *(u8*)((a0 + 0x9fc)) = 0;
    *(u8*)((a0 + 0x9fd)) = 1;
    *(u32*)((a0 + 0x9f4)) = func_0016ac38(a0, 1, 1, 0, 0);
    if ((func_0016a020(a0) == 0x239)) {
        v0 = func_00196388(*(u8*)(&D_0032bae0), *(u8*)(((u32)&D_0032bae0 + 1)));
        if (((s32)(v0) >= 0)) {
            func_001963c8(v0);
            return;
        } else {
            return;
        }
    } else {
        return;
    }
}
