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
static const char *ng0 = "/root/NetFPGA-10G-live/lib/hw/xilinx/pcores/microblaze_v8_00_b/hdl/vhdl/carry_equal.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_3488768496604610246_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_3496108612141461530_503743352(char *, unsigned char , unsigned char );


static void microblaze_v8_00_b_a_1109072940_3306564128_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(127, ng0);
    t1 = xsi_get_transient_memory(9U);
    memset(t1, 0, 9U);
    t2 = t1;
    memset(t2, (unsigned char)3, 9U);
    t3 = (t0 + 8160);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 9U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(128, ng0);
    t1 = (t0 + 1824U);
    t2 = *((char **)t1);
    t1 = (t0 + 8160);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_delta(t1, 0U, 8U, 0LL);
    xsi_set_current_line(129, ng0);
    t1 = xsi_get_transient_memory(9U);
    memset(t1, 0, 9U);
    t2 = t1;
    memset(t2, (unsigned char)3, 9U);
    t3 = (t0 + 8224);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 9U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(130, ng0);
    t1 = (t0 + 1984U);
    t2 = *((char **)t1);
    t1 = (t0 + 8224);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_delta(t1, 0U, 8U, 0LL);
    t1 = (t0 + 8016);
    *((int *)t1) = 1;

LAB1:    return;
}

static void microblaze_v8_00_b_a_1109072940_3306564128_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(133, ng0);

LAB3:    t1 = (t0 + 8288);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 3U, 1, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void microblaze_v8_00_b_a_1109072940_3306564128_p_2(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    int t4;
    char *t5;
    int t6;
    int t7;
    char *t8;
    char *t9;
    unsigned char t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned char t24;
    char *t25;
    char *t26;
    char *t27;
    int t28;
    char *t29;
    int t30;
    int t31;
    int t32;
    int t33;
    int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned char t39;
    unsigned char t40;
    unsigned char t41;
    char *t42;
    char *t43;

LAB0:    xsi_set_current_line(141, ng0);
    t1 = (t0 + 5000U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)3;
    xsi_set_current_line(142, ng0);
    t1 = (t0 + 4760U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t4 = (t3 - 1);
    t1 = (t0 + 14378);
    *((int *)t1) = t4;
    t5 = (t0 + 14382);
    *((int *)t5) = 0;
    t6 = t4;
    t7 = 0;

LAB2:    if (t6 >= t7)
        goto LAB3;

LAB5:    xsi_set_current_line(145, ng0);
    t1 = (t0 + 5000U);
    t2 = *((char **)t1);
    t10 = *((unsigned char *)t2);
    t1 = (t0 + 8352);
    t5 = (t1 + 56U);
    t8 = *((char **)t5);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    *((unsigned char *)t11) = t10;
    xsi_driver_first_trans_delta(t1, 2U, 1, 0LL);
    t1 = (t0 + 8032);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(143, ng0);
    t8 = (t0 + 5000U);
    t9 = *((char **)t8);
    t10 = *((unsigned char *)t9);
    t8 = (t0 + 3104U);
    t11 = *((char **)t8);
    t8 = (t0 + 4760U);
    t12 = *((char **)t8);
    t13 = *((int *)t12);
    t8 = (t0 + 4880U);
    t14 = *((char **)t8);
    t15 = *((int *)t14);
    t16 = (t13 * t15);
    t8 = (t0 + 14378);
    t17 = *((int *)t8);
    t18 = (t16 + t17);
    t19 = (t18 - 0);
    t20 = (t19 * 1);
    xsi_vhdl_check_range_of_index(0, 8, 1, t18);
    t21 = (1U * t20);
    t22 = (0 + t21);
    t23 = (t11 + t22);
    t24 = *((unsigned char *)t23);
    t25 = (t0 + 3264U);
    t26 = *((char **)t25);
    t25 = (t0 + 4760U);
    t27 = *((char **)t25);
    t28 = *((int *)t27);
    t25 = (t0 + 4880U);
    t29 = *((char **)t25);
    t30 = *((int *)t29);
    t31 = (t28 * t30);
    t25 = (t0 + 14378);
    t32 = *((int *)t25);
    t33 = (t31 + t32);
    t34 = (t33 - 0);
    t35 = (t34 * 1);
    xsi_vhdl_check_range_of_index(0, 8, 1, t33);
    t36 = (1U * t35);
    t37 = (0 + t36);
    t38 = (t26 + t37);
    t39 = *((unsigned char *)t38);
    t40 = ieee_p_2592010699_sub_3496108612141461530_503743352(IEEE_P_2592010699, t24, t39);
    t41 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t10, t40);
    t42 = (t0 + 5000U);
    t43 = *((char **)t42);
    t42 = (t43 + 0);
    *((unsigned char *)t42) = t41;

LAB4:    t1 = (t0 + 14378);
    t6 = *((int *)t1);
    t2 = (t0 + 14382);
    t7 = *((int *)t2);
    if (t6 == t7)
        goto LAB5;

LAB6:    t3 = (t6 + -1);
    t6 = t3;
    t5 = (t0 + 14378);
    *((int *)t5) = t6;
    goto LAB2;

}

static void microblaze_v8_00_b_a_1109072940_3306564128_p_3(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    int t4;
    char *t5;
    int t6;
    int t7;
    char *t8;
    char *t9;
    unsigned char t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned char t24;
    char *t25;
    char *t26;
    char *t27;
    int t28;
    char *t29;
    int t30;
    int t31;
    int t32;
    int t33;
    int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned char t39;
    unsigned char t40;
    unsigned char t41;
    char *t42;
    char *t43;

LAB0:    xsi_set_current_line(141, ng0);
    t1 = (t0 + 5240U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)3;
    xsi_set_current_line(142, ng0);
    t1 = (t0 + 4760U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t4 = (t3 - 1);
    t1 = (t0 + 14386);
    *((int *)t1) = t4;
    t5 = (t0 + 14390);
    *((int *)t5) = 0;
    t6 = t4;
    t7 = 0;

LAB2:    if (t6 >= t7)
        goto LAB3;

LAB5:    xsi_set_current_line(145, ng0);
    t1 = (t0 + 5240U);
    t2 = *((char **)t1);
    t10 = *((unsigned char *)t2);
    t1 = (t0 + 8416);
    t5 = (t1 + 56U);
    t8 = *((char **)t5);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    *((unsigned char *)t11) = t10;
    xsi_driver_first_trans_delta(t1, 1U, 1, 0LL);
    t1 = (t0 + 8048);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(143, ng0);
    t8 = (t0 + 5240U);
    t9 = *((char **)t8);
    t10 = *((unsigned char *)t9);
    t8 = (t0 + 3104U);
    t11 = *((char **)t8);
    t8 = (t0 + 4760U);
    t12 = *((char **)t8);
    t13 = *((int *)t12);
    t8 = (t0 + 5120U);
    t14 = *((char **)t8);
    t15 = *((int *)t14);
    t16 = (t13 * t15);
    t8 = (t0 + 14386);
    t17 = *((int *)t8);
    t18 = (t16 + t17);
    t19 = (t18 - 0);
    t20 = (t19 * 1);
    xsi_vhdl_check_range_of_index(0, 8, 1, t18);
    t21 = (1U * t20);
    t22 = (0 + t21);
    t23 = (t11 + t22);
    t24 = *((unsigned char *)t23);
    t25 = (t0 + 3264U);
    t26 = *((char **)t25);
    t25 = (t0 + 4760U);
    t27 = *((char **)t25);
    t28 = *((int *)t27);
    t25 = (t0 + 5120U);
    t29 = *((char **)t25);
    t30 = *((int *)t29);
    t31 = (t28 * t30);
    t25 = (t0 + 14386);
    t32 = *((int *)t25);
    t33 = (t31 + t32);
    t34 = (t33 - 0);
    t35 = (t34 * 1);
    xsi_vhdl_check_range_of_index(0, 8, 1, t33);
    t36 = (1U * t35);
    t37 = (0 + t36);
    t38 = (t26 + t37);
    t39 = *((unsigned char *)t38);
    t40 = ieee_p_2592010699_sub_3496108612141461530_503743352(IEEE_P_2592010699, t24, t39);
    t41 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t10, t40);
    t42 = (t0 + 5240U);
    t43 = *((char **)t42);
    t42 = (t43 + 0);
    *((unsigned char *)t42) = t41;

LAB4:    t1 = (t0 + 14386);
    t6 = *((int *)t1);
    t2 = (t0 + 14390);
    t7 = *((int *)t2);
    if (t6 == t7)
        goto LAB5;

LAB6:    t3 = (t6 + -1);
    t6 = t3;
    t5 = (t0 + 14386);
    *((int *)t5) = t6;
    goto LAB2;

}

static void microblaze_v8_00_b_a_1109072940_3306564128_p_4(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    int t4;
    char *t5;
    int t6;
    int t7;
    char *t8;
    char *t9;
    unsigned char t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned char t24;
    char *t25;
    char *t26;
    char *t27;
    int t28;
    char *t29;
    int t30;
    int t31;
    int t32;
    int t33;
    int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned char t39;
    unsigned char t40;
    unsigned char t41;
    char *t42;
    char *t43;

LAB0:    xsi_set_current_line(141, ng0);
    t1 = (t0 + 5480U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)3;
    xsi_set_current_line(142, ng0);
    t1 = (t0 + 4760U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t4 = (t3 - 1);
    t1 = (t0 + 14394);
    *((int *)t1) = t4;
    t5 = (t0 + 14398);
    *((int *)t5) = 0;
    t6 = t4;
    t7 = 0;

LAB2:    if (t6 >= t7)
        goto LAB3;

LAB5:    xsi_set_current_line(145, ng0);
    t1 = (t0 + 5480U);
    t2 = *((char **)t1);
    t10 = *((unsigned char *)t2);
    t1 = (t0 + 8480);
    t5 = (t1 + 56U);
    t8 = *((char **)t5);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    *((unsigned char *)t11) = t10;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    t1 = (t0 + 8064);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(143, ng0);
    t8 = (t0 + 5480U);
    t9 = *((char **)t8);
    t10 = *((unsigned char *)t9);
    t8 = (t0 + 3104U);
    t11 = *((char **)t8);
    t8 = (t0 + 4760U);
    t12 = *((char **)t8);
    t13 = *((int *)t12);
    t8 = (t0 + 5360U);
    t14 = *((char **)t8);
    t15 = *((int *)t14);
    t16 = (t13 * t15);
    t8 = (t0 + 14394);
    t17 = *((int *)t8);
    t18 = (t16 + t17);
    t19 = (t18 - 0);
    t20 = (t19 * 1);
    xsi_vhdl_check_range_of_index(0, 8, 1, t18);
    t21 = (1U * t20);
    t22 = (0 + t21);
    t23 = (t11 + t22);
    t24 = *((unsigned char *)t23);
    t25 = (t0 + 3264U);
    t26 = *((char **)t25);
    t25 = (t0 + 4760U);
    t27 = *((char **)t25);
    t28 = *((int *)t27);
    t25 = (t0 + 5360U);
    t29 = *((char **)t25);
    t30 = *((int *)t29);
    t31 = (t28 * t30);
    t25 = (t0 + 14394);
    t32 = *((int *)t25);
    t33 = (t31 + t32);
    t34 = (t33 - 0);
    t35 = (t34 * 1);
    xsi_vhdl_check_range_of_index(0, 8, 1, t33);
    t36 = (1U * t35);
    t37 = (0 + t36);
    t38 = (t26 + t37);
    t39 = *((unsigned char *)t38);
    t40 = ieee_p_2592010699_sub_3496108612141461530_503743352(IEEE_P_2592010699, t24, t39);
    t41 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t10, t40);
    t42 = (t0 + 5480U);
    t43 = *((char **)t42);
    t42 = (t43 + 0);
    *((unsigned char *)t42) = t41;

LAB4:    t1 = (t0 + 14394);
    t6 = *((int *)t1);
    t2 = (t0 + 14398);
    t7 = *((int *)t2);
    if (t6 == t7)
        goto LAB5;

LAB6:    t3 = (t6 + -1);
    t6 = t3;
    t5 = (t0 + 14394);
    *((int *)t5) = t6;
    goto LAB2;

}

static void microblaze_v8_00_b_a_1109072940_3306564128_p_5(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(164, ng0);

LAB3:    t1 = (t0 + 3424U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 8544);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 8080);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void microblaze_v8_00_b_a_1109072940_3306564128_init()
{
	static char *pe[] = {(void *)microblaze_v8_00_b_a_1109072940_3306564128_p_0,(void *)microblaze_v8_00_b_a_1109072940_3306564128_p_1,(void *)microblaze_v8_00_b_a_1109072940_3306564128_p_2,(void *)microblaze_v8_00_b_a_1109072940_3306564128_p_3,(void *)microblaze_v8_00_b_a_1109072940_3306564128_p_4,(void *)microblaze_v8_00_b_a_1109072940_3306564128_p_5};
	xsi_register_didat("microblaze_v8_00_b_a_1109072940_3306564128", "isim/isim_system_axisim.sim/microblaze_v8_00_b/a_1109072940_3306564128.didat");
	xsi_register_executes(pe);
}
