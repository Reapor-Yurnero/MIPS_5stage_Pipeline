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
static const char *ng0 = "E:/OneDrive/JI/Junior/VE370/p2/MIPS_Pipeline/ID_EX_Reg.v";



static void A12_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(12, ng0);
    t2 = (t0 + 2972);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(12, ng0);

LAB5:    xsi_set_current_line(13, ng0);
    t3 = (t0 + 564U);
    t4 = *((char **)t3);
    t3 = (t0 + 1580);
    xsi_vlogvar_generic_wait_assign_value(t3, t4, 2, 0, 0, 4, 0LL);
    xsi_set_current_line(14, ng0);
    t2 = (t0 + 652U);
    t3 = *((char **)t2);
    t2 = (t0 + 1672);
    xsi_vlogvar_generic_wait_assign_value(t2, t3, 2, 0, 0, 2, 0LL);
    xsi_set_current_line(15, ng0);
    t2 = (t0 + 740U);
    t3 = *((char **)t2);
    t2 = (t0 + 1764);
    xsi_vlogvar_generic_wait_assign_value(t2, t3, 2, 0, 0, 2, 0LL);
    xsi_set_current_line(16, ng0);
    t2 = (t0 + 828U);
    t3 = *((char **)t2);
    t2 = (t0 + 1856);
    xsi_vlogvar_generic_wait_assign_value(t2, t3, 2, 0, 0, 32, 0LL);
    xsi_set_current_line(17, ng0);
    t2 = (t0 + 916U);
    t3 = *((char **)t2);
    t2 = (t0 + 1948);
    xsi_vlogvar_generic_wait_assign_value(t2, t3, 2, 0, 0, 32, 0LL);
    xsi_set_current_line(18, ng0);
    t2 = (t0 + 1004U);
    t3 = *((char **)t2);
    t2 = (t0 + 2040);
    xsi_vlogvar_generic_wait_assign_value(t2, t3, 2, 0, 0, 32, 0LL);
    xsi_set_current_line(19, ng0);
    t2 = (t0 + 1092U);
    t3 = *((char **)t2);
    t2 = (t0 + 2132);
    xsi_vlogvar_generic_wait_assign_value(t2, t3, 2, 0, 0, 5, 0LL);
    xsi_set_current_line(20, ng0);
    t2 = (t0 + 1268U);
    t3 = *((char **)t2);
    t2 = (t0 + 2316);
    xsi_vlogvar_generic_wait_assign_value(t2, t3, 2, 0, 0, 5, 0LL);
    xsi_set_current_line(21, ng0);
    t2 = (t0 + 1180U);
    t3 = *((char **)t2);
    t2 = (t0 + 2224);
    xsi_vlogvar_generic_wait_assign_value(t2, t3, 2, 0, 0, 5, 0LL);
    goto LAB2;

}


extern void work_m_00000000003219717643_3324299176_init()
{
	static char *pe[] = {(void *)A12_0};
	xsi_register_didat("work_m_00000000003219717643_3324299176", "isim/_tmp/work/m_00000000003219717643_3324299176.didat");
	xsi_register_executes(pe);
}
