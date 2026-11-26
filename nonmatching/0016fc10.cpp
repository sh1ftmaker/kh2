// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00170160 asm("D_00170160");
extern "C" u32 D_0034dca0 asm("D_0034dca0");
extern "C" u32 func_0016fda8(u32) asm("func_0016fda8");
extern "C" void func_001684c0(u32, u32, u32, u32) asm("func_001684c0");
extern "C" void func_00168d08(u32) asm("func_00168d08");
extern "C" void func_00168e30(u32) asm("func_00168e30");
extern "C" void func_0016fc10(u32) asm("_ZN2YS10CACHE_BUFF6HEADER5flushEv");
extern "C" void func_001755a4(u32, u32, u32) asm("func_001755a4");

// 0x0016fc10 func_0016fc10
void func_0016fc10(u32 a0) asm("_ZN2YS10CACHE_BUFF6HEADER5flushEv");
void func_0016fc10(u32 a0) {
    u32 s0;
    u32 t3;
    if (((s32)((*(u32*)((a0 + 0x24)) & 1)) == 0)) {
        if (((s32)((*(u32*)((a0 + 0x24)) & 2)) == 0)) {
            *(u32*)((a0 + 0x24)) = (*(u32*)((a0 + 0x24)) | 1);
            if ((*(u32*)((a0 + 0x30)) == *(u32*)((a0 + 0x34)))) {
                func_0016fda8(a0);
                return;
            } else {
                s0 = 0;
                while ((a0 = (s0 == 0) ? *(u32*)(&D_0034dca0) : *(u32*)((s0 + 0x3c))), ((s32)(a0) != 0)) {
                    if ((a0 == a0)) {
                        s0 = a0;
                        continue;
                    }
                    if (((s32)((*(u32*)((a0 + 0x24)) & 2)) != 0)) {
                        s0 = a0;
                        continue;
                    }
                    t3 = ((s32)(((u32)(*(u32*)((a0 + 0x34))) < (u32)((*(u32*)((a0 + 0x30)) + *(u32*)((a0 + 0x2c)))))) != 0) ? ((u32)(*(u32*)((a0 + 0x30))) < (u32)((*(u32*)((a0 + 0x34)) + *(u32*)((a0 + 0x2c))))) : 0;
                    if (((s32)((t3 & 0xff)) == 0)) {
                        s0 = a0;
                        continue;
                    }
                    if (((s32)((*(u32*)((a0 + 0x24)) & 1)) != 0)) {
                        if ((a0 == 0)) {
                            if ((*(u32*)((a0 + 0x34)) != 0)) {
                                if (((s32)(*(u32*)((a0 + 0x2c))) != 0)) {
                                    *(u8*)((a0 + 1)) = 1;
                                    func_00168e30(*(u32*)((a0 + 0x34)));
                                    func_001755a4(*(u32*)((a0 + 0x30)), *(u32*)((a0 + 0x34)), *(u32*)((a0 + 0x2c)));
                                    func_00168d08(*(u32*)((a0 + 0x30)));
                                    func_0016fda8(a0);
                                }
                            } else {
                                if (((((s32)(*(u32*)((a0 + 0x28))) < (s32)(0x2710)) ^ 1) == 0)) {
                                    *(u8*)((a0 + 1)) = 1;
                                    func_001684c0(a0 + 4, *(u32*)((a0 + 0x30)), (u32)&D_00170160, a0);
                                } else {
                                    *(u32*)((a0 + 0x24)) = (*(u32*)((a0 + 0x24)) | 2);
                                }
                            }
                        } else {
                            if (((((s32)(*(u32*)((a0 + 0x28))) < (s32)(0x2710)) ^ 1) == 0)) {
                                *(u8*)((a0 + 1)) = 1;
                                func_001684c0(a0 + 4, *(u32*)((a0 + 0x30)), (u32)&D_00170160, a0);
                            } else {
                                *(u32*)((a0 + 0x24)) = (*(u32*)((a0 + 0x24)) | 2);
                            }
                        }
                        *(u32*)((a0 + 0x34)) = *(u32*)((a0 + 0x30));
                        return;
                    }
                    func_0016fc10(a0);
                    s0 = a0;
                }
                if ((*(u32*)((a0 + 0x34)) != 0)) {
                    if (((s32)(*(u32*)((a0 + 0x2c))) != 0)) {
                        *(u8*)((a0 + 1)) = 1;
                        func_00168e30(*(u32*)((a0 + 0x34)));
                        func_001755a4(*(u32*)((a0 + 0x30)), *(u32*)((a0 + 0x34)), *(u32*)((a0 + 0x2c)));
                        func_00168d08(*(u32*)((a0 + 0x30)));
                        func_0016fda8(a0);
                    }
                } else {
                    if (((((s32)(*(u32*)((a0 + 0x28))) < (s32)(0x2710)) ^ 1) == 0)) {
                        *(u8*)((a0 + 1)) = 1;
                        func_001684c0(a0 + 4, *(u32*)((a0 + 0x30)), (u32)&D_00170160, a0);
                    } else {
                        *(u32*)((a0 + 0x24)) = (*(u32*)((a0 + 0x24)) | 2);
                    }
                }
                *(u32*)((a0 + 0x34)) = *(u32*)((a0 + 0x30));
                return;
            }
        } else {
            return;
        }
    } else {
        return;
    }
}
