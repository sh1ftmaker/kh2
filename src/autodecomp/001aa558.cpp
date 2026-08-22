// coverage: addr=0x001aa558 symbol=func_001aa558 size=268 class=loop source=typed status=exact fuzzy=100.0
// coverage-alternatives: lift:exact:100.0;m2c:near:79.99;ghidra:near:11.79
#include "common/types.h"
typedef float f32; typedef double f64;
struct YS_BITFLAG_1_u_int;
struct YS_MESSAGE_SIZE;
struct YS_MESSAGE_STYLE;
struct YS_MESSAGEDRAW;
struct YS_SLIST_ELEM_YS_WINDOW_1;
struct YS_WINDOW;

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

extern "C" u32 func_00192388(u32) asm("func_00192388");
extern "C" u32 func_00192440(u32, u32) asm("func_00192440");
extern "C" u32 func_00192498(u32, u32) asm("func_00192498");

// 0x001aa558 func_001aa558
void func_001aa558(u32 a0) asm("func_001aa558");
void func_001aa558(u32 a0) {
    u32 s2;
    u32 t6;
    u32 t7;
    u32 s1;
    u32 s0;
    u32 v0;
    s2 = *(u32*)&(((YS_MESSAGEDRAW*)a0)->Current);
    if (((s32)(s2) != 0)) {
        do {
            if (((s32)(func_00192440(s2, 0)) != 0)) {
                t6 = *(u8*)(s2);
                if ((t6 != 5)) {
                    if (((s32)(((s32)(t6) < (s32)(6))) != 0)) {
                        if ((t6 == 0)) {
                            s2 = 0;
                        }
                    } else {
                        if ((t6 == 0x10)) {
                            s2 = 0;
                        }
                    }
                } else {
                    t7 = *(u32*)&(((YS_MESSAGEDRAW*)a0)->Window);
                    if (((s32)(t7) != 0)) {
                        s1 = func_00192498(s2, 1);
                        s0 = func_00192498(s2, 3);
                        ((void(*)(u32, u32, u32, u32))(*(u32*)((*(u32*)(*(u32*)&(((YS_MESSAGEDRAW*)a0)->Window)) + 0x1c))))(*(u32*)&(((YS_MESSAGEDRAW*)a0)->Window), s1, s0, func_00192498(s2, 5));
                    }
                }
            }
            if (((s32)(s2) == 0)) {
                return;
            }
            v0 = func_00192388(s2);
            s2 = v0;
        } while (((s32)(v0) != 0));
    }
    return;
}
