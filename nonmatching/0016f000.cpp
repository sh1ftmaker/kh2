// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0032f054 asm("D_0032f054");
extern "C" u32 func_001050d8(u32) asm("func_001050d8");
extern "C" u32 func_0016e920(u32) asm("func_0016e920");
extern "C" u32 func_0016f6f8(u32, u32, f32) asm("func_0016f6f8");
extern "C" u32 func_0016f770(u32) asm("func_0016f770");
extern "C" u32 func_0016f7a0(u32) asm("func_0016f7a0");
extern "C" u32 func_00179fd0(u32, u32, u32, f32) asm("func_00179fd0");
extern "C" u32 func_0017e418(u32, u32, f32) asm("func_0017e418");
extern "C" u32 func_00182690(f32) asm("func_00182690");
extern "C" u32 func_001c25e8(u32, u32, f32) asm("func_001c25e8");
extern "C" u32 func_001d1438(u32) asm("func_001d1438");
extern "C" u32 func_002be800(u32, u32, f32) asm("func_002be800");
extern "C" u32 func_002d0290(u32, u32, f32) asm("func_002d0290");
extern "C" void func_0018aba0(u32, u32, u32, u32, f32) asm("func_0018aba0");
extern "C" void func_00195ed8(u32, u32, u32, f32) asm("func_00195ed8");
extern "C" void func_00197fe0(u32, u32, u32, u32, f32) asm("func_00197fe0");
extern "C" void func_001a6bc8(u32, u32, u32, f32) asm("func_001a6bc8");
extern "C" void func_001a8618(u32, u32, u32, f32) asm("func_001a8618");
extern "C" void func_001aea00(u32, u32, u32, f32) asm("func_001aea00");
extern "C" void func_001aeb40(u32, u32, u32, f32) asm("func_001aeb40");
extern "C" void func_001b1d60(u32, u32, u32, f32) asm("func_001b1d60");
extern "C" void func_001b20a0(u32, u32, u32, f32) asm("func_001b20a0");
extern "C" void func_001b3a90(u32, u32, u32, f32) asm("func_001b3a90");
extern "C" void func_001bf270(u32, u32, u32, u32, f32) asm("func_001bf270");
extern "C" void func_001c2338(u32, u32, u32, f32) asm("func_001c2338");
extern "C" void func_001c2ce8(u32, u32, u32, f32) asm("func_001c2ce8");
extern "C" void func_001c4120(u32, u32, u32, f32) asm("func_001c4120");
extern "C" void func_001c7fb8(u32, u32, u32, f32) asm("func_001c7fb8");
extern "C" void func_001d9ef0(u32, u32, u32, f32) asm("func_001d9ef0");

// 0x0016f000 func_0016f000
u32 func_0016f000(u32 a0, u32 a1, f32 fa0) asm("_ZN2YS8OBJENTRY6AppearEjRKN2kn7FVectorEf");
u32 func_0016f000(u32 a0, u32 a1, f32 fa0) {
    u32 s1;
    u32 v0;
    u32 v0_0;
    u32 s0;
    u32 s0_1;
    u32 v0_2;
    u32 v0_3;
    u32 t6;
    u32 v0_4;
    u32 v0_5;
    u32 v0_6;
    u32 v0_7;
    u32 v0_8;
    u32 v0_9;
    u32 v0_10;
    u32 v0_11;
    u32 v0_12;
    u32 v0_13;
    u32 v0_14;
    u32 v0_15;
    u32 v0_16;
    u32 v0_17;
    u32 v0_18;
    u32 s0_19;
    u32 v0_20;
    u32 v0_21;
    u32 v0_22;
    u32 v0_23;
    if (((s32)(func_0016f6f8(a0, a1, fa0)) != 0)) {
        s1 = func_0016e920(a0);
        v0 = func_001050d8(0x9c0);
        func_00197fe0(v0, s1, 6, a1, fa0);
        v0_23 = v0;
    } else {
        if ((func_0016f770(a0) == 0)) {
            if (((s32)(func_0016f7a0(a0)) != 0)) {
                v0_21 = 0;
            } else {
                if ((a0 == 0x236)) {
                    v0_0 = func_0016e920(func_001d1438(0));
                    s0 = *(s8*)((v0_0 + 0x57));
                    if (((s32)(s0) == 0)) {
                        s0_1 = *(u8*)(&D_0032f054);
                        s0 = s0_1;
                        v0_0 = func_0016e920(func_001d1438(s0_1));
                    }
                    v0_20 = func_00179fd0(v0_0, s0, a1, fa0);
                } else {
                    v0_2 = func_0016e920(a0);
                    v0_3 = func_00182690((f32)((s32)(*(u8*)((v0_2 + 0x54)))));
                    if ((v0_3 != 0)) {
                        t6 = *(u8*)((v0_2 + 4));
                        switch (t6) {
                        case 0:
                            s0_19 = func_00179fd0(v0_2, *(s8*)((v0_2 + 0x57)), a1, fa0);
                            break;
                        case 1:
                            s0_19 = func_0017e418(v0_2, a1, fa0);
                            break;
                        case 3:
                            v0_4 = func_001050d8(0xb00);
                            func_001aea00(v0_4, v0_2, a1, fa0);
                            s0_19 = v0_4;
                            break;
                        case 4:
                            v0_5 = func_001050d8(0xb00);
                            func_001b1d60(v0_5, v0_2, a1, fa0);
                            s0_19 = v0_5;
                            break;
                        case 7:
                            v0_6 = func_001050d8(0xa00);
                            func_00195ed8(v0_6, v0_2, a1, fa0);
                            s0_19 = v0_6;
                            break;
                        case 9:
                            v0_7 = func_001050d8(0xaf0);
                            func_001b3a90(v0_7, v0_2, a1, fa0);
                            s0_19 = v0_7;
                            break;
                        case 10:
                            v0_8 = func_001050d8(0xa00);
                            func_001a8618(v0_8, v0_2, a1, fa0);
                            s0_19 = v0_8;
                            break;
                        case 12:
                            v0_9 = func_001050d8(0xb00);
                            func_001aeb40(v0_9, v0_2, a1, fa0);
                            s0_19 = v0_9;
                            break;
                        case 13:
                            v0_10 = func_001050d8(0xaf0);
                            func_001b20a0(v0_10, v0_2, a1, fa0);
                            s0_19 = v0_10;
                            break;
                        case 15:
                            v0_11 = func_001050d8(0xb40);
                            func_0018aba0(v0_11, v0_2, 5, a1, fa0);
                            s0_19 = v0_11;
                            break;
                        case 16:
                            s0_19 = func_002d0290(v0_2, a1, fa0);
                            break;
                        case 17:
                            s0_19 = func_002be800(v0_2, a1, fa0);
                            break;
                        case 18:
                            v0_12 = func_001050d8(0x9f0);
                            func_001bf270(v0_12, v0_2, a1, 0, 1.0f);
                            s0_19 = v0_12;
                            break;
                        case 19:
                            v0_13 = func_001050d8(0xd00);
                            func_001c7fb8(v0_13, v0_2, a1, fa0);
                            s0_19 = v0_13;
                            break;
                        case 20:
                            v0_14 = func_001050d8(0xa00);
                            func_001c2338(v0_14, v0_2, a1, fa0);
                            s0_19 = v0_14;
                            break;
                        case 21:
                            v0_15 = func_001050d8(0xb00);
                            func_001c4120(v0_15, v0_2, a1, fa0);
                            s0_19 = v0_15;
                            break;
                        case 22:
                            s0_19 = func_001c25e8(v0_2, a1, fa0);
                            break;
                        case 23:
                            v0_16 = func_001050d8(0xaf0);
                            func_001c2ce8(v0_16, v0_2, a1, fa0);
                            s0_19 = v0_16;
                            break;
                        case 24:
                            v0_17 = func_001050d8(0xa00);
                            func_001d9ef0(v0_17, v0_2, a1, fa0);
                            s0_19 = v0_17;
                            break;
                        case 2:
                        case 5:
                        case 6:
                        case 8:
                        case 11:
                        case 14:
                        default:
                            v0_18 = func_001050d8(0xaf0);
                            func_001a6bc8(v0_18, v0_2, a1, fa0);
                            s0_19 = v0_18;
                            break;
                        }
                        v0_3 = s0_19;
                    } else {
                        v0_3 = 0;
                    }
                    v0_20 = v0_3;
                }
                v0_21 = v0_20;
            }
            v0_22 = v0_21;
        } else {
            v0_22 = 0;
        }
        v0_23 = v0_22;
    }
    return v0_23;
}
