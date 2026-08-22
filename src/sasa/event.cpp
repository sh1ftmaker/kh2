#include "event.hpp"

namespace sa {

extern u32 D_0032bae0 asm("D_0032bae0");
extern u8 D_00360000 asm("D_00360000");
extern "C" u32 func_0014abb8(...);
extern "C" u32 func_0014abc8(...);
extern "C" void func_0014aa58(...);

extern "C" u32 func_00197920(...) asm("_ZN2YS5EVENT6IsExecEv");
extern "C" u32 func_002ba620(...);

u32 EVENT::isLM() {
    u32 v = *(u8*)&D_0032bae0;
    v ^= 0xbu;
    return (v < 1u);
}

u32 EVENT::isLK() {
    u32 v = *(u8*)&D_0032bae0;
    v ^= 0xau;
    return (v < 1u);
}

u32 EVENT::isSceneEventExec() {
    u32 r2 = ((u32(*)())func_00197920)();
    u32 r15 = 0u;
    if (r2 != 0u) {
        r2 = ((u32(*)())func_002ba620)();
        r15 = ((u32)0u < (u32)r2);
    }
    r2 = r15;
    return r2;
}

void EVENT::wide_on() {
    u32 v0 = func_0014abb8();
    func_0014aa58(v0, 1, 0);
    v0 = func_0014abc8();
    func_0014aa58(v0, 1, 0);
    *(u8*)((u8*)&D_00360000 - 7336u) = 1;
}

void EVENT::readWaitInit() {
    u32 r15 = (u32)(0x004cu << 16);
    u32 r14 = (u32)(0x0036u << 16);
    r15 = (u32)(r15 | 0x4b40u);
    *(u32*)((u32)r14 + (s32)(-9488)) = r15;
}

void EVENT::setActorParam(YS::OBJ* obj) {
    u32 v0 = *(u32*)((u32)this + 264);
    u32 v1 = *(u32*)((u32)this + 1896);
    v0 |= 0x40000003u;
    v1 |= 0x6010u;
    *(u32*)((u32)this + 264) = v0;
    *(u32*)((u32)this + 1896) = v1;
    (void)obj;
}

}  // namespace sa

// ---- 0x0022e288 _ZN2sa5EVENT14leaveAllEffectEv ----
#include "../common/types.h"

extern "C" u32 ThisIsValid_1de568(void* /* ryj::PAX* */) asm("_ZN3ryj3PAX11ThisIsValidEPS0_");
extern "C" u32 ensure_1dde40(void* self) asm("_ZN3ryj3PAX6ensureEv");

extern "C" u32 D_0035dcf4 asm("D_0035dcf4");

namespace sa {


void EVENT::leaveAllEffect() {
    u32* base = (u32*)&D_0035dcf4;
    if (*base == 0)
        return;
    s32 neg = -1;
    s32 offset = 0;
    for (s32 cnt = 95; cnt >= 0; cnt--) {
        u32* e = (u32*)(offset + (u32)D_0035dcf4);
        if (e[1] == (u32)neg) {
            offset += 52;
            continue;
        }
        if (ThisIsValid_1de568((void*)(e + 4))) {
            u32* e2 = (u32*)((u32)D_0035dcf4 + offset);
            ensure_1dde40((void*)(e2 + 4));
        }
        u32* e3 = (u32*)(offset + (u32)D_0035dcf4);
        e3[3] = 0;
        u32* e4 = (u32*)(offset + (u32)D_0035dcf4);
        e4[1] = (u32)neg;
        offset += 52;
    }
}
}  // namespace sa

// ---- 0x0022bb60 func_0022bb60 ----

// ---- callees, declared by the rig: copy these lines verbatim, never retype a symbol ----
extern "C" u32 isMovie_2ef7b8() asm("_ZN2Tz9MenuSound13isPauseActiveEv");  // MOVIE::isMovie() -- arity VERIFIED
extern "C" u32 get3DFade_14abd8() asm("_ZN2dk9get3DFadeEv");  // dk::get3DFade() -- arity VERIFIED
extern "C" u32 fadeOut_14aa58(unsigned int, bool, bool) asm("_ZN2dk4Fade7fadeOutEjb");  // dk::Fade::fadeOut(unsigned int, bool) -- arity VERIFIED
extern "C" u32 functionCall_2ef7a0(int, void*) asm("_ZN5MOVIE12functionCallEiPv");  // MOVIE::functionCall(int, void*) -- arity VERIFIED

// layout row 0x0022bb60, 100 bytes
// the definition MUST produce the symbol: func_0022bb60  (source: registry)
// original name (E3 debug build): sa::EVENT::movie_end(TASK*)

void func_0022bb60_impl(void* self) asm("func_0022bb60");  // declaration
void func_0022bb60_impl(void* self) {  // definition: no asm() here
    if (self == 0)
        return;
    if (!isMovie_2ef7b8())
        return;
    u32 fade = get3DFade_14abd8();
    fadeOut_14aa58(fade, 0, 0);
    functionCall_2ef7a0(2, self);
}

// ---- 0x00231390 _ZN2sa5EVENT20calcValue_objDefaultERNS_18BIN_CAMERA_DATA_WKERNS_23OBJ_DEFAULT_CAMERA_DATAEf ----

// ---- callees, declared by the rig: copy these lines verbatim, never retype a symbol ----
extern "C" f32 calcValue_230f10(f32, void* /* sa::BIN_CAMERA_DATA_ENC_WK* */, int, void* /* sa::BIN_CAMERA_DATA_ENC_WK* */) asm("_ZN2sa5EVENT9calcValueEfPNS_22BIN_CAMERA_DATA_ENC_WKEiS2_");  // sa::EVENT::calcValue(float, sa::BIN_CAMERA_DATA_ENC_WK*, int, sa::BIN_CAMERA_DATA_ENC_WK*) -- arity VERIFIED

// The two constants are compiler-owned literal-pool entries (pi @0x003712a4,
// 180.0f @0x003712a8), not named globals: write them as bare literals and pin the
// TU's pool at its original address so the lui/addiu/lwc1 sequences resolve there.
// minilink-rodata 0x003712a4   (float literals live here in the original)

// layout row 0x00231390, 304 bytes
// the definition MUST produce the symbol: _ZN2sa5EVENT20calcValue_objDefaultERNS_18BIN_CAMERA_DATA_WKERNS_23OBJ_DEFAULT_CAMERA_DATAEf  (source: registry)
// original name (E3 debug build): sa::EVENT::calcValue_objDefault(sa::BIN_CAMERA_DATA_WK&, sa::OBJ_DEFAULT_CAMERA_DATA&, float)

namespace sa { class BIN_CAMERA_DATA_WK; }
namespace sa { class OBJ_DEFAULT_CAMERA_DATA; }

namespace sa {


// class_layouts: sa::BIN_CAMERA_DATA_WK size=32 (DWARF)
struct BIN_CAMERA_DATA_WKLayout {
    f32 eyex;     // 0x00
    f32 eyey;     // 0x04
    f32 eyez;     // 0x08
    f32 centerx;  // 0x0c
    f32 centery;  // 0x10
    f32 centerz;  // 0x14
    f32 camroll;  // 0x18
    f32 camfov;   // 0x1c
};

/* sa::EVENT::calcValue_objDefault(sa::BIN_CAMERA_DATA_WK&, sa::OBJ_DEFAULT_CAMERA_DATA&, float) */
void EVENT::calcValue_objDefault(sa::BIN_CAMERA_DATA_WK& camera, sa::OBJ_DEFAULT_CAMERA_DATA& objDefaultCameraData, float frame) {
    BIN_CAMERA_DATA_WKLayout* cam = reinterpret_cast<BIN_CAMERA_DATA_WKLayout*>(&camera);
    u8* obj = reinterpret_cast<u8*>(&objDefaultCameraData);

    cam->eyex    =  calcValue_230f10(frame, obj + 0x00, 2, 0);
    cam->eyey    = -calcValue_230f10(frame, obj + 0x20, 2, 0);
    cam->eyez    = -calcValue_230f10(frame, obj + 0x40, 2, 0);
    cam->centerx =  calcValue_230f10(frame, obj + 0x60, 2, 0);
    cam->centery = -calcValue_230f10(frame, obj + 0x80, 2, 0);
    cam->centerz = -calcValue_230f10(frame, obj + 0xa0, 2, 0);
    cam->camroll =  calcValue_230f10(frame, obj + 0xc0, 2, 0) * 3.14159274f / 180.0f;
    cam->camfov  =  calcValue_230f10(frame, obj + 0xe0, 2, 0);
}
}  // namespace sa
