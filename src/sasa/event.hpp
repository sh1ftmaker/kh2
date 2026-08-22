#pragma once

#include "../common/types.h"

namespace YS {
class OBJ;
}

namespace sa {
class BIN_CAMERA_DATA_WK;
class OBJ_DEFAULT_CAMERA_DATA;
}

namespace sa {

class EVENT {
public:
    static u32 isLK();
    static u32 isLM();
    static u32 isSceneEventExec();
    static void wide_on();
    static void readWaitInit();
    void setActorParam(YS::OBJ*);
    void leaveAllEffect();
    static void calcValue_objDefault(sa::BIN_CAMERA_DATA_WK&, sa::OBJ_DEFAULT_CAMERA_DATA&, float);
};

}  // namespace sa

