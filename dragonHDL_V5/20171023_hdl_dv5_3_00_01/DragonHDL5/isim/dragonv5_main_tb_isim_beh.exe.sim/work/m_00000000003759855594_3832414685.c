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
static const char *ng0 = "C:/Users/CTA_PC/Desktop/Firmware/dragonHDL_V5/20171023_hdl_dv5_3_00_01/Source/ADC_SPI.v";
static unsigned int ng1[] = {0U, 1U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {100U, 0U};
static unsigned int ng5[] = {26U, 0U};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {2U, 0U};



static void Cont_51_0(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;

LAB0:    t1 = (t0 + 4608U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 2568);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t7) != 0)
        goto LAB6;

LAB7:    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB8;

LAB9:    t21 = *((unsigned int *)t4);
    t22 = (~(t21));
    t23 = *((unsigned int *)t14);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t14) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t25, 8);

LAB16:    t26 = (t0 + 5272);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memset(t30, 0, 8);
    t31 = 1U;
    t32 = t31;
    t33 = (t3 + 4);
    t34 = *((unsigned int *)t3);
    t31 = (t31 & t34);
    t35 = *((unsigned int *)t33);
    t32 = (t32 & t35);
    t36 = (t30 + 4);
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t37 | t31);
    t38 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t38 | t32);
    xsi_driver_vfirst_trans(t26, 0, 0);
    t39 = (t0 + 5176);
    *((int *)t39) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB7;

LAB8:    t18 = (t0 + 3048);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    goto LAB9;

LAB10:    t25 = ((char*)((ng1)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t20, 1, t25, 1);
    goto LAB16;

LAB14:    memcpy(t3, t20, 8);
    goto LAB16;

}

static void Always_53_1(char *t0)
{
    char t16[8];
    char t35[8];
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
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;

LAB0:    t1 = (t0 + 4856U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 5192);
    *((int *)t2) = 1;
    t3 = (t0 + 4888);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(53, ng0);

LAB5:    xsi_set_current_line(54, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(65, ng0);

LAB10:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB11:    t5 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t5, 2);
    if (t13 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t13 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng7)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t13 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng6)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t13 == 1)
        goto LAB18;

LAB19:
LAB20:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(54, ng0);

LAB9:    xsi_set_current_line(55, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 24, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB12:    xsi_set_current_line(69, ng0);

LAB21:    xsi_set_current_line(70, ng0);
    t11 = (t0 + 3688);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    t15 = ((char*)((ng4)));
    memset(t16, 0, 8);
    t17 = (t14 + 4);
    t18 = (t15 + 4);
    t6 = *((unsigned int *)t14);
    t7 = *((unsigned int *)t15);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t17);
    t10 = *((unsigned int *)t18);
    t19 = (t9 ^ t10);
    t20 = (t8 | t19);
    t21 = *((unsigned int *)t17);
    t22 = *((unsigned int *)t18);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB25;

LAB22:    if (t23 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t16) = 1;

LAB25:    t27 = (t16 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t16);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(97, ng0);

LAB72:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng2)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 8, t5, 8, t11, 8);
    t12 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t12, t16, 0, 0, 8, 0LL);

LAB28:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng5)));
    memset(t16, 0, 8);
    t12 = (t5 + 4);
    t14 = (t11 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t14);
    t19 = (t9 ^ t10);
    t20 = (t8 | t19);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t14);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB76;

LAB73:    if (t23 != 0)
        goto LAB75;

LAB74:    *((unsigned int *)t16) = 1;

LAB76:    t17 = (t16 + 4);
    t28 = *((unsigned int *)t17);
    t29 = (~(t28));
    t30 = *((unsigned int *)t16);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB77;

LAB78:
LAB79:    goto LAB20;

LAB14:    xsi_set_current_line(106, ng0);

LAB81:    xsi_set_current_line(107, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(108, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB82;

LAB83:
LAB84:    goto LAB20;

LAB16:    xsi_set_current_line(113, ng0);

LAB86:    xsi_set_current_line(114, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 24, 0LL);
    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(123, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB20;

LAB18:    xsi_set_current_line(126, ng0);

LAB87:    xsi_set_current_line(127, ng0);
    t3 = (t0 + 1848U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t16, 0, 8);
    t11 = (t5 + 4);
    t12 = (t3 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t3);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t19 = (t9 ^ t10);
    t20 = (t8 | t19);
    t21 = *((unsigned int *)t11);
    t22 = *((unsigned int *)t12);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB91;

LAB88:    if (t23 != 0)
        goto LAB90;

LAB89:    *((unsigned int *)t16) = 1;

LAB91:    t15 = (t16 + 4);
    t28 = *((unsigned int *)t15);
    t29 = (~(t28));
    t30 = *((unsigned int *)t16);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB92;

LAB93:    xsi_set_current_line(129, ng0);

LAB96:    xsi_set_current_line(130, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB94:    xsi_set_current_line(133, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t16, 0, 8);
    t5 = (t3 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t19 = (t9 ^ t10);
    t20 = (t8 | t19);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t11);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB100;

LAB97:    if (t23 != 0)
        goto LAB99;

LAB98:    *((unsigned int *)t16) = 1;

LAB100:    t14 = (t16 + 4);
    t28 = *((unsigned int *)t14);
    t29 = (~(t28));
    t30 = *((unsigned int *)t16);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB101;

LAB102:
LAB103:    goto LAB20;

LAB24:    t26 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB25;

LAB26:    xsi_set_current_line(70, ng0);

LAB29:    xsi_set_current_line(71, ng0);
    t33 = ((char*)((ng3)));
    t34 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t34, t33, 0, 0, 8, 0LL);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng3)));
    memset(t16, 0, 8);
    t12 = (t5 + 4);
    t14 = (t11 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t14);
    t19 = (t9 ^ t10);
    t20 = (t8 | t19);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t14);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB33;

LAB30:    if (t23 != 0)
        goto LAB32;

LAB31:    *((unsigned int *)t16) = 1;

LAB33:    t17 = (t16 + 4);
    t28 = *((unsigned int *)t17);
    t29 = (~(t28));
    t30 = *((unsigned int *)t16);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB34;

LAB35:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng2)));
    memset(t16, 0, 8);
    t12 = (t5 + 4);
    t14 = (t11 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t14);
    t19 = (t9 ^ t10);
    t20 = (t8 | t19);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t14);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB41;

LAB38:    if (t23 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t16) = 1;

LAB41:    t17 = (t16 + 4);
    t28 = *((unsigned int *)t17);
    t29 = (~(t28));
    t30 = *((unsigned int *)t16);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB42;

LAB43:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng5)));
    memset(t16, 0, 8);
    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB47;

LAB46:    t14 = (t11 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB47;

LAB50:    if (*((unsigned int *)t5) < *((unsigned int *)t11))
        goto LAB48;

LAB49:    t17 = (t16 + 4);
    t6 = *((unsigned int *)t17);
    t7 = (~(t6));
    t8 = *((unsigned int *)t16);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB51;

LAB52:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng5)));
    memset(t16, 0, 8);
    t12 = (t5 + 4);
    t14 = (t11 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t14);
    t19 = (t9 ^ t10);
    t20 = (t8 | t19);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t14);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB67;

LAB64:    if (t23 != 0)
        goto LAB66;

LAB65:    *((unsigned int *)t16) = 1;

LAB67:    t17 = (t16 + 4);
    t28 = *((unsigned int *)t17);
    t29 = (~(t28));
    t30 = *((unsigned int *)t16);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB68;

LAB69:
LAB70:
LAB53:
LAB44:
LAB36:    goto LAB28;

LAB32:    t15 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB33;

LAB34:    xsi_set_current_line(72, ng0);

LAB37:    xsi_set_current_line(73, ng0);
    t18 = ((char*)((ng3)));
    t26 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t26, t18, 0, 0, 1, 0LL);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 1688U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng3)));
    t11 = ((char*)((ng3)));
    xsi_vlogtype_concat(t16, 24, 24, 4U, t11, 1, t2, 2, t5, 13, t3, 8);
    t12 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t12, t16, 0, 0, 24, 0LL);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng2)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 8, t5, 8, t11, 8);
    t12 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t12, t16, 0, 0, 8, 0LL);
    goto LAB36;

LAB40:    t15 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB41;

LAB42:    xsi_set_current_line(78, ng0);

LAB45:    xsi_set_current_line(79, ng0);
    t18 = (t0 + 3368);
    t26 = (t18 + 56U);
    t27 = *((char **)t26);
    memset(t35, 0, 8);
    t33 = (t35 + 4);
    t34 = (t27 + 4);
    t36 = *((unsigned int *)t27);
    t37 = (t36 >> 23);
    t38 = (t37 & 1);
    *((unsigned int *)t35) = t38;
    t39 = *((unsigned int *)t34);
    t40 = (t39 >> 23);
    t41 = (t40 & 1);
    *((unsigned int *)t33) = t41;
    t42 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t42, t35, 0, 0, 1, 0LL);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng2)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 8, t5, 8, t11, 8);
    t12 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t12, t16, 0, 0, 8, 0LL);
    goto LAB44;

LAB47:    t15 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB49;

LAB48:    *((unsigned int *)t16) = 1;
    goto LAB49;

LAB51:    xsi_set_current_line(81, ng0);

LAB54:    xsi_set_current_line(82, ng0);
    t18 = (t0 + 2408);
    t26 = (t18 + 56U);
    t27 = *((char **)t26);
    t33 = ((char*)((ng3)));
    memset(t35, 0, 8);
    t34 = (t27 + 4);
    t42 = (t33 + 4);
    t19 = *((unsigned int *)t27);
    t20 = *((unsigned int *)t33);
    t21 = (t19 ^ t20);
    t22 = *((unsigned int *)t34);
    t23 = *((unsigned int *)t42);
    t24 = (t22 ^ t23);
    t25 = (t21 | t24);
    t28 = *((unsigned int *)t34);
    t29 = *((unsigned int *)t42);
    t30 = (t28 | t29);
    t31 = (~(t30));
    t32 = (t25 & t31);
    if (t32 != 0)
        goto LAB58;

LAB55:    if (t30 != 0)
        goto LAB57;

LAB56:    *((unsigned int *)t35) = 1;

LAB58:    t44 = (t35 + 4);
    t36 = *((unsigned int *)t44);
    t37 = (~(t36));
    t38 = *((unsigned int *)t35);
    t39 = (t38 & t37);
    t40 = (t39 != 0);
    if (t40 > 0)
        goto LAB59;

LAB60:    xsi_set_current_line(85, ng0);

LAB63:    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t16, 0, 8);
    t11 = (t16 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (t6 >> 23);
    t8 = (t7 & 1);
    *((unsigned int *)t16) = t8;
    t9 = *((unsigned int *)t12);
    t10 = (t9 >> 23);
    t19 = (t10 & 1);
    *((unsigned int *)t11) = t19;
    t14 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t14, t16, 0, 0, 1, 0LL);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng2)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 8, t5, 8, t11, 8);
    t12 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t12, t16, 0, 0, 8, 0LL);

LAB61:    goto LAB53;

LAB57:    t43 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB58;

LAB59:    xsi_set_current_line(82, ng0);

LAB62:    xsi_set_current_line(83, ng0);
    t45 = ((char*)((ng2)));
    t46 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t46, t45, 0, 0, 1, 0LL);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3368);
    t5 = (t3 + 56U);
    t11 = *((char **)t5);
    memset(t35, 0, 8);
    t12 = (t35 + 4);
    t14 = (t11 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (t6 >> 0);
    *((unsigned int *)t35) = t7;
    t8 = *((unsigned int *)t14);
    t9 = (t8 >> 0);
    *((unsigned int *)t12) = t9;
    t10 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t10 & 8388607U);
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t19 & 8388607U);
    xsi_vlogtype_concat(t16, 24, 24, 2U, t35, 23, t2, 1);
    t15 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t15, t16, 0, 0, 24, 0LL);
    goto LAB61;

LAB66:    t15 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB67;

LAB68:    xsi_set_current_line(90, ng0);

LAB71:    xsi_set_current_line(91, ng0);
    t18 = ((char*)((ng2)));
    t26 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t26, t18, 0, 0, 1, 0LL);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 24, 0LL);
    goto LAB70;

LAB75:    t15 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB76;

LAB77:    xsi_set_current_line(101, ng0);

LAB80:    xsi_set_current_line(102, ng0);
    t18 = ((char*)((ng6)));
    t26 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t26, t18, 0, 0, 2, 0LL);
    goto LAB79;

LAB82:    xsi_set_current_line(108, ng0);

LAB85:    xsi_set_current_line(109, ng0);
    t5 = ((char*)((ng7)));
    t11 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 2, 0LL);
    goto LAB84;

LAB90:    t14 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB91;

LAB92:    xsi_set_current_line(127, ng0);

LAB95:    xsi_set_current_line(128, ng0);
    t17 = ((char*)((ng2)));
    t18 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t18, t17, 0, 0, 1, 0LL);
    goto LAB94;

LAB99:    t12 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB100;

LAB101:    xsi_set_current_line(133, ng0);

LAB104:    xsi_set_current_line(134, ng0);
    t15 = ((char*)((ng2)));
    t17 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t17, t15, 0, 0, 2, 0LL);
    goto LAB103;

}


extern void work_m_00000000003759855594_3832414685_init()
{
	static char *pe[] = {(void *)Cont_51_0,(void *)Always_53_1};
	xsi_register_didat("work_m_00000000003759855594_3832414685", "isim/dragonv5_main_tb_isim_beh.exe.sim/work/m_00000000003759855594_3832414685.didat");
	xsi_register_executes(pe);
}
