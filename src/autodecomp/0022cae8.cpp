// coverage: addr=0x0022cae8 symbol=func_0022cae8 size=180 class=branchy source=typed status=exact fuzzy=100.0
// coverage-alternatives: lift:exact:100.0;m2c:exact:100.0;e3:near:85.35;ghidra:near:74.71
#include "common/types.h"
typedef float f32; typedef double f64;
struct sa_BIN_VIB_DATA;

struct sa_BIN_VIB_DATA {  // structure sa::BIN_VIB_DATA size=0xa
    u16 my_size;                                       // +0x0
    s16 id;                                            // +0x2
    s16 start_frame;                                   // +0x4
    s16 dummy;                                         // +0x6
    s8 data[2];                                        // +0x8
};

extern "C" u32 D_0022cba0 asm("D_0022cba0");
extern "C" u32 D_0022cc08 asm("D_0022cc08");
extern "C" u32 func_00102c18(u32, u32, u32) asm("func_00102c18");
extern "C" u32 func_001050c8() asm("func_001050c8");
extern "C" u32 func_001063c0(u32, u32) asm("func_001063c0");
extern "C" u32 func_00225b00(u32) asm("func_00225b00");
extern "C" u32 func_002282d8() asm("func_002282d8");
extern "C" u32 func_002282f0(u32) asm("func_002282f0");
extern "C" u32 func_0023cde8(u32) asm("func_0023cde8");
extern "C" void func_0023cd68(u32) asm("func_0023cd68");

// 0x0022cae8 func_0022cae8
void func_0022cae8(u32 a0) asm("func_0022cae8");
void func_0022cae8(u32 a0) {
    u32 v0;
    u32 v0_0;
    if (((s32)(func_002282f0(*(s16*)&(((sa_BIN_VIB_DATA*)a0)->start_frame))) == 0)) {
        if (((s32)(func_00225b00(*(s16*)&(((sa_BIN_VIB_DATA*)a0)->start_frame))) == 0)) {
            v0 = func_00102c18(1, func_002282d8(), (u32)&D_0022cba0);
            *(u32*)((v0 + 0x30)) = (u32)&D_0022cc08;
            v0_0 = func_001063c0(4, func_001050c8());
            func_0023cd68(v0_0);
            *(u32*)((v0 + 8)) = v0_0;
            func_0023cde8(a0 + 8);
            return;
        } else {
            return;
        }
    } else {
        return;
    }
}
