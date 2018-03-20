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
static const char *ng0 = "E:/OneDrive/JI/Junior/VE370/p2/MIPS_Pipeline/MUX_2_1.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static int ng3[] = {0, 0};



static void A7_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 1516U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(7, ng0);
    t2 = (t0 + 1696);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(7, ng0);

LAB5:    xsi_set_current_line(8, ng0);
    t3 = (t0 + 816U);
    t4 = *((char **)t3);

LAB6:    t3 = ((char*)((ng1)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 1, t3, 1);
    if (t5 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 1, t2, 1);
    if (t5 == 1)
        goto LAB9;

LAB10:
LAB12:
LAB11:    xsi_set_current_line(11, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);

LAB13:    goto LAB2;

LAB7:    xsi_set_current_line(9, ng0);
    t6 = (t0 + 640U);
    t7 = *((char **)t6);
    t6 = (t0 + 1040);
    xsi_vlogvar_assign_value(t6, t7, 0, 0, 8);
    goto LAB13;

LAB9:    xsi_set_current_line(10, ng0);
    t3 = (t0 + 728U);
    t6 = *((char **)t3);
    t3 = (t0 + 1040);
    xsi_vlogvar_assign_value(t3, t6, 0, 0, 8);
    goto LAB13;

}


extern void work_m_00000000002796633263_3272406328_init()
{
	static char *pe[] = {(void *)A7_0};
	xsi_register_didat("work_m_00000000002796633263_3272406328", "isim/_tmp/work/m_00000000002796633263_3272406328.didat");
	xsi_register_executes(pe);
}
