// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00194218(u32, u32, f32) asm("func_00194218");

// 0x00194120 func_00194120
// minilink-rodata 0x0036cedc   (float literals live here in the original)
void func_00194120(u32 a0, f32 fa0) asm("_ZN2YS3OBJ9exec_fadeEv");
void func_00194120(u32 a0, f32 fa0) {
    f32 f20;
    f32 f20_0;
    u32 s0;
    if (!((fa0 < 0.0f))) {
        if ((1.0f < fa0)) {
            f20 = 1.0f;
        } else {
            f20 = fa0;
        }
        f20_0 = f20;
    } else {
        f20_0 = 0.0f;
    }
    *(u8*)((a0 + 0x6a0)) = (s32)((f20_0 * 255.0f));
    if ((*(u16*)((*(u32*)((a0 + 8)) + 0x4c)) != 0x1388)) {
        if ((*(u16*)((*(u32*)((a0 + 8)) + 0x4c)) == 0x138a)) {
            func_00194218(a0, 0, 1.0f - f20_0);
            func_00194218(a0, 1, f20_0);
            return;
        } else {
            return;
        }
    } else {
        s0 = 0;
        do {
            func_00194218(a0, s0, f20_0);
            s0 = (s0 + 1);
        } while (((s32)(((s32)(s0) < (s32)(0xa))) != 0));
        return;
    }
}
