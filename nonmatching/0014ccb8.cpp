// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0032b984 asm("D_0032b984");
extern "C" u32 D_0032bae0 asm("D_0032bae0");
extern "C" u32 func_001058e8() asm("func_001058e8");

// 0x0014ccb8 func_0014ccb8
u32 func_0014ccb8() asm("_ZN2dk5Clock15iupdatePlayTimeEv");
u32 func_0014ccb8() {
    u8 frame[16];
    u32 v0;
    v0 = func_001058e8();
    *(u32*)((u32)frame) = *(u32*)((v0 + 0x2444));
    *(u32*)(((u32)frame + 4)) = *(u32*)((v0 + 0x2448));
    if (((s32)(((u32)(0xcdfe5c3) < (u32)(*(u32*)((u32)frame)))) == 0)) {
        *(u32*)((u32)frame) = (*(u32*)((u32)frame) + 1);
    }
    *(u32*)((v0 + 0x2444)) = *(u32*)((u32)frame);
    *(u32*)((v0 + 0x2448)) = *(u32*)(((u32)frame + 4));
    if (((s32)(*(u32*)(&D_0032b984)) != 0)) {
        *(u32*)(((u32)frame + 8)) = *(u8*)(&D_0032bae0);
        if (((s32)(*(u32*)(((u32)frame + 8))) >= 0)) {
            if (((s32)(((s32)(*(u32*)(((u32)frame + 8))) < (s32)(0x13))) != 0)) {
                *(u32*)(((u32)frame + 0xc)) = *(u32*)((((*(u32*)(((u32)frame + 8)) << 2) + (v0 + 0x2444)) + 8));
                if (((s32)(((u32)(0xcdfe5c3) < (u32)(*(u32*)(((u32)frame + 0xc))))) == 0)) {
                    *(u32*)(((u32)frame + 0xc)) = (*(u32*)(((u32)frame + 0xc)) + 1);
                }
                *(u32*)((((*(u32*)(((u32)frame + 8)) << 2) + (v0 + 0x2444)) + 8)) = *(u32*)(((u32)frame + 0xc));
                v0 = (v0 + 0x2444);
            }
        }
    }
    return v0;
}
