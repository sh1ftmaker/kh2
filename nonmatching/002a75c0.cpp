// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f5f8 asm("D_0035f5f8");
extern "C" u32 D_0035f5fc asm("D_0035f5fc");
extern "C" u32 D_0035f5fd asm("D_0035f5fd");
extern "C" u32 func_00290948(u32, u32) asm("func_00290948");
extern "C" void func_00293d80(u32) asm("func_00293d80");
extern "C" void func_002b64d8(u32) asm("func_002b64d8");
extern "C" void func_002b6530(u32) asm("func_002b6530");

// 0x002a75c0 Tz::JmSynthe::GetMixData()
void lift_002a75c0() asm("_ZN2Tz8JmSynthe10GetMixDataEv");
void lift_002a75c0() {
    u8 frame[16];
    u32 v0;
    u32 t4;
    u32 t5;
    u32 v0_0;
    u32 sp;
    func_002b64d8(*(u32*)(&D_0035f5f8));
    v0 = func_00290948(*(u32*)(&D_0035f5f8), 0);
    t4 = 0;
    if (((s32)(*(u32*)((v0 + 8))) > 0)) {
        t5 = *(u32*)((v0 + 8));
        v0_0 = (v0 + 0x10);
        do {
            t4 = (*(s16*)((v0_0 + 6)) ? ((t4 + 1) + 1) : (t4 + 1));
            t5 = (t5 + -1);
            v0_0 = (v0_0 + 0x20);
        } while (((s32)(t5) != 0));
    } else {
        sp = (u32)frame;
    }
    *(u8*)(&D_0035f5fd) = t4;
    *(u8*)(&D_0035f5fc) = *(u8*)((func_00290948(*(u32*)(&D_0035f5f8), 1) + 8));
    func_002b6530(*(u32*)(&D_0035f5f8));
    func_00293d80(0x13ee);
    if ((*(u32*)(&D_0035f5f8) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035f5f8)) + 4))))(*(u32*)(&D_0035f5f8));
        *(u32*)(&D_0035f5f8) = 0;
    }
    return;
}
