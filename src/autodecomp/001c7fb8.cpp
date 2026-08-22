// coverage: addr=0x001c7fb8 symbol=_ZN2YS6SUMMONC1EPKNS_8OBJENTRYERKN2kn7FVectorEf size=168 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:70.61;m2c:near:67.05
#include "common/types.h"

extern "C" u32 D_00351e18 asm("D_00351e18");
extern "C" u32 D_01d49960 asm("D_01d49960");
extern "C" u32 func_0010c7f0(u32) asm("func_0010c7f0");
extern "C" void func_0010b978(u32) asm("func_0010b978");
extern "C" void func_001e02a0(u32, u32) asm("func_001e02a0");

// 0x001c7fb8 YS::SUMMON::SUMMON(YS::OBJENTRY const*, kn::FVector const&, float)
u32 lift_001c7fb8(u32 a0) asm("_ZN2YS6SUMMONC1EPKNS_8OBJENTRYERKN2kn7FVectorEf");
u32 lift_001c7fb8(u32 a0) {
    u32 t3;
    u32 t4;
    u32 t5;
    func_0010b978(a0);
    *(u32*)(a0) = (u32)&D_00351e18;
    *(u32*)((a0 + 0x588)) = (*(u32*)((a0 + 0x588)) | 0x400000);
    *(u32*)((a0 + 0x768)) = (*(u32*)((a0 + 0x768)) & 0xffffffef);
    t3 = 0;
    t4 = (u32)&D_01d49960;
    t5 = (u32)&D_01d49960;
    do {
        if (((s32)(*(u32*)((t5 + (t3 * 4)))) == 0)) {
            *(u32*)((t4 + (t3 * 4))) = a0;
            break;
        }
        t3 = (t3 + 1);
    } while (((s32)(((s32)(t3) < (s32)(2))) != 0));
    if (((s32)(t3) > 0)) {
        func_001e02a0(a0 + 0x80, *(u32*)(&D_01d49960) + 0x80);
    }
    *(u32*)((a0 + 0x98)) = 1;
    return func_0010c7f0(a0);
}
