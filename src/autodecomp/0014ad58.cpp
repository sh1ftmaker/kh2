// coverage: addr=0x0014ad58 symbol=func_0014ad58 size=184 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:32.67
#include "common/types.h"

extern "C" u32 D_003495c0 asm("D_003495c0");
extern "C" u32 D_003496d0 asm("D_003496d0");
extern "C" u32 D_003497e0 asm("D_003497e0");
extern "C" u32 D_003498f0 asm("D_003498f0");
extern "C" u32 func_0014b208(u32, u32, u32) asm("func_0014b208");
extern "C" void func_0014b1e0(u32, u32, u32) asm("func_0014b1e0");

// 0x0014ad58 func_0014ad58
u32 func_0014ad58() asm("func_0014ad58");
u32 func_0014ad58() {
    func_0014b1e0((u32)&D_003495c0, 0, 0);
    func_0014b208((u32)&D_003495c0, 0x200, 0x23);
    func_0014b1e0((u32)&D_003496d0, 0, 0x17d);
    func_0014b208((u32)&D_003496d0, 0x200, 0x23);
    func_0014b1e0((u32)&D_003497e0, 0, 0);
    func_0014b208((u32)&D_003497e0, 0x200, 0x23);
    func_0014b1e0((u32)&D_003498f0, 0, 0x17d);
    return func_0014b208((u32)&D_003498f0, 0x200, 0x23);
}
