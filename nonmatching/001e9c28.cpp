// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01d9e6e4 asm("D_01d9e6e4");
extern "C" void func_002f3cd8(u32, u32, u32) asm("func_002f3cd8");

// 0x001e9c28 func_001e9c28
// minilink-rodata 0x003700b8   (float literals live here in the original)
void func_001e9c28(u32 a0, u32 a1, u32 a2) asm("func_001e9c28");
void func_001e9c28(u32 a0, u32 a1, u32 a2) {
    f32 loc_0;
    u32 t7;
    u32 s0;
    u32 t6;
    u32 t4;
    u32 t6_0;
    f32 loc_4;
    f32 loc_8;
    f32 loc_c;
    u32 s1;
    if (((s32)(*(s16*)((a1 + 0xc))) >= 0)) {
        t7 = (*(u32*)((*(u32*)(&D_01d9e6e4) + 0x18)) + (*(s16*)((a1 + 0xc)) << 3));
        s0 = (a0 + *(u32*)((*(u32*)((a2 + 0xc)) + 4)));
        t6 = (*(u16*)(((a0 + *(u32*)(*(u32*)((a2 + 0xc)))) + 0xa0)) << 1);
        t4 = (*(s16*)(t7) * 0x24);
        t6_0 = (*(u32*)(((t4 + *(u32*)((*(u32*)(&D_01d9e6e4) + 0x10))) + 0x14)) + (*(u16*)((t6 + *(u32*)((t7 + 4)))) * 6));
        loc_0 = (f32)((s32)(*(s16*)(t6_0)));
        loc_4 = (f32)((s32)(*(s16*)((t6_0 + 2))));
        loc_8 = (f32)((s32)(*(s16*)((t6_0 + 4))));
        loc_c = 1.0f;
        func_002f3cd8((u32)&loc_0, *(u32*)((a0 + 4)) + 0x10, (u32)&loc_0);
        *(f32*)((s0 + 0xa0)) = loc_0;
        s1 = (s0 + 0xa0);
        *(f32*)((s1 + 4)) = loc_4;
        *(f32*)((s1 + 8)) = loc_8;
    }
    return;
}
