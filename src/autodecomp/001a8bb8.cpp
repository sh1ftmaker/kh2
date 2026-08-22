// coverage: addr=0x001a8bb8 symbol=func_001a8bb8 size=24 class=straight source=typed status=exact fuzzy=100.0
// coverage-alternatives: lift:exact:100.0;e3:exact:100.0;ghidra:near:99.5;corpus:near:98.0;m2c:near:36.67
#include "common/types.h"
typedef float f32; typedef double f64;
struct YS_MEMBER;

struct YS_MEMBER {  // class YS::MEMBER size=0x4
    u8 Member[4];                                      // +0x0
};


// 0x001a8bb8 func_001a8bb8
void func_001a8bb8(u32 a0) asm("func_001a8bb8");
void func_001a8bb8(u32 a0) {
    *(u8*)&(((YS_MEMBER*)a0)->Member[0]) = 0;
    *(u8*)&(((YS_MEMBER*)a0)->Member[1]) = 0x12;
    *(u8*)&(((YS_MEMBER*)a0)->Member[2]) = 0x12;
    *(u8*)&(((YS_MEMBER*)a0)->Member[3]) = 0x12;
}
