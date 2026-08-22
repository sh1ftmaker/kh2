// coverage: addr=0x00109360 symbol=func_00109360 size=104 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:79.0;ghidra:near:68.52
#include "common/types.h"

struct S8_4_u32 { u8 _p[4]; u32 m; };
extern "C" u32 D_00340eac asm("D_00340eac");
extern "C" u32 D_003a8ea0 asm("D_003a8ea0");
extern "C" void func_00133c78(u32, u32, u32, u32, u32) asm("func_00133c78");

// 0x00109360 func_00109360
void func_00109360(u32 a0, u32 a1) asm("func_00109360");
void func_00109360(u32 a0, u32 a1) {
    if ((*(u32*)(&D_00340eac) != a1)) {
        if ((*(u32*)(((a1 << 3) + (u32)&D_003a8ea0)) != 0)) {
            if (((s32)(((S8_4_u32*)&D_003a8ea0)[a1].m) != 0)) {
                func_00133c78(a0, *(u32*)(((a1 << 3) + (u32)&D_003a8ea0)), ((S8_4_u32*)&D_003a8ea0)[a1].m, 0, 0);
            }
        }
        *(u32*)(&D_00340eac) = a1;
    }
    return;
}
