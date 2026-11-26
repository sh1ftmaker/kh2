// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 _Z13func_00226030Pv asm("_Z13func_00226030Pv");
extern "C" u32 func_00168388(u32, u32, u32, u32) asm("func_00168388");
extern "C" u32 func_001688b8() asm("func_001688b8");
extern "C" u32 func_00227a28() asm("func_00227a28");
extern "C" u32 func_002bd260(u32) asm("func_002bd260");
extern "C" u32 func_002bd2f0(u32, u32) asm("func_002bd2f0");
extern "C" void func_00102448(u32, u32) asm("func_00102448");
extern "C" void func_00136cc8(u32, u32) asm("func_00136cc8");
extern "C" void func_00225550(u32, u32) asm("func_00225550");
extern "C" void func_002256c8(u32, u32) asm("func_002256c8");
extern "C" void func_002ff2e8(u32, u32) asm("func_002ff2e8");

// 0x00225788 func_00225788
u32 func_00225788(u32 a0, u32 a1) asm("func_00225788");
u32 func_00225788(u32 a0, u32 a1) {
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    u32 v0_2;
    u32 loc_0;
    u32 v0_3;
    func_00225550(a0, a1);
    func_00136cc8(a1, *(s16*)((a0 + 6)));
    v0 = func_00227a28();
    *(u32*)(v0) = 6;
    v0_0 = func_002bd260(*(s16*)((a0 + 6)));
    func_002ff2e8(v0 + 0x30, v0_0);
    func_002256c8(v0, v0_0);
    func_00168388(v0_0, *(u32*)((v0 + 0x14)), (u32)&_Z13func_00226030Pv, v0);
    while ((v0_1 = func_001688b8()), ((s32)(v0_1) != 0)) {
        func_00102448(a1, 0);
    }
    v0_2 = func_00227a28();
    *(u32*)(v0_2) = 5;
    loc_0 = 0;
    v0_3 = func_002bd2f0(*(u32*)((v0 + 0x14)), (u32)&loc_0);
    func_002ff2e8(v0_2 + 0x30, v0_3);
    func_002256c8(v0_2, v0_3);
    return func_00168388(v0_3, *(u32*)((v0_2 + 0x14)), (u32)&_Z13func_00226030Pv, v0_2);
}
