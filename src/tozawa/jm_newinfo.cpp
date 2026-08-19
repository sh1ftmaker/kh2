#include "jm_newinfo.hpp"

namespace Tz {

extern "C" u32 getSaveRam() asm("_Z10getSaveRamv");

extern "C" void func_00106420(u32);
extern "C" void func_002a9df0(...);
extern "C" void func_002aa220(...);
extern "C" void func_002aa4a8(...);
extern "C" void func_002aa960(...);
extern "C" void func_002aabe8(...);
extern "C" void func_002ab020(...);
extern "C" void func_002ab448(...);
extern "C" void func_002ab818(...);
extern "C" void func_002abba8(...);
extern "C" void func_002abe28(...);
extern "C" void func_002ac2e8(...);
extern u32 D_0035f610 asm("D_0035f610");

void JmNewInfo::Exit() {
    u32 r15 = D_0035f610;
    if (r15 != 0u) {
        func_00106420(r15);
        D_0035f610 = 0u;
    }
}

void JmNewInfo::CheckAll() {
    func_002a9df0();
    func_002aa220();
    func_002aa4a8();
    func_002aa960();
    func_002aabe8();
    func_002ab020();
    func_002ab448();
    func_002ab818();
    func_002abba8();
    func_002abe28();
    func_002ac2e8();
}

u32 JmNewInfo::GetSram() {
    u32 r2 = getSaveRam();
    r2 = (u32)((s32)r2 + 19512);
    return r2;
}

}  // namespace Tz

// ---- 0x002aa048 func_002aa048 ----
extern "C" u32 GetSram_2a9d68() asm("_ZN2Tz9JmNewInfo7GetSramEv");
void func_002aa048(int flg) asm("func_002aa048");
void func_002aa048(int flg) {
    u32* sram = (u32*)GetSram_2a9d68();
    u32 idx = (u32)flg >> 5;
    u32 bit = 1u << ((u32)flg & 0x1f);
    u32 v = sram[idx];
    if ((v & bit) == 0u) {
        sram[idx] = v | bit;
    }
}

// ---- 0x002aab90 func_002aab90 ----
#include "../common/types.h"

extern "C" u32 GetSram_2a9d68() asm("_ZN2Tz9JmNewInfo7GetSramEv");

void func_002aab90_impl(int flg) asm("func_002aab90");
void func_002aab90_impl(int flg) {
    u32* sram = (u32*)(GetSram_2a9d68() + 132);
    u32 idx = (u32)flg >> 5;
    u32 bit = 1u << ((u32)flg & 0x1f);
    u32 v = sram[idx];
    if ((v & bit) == 0u) {
        sram[idx] = v | bit;
    }
}

// ---- 0x002aa450 func_002aa450 ----

// ---- callees, declared by the rig: copy these lines verbatim, never retype a symbol ----
extern "C" u32 GetSram_2a9d68() asm("_ZN2Tz9JmNewInfo7GetSramEv");  // Tz::JmNewInfo::GetSram() -- arity VERIFIED

// func_002aa450 is a registry stub. The DECLARATION below carries the asm label
// that binds the name; the DEFINITION after it must NOT repeat asm(...) (parse error).
void func_002aa450_impl(int flg) asm("func_002aa450");  // declaration
void func_002aa450_impl(int flg) {  // definition: no asm() here
    u32* sram = (u32*)((u32)GetSram_2a9d68() + 316);
    u32 idx = (u32)flg >> 5;
    u32 bit = 1u << ((u32)flg & 0x1f);
    u32 v = sram[idx];
    if ((v & bit) == 0u) {
        sram[idx] = v | bit;
    }
}

// ---- 0x002aae30 func_002aae30 ----

// ---- callees, declared by the rig: copy these lines verbatim, never retype a symbol ----
extern "C" u32 GetSram_2a9d68() asm("_ZN2Tz9JmNewInfo7GetSramEv");  // Tz::JmNewInfo::GetSram() -- arity VERIFIED

// func_002aae30 is a registry stub. The DECLARATION below carries the asm label
// that binds the name; the DEFINITION after it must NOT repeat asm(...) (parse error).
void func_002aae30_impl(int flg) asm("func_002aae30");  // declaration
void func_002aae30_impl(int flg) {  // definition: no asm() here
    u32* sram = (u32*)((u32)GetSram_2a9d68() + 148);
    u32 idx = (u32)flg >> 5;
    u32 bit = 1u << ((u32)flg & 0x1f);
    u32 v = sram[idx];
    if ((v & bit) == 0u) {
        sram[idx] = v | bit;
    }
}

// ---- 0x002ab258 func_002ab258 ----

// ---- callees, declared by the rig: copy these lines verbatim, never retype a symbol ----
extern "C" u32 GetSram_2a9d68() asm("_ZN2Tz9JmNewInfo7GetSramEv");  // Tz::JmNewInfo::GetSram() -- arity VERIFIED

// func_002ab258 is a registry stub. The DECLARATION below carries the asm label
// that binds the name; the DEFINITION after it must NOT repeat asm(...) (parse error).
void func_002ab258_impl(int flg) asm("func_002ab258");  // declaration
void func_002ab258_impl(int flg) {  // definition: no asm() here
    u32* sram = (u32*)((u32)GetSram_2a9d68() + 136);
    u32 idx = (u32)flg >> 5;
    u32 bit = 1u << ((u32)flg & 0x1f);
    u32 v = sram[idx];
    if ((v & bit) == 0u) {
        sram[idx] = v | bit;
    }
}
