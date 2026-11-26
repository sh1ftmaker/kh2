// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00347e40 asm("D_00347e40");
extern "C" u32 D_00347e60 asm("D_00347e60");
extern "C" u32 D_00347f98 asm("D_00347f98");
extern "C" u32 func_00239700(u32) asm("func_00239700");
extern "C" void func_0031a838(u32) asm("func_0031a838");

// 0x00323fd8 func_00323fd8
u32 func_00323fd8(u32 a0) asm("func_00323fd8");
u32 func_00323fd8(u32 a0) {
    u32 fp;
    u32 s5;
    u32 s4;
    u32 s3;
    u32 s2;
    u32 s1;
    *(u32*)(a0) = (u32)&D_00347f98;
    func_0031a838(a0 + 0xc);
    *(u32*)(a0) = (u32)&D_00347e60;
    func_00239700(a0 + 0x18);
    *(u32*)((a0 + 0x198)) = 0;
    *(u32*)((a0 + 0x1b4)) = (u32)&D_00347f98;
    *(u32*)(a0) = (u32)&D_00347e40;
    func_0031a838(a0 + 0x1c0);
    *(u32*)((a0 + 0x1b4)) = (u32)&D_00347e60;
    func_00239700(a0 + 0x1cc);
    *(u32*)(((a0 + 0x1b4) + 0x198)) = 0;
    *(u32*)((a0 + 0x1b4)) = (u32)&D_00347e40;
    *(u32*)((a0 + 0x368)) = (u32)&D_00347f98;
    func_0031a838(a0 + 0x374);
    *(u32*)((a0 + 0x368)) = (u32)&D_00347e60;
    func_00239700(a0 + 0x380);
    *(u32*)(((a0 + 0x368) + 0x198)) = 0;
    *(u32*)((a0 + 0x368)) = (u32)&D_00347e40;
    *(u32*)((a0 + 0x51c)) = (u32)&D_00347f98;
    func_0031a838(a0 + 0x528);
    *(u32*)((a0 + 0x51c)) = (u32)&D_00347e60;
    func_00239700(a0 + 0x534);
    *(u32*)(((a0 + 0x51c) + 0x198)) = 0;
    *(u32*)((a0 + 0x51c)) = (u32)&D_00347e40;
    fp = 4;
    do {
        u32 cse0 = (a0 + ((fp - 4) * -0x1b4)) + 0x6d0;
        *(u32*)(cse0) = (u32)&D_00347f98;
        func_0031a838(cse0 + 0xc);
        u32 cse1 = (a0 + ((fp - 4) * -0x1b4)) + 0x6d0;
        *(u32*)(cse1) = (u32)&D_00347e60;
        func_00239700(cse1 + 0x18);
        *(u32*)((((a0 + ((fp - 4) * -0x1b4)) + 0x6d0) + 0x198)) = 0;
        *(u32*)(((a0 + ((fp - 4) * -0x1b4)) + 0x6d0)) = (u32)&D_00347e40;
        fp = (fp + -1);
    } while ((fp != 0xffffffff));
    s5 = (u32)&D_00347f98;
    s4 = (u32)&D_00347e60;
    s3 = (u32)&D_00347e40;
    s2 = 0xffffffff;
    s1 = 4;
    do {
        *(u32*)(((a0 + ((s1 - 4) * -0x1b4)) + 0xf54)) = s5;
        func_0031a838(((a0 + ((s1 - 4) * -0x1b4)) + 0xf54) + 0xc);
        *(u32*)(((a0 + ((s1 - 4) * -0x1b4)) + 0xf54)) = s4;
        func_00239700(((a0 + ((s1 - 4) * -0x1b4)) + 0xf54) + 0x18);
        *(u32*)(((a0 + ((s1 - 4) * -0x1b4)) + 0xf54)) = s3;
        *(u32*)((((a0 + ((s1 - 4) * -0x1b4)) + 0xf54) + 0x198)) = 0;
        s1 = (s1 + -1);
    } while ((s1 != s2));
    *(u32*)((a0 + 0x17e4)) = 0;
    *(u32*)((a0 + 0x17d8)) = (u32)&D_00347e60;
    func_00239700(a0 + 0x17f0);
    *(u32*)((a0 + 0x1970)) = (u32)&D_00347e60;
    *(u32*)((a0 + 0x197c)) = 0;
    return func_00239700(a0 + 0x1988);
}
