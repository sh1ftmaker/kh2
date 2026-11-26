// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01d48cb0 asm("D_01d48cb0");
extern "C" u32 func_001b5588(u32) asm("func_001b5588");
extern "C" u32 func_001b5858(u32) asm("func_001b5858");
extern "C" u32 func_001b5cb8(u32) asm("func_001b5cb8");
extern "C" u32 func_001b9bc8(u32) asm("func_001b9bc8");
extern "C" void func_0016c7d8(u32) asm("func_0016c7d8");
extern "C" void func_0016cab8(u32) asm("func_0016cab8");
extern "C" void func_001b57f8(u32) asm("func_001b57f8");
extern "C" void func_001c9770() asm("func_001c9770");
extern "C" void func_001c9b90() asm("func_001c9b90");
extern "C" void func_001d1c70(u32) asm("func_001d1c70");
extern "C" void func_001d1ed0(u32) asm("func_001d1ed0");
extern "C" void func_001de450(u32) asm("func_001de450");

// 0x001b5460 func_001b5460
u32 func_001b5460(u32 a0) asm("_ZN2YS5LIMIT7destroyEv");
u32 func_001b5460(u32 a0) {
    u32 s0;
    u32 v0;
    u32 s0_0;
    if ((func_001b5858(a0) == 0)) {
        if ((func_001b5cb8(a0) == 0)) {
            s0 = 0;
            while ((v0 = func_001b9bc8(s0)), ((s32)(v0) != 0)) {
                if ((((u32(*)(u32))(*(u32*)((*(u32*)(v0) + 0x3c))))(v0) != 0x1388)) {
                    s0 = v0;
                    continue;
                }
                ((void(*)(u32))(*(u32*)((*(u32*)(v0) + 0x28))))(v0);
                s0 = v0;
            }
        }
    }
    if ((*(u32*)((a0 + 0x34)) != 0)) {
        s0_0 = *(u32*)((a0 + 0x34));
        func_0016cab8(*(u32*)((a0 + 0x34)));
        func_0016c7d8(s0_0);
        *(u32*)((a0 + 0x34)) = 0;
    }
    if (((s32)(*(u32*)((a0 + 0x18))) != 0)) {
        func_001de450(a0 + 0x18);
    }
    if (((s32)(func_001b5858(a0)) == 0)) {
        if (((s32)((*(u32*)((a0 + 0x40)) & 0x10)) != 0)) {
            func_001c9770();
        } else {
            func_001c9b90();
        }
    }
    func_001d1c70(a0 + 0x68);
    func_001d1ed0(a0 + 0xa8);
    func_001b57f8(a0);
    return func_001b5588(*(u32*)(&D_01d48cb0));
}
