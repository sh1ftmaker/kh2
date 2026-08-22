// coverage: addr=0x001575c0 symbol=_Z16wtarget_001575c0jjjj size=196 class=branchy source=permute status=exact fuzzy=100.0
// coverage-alternatives: lift:near:99.96;m2c:near:97.56;ghidra:near:85.23
#include "common/types.h"

extern "C" u32 func_00155d58(u32, u32) asm("func_00155d58");
extern "C" u32 func_001581d0(u32) asm("func_001581d0");
extern "C" u32 func_002ba358() asm("func_002ba358");
extern "C" u32 func_002ba390() asm("func_002ba390");
extern "C" void func_00138c10(u32, u32) asm("func_00138c10");
extern "C" void func_00154408(u32, u32) asm("func_00154408");

// 0x001575c0 wtarget_001575c0(unsigned int, unsigned int, unsigned int, unsigned int)
void lift_001575c0(u32 a0) asm("_Z16wtarget_001575c0jjjj");
void lift_001575c0(u32 a0) {
    u32 t6;
    u32 t4;
    t6 = *(u32*)(*(u32*)((*(u32*)((a0 + 0x34)) + 0x48c)));
    *(u32*)((a0 + 0x28)) = t6;
    *(u32*)((a0 + 0x24)) = t6;
    t4 = *(u8*)((a0 + 0x3cfb));
    if (((s32)(t4) == 0)) {
        *(u8*)((a0 + 0x3cfb)) = 1;
    } else {
        func_00138c10(a0 + 0x1a30, func_00155d58(a0, 0));
    }
    func_00138c10(a0 + 0x1bcc, func_00155d58(a0, 1));
    func_00138c10(a0 + 0x20a0, func_00155d58(a0, 2));
    func_00154408(a0 + 0x40, *(u32*)((a0 + 0x18)));
    if (((s32)(func_001581d0(a0)) != 0)) {
        if (((s32)(func_002ba358()) != 0)) {
            func_002ba390();
            return;
        } else {
            return;
        }
    } else {
        return;
    }
}
