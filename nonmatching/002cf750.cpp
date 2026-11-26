// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00361fa4 asm("D_00361fa4");
extern "C" u32 D_00361fb0 asm("D_00361fb0");
extern "C" u32 func_0016e920(u32, u32, u32, u32, u32) asm("func_0016e920");
extern "C" u32 func_002cf638(u32) asm("func_002cf638");
extern "C" u32 func_002d0200(u32) asm("func_002d0200");
extern "C" void func_002cf280(u32, u32, u32) asm("func_002cf280");
extern "C" void func_002cf2d0(u32) asm("func_002cf2d0");

// 0x002cf750 func_002cf750
u32 func_002cf750(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) asm("_ZN2Ti5MGObj13append_memberEjPN2YS10UNIT_GROUPEPKNS1_13UNIT_DATA_OBJEPNS_11MGObjMemberES8_");
u32 func_002cf750(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) {
    u32 v0;
    u32 v0_0;
    u32 s0;
    u32 s1;
    u32 t7;
    u32 t7_1;
    u32 t7_2;
    v0 = func_0016e920(*(u32*)(a2), a1, a2, a3, a4);
    if (((s32)(func_002d0200(v0)) == 0)) {
        v0_0 = func_002cf638(1);
        s0 = (*(u32*)(&D_00361fa4) + (v0_0 * 0x28));
        *(u32*)(s0) = a0;
        *(u32*)((s0 + 0x14)) = a1;
        *(u32*)((s0 + 0xc)) = a2;
        *(u32*)((s0 + 8)) = 0;
        *(u32*)((s0 + 0x10)) = 0;
        *(u32*)((s0 + 0x18)) = a3;
        if (((s32)(a3) != 0)) {
            *(u32*)((a3 + 0x24)) = (*(u32*)((a3 + 0x24)) + 1);
        }
        *(u32*)((s0 + 0x1c)) = a4;
        if (((s32)(a4) != 0)) {
            *(u32*)((a4 + 0x24)) = (*(u32*)((a4 + 0x24)) + 1);
        }
        s1 = (s0 + 4);
        func_002cf2d0(s1);
        *(u32*)((s0 + 0x24)) = 0;
        if ((*(u8*)((v0 + 5)) == 0x33)) {
            func_002cf280(s1, 4, 0);
            if ((*(u32*)(v0) != 0x807)) {
                if (((s32)(((u32)(*(u32*)(v0)) < (u32)(0x808))) != 0)) {
                    if ((*(u32*)(v0) == 0x806)) {
                        *(u32*)((s0 + 8)) = 2;
                    }
                } else {
                    if ((*(u32*)(v0) == 0x808)) {
                        *(u32*)((s0 + 8)) = 0;
                    }
                }
            } else {
                *(u32*)((s0 + 8)) = 1;
            }
            t7 = (*(u32*)((s0 + 8)) << 2);
            t7_1 = (t7 + (u32)&D_00361fb0);
            *(u32*)(t7_1) = (*(u32*)(t7_1) + 1);
        }
        t7_2 = s0;
    } else {
        t7_2 = 0;
    }
    return t7_2;
}
