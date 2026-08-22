// coverage: addr=0x0029aa30 symbol=func_0029aa30 size=140 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:89.69;ghidra:near:87.27
#include "common/types.h"

extern "C" u32 func_00287bc0() asm("func_00287bc0");
extern "C" u32 func_0029e258(u32) asm("func_0029e258");
extern "C" void func_0029df98() asm("func_0029df98");
extern "C" void func_0029e050() asm("func_0029e050");

// 0x0029aa30 func_0029aa30
u32 func_0029aa30() asm("func_0029aa30");
u32 func_0029aa30() {
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    u32 v0_2;
    u32 v0_3;
    u32 v0_4;
    u32 v0_5;
    u32 v0_6;
    u32 v0_7;
    u32 v0_8;
    v0 = func_00287bc0();
    if (((s32)(((u32)((v0 + -0xe)) < (u32)(2))) == 0)) {
        if ((v0 != 0x12)) {
            if ((v0 != 0x15)) {
                if ((v0 != 0x10)) {
                    if ((v0 != 0x13)) {
                        if ((v0 != 0x16)) {
                            if ((v0 != 0x11)) {
                                if ((v0 != 0x14)) {
                                    if ((v0 == 0x17)) {
                                        func_0029df98();
                                        func_0029e050();
                                        func_0029e258(0);
                                        v0_0 = func_0029e258(1);
                                        v0 = v0_0;
                                    }
                                } else {
                                    func_0029df98();
                                    func_0029e050();
                                    func_0029e258(0);
                                    v0_1 = func_0029e258(1);
                                    v0 = v0_1;
                                }
                            } else {
                                func_0029df98();
                                func_0029e050();
                                func_0029e258(0);
                                v0_2 = func_0029e258(1);
                                v0 = v0_2;
                            }
                        } else {
                            func_0029df98();
                            func_0029e050();
                            func_0029e258(0);
                            v0_3 = func_0029e258(1);
                            v0 = v0_3;
                        }
                    } else {
                        func_0029df98();
                        func_0029e050();
                        func_0029e258(0);
                        v0_4 = func_0029e258(1);
                        v0 = v0_4;
                    }
                } else {
                    func_0029df98();
                    func_0029e050();
                    func_0029e258(0);
                    v0_5 = func_0029e258(1);
                    v0 = v0_5;
                }
            } else {
                func_0029df98();
                func_0029e050();
                func_0029e258(0);
                v0_6 = func_0029e258(1);
                v0 = v0_6;
            }
        } else {
            func_0029df98();
            func_0029e050();
            func_0029e258(0);
            v0_7 = func_0029e258(1);
            v0 = v0_7;
        }
    } else {
        func_0029df98();
        func_0029e050();
        func_0029e258(0);
        v0_8 = func_0029e258(1);
        v0 = v0_8;
    }
    return v0;
}
