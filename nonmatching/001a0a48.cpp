// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 D_00349e10 asm("D_00349e10");
extern "C" f32 func_0017c930(u32, u32) asm("func_0017c930");
extern "C" u32 func_00180618(u32) asm("func_00180618");
extern "C" void func_00184540(u32, u32, u32, f32, f32) asm("func_00184540");

// 0x001a0a48 func_001a0a48
// minilink-rodata 0x0036d448   (float literals live here in the original)
void func_001a0a48(u32 a0, u32 a1, u32 a2) asm("_ZN2YS15ACTION_DUSKJUMP13calc_movementEPNS_3OBJE");
void func_001a0a48(u32 a0, u32 a1, u32 a2) {
    u8 frame[16];
    f32 f20;
    u32 t7;
    f20 = (*(f32*)((a2 + 0xd0)) + *(f32*)(&D_00349e10));
    if ((f20 < *(f32*)((a2 + 0xd4)))) {
        *(f32*)((a2 + 0xd0)) = f20;
        *(f32*)(a0) = 0.0f;
        *(f32*)((a0 + 4)) = func_0017c930(a1, a2);
        *(f32*)((a0 + 8)) = 0.0f;
    } else {
        func_00184540((u32)frame, a2, a2, 0.949999988079071f, 0.8999999761581421f);
        if ((a0 != (u32)frame)) {
            *(Q16*)(a0) = *(Q16*)((u32)frame);
        }
        t7 = (a2 + 0x140);
        if ((*(u32*)((t7 + 0x14)) == 0x9c)) {
            if ((func_00180618(t7) == 0)) {
                *(u32*)((a0 + 4)) = 0;
            } else {
                *(f32*)((a2 + 0xd0)) = f20;
                *(f32*)((a0 + 4)) = func_0017c930(a1, a2);
            }
        } else {
            *(f32*)((a2 + 0xd0)) = f20;
            *(f32*)((a0 + 4)) = func_0017c930(a1, a2);
        }
    }
    return;
}
