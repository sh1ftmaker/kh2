// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034af28 asm("D_0034af28");
extern "C" u32 D_0034af30 asm("D_0034af30");
extern "C" u32 func_0015c2a0(u32, u32) asm("func_0015c2a0");
extern "C" u32 func_00160e50(u32, u32) asm("func_00160e50");

// 0x0015c450 func_0015c450
void func_0015c450(u32 a0) asm("_ZN2dk8ObjEntry4showEj");
void func_0015c450(u32 a0) {
    u8 t7;
    t7 = (((u64)(*(u64*)(&D_0034af30)) >> a0) & 1);
    if (((s32)((t7 & 0xff)) != 0)) {
        func_00160e50(a0, 1);
        return;
    } else {
        func_0015c2a0(*(u32*)(&D_0034af28), (u64)(1) << a0);
        return;
    }
}
