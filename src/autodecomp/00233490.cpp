// coverage: addr=0x00233490 symbol=func_00233490 size=236 class=float source=typed status=exact fuzzy=100.0
// coverage-alternatives: lift:exact:100.0;m2c:near:69.16;ghidra:near:67.19
#include "common/types.h"
typedef float f32; typedef double f64;
struct sa_BIN_SEQ_MOB;

struct sa_BIN_SEQ_MOB {  // structure sa::BIN_SEQ_MOB size=0x28
    s16 my_size;                                       // +0x0
    s16 id;                                            // +0x2
    u16 start_frame;                                   // +0x4
    s16 put_id;                                        // +0x6
    f32 x;                                             // +0x8
    f32 y;                                             // +0xc
    f32 z;                                             // +0x10
    s32 num;                                           // +0x14
    f32 range_x;                                       // +0x18
    f32 range_y;                                       // +0x1c
    f32 range_z;                                       // +0x20
    f32 rot_y;                                         // +0x24
};

extern "C" f32 func_00227c78(u32) asm("func_00227c78");
extern "C" u32 func_0016f000(u32, u32, f32) asm("func_0016f000");
extern "C" u32 func_00227ca8(u32) asm("func_00227ca8");
extern "C" u32 func_00227d10(u32) asm("func_00227d10");
extern "C" u32 func_002282f0(u32) asm("func_002282f0");

// 0x00233490 func_00233490
// minilink-rodata 0x00371390   (float literals live here in the original)
void func_00233490(u32 a0) asm("func_00233490");
void func_00233490(u32 a0) {
    u8 frame[32];
    u32 v0;
    if ((func_002282f0(*(u16*)&(((sa_BIN_SEQ_MOB*)a0)->start_frame)) == 0)) {
        v0 = func_00227d10(*(s16*)&(((sa_BIN_SEQ_MOB*)a0)->put_id));
        if (((s32)(*(u32*)((v0 + 8))) == 0)) {
            *(f32*)((u32)frame) = func_00227c78(a0 + 8);
            *(f32*)(((u32)frame + 4)) = func_00227c78(a0 + 0xc);
            *(f32*)(((u32)frame + 8)) = func_00227c78(a0 + 0x10);
            *(u32*)((v0 + 8)) = func_0016f000(*(u32*)(v0) | 0x40000000, (u32)frame, func_00227c78(a0 + 0x24) * 0.01745329238474369f);
            *(f32*)(((u32)frame + 0x10)) = func_00227c78(a0 + 0x18);
            *(f32*)(((u32)frame + 0x14)) = func_00227c78(a0 + 0x1c);
            *(f32*)(((u32)frame + 0x18)) = func_00227c78(a0 + 0x20);
            ((void(*)(u32, u32, u32))(*(u32*)((*(u32*)(*(u32*)((v0 + 8))) + 0x58))))(*(u32*)((v0 + 8)), (u32)frame + 0x10, func_00227ca8(a0 + 0x14));
        }
    }
    return;
}
