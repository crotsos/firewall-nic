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
extern char *IEEE_P_2592010699;
static const char *ng1 = "Function check_parity ended without a return statement";
static const char *ng2 = "/opt/Xilinx/13.4/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/emc_common_v5_01_a/hdl/vhdl/mem_steer.vhd";

char *ieee_p_2592010699_sub_16439989832805790689_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_207919886985903570_503743352(char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_3488546069778340532_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_3488768496604610246_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_3488768497506413324_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_374109322130769762_503743352(char *, unsigned char );


char *emc_common_v5_01_a_a_1319063213_3306564128_sub_16272772600186126164_229454594(char *t1, char *t2, char *t3, char *t4, unsigned char t5)
{
    char t6[128];
    char t7[24];
    char t10[16];
    char t38[16];
    char *t0;
    char *t8;
    unsigned int t9;
    char *t11;
    int t12;
    char *t13;
    int t14;
    char *t15;
    int t16;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned char t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned int t37;

LAB0:    t8 = (t4 + 12U);
    t9 = *((unsigned int *)t8);
    t9 = (t9 * 1U);
    t11 = (t4 + 0U);
    t12 = *((int *)t11);
    t13 = (t4 + 4U);
    t14 = *((int *)t13);
    t15 = (t4 + 8U);
    t16 = *((int *)t15);
    t17 = (t10 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = t12;
    t18 = (t17 + 4U);
    *((int *)t18) = t14;
    t18 = (t17 + 8U);
    *((int *)t18) = t16;
    t19 = (t14 - t12);
    t20 = (t19 * t16);
    t20 = (t20 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t20;
    t18 = (t6 + 4U);
    t21 = ((IEEE_P_2592010699) + 4000);
    t22 = (t18 + 88U);
    *((char **)t22) = t21;
    t23 = (char *)alloca(t9);
    t24 = (t18 + 56U);
    *((char **)t24) = t23;
    xsi_type_set_default_value(t21, t23, t10);
    t25 = (t18 + 64U);
    *((char **)t25) = t10;
    t26 = (t18 + 80U);
    *((unsigned int *)t26) = t9;
    t27 = (t7 + 4U);
    t28 = (t3 != 0);
    if (t28 == 1)
        goto LAB3;

LAB2:    t29 = (t7 + 12U);
    *((char **)t29) = t4;
    t30 = (t7 + 20U);
    *((unsigned char *)t30) = t5;
    t31 = (t10 + 12U);
    t20 = *((unsigned int *)t31);
    t20 = (t20 * 1U);
    t32 = xsi_get_transient_memory(t20);
    memset(t32, 0, t20);
    t33 = t32;
    memset(t33, t5, t20);
    t34 = (t18 + 56U);
    t35 = *((char **)t34);
    t34 = (t35 + 0);
    t36 = (t10 + 12U);
    t37 = *((unsigned int *)t36);
    t37 = (t37 * 1U);
    memcpy(t34, t32, t37);
    t8 = (t18 + 56U);
    t11 = *((char **)t8);
    t8 = ieee_p_2592010699_sub_16439989832805790689_503743352(IEEE_P_2592010699, t38, t3, t4, t11, t10);
    t13 = (t38 + 12U);
    t9 = *((unsigned int *)t13);
    t20 = (1U * t9);
    t0 = xsi_get_transient_memory(t20);
    memcpy(t0, t8, t20);
    t15 = (t38 + 0U);
    t12 = *((int *)t15);
    t17 = (t38 + 4U);
    t14 = *((int *)t17);
    t21 = (t38 + 8U);
    t16 = *((int *)t21);
    t22 = (t2 + 0U);
    t24 = (t22 + 0U);
    *((int *)t24) = t12;
    t24 = (t22 + 4U);
    *((int *)t24) = t14;
    t24 = (t22 + 8U);
    *((int *)t24) = t16;
    t19 = (t14 - t12);
    t37 = (t19 * t16);
    t37 = (t37 + 1);
    t24 = (t22 + 12U);
    *((unsigned int *)t24) = t37;

LAB1:    return t0;
LAB3:    *((char **)t27) = t3;
    goto LAB2;

LAB4:;
}

unsigned char emc_common_v5_01_a_a_1319063213_3306564128_sub_4369197797187886665_229454594(char *t1, char *t2, unsigned char t3)
{
    char t4[128];
    char t5[24];
    char t6[16];
    char t13[8];
    unsigned char t0;
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
    unsigned char t17;
    char *t18;
    char *t19;
    unsigned char t20;
    char *t21;
    char *t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned char t30;
    unsigned char t31;

LAB0:    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 7;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t9 = (7 - 0);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t8 = (t4 + 4U);
    t11 = ((IEEE_P_2592010699) + 3312);
    t12 = (t8 + 88U);
    *((char **)t12) = t11;
    t14 = (t8 + 56U);
    *((char **)t14) = t13;
    xsi_type_set_default_value(t11, t13, 0);
    t15 = (t8 + 80U);
    *((unsigned int *)t15) = 1U;
    t16 = (t5 + 4U);
    t17 = (t2 != 0);
    if (t17 == 1)
        goto LAB3;

LAB2:    t18 = (t5 + 12U);
    *((char **)t18) = t6;
    t19 = (t5 + 20U);
    *((unsigned char *)t19) = t3;
    t20 = (t3 == (unsigned char)2);
    if (t20 != 0)
        goto LAB4;

LAB6:    t17 = (t3 == (unsigned char)3);
    if (t17 != 0)
        goto LAB12;

LAB13:    t7 = (t8 + 56U);
    t11 = *((char **)t7);
    t7 = (t11 + 0);
    *((unsigned char *)t7) = (unsigned char)2;

LAB5:    t7 = (t8 + 56U);
    t11 = *((char **)t7);
    t17 = *((unsigned char *)t11);
    t0 = t17;

LAB1:    return t0;
LAB3:    *((char **)t16) = t2;
    goto LAB2;

LAB4:    t21 = (t8 + 56U);
    t22 = *((char **)t21);
    t21 = (t22 + 0);
    *((unsigned char *)t21) = (unsigned char)2;
    t9 = 0;
    t23 = 7;

LAB7:    if (t9 <= t23)
        goto LAB8;

LAB10:    goto LAB5;

LAB8:    t7 = (t8 + 56U);
    t11 = *((char **)t7);
    t17 = *((unsigned char *)t11);
    t7 = (t6 + 0U);
    t24 = *((int *)t7);
    t12 = (t6 + 8U);
    t25 = *((int *)t12);
    t26 = (t9 - t24);
    t10 = (t26 * t25);
    t14 = (t6 + 4U);
    t27 = *((int *)t14);
    xsi_vhdl_check_range_of_index(t24, t27, t25, t9);
    t28 = (1U * t10);
    t29 = (0 + t28);
    t15 = (t2 + t29);
    t20 = *((unsigned char *)t15);
    t30 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t17, t20);
    t21 = (t8 + 56U);
    t22 = *((char **)t21);
    t21 = (t22 + 0);
    *((unsigned char *)t21) = t30;

LAB9:    if (t9 == t23)
        goto LAB10;

LAB11:    t24 = (t9 + 1);
    t9 = t24;
    goto LAB7;

LAB12:    t7 = (t8 + 56U);
    t11 = *((char **)t7);
    t7 = (t11 + 0);
    *((unsigned char *)t7) = (unsigned char)3;
    t9 = 0;
    t23 = 7;

LAB14:    if (t9 <= t23)
        goto LAB15;

LAB17:    goto LAB5;

LAB15:    t7 = (t8 + 56U);
    t11 = *((char **)t7);
    t17 = *((unsigned char *)t11);
    t7 = (t6 + 0U);
    t24 = *((int *)t7);
    t12 = (t6 + 8U);
    t25 = *((int *)t12);
    t26 = (t9 - t24);
    t10 = (t26 * t25);
    t14 = (t6 + 4U);
    t27 = *((int *)t14);
    xsi_vhdl_check_range_of_index(t24, t27, t25, t9);
    t28 = (1U * t10);
    t29 = (0 + t28);
    t15 = (t2 + t29);
    t20 = *((unsigned char *)t15);
    t30 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t17, t20);
    t31 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t30);
    t21 = (t8 + 56U);
    t22 = *((char **)t21);
    t21 = (t22 + 0);
    *((unsigned char *)t21) = t31;

LAB16:    if (t9 == t23)
        goto LAB17;

LAB18:    t24 = (t9 + 1);
    t9 = t24;
    goto LAB14;

LAB19:;
}

unsigned char emc_common_v5_01_a_a_1319063213_3306564128_sub_237575211164114427_229454594(char *t1, char *t2, unsigned char t3, unsigned char t4)
{
    char t5[248];
    char t6[24];
    char t7[16];
    char t14[8];
    char t20[8];
    unsigned char t0;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t21;
    char *t22;
    char *t23;
    unsigned char t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned char t28;
    char *t29;
    char *t30;
    int t31;
    int t32;
    int t33;
    int t34;
    int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned char t38;
    unsigned char t39;

LAB0:    t8 = (t7 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 7;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t10 = (7 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t11;
    t9 = (t5 + 4U);
    t12 = ((IEEE_P_2592010699) + 3312);
    t13 = (t9 + 88U);
    *((char **)t13) = t12;
    t15 = (t9 + 56U);
    *((char **)t15) = t14;
    xsi_type_set_default_value(t12, t14, 0);
    t16 = (t9 + 80U);
    *((unsigned int *)t16) = 1U;
    t17 = (t5 + 124U);
    t18 = ((IEEE_P_2592010699) + 3312);
    t19 = (t17 + 88U);
    *((char **)t19) = t18;
    t21 = (t17 + 56U);
    *((char **)t21) = t20;
    xsi_type_set_default_value(t18, t20, 0);
    t22 = (t17 + 80U);
    *((unsigned int *)t22) = 1U;
    t23 = (t6 + 4U);
    t24 = (t2 != 0);
    if (t24 == 1)
        goto LAB3;

LAB2:    t25 = (t6 + 12U);
    *((char **)t25) = t7;
    t26 = (t6 + 20U);
    *((unsigned char *)t26) = t3;
    t27 = (t6 + 21U);
    *((unsigned char *)t27) = t4;
    t28 = (t4 == (unsigned char)2);
    if (t28 != 0)
        goto LAB4;

LAB6:    t24 = (t4 == (unsigned char)3);
    if (t24 != 0)
        goto LAB12;

LAB13:    t8 = (t17 + 56U);
    t12 = *((char **)t8);
    t8 = (t12 + 0);
    *((unsigned char *)t8) = (unsigned char)2;

LAB5:    t8 = (t17 + 56U);
    t12 = *((char **)t8);
    t24 = *((unsigned char *)t12);
    t28 = (t3 == t24);
    if (t28 != 0)
        goto LAB19;

LAB21:    t0 = (unsigned char)3;

LAB1:    return t0;
LAB3:    *((char **)t23) = t2;
    goto LAB2;

LAB4:    t29 = (t17 + 56U);
    t30 = *((char **)t29);
    t29 = (t30 + 0);
    *((unsigned char *)t29) = (unsigned char)2;
    t10 = 0;
    t31 = 7;

LAB7:    if (t10 <= t31)
        goto LAB8;

LAB10:    goto LAB5;

LAB8:    t8 = (t17 + 56U);
    t12 = *((char **)t8);
    t24 = *((unsigned char *)t12);
    t8 = (t7 + 0U);
    t32 = *((int *)t8);
    t13 = (t7 + 8U);
    t33 = *((int *)t13);
    t34 = (t10 - t32);
    t11 = (t34 * t33);
    t15 = (t7 + 4U);
    t35 = *((int *)t15);
    xsi_vhdl_check_range_of_index(t32, t35, t33, t10);
    t36 = (1U * t11);
    t37 = (0 + t36);
    t16 = (t2 + t37);
    t28 = *((unsigned char *)t16);
    t38 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t24, t28);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t18 = (t19 + 0);
    *((unsigned char *)t18) = t38;

LAB9:    if (t10 == t31)
        goto LAB10;

LAB11:    t32 = (t10 + 1);
    t10 = t32;
    goto LAB7;

LAB12:    t8 = (t17 + 56U);
    t12 = *((char **)t8);
    t8 = (t12 + 0);
    *((unsigned char *)t8) = (unsigned char)3;
    t10 = 0;
    t31 = 7;

LAB14:    if (t10 <= t31)
        goto LAB15;

LAB17:    goto LAB5;

LAB15:    t8 = (t17 + 56U);
    t12 = *((char **)t8);
    t24 = *((unsigned char *)t12);
    t8 = (t7 + 0U);
    t32 = *((int *)t8);
    t13 = (t7 + 8U);
    t33 = *((int *)t13);
    t34 = (t10 - t32);
    t11 = (t34 * t33);
    t15 = (t7 + 4U);
    t35 = *((int *)t15);
    xsi_vhdl_check_range_of_index(t32, t35, t33, t10);
    t36 = (1U * t11);
    t37 = (0 + t36);
    t16 = (t2 + t37);
    t28 = *((unsigned char *)t16);
    t38 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t24, t28);
    t39 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t38);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t18 = (t19 + 0);
    *((unsigned char *)t18) = t39;

LAB16:    if (t10 == t31)
        goto LAB17;

LAB18:    t32 = (t10 + 1);
    t10 = t32;
    goto LAB14;

LAB19:    t0 = (unsigned char)2;
    goto LAB1;

LAB20:    xsi_error(ng1);
    t0 = 0;
    goto LAB1;

LAB22:    goto LAB20;

LAB23:    goto LAB20;

}

static void emc_common_v5_01_a_a_1319063213_3306564128_p_0(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(434, ng2);

LAB3:    t2 = (t0 + 33296U);
    t3 = *((char **)t2);
    t2 = (t0 + 103080U);
    t4 = ieee_p_2592010699_sub_207919886985903570_503743352(IEEE_P_2592010699, t1, t3, t2);
    t5 = (t1 + 12U);
    t6 = *((unsigned int *)t5);
    t7 = (1U * t6);
    t8 = (4U != t7);
    if (t8 == 1)
        goto LAB5;

LAB6:    t9 = (t0 + 55376);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t4, 4U);
    xsi_driver_first_trans_fast_port(t9);

LAB2:    t14 = (t0 + 54880);
    *((int *)t14) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(4U, t7, 0);
    goto LAB6;

}

static void emc_common_v5_01_a_a_1319063213_3306564128_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(435, ng2);

LAB3:    t1 = (t0 + 24656U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 55440);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 54896);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void emc_common_v5_01_a_a_1319063213_3306564128_p_2(char *t0)
{
    char t1[16];
    char t2[16];
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned char t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    xsi_set_current_line(436, ng2);

LAB3:    t3 = (t0 + 33296U);
    t4 = *((char **)t3);
    t3 = (t0 + 103080U);
    t5 = (t0 + 24656U);
    t6 = *((char **)t5);
    t7 = *((unsigned char *)t6);
    t8 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t7);
    t5 = emc_common_v5_01_a_a_1319063213_3306564128_sub_16272772600186126164_229454594(t0, t2, t4, t3, t8);
    t9 = ieee_p_2592010699_sub_207919886985903570_503743352(IEEE_P_2592010699, t1, t5, t2);
    t10 = (t1 + 12U);
    t11 = *((unsigned int *)t10);
    t12 = (1U * t11);
    t13 = (4U != t12);
    if (t13 == 1)
        goto LAB5;

LAB6:    t14 = (t0 + 55504);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t9, 4U);
    xsi_driver_first_trans_fast_port(t14);

LAB2:    t19 = (t0 + 54912);
    *((int *)t19) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(4U, t12, 0);
    goto LAB6;

}

static void emc_common_v5_01_a_a_1319063213_3306564128_p_3(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(437, ng2);

LAB3:    t1 = (t0 + 24656U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 55568);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 54928);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void emc_common_v5_01_a_a_1319063213_3306564128_p_4(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(443, ng2);

LAB3:    t1 = (t0 + 24336U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 55632);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);

LAB2:    t8 = (t0 + 54944);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void emc_common_v5_01_a_a_1319063213_3306564128_p_5(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(447, ng2);

LAB3:    t1 = (t0 + 30736U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 55696);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);

LAB2:    t8 = (t0 + 54960);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void emc_common_v5_01_a_a_1319063213_3306564128_p_6(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(448, ng2);

LAB3:    t1 = (t0 + 30736U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t3);
    t1 = (t0 + 55760);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);

LAB2:    t9 = (t0 + 54976);
    *((int *)t9) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void emc_common_v5_01_a_a_1319063213_3306564128_p_7(char *t0)
{
    char *t1;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(449, ng2);

LAB3:    t1 = (t0 + 104024);
    t3 = (t0 + 55824);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 2U);
    xsi_driver_first_trans_fast_port(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void emc_common_v5_01_a_a_1319063213_3306564128_p_8(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(527, ng2);

LAB3:    t1 = (t0 + 24496U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 55888);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);

LAB2:    t8 = (t0 + 54992);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void emc_common_v5_01_a_a_1319063213_3306564128_p_9(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(535, ng2);

LAB3:    t1 = (t0 + 30896U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 55952);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);

LAB2:    t8 = (t0 + 55008);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void emc_common_v5_01_a_a_1319063213_3306564128_p_10(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(568, ng2);

LAB3:    t1 = (t0 + 29936U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 29616U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t1 = (t0 + 26096U);
    t6 = *((char **)t1);
    t7 = *((unsigned char *)t6);
    t8 = ieee_p_2592010699_sub_3488546069778340532_503743352(IEEE_P_2592010699, t5, t7);
    t9 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t3, t8);
    t1 = (t0 + 56016);
    t10 = (t1 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t9;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t14 = (t0 + 55024);
    *((int *)t14) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void emc_common_v5_01_a_a_1319063213_3306564128_p_11(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(570, ng2);

LAB3:    t1 = (t0 + 29776U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 56080);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 55040);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void emc_common_v5_01_a_a_1319063213_3306564128_p_12(char *t0)
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

LAB0:    xsi_set_current_line(572, ng2);

LAB3:    t1 = (t0 + 23696U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 29456U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 56144);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t11 = (t0 + 55056);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void emc_common_v5_01_a_a_1319063213_3306564128_p_13(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(573, ng2);

LAB3:    t1 = (t0 + 23856U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 56208);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);

LAB2:    t8 = (t0 + 55072);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void emc_common_v5_01_a_a_1319063213_3306564128_p_14(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(574, ng2);

LAB3:    t1 = (t0 + 27216U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 56272);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);

LAB2:    t8 = (t0 + 55088);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void emc_common_v5_01_a_a_1319063213_3306564128_p_15(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(743, ng2);

LAB3:    t1 = (t0 + 23216U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t3);
    t1 = (t0 + 26096U);
    t5 = *((char **)t1);
    t6 = *((unsigned char *)t5);
    t7 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t6);
    t8 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t4, t7);
    t1 = (t0 + 22576U);
    t9 = *((char **)t1);
    t10 = *((unsigned char *)t9);
    t11 = ieee_p_2592010699_sub_3488546069778340532_503743352(IEEE_P_2592010699, t8, t10);
    t1 = (t0 + 56336);
    t12 = (t1 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = t11;
    xsi_driver_first_trans_fast(t1);

LAB2:    t16 = (t0 + 55104);
    *((int *)t16) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void emc_common_v5_01_a_a_1319063213_3306564128_p_16(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(743, ng2);

LAB3:    t1 = (t0 + 23216U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t3);
    t1 = (t0 + 26096U);
    t5 = *((char **)t1);
    t6 = *((unsigned char *)t5);
    t7 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t6);
    t8 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t4, t7);
    t1 = (t0 + 22576U);
    t9 = *((char **)t1);
    t10 = *((unsigned char *)t9);
    t11 = ieee_p_2592010699_sub_3488546069778340532_503743352(IEEE_P_2592010699, t8, t10);
    t1 = (t0 + 56400);
    t12 = (t1 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = t11;
    xsi_driver_first_trans_fast(t1);

LAB2:    t16 = (t0 + 55120);
    *((int *)t16) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void emc_common_v5_01_a_a_1319063213_3306564128_p_17(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(755, ng2);

LAB3:    t1 = (t0 + 56464);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void emc_common_v5_01_a_a_1319063213_3306564128_p_18(char *t0)
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

LAB0:    xsi_set_current_line(780, ng2);

LAB3:    t1 = (t0 + 31056U);
    t2 = *((char **)t1);
    t3 = (2 - 0);
    t4 = (t3 * 1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 56528);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 55136);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void emc_common_v5_01_a_a_1319063213_3306564128_p_19(char *t0)
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

LAB0:    xsi_set_current_line(799, ng2);

LAB3:    t1 = (t0 + 31376U);
    t2 = *((char **)t1);
    t3 = (0 - 0);
    t4 = (t3 * 1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 56592);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast(t8);

LAB2:    t13 = (t0 + 55152);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void emc_common_v5_01_a_a_1319063213_3306564128_p_20(char *t0)
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

LAB0:    xsi_set_current_line(1267, ng2);

LAB3:    t1 = (t0 + 31696U);
    t2 = *((char **)t1);
    t3 = (0 - 0);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 56656);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 32U);
    xsi_driver_first_trans_fast(t6);

LAB2:    t11 = (t0 + 55168);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void emc_common_v5_01_a_a_1319063213_3306564128_p_21(char *t0)
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

LAB0:    xsi_set_current_line(1268, ng2);

LAB3:    t1 = (t0 + 22896U);
    t2 = *((char **)t1);
    t3 = (0 - 0);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 56720);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast(t6);

LAB2:    t11 = (t0 + 55184);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void emc_common_v5_01_a_a_1319063213_3306564128_p_22(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(1369, ng2);

LAB3:    t1 = (t0 + 31856U);
    t2 = *((char **)t1);
    t1 = (t0 + 56784);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 55200);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void emc_common_v5_01_a_a_1319063213_3306564128_p_23(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(1370, ng2);

LAB3:    t1 = (t0 + 32176U);
    t2 = *((char **)t1);
    t1 = (t0 + 56848);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 55216);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void emc_common_v5_01_a_a_1319063213_3306564128_p_24(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(1377, ng2);

LAB3:    t1 = (t0 + 24656U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 56912);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);

LAB2:    t8 = (t0 + 55232);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void emc_common_v5_01_a_a_1319063213_3306564128_p_25(char *t0)
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

LAB0:    xsi_set_current_line(1378, ng2);

LAB3:    t1 = (t0 + 24656U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 34576U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 56976);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast(t1);

LAB2:    t11 = (t0 + 55248);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void emc_common_v5_01_a_a_1319063213_3306564128_p_26(char *t0)
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

LAB0:    xsi_set_current_line(1395, ng2);
    t2 = (t0 + 22376U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 55264);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(1396, ng2);
    t4 = (t0 + 22576U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(1400, ng2);
    t2 = (t0 + 24656U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 57040);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(1401, ng2);
    t2 = (t0 + 24656U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 57104);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 22416U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(1397, ng2);
    t4 = (t0 + 57040);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(1398, ng2);
    t2 = (t0 + 57104);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

}

static void emc_common_v5_01_a_a_1319063213_3306564128_p_27(char *t0)
{
    int t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    char *t6;
    char *t7;
    unsigned char t8;
    int t9;
    int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(1515, ng2);
    t1 = (32 - 1);
    t2 = (t0 + 104026);
    *((int *)t2) = 0;
    t3 = (t0 + 104030);
    *((int *)t3) = t1;
    t4 = 0;
    t5 = t1;

LAB2:    if (t4 <= t5)
        goto LAB3;

LAB5:    t2 = (t0 + 55280);
    *((int *)t2) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(1516, ng2);
    t6 = (t0 + 34736U);
    t7 = *((char **)t6);
    t8 = *((unsigned char *)t7);
    t6 = (t0 + 104026);
    t9 = *((int *)t6);
    t10 = (t9 - 0);
    t11 = (t10 * 1);
    t12 = (1 * t11);
    t13 = (0U + t12);
    t14 = (t0 + 57168);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = t8;
    xsi_driver_first_trans_delta(t14, t13, 1, 0LL);

LAB4:    t2 = (t0 + 104026);
    t4 = *((int *)t2);
    t3 = (t0 + 104030);
    t5 = *((int *)t3);
    if (t4 == t5)
        goto LAB5;

LAB6:    t1 = (t4 + 1);
    t4 = t1;
    t6 = (t0 + 104026);
    *((int *)t6) = t4;
    goto LAB2;

}

static void emc_common_v5_01_a_a_1319063213_3306564128_p_28(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(1572, ng2);

LAB3:    t1 = (t0 + 27376U);
    t2 = *((char **)t1);
    t1 = (t0 + 57232);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast(t1);

LAB2:    t7 = (t0 + 55296);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void emc_common_v5_01_a_a_1319063213_3306564128_p_29(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(1573, ng2);

LAB3:    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)3, 8U);
    t3 = (t0 + 57296);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 8U);
    xsi_driver_first_trans_fast(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}


extern void emc_common_v5_01_a_a_1319063213_3306564128_init()
{
	static char *pe[] = {(void *)emc_common_v5_01_a_a_1319063213_3306564128_p_0,(void *)emc_common_v5_01_a_a_1319063213_3306564128_p_1,(void *)emc_common_v5_01_a_a_1319063213_3306564128_p_2,(void *)emc_common_v5_01_a_a_1319063213_3306564128_p_3,(void *)emc_common_v5_01_a_a_1319063213_3306564128_p_4,(void *)emc_common_v5_01_a_a_1319063213_3306564128_p_5,(void *)emc_common_v5_01_a_a_1319063213_3306564128_p_6,(void *)emc_common_v5_01_a_a_1319063213_3306564128_p_7,(void *)emc_common_v5_01_a_a_1319063213_3306564128_p_8,(void *)emc_common_v5_01_a_a_1319063213_3306564128_p_9,(void *)emc_common_v5_01_a_a_1319063213_3306564128_p_10,(void *)emc_common_v5_01_a_a_1319063213_3306564128_p_11,(void *)emc_common_v5_01_a_a_1319063213_3306564128_p_12,(void *)emc_common_v5_01_a_a_1319063213_3306564128_p_13,(void *)emc_common_v5_01_a_a_1319063213_3306564128_p_14,(void *)emc_common_v5_01_a_a_1319063213_3306564128_p_15,(void *)emc_common_v5_01_a_a_1319063213_3306564128_p_16,(void *)emc_common_v5_01_a_a_1319063213_3306564128_p_17,(void *)emc_common_v5_01_a_a_1319063213_3306564128_p_18,(void *)emc_common_v5_01_a_a_1319063213_3306564128_p_19,(void *)emc_common_v5_01_a_a_1319063213_3306564128_p_20,(void *)emc_common_v5_01_a_a_1319063213_3306564128_p_21,(void *)emc_common_v5_01_a_a_1319063213_3306564128_p_22,(void *)emc_common_v5_01_a_a_1319063213_3306564128_p_23,(void *)emc_common_v5_01_a_a_1319063213_3306564128_p_24,(void *)emc_common_v5_01_a_a_1319063213_3306564128_p_25,(void *)emc_common_v5_01_a_a_1319063213_3306564128_p_26,(void *)emc_common_v5_01_a_a_1319063213_3306564128_p_27,(void *)emc_common_v5_01_a_a_1319063213_3306564128_p_28,(void *)emc_common_v5_01_a_a_1319063213_3306564128_p_29};
	static char *se[] = {(void *)emc_common_v5_01_a_a_1319063213_3306564128_sub_16272772600186126164_229454594,(void *)emc_common_v5_01_a_a_1319063213_3306564128_sub_4369197797187886665_229454594,(void *)emc_common_v5_01_a_a_1319063213_3306564128_sub_237575211164114427_229454594};
	xsi_register_didat("emc_common_v5_01_a_a_1319063213_3306564128", "isim/isim_system_axisim.sim/emc_common_v5_01_a/a_1319063213_3306564128.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
