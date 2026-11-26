// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00347e60 asm("D_00347e60");
extern "C" u32 D_00347e80 asm("D_00347e80");
extern "C" u32 D_00347f80 asm("D_00347f80");
extern "C" u32 D_00347f98 asm("D_00347f98");
extern "C" u32 D_0035de64 asm("D_0035de64");
extern "C" u32 D_0035e340 asm("D_0035e340");
extern "C" u32 func_0022bda0(u32, u32, u32) asm("func_0022bda0");
extern "C" void func_002361a0(u32) asm("func_002361a0");
extern "C" void func_00239700(u32) asm("func_00239700");
extern "C" void func_0031a838(u32) asm("func_0031a838");

// 0x0022c108 sa::EVENT::last_countdown()
void lift_0022c108() asm("_ZN2sa5EVENT14last_countdownEv");
void lift_0022c108() {
    u32 s2;
    u32 v0;
    if (((s32)(*(u32*)(&D_0035de64)) != 0)) {
        s2 = (*(u32*)(&D_0035de64) != 1) ? ((*(u32*)(&D_0035de64) ^ 2) ? 0 : 5) : 0;
        *(u32*)(&D_0035de64) = 0;
        v0 = ((u32(*)(u32, u32, u32))(*(u32*)(*(u32*)(*(u32*)((*(u32*)(&D_00347f80) + 0x14))))))(*(u32*)((*(u32*)(&D_00347f80) + 0x14)), 0x370, 0);
        *(u32*)(v0) = (u32)&D_00347f98;
        func_0031a838(v0 + 0xc);
        *(u32*)(v0) = (u32)&D_00347e60;
        func_00239700(v0 + 0x18);
        *(u32*)(v0) = (u32)&D_0035e340;
        *(u32*)((v0 + 0x1a0)) = (u32)&D_00347f98;
        func_0031a838(v0 + 0x1ac);
        *(u32*)((v0 + 0x1a0)) = (u32)&D_00347e80;
        func_002361a0(v0 + 0x1c0);
        func_0022bda0(v0, s2, 0);
        return;
    } else {
        return;
    }
}
