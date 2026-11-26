// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00138c10(u32, u32) asm("func_00138c10");
extern "C" u32 func_00257130() asm("func_00257130");
extern "C" u32 func_00257140(u32) asm("func_00257140");
extern "C" u32 func_00257770() asm("func_00257770");
extern "C" u32 func_00281f18(u32) asm("func_00281f18");
extern "C" u32 func_00281f30(u32) asm("func_00281f30");
extern "C" u32 func_002827f0(u32, u32, u32) asm("func_002827f0");
extern "C" void func_00139d78(u32) asm("func_00139d78");
extern "C" void func_002634d8(u32) asm("func_002634d8");

// 0x00261fb8 Tz::CmItem::UpdateStockList()
u32 lift_00261fb8() asm("_ZN2Tz6CmItem15UpdateStockListEv");
u32 lift_00261fb8() {
    u8 frame[16];
    u32 v0;
    u32 s3;
    u32 s2;
    u32 s1;
    u32 v0_0;
    u32 s2_1;
    u32 v0_2;
    u32 sp;
    v0 = func_00257770();
    func_00139d78(v0);
    func_002634d8(0);
    s3 = func_00257140(0);
    s2 = func_00281f30(func_00257130());
    if (((s32)(((s32)(func_00281f18(func_00257130())) < (s32)(0x14))) != 0)) {
        s1 = func_00281f18(func_00257130());
    } else {
        s1 = 0x14;
    }
    v0_0 = func_002827f0(func_00257130(), 0, s1);
    if (((s32)(s1) > 0)) {
        s2_1 = (s2 + 0x10);
        do {
            func_00138c10(v0 + 0x3610, 0x8f);
            v0_2 = func_00138c10(v0 + 0x5ef0, s3);
            *(u32*)((v0 + 0x6088)) = s2_1;
            v0 = (v0 + 0x1b4);
            s1 = (s1 + -1);
            s2_1 = (s2_1 + 0x50);
            v0_0 = v0_2;
        } while (((s32)(s1) != 0));
    } else {
        sp = (u32)frame;
    }
    return v0_0;
}
