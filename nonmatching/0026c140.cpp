// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035ef64 asm("D_0035ef64");
extern "C" u32 D_0035ef68 asm("D_0035ef68");
extern "C" u32 D_0035f010 asm("D_0035f010");
extern "C" u32 D_0035f03c asm("D_0035f03c");
extern "C" u32 D_0035f0f0 asm("D_0035f0f0");
extern "C" u32 D_0035f0f4 asm("D_0035f0f4");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_0023ec18(u32, u32) asm("func_0023ec18");
extern "C" u32 func_0026d8c0(u32) asm("func_0026d8c0");
extern "C" u32 func_00281128(u32, u32) asm("func_00281128");
extern "C" u32 func_002811b0(u32, u32) asm("func_002811b0");
extern "C" u32 func_002811e0(u32, u32) asm("func_002811e0");
extern "C" u32 func_00281238(u32, u32) asm("func_00281238");
extern "C" u32 func_00281538(u32, u32) asm("func_00281538");
extern "C" u32 func_00287dc0() asm("func_00287dc0");
extern "C" void func_00138c78(u32, u32, u32) asm("func_00138c78");
extern "C" void func_0023d808(u32, u32) asm("func_0023d808");
extern "C" void func_0023dd28(u32, u32, u32, u32) asm("func_0023dd28");
extern "C" void func_0023e738(u32, u32, u32, u32) asm("func_0023e738");
extern "C" void func_0023e858(u32, u32, f32) asm("func_0023e858");
extern "C" void func_0023e8b8(u32, u32, f32) asm("func_0023e8b8");
extern "C" void func_0023e8d8(u32, u32, f32) asm("func_0023e8d8");
extern "C" void func_0023e958(u32, u32, u32, u32, u32, u32) asm("func_0023e958");
extern "C" void func_0023e9c8(u32, u32, u32) asm("func_0023e9c8");
extern "C" void func_0023e9e0(u32, u32, u32) asm("func_0023e9e0");
extern "C" void func_0023eac0(u32, u32, u32) asm("func_0023eac0");
extern "C" void func_0023eae0(u32, u32, u32, u32) asm("func_0023eae0");
extern "C" void func_0023ebd0(u32, u32) asm("func_0023ebd0");
extern "C" void func_0028d8c0(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d8c0");

// 0x0026c140 func_0026c140
// minilink-rodata 0x00373810   (float literals live here in the original)
void func_0026c140() asm("_ZN2Tz7CmParty13SetupPartyObjEv");
void func_0026c140() {
    u32 v0;
    u32 loc_4;
    u32 loc_0;
    u32 s2;
    u32 s0;
    u32 s2_0;
    u32 s6;
    u32 v0_1;
    u32 s5;
    v0 = func_00287dc0();
    if ((func_00139d78(v0) == 0)) {
        func_0023d808(v0, 0x7545);
        func_0023ebd0(v0, 1);
        loc_0 = 0;
        loc_4 = 0;
        s2 = 0;
        s0 = 0;
        do {
            if (((s32)(func_00281128(*(u32*)(&D_0035f010), s2)) != 0)) {
                func_00138c78((*(u32*)(&D_0035f0f4) + (s0 + (s2 * 0x1b4))) + 0x7f8, (u32)&loc_0, (u32)&loc_4);
                func_0023dd28(v0, s2, 0, 0x8a);
                func_0023e738(v0, s2, *(s16*)(&loc_0), (s32)(((*(u16*)(&loc_4) + -0x8a) << 0x10)) >> 0x10);
                func_0023e9c8(v0, s2, (*(u32*)(&D_0035f0f4) + (s0 + (s2 * 0x1b4))) + 0x7f8);
            }
            s2 = (s2 + 1);
        } while (((s32)(((s32)(s2) < (s32)(4))) != 0));
    }
    loc_4 = 0;
    loc_0 = 0;
    s2_0 = 0;
    s6 = 0;
    do {
        v0_1 = func_0026d8c0(0);
        if (((s32)(func_00281128(*(u32*)(&D_0035f010), v0_1)) != 0)) {
            if (((s32)(func_00281538(*(u32*)(&D_0035f010), v0_1)) != 0)) {
                if (((s32)(func_0023ec18(v0, v0_1)) != 0)) {
                    if ((func_00281538(*(u32*)(&D_0035f010), v0_1) == 0)) {
                        s6 = 1;
                    }
                } else {
                    s5 = ((s32)(s2_0) != 0) ? ((func_002811e0(*(u32*)(&D_0035f010), v0_1) ^ 3) ? 0x10 : 0xf) : 0x10;
                    ((void(*)(u32, u32, u32, u32, u32, u32, u32))(*(u32*)((*(u32*)(v0) + 0x18))))(v0, v0_1, func_00281238(*(u32*)(&D_0035f010), v0_1) | 0x20000000, 0x8b, 2, 0, 0x8a);
                    func_0023e858(v0, v0_1, -100.0f);
                    func_0023e8b8(v0, v0_1, 0.0f);
                    func_0023e8d8(v0, v0_1, 0.0f);
                    if ((func_002811b0(*(u32*)(&D_0035f010), v0_1) == 8)) {
                        func_0023eae0(v0, v0_1, 0x14, 0x20);
                    }
                    func_0023eac0(v0, v0_1, s5);
                    func_0023e958(v0, v0_1, 0x60, 0x60, 0x60, 0xffffffff);
                    if (((s32)(*(u8*)(&D_0035f0f0)) != 0)) {
                        func_0028d8c0((*(u32*)(&D_0035f0f4) + (v0_1 * 0x198)) + 0x198, s5, *(u32*)(&D_0035ef68), *(u32*)(&D_0035ef64), *(u32*)(&D_0035f03c), 0x7d, 0xffffffff, 0);
                        func_0023e9e0(v0, v0_1, (*(u32*)(&D_0035f0f4) + (v0_1 * 0x198)) + 0x198);
                    }
                }
            } else {
                if ((func_00281538(*(u32*)(&D_0035f010), v0_1) == 0)) {
                    s6 = 1;
                }
            }
        }
        s2_0 = (s2_0 + 1);
    } while (((s32)(((s32)(s2_0) < (s32)(4))) != 0));
    *(u8*)(&D_0035f0f0) = s6;
    return;
}
