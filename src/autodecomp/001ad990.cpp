// coverage: addr=0x001ad990 symbol=_Z13func_001ad990jfff size=52 class=float source=typed status=exact fuzzy=100.0
// coverage-alternatives: lift:exact:100.0;ghidra:near:19.16;e3:near:7.21
#include "common/types.h"
typedef float f32; typedef double f64;
struct YS_FADE;

struct YS_FADE {  // class YS::FADE size=0x8
    f32 Ratio;                                         // +0x0
    f32 Add;                                           // +0x4
};


// 0x001ad990 func_001ad990(unsigned int, float, float, float)
void lift_001ad990(u32 a0, f32 fa0, f32 fa1, f32 fa2) asm("_Z13func_001ad990jfff");
void lift_001ad990(u32 a0, f32 fa0, f32 fa1, f32 fa2) {
    if ((0.0f < fa2)) {
        *(f32*)&(((YS_FADE*)a0)->Ratio) = fa0;
        *(f32*)&(((YS_FADE*)a0)->Add) = ((fa1 - fa0) / fa2);
        return;
    } else {
        *(f32*)&(((YS_FADE*)a0)->Ratio) = fa1;
        *(f32*)&(((YS_FADE*)a0)->Add) = 0.0f;
        return;
    }
}
