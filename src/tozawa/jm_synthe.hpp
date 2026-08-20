#pragma once

#include "../common/types.h"

namespace Tz {

class JmSynthe {
public:
    // u8, not u64: the original returns the byte it loaded, unwidened.
    // Declaring u64 makes gcc emit a widening sequence (97.78 %).
    u8 isEnableMaterial(void);
    bool isEnableRecipe(void);
    void CreateList(void);
    void Init(void);
    void Exit(void);
    void FadeOutAll(void);
    void LeaveAll(void);
    void Setup(void);
    void Control(void);
    u64 isEnable(void);
    void ReadMixData(void);
    void GetMixData(void);
};

}  // namespace Tz

