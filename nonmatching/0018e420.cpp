// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 D_0034eef0 asm("D_0034eef0");
extern "C" u32 D_003638d0 asm("D_003638d0");
extern "C" u32 func_001a3a78() asm("func_001a3a78");
extern "C" u32 func_001a3b48(u32, u32, u32, u32, u32, u32) asm("func_001a3b48");
extern "C" u32 func_001dc5f8(u32) asm("func_001dc5f8");
extern "C" u32 func_001dc648(u32) asm("func_001dc648");
extern "C" u32 func_001de168(u32, u32, u32, u32, u32, u32) asm("func_001de168");
extern "C" u32 func_00312db8(u32, u32) asm("func_00312db8");
extern "C" void func_0017d050(u32, u32) asm("func_0017d050");
extern "C" void func_0018e108(u32, u32) asm("func_0018e108");
extern "C" void func_0018e160(u32, u32, u32, u32, u32) asm("func_0018e160");
extern "C" void func_001c2c00(u32) asm("func_001c2c00");

// 0x0018e420 func_0018e420
// minilink-rodata 0x0036ccd0   (float literals live here in the original)
void func_0018e420(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) asm("_ZN2YS11ATTACK_WORK7hitmarkEPNS_6BTLOBJEPNS_6DAMAGEERKNS_9COLLISIONEy");
void func_0018e420(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) {
    u8 frame[16];
    Q16 loc_0;
    u32 s7;
    u32 s1;
    u32 v0;
    u32 v0_0;
    u32 s0;
    u32 s1_1;
    u32 s1_2;
    u32 s2;
    u32 s1_3;
    u32 s0_4;
    u32 s4;
    s7 = *(u32*)((a2 + 0x20));
    func_0018e160((u32)&loc_0, a0, a3, a3, a4);
    func_0018e108((u32)&loc_0, a2);
    if ((*(u32*)(*(u32*)((*(u32*)(a0) + 0x24))) != 0)) {
        if ((*(u8*)((s7 + 0xb)) != 0)) {
            if (((*(u32*)((a2 + 0x18)) & 4) != 0)) {
                s1 = *(u8*)((s7 + 0xb));
                v0 = func_001de168(func_001a3a78(), 0x12, 1, 1, 0x2710, 0);
                v0_0 = func_001dc5f8(v0);
                if ((v0_0 != (u32)&D_0034eef0)) {
                    *(Q16*)(v0_0) = *(Q16*)((u32)&D_0034eef0);
                }
                s1_3 = v0;
            } else {
                if (((s32)(*(u8*)((s7 + 0x2d))) != 0)) {
                    *(u32*)(&D_003638d0) = (*(u32*)(&D_003638d0) * 0x10dcd);
                    s0 = (u64)((*(u32*)(&D_003638d0) * 0x10dcd));
                    s1_1 = (*(u8*)((s7 + 0xb)) + -1);
                    a4 = (a4 | ((u64)((u64)(1)) << (s1_1 + (s32)((u64)(func_00312db8((u32)(((u64)(s0) >> 0x20)), func_00312db8((u32)((*(u8*)((s7 + 0x2d)) + -1)) + (u64)(1), (u32)(*(u8*)((s7 + 0x2d))))))))));
                } else {
                    a4 = (a4 | ((u64)((u64)(1)) << (*(u8*)((s7 + 0xb)) + -1)));
                }
                s1_2 = (s1_1 + (s32)((u64)(func_00312db8((u32)(((u64)(s0) >> 0x20)), func_00312db8((u32)((*(u8*)((s7 + 0x2d)) + -1)) + (u64)(1), (u32)(*(u8*)((s7 + 0x2d))))))));
                s2 = ((u64)((u64)(1)) << (s1_1 + (s32)((u64)(func_00312db8((u32)(((u64)(s0) >> 0x20)), func_00312db8((u32)((*(u8*)((s7 + 0x2d)) + -1)) + (u64)(1), (u32)(*(u8*)((s7 + 0x2d)))))))));
                s1_3 = func_001a3b48(*(u32*)((*(u32*)(a0) + 0x24)), a4, (u32)&D_0034eef0, 1, 1, 0x2710);
            }
            if ((s1_3 != 0)) {
                s0_4 = func_001dc648(s1_3);
                func_0017d050((u32)&loc_0, a2);
                if ((s0_4 != (u32)frame)) {
                    *(Q16*)(s0_4) = loc_0;
                }
                func_001c2c00(s1_3);
            }
        }
    }
    if (((s32)(*(u32*)((a1 + 0x80))) != 0)) {
        if (((s32)(*(u8*)((s7 + 0x24))) != 0)) {
            if (((s32)((*(u32*)((a1 + 0x108)) & 0x200)) == 0)) {
                if (((s32)((*(u32*)((a2 + 0x18)) & 4)) == 0)) {
                    loc_0 = *(Q16*)((u32)&D_0034eef0);
                    *(f32*)(((u32)&loc_0 + 4)) = (*(f32*)(((u32)&loc_0 + 4)) - 1.0f);
                    s4 = (((u64)((u64)(1)) << (*(u8*)((s7 + 0x24)) + -1)) | 0x200);
                    func_001a3b48(a1 + 0x80, ((u64)((u64)(1)) << (*(u8*)((s7 + 0x24)) + -1)) | 0x200, (u32)&loc_0, 1, 1, 0x2710);
                }
            }
        }
    }
    return;
}
