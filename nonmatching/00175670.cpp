// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034e8b8 asm("D_0034e8b8");
extern "C" u32 D_00350e60 asm("D_00350e60");
extern "C" u32 func_0016a070(u32) asm("func_0016a070");
extern "C" u32 func_001afe30(u32) asm("func_001afe30");
extern "C" u32 func_001d7ec8(u32) asm("func_001d7ec8");
extern "C" void func_00185ed8(u32) asm("func_00185ed8");

// 0x00175670 func_00175670
void func_00175670(u32 a0) asm("func_00175670");
void func_00175670(u32 a0) {
    u32 s1;
    u32 v0;
    func_00185ed8(a0);
    *(u32*)(a0) = (u32)&D_0034e8b8;
    *(u32*)((a0 + 0xae4)) = 0;
    *(u32*)((a0 + 0xaec)) = 0;
    *(u32*)((a0 + 0xaf0)) = func_001d7ec8(*(u16*)((*(u32*)((a0 + 8)) + 0x4e)));
    *(u8*)((a0 + 0xaf4)) = 0;
    *(u32*)((a0 + 0xb00)) = 0;
    *(u8*)((a0 + 0xb04)) = 0;
    *(u8*)((a0 + 0xb05)) = 0;
    s1 = (a0 + 0xb08);
    *(u32*)((s1 + 4)) = 0;
    *(u32*)((s1 + 8)) = 0xffffffff;
    *(u32*)((s1 + 0xc)) = 0;
    *(u32*)((s1 + 0x10)) = 0;
    *(u32*)((s1 + 0x14)) = 0x1800;
    *(u32*)((a0 + 0x3b0)) = 1;
    *(u32*)((a0 + 0x588)) = (*(u32*)((a0 + 0x588)) | 4);
    *(u32*)((a0 + 0x600)) = (*(u32*)((a0 + 0x600)) & 0xffffff87);
    *(u32*)((a0 + 0xaf8)) = 0;
    *(u32*)((a0 + 0xafc)) = 0;
    *(u32*)((a0 + 0xb08)) = (u32)&D_00350e60;
    *(u32*)((a0 + 0xb28)) = 0;
    if (((s32)(*(u32*)((a0 + 0x9b8))) == 0)) {
        v0 = func_001afe30(func_0016a070(a0));
        if (((s32)(v0) >= 0)) {
            *(u32*)((a0 + 0x9b8)) = s1;
            *(u32*)((a0 + 0xb08)) = (u32)&D_00350e60;
            *(u32*)((s1 + 4)) = 1;
            *(u32*)((s1 + 8)) = 0xffffffff;
            *(u32*)((s1 + 0xc)) = 0;
            *(u32*)((s1 + 0x10)) = 0;
            *(u32*)((s1 + 0x14)) = 0x1800;
            *(u32*)((s1 + 0x1c)) = v0;
        }
    }
    return;
}
