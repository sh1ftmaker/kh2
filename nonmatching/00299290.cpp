// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f200 asm("D_0035f200");
extern "C" u32 D_0035f598 asm("D_0035f598");
extern "C" u32 D_0035f5a0 asm("D_0035f5a0");
extern "C" u32 func_00138c10(u32, u32) asm("func_00138c10");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_00276568() asm("func_00276568");
extern "C" u32 func_002766d0() asm("func_002766d0");
extern "C" u32 func_00287bc0() asm("func_00287bc0");
extern "C" u32 func_002891e8(u32) asm("func_002891e8");
extern "C" u32 func_0028b040(u32) asm("func_0028b040");
extern "C" u32 func_00294348(u32) asm("func_00294348");
extern "C" u32 func_002983d8(u32) asm("func_002983d8");
extern "C" u32 func_002a9d68() asm("func_002a9d68");
extern "C" u32 func_002aa5b8(u32, u32) asm("func_002aa5b8");
extern "C" void func_002aa8e0(u32, u32) asm("func_002aa8e0");

// 0x00299290 func_00299290
void func_00299290() asm("_ZN2Tz7JmAlbum13UpdateNewMarkEv");
void func_00299290() {
    u32 s2;
    u32 t5;
    u32 s3;
    u32 v0;
    u32 v0_0;
    u32 t7;
    u32 s1;
    u32 s0;
    u32 v0_1;
    u32 s0_2;
    u32 s0_3;
    u32 t6;
    u32 s0_4;
    u32 s0_5;
    u32 s0_6;
    s2 = func_002a9d68();
    t5 = *(u32*)(*(u32*)(&D_0035f598));
    if (((s32)(t5) != 0)) {
        s3 = func_002766d0();
        v0 = func_00287bc0();
        if ((v0 == 4)) {
            v0_0 = func_0028b040(*(u32*)(&D_0035f200));
            v0 = v0_0;
        } else {
            v0 = *(s8*)(&D_0035f5a0);
        }
        t7 = (v0 << 1);
        s1 = *(s16*)(((t7 + *(u32*)(&D_0035f598)) + 4));
        if (((s32)(func_00294348(func_002983d8(s1))) != 0)) {
            s0 = *(s8*)(func_00276568());
            v0_1 = func_002aa5b8(s0, s1);
            s0_2 = (s0 << 2);
            s0_3 = (s2 + s0_2);
            t6 = *(u32*)(((s0_3 + ((v0_1 >> 5) << 2)) + 0x44));
            if (((s32)((t6 & (1 << (v0_1 & 0x1f)))) == 0)) {
                func_002aa8e0(*(s8*)(func_00276568()), s1);
                if ((v0 == 4)) {
                    s0_4 = (func_002891e8(*(u32*)(&D_0035f200)) * 0x198);
                    s0_5 = (s3 + s0_4);
                    s0_6 = (s0_5 + 0xa998);
                    if (((s32)(func_00139d78(s0_6)) != 0)) {
                        func_00138c10(s0_6, 0x5d);
                        return;
                    } else {
                        return;
                    }
                } else {
                    return;
                }
            } else {
                return;
            }
        } else {
            return;
        }
    } else {
        return;
    }
}
