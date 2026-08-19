#include "command_one.hpp"

namespace dk {

extern u8 D_00348000 asm("D_00348000");
extern u8 D_0034805c asm("D_0034805c");



extern "C" u32 func_00138840(...);
extern "C" u32 func_0023acd8(...);
void COMMAND_ONE::update() {
    u32 s0 = (u32)this;
    func_00138840((u32)this);
    if (*(s32*)((u32)this + (s32)(780)) >= *(s32*)((u32)&D_0034805c + (s32)(0))) {
        func_0023acd8((u32)((s32)s0 + (436)));
        return;
    }
}

}  // namespace dk

// ---- 0x0031afa8 func_0031afa8 ----
#include "../../common/types.h"
extern "C" u32 seq_dtor_239870(u32 self) asm("_ZN2YI8SEQUENCED1Ev");
extern "C" u32 D_003485b0 asm("D_003485b0");
extern "C" u32 D_00347e60 asm("D_00347e60");
extern "C" u32 D_00347f98 asm("D_00347f98");
void func_0031afa8_impl(u32 self) asm("func_0031afa8");
void func_0031afa8_impl(u32 self) {
    *(u32*)self = (u32)&D_003485b0;
    seq_dtor_239870(self + 436);
    *(u32*)self = (u32)&D_00347e60;
    seq_dtor_239870(self + 24);
    *(u32*)self = (u32)&D_00347f98;
}

// ---- 0x0031b000 func_0031b000 ----
extern "C" u32 seq_dtor_239870(u32 self) asm("_ZN2YI8SEQUENCED1Ev");
extern "C" u32 D_003485b0 asm("D_003485b0");
extern "C" u32 D_00347e60 asm("D_00347e60");
extern "C" u32 D_00347f98 asm("D_00347f98");
extern "C" u32 D_00347f80 asm("D_00347f80");
typedef void (*Fn_0031b000)(u32, u32);
void func_0031b000_impl(u32 self) asm("func_0031b000");
void func_0031b000_impl(u32 self) {
    *(u32*)self = (u32)&D_003485b0;
    seq_dtor_239870(self + 436);
    *(u32*)self = (u32)&D_00347e60;
    seq_dtor_239870(self + 24);
    *(u32*)self = (u32)&D_00347f98;
    u32 t = D_00347f80;
    u32 obj = *(u32*)(t + 20);
    Fn_0031b000 fn = (Fn_0031b000)*(u32*)(*(u32*)obj + 4);
    fn(obj, self);
}
