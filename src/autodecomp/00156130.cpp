// coverage: addr=0x00156130 symbol=func_00156130 size=724 class=loop source=permute status=exact fuzzy=100.0
// coverage-alternatives: lift:near:95.36;ghidra:near:68.43;m2c:near:65.34
#include "common/types.h"

extern "C" u32 func_00155e30(u32) asm("func_00155e30");
extern "C" u32 func_00155ee8(u32, u32, u32, u32) asm("func_00155ee8");
extern "C" u32 func_00155f40(u32) asm("func_00155f40");
extern "C" u32 func_00155fc0(u32) asm("func_00155fc0");
extern "C" u32 func_00156030(u32) asm("func_00156030");
extern "C" u32 func_00156408(u32) asm("func_00156408");
extern "C" u32 func_0023aa18(u32) asm("func_0023aa18");
extern "C" u32 func_0023aa38(u32) asm("func_0023aa38");
extern "C" void func_001386e0(u32, u32, u32, u32, u32, u32) asm("func_001386e0");
extern "C" void func_00138c10(u32, u32) asm("func_00138c10");
extern "C" void func_00138c68(u32, u32, u32) asm("func_00138c68");
extern "C" void func_00139598(u32) asm("func_00139598");
extern "C" void func_001395e8(u32) asm("func_001395e8");
extern "C" void func_00139610(u32) asm("func_00139610");
extern "C" void func_001396b0(u32) asm("func_001396b0");
extern "C" void func_00139d78(u32) asm("func_00139d78");
extern "C" void func_0013dfb8(u32, u32, u32) asm("func_0013dfb8");
extern "C" void func_0014b200(u32, u32) asm("func_0014b200");
extern "C" void func_00158050(u32, u32, u32, u32, u32, u32, u32) asm("func_00158050");
extern "C" void func_0031a260(u32, u32) asm("func_0031a260");

// 0x00156130 func_00156130
u32 func_00156130(u32 a0, u32 a1, u32 a2, u32 a3) asm("func_00156130");
u32 func_00156130(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 loc_0;
    u32 v0;
    u32 loc_4;
    u32 loc_8;
    u32 v0_0;
    u32 s5;
    u32 s3;
    u32 fp;
    u32 s7;
    u32 s6;
    u32 s0;
    u32 s1;
    v0 = func_00155ee8(a0, a1, a2, a3);
    loc_0 = (a0 + 0x2d80);
    loc_4 = (a0 + 0x3260);
    func_00158050(loc_0, 0x1b58, a1, a2, v0, 0, a3);
    func_0013dfb8(loc_4, 0x1b58, a3);
    s5 = (a0 + 0x2f1c);
    v0_0 = func_00155fc0(a0);
    loc_8 = (a0 + 0x1a30);
    s3 = loc_0;
    func_00158050(s5, 0x1b58, a1, a2, v0_0, 0x1388, a3);
    fp = (a0 + 0x30b8);
    func_00158050(fp, 0x1b58, a1, a2, func_00155e30(a0), 0, a3);
    s7 = (a0 + 0x394);
    func_001386e0(s7, 0x1b62, a1, a2, 0x14, a3);
    func_00139d78(loc_4);
    func_0014b200(a0 + 0x3280, 0x1770);
    s6 = 2;
    do {
        *(u32*)((s3 + 0x18c)) = loc_8;
        func_001396b0(s3);
        if (((s32)(*(u32*)((s3 + 0x18c))) != 0)) {
            *(u32*)((s3 + 0x190)) = 0;
            func_001396b0(s3);
            if (((s32)(*(u32*)((s3 + 0x190))) != 0)) {
                func_0031a260(s3, 0);
            }
        }
        func_001395e8(s3);
        func_00139610(s3);
        s3 = (s3 + 0x19c);
        s6 = (s6 + -1);
    } while (((s32)(s6) >= 0));
    *(u32*)((s5 + 0x18c)) = loc_0;
    func_001396b0(s5);
    if (((s32)(*(u32*)((s5 + 0x18c))) != 0)) {
        *(u32*)((s5 + 0x190)) = 0;
        func_001396b0(s5);
        if (((s32)(*(u32*)((s5 + 0x190))) != 0)) {
            func_0031a260(s5, 0);
        }
    }
    *(u32*)((fp + 0x18c)) = loc_0;
    func_001396b0(fp);
    if (((s32)(*(u32*)((fp + 0x18c))) != 0)) {
        *(u32*)((fp + 0x190)) = 0;
        func_001396b0(fp);
        if (((s32)(*(u32*)((fp + 0x190))) != 0)) {
            func_0031a260(fp, 0);
        }
    }
    func_00139d78(loc_4);
    *(u32*)((loc_4 + 0x140)) = loc_0;
    *(u32*)((s7 + 0x18c)) = loc_0;
    func_001396b0(s7);
    if (((s32)(*(u32*)((s7 + 0x18c))) != 0)) {
        *(u32*)((s7 + 0x190)) = 0;
        func_001396b0(s7);
        if (((s32)(*(u32*)((s7 + 0x190))) != 0)) {
            func_0031a260(s7, 0);
        }
    }
    s0 = (a0 + 0x2d98);
    func_00139598(s7);
    s1 = func_0023aa18(s0);
    func_00138c68(fp, s1, func_0023aa38(s0));
    *(u32*)((loc_0 + 0x188)) = func_00155f40(a0);
    if (((s32)(func_00156030(a0)) != 0)) {
        func_00138c10(loc_0, 0x12);
        *(u32*)((loc_0 + 0x188)) = func_00155f40(a0);
    }
    return func_00156408(a0);
}
