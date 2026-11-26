// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034dcac asm("D_0034dcac");
extern "C" void func_0014d430() asm("func_0014d430");
extern "C" void func_001707d8() asm("func_001707d8");
extern "C" void func_003058a0(u32) asm("func_003058a0");

// 0x0016f9e8 func_0016f9e8
void func_0016f9e8() asm("func_0016f9e8");
void func_0016f9e8() {
    u32 s0;
    u32 s1;
    u32 s2;
    u32 s3;
    u32 s2_0;
    u32 s3_1;
    for (;;) {
        func_003058a0(0);
        if (((*(u8*)(&D_0034dcac) & 0xff) == 1)) {
            s0 = 0x350000;
            s1 = 1;
            s2 = 1;
            s3 = 0x350000;
            do {
                func_001707d8();
                *(u8*)((s0 + -0x2354)) = 0;
            } while (((*(u8*)((s0 + -0x2354)) & 0xff) == s1));
            s2_0 = s2;
            s3_1 = s3;
        } else {
            s2_0 = 1;
            s3_1 = 0x350000;
        }
        func_0014d430();
    }
}
