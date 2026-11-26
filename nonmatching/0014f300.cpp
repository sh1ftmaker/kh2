// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00347e60 asm("D_00347e60");
extern "C" u32 D_00347f80 asm("D_00347f80");
extern "C" u32 D_00347f98 asm("D_00347f98");
extern "C" u32 D_0034a428 asm("D_0034a428");
extern "C" u32 D_0034a42c asm("D_0034a42c");
extern "C" u32 D_0034a430 asm("D_0034a430");
extern "C" u32 D_0034a434 asm("D_0034a434");
extern "C" u32 D_0034a568 asm("D_0034a568");
extern "C" u32 func_0031bf50(u32) asm("func_0031bf50");
extern "C" void func_0014fba0() asm("func_0014fba0");
extern "C" void func_00239700(u32) asm("func_00239700");
extern "C" void func_0031a838(u32) asm("func_0031a838");
extern "C" void func_0031bd98(u32) asm("func_0031bd98");
extern "C" void func_0031be70(u32) asm("func_0031be70");
extern "C" void func_0031bed8(u32) asm("func_0031bed8");

// 0x0014f300 func_0014f300(void*)
u32 lift_0014f300() asm("_Z13func_0014f300Pv");
u32 lift_0014f300() {
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    u32 v0_2;
    u32 v0_3;
    func_0014fba0();
    v0 = ((u32(*)(u32, u32, u32))(*(u32*)(*(u32*)(*(u32*)((*(u32*)(&D_00347f80) + 0x14))))))(*(u32*)((*(u32*)(&D_00347f80) + 0x14)), 0x19b0, 0);
    func_0031bd98(v0);
    *(u32*)(&D_0034a428) = v0;
    v0_0 = ((u32(*)(u32, u32, u32))(*(u32*)(*(u32*)(*(u32*)((*(u32*)(&D_00347f80) + 0x14))))))(*(u32*)((*(u32*)(&D_00347f80) + 0x14)), 0x3e0, 0);
    *(u32*)(v0_0) = (u32)&D_0034a568;
    *(u32*)((v0_0 + 0xc)) = 0;
    func_0031be70(v0_0 + 0x30);
    *(u32*)((v0_0 + 0x230)) = (u32)&D_00347f98;
    func_0031a838(v0_0 + 0x23c);
    *(u32*)((v0_0 + 0x230)) = (u32)&D_00347e60;
    func_00239700(v0_0 + 0x248);
    *(u32*)((v0_0 + 0x3cc)) = 0;
    *(u32*)(&D_0034a42c) = v0_0;
    v0_1 = ((u32(*)(u32, u32, u32))(*(u32*)(*(u32*)(*(u32*)((*(u32*)(&D_00347f80) + 0x14))))))(*(u32*)((*(u32*)(&D_00347f80) + 0x14)), 0xb54, 0);
    func_0031bed8(v0_1);
    *(u32*)(&D_0034a430) = v0_1;
    v0_2 = ((u32(*)(u32, u32, u32))(*(u32*)(*(u32*)(*(u32*)((*(u32*)(&D_00347f80) + 0x14))))))(*(u32*)((*(u32*)(&D_00347f80) + 0x14)), 0xb54, 0);
    v0_3 = func_0031bf50(v0_2);
    *(u32*)(&D_0034a434) = v0_2;
    return v0_3;
}
