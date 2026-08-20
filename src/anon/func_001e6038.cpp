#include "../common/types.h"

extern "C" u32 func_001e6000_1e6000(void* self) asm("func_001e6000");

void func_001e6038_impl(void* self) asm("func_001e6038");
void func_001e6038_impl(void* self) {
    func_001e6000_1e6000((void*)((u8*)self + 176));
    func_001e6000_1e6000((void*)((u8*)self + 192));
    func_001e6000_1e6000((void*)((u8*)self + 208));
    func_001e6000_1e6000((void*)((u8*)self + 224));
    func_001e6000_1e6000((void*)((u8*)self + 240));
    func_001e6000_1e6000((void*)((u8*)self + 256));
    func_001e6000_1e6000((void*)((u8*)self + 272));
    func_001e6000_1e6000((void*)((u8*)self + 288));
    func_001e6000_1e6000((void*)((u8*)self + 304));
    u32 r = func_001e6000_1e6000((void*)((u8*)self + 320));
    if (r) {
        r = 0;
    }
}
