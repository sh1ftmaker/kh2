// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f148 asm("D_0035f148");
extern "C" u32 D_0035f14c asm("D_0035f14c");
extern "C" u32 D_0035f210 asm("D_0035f210");
extern "C" u32 D_0035f3d4 asm("D_0035f3d4");
extern "C" u32 func_00138c68(u32, u32, u32) asm("func_00138c68");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_002766d0(u32) asm("func_002766d0");
extern "C" void func_00138cb8(u32, u32, u32) asm("func_00138cb8");
extern "C" void func_0028d8c0(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d8c0");
extern "C" void func_0028dcc0(u32, u32) asm("func_0028dcc0");

// 0x0029e170 func_0029e170
u32 func_0029e170(u32 a0) asm("_ZN2Tz5JmDic15CreateCharaBaseEi");
u32 func_0029e170(u32 a0) {
    u32 v0;
    u32 t5;
    u32 t5_0;
    u32 s1;
    u32 s0;
    u32 loc_0;
    u32 loc_4;
    u32 a1_1;
    v0 = func_002766d0(a0);
    t5 = (a0 + 1);
    t5_0 = (t5 * 0x198);
    s1 = ((v0 + t5_0) + 0x4398);
    s0 = (*(u32*)(&D_0035f3d4) + 4);
    if (((s32)(func_00139d78(s1)) == 0)) {
        func_0028d8c0(s1, s0, *(u32*)(&D_0035f14c), *(u32*)(&D_0035f148), *(u32*)(&D_0035f210), 7, 8, 0);
        func_0028dcc0(s1, v0);
    }
    func_00138cb8(v0, (u32)&loc_0, (u32)&loc_4);
    if (((s32)(a0) != 0)) {
        a1_1 = 0x100;
    } else {
        a1_1 = 0x154;
    }
    return func_00138c68(s1, a1_1 - loc_0, 0xd0 - loc_4);
}
