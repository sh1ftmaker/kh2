// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0028b1b0(u32, u32) asm("func_0028b1b0");
extern "C" void func_00288c58(u32, u32, u32) asm("func_00288c58");
extern "C" void func_00288f48(u32, u32, u32, u32, u32) asm("func_00288f48");
extern "C" void func_0028af18(u32, u32) asm("func_0028af18");

// 0x002888f8 func_002888f8
u32 func_002888f8(u32 a0, u32 a1, u32 a2) asm("func_002888f8");
u32 func_002888f8(u32 a0, u32 a1, u32 a2) {
    u8 frame[16];
    u32 t5;
    u32 t2;
    u32 t4;
    u32 t3;
    u32 sp;
    *(u16*)(a0) = 0;
    *(u16*)((a0 + 2)) = 0xffffffff;
    *(u16*)((a0 + 4)) = 0;
    *(u16*)((a0 + 0x10)) = a1;
    *(u16*)((a0 + 0x12)) = 0;
    *(u16*)((a0 + 0x14)) = 0xffffffff;
    *(u16*)((a0 + 0x16)) = 0;
    *(u16*)((a0 + 0x18)) = 0;
    *(u16*)((a0 + 0x1a)) = 0;
    *(u16*)((a0 + 0x1c)) = 1;
    *(u8*)((a0 + 0x24)) = (a2 & 0xff);
    *(u8*)((a0 + 0x25)) = 0;
    *(u8*)((a0 + 0x26)) = 0;
    *(u8*)((a0 + 0x27)) = 0;
    func_00288c58(a0, (s32)((a1 << 0x10)) >> 0x10, a2 & 0xff);
    func_00288f48(a0, 0x10, 0x20, 0, 0);
    if (((s32)(*(s16*)((a0 + 0x10))) > 0)) {
        t5 = (0 << 3);
        t2 = 0;
        do {
            t4 = 3;
            t3 = 0xffffffff;
            do {
                *(u16*)((t5 + *(u32*)((a0 + 0x2c)))) = t3;
                *(u16*)((t5 + *(u32*)((a0 + 0x30)))) = t3;
                t4 = (t4 + -1);
                t5 = (t5 + 2);
            } while (((s32)(t4) >= 0));
            t2 = (t2 + 1);
            t5 = (t2 << 3);
        } while (((s32)(((s32)(t2) < (s32)(*(s16*)((a0 + 0x10))))) != 0));
    } else {
        sp = (u32)frame;
    }
    *(u16*)((a0 + 0xe)) = 0;
    func_0028af18(a0, 0x73);
    return func_0028b1b0(a0, 0);
}
