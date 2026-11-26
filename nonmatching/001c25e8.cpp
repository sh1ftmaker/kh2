// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001050d8(u32) asm("func_001050d8");
extern "C" u32 func_001c4520(u32) asm("func_001c4520");
extern "C" u32 func_001c51d8(u32) asm("func_001c51d8");
extern "C" u32 func_001ce488(u32) asm("func_001ce488");
extern "C" u32 func_001d6578(u32) asm("func_001d6578");
extern "C" void func_001c7bc8(u32, u32) asm("func_001c7bc8");
extern "C" void func_001ca678(u32, u32) asm("func_001ca678");
extern "C" void func_001cbb58(u32, u32) asm("func_001cbb58");
extern "C" void func_001cc048(u32, u32) asm("func_001cc048");
extern "C" void func_001cce38(u32, u32) asm("func_001cce38");
extern "C" void func_001d2850(u32, u32) asm("func_001d2850");
extern "C" void func_001d7458(u32, u32) asm("func_001d7458");
extern "C" void func_001da1d8(u32, u32) asm("func_001da1d8");

// 0x001c25e8 func_001c25e8
u32 func_001c25e8(u32 a0) asm("_ZN2YS7MASSOBJ6CreateEPKNS_8OBJENTRYERKN2kn7FVectorEf");
u32 func_001c25e8(u32 a0) {
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    u32 v0_2;
    u32 v0_3;
    u32 v0_4;
    u32 v0_5;
    u32 v0_6;
    switch (*(u8*)((a0 + 5))) {
    case 2:
        return func_001c4520(a0);
    case 3:
        return func_001c51d8(a0);
    case 4:
        v0 = func_001050d8(0xa00);
        func_001c7bc8(v0, a0);
        return v0;
    case 6:
        v0_0 = func_001050d8(0xa00);
        func_001cc048(v0_0, a0);
        return v0_0;
    case 7:
        v0_1 = func_001050d8(0xa00);
        func_001ca678(v0_1, a0);
        return v0_1;
    case 8:
        v0_2 = func_001050d8(0xa00);
        func_001cce38(v0_2, a0);
        return v0_2;
    case 9:
        v0_3 = func_001050d8(0xa00);
        func_001cbb58(v0_3, a0);
        return v0_3;
    case 10:
    case 11:
    case 14:
        return func_001ce488(a0);
    case 12:
        v0_4 = func_001050d8(0xa00);
        func_001d2850(v0_4, a0);
        return v0_4;
    case 13:
        v0_5 = func_001050d8(0xa00);
        func_001d7458(v0_5, a0);
        return v0_5;
    case 15:
        return func_001d6578(a0);
    case 16:
        v0_6 = func_001050d8(0xa00);
        func_001da1d8(v0_6, a0);
        return v0_6;
    case 0:
    case 1:
    case 5:
    default:
        return 0;
    }
}
