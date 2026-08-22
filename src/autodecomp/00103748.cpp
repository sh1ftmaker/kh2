// coverage: addr=0x00103748 symbol=_ZN4MENU16DestoryAllocatorEv size=108 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:95.56;e3:near:89.81;m2c:near:47.47
#include "common/types.h"

extern "C" u32 D_0032ba14 asm("D_0032ba14");
extern "C" u32 D_0032ba18 asm("D_0032ba18");
extern "C" u32 D_0032ba24 asm("D_0032ba24");
extern "C" u32 D_0032ba30 asm("D_0032ba30");
extern "C" void func_00170c00(u32) asm("func_00170c00");

// 0x00103748 MENU::DestoryAllocator()
void lift_00103748() asm("_ZN4MENU16DestoryAllocatorEv");
void lift_00103748() {
    if (((s32)(*(u8*)(&D_0032ba30)) == 0)) {
        if ((*(u32*)(&D_0032ba24) != 1)) {
            if ((*(u32*)(&D_0032ba24) != 2)) {
                if ((*(u32*)(&D_0032ba24) != 6)) {
                    func_00170c00(*(u32*)(&D_0032ba14));
                }
            }
        }
    }
    *(u32*)(&D_0032ba14) = 0;
    *(u32*)(&D_0032ba18) = 0;
    *(u8*)(&D_0032ba30) = 0;
    return;
}
