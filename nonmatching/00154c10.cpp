// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00154910(u32) asm("func_00154910");
extern "C" u32 func_00154930(u32) asm("func_00154930");
extern "C" void func_00138c10(u32, u32) asm("func_00138c10");

// 0x00154c10 func_00154c10
void func_00154c10(u32 a0, u32 a1) asm("_ZN2dk11GAUGE_ENEMY6damageEi");
void func_00154c10(u32 a0, u32 a1) {
    u8 frame[16];
    u32 t5;
    u32 s3;
    u32 v0;
    u32 s5;
    u32 s4;
    u32 s1;
    u32 sp;
    *(u32*)((a0 + 0x3cc0)) = (((s32)(a1) < (s32)(0)) ? 0 : a1);
    t5 = *(u32*)((a0 + 0x3ccc));
    *(u32*)((a0 + 0x3cc8)) = t5;
    *(u32*)((a0 + 0x3ccc)) = (((s32)(a1) < (s32)(0)) ? 0 : a1);
    func_00138c10(a0 + 0x690, 0x29);
    s3 = func_00154910(a0);
    v0 = func_00154930(a0);
    if (((s32)(v0) > 0)) {
        s5 = 0x2e;
        s4 = 0x2c;
        s1 = 0;
        do {
            func_00138c10((a0 + (s1 * 0x330)) + 0xb58, ((s32)(s1) < (s32)(s3)) ? s4 : s5);
            s1 = (s1 + 1);
        } while (((s32)(((s32)(s1) < (s32)(v0))) != 0));
    } else {
        sp = (u32)frame;
    }
    return;
}
