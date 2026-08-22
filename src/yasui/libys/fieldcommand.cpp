#include "fieldcommand.hpp"

// ---- 0x001be060 _ZN2YS13FIELD_COMMAND5_execEv ----
#include "../../common/types.h"

// ---- callees, copied from the rig skeleton (arities per skeleton, self-param added for member fns) ----
extern "C" u32 exec_1bc9e8(void* self) asm("_ZN2YS12COMMAND_MENU4execEv");  // YS::COMMAND_MENU::exec() -- arity VERIFIED
extern "C" u32 check_1d48e8(void* self, void* obj, void* menu) asm("_ZN2YS15SPECIAL_COMMAND5checkEPNS_3OBJEPNS_12COMMAND_MENUE");  // YS::SPECIAL_COMMAND::check(OBJ*, COMMAND_MENU*) -- arity VERIFIED
extern "C" void check_shortcut_1be410(void* self) asm("_ZN2YS13FIELD_COMMAND14check_shortcutEv");  // YS::FIELD_COMMAND::check_shortcut() -- arity VERIFIED
extern "C" u32 is_disable_change_side_1bdcd0(void* self) asm("func_001bdcd0");  // YS::PLAYER_COMMAND::is_disable_change_side() -- arity VERIFIED
extern "C" u32 trap_command_set_side_b_1be4b0(void* arg) asm("func_001be4b0");  // YS::trap_command_set_side_b(BD_VALUE*) -- arity UNKNOWN; call site puts self in a0
extern "C" void close_1bd618(void* self, u32 flag) asm("func_001bd618");  // YS::PLAYER_COMMAND::close(bool) -- arity UNKNOWN; call site puts self,1 in a0,a1

// layout row 0x001be060, 260 bytes
// the definition MUST produce the symbol: _ZN2YS13FIELD_COMMAND5_execEv  (source: registry)
// original name (E3 debug build): YS::FIELD_COMMAND::_exec()

namespace YS {


// Only the base-class (PLAYER_COMMAND) offsets this function actually touches are known,
// taken directly from the disassembly (lw a2,2240 / lw a1,2528 / lw t7,2532); PLAYER_COMMAND
// itself is not in the provided class_layouts dump, so the gaps are explicit padding.
struct FIELD_COMMANDLayout {
    u8  pad000[0x8c0];              // 0x000 -- PLAYER_COMMAND fields not touched by this function
    u32 Current;                    // 0x8c0 -- COMMAND_MENU** value (verified via disasm)
    u8  pad8c4[0x9e0 - 0x8c4];      // 0x8c4 -- gap
    u32 Player;                     // 0x9e0 -- OBJ*/PLAYER* value (verified via disasm)
    u32 Pad;                        // 0x9e4 -- pointer value (verified via disasm)
};

void FIELD_COMMAND::_exec() {
    u32* currentPtr = *reinterpret_cast<u32**>(reinterpret_cast<u8*>(this) + 0x8c0);
    if (*currentPtr != 0 && *reinterpret_cast<u32*>(*currentPtr) == 10) {
        exec_1bc9e8(reinterpret_cast<void*>(*currentPtr));
        return;
    }

    void* special = reinterpret_cast<void*>(reinterpret_cast<u8*>(this) + 0x9c0);
    if (!check_1d48e8(special, reinterpret_cast<void*>(*reinterpret_cast<u32*>(reinterpret_cast<u8*>(this) + 0x9e0)), reinterpret_cast<void*>(*currentPtr))) {
        check_shortcut_1be410(this);
    }

    u32 cur = **reinterpret_cast<u32**>(reinterpret_cast<u8*>(this) + 0x8c0);
    if (cur != 0) {
        if (exec_1bc9e8(reinterpret_cast<void*>(cur)) != 0) {
            u32 padVal = *reinterpret_cast<u32*>(reinterpret_cast<u8*>(this) + 0x9e4);
            u64 flags = *reinterpret_cast<u64*>(padVal + 8);
            if ((flags & 0x10000) != 0) {
                u32 ppCVar1 = *reinterpret_cast<u32*>(reinterpret_cast<u8*>(this) + 0x8c0);
                s32 idx = (ppCVar1 == 0) ? 0 : ((static_cast<s32>(ppCVar1) - static_cast<s32>((u32)this) - 0x9e8) >> 2) + 1;
                if (idx < 2) {
                    if (!is_disable_change_side_1bdcd0(this)) {
                        trap_command_set_side_b_1be4b0(this);
                    }
                } else {
                    close_1bd618(this, true);
                }
            }
        }
    }
}

}  // namespace YS
