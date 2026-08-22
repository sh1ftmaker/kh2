// coverage: addr=0x001df9c8 symbol=func_001df9c8 size=108 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:90.37;ghidra:near:65.86
#include "common/types.h"

extern "C" u32 func_001dc840(u32) asm("func_001dc840");
extern "C" u32 func_001dc978(u32, f32) asm("func_001dc978");

// 0x001df9c8 func_001df9c8
void func_001df9c8(u32 a0) asm("func_001df9c8");
void func_001df9c8(u32 a0) {
    if (((s32)((*(u32*)((a0 + 0x5c)) & 0x20)) == 0)) {
        *(u32*)((a0 + 0x5c)) = (*(u32*)((a0 + 0x5c)) | 0x20);
        if (((s32)((*(u32*)((*(u32*)((a0 + 0x44)) + 0x10)) & 0x80)) != 0)) {
            func_001dc840(*(u32*)((a0 + 0x40)));
            return;
        } else {
            if (((s32)((*(u32*)((*(u32*)((a0 + 0x44)) + 0x10)) & 0x40)) != 0)) {
                func_001dc978(*(u32*)((a0 + 0x40)), (f32)((s32)(*(u8*)((*(u32*)((a0 + 0x44)) + 5)))));
                return;
            } else {
                return;
            }
        }
    } else {
        return;
    }
}
