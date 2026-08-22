// coverage: addr=0x002a3aa8 symbol=_ZN2Tz10JmTreasure13UpdateNewMarkEv size=256 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:81.73;ghidra:near:71.33;e3:near:45.13
#include "common/types.h"

extern "C" u32 D_0035f5e4 asm("D_0035f5e4");
extern "C" u32 func_002a3318() asm("func_002a3318");
extern "C" u32 func_002a43f0() asm("func_002a43f0");
extern "C" u32 func_002a4430() asm("func_002a4430");
extern "C" u32 func_002a4990(u32) asm("_ZN2Tz10JmTreasure11Cur2WorldIdEi");
extern "C" void func_002ab728(u32) asm("func_002ab728");
extern "C" void func_002abac8(u32) asm("func_002abac8");
extern "C" void func_002ac8e0(u32) asm("func_002ac8e0");

// 0x002a3aa8 Tz::JmTreasure::UpdateNewMark()
u32 lift_002a3aa8() asm("_ZN2Tz10JmTreasure13UpdateNewMarkEv");
u32 lift_002a3aa8() {
    u32 s0;
    u32 s1;
    u32 t7;
    u32 t7_0;
    u32 s1_1;
    u32 t7_2;
    u32 t7_3;
    u32 s1_4;
    u32 t7_5;
    u32 t7_6;
    s0 = func_002a4990(0xffffffff);
    if (((s32)(func_002a4430()) != 0)) {
        s1 = (s0 << 3);
        t7 = (s1 + *(u32*)(&D_0035f5e4));
        t7_0 = (t7 + 0x1000);
        if ((*(u8*)((t7_0 + 2)) != 0)) {
            if ((*(u8*)((t7_0 + 3)) == 0)) {
                func_002ac8e0(s0);
                *(u8*)(((s1 + *(u32*)(&D_0035f5e4)) + 0x1003)) = 1;
            }
        }
    } else {
        if (((s32)(func_002a43f0()) != 0)) {
            s1_1 = (s0 << 3);
            t7_2 = (s1_1 + *(u32*)(&D_0035f5e4));
            t7_3 = (t7_2 + 0x1000);
            if ((*(u8*)((t7_3 + 2)) != 0)) {
                if ((*(u8*)((t7_3 + 3)) == 0)) {
                    func_002ab728(s0);
                    *(u8*)(((s1_1 + *(u32*)(&D_0035f5e4)) + 0x1003)) = 1;
                }
            }
        } else {
            s1_4 = (s0 << 3);
            t7_5 = (s1_4 + *(u32*)(&D_0035f5e4));
            t7_6 = (t7_5 + 0x1000);
            if ((*(u8*)((t7_6 + 2)) != 0)) {
                if ((*(u8*)((t7_6 + 3)) == 0)) {
                    func_002abac8(s0);
                    *(u8*)(((s1_4 + *(u32*)(&D_0035f5e4)) + 0x1003)) = 1;
                }
            }
        }
    }
    return func_002a3318();
}
