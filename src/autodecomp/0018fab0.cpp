// coverage: addr=0x0018fab0 symbol=func_0018fab0 size=136 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:99.71;ghidra:near:99.41;e3:near:36.52
#include "common/types.h"

extern "C" u32 func_0018ca10(u32) asm("func_0018ca10");
extern "C" u32 func_0018db38(u32, u32, u32, u32) asm("func_0018db38");
extern "C" void func_001ba028(u32) asm("func_001ba028");

// 0x0018fab0 func_0018fab0
u32 func_0018fab0(u32 a0) asm("func_0018fab0");
u32 func_0018fab0(u32 a0) {
    u32 s1;
    u32 v0;
    func_001ba028(*(u32*)((*(u32*)((a0 + 4)) + 4)));
    s1 = *(u32*)((*(u32*)((a0 + 4)) + 4));
    v0 = func_0018db38(*(u32*)(a0), *(u32*)((*(u32*)((a0 + 4)) + 4)), *(u32*)((a0 + 8)), *(u32*)((a0 + 0xc)));
    if (((s32)(v0) != 0)) {
        ((void(*)(u32, u32))(*(u32*)((*(u32*)(s1) + 0x64))))(s1, v0);
        return func_0018ca10(v0);
    } else {
        return v0;
    }
}
