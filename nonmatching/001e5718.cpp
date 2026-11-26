// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0036e978 asm("D_0036e978");
extern "C" u32 D_0036e998 asm("D_0036e998");
extern "C" u32 D_0036e9d0 asm("D_0036e9d0");
extern "C" u32 D_0036ec40 asm("D_0036ec40");
extern "C" u32 D_0036ec58 asm("D_0036ec58");
extern "C" u32 D_0036ec70 asm("D_0036ec70");
extern "C" u32 func_001e3650(u32, u32, u32) asm("func_001e3650");
extern "C" u32 func_001e3660(u32, u32) asm("func_001e3660");
extern "C" void func_001e52b8(u32, u32) asm("func_001e52b8");
extern "C" void func_002fdfc8(u32, u32, u32) asm("func_002fdfc8");

// 0x001e5718 func_001e5718
void func_001e5718(u32 a0, u32 a1, u32 a2) asm("func_001e5718");
void func_001e5718(u32 a0, u32 a1, u32 a2) {
    u32 v0;
    u32 s1;
    u32 s4;
    u32 a2_0;
    u32 s3;
    u32 s6;
    u32 a2_1;
    u32 a2_2;
    u32 t7;
    if (((s32)(a0) != 0)) {
        v0 = func_001e3660(func_001e3650(a0, a1, a2), 1);
        if (((s32)(*(u32*)(v0)) > 0)) {
            s1 = 0;
            s4 = 0;
            do {
                s3 = *(u32*)(((v0 + (s1 * 4)) + 4));
                s6 = *(u32*)(v0);
                if (((s32)((*(u32*)(((v0 + (s1 * 4)) + 4)) & 0xf)) != 0)) {
                    func_002fdfc8((u32)&D_0036e978, (u32)&D_0036ec40, a2_0);
                    func_002fdfc8((u32)&D_0036e998, (u32)&D_0036e9d0, 0x666);
                }
                if (((s32)(((s32)(((s32)(s1) >> 3)) < (s32)(0x10))) == 0)) {
                    func_002fdfc8((u32)&D_0036e978, (u32)&D_0036ec58, a2_1);
                    func_002fdfc8((u32)&D_0036e998, (u32)&D_0036e9d0, 0x667);
                }
                if (((s32)(((s32)(s1) >> 3)) < 0)) {
                    func_002fdfc8((u32)&D_0036e978, (u32)&D_0036ec70, a2_2);
                    func_002fdfc8((u32)&D_0036e998, (u32)&D_0036e9d0, 0x667);
                }
                if (((s32)((s1 & 7)) == 0)) {
                    s4 = *(u8*)((a1 + ((s32)(s1) >> 3)));
                    t7 = (*(u8*)((a1 + ((s32)(s1) >> 3))) & 1);
                } else {
                    t7 = (s4 & 1);
                }
                if (((s32)((t7 & 0xff)) != 0)) {
                    func_001e52b8(s3, (s32)((a2 << 0x10)) >> 0x10);
                }
                s1 = (s1 + 1);
                s4 = (s4 >> 1);
            } while (((s32)(((s32)(s1) < (s32)(s6))) != 0));
        }
    }
    return;
}
