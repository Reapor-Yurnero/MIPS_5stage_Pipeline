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
static int ng0[] = {1, 0};
static int ng1[] = {2, 0};
static const char *ng2 = "E:/OneDrive/JI/Junior/VE370/p2/MIPS_Pipeline/DM.v";
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {31, 0};
static int ng5[] = {0, 0};



static void C11_0(char *t0)
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
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 2036U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1560);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t6 = (t0 + 1560);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    t9 = (t0 + 1560);
    t10 = (t9 + 36U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng0)));
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t0 + 2668);
    t14 = (t13 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t13, 0, 31);
    t18 = (t0 + 2600);
    *((int *)t18) = 1;

LAB1:    return;
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
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 2164U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1560);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t6 = (t0 + 1560);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    t9 = (t0 + 1560);
    t10 = (t9 + 36U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t0 + 2704);
    t14 = (t13 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t13, 0, 31);
    t18 = (t0 + 2608);
    *((int *)t18) = 1;

LAB1:    return;
}

static void A14_2(char *t0)
{
    char t5[8];
    char t29[8];
    char t30[8];
    char t37[8];
    char t47[8];
    char t48[8];
    char t49[8];
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
    char *t31;
    char *t32;
    char *t33;
    char *t34;
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
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    unsigned int t56;
    int t57;
    char *t58;
    unsigned int t59;
    int t60;
    int t61;
    char *t62;
    unsigned int t63;
    int t64;
    int t65;
    char *t66;
    unsigned int t67;
    int t68;
    int t69;
    char *t70;
    unsigned int t71;
    int t72;
    int t73;
    unsigned int t74;
    int t75;
    unsigned int t76;
    unsigned int t77;
    int t78;
    unsigned int t79;
    unsigned int t80;
    int t81;
    int t82;

LAB0:    t1 = (t0 + 2292U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(14, ng2);
    t2 = (t0 + 2616);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(14, ng2);

LAB5:    xsi_set_current_line(15, ng2);
    t3 = (t0 + 980U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng3)));
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

LAB11:
LAB12:    goto LAB2;

LAB8:    *((unsigned int *)t5) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(15, ng2);
    t27 = (t0 + 892U);
    t28 = *((char **)t27);
    t27 = (t0 + 1560);
    t31 = (t0 + 1560);
    t32 = (t31 + 40U);
    t33 = *((char **)t32);
    t34 = (t0 + 1560);
    t35 = (t34 + 36U);
    t36 = *((char **)t35);
    t38 = (t0 + 716U);
    t39 = *((char **)t38);
    memset(t37, 0, 8);
    t38 = (t37 + 4U);
    t40 = (t39 + 4U);
    t41 = *((unsigned int *)t39);
    t42 = (t41 >> 2);
    *((unsigned int *)t37) = t42;
    t43 = *((unsigned int *)t40);
    t44 = (t43 >> 2);
    *((unsigned int *)t38) = t44;
    t45 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t45 & 31U);
    t46 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t46 & 31U);
    xsi_vlog_generic_convert_array_indices(t29, t30, t33, t36, 2, 1, t37, 5, 2);
    t50 = (t0 + 1560);
    t51 = (t50 + 40U);
    t52 = *((char **)t51);
    t53 = ((char*)((ng4)));
    t54 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t47, t48, t49, ((int*)(t52)), 2, t53, 32, 1, t54, 32, 1);
    t55 = (t29 + 4U);
    t56 = *((unsigned int *)t55);
    t57 = (!(t56));
    t58 = (t30 + 4U);
    t59 = *((unsigned int *)t58);
    t60 = (!(t59));
    t61 = (t57 && t60);
    t62 = (t47 + 4U);
    t63 = *((unsigned int *)t62);
    t64 = (!(t63));
    t65 = (t61 && t64);
    t66 = (t48 + 4U);
    t67 = *((unsigned int *)t66);
    t68 = (!(t67));
    t69 = (t65 && t68);
    t70 = (t49 + 4U);
    t71 = *((unsigned int *)t70);
    t72 = (!(t71));
    t73 = (t69 && t72);
    if (t73 == 1)
        goto LAB13;

LAB14:    goto LAB12;

LAB13:    t74 = *((unsigned int *)t49);
    t75 = (t74 + 0);
    t76 = *((unsigned int *)t30);
    t77 = *((unsigned int *)t48);
    t78 = (t76 + t77);
    t79 = *((unsigned int *)t47);
    t80 = *((unsigned int *)t48);
    t81 = (t79 - t80);
    t82 = (t81 + 1);
    xsi_vlogvar_assign_value(t27, t28, t75, t78, t82);
    goto LAB14;

}

static void A18_3(char *t0)
{
    char t5[8];
    char t30[8];
    char t37[8];
    char t47[8];
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
    char *t29;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
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
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;

LAB0:    t1 = (t0 + 2420U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18, ng2);
    t2 = (t0 + 2624);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(18, ng2);

LAB5:    xsi_set_current_line(19, ng2);
    t3 = (t0 + 1068U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng3)));
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

LAB11:    xsi_set_current_line(22, ng2);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1468);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB12:    goto LAB2;

LAB8:    *((unsigned int *)t5) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(20, ng2);
    t27 = (t0 + 1560);
    t28 = (t27 + 32U);
    t29 = *((char **)t28);
    t31 = (t0 + 1560);
    t32 = (t31 + 40U);
    t33 = *((char **)t32);
    t34 = (t0 + 1560);
    t35 = (t34 + 36U);
    t36 = *((char **)t35);
    t38 = (t0 + 804U);
    t39 = *((char **)t38);
    memset(t37, 0, 8);
    t38 = (t37 + 4U);
    t40 = (t39 + 4U);
    t41 = *((unsigned int *)t39);
    t42 = (t41 >> 2);
    *((unsigned int *)t37) = t42;
    t43 = *((unsigned int *)t40);
    t44 = (t43 >> 2);
    *((unsigned int *)t38) = t44;
    t45 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t45 & 31U);
    t46 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t46 & 31U);
    xsi_vlog_generic_get_array_select_value(t30, 32, t29, t33, t36, 2, 1, t37, 5, 2);
    memset(t47, 0, 8);
    t48 = (t47 + 4U);
    t49 = (t30 + 4U);
    t50 = *((unsigned int *)t30);
    t51 = (t50 >> 0);
    *((unsigned int *)t47) = t51;
    t52 = *((unsigned int *)t49);
    t53 = (t52 >> 0);
    *((unsigned int *)t48) = t53;
    t54 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t54 & 4294967295U);
    t55 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t55 & 4294967295U);
    t56 = (t0 + 1468);
    xsi_vlogvar_assign_value(t56, t47, 0, 0, 32);
    goto LAB12;

}


extern void work_m_00000000003518158997_1714798787_init()
{
	static char *pe[] = {(void *)C11_0,(void *)C12_1,(void *)A14_2,(void *)A18_3};
	xsi_register_didat("work_m_00000000003518158997_1714798787", "isim/_tmp/work/m_00000000003518158997_1714798787.didat");
	xsi_register_executes(pe);
}
