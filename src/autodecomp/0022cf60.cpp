// coverage: addr=0x0022cf60 symbol=func_0022cf60 size=160 class=float source=permute status=exact fuzzy=100.0
// coverage-alternatives: lift:near:99.17;e3:near:64.77;m2c:near:51.5;ghidra:near:45.97
#include "common/types.h"

extern "C" u32 D_0022cf18 asm("D_0022cf18");
extern "C" u32 D_01dad990 asm("D_01dad990");
extern "C" u32 func_00102c18(u32, u32, u32) asm("func_00102c18");
extern "C" u32 func_00225b00(u32) asm("func_00225b00");
extern "C" u32 func_002282f0(u32) asm("func_002282f0");
extern "C" void func_002f1460(u32, u32, f32, f32, f32, f32) asm("func_002f1460");

// 0x0022cf60 func_0022cf60
void func_0022cf60(u32 a0) asm("func_0022cf60");
void func_0022cf60(u32 a0) {
    if ((func_002282f0(*(s16*)((a0 + 4))) == 0)) {
        if ((func_00225b00(*(s16*)((a0 + 4))) == 0)) {
            u32 t14_214 = (u32)(*(s16*)((a0 + 0xc)));
            func_002f1460((u32)&D_01dad990, *(s16*)((a0 + 0xe)), (f32)((s32)(*(s16*)((a0 + 6)))), (f32)((s32)(*(s16*)((a0 + 8)))), (f32)((s32)(*(s16*)((a0 + 0xa)))), (f32)((s32)(*(s16*)((a0 + 0xc)))) + (f32)((s32)(t14_214)));
            func_00102c18(1, 0x752f, (u32)&D_0022cf18);
            return;
        } else {
            return;
        }
    } else {
        return;
    }
}
