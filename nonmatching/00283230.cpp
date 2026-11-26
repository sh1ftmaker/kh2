// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct S8_6_u8 { u8 _p[6]; u8 m; u8 _q[1]; };
extern "C" u32 D_0035f2b4 asm("D_0035f2b4");
extern "C" u32 D_003742c8 asm("D_003742c8");
extern "C" u32 func_00167f18(u32) asm("func_00167f18");
extern "C" u32 func_00170cd0() asm("func_00170cd0");
extern "C" u32 func_00283618() asm("func_00283618");
extern "C" u32 func_00283668() asm("func_00283668");
extern "C" u32 func_002839f0(u32) asm("func_002839f0");
extern "C" u32 func_00287cc0(u32) asm("func_00287cc0");
extern "C" u32 func_00287cd0() asm("func_00287cd0");
extern "C" u32 func_002937c0(u32) asm("func_002937c0");
extern "C" void func_00242618(u32, u32) asm("func_00242618");
extern "C" void func_00257708(u32) asm("func_00257708");
extern "C" void func_002833f8() asm("func_002833f8");
extern "C" void func_00283790() asm("func_00283790");
extern "C" void func_00283c50() asm("func_00283c50");
extern "C" void func_00283e48() asm("func_00283e48");
extern "C" void func_00283f50() asm("func_00283f50");
extern "C" void func_00283fb0() asm("func_00283fb0");
extern "C" void func_00284048() asm("func_00284048");
extern "C" void func_00287bd0(u32, u32) asm("func_00287bd0");

// 0x00283230 func_00283230
void func_00283230() asm("_ZN2Tz10CmTutorial4CtrlEv");
void func_00283230() {
    u32 s1;
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    s1 = func_00167f18(0);
    v0 = func_00287cd0();
    if ((v0 == 2)) {
        if (((s32)(((s32)((*(s8*)((*(u32*)(&D_0035f2b4) + 0xe)) + 1)) < (s32)(*(s8*)((*(u32*)(&D_0035f2b4) + 0xd))))) == 0)) {
            v0_0 = func_00283618();
            v0 = v0_0;
        } else {
            v0_1 = func_002839f0((u32)(0) < (u32)((((S8_6_u8*)&D_003742c8)[*(s8*)(((*(u32*)(&D_0035f2b4) + *(s8*)((*(u32*)(&D_0035f2b4) + 0xe))) + 4))].m ^ ((S8_6_u8*)&D_003742c8)[*(s8*)(((*(u32*)(&D_0035f2b4) + *(s8*)((*(u32*)(&D_0035f2b4) + 0xe))) + 5))].m)));
            v0 = v0_1;
        }
        if (((s32)(v0) == 0)) {
            func_00284048();
            *(u8*)((*(u32*)(&D_0035f2b4) + 0xe)) = (*(u8*)((*(u32*)(&D_0035f2b4) + 0xe)) + 1);
            if (((s32)(((s32)(*(s8*)((*(u32*)(&D_0035f2b4) + 0xe))) < (s32)(*(s8*)((*(u32*)(&D_0035f2b4) + 0xd))))) == 0)) {
                func_00257708(0);
                func_00283c50();
                func_00287bd0(*(u32*)(*(u32*)(&D_0035f2b4)), 0);
                if (((s32)(*(u32*)(*(u32*)(&D_0035f2b4))) == 0)) {
                    func_002937c0(1);
                    return;
                } else {
                    func_00287cc0(1);
                    return;
                }
            } else {
                func_00283f50();
                func_002833f8();
                func_00287cc0(0);
                return;
            }
        } else {
            return;
        }
    } else {
        if ((func_00170cd0() == 0)) {
            if (((s32)(func_002839f0(0)) == 0)) {
                func_00283fb0();
                func_00283790();
            }
            if ((v0 == 0)) {
                if (((s32)(func_00283668()) != 0)) {
                    func_00287cc0(1);
                    if (((s32)((*(u64*)((s1 + 8)) & 4)) != 0)) {
                        func_00242618(2, 1);
                        func_00283e48();
                        func_00287cc0(2);
                        return;
                    } else {
                        return;
                    }
                } else {
                    return;
                }
            } else {
                if (((s32)((*(u64*)((s1 + 8)) & 4)) != 0)) {
                    func_00242618(2, 1);
                    func_00283e48();
                    func_00287cc0(2);
                    return;
                } else {
                    return;
                }
            }
        } else {
            return;
        }
    }
}
