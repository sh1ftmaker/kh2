// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034d8a0 asm("D_0034d8a0");
extern "C" u32 D_0034d8a4 asm("D_0034d8a4");
extern "C" u32 func_0016cab8(u32) asm("func_0016cab8");
extern "C" void func_0016c8f8(u32, u32, u32, u32, u32) asm("func_0016c8f8");
extern "C" void func_0016cd48(u32, u32) asm("func_0016cd48");
extern "C" void func_001da458(u32, u32, u32, u32) asm("func_001da458");

// 0x0016cc18 func_0016cc18
u32 func_0016cc18(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) asm("func_0016cc18");
u32 func_0016cc18(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) {
    u8 frame[64];
    u32 s0;
    u32 s1;
    func_0016c8f8((u32)frame, *(u32*)(a0), *(u32*)((a0 + 0x34)), *(u32*)((a0 + 0x38)), a4);
    *(u32*)(((u32)frame + 0x1c)) = (*(u32*)(((u32)frame + 0x1c)) | 1);
    s0 = *(u32*)(&D_0034d8a4);
    s1 = *(u32*)(&D_0034d8a0);
    if (((s32)(a1) > 0)) {
        func_001da458((u32)frame, a1, a2, a3);
        func_0016cd48((u32)frame, a4 ? a4 : a0);
    }
    *(u32*)(&D_0034d8a4) = s0;
    *(u32*)(&D_0034d8a0) = s1;
    return func_0016cab8((u32)frame);
}
