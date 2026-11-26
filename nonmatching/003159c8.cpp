// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x003159c8 func_003159c8
u32 func_003159c8(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) asm("_ZNK10__cxxabiv120__si_class_type_info20__do_find_public_srcEiPKvPKNS_17__class_type_infoES2_");
u32 func_003159c8(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) {
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    u32 v0_2;
    if ((a4 == a2)) {
        if ((*(u32*)((a0 + 4)) != *(u32*)((a3 + 4)))) {
            v0 = ((u32(*)(u32, u32, u32, u32))(*(u32*)((*(u32*)(*(u32*)((a0 + 8))) + 0x20))))(*(u32*)((a0 + 8)), a1, a2, a3);
            v0_0 = v0;
        } else {
            v0_0 = 6;
        }
        v0_2 = v0_0;
    } else {
        v0_1 = ((u32(*)(u32, u32, u32, u32))(*(u32*)((*(u32*)(*(u32*)((a0 + 8))) + 0x20))))(*(u32*)((a0 + 8)), a1, a2, a3);
        v0_2 = v0_1;
    }
    return v0_2;
}
