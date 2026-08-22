// coverage: addr=0x0016f6a0 symbol=_ZNK2YS8OBJENTRY16get_weapon_entryEi size=64 class=branchy source=typed status=exact fuzzy=100.0
// coverage-alternatives: lift:exact:100.0;m2c:exact:100.0;ghidra:near:94.12;corpus:near:86.75
#include "common/types.h"
typedef float f32; typedef double f64;
struct YS_OBJENTRY;

struct YS_OBJENTRY {  // class YS::OBJENTRY size=0x60
    u32 Id;                                            // +0x0
    u8 Type;                                           // +0x4
    u8 Subtype;                                        // +0x5
    u8 DrawPriority;                                   // +0x6
    u8 Skeleton;                                       // +0x7
    s8 EntryName[32];                                  // +0x8
    s8 MsetFile[32];                                   // +0x28
    u16 Flag;                                          // +0x48
    u8 TargetType;                                     // +0x4a
    u8 Padding[1];                                     // +0x4b
    u16 Part;                                          // +0x4c
    u16 WeaponPart;                                    // +0x4e
    f32 Weight;                                        // +0x50
    u8 Cost;                                           // +0x54
    u8 Page;                                           // +0x55
    u8 ShadowSize;                                     // +0x56
    s8 Form;                                           // +0x57
    u16 ReadId[4];                                     // +0x58
};

extern "C" u32 func_0016f610(u32) asm("func_0016f610");
extern "C" u32 func_00185890(u32, u32) asm("func_00185890");

// 0x0016f6a0 YS::OBJENTRY::get_weapon_entry(int) const
u32 lift_0016f6a0(u32 a0) asm("_ZNK2YS8OBJENTRY16get_weapon_entryEi");
u32 lift_0016f6a0(u32 a0) {
    u32 v0;
    v0 = func_0016f610(a0);
    if (((s32)(v0) != 0)) {
        return func_00185890(*(u16*)&(((YS_OBJENTRY*)a0)->WeaponPart), v0);
    } else {
        return v0;
    }
}
