// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 D_00349e10 asm("D_00349e10");
extern "C" u32 func_002e34c8(u32) asm("func_002e34c8");
extern "C" void func_001991a8(u32, u32) asm("func_001991a8");
extern "C" void func_002e0fa0(u32, u32) asm("func_002e0fa0");
extern "C" void func_002e71a0(u32, u32, u32, u32) asm("func_002e71a0");

// 0x002e1288 wtarget_002e1288(unsigned int, unsigned int, unsigned int, unsigned int)
// minilink-rodata 0x00375ed4   (float literals live here in the original)
void lift_002e1288(u32 a0) asm("_Z16wtarget_002e1288jjjj");
void lift_002e1288(u32 a0) {
    u8 frame[64];
    *(u8*)((a0 + 0x85)) = 0;
    if (((s32)(*(u8*)((a0 + 0x84))) == 0)) {
        *(f32*)((a0 + 0x78)) = (*(f32*)((a0 + 0x78)) + ((((f32)(*(s32*)((a0 + 0x7c))) * *(f32*)(&D_00349e10)) * 0.5f) / 100.0f));
    }
    if ((((f32)(*(s32*)((*(u32*)((a0 + 0x64)) + 4))) + 1.0f) <= *(f32*)((a0 + 0x78)))) {
        *(u32*)((a0 + 0x74)) = (*(u32*)((a0 + 0x74)) + 1);
        if (((s32)(((s32)(*(u32*)((a0 + 0x74))) < (s32)(func_002e34c8(a0 + 0x68)))) == 0)) {
            func_001991a8(0x15, 0);
            *(u32*)((a0 + 0x74)) = (func_002e34c8(a0 + 0x68) + -1);
            *(f32*)((a0 + 0x78)) = (f32)(*(s32*)((*(u32*)((a0 + 0x64)) + 4)));
        } else {
            func_002e0fa0(a0, *(u32*)((a0 + 0x74)));
        }
    }
    func_002e71a0((u32)frame, *(u32*)((a0 + 0x70)), *(u8*)((*(u32*)((a0 + 0x64)) + 8)), 1);
    if (((a0 + 0x90) != (u32)frame)) {
        *(Q16*)((a0 + 0x90)) = *(Q16*)((u32)frame);
        *(Q16*)(((a0 + 0x90) + 0x10)) = *(Q16*)(((u32)frame + 0x10));
        *(Q16*)(((a0 + 0x90) + 0x20)) = *(Q16*)(((u32)frame + 0x20));
        *(Q16*)(((a0 + 0x90) + 0x30)) = *(Q16*)(((u32)frame + 0x30));
    }
    return;
}
