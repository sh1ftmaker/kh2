// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034e948 asm("D_0034e948");
extern "C" u32 D_0034e958 asm("D_0034e958");
extern "C" u32 D_01c5f530 asm("D_01c5f530");
extern "C" u32 func_0016a070(u32) asm("func_0016a070");
extern "C" u32 func_0016f6a0(u32, u32) asm("func_0016f6a0");
extern "C" u32 func_001781a8(u32) asm("func_001781a8");
extern "C" u32 func_001818a0() asm("func_001818a0");
extern "C" u32 func_001a15d0(u32, u32) asm("func_001a15d0");
extern "C" void func_00175670(u32, u32, u32, u32, u32) asm("func_00175670");
extern "C" void func_00176168(u32, u32, u32) asm("func_00176168");

// 0x00177dc8 func_00177dc8
u32 func_00177dc8(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) asm("func_00177dc8");
u32 func_00177dc8(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) {
    u32 t5;
    u32 t7;
    u32 v0;
    u32 t6;
    u32 t7_0;
    u32 t5_1;
    u32 t7_2;
    u32 v0_3;
    u32 t5_4;
    u8 t7_5;
    u32 v0_6;
    u32 v0_7;
    func_00175670(a0, a1, 0, a4, a4);
    *(u32*)(a0) = (u32)&D_0034e958;
    *(u32*)((a0 + 0xb38)) = a3;
    *(u32*)((a0 + 0xb44)) = (u32)&D_01c5f530;
    *(u32*)((a0 + 0xb4c)) = 0xffffffff;
    *(u32*)((a0 + 0xb50)) = a2;
    t5 = *(u32*)((a0 + 0x588));
    *(u32*)((a0 + 0x588)) = (t5 | 0x80);
    *(u32*)((a0 + 0xb3c)) = (u32)&D_01c5f530;
    *(u32*)((a0 + 0xb40)) = ((u32)&D_01c5f530 + 0xac0);
    *(u32*)((a0 + 0xb48)) = 0;
    *(u32*)((a0 + 0xb54)) = 0;
    *(u32*)((a0 + 0xb58)) = 0xffff;
    *(u32*)((a0 + 0xb60)) = 0;
    *(u8*)((a0 + 0xb64)) = 0;
    *(u32*)(&D_0034e948) = a0;
    t7 = *(u32*)((a0 + 0x768));
    *(u32*)((a0 + 0x768)) = (t7 | 0x10);
    v0 = func_001a15d0(func_0016a070(a0), *(u32*)((a0 + 0xb50)));
    *(u32*)((a0 + 0x48c)) = v0;
    if (((s32)(v0) != 0)) {
        *(u32*)((v0 + 0x25c)) = a0;
        *(u8*)((*(u32*)((a0 + 0x48c)) + 0x1af)) = 0;
        if ((func_001818a0() == 0)) {
            t6 = *(u32*)((a0 + 0x48c));
            t7_0 = *(u32*)((t6 + 0x250));
            *(u32*)((t6 + 0x250)) = (t7_0 | 2);
            t5_1 = *(u32*)((a0 + 0x48c));
            t7_2 = *(u32*)((t5_1 + 0x250));
            *(u32*)((t5_1 + 0x250)) = (t7_2 | 4);
        }
    }
    v0_3 = func_0016f6a0(a1, 0);
    if (((s32)(v0_3) != 0)) {
        func_00176168(a0, v0_3, 0);
    }
    t5_4 = *(u32*)((a0 + 0xb50));
    t7_5 = (t5_4 ? ((s32)(t5_4) < (s32)(7)) : 0);
    if (((s32)(t7_5) == 0)) {
        if ((t5_4 == 0xa)) {
            v0_6 = func_0016f6a0(a1, 1);
            if (((s32)(v0_6) != 0)) {
                func_00176168(a0, v0_6, 1);
            }
        }
    } else {
        v0_7 = func_0016f6a0(a1, 1);
        if (((s32)(v0_7) != 0)) {
            func_00176168(a0, v0_7, 1);
        }
    }
    return func_001781a8(a0);
}
