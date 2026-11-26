// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00347e60 asm("D_00347e60");
extern "C" u32 D_00347f98 asm("D_00347f98");
extern "C" u32 D_0034a568 asm("D_0034a568");
extern "C" u32 func_0031a840(u32) asm("func_0031a840");
extern "C" void func_00239870(u32) asm("func_00239870");

// 0x0031c248 func_0031c248
u32 func_0031c248(u32 a0) asm("func_0031c248");
u32 func_0031c248(u32 a0) {
    u32 v0;
    *(u32*)(a0) = (u32)&D_0034a568;
    *(u32*)((a0 + 0x230)) = (u32)&D_00347e60;
    func_00239870(a0 + 0x248);
    *(u32*)((a0 + 0x30)) = (u32)&D_00347e60;
    *(u32*)((a0 + 0x230)) = (u32)&D_00347f98;
    func_00239870(a0 + 0x48);
    v0 = func_0031a840(a0 + 0x30);
    *(u32*)(a0) = (u32)&D_00347f98;
    return v0;
}
