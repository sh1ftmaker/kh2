// coverage: addr=0x00140ce8 symbol=_ZN2dk9ObjCamera10createTaskEv size=76 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:exact:100.0;m2c:exact:100.0;ghidra:near:93.05
#include "common/types.h"

extern "C" u32 D_00348710 asm("D_00348710");
extern "C" u32 _ZN2dk11camera_taskEP4TASK asm("_ZN2dk11camera_taskEP4TASK");
extern "C" u32 func_00102788(u32, u32, u32, u32) asm("func_00102788");
extern "C" u32 func_00102c80() asm("func_00102c80");
extern "C" void func_001069b8(u32) asm("func_001069b8");
extern "C" void func_0013f558(u32) asm("func_0013f558");
extern "C" void func_0015ce90() asm("func_0015ce90");

// 0x00140ce8 dk::ObjCamera::createTask()
u32 lift_00140ce8() asm("_ZN2dk9ObjCamera10createTaskEv");
u32 lift_00140ce8() {
    func_0015ce90();
    func_001069b8(0);
    func_0013f558((u32)&D_00348710);
    return func_00102788(*(u32*)((func_00102c80() + 4)), 1, 0x6590, (u32)&_ZN2dk11camera_taskEP4TASK);
}
