// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f610 asm("D_0035f610");
extern "C" u32 func_001a80c8(u32) asm("func_001a80c8");
extern "C" u32 func_001a82b0(u32) asm("func_001a82b0");
extern "C" u32 func_002764b0(u32) asm("func_002764b0");
extern "C" u32 func_002a9d68(u32) asm("func_002a9d68");

// 0x002abac8 func_002abac8
u32 func_002abac8(u32 a0) asm("func_002abac8");
u32 func_002abac8(u32 a0) {
    u32 s0;
    u32 s2;
    u32 s4;
    u32 v0_0;
    s0 = 0;
    s2 = 0;
    for (;;) {
        s4 = (func_002a9d68(a0) + 0x12c);
        v0_0 = func_001a82b0(s0);
        s0 = v0_0;
        if (((s32)(v0_0) == 0)) break;
        if ((*(u8*)((func_001a80c8(*(u16*)((v0_0 + 2))) + 2)) != 0x16)) {
            continue;
        }
        if ((func_002764b0(*(u8*)((s0 + 5))) == a0)) {
            if (((s32)((*(u32*)(((*(u32*)(&D_0035f610) + ((s2 >> 5) << 2)) + 0x12c)) & (1 << (s2 & 0x1f)))) != 0)) {
                if (((*(u32*)((((s2 >> 5) << 2) + s4)) & (1 << (s2 & 0x1f))) == 0)) {
                    *(u32*)((((s2 >> 5) << 2) + s4)) = (*(u32*)((((s2 >> 5) << 2) + s4)) | (1 << (s2 & 0x1f)));
                }
            }
        }
        s2 = (s2 + 1);
    }
    return v0_0;
}
