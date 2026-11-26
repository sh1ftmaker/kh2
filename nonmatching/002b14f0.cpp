// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f634 asm("D_0035f634");
extern "C" u32 func_00167f18(u32) asm("func_00167f18");
extern "C" u32 func_00192048(u32) asm("func_00192048");
extern "C" u32 func_00281e20() asm("func_00281e20");
extern "C" u32 func_00287c90(u32) asm("func_00287c90");
extern "C" u32 func_00287cc0(u32) asm("func_00287cc0");
extern "C" u32 func_00287cd0() asm("func_00287cd0");
extern "C" u32 func_002b1660() asm("func_002b1660");
extern "C" u32 func_002b16d8() asm("func_002b16d8");
extern "C" u32 func_002b1a00() asm("func_002b1a00");
extern "C" u32 func_002b1aa0() asm("func_002b1aa0");
extern "C" u32 func_002b23e0(u32) asm("func_002b23e0");
extern "C" void func_00139580(u32) asm("func_00139580");
extern "C" void func_001a3188(u32, u32, u32) asm("func_001a3188");
extern "C" void func_00242618(u32, u32) asm("func_00242618");
extern "C" void func_002817b8() asm("func_002817b8");
extern "C" void func_00281b30() asm("func_00281b30");
extern "C" void func_00281d48() asm("func_00281d48");
extern "C" void func_00287c00(u32) asm("func_00287c00");
extern "C" void func_00287c30() asm("func_00287c30");
extern "C" void func_0028dac8(u32, u32) asm("func_0028dac8");
extern "C" void func_002b1af0() asm("func_002b1af0");

// 0x002b14f0 func_002b14f0
u32 func_002b14f0() asm("_ZN2Tz8JmPuzzle11CtrlItemGetEv");
u32 func_002b14f0() {
    u32 s1;
    u32 s0;
    u32 v0;
    u32 s0_0;
    u32 v0_1;
    u32 v0_2;
    u32 v0_3;
    s1 = func_00167f18(0);
    s0 = func_00287cd0();
    func_00281d48();
    if ((s0 == 2)) {
        v0 = func_002b1660();
        if (((s32)(v0) == 0)) {
            func_001a3188(*(u16*)(func_002b23e0(0xffffffff)), 0x64, 0);
            s0_0 = *(u32*)(&D_0035f634);
            *(u32*)(((s0_0 + 0x57c4) + 0x198)) = func_00192048(func_002b1aa0());
            func_002b1af0();
            func_00139580(*(u32*)(&D_0035f634) + 0x5e94);
            func_002817b8();
            func_00287c30();
            func_00287cc0(1);
            return func_002b1a00();
        } else {
            return v0;
        }
    } else {
        v0_1 = func_00281e20();
        if (((s32)(s0) == 0)) {
            v0_2 = func_002b16d8();
            if (((s32)(v0_2) != 0)) {
                v0_3 = func_00287c90(1);
                v0_2 = v0_3;
            }
            v0_1 = v0_2;
        }
        if ((s0 == 1)) {
            if (((s32)((*(u64*)((s1 + 8)) & 4)) != 0)) {
                func_00242618(2, 1);
                func_0028dac8(*(u32*)(&D_0035f634) + 0x5ce0, 0x7c);
                func_0028dac8(*(u32*)(&D_0035f634) + 0x5478, 0x7f);
                func_0028dac8(*(u32*)(&D_0035f634) + 0x5978, 0x82);
                func_00281b30();
                func_00287c00(0x1d);
                return func_00287cc0(2);
            } else {
                return v0_1;
            }
        } else {
            return v0_1;
        }
    }
}
