// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f3d4 asm("D_0035f3d4");
extern "C" u32 D_0035f640 asm("D_0035f640");
extern "C" u32 D_0035f644 asm("D_0035f644");
extern "C" u32 D_0035f648 asm("D_0035f648");
extern "C" u32 D_0035f64c asm("D_0035f64c");
extern "C" u32 D_0035f664 asm("D_0035f664");
extern "C" u32 D_0035f690 asm("D_0035f690");
extern "C" u32 func_00139688(u32) asm("func_00139688");
extern "C" u32 func_002891b8(u32, u32) asm("func_002891b8");
extern "C" u32 func_0028c198(u32, u32, u32, u32, u32, u32) asm("func_0028c198");
extern "C" void func_00139620(u32) asm("func_00139620");
extern "C" void func_00139660(u32) asm("func_00139660");
extern "C" void func_001396b0(u32) asm("func_001396b0");
extern "C" void func_0031a260(u32, u32) asm("func_0031a260");

// 0x002b57e0 func_002b57e0
u32 func_002b57e0() asm("_ZN2Tz8CmSLBase12SetupListGraEv");
u32 func_002b57e0() {
    u8 frame[16];
    u32 s4;
    u32 s5;
    u32 s6;
    u32 s5_0;
    u32 s6_1;
    u32 s5_2;
    u32 s6_3;
    u32 s1;
    u32 s2;
    u32 s3;
    u32 v0_5;
    u32 v0_6;
    *(u32*)((u32)frame) = 0;
    *(u32*)(((u32)frame + 4)) = *(u32*)(&D_0035f3d4);
    s4 = 0;
    do {
        *(u32*)((u32)frame) = 0;
        if ((s4 != 1)) {
            if (((s32)(((s32)(s4) < (s32)(2))) != 0)) {
                if (((s32)(s4) == 0)) {
                    s5 = 2;
                    s6 = 2;
                } else {
                    *(u32*)(&D_0035f3d4) = 0x7561;
                    *(u32*)((u32)frame) = *(u32*)(&D_0035f648);
                    s5 = *(u32*)(&D_0035f640);
                    s6 = *(u32*)(&D_0035f644);
                }
                s5_0 = s5;
                s6_1 = s6;
            } else {
                *(u32*)(&D_0035f3d4) = 0x7561;
                *(u32*)((u32)frame) = *(u32*)(&D_0035f648);
                s5_0 = *(u32*)(&D_0035f640);
                s6_1 = *(u32*)(&D_0035f644);
            }
            s5_2 = s5_0;
            s6_3 = s6_1;
        } else {
            s5_2 = 1;
            s6_3 = 1;
        }
        s1 = ((s4 << 4) + (u32)&D_0035f690);
        s2 = ((s4 << 4) + (u32)&D_0035f690);
        s3 = 0;
        do {
            v0_5 = func_0028c198(*(u32*)((u32)frame), s6_3, s5_2, *(u32*)(&D_0035f664), 0xffffffff, 0);
            *(u32*)(s2) = v0_5;
            *(u32*)((v0_5 + 0x18c)) = func_002891b8(*(u32*)(&D_0035f64c), s3);
            func_001396b0(v0_5);
            if (((s32)(*(u32*)((v0_5 + 0x18c))) != 0)) {
                *(u32*)((v0_5 + 0x190)) = 0;
                func_001396b0(v0_5);
                if (((s32)(*(u32*)((v0_5 + 0x190))) != 0)) {
                    func_0031a260(v0_5, 0);
                }
            }
            func_00139620(*(u32*)(s1));
            func_00139660(*(u32*)(s1));
            v0_6 = func_00139688(*(u32*)(s1));
            s1 = (s1 + 4);
            s2 = (s2 + 4);
            s3 = (s3 + 1);
        } while (((s32)(((s32)(s3) < (s32)(4))) != 0));
        if ((s4 == 2)) {
            *(u32*)(&D_0035f3d4) = *(u32*)(((u32)frame + 4));
        }
        s4 = (s4 + 1);
    } while (((s32)(s4) < (s32)(3)));
    return v0_6;
}
