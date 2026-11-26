// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_002374c8(u32, u32, u32, u32) asm("func_002374c8");
extern "C" u32 func_00237508(u32, u32, u32) asm("func_00237508");
extern "C" u32 func_00237578(u32, u32, u32) asm("func_00237578");
extern "C" void func_00237458(u32, u32, u32, u32) asm("func_00237458");
extern "C" void func_00237540(u32, u32, u32, u32) asm("func_00237540");
extern "C" void func_002375b0(u32, u32, u32, u32) asm("func_002375b0");
extern "C" void func_00237640(u32, u32, u32, u32, u32) asm("func_00237640");

// 0x0023bc58 func_0023bc58
u32 func_0023bc58(u32 a0, u32 a1, u32 a2) asm("_ZN2YI7WIN_SEQ7SetSizeEii");
u32 func_0023bc58(u32 a0, u32 a1, u32 a2) {
    u32 t6;
    u32 loc_0;
    u32 t4;
    u32 t3;
    u32 t5;
    u32 t6_0;
    u32 loc_c;
    u32 t2;
    u32 loc_8;
    u32 s1;
    u32 s4;
    u32 s5;
    u32 s6;
    u32 s7;
    u32 loc_4;
    u32 loc_10;
    s32 s3;
    u32 s4_1;
    u32 s4_2;
    t6 = *(u32*)((a0 + 0x114));
    loc_0 = a1;
    t4 = *(u32*)((a0 + 0xb4));
    u32 cse1 = t4 + (t6 * 0x24);
    t3 = *(u16*)(cse1);
    t5 = *(u32*)((cse1 + 0x14));
    t6_0 = *(u32*)((cse1 + 0x10));
    loc_0 = ((a1 + t6_0) & 0xfffffffe);
    loc_c = ((s32)(((a2 + t5) & 0xfffffffe)) >> 1);
    t2 = *(u32*)((a0 + 0xb0));
    loc_8 = ((s32)(((a1 + t6_0) & 0xfffffffe)) >> 1);
    s1 = *(u32*)(((t2 + (t3 * 0x90)) + 4));
    s4 = func_00237508(a0, s1, 0);
    s5 = func_00237578(a0, s1, 0);
    s6 = func_00237578(a0, s1, 1);
    s7 = func_00237578(a0, s1, 2);
    loc_4 = func_00237508(a0, s1, 3);
    loc_10 = (((s32)((-(loc_0) + (-(loc_0) >> 0x1f))) >> 1) - func_00237508(a0, s1, 6));
    u32 cse0 = (s32)((-(loc_0) + (-(loc_0) >> 0x1f))) >> 1;
    s3 = cse0;
    s4_1 = (cse0 - s4);
    func_00237458(a0, s1, 0, cse0 - s4);
    func_002374c8(a0, s1, 0, ((s32)((-(((a2 + t5) & 0xfffffffe)) + (-(((a2 + t5) & 0xfffffffe)) >> 0x1f))) >> 1) - s5);
    func_00237458(a0, s1, 1, s3);
    func_002374c8(a0, s1, 1, ((s32)((-(((a2 + t5) & 0xfffffffe)) + (-(((a2 + t5) & 0xfffffffe)) >> 0x1f))) >> 1) - s6);
    s4_2 = (s3 - loc_4);
    func_00237540(a0, s1, 1, loc_0);
    func_00237458(a0, s1, 2, loc_8);
    func_002374c8(a0, s1, 2, ((s32)((-(((a2 + t5) & 0xfffffffe)) + (-(((a2 + t5) & 0xfffffffe)) >> 0x1f))) >> 1) - s7);
    func_00237458(a0, s1, 3, s4_2);
    func_002374c8(a0, s1, 3, (s32)((-(((a2 + t5) & 0xfffffffe)) + (-(((a2 + t5) & 0xfffffffe)) >> 0x1f))) >> 1);
    func_002375b0(a0, s1, 3, (a2 + t5) & 0xfffffffe);
    func_00237458(a0, s1, 4, s3);
    func_002374c8(a0, s1, 4, (s32)((-(((a2 + t5) & 0xfffffffe)) + (-(((a2 + t5) & 0xfffffffe)) >> 0x1f))) >> 1);
    func_00237640(a0, s1, 4, loc_0, (a2 + t5) & 0xfffffffe);
    func_00237458(a0, s1, 5, loc_8);
    func_002374c8(a0, s1, 5, (s32)((-(((a2 + t5) & 0xfffffffe)) + (-(((a2 + t5) & 0xfffffffe)) >> 0x1f))) >> 1);
    func_002375b0(a0, s1, 5, (a2 + t5) & 0xfffffffe);
    func_00237458(a0, s1, 6, loc_10);
    func_002374c8(a0, s1, 6, loc_c);
    func_00237458(a0, s1, 7, s3);
    func_002374c8(a0, s1, 7, loc_c);
    func_00237540(a0, s1, 7, loc_0);
    func_00237458(a0, s1, 8, loc_8);
    return func_002374c8(a0, s1, 8, loc_c);
}
