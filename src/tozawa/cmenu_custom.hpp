#pragma once

#include "../common/types.h"

namespace Tz {

class CmCustom {
public:
    static u32 GetItemTbl(s32);
    static void LeaveAll();
    int Command2Item(int);
};

}  // namespace Tz

