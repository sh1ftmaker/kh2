// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" f32 func_001a1e00(u32) asm("func_001a1e00");
extern "C" u32 func_00155ab0(u32, u32, u32) asm("func_00155ab0");
extern "C" u32 func_00155b58(u32, u32, f32) asm("func_00155b58");
extern "C" u32 func_00155f40(u32) asm("func_00155f40");
extern "C" u32 func_00158250(u32) asm("func_00158250");
extern "C" u32 func_001a1de0(u32) asm("func_001a1de0");
extern "C" void func_00138c10(u32, u32) asm("func_00138c10");
extern "C" void func_001395a8(u32) asm("func_001395a8");
extern "C" void func_00156540(u32) asm("func_00156540");
extern "C" void func_001565a8(u32) asm("func_001565a8");

// 0x00157ae0 func_00157ae0
// minilink-rodata 0x0036b300   (float literals live here in the original)
u32 func_00157ae0(u32 a0) asm("_ZN2dk12GAUGE_PLAYER8updateMPEv");
u32 func_00157ae0(u32 a0) {
    u32 s0;
    u32 s0_0;
    u32 s0_1;
    f32 f20;
    if (((s32)(func_001a1de0(*(u32*)((*(u32*)((a0 + 0x34)) + 0x48c)))) == 0)) {
        if (((s32)(func_00158250(a0)) != 0)) {
            s0 = (a0 + 0x2710);
            func_00138c10(a0 + 0x2d80, func_00155f40(a0));
            func_00138c10(s0, 0x74);
            func_00138c10(a0 + 0x28ac, 0x77);
            func_00138c10(a0 + 0x2a48, 0x73);
            func_00138c10(a0 + 0x2be4, 0x78);
            *(u32*)((s0 + 0x188)) = 0x75;
            func_001565a8(a0);
        }
        s0_0 = *(u32*)((*(u32*)((*(u32*)((a0 + 0x34)) + 0x48c)) + 0x180));
        func_00155ab0(a0, *(u32*)((*(u32*)((*(u32*)((a0 + 0x34)) + 0x48c)) + 0x184)), 9);
        return func_00155ab0(a0, s0_0, 0xa);
    } else {
        if (((s32)(func_00158250(a0)) != 0)) {
            s0_1 = (a0 + 0x2710);
            func_00138c10(a0 + 0x2d80, func_00155f40(a0));
            func_00138c10(s0_1, 0x6e);
            func_00138c10(a0 + 0x28ac, 0x71);
            func_00138c10(a0 + 0x2a48, 0x6d);
            func_00138c10(a0 + 0x2be4, 0x72);
            *(u32*)((s0_1 + 0x188)) = 0x6f;
            func_00156540(a0);
        } else {
            if ((func_00155f40(a0) == 0x1a)) {
                func_001395a8(a0 + 0x52c);
            }
        }
        f20 = func_001a1e00(*(u32*)((*(u32*)((a0 + 0x34)) + 0x48c)));
        func_00155b58(a0, 9, 1.0f);
        return func_00155b58(a0, 0xa, f20);
    }
}
