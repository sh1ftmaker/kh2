#include "gauge_friend.hpp"

// ---- 0x0031c668 func_0031c668 ----
#include "../../common/types.h"

extern "C" u32 _ZN2YI8SEQUENCED1Ev_239870(void* self) asm("_ZN2YI8SEQUENCED1Ev");  // YI::SEQUENCE::~SEQUENCE() -- arity VERIFIED

extern "C" u32 D_0034a618 asm("D_0034a618");
extern "C" u32 D_00347e60 asm("D_00347e60");
extern "C" u32 D_00347f98 asm("D_00347f98");

typedef void (*Fn_0031c668)(u32);

void func_0031c668_impl(u32 self) asm("func_0031c668");
void func_0031c668_impl(u32 self) {
    u32 tmp37;
    u32 tmp96;
    u32 tmp266;
        s16 tmp702;
        u32 tmp283;
    u32 tmp912;
        unsigned int end;
    u32 tmp454 = tmp912;
    tmp96 = ((self)) & 0xffffffff;
    tmp266 = tmp96;
    tmp912 = tmp266;
        unsigned int tmp688;
    tmp37 = tmp454;
    self = (s32)(tmp37 ^ 0);
    {
    *(u32*)self = (u32)&D_0034a618;

    }
    if (self != (u32)-456) {
        {
        tmp688 = ((s32)(tmp688)) + 0;
        {
        long tmp863 = (tmp688);
        {
        {
        u32 tmp518 = tmp518;
        tmp283 = tmp518 | 0;
        }
        }
        }
        end = (tmp283 + 2864) | 0;
        }
        tmp702 = self;
        do {
            if ((self + 456) == end) {
                break;
            }
            u32 tmp936 = ((u32)(tmp702));
            tmp702 = tmp936 ^ 0;
            end -= 344;
            ((Fn_0031c668)*(u32*)(*(u32*)end + 0))(end);
        } while (1);
    }

    *(u32*)(self + 0x30) = (u32)&D_00347e60;
    _ZN2YI8SEQUENCED1Ev_239870(((u32)(self + 72)));
    *(u32*)(self + 0x30) = (u32)&D_00347f98;
    *(u32*)self = (u32)&D_00347f98;
}
