// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 D_0035dcfc asm("D_0035dcfc");
extern "C" f32 func_00227c78(u32) asm("func_00227c78");
extern "C" u32 func_002282f0(u32) asm("func_002282f0");
extern "C" u32 func_0022f6b8(u32, u32) asm("func_0022f6b8");
extern "C" void func_0016adc8(u32, u32) asm("func_0016adc8");
extern "C" void func_001ba028(u32) asm("func_001ba028");

// 0x0022f7c0 func_0022f7c0
// minilink-rodata 0x00371220   (float literals live here in the original)
u32 func_0022f7c0(u32 a0) asm("_ZN2sa5EVENT16set_bin_seq_posiERNS_12BIN_SEQ_POSIEP4TASK");
u32 func_0022f7c0(u32 a0) {
    u32 v0;
    f32 loc_2c;
    u32 t3;
    u32 t4;
    u32 t7;
    u32 s0;
    Q16 loc_0;
    f32 loc_20;
    f32 loc_24;
    f32 loc_28;
    v0 = func_002282f0(*(u16*)((a0 + 0x26)));
    if (((s32)(v0) == 0)) {
        if ((*(s16*)((a0 + 4)) == 0)) {
            t3 = 0;
            t4 = 0;
            t7 = *(u32*)(&D_0035dcfc);
            do {
                if (((s32)(*(u32*)((t4 + t7))) >= 0)) {
                    if ((*(s16*)((a0 + 0x24)) == *(u32*)(((t4 + t7) + 4)))) {
                        s0 = *(u32*)(((t4 + t7) + 8));
                        func_001ba028(*(u32*)(((t4 + t7) + 8)));
                        *(f32*)(&loc_0) = func_00227c78(a0 + 8);
                        *(f32*)(((u32)&loc_0 + 4)) = func_00227c78(a0 + 0xc);
                        func_00227c78(a0 + 0x10);
                        *(f32*)(((u32)&loc_0 + 0xc)) = 1.0f;
                        *(f32*)(((u32)&loc_0 + 8)) = func_00227c78(a0 + 0x10);
                        loc_20 = func_00227c78(a0 + 0x14);
                        loc_24 = func_00227c78(a0 + 0x18);
                        func_00227c78(a0 + 0x1c);
                        loc_2c = 1.0f;
                        loc_28 = func_00227c78(a0 + 0x1c);
                        *(Q16*)(((u32)&loc_2c + 4)) = loc_0;
                        func_0016adc8(s0, (u32)&loc_2c + 4);
                        return func_0022f6b8(s0, (u32)&loc_20);
                    }
                }
                t3 = (t3 + 1);
                t4 = (t4 + 0x28);
                t7 = *(u32*)(&D_0035dcfc);
            } while (((s32)(t7) != 0));
        }
    }
    return v0;
}
