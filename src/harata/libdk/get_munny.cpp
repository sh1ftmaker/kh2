#include "get_munny.hpp"

// ---- 0x0031c7a8 func_0031c7a8 ----
#include "../../common/types.h"

extern "C" u32 _ZN2YI8SEQUENCED1Ev_239870(void* self) asm("_ZN2YI8SEQUENCED1Ev");  // YI::SEQUENCE::~SEQUENCE() -- arity VERIFIED

typedef void (*Fn_0031c7a8)(u32);

extern "C" u32 D_0034a660 asm("D_0034a660");
extern "C" u32 D_00347e60 asm("D_00347e60");
extern "C" u32 D_00347f98 asm("D_00347f98");

void func_0031c7a8_impl(u32 self) asm("func_0031c7a8");
void func_0031c7a8_impl(u32 self) {
            u32 tmp442;
            long tmp574;
        u32 tmp911;
        u32 tmp913;
        u32 end;
        u32 begin;
        tmp913 = (s32)((((self) & 0xffffffff) ^ 0) | 0);
    *(u32*)self = (u32)&D_0034a660;

    if (self != (u32)-456) {
            u32 tmp232;
        tmp911 = tmp913;
        end = (s32)((tmp911 + 2864) & 0xffffffff);
        begin = (s32)(((self) + 456) + 0);
        begin = ((begin) + 0) + 0;
        do {
            if (begin == end) {
                break;
            }
            end -= 344;
            tmp442 = (((begin)));
            tmp232 = tmp442 + 0;
            {
            tmp574 = tmp232;
            begin = tmp574 ^ 0;
            ((Fn_0031c7a8)*(u32*)(*(u32*)end + 0))(end);
            }
        } while (1);
    tmp574 = tmp574;
    }

    *(u32*)(self + 0x30) = (u32)&D_00347e60;
    _ZN2YI8SEQUENCED1Ev_239870((void*)(self + 0x48));
    *(u32*)(self + 0x30) = (u32)&D_00347f98;
    *(u32*)self = (u32)&D_00347f98;
}
