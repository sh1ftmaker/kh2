// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 func_001050d8(u32, u32, u32, u32, u32) asm("func_001050d8");
extern "C" u32 func_0018da18(u32, u32, u32, u32) asm("func_0018da18");
extern "C" u32 func_0018db38(u32, u32, u32, u32) asm("func_0018db38");
extern "C" void func_0018ca10(u32) asm("func_0018ca10");
extern "C" void func_0018d238(u32, u32, u32, u32, u32, u32, u32) asm("func_0018d238");
extern "C" void func_0018f028(u32) asm("func_0018f028");

// 0x0018ee60 func_0018ee60
u32 func_0018ee60(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) asm("_ZN2YS6ATTACK6StrikeEPNS_6BTLOBJEiS2_RKN2kn7FVectorEb");
u32 func_0018ee60(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) {
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    u32 v0_2;
    u32 t7;
    u32 s6;
    v0 = func_001050d8(0xd0, a1, a2, a3, a4);
    func_0018d238(v0, a0, 0, a1, 0, 0xffffffff, 0xffffffff);
    if (((s32)((a4 & 0xff)) != 0)) {
        v0_0 = func_0018da18(v0, a2, *(u32*)((v0 + 0x28)), 0);
        v0_2 = v0_0;
    } else {
        v0_1 = func_0018db38(v0, a2, 0, 0);
        v0_2 = v0_1;
    }
    if (((s32)(v0_2) != 0)) {
        t7 = *(u32*)((v0_2 + 0x18));
        if ((v0_2 != a3)) {
            *(Q16*)(v0_2) = *(Q16*)(a3);
        }
        ((void(*)(u32, u32))(*(u32*)((*(u32*)(a2) + 0x64))))(a2, v0_2);
        func_0018ca10(v0_2);
        s6 = ((t7 & 1) ^ 1);
    } else {
        s6 = 0;
    }
    func_0018f028(v0);
    return s6;
}
