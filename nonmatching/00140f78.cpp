// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 D_00348710 asm("D_00348710");
extern "C" u32 func_00140b68(u32, u32) asm("func_00140b68");
extern "C" u32 func_00140dc0(u32, u32) asm("func_00140dc0");
extern "C" void func_0013f558(u32) asm("func_0013f558");
extern "C" void func_0013fd78(u32) asm("func_0013fd78");

// 0x00140f78 func_00140f78
u32 func_00140f78(u32 a0, u32 a1) asm("func_00140f78");
u32 func_00140f78(u32 a0, u32 a1) {
    u32 s3;
    u32 v0;
    *(u32*)(((u32)&D_00348710 + 0x40)) = 0;
    s3 = func_00140dc0(a0, a1);
    func_0013fd78((u32)&D_00348710);
    func_0013f558((u32)&D_00348710);
    v0 = func_00140b68((u32)&D_00348710, 1);
    if ((a0 != ((u32)&D_00348710 + 0x10))) {
        *(Q16*)(a0) = *(Q16*)(((u32)&D_00348710 + 0x10));
    }
    if ((a1 != (u32)&D_00348710)) {
        *(u32*)(((u32)&D_00348710 + 0x40)) = s3;
        *(Q16*)(a1) = *(Q16*)((u32)&D_00348710);
    } else {
        *(u32*)(((u32)&D_00348710 + 0x40)) = s3;
    }
    return v0;
}
