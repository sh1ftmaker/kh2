// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00349e10 asm("D_00349e10");
extern "C" u32 D_01e2c060 asm("D_01e2c060");
extern "C" u32 func_002eb098(u32) asm("func_002eb098");
extern "C" u32 func_002eb1a0(u32) asm("func_002eb1a0");
extern "C" u32 func_002eb3b8(u32) asm("func_002eb3b8");

// 0x002ecb10 func_002ecb10
// minilink-rodata 0x00376174   (float literals live here in the original)
void func_002ecb10(u32 a0, u32 a1) asm("func_002ecb10");
void func_002ecb10(u32 a0, u32 a1) {
    f32 f1;
    if (((s32)(func_002eb3b8(a1)) == 0)) {
        f1 = *(f32*)(&D_01e2c060);
        *(f32*)(&D_01e2c060) = (f1 + *(f32*)(&D_00349e10));
        if (!((10.0f < (f1 + *(f32*)(&D_00349e10))))) {
            if ((func_002eb098(a1) != 0)) {
                func_002eb1a0(a1);
                return;
            } else {
                return;
            }
        } else {
            func_002eb1a0(a1);
            return;
        }
    } else {
        return;
    }
}
