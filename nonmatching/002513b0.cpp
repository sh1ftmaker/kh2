// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035ee58 asm("D_0035ee58");
extern "C" u32 D_0035ee60 asm("D_0035ee60");
extern "C" u32 D_0035ee68 asm("D_0035ee68");
extern "C" u32 func_0023f0c0(u32) asm("func_0023f0c0");
extern "C" u32 func_00242848(u32) asm("func_00242848");
extern "C" u32 func_00252000() asm("func_00252000");
extern "C" u32 func_00252110(u32) asm("func_00252110");
extern "C" u32 func_00252710(u32) asm("func_00252710");
extern "C" u32 func_00287cd0() asm("func_00287cd0");
extern "C" u32 func_00287df0(u32, u32, u32, u32, u32) asm("func_00287df0");
extern "C" u32 func_00288018() asm("func_00288018");
extern "C" u32 func_00288040() asm("func_00288040");
extern "C" u32 func_002891e8(u32) asm("func_002891e8");
extern "C" u32 func_00289310(u32) asm("func_00289310");
extern "C" u32 func_00289380(u32) asm("func_00289380");
extern "C" void func_00139d78(u32) asm("func_00139d78");
extern "C" void func_0023f070(u32, u32, u32) asm("func_0023f070");
extern "C" void func_002426a0(u32) asm("func_002426a0");
extern "C" void func_002515a0() asm("func_002515a0");
extern "C" void func_00251ec8(u32) asm("func_00251ec8");
extern "C" void func_00251f40() asm("func_00251f40");
extern "C" void func_00251fe0() asm("func_00251fe0");
extern "C" void func_00252540() asm("func_00252540");
extern "C" void func_00252618() asm("func_00252618");
extern "C" void func_00287bd0(u32, u32) asm("func_00287bd0");
extern "C" void func_00287c90(u32) asm("func_00287c90");
extern "C" void func_00287da0() asm("func_00287da0");

// 0x002513b0 func_002513b0
u32 func_002513b0() asm("_ZN2Tz4CANA11ControlMenuEv");
u32 func_002513b0() {
    u32 s3;
    u32 v0;
    u32 t6;
    u32 v0_0;
    s3 = func_00287cd0();
    func_00139d78(*(u32*)(&D_0035ee60));
    v0 = func_00289380(*(u32*)(&D_0035ee58));
    if ((v0 != 0xffffffff) || ((s32)(func_00289310(*(u32*)(&D_0035ee58))) != 0)) {
        if ((func_0023f0c0(*(u32*)(&D_0035ee60)) != 1)) {
            func_0023f070(*(u32*)(&D_0035ee60), 1, 0xffffffff);
            func_002426a0(0);
        }
    }
    if (((s32)(s3) == 0)) {
        if ((func_0023f0c0(*(u32*)(&D_0035ee60)) == 1)) {
            func_00287c90(1);
            func_00252540();
            func_00251ec8(func_00252110(func_002891e8(*(u32*)(&D_0035ee58))));
        }
    }
    if (((s32)(func_00242848(func_00287df0(v0, func_00289310(*(u32*)(&D_0035ee58)), 1, 0, 1))) == 0)) {
        t6 = (v0 + 4);
        switch (t6) {
        case 0:
        case 2:
            if (((s32)(func_00252000()) == 0)) {
                func_00252618();
                func_00287da0();
            } else {
                func_00251fe0();
            }
            break;
        case 4:
        case 5:
        case 6:
        case 7:
            if (((s32)(func_00252710(v0)) != 0)) {
                func_00251f40();
            } else {
                if (((s32)(func_00252000()) != 0)) {
                    ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035ee68)) + 0x14))))(*(u32*)(&D_0035ee68));
                }
                func_002515a0();
                func_00287bd0(1, 0);
            }
            break;
        case 1:
        case 3:
        default:
            break;
        }
    }
    v0_0 = func_00288040();
    if (((s32)(v0_0) != 0)) {
        return func_00288018();
    } else {
        return v0_0;
    }
}
