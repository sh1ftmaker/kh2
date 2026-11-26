// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 D_00349e10 asm("D_00349e10");
extern "C" u32 func_00167f18(u32) asm("func_00167f18");
extern "C" u32 func_001ba028(u32) asm("func_001ba028");
extern "C" u32 func_00225e48(u32) asm("func_00225e48");
extern "C" u32 func_00227d10(u32) asm("func_00227d10");
extern "C" void func_001024a8(u32) asm("func_001024a8");
extern "C" void func_00105110(u32) asm("func_00105110");
extern "C" void func_001391a8(u32, u32) asm("func_001391a8");
extern "C" void func_0016b478(u32, u32, u32, f32) asm("func_0016b478");
extern "C" void func_00224950(u32) asm("func_00224950");
extern "C" void func_0022ae98(u32) asm("func_0022ae98");
extern "C" void func_0022aef0(u32) asm("func_0022aef0");
extern "C" void func_0022af48(u32) asm("func_0022af48");
extern "C" void func_0022afa0(u32) asm("func_0022afa0");
extern "C" void func_0022afe8(u32) asm("func_0022afe8");
extern "C" void func_0022b028(u32) asm("func_0022b028");

// 0x00229e58 func_00229e58
// minilink-rodata 0x003710c8   (float literals live here in the original)
void func_00229e58(u32 a0) asm("_ZN2sa13MUSICAL_COMBO9printTaskEP4TASK");
void func_00229e58(u32 a0) {
    u32 loc_20;
    u32 loc_24;
    u32 loc_28;
    u32 loc_2c;
    u32 loc_30;
    u32 s0;
    u32 s3;
    u32 s4;
    u32 s5;
    u32 s6;
    u32 s7;
    s32 fp;
    u32 v0;
    Q16 loc_0;
    u32 s1;
    u32 t7;
    if (((s32)(func_00225e48(a0)) == 0)) {
        loc_20 = (*(u32*)((a0 + 4)) + 0x3c);
        loc_24 = (*(u32*)((a0 + 4)) + 0x1c);
        loc_28 = *(u32*)((*(u32*)((a0 + 4)) + 8));
        loc_2c = *(u32*)((*(u32*)((a0 + 4)) + 0x14));
        loc_30 = *(u32*)((*(u32*)((a0 + 4)) + 0x34));
        s0 = *(u32*)((a0 + 4));
        s3 = *(u32*)((*(u32*)((a0 + 4)) + 0x28));
        s4 = (((s32)(*(u32*)((*(u32*)((a0 + 4)) + 4))) < (s32)(4)) ? 3 : 5);
        s5 = *(u32*)((*(u32*)((a0 + 4)) + 0x30));
        s6 = *(u32*)((*(u32*)((a0 + 4)) + 0x2c));
        s7 = *(u32*)((*(u32*)((a0 + 4)) + 0x18));
        fp = (s32)((*(f32*)((*(u32*)((a0 + 4)) + 0x1c)) * 0.5f));
        v0 = func_00227d10(*(u32*)((*(u32*)((a0 + 4)) + 0x24)));
        if (((s32)(v0) != 0)) {
            if ((*(u32*)((v0 + 8)) != 0)) {
                if (((s32)(func_001ba028(*(u32*)((v0 + 8)))) != 0)) {
                    func_0016b478((u32)&loc_0, *(u32*)((v0 + 8)), s3, 1.0f);
                    if (((s32)(((s32)(fp) < (s32)(s7))) == 0)) {
                        if ((*(u8*)((s0 + 0x38)) == 0)) {
                            func_0022af48((u32)&loc_0);
                            func_0022b028(s5);
                        }
                        ((void(*)(u32))(*(u32*)((*(u32*)(s6) + 0x1c))))(s6);
                        func_00105110(s0);
                        *(u32*)((a0 + 4)) = 0;
                        func_001024a8(a0);
                    } else {
                        s1 = ((s32)(fp) < (s32)(loc_28));
                        if (((s32)(((s32)(fp) < (s32)(loc_28))) == 0)) {
                            if (((s32)(((s32)(loc_2c) < (s32)(fp))) == 0)) {
                                if (((s32)((*(u64*)((func_00167f18(0) + 8)) & 4)) != 0)) {
                                    if (((s32)(((s32)(*(u32*)((s0 + 0x3c))) < (s32)(s4))) != 0)) {
                                        func_0022afe8(s5);
                                        func_0022aef0((u32)&loc_0);
                                    } else {
                                        func_0022afa0(s5);
                                        func_0022ae98((u32)&loc_0);
                                    }
                                    func_00224950(loc_30);
                                    *(u32*)(loc_20) = (*(u32*)(loc_20) + 1);
                                    *(u8*)((s0 + 0x38)) = 1;
                                }
                            }
                        }
                        ((void(*)(u32, u32))(*(u32*)((*(u32*)(s6) + 0x28))))(s6, loc_2c - loc_28);
                        ((void(*)(u32, u32))(*(u32*)((*(u32*)(s6) + 0x34))))(s6, 0);
                        if (((s32)(s1) == 0)) {
                            ((void(*)(u32, u32))(*(u32*)((*(u32*)(s6) + 0x34))))(s6, fp - loc_28);
                            t7 = ((s32)(((s32)(loc_2c) < (s32)(fp))) == 0) ? *(u32*)((*(u32*)(s6) + 0x38)) : *(u32*)((*(u32*)(s6) + 0x3c));
                            ((void(*)(u32))(t7))(s6);
                        }
                        *(Q16*)(((u32)&loc_0 + 0x10)) = loc_0;
                        func_001391a8(s6, (u32)&loc_0 + 0x10);
                        *(f32*)(loc_24) = (*(f32*)(loc_24) + *(f32*)(&D_00349e10));
                    }
                }
            }
        }
    } else {
        func_001024a8(a0);
    }
    return;
}
