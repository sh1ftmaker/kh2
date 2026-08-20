#include "../common/types.h"

extern "C" u32 is_no_motion_180cd0(void* self) asm("_ZN2YS6MOTION12is_no_motionEv");
extern "C" u32 is_exist_1805a8(void* self, int) asm("_ZN2YS6MOTION8is_existEi");
extern "C" u32 start_17f488(void* self, int, f32, f32) asm("_Z13func_0017f488iiff");
extern "C" void func_00169f98_169f98(void* self) asm("func_00169f98");

void func_00198450_impl(void* self) asm("func_00198450");
void func_00198450_impl(void* self) {
    void* m = (u8*)self + 320;
    if (is_no_motion_180cd0(m)) {
        if (is_exist_1805a8(m, 0)) {
            start_17f488(m, 0, 0.0f, 0.0f);
        }
    }
    func_00169f98_169f98(self);
}
