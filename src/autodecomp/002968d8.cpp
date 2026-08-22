// coverage: addr=0x002968d8 symbol=func_002968d8 size=260 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:91.06;ghidra:near:86.67
#include "common/types.h"

extern "C" u32 D_0035f200 asm("D_0035f200");
extern "C" u32 func_00242848(u32) asm("func_00242848");
extern "C" u32 func_00276398() asm("func_00276398");
extern "C" u32 func_00287cd0() asm("func_00287cd0");
extern "C" u32 func_00287da0() asm("func_00287da0");
extern "C" u32 func_00287df0(u32, u32, u32, u32, u32) asm("func_00287df0");
extern "C" u32 func_00289310(u32) asm("func_00289310");
extern "C" u32 func_00289380(u32) asm("func_00289380");
extern "C" void func_00276220(u32, u32) asm("func_00276220");
extern "C" void func_00287c90(u32) asm("func_00287c90");
extern "C" void func_00296b08() asm("func_00296b08");

// 0x002968d8 func_002968d8
void func_002968d8() asm("func_002968d8");
void func_002968d8() {
    u32 s0;
    u32 s1;
    s0 = func_00289380(*(u32*)(&D_0035f200));
    s1 = func_00287cd0();
    func_00296b08();
    if ((s0 != 0xffffffff) || ((s32)(func_00289310(*(u32*)(&D_0035f200))) != 0)) {
        if (((s32)(func_00276398()) == 0)) {
            func_00276220(0, 2);
        }
    }
    if (((s32)(s1) == 0)) {
        if (((s32)(func_00276398()) != 0)) {
            func_00287c90(1);
        }
    }
    if ((func_00242848(func_00287df0(s0, func_00289310(*(u32*)(&D_0035f200)), 1, 0, 1)) == 0)) {
        if ((s0 != 0xfffffffe)) {
            if (((s32)(((s32)(s0) < (s32)(-1))) != 0)) {
                if ((s0 == 0xfffffffc)) {
                    func_00287da0();
                    return;
                } else {
                    return;
                }
            } else {
                return;
            }
        } else {
            func_00287da0();
            return;
        }
    } else {
        return;
    }
}
