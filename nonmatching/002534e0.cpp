// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00103550() asm("func_00103550");
extern "C" u32 func_00103b38() asm("func_00103b38");
extern "C" u32 func_00253180(u32, u32) asm("func_00253180");
extern "C" void func_0027dc08() asm("func_0027dc08");

// 0x002534e0 func_002534e0
u32 func_002534e0() asm("_ZN2Tz8CampMenu12StartHelpGraEPvS1_");
u32 func_002534e0() {
    u32 s0;
    u32 v0;
    func_0027dc08();
    s0 = func_00103550();
    v0 = func_00103b38();
    if (((s32)(v0) != 0)) {
        if ((s0 != 0x32)) {
            return func_00253180(0xe, 0xffffffff);
        } else {
            return v0;
        }
    } else {
        return func_00253180(0xe, 0xffffffff);
    }
}
