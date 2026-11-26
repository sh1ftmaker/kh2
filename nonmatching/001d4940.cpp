// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0036e490 asm("D_0036e490");
extern "C" u32 D_0036e4e0 asm("D_0036e4e0");
extern "C" u32 D_0036e4e8 asm("D_0036e4e8");
extern "C" u32 D_0036e4f8 asm("D_0036e4f8");
extern "C" u32 D_0036e500 asm("D_0036e500");
extern "C" u32 D_0036e508 asm("D_0036e508");
extern "C" u32 D_0036e510 asm("D_0036e510");
extern "C" u32 D_0036e520 asm("D_0036e520");
extern "C" u32 D_01d5ba58 asm("D_01d5ba58");
extern "C" u32 func_0019ba60(u32, u32, u32) asm("func_0019ba60");
extern "C" u32 func_001d4ae0(u32, u32, u32) asm("func_001d4ae0");
extern "C" u32 func_001d4bd8(u32, u32, u32) asm("func_001d4bd8");
extern "C" void func_00190878(u32, u32, u32) asm("func_00190878");
extern "C" void func_001bc778(u32) asm("func_001bc778");
extern "C" void func_001bce90(u32, u32, u32, u32) asm("func_001bce90");

// 0x001d4940 YS::SPECIAL_COMMAND::_check(YS::OBJ*, YS::COMMAND_MENU*)
u32 lift_001d4940(u32 a0, u32 a1, u32 a2) asm("_ZN2YS15SPECIAL_COMMAND6_checkEPNS_3OBJEPNS_12COMMAND_MENUE");
u32 lift_001d4940(u32 a0, u32 a1, u32 a2) {
    u32 t5;
    u32 t5_0;
    u32 t5_1;
    u32 t5_2;
    u32 t5_3;
    u32 t5_4;
    if (((s32)(*(u32*)((a0 + 4))) != 0)) {
        if (((s32)(func_0019ba60(*(u32*)((a0 + 4)), a1, a2)) != 0)) {
            if ((*(u32*)(a0) != 0xa)) {
                func_001bc778(a2);
                switch (*(u32*)(a0)) {
                case 1:
                    func_001bce90(a2, (u32)&D_0036e490, 3, 0);
                    t5 = 1;
                    break;
                case 2:
                    t5 = func_001d4ae0(a0, a1, a2);
                    break;
                case 3:
                    func_001bce90(a2, (u32)&D_01d5ba58, 3, 0);
                    t5 = 1;
                    break;
                case 4:
                    func_001bce90(a2, (u32)&D_0036e4e0, 2, 0);
                    t5 = 1;
                    break;
                case 5:
                    func_001bce90(a2, (u32)&D_0036e4e8, 3, 0);
                    t5 = 1;
                    break;
                case 6:
                    func_001bce90(a2, (u32)&D_0036e4f8, 1, 0);
                    t5 = 1;
                    break;
                case 7:
                    func_001bce90(a2, (u32)&D_0036e500, 1, 0);
                    t5 = 1;
                    break;
                case 8:
                    func_001bce90(a2, (u32)&D_0036e508, 1, 0);
                    t5 = 1;
                    break;
                case 9:
                    func_001bce90(a2, (u32)&D_0036e510, 3, 0);
                    t5 = 1;
                    break;
                case 11:
                    t5 = func_001d4bd8(a0, a1, a2);
                    break;
                case 12:
                    func_00190878(a0 + 0xc, *(u32*)((a0 + 4)), 0);
                    func_001bce90(a2, (u32)&D_0036e520, 3, a0 + 0xc);
                    t5 = 1;
                    break;
                case 0:
                case 10:
                default:
                    t5 = 1;
                    break;
                }
                t5_0 = t5;
            } else {
                t5_0 = 1;
            }
            t5_1 = t5_0;
        } else {
            t5_1 = 0;
        }
        t5_4 = t5_1;
    } else {
        if ((*(u32*)(a0) != 0xa)) {
            func_001bc778(a2);
            switch (*(u32*)(a0)) {
            case 1:
                func_001bce90(a2, (u32)&D_0036e490, 3, 0);
                t5_2 = 1;
                break;
            case 2:
                t5_2 = func_001d4ae0(a0, a1, a2);
                break;
            case 3:
                func_001bce90(a2, (u32)&D_01d5ba58, 3, 0);
                t5_2 = 1;
                break;
            case 4:
                func_001bce90(a2, (u32)&D_0036e4e0, 2, 0);
                t5_2 = 1;
                break;
            case 5:
                func_001bce90(a2, (u32)&D_0036e4e8, 3, 0);
                t5_2 = 1;
                break;
            case 6:
                func_001bce90(a2, (u32)&D_0036e4f8, 1, 0);
                t5_2 = 1;
                break;
            case 7:
                func_001bce90(a2, (u32)&D_0036e500, 1, 0);
                t5_2 = 1;
                break;
            case 8:
                func_001bce90(a2, (u32)&D_0036e508, 1, 0);
                t5_2 = 1;
                break;
            case 9:
                func_001bce90(a2, (u32)&D_0036e510, 3, 0);
                t5_2 = 1;
                break;
            case 11:
                t5_2 = func_001d4bd8(a0, a1, a2);
                break;
            case 12:
                func_00190878(a0 + 0xc, *(u32*)((a0 + 4)), 0);
                func_001bce90(a2, (u32)&D_0036e520, 3, a0 + 0xc);
                t5_2 = 1;
                break;
            case 0:
            case 10:
            default:
                t5_2 = 1;
                break;
            }
            t5_3 = t5_2;
        } else {
            t5_3 = 1;
        }
        t5_4 = t5_3;
    }
    return t5_4;
}
