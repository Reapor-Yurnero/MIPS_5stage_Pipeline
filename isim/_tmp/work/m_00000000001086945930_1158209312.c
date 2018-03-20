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
static const char *ng0 = "Time:";
static const char *ng1 = " ";
static const char *ng2 = "Clk = %d PC = %h \n[t0] = %h, [t1] = %h, [t2] = %h\n[t3] = %h, [t4] = %h, [t5] = %h\n[t6] = %h, [t7] = %h, [s0] = %h\n[s1] = %h, [s2] = %h, [s3] = %h\n[s4] = %h, [s5] = %h, [s6] = %h\n[s7] = %h";
static const char *ng3 = "E:/OneDrive/JI/Junior/VE370/p2/MIPS_Pipeline/maintest.v";
static const char *ng4 = "test.lxt";
static int ng5[] = {0, 0};
static const char *ng6 = "****************************";
static unsigned int ng7[] = {1U, 0U};
static int ng8[] = {1, 0};

void M13_1(char *);
void M13_1(char *);


static void M13_1_Func(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;

LAB0:    t2 = xsi_vlog_time(t1, 1000000.000000000, 10.00000000000000);
    xsi_vlogfile_write(0, 0, ng0, 2, t0, (char)118, t1, 64);
    xsi_vlogfile_write(0, 0, ng1, 1, t0);
    t3 = (t0 + 2464);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t0 + 2148U);
    t7 = *((char **)t6);
    t6 = (t0 + 564U);
    t8 = *((char **)t6);
    t6 = (t0 + 652U);
    t9 = *((char **)t6);
    t6 = (t0 + 740U);
    t10 = *((char **)t6);
    t6 = (t0 + 828U);
    t11 = *((char **)t6);
    t6 = (t0 + 916U);
    t12 = *((char **)t6);
    t6 = (t0 + 1004U);
    t13 = *((char **)t6);
    t6 = (t0 + 1092U);
    t14 = *((char **)t6);
    t6 = (t0 + 1180U);
    t15 = *((char **)t6);
    t6 = (t0 + 1268U);
    t16 = *((char **)t6);
    t6 = (t0 + 1356U);
    t17 = *((char **)t6);
    t6 = (t0 + 1444U);
    t18 = *((char **)t6);
    t6 = (t0 + 1532U);
    t19 = *((char **)t6);
    t6 = (t0 + 1620U);
    t20 = *((char **)t6);
    t6 = (t0 + 1708U);
    t21 = *((char **)t6);
    t6 = (t0 + 1796U);
    t22 = *((char **)t6);
    t6 = (t0 + 1884U);
    t23 = *((char **)t6);
    xsi_vlogfile_write(1, 0, ng2, 19, t0, (char)118, t5, 7, (char)118, t7, 7, (char)118, t8, 32, (char)118, t9, 32, (char)118, t10, 32, (char)118, t11, 32, (char)118, t12, 32, (char)118, t13, 32, (char)118, t14, 32, (char)118, t15, 32, (char)118, t16, 32, (char)118, t17, 32, (char)118, t18, 32, (char)118, t19, 32, (char)118, t20, 32, (char)118, t21, 32, (char)118, t22, 32, (char)118, t23, 32);

LAB1:    return;
}

static void I8_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 2940U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(8, ng3);

LAB4:    xsi_set_current_line(9, ng3);
    xsi_vcd_dumpfile(ng4);
    xsi_set_current_line(10, ng3);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2856);
    xsi_vcd_dumpvars_args(*((unsigned int *)t2), t3, (char)109, t0, (char)101);
    xsi_set_current_line(12, ng3);
    xsi_vlogfile_write(1, 0, ng6, 1, t0);
    xsi_set_current_line(13, ng3);
    M13_1(t0);
    xsi_set_current_line(14, ng3);
    t2 = (t0 + 2856);
    xsi_process_wait(t2, 0LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(14, ng3);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 2372);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(14, ng3);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2464);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);
    goto LAB1;

}

static void A18_2(char *t0)
{
    char t3[8];
    char t32[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
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
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t33;

LAB0:    t1 = (t0 + 3068U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18, ng3);

LAB4:    xsi_set_current_line(19, ng3);
    t2 = (t0 + 2984);
    xsi_process_wait(t2, 10000000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(19, ng3);
    t4 = (t0 + 2372);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t3 + 4U);
    t8 = (t6 + 4U);
    t9 = *((unsigned int *)t6);
    t10 = (~(t9));
    *((unsigned int *)t3) = t10;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t8) != 0)
        goto LAB7;

LAB6:    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 1U);
    t16 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t16 & 1U);
    t17 = (t0 + 2372);
    xsi_vlogvar_assign_value(t17, t3, 0, 0, 1);
    xsi_set_current_line(20, ng3);
    t2 = (t0 + 2372);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng7)));
    memset(t3, 0, 8);
    t7 = (t3 + 4U);
    t8 = (t5 + 4U);
    t17 = (t6 + 4U);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t6);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t17);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t17);
    t19 = (t16 | t18);
    t20 = (~(t19));
    t21 = (t15 & t20);
    if (t21 != 0)
        goto LAB11;

LAB8:    if (t19 != 0)
        goto LAB10;

LAB9:    *((unsigned int *)t3) = 1;

LAB11:    t22 = (t3 + 4U);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t3);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB12;

LAB13:
LAB14:    goto LAB2;

LAB7:    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t8);
    *((unsigned int *)t3) = (t11 | t12);
    t13 = *((unsigned int *)t7);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t7) = (t13 | t14);
    goto LAB6;

LAB10:    *((unsigned int *)t3) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB11;

LAB12:    xsi_set_current_line(20, ng3);
    t28 = (t0 + 2464);
    t29 = (t28 + 32U);
    t30 = *((char **)t29);
    t31 = ((char*)((ng8)));
    memset(t32, 0, 8);
    xsi_vlog_unsigned_add(t32, 32, t30, 7, t31, 32);
    t33 = (t0 + 2464);
    xsi_vlogvar_assign_value(t33, t32, 0, 0, 7);
    goto LAB14;

}

static void I23_3(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 3196U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(23, ng3);
    t2 = (t0 + 3112);
    xsi_process_wait(t2, 590000000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(23, ng3);
    xsi_vlog_stop(1);
    goto LAB1;

}

void M13_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 3240);
    t2 = (t0 + 3504);
    xsi_vlogfile_monitor((void *)M13_1_Func, t1, t2);

LAB1:    return;
}


extern void work_m_00000000001086945930_1158209312_init()
{
	static char *pe[] = {(void *)I8_0,(void *)A18_2,(void *)I23_3,(void *)M13_1};
	xsi_register_didat("work_m_00000000001086945930_1158209312", "isim/_tmp/work/m_00000000001086945930_1158209312.didat");
	xsi_register_executes(pe);
}
