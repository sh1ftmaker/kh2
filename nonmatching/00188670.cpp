// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00188550 asm("D_00188550");
extern "C" u32 D_00351214 asm("D_00351214");
extern "C" u32 D_01c608c0 asm("D_01c608c0");
extern "C" u32 D_01c60bc0 asm("D_01c60bc0");
extern "C" u32 func_00102788(u32, u32, u32, u32) asm("func_00102788");

// 0x00188670 func_00188670
void func_00188670() asm("_ZN2YS3ACT4InitEv");
void func_00188670() {
    u32 t6;
    u32 t5;
    *(u32*)((u32)&D_01c608c0) = 0;
    t6 = (u32)&D_01c608c0;
    t5 = ((u32)&D_01c608c0 + 0x300);
    do {
        *(u32*)(t6) = 0;
        t6 = (t6 + 0xc);
    } while (((s32)(t6) < (s32)(t5)));
    *(u32*)(&D_01c60bc0) = 0;
    func_00102788(*(u32*)(&D_00351214), 0, 0, (u32)&D_00188550);
    return;
}
