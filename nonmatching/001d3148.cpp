// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 D_00350cc8 asm("D_00350cc8");
extern "C" u32 D_00350ccc asm("D_00350ccc");
extern "C" u32 func_0016c028(u32) asm("func_0016c028");
extern "C" u32 func_0019ba60(u32) asm("func_0019ba60");
extern "C" u32 func_001dc5f8(u32) asm("func_001dc5f8");
extern "C" u32 func_001dc9e0(u32) asm("func_001dc9e0");

// 0x001d3148 func_001d3148
void func_001d3148(u32 a0) asm("_ZN2YS12EVENT_CAMERA11make_matrixEv");
void func_001d3148(u32 a0) {
    u32 v0;
    u32 v0_0;
    switch (*(u32*)(a0)) {
    case 2:
        if (((s32)(func_0019ba60(*(u32*)((a0 + 4)))) != 0)) {
            if (((a0 + 0x10) != (*(u32*)((a0 + 4)) + 0x6b0))) {
                *(Q16*)((a0 + 0x10)) = *(Q16*)((*(u32*)((a0 + 4)) + 0x6b0));
                *(Q16*)(((a0 + 0x10) + 0x10)) = *(Q16*)(((*(u32*)((a0 + 4)) + 0x6b0) + 0x10));
                *(Q16*)(((a0 + 0x10) + 0x20)) = *(Q16*)(((*(u32*)((a0 + 4)) + 0x6b0) + 0x20));
                *(Q16*)(((a0 + 0x10) + 0x30)) = *(Q16*)(((*(u32*)((a0 + 4)) + 0x6b0) + 0x30));
            }
        }
        *(u32*)(a0) = 0;
        break;
    case 3:
        if (((s32)(func_0019ba60(*(u32*)((a0 + 4)))) != 0)) {
            if (((a0 + 0x10) != (*(u32*)((a0 + 4)) + 0x40))) {
                *(Q16*)((a0 + 0x10)) = *(Q16*)((*(u32*)((a0 + 4)) + 0x40));
                *(Q16*)(((a0 + 0x10) + 0x10)) = *(Q16*)(((*(u32*)((a0 + 4)) + 0x40) + 0x10));
                *(Q16*)(((a0 + 0x10) + 0x20)) = *(Q16*)(((*(u32*)((a0 + 4)) + 0x40) + 0x20));
                *(Q16*)(((a0 + 0x10) + 0x30)) = *(Q16*)(((*(u32*)((a0 + 4)) + 0x40) + 0x30));
            }
        }
        *(u32*)(a0) = 7;
        if ((func_0019ba60(*(u32*)((a0 + 4))) != 0)) {
            if (((a0 + 0x40) != func_0016c028(*(u32*)((a0 + 4))))) {
                *(Q16*)((a0 + 0x40)) = *(Q16*)(func_0016c028(*(u32*)((a0 + 4))));
            }
            *(f32*)(((a0 + 0x40) + 0xc)) = 1.0f;
        } else {
            *(u32*)(a0) = 0;
        }
        break;
    case 4:
        if (((s32)(func_0019ba60(*(u32*)(&D_00350cc8))) != 0)) {
            if (((a0 + 0x10) != (*(u32*)(&D_00350cc8) + 0x40))) {
                *(Q16*)((a0 + 0x10)) = *(Q16*)((*(u32*)(&D_00350cc8) + 0x40));
                *(Q16*)(((a0 + 0x10) + 0x10)) = *(Q16*)(((*(u32*)(&D_00350cc8) + 0x40) + 0x10));
                *(Q16*)(((a0 + 0x10) + 0x20)) = *(Q16*)(((*(u32*)(&D_00350cc8) + 0x40) + 0x20));
                *(Q16*)(((a0 + 0x10) + 0x30)) = *(Q16*)(((*(u32*)(&D_00350cc8) + 0x40) + 0x30));
            }
        }
        *(u32*)(a0) = 8;
        if ((*(u32*)(&D_00350ccc) != 0)) {
            if ((func_001dc9e0(*(u32*)(&D_00350ccc)) != 0)) {
                v0 = func_001dc5f8(*(u32*)(&D_00350ccc));
                if (((a0 + 0x40) != v0)) {
                    *(Q16*)((a0 + 0x40)) = *(Q16*)(v0);
                }
                *(f32*)(((a0 + 0x40) + 0xc)) = 1.0f;
            } else {
                *(u32*)(a0) = 0;
            }
        } else {
            *(u32*)(a0) = 0;
        }
        break;
    case 7:
        if ((func_0019ba60(*(u32*)((a0 + 4))) != 0)) {
            if (((a0 + 0x40) != func_0016c028(*(u32*)((a0 + 4))))) {
                *(Q16*)((a0 + 0x40)) = *(Q16*)(func_0016c028(*(u32*)((a0 + 4))));
            }
            *(f32*)(((a0 + 0x40) + 0xc)) = 1.0f;
        } else {
            *(u32*)(a0) = 0;
        }
        break;
    case 8:
        if ((*(u32*)(&D_00350ccc) != 0)) {
            if ((func_001dc9e0(*(u32*)(&D_00350ccc)) != 0)) {
                v0_0 = func_001dc5f8(*(u32*)(&D_00350ccc));
                if (((a0 + 0x40) != v0_0)) {
                    *(Q16*)((a0 + 0x40)) = *(Q16*)(v0_0);
                }
                *(f32*)(((a0 + 0x40) + 0xc)) = 1.0f;
            } else {
                *(u32*)(a0) = 0;
            }
        } else {
            *(u32*)(a0) = 0;
        }
        break;
    case 0:
    case 1:
    case 5:
    case 6:
    default:
        break;
    }
    return;
}
