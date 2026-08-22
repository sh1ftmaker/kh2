// coverage: addr=0x0018d590 symbol=func_0018d590 size=144 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:80.21;e3:near:0.0
#include "common/types.h"

extern "C" u32 D_0034ef18 asm("D_0034ef18");
extern "C" u32 D_01c60cd8 asm("D_01c60cd8");
extern "C" u32 func_00105110(u32) asm("func_00105110");
extern "C" void func_0018e040(u32) asm("_ZN2YS6ATTACK7refreshEv");
extern "C" void func_001c0058(u32) asm("func_001c0058");
extern "C" void func_001c0248(u32) asm("func_001c0248");
extern "C" void func_0031ee68(u32, u32) asm("func_0031ee68");

// 0x0018d590 func_0018d590
u32 func_0018d590(u32 a0) asm("func_0018d590");
u32 func_0018d590(u32 a0) {
    *(u32*)(a0) = (u32)&D_0034ef18;
    if (((s32)(*(u32*)((a0 + 8))) != 0)) {
        *(u32*)((*(u32*)((a0 + 8)) + 0x488)) = (*(u32*)((*(u32*)((a0 + 8)) + 0x488)) + -1);
    }
    if (((s32)(*(u32*)((a0 + 0x10))) != 0)) {
        *(u32*)((*(u32*)((a0 + 0x10)) + 0x488)) = (*(u32*)((*(u32*)((a0 + 0x10)) + 0x488)) + -1);
    }
    func_0031ee68((u32)&D_01c60cd8, a0);
    if (((s32)((*(u32*)((a0 + 4)) & 0x400)) == 0)) {
        func_0018e040(a0);
        func_001c0058(*(u32*)((a0 + 0x1c)));
    }
    func_001c0248(a0 + 0x30);
    return func_00105110(a0);
}
