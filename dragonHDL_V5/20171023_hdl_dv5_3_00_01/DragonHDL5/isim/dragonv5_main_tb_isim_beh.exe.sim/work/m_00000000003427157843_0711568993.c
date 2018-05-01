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
static const char *ng0 = "C:/Users/CTA_PC/Desktop/Firmware/dragonHDL_V5/20171023_hdl_dv5_3_00_01/SiTCP/WRAP_SiTCP_GMII_XC6S_16K.V";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};



static void Cont_171_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t5[8];
    char t23[8];
    char t34[8];
    char t50[8];
    char t89[8];
    char t103[8];
    char *t1;
    char *t2;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t90;
    char *t91;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t104;
    char *t105;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    char *t113;
    char *t114;
    char *t115;
    char *t116;
    char *t117;
    unsigned int t118;
    unsigned int t119;
    char *t120;
    unsigned int t121;
    unsigned int t122;
    char *t123;
    unsigned int t124;
    unsigned int t125;
    char *t126;

LAB0:    t1 = (t0 + 12104U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(171, ng0);
    t2 = (t0 + 1504U);
    t6 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t6 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t2) == 0)
        goto LAB4;

LAB6:    t12 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t12) = 1;

LAB7:    t13 = (t5 + 4);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    *((unsigned int *)t5) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB9;

LAB8:    t21 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t24 = (t0 + 1824U);
    t25 = *((char **)t24);
    memset(t23, 0, 8);
    t24 = (t23 + 4);
    t26 = (t25 + 4);
    t27 = *((unsigned int *)t25);
    t28 = (t27 >> 0);
    *((unsigned int *)t23) = t28;
    t29 = *((unsigned int *)t26);
    t30 = (t29 >> 0);
    *((unsigned int *)t24) = t30;
    t31 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t31 & 65535U);
    t32 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t32 & 65535U);
    t33 = ((char*)((ng1)));
    memset(t34, 0, 8);
    t35 = (t23 + 4);
    t36 = (t33 + 4);
    t37 = *((unsigned int *)t23);
    t38 = *((unsigned int *)t33);
    t39 = (t37 ^ t38);
    t40 = *((unsigned int *)t35);
    t41 = *((unsigned int *)t36);
    t42 = (t40 ^ t41);
    t43 = (t39 | t42);
    t44 = *((unsigned int *)t35);
    t45 = *((unsigned int *)t36);
    t46 = (t44 | t45);
    t47 = (~(t46));
    t48 = (t43 & t47);
    if (t48 != 0)
        goto LAB13;

LAB10:    if (t46 != 0)
        goto LAB12;

LAB11:    *((unsigned int *)t34) = 1;

LAB13:    t51 = *((unsigned int *)t5);
    t52 = *((unsigned int *)t34);
    t53 = (t51 | t52);
    *((unsigned int *)t50) = t53;
    t54 = (t5 + 4);
    t55 = (t34 + 4);
    t56 = (t50 + 4);
    t57 = *((unsigned int *)t54);
    t58 = *((unsigned int *)t55);
    t59 = (t57 | t58);
    *((unsigned int *)t56) = t59;
    t60 = *((unsigned int *)t56);
    t61 = (t60 != 0);
    if (t61 == 1)
        goto LAB14;

LAB15:
LAB16:    memset(t4, 0, 8);
    t78 = (t50 + 4);
    t79 = *((unsigned int *)t78);
    t80 = (~(t79));
    t81 = *((unsigned int *)t50);
    t82 = (t81 & t80);
    t83 = (t82 & 1U);
    if (t83 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t78) != 0)
        goto LAB19;

LAB20:    t85 = (t4 + 4);
    t86 = *((unsigned int *)t4);
    t87 = *((unsigned int *)t85);
    t88 = (t86 || t87);
    if (t88 > 0)
        goto LAB21;

LAB22:    t99 = *((unsigned int *)t4);
    t100 = (~(t99));
    t101 = *((unsigned int *)t85);
    t102 = (t100 || t101);
    if (t102 > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t85) > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t4) > 0)
        goto LAB27;

LAB28:    memcpy(t3, t103, 8);

LAB29:    t113 = (t0 + 13528);
    t114 = (t113 + 56U);
    t115 = *((char **)t114);
    t116 = (t115 + 56U);
    t117 = *((char **)t116);
    memset(t117, 0, 8);
    t118 = 65535U;
    t119 = t118;
    t120 = (t3 + 4);
    t121 = *((unsigned int *)t3);
    t118 = (t118 & t121);
    t122 = *((unsigned int *)t120);
    t119 = (t119 & t122);
    t123 = (t117 + 4);
    t124 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t124 | t118);
    t125 = *((unsigned int *)t123);
    *((unsigned int *)t123) = (t125 | t119);
    xsi_driver_vfirst_trans(t113, 0, 15);
    t126 = (t0 + 13416);
    *((int *)t126) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t5) = 1;
    goto LAB7;

LAB9:    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t5) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB8;

LAB12:    t49 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB13;

LAB14:    t62 = *((unsigned int *)t50);
    t63 = *((unsigned int *)t56);
    *((unsigned int *)t50) = (t62 | t63);
    t64 = (t5 + 4);
    t65 = (t34 + 4);
    t66 = *((unsigned int *)t64);
    t67 = (~(t66));
    t68 = *((unsigned int *)t5);
    t69 = (t68 & t67);
    t70 = *((unsigned int *)t65);
    t71 = (~(t70));
    t72 = *((unsigned int *)t34);
    t73 = (t72 & t71);
    t74 = (~(t69));
    t75 = (~(t73));
    t76 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t76 & t74);
    t77 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t77 & t75);
    goto LAB16;

LAB17:    *((unsigned int *)t4) = 1;
    goto LAB20;

LAB19:    t84 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t84) = 1;
    goto LAB20;

LAB21:    t90 = (t0 + 10144U);
    t91 = *((char **)t90);
    memset(t89, 0, 8);
    t90 = (t89 + 4);
    t92 = (t91 + 4);
    t93 = *((unsigned int *)t91);
    t94 = (t93 >> 0);
    *((unsigned int *)t89) = t94;
    t95 = *((unsigned int *)t92);
    t96 = (t95 >> 0);
    *((unsigned int *)t90) = t96;
    t97 = *((unsigned int *)t89);
    *((unsigned int *)t89) = (t97 & 65535U);
    t98 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t98 & 65535U);
    goto LAB22;

LAB23:    t104 = (t0 + 1824U);
    t105 = *((char **)t104);
    memset(t103, 0, 8);
    t104 = (t103 + 4);
    t106 = (t105 + 4);
    t107 = *((unsigned int *)t105);
    t108 = (t107 >> 0);
    *((unsigned int *)t103) = t108;
    t109 = *((unsigned int *)t106);
    t110 = (t109 >> 0);
    *((unsigned int *)t104) = t110;
    t111 = *((unsigned int *)t103);
    *((unsigned int *)t103) = (t111 & 65535U);
    t112 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t112 & 65535U);
    goto LAB24;

LAB25:    xsi_vlog_unsigned_bit_combine(t3, 16, t89, 16, t103, 16);
    goto LAB29;

LAB27:    memcpy(t3, t89, 8);
    goto LAB29;

}

static void Cont_172_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t5[8];
    char t23[8];
    char t34[8];
    char t50[8];
    char t89[8];
    char t103[8];
    char *t1;
    char *t2;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t90;
    char *t91;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t104;
    char *t105;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    char *t113;
    char *t114;
    char *t115;
    char *t116;
    char *t117;
    unsigned int t118;
    unsigned int t119;
    char *t120;
    unsigned int t121;
    unsigned int t122;
    char *t123;
    unsigned int t124;
    unsigned int t125;
    char *t126;

LAB0:    t1 = (t0 + 12352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(172, ng0);
    t2 = (t0 + 1504U);
    t6 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t6 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t2) == 0)
        goto LAB4;

LAB6:    t12 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t12) = 1;

LAB7:    t13 = (t5 + 4);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    *((unsigned int *)t5) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB9;

LAB8:    t21 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t24 = (t0 + 1984U);
    t25 = *((char **)t24);
    memset(t23, 0, 8);
    t24 = (t23 + 4);
    t26 = (t25 + 4);
    t27 = *((unsigned int *)t25);
    t28 = (t27 >> 0);
    *((unsigned int *)t23) = t28;
    t29 = *((unsigned int *)t26);
    t30 = (t29 >> 0);
    *((unsigned int *)t24) = t30;
    t31 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t31 & 65535U);
    t32 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t32 & 65535U);
    t33 = ((char*)((ng1)));
    memset(t34, 0, 8);
    t35 = (t23 + 4);
    t36 = (t33 + 4);
    t37 = *((unsigned int *)t23);
    t38 = *((unsigned int *)t33);
    t39 = (t37 ^ t38);
    t40 = *((unsigned int *)t35);
    t41 = *((unsigned int *)t36);
    t42 = (t40 ^ t41);
    t43 = (t39 | t42);
    t44 = *((unsigned int *)t35);
    t45 = *((unsigned int *)t36);
    t46 = (t44 | t45);
    t47 = (~(t46));
    t48 = (t43 & t47);
    if (t48 != 0)
        goto LAB13;

LAB10:    if (t46 != 0)
        goto LAB12;

LAB11:    *((unsigned int *)t34) = 1;

LAB13:    t51 = *((unsigned int *)t5);
    t52 = *((unsigned int *)t34);
    t53 = (t51 | t52);
    *((unsigned int *)t50) = t53;
    t54 = (t5 + 4);
    t55 = (t34 + 4);
    t56 = (t50 + 4);
    t57 = *((unsigned int *)t54);
    t58 = *((unsigned int *)t55);
    t59 = (t57 | t58);
    *((unsigned int *)t56) = t59;
    t60 = *((unsigned int *)t56);
    t61 = (t60 != 0);
    if (t61 == 1)
        goto LAB14;

LAB15:
LAB16:    memset(t4, 0, 8);
    t78 = (t50 + 4);
    t79 = *((unsigned int *)t78);
    t80 = (~(t79));
    t81 = *((unsigned int *)t50);
    t82 = (t81 & t80);
    t83 = (t82 & 1U);
    if (t83 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t78) != 0)
        goto LAB19;

LAB20:    t85 = (t4 + 4);
    t86 = *((unsigned int *)t4);
    t87 = *((unsigned int *)t85);
    t88 = (t86 || t87);
    if (t88 > 0)
        goto LAB21;

LAB22:    t99 = *((unsigned int *)t4);
    t100 = (~(t99));
    t101 = *((unsigned int *)t85);
    t102 = (t100 || t101);
    if (t102 > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t85) > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t4) > 0)
        goto LAB27;

LAB28:    memcpy(t3, t103, 8);

LAB29:    t113 = (t0 + 13592);
    t114 = (t113 + 56U);
    t115 = *((char **)t114);
    t116 = (t115 + 56U);
    t117 = *((char **)t116);
    memset(t117, 0, 8);
    t118 = 65535U;
    t119 = t118;
    t120 = (t3 + 4);
    t121 = *((unsigned int *)t3);
    t118 = (t118 & t121);
    t122 = *((unsigned int *)t120);
    t119 = (t119 & t122);
    t123 = (t117 + 4);
    t124 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t124 | t118);
    t125 = *((unsigned int *)t123);
    *((unsigned int *)t123) = (t125 | t119);
    xsi_driver_vfirst_trans(t113, 0, 15);
    t126 = (t0 + 13432);
    *((int *)t126) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t5) = 1;
    goto LAB7;

LAB9:    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t5) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB8;

LAB12:    t49 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB13;

LAB14:    t62 = *((unsigned int *)t50);
    t63 = *((unsigned int *)t56);
    *((unsigned int *)t50) = (t62 | t63);
    t64 = (t5 + 4);
    t65 = (t34 + 4);
    t66 = *((unsigned int *)t64);
    t67 = (~(t66));
    t68 = *((unsigned int *)t5);
    t69 = (t68 & t67);
    t70 = *((unsigned int *)t65);
    t71 = (~(t70));
    t72 = *((unsigned int *)t34);
    t73 = (t72 & t71);
    t74 = (~(t69));
    t75 = (~(t73));
    t76 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t76 & t74);
    t77 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t77 & t75);
    goto LAB16;

LAB17:    *((unsigned int *)t4) = 1;
    goto LAB20;

LAB19:    t84 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t84) = 1;
    goto LAB20;

LAB21:    t90 = (t0 + 10464U);
    t91 = *((char **)t90);
    memset(t89, 0, 8);
    t90 = (t89 + 4);
    t92 = (t91 + 4);
    t93 = *((unsigned int *)t91);
    t94 = (t93 >> 0);
    *((unsigned int *)t89) = t94;
    t95 = *((unsigned int *)t92);
    t96 = (t95 >> 0);
    *((unsigned int *)t90) = t96;
    t97 = *((unsigned int *)t89);
    *((unsigned int *)t89) = (t97 & 65535U);
    t98 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t98 & 65535U);
    goto LAB22;

LAB23:    t104 = (t0 + 1984U);
    t105 = *((char **)t104);
    memset(t103, 0, 8);
    t104 = (t103 + 4);
    t106 = (t105 + 4);
    t107 = *((unsigned int *)t105);
    t108 = (t107 >> 0);
    *((unsigned int *)t103) = t108;
    t109 = *((unsigned int *)t106);
    t110 = (t109 >> 0);
    *((unsigned int *)t104) = t110;
    t111 = *((unsigned int *)t103);
    *((unsigned int *)t103) = (t111 & 65535U);
    t112 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t112 & 65535U);
    goto LAB24;

LAB25:    xsi_vlog_unsigned_bit_combine(t3, 16, t89, 16, t103, 16);
    goto LAB29;

LAB27:    memcpy(t3, t89, 8);
    goto LAB29;

}

static void Cont_173_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t5[8];
    char t23[8];
    char t34[8];
    char t50[8];
    char t89[8];
    char t103[8];
    char *t1;
    char *t2;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t90;
    char *t91;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t104;
    char *t105;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    char *t113;
    char *t114;
    char *t115;
    char *t116;
    char *t117;
    char *t118;

LAB0:    t1 = (t0 + 12600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(173, ng0);
    t2 = (t0 + 1504U);
    t6 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t6 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t2) == 0)
        goto LAB4;

LAB6:    t12 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t12) = 1;

LAB7:    t13 = (t5 + 4);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    *((unsigned int *)t5) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB9;

LAB8:    t21 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t24 = (t0 + 1664U);
    t25 = *((char **)t24);
    memset(t23, 0, 8);
    t24 = (t23 + 4);
    t26 = (t25 + 4);
    t27 = *((unsigned int *)t25);
    t28 = (t27 >> 0);
    *((unsigned int *)t23) = t28;
    t29 = *((unsigned int *)t26);
    t30 = (t29 >> 0);
    *((unsigned int *)t24) = t30;
    t31 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t31 & 4294967295U);
    t32 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t32 & 4294967295U);
    t33 = ((char*)((ng1)));
    memset(t34, 0, 8);
    t35 = (t23 + 4);
    t36 = (t33 + 4);
    t37 = *((unsigned int *)t23);
    t38 = *((unsigned int *)t33);
    t39 = (t37 ^ t38);
    t40 = *((unsigned int *)t35);
    t41 = *((unsigned int *)t36);
    t42 = (t40 ^ t41);
    t43 = (t39 | t42);
    t44 = *((unsigned int *)t35);
    t45 = *((unsigned int *)t36);
    t46 = (t44 | t45);
    t47 = (~(t46));
    t48 = (t43 & t47);
    if (t48 != 0)
        goto LAB13;

LAB10:    if (t46 != 0)
        goto LAB12;

LAB11:    *((unsigned int *)t34) = 1;

LAB13:    t51 = *((unsigned int *)t5);
    t52 = *((unsigned int *)t34);
    t53 = (t51 | t52);
    *((unsigned int *)t50) = t53;
    t54 = (t5 + 4);
    t55 = (t34 + 4);
    t56 = (t50 + 4);
    t57 = *((unsigned int *)t54);
    t58 = *((unsigned int *)t55);
    t59 = (t57 | t58);
    *((unsigned int *)t56) = t59;
    t60 = *((unsigned int *)t56);
    t61 = (t60 != 0);
    if (t61 == 1)
        goto LAB14;

LAB15:
LAB16:    memset(t4, 0, 8);
    t78 = (t50 + 4);
    t79 = *((unsigned int *)t78);
    t80 = (~(t79));
    t81 = *((unsigned int *)t50);
    t82 = (t81 & t80);
    t83 = (t82 & 1U);
    if (t83 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t78) != 0)
        goto LAB19;

LAB20:    t85 = (t4 + 4);
    t86 = *((unsigned int *)t4);
    t87 = *((unsigned int *)t85);
    t88 = (t86 || t87);
    if (t88 > 0)
        goto LAB21;

LAB22:    t99 = *((unsigned int *)t4);
    t100 = (~(t99));
    t101 = *((unsigned int *)t85);
    t102 = (t100 || t101);
    if (t102 > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t85) > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t4) > 0)
        goto LAB27;

LAB28:    memcpy(t3, t103, 8);

LAB29:    t113 = (t0 + 13656);
    t114 = (t113 + 56U);
    t115 = *((char **)t114);
    t116 = (t115 + 56U);
    t117 = *((char **)t116);
    memcpy(t117, t3, 8);
    xsi_driver_vfirst_trans(t113, 0, 31);
    t118 = (t0 + 13448);
    *((int *)t118) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t5) = 1;
    goto LAB7;

LAB9:    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t5) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB8;

LAB12:    t49 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB13;

LAB14:    t62 = *((unsigned int *)t50);
    t63 = *((unsigned int *)t56);
    *((unsigned int *)t50) = (t62 | t63);
    t64 = (t5 + 4);
    t65 = (t34 + 4);
    t66 = *((unsigned int *)t64);
    t67 = (~(t66));
    t68 = *((unsigned int *)t5);
    t69 = (t68 & t67);
    t70 = *((unsigned int *)t65);
    t71 = (~(t70));
    t72 = *((unsigned int *)t34);
    t73 = (t72 & t71);
    t74 = (~(t69));
    t75 = (~(t73));
    t76 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t76 & t74);
    t77 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t77 & t75);
    goto LAB16;

LAB17:    *((unsigned int *)t4) = 1;
    goto LAB20;

LAB19:    t84 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t84) = 1;
    goto LAB20;

LAB21:    t90 = (t0 + 9824U);
    t91 = *((char **)t90);
    memset(t89, 0, 8);
    t90 = (t89 + 4);
    t92 = (t91 + 4);
    t93 = *((unsigned int *)t91);
    t94 = (t93 >> 0);
    *((unsigned int *)t89) = t94;
    t95 = *((unsigned int *)t92);
    t96 = (t95 >> 0);
    *((unsigned int *)t90) = t96;
    t97 = *((unsigned int *)t89);
    *((unsigned int *)t89) = (t97 & 4294967295U);
    t98 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t98 & 4294967295U);
    goto LAB22;

LAB23:    t104 = (t0 + 1664U);
    t105 = *((char **)t104);
    memset(t103, 0, 8);
    t104 = (t103 + 4);
    t106 = (t105 + 4);
    t107 = *((unsigned int *)t105);
    t108 = (t107 >> 0);
    *((unsigned int *)t103) = t108;
    t109 = *((unsigned int *)t106);
    t110 = (t109 >> 0);
    *((unsigned int *)t104) = t110;
    t111 = *((unsigned int *)t103);
    *((unsigned int *)t103) = (t111 & 4294967295U);
    t112 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t112 & 4294967295U);
    goto LAB24;

LAB25:    xsi_vlog_unsigned_bit_combine(t3, 32, t89, 32, t103, 32);
    goto LAB29;

LAB27:    memcpy(t3, t89, 8);
    goto LAB29;

}

static void implSig1_execute(char *t0)
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

LAB0:    t1 = (t0 + 12848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng2)));
    t3 = (t0 + 13720);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}

static void implSig2_execute(char *t0)
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

LAB0:    t1 = (t0 + 13096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng1)));
    t3 = (t0 + 13784);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 65535U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 15);

LAB1:    return;
}


extern void work_m_00000000003427157843_0711568993_init()
{
	static char *pe[] = {(void *)Cont_171_0,(void *)Cont_172_1,(void *)Cont_173_2,(void *)implSig1_execute,(void *)implSig2_execute};
	xsi_register_didat("work_m_00000000003427157843_0711568993", "isim/dragonv5_main_tb_isim_beh.exe.sim/work/m_00000000003427157843_0711568993.didat");
	xsi_register_executes(pe);
}
