// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" void func_001a3188(u32, u32, u32) asm("func_001a3188");

// 0x00188958 YS::PARTRAM::set_item_max(int)
void lift_00188958(u32 a0, u32 a1) asm("_ZN2YS7PARTRAM12set_item_maxEi");
void lift_00188958(u32 a0, u32 a1) {
    u8 frame[16];
    u32 t6;
    u8 t5;
    u32 t6_0;
    u32 s0;
    u32 s0_1;
    u32 s1;
    u32 s0_2;
    u32 sp;
    t6 = *(u8*)((a0 + 0x12));
    t5 = (t6 & 0xff);
    if (((s32)(((s32)(t5) < (s32)(a1))) != 0)) {
        t6_0 = ((t5 << 1) + a0);
        do {
            *(u16*)((t6_0 + 0x34)) = 0;
            *(u16*)((t6_0 + 0x44)) = 0;
            s0 = (t5 + 1);
            t5 = s0;
            t6_0 = (t6_0 + 2);
        } while (((s32)(((s32)(s0) < (s32)(a1))) != 0));
    } else {
        if (((s32)(((s32)(a1) < (s32)((t6 & 0xff)))) != 0)) {
            s0_1 = a1;
            s1 = ((a1 << 1) + a0);
            do {
                if (((s32)(*(u16*)((s1 + 0x34))) != 0)) {
                    func_001a3188(*(u16*)((s1 + 0x34)), 0x64, 0);
                    *(u16*)((s1 + 0x34)) = 0;
                    t6 = *(u8*)((a0 + 0x12));
                }
                s0_2 = (s0_1 + 1);
                s0_1 = s0_2;
                s1 = (s1 + 2);
            } while (((s32)(((s32)(s0_2) < (s32)((t6 & 0xff)))) != 0));
        }
        sp = (u32)frame;
    }
    *(u8*)((a0 + 0x12)) = a1;
    return;
}
