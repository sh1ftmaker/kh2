// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" f32 func_002367a0() asm("func_002367a0");
extern "C" void func_00236830(u32) asm("func_00236830");
extern "C" void func_00236d60(u32) asm("func_00236d60");
extern "C" void func_0023ade0(u32) asm("func_0023ade0");

// 0x0023cc18 YI::LAYOUT::Draw()
void lift_0023cc18(u32 a0) asm("_ZN2YI6LAYOUT4DrawEv");
void lift_0023cc18(u32 a0) {
    u32 s2;
    u32 t6;
    u32 s3;
    u32 s4;
    u32 s5;
    u32 s1;
    u32 s5_0;
    if (((s32)(*(u32*)((a0 + 0x38))) >= 0)) {
        if (((s32)(*(u32*)((a0 + 0x38))) >= (s32)(2))) {
            if (((s32)(((s32)(*(u32*)((a0 + 0x38))) < (s32)(4))) != 0)) {
                s2 = (*(u32*)((a0 + 0x10)) + (*(u16*)((*(u32*)((a0 + 0x14)) + (*(u32*)((a0 + 0x4c)) * 0x14))) * 0x18));
                func_00236d60(a0);
                t6 = *(u32*)((a0 + 0x34));
                if (((s32)(t6) > 0)) {
                    s3 = 0;
                    s4 = 0;
                    s5 = 0xffffffff;
                    do {
                        s3 = (s3 + 0x158);
                        if (((f32)(*(s32*)((s2 + 0xc))) <= *(f32*)((a0 + 0x40)))) {
                            s1 = (*(u32*)((a0 + 0x30)) + s3);
                            if ((s5 != *(u32*)(s2))) {
                                s5_0 = *(u32*)(s2);
                                func_00236830(*(u32*)(((*(u32*)((a0 + 0x30)) + s3) + 0x40)));
                                s5 = s5_0;
                            }
                            *(u32*)((s1 + 0x148)) = (*(u32*)((s2 + 0x10)) + *(u32*)((a0 + 0x54)));
                            *(u32*)((s1 + 0x14c)) = (*(u32*)((s2 + 0x14)) + *(u32*)((a0 + 0x58)));
                            func_0023ade0(s1);
                            t6 = *(u32*)((a0 + 0x34));
                        }
                        s4 = (s4 + 1);
                        s2 = (s2 + 0x18);
                    } while (((s32)(((s32)(s4) < (s32)(t6))) != 0));
                }
                func_002367a0();
                return;
            } else {
                return;
            }
        } else {
            return;
        }
    } else {
        return;
    }
}
