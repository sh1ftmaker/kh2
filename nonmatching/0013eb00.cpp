// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

static inline f32 __f32(u32 x) { union { u32 u; f32 f; } c; c.u = x; return c.f; }
static inline u32 __u32(f32 x) { union { u32 u; f32 f; } c; c.f = x; return c.u; }

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 func_0013ea50(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0013ea50");
extern "C" void func_0011b6a8(u32) asm("func_0011b6a8");
extern "C" void func_002f40a0(u32, u32, f32) asm("func_002f40a0");

// 0x0013eb00 func_0013eb00
u32 func_0013eb00(u32 a0) asm("_ZN2dk7Ft4Base7calcXYZEv");
u32 func_0013eb00(u32 a0) {
    f32 loc_44;
    f32 loc_40;
    Q16 loc_0;
    u32 s0;
    u32 s1;
    u32 s5;
    u32 s6;
    f32 f20;
    f32 f21;
    Q16 loc_10;
    Q16 loc_20;
    Q16 loc_30;
    u32 s3;
    u32 s0_0;
    u32 loc_a4;
    u32 loc_a0;
    u32 v0;
    s0 = (*(u32*)((a0 + 0x114)) - (*(u16*)((a0 + 4)) >> 1));
    s1 = (*(u32*)((a0 + 0x118)) - (*(u16*)((a0 + 6)) >> 1));
    s5 = (*(u32*)((a0 + 0x114)) + (*(u16*)((a0 + 4)) >> 1));
    s6 = (*(u32*)((a0 + 0x118)) + (*(u16*)((a0 + 6)) >> 1));
    f20 = __f32((*(u32*)((a0 + 0x118)) - (*(u16*)((a0 + 6)) >> 1)));
    f21 = __f32((*(u32*)((a0 + 0x114)) - (*(u16*)((a0 + 4)) >> 1)));
    func_0011b6a8((u32)&loc_0);
    func_002f40a0((u32)&loc_0, (u32)&loc_0, *(f32*)((a0 + 0x110)));
    loc_40 = (f32)(__u32(f21));
    loc_44 = (f32)(__u32(f20));
    s3 = ((u32)&loc_44 + 0xc);
    *(Q16*)(s3) = loc_0;
    *(Q16*)((s3 + 0x10)) = loc_10;
    *(Q16*)((s3 + 0x20)) = loc_20;
    *(Q16*)((s3 + 0x30)) = loc_30;
    s0_0 = ((u32)&loc_44 + 0x4c);
    *(Q16*)(s0_0) = *(Q16*)((u32)&loc_40);
    func_0013ea50(a0, s3, s0_0, (u32)&loc_a0, (u32)&loc_a4, loc_10.w[0], loc_20.w[0], loc_30.w[0]);
    loc_40 = (f32)((s32)(s5));
    loc_44 = (f32)(__u32(f20));
    *(u64*)((a0 + 0xd8)) = ((loc_a0 | (loc_a4 << 0x10)) | (u64)(*(u32*)((a0 + 0xc))));
    *(Q16*)(s3) = loc_0;
    *(Q16*)((s3 + 0x10)) = loc_10;
    *(Q16*)((s3 + 0x20)) = loc_20;
    *(Q16*)((s3 + 0x30)) = loc_30;
    *(Q16*)(s0_0) = *(Q16*)((u32)&loc_40);
    func_0013ea50(a0, s3, s0_0, (u32)&loc_a0, (u32)&loc_a4, loc_10.w[0], loc_20.w[0], loc_30.w[0]);
    loc_40 = (f32)(__u32(f21));
    loc_44 = (f32)((s32)(s6));
    *(u64*)((a0 + 0xe8)) = ((loc_a0 | (loc_a4 << 0x10)) | (u64)(*(u32*)((a0 + 0xc))));
    *(Q16*)(s3) = loc_0;
    *(Q16*)((s3 + 0x10)) = loc_10;
    *(Q16*)((s3 + 0x20)) = loc_20;
    *(Q16*)((s3 + 0x30)) = loc_30;
    *(Q16*)(s0_0) = *(Q16*)((u32)&loc_40);
    func_0013ea50(a0, s3, s0_0, (u32)&loc_a0, (u32)&loc_a4, loc_10.w[0], loc_20.w[0], loc_30.w[0]);
    loc_40 = (f32)((s32)(s5));
    loc_44 = (f32)((s32)(s6));
    *(u64*)((a0 + 0xf8)) = ((loc_a0 | (loc_a4 << 0x10)) | (u64)(*(u32*)((a0 + 0xc))));
    *(Q16*)(s3) = loc_0;
    *(Q16*)((s3 + 0x10)) = loc_10;
    *(Q16*)((s3 + 0x20)) = loc_20;
    *(Q16*)((s3 + 0x30)) = loc_30;
    *(Q16*)(s0_0) = *(Q16*)((u32)&loc_40);
    v0 = func_0013ea50(a0, s3, s0_0, (u32)&loc_a0, (u32)&loc_a4, loc_10.w[0], loc_20.w[0], loc_30.w[0]);
    *(u64*)((a0 + 0x108)) = ((loc_a0 | (loc_a4 << 0x10)) | (u64)(*(u32*)((a0 + 0xc))));
    return v0;
}
