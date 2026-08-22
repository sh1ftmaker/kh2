// coverage: addr=0x002330c8 symbol=func_002330c8 size=216 class=loop source=permute status=exact fuzzy=100.0
// coverage-alternatives: lift:near:97.78;m2c:near:80.25;ghidra:near:62.58
#include "common/types.h"

extern "C" u32 D_00371370 asm("D_00371370");
extern "C" u32 D_00371378 asm("D_00371378");
extern "C" u32 D_00371380 asm("D_00371380");
extern "C" u32 D_01dadbd8 asm("D_01dadbd8");
extern "C" void func_002feee8(u32, u32) asm("func_002feee8");
extern "C" void func_002ff3fc(u32) asm("func_002ff3fc");

// 0x002330c8 func_002330c8
u32 func_002330c8(u32 a0, u32 a1) asm("func_002330c8");
u32 func_002330c8(u32 a0, u32 a1) {
    u8 frame[48];
    u32 t6;
    u32 t4;
    u32 s1_0;
    u32 t5_1;
    u32 t7;
    *(u8*)(&D_01dadbd8) = 0;
    func_002feee8((u32)&D_01dadbd8, (u32)&D_00371370);
    t6 = 0;
    t4 = 0x2f;
    do {
        s1_0 = (a0 + t6);
        t5_1 = ((u32)frame + t6);
        t6 = (t6 + 1);
        t7 = *(s8*)(s1_0);
        *(u8*)(t5_1) = t7;
    } while ((t7 != t4));
    *(u8*)(t5_1) = 0;
    func_002feee8((u32)&D_01dadbd8, (u32)frame + 4);
    func_002feee8((u32)&D_01dadbd8, (u32)&D_00371378);
    func_002feee8((u32)&D_01dadbd8, a1);
    func_002feee8((u32)&D_01dadbd8, s1_0);
    func_002feee8((u32)&D_01dadbd8, (u32)&D_00371380);
    func_002ff3fc((u32)&D_01dadbd8);
    func_002ff3fc((u32)frame);
    return (u32)&D_01dadbd8;
}
