// coverage: addr=0x0024f1a0 symbol=func_0024f1a0 size=160 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:88.29;ghidra:near:0.0
#include "common/types.h"

struct S6_2_s16 { u8 _p[2]; s16 m; u8 _q[2]; };
extern "C" u32 D_0035ee10 asm("D_0035ee10");
extern "C" u32 D_0035ee2c asm("D_0035ee2c");
extern "C" u32 D_00372390 asm("D_00372390");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_0024f2b8(u32) asm("func_0024f2b8");
extern "C" void func_00138c10(u32, u32) asm("func_00138c10");

// 0x0024f1a0 func_0024f1a0
void func_0024f1a0() asm("func_0024f1a0");
void func_0024f1a0() {
    u32 v0;
    if (((s32)(*(u32*)(&D_0035ee2c)) >= 0)) {
        if (((s32)(*(u32*)(&D_0035ee10)) != 0)) {
            if (((s32)(func_00139d78(*(u32*)(&D_0035ee10))) != 0)) {
                v0 = func_0024f2b8(*(u32*)(&D_0035ee2c));
                if ((*(u32*)((*(u32*)(&D_0035ee10) + 0x184)) != ((S6_2_s16*)&D_00372390)[v0].m)) {
                    *(u32*)(&D_0035ee2c) = 0xffffffff;
                    func_00138c10(*(u32*)(&D_0035ee10), ((S6_2_s16*)&D_00372390)[v0].m);
                    *(u32*)((*(u32*)(&D_0035ee10) + 0x188)) = 0xffffffff;
                }
            }
        }
    }
    return;
}
