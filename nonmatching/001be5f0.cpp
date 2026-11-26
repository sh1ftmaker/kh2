// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0017a538(u32) asm("func_0017a538");
extern "C" u32 func_001917c0() asm("func_001917c0");
extern "C" u32 func_001bc780(u32, u32, u32, u32) asm("func_001bc780");
extern "C" u32 func_001bd590(u32) asm("func_001bd590");
extern "C" u32 func_001bdd20(u32) asm("func_001bdd20");
extern "C" u32 func_001bdfe0(u32) asm("func_001bdfe0");
extern "C" u32 func_001be890(u32, u32) asm("func_001be890");
extern "C" void func_001bc778(u32) asm("func_001bc778");
extern "C" void func_001be540(u32, u32) asm("func_001be540");
extern "C" void func_001bf0c8(u32) asm("func_001bf0c8");

// 0x001be5f0 func_001be5f0
u32 func_001be5f0(u32 a0) asm("_ZN2YS13FIELD_COMMAND10make_top_aEv");
u32 func_001be5f0(u32 a0) {
    u32 t5;
    u32 t7;
    u32 v0;
    u32 t7_0;
    u32 v0_1;
    u32 t6;
    u32 v0_2;
    u32 v0_3;
    if (((s32)(func_001bd590(a0)) != 0)) {
        return func_001be890(a0, a0 + 0x24);
    } else {
        func_001bc778(a0 + 0x24);
        t5 = *(u32*)((*(u32*)((a0 + 0x9e0)) + 0xb50));
        func_001be540(a0, a0 + 0x24);
        if ((t5 == 3)) {
            func_001bf0c8(a0);
        }
        func_001bc780(a0 + 0x24, 0x2c3, 0, 1);
        t7 = *(u32*)((a0 + 0x20));
        func_001bc780(a0 + 0x24, 0x68, 0, 1);
        if (((s32)((t7 & 0x20)) != 0)) {
            return func_001bc780(a0 + 0x24, 0x68, 0, 1);
        } else {
            if (((s32)(func_0017a538(*(u32*)((a0 + 0x9e0)))) != 0)) {
                v0 = func_001bc780(a0 + 0x24, 5, 0, 1);
                t7_0 = *(u32*)((*(u32*)((a0 + 0x9e0)) + 0xb50));
                if (((s32)((t7_0 ^ 6)) == 0)) {
                    v0_1 = func_001917c0();
                    if ((v0_1 != 0)) {
                        *(u8*)((v0 + 5)) = 5;
                    }
                    v0 = v0_1;
                }
                v0_3 = v0;
            } else {
                t6 = *(u32*)((*(u32*)((a0 + 0x9e0)) + 0xb50));
                v0_2 = func_001bc780(a0 + 0x24, 4, 0, 1);
                if ((t6 != 0)) {
                    *(u8*)((v0_2 + 5)) = 5;
                }
                v0_3 = v0_2;
            }
            return v0_3;
        }
    }
}
