// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001c16a0(u32, u32) asm("func_001c16a0");
extern "C" u32 func_001c18d0(u32) asm("func_001c18d0");
extern "C" void func_001c1890(u32, u32) asm("func_001c1890");
extern "C" void func_001c1a30(u32, u32) asm("func_001c1a30");

// 0x001c1428 func_001c1428
u32 func_001c1428(u32 a0) asm("_ZN2YS10MASSEFFECT7MANAGER4execEv");
u32 func_001c1428(u32 a0) {
    u32 s0;
    u32 loc_0;
    u32 s2;
    u32 s1;
    u32 t7;
    s0 = *(u32*)((a0 + 0xc));
    loc_0 = *(u32*)((a0 + 0x30));
    *(u32*)((a0 + 0x34)) = 0;
    if (((s32)(s0) != 0)) {
        s2 = s0;
        do {
            s1 = (s2 == 0) ? *(u32*)((a0 + 0xc)) : *(u32*)((s2 + 0x24));
            s2 = s1;
            if (((s32)(func_001c18d0(s0)) != 0)) {
                t7 = *(u32*)((a0 + 0x34));
                func_001c1a30(s0, (u32)&loc_0);
                *(u32*)((a0 + 0x34)) = (t7 + 1);
            } else {
                if (((s32)(s0) != 0)) {
                    func_001c1890(s0, (u32)&loc_0);
                }
            }
            s0 = s1;
        } while (((s32)(s1) != 0));
    }
    return func_001c16a0(a0, *(u32*)((a0 + 0x34)));
}
