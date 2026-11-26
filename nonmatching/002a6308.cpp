// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f200 asm("D_0035f200");
extern "C" u32 D_0035f214 asm("D_0035f214");
extern "C" u32 func_0028b038(u32) asm("func_0028b038");
extern "C" u32 func_0028be78(u32, u32) asm("func_0028be78");
extern "C" u32 func_002a65d0() asm("func_002a65d0");
extern "C" void func_002a5df0(u32) asm("func_002a5df0");

// 0x002a6308 func_002a6308
void func_002a6308(u32 a0, u32 a1) asm("_ZN2Tz8JmBattle10DrawUpdateEPNS_6SelectEii");
void func_002a6308(u32 a0, u32 a1) {
    if ((a1 != 0x25)) {
        if ((a1 != 0x26)) {
            return;
        } else {
            func_0028be78(*(u32*)(&D_0035f214), func_0028b038(*(u32*)(&D_0035f200)));
            return;
        }
    } else {
        func_002a5df0(a0);
        func_002a65d0();
        return;
    }
}
