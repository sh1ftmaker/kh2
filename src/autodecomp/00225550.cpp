// coverage: addr=0x00225550 symbol=func_00225550 size=156 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:75.69;ghidra:near:60.36;e3:near:59.37
#include "common/types.h"

extern "C" u32 D_0035dae4 asm("D_0035dae4");
extern "C" u32 D_0035dae8 asm("D_0035dae8");
extern "C" u32 D_0035db18 asm("D_0035db18");
extern "C" u32 func_001050c8() asm("func_001050c8");
extern "C" u32 func_001063c0(u32, u32) asm("func_001063c0");
extern "C" u32 func_00170b30(u32) asm("func_00170b30");
extern "C" u32 func_00224e90() asm("func_00224e90");
extern "C" u32 func_00225e70(u32, u32, u32) asm("func_00225e70");

// 0x00225550 func_00225550
void func_00225550() asm("func_00225550");
void func_00225550() {
    u32 v0;
    u32 v0_0;
    if (((s32)(func_00224e90()) == 0)) {
        if ((*(u32*)(&D_0035db18) == 0x400000)) {
            if ((*(u32*)(&D_0035dae4) == 0)) {
                v0 = func_001063c0(0xc, func_001050c8());
                *(u32*)(v0) = 0;
                *(u32*)((v0 + 4)) = 0;
                *(u32*)((v0 + 8)) = 0;
                *(u32*)(&D_0035dae4) = v0;
                v0_0 = func_00170b30(0x200000);
                *(u32*)(&D_0035dae8) = v0_0;
                func_00225e70(*(u32*)(&D_0035dae4), v0_0, 0x200000);
                return;
            } else {
                return;
            }
        } else {
            return;
        }
    } else {
        return;
    }
}
