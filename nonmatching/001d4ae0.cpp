// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0036e4a0 asm("D_0036e4a0");
extern "C" u32 D_0036e4b0 asm("D_0036e4b0");
extern "C" u32 D_0036e4c0 asm("D_0036e4c0");
extern "C" void func_00190878(u32, u32, u32) asm("func_00190878");
extern "C" void func_001bce90(u32, u32, u32, u32) asm("func_001bce90");

// 0x001d4ae0 func_001d4ae0
u32 func_001d4ae0(u32 a0, u32 a1, u32 a2) asm("_ZN2YS15SPECIAL_COMMAND20make_skateboard_menuEPNS_4SORAEPNS_12COMMAND_MENUE");
u32 func_001d4ae0(u32 a0, u32 a1, u32 a2) {
    u32 t7;
    u32 t7_0;
    u32 a1_1;
    u32 v0;
    u32 v0_2;
    t7 = *(u32*)((a1 + 0x160));
    if (((s32)((t7 & 0x4000)) != 0)) {
        t7_0 = *(u32*)((a1 + 0xb70));
        if ((t7_0 == 0)) {
            v0 = 0;
        } else {
            a1_1 = *(u32*)((a1 + 0xb70));
            func_00190878(a0 + 0xc, *(u32*)((a0 + 4)), 0);
            if ((a1_1 != 2)) {
                if (((s32)(((s32)(a1_1) < (s32)(3))) != 0)) {
                    if ((a1_1 == 1)) {
                        func_001bce90(a2, (u32)&D_0036e4a0, 3, a0 + 0xc);
                    }
                } else {
                    if ((a1_1 == 3)) {
                        func_001bce90(a2, (u32)&D_0036e4c0, 3, a0 + 0xc);
                    }
                }
            } else {
                func_001bce90(a2, (u32)&D_0036e4b0, 3, a0 + 0xc);
            }
            v0 = 1;
        }
        v0_2 = v0;
    } else {
        v0_2 = 0;
    }
    return v0_2;
}
