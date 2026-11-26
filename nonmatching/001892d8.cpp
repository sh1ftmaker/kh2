// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00187400(u32, u32, f32) asm("func_00187400");
extern "C" u32 func_001874a0(u32, u32, f32) asm("func_001874a0");
extern "C" u32 func_00189e18(u32, u32, u32) asm("func_00189e18");
extern "C" u32 func_001940a0(u32, u32) asm("func_001940a0");
extern "C" u32 func_00198aa8(u32, u32, u32, u32) asm("func_00198aa8");
extern "C" u32 func_00198ae0(u32, u32, u32, u32) asm("func_00198ae0");
extern "C" u32 func_0019f490(u32, u32) asm("func_0019f490");
extern "C" u32 func_0019f4b8(u32, u32) asm("func_0019f4b8");
extern "C" u32 func_0019f610(u32, u32, u32) asm("func_0019f610");
extern "C" u32 func_0019f670(u32, u32, u32) asm("func_0019f670");

// 0x001892d8 func_001892d8
void func_001892d8(u32 a0, u32 a1) asm("_ZN2YS6ANMATR18CheckRangeCallbackEPKNS0_5RANGEEPv");
void func_001892d8(u32 a0, u32 a1) {
    u32 t7;
    u8 t7_0;
    u32 v0;
    u32 t7_1;
    u8 t7_2;
    u32 t4;
    u32 t4_3;
    switch (*(u8*)((a0 + 4))) {
    case 0:
        *(u32*)((a1 + 0x20)) = (*(u32*)((a1 + 0x20)) | 4);
        return;
    case 1:
        *(u32*)((a1 + 0x20)) = (*(u32*)((a1 + 0x20)) | 8);
        return;
    case 2:
        *(u32*)((a1 + 0x20)) = (*(u32*)((a1 + 0x20)) | 0x10);
        return;
    case 3:
        *(u32*)((a1 + 0x20)) = (*(u32*)((a1 + 0x20)) | 0x20);
        return;
    case 4:
        func_0019f490(*(u32*)((a1 + 8)) + 0x474, *(u16*)((a0 + 6)));
        return;
    case 5:
        func_0019f4b8(*(u32*)((a1 + 8)) + 0x474, *(u16*)((a0 + 6)));
        return;
    case 6:
        func_0019f610(*(u32*)((a1 + 8)) + 0x3b4, *(u16*)((a0 + 6)), *(u16*)((a0 + 8)));
        return;
    case 7:
        func_0019f670(*(u32*)((a1 + 8)) + 0x3b4, *(u16*)((a0 + 6)), *(u16*)((a0 + 8)));
        return;
    case 9:
        *(u32*)((a1 + 0x20)) = (*(u32*)((a1 + 0x20)) | 0x200);
        return;
    case 10:
        t7 = *(u32*)((*(u32*)((a1 + 8)) + 0x588));
        t7_0 = (t7 & 1);
        if (((s32)(t7_0) != 0)) {
            func_00198ae0(*(u32*)((a1 + 8)), *(u16*)((a0 + 6)), *(u16*)((a0 + 8)), 0);
            return;
        } else {
            return;
        }
        break;
    case 11:
        *(u32*)((a1 + 0x20)) = (*(u32*)((a1 + 0x20)) | 0x400);
        return;
    case 12:
        *(u32*)((a1 + 0x20)) = (*(u32*)((a1 + 0x20)) | 0x800);
        return;
    case 13:
        *(u32*)((a1 + 0x20)) = (*(u32*)((a1 + 0x20)) | 0x8000);
        return;
    case 14:
        *(u32*)((a1 + 0x20)) = (*(u32*)((a1 + 0x20)) | 0x80000);
        return;
    case 15:
        *(u32*)((a1 + 0x20)) = (*(u32*)((a1 + 0x20)) | 0x10000);
        return;
    case 16:
        *(u8*)((a1 + 0xf8)) = (*(u8*)((a1 + 0xf8)) | 1);
        return;
    case 17:
        *(u8*)((a1 + 0xf8)) = (*(u8*)((a1 + 0xf8)) | 2);
        return;
    case 18:
        *(u8*)((a1 + 0xf8)) = (*(u8*)((a1 + 0xf8)) | 4);
        return;
    case 19:
        *(u8*)((a1 + 0xf8)) = (*(u8*)((a1 + 0xf8)) | 8);
        return;
    case 20:
        func_00189e18(*(u32*)((a1 + 8)), *(u16*)((a0 + 6)), *(u16*)((a0 + 8)));
        return;
    case 21:
        *(u32*)((a1 + 0x20)) = (*(u32*)((a1 + 0x20)) | 0x40000);
        return;
    case 22:
        if (((*(u32*)((*(u32*)((a1 + 8)) + 0x588)) & 2) != 0)) {
            if ((func_00187400(*(u32*)((a1 + 8)), a1, (f32)((s32)(*(u16*)((a0 + 6)))) * 0.01745329238474369f) != 0)) {
                *(u32*)((a1 + 0x28)) = (*(u32*)((a1 + 0x28)) | 8);
            }
        }
        return;
    case 23:
        func_001940a0(*(u32*)((a1 + 8)), *(u16*)((a0 + 6)));
        return;
    case 24:
        *(u32*)((a1 + 0x20)) = (*(u32*)((a1 + 0x20)) | 0x40);
        *(f32*)((*(u32*)((a1 + 8)) + 0xf0)) = ((f32)((s32)(*(u16*)((a0 + 6)))) * 0.009999999776482582f);
        return;
    case 25:
        *(u32*)((a1 + 0x20)) = (*(u32*)((a1 + 0x20)) | 0x100000);
        *(u32*)((*(u32*)((a1 + 8)) + 0x50c)) = *(u16*)((a0 + 6));
        return;
    case 26:
        *(u32*)((a1 + 0x20)) = (*(u32*)((a1 + 0x20)) | 0x200000);
        *(u32*)((*(u32*)((a1 + 8)) + 0x50c)) = *(u16*)((a0 + 6));
        return;
    case 27:
        *(u32*)((a1 + 0x20)) = (*(u32*)((a1 + 0x20)) | 0x400000);
        return;
    case 28:
        if (((*(u32*)((*(u32*)((a1 + 8)) + 0x588)) & 2) != 0)) {
            v0 = func_001874a0(*(u32*)((a1 + 8)), a1, (f32)((s32)(*(u16*)((a0 + 6)))) * 0.01745329238474369f);
            if ((v0 != 0)) {
                *(u32*)((a1 + 0x28)) = (*(u32*)((a1 + 0x28)) | 8);
            }
        }
        return;
    case 29:
        *(u32*)((a1 + 0x20)) = (*(u32*)((a1 + 0x20)) | 0x800000);
        return;
    case 30:
        *(u32*)((a1 + 0x20)) = (*(u32*)((a1 + 0x20)) | 0x1000000);
        return;
    case 31:
        *(u32*)((a1 + 0x20)) = (*(u32*)((a1 + 0x20)) | 0x2000000);
        return;
    case 32:
        *(u32*)((a1 + 0x20)) = (*(u32*)((a1 + 0x20)) | 0x4000000);
        return;
    case 33:
        t7_1 = *(u32*)((*(u32*)((a1 + 8)) + 0x588));
        t7_2 = (t7_1 & 1);
        if ((t7_2 != 0)) {
            func_00198ae0(*(u32*)((a1 + 8)), *(u16*)((a0 + 6)), *(u16*)((a0 + 8)), *(u16*)((a0 + 0xa)));
            return;
        } else {
            return;
        }
        break;
    case 34:
        *(u32*)((a1 + 0x20)) = (*(u32*)((a1 + 0x20)) | 0x8000000);
        return;
    case 35:
        if ((*(u16*)((a0 + 6)) == *(u32*)((a1 + 0x14)))) {
            *(u32*)((a1 + 0x20)) = (*(u32*)((a1 + 0x20)) | 0x400);
        }
        return;
    case 36:
        if (((s32)((*(u32*)((*(u32*)((a1 + 8)) + 0x588)) & 2)) != 0)) {
            t4 = (*(u32*)((a1 + 8)) + 0xabc);
            *(u32*)((t4 + 4)) = (*(u32*)((t4 + 4)) | (1 << *(u16*)((a0 + 6))));
        }
        return;
    case 37:
        if (((s32)((*(u32*)((*(u32*)((a1 + 8)) + 0x588)) & 2)) != 0)) {
            t4_3 = (*(u32*)((a1 + 8)) + 0xabc);
            *(u32*)((t4_3 + 8)) = (*(u32*)((t4_3 + 8)) | (1 << *(u16*)((a0 + 6))));
        }
        return;
    case 38:
        *(u32*)((a1 + 0x20)) = (*(u32*)((a1 + 0x20)) | 0x10000000);
        return;
    case 39:
        *(u32*)((a1 + 0x20)) = (*(u32*)((a1 + 0x20)) | 0x20000000);
        return;
    case 40:
        *(u32*)((a1 + 0x20)) = (*(u32*)((a1 + 0x20)) | 0x40000000);
        return;
    case 41:
        *(u32*)((a1 + 0x20)) = (*(u32*)((a1 + 0x20)) | 0x80000000);
        return;
    case 42:
        *(u32*)((a1 + 0x24)) = (*(u32*)((a1 + 0x24)) | 1);
        return;
    case 44:
        *(u32*)((a1 + 0x24)) = (*(u32*)((a1 + 0x24)) | 2);
        return;
    case 45:
        *(u32*)((a1 + 0x28)) = (*(u32*)((a1 + 0x28)) | 1);
        return;
    case 46:
        *(u32*)((a1 + 0x28)) = (*(u32*)((a1 + 0x28)) | 2);
        return;
    case 47:
        *(u32*)((a1 + 0x28)) = (*(u32*)((a1 + 0x28)) | 4);
        return;
    case 49:
        *(u32*)((a1 + 0x28)) = (*(u32*)((a1 + 0x28)) | 0x10);
        return;
    case 50:
        *(u32*)((a1 + 0x28)) = (*(u32*)((a1 + 0x28)) | 0x20);
        return;
    case 51:
        func_00198aa8(*(u32*)((a1 + 8)), *(u16*)((a0 + 6)), *(u16*)((a0 + 8)), *(u16*)((a0 + 0xa)));
        return;
    case 52:
        *(u32*)((a1 + 0x28)) = (*(u32*)((a1 + 0x28)) | 0x40);
        return;
    case 53:
        *(u32*)((a1 + 0x28)) = (*(u32*)((a1 + 0x28)) | 0x80);
        return;
    case 8:
    case 43:
    case 48:
    default:
        return;
    }
}
