// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034d850 asm("D_0034d850");
extern "C" u32 func_001ddd88(u32) asm("func_001ddd88");
extern "C" void func_00105110(u32) asm("func_00105110");
extern "C" void func_0017eb98(u32) asm("func_0017eb98");
extern "C" void func_00187b90(u32) asm("func_00187b90");
extern "C" void func_001a17c8(u32) asm("func_001a17c8");
extern "C" void func_001a6d68(u32) asm("func_001a6d68");
extern "C" void func_001a9350(u32) asm("func_001a9350");
extern "C" void func_001b3098(u32) asm("func_001b3098");
extern "C" void func_001b78b8(u32) asm("func_001b78b8");
extern "C" void func_002cb708(u32) asm("func_002cb708");

// 0x0016a420 func_0016a420
u32 func_0016a420(u32 a0) asm("func_0016a420");
u32 func_0016a420(u32 a0) {
    u32 s0;
    *(u32*)(a0) = (u32)&D_0034d850;
    if (((s32)(*(u32*)((a0 + 0x48c))) != 0)) {
        func_001a17c8(*(u32*)((a0 + 0x48c)));
    }
    if (((s32)(*(u32*)((a0 + 0x828))) != 0)) {
        func_001b78b8(*(u32*)((a0 + 0x828)));
    }
    if (((s32)(*(u32*)((a0 + 0x510))) != 0)) {
        func_001b78b8(*(u32*)((a0 + 0x510)));
    }
    if (((s32)(*(u32*)((a0 + 0x508))) != 0)) {
        s0 = *(u32*)((a0 + 0x508));
        func_002cb708(*(u32*)((a0 + 0x508)));
        func_00105110(s0);
    }
    func_001b3098(a0 + 0x800);
    func_001a9350(a0 + 0x7a0);
    func_001a6d68(a0 + 0x500);
    func_00187b90(a0 + 0x300);
    func_0017eb98(a0 + 0x140);
    func_001ddd88(a0 + 0x9c);
    return func_001ddd88(a0 + 0x80);
}
