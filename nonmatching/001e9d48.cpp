// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01d9e6e0 asm("D_01d9e6e0");
extern "C" u32 D_01d9e6e8 asm("D_01d9e6e8");
extern "C" u32 func_001e7a98(u32, u32, u32) asm("func_001e7a98");
extern "C" void func_002f3cd8(u32, u32, u32) asm("func_002f3cd8");

// 0x001e9d48 func_001e9d48
// minilink-rodata 0x003700bc   (float literals live here in the original)
void func_001e9d48(u32 a0, u32 a1, u32 a2) asm("_Z4apeaP11_pppPObjectP9PVertexApP10pppSVECTOR");
void func_001e9d48(u32 a0, u32 a1, u32 a2) {
    u8 frame[16];
    u32 v0;
    u32 s2;
    if ((*(u32*)((a1 + 0xc)) != 0xffffffff)) {
        if (((s32)((*(u32*)((*(u32*)(&D_01d9e6e0) + 0x80)) + (*(u32*)((a1 + 0xc)) << 4))) != 0)) {
            v0 = func_001e7a98(*(u32*)(&D_01d9e6e0), *(u32*)((*(u32*)(&D_01d9e6e0) + 0x80)) + (*(u32*)((a1 + 0xc)) << 4), a2);
            *(u32*)((v0 + 4)) = a0;
            s2 = v0;
        } else {
            s2 = 0;
        }
        *(f32*)(((u32)frame + 4)) = (f32)((s32)(*(s16*)((a2 + 2))));
        *(f32*)((u32)frame) = (f32)((s32)(*(s16*)(a2)));
        *(f32*)(((u32)frame + 8)) = (f32)((s32)(*(s16*)((a2 + 4))));
        *(f32*)(((u32)frame + 0xc)) = 1.0f;
        func_002f3cd8((u32)frame, *(u32*)(&D_01d9e6e8) + 0x10, (u32)frame);
        *(f32*)(((s2 + *(u32*)((a1 + 0x10))) + 0xa0)) = *(f32*)((u32)frame);
        *(f32*)((((s2 + *(u32*)((a1 + 0x10))) + 0xa0) + 4)) = *(f32*)(((u32)frame + 4));
        *(f32*)((((s2 + *(u32*)((a1 + 0x10))) + 0xa0) + 8)) = *(f32*)(((u32)frame + 8));
    }
    return;
}
