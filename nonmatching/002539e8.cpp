// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct S16_12_u32 { u8 _p[12]; u32 m; };
struct S16_4_u32 { u8 _p[4]; u32 m; u8 _q[8]; };
struct S16_8_u32 { u8 _p[8]; u32 m; u8 _q[4]; };
extern "C" u32 D_002539d0 asm("D_002539d0");
extern "C" u32 D_0035eec0 asm("D_0035eec0");
extern "C" u32 D_0035eee0 asm("D_0035eee0");
extern "C" u32 D_0035ef54 asm("D_0035ef54");
extern "C" u32 D_0035ef58 asm("D_0035ef58");
extern "C" u32 _Z13func_00253978Pv asm("_Z13func_00253978Pv");
extern "C" u32 func_00253b00() asm("func_00253b00");
extern "C" u32 func_00253b30(u32, u32) asm("func_00253b30");
extern "C" void func_00168388(u32, u32, u32, u32) asm("func_00168388");
extern "C" void func_001684c0(u32, u32, u32, u32) asm("func_001684c0");
extern "C" void func_002ff2e8(u32, u32) asm("func_002ff2e8");

// 0x002539e8 Tz::CMData::BackRead(int, char*)
u32 lift_002539e8(u32 a0, u32 a1) asm("_ZN2Tz6CMData8BackReadEiPc");
u32 lift_002539e8(u32 a0, u32 a1) {
    u8 frame[128];
    u32 t6;
    u32 t6_0;
    u32 v0;
    u32 v0_1;
    t6 = *(u8*)(&D_0035ef58);
    if (((s32)(t6) == 0)) {
        if (((s32)(a1) == 0)) {
            a1 = *(u32*)(((a0 << 2) + (u32)&D_0035eec0));
        }
        if ((a0 != 6)) {
            a1 = func_00253b30((u32)frame, a1);
        } else {
            func_002ff2e8((u32)frame, a1);
            a1 = (u32)frame;
        }
        t6_0 = *(u32*)(&D_0035ef54);
        *(u32*)(&D_0035ef54) = (t6_0 + 1);
        *(u32*)(((a0 << 4) + (u32)&D_0035eee0)) = t6_0;
        ((S16_4_u32*)&D_0035eee0)[a0].m = 2;
        v0 = func_00253b00();
        ((S16_8_u32*)&D_0035eee0)[a0].m = 0;
        ((S16_12_u32*)&D_0035eee0)[a0].m = v0;
        if ((a0 != 6)) {
            func_001684c0(a1, v0, (u32)&_Z13func_00253978Pv, (a0 << 4) + (u32)&D_0035eee0);
        } else {
            func_00168388(a1, *(u32*)((((u32)&D_0035eee0 + 0x60) + 0xc)), (u32)&D_002539d0, (u32)&D_0035eee0 + 0x60);
        }
        *(u8*)(&D_0035ef58) = 1;
        v0_1 = 0;
    } else {
        v0_1 = 0xffffffff;
    }
    return v0_1;
}
