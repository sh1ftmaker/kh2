// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0016c028(u32) asm("func_0016c028");
extern "C" u32 func_0019ba60(u32) asm("func_0019ba60");
extern "C" u32 func_001b0320(u32) asm("func_001b0320");
extern "C" u32 func_002bc398(u32, u32) asm("func_002bc398");
extern "C" u32 func_002bc420(u32) asm("func_002bc420");
extern "C" void func_001b0330(u32) asm("func_001b0330");

// 0x001b0250 YS::VOICE::exec()
void lift_001b0250(u32 a0) asm("_ZN2YS5VOICE4execEv");
void lift_001b0250(u32 a0) {
    u32 s1;
    u32 s1_0;
    if (((s32)(*(u32*)((a0 + 8))) >= 0)) {
        s1 = *(u32*)((a0 + 8));
        func_001b0330(a0);
        *(u32*)((a0 + 0x10)) = ((u32(*)(u32, u32, u32))(*(u32*)((*(u32*)(a0) + 8))))(a0, s1, func_0016c028(*(u32*)((a0 + 0x18))));
        return;
    } else {
        s1_0 = *(u32*)((a0 + 8));
        if ((func_001b0320(a0) != 0)) {
            if ((func_002bc420(*(u32*)((a0 + 0x10))) != 0)) {
                if (((s32)(*(u32*)((a0 + 0x18))) != 0)) {
                    if ((func_0019ba60(*(u32*)((a0 + 0x18))) != 0)) {
                        func_002bc398(*(u32*)((a0 + 0x10)), func_0016c028(*(u32*)((a0 + 0x18))));
                        return;
                    } else {
                        *(u32*)((a0 + 0x18)) = 0;
                        return;
                    }
                } else {
                    *(u32*)((a0 + 0x18)) = 0;
                    return;
                }
            } else {
                *(u32*)((a0 + 0x18)) = 0;
                *(u32*)((a0 + 0x10)) = 0;
                return;
            }
        } else {
            return;
        }
    }
}
