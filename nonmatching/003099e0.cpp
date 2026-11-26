// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01e37200 asm("D_01e37200");
extern "C" u32 func_00308310(u32, u32) asm("func_00308310");
extern "C" u32 func_003088b8(u32, u32, u32, u32, u32, u32) asm("func_003088b8");
extern "C" u32 func_00308dc0(u32, u32) asm("func_00308dc0");
extern "C" u32 func_00308df0(u32, u32) asm("func_00308df0");
extern "C" void func_00308a80(u32, u32) asm("func_00308a80");
extern "C" void func_0030edb0() asm("func_0030edb0");
extern "C" void func_0030ee00() asm("func_0030ee00");

// 0x003099e0 func_003099e0
void func_003099e0(u32 a0) asm("func_003099e0");
void func_003099e0(u32 a0) {
    u8 frame[32];
    u32 v0;
    u32 s4;
    u32 a1_0;
    u32 s2;
    u32 a1_1;
    u32 s0;
    u32 v0_2;
    u32 v0_3;
    u32 s3;
    u32 v0_4;
    u32 a0_5;
    u32 s3_6;
    u32 v1;
    v0 = *(u32*)((a0 + 4));
    s4 = (((u32(*)(u32, u32, u32))(v0))(*(u32*)((a0 + 0x24)), *(u32*)((a0 + 8)), *(u32*)((a0 + 0xc))) == 0) ? 0 : *(u32*)((a0 + 0x2c));
    a1_0 = *(u32*)((a0 + 0xc));
    s2 = ((u32(*)(u32, u32, u32))(v0))(*(u32*)((a0 + 0x24)), *(u32*)((a0 + 8)), *(u32*)((a0 + 0xc)));
    if (((s32)(a1_0) > 0)) {
        func_00308a80(*(u32*)((a0 + 8)), a1_0);
    }
    if (((s32)(s4) > 0)) {
        func_00308a80(s2, s4);
    }
    a1_1 = *(u32*)((a0 + 0x34));
    func_0030edb0();
    if (((s32)((a1_1 & 4)) != 0)) {
        s0 = func_00308df0((u32)&D_01e37200, a1_1 >> 0x10);
    } else {
        s0 = func_00308dc0((u32)&D_01e37200, a1_1 >> 0x10);
    }
    func_0030ee00();
    *(u32*)((s0 + 0x1c)) = *(u32*)((a0 + 0x1c));
    *(u32*)((s0 + 0x20)) = 0x8000000a;
    v0_2 = *(u32*)((a0 + 0x30));
    if ((v0_2 != 0)) {
        do {
            v0_3 = func_003088b8(0x80000008, s0, 0x40, s2, *(u32*)((a0 + 0x28)), s4);
        } while (((s32)(v0_3) == 0));
    } else {
        *(u32*)((s0 + 0x10)) = 0;
        *(u32*)((s0 + 0x18)) = 0;
        if (((s32)(s4) > 0)) {
            *(u32*)((u32)frame) = s2;
            *(u32*)(((u32)frame + 4)) = *(u32*)((a0 + 0x28));
            *(u32*)(((u32)frame + 8)) = s4;
            *(u32*)(((u32)frame + 0xc)) = 0;
            s3 = 1;
        } else {
            s3 = 0;
        }
        *(u32*)(((u32)frame + (s3 << 4))) = s0;
        *(u32*)((((u32)frame + 4) + (s3 << 4))) = *(u32*)((a0 + 0x20));
        *(u32*)((((u32)frame + 8) + (s3 << 4))) = 0x40;
        *(u32*)((((u32)frame + 0xc) + (s3 << 4))) = 0;
        do {
            v0_4 = func_00308310((u32)frame, s3 + 1);
            if (((s32)(v0_4) != 0)) {
                return;
            }
            a0_5 = 0xffffffff;
            s3_6 = (s3 + 1);
            v1 = 0x100000;
            do {
                v1 = (v1 + -1);
            } while ((v1 != a0_5));
        } while ((v0_4 == 0));
    }
    return;
}
