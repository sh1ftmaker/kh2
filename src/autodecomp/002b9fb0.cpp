// coverage: addr=0x002b9fb0 symbol=func_002b9fb0 size=140 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:73.37
#include "common/types.h"

extern "C" u32 D_01e2a410 asm("D_01e2a410");
extern "C" u32 func_002bbf98() asm("func_002bbf98");
extern "C" void func_002b7fbc(u32) asm("func_002b7fbc");
extern "C" void func_002b9b78() asm("func_002b9b78");
extern "C" void func_002ba390() asm("func_002ba390");
extern "C" void func_002ba9c0() asm("func_002ba9c0");
extern "C" void func_002baa60() asm("func_002baa60");
extern "C" void func_002bc470(u32) asm("func_002bc470");
extern "C" void func_002bc608(u32) asm("func_002bc608");
extern "C" void func_002bc798() asm("func_002bc798");
extern "C" void func_002bced8(u32) asm("func_002bced8");
extern "C" void func_002bcee8(u32) asm("func_002bcee8");

// 0x002b9fb0 func_002b9fb0
u32 func_002b9fb0() asm("func_002b9fb0");
u32 func_002b9fb0() {
    func_002b7fbc(1);
    func_002bced8((u32)&D_01e2a410);
    func_002bcee8((u32)&D_01e2a410);
    func_002b9b78();
    func_002ba390();
    func_002bc798();
    func_002ba9c0();
    func_002bc470(2);
    func_002bc470(3);
    func_002baa60();
    func_002bc608(0);
    func_002bc608(1);
    func_002bc608(2);
    return func_002bbf98();
}
