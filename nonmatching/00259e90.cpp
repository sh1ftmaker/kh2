// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f64c asm("D_0035f64c");
extern "C" u32 D_0035f664 asm("D_0035f664");
extern "C" u32 D_00372ed8 asm("D_00372ed8");
extern "C" u32 func_00253578() asm("func_00253578");
extern "C" u32 func_002891b8(u32, u32) asm("func_002891b8");
extern "C" u32 func_0028af18(u32, u32) asm("func_0028af18");
extern "C" void func_001395f8(u32) asm("func_001395f8");
extern "C" void func_00139620(u32) asm("func_00139620");
extern "C" void func_00288d80(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_00288d80");
extern "C" void func_00288e08(u32, u32, u32, u32) asm("func_00288e08");
extern "C" void func_002891f0(u32, u32, u32, u32, u32) asm("func_002891f0");

// 0x00259e90 Tz::CmSLBase::SetupSlot()
u32 lift_00259e90() asm("_ZN2Tz8CmSLBase9SetupSlotEv");
u32 lift_00259e90() {
    u32 s0;
    u32 s1;
    s0 = 0;
    s1 = 0;
    do {
        if ((s0 == 1)) {
            if ((func_00253578() == 2)) {
                break;
            }
        }
        func_00288d80(*(u32*)(&D_0035f64c), s0, 0, 0, *(u32*)(&D_0035f664), *(u16*)((((s1 + (s0 * 0x24)) + (u32)&D_00372ed8) + 0x12)), (s1 + (s0 * 0x24)) + (u32)&D_00372ed8, (s1 + (s0 * 0x24)) + ((u32)&D_00372ed8 + 8));
        func_00288e08(*(u32*)(&D_0035f64c), s0, 0, 0xffffffff);
        func_00139620(func_002891b8(*(u32*)(&D_0035f64c), s0));
        func_001395f8(func_002891b8(*(u32*)(&D_0035f64c), s0));
        s0 = (s0 + 1);
    } while (((s32)(((s32)(s0) < (s32)(2))) != 0));
    func_002891f0(*(u32*)(&D_0035f64c), 0, 1, 0, 2);
    return func_0028af18(*(u32*)(&D_0035f64c), 0x73);
}
