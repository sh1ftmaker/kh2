// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f234 asm("D_0035f234");
extern "C" void func_00242a28(u32) asm("func_00242a28");
extern "C" void func_00242a90(u32) asm("func_00242a90");
extern "C" void func_00242b10(u32) asm("func_00242b10");
extern "C" void func_00242b88(u32) asm("func_00242b88");
extern "C" void func_00242c00(u32) asm("func_00242c00");
extern "C" void func_00242ca0(u32) asm("func_00242ca0");
extern "C" void func_00242d10(u32) asm("func_00242d10");
extern "C" void func_00242d80(u32) asm("func_00242d80");
extern "C" void func_00242df0(u32) asm("func_00242df0");

// 0x0027cb48 func_0027cb48
void func_0027cb48() asm("_ZN2Tz8CmConfig9SetConfigEv");
void func_0027cb48() {
    u32 s0;
    u32 t7;
    s0 = 0;
    t7 = ((u32)(0) < (u32)(0xa));
    do {
        t7 = ((u32)(s0) < (u32)(0xa));
        switch (s0) {
        case 0:
            t7 = 0x360000;
            func_00242b88((u32)(*(s8*)((*(u32*)((t7 + -0xdcc)) + s0))) < (u32)(1));
            s0 = (s0 + 1);
            t7 = ((s32)(s0) < (s32)(0xa));
            break;
        case 1:
            t7 = 0x360000;
            func_00242c00((u32)(*(s8*)((*(u32*)((t7 + -0xdcc)) + s0))) < (u32)(1));
            s0 = (s0 + 1);
            t7 = ((s32)(s0) < (s32)(0xa));
            break;
        case 2:
            t7 = 0x360000;
            func_00242d80((u32)((*(s8*)((*(u32*)((t7 + -0xdcc)) + s0)) ^ 1)) < (u32)(1));
            s0 = (s0 + 1);
            t7 = ((s32)(s0) < (s32)(0xa));
            break;
        case 3:
            t7 = 0x360000;
            func_00242d10((u32)((*(s8*)((*(u32*)((t7 + -0xdcc)) + s0)) ^ 1)) < (u32)(1));
            s0 = (s0 + 1);
            t7 = ((s32)(s0) < (s32)(0xa));
            break;
        case 4:
            if ((*(s8*)((*(u32*)(&D_0035f234) + s0)) != 2)) {
                t7 = 1;
            }
            s0 = (s0 + 1);
            func_00242df0(*(s8*)((*(u32*)(&D_0035f234) + s0)) ? t7 : 2);
            t7 = ((s32)(s0) < (s32)(0xa));
            break;
        case 5:
            t7 = 0x360000;
            func_00242b10((u32)(*(s8*)((*(u32*)((t7 + -0xdcc)) + s0))) < (u32)(1));
            s0 = (s0 + 1);
            t7 = ((s32)(s0) < (s32)(0xa));
            break;
        case 6:
            t7 = 0x360000;
            func_00242a28((u32)(*(s8*)((*(u32*)((t7 + -0xdcc)) + s0))) < (u32)(1));
            s0 = (s0 + 1);
            t7 = ((s32)(s0) < (s32)(0xa));
            break;
        case 7:
            if ((*(s8*)((*(u32*)(&D_0035f234) + s0)) != 2)) {
                t7 = 1;
            }
            s0 = (s0 + 1);
            func_00242a90((*(s8*)((*(u32*)(&D_0035f234) + s0)) ^ 1) ? t7 : 2);
            t7 = ((s32)(s0) < (s32)(0xa));
            break;
        case 8:
            t7 = 0x360000;
            func_00242ca0((u32)(*(s8*)((*(u32*)((t7 + -0xdcc)) + s0))) < (u32)(1));
            s0 = (s0 + 1);
            t7 = ((s32)(s0) < (s32)(0xa));
            break;
        case 9:
        default:
            s0 = (s0 + 1);
            t7 = ((s32)(s0) < (s32)(0xa));
            break;
        }
    } while ((t7 != 0));
    return;
}
