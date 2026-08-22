#include "ca_ship.hpp"

// ---- 0x001d5198 func_001d5198 ----
#include "../../common/types.h"

extern "C" u32 Get_1ba158() asm("_ZN2YS9WORLDWORK3GetEv");  // YS::WORLDWORK::Get()
extern "C" u32 SetFlag_181178(int) asm("_ZN2YS8PROGRESS7SetFlagEi");  // YS::PROGRESS::SetFlag(int)

extern "C" u32 D_0036e538 asm("D_0036e538");

void func_001d5198_impl(const void* area) asm("_ZN2YS7CA_SHIP10ArriveAreaERK4AREA");  // declaration
void func_001d5198_impl(const void* area) {  // definition
    if (((const u8*)area)[0] == 16) {
        u32 w = Get_1ba158();
        u8 a = ((const u8*)area)[1];
        u32* p = &D_0036e538;
        u32 i = 0;
        while (i < 4) {
            if (((const u8*)p)[0] == a) {
                ((u32*)w)[0] = ((const u8*)p)[1];
                SetFlag_181178(((const u16*)p)[1]);
                return;
            }
            i++;
            p++;
        }
    }
}
