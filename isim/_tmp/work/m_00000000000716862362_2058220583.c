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
static const char *ng0 = "E:/OneDrive/JI/Junior/VE370/p2/MIPS_Pipeline/Control.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {35U, 0U};
static unsigned int ng5[] = {43U, 0U};
static unsigned int ng6[] = {8U, 0U};
static unsigned int ng7[] = {12U, 0U};
static unsigned int ng8[] = {3U, 0U};
static unsigned int ng9[] = {4U, 0U};
static unsigned int ng10[] = {5U, 0U};



static void A6_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;
    char *t6;

LAB0:    t1 = (t0 + 2092U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(6, ng0);
    t2 = (t0 + 2272);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(6, ng0);

LAB5:    xsi_set_current_line(8, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 788);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(9, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(10, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 972);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(11, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1064);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(12, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1156);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(13, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(14, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1340);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(15, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1432);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(16, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1616);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(17, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1524);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19, ng0);
    t2 = (t0 + 564U);
    t3 = *((char **)t2);

LAB6:    t2 = ((char*)((ng4)));
    t5 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t5 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng5)));
    t5 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t5 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng2)));
    t5 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t5 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t5 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t5 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng7)));
    t5 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t5 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng9)));
    t5 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t5 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng10)));
    t5 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t5 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng3)));
    t5 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t5 == 1)
        goto LAB21;

LAB22:
LAB24:
LAB23:    xsi_set_current_line(93, ng0);

LAB34:
LAB25:    goto LAB2;

LAB7:    xsi_set_current_line(20, ng0);

LAB26:    xsi_set_current_line(22, ng0);
    t4 = ((char*)((ng2)));
    t6 = (t0 + 788);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 1);
    xsi_set_current_line(23, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 1064);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(24, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 1248);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(25, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 1340);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(26, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 1616);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    goto LAB25;

LAB9:    xsi_set_current_line(39, ng0);

LAB27:    xsi_set_current_line(41, ng0);
    t4 = ((char*)((ng1)));
    t6 = (t0 + 1156);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 1);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 1340);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 1616);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 1432);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB25;

LAB11:    xsi_set_current_line(46, ng0);

LAB28:    goto LAB25;

LAB13:    xsi_set_current_line(50, ng0);

LAB29:    xsi_set_current_line(52, ng0);
    t4 = ((char*)((ng2)));
    t6 = (t0 + 788);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 1);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 1616);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 1340);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB25;

LAB15:    xsi_set_current_line(56, ng0);

LAB30:    xsi_set_current_line(58, ng0);
    t4 = ((char*)((ng2)));
    t6 = (t0 + 788);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 1);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng8)));
    t4 = (t0 + 1616);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 1340);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB25;

LAB17:    xsi_set_current_line(62, ng0);

LAB31:    xsi_set_current_line(65, ng0);
    t4 = ((char*)((ng1)));
    t6 = (t0 + 880);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 1);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 1432);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB25;

LAB19:    xsi_set_current_line(75, ng0);

LAB32:    xsi_set_current_line(77, ng0);
    t4 = ((char*)((ng1)));
    t6 = (t0 + 972);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 1);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 1432);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB25;

LAB21:    xsi_set_current_line(80, ng0);

LAB33:    xsi_set_current_line(89, ng0);
    t4 = ((char*)((ng2)));
    t6 = (t0 + 1432);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 1);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 1524);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB25;

}


extern void work_m_00000000000716862362_2058220583_init()
{
	static char *pe[] = {(void *)A6_0};
	xsi_register_didat("work_m_00000000000716862362_2058220583", "isim/_tmp/work/m_00000000000716862362_2058220583.didat");
	xsi_register_executes(pe);
}
