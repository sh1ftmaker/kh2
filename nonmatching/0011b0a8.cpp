// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" f32 func_0014eb48(u32, u32, f32) asm("func_0014eb48");
extern "C" u32 func_0010c778(u32) asm("func_0010c778");
extern "C" u32 func_00111e38(u32) asm("func_00111e38");
extern "C" u32 func_0013e610(u32) asm("func_0013e610");
extern "C" void func_001143d8(u32) asm("func_001143d8");
extern "C" void func_00135aa0(u32) asm("func_00135aa0");
extern "C" void func_0013e890() asm("func_0013e890");
extern "C" void func_0016ace0(u32, u32) asm("func_0016ace0");
extern "C" void func_0016bd60(u32, u32) asm("func_0016bd60");
extern "C" void func_00190128(u32) asm("func_00190128");
extern "C" void func_00198860(u32, u32) asm("func_00198860");
extern "C" void func_0019ca90(u32, u32, u32) asm("func_0019ca90");
extern "C" void func_001ad990(u32, f32, f32, f32) asm("func_001ad990");
extern "C" void func_001c0d38(u32, u32, u32, u32) asm("func_001c0d38");

// 0x0011b0a8 kn::ChickenLittle::start_limit()
// minilink-rodata 0x0036a8c0   (float literals live here in the original)
f32 lift_0011b0a8(u32 a0) asm("_ZN2kn13ChickenLittle11start_limitEv");
f32 lift_0011b0a8(u32 a0) {
    u32 s1;
    Q16 loc_0;
    u32 s2;
    func_001143d8(a0);
    *(u32*)((a0 + 0x28)) = 0;
    *(f32*)((a0 + 0x24)) = 100.0f;
    s1 = func_00111e38(0);
    func_00135aa0(func_0010c778(*(u32*)((a0 + 4))));
    *(u32*)((a0 + 0x20)) = (*(u32*)((a0 + 0x20)) | 1);
    *(u32*)((s1 + 0x108)) = (*(u32*)((s1 + 0x108)) | 0x100);
    *(u32*)((s1 + 0x10c)) = (*(u32*)((s1 + 0x10c)) | 0x4000);
    *(u32*)((*(u32*)((a0 + 4)) + 0x108)) = (*(u32*)((*(u32*)((a0 + 4)) + 0x108)) | 0x100);
    func_001c0d38(*(u32*)((a0 + 4)), s1, 0x4000, 4);
    *(f32*)(&loc_0) = 0.0f;
    *(f32*)(((u32)&loc_0 + 4)) = 0.0f;
    *(f32*)(((u32)&loc_0 + 0xc)) = 0.0f;
    *(f32*)(((u32)&loc_0 + 8)) = -(*(f32*)((a0 + 0x28)));
    func_0016ace0(*(u32*)((a0 + 4)), (u32)&loc_0);
    func_00198860(*(u32*)((a0 + 4)), 5);
    func_001ad990(s1 + 0x834, 1.0f, 0.0f, 0.0f);
    func_001ad990(*(u32*)((a0 + 4)) + 0x834, 1.0f, 0.0f, 0.0f);
    func_00190128(*(u32*)((a0 + 4)) + 0x9f4);
    if (((s32)(*(u32*)((s1 + 0xb40))) != 0)) {
        func_0019ca90(*(u32*)((s1 + 0xb40)), 3, 0);
    }
    *(u32*)((a0 + 0x2c)) = 3;
    *(u32*)((a0 + 0x30)) = func_0013e610(3);
    s2 = (a0 + 0x40);
    loc_0 = *(Q16*)(s2);
    ((void(*)(u32, u32))(*(u32*)((*(u32*)(*(u32*)((a0 + 0x30))) + 0x1c))))(*(u32*)((a0 + 0x30)), (u32)&loc_0);
    func_0013e890();
    func_0016bd60(s1, 0x3e);
    return func_0014eb48(s1, s2, *(f32*)((a0 + 0x24)));
}
