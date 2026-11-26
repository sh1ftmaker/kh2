// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00347e60 asm("D_00347e60");
extern "C" u32 D_00347f98 asm("D_00347f98");
extern "C" u32 D_0035eb98 asm("D_0035eb98");
extern "C" u32 D_00361a90 asm("D_00361a90");
extern "C" u32 D_00361aa0 asm("D_00361aa0");
extern "C" f32 func_0023c4b8(u32, u32) asm("func_0023c4b8");
extern "C" u32 func_001708f8(u32, u32) asm("func_001708f8");
extern "C" u32 func_00236ca8(u32, u32) asm("func_00236ca8");
extern "C" u32 func_0023aa98(u32) asm("func_0023aa98");
extern "C" u32 func_0023f1b0(u32) asm("func_0023f1b0");
extern "C" u32 func_0023f848(u32) asm("func_0023f848");
extern "C" u32 func_0023f908(u32, u32) asm("func_0023f908");
extern "C" u32 func_0023f948(u32, u32) asm("func_0023f948");
extern "C" u32 func_002beb90() asm("func_002beb90");
extern "C" u32 func_002c1460(u32, u32) asm("func_002c1460");
extern "C" void func_001386e0(u32, u32, u32, u32, u32, u32) asm("func_001386e0");
extern "C" void func_00138c68(u32, u32, u32) asm("func_00138c68");
extern "C" void func_001391c8(u32, u32, u32) asm("func_001391c8");
extern "C" void func_00139570(u32) asm("func_00139570");
extern "C" void func_00139660(u32) asm("func_00139660");
extern "C" void func_00139688(u32) asm("func_00139688");
extern "C" void func_001396b0(u32) asm("func_001396b0");
extern "C" void func_002369a0(u32) asm("func_002369a0");
extern "C" void func_00239700(u32) asm("func_00239700");
extern "C" void func_0023c008(u32) asm("func_0023c008");
extern "C" void func_0023eea0(u32, u32, u32, u32, u32, u32) asm("func_0023eea0");
extern "C" void func_0023ef50(u32) asm("func_0023ef50");
extern "C" void func_0023f0c8(u32, u32) asm("func_0023f0c8");
extern "C" void func_0023f800(u32) asm("func_0023f800");
extern "C" void func_0023fa08(u32, u32) asm("func_0023fa08");
extern "C" void func_0031a260(u32, u32) asm("func_0031a260");
extern "C" void func_0031a838(u32) asm("func_0031a838");

// 0x002c0ca0 func_002c0ca0
u32 func_002c0ca0(u32 a0) asm("_ZN2dk13WM_TOTAL_INFOC1Ev");
u32 func_002c0ca0(u32 a0) {
    u8 frame[48];
    u32 s3;
    u32 s2;
    u32 s1;
    u32 s6;
    u32 s3_0;
    u32 s2_1;
    u32 s1_2;
    u32 v0;
    u32 s2_3;
    u32 s0;
    f32 fp;
    u32 v0_4;
    u32 s7;
    u32 s5;
    u32 s3_5;
    u32 s7_6;
    u32 s7_7;
    u32 s2_8;
    u32 s7_9;
    *(u32*)((a0 + 0x1c)) = (u32)&D_00347f98;
    *(u32*)(a0) = (u32)&D_00361aa0;
    *(u32*)((a0 + 0xc)) = 0;
    *(u32*)((a0 + 0x18)) = 0;
    *(u32*)(((u32)frame + 0x20)) = (a0 + 0xc0);
    func_0031a838(a0 + 0x28);
    *(u32*)((a0 + 0x1c)) = (u32)&D_0035eb98;
    func_002369a0(a0 + 0x34);
    func_0023c008(a0 + 0x4c);
    *(u32*)((a0 + 0xbc)) = 0;
    *(u32*)((a0 + 0xcc)) = 0;
    *(u32*)((a0 + 0xc0)) = (u32)&D_00347e60;
    func_00239700(a0 + 0xd8);
    s3 = 0xffffffff;
    s2 = (u32)&D_00347e60;
    s1 = 2;
    do {
        *(u32*)((((a0 + ((s1 - 2) * -0x198)) + 0x258) + 0xc)) = 0;
        *(u32*)(((a0 + ((s1 - 2) * -0x198)) + 0x258)) = s2;
        func_00239700(((a0 + ((s1 - 2) * -0x198)) + 0x258) + 0x18);
        s1 = (s1 + -1);
    } while ((s1 != s3));
    *(u32*)((a0 + 0x72c)) = 0;
    *(u32*)((a0 + 0x720)) = (u32)&D_00347e60;
    func_00239700(a0 + 0x738);
    s6 = (a0 + 0x720);
    s3_0 = (u32)&D_00347e60;
    s2_1 = 0xffffffff;
    s1_2 = 1;
    do {
        *(u32*)((((a0 + ((s1_2 - 1) * -0x198)) + 0x8b8) + 0xc)) = 0;
        *(u32*)(((a0 + ((s1_2 - 1) * -0x198)) + 0x8b8)) = s3_0;
        func_00239700(((a0 + ((s1_2 - 1) * -0x198)) + 0x8b8) + 0x18);
        s1_2 = (s1_2 + -1);
    } while ((s1_2 != s2_1));
    *(u32*)(&D_00361a90) = a0;
    func_0023f800((u32)frame);
    *(u32*)(((u32)frame + 0x24)) = 2;
    v0 = func_001708f8(func_002beb90(), 0xffffffff);
    *(u32*)((a0 + 0xbc)) = v0;
    func_0023fa08((u32)frame, v0);
    s2_3 = func_0023f948((u32)frame, 0);
    s0 = func_0023f908((u32)frame, 0);
    func_0023eea0(a0 + 0x1c, 0x7595, s2_3, s0, func_002c1460(a0, 0), 0);
    func_0023ef50(a0 + 0x1c);
    func_0023f0c8(a0 + 0x1c, func_002c1460(a0, 2));
    func_00139570(a0 + 0x1c);
    fp = func_0023c4b8(func_0023f1b0(a0 + 0x1c), 1);
    v0_4 = func_00236ca8(*(u32*)((func_0023f1b0(a0 + 0x1c) + 0x28)), 1);
    *(u32*)((a0 + 0xbe8)) = v0_4;
    func_001386e0(*(u32*)(((u32)frame + 0x20)), 0x7599, fp, v0_4, 0x4b, 0xc9);
    *(u32*)((*(u32*)(((u32)frame + 0x20)) + 0x188)) = 0x4c;
    s7 = 0;
    s5 = a0;
    s3_5 = (a0 + 0x258);
    do {
        func_001386e0(s3_5, 0x7599, fp, *(u32*)((a0 + 0xbe8)), 0x27, 0xc9);
        *(u32*)((s5 + 0x3e4)) = *(u32*)(((u32)frame + 0x20));
        func_001396b0(s3_5);
        if (((s32)(*(u32*)((s5 + 0x3e4))) != 0)) {
            *(u32*)((s5 + 0x3e8)) = 0;
            func_001396b0(s3_5);
            if (((s32)(*(u32*)((s5 + 0x3e8))) != 0)) {
                func_0031a260(s3_5, 0);
            }
        }
        *(u32*)(((u32)frame + 0x24)) = (*(u32*)(((u32)frame + 0x24)) + -1);
        func_00139660(s3_5);
        func_00139688(s3_5);
        func_00138c68(s3_5, s7, 0);
        func_001396b0(s3_5);
        s3_5 = (s3_5 + 0x198);
        s7_6 = (s7 + func_0023aa98(s5 + 0x270));
        s5 = (s5 + 0x198);
        s7 = s7_6;
    } while (((s32)(*(u32*)(((u32)frame + 0x24))) >= 0));
    func_001386e0(s6, 0x7599, fp, *(u32*)((a0 + 0xbe8)), 0x31, 0xc9);
    *(u32*)((s6 + 0x18c)) = *(u32*)(((u32)frame + 0x20));
    func_001396b0(s6);
    if (((s32)(*(u32*)((s6 + 0x18c))) != 0)) {
        *(u32*)((s6 + 0x190)) = 0;
        func_001396b0(s6);
        if (((s32)(*(u32*)((s6 + 0x190))) != 0)) {
            func_0031a260(s6, 0);
        }
    }
    func_00139660(s6);
    func_00139688(s6);
    func_00138c68(s6, s7, 0);
    func_001396b0(s6);
    s7_7 = (s7 + func_0023aa98(a0 + 0x738));
    s2_8 = 1;
    do {
        func_001386e0((a0 + ((s2_8 - 1) * -0x198)) + 0x8b8, 0x7599, fp, *(u32*)((a0 + 0xbe8)), 0x27, 0xc9);
        *(u32*)(((a0 + ((s2_8 - 1) * -0x198)) + 0xa44)) = *(u32*)(((u32)frame + 0x20));
        func_001396b0((a0 + ((s2_8 - 1) * -0x198)) + 0x8b8);
        if (((s32)(*(u32*)(((a0 + ((s2_8 - 1) * -0x198)) + 0xa44))) != 0)) {
            *(u32*)(((a0 + ((s2_8 - 1) * -0x198)) + 0xa48)) = 0;
            func_001396b0((a0 + ((s2_8 - 1) * -0x198)) + 0x8b8);
            if (((s32)(*(u32*)(((a0 + ((s2_8 - 1) * -0x198)) + 0xa48))) != 0)) {
                func_0031a260((a0 + ((s2_8 - 1) * -0x198)) + 0x8b8, 0);
            }
        }
        func_00139660((a0 + ((s2_8 - 1) * -0x198)) + 0x8b8);
        func_00139688((a0 + ((s2_8 - 1) * -0x198)) + 0x8b8);
        func_00138c68((a0 + ((s2_8 - 1) * -0x198)) + 0x8b8, s7_7, 0);
        func_001396b0((a0 + ((s2_8 - 1) * -0x198)) + 0x8b8);
        s7_9 = (s7_7 + func_0023aa98((a0 + ((s2_8 - 1) * -0x198)) + 0x8d0));
        s2_8 = (s2_8 + -1);
        s7_7 = s7_9;
    } while (((s32)(s2_8) >= 0));
    func_001391c8(a0, 0x7596, 0xc9);
    return func_0023f848((u32)frame);
}
