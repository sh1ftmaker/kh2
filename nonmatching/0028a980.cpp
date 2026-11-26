// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0028ac98(u32, u32) asm("func_0028ac98");
extern "C" void func_00138c10(u32, u32) asm("func_00138c10");

// 0x0028a980 func_0028a980
void func_0028a980(u32 a0) asm("func_0028a980");
void func_0028a980(u32 a0) {
    u32 s3;
    u32 t5;
    u32 t7;
    u32 v0;
    if (((s32)(((s32)((*(u16*)((a0 + 4)) << 0x10)) >> 0x10)) > 0)) {
        s3 = 0;
        t5 = *(u16*)((a0 + 4));
        t7 = *(u32*)((a0 + 0x28));
        do {
            if (((s32)(*(u32*)(((s3 << 2) + *(u32*)((a0 + 0x28))))) != 0)) {
                v0 = func_0028ac98(a0, s3);
                if (((s32)(v0) != 0)) {
                    func_00138c10(*(u32*)(((s3 << 2) + *(u32*)((a0 + 0x28)))), *(s16*)(v0));
                    *(u32*)((*(u32*)(((s3 << 2) + *(u32*)((a0 + 0x28)))) + 0x188)) = *(s16*)((v0 + 4));
                }
                t5 = *(u16*)((a0 + 4));
            }
            s3 = (s3 + 1);
            t7 = ((s32)(s3) < (s32)(((s32)((t5 << 0x10)) >> 0x10)));
        } while ((t7 != 0));
    }
    *(u16*)((a0 + 0xe)) = 0;
    return;
}
