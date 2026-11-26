// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" void func_0013b2b8(f32) asm("func_0013b2b8");
extern "C" void func_0016bda8(u32, u32) asm("func_0016bda8");
extern "C" void func_0017cf00(u32, u32) asm("func_0017cf00");

// 0x001bdd50 func_001bdd50
// minilink-rodata 0x0036dc70   (float literals live here in the original)
void func_001bdd50(u32 a0) asm("_ZN2YS14PLAYER_COMMAND11check_alphaEv");
void func_001bdd50(u32 a0) {
    u8 frame[32];
    f32 f20;
    f32 f0;
    f32 f0_0;
    if (((s32)((*(u32*)((a0 + 0x20)) & 0x40)) != 0)) {
        f20 = (*(f32*)((a0 + 0xa40)) + 0.125f);
        if (((s32)((*(u32*)((*(u32*)((*(u32*)((a0 + 0x9e0)) + 0xc)) + 8)) & 0x10000)) != 0)) {
            func_0016bda8((u32)frame + 0x10, *(u32*)((a0 + 0x9e0)));
            func_0017cf00((u32)frame, (u32)frame + 0x10);
            if ((*(f32*)((u32)frame) < 1984.0f)) {
                if ((2080.0f < *(f32*)(((u32)frame + 4)))) {
                    f20 = (*(f32*)((a0 + 0xa40)) - 0.125f);
                }
            }
        }
        if (!((f20 < 0.5f))) {
            if ((1.0f < f20)) {
                f0 = 1.0f;
            } else {
                f0 = f20;
            }
            f0_0 = f0;
        } else {
            f0_0 = 0.5f;
        }
        *(f32*)((a0 + 0xa40)) = f0_0;
        func_0013b2b8(f0);
    }
    return;
}
