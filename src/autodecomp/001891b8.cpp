// coverage: addr=0x001891b8 symbol=_ZN2YS7FORMRAM11set_abilityEi size=68 class=loop source=typed status=exact fuzzy=100.0
// coverage-alternatives: lift:exact:100.0;ghidra:exact:100.0;e3:near:17.1;m2c:near:12.78
#include "common/types.h"
typedef float f32; typedef double f64;
struct YS_ABILITY_EQUIP;
struct YS_FORMRAM;

struct YS_ABILITY_EQUIP {  // structure YS::ABILITY::EQUIP size=0x2
    u16 IsEquip : 1;                                   // +0x0
    u16 Item : 15;                                     // +0x2
};

struct YS_FORMRAM {  // class YS::FORMRAM size=0x38
    u16 Weapon;                                        // +0x0
    u8 Level;                                          // +0x2
    u8 AbilityLevel;                                   // +0x3
    s32 Exp;                                           // +0x4
    YS_ABILITY_EQUIP Ability[24];                      // +0x8
};


// 0x001891b8 YS::FORMRAM::set_ability(int)
void lift_001891b8(u32 a0, u32 a1) asm("_ZN2YS7FORMRAM11set_abilityEi");
void lift_001891b8(u32 a0, u32 a1) {
    u32 t5;
    t5 = 0;
    do {
        if (((*(u16*)&(((YS_FORMRAM*)a0)->Ability[0]) & 0x7fff) == 0)) {
            *(u16*)&(((YS_FORMRAM*)a0)->Ability[0]) = (((*(u16*)&(((YS_FORMRAM*)a0)->Ability[0]) & 0xffff8000) | (a1 & 0x7fff)) | 0xffff8000);
            return;
        }
        a0 = (a0 + 2);
        t5 = (t5 + 1);
    } while (((s32)(((s32)(t5) < (s32)(0x18))) != 0));
    return;
}
