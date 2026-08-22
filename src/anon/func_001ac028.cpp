#include "../common/types.h"

extern "C" u32 SEQUENCE_239700(void* self) asm("_ZN2YI8SEQUENCEC1Ev");
extern "C" u32 func_001ab810_1ab810() asm("func_001ab810");
extern "C" u32 GetImage_1ab800() asm("_ZN2YS4FONT8GetImageEv");
extern "C" u32 Init_239988(void*, void*, void*) asm("func_00239988");

void func_001ac028_impl(void* a0) asm("func_001ac028");
void func_001ac028_impl(void* a0) {
    *(u8*)a0 = 0;
    SEQUENCE_239700((u8*)a0 + 4);
    u32 r = func_001ab810_1ab810();
    u32 img = GetImage_1ab800();
    Init_239988((u8*)a0 + 4, (void*)r, (void*)img);
}
