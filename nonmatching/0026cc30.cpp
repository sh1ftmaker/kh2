// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f01c asm("D_0035f01c");
extern "C" u32 D_0035f024 asm("D_0035f024");
extern "C" u32 D_0035f0f4 asm("D_0035f0f4");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_00256b68(u32) asm("func_00256b68");
extern "C" u32 func_0026d828() asm("func_0026d828");
extern "C" u32 func_00287bc0() asm("func_00287bc0");
extern "C" u32 func_0028acc8(u32) asm("func_0028acc8");
extern "C" void func_00139510(u32) asm("func_00139510");
extern "C" void func_0026c450() asm("func_0026c450");
extern "C" void func_00288e88(u32) asm("func_00288e88");
extern "C" void func_0028abe0(u32) asm("func_0028abe0");

// 0x0026cc30 Tz::CmParty::LeaveList()
u32 lift_0026cc30() asm("_ZN2Tz7CmParty9LeaveListEv");
u32 lift_0026cc30() {
    u32 v0;
    u32 v0_0;
    u32 s0;
    u32 s1;
    u32 s0_1;
    u32 s1_2;
    v0 = func_00287bc0();
    if ((v0 == 0x14)) {
        v0_0 = func_00256b68(1);
        if ((func_00139d78(v0_0) != 0)) {
            ((void(*)(u32))(*(u32*)((*(u32*)(v0_0) + 0x14))))(v0_0);
        }
        if (((s32)(func_00139d78(*(u32*)(&D_0035f0f4))) != 0)) {
            func_00139510(*(u32*)(&D_0035f0f4));
        }
        s0 = 3;
        s1 = 0;
        do {
            if ((func_00139d78((*(u32*)(&D_0035f0f4) + s1) + 0x198) != 0)) {
                ((void(*)(u32))(*(u32*)((*(u32*)(((s1 + *(u32*)(&D_0035f0f4)) + 0x198)) + 0x14))))((s1 + *(u32*)(&D_0035f0f4)) + 0x198);
            }
            s0 = (s0 + -1);
            s1 = (s1 + 0x198);
        } while (((s32)(s0) >= 0));
        s0_1 = 3;
        s1_2 = 0;
        do {
            if ((func_00139d78((*(u32*)(&D_0035f0f4) + s1_2) + 0x7f8) != 0)) {
                ((void(*)(u32))(*(u32*)((*(u32*)(((s1_2 + *(u32*)(&D_0035f0f4)) + 0x7f8)) + 0x14))))((s1_2 + *(u32*)(&D_0035f0f4)) + 0x7f8);
            }
            s0_1 = (s0_1 + -1);
            s1_2 = (s1_2 + 0x1b4);
        } while (((s32)(s0_1) >= 0));
        if ((func_0028acc8(*(u32*)(&D_0035f01c)) != 0)) {
            func_0028abe0(*(u32*)(&D_0035f01c));
        }
        if (((s32)(func_0028acc8(*(u32*)(&D_0035f024))) != 0)) {
            func_00288e88(*(u32*)(&D_0035f024));
        }
        func_0026c450();
        return func_0026d828();
    } else {
        return v0;
    }
}
