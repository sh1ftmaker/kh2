#include "smenu_lm.hpp"

namespace Tz {

extern u32 D_0035ee30 asm("D_0035ee30");
extern "C" void func_002430d8(u32);
extern "C" void func_00102448(u32, u32);
extern "C" void func_0024f710();
extern "C" void func_00242678(u32);
extern "C" void func_00236d60();
extern "C" u32 func_0024ff08();
extern "C" void func_00250328();

void LMMU::PauseThread(TASK* a0) {
    u32 s0 = (u32)a0;
    func_002430d8(D_0035ee30);
    func_00102448(s0, 1);
    func_0024f710();
    func_00242678(12022);
    while (1) {
        func_00236d60();
        if (func_0024ff08() != 0) {
            return;
        }
        func_00250328();
        func_00102448(s0, 0);
    }
}

}  // namespace Tz

// ---- 0x00250748 _ZN2Tz4LMMU7CtrlSelEv ----
#include "../common/types.h"

extern "C" u32 GetCurrent_2891e8(void* self) asm("_ZN2Tz6Select10GetCurrentEv");
extern "C" u32 Check_1a6d08(int) asm("_ZN2YS8MENUFLAG5CheckEi");
extern "C" u32 Set_1a6c90(int) asm("func_001a6c90");

extern "C" u32 D_0035ee34 asm("D_0035ee34");
extern "C" u32 D_00372438 asm("D_00372438");

namespace Tz {


void LMMU::CtrlSel() {
    u32 cur = GetCurrent_2891e8((void*)D_0035ee34);
    u8 flag = *(u8*)((u32)cur + (u32)&D_00372438);
    if (Check_1a6d08(flag) == 0) {
        Set_1a6c90(flag);
    }
}
}  // namespace Tz
