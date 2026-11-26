// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0032b984 asm("D_0032b984");
extern "C" u32 D_0032ba1c asm("D_0032ba1c");
extern "C" u32 D_0032ba20 asm("D_0032ba20");
extern "C" u32 D_0032ba28 asm("D_0032ba28");
extern "C" u32 D_0032ba30 asm("D_0032ba30");
extern "C" u32 D_0032ba64 asm("D_0032ba64");
extern "C" u32 D_003a6a50 asm("D_003a6a50");
extern "C" u32 func_001033d8(u32) asm("func_001033d8");
extern "C" u32 func_00103c90() asm("func_00103c90");
extern "C" u32 func_00104108() asm("func_00104108");
extern "C" u32 func_001384a0(u32) asm("func_001384a0");
extern "C" u32 func_0014c9f0(u32) asm("func_0014c9f0");
extern "C" u32 func_00167ee0() asm("func_00167ee0");
extern "C" u32 func_00243020(u32) asm("func_00243020");
extern "C" u32 func_00253180(u32, u32) asm("func_00253180");
extern "C" void func_00103748() asm("func_00103748");
extern "C" void func_00103a40() asm("func_00103a40");
extern "C" void func_00103ca0() asm("func_00103ca0");
extern "C" void func_00242fc8(u32) asm("func_00242fc8");
extern "C" void func_002530f0(u32) asm("func_002530f0");

// 0x001031d0 func_001031d0
u32 func_001031d0() asm("_ZN4MENU6EnsureEP4TASK");
u32 func_001031d0() {
    u32 s1;
    u32 s0;
    u32 v0;
    u32 s0_0;
    u32 v0_1;
    u32 v0_2;
    u32 v0_3;
    u32 v0_4;
    func_00103a40();
    if (((s32)(((u32)((*(u32*)(&D_003a6a50) + -0x64)) < (u32)(0x320))) == 0)) {
        func_002530f0(func_001033d8(*(u32*)(&D_003a6a50)));
    } else {
        func_00242fc8(func_001033d8(*(u32*)(&D_003a6a50)));
    }
    if (((s32)(*(u8*)(&D_0032ba30)) == 0)) {
        func_00103748();
    }
    *(u8*)(&D_0032ba28) = 0;
    if (((s32)(func_00103c90()) != 0)) {
        func_00103ca0();
        s1 = 1;
    } else {
        s1 = 0;
    }
    if (((s32)(*(u32*)(&D_0032b984)) != 0)) {
        if (((s32)((*(u32*)(&D_0032b984) ^ 2)) != 0)) {
            if ((*(u32*)(&D_0032ba20) != 0xffffffff)) {
                s0 = *(u32*)(&D_0032ba20);
                *(u32*)(&D_0032ba20) = 0xffffffff;
                *(u32*)(&D_003a6a50) = 0xffffffff;
                v0 = func_001033d8(s0);
                if (((s32)(((u32)((s0 + -0x64)) < (u32)(0x320))) == 0)) {
                    return func_00253180(v0, 0xfffffc19);
                } else {
                    return func_00243020(v0);
                }
            } else {
                *(u32*)(&D_003a6a50) = *(u32*)(&D_0032ba20);
                s0_0 = *(u32*)(&D_0032ba20);
                v0_1 = func_0014c9f0(1);
                if (((s32)(s1) == 0)) {
                    v0_2 = func_00167ee0();
                    if (((s32)(*(u8*)(&D_0032ba1c)) == 0)) {
                        return func_001384a0(0);
                    } else {
                        return v0_2;
                    }
                } else {
                    return v0_1;
                }
            }
        } else {
            if (((s32)(*(u32*)(&D_0032ba64)) != 0)) {
                *(u32*)(&D_003a6a50) = 0xffffffff;
                func_0014c9f0(1);
                func_00167ee0();
                if (((s32)(*(u8*)(&D_0032ba1c)) == 0)) {
                    func_001384a0(0);
                }
                return func_00104108();
            } else {
                *(u32*)(&D_003a6a50) = 0xffffffff;
                func_0014c9f0(1);
                v0_3 = func_00167ee0();
                if (((s32)(*(u8*)(&D_0032ba1c)) == 0)) {
                    return func_001384a0(0);
                } else {
                    return v0_3;
                }
            }
        }
    } else {
        if (((s32)(*(u32*)(&D_0032ba64)) != 0)) {
            *(u32*)(&D_003a6a50) = 0xffffffff;
            func_0014c9f0(1);
            func_00167ee0();
            if (((s32)(*(u8*)(&D_0032ba1c)) == 0)) {
                func_001384a0(0);
            }
            return func_00104108();
        } else {
            *(u32*)(&D_003a6a50) = 0xffffffff;
            func_0014c9f0(1);
            v0_4 = func_00167ee0();
            if (((s32)(*(u8*)(&D_0032ba1c)) == 0)) {
                return func_001384a0(0);
            } else {
                return v0_4;
            }
        }
    }
}
