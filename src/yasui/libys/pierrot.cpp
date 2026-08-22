#include "pierrot.hpp"

// ---- 0x001b3e88 _ZN2YS7PIERROT9damage_seEPNS_6DAMAGEE ----
#include "../../common/types.h"

// ---- callees, copied from skeleton; self prepended for call_se since the
// disasm sets a0=this before the jal (a member-function call). The FVector
// const& parameter of call_se is never materialized anywhere in this
// function's disasm (no a2 write at all) -- so it is omitted here; only the
// symbol resolution (via asm()) matters for the mini-link, not this arg list.
extern "C" u32 call_se_198580(void* self, int) asm("_ZN2YS6STDOBJ7call_seEiRKN2kn7FVectorE");  // YS::STDOBJ::call_se(int, kn::FVector const&) -- arity VERIFIED
extern "C" u32 GetReactionType_18ca48(int) asm("_ZN2YS6DAMAGE15GetReactionTypeEi");  // YS::DAMAGE::GetReactionType(int) -- arity VERIFIED

// layout row 0x001b3e88, 252 bytes
// the definition MUST produce the symbol: _ZN2YS7PIERROT9damage_seEPNS_6DAMAGEE  (source: registry)
// original name (E3 debug build): YS::PIERROT::damage_se(YS::DAMAGE*)

namespace YS { class DAMAGE; }

namespace YS {


// this-side (PIERROT / BTLOBJ / STDOBJ / OBJ base) fields used by this function.
// None of these are in the provided class_layouts dump (only PIERROT's own
// members Attacker/AttackerParamId/RevengeTarget at 0xae4+ are given, and this
// function never touches those) -- offsets below come straight from the
// disassembly (lw/lbu/sb displacement immediates), which is exact ground truth.
struct PIERROTLayout {
    u8    pad000[0xc];              // 0x000 -- unresolved, not in DWARF dump
    void* Action;                    // 0x00c -- self->Action, offset from disasm (lw t6,12(s0))
    u8    pad010[0x7fc - 0xc - 4];   // gap -- unresolved, not in DWARF dump
    u8    SeScat;                    // 0x7fc -- self->SeScat, offset from disasm (lbu/sb ...,2044(s0))
    u8    pad7fd[0x9b4 - 0x7fc - 1]; // gap -- unresolved, not in DWARF dump
    void* field_0x9b4;               // 0x9b4 -- unresolved pointer, offset from disasm (lw t7,2484(a0))
};

// *field_0x9b4 target: only field used is a signed 16-bit value at +2.
struct Target0x9b4Layout {
    u8  pad0[2];   // 0x0 -- unresolved, not in DWARF dump
    s16 field_0x2; // 0x2 -- signed 16-bit, from disasm (lh s1,2(t7))
};

// self->Action target: only field used is a 32-bit value at +4.
struct ActionLayout {
    u8  pad0[4];    // 0x0 -- unresolved, not in DWARF dump
    s32 field_0x4;  // 0x4 -- from disasm (lw t7,4(t6))
};

// damage->AttackParam target (ATTACKPARAM const*): only field used is a byte at +0x2b.
struct AttackParamLayout {
    u8 pad0[0x2b];   // 0x00 -- unresolved, not in DWARF dump
    u8 val_0x2b;     // 0x2b -- from disasm (lbu a1,43(t7))
};

/* YS::PIERROT::damage_se(YS::DAMAGE*) */
void PIERROT::damage_se(YS::DAMAGE* damage) {
    PIERROTLayout* self = reinterpret_cast<PIERROTLayout*>(this);

    // DAMAGE fields used: AttackParam @0x20 (pointer), OrigReaction @0x27 (u8);
    // both from the DWARF class_layouts dump for YS::DAMAGE.
    struct DAMAGELayout {
        u8    pad00[0x20];               // 0x00 -- Dir/Attacker/Target/Flag/Attack, unused here
        void* AttackParam;                 // 0x20 -- YS::DAMAGE::AttackParam (DWARF)
        u8    pad24[0x27 - 0x20 - 4];    // 0x24 -- HitPart/Parts/Reaction, unused here
        u8    OrigReaction;                // 0x27 -- YS::DAMAGE::OrigReaction (DWARF)
    };
    DAMAGELayout* dmg = reinterpret_cast<DAMAGELayout*>(damage);

    // Hypothesis: guard clause (real early "return;") instead of wrapping the
    // rest of the body in "if (s1 >= 0) { ... }" -- attempt_001 produced a
    // plain bltz here where the original uses bltzl (branch-likely), and the
    // original's delay slot for it restores s0 from the stack, both of which
    // are the signature of an actual guard-clause early return.
    Target0x9b4Layout* t = reinterpret_cast<Target0x9b4Layout*>(self->field_0x9b4);
    s32 s1 = (t != 0) ? t->field_0x2 : -1;
    if (s1 < 0) return;

    // Hypothesis: the action->field_0x4 == 0x17 test is a single-case switch,
    // not an if/else -- attempt_001 produced "li 0x17; bne" here where the
    // original uses "xori 0x17; bnez", the classic gcc 3.2 single-case-switch
    // idiom.
    ActionLayout* action = reinterpret_cast<ActionLayout*>(self->Action);
    s32 s2 = -1;
    // Hypothesis: writing the equality test as an explicit XOR-against-zero
    // (rather than relying on gcc to pick that idiom for ==) forces the
    // xori+bnez encoding the original uses instead of li+bne.
    if ((action->field_0x4 ^ 0x17) == 0) {
        AttackParamLayout* ap = reinterpret_cast<AttackParamLayout*>(dmg->AttackParam);
        u8 atk = ap->val_0x2b;
        switch (atk) {
        case 0:
            s2 = 0;
            break;
        case 1:
            s2 = 2;
            break;
        }
    } else {
        s32 v0 = GetReactionType_18ca48(dmg->OrigReaction);
        switch (v0) {
        case 1:
        case 3:
        case 5:
            s2 = 0;
            break;
        case 4:
            s2 = 2;
            break;
        }
    }

    if (s2 >= 0) {
        call_se_198580((void*)self, s1 * 1000 + s2 + (self->SeScat & 1));
        self->SeScat = self->SeScat + 1;
    }
}
}  // namespace YS
