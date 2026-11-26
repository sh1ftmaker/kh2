// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 func_00142398(u32, u16) asm("func_00142398");
extern "C" u32 func_00143f28(u16, u32) asm("func_00143f28");
extern "C" u32 func_001a3b48(u32, u32, u32, u32, u32, u32) asm("func_001a3b48");
extern "C" u32 func_001dc648(u32) asm("func_001dc648");
extern "C" void func_001422a0(u32, u32, u16, u32) asm("func_001422a0");
extern "C" void func_00143e50(u32, u16, u32, u32) asm("func_00143e50");
extern "C" void func_0017d050(u32, u32) asm("func_0017d050");
extern "C" void func_00198580(u32, u32) asm("func_00198580");
extern "C" void func_001c2c00(u32) asm("func_001c2c00");

// 0x0018ddc0 func_0018ddc0
void func_0018ddc0(u32 a0, u16 a1, u32 a2, u32 a3) asm("_ZN2YS6ATTACK6hit_bgEtRKN2kn7FVectorERPN2dk6ObjOccE");
void func_0018ddc0(u32 a0, u16 a1, u32 a2, u32 a3) {
    u8 frame[32];
    u32 v0;
    u32 v0_0;
    u32 a1_1;
    u32 t7;
    u32 v0_2;
    u32 s1;
    if (((s32)(*(u32*)(a3)) == 0)) {
        func_00143e50((u32)frame + 0x10, a1, 0, a3);
        if (((u32)frame != ((u32)frame + 0x10))) {
            *(Q16*)((u32)frame) = *(Q16*)(((u32)frame + 0x10));
        }
        v0 = func_00143f28(a1, 0);
        v0_0 = v0;
    } else {
        func_001422a0((u32)frame + 0x10, *(u32*)((*(u32*)(a3) + 4)), a1, a3);
        if (((u32)frame != ((u32)frame + 0x10))) {
            *(Q16*)((u32)frame) = *(Q16*)(((u32)frame + 0x10));
        }
        v0_0 = (*(u32*)(func_00142398(*(u32*)((*(u32*)(a3) + 4)), a1)) & 0xf);
    }
    if ((v0_0 == 1)) {
        a1_1 = 0x100;
        t7 = (*(u32*)((a0 + 4)) | 0x10);
    } else {
        a1_1 = 2;
        t7 = (*(u32*)((a0 + 4)) | 8);
    }
    *(u32*)((a0 + 4)) = t7;
    if (((a0 + 0xb0) != a2)) {
        *(Q16*)((a0 + 0xb0)) = *(Q16*)(a2);
    }
    if ((*(u32*)(*(u32*)((a0 + 0x24))) != 0)) {
        if (((s32)(*(u8*)((*(u32*)((a0 + 0x28)) + 0xb))) != 0)) {
            v0_2 = func_001a3b48(*(u32*)((a0 + 0x24)), a1_1 | ((u64)((u64)(1)) << (*(u8*)((*(u32*)((a0 + 0x28)) + 0xb)) + -1)), a2, 1, 1, 0x2710);
            if (((s32)(v0_2) != 0)) {
                s1 = func_001dc648(v0_2);
                func_0017d050((u32)frame + 0x10, (u32)frame);
                if ((s1 != ((u32)frame + 0x10))) {
                    *(Q16*)(s1) = *(Q16*)(((u32)frame + 0x10));
                }
                func_001c2c00(v0_2);
            }
        }
    }
    if (((*(u32*)((*(u32*)((a0 + 0x10)) + 0x588)) & 0x40) != 0)) {
        func_00198580(*(u32*)((a0 + 0x10)), 0x7a12a);
    }
    if (((*(u32*)((a0 + 4)) & 0x100) == 0)) {
        ((void(*)(u32, u32))(*(u32*)((*(u32*)(*(u32*)((a0 + 0xc))) + 0x70))))(*(u32*)((a0 + 0xc)), a0);
    }
    return;
}
