#include "cmenu_selector.hpp"
#include "cmenu_slbase.hpp"
#include "menu_sound.hpp"
#include "../tz/ui_accessors.hpp"

namespace Tz {

extern u32 D_0035f3fc asm("D_0035f3fc");
extern u32 D_0035f3f8 asm("D_0035f3f8");
extern u32 D_0035f40c asm("D_0035f40c");
extern u32 D_0035f124 asm("D_0035f124");
extern u32 D_0035f304 asm("D_0035f304");
extern "C" void func_001396b0(...);
extern "C" void func_0028dac8(...);
u32 MenuCursor::GetPri(s32 index) {
    return *(u32*)(D_0035f40c + (u32)index * 4);
}

dk::Sprite* MenuCursor::GetSprite(s32 index) {
    u32 base = D_0035f3fc;
    return reinterpret_cast<dk::Sprite*>(base + ((u32)index * 408));
}

bool MenuCursor::isInit() { return D_0035f3f8 != 0; }

void MenuCursor::SetParentSeq(s32 index, YI::SEQUENCE* seq) {
    u32 p = D_0035f3fc + (u32)index * 408;
    *(u32*)(p + 400) = (u32)seq;
        func_001396b0(p);
        if (*(u32*)(p + 400) != 0) {
            *(u32*)(p + 396) = 0;
            func_001396b0(p);
            if (*(u32*)(p + 396) != 0) {
                MenuCursor::SetFlag(p, 0);
            }
        }
}

u32 Selector::SelExit() { return SelExitImpl(); }

void Selector::SetState(s32 v) { D_0035f304 = (u32)v; }

u32 Selector::GetState() { return D_0035f304; }

void Selector::SetHelpGraMsg(u32 a0, s32 v) {
    reinterpret_cast<HelpGraLayout*>(a0)->pri = v;
}

void Selector::SetupHelpGra() {
    u32 a;
    u32 b;
    GetHelpGraPos((u32)&a, (u32)&b);
    SetHelpGraMsg(D_0035f124, 30027);
    CreateHelpGra(D_0035f124, a, b, 0);
    MenuBase::NextModeToMode(1, 0);
    SetState(1);
}

void Selector::Control(TASK*) {
    u32 s0 = MenuCursor::GetInputState(0);
    u32 v = GetState();
    if (v == 2) {
        if (HelpGraDone(D_0035f124) == 0) {
            MenuBase::NextModeToMode(0, 0);
            SetState(1);
        }
        return;
    }
    u64 f = *(u64*)(s0 + 8);
    if ((f & 0xC) == 0) {
        return;
    }
    MenuSound::PlaySE(9, true);
    func_0028dac8(D_0035f124, 1);
    SetState(2);
}

void Selector::PauseThread(TASK* task) {
    u32 s0 = (u32)task;
    PauseTaskSetup(s0);
    TaskYield(s0, 1);
    PauseTaskBegin();
    while (1) {
        if (PauseTaskIsDone(s0) != 0) {
            return;
        }
        PauseTaskUpdate();
        TaskYield(s0, 0);
    }
}

}  // namespace Tz

// ---- 0x0028cf28 _ZN2Tz10MenuCursor9SetParentEiPN2dk6SpriteE ----
#include "../common/types.h"

extern "C" u32 DoubleSuicideOn_1396b0(void* self) asm("_ZN2Tz6Select10BeginLeaveEz");
extern "C" u32 is_disable_change_side_31a260(void* self, int flag) asm("_ZN2Tz6Select7SetFlagEz");

extern "C" u32 D_0035f3fc asm("D_0035f3fc");

namespace dk { class Sprite; }

namespace Tz {


void MenuCursor::SetParent(s32 index, dk::Sprite* spr) {
    u32 p = D_0035f3fc + (u32)index * 408;
    *(u32*)(p + 396) = (u32)spr;
    DoubleSuicideOn_1396b0((void*)p);
    if (*(u32*)(p + 396) != 0) {
        *(u32*)(p + 400) = 0;
        DoubleSuicideOn_1396b0((void*)p);
        if (*(u32*)(p + 400) != 0) {
            is_disable_change_side_31a260((void*)p, 0);
        }
    }
}
}  // namespace Tz
