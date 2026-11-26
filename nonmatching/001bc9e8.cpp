// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001818e8() asm("func_001818e8");
extern "C" u32 func_001b8e88(u32) asm("func_001b8e88");
extern "C" u32 func_001bcd08(u32) asm("func_001bcd08");
extern "C" u32 func_001bcf18(u32) asm("func_001bcf18");
extern "C" u32 func_001bcf38(u32) asm("func_001bcf38");
extern "C" void func_001bc720(u32) asm("func_001bc720");
extern "C" void func_001bc730(u32, u32) asm("func_001bc730");
extern "C" void func_001bcc28(u32) asm("func_001bcc28");
extern "C" void func_001bce00(u32) asm("func_001bce00");
extern "C" void func_001bd5b0(u32, u32, u32) asm("func_001bd5b0");
extern "C" void func_001bd618(u32, u32) asm("func_001bd618");
extern "C" void func_001bd988(u32) asm("func_001bd988");
extern "C" void func_002ba2e8(u32, u32) asm("func_002ba2e8");

// 0x001bc9e8 func_001bc9e8
u32 func_001bc9e8(u32 a0) asm("_ZN2YS12COMMAND_MENU4execEv");
u32 func_001bc9e8(u32 a0) {
    u32 s1;
    u32 s1_0;
    u32 t7;
    u32 t7_1;
    s1 = *(u32*)((*(u32*)((a0 + 4)) + 0x9e4));
    if (((s32)(func_001bcd08(a0)) == 0)) {
        if (((s32)(func_001bcf38(a0)) != 0)) {
            func_001bcc28(a0);
            t7 = 0;
        } else {
            if (((s32)(func_001bcf18(a0)) == 0)) {
                func_001bce00(a0);
            }
            if (((*(u64*)((s1 + 8)) & (((u64)(1) << 0x21) | 4)) != 0)) {
                func_001bd988(*(u32*)((a0 + 4)));
            } else {
                if (((s32)((*(u64*)((s1 + 8)) & 8)) != 0)) {
                    if ((func_001bcf18(*(u32*)(*(u32*)((*(u32*)((a0 + 4)) + 0x8c0)))) != 0)) {
                        *(u32*)((*(u32*)((a0 + 4)) + 8)) = (*(u32*)((*(u32*)((a0 + 4)) + 8)) | 2);
                    } else {
                        func_001bd618(*(u32*)((a0 + 4)), 1);
                        s1_0 = *(u32*)(*(u32*)((*(u32*)((a0 + 4)) + 0x8c0)));
                        if ((1 != 0)) {
                            func_001bc720(*(u32*)(*(u32*)((*(u32*)((a0 + 4)) + 0x8c0))));
                        }
                    }
                } else {
                    if (((s32)(func_001818e8()) != 0)) {
                        if (((*(u64*)((s1 + 8)) & 0x200) != 0)) {
                            *(u32*)((*(u32*)((a0 + 4)) + 8)) = (*(u32*)((*(u32*)((a0 + 4)) + 8)) | 8);
                        } else {
                            if (((s32)((*(u64*)((s1 + 8)) & 0x4000)) != 0)) {
                                func_001bc730(a0, *(u32*)((a0 + 0x6c)) + -1);
                                func_002ba2e8(1, 0);
                            } else {
                                if (((s32)((*(u64*)((s1 + 8)) & 0x8000)) != 0)) {
                                    func_001bc730(a0, *(u32*)((a0 + 0x6c)) + 1);
                                    func_002ba2e8(1, 0);
                                } else {
                                    if (((s32)((*(u64*)((s1 + 8)) & 0x10000000)) != 0)) {
                                        if (((s32)((((u32)(*(u8*)((((a0 + (*(u32*)((a0 + 0x6c)) * 0xc)) + 0xc) + 5))) < (u32)(4)) & 0xff)) != 0)) {
                                            if (((s32)(*(s8*)((func_001b8e88(*(u16*)((((a0 + (*(u32*)((a0 + 0x6c)) * 0xc)) + 0xc) + 2))) + 6))) >= 0)) {
                                                func_001bd5b0(*(u32*)((a0 + 4)), *(s8*)((func_001b8e88(*(u16*)((((a0 + (*(u32*)((a0 + 0x6c)) * 0xc)) + 0xc) + 2))) + 6)), 1);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            t7 = 1;
        }
        t7_1 = t7;
    } else {
        t7_1 = 0;
    }
    return t7_1;
}
