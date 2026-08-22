#include "motion_prototype0.hpp"

// ---- 0x001285f8 _ZN2kn16MotionPrototype012getTimeIndexEfRiS1_ ----
#include "../../common/types.h"

// layout row 0x001285f8, 216 bytes
// symbol: _ZN2kn16MotionPrototype012getTimeIndexEfRiS1_
// kn::MotionPrototype0::getTimeIndex(float, int&, int&)
//
// Hypothesis (attempt_001): binary search over a time-keyed keyframe table
// reached through this+4 (a raw pointer, "mtn"), with key count at mtn+0x20
// and a byte offset (added to mtn itself) to the float time table at
// mtn+0x44. Every read of mtn->num is written as a fresh field access (not
// cached in a local), matching the disassembly's repeated `lw ...,32(t5)`
// after each store through the before/after references (gcc 3.2 without
// -fstrict-aliasing must reload after a store through an aliasing pointer).

namespace kn {


struct MotionPrototype0Layout {
    u8  pad00[4];
    u32 rawdata_;  // 0x04 -- pointer to raw motion track data
};

// Raw motion track layout; NOT in the DWARF class_layouts dump for
// kn::MotionPrototype0 -- offsets below are inferred from the disassembly
// only (0x00 first keyframe time, 0x20 key count, 0x44 byte offset from
// this pointer to the key/time table). Unknown gaps are explicit padding.
struct MotionPrototype0RAWLayout {
    f32 time0;        // 0x00 -- unverified beyond being a float here
    u8  pad04[0x1c];  // 0x04 -- unknown, unverified
    u32 num;           // 0x20 -- unverified beyond being a u32 count here
    u8  pad24[0x20];  // 0x24 -- unknown, unverified
    u32 tableOffset;   // 0x44 -- unverified beyond being a u32 offset here
};

void MotionPrototype0::getTimeIndex(float time, int& before, int& after) {
    MotionPrototype0RAWLayout* mtn = reinterpret_cast<MotionPrototype0RAWLayout*>(
        reinterpret_cast<MotionPrototype0Layout*>(this)->rawdata_);
    f32* timeTbl = reinterpret_cast<f32*>(reinterpret_cast<u8*>(mtn) + mtn->tableOffset);

    if (timeTbl[mtn->num - 1] <= time) {
        before = mtn->num - 1;
        after = mtn->num;
        return;
    }
    if (time <= timeTbl[0]) {
        before = -1;
        after = 0;
        return;
    }
    before = 0;
    after = mtn->num - 1;
    while (after - before > 1) {
        int mid = (before + after) / 2;
        if (time < timeTbl[mid]) {
            after = mid;
        } else if (timeTbl[mid] < time) {
            before = mid;
        } else {
            after = mid;
            before = mid;
            return;
        }
    }
}
}  // namespace kn
