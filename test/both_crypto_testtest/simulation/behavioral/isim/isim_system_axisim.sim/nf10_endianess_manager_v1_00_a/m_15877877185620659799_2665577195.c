/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x8ddf5b5d */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/root/NetFPGA-10G-live/lib/hw/contrib/pcores/nf10_endianess_manager_v1_00_a/hdl/verilog/bridge.v";
static int ng1[] = {0, 0};
static int ng2[] = {2, 0};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U};
static int ng5[] = {7, 0};
static int ng6[] = {15, 0};
static int ng7[] = {8, 0};
static int ng8[] = {23, 0};
static int ng9[] = {16, 0};
static int ng10[] = {31, 0};
static int ng11[] = {24, 0};
static int ng12[] = {3, 0};
static int ng13[] = {39, 0};
static int ng14[] = {32, 0};
static int ng15[] = {4, 0};
static int ng16[] = {47, 0};
static int ng17[] = {40, 0};
static int ng18[] = {5, 0};
static int ng19[] = {55, 0};
static int ng20[] = {48, 0};
static int ng21[] = {6, 0};
static int ng22[] = {63, 0};
static int ng23[] = {56, 0};
static int ng24[] = {71, 0};
static int ng25[] = {64, 0};
static int ng26[] = {79, 0};
static int ng27[] = {72, 0};
static int ng28[] = {9, 0};
static int ng29[] = {87, 0};
static int ng30[] = {80, 0};
static int ng31[] = {10, 0};
static int ng32[] = {95, 0};
static int ng33[] = {88, 0};
static int ng34[] = {11, 0};
static int ng35[] = {103, 0};
static int ng36[] = {96, 0};
static int ng37[] = {12, 0};
static int ng38[] = {111, 0};
static int ng39[] = {104, 0};
static int ng40[] = {13, 0};
static int ng41[] = {119, 0};
static int ng42[] = {112, 0};
static int ng43[] = {14, 0};
static int ng44[] = {127, 0};
static int ng45[] = {120, 0};
static int ng46[] = {135, 0};
static int ng47[] = {128, 0};
static int ng48[] = {143, 0};
static int ng49[] = {136, 0};
static int ng50[] = {17, 0};
static int ng51[] = {151, 0};
static int ng52[] = {144, 0};
static int ng53[] = {18, 0};
static int ng54[] = {159, 0};
static int ng55[] = {152, 0};
static int ng56[] = {19, 0};
static int ng57[] = {167, 0};
static int ng58[] = {160, 0};
static int ng59[] = {20, 0};
static int ng60[] = {175, 0};
static int ng61[] = {168, 0};
static int ng62[] = {21, 0};
static int ng63[] = {183, 0};
static int ng64[] = {176, 0};
static int ng65[] = {22, 0};
static int ng66[] = {191, 0};
static int ng67[] = {184, 0};
static int ng68[] = {199, 0};
static int ng69[] = {192, 0};
static int ng70[] = {207, 0};
static int ng71[] = {200, 0};
static int ng72[] = {25, 0};
static int ng73[] = {215, 0};
static int ng74[] = {208, 0};
static int ng75[] = {26, 0};
static int ng76[] = {223, 0};
static int ng77[] = {216, 0};
static int ng78[] = {27, 0};
static int ng79[] = {231, 0};
static int ng80[] = {224, 0};
static int ng81[] = {28, 0};
static int ng82[] = {239, 0};
static int ng83[] = {232, 0};
static int ng84[] = {29, 0};
static int ng85[] = {247, 0};
static int ng86[] = {240, 0};
static int ng87[] = {30, 0};
static int ng88[] = {255, 0};
static int ng89[] = {248, 0};



static int sp_log2(char *t1, char *t2)
{
    char t7[8];
    char t11[8];
    char t22[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t23;

LAB0:    t0 = 1;
    xsi_set_current_line(75, ng0);

LAB2:    xsi_set_current_line(76, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t1 + 4504);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(77, ng0);

LAB3:    t3 = ((char*)((ng2)));
    t4 = (t1 + 4504);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    xsi_vlog_signed_power(t7, 32, t3, 32, t6, 32, 1);
    t8 = (t1 + 4664);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t11, 0, 8);
    xsi_vlog_signed_less(t11, 32, t7, 32, t10, 32);
    t12 = (t11 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t11);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB4;

LAB5:    t0 = 0;

LAB1:    return t0;
LAB4:    xsi_set_current_line(77, ng0);

LAB6:    xsi_set_current_line(78, ng0);
    t18 = (t1 + 4504);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng3)));
    memset(t22, 0, 8);
    xsi_vlog_signed_add(t22, 32, t20, 32, t21, 32);
    t23 = (t1 + 4504);
    xsi_vlogvar_assign_value(t23, t22, 0, 0, 32);
    goto LAB3;

}

static void Always_88_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 5576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 13832);
    *((int *)t2) = 1;
    t3 = (t0 + 5608);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(88, ng0);

LAB5:    xsi_set_current_line(89, ng0);
    t4 = (t0 + 2184U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(95, ng0);

LAB10:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 2664U);
    t3 = *((char **)t2);
    t2 = (t0 + 4024);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 128);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 2824U);
    t3 = *((char **)t2);
    t2 = (t0 + 4184);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 2984U);
    t3 = *((char **)t2);
    t2 = (t0 + 4344);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 3144U);
    t3 = *((char **)t2);
    t2 = (t0 + 3544);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(89, ng0);

LAB9:    xsi_set_current_line(90, ng0);
    t11 = ((char*)((ng4)));
    t12 = (t0 + 4024);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 128);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4184);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4344);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3544);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB8;

}

static void Always_106_1(char *t0)
{
    char t13[8];
    char t14[8];
    char t15[8];
    char t38[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    int t23;
    char *t24;
    unsigned int t25;
    int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    int t36;
    int t37;
    unsigned int t39;

LAB0:    t1 = (t0 + 5824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 13848);
    *((int *)t2) = 1;
    t3 = (t0 + 5856);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(106, ng0);

LAB5:    xsi_set_current_line(107, ng0);
    t4 = (t0 + 2184U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(111, ng0);

LAB14:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 2344U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 56);
    t5 = (t3 + 60);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 24);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 24);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 255U);
    t22 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t22 & 255U);
    t11 = (t0 + 3704);
    t12 = (t0 + 3704);
    t16 = (t12 + 72U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng5)));
    t19 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t14, t15, t38, ((int*)(t17)), 2, t18, 32, 1, t19, 32, 1);
    t20 = (t14 + 4);
    t25 = *((unsigned int *)t20);
    t23 = (!(t25));
    t21 = (t15 + 4);
    t29 = *((unsigned int *)t21);
    t26 = (!(t29));
    t27 = (t23 && t26);
    t24 = (t38 + 4);
    t32 = *((unsigned int *)t24);
    t30 = (!(t32));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 2504U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 31);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 31);
    t22 = (t10 & 1);
    *((unsigned int *)t2) = t22;
    t5 = (t0 + 3864);
    t11 = (t0 + 3864);
    t12 = (t11 + 72U);
    t16 = *((char **)t12);
    t17 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t14, t16, 2, t17, 32, 1);
    t18 = (t14 + 4);
    t25 = *((unsigned int *)t18);
    t23 = (!(t25));
    if (t23 == 1)
        goto LAB17;

LAB18:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(107, ng0);

LAB9:    xsi_set_current_line(108, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3704);
    t16 = (t0 + 3704);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng5)));
    t20 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t13, t14, t15, ((int*)(t18)), 2, t19, 32, 1, t20, 32, 1);
    t21 = (t13 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (!(t22));
    t24 = (t14 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (!(t25));
    t27 = (t23 && t26);
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3864);
    t4 = (t0 + 3864);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t13, t11, 2, t12, 32, 1);
    t16 = (t13 + 4);
    t6 = *((unsigned int *)t16);
    t23 = (!(t6));
    if (t23 == 1)
        goto LAB12;

LAB13:    goto LAB8;

LAB10:    t32 = *((unsigned int *)t15);
    t33 = (t32 + 0);
    t34 = *((unsigned int *)t13);
    t35 = *((unsigned int *)t14);
    t36 = (t34 - t35);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t12, t11, t33, *((unsigned int *)t14), t37);
    goto LAB11;

LAB12:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t13), 1);
    goto LAB13;

LAB15:    t34 = *((unsigned int *)t38);
    t33 = (t34 + 0);
    t35 = *((unsigned int *)t14);
    t39 = *((unsigned int *)t15);
    t36 = (t35 - t39);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t11, t13, t33, *((unsigned int *)t15), t37);
    goto LAB16;

LAB17:    xsi_vlogvar_assign_value(t5, t13, 0, *((unsigned int *)t14), 1);
    goto LAB18;

}

static void Always_106_2(char *t0)
{
    char t13[8];
    char t14[8];
    char t15[8];
    char t38[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    int t23;
    char *t24;
    unsigned int t25;
    int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    int t36;
    int t37;
    unsigned int t39;

LAB0:    t1 = (t0 + 6072U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 13864);
    *((int *)t2) = 1;
    t3 = (t0 + 6104);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(106, ng0);

LAB5:    xsi_set_current_line(107, ng0);
    t4 = (t0 + 2184U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(111, ng0);

LAB14:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 2344U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 56);
    t5 = (t3 + 60);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 16);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 16);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 255U);
    t22 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t22 & 255U);
    t11 = (t0 + 3704);
    t12 = (t0 + 3704);
    t16 = (t12 + 72U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng6)));
    t19 = ((char*)((ng7)));
    xsi_vlog_convert_partindices(t14, t15, t38, ((int*)(t17)), 2, t18, 32, 1, t19, 32, 1);
    t20 = (t14 + 4);
    t25 = *((unsigned int *)t20);
    t23 = (!(t25));
    t21 = (t15 + 4);
    t29 = *((unsigned int *)t21);
    t26 = (!(t29));
    t27 = (t23 && t26);
    t24 = (t38 + 4);
    t32 = *((unsigned int *)t24);
    t30 = (!(t32));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 2504U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 30);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 30);
    t22 = (t10 & 1);
    *((unsigned int *)t2) = t22;
    t5 = (t0 + 3864);
    t11 = (t0 + 3864);
    t12 = (t11 + 72U);
    t16 = *((char **)t12);
    t17 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t14, t16, 2, t17, 32, 1);
    t18 = (t14 + 4);
    t25 = *((unsigned int *)t18);
    t23 = (!(t25));
    if (t23 == 1)
        goto LAB17;

LAB18:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(107, ng0);

LAB9:    xsi_set_current_line(108, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3704);
    t16 = (t0 + 3704);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng6)));
    t20 = ((char*)((ng7)));
    xsi_vlog_convert_partindices(t13, t14, t15, ((int*)(t18)), 2, t19, 32, 1, t20, 32, 1);
    t21 = (t13 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (!(t22));
    t24 = (t14 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (!(t25));
    t27 = (t23 && t26);
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3864);
    t4 = (t0 + 3864);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t13, t11, 2, t12, 32, 1);
    t16 = (t13 + 4);
    t6 = *((unsigned int *)t16);
    t23 = (!(t6));
    if (t23 == 1)
        goto LAB12;

LAB13:    goto LAB8;

LAB10:    t32 = *((unsigned int *)t15);
    t33 = (t32 + 0);
    t34 = *((unsigned int *)t13);
    t35 = *((unsigned int *)t14);
    t36 = (t34 - t35);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t12, t11, t33, *((unsigned int *)t14), t37);
    goto LAB11;

LAB12:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t13), 1);
    goto LAB13;

LAB15:    t34 = *((unsigned int *)t38);
    t33 = (t34 + 0);
    t35 = *((unsigned int *)t14);
    t39 = *((unsigned int *)t15);
    t36 = (t35 - t39);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t11, t13, t33, *((unsigned int *)t15), t37);
    goto LAB16;

LAB17:    xsi_vlogvar_assign_value(t5, t13, 0, *((unsigned int *)t14), 1);
    goto LAB18;

}

static void Always_106_3(char *t0)
{
    char t13[8];
    char t14[8];
    char t15[8];
    char t38[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    int t23;
    char *t24;
    unsigned int t25;
    int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    int t36;
    int t37;
    unsigned int t39;

LAB0:    t1 = (t0 + 6320U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 13880);
    *((int *)t2) = 1;
    t3 = (t0 + 6352);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(106, ng0);

LAB5:    xsi_set_current_line(107, ng0);
    t4 = (t0 + 2184U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(111, ng0);

LAB14:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 2344U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 56);
    t5 = (t3 + 60);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 8);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 8);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 255U);
    t22 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t22 & 255U);
    t11 = (t0 + 3704);
    t12 = (t0 + 3704);
    t16 = (t12 + 72U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng8)));
    t19 = ((char*)((ng9)));
    xsi_vlog_convert_partindices(t14, t15, t38, ((int*)(t17)), 2, t18, 32, 1, t19, 32, 1);
    t20 = (t14 + 4);
    t25 = *((unsigned int *)t20);
    t23 = (!(t25));
    t21 = (t15 + 4);
    t29 = *((unsigned int *)t21);
    t26 = (!(t29));
    t27 = (t23 && t26);
    t24 = (t38 + 4);
    t32 = *((unsigned int *)t24);
    t30 = (!(t32));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 2504U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 29);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 29);
    t22 = (t10 & 1);
    *((unsigned int *)t2) = t22;
    t5 = (t0 + 3864);
    t11 = (t0 + 3864);
    t12 = (t11 + 72U);
    t16 = *((char **)t12);
    t17 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t14, t16, 2, t17, 32, 1);
    t18 = (t14 + 4);
    t25 = *((unsigned int *)t18);
    t23 = (!(t25));
    if (t23 == 1)
        goto LAB17;

LAB18:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(107, ng0);

LAB9:    xsi_set_current_line(108, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3704);
    t16 = (t0 + 3704);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng8)));
    t20 = ((char*)((ng9)));
    xsi_vlog_convert_partindices(t13, t14, t15, ((int*)(t18)), 2, t19, 32, 1, t20, 32, 1);
    t21 = (t13 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (!(t22));
    t24 = (t14 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (!(t25));
    t27 = (t23 && t26);
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3864);
    t4 = (t0 + 3864);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t13, t11, 2, t12, 32, 1);
    t16 = (t13 + 4);
    t6 = *((unsigned int *)t16);
    t23 = (!(t6));
    if (t23 == 1)
        goto LAB12;

LAB13:    goto LAB8;

LAB10:    t32 = *((unsigned int *)t15);
    t33 = (t32 + 0);
    t34 = *((unsigned int *)t13);
    t35 = *((unsigned int *)t14);
    t36 = (t34 - t35);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t12, t11, t33, *((unsigned int *)t14), t37);
    goto LAB11;

LAB12:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t13), 1);
    goto LAB13;

LAB15:    t34 = *((unsigned int *)t38);
    t33 = (t34 + 0);
    t35 = *((unsigned int *)t14);
    t39 = *((unsigned int *)t15);
    t36 = (t35 - t39);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t11, t13, t33, *((unsigned int *)t15), t37);
    goto LAB16;

LAB17:    xsi_vlogvar_assign_value(t5, t13, 0, *((unsigned int *)t14), 1);
    goto LAB18;

}

static void Always_106_4(char *t0)
{
    char t13[8];
    char t14[8];
    char t15[8];
    char t38[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    int t23;
    char *t24;
    unsigned int t25;
    int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    int t36;
    int t37;
    unsigned int t39;

LAB0:    t1 = (t0 + 6568U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 13896);
    *((int *)t2) = 1;
    t3 = (t0 + 6600);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(106, ng0);

LAB5:    xsi_set_current_line(107, ng0);
    t4 = (t0 + 2184U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(111, ng0);

LAB14:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 2344U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 56);
    t5 = (t3 + 60);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 255U);
    t22 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t22 & 255U);
    t11 = (t0 + 3704);
    t12 = (t0 + 3704);
    t16 = (t12 + 72U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng10)));
    t19 = ((char*)((ng11)));
    xsi_vlog_convert_partindices(t14, t15, t38, ((int*)(t17)), 2, t18, 32, 1, t19, 32, 1);
    t20 = (t14 + 4);
    t25 = *((unsigned int *)t20);
    t23 = (!(t25));
    t21 = (t15 + 4);
    t29 = *((unsigned int *)t21);
    t26 = (!(t29));
    t27 = (t23 && t26);
    t24 = (t38 + 4);
    t32 = *((unsigned int *)t24);
    t30 = (!(t32));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 2504U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 28);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 28);
    t22 = (t10 & 1);
    *((unsigned int *)t2) = t22;
    t5 = (t0 + 3864);
    t11 = (t0 + 3864);
    t12 = (t11 + 72U);
    t16 = *((char **)t12);
    t17 = ((char*)((ng12)));
    xsi_vlog_generic_convert_bit_index(t14, t16, 2, t17, 32, 1);
    t18 = (t14 + 4);
    t25 = *((unsigned int *)t18);
    t23 = (!(t25));
    if (t23 == 1)
        goto LAB17;

LAB18:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(107, ng0);

LAB9:    xsi_set_current_line(108, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3704);
    t16 = (t0 + 3704);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng10)));
    t20 = ((char*)((ng11)));
    xsi_vlog_convert_partindices(t13, t14, t15, ((int*)(t18)), 2, t19, 32, 1, t20, 32, 1);
    t21 = (t13 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (!(t22));
    t24 = (t14 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (!(t25));
    t27 = (t23 && t26);
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3864);
    t4 = (t0 + 3864);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng12)));
    xsi_vlog_generic_convert_bit_index(t13, t11, 2, t12, 32, 1);
    t16 = (t13 + 4);
    t6 = *((unsigned int *)t16);
    t23 = (!(t6));
    if (t23 == 1)
        goto LAB12;

LAB13:    goto LAB8;

LAB10:    t32 = *((unsigned int *)t15);
    t33 = (t32 + 0);
    t34 = *((unsigned int *)t13);
    t35 = *((unsigned int *)t14);
    t36 = (t34 - t35);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t12, t11, t33, *((unsigned int *)t14), t37);
    goto LAB11;

LAB12:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t13), 1);
    goto LAB13;

LAB15:    t34 = *((unsigned int *)t38);
    t33 = (t34 + 0);
    t35 = *((unsigned int *)t14);
    t39 = *((unsigned int *)t15);
    t36 = (t35 - t39);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t11, t13, t33, *((unsigned int *)t15), t37);
    goto LAB16;

LAB17:    xsi_vlogvar_assign_value(t5, t13, 0, *((unsigned int *)t14), 1);
    goto LAB18;

}

static void Always_106_5(char *t0)
{
    char t13[8];
    char t14[8];
    char t15[8];
    char t38[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    int t23;
    char *t24;
    unsigned int t25;
    int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    int t36;
    int t37;
    unsigned int t39;

LAB0:    t1 = (t0 + 6816U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 13912);
    *((int *)t2) = 1;
    t3 = (t0 + 6848);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(106, ng0);

LAB5:    xsi_set_current_line(107, ng0);
    t4 = (t0 + 2184U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(111, ng0);

LAB14:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 2344U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 48);
    t5 = (t3 + 52);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 24);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 24);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 255U);
    t22 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t22 & 255U);
    t11 = (t0 + 3704);
    t12 = (t0 + 3704);
    t16 = (t12 + 72U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng13)));
    t19 = ((char*)((ng14)));
    xsi_vlog_convert_partindices(t14, t15, t38, ((int*)(t17)), 2, t18, 32, 1, t19, 32, 1);
    t20 = (t14 + 4);
    t25 = *((unsigned int *)t20);
    t23 = (!(t25));
    t21 = (t15 + 4);
    t29 = *((unsigned int *)t21);
    t26 = (!(t29));
    t27 = (t23 && t26);
    t24 = (t38 + 4);
    t32 = *((unsigned int *)t24);
    t30 = (!(t32));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 2504U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 27);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 27);
    t22 = (t10 & 1);
    *((unsigned int *)t2) = t22;
    t5 = (t0 + 3864);
    t11 = (t0 + 3864);
    t12 = (t11 + 72U);
    t16 = *((char **)t12);
    t17 = ((char*)((ng15)));
    xsi_vlog_generic_convert_bit_index(t14, t16, 2, t17, 32, 1);
    t18 = (t14 + 4);
    t25 = *((unsigned int *)t18);
    t23 = (!(t25));
    if (t23 == 1)
        goto LAB17;

LAB18:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(107, ng0);

LAB9:    xsi_set_current_line(108, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3704);
    t16 = (t0 + 3704);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng13)));
    t20 = ((char*)((ng14)));
    xsi_vlog_convert_partindices(t13, t14, t15, ((int*)(t18)), 2, t19, 32, 1, t20, 32, 1);
    t21 = (t13 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (!(t22));
    t24 = (t14 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (!(t25));
    t27 = (t23 && t26);
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3864);
    t4 = (t0 + 3864);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng15)));
    xsi_vlog_generic_convert_bit_index(t13, t11, 2, t12, 32, 1);
    t16 = (t13 + 4);
    t6 = *((unsigned int *)t16);
    t23 = (!(t6));
    if (t23 == 1)
        goto LAB12;

LAB13:    goto LAB8;

LAB10:    t32 = *((unsigned int *)t15);
    t33 = (t32 + 0);
    t34 = *((unsigned int *)t13);
    t35 = *((unsigned int *)t14);
    t36 = (t34 - t35);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t12, t11, t33, *((unsigned int *)t14), t37);
    goto LAB11;

LAB12:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t13), 1);
    goto LAB13;

LAB15:    t34 = *((unsigned int *)t38);
    t33 = (t34 + 0);
    t35 = *((unsigned int *)t14);
    t39 = *((unsigned int *)t15);
    t36 = (t35 - t39);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t11, t13, t33, *((unsigned int *)t15), t37);
    goto LAB16;

LAB17:    xsi_vlogvar_assign_value(t5, t13, 0, *((unsigned int *)t14), 1);
    goto LAB18;

}

static void Always_106_6(char *t0)
{
    char t13[8];
    char t14[8];
    char t15[8];
    char t38[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    int t23;
    char *t24;
    unsigned int t25;
    int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    int t36;
    int t37;
    unsigned int t39;

LAB0:    t1 = (t0 + 7064U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 13928);
    *((int *)t2) = 1;
    t3 = (t0 + 7096);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(106, ng0);

LAB5:    xsi_set_current_line(107, ng0);
    t4 = (t0 + 2184U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(111, ng0);

LAB14:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 2344U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 48);
    t5 = (t3 + 52);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 16);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 16);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 255U);
    t22 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t22 & 255U);
    t11 = (t0 + 3704);
    t12 = (t0 + 3704);
    t16 = (t12 + 72U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng16)));
    t19 = ((char*)((ng17)));
    xsi_vlog_convert_partindices(t14, t15, t38, ((int*)(t17)), 2, t18, 32, 1, t19, 32, 1);
    t20 = (t14 + 4);
    t25 = *((unsigned int *)t20);
    t23 = (!(t25));
    t21 = (t15 + 4);
    t29 = *((unsigned int *)t21);
    t26 = (!(t29));
    t27 = (t23 && t26);
    t24 = (t38 + 4);
    t32 = *((unsigned int *)t24);
    t30 = (!(t32));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 2504U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 26);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 26);
    t22 = (t10 & 1);
    *((unsigned int *)t2) = t22;
    t5 = (t0 + 3864);
    t11 = (t0 + 3864);
    t12 = (t11 + 72U);
    t16 = *((char **)t12);
    t17 = ((char*)((ng18)));
    xsi_vlog_generic_convert_bit_index(t14, t16, 2, t17, 32, 1);
    t18 = (t14 + 4);
    t25 = *((unsigned int *)t18);
    t23 = (!(t25));
    if (t23 == 1)
        goto LAB17;

LAB18:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(107, ng0);

LAB9:    xsi_set_current_line(108, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3704);
    t16 = (t0 + 3704);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng16)));
    t20 = ((char*)((ng17)));
    xsi_vlog_convert_partindices(t13, t14, t15, ((int*)(t18)), 2, t19, 32, 1, t20, 32, 1);
    t21 = (t13 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (!(t22));
    t24 = (t14 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (!(t25));
    t27 = (t23 && t26);
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3864);
    t4 = (t0 + 3864);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng18)));
    xsi_vlog_generic_convert_bit_index(t13, t11, 2, t12, 32, 1);
    t16 = (t13 + 4);
    t6 = *((unsigned int *)t16);
    t23 = (!(t6));
    if (t23 == 1)
        goto LAB12;

LAB13:    goto LAB8;

LAB10:    t32 = *((unsigned int *)t15);
    t33 = (t32 + 0);
    t34 = *((unsigned int *)t13);
    t35 = *((unsigned int *)t14);
    t36 = (t34 - t35);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t12, t11, t33, *((unsigned int *)t14), t37);
    goto LAB11;

LAB12:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t13), 1);
    goto LAB13;

LAB15:    t34 = *((unsigned int *)t38);
    t33 = (t34 + 0);
    t35 = *((unsigned int *)t14);
    t39 = *((unsigned int *)t15);
    t36 = (t35 - t39);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t11, t13, t33, *((unsigned int *)t15), t37);
    goto LAB16;

LAB17:    xsi_vlogvar_assign_value(t5, t13, 0, *((unsigned int *)t14), 1);
    goto LAB18;

}

static void Always_106_7(char *t0)
{
    char t13[8];
    char t14[8];
    char t15[8];
    char t38[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    int t23;
    char *t24;
    unsigned int t25;
    int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    int t36;
    int t37;
    unsigned int t39;

LAB0:    t1 = (t0 + 7312U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 13944);
    *((int *)t2) = 1;
    t3 = (t0 + 7344);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(106, ng0);

LAB5:    xsi_set_current_line(107, ng0);
    t4 = (t0 + 2184U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(111, ng0);

LAB14:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 2344U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 48);
    t5 = (t3 + 52);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 8);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 8);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 255U);
    t22 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t22 & 255U);
    t11 = (t0 + 3704);
    t12 = (t0 + 3704);
    t16 = (t12 + 72U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng19)));
    t19 = ((char*)((ng20)));
    xsi_vlog_convert_partindices(t14, t15, t38, ((int*)(t17)), 2, t18, 32, 1, t19, 32, 1);
    t20 = (t14 + 4);
    t25 = *((unsigned int *)t20);
    t23 = (!(t25));
    t21 = (t15 + 4);
    t29 = *((unsigned int *)t21);
    t26 = (!(t29));
    t27 = (t23 && t26);
    t24 = (t38 + 4);
    t32 = *((unsigned int *)t24);
    t30 = (!(t32));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 2504U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 25);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 25);
    t22 = (t10 & 1);
    *((unsigned int *)t2) = t22;
    t5 = (t0 + 3864);
    t11 = (t0 + 3864);
    t12 = (t11 + 72U);
    t16 = *((char **)t12);
    t17 = ((char*)((ng21)));
    xsi_vlog_generic_convert_bit_index(t14, t16, 2, t17, 32, 1);
    t18 = (t14 + 4);
    t25 = *((unsigned int *)t18);
    t23 = (!(t25));
    if (t23 == 1)
        goto LAB17;

LAB18:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(107, ng0);

LAB9:    xsi_set_current_line(108, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3704);
    t16 = (t0 + 3704);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng19)));
    t20 = ((char*)((ng20)));
    xsi_vlog_convert_partindices(t13, t14, t15, ((int*)(t18)), 2, t19, 32, 1, t20, 32, 1);
    t21 = (t13 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (!(t22));
    t24 = (t14 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (!(t25));
    t27 = (t23 && t26);
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3864);
    t4 = (t0 + 3864);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng21)));
    xsi_vlog_generic_convert_bit_index(t13, t11, 2, t12, 32, 1);
    t16 = (t13 + 4);
    t6 = *((unsigned int *)t16);
    t23 = (!(t6));
    if (t23 == 1)
        goto LAB12;

LAB13:    goto LAB8;

LAB10:    t32 = *((unsigned int *)t15);
    t33 = (t32 + 0);
    t34 = *((unsigned int *)t13);
    t35 = *((unsigned int *)t14);
    t36 = (t34 - t35);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t12, t11, t33, *((unsigned int *)t14), t37);
    goto LAB11;

LAB12:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t13), 1);
    goto LAB13;

LAB15:    t34 = *((unsigned int *)t38);
    t33 = (t34 + 0);
    t35 = *((unsigned int *)t14);
    t39 = *((unsigned int *)t15);
    t36 = (t35 - t39);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t11, t13, t33, *((unsigned int *)t15), t37);
    goto LAB16;

LAB17:    xsi_vlogvar_assign_value(t5, t13, 0, *((unsigned int *)t14), 1);
    goto LAB18;

}

static void Always_106_8(char *t0)
{
    char t13[8];
    char t14[8];
    char t15[8];
    char t38[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    int t23;
    char *t24;
    unsigned int t25;
    int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    int t36;
    int t37;
    unsigned int t39;

LAB0:    t1 = (t0 + 7560U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 13960);
    *((int *)t2) = 1;
    t3 = (t0 + 7592);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(106, ng0);

LAB5:    xsi_set_current_line(107, ng0);
    t4 = (t0 + 2184U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(111, ng0);

LAB14:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 2344U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 48);
    t5 = (t3 + 52);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 255U);
    t22 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t22 & 255U);
    t11 = (t0 + 3704);
    t12 = (t0 + 3704);
    t16 = (t12 + 72U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng22)));
    t19 = ((char*)((ng23)));
    xsi_vlog_convert_partindices(t14, t15, t38, ((int*)(t17)), 2, t18, 32, 1, t19, 32, 1);
    t20 = (t14 + 4);
    t25 = *((unsigned int *)t20);
    t23 = (!(t25));
    t21 = (t15 + 4);
    t29 = *((unsigned int *)t21);
    t26 = (!(t29));
    t27 = (t23 && t26);
    t24 = (t38 + 4);
    t32 = *((unsigned int *)t24);
    t30 = (!(t32));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 2504U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 24);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 24);
    t22 = (t10 & 1);
    *((unsigned int *)t2) = t22;
    t5 = (t0 + 3864);
    t11 = (t0 + 3864);
    t12 = (t11 + 72U);
    t16 = *((char **)t12);
    t17 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t14, t16, 2, t17, 32, 1);
    t18 = (t14 + 4);
    t25 = *((unsigned int *)t18);
    t23 = (!(t25));
    if (t23 == 1)
        goto LAB17;

LAB18:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(107, ng0);

LAB9:    xsi_set_current_line(108, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3704);
    t16 = (t0 + 3704);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng22)));
    t20 = ((char*)((ng23)));
    xsi_vlog_convert_partindices(t13, t14, t15, ((int*)(t18)), 2, t19, 32, 1, t20, 32, 1);
    t21 = (t13 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (!(t22));
    t24 = (t14 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (!(t25));
    t27 = (t23 && t26);
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3864);
    t4 = (t0 + 3864);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t13, t11, 2, t12, 32, 1);
    t16 = (t13 + 4);
    t6 = *((unsigned int *)t16);
    t23 = (!(t6));
    if (t23 == 1)
        goto LAB12;

LAB13:    goto LAB8;

LAB10:    t32 = *((unsigned int *)t15);
    t33 = (t32 + 0);
    t34 = *((unsigned int *)t13);
    t35 = *((unsigned int *)t14);
    t36 = (t34 - t35);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t12, t11, t33, *((unsigned int *)t14), t37);
    goto LAB11;

LAB12:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t13), 1);
    goto LAB13;

LAB15:    t34 = *((unsigned int *)t38);
    t33 = (t34 + 0);
    t35 = *((unsigned int *)t14);
    t39 = *((unsigned int *)t15);
    t36 = (t35 - t39);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t11, t13, t33, *((unsigned int *)t15), t37);
    goto LAB16;

LAB17:    xsi_vlogvar_assign_value(t5, t13, 0, *((unsigned int *)t14), 1);
    goto LAB18;

}

static void Always_106_9(char *t0)
{
    char t13[8];
    char t14[8];
    char t15[8];
    char t38[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    int t23;
    char *t24;
    unsigned int t25;
    int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    int t36;
    int t37;
    unsigned int t39;

LAB0:    t1 = (t0 + 7808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 13976);
    *((int *)t2) = 1;
    t3 = (t0 + 7840);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(106, ng0);

LAB5:    xsi_set_current_line(107, ng0);
    t4 = (t0 + 2184U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(111, ng0);

LAB14:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 2344U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 40);
    t5 = (t3 + 44);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 24);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 24);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 255U);
    t22 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t22 & 255U);
    t11 = (t0 + 3704);
    t12 = (t0 + 3704);
    t16 = (t12 + 72U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng24)));
    t19 = ((char*)((ng25)));
    xsi_vlog_convert_partindices(t14, t15, t38, ((int*)(t17)), 2, t18, 32, 1, t19, 32, 1);
    t20 = (t14 + 4);
    t25 = *((unsigned int *)t20);
    t23 = (!(t25));
    t21 = (t15 + 4);
    t29 = *((unsigned int *)t21);
    t26 = (!(t29));
    t27 = (t23 && t26);
    t24 = (t38 + 4);
    t32 = *((unsigned int *)t24);
    t30 = (!(t32));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 2504U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 23);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 23);
    t22 = (t10 & 1);
    *((unsigned int *)t2) = t22;
    t5 = (t0 + 3864);
    t11 = (t0 + 3864);
    t12 = (t11 + 72U);
    t16 = *((char **)t12);
    t17 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t14, t16, 2, t17, 32, 1);
    t18 = (t14 + 4);
    t25 = *((unsigned int *)t18);
    t23 = (!(t25));
    if (t23 == 1)
        goto LAB17;

LAB18:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(107, ng0);

LAB9:    xsi_set_current_line(108, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3704);
    t16 = (t0 + 3704);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng24)));
    t20 = ((char*)((ng25)));
    xsi_vlog_convert_partindices(t13, t14, t15, ((int*)(t18)), 2, t19, 32, 1, t20, 32, 1);
    t21 = (t13 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (!(t22));
    t24 = (t14 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (!(t25));
    t27 = (t23 && t26);
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3864);
    t4 = (t0 + 3864);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t13, t11, 2, t12, 32, 1);
    t16 = (t13 + 4);
    t6 = *((unsigned int *)t16);
    t23 = (!(t6));
    if (t23 == 1)
        goto LAB12;

LAB13:    goto LAB8;

LAB10:    t32 = *((unsigned int *)t15);
    t33 = (t32 + 0);
    t34 = *((unsigned int *)t13);
    t35 = *((unsigned int *)t14);
    t36 = (t34 - t35);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t12, t11, t33, *((unsigned int *)t14), t37);
    goto LAB11;

LAB12:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t13), 1);
    goto LAB13;

LAB15:    t34 = *((unsigned int *)t38);
    t33 = (t34 + 0);
    t35 = *((unsigned int *)t14);
    t39 = *((unsigned int *)t15);
    t36 = (t35 - t39);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t11, t13, t33, *((unsigned int *)t15), t37);
    goto LAB16;

LAB17:    xsi_vlogvar_assign_value(t5, t13, 0, *((unsigned int *)t14), 1);
    goto LAB18;

}

static void Always_106_10(char *t0)
{
    char t13[8];
    char t14[8];
    char t15[8];
    char t38[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    int t23;
    char *t24;
    unsigned int t25;
    int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    int t36;
    int t37;
    unsigned int t39;

LAB0:    t1 = (t0 + 8056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 13992);
    *((int *)t2) = 1;
    t3 = (t0 + 8088);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(106, ng0);

LAB5:    xsi_set_current_line(107, ng0);
    t4 = (t0 + 2184U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(111, ng0);

LAB14:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 2344U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 40);
    t5 = (t3 + 44);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 16);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 16);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 255U);
    t22 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t22 & 255U);
    t11 = (t0 + 3704);
    t12 = (t0 + 3704);
    t16 = (t12 + 72U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng26)));
    t19 = ((char*)((ng27)));
    xsi_vlog_convert_partindices(t14, t15, t38, ((int*)(t17)), 2, t18, 32, 1, t19, 32, 1);
    t20 = (t14 + 4);
    t25 = *((unsigned int *)t20);
    t23 = (!(t25));
    t21 = (t15 + 4);
    t29 = *((unsigned int *)t21);
    t26 = (!(t29));
    t27 = (t23 && t26);
    t24 = (t38 + 4);
    t32 = *((unsigned int *)t24);
    t30 = (!(t32));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 2504U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 22);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 22);
    t22 = (t10 & 1);
    *((unsigned int *)t2) = t22;
    t5 = (t0 + 3864);
    t11 = (t0 + 3864);
    t12 = (t11 + 72U);
    t16 = *((char **)t12);
    t17 = ((char*)((ng28)));
    xsi_vlog_generic_convert_bit_index(t14, t16, 2, t17, 32, 1);
    t18 = (t14 + 4);
    t25 = *((unsigned int *)t18);
    t23 = (!(t25));
    if (t23 == 1)
        goto LAB17;

LAB18:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(107, ng0);

LAB9:    xsi_set_current_line(108, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3704);
    t16 = (t0 + 3704);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng26)));
    t20 = ((char*)((ng27)));
    xsi_vlog_convert_partindices(t13, t14, t15, ((int*)(t18)), 2, t19, 32, 1, t20, 32, 1);
    t21 = (t13 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (!(t22));
    t24 = (t14 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (!(t25));
    t27 = (t23 && t26);
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3864);
    t4 = (t0 + 3864);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng28)));
    xsi_vlog_generic_convert_bit_index(t13, t11, 2, t12, 32, 1);
    t16 = (t13 + 4);
    t6 = *((unsigned int *)t16);
    t23 = (!(t6));
    if (t23 == 1)
        goto LAB12;

LAB13:    goto LAB8;

LAB10:    t32 = *((unsigned int *)t15);
    t33 = (t32 + 0);
    t34 = *((unsigned int *)t13);
    t35 = *((unsigned int *)t14);
    t36 = (t34 - t35);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t12, t11, t33, *((unsigned int *)t14), t37);
    goto LAB11;

LAB12:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t13), 1);
    goto LAB13;

LAB15:    t34 = *((unsigned int *)t38);
    t33 = (t34 + 0);
    t35 = *((unsigned int *)t14);
    t39 = *((unsigned int *)t15);
    t36 = (t35 - t39);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t11, t13, t33, *((unsigned int *)t15), t37);
    goto LAB16;

LAB17:    xsi_vlogvar_assign_value(t5, t13, 0, *((unsigned int *)t14), 1);
    goto LAB18;

}

static void Always_106_11(char *t0)
{
    char t13[8];
    char t14[8];
    char t15[8];
    char t38[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    int t23;
    char *t24;
    unsigned int t25;
    int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    int t36;
    int t37;
    unsigned int t39;

LAB0:    t1 = (t0 + 8304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 14008);
    *((int *)t2) = 1;
    t3 = (t0 + 8336);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(106, ng0);

LAB5:    xsi_set_current_line(107, ng0);
    t4 = (t0 + 2184U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(111, ng0);

LAB14:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 2344U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 40);
    t5 = (t3 + 44);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 8);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 8);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 255U);
    t22 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t22 & 255U);
    t11 = (t0 + 3704);
    t12 = (t0 + 3704);
    t16 = (t12 + 72U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng29)));
    t19 = ((char*)((ng30)));
    xsi_vlog_convert_partindices(t14, t15, t38, ((int*)(t17)), 2, t18, 32, 1, t19, 32, 1);
    t20 = (t14 + 4);
    t25 = *((unsigned int *)t20);
    t23 = (!(t25));
    t21 = (t15 + 4);
    t29 = *((unsigned int *)t21);
    t26 = (!(t29));
    t27 = (t23 && t26);
    t24 = (t38 + 4);
    t32 = *((unsigned int *)t24);
    t30 = (!(t32));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 2504U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 21);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 21);
    t22 = (t10 & 1);
    *((unsigned int *)t2) = t22;
    t5 = (t0 + 3864);
    t11 = (t0 + 3864);
    t12 = (t11 + 72U);
    t16 = *((char **)t12);
    t17 = ((char*)((ng31)));
    xsi_vlog_generic_convert_bit_index(t14, t16, 2, t17, 32, 1);
    t18 = (t14 + 4);
    t25 = *((unsigned int *)t18);
    t23 = (!(t25));
    if (t23 == 1)
        goto LAB17;

LAB18:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(107, ng0);

LAB9:    xsi_set_current_line(108, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3704);
    t16 = (t0 + 3704);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng29)));
    t20 = ((char*)((ng30)));
    xsi_vlog_convert_partindices(t13, t14, t15, ((int*)(t18)), 2, t19, 32, 1, t20, 32, 1);
    t21 = (t13 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (!(t22));
    t24 = (t14 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (!(t25));
    t27 = (t23 && t26);
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3864);
    t4 = (t0 + 3864);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng31)));
    xsi_vlog_generic_convert_bit_index(t13, t11, 2, t12, 32, 1);
    t16 = (t13 + 4);
    t6 = *((unsigned int *)t16);
    t23 = (!(t6));
    if (t23 == 1)
        goto LAB12;

LAB13:    goto LAB8;

LAB10:    t32 = *((unsigned int *)t15);
    t33 = (t32 + 0);
    t34 = *((unsigned int *)t13);
    t35 = *((unsigned int *)t14);
    t36 = (t34 - t35);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t12, t11, t33, *((unsigned int *)t14), t37);
    goto LAB11;

LAB12:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t13), 1);
    goto LAB13;

LAB15:    t34 = *((unsigned int *)t38);
    t33 = (t34 + 0);
    t35 = *((unsigned int *)t14);
    t39 = *((unsigned int *)t15);
    t36 = (t35 - t39);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t11, t13, t33, *((unsigned int *)t15), t37);
    goto LAB16;

LAB17:    xsi_vlogvar_assign_value(t5, t13, 0, *((unsigned int *)t14), 1);
    goto LAB18;

}

static void Always_106_12(char *t0)
{
    char t13[8];
    char t14[8];
    char t15[8];
    char t38[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    int t23;
    char *t24;
    unsigned int t25;
    int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    int t36;
    int t37;
    unsigned int t39;

LAB0:    t1 = (t0 + 8552U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 14024);
    *((int *)t2) = 1;
    t3 = (t0 + 8584);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(106, ng0);

LAB5:    xsi_set_current_line(107, ng0);
    t4 = (t0 + 2184U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(111, ng0);

LAB14:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 2344U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 40);
    t5 = (t3 + 44);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 255U);
    t22 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t22 & 255U);
    t11 = (t0 + 3704);
    t12 = (t0 + 3704);
    t16 = (t12 + 72U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng32)));
    t19 = ((char*)((ng33)));
    xsi_vlog_convert_partindices(t14, t15, t38, ((int*)(t17)), 2, t18, 32, 1, t19, 32, 1);
    t20 = (t14 + 4);
    t25 = *((unsigned int *)t20);
    t23 = (!(t25));
    t21 = (t15 + 4);
    t29 = *((unsigned int *)t21);
    t26 = (!(t29));
    t27 = (t23 && t26);
    t24 = (t38 + 4);
    t32 = *((unsigned int *)t24);
    t30 = (!(t32));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 2504U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 20);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 20);
    t22 = (t10 & 1);
    *((unsigned int *)t2) = t22;
    t5 = (t0 + 3864);
    t11 = (t0 + 3864);
    t12 = (t11 + 72U);
    t16 = *((char **)t12);
    t17 = ((char*)((ng34)));
    xsi_vlog_generic_convert_bit_index(t14, t16, 2, t17, 32, 1);
    t18 = (t14 + 4);
    t25 = *((unsigned int *)t18);
    t23 = (!(t25));
    if (t23 == 1)
        goto LAB17;

LAB18:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(107, ng0);

LAB9:    xsi_set_current_line(108, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3704);
    t16 = (t0 + 3704);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng32)));
    t20 = ((char*)((ng33)));
    xsi_vlog_convert_partindices(t13, t14, t15, ((int*)(t18)), 2, t19, 32, 1, t20, 32, 1);
    t21 = (t13 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (!(t22));
    t24 = (t14 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (!(t25));
    t27 = (t23 && t26);
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3864);
    t4 = (t0 + 3864);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng34)));
    xsi_vlog_generic_convert_bit_index(t13, t11, 2, t12, 32, 1);
    t16 = (t13 + 4);
    t6 = *((unsigned int *)t16);
    t23 = (!(t6));
    if (t23 == 1)
        goto LAB12;

LAB13:    goto LAB8;

LAB10:    t32 = *((unsigned int *)t15);
    t33 = (t32 + 0);
    t34 = *((unsigned int *)t13);
    t35 = *((unsigned int *)t14);
    t36 = (t34 - t35);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t12, t11, t33, *((unsigned int *)t14), t37);
    goto LAB11;

LAB12:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t13), 1);
    goto LAB13;

LAB15:    t34 = *((unsigned int *)t38);
    t33 = (t34 + 0);
    t35 = *((unsigned int *)t14);
    t39 = *((unsigned int *)t15);
    t36 = (t35 - t39);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t11, t13, t33, *((unsigned int *)t15), t37);
    goto LAB16;

LAB17:    xsi_vlogvar_assign_value(t5, t13, 0, *((unsigned int *)t14), 1);
    goto LAB18;

}

static void Always_106_13(char *t0)
{
    char t13[8];
    char t14[8];
    char t15[8];
    char t38[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    int t23;
    char *t24;
    unsigned int t25;
    int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    int t36;
    int t37;
    unsigned int t39;

LAB0:    t1 = (t0 + 8800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 14040);
    *((int *)t2) = 1;
    t3 = (t0 + 8832);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(106, ng0);

LAB5:    xsi_set_current_line(107, ng0);
    t4 = (t0 + 2184U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(111, ng0);

LAB14:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 2344U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 32);
    t5 = (t3 + 36);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 24);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 24);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 255U);
    t22 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t22 & 255U);
    t11 = (t0 + 3704);
    t12 = (t0 + 3704);
    t16 = (t12 + 72U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng35)));
    t19 = ((char*)((ng36)));
    xsi_vlog_convert_partindices(t14, t15, t38, ((int*)(t17)), 2, t18, 32, 1, t19, 32, 1);
    t20 = (t14 + 4);
    t25 = *((unsigned int *)t20);
    t23 = (!(t25));
    t21 = (t15 + 4);
    t29 = *((unsigned int *)t21);
    t26 = (!(t29));
    t27 = (t23 && t26);
    t24 = (t38 + 4);
    t32 = *((unsigned int *)t24);
    t30 = (!(t32));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 2504U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 19);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 19);
    t22 = (t10 & 1);
    *((unsigned int *)t2) = t22;
    t5 = (t0 + 3864);
    t11 = (t0 + 3864);
    t12 = (t11 + 72U);
    t16 = *((char **)t12);
    t17 = ((char*)((ng37)));
    xsi_vlog_generic_convert_bit_index(t14, t16, 2, t17, 32, 1);
    t18 = (t14 + 4);
    t25 = *((unsigned int *)t18);
    t23 = (!(t25));
    if (t23 == 1)
        goto LAB17;

LAB18:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(107, ng0);

LAB9:    xsi_set_current_line(108, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3704);
    t16 = (t0 + 3704);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng35)));
    t20 = ((char*)((ng36)));
    xsi_vlog_convert_partindices(t13, t14, t15, ((int*)(t18)), 2, t19, 32, 1, t20, 32, 1);
    t21 = (t13 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (!(t22));
    t24 = (t14 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (!(t25));
    t27 = (t23 && t26);
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3864);
    t4 = (t0 + 3864);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng37)));
    xsi_vlog_generic_convert_bit_index(t13, t11, 2, t12, 32, 1);
    t16 = (t13 + 4);
    t6 = *((unsigned int *)t16);
    t23 = (!(t6));
    if (t23 == 1)
        goto LAB12;

LAB13:    goto LAB8;

LAB10:    t32 = *((unsigned int *)t15);
    t33 = (t32 + 0);
    t34 = *((unsigned int *)t13);
    t35 = *((unsigned int *)t14);
    t36 = (t34 - t35);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t12, t11, t33, *((unsigned int *)t14), t37);
    goto LAB11;

LAB12:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t13), 1);
    goto LAB13;

LAB15:    t34 = *((unsigned int *)t38);
    t33 = (t34 + 0);
    t35 = *((unsigned int *)t14);
    t39 = *((unsigned int *)t15);
    t36 = (t35 - t39);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t11, t13, t33, *((unsigned int *)t15), t37);
    goto LAB16;

LAB17:    xsi_vlogvar_assign_value(t5, t13, 0, *((unsigned int *)t14), 1);
    goto LAB18;

}

static void Always_106_14(char *t0)
{
    char t13[8];
    char t14[8];
    char t15[8];
    char t38[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    int t23;
    char *t24;
    unsigned int t25;
    int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    int t36;
    int t37;
    unsigned int t39;

LAB0:    t1 = (t0 + 9048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 14056);
    *((int *)t2) = 1;
    t3 = (t0 + 9080);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(106, ng0);

LAB5:    xsi_set_current_line(107, ng0);
    t4 = (t0 + 2184U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(111, ng0);

LAB14:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 2344U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 32);
    t5 = (t3 + 36);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 16);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 16);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 255U);
    t22 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t22 & 255U);
    t11 = (t0 + 3704);
    t12 = (t0 + 3704);
    t16 = (t12 + 72U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng38)));
    t19 = ((char*)((ng39)));
    xsi_vlog_convert_partindices(t14, t15, t38, ((int*)(t17)), 2, t18, 32, 1, t19, 32, 1);
    t20 = (t14 + 4);
    t25 = *((unsigned int *)t20);
    t23 = (!(t25));
    t21 = (t15 + 4);
    t29 = *((unsigned int *)t21);
    t26 = (!(t29));
    t27 = (t23 && t26);
    t24 = (t38 + 4);
    t32 = *((unsigned int *)t24);
    t30 = (!(t32));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 2504U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 18);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 18);
    t22 = (t10 & 1);
    *((unsigned int *)t2) = t22;
    t5 = (t0 + 3864);
    t11 = (t0 + 3864);
    t12 = (t11 + 72U);
    t16 = *((char **)t12);
    t17 = ((char*)((ng40)));
    xsi_vlog_generic_convert_bit_index(t14, t16, 2, t17, 32, 1);
    t18 = (t14 + 4);
    t25 = *((unsigned int *)t18);
    t23 = (!(t25));
    if (t23 == 1)
        goto LAB17;

LAB18:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(107, ng0);

LAB9:    xsi_set_current_line(108, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3704);
    t16 = (t0 + 3704);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng38)));
    t20 = ((char*)((ng39)));
    xsi_vlog_convert_partindices(t13, t14, t15, ((int*)(t18)), 2, t19, 32, 1, t20, 32, 1);
    t21 = (t13 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (!(t22));
    t24 = (t14 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (!(t25));
    t27 = (t23 && t26);
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3864);
    t4 = (t0 + 3864);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng40)));
    xsi_vlog_generic_convert_bit_index(t13, t11, 2, t12, 32, 1);
    t16 = (t13 + 4);
    t6 = *((unsigned int *)t16);
    t23 = (!(t6));
    if (t23 == 1)
        goto LAB12;

LAB13:    goto LAB8;

LAB10:    t32 = *((unsigned int *)t15);
    t33 = (t32 + 0);
    t34 = *((unsigned int *)t13);
    t35 = *((unsigned int *)t14);
    t36 = (t34 - t35);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t12, t11, t33, *((unsigned int *)t14), t37);
    goto LAB11;

LAB12:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t13), 1);
    goto LAB13;

LAB15:    t34 = *((unsigned int *)t38);
    t33 = (t34 + 0);
    t35 = *((unsigned int *)t14);
    t39 = *((unsigned int *)t15);
    t36 = (t35 - t39);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t11, t13, t33, *((unsigned int *)t15), t37);
    goto LAB16;

LAB17:    xsi_vlogvar_assign_value(t5, t13, 0, *((unsigned int *)t14), 1);
    goto LAB18;

}

static void Always_106_15(char *t0)
{
    char t13[8];
    char t14[8];
    char t15[8];
    char t38[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    int t23;
    char *t24;
    unsigned int t25;
    int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    int t36;
    int t37;
    unsigned int t39;

LAB0:    t1 = (t0 + 9296U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 14072);
    *((int *)t2) = 1;
    t3 = (t0 + 9328);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(106, ng0);

LAB5:    xsi_set_current_line(107, ng0);
    t4 = (t0 + 2184U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(111, ng0);

LAB14:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 2344U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 32);
    t5 = (t3 + 36);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 8);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 8);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 255U);
    t22 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t22 & 255U);
    t11 = (t0 + 3704);
    t12 = (t0 + 3704);
    t16 = (t12 + 72U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng41)));
    t19 = ((char*)((ng42)));
    xsi_vlog_convert_partindices(t14, t15, t38, ((int*)(t17)), 2, t18, 32, 1, t19, 32, 1);
    t20 = (t14 + 4);
    t25 = *((unsigned int *)t20);
    t23 = (!(t25));
    t21 = (t15 + 4);
    t29 = *((unsigned int *)t21);
    t26 = (!(t29));
    t27 = (t23 && t26);
    t24 = (t38 + 4);
    t32 = *((unsigned int *)t24);
    t30 = (!(t32));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 2504U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 17);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 17);
    t22 = (t10 & 1);
    *((unsigned int *)t2) = t22;
    t5 = (t0 + 3864);
    t11 = (t0 + 3864);
    t12 = (t11 + 72U);
    t16 = *((char **)t12);
    t17 = ((char*)((ng43)));
    xsi_vlog_generic_convert_bit_index(t14, t16, 2, t17, 32, 1);
    t18 = (t14 + 4);
    t25 = *((unsigned int *)t18);
    t23 = (!(t25));
    if (t23 == 1)
        goto LAB17;

LAB18:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(107, ng0);

LAB9:    xsi_set_current_line(108, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3704);
    t16 = (t0 + 3704);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng41)));
    t20 = ((char*)((ng42)));
    xsi_vlog_convert_partindices(t13, t14, t15, ((int*)(t18)), 2, t19, 32, 1, t20, 32, 1);
    t21 = (t13 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (!(t22));
    t24 = (t14 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (!(t25));
    t27 = (t23 && t26);
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3864);
    t4 = (t0 + 3864);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng43)));
    xsi_vlog_generic_convert_bit_index(t13, t11, 2, t12, 32, 1);
    t16 = (t13 + 4);
    t6 = *((unsigned int *)t16);
    t23 = (!(t6));
    if (t23 == 1)
        goto LAB12;

LAB13:    goto LAB8;

LAB10:    t32 = *((unsigned int *)t15);
    t33 = (t32 + 0);
    t34 = *((unsigned int *)t13);
    t35 = *((unsigned int *)t14);
    t36 = (t34 - t35);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t12, t11, t33, *((unsigned int *)t14), t37);
    goto LAB11;

LAB12:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t13), 1);
    goto LAB13;

LAB15:    t34 = *((unsigned int *)t38);
    t33 = (t34 + 0);
    t35 = *((unsigned int *)t14);
    t39 = *((unsigned int *)t15);
    t36 = (t35 - t39);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t11, t13, t33, *((unsigned int *)t15), t37);
    goto LAB16;

LAB17:    xsi_vlogvar_assign_value(t5, t13, 0, *((unsigned int *)t14), 1);
    goto LAB18;

}

static void Always_106_16(char *t0)
{
    char t13[8];
    char t14[8];
    char t15[8];
    char t38[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    int t23;
    char *t24;
    unsigned int t25;
    int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    int t36;
    int t37;
    unsigned int t39;

LAB0:    t1 = (t0 + 9544U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 14088);
    *((int *)t2) = 1;
    t3 = (t0 + 9576);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(106, ng0);

LAB5:    xsi_set_current_line(107, ng0);
    t4 = (t0 + 2184U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(111, ng0);

LAB14:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 2344U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 32);
    t5 = (t3 + 36);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 255U);
    t22 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t22 & 255U);
    t11 = (t0 + 3704);
    t12 = (t0 + 3704);
    t16 = (t12 + 72U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng44)));
    t19 = ((char*)((ng45)));
    xsi_vlog_convert_partindices(t14, t15, t38, ((int*)(t17)), 2, t18, 32, 1, t19, 32, 1);
    t20 = (t14 + 4);
    t25 = *((unsigned int *)t20);
    t23 = (!(t25));
    t21 = (t15 + 4);
    t29 = *((unsigned int *)t21);
    t26 = (!(t29));
    t27 = (t23 && t26);
    t24 = (t38 + 4);
    t32 = *((unsigned int *)t24);
    t30 = (!(t32));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 2504U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 16);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 16);
    t22 = (t10 & 1);
    *((unsigned int *)t2) = t22;
    t5 = (t0 + 3864);
    t11 = (t0 + 3864);
    t12 = (t11 + 72U);
    t16 = *((char **)t12);
    t17 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t14, t16, 2, t17, 32, 1);
    t18 = (t14 + 4);
    t25 = *((unsigned int *)t18);
    t23 = (!(t25));
    if (t23 == 1)
        goto LAB17;

LAB18:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(107, ng0);

LAB9:    xsi_set_current_line(108, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3704);
    t16 = (t0 + 3704);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng44)));
    t20 = ((char*)((ng45)));
    xsi_vlog_convert_partindices(t13, t14, t15, ((int*)(t18)), 2, t19, 32, 1, t20, 32, 1);
    t21 = (t13 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (!(t22));
    t24 = (t14 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (!(t25));
    t27 = (t23 && t26);
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3864);
    t4 = (t0 + 3864);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t13, t11, 2, t12, 32, 1);
    t16 = (t13 + 4);
    t6 = *((unsigned int *)t16);
    t23 = (!(t6));
    if (t23 == 1)
        goto LAB12;

LAB13:    goto LAB8;

LAB10:    t32 = *((unsigned int *)t15);
    t33 = (t32 + 0);
    t34 = *((unsigned int *)t13);
    t35 = *((unsigned int *)t14);
    t36 = (t34 - t35);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t12, t11, t33, *((unsigned int *)t14), t37);
    goto LAB11;

LAB12:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t13), 1);
    goto LAB13;

LAB15:    t34 = *((unsigned int *)t38);
    t33 = (t34 + 0);
    t35 = *((unsigned int *)t14);
    t39 = *((unsigned int *)t15);
    t36 = (t35 - t39);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t11, t13, t33, *((unsigned int *)t15), t37);
    goto LAB16;

LAB17:    xsi_vlogvar_assign_value(t5, t13, 0, *((unsigned int *)t14), 1);
    goto LAB18;

}

static void Always_106_17(char *t0)
{
    char t13[8];
    char t14[8];
    char t15[8];
    char t38[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    int t23;
    char *t24;
    unsigned int t25;
    int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    int t36;
    int t37;
    unsigned int t39;

LAB0:    t1 = (t0 + 9792U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 14104);
    *((int *)t2) = 1;
    t3 = (t0 + 9824);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(106, ng0);

LAB5:    xsi_set_current_line(107, ng0);
    t4 = (t0 + 2184U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(111, ng0);

LAB14:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 2344U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 24);
    t5 = (t3 + 28);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 24);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 24);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 255U);
    t22 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t22 & 255U);
    t11 = (t0 + 3704);
    t12 = (t0 + 3704);
    t16 = (t12 + 72U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng46)));
    t19 = ((char*)((ng47)));
    xsi_vlog_convert_partindices(t14, t15, t38, ((int*)(t17)), 2, t18, 32, 1, t19, 32, 1);
    t20 = (t14 + 4);
    t25 = *((unsigned int *)t20);
    t23 = (!(t25));
    t21 = (t15 + 4);
    t29 = *((unsigned int *)t21);
    t26 = (!(t29));
    t27 = (t23 && t26);
    t24 = (t38 + 4);
    t32 = *((unsigned int *)t24);
    t30 = (!(t32));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 2504U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 15);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 15);
    t22 = (t10 & 1);
    *((unsigned int *)t2) = t22;
    t5 = (t0 + 3864);
    t11 = (t0 + 3864);
    t12 = (t11 + 72U);
    t16 = *((char **)t12);
    t17 = ((char*)((ng9)));
    xsi_vlog_generic_convert_bit_index(t14, t16, 2, t17, 32, 1);
    t18 = (t14 + 4);
    t25 = *((unsigned int *)t18);
    t23 = (!(t25));
    if (t23 == 1)
        goto LAB17;

LAB18:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(107, ng0);

LAB9:    xsi_set_current_line(108, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3704);
    t16 = (t0 + 3704);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng46)));
    t20 = ((char*)((ng47)));
    xsi_vlog_convert_partindices(t13, t14, t15, ((int*)(t18)), 2, t19, 32, 1, t20, 32, 1);
    t21 = (t13 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (!(t22));
    t24 = (t14 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (!(t25));
    t27 = (t23 && t26);
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3864);
    t4 = (t0 + 3864);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng9)));
    xsi_vlog_generic_convert_bit_index(t13, t11, 2, t12, 32, 1);
    t16 = (t13 + 4);
    t6 = *((unsigned int *)t16);
    t23 = (!(t6));
    if (t23 == 1)
        goto LAB12;

LAB13:    goto LAB8;

LAB10:    t32 = *((unsigned int *)t15);
    t33 = (t32 + 0);
    t34 = *((unsigned int *)t13);
    t35 = *((unsigned int *)t14);
    t36 = (t34 - t35);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t12, t11, t33, *((unsigned int *)t14), t37);
    goto LAB11;

LAB12:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t13), 1);
    goto LAB13;

LAB15:    t34 = *((unsigned int *)t38);
    t33 = (t34 + 0);
    t35 = *((unsigned int *)t14);
    t39 = *((unsigned int *)t15);
    t36 = (t35 - t39);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t11, t13, t33, *((unsigned int *)t15), t37);
    goto LAB16;

LAB17:    xsi_vlogvar_assign_value(t5, t13, 0, *((unsigned int *)t14), 1);
    goto LAB18;

}

static void Always_106_18(char *t0)
{
    char t13[8];
    char t14[8];
    char t15[8];
    char t38[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    int t23;
    char *t24;
    unsigned int t25;
    int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    int t36;
    int t37;
    unsigned int t39;

LAB0:    t1 = (t0 + 10040U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 14120);
    *((int *)t2) = 1;
    t3 = (t0 + 10072);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(106, ng0);

LAB5:    xsi_set_current_line(107, ng0);
    t4 = (t0 + 2184U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(111, ng0);

LAB14:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 2344U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 24);
    t5 = (t3 + 28);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 16);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 16);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 255U);
    t22 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t22 & 255U);
    t11 = (t0 + 3704);
    t12 = (t0 + 3704);
    t16 = (t12 + 72U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng48)));
    t19 = ((char*)((ng49)));
    xsi_vlog_convert_partindices(t14, t15, t38, ((int*)(t17)), 2, t18, 32, 1, t19, 32, 1);
    t20 = (t14 + 4);
    t25 = *((unsigned int *)t20);
    t23 = (!(t25));
    t21 = (t15 + 4);
    t29 = *((unsigned int *)t21);
    t26 = (!(t29));
    t27 = (t23 && t26);
    t24 = (t38 + 4);
    t32 = *((unsigned int *)t24);
    t30 = (!(t32));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 2504U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 14);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 14);
    t22 = (t10 & 1);
    *((unsigned int *)t2) = t22;
    t5 = (t0 + 3864);
    t11 = (t0 + 3864);
    t12 = (t11 + 72U);
    t16 = *((char **)t12);
    t17 = ((char*)((ng50)));
    xsi_vlog_generic_convert_bit_index(t14, t16, 2, t17, 32, 1);
    t18 = (t14 + 4);
    t25 = *((unsigned int *)t18);
    t23 = (!(t25));
    if (t23 == 1)
        goto LAB17;

LAB18:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(107, ng0);

LAB9:    xsi_set_current_line(108, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3704);
    t16 = (t0 + 3704);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng48)));
    t20 = ((char*)((ng49)));
    xsi_vlog_convert_partindices(t13, t14, t15, ((int*)(t18)), 2, t19, 32, 1, t20, 32, 1);
    t21 = (t13 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (!(t22));
    t24 = (t14 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (!(t25));
    t27 = (t23 && t26);
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3864);
    t4 = (t0 + 3864);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng50)));
    xsi_vlog_generic_convert_bit_index(t13, t11, 2, t12, 32, 1);
    t16 = (t13 + 4);
    t6 = *((unsigned int *)t16);
    t23 = (!(t6));
    if (t23 == 1)
        goto LAB12;

LAB13:    goto LAB8;

LAB10:    t32 = *((unsigned int *)t15);
    t33 = (t32 + 0);
    t34 = *((unsigned int *)t13);
    t35 = *((unsigned int *)t14);
    t36 = (t34 - t35);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t12, t11, t33, *((unsigned int *)t14), t37);
    goto LAB11;

LAB12:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t13), 1);
    goto LAB13;

LAB15:    t34 = *((unsigned int *)t38);
    t33 = (t34 + 0);
    t35 = *((unsigned int *)t14);
    t39 = *((unsigned int *)t15);
    t36 = (t35 - t39);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t11, t13, t33, *((unsigned int *)t15), t37);
    goto LAB16;

LAB17:    xsi_vlogvar_assign_value(t5, t13, 0, *((unsigned int *)t14), 1);
    goto LAB18;

}

static void Always_106_19(char *t0)
{
    char t13[8];
    char t14[8];
    char t15[8];
    char t38[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    int t23;
    char *t24;
    unsigned int t25;
    int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    int t36;
    int t37;
    unsigned int t39;

LAB0:    t1 = (t0 + 10288U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 14136);
    *((int *)t2) = 1;
    t3 = (t0 + 10320);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(106, ng0);

LAB5:    xsi_set_current_line(107, ng0);
    t4 = (t0 + 2184U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(111, ng0);

LAB14:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 2344U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 24);
    t5 = (t3 + 28);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 8);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 8);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 255U);
    t22 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t22 & 255U);
    t11 = (t0 + 3704);
    t12 = (t0 + 3704);
    t16 = (t12 + 72U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng51)));
    t19 = ((char*)((ng52)));
    xsi_vlog_convert_partindices(t14, t15, t38, ((int*)(t17)), 2, t18, 32, 1, t19, 32, 1);
    t20 = (t14 + 4);
    t25 = *((unsigned int *)t20);
    t23 = (!(t25));
    t21 = (t15 + 4);
    t29 = *((unsigned int *)t21);
    t26 = (!(t29));
    t27 = (t23 && t26);
    t24 = (t38 + 4);
    t32 = *((unsigned int *)t24);
    t30 = (!(t32));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 2504U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 13);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 13);
    t22 = (t10 & 1);
    *((unsigned int *)t2) = t22;
    t5 = (t0 + 3864);
    t11 = (t0 + 3864);
    t12 = (t11 + 72U);
    t16 = *((char **)t12);
    t17 = ((char*)((ng53)));
    xsi_vlog_generic_convert_bit_index(t14, t16, 2, t17, 32, 1);
    t18 = (t14 + 4);
    t25 = *((unsigned int *)t18);
    t23 = (!(t25));
    if (t23 == 1)
        goto LAB17;

LAB18:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(107, ng0);

LAB9:    xsi_set_current_line(108, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3704);
    t16 = (t0 + 3704);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng51)));
    t20 = ((char*)((ng52)));
    xsi_vlog_convert_partindices(t13, t14, t15, ((int*)(t18)), 2, t19, 32, 1, t20, 32, 1);
    t21 = (t13 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (!(t22));
    t24 = (t14 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (!(t25));
    t27 = (t23 && t26);
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3864);
    t4 = (t0 + 3864);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng53)));
    xsi_vlog_generic_convert_bit_index(t13, t11, 2, t12, 32, 1);
    t16 = (t13 + 4);
    t6 = *((unsigned int *)t16);
    t23 = (!(t6));
    if (t23 == 1)
        goto LAB12;

LAB13:    goto LAB8;

LAB10:    t32 = *((unsigned int *)t15);
    t33 = (t32 + 0);
    t34 = *((unsigned int *)t13);
    t35 = *((unsigned int *)t14);
    t36 = (t34 - t35);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t12, t11, t33, *((unsigned int *)t14), t37);
    goto LAB11;

LAB12:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t13), 1);
    goto LAB13;

LAB15:    t34 = *((unsigned int *)t38);
    t33 = (t34 + 0);
    t35 = *((unsigned int *)t14);
    t39 = *((unsigned int *)t15);
    t36 = (t35 - t39);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t11, t13, t33, *((unsigned int *)t15), t37);
    goto LAB16;

LAB17:    xsi_vlogvar_assign_value(t5, t13, 0, *((unsigned int *)t14), 1);
    goto LAB18;

}

static void Always_106_20(char *t0)
{
    char t13[8];
    char t14[8];
    char t15[8];
    char t38[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    int t23;
    char *t24;
    unsigned int t25;
    int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    int t36;
    int t37;
    unsigned int t39;

LAB0:    t1 = (t0 + 10536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 14152);
    *((int *)t2) = 1;
    t3 = (t0 + 10568);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(106, ng0);

LAB5:    xsi_set_current_line(107, ng0);
    t4 = (t0 + 2184U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(111, ng0);

LAB14:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 2344U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 24);
    t5 = (t3 + 28);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 255U);
    t22 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t22 & 255U);
    t11 = (t0 + 3704);
    t12 = (t0 + 3704);
    t16 = (t12 + 72U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng54)));
    t19 = ((char*)((ng55)));
    xsi_vlog_convert_partindices(t14, t15, t38, ((int*)(t17)), 2, t18, 32, 1, t19, 32, 1);
    t20 = (t14 + 4);
    t25 = *((unsigned int *)t20);
    t23 = (!(t25));
    t21 = (t15 + 4);
    t29 = *((unsigned int *)t21);
    t26 = (!(t29));
    t27 = (t23 && t26);
    t24 = (t38 + 4);
    t32 = *((unsigned int *)t24);
    t30 = (!(t32));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 2504U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 12);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 12);
    t22 = (t10 & 1);
    *((unsigned int *)t2) = t22;
    t5 = (t0 + 3864);
    t11 = (t0 + 3864);
    t12 = (t11 + 72U);
    t16 = *((char **)t12);
    t17 = ((char*)((ng56)));
    xsi_vlog_generic_convert_bit_index(t14, t16, 2, t17, 32, 1);
    t18 = (t14 + 4);
    t25 = *((unsigned int *)t18);
    t23 = (!(t25));
    if (t23 == 1)
        goto LAB17;

LAB18:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(107, ng0);

LAB9:    xsi_set_current_line(108, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3704);
    t16 = (t0 + 3704);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng54)));
    t20 = ((char*)((ng55)));
    xsi_vlog_convert_partindices(t13, t14, t15, ((int*)(t18)), 2, t19, 32, 1, t20, 32, 1);
    t21 = (t13 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (!(t22));
    t24 = (t14 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (!(t25));
    t27 = (t23 && t26);
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3864);
    t4 = (t0 + 3864);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng56)));
    xsi_vlog_generic_convert_bit_index(t13, t11, 2, t12, 32, 1);
    t16 = (t13 + 4);
    t6 = *((unsigned int *)t16);
    t23 = (!(t6));
    if (t23 == 1)
        goto LAB12;

LAB13:    goto LAB8;

LAB10:    t32 = *((unsigned int *)t15);
    t33 = (t32 + 0);
    t34 = *((unsigned int *)t13);
    t35 = *((unsigned int *)t14);
    t36 = (t34 - t35);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t12, t11, t33, *((unsigned int *)t14), t37);
    goto LAB11;

LAB12:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t13), 1);
    goto LAB13;

LAB15:    t34 = *((unsigned int *)t38);
    t33 = (t34 + 0);
    t35 = *((unsigned int *)t14);
    t39 = *((unsigned int *)t15);
    t36 = (t35 - t39);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t11, t13, t33, *((unsigned int *)t15), t37);
    goto LAB16;

LAB17:    xsi_vlogvar_assign_value(t5, t13, 0, *((unsigned int *)t14), 1);
    goto LAB18;

}

static void Always_106_21(char *t0)
{
    char t13[8];
    char t14[8];
    char t15[8];
    char t38[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    int t23;
    char *t24;
    unsigned int t25;
    int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    int t36;
    int t37;
    unsigned int t39;

LAB0:    t1 = (t0 + 10784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 14168);
    *((int *)t2) = 1;
    t3 = (t0 + 10816);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(106, ng0);

LAB5:    xsi_set_current_line(107, ng0);
    t4 = (t0 + 2184U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(111, ng0);

LAB14:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 2344U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 16);
    t5 = (t3 + 20);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 24);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 24);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 255U);
    t22 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t22 & 255U);
    t11 = (t0 + 3704);
    t12 = (t0 + 3704);
    t16 = (t12 + 72U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng57)));
    t19 = ((char*)((ng58)));
    xsi_vlog_convert_partindices(t14, t15, t38, ((int*)(t17)), 2, t18, 32, 1, t19, 32, 1);
    t20 = (t14 + 4);
    t25 = *((unsigned int *)t20);
    t23 = (!(t25));
    t21 = (t15 + 4);
    t29 = *((unsigned int *)t21);
    t26 = (!(t29));
    t27 = (t23 && t26);
    t24 = (t38 + 4);
    t32 = *((unsigned int *)t24);
    t30 = (!(t32));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 2504U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 11);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 11);
    t22 = (t10 & 1);
    *((unsigned int *)t2) = t22;
    t5 = (t0 + 3864);
    t11 = (t0 + 3864);
    t12 = (t11 + 72U);
    t16 = *((char **)t12);
    t17 = ((char*)((ng59)));
    xsi_vlog_generic_convert_bit_index(t14, t16, 2, t17, 32, 1);
    t18 = (t14 + 4);
    t25 = *((unsigned int *)t18);
    t23 = (!(t25));
    if (t23 == 1)
        goto LAB17;

LAB18:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(107, ng0);

LAB9:    xsi_set_current_line(108, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3704);
    t16 = (t0 + 3704);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng57)));
    t20 = ((char*)((ng58)));
    xsi_vlog_convert_partindices(t13, t14, t15, ((int*)(t18)), 2, t19, 32, 1, t20, 32, 1);
    t21 = (t13 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (!(t22));
    t24 = (t14 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (!(t25));
    t27 = (t23 && t26);
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3864);
    t4 = (t0 + 3864);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng59)));
    xsi_vlog_generic_convert_bit_index(t13, t11, 2, t12, 32, 1);
    t16 = (t13 + 4);
    t6 = *((unsigned int *)t16);
    t23 = (!(t6));
    if (t23 == 1)
        goto LAB12;

LAB13:    goto LAB8;

LAB10:    t32 = *((unsigned int *)t15);
    t33 = (t32 + 0);
    t34 = *((unsigned int *)t13);
    t35 = *((unsigned int *)t14);
    t36 = (t34 - t35);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t12, t11, t33, *((unsigned int *)t14), t37);
    goto LAB11;

LAB12:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t13), 1);
    goto LAB13;

LAB15:    t34 = *((unsigned int *)t38);
    t33 = (t34 + 0);
    t35 = *((unsigned int *)t14);
    t39 = *((unsigned int *)t15);
    t36 = (t35 - t39);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t11, t13, t33, *((unsigned int *)t15), t37);
    goto LAB16;

LAB17:    xsi_vlogvar_assign_value(t5, t13, 0, *((unsigned int *)t14), 1);
    goto LAB18;

}

static void Always_106_22(char *t0)
{
    char t13[8];
    char t14[8];
    char t15[8];
    char t38[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    int t23;
    char *t24;
    unsigned int t25;
    int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    int t36;
    int t37;
    unsigned int t39;

LAB0:    t1 = (t0 + 11032U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 14184);
    *((int *)t2) = 1;
    t3 = (t0 + 11064);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(106, ng0);

LAB5:    xsi_set_current_line(107, ng0);
    t4 = (t0 + 2184U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(111, ng0);

LAB14:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 2344U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 16);
    t5 = (t3 + 20);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 16);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 16);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 255U);
    t22 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t22 & 255U);
    t11 = (t0 + 3704);
    t12 = (t0 + 3704);
    t16 = (t12 + 72U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng60)));
    t19 = ((char*)((ng61)));
    xsi_vlog_convert_partindices(t14, t15, t38, ((int*)(t17)), 2, t18, 32, 1, t19, 32, 1);
    t20 = (t14 + 4);
    t25 = *((unsigned int *)t20);
    t23 = (!(t25));
    t21 = (t15 + 4);
    t29 = *((unsigned int *)t21);
    t26 = (!(t29));
    t27 = (t23 && t26);
    t24 = (t38 + 4);
    t32 = *((unsigned int *)t24);
    t30 = (!(t32));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 2504U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 10);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 10);
    t22 = (t10 & 1);
    *((unsigned int *)t2) = t22;
    t5 = (t0 + 3864);
    t11 = (t0 + 3864);
    t12 = (t11 + 72U);
    t16 = *((char **)t12);
    t17 = ((char*)((ng62)));
    xsi_vlog_generic_convert_bit_index(t14, t16, 2, t17, 32, 1);
    t18 = (t14 + 4);
    t25 = *((unsigned int *)t18);
    t23 = (!(t25));
    if (t23 == 1)
        goto LAB17;

LAB18:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(107, ng0);

LAB9:    xsi_set_current_line(108, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3704);
    t16 = (t0 + 3704);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng60)));
    t20 = ((char*)((ng61)));
    xsi_vlog_convert_partindices(t13, t14, t15, ((int*)(t18)), 2, t19, 32, 1, t20, 32, 1);
    t21 = (t13 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (!(t22));
    t24 = (t14 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (!(t25));
    t27 = (t23 && t26);
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3864);
    t4 = (t0 + 3864);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng62)));
    xsi_vlog_generic_convert_bit_index(t13, t11, 2, t12, 32, 1);
    t16 = (t13 + 4);
    t6 = *((unsigned int *)t16);
    t23 = (!(t6));
    if (t23 == 1)
        goto LAB12;

LAB13:    goto LAB8;

LAB10:    t32 = *((unsigned int *)t15);
    t33 = (t32 + 0);
    t34 = *((unsigned int *)t13);
    t35 = *((unsigned int *)t14);
    t36 = (t34 - t35);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t12, t11, t33, *((unsigned int *)t14), t37);
    goto LAB11;

LAB12:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t13), 1);
    goto LAB13;

LAB15:    t34 = *((unsigned int *)t38);
    t33 = (t34 + 0);
    t35 = *((unsigned int *)t14);
    t39 = *((unsigned int *)t15);
    t36 = (t35 - t39);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t11, t13, t33, *((unsigned int *)t15), t37);
    goto LAB16;

LAB17:    xsi_vlogvar_assign_value(t5, t13, 0, *((unsigned int *)t14), 1);
    goto LAB18;

}

static void Always_106_23(char *t0)
{
    char t13[8];
    char t14[8];
    char t15[8];
    char t38[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    int t23;
    char *t24;
    unsigned int t25;
    int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    int t36;
    int t37;
    unsigned int t39;

LAB0:    t1 = (t0 + 11280U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 14200);
    *((int *)t2) = 1;
    t3 = (t0 + 11312);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(106, ng0);

LAB5:    xsi_set_current_line(107, ng0);
    t4 = (t0 + 2184U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(111, ng0);

LAB14:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 2344U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 16);
    t5 = (t3 + 20);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 8);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 8);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 255U);
    t22 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t22 & 255U);
    t11 = (t0 + 3704);
    t12 = (t0 + 3704);
    t16 = (t12 + 72U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng63)));
    t19 = ((char*)((ng64)));
    xsi_vlog_convert_partindices(t14, t15, t38, ((int*)(t17)), 2, t18, 32, 1, t19, 32, 1);
    t20 = (t14 + 4);
    t25 = *((unsigned int *)t20);
    t23 = (!(t25));
    t21 = (t15 + 4);
    t29 = *((unsigned int *)t21);
    t26 = (!(t29));
    t27 = (t23 && t26);
    t24 = (t38 + 4);
    t32 = *((unsigned int *)t24);
    t30 = (!(t32));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 2504U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 9);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 9);
    t22 = (t10 & 1);
    *((unsigned int *)t2) = t22;
    t5 = (t0 + 3864);
    t11 = (t0 + 3864);
    t12 = (t11 + 72U);
    t16 = *((char **)t12);
    t17 = ((char*)((ng65)));
    xsi_vlog_generic_convert_bit_index(t14, t16, 2, t17, 32, 1);
    t18 = (t14 + 4);
    t25 = *((unsigned int *)t18);
    t23 = (!(t25));
    if (t23 == 1)
        goto LAB17;

LAB18:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(107, ng0);

LAB9:    xsi_set_current_line(108, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3704);
    t16 = (t0 + 3704);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng63)));
    t20 = ((char*)((ng64)));
    xsi_vlog_convert_partindices(t13, t14, t15, ((int*)(t18)), 2, t19, 32, 1, t20, 32, 1);
    t21 = (t13 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (!(t22));
    t24 = (t14 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (!(t25));
    t27 = (t23 && t26);
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3864);
    t4 = (t0 + 3864);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng65)));
    xsi_vlog_generic_convert_bit_index(t13, t11, 2, t12, 32, 1);
    t16 = (t13 + 4);
    t6 = *((unsigned int *)t16);
    t23 = (!(t6));
    if (t23 == 1)
        goto LAB12;

LAB13:    goto LAB8;

LAB10:    t32 = *((unsigned int *)t15);
    t33 = (t32 + 0);
    t34 = *((unsigned int *)t13);
    t35 = *((unsigned int *)t14);
    t36 = (t34 - t35);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t12, t11, t33, *((unsigned int *)t14), t37);
    goto LAB11;

LAB12:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t13), 1);
    goto LAB13;

LAB15:    t34 = *((unsigned int *)t38);
    t33 = (t34 + 0);
    t35 = *((unsigned int *)t14);
    t39 = *((unsigned int *)t15);
    t36 = (t35 - t39);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t11, t13, t33, *((unsigned int *)t15), t37);
    goto LAB16;

LAB17:    xsi_vlogvar_assign_value(t5, t13, 0, *((unsigned int *)t14), 1);
    goto LAB18;

}

static void Always_106_24(char *t0)
{
    char t13[8];
    char t14[8];
    char t15[8];
    char t38[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    int t23;
    char *t24;
    unsigned int t25;
    int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    int t36;
    int t37;
    unsigned int t39;

LAB0:    t1 = (t0 + 11528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 14216);
    *((int *)t2) = 1;
    t3 = (t0 + 11560);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(106, ng0);

LAB5:    xsi_set_current_line(107, ng0);
    t4 = (t0 + 2184U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(111, ng0);

LAB14:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 2344U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 16);
    t5 = (t3 + 20);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 255U);
    t22 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t22 & 255U);
    t11 = (t0 + 3704);
    t12 = (t0 + 3704);
    t16 = (t12 + 72U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng66)));
    t19 = ((char*)((ng67)));
    xsi_vlog_convert_partindices(t14, t15, t38, ((int*)(t17)), 2, t18, 32, 1, t19, 32, 1);
    t20 = (t14 + 4);
    t25 = *((unsigned int *)t20);
    t23 = (!(t25));
    t21 = (t15 + 4);
    t29 = *((unsigned int *)t21);
    t26 = (!(t29));
    t27 = (t23 && t26);
    t24 = (t38 + 4);
    t32 = *((unsigned int *)t24);
    t30 = (!(t32));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 2504U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 8);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 8);
    t22 = (t10 & 1);
    *((unsigned int *)t2) = t22;
    t5 = (t0 + 3864);
    t11 = (t0 + 3864);
    t12 = (t11 + 72U);
    t16 = *((char **)t12);
    t17 = ((char*)((ng8)));
    xsi_vlog_generic_convert_bit_index(t14, t16, 2, t17, 32, 1);
    t18 = (t14 + 4);
    t25 = *((unsigned int *)t18);
    t23 = (!(t25));
    if (t23 == 1)
        goto LAB17;

LAB18:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(107, ng0);

LAB9:    xsi_set_current_line(108, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3704);
    t16 = (t0 + 3704);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng66)));
    t20 = ((char*)((ng67)));
    xsi_vlog_convert_partindices(t13, t14, t15, ((int*)(t18)), 2, t19, 32, 1, t20, 32, 1);
    t21 = (t13 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (!(t22));
    t24 = (t14 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (!(t25));
    t27 = (t23 && t26);
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3864);
    t4 = (t0 + 3864);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng8)));
    xsi_vlog_generic_convert_bit_index(t13, t11, 2, t12, 32, 1);
    t16 = (t13 + 4);
    t6 = *((unsigned int *)t16);
    t23 = (!(t6));
    if (t23 == 1)
        goto LAB12;

LAB13:    goto LAB8;

LAB10:    t32 = *((unsigned int *)t15);
    t33 = (t32 + 0);
    t34 = *((unsigned int *)t13);
    t35 = *((unsigned int *)t14);
    t36 = (t34 - t35);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t12, t11, t33, *((unsigned int *)t14), t37);
    goto LAB11;

LAB12:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t13), 1);
    goto LAB13;

LAB15:    t34 = *((unsigned int *)t38);
    t33 = (t34 + 0);
    t35 = *((unsigned int *)t14);
    t39 = *((unsigned int *)t15);
    t36 = (t35 - t39);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t11, t13, t33, *((unsigned int *)t15), t37);
    goto LAB16;

LAB17:    xsi_vlogvar_assign_value(t5, t13, 0, *((unsigned int *)t14), 1);
    goto LAB18;

}

static void Always_106_25(char *t0)
{
    char t13[8];
    char t14[8];
    char t15[8];
    char t38[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    int t23;
    char *t24;
    unsigned int t25;
    int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    int t36;
    int t37;
    unsigned int t39;

LAB0:    t1 = (t0 + 11776U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 14232);
    *((int *)t2) = 1;
    t3 = (t0 + 11808);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(106, ng0);

LAB5:    xsi_set_current_line(107, ng0);
    t4 = (t0 + 2184U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(111, ng0);

LAB14:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 2344U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 8);
    t5 = (t3 + 12);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 24);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 24);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 255U);
    t22 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t22 & 255U);
    t11 = (t0 + 3704);
    t12 = (t0 + 3704);
    t16 = (t12 + 72U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng68)));
    t19 = ((char*)((ng69)));
    xsi_vlog_convert_partindices(t14, t15, t38, ((int*)(t17)), 2, t18, 32, 1, t19, 32, 1);
    t20 = (t14 + 4);
    t25 = *((unsigned int *)t20);
    t23 = (!(t25));
    t21 = (t15 + 4);
    t29 = *((unsigned int *)t21);
    t26 = (!(t29));
    t27 = (t23 && t26);
    t24 = (t38 + 4);
    t32 = *((unsigned int *)t24);
    t30 = (!(t32));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 2504U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 7);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 7);
    t22 = (t10 & 1);
    *((unsigned int *)t2) = t22;
    t5 = (t0 + 3864);
    t11 = (t0 + 3864);
    t12 = (t11 + 72U);
    t16 = *((char **)t12);
    t17 = ((char*)((ng11)));
    xsi_vlog_generic_convert_bit_index(t14, t16, 2, t17, 32, 1);
    t18 = (t14 + 4);
    t25 = *((unsigned int *)t18);
    t23 = (!(t25));
    if (t23 == 1)
        goto LAB17;

LAB18:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(107, ng0);

LAB9:    xsi_set_current_line(108, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3704);
    t16 = (t0 + 3704);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng68)));
    t20 = ((char*)((ng69)));
    xsi_vlog_convert_partindices(t13, t14, t15, ((int*)(t18)), 2, t19, 32, 1, t20, 32, 1);
    t21 = (t13 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (!(t22));
    t24 = (t14 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (!(t25));
    t27 = (t23 && t26);
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3864);
    t4 = (t0 + 3864);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng11)));
    xsi_vlog_generic_convert_bit_index(t13, t11, 2, t12, 32, 1);
    t16 = (t13 + 4);
    t6 = *((unsigned int *)t16);
    t23 = (!(t6));
    if (t23 == 1)
        goto LAB12;

LAB13:    goto LAB8;

LAB10:    t32 = *((unsigned int *)t15);
    t33 = (t32 + 0);
    t34 = *((unsigned int *)t13);
    t35 = *((unsigned int *)t14);
    t36 = (t34 - t35);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t12, t11, t33, *((unsigned int *)t14), t37);
    goto LAB11;

LAB12:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t13), 1);
    goto LAB13;

LAB15:    t34 = *((unsigned int *)t38);
    t33 = (t34 + 0);
    t35 = *((unsigned int *)t14);
    t39 = *((unsigned int *)t15);
    t36 = (t35 - t39);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t11, t13, t33, *((unsigned int *)t15), t37);
    goto LAB16;

LAB17:    xsi_vlogvar_assign_value(t5, t13, 0, *((unsigned int *)t14), 1);
    goto LAB18;

}

static void Always_106_26(char *t0)
{
    char t13[8];
    char t14[8];
    char t15[8];
    char t38[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    int t23;
    char *t24;
    unsigned int t25;
    int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    int t36;
    int t37;
    unsigned int t39;

LAB0:    t1 = (t0 + 12024U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 14248);
    *((int *)t2) = 1;
    t3 = (t0 + 12056);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(106, ng0);

LAB5:    xsi_set_current_line(107, ng0);
    t4 = (t0 + 2184U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(111, ng0);

LAB14:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 2344U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 8);
    t5 = (t3 + 12);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 16);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 16);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 255U);
    t22 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t22 & 255U);
    t11 = (t0 + 3704);
    t12 = (t0 + 3704);
    t16 = (t12 + 72U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng70)));
    t19 = ((char*)((ng71)));
    xsi_vlog_convert_partindices(t14, t15, t38, ((int*)(t17)), 2, t18, 32, 1, t19, 32, 1);
    t20 = (t14 + 4);
    t25 = *((unsigned int *)t20);
    t23 = (!(t25));
    t21 = (t15 + 4);
    t29 = *((unsigned int *)t21);
    t26 = (!(t29));
    t27 = (t23 && t26);
    t24 = (t38 + 4);
    t32 = *((unsigned int *)t24);
    t30 = (!(t32));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 2504U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 6);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 6);
    t22 = (t10 & 1);
    *((unsigned int *)t2) = t22;
    t5 = (t0 + 3864);
    t11 = (t0 + 3864);
    t12 = (t11 + 72U);
    t16 = *((char **)t12);
    t17 = ((char*)((ng72)));
    xsi_vlog_generic_convert_bit_index(t14, t16, 2, t17, 32, 1);
    t18 = (t14 + 4);
    t25 = *((unsigned int *)t18);
    t23 = (!(t25));
    if (t23 == 1)
        goto LAB17;

LAB18:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(107, ng0);

LAB9:    xsi_set_current_line(108, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3704);
    t16 = (t0 + 3704);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng70)));
    t20 = ((char*)((ng71)));
    xsi_vlog_convert_partindices(t13, t14, t15, ((int*)(t18)), 2, t19, 32, 1, t20, 32, 1);
    t21 = (t13 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (!(t22));
    t24 = (t14 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (!(t25));
    t27 = (t23 && t26);
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3864);
    t4 = (t0 + 3864);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng72)));
    xsi_vlog_generic_convert_bit_index(t13, t11, 2, t12, 32, 1);
    t16 = (t13 + 4);
    t6 = *((unsigned int *)t16);
    t23 = (!(t6));
    if (t23 == 1)
        goto LAB12;

LAB13:    goto LAB8;

LAB10:    t32 = *((unsigned int *)t15);
    t33 = (t32 + 0);
    t34 = *((unsigned int *)t13);
    t35 = *((unsigned int *)t14);
    t36 = (t34 - t35);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t12, t11, t33, *((unsigned int *)t14), t37);
    goto LAB11;

LAB12:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t13), 1);
    goto LAB13;

LAB15:    t34 = *((unsigned int *)t38);
    t33 = (t34 + 0);
    t35 = *((unsigned int *)t14);
    t39 = *((unsigned int *)t15);
    t36 = (t35 - t39);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t11, t13, t33, *((unsigned int *)t15), t37);
    goto LAB16;

LAB17:    xsi_vlogvar_assign_value(t5, t13, 0, *((unsigned int *)t14), 1);
    goto LAB18;

}

static void Always_106_27(char *t0)
{
    char t13[8];
    char t14[8];
    char t15[8];
    char t38[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    int t23;
    char *t24;
    unsigned int t25;
    int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    int t36;
    int t37;
    unsigned int t39;

LAB0:    t1 = (t0 + 12272U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 14264);
    *((int *)t2) = 1;
    t3 = (t0 + 12304);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(106, ng0);

LAB5:    xsi_set_current_line(107, ng0);
    t4 = (t0 + 2184U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(111, ng0);

LAB14:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 2344U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 8);
    t5 = (t3 + 12);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 8);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 8);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 255U);
    t22 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t22 & 255U);
    t11 = (t0 + 3704);
    t12 = (t0 + 3704);
    t16 = (t12 + 72U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng73)));
    t19 = ((char*)((ng74)));
    xsi_vlog_convert_partindices(t14, t15, t38, ((int*)(t17)), 2, t18, 32, 1, t19, 32, 1);
    t20 = (t14 + 4);
    t25 = *((unsigned int *)t20);
    t23 = (!(t25));
    t21 = (t15 + 4);
    t29 = *((unsigned int *)t21);
    t26 = (!(t29));
    t27 = (t23 && t26);
    t24 = (t38 + 4);
    t32 = *((unsigned int *)t24);
    t30 = (!(t32));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 2504U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 5);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 5);
    t22 = (t10 & 1);
    *((unsigned int *)t2) = t22;
    t5 = (t0 + 3864);
    t11 = (t0 + 3864);
    t12 = (t11 + 72U);
    t16 = *((char **)t12);
    t17 = ((char*)((ng75)));
    xsi_vlog_generic_convert_bit_index(t14, t16, 2, t17, 32, 1);
    t18 = (t14 + 4);
    t25 = *((unsigned int *)t18);
    t23 = (!(t25));
    if (t23 == 1)
        goto LAB17;

LAB18:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(107, ng0);

LAB9:    xsi_set_current_line(108, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3704);
    t16 = (t0 + 3704);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng73)));
    t20 = ((char*)((ng74)));
    xsi_vlog_convert_partindices(t13, t14, t15, ((int*)(t18)), 2, t19, 32, 1, t20, 32, 1);
    t21 = (t13 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (!(t22));
    t24 = (t14 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (!(t25));
    t27 = (t23 && t26);
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3864);
    t4 = (t0 + 3864);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng75)));
    xsi_vlog_generic_convert_bit_index(t13, t11, 2, t12, 32, 1);
    t16 = (t13 + 4);
    t6 = *((unsigned int *)t16);
    t23 = (!(t6));
    if (t23 == 1)
        goto LAB12;

LAB13:    goto LAB8;

LAB10:    t32 = *((unsigned int *)t15);
    t33 = (t32 + 0);
    t34 = *((unsigned int *)t13);
    t35 = *((unsigned int *)t14);
    t36 = (t34 - t35);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t12, t11, t33, *((unsigned int *)t14), t37);
    goto LAB11;

LAB12:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t13), 1);
    goto LAB13;

LAB15:    t34 = *((unsigned int *)t38);
    t33 = (t34 + 0);
    t35 = *((unsigned int *)t14);
    t39 = *((unsigned int *)t15);
    t36 = (t35 - t39);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t11, t13, t33, *((unsigned int *)t15), t37);
    goto LAB16;

LAB17:    xsi_vlogvar_assign_value(t5, t13, 0, *((unsigned int *)t14), 1);
    goto LAB18;

}

static void Always_106_28(char *t0)
{
    char t13[8];
    char t14[8];
    char t15[8];
    char t38[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    int t23;
    char *t24;
    unsigned int t25;
    int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    int t36;
    int t37;
    unsigned int t39;

LAB0:    t1 = (t0 + 12520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 14280);
    *((int *)t2) = 1;
    t3 = (t0 + 12552);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(106, ng0);

LAB5:    xsi_set_current_line(107, ng0);
    t4 = (t0 + 2184U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(111, ng0);

LAB14:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 2344U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 8);
    t5 = (t3 + 12);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 255U);
    t22 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t22 & 255U);
    t11 = (t0 + 3704);
    t12 = (t0 + 3704);
    t16 = (t12 + 72U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng76)));
    t19 = ((char*)((ng77)));
    xsi_vlog_convert_partindices(t14, t15, t38, ((int*)(t17)), 2, t18, 32, 1, t19, 32, 1);
    t20 = (t14 + 4);
    t25 = *((unsigned int *)t20);
    t23 = (!(t25));
    t21 = (t15 + 4);
    t29 = *((unsigned int *)t21);
    t26 = (!(t29));
    t27 = (t23 && t26);
    t24 = (t38 + 4);
    t32 = *((unsigned int *)t24);
    t30 = (!(t32));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 2504U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 4);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 4);
    t22 = (t10 & 1);
    *((unsigned int *)t2) = t22;
    t5 = (t0 + 3864);
    t11 = (t0 + 3864);
    t12 = (t11 + 72U);
    t16 = *((char **)t12);
    t17 = ((char*)((ng78)));
    xsi_vlog_generic_convert_bit_index(t14, t16, 2, t17, 32, 1);
    t18 = (t14 + 4);
    t25 = *((unsigned int *)t18);
    t23 = (!(t25));
    if (t23 == 1)
        goto LAB17;

LAB18:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(107, ng0);

LAB9:    xsi_set_current_line(108, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3704);
    t16 = (t0 + 3704);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng76)));
    t20 = ((char*)((ng77)));
    xsi_vlog_convert_partindices(t13, t14, t15, ((int*)(t18)), 2, t19, 32, 1, t20, 32, 1);
    t21 = (t13 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (!(t22));
    t24 = (t14 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (!(t25));
    t27 = (t23 && t26);
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3864);
    t4 = (t0 + 3864);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng78)));
    xsi_vlog_generic_convert_bit_index(t13, t11, 2, t12, 32, 1);
    t16 = (t13 + 4);
    t6 = *((unsigned int *)t16);
    t23 = (!(t6));
    if (t23 == 1)
        goto LAB12;

LAB13:    goto LAB8;

LAB10:    t32 = *((unsigned int *)t15);
    t33 = (t32 + 0);
    t34 = *((unsigned int *)t13);
    t35 = *((unsigned int *)t14);
    t36 = (t34 - t35);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t12, t11, t33, *((unsigned int *)t14), t37);
    goto LAB11;

LAB12:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t13), 1);
    goto LAB13;

LAB15:    t34 = *((unsigned int *)t38);
    t33 = (t34 + 0);
    t35 = *((unsigned int *)t14);
    t39 = *((unsigned int *)t15);
    t36 = (t35 - t39);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t11, t13, t33, *((unsigned int *)t15), t37);
    goto LAB16;

LAB17:    xsi_vlogvar_assign_value(t5, t13, 0, *((unsigned int *)t14), 1);
    goto LAB18;

}

static void Always_106_29(char *t0)
{
    char t13[8];
    char t14[8];
    char t15[8];
    char t38[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    int t23;
    char *t24;
    unsigned int t25;
    int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    int t36;
    int t37;
    unsigned int t39;

LAB0:    t1 = (t0 + 12768U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 14296);
    *((int *)t2) = 1;
    t3 = (t0 + 12800);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(106, ng0);

LAB5:    xsi_set_current_line(107, ng0);
    t4 = (t0 + 2184U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(111, ng0);

LAB14:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 2344U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 24);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 24);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 255U);
    t22 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t22 & 255U);
    t5 = (t0 + 3704);
    t11 = (t0 + 3704);
    t12 = (t11 + 72U);
    t16 = *((char **)t12);
    t17 = ((char*)((ng79)));
    t18 = ((char*)((ng80)));
    xsi_vlog_convert_partindices(t14, t15, t38, ((int*)(t16)), 2, t17, 32, 1, t18, 32, 1);
    t19 = (t14 + 4);
    t25 = *((unsigned int *)t19);
    t23 = (!(t25));
    t20 = (t15 + 4);
    t29 = *((unsigned int *)t20);
    t26 = (!(t29));
    t27 = (t23 && t26);
    t21 = (t38 + 4);
    t32 = *((unsigned int *)t21);
    t30 = (!(t32));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 2504U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 3);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 3);
    t22 = (t10 & 1);
    *((unsigned int *)t2) = t22;
    t5 = (t0 + 3864);
    t11 = (t0 + 3864);
    t12 = (t11 + 72U);
    t16 = *((char **)t12);
    t17 = ((char*)((ng81)));
    xsi_vlog_generic_convert_bit_index(t14, t16, 2, t17, 32, 1);
    t18 = (t14 + 4);
    t25 = *((unsigned int *)t18);
    t23 = (!(t25));
    if (t23 == 1)
        goto LAB17;

LAB18:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(107, ng0);

LAB9:    xsi_set_current_line(108, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3704);
    t16 = (t0 + 3704);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng79)));
    t20 = ((char*)((ng80)));
    xsi_vlog_convert_partindices(t13, t14, t15, ((int*)(t18)), 2, t19, 32, 1, t20, 32, 1);
    t21 = (t13 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (!(t22));
    t24 = (t14 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (!(t25));
    t27 = (t23 && t26);
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3864);
    t4 = (t0 + 3864);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng81)));
    xsi_vlog_generic_convert_bit_index(t13, t11, 2, t12, 32, 1);
    t16 = (t13 + 4);
    t6 = *((unsigned int *)t16);
    t23 = (!(t6));
    if (t23 == 1)
        goto LAB12;

LAB13:    goto LAB8;

LAB10:    t32 = *((unsigned int *)t15);
    t33 = (t32 + 0);
    t34 = *((unsigned int *)t13);
    t35 = *((unsigned int *)t14);
    t36 = (t34 - t35);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t12, t11, t33, *((unsigned int *)t14), t37);
    goto LAB11;

LAB12:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t13), 1);
    goto LAB13;

LAB15:    t34 = *((unsigned int *)t38);
    t33 = (t34 + 0);
    t35 = *((unsigned int *)t14);
    t39 = *((unsigned int *)t15);
    t36 = (t35 - t39);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t5, t13, t33, *((unsigned int *)t15), t37);
    goto LAB16;

LAB17:    xsi_vlogvar_assign_value(t5, t13, 0, *((unsigned int *)t14), 1);
    goto LAB18;

}

static void Always_106_30(char *t0)
{
    char t13[8];
    char t14[8];
    char t15[8];
    char t38[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    int t23;
    char *t24;
    unsigned int t25;
    int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    int t36;
    int t37;
    unsigned int t39;

LAB0:    t1 = (t0 + 13016U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 14312);
    *((int *)t2) = 1;
    t3 = (t0 + 13048);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(106, ng0);

LAB5:    xsi_set_current_line(107, ng0);
    t4 = (t0 + 2184U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(111, ng0);

LAB14:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 2344U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 16);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 16);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 255U);
    t22 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t22 & 255U);
    t5 = (t0 + 3704);
    t11 = (t0 + 3704);
    t12 = (t11 + 72U);
    t16 = *((char **)t12);
    t17 = ((char*)((ng82)));
    t18 = ((char*)((ng83)));
    xsi_vlog_convert_partindices(t14, t15, t38, ((int*)(t16)), 2, t17, 32, 1, t18, 32, 1);
    t19 = (t14 + 4);
    t25 = *((unsigned int *)t19);
    t23 = (!(t25));
    t20 = (t15 + 4);
    t29 = *((unsigned int *)t20);
    t26 = (!(t29));
    t27 = (t23 && t26);
    t21 = (t38 + 4);
    t32 = *((unsigned int *)t21);
    t30 = (!(t32));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 2504U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 2);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 2);
    t22 = (t10 & 1);
    *((unsigned int *)t2) = t22;
    t5 = (t0 + 3864);
    t11 = (t0 + 3864);
    t12 = (t11 + 72U);
    t16 = *((char **)t12);
    t17 = ((char*)((ng84)));
    xsi_vlog_generic_convert_bit_index(t14, t16, 2, t17, 32, 1);
    t18 = (t14 + 4);
    t25 = *((unsigned int *)t18);
    t23 = (!(t25));
    if (t23 == 1)
        goto LAB17;

LAB18:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(107, ng0);

LAB9:    xsi_set_current_line(108, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3704);
    t16 = (t0 + 3704);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng82)));
    t20 = ((char*)((ng83)));
    xsi_vlog_convert_partindices(t13, t14, t15, ((int*)(t18)), 2, t19, 32, 1, t20, 32, 1);
    t21 = (t13 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (!(t22));
    t24 = (t14 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (!(t25));
    t27 = (t23 && t26);
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3864);
    t4 = (t0 + 3864);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng84)));
    xsi_vlog_generic_convert_bit_index(t13, t11, 2, t12, 32, 1);
    t16 = (t13 + 4);
    t6 = *((unsigned int *)t16);
    t23 = (!(t6));
    if (t23 == 1)
        goto LAB12;

LAB13:    goto LAB8;

LAB10:    t32 = *((unsigned int *)t15);
    t33 = (t32 + 0);
    t34 = *((unsigned int *)t13);
    t35 = *((unsigned int *)t14);
    t36 = (t34 - t35);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t12, t11, t33, *((unsigned int *)t14), t37);
    goto LAB11;

LAB12:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t13), 1);
    goto LAB13;

LAB15:    t34 = *((unsigned int *)t38);
    t33 = (t34 + 0);
    t35 = *((unsigned int *)t14);
    t39 = *((unsigned int *)t15);
    t36 = (t35 - t39);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t5, t13, t33, *((unsigned int *)t15), t37);
    goto LAB16;

LAB17:    xsi_vlogvar_assign_value(t5, t13, 0, *((unsigned int *)t14), 1);
    goto LAB18;

}

static void Always_106_31(char *t0)
{
    char t13[8];
    char t14[8];
    char t15[8];
    char t38[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    int t23;
    char *t24;
    unsigned int t25;
    int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    int t36;
    int t37;
    unsigned int t39;

LAB0:    t1 = (t0 + 13264U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 14328);
    *((int *)t2) = 1;
    t3 = (t0 + 13296);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(106, ng0);

LAB5:    xsi_set_current_line(107, ng0);
    t4 = (t0 + 2184U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(111, ng0);

LAB14:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 2344U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 8);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 8);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 255U);
    t22 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t22 & 255U);
    t5 = (t0 + 3704);
    t11 = (t0 + 3704);
    t12 = (t11 + 72U);
    t16 = *((char **)t12);
    t17 = ((char*)((ng85)));
    t18 = ((char*)((ng86)));
    xsi_vlog_convert_partindices(t14, t15, t38, ((int*)(t16)), 2, t17, 32, 1, t18, 32, 1);
    t19 = (t14 + 4);
    t25 = *((unsigned int *)t19);
    t23 = (!(t25));
    t20 = (t15 + 4);
    t29 = *((unsigned int *)t20);
    t26 = (!(t29));
    t27 = (t23 && t26);
    t21 = (t38 + 4);
    t32 = *((unsigned int *)t21);
    t30 = (!(t32));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 2504U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 1);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 1);
    t22 = (t10 & 1);
    *((unsigned int *)t2) = t22;
    t5 = (t0 + 3864);
    t11 = (t0 + 3864);
    t12 = (t11 + 72U);
    t16 = *((char **)t12);
    t17 = ((char*)((ng87)));
    xsi_vlog_generic_convert_bit_index(t14, t16, 2, t17, 32, 1);
    t18 = (t14 + 4);
    t25 = *((unsigned int *)t18);
    t23 = (!(t25));
    if (t23 == 1)
        goto LAB17;

LAB18:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(107, ng0);

LAB9:    xsi_set_current_line(108, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3704);
    t16 = (t0 + 3704);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng85)));
    t20 = ((char*)((ng86)));
    xsi_vlog_convert_partindices(t13, t14, t15, ((int*)(t18)), 2, t19, 32, 1, t20, 32, 1);
    t21 = (t13 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (!(t22));
    t24 = (t14 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (!(t25));
    t27 = (t23 && t26);
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3864);
    t4 = (t0 + 3864);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng87)));
    xsi_vlog_generic_convert_bit_index(t13, t11, 2, t12, 32, 1);
    t16 = (t13 + 4);
    t6 = *((unsigned int *)t16);
    t23 = (!(t6));
    if (t23 == 1)
        goto LAB12;

LAB13:    goto LAB8;

LAB10:    t32 = *((unsigned int *)t15);
    t33 = (t32 + 0);
    t34 = *((unsigned int *)t13);
    t35 = *((unsigned int *)t14);
    t36 = (t34 - t35);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t12, t11, t33, *((unsigned int *)t14), t37);
    goto LAB11;

LAB12:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t13), 1);
    goto LAB13;

LAB15:    t34 = *((unsigned int *)t38);
    t33 = (t34 + 0);
    t35 = *((unsigned int *)t14);
    t39 = *((unsigned int *)t15);
    t36 = (t35 - t39);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t5, t13, t33, *((unsigned int *)t15), t37);
    goto LAB16;

LAB17:    xsi_vlogvar_assign_value(t5, t13, 0, *((unsigned int *)t14), 1);
    goto LAB18;

}

static void Always_106_32(char *t0)
{
    char t13[8];
    char t14[8];
    char t15[8];
    char t38[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    int t23;
    char *t24;
    unsigned int t25;
    int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    int t36;
    int t37;
    unsigned int t39;

LAB0:    t1 = (t0 + 13512U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 14344);
    *((int *)t2) = 1;
    t3 = (t0 + 13544);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(106, ng0);

LAB5:    xsi_set_current_line(107, ng0);
    t4 = (t0 + 2184U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(111, ng0);

LAB14:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 2344U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 255U);
    t22 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t22 & 255U);
    t5 = (t0 + 3704);
    t11 = (t0 + 3704);
    t12 = (t11 + 72U);
    t16 = *((char **)t12);
    t17 = ((char*)((ng88)));
    t18 = ((char*)((ng89)));
    xsi_vlog_convert_partindices(t14, t15, t38, ((int*)(t16)), 2, t17, 32, 1, t18, 32, 1);
    t19 = (t14 + 4);
    t25 = *((unsigned int *)t19);
    t23 = (!(t25));
    t20 = (t15 + 4);
    t29 = *((unsigned int *)t20);
    t26 = (!(t29));
    t27 = (t23 && t26);
    t21 = (t38 + 4);
    t32 = *((unsigned int *)t21);
    t30 = (!(t32));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 2504U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    t22 = (t10 & 1);
    *((unsigned int *)t2) = t22;
    t5 = (t0 + 3864);
    t11 = (t0 + 3864);
    t12 = (t11 + 72U);
    t16 = *((char **)t12);
    t17 = ((char*)((ng10)));
    xsi_vlog_generic_convert_bit_index(t14, t16, 2, t17, 32, 1);
    t18 = (t14 + 4);
    t25 = *((unsigned int *)t18);
    t23 = (!(t25));
    if (t23 == 1)
        goto LAB17;

LAB18:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(107, ng0);

LAB9:    xsi_set_current_line(108, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3704);
    t16 = (t0 + 3704);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng88)));
    t20 = ((char*)((ng89)));
    xsi_vlog_convert_partindices(t13, t14, t15, ((int*)(t18)), 2, t19, 32, 1, t20, 32, 1);
    t21 = (t13 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (!(t22));
    t24 = (t14 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (!(t25));
    t27 = (t23 && t26);
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3864);
    t4 = (t0 + 3864);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng10)));
    xsi_vlog_generic_convert_bit_index(t13, t11, 2, t12, 32, 1);
    t16 = (t13 + 4);
    t6 = *((unsigned int *)t16);
    t23 = (!(t6));
    if (t23 == 1)
        goto LAB12;

LAB13:    goto LAB8;

LAB10:    t32 = *((unsigned int *)t15);
    t33 = (t32 + 0);
    t34 = *((unsigned int *)t13);
    t35 = *((unsigned int *)t14);
    t36 = (t34 - t35);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t12, t11, t33, *((unsigned int *)t14), t37);
    goto LAB11;

LAB12:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t13), 1);
    goto LAB13;

LAB15:    t34 = *((unsigned int *)t38);
    t33 = (t34 + 0);
    t35 = *((unsigned int *)t14);
    t39 = *((unsigned int *)t15);
    t36 = (t35 - t39);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t5, t13, t33, *((unsigned int *)t15), t37);
    goto LAB16;

LAB17:    xsi_vlogvar_assign_value(t5, t13, 0, *((unsigned int *)t14), 1);
    goto LAB18;

}


extern void nf10_endianess_manager_v1_00_a_m_15877877185620659799_2665577195_init()
{
	static char *pe[] = {(void *)Always_88_0,(void *)Always_106_1,(void *)Always_106_2,(void *)Always_106_3,(void *)Always_106_4,(void *)Always_106_5,(void *)Always_106_6,(void *)Always_106_7,(void *)Always_106_8,(void *)Always_106_9,(void *)Always_106_10,(void *)Always_106_11,(void *)Always_106_12,(void *)Always_106_13,(void *)Always_106_14,(void *)Always_106_15,(void *)Always_106_16,(void *)Always_106_17,(void *)Always_106_18,(void *)Always_106_19,(void *)Always_106_20,(void *)Always_106_21,(void *)Always_106_22,(void *)Always_106_23,(void *)Always_106_24,(void *)Always_106_25,(void *)Always_106_26,(void *)Always_106_27,(void *)Always_106_28,(void *)Always_106_29,(void *)Always_106_30,(void *)Always_106_31,(void *)Always_106_32};
	static char *se[] = {(void *)sp_log2};
	xsi_register_didat("nf10_endianess_manager_v1_00_a_m_15877877185620659799_2665577195", "isim/isim_system_axisim.sim/nf10_endianess_manager_v1_00_a/m_15877877185620659799_2665577195.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
