#include "../common/types.h"

extern "C" u32 func_001bd370_1bd370(void) asm("func_001bd370");
extern "C" u32 reset_cursor_1bc720(void* self) asm("_ZN2YS12COMMAND_MENU12reset_cursorEv");
extern "C" u32 reactionDecide_1bd3a0(void* self) asm("func_001bd3a0");
extern "C" u32 InitShortcut_1bdf68(void* self) asm("func_001bdf68");
extern "C" u32 InitShortcut_1bdff0(void) asm("func_001bdff0");
extern "C" u32 func_001d6da8_1d6da8(void* self) asm("func_001d6da8");

void func_001bded8_impl(void* self) asm("_ZN2YS13FIELD_COMMAND9init_areaEv");

void func_001bded8_impl(void* self) {
    func_001bd370_1bd370();
    reset_cursor_1bc720((char*)self + 36);
    reset_cursor_1bc720((char*)self + 732);
    *(u32*)((char*)self + 2528) = 0;
    reactionDecide_1bd3a0(self);
    InitShortcut_1bdf68(self);
    InitShortcut_1bdff0();
    func_001d6da8_1d6da8((char*)self + 2642);
    *(u32*)((char*)self + 2728) = 0;
    *(u32*)((char*)self + 2736) = 0;
}
