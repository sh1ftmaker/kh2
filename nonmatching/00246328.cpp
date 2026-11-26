// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035ed20 asm("D_0035ed20");
extern "C" u32 D_0035ed24 asm("D_0035ed24");
extern "C" u32 D_0035ed28 asm("D_0035ed28");
extern "C" u32 D_0035ed2c asm("D_0035ed2c");
extern "C" u32 D_0035ed30 asm("D_0035ed30");
extern "C" u32 D_0035ed40 asm("D_0035ed40");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_00246490(u32, u32, u32) asm("func_00246490");
extern "C" u32 func_002468a0(u32) asm("func_002468a0");
extern "C" u32 func_00287bc0() asm("func_00287bc0");
extern "C" u32 func_00287db0() asm("func_00287db0");
extern "C" u32 func_002887c8() asm("func_002887c8");
extern "C" u32 func_002891e8(u32) asm("func_002891e8");
extern "C" u32 func_0028acb8(u32) asm("func_0028acb8");
extern "C" u32 func_0028acc8(u32) asm("func_0028acc8");
extern "C" void func_00246708() asm("func_00246708");
extern "C" void func_00247bb0() asm("func_00247bb0");
extern "C" void func_0028aa40(u32) asm("func_0028aa40");
extern "C" void func_0028dac8(u32, u32) asm("func_0028dac8");
extern "C" void func_0028dae0(u32, u32) asm("func_0028dae0");

// 0x00246328 Tz::HECO::Draw()
u32 lift_00246328() asm("_ZN2Tz4HECO4DrawEv");
u32 lift_00246328() {
    u32 s0;
    u32 v0;
    u32 v0_0;
    s0 = func_00287bc0();
    if (((s32)(func_00287db0()) != 0)) {
        if (((s32)(func_002887c8()) == 0)) {
            func_0028dae0(*(u32*)(&D_0035ed28), 0x1f);
            if (((s32)(func_0028acc8(*(u32*)(&D_0035ed20))) != 0)) {
                if (((s32)(func_00139d78(*(u32*)(&D_0035ed30))) != 0)) {
                    func_0028dae0(*(u32*)(&D_0035ed30), *(s16*)((func_002468a0(func_002891e8(*(u32*)(&D_0035ed20))) + 2)));
                }
            }
            func_0028dae0(*(u32*)(&D_0035ed2c), 0x22);
            if ((func_0028acc8(*(u32*)(&D_0035ed20)) != 0)) {
                if ((func_0028acb8(*(u32*)(&D_0035ed20)) == 0)) {
                    func_0028aa40(*(u32*)(&D_0035ed20));
                }
            }
            if (((s32)(func_0028acc8(*(u32*)(&D_0035ed24))) != 0)) {
                if (((s32)(func_0028acb8(*(u32*)(&D_0035ed24))) == 0)) {
                    func_0028aa40(*(u32*)(&D_0035ed24));
                }
            }
        }
        func_0028dac8(*(u32*)(&D_0035ed40), 0x4c);
        func_00247bb0();
    }
    func_00246708();
    v0 = func_00287db0();
    if ((v0 == 0)) {
        v0_0 = func_00246490(*(u32*)(&D_0035ed20), s0, (u32)(0) < (u32)(s0));
        v0 = v0_0;
    }
    return v0;
}
