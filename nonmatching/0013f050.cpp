// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00348704 asm("D_00348704");
extern "C" u32 func_0013f230(u32) asm("func_0013f230");
extern "C" u32 func_0013f378(u32) asm("func_0013f378");
extern "C" u32 func_0013f498(u32) asm("func_0013f498");
extern "C" u32 func_0015d540(u32) asm("func_0015d540");

// 0x0013f050 func_0013f050
void func_0013f050(u32 a0) asm("func_0013f050");
void func_0013f050(u32 a0) {
    if (((s32)(a0) < 0)) {
        *(u32*)(&D_00348704) = (a0 & 0x7fffffff);
        return;
    } else {
        *(u32*)(&D_00348704) = a0;
        if (((a0 & 0x3fffffff) != 1)) {
            if (((s32)((a0 & 0x3fffffff)) != 0)) {
                if (((a0 & 0x3fffffff) != 2)) {
                    if (((a0 & 0x3fffffff) == 3)) {
                        func_0013f498(a0 & 0x3fffffff);
                        return;
                    } else {
                        return;
                    }
                } else {
                    func_0013f378(a0 & 0x3fffffff);
                    return;
                }
            } else {
                func_0015d540(a0 & 0x3fffffff);
                return;
            }
        } else {
            func_0013f230(a0 & 0x3fffffff);
            return;
        }
    }
}
