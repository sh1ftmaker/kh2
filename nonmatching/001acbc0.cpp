// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00350a38 asm("D_00350a38");
extern "C" u32 func_00167f18(u32) asm("func_00167f18");
extern "C" u32 func_001abdf0(u32, u32) asm("func_001abdf0");
extern "C" u32 func_001abe80(u32, u32, u32) asm("func_001abe80");
extern "C" u32 func_001ac0d0(u32) asm("func_001ac0d0");
extern "C" u32 func_001ac1d0(u32) asm("func_001ac1d0");
extern "C" u32 func_001ac728(u32) asm("func_001ac728");
extern "C" u32 func_00239bf8(u32, u32) asm("func_00239bf8");
extern "C" u32 func_00239d10(u32) asm("func_00239d10");
extern "C" void func_001aa558(u32) asm("func_001aa558");

// 0x001acbc0 YS::WINDOW_BASE::update()
u32 lift_001acbc0(u32 a0) asm("_ZN2YS11WINDOW_BASE6updateEv");
u32 lift_001acbc0(u32 a0) {
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    u32 t7;
    u8 t7_2;
    u32 v0_3;
    u32 v0_4;
    u32 v0_5;
    u32 v0_6;
    u32 v0_7;
    v0 = func_00167f18(0);
    switch (*(u32*)((a0 + 0x70))) {
    case 0:
        v0_0 = func_00239d10(a0 + 0x84);
        if ((v0_0 == 0)) {
            v0_1 = func_00239bf8(a0 + 0x84, *(u8*)(((((*(u32*)((a0 + 0x1dc)) << 1) + *(u32*)((a0 + 0x1dc))) + (u32)&D_00350a38) + 1)));
            *(u32*)((a0 + 0x70)) = 1;
            v0_0 = v0_1;
        }
        return v0_0;
    case 1:
        t7 = *(u32*)((a0 + 0xc));
        t7_2 = (t7 & 1);
        if (((s32)(t7_2) != 0)) {
            func_001aa558(a0 + 0xc);
            v0_3 = func_001abdf0(a0 + 0x1e0, 0);
            *(u32*)((a0 + 0x70)) = 2;
            v0 = v0_3;
        }
        return v0;
    case 2:
        if ((*(u32*)((a0 + 0x4a8)) == 0)) {
            return func_001abe80(a0 + 0x1e0, a0, v0);
        } else {
            if (((*(u32*)((*(u32*)((a0 + 0x4a8)) + 0x70)) ^ 3) == 0)) {
                ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)((a0 + 0x4a8))) + 0x20))))(*(u32*)((a0 + 0x4a8)));
                return func_001ac728(a0);
            } else {
                return v0;
            }
        }
        break;
    case 4:
        v0_4 = func_001ac0d0(a0 + 0x4ac);
        *(u32*)((a0 + 0x70)) = 5;
        return v0_4;
    case 5:
        v0_5 = func_001ac1d0(a0 + 0x4ac);
        if ((v0_5 == 0)) {
            v0_6 = func_00239bf8(a0 + 0x84, *(u8*)(((((*(u32*)((a0 + 0x1dc)) << 1) + *(u32*)((a0 + 0x1dc))) + (u32)&D_00350a38) + 2)));
            *(u32*)((a0 + 0x70)) = 6;
            v0_5 = v0_6;
        }
        return v0_5;
    case 6:
        v0_7 = func_00239d10(a0 + 0x84);
        if ((v0_7 == 0)) {
            *(u32*)((a0 + 0x70)) = 7;
        }
        return v0_7;
    case 3:
    default:
        return v0;
    }
}
