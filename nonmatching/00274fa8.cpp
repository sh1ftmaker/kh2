// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00347e60 asm("D_00347e60");
extern "C" u32 D_00347f80 asm("D_00347f80");
extern "C" u32 D_00347f98 asm("D_00347f98");
extern "C" u32 D_0035eb98 asm("D_0035eb98");
extern "C" u32 D_0035f148 asm("D_0035f148");
extern "C" u32 D_0035f14c asm("D_0035f14c");
extern "C" u32 D_0035f204 asm("D_0035f204");
extern "C" u32 D_0035f210 asm("D_0035f210");
extern "C" u32 D_00373d78 asm("D_00373d78");
extern "C" u32 D_00373d80 asm("D_00373d80");
extern "C" u32 func_0023ee30(u32) asm("func_0023ee30");
extern "C" u32 func_00276fa8() asm("func_00276fa8");
extern "C" u32 func_00287bc0() asm("func_00287bc0");
extern "C" u32 func_002945e8() asm("func_002945e8");
extern "C" u32 func_002958b0() asm("func_002958b0");
extern "C" u32 func_00296588() asm("func_00296588");
extern "C" u32 func_002a77a0() asm("func_002a77a0");
extern "C" void func_002369a0(u32) asm("func_002369a0");
extern "C" void func_00239700(u32) asm("func_00239700");
extern "C" void func_0023c008(u32) asm("func_0023c008");
extern "C" void func_0023ef50(u32) asm("func_0023ef50");
extern "C" void func_00275af8() asm("func_00275af8");
extern "C" void func_00276220(u32, u32) asm("func_00276220");
extern "C" void func_00276588(u32) asm("func_00276588");
extern "C" void func_00276598() asm("func_00276598");
extern "C" void func_0028d7f0(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d7f0");
extern "C" void func_0028f280(u32, u32, u32, u32, u32) asm("func_0028f280");
extern "C" void func_0028fb28(u32, u32) asm("func_0028fb28");
extern "C" void func_0031a838(u32) asm("func_0031a838");

// 0x00274fa8 Tz::Jiminy::Setup()
void lift_00274fa8() asm("_ZN2Tz6Jiminy5SetupEv");
void lift_00274fa8() {
    u32 s2;
    u32 v0;
    u32 loc_0;
    u32 v0_0;
    u32 v0_1;
    s2 = func_00276fa8();
    v0 = func_0023ee30(0xa0);
    *(u32*)(v0) = (u32)&D_00347f98;
    func_0031a838(v0 + 0xc);
    *(u32*)(v0) = (u32)&D_0035eb98;
    func_002369a0(v0 + 0x18);
    func_0023c008(v0 + 0x30);
    *(u32*)(&D_0035f210) = v0;
    loc_0 = 0;
    func_0028d7f0(v0, 0x7557, 0, 0, *(s16*)(s2), *(s16*)((s2 + 4)), 0, 0);
    func_0023ef50(*(u32*)(&D_0035f210));
    func_0028f280(*(u32*)(&D_0035f148), *(u32*)(&D_0035f14c), *(u32*)(&D_0035f210), (u32)&D_00373d78, (u32)&D_00373d80);
    func_00276598();
    v0_0 = ((u32(*)(u32, u32, u32))(*(u32*)(*(u32*)(*(u32*)((*(u32*)(&D_00347f80) + 0x14))))))(*(u32*)((*(u32*)(&D_00347f80) + 0x14)), 0x198, 0);
    *(u32*)(v0_0) = (u32)&D_00347e60;
    *(u32*)((v0_0 + 0xc)) = 0;
    func_00239700(v0_0 + 0x18);
    *(u32*)(&D_0035f204) = v0_0;
    func_00276220(0, 0);
    func_00275af8();
    v0_1 = func_00287bc0();
    if ((v0_1 != 1)) {
        if (((s32)(v0_1) < (s32)(2))) {
            if (((s32)(v0_1) != 0)) {
                return;
            } else {
                func_002945e8();
                return;
            }
        } else {
            if ((v0_1 != 2)) {
                if ((v0_1 == 0xb)) {
                    func_00276588(1);
                    func_0028fb28(0, 0x3251);
                    func_002a77a0();
                    return;
                } else {
                    return;
                }
            } else {
                func_002958b0();
                return;
            }
        }
    } else {
        func_00296588();
        return;
    }
}
