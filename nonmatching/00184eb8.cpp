// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0016c028(u32) asm("func_0016c028");
extern "C" u32 func_00182e08(u32) asm("func_00182e08");
extern "C" u32 func_0019b328(u32, u32) asm("func_0019b328");
extern "C" u32 func_002cd018(u32, u32, u32, f32) asm("func_002cd018");
extern "C" void func_00105110(u32) asm("func_00105110");
extern "C" void func_002cb708(u32, u32, u32) asm("func_002cb708");

// 0x00184eb8 func_00184eb8
// minilink-rodata 0x0036c8c0   (float literals live here in the original)
u32 func_00184eb8(u32 a0, u32 a1, u32 a2) asm("_ZN2YS3OBJ8set_pathEiPNS_10UNIT_GROUPE");
u32 func_00184eb8(u32 a0, u32 a1, u32 a2) {
    u32 s0;
    u32 s0_0;
    u32 v0;
    u32 v0_1;
    if (((s32)(a2) == 0)) {
        a2 = *(u32*)((a0 + 0x818));
    }
    if (((s32)(*(u32*)((a0 + 0x508))) != 0)) {
        s0 = *(u32*)((a0 + 0x508));
        func_002cb708(*(u32*)((a0 + 0x508)), a1, a2);
        func_00105110(s0);
        *(u32*)((a0 + 0x508)) = 0;
    }
    if (((s32)(a2) != 0)) {
        s0_0 = func_0019b328(a2, a1);
    } else {
        s0_0 = 0;
    }
    if (((s32)(s0_0) == 0)) {
        if (((s32)((*(u32*)((a0 + 0x588)) & 0x80)) != 0)) {
            s0_0 = func_00182e08(a1);
        }
        if (((s32)(s0_0) != 0)) {
            *(u32*)((a0 + 0x508)) = func_002cd018(a0, s0_0, func_0016c028(a0), 8.0f);
            v0 = 1;
        } else {
            v0 = 0;
        }
        v0_1 = v0;
    } else {
        *(u32*)((a0 + 0x508)) = func_002cd018(a0, s0_0, func_0016c028(a0), 8.0f);
        v0_1 = 1;
    }
    return v0_1;
}
