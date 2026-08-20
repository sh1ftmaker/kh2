#pragma once

#include "../../common/types.h"

namespace kn {

class AnimationWork;

struct AnimationWorkLayout {
    char _pad0[28];
    AnimationWork* next;
};

    class AnimationWork {
    public:
        s32 getNext() const;
        void setNext(AnimationWork* v);
    virtual void vf00();
    virtual void vf04();
    virtual void vf08();
    virtual void vf0c();
    virtual void vf10();
    virtual void vf14(float);
    };

}  // namespace kn
