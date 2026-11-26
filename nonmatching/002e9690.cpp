// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_002e92e8 asm("D_002e92e8");
extern "C" u32 D_002e9338 asm("D_002e9338");
extern "C" u32 D_003633c8 asm("D_003633c8");
extern "C" u32 D_01e2bfa0 asm("D_01e2bfa0");
extern "C" u32 D_01e2bfa4 asm("D_01e2bfa4");
extern "C" u32 func_00102c18(u32, u32, u32) asm("func_00102c18");
extern "C" u32 func_001050c8() asm("func_001050c8");
extern "C" u32 func_002e93a0(u32) asm("func_002e93a0");

// 0x002e9690 Ts::FLARE::Init()
u32 lift_002e9690() asm("_ZN2Ts5FLARE4InitEv");
u32 lift_002e9690() {
    u8 frame[16];
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    u32 s1;
    u32 s2;
    u32 s3;
    u32 s4;
    u32 s5;
    u32 v0_2;
    u32 t5;
    u32 s4_3;
    u32 sp;
    u32 v0_4;
    u32 t4;
    u32 t5_5;
    u32 t6;
    if (((s32)(*(u32*)(&D_003633c8)) == 0)) {
        v0 = func_00102c18(1, 0x501e, (u32)&D_002e92e8);
        *(u32*)(&D_003633c8) = v0;
        *(u32*)((v0 + 0x30)) = (u32)&D_002e9338;
        v0_0 = func_001050c8();
        v0_1 = ((u32(*)(u32, u32, u32))(*(u32*)(*(u32*)(v0_0))))(v0_0, 0x800, 0);
        s1 = 0x1d;
        s2 = 0xffffffff;
        s3 = v0_1;
        s4 = 0x1e30000;
        s5 = (u32)&D_01e2bfa0;
        do {
            v0_2 = func_002e93a0(v0_1 + ((s1 - 0x1d) * -0x40));
            s1 = (s1 + -1);
            v0_1 = v0_2;
        } while ((s1 != s2));
        t5 = 0;
        do {
            *(u32*)(((s3 + (t5 * 4)) + 0x780)) = t5;
            t5 = (t5 + 1);
        } while (((s32)(((s32)(t5) < (s32)(0x1e))) != 0));
        *(u32*)((s3 + 0x7f8)) = 0x1e;
        *(u32*)(s5) = s3;
        s4_3 = s4;
        v0_4 = v0_1;
    } else {
        s4_3 = 0x1e30000;
        sp = (u32)frame;
    }
    *(u32*)(&D_01e2bfa4) = 0;
    t4 = *(u32*)((s4_3 + -0x4060));
    t5_5 = 0;
    t6 = *(u32*)((s4_3 + -0x4060));
    do {
        *(u32*)(((t6 + (t5_5 * 4)) + 0x780)) = t5_5;
        t5_5 = (t5_5 + 1);
    } while (((s32)(((s32)(t5_5) < (s32)(0x1e))) != 0));
    *(u32*)((t4 + 0x7f8)) = 0x1e;
    return v0_4;
}
