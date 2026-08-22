// coverage: addr=0x0029daa0 symbol=func_0029daa0 size=256 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:82.16;ghidra:near:79.19
#include "common/types.h"

extern "C" u32 D_0035f200 asm("D_0035f200");
extern "C" u32 D_0035f5b0 asm("D_0035f5b0");
extern "C" u32 func_00139570(u32) asm("func_00139570");
extern "C" u32 func_00139580(u32) asm("func_00139580");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_0028afa8(u32) asm("func_0028afa8");
extern "C" u32 func_0028b040(u32) asm("func_0028b040");

// 0x0029daa0 func_0029daa0
void func_0029daa0() asm("func_0029daa0");
void func_0029daa0() {
    u32 s2;
    u32 v0;
    if (((s32)(func_00139d78(*(u32*)(&D_0035f5b0) + 0x17d8)) != 0)) {
        if (((s32)(func_00139d78(*(u32*)(&D_0035f5b0) + 0x1970)) != 0)) {
            s2 = func_0028b040(*(u32*)(&D_0035f200));
            v0 = func_0028afa8(*(u32*)(&D_0035f200));
            if (((s32)(((s32)(v0) < (s32)(2))) != 0)) {
                func_00139570(*(u32*)(&D_0035f5b0) + 0x17d8);
                func_00139570(*(u32*)(&D_0035f5b0) + 0x1970);
                return;
            } else {
                if (((s32)(s2) == 0)) {
                    func_00139570(*(u32*)(&D_0035f5b0) + 0x17d8);
                    func_00139580(*(u32*)(&D_0035f5b0) + 0x1970);
                    return;
                } else {
                    if (((s32)(((s32)(s2) < (s32)((v0 + -1)))) == 0)) {
                        func_00139580(*(u32*)(&D_0035f5b0) + 0x17d8);
                        func_00139570(*(u32*)(&D_0035f5b0) + 0x1970);
                        return;
                    } else {
                        func_00139580(*(u32*)(&D_0035f5b0) + 0x17d8);
                        func_00139580(*(u32*)(&D_0035f5b0) + 0x1970);
                        return;
                    }
                }
            }
        } else {
            return;
        }
    } else {
        return;
    }
}
