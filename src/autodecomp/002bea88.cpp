// coverage: addr=0x002bea88 symbol=func_002bea88 size=160 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:69.45;ghidra:near:48.0
#include "common/types.h"

extern "C" u32 D_00352130 asm("D_00352130");
extern "C" u32 D_00361898 asm("D_00361898");
extern "C" f32 func_002bf9d8(u32) asm("func_002bf9d8");
extern "C" u32 func_001050d8(u32) asm("func_001050d8");
extern "C" u32 func_002c6218() asm("func_002c6218");
extern "C" void func_00191bf0(f32) asm("func_00191bf0");
extern "C" void func_00191c30(f32) asm("func_00191c30");
extern "C" void func_001c8e90() asm("func_001c8e90");
extern "C" void func_002be6f0() asm("func_002be6f0");
extern "C" void func_002bf098(u32) asm("func_002bf098");
extern "C" void func_002c1750() asm("func_002c1750");
extern "C" void func_002c1dc0() asm("func_002c1dc0");
extern "C" void func_002c6190(u32) asm("func_002c6190");

// 0x002bea88 func_002bea88
// minilink-rodata 0x003753f4   (float literals live here in the original)
f32 func_002bea88() asm("func_002bea88");
f32 func_002bea88() {
    *(u8*)(&D_00361898) = 1;
    func_002be6f0();
    func_001c8e90();
    func_002c6190(func_002c6218());
    func_002bf098(func_001050d8(0xa0));
    func_00191bf0(4.0f);
    func_00191c30((*(f32*)((*(u32*)(&D_00352130) + 0x4c)) * 4.0f) + 500.0f);
    func_002c1dc0();
    func_002c1750();
    return func_002bf9d8(0);
}
