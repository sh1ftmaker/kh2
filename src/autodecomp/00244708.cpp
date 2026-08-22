// coverage: addr=0x00244708 symbol=_ZN2Tz4HEFT12DrawSelectorEPNS_6SelectEii size=384 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:83.29;m2c:near:73.78
#include "common/types.h"

struct S6_4_s16 { u8 _p[4]; s16 m; };
extern "C" u32 D_0035ecf8 asm("D_0035ecf8");
extern "C" u32 D_0035ed08 asm("D_0035ed08");
extern "C" u32 D_00371968 asm("D_00371968");
extern "C" u32 D_003719a0 asm("D_003719a0");
extern "C" u32 D_003719e8 asm("D_003719e8");
extern "C" u32 func_00244b38() asm("func_00244b38");
extern "C" u32 func_00244ee8(u32) asm("func_00244ee8");
extern "C" u32 func_00287cd0(u32, u32, u32) asm("func_00287cd0");
extern "C" u32 func_002891d0(u32) asm("func_002891d0");
extern "C" u32 func_002891e8(u32) asm("func_002891e8");
extern "C" u32 func_00289310(u32) asm("func_00289310");
extern "C" u32 func_0028d008(u32) asm("func_0028d008");
extern "C" void func_0023f070(u32, u32, u32) asm("func_0023f070");
extern "C" void func_00244e28() asm("func_00244e28");
extern "C" void func_00289038(u32, u32, u32, u32, u32, u32, u32) asm("func_00289038");
extern "C" void func_002890e0(u32, u32, u32, u32, u32) asm("func_002890e0");
extern "C" void func_0028cf28(u32, u32) asm("func_0028cf28");
extern "C" void func_002b4388(u32, u32, u32) asm("func_002b4388");

// 0x00244708 Tz::HEFT::DrawSelector(Tz::Select*, int, int)
void lift_00244708(u32 a0, u32 a1, u32 a2) asm("_ZN2Tz4HEFT12DrawSelectorEPNS_6SelectEii");
void lift_00244708(u32 a0, u32 a1, u32 a2) {
    u32 s3;
    u32 v0;
    if ((func_00287cd0(a0, a1, a2) == 1)) {
        if ((func_00289310(a0) != 0)) {
            s3 = func_002891e8(a0);
            func_002890e0(a0, 1, 2, 0, 0xffffffff);
            func_00289038(a0, s3, 1, 1, 2, 0, 0xffffffff);
            if (((s32)(a1) == 0)) {
                v0 = func_00244ee8(s3);
                func_0023f070(*(u32*)(&D_0035ecf8), ((S6_4_s16*)&D_00371968)[v0].m, 0xffffffff);
            }
            if (((s32)(func_0028d008(a2)) != 0)) {
                func_0028cf28(a2, func_002891d0(a0));
            }
            if ((a1 == 0)) {
                func_002b4388(*(u32*)(&D_0035ed08), (func_00244ee8(s3) * 0x24) + (u32)&D_003719a0, 0);
                func_00244e28();
            } else {
                func_002b4388(*(u32*)(&D_0035ed08), (s3 * 0x24) + (u32)&D_003719e8, 0);
            }
            func_00244b38();
            return;
        } else {
            return;
        }
    } else {
        return;
    }
}
