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
static const char *ng0 = "/root/NetFPGA-10G-live/lib/hw/xilinx/pcores/microblaze_v8_00_b/hdl/vhdl/shift_logic_gti.vhd";
extern char *MICROBLAZE_V8_00_B_P_1761634766;
extern char *IEEE_P_2592010699;



static void microblaze_v8_00_b_a_3930526202_3306564128_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    char *t5;
    int t6;
    char *t7;
    int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(195, ng0);
    t1 = (t0 + 19888U);
    t2 = *((char **)t1);
    t1 = ((MICROBLAZE_V8_00_B_P_1761634766) + 19648U);
    t3 = *((char **)t1);
    t4 = xsi_mem_cmp(t3, t2, 2U);
    if (t4 == 1)
        goto LAB3;

LAB6:    t1 = ((MICROBLAZE_V8_00_B_P_1761634766) + 19768U);
    t5 = *((char **)t1);
    t6 = xsi_mem_cmp(t5, t2, 2U);
    if (t6 == 1)
        goto LAB4;

LAB7:
LAB5:    xsi_set_current_line(198, ng0);
    t1 = (t0 + 34488);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB2:    t1 = (t0 + 34264);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(196, ng0);
    t1 = (t0 + 19248U);
    t7 = *((char **)t1);
    t8 = (0 - 0);
    t9 = (t8 * 1);
    t10 = (1U * t9);
    t11 = (0 + t10);
    t1 = (t7 + t11);
    t12 = *((unsigned char *)t1);
    t13 = (t0 + 34488);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = t12;
    xsi_driver_first_trans_fast(t13);
    goto LAB2;

LAB4:    xsi_set_current_line(197, ng0);
    t1 = (t0 + 19568U);
    t2 = *((char **)t1);
    t12 = *((unsigned char *)t2);
    t1 = (t0 + 34488);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t7 = (t5 + 56U);
    t13 = *((char **)t7);
    *((unsigned char *)t13) = t12;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB8:;
}

static void microblaze_v8_00_b_a_3930526202_3306564128_p_1(char *t0)
{
    char t9[16];
    char t11[16];
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    char *t8;
    char *t10;
    char *t12;
    char *t13;
    int t14;
    unsigned int t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(203, ng0);

LAB3:    t1 = (t0 + 21168U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 19248U);
    t4 = *((char **)t1);
    t5 = (0 - 0);
    t6 = (t5 * 1U);
    t7 = (0 + t6);
    t1 = (t4 + t7);
    t10 = ((IEEE_P_2592010699) + 4000);
    t12 = (t11 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = 0;
    t13 = (t12 + 4U);
    *((int *)t13) = 30;
    t13 = (t12 + 8U);
    *((int *)t13) = 1;
    t14 = (30 - 0);
    t15 = (t14 * 1);
    t15 = (t15 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t15;
    t8 = xsi_base_array_concat(t8, t9, t10, (char)99, t3, (char)97, t1, t11, (char)101);
    t15 = (1U + 31U);
    t16 = (32U != t15);
    if (t16 == 1)
        goto LAB5;

LAB6:    t13 = (t0 + 34552);
    t17 = (t13 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t8, 32U);
    xsi_driver_first_trans_fast(t13);

LAB2:    t21 = (t0 + 34280);
    *((int *)t21) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(32U, t15, 0);
    goto LAB6;

}

static void microblaze_v8_00_b_a_3930526202_3306564128_p_2(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(206, ng0);

LAB3:    t1 = (t0 + 19248U);
    t2 = *((char **)t1);
    t3 = (31 - 0);
    t4 = (t3 * 1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 34616);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 34296);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void microblaze_v8_00_b_a_3930526202_3306564128_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    int t10;
    int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned char t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(394, ng0);
    t1 = (t0 + 19728U);
    t2 = *((char **)t1);
    t1 = ((MICROBLAZE_V8_00_B_P_1761634766) + 20848U);
    t3 = *((char **)t1);
    t4 = 1;
    if (2U == 2U)
        goto LAB5;

LAB6:    t4 = 0;

LAB7:    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 19728U);
    t2 = *((char **)t1);
    t1 = ((MICROBLAZE_V8_00_B_P_1761634766) + 20968U);
    t3 = *((char **)t1);
    t4 = 1;
    if (2U == 2U)
        goto LAB13;

LAB14:    t4 = 0;

LAB15:    if (t4 != 0)
        goto LAB11;

LAB12:    xsi_set_current_line(403, ng0);
    t1 = (t0 + 34680);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t6 = (t3 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(404, ng0);
    t1 = (t0 + 34744);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t6 = (t3 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB3:    t1 = (t0 + 34312);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(395, ng0);
    t7 = (t0 + 19248U);
    t8 = *((char **)t7);
    t7 = ((MICROBLAZE_V8_00_B_P_1761634766) + 9568U);
    t9 = *((char **)t7);
    t10 = *((int *)t9);
    t11 = (t10 - 0);
    t12 = (t11 * 1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t7 = (t8 + t14);
    t15 = *((unsigned char *)t7);
    t16 = (t0 + 26264U);
    t17 = *((char **)t16);
    t16 = (t17 + 0);
    *((unsigned char *)t16) = t15;
    xsi_set_current_line(396, ng0);
    t1 = (t0 + 26264U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t1 = (t0 + 34680);
    t3 = (t1 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(397, ng0);
    t1 = (t0 + 26264U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t1 = (t0 + 34744);
    t3 = (t1 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    t5 = 0;

LAB8:    if (t5 < 2U)
        goto LAB9;
    else
        goto LAB7;

LAB9:    t1 = (t2 + t5);
    t6 = (t3 + t5);
    if (*((unsigned char *)t1) != *((unsigned char *)t6))
        goto LAB6;

LAB10:    t5 = (t5 + 1);
    goto LAB8;

LAB11:    xsi_set_current_line(399, ng0);
    t7 = (t0 + 19248U);
    t8 = *((char **)t7);
    t7 = ((MICROBLAZE_V8_00_B_P_1761634766) + 9688U);
    t9 = *((char **)t7);
    t10 = *((int *)t9);
    t11 = (t10 - 0);
    t12 = (t11 * 1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t7 = (t8 + t14);
    t15 = *((unsigned char *)t7);
    t16 = (t0 + 26264U);
    t17 = *((char **)t16);
    t16 = (t17 + 0);
    *((unsigned char *)t16) = t15;
    xsi_set_current_line(400, ng0);
    t1 = (t0 + 26264U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t1 = (t0 + 34680);
    t3 = (t1 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(401, ng0);
    t1 = (t0 + 34744);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t6 = (t3 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB13:    t5 = 0;

LAB16:    if (t5 < 2U)
        goto LAB17;
    else
        goto LAB15;

LAB17:    t1 = (t2 + t5);
    t6 = (t3 + t5);
    if (*((unsigned char *)t1) != *((unsigned char *)t6))
        goto LAB14;

LAB18:    t5 = (t5 + 1);
    goto LAB16;

}

static void microblaze_v8_00_b_a_3930526202_3306564128_p_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    xsi_set_current_line(408, ng0);

LAB3:    t1 = xsi_get_transient_memory(16U);
    memset(t1, 0, 16U);
    t2 = t1;
    t3 = (t0 + 21968U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    memset(t2, t5, 16U);
    t3 = (t0 + 34808);
    t6 = (t3 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 16U);
    xsi_driver_first_trans_delta(t3, 0U, 16U, 0LL);

LAB2:    t10 = (t0 + 34328);
    *((int *)t10) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void microblaze_v8_00_b_a_3930526202_3306564128_p_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    xsi_set_current_line(409, ng0);

LAB3:    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    t3 = (t0 + 22128U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    memset(t2, t5, 8U);
    t3 = (t0 + 34872);
    t6 = (t3 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_delta(t3, 16U, 8U, 0LL);

LAB2:    t10 = (t0 + 34344);
    *((int *)t10) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void microblaze_v8_00_b_a_3930526202_3306564128_p_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(410, ng0);

LAB3:    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)2, 8U);
    t3 = (t0 + 34936);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 8U);
    xsi_driver_first_trans_delta(t3, 24U, 8U, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void microblaze_v8_00_b_a_3930526202_3306564128_p_7(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(485, ng0);

LAB3:    t1 = (t0 + 21488U);
    t2 = *((char **)t1);
    t3 = (0 - 0);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 35000);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 29U);
    xsi_driver_first_trans_delta(t6, 0U, 29U, 0LL);

LAB2:    t11 = (t0 + 34360);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void microblaze_v8_00_b_a_3930526202_3306564128_p_8(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(487, ng0);
    t1 = (t0 + 20368U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    if (t3 != 0)
        goto LAB3;

LAB4:
LAB5:    t8 = (t0 + 35064);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast(t8);

LAB2:    t13 = (t0 + 34376);
    *((int *)t13) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 35064);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void microblaze_v8_00_b_a_3930526202_3306564128_p_9(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(554, ng0);
    t1 = (t0 + 20368U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    if (t3 != 0)
        goto LAB3;

LAB4:
LAB5:    t8 = (t0 + 35128);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast(t8);

LAB2:    t13 = (t0 + 34392);
    *((int *)t13) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 35128);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void microblaze_v8_00_b_a_3930526202_3306564128_p_10(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t5;
    char *t6;
    int t7;
    int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned char t12;
    char *t13;
    char *t14;
    unsigned char t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    xsi_set_current_line(555, ng0);
    t2 = (t0 + 20368U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    if (t4 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB8:    t21 = (t0 + 35192);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    *((unsigned char *)t25) = (unsigned char)2;
    xsi_driver_first_trans_fast(t21);

LAB2:    t26 = (t0 + 34408);
    *((int *)t26) = 1;

LAB1:    return;
LAB3:    t13 = (t0 + 35192);
    t17 = (t13 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)3;
    xsi_driver_first_trans_fast(t13);
    goto LAB2;

LAB5:    t2 = (t0 + 20048U);
    t5 = *((char **)t2);
    t2 = ((MICROBLAZE_V8_00_B_P_1761634766) + 38248U);
    t6 = *((char **)t2);
    t7 = *((int *)t6);
    t8 = (t7 - 0);
    t9 = (t8 * 1);
    t10 = (1U * t9);
    t11 = (0 + t10);
    t2 = (t5 + t11);
    t12 = *((unsigned char *)t2);
    t13 = ((MICROBLAZE_V8_00_B_P_1761634766) + 38368U);
    t14 = *((char **)t13);
    t15 = *((unsigned char *)t14);
    t16 = (t12 == t15);
    t1 = t16;
    goto LAB7;

LAB9:    goto LAB2;

}

static void microblaze_v8_00_b_a_3930526202_3306564128_p_11(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(607, ng0);

LAB3:    t1 = xsi_get_transient_memory(29U);
    memset(t1, 0, 29U);
    t2 = t1;
    memset(t2, (unsigned char)2, 29U);
    t3 = (t0 + 35256);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 29U);
    xsi_driver_first_trans_delta(t3, 0U, 29U, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}


extern void microblaze_v8_00_b_a_3930526202_3306564128_init()
{
	static char *pe[] = {(void *)microblaze_v8_00_b_a_3930526202_3306564128_p_0,(void *)microblaze_v8_00_b_a_3930526202_3306564128_p_1,(void *)microblaze_v8_00_b_a_3930526202_3306564128_p_2,(void *)microblaze_v8_00_b_a_3930526202_3306564128_p_3,(void *)microblaze_v8_00_b_a_3930526202_3306564128_p_4,(void *)microblaze_v8_00_b_a_3930526202_3306564128_p_5,(void *)microblaze_v8_00_b_a_3930526202_3306564128_p_6,(void *)microblaze_v8_00_b_a_3930526202_3306564128_p_7,(void *)microblaze_v8_00_b_a_3930526202_3306564128_p_8,(void *)microblaze_v8_00_b_a_3930526202_3306564128_p_9,(void *)microblaze_v8_00_b_a_3930526202_3306564128_p_10,(void *)microblaze_v8_00_b_a_3930526202_3306564128_p_11};
	xsi_register_didat("microblaze_v8_00_b_a_3930526202_3306564128", "isim/isim_system_axisim.sim/microblaze_v8_00_b/a_3930526202_3306564128.didat");
	xsi_register_executes(pe);
}
