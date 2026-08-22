// coverage: addr=0x002322b8 symbol=func_002322b8 size=112 class=branchy source=typed status=exact fuzzy=100.0
// coverage-alternatives: lift:exact:100.0;e3:near:95.71;m2c:near:89.03;ghidra:near:81.0
#include "common/types.h"
typedef float f32; typedef double f64;
struct sa_BIN_PLAYER_OFFSET_CAMERA;

struct sa_BIN_PLAYER_OFFSET_CAMERA {  // structure sa::BIN_PLAYER_OFFSET_CAMERA size=0x8
    s16 my_size;                                       // +0x0
    s16 id;                                            // +0x2
    u16 start_frame;                                   // +0x4
    u16 type;                                          // +0x6
};

extern "C" u32 D_00232150 asm("D_00232150");
extern "C" u32 D_0035de26 asm("D_0035de26");
extern "C" u32 func_00102c18(u32, u32, u32) asm("func_00102c18");
extern "C" u32 func_002282f0(u32) asm("func_002282f0");

// 0x002322b8 func_002322b8
u32 func_002322b8(u32 a0) asm("func_002322b8");
u32 func_002322b8(u32 a0) {
    u32 v0;
    u32 v0_0;
    v0 = func_002282f0(*(u16*)&(((sa_BIN_PLAYER_OFFSET_CAMERA*)a0)->start_frame));
    if ((v0 == 0)) {
        if (((s32)(*(u16*)&(((sa_BIN_PLAYER_OFFSET_CAMERA*)a0)->type)) == 0)) {
            if ((*(u8*)(&D_0035de26) == 0)) {
                v0_0 = func_00102c18(1, 0x7526, (u32)&D_00232150);
                *(u8*)(&D_0035de26) = 1;
                v0 = v0_0;
            }
        } else {
            *(u8*)(&D_0035de26) = 0;
        }
    }
    return v0;
}
