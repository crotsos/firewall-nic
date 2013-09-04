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
extern char *IEEE_P_1242562249;
extern char *IEEE_P_2592010699;
static const char *ng2 = "/root/NetFPGA-10G-live/lib/hw/xilinx/pcores/proc_common_v3_00_a/hdl/vhdl/cntr_incr_decr_addn_f.vhd";

char *ieee_p_1242562249_sub_1701011461141717515_1035706684(char *, char *, char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_3488546069778340532_503743352(char *, unsigned char , unsigned char );


char *proc_common_v3_00_a_a_0307373905_3306564128_sub_9054251460853981957_1729663069(char *t1, char *t2, char *t3, char *t4, unsigned char t5)
{
    char t6[128];
    char t7[24];
    char t10[16];
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
    int t32;
    char *t33;
    int t34;
    char *t35;
    int t36;
    int t37;
    int t38;
    int t39;
    int t40;
    char *t41;
    int t42;
    char *t43;
    int t44;
    int t45;
    char *t46;
    int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    unsigned char t51;
    unsigned char t52;
    char *t53;
    char *t54;
    int t55;
    char *t56;
    int t57;
    int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;

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
    t21 = ((IEEE_P_1242562249) + 2976);
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
    t31 = (t10 + 8U);
    t32 = *((int *)t31);
    t33 = (t10 + 4U);
    t34 = *((int *)t33);
    t35 = (t10 + 0U);
    t36 = *((int *)t35);
    t37 = t36;
    t38 = t34;

LAB4:    t39 = (t38 * t32);
    t40 = (t37 * t32);
    if (t40 <= t39)
        goto LAB5;

LAB7:    t8 = (t18 + 56U);
    t11 = *((char **)t8);
    t8 = (t10 + 12U);
    t9 = *((unsigned int *)t8);
    t9 = (t9 * 1U);
    t0 = xsi_get_transient_memory(t9);
    memcpy(t0, t11, t9);
    t13 = (t10 + 0U);
    t12 = *((int *)t13);
    t15 = (t10 + 4U);
    t14 = *((int *)t15);
    t17 = (t10 + 8U);
    t16 = *((int *)t17);
    t21 = (t2 + 0U);
    t22 = (t21 + 0U);
    *((int *)t22) = t12;
    t22 = (t21 + 4U);
    *((int *)t22) = t14;
    t22 = (t21 + 8U);
    *((int *)t22) = t16;
    t19 = (t14 - t12);
    t20 = (t19 * t16);
    t20 = (t20 + 1);
    t22 = (t21 + 12U);
    *((unsigned int *)t22) = t20;

LAB1:    return t0;
LAB3:    *((char **)t27) = t3;
    goto LAB2;

LAB5:    t41 = (t4 + 0U);
    t42 = *((int *)t41);
    t43 = (t4 + 8U);
    t44 = *((int *)t43);
    t45 = (t37 - t42);
    t20 = (t45 * t44);
    t46 = (t4 + 4U);
    t47 = *((int *)t46);
    xsi_vhdl_check_range_of_index(t42, t47, t44, t37);
    t48 = (1U * t20);
    t49 = (0 + t48);
    t50 = (t3 + t49);
    t51 = *((unsigned char *)t50);
    t52 = ieee_p_2592010699_sub_3488546069778340532_503743352(IEEE_P_2592010699, t51, t5);
    t53 = (t18 + 56U);
    t54 = *((char **)t53);
    t53 = (t10 + 0U);
    t55 = *((int *)t53);
    t56 = (t10 + 8U);
    t57 = *((int *)t56);
    t58 = (t37 - t55);
    t59 = (t58 * t57);
    t60 = (1U * t59);
    t61 = (0 + t60);
    t62 = (t54 + t61);
    *((unsigned char *)t62) = t52;

LAB6:    if (t37 == t38)
        goto LAB7;

LAB8:    t12 = (t37 + t32);
    t37 = t12;
    goto LAB4;

LAB9:;
}

char *proc_common_v3_00_a_a_0307373905_3306564128_sub_9431936714364431927_1729663069(char *t1, char *t2, unsigned char t3)
{
    char t4[128];
    char t5[8];
    char t8[16];
    char t15[8];
    char *t0;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    int t23;
    char *t24;
    int t25;
    char *t26;
    int t27;
    char *t28;
    char *t29;
    int t30;
    unsigned int t31;

LAB0:    t6 = xsi_get_transient_memory(1U);
    memset(t6, 0, 1U);
    t7 = t6;
    memset(t7, t3, 1U);
    t9 = (t8 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 0;
    t10 = (t9 + 4U);
    *((int *)t10) = 0;
    t10 = (t9 + 8U);
    *((int *)t10) = 1;
    t11 = (0 - 0);
    t12 = (t11 * 1);
    t12 = (t12 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t12;
    t10 = (t4 + 4U);
    t13 = ((IEEE_P_1242562249) + 2976);
    t14 = (t10 + 88U);
    *((char **)t14) = t13;
    t16 = (t10 + 56U);
    *((char **)t16) = t15;
    memcpy(t15, t6, 1U);
    t17 = (t10 + 64U);
    *((char **)t17) = t8;
    t18 = (t10 + 80U);
    *((unsigned int *)t18) = 1U;
    t19 = (t5 + 4U);
    *((unsigned char *)t19) = t3;
    t20 = (t10 + 56U);
    t21 = *((char **)t20);
    t20 = (t8 + 12U);
    t12 = *((unsigned int *)t20);
    t12 = (t12 * 1U);
    t0 = xsi_get_transient_memory(t12);
    memcpy(t0, t21, t12);
    t22 = (t8 + 0U);
    t23 = *((int *)t22);
    t24 = (t8 + 4U);
    t25 = *((int *)t24);
    t26 = (t8 + 8U);
    t27 = *((int *)t26);
    t28 = (t2 + 0U);
    t29 = (t28 + 0U);
    *((int *)t29) = t23;
    t29 = (t28 + 4U);
    *((int *)t29) = t25;
    t29 = (t28 + 8U);
    *((int *)t29) = t27;
    t30 = (t25 - t23);
    t31 = (t30 * t27);
    t31 = (t31 + 1);
    t29 = (t28 + 12U);
    *((unsigned int *)t29) = t31;

LAB1:    return t0;
LAB2:;
}

static void proc_common_v3_00_a_a_0307373905_3306564128_p_0(char *t0)
{
    char t1[16];
    char t2[16];
    char t5[16];
    char t12[16];
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned char t10;
    char *t11;
    char *t13;
    char *t14;
    unsigned char t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(261, ng2);
    t3 = (t0 + 2416U);
    t4 = *((char **)t3);
    t3 = (t0 + 8872U);
    t6 = (t0 + 1936U);
    t7 = *((char **)t6);
    t6 = (t0 + 8824U);
    t8 = (t0 + 1776U);
    t9 = *((char **)t8);
    t10 = *((unsigned char *)t9);
    t8 = proc_common_v3_00_a_a_0307373905_3306564128_sub_9054251460853981957_1729663069(t0, t5, t7, t6, t10);
    t11 = ieee_p_1242562249_sub_1701011461141717515_1035706684(IEEE_P_1242562249, t2, t4, t3, t8, t5);
    t13 = (t0 + 1616U);
    t14 = *((char **)t13);
    t15 = *((unsigned char *)t14);
    t13 = proc_common_v3_00_a_a_0307373905_3306564128_sub_9431936714364431927_1729663069(t0, t12, t15);
    t16 = ieee_p_1242562249_sub_1701011461141717515_1035706684(IEEE_P_1242562249, t1, t11, t2, t13, t12);
    t17 = (t0 + 5296);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t16, 5U);
    xsi_driver_first_trans_fast(t17);
    t3 = (t0 + 5168);
    *((int *)t3) = 1;

LAB1:    return;
}

static void proc_common_v3_00_a_a_0307373905_3306564128_p_1(char *t0)
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

LAB0:    xsi_set_current_line(269, ng2);
    t2 = (t0 + 1256U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 5184);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(270, ng2);
    t4 = (t0 + 1456U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(273, ng2);
    t2 = (t0 + 2576U);
    t4 = *((char **)t2);
    t2 = (t0 + 5360);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 5U);
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1296U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(271, ng2);
    t4 = xsi_get_transient_memory(5U);
    memset(t4, 0, 5U);
    t11 = t4;
    memset(t11, (unsigned char)3, 5U);
    t12 = (t0 + 5360);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t4, 5U);
    xsi_driver_first_trans_fast(t12);
    goto LAB9;

}

static void proc_common_v3_00_a_a_0307373905_3306564128_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(281, ng2);

LAB3:    t1 = (t0 + 2416U);
    t2 = *((char **)t1);
    t1 = (t0 + 5424);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 5U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 5200);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void proc_common_v3_00_a_a_0307373905_3306564128_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(282, ng2);

LAB3:    t1 = (t0 + 2576U);
    t2 = *((char **)t1);
    t1 = (t0 + 5488);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 5U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 5216);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void proc_common_v3_00_a_a_0307373905_3306564128_init()
{
	static char *pe[] = {(void *)proc_common_v3_00_a_a_0307373905_3306564128_p_0,(void *)proc_common_v3_00_a_a_0307373905_3306564128_p_1,(void *)proc_common_v3_00_a_a_0307373905_3306564128_p_2,(void *)proc_common_v3_00_a_a_0307373905_3306564128_p_3};
	static char *se[] = {(void *)proc_common_v3_00_a_a_0307373905_3306564128_sub_9054251460853981957_1729663069,(void *)proc_common_v3_00_a_a_0307373905_3306564128_sub_9431936714364431927_1729663069};
	xsi_register_didat("proc_common_v3_00_a_a_0307373905_3306564128", "isim/isim_system_axisim.sim/proc_common_v3_00_a/a_0307373905_3306564128.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
