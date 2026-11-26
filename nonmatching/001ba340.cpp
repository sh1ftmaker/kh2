// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 func_0016bc20(u32, u32, u32) asm("func_0016bc20");
extern "C" u32 func_0016c028(u32) asm("func_0016c028");
extern "C" u32 func_001a3a78(u32) asm("func_001a3a78");
extern "C" u32 func_001dc5f8(u32) asm("func_001dc5f8");
extern "C" u32 func_001de168(u32, u32, u32, u32, u32, u32) asm("func_001de168");
extern "C" void func_0018a818(u32, u32, u32) asm("func_0018a818");

// 0x001ba340 func_001ba340
u32 func_001ba340(u32 a0) asm("_ZN2YS11ITEM_EFFECT4execEv");
u32 func_001ba340(u32 a0) {
    u8 frame[32];
    u32 s1;
    u32 v0;
    u32 v0_0;
    u32 s1_1;
    u32 v0_2;
    *(u32*)(((u32)frame + 0xc)) = 0;
    s1 = func_001de168(func_001a3a78(a0), 0, 1, 1, 0x2712, 0);
    v0 = func_0016bc20(*(u32*)((a0 + 8)), 8, 0xffffffff);
    if (((s32)(v0) != 0)) {
        func_0018a818((u32)frame, *(u32*)((a0 + 8)), v0);
        v0_0 = func_001dc5f8(s1);
        if ((v0_0 != ((u32)frame + 0x10))) {
            *(Q16*)(v0_0) = *(Q16*)(((u32)frame + 0x10));
        }
        v0 = v0_0;
    } else {
        s1_1 = func_001dc5f8(s1);
        v0_2 = func_0016c028(*(u32*)((a0 + 8)));
        if ((s1_1 != v0_2)) {
            *(Q16*)(s1_1) = *(Q16*)(v0_2);
        }
        v0 = v0_2;
    }
    return v0;
}
