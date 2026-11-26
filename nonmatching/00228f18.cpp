// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00347e60 asm("D_00347e60");
extern "C" u32 D_00347f80 asm("D_00347f80");
extern "C" u32 D_00347f98 asm("D_00347f98");
extern "C" u32 D_0035e070 asm("D_0035e070");
extern "C" u32 D_0035e0a8 asm("D_0035e0a8");
extern "C" u32 D_0035e0e0 asm("D_0035e0e0");
extern "C" u32 D_0035e114 asm("D_0035e114");
extern "C" u32 D_0035e190 asm("D_0035e190");
extern "C" u32 func_00224870() asm("func_00224870");
extern "C" u32 func_00224880() asm("func_00224880");
extern "C" u32 func_002294c8(u32, u32, u32, u32) asm("func_002294c8");
extern "C" void func_00239700(u32) asm("func_00239700");
extern "C" void func_0031a838(u32) asm("func_0031a838");

// 0x00228f18 func_00228f18
u32 func_00228f18() asm("func_00228f18");
u32 func_00228f18() {
    u32 v0;
    u32 s0;
    u32 s1;
    u32 s3;
    u32 s4;
    u32 s5;
    u32 v0_0;
    u32 s0_1;
    u32 s1_2;
    u32 s3_3;
    u32 s4_4;
    u32 s5_5;
    u32 v0_6;
    u32 s0_7;
    u32 s1_8;
    u32 s3_9;
    u32 s4_10;
    u32 s5_11;
    v0 = ((u32(*)(u32, u32, u32))(*(u32*)(*(u32*)(*(u32*)((*(u32*)(&D_00347f80) + 0x14))))))(*(u32*)((*(u32*)(&D_00347f80) + 0x14)), 0xb54, 0);
    *(u32*)(v0) = (u32)&D_0035e190;
    *(u32*)((v0 + 0xc)) = 0;
    s0 = (v0 + 0x18);
    s1 = 6;
    s3 = (u32)&D_00347e60;
    s4 = (u32)&D_00347f98;
    s5 = 0xffffffff;
    do {
        *(u32*)(s0) = s4;
        func_0031a838(s0 + 0xc);
        *(u32*)(s0) = s3;
        func_00239700(s0 + 0x18);
        s0 = (s0 + 0x198);
        s1 = (s1 + -1);
    } while ((s1 != s5));
    func_002294c8(v0, 3, func_00224870(), (u32)&D_0035e070);
    v0_0 = ((u32(*)(u32, u32, u32))(*(u32*)(*(u32*)(*(u32*)((*(u32*)(&D_00347f80) + 0x14))))))(*(u32*)((*(u32*)(&D_00347f80) + 0x14)), 0xb54, 0);
    *(u32*)(v0_0) = (u32)&D_00347f98;
    func_0031a838(v0_0 + 0xc);
    *(u32*)(v0_0) = (u32)&D_0035e190;
    s0_1 = (v0_0 + 0x18);
    s1_2 = 6;
    s3_3 = (u32)&D_00347e60;
    s4_4 = (u32)&D_00347f98;
    s5_5 = 0xffffffff;
    do {
        *(u32*)(s0_1) = s4_4;
        func_0031a838(s0_1 + 0xc);
        *(u32*)(s0_1) = s3_3;
        func_00239700(s0_1 + 0x18);
        s0_1 = (s0_1 + 0x198);
        s1_2 = (s1_2 + -1);
    } while ((s1_2 != s5_5));
    func_002294c8(v0_0, 3, func_00224880(), (u32)&D_0035e0a8);
    v0_6 = ((u32(*)(u32, u32, u32))(*(u32*)(*(u32*)(*(u32*)((*(u32*)(&D_00347f80) + 0x14))))))(*(u32*)((*(u32*)(&D_00347f80) + 0x14)), 0xb54, 0);
    *(u32*)(v0_6) = (u32)&D_00347f98;
    func_0031a838(v0_6 + 0xc);
    *(u32*)(v0_6) = (u32)&D_0035e190;
    s0_7 = (v0_6 + 0x18);
    s1_8 = 6;
    s3_9 = (u32)&D_00347e60;
    s4_10 = (u32)&D_00347f98;
    s5_11 = 0xffffffff;
    do {
        *(u32*)(s0_7) = s4_10;
        func_0031a838(s0_7 + 0xc);
        *(u32*)(s0_7) = s3_9;
        func_00239700(s0_7 + 0x18);
        s0_7 = (s0_7 + 0x198);
        s1_8 = (s1_8 + -1);
    } while ((s1_8 != s5_11));
    return func_002294c8(v0_6, 3, (u32)&D_0035e114, (u32)&D_0035e0e0);
}
