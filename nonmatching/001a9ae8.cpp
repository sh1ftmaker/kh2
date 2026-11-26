// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00349e10 asm("D_00349e10");
extern "C" u32 func_00192a80(u32) asm("func_00192a80");
extern "C" u32 func_001a9c20(u32, u32, u32) asm("func_001a9c20");
extern "C" u32 func_001aa6f0(u32, u32) asm("func_001aa6f0");
extern "C" void func_001a9a28(u32, u32, u32, u32) asm("func_001a9a28");
extern "C" void func_001aa7f0(u32, u32, u32, u32) asm("func_001aa7f0");
extern "C" void func_001aa850(u32, u32) asm("func_001aa850");
extern "C" void func_001aa980(u32) asm("func_001aa980");
extern "C" void func_001b7f30(u32) asm("func_001b7f30");

// 0x001a9ae8 YS::MESSAGEDRAW::draw(int, int, unsigned int)
void lift_001a9ae8(u32 a0, u32 a1, u32 a2, u32 a3) asm("_ZN2YS11MESSAGEDRAW4drawEiij");
void lift_001a9ae8(u32 a0, u32 a1, u32 a2, u32 a3) {
    u8 frame[96];
    u32 s1;
    u32 s1_0;
    *(u32*)(((u32)frame + 0x50)) = a1;
    *(u32*)(((u32)frame + 0x54)) = a2;
    if (((s32)(*(u32*)((a0 + 0xc))) != 0)) {
        s1 = *(u32*)((a0 + 0xc));
        func_001aa7f0((u32)frame, *(u32*)((a0 + 4)), a2, a3);
        func_001a9a28(*(u32*)((a0 + 0x58)), a0 + 0x10, (u32)frame + 0x50, (u32)frame + 0x54);
        *(f32*)((a0 + 0x1c)) = (*(f32*)((a0 + 0x1c)) + *(f32*)(&D_00349e10));
        *(u32*)((a0 + 0x3c)) = a3;
        *(u32*)((a0 + 0x44)) = ((*(u32*)(((u32)frame + 0x50)) << 4) + 0x7000);
        *(u32*)((a0 + 0x48)) = ((*(u32*)(((u32)frame + 0x54)) << 4) + 0x7300);
        *(u32*)(((u32)frame + 8)) = ((*(u32*)(((u32)frame + 0x50)) << 4) + 0x7000);
        *(u32*)(((u32)frame + 0xc)) = ((*(u32*)(((u32)frame + 0x54)) << 4) + 0x7300);
        *(u32*)(((u32)frame + 0x10)) = a3;
        *(f32*)(((u32)frame + 0x18)) = (*(f32*)((a0 + 0x1c)) + *(f32*)(&D_00349e10));
        *(u32*)(((u32)frame + 0x1c)) = 0;
        *(u32*)(((u32)frame + 0x20)) = *(u32*)((a0 + 0x24));
        *(u32*)(((u32)frame + 0x24)) = *(u32*)((a0 + 0x28));
        *(u32*)(((u32)frame + 0x28)) = *(u32*)((a0 + 0x2c));
        *(u32*)(((u32)frame + 0x2c)) = *(u32*)((a0 + 0x30));
        *(u32*)(((u32)frame + 0x30)) = *(u32*)((a0 + 0x34));
        *(u32*)(((u32)frame + 0x34)) = *(u32*)((a0 + 0x38));
        *(u32*)(((u32)frame + 0x50)) = ((*(u32*)(((u32)frame + 0x50)) << 4) + 0x7000);
        *(u32*)(((u32)frame + 0x54)) = ((*(u32*)(((u32)frame + 0x54)) << 4) + 0x7300);
        *(u32*)(((u32)frame + 0x14)) = func_001aa6f0(a0, 0x60000000);
        do {
            func_001aa850((u32)frame, func_00192a80(s1));
            s1_0 = func_001a9c20(a0, (u32)frame, s1);
            func_001aa980((u32)frame);
            s1 = s1_0;
        } while (((s32)(s1) != 0));
        func_001b7f30((u32)frame + 0x40);
    }
    return;
}
