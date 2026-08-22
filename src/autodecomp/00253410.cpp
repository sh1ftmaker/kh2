// coverage: addr=0x00253410 symbol=func_00253410 size=112 class=branchy source=typed status=exact fuzzy=100.0
// coverage-alternatives: lift:exact:100.0;ghidra:near:93.17;m2c:near:90.71
#include "common/types.h"
typedef float f32; typedef double f64;
struct YS_SELECTOR_CHOICE;
struct YS_SELECTOR;

struct YS_SELECTOR_CHOICE {  // structure YS::SELECTOR::CHOICE size=0x4
    u16 Id;                                            // +0x0
    u16 MessageId;                                     // +0x2
};

struct YS_SELECTOR {  // class YS::SELECTOR size=0x40
    u16 Id;                                            // +0x0
    u8 ChoiceNum;                                      // +0x2
    u8 ChoiceDefault;                                  // +0x3
    YS_SELECTOR_CHOICE Choice[4];                      // +0x4
    s16 BaseSequence;                                  // +0x14
    s16 TitleSequence;                                 // +0x16
    void *Information;                                 // +0x18
    u32 EntryId;                                       // +0x1c
    void *Callback;                                    // +0x20
    u8 PauseMode;                                      // +0x24
    u8 Flag;                                           // +0x25
    u8 SoundPause;                                     // +0x26
    s8 Padding[25];                                    // +0x27
};

extern "C" u32 func_0014aba8(u32, u32) asm("func_0014aba8");
extern "C" u32 func_00253180(u32, u32) asm("func_00253180");
extern "C" u32 func_002535d0(u32) asm("func_002535d0");
extern "C" void func_00242740(u32) asm("func_00242740");
extern "C" void func_00258b00(u32, u32) asm("func_00258b00");

// 0x00253410 func_00253410
u32 func_00253410(u32 a0, u32 a1) asm("func_00253410");
u32 func_00253410(u32 a0, u32 a1) {
    u8 t7;
    t7 = ((*(u8*)&(((YS_SELECTOR*)a0)->Flag) ^ 1) & 1);
    if (((s32)(t7) == 0)) {
        *(u32*)((func_0014aba8(a0, a1) + 0xfc)) = 0;
    }
    func_00258b00(a0, a1);
    func_00242740(func_002535d0(8));
    return func_00253180(8, 0xffffffff);
}
