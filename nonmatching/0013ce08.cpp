// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct S24_12_u32 { u8 _p[12]; u32 m; u8 _q[8]; };
struct S24_16_u32 { u8 _p[16]; u32 m; u8 _q[4]; };
struct S24_20_u32 { u8 _p[20]; u32 m; };
struct S24_4_u32 { u8 _p[4]; u32 m; u8 _q[16]; };
struct S24_8_u32 { u8 _p[8]; u32 m; u8 _q[12]; };
extern "C" u32 D_00348054 asm("D_00348054");
extern "C" u32 D_003484f8 asm("D_003484f8");
extern "C" u32 D_00348548 asm("D_00348548");
extern "C" u32 D_0036ad70 asm("D_0036ad70");
extern "C" f32 func_0013b2e8() asm("func_0013b2e8");
extern "C" u32 func_00138c40(u32, u32, u32) asm("func_00138c40");
extern "C" u32 func_00138d48(u32, f32, f32, f32, f32) asm("func_00138d48");
extern "C" u32 func_001396c0(u32) asm("func_001396c0");
extern "C" u32 func_0013b5d0(u32, u32, u32, u32, u32, u32, u32, u32, f32) asm("func_0013b5d0");
extern "C" u32 func_0013cb30() asm("func_0013cb30");
extern "C" u32 func_0013cb80() asm("func_0013cb80");
extern "C" u32 func_0013cb90(u32, u32) asm("func_0013cb90");
extern "C" u32 func_0013cdc8(u32, u32) asm("func_0013cdc8");
extern "C" u32 func_00192048(u32) asm("func_00192048");
extern "C" u32 func_001b8e88(u32) asm("func_001b8e88");
extern "C" void func_001386e0(u32, u32, u32, u32, u32, u32) asm("func_001386e0");
extern "C" void func_00139570(u32) asm("func_00139570");
extern "C" void func_00139580(u32) asm("func_00139580");
extern "C" void func_00139740(u32) asm("func_00139740");

// 0x0013ce08 func_0013ce08
// minilink-rodata 0x0036ad58   (float literals live here in the original)
u32 func_0013ce08(u32 a0, u32 a1) asm("_ZN2dk12COMMAND_DRAW5recomEi");
u32 func_0013ce08(u32 a0, u32 a1) {
    u32 v0;
    u32 s0;
    u32 s2;
    u32 s4;
    u32 s5;
    u32 v0_0;
    u8 t7;
    u32 s3;
    u32 s3_1;
    u32 s2_2;
    u32 v0_3;
    u32 loc_0;
    u32 loc_8;
    u32 v0_4;
    u32 s3_5;
    u32 s0_6;
    u32 s2_7;
    u32 s4_8;
    u32 s5_9;
    u32 v0_10;
    u32 s3_11;
    u32 s4_12;
    u32 v0_13;
    u32 s0_14;
    u32 s2_15;
    u32 v0_16;
    u32 s0_17;
    v0 = func_0013cb90(a0, a1 * 0x16);
    if (((s32)(*(u16*)(((*(u32*)((a0 + 0x29c)) + 0xa1c) + 2))) != 0)) {
        *(u8*)((a0 + 0xfc)) = 1;
        s0 = (*(u32*)((a0 + 0x29c)) + 0xa1c);
        s2 = ((*(u32*)((a0 + 0xf0)) ^ *(u16*)(((*(u32*)((a0 + 0x29c)) + 0xa1c) + 2))) ? 1 : ((u32)(0) < (u32)((*(u16*)((*(u32*)((a0 + 0x29c)) + 0xa1c)) & 2))));
        s4 = *(u16*)(((*(u32*)((a0 + 0x29c)) + 0xa1c) + 2));
        s5 = *(u8*)(((*(u32*)((a0 + 0x29c)) + 0xa1c) + 5));
        v0_0 = func_001b8e88(*(u16*)(((*(u32*)((a0 + 0x29c)) + 0xa1c) + 2)));
        if ((s5 == 7)) {
            s3_1 = ((S24_4_u32*)&D_00348548)[v0].m;
        } else {
            t7 = (((s32)(*(u32*)((v0_0 + 0xc))) >> 3) & 1);
            s3 = ((s32)(t7) != 0) ? ((S24_8_u32*)&D_00348548)[v0].m : *(u32*)((((v0 * 6) << 2) + (u32)&D_00348548));
            s3_1 = s3;
        }
        s2_2 = ((s3_1 ^ *(u32*)((a0 + 0xf4))) ? 1 : s2);
        v0_3 = func_00192048(*(u32*)((v0_0 + 8)));
        *(u32*)((a0 + 0x100)) = v0_3;
        loc_0 = *(u32*)(((s5 << 2) + (u32)&D_003484f8));
        loc_8 = 2;
        v0_4 = func_0013b5d0(a0, 0, s3_1, s0, s2_2, 0x24, 0x179 - (a1 * 0x16), v0_3, *(f32*)(((s5 << 2) + (u32)&D_0036ad70)));
        func_00139580(v0_4);
        if ((*(u8*)((a0 + 0xfe)) == 0)) {
            *(u32*)((a0 + 0x100)) = 0;
        }
        s3_11 = s3_1;
        s4_12 = s4;
    } else {
        if (((s32)(*(u32*)((a0 + 0x100))) == 0)) {
            s3_5 = ((S24_12_u32*)&D_00348548)[v0].m;
        } else {
            s3_5 = ((S24_16_u32*)&D_00348548)[v0].m;
        }
        loc_0 = 0x80e6e6e6;
        loc_8 = 2;
        s0_6 = (*(u32*)((a0 + 0x29c)) + 0xa1c);
        s2_7 = ((*(u32*)((a0 + 0xf0)) ^ *(u16*)(((*(u32*)((a0 + 0x29c)) + 0xa1c) + 2))) ? 1 : ((u32)(0) < (u32)((*(u16*)((*(u32*)((a0 + 0x29c)) + 0xa1c)) & 2))));
        s4_8 = *(u16*)(((*(u32*)((a0 + 0x29c)) + 0xa1c) + 2));
        s5_9 = *(u8*)(((*(u32*)((a0 + 0x29c)) + 0xa1c) + 5));
        v0_10 = func_0013b5d0(a0, 0, s3_5, *(u32*)((a0 + 0x29c)) + 0xa1c, (*(u32*)((a0 + 0xf0)) ^ *(u16*)(((*(u32*)((a0 + 0x29c)) + 0xa1c) + 2))) ? 1 : ((u32)(0) < (u32)((*(u16*)((*(u32*)((a0 + 0x29c)) + 0xa1c)) & 2))), 0x24, 0x179 - (a1 * 0x16), *(u32*)((a0 + 0x100)), 1.0f);
        func_00139740(v0_10);
        if ((s2_7 != 1)) {
            if ((*(u8*)((a0 + 0xfc)) == 1)) {
                if ((func_001396c0(v0_10) == 0)) {
                    func_00139580(v0_10);
                } else {
                    *(u8*)((a0 + 0xfc)) = 0;
                    func_00139570(v0_10);
                }
            } else {
                func_00139570(v0_10);
            }
        } else {
            func_00139580(v0_10);
        }
        s3_11 = s3_5;
        s4_12 = s4_8;
    }
    v0_13 = func_0013cdc8(a0, v0_4);
    *(u32*)((a0 + 0xf0)) = s4_12;
    *(u32*)((a0 + 0xf4)) = s3_11;
    if ((*(u8*)((a0 + 0xfe)) == 1)) {
        *(u32*)((*(u32*)(&D_00348054) + 0x3380)) = (*(u32*)((*(u32*)(&D_00348054) + 0x3380)) + -1);
        s0_14 = (*(u32*)(&D_00348054) + (*(u32*)(((((*(u32*)((*(u32*)(&D_00348054) + 0x3380)) + -1) << 2) + *(u32*)(&D_00348054)) + 0x3300)) * 0x198));
        s2_15 = (func_0013cb80() + 0x20);
        func_001386e0(s0_14, 0x14b7, func_0013cb30(), s2_15, ((S24_20_u32*)&D_00348548)[v0].m, 2);
        func_00138c40(s0_14, 0x24, 0x179 - (a1 * 0x16));
        v0_16 = func_00138d48(s0_14, 1.0f, 1.0f, 1.0f, func_0013b2e8());
        *(u8*)((a0 + 0xfe)) = 0;
        if ((*(u32*)((a0 + 0x2a4)) != 0)) {
            if (((s32)(*(u32*)((s0_14 + 0x110))) >= (s32)(0x64))) {
                *(u32*)((*(u32*)(&D_00348054) + 0x3380)) = (*(u32*)((*(u32*)(&D_00348054) + 0x3380)) + -1);
                s0_17 = (*(u32*)(&D_00348054) + (*(u32*)(((((*(u32*)((*(u32*)(&D_00348054) + 0x3380)) + -1) << 2) + *(u32*)(&D_00348054)) + 0x3300)) * 0x198));
                func_001386e0(s0_17, 0x1518, func_0013cb30(), s2_15, 0x63, 2);
                return func_00138c40(s0_17, 0x1c, 0x142);
            } else {
                return v0_16;
            }
        } else {
            return v0_16;
        }
    } else {
        return v0_13;
    }
}
