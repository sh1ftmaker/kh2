// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035edd4 asm("D_0035edd4");
extern "C" u32 D_0035ede4 asm("D_0035ede4");
extern "C" u32 D_0035edf8 asm("D_0035edf8");
extern "C" u32 func_001a6d08(u32) asm("func_001a6d08");
extern "C" u32 func_0024e228() asm("func_0024e228");
extern "C" void func_001395f8(u32) asm("func_001395f8");
extern "C" void func_00139620(u32) asm("func_00139620");
extern "C" void func_0028d980(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d980");
extern "C" void func_002fde18(u32, u32, u32) asm("func_002fde18");

// 0x0024e158 func_0024e158
u32 func_0024e158() asm("func_0024e158");
u32 func_0024e158() {
    u32 v0;
    u32 loc_0;
    u32 t6;
    v0 = func_001a6d08(7);
    if (((s32)(v0) != 0)) {
        loc_0 = 0;
        func_0028d980(*(u32*)(&D_0035ede4), 0x753b, 0, 0, *(u32*)(&D_0035edd4), 0x27, 0x29, 0xffffffff);
        func_00139620(*(u32*)(&D_0035ede4));
        func_001395f8(*(u32*)(&D_0035ede4));
        *(u32*)((*(u32*)(&D_0035ede4) + 0x1b0)) = 2;
        *(u8*)((*(u32*)(&D_0035ede4) + 0x195)) = 1;
        t6 = (*(u32*)(&D_0035ede4) + 0x18);
        *(u32*)((t6 + 0xb8)) = (*(u32*)((t6 + 0xb8)) | 8);
        func_002fde18(*(u32*)(&D_0035edf8), 0, 0x20);
        *(u32*)((*(u32*)(&D_0035ede4) + 0x198)) = *(u32*)(&D_0035edf8);
        return func_0024e228();
    } else {
        return v0;
    }
}
