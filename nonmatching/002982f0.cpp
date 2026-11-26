// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f598 asm("D_0035f598");
extern "C" u32 func_00276568() asm("func_00276568");
extern "C" u32 func_00276c18() asm("func_00276c18");
extern "C" u32 func_00294000(u32) asm("func_00294000");
extern "C" u32 func_00294348(u32) asm("func_00294348");
extern "C" void func_002fde18(u32, u32, u32) asm("func_002fde18");

// 0x002982f0 func_002982f0
u32 func_002982f0() asm("func_002982f0");
u32 func_002982f0() {
    u32 s3;
    u32 v0;
    u32 t6;
    u32 s4;
    u32 s1;
    u32 s0;
    u32 s2;
    u32 t7;
    u32 v0_0;
    u32 v0_1;
    func_002fde18(*(u32*)(&D_0035f598), 0, 0x14);
    s3 = func_00294000(2);
    v0 = func_00276568();
    t6 = *(u32*)((s3 + 8));
    s4 = 0;
    if (((s32)(t6) > 0)) {
        s1 = 0;
        s0 = (s3 + 0x10);
        do {
            s2 = *(s8*)(v0);
            t7 = *(s8*)(s0);
            if ((s2 == t7)) {
                v0_0 = func_00294348(s0);
                if (((s32)(v0_0) == 0)) {
                    v0_1 = func_00276c18();
                    if (((s32)(v0_1) != 0)) {
                        s4 = (s4 + 1);
                        *(u16*)((((s4 << 1) + *(u32*)(&D_0035f598)) + 4)) = s1;
                    }
                    v0_0 = v0_1;
                } else {
                    s4 = (s4 + 1);
                    *(u16*)((((s4 << 1) + *(u32*)(&D_0035f598)) + 4)) = s1;
                }
                s1 = (s1 + 1);
                t6 = *(u32*)((s3 + 8));
                v0 = v0_0;
            } else {
                s1 = (s1 + 1);
            }
            s0 = (s0 + 0xc);
        } while (((s32)(((s32)(s1) < (s32)(t6))) != 0));
    }
    *(u32*)(*(u32*)(&D_0035f598)) = s4;
    return v0;
}
