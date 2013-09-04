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
static const char *ng0 = "Function sl ended without a return statement";
extern char *STD_STANDARD;
static const char *ng2 = "";
extern char *STD_TEXTIO;
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3564397177;

void ieee_p_3564397177_sub_3261834094259370027_91900896(char *, char *, char *, char *, char *, char *);


unsigned char nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_9052813945161223267_355431523(char *t1, unsigned char t2)
{
    char t4[8];
    unsigned char t0;
    char *t5;

LAB0:    t5 = (t4 + 4U);
    *((unsigned char *)t5) = t2;
    if (t2 != 0)
        goto LAB2;

LAB4:    t0 = (unsigned char)2;

LAB1:    return t0;
LAB2:    t0 = (unsigned char)3;
    goto LAB1;

LAB3:    xsi_error(ng0);
    t0 = 0;
    goto LAB1;

LAB5:    goto LAB3;

LAB6:    goto LAB3;

}

void nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_16923163327624947528_355431523(char *t0, char *t1, char *t2, char *t3, char *t4)
{
    char t5[128];
    char t6[32];
    char t10[8];
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    int t21;
    int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    int t34;
    int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    unsigned char t45;
    unsigned char t46;
    unsigned char t47;
    unsigned char t48;
    int t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    int t54;
    int t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    unsigned char t64;
    unsigned char t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    int t72;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    int t77;
    int t78;
    unsigned int t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    unsigned char t88;
    unsigned char t89;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    char *t94;
    char *t95;
    int t96;
    char *t97;
    char *t98;
    char *t99;
    char *t100;
    int t101;
    int t102;
    unsigned int t103;
    char *t104;
    char *t105;
    char *t106;
    char *t107;
    int t108;
    unsigned int t109;
    unsigned int t110;
    char *t111;
    unsigned char t112;
    char *t113;

LAB0:    t7 = (t5 + 4U);
    t8 = ((STD_STANDARD) + 824);
    t9 = (t7 + 88U);
    *((char **)t9) = t8;
    t11 = (t7 + 56U);
    *((char **)t11) = t10;
    xsi_type_set_default_value(t8, t10, 0);
    t12 = (t7 + 80U);
    *((unsigned int *)t12) = 4U;
    t13 = (t6 + 4U);
    *((char **)t13) = t2;
    t14 = (t6 + 12U);
    *((char **)t14) = t3;
    t15 = (t6 + 20U);
    *((char **)t15) = t4;
    t16 = (t6 + 4U);
    t17 = xsi_access_variable_all(*((char **)t16));
    t18 = (t17 + 64U);
    t18 = *((char **)t18);
    t19 = (t18 + 12U);
    t20 = *((unsigned int *)t19);
    t21 = 1;
    t22 = t20;

LAB2:    if (t21 <= t22)
        goto LAB3;

LAB5:    t9 = (t4 + 0);
    *((unsigned char *)t9) = (unsigned char)0;

LAB1:    return;
LAB3:    t23 = xsi_access_variable_all(t2);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t24 = (t6 + 4U);
    t26 = xsi_access_variable_all(*((char **)t24));
    t27 = (t26 + 64U);
    t27 = *((char **)t27);
    t28 = (t27 + 0U);
    t29 = *((int *)t28);
    t30 = (t6 + 4U);
    t31 = xsi_access_variable_all(*((char **)t30));
    t32 = (t31 + 64U);
    t32 = *((char **)t32);
    t33 = (t32 + 8U);
    t34 = *((int *)t33);
    t35 = (t21 - t29);
    t36 = (t35 * t34);
    t37 = (t6 + 4U);
    t38 = xsi_access_variable_all(*((char **)t37));
    t39 = (t38 + 64U);
    t39 = *((char **)t39);
    t40 = (t39 + 4U);
    t41 = *((int *)t40);
    xsi_vhdl_check_range_of_index(t29, t41, t34, t21);
    t42 = (1U * t36);
    t43 = (0 + t42);
    t44 = (t25 + t43);
    t45 = *((unsigned char *)t44);
    t46 = (t45 == (unsigned char)35);
    if (t46 != 0)
        goto LAB6;

LAB8:
LAB7:    t9 = xsi_access_variable_all(t2);
    t12 = (t9 + 56U);
    t16 = *((char **)t12);
    t12 = (t6 + 4U);
    t17 = xsi_access_variable_all(*((char **)t12));
    t18 = (t17 + 64U);
    t18 = *((char **)t18);
    t19 = (t18 + 0U);
    t29 = *((int *)t19);
    t23 = (t6 + 4U);
    t24 = xsi_access_variable_all(*((char **)t23));
    t25 = (t24 + 64U);
    t25 = *((char **)t25);
    t26 = (t25 + 8U);
    t34 = *((int *)t26);
    t35 = (t21 - t29);
    t20 = (t35 * t34);
    t27 = (t6 + 4U);
    t28 = xsi_access_variable_all(*((char **)t27));
    t30 = (t28 + 64U);
    t30 = *((char **)t30);
    t31 = (t30 + 4U);
    t41 = *((int *)t31);
    xsi_vhdl_check_range_of_index(t29, t41, t34, t21);
    t36 = (1U * t20);
    t42 = (0 + t36);
    t32 = (t16 + t42);
    t47 = *((unsigned char *)t32);
    t48 = (t47 != (unsigned char)32);
    if (t48 == 1)
        goto LAB16;

LAB17:    t46 = (unsigned char)0;

LAB18:    if (t46 == 1)
        goto LAB13;

LAB14:    t45 = (unsigned char)0;

LAB15:    if (t45 != 0)
        goto LAB10;

LAB12:
LAB11:
LAB4:    if (t21 == t22)
        goto LAB5;

LAB20:    t29 = (t21 + 1);
    t21 = t29;
    goto LAB2;

LAB6:    xsi_access_variable_deallocate(t2);
    t8 = (t0 + 3552);
    t11 = xsi_get_constraints_memory(1U);
    t12 = (t11 + 0U);
    t16 = (t12 + 0U);
    *((int *)t16) = 1;
    t16 = (t12 + 4U);
    *((int *)t16) = 0;
    t16 = (t12 + 8U);
    *((int *)t16) = 1;
    t29 = (0 - 1);
    t20 = (t29 * 1);
    t20 = (t20 + 1);
    t16 = (t12 + 12U);
    *((unsigned int *)t16) = t20;
    t16 = ((STD_STANDARD) + 984);
    t17 = xsi_variable_create(ng2, t16, t11, t8, 3, 0);
    xsi_access_variable_set_value(t2, t17);
    t9 = (t4 + 0);
    *((unsigned char *)t9) = (unsigned char)0;
    goto LAB1;

LAB9:    goto LAB7;

LAB10:    t90 = xsi_access_variable_all(t2);
    t91 = (t90 + 56U);
    t92 = *((char **)t91);
    t91 = (t6 + 4U);
    t93 = xsi_access_variable_all(*((char **)t91));
    t94 = (t93 + 64U);
    t94 = *((char **)t94);
    t95 = (t94 + 0U);
    t96 = *((int *)t95);
    t97 = (t6 + 4U);
    t98 = xsi_access_variable_all(*((char **)t97));
    t99 = (t98 + 64U);
    t99 = *((char **)t99);
    t100 = (t99 + 8U);
    t101 = *((int *)t100);
    t102 = (t21 - t96);
    t103 = (t102 * t101);
    t104 = (t6 + 4U);
    t105 = xsi_access_variable_all(*((char **)t104));
    t106 = (t105 + 64U);
    t106 = *((char **)t106);
    t107 = (t106 + 4U);
    t108 = *((int *)t107);
    xsi_vhdl_check_range_of_index(t96, t108, t101, t21);
    t109 = (1U * t103);
    t110 = (0 + t109);
    t111 = (t92 + t110);
    t112 = *((unsigned char *)t111);
    t113 = (t3 + 0);
    *((unsigned char *)t113) = t112;
    t9 = (t4 + 0);
    *((unsigned char *)t9) = (unsigned char)1;
    goto LAB1;

LAB13:    t66 = xsi_access_variable_all(t2);
    t67 = (t66 + 56U);
    t68 = *((char **)t67);
    t67 = (t6 + 4U);
    t69 = xsi_access_variable_all(*((char **)t67));
    t70 = (t69 + 64U);
    t70 = *((char **)t70);
    t71 = (t70 + 0U);
    t72 = *((int *)t71);
    t73 = (t6 + 4U);
    t74 = xsi_access_variable_all(*((char **)t73));
    t75 = (t74 + 64U);
    t75 = *((char **)t75);
    t76 = (t75 + 8U);
    t77 = *((int *)t76);
    t78 = (t21 - t72);
    t79 = (t78 * t77);
    t80 = (t6 + 4U);
    t81 = xsi_access_variable_all(*((char **)t80));
    t82 = (t81 + 64U);
    t82 = *((char **)t82);
    t83 = (t82 + 4U);
    t84 = *((int *)t83);
    xsi_vhdl_check_range_of_index(t72, t84, t77, t21);
    t85 = (1U * t79);
    t86 = (0 + t85);
    t87 = (t68 + t86);
    t88 = *((unsigned char *)t87);
    t89 = (t88 != (unsigned char)13);
    t45 = t89;
    goto LAB15;

LAB16:    t33 = xsi_access_variable_all(t2);
    t37 = (t33 + 56U);
    t38 = *((char **)t37);
    t37 = (t6 + 4U);
    t39 = xsi_access_variable_all(*((char **)t37));
    t40 = (t39 + 64U);
    t40 = *((char **)t40);
    t44 = (t40 + 0U);
    t49 = *((int *)t44);
    t50 = (t6 + 4U);
    t51 = xsi_access_variable_all(*((char **)t50));
    t52 = (t51 + 64U);
    t52 = *((char **)t52);
    t53 = (t52 + 8U);
    t54 = *((int *)t53);
    t55 = (t21 - t49);
    t43 = (t55 * t54);
    t56 = (t6 + 4U);
    t57 = xsi_access_variable_all(*((char **)t56));
    t58 = (t57 + 64U);
    t58 = *((char **)t58);
    t59 = (t58 + 4U);
    t60 = *((int *)t59);
    xsi_vhdl_check_range_of_index(t49, t60, t54, t21);
    t61 = (1U * t43);
    t62 = (0 + t61);
    t63 = (t38 + t62);
    t64 = *((unsigned char *)t63);
    t65 = (t64 != (unsigned char)9);
    t46 = t65;
    goto LAB18;

LAB19:    goto LAB11;

}

void nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_16237956377822765066_355431523(char *t0, char *t1, char *t2, char *t3)
{
    char t4[128];
    char t5[24];
    char t9[8];
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned char t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned char t29;
    unsigned char t30;
    unsigned char t31;
    unsigned char t32;
    unsigned char t33;

LAB0:    t6 = (t4 + 4U);
    t7 = ((STD_STANDARD) + 192);
    t8 = (t6 + 88U);
    *((char **)t8) = t7;
    t10 = (t6 + 56U);
    *((char **)t10) = t9;
    xsi_type_set_default_value(t7, t9, 0);
    t11 = (t6 + 80U);
    *((unsigned int *)t11) = 1U;
    t12 = (t5 + 4U);
    *((char **)t12) = t2;
    t13 = (t5 + 12U);
    *((char **)t13) = t3;

LAB2:    t14 = xsi_access_variable_all(t2);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t15 = xsi_access_variable_all(t2);
    t17 = (t15 + 64U);
    t17 = *((char **)t17);
    t18 = (t17 + 12U);
    t19 = *((unsigned int *)t18);
    t20 = (1U * t19);
    t21 = (t0 + 3552);
    t23 = 1;
    if (t20 == 0U)
        goto LAB6;

LAB7:    t23 = 0;

LAB8:    if ((!(t23)) != 0)
        goto LAB3;

LAB5:
LAB1:    return;
LAB3:    t27 = (t6 + 56U);
    t28 = *((char **)t27);
    t27 = (t28 + 0);
    std_textio_read8(STD_TEXTIO, t1, t2, t27);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t29 = *((unsigned char *)t8);
    t30 = (t29 != (unsigned char)32);
    if (t30 == 1)
        goto LAB15;

LAB16:    t23 = (unsigned char)0;

LAB17:    if (t23 != 0)
        goto LAB12;

LAB14:
LAB13:    goto LAB2;

LAB4:;
LAB6:    t24 = 0;

LAB9:    if (t24 < t20)
        goto LAB10;
    else
        goto LAB8;

LAB10:    t25 = (t16 + t24);
    t26 = (t21 + t24);
    if (*((unsigned char *)t25) != *((unsigned char *)t26))
        goto LAB7;

LAB11:    t24 = (t24 + 1);
    goto LAB9;

LAB12:    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    t33 = *((unsigned char *)t11);
    t7 = (t3 + 0);
    *((unsigned char *)t7) = t33;
    goto LAB5;

LAB15:    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t31 = *((unsigned char *)t10);
    t32 = (t31 != (unsigned char)9);
    t23 = t32;
    goto LAB17;

LAB18:    goto LAB13;

}

void nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_16377608295430327215_355431523(char *t0, char *t1, char *t2, char *t3)
{
    char t4[128];
    char t5[24];
    char t9[8];
    char t46[16];
    char t48[16];
    char t53[16];
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned char t17;
    char *t18;
    char *t19;
    int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    int t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t47;
    char *t49;
    char *t50;
    int t51;
    unsigned int t52;
    char *t54;
    char *t55;
    char *t56;
    int t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    int t62;
    char *t63;
    char *t64;
    int t65;
    char *t66;
    char *t67;
    char *t68;
    int t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    int t74;
    int t75;
    unsigned int t76;
    unsigned int t77;

LAB0:    t6 = (t4 + 4U);
    t7 = ((STD_STANDARD) + 0);
    t8 = (t6 + 88U);
    *((char **)t8) = t7;
    t10 = (t6 + 56U);
    *((char **)t10) = t9;
    xsi_type_set_default_value(t7, t9, 0);
    t11 = (t6 + 80U);
    *((unsigned int *)t11) = 1U;
    t12 = (t5 + 4U);
    *((char **)t12) = t2;
    t13 = (t5 + 12U);
    *((char **)t13) = t3;
    t14 = (t3 + 0);
    t15 = (t6 + 56U);
    t16 = *((char **)t15);
    t15 = (t16 + 0);
    std_textio_read9(STD_TEXTIO, t1, t2, t14, t15);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t17 = *((unsigned char *)t8);
    if (t17 == 0)
        goto LAB2;

LAB3:
LAB1:    return;
LAB2:    t7 = (t0 + 3552);
    t11 = xsi_access_variable_all(t2);
    t14 = (t11 + 56U);
    t15 = *((char **)t14);
    t14 = (t5 + 4U);
    t16 = xsi_access_variable_all(*((char **)t14));
    t18 = (t16 + 64U);
    t18 = *((char **)t18);
    t19 = (t18 + 0U);
    t20 = *((int *)t19);
    t21 = (t5 + 4U);
    t22 = xsi_access_variable_all(*((char **)t21));
    t23 = (t22 + 64U);
    t23 = *((char **)t23);
    t24 = (t23 + 0U);
    t25 = *((int *)t24);
    t26 = (t25 - t20);
    t27 = (t5 + 4U);
    t28 = xsi_access_variable_all(*((char **)t27));
    t29 = (t28 + 64U);
    t29 = *((char **)t29);
    t30 = (t29 + 4U);
    t31 = *((int *)t30);
    t32 = (t5 + 4U);
    t33 = xsi_access_variable_all(*((char **)t32));
    t34 = (t33 + 64U);
    t34 = *((char **)t34);
    t35 = (t34 + 4U);
    t36 = *((int *)t35);
    t37 = (t5 + 4U);
    t38 = xsi_access_variable_all(*((char **)t37));
    t39 = (t38 + 64U);
    t39 = *((char **)t39);
    t40 = (t39 + 8U);
    t41 = *((int *)t40);
    xsi_vhdl_check_range_of_slice(t20, t36, t41, t25, t31, 1);
    t42 = (t26 * 1U);
    t43 = (0 + t42);
    t44 = (t15 + t43);
    t47 = ((STD_STANDARD) + 984);
    t49 = (t48 + 0U);
    t50 = (t49 + 0U);
    *((int *)t50) = 1;
    t50 = (t49 + 4U);
    *((int *)t50) = 32;
    t50 = (t49 + 8U);
    *((int *)t50) = 1;
    t51 = (32 - 1);
    t52 = (t51 * 1);
    t52 = (t52 + 1);
    t50 = (t49 + 12U);
    *((unsigned int *)t50) = t52;
    t50 = (t5 + 4U);
    t54 = xsi_access_variable_all(*((char **)t50));
    t55 = (t54 + 64U);
    t55 = *((char **)t55);
    t56 = (t55 + 0U);
    t57 = *((int *)t56);
    t58 = (t5 + 4U);
    t59 = xsi_access_variable_all(*((char **)t58));
    t60 = (t59 + 64U);
    t60 = *((char **)t60);
    t61 = (t60 + 4U);
    t62 = *((int *)t61);
    t63 = (t53 + 0U);
    t64 = (t63 + 0U);
    *((int *)t64) = t57;
    t64 = (t63 + 4U);
    *((int *)t64) = t62;
    t64 = (t63 + 8U);
    *((int *)t64) = 1;
    t65 = (t62 - t57);
    t52 = (t65 * 1);
    t52 = (t52 + 1);
    t64 = (t63 + 12U);
    *((unsigned int *)t64) = t52;
    t45 = xsi_base_array_concat(t45, t46, t47, (char)97, t7, t48, (char)97, t44, t53, (char)101);
    t64 = (t5 + 4U);
    t66 = xsi_access_variable_all(*((char **)t64));
    t67 = (t66 + 64U);
    t67 = *((char **)t67);
    t68 = (t67 + 0U);
    t69 = *((int *)t68);
    t70 = (t5 + 4U);
    t71 = xsi_access_variable_all(*((char **)t70));
    t72 = (t71 + 64U);
    t72 = *((char **)t72);
    t73 = (t72 + 4U);
    t74 = *((int *)t73);
    t75 = (t74 - t69);
    t52 = (t75 * 1);
    t52 = (t52 + 1);
    t76 = (1U * t52);
    t77 = (32U + t76);
    xsi_report(t45, t77, (unsigned char)3);
    goto LAB3;

}

void nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_17927017279289589510_355431523(char *t0, char *t1, char *t2, char *t3, unsigned int t4, unsigned int t5, char *t6, char *t7, char *t8)
{
    char t9[368];
    char t10[24];
    char t13[16];
    char t33[8];
    char t39[8];
    char t57[16];
    char t59[16];
    char t64[16];
    char *t11;
    unsigned int t12;
    char *t14;
    int t15;
    char *t16;
    int t17;
    char *t18;
    int t19;
    char *t20;
    char *t21;
    int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    unsigned char t48;
    unsigned char t49;
    char *t50;
    char *t51;
    char *t52;
    int t53;
    unsigned int t54;
    char *t55;
    char *t56;
    char *t58;
    char *t60;
    char *t61;
    int t62;
    unsigned int t63;
    char *t65;
    char *t66;
    char *t67;
    int t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    int t73;
    char *t74;
    char *t75;
    int t76;
    char *t77;
    char *t78;
    char *t79;
    int t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    int t85;
    int t86;
    unsigned int t87;
    unsigned int t88;

LAB0:    t11 = (t7 + 12U);
    t12 = *((unsigned int *)t11);
    t12 = (t12 * 1U);
    t14 = (t7 + 0U);
    t15 = *((int *)t14);
    t16 = (t7 + 4U);
    t17 = *((int *)t16);
    t18 = (t7 + 8U);
    t19 = *((int *)t18);
    t20 = (t13 + 0U);
    t21 = (t20 + 0U);
    *((int *)t21) = t15;
    t21 = (t20 + 4U);
    *((int *)t21) = t17;
    t21 = (t20 + 8U);
    *((int *)t21) = t19;
    t22 = (t17 - t15);
    t23 = (t22 * t19);
    t23 = (t23 + 1);
    t21 = (t20 + 12U);
    *((unsigned int *)t21) = t23;
    t21 = (t9 + 4U);
    t24 = ((IEEE_P_2592010699) + 4000);
    t25 = (t21 + 88U);
    *((char **)t25) = t24;
    t26 = (char *)alloca(t12);
    t27 = (t21 + 56U);
    *((char **)t27) = t26;
    xsi_type_set_default_value(t24, t26, t13);
    t28 = (t21 + 64U);
    *((char **)t28) = t13;
    t29 = (t21 + 80U);
    *((unsigned int *)t29) = t12;
    t30 = (t9 + 124U);
    t31 = ((STD_STANDARD) + 192);
    t32 = (t30 + 88U);
    *((char **)t32) = t31;
    t34 = (t30 + 56U);
    *((char **)t34) = t33;
    xsi_type_set_default_value(t31, t33, 0);
    t35 = (t30 + 80U);
    *((unsigned int *)t35) = 1U;
    t36 = (t9 + 244U);
    t37 = ((STD_STANDARD) + 0);
    t38 = (t36 + 88U);
    *((char **)t38) = t37;
    t40 = (t36 + 56U);
    *((char **)t40) = t39;
    xsi_type_set_default_value(t37, t39, 0);
    t41 = (t36 + 80U);
    *((unsigned int *)t41) = 1U;
    t42 = (t10 + 4U);
    *((char **)t42) = t2;
    t43 = (t10 + 12U);
    *((char **)t43) = t8;
    t44 = (t30 + 56U);
    t45 = *((char **)t44);
    t44 = (t45 + 0);
    t46 = (t36 + 56U);
    t47 = *((char **)t46);
    t46 = (t47 + 0);
    nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_16923163327624947528_355431523(t0, t1, t2, t44, t46);
    t11 = (t36 + 56U);
    t14 = *((char **)t11);
    t48 = *((unsigned char *)t14);
    if (t48 == 0)
        goto LAB2;

LAB3:    t11 = (t30 + 56U);
    t14 = *((char **)t11);
    t48 = *((unsigned char *)t14);
    t49 = (t48 == (unsigned char)45);
    if (t49 != 0)
        goto LAB4;

LAB6:
LAB5:    t11 = (t21 + 56U);
    t14 = *((char **)t11);
    t11 = (t36 + 56U);
    t16 = *((char **)t11);
    t11 = (t16 + 0);
    ieee_p_3564397177_sub_3261834094259370027_91900896(IEEE_P_3564397177, t1, t2, t14, t13, t11);
    t11 = (t36 + 56U);
    t14 = *((char **)t11);
    t48 = *((unsigned char *)t14);
    if (t48 == 0)
        goto LAB8;

LAB9:    t11 = (t21 + 56U);
    t14 = *((char **)t11);
    t12 = (0 + t4);
    t11 = (t6 + 56U);
    t16 = *((char **)t11);
    t18 = (t16 + 56U);
    t20 = *((char **)t18);
    t24 = (t7 + 12U);
    t23 = *((unsigned int *)t24);
    t23 = (t23 * 1U);
    memcpy(t20, t14, t23);
    t25 = (t7 + 12U);
    t54 = *((unsigned int *)t25);
    t63 = (1U * t54);
    xsi_driver_first_trans_delta(t6, t12, t63, 0LL);
    t11 = (t8 + 0);
    *((unsigned char *)t11) = (unsigned char)0;

LAB1:    return;
LAB2:    t11 = (t0 + 3584);
    xsi_report(t11, 32U, (unsigned char)3);
    goto LAB3;

LAB4:    t11 = (t30 + 56U);
    t16 = *((char **)t11);
    t11 = (t16 + 0);
    nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_16237956377822765066_355431523(t0, t1, t2, t11);
    t11 = (t8 + 0);
    *((unsigned char *)t11) = (unsigned char)1;
    goto LAB1;

LAB7:    goto LAB5;

LAB8:    t11 = (t0 + 3616);
    t18 = xsi_access_variable_all(t2);
    t20 = (t18 + 56U);
    t24 = *((char **)t20);
    t20 = (t10 + 4U);
    t25 = xsi_access_variable_all(*((char **)t20));
    t27 = (t25 + 64U);
    t27 = *((char **)t27);
    t28 = (t27 + 0U);
    t15 = *((int *)t28);
    t29 = (t10 + 4U);
    t31 = xsi_access_variable_all(*((char **)t29));
    t32 = (t31 + 64U);
    t32 = *((char **)t32);
    t34 = (t32 + 0U);
    t17 = *((int *)t34);
    t12 = (t17 - t15);
    t35 = (t10 + 4U);
    t37 = xsi_access_variable_all(*((char **)t35));
    t38 = (t37 + 64U);
    t38 = *((char **)t38);
    t40 = (t38 + 4U);
    t19 = *((int *)t40);
    t41 = (t10 + 4U);
    t44 = xsi_access_variable_all(*((char **)t41));
    t45 = (t44 + 64U);
    t45 = *((char **)t45);
    t46 = (t45 + 4U);
    t22 = *((int *)t46);
    t47 = (t10 + 4U);
    t50 = xsi_access_variable_all(*((char **)t47));
    t51 = (t50 + 64U);
    t51 = *((char **)t51);
    t52 = (t51 + 8U);
    t53 = *((int *)t52);
    xsi_vhdl_check_range_of_slice(t15, t22, t53, t17, t19, 1);
    t23 = (t12 * 1U);
    t54 = (0 + t23);
    t55 = (t24 + t54);
    t58 = ((STD_STANDARD) + 984);
    t60 = (t59 + 0U);
    t61 = (t60 + 0U);
    *((int *)t61) = 1;
    t61 = (t60 + 4U);
    *((int *)t61) = 34;
    t61 = (t60 + 8U);
    *((int *)t61) = 1;
    t62 = (34 - 1);
    t63 = (t62 * 1);
    t63 = (t63 + 1);
    t61 = (t60 + 12U);
    *((unsigned int *)t61) = t63;
    t61 = (t10 + 4U);
    t65 = xsi_access_variable_all(*((char **)t61));
    t66 = (t65 + 64U);
    t66 = *((char **)t66);
    t67 = (t66 + 0U);
    t68 = *((int *)t67);
    t69 = (t10 + 4U);
    t70 = xsi_access_variable_all(*((char **)t69));
    t71 = (t70 + 64U);
    t71 = *((char **)t71);
    t72 = (t71 + 4U);
    t73 = *((int *)t72);
    t74 = (t64 + 0U);
    t75 = (t74 + 0U);
    *((int *)t75) = t68;
    t75 = (t74 + 4U);
    *((int *)t75) = t73;
    t75 = (t74 + 8U);
    *((int *)t75) = 1;
    t76 = (t73 - t68);
    t63 = (t76 * 1);
    t63 = (t63 + 1);
    t75 = (t74 + 12U);
    *((unsigned int *)t75) = t63;
    t56 = xsi_base_array_concat(t56, t57, t58, (char)97, t11, t59, (char)97, t55, t64, (char)101);
    t75 = (t10 + 4U);
    t77 = xsi_access_variable_all(*((char **)t75));
    t78 = (t77 + 64U);
    t78 = *((char **)t78);
    t79 = (t78 + 0U);
    t80 = *((int *)t79);
    t81 = (t10 + 4U);
    t82 = xsi_access_variable_all(*((char **)t81));
    t83 = (t82 + 64U);
    t83 = *((char **)t83);
    t84 = (t83 + 4U);
    t85 = *((int *)t84);
    t86 = (t85 - t80);
    t63 = (t86 * 1);
    t63 = (t63 + 1);
    t87 = (1U * t63);
    t88 = (34U + t87);
    xsi_report(t56, t88, (unsigned char)3);
    goto LAB9;

}


extern void nf10_axis_sim_pkg_v1_00_a_p_2797826550_init()
{
	static char *se[] = {(void *)nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_9052813945161223267_355431523,(void *)nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_16923163327624947528_355431523,(void *)nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_16237956377822765066_355431523,(void *)nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_16377608295430327215_355431523,(void *)nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_17927017279289589510_355431523};
	xsi_register_didat("nf10_axis_sim_pkg_v1_00_a_p_2797826550", "isim/isim_system_axisim.sim/nf10_axis_sim_pkg_v1_00_a/p_2797826550.didat");
	xsi_register_subprogram_executes(se);
}
