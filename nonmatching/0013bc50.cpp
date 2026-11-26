// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00348430 asm("D_00348430");
extern "C" u32 func_00139570(u32) asm("func_00139570");
extern "C" u32 func_00139580(u32) asm("func_00139580");
extern "C" u32 func_0013b5d0(u32, u32, u32, u32, u32, u32, u32, u32, f32) asm("func_0013b5d0");
extern "C" u32 func_0013bc40(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0013bc40");
extern "C" u32 func_001bdcd0(u32) asm("func_001bdcd0");
extern "C" void func_001396b0(u32) asm("func_001396b0");
extern "C" void func_0013c820(u32, u32) asm("func_0013c820");
extern "C" void func_0031a260(u32, u32) asm("func_0031a260");

// 0x0013bc50 func_0013bc50
void func_0013bc50(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("_ZN2dk12COMMAND_DRAW15drawCurrentIconEPN2YS12COMMAND_MENUEiibjPKNS1_12COMMAND_ELEMEPNS_11COMMAND_ONEE");
void func_0013bc50(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) {
    u32 loc_0;
    u32 loc_8;
    u32 fp;
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    u32 fp_2;
    u32 v0_3;
    u32 v0_4;
    if (((s32)(func_0013bc40(a0, a2, a2, a3, a4, a5, a6, a7)) != 0)) {
        switch (*(u8*)((a6 + 7))) {
        case 1:
            a1 = 0x25;
            break;
        case 2:
            a1 = 0x29;
            break;
        case 3:
            a1 = 0x27;
            break;
        case 4:
            a1 = 0x2c;
            break;
        case 5:
            a1 = 0x2b;
            break;
        case 6:
            a1 = 0x26;
            break;
        case 7:
            a1 = 0x28;
            break;
        case 0:
        default:
            a1 = 0xffffffff;
            break;
        }
        if ((a1 != 0xffffffff)) {
            loc_0 = a5;
            loc_8 = 2;
            fp = (*(u32*)(a1) ? 0x15 : 0x14);
            v0 = func_0013b5d0(a0, a2, *(u32*)(((a3 << 2) + (u32)&D_00348430)), 0, a4 & 0xff, 0, 0, 0, 1.0f);
            if (((s32)(v0) != 0)) {
                *(u32*)((v0 + 0x18c)) = a7;
                func_001396b0(v0);
                if (((s32)(*(u32*)((v0 + 0x18c))) != 0)) {
                    *(u32*)((v0 + 0x190)) = 0;
                    func_001396b0(v0);
                    if (((s32)(*(u32*)((v0 + 0x190))) != 0)) {
                        func_0031a260(v0, 0);
                    }
                }
                func_00139580(v0);
                loc_0 = a5;
                loc_8 = 2;
                v0_0 = func_0013b5d0(a0, a2, a1, 0, a4 & 0xff, 0, 0, 0, 1.0f);
                *(u32*)((v0_0 + 0x18c)) = a7;
                func_001396b0(v0_0);
                if (((s32)(*(u32*)((v0_0 + 0x18c))) != 0)) {
                    *(u32*)((v0_0 + 0x190)) = 0;
                    func_001396b0(v0_0);
                    if (((s32)(*(u32*)((v0_0 + 0x190))) != 0)) {
                        func_0031a260(v0_0, 0);
                    }
                }
                func_00139580(v0_0);
                loc_0 = a5;
                loc_8 = 2;
                v0_1 = func_0013b5d0(a0, a2, fp, 0, a4 & 0xff, 0, 0, 0, 1.0f);
                *(u32*)((v0_1 + 0x18c)) = a7;
                func_001396b0(v0_1);
                if ((*(u32*)((v0_1 + 0x18c)) != 0)) {
                    *(u32*)((v0_1 + 0x190)) = 0;
                    func_001396b0(v0_1);
                    if (((s32)(*(u32*)((v0_1 + 0x190))) != 0)) {
                        func_0031a260(v0_1, 0);
                    }
                }
                if ((*(u32*)((a0 + 0xd0)) == 0xffffffff)) {
                    func_00139580(v0_1);
                } else {
                    func_00139570(v0_1);
                }
                if ((func_001bdcd0(*(u32*)((a0 + 0x29c))) != 0)) {
                    func_00139570(v0_1);
                    return;
                } else {
                    return;
                }
            } else {
                return;
            }
        } else {
            loc_0 = a5;
            loc_8 = 2;
            fp_2 = (*(u32*)(a1) ? 0x15 : 0x14);
            v0_3 = func_0013b5d0(a0, a2, *(u32*)(((a3 << 2) + (u32)&D_00348430)), 0, a4 & 0xff, 0, 0, 0, 1.0f);
            if (((s32)(v0_3) != 0)) {
                func_00139570(v0_3);
                func_0013c820(a0, a2);
                loc_0 = a5;
                loc_8 = 2;
                v0_4 = func_0013b5d0(a0, a2, fp_2, 0, a4 & 0xff, 0, 0, 0, 1.0f);
                *(u32*)((v0_4 + 0x18c)) = a7;
                func_001396b0(v0_4);
                if (((s32)(*(u32*)((v0_4 + 0x18c))) != 0)) {
                    *(u32*)((v0_4 + 0x190)) = 0;
                    func_001396b0(v0_4);
                    if (((s32)(*(u32*)((v0_4 + 0x190))) != 0)) {
                        func_0031a260(v0_4, 0);
                    }
                }
                if (((s32)(func_001bdcd0(*(u32*)((a0 + 0x29c)))) == 0)) {
                    func_00139580(v0_4);
                    return;
                } else {
                    func_00139570(v0_4);
                    return;
                }
            } else {
                return;
            }
        }
    } else {
        return;
    }
}
