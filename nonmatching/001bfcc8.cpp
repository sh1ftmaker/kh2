// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" void func_0016bda8(u32, u32) asm("func_0016bda8");
extern "C" void func_0016f000(u32, u32, f32) asm("func_0016f000");
extern "C" void func_001991a8(u32, u32) asm("func_001991a8");

// 0x001bfcc8 YS::PRIZEBOX::DropNmPresent(YS::BTLOBJ*, int)
void lift_001bfcc8(u32 a0, u32 a1) asm("_ZN2YS8PRIZEBOX13DropNmPresentEPNS_6BTLOBJEi");
void lift_001bfcc8(u32 a0, u32 a1) {
    u8 frame[16];
    u32 s1;
    u32 s0;
    u32 sp;
    u32 sp_0;
    if (((s32)(a1) != 0)) {
        func_0016bda8((u32)frame, a0);
        s1 = (((s32)(*(u32*)((a0 + 0xacc))) < (s32)(a1)) ? *(u32*)((a0 + 0xacc)) : a1);
        if (((s32)((((s32)(*(u32*)((a0 + 0xacc))) < (s32)(a1)) ? *(u32*)((a0 + 0xacc)) : a1)) > 0)) {
            s0 = (((s32)(*(u32*)((a0 + 0xacc))) < (s32)(a1)) ? *(u32*)((a0 + 0xacc)) : a1);
            do {
                func_0016f000(0x883, (u32)frame, 0.0f);
                s0 = (s0 + -1);
            } while (((s32)(s0) != 0));
        } else {
            sp = (u32)frame;
        }
        *(u32*)((a0 + 0xacc)) = (*(u32*)((a0 + 0xacc)) - s1);
        if (((s32)((*(u32*)((a0 + 0x588)) & 0x80)) != 0)) {
            func_001991a8(0x50, s1);
        }
        sp_0 = sp;
    } else {
        sp_0 = (u32)frame;
    }
    return;
}
