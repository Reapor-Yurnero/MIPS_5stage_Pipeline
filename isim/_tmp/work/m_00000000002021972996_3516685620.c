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
static const char *ng0 = "E:/OneDrive/JI/Junior/VE370/p2/MIPS_Pipeline/SSD_Driver.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {64U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {121U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {36U, 0U};
static unsigned int ng7[] = {3U, 0U};
static unsigned int ng8[] = {48U, 0U};
static unsigned int ng9[] = {4U, 0U};
static unsigned int ng10[] = {25U, 0U};
static unsigned int ng11[] = {5U, 0U};
static unsigned int ng12[] = {18U, 0U};
static unsigned int ng13[] = {6U, 0U};
static unsigned int ng14[] = {7U, 0U};
static unsigned int ng15[] = {120U, 0U};
static unsigned int ng16[] = {8U, 0U};
static unsigned int ng17[] = {9U, 0U};
static unsigned int ng18[] = {16U, 0U};
static unsigned int ng19[] = {10U, 0U};
static unsigned int ng20[] = {11U, 0U};
static unsigned int ng21[] = {12U, 0U};
static unsigned int ng22[] = {70U, 0U};
static unsigned int ng23[] = {13U, 0U};
static unsigned int ng24[] = {33U, 0U};
static unsigned int ng25[] = {14U, 0U};
static unsigned int ng26[] = {15U, 0U};
static unsigned int ng27[] = {127U, 0U};



static void A8_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 1264U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(8, ng0);
    t2 = (t0 + 1444);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(8, ng0);

LAB5:    xsi_set_current_line(9, ng0);
    t3 = (t0 + 564U);
    t4 = *((char **)t3);

LAB6:    t3 = ((char*)((ng1)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 4, t3, 4);
    if (t5 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t5 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t5 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t5 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng9)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t5 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng11)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t5 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng13)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t5 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng14)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t5 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng16)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t5 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng17)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t5 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng19)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t5 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng20)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t5 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng21)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t5 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng23)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t5 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng25)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t5 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng26)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t5 == 1)
        goto LAB37;

LAB38:
LAB40:
LAB39:    xsi_set_current_line(26, ng0);
    t2 = ((char*)((ng27)));
    t3 = (t0 + 788);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);

LAB41:    goto LAB2;

LAB7:    xsi_set_current_line(10, ng0);
    t6 = ((char*)((ng2)));
    t7 = (t0 + 788);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 7);
    goto LAB41;

LAB9:    xsi_set_current_line(11, ng0);
    t3 = ((char*)((ng4)));
    t6 = (t0 + 788);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 7);
    goto LAB41;

LAB11:    xsi_set_current_line(12, ng0);
    t3 = ((char*)((ng6)));
    t6 = (t0 + 788);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 7);
    goto LAB41;

LAB13:    xsi_set_current_line(13, ng0);
    t3 = ((char*)((ng8)));
    t6 = (t0 + 788);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 7);
    goto LAB41;

LAB15:    xsi_set_current_line(14, ng0);
    t3 = ((char*)((ng10)));
    t6 = (t0 + 788);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 7);
    goto LAB41;

LAB17:    xsi_set_current_line(15, ng0);
    t3 = ((char*)((ng12)));
    t6 = (t0 + 788);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 7);
    goto LAB41;

LAB19:    xsi_set_current_line(16, ng0);
    t3 = ((char*)((ng5)));
    t6 = (t0 + 788);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 7);
    goto LAB41;

LAB21:    xsi_set_current_line(17, ng0);
    t3 = ((char*)((ng15)));
    t6 = (t0 + 788);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 7);
    goto LAB41;

LAB23:    xsi_set_current_line(18, ng0);
    t3 = ((char*)((ng1)));
    t6 = (t0 + 788);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 7);
    goto LAB41;

LAB25:    xsi_set_current_line(19, ng0);
    t3 = ((char*)((ng18)));
    t6 = (t0 + 788);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 7);
    goto LAB41;

LAB27:    xsi_set_current_line(20, ng0);
    t3 = ((char*)((ng16)));
    t6 = (t0 + 788);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 7);
    goto LAB41;

LAB29:    xsi_set_current_line(21, ng0);
    t3 = ((char*)((ng7)));
    t6 = (t0 + 788);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 7);
    goto LAB41;

LAB31:    xsi_set_current_line(22, ng0);
    t3 = ((char*)((ng22)));
    t6 = (t0 + 788);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 7);
    goto LAB41;

LAB33:    xsi_set_current_line(23, ng0);
    t3 = ((char*)((ng24)));
    t6 = (t0 + 788);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 7);
    goto LAB41;

LAB35:    xsi_set_current_line(24, ng0);
    t3 = ((char*)((ng13)));
    t6 = (t0 + 788);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 7);
    goto LAB41;

LAB37:    xsi_set_current_line(25, ng0);
    t3 = ((char*)((ng25)));
    t6 = (t0 + 788);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 7);
    goto LAB41;

}


extern void work_m_00000000002021972996_3516685620_init()
{
	static char *pe[] = {(void *)A8_0};
	xsi_register_didat("work_m_00000000002021972996_3516685620", "isim/_tmp/work/m_00000000002021972996_3516685620.didat");
	xsi_register_executes(pe);
}
