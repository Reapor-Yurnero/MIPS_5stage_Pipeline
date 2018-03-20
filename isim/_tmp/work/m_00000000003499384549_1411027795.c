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
static const char *ng0 = "E:/OneDrive/JI/Junior/VE370/p2/MIPS_Pipeline/display.v";
static unsigned int ng1[] = {15U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {8U, 0U};
static unsigned int ng5[] = {9U, 0U};
static unsigned int ng6[] = {10U, 0U};
static unsigned int ng7[] = {11U, 0U};
static unsigned int ng8[] = {12U, 0U};
static unsigned int ng9[] = {13U, 0U};
static unsigned int ng10[] = {14U, 0U};
static unsigned int ng11[] = {16U, 0U};
static unsigned int ng12[] = {17U, 0U};
static unsigned int ng13[] = {18U, 0U};
static unsigned int ng14[] = {19U, 0U};
static unsigned int ng15[] = {20U, 0U};
static unsigned int ng16[] = {21U, 0U};
static unsigned int ng17[] = {22U, 0U};
static unsigned int ng18[] = {23U, 0U};
static int ng19[] = {0, 0};
static unsigned int ng20[] = {7U, 0U};



static void I34_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(34, ng0);

LAB2:    xsi_set_current_line(35, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3428);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 4);

LAB1:    return;
}

static void A45_1(char *t0)
{
    char t10[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    t1 = (t0 + 4216U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 5164);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(45, ng0);

LAB5:    xsi_set_current_line(46, ng0);
    t3 = (t0 + 740U);
    t4 = *((char **)t3);

LAB6:    t3 = ((char*)((ng2)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 1, t3, 1);
    if (t5 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 1, t2, 1);
    if (t5 == 1)
        goto LAB9;

LAB10:
LAB11:    goto LAB2;

LAB7:    xsi_set_current_line(47, ng0);
    t6 = (t0 + 3612);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t0 + 3520);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 32);
    goto LAB11;

LAB9:    xsi_set_current_line(48, ng0);
    t3 = (t0 + 2852U);
    t6 = *((char **)t3);
    t3 = ((char*)((ng3)));
    xsi_vlogtype_concat(t10, 32, 32, 2U, t3, 25, t6, 7);
    t7 = (t0 + 3520);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 32);
    goto LAB11;

}

static void A53_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 4344U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 5172);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(53, ng0);

LAB5:    xsi_set_current_line(54, ng0);
    t3 = (t0 + 916U);
    t4 = *((char **)t3);

LAB6:    t3 = ((char*)((ng4)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 5, t3, 5);
    if (t5 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng5)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t5 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng6)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t5 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t5 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng8)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t5 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng9)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t5 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng10)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t5 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng1)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t5 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng11)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t5 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng12)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t5 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng13)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t5 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng14)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t5 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng15)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t5 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng16)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t5 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng17)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t5 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng18)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t5 == 1)
        goto LAB37;

LAB38:
LAB40:
LAB39:    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 3612);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB41:    goto LAB2;

LAB7:    xsi_set_current_line(55, ng0);
    t6 = (t0 + 1268U);
    t7 = *((char **)t6);
    t6 = (t0 + 3612);
    xsi_vlogvar_assign_value(t6, t7, 0, 0, 32);
    goto LAB41;

LAB9:    xsi_set_current_line(56, ng0);
    t3 = (t0 + 1356U);
    t6 = *((char **)t3);
    t3 = (t0 + 3612);
    xsi_vlogvar_assign_value(t3, t6, 0, 0, 32);
    goto LAB41;

LAB11:    xsi_set_current_line(57, ng0);
    t3 = (t0 + 1444U);
    t6 = *((char **)t3);
    t3 = (t0 + 3612);
    xsi_vlogvar_assign_value(t3, t6, 0, 0, 32);
    goto LAB41;

LAB13:    xsi_set_current_line(58, ng0);
    t3 = (t0 + 1532U);
    t6 = *((char **)t3);
    t3 = (t0 + 3612);
    xsi_vlogvar_assign_value(t3, t6, 0, 0, 32);
    goto LAB41;

LAB15:    xsi_set_current_line(59, ng0);
    t3 = (t0 + 1620U);
    t6 = *((char **)t3);
    t3 = (t0 + 3612);
    xsi_vlogvar_assign_value(t3, t6, 0, 0, 32);
    goto LAB41;

LAB17:    xsi_set_current_line(60, ng0);
    t3 = (t0 + 1708U);
    t6 = *((char **)t3);
    t3 = (t0 + 3612);
    xsi_vlogvar_assign_value(t3, t6, 0, 0, 32);
    goto LAB41;

LAB19:    xsi_set_current_line(61, ng0);
    t3 = (t0 + 1796U);
    t6 = *((char **)t3);
    t3 = (t0 + 3612);
    xsi_vlogvar_assign_value(t3, t6, 0, 0, 32);
    goto LAB41;

LAB21:    xsi_set_current_line(62, ng0);
    t3 = (t0 + 1884U);
    t6 = *((char **)t3);
    t3 = (t0 + 3612);
    xsi_vlogvar_assign_value(t3, t6, 0, 0, 32);
    goto LAB41;

LAB23:    xsi_set_current_line(63, ng0);
    t3 = (t0 + 1972U);
    t6 = *((char **)t3);
    t3 = (t0 + 3612);
    xsi_vlogvar_assign_value(t3, t6, 0, 0, 32);
    goto LAB41;

LAB25:    xsi_set_current_line(64, ng0);
    t3 = (t0 + 2060U);
    t6 = *((char **)t3);
    t3 = (t0 + 3612);
    xsi_vlogvar_assign_value(t3, t6, 0, 0, 32);
    goto LAB41;

LAB27:    xsi_set_current_line(65, ng0);
    t3 = (t0 + 2148U);
    t6 = *((char **)t3);
    t3 = (t0 + 3612);
    xsi_vlogvar_assign_value(t3, t6, 0, 0, 32);
    goto LAB41;

LAB29:    xsi_set_current_line(66, ng0);
    t3 = (t0 + 2236U);
    t6 = *((char **)t3);
    t3 = (t0 + 3612);
    xsi_vlogvar_assign_value(t3, t6, 0, 0, 32);
    goto LAB41;

LAB31:    xsi_set_current_line(67, ng0);
    t3 = (t0 + 2324U);
    t6 = *((char **)t3);
    t3 = (t0 + 3612);
    xsi_vlogvar_assign_value(t3, t6, 0, 0, 32);
    goto LAB41;

LAB33:    xsi_set_current_line(68, ng0);
    t3 = (t0 + 2412U);
    t6 = *((char **)t3);
    t3 = (t0 + 3612);
    xsi_vlogvar_assign_value(t3, t6, 0, 0, 32);
    goto LAB41;

LAB35:    xsi_set_current_line(69, ng0);
    t3 = (t0 + 2500U);
    t6 = *((char **)t3);
    t3 = (t0 + 3612);
    xsi_vlogvar_assign_value(t3, t6, 0, 0, 32);
    goto LAB41;

LAB37:    xsi_set_current_line(70, ng0);
    t3 = (t0 + 2588U);
    t6 = *((char **)t3);
    t3 = (t0 + 3612);
    xsi_vlogvar_assign_value(t3, t6, 0, 0, 32);
    goto LAB41;

}

static void C76_3(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;

LAB0:    t1 = (t0 + 4472U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 3520);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4U);
    t7 = (t5 + 4U);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 15U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 15U);
    t14 = (t0 + 5256);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    t19 = (t18 + 4U);
    t20 = 15U;
    t21 = t20;
    t22 = (t3 + 4U);
    t23 = *((unsigned int *)t3);
    t20 = (t20 & t23);
    t24 = *((unsigned int *)t22);
    t21 = (t21 & t24);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 & 4294967280U);
    t26 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t26 | t20);
    t27 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t27 & 4294967280U);
    t28 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t28 | t21);
    xsi_driver_vfirst_trans(t14, 0, 3);
    t29 = (t0 + 5180);
    *((int *)t29) = 1;

LAB1:    return;
}

static void C77_4(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;

LAB0:    t1 = (t0 + 4600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 3520);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4U);
    t7 = (t5 + 4U);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 4);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 4);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 15U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 15U);
    t14 = (t0 + 5292);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    t19 = (t18 + 4U);
    t20 = 15U;
    t21 = t20;
    t22 = (t3 + 4U);
    t23 = *((unsigned int *)t3);
    t20 = (t20 & t23);
    t24 = *((unsigned int *)t22);
    t21 = (t21 & t24);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 & 4294967280U);
    t26 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t26 | t20);
    t27 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t27 & 4294967280U);
    t28 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t28 | t21);
    xsi_driver_vfirst_trans(t14, 0, 3);
    t29 = (t0 + 5188);
    *((int *)t29) = 1;

LAB1:    return;
}

static void C78_5(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;

LAB0:    t1 = (t0 + 4728U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 3520);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4U);
    t7 = (t5 + 4U);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 8);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 8);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 15U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 15U);
    t14 = (t0 + 5328);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    t19 = (t18 + 4U);
    t20 = 15U;
    t21 = t20;
    t22 = (t3 + 4U);
    t23 = *((unsigned int *)t3);
    t20 = (t20 & t23);
    t24 = *((unsigned int *)t22);
    t21 = (t21 & t24);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 & 4294967280U);
    t26 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t26 | t20);
    t27 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t27 & 4294967280U);
    t28 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t28 | t21);
    xsi_driver_vfirst_trans(t14, 0, 3);
    t29 = (t0 + 5196);
    *((int *)t29) = 1;

LAB1:    return;
}

static void C79_6(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;

LAB0:    t1 = (t0 + 4856U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 3520);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4U);
    t7 = (t5 + 4U);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 12);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 12);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 15U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 15U);
    t14 = (t0 + 5364);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    t19 = (t18 + 4U);
    t20 = 15U;
    t21 = t20;
    t22 = (t3 + 4U);
    t23 = *((unsigned int *)t3);
    t20 = (t20 & t23);
    t24 = *((unsigned int *)t22);
    t21 = (t21 & t24);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 & 4294967280U);
    t26 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t26 | t20);
    t27 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t27 & 4294967280U);
    t28 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t28 | t21);
    xsi_driver_vfirst_trans(t14, 0, 3);
    t29 = (t0 + 5204);
    *((int *)t29) = 1;

LAB1:    return;
}

static void A85_7(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 4984U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 5212);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(85, ng0);

LAB5:    xsi_set_current_line(86, ng0);
    t3 = (t0 + 1004U);
    t4 = *((char **)t3);

LAB6:    t3 = ((char*)((ng10)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 4, t3, 4);
    if (t5 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng9)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t5 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng7)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t5 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng20)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t5 == 1)
        goto LAB13;

LAB14:
LAB16:
LAB15:    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3428);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(87, ng0);
    t6 = (t0 + 2940U);
    t7 = *((char **)t6);
    t6 = (t0 + 3428);
    xsi_vlogvar_assign_value(t6, t7, 0, 0, 4);
    goto LAB17;

LAB9:    xsi_set_current_line(88, ng0);
    t3 = (t0 + 3028U);
    t6 = *((char **)t3);
    t3 = (t0 + 3428);
    xsi_vlogvar_assign_value(t3, t6, 0, 0, 4);
    goto LAB17;

LAB11:    xsi_set_current_line(89, ng0);
    t3 = (t0 + 3116U);
    t6 = *((char **)t3);
    t3 = (t0 + 3428);
    xsi_vlogvar_assign_value(t3, t6, 0, 0, 4);
    goto LAB17;

LAB13:    xsi_set_current_line(90, ng0);
    t3 = (t0 + 3204U);
    t6 = *((char **)t3);
    t3 = (t0 + 3428);
    xsi_vlogvar_assign_value(t3, t6, 0, 0, 4);
    goto LAB17;

}


extern void work_m_00000000003499384549_1411027795_init()
{
	static char *pe[] = {(void *)I34_0,(void *)A45_1,(void *)A53_2,(void *)C76_3,(void *)C77_4,(void *)C78_5,(void *)C79_6,(void *)A85_7};
	xsi_register_didat("work_m_00000000003499384549_1411027795", "isim/_tmp/work/m_00000000003499384549_1411027795.didat");
	xsi_register_executes(pe);
}
