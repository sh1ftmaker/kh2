// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f234 asm("D_0035f234");
extern "C" u32 func_00105868(u32) asm("func_00105868");
extern "C" u32 func_001058e8() asm("func_001058e8");
extern "C" u32 func_00242a00() asm("func_00242a00");
extern "C" u32 func_00242a68() asm("func_00242a68");
extern "C" u32 func_00242ae8() asm("func_00242ae8");
extern "C" u32 func_00242b58() asm("func_00242b58");
extern "C" u32 func_00242bd0() asm("func_00242bd0");
extern "C" u32 func_00242c70() asm("func_00242c70");
extern "C" u32 func_00242ce8() asm("func_00242ce8");
extern "C" u32 func_00242d58() asm("func_00242d58");
extern "C" u32 func_00242dc8() asm("func_00242dc8");

// 0x0027c9a8 func_0027c9a8
void func_0027c9a8() asm("_ZN2Tz8CmConfig9GetConfigEv");
void func_0027c9a8() {
    u32 s1;
    u32 t7;
    u32 s0;
    u32 s0_0;
    u32 s0_1;
    u32 s0_2;
    u32 v0;
    u32 s0_3;
    u32 s0_4;
    u32 v0_5;
    u32 s0_6;
    u32 s0_7;
    s1 = 0;
    t7 = ((u32)(0) < (u32)(0xa));
    do {
        switch (s1) {
        case 0:
            s0 = (*(u32*)(&D_0035f234) + s1);
            *(u8*)(s0) = ((u32)(func_00242b58()) < (u32)(1));
            break;
        case 1:
            s0_0 = (*(u32*)(&D_0035f234) + s1);
            *(u8*)(s0_0) = ((u32)(func_00242bd0()) < (u32)(1));
            break;
        case 2:
            s0_1 = (*(u32*)(&D_0035f234) + s1);
            *(u8*)(s0_1) = ((u32)(0) < (u32)(func_00242d58()));
            break;
        case 3:
            s0_2 = (*(u32*)(&D_0035f234) + s1);
            *(u8*)(s0_2) = ((u32)(0) < (u32)(func_00242ce8()));
            break;
        case 4:
            v0 = func_00242dc8();
            if (((s32)(v0) != 0)) {
                if ((v0 != 2)) {
                    *(u8*)((*(u32*)(&D_0035f234) + s1)) = 1;
                } else {
                    *(u8*)((*(u32*)(&D_0035f234) + s1)) = 0;
                }
            } else {
                *(u8*)((*(u32*)(&D_0035f234) + s1)) = 2;
            }
            break;
        case 5:
            s0_3 = (*(u32*)(&D_0035f234) + s1);
            *(u8*)(s0_3) = ((u32)(func_00242ae8()) < (u32)(1));
            break;
        case 6:
            s0_4 = (*(u32*)(&D_0035f234) + s1);
            *(u8*)(s0_4) = ((u32)(func_00242a00()) < (u32)(1));
            break;
        case 7:
            v0_5 = func_00242a68();
            if (((s32)(v0_5) != 0)) {
                if ((v0_5 == 2)) {
                    *(u8*)((*(u32*)(&D_0035f234) + s1)) = 1;
                } else {
                    *(u8*)((*(u32*)(&D_0035f234) + s1)) = 0;
                }
            } else {
                *(u8*)((*(u32*)(&D_0035f234) + s1)) = 2;
            }
            break;
        case 8:
            s0_6 = (*(u32*)(&D_0035f234) + s1);
            *(u8*)(s0_6) = ((u32)(func_00242c70()) < (u32)(1));
            break;
        case 9:
            s0_7 = *(u32*)(&D_0035f234);
            *(u8*)((s0_7 + s1)) = func_00105868(func_001058e8());
            break;
        default:
            break;
        }
        s1 = (s1 + 1);
        t7 = ((s32)(s1) < (s32)(0xa));
    } while ((t7 != 0));
    return;
}
