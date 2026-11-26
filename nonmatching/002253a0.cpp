// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00370d78 asm("D_00370d78");
extern "C" u32 D_00370d88 asm("D_00370d88");
extern "C" u32 func_00136b78(u32, u32) asm("func_00136b78");
extern "C" u32 func_002282f0(u32, u32) asm("func_002282f0");
extern "C" u32 func_002b7148(u32) asm("func_002b7148");
extern "C" u32 func_002ba200() asm("func_002ba200");
extern "C" void func_00102448(u32, u32) asm("func_00102448");
extern "C" void func_00225530() asm("func_00225530");
extern "C" void func_002259f0() asm("func_002259f0");
extern "C" void func_00225a00() asm("func_00225a00");
extern "C" void func_002ba220(u32, u32, u32, u32, u32, u32) asm("func_002ba220");
extern "C" void func_002ba830(u32, u32, u32) asm("func_002ba830");

// 0x002253a0 func_002253a0
void func_002253a0(u32 a0, u32 a1) asm("_ZN2sa5EVENT11set_bgm_seqERNS_11BIN_SEQ_BGMEP4TASK");
void func_002253a0(u32 a0, u32 a1) {
    u32 v0;
    u32 v0_0;
    u32 s0;
    if ((func_002282f0(*(u16*)((a0 + 4)), a1) == 0)) {
        if ((*(u16*)((a0 + 6)) != 0)) {
            func_00225530();
        }
        if (((s32)(*(u16*)((a0 + 8))) == 0)) {
            while ((v0 = func_002ba200()), ((s32)(v0) != 0)) {
                func_002259f0();
                func_00102448(a1, 0);
            }
            func_00225a00();
            func_002ba220(*(u8*)((a0 + 0xb)), 0x3000, 0x3000, 0, 0, 0);
        } else {
            if ((*(u16*)((a0 + 8)) == 0x101)) {
                while ((v0_0 = func_002ba200()), ((s32)(v0_0) != 0)) {
                    func_002259f0();
                    func_00102448(a1, 0);
                }
                func_00225a00();
                if (((s32)(func_002b7148(0)) != 0)) {
                    func_002ba830(*(u8*)((a0 + 0xb)), 0x1800, 0x1800);
                } else {
                    func_002ba220(*(u8*)((a0 + 0xb)), 0x1800, 0x1800, 0, 0, 0);
                }
            } else {
                s0 = *(u32*)(((*(u8*)((a0 + 9)) << 2) + (u32)&D_00370d88));
                func_002ba830(*(u8*)((a0 + 0xb)), *(u32*)(((*(u8*)((a0 + 9)) << 2) + (u32)&D_00370d88)), *(u32*)(((*(u8*)((a0 + 0xa)) << 2) + (u32)&D_00370d78)));
            }
        }
        func_00136b78(*(u8*)((a0 + 0xb)), 0x3000);
        return;
    } else {
        return;
    }
}
