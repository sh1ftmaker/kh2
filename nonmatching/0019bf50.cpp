// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" void func_00143928(u32) asm("func_00143928");
extern "C" void func_00185118(u32, u32) asm("func_00185118");

// 0x0019bf50 func_0019bf50
u32 func_0019bf50(u32 a0, u32 a1) asm("_ZN2YS3OBJ7is_fallERKN2kn7FVectorE");
u32 func_0019bf50(u32 a0, u32 a1) {
    func_00185118(a0, a1);
    if (((a0 + 0x590) != (a0 + 0x540))) {
        *(Q16*)((a0 + 0x590)) = *(Q16*)((a0 + 0x540));
    }
    if (((a0 + 0x5a0) != a1)) {
        *(Q16*)((a0 + 0x5a0)) = *(Q16*)(a1);
    }
    *(u64*)((a0 + 0x600)) = (*(u64*)((a0 + 0x600)) & 0xfffffffe);
    func_00143928(a0 + 0x590);
    return ((s32)((u64)(*(u32*)((a0 + 0x604)))) & 1);
}
