#include "item_stat.hpp"
#include "../harata/libdk/obj2d.hpp"
#include "../harata/libdk/sprite.hpp"

namespace Tz {

extern "C" u32 u_call4_00139d78(u32) asm("_Z16u_call4_00139d78jjjj");
extern "C" void dk_Sprite_setNum_raw(u32, u32) asm("_ZN2dk6Sprite6setNumEi");
extern "C" u32 wtarget_002fde18(u32, u32, u32) asm("_Z16wtarget_002fde18jjjj");

s32 ItemStat::GetFontSeq(s32 idx) { return *(s16*)((u8*)this + 0x2b20 + idx * 2); }

extern "C" void func_00290d68(...);
extern "C" void func_00290f78(...);
extern "C" u32 func_00291380(...);
extern "C" void func_00291510(...);
extern "C" void func_00291ba8(...);

void ItemStat::UpdateNowStat(s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    u32 s19 = (u32)a1;
    u32 s16 = (u32)this;
    u32 s17 = (u32)a2;
    u32 s20 = (u32)a4;
    u32 s21 = (u32)a5;

    func_00290d68(s16, (u32)a3);
    func_00290f78(s16);
    u32 s18 = func_00291380(s16, s17);
    func_00291510(s16, s19, s17, s18);
    func_00291ba8(s16, s19, s17, s20, s21, s18);
}

void* ItemStat::ClearSeq() {
    s32 s4 = (s32)this;
    s32 s1;
    s32 s2;
    s32 s3;
    s32 s0;

    s3 = s4 + 2180;
    s1 = s4;
    s2 = GetFontSeq(0);
    do {
        s0 = s1 + 4;
        if (u_call4_00139d78(s0) != 0) {
            dk_Sprite_setNum_raw(s0, s2);
            *(u32*)(s0 + 408) = 0;
        }
        s0 = s1 + 2184;
        if (u_call4_00139d78(s0) != 0) {
            dk_Sprite_setNum_raw(s0, s2);
            *(u32*)(s0 + 408) = 0;
        }
        s1 += 436;
    } while (s1 < s3);

    s0 = s4 + 4364;
    s1 = 14;
    do {
        if (u_call4_00139d78(s0) != 0) {
            dk_Sprite_setNum_raw(s0, s2);
            *(u32*)(s0 + 408) = 0;
        }
        s1 -= 1;
        s0 += 436;
    } while ((s32)s1 >= 0);

    return (void*)wtarget_002fde18(s4 + 10904, 0, 120);
}

void ItemStat::Clear() { static_cast<void>(ClearSeq()); }
}  // namespace Tz

// ---- 0x00269ef8 func_00269ef8 ----
#include "../common/types.h"

// ---- callees, declared by the rig: copy these lines verbatim, never retype a symbol ----
extern "C" u32 func_002579e0_2579e0(/* args: arity UNKNOWN -- read the call site */) asm("func_002579e0");  // arity UNKNOWN
extern "C" u32 isExist_28be58(u32 a) asm("_ZN2Tz16LeadDataIsActiveEj");  // Tz::ScrollBar::isExist() -- arity VERIFIED
extern "C" u32 Leave_28be18(void* self) asm("_ZN2Tz9ScrollBar5LeaveEv");  // Tz::ScrollBar::Leave() -- arity VERIFIED
extern "C" u32 isExist_28acc8(void* self) asm("_ZN2Tz6Select9isCreatedEz");  // Tz::Select::isExist() -- arity VERIFIED
extern "C" u32 Leave_28abe0(void* self) asm("_ZN2Tz6Select7DestroyEz");  // Tz::Select::Leave() -- arity VERIFIED

// globals
extern "C" u32 D_0035f01c asm("D_0035f01c");
extern "C" u32 D_0035f04c asm("D_0035f04c");

// layout row 0x00269ef8, 96 bytes
// the definition MUST produce the symbol: func_00269ef8  (source: registry)
// original name (E3 debug build): Tz::ItemStat::Leave()

void func_00269ef8_impl(void) asm("func_00269ef8");  // declaration
void func_00269ef8_impl(void) {  // definition: no asm() here
    func_002579e0_2579e0();

    if (isExist_28be58(D_0035f04c) != 0) {
        Leave_28be18((void*)D_0035f04c);
    }

    if (isExist_28acc8((void*)D_0035f01c) != 0) {
        Leave_28abe0((void*)D_0035f01c);
    }
}
