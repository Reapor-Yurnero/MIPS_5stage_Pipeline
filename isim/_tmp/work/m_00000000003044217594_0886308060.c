/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2007 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/

/* This file is designed for use with ISim build 0x734844ce */

#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static int ng0[] = {0, 0};
static unsigned int ng1[] = {1U, 0U};
static int ng2[] = {1, 0};
static const char *ng3 = "E:/OneDrive/JI/Junior/VE370/p2/MIPS_Pipeline/ALU.v";
static unsigned int ng4[] = {0U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {6U, 0U};
static unsigned int ng7[] = {7U, 0U};
static unsigned int ng8[] = {12U, 0U};



static void C11_0(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
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
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;

LAB0:    t1 = (t0 + 1704U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1228);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng0)));
    memset(t6, 0, 8);
    t7 = (t6 + 4U);
    t8 = (t4 + 4U);
    t9 = (t5 + 4U);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t8);
    t14 = *((unsigned int *)t9);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t9);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB7;

LAB4:    if (t19 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    t22 = (t0 + 2336);
    t23 = (t22 + 32U);
    t24 = *((char **)t23);
    t25 = (t24 + 40U);
    t26 = *((char **)t25);
    t27 = (t26 + 4U);
    t28 = 1U;
    t29 = t28;
    t30 = (t6 + 4U);
    t31 = *((unsigned int *)t6);
    t28 = (t28 & t31);
    t32 = *((unsigned int *)t30);
    t29 = (t29 & t32);
    t33 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t33 & 4294967294U);
    t34 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t34 | t28);
    t35 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t35 & 4294967294U);
    t36 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t36 | t29);
    xsi_driver_vfirst_trans(t22, 0, 0);
    t37 = (t0 + 2268);
    *((int *)t37) = 1;

LAB1:    return;
LAB6:    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB7;

}

static void C12_1(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 564U);
    t3 = *((char **)t2);
    t2 = (t0 + 652U);
    t4 = *((char **)t2);
    memset(t5, 0, 8);
    xsi_vlog_unsigned_minus(t5, 32, t3, 32, t4, 32);
    t2 = (t0 + 2372);
    t6 = (t2 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 8);
    xsi_driver_vfirst_trans(t2, 0, 31);
    t10 = (t0 + 2276);
    *((int *)t10) = 1;

LAB1:    return;
}

static void C13_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t16[8];
    char t25[8];
    char t41[8];
    char t55[8];
    char t69[8];
    char t79[8];
    char t87[8];
    char t103[8];
    char t111[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
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
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    char *t68;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t88;
    char *t89;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t104;
    char *t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    char *t115;
    char *t116;
    char *t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;
    char *t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    int t135;
    int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    char *t143;
    char *t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    char *t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    char *t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    char *t159;
    char *t160;
    char *t161;
    char *t162;
    char *t163;
    char *t164;
    char *t165;
    unsigned int t166;
    unsigned int t167;
    char *t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    char *t175;

LAB0:    t1 = (t0 + 1960U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 564U);
    t5 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4U);
    t7 = (t5 + 4U);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 31);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 31);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t14 = (t0 + 652U);
    t15 = *((char **)t14);
    memset(t16, 0, 8);
    t14 = (t16 + 4U);
    t17 = (t15 + 4U);
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 31);
    t20 = (t19 & 1);
    *((unsigned int *)t16) = t20;
    t21 = *((unsigned int *)t17);
    t22 = (t21 >> 31);
    t23 = (t22 & 1);
    *((unsigned int *)t14) = t23;
    t24 = ((char*)((ng1)));
    memset(t25, 0, 8);
    t26 = (t25 + 4U);
    t27 = (t16 + 4U);
    t28 = (t24 + 4U);
    t29 = *((unsigned int *)t16);
    t30 = *((unsigned int *)t24);
    t31 = (t29 ^ t30);
    t32 = *((unsigned int *)t27);
    t33 = *((unsigned int *)t28);
    t34 = (t32 ^ t33);
    t35 = (t31 | t34);
    t36 = *((unsigned int *)t27);
    t37 = *((unsigned int *)t28);
    t38 = (t36 | t37);
    t39 = (~(t38));
    t40 = (t35 & t39);
    if (t40 != 0)
        goto LAB7;

LAB4:    if (t38 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t25) = 1;

LAB7:    t42 = *((unsigned int *)t6);
    t43 = *((unsigned int *)t25);
    t44 = (t42 ^ t43);
    *((unsigned int *)t41) = t44;
    t45 = (t6 + 4U);
    t46 = (t25 + 4U);
    t47 = (t41 + 4U);
    t48 = *((unsigned int *)t45);
    t49 = *((unsigned int *)t46);
    t50 = (t48 | t49);
    *((unsigned int *)t47) = t50;
    t51 = *((unsigned int *)t47);
    t52 = (t51 != 0);
    if (t52 == 1)
        goto LAB8;

LAB9:
LAB10:    memset(t55, 0, 8);
    t56 = (t55 + 4U);
    t57 = (t41 + 4U);
    t58 = *((unsigned int *)t57);
    t59 = (~(t58));
    t60 = *((unsigned int *)t41);
    t61 = (t60 & t59);
    t62 = (t61 & 1U);
    if (t62 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t57) != 0)
        goto LAB13;

LAB14:    t63 = (t55 + 4U);
    t64 = *((unsigned int *)t55);
    t65 = *((unsigned int *)t63);
    t66 = (t64 || t65);
    if (t66 > 0)
        goto LAB15;

LAB16:    memcpy(t111, t55, 8);

LAB17:    memset(t4, 0, 8);
    t143 = (t4 + 4U);
    t144 = (t111 + 4U);
    t145 = *((unsigned int *)t144);
    t146 = (~(t145));
    t147 = *((unsigned int *)t111);
    t148 = (t147 & t146);
    t149 = (t148 & 1U);
    if (t149 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t144) != 0)
        goto LAB31;

LAB32:    t150 = (t4 + 4U);
    t151 = *((unsigned int *)t4);
    t152 = *((unsigned int *)t150);
    t153 = (t151 || t152);
    if (t153 > 0)
        goto LAB33;

LAB34:    t155 = *((unsigned int *)t4);
    t156 = (~(t155));
    t157 = *((unsigned int *)t150);
    t158 = (t156 || t157);
    if (t158 > 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t150) > 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t4) > 0)
        goto LAB39;

LAB40:    memcpy(t3, t159, 8);

LAB41:    t160 = (t0 + 2408);
    t161 = (t160 + 32U);
    t162 = *((char **)t161);
    t163 = (t162 + 40U);
    t164 = *((char **)t163);
    t165 = (t164 + 4U);
    t166 = 1U;
    t167 = t166;
    t168 = (t3 + 4U);
    t169 = *((unsigned int *)t3);
    t166 = (t166 & t169);
    t170 = *((unsigned int *)t168);
    t167 = (t167 & t170);
    t171 = *((unsigned int *)t164);
    *((unsigned int *)t164) = (t171 & 4294967294U);
    t172 = *((unsigned int *)t164);
    *((unsigned int *)t164) = (t172 | t166);
    t173 = *((unsigned int *)t165);
    *((unsigned int *)t165) = (t173 & 4294967294U);
    t174 = *((unsigned int *)t165);
    *((unsigned int *)t165) = (t174 | t167);
    xsi_driver_vfirst_trans(t160, 0, 0);
    t175 = (t0 + 2284);
    *((int *)t175) = 1;

LAB1:    return;
LAB6:    *((unsigned int *)t25) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB7;

LAB8:    t53 = *((unsigned int *)t41);
    t54 = *((unsigned int *)t47);
    *((unsigned int *)t41) = (t53 | t54);
    goto LAB10;

LAB11:    *((unsigned int *)t55) = 1;
    goto LAB14;

LAB13:    *((unsigned int *)t55) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB14;

LAB15:    t67 = (t0 + 916U);
    t68 = *((char **)t67);
    memset(t69, 0, 8);
    t67 = (t69 + 4U);
    t70 = (t68 + 4U);
    t71 = *((unsigned int *)t68);
    t72 = (t71 >> 31);
    t73 = (t72 & 1);
    *((unsigned int *)t69) = t73;
    t74 = *((unsigned int *)t70);
    t75 = (t74 >> 31);
    t76 = (t75 & 1);
    *((unsigned int *)t67) = t76;
    t77 = (t0 + 564U);
    t78 = *((char **)t77);
    memset(t79, 0, 8);
    t77 = (t79 + 4U);
    t80 = (t78 + 4U);
    t81 = *((unsigned int *)t78);
    t82 = (t81 >> 31);
    t83 = (t82 & 1);
    *((unsigned int *)t79) = t83;
    t84 = *((unsigned int *)t80);
    t85 = (t84 >> 31);
    t86 = (t85 & 1);
    *((unsigned int *)t77) = t86;
    memset(t87, 0, 8);
    t88 = (t87 + 4U);
    t89 = (t69 + 4U);
    t90 = (t79 + 4U);
    t91 = *((unsigned int *)t69);
    t92 = *((unsigned int *)t79);
    t93 = (t91 ^ t92);
    t94 = *((unsigned int *)t89);
    t95 = *((unsigned int *)t90);
    t96 = (t94 ^ t95);
    t97 = (t93 | t96);
    t98 = *((unsigned int *)t89);
    t99 = *((unsigned int *)t90);
    t100 = (t98 | t99);
    t101 = (~(t100));
    t102 = (t97 & t101);
    if (t102 != 0)
        goto LAB19;

LAB18:    if (t100 != 0)
        goto LAB20;

LAB21:    memset(t103, 0, 8);
    t104 = (t103 + 4U);
    t105 = (t87 + 4U);
    t106 = *((unsigned int *)t105);
    t107 = (~(t106));
    t108 = *((unsigned int *)t87);
    t109 = (t108 & t107);
    t110 = (t109 & 1U);
    if (t110 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t105) != 0)
        goto LAB24;

LAB25:    t112 = *((unsigned int *)t55);
    t113 = *((unsigned int *)t103);
    t114 = (t112 & t113);
    *((unsigned int *)t111) = t114;
    t115 = (t55 + 4U);
    t116 = (t103 + 4U);
    t117 = (t111 + 4U);
    t118 = *((unsigned int *)t115);
    t119 = *((unsigned int *)t116);
    t120 = (t118 | t119);
    *((unsigned int *)t117) = t120;
    t121 = *((unsigned int *)t117);
    t122 = (t121 != 0);
    if (t122 == 1)
        goto LAB26;

LAB27:
LAB28:    goto LAB17;

LAB19:    *((unsigned int *)t87) = 1;
    goto LAB21;

LAB20:    *((unsigned int *)t87) = 1;
    *((unsigned int *)t88) = 1;
    goto LAB21;

LAB22:    *((unsigned int *)t103) = 1;
    goto LAB25;

LAB24:    *((unsigned int *)t103) = 1;
    *((unsigned int *)t104) = 1;
    goto LAB25;

LAB26:    t123 = *((unsigned int *)t111);
    t124 = *((unsigned int *)t117);
    *((unsigned int *)t111) = (t123 | t124);
    t125 = (t55 + 4U);
    t126 = (t103 + 4U);
    t127 = *((unsigned int *)t55);
    t128 = (~(t127));
    t129 = *((unsigned int *)t125);
    t130 = (~(t129));
    t131 = *((unsigned int *)t103);
    t132 = (~(t131));
    t133 = *((unsigned int *)t126);
    t134 = (~(t133));
    t135 = (t128 & t130);
    t136 = (t132 & t134);
    t137 = (~(t135));
    t138 = (~(t136));
    t139 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t139 & t137);
    t140 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t140 & t138);
    t141 = *((unsigned int *)t111);
    *((unsigned int *)t111) = (t141 & t137);
    t142 = *((unsigned int *)t111);
    *((unsigned int *)t111) = (t142 & t138);
    goto LAB28;

LAB29:    *((unsigned int *)t4) = 1;
    goto LAB32;

LAB31:    *((unsigned int *)t4) = 1;
    *((unsigned int *)t143) = 1;
    goto LAB32;

LAB33:    t154 = ((char*)((ng2)));
    goto LAB34;

LAB35:    t159 = ((char*)((ng0)));
    goto LAB36;

LAB37:    xsi_vlog_unsigned_bit_combine(t3, 32, t154, 32, t159, 32);
    goto LAB41;

LAB39:    memcpy(t3, t154, 8);
    goto LAB41;

}

static void A15_3(char *t0)
{
    char t9[8];
    char t41[8];
    char t42[8];
    char t43[8];
    char t44[8];
    char t46[8];
    char t65[8];
    char t68[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t45;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t66;
    char *t67;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;

LAB0:    t1 = (t0 + 2088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15, ng3);
    t2 = (t0 + 2292);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(15, ng3);

LAB5:    xsi_set_current_line(16, ng3);
    t3 = (t0 + 740U);
    t4 = *((char **)t3);

LAB6:    t3 = ((char*)((ng4)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 4, t3, 4);
    if (t5 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng1)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t5 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t5 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t5 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng7)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t5 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng8)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t5 == 1)
        goto LAB17;

LAB18:
LAB20:
LAB19:    xsi_set_current_line(23, ng3);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 1228);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB21:    goto LAB2;

LAB7:    xsi_set_current_line(17, ng3);
    t6 = (t0 + 564U);
    t7 = *((char **)t6);
    t6 = (t0 + 652U);
    t8 = *((char **)t6);
    t10 = *((unsigned int *)t7);
    t11 = *((unsigned int *)t8);
    t12 = (t10 & t11);
    *((unsigned int *)t9) = t12;
    t6 = (t7 + 4U);
    t13 = (t8 + 4U);
    t14 = (t9 + 4U);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t13);
    t17 = (t15 | t16);
    *((unsigned int *)t14) = t17;
    t18 = *((unsigned int *)t14);
    t19 = (t18 != 0);
    if (t19 == 1)
        goto LAB22;

LAB23:
LAB24:    t40 = (t0 + 1228);
    xsi_vlogvar_assign_value(t40, t9, 0, 0, 32);
    goto LAB21;

LAB9:    xsi_set_current_line(18, ng3);
    t3 = (t0 + 564U);
    t6 = *((char **)t3);
    t3 = (t0 + 652U);
    t7 = *((char **)t3);
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t7);
    t12 = (t10 | t11);
    *((unsigned int *)t9) = t12;
    t3 = (t6 + 4U);
    t8 = (t7 + 4U);
    t13 = (t9 + 4U);
    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t8);
    t17 = (t15 | t16);
    *((unsigned int *)t13) = t17;
    t18 = *((unsigned int *)t13);
    t19 = (t18 != 0);
    if (t19 == 1)
        goto LAB25;

LAB26:
LAB27:    t23 = (t0 + 1228);
    xsi_vlogvar_assign_value(t23, t9, 0, 0, 32);
    goto LAB21;

LAB11:    xsi_set_current_line(19, ng3);
    t3 = (t0 + 564U);
    t6 = *((char **)t3);
    t3 = (t0 + 652U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t6, 32, t7, 32);
    t3 = (t0 + 1228);
    xsi_vlogvar_assign_value(t3, t9, 0, 0, 32);
    goto LAB21;

LAB13:    xsi_set_current_line(20, ng3);
    t3 = (t0 + 564U);
    t6 = *((char **)t3);
    t3 = (t0 + 652U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_minus(t9, 32, t6, 32, t7, 32);
    t3 = (t0 + 1228);
    xsi_vlogvar_assign_value(t3, t9, 0, 0, 32);
    goto LAB21;

LAB15:    xsi_set_current_line(21, ng3);
    t3 = (t0 + 1004U);
    t6 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t42, 0, 8);
    t7 = (t42 + 4U);
    t8 = (t6 + 4U);
    t13 = (t3 + 4U);
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t3);
    t12 = (t10 ^ t11);
    t15 = *((unsigned int *)t8);
    t16 = *((unsigned int *)t13);
    t17 = (t15 ^ t16);
    t18 = (t12 | t17);
    t19 = *((unsigned int *)t8);
    t20 = *((unsigned int *)t13);
    t21 = (t19 | t20);
    t24 = (~(t21));
    t25 = (t18 & t24);
    if (t25 != 0)
        goto LAB31;

LAB28:    if (t21 != 0)
        goto LAB30;

LAB29:    *((unsigned int *)t42) = 1;

LAB31:    memset(t41, 0, 8);
    t14 = (t41 + 4U);
    t22 = (t42 + 4U);
    t26 = *((unsigned int *)t22);
    t27 = (~(t26));
    t28 = *((unsigned int *)t42);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t22) != 0)
        goto LAB34;

LAB35:    t23 = (t41 + 4U);
    t31 = *((unsigned int *)t41);
    t34 = *((unsigned int *)t23);
    t35 = (t31 || t34);
    if (t35 > 0)
        goto LAB36;

LAB37:    t61 = *((unsigned int *)t41);
    t62 = (~(t61));
    t63 = *((unsigned int *)t23);
    t64 = (t62 || t63);
    if (t64 > 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t23) > 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t41) > 0)
        goto LAB42;

LAB43:    memcpy(t9, t65, 8);

LAB44:    t77 = (t0 + 1228);
    xsi_vlogvar_assign_value(t77, t9, 0, 0, 32);
    goto LAB21;

LAB17:    xsi_set_current_line(22, ng3);
    t3 = (t0 + 564U);
    t6 = *((char **)t3);
    t3 = (t0 + 652U);
    t7 = *((char **)t3);
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t7);
    t12 = (t10 | t11);
    *((unsigned int *)t41) = t12;
    t3 = (t6 + 4U);
    t8 = (t7 + 4U);
    t13 = (t41 + 4U);
    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t8);
    t17 = (t15 | t16);
    *((unsigned int *)t13) = t17;
    t18 = *((unsigned int *)t13);
    t19 = (t18 != 0);
    if (t19 == 1)
        goto LAB47;

LAB48:
LAB49:    memset(t9, 0, 8);
    t23 = (t9 + 4U);
    t40 = (t41 + 4U);
    t36 = *((unsigned int *)t41);
    t37 = (~(t36));
    *((unsigned int *)t9) = t37;
    *((unsigned int *)t23) = 0;
    if (*((unsigned int *)t40) != 0)
        goto LAB51;

LAB50:    t52 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t52 & 4294967295U);
    t53 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t53 & 4294967295U);
    t45 = (t0 + 1228);
    xsi_vlogvar_assign_value(t45, t9, 0, 0, 32);
    goto LAB21;

LAB22:    t20 = *((unsigned int *)t9);
    t21 = *((unsigned int *)t14);
    *((unsigned int *)t9) = (t20 | t21);
    t22 = (t7 + 4U);
    t23 = (t8 + 4U);
    t24 = *((unsigned int *)t7);
    t25 = (~(t24));
    t26 = *((unsigned int *)t22);
    t27 = (~(t26));
    t28 = *((unsigned int *)t8);
    t29 = (~(t28));
    t30 = *((unsigned int *)t23);
    t31 = (~(t30));
    t32 = (t25 & t27);
    t33 = (t29 & t31);
    t34 = (~(t32));
    t35 = (~(t33));
    t36 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t36 & t34);
    t37 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t37 & t35);
    t38 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t38 & t34);
    t39 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t39 & t35);
    goto LAB24;

LAB25:    t20 = *((unsigned int *)t9);
    t21 = *((unsigned int *)t13);
    *((unsigned int *)t9) = (t20 | t21);
    t14 = (t6 + 4U);
    t22 = (t7 + 4U);
    t24 = *((unsigned int *)t14);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t32 = (t26 & t25);
    t27 = *((unsigned int *)t22);
    t28 = (~(t27));
    t29 = *((unsigned int *)t7);
    t33 = (t29 & t28);
    t30 = (~(t32));
    t31 = (~(t33));
    t34 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t34 & t30);
    t35 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t35 & t31);
    goto LAB27;

LAB30:    *((unsigned int *)t42) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB31;

LAB32:    *((unsigned int *)t41) = 1;
    goto LAB35;

LAB34:    *((unsigned int *)t41) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB35;

LAB36:    t40 = (t0 + 916U);
    t45 = *((char **)t40);
    memset(t46, 0, 8);
    t40 = (t46 + 4U);
    t47 = (t45 + 4U);
    t36 = *((unsigned int *)t45);
    t37 = (t36 >> 31);
    t38 = (t37 & 1);
    *((unsigned int *)t46) = t38;
    t39 = *((unsigned int *)t47);
    t48 = (t39 >> 31);
    t49 = (t48 & 1);
    *((unsigned int *)t40) = t49;
    memset(t44, 0, 8);
    t50 = (t44 + 4U);
    t51 = (t46 + 4U);
    t52 = *((unsigned int *)t46);
    t53 = (~(t52));
    *((unsigned int *)t44) = t53;
    *((unsigned int *)t50) = 0;
    if (*((unsigned int *)t51) != 0)
        goto LAB46;

LAB45:    t58 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t58 & 1U);
    t59 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t59 & 1U);
    t60 = ((char*)((ng4)));
    xsi_vlogtype_concat(t43, 32, 32, 2U, t60, 31, t44, 1);
    goto LAB37;

LAB38:    t66 = (t0 + 916U);
    t67 = *((char **)t66);
    memset(t68, 0, 8);
    t66 = (t68 + 4U);
    t69 = (t67 + 4U);
    t70 = *((unsigned int *)t67);
    t71 = (t70 >> 31);
    t72 = (t71 & 1);
    *((unsigned int *)t68) = t72;
    t73 = *((unsigned int *)t69);
    t74 = (t73 >> 31);
    t75 = (t74 & 1);
    *((unsigned int *)t66) = t75;
    t76 = ((char*)((ng4)));
    xsi_vlogtype_concat(t65, 32, 32, 2U, t76, 31, t68, 1);
    goto LAB39;

LAB40:    xsi_vlog_unsigned_bit_combine(t9, 32, t43, 32, t65, 32);
    goto LAB44;

LAB42:    memcpy(t9, t43, 8);
    goto LAB44;

LAB46:    t54 = *((unsigned int *)t44);
    t55 = *((unsigned int *)t51);
    *((unsigned int *)t44) = (t54 | t55);
    t56 = *((unsigned int *)t50);
    t57 = *((unsigned int *)t51);
    *((unsigned int *)t50) = (t56 | t57);
    goto LAB45;

LAB47:    t20 = *((unsigned int *)t41);
    t21 = *((unsigned int *)t13);
    *((unsigned int *)t41) = (t20 | t21);
    t14 = (t6 + 4U);
    t22 = (t7 + 4U);
    t24 = *((unsigned int *)t14);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t32 = (t26 & t25);
    t27 = *((unsigned int *)t22);
    t28 = (~(t27));
    t29 = *((unsigned int *)t7);
    t33 = (t29 & t28);
    t30 = (~(t32));
    t31 = (~(t33));
    t34 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t34 & t30);
    t35 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t35 & t31);
    goto LAB49;

LAB51:    t38 = *((unsigned int *)t9);
    t39 = *((unsigned int *)t40);
    *((unsigned int *)t9) = (t38 | t39);
    t48 = *((unsigned int *)t23);
    t49 = *((unsigned int *)t40);
    *((unsigned int *)t23) = (t48 | t49);
    goto LAB50;

}


extern void work_m_00000000003044217594_0886308060_init()
{
	static char *pe[] = {(void *)C11_0,(void *)C12_1,(void *)C13_2,(void *)A15_3};
	xsi_register_didat("work_m_00000000003044217594_0886308060", "isim/_tmp/work/m_00000000003044217594_0886308060.didat");
	xsi_register_executes(pe);
}
