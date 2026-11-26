// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" void func_00306968(u32, u32) asm("func_00306968");

// 0x00306cb8 func_00306cb8
u32 func_00306cb8(u32 a0, u32 a1) asm("func_00306cb8");
u32 func_00306cb8(u32 a0, u32 a1) {
    u8 frame[16];
    u32 v1;
    u32 v0;
    u32 s3;
    u32 s1;
    u32 s0;
    u32 a0_0;
    u32 a1_1;
    u32 sp;
    u32 v0_2;
    if (((s32)(a1) > 0)) {
        v1 = 0;
        v0 = 0x1e30000;
        do {
            s3 = 0x1e30000;
            s1 = (v1 + 1);
            s0 = (a0 + v1);
            a0_0 = *(u32*)((v0 + 0x53e8));
            do {
            } while (((s32)(*(u32*)((a0_0 + 4))) == 0));
            a1_1 = (s3 + 0x53d0);
            *(u8*)(s0) = *(u8*)(*(u32*)((*(u32*)((a1_1 + 0x18)) + 8)));
            func_00306968(*(u32*)((a1_1 + 0x18)), a1_1);
            if ((*(s8*)(s0) == 0xa)) {
                return s1;
            }
            if ((*(s8*)(s0) == 0xd)) {
                return s1;
            }
            v0 = 0x1e30000;
            v1 = s1;
        } while (((s32)(v0) != 0));
        v0_2 = v1;
    } else {
        sp = (u32)frame;
        v0_2 = 0;
    }
    return v0_2;
}
