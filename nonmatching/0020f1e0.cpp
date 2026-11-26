// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_003707d0 asm("D_003707d0");
extern "C" u32 D_01d9eaa4 asm("D_01d9eaa4");
extern "C" u32 D_01d9eaa8 asm("D_01d9eaa8");
extern "C" u32 D_01d9eab0 asm("D_01d9eab0");
extern "C" u32 func_0020f338(u32, u32) asm("func_0020f338");
extern "C" u32 func_00212338(u32, u32) asm("func_00212338");
extern "C" u32 func_00213ea8(u32, u32) asm("func_00213ea8");
extern "C" u32 func_00215f28(u32, u32) asm("func_00215f28");
extern "C" u32 func_00217d80(u32, u32) asm("func_00217d80");
extern "C" u32 func_0021aee8(u32, u32) asm("func_0021aee8");
extern "C" void func_0020f118(u32, u32) asm("func_0020f118");
extern "C" void func_0020f150(u32, u32) asm("func_0020f150");
extern "C" void func_0020f188() asm("func_0020f188");
extern "C" void func_002fdfc8(u32, u32) asm("func_002fdfc8");

// 0x0020f1e0 func_0020f1e0
u32 func_0020f1e0(u32 a0, u32 a1, u32 a2) asm("func_0020f1e0");
u32 func_0020f1e0(u32 a0, u32 a1, u32 a2) {
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    u32 v0_2;
    u32 v0_3;
    u32 v0_4;
    u32 v0_5;
    u32 v0_6;
    u32 v0_7;
    u32 v0_8;
    u32 v0_9;
    u32 v0_10;
    if (((s32)((*(u32*)(a1) & 4)) != 0)) {
        if ((*(s8*)((a1 + 0x4d)) != 0)) {
            func_0020f118(a0, a1);
        } else {
            if (((s32)(*(s8*)((a1 + 0x4c))) != 0)) {
                func_0020f150(a0, a1);
            }
        }
        if (((s32)((*(u32*)(a1) & 0x300)) != 0)) {
            v0 = func_0021aee8(a0, a1);
            v0_1 = v0;
        } else {
            v0_0 = func_00217d80(a0, a1);
            v0_1 = v0_0;
        }
        if (((s32)(*(u16*)((a1 + 0x4c))) != 0)) {
            func_0020f188();
        }
        v0_10 = v0_1;
    } else {
        if (((s32)(((s32)((*(u32*)(&D_01d9eaa8) + a2)) < (s32)(*(u32*)(&D_01d9eab0)))) == 0)) {
            func_002fdfc8((u32)&D_003707d0, a2);
            v0_9 = *(u32*)(&D_01d9eaa4);
        } else {
            if (((s32)((*(u32*)(a1) & 0x80)) != 0)) {
                if (((s32)((*(u32*)(a1) & 0x300)) != 0)) {
                    v0_2 = func_00212338(a0, a1);
                    v0_4 = v0_2;
                } else {
                    v0_3 = func_0020f338(a0, a1);
                    v0_4 = v0_3;
                }
                v0_8 = v0_4;
            } else {
                if (((s32)((*(u32*)(a1) & 0x300)) != 0)) {
                    v0_5 = func_00215f28(a0, a1);
                    v0_7 = v0_5;
                } else {
                    v0_6 = func_00213ea8(a0, a1);
                    v0_7 = v0_6;
                }
                v0_8 = v0_7;
            }
            *(u32*)(&D_01d9eaa8) = (*(u32*)(&D_01d9eaa8) + (v0_8 - *(u32*)(&D_01d9eaa4)));
            v0_9 = v0_8;
        }
        v0_10 = v0_9;
    }
    return v0_10;
}
