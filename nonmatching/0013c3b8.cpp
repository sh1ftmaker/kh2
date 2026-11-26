// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00348060 asm("D_00348060");
extern "C" u32 func_0013b5d0(u32, u32, u32, u32, u32, u32, u32, u32, f32) asm("func_0013b5d0");
extern "C" u32 func_0013b988(u32, u32, u32, u32, u32, u32) asm("func_0013b988");
extern "C" u32 func_0013bc40(u32, u32) asm("func_0013bc40");
extern "C" u32 func_0013ce08(u32, u32) asm("func_0013ce08");
extern "C" u32 func_00192048(u32) asm("func_00192048");
extern "C" u32 func_001b8e88(u32) asm("func_001b8e88");
extern "C" void func_0013bb58(u32, u32, u32, u32, u8, u32, u32) asm("func_0013bb58");
extern "C" void func_0013c080(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0013c080");
extern "C" void func_0013c190(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0013c190");

// 0x0013c3b8 func_0013c3b8
// minilink-rodata 0x0036ad48   (float literals live here in the original)
u32 func_0013c3b8(u32 a0, u32 a1, u32 a2, u32 a3, u8 a4) asm("_ZN2dk12COMMAND_DRAW15drawCommandPageEPN2YS12COMMAND_MENUEiib");
u32 func_0013c3b8(u32 a0, u32 a1, u32 a2, u32 a3, u8 a4) {
    u32 loc_1c;
    u32 loc_30;
    u32 loc_24;
    u32 loc_14;
    u32 loc_20;
    u32 s0;
    u32 loc_2c;
    u32 loc_28;
    u32 loc_44;
    u32 loc_40;
    u32 loc_34;
    u32 loc_38;
    u32 loc_3c;
    u32 fp;
    u32 s4;
    u32 s5;
    u32 s6;
    u8 loc_10;
    u32 v0;
    u32 loc_18;
    u32 t7;
    u32 s2;
    u32 s1;
    u32 loc_0;
    u32 loc_8;
    u32 v0_0;
    u32 v0_1;
    loc_1c = a2;
    loc_14 = 0;
    loc_20 = a3;
    loc_24 = a4;
    loc_30 = *(u32*)(a1);
    s0 = (loc_1c << 4);
    func_0013bb58(a0, a1, a2, a3, a4, loc_1c << 4, loc_30);
    loc_2c = 0xffffffc0;
    loc_28 = 0;
    if (((s32)(*(u32*)((a1 + 8))) > 0)) {
        loc_40 = (loc_1c << 2);
        loc_44 = (s0 + 0x1c);
        loc_34 = ((loc_1c << 2) + a0);
        loc_38 = ((((loc_30 * 0xc) + loc_20) << 2) + (u32)&D_00348060);
        loc_3c = ((((loc_30 * 0xc) + loc_20) << 2) + (u32)&D_00348060);
        fp = (0x19a - (*(u32*)((a1 + 8)) * 0x16));
        s4 = 0;
        s5 = a1;
        s6 = (a1 + 0xe);
        do {
            v0 = func_001b8e88(*(u16*)(s6));
            loc_10 = 0;
            loc_18 = 0xffffffff;
            if ((*(u32*)((loc_34 + 0xcc)) == s4)) {
                loc_10 = 1;
            }
            if ((loc_24 == 1)) {
                loc_10 = loc_24;
            }
            if ((*(u32*)((loc_34 + 0xdc)) != *(u32*)((a1 + 8)))) {
                loc_10 = 1;
            }
            if ((*(u32*)((a1 + 0x6c)) == s4)) {
                loc_28 = loc_44;
                loc_2c = fp;
            } else {
                t7 = (s4 == (*(u32*)((a1 + 8)) + -1)) ? *(u32*)((loc_38 + 0x24)) : *(u32*)((loc_3c + 0x18));
                loc_14 = t7;
                s2 = *(u8*)((s5 + 0x11));
                func_0013c080(a0, s5 + 0xc, loc_1c, loc_20, (u32)&loc_10, 2, (u32)&loc_14, (u32)&loc_18);
                s1 = func_00192048(*(u32*)((v0 + 8)));
                loc_0 = func_0013b988(a0, a1, s2, s4, 0, 0);
                loc_8 = 2;
                func_0013b5d0(a0, loc_1c, loc_14, s5 + 0xc, loc_10, loc_44, fp, s1, 1.0f);
                if ((loc_18 != 0xffffffff)) {
                    *(u32*)((func_0013b5d0(a0, loc_1c, loc_14, s5 + 0xc, loc_10, loc_44, fp, s1, 1.0f) + 0x188)) = loc_18;
                }
            }
            fp = (fp + 0x16);
            s4 = (s4 + 1);
            s5 = (s5 + 0xc);
            s6 = (s6 + 0xc);
        } while (((s32)(((s32)(s4) < (s32)(*(u32*)((a1 + 8))))) != 0));
    } else {
        loc_40 = (loc_1c << 2);
    }
    loc_0 = ((a1 + (*(u32*)((a1 + 0x6c)) * 0xc)) + 0xc);
    func_0013c190(a0, a1, loc_1c, loc_20, loc_24, loc_30, loc_28, loc_2c);
    *(u32*)(((loc_40 + a0) + 0xdc)) = *(u32*)((a1 + 8));
    v0_0 = func_0013bc40(a0, loc_1c);
    if (((s32)(v0_0) != 0)) {
        v0_1 = func_0013ce08(a0, *(u32*)((a1 + 8)));
        v0_0 = v0_1;
    }
    return v0_0;
}
