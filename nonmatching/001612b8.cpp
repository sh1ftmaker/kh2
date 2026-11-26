// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00160b10 asm("D_00160b10");
extern "C" u32 D_00160b88 asm("D_00160b88");
extern "C" u32 D_00160bb8 asm("D_00160bb8");
extern "C" u32 D_00160bd8 asm("D_00160bd8");
extern "C" u32 D_00160cf0 asm("D_00160cf0");
extern "C" u32 D_0034c738 asm("D_0034c738");
extern "C" u32 D_0034c73c asm("D_0034c73c");
extern "C" u32 D_004f3b30 asm("D_004f3b30");
extern "C" u32 func_00102180(u32) asm("func_00102180");
extern "C" u32 func_001024b0(u32) asm("func_001024b0");
extern "C" u32 func_00102788(u32, u32, u32, u32) asm("func_00102788");
extern "C" u32 func_00102c18(u32, u32, u32) asm("func_00102c18");
extern "C" u32 func_00102c80() asm("func_00102c80");
extern "C" u32 func_00104190() asm("func_00104190");
extern "C" void func_00161228(u32, u32) asm("func_00161228");

// 0x001612b8 func_001612b8
u32 func_001612b8(u32 a0, u32 a1) asm("_ZN2dk5BgObj4initEP9ALLOCATORPNS_7MapFileE");
u32 func_001612b8(u32 a0, u32 a1) {
    u32 s0;
    u32 loc_0;
    u32 s1;
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    u32 v0_2;
    u32 v0_3;
    *(u32*)(&D_0034c738) = a0;
    *(u32*)(&D_0034c73c) = a1;
    func_00161228(a0, a1);
    s0 = func_00102c80();
    s1 = func_00104190();
    v0 = func_00102180((u32)&loc_0);
    if ((loc_0 == s0)) {
        *(u32*)((func_00102c18(1, 0x6d60, (u32)&D_00160b88) + 0x30)) = (u32)&D_00160bb8;
        *(u32*)((func_00102c18(1, 0x16378, (u32)&D_00160bd8) + 0x30)) = (u32)&D_00160cf0;
        v0_0 = func_001024b0(*(u32*)(&D_0034c738));
        *(u32*)(&D_004f3b30) = v0_0;
        v0_1 = func_00102788(v0_0, 0, 0x6d60, (u32)&D_00160b10);
        v0 = v0_1;
    } else {
        if ((loc_0 == s1)) {
            *(u32*)((func_00102788(*(u32*)((s1 + 4)), 0, 0xabe0, (u32)&D_00160b88) + 0x30)) = (u32)&D_00160bb8;
            *(u32*)((func_00102788(*(u32*)((s1 + 4)), 0, 0x11558, (u32)&D_00160bd8) + 0x30)) = (u32)&D_00160cf0;
            v0_2 = func_001024b0(*(u32*)(&D_0034c738));
            *(u32*)(&D_004f3b30) = v0_2;
            v0_3 = func_00102788(v0_2, 0, 0xabe0, (u32)&D_00160b10);
            v0 = v0_3;
        }
    }
    return v0;
}
