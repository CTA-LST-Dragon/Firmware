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
static const char *ng0 = "C:/Users/CTA_PC/Desktop/Firmware/dragonHDL_V5/20171023_hdl_dv5_3_00_01/Source/COUNTER_READ.v";
static unsigned int ng1[] = {2U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {1023U, 0U};
static unsigned int ng5[] = {16U, 0U};
static unsigned int ng6[] = {6U, 0U};
static unsigned int ng7[] = {5U, 0U};
static unsigned int ng8[] = {3U, 0U};
static unsigned int ng9[] = {43690U, 0U};
static unsigned int ng10[] = {4U, 0U};
static unsigned int ng11[] = {7U, 0U};
static unsigned int ng12[] = {8U, 0U};
static unsigned int ng13[] = {9U, 0U};
static unsigned int ng14[] = {10U, 0U};
static unsigned int ng15[] = {11U, 0U};
static unsigned int ng16[] = {12U, 0U};
static unsigned int ng17[] = {56797U, 0U};
static unsigned int ng18[] = {13U, 0U};
static unsigned int ng19[] = {14U, 0U};
static unsigned int ng20[] = {15U, 0U};



static void Cont_33_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t8[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
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
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;

LAB0:    t1 = (t0 + 5408U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 4008);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB7;

LAB4:    if (t20 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t8) = 1;

LAB7:    memset(t4, 0, 8);
    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t24) != 0)
        goto LAB10;

LAB11:    t31 = (t4 + 4);
    t32 = *((unsigned int *)t4);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB12;

LAB13:    t36 = *((unsigned int *)t4);
    t37 = (~(t36));
    t38 = *((unsigned int *)t31);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t31) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t40, 8);

LAB20:    t41 = (t0 + 6584);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    memset(t45, 0, 8);
    t46 = 1U;
    t47 = t46;
    t48 = (t3 + 4);
    t49 = *((unsigned int *)t3);
    t46 = (t46 & t49);
    t50 = *((unsigned int *)t48);
    t47 = (t47 & t50);
    t51 = (t45 + 4);
    t52 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t52 | t46);
    t53 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t53 | t47);
    xsi_driver_vfirst_trans(t41, 0, 0);
    t54 = (t0 + 6472);
    *((int *)t54) = 1;

LAB1:    return;
LAB6:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t30 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB11;

LAB12:    t35 = ((char*)((ng2)));
    goto LAB13;

LAB14:    t40 = ((char*)((ng3)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 1, t35, 1, t40, 1);
    goto LAB20;

LAB18:    memcpy(t3, t35, 8);
    goto LAB20;

}

static void Cont_38_1(char *t0)
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

LAB0:    t1 = (t0 + 5656U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 3448U);
    t3 = *((char **)t2);
    t2 = (t0 + 6648);
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
    t16 = (t0 + 6488);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_42_2(char *t0)
{
    char t5[8];
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;

LAB0:    t1 = (t0 + 5904U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng4)));
    t3 = ((char*)((ng5)));
    t4 = ((char*)((ng6)));
    memset(t5, 0, 8);
    xsi_vlog_unsigned_add(t5, 10, t3, 10, t4, 10);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 10, t2, 10, t5, 10);
    t7 = (t0 + 6712);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memset(t11, 0, 8);
    t12 = 1023U;
    t13 = t12;
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t12 = (t12 & t15);
    t16 = *((unsigned int *)t14);
    t13 = (t13 & t16);
    t17 = (t11 + 4);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t18 | t12);
    t19 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t19 | t13);
    xsi_driver_vfirst_trans(t7, 0, 9);

LAB1:    return;
}

static void Always_68_3(char *t0)
{
    char t14[8];
    char t33[8];
    char t34[8];
    char t41[8];
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
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t52;
    char *t53;

LAB0:    t1 = (t0 + 6152U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 6504);
    *((int *)t2) = 1;
    t3 = (t0 + 6184);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(68, ng0);

LAB5:    xsi_set_current_line(69, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(75, ng0);

LAB10:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 4008);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB11:    t5 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t5, 4);
    if (t13 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng8)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB18;

LAB19:
LAB20:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(69, ng0);

LAB9:    xsi_set_current_line(70, ng0);
    t11 = ((char*)((ng3)));
    t12 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 4, 0LL);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB12:    xsi_set_current_line(79, ng0);

LAB21:    xsi_set_current_line(80, ng0);
    t11 = (t0 + 1368U);
    t12 = *((char **)t11);
    t11 = ((char*)((ng7)));
    memset(t14, 0, 8);
    t15 = (t12 + 4);
    t16 = (t11 + 4);
    t6 = *((unsigned int *)t12);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t15);
    t10 = *((unsigned int *)t16);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t15);
    t20 = *((unsigned int *)t16);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB25;

LAB22:    if (t21 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t14) = 1;

LAB25:    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t14);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB26;

LAB27:
LAB28:    goto LAB20;

LAB14:    xsi_set_current_line(85, ng0);

LAB30:    xsi_set_current_line(87, ng0);
    t3 = (t0 + 4168);
    t5 = (t3 + 56U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng5)));
    memset(t14, 0, 8);
    t15 = (t11 + 4);
    t16 = (t12 + 4);
    t6 = *((unsigned int *)t11);
    t7 = *((unsigned int *)t12);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t15);
    t10 = *((unsigned int *)t16);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t15);
    t20 = *((unsigned int *)t16);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB34;

LAB31:    if (t21 != 0)
        goto LAB33;

LAB32:    *((unsigned int *)t14) = 1;

LAB34:    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t14);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB35;

LAB36:
LAB37:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng5)));
    memset(t14, 0, 8);
    t12 = (t5 + 4);
    t15 = (t11 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t15);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t12);
    t20 = *((unsigned int *)t15);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB42;

LAB39:    if (t21 != 0)
        goto LAB41;

LAB40:    *((unsigned int *)t14) = 1;

LAB42:    t24 = (t14 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (~(t26));
    t28 = *((unsigned int *)t14);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB43;

LAB44:    xsi_set_current_line(93, ng0);

LAB47:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng2)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 8, t5, 8, t11, 8);
    t12 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t12, t14, 0, 0, 8, 0LL);

LAB45:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng5)));
    memset(t14, 0, 8);
    t12 = (t5 + 4);
    t15 = (t11 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t15);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t12);
    t20 = *((unsigned int *)t15);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB51;

LAB48:    if (t21 != 0)
        goto LAB50;

LAB49:    *((unsigned int *)t14) = 1;

LAB51:    t24 = (t14 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (~(t26));
    t28 = *((unsigned int *)t14);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB52;

LAB53:    xsi_set_current_line(99, ng0);

LAB56:    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB54:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng3)));
    memset(t14, 0, 8);
    t12 = (t5 + 4);
    t15 = (t11 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t15);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t12);
    t20 = *((unsigned int *)t15);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB60;

LAB57:    if (t21 != 0)
        goto LAB59;

LAB58:    *((unsigned int *)t14) = 1;

LAB60:    t24 = (t14 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (~(t26));
    t28 = *((unsigned int *)t14);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB61;

LAB62:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng2)));
    memset(t14, 0, 8);
    t12 = (t5 + 4);
    t15 = (t11 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t15);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t12);
    t20 = *((unsigned int *)t15);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB68;

LAB65:    if (t21 != 0)
        goto LAB67;

LAB66:    *((unsigned int *)t14) = 1;

LAB68:    t24 = (t14 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (~(t26));
    t28 = *((unsigned int *)t14);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB69;

LAB70:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng1)));
    memset(t14, 0, 8);
    t12 = (t5 + 4);
    t15 = (t11 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t15);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t12);
    t20 = *((unsigned int *)t15);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB76;

LAB73:    if (t21 != 0)
        goto LAB75;

LAB74:    *((unsigned int *)t14) = 1;

LAB76:    t24 = (t14 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (~(t26));
    t28 = *((unsigned int *)t14);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB77;

LAB78:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng8)));
    memset(t14, 0, 8);
    t12 = (t5 + 4);
    t15 = (t11 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t15);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t12);
    t20 = *((unsigned int *)t15);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB84;

LAB81:    if (t21 != 0)
        goto LAB83;

LAB82:    *((unsigned int *)t14) = 1;

LAB84:    t24 = (t14 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (~(t26));
    t28 = *((unsigned int *)t14);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB85;

LAB86:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng10)));
    memset(t14, 0, 8);
    t12 = (t5 + 4);
    t15 = (t11 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t15);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t12);
    t20 = *((unsigned int *)t15);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB92;

LAB89:    if (t21 != 0)
        goto LAB91;

LAB90:    *((unsigned int *)t14) = 1;

LAB92:    t24 = (t14 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (~(t26));
    t28 = *((unsigned int *)t14);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB93;

LAB94:    xsi_set_current_line(121, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng7)));
    memset(t14, 0, 8);
    t12 = (t5 + 4);
    t15 = (t11 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t15);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t12);
    t20 = *((unsigned int *)t15);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB100;

LAB97:    if (t21 != 0)
        goto LAB99;

LAB98:    *((unsigned int *)t14) = 1;

LAB100:    t24 = (t14 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (~(t26));
    t28 = *((unsigned int *)t14);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB101;

LAB102:    xsi_set_current_line(125, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng6)));
    memset(t14, 0, 8);
    t12 = (t5 + 4);
    t15 = (t11 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t15);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t12);
    t20 = *((unsigned int *)t15);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB108;

LAB105:    if (t21 != 0)
        goto LAB107;

LAB106:    *((unsigned int *)t14) = 1;

LAB108:    t24 = (t14 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (~(t26));
    t28 = *((unsigned int *)t14);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB109;

LAB110:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng11)));
    memset(t14, 0, 8);
    t12 = (t5 + 4);
    t15 = (t11 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t15);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t12);
    t20 = *((unsigned int *)t15);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB116;

LAB113:    if (t21 != 0)
        goto LAB115;

LAB114:    *((unsigned int *)t14) = 1;

LAB116:    t24 = (t14 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (~(t26));
    t28 = *((unsigned int *)t14);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB117;

LAB118:    xsi_set_current_line(133, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng12)));
    memset(t14, 0, 8);
    t12 = (t5 + 4);
    t15 = (t11 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t15);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t12);
    t20 = *((unsigned int *)t15);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB124;

LAB121:    if (t21 != 0)
        goto LAB123;

LAB122:    *((unsigned int *)t14) = 1;

LAB124:    t24 = (t14 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (~(t26));
    t28 = *((unsigned int *)t14);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB125;

LAB126:    xsi_set_current_line(137, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng13)));
    memset(t14, 0, 8);
    t12 = (t5 + 4);
    t15 = (t11 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t15);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t12);
    t20 = *((unsigned int *)t15);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB132;

LAB129:    if (t21 != 0)
        goto LAB131;

LAB130:    *((unsigned int *)t14) = 1;

LAB132:    t24 = (t14 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (~(t26));
    t28 = *((unsigned int *)t14);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB133;

LAB134:    xsi_set_current_line(141, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng14)));
    memset(t14, 0, 8);
    t12 = (t5 + 4);
    t15 = (t11 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t15);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t12);
    t20 = *((unsigned int *)t15);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB140;

LAB137:    if (t21 != 0)
        goto LAB139;

LAB138:    *((unsigned int *)t14) = 1;

LAB140:    t24 = (t14 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (~(t26));
    t28 = *((unsigned int *)t14);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB141;

LAB142:    xsi_set_current_line(145, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng15)));
    memset(t14, 0, 8);
    t12 = (t5 + 4);
    t15 = (t11 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t15);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t12);
    t20 = *((unsigned int *)t15);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB148;

LAB145:    if (t21 != 0)
        goto LAB147;

LAB146:    *((unsigned int *)t14) = 1;

LAB148:    t24 = (t14 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (~(t26));
    t28 = *((unsigned int *)t14);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB149;

LAB150:    xsi_set_current_line(149, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng16)));
    memset(t14, 0, 8);
    t12 = (t5 + 4);
    t15 = (t11 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t15);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t12);
    t20 = *((unsigned int *)t15);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB156;

LAB153:    if (t21 != 0)
        goto LAB155;

LAB154:    *((unsigned int *)t14) = 1;

LAB156:    t24 = (t14 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (~(t26));
    t28 = *((unsigned int *)t14);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB157;

LAB158:    xsi_set_current_line(151, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng18)));
    memset(t14, 0, 8);
    t12 = (t5 + 4);
    t15 = (t11 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t15);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t12);
    t20 = *((unsigned int *)t15);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB164;

LAB161:    if (t21 != 0)
        goto LAB163;

LAB162:    *((unsigned int *)t14) = 1;

LAB164:    t24 = (t14 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (~(t26));
    t28 = *((unsigned int *)t14);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB165;

LAB166:    xsi_set_current_line(153, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng19)));
    memset(t14, 0, 8);
    t12 = (t5 + 4);
    t15 = (t11 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t15);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t12);
    t20 = *((unsigned int *)t15);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB172;

LAB169:    if (t21 != 0)
        goto LAB171;

LAB170:    *((unsigned int *)t14) = 1;

LAB172:    t24 = (t14 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (~(t26));
    t28 = *((unsigned int *)t14);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB173;

LAB174:    xsi_set_current_line(155, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng20)));
    memset(t14, 0, 8);
    t12 = (t5 + 4);
    t15 = (t11 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t15);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t12);
    t20 = *((unsigned int *)t15);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB180;

LAB177:    if (t21 != 0)
        goto LAB179;

LAB178:    *((unsigned int *)t14) = 1;

LAB180:    t24 = (t14 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (~(t26));
    t28 = *((unsigned int *)t14);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB181;

LAB182:    xsi_set_current_line(157, ng0);

LAB185:    xsi_set_current_line(158, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);

LAB183:
LAB175:
LAB167:
LAB159:
LAB151:
LAB143:
LAB135:
LAB127:
LAB119:
LAB111:
LAB103:
LAB95:
LAB87:
LAB79:
LAB71:
LAB63:    goto LAB20;

LAB16:    xsi_set_current_line(185, ng0);

LAB186:    xsi_set_current_line(186, ng0);
    t3 = (t0 + 1368U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng6)));
    memset(t14, 0, 8);
    t11 = (t5 + 4);
    t12 = (t3 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t3);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t12);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB190;

LAB187:    if (t21 != 0)
        goto LAB189;

LAB188:    *((unsigned int *)t14) = 1;

LAB190:    t16 = (t14 + 4);
    t26 = *((unsigned int *)t16);
    t27 = (~(t26));
    t28 = *((unsigned int *)t14);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB191;

LAB192:
LAB193:    xsi_set_current_line(190, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(191, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    xsi_set_current_line(192, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB20;

LAB18:    xsi_set_current_line(196, ng0);

LAB195:    xsi_set_current_line(198, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB20;

LAB24:    t24 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB25;

LAB26:    xsi_set_current_line(80, ng0);

LAB29:    xsi_set_current_line(81, ng0);
    t31 = ((char*)((ng8)));
    t32 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t32, t31, 0, 0, 4, 0LL);
    goto LAB28;

LAB33:    t24 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB34;

LAB35:    xsi_set_current_line(87, ng0);

LAB38:    xsi_set_current_line(88, ng0);
    t31 = ((char*)((ng1)));
    t32 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t32, t31, 0, 0, 4, 0LL);
    goto LAB37;

LAB41:    t16 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB42;

LAB43:    xsi_set_current_line(91, ng0);

LAB46:    xsi_set_current_line(92, ng0);
    t25 = ((char*)((ng3)));
    t31 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t31, t25, 0, 0, 8, 0LL);
    goto LAB45;

LAB50:    t16 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB51;

LAB52:    xsi_set_current_line(97, ng0);

LAB55:    xsi_set_current_line(98, ng0);
    t25 = ((char*)((ng3)));
    t31 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t31, t25, 0, 0, 1, 0LL);
    goto LAB54;

LAB59:    t16 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB60;

LAB61:    xsi_set_current_line(103, ng0);

LAB64:    xsi_set_current_line(104, ng0);
    t25 = ((char*)((ng9)));
    t31 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t31, t25, 0, 0, 16, 0LL);
    goto LAB63;

LAB67:    t16 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB68;

LAB69:    xsi_set_current_line(105, ng0);

LAB72:    xsi_set_current_line(108, ng0);
    t25 = (t0 + 2168U);
    t31 = *((char **)t25);
    memset(t34, 0, 8);
    t25 = (t34 + 4);
    t32 = (t31 + 4);
    t35 = *((unsigned int *)t31);
    t36 = (t35 >> 8);
    *((unsigned int *)t34) = t36;
    t37 = *((unsigned int *)t32);
    t38 = (t37 >> 8);
    *((unsigned int *)t25) = t38;
    t39 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t39 & 255U);
    t40 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t40 & 255U);
    t42 = (t0 + 2168U);
    t43 = *((char **)t42);
    memset(t41, 0, 8);
    t42 = (t41 + 4);
    t44 = (t43 + 4);
    t45 = *((unsigned int *)t43);
    t46 = (t45 >> 0);
    *((unsigned int *)t41) = t46;
    t47 = *((unsigned int *)t44);
    t48 = (t47 >> 0);
    *((unsigned int *)t42) = t48;
    t49 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t49 & 255U);
    t50 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t50 & 255U);
    xsi_vlogtype_concat(t33, 16, 16, 2U, t41, 8, t34, 8);
    t51 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t51, t33, 0, 0, 16, 0LL);
    goto LAB71;

LAB75:    t16 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB76;

LAB77:    xsi_set_current_line(109, ng0);

LAB80:    xsi_set_current_line(112, ng0);
    t25 = (t0 + 2008U);
    t31 = *((char **)t25);
    memset(t34, 0, 8);
    t25 = (t34 + 4);
    t32 = (t31 + 4);
    t35 = *((unsigned int *)t31);
    t36 = (t35 >> 8);
    *((unsigned int *)t34) = t36;
    t37 = *((unsigned int *)t32);
    t38 = (t37 >> 8);
    *((unsigned int *)t25) = t38;
    t39 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t39 & 255U);
    t40 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t40 & 255U);
    t42 = (t0 + 2008U);
    t43 = *((char **)t42);
    memset(t41, 0, 8);
    t42 = (t41 + 4);
    t44 = (t43 + 4);
    t45 = *((unsigned int *)t43);
    t46 = (t45 >> 0);
    *((unsigned int *)t41) = t46;
    t47 = *((unsigned int *)t44);
    t48 = (t47 >> 0);
    *((unsigned int *)t42) = t48;
    t49 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t49 & 255U);
    t50 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t50 & 255U);
    xsi_vlogtype_concat(t33, 16, 16, 2U, t41, 8, t34, 8);
    t51 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t51, t33, 0, 0, 16, 0LL);
    goto LAB79;

LAB83:    t16 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB84;

LAB85:    xsi_set_current_line(113, ng0);

LAB88:    xsi_set_current_line(116, ng0);
    t25 = (t0 + 2008U);
    t31 = *((char **)t25);
    memset(t34, 0, 8);
    t25 = (t34 + 4);
    t32 = (t31 + 4);
    t35 = *((unsigned int *)t31);
    t36 = (t35 >> 24);
    *((unsigned int *)t34) = t36;
    t37 = *((unsigned int *)t32);
    t38 = (t37 >> 24);
    *((unsigned int *)t25) = t38;
    t39 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t39 & 255U);
    t40 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t40 & 255U);
    t42 = (t0 + 2008U);
    t43 = *((char **)t42);
    memset(t41, 0, 8);
    t42 = (t41 + 4);
    t44 = (t43 + 4);
    t45 = *((unsigned int *)t43);
    t46 = (t45 >> 16);
    *((unsigned int *)t41) = t46;
    t47 = *((unsigned int *)t44);
    t48 = (t47 >> 16);
    *((unsigned int *)t42) = t48;
    t49 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t49 & 255U);
    t50 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t50 & 255U);
    xsi_vlogtype_concat(t33, 16, 16, 2U, t41, 8, t34, 8);
    t51 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t51, t33, 0, 0, 16, 0LL);
    goto LAB87;

LAB91:    t16 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB92;

LAB93:    xsi_set_current_line(117, ng0);

LAB96:    xsi_set_current_line(120, ng0);
    t25 = (t0 + 1528U);
    t31 = *((char **)t25);
    memset(t34, 0, 8);
    t25 = (t34 + 4);
    t32 = (t31 + 4);
    t35 = *((unsigned int *)t31);
    t36 = (t35 >> 8);
    *((unsigned int *)t34) = t36;
    t37 = *((unsigned int *)t32);
    t38 = (t37 >> 8);
    *((unsigned int *)t25) = t38;
    t39 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t39 & 255U);
    t40 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t40 & 255U);
    t42 = (t0 + 1528U);
    t43 = *((char **)t42);
    memset(t41, 0, 8);
    t42 = (t41 + 4);
    t44 = (t43 + 4);
    t45 = *((unsigned int *)t43);
    t46 = (t45 >> 0);
    *((unsigned int *)t41) = t46;
    t47 = *((unsigned int *)t44);
    t48 = (t47 >> 0);
    *((unsigned int *)t42) = t48;
    t49 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t49 & 255U);
    t50 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t50 & 255U);
    xsi_vlogtype_concat(t33, 16, 16, 2U, t41, 8, t34, 8);
    t51 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t51, t33, 0, 0, 16, 0LL);
    goto LAB95;

LAB99:    t16 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB100;

LAB101:    xsi_set_current_line(121, ng0);

LAB104:    xsi_set_current_line(124, ng0);
    t25 = (t0 + 1528U);
    t31 = *((char **)t25);
    memset(t34, 0, 8);
    t25 = (t34 + 4);
    t32 = (t31 + 4);
    t35 = *((unsigned int *)t31);
    t36 = (t35 >> 24);
    *((unsigned int *)t34) = t36;
    t37 = *((unsigned int *)t32);
    t38 = (t37 >> 24);
    *((unsigned int *)t25) = t38;
    t39 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t39 & 255U);
    t40 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t40 & 255U);
    t42 = (t0 + 1528U);
    t43 = *((char **)t42);
    memset(t41, 0, 8);
    t42 = (t41 + 4);
    t44 = (t43 + 4);
    t45 = *((unsigned int *)t43);
    t46 = (t45 >> 16);
    *((unsigned int *)t41) = t46;
    t47 = *((unsigned int *)t44);
    t48 = (t47 >> 16);
    *((unsigned int *)t42) = t48;
    t49 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t49 & 255U);
    t50 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t50 & 255U);
    xsi_vlogtype_concat(t33, 16, 16, 2U, t41, 8, t34, 8);
    t51 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t51, t33, 0, 0, 16, 0LL);
    goto LAB103;

LAB107:    t16 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB108;

LAB109:    xsi_set_current_line(125, ng0);

LAB112:    xsi_set_current_line(128, ng0);
    t25 = (t0 + 1688U);
    t31 = *((char **)t25);
    memset(t34, 0, 8);
    t25 = (t34 + 4);
    t32 = (t31 + 4);
    t35 = *((unsigned int *)t31);
    t36 = (t35 >> 8);
    *((unsigned int *)t34) = t36;
    t37 = *((unsigned int *)t32);
    t38 = (t37 >> 8);
    *((unsigned int *)t25) = t38;
    t39 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t39 & 255U);
    t40 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t40 & 255U);
    t42 = (t0 + 1688U);
    t43 = *((char **)t42);
    memset(t41, 0, 8);
    t42 = (t41 + 4);
    t44 = (t43 + 4);
    t45 = *((unsigned int *)t43);
    t46 = (t45 >> 0);
    *((unsigned int *)t41) = t46;
    t47 = *((unsigned int *)t44);
    t48 = (t47 >> 0);
    *((unsigned int *)t42) = t48;
    t49 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t49 & 255U);
    t50 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t50 & 255U);
    xsi_vlogtype_concat(t33, 16, 16, 2U, t41, 8, t34, 8);
    t51 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t51, t33, 0, 0, 16, 0LL);
    goto LAB111;

LAB115:    t16 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB116;

LAB117:    xsi_set_current_line(129, ng0);

LAB120:    xsi_set_current_line(132, ng0);
    t25 = (t0 + 1688U);
    t31 = *((char **)t25);
    memset(t34, 0, 8);
    t25 = (t34 + 4);
    t32 = (t31 + 4);
    t35 = *((unsigned int *)t31);
    t36 = (t35 >> 24);
    *((unsigned int *)t34) = t36;
    t37 = *((unsigned int *)t32);
    t38 = (t37 >> 24);
    *((unsigned int *)t25) = t38;
    t39 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t39 & 255U);
    t40 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t40 & 255U);
    t42 = (t0 + 1688U);
    t43 = *((char **)t42);
    memset(t41, 0, 8);
    t42 = (t41 + 4);
    t44 = (t43 + 4);
    t45 = *((unsigned int *)t43);
    t46 = (t45 >> 16);
    *((unsigned int *)t41) = t46;
    t47 = *((unsigned int *)t44);
    t48 = (t47 >> 16);
    *((unsigned int *)t42) = t48;
    t49 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t49 & 255U);
    t50 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t50 & 255U);
    xsi_vlogtype_concat(t33, 16, 16, 2U, t41, 8, t34, 8);
    t51 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t51, t33, 0, 0, 16, 0LL);
    goto LAB119;

LAB123:    t16 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB124;

LAB125:    xsi_set_current_line(133, ng0);

LAB128:    xsi_set_current_line(136, ng0);
    t25 = (t0 + 1848U);
    t31 = *((char **)t25);
    memset(t34, 0, 8);
    t25 = (t34 + 4);
    t32 = (t31 + 4);
    t35 = *((unsigned int *)t31);
    t36 = (t35 >> 8);
    *((unsigned int *)t34) = t36;
    t37 = *((unsigned int *)t32);
    t38 = (t37 >> 8);
    *((unsigned int *)t25) = t38;
    t39 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t39 & 255U);
    t40 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t40 & 255U);
    t42 = (t0 + 1848U);
    t43 = *((char **)t42);
    memset(t41, 0, 8);
    t42 = (t41 + 4);
    t44 = (t43 + 4);
    t45 = *((unsigned int *)t43);
    t46 = (t45 >> 0);
    *((unsigned int *)t41) = t46;
    t47 = *((unsigned int *)t44);
    t48 = (t47 >> 0);
    *((unsigned int *)t42) = t48;
    t49 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t49 & 255U);
    t50 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t50 & 255U);
    xsi_vlogtype_concat(t33, 16, 16, 2U, t41, 8, t34, 8);
    t51 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t51, t33, 0, 0, 16, 0LL);
    goto LAB127;

LAB131:    t16 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB132;

LAB133:    xsi_set_current_line(137, ng0);

LAB136:    xsi_set_current_line(140, ng0);
    t25 = (t0 + 1848U);
    t31 = *((char **)t25);
    memset(t34, 0, 8);
    t25 = (t34 + 4);
    t32 = (t31 + 4);
    t35 = *((unsigned int *)t31);
    t36 = (t35 >> 24);
    *((unsigned int *)t34) = t36;
    t37 = *((unsigned int *)t32);
    t38 = (t37 >> 24);
    *((unsigned int *)t25) = t38;
    t39 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t39 & 255U);
    t40 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t40 & 255U);
    t42 = (t0 + 1848U);
    t43 = *((char **)t42);
    memset(t41, 0, 8);
    t42 = (t41 + 4);
    t44 = (t43 + 4);
    t45 = *((unsigned int *)t43);
    t46 = (t45 >> 16);
    *((unsigned int *)t41) = t46;
    t47 = *((unsigned int *)t44);
    t48 = (t47 >> 16);
    *((unsigned int *)t42) = t48;
    t49 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t49 & 255U);
    t50 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t50 & 255U);
    xsi_vlogtype_concat(t33, 16, 16, 2U, t41, 8, t34, 8);
    t51 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t51, t33, 0, 0, 16, 0LL);
    goto LAB135;

LAB139:    t16 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB140;

LAB141:    xsi_set_current_line(141, ng0);

LAB144:    xsi_set_current_line(144, ng0);
    t25 = (t0 + 1848U);
    t31 = *((char **)t25);
    memset(t34, 0, 8);
    t25 = (t34 + 4);
    t32 = (t31 + 8);
    t42 = (t31 + 12);
    t35 = *((unsigned int *)t32);
    t36 = (t35 >> 8);
    *((unsigned int *)t34) = t36;
    t37 = *((unsigned int *)t42);
    t38 = (t37 >> 8);
    *((unsigned int *)t25) = t38;
    t39 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t39 & 255U);
    t40 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t40 & 255U);
    t43 = (t0 + 1848U);
    t44 = *((char **)t43);
    memset(t41, 0, 8);
    t43 = (t41 + 4);
    t51 = (t44 + 8);
    t52 = (t44 + 12);
    t45 = *((unsigned int *)t51);
    t46 = (t45 >> 0);
    *((unsigned int *)t41) = t46;
    t47 = *((unsigned int *)t52);
    t48 = (t47 >> 0);
    *((unsigned int *)t43) = t48;
    t49 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t49 & 255U);
    t50 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t50 & 255U);
    xsi_vlogtype_concat(t33, 16, 16, 2U, t41, 8, t34, 8);
    t53 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t53, t33, 0, 0, 16, 0LL);
    goto LAB143;

LAB147:    t16 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB148;

LAB149:    xsi_set_current_line(145, ng0);

LAB152:    xsi_set_current_line(148, ng0);
    t25 = (t0 + 1848U);
    t31 = *((char **)t25);
    memset(t34, 0, 8);
    t25 = (t34 + 4);
    t32 = (t31 + 8);
    t42 = (t31 + 12);
    t35 = *((unsigned int *)t32);
    t36 = (t35 >> 24);
    *((unsigned int *)t34) = t36;
    t37 = *((unsigned int *)t42);
    t38 = (t37 >> 24);
    *((unsigned int *)t25) = t38;
    t39 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t39 & 255U);
    t40 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t40 & 255U);
    t43 = (t0 + 1848U);
    t44 = *((char **)t43);
    memset(t41, 0, 8);
    t43 = (t41 + 4);
    t51 = (t44 + 8);
    t52 = (t44 + 12);
    t45 = *((unsigned int *)t51);
    t46 = (t45 >> 16);
    *((unsigned int *)t41) = t46;
    t47 = *((unsigned int *)t52);
    t48 = (t47 >> 16);
    *((unsigned int *)t43) = t48;
    t49 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t49 & 255U);
    t50 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t50 & 255U);
    xsi_vlogtype_concat(t33, 16, 16, 2U, t41, 8, t34, 8);
    t53 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t53, t33, 0, 0, 16, 0LL);
    goto LAB151;

LAB155:    t16 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB156;

LAB157:    xsi_set_current_line(149, ng0);

LAB160:    xsi_set_current_line(150, ng0);
    t25 = ((char*)((ng17)));
    t31 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t31, t25, 0, 0, 16, 0LL);
    goto LAB159;

LAB163:    t16 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB164;

LAB165:    xsi_set_current_line(151, ng0);

LAB168:    xsi_set_current_line(152, ng0);
    t25 = ((char*)((ng17)));
    t31 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t31, t25, 0, 0, 16, 0LL);
    goto LAB167;

LAB171:    t16 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB172;

LAB173:    xsi_set_current_line(153, ng0);

LAB176:    xsi_set_current_line(154, ng0);
    t25 = ((char*)((ng17)));
    t31 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t31, t25, 0, 0, 16, 0LL);
    goto LAB175;

LAB179:    t16 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB180;

LAB181:    xsi_set_current_line(155, ng0);

LAB184:    xsi_set_current_line(156, ng0);
    t25 = ((char*)((ng17)));
    t31 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t31, t25, 0, 0, 16, 0LL);
    goto LAB183;

LAB189:    t15 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB190;

LAB191:    xsi_set_current_line(186, ng0);

LAB194:    xsi_set_current_line(187, ng0);
    t24 = ((char*)((ng3)));
    t25 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t25, t24, 0, 0, 4, 0LL);
    goto LAB193;

}


extern void work_m_00000000003618027227_4260787706_init()
{
	static char *pe[] = {(void *)Cont_33_0,(void *)Cont_38_1,(void *)Cont_42_2,(void *)Always_68_3};
	xsi_register_didat("work_m_00000000003618027227_4260787706", "isim/dragonv5_main_tb_isim_beh.exe.sim/work/m_00000000003618027227_4260787706.didat");
	xsi_register_executes(pe);
}
