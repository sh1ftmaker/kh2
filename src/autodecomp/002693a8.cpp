// coverage: addr=0x002693a8 symbol=func_002693a8 size=352 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:87.22;ghidra:near:0.0
#include "common/types.h"

extern "C" u32 D_0035f024 asm("D_0035f024");
extern "C" u32 func_00242848(u32) asm("func_00242848");
extern "C" u32 func_00257610(u32) asm("func_00257610");
extern "C" u32 func_002576d0() asm("func_002576d0");
extern "C" u32 func_00281e20() asm("func_00281e20");
extern "C" u32 func_00287cc0(u32) asm("func_00287cc0");
extern "C" u32 func_00287cd0() asm("func_00287cd0");
extern "C" u32 func_00287df0(u32, u32, u32, u32, u32) asm("func_00287df0");
extern "C" u32 func_00289310(u32) asm("func_00289310");
extern "C" u32 func_00289380(u32) asm("func_00289380");
extern "C" void func_00257530(u32) asm("func_00257530");
extern "C" void func_002575a8() asm("func_002575a8");
extern "C" void func_00257670(u32) asm("func_00257670");
extern "C" void func_00281d48() asm("func_00281d48");
extern "C" void func_00287bc0() asm("func_00287bc0");
extern "C" void func_00287c30() asm("func_00287c30");
extern "C" void func_00287c90(u32) asm("func_00287c90");

// 0x002693a8 func_002693a8
u32 func_002693a8() asm("func_002693a8");
u32 func_002693a8() {
    u32 s0;
    u32 s1;
    u32 v0;
    s0 = func_00289380(*(u32*)(&D_0035f024));
    s1 = func_00287cd0();
    func_00287bc0();
    if ((s1 == 2)) {
        v0 = func_002576d0();
        if (((s32)(v0) == 0)) {
            func_002575a8();
            func_00287c30();
            return func_00287cc0(1);
        } else {
            return v0;
        }
    } else {
        if ((s0 != 0xffffffff) || ((s32)(func_00289310(*(u32*)(&D_0035f024))) != 0)) {
            if (((s32)(func_00257610(0)) == 0)) {
                func_00257670(0);
            }
        }
        if (((s32)(s1) == 0)) {
            if (((s32)(func_00257610(0)) != 0)) {
                func_00287c90(1);
            }
        }
        if (((s32)(func_00242848(func_00287df0(s0, func_00289310(*(u32*)(&D_0035f024)), 0, 0, 1))) == 0)) {
            if ((s0 != 0xfffffffe)) {
                if (((s32)(((s32)(s0) < (s32)(-1))) == 0)) {
                    if ((s0 != 0xffffffff)) {
                        if (((s32)(s0) == 0)) {
                            func_00257530(0);
                            func_00287cc0(2);
                        }
                    }
                }
            } else {
                func_00257530(0);
                func_00287cc0(2);
            }
        }
        func_00281d48();
        return func_00281e20();
    }
}
