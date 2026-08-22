// coverage: addr=0x002881c0 symbol=func_002881c0 size=328 class=branchy source=permute status=exact fuzzy=100.0
// coverage-alternatives: lift:near:92.55;m2c:near:78.1;ghidra:near:73.6;e3:near:0.0
#include "common/types.h"

extern "C" u32 D_0035f328 asm("D_0035f328");
extern "C" u32 D_0035f32a asm("D_0035f32a");
extern "C" u32 D_0035f32c asm("D_0035f32c");
extern "C" u32 D_0035f32e asm("D_0035f32e");
extern "C" u32 D_0035f334 asm("D_0035f334");
extern "C" u32 D_0035f338 asm("D_0035f338");
extern "C" u32 D_0035f33c asm("D_0035f33c");
extern "C" u32 D_0035f340 asm("D_0035f340");
extern "C" u32 D_0035f344 asm("D_0035f344");
extern "C" u32 D_0035f3a8 asm("D_0035f3a8");
extern "C" u32 func_00103398(u32) asm("func_00103398");
extern "C" u32 func_001033b0(u32) asm("func_001033b0");
extern "C" u32 func_00243150(u32) asm("func_00243150");
extern "C" u32 func_00253330(u32) asm("func_00253330");
extern "C" void func_0023fad0(u32) asm("func_0023fad0");

// 0x002881c0 func_002881c0
void func_002881c0() asm("func_002881c0");
void func_002881c0() {
    u32 s0;
    if (((s32)(*(u8*)(&D_0035f328)) != 0)) {
        s0 = func_00103398(*(s16*)(&D_0035f32a));
        if ((func_001033b0(*(s16*)(&D_0035f32a)) != 1)) {
            ((void(*)())(*(u32*)((func_00253330(s0) + 8))))();
        } else {
            ((void(*)())(*(u32*)((func_00243150(s0) + 8))))();
            func_0023fad0((u32)&D_0035f3a8);
        }
    }
    if ((*(u32*)(&D_0035f334) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035f334)) + 4))))(*(u32*)(&D_0035f334));
        *(u32*)(&D_0035f334) = 0;
    }
    if ((*(u32*)(&D_0035f338) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035f338)) + 0x10))))(*(u32*)(&D_0035f338));
        *(u32*)(&D_0035f338) = 0;
    }
    if ((*(u32*)(&D_0035f33c) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035f33c)) + 4))))(*(u32*)(&D_0035f33c));
        *(u32*)(&D_0035f33c) = 0;
    }
    if (((s32)(*(u32*)(&D_0035f340)) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035f340)) + 4))))(*(u32*)(&D_0035f340));
        *(u32*)(&D_0035f340) = 0;
    }
    *(u16*)(&D_0035f32e) = 0xffffffff;
    *(u32*)(&D_0035f344) = 0;
    *(u16*)(&D_0035f32c) = 0xffffffff;
    *(u8*)(&D_0035f328) = 0;
    *(u16*)(&D_0035f32a) = 0xffffffff;
    return;
}
