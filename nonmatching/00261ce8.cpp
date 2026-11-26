// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f010 asm("D_0035f010");
extern "C" u32 func_00257130() asm("func_00257130");
extern "C" u32 func_00281198(u32, u32) asm("func_00281198");
extern "C" u32 func_002827f0(u32, u32, u32) asm("func_002827f0");
extern "C" void func_00282240(u32, u32, u32) asm("func_00282240");

// 0x00261ce8 func_00261ce8
u32 func_00261ce8(u32 a0) asm("_ZN2Tz6CmItem12GetEquipListEi");
u32 func_00261ce8(u32 a0) {
    u32 s0;
    s0 = (func_00281198(*(u32*)(&D_0035f010), a0) + 5);
    func_00282240(func_00257130(), s0, 0);
    return func_002827f0(func_00257130(), 0, 0);
}
