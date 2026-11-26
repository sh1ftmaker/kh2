// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0036ef58 asm("D_0036ef58");
extern "C" u32 D_0036ef88 asm("D_0036ef88");
extern "C" u32 D_0036ef98 asm("D_0036ef98");
extern "C" u32 D_0036efc8 asm("D_0036efc8");
extern "C" u32 D_01d9e6e0 asm("D_01d9e6e0");
extern "C" u32 D_01d9ea9c asm("D_01d9ea9c");
extern "C" void func_001e78e0(u32) asm("func_001e78e0");
extern "C" void func_001e8558(u32, u32) asm("func_001e8558");
extern "C" void func_002fdfc8(u32, u32, u32) asm("func_002fdfc8");

// 0x001e8c28 func_001e8c28
u32 func_001e8c28(u32 a0, u32 a1, u32 a2) asm("func_001e8c28");
u32 func_001e8c28(u32 a0, u32 a1, u32 a2) {
    u32 t6;
    u32 t7;
    u32 t7_0;
    u32 t6_1;
    u32 t7_2;
    u32 v0;
    u32 t7_3;
    u32 v0_4;
    u32 v0_5;
    u32 v0_6;
    if (((s32)(a0) == 0)) {
        func_002fdfc8((u32)&D_0036ef58, (u32)&D_0036efc8, a2);
        func_002fdfc8((u32)&D_0036ef98, (u32)&D_0036ef88, 0x3e8);
    }
    func_001e8558(a0, a1);
    t6 = *(u32*)(&D_01d9ea9c);
    func_001e78e0(a0);
    if (((s32)(t6) == 0)) {
        t7 = *(u64*)((*(u32*)(&D_01d9e6e0) + 0xa8));
        if (((t7 & ((u64)(0xff) | 0xff00)) == 0)) {
            t7_0 = *(u32*)((a0 + 0x58));
            *(u32*)((a0 + 0x58)) = (t7_0 + 0x1000);
            *(u32*)((a0 + 0x5c)) = t7_0;
            t6_1 = *(u8*)((a0 + 0x84));
            if (((s32)(t6_1) != 0)) {
                t7_2 = *(u8*)((a0 + 0x85));
                if (((s32)(t7_2) != 0)) {
                    v0 = ((u32)(*(u32*)((a0 + 0x74))) < (u32)(1));
                } else {
                    if (((s32)(((s32)(0x6fffffff) < (s32)((t7_0 + 0x1000)))) != 0)) {
                        *(u32*)((a0 + 0x58)) = 0x70000000;
                        *(u32*)((a0 + 0x5c)) = 0x6ffff000;
                    }
                    v0 = 0;
                }
                v0_4 = v0;
            } else {
                t7_3 = *(u32*)((a0 + 0x54));
                v0_4 = (((s32)((t7_0 + 0x1000)) < (s32)(t7_3)) ^ 1);
            }
            v0_5 = v0_4;
        } else {
            v0_5 = 0;
        }
        v0_6 = v0_5;
    } else {
        v0_6 = 0;
    }
    return v0_6;
}
