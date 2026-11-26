// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00350f18 asm("D_00350f18");
extern "C" u32 D_00350f1c asm("D_00350f1c");
extern "C" u32 D_0036d9a8 asm("D_0036d9a8");
extern "C" u32 D_01d44400 asm("D_01d44400");
extern "C" u32 D_01d44440 asm("D_01d44440");
extern "C" u32 D_01d48c44 asm("D_01d48c44");
extern "C" u32 func_001688b8() asm("func_001688b8");
extern "C" void func_00102448(u32, u32) asm("func_00102448");
extern "C" void func_00168388(u32, u32, u32, u32) asm("func_00168388");
extern "C" void func_001688c8(u32) asm("func_001688c8");
extern "C" void func_002fee78(u32, u32, u32) asm("func_002fee78");

// 0x001b1ee8 YS::ITEMPIC::ReadImageThread(TASK*)
u32 lift_001b1ee8(u32 a0) asm("_ZN2YS7ITEMPIC15ReadImageThreadEP4TASK");
u32 lift_001b1ee8(u32 a0) {
    u8 frame[48];
    u32 s0;
    u32 sp;
    u32 loc_0;
    u32 s1;
    u32 v0_0;
    if (((s32)(*(u32*)(&D_00350f18)) != 0)) {
        s0 = 0x350000;
        do {
            func_00102448(a0, 0);
        } while ((*(u32*)((s0 + 0xf18)) != 0));
    } else {
        sp = (u32)frame;
    }
    *(u32*)(&D_00350f18) = 1;
    s1 = *(u32*)((a0 + 4));
    func_002fee78((u32)&loc_0, (u32)&D_0036d9a8, *(u32*)((a0 + 4)));
    func_001688c8((u32)&loc_0);
    func_00168388((u32)&loc_0, (u32)&D_01d44440, 0, 0);
    while ((v0_0 = func_001688b8()), ((s32)(v0_0) != 0)) {
        func_00102448(a0, 0);
    }
    *(u32*)(&D_00350f1c) = s1;
    *(u32*)(&D_00350f18) = 0;
    *(u32*)(&D_01d44400) = 0;
    *(u32*)(&D_01d48c44) = 0;
    return v0_0;
}
