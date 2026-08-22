// coverage: addr=0x00281b30 symbol=_ZN2Tz6CmItem11FadeOutHelpEv size=176 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:86.2;m2c:near:76.65;e3:near:0.0
#include "common/types.h"

extern "C" u32 D_0035f274 asm("D_0035f274");
extern "C" u32 D_0035f280 asm("D_0035f280");
extern "C" u32 D_0035f28c asm("D_0035f28c");
extern "C" u32 D_0035f290 asm("D_0035f290");
extern "C" u32 D_0035f299 asm("D_0035f299");
extern "C" u32 D_0035f2a2 asm("D_0035f2a2");
extern "C" u32 D_0035f2aa asm("D_0035f2aa");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_00281c30() asm("func_00281c30");
extern "C" u32 func_0028dac8(u32, u32) asm("func_0028dac8");

// 0x00281b30 Tz::CmItem::FadeOutHelp()
u32 lift_00281b30() asm("_ZN2Tz6CmItem11FadeOutHelpEv");
u32 lift_00281b30() {
    u32 v0;
    u32 v0_0;
    if (((s32)(*(u8*)(&D_0035f299)) != 0)) {
        if (((s32)(*(u32*)(&D_0035f274)) == 0)) {
            if (((s32)(func_00139d78(*(u32*)(&D_0035f28c))) != 0)) {
                if ((*(u32*)((*(u32*)(&D_0035f28c) + 0x184)) != *(s16*)(&D_0035f2a2))) {
                    func_0028dac8(*(u32*)(&D_0035f28c), *(s16*)(&D_0035f2a2));
                    *(u16*)(&D_0035f280) = 0xffffffff;
                }
            }
        }
    }
    v0 = func_00281c30();
    if (((s32)(v0) != 0)) {
        if ((*(u32*)((*(u32*)(&D_0035f290) + 0x184)) != *(s16*)(&D_0035f2aa))) {
            v0_0 = func_0028dac8(*(u32*)(&D_0035f290), *(s16*)(&D_0035f2aa));
            *(u16*)(&D_0035f280) = 0xffffffff;
            v0 = v0_0;
        }
    }
    return v0;
}
