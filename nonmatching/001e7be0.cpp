// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01d9e6e4 asm("D_01d9e6e4");
extern "C" u32 func_001e7798(u32, u32) asm("func_001e7798");

// 0x001e7be0 func_001e7be0
void func_001e7be0(u32 a0) asm("_Z17pppAllFreePObjectP9_pppMngSt");
void func_001e7be0(u32 a0) {
    u32 s3;
    u32 s2;
    u32 t6;
    u32 s1;
    u32 t7;
    u32 t7_0;
    u32 t7_1;
    u32 t6_2;
    u32 t7_3;
    u32 t7_4;
    s3 = *(u32*)((a0 + 8));
    s2 = *(u32*)(s3);
    t6 = *(u16*)((s2 + 0x26));
    if (((s32)(((s32)((t6 << 0x10)) >> 0x10)) > 0)) {
        s1 = 0;
        t7 = *(u32*)((s2 + 0x28));
        do {
            t7_0 = *(u32*)(((s2 + (s1 * 0x10)) + 0x28));
            if (((s32)(t7_0) != 0)) {
                t7_1 = *(u32*)((t7_0 + 0x24));
                if ((t7_1 != 0)) {
                    t6_2 = *(u16*)((s2 + 0x26));
                    ((void(*)(u32, u32))(t7_1))(a0, (s2 + (s1 * 0x10)) + 0x28);
                    t6 = t6_2;
                    t7_1 = (t6_2 << 0x10);
                } else {
                    t7_1 = (t6 << 0x10);
                }
                t7_0 = t7_1;
            } else {
                t7_0 = (t6 << 0x10);
            }
            s1 = (s1 + 1);
            t7 = ((s32)(s1) < (s32)(((s32)(t7_0) >> 0x10)));
        } while ((t7 != 0));
    }
    t7_3 = *(u16*)((s3 + 0xc));
    *(u16*)((s3 + 0xc)) = (t7_3 + -1);
    if ((((t7_3 + -1) & 0xffff) == 0)) {
        *(u32*)((s3 + 4)) = 0;
    } else {
        t7_4 = *(u32*)((s3 + 4));
        if ((t7_4 == a0)) {
            *(u32*)((s3 + 4)) = *(u32*)(a0);
        }
    }
    func_001e7798(*(u32*)(&D_01d9e6e4), a0);
    return;
}
