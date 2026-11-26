// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00139538(u32) asm("func_00139538");
extern "C" u32 func_001396c0(u32) asm("func_001396c0");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_0023aa98(u32) asm("func_0023aa98");
extern "C" u32 func_002c5238(u32, u32, u32) asm("func_002c5238");
extern "C" void func_00138c10(u32, u32) asm("func_00138c10");
extern "C" void func_00138c68(u32, u32, u32) asm("func_00138c68");
extern "C" void func_00139510(u32) asm("func_00139510");
extern "C" void func_00139570(u32) asm("func_00139570");
extern "C" void func_00139580(u32) asm("func_00139580");
extern "C" void func_0014cbe0(u32, u32, u32, u32) asm("func_0014cbe0");
extern "C" void func_00236d60(u32) asm("func_00236d60");
extern "C" void func_0023f0c0(u32) asm("func_0023f0c0");
extern "C" void func_002c1460(u32, u32) asm("func_002c1460");

// 0x002c14e8 func_002c14e8
void func_002c14e8(u32 a0) asm("_ZN2dk13WM_TOTAL_INFO6updateEv");
void func_002c14e8(u32 a0) {
    u8 frame[48];
    u32 s4;
    u32 s6;
    u32 s5;
    u32 s2;
    u32 s3;
    u32 s3_0;
    u32 s4_1;
    u32 s5_2;
    u32 sp;
    u32 sp_3;
    func_00236d60(a0);
    if (((s32)((*(u32*)((a0 + 0x18)) & 1)) != 0)) {
        if ((func_00139d78(a0 + 0x1c) != 0)) {
            func_00139510(a0 + 0x1c);
        }
        ((void(*)(u32))(*(u32*)((*(u32*)(a0) + 0x14))))(a0);
        sp_3 = (u32)frame;
    } else {
        if (((s32)(func_00139538(a0 + 0xc0)) != 0)) {
            *(u32*)((a0 + 0x18)) = (*(u32*)((a0 + 0x18)) | 1);
            sp = (u32)frame;
        } else {
            func_0014cbe0((u32)frame + 0x20, (u32)frame + 0x24, (u32)frame + 0x28, (u32)frame + 0x2c);
            s4 = func_002c5238(*(u32*)(((u32)frame + 0x20)), 3, (u32)frame);
            s6 = func_0023aa98(a0 + 0x270);
            s5 = 0;
            if ((func_001396c0(a0 + 0xc0) == 0)) {
                s2 = 0;
                s3 = (u32)frame;
                do {
                    func_00138c10((a0 + (s2 * 0x198)) + 0x258, *(u32*)((s3 + (s2 * 4))) + 0x27);
                    func_00138c68((a0 + (s2 * 0x198)) + 0x258, s5, 0);
                    if (((s32)(((s32)((2 - s2)) < (s32)(s4))) != 0)) {
                        func_00139580((a0 + (s2 * 0x198)) + 0x258);
                        s5 = (s5 + s6);
                    } else {
                        func_00139570((a0 + (s2 * 0x198)) + 0x258);
                    }
                    s2 = (s2 + 1);
                } while (((s32)(((s32)(s2) < (s32)(3))) != 0));
            }
            func_00138c68(a0 + 0x720, s5, 0);
            s3_0 = (s5 + func_0023aa98(a0 + 0x738));
            func_002c5238(*(u32*)(((u32)frame + 0x24)), 2, (u32)frame + 0x10);
            s4_1 = 1;
            s5_2 = (u32)frame;
            do {
                func_00138c10((a0 + ((s4_1 - 1) * -0x198)) + 0x8b8, *(u32*)(((s5_2 + ((s4_1 - 1) * -4)) + 0x10)) + 0x27);
                func_00138c68((a0 + ((s4_1 - 1) * -0x198)) + 0x8b8, s3_0, 0);
                s3_0 = (s3_0 + s6);
                s4_1 = (s4_1 + -1);
            } while (((s32)(s4_1) >= 0));
            func_0023f0c0(a0 + 0x1c);
            func_002c1460(a0, 2);
        }
        sp_3 = sp;
    }
    return;
}
