// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" void func_00124848(u32, u32, u32) asm("func_00124848");

// 0x00124a40 func_00124a40
void func_00124a40(u32 a0) asm("func_00124a40");
void func_00124a40(u32 a0) {
    u32 s3;
    u32 v0;
    u32 s1;
    u32 t5;
    if (((s32)(*(u8*)((a0 + 0x19))) == 0)) {
        s3 = ((u32(*)(u32))(*(u32*)((*(u32*)(*(u32*)((a0 + 0x14))) + 0x20))))(*(u32*)((a0 + 0x14)));
        v0 = ((u32(*)(u32))(*(u32*)((*(u32*)(*(u32*)((a0 + 0x14))) + 0x1c))))(*(u32*)((a0 + 0x14)));
        if (((s32)(v0) > 0)) {
            s1 = 0;
            t5 = (0 << 6);
            do {
                if (((*(u64*)(((t5 + s3) + 8)) & (u64)(1)) == 0)) {
                    func_00124848(a0, s1, *(u32*)((a0 + 4)) + t5);
                }
                s1 = (s1 + 1);
                t5 = (s1 << 6);
            } while (((s32)(((s32)(s1) < (s32)(v0))) != 0));
        }
        *(u8*)((a0 + 0x19)) = 1;
    }
    return;
}
