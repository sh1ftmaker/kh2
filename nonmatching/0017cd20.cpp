// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 func_00177860(u32) asm("func_00177860");
extern "C" u32 func_001c3618(u32, u32) asm("func_001c3618");
extern "C" u32 func_001ce300(u32) asm("func_001ce300");
extern "C" void func_0017f488(u32, u32, f32, f32) asm("func_0017f488");

// 0x0017cd20 func_0017cd20
void func_0017cd20(u32 a0, u32 a1) asm("_ZN2YS11ACTION_JUMP10party_jumpEPNS_3OBJEb");
void func_0017cd20(u32 a0, u32 a1) {
    u8 frame[16];
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    v0 = func_001c3618(func_00177860(a1), 2);
    if (((s32)(((s32)(v0) < (s32)(5))) != 0)) {
        if ((v0 != 0)) {
            if (((*(u32*)((a1 + 0x10c)) & 2) != 0)) {
                v0_0 = func_001ce300(v0);
                if (((u32)frame != (a1 + 0x10))) {
                    *(Q16*)((u32)frame) = *(Q16*)((a1 + 0x10));
                }
                if ((0.0f < *(f32*)(((u32)frame + 0xc)))) {
                    *(f32*)(((u32)frame + 0xc)) = *(f32*)((v0_0 + 8));
                }
                *(f32*)(((u32)frame + 4)) = *(f32*)((v0_0 + 4));
                func_0017f488(a1 + 0x140, 0xca, 0.0f, 0.0f);
                ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)((a1 + 0xc))) + 8))))(*(u32*)((a1 + 0xc)));
                *(u32*)((a1 + 0x100)) = 4;
                *(u32*)((a1 + 0x104)) = 5;
                *(u32*)((a1 + 0x108)) = (*(u32*)((a1 + 0x108)) | 0x10000);
                *(u32*)((a1 + 0x10c)) = (*(u32*)((a1 + 0x10c)) & 0xfffffffd);
            }
        }
    } else {
        v0_1 = func_001ce300(v0);
        if (((u32)frame != (a1 + 0x10))) {
            *(Q16*)((u32)frame) = *(Q16*)((a1 + 0x10));
        }
        if ((0.0f < *(f32*)(((u32)frame + 0xc)))) {
            *(f32*)(((u32)frame + 0xc)) = *(f32*)((v0_1 + 8));
        }
        *(f32*)(((u32)frame + 4)) = *(f32*)((v0_1 + 4));
        func_0017f488(a1 + 0x140, 0xca, 0.0f, 0.0f);
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)((a1 + 0xc))) + 8))))(*(u32*)((a1 + 0xc)));
        *(u32*)((a1 + 0x100)) = 4;
        *(u32*)((a1 + 0x104)) = 5;
        *(u32*)((a1 + 0x108)) = (*(u32*)((a1 + 0x108)) | 0x10000);
        *(u32*)((a1 + 0x10c)) = (*(u32*)((a1 + 0x10c)) & 0xfffffffd);
    }
    return;
}
