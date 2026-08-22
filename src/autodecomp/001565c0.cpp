// coverage: addr=0x001565c0 symbol=func_001565c0 size=704 class=branchy source=permute status=exact fuzzy=100.0
// coverage-alternatives: lift:near:99.83;ghidra:near:97.65;m2c:near:60.1
#include "common/types.h"

extern "C" u32 func_00139598(u32) asm("func_00139598");
extern "C" u32 func_0014b200(u32, u32) asm("func_0014b200");
extern "C" void func_00139d78(u32) asm("func_00139d78");
extern "C" void func_0013e0f8(u32, u32, u32, u32) asm("func_0013e0f8");
extern "C" void func_00158050(u32, u32, u32, u32, u32, u32, u32) asm("func_00158050");

// 0x001565c0 func_001565c0
u32 func_001565c0(u32 a0, u32 a1, u32 a2, u32 a3) asm("func_001565c0");
u32 func_001565c0(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 loc_0;
    u32 loc_4;
    u32 loc_8;
    u32 loc_c;
    u32 loc_10;
    u32 v0;
    func_0013e0f8(a0 + 0x3600, 0x1b58, 1, a3);
    loc_0 = (a0 + 0x1bcc);
    func_00158050(loc_0, 0x1b58, a1, a2, 0x79, 0x64, a3);
    loc_4 = (a0 + 0x1d68);
    func_0013e0f8(a0 + 0x3850, 0x1b58, 1, a3);
    loc_8 = (a0 + 0x1f04);
    func_00158050(loc_4, 0x1b58, a1, a2, 0x79, 0x1f4, a3);
    func_0013e0f8(a0 + 0x3aa0, 0x1b58, 1, a3);
    loc_10 = (a0 + 0x223c);
    func_00158050(loc_8, 0x1b58, a1, a2, 0x80, 0x3e8, a3);
    loc_c = (a0 + 0x20a0);
    func_00158050(loc_c, 0x1b58, a1, a2, 0x7c, 0, a3);
    func_00158050(loc_10, 0x1b58, a1, a2, 0x7f, 0, a3);
    func_00158050(a0 + 0x23d8, 0x1b58, a1, a2, 0x81, 0, a3);
    func_00158050(a0 + 0x2574, 0x1b58, a1, a2, 0x7b, 0, a3);
    func_00139d78(a0 + 0x3600);
    func_0014b200(a0 + 0x3620, 0xc8);
    func_0014b200(a0 + 0x3740, 0xc8);
    func_00139d78(a0 + 0x3850);
    func_0014b200(a0 + 0x3870, 0x258);
    func_0014b200(a0 + 0x3990, 0x258);
    func_00139d78(a0 + 0x3aa0);
    func_0014b200(a0 + 0x3ac0, 0x7d0);
    v0 = func_0014b200(a0 + 0x3be0, 0x7d0);
    if (((s32)(*(u32*)((a0 + 0x34))) != 0)) {
        if (((s32)((*(u32*)((*(u32*)((*(u32*)((a0 + 0x34)) + 0x48c)) + 0x250)) & 2)) != 0)) {
            func_00139598(a0 + 0x33b0);
            func_00139598(a0 + 0x3600);
            func_00139598(loc_0);
            func_00139598(a0 + 0x3850);
            func_00139598(loc_4);
            func_00139598(a0 + 0x3aa0);
            func_00139598(loc_8);
            func_00139598(loc_c);
            func_00139598(loc_10);
            func_00139598(a0 + 0x23d8);
            return func_00139598(a0 + 0x2574);
        } else {
            return v0;
        }
    } else {
        return v0;
    }
}
