// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_003a99f0 asm("D_003a99f0");
extern "C" u32 func_00132018(u32) asm("func_00132018");
extern "C" u32 func_00132c98(u32) asm("func_00132c98");
extern "C" u32 func_00132cd0(u32) asm("func_00132cd0");
extern "C" u32 func_00132d00(u32) asm("func_00132d00");
extern "C" u32 func_00132d30(u32) asm("func_00132d30");
extern "C" u32 func_00132d60(u32) asm("func_00132d60");
extern "C" u32 func_00132d90(u32, u32) asm("func_00132d90");
extern "C" u32 func_00132f98(u32, u32, u32, u32, u32) asm("func_00132f98");
extern "C" u32 func_00133c60(u32, u32, u32, u32, u32) asm("func_00133c60");
extern "C" void func_001094e0(u32, u32) asm("func_001094e0");
extern "C" void func_00109708(u32) asm("func_00109708");
extern "C" void func_00109788(u32, u32) asm("func_00109788");
extern "C" void func_001097e8(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_001097e8");

// 0x001217a0 func_001217a0
u32 func_001217a0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) asm("_ZN2kn8ModelSKL10setTextureEPNS_16Vif1PacketBufferEiPNS_13AnimationWorkEPNS_7TextureE");
u32 func_001217a0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) {
    u32 loc_14;
    u32 loc_10;
    u32 s1;
    u32 v0;
    u32 s5;
    u32 s7;
    u32 s5_0;
    u32 s0;
    u32 s2;
    u32 s1_1;
    u32 s4;
    u32 s3;
    u32 loc_0;
    loc_10 = (a4 + (*(u32*)((a4 + 0x14)) + ((*(u8*)(((a4 + *(u32*)((a4 + 0x10))) + *(u32*)((((a2 << 5) + *(u32*)((a0 + 4))) + 0x24)))) * 0x90) + 0x90)));
    loc_14 = (a4 + (*(u32*)((a4 + 0x18)) + (*(u32*)((((a2 << 5) + *(u32*)((a0 + 4))) + 0x24)) * 0xa0)));
    s1 = ((a2 << 5) + *(u32*)((a0 + 4)));
    func_00109788(a1, a4 + *(u32*)((a4 + 0x14)));
    func_00109708(a1);
    func_00109788(a1, loc_10);
    v0 = func_00132f98(a3, *(u32*)((s1 + 0x24)), (u32)&D_003a99f0, 0x3c00, func_00132018(a4));
    if (((s32)(v0) > 0)) {
        s5 = *(u32*)((u32)&D_003a99f0);
        s7 = (u32)&D_003a99f0;
        do {
            s5_0 = *(u32*)(s7);
            if (((s32)(func_00132d90(*(u32*)(s7), 0)) != 0)) {
                s0 = func_00132c98(s5_0);
                s2 = func_00132cd0(s5_0);
                s1_1 = func_00132d00(s5_0);
                s4 = func_00132d30(s5_0);
                s3 = func_00132d60(s5_0);
                loc_0 = func_00132d90(s5_0, 0);
                func_001097e8(s0, (s32)((*(u64*)((loc_10 + 0x20)) & (u64)(0x3fff))), (s32)(((*(u64*)((loc_14 + 0x70)) & 0xfc000) << 0x12)), s2, s1_1, s4, s3, (s32)(((*(u64*)((loc_14 + 0x70)) & 0x3f00000) << 0xc)));
                func_00133c60(a1, s0, 0, 0, 0);
                func_001094e0(loc_10, s0);
            }
            s5 = s5_0;
            v0 = (v0 + -1);
            s7 = (s7 + 4);
        } while ((v0 != 0));
    }
    return func_00133c60(a1, loc_14, 0, 0, 0);
}
