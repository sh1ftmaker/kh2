// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00192048(u32) asm("func_00192048");
extern "C" u32 func_002570a0(u32) asm("func_002570a0");
extern "C" u32 func_00257770() asm("func_00257770");
extern "C" u32 func_002594b8(u32) asm("func_002594b8");
extern "C" u32 func_002632d0(u32) asm("func_002632d0");
extern "C" u32 func_00287cc0(u32) asm("func_00287cc0");
extern "C" void func_00192e50(u32, u32, u32, u32, u32) asm("func_00192e50");
extern "C" void func_002571e0(u32) asm("func_002571e0");
extern "C" void func_00257458(u32, u32) asm("func_00257458");

// 0x00261820 func_00261820
u32 func_00261820() asm("func_00261820");
u32 func_00261820() {
    u32 s1;
    u32 s2;
    u32 s3;
    u32 s0;
    s1 = func_00257770();
    s2 = func_002632d0(func_002570a0(0xa));
    s3 = func_00192048(0xb94f);
    s0 = func_00192048(func_002594b8(*(u8*)((s2 + 2))));
    func_00192e50(s3, s1 + 0xb290, 0xc0, s0, func_00192048(*(u16*)((s2 + 8))));
    func_00257458(s1 + 0xb290, 0);
    func_002571e0(1);
    return func_00287cc0(0);
}
