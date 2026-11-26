// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035eec0 asm("D_0035eec0");
extern "C" u32 D_0035eee0 asm("D_0035eee0");
extern "C" u32 D_0035ef50 asm("D_0035ef50");
extern "C" u32 D_0035ef54 asm("D_0035ef54");
extern "C" u32 D_0035ef58 asm("D_0035ef58");
extern "C" u32 D_01dae6c0 asm("D_01dae6c0");
extern "C" u32 func_00168328(u32, u32) asm("func_00168328");
extern "C" u32 func_001688b8() asm("func_001688b8");
extern "C" u32 func_00253948(u32) asm("func_00253948");
extern "C" u32 func_00253b30(u32, u32) asm("func_00253b30");
extern "C" u32 func_002ff3fc(u32) asm("func_002ff3fc");
extern "C" void func_002fde18(u32, u32, u32) asm("func_002fde18");

// 0x00253638 func_00253638
void func_00253638() asm("_ZN2Tz6CMData4InitEv");
void func_00253638() {
    u8 frame[128];
    u32 s5;
    u32 s4;
    u32 s1;
    u32 s2;
    u32 s3;
    u32 s0;
    u32 v0;
    u32 v0_0;
    func_002fde18((u32)&D_0035eee0, 0, 0x70);
    *(u32*)(&D_0035ef50) = 0;
    *(u32*)(&D_0035ef54) = 0;
    s5 = 0;
    s4 = (u32)&D_01dae6c0;
    s1 = 0;
    s2 = (u32)&D_0035eec0;
    s3 = (u32)&D_0035eee0;
    do {
        if (((s32)(*(u32*)((s2 + (s1 * 4)))) != 0)) {
            s0 = *(u32*)((s2 + (s1 * 4)));
            if (((s32)(func_002ff3fc(*(u32*)((s2 + (s1 * 4))))) != 0)) {
                v0 = func_00168328(func_00253b30((u32)frame, s0), s4);
                *(u32*)((s3 + (s1 * 0x10))) = s1;
                *(u32*)(((s3 + (s1 * 0x10)) + 4)) = 1;
                *(u32*)(((s3 + (s1 * 0x10)) + 8)) = v0;
                *(u32*)(((s3 + (s1 * 0x10)) + 0xc)) = s4;
                v0_0 = func_00253948(v0);
                s4 = (s4 + v0_0);
                s5 = (s5 + v0_0);
            }
        }
        s1 = (s1 + 1);
    } while (((s32)(((s32)(s1) < (s32)(2))) != 0));
    *(u32*)(&D_0035ef50) = s5;
    *(u32*)(&D_0035ef54) = 2;
    if (((s32)(*(u8*)(&D_0035ef58)) != 0)) {
        if ((func_001688b8() == 0)) {
            *(u8*)(&D_0035ef58) = 0;
        }
    }
    return;
}
