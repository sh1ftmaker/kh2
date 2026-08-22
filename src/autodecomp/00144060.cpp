// coverage: addr=0x00144060 symbol=func_00144060 size=124 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:98.06;m2c:near:66.33
#include "common/types.h"

extern "C" u32 D_00348800 asm("D_00348800");
extern "C" u32 D_00348810 asm("D_00348810");
extern "C" u32 D_0034881f asm("D_0034881f");
extern "C" u32 func_00106a60(u32) asm("func_00106a60");
extern "C" void func_00107368(u32, u32) asm("func_00107368");
extern "C" void func_00165f70(u32, u32, u32, u32, u32) asm("func_00165f70");

// 0x00144060 func_00144060
void func_00144060() asm("func_00144060");
void func_00144060() {
    u32 loc_0;
    *(u32*)((*(u32*)(&D_00348800) + 0x770)) = 0;
    if (((s32)(*(u32*)(&D_00348810)) != 0)) {
        if ((*(u8*)(&D_0034881f) != 0)) {
            func_00107368(func_00106a60(1), (u32)&loc_0);
            func_00165f70(*(u32*)(&D_00348810), (u32)&loc_0, *(u32*)(&D_00348800) + 0x270, *(u32*)(&D_00348800) + 0x770, *(u32*)(&D_00348800) + 0x1f0);
        }
    }
    return;
}
