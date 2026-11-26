// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_004f41d0 asm("D_004f41d0");
extern "C" u32 func_002f2d60(u32, u32) asm("func_002f2d60");
extern "C" void func_00166148(u32, u32, u32) asm("func_00166148");
extern "C" void func_002f25a0(u32, u32) asm("func_002f25a0");
extern "C" void func_002f2aa0(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_002f2aa0");
extern "C" void func_003058a0(u32) asm("func_003058a0");

// 0x001664c0 func_001664c0
void func_001664c0(u32 a0) asm("func_001664c0");
void func_001664c0(u32 a0) {
    u32 s1;
    u32 a2_0;
    u32 t2;
    u32 t3;
    u32 a2_1;
    u32 t2_2;
    u32 t3_3;
    if (((s32)(((u32)((*(u8*)(((a0 + 0x10) + 0x13)) + -6)) < (u32)(2))) == 0)) {
        s1 = ((a0 + 0x10) + *(u16*)(((a0 + 0x10) + 0xc)));
        func_00166148(a0, 0x2800, 0x3500);
        if ((*(u8*)(((a0 + 0x10) + 0x13)) != 4)) {
            if ((*(u8*)(((a0 + 0x10) + 0x13)) != 5)) {
                a2_0 = 0;
                t2 = 0;
                t3 = 0;
            } else {
                *(u8*)(((a0 + 0x10) + 0x13)) = 7;
                a2_0 = (*(u16*)(((a0 + 0x10) + 0x14)) >> 7);
                t2 = (*(u16*)(((a0 + 0x10) + 0x14)) >> 1);
                t3 = (*(u16*)(((a0 + 0x10) + 0x16)) >> 1);
            }
            a2_1 = a2_0;
            t2_2 = t2;
            t3_3 = t3;
        } else {
            *(u8*)(((a0 + 0x10) + 0x13)) = 6;
            a2_1 = (*(u16*)(((a0 + 0x10) + 0x14)) >> 7);
            t2_2 = (*(u16*)(((a0 + 0x10) + 0x14)) >> 1);
            t3_3 = (*(u16*)(((a0 + 0x10) + 0x16)) >> 2);
        }
        func_002f2aa0((u32)&D_004f41d0, 0x2800, (s32)((a2_1 << 0x10)) >> 0x10, 0, 0, 0, (s32)((t2_2 << 0x10)) >> 0x10, (s32)((t3_3 << 0x10)) >> 0x10);
        func_003058a0(0);
        func_002f25a0(0, 0);
        func_002f2d60((u32)&D_004f41d0, s1);
        return;
    } else {
        return;
    }
}
