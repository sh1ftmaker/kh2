// coverage: addr=0x00226dc8 symbol=func_00226dc8 size=148 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:90.24;m2c:compile:0.0
#include "common/types.h"

extern "C" u32 D_00226ce8 asm("D_00226ce8");
extern "C" u32 D_0035db10 asm("D_0035db10");
extern "C" u32 D_0035de27 asm("D_0035de27");
extern "C" u32 func_00102c48(u32, u32, u32, u32) asm("func_00102c48");
extern "C" u32 func_00226ce8(u32) asm("func_00226ce8");
extern "C" u32 func_002282d8() asm("func_002282d8");
extern "C" u32 func_00228378() asm("func_00228378");
extern "C" void func_00226d88() asm("func_00226d88");
extern "C" void func_00232988() asm("func_00232988");
extern "C" void func_0023d230(u32) asm("func_0023d230");
extern "C" void func_002bc518() asm("func_002bc518");

// 0x00226dc8 func_00226dc8
void func_00226dc8() asm("func_00226dc8");
void func_00226dc8() {
    if ((*(u32*)(&D_0035db10) != 4)) {
        *(u32*)(&D_0035db10) = 4;
        func_00226d88();
        func_00232988();
        func_002bc518();
        if (((s32)(func_00228378()) != 0)) {
            func_0023d230(0);
            func_00102c48(1, func_002282d8(), (u32)&D_00226ce8, 0x1000);
            return;
        } else {
            *(u8*)(&D_0035de27) = 1;
            func_00226ce8(0);
            return;
        }
    } else {
        return;
    }
}
