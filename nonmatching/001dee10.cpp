// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" void func_001e0158() asm("func_001e0158");
extern "C" void func_001e01b8(u32) asm("func_001e01b8");

// 0x001dee10 func_001dee10
void func_001dee10(u32 a0) asm("func_001dee10");
void func_001dee10(u32 a0) {
    u8 frame[16];
    u32 t6;
    u32 t7;
    u32 sp;
    u32 sp_0;
    u32 sp_1;
    if (((s32)((*(u32*)((a0 + 0x5c)) & 4)) != 0)) {
        if (((s32)(*(u32*)((a0 + 0x58))) != 0)) {
            if ((*(u32*)((a0 + 0x58)) != 0xffffffe0)) {
                t6 = (*(u32*)((a0 + 0x58)) + 0x20);
                t7 = (*(u32*)((a0 + 0x58)) + 0x40);
                do {
                    t7 = (t7 + -0x10);
                } while ((t6 != t7));
            } else {
                sp = (u32)frame;
            }
            func_001e0158();
            sp_0 = sp;
        } else {
            sp_0 = (u32)frame;
        }
        sp_1 = sp_0;
    } else {
        if (((*(u32*)((a0 + 0x5c)) & 8) != 0)) {
            func_001e01b8(*(u32*)((a0 + 0x58)));
        }
        sp_1 = (u32)frame;
    }
    return;
}
