// coverage: addr=0x002acda8 symbol=func_002acda8 size=260 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:70.95;ghidra:near:39.72
#include "common/types.h"

extern "C" u32 D_0035f614 asm("D_0035f614");
extern "C" u32 D_0035f618 asm("D_0035f618");
extern "C" u32 D_0035f61c asm("D_0035f61c");
extern "C" u32 D_0035f620 asm("D_0035f620");
extern "C" u32 D_0035f624 asm("D_0035f624");
extern "C" u32 D_0035f628 asm("D_0035f628");
extern "C" u32 D_0035f62c asm("D_0035f62c");
extern "C" u32 func_00103570() asm("func_00103570");
extern "C" u32 func_00103b38() asm("func_00103b38");
extern "C" u32 func_00106178(u32, u32) asm("func_00106178");
extern "C" u32 func_001063c0(u32, u32) asm("func_001063c0");
extern "C" u32 func_001063f0(u32, u32) asm("func_001063f0");
extern "C" u32 func_00170b30(u32) asm("func_00170b30");
extern "C" u32 func_00293fb0() asm("func_00293fb0");
extern "C" void func_00293e00(u32) asm("func_00293e00");
extern "C" void func_00293fc0() asm("func_00293fc0");
extern "C" void func_00319a60(u32) asm("func_00319a60");

// 0x002acda8 func_002acda8
void func_002acda8() asm("func_002acda8");
void func_002acda8() {
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    u32 v0_2;
    u32 t6;
    u32 t5;
    *(u8*)(&D_0035f614) = 0;
    *(u32*)(&D_0035f618) = 0;
    *(u32*)(&D_0035f628) = 0;
    *(u32*)(&D_0035f62c) = 0;
    if (((s32)(func_00103b38()) != 0)) {
        *(u32*)(&D_0035f618) = func_00103570();
    } else {
        v0 = func_00170b30(0x10000);
        *(u32*)(&D_0035f61c) = v0;
        *(u32*)(&D_0035f618) = func_00106178(v0, 0x10000);
        if ((func_00293fb0() == 0)) {
            func_00293e00(*(u32*)(&D_0035f618));
            func_00293fc0();
            *(u8*)(&D_0035f614) = 1;
        }
    }
    v0_0 = func_001063c0(0x968, *(u32*)(&D_0035f618));
    func_00319a60(v0_0);
    *(u32*)(&D_0035f620) = v0_0;
    v0_1 = func_001063f0(0x50, *(u32*)(&D_0035f618));
    v0_2 = v0_1;
    t6 = 9;
    t5 = 0xffffffff;
    do {
        *(u32*)(v0_1) = 0;
        *(u32*)((v0_1 + 4)) = 0;
        t6 = (t6 + -1);
        v0_1 = (v0_1 + 8);
    } while ((t6 != t5));
    *(u32*)(&D_0035f624) = v0_2;
    return;
}
