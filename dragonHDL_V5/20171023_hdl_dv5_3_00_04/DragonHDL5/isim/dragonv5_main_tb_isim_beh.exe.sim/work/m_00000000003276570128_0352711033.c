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
static const char *ng0 = "C:/Users/CTA_PC/Desktop/Firmware/dragonHDL_V5/20171023_hdl_dv5_3_00_04/SiTCP/TIMER.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {131U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {998U, 0U};
static unsigned int ng5[] = {58U, 0U};



static void Always_53_0(char *t0)
{
    char t14[8];
    char t15[8];
    char t23[8];
    char t24[8];
    char t40[8];
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
    char *t13;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t41;
    char *t42;

LAB0:    t1 = (t0 + 4584U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 6392);
    *((int *)t2) = 1;
    t3 = (t0 + 4616);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(53, ng0);

LAB5:    xsi_set_current_line(54, ng0);
    t4 = (t0 + 1344U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(56, ng0);

LAB10:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 3024);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t15, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t5) != 0)
        goto LAB13;

LAB14:    t12 = (t15 + 4);
    t16 = *((unsigned int *)t15);
    t17 = *((unsigned int *)t12);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB15;

LAB16:    t19 = *((unsigned int *)t15);
    t20 = (~(t19));
    t21 = *((unsigned int *)t12);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t12) > 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t15) > 0)
        goto LAB21;

LAB22:    memcpy(t14, t40, 8);

LAB23:    t41 = (t0 + 3184);
    xsi_vlogvar_wait_assign_value(t41, t14, 0, 0, 8, 0LL);
    t42 = (t0 + 3024);
    xsi_vlogvar_wait_assign_value(t42, t14, 8, 0, 1, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(54, ng0);

LAB9:    xsi_set_current_line(55, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3184);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 8, 0LL);
    t13 = (t0 + 3024);
    xsi_vlogvar_wait_assign_value(t13, t11, 8, 0, 1, 0LL);
    goto LAB8;

LAB11:    *((unsigned int *)t15) = 1;
    goto LAB14;

LAB13:    t11 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB14;

LAB15:    t13 = ((char*)((ng2)));
    goto LAB16;

LAB17:    t25 = (t0 + 3184);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    memset(t24, 0, 8);
    t28 = (t24 + 4);
    t29 = (t27 + 4);
    t30 = *((unsigned int *)t27);
    t31 = (t30 >> 0);
    *((unsigned int *)t24) = t31;
    t32 = *((unsigned int *)t29);
    t33 = (t32 >> 0);
    *((unsigned int *)t28) = t33;
    t34 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t34 & 255U);
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t35 & 255U);
    t36 = (t0 + 3024);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    xsi_vlogtype_concat(t23, 9, 9, 2U, t38, 1, t24, 8);
    t39 = ((char*)((ng3)));
    memset(t40, 0, 8);
    xsi_vlog_unsigned_minus(t40, 9, t23, 9, t39, 9);
    goto LAB18;

LAB19:    xsi_vlog_unsigned_bit_combine(t14, 9, t13, 9, t40, 9);
    goto LAB23;

LAB21:    memcpy(t14, t13, 8);
    goto LAB23;

}

static void Always_67_1(char *t0)
{
    char t13[8];
    char t14[8];
    char t16[8];
    char t41[8];
    char t54[8];
    char t85[8];
    char t98[8];
    char t129[8];
    char t142[8];
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
    char *t15;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t55;
    int t56;
    int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    char *t99;
    int t100;
    int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    char *t119;
    char *t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    char *t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    char *t130;
    char *t131;
    char *t132;
    char *t133;
    char *t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    char *t141;
    char *t143;

LAB0:    t1 = (t0 + 4832U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 6408);
    *((int *)t2) = 1;
    t3 = (t0 + 4864);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(67, ng0);

LAB5:    xsi_set_current_line(68, ng0);
    t4 = (t0 + 1344U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(72, ng0);

LAB10:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 3024);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB11;

LAB12:
LAB13:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 3024);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3344);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    memset(t13, 0, 8);
    t15 = (t13 + 4);
    t17 = (t12 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (t6 >> 10);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t17);
    t10 = (t9 >> 10);
    t19 = (t10 & 1);
    *((unsigned int *)t15) = t19;
    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t13);
    t22 = (t20 & t21);
    *((unsigned int *)t14) = t22;
    t18 = (t4 + 4);
    t25 = (t13 + 4);
    t31 = (t14 + 4);
    t23 = *((unsigned int *)t18);
    t24 = *((unsigned int *)t25);
    t26 = (t23 | t24);
    *((unsigned int *)t31) = t26;
    t27 = *((unsigned int *)t31);
    t28 = (t27 != 0);
    if (t28 == 1)
        goto LAB28;

LAB29:
LAB30:    t42 = (t14 + 4);
    t59 = *((unsigned int *)t42);
    t60 = (~(t59));
    t61 = *((unsigned int *)t14);
    t62 = (t61 & t60);
    t63 = (t62 != 0);
    if (t63 > 0)
        goto LAB31;

LAB32:
LAB33:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 3024);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3344);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    memset(t13, 0, 8);
    t15 = (t13 + 4);
    t17 = (t12 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (t6 >> 10);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t17);
    t10 = (t9 >> 10);
    t19 = (t10 & 1);
    *((unsigned int *)t15) = t19;
    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t13);
    t22 = (t20 & t21);
    *((unsigned int *)t14) = t22;
    t18 = (t4 + 4);
    t25 = (t13 + 4);
    t31 = (t14 + 4);
    t23 = *((unsigned int *)t18);
    t24 = *((unsigned int *)t25);
    t26 = (t23 | t24);
    *((unsigned int *)t31) = t26;
    t27 = *((unsigned int *)t31);
    t28 = (t27 != 0);
    if (t28 == 1)
        goto LAB48;

LAB49:
LAB50:    t42 = (t0 + 3504);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    memset(t16, 0, 8);
    t45 = (t16 + 4);
    t46 = (t44 + 4);
    t59 = *((unsigned int *)t44);
    t60 = (t59 >> 10);
    t61 = (t60 & 1);
    *((unsigned int *)t16) = t61;
    t62 = *((unsigned int *)t46);
    t63 = (t62 >> 10);
    t64 = (t63 & 1);
    *((unsigned int *)t45) = t64;
    t65 = *((unsigned int *)t14);
    t66 = *((unsigned int *)t16);
    t67 = (t65 & t66);
    *((unsigned int *)t41) = t67;
    t53 = (t14 + 4);
    t55 = (t16 + 4);
    t75 = (t41 + 4);
    t68 = *((unsigned int *)t53);
    t69 = *((unsigned int *)t55);
    t70 = (t68 | t69);
    *((unsigned int *)t75) = t70;
    t71 = *((unsigned int *)t75);
    t72 = (t71 != 0);
    if (t72 == 1)
        goto LAB51;

LAB52:
LAB53:    t86 = (t41 + 4);
    t103 = *((unsigned int *)t86);
    t104 = (~(t103));
    t105 = *((unsigned int *)t41);
    t106 = (t105 & t104);
    t107 = (t106 != 0);
    if (t107 > 0)
        goto LAB54;

LAB55:
LAB56:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(68, ng0);

LAB9:    xsi_set_current_line(69, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3344);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 11, 0LL);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3504);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 11, 0LL);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3664);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);
    goto LAB8;

LAB11:    xsi_set_current_line(73, ng0);

LAB14:    xsi_set_current_line(74, ng0);
    t11 = (t0 + 3344);
    t12 = (t11 + 56U);
    t15 = *((char **)t12);
    memset(t16, 0, 8);
    t17 = (t16 + 4);
    t18 = (t15 + 4);
    t19 = *((unsigned int *)t15);
    t20 = (t19 >> 10);
    t21 = (t20 & 1);
    *((unsigned int *)t16) = t21;
    t22 = *((unsigned int *)t18);
    t23 = (t22 >> 10);
    t24 = (t23 & 1);
    *((unsigned int *)t17) = t24;
    memset(t14, 0, 8);
    t25 = (t16 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t16);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t25) != 0)
        goto LAB17;

LAB18:    t32 = (t14 + 4);
    t33 = *((unsigned int *)t14);
    t34 = *((unsigned int *)t32);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB19;

LAB20:    t37 = *((unsigned int *)t14);
    t38 = (~(t37));
    t39 = *((unsigned int *)t32);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t32) > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t14) > 0)
        goto LAB25;

LAB26:    memcpy(t13, t54, 8);

LAB27:    t55 = (t0 + 3344);
    xsi_vlogvar_wait_assign_value(t55, t13, 0, 0, 11, 0LL);
    goto LAB13;

LAB15:    *((unsigned int *)t14) = 1;
    goto LAB18;

LAB17:    t31 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB18;

LAB19:    t36 = ((char*)((ng4)));
    goto LAB20;

LAB21:    t42 = (t0 + 3344);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    memset(t41, 0, 8);
    t45 = (t41 + 4);
    t46 = (t44 + 4);
    t47 = *((unsigned int *)t44);
    t48 = (t47 >> 0);
    *((unsigned int *)t41) = t48;
    t49 = *((unsigned int *)t46);
    t50 = (t49 >> 0);
    *((unsigned int *)t45) = t50;
    t51 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t51 & 2047U);
    t52 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t52 & 2047U);
    t53 = ((char*)((ng3)));
    memset(t54, 0, 8);
    xsi_vlog_unsigned_minus(t54, 11, t41, 11, t53, 11);
    goto LAB22;

LAB23:    xsi_vlog_unsigned_bit_combine(t13, 11, t36, 11, t54, 11);
    goto LAB27;

LAB25:    memcpy(t13, t36, 8);
    goto LAB27;

LAB28:    t29 = *((unsigned int *)t14);
    t30 = *((unsigned int *)t31);
    *((unsigned int *)t14) = (t29 | t30);
    t32 = (t4 + 4);
    t36 = (t13 + 4);
    t33 = *((unsigned int *)t4);
    t34 = (~(t33));
    t35 = *((unsigned int *)t32);
    t37 = (~(t35));
    t38 = *((unsigned int *)t13);
    t39 = (~(t38));
    t40 = *((unsigned int *)t36);
    t47 = (~(t40));
    t56 = (t34 & t37);
    t57 = (t39 & t47);
    t48 = (~(t56));
    t49 = (~(t57));
    t50 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t50 & t48);
    t51 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t51 & t49);
    t52 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t52 & t48);
    t58 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t58 & t49);
    goto LAB30;

LAB31:    xsi_set_current_line(76, ng0);

LAB34:    xsi_set_current_line(77, ng0);
    t43 = (t0 + 3504);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    memset(t54, 0, 8);
    t46 = (t54 + 4);
    t53 = (t45 + 4);
    t64 = *((unsigned int *)t45);
    t65 = (t64 >> 10);
    t66 = (t65 & 1);
    *((unsigned int *)t54) = t66;
    t67 = *((unsigned int *)t53);
    t68 = (t67 >> 10);
    t69 = (t68 & 1);
    *((unsigned int *)t46) = t69;
    memset(t41, 0, 8);
    t55 = (t54 + 4);
    t70 = *((unsigned int *)t55);
    t71 = (~(t70));
    t72 = *((unsigned int *)t54);
    t73 = (t72 & t71);
    t74 = (t73 & 1U);
    if (t74 != 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t55) != 0)
        goto LAB37;

LAB38:    t76 = (t41 + 4);
    t77 = *((unsigned int *)t41);
    t78 = *((unsigned int *)t76);
    t79 = (t77 || t78);
    if (t79 > 0)
        goto LAB39;

LAB40:    t81 = *((unsigned int *)t41);
    t82 = (~(t81));
    t83 = *((unsigned int *)t76);
    t84 = (t82 || t83);
    if (t84 > 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t76) > 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t41) > 0)
        goto LAB45;

LAB46:    memcpy(t16, t98, 8);

LAB47:    t99 = (t0 + 3504);
    xsi_vlogvar_wait_assign_value(t99, t16, 0, 0, 11, 0LL);
    goto LAB33;

LAB35:    *((unsigned int *)t41) = 1;
    goto LAB38;

LAB37:    t75 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t75) = 1;
    goto LAB38;

LAB39:    t80 = ((char*)((ng4)));
    goto LAB40;

LAB41:    t86 = (t0 + 3504);
    t87 = (t86 + 56U);
    t88 = *((char **)t87);
    memset(t85, 0, 8);
    t89 = (t85 + 4);
    t90 = (t88 + 4);
    t91 = *((unsigned int *)t88);
    t92 = (t91 >> 0);
    *((unsigned int *)t85) = t92;
    t93 = *((unsigned int *)t90);
    t94 = (t93 >> 0);
    *((unsigned int *)t89) = t94;
    t95 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t95 & 2047U);
    t96 = *((unsigned int *)t89);
    *((unsigned int *)t89) = (t96 & 2047U);
    t97 = ((char*)((ng3)));
    memset(t98, 0, 8);
    xsi_vlog_unsigned_minus(t98, 11, t85, 11, t97, 11);
    goto LAB42;

LAB43:    xsi_vlog_unsigned_bit_combine(t16, 11, t80, 11, t98, 11);
    goto LAB47;

LAB45:    memcpy(t16, t80, 8);
    goto LAB47;

LAB48:    t29 = *((unsigned int *)t14);
    t30 = *((unsigned int *)t31);
    *((unsigned int *)t14) = (t29 | t30);
    t32 = (t4 + 4);
    t36 = (t13 + 4);
    t33 = *((unsigned int *)t4);
    t34 = (~(t33));
    t35 = *((unsigned int *)t32);
    t37 = (~(t35));
    t38 = *((unsigned int *)t13);
    t39 = (~(t38));
    t40 = *((unsigned int *)t36);
    t47 = (~(t40));
    t56 = (t34 & t37);
    t57 = (t39 & t47);
    t48 = (~(t56));
    t49 = (~(t57));
    t50 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t50 & t48);
    t51 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t51 & t49);
    t52 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t52 & t48);
    t58 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t58 & t49);
    goto LAB50;

LAB51:    t73 = *((unsigned int *)t41);
    t74 = *((unsigned int *)t75);
    *((unsigned int *)t41) = (t73 | t74);
    t76 = (t14 + 4);
    t80 = (t16 + 4);
    t77 = *((unsigned int *)t14);
    t78 = (~(t77));
    t79 = *((unsigned int *)t76);
    t81 = (~(t79));
    t82 = *((unsigned int *)t16);
    t83 = (~(t82));
    t84 = *((unsigned int *)t80);
    t91 = (~(t84));
    t100 = (t78 & t81);
    t101 = (t83 & t91);
    t92 = (~(t100));
    t93 = (~(t101));
    t94 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t94 & t92);
    t95 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t95 & t93);
    t96 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t96 & t92);
    t102 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t102 & t93);
    goto LAB53;

LAB54:    xsi_set_current_line(79, ng0);

LAB57:    xsi_set_current_line(80, ng0);
    t87 = (t0 + 3664);
    t88 = (t87 + 56U);
    t89 = *((char **)t88);
    memset(t98, 0, 8);
    t90 = (t98 + 4);
    t97 = (t89 + 4);
    t108 = *((unsigned int *)t89);
    t109 = (t108 >> 6);
    t110 = (t109 & 1);
    *((unsigned int *)t98) = t110;
    t111 = *((unsigned int *)t97);
    t112 = (t111 >> 6);
    t113 = (t112 & 1);
    *((unsigned int *)t90) = t113;
    memset(t85, 0, 8);
    t99 = (t98 + 4);
    t114 = *((unsigned int *)t99);
    t115 = (~(t114));
    t116 = *((unsigned int *)t98);
    t117 = (t116 & t115);
    t118 = (t117 & 1U);
    if (t118 != 0)
        goto LAB58;

LAB59:    if (*((unsigned int *)t99) != 0)
        goto LAB60;

LAB61:    t120 = (t85 + 4);
    t121 = *((unsigned int *)t85);
    t122 = *((unsigned int *)t120);
    t123 = (t121 || t122);
    if (t123 > 0)
        goto LAB62;

LAB63:    t125 = *((unsigned int *)t85);
    t126 = (~(t125));
    t127 = *((unsigned int *)t120);
    t128 = (t126 || t127);
    if (t128 > 0)
        goto LAB64;

LAB65:    if (*((unsigned int *)t120) > 0)
        goto LAB66;

LAB67:    if (*((unsigned int *)t85) > 0)
        goto LAB68;

LAB69:    memcpy(t54, t142, 8);

LAB70:    t143 = (t0 + 3664);
    xsi_vlogvar_wait_assign_value(t143, t54, 0, 0, 7, 0LL);
    goto LAB56;

LAB58:    *((unsigned int *)t85) = 1;
    goto LAB61;

LAB60:    t119 = (t85 + 4);
    *((unsigned int *)t85) = 1;
    *((unsigned int *)t119) = 1;
    goto LAB61;

LAB62:    t124 = ((char*)((ng5)));
    goto LAB63;

LAB64:    t130 = (t0 + 3664);
    t131 = (t130 + 56U);
    t132 = *((char **)t131);
    memset(t129, 0, 8);
    t133 = (t129 + 4);
    t134 = (t132 + 4);
    t135 = *((unsigned int *)t132);
    t136 = (t135 >> 0);
    *((unsigned int *)t129) = t136;
    t137 = *((unsigned int *)t134);
    t138 = (t137 >> 0);
    *((unsigned int *)t133) = t138;
    t139 = *((unsigned int *)t129);
    *((unsigned int *)t129) = (t139 & 127U);
    t140 = *((unsigned int *)t133);
    *((unsigned int *)t133) = (t140 & 127U);
    t141 = ((char*)((ng3)));
    memset(t142, 0, 8);
    xsi_vlog_unsigned_minus(t142, 7, t129, 7, t141, 7);
    goto LAB65;

LAB66:    xsi_vlog_unsigned_bit_combine(t54, 7, t124, 7, t142, 7);
    goto LAB70;

LAB68:    memcpy(t54, t124, 8);
    goto LAB70;

}

static void Always_85_2(char *t0)
{
    char t8[8];
    char t17[8];
    char t52[8];
    char t61[8];
    char t96[8];
    char t105[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    int t41;
    int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    char *t51;
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    int t85;
    int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    char *t94;
    char *t95;
    char *t97;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    char *t109;
    char *t110;
    char *t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    char *t119;
    char *t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    int t129;
    int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    char *t137;

LAB0:    t1 = (t0 + 5080U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 6424);
    *((int *)t2) = 1;
    t3 = (t0 + 5112);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(85, ng0);

LAB5:    xsi_set_current_line(86, ng0);
    t4 = (t0 + 3024);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 2384);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 1, 0LL);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 3024);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3344);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    t9 = (t8 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 10);
    t13 = (t12 & 1);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 >> 10);
    t16 = (t15 & 1);
    *((unsigned int *)t9) = t16;
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t8);
    t20 = (t18 & t19);
    *((unsigned int *)t17) = t20;
    t21 = (t4 + 4);
    t22 = (t8 + 4);
    t23 = (t17 + 4);
    t24 = *((unsigned int *)t21);
    t25 = *((unsigned int *)t22);
    t26 = (t24 | t25);
    *((unsigned int *)t23) = t26;
    t27 = *((unsigned int *)t23);
    t28 = (t27 != 0);
    if (t28 == 1)
        goto LAB6;

LAB7:
LAB8:    t49 = (t0 + 2544);
    xsi_vlogvar_wait_assign_value(t49, t17, 0, 0, 1, 0LL);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 3024);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3344);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    t9 = (t8 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 10);
    t13 = (t12 & 1);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 >> 10);
    t16 = (t15 & 1);
    *((unsigned int *)t9) = t16;
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t8);
    t20 = (t18 & t19);
    *((unsigned int *)t17) = t20;
    t21 = (t4 + 4);
    t22 = (t8 + 4);
    t23 = (t17 + 4);
    t24 = *((unsigned int *)t21);
    t25 = *((unsigned int *)t22);
    t26 = (t24 | t25);
    *((unsigned int *)t23) = t26;
    t27 = *((unsigned int *)t23);
    t28 = (t27 != 0);
    if (t28 == 1)
        goto LAB9;

LAB10:
LAB11:    t49 = (t0 + 3504);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    memset(t52, 0, 8);
    t53 = (t52 + 4);
    t54 = (t51 + 4);
    t55 = *((unsigned int *)t51);
    t56 = (t55 >> 10);
    t57 = (t56 & 1);
    *((unsigned int *)t52) = t57;
    t58 = *((unsigned int *)t54);
    t59 = (t58 >> 10);
    t60 = (t59 & 1);
    *((unsigned int *)t53) = t60;
    t62 = *((unsigned int *)t17);
    t63 = *((unsigned int *)t52);
    t64 = (t62 & t63);
    *((unsigned int *)t61) = t64;
    t65 = (t17 + 4);
    t66 = (t52 + 4);
    t67 = (t61 + 4);
    t68 = *((unsigned int *)t65);
    t69 = *((unsigned int *)t66);
    t70 = (t68 | t69);
    *((unsigned int *)t67) = t70;
    t71 = *((unsigned int *)t67);
    t72 = (t71 != 0);
    if (t72 == 1)
        goto LAB12;

LAB13:
LAB14:    t93 = (t0 + 2704);
    xsi_vlogvar_wait_assign_value(t93, t61, 0, 0, 1, 0LL);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 3024);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3344);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    t9 = (t8 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 10);
    t13 = (t12 & 1);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 >> 10);
    t16 = (t15 & 1);
    *((unsigned int *)t9) = t16;
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t8);
    t20 = (t18 & t19);
    *((unsigned int *)t17) = t20;
    t21 = (t4 + 4);
    t22 = (t8 + 4);
    t23 = (t17 + 4);
    t24 = *((unsigned int *)t21);
    t25 = *((unsigned int *)t22);
    t26 = (t24 | t25);
    *((unsigned int *)t23) = t26;
    t27 = *((unsigned int *)t23);
    t28 = (t27 != 0);
    if (t28 == 1)
        goto LAB15;

LAB16:
LAB17:    t49 = (t0 + 3504);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    memset(t52, 0, 8);
    t53 = (t52 + 4);
    t54 = (t51 + 4);
    t55 = *((unsigned int *)t51);
    t56 = (t55 >> 10);
    t57 = (t56 & 1);
    *((unsigned int *)t52) = t57;
    t58 = *((unsigned int *)t54);
    t59 = (t58 >> 10);
    t60 = (t59 & 1);
    *((unsigned int *)t53) = t60;
    t62 = *((unsigned int *)t17);
    t63 = *((unsigned int *)t52);
    t64 = (t62 & t63);
    *((unsigned int *)t61) = t64;
    t65 = (t17 + 4);
    t66 = (t52 + 4);
    t67 = (t61 + 4);
    t68 = *((unsigned int *)t65);
    t69 = *((unsigned int *)t66);
    t70 = (t68 | t69);
    *((unsigned int *)t67) = t70;
    t71 = *((unsigned int *)t67);
    t72 = (t71 != 0);
    if (t72 == 1)
        goto LAB18;

LAB19:
LAB20:    t93 = (t0 + 3664);
    t94 = (t93 + 56U);
    t95 = *((char **)t94);
    memset(t96, 0, 8);
    t97 = (t96 + 4);
    t98 = (t95 + 4);
    t99 = *((unsigned int *)t95);
    t100 = (t99 >> 6);
    t101 = (t100 & 1);
    *((unsigned int *)t96) = t101;
    t102 = *((unsigned int *)t98);
    t103 = (t102 >> 6);
    t104 = (t103 & 1);
    *((unsigned int *)t97) = t104;
    t106 = *((unsigned int *)t61);
    t107 = *((unsigned int *)t96);
    t108 = (t106 & t107);
    *((unsigned int *)t105) = t108;
    t109 = (t61 + 4);
    t110 = (t96 + 4);
    t111 = (t105 + 4);
    t112 = *((unsigned int *)t109);
    t113 = *((unsigned int *)t110);
    t114 = (t112 | t113);
    *((unsigned int *)t111) = t114;
    t115 = *((unsigned int *)t111);
    t116 = (t115 != 0);
    if (t116 == 1)
        goto LAB21;

LAB22:
LAB23:    t137 = (t0 + 2864);
    xsi_vlogvar_wait_assign_value(t137, t105, 0, 0, 1, 0LL);
    goto LAB2;

LAB6:    t29 = *((unsigned int *)t17);
    t30 = *((unsigned int *)t23);
    *((unsigned int *)t17) = (t29 | t30);
    t31 = (t4 + 4);
    t32 = (t8 + 4);
    t33 = *((unsigned int *)t4);
    t34 = (~(t33));
    t35 = *((unsigned int *)t31);
    t36 = (~(t35));
    t37 = *((unsigned int *)t8);
    t38 = (~(t37));
    t39 = *((unsigned int *)t32);
    t40 = (~(t39));
    t41 = (t34 & t36);
    t42 = (t38 & t40);
    t43 = (~(t41));
    t44 = (~(t42));
    t45 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t45 & t43);
    t46 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t46 & t44);
    t47 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t47 & t43);
    t48 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t48 & t44);
    goto LAB8;

LAB9:    t29 = *((unsigned int *)t17);
    t30 = *((unsigned int *)t23);
    *((unsigned int *)t17) = (t29 | t30);
    t31 = (t4 + 4);
    t32 = (t8 + 4);
    t33 = *((unsigned int *)t4);
    t34 = (~(t33));
    t35 = *((unsigned int *)t31);
    t36 = (~(t35));
    t37 = *((unsigned int *)t8);
    t38 = (~(t37));
    t39 = *((unsigned int *)t32);
    t40 = (~(t39));
    t41 = (t34 & t36);
    t42 = (t38 & t40);
    t43 = (~(t41));
    t44 = (~(t42));
    t45 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t45 & t43);
    t46 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t46 & t44);
    t47 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t47 & t43);
    t48 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t48 & t44);
    goto LAB11;

LAB12:    t73 = *((unsigned int *)t61);
    t74 = *((unsigned int *)t67);
    *((unsigned int *)t61) = (t73 | t74);
    t75 = (t17 + 4);
    t76 = (t52 + 4);
    t77 = *((unsigned int *)t17);
    t78 = (~(t77));
    t79 = *((unsigned int *)t75);
    t80 = (~(t79));
    t81 = *((unsigned int *)t52);
    t82 = (~(t81));
    t83 = *((unsigned int *)t76);
    t84 = (~(t83));
    t85 = (t78 & t80);
    t86 = (t82 & t84);
    t87 = (~(t85));
    t88 = (~(t86));
    t89 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t89 & t87);
    t90 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t90 & t88);
    t91 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t91 & t87);
    t92 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t92 & t88);
    goto LAB14;

LAB15:    t29 = *((unsigned int *)t17);
    t30 = *((unsigned int *)t23);
    *((unsigned int *)t17) = (t29 | t30);
    t31 = (t4 + 4);
    t32 = (t8 + 4);
    t33 = *((unsigned int *)t4);
    t34 = (~(t33));
    t35 = *((unsigned int *)t31);
    t36 = (~(t35));
    t37 = *((unsigned int *)t8);
    t38 = (~(t37));
    t39 = *((unsigned int *)t32);
    t40 = (~(t39));
    t41 = (t34 & t36);
    t42 = (t38 & t40);
    t43 = (~(t41));
    t44 = (~(t42));
    t45 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t45 & t43);
    t46 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t46 & t44);
    t47 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t47 & t43);
    t48 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t48 & t44);
    goto LAB17;

LAB18:    t73 = *((unsigned int *)t61);
    t74 = *((unsigned int *)t67);
    *((unsigned int *)t61) = (t73 | t74);
    t75 = (t17 + 4);
    t76 = (t52 + 4);
    t77 = *((unsigned int *)t17);
    t78 = (~(t77));
    t79 = *((unsigned int *)t75);
    t80 = (~(t79));
    t81 = *((unsigned int *)t52);
    t82 = (~(t81));
    t83 = *((unsigned int *)t76);
    t84 = (~(t83));
    t85 = (t78 & t80);
    t86 = (t82 & t84);
    t87 = (~(t85));
    t88 = (~(t86));
    t89 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t89 & t87);
    t90 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t90 & t88);
    t91 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t91 & t87);
    t92 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t92 & t88);
    goto LAB20;

LAB21:    t117 = *((unsigned int *)t105);
    t118 = *((unsigned int *)t111);
    *((unsigned int *)t105) = (t117 | t118);
    t119 = (t61 + 4);
    t120 = (t96 + 4);
    t121 = *((unsigned int *)t61);
    t122 = (~(t121));
    t123 = *((unsigned int *)t119);
    t124 = (~(t123));
    t125 = *((unsigned int *)t96);
    t126 = (~(t125));
    t127 = *((unsigned int *)t120);
    t128 = (~(t127));
    t129 = (t122 & t124);
    t130 = (t126 & t128);
    t131 = (~(t129));
    t132 = (~(t130));
    t133 = *((unsigned int *)t111);
    *((unsigned int *)t111) = (t133 & t131);
    t134 = *((unsigned int *)t111);
    *((unsigned int *)t111) = (t134 & t132);
    t135 = *((unsigned int *)t105);
    *((unsigned int *)t105) = (t135 & t131);
    t136 = *((unsigned int *)t105);
    *((unsigned int *)t105) = (t136 & t132);
    goto LAB23;

}

static void Cont_92_3(char *t0)
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

LAB0:    t1 = (t0 + 5328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 2384);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6568);
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
    t18 = (t0 + 6440);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_93_4(char *t0)
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

LAB0:    t1 = (t0 + 5576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 2544);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6632);
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
    t18 = (t0 + 6456);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_94_5(char *t0)
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

LAB0:    t1 = (t0 + 5824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 2704);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6696);
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
    t18 = (t0 + 6472);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_95_6(char *t0)
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

LAB0:    t1 = (t0 + 6072U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 2864);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6760);
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
    t18 = (t0 + 6488);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000003276570128_0352711033_init()
{
	static char *pe[] = {(void *)Always_53_0,(void *)Always_67_1,(void *)Always_85_2,(void *)Cont_92_3,(void *)Cont_93_4,(void *)Cont_94_5,(void *)Cont_95_6};
	xsi_register_didat("work_m_00000000003276570128_0352711033", "isim/dragonv5_main_tb_isim_beh.exe.sim/work/m_00000000003276570128_0352711033.didat");
	xsi_register_executes(pe);
}
