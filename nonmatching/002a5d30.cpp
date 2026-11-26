// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f5ec asm("D_0035f5ec");
extern "C" u32 func_00276c18() asm("func_00276c18");
extern "C" u32 func_00294000(u32) asm("func_00294000");
extern "C" u32 func_002944d0(u32) asm("func_002944d0");

// 0x002a5d30 Tz::JmBattle::GetEnableLimit()
u32 lift_002a5d30() asm("_ZN2Tz8JmBattle14GetEnableLimitEv");
u32 lift_002a5d30() {
    u32 v0;
    u32 s2;
    u32 s1;
    u32 v0_0;
    u32 v0_1;
    u32 t7;
    v0 = func_00294000(6);
    *(u8*)(*(u32*)(&D_0035f5ec)) = 0;
    s2 = 0;
    if (((s32)(*(u32*)((v0 + 8))) > 0)) {
        s1 = 0;
        do {
            v0_0 = func_002944d0(v0 + 0x10);
            if (((s32)(v0_0) == 0)) {
                v0_1 = func_00276c18();
                if (((s32)(v0_1) != 0)) {
                    *(u8*)(((*(u32*)(&D_0035f5ec) + s2) + 6)) = s1;
                    s2 = (s2 + 1);
                }
                v0_0 = v0_1;
            } else {
                *(u8*)(((*(u32*)(&D_0035f5ec) + s2) + 6)) = s1;
                s2 = (s2 + 1);
            }
            s1 = (s1 + 1);
            t7 = ((s32)(s1) < (s32)(*(u32*)((v0 + 8))));
            v0 = v0_0;
        } while (((s32)(t7) != 0));
    }
    *(u8*)(*(u32*)(&D_0035f5ec)) = s2;
    return v0;
}
