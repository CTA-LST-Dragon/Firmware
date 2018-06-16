/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/CTA_PC/Desktop/Firmware/dragonHDL_V5/20171023_hdl_dv5_3_00_04/Source/ANALOG_BACKPLANE.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {66U, 0U};
static unsigned int ng4[] = {15U, 0U};
static unsigned int ng5[] = {65U, 0U};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {34U, 0U};



static void Cont_56_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 5728U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 4008);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7712);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 7536);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_57_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 5976U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7776);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 7552);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_58_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 6224U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 3848);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7840);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 7568);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_59_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 6472U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 7904);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 0);
    t16 = (t0 + 7584);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Always_61_4(char *t0)
{
    char t14[8];
    char t30[8];
    char t44[8];
    char t57[8];
    char t65[8];
    char t105[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    int t13;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
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
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    int t89;
    int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;
    char *t104;
    char *t106;
    char *t107;
    char *t108;
    char *t109;
    char *t110;

LAB0:    t1 = (t0 + 6720U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 7600);
    *((int *)t2) = 1;
    t3 = (t0 + 6752);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(61, ng0);

LAB5:    xsi_set_current_line(62, ng0);
    t4 = (t0 + 1848U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(73, ng0);

LAB10:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 4488);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB11:    t5 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t5, 4);
    if (t13 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng6)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB16;

LAB17:
LAB18:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(62, ng0);

LAB9:    xsi_set_current_line(63, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 6, 0LL);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB8;

LAB12:    xsi_set_current_line(75, ng0);

LAB19:    xsi_set_current_line(76, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 6, 0LL);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t14, 0, 8);
    t5 = (t3 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t15 = (t9 ^ t10);
    t16 = (t8 | t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t11);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB23;

LAB20:    if (t19 != 0)
        goto LAB22;

LAB21:    *((unsigned int *)t14) = 1;

LAB23:    t22 = (t14 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t14);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB24;

LAB25:
LAB26:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t14, 0, 8);
    t5 = (t3 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t15 = (t9 ^ t10);
    t16 = (t8 | t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t11);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB31;

LAB28:    if (t19 != 0)
        goto LAB30;

LAB29:    *((unsigned int *)t14) = 1;

LAB31:    t22 = (t14 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t14);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB32;

LAB33:    xsi_set_current_line(92, ng0);

LAB36:    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);

LAB34:    goto LAB18;

LAB14:    xsi_set_current_line(97, ng0);

LAB37:    xsi_set_current_line(98, ng0);
    t3 = (t0 + 3528);
    t5 = (t3 + 56U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng2)));
    memset(t14, 0, 8);
    t22 = (t11 + 4);
    t28 = (t12 + 4);
    t6 = *((unsigned int *)t11);
    t7 = *((unsigned int *)t12);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t22);
    t10 = *((unsigned int *)t28);
    t15 = (t9 ^ t10);
    t16 = (t8 | t15);
    t17 = *((unsigned int *)t22);
    t18 = *((unsigned int *)t28);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB41;

LAB38:    if (t19 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t14) = 1;

LAB41:    memset(t30, 0, 8);
    t31 = (t14 + 4);
    t23 = *((unsigned int *)t31);
    t24 = (~(t23));
    t25 = *((unsigned int *)t14);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t31) != 0)
        goto LAB44;

LAB45:    t39 = (t30 + 4);
    t32 = *((unsigned int *)t30);
    t33 = *((unsigned int *)t39);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB46;

LAB47:    memcpy(t65, t30, 8);

LAB48:    t97 = (t65 + 4);
    t98 = *((unsigned int *)t97);
    t99 = (~(t98));
    t100 = *((unsigned int *)t65);
    t101 = (t100 & t99);
    t102 = (t101 != 0);
    if (t102 > 0)
        goto LAB60;

LAB61:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng4)));
    memset(t14, 0, 8);
    t12 = (t5 + 4);
    t22 = (t11 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t22);
    t15 = (t9 ^ t10);
    t16 = (t8 | t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t22);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB67;

LAB64:    if (t19 != 0)
        goto LAB66;

LAB65:    *((unsigned int *)t14) = 1;

LAB67:    t29 = (t14 + 4);
    t23 = *((unsigned int *)t29);
    t24 = (~(t23));
    t25 = *((unsigned int *)t14);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB68;

LAB69:    xsi_set_current_line(104, ng0);

LAB72:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng2)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 6, t5, 6, t11, 6);
    t12 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t12, t14, 0, 0, 6, 0LL);
    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB70:
LAB62:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng2)));
    memset(t14, 0, 8);
    t12 = (t5 + 4);
    t22 = (t11 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t22);
    t15 = (t9 ^ t10);
    t16 = (t8 | t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t22);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB76;

LAB73:    if (t19 != 0)
        goto LAB75;

LAB74:    *((unsigned int *)t14) = 1;

LAB76:    t29 = (t14 + 4);
    t23 = *((unsigned int *)t29);
    t24 = (~(t23));
    t25 = *((unsigned int *)t14);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB77;

LAB78:
LAB79:    goto LAB18;

LAB16:    xsi_set_current_line(141, ng0);

LAB183:    xsi_set_current_line(142, ng0);
    t3 = (t0 + 2008U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t14, 0, 8);
    t11 = (t5 + 4);
    t12 = (t3 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t3);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t15 = (t9 ^ t10);
    t16 = (t8 | t15);
    t17 = *((unsigned int *)t11);
    t18 = *((unsigned int *)t12);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB187;

LAB184:    if (t19 != 0)
        goto LAB186;

LAB185:    *((unsigned int *)t14) = 1;

LAB187:    t28 = (t14 + 4);
    t23 = *((unsigned int *)t28);
    t24 = (~(t23));
    t25 = *((unsigned int *)t14);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB188;

LAB189:    xsi_set_current_line(145, ng0);

LAB192:    xsi_set_current_line(146, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB190:    goto LAB18;

LAB22:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB23;

LAB24:    xsi_set_current_line(86, ng0);

LAB27:    xsi_set_current_line(87, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 4, 0LL);
    goto LAB26;

LAB30:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB31;

LAB32:    xsi_set_current_line(90, ng0);

LAB35:    xsi_set_current_line(91, ng0);
    t28 = (t0 + 2168U);
    t29 = *((char **)t28);
    memset(t30, 0, 8);
    t28 = (t30 + 4);
    t31 = (t29 + 4);
    t32 = *((unsigned int *)t29);
    t33 = (t32 >> 0);
    *((unsigned int *)t30) = t33;
    t34 = *((unsigned int *)t31);
    t35 = (t34 >> 0);
    *((unsigned int *)t28) = t35;
    t36 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t36 & 4294967295U);
    t37 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t37 & 4294967295U);
    t38 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t38, t30, 0, 0, 32, 0LL);
    goto LAB34;

LAB40:    t29 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB41;

LAB42:    *((unsigned int *)t30) = 1;
    goto LAB45;

LAB44:    t38 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB45;

LAB46:    t40 = (t0 + 4648);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    t43 = ((char*)((ng3)));
    memset(t44, 0, 8);
    t45 = (t42 + 4);
    t46 = (t43 + 4);
    t35 = *((unsigned int *)t42);
    t36 = *((unsigned int *)t43);
    t37 = (t35 ^ t36);
    t47 = *((unsigned int *)t45);
    t48 = *((unsigned int *)t46);
    t49 = (t47 ^ t48);
    t50 = (t37 | t49);
    t51 = *((unsigned int *)t45);
    t52 = *((unsigned int *)t46);
    t53 = (t51 | t52);
    t54 = (~(t53));
    t55 = (t50 & t54);
    if (t55 != 0)
        goto LAB52;

LAB49:    if (t53 != 0)
        goto LAB51;

LAB50:    *((unsigned int *)t44) = 1;

LAB52:    memset(t57, 0, 8);
    t58 = (t44 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (~(t59));
    t61 = *((unsigned int *)t44);
    t62 = (t61 & t60);
    t63 = (t62 & 1U);
    if (t63 != 0)
        goto LAB53;

LAB54:    if (*((unsigned int *)t58) != 0)
        goto LAB55;

LAB56:    t66 = *((unsigned int *)t30);
    t67 = *((unsigned int *)t57);
    t68 = (t66 & t67);
    *((unsigned int *)t65) = t68;
    t69 = (t30 + 4);
    t70 = (t57 + 4);
    t71 = (t65 + 4);
    t72 = *((unsigned int *)t69);
    t73 = *((unsigned int *)t70);
    t74 = (t72 | t73);
    *((unsigned int *)t71) = t74;
    t75 = *((unsigned int *)t71);
    t76 = (t75 != 0);
    if (t76 == 1)
        goto LAB57;

LAB58:
LAB59:    goto LAB48;

LAB51:    t56 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB52;

LAB53:    *((unsigned int *)t57) = 1;
    goto LAB56;

LAB55:    t64 = (t57 + 4);
    *((unsigned int *)t57) = 1;
    *((unsigned int *)t64) = 1;
    goto LAB56;

LAB57:    t77 = *((unsigned int *)t65);
    t78 = *((unsigned int *)t71);
    *((unsigned int *)t65) = (t77 | t78);
    t79 = (t30 + 4);
    t80 = (t57 + 4);
    t81 = *((unsigned int *)t30);
    t82 = (~(t81));
    t83 = *((unsigned int *)t79);
    t84 = (~(t83));
    t85 = *((unsigned int *)t57);
    t86 = (~(t85));
    t87 = *((unsigned int *)t80);
    t88 = (~(t87));
    t89 = (t82 & t84);
    t90 = (t86 & t88);
    t91 = (~(t89));
    t92 = (~(t90));
    t93 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t93 & t91);
    t94 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t94 & t92);
    t95 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t95 & t91);
    t96 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t96 & t92);
    goto LAB59;

LAB60:    xsi_set_current_line(98, ng0);

LAB63:    xsi_set_current_line(99, ng0);
    t103 = ((char*)((ng1)));
    t104 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t104, t103, 0, 0, 6, 0LL);
    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB62;

LAB66:    t28 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB67;

LAB68:    xsi_set_current_line(101, ng0);

LAB71:    xsi_set_current_line(102, ng0);
    t31 = ((char*)((ng1)));
    t38 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t38, t31, 0, 0, 6, 0LL);
    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB70;

LAB75:    t28 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB76;

LAB77:    xsi_set_current_line(109, ng0);

LAB80:    xsi_set_current_line(110, ng0);
    t31 = (t0 + 4648);
    t38 = (t31 + 56U);
    t39 = *((char **)t38);
    t40 = ((char*)((ng3)));
    memset(t30, 0, 8);
    t41 = (t39 + 4);
    t42 = (t40 + 4);
    t32 = *((unsigned int *)t39);
    t33 = *((unsigned int *)t40);
    t34 = (t32 ^ t33);
    t35 = *((unsigned int *)t41);
    t36 = *((unsigned int *)t42);
    t37 = (t35 ^ t36);
    t47 = (t34 | t37);
    t48 = *((unsigned int *)t41);
    t49 = *((unsigned int *)t42);
    t50 = (t48 | t49);
    t51 = (~(t50));
    t52 = (t47 & t51);
    if (t52 != 0)
        goto LAB84;

LAB81:    if (t50 != 0)
        goto LAB83;

LAB82:    *((unsigned int *)t30) = 1;

LAB84:    t45 = (t30 + 4);
    t53 = *((unsigned int *)t45);
    t54 = (~(t53));
    t55 = *((unsigned int *)t30);
    t59 = (t55 & t54);
    t60 = (t59 != 0);
    if (t60 > 0)
        goto LAB85;

LAB86:    xsi_set_current_line(112, ng0);

LAB89:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 4648);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng2)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 8, t5, 8, t11, 8);
    t12 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t12, t14, 0, 0, 8, 0LL);

LAB87:    xsi_set_current_line(116, ng0);
    t2 = (t0 + 4648);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng1)));
    memset(t14, 0, 8);
    t12 = (t5 + 4);
    t22 = (t11 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t22);
    t15 = (t9 ^ t10);
    t16 = (t8 | t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t22);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB93;

LAB90:    if (t19 != 0)
        goto LAB92;

LAB91:    *((unsigned int *)t14) = 1;

LAB93:    t29 = (t14 + 4);
    t23 = *((unsigned int *)t29);
    t24 = (~(t23));
    t25 = *((unsigned int *)t14);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB94;

LAB95:    xsi_set_current_line(118, ng0);
    t2 = (t0 + 4648);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng5)));
    memset(t14, 0, 8);
    t12 = (t5 + 4);
    t22 = (t11 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t22);
    t15 = (t9 ^ t10);
    t16 = (t8 | t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t22);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB101;

LAB98:    if (t19 != 0)
        goto LAB100;

LAB99:    *((unsigned int *)t14) = 1;

LAB101:    t29 = (t14 + 4);
    t23 = *((unsigned int *)t29);
    t24 = (~(t23));
    t25 = *((unsigned int *)t14);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB102;

LAB103:
LAB104:
LAB96:    xsi_set_current_line(122, ng0);
    t2 = (t0 + 4648);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng2)));
    memset(t14, 0, 8);
    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB107;

LAB106:    t22 = (t11 + 4);
    if (*((unsigned int *)t22) != 0)
        goto LAB107;

LAB110:    if (*((unsigned int *)t5) < *((unsigned int *)t11))
        goto LAB109;

LAB108:    *((unsigned int *)t14) = 1;

LAB109:    memset(t30, 0, 8);
    t29 = (t14 + 4);
    t6 = *((unsigned int *)t29);
    t7 = (~(t6));
    t8 = *((unsigned int *)t14);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB111;

LAB112:    if (*((unsigned int *)t29) != 0)
        goto LAB113;

LAB114:    t38 = (t30 + 4);
    t15 = *((unsigned int *)t30);
    t16 = *((unsigned int *)t38);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB115;

LAB116:    memcpy(t65, t30, 8);

LAB117:    t80 = (t65 + 4);
    t66 = *((unsigned int *)t80);
    t67 = (~(t66));
    t68 = *((unsigned int *)t65);
    t72 = (t68 & t67);
    t73 = (t72 != 0);
    if (t73 > 0)
        goto LAB130;

LAB131:
LAB132:    xsi_set_current_line(126, ng0);
    t2 = (t0 + 4648);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng2)));
    memset(t14, 0, 8);
    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB141;

LAB140:    t22 = (t11 + 4);
    if (*((unsigned int *)t22) != 0)
        goto LAB141;

LAB144:    if (*((unsigned int *)t5) < *((unsigned int *)t11))
        goto LAB143;

LAB142:    *((unsigned int *)t14) = 1;

LAB143:    memset(t30, 0, 8);
    t29 = (t14 + 4);
    t6 = *((unsigned int *)t29);
    t7 = (~(t6));
    t8 = *((unsigned int *)t14);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB145;

LAB146:    if (*((unsigned int *)t29) != 0)
        goto LAB147;

LAB148:    t38 = (t30 + 4);
    t15 = *((unsigned int *)t30);
    t16 = *((unsigned int *)t38);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB149;

LAB150:    memcpy(t65, t30, 8);

LAB151:    t80 = (t65 + 4);
    t83 = *((unsigned int *)t80);
    t84 = (~(t83));
    t85 = *((unsigned int *)t65);
    t86 = (t85 & t84);
    t87 = (t86 != 0);
    if (t87 > 0)
        goto LAB163;

LAB164:
LAB165:    xsi_set_current_line(131, ng0);
    t2 = (t0 + 4008);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng2)));
    memset(t14, 0, 8);
    t12 = (t5 + 4);
    t22 = (t11 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t22);
    t15 = (t9 ^ t10);
    t16 = (t8 | t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t22);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB170;

LAB167:    if (t19 != 0)
        goto LAB169;

LAB168:    *((unsigned int *)t14) = 1;

LAB170:    t29 = (t14 + 4);
    t23 = *((unsigned int *)t29);
    t24 = (~(t23));
    t25 = *((unsigned int *)t14);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB171;

LAB172:
LAB173:    xsi_set_current_line(135, ng0);
    t2 = (t0 + 4648);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng3)));
    memset(t14, 0, 8);
    t12 = (t5 + 4);
    t22 = (t11 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t22);
    t15 = (t9 ^ t10);
    t16 = (t8 | t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t22);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB178;

LAB175:    if (t19 != 0)
        goto LAB177;

LAB176:    *((unsigned int *)t14) = 1;

LAB178:    t29 = (t14 + 4);
    t23 = *((unsigned int *)t29);
    t24 = (~(t23));
    t25 = *((unsigned int *)t14);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB179;

LAB180:
LAB181:    goto LAB79;

LAB83:    t43 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB84;

LAB85:    xsi_set_current_line(110, ng0);

LAB88:    xsi_set_current_line(111, ng0);
    t46 = ((char*)((ng1)));
    t56 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t56, t46, 0, 0, 8, 0LL);
    goto LAB87;

LAB92:    t28 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB93;

LAB94:    xsi_set_current_line(116, ng0);

LAB97:    xsi_set_current_line(117, ng0);
    t31 = ((char*)((ng1)));
    t38 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t38, t31, 0, 0, 1, 0LL);
    goto LAB96;

LAB100:    t28 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB101;

LAB102:    xsi_set_current_line(118, ng0);

LAB105:    xsi_set_current_line(119, ng0);
    t31 = ((char*)((ng2)));
    t38 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t38, t31, 0, 0, 1, 0LL);
    goto LAB104;

LAB107:    t28 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB109;

LAB111:    *((unsigned int *)t30) = 1;
    goto LAB114;

LAB113:    t31 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB114;

LAB115:    t39 = (t0 + 4648);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    t42 = ((char*)((ng5)));
    memset(t44, 0, 8);
    t43 = (t41 + 4);
    if (*((unsigned int *)t43) != 0)
        goto LAB119;

LAB118:    t45 = (t42 + 4);
    if (*((unsigned int *)t45) != 0)
        goto LAB119;

LAB122:    if (*((unsigned int *)t41) < *((unsigned int *)t42))
        goto LAB120;

LAB121:    memset(t57, 0, 8);
    t56 = (t44 + 4);
    t18 = *((unsigned int *)t56);
    t19 = (~(t18));
    t20 = *((unsigned int *)t44);
    t21 = (t20 & t19);
    t23 = (t21 & 1U);
    if (t23 != 0)
        goto LAB123;

LAB124:    if (*((unsigned int *)t56) != 0)
        goto LAB125;

LAB126:    t24 = *((unsigned int *)t30);
    t25 = *((unsigned int *)t57);
    t26 = (t24 & t25);
    *((unsigned int *)t65) = t26;
    t64 = (t30 + 4);
    t69 = (t57 + 4);
    t70 = (t65 + 4);
    t27 = *((unsigned int *)t64);
    t32 = *((unsigned int *)t69);
    t33 = (t27 | t32);
    *((unsigned int *)t70) = t33;
    t34 = *((unsigned int *)t70);
    t35 = (t34 != 0);
    if (t35 == 1)
        goto LAB127;

LAB128:
LAB129:    goto LAB117;

LAB119:    t46 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t46) = 1;
    goto LAB121;

LAB120:    *((unsigned int *)t44) = 1;
    goto LAB121;

LAB123:    *((unsigned int *)t57) = 1;
    goto LAB126;

LAB125:    t58 = (t57 + 4);
    *((unsigned int *)t57) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB126;

LAB127:    t36 = *((unsigned int *)t65);
    t37 = *((unsigned int *)t70);
    *((unsigned int *)t65) = (t36 | t37);
    t71 = (t30 + 4);
    t79 = (t57 + 4);
    t47 = *((unsigned int *)t30);
    t48 = (~(t47));
    t49 = *((unsigned int *)t71);
    t50 = (~(t49));
    t51 = *((unsigned int *)t57);
    t52 = (~(t51));
    t53 = *((unsigned int *)t79);
    t54 = (~(t53));
    t13 = (t48 & t50);
    t89 = (t52 & t54);
    t55 = (~(t13));
    t59 = (~(t89));
    t60 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t60 & t55);
    t61 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t61 & t59);
    t62 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t62 & t55);
    t63 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t63 & t59);
    goto LAB129;

LAB130:    xsi_set_current_line(122, ng0);

LAB133:    xsi_set_current_line(123, ng0);
    t97 = (t0 + 4008);
    t103 = (t97 + 56U);
    t104 = *((char **)t103);
    memset(t105, 0, 8);
    t106 = (t104 + 4);
    t74 = *((unsigned int *)t106);
    t75 = (~(t74));
    t76 = *((unsigned int *)t104);
    t77 = (t76 & t75);
    t78 = (t77 & 1U);
    if (t78 != 0)
        goto LAB137;

LAB135:    if (*((unsigned int *)t106) == 0)
        goto LAB134;

LAB136:    t107 = (t105 + 4);
    *((unsigned int *)t105) = 1;
    *((unsigned int *)t107) = 1;

LAB137:    t108 = (t105 + 4);
    t109 = (t104 + 4);
    t81 = *((unsigned int *)t104);
    t82 = (~(t81));
    *((unsigned int *)t105) = t82;
    *((unsigned int *)t108) = 0;
    if (*((unsigned int *)t109) != 0)
        goto LAB139;

LAB138:    t87 = *((unsigned int *)t105);
    *((unsigned int *)t105) = (t87 & 1U);
    t88 = *((unsigned int *)t108);
    *((unsigned int *)t108) = (t88 & 1U);
    t110 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t110, t105, 0, 0, 1, 0LL);
    goto LAB132;

LAB134:    *((unsigned int *)t105) = 1;
    goto LAB137;

LAB139:    t83 = *((unsigned int *)t105);
    t84 = *((unsigned int *)t109);
    *((unsigned int *)t105) = (t83 | t84);
    t85 = *((unsigned int *)t108);
    t86 = *((unsigned int *)t109);
    *((unsigned int *)t108) = (t85 | t86);
    goto LAB138;

LAB141:    t28 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB143;

LAB145:    *((unsigned int *)t30) = 1;
    goto LAB148;

LAB147:    t31 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB148;

LAB149:    t39 = (t0 + 4008);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    t42 = ((char*)((ng1)));
    memset(t44, 0, 8);
    t43 = (t41 + 4);
    t45 = (t42 + 4);
    t18 = *((unsigned int *)t41);
    t19 = *((unsigned int *)t42);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t43);
    t23 = *((unsigned int *)t45);
    t24 = (t21 ^ t23);
    t25 = (t20 | t24);
    t26 = *((unsigned int *)t43);
    t27 = *((unsigned int *)t45);
    t32 = (t26 | t27);
    t33 = (~(t32));
    t34 = (t25 & t33);
    if (t34 != 0)
        goto LAB155;

LAB152:    if (t32 != 0)
        goto LAB154;

LAB153:    *((unsigned int *)t44) = 1;

LAB155:    memset(t57, 0, 8);
    t56 = (t44 + 4);
    t35 = *((unsigned int *)t56);
    t36 = (~(t35));
    t37 = *((unsigned int *)t44);
    t47 = (t37 & t36);
    t48 = (t47 & 1U);
    if (t48 != 0)
        goto LAB156;

LAB157:    if (*((unsigned int *)t56) != 0)
        goto LAB158;

LAB159:    t49 = *((unsigned int *)t30);
    t50 = *((unsigned int *)t57);
    t51 = (t49 & t50);
    *((unsigned int *)t65) = t51;
    t64 = (t30 + 4);
    t69 = (t57 + 4);
    t70 = (t65 + 4);
    t52 = *((unsigned int *)t64);
    t53 = *((unsigned int *)t69);
    t54 = (t52 | t53);
    *((unsigned int *)t70) = t54;
    t55 = *((unsigned int *)t70);
    t59 = (t55 != 0);
    if (t59 == 1)
        goto LAB160;

LAB161:
LAB162:    goto LAB151;

LAB154:    t46 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t46) = 1;
    goto LAB155;

LAB156:    *((unsigned int *)t57) = 1;
    goto LAB159;

LAB158:    t58 = (t57 + 4);
    *((unsigned int *)t57) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB159;

LAB160:    t60 = *((unsigned int *)t65);
    t61 = *((unsigned int *)t70);
    *((unsigned int *)t65) = (t60 | t61);
    t71 = (t30 + 4);
    t79 = (t57 + 4);
    t62 = *((unsigned int *)t30);
    t63 = (~(t62));
    t66 = *((unsigned int *)t71);
    t67 = (~(t66));
    t68 = *((unsigned int *)t57);
    t72 = (~(t68));
    t73 = *((unsigned int *)t79);
    t74 = (~(t73));
    t13 = (t63 & t67);
    t89 = (t72 & t74);
    t75 = (~(t13));
    t76 = (~(t89));
    t77 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t77 & t75);
    t78 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t78 & t76);
    t81 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t81 & t75);
    t82 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t82 & t76);
    goto LAB162;

LAB163:    xsi_set_current_line(126, ng0);

LAB166:    xsi_set_current_line(127, ng0);
    t97 = (t0 + 4328);
    t103 = (t97 + 56U);
    t104 = *((char **)t103);
    memset(t105, 0, 8);
    t106 = (t105 + 4);
    t107 = (t104 + 4);
    t88 = *((unsigned int *)t104);
    t91 = (t88 >> 31);
    t92 = (t91 & 1);
    *((unsigned int *)t105) = t92;
    t93 = *((unsigned int *)t107);
    t94 = (t93 >> 31);
    t95 = (t94 & 1);
    *((unsigned int *)t106) = t95;
    t108 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t108, t105, 0, 0, 1, 0LL);
    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4328);
    t5 = (t3 + 56U);
    t11 = *((char **)t5);
    memset(t30, 0, 8);
    t12 = (t30 + 4);
    t22 = (t11 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (t6 >> 0);
    *((unsigned int *)t30) = t7;
    t8 = *((unsigned int *)t22);
    t9 = (t8 >> 0);
    *((unsigned int *)t12) = t9;
    t10 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t10 & 2147483647U);
    t15 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t15 & 2147483647U);
    xsi_vlogtype_concat(t14, 32, 32, 2U, t30, 31, t2, 1);
    t28 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t28, t14, 0, 0, 32, 0LL);
    goto LAB165;

LAB169:    t28 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB170;

LAB171:    xsi_set_current_line(131, ng0);

LAB174:    xsi_set_current_line(132, ng0);
    t31 = (t0 + 2648U);
    t38 = *((char **)t31);
    t31 = (t0 + 3208);
    t39 = (t31 + 56U);
    t40 = *((char **)t39);
    memset(t44, 0, 8);
    t41 = (t44 + 4);
    t42 = (t40 + 4);
    t32 = *((unsigned int *)t40);
    t33 = (t32 >> 0);
    *((unsigned int *)t44) = t33;
    t34 = *((unsigned int *)t42);
    t35 = (t34 >> 0);
    *((unsigned int *)t41) = t35;
    t36 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t36 & 2147483647U);
    t37 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t37 & 2147483647U);
    xsi_vlogtype_concat(t30, 32, 32, 2U, t44, 31, t38, 1);
    t43 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t43, t30, 0, 0, 32, 0LL);
    goto LAB173;

LAB177:    t28 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB178;

LAB179:    xsi_set_current_line(135, ng0);

LAB182:    xsi_set_current_line(136, ng0);
    t31 = ((char*)((ng6)));
    t38 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t38, t31, 0, 0, 4, 0LL);
    goto LAB181;

LAB186:    t22 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB187;

LAB188:    xsi_set_current_line(142, ng0);

LAB191:    xsi_set_current_line(143, ng0);
    t29 = ((char*)((ng1)));
    t31 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t31, t29, 0, 0, 4, 0LL);
    xsi_set_current_line(144, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB190;

}

static void Cont_159_5(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;

LAB0:    t1 = (t0 + 6968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(159, ng0);
    t2 = (t0 + 2328U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t17 = *((unsigned int *)t4);
    t18 = (~(t17));
    t19 = *((unsigned int *)t12);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t21, 8);

LAB16:    t22 = (t0 + 7968);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memset(t26, 0, 8);
    t27 = 1U;
    t28 = t27;
    t29 = (t3 + 4);
    t30 = *((unsigned int *)t3);
    t27 = (t27 & t30);
    t31 = *((unsigned int *)t29);
    t28 = (t28 & t31);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t33 | t27);
    t34 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t34 | t28);
    xsi_driver_vfirst_trans(t22, 0, 0);
    t35 = (t0 + 7616);
    *((int *)t35) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = ((char*)((ng1)));
    goto LAB9;

LAB10:    t21 = ((char*)((ng2)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t16, 1, t21, 1);
    goto LAB16;

LAB14:    memcpy(t3, t16, 8);
    goto LAB16;

}

static void Always_161_6(char *t0)
{
    char t13[8];
    char t14[8];
    char t20[8];
    char t27[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    int t49;
    int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;

LAB0:    t1 = (t0 + 7216U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(161, ng0);
    t2 = (t0 + 7632);
    *((int *)t2) = 1;
    t3 = (t0 + 7248);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(161, ng0);

LAB5:    xsi_set_current_line(162, ng0);
    t4 = (t0 + 1848U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(165, ng0);

LAB10:    xsi_set_current_line(166, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t2) != 0)
        goto LAB13;

LAB14:    t5 = (t14 + 4);
    t15 = *((unsigned int *)t14);
    t16 = *((unsigned int *)t5);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB15;

LAB16:    t21 = *((unsigned int *)t14);
    t22 = (~(t21));
    t23 = *((unsigned int *)t5);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t5) > 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t14) > 0)
        goto LAB21;

LAB22:    memcpy(t13, t25, 8);

LAB23:    t26 = (t0 + 4808);
    xsi_vlogvar_wait_assign_value(t26, t13, 0, 0, 8, 0LL);
    xsi_set_current_line(167, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = (t0 + 4808);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t11 = ((char*)((ng7)));
    memset(t20, 0, 8);
    t12 = (t5 + 4);
    t18 = (t11 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t18);
    t15 = (t9 ^ t10);
    t16 = (t8 | t15);
    t17 = *((unsigned int *)t12);
    t21 = *((unsigned int *)t18);
    t22 = (t17 | t21);
    t23 = (~(t22));
    t24 = (t16 & t23);
    if (t24 != 0)
        goto LAB27;

LAB24:    if (t22 != 0)
        goto LAB26;

LAB25:    *((unsigned int *)t20) = 1;

LAB27:    t28 = *((unsigned int *)t3);
    t29 = *((unsigned int *)t20);
    t30 = (t28 & t29);
    *((unsigned int *)t27) = t30;
    t25 = (t3 + 4);
    t26 = (t20 + 4);
    t31 = (t27 + 4);
    t32 = *((unsigned int *)t25);
    t33 = *((unsigned int *)t26);
    t34 = (t32 | t33);
    *((unsigned int *)t31) = t34;
    t35 = *((unsigned int *)t31);
    t36 = (t35 != 0);
    if (t36 == 1)
        goto LAB28;

LAB29:
LAB30:    memset(t14, 0, 8);
    t57 = (t27 + 4);
    t58 = *((unsigned int *)t57);
    t59 = (~(t58));
    t60 = *((unsigned int *)t27);
    t61 = (t60 & t59);
    t62 = (t61 & 1U);
    if (t62 != 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t57) != 0)
        goto LAB33;

LAB34:    t64 = (t14 + 4);
    t65 = *((unsigned int *)t14);
    t66 = *((unsigned int *)t64);
    t67 = (t65 || t66);
    if (t67 > 0)
        goto LAB35;

LAB36:    t69 = *((unsigned int *)t14);
    t70 = (~(t69));
    t71 = *((unsigned int *)t64);
    t72 = (t70 || t71);
    if (t72 > 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t64) > 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t14) > 0)
        goto LAB41;

LAB42:    memcpy(t13, t73, 8);

LAB43:    t74 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t74, t13, 0, 0, 1, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(162, ng0);

LAB9:    xsi_set_current_line(163, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 4808);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 8, 0LL);
    xsi_set_current_line(164, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB11:    *((unsigned int *)t14) = 1;
    goto LAB14;

LAB13:    t4 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB14;

LAB15:    t11 = (t0 + 4808);
    t12 = (t11 + 56U);
    t18 = *((char **)t12);
    t19 = ((char*)((ng2)));
    memset(t20, 0, 8);
    xsi_vlog_unsigned_add(t20, 8, t18, 8, t19, 8);
    goto LAB16;

LAB17:    t25 = ((char*)((ng1)));
    goto LAB18;

LAB19:    xsi_vlog_unsigned_bit_combine(t13, 8, t20, 8, t25, 8);
    goto LAB23;

LAB21:    memcpy(t13, t20, 8);
    goto LAB23;

LAB26:    t19 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB27;

LAB28:    t37 = *((unsigned int *)t27);
    t38 = *((unsigned int *)t31);
    *((unsigned int *)t27) = (t37 | t38);
    t39 = (t3 + 4);
    t40 = (t20 + 4);
    t41 = *((unsigned int *)t3);
    t42 = (~(t41));
    t43 = *((unsigned int *)t39);
    t44 = (~(t43));
    t45 = *((unsigned int *)t20);
    t46 = (~(t45));
    t47 = *((unsigned int *)t40);
    t48 = (~(t47));
    t49 = (t42 & t44);
    t50 = (t46 & t48);
    t51 = (~(t49));
    t52 = (~(t50));
    t53 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t53 & t51);
    t54 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t54 & t52);
    t55 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t55 & t51);
    t56 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t56 & t52);
    goto LAB30;

LAB31:    *((unsigned int *)t14) = 1;
    goto LAB34;

LAB33:    t63 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t63) = 1;
    goto LAB34;

LAB35:    t68 = ((char*)((ng2)));
    goto LAB36;

LAB37:    t73 = ((char*)((ng1)));
    goto LAB38;

LAB39:    xsi_vlog_unsigned_bit_combine(t13, 1, t68, 1, t73, 1);
    goto LAB43;

LAB41:    memcpy(t13, t68, 8);
    goto LAB43;

}


extern void work_m_00000000003479272382_3125385622_init()
{
	static char *pe[] = {(void *)Cont_56_0,(void *)Cont_57_1,(void *)Cont_58_2,(void *)Cont_59_3,(void *)Always_61_4,(void *)Cont_159_5,(void *)Always_161_6};
	xsi_register_didat("work_m_00000000003479272382_3125385622", "isim/dragonv5_main_tb_isim_beh.exe.sim/work/m_00000000003479272382_3125385622.didat");
	xsi_register_executes(pe);
}
