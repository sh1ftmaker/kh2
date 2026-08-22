// coverage: addr=0x0014ae10 symbol=func_0014ae10 size=192 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:86.38;e3:near:17.96
#include "common/types.h"

extern "C" u32 D_0014ac48 asm("D_0014ac48");
extern "C" u32 D_0014ac68 asm("D_0014ac68");
extern "C" u32 D_0014ac90 asm("D_0014ac90");
extern "C" u32 D_0014acb0 asm("D_0014acb0");
extern "C" u32 D_003494b0 asm("D_003494b0");
extern "C" u32 D_003495c0 asm("D_003495c0");
extern "C" u32 D_003496d0 asm("D_003496d0");
extern "C" u32 D_003497e0 asm("D_003497e0");
extern "C" u32 D_003498f0 asm("D_003498f0");
extern "C" u32 D_00349a00 asm("D_00349a00");
extern "C" u32 func_00102c18(u32, u32, u32) asm("func_00102c18");
extern "C" void func_0014a988(u32) asm("func_0014a988");
extern "C" void func_0014ad58() asm("func_0014ad58");

// 0x0014ae10 func_0014ae10
u32 func_0014ae10() asm("func_0014ae10");
u32 func_0014ae10() {
    func_0014a988((u32)&D_003495c0);
    func_0014a988((u32)&D_003496d0);
    func_0014a988((u32)&D_003497e0);
    func_0014a988((u32)&D_003498f0);
    func_0014a988((u32)&D_00349a00);
    func_0014a988((u32)&D_003494b0);
    func_0014ad58();
    func_00102c18(0, 0x13880, (u32)&D_0014ac48);
    func_00102c18(0, 0x13880, (u32)&D_0014ac68);
    func_00102c18(0, 0x19640, (u32)&D_0014ac90);
    return func_00102c18(0, 0x19a28, (u32)&D_0014acb0);
}
