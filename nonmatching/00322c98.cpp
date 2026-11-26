// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00347f80 asm("D_00347f80");
extern "C" u32 D_00347f98 asm("D_00347f98");
extern "C" u32 D_00348698 asm("D_00348698");
extern "C" u32 D_0035eb60 asm("D_0035eb60");
extern "C" void func_00106ac8(u32) asm("func_00106ac8");
extern "C" void func_001070e8(u32) asm("func_001070e8");
extern "C" void func_001ddd88(u32) asm("func_001ddd88");
extern "C" void func_0023d7c8(u32) asm("func_0023d7c8");

// 0x00322c98 Tz::MenuObj::~MenuObj()
void lift_00322c98(u32 a0) asm("_ZN2Tz7MenuObjD0Ev");
void lift_00322c98(u32 a0) {
    u32 s0;
    u32 s0_0;
    *(u32*)(a0) = (u32)&D_0035eb60;
    func_0023d7c8(a0);
    *(u32*)((a0 + 0xb80)) = (u32)&D_00348698;
    *(u32*)((a0 + 0xe90)) = (u32)&D_00348698;
    *(u32*)((a0 + 0x11a0)) = (u32)&D_00348698;
    if ((a0 != 0xfffff9a0)) {
        s0 = (a0 + 0xb60);
        while ((s0 = (s0 + -0x140)), ((a0 + 0x660) != s0)) {
            func_001ddd88(s0 + 0xc0);
        }
    }
    if ((a0 != 0xffffffe0)) {
        s0_0 = (a0 + 0x660);
        while ((s0_0 = (s0_0 + -0x190)), ((a0 + 0x20) != s0_0)) {
            func_001070e8(s0_0 + 0x100);
            func_00106ac8(s0_0);
        }
    }
    *(u32*)(a0) = (u32)&D_00347f98;
    ((void(*)(u32, u32))(*(u32*)((*(u32*)(*(u32*)((*(u32*)(&D_00347f80) + 0x14))) + 4))))(*(u32*)((*(u32*)(&D_00347f80) + 0x14)), a0);
    return;
}
