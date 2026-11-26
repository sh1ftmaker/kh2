// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00139308 asm("D_00139308");
extern "C" u32 D_00139390 asm("D_00139390");
extern "C" u32 D_001393e0 asm("D_001393e0");
extern "C" u32 D_001394c0 asm("D_001394c0");
extern "C" u32 D_001394d8 asm("D_001394d8");
extern "C" u32 D_00347f80 asm("D_00347f80");
extern "C" u32 func_001024b0(u32) asm("func_001024b0");
extern "C" u32 func_00102788(u32, u32, u32, u32) asm("func_00102788");
extern "C" u32 func_00103b48(u32, u32, u32) asm("func_00103b48");
extern "C" u32 func_00105d78(u32, u32, u32) asm("func_00105d78");
extern "C" void func_00139dc0(u32, u32) asm("func_00139dc0");

// 0x00139e00 func_00139e00
u32 func_00139e00(u32 a0, u32 a1) asm("_ZN2dk5Obj2D8menuInitEP9ALLOCATORb");
u32 func_00139e00(u32 a0, u32 a1) {
    u32 t7;
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    u32 v0_2;
    u32 v0_3;
    u32 s0;
    u32 v0_4;
    func_00139dc0(1, a1);
    *(u32*)((*(u32*)(&D_00347f80) + 0x14)) = a0;
    t7 = *(u32*)(&D_00347f80);
    *(u32*)((t7 + 4)) = 0;
    *(u32*)((t7 + 8)) = 0;
    if (((s32)((a1 & 0xff)) != 0)) {
        v0 = func_00105d78(0, 0x186a0, (u32)&D_00139390);
        v0_1 = v0;
    } else {
        v0_0 = func_00103b48(0, 0x186a0, (u32)&D_00139390);
        v0_1 = v0_0;
    }
    *(u32*)((v0_1 + 4)) = *(u32*)(&D_00347f80);
    *(u32*)((v0_1 + 0x30)) = (u32)&D_001393e0;
    if (((s32)((a1 & 0xff)) != 0)) {
        v0_2 = func_00105d78(0, 0x1944c, (u32)&D_001394c0);
        v0_1 = v0_2;
    } else {
        v0_3 = func_00103b48(0, 0x1944c, (u32)&D_001394c0);
        v0_1 = v0_3;
    }
    *(u32*)((v0_1 + 4)) = *(u32*)(&D_00347f80);
    *(u32*)((v0_1 + 0x30)) = (u32)&D_001394d8;
    s0 = *(u32*)(&D_00347f80);
    *(u32*)(s0) = func_001024b0(a0);
    v0_4 = func_00102788(*(u32*)(*(u32*)(&D_00347f80)), 0, 0x19258, (u32)&D_00139308);
    *(u32*)((v0_4 + 4)) = *(u32*)(&D_00347f80);
    return v0_4;
}
