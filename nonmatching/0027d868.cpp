// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f01c asm("D_0035f01c");
extern "C" u32 D_0035f234 asm("D_0035f234");
extern "C" u32 D_00373f10 asm("D_00373f10");
extern "C" u32 func_0028b040(u32) asm("func_0028b040");
extern "C" void func_0023d1d0(u32) asm("func_0023d1d0");
extern "C" void func_0023d1e0(u32) asm("func_0023d1e0");
extern "C" void func_002b6bc4(u32) asm("func_002b6bc4");

// 0x0027d868 func_0027d868
void func_0027d868(u8 a0) asm("_ZN2Tz8CmConfig9ChgConfigEb");
void func_0027d868(u8 a0) {
    u32 v0;
    u32 a0_0;
    u32 t6;
    u32 t5;
    u32 a0_1;
    u32 a0_2;
    v0 = func_0028b040(*(u32*)(&D_0035f01c));
    if (((s32)(a0) != 0)) {
        a0_0 = (*(s8*)((*(u32*)(&D_0035f234) + v0)) + -1);
        if (((s32)(a0_0) < 0)) {
            t6 = (v0 * 0x14);
            a0_0 = (*(s16*)((t6 + (u32)&D_00373f10)) + -1);
        }
        a0_2 = a0_0;
    } else {
        t5 = (v0 * 0x14);
        a0_1 = (*(s8*)((*(u32*)(&D_0035f234) + v0)) + 1);
        a0_2 = (((s32)((*(s8*)((*(u32*)(&D_0035f234) + v0)) + 1)) < (s32)(*(s16*)((t5 + (u32)&D_00373f10)))) ? a0_1 : 0);
    }
    *(u8*)((*(u32*)(&D_0035f234) + v0)) = a0_2;
    if ((v0 == 6)) {
        if (((s32)(*(s8*)((*(u32*)(&D_0035f234) + 6))) == 0)) {
            func_0023d1d0(a0_2);
        } else {
            func_0023d1e0(a0_2);
        }
    } else {
        if ((v0 == 7)) {
            func_002b6bc4((*(s8*)((*(u32*)(&D_0035f234) + 7)) ^ 1) ? 1 : 2);
        }
    }
    if (((s32)(v0) == 0)) {
        if ((*(s8*)(*(u32*)(&D_0035f234)) == 1)) {
            if ((*(s8*)((*(u32*)(&D_0035f234) + 1)) == *(s8*)(*(u32*)(&D_0035f234)))) {
                *(u8*)((*(u32*)(&D_0035f234) + 1)) = 0;
            }
        }
    } else {
        if ((v0 == 1)) {
            if ((*(s8*)(*(u32*)(&D_0035f234)) == v0)) {
                if ((*(s8*)((*(u32*)(&D_0035f234) + 1)) == *(s8*)(*(u32*)(&D_0035f234)))) {
                    *(u8*)(*(u32*)(&D_0035f234)) = 0;
                }
            }
        }
    }
    return;
}
