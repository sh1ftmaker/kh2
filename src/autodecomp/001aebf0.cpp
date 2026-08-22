// coverage: addr=0x001aebf0 symbol=func_001aebf0 size=80 class=branchy source=typed status=exact fuzzy=100.0
// coverage-alternatives: lift:exact:100.0;ghidra:exact:100.0;m2c:near:72.55
#include "common/types.h"
typedef float f32; typedef double f64;
struct AREA_SET;
struct AREA;

struct AREA_SET {  // class AREA::SET size=0x6
    u16 Map;                                           // +0x0
    u16 Battle;                                        // +0x2
    u16 Event;                                         // +0x4
};

struct AREA {  // class AREA size=0xa
    u8 World;                                          // +0x0
    u8 Area;                                           // +0x1
    u8 Entrance;                                       // +0x2
    u8 _pad0[1];
    AREA_SET Set;                                      // +0x4
};

extern "C" u32 D_01c94040 asm("D_01c94040");
extern "C" u32 D_01c9408c asm("D_01c9408c");

// 0x001aebf0 func_001aebf0
void func_001aebf0(u32 a0) asm("func_001aebf0");
void func_001aebf0(u32 a0) {
    if (((s32)(((s32)(*(u8*)&(((AREA*)a0)->Area)) < (s32)(*(u32*)(*(u32*)(((*(u8*)&(((AREA*)a0)->World) << 2) + (u32)&D_01c94040)))))) == 0)) {
        *(u32*)(&D_01c9408c) = 0;
        return;
    } else {
        *(u32*)(&D_01c9408c) = ((*(u32*)(((*(u8*)&(((AREA*)a0)->World) << 2) + (u32)&D_01c94040)) + (*(u8*)&(((AREA*)a0)->Area) * 0x18)) + 4);
        return;
    }
}
