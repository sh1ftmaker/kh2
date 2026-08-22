// coverage: addr=0x00254e60 symbol=func_00254e60 size=164 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:95.23;ghidra:near:84.09
#include "common/types.h"

extern "C" u32 D_0035f02c asm("D_0035f02c");
extern "C" u32 D_0035f056 asm("D_0035f056");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_0023d820(u32) asm("func_0023d820");
extern "C" u32 func_00256b68(u32) asm("func_00256b68");
extern "C" u32 func_00256b80(u32) asm("func_00256b80");
extern "C" u32 func_00287dc0() asm("func_00287dc0");
extern "C" void func_00138c10(u32, u32) asm("func_00138c10");
extern "C" void func_0028dac8(u32, u32) asm("func_0028dac8");

// 0x00254e60 func_00254e60
void func_00254e60() asm("func_00254e60");
void func_00254e60() {
    u32 v0;
    if (((s32)(func_00139d78(*(u32*)(&D_0035f02c))) != 0)) {
        func_0028dac8(*(u32*)(&D_0035f02c), 0x30);
    }
    if (((s32)(func_00256b80(0)) != 0)) {
        v0 = func_00256b68(0);
        if ((*(u32*)((v0 + 0x184)) != 0x75)) {
            func_00138c10(v0, 0x75);
            *(u32*)((v0 + 0x188)) = 0xffffffff;
        }
        if (((s32)(*(u8*)(&D_0035f056)) == 0)) {
            func_0023d820(func_00287dc0());
            return;
        } else {
            return;
        }
    } else {
        return;
    }
}
