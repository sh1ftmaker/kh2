// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00351408 asm("D_00351408");
extern "C" u32 D_01d49520 asm("D_01d49520");
extern "C" u32 func_001050d8(u32) asm("func_001050d8");
extern "C" u32 func_001c1308(u32, u32, u32, u32, u32) asm("func_001c1308");
extern "C" u32 func_001de168(u32, u32, u32, u32, u32, u32) asm("func_001de168");
extern "C" void func_001980d0(u32, u32, u32, u32, u32, u32, f32) asm("func_001980d0");
extern "C" void func_001dcc00(u32, u32) asm("func_001dcc00");

// 0x001c2490 func_001c2490
u32 func_001c2490(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6) asm("_ZN2YS7MASSOBJC1EPKNS_8OBJENTRYEiiijj");
u32 func_001c2490(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6) {
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    func_001980d0(a0, a1, 4, (u32)&D_01d49520, a4, a5, 0.0f);
    *(u32*)(a0) = (u32)&D_00351408;
    *(u32*)((a0 + 0x588)) = (*(u32*)((a0 + 0x588)) | 0x100000);
    v0 = func_001de168(a0 + 0x9c, a2, 0, 1, 0, 0);
    func_001dcc00(v0, a3);
    v0_0 = func_001050d8(0x38);
    v0_1 = func_001c1308(v0_0, v0, a4, a5, a6);
    *(u32*)((a0 + 0x9f4)) = v0_0;
    return v0_1;
}
