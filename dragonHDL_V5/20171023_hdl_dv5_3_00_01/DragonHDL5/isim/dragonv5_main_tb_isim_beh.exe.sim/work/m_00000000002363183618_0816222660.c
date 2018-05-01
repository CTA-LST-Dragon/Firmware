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
static const char *ng0 = "C:/Users/CTA_PC/Desktop/Firmware/dragonHDL_V5/20171023_hdl_dv5_3_00_01/Source/DAC_DRS.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {51U, 0U};
static unsigned int ng4[] = {55U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {54U, 0U};
static unsigned int ng7[] = {3U, 0U};
static unsigned int ng8[] = {50U, 0U};
static unsigned int ng9[] = {4U, 0U};
static unsigned int ng10[] = {49U, 0U};
static unsigned int ng11[] = {5U, 0U};
static unsigned int ng12[] = {4194304U, 0U};
static unsigned int ng13[] = {6U, 0U};
static unsigned int ng14[] = {4456448U, 0U};
static unsigned int ng15[] = {7U, 0U};
static unsigned int ng16[] = {4521984U, 0U};
static unsigned int ng17[] = {26U, 0U};



static void Always_56_0(char *t0)
{
    char t16[8];
    char t35[8];
    char t47[8];
    char t57[8];
    char t64[8];
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
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;
    char *t102;

LAB0:    t1 = (t0 + 4928U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 5248);
    *((int *)t2) = 1;
    t3 = (t0 + 4960);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(56, ng0);

LAB5:    xsi_set_current_line(57, ng0);
    t4 = (t0 + 2008U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(68, ng0);

LAB10:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 4008);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB11:    t5 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t5, 2);
    if (t13 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t13 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t13 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng7)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t13 == 1)
        goto LAB18;

LAB19:
LAB20:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(57, ng0);

LAB9:    xsi_set_current_line(58, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 24, 0LL);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB12:    xsi_set_current_line(70, ng0);

LAB21:    xsi_set_current_line(71, ng0);
    t11 = (t0 + 3528);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    t15 = ((char*)((ng2)));
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

LAB27:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng1)));
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
        goto LAB97;

LAB94:    if (t23 != 0)
        goto LAB96;

LAB95:    *((unsigned int *)t16) = 1;

LAB97:    t17 = (t16 + 4);
    t28 = *((unsigned int *)t17);
    t29 = (~(t28));
    t30 = *((unsigned int *)t16);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB98;

LAB99:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng17)));
    memset(t16, 0, 8);
    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB103;

LAB102:    t14 = (t11 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB103;

LAB106:    if (*((unsigned int *)t5) < *((unsigned int *)t11))
        goto LAB104;

LAB105:    t17 = (t16 + 4);
    t6 = *((unsigned int *)t17);
    t7 = (~(t6));
    t8 = *((unsigned int *)t16);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB107;

LAB108:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng17)));
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
        goto LAB123;

LAB120:    if (t23 != 0)
        goto LAB122;

LAB121:    *((unsigned int *)t16) = 1;

LAB123:    t17 = (t16 + 4);
    t28 = *((unsigned int *)t17);
    t29 = (~(t28));
    t30 = *((unsigned int *)t16);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB124;

LAB125:
LAB126:
LAB109:
LAB100:
LAB28:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng17)));
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
        goto LAB131;

LAB128:    if (t23 != 0)
        goto LAB130;

LAB129:    *((unsigned int *)t16) = 1;

LAB131:    memset(t35, 0, 8);
    t17 = (t16 + 4);
    t28 = *((unsigned int *)t17);
    t29 = (~(t28));
    t30 = *((unsigned int *)t16);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB132;

LAB133:    if (*((unsigned int *)t17) != 0)
        goto LAB134;

LAB135:    t26 = (t35 + 4);
    t36 = *((unsigned int *)t35);
    t37 = *((unsigned int *)t26);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB136;

LAB137:    memcpy(t64, t35, 8);

LAB138:    t95 = (t64 + 4);
    t96 = *((unsigned int *)t95);
    t97 = (~(t96));
    t98 = *((unsigned int *)t64);
    t99 = (t98 & t97);
    t100 = (t99 != 0);
    if (t100 > 0)
        goto LAB150;

LAB151:
LAB152:    goto LAB20;

LAB14:    xsi_set_current_line(118, ng0);

LAB154:    xsi_set_current_line(119, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(120, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB155;

LAB156:
LAB157:    goto LAB20;

LAB16:    xsi_set_current_line(125, ng0);

LAB159:    xsi_set_current_line(126, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(127, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(129, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(130, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(131, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(132, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 24, 0LL);
    xsi_set_current_line(133, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(135, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB20;

LAB18:    xsi_set_current_line(138, ng0);

LAB160:    xsi_set_current_line(139, ng0);
    t3 = (t0 + 2168U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng1)));
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
        goto LAB164;

LAB161:    if (t23 != 0)
        goto LAB163;

LAB162:    *((unsigned int *)t16) = 1;

LAB164:    t15 = (t16 + 4);
    t28 = *((unsigned int *)t15);
    t29 = (~(t28));
    t30 = *((unsigned int *)t16);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB165;

LAB166:    xsi_set_current_line(141, ng0);

LAB169:    xsi_set_current_line(142, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB167:    xsi_set_current_line(145, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
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
        goto LAB173;

LAB170:    if (t23 != 0)
        goto LAB172;

LAB171:    *((unsigned int *)t16) = 1;

LAB173:    t14 = (t16 + 4);
    t28 = *((unsigned int *)t14);
    t29 = (~(t28));
    t30 = *((unsigned int *)t16);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB174;

LAB175:
LAB176:    goto LAB20;

LAB24:    t26 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB25;

LAB26:    xsi_set_current_line(71, ng0);

LAB29:    xsi_set_current_line(72, ng0);
    t33 = ((char*)((ng2)));
    t34 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t34, t33, 0, 0, 1, 0LL);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 3688);
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

LAB35:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng1)));
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

LAB43:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 3688);
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
        goto LAB49;

LAB46:    if (t23 != 0)
        goto LAB48;

LAB47:    *((unsigned int *)t16) = 1;

LAB49:    t17 = (t16 + 4);
    t28 = *((unsigned int *)t17);
    t29 = (~(t28));
    t30 = *((unsigned int *)t16);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB50;

LAB51:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng7)));
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
        goto LAB57;

LAB54:    if (t23 != 0)
        goto LAB56;

LAB55:    *((unsigned int *)t16) = 1;

LAB57:    t17 = (t16 + 4);
    t28 = *((unsigned int *)t17);
    t29 = (~(t28));
    t30 = *((unsigned int *)t16);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB58;

LAB59:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng9)));
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
        goto LAB65;

LAB62:    if (t23 != 0)
        goto LAB64;

LAB63:    *((unsigned int *)t16) = 1;

LAB65:    t17 = (t16 + 4);
    t28 = *((unsigned int *)t17);
    t29 = (~(t28));
    t30 = *((unsigned int *)t16);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB66;

LAB67:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng11)));
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
        goto LAB73;

LAB70:    if (t23 != 0)
        goto LAB72;

LAB71:    *((unsigned int *)t16) = 1;

LAB73:    t17 = (t16 + 4);
    t28 = *((unsigned int *)t17);
    t29 = (~(t28));
    t30 = *((unsigned int *)t16);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB74;

LAB75:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng13)));
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
        goto LAB81;

LAB78:    if (t23 != 0)
        goto LAB80;

LAB79:    *((unsigned int *)t16) = 1;

LAB81:    t17 = (t16 + 4);
    t28 = *((unsigned int *)t17);
    t29 = (~(t28));
    t30 = *((unsigned int *)t16);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB82;

LAB83:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng15)));
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
        goto LAB89;

LAB86:    if (t23 != 0)
        goto LAB88;

LAB87:    *((unsigned int *)t16) = 1;

LAB89:    t17 = (t16 + 4);
    t28 = *((unsigned int *)t17);
    t29 = (~(t28));
    t30 = *((unsigned int *)t16);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB90;

LAB91:
LAB92:
LAB84:
LAB76:
LAB68:
LAB60:
LAB52:
LAB44:
LAB36:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng1)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 8, t5, 8, t11, 8);
    t12 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t12, t16, 0, 0, 8, 0LL);
    goto LAB28;

LAB32:    t15 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB33;

LAB34:    xsi_set_current_line(74, ng0);

LAB37:    xsi_set_current_line(75, ng0);
    t18 = (t0 + 1048U);
    t26 = *((char **)t18);
    t18 = ((char*)((ng3)));
    xsi_vlogtype_concat(t35, 24, 24, 2U, t18, 8, t26, 16);
    t27 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t27, t35, 0, 0, 24, 0LL);
    goto LAB36;

LAB40:    t15 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB41;

LAB42:    xsi_set_current_line(76, ng0);

LAB45:    xsi_set_current_line(77, ng0);
    t18 = (t0 + 1208U);
    t26 = *((char **)t18);
    t18 = ((char*)((ng4)));
    xsi_vlogtype_concat(t35, 24, 24, 2U, t18, 8, t26, 16);
    t27 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t27, t35, 0, 0, 24, 0LL);
    goto LAB44;

LAB48:    t15 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB49;

LAB50:    xsi_set_current_line(78, ng0);

LAB53:    xsi_set_current_line(79, ng0);
    t18 = (t0 + 1368U);
    t26 = *((char **)t18);
    t18 = ((char*)((ng6)));
    xsi_vlogtype_concat(t35, 24, 24, 2U, t18, 8, t26, 16);
    t27 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t27, t35, 0, 0, 24, 0LL);
    goto LAB52;

LAB56:    t15 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB57;

LAB58:    xsi_set_current_line(80, ng0);

LAB61:    xsi_set_current_line(81, ng0);
    t18 = (t0 + 1528U);
    t26 = *((char **)t18);
    t18 = ((char*)((ng8)));
    xsi_vlogtype_concat(t35, 24, 24, 2U, t18, 8, t26, 16);
    t27 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t27, t35, 0, 0, 24, 0LL);
    goto LAB60;

LAB64:    t15 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB65;

LAB66:    xsi_set_current_line(82, ng0);

LAB69:    xsi_set_current_line(83, ng0);
    t18 = (t0 + 1688U);
    t26 = *((char **)t18);
    t18 = ((char*)((ng10)));
    xsi_vlogtype_concat(t35, 24, 24, 2U, t18, 8, t26, 16);
    t27 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t27, t35, 0, 0, 24, 0LL);
    goto LAB68;

LAB72:    t15 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB73;

LAB74:    xsi_set_current_line(84, ng0);

LAB77:    xsi_set_current_line(85, ng0);
    t18 = ((char*)((ng12)));
    t26 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t26, t18, 0, 0, 24, 0LL);
    goto LAB76;

LAB80:    t15 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB81;

LAB82:    xsi_set_current_line(86, ng0);

LAB85:    xsi_set_current_line(87, ng0);
    t18 = ((char*)((ng14)));
    t26 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t26, t18, 0, 0, 24, 0LL);
    goto LAB84;

LAB88:    t15 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB89;

LAB90:    xsi_set_current_line(88, ng0);

LAB93:    xsi_set_current_line(89, ng0);
    t18 = ((char*)((ng16)));
    t26 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t26, t18, 0, 0, 24, 0LL);
    goto LAB92;

LAB96:    t15 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB97;

LAB98:    xsi_set_current_line(93, ng0);

LAB101:    xsi_set_current_line(94, ng0);
    t18 = (t0 + 3848);
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
    t42 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t42, t35, 0, 0, 1, 0LL);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng1)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 8, t5, 8, t11, 8);
    t12 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t12, t16, 0, 0, 8, 0LL);
    goto LAB100;

LAB103:    t15 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB105;

LAB104:    *((unsigned int *)t16) = 1;
    goto LAB105;

LAB107:    xsi_set_current_line(96, ng0);

LAB110:    xsi_set_current_line(97, ng0);
    t18 = (t0 + 2888);
    t26 = (t18 + 56U);
    t27 = *((char **)t26);
    t33 = ((char*)((ng2)));
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
        goto LAB114;

LAB111:    if (t30 != 0)
        goto LAB113;

LAB112:    *((unsigned int *)t35) = 1;

LAB114:    t44 = (t35 + 4);
    t36 = *((unsigned int *)t44);
    t37 = (~(t36));
    t38 = *((unsigned int *)t35);
    t39 = (t38 & t37);
    t40 = (t39 != 0);
    if (t40 > 0)
        goto LAB115;

LAB116:    xsi_set_current_line(100, ng0);

LAB119:    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 3848);
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
    t14 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t14, t16, 0, 0, 1, 0LL);
    xsi_set_current_line(103, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng1)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 8, t5, 8, t11, 8);
    t12 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t12, t16, 0, 0, 8, 0LL);

LAB117:    goto LAB109;

LAB113:    t43 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB114;

LAB115:    xsi_set_current_line(97, ng0);

LAB118:    xsi_set_current_line(98, ng0);
    t45 = ((char*)((ng1)));
    t46 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t46, t45, 0, 0, 1, 0LL);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3848);
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
    t15 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t15, t16, 0, 0, 24, 0LL);
    goto LAB117;

LAB122:    t15 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB123;

LAB124:    xsi_set_current_line(105, ng0);

LAB127:    xsi_set_current_line(106, ng0);
    t18 = ((char*)((ng1)));
    t26 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t26, t18, 0, 0, 1, 0LL);
    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 24, 0LL);
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng1)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 3, t5, 3, t11, 3);
    t12 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t12, t16, 0, 0, 3, 0LL);
    goto LAB126;

LAB130:    t15 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB131;

LAB132:    *((unsigned int *)t35) = 1;
    goto LAB135;

LAB134:    t18 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB135;

LAB136:    t27 = (t0 + 3688);
    t33 = (t27 + 56U);
    t34 = *((char **)t33);
    t42 = ((char*)((ng15)));
    memset(t47, 0, 8);
    t43 = (t34 + 4);
    t44 = (t42 + 4);
    t39 = *((unsigned int *)t34);
    t40 = *((unsigned int *)t42);
    t41 = (t39 ^ t40);
    t48 = *((unsigned int *)t43);
    t49 = *((unsigned int *)t44);
    t50 = (t48 ^ t49);
    t51 = (t41 | t50);
    t52 = *((unsigned int *)t43);
    t53 = *((unsigned int *)t44);
    t54 = (t52 | t53);
    t55 = (~(t54));
    t56 = (t51 & t55);
    if (t56 != 0)
        goto LAB142;

LAB139:    if (t54 != 0)
        goto LAB141;

LAB140:    *((unsigned int *)t47) = 1;

LAB142:    memset(t57, 0, 8);
    t46 = (t47 + 4);
    t58 = *((unsigned int *)t46);
    t59 = (~(t58));
    t60 = *((unsigned int *)t47);
    t61 = (t60 & t59);
    t62 = (t61 & 1U);
    if (t62 != 0)
        goto LAB143;

LAB144:    if (*((unsigned int *)t46) != 0)
        goto LAB145;

LAB146:    t65 = *((unsigned int *)t35);
    t66 = *((unsigned int *)t57);
    t67 = (t65 & t66);
    *((unsigned int *)t64) = t67;
    t68 = (t35 + 4);
    t69 = (t57 + 4);
    t70 = (t64 + 4);
    t71 = *((unsigned int *)t68);
    t72 = *((unsigned int *)t69);
    t73 = (t71 | t72);
    *((unsigned int *)t70) = t73;
    t74 = *((unsigned int *)t70);
    t75 = (t74 != 0);
    if (t75 == 1)
        goto LAB147;

LAB148:
LAB149:    goto LAB138;

LAB141:    t45 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB142;

LAB143:    *((unsigned int *)t57) = 1;
    goto LAB146;

LAB145:    t63 = (t57 + 4);
    *((unsigned int *)t57) = 1;
    *((unsigned int *)t63) = 1;
    goto LAB146;

LAB147:    t76 = *((unsigned int *)t64);
    t77 = *((unsigned int *)t70);
    *((unsigned int *)t64) = (t76 | t77);
    t78 = (t35 + 4);
    t79 = (t57 + 4);
    t80 = *((unsigned int *)t35);
    t81 = (~(t80));
    t82 = *((unsigned int *)t78);
    t83 = (~(t82));
    t84 = *((unsigned int *)t57);
    t85 = (~(t84));
    t86 = *((unsigned int *)t79);
    t87 = (~(t86));
    t13 = (t81 & t83);
    t88 = (t85 & t87);
    t89 = (~(t13));
    t90 = (~(t88));
    t91 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t91 & t89);
    t92 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t92 & t90);
    t93 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t93 & t89);
    t94 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t94 & t90);
    goto LAB149;

LAB150:    xsi_set_current_line(113, ng0);

LAB153:    xsi_set_current_line(114, ng0);
    t101 = ((char*)((ng7)));
    t102 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t102, t101, 0, 0, 2, 0LL);
    goto LAB152;

LAB155:    xsi_set_current_line(120, ng0);

LAB158:    xsi_set_current_line(121, ng0);
    t5 = ((char*)((ng5)));
    t11 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 2, 0LL);
    goto LAB157;

LAB163:    t14 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB164;

LAB165:    xsi_set_current_line(139, ng0);

LAB168:    xsi_set_current_line(140, ng0);
    t17 = ((char*)((ng1)));
    t18 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t18, t17, 0, 0, 1, 0LL);
    goto LAB167;

LAB172:    t12 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB173;

LAB174:    xsi_set_current_line(145, ng0);

LAB177:    xsi_set_current_line(146, ng0);
    t15 = ((char*)((ng1)));
    t17 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t17, t15, 0, 0, 2, 0LL);
    goto LAB176;

}


extern void work_m_00000000002363183618_0816222660_init()
{
	static char *pe[] = {(void *)Always_56_0};
	xsi_register_didat("work_m_00000000002363183618_0816222660", "isim/dragonv5_main_tb_isim_beh.exe.sim/work/m_00000000002363183618_0816222660.didat");
	xsi_register_executes(pe);
}
