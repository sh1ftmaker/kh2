// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01d44100 asm("D_01d44100");
extern "C" u32 D_01d44108 asm("D_01d44108");
extern "C" u32 func_003200c0(u32) asm("func_003200c0");
extern "C" void func_0031a830(u32, u32) asm("func_0031a830");

// 0x001b1c38 wtarget_001b1c38(unsigned int, unsigned int, unsigned int, unsigned int)
void lift_001b1c38(u32 a0, u32 a1) asm("_Z16wtarget_001b1c38jjjj");
void lift_001b1c38(u32 a0, u32 a1) {
    u32 s2;
    u32 s1;
    u32 s0;
    f32 f20;
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            *(u32*)(&D_01d44100) = 0;
            *(u32*)(((u32)&D_01d44100 + 4)) = 0;
        }
        if ((a1 == 0xffff)) {
            if ((a0 == 1)) {
                s2 = 0xffffffff;
                s1 = 0xf;
                s0 = (u32)&D_01d44108;
                f20 = 0.0f;
                do {
                    *(f32*)((s0 + 8)) = f20;
                    *(f32*)((s0 + 0xc)) = f20;
                    func_0031a830(s0 + 0x10, a1);
                    s0 = (s0 + 0x28);
                    s1 = (s1 + -1);
                } while ((s1 != s2));
                func_003200c0((u32)&D_01d44108);
                return;
            } else {
                return;
            }
        } else {
            return;
        }
    } else {
        return;
    }
}
