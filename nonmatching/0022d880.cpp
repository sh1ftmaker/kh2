// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01dad9c0 asm("D_01dad9c0");
extern "C" u32 func_001050d8(u32) asm("func_001050d8");
extern "C" u32 func_001ac7c8(u32, u32) asm("func_001ac7c8");
extern "C" u32 func_00225b00(u32) asm("func_00225b00");
extern "C" u32 func_002282f0(u32) asm("func_002282f0");
extern "C" void func_001ac8b0(u32, u32) asm("func_001ac8b0");

// 0x0022d880 func_0022d880
u32 func_0022d880(u32 a0) asm("_ZN2sa5EVENT15set_bin_seq_mesERNS_11BIN_SEQ_MESEP4TASK");
u32 func_0022d880(u32 a0) {
    u32 v0;
    u32 v0_0;
    u32 t5;
    u32 s3;
    u32 s1;
    u32 v0_1;
    u32 v0_2;
    u32 t5_3;
    u32 s0;
    u32 v0_4;
    v0 = func_002282f0(*(s16*)((a0 + 4)));
    if ((v0 == 0)) {
        v0_0 = func_00225b00(*(s16*)((a0 + 4)));
        if ((v0_0 == 0)) {
            if (((s32)(*(s16*)((a0 + 0xa))) == 0)) {
                t5 = 0;
                s3 = (u32)&D_01dad9c0;
                do {
                    if (((s32)(*(u32*)((s3 + (t5 * 8)))) == 0)) {
                        s1 = *(s16*)((a0 + 8));
                        v0_1 = func_001050d8(0x84);
                        func_001ac8b0(v0_1, s1);
                        v0_2 = func_001ac7c8(func_001050d8(0x1c), v0_1);
                        *(u32*)((s3 + (t5 * 8))) = v0_1;
                        *(u16*)(((s3 + (t5 * 8)) + 6)) = *(u16*)((a0 + 6));
                        *(u16*)(((s3 + (t5 * 8)) + 4)) = *(u16*)((a0 + 8));
                        return v0_2;
                    }
                    t5 = (t5 + 1);
                } while (((s32)(((s32)(t5) < (s32)(0x20))) != 0));
            } else {
                t5_3 = 0;
                s0 = (u32)&D_01dad9c0;
                do {
                    if (((s32)(*(u32*)((s0 + (t5_3 * 8)))) != 0)) {
                        if ((*(s16*)(((s0 + (t5_3 * 8)) + 6)) == *(s16*)((a0 + 6)))) {
                            if ((*(s16*)(((s0 + (t5_3 * 8)) + 4)) == *(s16*)((a0 + 8)))) {
                                v0_4 = ((u32(*)(u32))(*(u32*)((*(u32*)(*(u32*)((s0 + (t5_3 * 8)))) + 0x20))))(*(u32*)((s0 + (t5_3 * 8))));
                                *(u32*)((s0 + (t5_3 * 8))) = 0;
                                return v0_4;
                            }
                        }
                    }
                    t5_3 = (t5_3 + 1);
                } while (((s32)(((s32)(t5_3) < (s32)(0x20))) != 0));
            }
        }
        v0 = v0_0;
    }
    return v0;
}
