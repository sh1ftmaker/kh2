// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0017f540(u32, u32, f32, f32) asm("func_0017f540");

// 0x0017c108 func_0017c108
// minilink-rodata 0x0036c500   (float literals live here in the original)
void func_0017c108(u32 a0, u32 a1, u32 a2) asm("_ZN2YS11ACTION_IDLE13change_motionEPNS_3OBJEi");
void func_0017c108(u32 a0, u32 a1, u32 a2) {
    if (((s32)((*(u32*)((a1 + 0x160)) & 4)) == 0)) {
        if (((s32)((*(u32*)((a1 + 0x160)) & 0x10)) != 0)) {
            if (((s32)(a2) != 0)) {
                func_0017f540(a1 + 0x140, a2, 8.0f, 0.0f);
                return;
            } else {
                return;
            }
        } else {
            return;
        }
    } else {
        func_0017f540(a1 + 0x140, a2, 8.0f, 0.0f);
        return;
    }
}
