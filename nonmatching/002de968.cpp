// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x002de968 func_002de968
// minilink-rodata 0x00375e24   (float literals live here in the original)
void func_002de968(f32 fa0) asm("func_002de968");
void func_002de968(f32 fa0) {
    f32 f12;
    f32 f1;
    f32 f0;
    f32 f12_0;
    f32 f1_1;
    f32 f0_2;
    if ((0.0f < fa0)) {
        if ((3.1415927410125732f < fa0)) {
            f12 = (fa0 - 6.2831854820251465f);
            f1 = 3.1415927410125732f;
            f0 = 6.2831854820251465f;
            do {
                f12 = (f12 - f0);
            } while ((f1 < f12));
            fa0 = f12;
        }
    } else {
        if ((fa0 < -3.1415927410125732f)) {
            f12_0 = (fa0 + 6.2831854820251465f);
            f1_1 = -3.1415927410125732f;
            f0_2 = 6.2831854820251465f;
            do {
                f12_0 = (f12_0 + f0_2);
            } while ((f12_0 < f1_1));
            fa0 = f12_0;
        }
    }
    return;
}
