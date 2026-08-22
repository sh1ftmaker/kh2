// coverage: addr=0x00188bb0 symbol=func_00188bb0 size=72 class=branchy source=typed status=exact fuzzy=100.0
// coverage-alternatives: lift:exact:100.0;ghidra:exact:100.0;m2c:near:94.63
#include "common/types.h"
typedef float f32; typedef double f64;
struct YS_ABILITY_EQUIP;
struct anon_str_friend_saveram_h_19;
union kn_FriendSaveRam_anon_uni_friend_saveram_h_17;
struct kn_FriendSaveRam;
struct YS_PARTRAM;

struct YS_ABILITY_EQUIP {  // structure YS::ABILITY::EQUIP size=0x2
    u16 IsEquip : 1;                                   // +0x0
    u16 Item : 15;                                     // +0x2
};

struct anon_str_friend_saveram_h_19 {  // structure __anon_str_friend_saveram_h_19 size=0x20
    u8 style;                                          // +0x0
    u8 frequencyLevel[31];                             // +0x1
};

union kn_FriendSaveRam_anon_uni_friend_saveram_h_17 {  // union kn::FriendSaveRam::__anon_uni_friend_saveram_h_17 size=0x20
    u8 buffer[32];
    anon_str_friend_saveram_h_19 _anon0;
};

struct kn_FriendSaveRam {  // structure kn::FriendSaveRam size=0x20
    kn_FriendSaveRam_anon_uni_friend_saveram_h_17 _anon0; // +0x0
};

struct YS_PARTRAM {  // class YS::PARTRAM size=0x114
    u16 Weapon[2];                                     // +0x0
    u8 Hp;                                             // +0x4
    u8 MaxHp;                                          // +0x5
    u8 Mp;                                             // +0x6
    u8 MaxMp;                                          // +0x7
    u8 Ap;                                             // +0x8
    u8 Attack;                                         // +0x9
    u8 Wisdom;                                         // +0xa
    u8 Defence;                                        // +0xb
    u8 MpDrive;                                        // +0xc
    u8 MpDriveMax;                                     // +0xd
    u8 LevelUpType;                                    // +0xe
    u8 Level;                                          // +0xf
    u8 ArmorMax;                                       // +0x10
    u8 AccessoryMax;                                   // +0x11
    u8 ItemMax;                                        // +0x12
    u8 Padding2[1];                                    // +0x13
    u16 Armor[8];                                      // +0x14
    u16 Accessory[8];                                  // +0x24
    u16 Item[8];                                       // +0x34
    u16 ItemSlot[8];                                   // +0x44
    YS_ABILITY_EQUIP Ability[80];                      // +0x54
    kn_FriendSaveRam friendSaveRam;                    // +0xf4
};

extern "C" u32 D_0032f210 asm("D_0032f210");
extern "C" u32 func_001b6fb0(u32, u32) asm("func_001b6fb0");

// 0x00188bb0 func_00188bb0
u32 func_00188bb0(u32 a0, u32 a1) asm("func_00188bb0");
u32 func_00188bb0(u32 a0, u32 a1) {
    u32 v0;
    v0 = ((s32)(((u32)(*(u8*)&(((YS_PARTRAM*)a0)->Level)) < (u32)(0x63))) != 0) ? (*(u32*)(func_001b6fb0(a1, *(u8*)&(((YS_PARTRAM*)a0)->Level))) - *(u32*)(&D_0032f210)) : 0;
    return v0;
}
