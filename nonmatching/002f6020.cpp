// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct S820_4_u32 { u8 _p[4]; u32 m; u8 _q[812]; };
extern "C" u32 D_01e2fe48 asm("D_01e2fe48");
extern "C" u32 func_002f5b20(u32, u32, u32, u32) asm("func_002f5b20");
extern "C" u32 func_002f62b8(u32) asm("func_002f62b8");
extern "C" u32 func_002f6378(u32) asm("func_002f6378");
extern "C" u32 func_002f63e0(u32) asm("func_002f63e0");
extern "C" void func_002f6240(u32) asm("func_002f6240");

// 0x002f6020 func_002f6020
u32 func_002f6020(u32 a0) asm("func_002f6020");
u32 func_002f6020(u32 a0) {
    u8 frame[16];
    u32 s0;
    u8 loc_0;
    u32 v0;
    u32 v0_0;
    u32 s0_1;
    u32 v0_2;
    u32 v0_3;
    u32 v0_4;
    u32 s0_5;
    u32 v0_6;
    u32 v0_7;
    u32 s0_8;
    u32 v0_9;
    u32 v0_10;
    u32 v0_11;
    if (((s32)(((S820_4_u32*)&D_01e2fe48)[a0].m) == 0)) {
        if (((s32)(func_002f62b8(a0)) >= 0)) {
            if (((s32)(func_002f63e0(a0)) != 0)) {
                if ((*(u32*)((func_002f6378(a0) + 4)) == 0)) {
                    s0 = func_002f6378(a0);
                    if (((s32)(func_002f62b8(a0)) >= 0)) {
                        loc_0 = *(u8*)(s0);
                        v0 = loc_0;
                    } else {
                        ((S820_4_u32*)&D_01e2fe48)[a0].m = 0;
                        func_002f6240(a0);
                        v0 = 0;
                    }
                    v0_0 = v0;
                } else {
                    loc_0 = *(u8*)(func_002f6378(a0));
                    v0_0 = loc_0;
                }
                v0_3 = v0_0;
            } else {
                v0_2 = func_002f5b20(a0, (s32)((u64)(((((((((s0_1 & 0xffffc000) | 0xc) & 0xffff3fff) | 0x8000) & 0xff00ffff) | 0x10000) & ((((0xffffffff << 0x10) | 0xff) << 0x10) | 0xffff)) | 0x1000000))), (u32)frame | 4, (u32)&loc_0);
                if (((s32)(v0_2) < 0)) {
                    ((S820_4_u32*)&D_01e2fe48)[a0].m = 0;
                    func_002f6240(a0);
                    v0_2 = 0;
                } else {
                    v0_2 = loc_0;
                }
                v0_3 = v0_2;
            }
            v0_4 = v0_3;
        } else {
            v0_4 = 0;
        }
        v0_11 = v0_4;
    } else {
        if (((s32)(func_002f63e0(a0)) != 0)) {
            if ((*(u32*)((func_002f6378(a0) + 4)) == 0)) {
                s0_5 = func_002f6378(a0);
                if (((s32)(func_002f62b8(a0)) >= 0)) {
                    loc_0 = *(u8*)(s0_5);
                    v0_6 = loc_0;
                } else {
                    ((S820_4_u32*)&D_01e2fe48)[a0].m = 0;
                    func_002f6240(a0);
                    v0_6 = 0;
                }
                v0_7 = v0_6;
            } else {
                loc_0 = *(u8*)(func_002f6378(a0));
                v0_7 = loc_0;
            }
            v0_10 = v0_7;
        } else {
            v0_9 = func_002f5b20(a0, (s32)((u64)(((((((((s0_8 & 0xffffc000) | 0xc) & 0xffff3fff) | 0x8000) & 0xff00ffff) | 0x10000) & ((((0xffffffff << 0x10) | 0xff) << 0x10) | 0xffff)) | 0x1000000))), (u32)frame | 4, (u32)&loc_0);
            if (((s32)(v0_9) < 0)) {
                ((S820_4_u32*)&D_01e2fe48)[a0].m = 0;
                func_002f6240(a0);
                v0_9 = 0;
            } else {
                v0_9 = loc_0;
            }
            v0_10 = v0_9;
        }
        v0_11 = v0_10;
    }
    return v0_11;
}
