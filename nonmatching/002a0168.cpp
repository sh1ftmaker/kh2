// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f200 asm("D_0035f200");
extern "C" u32 D_0035f214 asm("D_0035f214");
extern "C" u32 func_0028b038(u32) asm("func_0028b038");
extern "C" u32 func_0028be78(u32, u32) asm("func_0028be78");
extern "C" u32 func_002a03d0() asm("func_002a03d0");
extern "C" void func_0029fcb0(u32) asm("func_0029fcb0");

// 0x002a0168 func_002a0168
void func_002a0168(u32 a0, u32 a1) asm("_ZN2Tz7JmAnsem10DrawUpdateEPNS_6SelectEii");
void func_002a0168(u32 a0, u32 a1) {
    if ((a1 != 0x18)) {
        if ((a1 != 0x19)) {
            return;
        } else {
            func_0028be78(*(u32*)(&D_0035f214), func_0028b038(*(u32*)(&D_0035f200)));
            return;
        }
    } else {
        func_0029fcb0(a0);
        func_002a03d0();
        return;
    }
}
