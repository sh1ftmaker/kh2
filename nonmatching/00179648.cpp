// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0032bb30 asm("D_0032bb30");
extern "C" u32 func_0016a020(u32) asm("func_0016a020");
extern "C" u32 func_0016a070(u32) asm("func_0016a070");
extern "C" u32 func_0016c008(u32, u32) asm("func_0016c008");
extern "C" u32 func_00253180(u32, u32) asm("func_00253180");
extern "C" void func_00177710() asm("func_00177710");
extern "C" void func_001ada38(u32, u32) asm("func_001ada38");

// 0x00179648 func_00179648
u32 func_00179648(u32 a0, u32 a1) asm("_ZN2YS6PLAYER8savemenuEPNS_3OBJE");
u32 func_00179648(u32 a0, u32 a1) {
    u32 t7;
    u32 t7_0;
    u32 t7_1;
    func_001ada38(7, a1);
    func_00177710();
    *(u8*)(((u32)&D_0032bb30 + 0xe)) = func_0016c008(a1, 1);
    if ((func_0016a070(a0) == 0xe)) {
        t7 = *(u32*)(((u32)&D_0032bb30 + 0x249c));
        t7_1 = (t7 | 1);
    } else {
        t7_0 = *(u32*)(((u32)&D_0032bb30 + 0x249c));
        t7_1 = (t7_0 & 0xfffffffe);
    }
    *(u32*)(((u32)&D_0032bb30 + 0x249c)) = t7_1;
    return func_00253180(1, (func_0016a020(a1) ^ 0x239) ? 2 : 0);
}
