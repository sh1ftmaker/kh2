// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 D_00361f60 asm("D_00361f60");
extern "C" u32 func_0016abf8(u32, u32, u32, u32) asm("func_0016abf8");
extern "C" u32 func_001dc5f8(u32) asm("func_001dc5f8");
extern "C" void func_0016bda8(u32, u32) asm("func_0016bda8");
extern "C" void func_001991a8(u32, u32) asm("func_001991a8");
extern "C" void func_001dc920(u32) asm("func_001dc920");
extern "C" void func_002d4868(u32) asm("func_002d4868");
extern "C" void func_002d5af0(u32, u32) asm("func_002d5af0");
extern "C" void func_002d6518(u32, u32) asm("func_002d6518");

// 0x002d5748 func_002d5748
void func_002d5748(u32 a0, u32 a1) asm("_ZN2Ti15MGOarashiPlayer24_OVR_exec_command_playerEPKN2YS12COMMAND_ELEME");
void func_002d5748(u32 a0, u32 a1) {
    u8 frame[16];
    u32 s0;
    u32 a1_0;
    u32 a0_1;
    u32 v0;
    u32 s0_2;
    u32 a0_3;
    u32 v0_4;
    u32 s0_5;
    s0 = *(u32*)(&D_00361f60);
    if (((s32)(s0) != 0)) {
        a1_0 = *(u16*)(a1);
        if (((a1_0 & 0xffff) == 0x1f0)) {
            func_002d6518(*(u32*)((a0 + 0xc14)), a1_0);
            *(u8*)((s0 + 0x140)) = 0;
            a0_1 = *(u32*)((a0 + 0xc34));
            if ((a0_1 != 0)) {
                func_001dc920(a0_1);
            }
            v0 = func_0016abf8(a0, 1, 0, 0);
            *(u32*)((a0 + 0xc34)) = v0;
            if (((s32)(v0) != 0)) {
                s0_2 = func_001dc5f8(v0);
                func_0016bda8((u32)frame, *(u32*)((a0 + 0xc14)));
                if ((s0_2 != (u32)frame)) {
                    *(Q16*)(s0_2) = *(Q16*)((u32)frame);
                }
            }
            a0_3 = *(u32*)((a0 + 0xc30));
            if ((a0_3 != 0)) {
                func_001dc920(a0_3);
            }
            v0_4 = func_0016abf8(a0, 0, 0, 0);
            *(u32*)((a0 + 0xc30)) = v0_4;
            if (((s32)(v0_4) != 0)) {
                s0_5 = func_001dc5f8(v0_4);
                func_0016bda8((u32)frame, a0);
                if ((s0_5 != (u32)frame)) {
                    *(Q16*)(s0_5) = *(Q16*)((u32)frame);
                }
            }
        } else {
            if (((a1_0 & 0xffff) == 0x1f1)) {
                func_001991a8(0x15, 0);
                func_002d4868(*(u32*)((a0 + 0xc1c)));
            } else {
                if (((u32)(((a1_0 + -0x242) & 0xffff)) < (u32)(2))) {
                    func_002d5af0(a0, a1_0);
                }
            }
        }
    }
    return;
}
