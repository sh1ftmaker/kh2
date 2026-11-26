// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001466b0(u32, u32) asm("func_001466b0");
extern "C" void func_00144b38(u32, u32) asm("func_00144b38");
extern "C" void func_001471d8(u32, u32) asm("func_001471d8");
extern "C" void func_00147210(u32, u32) asm("func_00147210");

// 0x00146250 func_00146250
void func_00146250(u32 a0, u32 a1) asm("_ZN2dk11OctDrawFile10drawObjectERKNS_8DrawNodeE");
void func_00146250(u32 a0, u32 a1) {
    u8 frame[128];
    u32 s0;
    u32 t6;
    u32 s2;
    u32 v0;
    u32 v0_0;
    u32 t7;
    if (((s32)(*(u32*)((a1 + 0x2c))) != 0)) {
        s0 = *(u32*)((a1 + 0x2c));
        t6 = *(u32*)((*(u32*)((a1 + 0x2c)) + 0xf8));
        do {
            if (((s32)((*(u32*)((s0 + 0xf8)) & 0x1000)) != 0)) {
                if (((s32)((*(u32*)((s0 + 0xf8)) & 0x20)) == 0)) {
                    func_001471d8(a0, s0);
                } else {
                    func_00147210(a0, s0);
                }
            } else {
                if (((s32)((*(u32*)((s0 + 0xf8)) & 0x800)) != 0)) {
                    if (((s32)(*(u32*)((s0 + 0xfc))) == 0)) {
                        func_00144b38(s0 + 0xd0, (u32)frame);
                        s2 = (u32)frame;
                    } else {
                        s2 = *(u32*)((s0 + 0xfc));
                    }
                    v0 = func_001466b0(a0 + 0x1f0, s2);
                    if ((v0 != 1)) {
                        if (((s32)(v0) >= (s32)(2))) {
                            if ((v0 == 2)) {
                                if (((s32)((*(u32*)((s0 + 0xf8)) & 0x20)) != 0)) {
                                    v0_0 = func_001466b0(a0 + 0x230, s2);
                                    if ((v0_0 != 1)) {
                                        if (((s32)(v0_0) >= (s32)(2))) {
                                            if ((v0_0 == v0)) {
                                                func_00147210(a0, s0);
                                            }
                                        }
                                    } else {
                                        func_001471d8(a0, s0);
                                    }
                                } else {
                                    func_001471d8(a0, s0);
                                }
                            }
                        }
                    } else {
                        func_001471d8(a0, s0);
                    }
                } else {
                    func_001471d8(a0, s0);
                }
            }
            s0 = *(u32*)((s0 + 0x110));
        } while ((s0 != 0));
    }
    t7 = ((u32)frame + 0x80);
    do {
        t7 = (t7 + -0x10);
    } while (((u32)frame != t7));
    return;
}
