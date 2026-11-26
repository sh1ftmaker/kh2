// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00227950 asm("D_00227950");
extern "C" u32 func_00102c18(u32, u32, u32) asm("func_00102c18");
extern "C" u32 func_001c0cd8(u32) asm("func_001c0cd8");
extern "C" u32 func_00227d10(u32) asm("func_00227d10");
extern "C" u32 func_002282f0(u32) asm("func_002282f0");
extern "C" void func_001ba028(u32) asm("func_001ba028");
extern "C" void func_001c0e60(u32) asm("func_001c0e60");
extern "C" void func_00232db0(u32) asm("func_00232db0");

// 0x0022f308 func_0022f308
void func_0022f308(u32 a0) asm("_ZN2sa5EVENT15set_bin_seq_memERNS_11BIN_SEQ_MEMEP4TASK");
void func_0022f308(u32 a0) {
    u32 v0;
    if (((s32)(func_002282f0(*(s16*)((a0 + 4)))) == 0)) {
        v0 = func_00227d10(*(s16*)((a0 + 6)));
        func_001ba028(*(u32*)((v0 + 8)));
        if ((func_001c0cd8(*(u32*)((v0 + 8))) != 0)) {
            func_001c0e60(*(u32*)((v0 + 8)));
        }
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)((v0 + 8))) + 0x28))))(*(u32*)((v0 + 8)));
        *(u32*)((v0 + 8)) = 0;
        func_00232db0(*(s16*)((a0 + 6)));
        *(u32*)((func_00102c18(1, 0xa7ee, (u32)&D_00227950) + 4)) = *(s16*)((a0 + 6));
    }
    return;
}
