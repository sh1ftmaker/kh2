// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00224f08 asm("D_00224f08");
extern "C" u32 D_00229e58 asm("D_00229e58");
extern "C" u32 func_00102c18(u32, u32, u32) asm("func_00102c18");
extern "C" u32 func_001050d8(u32) asm("func_001050d8");
extern "C" u32 func_002247d8() asm("func_002247d8");
extern "C" u32 func_002282d8() asm("func_002282d8");
extern "C" u32 func_002282f0(u32) asm("func_002282f0");
extern "C" u32 func_00229840(u32) asm("func_00229840");
extern "C" void func_00224f38(u32, u32, u32, u32) asm("func_00224f38");

// 0x00224fa0 func_00224fa0
void func_00224fa0(u32 a0) asm("_ZN2sa5EVENT22set_bin_musical_targetERNS_18BIN_MUSICAL_TARGETEP4TASK");
void func_00224fa0(u32 a0) {
    u32 s0;
    u32 loc_0;
    u32 t6;
    u32 loc_4;
    u32 s3;
    u32 s3_0;
    u32 s3_1;
    u32 s3_2;
    u32 s3_3;
    u32 s3_4;
    u32 v0;
    u32 a0_5;
    u32 s3_6;
    u32 s1;
    u32 s0_7;
    u32 s1_8;
    u32 s4;
    u32 v0_9;
    u32 s0_10;
    u32 s0_11;
    u32 s2;
    u32 s4_12;
    u32 t6_13;
    u32 t7;
    u32 t7_14;
    u32 s0_15;
    u32 s1_16;
    u32 s2_17;
    u32 s3_18;
    u32 s4_19;
    if (((s32)(func_002282f0(*(s16*)((a0 + 4)))) == 0)) {
        s0 = (func_002282d8() + 1);
        loc_0 = 0;
        t6 = *(u16*)((a0 + 6));
        loc_4 = 0;
        switch (t6) {
        case 0:
            s3 = func_002247d8();
            func_00224f38(s0, (u32)&loc_0, (u32)&loc_4, 2);
            s3_6 = s3;
            break;
        case 1:
            s3_0 = func_002247d8();
            func_00224f38(s0, (u32)&loc_0, (u32)&loc_4, 3);
            s3_6 = s3_0;
            break;
        case 2:
            s3_1 = func_002247d8();
            func_00224f38(s0, (u32)&loc_0, (u32)&loc_4, 0);
            s3_6 = s3_1;
            break;
        case 3:
            s3_2 = func_002247d8();
            func_00224f38(s0, (u32)&loc_0, (u32)&loc_4, 4);
            s3_6 = s3_2;
            break;
        case 5:
            s3_3 = func_002247d8();
            func_00224f38(s0, (u32)&loc_0, (u32)&loc_4, 1);
            s3_6 = s3_3;
            break;
        case 6:
            s3_4 = func_002247d8();
            v0 = func_00102c18(1, s0, (u32)&D_00229e58);
            loc_0 = v0;
            *(u32*)((v0 + 0x30)) = (u32)&D_00224f08;
            a0_5 = *(s16*)((a0 + 8));
            loc_4 = func_00229840((u32)(((s32)(a0_5) < (s32)(4))) < (u32)(1));
            s3_6 = s3_4;
            break;
        case 4:
        default:
            s3_6 = func_002247d8();
            break;
        }
        s1 = *(s16*)((a0 + 4));
        s0_7 = *(s16*)((a0 + 8));
        s1_8 = (s1 + *(s16*)((a0 + 0xa)));
        s4 = *(s16*)((a0 + 0xc));
        v0_9 = func_001050d8(0x40);
        *(u32*)((loc_0 + 4)) = v0_9;
        s0_10 = (s0_7 * s3_6);
        s0_11 = (s1_8 + s0_10);
        *(u32*)(v0_9) = *(s16*)((a0 + 6));
        *(u32*)((v0_9 + 4)) = *(s16*)((a0 + 8));
        *(u32*)((v0_9 + 0x1c)) = 0;
        *(u32*)((v0_9 + 0x20)) = 0;
        *(u32*)((v0_9 + 8)) = (s1_8 - *(s16*)((a0 + 4)));
        *(u32*)((v0_9 + 0xc)) = ((s0_11 - s3_6) - *(s16*)((a0 + 4)));
        s2 = ((s0_11 - s4) + -1);
        *(u32*)((v0_9 + 0x10)) = (s2 - *(s16*)((a0 + 4)));
        *(u32*)((v0_9 + 0x14)) = (s0_11 - *(s16*)((a0 + 4)));
        s4_12 = (s0_11 + s4);
        *(u32*)((v0_9 + 0x18)) = (s4_12 - *(s16*)((a0 + 4)));
        *(u32*)((v0_9 + 0x24)) = *(s16*)((a0 + 0x12));
        *(u32*)((v0_9 + 0x28)) = *(s16*)((a0 + 0x14));
        *(u32*)((v0_9 + 0x2c)) = loc_4;
        *(u32*)((v0_9 + 0x34)) = *(s16*)((a0 + 0x10));
        *(u8*)((v0_9 + 0x38)) = 0;
        *(u32*)((v0_9 + 0x3c)) = 0;
        t6_13 = *(s16*)((a0 + 6));
        if ((t6_13 == 1)) {
            t7 = *(s16*)((a0 + 0xe));
            t7_14 = -(t7);
        } else {
            t7_14 = *(s16*)((a0 + 0xe));
        }
        *(u32*)((v0_9 + 0x30)) = t7_14;
        s0_15 = (s0_11 - *(s16*)((a0 + 4)));
        s1_16 = (s1_8 - *(s16*)((a0 + 4)));
        s2_17 = (s2 - *(s16*)((a0 + 4)));
        s3_18 = ((s0_11 - s3_6) - *(s16*)((a0 + 4)));
        s4_19 = (s4_12 - *(s16*)((a0 + 4)));
        ((void(*)(u32, u32))(*(u32*)((*(u32*)(loc_4) + 0x20))))(loc_4, *(u32*)((v0_9 + 4)));
    }
    return;
}
