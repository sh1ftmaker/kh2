// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0032bb30 asm("D_0032bb30");
extern "C" u32 D_01d499b0 asm("D_01d499b0");
extern "C" u32 D_01d5a970 asm("D_01d5a970");
extern "C" u32 func_00195558(u32) asm("func_00195558");

// 0x001cd2b8 func_001cd2b8
u32 func_001cd2b8() asm("func_001cd2b8");
u32 func_001cd2b8() {
    u32 t5;
    u32 t6;
    u32 t7;
    u32 t3;
    t5 = ((u32)&D_0032bb30 + 0x10fc0);
    t6 = (u32)&D_0032bb30;
    t7 = (u32)&D_01d499b0;
    do {
        *(u64*)(t7) = *(u64*)(t6);
        *(u64*)((t7 + 8)) = *(u64*)((t6 + 8));
        *(u64*)((t7 + 0x10)) = *(u64*)((t6 + 0x10));
        *(u64*)((t7 + 0x18)) = *(u64*)((t6 + 0x18));
        *(u64*)((t7 + 0x20)) = *(u64*)((t6 + 0x20));
        *(u64*)((t7 + 0x28)) = *(u64*)((t6 + 0x28));
        *(u64*)((t7 + 0x30)) = *(u64*)((t6 + 0x30));
        *(u64*)((t7 + 0x38)) = *(u64*)((t6 + 0x38));
        t6 = (t6 + 0x40);
        t7 = (t7 + 0x40);
    } while ((t6 != t5));
    t3 = ((u32)&D_01d5a970 + 4);
    *(u8*)(&D_01d5a970) = *(u8*)(((u32)&D_0032bb30 + 0xc));
    *(u8*)(((u32)&D_01d5a970 + 1)) = *(u8*)(((u32)&D_0032bb30 + 0xd));
    *(u8*)(((u32)&D_01d5a970 + 2)) = *(u8*)(((u32)&D_0032bb30 + 0xe));
    *(u16*)(((u32)&D_01d5a970 + 4)) = 0xffff;
    *(u16*)((t3 + 2)) = 0xffff;
    *(u16*)((t3 + 4)) = 0xffff;
    func_00195558((u32)&D_01d5a970 + 0xc);
    return func_00195558((u32)&D_01d5a970 + 0x834);
}
