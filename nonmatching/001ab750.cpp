// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0036d778 asm("D_0036d778");
extern "C" u32 func_001aaea8(u32, u32) asm("func_001aaea8");
extern "C" u32 func_001b80d8(u32) asm("func_001b80d8");
extern "C" void func_001b7e68(u32, u32) asm("func_001b7e68");
extern "C" void func_001b8010(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_001b8010");

// 0x001ab750 func_001ab750
u32 func_001ab750(u32 a0, u32 a1) asm("func_001ab750");
u32 func_001ab750(u32 a0, u32 a1) {
    u8 frame[64];
    u32 v0;
    func_001b7e68(a1, 8);
    v0 = func_001aaea8(a0, 0);
    *(u32*)((u32)frame) = 0x14;
    *(u64*)(((u32)frame + 8)) = 0x60;
    *(u32*)(((u32)frame + 0x10)) = 0x16;
    *(u64*)(((u32)frame + 0x18)) = *(u64*)(&D_0036d778);
    *(u32*)(((u32)frame + 0x20)) = 0x42;
    *(u64*)(((u32)frame + 0x28)) = 0x44;
    *(u64*)(((u32)frame + 0x30)) = 0xffff;
    func_001b8010(a1, 1, 0x47, 0x3000d, 0x3f, 0, 6, v0);
    return func_001b80d8(a1);
}
