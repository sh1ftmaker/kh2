// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 func_0015ef28() asm("func_0015ef28");
extern "C" u32 func_0016c028(u32) asm("func_0016c028");
extern "C" u32 func_00179c80(u32) asm("func_00179c80");
extern "C" u32 func_001dc5f8(u32) asm("func_001dc5f8");
extern "C" u32 func_001dc648(u32) asm("func_001dc648");
extern "C" u32 func_001de168(u32, u32, u32, u32, u32, u32) asm("func_001de168");
extern "C" u32 func_001de2e0(u32, u32) asm("func_001de2e0");
extern "C" void func_0016af58(u32, u32) asm("func_0016af58");
extern "C" void func_0017d050(u32, u32) asm("func_0017d050");
extern "C" void func_001dc818(u32) asm("func_001dc818");

// 0x00179cb8 func_00179cb8
void func_00179cb8(u32 a0) asm("_ZN2YS6PLAYER18exec_lkdash_effectEv");
void func_00179cb8(u32 a0) {
    u8 frame[32];
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    u32 s0;
    u32 v0_2;
    u32 s1;
    u32 s0_3;
    u32 v0_4;
    u32 s1_5;
    if ((func_00179c80(a0) != 0)) {
        if (((s32)(*(u32*)((a0 + 0xb60))) == 0)) {
            v0 = func_0015ef28();
            if (((s32)(*(u32*)(v0)) != 0)) {
                v0_0 = func_001de2e0(v0, (u64)(1) << 0x32);
                if (((s32)(v0_0) >= 0)) {
                    v0_1 = func_001de168(v0, v0_0, 1, 2, 0x2711, 0);
                    *(u32*)((a0 + 0xb60)) = v0_1;
                    v0_0 = v0_1;
                } else {
                    v0_0 = *(u32*)((a0 + 0xb60));
                }
                v0 = v0_0;
            } else {
                v0 = *(u32*)((a0 + 0xb60));
            }
            if (((s32)(v0) != 0)) {
                s0 = func_001dc5f8(v0);
                v0_2 = func_0016c028(a0);
                if ((s0 != v0_2)) {
                    *(Q16*)(s0) = *(Q16*)(v0_2);
                }
                s1 = func_001dc648(*(u32*)((a0 + 0xb60)));
                func_0016af58((u32)frame + 0x10, a0);
                func_0017d050((u32)frame, (u32)frame + 0x10);
                if ((s1 != (u32)frame)) {
                    *(Q16*)(s1) = *(Q16*)((u32)frame);
                }
            }
        } else {
            s0_3 = func_001dc5f8(*(u32*)((a0 + 0xb60)));
            v0_4 = func_0016c028(a0);
            if ((s0_3 != v0_4)) {
                *(Q16*)(s0_3) = *(Q16*)(v0_4);
            }
            s1_5 = func_001dc648(*(u32*)((a0 + 0xb60)));
            func_0016af58((u32)frame + 0x10, a0);
            func_0017d050((u32)frame, (u32)frame + 0x10);
            if ((s1_5 != (u32)frame)) {
                *(Q16*)(s1_5) = *(Q16*)((u32)frame);
            }
        }
    } else {
        if (((s32)(*(u32*)((a0 + 0xb60))) != 0)) {
            func_001dc818(*(u32*)((a0 + 0xb60)));
            *(u32*)((a0 + 0xb60)) = 0;
        }
    }
    return;
}
