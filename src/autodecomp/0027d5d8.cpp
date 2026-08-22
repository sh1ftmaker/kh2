// coverage: addr=0x0027d5d8 symbol=func_0027d5d8 size=564 class=branchy source=permute status=exact fuzzy=100.0
// coverage-alternatives: lift:near:99.68;ghidra:near:85.08;m2c:near:55.89
#include "common/types.h"

extern "C" u32 D_0035ef64 asm("D_0035ef64");
extern "C" u32 D_0035ef68 asm("D_0035ef68");
extern "C" u32 D_0035f01c asm("D_0035f01c");
extern "C" u32 D_0035f03c asm("D_0035f03c");
extern "C" u32 D_0035f050 asm("D_0035f050");
extern "C" u32 D_0035f3d4 asm("D_0035f3d4");
extern "C" u32 D_01e21ef0 asm("D_01e21ef0");
extern "C" u32 func_00139510(u32) asm("func_00139510");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_00257770() asm("func_00257770");
extern "C" u32 func_0027d488(u32, u32) asm("func_0027d488");
extern "C" u32 func_0027d4f0(u32) asm("func_0027d4f0");
extern "C" u32 func_00287cd0() asm("func_00287cd0");
extern "C" u32 func_002891d0(u32) asm("func_002891d0");
extern "C" u32 func_002891e8(u32) asm("func_002891e8");
extern "C" u32 func_00289358(u32) asm("func_00289358");
extern "C" u32 func_0028acc8(u32) asm("func_0028acc8");
extern "C" u32 func_0028b038(u32) asm("func_0028b038");
extern "C" u32 func_0028d660(u32, u32) asm("func_0028d660");
extern "C" u32 func_0028dcc0(u32, u32) asm("func_0028dcc0");
extern "C" void func_00138c10(u32, u32) asm("func_00138c10");
extern "C" void func_001396b0(u32) asm("func_001396b0");
extern "C" void func_0028d8c0(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d8c0");
extern "C" void func_0031a260(u32, u32) asm("func_0031a260");

// 0x0027d5d8 func_0027d5d8
void func_0027d5d8() asm("func_0027d5d8");
void func_0027d5d8() {
    u32 s1;
    u32 s0;
    u32 v0;
    u32 s1_0;
    u32 s0_1;
    u32 s0_2;
    u32 s4;
    u32 s0_3;
    u32 s0_4;
    s1 = func_00257770();
    s0 = func_00287cd0();
    if (((s32)(func_0028acc8(*(u32*)(&D_0035f01c))) != 0)) {
        if ((s0 == 1)) {
            s4 = func_002891e8(*(u32*)(&D_0035f01c));
            v0 = func_0028b038(*(u32*)(&D_0035f01c));
            *(u32*)(&D_01e21ef0) = func_0027d4f0(s4 + v0);
            s1_0 = (s1 + 0x330);
            if ((func_00139d78(s1_0) == 0)) {
                func_0028d8c0(s1_0, *(u32*)(&D_0035f3d4) + 1, *(u32*)(&D_0035ef68), *(u32*)(&D_0035ef64), *(u32*)(&D_0035f03c), *(s16*)((*(u32*)(&D_01e21ef0) + 4)), 0xffffffff, 0);
                func_0028dcc0(s1_0, func_0027d488(s4, v0));
                return;
            } else {
                s0_1 = *(u32*)((s1_0 + 0x18c));
                if ((s0_1 == func_0027d488(s4, v0))) {
                    if (((s32)(func_00289358(*(u32*)(&D_0035f01c))) != 0)) {
                        func_00138c10(s1_0, *(s16*)((*(u32*)(&D_01e21ef0) + 4)));
                        *(u32*)((s1_0 + 0x18c)) = func_0027d488(s4, v0);
                        func_001396b0(s1_0);
                        if ((*(u32*)((s1_0 + 0x18c)) != 0)) {
                            *(u32*)((s1_0 + 0x190)) = 0;
                            func_001396b0(s1_0);
                            if (((s32)(*(u32*)((s1_0 + 0x190))) != 0)) {
                                func_0031a260(s1_0, 0);
                            }
                        }
                        if (((s32)(func_00139d78(*(u32*)(&D_0035f050))) != 0)) {
                            s0_2 = *(u32*)((*(u32*)(&D_0035f050) + 0x18c));
                            if ((s0_2 != *(u32*)((func_002891d0(*(u32*)(&D_0035f01c)) + 0x18c)))) {
                                func_0028d660(*(u32*)(&D_0035f050), *(u32*)((func_002891d0(*(u32*)(&D_0035f01c)) + 0x18c)));
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
                    func_00138c10(s1_0, *(s16*)((*(u32*)(&D_01e21ef0) + 4)));
                    *(u32*)((s1_0 + 0x18c)) = func_0027d488(s4, v0);
                    func_001396b0(s1_0);
                    if ((*(u32*)((s1_0 + 0x18c)) != 0)) {
                        *(u32*)((s1_0 + 0x190)) = 0;
                        func_001396b0(s1_0);
                        if (((s32)(*(u32*)((s1_0 + 0x190))) != 0)) {
                            func_0031a260(s1_0, 0);
                        }
                    }
                    if (((s32)(func_00139d78(*(u32*)(&D_0035f050))) != 0)) {
                        s0_3 = *(u32*)((*(u32*)(&D_0035f050) + 0x18c));
                        if ((s0_3 != *(u32*)((func_002891d0(*(u32*)(&D_0035f01c)) + 0x18c)))) {
                            func_0028d660(*(u32*)(&D_0035f050), *(u32*)((func_002891d0(*(u32*)(&D_0035f01c)) + 0x18c)));
                            return;
                        } else {
                            return;
                        }
                    } else {
                        return;
                    }
                }
            }
        } else {
            s0_4 = (s1 + 0x330);
            if ((func_00139d78(s0_4) != 0)) {
                func_00139510(s0_4);
                return;
            } else {
                return;
            }
        }
    } else {
        return;
    }
}
