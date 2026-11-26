// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00139538(u32) asm("func_00139538");
extern "C" void func_00138c40(u32, u32, u32) asm("func_00138c40");
extern "C" void func_0014fcd8(u32) asm("func_0014fcd8");
extern "C" void func_0023acd8(u32) asm("func_0023acd8");

// 0x00151f40 func_00151f40
void func_00151f40(u32 a0) asm("_ZN2dk9GET_MUNNY6updateEv");
void func_00151f40(u32 a0) {
    u8 frame[16];
    u32 s1;
    u32 sp;
    u32 sp_0;
    func_0014fcd8(a0);
    if ((func_00139538(a0 + 0x30) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(a0) + 0x14))))(a0);
        sp_0 = (u32)frame;
    } else {
        func_00138c40(a0 + 0x30, 0, *(u32*)((a0 + 0x24)));
        if (((s32)(*(u32*)((a0 + 0xb50))) > 0)) {
            s1 = 0;
            do {
                func_0023acd8((a0 + (s1 * 0x158)) + 0x1c8);
                s1 = (s1 + 1);
            } while (((s32)(((s32)(s1) < (s32)(*(u32*)((a0 + 0xb50))))) != 0));
        } else {
            sp = (u32)frame;
        }
        sp_0 = sp;
    }
    return;
}
