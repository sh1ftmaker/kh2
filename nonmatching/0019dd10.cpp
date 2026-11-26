// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034f240 asm("D_0034f240");
extern "C" u32 func_0016bc20(u32, u32, u32) asm("func_0016bc20");
extern "C" u32 func_0019c4f8(u32) asm("func_0019c4f8");
extern "C" u32 func_0019dbc0(u32, u32, u32, u32, u32) asm("func_0019dbc0");
extern "C" u32 func_0019e6e8(u32, u32) asm("func_0019e6e8");
extern "C" u32 func_0019e758(u32, u32) asm("func_0019e758");
extern "C" u32 func_001b58a8() asm("func_001b58a8");
extern "C" u32 func_001bc700(u32) asm("func_001bc700");
extern "C" u32 func_001bcf18(u32) asm("func_001bcf18");
extern "C" u32 func_001bd570(u32, u32) asm("func_001bd570");
extern "C" void func_0018a818(u32, u32, u32) asm("func_0018a818");
extern "C" void func_00190128(u32) asm("func_00190128");
extern "C" void func_00190878(u32, u32, u32) asm("func_00190878");
extern "C" void func_0019e170(u32) asm("func_0019e170");
extern "C" void func_0019e400(u32) asm("func_0019e400");
extern "C" void func_0019ead0(u32, u32) asm("func_0019ead0");

// 0x0019dd10 func_0019dd10
void func_0019dd10(u32 a0) asm("_ZN2YS11RC_SEARCHER4execEv");
void func_0019dd10(u32 a0) {
    u8 frame[32];
    u32 s0;
    u32 v0;
    u32 v0_0;
    s0 = *(u32*)((*(u32*)(*(u32*)(a0)) + 0x9e0));
    func_00190128((u32)frame);
    if ((func_0019c4f8(s0) == 0)) {
        if (((*(u32*)(&D_0034f240) & 0x4000) == 0)) {
            if (((*(u32*)((s0 + 0x588)) & 0x80) != 0)) {
                if (((s32)(*(u32*)((s0 + 0xb48))) != 0)) {
                    if (((s32)(func_0019dbc0(a0, *(u32*)((s0 + 0xb48)), s0 + 0x9f4, 0xc9, 0)) != 0)) {
                        *(u8*)((a0 + 9)) = 8;
                    }
                }
            }
            v0 = func_001bd570(*(u32*)(*(u32*)(a0)), 1);
            if (((s32)(v0) != 0)) {
                func_0019dbc0(a0, *(u16*)((v0 + 2)), v0 + 0xc, 0xcb, 0);
            }
            if (((s32)((*(u32*)((s0 + 0x160)) & 0x100000)) != 0)) {
                func_00190878((u32)frame, *(u32*)(((s0 + 0x140) + 0xfc)), 0);
                if (((s32)(func_0019dbc0(a0, *(u32*)((s0 + 0x50c)), (u32)frame, 0xcc, 0)) != 0)) {
                    *(u8*)((a0 + 9)) = 7;
                }
            }
            if ((func_001b58a8() == 0)) {
                if (((*(u32*)((s0 + 0x588)) & 0x2000000) == 0)) {
                    v0_0 = func_0016bc20(s0, 1, 0xffffffff);
                    if (((s32)(v0_0) != 0)) {
                        func_0018a818(a0 + 0x30, s0, v0_0);
                        func_0019e170(a0);
                        func_0019e400(a0);
                    }
                    if (((s32)(*(u32*)((a0 + 0x24))) >= 0)) {
                        if (((s32)((*(u32*)((a0 + 0x24)) & 0x40000000)) != 0)) {
                            *(u8*)((a0 + 9)) = 5;
                        }
                    }
                    if ((func_001bc700(a0 + 4) == 0)) {
                        if (((*(u32*)((s0 + 0x588)) & 0x80) != 0)) {
                            if (((*(u32*)((s0 + 0x160)) & 0x4000) == 0)) {
                                if (((s32)(func_001bcf18(*(u32*)((*(u32*)((s0 + 0xb44)) + 0x9e8)))) != 0)) {
                                    if ((func_0019e758(a0, s0) == 0)) {
                                        if ((func_0019e6e8(a0, s0) == 0)) {
                                            func_0019ead0(a0, s0);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}
