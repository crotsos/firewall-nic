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
static const char *ng0 = "/root/NetFPGA-10G-live/lib/hw/std/pcores/nf10_axis_sim_stim_v1_10_a/simhdl/verilog/nf10_barrier.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static const char *ng4 = "";
static const char *ng5 = " %m Error: timeout exceeded waiting for barrier";
static int ng6[] = {1, 0};



static void Initial_43_0(char *t0)
{
    char t4[8];
    char t5[8];
    char t30[16];
    char t31[8];
    char t34[8];
    char t37[8];
    char t62[8];
    char t78[8];
    char t86[8];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    char *t29;
    char *t32;
    char *t33;
    char *t35;
    char *t36;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;
    char *t77;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    char *t85;
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
    unsigned int t98;
    unsigned int t99;
    char *t100;
    char *t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    char *t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    char *t120;
    char *t121;
    char *t122;

LAB0:    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);

LAB4:    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(48, ng0);

LAB5:    xsi_set_current_line(48, ng0);

LAB6:    xsi_set_current_line(49, ng0);

LAB7:    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    xsi_vlogtype_concat(t4, 32, 1, 1U, t3, 1);
    t2 = ((char*)((ng2)));
    memset(t5, 0, 8);
    t6 = (t4 + 4);
    t7 = (t2 + 4);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t2);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = (t10 | t13);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t7);
    t17 = (t15 | t16);
    t18 = (~(t17));
    t19 = (t14 & t18);
    if (t19 != 0)
        goto LAB9;

LAB8:    if (t17 != 0)
        goto LAB10;

LAB11:    t21 = (t5 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (~(t22));
    t24 = *((unsigned int *)t5);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB13;

LAB12:    t27 = (t0 + 3928);
    *((int *)t27) = 1;
    t28 = (t0 + 3112U);
    *((char **)t28) = &&LAB7;

LAB1:    return;
LAB9:    *((unsigned int *)t5) = 1;
    goto LAB11;

LAB10:    t20 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB11;

LAB13:    t29 = (t0 + 3928);
    *((int *)t29) = 0;
    xsi_set_current_line(51, ng0);
    t2 = xsi_vlog_time(t30, 10.000000000000000, 10.000000000000000);
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t30, 0, 0, 64);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 2920);
    xsi_process_wait(t2, 10LL);
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB14:    xsi_set_current_line(58, ng0);

LAB15:    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t4, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t2))
        goto LAB18;

LAB16:    t6 = (t3 + 4);
    t7 = (t2 + 4);
    if (*((unsigned int *)t6) != *((unsigned int *)t7))
        goto LAB18;

LAB17:    *((unsigned int *)t4) = 1;

LAB18:    memset(t5, 0, 8);
    t20 = (t4 + 4);
    t8 = *((unsigned int *)t20);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t20) != 0)
        goto LAB21;

LAB22:    t27 = (t5 + 4);
    t13 = *((unsigned int *)t5);
    t14 = (!(t13));
    t15 = *((unsigned int *)t27);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB23;

LAB24:    memcpy(t37, t5, 8);

LAB25:    memset(t62, 0, 8);
    t63 = (t37 + 4);
    t64 = *((unsigned int *)t63);
    t65 = (~(t64));
    t66 = *((unsigned int *)t37);
    t67 = (t66 & t65);
    t68 = (t67 & 1U);
    if (t68 != 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t63) != 0)
        goto LAB38;

LAB39:    t70 = (t62 + 4);
    t71 = *((unsigned int *)t62);
    t72 = (!(t71));
    t73 = *((unsigned int *)t70);
    t74 = (t72 || t73);
    if (t74 > 0)
        goto LAB40;

LAB41:    memcpy(t86, t62, 8);

LAB42:    t114 = (t86 + 4);
    t115 = *((unsigned int *)t114);
    t116 = (~(t115));
    t117 = *((unsigned int *)t86);
    t118 = (t117 & t116);
    t119 = (t118 != 0);
    if (t119 > 0)
        goto LAB51;

LAB50:    t120 = (t0 + 3944);
    *((int *)t120) = 1;
    t121 = (t0 + 3112U);
    *((char **)t121) = &&LAB15;
    goto LAB1;

LAB19:    *((unsigned int *)t5) = 1;
    goto LAB22;

LAB21:    t21 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB22;

LAB23:    t28 = (t0 + 1480U);
    t29 = *((char **)t28);
    t28 = ((char*)((ng2)));
    memset(t31, 0, 8);
    if (*((unsigned int *)t29) != *((unsigned int *)t28))
        goto LAB28;

LAB26:    t32 = (t29 + 4);
    t33 = (t28 + 4);
    if (*((unsigned int *)t32) != *((unsigned int *)t33))
        goto LAB28;

LAB27:    *((unsigned int *)t31) = 1;

LAB28:    memset(t34, 0, 8);
    t35 = (t31 + 4);
    t17 = *((unsigned int *)t35);
    t18 = (~(t17));
    t19 = *((unsigned int *)t31);
    t22 = (t19 & t18);
    t23 = (t22 & 1U);
    if (t23 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t35) != 0)
        goto LAB31;

LAB32:    t24 = *((unsigned int *)t5);
    t25 = *((unsigned int *)t34);
    t26 = (t24 | t25);
    *((unsigned int *)t37) = t26;
    t38 = (t5 + 4);
    t39 = (t34 + 4);
    t40 = (t37 + 4);
    t41 = *((unsigned int *)t38);
    t42 = *((unsigned int *)t39);
    t43 = (t41 | t42);
    *((unsigned int *)t40) = t43;
    t44 = *((unsigned int *)t40);
    t45 = (t44 != 0);
    if (t45 == 1)
        goto LAB33;

LAB34:
LAB35:    goto LAB25;

LAB29:    *((unsigned int *)t34) = 1;
    goto LAB32;

LAB31:    t36 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB32;

LAB33:    t46 = *((unsigned int *)t37);
    t47 = *((unsigned int *)t40);
    *((unsigned int *)t37) = (t46 | t47);
    t48 = (t5 + 4);
    t49 = (t34 + 4);
    t50 = *((unsigned int *)t48);
    t51 = (~(t50));
    t52 = *((unsigned int *)t5);
    t53 = (t52 & t51);
    t54 = *((unsigned int *)t49);
    t55 = (~(t54));
    t56 = *((unsigned int *)t34);
    t57 = (t56 & t55);
    t58 = (~(t53));
    t59 = (~(t57));
    t60 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t60 & t58);
    t61 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t61 & t59);
    goto LAB35;

LAB36:    *((unsigned int *)t62) = 1;
    goto LAB39;

LAB38:    t69 = (t62 + 4);
    *((unsigned int *)t62) = 1;
    *((unsigned int *)t69) = 1;
    goto LAB39;

LAB40:    t75 = (t0 + 2200);
    t76 = (t75 + 56U);
    t77 = *((char **)t76);
    memset(t78, 0, 8);
    t79 = (t77 + 4);
    t80 = *((unsigned int *)t79);
    t81 = (~(t80));
    t82 = *((unsigned int *)t77);
    t83 = (t82 & t81);
    t84 = (t83 & 1U);
    if (t84 != 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t79) != 0)
        goto LAB45;

LAB46:    t87 = *((unsigned int *)t62);
    t88 = *((unsigned int *)t78);
    t89 = (t87 | t88);
    *((unsigned int *)t86) = t89;
    t90 = (t62 + 4);
    t91 = (t78 + 4);
    t92 = (t86 + 4);
    t93 = *((unsigned int *)t90);
    t94 = *((unsigned int *)t91);
    t95 = (t93 | t94);
    *((unsigned int *)t92) = t95;
    t96 = *((unsigned int *)t92);
    t97 = (t96 != 0);
    if (t97 == 1)
        goto LAB47;

LAB48:
LAB49:    goto LAB42;

LAB43:    *((unsigned int *)t78) = 1;
    goto LAB46;

LAB45:    t85 = (t78 + 4);
    *((unsigned int *)t78) = 1;
    *((unsigned int *)t85) = 1;
    goto LAB46;

LAB47:    t98 = *((unsigned int *)t86);
    t99 = *((unsigned int *)t92);
    *((unsigned int *)t86) = (t98 | t99);
    t100 = (t62 + 4);
    t101 = (t78 + 4);
    t102 = *((unsigned int *)t100);
    t103 = (~(t102));
    t104 = *((unsigned int *)t62);
    t105 = (t104 & t103);
    t106 = *((unsigned int *)t101);
    t107 = (~(t106));
    t108 = *((unsigned int *)t78);
    t109 = (t108 & t107);
    t110 = (~(t105));
    t111 = (~(t109));
    t112 = *((unsigned int *)t92);
    *((unsigned int *)t92) = (t112 & t110);
    t113 = *((unsigned int *)t92);
    *((unsigned int *)t92) = (t113 & t111);
    goto LAB49;

LAB51:    t122 = (t0 + 3944);
    *((int *)t122) = 0;
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2200);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB52;

LAB53:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t4, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t2))
        goto LAB58;

LAB56:    t6 = (t3 + 4);
    t7 = (t2 + 4);
    if (*((unsigned int *)t6) != *((unsigned int *)t7))
        goto LAB58;

LAB57:    *((unsigned int *)t4) = 1;

LAB58:    t20 = (t4 + 4);
    t8 = *((unsigned int *)t20);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB59;

LAB60:
LAB61:
LAB54:    goto LAB5;

LAB52:    xsi_set_current_line(61, ng0);

LAB55:    xsi_set_current_line(62, ng0);
    t20 = xsi_vlog_time(t30, 10.000000000000000, 10.000000000000000);
    xsi_vlogfile_write(0, 0, 0, ng4, 2, t0, (char)118, t30, 64);
    xsi_vlogfile_write(1, 0, 0, ng5, 1, t0);
    xsi_set_current_line(63, ng0);
    xsi_vlog_finish(1);
    goto LAB54;

LAB59:    xsi_set_current_line(65, ng0);

LAB62:    xsi_set_current_line(68, ng0);
    t21 = ((char*)((ng6)));
    t27 = (t0 + 1880);
    xsi_vlogvar_assign_value(t27, t21, 0, 0, 1);
    xsi_set_current_line(70, ng0);

LAB63:    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t4, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t2))
        goto LAB66;

LAB64:    t6 = (t3 + 4);
    t7 = (t2 + 4);
    if (*((unsigned int *)t6) != *((unsigned int *)t7))
        goto LAB66;

LAB65:    *((unsigned int *)t4) = 1;

LAB66:    t20 = (t4 + 4);
    t8 = *((unsigned int *)t20);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB68;

LAB67:    t21 = (t0 + 3960);
    *((int *)t21) = 1;
    t27 = (t0 + 3112U);
    *((char **)t27) = &&LAB63;
    goto LAB1;

LAB68:    t28 = (t0 + 3960);
    *((int *)t28) = 0;
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB61;

LAB69:    goto LAB1;

}

static void Initial_78_1(char *t0)
{
    char t4[8];
    char t20[8];
    char t34[8];
    char t50[8];
    char t58[8];
    char t99[16];
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
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    int t82;
    int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    char *t97;
    char *t98;

LAB0:    t1 = (t0 + 3360U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(79, ng0);

LAB4:    xsi_set_current_line(80, ng0);

LAB5:    xsi_set_current_line(80, ng0);

LAB6:    xsi_set_current_line(81, ng0);

LAB7:    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB9;

LAB8:    if (t16 != 0)
        goto LAB10;

LAB11:    memset(t20, 0, 8);
    t21 = (t4 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (~(t22));
    t24 = *((unsigned int *)t4);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t21) != 0)
        goto LAB14;

LAB15:    t28 = (t20 + 4);
    t29 = *((unsigned int *)t20);
    t30 = *((unsigned int *)t28);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB16;

LAB17:    memcpy(t58, t20, 8);

LAB18:    t90 = (t58 + 4);
    t91 = *((unsigned int *)t90);
    t92 = (~(t91));
    t93 = *((unsigned int *)t58);
    t94 = (t93 & t92);
    t95 = (t94 != 0);
    if (t95 > 0)
        goto LAB31;

LAB30:    t96 = (t0 + 3976);
    *((int *)t96) = 1;
    t97 = (t0 + 3360U);
    *((char **)t97) = &&LAB7;

LAB1:    return;
LAB9:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB11;

LAB12:    *((unsigned int *)t20) = 1;
    goto LAB15;

LAB14:    t27 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB15;

LAB16:    t32 = (t0 + 1320U);
    t33 = *((char **)t32);
    t32 = ((char*)((ng2)));
    memset(t34, 0, 8);
    t35 = (t33 + 4);
    t36 = (t32 + 4);
    t37 = *((unsigned int *)t33);
    t38 = *((unsigned int *)t32);
    t39 = (t37 ^ t38);
    t40 = *((unsigned int *)t35);
    t41 = *((unsigned int *)t36);
    t42 = (t40 ^ t41);
    t43 = (t39 | t42);
    t44 = *((unsigned int *)t35);
    t45 = *((unsigned int *)t36);
    t46 = (t44 | t45);
    t47 = (~(t46));
    t48 = (t43 & t47);
    if (t48 != 0)
        goto LAB20;

LAB19:    if (t46 != 0)
        goto LAB21;

LAB22:    memset(t50, 0, 8);
    t51 = (t34 + 4);
    t52 = *((unsigned int *)t51);
    t53 = (~(t52));
    t54 = *((unsigned int *)t34);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t51) != 0)
        goto LAB25;

LAB26:    t59 = *((unsigned int *)t20);
    t60 = *((unsigned int *)t50);
    t61 = (t59 & t60);
    *((unsigned int *)t58) = t61;
    t62 = (t20 + 4);
    t63 = (t50 + 4);
    t64 = (t58 + 4);
    t65 = *((unsigned int *)t62);
    t66 = *((unsigned int *)t63);
    t67 = (t65 | t66);
    *((unsigned int *)t64) = t67;
    t68 = *((unsigned int *)t64);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB27;

LAB28:
LAB29:    goto LAB18;

LAB20:    *((unsigned int *)t34) = 1;
    goto LAB22;

LAB21:    t49 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB22;

LAB23:    *((unsigned int *)t50) = 1;
    goto LAB26;

LAB25:    t57 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB26;

LAB27:    t70 = *((unsigned int *)t58);
    t71 = *((unsigned int *)t64);
    *((unsigned int *)t58) = (t70 | t71);
    t72 = (t20 + 4);
    t73 = (t50 + 4);
    t74 = *((unsigned int *)t20);
    t75 = (~(t74));
    t76 = *((unsigned int *)t72);
    t77 = (~(t76));
    t78 = *((unsigned int *)t50);
    t79 = (~(t78));
    t80 = *((unsigned int *)t73);
    t81 = (~(t80));
    t82 = (t75 & t77);
    t83 = (t79 & t81);
    t84 = (~(t82));
    t85 = (~(t83));
    t86 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t86 & t84);
    t87 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t87 & t85);
    t88 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t88 & t84);
    t89 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t89 & t85);
    goto LAB29;

LAB31:    t98 = (t0 + 3976);
    *((int *)t98) = 0;
    xsi_set_current_line(83, ng0);
    t2 = xsi_vlog_time(t99, 10.000000000000000, 10.000000000000000);
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t99, 0, 0, 64);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 3168);
    xsi_process_wait(t2, 10LL);
    *((char **)t1) = &&LAB32;
    goto LAB1;

LAB32:    goto LAB5;

LAB33:    goto LAB1;

}

static void Initial_88_2(char *t0)
{
    char t4[8];
    char t28[8];
    char t51[16];
    char t52[16];
    char t53[16];
    char t56[8];
    char t59[8];
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
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    double t54;
    double t55;
    char *t57;
    char *t58;
    char *t60;
    char *t61;
    char *t62;
    unsigned int t63;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    int t74;
    int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    char *t88;
    char *t89;

LAB0:    t1 = (t0 + 3608U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(89, ng0);

LAB4:    xsi_set_current_line(90, ng0);

LAB5:    xsi_set_current_line(90, ng0);

LAB6:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB8;

LAB7:    if (t16 != 0)
        goto LAB9;

LAB10:    t20 = (t4 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t4);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(99, ng0);

LAB49:    xsi_set_current_line(100, ng0);

LAB50:    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB52;

LAB51:    if (t16 != 0)
        goto LAB53;

LAB54:    t20 = (t4 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t4);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB56;

LAB55:    t26 = (t0 + 3992);
    *((int *)t26) = 1;
    t27 = (t0 + 3608U);
    *((char **)t27) = &&LAB50;

LAB1:    return;
LAB8:    *((unsigned int *)t4) = 1;
    goto LAB10;

LAB9:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB10;

LAB11:    xsi_set_current_line(91, ng0);

LAB14:    xsi_set_current_line(92, ng0);

LAB15:    t26 = (t0 + 1480U);
    t27 = *((char **)t26);
    t26 = ((char*)((ng2)));
    memset(t28, 0, 8);
    t29 = (t27 + 4);
    t30 = (t26 + 4);
    t31 = *((unsigned int *)t27);
    t32 = *((unsigned int *)t26);
    t33 = (t31 ^ t32);
    t34 = *((unsigned int *)t29);
    t35 = *((unsigned int *)t30);
    t36 = (t34 ^ t35);
    t37 = (t33 | t36);
    t38 = *((unsigned int *)t29);
    t39 = *((unsigned int *)t30);
    t40 = (t38 | t39);
    t41 = (~(t40));
    t42 = (t37 & t41);
    if (t42 != 0)
        goto LAB17;

LAB16:    if (t40 != 0)
        goto LAB18;

LAB19:    t44 = (t28 + 4);
    t45 = *((unsigned int *)t44);
    t46 = (~(t45));
    t47 = *((unsigned int *)t28);
    t48 = (t47 & t46);
    t49 = (t48 != 0);
    if (t49 > 0)
        goto LAB20;

LAB21:
LAB13:    goto LAB5;

LAB17:    *((unsigned int *)t28) = 1;
    goto LAB19;

LAB18:    t43 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB19;

LAB20:    xsi_set_current_line(92, ng0);

LAB22:    xsi_set_current_line(93, ng0);
    t50 = (t0 + 3416);
    xsi_process_wait(t50, 10LL);
    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB23:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 2040);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 472);
    t19 = *((char **)t6);
    xsi_vlog_unsigned_add(t51, 64, t5, 64, t19, 32);
    t6 = xsi_vlog_time(t52, 10.000000000000000, 10.000000000000000);
    xsi_vlog_unsigned_minus(t53, 64, t51, 64, t52, 64);
    t54 = xsi_vlog_convert_to_real(t53, 64, 2);
    t54 = (t54 * 10.000000000000000);
    t55 = (t54 < 0.0000000000000000);
    if (t55 == 1)
        goto LAB24;

LAB25:    t54 = (t54 + 0.50000000000000000);
    t54 = ((int64)(t54));

LAB26:    t54 = (t54 * 1.0000000000000000);
    t20 = (t0 + 3416);
    xsi_process_wait(t20, t54);
    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB24:    t54 = 0.0000000000000000;
    goto LAB26;

LAB27:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB29;

LAB28:    if (t16 != 0)
        goto LAB30;

LAB31:    memset(t28, 0, 8);
    t20 = (t4 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t4);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t20) != 0)
        goto LAB34;

LAB35:    t27 = (t28 + 4);
    t31 = *((unsigned int *)t28);
    t32 = *((unsigned int *)t27);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB36;

LAB37:    memcpy(t59, t28, 8);

LAB38:    t82 = (t59 + 4);
    t83 = *((unsigned int *)t82);
    t84 = (~(t83));
    t85 = *((unsigned int *)t59);
    t86 = (t85 & t84);
    t87 = (t86 != 0);
    if (t87 > 0)
        goto LAB46;

LAB47:
LAB48:    goto LAB15;

LAB29:    *((unsigned int *)t4) = 1;
    goto LAB31;

LAB30:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB31;

LAB32:    *((unsigned int *)t28) = 1;
    goto LAB35;

LAB34:    t26 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB35;

LAB36:    t29 = (t0 + 2040);
    t30 = (t29 + 56U);
    t43 = *((char **)t30);
    t44 = (t0 + 472);
    t50 = *((char **)t44);
    xsi_vlog_unsigned_add(t51, 64, t43, 64, t50, 32);
    t44 = xsi_vlog_time(t52, 10.000000000000000, 10.000000000000000);
    xsi_vlog_unsigned_leq(t53, 64, t51, 64, t52, 64);
    memset(t56, 0, 8);
    t57 = (t53 + 4);
    t34 = *((unsigned int *)t57);
    t35 = (~(t34));
    t36 = *((unsigned int *)t53);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t57) != 0)
        goto LAB41;

LAB42:    t39 = *((unsigned int *)t28);
    t40 = *((unsigned int *)t56);
    t41 = (t39 & t40);
    *((unsigned int *)t59) = t41;
    t60 = (t28 + 4);
    t61 = (t56 + 4);
    t62 = (t59 + 4);
    t42 = *((unsigned int *)t60);
    t45 = *((unsigned int *)t61);
    t46 = (t42 | t45);
    *((unsigned int *)t62) = t46;
    t47 = *((unsigned int *)t62);
    t48 = (t47 != 0);
    if (t48 == 1)
        goto LAB43;

LAB44:
LAB45:    goto LAB38;

LAB39:    *((unsigned int *)t56) = 1;
    goto LAB42;

LAB41:    t58 = (t56 + 4);
    *((unsigned int *)t56) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB42;

LAB43:    t49 = *((unsigned int *)t59);
    t63 = *((unsigned int *)t62);
    *((unsigned int *)t59) = (t49 | t63);
    t64 = (t28 + 4);
    t65 = (t56 + 4);
    t66 = *((unsigned int *)t28);
    t67 = (~(t66));
    t68 = *((unsigned int *)t64);
    t69 = (~(t68));
    t70 = *((unsigned int *)t56);
    t71 = (~(t70));
    t72 = *((unsigned int *)t65);
    t73 = (~(t72));
    t74 = (t67 & t69);
    t75 = (t71 & t73);
    t76 = (~(t74));
    t77 = (~(t75));
    t78 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t78 & t76);
    t79 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t79 & t77);
    t80 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t80 & t76);
    t81 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t81 & t77);
    goto LAB45;

LAB46:    xsi_set_current_line(96, ng0);
    t88 = ((char*)((ng6)));
    t89 = (t0 + 2200);
    xsi_vlogvar_assign_value(t89, t88, 0, 0, 1);
    goto LAB48;

LAB52:    *((unsigned int *)t4) = 1;
    goto LAB54;

LAB53:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB54;

LAB56:    t29 = (t0 + 3992);
    *((int *)t29) = 0;
    goto LAB13;

LAB57:    goto LAB1;

}


extern void nf10_axis_sim_stim_v1_10_a_m_13510087108570620342_3910507664_init()
{
	static char *pe[] = {(void *)Initial_43_0,(void *)Initial_78_1,(void *)Initial_88_2};
	xsi_register_didat("nf10_axis_sim_stim_v1_10_a_m_13510087108570620342_3910507664", "isim/isim_system_axisim.sim/nf10_axis_sim_stim_v1_10_a/m_13510087108570620342_3910507664.didat");
	xsi_register_executes(pe);
}
