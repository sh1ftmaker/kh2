// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034e948 asm("D_0034e948");
extern "C" u32 func_00167f18(u32) asm("func_00167f18");
extern "C" u32 func_00186ce8(u32) asm("func_00186ce8");
extern "C" void func_001cea48(u32, u32, u32) asm("func_001cea48");
extern "C" void func_001ceb40(u32, u32) asm("func_001ceb40");

// 0x001ce930 wtarget_001ce930(unsigned int, unsigned int, unsigned int, unsigned int)
void lift_001ce930(u32 a0) asm("_Z16wtarget_001ce930jjjj");
void lift_001ce930(u32 a0) {
    u32 t5;
    u32 t6;
    u32 s1;
    u32 s3;
    u32 t7;
    u32 t7_0;
    u32 s1_1;
    u32 s3_2;
    u32 t7_3;
    u32 s1_4;
    u32 s3_5;
    u32 s1_6;
    u32 s3_7;
    t5 = *(u32*)((a0 + 8));
    if (((s32)((t5 & 2)) != 0)) {
        t6 = *(u32*)(a0);
        s1 = *(u32*)(&D_0034e948);
        s3 = func_00167f18(0);
        if (((s32)(((s32)(t6) < (s32)(2))) != 0)) {
            func_001ceb40(a0, 2);
            *(u32*)(a0) = 2;
            t6 = 2;
        }
        if ((t6 == 2)) {
            if (((s32)(func_00186ce8(s1)) != 0)) {
                t7 = *(u32*)((s1 + 0x160));
                if (((t7 & 0x10) != 0)) {
                    func_001cea48(a0, s1, s3);
                }
            } else {
                func_001cea48(a0, s1, s3);
            }
        }
    } else {
        if (((s32)((t5 & 1)) != 0)) {
            t7_0 = *(u32*)(a0);
            if (((s32)(t7_0) <= 0)) {
                s1_1 = *(u32*)(&D_0034e948);
                s3_2 = func_00167f18(0);
                func_001ceb40(a0, 0);
                *(u32*)(a0) = 1;
            }
        } else {
            t7_3 = *(u32*)(a0);
            if ((t7_3 != 1)) {
                if ((t7_3 == 2)) {
                    s1_4 = *(u32*)(&D_0034e948);
                    s3_5 = func_00167f18(0);
                    func_001ceb40(a0, 4);
                }
            } else {
                s1_6 = *(u32*)(&D_0034e948);
                s3_7 = func_00167f18(0);
                func_001ceb40(a0, 1);
            }
            *(u32*)(a0) = 0;
        }
    }
    *(u32*)((a0 + 8)) = 0;
    return;
}
