// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0032fcc9 asm("D_0032fcc9");
extern "C" u32 D_01d48d94 asm("D_01d48d94");
extern "C" u32 func_001b6d70(u32) asm("func_001b6d70");
extern "C" void func_001b6d88(u32, u32) asm("func_001b6d88");
extern "C" void func_001b8bf8(u32, u32) asm("func_001b8bf8");
extern "C" void func_001b8c70(u32, u32) asm("func_001b8c70");
extern "C" void func_001c3670(u32) asm("func_001c3670");
extern "C" void func_001c36e8(u32) asm("func_001c36e8");
extern "C" void func_001c8ec0(u32) asm("func_001c8ec0");

// 0x001b89d0 func_001b89d0
u32 func_001b89d0(u32 a0) asm("func_001b89d0");
u32 func_001b89d0(u32 a0) {
    u8 frame[16];
    u32 s3;
    u32 s4;
    u32 v0;
    u32 sp;
    u32 s3_0;
    u32 v0_1;
    u32 sp_2;
    u32 s3_3;
    u32 v0_4;
    u32 sp_5;
    u32 s3_6;
    u32 sp_7;
    u32 s3_8;
    u32 sp_9;
    u32 sp_10;
    switch (*(u16*)(a0)) {
    case 1:
        func_001b8bf8(a0, 0);
        sp_10 = (u32)frame;
        break;
    case 2:
        func_001b8bf8(a0, 1);
        sp_10 = (u32)frame;
        break;
    case 3:
        func_001b8bf8(a0, 2);
        sp_10 = (u32)frame;
        break;
    case 4:
        if (((s32)(*(u16*)((a0 + 2))) != 0)) {
            s3 = 0;
            s4 = 0xfffffffd;
            do {
                v0 = func_001b6d70(*(u16*)(((a0 + (s3 * 4)) + 4)));
                func_001b6d88(v0, 2);
                *(u8*)((v0 + 3)) = (*(u8*)((v0 + 3)) & s4);
                s3 = (s3 + 1);
            } while (((s32)(s3) < (s32)(*(u16*)((a0 + 2)))));
        } else {
            sp = (u32)frame;
        }
        sp_10 = sp;
        break;
    case 5:
        if (((s32)(*(u16*)((a0 + 2))) != 0)) {
            s3_0 = 0;
            do {
                v0_1 = func_001b6d70(*(u16*)(((a0 + (s3_0 * 4)) + 4)));
                *(u8*)((v0_1 + 3)) = (*(u8*)((v0_1 + 3)) | 2);
                s3_0 = (s3_0 + 1);
            } while (((s32)(((s32)(s3_0) < (s32)(*(u16*)((a0 + 2))))) != 0));
        } else {
            sp_2 = (u32)frame;
        }
        sp_10 = sp_2;
        break;
    case 6:
        if (((s32)(*(u16*)((a0 + 2))) != 0)) {
            s3_3 = 0;
            do {
                v0_4 = func_001b6d70(*(u16*)(((a0 + (s3_3 * 4)) + 4)));
                *(u8*)((v0_4 + 3)) = (*(u8*)((v0_4 + 3)) | 1);
                s3_3 = (s3_3 + 1);
            } while (((s32)(((s32)(s3_3) < (s32)(*(u16*)((a0 + 2))))) != 0));
        } else {
            sp_5 = (u32)frame;
        }
        sp_10 = sp_5;
        break;
    case 7:
        func_001b8bf8(a0, 3);
        sp_10 = (u32)frame;
        break;
    case 8:
        func_001b8c70(a0, 0);
        sp_10 = (u32)frame;
        break;
    case 9:
        func_001b8c70(a0, 1);
        sp_10 = (u32)frame;
        break;
    case 10:
        func_001b8c70(a0, 2);
        sp_10 = (u32)frame;
        break;
    case 11:
        func_001b8c70(a0, 3);
        sp_10 = (u32)frame;
        break;
    case 12:
        if (((s32)(*(u16*)((a0 + 2))) != 0)) {
            s3_6 = 0;
            do {
                func_001c3670(*(u16*)(((a0 + (s3_6 * 4)) + 4)));
                s3_6 = (s3_6 + 1);
            } while (((s32)(((s32)(s3_6) < (s32)(*(u16*)((a0 + 2))))) != 0));
        } else {
            sp_7 = (u32)frame;
        }
        sp_10 = sp_7;
        break;
    case 13:
        if (((s32)(*(u16*)((a0 + 2))) != 0)) {
            s3_8 = 0;
            do {
                func_001c36e8(*(u16*)(((a0 + (s3_8 * 4)) + 4)));
                s3_8 = (s3_8 + 1);
            } while (((s32)(((s32)(s3_8) < (s32)(*(u16*)((a0 + 2))))) != 0));
        } else {
            sp_9 = (u32)frame;
        }
        sp_10 = sp_9;
        break;
    case 15:
        if ((*(u8*)(&D_01d48d94) != 0)) {
            func_001c8ec0(*(u16*)((a0 + 4)));
        }
        *(u8*)(&D_0032fcc9) = *(u8*)((a0 + 4));
        sp_10 = (u32)frame;
        break;
    case 0:
    case 14:
    default:
        sp_10 = (u32)frame;
        break;
    }
    return 1;
}
