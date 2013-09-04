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
static const char *ng0 = "/root/NetFPGA-10G-live/projects/crypto_nic/test/both_crypto_testtest/pcores/nf10_crypto_v1_00_a/hdl/verilog/crypto.v";
static int ng1[] = {0, 0};
static int ng2[] = {2, 0};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {19088743U, 0U};
static unsigned int ng5[] = {0U, 0U};
static unsigned int ng6[] = {1U, 0U};
static int ng7[] = {7, 0};
static unsigned int ng8[] = {2U, 0U};
static int ng9[] = {8, 0};



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
    xsi_set_current_line(95, ng0);

LAB2:    xsi_set_current_line(96, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t1 + 8952);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(97, ng0);

LAB3:    t3 = ((char*)((ng2)));
    t4 = (t1 + 8952);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    xsi_vlog_signed_power(t7, 32, t3, 32, t6, 32, 1);
    t8 = (t1 + 9112);
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
LAB4:    xsi_set_current_line(97, ng0);

LAB6:    xsi_set_current_line(98, ng0);
    t18 = (t1 + 8952);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng3)));
    memset(t22, 0, 8);
    xsi_vlog_signed_add(t22, 32, t20, 32, t21, 32);
    t23 = (t1 + 8952);
    xsi_vlogvar_assign_value(t23, t22, 0, 0, 32);
    goto LAB3;

}

static void Cont_141_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 10024U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(141, ng0);
    t2 = (t0 + 5352U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t4 + 4);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t4);
    t8 = (t7 & t6);
    t9 = (t8 & 1U);
    if (t9 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t2) == 0)
        goto LAB4;

LAB6:    t10 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t10) = 1;

LAB7:    t11 = (t0 + 11992);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memset(t15, 0, 8);
    t16 = 1U;
    t17 = t16;
    t18 = (t3 + 4);
    t19 = *((unsigned int *)t3);
    t16 = (t16 & t19);
    t20 = *((unsigned int *)t18);
    t17 = (t17 & t20);
    t21 = (t15 + 4);
    t22 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t22 | t16);
    t23 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t23 | t17);
    xsi_driver_vfirst_trans(t11, 0, 0);
    t24 = (t0 + 11832);
    *((int *)t24) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

}

static void Cont_142_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 10272U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(142, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 12056);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8);
    xsi_driver_vfirst_trans(t3, 0, 31);

LAB1:    return;
}

static void Always_144_2(char *t0)
{
    char t6[8];
    char t15[8];
    char t24[8];
    char t32[8];
    char t73[64];
    char t74[64];
    char t75[64];
    char t76[56];
    char t86[64];
    char t110[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    int t56;
    int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    char *t72;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    unsigned int t85;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    char *t91;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    unsigned int t99;
    char *t100;
    unsigned int t101;
    char *t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    char *t111;
    char *t112;
    char *t113;
    char *t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    char *t121;

LAB0:    t1 = (t0 + 10520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(144, ng0);
    t2 = (t0 + 11848);
    *((int *)t2) = 1;
    t3 = (t0 + 10552);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(144, ng0);

LAB5:    xsi_set_current_line(145, ng0);
    t4 = (t0 + 5672U);
    t5 = *((char **)t4);
    t4 = (t0 + 7672);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 128);
    xsi_set_current_line(146, ng0);
    t2 = (t0 + 6152U);
    t3 = *((char **)t2);
    t2 = (t0 + 7992);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    xsi_set_current_line(147, ng0);
    t2 = (t0 + 5992U);
    t3 = *((char **)t2);
    t2 = (t0 + 7512);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(148, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7832);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(150, ng0);
    t2 = (t0 + 5832U);
    t3 = *((char **)t2);
    t2 = (t0 + 7352);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 256);
    xsi_set_current_line(152, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 8152);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(154, ng0);
    t2 = (t0 + 3432U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t2) != 0)
        goto LAB8;

LAB9:    t5 = (t6 + 4);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t5);
    t14 = (t12 || t13);
    if (t14 > 0)
        goto LAB10;

LAB11:    memcpy(t32, t6, 8);

LAB12:    t64 = (t32 + 4);
    t65 = *((unsigned int *)t64);
    t66 = (~(t65));
    t67 = *((unsigned int *)t32);
    t68 = (t67 & t66);
    t69 = (t68 != 0);
    if (t69 > 0)
        goto LAB24;

LAB25:
LAB26:    xsi_set_current_line(158, ng0);
    t2 = (t0 + 8472);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8312);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 2);
    xsi_set_current_line(159, ng0);
    t2 = (t0 + 5832U);
    t3 = *((char **)t2);
    t2 = (t0 + 8632);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 256);
    xsi_set_current_line(161, ng0);
    t2 = (t0 + 3272U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB31;

LAB29:    if (*((unsigned int *)t2) == 0)
        goto LAB28;

LAB30:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;

LAB31:    t5 = (t6 + 4);
    t12 = *((unsigned int *)t5);
    t13 = (~(t12));
    t14 = *((unsigned int *)t6);
    t18 = (t14 & t13);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB32;

LAB33:    xsi_set_current_line(163, ng0);

LAB36:    xsi_set_current_line(164, ng0);
    t2 = (t0 + 8312);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB37:    t5 = ((char*)((ng5)));
    t56 = xsi_vlog_unsigned_case_compare(t4, 2, t5, 2);
    if (t56 == 1)
        goto LAB38;

LAB39:    t2 = ((char*)((ng6)));
    t56 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t56 == 1)
        goto LAB40;

LAB41:    t2 = ((char*)((ng8)));
    t56 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t56 == 1)
        goto LAB42;

LAB43:
LAB44:
LAB34:    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB8:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    t16 = (t0 + 5512U);
    t17 = *((char **)t16);
    memset(t15, 0, 8);
    t16 = (t17 + 4);
    t18 = *((unsigned int *)t16);
    t19 = (~(t18));
    t20 = *((unsigned int *)t17);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB16;

LAB14:    if (*((unsigned int *)t16) == 0)
        goto LAB13;

LAB15:    t23 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t23) = 1;

LAB16:    memset(t24, 0, 8);
    t25 = (t15 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t15);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t25) != 0)
        goto LAB19;

LAB20:    t33 = *((unsigned int *)t6);
    t34 = *((unsigned int *)t24);
    t35 = (t33 & t34);
    *((unsigned int *)t32) = t35;
    t36 = (t6 + 4);
    t37 = (t24 + 4);
    t38 = (t32 + 4);
    t39 = *((unsigned int *)t36);
    t40 = *((unsigned int *)t37);
    t41 = (t39 | t40);
    *((unsigned int *)t38) = t41;
    t42 = *((unsigned int *)t38);
    t43 = (t42 != 0);
    if (t43 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB12;

LAB13:    *((unsigned int *)t15) = 1;
    goto LAB16;

LAB17:    *((unsigned int *)t24) = 1;
    goto LAB20;

LAB19:    t31 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB20;

LAB21:    t44 = *((unsigned int *)t32);
    t45 = *((unsigned int *)t38);
    *((unsigned int *)t32) = (t44 | t45);
    t46 = (t6 + 4);
    t47 = (t24 + 4);
    t48 = *((unsigned int *)t6);
    t49 = (~(t48));
    t50 = *((unsigned int *)t46);
    t51 = (~(t50));
    t52 = *((unsigned int *)t24);
    t53 = (~(t52));
    t54 = *((unsigned int *)t47);
    t55 = (~(t54));
    t56 = (t49 & t51);
    t57 = (t53 & t55);
    t58 = (~(t56));
    t59 = (~(t57));
    t60 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t60 & t58);
    t61 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t61 & t59);
    t62 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t62 & t58);
    t63 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t63 & t59);
    goto LAB23;

LAB24:    xsi_set_current_line(154, ng0);

LAB27:    xsi_set_current_line(155, ng0);
    t70 = ((char*)((ng3)));
    t71 = (t0 + 8152);
    xsi_vlogvar_assign_value(t71, t70, 0, 0, 1);
    goto LAB26;

LAB28:    *((unsigned int *)t6) = 1;
    goto LAB31;

LAB32:    xsi_set_current_line(161, ng0);

LAB35:    xsi_set_current_line(162, ng0);
    t16 = ((char*)((ng5)));
    t17 = (t0 + 8312);
    xsi_vlogvar_assign_value(t17, t16, 0, 0, 2);
    goto LAB34;

LAB38:    xsi_set_current_line(165, ng0);

LAB45:    xsi_set_current_line(166, ng0);
    t16 = (t0 + 5512U);
    t17 = *((char **)t16);
    memset(t6, 0, 8);
    t16 = (t17 + 4);
    t7 = *((unsigned int *)t16);
    t8 = (~(t7));
    t9 = *((unsigned int *)t17);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB49;

LAB47:    if (*((unsigned int *)t16) == 0)
        goto LAB46;

LAB48:    t23 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t23) = 1;

LAB49:    t25 = (t6 + 4);
    t31 = (t17 + 4);
    t12 = *((unsigned int *)t17);
    t13 = (~(t12));
    *((unsigned int *)t6) = t13;
    *((unsigned int *)t25) = 0;
    if (*((unsigned int *)t31) != 0)
        goto LAB51;

LAB50:    t21 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t21 & 1U);
    t22 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t22 & 1U);
    t36 = (t0 + 7832);
    xsi_vlogvar_assign_value(t36, t6, 0, 0, 1);
    xsi_set_current_line(167, ng0);
    t2 = (t0 + 7832);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t6, 0, 8);
    t16 = (t5 + 4);
    t7 = *((unsigned int *)t16);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t16) != 0)
        goto LAB54;

LAB55:    t23 = (t6 + 4);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t23);
    t14 = (t12 || t13);
    if (t14 > 0)
        goto LAB56;

LAB57:    memcpy(t24, t6, 8);

LAB58:    t70 = (t24 + 4);
    t59 = *((unsigned int *)t70);
    t60 = (~(t59));
    t61 = *((unsigned int *)t24);
    t62 = (t61 & t60);
    t63 = (t62 != 0);
    if (t63 > 0)
        goto LAB66;

LAB67:
LAB68:    goto LAB44;

LAB40:    xsi_set_current_line(171, ng0);

LAB70:    xsi_set_current_line(172, ng0);
    t3 = (t0 + 5512U);
    t5 = *((char **)t3);
    memset(t6, 0, 8);
    t3 = (t5 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB74;

LAB72:    if (*((unsigned int *)t3) == 0)
        goto LAB71;

LAB73:    t16 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t16) = 1;

LAB74:    t17 = (t6 + 4);
    t23 = (t5 + 4);
    t12 = *((unsigned int *)t5);
    t13 = (~(t12));
    *((unsigned int *)t6) = t13;
    *((unsigned int *)t17) = 0;
    if (*((unsigned int *)t23) != 0)
        goto LAB76;

LAB75:    t21 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t21 & 1U);
    t22 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t22 & 1U);
    t25 = (t0 + 7832);
    xsi_vlogvar_assign_value(t25, t6, 0, 0, 1);
    xsi_set_current_line(173, ng0);
    t2 = (t0 + 7832);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t6, 0, 8);
    t16 = (t5 + 4);
    t7 = *((unsigned int *)t16);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB77;

LAB78:    if (*((unsigned int *)t16) != 0)
        goto LAB79;

LAB80:    t23 = (t6 + 4);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t23);
    t14 = (t12 || t13);
    if (t14 > 0)
        goto LAB81;

LAB82:    memcpy(t24, t6, 8);

LAB83:    t70 = (t24 + 4);
    t59 = *((unsigned int *)t70);
    t60 = (~(t59));
    t61 = *((unsigned int *)t24);
    t62 = (t61 & t60);
    t63 = (t62 != 0);
    if (t63 > 0)
        goto LAB91;

LAB92:
LAB93:    goto LAB44;

LAB42:    xsi_set_current_line(184, ng0);

LAB108:    xsi_set_current_line(185, ng0);
    t3 = (t0 + 5512U);
    t5 = *((char **)t3);
    memset(t6, 0, 8);
    t3 = (t5 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB112;

LAB110:    if (*((unsigned int *)t3) == 0)
        goto LAB109;

LAB111:    t16 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t16) = 1;

LAB112:    t17 = (t6 + 4);
    t23 = (t5 + 4);
    t12 = *((unsigned int *)t5);
    t13 = (~(t12));
    *((unsigned int *)t6) = t13;
    *((unsigned int *)t17) = 0;
    if (*((unsigned int *)t23) != 0)
        goto LAB114;

LAB113:    t21 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t21 & 1U);
    t22 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t22 & 1U);
    t25 = (t0 + 7832);
    xsi_vlogvar_assign_value(t25, t6, 0, 0, 1);
    xsi_set_current_line(186, ng0);
    t2 = (t0 + 7832);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t6, 0, 8);
    t16 = (t5 + 4);
    t7 = *((unsigned int *)t16);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB115;

LAB116:    if (*((unsigned int *)t16) != 0)
        goto LAB117;

LAB118:    t23 = (t6 + 4);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t23);
    t14 = (t12 || t13);
    if (t14 > 0)
        goto LAB119;

LAB120:    memcpy(t24, t6, 8);

LAB121:    t70 = (t24 + 4);
    t59 = *((unsigned int *)t70);
    t60 = (~(t59));
    t61 = *((unsigned int *)t24);
    t62 = (t61 & t60);
    t63 = (t62 != 0);
    if (t63 > 0)
        goto LAB129;

LAB130:
LAB131:    goto LAB44;

LAB46:    *((unsigned int *)t6) = 1;
    goto LAB49;

LAB51:    t14 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t31);
    *((unsigned int *)t6) = (t14 | t18);
    t19 = *((unsigned int *)t25);
    t20 = *((unsigned int *)t31);
    *((unsigned int *)t25) = (t19 | t20);
    goto LAB50;

LAB52:    *((unsigned int *)t6) = 1;
    goto LAB55;

LAB54:    t17 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB55;

LAB56:    t25 = (t0 + 3432U);
    t31 = *((char **)t25);
    memset(t15, 0, 8);
    t25 = (t31 + 4);
    t18 = *((unsigned int *)t25);
    t19 = (~(t18));
    t20 = *((unsigned int *)t31);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t25) != 0)
        goto LAB61;

LAB62:    t26 = *((unsigned int *)t6);
    t27 = *((unsigned int *)t15);
    t28 = (t26 & t27);
    *((unsigned int *)t24) = t28;
    t37 = (t6 + 4);
    t38 = (t15 + 4);
    t46 = (t24 + 4);
    t29 = *((unsigned int *)t37);
    t30 = *((unsigned int *)t38);
    t33 = (t29 | t30);
    *((unsigned int *)t46) = t33;
    t34 = *((unsigned int *)t46);
    t35 = (t34 != 0);
    if (t35 == 1)
        goto LAB63;

LAB64:
LAB65:    goto LAB58;

LAB59:    *((unsigned int *)t15) = 1;
    goto LAB62;

LAB61:    t36 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB62;

LAB63:    t39 = *((unsigned int *)t24);
    t40 = *((unsigned int *)t46);
    *((unsigned int *)t24) = (t39 | t40);
    t47 = (t6 + 4);
    t64 = (t15 + 4);
    t41 = *((unsigned int *)t6);
    t42 = (~(t41));
    t43 = *((unsigned int *)t47);
    t44 = (~(t43));
    t45 = *((unsigned int *)t15);
    t48 = (~(t45));
    t49 = *((unsigned int *)t64);
    t50 = (~(t49));
    t56 = (t42 & t44);
    t57 = (t48 & t50);
    t51 = (~(t56));
    t52 = (~(t57));
    t53 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t53 & t51);
    t54 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t54 & t52);
    t55 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t55 & t51);
    t58 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t58 & t52);
    goto LAB65;

LAB66:    xsi_set_current_line(167, ng0);

LAB69:    xsi_set_current_line(168, ng0);
    t71 = ((char*)((ng6)));
    t72 = (t0 + 8472);
    xsi_vlogvar_assign_value(t72, t71, 0, 0, 2);
    goto LAB68;

LAB71:    *((unsigned int *)t6) = 1;
    goto LAB74;

LAB76:    t14 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t23);
    *((unsigned int *)t6) = (t14 | t18);
    t19 = *((unsigned int *)t17);
    t20 = *((unsigned int *)t23);
    *((unsigned int *)t17) = (t19 | t20);
    goto LAB75;

LAB77:    *((unsigned int *)t6) = 1;
    goto LAB80;

LAB79:    t17 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB80;

LAB81:    t25 = (t0 + 3432U);
    t31 = *((char **)t25);
    memset(t15, 0, 8);
    t25 = (t31 + 4);
    t18 = *((unsigned int *)t25);
    t19 = (~(t18));
    t20 = *((unsigned int *)t31);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB84;

LAB85:    if (*((unsigned int *)t25) != 0)
        goto LAB86;

LAB87:    t26 = *((unsigned int *)t6);
    t27 = *((unsigned int *)t15);
    t28 = (t26 & t27);
    *((unsigned int *)t24) = t28;
    t37 = (t6 + 4);
    t38 = (t15 + 4);
    t46 = (t24 + 4);
    t29 = *((unsigned int *)t37);
    t30 = *((unsigned int *)t38);
    t33 = (t29 | t30);
    *((unsigned int *)t46) = t33;
    t34 = *((unsigned int *)t46);
    t35 = (t34 != 0);
    if (t35 == 1)
        goto LAB88;

LAB89:
LAB90:    goto LAB83;

LAB84:    *((unsigned int *)t15) = 1;
    goto LAB87;

LAB86:    t36 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB87;

LAB88:    t39 = *((unsigned int *)t24);
    t40 = *((unsigned int *)t46);
    *((unsigned int *)t24) = (t39 | t40);
    t47 = (t6 + 4);
    t64 = (t15 + 4);
    t41 = *((unsigned int *)t6);
    t42 = (~(t41));
    t43 = *((unsigned int *)t47);
    t44 = (~(t43));
    t45 = *((unsigned int *)t15);
    t48 = (~(t45));
    t49 = *((unsigned int *)t64);
    t50 = (~(t49));
    t56 = (t42 & t44);
    t57 = (t48 & t50);
    t51 = (~(t56));
    t52 = (~(t57));
    t53 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t53 & t51);
    t54 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t54 & t52);
    t55 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t55 & t51);
    t58 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t58 & t52);
    goto LAB90;

LAB91:    xsi_set_current_line(173, ng0);

LAB94:    xsi_set_current_line(174, ng0);
    t71 = (t0 + 5832U);
    t72 = *((char **)t71);
    xsi_vlog_get_part_select_value(t74, 240, t72, 239, 0);
    t71 = ((char*)((ng7)));
    t77 = (t0 + 8792);
    t78 = (t77 + 56U);
    t79 = *((char **)t78);
    xsi_vlog_mul_concat(t76, 224, 32, t71, 1U, t79, 32);
    t80 = (t0 + 8792);
    t81 = (t80 + 56U);
    t82 = *((char **)t81);
    memset(t32, 0, 8);
    t83 = (t32 + 4);
    t84 = (t82 + 4);
    t65 = *((unsigned int *)t82);
    t66 = (t65 >> 0);
    *((unsigned int *)t32) = t66;
    t67 = *((unsigned int *)t84);
    t68 = (t67 >> 0);
    *((unsigned int *)t83) = t68;
    t69 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t69 & 65535U);
    t85 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t85 & 65535U);
    xsi_vlogtype_concat(t75, 240, 240, 2U, t32, 16, t76, 224);
    t87 = 0;

LAB98:    t88 = (t87 < 8);
    if (t88 == 1)
        goto LAB99;

LAB100:    t111 = (t0 + 5832U);
    t112 = *((char **)t111);
    memset(t110, 0, 8);
    t111 = (t110 + 4);
    t113 = (t112 + 56);
    t114 = (t112 + 60);
    t115 = *((unsigned int *)t113);
    t116 = (t115 >> 16);
    *((unsigned int *)t110) = t116;
    t117 = *((unsigned int *)t114);
    t118 = (t117 >> 16);
    *((unsigned int *)t111) = t118;
    t119 = *((unsigned int *)t110);
    *((unsigned int *)t110) = (t119 & 65535U);
    t120 = *((unsigned int *)t111);
    *((unsigned int *)t111) = (t120 & 65535U);
    xsi_vlogtype_concat(t73, 256, 256, 2U, t110, 16, t86, 240);
    t121 = (t0 + 7352);
    xsi_vlogvar_assign_value(t121, t73, 0, 0, 256);
    xsi_set_current_line(178, ng0);
    t2 = (t0 + 7992);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t6, 0, 8);
    t16 = (t5 + 4);
    t7 = *((unsigned int *)t16);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB104;

LAB102:    if (*((unsigned int *)t16) == 0)
        goto LAB101;

LAB103:    t17 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t17) = 1;

LAB104:    t23 = (t6 + 4);
    t12 = *((unsigned int *)t23);
    t13 = (~(t12));
    t14 = *((unsigned int *)t6);
    t18 = (t14 & t13);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB105;

LAB106:    xsi_set_current_line(181, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 8472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB107:    goto LAB93;

LAB95:    t108 = *((unsigned int *)t92);
    t109 = *((unsigned int *)t102);
    *((unsigned int *)t92) = (t108 | t109);

LAB97:    t87 = (t87 + 1);
    goto LAB98;

LAB96:    goto LAB97;

LAB99:    t89 = (t87 * 8);
    t90 = (t74 + t89);
    t91 = (t75 + t89);
    t92 = (t86 + t89);
    t93 = *((unsigned int *)t90);
    t94 = *((unsigned int *)t91);
    t95 = (t93 ^ t94);
    *((unsigned int *)t92) = t95;
    t96 = (t87 * 8);
    t97 = (t96 + 4);
    t98 = (t74 + t97);
    t99 = (t96 + 4);
    t100 = (t75 + t99);
    t101 = (t96 + 4);
    t102 = (t86 + t101);
    t103 = *((unsigned int *)t98);
    t104 = *((unsigned int *)t100);
    t105 = (t103 | t104);
    *((unsigned int *)t102) = t105;
    t106 = *((unsigned int *)t102);
    t107 = (t106 != 0);
    if (t107 == 1)
        goto LAB95;
    else
        goto LAB96;

LAB101:    *((unsigned int *)t6) = 1;
    goto LAB104;

LAB105:    xsi_set_current_line(179, ng0);
    t25 = ((char*)((ng8)));
    t31 = (t0 + 8472);
    xsi_vlogvar_assign_value(t31, t25, 0, 0, 2);
    goto LAB107;

LAB109:    *((unsigned int *)t6) = 1;
    goto LAB112;

LAB114:    t14 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t23);
    *((unsigned int *)t6) = (t14 | t18);
    t19 = *((unsigned int *)t17);
    t20 = *((unsigned int *)t23);
    *((unsigned int *)t17) = (t19 | t20);
    goto LAB113;

LAB115:    *((unsigned int *)t6) = 1;
    goto LAB118;

LAB117:    t17 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB118;

LAB119:    t25 = (t0 + 3432U);
    t31 = *((char **)t25);
    memset(t15, 0, 8);
    t25 = (t31 + 4);
    t18 = *((unsigned int *)t25);
    t19 = (~(t18));
    t20 = *((unsigned int *)t31);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB122;

LAB123:    if (*((unsigned int *)t25) != 0)
        goto LAB124;

LAB125:    t26 = *((unsigned int *)t6);
    t27 = *((unsigned int *)t15);
    t28 = (t26 & t27);
    *((unsigned int *)t24) = t28;
    t37 = (t6 + 4);
    t38 = (t15 + 4);
    t46 = (t24 + 4);
    t29 = *((unsigned int *)t37);
    t30 = *((unsigned int *)t38);
    t33 = (t29 | t30);
    *((unsigned int *)t46) = t33;
    t34 = *((unsigned int *)t46);
    t35 = (t34 != 0);
    if (t35 == 1)
        goto LAB126;

LAB127:
LAB128:    goto LAB121;

LAB122:    *((unsigned int *)t15) = 1;
    goto LAB125;

LAB124:    t36 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB125;

LAB126:    t39 = *((unsigned int *)t24);
    t40 = *((unsigned int *)t46);
    *((unsigned int *)t24) = (t39 | t40);
    t47 = (t6 + 4);
    t64 = (t15 + 4);
    t41 = *((unsigned int *)t6);
    t42 = (~(t41));
    t43 = *((unsigned int *)t47);
    t44 = (~(t43));
    t45 = *((unsigned int *)t15);
    t48 = (~(t45));
    t49 = *((unsigned int *)t64);
    t50 = (~(t49));
    t56 = (t42 & t44);
    t57 = (t48 & t50);
    t51 = (~(t56));
    t52 = (~(t57));
    t53 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t53 & t51);
    t54 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t54 & t52);
    t55 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t55 & t51);
    t58 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t58 & t52);
    goto LAB128;

LAB129:    xsi_set_current_line(186, ng0);

LAB132:    xsi_set_current_line(187, ng0);
    t71 = (t0 + 5832U);
    t72 = *((char **)t71);
    t71 = ((char*)((ng9)));
    t77 = (t0 + 8792);
    t78 = (t77 + 56U);
    t79 = *((char **)t78);
    xsi_vlog_mul_concat(t73, 256, 32, t71, 1U, t79, 32);
    t65 = 0;

LAB136:    t66 = (t65 < 8);
    if (t66 == 1)
        goto LAB137;

LAB138:    t91 = (t0 + 7352);
    xsi_vlogvar_assign_value(t91, t74, 0, 0, 256);
    xsi_set_current_line(189, ng0);
    t2 = (t0 + 7992);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t16 = (t5 + 4);
    t7 = *((unsigned int *)t16);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB139;

LAB140:    xsi_set_current_line(191, ng0);

LAB143:    xsi_set_current_line(192, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 8472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB141:    goto LAB131;

LAB133:    t101 = *((unsigned int *)t82);
    t103 = *((unsigned int *)t90);
    *((unsigned int *)t82) = (t101 | t103);

LAB135:    t65 = (t65 + 1);
    goto LAB136;

LAB134:    goto LAB135;

LAB137:    t67 = (t65 * 8);
    t80 = (t72 + t67);
    t81 = (t73 + t67);
    t82 = (t74 + t67);
    t68 = *((unsigned int *)t80);
    t69 = *((unsigned int *)t81);
    t85 = (t68 ^ t69);
    *((unsigned int *)t82) = t85;
    t87 = (t65 * 8);
    t88 = (t87 + 4);
    t83 = (t72 + t88);
    t89 = (t87 + 4);
    t84 = (t73 + t89);
    t93 = (t87 + 4);
    t90 = (t74 + t93);
    t94 = *((unsigned int *)t83);
    t95 = *((unsigned int *)t84);
    t96 = (t94 | t95);
    *((unsigned int *)t90) = t96;
    t97 = *((unsigned int *)t90);
    t99 = (t97 != 0);
    if (t99 == 1)
        goto LAB133;
    else
        goto LAB134;

LAB139:    xsi_set_current_line(189, ng0);

LAB142:    xsi_set_current_line(190, ng0);
    t17 = ((char*)((ng5)));
    t23 = (t0 + 8472);
    xsi_vlogvar_assign_value(t23, t17, 0, 0, 2);
    goto LAB141;

}

static void Always_200_3(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;

LAB0:    t1 = (t0 + 10768U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(200, ng0);
    t2 = (t0 + 11864);
    *((int *)t2) = 1;
    t3 = (t0 + 10800);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(200, ng0);

LAB5:    xsi_set_current_line(201, ng0);
    t5 = (t0 + 3272U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(205, ng0);

LAB14:    xsi_set_current_line(206, ng0);
    t2 = (t0 + 8312);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 8472);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 2, 0LL);
    xsi_set_current_line(207, ng0);
    t2 = (t0 + 4552U);
    t3 = *((char **)t2);
    t2 = (t0 + 8792);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(201, ng0);

LAB13:    xsi_set_current_line(202, ng0);
    t19 = ((char*)((ng5)));
    t20 = (t0 + 8472);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 2, 0LL);
    xsi_set_current_line(203, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 8792);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB12;

}

static void implSig1_execute(char *t0)
{
    char t3[112];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 11016U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 3592U);
    t4 = *((char **)t2);
    t2 = (t0 + 3752U);
    t5 = *((char **)t2);
    t2 = (t0 + 3912U);
    t6 = *((char **)t2);
    t2 = (t0 + 4392U);
    t7 = *((char **)t2);
    xsi_vlogtype_concat(t3, 417, 417, 4U, t7, 1, t6, 128, t5, 32, t4, 256);
    t2 = (t0 + 12120);
    t8 = (t2 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    xsi_vlog_bit_copy(t11, 0, t3, 0, 417);
    xsi_driver_vfirst_trans(t2, 0, 416);
    t12 = (t0 + 11880);
    *((int *)t12) = 1;

LAB1:    return;
}

static void implSig2_execute(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    int t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;

LAB0:    t1 = (t0 + 11264U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 4072U);
    t3 = *((char **)t2);
    t2 = (t0 + 4232U);
    t4 = *((char **)t2);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t4);
    t8 = (t6 & t7);
    *((unsigned int *)t5) = t8;
    t2 = (t3 + 4);
    t9 = (t4 + 4);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t2);
    t12 = *((unsigned int *)t9);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 != 0);
    if (t15 == 1)
        goto LAB4;

LAB5:
LAB6:    t36 = (t0 + 12184);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    memset(t40, 0, 8);
    t41 = 1U;
    t42 = t41;
    t43 = (t5 + 4);
    t44 = *((unsigned int *)t5);
    t41 = (t41 & t44);
    t45 = *((unsigned int *)t43);
    t42 = (t42 & t45);
    t46 = (t40 + 4);
    t47 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t47 | t41);
    t48 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t48 | t42);
    xsi_driver_vfirst_trans(t36, 0, 0);
    t49 = (t0 + 11896);
    *((int *)t49) = 1;

LAB1:    return;
LAB4:    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t5) = (t16 | t17);
    t18 = (t3 + 4);
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t3);
    t21 = (~(t20));
    t22 = *((unsigned int *)t18);
    t23 = (~(t22));
    t24 = *((unsigned int *)t4);
    t25 = (~(t24));
    t26 = *((unsigned int *)t19);
    t27 = (~(t26));
    t28 = (t21 & t23);
    t29 = (t25 & t27);
    t30 = (~(t28));
    t31 = (~(t29));
    t32 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t32 & t30);
    t33 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t33 & t31);
    t34 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t34 & t30);
    t35 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t35 & t31);
    goto LAB6;

}

static void implSig3_execute(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;

LAB0:    t1 = (t0 + 11512U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 3272U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t4 + 4);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t4);
    t8 = (t7 & t6);
    t9 = (t8 & 1U);
    if (t9 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t2) == 0)
        goto LAB4;

LAB6:    t10 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t10) = 1;

LAB7:    t11 = (t3 + 4);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (~(t13));
    *((unsigned int *)t3) = t14;
    *((unsigned int *)t11) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB9;

LAB8:    t19 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t19 & 1U);
    t20 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t20 & 1U);
    t21 = (t0 + 12248);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memset(t25, 0, 8);
    t26 = 1U;
    t27 = t26;
    t28 = (t3 + 4);
    t29 = *((unsigned int *)t3);
    t26 = (t26 & t29);
    t30 = *((unsigned int *)t28);
    t27 = (t27 & t30);
    t31 = (t25 + 4);
    t32 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t32 | t26);
    t33 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t33 | t27);
    xsi_driver_vfirst_trans(t21, 0, 0);
    t34 = (t0 + 11912);
    *((int *)t34) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

LAB9:    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t12);
    *((unsigned int *)t3) = (t15 | t16);
    t17 = *((unsigned int *)t11);
    t18 = *((unsigned int *)t12);
    *((unsigned int *)t11) = (t17 | t18);
    goto LAB8;

}


extern void nf10_crypto_v1_00_a_m_03660392032206446033_1188081714_init()
{
	static char *pe[] = {(void *)Cont_141_0,(void *)Cont_142_1,(void *)Always_144_2,(void *)Always_200_3,(void *)implSig1_execute,(void *)implSig2_execute,(void *)implSig3_execute};
	static char *se[] = {(void *)sp_log2};
	xsi_register_didat("nf10_crypto_v1_00_a_m_03660392032206446033_1188081714", "isim/isim_system_axisim.sim/nf10_crypto_v1_00_a/m_03660392032206446033_1188081714.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
