// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f5ac asm("D_0035f5ac");
extern "C" u32 D_0035f5b6 asm("D_0035f5b6");
extern "C" u32 D_0035f5bc asm("D_0035f5bc");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_0023e660(u32, u32, u32) asm("func_0023e660");
extern "C" u32 func_00276638(u32) asm("func_00276638");
extern "C" u32 func_002766d0(u32) asm("func_002766d0");
extern "C" u32 func_00287dc0() asm("func_00287dc0");
extern "C" u32 func_00292630() asm("func_00292630");
extern "C" u32 func_00293200() asm("func_00293200");
extern "C" u32 func_0029da68(u32) asm("func_0029da68");
extern "C" u32 func_0029e2f8(u32) asm("func_0029e2f8");
extern "C" u32 func_0029e3e0(u32) asm("func_0029e3e0");
extern "C" u32 func_0029e7b0(u32) asm("func_0029e7b0");
extern "C" u32 func_0029ec98(u32) asm("func_0029ec98");
extern "C" void func_0023d808(u32, u32) asm("func_0023d808");
extern "C" void func_0023e858(u32, u32, f32) asm("func_0023e858");
extern "C" void func_0023e8d8(u32, u32, f32) asm("func_0023e8d8");
extern "C" void func_0023e918(u32, u32, f32, f32, f32) asm("func_0023e918");
extern "C" void func_0023e9c8(u32, u32, u32) asm("func_0023e9c8");
extern "C" void func_0023eb50(u32, u32, u32) asm("func_0023eb50");
extern "C" void func_0023ec38(u32, u32) asm("func_0023ec38");
extern "C" void func_0029e170(u32) asm("func_0029e170");

// 0x0029e4c8 func_0029e4c8
// minilink-rodata 0x00374a00   (float literals live here in the original)
void func_0029e4c8(u32 a0) asm("_ZN2Tz5JmDic14CreateCharaObjEi");
void func_0029e4c8(u32 a0) {
    u32 s1;
    u32 v0;
    u32 v0_0;
    u32 s2;
    u32 s2_1;
    f32 f20;
    f32 f22;
    u32 s5;
    u32 s6;
    u32 s4;
    f32 f1;
    f32 f21;
    u32 v0_2;
    s1 = func_002766d0(a0);
    if ((func_0029e2f8(a0) == 0)) {
        if ((func_00292630() == 0)) {
            if ((func_00293200() == 0)) {
                v0 = func_0029da68(*(s16*)((((func_00276638(0xf) << 1) + *(u32*)(&D_0035f5ac)) + 8)));
                if (((s32)(*(s16*)(&D_0035f5b6)) < 0)) {
                    func_0029e3e0(*(u16*)((v0 + 0xc)));
                    return;
                } else {
                    func_0029e170(a0);
                    if (((s32)(a0) == 0)) {
                        v0_0 = func_00287dc0();
                        if (((s32)(func_00139d78(v0_0)) == 0)) {
                            func_0023d808(v0_0, 0x7563);
                        }
                        s2_1 = v0_0;
                    } else {
                        s2 = *(u32*)(&D_0035f5bc);
                        if (((s32)(func_00139d78(*(u32*)(&D_0035f5bc))) == 0)) {
                            func_0023d808(s2, 0x7568);
                        }
                        s2_1 = s2;
                    }
                    if (((s32)(a0) == 0)) {
                        f20 = *(f32*)((v0 + 0x1c));
                        f22 = (f32)((s32)(*(s16*)((v0 + 0x16))));
                        s5 = *(s16*)((v0 + 0x12));
                        s6 = *(s16*)((v0 + 0x14));
                    } else {
                        f20 = *(f32*)((v0 + 0x20));
                        f22 = 0.0f;
                        s5 = *(s16*)((v0 + 0x18));
                        s6 = *(s16*)((v0 + 0x1a));
                    }
                    s4 = *(u16*)((v0 + 0xc));
                    if ((func_0029ec98(*(u16*)((v0 + 0xc))) != 0)) {
                        f1 = (a0 == 0) ? *(f32*)((v0 + 0x1c)) : *(f32*)((v0 + 0x20));
                        f20 = 1.0f;
                        f21 = (f1 + -100.0f);
                    } else {
                        f21 = -100.0f;
                    }
                    ((void(*)(u32, u32, u32, u32, u32, u32, u32))(*(u32*)((*(u32*)(s2_1) + 0x18))))(s2_1, 0, s4 | 0x30000000, *(u16*)((v0 + 0xe)), 2, s5, s6);
                    func_0023e858(s2_1, 0, f21);
                    func_0023e8d8(s2_1, 0, f22);
                    func_0023e918(s2_1, 0, f20, f20, f20);
                    func_0023e9c8(s2_1, 0, (s1 + (a0 * 0x198)) + 0x4530);
                    func_0023ec38(s2_1, 1);
                    func_0023eb50(s2_1, 0, (*(u16*)((v0 + 0x10)) & 0x2000) ? (((*(u16*)((v0 + 0x10)) & 0x3ff) & 0xffff) << 0xa) : (((*(u16*)((v0 + 0x10)) & 0x3ff) & 0xffff) << 0x14));
                    v0_2 = func_0029e7b0(s4);
                    if (((s32)(v0_2) >= 0)) {
                        func_0023e660(s2_1, 0, v0_2);
                        return;
                    } else {
                        return;
                    }
                }
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
