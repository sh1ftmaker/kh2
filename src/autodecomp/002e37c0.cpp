// coverage: addr=0x002e37c0 symbol=func_002e37c0 size=76 class=branchy source=twins status=exact fuzzy=100.0
// coverage-alternatives: lift:near:84.42;m2c:near:60.04;ghidra:near:46.47
#include "/data/agent-tom/kh2/rig-wt/src/common/types.h"
#include "/data/agent-tom/kh2/rig-wt/src/kn/fvector.hpp"
#include "/data/agent-tom/kh2/rig-wt/src/anon/tiny_auto80_queue_structs.hpp"
#include "/data/agent-tom/kh2/rig-wt/src/yasui/libys/areadata.hpp"
#include "/data/agent-tom/kh2/rig-wt/src/yasui/libys/progress.hpp"
extern "C" void dk_Timer_start_exact_0014c9b8(void) asm("_ZN2dk5Timer5startEv");

// ============================================================
// Forward declarations for tiny_auto80_queue.cpp
// ============================================================

#include <stdarg.h>

// ---- Function pointer typedefs ----

typedef void (*Fn_002cec50)(u32, u32);
typedef void (*Fn_002cf170)(u32, u32, u32, u32);
typedef u32  (*Fn_002cf1b8)(u32, u32);
typedef void (*Fn_002ead20)(u32, u32, u32);
typedef void (*Fn_002ebc38)(u32, u32, f32);
typedef void (*Fn_002ecdb0)(u32);
typedef void (*Fn_002ecdf8)(u32, u32);
typedef void (*Fn_002ece48)(u32, u32);
typedef void (*Fn_002ed478)(u32);
typedef void (*Fn_002f0798)(u32);
typedef void (*Fn_002f07c8)(u32);

// ---- Namespace declarations ----

namespace worldmap { namespace Gumi { u32 getCourse(); } }
extern u8 D_0032d7c0;
extern u8 D_001b8520;
namespace YS {
    namespace SELECTOR { void ResetPauseMode(s32); }
    namespace EVENT { void ControlOn(); void ControlOff(); }
}

// ---- Special helper functions ----

void wtarget_002fee78(u32, u32, u32, u32);
static inline u32 add_lhs(u32 a, u32 b);


// ---- Forward declarations for functions defined in other TUs ----

u32 func_00138480(u32) asm("func_00138480");
u32 func_0013b1a0(u32) asm("func_0013b1a0");
u32 func_0014aa58(u32, u32, u32) asm("func_0014aa58");
void func_00192260(u32, u32) asm("func_00192260");
void func_00192290(u32, u32) asm("func_00192290");
void func_001bdc18(u32) asm("func_001bdc18");
void func_00258d58(u32, u32, u32) asm("func_00258d58");
u32 func_00276638(u32) asm("func_00276638");
u32 func_002cff98(u32) asm("func_002cff98");
extern "C" u32 func_00138c10(...);
extern "C" u32 func_0023f7e0(...);
extern "C" u32 func_00239848(...);
extern "C" u32 func_00239870(...);
extern "C" u32 func_00246840(...);
extern "C" u32 func_00294000(...) asm("_ZN2Tz6JmInfo7GetDataEi");
extern "C" void func_002c9ed8(...);
extern "C" u32 func_002d2a08(...);
extern "C" u32 func_002db530(...);
extern "C" u32 func_00315768(...);
extern "C" u32 func_00149428(...);
extern "C" u32 func_001b83d0(...);
extern "C" u32 func_001940f0(...);
extern "C" u32 func_00194108(...);
extern "C" u32 func_00195700(...);
extern "C" u32 func_001a8b38(...);
extern "C" u32 func_001d2180(...);
extern "C" void func_001bc688(...);
extern "C" u32 func_002595e8(...);

// ---- Non-function global symbols used as data/function-pointer values ----

extern u8 D_003616f8;
extern u32 func_003617e0;
extern u32 func_003617e4;
extern u8  func_003617e8;
extern u32 func_003617ec;
extern u32 func_003617f0;
extern u32 func_003617f4;
extern u8  func_003617f8;
extern u32 D_003617fc;
extern u8  func_00361810;
extern u8  func_003618a0;
extern u32 func_00361980;
extern u32 func_00361a90;
extern u8  func_00374fa8;
extern u8  func_003753e0;
extern u8  func_00375400;
extern u8  D_01e2a410;
extern u8  D_01e2a5e8;
extern u8  D_01e2aa80;
extern u8  func_01e2bba0;
extern u8  func_01e2bc40;
extern u8  func_002bd870;
extern u8  func_0032b91c;
extern u32 func_0033caf4;
extern u8  D_001c6a28;
extern "C" void func_00292608(...) asm("_ZN2Tz8LoadData9FlushTaskEP4TASK");
extern u8  D_00292620;
extern u8  D_002c53c8;

// ---- Data symbols ----

extern u8  D_001384d0;
extern u8  D_001dda78;
extern u8  D_001ddb30;
extern u8  D_00220000;
extern u8  D_00263db0;
extern u8  D_0026dd40;
extern u8  D_0032f064;
extern u32 D_0032fae4[];
extern u8  D_0032fcc9;
extern u32 D_0033caf0;
extern u32 D_0033caf4;
extern u32 D_00340000;
extern f32 D_00340ebc;
extern f32 D_00340ec0;
extern f32 D_00340ec8[];
extern f32 D_00340ed0[];
extern u8 D_00345d40;
extern u32 D_00347e08;
extern u32 D_00347f80;
extern u32 D_00348804;
extern u32 D_00348808;
extern u32 D_00348810;
extern u8  D_0034881f;
extern u32 D_00348820;
extern u32 D_00348830;
extern u32 D_00349de8;
extern u32 D_00349df0;
extern u32 D_00349df4;
extern u32 D_00349df8;
extern u32 D_00349dfc;
extern u32 D_00349e00;
extern f32 D_00349e14;
extern u32 D_00349e1c;
extern u8  D_00349e20;
extern u32 D_0034a780;
extern u32 D_0034a784;
extern u32 D_0034a788;
extern u32 D_0034a78c;
extern u32 D_0034a790;
extern u8  D_0034c770;
extern u8  D_0034c771;
extern u32 D_0034c774;
extern u32 D_0034c778;
extern u8  D_00350000;
extern u32 D_00350470;
extern u32 D_00350748;
extern u32 D_00350790;
extern u8  D_00350800;
extern u8  D_00350990;
extern u8  D_00350a70;
extern u8  D_00350c50;
extern u32 D_00352130;
extern u32 D_00352768;
extern u8  D_00352908;
extern u8* D_00352bd0;
extern u32 D_0035eb28;
extern u32 D_0035eb34;
extern u8  D_0035eb50;
extern u32 D_0035eb54;
extern u8  D_0035eb80;
extern u8  D_0035eb81;
extern u8  D_0035eb84;
extern u32 D_0035eb88;
extern u32 D_0035eb8c;
extern u32 D_0035ebe0;
extern u32 D_0035ebec;
extern u32 D_0035ec84;
extern u32 D_0035ec88;
extern u32 D_0035ec90;
extern u32 D_0035ec94;
extern u32 D_0035ec9c;
extern u32 D_0035ec98;
extern u32 D_0035ecb8;
extern u32 D_0035ecbc;
extern u32 D_0035ecc0;
extern u16 D_0035ecc8;
extern u32 D_0035ece8;
extern u32 D_0035ed20;
extern u32 D_0035ed4c;
extern u32 D_0035ed70;
extern u32 D_0035eda8;
extern u32 D_0035edcc;
extern u32 D_0035edf4;
extern u32 D_0035ee04;
extern u32 D_0035ee10;
extern u32 D_0035ee58;
extern u32 D_0035ee60;
extern u32 D_0035ee7c;
extern u32 D_0035eea4;
extern u32 D_0035eea8;
extern u32 D_0035ef70;
extern u32 D_0035f01c;
extern u32 D_0035f020;
extern u32 D_0035f04c;
extern u32 D_0035f050;
extern u16 D_0035f090;
extern u16 D_0035f092;
extern u16 D_0035f096;
extern u32 D_0035f0dc;
extern u32 D_0035f0e4;
extern u32 D_0035f118;
extern u32 D_0035f11c;
extern u8  D_0035f120;
extern u32 D_0035f12c;
extern u32 D_0035f140;
extern u32 D_0035f1fc;
extern u32 D_0035f21c;
extern u32 D_0035f230;
extern u32 D_0035f23c;
extern u32 D_0035f240;
extern u32 D_0035f260;
extern u32 D_0035f274;
extern u16 D_0035f280;
extern u32 D_0035f28c;
extern u8  D_0035f298;
extern u8  D_0035f299;
extern u32 D_0035f2b0;
extern u32 D_0035f2b4;
extern u32 D_0035f2bc;
extern u32 D_0035f2c0;
extern u32 D_0035f2d8;
extern u32 D_0035f2dc;
extern u32 D_0035f2f0;
extern s32 D_0035f2f4;
extern u32 D_0035f2f8;
extern s32 D_0035f2fc;
extern u32 D_0035f30c;
extern s32 D_0035f310;
extern u64* D_0035f324;
extern u16 D_0035f32a;
extern void* D_0035f338;
extern void* D_0035f34c;
extern void* D_0035f3f8;
extern u8  D_00360000;
extern u8  D_00361899;
extern u32 D_00361a50;
extern u32 D_00361fb0;
extern u32 D_00361fc8;
extern u32 D_00362050;
extern u32 D_00362060;
extern u32 D_00365c48;
extern f32 D_0036e030[];
extern u8* D_0036e180;
extern u8 D_01c6053c;
extern u8 D_01c60540;
extern u8  D_0036e448;
extern u8 D_0036e648;
extern u32 D_00370000;
extern u8  D_003717e8;
extern u8  D_00371ad8;
extern u8  D_00371af0;
extern u8  D_00371ee8;
extern u8  D_00371f30;
extern u8  D_003721b8;
extern u8  D_00372228;
extern u32 D_003722ec;
extern u32 D_003722f0;
extern u8  D_00372608;
extern u8  D_00372610;
extern u8  D_00372650;
extern u8  D_00372eea;
extern u8  D_00373d50;
extern u8  D_00373d58;
extern u8  D_00373ef8;
extern u8  D_00373f00;
extern u8  D_00373f08;
extern u8  D_00373f10;
extern s32 D_00378ae4;
extern u32 D_01c62fb0;
extern u32 D_01c6cb20;
extern u32 D_01c6cb90;
extern u32 D_01c6cba0;
extern u8  D_01c6ced0;
extern u8* D_01d5ba30;
extern u32 D_01d5ba68;
extern u8* D_01d5ba98;
extern u32 D_01d9e348;
extern u32 D_01d9e6e4;
extern u8  D_01da0000;
extern u8* D_01dad938;
extern u8* D_01dad960;
extern u32 D_01dae680;
extern u8  D_01e2bda0;

// D_0034b244 is a pointer to Obj0015de58
extern Obj0015de58* D_0034b244;

// ---- Function forward declarations (from missing_decls) ----

void __attribute__((noreturn)) func_001002a0(u32);
extern "C" void func_00102670(...);
extern "C" u32 func_00102c48(...);
extern "C" u32 func_00103398(...);
extern "C" u32 func_00103580(...);
extern "C" void func_00103c80(...);
extern "C" u32 func_00105ee8(...);
extern "C" u32 func_001063f0(...);
extern "C" u32 func_001064a8(...);
void func_00111000(u32, f32) asm("func_00111000");
extern "C" void func_001374c8(...);
extern "C" void func_00138190(...);
extern "C" void func_001391f0(...);
extern "C" void func_001396b0(...);
extern "C" void func_0013b8e8(...);
extern "C" void func_001422a0(...);
u32* func_00142398(u32, u32) asm("func_00142398");
extern "C" void func_00143298(...);
extern "C" void func_001432a8(...);
extern "C" u32 func_001b9d40(...);
extern "C" void func_00143e50(...);
extern "C" void func_0014a1e0(...);
extern "C" u32 func_0014abb8(...);
extern "C" u32 func_0014abc8(...);
extern "C" void func_0014c940(...);
extern "C" void func_0014c9f0(...);
u32 func_0014ce50(f32) asm("func_0014ce50");
extern "C" void func_0014f578(...);
extern "C" void func_001505b0(...);
extern "C" void func_00151b78(...);
extern "C" void func_00152120(...);
extern "C" u32 func_00153468(...);
extern "C" void func_0015ee10(...);
extern "C" void func_0015ee90(...);
extern "C" void func_0015f6e8(...);
extern "C" void func_0015f700(...);
extern "C" void func_00161aa8(...);
extern "C" void func_00165f70(...);
extern "C" void func_00167fc8(...);
extern "C" void func_00168008(...);
extern "C" void func_0016b070(...);
extern "C" u32 func_0016bc20(...);
extern "C" void func_0016be98(...);
extern "C" void func_0016c5b8(...);
extern "C" void func_0016c640(...);
extern "C" void func_0016ed50(...);
extern "C" void func_00170570(...);
extern "C" void func_00170dd0(...) asm("_ZN2YS10CACHE_BUFF9WaitFlushEP4TASK");
extern "C" void func_00177dc8(...);
extern "C" void func_0017c578(...);
extern "C" void func_0017f488(...);
void func_00184540(u32, u32, f32, f32) asm("func_00184540");
extern "C" void func_00185ed8(...);
extern "C" void func_0018a818(...);
extern "C" void func_00190920(...);
extern "C" void func_00191a20(...);
extern "C" void func_00191a38(...);
extern "C" u32 func_00191e40(...);
extern "C" u32 func_001923c8(...);
extern "C" void func_00195858(...);
extern "C" void func_00197cc0(...);
extern "C" void func_00198450(...) asm("_ZN2YS6STDOBJ15_OVR_initializeEv");
extern "C" u32 func_0019f7d0(...);
extern "C" u32 func_001a0e78(...);
extern "C" void func_001a0ee0(...);
extern "C" void func_001a1a20(...) asm("_ZN2YS5SHEET6add_mpEib");
extern "C" void func_001a1db8(...);
extern "C" u32 func_001a35f8(...);
extern "C" void func_001a52a8(...);
extern "C" void func_001a5990(...);
extern "C" u32 func_001a6658(...);
extern "C" void func_001a7a48(...);
extern "C" void func_001a7b78(...);
extern "C" void func_001aa388(...);
extern "C" u32 func_001ab800(...);
extern "C" u32 func_001ab810(...);
extern "C" void func_001ac310(...);
extern "C" void func_001acdc0(...);
extern "C" void func_001ad280(...);
extern "C" void func_001ad9c8(...);
extern "C" void func_001aedf8(...);
extern "C" void func_001b0210(...);
extern "C" void func_001b1100(...);
extern "C" u32 func_001b1490(...);
extern "C" void func_001b3b70(...);
extern "C" u32 func_001b58a8(...);
extern "C" void func_001b6298(...);
extern "C" u32 func_001b70d0(...);
extern "C" u32 func_001b77a8(...);
u32 func_001b84b8(u32, u32, u32, u32) asm("func_001b84b8");
u32 func_001b8420(u32, u32, u32, u32) asm("func_001b8420");
extern "C" void func_001b86e0(...);
extern "C" void func_001bc720(...);
extern "C" void func_001bd2d0(...);
extern "C" void func_001bd5b0(...);
extern "C" u32 func_001c11e0(...);
extern "C" void func_001c1748(...);
extern "C" u32 func_001c2b58(...);
extern "C" u32 func_001c3748(...);
extern "C" void func_001c79a0(...);
extern "C" void func_001c8d80(...);
extern "C" void func_001c8d98(...);
extern "C" void func_001c8ec0(...);
void func_001c97b0(void*, f32) asm("func_001c97b0");
extern "C" void func_001d2130(...);
extern "C" u32 func_001d35e0(...);
extern "C" u32 func_001d56c8(...);
extern "C" void func_001d59b0(...);
extern "C" u32 func_001d5af8(...);
extern "C" void func_001d5f30(...);
extern "C" void func_001d71f0(...);
extern "C" u32 func_001d83c0(...);
void func_001d8d08(f32, u32) asm("_ZN2YS7MISSION8AddGaugeEfi");
void func_001d8da0(f32, u32) asm("func_001d8da0");
extern "C" void func_001d8fa8(...);
void func_001d9050(u32, u32, f32) asm("func_001d9050");
extern "C" u32 func_001d96c0(...);
extern "C" u32 func_001db5a8(...);
extern "C" u32 func_001dc9d0(...) asm("_ZN3ryj6EFFECT8is_aliveEv");
extern "C" u32 func_001dcd58(...);
extern "C" u32 func_001dcd88(...);
extern "C" void func_001ddb68(...);
extern "C" u32 func_001de4b0(...);
extern "C" u32 func_001de568(...);
extern "C" void func_001de590(...);
extern "C" void func_001de610(...);
extern "C" void func_001de750(...);
extern "C" f32 func_001e09d0(...) asm("_ZN3ryj18SAVERAM_GUMIBATTLE25get_all_treasure_completeEv");
extern "C" void func_001e1988(...);
extern "C" u32 func_001e3650(...);
extern "C" u32 func_001e3660(...);
extern "C" u32 func_001e4248(...);
extern "C" u32 func_001e4320(...);
extern "C" u32 func_001e4e18(...);
extern "C" s32 func_001e5a00(...);
extern "C" void func_001e6b00(...);
extern "C" u32 func_001e7698(...);
extern "C" void func_001e7798(...);
extern "C" void func_002229a0(...);
extern "C" void func_002236d0(...);
extern "C" void func_002248f8(...);
extern "C" u32 func_00224988(...);
extern "C" s32 func_002249b8(...);
extern "C" s32 func_002249e8(...);
extern "C" u32 func_00225eb8(...);
extern "C" void func_00225fa0(...);
extern "C" void func_00226478(...);
extern "C" u32 func_00227818(...);
extern "C" u32 func_00227858(...);
extern "C" u32 func_002282f0(...);
extern "C" void func_00228918(...);
extern "C" void func_00228bd8(...);
extern "C" s32 func_0022ab80(...);
extern "C" u32 func_002325f0(...);
extern "C" void func_00234590(...);
extern "C" void func_00234670(...);
extern "C" void func_002346a0(...);
extern "C" void func_00239988(...);
extern "C" s32 func_00239b50(...);
extern "C" u32 func_0023c5f0(...);
extern "C" void func_0023d2b0(...);
extern "C" void func_0023d410(...);
extern "C" void func_0023ed90(...);
extern "C" u32 func_0023f100(...);
extern "C" void func_0023fbc8(...);
extern "C" void func_0023fc08(...);
extern "C" void func_0023fc40(...);
extern "C" void func_0023fcd0(...);
extern "C" u32 func_0023fd30(...);
extern "C" void func_00240360(...);
extern "C" void func_00240be0(...);
extern "C" void func_00240c08(...);
extern "C" void func_002423a0(...);
extern "C" void func_00242408(...);
extern "C" void func_00242418(...);
extern "C" u32 func_00242708(...);
extern "C" void func_00242880(...);
extern "C" u32 func_0024ac88(...) asm("_ZN2Tz4TRTE10GetSeqInfoEi");
extern "C" u32 func_00252110(...);
extern "C" void func_00252ce0(...);
extern "C" void func_00252d88(...);
extern "C" void func_00252e50(...);
extern "C" void func_00253638(...);
extern "C" void func_00253888(...);
extern "C" void func_00253b30(...);
extern "C" void func_00257000(...);
extern "C" void func_002571e0(...);
extern "C" void func_00257388(...);
extern "C" void func_002579e0(...);
extern "C" u32 func_00258c48(...) asm("_ZN2Tz5Pause10isLoopFadeEv");
extern "C" u32 func_00258cd8(...);
extern "C" void func_00258d40(...);
extern "C" u32 func_00259460(...);
extern "C" void func_002595b8(...);
extern "C" void func_002597f0(...);
extern "C" u32 func_00263cc0(...);
extern "C" void func_00265580(...);
extern "C" void func_002655e8(...);
extern "C" void func_00265a30(...);
extern "C" void func_00265ab8(...);
extern "C" void func_0026d968(...);
extern "C" void func_00271e08(...);
extern "C" void func_00271e80(...);
extern "C" u32 func_00271ec8(...);
extern "C" void func_00272340(...);
extern "C" void func_002723e0(...);
extern "C" void func_00276220(...);
extern "C" u32 func_002764b0(...);
extern "C" u32 func_00276c18(...);
extern "C" void func_0027a180(...);
extern "C" void func_0027a898(...);
extern "C" void func_0027acf8(...);
extern "C" void func_002818b8(...);
extern "C" u32 func_00281c30(...);
extern "C" void func_00281f40(...);
extern "C" void func_00281f48(...);
extern "C" void func_00281f70(...);
extern "C" void func_00281f90(...);
extern "C" u32 func_002833f8(...);
extern "C" void func_002835a8(...);
extern "C" void func_002835d8(...);
extern "C" void func_00283d00(...);
extern "C" void func_00283f50(...);
extern "C" void func_00287c20(...);
extern "C" void func_00287c78(...);
extern "C" void func_00287da0(...) asm("_ZN2Tz8MenuBase7SetExitEv");
extern "C" u32 func_00288be8(...);
extern "C" u32 func_002891e8(...);
extern "C" void func_002891f0(...);
extern "C" void func_0028abe0(...);
extern "C" u32 func_0028acc8(...);
extern "C" u32 func_0028be58(...);
extern "C" void func_0028ce38(...);
extern "C" u32 func_0028d6e8(...) asm("_ZN2Tz8LightCur7isExistEv");
extern "C" void func_00256ea8(...) asm("_ZN2Tz5CmTop12LeavePadHelpEv");
extern "C" void func_0028f4d8(...);
extern "C" void func_0028f6f0(...);
extern "C" void func_0028f7e8(...);
extern "C" u32 func_00290940(...);
extern "C" u32 func_00290960(...);
extern "C" void func_00290a60(...);
extern "C" u32 func_00292a90(...);
extern "C" void func_002926a8(...) asm("_ZN2Tz8LoadData10CacheAllocEPKc");
extern "C" void func_00292b40(...);
extern "C" void func_00293bd0(...);
extern "C" void func_00293cb8(...);
extern "C" void func_00294288(...);
extern "C" void func_00295508(...);
extern "C" void func_002955a8(...);
extern "C" u32 func_002a43f0(...);
extern "C" void func_002a67a8(...);
extern "C" void func_002a73d0(...);
extern "C" void func_002a8258(...);
extern "C" void func_002a94f8(...);
extern "C" void func_002b4b00(...);
extern "C" u32 func_002b6e24(...);
extern "C" u32 func_002b6f28(...);
extern "C" void func_002b7078(...);
extern "C" void func_002b70b8(...);
extern "C" void func_002b72e4(...);
extern "C" u32 func_002b823c(...);
extern "C" void func_002b83b4(...);
extern "C" void func_002b8434(...);
extern "C" void func_002b871c(...);
extern "C" u32 func_002b8824(...);
extern "C" void func_002b8c78(...);
extern "C" u32 func_002ba810(...);
extern "C" void func_002baa08(...);
extern "C" void func_002baa60(...);
extern "C" void func_002bbed0(...) asm("_ZN5SOUND12silentBgSeOnEv");
extern "C" void func_002bbf18(...);
extern "C" void func_002bc188(...) asm("_ZN5SOUND8createSeEiRKN2kn7FVectorE");
extern "C" void func_002bc470(...);
extern "C" void func_002bc608(...);
extern "C" void func_002bd760(...);
extern "C" void func_002bd7d8(...);
extern "C" void func_002be0b0(...);
u32 func_002be5b8() asm("func_002be5b8");
extern "C" void func_002c0ca0(...) asm("_ZN2dk13WM_TOTAL_INFOC1Ev");
extern "C" void func_002c1b60(...) asm("_ZN8worldmap4Gumi8setStateEPKN2YS6COURSEE");
extern "C" u32 func_002c5140(...);
extern "C" void func_002c6158(...);
extern "C" u32 func_002cab48(...);
extern "C" void func_002cb7c0(...);
extern "C" void func_002cbd08(...);
extern "C" void func_002cd260(...);
extern "C" void func_002cd290(...);
void func_002cd910(f32) asm("func_002cd910");
extern "C" void func_002cf268(...);
extern "C" void func_002cff50(...);
extern "C" void func_002d0070(...);
extern "C" void func_002d08b8(...);
extern "C" u32 func_002d1260(...);
extern "C" void func_002d1550(...);
extern "C" u32 func_002d1878(...);
extern "C" void func_002d2948(...);
extern "C" u32 func_002d5578(...);
extern "C" void func_002d5950(...);
extern "C" void func_002d5b48(...);
extern "C" void func_002dc4e0(...);
extern "C" u32 func_002dc7c8(...);
extern "C" void func_002dd2d8(...);
void func_002e7108(u32, f32) asm("func_002e7108");
extern "C" void func_002e7308(...);
extern "C" void func_002eaf38(...);
extern "C" void func_002eb778(...);
extern "C" void func_002eb7f0(...);
extern "C" void func_002ed300(...);
extern "C" void func_002eda30(...);
extern "C" void func_002ef708(...);
extern "C" u32 func_002ef9e0(...);
extern "C" u32 func_002efc10(...);
extern "C" void func_002f3f10(...);
f32 func_002f86f0(f32) asm("func_002f86f0");
extern "C" void func_002fdd68(...);
extern "C" void func_002fed10(...);
extern "C" u32 func_002fee78(...);
extern "C" void func_002ff3fc(...);
extern "C" u32 func_002ffd00(...);
extern "C" u32 func_002ffd78(...);
extern "C" s32 func_00305d08(...);
extern "C" s32 func_00305d20(...);
extern "C" void func_0030df38(...);
extern "C" void func_003134b8(...);
extern "C" void func_00314480(...);
extern "C" void func_00314640(...);
extern "C" void func_003147a0(...);
extern "C" void func_00314830(...);
extern "C" void func_00314930(...);
extern "C" void func_00315418(...) __attribute__((noreturn));
extern "C" void func_0031fe00(...);
extern "C" void func_00324718(...);

// ---- Additional function declarations needed from solver_decls ----

extern "C" u32 func_0011d440(...);
extern "C" u32 func_0017dbb8(...);
extern "C" u32 func_00227d10(...);


extern "C" u32 func_001041a0(...);
extern u8 D_0036a070;


extern "C" u32 func_002fea00(...);


extern "C" u32 func_0019ba60(...);

u32 func_00112c80(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_00112c80");


extern u8 D_00345cf8;


extern u8 D_00345cf8;


extern "C" u32 func_00105110(...);
extern u8 D_00345cf8;


u32 func_001137f0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_001137f0");


extern "C" u32 func_00113668(...);
extern u8 D_003461e8;


extern "C" u32 func_00113668(...);
extern u8 D_003461e8;


extern "C" u32 func_00113668(...);
extern u8 D_003464b0;


extern "C" u32 func_00113668(...);
extern u8 D_003464b0;


extern "C" u32 func_00113668(...);
extern u8 D_00346658;


extern "C" u32 func_00113668(...);
extern u8 D_00346658;


extern "C" u32 func_00113668(...);
extern u8 D_003467b8;


extern "C" u32 func_00113668(...);
extern u8 D_003467b8;


extern "C" u32 func_00113668(...);
extern u8 D_00346960;


extern "C" u32 func_00113668(...);
extern u8 D_00346960;


extern "C" u32 func_00113fb0(...) asm("_ZN2kn17FriendPersonality16execScriptActionEPNS_12FriendActionEPN2YS6TARGETEPPvb");


extern "C" u32 func_00113668(...);
extern u8 D_00346b08;


extern "C" u32 func_00113668(...);
extern u8 D_00346b08;


extern "C" u32 func_00113fb0(...) asm("_ZN2kn17FriendPersonality16execScriptActionEPNS_12FriendActionEPN2YS6TARGETEPPvb");


extern "C" u32 func_00113668(...);
extern u8 D_00346cd8;


extern "C" u32 func_00113668(...);
extern u8 D_00346cd8;


extern "C" u32 func_00113fb0(...) asm("_ZN2kn17FriendPersonality16execScriptActionEPNS_12FriendActionEPN2YS6TARGETEPPvb");


extern "C" u32 func_00113fb0(...) asm("_ZN2kn17FriendPersonality16execScriptActionEPNS_12FriendActionEPN2YS6TARGETEPPvb");


extern "C" u32 func_00113668(...);
extern u8 D_00346e80;


extern "C" u32 func_00113668(...);
extern u8 D_00346e80;


extern "C" u32 func_00113fb0(...) asm("_ZN2kn17FriendPersonality16execScriptActionEPNS_12FriendActionEPN2YS6TARGETEPPvb");


extern "C" u32 func_00113668(...);
extern u8 D_00347050;


extern "C" u32 func_00113668(...);
extern u8 D_00347050;


extern "C" u32 func_00113fb0(...) asm("_ZN2kn17FriendPersonality16execScriptActionEPNS_12FriendActionEPN2YS6TARGETEPPvb");


extern "C" u32 func_00113fb0(...) asm("_ZN2kn17FriendPersonality16execScriptActionEPNS_12FriendActionEPN2YS6TARGETEPPvb");


extern "C" u32 func_00113668(...);
extern u8 D_00347220;


extern "C" u32 func_00113668(...);
extern u8 D_00347220;


extern "C" u32 func_00113fb0(...) asm("_ZN2kn17FriendPersonality16execScriptActionEPNS_12FriendActionEPN2YS6TARGETEPPvb");


extern "C" u32 func_00113668(...);
extern u8 D_003473c8;


extern "C" u32 func_00113668(...);
extern u8 D_003473c8;


extern "C" u32 func_00113668(...);
extern u8 D_00347550;


extern "C" u32 func_00113668(...);
extern u8 D_00347550;


extern "C" u32 func_00113990(...);


extern "C" u32 func_00113668(...);
extern u8 D_003477a0;


extern "C" u32 func_00113668(...);
extern u8 D_00347808;


extern "C" u32 func_00113668(...);
extern u8 D_00347808;


extern u8 D_00347848;


extern u8 D_00347848;


extern "C" u32 func_00113668(...);
extern u8 D_00347848;


extern "C" u32 func_00113668(...);
extern u8 D_00347848;


extern "C" u32 func_0011ee58(...);
extern u8 D_003479a8;


extern "C" u32 func_0011ee58(...);
extern u8 D_003479a8;


extern "C" u32 func_0011ef20(...);


extern "C" u32 func_0011f7a8(...) asm("_ZN2kn7ModelBG10drawCommonEPNS_16ProjectionCameraEPNS_9DrawParamEPcPNS_13AnimationWorkEbPNS_7FMatrixE");


extern "C" u32 func_0011ee58(...);
extern u8 D_00347a28;


extern "C" u32 func_0011ee58(...);
extern u8 D_00347a28;


extern "C" u32 func_00124c08(...);
extern u8 D_00347bb0;


extern "C" u32 func_00124c08(...);
extern u8 D_00347bb0;


extern "C" u32 func_00124bb8(...);
extern u8 D_00347bd8;


extern "C" u32 func_00124bb8(...);
extern u8 D_00347bd8;


extern "C" u32 func_00124c08(...);
extern u8 D_00347bd8;


extern "C" u32 func_00124c08(...);
extern u8 D_00347bd8;


extern "C" u32 func_001322f0(...);
extern u8 D_00347c30;


extern "C" u32 func_001322f0(...);
extern u8 D_00347c30;


extern "C" u32 func_00132170(...);

u32 func_00132c68(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_00132c68");


extern "C" u32 func_00132270(...);
extern u8 D_00347c60;


extern "C" u32 func_00132270(...);
extern u8 D_00347c60;


extern "C" u32 func_001322f0(...);
extern u8 D_00347c60;


extern "C" u32 func_001322f0(...);
extern u8 D_00347c60;


extern "C" u32 func_00132170(...);

u32 func_001333c8(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_001333c8");


extern "C" u32 func_00133630(...);



extern "C" u32 func_0023a0d8(...);

u32 func_0023a950(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_0023a950");


extern "C" u32 func_0023a0d8(...);

u32 func_0023a988(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_0023a988");




extern "C" u32 func_00133720(...);


extern "C" u32 func_001337a0(...);


extern "C" u32 func_00133848(...);


extern "C" u32 func_00133898(...);


extern "C" u32 func_001338e8(...);


extern "C" u32 func_00133630(...);
extern u8 D_00347c88;


extern "C" u32 func_001336d8(...);
extern u8 D_00347c88;


extern "C" u32 func_001336e8(...);
extern u8 D_00347c88;


extern "C" u32 func_00133720(...);
extern u8 D_00347c88;


extern "C" u32 func_00133b88(...);
extern u8 D_00347c88;


extern "C" u32 func_00133bb8(...);
extern u8 D_00347c88;


extern "C" u32 func_00133c00(...);
extern u8 D_00347c88;


extern "C" u32 func_00133c18(...);
extern u8 D_00347c88;


extern "C" u32 func_00133c60(...);
extern u8 D_00347c88;


extern "C" u32 func_00133c78(...);
extern u8 D_00347c88;


extern "C" u32 func_00133ac8(...);
extern u8 D_00347c88;


extern "C" u32 func_00133b78(...);
extern u8 D_00347c88;


extern "C" u32 func_00133bb8(...);
extern u8 D_00347c88;


extern "C" u32 func_00170c00(...);


extern u8 D_003b8b20;


extern u8 D_003b8b20;


extern "C" u32 func_00239c38(...);


extern "C" u32 func_0013b508(...);


extern "C" u32 func_0013db60(...);


extern "C" u32 func_0013dce8(...);
extern u8 D_00348638;


extern "C" u32 func_0013dcb0(...);
extern u8 D_00348638;


extern "C" u32 func_0013dd18(...);
extern u8 D_00348638;


extern "C" u32 func_0013dc38(...);
extern u8 D_00348638;


extern "C" u32 func_0013dc58(...);
extern u8 D_00348638;


extern "C" u32 func_0013e8c0(...);
extern u8 D_003486d8;


extern "C" u32 func_0013e8c0(...);
extern u8 D_003486d8;


extern "C" u32 func_0014df98(...);


extern "C" u32 func_00140dc0(...);
extern "C" u32 func_001410b8(...);

u32 func_00141080(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_00141080");


extern "C" u32 func_00140dc0(...);
extern "C" u32 func_001410b8(...);

u32 func_001410c8(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_001410c8");


extern "C" u32 func_00143208(...);


extern "C" u32 func_001431e8(...);


extern "C" u32 func_00148a08(...);


extern "C" u32 func_00148a08(...);


extern "C" u32 func_00149370(...);
extern u8 D_0032bae0;


extern "C" u32 func_00170518(...);


extern "C" u32 func_00170950(...);


extern "C" u32 func_001493e8(...);
extern u8 D_00348d68;


extern "C" u32 func_0013dd28(...);


extern "C" u32 func_001ae990(...);
extern "C" u32 func_002b99a0(...);

u32 func_0014a290(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_0014a290");


extern "C" u32 func_0014b248(...);
extern u8 D_00349270;


extern "C" u32 func_0014b208(...);
extern u8 D_00349270;


extern "C" u32 func_0014ca10(...);

u32 func_0014ca48(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_0014ca48");


extern "C" u32 func_001058e8(...);


extern "C" u32 func_001058e8(...);


extern "C" u32 func_0023aa98(...);


extern u8 D_0034a878;


extern "C" u32 func_00139598(...);


extern "C" u32 func_00140df0(...);


void func_0015aea8(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_0015aea8");


void func_0015c1f0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_0015c1f0");


void func_0015e018(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_0015e018");


extern "C" u32 func_0014e0d8(...);


extern "C" u32 func_001a2478(...);


extern "C" u32 func_00168b38(...);

u32 func_0016a0d0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_0016a0d0");


extern "C" u32 func_00168b38(...);

u32 func_0016a108(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_0016a108");


extern "C" u32 func_0019c400(...);


extern "C" u32 func_0016cb88(...);
extern "C" u32 func_0016cba0(...);


extern "C" u32 func_0019ec88(...);


extern "C" u32 func_001c0cd8(...);


extern "C" u32 func_0016a070(...);


extern "C" u32 func_0016a020(...);


extern "C" u32 func_0019c4e8(...);


extern "C" u32 func_00198828(...);


extern "C" u32 func_001b9c28(...);


extern "C" u32 func_001b9c58(...);


extern "C" u32 func_0016bd60(...);


extern "C" u32 func_00177460(...);


extern "C" u32 func_001a0798(...);


extern "C" u32 func_0016ac80(...);


extern "C" u32 func_0016ac38(...);


extern "C" u32 func_0016ac38(...);


extern "C" u32 func_0016c008(...);


extern "C" u32 func_00179dd0(...);


extern "C" u32 func_001d6ab0(...);


extern "C" u32 func_001bf100(...);


extern "C" u32 func_00190878(...);


extern "C" u32 func_001913b8(...);


extern "C" u32 func_001bb4a0(...);


extern "C" u32 func_001762c0(...);


extern "C" u32 func_0023f070(...);


extern "C" u32 func_001d68f8(...);
extern u8 D_01c5f530;


extern "C" u32 func_00175bb8(...);

u32 func_0017a298(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_0017a298");


extern "C" u32 func_001a9780(...);


extern "C" u32 func_00170950(...);

void func_0017ebf0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_0017ebf0");


extern "C" u32 func_00168b88(...);

u32 func_00181ba8(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_00181ba8");


extern "C" u32 func_00168b88(...);

u32 func_00181be8(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_00181be8");


extern "C" u32 func_00168b88(...);

u32 func_00181c80(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_00181c80");


extern "C" u32 func_00182780(...);
extern "C" u32 func_00182838(...);


extern "C" u32 func_001849b8(u32, u32, u32, u32, u32, u32, u32, u32) asm("_ZN2YS3OBJ10get_groundEv");

u32 func_0018cef8(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_0018cef8");


extern "C" u32 func_001a3a78(...);


extern "C" u32 func_001908c0(...);


extern u8 D_01c61970;


extern "C" u32 func_00192c40(...);


extern "C" u32 func_0011c7c8(...);


extern "C" u32 func_0011c7f8(...);


extern "C" u32 func_00168b38(...);

u32 func_00195328(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_00195328");


extern "C" u32 func_00195530(...);


extern u8 D_0032bb30;


extern u8 D_0032bb30;


extern "C" u32 func_0016ced0(...);
extern u8 D_00350338;

void func_001969c0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_001969c0");


extern "C" u32 func_001977d8(...);
extern "C" u32 func_00197800(...);

u32 func_001977a0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_001977a0");


extern "C" u32 func_00198bd0(...);

u32 func_00198d20(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_00198d20");


extern "C" u32 func_001a7790(...);

extern "C" u32 func_0016a070(...);


extern "C" u32 func_00154b80(...);

void func_0019cbe8(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_0019cbe8");


extern "C" u32 func_0013e4b8(...);

void func_0019d228(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_0019d228");


extern "C" u32 func_0019ba60(...);

u32 func_0019d4a8(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_0019d4a8");


extern "C" u32 func_0013e4b8(...);

void func_0019d548(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_0019d548");


extern u8 D_0032de28;


extern "C" u32 func_001c6e58(...);
extern u8 D_003507a0;


extern "C" u32 func_001c6e58(...);
extern u8 D_003507a0;


extern "C" u32 func_001c1708(...);
extern "C" u32 func_001c7ee0(...);

u32 func_001a58f8(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_001a58f8");


extern u8 D_0032bb30;


extern "C" u32 func_00168b38(...);

u32 func_001a93e8(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_001a93e8");


extern "C" u32 func_00168b38(...);

u32 func_001a9420(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_001a9420");


extern "C" u32 func_00168b38(...);

u32 func_001a9528(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_001a9528");


extern "C" u32 func_00168b38(...);

u32 func_001a97b8(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_001a97b8");


void func_001abd10(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_001abd10");


extern "C" u32 func_001ae460(...);

u32 func_001ae1b0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_001ae1b0");


extern "C" u32 func_001ae460(...);

u32 func_001ae1e0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_001ae1e0");


extern u8 D_01c94100;


extern "C" u32 func_001d7cd0(...);
extern u8 D_00350f28;


extern "C" u32 func_001d7cd0(...);
extern u8 D_00350f28;


extern "C" u32 func_001d3f80(...);


extern "C" u32 func_001d4808(...);


extern "C" u32 func_001c8ab0(...);

u32 func_001b6d40(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_001b6d40");


extern "C" u32 func_00170950(...);


extern "C" u32 func_001b83f0(...);


extern "C" u32 func_001bb020(...);

void func_001bb468(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_001bb468");



extern "C" u32 func_001bd570(...);


extern "C" u32 func_0013b2f8(...);

void func_001bdc48(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_001bdc48");


extern "C" u32 func_0016a020(...);


extern "C" u32 func_001c0c80(...);


extern "C" u32 func_001b1d20(...);
extern u8 D_00351580;


extern u8 D_01d49658;


extern "C" u32 func_001c7900(...);


extern "C" u32 func_001a4db0(...);
extern u8 D_00351da8;


extern "C" u32 func_001a4db0(...);
extern u8 D_00351f78;


extern "C" u32 func_001a4db0(...);
extern u8 D_00351ff0;


extern "C" u32 func_001a4db0(...);
extern u8 D_00351ff0;


extern "C" u32 func_001a4db0(...);
extern u8 D_00352060;


extern "C" u32 func_001a5420(...);
extern u8 D_0036e228;

u32 func_001cc128(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_001cc128");


extern "C" u32 func_001a4db0(...);
extern u8 D_003520d0;


extern "C" u32 func_001a4db0(...);
extern u8 D_003520d0;


extern "C" u32 func_002875e8(...);


extern "C" u32 func_002875e8(...);


extern "C" u32 func_00287760(...);


extern "C" u32 func_00287760(...);


void func_001d1878(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_001d1878");


extern "C" u32 func_001d1678(...);


extern "C" u32 func_0014fa08(...);

void func_001d1c70(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_001d1c70");


extern "C" u32 func_0014f9e8(...);

u32 func_001d1ca8(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_001d1ca8");


extern "C" u32 func_001d1678(...);


extern "C" u32 func_0014fb60(...);

void func_001d1ed0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_001d1ed0");


extern "C" u32 func_0014fb40(...);

u32 func_001d1f08(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_001d1f08");


extern "C" u32 func_001d2110(...);


extern "C" u32 func_0014f5d0(...);

void func_001d2710(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_001d2710");


extern "C" u32 func_001a4db0(...);
extern u8 D_00352678;


extern "C" u32 func_001a4db0(...);
extern u8 D_00352678;


extern "C" u32 func_0013d620(...);

void func_001d48b0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_001d48b0");


extern u8 D_01d5ba58;


extern "C" u32 func_0014f8d0(...);
extern "C" u32 func_001d16f8(...);


extern "C" u32 func_002bc358(...);

void func_001d5730(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_001d5730");


extern "C" u32 func_001d5a48(...);


extern "C" u32 func_001a4db0(...);
extern u8 D_003527f0;


extern "C" u32 func_001d1678(...);


extern "C" u32 func_001bb4a0(...);
extern "C" u32 func_001bbcb0(...);

u32 func_001d8158(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_001d8158");


extern u8 D_0032dfd0;


extern "C" u32 func_001a4db0(...);
extern u8 D_00352970;


u32 func_001dbd38(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_001dbd38");


u32 func_001dcd38(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_001dcd38");


extern "C" u32 func_001e6d28(...);


extern "C" u32 func_001e7030(...);


extern "C" u32 func_001e7050(...);


extern "C" u32 func_001e70a0(...);


extern "C" u32 func_001e02f8(...);


extern "C" u32 func_002bc358(...);

void func_001e21f8(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_001e21f8");


extern "C" u32 func_0020df70(...);
extern "C" u32 func_0020e758(...);

void func_001e2b90(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_001e2b90");


extern "C" u32 func_001efc28(...);


extern u8 D_01d9e360;


extern u8 D_01d9e360;


extern "C" u32 func_0021efa8(...);


extern u8 D_01d9e360;


extern u8 D_01d9e360;


u32 func_00221f98(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_00221f98");


extern "C" u32 func_00242ea8(...);


extern "C" u32 func_001688b8(...);
extern "C" u32 func_00170c50(...);

u32 func_00225a30(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_00225a30");


extern "C" u32 func_00224e90(...);
extern "C" u32 func_00225b00(...);

u32 func_00225b50(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_00225b50");


extern "C" u32 func_001d5a38(...);


extern "C" u32 func_001384a0(...);
extern "C" u32 func_0014a4c0(...);


extern "C" u32 func_00225298(...);


extern "C" u32 func_00197920(...) asm("_ZN2YS5EVENT6IsExecEv");
extern "C" u32 func_002ba620(...);

extern "C" u32 func_00228378(u32, u32, u32, u32, u32, u32, u32, u32) asm("_ZN2sa5EVENT16isSceneEventExecEv");

extern "C" u32 func_00139580(...);


extern "C" u32 func_00139570(...);


extern "C" u32 func_0023fad0(...);


extern "C" u32 func_00236cc0(...);


extern "C" u32 func_0023c4b8(...);


extern "C" u32 func_002ef7a0(...);


extern u8 D_01dae480;


extern u8 D_01dae480;


extern u8 D_01dae480;


extern u8 D_01dae480;


extern u8 D_01dae480;


extern "C" u32 func_00237238(...);
extern u8 D_0035eaf8;


extern "C" u32 func_00237238(...);
extern u8 D_0035eaf8;


extern "C" u32 func_00239c68(...);

void func_00239bf8(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_00239bf8");


extern "C" u32 func_00236cc0(...);


extern "C" u32 func_0023f070(...);


extern "C" u32 func_0023f8a8(...);
extern u8 D_0035ebd8;


extern "C" u32 func_0023f8a8(...);
extern u8 D_0035ebd8;


extern "C" u32 func_00168b38(...);

u32 func_0023f908(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_0023f908");


extern "C" u32 func_00168b38(...);

u32 func_0023f948(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_0023f948");


extern "C" u32 func_00168b38(...);

u32 func_0023f988(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_0023f988");


extern "C" u32 func_00168b38(...);

u32 func_0023f9c8(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_0023f9c8");


extern "C" u32 func_00170518(...);


extern "C" u32 func_00181500(...);


extern "C" u32 func_00106450(...);

void func_00242048(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_00242048");


extern "C" u32 func_001058e8(...);


extern "C" u32 func_001058e8(...);


extern "C" u32 func_001058e8(...);
extern "C" u32 func_00242560(...);


extern "C" u32 func_002ba2e8(...);


extern "C" u32 func_002ba9c0(...);
extern "C" u32 func_002bd6d0(...);
extern "C" u32 func_002ef7b8(...);


extern "C" u32 func_002ba8e8(...);


extern "C" u32 func_001058e8(...);


extern "C" u32 func_001058e8(...);


extern "C" u32 func_001058e8(...);


extern "C" u32 func_001058e8(...);


extern "C" u32 func_001058e8(...);


extern "C" u32 func_001058e8(...);


extern "C" u32 func_001058e8(...);


extern "C" u32 func_001058e8(...);


extern "C" u32 func_001058e8(...);


extern "C" u32 func_002431c0(...);


extern u8 D_00371b30;
extern u8 D_00371bc0;

u32 func_00246868(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_00246868");


extern "C" u32 func_00246840(...);
extern u8 D_0035eee0;


extern u8 D_01dae6c0;


extern u8 D_0035ef78;


extern "C" u32 func_002577b0(...);
extern "C" u32 func_00257910(...);

u32 func_00257780(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_00257780");


extern "C" u32 func_001058e8(...);


extern "C" u32 func_00192c90(...);


extern "C" u32 func_002817b8(...);


extern "C" u32 func_00257770(...);

u32 func_00262f18(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_00262f18");


extern "C" u32 func_00257770(...);


extern "C" u32 func_00106420(...);

void func_002643d0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_002643d0");


extern "C" u32 func_001a3168(...);


extern "C" u32 func_00106420(...);

void func_0026eda8(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_0026eda8");


extern u8 D_0035f158;


extern "C" u32 func_002766b0(...);


extern "C" u32 func_00106420(...);

void func_00277070(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_00277070");


extern "C" u32 func_00106450(...);

void func_0027c508(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_0027c508");


extern "C" u32 func_001058e8(...);


extern "C" u32 func_00287bd0(...);


extern "C" u32 func_00139d78(...);
extern "C" u32 func_0023d820(...);
extern "C" u32 func_00287dc0(...);

u32 func_002763c8(u32 a0) asm("func_002763c8");


extern "C" u32 func_0023fa08(...);
extern "C" u32 func_002537c8(...);
extern u8 D_0035f3a8;

u32 duplicate_unplaced_00276410(u32 a0, u32 a1);


extern "C" u32 func_00276608(...);
extern "C" u32 func_00276620(...);

u32 duplicate_unplaced_00276638(u32 a0);


extern "C" u32 func_00192048(...);
extern "C" u32 func_00276c88(...);

u32 duplicate_unplaced_00276c50(u32 a0, u32 a1);


extern "C" u32 func_00139510(...);
extern "C" u32 func_00276df8(...);

void func_00276e28(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_00276e28");


extern "C" u32 func_00139510(...);
extern "C" u32 func_00139d78(...);

void func_00276f60(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_00276f60");


extern "C" u32 func_00257770(...);
extern "C" u32 func_0028dac8(...);

u32 duplicate_unplaced_0027b4e8(u32 a0, u32 a1);


extern "C" u32 func_0027d2e8(...);
extern "C" u32 func_00287bc0(...);

u32 func_0027c540(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_0027c540");


extern "C" u32 func_0027d350(...);
extern "C" u32 func_00287bc0(...);

extern "C" u32 func_00139d78(...);
extern "C" u32 func_0027d008(...);
extern "C" u32 func_0027d540(...);
extern "C" u32 func_0027d5d8(...);
extern "C" u32 func_0027d810(...);
extern "C" u32 func_0028b040(...);

u32 duplicate_unplaced_0027d598(u32 a0);


extern "C" u32 func_00287db0(...);
extern "C" u32 func_0028dac8(...);

u32 func_0027dbd8(u32 a0, u32 a1) asm("func_0027dbd8");


extern "C" u32 func_002800d0(...) asm("_ZN2Tz9GumiPause12UpdateAdviceEv");
extern "C" u32 func_00280148(...);
extern "C" u32 func_00287cc0(...);

u32 duplicate_unplaced_0027f9b0(u32 a0);


extern "C" u32 func_0028dac8(...);

u32 duplicate_unplaced_00280240(u32 a0, u32 a1);


extern "C" u32 func_0028da70(...);

u32 duplicate_unplaced_002803e0(u32 a0, u32 a1);


extern "C" u32 func_0023fa08(...);
extern "C" u32 func_002537c8(...);
extern u8 D_0035f3a8;

u32 duplicate_unplaced_002806c8(u32 a0, u32 a1);


extern "C" u32 func_00280ef8(...);
extern "C" u32 func_00281008(...);

u32 duplicate_unplaced_002810c8(u32 a0, u32 a1);


extern "C" u32 func_0016e920(...);
extern "C" u32 func_00281238(...);

u32 duplicate_unplaced_00281108(u32 a0);


extern "C" u32 func_001a3570(...);
extern "C" u32 func_001a36e0(...);
extern "C" u32 func_002812e0(...);

u32 func_00281340(u32 a0) asm("func_00281340");


extern "C" u32 func_00170320(...);
extern "C" u32 func_0023f900(...);
extern "C" u32 func_0023fad0(...);
extern "C" u32 func_00293d80(...);
extern "C" u32 func_00293eb0(...);
extern "C" u32 func_00293db8(...) asm("_ZN2Tz6JMData10CacheAllocEiPKc");

u32 func_00285460(u32 a0) asm("func_00285460");


extern "C" u32 func_0023fa08(...);
extern "C" u32 func_002537c8(...);

u32 duplicate_unplaced_00288610(u32 a0, u32 a1);


extern "C" u32 func_00288ca8(...);


extern "C" u32 func_0028b870(...);
extern u8 D_0035f3a0;

u32 duplicate_unplaced_0028b750(u32 a0);


extern "C" u32 func_0028b870(...);
extern u8 D_0035f3a0;

u32 duplicate_unplaced_0028b788(u32 a0);


extern "C" u32 func_0023f820(...);
extern "C" u32 func_0028b8a0(...);
extern u8 D_0035f3a0;

u32 duplicate_unplaced_0028b7f8(u32 a0);


extern "C" u32 func_00106420(...);
extern "C" u32 func_0023f820(...);
extern "C" u32 func_0028b8a0(...);
extern u8 D_0035f3a0;

u32 duplicate_unplaced_0028b830(u32 a0);


extern "C" u32 func_00139510(...);
extern "C" u32 func_00139d78(...);

u32 duplicate_unplaced_0028c170(u32 a0);


extern "C" u32 func_00239700(...) asm("_ZN2YI8SEQUENCEC1Ev");
extern "C" u32 func_0028d188(...);
extern u8 D_00347e60;
extern u8 D_0035f420;

u32 duplicate_unplaced_0028d0f8(u32 a0);


extern "C" u32 func_00239700(...) asm("_ZN2YI8SEQUENCEC1Ev");
extern "C" u32 func_0028d188(...);
extern u8 D_00347e60;
extern u8 D_0035f420;

u32 duplicate_unplaced_0028d140(u32 a0);


extern "C" u32 func_00138d48(...);
extern "C" u32 func_001395f8(...);

u32 duplicate_unplaced_0028d708(u32 a0);


extern "C" u32 func_00139d78(...);


extern "C" u32 func_00139d78(...);


extern "C" u32 func_00139d78(...);


extern "C" u32 func_00139d78(...);
extern "C" u32 func_00239d30(...);

u32 duplicate_unplaced_0028e6c0(u32 a0, u32 a1);


extern "C" u32 func_00139d78(...);


extern "C" u32 func_00139d78(...);


extern "C" u32 func_00139d78(...);


extern "C" u32 func_00139d78(...);


extern "C" u32 func_00192048(...);
extern "C" u32 func_0028fb68(...);

u32 duplicate_unplaced_0028fb28(u32 a0, u32 a1);


extern "C" u32 func_00106420(...);
extern "C" u32 func_002908f0(...);
extern u8 D_0035f4b0;

u32 duplicate_unplaced_00290870(u32 a0);


extern "C" u32 func_00170518(...);


u32 func_00292520(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_00292520");


extern "C" u32 func_00292690(...) asm("_ZN2Tz8LoadData5ClearEi");


extern "C" u32 func_00290948(...);
extern "C" u32 func_002941a8(...) asm("_ZN2Tz6JmInfo11isWorldOpenEPKNS_15JmWorldDataInfoE");

extern "C" u32 func_00181500(...);


extern "C" u32 func_001d44d8(...);
extern "C" u32 func_001d4550(...);


extern "C" u32 func_00274ac8(...) asm("_ZN2Tz6Jiminy13JmCommonLeaveEv");
extern "C" u32 func_00287bc0(...);
extern "C" u32 func_00294ea8(...);

u32 func_002945a8(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_002945a8");


extern "C" u32 func_002953c8(...);

u32 duplicate_unplaced_002954e0(u32 a0);


extern "C" u32 func_00295158(...);

u32 duplicate_unplaced_002956c0(u32 a0);


extern "C" u32 func_00274ac8(...) asm("_ZN2Tz6Jiminy13JmCommonLeaveEv");
extern "C" u32 func_00287bc0(...);
extern "C" u32 func_00296ab0(...);

u32 func_00295868(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_00295868");


extern "C" u32 func_00103570(...);
extern "C" u32 func_001063c0(...);

u32 duplicate_unplaced_00296fa0(u32 a0, u32 a1);


extern "C" u32 func_00106420(...);

void func_00296fd0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_00296fd0");




extern "C" u32 func_002766d0(...);
extern "C" u32 func_0028dac8(...);

u32 duplicate_unplaced_00299238(u32 a0, u32 a1);


extern "C" u32 func_00276c50(...);
extern "C" u32 func_00287bc0(...);

u32 duplicate_unplaced_00299260(u32 a0, u32 a1);


extern "C" u32 func_00274ac8(...) asm("_ZN2Tz6Jiminy13JmCommonLeaveEv");
extern "C" u32 func_00287bc0(...);
extern "C" u32 func_0029a310(...);

u32 func_002995a8(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_002995a8");




extern "C" u32 func_002766d0(...);
extern "C" u32 func_0028dac8(...);

u32 duplicate_unplaced_0029df98(u32 a0, u32 a1);


extern "C" u32 func_002766d0(...);
extern "C" u32 func_0028dac8(...);

u32 duplicate_unplaced_0029e050(u32 a0, u32 a1);


extern "C" u32 func_00139d78(...);
extern "C" u32 func_002766d0(...);

u32 duplicate_unplaced_0029e0d0(u32 a0);


extern "C" u32 func_002766d0(...);
extern "C" u32 func_0028da70(...);

u32 duplicate_unplaced_0029e148(u32 a0, u32 a1);


extern "C" u32 func_002766d0(...);
extern "C" u32 func_0028dac8(...);

u32 duplicate_unplaced_0029e258(u32 a0, u32 a1);


extern "C" u32 func_00139d78(...);
extern "C" u32 func_002766d0(...);

u32 duplicate_unplaced_0029e2f8(u32 a0);


extern "C" u32 func_002766d0(...);
extern "C" u32 func_0028da70(...);

u32 duplicate_unplaced_0029e3a0(u32 a0, u32 a1);


extern "C" u32 func_00276c50(...);
extern "C" u32 func_00287bc0(...);

u32 duplicate_unplaced_002a03a0(u32 a0, u32 a1);


extern "C" u32 func_00139510(...);
extern "C" u32 func_00139d78(...);


extern "C" u32 func_00294000(...) asm("_ZN2Tz6JmInfo7GetDataEi");
extern "C" u32 func_001d9d48(...);


extern "C" u32 func_00276c50(...);
extern "C" u32 func_00287bc0(...);

u32 duplicate_unplaced_002a65a0(u32 a0, u32 a1);


extern "C" u32 func_001058e8(...);


u32 func_002b2338(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_002b2338");


extern "C" u32 func_002ac678(...);
extern "C" u32 func_002b23e0(...);

u32 duplicate_unplaced_002b3420(u32 a0);


extern u8 D_00374cd0;


extern "C" u32 func_002b56e8(...);
extern "C" u32 func_002b5978(...);

u32 func_002b5a20(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_002b5a20");



extern u8 D_00374d30;


extern "C" u32 func_002b7fbc(...);
extern "C" u32 func_002b9b78(...);
extern "C" u32 func_002b9ed0(...);
extern "C" u32 func_002ba390(...);
extern "C" u32 func_002bce40(...);
extern "C" u32 func_002bce50(...);
extern u8 D_01e2a410;

u32 duplicate_unplaced_002b9e80(u32 a0);


extern "C" u32 func_002baf38(...);


extern "C" u32 func_002ba2e8(...);


extern "C" u32 func_002b6c04(...);
extern u8 D_01e2a400;


extern "C" u32 func_002bb228(...);
extern "C" u32 func_002bc158(...);

u32 func_002bc1e8(u32 a0, u32 a1) asm("func_002bc1e8");


extern "C" u32 func_002bb270(...);
extern "C" u32 func_002bc158(...);

u32 func_002bc238(u32 a0, u32 a1) asm("func_002bc238");


extern "C" u32 func_002bbda0(...);

u32 func_002bc3f0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_002bc3f0");


extern "C" u32 func_002bb510(...);
extern "C" u32 func_002bbda0(...);

u32 func_002bc420(u32 a0) asm("func_002bc420");


extern "C" u32 func_002bb0c8(...);


extern "C" u32 func_002b6ab8(...);
extern "C" u32 func_002b6adc(...);

u32 duplicate_unplaced_002bd188(u32 a0, u32 a1);


extern "C" u32 func_002bd2a8(...);


extern "C" u32 func_00105110(...);
extern "C" u32 func_002bdac8(...);

void func_002be3c8(u32 a0) asm("func_002be3c8");


extern "C" u32 func_0016fa98(...);
extern "C" u32 func_002c23d8(...);
extern "C" u32 func_002f17e0(...);


extern "C" u32 func_001b6d70(...);
extern "C" u32 func_002bf650(...);

u32 duplicate_unplaced_002bf618(u32 a0, u32 a1);


extern "C" u32 func_00105110(...);
extern u8 D_00361da8;


extern "C" u32 func_002c6218(...);
extern "C" u32 func_002c6280(...);

u32 duplicate_unplaced_002c0700(u32 a0, u32 a1);


extern "C" u32 func_002c14a8(...);

void func_002c17a0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_002c17a0");


extern "C" u32 func_0016bd60(...);


extern "C" u32 func_0016c008(...);


extern "C" u32 func_00103748(...);
extern "C" u32 func_00170c00(...);
extern "C" u32 func_00274f50(...);
extern "C" u32 func_00288b78(...);
extern "C" u32 func_0028c4f8(...);
extern "C" u32 func_0028ca78(...);

u32 func_002c2458(u32 a0) asm("func_002c2458");


extern "C" u32 func_002c5508(...);
extern u8 D_00361c40;


extern "C" u32 func_001980d0(...);
extern u8 D_00361ca0;


extern "C" u32 func_001984b8(...);
extern "C" u32 func_001dc920(...);

u32 func_002c56d0(u32 a0) asm("func_002c56d0");


extern "C" u32 func_0016bd60(...);
extern "C" u32 func_001780d8(...);
extern "C" u32 func_002c6c60(...);

u32 duplicate_unplaced_002c58c8(u32 a0, u32 a1);


extern "C" u32 func_001b9c28(...);


extern "C" u32 func_001b9c58(...);


extern "C" u32 func_002c8550(...);

void func_002c8648(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_002c8648");


extern u8 D_003757e0;


void func_002ca0a8(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_002ca0a8");


extern "C" u32 func_00105110(...);
extern u8 D_00361da8;


extern "C" u32 func_002c6218(...);
extern "C" u32 func_002c6280(...);

u32 duplicate_unplaced_002cb160(u32 a0, u32 a1);


extern "C" u32 func_00105110(...);
extern "C" u32 func_002cf3f8(...);
extern u8 D_00361f70;

u32 duplicate_unplaced_002ceaa8(u32 a0);


u32 func_002ceb08(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_002ceb08");


extern "C" u32 func_002cec08(...);

u32 func_002cec20(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_002cec20");


extern "C" u32 func_002cec08(...);


extern "C" u32 func_0019f9a8(...);
extern "C" u32 func_001c0248(...);
extern "C" u32 func_00319fb0(...);
extern u8 D_0034ee08;

u32 duplicate_unplaced_002cff98(u32 a0);


extern "C" u32 func_0019f9a8(...);
extern "C" u32 func_001c0248(...);
extern "C" u32 func_00319fb0(...);
extern u8 D_0034ee08;

u32 duplicate_unplaced_002cffe0(u32 a0);


extern "C" u32 func_00105110(...);
extern "C" u32 func_0019f9a8(...);
extern "C" u32 func_001c0248(...);
extern "C" u32 func_00319fb0(...);
extern u8 D_0034ee08;

u32 duplicate_unplaced_002d0028(u32 a0);


extern "C" u32 func_00186020(...);
extern "C" u32 func_001dc818(...);

u32 func_002d0d48(u32 a0) asm("func_002d0d48");


extern "C" u32 func_002cea28(...);
extern u8 D_00362158;


extern "C" u32 func_002cea28(...);
extern u8 D_00362158;


extern "C" u32 func_00105110(...);
extern "C" u32 func_002cea28(...);
extern u8 D_00362158;

u32 duplicate_unplaced_002d1840(u32 a0);


extern "C" u32 func_002d1f40(...);


extern u8 D_00362230;


extern u8 D_00362230;


extern "C" u32 func_00105110(...);
extern u8 D_00362230;

u32 duplicate_unplaced_002d2a58(u32 a0);


extern "C" u32 func_002e7328(...);
extern u8 D_003621a0;

u32 duplicate_unplaced_002d47a8(u32 a0);


extern "C" u32 func_002e7328(...);
extern u8 D_003621a0;

u32 duplicate_unplaced_002d47e8(u32 a0);


extern "C" u32 func_00105110(...);
extern "C" u32 func_002e7328(...);
extern u8 D_003621a0;

u32 duplicate_unplaced_002d4828(u32 a0);


extern "C" u32 func_001c0cd8(...);

u32 func_002d5c98(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_002d5c98");


extern "C" u32 func_002e7328(...);
extern u8 D_00362428;

u32 duplicate_unplaced_002d5dd0(u32 a0);


extern "C" u32 func_00105110(...);
extern "C" u32 func_002e7328(...);
extern u8 D_00362428;

u32 duplicate_unplaced_002d5e10(u32 a0);


extern "C" u32 func_002cfeb0(...);
extern u8 D_00362398;


extern "C" u32 func_002cfeb0(...);
extern u8 D_00362398;


extern u8 D_00362398;


extern u8 D_00362398;


extern "C" u32 func_00105110(...);
extern u8 D_00362398;

u32 duplicate_unplaced_002d6af0(u32 a0);


extern u8 D_00362858;


extern "C" u32 func_00105110(...);
extern u8 D_00362858;

u32 duplicate_unplaced_002dab30(u32 a0);


extern u8 D_003627c8;


extern u8 D_003627c8;


extern "C" u32 func_00105110(...);
extern u8 D_003627c8;

u32 duplicate_unplaced_002dad40(u32 a0);


extern "C" u32 func_002cfeb0(...);
extern u8 D_00362738;


extern "C" u32 func_002cfeb0(...);
extern u8 D_00362738;


extern u8 D_00362738;


extern u8 D_00362738;


extern "C" u32 func_00105110(...);
extern u8 D_00362738;

u32 duplicate_unplaced_002db580(u32 a0);


extern "C" u32 func_002db4b0(...);
extern u8 D_003626a8;


extern "C" u32 func_002db4b0(...);
extern u8 D_003626a8;


extern u8 D_003626a8;


extern u8 D_003626a8;


extern "C" u32 func_00105110(...);
extern u8 D_003626a8;

u32 duplicate_unplaced_002db730(u32 a0);


extern "C" u32 func_0016a9a0(...);
extern "C" u32 func_002db610(...);

u32 duplicate_unplaced_002db7d0(u32 a0, u32 a1);


extern "C" u32 func_002e7328(...);
extern u8 D_00362908;

u32 duplicate_unplaced_002db8a8(u32 a0);


extern "C" u32 func_002e7328(...);
extern u8 D_00362908;

u32 duplicate_unplaced_002db8e8(u32 a0);


extern "C" u32 func_00105110(...);
extern "C" u32 func_002e7328(...);
extern u8 D_00362908;

u32 duplicate_unplaced_002db928(u32 a0);


extern "C" u32 func_002cea28(...);
extern "C" u32 func_002e4a90(...);
extern u8 D_003629e8;

u32 duplicate_unplaced_002dc708(u32 a0);


extern "C" u32 func_002cea28(...);
extern "C" u32 func_002e4a90(...);
extern u8 D_003629e8;

u32 duplicate_unplaced_002dc748(u32 a0);


extern "C" u32 func_00105110(...);
extern "C" u32 func_002cea28(...);
extern "C" u32 func_002e4a90(...);
extern u8 D_003629e8;

u32 duplicate_unplaced_002dc788(u32 a0);


extern "C" u32 func_002d0ea8(...);
extern u8 D_00362a20;


extern "C" u32 func_002d0ea8(...);
extern u8 D_00362a20;


extern u8 D_00362b68;


extern "C" u32 func_00105110(...);
extern u8 D_00362b68;

u32 duplicate_unplaced_002ddb80(u32 a0);


extern "C" u32 func_002d00a0(...);


u32 func_002de738(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_002de738");


extern "C" u32 func_002cfeb0(...);
extern u8 D_00362ad8;


extern "C" u32 func_002cfeb0(...);
extern u8 D_00362ad8;


extern u8 D_00362ad8;


extern u8 D_00362ad8;


extern "C" u32 func_00105110(...);
extern u8 D_00362ad8;

u32 duplicate_unplaced_002de810(u32 a0);


extern "C" u32 func_002dc7e8(...);


extern "C" u32 func_001050d8(...);
extern "C" u32 func_002e0d28(...);

u32 duplicate_unplaced_002e0bb0(u32 a0, u32 a1);


extern "C" u32 func_002e34d8(...);

u32 func_002e0fe8(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_002e0fe8");


extern "C" u32 func_001050d8(...);
extern "C" u32 func_002e20d8(...);

u32 duplicate_unplaced_002e1f40(u32 a0, u32 a1);


extern "C" u32 func_0018b1b8(...);


extern "C" u32 func_0018ac80(...);


extern "C" u32 func_0018aca8(...);


extern "C" u32 func_002e7670(...);
extern "C" u32 func_002e76b0(...);
extern "C" u32 func_002e77a8(...);

u32 duplicate_unplaced_002e7738(u32 a0);


extern "C" u32 func_002e7670(...);
extern "C" u32 func_002e76b0(...);
extern "C" u32 func_002e77a8(...);

u32 duplicate_unplaced_002e7768(u32 a0);


extern "C" u32 func_001058e8(...);


extern "C" u32 func_0016bd60(...);


extern "C" u32 func_0016bd60(...);


extern "C" u32 func_002e9fa8(...);


extern "C" u32 func_0016c5a0(...);


extern "C" u32 func_00190878(...);


extern "C" u32 func_00111040(...);


extern "C" u32 func_001124e8(...);


extern "C" u32 func_00194648(...);


extern "C" u32 func_00194668(...);


extern "C" u32 func_0016bd60(...);


extern "C" u32 func_0016bd60(...);


extern "C" u32 func_0016bd60(...);



extern "C" u32 func_0016bd60(...);


extern "C" u32 func_002e98b0(...);


extern "C" u32 func_00112760(...);


extern "C" u32 func_0010f8f0(...);


extern "C" u32 func_0016bd60(...);


extern "C" u32 func_0016bd60(...);
extern "C" u32 func_0017c430(...);

u32 duplicate_unplaced_002eaaf0(u32 a0, u32 a1);


extern "C" u32 func_0016bd60(...);
extern "C" u32 func_0017c430(...);

u32 duplicate_unplaced_002eb4b0(u32 a0, u32 a1);


extern "C" u32 func_001ad330(...);
extern "C" u32 func_002edf28(...);
extern u8 D_00363828;

u32 duplicate_unplaced_002ee5d8(u32 a0, u32 a1);


extern "C" u32 func_00102080(...);
extern "C" u32 func_00102210(...);
extern "C" u32 func_001031b0(...);
extern "C" u32 func_002ee840(...);

u32 duplicate_unplaced_002ee778(u32 a0);


extern "C" u32 func_0014c9d8(...);
extern "C" u32 func_0014df88(...);
extern "C" u32 func_0014e0d8(...);

u32 func_002ee7c0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_002ee7c0");


extern "C" u32 func_0014df98(...);

u32 func_002ee808(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_002ee808");


extern "C" u32 func_002eefa8(...);


extern "C" u32 func_002efa98(...);
extern "C" u32 func_002efb08(...);

u32 duplicate_unplaced_002efb60(u32 a0);


extern "C" u32 func_0016bd60(...);
extern "C" u32 func_0017c430(...);

u32 duplicate_unplaced_002f05d8(u32 a0, u32 a1);


extern "C" u32 func_0010c7e8(...);
extern "C" u32 func_00117808(...);

u32 duplicate_unplaced_002f0708(u32 a0, u32 a1);


extern "C" u32 func_0010c7e8(...);
extern "C" u32 func_00119e60(...);

u32 duplicate_unplaced_002f08d8(u32 a0, u32 a1);


extern "C" u32 func_0010c7e8(...);
extern "C" u32 func_00119830(...);

u32 duplicate_unplaced_002f09d8(u32 a0, u32 a1);


extern "C" u32 func_0010c7e8(...);
extern "C" u32 func_00117aa8(...);

u32 duplicate_unplaced_002f0a68(u32 a0, u32 a1);


extern "C" u32 func_0010c7e8(...);
extern "C" u32 func_0011a408(...);

u32 duplicate_unplaced_002f0c58(u32 a0);


extern "C" u32 func_0010c7e8(...);
extern "C" u32 func_00118d10(...);

u32 duplicate_unplaced_002f0da8(u32 a0, u32 a1);


extern "C" u32 func_0010c7e8(...);
extern "C" u32 func_00114438(...);

u32 duplicate_unplaced_002f0e60(u32 a0, u32 a1);


extern "C" u32 func_0010eed8(...);


extern "C" u32 func_00112c58(...);


extern "C" u32 func_001133f8(...);


extern "C" u32 func_0010c7b0(...);
extern "C" u32 func_00136158(...);

u32 duplicate_unplaced_002f1130(u32 a0, u32 a1);


extern "C" u32 func_002e9fb8(...);


extern "C" u32 func_0010c7e8(...);
extern "C" u32 func_0011a918(...);

u32 duplicate_unplaced_002f1230(u32 a0, u32 a1);


extern "C" u32 func_00170950(...);

void func_002f1850(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_002f1850");


extern "C" u32 func_001dc920(...);

void func_002f1990(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_002f1990");


extern "C" u32 func_001dc840(...);

void func_002f19c8(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_002f19c8");


extern "C" u32 func_001dc978(...);

void func_002f1a00(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_002f1a00");


extern "C" u32 func_003037b0(...);


extern "C" u32 func_00302e90(...);

u32 func_00304b60(u32 a0, u32 a1) asm("func_00304b60");


extern "C" u32 func_0030e548(...);


extern "C" u32 func_003167f8(...);
extern u8 D_00367860;


extern "C" u32 func_003167f8(...);
extern u8 D_00367860;


extern "C" u32 func_00106420(...);
extern "C" u32 func_003167f8(...);
extern u8 D_00367860;

u32 duplicate_unplaced_00315678(u32 a0);


extern "C" u32 func_003167f8(...);
extern u8 D_00367848;


extern "C" u32 func_003167f8(...);
extern u8 D_00367848;


extern "C" u32 func_00106420(...);
extern "C" u32 func_003167f8(...);
extern u8 D_00367848;

u32 duplicate_unplaced_00315700(u32 a0);


extern "C" u32 func_003155e8(...);
extern u8 D_00367818;


extern "C" u32 func_003155e8(...);
extern u8 D_00367818;


extern "C" u32 func_00106420(...);
extern "C" u32 func_003155e8(...);
extern u8 D_00367818;

u32 duplicate_unplaced_003157b8(u32 a0);


extern u8 D_003677e8;


extern "C" u32 func_00106420(...);
extern u8 D_003677e8;

u32 duplicate_unplaced_00315840(u32 a0);


extern u8 D_003677b8;


extern "C" u32 func_00106420(...);
extern u8 D_003677b8;

u32 duplicate_unplaced_003158c8(u32 a0);


extern "C" u32 func_00106420(...);
extern u8 D_00367910;


extern "C" u32 func_003167f8(...);
extern u8 D_003678f8;


extern "C" u32 func_003167f8(...);
extern u8 D_003678f8;


extern "C" u32 func_00106420(...);
extern "C" u32 func_003167f8(...);
extern u8 D_003678f8;

u32 duplicate_unplaced_00316890(u32 a0);


extern "C" u32 func_00316c68(...);
extern u8 D_003168d8;
extern u8 D_01e4c7a0;


extern "C" u32 func_001b0188(...);
extern u8 D_00350e60;


extern "C" u32 func_0019fb48(...);


extern u8 D_00347e60;
extern u8 D_00347f98;


extern "C" u32 func_0031a840(...);
extern u8 D_00347e60;

u32 duplicate_unplaced_0031a508(u32 a0);


extern "C" u32 func_002361d0(...);
extern u8 D_00347e80;
extern u8 D_00347f98;


extern u8 D_00347e60;
extern u8 D_00347f98;


extern u8 D_00347e60;
extern u8 D_00347f98;


extern u8 D_00347e60;
extern u8 D_00347f98;


extern u8 D_00347e60;
extern u8 D_00347f98;


extern "C" u32 func_0031baa8(...);
extern u8 D_00349d90;


extern u8 D_00347e60;
extern u8 D_00347f98;


extern "C" u32 func_00138988(...);
extern "C" u32 func_00138de0(...);
extern "C" u32 func_0014b9a8(...);

u32 duplicate_unplaced_0031c068(u32 a0);


extern "C" u32 func_0031a840(...);
extern u8 D_00347e60;

u32 duplicate_unplaced_0031c8e8(u32 a0);


extern "C" u32 func_0031cd50(...);
extern u8 D_00347e40;


extern "C" u32 func_0031cd50(...);
extern u8 D_00347e40;


extern "C" u32 func_002369f0(...);
extern "C" u32 func_0023c098(...);
extern u8 D_00347f98;
extern u8 D_0035eb98;

u32 duplicate_unplaced_0031cd90(u32 a0);


extern "C" u32 func_002369f0(...);
extern "C" u32 func_0023c098(...);
extern "C" u32 func_0023ee68(...);
extern u8 D_00347f98;
extern u8 D_0035eb98;

u32 duplicate_unplaced_0031cdd8(u32 a0);


extern "C" u32 func_002369f0(...);
extern "C" u32 func_0023c098(...);
extern "C" u32 func_0023ee68(...);
extern u8 D_00347f98;
extern u8 D_0035eb98;

u32 duplicate_unplaced_0031ce70(u32 a0);


extern u8 D_00347e60;
extern u8 D_00347f98;


extern u8 D_00347e60;
extern u8 D_00347f98;


extern "C" u32 func_00106420(...);
extern u8 D_0034e8a8;

u32 duplicate_unplaced_0031e630(u32 a0);


extern u8 D_0034e8a8;


extern "C" u32 func_001b0188(...);
extern u8 D_00350e48;


extern "C" u32 func_0019f9a8(...);
extern "C" u32 func_001c0248(...);
extern "C" u32 func_00319fb0(...);
extern u8 D_0034ee08;

u32 duplicate_unplaced_0031eb68(u32 a0);


extern "C" u32 func_00105110(...);
extern "C" u32 func_0019f9a8(...);
extern "C" u32 func_001c0248(...);
extern "C" u32 func_00319fb0(...);
extern u8 D_0034ee08;

u32 duplicate_unplaced_0031ebb0(u32 a0);


extern "C" u32 func_00105110(...);
extern "C" u32 func_0016a358(...);
extern u8 D_00350388;

u32 duplicate_unplaced_0031f008(u32 a0);


extern "C" u32 func_00105110(...);
extern "C" u32 func_0018d420(...);
extern u8 D_00350778;

u32 duplicate_unplaced_0031f238(u32 a0);


extern "C" u32 func_00105110(...);
extern "C" u32 func_0019f9a8(...);
extern "C" u32 func_001c0248(...);
extern "C" u32 func_00319fb0(...);
extern u8 D_0034ee08;

u32 duplicate_unplaced_0031f340(u32 a0);


extern "C" u32 func_00105110(...);
extern "C" u32 func_001ac5b8(...);
extern u8 D_00350bf0;

u32 duplicate_unplaced_0031f4b8(u32 a0);


extern "C" u32 func_00105110(...);
extern "C" u32 func_0031fec0(...);
extern u8 D_00351100;

u32 duplicate_unplaced_0031fe88(u32 a0);


extern "C" u32 func_00105110(...);
extern "C" u32 func_0031ffc0(...);
extern u8 D_00352878;

u32 duplicate_unplaced_0031ff88(u32 a0);


extern "C" u32 func_00106420(...);
extern "C" u32 func_001b0188(...);
extern u8 D_00350e60;

u32 duplicate_unplaced_00320050(u32 a0);


extern "C" u32 func_00105110(...);
extern "C" u32 func_0031fec0(...);
extern u8 D_00351100;

u32 duplicate_unplaced_00320118(u32 a0);


extern "C" u32 func_00105110(...);
extern "C" u32 func_0019f9a8(...);
extern "C" u32 func_001c0248(...);
extern "C" u32 func_00319fb0(...);
extern u8 D_0034ee08;

u32 duplicate_unplaced_00320198(u32 a0);


extern "C" u32 func_00105110(...);
extern "C" u32 func_0019f9a8(...);
extern "C" u32 func_001c0248(...);
extern "C" u32 func_00319fb0(...);
extern u8 D_0034ee08;

u32 duplicate_unplaced_00320290(u32 a0);


extern "C" u32 func_00106420(...);
extern u8 D_00351228;

u32 duplicate_unplaced_003206f0(u32 a0);


extern "C" u32 func_00106420(...);
extern u8 D_00351228;

u32 duplicate_unplaced_00320768(u32 a0);


extern "C" u32 func_00105110(...);
extern "C" u32 func_0016a358(...);
extern u8 D_003512e8;

u32 duplicate_unplaced_003207c8(u32 a0);


extern "C" u32 func_00105110(...);
extern "C" u32 func_0019f9a8(...);
extern "C" u32 func_001c0248(...);
extern "C" u32 func_00319fb0(...);
extern u8 D_0034ee08;

u32 duplicate_unplaced_00320bc0(u32 a0);


extern "C" u32 func_00105110(...);
extern "C" u32 func_0031ffc0(...);
extern u8 D_00352878;

u32 duplicate_unplaced_00320c80(u32 a0);


extern "C" u32 func_00106420(...);
extern u8 D_00352560;

u32 duplicate_unplaced_00321648(u32 a0);


extern "C" u32 func_0019f9a8(...);
extern "C" u32 func_001c0248(...);
extern "C" u32 func_00319fb0(...);
extern u8 D_0034ee08;

u32 duplicate_unplaced_003218c8(u32 a0);


extern "C" u32 func_00105110(...);
extern "C" u32 func_0019f9a8(...);
extern "C" u32 func_001c0248(...);
extern "C" u32 func_00319fb0(...);
extern u8 D_0034ee08;

u32 duplicate_unplaced_00321910(u32 a0);


extern "C" u32 func_00105110(...);
extern u8 D_00352a20;


extern "C" u32 func_00105110(...);
extern u8 D_00352a20;


extern "C" u32 func_00105110(...);
extern u8 D_00352a20;


extern "C" u32 func_00105110(...);
extern u8 D_00352a20;


extern u8 D_00347e60;
extern u8 D_00347f98;


extern u8 D_00347e60;
extern u8 D_00347f98;


extern "C" u32 func_00108698(...);
extern "C" u32 func_001ddd10(...);

u32 duplicate_unplaced_00322ba8(u32 a0);


extern "C" u32 func_002369f0(...);
extern "C" u32 func_0023c098(...);
extern u8 D_00347f98;
extern u8 D_0035eb98;

u32 duplicate_unplaced_00322d70(u32 a0);


extern "C" u32 func_002369f0(...);
extern "C" u32 func_0023c098(...);
extern "C" u32 func_0023ee68(...);
extern u8 D_00347f98;
extern u8 D_0035eb98;

u32 duplicate_unplaced_00322db8(u32 a0);


extern u8 D_00347e60;
extern u8 D_00347f98;


extern u8 D_00347e60;
extern u8 D_00347f98;


extern u8 D_00347e60;
extern u8 D_00347f98;


extern u8 D_00347e60;
extern u8 D_00347f98;


extern "C" u32 func_0019f9a8(...);
extern "C" u32 func_001c0248(...);
extern "C" u32 func_00319fb0(...);
extern u8 D_0034ee08;

u32 duplicate_unplaced_00324938(u32 a0);


extern "C" u32 func_00105110(...);
extern "C" u32 func_0019f9a8(...);
extern "C" u32 func_001c0248(...);
extern "C" u32 func_00319fb0(...);
extern u8 D_0034ee08;

u32 duplicate_unplaced_00324980(u32 a0);


extern "C" u32 func_00105110(...);
extern "C" u32 func_0019f9a8(...);
extern "C" u32 func_001c0248(...);
extern "C" u32 func_00319fb0(...);
extern u8 D_0034ee08;

u32 duplicate_unplaced_00324b08(u32 a0);


extern "C" u32 func_00105110(...);
extern "C" u32 func_002eec58(...);
extern u8 D_00361bf0;

u32 duplicate_unplaced_00324b78(u32 a0);


extern "C" u32 func_00105110(...);
extern u8 D_00361da8;


extern "C" u32 func_00105110(...);
extern "C" u32 func_002d0f38(...);
extern u8 D_003622c0;

u32 duplicate_unplaced_00325408(u32 a0);


extern "C" u32 func_00105110(...);
extern "C" u32 func_002d0f38(...);
extern u8 D_00362a20;

u32 duplicate_unplaced_00325550(u32 a0);


extern "C" u32 func_002dea80(...);
extern u8 D_00362cc8;


extern "C" u32 func_00106420(...);
extern "C" u32 func_002dea80(...);
extern u8 D_00362cc8;

u32 duplicate_unplaced_003255b8(u32 a0);


extern "C" u32 func_00106420(...);
extern "C" u32 func_002dea80(...);
extern u8 D_00362c70;

u32 duplicate_unplaced_00325618(u32 a0);


extern "C" u32 func_00106420(...);
extern "C" u32 func_002dea80(...);
extern u8 D_00362c18;

u32 duplicate_unplaced_00325678(u32 a0);


extern "C" u32 func_002369f0(...);
extern "C" u32 func_0023c098(...);
extern u8 D_003637e0;
extern u8 D_00363880;

u32 duplicate_unplaced_00325aa0(u32 a0);


extern "C" u32 func_00106420(...);
extern "C" u32 func_002369f0(...);
extern "C" u32 func_0023c098(...);
extern u8 D_003637e0;
extern u8 D_00363880;

u32 duplicate_unplaced_00325ae8(u32 a0);


extern "C" u32 func_00106420(...);
extern "C" u32 func_002361d0(...);
extern u8 D_003637e0;
extern u8 D_003638a8;

u32 duplicate_unplaced_00325b80(u32 a0);


extern "C" u32 func_001024b0(...);
extern "C" u32 func_00106178(...);

u32 duplicate_unplaced_00102508(u32 a0);


extern u8 D_00102d10;
extern u8 D_00102dc0;
extern u8 D_0032b9a0;


extern "C" u32 func_002fde18(...);
extern u8 D_0032b9d0;
extern u8 D_0032b9d8;


extern u8 D_0032b9cc;

u32 func_00102ea0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_00102ea0");


extern u8 D_00103f68;
extern u8 D_00104018;
extern u8 D_0032ba48;


extern "C" u32 func_00104340(...);
extern u8 D_003a6b00;

u32 func_00104370(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_00104370");


extern "C" u32 func_00104340(...);
extern u8 D_003a7300;

u32 func_001043a0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_001043a0");


extern u8 D_001043e8;
extern u8 D_001044f0;
extern u8 D_0032ba90;


extern "C" u32 func_00102818(...);
extern "C" u32 func_001052a8(...);
extern u8 D_00104a48;
extern u8 D_0032b96c;
extern u8 D_003a7b00;

u32 duplicate_unplaced_00104da0(u32 a0);


extern "C" u32 func_00104da0(...);

u32 func_00104de0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_00104de0");


extern "C" u32 func_00109280(...);
extern "C" u32 func_00170320(...);
extern "C" u32 func_00170c00(...);

u32 duplicate_unplaced_001053c0(u32 a0);


extern u8 D_003a7b60;


extern u8 D_0033cb20;


extern u8 D_00105c68;
extern u8 D_00105d08;
extern u8 D_0033cb80;


extern "C" u32 func_00134450(...);

void func_00109008(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_00109008");








extern "C" u32 func_001342c8(...);
extern u8 D_00340f30;


extern "C" u32 func_001342c8(...);
extern u8 D_003a8ed0;


extern "C" u32 func_00135878(...);

f32 func_001065a8(u32,u32,u32,u32,u32,u32,u32,u32) asm("func_001065a8");

void func_0010f880(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_0010f880");


f32 duplicate_unplaced_0010f8a8(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7);


extern "C" u32 func_00112570(...);


f32 duplicate_unplaced_00112c28(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7);


f32 duplicate_unplaced_00112c38(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7);


extern "C" u32 func_0010eed8(...);
extern "C" u32 func_001c0cd8(...);
extern "C" u32 func_001c0e60(...);

void func_00114580(u32 a0) asm("func_00114580");


extern "C" u32 func_00105110(...);
extern "C" u32 func_00113668(...);
extern u8 D_003461e8;

u32 duplicate_unplaced_00114850(u32 a0);


extern "C" u32 func_00105110(...);
extern "C" u32 func_00113668(...);
extern u8 D_003464b0;

u32 duplicate_unplaced_00114968(u32 a0);


extern "C" u32 func_00105110(...);
extern "C" u32 func_00113668(...);
extern u8 D_00346658;

u32 duplicate_unplaced_00114b90(u32 a0);


extern "C" u32 func_00105110(...);
extern "C" u32 func_00113668(...);
extern u8 D_003467b8;

u32 duplicate_unplaced_00114cc8(u32 a0);


extern "C" u32 func_00105110(...);
extern "C" u32 func_00113668(...);
extern u8 D_00346960;

u32 duplicate_unplaced_00114de0(u32 a0);


extern "C" u32 func_00105110(...);
extern "C" u32 func_00113668(...);
extern u8 D_00346b08;

u32 duplicate_unplaced_00114f38(u32 a0);


extern u8 D_00346b40;
extern u8 D_00346cd8;


extern u8 D_00346b40;
extern u8 D_00346cd8;


extern "C" u32 func_00105110(...);
extern "C" u32 func_00113668(...);
extern u8 D_00346cd8;

u32 duplicate_unplaced_00115090(u32 a0);


extern u8 D_00346d10;
extern u8 D_00346e80;


extern u8 D_00346d10;
extern u8 D_00346e80;


extern "C" u32 func_00105110(...);
extern "C" u32 func_00113668(...);
extern u8 D_00346e80;

u32 duplicate_unplaced_00115290(u32 a0);


extern u8 D_00346eb8;
extern u8 D_00347050;


extern u8 D_00346eb8;
extern u8 D_00347050;


extern "C" u32 func_00105110(...);
extern "C" u32 func_00113668(...);
extern u8 D_00347050;

u32 duplicate_unplaced_001153e8(u32 a0);


extern u8 D_00347088;
extern u8 D_00347220;


extern u8 D_00347088;
extern u8 D_00347220;


extern "C" u32 func_00105110(...);
extern "C" u32 func_00113668(...);
extern u8 D_00347220;

u32 duplicate_unplaced_00115560(u32 a0);


extern u8 D_00347258;
extern u8 D_003473c8;


extern u8 D_00347258;
extern u8 D_003473c8;


extern "C" u32 func_00105110(...);
extern "C" u32 func_00113668(...);
extern u8 D_003473c8;

u32 duplicate_unplaced_001156b8(u32 a0);


extern u8 D_00347400;
extern u8 D_00347550;


extern "C" u32 func_00105110(...);
extern "C" u32 func_00113668(...);
extern u8 D_00347550;

u32 duplicate_unplaced_001157d0(u32 a0);


extern u8 D_00347728;
extern u8 D_003477a0;


extern "C" u32 func_00119e60(...);
extern "C" u32 func_001c8cd8(...);

u32 duplicate_unplaced_00119c88(u32 a0, u32 a1);


extern "C" u32 func_00105110(...);
extern "C" u32 func_00113668(...);
extern u8 D_003477a0;

u32 duplicate_unplaced_00119d08(u32 a0);


extern u8 D_003477d8;
extern u8 D_00347808;


extern "C" u32 func_00105110(...);
extern "C" u32 func_00113668(...);
extern u8 D_00347808;

u32 duplicate_unplaced_0011a340(u32 a0);


extern "C" u32 func_00112730(...);
extern "C" u32 func_00112740(...);

u32 duplicate_unplaced_0011a430(u32 a0, u32 a1);


extern "C" u32 func_00105110(...);
extern "C" u32 func_00113668(...);
extern u8 D_00347848;

u32 duplicate_unplaced_0011a510(u32 a0);


extern "C" u32 func_00113668(...);
extern "C" u32 func_0013e4b8(...);
extern u8 D_003478b0;

u32 func_0011a700(u32 a0) asm("func_0011a700");


extern "C" u32 func_00113668(...);
extern "C" u32 func_0013e4b8(...);
extern u8 D_003478b0;

u32 func_0011a750(u32 a0) asm("func_0011a750");


u32 func_001178d0(u32 a0) asm("func_001178d0");


extern "C" u32 func_0010f6b8(...);
extern "C" u32 func_00111e38(...);
extern "C" u32 func_001182d0(...);

u32 func_00118328(u32 a0) asm("func_00118328");


extern "C" u32 func_0010f6f8(...);
extern "C" u32 func_00111e38(...);

u32 func_00118958(u32 a0) asm("func_00118958");


extern u8 D_00347880;
extern u8 D_003478b0;


extern "C" u32 func_00105110(...);
extern "C" u32 func_00113668(...);
extern "C" u32 func_0013e4b8(...);
extern u8 D_003478b0;

u32 func_0011a7a0(u32 a0) asm("func_0011a7a0");


extern "C" f32 func_0011c050(...);
extern "C" u32 func_002f4148(...);

extern "C" f32 func_0011c050(...);
extern "C" u32 func_002f41f0(...);

extern "C" f32 func_0011c050(...);
extern "C" u32 func_002f40a0(...);

void duplicate_unplaced_0011c210(u32 a0);


u64 duplicate_unplaced_0011c230(u32 a0);


extern "C" u32 func_0011d468(...);

f32 func_0011d6c0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_0011d6c0");


extern "C" u32 func_0011e350(...);
extern "C" u32 func_0011e450(...);

u32 duplicate_unplaced_0011e410(u32 a0, u32 a1);


extern u8 D_00347940;

void duplicate_unplaced_0011ee18(u32 a0, u32 a1);


u32 func_0011ef70(u32 a0, u32 a1) asm("func_0011ef70");


s32 duplicate_unplaced_0011f238(u32 a0, u32 a1);


extern "C" u32 func_00106420(...);
extern "C" u32 func_0011ee58(...);
extern u8 D_003479a8;

u32 duplicate_unplaced_0011f5a0(u32 a0);


extern "C" u32 func_00106420(...);
extern "C" u32 func_0011ee58(...);
extern u8 D_00347a28;

u32 duplicate_unplaced_001207c8(u32 a0);


extern "C" u32 func_00124748(...);

u32 duplicate_unplaced_00123d90(u32 a0, u32 a1);


extern "C" u32 func_00124748(...);

u32 duplicate_unplaced_00123dd0(u32 a0);


extern "C" u32 func_00124748(...);

u32 duplicate_unplaced_00123e00(u32 a0);


extern "C" u32 func_00106420(...);
extern "C" u32 func_00124c08(...);
extern u8 D_00347bb0;

u32 duplicate_unplaced_00128008(u32 a0);


extern "C" u32 func_00106420(...);
extern "C" u32 func_00124c08(...);
extern u8 D_00347bd8;

u32 duplicate_unplaced_00131770(u32 a0);


u32 func_001320b0(u32 a0) asm("func_001320b0");


u32 func_001320f0(u32 a0) asm("func_001320f0");


extern "C" u32 func_001320f0(...);
extern "C" u32 func_00132208(...);

u32 duplicate_unplaced_00132130(u32 a0);


void func_00132370(u32 a0, u32 a1, u32 a2, f32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_00132370");


extern "C" u32 func_00106420(...);
extern "C" u32 func_001322f0(...);
extern u8 D_00347c30;

u32 duplicate_unplaced_00132590(u32 a0);



extern "C" u32 func_00132c68(...);
u32 func_00132c68(void) asm("func_00132c68");
u32 func_00132a70(u32 a0) asm("func_00132a70");



u32 func_00132cd0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_00132cd0");



u32 func_00132d00(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_00132d00");



u32 func_00132d30(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_00132d30");



u32 func_00132d60(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_00132d60");


extern "C" u32 func_00106420(...);
extern "C" u32 func_001322f0(...);
extern u8 D_00347c60;

u32 duplicate_unplaced_00133228(u32 a0);


u32 func_001336f8(u32 a0) asm("func_001336f8");


extern "C" u32 func_00135ad0(...);
extern u8 D_00347cf0;

void func_001357d8(void) asm("func_001357d8");


extern "C" u32 func_00135aa0(...);
extern u8 D_00347cf0;
extern u8 D_00347d00;

void duplicate_unplaced_001358c0(u32 a0);


extern "C" u32 func_00135aa0(...);
extern u8 D_00347cf0;
extern u8 D_00347d00;

void duplicate_unplaced_00135900(u32 a0);


extern "C" u32 func_00135ad0(...);
extern "C" u32 func_00135cc8(...);

void duplicate_unplaced_00135c50(u32 a0, u32 a1);


extern "C" u32 func_00136020(...);
extern u8 D_00347d08;

void func_00135d88(void) asm("func_00135d88");


extern "C" u32 func_001050d8(...);
extern "C" u32 func_00135e50(...);

u32 duplicate_unplaced_00135dc8(u32 a0);


extern "C" u32 func_00135ff0(...);
extern u8 D_00347d08;
extern u8 D_00347d18;

void duplicate_unplaced_00135e10(u32 a0);



extern "C" u32 func_001688c8(...);
extern "C" u32 func_00170b30(...);

void duplicate_unplaced_00136790(u32 a0, u32 a1);


extern "C" u32 func_002bc358(...);
extern u8 D_00347d24;

void func_00136840(void) asm("func_00136840");


extern "C" u32 func_00136a50(...);
extern "C" u32 func_002ba040(...);
extern u8 D_00347d28;

void func_00136a60(void) asm("func_00136a60");


extern u8 D_00347d50;
extern u8 D_00347d54;
extern u8 D_00347d55;

void duplicate_unplaced_00136a98(void);


extern "C" u32 func_00242ea8(...);
extern "C" u32 func_002ba848(...);

extern "C" u32 func_00136ba8(...);

void func_00136cc8(u32 a0, u32 a1) asm("func_00136cc8");


extern "C" u32 func_00136b78(...);
extern "C" u32 func_002b7148(...);
extern "C" u32 func_002ba2b0(...);
extern u8 D_00347d40;

void func_00136cf0(void) asm("func_00136cf0");


void func_001380e8(void) asm("func_001380e8");


extern "C" u32 func_001397d8(...);
extern "C" u32 func_001398d0(...);

u32 duplicate_unplaced_00138140(u32 a0);


void duplicate_unplaced_00138480(u32 a0);


extern "C" u32 func_002362b0(...);
extern "C" u32 func_002367c8(...) asm("_ZN2YI5IMAGE13InitLoadImageEv");

u32 duplicate_unplaced_00138698(u32 a0);


extern "C" u32 func_00138988(...);
extern "C" u32 func_00138de0(...);

u32 duplicate_unplaced_001390c0(u32 a0);


extern "C" u32 func_00138988(...);

void func_00139170(u32 a0) asm("func_00139170");


extern "C" u32 func_00102750(...);
extern "C" u32 func_001394c0(...);
extern "C" u32 func_00139768(...);

u32 duplicate_unplaced_001394d8(u32 a0);


extern "C" u32 func_0013a4c8(...);
extern "C" u32 func_0013b538(...);
extern "C" u32 func_0013d498(...);
extern u8 D_00347ff4;

extern "C" u32 func_0013a6b8(...);
extern "C" u32 func_00242c70(...) asm("_ZN2Tz6Config12isCommandKH2Ev");

extern "C" u32 func_00131da8(...);
extern u8 D_00347ff8;
extern u8 D_00347ffc;

void func_0013a8b8(void) asm("func_0013a8b8");


extern "C" u32 func_0013a9d0(...);
extern u8 D_00347ffd;

u32 func_0013a9f8(void) asm("func_0013a9f8");


extern "C" u32 func_00138840(...);
extern "C" u32 func_0023acd8(...);
extern u8 D_0034805c;

extern u8 D_00348000;


extern "C" u32 func_001391c8(...);
extern "C" u32 func_0013b128(...);

void duplicate_unplaced_0013b1a0(u32 a0);


extern "C" u32 func_0013b1d0(...) asm("_ZN2dk12COMMAND_DRAW6createEPN2YS14PLAYER_COMMANDE");
extern "C" u32 func_0013b258(...);
extern "C" u32 func_0013d208(...);

u32 duplicate_unplaced_0013b260(u32 a0);


f32 func_0013b298(u32 a0) asm("func_0013b298");


f32 func_0013b2a8(u32 a0) asm("func_0013b2a8");


extern u8 D_003484a0;

f32 func_0013b2e8(void) asm("func_0013b2e8");


extern "C" u32 func_00103b38(...);
extern "C" u32 func_00139dc0(...);
extern "C" u32 func_0013a1e8(...);

void func_0013b570(void) asm("func_0013b570");


extern "C" u32 func_00103b38(...);
extern "C" u32 func_0013a200(...);

void func_0013b5a8(void) asm("func_0013b5a8");


extern u8 D_004573c0;


u32 func_0013c698(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_0013c698");


extern "C" u32 func_0013c698(...);
extern u8 D_003484a0;

u32 func_0013c6b8(void) asm("func_0013c6b8");


extern "C" u32 func_0013c688(...);
extern u8 D_003484a0;

u32 func_0013c6e8(void) asm("func_0013c6e8");


u32 func_0013c888(u32 a0, u32 a1) asm("func_0013c888");


extern "C" u32 func_001024a8(...);
extern "C" u32 func_0013b128(...);
extern "C" u32 func_0013d620(...);
extern "C" u32 func_0013d7c0(...);

u32 duplicate_unplaced_0013d750(u32 a0);


extern "C" u32 func_0013e940(...);
extern "C" u32 func_0014b150(...);
extern u8 D_003486f0;

u32 duplicate_unplaced_0013e900(u32 a0);


extern "C" u32 func_0013fec0(...);

u32 func_00140370(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_00140370");


f32 duplicate_unplaced_00141070(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7);


extern "C" u32 func_0013a4c8(...);
extern "C" u32 func_0013a600(...);
extern "C" u32 func_001493b8(...);
extern u8 D_00348d68;

u32 duplicate_unplaced_00149c08(u32 a0);


extern "C" u32 func_0014a500(...);
extern "C" u32 func_0014a6e0(...);

u32 func_0014a830(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_0014a830");


extern "C" u32 func_0014a988(...);
extern "C" u32 func_0014b638(...);
extern u8 D_00349b28;

u32 duplicate_unplaced_0014a950(u32 a0);


extern "C" u32 func_0014a988(...);
extern "C" u32 func_0014ace8(...);
extern u8 D_003493a0;

u32 duplicate_unplaced_0014acf8(u32 a0);


f32 duplicate_unplaced_0014ce78(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7);


extern "C" u32 func_0014cf80(...);
extern "C" u32 func_0014d060(...);
extern "C" u32 func_0014e088(...);
extern "C" u32 func_0014e5f0(...);
extern "C" u32 func_001b7f88(...);
extern "C" u32 func_002ef7c8(...);

u32 duplicate_unplaced_0014cf88(u32 a0);


extern u8 D_00349e48;


extern "C" u32 func_002f25a0(...);
extern "C" u32 func_002f3918(...);
extern "C" u32 func_003058a0(...);

u32 duplicate_unplaced_0014d8d0(u32 a0, u32 a1);


extern "C" u32 func_002f25a0(...);
extern "C" u32 func_002f3918(...);

u32 duplicate_unplaced_0014d910(u32 a0, u32 a1);


extern "C" u32 func_00140df0(...);
extern "C" u32 func_0014e658(...);

u32 duplicate_unplaced_0014ec20(u32 a0);


extern "C" u32 func_001aec40(...);

u32 func_0014ecf8(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_0014ecf8");


extern "C" u32 func_00139858(...);
extern "C" u32 func_00139ab0(...);

u32 duplicate_unplaced_0014f4d8(u32 a0);


extern "C" u32 func_001398d0(...);
extern "C" u32 func_00139a38(...);

u32 duplicate_unplaced_0014f528(u32 a0);


extern u8 D_0034a458;


u32 duplicate_unplaced_00150578(u32 a0, u32 a1);



u32 duplicate_unplaced_00150610(u32 a0, u32 a1);



u32 duplicate_unplaced_001514b0(u32 a0, u32 a1);



u32 duplicate_unplaced_00151b40(u32 a0, u32 a1);


extern "C" u32 func_00138c10(...);
ObjCommon_001050c8* func_001050c8(void) asm("func_001050c8");
extern "C" u32 func_0023edb0(...);

u32 duplicate_unplaced_00153c60(u32 a0);


extern "C" u32 func_00139948(...);
extern "C" u32 func_00139ba0(...);

u32 duplicate_unplaced_00154af0(u32 a0);


extern "C" u32 func_001399c0(...);
extern "C" u32 func_00139b28(...);

u32 duplicate_unplaced_00154b18(u32 a0);


u32 func_00156030(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_00156030");


u32 func_00156058(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_00156058");


u32 func_00156080(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_00156080");


extern "C" u32 func_00140df0(...);
extern "C" u32 func_00140e30(...);

u32 duplicate_unplaced_001586b8(u32 a0, u32 a1);


extern "C" u32 func_0013fca8(...);
extern "C" u32 func_00159790(...);

u32 func_00159b00(u32 a0) asm("func_00159b00");


extern "C" u32 func_001024a8(...);
extern "C" u32 func_00140dd0(...);
extern "C" u32 func_00140df0(...);
extern "C" u32 func_00140f10(...);

u32 duplicate_unplaced_00159be0(u32 a0);


extern "C" u32 func_00139858(...);
extern "C" u32 func_00139ab0(...);

u32 duplicate_unplaced_0015b780(u32 a0);


extern "C" u32 func_001398d0(...);
extern "C" u32 func_00139a38(...);

u32 duplicate_unplaced_0015b7a0(u32 a0);


f32 duplicate_unplaced_0015ced0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7);


f32 duplicate_unplaced_0015cee0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7);


extern "C" u32 func_001024a8(...);
extern "C" u32 func_0014e098(...);

u32 duplicate_unplaced_001617e8(u32 a0);


extern "C" u32 func_001024a8(...);
extern "C" u32 func_0014e0d8(...);

u32 duplicate_unplaced_00161f10(u32 a0);




extern u8 D_0034d3c0;


extern u8 D_0034d6c0;


extern "C" u32 func_00170888(...);
extern "C" u32 func_001afaf0(...);
extern "C" u32 func_001badd8(...);

u32 duplicate_unplaced_00169148(u32 a0);


extern "C" u32 func_001922c8(...);
extern "C" u32 func_00197be8(...);
extern "C" u32 func_001a5e38(...);
extern "C" u32 func_001b24c8(...);
extern "C" u32 func_001ba740(...);

u32 duplicate_unplaced_00169308(u32 a0);


extern "C" u32 func_0016c358(...);
extern "C" u32 func_001a9350(...);

u32 duplicate_unplaced_0016a328(u32 a0);


extern "C" u32 func_0016bf20(u32, u32, u32, u32, u32, u32, u32, u32) asm("_ZN2YS3OBJ14get_appear_wayEv");
extern "C" u32 func_0016bff0(u32, u32, u32, u32, u32, u32, u32, u32) asm("_ZN2YS3OBJ10get_serialEv");

extern "C" u32 func_001891b8(...);
extern "C" u32 func_00189200(...);
extern u8 D_0032e020;

u32 duplicate_unplaced_0016e130(u32 a0, u32 a1);


extern "C" u32 func_001b1448(...);
extern "C" u32 func_001d3390(...);

u32 duplicate_unplaced_0016e8f8(u32 a0);


extern "C" u32 func_0016e920(...);
extern "C" u32 func_0016f6a0(...);

u32 duplicate_unplaced_0016eb18(u32 a0, u32 a1);


f32 func_001826f8(u32,u32,u32,u32,u32,u32,u32,u32) asm("func_001826f8");

void func_00173120(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_00173120");


extern "C" u32 func_001b6bd8(...);
extern "C" u32 func_001d14a0(...);

u32 duplicate_unplaced_001741e0(u32 a0, u32 a1);


extern "C" u32 func_00140df0(...);
extern "C" u32 func_00140f10(...);

u32 duplicate_unplaced_00174ba8(u32 a0);


extern "C" u32 func_00140df0(...);
extern "C" u32 func_00140f20(...);

u32 duplicate_unplaced_00174bc8(u32 a0);


extern "C" u32 func_00106a60(...);
extern "C" u32 func_00107478(...);
extern u8 D_01e2be20;

u32 duplicate_unplaced_00174d98(u32 a0, u32 a1);


extern "C" u32 func_001382b8(...);
extern "C" u32 func_001a8258(...);
extern "C" u32 func_001a8418(...);
extern "C" u32 func_001a8510(...);

u32 duplicate_unplaced_001754d0(u32 a0);


void func_00176a60(u32 a0, u32 a1, u32 a2, f32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_00176a60");


extern "C" u32 func_0016c7d8(...);
extern "C" u32 func_0016cab8(...);

void func_00177498(u32 a0) asm("func_00177498");



u32 duplicate_unplaced_001775f8(u32 a0, u32 a1);



u32 duplicate_unplaced_00177638(u32 a0, u32 a1);


extern "C" u32 func_00140db0(...);
extern "C" u32 func_00182f28(...);
extern "C" u32 func_001d69d0(...);

u32 duplicate_unplaced_001781e8(u32 a0);


extern "C" u32 func_00176ec8(...);
extern "C" u32 func_001d6a80(...);

u32 duplicate_unplaced_00179e18(u32 a0);


extern "C" u32 func_001781a8(...);
extern "C" u32 func_00179f10(...);

u32 duplicate_unplaced_00179f58(u32 a0);


extern "C" u32 func_00112ab8(...);
extern "C" u32 func_001762f8(...);

u32 duplicate_unplaced_0017a1c8(u32 a0, u32 a1);


extern "C" u32 func_001776f8(...);
extern "C" u32 func_001bdab0(...);

u32 duplicate_unplaced_0017a230(u32 a0);


extern "C" u32 func_001779d0(...);
extern "C" u32 func_001bc0e0(...);

u32 func_0017a680(u32 a0) asm("func_0017a680");


extern "C" u32 func_0016bd60(...);
extern "C" u32 func_0017c430(...);

u32 duplicate_unplaced_0017a938(u32 a0, u32 a1);


extern "C" u32 func_00175af8(...);
extern "C" u32 func_0017dcc0(...);

u32 duplicate_unplaced_0017dc98(u32 a0);


extern "C" u32 func_0017ee68(...);
extern "C" u32 func_00180ce0(...);

u32 duplicate_unplaced_0017eb68(u32 a0);


extern "C" u32 func_0017ee68(...);
extern "C" u32 func_00180ce0(...);

u32 duplicate_unplaced_0017eb98(u32 a0);


extern "C" u32 func_0017ec98(...);
extern "C" u32 func_0017edf0(...);
extern "C" u32 func_00180408(...);

u32 duplicate_unplaced_001805a8(u32 a0, u32 a1);


extern "C" u32 func_0016b5b8(...);
extern "C" u32 func_001dc920(...);

u32 func_001855a0(u32 a0) asm("func_001855a0");


extern u8 D_0032bb30;


extern "C" u32 func_00105110(...);
extern "C" u32 func_001d3878(...);

void func_00190000(u32 a0) asm("func_00190000");


extern "C" u32 func_00190208(...);

u32 func_001906c0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_001906c0");


f32 duplicate_unplaced_00191c20(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7);


f32 duplicate_unplaced_00191c40(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7);


extern "C" u32 func_001708f8(...);
extern "C" u32 func_00191f78(...);
extern "C" u32 func_001921d8(...);

u32 duplicate_unplaced_00192290(u32 a0, u32 a1);


f32 func_00192fb8(u32 a0) asm("func_00192fb8");


extern "C" u32 func_0016b668(...);
extern "C" u32 func_001dc878(...);

u32 duplicate_unplaced_00195f88(u32 a0);


extern u8 D_0032da20;


extern "C" u32 func_00197c90(...);
extern "C" u32 func_001ada38(...);
extern "C" u32 func_001b9db0(...);

u32 duplicate_unplaced_00197738(u32 a0);


extern "C" u32 func_001b9c28(...);

u32 duplicate_unplaced_00197760(u32 a0);


extern "C" u32 func_001b9c58(...);

u32 duplicate_unplaced_00197780(u32 a0);


extern u8 D_01c62198;


u32 func_0019a9e0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_0019a9e0");


extern "C" u32 func_0016a070(...);
extern "C" u32 func_0019c898(...);

u32 duplicate_unplaced_0019c8a8(u32 a0);


extern "C" u32 func_00190128(...);
extern "C" u32 func_0019ca20(...);

u32 duplicate_unplaced_0019c8d0(u32 a0);


extern "C" u32 func_00190128(...);
extern "C" u32 func_0019ca20(...);

u32 duplicate_unplaced_0019c920(u32 a0);


extern "C" u32 func_0019d4f8(...);

u32 duplicate_unplaced_0019d720(u32 a0);


extern "C" u32 func_001a11e0(...);
extern "C" u32 func_001a1840(...);

u32 duplicate_unplaced_001a1460(u32 a0, u32 a1);


u32 func_001a2758(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_001a2758");


u32 func_001a2778(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_001a2778");


u32 func_001a2798(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_001a2798");


u32 func_001a27b8(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_001a27b8");


u32 func_001a27d8(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_001a27d8");


extern "C" u32 func_001a80c8(...);
extern "C" u32 func_001b8e88(...);

u32 duplicate_unplaced_001a3868(u32 a0);


extern "C" u32 func_00170950(...);
extern "C" u32 func_001dde40(...);
extern "C" u32 func_001de450(...);
extern u8 D_01c6cae0;

u32 duplicate_unplaced_001a3b08(u32 a0);


extern u8 D_0032f274;


extern "C" u32 func_001a6598(...);
extern u8 D_0032f274;


extern "C" u32 func_001956d0(...);
extern u8 D_0034fa78;

u32 duplicate_unplaced_001a6c38(u32 a0, u32 a1);


extern u8 D_0034fa78;

u32 duplicate_unplaced_001a6c60(u32 a0, u32 a1);


extern "C" u32 func_00195700(...);
extern u8 D_0032dec0;


extern "C" u32 func_0019c218(...);
extern "C" u32 func_001b8e88(...);

u32 duplicate_unplaced_001a74f8(u32 a0, u32 a1);


extern "C" u32 func_001d2298(...);



extern "C" u32 func_001a8b28(...);


extern "C" u32 func_0016e920(...);

u32 func_001a8b68(u32 a0) asm("func_001a8b68");


extern "C" u32 func_0016e920(...);
extern "C" u32 func_001a8b28(...);
extern "C" u32 func_001a8bf8(...);

u32 func_001a8c10(u32 a0) asm("func_001a8c10");


extern "C" u32 func_001a8c78(...);
extern "C" u32 func_001a9018(...);

u32 func_001a90a8(u32 a0, u32 a1) asm("func_001a90a8");



extern "C" u32 func_001a8f10(...);

u32 duplicate_unplaced_001a90f0(u32 a0);


extern u8 D_0032df30;


extern "C" u32 func_002f71b0(...);
extern "C" u32 func_002f79c8(...);
extern "C" u32 func_002f7e60(...);

u32 duplicate_unplaced_001ae650(u32 a0);


extern "C" u32 func_00105110(...);
extern "C" u32 func_001af210(...);

void func_001af3e0(u32 a0) asm("func_001af3e0");


extern "C" u32 func_001708f8(...);
extern "C" u32 func_001af7c0(...);

u32 duplicate_unplaced_001af778(u32 a0, u32 a1);


extern "C" u32 func_00106420(...);
extern "C" u32 func_001b0330(...);
extern u8 D_00350e78;

u32 duplicate_unplaced_001b01d8(u32 a0);


extern "C" u32 func_0016bd60(...);
extern "C" u32 func_0017c430(...);

u32 duplicate_unplaced_001b27c0(u32 a0, u32 a1);


extern "C" u32 func_0016bd60(...);
extern "C" u32 func_0017c430(...);

u32 duplicate_unplaced_001b2c18(u32 a0, u32 a1);


ObjCommon_001050c8* func_001050c8(void) asm("func_001050c8");
extern "C" u32 func_00165898(...);

u32 duplicate_unplaced_001b2f10(u32 a0);


extern "C" u32 func_001d20a8(...);

u32 duplicate_unplaced_001b5c78(u32 a0);


u32 func_001b8fd8(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_001b8fd8");


extern "C" u32 func_001a36e0(...);
extern "C" u32 func_001a80c8(...);
extern "C" u32 func_001b8e88(...);

u32 duplicate_unplaced_001b90c8(u32 a0);


extern "C" u32 func_001029e8(...);
extern "C" u32 func_001a3c88(...);

u32 duplicate_unplaced_001b92d0(u32 a0);


extern "C" u32 func_001ba598(...);
extern "C" u32 func_003204c8(...);
extern u8 D_01d48de0;

u32 duplicate_unplaced_001ba310(u32 a0, u32 a1);


extern "C" u32 func_001991a8(...);
extern "C" u32 func_001bb890(...);

u32 duplicate_unplaced_001bb858(u32 a0, u32 a1);


extern "C" u32 func_001bb4a0(...);
extern "C" u32 func_001bbcb0(...);
extern "C" u32 func_001d5460(...);

u32 func_001bc090(u32 a0) asm("func_001bc090");


extern "C" u32 func_001bd668(...);

u32 duplicate_unplaced_001bdc18(u32 a0);


extern "C" u32 func_00190128(...);

u32 duplicate_unplaced_001bde58(u32 a0);


extern "C" void func_001bc688(...);
extern "C" u32 func_001be4e0(...);
extern "C" u32 func_002ba2e8(...);

u32 duplicate_unplaced_001be4b0(u32 a0, u32 a1);


extern "C" u32 func_001bc778(...);
extern "C" u32 func_001bc990(...);
extern u8 D_00351248;

u32 duplicate_unplaced_001bf0c8(u32 a0, u32 a1);


extern u8 D_01d49328;


extern "C" u32 func_001c0cd8(...);
extern "C" u32 func_001c0d38(...);


extern "C" u32 func_001c10f8(...);
extern u8 D_01d49388;


extern "C" u32 func_001db8b8(...);
extern "C" u32 func_003208a8(...);

u32 duplicate_unplaced_001c1890(u32 a0, u32 a1);


extern "C" u32 func_0016a9a0(...);
extern "C" u32 func_001c1428(...);

u32 duplicate_unplaced_001c2578(u32 a0);


extern "C" u32 func_00105110(...);
extern "C" u32 func_0016b5b8(...);
extern "C" u32 func_001c13e8(...);

u32 func_001c25a0(u32 a0) asm("func_001c25a0");


extern "C" u32 func_00191c50(...);

u32 func_001c3618(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_001c3618");


extern "C" u32 func_0016a9a0(...);
extern "C" u32 func_001c14e0(...);

u32 duplicate_unplaced_001c6ee8(u32 a0);


extern "C" u32 func_00105110(...);
extern "C" u32 func_001a4e30(...);
extern u8 D_00351da8;

u32 duplicate_unplaced_001c7c68(u32 a0);


extern "C" u32 func_0016bd60(...);
extern "C" u32 func_0017c430(...);

u32 duplicate_unplaced_001c90c0(u32 a0, u32 a1);


extern "C" u32 func_0017e668(...);

u32 duplicate_unplaced_001c9d88(u32 a0);


extern "C" u32 func_00105110(...);
extern "C" u32 func_001a4e30(...);
extern u8 D_00351f78;

u32 duplicate_unplaced_001ca718(u32 a0);


extern "C" u32 func_00105110(...);
extern "C" u32 func_001a4e30(...);
extern u8 D_00351ff0;

u32 duplicate_unplaced_001cbbf8(u32 a0);


extern "C" u32 func_00105110(...);
extern "C" u32 func_001a4e30(...);
extern u8 D_00352060;

u32 duplicate_unplaced_001cc0e8(u32 a0);


extern "C" u32 func_00105110(...);
extern "C" u32 func_001a4e30(...);
extern u8 D_003520d0;

u32 duplicate_unplaced_001cced8(u32 a0);


extern "C" u32 func_0016b5b8(...);
extern "C" u32 func_001dba98(...);

u32 duplicate_unplaced_001ce458(u32 a0);


extern "C" u32 func_001a8b28(...);


extern "C" u32 func_00178280(...);
extern "C" u32 func_00198970(...);

u32 duplicate_unplaced_001d0200(u32 a0);


extern "C" u32 func_0019cc20(...);

u32 duplicate_unplaced_001d07e0(u32 a0);


extern "C" u32 func_0014f9a8(...);
extern "C" u32 func_001d1708(...);

u32 func_001d1ae8(u32 a0) asm("func_001d1ae8");


extern "C" u32 func_0014f9a8(...);
extern "C" u32 func_001d1708(...);

u32 func_001d1b28(u32 a0) asm("func_001d1b28");


extern "C" u32 func_0014fb00(...);
extern "C" u32 func_001d1708(...);

u32 func_001d1d68(u32 a0) asm("func_001d1d68");


extern "C" u32 func_00106420(...);
extern "C" u32 func_001d2210(...);
extern u8 D_003525e8;

u32 duplicate_unplaced_001d2070(u32 a0);


extern "C" u32 func_00105110(...);
extern "C" u32 func_001a4e30(...);
extern u8 D_00352678;

u32 duplicate_unplaced_001d28f0(u32 a0);


extern "C" u32 func_001d1b60(...);


extern "C" u32 func_00105110(...);
extern "C" u32 func_001a4e30(...);
extern u8 D_003527f0;

u32 duplicate_unplaced_001d74f8(u32 a0);


extern "C" u32 func_0014f830(...);
extern "C" u32 func_001d1708(...);

u32 func_001d7c90(u32 a0) asm("func_001d7c90");


extern "C" u32 func_001d8190(...);


extern "C" u32 func_001d8190(...);


extern "C" u32 func_001d8190(...);


extern "C" u32 func_0016b5b8(...);
extern "C" u32 func_001dc920(...);

u32 func_001da158(u32 a0) asm("func_001da158");


extern "C" u32 func_00105110(...);
extern "C" u32 func_001a4e30(...);
extern u8 D_00352970;

u32 duplicate_unplaced_001da278(u32 a0);


extern "C" u32 func_001dc9e0(...);
extern "C" u32 func_001e6cd0(...);

u32 duplicate_unplaced_001dc5f8(u32 a0);


extern "C" u32 func_001dc9e0(...);
extern "C" u32 func_001e6cd8(...);

u32 duplicate_unplaced_001dc620(u32 a0);


extern "C" u32 func_001dc9e0(...);
extern "C" u32 func_001e6ce8(...);

u32 duplicate_unplaced_001dc648(u32 a0);


extern "C" u32 func_001dc9e0(...);
extern "C" u32 func_001e6cf8(...);

u32 duplicate_unplaced_001dc670(u32 a0);


extern "C" u32 func_001dc9e0(...);
extern "C" u32 func_001e2c78(...);

u32 duplicate_unplaced_001dc7e8(u32 a0);


extern "C" u32 func_001dc9e0(...);
extern "C" u32 func_001e6d08(...);

u32 duplicate_unplaced_001dc9f0(u32 a0);


extern "C" u32 func_001e0cc8(...);
extern "C" u32 func_001e26b8(...);

u32 duplicate_unplaced_001e0f90(u32 a0, u32 a1);


extern "C" u32 func_002f25a0(...);
extern "C" u32 func_002f3918(...);
extern u8 D_003598e0;

u32 duplicate_unplaced_0020f118(u32 a0, u32 a1);


extern "C" u32 func_002f25a0(...);
extern "C" u32 func_002f3918(...);
extern u8 D_00359910;

u32 duplicate_unplaced_0020f150(u32 a0, u32 a1);


extern "C" u32 func_0014a4b0(...);

u32 duplicate_unplaced_00226d88(u32 a0);



extern "C" u32 func_001390f0(...);
extern "C" u32 func_00229d40(...);

u32 duplicate_unplaced_00229d68(u32 a0);


extern "C" u32 func_001390f0(...);
extern "C" u32 func_0022ac60(...);

u32 duplicate_unplaced_0022acd0(u32 a0);


extern "C" u32 func_00105110(...);
extern "C" u32 func_002369f0(...);
extern "C" u32 func_0023c098(...);
extern "C" u32 func_0023f848(...);

void func_0022b968(u32 a0) asm("func_0022b968");


extern "C" u32 func_001024a8(...);
extern "C" u32 func_00226e60(...);

u32 duplicate_unplaced_0022be28(u32 a0);


extern "C" u32 func_002f35e8(...);
extern "C" u32 func_002f3918(...);
extern u8 D_0035e3f0;

u32 duplicate_unplaced_002367a0(u32 a0, u32 a1);


extern "C" u32 func_002f2be0(...);

u32 duplicate_unplaced_002368b0(u32 a0, u32 a1);


extern "C" u32 func_00106420(...);
extern "C" u32 func_00236c38(...);
extern u8 D_0035eac8;

u32 duplicate_unplaced_00236a18(u32 a0);



extern "C" u32 func_00106420(...);
extern "C" u32 func_00237238(...);
extern u8 D_0035eaf8;

u32 duplicate_unplaced_00239898(u32 a0);


extern "C" u32 func_0023a0d8(...);

u32 func_0023a918(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_0023a918");






extern "C" u32 func_00106420(...);
extern "C" u32 func_0023c300(...);
extern u8 D_0035eb08;

u32 duplicate_unplaced_0023c0c0(u32 a0);


extern "C" u32 func_0023c598(...);
extern "C" u32 func_0023c728(...);

u32 duplicate_unplaced_0023c6f8(u32 a0);



extern "C" u32 func_0023d820(...);

void func_0023d7c8(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_0023d7c8");


extern "C" u32 func_0011eb08(...);





extern "C" u32 func_00106420(...);
extern "C" u32 func_0023f8c8(...);
extern u8 D_0035ebd8;

u32 duplicate_unplaced_0023f870(u32 a0);


extern "C" u32 func_001708f8(...);
extern "C" u32 func_0023fa08(...);

u32 duplicate_unplaced_0023fa90(u32 a0, u32 a1);


extern "C" u32 func_00242088(...);
extern "C" u32 func_002ef938(...);

u32 duplicate_unplaced_002421c0(u32 a0);


extern "C" u32 func_00243020(...);
extern "C" u32 func_00243190(...);

u32 duplicate_unplaced_002430b0(u32 a0);


extern "C" u32 func_001a6d08(...);

u32 duplicate_unplaced_00246968(u32 a0);


extern "C" u32 func_0028dbf8(...);
extern u8 D_00372348;
extern u8 D_00372380;


extern "C" u32 func_00253180(...);
extern "C" u32 func_0026d808(...);

u32 duplicate_unplaced_002533e0(u32 a0, u32 a1);


extern "C" u32 func_00258af0(...);
extern "C" u32 func_00258b00(...);

u32 duplicate_unplaced_00253480(u32 a0);


extern "C" u32 func_00253180(...);
extern "C" u32 func_00274f98(...);

extern "C" u32 func_00103500(...);
extern "C" u32 func_001037b8(...);
extern "C" u32 func_00253330(...);
extern "C" u32 func_00288648(...);

u32 duplicate_unplaced_00253538(u32 a0);


extern "C" u32 func_0023fa08(...);
extern "C" u32 func_002537c8(...);
extern u8 D_0035f3a8;

u32 duplicate_unplaced_00256b40(u32 a0, u32 a1);


extern "C" u32 func_00257770(...);
extern "C" u32 func_0028dac8(...);

u32 duplicate_unplaced_00256e80(u32 a0, u32 a1);


extern "C" u32 func_00139d78(...);
extern "C" u32 func_00257770(...);

u32 duplicate_unplaced_00256ef0(u32 a0);


extern "C" u32 func_00257070(...);
extern "C" u32 func_00257088(...);

u32 duplicate_unplaced_002570a0(u32 a0);


extern "C" u32 func_0023fa08(...);
extern "C" u32 func_002537c8(...);

u32 duplicate_unplaced_00258a88(u32 a0, u32 a1);


extern "C" u32 func_00257770(...);
extern "C" u32 func_0028da70(...);

u32 duplicate_unplaced_00263188(u32 a0, u32 a1);


extern "C" u32 func_00257770(...);
extern "C" u32 func_0028da70(...);

u32 duplicate_unplaced_002631b0(u32 a0, u32 a1);


extern "C" u32 func_001a3888(...);
extern "C" u32 func_002632d0(...);

u32 duplicate_unplaced_00263688(u32 a0);


extern "C" u32 func_00192048(...);
extern "C" u32 func_00263a90(...);

u32 duplicate_unplaced_00263a58(u32 a0, u32 a1);


extern "C" u32 func_00257770(...);
extern "C" u32 func_0028da70(...);

u32 duplicate_unplaced_00265780(u32 a0, u32 a1);


extern "C" u32 func_00257770(...);
extern "C" u32 func_0028da70(...);

u32 duplicate_unplaced_00265c50(u32 a0, u32 a1);


extern "C" u32 func_0026b470(...);
extern "C" u32 func_0026b508(...);
extern "C" u32 func_0026b5a0(...);

u32 duplicate_unplaced_0026b448(u32 a0);


extern "C" u32 func_0023d820(...);
extern "C" u32 func_00287dc0(...);

u32 duplicate_unplaced_0026c450(u32 a0);


extern "C" u32 func_00257708(...) asm("_ZN2Tz5CmTop13SetHideCursorEb");
extern "C" u32 func_0026bc10(...);
extern "C" u32 func_0026ceb0(...);

u32 duplicate_unplaced_0026c9c8(u32 a0);


extern "C" u32 func_0023fa08(...);
extern "C" u32 func_002537c8(...);
extern u8 D_0035f3a8;

u32 duplicate_unplaced_0026ec70(u32 a0, u32 a1);


extern "C" u32 func_00192048(...);
extern u8 D_00373970;

u32 duplicate_unplaced_00271828(u32 a0, u32 a1);


extern "C" u32 func_00275dd0(...);
extern "C" u32 func_0028dac8(...);

u32 duplicate_unplaced_00275c78(u32 a0, u32 a1);


extern "C" u32 func_00139d78(...);
extern u8 D_0035f204;

u32 func_00276368(void) asm("func_00276368");


extern "C" u32 func_001058e8(...);


extern "C" u32 func_001b77d0(...);


extern "C" u32 func_001058e8(...);
extern "C" u32 func_00189200(...);

u32 func_002814b0(u32 a0, u32 a1) asm("func_002814b0");


extern "C" u32 func_001058e8(...);


extern "C" u32 func_002843e8(...);
extern "C" u32 func_00284538(...);

void func_002843c0(void) asm("func_002843c0");


extern "C" u32 func_0028af18(...);
extern "C" u32 func_0028b1b0(...);

u32 duplicate_unplaced_0028b0e0(u32 a0, u32 a1);


extern "C" u32 func_00289310() asm("_ZN2Tz6Select12isCursorMoveEv");
extern "C" u32 func_002a4430();
extern "C" void func_00296ed0() asm("_ZN2Tz8JmReport10DrawUpdateEPNS_6SelectEii");

extern "C" u32 func_0029a740() asm("_ZN2Tz12JmCollection10DrawUpdateEPNS_6SelectEii");

void func_0029a718(void) asm("func_0029a718");


f32 duplicate_unplaced_001070a8(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7);


f32 duplicate_unplaced_001142a0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7);


f32 duplicate_unplaced_001142b0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7);


f32 duplicate_unplaced_001142c0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7);


f32 duplicate_unplaced_001142d0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7);


f32 duplicate_unplaced_00114370(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7);


f32 duplicate_unplaced_00114380(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7);


f32 duplicate_unplaced_00114390(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7);


extern u8 D_00345f10;
extern u8 D_003461e8;


extern u8 D_00345f10;
extern u8 D_003461e8;


extern u8 D_00346220;
extern u8 D_003464b0;


extern u8 D_003464e8;
extern u8 D_00346658;


extern u8 D_003464e8;
extern u8 D_00346658;


extern u8 D_00346690;
extern u8 D_003467b8;


extern u8 D_00346690;
extern u8 D_003467b8;


extern u8 D_003467f0;
extern u8 D_00346960;


extern u8 D_00346998;
extern u8 D_00346b08;


extern u8 D_00346998;
extern u8 D_00346b08;


extern "C" u32 func_00139d78(...);
extern u8 D_00347d60;

extern "C" u32 func_0013cb08(...);
extern "C" u32 func_001bcf38(...);

extern "C" u32 func_0013a810(...);
extern "C" u32 func_0013cb08(...);
extern u8 D_003484a0;

extern "C" u32 func_0023aa98(...);

void func_0013cdc8(u32 a0, u32 a1) asm("func_0013cdc8");


extern "C" u32 func_00102c18(...);
extern u8 D_0013d750;

void duplicate_unplaced_0013d798(void);


extern "C" u32 func_00157880(...);
extern u8 D_003485ec;

void func_0013dbe0(u32 a0) asm("func_0013dbe0");


u32 func_0013dc08(u32 a0, u32 a1) asm("func_0013dc08");


void func_0013dc78(u32 a0, u32 a1, u32 a2) asm("func_0013dc78");


extern "C" u32 func_0013dc08(...);
extern "C" u32 func_0013dc78(...);
extern u8 D_00348638;

void func_0013de08(u32 a0) asm("func_0013de08");


extern "C" u32 func_0013dc08(...);
extern "C" u32 func_0013dc78(...);
extern u8 D_00348638;

void func_0013de58(u32 a0) asm("func_0013de58");


extern "C" u32 func_0013dc08(...);
extern "C" u32 func_0013dc78(...);
extern u8 D_00348638;

void func_0013dea8(u32 a0) asm("func_0013dea8");


extern "C" u32 func_0013dc08(...);
extern "C" u32 func_0013dc78(...);
extern u8 D_00348638;

void func_0013def8(u32 a0) asm("func_0013def8");


extern "C" u32 func_001390f0(...);
extern "C" u32 func_00139d78(...);

void func_0013e470(u32 a0) asm("func_0013e470");


void func_0013ee18(u32 a0, u64 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_0013ee18");


void duplicate_unplaced_0013ee40(u32 a0, u64 a1, u64 a2, u64 a3, u64 a4, u32 a5, u32 a6, u32 a7);


extern "C" u32 func_0013f030(...);
extern "C" u32 func_0013f048(...);
extern "C" u32 func_0014aa80(...);
extern "C" u32 func_0014aba8(...);

u32 duplicate_unplaced_0013f160(void);


extern "C" u32 func_001024a8(...);
extern "C" u32 func_0013f020(...);
extern "C" u32 func_0014aba8(...);

void func_0013f198(u32 a0) asm("func_0013f198");


extern "C" u32 func_001024a8(...);
extern "C" u32 func_0013f048(...);
extern "C" u32 func_0014aba8(...);

void func_0013f1e8(u32 a0) asm("func_0013f1e8");


extern "C" u32 func_001024a8(...);
extern "C" u32 func_0013f048(...);
extern "C" u32 func_0014aba8(...);

void func_0013f330(u32 a0) asm("func_0013f330");


extern "C" u32 func_00102448(...);
extern "C" u32 func_0013f048(...);
extern "C" u32 func_0014e098(...);

void duplicate_unplaced_0013f450(u32 a0);


extern "C" u32 func_00102788(...);
extern "C" u32 func_00102c80(...);
extern "C" u32 func_0013efe8(...);
extern "C" u32 func_0013f428(...);

void duplicate_unplaced_0013f498(void);


extern "C" u32 func_00102818(...);
extern "C" u32 func_00102c80(...);
extern "C" u32 func_0013f030(...);
void func_0013f450(u32) asm("func_0013f450");

void duplicate_unplaced_0013f4d8(void);


f32 func_002f8ad0(f32, f32) asm("func_002f8ad0");

void func_0013fcd8(u32 a0, f32* a1) asm("func_0013fcd8");


u32 func_0013fda0(u32 a0) asm("func_0013fda0");


u32 func_0013fdc8(u32 a0) asm("func_0013fdc8");


extern "C" u32 func_00102788(...);
extern "C" u32 func_00102c80(...);
extern "C" u32 func_001069b8(...);
extern "C" u32 func_0013f558(...);
extern "C" u32 func_00140cc8(...);
extern "C" u32 func_0015ce90(...);
extern u8 D_00348710;

void duplicate_unplaced_00140ce8(void);


extern "C" u32 func_0013f5f0(...);
extern "C" u32 func_0013f648(...);

void func_00140f30(u32 a0) asm("func_00140f30");


void func_00141808(u32 a0) asm("func_00141808");



extern "C" u32 func_00141970(...);
extern "C" u32 func_001450e8(...);

u32 duplicate_unplaced_00142900(u32 a0, u32 a1, u32 a2, u32 a3);



extern "C" u32 func_00143ae0(...);

u32 func_00143ac0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_00143ac0");


extern "C" u32 func_00142278(...);


void func_00144450(u32 a0) asm("func_00144450");


void func_00144490(u32 a0, u32 a1, u32 a2, f32 a3, f32 a4, f32 a5, f32 a6, f32 a7, f32 a8) asm("func_00144490");


void func_001447c0(u32 a0, u32 a1, u32 a2, f32 a3, f32 a4, f32 a5, f32 a6, f32 a7, f32 a8) asm("func_001447c0");


void func_00146d28(u32 a0) asm("func_00146d28");


void func_00146de0(u32 a0) asm("func_00146de0");


void func_00146e70(u32 a0, u32 a1, u32 a2) asm("func_00146e70");


u32 func_00147a68(u32 a0, u32 a1, u32 a2) asm("func_00147a68");


extern "C" u32 func_00134408(...);

void func_00148528(u32 a0) asm("func_00148528");


void func_00148560(u32 a0) asm("func_00148560");


extern u8 D_003a99f0;

void func_00148a30(u32 a0) asm("func_00148a30");


extern "C" u32 func_00108698(...);
extern u8 D_00457480;

void func_00149150(u32 a0, u32 a1) asm("func_00149150");


extern u8 D_0036b028;

u32 func_00149fa8(u32 a0) asm("func_00149fa8");


extern "C" u32 func_00102818(...);
extern u8 D_0014a0a0;
extern u8 D_0032b96c;

void duplicate_unplaced_0014a138(u32 a0);


extern "C" u32 func_00102c18(...);
extern "C" u32 func_0013a6d0(...);
extern "C" u32 func_0013a9e8(...);
extern "C" u32 func_0014ae10(...);
extern "C" u32 func_002bea00(...);
extern u8 D_0014a830;

void duplicate_unplaced_0014a188();


extern u8 D_00349268;

u32 func_0014a1f0() asm("func_0014a1f0");


extern "C" u32 func_00102788(...);
extern "C" u32 func_0014a248(...);
extern u8 D_0014a310;
extern u8 D_0032b91c;
extern u8 D_0034926a;

u32 duplicate_unplaced_0014a470();


extern u8 D_00349390;
extern u8 D_00349394;
extern u8 D_00349398;

void func_0014a7b8(u32 a0, u32 a1, u32 a2, f32 a3) asm("func_0014a7b8");


extern "C" u32 func_0014a7b8(...);
extern u8 D_0034939c;

void func_0014a7f8(u32 a0, u32 a1, u32 a2, u32 a3) asm("func_0014a7f8");


extern "C" u32 func_0014a9a0(...);

u32 duplicate_unplaced_0014aa58(u32 a0, u32 a1, u32 a2);


extern "C" u32 func_0014aaa8(...);
extern u8 D_003493a0;
extern u8 D_00349b10;

void func_0014ac18() asm("func_0014ac18");


extern "C" u32 func_00102788(...);
extern "C" u32 func_0014acf8(...);
extern u8 D_0014ac18;
extern u8 D_0032b91c;

u32 duplicate_unplaced_0014ad20();


void duplicate_unplaced_0014b220(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4);


void duplicate_unplaced_0014b5e8(u32 a0, u64 a1, u64 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7);


void duplicate_unplaced_0014bb00(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4);


extern "C" u32 func_00102788(...);
extern "C" u32 func_0014c8e0(...);
extern u8 D_0014c7f0;
extern u8 D_0032b91c;

u32 duplicate_unplaced_0014c908();


extern "C" u32 func_001058e8(...);

void func_0014cb58() asm("func_0014cb58");


extern "C" u32 func_00102788(...);
extern "C" u32 func_0014f030(...);
extern u8 D_0014cd98;
extern u8 D_0032b91c;
extern u8 D_004574b8;

u32 duplicate_unplaced_0014cde0();


extern "C" u32 func_0014ce20(...);
extern "C" u32 func_0014ce30(...);
extern "C" u32 func_0014ce60(...);
extern u8 D_00349e08;

void duplicate_unplaced_0014cfc8();


extern "C" u32 func_003054b0(...);
extern "C" u32 func_00305510(...);
extern "C" u32 func_00305620(...);
extern u8 D_00349e28;

extern "C" u32 func_00305660(...);
extern u8 D_00349e7c;

void func_0014d430() asm("func_0014d430");


extern "C" u32 func_00305650(...);
extern "C" u32 func_003056a0(...);
extern u8 D_00349e28;

void func_0014d4e8() asm("func_0014d4e8");


extern "C" u32 func_0014d948(...);
extern "C" u32 func_0014da40(...);

void func_0014dd18(u32 a0) asm("func_0014dd18");


void duplicate_unplaced_0014dd60(u32 a0, u32 a1, u32 a2, u32 a3);


extern "C" u32 func_00140dc0(...);
extern "C" u32 func_00140dd0(...);
extern "C" u32 func_00140df0(...);

extern u8 D_0034a400;
extern u8 D_0034a408;

void func_0014ecb8() asm("func_0014ecb8");


u32 func_0014f068(u32) asm("func_0014f068");

u32 func_0014f0b0(u32 a0) asm("func_0014f0b0");


u32 func_0014f068(u32) asm("func_0014f068");

u32 func_0014f0e0(u32 a0) asm("func_0014f0e0");


extern "C" u32 func_0013e808(...);
extern "C" u32 func_00153100(...);
extern "C" u32 func_0015b778(...);

void func_0014f148() asm("func_0014f148");


extern "C" u32 func_00150dc0(...);
extern u8 D_0034a428;

u32 duplicate_unplaced_0014f688(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4);


extern "C" u32 func_00139d78(...);
extern "C" u32 func_00151528(...);
extern u8 D_0034a428;

void func_0014f6c8() asm("func_0014f6c8");


extern "C" u32 func_00139d78(...);
extern "C" u32 func_001514b0(...);
extern u8 D_0034a428;

void func_0014f708() asm("func_0014f708");


extern "C" u32 func_00139d78(...);
extern "C" u32 func_001515b0(...);
extern u8 D_0034a428;

void func_0014f748() asm("func_0014f748");


extern "C" u32 func_00139d78(...);
extern "C" u32 func_001515b0(...);

void func_0014f890(u32 a0) asm("func_0014f890");


extern u8 D_0034a458;

u32 func_0014fbf8(u32 a0) asm("func_0014fbf8");


extern "C" u32 func_00150be8(...);

u32 duplicate_unplaced_001514e8(u32 a0);


f32 func_00151690(u32 a0) asm("func_00151690");


extern "C" u32 func_00151d48(...);

u32 duplicate_unplaced_001520c0(u32 a0, u32 a1);


extern "C" u32 func_0023ca70(...);
extern "C" u32 func_0023f1b0(...);

u32 func_00153e28(f32 a0, f32 a1) asm("func_00153e28");


extern "C" u32 func_00138840(...);

void func_00154330(u32 a0) asm("func_00154330");


extern "C" u32 func_00138988(...);
extern "C" u32 func_00236788(...);

void func_00154358(u32 a0) asm("func_00154358");


extern "C" u32 func_00154288(...);

void func_00154408(u32 a0, u32 a1) asm("func_00154408");


u32 func_00154910(u32 a0) asm("func_00154910");


u32 func_00154930(u32 a0) asm("func_00154930");


extern "C" u32 func_0013d810(...);
extern "C" u32 func_00154450(...);

u32 duplicate_unplaced_00154b40(u32 a0, u32 a1, u32 a2);


extern "C" u32 func_00154ee8(...);
extern "C" u32 func_001581f8(...);

u32 duplicate_unplaced_00155528(u32 a0);


u32 func_00156010(u32 a0) asm("func_00156010");


extern "C" u32 func_00155f40(...);
extern "C" u32 func_00156408(...);

u32 duplicate_unplaced_00157068(u32 a0);


extern "C" u32 func_001572e8(...);

void func_001574a0(u32 a0) asm("func_001574a0");


extern "C" u32 func_00242b58(...) asm("_ZN2Tz6Config12isCameraAutoEv");

u32 duplicate_unplaced_001585a0(u32 a0);


extern "C" u32 func_00140dc0(...);
extern "C" u32 func_00140dd0(...);
extern "C" u32 func_00140df0(...);

extern "C" u32 func_00140dc0(...);
extern "C" u32 func_00140dd0(...);
extern "C" u32 func_00140df0(...);

void func_00158f90() asm("func_00158f90");


extern "C" u32 func_00140dc0(...);
extern "C" u32 func_00140dd0(...);
extern "C" u32 func_00140df0(...);

void func_001591a0() asm("func_001591a0");


extern "C" u32 func_00190128(...);
extern u8 D_0034a9f0;

void func_001591e8(u32 a0, u32 a1) asm("func_001591e8");


extern "C" u32 func_00140df0(...);
extern u8 D_0034aa08;

void duplicate_unplaced_00159700(void);


extern "C" u32 func_0013f9e0(...);
extern "C" u32 func_00159ce0(...);

void func_0015a4e0(u32 a0) asm("func_0015a4e0");


extern u8 D_0034aa40;
extern u8 D_0034aa70;

void duplicate_unplaced_0015a6c8(u32 a0);


extern "C" u32 func_0016c3a8(...);
extern u32 D_0034aa90;
extern u8 D_0034aa94;

void duplicate_unplaced_0015a8a0(void);


extern "C" u32 func_001390c0(...);
extern "C" u32 func_00139538(...);

void func_0015aef0(u32 a0) asm("func_0015aef0");


extern "C" u32 func_0015b7f8(...);
extern "C" u32 func_0015bab8(...);

void duplicate_unplaced_0015b7c0(u32 a0, u32 a1);


extern u8 D_0034ae80;

void func_0015c1b0(void) asm("func_0015c1b0");


extern u8 D_0034ae80;

void func_0015c210(void) asm("func_0015c210");


extern "C" u32 func_0014e140(...);
extern "C" u32 func_0015cb48(...);

void func_0015c4b8(void) asm("func_0015c4b8");


extern u8 D_004f36a8;

void duplicate_unplaced_0015cb18(u32 a0, u32 a1, u32 a2, u32 a3);


extern u8 D_004f3700;

void duplicate_unplaced_0015cb78(u32 a0, u32 a1);


extern "C" u32 func_001069b8(...);
u32 func_00141010(f32) asm("func_00141010");
extern "C" u32 func_0015ce90(...);
extern "C" u32 func_0015cef0(...);

void func_0015cdb0(void) asm("func_0015cdb0");


extern "C" u32 func_0015de98(...);
extern "C" u32 func_0015e018(...);
extern "C" u32 func_0015e038(...);
extern "C" u32 func_00194908(...);

void func_0015df68(void) asm("func_0015df68");


// D_0034b244 declared as Obj0015de58* in declaration block above

void func_0015df98(void) asm("func_0015df98");


extern u8 D_0034b240;

void func_0015dfd8(void) asm("func_0015dfd8");


extern "C" u32 func_0011e9a8(...);
extern "C" u32 func_00143318(...);
extern "C" u32 func_00161248(...);

void func_0015ef50(u32 a0, f32 a1) asm("func_0015ef50");


extern u8 D_0034c710;

u32 func_0015f718(u32 a0) asm("func_0015f718");


extern "C" u32 func_00102788(...);
extern u8 D_001609e0;
extern u8 D_00160a90;
extern u8 D_004f3b30;

void duplicate_unplaced_00160ac0(u32 a0, u32 a1);


extern "C" u32 func_00160d38(...);
extern "C" u32 func_00161030(...);

void func_00160fd0() asm("func_00160fd0");


extern "C" u32 func_00160d28(...);
extern "C" u32 func_00161030(...);

void func_00161000() asm("func_00161000");


extern "C" u32 func_00144450(...);
extern "C" u32 func_001616d8(...);

void duplicate_unplaced_001614e8(u32 a0, u32 a1);


extern "C" u32 func_00102688(...);
extern "C" u32 func_00102c80(...);

void duplicate_unplaced_001619e8();


extern "C" u32 func_00102688(...);
extern "C" u32 func_00102c80(...);

void duplicate_unplaced_001623b0();


void func_00162a20(u32 a0, u32 a1) asm("func_00162a20");


extern "C" u32 func_0017a718(...);
extern "C" u32 func_0019ba60(...);
extern u8 D_0034e948;

void func_0017a798() asm("func_0017a798");


u32 func_001667d0(u32 a0) asm("func_001667d0");


extern "C" u32 func_001666a0(...);

void duplicate_unplaced_001668f8(u32 a0);


extern "C" u32 func_001666a0(...);

void duplicate_unplaced_00166930(u32 a0);


f32 func_00166d10(s32 a0, s32 a1) asm("func_00166d10");


extern "C" u32 func_00166d10(...);

f32 func_00166d38(u32 a0) asm("func_00166d38");


extern "C" u32 func_00166d10(...);

f32 func_00166d70(u32 a0) asm("func_00166d70");


extern "C" u32 func_00166da8(...);
extern "C" u32 func_00167218(...);
extern u8 D_004f4240;

u32 func_00167228(u32 a0) asm("func_00167228");


extern "C" u32 func_002f65a8(...);
extern u8 D_0034d7f0;

u32 func_00167ad0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_00167ad0");


u64 func_00167c90(u32 a0, u32 a1) asm("func_00167c90");


extern "C" u32 func_00167658(...);
extern "C" u32 func_00167cd0(...);

u64 duplicate_unplaced_00167e28(u32 a0, u32 a1);


extern "C" u32 func_001ae0a0(...);
extern "C" u32 func_003058a0(...);


extern "C" u32 func_001682b8(...);
extern "C" u32 func_00168be8(...);

extern "C" u32 func_001ae4b8(...);

u32 func_00168370(void) asm("func_00168370");


extern u8 D_0034d840;

void func_00168a30(void) asm("func_00168a30");


void func_0016a2b0(u32 a0) asm("func_0016a2b0");


void func_0016a2e0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_0016a2e0");


extern "C" u32 func_0016cd48(...) asm("_ZN2YS2VM4execEPS0_");
extern "C" u32 func_00187ca0(...);

void func_0016a950(u32 a0) asm("func_0016a950");


extern "C" u32 func_001de168(...);

u32 func_0016abf8(u32 a0, u32 a1, u32 a2, u32 a3) asm("func_0016abf8");


f32 func_0016ae58(u32) asm("func_0016ae58");

void func_0016aeb8(u32 a0) asm("func_0016aeb8");


extern "C" u32 func_0016af58(...);
f32 func_002f8ad0(f32, f32) asm("func_002f8ad0");

void func_0016afe0(u32 a0) asm("func_0016afe0");


extern "C" u32 func_0016cce8(...);

void func_0016bae8(u32 a0, u32 a1, u32 a2, u32 a3) asm("func_0016bae8");


extern "C" u32 func_0017aab8(...);

void duplicate_unplaced_0016bd10(u32 a0, u32 a1);


extern "C" u32 func_0016c460(...);


extern "C" u32 func_0016cce8(...);

void func_0016c698(u32 a0, u32 a1, u32 a2) asm("func_0016c698");


void func_0016ce90(u32 a0) asm("func_0016ce90");


extern "C" u32 func_0016cf00(...);

void func_0016cfa0(u32 a0) asm("func_0016cfa0");


extern u8 D_004f6288;

void func_0016d1a0(u32 a0) asm("func_0016d1a0");


void func_0016d1f0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_0016d1f0");


f32 func_002f8870(f32) asm("func_002f8870");

void func_0016d310(u32 a0) asm("func_0016d310");


f32 func_002f8ad0(f32, f32) asm("func_002f8ad0");

void func_0016d728(u32 a0) asm("func_0016d728");


extern "C" u32 func_001dc8c8(...);
extern "C" u32 func_001dc978(...);

void func_0016e338(u32 a0) asm("func_0016e338");


extern "C" u32 func_00188958(...);

void duplicate_unplaced_0016e688(u32 a0);


extern "C" u32 func_00188b68(...);

void duplicate_unplaced_0016e718(u32 a0);


extern "C" u32 func_001a3188(...);


extern u8 D_0034d8a8;

void func_0016e858(u32 a0, u32 a1) asm("func_0016e858");


extern u8 D_004f63a0;
extern u32 D_004f63a8;

void duplicate_unplaced_0016f7b0(void);


extern u8 D_0034dc98;

void duplicate_unplaced_0016fb00(u32 a0);


extern "C" u32 func_001700e8(...);
extern u8 D_0034dca0;

void func_00170a50(void) asm("func_00170a50");


extern u8 D_0034dca0;

void func_00170e58(void) asm("func_00170e58");


void duplicate_unplaced_00171348(u32 a0);


void duplicate_unplaced_00171378(u32 a0);


void duplicate_unplaced_00171810(u32 a0);


void duplicate_unplaced_00171e58(u32 a0);


extern "C" u32 func_0016bda8(...);
extern "C" u32 func_001c7d90(...);

void func_00171f20(u32 a0) asm("func_00171f20");


extern "C" u32 func_0016bda8(...);
extern "C" u32 func_001d2930(...);

void func_00171f68(u32 a0) asm("func_00171f68");


void duplicate_unplaced_001721d8(u32 a0);


extern "C" u32 func_0016bd60(...);
extern "C" u32 func_001ba028(...);

void duplicate_unplaced_001723d0(u32 a0);


extern "C" u32 func_0016a020(...);
extern "C" u32 func_0016ace0(...);
extern "C" u32 func_0019afd8(...);

void func_001728e0(u32 a0) asm("func_001728e0");


u32 duplicate_unplaced_00172ae0(u32 a0);


extern "C" u32 func_0016b740(...);

void duplicate_unplaced_00172ba8(u32 a0);


extern "C" u32 func_0016b7a0(...);

void duplicate_unplaced_00172bd8(u32 a0);


extern "C" u32 func_0016b800(...);

void duplicate_unplaced_00172c08(u32 a0);


f32 func_001826e0() asm("func_001826e0");

void func_001730b0(u32 a0) asm("func_001730b0");


void duplicate_unplaced_00173270(u32 a0);


extern "C" u32 func_001a7588(...);

u32 duplicate_unplaced_001732c8(u32 a0);


extern "C" u32 func_00143f28(...);

u32 func_00173300(u32 a0, u32 a1, u32 a2, u32 a3) asm("func_00173300");


u32 func_001a7610(u32, u32, u32, f32, f32) asm("func_001a7610");

u32 func_001733b8(u32 a0) asm("func_001733b8");


f32 func_001806f8(u32, int) asm("func_001806f8");

void func_00173a60(u32 a0) asm("func_00173a60");


extern "C" u32 func_00180770(...) asm("_ZN2YS6MOTION12get_loop_topEi");

void func_00173a98(u32 a0) asm("func_00173a98");


extern "C" u32 func_00184ad0(...);

void func_00173c38(u32 a0) asm("func_00173c38");


f32 func_0017d130(f32) asm("func_0017d130");

void func_00173ff8(u32 a0) asm("func_00173ff8");


void func_001ad990(u32, f32, f32, f32) asm("func_001ad990");

void func_001746c8(u32 a0) asm("func_001746c8");


void func_00191bf0(f32) asm("func_00191bf0");

void func_001749c8(u32 a0) asm("func_001749c8");


extern "C" u32 func_00159130(...);
extern "C" u32 func_00190128(...);
extern "C" u32 func_00190878(...);

void func_00174be8(u32 a0) asm("func_00174be8");


extern "C" u32 func_001d2930(...);

void duplicate_unplaced_001751f8(u32 a0);


extern f32 D_00349e10;

void func_00176a68(u32 a0) asm("func_00176a68");


extern "C" u32 func_0017df58(...);
extern u8 D_0034e948;

u32 func_00176b20(u32 a0) asm("func_00176b20");


extern "C" u32 func_0016a070(...);
extern "C" u32 func_00198630(...);
extern "C" u32 func_001afee8(...);

void duplicate_unplaced_00176d68(u32 a0, u32 a1);


extern "C" u32 func_0016a070(...);
extern "C" u32 func_001a3458(...);

u32 func_00176e78(u32 a0, u32 a1, u32 a2) asm("func_00176e78");


extern "C" u32 func_00185770(...);

void func_001775a8(u32 a0) asm("func_001775a8");


extern "C" u32 func_00176b20(...);

void func_001776a8(void) asm("func_001776a8");


extern "C" u32 func_00176b20(...);

void func_00177710(void) asm("func_00177710");


extern "C" u32 func_00177860(...);
extern "C" u32 func_001a1de0(...);

u32 func_00177870(u32 a0) asm("func_00177870");


extern "C" u32 func_001778c0(...);

u32 func_00177958(u32 a0) asm("func_00177958");


extern "C" u32 func_001d6ba0(...);

void func_00178888(u32 a0) asm("func_00178888");


extern "C" u32 func_00179f10(...);
extern "C" u32 func_001d6ab0(...);

u32 duplicate_unplaced_00179f80(u32 a0);


u32 func_0017cb48(u32 a0, u32 a1) asm("func_0017cb48");


extern "C" u32 func_0017ce10(...);
extern "C" u32 func_002f87c0(...);
extern "C" u32 func_002f8960(...);

u32 func_0017d0e8(u32 a0) asm("func_0017d0e8");


extern "C" u32 func_001c9770(...);
extern u32 D_01c60528;

void duplicate_unplaced_0017dec0();


extern "C" u32 func_0017e280(...);

u32 func_0017e310(u32 a0) asm("func_0017e310");


extern "C" u32 func_0017df58(...);

u32 func_0017e6d8() asm("func_0017e6d8");


extern "C" u32 func_0017ec28(...);
extern "C" u32 func_0017ec98(...);
extern "C" u32 func_001a97b8(...);

void func_0017ec30(u32 a0) asm("func_0017ec30");


extern "C" u32 func_0017ebc8(...);

u32 func_0017eda8(u32 a0, u32 a1) asm("func_0017eda8");


extern "C" void func_0017fd30(u32, u32) asm("_ZN2YS6MOTION4syncEPS0_");

void duplicate_unplaced_001805e8(u32 a0);


extern "C" u32 func_00189d18(...);

void func_001807a0(u32 a0) asm("func_001807a0");


extern "C" u32 func_001892b8(...);

void func_001807d0(u32 a0) asm("func_001807d0");


extern "C" u32 func_002bc358(...);

void func_00180c38(u32 a0) asm("func_00180c38");


void func_00180df8(u32 a0, u32 a1) asm("func_00180df8");


extern "C" u32 func_00181500(...);

u32 func_00181858(void) asm("func_00181858");


extern "C" u32 func_00181500(...);

u32 func_001818a0(void) asm("func_001818a0");


extern "C" u32 func_00181500(...);

u32 func_001818e8(void) asm("func_001818e8");


extern "C" u32 func_00181500(...);

extern "C" u32 func_00181500(...);

extern "C" u32 func_00181178(...);
extern u8 D_0032bb30;

u32 duplicate_unplaced_00181a90(u32 a0);


f32 func_001826e0() asm("func_001826e0");

u32 func_00182690(f32 f12) asm("func_00182690");


extern u8 D_01c60540;

void func_001826c8(f32 f12) asm("func_001826c8");


extern "C" u32 func_00199d38(...);

void func_00182910(u32 a0) asm("func_00182910");


extern "C" u32 func_00196908(...);
extern "C" u32 func_00199dc0(...);

void func_00182940(u32 a0) asm("func_00182940");


extern "C" u32 func_0019a048(...);

void func_00182980(u32 a0) asm("func_00182980");


void func_001842c0(u32 a0) asm("func_001842c0");


f32 func_001849d8(u32) asm("func_001849d8");

f32 func_00184a90(u32 a0) asm("func_00184a90");


extern u8 D_0034ed0c;

void func_00185118(u32 a0) asm("func_00185118");


extern "C" u32 func_0016ad38(...);
extern "C" u32 func_00185138(...);

void func_00185278(u32 a0, u32 a1) asm("func_00185278");


void duplicate_unplaced_00185a98(u32 a0);


extern "C" u32 func_001c0cd8(...);

u32 func_00185ac0(u32 a0) asm("func_00185ac0");


extern "C" u32 func_00186478(...);
extern "C" u32 func_00186a90(...);

void func_00186548(u32 a0, u32 a1, f32 f12) asm("func_00186548");


extern "C" u32 func_00186590(...);
extern "C" u32 func_00186c58(...);

void func_001866a0(u32 a0, u32 a1, f32 f12) asm("func_001866a0");


extern "C" u32 func_00186590(...);
extern "C" u32 func_00186a90(...);

void func_001866f0(u32 a0, u32 a1, f32 f12) asm("func_001866f0");


extern "C" u32 func_001860b0(...);
extern "C" u32 func_001c1b08(...);

void duplicate_unplaced_00186948(u32 a0, u32 a1);


extern "C" u32 func_0016cce8(...);

void func_00186fd8(u32 a0, u32 a1) asm("func_00186fd8");


void func_001a1d40(u32, f32) asm("func_001a1d40");


extern "C" u32 func_0016a5b0(...);
extern "C" u32 func_001dc920(...);
extern "C" u32 func_001dc9e0(...);

void func_00187750(u32 a0) asm("func_00187750");


void func_00187818(u32 a0) asm("func_00187818");


u32 func_00187b30(u32 a0) asm("func_00187b30");


extern "C" u32 func_00187ab8(...);

void func_00187b68(void) asm("func_00187b68");


extern "C" u32 func_00187b90(...);

void func_00187f90(u32 a0) asm("func_00187f90");


extern "C" u32 func_001880b0(...);
extern "C" u32 func_001883d8(...);

void func_00188120(u32 a0, u32 a1) asm("func_00188120");


extern "C" u32 func_00188340(...);
extern u8 D_01c60bc8;

void duplicate_unplaced_001883f8(u32 a0, u32 a1);


extern "C" u32 func_00188340(...);
extern u8 D_01c60bd0;

void duplicate_unplaced_00188430(u32 a0, u32 a1, u32 a2);


extern u8 D_01c608c0;

void func_001887d8(u32 a0, u32 a1) asm("func_001887d8");


extern "C" u32 func_00188948(...);
extern "C" u32 func_00188fe0(...);

void duplicate_unplaced_00189028(u32 a0, u32 a1, u32 a2, u32 a3);


u32 func_00189068(u32 a0, u32 a1) asm("func_00189068");


void func_00189170(u32 a0) asm("func_00189170");


u32 func_0018a218(u32 a0, u32 a1) asm("func_0018a218");


extern "C" u32 func_0018a670(...);

void func_0018a7d0(u32 a0, u32 a1) asm("func_0018a7d0");


void func_0018a958(u32 a0, u32 a1, f32 f12, f32 f13) asm("func_0018a958");


void func_0018acd8(u32 a0, u32 a1) asm("func_0018acd8");


extern "C" u32 func_0016c2b0(...);
extern "C" u32 func_0018b010(...);

void func_0018b0c8(u32 a0, u32 a1, u32 a2) asm("func_0018b0c8");


u32 func_0018b198(u32 a0) asm("func_0018b198");


u32 func_0018b1d8(u32 a0) asm("func_0018b1d8");


void func_0018b338(f32) asm("func_0018b338");

void func_0018b270(void) asm("func_0018b270");


u32 func_0018c458(u32 a0) asm("func_0018c458");


extern f32 D_00349e10;

void func_0018c570(u32 a0) asm("func_0018c570");


u32 func_0018ca90(u32 a0) asm("func_0018ca90");


u32 duplicate_unplaced_0018cae0(u32 a0);



u32 func_0018ee10(u32 a0) asm("func_0018ee10");


u32 func_0018ee28(u32 a0) asm("func_0018ee28");


void func_0018efe8(u32 a0) asm("func_0018efe8");


u32 duplicate_unplaced_0018f010(u32 a0);


extern "C" u32 func_0018f070(...);

void func_0018f028(u32 a0) asm("func_0018f028");


extern "C" u32 func_0019ba60(...);

void func_0018f428(u32 a0) asm("func_0018f428");


extern "C" u32 func_0018ca48(...);

void func_0018f4c0(u32 a0) asm("func_0018f4c0");


extern "C" u32 func_001a48c0(...);

void duplicate_unplaced_0018f770(u32 a0);


extern "C" u32 func_0018e0d8(...);

void duplicate_unplaced_0018f8a0(u32 a0);


extern "C" u32 func_0018e108(...);

void duplicate_unplaced_0018fc20(u32 a0);


extern "C" u32 func_001050d8(...);
extern "C" u32 func_001d37a0(...);

void func_0018ffb8(u32 a0) asm("func_0018ffb8");


extern "C" u32 func_0019ba60(...);


extern "C" u32 func_00190140(...);
extern "C" u32 func_0019bc38(...);

u32 func_001901c0(u32 a0) asm("func_001901c0");


u32 func_00190680(u32 a0, u32 a1) asm("func_00190680");


extern u8 D_0034e948;
extern u8 D_0034f240;

u32 func_001919d0(void) asm("func_001919d0");


extern u8 D_0034e948;
extern u8 D_0034f240;

u32 func_001919f8(void) asm("func_001919f8");


extern "C" u32 func_001917b0(...);
extern u8 D_0034f240;

u32 func_00191c88(void) asm("func_00191c88");


extern "C" u32 func_00170518(...);
extern "C" u32 func_001921d8(...);

void duplicate_unplaced_00192260(u32 a0, u32 a1);


extern "C" u32 func_00192388(...);

u32 func_00192b30(u32 a0) asm("func_00192b30");


extern u8 D_01c61970;

void func_00192fc8(u32 a0, u32 a1) asm("func_00192fc8");


void func_001ad990(u32, f32, f32, f32) asm("func_001ad990");
extern "C" u32 func_001bfd60(...);

void func_00194610(u32 a0, f32 a1) asm("func_00194610");


u32 duplicate_unplaced_001946f0(u32 a0);


void func_00195430(u32 a0) asm("func_00195430");


extern "C" u32 func_00195468(...);

void func_001954f8(u32 a0, u32 a1) asm("func_001954f8");


extern "C" u32 func_00195558(...);
extern u8 D_0034f250;
extern u8 D_0034fa78;

void duplicate_unplaced_00195750(void);


extern "C" u32 func_001b1448(...);

void duplicate_unplaced_00196170(void);


extern "C" u32 func_001b1448(...);

void duplicate_unplaced_00196300(void);


u32 func_00196388(u32 a0, u32 a1) asm("func_00196388");


extern "C" u32 func_0016d110(...);
extern "C" u32 func_001969c0(...);

void func_00196a08(void) asm("func_00196a08");


extern "C" u32 func_00196aa0(...);

void func_00196b28(u32 a0, u32 a1) asm("func_00196b28");


extern "C" u32 func_00196aa0(...);

void func_00196b58(u32 a0, u32 a1) asm("func_00196b58");


void func_00196e88(u32 a0, u32 a1, u32 a2, f32 a3) asm("func_00196e88");


extern "C" u32 func_00196e88(...);
extern "C" u32 func_002bc788(...) asm("_ZN5SOUND11SE3DDisableEv");

void func_00197568(u32 a0) asm("func_00197568");


extern "C" u32 func_00196e88(...);
extern "C" u32 func_001c1130(...);

void func_001978f0(void) asm("func_001978f0");


extern "C" u32 func_00102c18(...);
extern u8 D_00197cf0;


u32 func_00197e40(void) asm("func_00197e40");


extern "C" u32 func_001b0250(...);

void func_00198660(u32 a0, u32 a1, u32 a2, u32 a3) asm("func_00198660");


extern "C" u32 func_00198bd0(...);
extern "C" u32 func_00198ee8(...);
extern "C" u32 func_00199030(...);

u32 func_00198cb8(void) asm("func_00198cb8");


extern "C" u32 func_00199890(...);

void func_00199938(u32 a0, u32 a1) asm("func_00199938");


extern u8 D_00350440;
extern u8 D_01c62198;

u32 func_0019abe8(void) asm("func_0019abe8");


extern "C" u32 func_0016b7a0(...);
extern u8 D_0034f250;

u32 func_0019ac30(u32 a0, u32 a1) asm("func_0019ac30");


extern "C" u32 func_001991a8(...);

u32 duplicate_unplaced_0019af98(u32 a0);


u32 func_0019bb18(u32 a0) asm("func_0019bb18");


u32 func_0019bb58(u32 a0) asm("func_0019bb58");


extern "C" u32 func_0019cc20(...);
extern u8 D_00350444;

void duplicate_unplaced_0019c970(u32 a0);


extern "C" u32 func_0019cc20(...);
extern u8 D_00350444;

void duplicate_unplaced_0019c9a8(u32 a0);


extern "C" u32 func_0015a638(...);

void func_0019c9e0(u32 a0, u32 a1) asm("func_0019c9e0");



extern "C" u32 func_00154c10(...);
extern "C" u32 func_0019d380(...);

void func_0019d3b8(u32 a0, u32 a1, u32 a2) asm("func_0019d3b8");


extern "C" u32 func_00154b98(...);
extern "C" u32 func_0019d380(...);

void func_0019d3f8(u32 a0, u32 a1, u32 a2) asm("func_0019d3f8");


extern "C" u32 func_0015a708(...);
extern "C" u32 func_0019d4a8(...);
extern "C" u32 func_002c0700(...);

void func_0019d480(void) asm("func_0019d480");


extern "C" u32 func_00190128(...);

void duplicate_unplaced_0019da20(u32 a0, u32 a1);


u32 func_0019e698(u32 a0, u32 a1) asm("func_0019e698");


extern "C" u32 func_00102c18(...);
extern "C" u32 func_0019ec88(...);
extern "C" u32 func_0019ed48(...);
extern u8 D_0019ec68;
extern u8 D_00350448;

void duplicate_unplaced_0019ec20(void);


void func_001ad990(u32, f32, f32, f32) asm("func_001ad990");

void func_0019ed78(u32 a0, f32 a1) asm("func_0019ed78");


extern u8 D_0032de28;

void func_0019ef30(void) asm("func_0019ef30");


void func_0019ef70(u32 a0) asm("func_0019ef70");


void duplicate_unplaced_0019f490(u32 a0, u32 a1);


void duplicate_unplaced_0019f4b8(u32 a0, u32 a1);


void func_0019f578(u32 a0) asm("func_0019f578");


extern "C" u32 func_0019f5d8(...);

void func_0019f6c8(void) asm("func_0019f6c8");


extern "C" u32 func_001dc620(...);

void func_0016e1c0(BD_VALUE* param_1) asm("func_0016e1c0");

extern "C" u32 func_0018c258(...);
extern u8 D_01e2be20;

void func_00174190(u32 a0) asm("func_00174190");


extern "C" u32 func_00190388(...);
extern u8 D_01e2be20;

void func_00174558(u32 a0) asm("func_00174558");

void duplicate_unplaced_00198ea8(u32 a0, u32 a1);


u32 func_0019f6f0(u32 a0, u32 a1, u32 a2) asm("func_0019f6f0");


f32 func_001a1e00(u32 a0) asm("func_001a1e00");


extern "C" u32 func_00190128(...);
extern u8 D_01c6cb7c;

void func_001a7530(u32 a0, u32 a1) asm("func_001a7530");


extern "C" u32 func_00102c18(...);
extern u8 D_001ba6b0;


extern "C" u32 func_001bae38(...);
extern u8 D_01d49320;

void func_001bb438(void) asm("func_001bb438");


extern "C" u32 func_001d3328(...);
extern u8 D_01d5ba10;

void func_001d3588(u32 a0, u32 a1) asm("func_001d3588");


extern "C" u32 func_001d6a80(...);
extern u8 D_003527e0;

void func_001d6c58(void) asm("func_001d6c58");


extern "C" u32 func_001d6ab0(...);
extern u8 D_003527e0;

void func_001d6c88(void) asm("func_001d6c88");


extern "C" u32 func_001b1448(...);

void duplicate_unplaced_001d9d00(void);


extern u8 D_01d5bb00;

void duplicate_unplaced_001dc4b8(u32 a0);


extern u8 D_01d9e340;

void duplicate_unplaced_001de978(u32 a0);


extern u8 D_01d9e340;

void duplicate_unplaced_001e0158(u32 a0);


extern u8 D_01d9e340;

void duplicate_unplaced_001e01b8(u32 a0);


extern "C" u32 func_00242ea8(...);
extern "C" u32 func_002bc1e8(...);

void func_002251c8(u32 a0) asm("func_002251c8");


extern "C" u32 func_00139d78(...);

void func_0022b638(u32 a0, u32 a1) asm("func_0022b638");


extern u8 D_0035e298;

extern "C" u32 func_001a8bb8(...);
extern u8 D_0035f060;

void func_00258120(u32 a0, u32 a1) asm("func_00258120");


extern "C" u32 func_00102a38(...);
extern "C" u32 func_00103eb0(...);
extern u8 D_00293b08;

u32 duplicate_unplaced_00293b70(u32 a0, u32 a1);


s32 func_001de2e0(u32 a0, u64 a1) asm("func_001de2e0");


void func_001de690(void) asm("func_001de690");


void func_001de6d0(void) asm("func_001de6d0");


void func_001de710(void) asm("func_001de710");


u32 func_001de7b0(u32 a0) asm("func_001de7b0");


u32 duplicate_unplaced_001de948(u32 a0);


u32 duplicate_unplaced_001e0128(u32 a0);


u32 duplicate_unplaced_001e0188(u32 a0);


void func_001e0400(u32 a0, f32 a1, f32 a2, f32 a3, f32 a4, f32 a5, f32 a6, f32 a7) asm("func_001e0400");


u32 func_001e0a90(void) asm("func_001e0a90");


void duplicate_unplaced_001e0dc8(u32 a0);


void duplicate_unplaced_001e1ce0(u32 a0);


u32 duplicate_unplaced_001e4f00(void);


void func_001e5f40(u32 a0, u32 a1) asm("func_001e5f40");


void func_001e5f88(u32 a0, u32 a1) asm("func_001e5f88");


void func_001e6000(u32 a0) asm("func_001e6000");


u32 func_001e6b90(void) asm("func_001e6b90");


u32 func_001e7188(u32 a0, u32 a1, s32 a2) asm("func_001e7188");


f32 duplicate_unplaced_001ed130(f32 a0, f32 a1);


f32 duplicate_unplaced_001ed2d8(f32 a0, f32 a1);


f32 duplicate_unplaced_001ed488(f32 a0, f32 a1);


s32 func_001ed638(s32 a0, f32 a1) asm("func_001ed638");


s8 func_001edb18(s8 a0, f32 a1) asm("func_001edb18");


s32 func_001edce0(s32 a0, f32 a1) asm("func_001edce0");


s32 func_001edea8(s32 a0, f32 a1) asm("func_001edea8");


s32 func_001ee070(s32 a0, f32 a1) asm("func_001ee070");


s32 func_001ee238(s32 a0, f32 a1) asm("func_001ee238");


s32 func_001ee400(s32 a0, f32 a1) asm("func_001ee400");


f32 duplicate_unplaced_001ee5c8(f32 a0, f32 a1);


f32 duplicate_unplaced_001ee7a0(f32 a0, f32 a1);


f32 duplicate_unplaced_001ee980(f32 a0, f32 a1);


s32 func_001eeb60(s32 a0, f32 a1) asm("func_001eeb60");


s32 func_001eed60(s32 a0, f32 a1) asm("func_001eed60");


s32 func_001eef68(s32 a0, f32 a1) asm("func_001eef68");


s32 func_001ef170(s32 a0, f32 a1) asm("func_001ef170");


s32 func_001ef370(s32 a0, f32 a1) asm("func_001ef370");


s32 func_001ef578(s32 a0, f32 a1) asm("func_001ef578");


void func_001eff30(u32 a0, u8* a1) asm("func_001eff30");


void func_001f02b0(u32 a0, u8* a1) asm("func_001f02b0");


void func_001f45f8(u32 a0, u8* a1) asm("func_001f45f8");


extern "C" void func_0021fa10(...);
extern "C" void func_0021fbc0(...);
extern "C" void func_0021fe28(...);
extern "C" void func_00220070(...);
void duplicate_unplaced_001fa928(u32 a0, u8* a1);


void duplicate_unplaced_001fab08(u32 a0, u8* a1);


void duplicate_unplaced_001facd0(u32 a0, u8* a1);


void duplicate_unplaced_001fae80(u32 a0, u8* a1);


void duplicate_unplaced_001fb698(u32 a0, u8* a1);


void duplicate_unplaced_001fb870(u32 a0, u8* a1);


void duplicate_unplaced_001fba88(u32 a0, u8* a1);


void duplicate_unplaced_001fbc78(u32 a0, u8* a1);


void func_002029a0(u32 a0, u8* a1) asm("func_002029a0");


void func_002039f8(u32 a0, u8* a1) asm("func_002039f8");


s32 func_0020a060(u8* a0, u8* a1) asm("func_0020a060");


s32 func_0020b4b8(u8* a0, u8* a1) asm("func_0020b4b8");


void func_0020ce60(u32 a0, u8* a1) asm("func_0020ce60");


void func_00220088(u8* a0, u32 a1) asm("func_00220088");


void func_00222a00(u32 a0, u32 a1) asm("func_00222a00");


void func_00224828() asm("func_00224828");


s32 func_00224890() asm("func_00224890");


void duplicate_unplaced_00224950(u32 a0);


void func_00224b88(u32 a0) asm("func_00224b88");


void func_00224bd0() asm("func_00224bd0");


void func_00224f08(u8* a0) asm("func_00224f08");


void func_002255f0() asm("func_002255f0");


void func_00225208() asm("func_00225208");


u32 duplicate_unplaced_00225640(u32 a0, u32 a1, u32 a2);


extern "C" void func_00227930(...);
extern "C" u32 func_00225a30(...);
void duplicate_unplaced_00225690(u8* a0);


s32 func_00225a68() asm("func_00225a68");


void func_00226030(u32 a0, u32 a1, u8* a2) asm("func_00226030");


void duplicate_unplaced_00226a78();


void duplicate_unplaced_00226f78(u32 a0);


u8* func_00227bd8(u32 a0, u32 a1) asm("func_00227bd8");


f32 func_00227c78(u16* a0) asm("func_00227c78");


u32 func_00227ca8(u16* a0) asm("func_00227ca8");


u8* func_00227d10(u32 a0) asm("func_00227d10");


u8* func_00227d58(u32 a0) asm("func_00227d58");


s32 func_002283f8() asm("func_002283f8");


void duplicate_unplaced_002289c0(u32 a0);


void duplicate_unplaced_00228e28(u32 a0);


void func_00229448(u32 a0) asm("func_00229448");


void func_0022ab90(u8* a0) asm("func_0022ab90");


s32 func_0022afe8(s32 a0) asm("func_0022afe8");


void func_0022b5f0(u8* a0) asm("func_0022b5f0");


u32 duplicate_unplaced_0022b7f0();


void func_0022bbc8() asm("func_0022bbc8");


void func_0022beb0(u8* a0) asm("func_0022beb0");


u32 duplicate_unplaced_0022c4b8(u32 a0);


extern "C" u32 func_0022c4b8(...);
void duplicate_unplaced_0022c508();


void func_0022cc08(u8* a0) asm("func_0022cc08");


void func_0022ce00(u8* a0) asm("func_0022ce00");


void func_0022ce50(u8* a0) asm("func_0022ce50");


void func_0022d068(u32* a0) asm("func_0022d068");


void func_0022d238(u8* a0) asm("func_0022d238");


extern "C" u32 func_001977a0(...);
void func_0022d358(u32 a0) asm("func_0022d358");


void func_0022d688() asm("func_0022d688");


extern "C" void func_0022d6d8() asm("_ZN2sa5EVENT7wide_onEv");

void func_0022d728(u8* a0) asm("func_0022d728");


void func_0022d778(u8* a0) asm("func_0022d778");


u32 func_0022e110(u8* a0) asm("func_0022e110");


extern "C" void func_00226030(...);
void duplicate_unplaced_0022e160(u32 a0, u32 a1, u32 a2);


void func_0022e7e8(u32* a0) asm("func_0022e7e8");


void func_0022e9f8(u32* a0) asm("func_0022e9f8");


void func_0022ee00(u32* a0) asm("func_0022ee00");


void duplicate_unplaced_0022f5a0(u32 a0, u32 a1, u32 a2);


f32 func_0022f8f0(f32* a0, f32* a1) asm("func_0022f8f0");


void func_002326d0(u32* a0) asm("func_002326d0");


void duplicate_unplaced_00232718();


void func_00232d60(u8* a0) asm("func_00232d60");


u32 func_00232e18(u32 a0) asm("func_00232e18");


void duplicate_unplaced_00236148();


void func_00237a68(u8* a0, f32 a1, f32 a2, f32 a3) asm("func_00237a68");


f32 func_00239bb8(u8* a0) asm("func_00239bb8");


u32 duplicate_unplaced_00239cf0(u8* a0);


void func_00239d50(u8* a0, f32 a1) asm("func_00239d50");


void func_00239da0(u8* a0, f32 a1) asm("func_00239da0");


void func_00239df0(u8* a0, f32 a1) asm("func_00239df0");


f32 func_0023a8e0(u8* a0) asm("func_0023a8e0");


extern "C" u32 func_0023ca30(...);
u32 func_0023c5a0(u32 a0) asm("func_0023c5a0");


f32 func_0023c6b8(u32 a0) asm("func_0023c6b8");


u32 func_0023c900(u32 a0) asm("func_0023c900");


void duplicate_unplaced_0023cdb8();


void duplicate_unplaced_0023d260();


void duplicate_unplaced_0023d3d0();


void func_0023ed00() asm("func_0023ed00");


void func_0023ed38() asm("func_0023ed38");


void func_0023ede8() asm("func_0023ede8");


u32 func_0023ee30(u32 a0) asm("func_0023ee30");


extern "C" u32 func_0023c6f8(...);
void func_0023f168(u32 a0) asm("func_0023f168");


extern "C" u32 func_0023a918(...);
u32 func_0023f6f8(u32 a0, u32 a1) asm("func_0023f6f8");


void func_0023f778(u32 a0, u32 a1) asm("func_0023f778");


void func_0023f7a8(u32 a0, u32 a1) asm("func_0023f7a8");


void duplicate_unplaced_0023fb00(u32 a0);


void duplicate_unplaced_0023fb28();


u32 func_0023fb58(u32 a0) asm("func_0023fb58");


void duplicate_unplaced_0023fb90(u32 a0);


u32 func_0023fdf0(u32 a0) asm("func_0023fdf0");


void duplicate_unplaced_0023fe28(u32 a0);


void duplicate_unplaced_002409b8(u32 a0);


void duplicate_unplaced_00240b48(u32 a0);


void duplicate_unplaced_00240e10();


void duplicate_unplaced_00240fd8(s32 a0, u32 a1);


void duplicate_unplaced_00241320();


void duplicate_unplaced_00241528();


void duplicate_unplaced_00241568();


void duplicate_unplaced_00241740(s32 a0);


u32 duplicate_unplaced_00241770(s32 a0);


void func_002420d8(u32 a0, u32 a1) asm("func_002420d8");


void func_00242258(u32 a0) asm("func_00242258");



void func_002422f0() asm("func_002422f0");


u32 func_00242330(u32 a0) asm("func_00242330");


void duplicate_unplaced_00242368(u32 a0);


u32 duplicate_unplaced_002424c0(u32 a0);


void func_002425d0(u32 a0) asm("func_002425d0");



void duplicate_unplaced_00242a28(u32 a0);


void duplicate_unplaced_00242b10(u32 a0);


void duplicate_unplaced_00242b88(u32 a0);


void duplicate_unplaced_00242ca0(u32 a0);


void duplicate_unplaced_00242d10(u32 a0);


void duplicate_unplaced_00242d80(u32 a0);


void func_00243130(u32 a0) asm("func_00243130");


void func_00244988() asm("func_00244988");


void func_002449c0() asm("func_002449c0");


void func_002467b8() asm("func_002467b8");


void func_002467f0() asm("func_002467f0");


u32 func_002468a0(u32 a0) asm("func_002468a0");


void func_00249148() asm("func_00249148");


void func_00249180() asm("func_00249180");


void func_0024abb0() asm("func_0024abb0");


void func_0024abe8() asm("func_0024abe8");


u32 func_0024ac38(u32 a0) asm("func_0024ac38");


void func_0024c618() asm("func_0024c618");


void func_0024c650() asm("func_0024c650");


void func_0024df58() asm("func_0024df58");


void func_0024df90() asm("func_0024df90");


u32 func_0024dfe0() asm("func_0024dfe0");


u32 func_0024e058() asm("func_0024e058");


void func_0024f2d0() asm("func_0024f2d0");


void func_0024f310() asm("func_0024f310");


void func_0024f348() asm("func_0024f348");


void duplicate_unplaced_00251e90(u32 a0);


void duplicate_unplaced_00252618();


void func_00252ba8() asm("func_00252ba8");


void func_00252bf0() asm("func_00252bf0");


void func_00252f98() asm("func_00252f98");


void func_002537e0(u32 a0) asm("func_002537e0");


u32 duplicate_unplaced_002538f8(u32 a0);


u32 duplicate_unplaced_00258068(s32 a0);


void duplicate_unplaced_00258d58(u32 a0, u32 a1, u32 a2);


void duplicate_unplaced_00258d78(u32 a0, u32 a1, u32 a2, u32 a3);


void duplicate_unplaced_00259570(u32 a0, u32 a1, u32 a2, u32 a3);


void duplicate_unplaced_0025a1d0();


void duplicate_unplaced_0025ccc0();


void func_0025ccf0() asm("func_0025ccf0");


void duplicate_unplaced_0025cd40();


void duplicate_unplaced_0025dba8();


void func_00262118() asm("func_00262118");


extern "C" u32 func_00257780(...);
u32 func_00262160() asm("func_00262160");


extern "C" void func_00262538() asm("_ZN2Tz9ScrollBar7FadeOutEv");

u32 duplicate_unplaced_00263d70();


u32 func_00263eb8(void* a0) asm("func_00263eb8");


extern "C" u32 func_00256e80(...);
void func_00264408() asm("func_00264408");


void func_00264458() asm("func_00264458");


u32 func_00267248() asm("func_00267248");


u32 func_002674b8() asm("func_002674b8");


u32 duplicate_unplaced_002691c8();


u32 duplicate_unplaced_00269378();


u32 duplicate_unplaced_0026dcb8();


void duplicate_unplaced_0026dd18(u32 a0, u32 a1, s32 a2);


void func_0026ede0() asm("func_0026ede0");


extern "C" void func_0026ee30() asm("_ZN2Tz8CmCustom8LeaveAllEv");

u32 func_00272428() asm("func_00272428");


void func_00274db8() asm("func_00274db8");


void func_00274e08() asm("func_00274e08");


void func_00274e50() asm("func_00274e50");


void func_00276300() asm("func_00276300");


void func_00276598() asm("func_00276598");


void func_00276dc0() asm("func_00276dc0");


u32 func_00276fa8() asm("func_00276fa8");


extern "C" void func_00277128() asm("_ZN2Tz9CmAbility8LeaveAllEv");

u32 func_0027a1c8() asm("func_0027a1c8");


u32 func_0027bba0(u32 a0) asm("func_0027bba0");


u32 func_0027d4f0(u32 a0) asm("func_0027d4f0");


void duplicate_unplaced_0027dc20(u32* a0, u32* a1);


void func_002804f0() asm("func_002804f0");


u32 func_002811b0(u32 a0, s32 a1) asm("func_002811b0");


u32 func_00281388(u32 a0) asm("func_00281388");


void func_002814f0(u32 a0, u32 a1) asm("func_002814f0");


u32 func_00281be0() asm("func_00281be0");


void func_00281e20() asm("func_00281e20");


void duplicate_unplaced_00281e70(u32 a0);


void duplicate_unplaced_00281e88(u32 a0);


void duplicate_unplaced_00281ec8(u32 a0);


u32 duplicate_unplaced_00282228(u32 a0, u32 a1, u32 a2);


void func_00283180() asm("func_00283180");


void func_002831b0() asm("func_002831b0");


u32 duplicate_unplaced_002831e0(u32 a0, u32 a1);


u32 duplicate_unplaced_00284048();


void duplicate_unplaced_00284ea8();


void func_00285418() asm("func_00285418");


u32 func_00285728() asm("func_00285728");


void func_00287880(void* a0, u32 a1) asm("func_00287880");


void func_002878c8(void* a0) asm("func_002878c8");


void duplicate_unplaced_00287b30();


void duplicate_unplaced_00287b98();


void duplicate_unplaced_00287d08();


extern "C" u32 func_00167f18(...);
s32 duplicate_unplaced_00288088();


void func_002885d0() asm("func_002885d0");


void duplicate_unplaced_00288c20(void* a0);


void duplicate_unplaced_00288c58(void* a0, u32 a1);



u32 func_00289358(void* a0) asm("func_00289358");


void duplicate_unplaced_0028af90(void* a0, s32 a1);


void func_0028b4c0(void* a0, void* a1) asm("func_0028b4c0");


void func_0028b4f0(void* a0, void* a1) asm("func_0028b4f0");


void func_0028b6f0(void* a0, void* a1) asm("func_0028b6f0");


void func_0028b720(void* a0, void* a1) asm("func_0028b720");


void duplicate_unplaced_0028cc40(void* a0);


extern "C" u32 func_0028ddd8(s32) asm("_ZN2Tz8MenuUtil11GetFontTypeEi");

void duplicate_unplaced_0028e710(void* a0, u32 a1);


extern "C" u32 func_0023aa18(...);
extern "C" u32 func_0023aa38(...);
void duplicate_unplaced_0028eab8(void* a0, void* a1);


void func_0028eb00(void* a0, f32 a1) asm("func_0028eb00");


void func_0028eb38(void* a0, s32 a1, f32 a2) asm("func_0028eb38");


void func_0028f7a0() asm("func_0028f7a0");


u32 func_00290060(void* a0) asm("func_00290060");


u32 func_00290580(void* a0) asm("func_00290580");


void duplicate_unplaced_00290a10(void* a0, void* a1, void* a2);


u32 duplicate_unplaced_002925c0();


void func_00293780() asm("func_00293780");


u32 func_00293f40(u32 a0) asm("func_00293f40");


void duplicate_unplaced_00293f78(u32 a0);


u32 duplicate_unplaced_00293fc0();


u32 duplicate_unplaced_002943b0(void* a0);


s32 duplicate_unplaced_00295228(u32 a0);


void func_00295668() asm("func_00295668");


extern "C" u32 func_0029da68(...);
void func_0029dd60() asm("func_0029dd60");


u32 func_0029e0f8() asm("func_0029e0f8");


void func_0029ee38() asm("func_0029ee38");


u32 duplicate_unplaced_002a01c8(u32 a0);


u32 duplicate_unplaced_002a0360();


u32 func_002a3910() asm("func_002a3910");


u32 duplicate_unplaced_002a6368(u32 a0);


void func_002a6a18() asm("func_002a6a18");


u32 func_002a7490() asm("func_002a7490");


void func_002a7760() asm("func_002a7760");


u32 duplicate_unplaced_002a7f20(u32 a0);


u32 duplicate_unplaced_002a8920();


void func_002a8a88() asm("func_002a8a88");


u32 duplicate_unplaced_002a92a0(u32 a0);


void duplicate_unplaced_002b6530(u32 a0);


u32 duplicate_unplaced_002ba140(u32 a0, u32 a1, u32 a2);


u32 duplicate_unplaced_002ba1b8(u32 a0, u32 a1, u32 a2);


void duplicate_unplaced_002ba8a8();


void duplicate_unplaced_002ba948();


void func_002bac08(u32 a0, u32 a1) asm("func_002bac08");


void func_002bac78(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6) asm("func_002bac78");


void func_002bb0a0(s32 a0, s32* a1, s32* a2) asm("func_002bb0a0");


void func_002bb0e0(u32 a0) asm("func_002bb0e0");


void func_002bb180(u32 a0, u32 a1) asm("func_002bb180");


void func_002bb5a8(void* a0, void* a1) asm("func_002bb5a8");


void func_002bc9a8(s32 a0, u32 a1, u32 a2) asm("func_002bc9a8");


s32 func_002bca48(s32 a0, u32 a1) asm("func_002bca48");


s32 func_002bcd60(s32 a0, u32 a1) asm("func_002bcd60");


void func_002bcda8(s32 a0, u32 a1) asm("func_002bcda8");


void func_002bce10(u32* a0, u32 a1) asm("func_002bce10");


void func_002bcfa0() asm("func_002bcfa0");


void func_002bcfe8(u32* a0) asm("func_002bcfe8");


void func_002bd030() asm("func_002bd030");


void func_002bd078(u32* a0) asm("func_002bd078");


void func_002bd0b8() asm("func_002bd0b8");


void func_002bd100(u32* a0) asm("func_002bd100");


void func_002bd140() asm("func_002bd140");


u32 duplicate_unplaced_002bd260(u32 a0, u32 a1, u32 a2, u32 a3);


void duplicate_unplaced_002bd538();


void func_002bd680() asm("func_002bd680");


u32 duplicate_unplaced_002bd730(u32 a0, u32 a1, u32 a2, u32 a3);


void duplicate_unplaced_002bd788(u32 a0);


void func_002bd838() asm("func_002bd838");


void func_002be318(u32 a0, u32 a1, kn::FVector* a2) asm("func_002be318");


void duplicate_unplaced_002be568(u32* a0, u32 a1);


u32 func_002be5f8() asm("func_002be5f8");


void duplicate_unplaced_002be770(u32* a0, u32 a1, u32 a2);


void duplicate_unplaced_002be7b8(u32* a0, u32 a1, u32 a2);


void func_002bea20() asm("func_002bea20");


u32 duplicate_unplaced_002beb90(u32 a0, u32 a1, u32 a2, u32 a3);


void duplicate_unplaced_002bee58(u32* a0);


void duplicate_unplaced_002beea8(u32* a0);


void duplicate_unplaced_002bfaf0();


void duplicate_unplaced_002bfb40();


void func_002c1750() asm("func_002c1750");


void duplicate_unplaced_002c1c50(u32 a0);


void func_002c2228(u32 a0) asm("func_002c2228");


void func_002c2248(u32 a0) asm("func_002c2248");


extern "C" void func_00160fd0(...);
extern "C" void func_00161000(...);
void func_002c2268(u32 a0) asm("func_002c2268");


void func_002c2288(u32 a0) asm("func_002c2288");


void func_002c24e0(u32 a0) asm("func_002c24e0");


void func_002c2518(u32 a0) asm("func_002c2518");


u32 func_002c2550(u32 a0) asm("func_002c2550");


u32 func_002c5150() asm("func_002c5150");


void duplicate_unplaced_002c5418(u32 a0);


void func_002c55b0(u32 a0) asm("func_002c55b0");


void duplicate_unplaced_002c5628(u32 a0);


void func_002c6190(u32 a0) asm("func_002c6190");


void func_002c63c8(u32 a0, u32 a1) asm("func_002c63c8");


void func_002c9f20(u32 a0) asm("func_002c9f20");


u32 func_002cab58() asm("func_002cab58");


void func_002cb7a0(u32 a0, u32 a1) asm("func_002cb7a0");


u32 func_002cb800(u32 a0) asm("func_002cb800");


u32 func_002cb890(u32 a0, s32 a1) asm("func_002cb890");


u32 func_002cb8b8(u32 a0) asm("func_002cb8b8");


u32 func_002cb8e0(u32 a0) asm("func_002cb8e0");


u32 func_002cbed8(u32 a0, u32 a1) asm("func_002cbed8");


u32 func_002ceb28() asm("func_002ceb28");


void func_002cec50(u32 a0) asm("func_002cec50");


void func_002cf170(u32 a0, u32 a1, u32 a2) asm("func_002cf170");


u32 func_002cf1b8(u32 a0) asm("func_002cf1b8");


void func_002cf280(u32 a0, u32 a1, u32 a2) asm("func_002cf280");


void func_002cf2d8() asm("func_002cf2d8");


void duplicate_unplaced_002cff00(u32 a0);


void func_002d0b88(u32 a0, u32 a1) asm("func_002d0b88");


void func_002d0bd8(u32 a0, u32 a1) asm("func_002d0bd8");


void duplicate_unplaced_002d0ef0(u32 a0, u32 a1, u32 a2, u32 a3);


void duplicate_unplaced_002d1270(u32 a0, u32 a1);


void duplicate_unplaced_002d4200(u32 a0, u32 a1, u32 a2);


void func_002d4290(u32 a0) asm("func_002d4290");


void duplicate_unplaced_002d5d10(u32 a0, u32 a1, u32 a2);


void duplicate_unplaced_002d5d50(u32 a0, u32 a1, u32 a2);


u32 func_002d5cc8(u32 a0) asm("func_002d5cc8");


void func_002d6cd8(u32 a0) asm("func_002d6cd8");


void func_002d6dd0(u32 a0) asm("func_002d6dd0");


void func_002d6d88(u32 a0, u32 a1) asm("func_002d6d88");


void func_002d6e60(u32 a0, u32 a1) asm("func_002d6e60");


void duplicate_unplaced_002daa50(u32 a0, u32 a1, u32 a2);


void duplicate_unplaced_002daa98(u32 a0, u32 a1, u32 a2);


void duplicate_unplaced_002dac50(u32 a0, u32 a1, u32 a2);


void duplicate_unplaced_002daca0(u32 a0, u32 a1, u32 a2);


f32 func_002dc100(u32 a0) asm("func_002dc100");


void duplicate_unplaced_002dc278(u32 a0, u32 a1);


f32 func_002dd250(u32 a0, u32 a1) asm("func_002dd250");


f32 func_002dd280(u32 a0, u32 a1) asm("func_002dd280");


f32 func_002dd2b0() asm("func_002dd2b0");


f32 func_002dd348(u32 a0, f32 a1) asm("func_002dd348");


void func_002dd4a8(u32 a0, u32 a1) asm("func_002dd4a8");


f32 func_002de6e8(u32 a0) asm("func_002de6e8");


void func_002e13d8(u32 a0) asm("func_002e13d8");


void func_002e3980(u32 a0) asm("func_002e3980");


void func_002e3b08(u32 a0) asm("func_002e3b08");


void func_002e3b48(u32 a0) asm("func_002e3b48");


void func_002e3be8(u32 a0) asm("func_002e3be8");


void func_002e40a8(u32 a0, u32 a1) asm("func_002e40a8");


u32 func_002e44c0(u32 a0, f32 a1) asm("func_002e44c0");


f32 func_002e49a8(u32 a0, u32 a1) asm("func_002e49a8");


u32 func_002e64b8(s32 a0, u32 a1) asm("func_002e64b8");


u32 func_002e9a38(u32* a0, u32 a1, u32 a2) asm("func_002e9a38");


void func_002e9cb8(u8* a0, u32 a1, u32 a2) asm("func_002e9cb8");


void duplicate_unplaced_002ead20(u32 a0, u32 a1);


extern "C" u32 func_002cbed8(...);
void func_002eb1a0(u32 a0) asm("func_002eb1a0");


void func_002eb990(u32 a0, u32 a1, f32 f12) asm("func_002eb990");


void func_002ebc38(u32 a0, u32 a1) asm("func_002ebc38");


void func_002ec5b0(u32 a0, u32 a1) asm("func_002ec5b0");


void duplicate_unplaced_002ecdb0(u32 a0);


void duplicate_unplaced_002ecdf8(u32 a0, u32 a1);


void duplicate_unplaced_002ece48(u32 a0, u32 a1);


void duplicate_unplaced_002ed438();


void func_002ed478() asm("func_002ed478");


void duplicate_unplaced_002ed508(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4);


void duplicate_unplaced_002ed558(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4);


void func_002edaf8(f32* a0) asm("func_002edaf8");


void func_002edbb0() asm("func_002edbb0");


void func_002edfa8(u32* a0, u32 a1) asm("func_002edfa8");


u32 func_002efa40(u32 a0) asm("func_002efa40");


void func_002efb88(u8* a0, u32* a1) asm("func_002efb88");


u32 func_002efc70(u32 a0) asm("func_002efc70");


void duplicate_unplaced_002f0798(u32* a0);


void duplicate_unplaced_002f07c8(u32* a0);


extern "C" u32 func_0011a430(...);
void func_002f0c90(u32* a0) asm("func_002f0c90");


void func_002f11d0(u32* a0) asm("func_002f11d0");


void func_002f1460(u32* a0, u32 a1, f32 f12, f32 f13, f32 f14, f32 f15) asm("func_002f1460");


u32 func_002f18c8(u8* a0) asm("func_002f18c8");


void func_002f1900(u32* a0, u32 a1, u32 a2) asm("func_002f1900");


extern "C" void func_002f1990(...);
void func_002f1940(u32* a0) asm("func_002f1940");


void func_002f1a38(u32* a0) asm("func_002f1a38");


void duplicate_unplaced_002f5c48(u32 a0, ...);


void func_002fd160() asm("func_002fd160");


s32 func_002fd178(s32 a0) asm("func_002fd178");


void func_002fd310(u8* a0, u32 a1) asm("func_002fd310");


u32 func_002fdf88(void* a0, u32 a1, ...) asm("func_002fdf88");


u32 func_002fdfc8(u32 a0, ...) asm("func_002fdfc8");


void func_002fea70(s32* a0, u32 a1) asm("func_002fea70");


s32 func_00303958(u32 a0, u32* a1, u8* a2, u32 a3) asm("func_00303958");


void func_00305068(s32* a0, u32 a1) asm("func_00305068");


void func_0030e508(u32 a0, u32 a1, u32 a2) asm("func_0030e508");


void func_0030e770(u32 a0, u32 a1, u32 a2) asm("func_0030e770");


extern "C" u32 func_00305a50(...);
u32 func_00311028(u32 a0) asm("func_00311028");


void func_00311080(u32 a0) asm("func_00311080");


void func_003110d8(u32 a0) asm("func_003110d8");


void func_003111a0(u32 a0) asm("func_003111a0");


void func_003111c8(u32 a0) asm("func_003111c8");


void func_003111f0(u32 a0) asm("func_003111f0");


u64 func_00313498(u32 a0, u32 a1) asm("func_00313498");


void func_00313b80(f32 a0) asm("func_00313b80");


void func_003142e0(u64 a0, u64 a1) asm("func_003142e0");


void func_00314698(u32 a0, u32 a1, u32 a2, u32 a3) asm("func_00314698");


void func_00315440() asm("func_00315440");


void duplicate_unplaced_003191d0(u32* a0, u32 a1, unsigned long long a2);


void func_00319d30(u32* a0) asm("func_00319d30");


void func_0031a260(u8* s0, u32 a1) asm("func_0031a260");


extern "C" void func_0031a260(...);
void func_0031ac78(u8* a0, u32 a1) asm("func_0031ac78");


void func_003200c0(u32* a0) asm("func_003200c0");


void func_00320418(u32* a0) asm("func_00320418");


void func_00321198(u32* a0) asm("func_00321198");


void func_00102158(u32* a0, u32 a1) asm("func_00102158");


u32 func_001033b0(s32 a0) asm("func_001033b0");


void duplicate_unplaced_0010a800(u8* a0, u8* a1, u8* a2);


void func_0010a8a8(f32 f12, f32 f13) asm("func_0010a8a8");


void func_0010a8e0(f32* a0) asm("func_0010a8e0");


void duplicate_unplaced_0010c7f0(C7F0_State* a0);


void duplicate_unplaced_0010c828(C828_State* a0);


void func_0010cac8(u8* a0, u32 a1, f32 f12) asm("func_0010cac8");


void duplicate_unplaced_0010dee8(u32 a0, u32* a1, u32* a2);


f32 func_0010e7e0(u8* a0, u32 a1) asm("func_0010e7e0");


void func_0010eee8(u8* a0) asm("func_0010eee8");


void duplicate_unplaced_0010ef28(u8* a0, u32 a1);


s32 func_00114690(u32 a0) asm("func_00114690");


void duplicate_unplaced_0011c4b0(C4B0_State* a0);


u32 func_001208b8(u8* a0) asm("func_001208b8");


void func_00127cf8(u32 a0) asm("func_00127cf8");


void func_00133690(u32 a0) asm("func_00133690");


u32 duplicate_unplaced_00133938(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4);


u32 duplicate_unplaced_00133980(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4);


u32 duplicate_unplaced_001339d0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4);


u32 duplicate_unplaced_001344b8(u32 a0);


void func_00137840(u32 a0, u32 a1) asm("func_00137840");


u32 duplicate_unplaced_001385c0();


u32 duplicate_unplaced_00138650(u32 a0, u32 a1, u32 a2, u32 a3);


void duplicate_unplaced_001387f8(u32 a0, u32 a1, u32 a2, u32 a3);


void func_0013c900(u32 a0, u32 a1, u32 a2, u32 a3) asm("func_0013c900");


extern "C" u32 func_00142900(...);
void duplicate_unplaced_001434d0(u32 a0);


void func_00143ee8(u32 a0, u32 a1) asm("func_00143ee8");


void func_00143f78(u32 a0, u32 a1) asm("func_00143f78");


void func_00146e28(u32 a0, u32 a1) asm("func_00146e28");


void func_00146e88(u32 a0, u32 a1) asm("func_00146e88");


void func_0014c970(u32 a0) asm("func_0014c970");


void func_0014c9b8() asm("func_0014c9b8");


u32 duplicate_unplaced_0014ca20();


extern "C" u32 func_0014f0b0(...);
u32 func_0014cd98(u32 a0) asm("func_0014cd98");


extern "C" void func_0014fdd0(...);
void func_001502e8(Obj001502e8* a0) asm("func_001502e8");


void func_00152498(Obj00152498* a0, u32 a1) asm("func_00152498");


void func_001535f0(f32 a0, f32 a1, f32 a2) asm("func_001535f0");


void func_001537f8() asm("func_001537f8");


void duplicate_unplaced_00155410(u8* a0);


u32 func_001570d0(u8* a0) asm("func_001570d0");


u32 func_00157100(u8* a0) asm("func_00157100");


u32 func_00157130(u8* a0) asm("func_00157130");


u32 func_00159f50(u8* a0, u32 a1) asm("func_00159f50");


void duplicate_unplaced_0015a810();


void func_0015a850() asm("func_0015a850");


void duplicate_unplaced_0015b4c0(u32 a0);


void func_0015de58() asm("func_0015de58");


void duplicate_unplaced_001618b8();


void func_00161c20(u32 a0) asm("func_00161c20");


void duplicate_unplaced_00161ee8();


void func_0019f790() asm("func_0019f790");


u32 func_0019f880() asm("func_0019f880");


u32 func_0019fa08(u8* a0, u32 a1, u32 a2) asm("func_0019fa08");


u32 func_0019fe48(u32 a0, u32, u32 a2) asm("func_0019fe48");


void func_001a0400(u32* param_1) asm("func_001a0400");


void func_001a0420(u32* param_1) asm("func_001a0420");


void duplicate_unplaced_001a04f8(u32* param_1);


void duplicate_unplaced_001a0678(u32* param_1);


void duplicate_unplaced_001a06e0(u32* param_1);


u32 duplicate_unplaced_001a07b0(u32 param_1, u32, u32 param_3);


u32 duplicate_unplaced_001a1018(u32 param_1);


void func_001a05b8(u32* param_1) asm("func_001a05b8");


void func_001a1a50(u32 a0, u32 a1) asm("func_001a1a50");


s32 func_001a1c30(u32 a0) asm("func_001a1c30");


void duplicate_unplaced_001a1c70(u32 a0);


extern "C" void func_001a1c90(u32, u32, s32) asm("_ZN2YS5SHEET11start_driveEii");

void func_001a2438(u32 a0, u32 a1, s32 a2) asm("func_001a2438");


void duplicate_unplaced_001a3a50(void);


void func_001a49d8(f32 a0, f32 a1, u32 a2) asm("func_001a49d8");


void func_001a4d40(f32 a0, f32 a1, u32 a2, u32 a3, u32 a4) asm("func_001a4d40");


void duplicate_unplaced_001a5380(u32 a0, u32 a1, u32 a2);


void duplicate_unplaced_001a53d0(u32 a0, u32 a1, u32 a2);


u32 func_001a5ac8(void) asm("func_001a5ac8");


void func_001a4530(u32 a0) asm("func_001a4530");


void func_001a4d78(u32 a0, f32 a1, f32 a2, f32 a3) asm("func_001a4d78");


s32 func_001a5bd0(f32 a0, u32 a1, u32 a2) asm("func_001a5bd0");


extern "C" void func_001826c8(...);
void func_001a6490(f32 a0, u32 a1) asm("func_001a6490");


void duplicate_unplaced_001a6c90(u32 a0);


void func_001a64c0(void) asm("func_001a64c0");


u32 func_001a67b0(u32 a0) asm("func_001a67b0");


void func_001a5c48(u32* a0, u32 a1, u32 a2) asm("func_001a5c48");


void func_001a6d38(u32 a0) asm("func_001a6d38");


void func_001a6d68(u32 a0) asm("func_001a6d68");


void func_001a6d98(u32 a0, u32 a1, u32 a2, u32 a3) asm("func_001a6d98");


u32 func_001a75d8(u32 a0, u32 a1, u32 a2) asm("func_001a75d8");


u32 func_001a7888(u32 a0) asm("func_001a7888");


void func_001a8020(u32 a0, u32 a1) asm("func_001a8020");


u32 func_001a8110(u32 a0) asm("func_001a8110");


u8* func_001a84b0(void) asm("func_001a84b0");


// func_001a84b0 returns u8* but callers treat return value as u32 (pointer-as-integer).
// Provide a u32-returning wrapper used by subsequent callers via macro.
static inline u32 _func_001a84b0_as_u32();

#define func_001a84b0 _func_001a84b0_as_u32

u32 duplicate_unplaced_001a84f0(void);


void duplicate_unplaced_001a8548(void);

#undef func_001a84b0

void duplicate_unplaced_001a8ff8(u32 a0, u32 a1, u32 a2);


u32 duplicate_unplaced_001a91c8(u32 a0);


u32 duplicate_unplaced_001aa6f0(u32 a0, u32 a1);


u32 func_001aa688(u32 a0) asm("func_001aa688");


void duplicate_unplaced_001abb28(u32* a0);


extern "C" void func_00239bf8(...);

void func_001abe48(u32* a0) asm("func_001abe48");


void duplicate_unplaced_001abfd8(u8* a0);


void duplicate_unplaced_001ac028(u8* a0);


void func_001ac0d0(u8* a0) asm("func_001ac0d0");


void duplicate_unplaced_001ac208(u32* a0);


void duplicate_unplaced_001ac258(u32* a0);


void duplicate_unplaced_001ac660(u32 a0);


void func_001ac728(u32 a0) asm("func_001ac728");


void duplicate_unplaced_001ad3e0(u32 a0);


void duplicate_unplaced_001ad5a8(void* a0);


void duplicate_unplaced_001ad5f0(void* a0);


void func_001adc08(u32* a0, u32* a1, u32* a2) asm("func_001adc08");


void func_001af2e8() asm("func_001af2e8");


void duplicate_unplaced_001af328(u32 a0);


void duplicate_unplaced_001af360(u32 a0);


void func_001af9f8() asm("func_001af9f8");


void func_001b0700(u8* a0, f32 a1) asm("func_001b0700");


void func_001b1328(u32 a0) asm("func_001b1328");

u32 func_001b1400() asm("func_001b1400");


u32 func_001b1b58(u8* a0) asm("func_001b1b58");


void func_001b1c10(u8* a0, f32 a1) asm("func_001b1c10");


void func_001b2028() asm("func_001b2028");


u32 func_001b2b58(u8* a0) asm("func_001b2b58");


void duplicate_unplaced_001b3bb8(u8* a0);


void func_001b3cb0(u8* a0, u32 a1) asm("func_001b3cb0");


void func_001b4098(u8* a0, u32 a1, u32 a2) asm("func_001b4098");


void func_001b5970(u32 a0, u32 a1) asm("func_001b5970");


void func_001b59c0(u32 a0, u32 a1, u32 a2) asm("func_001b59c0");


void func_001b5a60(u32 a0, u32 a1, u32 a2) asm("func_001b5a60");


void func_001b5ab0() asm("func_001b5ab0");


void duplicate_unplaced_001b6c60(u8* a0);


u32 func_001b73e8(u8* a0, u32 a1) asm("func_001b73e8");


u32 duplicate_unplaced_001b7428(u32 a0);


u32 duplicate_unplaced_001b7468(u32 a0);


u32 func_001b74c8(u32 a0, u32 a1) asm("func_001b74c8");


void func_001b7508(u32 a0, s32 a1, u32 a2) asm("func_001b7508");


u32 func_001b75b0(u32 a0, s32 a1) asm("func_001b75b0");


u32 duplicate_unplaced_001b7768(u32* a0, u32 a1);


s32 func_001b7818(s32 a0) asm("func_001b7818");


u32 func_001b82d8(u32 a0) asm("func_001b82d8");


void func_001b8318() asm("func_001b8318");


void func_001bae08() asm("func_001bae08");


void func_001bbe18(void* a0) asm("func_001bbe18");


void func_001bbe38(u32 a0) asm("func_001bbe38");


void func_001bbe78(u32 a0) asm("func_001bbe78");


u32 func_001bbf80(u32 a0) asm("func_001bbf80");


u32 func_001bcf18(u32* a0) asm("func_001bcf18");


void func_001bd370(u8* a0) asm("func_001bd370");


extern "C" u32 func_001bde58(...);
void func_001bd3a0(u8* a0) asm("func_001bd3a0");


void func_001bde88(u8* a0) asm("func_001bde88");


void duplicate_unplaced_001bdf38(u32 a0);


void duplicate_unplaced_001befa8(u32 a0);


void duplicate_unplaced_001befd8(u32 a0, u32 a1, u32 a2);


u32 duplicate_unplaced_001bf140(u32 a0, u32 a1);


void duplicate_unplaced_001bfbd8();


void func_001c0ab0(u8* a0, u8* a1) asm("func_001c0ab0");


u32 func_001c1218() asm("func_001c1218");


u32 func_001c16f0(u32* a0, u32* a1) asm("func_001c16f0");


void func_001c3ca8(void* a0, u8* a1) asm("func_001c3ca8");


u32 duplicate_unplaced_001c4170();


void duplicate_unplaced_001c6c60(u8* a0);


s32 func_001c71b8(u8* a0) asm("func_001c71b8");


void func_001c7ea8(void* a0, u8* a1) asm("func_001c7ea8");


void duplicate_unplaced_001c8710();


void duplicate_unplaced_001c8750();


void func_001c8d08() asm("func_001c8d08");


u32 func_001c8db8(u32* a0, u32 a1) asm("func_001c8db8");


void duplicate_unplaced_001c8de0();


void func_001c8e90() asm("func_001c8e90");


void* func_0016a070(f32) asm("func_0016a070");
void func_001c9780(f32 f12) asm("func_001c9780");


f32 func_001ca8e0(u32 a0) asm("func_001ca8e0");


void func_001ca8f8(f32 a0, f32 a1) asm("func_001ca8f8");


void func_001ca910(u8* a0) asm("func_001ca910");


u32 func_001ccd78() asm("func_001ccd78");


void func_001cd660(u8* a0) asm("func_001cd660");


u32 func_001cecc8() asm("func_001cecc8");


u32 func_001cf0b0(u8* a0) asm("func_001cf0b0");


u32 func_001d0820() asm("func_001d0820");


void func_001d0eb8(u8* a0) asm("func_001d0eb8");


void func_001d1698(u8* a0, u32 a1, u32 a2, u32 a3) asm("func_001d1698");


void func_001d1720(u8* a0, u32 a1) asm("func_001d1720");


void func_001d1950(u8* a0, s32 a1) asm("func_001d1950");


void func_001d1c28(u8* a0) asm("func_001d1c28");


void func_001d1e88(u8* a0) asm("func_001d1e88");


void func_001d2668(u8* a0, u32 a1, f32 a2) asm("func_001d2668");


void* func_001d2e28(void* a0, u32 a1, u32 a2) asm("func_001d2e28");


void func_001d32e8(u8* a0, u32 a1, u32 a2) asm("func_001d32e8");


u32 func_001d3558(u8* a0, u8* a1) asm("func_001d3558");


void* func_001d3698(void* a0, u8* a1) asm("func_001d3698");


u32 func_001d36e8(u8* a0) asm("func_001d36e8");


u32 duplicate_unplaced_001d3f98(u8* a0);


u32 duplicate_unplaced_001d4528(u8* a0);


void func_001d4570(u8* a0, u32 a1) asm("func_001d4570");


void duplicate_unplaced_001d4dc0(u8* a0, u32 a1, u32 a2, u32 a3);


u32 func_001d4ff0(u8* a0) asm("func_001d4ff0");


void duplicate_unplaced_001d5030(u32 a0);


u32 duplicate_unplaced_001d5668(u32 a0);


void duplicate_unplaced_001d5698(u32 a0);


void func_001d6110(u32 a0, u8* a1) asm("func_001d6110");


u8* func_001d6d58(s32 a0) asm("func_001d6d58");


void func_001d76e8(u32 a0, u8* a1) asm("func_001d76e8");


void duplicate_unplaced_001d7e00(u8* a0);


u32 func_001d8438() asm("func_001d8438");


u32 func_001d9850() asm("func_001d9850");


u32 func_001d9af8(u8* a0) asm("func_001d9af8");


extern "C" u32 func_001d9e78(...);
typedef u32 (*Func_001db610_cb)(u32, u32);
u32 func_001db610(u32, Func_001db610_cb, u32) asm("func_001db610");
u32 duplicate_unplaced_001d9d28(u8* a0);


u32 func_001d9d88(u8* a0) asm("func_001d9d88");


void duplicate_unplaced_001d9eb0(u8* a0, u32 a1, u32 a2);


void duplicate_unplaced_001d9ef0(u8* a0, u32 a1, u32 a2);


u32 func_001db200() asm("func_001db200");


u32 duplicate_unplaced_001dc488(u32 a0);


void func_001dc698(u8* a0, u32 a1) asm("func_001dc698");


void func_001dc700(u8* a0, u32 a1) asm("func_001dc700");



// ---- Functions assigned to this TU by generate_layout.py ----

u32 ctarget_0013cb08(u32 a0, u32 a1, u32 a2, u32 a3);


namespace YS {

f32 AREADATA::GetCostRest();

}  // namespace YS

extern "C" u32 func_0019ba28(...);
extern "C" u32 func_0019baa8(...);
u32 ctarget_0019ba60(u32 a0, u32 a1, u32 a2, u32 a3);


u32 u_call4_001a1de0(u32 a0, u32 a1, u32 a2, u32 a3);


extern "C" u32 func_002ef988(...);
extern "C" u32 func_002efbb8(...);

u32 u_call4_002ef9e0(u32 a0, u32 a1, u32 a2, u32 a3);


u32 u_call4_002efc10(u32 a0, u32 a1, u32 a2, u32 a3);


extern "C" u32 func_0028b040(...);

extern "C" u32 func_00287bc0(...);
u32 func_002a4430() asm("func_002a4430");



void func_002e37c0_impl(u32 a0) asm("func_002e37c0");
void func_002e37c0_impl(u32 a0) {
    u32 s0 = a0;
    kn::FVector tmp;
    func_0018c258((u32)&tmp, *(u32*)((u32)*(u32*)((u32)a0 + (s32)(0)) + (s32)(4)));
    u32 t7 = (u32)&D_01e2be20;
    kn::FVector* dst = (kn::FVector*)(u32)t7;
    *dst = tmp;
    *(u32*)((u32)s0 + (s32)(0)) = t7;
}
