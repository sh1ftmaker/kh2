// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00139688(u32) asm("func_00139688");
extern "C" u32 func_00139c18(u32) asm("func_00139c18");
extern "C" u32 func_0013a7e8(u32) asm("func_0013a7e8");
extern "C" u32 func_0013d7e0() asm("func_0013d7e0");
extern "C" u32 func_00158290(u32, u32, u32) asm("func_00158290");
extern "C" u32 func_0016c060(u32, u32, u32) asm("func_0016c060");
extern "C" u32 func_0017df58(u32) asm("func_0017df58");
extern "C" void func_001386e0(u32, u32, u32, u32, u32, u32) asm("func_001386e0");
extern "C" void func_00139660(u32) asm("func_00139660");
extern "C" void func_001396b0(u32) asm("func_001396b0");
extern "C" void func_00154048(u32, u32, u32, u32, u32, u32) asm("func_00154048");
extern "C" void func_0031a260(u32, u32) asm("func_0031a260");

// 0x001572e8 wtarget_001572e8(unsigned int, unsigned int, unsigned int, unsigned int)
u32 lift_001572e8(u32 a0, u32 a1, u32 a2) asm("_Z16wtarget_001572e8jjjj");
u32 lift_001572e8(u32 a0, u32 a1, u32 a2) {
    u32 s5;
    u32 s1;
    u32 s0;
    u32 v0;
    u32 loc_4;
    u32 loc_0;
    u32 v0_0;
    u32 v0_1;
    u32 v0_2;
    s5 = func_00158290(a0, a1, a2);
    s1 = func_0013a7e8(1);
    s0 = func_0013d7e0();
    v0 = func_00139c18(a0 + 0x6c4);
    func_001386e0((a0 + (v0 * 0x198)) + 0x6c4, 0x1b58, s1, s0, a1, s5);
    *(u32*)((((a0 + (v0 * 0x198)) + 0x6c4) + 0x188)) = a2;
    *(u32*)((((a0 + (v0 * 0x198)) + 0x6c4) + 0x18c)) = (a0 + 0x1a30);
    func_001396b0((a0 + (v0 * 0x198)) + 0x6c4);
    if (((s32)(*(u32*)((((a0 + (v0 * 0x198)) + 0x6c4) + 0x18c))) != 0)) {
        *(u32*)((((a0 + (v0 * 0x198)) + 0x6c4) + 0x190)) = 0;
        func_001396b0((a0 + (v0 * 0x198)) + 0x6c4);
        if (((s32)(*(u32*)((((a0 + (v0 * 0x198)) + 0x6c4) + 0x190))) != 0)) {
            func_0031a260((a0 + (v0 * 0x198)) + 0x6c4, 0);
        }
    }
    loc_4 = 0;
    loc_0 = 0;
    v0_0 = func_0016c060(func_0017df58(0), (u32)&loc_0, (u32)&loc_4);
    if (((s32)(v0_0) != 0)) {
        v0_1 = func_00139c18(a0 + 0x1390);
        func_00154048((a0 + (v0_1 * 0x350)) + 0x1390, 0x32c8, loc_4, loc_0, 3, s5);
        *(u32*)((((a0 + (v0_1 * 0x350)) + 0x1390) + 0x18c)) = ((a0 + (v0 * 0x198)) + 0x6c4);
        func_001396b0((a0 + (v0_1 * 0x350)) + 0x1390);
        if (((s32)(*(u32*)((((a0 + (v0_1 * 0x350)) + 0x1390) + 0x18c))) != 0)) {
            *(u32*)((((a0 + (v0_1 * 0x350)) + 0x1390) + 0x190)) = 0;
            func_001396b0((a0 + (v0_1 * 0x350)) + 0x1390);
            if (((s32)(*(u32*)((((a0 + (v0_1 * 0x350)) + 0x1390) + 0x190))) != 0)) {
                func_0031a260((a0 + (v0_1 * 0x350)) + 0x1390, 0);
            }
        }
        func_00139660((a0 + (v0_1 * 0x350)) + 0x1390);
        v0_2 = func_00139688((a0 + (v0_1 * 0x350)) + 0x1390);
        v0_0 = v0_2;
    }
    return v0_0;
}
