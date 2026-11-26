// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_001af638 asm("D_001af638");
extern "C" u32 D_001af6f0 asm("D_001af6f0");
extern "C" u32 D_0034e948 asm("D_0034e948");
extern "C" u32 func_0016a020(u32) asm("func_0016a020");
extern "C" u32 func_0017a538(u32) asm("func_0017a538");
extern "C" u32 func_001c10f8(u32) asm("func_001c10f8");
extern "C" u32 func_001d1438(u32) asm("func_001d1438");
extern "C" void func_001bb468(u32) asm("func_001bb468");

// 0x001af0c0 func_001af0c0
u32 func_001af0c0(u32 a0) asm("_ZN2YS8GAMEOVER5setupEv");
u32 func_001af0c0(u32 a0) {
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    u32 s0;
    u32 v0_2;
    u32 v0_3;
    u32 v0_4;
    u32 v0_5;
    if (((s32)(*(u8*)((a0 + 0xc))) == 0)) {
        func_001bb468(a0);
    } else {
        *(u32*)((a0 + 0x2c)) = (u32)&D_001af638;
    }
    if ((*(u32*)(a0) == 3)) {
        v0 = func_001c10f8(0x21);
        *(u32*)((a0 + 0x10)) = v0;
        v0_1 = v0;
    } else {
        v0_0 = func_001c10f8(1);
        *(u32*)((a0 + 0x10)) = v0_0;
        *(u32*)((a0 + 0x48)) = (u32)&D_001af6f0;
        v0_1 = v0_0;
    }
    if ((*(u32*)(&D_0034e948) != 0)) {
        s0 = *(u32*)(&D_0034e948);
        if (((s32)(func_0017a538(*(u32*)(&D_0034e948))) == 0)) {
            if (((s32)((*(u32*)((s0 + 0xb50)) ^ 0xc)) == 0)) {
                v0_2 = func_001d1438(0);
                v0_3 = v0_2;
            } else {
                v0_3 = (func_0016a020(s0) | 0x20000000);
            }
            v0_5 = v0_3;
        } else {
            v0_4 = func_001d1438(0);
            v0_5 = v0_4;
        }
        *(u32*)((a0 + 0x30)) = v0_5;
        v0_1 = v0_5;
    } else {
        *(u32*)((a0 + 0x30)) = 0;
    }
    return v0_1;
}
