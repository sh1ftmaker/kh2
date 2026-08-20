#include "prizebox.hpp"

// ---- 0x001bfbd8 _ZN2YS8PRIZEBOX4ReadEv ----
#include "../../common/types.h"

extern "C" u32 ReadRequest_16ed50(unsigned int, int, int) asm("_ZN2YS8OBJENTRY11ReadRequestEjii");

namespace YS {


void PRIZEBOX::Read() {
    ReadRequest_16ed50(952, -1, 30);
    ReadRequest_16ed50(953, -1, 30);
    ReadRequest_16ed50(954, -1, 30);
    ReadRequest_16ed50(955, -1, 30);
}
}  // namespace YS
