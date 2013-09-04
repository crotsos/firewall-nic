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
static const char *ng0 = "/root/NetFPGA-10G-live/lib/hw/std/pcores/nf10_mdio_v1_00_a/hdl/vhdl/mdio_if.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_3488768496604610246_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_374109322130769762_503743352(char *, unsigned char );


static void nf10_mdio_v1_00_a_a_3079673650_3306564128_p_0(char *t0)
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

LAB0:    xsi_set_current_line(212, ng0);
    t2 = (t0 + 5216U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 21032);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(213, ng0);
    t4 = (t0 + 5416U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(218, ng0);
    t2 = (t0 + 5576U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 21560);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(219, ng0);
    t2 = (t0 + 7016U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 21624);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(220, ng0);
    t2 = (t0 + 9256U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 21688);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 5256U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(214, ng0);
    t4 = (t0 + 21560);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(215, ng0);
    t2 = (t0 + 21624);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(216, ng0);
    t2 = (t0 + 21688);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

}

static void nf10_mdio_v1_00_a_a_3079673650_3306564128_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(226, ng0);

LAB3:    t1 = (t0 + 5576U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t3);
    t1 = (t0 + 9096U);
    t5 = *((char **)t1);
    t6 = *((unsigned char *)t5);
    t7 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t4, t6);
    t1 = (t0 + 21752);
    t8 = (t1 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t7;
    xsi_driver_first_trans_fast(t1);

LAB2:    t12 = (t0 + 21048);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void nf10_mdio_v1_00_a_a_3079673650_3306564128_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(227, ng0);

LAB3:    t1 = (t0 + 5576U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 9096U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t5);
    t7 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t3, t6);
    t1 = (t0 + 21816);
    t8 = (t1 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t7;
    xsi_driver_first_trans_fast(t1);

LAB2:    t12 = (t0 + 21064);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void nf10_mdio_v1_00_a_a_3079673650_3306564128_p_3(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(231, ng0);

LAB3:    t1 = (t0 + 5576U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 8616U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 21880);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t11 = (t0 + 21080);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void nf10_mdio_v1_00_a_a_3079673650_3306564128_p_4(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(235, ng0);

LAB3:    t1 = (t0 + 8136U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 21944);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 21096);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void nf10_mdio_v1_00_a_a_3079673650_3306564128_p_5(char *t0)
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

LAB0:    xsi_set_current_line(246, ng0);
    t2 = (t0 + 5216U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 21112);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(247, ng0);
    t4 = (t0 + 5416U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 10376U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 5256U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(248, ng0);
    t4 = (t0 + 22008);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB11:    xsi_set_current_line(250, ng0);
    t2 = (t0 + 8296U);
    t5 = *((char **)t2);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    if (t7 != 0)
        goto LAB13;

LAB15:
LAB14:    goto LAB9;

LAB13:    xsi_set_current_line(251, ng0);
    t2 = (t0 + 5736U);
    t8 = *((char **)t2);
    t9 = *((unsigned char *)t8);
    t2 = (t0 + 22008);
    t11 = (t2 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = t9;
    xsi_driver_first_trans_fast(t2);
    goto LAB14;

}

static void nf10_mdio_v1_00_a_a_3079673650_3306564128_p_6(char *t0)
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

LAB0:    xsi_set_current_line(267, ng0);
    t2 = (t0 + 5216U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 21128);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(268, ng0);
    t4 = (t0 + 5416U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 10376U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 5256U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(269, ng0);
    t4 = (t0 + 22072);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t4);
    goto LAB9;

LAB11:    xsi_set_current_line(271, ng0);
    t2 = (t0 + 8936U);
    t5 = *((char **)t2);
    t6 = *((unsigned char *)t5);
    t2 = (t0 + 22072);
    t8 = (t2 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t6;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB9;

}

static void nf10_mdio_v1_00_a_a_3079673650_3306564128_p_7(char *t0)
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

LAB0:    xsi_set_current_line(283, ng0);
    t2 = (t0 + 5216U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 21144);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(284, ng0);
    t4 = (t0 + 5416U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 10376U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 5256U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(285, ng0);
    t4 = (t0 + 22136);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t4);
    goto LAB9;

LAB11:    xsi_set_current_line(287, ng0);
    t2 = (t0 + 8776U);
    t5 = *((char **)t2);
    t6 = *((unsigned char *)t5);
    t2 = (t0 + 22136);
    t8 = (t2 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t6;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB9;

}

static void nf10_mdio_v1_00_a_a_3079673650_3306564128_p_8(char *t0)
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

LAB0:    xsi_set_current_line(301, ng0);
    t2 = (t0 + 5216U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 21160);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(302, ng0);
    t4 = (t0 + 5416U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 10536U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 5256U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(303, ng0);
    t4 = (t0 + 22200);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB11:    xsi_set_current_line(305, ng0);
    t2 = (t0 + 8136U);
    t5 = *((char **)t2);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    if (t7 != 0)
        goto LAB13;

LAB15:    t2 = (t0 + 6216U);
    t4 = *((char **)t2);
    t3 = *((unsigned char *)t4);
    t6 = (t3 == (unsigned char)3);
    if (t6 == 1)
        goto LAB18;

LAB19:    t1 = (unsigned char)0;

LAB20:    if (t1 != 0)
        goto LAB16;

LAB17:
LAB14:    goto LAB9;

LAB13:    xsi_set_current_line(306, ng0);
    t2 = (t0 + 22200);
    t8 = (t2 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB14;

LAB16:    xsi_set_current_line(308, ng0);
    t2 = (t0 + 22200);
    t8 = (t2 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB14;

LAB18:    t2 = (t0 + 8616U);
    t5 = *((char **)t2);
    t7 = *((unsigned char *)t5);
    t9 = (t7 == (unsigned char)3);
    t1 = t9;
    goto LAB20;

}

static void nf10_mdio_v1_00_a_a_3079673650_3306564128_p_9(char *t0)
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
    int t15;
    int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(324, ng0);
    t2 = (t0 + 5216U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 21176);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(325, ng0);
    t4 = (t0 + 5416U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 10536U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 5256U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(326, ng0);
    t4 = (t0 + 22264);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_delta(t4, 0U, 1, 0LL);
    goto LAB9;

LAB11:    xsi_set_current_line(328, ng0);
    t2 = (t0 + 8456U);
    t5 = *((char **)t2);
    t2 = (t0 + 10992U);
    t8 = *((char **)t2);
    t15 = *((int *)t8);
    t16 = (t15 - 15);
    t17 = (t16 * -1);
    t18 = (1U * t17);
    t19 = (0 + t18);
    t2 = (t5 + t19);
    t6 = *((unsigned char *)t2);
    t7 = (t6 == (unsigned char)3);
    if (t7 != 0)
        goto LAB13;

LAB15:
LAB14:    goto LAB9;

LAB13:    xsi_set_current_line(329, ng0);
    t11 = (t0 + 9416U);
    t12 = *((char **)t11);
    t9 = *((unsigned char *)t12);
    t11 = (t0 + 22264);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    t20 = (t14 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = t9;
    xsi_driver_first_trans_delta(t11, 0U, 1, 0LL);
    goto LAB14;

}

static void nf10_mdio_v1_00_a_a_3079673650_3306564128_p_10(char *t0)
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
    int t15;
    int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(324, ng0);
    t2 = (t0 + 5216U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 21192);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(325, ng0);
    t4 = (t0 + 5416U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 10536U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 5256U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(326, ng0);
    t4 = (t0 + 22328);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_delta(t4, 1U, 1, 0LL);
    goto LAB9;

LAB11:    xsi_set_current_line(328, ng0);
    t2 = (t0 + 8456U);
    t5 = *((char **)t2);
    t2 = (t0 + 11112U);
    t8 = *((char **)t2);
    t15 = *((int *)t8);
    t16 = (t15 - 15);
    t17 = (t16 * -1);
    t18 = (1U * t17);
    t19 = (0 + t18);
    t2 = (t5 + t19);
    t6 = *((unsigned char *)t2);
    t7 = (t6 == (unsigned char)3);
    if (t7 != 0)
        goto LAB13;

LAB15:
LAB14:    goto LAB9;

LAB13:    xsi_set_current_line(329, ng0);
    t11 = (t0 + 9416U);
    t12 = *((char **)t11);
    t9 = *((unsigned char *)t12);
    t11 = (t0 + 22328);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    t20 = (t14 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = t9;
    xsi_driver_first_trans_delta(t11, 1U, 1, 0LL);
    goto LAB14;

}

static void nf10_mdio_v1_00_a_a_3079673650_3306564128_p_11(char *t0)
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
    int t15;
    int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(324, ng0);
    t2 = (t0 + 5216U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 21208);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(325, ng0);
    t4 = (t0 + 5416U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 10536U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 5256U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(326, ng0);
    t4 = (t0 + 22392);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_delta(t4, 2U, 1, 0LL);
    goto LAB9;

LAB11:    xsi_set_current_line(328, ng0);
    t2 = (t0 + 8456U);
    t5 = *((char **)t2);
    t2 = (t0 + 11232U);
    t8 = *((char **)t2);
    t15 = *((int *)t8);
    t16 = (t15 - 15);
    t17 = (t16 * -1);
    t18 = (1U * t17);
    t19 = (0 + t18);
    t2 = (t5 + t19);
    t6 = *((unsigned char *)t2);
    t7 = (t6 == (unsigned char)3);
    if (t7 != 0)
        goto LAB13;

LAB15:
LAB14:    goto LAB9;

LAB13:    xsi_set_current_line(329, ng0);
    t11 = (t0 + 9416U);
    t12 = *((char **)t11);
    t9 = *((unsigned char *)t12);
    t11 = (t0 + 22392);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    t20 = (t14 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = t9;
    xsi_driver_first_trans_delta(t11, 2U, 1, 0LL);
    goto LAB14;

}

static void nf10_mdio_v1_00_a_a_3079673650_3306564128_p_12(char *t0)
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
    int t15;
    int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(324, ng0);
    t2 = (t0 + 5216U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 21224);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(325, ng0);
    t4 = (t0 + 5416U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 10536U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 5256U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(326, ng0);
    t4 = (t0 + 22456);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_delta(t4, 3U, 1, 0LL);
    goto LAB9;

LAB11:    xsi_set_current_line(328, ng0);
    t2 = (t0 + 8456U);
    t5 = *((char **)t2);
    t2 = (t0 + 11352U);
    t8 = *((char **)t2);
    t15 = *((int *)t8);
    t16 = (t15 - 15);
    t17 = (t16 * -1);
    t18 = (1U * t17);
    t19 = (0 + t18);
    t2 = (t5 + t19);
    t6 = *((unsigned char *)t2);
    t7 = (t6 == (unsigned char)3);
    if (t7 != 0)
        goto LAB13;

LAB15:
LAB14:    goto LAB9;

LAB13:    xsi_set_current_line(329, ng0);
    t11 = (t0 + 9416U);
    t12 = *((char **)t11);
    t9 = *((unsigned char *)t12);
    t11 = (t0 + 22456);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    t20 = (t14 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = t9;
    xsi_driver_first_trans_delta(t11, 3U, 1, 0LL);
    goto LAB14;

}

static void nf10_mdio_v1_00_a_a_3079673650_3306564128_p_13(char *t0)
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
    int t15;
    int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(324, ng0);
    t2 = (t0 + 5216U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 21240);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(325, ng0);
    t4 = (t0 + 5416U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 10536U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 5256U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(326, ng0);
    t4 = (t0 + 22520);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_delta(t4, 4U, 1, 0LL);
    goto LAB9;

LAB11:    xsi_set_current_line(328, ng0);
    t2 = (t0 + 8456U);
    t5 = *((char **)t2);
    t2 = (t0 + 11472U);
    t8 = *((char **)t2);
    t15 = *((int *)t8);
    t16 = (t15 - 15);
    t17 = (t16 * -1);
    t18 = (1U * t17);
    t19 = (0 + t18);
    t2 = (t5 + t19);
    t6 = *((unsigned char *)t2);
    t7 = (t6 == (unsigned char)3);
    if (t7 != 0)
        goto LAB13;

LAB15:
LAB14:    goto LAB9;

LAB13:    xsi_set_current_line(329, ng0);
    t11 = (t0 + 9416U);
    t12 = *((char **)t11);
    t9 = *((unsigned char *)t12);
    t11 = (t0 + 22520);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    t20 = (t14 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = t9;
    xsi_driver_first_trans_delta(t11, 4U, 1, 0LL);
    goto LAB14;

}

static void nf10_mdio_v1_00_a_a_3079673650_3306564128_p_14(char *t0)
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
    int t15;
    int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(324, ng0);
    t2 = (t0 + 5216U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 21256);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(325, ng0);
    t4 = (t0 + 5416U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 10536U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 5256U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(326, ng0);
    t4 = (t0 + 22584);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_delta(t4, 5U, 1, 0LL);
    goto LAB9;

LAB11:    xsi_set_current_line(328, ng0);
    t2 = (t0 + 8456U);
    t5 = *((char **)t2);
    t2 = (t0 + 11592U);
    t8 = *((char **)t2);
    t15 = *((int *)t8);
    t16 = (t15 - 15);
    t17 = (t16 * -1);
    t18 = (1U * t17);
    t19 = (0 + t18);
    t2 = (t5 + t19);
    t6 = *((unsigned char *)t2);
    t7 = (t6 == (unsigned char)3);
    if (t7 != 0)
        goto LAB13;

LAB15:
LAB14:    goto LAB9;

LAB13:    xsi_set_current_line(329, ng0);
    t11 = (t0 + 9416U);
    t12 = *((char **)t11);
    t9 = *((unsigned char *)t12);
    t11 = (t0 + 22584);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    t20 = (t14 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = t9;
    xsi_driver_first_trans_delta(t11, 5U, 1, 0LL);
    goto LAB14;

}

static void nf10_mdio_v1_00_a_a_3079673650_3306564128_p_15(char *t0)
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
    int t15;
    int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(324, ng0);
    t2 = (t0 + 5216U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 21272);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(325, ng0);
    t4 = (t0 + 5416U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 10536U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 5256U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(326, ng0);
    t4 = (t0 + 22648);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_delta(t4, 6U, 1, 0LL);
    goto LAB9;

LAB11:    xsi_set_current_line(328, ng0);
    t2 = (t0 + 8456U);
    t5 = *((char **)t2);
    t2 = (t0 + 11712U);
    t8 = *((char **)t2);
    t15 = *((int *)t8);
    t16 = (t15 - 15);
    t17 = (t16 * -1);
    t18 = (1U * t17);
    t19 = (0 + t18);
    t2 = (t5 + t19);
    t6 = *((unsigned char *)t2);
    t7 = (t6 == (unsigned char)3);
    if (t7 != 0)
        goto LAB13;

LAB15:
LAB14:    goto LAB9;

LAB13:    xsi_set_current_line(329, ng0);
    t11 = (t0 + 9416U);
    t12 = *((char **)t11);
    t9 = *((unsigned char *)t12);
    t11 = (t0 + 22648);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    t20 = (t14 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = t9;
    xsi_driver_first_trans_delta(t11, 6U, 1, 0LL);
    goto LAB14;

}

static void nf10_mdio_v1_00_a_a_3079673650_3306564128_p_16(char *t0)
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
    int t15;
    int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(324, ng0);
    t2 = (t0 + 5216U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 21288);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(325, ng0);
    t4 = (t0 + 5416U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 10536U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 5256U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(326, ng0);
    t4 = (t0 + 22712);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_delta(t4, 7U, 1, 0LL);
    goto LAB9;

LAB11:    xsi_set_current_line(328, ng0);
    t2 = (t0 + 8456U);
    t5 = *((char **)t2);
    t2 = (t0 + 11832U);
    t8 = *((char **)t2);
    t15 = *((int *)t8);
    t16 = (t15 - 15);
    t17 = (t16 * -1);
    t18 = (1U * t17);
    t19 = (0 + t18);
    t2 = (t5 + t19);
    t6 = *((unsigned char *)t2);
    t7 = (t6 == (unsigned char)3);
    if (t7 != 0)
        goto LAB13;

LAB15:
LAB14:    goto LAB9;

LAB13:    xsi_set_current_line(329, ng0);
    t11 = (t0 + 9416U);
    t12 = *((char **)t11);
    t9 = *((unsigned char *)t12);
    t11 = (t0 + 22712);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    t20 = (t14 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = t9;
    xsi_driver_first_trans_delta(t11, 7U, 1, 0LL);
    goto LAB14;

}

static void nf10_mdio_v1_00_a_a_3079673650_3306564128_p_17(char *t0)
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
    int t15;
    int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(324, ng0);
    t2 = (t0 + 5216U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 21304);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(325, ng0);
    t4 = (t0 + 5416U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 10536U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 5256U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(326, ng0);
    t4 = (t0 + 22776);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_delta(t4, 8U, 1, 0LL);
    goto LAB9;

LAB11:    xsi_set_current_line(328, ng0);
    t2 = (t0 + 8456U);
    t5 = *((char **)t2);
    t2 = (t0 + 11952U);
    t8 = *((char **)t2);
    t15 = *((int *)t8);
    t16 = (t15 - 15);
    t17 = (t16 * -1);
    t18 = (1U * t17);
    t19 = (0 + t18);
    t2 = (t5 + t19);
    t6 = *((unsigned char *)t2);
    t7 = (t6 == (unsigned char)3);
    if (t7 != 0)
        goto LAB13;

LAB15:
LAB14:    goto LAB9;

LAB13:    xsi_set_current_line(329, ng0);
    t11 = (t0 + 9416U);
    t12 = *((char **)t11);
    t9 = *((unsigned char *)t12);
    t11 = (t0 + 22776);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    t20 = (t14 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = t9;
    xsi_driver_first_trans_delta(t11, 8U, 1, 0LL);
    goto LAB14;

}

static void nf10_mdio_v1_00_a_a_3079673650_3306564128_p_18(char *t0)
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
    int t15;
    int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(324, ng0);
    t2 = (t0 + 5216U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 21320);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(325, ng0);
    t4 = (t0 + 5416U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 10536U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 5256U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(326, ng0);
    t4 = (t0 + 22840);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_delta(t4, 9U, 1, 0LL);
    goto LAB9;

LAB11:    xsi_set_current_line(328, ng0);
    t2 = (t0 + 8456U);
    t5 = *((char **)t2);
    t2 = (t0 + 12072U);
    t8 = *((char **)t2);
    t15 = *((int *)t8);
    t16 = (t15 - 15);
    t17 = (t16 * -1);
    t18 = (1U * t17);
    t19 = (0 + t18);
    t2 = (t5 + t19);
    t6 = *((unsigned char *)t2);
    t7 = (t6 == (unsigned char)3);
    if (t7 != 0)
        goto LAB13;

LAB15:
LAB14:    goto LAB9;

LAB13:    xsi_set_current_line(329, ng0);
    t11 = (t0 + 9416U);
    t12 = *((char **)t11);
    t9 = *((unsigned char *)t12);
    t11 = (t0 + 22840);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    t20 = (t14 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = t9;
    xsi_driver_first_trans_delta(t11, 9U, 1, 0LL);
    goto LAB14;

}

static void nf10_mdio_v1_00_a_a_3079673650_3306564128_p_19(char *t0)
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
    int t15;
    int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(324, ng0);
    t2 = (t0 + 5216U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 21336);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(325, ng0);
    t4 = (t0 + 5416U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 10536U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 5256U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(326, ng0);
    t4 = (t0 + 22904);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_delta(t4, 10U, 1, 0LL);
    goto LAB9;

LAB11:    xsi_set_current_line(328, ng0);
    t2 = (t0 + 8456U);
    t5 = *((char **)t2);
    t2 = (t0 + 12192U);
    t8 = *((char **)t2);
    t15 = *((int *)t8);
    t16 = (t15 - 15);
    t17 = (t16 * -1);
    t18 = (1U * t17);
    t19 = (0 + t18);
    t2 = (t5 + t19);
    t6 = *((unsigned char *)t2);
    t7 = (t6 == (unsigned char)3);
    if (t7 != 0)
        goto LAB13;

LAB15:
LAB14:    goto LAB9;

LAB13:    xsi_set_current_line(329, ng0);
    t11 = (t0 + 9416U);
    t12 = *((char **)t11);
    t9 = *((unsigned char *)t12);
    t11 = (t0 + 22904);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    t20 = (t14 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = t9;
    xsi_driver_first_trans_delta(t11, 10U, 1, 0LL);
    goto LAB14;

}

static void nf10_mdio_v1_00_a_a_3079673650_3306564128_p_20(char *t0)
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
    int t15;
    int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(324, ng0);
    t2 = (t0 + 5216U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 21352);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(325, ng0);
    t4 = (t0 + 5416U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 10536U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 5256U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(326, ng0);
    t4 = (t0 + 22968);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_delta(t4, 11U, 1, 0LL);
    goto LAB9;

LAB11:    xsi_set_current_line(328, ng0);
    t2 = (t0 + 8456U);
    t5 = *((char **)t2);
    t2 = (t0 + 12312U);
    t8 = *((char **)t2);
    t15 = *((int *)t8);
    t16 = (t15 - 15);
    t17 = (t16 * -1);
    t18 = (1U * t17);
    t19 = (0 + t18);
    t2 = (t5 + t19);
    t6 = *((unsigned char *)t2);
    t7 = (t6 == (unsigned char)3);
    if (t7 != 0)
        goto LAB13;

LAB15:
LAB14:    goto LAB9;

LAB13:    xsi_set_current_line(329, ng0);
    t11 = (t0 + 9416U);
    t12 = *((char **)t11);
    t9 = *((unsigned char *)t12);
    t11 = (t0 + 22968);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    t20 = (t14 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = t9;
    xsi_driver_first_trans_delta(t11, 11U, 1, 0LL);
    goto LAB14;

}

static void nf10_mdio_v1_00_a_a_3079673650_3306564128_p_21(char *t0)
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
    int t15;
    int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(324, ng0);
    t2 = (t0 + 5216U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 21368);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(325, ng0);
    t4 = (t0 + 5416U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 10536U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 5256U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(326, ng0);
    t4 = (t0 + 23032);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_delta(t4, 12U, 1, 0LL);
    goto LAB9;

LAB11:    xsi_set_current_line(328, ng0);
    t2 = (t0 + 8456U);
    t5 = *((char **)t2);
    t2 = (t0 + 12432U);
    t8 = *((char **)t2);
    t15 = *((int *)t8);
    t16 = (t15 - 15);
    t17 = (t16 * -1);
    t18 = (1U * t17);
    t19 = (0 + t18);
    t2 = (t5 + t19);
    t6 = *((unsigned char *)t2);
    t7 = (t6 == (unsigned char)3);
    if (t7 != 0)
        goto LAB13;

LAB15:
LAB14:    goto LAB9;

LAB13:    xsi_set_current_line(329, ng0);
    t11 = (t0 + 9416U);
    t12 = *((char **)t11);
    t9 = *((unsigned char *)t12);
    t11 = (t0 + 23032);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    t20 = (t14 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = t9;
    xsi_driver_first_trans_delta(t11, 12U, 1, 0LL);
    goto LAB14;

}

static void nf10_mdio_v1_00_a_a_3079673650_3306564128_p_22(char *t0)
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
    int t15;
    int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(324, ng0);
    t2 = (t0 + 5216U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 21384);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(325, ng0);
    t4 = (t0 + 5416U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 10536U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 5256U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(326, ng0);
    t4 = (t0 + 23096);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_delta(t4, 13U, 1, 0LL);
    goto LAB9;

LAB11:    xsi_set_current_line(328, ng0);
    t2 = (t0 + 8456U);
    t5 = *((char **)t2);
    t2 = (t0 + 12552U);
    t8 = *((char **)t2);
    t15 = *((int *)t8);
    t16 = (t15 - 15);
    t17 = (t16 * -1);
    t18 = (1U * t17);
    t19 = (0 + t18);
    t2 = (t5 + t19);
    t6 = *((unsigned char *)t2);
    t7 = (t6 == (unsigned char)3);
    if (t7 != 0)
        goto LAB13;

LAB15:
LAB14:    goto LAB9;

LAB13:    xsi_set_current_line(329, ng0);
    t11 = (t0 + 9416U);
    t12 = *((char **)t11);
    t9 = *((unsigned char *)t12);
    t11 = (t0 + 23096);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    t20 = (t14 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = t9;
    xsi_driver_first_trans_delta(t11, 13U, 1, 0LL);
    goto LAB14;

}

static void nf10_mdio_v1_00_a_a_3079673650_3306564128_p_23(char *t0)
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
    int t15;
    int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(324, ng0);
    t2 = (t0 + 5216U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 21400);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(325, ng0);
    t4 = (t0 + 5416U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 10536U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 5256U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(326, ng0);
    t4 = (t0 + 23160);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_delta(t4, 14U, 1, 0LL);
    goto LAB9;

LAB11:    xsi_set_current_line(328, ng0);
    t2 = (t0 + 8456U);
    t5 = *((char **)t2);
    t2 = (t0 + 12672U);
    t8 = *((char **)t2);
    t15 = *((int *)t8);
    t16 = (t15 - 15);
    t17 = (t16 * -1);
    t18 = (1U * t17);
    t19 = (0 + t18);
    t2 = (t5 + t19);
    t6 = *((unsigned char *)t2);
    t7 = (t6 == (unsigned char)3);
    if (t7 != 0)
        goto LAB13;

LAB15:
LAB14:    goto LAB9;

LAB13:    xsi_set_current_line(329, ng0);
    t11 = (t0 + 9416U);
    t12 = *((char **)t11);
    t9 = *((unsigned char *)t12);
    t11 = (t0 + 23160);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    t20 = (t14 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = t9;
    xsi_driver_first_trans_delta(t11, 14U, 1, 0LL);
    goto LAB14;

}

static void nf10_mdio_v1_00_a_a_3079673650_3306564128_p_24(char *t0)
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
    int t15;
    int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(324, ng0);
    t2 = (t0 + 5216U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 21416);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(325, ng0);
    t4 = (t0 + 5416U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 10536U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 5256U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(326, ng0);
    t4 = (t0 + 23224);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_delta(t4, 15U, 1, 0LL);
    goto LAB9;

LAB11:    xsi_set_current_line(328, ng0);
    t2 = (t0 + 8456U);
    t5 = *((char **)t2);
    t2 = (t0 + 12792U);
    t8 = *((char **)t2);
    t15 = *((int *)t8);
    t16 = (t15 - 15);
    t17 = (t16 * -1);
    t18 = (1U * t17);
    t19 = (0 + t18);
    t2 = (t5 + t19);
    t6 = *((unsigned char *)t2);
    t7 = (t6 == (unsigned char)3);
    if (t7 != 0)
        goto LAB13;

LAB15:
LAB14:    goto LAB9;

LAB13:    xsi_set_current_line(329, ng0);
    t11 = (t0 + 9416U);
    t12 = *((char **)t11);
    t9 = *((unsigned char *)t12);
    t11 = (t0 + 23224);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    t20 = (t14 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = t9;
    xsi_driver_first_trans_delta(t11, 15U, 1, 0LL);
    goto LAB14;

}

static void nf10_mdio_v1_00_a_a_3079673650_3306564128_p_25(char *t0)
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
    int t15;
    int t16;

LAB0:    xsi_set_current_line(344, ng0);
    t2 = (t0 + 5216U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 21432);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(345, ng0);
    t4 = (t0 + 5416U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 10536U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 5256U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(346, ng0);
    t4 = (t0 + 23288);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((int *)t14) = 0;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB11:    xsi_set_current_line(348, ng0);
    t2 = (t0 + 10696U);
    t5 = *((char **)t2);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    if (t7 != 0)
        goto LAB13;

LAB15:    t2 = (t0 + 10216U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB16;

LAB17:
LAB14:    goto LAB9;

LAB13:    xsi_set_current_line(349, ng0);
    t2 = (t0 + 9896U);
    t8 = *((char **)t2);
    t15 = *((int *)t8);
    t2 = (t0 + 23288);
    t11 = (t2 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((int *)t14) = t15;
    xsi_driver_first_trans_fast(t2);
    goto LAB14;

LAB16:    xsi_set_current_line(351, ng0);
    t2 = (t0 + 9576U);
    t5 = *((char **)t2);
    t15 = *((int *)t5);
    t16 = (t15 - 1);
    t2 = (t0 + 23288);
    t8 = (t2 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((int *)t13) = t16;
    xsi_driver_first_trans_fast(t2);
    goto LAB14;

}

static void nf10_mdio_v1_00_a_a_3079673650_3306564128_p_26(char *t0)
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

LAB0:    xsi_set_current_line(364, ng0);
    t2 = (t0 + 5216U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 21448);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(365, ng0);
    t4 = (t0 + 5416U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 10536U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 5256U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(366, ng0);
    t4 = (t0 + 23352);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)0;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB11:    xsi_set_current_line(368, ng0);
    t2 = (t0 + 7976U);
    t5 = *((char **)t2);
    t6 = *((unsigned char *)t5);
    t2 = (t0 + 23352);
    t8 = (t2 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t6;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

}

static void nf10_mdio_v1_00_a_a_3079673650_3306564128_p_27(char *t0)
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
    int t15;

LAB0:    xsi_set_current_line(380, ng0);
    t2 = (t0 + 5216U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 21464);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(381, ng0);
    t4 = (t0 + 5416U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(385, ng0);
    t2 = (t0 + 9736U);
    t4 = *((char **)t2);
    t15 = *((int *)t4);
    t2 = (t0 + 23416);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    *((int *)t12) = t15;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(386, ng0);
    t2 = (t0 + 10056U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 23480);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 5256U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(382, ng0);
    t4 = (t0 + 23416);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((int *)t14) = 0;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(383, ng0);
    t2 = (t0 + 23480);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

}

static void nf10_mdio_v1_00_a_a_3079673650_3306564128_p_28(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    int t10;
    unsigned int t11;
    char *t12;
    unsigned char t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    int t22;
    unsigned int t23;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5, &&LAB6, &&LAB7, &&LAB8, &&LAB11, &&LAB12, &&LAB9, &&LAB10, &&LAB13, &&LAB14, &&LAB15};

LAB0:    xsi_set_current_line(403, ng0);
    t1 = (t0 + 23544);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(404, ng0);
    t1 = (t0 + 35804);
    t3 = (t0 + 23608);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 16U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(405, ng0);
    t1 = (t0 + 23672);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(406, ng0);
    t1 = (t0 + 23736);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(407, ng0);
    t1 = (t0 + 23800);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(408, ng0);
    t1 = (t0 + 23864);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(409, ng0);
    t1 = (t0 + 7816U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    t1 = (t0 + 23928);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = t8;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(410, ng0);
    t1 = (t0 + 23992);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((int *)t5) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(412, ng0);
    t1 = (t0 + 7816U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t8);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 21480);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(415, ng0);
    t3 = (t0 + 23544);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(416, ng0);
    t1 = (t0 + 23864);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(418, ng0);
    t1 = (t0 + 23736);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(420, ng0);
    t1 = (t0 + 8296U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    t9 = (t8 == (unsigned char)2);
    if (t9 != 0)
        goto LAB17;

LAB19:
LAB18:    goto LAB2;

LAB4:    xsi_set_current_line(427, ng0);
    t1 = (t0 + 23800);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(429, ng0);
    t1 = (t0 + 9576U);
    t2 = *((char **)t1);
    t10 = *((int *)t2);
    t8 = (t10 == 0);
    if (t8 != 0)
        goto LAB20;

LAB22:
LAB21:    goto LAB2;

LAB5:    xsi_set_current_line(435, ng0);
    t1 = (t0 + 23544);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(436, ng0);
    t1 = (t0 + 23928);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    xsi_set_current_line(439, ng0);
    t1 = (t0 + 5896U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    t9 = (t8 == (unsigned char)2);
    if (t9 != 0)
        goto LAB23;

LAB25:    xsi_set_current_line(442, ng0);
    t1 = (t0 + 23544);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB24:    xsi_set_current_line(444, ng0);
    t1 = (t0 + 23928);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB7:    xsi_set_current_line(447, ng0);
    t1 = (t0 + 23928);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)5;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(448, ng0);
    t1 = (t0 + 6056U);
    t2 = *((char **)t1);
    t1 = (t0 + 35820);
    t9 = 1;
    if (2U == 2U)
        goto LAB32;

LAB33:    t9 = 0;

LAB34:    if (t9 == 1)
        goto LAB29;

LAB30:    t6 = (t0 + 6056U);
    t7 = *((char **)t6);
    t6 = (t0 + 35822);
    t13 = 1;
    if (2U == 2U)
        goto LAB38;

LAB39:    t13 = 0;

LAB40:    t8 = t13;

LAB31:    if (t8 != 0)
        goto LAB26;

LAB28:    xsi_set_current_line(452, ng0);
    t1 = (t0 + 23544);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB27:    goto LAB2;

LAB8:    xsi_set_current_line(456, ng0);
    t1 = (t0 + 23928);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)8;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(458, ng0);
    t1 = (t0 + 23992);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((int *)t5) = 4;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(459, ng0);
    t1 = (t0 + 23736);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(460, ng0);
    t1 = (t0 + 6056U);
    t2 = *((char **)t1);
    t1 = (t0 + 35824);
    t9 = 1;
    if (2U == 2U)
        goto LAB50;

LAB51:    t9 = 0;

LAB52:    if (t9 == 1)
        goto LAB47;

LAB48:    t6 = (t0 + 6056U);
    t7 = *((char **)t6);
    t6 = (t0 + 35826);
    t13 = 1;
    if (2U == 2U)
        goto LAB56;

LAB57:    t13 = 0;

LAB58:    t8 = t13;

LAB49:    if (t8 != 0)
        goto LAB44;

LAB46:    xsi_set_current_line(464, ng0);
    t1 = (t0 + 23544);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);

LAB45:    goto LAB2;

LAB9:    xsi_set_current_line(468, ng0);
    t1 = (t0 + 23800);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(469, ng0);
    t1 = (t0 + 6376U);
    t2 = *((char **)t1);
    t1 = (t0 + 9576U);
    t3 = *((char **)t1);
    t10 = *((int *)t3);
    t22 = (t10 - 4);
    t11 = (t22 * -1);
    xsi_vhdl_check_range_of_index(4, 0, -1, t10);
    t14 = (1U * t11);
    t23 = (0 + t14);
    t1 = (t2 + t23);
    t8 = *((unsigned char *)t1);
    t4 = (t0 + 23544);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t12 = *((char **)t7);
    *((unsigned char *)t12) = t8;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(471, ng0);
    t1 = (t0 + 9576U);
    t2 = *((char **)t1);
    t10 = *((int *)t2);
    t8 = (t10 == 0);
    if (t8 != 0)
        goto LAB62;

LAB64:
LAB63:    goto LAB2;

LAB10:    xsi_set_current_line(479, ng0);
    t1 = (t0 + 23800);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(480, ng0);
    t1 = (t0 + 6536U);
    t2 = *((char **)t1);
    t1 = (t0 + 9576U);
    t3 = *((char **)t1);
    t10 = *((int *)t3);
    t22 = (t10 - 4);
    t11 = (t22 * -1);
    xsi_vhdl_check_range_of_index(4, 0, -1, t10);
    t14 = (1U * t11);
    t23 = (0 + t14);
    t1 = (t2 + t23);
    t8 = *((unsigned char *)t1);
    t4 = (t0 + 23544);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t12 = *((char **)t7);
    *((unsigned char *)t12) = t8;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(482, ng0);
    t1 = (t0 + 9576U);
    t2 = *((char **)t1);
    t10 = *((int *)t2);
    t8 = (t10 == 0);
    if (t8 != 0)
        goto LAB65;

LAB67:
LAB66:    goto LAB2;

LAB11:    xsi_set_current_line(488, ng0);
    t1 = (t0 + 23544);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(489, ng0);
    t1 = (t0 + 23928);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)7;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(492, ng0);
    t1 = (t0 + 6056U);
    t2 = *((char **)t1);
    t1 = (t0 + 35828);
    t9 = 1;
    if (2U == 2U)
        goto LAB74;

LAB75:    t9 = 0;

LAB76:    if (t9 == 1)
        goto LAB71;

LAB72:    t6 = (t0 + 6056U);
    t7 = *((char **)t6);
    t6 = (t0 + 35830);
    t13 = 1;
    if (2U == 2U)
        goto LAB80;

LAB81:    t13 = 0;

LAB82:    t8 = t13;

LAB73:    if (t8 != 0)
        goto LAB68;

LAB70:    xsi_set_current_line(496, ng0);
    t1 = (t0 + 23864);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB69:    goto LAB2;

LAB12:    xsi_set_current_line(500, ng0);
    t1 = (t0 + 23544);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(502, ng0);
    t1 = (t0 + 23992);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((int *)t5) = 15;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(503, ng0);
    t1 = (t0 + 23736);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(505, ng0);
    t1 = (t0 + 6056U);
    t2 = *((char **)t1);
    t1 = (t0 + 35832);
    t9 = 1;
    if (2U == 2U)
        goto LAB92;

LAB93:    t9 = 0;

LAB94:    if (t9 == 1)
        goto LAB89;

LAB90:    t6 = (t0 + 6056U);
    t7 = *((char **)t6);
    t6 = (t0 + 35834);
    t13 = 1;
    if (2U == 2U)
        goto LAB98;

LAB99:    t13 = 0;

LAB100:    t8 = t13;

LAB91:    if (t8 != 0)
        goto LAB86;

LAB88:    xsi_set_current_line(510, ng0);
    t1 = (t0 + 23928);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)11;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(511, ng0);
    t1 = (t0 + 23864);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);

LAB87:    goto LAB2;

LAB13:    xsi_set_current_line(515, ng0);
    t1 = (t0 + 23800);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(517, ng0);
    t1 = (t0 + 6696U);
    t2 = *((char **)t1);
    t1 = (t0 + 9576U);
    t3 = *((char **)t1);
    t10 = *((int *)t3);
    t22 = (t10 - 15);
    t11 = (t22 * -1);
    xsi_vhdl_check_range_of_index(15, 0, -1, t10);
    t14 = (1U * t11);
    t23 = (0 + t14);
    t1 = (t2 + t23);
    t8 = *((unsigned char *)t1);
    t4 = (t0 + 23544);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t12 = *((char **)t7);
    *((unsigned char *)t12) = t8;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(519, ng0);
    t1 = (t0 + 9576U);
    t2 = *((char **)t1);
    t10 = *((int *)t2);
    t8 = (t10 == 0);
    if (t8 != 0)
        goto LAB104;

LAB106:
LAB105:    goto LAB2;

LAB14:    xsi_set_current_line(525, ng0);
    t1 = (t0 + 23800);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(526, ng0);
    t1 = (t0 + 23864);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(528, ng0);
    t1 = (t0 + 9576U);
    t2 = *((char **)t1);
    t10 = *((int *)t2);
    t22 = (t10 - 15);
    t11 = (t22 * -1);
    t14 = (1 * t11);
    t23 = (0U + t14);
    t1 = (t0 + 23608);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, t23, 1, 0LL);
    xsi_set_current_line(530, ng0);
    t1 = (t0 + 9576U);
    t2 = *((char **)t1);
    t10 = *((int *)t2);
    t8 = (t10 == 0);
    if (t8 != 0)
        goto LAB107;

LAB109:
LAB108:    goto LAB2;

LAB15:    xsi_set_current_line(536, ng0);
    t1 = (t0 + 23544);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(537, ng0);
    t1 = (t0 + 23864);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(538, ng0);
    t1 = (t0 + 23928);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(540, ng0);
    t1 = (t0 + 23672);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB16:    xsi_set_current_line(543, ng0);
    t1 = (t0 + 23928);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB17:    xsi_set_current_line(422, ng0);
    t1 = (t0 + 23992);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((int *)t6) = 31;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(423, ng0);
    t1 = (t0 + 23928);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB18;

LAB20:    xsi_set_current_line(430, ng0);
    t1 = (t0 + 23928);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(431, ng0);
    t1 = (t0 + 23800);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB21;

LAB23:    xsi_set_current_line(440, ng0);
    t1 = (t0 + 23544);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB24;

LAB26:    xsi_set_current_line(450, ng0);
    t17 = (t0 + 23544);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)3;
    xsi_driver_first_trans_fast(t17);
    goto LAB27;

LAB29:    t8 = (unsigned char)1;
    goto LAB31;

LAB32:    t11 = 0;

LAB35:    if (t11 < 2U)
        goto LAB36;
    else
        goto LAB34;

LAB36:    t4 = (t2 + t11);
    t5 = (t1 + t11);
    if (*((unsigned char *)t4) != *((unsigned char *)t5))
        goto LAB33;

LAB37:    t11 = (t11 + 1);
    goto LAB35;

LAB38:    t14 = 0;

LAB41:    if (t14 < 2U)
        goto LAB42;
    else
        goto LAB40;

LAB42:    t15 = (t7 + t14);
    t16 = (t6 + t14);
    if (*((unsigned char *)t15) != *((unsigned char *)t16))
        goto LAB39;

LAB43:    t14 = (t14 + 1);
    goto LAB41;

LAB44:    xsi_set_current_line(462, ng0);
    t17 = (t0 + 23544);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)2;
    xsi_driver_first_trans_fast(t17);
    goto LAB45;

LAB47:    t8 = (unsigned char)1;
    goto LAB49;

LAB50:    t11 = 0;

LAB53:    if (t11 < 2U)
        goto LAB54;
    else
        goto LAB52;

LAB54:    t4 = (t2 + t11);
    t5 = (t1 + t11);
    if (*((unsigned char *)t4) != *((unsigned char *)t5))
        goto LAB51;

LAB55:    t11 = (t11 + 1);
    goto LAB53;

LAB56:    t14 = 0;

LAB59:    if (t14 < 2U)
        goto LAB60;
    else
        goto LAB58;

LAB60:    t15 = (t7 + t14);
    t16 = (t6 + t14);
    if (*((unsigned char *)t15) != *((unsigned char *)t16))
        goto LAB57;

LAB61:    t14 = (t14 + 1);
    goto LAB59;

LAB62:    xsi_set_current_line(472, ng0);
    t1 = (t0 + 23928);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)9;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(474, ng0);
    t1 = (t0 + 23992);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((int *)t5) = 4;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(475, ng0);
    t1 = (t0 + 23736);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB63;

LAB65:    xsi_set_current_line(483, ng0);
    t1 = (t0 + 23928);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)6;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(484, ng0);
    t1 = (t0 + 23800);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB66;

LAB68:    xsi_set_current_line(494, ng0);
    t17 = (t0 + 23864);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)3;
    xsi_driver_first_trans_fast(t17);
    goto LAB69;

LAB71:    t8 = (unsigned char)1;
    goto LAB73;

LAB74:    t11 = 0;

LAB77:    if (t11 < 2U)
        goto LAB78;
    else
        goto LAB76;

LAB78:    t4 = (t2 + t11);
    t5 = (t1 + t11);
    if (*((unsigned char *)t4) != *((unsigned char *)t5))
        goto LAB75;

LAB79:    t11 = (t11 + 1);
    goto LAB77;

LAB80:    t14 = 0;

LAB83:    if (t14 < 2U)
        goto LAB84;
    else
        goto LAB82;

LAB84:    t15 = (t7 + t14);
    t16 = (t6 + t14);
    if (*((unsigned char *)t15) != *((unsigned char *)t16))
        goto LAB81;

LAB85:    t14 = (t14 + 1);
    goto LAB83;

LAB86:    xsi_set_current_line(507, ng0);
    t17 = (t0 + 23928);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)10;
    xsi_driver_first_trans_fast(t17);
    xsi_set_current_line(508, ng0);
    t1 = (t0 + 23864);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB87;

LAB89:    t8 = (unsigned char)1;
    goto LAB91;

LAB92:    t11 = 0;

LAB95:    if (t11 < 2U)
        goto LAB96;
    else
        goto LAB94;

LAB96:    t4 = (t2 + t11);
    t5 = (t1 + t11);
    if (*((unsigned char *)t4) != *((unsigned char *)t5))
        goto LAB93;

LAB97:    t11 = (t11 + 1);
    goto LAB95;

LAB98:    t14 = 0;

LAB101:    if (t14 < 2U)
        goto LAB102;
    else
        goto LAB100;

LAB102:    t15 = (t7 + t14);
    t16 = (t6 + t14);
    if (*((unsigned char *)t15) != *((unsigned char *)t16))
        goto LAB99;

LAB103:    t14 = (t14 + 1);
    goto LAB101;

LAB104:    xsi_set_current_line(520, ng0);
    t1 = (t0 + 23928);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)12;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(521, ng0);
    t1 = (t0 + 23800);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB105;

LAB107:    xsi_set_current_line(531, ng0);
    t1 = (t0 + 23928);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)12;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(532, ng0);
    t1 = (t0 + 23800);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB108;

}


extern void nf10_mdio_v1_00_a_a_3079673650_3306564128_init()
{
	static char *pe[] = {(void *)nf10_mdio_v1_00_a_a_3079673650_3306564128_p_0,(void *)nf10_mdio_v1_00_a_a_3079673650_3306564128_p_1,(void *)nf10_mdio_v1_00_a_a_3079673650_3306564128_p_2,(void *)nf10_mdio_v1_00_a_a_3079673650_3306564128_p_3,(void *)nf10_mdio_v1_00_a_a_3079673650_3306564128_p_4,(void *)nf10_mdio_v1_00_a_a_3079673650_3306564128_p_5,(void *)nf10_mdio_v1_00_a_a_3079673650_3306564128_p_6,(void *)nf10_mdio_v1_00_a_a_3079673650_3306564128_p_7,(void *)nf10_mdio_v1_00_a_a_3079673650_3306564128_p_8,(void *)nf10_mdio_v1_00_a_a_3079673650_3306564128_p_9,(void *)nf10_mdio_v1_00_a_a_3079673650_3306564128_p_10,(void *)nf10_mdio_v1_00_a_a_3079673650_3306564128_p_11,(void *)nf10_mdio_v1_00_a_a_3079673650_3306564128_p_12,(void *)nf10_mdio_v1_00_a_a_3079673650_3306564128_p_13,(void *)nf10_mdio_v1_00_a_a_3079673650_3306564128_p_14,(void *)nf10_mdio_v1_00_a_a_3079673650_3306564128_p_15,(void *)nf10_mdio_v1_00_a_a_3079673650_3306564128_p_16,(void *)nf10_mdio_v1_00_a_a_3079673650_3306564128_p_17,(void *)nf10_mdio_v1_00_a_a_3079673650_3306564128_p_18,(void *)nf10_mdio_v1_00_a_a_3079673650_3306564128_p_19,(void *)nf10_mdio_v1_00_a_a_3079673650_3306564128_p_20,(void *)nf10_mdio_v1_00_a_a_3079673650_3306564128_p_21,(void *)nf10_mdio_v1_00_a_a_3079673650_3306564128_p_22,(void *)nf10_mdio_v1_00_a_a_3079673650_3306564128_p_23,(void *)nf10_mdio_v1_00_a_a_3079673650_3306564128_p_24,(void *)nf10_mdio_v1_00_a_a_3079673650_3306564128_p_25,(void *)nf10_mdio_v1_00_a_a_3079673650_3306564128_p_26,(void *)nf10_mdio_v1_00_a_a_3079673650_3306564128_p_27,(void *)nf10_mdio_v1_00_a_a_3079673650_3306564128_p_28};
	xsi_register_didat("nf10_mdio_v1_00_a_a_3079673650_3306564128", "isim/isim_system_axisim.sim/nf10_mdio_v1_00_a/a_3079673650_3306564128.didat");
	xsi_register_executes(pe);
}
