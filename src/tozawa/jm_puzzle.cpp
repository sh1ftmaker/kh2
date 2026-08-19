#include "jm_puzzle.hpp"

namespace Tz {

extern volatile u8* volatile D_0035f638 asm("D_0035f638");
extern s8 D_00374cd0[] asm("D_00374cd0");
extern "C" void func_002fde18(void*, u32, u32);

void JmPuzzle::InitInfo() {
    u32 s0 = 0x00360000;
    (void)s0;
    func_002fde18((void*)D_0035f638, 0, 152);

    {
        volatile u8* p = D_0035f638;
        s32 m = -1;
        *(volatile s8*)(p + 52) = (s8)m;
    }

    {
        s32 m = -257;
        volatile u8* p = D_0035f638;
        u32 w = *(volatile u32*)(p + 52);
        w = w & (u32)m;
        *(volatile u32*)(p + 52) = w;
    }

    {
        s32 m = -513;
        volatile u8* p = D_0035f638;
        u32 w = *(volatile u32*)(p + 52);
        w = w & (u32)m;
        *(volatile u32*)(p + 52) = w;
    }

    {
        s32 m = -2049;
        volatile u8* p = D_0035f638;
        u32 w = *(volatile u32*)(p + 52);
        w = w & (u32)m;
        *(volatile u32*)(p + 52) = w;
    }
}

u32 JmPuzzle::CalcMaxPiece(s32 a0) {
    s8* p = (s8*)((u8*)&D_00374cd0 + (a0 << 2));
    return (s32)p[0] * (s32)p[1];
}

}  // namespace Tz

// ---- 0x002b1aa0 func_002b1aa0 ----
#include "../common/types.h"

extern "C" u32 GetImageInfo_2b23e0(int a) asm("_ZN2Tz8JmPuzzle12GetImageInfoEi");

extern "C" u32 D_00374ca4 asm("D_00374ca4");
extern "C" u32 D_00374ca8 asm("D_00374ca8");

u32 func_002b1aa0_impl(void* self, u32 a) asm("func_002b1aa0");

u32 func_002b1aa0_impl(void* self, u32 a) {
    u32* p = (u32*)GetImageInfo_2b23e0(-1);
    u32 f = *p;
    if (f & 0x4000000)
        return 20690;
    if (f & 0x10000000)
        return D_00374ca4;
    return D_00374ca8;
}
