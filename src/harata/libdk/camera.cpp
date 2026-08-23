#include "camera.hpp"
#include "../../common/task.hpp"


namespace dk {

extern void storeImage() asm("_ZN2dk10storeImageEv");
extern s32 Camera_draw2Camera(void*) asm("_ZN2dk6Camera11draw2CameraEv");

void Camera::setNoKick() {
    u32 b = (0x0035u << 16);
    *(u8*)((u32)b + (-14478)) = (u8)0;
}

void Camera::after1CameraTask(TASK* task) {
    (void)task;
    storeImage();
}

void Camera::multiAfter2CameraTask(TASK* task) {
    (void)task;
    Camera_draw2Camera(this);
}

}  // namespace dk

// ---- 0x00161aa8 _ZN2dk6Camera11draw2CameraEv ----
#include "../../common/types.h"

extern "C" u32 Rect16_14c050(void* self) asm("func_0014c050");
extern "C" u32 Rect16_2fd188(void* self) asm("func_002fd188");
extern "C" u32 setGsPrim_14b5e0(void* self, unsigned long long) asm("_ZN2dk8RectBase9setGsPrimEy");
extern "C" u32 setGsTex1_14b630(void* self, unsigned long long) asm("_ZN2dk8RectBase9setGsTex1Ey");
extern "C" u32 setWidthHeight_14b208(void* self, unsigned short, unsigned short) asm("_ZN2dk13RectParamBase14setWidthHeightEtt");
extern "C" u32 setGsUV_14b5e8(void* self, unsigned long long, unsigned long long) asm("_ZN2dk8RectBase7setGsUVEyy");
extern "C" u32 setGsTex0_14b628(void* self, unsigned long long) asm("_ZN2dk8RectBase9setGsTex0Ey");
extern "C" u32 setColor_14b220(void* self, unsigned char, unsigned char, unsigned char, unsigned char) asm("_ZN2dk13RectParamBase8setColorEhhhh");
extern "C" u32 __cxa_pure_virtual_14c350(void* self) asm("func_0014c350");
extern "C" u32 loadImage_14e098(unsigned int) asm("_ZN2dk9loadImageEj");

extern "C" s8 D_004f3b50 asm("D_004f3b50");
extern "C" s8 D_004f3b58 asm("D_004f3b58");
extern "C" u64 D_0036b478 asm("D_0036b478");
extern "C" u64 D_0036b480 asm("D_0036b480");
extern "C" u8 D_0034c76c asm("D_0034c76c");
extern "C" u8 D_0034c768 asm("D_0034c768");
extern "C" u32 D_004f3b60 asm("D_004f3b60");
extern "C" u32 D_004f3e70 asm("D_004f3e70");
extern "C" u32 D_001623d8 asm("D_001623d8");
extern "C" u32 D_001623f0 asm("D_001623f0");

namespace dk {


int Camera::draw2Camera() {
    if (D_004f3b50 == 0) {
        Rect16_14c050((void*)&D_004f3b60);
        D_004f3b50 = 1;
        Rect16_2fd188((void*)&D_001623d8);
    }
    if (D_004f3b58 == 0) {
        Rect16_14c050((void*)&D_004f3e70);
        D_004f3b58 = 1;
        Rect16_2fd188((void*)&D_001623f0);
    }
    setGsPrim_14b5e0((void*)&D_004f3b60, 0x156);
    setGsTex1_14b630((void*)&D_004f3b60, 0);
    setWidthHeight_14b208((void*)&D_004f3b60, 0x200, 0x1a0);
    setGsUV_14b5e8((void*)&D_004f3b60, 0x80008, 0x1a082008);
    setGsTex0_14b628((void*)&D_004f3b60, D_0036b478);
    setColor_14b220((void*)&D_004f3b60, 0x80, 0x80, 0x80, D_0034c76c);
    __cxa_pure_virtual_14c350((void*)&D_004f3b60);
    loadImage_14e098(0x140);
    setGsPrim_14b5e0((void*)&D_004f3e70, 0x156);
    setGsTex1_14b630((void*)&D_004f3e70, 0);
    setWidthHeight_14b208((void*)&D_004f3e70, 0x200, 0x1a0);
    setGsUV_14b5e8((void*)&D_004f3e70, 0x80008, 0x1a082008);
    setGsTex0_14b628((void*)&D_004f3e70, D_0036b480);
    setColor_14b220((void*)&D_004f3e70, 0x80, 0x80, 0x80, D_0034c768);
    return __cxa_pure_virtual_14c350((void*)&D_004f3e70);
}
}
