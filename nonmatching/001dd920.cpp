// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00352ae0 asm("D_00352ae0");
extern "C" u32 D_00352af0 asm("D_00352af0");
extern "C" u32 D_00352af1 asm("D_00352af1");
extern "C" u32 func_001b8218() asm("func_001b8218");
extern "C" u32 func_001dc9d0(u32) asm("func_001dc9d0");
extern "C" u32 func_001dcc60(u32) asm("func_001dcc60");
extern "C" u32 func_001e66e8(u32) asm("func_001e66e8");
extern "C" void func_001b81e8() asm("func_001b81e8");
extern "C" void func_001dc878(u32) asm("func_001dc878");
extern "C" void func_001dca70(u32) asm("func_001dca70");
extern "C" void func_001dd6a0() asm("func_001dd6a0");
extern "C" void func_001e3330(u32) asm("func_001e3330");
extern "C" void func_001e6648() asm("func_001e6648");
extern "C" void func_001e6688() asm("func_001e6688");
extern "C" void func_001e6af8() asm("func_001e6af8");
extern "C" void func_001e6c00(u32) asm("func_001e6c00");

// 0x001dd920 func_001dd920
u32 func_001dd920() asm("_ZN3ryj6EFFECT8DrawTaskEP4TASK");
u32 func_001dd920() {
    u32 s0;
    u32 s2;
    u32 s1;
    u8 t7;
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    if (((s32)(*(u8*)(&D_00352af1)) == 0)) {
        if (((s32)(*(u8*)(&D_00352af0)) != 0)) {
            func_001dd6a0();
            func_001b81e8();
            func_001e6688();
            if (((s32)(*(u32*)(&D_00352ae0)) != 0)) {
                s0 = *(u32*)(&D_00352ae0);
                s2 = 0;
                do {
                    s1 = *(u32*)((s0 + 0x28));
                    if (((s32)(func_001dc9d0(s0)) != 0)) {
                        t7 = (((s32)(*(u32*)((s0 + 8))) >> 0x1a) & 1);
                        if (((s32)(t7) == 0)) {
                            if ((*(u32*)((s0 + 4)) == 4)) {
                                ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)((s0 + 0x14))) + 8))))(*(u32*)((s0 + 0x14)));
                                func_001dc878(s0);
                                s2 = 1;
                            } else {
                                if (((s32)(*(u32*)((s0 + 0x1c))) != 0)) {
                                    if (((s32)(func_001dcc60(s0)) != 0)) {
                                        if (((s32)(s2) != 0)) {
                                            func_001e6648();
                                            s2 = 0;
                                        }
                                        func_001dca70(s0);
                                        func_001e3330(*(u32*)((s0 + 0x1c)));
                                        if (((s32)(func_001e66e8(*(u32*)((s0 + 0x1c)))) == 0)) {
                                            func_001e6c00(*(u32*)((s0 + 0x1c)));
                                            *(u32*)((s0 + 8)) = (*(u32*)((s0 + 8)) | 0x10000);
                                            *(u32*)((s0 + 0x1c)) = 0;
                                        }
                                    }
                                }
                            }
                        }
                    }
                    s0 = s1;
                } while (((s32)(s1) != 0));
            }
            func_001e6af8();
            v0 = func_001b8218();
            v0_0 = v0;
        }
        v0_1 = v0_0;
    }
    return v0_1;
}
