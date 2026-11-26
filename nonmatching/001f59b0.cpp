// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01d9e6e0 asm("D_01d9e6e0");
extern "C" u32 D_01d9e6e4 asm("D_01d9e6e4");
extern "C" u32 D_01d9e6e8 asm("D_01d9e6e8");
extern "C" u32 D_01d9ea9c asm("D_01d9ea9c");
extern "C" u32 func_001e7a98(u32, u32) asm("func_001e7a98");
extern "C" u32 func_00222568() asm("func_00222568");
extern "C" void func_00222730(u32, u32, u32) asm("func_00222730");
extern "C" void func_002f3cd8(u32, u32, u32) asm("func_002f3cd8");
extern "C" void func_002f3f98(u32, u32) asm("func_002f3f98");

// 0x001f59b0 func_001f59b0
// minilink-rodata 0x003701b8   (float literals live here in the original)
void func_001f59b0(u32 a0, u32 a1, u32 a2) asm("func_001f59b0");
void func_001f59b0(u32 a0, u32 a1, u32 a2) {
    u8 frame[96];
    u32 v0;
    u32 fp;
    u32 s0;
    u32 s7;
    u32 s3;
    u32 s5;
    u32 t7;
    u32 s1;
    u32 v0_0;
    u32 v0_1;
    u32 s0_2;
    if (((s32)(*(u32*)(&D_01d9ea9c)) == 0)) {
        if (((*(u64*)((*(u32*)(&D_01d9e6e0) + 0xa8)) & ((u64)(0xff) | 0xff00)) == 0)) {
            v0 = func_00222568();
            if ((*(u8*)((a1 + 9)) != 0xff)) {
                if (((((s32)(v0) >> 8) & *(u8*)((a1 + 9))) == 0)) {
                    if ((*(u32*)((a1 + 0xc)) != 0xffffffff)) {
                        if ((*(u32*)((a1 + 0x14)) != 0xffffffff)) {
                            *(u32*)(((u32)frame + 0x50)) = ((a0 + *(u32*)(*(u32*)((a2 + 0xc)))) + 0xa0);
                            *(u32*)(((u32)frame + 0x54)) = *(u32*)((((*(s16*)(((*(s16*)((a1 + 6)) << 3) + *(u32*)((*(u32*)(&D_01d9e6e4) + 0x18)))) * 0x24) + *(u32*)((*(u32*)(&D_01d9e6e4) + 0x10))) + 0x14));
                            if ((*(s16*)(((*(u32*)((*(u32*)(&D_01d9e6e4) + 0x18)) + (*(s16*)((a1 + 4)) << 3)) + 2)) == *(s16*)((((*(s16*)((a1 + 6)) << 3) + *(u32*)((*(u32*)(&D_01d9e6e4) + 0x18))) + 2)))) {
                                fp = (*(u32*)((*(u32*)(&D_01d9e6e8) + 0x90)) == 0) ? *(u32*)((((*(s16*)((*(u32*)((*(u32*)(&D_01d9e6e4) + 0x18)) + (*(s16*)((a1 + 4)) << 3))) * 0x24) + *(u32*)((*(u32*)(&D_01d9e6e4) + 0x10))) + 0x14)) : *(u32*)((*(u32*)(&D_01d9e6e8) + 0x90));
                                *(u32*)(((u32)frame + 0x58)) = *(u8*)((a1 + 0xa));
                                *(f32*)(((u32)frame + 0x4c)) = 1.0f;
                                s0 = (a0 + *(u32*)(*(u32*)((a2 + 0xc))));
                                s7 = (*(u32*)((*(u32*)(&D_01d9e6e4) + 0x18)) + (*(s16*)((a1 + 4)) << 3));
                                func_002f3f98((u32)frame, *(u32*)(&D_01d9e6e8) + 0x10);
                                s3 = (*(u32*)(((u32)frame + 0x58)) != 0) ? ((s32)(v0) % (s32)(*(s16*)((s7 + 2)))) : *(u16*)((s0 + 0xa0));
                                if (((s32)(*(u8*)((a1 + 8))) > 0)) {
                                    s5 = *(u8*)((a1 + 8));
                                    t7 = 0x1da0000;
                                    do {
                                        s3 = (s3 + 1);
                                        s1 = *(u16*)(((s3 << 1) + *(u32*)((s7 + 4))));
                                        if (((s32)((*(u32*)((*(u32*)((t7 + -0x1920)) + 0x80)) + (*(u32*)((a1 + 0xc)) << 4))) != 0)) {
                                            v0_0 = func_001e7a98(*(u32*)((t7 + -0x1920)), *(u32*)((*(u32*)((t7 + -0x1920)) + 0x80)) + (*(u32*)((a1 + 0xc)) << 4));
                                            *(u32*)((v0_0 + 4)) = a0;
                                            v0_1 = v0_0;
                                        } else {
                                            v0_1 = 0;
                                        }
                                        t7 = 6;
                                        t7 = 0x1da0000;
                                        *(f32*)(((u32)frame + 0x40)) = (f32)((s32)(*(s16*)((fp + (s1 * t7)))));
                                        *(f32*)(((u32)frame + 0x44)) = (f32)((s32)(*(s16*)(((fp + (s1 * t7)) + 2))));
                                        *(f32*)(((u32)frame + 0x48)) = (f32)((s32)(*(s16*)(((fp + (s1 * t7)) + 4))));
                                        s0_2 = ((v0_1 + *(u32*)((a1 + 0x18))) + 0xa0);
                                        func_002f3cd8((v0_1 + *(u32*)((a1 + 0x10))) + 0xa0, *(u32*)((t7 + -0x1918)) + 0x10, (u32)frame + 0x40);
                                        *(f32*)(((u32)frame + 0x40)) = (f32)((s32)(*(s16*)((*(u32*)(((u32)frame + 0x54)) + (s1 * t7)))));
                                        *(f32*)(((u32)frame + 0x44)) = (f32)((s32)(*(s16*)(((*(u32*)(((u32)frame + 0x54)) + (s1 * t7)) + 2))));
                                        *(f32*)(((u32)frame + 0x48)) = (f32)((s32)(*(s16*)(((*(u32*)(((u32)frame + 0x54)) + (s1 * t7)) + 4))));
                                        func_002f3cd8((u32)frame + 0x40, (u32)frame, (u32)frame + 0x40);
                                        t7 = 0x1da0000;
                                        func_00222730(s0_2, (u32)frame + 0x40, *(u32*)((t7 + -0x1918)) + 0x40);
                                        s3 = (*(u32*)(((u32)frame + 0x58)) != 0) ? ((s32)(func_00222568()) % (s32)(*(s16*)((s7 + 2)))) : (((s32)(s3) < (s32)(*(s16*)((s7 + 2)))) ? s3 : 0);
                                        s5 = (s5 + -1);
                                        t7 = 0x1da0000;
                                    } while (((s32)(s5) > 0));
                                }
                                *(u16*)(*(u32*)(((u32)frame + 0x50))) = s3;
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}
