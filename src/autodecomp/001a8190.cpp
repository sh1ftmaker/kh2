// coverage: addr=0x001a8190 symbol=_ZNK2YS10ITEM_TABLE9get_paramEv size=76 class=branchy source=typed status=exact fuzzy=100.0
// coverage-alternatives: lift:exact:100.0;m2c:near:55.45;ghidra:near:15.2
#include "common/types.h"
typedef float f32; typedef double f64;
struct anon_str_itemtable_h_61;
struct anon_str_itemtable_h_64;
struct anon_str_itemtable_h_67;
struct anon_str_itemtable_h_71;
struct anon_str_itemtable_h_81;
struct anon_str_itemtable_h_85;
struct anon_str_itemtable_h_88;
union YS_ITEM_TABLE_anon_uni_itemtable_h_60;
union YS_ITEM_TABLE_anon_uni_itemtable_h_104;
struct YS_ITEM_TABLE;

struct anon_str_itemtable_h_61 {  // structure __anon_str_itemtable_h_61 size=0x2
    u16 Param;                                         // +0x0
};

struct anon_str_itemtable_h_64 {  // structure __anon_str_itemtable_h_64 size=0x2
    u16 Id;                                            // +0x0
};

struct anon_str_itemtable_h_67 {  // structure __anon_str_itemtable_h_67 size=0x4
    u16 Id;                                            // +0x0
    u16 Param;                                         // +0x2
};

struct anon_str_itemtable_h_71 {  // structure __anon_str_itemtable_h_71 size=0x4
    u16 Id;                                            // +0x0
    u8 Ap;                                             // +0x2
    u8 Type;                                           // +0x3
};

struct anon_str_itemtable_h_81 {  // structure __anon_str_itemtable_h_81 size=0x4
    u16 CureRate;                                      // +0x0
    u16 Effect;                                        // +0x2
};

struct anon_str_itemtable_h_85 {  // structure __anon_str_itemtable_h_85 size=0x2
    u16 Id;                                            // +0x0
};

struct anon_str_itemtable_h_88 {  // structure __anon_str_itemtable_h_88 size=0x2
    u8 Rank;                                           // +0x0
    u8 Type;                                           // +0x1
};

union YS_ITEM_TABLE_anon_uni_itemtable_h_60 {  // union YS::ITEM_TABLE::__anon_uni_itemtable_h_60 size=0x4
    anon_str_itemtable_h_61 Equip;
    anon_str_itemtable_h_64 Magic;
    anon_str_itemtable_h_67 Weapon;
    anon_str_itemtable_h_71 Ability;
    anon_str_itemtable_h_81 Battle;
    anon_str_itemtable_h_85 Report;
    anon_str_itemtable_h_88 Mix;
};

union YS_ITEM_TABLE_anon_uni_itemtable_h_104 {  // union YS::ITEM_TABLE::__anon_uni_itemtable_h_104 size=0x2
    u16 BackyardId;
    u16 SpecialId;
};

struct YS_ITEM_TABLE {  // class YS::ITEM_TABLE size=0x18
    u16 Id;                                            // +0x0
    u8 Type;                                           // +0x2
    u8 Flag;                                           // +0x3
    YS_ITEM_TABLE_anon_uni_itemtable_h_60 _anon4;      // +0x4
    u16 MessageId;                                     // +0x8
    u16 HelpMessageId;                                 // +0xa
    u16 Buy;                                           // +0xc
    u16 Sell;                                          // +0xe
    u16 Command;                                       // +0x10
    YS_ITEM_TABLE_anon_uni_itemtable_h_104 _anon12;    // +0x12
    u16 Pic;                                           // +0x14
    u8 Prizebox;                                       // +0x16
    u8 Icon;                                           // +0x17
};

extern "C" u32 func_001d22a8(u32) asm("func_001d22a8");

// 0x001a8190 YS::ITEM_TABLE::get_param() const
u32 lift_001a8190(u32 a0) asm("_ZNK2YS10ITEM_TABLE9get_paramEv");
u32 lift_001a8190(u32 a0) {
    u32 t6;
    t6 = *(u8*)&(((YS_ITEM_TABLE*)a0)->Type);
    if (((s32)(((s32)(t6) < (s32)(2))) == 0)) {
        if (((s32)(t6) >= (s32)(0xe))) {
            if (((s32)(((s32)(t6) < (s32)(0x10))) != 0)) {
                return func_001d22a8(*(u16*)&(((YS_ITEM_TABLE*)a0)->_anon4.Equip));
            } else {
                return 0;
            }
        } else {
            return func_001d22a8(*(u16*)&(((YS_ITEM_TABLE*)a0)->_anon4.Weapon.Param));
        }
    } else {
        return 0;
    }
}
