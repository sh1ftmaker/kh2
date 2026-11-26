// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0032bae0 asm("D_0032bae0");
extern "C" u32 D_0033caf4 asm("D_0033caf4");
extern "C" u32 D_00347fec asm("D_00347fec");
extern "C" u32 D_00347ff0 asm("D_00347ff0");
extern "C" u32 D_0036acb0 asm("D_0036acb0");
extern "C" u32 D_0036acd0 asm("D_0036acd0");
extern "C" u32 D_003b8ba0 asm("D_003b8ba0");
extern "C" u32 D_004193c0 asm("D_004193c0");
extern "C" u32 func_00105ee8(u32) asm("func_00105ee8");
extern "C" u32 func_0014a1f0() asm("func_0014a1f0");
extern "C" u32 func_00194a08() asm("func_00194a08");
extern "C" u32 func_00242c70() asm("func_00242c70");
extern "C" u32 func_00242ea8() asm("func_00242ea8");
extern "C" void func_001684c0(u32, u32, u32, u32) asm("func_001684c0");
extern "C" void func_001688c8(u32) asm("func_001688c8");
extern "C" void func_002fee78(u32, u32, u32, u32, u32) asm("func_002fee78");
extern "C" void func_002ff3fc(u32) asm("func_002ff3fc");

// 0x0013a4c8 dk::Field2DD::readCommand()
u32 lift_0013a4c8() asm("_ZN2dk8Field2DD11readCommandEv");
u32 lift_0013a4c8() {
    u32 a3_0;
    u32 t0;
    u32 t6;
    u32 s0;
    u32 v0;
    u32 t6_1;
    u32 t6_2;
    u32 t6_3;
    u32 t6_4;
    u32 t6_5;
    if (((s32)(func_00242ea8()) == 0)) {
        if (((s32)(func_0014a1f0()) == 0)) {
            if (((s32)(func_00242c70()) == 0)) {
                if (((s32)(*(u32*)(&D_00347fec)) != 0)) {
                    *(u32*)(&D_00347fec) = 0;
                    *(u32*)(&D_00347ff0) = 0xffffffff;
                    func_002fee78((u32)&D_003b8ba0, (u32)&D_0036acb0, *(u32*)(&D_0033caf4), a3_0, t0);
                    func_002ff3fc((u32)&D_003b8ba0);
                    func_001688c8((u32)&D_003b8ba0);
                    func_001684c0((u32)&D_003b8ba0, (u32)&D_004193c0, 0, 0);
                    t6 = 1;
                } else {
                    t6 = 0;
                }
                t6_3 = t6;
            } else {
                s0 = *(u8*)(&D_0032bae0);
                v0 = func_00194a08();
                if ((s0 == *(u32*)(&D_00347fec))) {
                    if ((v0 != *(u32*)(&D_00347ff0))) {
                        *(u32*)(&D_00347fec) = s0;
                        *(u32*)(&D_00347ff0) = v0;
                        func_002fee78((u32)&D_003b8ba0, (u32)&D_0036acd0, *(u32*)(&D_0033caf4), func_00105ee8(s0), v0);
                        func_002ff3fc((u32)&D_003b8ba0);
                        func_001688c8((u32)&D_003b8ba0);
                        func_001684c0((u32)&D_003b8ba0, (u32)&D_004193c0, 0, 0);
                        t6_1 = 1;
                    } else {
                        t6_1 = 0;
                    }
                    t6_2 = t6_1;
                } else {
                    *(u32*)(&D_00347fec) = s0;
                    *(u32*)(&D_00347ff0) = v0;
                    func_002fee78((u32)&D_003b8ba0, (u32)&D_0036acd0, *(u32*)(&D_0033caf4), func_00105ee8(s0), v0);
                    func_002ff3fc((u32)&D_003b8ba0);
                    func_001688c8((u32)&D_003b8ba0);
                    func_001684c0((u32)&D_003b8ba0, (u32)&D_004193c0, 0, 0);
                    t6_2 = 1;
                }
                t6_3 = t6_2;
            }
            t6_4 = t6_3;
        } else {
            t6_4 = 0;
        }
        t6_5 = t6_4;
    } else {
        t6_5 = 0;
    }
    return t6_5;
}
