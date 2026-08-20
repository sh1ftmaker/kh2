#include "sebank.hpp"

void SE_BANK::setGumiMode() {
    *(u32*)((u32)this + (s32)(324)) = 1u;
    *(u8*)((u32)this + (s32)(336)) = (u8)0u;
}

// ---- 0x002bcee8 _ZN7SE_BANK9clearGumiEv ----
#include "../common/types.h"

extern "C" u32 destroySeBank_2bc470(int) asm("func_002bc470");  // SOUND::destroySeBank(int)
extern "C" u32 D_00361768 asm("D_00361768");



struct SE_BANKLayout {
    u32 m_bankBuff[0x1a]; // 0x00
};

/* SE_BANK::clearGumi() */
int SE_BANK::clearGumi() {
    SE_BANKLayout* self = (SE_BANKLayout*)this;
    u32* p = (u32*)&D_00361768;
    s32 i = 26;
    do {
        u32 v = *p;
        i -= 1;
        self->m_bankBuff[0] = v;
        self->m_bankBuff[1] = -1;
        self->m_bankBuff[2] = 0;
        destroySeBank_2bc470(*p);
        p = (u32*)((u8*)p + 4);
        self = (SE_BANKLayout*)((u8*)self + 12);
    } while (i >= 0);
}
