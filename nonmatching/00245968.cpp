// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035ed38 asm("D_0035ed38");
extern "C" u32 func_0023e690(u32, u32, u32, u32) asm("func_0023e690");
extern "C" u32 func_00246840() asm("func_00246840");
extern "C" u32 func_00287dc0() asm("func_00287dc0");
extern "C" void func_00139d78(u32) asm("func_00139d78");
extern "C" void func_0023d808(u32, u32) asm("func_0023d808");
extern "C" void func_0023e858(u32, u32, f32) asm("func_0023e858");
extern "C" void func_0023e8b8(u32, u32, f32) asm("func_0023e8b8");
extern "C" void func_0023e8d8(u32, u32, f32) asm("func_0023e8d8");
extern "C" void func_0023e9b0(u32, u32, u32) asm("func_0023e9b0");

// 0x00245968 func_00245968
// minilink-rodata 0x00371a4c   (float literals live here in the original)
u32 func_00245968() asm("_ZN2Tz4HECO9CreateObjEv");
u32 func_00245968() {
    f32 f20;
    u32 s0;
    u32 s2;
    u32 s3;
    u32 v0;
    u32 s0_0;
    if (((s32)(func_00246840()) != 0)) {
        f20 = -149.0f;
        s0 = 0xcc;
        s2 = 0x182;
        s3 = 0x452;
    } else {
        f20 = -626.0f;
        s0 = 0xb1;
        s2 = 0xa3;
        s3 = 0x451;
    }
    v0 = func_00287dc0();
    func_0023d808(v0, 0x7538);
    ((void(*)(u32, u32, u32, u32, u32, u32, u32))(*(u32*)((*(u32*)(v0) + 0x18))))(v0, 0, s3 | 0x20000000, 0x86, 2, s0, s2);
    func_0023e858(v0, 0, f20);
    func_0023e8b8(v0, 0, 0.0f);
    func_0023e8d8(v0, 0, 22.0f);
    s0_0 = *(u32*)(&D_0035ed38);
    func_00139d78(*(u32*)((*(u32*)(&D_0035ed38) + 8)));
    func_0023e9b0(v0, 0, *(u32*)((s0_0 + 8)));
    return func_0023e690(v0, 0, 0x87, 0xffffffff);
}
