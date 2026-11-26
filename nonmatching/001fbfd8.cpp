// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01d9e360 asm("D_01d9e360");
extern "C" u32 D_01d9e6e0 asm("D_01d9e6e0");
extern "C" u32 D_01d9ea9c asm("D_01d9ea9c");
extern "C" f32 func_002229a0(u32) asm("func_002229a0");
extern "C" void func_00222750(u32, u32, u32) asm("func_00222750");
extern "C" void func_002f3d98(u32, u32) asm("func_002f3d98");
extern "C" void func_002f3f10(u32, u32, u32) asm("func_002f3f10");
extern "C" void func_002f3f40(u32, u32, f32) asm("func_002f3f40");

// 0x001fbfd8 func_001fbfd8
// minilink-rodata 0x00370268   (float literals live here in the original)
void func_001fbfd8(u32 a0, u32 a1, u32 a2) asm("func_001fbfd8");
void func_001fbfd8(u32 a0, u32 a1, u32 a2) {
    u32 loc_0;
    u32 s0;
    u32 s1;
    f32 f20;
    u32 s0_0;
    u32 s1_1;
    f32 f20_2;
    u32 s0_3;
    u32 s1_4;
    f32 f20_5;
    if ((*(u32*)((a0 + 0xc)) == *(u32*)(a1))) {
        a1 = (*(u32*)((a1 + 4)) != 0xffffffff) ? ((*(u32*)((((*(u32*)((a1 + 4)) << 4) + *(u32*)((*(u32*)(&D_01d9e6e0) + 0x80))) + 4)) + *(u32*)((a1 + 8))) + 0xa0) : (u32)&D_01d9e360;
        *(u32*)(((a0 + *(u32*)((*(u32*)((a2 + 0xc)) + 8))) + 0xa0)) = a1;
        if (((s32)(*(u32*)((a0 + 0xc))) == 0)) {
            if (((s32)(*(u8*)((a0 + 0x9d))) != 0)) {
                if (((s32)(*(u32*)(&D_01d9ea9c)) == 0)) {
                    if (((s32)((*(u64*)((*(u32*)(&D_01d9e6e0) + 0xa8)) & ((u64)(0xff) | 0xff00))) == 0)) {
                        if ((*(u32*)(((a0 + *(u32*)((*(u32*)((a2 + 0xc)) + 8))) + 0xa0)) != (u32)&D_01d9e360)) {
                            s0 = *(u32*)(((a0 + *(u32*)((*(u32*)((a2 + 0xc)) + 8))) + 0xa0));
                            s1 = ((a0 + *(u32*)((*(u32*)((a2 + 0xc)) + 4))) + 0xa0);
                            func_002f3f10((u32)&loc_0, *(u32*)((*(u32*)(((a0 + *(u32*)((*(u32*)((a2 + 0xc)) + 8))) + 0xa0)) + 8)), (a0 + *(u32*)(*(u32*)((a2 + 0xc)))) + 0xa0);
                            f20 = func_002229a0((u32)&loc_0);
                            func_002f3d98((u32)&loc_0, (u32)&loc_0);
                            if ((f20 < *(f32*)(s0))) {
                                func_002f3f40((u32)&loc_0, (u32)&loc_0, (1.0f - (f20 / *(f32*)(s0))) * *(f32*)((s0 + 4)));
                                func_00222750(s1, s1, (u32)&loc_0);
                            }
                        }
                    }
                }
            }
        } else {
            if (((s32)(*(u32*)(&D_01d9ea9c)) == 0)) {
                if (((s32)((*(u64*)((*(u32*)(&D_01d9e6e0) + 0xa8)) & ((u64)(0xff) | 0xff00))) == 0)) {
                    if ((*(u32*)(((a0 + *(u32*)((*(u32*)((a2 + 0xc)) + 8))) + 0xa0)) != (u32)&D_01d9e360)) {
                        s0_0 = *(u32*)(((a0 + *(u32*)((*(u32*)((a2 + 0xc)) + 8))) + 0xa0));
                        s1_1 = ((a0 + *(u32*)((*(u32*)((a2 + 0xc)) + 4))) + 0xa0);
                        func_002f3f10((u32)&loc_0, *(u32*)((*(u32*)(((a0 + *(u32*)((*(u32*)((a2 + 0xc)) + 8))) + 0xa0)) + 8)), (a0 + *(u32*)(*(u32*)((a2 + 0xc)))) + 0xa0);
                        f20_2 = func_002229a0((u32)&loc_0);
                        func_002f3d98((u32)&loc_0, (u32)&loc_0);
                        if ((f20_2 < *(f32*)(s0_0))) {
                            func_002f3f40((u32)&loc_0, (u32)&loc_0, (1.0f - (f20_2 / *(f32*)(s0_0))) * *(f32*)((s0_0 + 4)));
                            func_00222750(s1_1, s1_1, (u32)&loc_0);
                        }
                    }
                }
            }
        }
    } else {
        if (((s32)(*(u32*)(&D_01d9ea9c)) == 0)) {
            if (((s32)((*(u64*)((*(u32*)(&D_01d9e6e0) + 0xa8)) & ((u64)(0xff) | 0xff00))) == 0)) {
                if ((*(u32*)(((a0 + *(u32*)((*(u32*)((a2 + 0xc)) + 8))) + 0xa0)) != (u32)&D_01d9e360)) {
                    s0_3 = *(u32*)(((a0 + *(u32*)((*(u32*)((a2 + 0xc)) + 8))) + 0xa0));
                    s1_4 = ((a0 + *(u32*)((*(u32*)((a2 + 0xc)) + 4))) + 0xa0);
                    func_002f3f10((u32)&loc_0, *(u32*)((*(u32*)(((a0 + *(u32*)((*(u32*)((a2 + 0xc)) + 8))) + 0xa0)) + 8)), (a0 + *(u32*)(*(u32*)((a2 + 0xc)))) + 0xa0);
                    f20_5 = func_002229a0((u32)&loc_0);
                    func_002f3d98((u32)&loc_0, (u32)&loc_0);
                    if ((f20_5 < *(f32*)(s0_3))) {
                        func_002f3f40((u32)&loc_0, (u32)&loc_0, (1.0f - (f20_5 / *(f32*)(s0_3))) * *(f32*)((s0_3 + 4)));
                        func_00222750(s1_4, s1_4, (u32)&loc_0);
                    }
                }
            }
        }
    }
    return;
}
