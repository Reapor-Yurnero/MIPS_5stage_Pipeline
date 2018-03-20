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
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};



static void I103_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(103, ng0);

LAB2:    xsi_set_current_line(104, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1044);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 17);
    xsi_set_current_line(105, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 952);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void A108_1(char *t0)
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

LAB0:    t1 = (t0 + 1648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 1828);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(108, ng0);

LAB5:    xsi_set_current_line(109, ng0);
    t3 = (t0 + 728U);
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

LAB11:    xsi_set_current_line(111, ng0);

LAB13:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 1044);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t6 = (t0 + 248);
    t7 = *((char **)t6);
    t6 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_unsigned_minus(t5, 32, t7, 32, t6, 32);
    memset(t29, 0, 8);
    t8 = (t29 + 4U);
    t21 = (t4 + 4U);
    t27 = (t5 + 4U);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t21);
    t13 = *((unsigned int *)t27);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t21);
    t17 = *((unsigned int *)t27);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB17;

LAB14:    if (t18 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t29) = 1;

LAB17:    t28 = (t29 + 4U);
    t22 = *((unsigned int *)t28);
    t23 = (~(t22));
    t24 = *((unsigned int *)t29);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(118, ng0);

LAB22:    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 952);
    xsi_vlogvar_generic_wait_assign_value(t3, t2, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(120, ng0);
    t2 = (t0 + 1044);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t6 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_unsigned_add(t5, 32, t4, 17, t6, 32);
    t7 = (t0 + 1044);
    xsi_vlogvar_generic_wait_assign_value(t7, t5, 2, 0, 0, 17, 0LL);

LAB20:
LAB12:    goto LAB2;

LAB8:    *((unsigned int *)t5) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(109, ng0);
    t27 = ((char*)((ng1)));
    t28 = (t0 + 1044);
    xsi_vlogvar_generic_wait_assign_value(t28, t27, 1, 0, 0, 17, 0LL);
    goto LAB12;

LAB16:    *((unsigned int *)t29) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(113, ng0);

LAB21:    xsi_set_current_line(114, ng0);
    t30 = ((char*)((ng2)));
    t31 = (t0 + 952);
    xsi_vlogvar_generic_wait_assign_value(t31, t30, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1044);
    xsi_vlogvar_generic_wait_assign_value(t3, t2, 1, 0, 0, 17, 0LL);
    goto LAB20;

}


extern void work_m_00000000002871197350_2875597653_init()
{
	static char *pe[] = {(void *)I103_0,(void *)A108_1};
	xsi_register_didat("work_m_00000000002871197350_2875597653", "isim/_tmp/work/m_00000000002871197350_2875597653.didat");
	xsi_register_executes(pe);
}
