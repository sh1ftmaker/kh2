#include "../common/types.h"

extern "C" u32 is_active_1dc9e0(void* self) asm("_ZN3ryj6EFFECT9is_activeEv");
extern "C" u32 exec_1dfa38(void* self) asm("_ZN3ryj3PAX7MANAGER4execEv");
extern "C" u32 D_00352b58 asm("D_00352b58");

void func_001de590_impl(void* task) asm("func_001de590");
void func_001de590_impl(void* task) {
    u32 p = *(u32*)((u8*)task + 12);
    if (p == 0) {
        return;
    }
    do {
        u32 next = *(u32*)(p + 96);
        if (is_active_1dc9e0((void*)*(u32*)(p + 64))) {
            u8 bit = (u8)((*(s32*)(*(u32*)(p + 64) + 8) >> 26) & 1);
            if (!bit) {
                D_00352b58 = p;
                exec_1dfa38((void*)p);
                D_00352b58 = 0;
            }
        }
        p = next;
    } while (p != 0);
}
