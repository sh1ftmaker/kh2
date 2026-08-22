// coverage: addr=0x00159c20 symbol=func_00159c20 size=52 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:near:99.85;m2c:near:84.54;ghidra:near:75.31
#include "common/types.h"

extern "C" u32 _ZN2dk10TalkCamera10ensureTaskEP4TASK asm("_ZN2dk10TalkCamera10ensureTaskEP4TASK");
extern "C" u32 func_00162058(f32) asm("func_00162058");
extern "C" void func_00102c18(u32, u32, u32) asm("func_00102c18");

// 0x00159c20 func_00159c20
// minilink-rodata 0x0036b370   (float literals live here in the original)
u32 func_00159c20() asm("func_00159c20");
u32 func_00159c20() {
    func_00102c18(1, 0x6586, (u32)&_ZN2dk10TalkCamera10ensureTaskEP4TASK);
    return func_00162058(8.0f);
}
