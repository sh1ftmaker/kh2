// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f244 asm("D_0035f244");
extern "C" u32 D_0035f248 asm("D_0035f248");
extern "C" u32 D_0035f24c asm("D_0035f24c");
extern "C" u32 D_0035f24d asm("D_0035f24d");
extern "C" u32 D_0035f24e asm("D_0035f24e");
extern "C" void func_00106450(u32) asm("func_00106450");
extern "C" void func_00239870(u32) asm("func_00239870");
extern "C" void func_0031a840(u32) asm("func_0031a840");
extern "C" void func_0031abd8(u32) asm("func_0031abd8");

// 0x0027dd18 func_0027dd18
void func_0027dd18() asm("func_0027dd18");
void func_0027dd18() {
    u32 t7;
    u32 s3;
    u32 s0;
    u32 s0_0;
    u32 s0_1;
    u32 s0_2;
    if (((s32)(*(u32*)(&D_0035f244)) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035f244)) + 0x10))))(*(u32*)(&D_0035f244));
        *(u32*)(&D_0035f244) = 0;
    }
    if (((s32)(*(u32*)(&D_0035f248)) != 0)) {
        t7 = *(u32*)(&D_0035f248);
        s3 = (*(u32*)(&D_0035f248) + (*(u32*)((*(u32*)(&D_0035f248) + -4)) * 0x13fc));
        while ((t7 != s3)) {
            s3 = (s3 + -0x13fc);
            if (((s3 + -0x13fc) != 0xfffff138)) {
                s0 = ((s3 + -0x13fc) + 0x13e4);
                while ((s0 = (s0 + -0x1b4)), (((s3 + -0x13fc) + 0xec8) != s0)) {
                    ((void(*)(u32))(*(u32*)((*(u32*)(s0) + 0xc))))(s0);
                }
            }
            if (((s3 + -0x13fc) != 0xfffff654)) {
                s0_0 = ((s3 + -0x13fc) + 0xec8);
                while ((s0_0 = (s0_0 + -0x1b4)), (((s3 + -0x13fc) + 0x9ac) != s0_0)) {
                    ((void(*)(u32))(*(u32*)((*(u32*)(s0_0) + 0xc))))(s0_0);
                }
            }
            if (((s3 + -0x13fc) != 0xfffff984)) {
                s0_1 = ((s3 + -0x13fc) + 0x9ac);
                while ((s0_1 = (s0_1 + -0x198)), (((s3 + -0x13fc) + 0x67c) != s0_1)) {
                    ((void(*)(u32))(*(u32*)((*(u32*)(s0_1) + 0xc))))(s0_1);
                }
            }
            if (((s3 + -0x13fc) != 0xfffffcb4)) {
                s0_2 = ((s3 + -0x13fc) + 0x67c);
                while ((s0_2 = (s0_2 + -0x198)), (((s3 + -0x13fc) + 0x34c) != s0_2)) {
                    ((void(*)(u32))(*(u32*)((*(u32*)(s0_2) + 0xc))))(s0_2);
                }
            }
            func_0031abd8((s3 + -0x13fc) + 0x1b4);
            t7 = 0x340000;
            t7 = (t7 + 0x7e60);
            *(u32*)((s3 + -0x13fc)) = t7;
            func_00239870((s3 + -0x13fc) + 0x18);
            func_0031a840(s3 + -0x13fc);
            t7 = *(u32*)(&D_0035f248);
        }
        func_00106450(*(u32*)(&D_0035f248) + -4);
        *(u32*)(&D_0035f248) = 0;
    }
    *(u8*)(&D_0035f24c) = 0xffffffff;
    *(u8*)(&D_0035f24d) = 0xffffffff;
    *(u8*)(&D_0035f24e) = 0xffffffff;
    return;
}
