// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001050d8(u32, u32) asm("func_001050d8");
extern "C" u32 func_002befa8(u32) asm("func_002befa8");
extern "C" void func_00102448(u32, u32) asm("func_00102448");
extern "C" void func_00102470(u32, f32) asm("func_00102470");
extern "C" void func_00104f58(u32, u32, u32, u32, u32) asm("func_00104f58");
extern "C" void func_0016ed50(u32, u32, u32) asm("func_0016ed50");
extern "C" void func_00199718(u32, u32, u32) asm("func_00199718");
extern "C" void func_002bc1e8(u32) asm("func_002bc1e8");
extern "C" void func_002be020(u32, u32, u32) asm("func_002be020");
extern "C" void func_002be0b0(u32, u32) asm("func_002be0b0");
extern "C" void func_002be148(u32, u32) asm("func_002be148");
extern "C" void func_002be190(u32, u32, u32, u32) asm("func_002be190");
extern "C" void func_002be258(u32, u32, u32, u32) asm("func_002be258");
extern "C" void func_002be2d8(u32, u32, u32) asm("func_002be2d8");
extern "C" void func_002be318(u32, u32, u32) asm("func_002be318");
extern "C" void func_002be4b0(u32, u32) asm("func_002be4b0");
extern "C" void func_002be520(u32, u32) asm("func_002be520");
extern "C" void func_002be568(u32, u32) asm("func_002be568");
extern "C" void func_002be630(u32, u32) asm("func_002be630");
extern "C" void func_002be960(u32, u32) asm("func_002be960");
extern "C" void func_002be9b0() asm("func_002be9b0");
extern "C" void func_002bed48(u32, u32, u32) asm("func_002bed48");
extern "C" void func_002c0130(u32, u32, f32) asm("func_002c0130");
extern "C" void func_002c20f8(u32, u32) asm("func_002c20f8");
extern "C" void func_002c2168(u32, u32) asm("func_002c2168");
extern "C" void func_002edfa8(u32, u32) asm("func_002edfa8");
extern "C" void func_002edfd8(u32, u32) asm("func_002edfd8");

// 0x002bdb70 worldmap::Libretto::parse(YS::CODE const*)
// minilink-rodata 0x00374fd8   (float literals live here in the original)
void lift_002bdb70(u32 a0, u32 a1) asm("_ZN8worldmap8Libretto5parseEPKN2YS4CODEE");
void lift_002bdb70(u32 a0, u32 a1) {
    u8 frame[32];
    u32 s2;
    u32 v0;
    u32 v0_0;
    u32 s2_1;
    u32 s2_2;
    u32 s0;
    u32 s2_3;
    u32 sp;
    u32 sp_4;
    u32 s2_5;
    f32 loc_0;
    f32 loc_10;
    f32 loc_4;
    f32 loc_8;
    f32 loc_14;
    f32 loc_18;
    f32 loc_1c;
    f32 loc_c;
    u32 s2_6;
    f32 f20;
    u32 s2_7;
    u32 s2_8;
    u32 sp_9;
    u32 s2_10;
    u32 sp_11;
    u32 s2_12;
    u32 s2_13;
    u32 s2_14;
    u32 s2_15;
    u32 s2_16;
    u32 s2_17;
    u32 s2_18;
    u32 s2_19;
    u32 s2_20;
    u32 s2_21;
    u32 sp_22;
    u32 s2_23;
    u32 sp_24;
    if ((*(u16*)(a1) != 0x109)) {
        if (((s32)(((s32)(*(u16*)(a1)) < (s32)(0x10a))) != 0)) {
            if ((*(u16*)(a1) != 0x103)) {
                if (((s32)(((s32)(*(u16*)(a1)) < (s32)(0x104))) != 0)) {
                    if ((*(u16*)(a1) != 0x100)) {
                        if (((s32)(((s32)(*(u16*)(a1)) < (s32)(0x101))) != 0)) {
                            if ((*(u16*)(a1) == 1)) {
                                s2 = *(u32*)((*(u32*)((a0 + 4)) + 0x10));
                                v0 = func_001050d8(0x2c, a1);
                                func_002bed48(v0, *(u32*)((a0 + 0x3c)), *(u32*)((a1 + 4)));
                                func_002edfa8(a0 + 8, v0);
                                while ((v0_0 = func_002befa8(v0)), ((s32)(v0_0) == 0)) {
                                    func_00102448(s2, 0);
                                }
                                func_002edfd8(a0 + 8, v0);
                                if ((v0 != 0)) {
                                    ((void(*)(u32))(*(u32*)((*(u32*)(v0) + 4))))(v0);
                                }
                            }
                        } else {
                            if ((*(u16*)(a1) != 0x101)) {
                                if ((*(u16*)(a1) == 0x102)) {
                                    s2_1 = *(u32*)((*(u32*)((a0 + 4)) + 0x10));
                                    func_002be020(a0, *(u32*)((a1 + 4)), *(u32*)((a1 + 8)));
                                }
                            } else {
                                s2_2 = *(u32*)((*(u32*)((a0 + 4)) + 0x10));
                                func_002be4b0(a0, a1);
                            }
                        }
                        sp_4 = (u32)frame;
                    } else {
                        if (((s32)(*(u16*)((a1 + 2))) != 0)) {
                            s0 = 1;
                            s2_3 = 0x40000000;
                            do {
                                func_0016ed50(*(u32*)((((s0 + 1) << 2) + a1)) | s2_3, 0xffffff38, 0x1e);
                                s0 = (s0 + 1);
                            } while (((s32)(s0) < (s32)(*(u16*)((a1 + 2)))));
                        } else {
                            sp = (u32)frame;
                        }
                        sp_4 = sp;
                    }
                    sp_9 = sp_4;
                } else {
                    if ((*(u16*)(a1) != 0x106)) {
                        if (((s32)(((s32)(*(u16*)(a1)) < (s32)(0x107))) != 0)) {
                            if ((*(u16*)(a1) != 0x104)) {
                                if ((*(u16*)(a1) == 0x105)) {
                                    s2_5 = *(u32*)((*(u32*)((a0 + 4)) + 0x10));
                                    func_002be960(a0, a1);
                                    func_00102470(s2_5, 240.0f);
                                    func_002be9b0();
                                    func_002bc1e8(0x3e88);
                                    func_00102470(s2_5, 90.0f);
                                }
                            } else {
                                loc_0 = *(f32*)((a1 + 4));
                                loc_4 = *(f32*)((a1 + 8));
                                loc_8 = *(f32*)((a1 + 0xc));
                                loc_c = 0.0f;
                                loc_10 = *(f32*)((a1 + 0x10));
                                loc_14 = *(f32*)((a1 + 0x14));
                                loc_18 = *(f32*)((a1 + 0x18));
                                loc_1c = 0.0f;
                                s2_6 = *(u32*)((*(u32*)((a0 + 4)) + 0x10));
                                f20 = *(f32*)((a1 + 0x1c));
                                func_002c0130((u32)&loc_0, (u32)&loc_10, *(f32*)((a1 + 0x1c)));
                                func_00102470(s2_6, f20);
                            }
                        } else {
                            if ((*(u16*)(a1) != 0x107)) {
                                if ((*(u16*)(a1) == 0x108)) {
                                    s2_7 = *(u32*)((*(u32*)((a0 + 4)) + 0x10));
                                    func_002be568(a0, *(u32*)((a1 + 4)));
                                }
                            } else {
                                *(u32*)((a0 + 0x3c)) = 1;
                            }
                        }
                    } else {
                        s2_8 = *(u32*)((*(u32*)((a0 + 4)) + 0x10));
                        func_002be520(a0, a1);
                    }
                    sp_9 = (u32)frame;
                }
                sp_11 = sp_9;
            } else {
                s2_10 = *(u32*)((*(u32*)((a0 + 4)) + 0x10));
                func_002be190(a0, *(u32*)((a1 + 4)), a1 + 8, *(u16*)((a1 + 2)) + -1);
                sp_11 = (u32)frame;
            }
            sp_22 = sp_11;
        } else {
            if ((*(u16*)(a1) != 0x10e)) {
                if (((s32)(((s32)(*(u16*)(a1)) < (s32)(0x10f))) != 0)) {
                    if ((*(u16*)(a1) != 0x10b)) {
                        if (((s32)(*(u16*)(a1)) >= (s32)(0x10b))) {
                            if ((*(u16*)(a1) != 0x10c)) {
                                if ((*(u16*)(a1) == 0x10d)) {
                                    s2_12 = *(u32*)((*(u32*)((a0 + 4)) + 0x10));
                                    func_002be0b0(a0, *(u32*)((a1 + 4)));
                                }
                            } else {
                                loc_0 = *(f32*)((a1 + 4));
                                loc_4 = *(f32*)((a1 + 8));
                                loc_8 = *(f32*)((a1 + 0xc));
                                *(u32*)(&loc_c) = 0;
                                s2_13 = *(u32*)((*(u32*)((a0 + 4)) + 0x10));
                                func_002c2168((u32)&loc_0, a1);
                            }
                        } else {
                            loc_0 = *(f32*)((a1 + 8));
                            loc_4 = *(f32*)((a1 + 0xc));
                            loc_8 = *(f32*)((a1 + 0x10));
                            *(u32*)(&loc_c) = 0;
                            s2_14 = *(u32*)((*(u32*)((a0 + 4)) + 0x10));
                            func_002be318(a0, *(u32*)((a1 + 4)), (u32)&loc_0);
                        }
                    } else {
                        loc_0 = *(f32*)((a1 + 4));
                        loc_4 = *(f32*)((a1 + 8));
                        loc_8 = *(f32*)((a1 + 0xc));
                        *(u32*)(&loc_c) = 0;
                        s2_15 = *(u32*)((*(u32*)((a0 + 4)) + 0x10));
                        func_002c20f8((u32)&loc_0, a1);
                    }
                } else {
                    if ((*(u16*)(a1) != 0x111)) {
                        if (((s32)(((s32)(*(u16*)(a1)) < (s32)(0x112))) != 0)) {
                            if ((*(u16*)(a1) != 0x10f)) {
                                if ((*(u16*)(a1) == 0x110)) {
                                    s2_16 = *(u32*)((*(u32*)((a0 + 4)) + 0x10));
                                    func_002be630(a0, a1);
                                }
                            } else {
                                s2_17 = *(u32*)((*(u32*)((a0 + 4)) + 0x10));
                                func_00199718((u32)&loc_0, *(u32*)((a1 + 8)), *(u32*)((a1 + 4)));
                                func_00104f58((u32)&loc_0, 0x80000001, 0, 0, 0);
                            }
                        } else {
                            if ((*(u16*)(a1) != 0x112)) {
                                if ((*(u16*)(a1) == 0x113)) {
                                    s2_18 = *(u32*)((*(u32*)((a0 + 4)) + 0x10));
                                    func_002be9b0();
                                }
                            } else {
                                s2_19 = *(u32*)((*(u32*)((a0 + 4)) + 0x10));
                                func_002be148(a0, a1);
                            }
                        }
                    } else {
                        s2_20 = *(u32*)((*(u32*)((a0 + 4)) + 0x10));
                        func_002be258(a0, *(u32*)((a1 + 4)), a1 + 8, *(u16*)((a1 + 2)) + -1);
                    }
                }
            } else {
                *(u8*)(&loc_0) = *(u32*)((a1 + 4));
                *(u8*)(((u32)&loc_0 + 1)) = *(u32*)((a1 + 8));
                *(u8*)(((u32)&loc_0 + 2)) = 0;
                *(u16*)(&loc_4) = 0xffff;
                *(u16*)(((u32)&loc_4 + 2)) = 0xffff;
                *(u16*)(&loc_8) = 0xffff;
                s2_21 = *(u32*)((*(u32*)((a0 + 4)) + 0x10));
                func_00104f58((u32)&loc_0, 0x80000001, 0, 0, 0);
            }
            sp_22 = (u32)frame;
        }
        sp_24 = sp_22;
    } else {
        loc_0 = *(f32*)((a1 + 8));
        loc_4 = *(f32*)((a1 + 0xc));
        loc_8 = *(f32*)((a1 + 0x10));
        *(u32*)(&loc_c) = 0;
        s2_23 = *(u32*)((*(u32*)((a0 + 4)) + 0x10));
        func_002be2d8(a0, *(u32*)((a1 + 4)), (u32)&loc_0);
        sp_24 = (u32)frame;
    }
    return;
}
