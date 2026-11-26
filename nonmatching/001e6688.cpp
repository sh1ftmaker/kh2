// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00354690 asm("D_00354690");
extern "C" u32 D_01da8cd0 asm("D_01da8cd0");
extern "C" u32 func_001e2b68() asm("func_001e2b68");
extern "C" void func_001e6648() asm("func_001e6648");

// 0x001e6688 func_001e6688
u32 func_001e6688() asm("_Z16pppPartDrawReadyv");
u32 func_001e6688() {
    *(u32*)(&D_01da8cd0) = 0;
    *(u32*)(&D_00354690) = 0;
    *(u32*)(((u32)&D_01da8cd0 + 4)) = 0;
    *(u32*)(((u32)&D_01da8cd0 + 8)) = 0;
    *(u32*)(((u32)&D_01da8cd0 + 0xc)) = 0;
    *(u32*)(((u32)&D_01da8cd0 + 0x10)) = 0;
    *(u32*)(((u32)&D_01da8cd0 + 0x14)) = 0;
    *(u32*)(((u32)&D_01da8cd0 + 0x18)) = 0;
    *(u32*)(((u32)&D_01da8cd0 + 0x1c)) = 0;
    *(u32*)(((u32)&D_00354690 + 4)) = 0xffffffff;
    func_001e6648();
    return func_001e2b68();
}
