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
static const char *ng0 = "E:/OneDrive/JI/Junior/VE370/p2/MIPS_Pipeline/ringcounter.v";
static unsigned int ng1[] = {14U, 0U};
static int ng2[] = {1, 0};
static int ng3[] = {3, 0};
static int ng4[] = {2, 0};
static int ng5[] = {0, 0};



static void I26_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(26, ng0);

LAB2:    xsi_set_current_line(27, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 876);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 4);

LAB1:    return;
}

static void A30_1(char *t0)
{
    char t5[8];
    char t29[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
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
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    char *t30;
    char *t31;
    int t32;

LAB0:    t1 = (t0 + 1480U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1660);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30, ng0);

LAB5:    xsi_set_current_line(31, ng0);
    t3 = (t0 + 652U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t5, 0, 8);
    t6 = (t5 + 4U);
    t7 = (t4 + 4U);
    t8 = (t3 + 4U);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t3);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t5) = 1;

LAB9:    t21 = (t5 + 4U);
    t22 = *((unsigned int *)t21);
    t23 = (~(t22));
    t24 = *((unsigned int *)t5);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(32, ng0);

LAB13:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 876);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4U);
    t7 = (t4 + 4U);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    t11 = (t10 & 1);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 0);
    t14 = (t13 & 1);
    *((unsigned int *)t6) = t14;
    t8 = (t0 + 876);
    t21 = (t0 + 876);
    t27 = (t21 + 40U);
    t28 = *((char **)t27);
    t30 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t29, t28, 2, t30, 32, 1);
    t31 = (t29 + 4U);
    t15 = *((unsigned int *)t31);
    t32 = (!(t15));
    if (t32 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 876);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4U);
    t7 = (t4 + 4U);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 3);
    t11 = (t10 & 1);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 3);
    t14 = (t13 & 1);
    *((unsigned int *)t6) = t14;
    t8 = (t0 + 876);
    t21 = (t0 + 876);
    t27 = (t21 + 40U);
    t28 = *((char **)t27);
    t30 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t29, t28, 2, t30, 32, 1);
    t31 = (t29 + 4U);
    t15 = *((unsigned int *)t31);
    t32 = (!(t15));
    if (t32 == 1)
        goto LAB16;

LAB17:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 876);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4U);
    t7 = (t4 + 4U);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 2);
    t11 = (t10 & 1);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 2);
    t14 = (t13 & 1);
    *((unsigned int *)t6) = t14;
    t8 = (t0 + 876);
    t21 = (t0 + 876);
    t27 = (t21 + 40U);
    t28 = *((char **)t27);
    t30 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t29, t28, 2, t30, 32, 1);
    t31 = (t29 + 4U);
    t15 = *((unsigned int *)t31);
    t32 = (!(t15));
    if (t32 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 876);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4U);
    t7 = (t4 + 4U);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 1);
    t11 = (t10 & 1);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 1);
    t14 = (t13 & 1);
    *((unsigned int *)t6) = t14;
    t8 = (t0 + 876);
    t21 = (t0 + 876);
    t27 = (t21 + 40U);
    t28 = *((char **)t27);
    t30 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t29, t28, 2, t30, 32, 1);
    t31 = (t29 + 4U);
    t15 = *((unsigned int *)t31);
    t32 = (!(t15));
    if (t32 == 1)
        goto LAB20;

LAB21:
LAB12:    goto LAB2;

LAB8:    *((unsigned int *)t5) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(31, ng0);
    t27 = ((char*)((ng1)));
    t28 = (t0 + 876);
    xsi_vlogvar_generic_wait_assign_value(t28, t27, 2, 0, 0, 4, 0LL);
    goto LAB12;

LAB14:    xsi_vlogvar_generic_wait_assign_value(t8, t5, 2, 0, *((unsigned int *)t29), 1, 0LL);
    goto LAB15;

LAB16:    xsi_vlogvar_generic_wait_assign_value(t8, t5, 2, 0, *((unsigned int *)t29), 1, 0LL);
    goto LAB17;

LAB18:    xsi_vlogvar_generic_wait_assign_value(t8, t5, 2, 0, *((unsigned int *)t29), 1, 0LL);
    goto LAB19;

LAB20:    xsi_vlogvar_generic_wait_assign_value(t8, t5, 2, 0, *((unsigned int *)t29), 1, 0LL);
    goto LAB21;

}


extern void work_m_00000000001634072930_3652670317_init()
{
	static char *pe[] = {(void *)I26_0,(void *)A30_1};
	xsi_register_didat("work_m_00000000001634072930_3652670317", "isim/_tmp/work/m_00000000001634072930_3652670317.didat");
	xsi_register_executes(pe);
}
