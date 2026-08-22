#include "../common/types.h"

extern "C" u32 func_00182f28_182f28(u32 a) asm("func_00182f28");
extern "C" u32 func_00319f88_319f88(u32 a) asm("func_00319f88");
extern "C" u32 clear_19f9a8(u32 a) asm("_ZN2YS10OBJ_ATTACK5clearEv");
extern "C" u32 func_001c0248_1c0248(u32 a) asm("func_001c0248");
extern "C" u32 func_00319fb0_319fb0(u32 a) asm("func_00319fb0");
extern "C" u32 Free_105110(void* a) asm("_ZN4AREA4FreeEPv");

extern "C" u32 D_00362060 asm("D_00362060");
extern "C" u32 D_00362050 asm("D_00362050");
extern "C" u32 D_0034e8b8 asm("D_0034e8b8");
extern "C" u32 D_0034ee08 asm("D_0034ee08");

void func_002d1028_impl(u32 self) asm("_ZN2YS3OBJ6VTABLEIN2Ti8MGPlayerEE7_deleteEPS0_");
void func_002d1028_impl(u32 self) {
    u32 s16 = self;
    *(u32*)s16 = (u32)&D_00362060;
    func_00182f28_182f28(0);

    D_00362050 = 0;

    *(u32*)s16 = (u32)&D_0034e8b8;
    func_00319f88_319f88(s16 + 2824);

    *(u32*)s16 = (u32)&D_0034ee08;
    clear_19f9a8(s16 + 2568);
    func_001c0248_1c0248(s16 + 2640);
    func_00319fb0_319fb0(s16);
    u32 t = s16;
    (void)t;
    Free_105110((void*)s16);
}
