// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0018ca10(u32) asm("func_0018ca10");
extern "C" u32 func_0018db38(u32, u32, u32, u32) asm("func_0018db38");
extern "C" u32 func_001c0298(u32, u32) asm("func_001c0298");
extern "C" void func_0018e420(u32, u32, u32, u32, u32) asm("func_0018e420");
extern "C" void func_0018ef68(u32, u32, u32) asm("func_0018ef68");

// 0x0018e298 func_0018e298
u32 func_0018e298(u32 a0, u32 a1, u32 a2) asm("_ZN2YS11ATTACK_WORK3hitEPNS_6BTLOBJERNS_9COLLISIONE");
u32 func_0018e298(u32 a0, u32 a1, u32 a2) {
    u8 frame[16];
    u32 s4;
    u32 s4_0;
    u32 v0;
    u32 t5;
    if (((s32)(((u32(*)(u32, u32, u32))(*(u32*)((*(u32*)(a1) + 0x60))))(a1, a1, a2)) == 0)) {
        if ((func_001c0298(a1 + 0xa50, *(u32*)(a0)) == 0)) {
            s4 = 4;
        } else {
            *(u32*)((*(u32*)(a0) + 4)) = (*(u32*)((*(u32*)(a0) + 4)) | 0x1000);
            s4 = 1;
        }
        s4_0 = s4;
    } else {
        s4_0 = 4;
    }
    v0 = func_0018db38(*(u32*)(a0), a1, *(u16*)((*(u32*)((a2 + 0xc)) + 2)), *(u8*)((*(u32*)((a2 + 0xc)) + 1)));
    t5 = (a1 + 0xabc);
    if (((s32)((((*(u32*)((a1 + 0xabc)) | *(u32*)((t5 + 4))) & ~((0 | *(u32*)((t5 + 8))))) & 0x2000)) == 0)) {
        func_0018e420(a0, a1, v0, a2, s4_0);
    }
    ((void(*)(u32, u32, u32, u32))(*(u32*)((*(u32*)(*(u32*)((*(u32*)(a0) + 0x88))) + 0x74))))(*(u32*)((*(u32*)(a0) + 0x88)), a1, *(u32*)(a0), *(u32*)((v0 + 0x20)));
    if (((s32)(*(u32*)((*(u32*)(a0) + 0x8c))) != 0)) {
        *(u32*)((u32)frame) = *(u32*)((*(u32*)(a0) + 0x94));
        *(u32*)(((u32)frame + 4)) = a1;
        *(u32*)(((u32)frame + 8)) = *(u32*)(a0);
        func_0018ef68(*(u32*)(a0) + 0x8c, (u32)frame, 3);
    }
    *(u32*)((*(u32*)(a0) + 4)) = (*(u32*)((*(u32*)(a0) + 4)) & 0xffffefff);
    if (((s32)(*(u8*)((*(u32*)((*(u32*)(a0) + 0x28)) + 0x2f))) != 0)) {
        ((void(*)(u32, u32, u32, u32))(*(u32*)((*(u32*)(*(u32*)((*(u32*)(a0) + 0xc))) + 0x78))))(*(u32*)((*(u32*)(a0) + 0xc)), *(u8*)((*(u32*)((*(u32*)(a0) + 0x28)) + 0x2f)), 0, 0);
    }
    ((void(*)(u32, u32))(*(u32*)((*(u32*)(a1) + 0x64))))(a1, v0);
    return func_0018ca10(v0);
}
