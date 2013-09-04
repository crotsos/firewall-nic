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
static const char *ng0 = "/root/NetFPGA-10G-live/lib/hw/xilinx/pcores/microblaze_v8_00_b/hdl/vhdl/operand_select_gti.vhd";
extern char *MICROBLAZE_V8_00_B_P_1761634766;



static void microblaze_v8_00_b_a_0284542778_3306564128_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    int t10;
    char *t11;
    int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    xsi_set_current_line(256, ng0);
    t1 = (t0 + 13104U);
    t2 = *((char **)t1);
    t1 = (t0 + 45632);
    t4 = xsi_mem_cmp(t1, t2, 2U);
    if (t4 == 1)
        goto LAB3;

LAB8:    t5 = (t0 + 45634);
    t7 = xsi_mem_cmp(t5, t2, 2U);
    if (t7 == 1)
        goto LAB4;

LAB9:    t8 = (t0 + 45636);
    t10 = xsi_mem_cmp(t8, t2, 2U);
    if (t10 == 1)
        goto LAB5;

LAB10:    t11 = (t0 + 45638);
    t13 = xsi_mem_cmp(t11, t2, 2U);
    if (t13 == 1)
        goto LAB6;

LAB11:
LAB7:    xsi_set_current_line(261, ng0);

LAB2:    t1 = (t0 + 24432);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(257, ng0);
    t14 = (t0 + 10224U);
    t15 = *((char **)t14);
    t14 = (t0 + 24704);
    t16 = (t14 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t15, 32U);
    xsi_driver_first_trans_fast(t14);
    goto LAB2;

LAB4:    xsi_set_current_line(258, ng0);
    t1 = (t0 + 11984U);
    t2 = *((char **)t1);
    t1 = (t0 + 24704);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 32U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB5:    xsi_set_current_line(259, ng0);
    t1 = (t0 + 12144U);
    t2 = *((char **)t1);
    t1 = (t0 + 24704);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 32U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    xsi_set_current_line(260, ng0);
    t1 = (t0 + 12304U);
    t2 = *((char **)t1);
    t1 = (t0 + 24704);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 32U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB12:;
}

static void microblaze_v8_00_b_a_0284542778_3306564128_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(271, ng0);
    t1 = (t0 + 12464U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    if (t3 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(275, ng0);
    t1 = (t0 + 11824U);
    t2 = *((char **)t1);
    t1 = (t0 + 24768);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 32U);
    xsi_driver_first_trans_fast(t1);

LAB3:    t1 = (t0 + 24448);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(272, ng0);
    t1 = (t0 + 11664U);
    t4 = *((char **)t1);
    t1 = (t0 + 24768);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t4, 32U);
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

}

static void microblaze_v8_00_b_a_0284542778_3306564128_p_2(char *t0)
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

LAB0:    xsi_set_current_line(286, ng0);
    t1 = (t0 + 12784U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    if (t3 != 0)
        goto LAB3;

LAB4:
LAB5:    t8 = (t0 + 24832);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast(t8);

LAB2:    t13 = (t0 + 24464);
    *((int *)t13) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 24832);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void microblaze_v8_00_b_a_0284542778_3306564128_p_3(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    int t8;
    char *t9;
    int t11;
    char *t12;
    int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    xsi_set_current_line(324, ng0);
    t1 = (t0 + 11184U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    if (t3 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 11344U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    if (t3 != 0)
        goto LAB5;

LAB6:    t1 = (t0 + 11504U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    if (t3 != 0)
        goto LAB7;

LAB8:    t1 = (t0 + 12944U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    if (t3 != 0)
        goto LAB9;

LAB10:    xsi_set_current_line(333, ng0);
    t1 = (t0 + 10384U);
    t2 = *((char **)t1);
    t1 = (t0 + 20160U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    memcpy(t1, t2, 32U);

LAB3:    xsi_set_current_line(336, ng0);
    t1 = (t0 + 13264U);
    t2 = *((char **)t1);
    t1 = (t0 + 45640);
    t6 = xsi_mem_cmp(t1, t2, 2U);
    if (t6 == 1)
        goto LAB12;

LAB17:    t5 = (t0 + 45642);
    t8 = xsi_mem_cmp(t5, t2, 2U);
    if (t8 == 1)
        goto LAB13;

LAB18:    t9 = (t0 + 45644);
    t11 = xsi_mem_cmp(t9, t2, 2U);
    if (t11 == 1)
        goto LAB14;

LAB19:    t12 = (t0 + 45646);
    t14 = xsi_mem_cmp(t12, t2, 2U);
    if (t14 == 1)
        goto LAB15;

LAB20:
LAB16:    xsi_set_current_line(341, ng0);

LAB11:    t1 = (t0 + 24480);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(325, ng0);
    t1 = ((MICROBLAZE_V8_00_B_P_1761634766) + 41848U);
    t4 = *((char **)t1);
    t1 = (t0 + 20160U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    memcpy(t1, t4, 32U);
    goto LAB3;

LAB5:    xsi_set_current_line(327, ng0);
    t1 = ((MICROBLAZE_V8_00_B_P_1761634766) + 41968U);
    t4 = *((char **)t1);
    t1 = (t0 + 20160U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    memcpy(t1, t4, 32U);
    goto LAB3;

LAB7:    xsi_set_current_line(329, ng0);
    t1 = ((MICROBLAZE_V8_00_B_P_1761634766) + 41728U);
    t4 = *((char **)t1);
    t1 = (t0 + 20160U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    memcpy(t1, t4, 32U);
    goto LAB3;

LAB9:    xsi_set_current_line(331, ng0);
    t1 = (t0 + 15024U);
    t4 = *((char **)t1);
    t1 = (t0 + 20160U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    memcpy(t1, t4, 32U);
    goto LAB3;

LAB12:    xsi_set_current_line(337, ng0);
    t15 = (t0 + 20160U);
    t16 = *((char **)t15);
    t15 = (t0 + 24896);
    t17 = (t15 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t16, 32U);
    xsi_driver_first_trans_fast(t15);
    goto LAB11;

LAB13:    xsi_set_current_line(338, ng0);
    t1 = (t0 + 11984U);
    t2 = *((char **)t1);
    t1 = (t0 + 24896);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t2, 32U);
    xsi_driver_first_trans_fast(t1);
    goto LAB11;

LAB14:    xsi_set_current_line(339, ng0);
    t1 = (t0 + 12144U);
    t2 = *((char **)t1);
    t1 = (t0 + 24896);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t2, 32U);
    xsi_driver_first_trans_fast(t1);
    goto LAB11;

LAB15:    xsi_set_current_line(340, ng0);
    t1 = (t0 + 12304U);
    t2 = *((char **)t1);
    t1 = (t0 + 24896);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t2, 32U);
    xsi_driver_first_trans_fast(t1);
    goto LAB11;

LAB21:;
}

static void microblaze_v8_00_b_a_0284542778_3306564128_p_4(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(352, ng0);
    t1 = (t0 + 11024U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    if (t3 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(355, ng0);
    t1 = (t0 + 15184U);
    t2 = *((char **)t1);
    t1 = (t0 + 24960);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 32U);
    xsi_driver_first_trans_fast(t1);

LAB3:    t1 = (t0 + 24496);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(353, ng0);
    t1 = (t0 + 15344U);
    t4 = *((char **)t1);
    t1 = (t0 + 24960);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t4, 32U);
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

}

static void microblaze_v8_00_b_a_0284542778_3306564128_p_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(366, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    t3 = (t0 + 10704U);
    t4 = *((char **)t3);
    t5 = (0 - 0);
    t6 = (t5 * 1);
    t7 = (1U * t6);
    t8 = (0 + t7);
    t3 = (t4 + t8);
    t9 = *((unsigned char *)t3);
    memset(t2, t9, 32U);
    t10 = (t0 + 25024);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t1, 32U);
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(367, ng0);
    t1 = (t0 + 10704U);
    t2 = *((char **)t1);
    t1 = (t0 + 25024);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t10 = (t4 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t2, 16U);
    xsi_driver_first_trans_delta(t1, 16U, 16U, 0LL);
    t1 = (t0 + 24512);
    *((int *)t1) = 1;

LAB1:    return;
}

static void microblaze_v8_00_b_a_0284542778_3306564128_p_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;

LAB0:    xsi_set_current_line(377, ng0);
    t1 = (t0 + 15504U);
    t2 = *((char **)t1);
    t1 = (t0 + 25088);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 16U);
    xsi_driver_first_trans_delta(t1, 0U, 16U, 0LL);
    xsi_set_current_line(378, ng0);
    t1 = (t0 + 10704U);
    t2 = *((char **)t1);
    t1 = (t0 + 25088);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 16U);
    xsi_driver_first_trans_delta(t1, 16U, 16U, 0LL);
    t1 = (t0 + 24528);
    *((int *)t1) = 1;

LAB1:    return;
}

static void microblaze_v8_00_b_a_0284542778_3306564128_p_7(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(388, ng0);
    t2 = (t0 + 9704U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 24544);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(389, ng0);
    t4 = (t0 + 9904U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 10864U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    if (t1 != 0)
        goto LAB11;

LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 9744U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(390, ng0);
    t4 = xsi_get_transient_memory(16U);
    memset(t4, 0, 16U);
    t11 = t4;
    memset(t11, (unsigned char)2, 16U);
    t12 = (t0 + 25152);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t4, 16U);
    xsi_driver_first_trans_fast(t12);
    goto LAB9;

LAB11:    xsi_set_current_line(392, ng0);
    t2 = (t0 + 10704U);
    t5 = *((char **)t2);
    t2 = (t0 + 25152);
    t8 = (t2 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t5, 16U);
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

}

static void microblaze_v8_00_b_a_0284542778_3306564128_p_8(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    int t10;
    char *t11;
    int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    xsi_set_current_line(403, ng0);
    t1 = (t0 + 13424U);
    t2 = *((char **)t1);
    t1 = (t0 + 45648);
    t4 = xsi_mem_cmp(t1, t2, 2U);
    if (t4 == 1)
        goto LAB3;

LAB8:    t5 = (t0 + 45650);
    t7 = xsi_mem_cmp(t5, t2, 2U);
    if (t7 == 1)
        goto LAB4;

LAB9:    t8 = (t0 + 45652);
    t10 = xsi_mem_cmp(t8, t2, 2U);
    if (t10 == 1)
        goto LAB5;

LAB10:    t11 = (t0 + 45654);
    t13 = xsi_mem_cmp(t11, t2, 2U);
    if (t13 == 1)
        goto LAB6;

LAB11:
LAB7:    xsi_set_current_line(408, ng0);

LAB2:    t1 = (t0 + 24560);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(404, ng0);
    t14 = (t0 + 10544U);
    t15 = *((char **)t14);
    t14 = (t0 + 25216);
    t16 = (t14 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t15, 32U);
    xsi_driver_first_trans_fast(t14);
    goto LAB2;

LAB4:    xsi_set_current_line(405, ng0);
    t1 = (t0 + 11984U);
    t2 = *((char **)t1);
    t1 = (t0 + 25216);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 32U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB5:    xsi_set_current_line(406, ng0);
    t1 = (t0 + 12144U);
    t2 = *((char **)t1);
    t1 = (t0 + 25216);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 32U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    xsi_set_current_line(407, ng0);
    t1 = (t0 + 12304U);
    t2 = *((char **)t1);
    t1 = (t0 + 25216);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 32U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB12:;
}

static void microblaze_v8_00_b_a_0284542778_3306564128_p_9(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(424, ng0);
    t2 = (t0 + 9704U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 24576);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(425, ng0);
    t4 = (t0 + 9904U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 10064U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    if (t1 != 0)
        goto LAB11;

LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 9744U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(426, ng0);
    t4 = xsi_get_transient_memory(32U);
    memset(t4, 0, 32U);
    t11 = t4;
    memset(t11, (unsigned char)2, 32U);
    t12 = (t0 + 25280);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t4, 32U);
    xsi_driver_first_trans_fast_port(t12);
    goto LAB9;

LAB11:    xsi_set_current_line(428, ng0);
    t2 = (t0 + 14384U);
    t5 = *((char **)t2);
    t2 = (t0 + 25280);
    t8 = (t2 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t5, 32U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB9;

}

static void microblaze_v8_00_b_a_0284542778_3306564128_p_10(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(439, ng0);
    t2 = (t0 + 9704U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 24592);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(440, ng0);
    t4 = (t0 + 9904U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 10064U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    if (t1 != 0)
        goto LAB11;

LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 9744U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(441, ng0);
    t4 = xsi_get_transient_memory(32U);
    memset(t4, 0, 32U);
    t11 = t4;
    memset(t11, (unsigned char)2, 32U);
    t12 = (t0 + 25344);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t4, 32U);
    xsi_driver_first_trans_fast_port(t12);
    goto LAB9;

LAB11:    xsi_set_current_line(443, ng0);
    t2 = (t0 + 14544U);
    t5 = *((char **)t2);
    t2 = (t0 + 25344);
    t8 = (t2 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t5, 32U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB9;

}

static void microblaze_v8_00_b_a_0284542778_3306564128_p_11(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(455, ng0);
    t2 = (t0 + 9704U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 24608);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(456, ng0);
    t4 = (t0 + 9904U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 10064U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    if (t1 != 0)
        goto LAB11;

LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 9744U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(457, ng0);
    t4 = xsi_get_transient_memory(32U);
    memset(t4, 0, 32U);
    t11 = t4;
    memset(t11, (unsigned char)2, 32U);
    t12 = (t0 + 25408);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t4, 32U);
    xsi_driver_first_trans_fast_port(t12);
    goto LAB9;

LAB11:    xsi_set_current_line(459, ng0);
    t2 = (t0 + 14704U);
    t5 = *((char **)t2);
    t2 = (t0 + 25408);
    t8 = (t2 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t5, 32U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB9;

}

static void microblaze_v8_00_b_a_0284542778_3306564128_p_12(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(470, ng0);
    t2 = (t0 + 9704U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 24624);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(471, ng0);
    t4 = (t0 + 9904U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 10064U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    if (t1 != 0)
        goto LAB11;

LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 9744U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(472, ng0);
    t4 = xsi_get_transient_memory(32U);
    memset(t4, 0, 32U);
    t11 = t4;
    memset(t11, (unsigned char)2, 32U);
    t12 = (t0 + 25472);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t4, 32U);
    xsi_driver_first_trans_fast_port(t12);
    goto LAB9;

LAB11:    xsi_set_current_line(474, ng0);
    t2 = (t0 + 14224U);
    t5 = *((char **)t2);
    t2 = (t0 + 25472);
    t8 = (t2 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t5, 32U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB9;

}


extern void microblaze_v8_00_b_a_0284542778_3306564128_init()
{
	static char *pe[] = {(void *)microblaze_v8_00_b_a_0284542778_3306564128_p_0,(void *)microblaze_v8_00_b_a_0284542778_3306564128_p_1,(void *)microblaze_v8_00_b_a_0284542778_3306564128_p_2,(void *)microblaze_v8_00_b_a_0284542778_3306564128_p_3,(void *)microblaze_v8_00_b_a_0284542778_3306564128_p_4,(void *)microblaze_v8_00_b_a_0284542778_3306564128_p_5,(void *)microblaze_v8_00_b_a_0284542778_3306564128_p_6,(void *)microblaze_v8_00_b_a_0284542778_3306564128_p_7,(void *)microblaze_v8_00_b_a_0284542778_3306564128_p_8,(void *)microblaze_v8_00_b_a_0284542778_3306564128_p_9,(void *)microblaze_v8_00_b_a_0284542778_3306564128_p_10,(void *)microblaze_v8_00_b_a_0284542778_3306564128_p_11,(void *)microblaze_v8_00_b_a_0284542778_3306564128_p_12};
	xsi_register_didat("microblaze_v8_00_b_a_0284542778_3306564128", "isim/isim_system_axisim.sim/microblaze_v8_00_b/a_0284542778_3306564128.didat");
	xsi_register_executes(pe);
}
