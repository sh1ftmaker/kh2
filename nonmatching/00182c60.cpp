// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 D_0034ed00 asm("D_0034ed00");
extern "C" u32 D_0034ed04 asm("D_0034ed04");
extern "C" u32 D_01c60588 asm("D_01c60588");
extern "C" u32 func_0016c028(u32) asm("func_0016c028");
extern "C" u32 func_00186078(u32) asm("func_00186078");
extern "C" u32 func_0019ba60(u32) asm("func_0019ba60");
extern "C" void func_00182980(u32, u32) asm("func_00182980");

// 0x00182c60 func_00182c60
u32 func_00182c60() asm("_ZN2YS4UNIT8ExecTaskEP4TASK");
u32 func_00182c60() {
    u8 frame[16];
    u32 s0;
    u32 v0;
    u32 v0_0;
    Q16 loc_0;
    u32 s2;
    u32 s1;
    u32 s0_1;
    u32 sp;
    u32 sp_2;
    u32 sp_3;
    u32 s0_4;
    u32 v0_6;
    s0 = 0;
    while ((v0 = func_00186078(s0)), (s0 = v0), ((s32)(v0) != 0)) {
        *(u32*)((s0 + 0xaa8)) = (*(u32*)((s0 + 0xaa8)) | 0x10000);
    }
    if (((s32)(func_0019ba60(*(u32*)(&D_0034ed04))) != 0)) {
        if (((*(u32*)((*(u32*)(&D_0034ed04) + 0x7f8)) & 4) == 0)) {
            v0_0 = func_0016c028(*(u32*)(&D_0034ed04));
            if (((u32)frame != v0_0)) {
                loc_0 = *(Q16*)(v0_0);
            }
            if (((s32)((*(u32*)((*(u32*)(&D_0034ed04) + 0x588)) & 0x80)) != 0)) {
                *(u32*)((*(u32*)(&D_0034ed04) + 0xb4c)) = 0xffffffff;
            }
            if (((s32)(((s32)(s0) < (s32)(*(u32*)(&D_0034ed00)))) != 0)) {
                s2 = 0x350000;
                s1 = 0;
                s0_1 = (u32)&D_01c60588;
                do {
                    func_00182980(s0_1, (u32)&loc_0);
                    s1 = (s1 + 1);
                    s0_1 = (s0_1 + 0xc);
                } while (((s32)(((s32)(s1) < (s32)(*(u32*)((s2 + -0x1300))))) != 0));
            } else {
                sp = (u32)frame;
            }
            sp_2 = sp;
        } else {
            sp_2 = (u32)frame;
        }
        sp_3 = sp_2;
    } else {
        sp_3 = (u32)frame;
    }
    s0_4 = 0;
    while ((v0_6 = func_00186078(s0_4)), (s0_4 = v0_6), ((s32)(v0_6) != 0)) {
        if (((*(u32*)((s0_4 + 0xaa8)) & 0x10000) != 0)) {
            continue;
        }
    }
    return v0_6;
}
