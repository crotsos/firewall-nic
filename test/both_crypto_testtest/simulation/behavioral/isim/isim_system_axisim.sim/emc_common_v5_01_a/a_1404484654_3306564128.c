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
extern char *STD_STANDARD;
static const char *ng1 = "";
static const char *ng2 = "Function not_all_zeros ended without a return statement";
static const char *ng3 = "/opt/Xilinx/13.4/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/emc_common_v5_01_a/hdl/vhdl/emc.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_0017514958;

unsigned char ieee_p_0017514958_sub_18359437307400844447_1861681735(char *, char *, char *);
unsigned char ieee_p_2592010699_sub_374109322130769762_503743352(char *, unsigned char );


int emc_common_v5_01_a_a_1404484654_3306564128_sub_14108919807662105220_229454594(char *t1, char *t2, int t3)
{
    char t4[208];
    char t5[24];
    char t6[16];
    char t12[16];
    char t17[8];
    int t0;
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    char *t11;
    char *t13;
    int t14;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    char *t20;
    unsigned char t21;
    char *t22;
    char *t23;
    int t24;
    int t25;
    int t26;
    char *t27;
    char *t28;
    int t29;
    int t30;
    unsigned int t31;
    unsigned int t32;
    int t33;
    int t34;
    char *t35;
    char *t36;

LAB0:    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 3;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t9 = (3 - 0);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t8 = (t4 + 4U);
    t11 = ((STD_STANDARD) + 384);
    t13 = (t12 + 0U);
    *((int *)t13) = 0;
    t13 = (t12 + 4U);
    *((int *)t13) = 8;
    t13 = (t12 + 8U);
    *((int *)t13) = 1;
    t14 = (8 - 0);
    t10 = (t14 * 1);
    t10 = (t10 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t10;
    t13 = (t4 + 124U);
    xsi_create_subtype(t13, ng1, t11, t12, 16);
    t15 = (t4 + 124U);
    t16 = (t8 + 88U);
    *((char **)t16) = t15;
    t18 = (t8 + 56U);
    *((char **)t18) = t17;
    *((int *)t17) = 0;
    t19 = (t8 + 80U);
    *((unsigned int *)t19) = 4U;
    t20 = (t5 + 4U);
    t21 = (t2 != 0);
    if (t21 == 1)
        goto LAB3;

LAB2:    t22 = (t5 + 12U);
    *((char **)t22) = t6;
    t23 = (t5 + 20U);
    *((int *)t23) = t3;
    t24 = (t3 - 1);
    t25 = 0;
    t26 = t24;

LAB4:    if (t25 <= t26)
        goto LAB5;

LAB7:    t7 = (t8 + 56U);
    t11 = *((char **)t7);
    t9 = *((int *)t11);
    t21 = (t9 == 0);
    if (t21 != 0)
        goto LAB9;

LAB11:    t0 = 1;

LAB1:    return t0;
LAB3:    *((char **)t20) = t2;
    goto LAB2;

LAB5:    t27 = (t8 + 56U);
    t28 = *((char **)t27);
    t29 = *((int *)t28);
    t30 = (t25 - 0);
    t10 = (t30 * 1);
    xsi_vhdl_check_range_of_index(0, 3, 1, t25);
    t31 = (4U * t10);
    t32 = (0 + t31);
    t27 = (t2 + t32);
    t33 = *((int *)t27);
    t34 = (t29 + t33);
    t35 = (t8 + 56U);
    t36 = *((char **)t35);
    t35 = (t36 + 0);
    *((int *)t35) = t34;

LAB6:    if (t25 == t26)
        goto LAB7;

LAB8:    t9 = (t25 + 1);
    t25 = t9;
    goto LAB4;

LAB9:    t0 = 0;
    goto LAB1;

LAB10:    xsi_error(ng2);
    t0 = 0;
    goto LAB1;

LAB12:    goto LAB10;

LAB13:    goto LAB10;

}

static void emc_common_v5_01_a_a_1404484654_3306564128_p_0(char *t0)
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

LAB0:    xsi_set_current_line(864, ng3);

LAB3:    t1 = (t0 + 1616U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t3);
    t1 = (t0 + 44016);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast(t1);

LAB2:    t9 = (t0 + 43840);
    *((int *)t9) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void emc_common_v5_01_a_a_1404484654_3306564128_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(865, ng3);

LAB3:    t1 = (t0 + 44080);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void emc_common_v5_01_a_a_1404484654_3306564128_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(866, ng3);

LAB3:    t1 = (t0 + 44144);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void emc_common_v5_01_a_a_1404484654_3306564128_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(867, ng3);

LAB3:    t1 = (t0 + 44208);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void emc_common_v5_01_a_a_1404484654_3306564128_p_4(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(868, ng3);

LAB3:    t1 = (t0 + 21776U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 44272);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 43856);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void emc_common_v5_01_a_a_1404484654_3306564128_p_5(char *t0)
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

LAB0:    xsi_set_current_line(869, ng3);

LAB3:    t1 = (t0 + 2896U);
    t2 = *((char **)t1);
    t1 = (t0 + 86840U);
    t3 = ieee_p_0017514958_sub_18359437307400844447_1861681735(IEEE_P_0017514958, t2, t1);
    t4 = (t0 + 44336);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_fast(t4);

LAB2:    t9 = (t0 + 43872);
    *((int *)t9) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void emc_common_v5_01_a_a_1404484654_3306564128_p_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(902, ng3);

LAB3:    t1 = (t0 + 2896U);
    t2 = *((char **)t1);
    t1 = (t0 + 44400);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 1U);
    xsi_driver_first_trans_fast(t1);

LAB2:    t7 = (t0 + 43888);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void emc_common_v5_01_a_a_1404484654_3306564128_p_7(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    int t7;
    int t8;
    unsigned char t9;
    int t10;
    int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned char t15;
    unsigned char t16;
    char *t17;
    char *t18;
    unsigned char t19;
    unsigned char t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    xsi_set_current_line(911, ng3);
    t1 = (t0 + 44464);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(912, ng3);
    t6 = (1 - 1);
    t1 = (t0 + 89574);
    *((int *)t1) = 0;
    t2 = (t0 + 89578);
    *((int *)t2) = t6;
    t7 = 0;
    t8 = t6;

LAB2:    if (t7 <= t8)
        goto LAB3;

LAB5:    t1 = (t0 + 43904);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(913, ng3);
    t3 = (t0 + 2896U);
    t4 = *((char **)t3);
    t3 = (t0 + 89574);
    t10 = *((int *)t3);
    t11 = (t10 - 0);
    t12 = (t11 * 1);
    xsi_vhdl_check_range_of_index(0, 0, 1, *((int *)t3));
    t13 = (1U * t12);
    t14 = (0 + t13);
    t5 = (t4 + t14);
    t15 = *((unsigned char *)t5);
    t16 = (t15 == (unsigned char)3);
    if (t16 == 1)
        goto LAB9;

LAB10:    t9 = (unsigned char)0;

LAB11:    if (t9 != 0)
        goto LAB6;

LAB8:
LAB7:
LAB4:    t1 = (t0 + 89574);
    t7 = *((int *)t1);
    t2 = (t0 + 89578);
    t8 = *((int *)t2);
    if (t7 == t8)
        goto LAB5;

LAB12:    t6 = (t7 + 1);
    t7 = t6;
    t3 = (t0 + 89574);
    *((int *)t3) = t7;
    goto LAB2;

LAB6:    xsi_set_current_line(916, ng3);
    t21 = (t0 + 44464);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    *((unsigned char *)t25) = (unsigned char)3;
    xsi_driver_first_trans_fast(t21);
    goto LAB7;

LAB9:    t17 = (t0 + 3056U);
    t18 = *((char **)t17);
    t17 = (t0 + 86856U);
    t19 = ieee_p_0017514958_sub_18359437307400844447_1861681735(IEEE_P_0017514958, t18, t17);
    t20 = (t19 == (unsigned char)2);
    t9 = t20;
    goto LAB11;

}

static void emc_common_v5_01_a_a_1404484654_3306564128_p_8(char *t0)
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
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(1053, ng3);
    t1 = (t0 + 4976U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t11 = (t0 + 1936U);
    t12 = *((char **)t11);
    t11 = (t0 + 44528);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t12, 4U);
    xsi_driver_first_trans_fast(t11);

LAB2:    t17 = (t0 + 43920);
    *((int *)t17) = 1;

LAB1:    return;
LAB3:    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t5 = t1;
    memset(t5, (unsigned char)2, 4U);
    t6 = (t0 + 44528);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast(t6);
    goto LAB2;

LAB6:    goto LAB2;

}

static void emc_common_v5_01_a_a_1404484654_3306564128_p_9(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(1057, ng3);

LAB3:    t1 = (t0 + 22576U);
    t2 = *((char **)t1);
    t1 = (t0 + 44592);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 43936);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void emc_common_v5_01_a_a_1404484654_3306564128_init()
{
	static char *pe[] = {(void *)emc_common_v5_01_a_a_1404484654_3306564128_p_0,(void *)emc_common_v5_01_a_a_1404484654_3306564128_p_1,(void *)emc_common_v5_01_a_a_1404484654_3306564128_p_2,(void *)emc_common_v5_01_a_a_1404484654_3306564128_p_3,(void *)emc_common_v5_01_a_a_1404484654_3306564128_p_4,(void *)emc_common_v5_01_a_a_1404484654_3306564128_p_5,(void *)emc_common_v5_01_a_a_1404484654_3306564128_p_6,(void *)emc_common_v5_01_a_a_1404484654_3306564128_p_7,(void *)emc_common_v5_01_a_a_1404484654_3306564128_p_8,(void *)emc_common_v5_01_a_a_1404484654_3306564128_p_9};
	static char *se[] = {(void *)emc_common_v5_01_a_a_1404484654_3306564128_sub_14108919807662105220_229454594};
	xsi_register_didat("emc_common_v5_01_a_a_1404484654_3306564128", "isim/isim_system_axisim.sim/emc_common_v5_01_a/a_1404484654_3306564128.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
