// coverage: addr=0x00281c50 symbol=_ZN2Tz6CmItem10LeavePopupEv size=156 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:72.81;m2c:near:62.55
#include "common/types.h"

extern "C" u32 D_0035f274 asm("D_0035f274");
extern "C" u32 D_0035f280 asm("D_0035f280");
extern "C" u32 D_0035f28c asm("D_0035f28c");
extern "C" u32 D_0035f290 asm("D_0035f290");
extern "C" u32 D_0035f294 asm("D_0035f294");
extern "C" u32 D_0035f298 asm("D_0035f298");
extern "C" u32 D_0035f299 asm("D_0035f299");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");

// 0x00281c50 Tz::CmItem::LeavePopup()
void lift_00281c50() asm("_ZN2Tz6CmItem10LeavePopupEv");
void lift_00281c50() {
    if (((s32)(*(u32*)(&D_0035f274)) == 0)) {
        if (((s32)(*(u8*)(&D_0035f299)) != 0)) {
            if (((s32)(func_00139d78(*(u32*)(&D_0035f28c))) != 0)) {
                ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035f28c)) + 0x14))))(*(u32*)(&D_0035f28c));
            }
        }
    }
    if (((s32)(func_00139d78(*(u32*)(&D_0035f290))) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035f290)) + 0x14))))(*(u32*)(&D_0035f290));
    }
    *(u16*)(&D_0035f280) = 0xffffffff;
    *(u32*)(&D_0035f294) = 0;
    *(u8*)(&D_0035f298) = 0;
    return;
}
