// coverage: addr=0x0024edd8 symbol=_ZN2Tz4TTMY4DrawEv size=488 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:81.58;ghidra:near:0.0
#include "common/types.h"

extern "C" u32 D_0035ee04 asm("D_0035ee04");
extern "C" u32 D_0035ee08 asm("D_0035ee08");
extern "C" u32 D_0035ee0c asm("D_0035ee0c");
extern "C" u32 D_0035ee10 asm("D_0035ee10");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_0023f0c0(u32) asm("func_0023f0c0");
extern "C" u32 func_0024efc0(u32) asm("func_0024efc0");
extern "C" u32 func_0024eff8(u32) asm("func_0024eff8");
extern "C" u32 func_00287cd0() asm("func_00287cd0");
extern "C" u32 func_00287db0() asm("func_00287db0");
extern "C" u32 func_002891e8(u32) asm("func_002891e8");
extern "C" u32 func_00289310(u32) asm("func_00289310");
extern "C" u32 func_0028cdb8(u32) asm("func_0028cdb8");
extern "C" u32 func_0028d008(u32) asm("_ZN2Tz10MenuCursor7isExistEi");
extern "C" void func_0023f070(u32, u32, u32) asm("func_0023f070");
extern "C" void func_0024eac0() asm("func_0024eac0");
extern "C" void func_0024f1a0() asm("func_0024f1a0");
extern "C" void func_0024f2d0() asm("func_0024f2d0");
extern "C" void func_00288e88(u32) asm("func_00288e88");
extern "C" void func_0028cc78(u32, u32, u32, u32, u32, u32) asm("func_0028cc78");
extern "C" void func_0028cf98(u32, u32) asm("func_0028cf98");

// 0x0024edd8 Tz::TTMY::Draw()
void lift_0024edd8() asm("_ZN2Tz4TTMY4DrawEv");
void lift_0024edd8() {
    u32 s1;
    if (((s32)(func_00287db0()) != 0)) {
        if (((s32)(func_00139d78(*(u32*)(&D_0035ee08))) != 0)) {
            if ((func_0023f0c0(*(u32*)(&D_0035ee08)) != 2)) {
                if ((func_00139d78(*(u32*)(&D_0035ee08)) != 0)) {
                    if ((func_0023f0c0(*(u32*)(&D_0035ee08)) != 2)) {
                        func_0023f070(*(u32*)(&D_0035ee08), 2, 0xffffffff);
                    }
                }
                if ((*(u32*)(&D_0035ee0c) != 0)) {
                    if (((s32)(func_00139d78(*(u32*)(&D_0035ee0c))) != 0)) {
                        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035ee0c)) + 0x14))))(*(u32*)(&D_0035ee0c));
                    }
                }
                if (((s32)(*(u32*)(&D_0035ee10)) != 0)) {
                    if (((s32)(func_00139d78(*(u32*)(&D_0035ee10))) != 0)) {
                        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035ee10)) + 0x14))))(*(u32*)(&D_0035ee10));
                    }
                }
                func_00288e88(*(u32*)(&D_0035ee04));
                func_0024eac0();
                func_0024f1a0();
                func_0028cdb8(0);
                return;
            } else {
                return;
            }
        } else {
            return;
        }
    } else {
        func_0024f2d0();
        s1 = func_002891e8(*(u32*)(&D_0035ee04));
        if (((s32)(func_00139d78(*(u32*)(&D_0035ee08))) != 0)) {
            if ((func_00287cd0() == 1)) {
                if (((s32)(func_0028d008(0)) == 0)) {
                    func_0028cc78(0, 2, 2, *(u32*)(&D_0035ee08), 4, 4);
                    func_0028cf98(0, func_0024efc0(s1));
                }
            }
        }
        if (((s32)(func_00289310(*(u32*)(&D_0035ee04))) != 0)) {
            if (((s32)(func_0028d008(0)) != 0)) {
                func_0024f1a0();
                func_0028cf98(0, func_0024efc0(s1));
                func_0024eff8(s1);
                return;
            } else {
                return;
            }
        } else {
            return;
        }
    }
}
