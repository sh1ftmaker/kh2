// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00347e60 asm("D_00347e60");
extern "C" u32 D_00347e80 asm("D_00347e80");
extern "C" u32 D_00347f80 asm("D_00347f80");
extern "C" u32 D_00347f98 asm("D_00347f98");
extern "C" u32 D_0035de64 asm("D_0035de64");
extern "C" u32 D_0035de68 asm("D_0035de68");
extern "C" u32 D_0035de6c asm("D_0035de6c");
extern "C" u32 D_0035e320 asm("D_0035e320");
extern "C" u32 D_0035e340 asm("D_0035e340");
extern "C" u32 func_00225b00(u32) asm("func_00225b00");
extern "C" u32 func_002282f0(u32) asm("func_002282f0");
extern "C" u32 func_0022c1f8(u32, u32, u32) asm("func_0022c1f8");
extern "C" void func_0022bda0(u32, u32, u32) asm("func_0022bda0");
extern "C" void func_002361a0(u32) asm("func_002361a0");
extern "C" void func_00239700(u32) asm("func_00239700");
extern "C" void func_0031a838(u32) asm("func_0031a838");

// 0x0022bef8 sa::EVENT::set_bin_countdown(sa::BIN_COUNTDOWN&, TASK*)
void lift_0022bef8(u32 a0) asm("_ZN2sa5EVENT17set_bin_countdownERNS_13BIN_COUNTDOWNEP4TASK");
void lift_0022bef8(u32 a0) {
    u32 s2;
    u32 v0;
    u32 v0_0;
    u32 s6;
    u32 s5;
    u32 s4;
    u32 s3;
    u32 s0;
    if ((func_002282f0(*(s16*)((a0 + 4))) == 0)) {
        if ((func_00225b00(*(s16*)((a0 + 4))) == 0)) {
            *(u32*)(&D_0035de64) = 1;
            switch (*(u32*)(&D_0035de68)) {
            case 1:
                s2 = 1;
                break;
            case 2:
                *(u32*)(&D_0035de64) = 2;
                s2 = 2;
                break;
            case 3:
                s2 = 3;
                break;
            case 4:
                s2 = 4;
                break;
            case 5:
                s2 = 5;
                break;
            case 0:
            default:
                s2 = 1;
                break;
            }
            v0 = ((u32(*)(u32, u32, u32))(*(u32*)(*(u32*)(*(u32*)((*(u32*)(&D_00347f80) + 0x14))))))(*(u32*)((*(u32*)(&D_00347f80) + 0x14)), 0x370, 0);
            *(u32*)(v0) = (u32)&D_00347e60;
            *(u32*)((v0 + 0xc)) = 0;
            func_00239700(v0 + 0x18);
            *(u32*)(v0) = (u32)&D_0035e340;
            *(u32*)((v0 + 0x1a0)) = (u32)&D_00347f98;
            func_0031a838(v0 + 0x1ac);
            *(u32*)((v0 + 0x1a0)) = (u32)&D_00347e80;
            func_002361a0(v0 + 0x1c0);
            func_0022bda0(v0, s2, 1);
            if ((*(u32*)(&D_0035de6c) != 0xffffffff)) {
                v0_0 = ((u32(*)(u32, u32, u32))(*(u32*)(*(u32*)(*(u32*)((*(u32*)(&D_00347f80) + 0x14))))))(*(u32*)((*(u32*)(&D_00347f80) + 0x14)), 0x4e4, 0);
                *(u32*)(v0_0) = (u32)&D_00347f98;
                func_0031a838(v0_0 + 0xc);
                *(u32*)(v0_0) = (u32)&D_0035e320;
                s6 = (u32)&D_00347f98;
                s5 = (u32)&D_00347e60;
                s4 = 0xffffffff;
                s3 = 2;
                s0 = (v0_0 + 0x1c);
                do {
                    *(u32*)(s0) = s6;
                    func_0031a838(s0 + 0xc);
                    *(u32*)(s0) = s5;
                    func_00239700(s0 + 0x18);
                    s0 = (s0 + 0x198);
                    s3 = (s3 + -1);
                } while ((s3 != s4));
                func_0022c1f8(v0_0, *(u32*)(&D_0035de6c), v0);
                return;
            } else {
                return;
            }
        } else {
            return;
        }
    } else {
        return;
    }
}
