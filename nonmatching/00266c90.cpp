// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f010 asm("D_0035f010");
extern "C" u32 D_0035f0e4 asm("D_0035f0e4");
extern "C" u32 func_00266c00() asm("func_00266c00");
extern "C" u32 func_00281100(u32) asm("func_00281100");
extern "C" u32 func_00281340(u32) asm("func_00281340");

// 0x00266c90 func_00266c90
u32 func_00266c90() asm("_ZN2Tz6CmStat14GetTopSelectorEv");
u32 func_00266c90() {
    u8 frame[16];
    u32 v0;
    u32 t3;
    u32 t2;
    u32 s0;
    u32 sp;
    u32 s0_0;
    u32 s1;
    u32 v0_1;
    u32 s0_2;
    u32 v0_3;
    *(u16*)((*(u32*)(&D_0035f0e4) + 0x1c)) = 0;
    *(u8*)((*(u32*)(&D_0035f0e4) + 0x1f)) = 0;
    v0 = func_00281100(*(u32*)(&D_0035f010));
    if (((s32)(v0) != 0)) {
        *(u16*)((*(u32*)(&D_0035f0e4) + 0x1c)) = (*(u16*)((*(u32*)(&D_0035f0e4) + 0x1c)) | 1);
    }
    if (((s32)(1) < (s32)(v0))) {
        t3 = 1;
        t2 = 0x360000;
        s0 = 1;
        do {
            *(u16*)((*(u32*)((t2 + -0xf1c)) + 0x1c)) = (*(u16*)((*(u32*)((t2 + -0xf1c)) + 0x1c)) | (t3 << (s0 + 6)));
            s0 = (s0 + 1);
        } while (((s32)(((s32)(s0) < (s32)(v0))) != 0));
    } else {
        sp = (u32)frame;
    }
    s0_0 = 0;
    do {
        if (((s32)(s0_0) != 0)) {
            if ((s0_0 != 6)) {
                if (((s32)(func_00281340(s0_0)) != 0)) {
                    switch (s0_0) {
                    case 1:
                        v0_1 = 1;
                        break;
                    case 2:
                        v0_1 = 2;
                        break;
                    case 3:
                        v0_1 = 3;
                        break;
                    case 4:
                        v0_1 = 4;
                        break;
                    case 5:
                        v0_1 = 5;
                        break;
                    case 0:
                    default:
                        v0_1 = 0xffffffff;
                        break;
                    }
                    *(u16*)((*(u32*)(&D_0035f0e4) + 0x1c)) = (*(u16*)((*(u32*)(&D_0035f0e4) + 0x1c)) | (1 << v0_1));
                    *(u8*)((*(u32*)(&D_0035f0e4) + 0x1f)) = (*(u8*)((*(u32*)(&D_0035f0e4) + 0x1f)) | (1 << s0_0));
                }
            }
        }
        s0_0 = (s0_0 + 1);
        s1 = 0x360000;
    } while (((s32)(((s32)(s0_0) < (s32)(7))) != 0));
    s0_2 = *(u32*)((s1 + -0xf1c));
    v0_3 = func_00266c00();
    *(u8*)((s0_2 + 0x1e)) = v0_3;
    if (((s32)(*(s8*)((*(u32*)((s1 + -0xf1c)) + 0x1e))) != 0)) {
        *(u16*)((*(u32*)((s1 + -0xf1c)) + 0x1c)) = (*(u16*)((*(u32*)((s1 + -0xf1c)) + 0x1c)) | 0x40);
    }
    return v0_3;
}
