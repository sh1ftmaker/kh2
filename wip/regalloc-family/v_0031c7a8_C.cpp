#include "common/types.h"

extern "C" u32 seqD1(u32 self) asm("_ZN2YI8SEQUENCED1Ev");
extern "C" u32 D_0034a660 asm("D_0034a660");
extern "C" u32 D_0034a618 asm("D_0034a618");
extern "C" u32 D_00347e60 asm("D_00347e60");
extern "C" u32 D_00347f98 asm("D_00347f98");
extern "C" u32 D_00347f80 asm("D_00347f80");
typedef void (*Fn1)(u32);
typedef void (*Fn2)(u32, u32);
void func_0031c7a8_impl(u32 self) asm("func_0031c7a8");
void func_0031c7a8_impl(u32 self) {
    *(u32*)self = (u32)&D_0034a660;
    if (self != (u32)-0x1c8) {
        u32 begin = self + 0x1c8;
        u32 end = self + 0xb30;
        do {
            if (begin == end) break;
            end -= 0x158;
            Fn1 fn = (Fn1)*(u32*)(*(u32*)end);
            fn(end);
        } while (1);
    }
    *(u32*)(self + 0x30) = (u32)&D_00347e60;
    seqD1(self + 0x48);
    *(u32*)(self + 0x30) = (u32)&D_00347f98;
    *(u32*)self = (u32)&D_00347f98;
}
