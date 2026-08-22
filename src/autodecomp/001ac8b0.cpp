// coverage: addr=0x001ac8b0 symbol=func_001ac8b0 size=88 class=straight source=typed status=exact fuzzy=100.0
// coverage-alternatives: lift:exact:100.0;m2c:near:71.73;ghidra:near:41.0
#include "common/types.h"
typedef float f32; typedef double f64;
struct YS_BITFLAG_1_u_int;
struct YS_MESSAGE_SIZE;
struct YS_MESSAGE_STYLE;
struct YS_MESSAGEDRAW;
struct YS_SLIST_ELEM_YS_WINDOW_1;
struct YS_WINDOW;
struct YS_WINDOW_CREDIT;

struct YS_BITFLAG_1_u_int {  // class YS::BITFLAG<1, u_int> size=0x4
    u8 Flag[4];   // raw: klass[1] (size mismatch)     // +0x0
};

struct YS_MESSAGE_SIZE {  // class YS::MESSAGE::SIZE size=0x8
    u32 Width;                                         // +0x0
    u32 Height;                                        // +0x4
};

struct YS_MESSAGE_STYLE {  // class YS::MESSAGE::STYLE size=0x18
    u32 Color;                                         // +0x0
    f32 Scale;                                         // +0x4
    f32 HScale;                                        // +0x8
    s32 LineSpace;                                     // +0xc
    u32 OrigColor;                                     // +0x10
    f32 OrigScale;                                     // +0x14
};

struct YS_MESSAGEDRAW {  // class YS::MESSAGEDRAW size=0x60
    YS_BITFLAG_1_u_int Flag;                           // +0x0
    void *Font;                                        // +0x4
    void *Message;                                     // +0x8
    void *Current;                                     // +0xc
    YS_MESSAGE_SIZE Size;                              // +0x10
    YS_WINDOW *Window;                                 // +0x18
    f32 Time;                                          // +0x1c
    s32 SelectNum;                                     // +0x20
    YS_MESSAGE_STYLE Style;                            // +0x24
    u32 Color;                                         // +0x3c
    u32 ShadowColor;                                   // +0x40
    s32 XPos;                                          // +0x44
    s32 YPos;                                          // +0x48
    f32 FadeTime;                                      // +0x4c
    YS_MESSAGE_SIZE MaxSize;                           // +0x50
    s32 Align;                                         // +0x58
    f32 FontTime;                                      // +0x5c
};

struct YS_SLIST_ELEM_YS_WINDOW_1 {  // class YS::SLIST_ELEM<YS::WINDOW, 1> size=0x4
    void *Next[1];                                     // +0x0
};

struct YS_WINDOW {  // class YS::WINDOW size=0x84
    void *_vptr_;                                      // +0x0
    s32 XPos;                                          // +0x4
    s32 YPos;                                          // +0x8
    YS_MESSAGEDRAW MessageDraw;                        // +0xc
    void *FontStyle;                                   // +0x6c
    s32 Phase;                                         // +0x70
    f32 Time;                                          // +0x74
    s32 Priority;                                      // +0x78
    YS_SLIST_ELEM_YS_WINDOW_1 SList;                   // +0x7c
    s32 MessageId;                                     // +0x80
};

struct YS_WINDOW_CREDIT {  // class YS::WINDOW_CREDIT size=0x84
    YS_WINDOW super_WINDOW;                            // +0x0
};

extern "C" u32 D_00350bf0 asm("D_00350bf0");
extern "C" u32 func_001aa668(u32, u32) asm("func_001aa668");
extern "C" void func_001ac378(u32, u32, u32, u32, u32, u32, u32) asm("func_001ac378");

// 0x001ac8b0 func_001ac8b0
u32 func_001ac8b0(u32 a0, u32 a1) asm("func_001ac8b0");
u32 func_001ac8b0(u32 a0, u32 a1) {
    func_001ac378(a0, 4, 3, a1, 0, 0x100, 0x16d);
    *(u32*)(a0) = (u32)&D_00350bf0;
    *(u32*)&(((YS_WINDOW_CREDIT*)a0)->super_WINDOW.MessageDraw.Align) = 4;
    return func_001aa668(a0 + 0xc, a0);
}
