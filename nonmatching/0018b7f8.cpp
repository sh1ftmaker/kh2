// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 func_0016c028(u32) asm("func_0016c028");
extern "C" u32 func_0019b308(u32) asm("func_0019b308");
extern "C" u32 func_0019b3d0(u32, u32) asm("func_0019b3d0");
extern "C" void func_0018c438(u32) asm("func_0018c438");
extern "C" void func_0018c650(u32, u32, u32, u32, u32, f32, f32) asm("func_0018c650");

// 0x0018b7f8 func_0018b7f8
// minilink-rodata 0x0036cbd0   (float literals live here in the original)
void func_0018b7f8(u32 a0) asm("_ZN2YS3NPC13check_in_zoneEv");
void func_0018b7f8(u32 a0) {
    Q16 loc_0;
    u32 v0;
    u32 s3;
    u32 s0;
    u32 s1;
    loc_0 = *(Q16*)(func_0016c028(a0));
    *(f32*)(((u32)&loc_0 + 4)) = (*(f32*)(((u32)&loc_0 + 4)) - 10.0f);
    if (((s32)(*(u32*)((a0 + 0x818))) != 0)) {
        v0 = func_0019b3d0(*(u32*)((a0 + 0x818)), (u32)&loc_0);
        if ((v0 != *(u32*)((a0 + 0xa30)))) {
            s3 = (a0 + 0xa40);
            if (((s32)(*(u8*)((s3 + 0x30))) == 0)) {
                func_0018c438(s3);
                if ((v0 != 0)) {
                    s0 = *(u16*)((*(u32*)((*(u32*)((a0 + 0x818)) + 8)) + 0xa));
                    s1 = func_0016c028(a0);
                    func_0018c650(s3, s1, s0, func_0019b308(*(u32*)((a0 + 0x818))), v0, *(f32*)((a0 + 0xb28)), *(f32*)((a0 + 0xb2c)));
                }
            }
            *(u32*)((a0 + 0xa30)) = v0;
        }
    }
    return;
}
