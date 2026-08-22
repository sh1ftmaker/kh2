#include "../common/types.h"

// ---- callees, copied/adjusted from skeleton + verified arities ----
extern "C" u32 D_0034e8a8 asm("D_0034e8a8");
extern "C" u32 D_00350a38 asm("D_00350a38");
extern "C" u32 D_00350bb0 asm("D_00350bb0");

// YS::WINDOW::WINDOW(YS::FONT::TYPE, int, int, int, int, int) -- arity VERIFIED (6),
// + implicit self since it's a non-static ctor and a0 carries an object at the call site
extern "C" u32 WINDOW_1ac378(u32 self, u32 type, u32 style, u32 message_id, u32 priority, u32 x, u32 y) asm("func_001ac378");
extern "C" u32 func_002395b8_2395b8(u32 self) asm("func_002395b8");
extern "C" u32 func_001abd90_1abd90(u32 self) asm("func_001abd90");
extern "C" u32 func_001ac028_1ac028(u32 self) asm("func_001ac028");
// YI::SEQUENCE::SEQUENCE() -- arity VERIFIED (0) + implicit self
extern "C" void SEQUENCE_239700(u32 self) asm("_ZN2YI8SEQUENCEC1Ev");
extern "C" u32 func_001ab810_1ab810() asm("func_001ab810");
// YS::FONT::GetImage() -- arity VERIFIED (0)
extern "C" u32 GetImage_1ab800() asm("_ZN2YS4FONT8GetImageEv");
// YI::SEQUENCE::Init(void*, YI::IMAGE*) -- arity VERIFIED (2) + implicit self
extern "C" void Init_239988(u32 self, u32 seq, u32 image) asm("func_00239988");
// YI::SEQUENCE::SetNumber(int) -- placeholder mangled symbol from the registry;
// call site only sets a0,a1 -> (self, value)
extern "C" void SetNumber_239bf8(u32 self, u32 value) asm("_Z16wtarget_00239bf8jjjj");
// tail call: j 0x1aa668 with a0=self+0xc, a1=self
extern "C" u32 func_001aa668_1aa668(u32 self, u32 window) asm("func_001aa668");

// func_001aca98 is a registry stub -- define exactly this symbol.
// original name (E3 debug build): YS::WINDOW_BASE::WINDOW_BASE(YS::FONT::TYPE, int, int, int, int, int, int)
u32 func_001aca98_impl(u32 self, u32 type, u32 style, u32 message_id, u32 priority, u32 x, u32 y, u32 base_type) asm("func_001aca98");
u32 func_001aca98_impl(u32 self, u32 type, u32 style, u32 message_id, u32 priority, u32 x, u32 y, u32 base_type) {
    u32 s3;
    u32 s4;
    u32 s5;
    u32 s0;
    u32 s3_0;
    u32 s0_1;
    u32 s1_2;

    WINDOW_1ac378(self, type, style, message_id, priority, x, y);
    *(u32*)(self) = (u32)&D_00350bb0;
    func_002395b8_2395b8(self + 0x84);
    *(u32*)(self + 0x84) = (u32)&D_0034e8a8;
    *(u32*)(self + 0x1dc) = base_type;   // self->BaseType
    func_001abd90_1abd90(self + 0x1e0);
    *(u32*)(self + 0x4a8) = 0;   // self->Child
    func_001ac028_1ac028(self + 0x4ac);
    s3 = 3;
    s4 = self + 0x84;
    s5 = 0xffffffff;
    do {
        SEQUENCE_239700((self + ((s3 - 3) * -0x158)) + 0x608);
        s3 = (s3 + -1);
    } while (s3 != s5);
    *(u32*)(self + 0xb68) = 0;   // self->AnimePt
    s1_2 = self + 0x608;
    s0 = func_001ab810_1ab810();
    Init_239988(s4, s0, GetImage_1ab800());
    SetNumber_239bf8(s4, *(u8*)((((*(u32*)(self + 0x1dc) << 1) + *(u32*)(self + 0x1dc)) + (u32)&D_00350a38)));   // self->BaseType
    s3_0 = 3;
    do {
        s0_1 = func_001ab810_1ab810();
        Init_239988(s1_2, s0_1, GetImage_1ab800());
        s1_2 = s1_2 + 0x158;
        s3_0 = (s3_0 + -1);
    } while ((s32)(s3_0) >= 0);
    return func_001aa668_1aa668(self + 0xc, self);
}
