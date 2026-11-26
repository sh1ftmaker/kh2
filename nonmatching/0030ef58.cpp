// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0030ee98 asm("D_0030ee98");
extern "C" u32 D_0030eed0 asm("D_0030eed0");
extern "C" u32 D_00366188 asm("D_00366188");
extern "C" u32 D_00366190 asm("D_00366190");
extern "C" u32 func_0030ef10(u32, u32, u32) asm("func_0030ef10");
extern "C" void func_0030f058(u32, u32) asm("func_0030f058");

// 0x0030ef58 func_0030ef58
u32 func_0030ef58() asm("func_0030ef58");
u32 func_0030ef58() {
    u32 s3;
    u32 v0;
    u32 s1;
    u32 s0;
    u32 v0_0;
    func_0030f058(*(u32*)(&D_00366190), *(u32*)(((u32)&D_00366190 + 4)));
    func_0030f058(*(u32*)(((u32)&D_00366190 + 8)), *(u32*)(((u32)&D_00366190 + 0xc)));
    s3 = func_0030ef10(0x80000000, 0x80080000, (u32)&D_0030eed0);
    v0 = func_0030ef10(0x80000000, 0x80080000, (u32)&D_0030ee98);
    s1 = (s3 + -0x20c);
    s0 = (v0 + -0x168);
    if ((s1 != s0)) {
        v0_0 = ((u32)(s1) < (u32)(s0));
        do {
            if (((s32)(v0_0) != 0)) {
                s1 = (func_0030ef10(s3 + 4, 0x80080000, (u32)&D_0030eed0) + -0x20c);
                s3 = func_0030ef10(s3 + 4, 0x80080000, (u32)&D_0030eed0);
            } else {
                s0 = (func_0030ef10(v0 + 4, 0x80080000, (u32)&D_0030ee98) + -0x168);
                v0 = func_0030ef10(v0 + 4, 0x80080000, (u32)&D_0030ee98);
            }
            v0_0 = ((u32)(s1) < (u32)(s0));
        } while ((s1 != s0));
        *(u32*)(&D_00366188) = s1;
        v0 = v0_0;
    } else {
        *(u32*)(&D_00366188) = s1;
    }
    return v0;
}
