// coverage: addr=0x00298ee0 symbol=_ZN2Tz7JmAlbum9FileAllocEv size=172 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:92.27;m2c:near:66.28;e3:near:48.75
#include "common/types.h"

extern "C" u32 D_0035f598 asm("D_0035f598");
extern "C" u32 D_0035f59c asm("D_0035f59c");
extern "C" u32 D_0035f5a1 asm("D_0035f5a1");
extern "C" u32 D_0035f5a2 asm("D_0035f5a2");
extern "C" u32 func_0023fa08(u32, u32) asm("func_0023fa08");
extern "C" u32 func_00292630() asm("func_00292630");
extern "C" u32 func_00293db8(u32, u32) asm("func_00293db8");
extern "C" u32 func_00293de8(u32) asm("func_00293de8");
extern "C" u32 func_002983d8(u32) asm("func_002983d8");
extern "C" void func_0023f900(u32) asm("func_0023f900");
extern "C" void func_002feee8(u32, u32) asm("func_002feee8");
extern "C" void func_002ff2e8(u32, u32) asm("func_002ff2e8");

// 0x00298ee0 Tz::JmAlbum::FileAlloc()
u32 lift_00298ee0() asm("_ZN2Tz7JmAlbum9FileAllocEv");
u32 lift_00298ee0() {
    u8 frame[32];
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    func_0023f900(*(u32*)(&D_0035f59c));
    v0 = func_00292630();
    if ((v0 == 0)) {
        v0_0 = func_002983d8(*(s16*)((((*(s8*)(&D_0035f5a1) << 1) + *(u32*)(&D_0035f598)) + 4)));
        func_002ff2e8((u32)frame, func_00293de8(*(s8*)(v0_0)));
        func_002feee8((u32)frame, v0_0 + 1);
        v0_1 = func_0023fa08(*(u32*)(&D_0035f59c), func_00293db8(3, (u32)frame));
        *(u8*)(&D_0035f5a2) = 1;
        v0 = v0_1;
    }
    return v0;
}
