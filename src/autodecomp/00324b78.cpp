// coverage: addr=0x00324b78 symbol=_ZN8worldmap9ObjWidgetD0Ev size=52 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:exact:100.0;m2c:exact:100.0;ghidra:near:55.33
#include "common/types.h"

extern "C" u32 D_00361bf0 asm("D_00361bf0");
extern "C" u32 func_00105110(u32) asm("func_00105110");
extern "C" void func_002eec58(u32) asm("func_002eec58");

// 0x00324b78 worldmap::ObjWidget::~ObjWidget()
u32 lift_00324b78(u32 a0) asm("_ZN8worldmap9ObjWidgetD0Ev");
u32 lift_00324b78(u32 a0) {
    *(u32*)(a0) = (u32)&D_00361bf0;
    func_002eec58(a0);
    return func_00105110(a0);
}
