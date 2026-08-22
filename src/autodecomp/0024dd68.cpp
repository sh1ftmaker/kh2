// coverage: addr=0x0024dd68 symbol=_ZN2Tz4TTPT12DrawSelectorEPNS_6SelectEii size=320 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:68.51;m2c:near:66.7
#include "common/types.h"

extern "C" u32 D_0035eddc asm("D_0035eddc");
extern "C" u32 D_0035edec asm("D_0035edec");
extern "C" u32 D_00372298 asm("D_00372298");
extern "C" u32 func_0024e008(u32) asm("func_0024e008");
extern "C" u32 func_0024e058() asm("func_0024e058");
extern "C" u32 func_0024e228() asm("func_0024e228");
extern "C" u32 func_00287cd0(u32, u32, u32) asm("func_00287cd0");
extern "C" u32 func_002891d0(u32) asm("func_002891d0");
extern "C" u32 func_002891e8(u32) asm("func_002891e8");
extern "C" u32 func_00289310(u32) asm("func_00289310");
extern "C" u32 func_0028d008(u32) asm("func_0028d008");
extern "C" void func_0023f070(u32, u32, u32) asm("func_0023f070");
extern "C" void func_0024e5b0() asm("func_0024e5b0");
extern "C" void func_00289038(u32, u32, u32, u32, u32, u32, u32) asm("func_00289038");
extern "C" void func_002890e0(u32, u32, u32, u32, u32) asm("func_002890e0");
extern "C" void func_0028cf28(u32, u32) asm("func_0028cf28");
extern "C" void func_002b4388(u32, u32, u32) asm("func_002b4388");

// 0x0024dd68 Tz::TTPT::DrawSelector(Tz::Select*, int, int)
void lift_0024dd68(u32 a0, u32 a1, u32 a2) asm("_ZN2Tz4TTPT12DrawSelectorEPNS_6SelectEii");
void lift_0024dd68(u32 a0, u32 a1, u32 a2) {
    u32 s3;
    u32 v0;
    u32 v0_0;
    if ((func_00287cd0(a0, a1, a2) == 1)) {
        if ((func_00289310(a0) != 0)) {
            s3 = func_002891e8(a0);
            func_002890e0(a0, 1, 2, 0, 0xffffffff);
            func_00289038(a0, s3, 1, 1, 2, 0, 0xffffffff);
            if (((s32)(a1) == 0)) {
                func_0023f070(*(u32*)(&D_0035eddc), *(s16*)((func_0024e008(s3) + 4)), 0xffffffff);
                func_0024e5b0();
            }
            if (((s32)(func_0028d008(a2)) != 0)) {
                func_0028cf28(a2, func_002891d0(a0));
            }
            if (((s32)(a1) == 0)) {
                v0 = func_0024e058();
                v0_0 = v0;
            } else {
                v0_0 = (u32)&D_00372298;
            }
            func_002b4388(*(u32*)(&D_0035edec), v0_0 + (s3 * 0x24), 0);
            func_0024e228();
            return;
        } else {
            return;
        }
    } else {
        return;
    }
}
