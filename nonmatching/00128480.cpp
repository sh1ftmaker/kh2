// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy


// 0x00128480 func_00128480
void func_00128480(u32 a0, u32 a1) asm("_ZN2kn16MotionPrototype016setConstantValueEPNS_8ModelObjE");
void func_00128480(u32 a0, u32 a1) {
    u32 s1;
    u32 s2;
    u32 v0;
    u32 t2;
    u32 t2_0;
    u32 t3;
    s1 = *(u16*)((*(u32*)((a0 + 4)) + 0x10));
    s2 = *(u32*)((a0 + 4));
    v0 = ((u32(*)(u32, u32))(*(u32*)((*(u32*)(*(u32*)((a1 + 0x14))) + 0x20))))(*(u32*)((a1 + 0x14)), a1);
    if (((s32)(s1) != 0)) {
        t2 = 0;
        do {
            if (((*(u32*)((a1 + 0x1c)) + (t2 << 4)) != (v0 + 0x10))) {
                *(Q16*)((*(u32*)((a1 + 0x1c)) + (t2 << 4))) = *(Q16*)((v0 + 0x10));
            }
            if (((*(u32*)((a1 + 0x20)) + (t2 << 4)) != (v0 + 0x20))) {
                *(Q16*)((*(u32*)((a1 + 0x20)) + (t2 << 4))) = *(Q16*)((v0 + 0x20));
            }
            if (((*(u32*)((a1 + 0x24)) + (t2 << 4)) != (v0 + 0x30))) {
                *(Q16*)((*(u32*)((a1 + 0x24)) + (t2 << 4))) = *(Q16*)((v0 + 0x30));
            }
            t2 = (t2 + 1);
            v0 = (v0 + 0x40);
        } while (((s32)(((s32)(t2) < (s32)(s1))) != 0));
    }
    if ((*(u32*)((s2 + 0x28)) != 0)) {
        if (((s32)(*(u32*)((s2 + 0x28))) > 0)) {
            t2_0 = 0;
            t3 = (s2 + *(u32*)((s2 + 0x24)));
            do {
                switch ((*(u16*)((t3 + 2)) & 0xffff)) {
                case 0:
                case 1:
                case 2:
                    *(f32*)(((*(u32*)((a1 + 0x1c)) + (*(u16*)(t3) << 4)) + ((*(u16*)((t3 + 2)) & 0xffff) << 2))) = *(f32*)((t3 + 4));
                    break;
                case 3:
                case 4:
                case 5:
                    *(f32*)(((*(u32*)((a1 + 0x20)) + (*(u16*)(t3) << 4)) + (((*(u16*)((t3 + 2)) & 0xffff) + -3) << 2))) = *(f32*)((t3 + 4));
                    break;
                case 6:
                case 7:
                case 8:
                    *(f32*)(((*(u32*)((a1 + 0x24)) + (*(u16*)(t3) << 4)) + (((*(u16*)((t3 + 2)) & 0xffff) + -6) << 2))) = *(f32*)((t3 + 4));
                    break;
                default:
                    break;
                }
                t2_0 = (t2_0 + 1);
                t3 = (t3 + 8);
            } while (((s32)(((s32)(t2_0) < (s32)(*(u32*)((s2 + 0x28))))) != 0));
        }
    }
    return;
}
