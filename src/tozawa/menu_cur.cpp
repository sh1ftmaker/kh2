#include "../common/types.h"


namespace Tz {

} // namespace Tz

// ---- 0x0028ce38 _ZN2Tz10MenuCursor9DeleteAllEz ----

extern "C" u32 Delete_28cdb8(int) asm("func_0028cdb8");  // Tz::MenuCursor::Delete(int)
extern "C" s32 D_0035f404 asm("D_0035f404");
extern "C" u32 D_0035f410 asm("D_0035f410");

void Tz_MenuCursor_DeleteAll() asm("_ZN2Tz10MenuCursor9DeleteAllEz");

void Tz_MenuCursor_DeleteAll() {
    s32 i = 0;
    while (i < D_0035f404) {
        Delete_28cdb8(i);
        i = i + 1;
    }
    D_0035f410 = 0;
}
