// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct Ac_u32 { u8 _p[0xc]; u32 m[1]; };
extern "C" u32 D_00348060 asm("D_00348060");
extern "C" u32 D_00348420 asm("D_00348420");
extern "C" u32 func_0013b5d0(u32, u32, u32, u32, u32, u32, u32, u32, f32) asm("func_0013b5d0");
extern "C" u32 func_0013b988(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0013b988");
extern "C" u32 func_0013b9e0(u32, u32) asm("func_0013b9e0");
extern "C" u32 func_0013bc40(u32, u32) asm("func_0013bc40");
extern "C" u32 func_0013bc50(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0013bc50");
extern "C" u32 func_00192048(u32) asm("func_00192048");
extern "C" u32 func_001b8e88(u32) asm("func_001b8e88");
extern "C" void func_0013c080(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0013c080");

// 0x0013c190 func_0013c190
// minilink-rodata 0x0036ad44   (float literals live here in the original)
u32 func_0013c190(u32 a0, u32 a1, u32 a2, u32 a3, u8 a4, u32 a5, u32 a6, u32 a7) asm("_ZN2dk12COMMAND_DRAW11drawCurrentEPN2YS12COMMAND_MENUEiibiiiPNS1_12COMMAND_SLOTE");
u32 func_0013c190(u32 a0, u32 a1, u32 a2, u32 a3, u8 a4, u32 a5, u32 a6, u32 a7) {
    u8 frame[48];
    u32 s4;
    u32 s6;
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    u32 v0_2;
    *(u32*)(((u32)frame + 0x1c)) = a6;
    *(u32*)(((u32)frame + 0x20)) = a7;
    s4 = *(u32*)((a1 + 0x6c));
    s6 = *(u32*)(((u32)frame + 0x80));
    v0 = func_0013b988(a0, a1, *(u8*)((*(u32*)(((u32)frame + 0x80)) + 5)), *(u32*)((a1 + 0x6c)), 1, 0, a6, a7);
    *(u8*)(((u32)frame + 0x10)) = 0;
    *(u32*)(((u32)frame + 0x24)) = (a2 << 2);
    if ((*(u32*)((((a2 << 2) + a0) + 0xdc)) != *(u32*)((a1 + 8)))) {
        *(u8*)(((u32)frame + 0x10)) = 1;
    }
    if ((*(u32*)((((a2 << 2) + a0) + 0xcc)) != s4)) {
        *(u8*)(((u32)frame + 0x10)) = 1;
    }
    *(u32*)(((u32)frame + 0x18)) = 0xffffffff;
    *(u32*)(((u32)frame + 0x14)) = ((Ac_u32*)&D_00348060)->m[((a5 * 0xc) + a3)];
    if ((a4 == 1)) {
        *(u8*)(((u32)frame + 0x10)) = a4;
        if (((s32)(*(u32*)(a1)) == 0) || (*(u32*)(a1) == 6)) {
            *(u32*)(((u32)frame + 0x14)) = *(u32*)(((a3 << 2) + (u32)&D_00348420));
        }
    }
    func_0013c080(a0, s6, a2, a3, (u32)frame + 0x10, 1, (u32)frame + 0x14, (u32)frame + 0x18);
    if (((s32)(func_0013bc40(a0, a2)) != 0)) {
        if (((s32)(func_0013b9e0(a0, a5)) != 0)) {
            *(u8*)(((u32)frame + 0x10)) = 1;
        }
    }
    v0_0 = func_001b8e88(*(u16*)((((s4 * 0xc) + a1) + 0xe)));
    *(u32*)((u32)frame) = v0;
    *(u32*)(((u32)frame + 8)) = 2;
    v0_1 = func_0013b5d0(a0, a2, *(u32*)(((u32)frame + 0x14)), s6, *(u8*)(((u32)frame + 0x10)), *(u32*)(((u32)frame + 0x1c)) + 8, *(u32*)(((u32)frame + 0x20)), func_00192048(*(u32*)((v0_0 + 8))), 1.0f);
    if ((*(u32*)(((u32)frame + 0x18)) != 0xffffffff)) {
        *(u32*)((v0_1 + 0x188)) = *(u32*)(((u32)frame + 0x18));
    }
    v0_2 = func_0013bc50(a0, a1, a2, a3, *(u8*)(((u32)frame + 0x10)), v0, v0_0, v0_1);
    *(u32*)(((*(u32*)(((u32)frame + 0x24)) + a0) + 0xcc)) = s4;
    return v0_2;
}
