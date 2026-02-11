
void factor_insert_multiplicity(long param_1,ulong param_2,char param_3)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  ulong *puVar6;
  char *pcVar7;
  
  bVar1 = *(byte *)(param_1 + 0xfa);
  puVar6 = (ulong *)(param_1 + 0x10);
  pcVar7 = (char *)(param_1 + 0xe0);
  if (bVar1 != 0) {
    uVar2 = (ulong)(int)(bVar1 - 1);
    uVar3 = uVar2;
    do {
      if (*(ulong *)(param_1 + 0x10 + uVar3 * 8) <= param_2) {
        if (puVar6[uVar3] == param_2) {
          pcVar7[uVar3] = pcVar7[uVar3] + param_3;
          return;
        }
        iVar4 = (int)uVar3 + 1;
        uVar5 = uVar3 & 0xffffffff;
        puVar6 = puVar6 + iVar4;
        pcVar7 = pcVar7 + iVar4;
        if ((int)(bVar1 - 1) <= (int)uVar3) goto LAB_00100081;
        break;
      }
      uVar3 = uVar3 - 1;
      uVar5 = uVar3 & 0xffffffff;
    } while ((int)uVar3 != -1);
    do {
      *(undefined8 *)(param_1 + 0x18 + uVar2 * 8) = *(undefined8 *)(param_1 + 0x10 + uVar2 * 8);
      *(undefined1 *)(param_1 + 0xe1 + uVar2) = *(undefined1 *)(param_1 + 0xe0 + uVar2);
      uVar2 = uVar2 - 1;
    } while ((int)uVar5 < (int)uVar2);
  }
LAB_00100081:
  *puVar6 = param_2;
  *pcVar7 = param_3;
  *(byte *)(param_1 + 0xfa) = bVar1 + 1;
  return;
}



ulong millerrabin(ulong param_1,long param_2,ulong param_3,ulong param_4,int param_5,ulong param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  int iVar18;
  
  uVar13 = param_3;
  if (((param_4 & 1) != 0) || (uVar17 = 1, uVar13 = param_6, param_4 != 0)) {
    do {
      while( true ) {
        auVar1._8_8_ = 0;
        auVar1._0_8_ = param_3;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = param_3;
        auVar1 = auVar1 * auVar7;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = auVar1._0_8_ * param_2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = param_1;
        uVar17 = SUB168(auVar2 * auVar8,8);
        param_3 = auVar1._8_8_ - uVar17;
        if (auVar1._8_8_ < uVar17) {
          param_3 = param_3 + param_1;
        }
        param_4 = param_4 >> 1;
        if ((param_4 & 1) == 0) break;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uVar13;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = param_3;
        uVar17 = SUB168(auVar3 * auVar9,8);
        auVar4._8_8_ = 0;
        auVar4._0_8_ = SUB168(auVar3 * auVar9,0) * param_2;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = param_1;
        uVar14 = SUB168(auVar4 * auVar10,8);
        uVar13 = uVar17 - uVar14;
        if (uVar17 < uVar14) {
          uVar13 = uVar13 + param_1;
        }
      }
    } while (param_4 != 0);
    uVar14 = param_1 - param_6;
    uVar17 = CONCAT71(auVar1._9_7_,param_6 == uVar13 || uVar14 == uVar13);
    if ((param_6 != uVar13 && uVar14 != uVar13) && (1 < param_5)) {
      iVar18 = 1;
      while( true ) {
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar13;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar13;
        uVar15 = SUB168(auVar5 * auVar11,8);
        auVar6._8_8_ = 0;
        auVar6._0_8_ = SUB168(auVar5 * auVar11,0) * param_2;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = param_1;
        uVar16 = SUB168(auVar6 * auVar12,8);
        uVar13 = uVar15 - uVar16;
        if (uVar15 < uVar16) {
          uVar13 = uVar13 + param_1;
        }
        if (uVar14 == uVar13) break;
        if ((param_6 == uVar13) || (iVar18 = iVar18 + 1, param_5 == iVar18)) goto LAB_00100181;
      }
      uVar17 = 1;
    }
  }
LAB_00100181:
  return uVar17 & 0xffffffff;
}



void print_uuint(ulong param_1,ulong param_2)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  char *pcVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  long lVar12;
  int iVar13;
  bool bVar14;
  
  if (param_2 == 0) {
    pcVar9 = &dev_debug;
  }
  else {
    uVar4 = param_1;
    pcVar9 = lbuf_buf + 0x1fed;
    while( true ) {
      iVar13 = 0x40;
      pcVar11 = pcVar9 + 0x13;
      param_1 = 0;
      uVar8 = 0;
      uVar6 = 10000000000000000000;
      uVar7 = param_2 + (ulong)(9999999999999999999 < param_2) * 0x7538dcfb76180000;
      do {
        uVar8 = uVar8 >> 1 | uVar6 << 0x3f;
        uVar6 = uVar6 >> 1;
        param_1 = param_1 * 2;
        if ((uVar6 < uVar7) || ((uVar6 == uVar7 && (uVar8 <= uVar4)))) {
          param_1 = param_1 + 1;
          bVar14 = uVar4 < uVar8;
          uVar4 = uVar4 - uVar8;
          uVar7 = (uVar7 - uVar6) - (ulong)bVar14;
        }
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
      do {
        pcVar11 = pcVar11 + -1;
        *pcVar11 = (char)uVar4 + (char)(uVar4 / 10) * -10 + '0';
        uVar4 = uVar4 / 10;
      } while (pcVar11 != pcVar9);
      if (param_2 < 10000000000000000000) break;
      param_2 = 1;
      uVar4 = param_1;
      pcVar9 = pcVar9 + -0x13;
    }
  }
  do {
    pcVar11 = pcVar9;
    pcVar9 = pcVar11 + -1;
    *pcVar9 = (char)param_1 + (char)(param_1 / 10) * -10 + '0';
    bVar14 = 9 < param_1;
    param_1 = param_1 / 10;
  } while (bVar14);
  pcVar1 = lbuf_buf + (long)lbuffered;
  pcVar5 = pcVar9;
  pcVar10 = pcVar1;
  if (((0x10767fU - (long)pcVar9 < 7) || (&dev_debug < pcVar11)) ||
     ((ulong)((long)pcVar1 - (long)pcVar11) < 0xf)) {
    do {
      pcVar2 = pcVar5 + 1;
      *pcVar10 = *pcVar5;
      pcVar5 = pcVar2;
      pcVar10 = pcVar10 + 1;
    } while (pcVar2 < &dev_debug);
  }
  else {
    uVar4 = (long)&dev_debug - (long)pcVar9;
    if (0x10767fU - (long)pcVar9 < 0xf) {
      uVar6 = 0;
    }
    else {
      uVar7 = 0;
      uVar6 = uVar4 & 0xfffffffffffffff0;
      do {
        uVar3 = *(undefined8 *)(pcVar9 + uVar7 + 8);
        *(undefined8 *)(pcVar1 + uVar7) = *(undefined8 *)(pcVar9 + uVar7);
        *(undefined8 *)(pcVar1 + uVar7 + 8) = uVar3;
        uVar7 = uVar7 + 0x10;
      } while (uVar6 != uVar7);
      pcVar5 = pcVar9 + uVar6;
      pcVar10 = pcVar1 + uVar6;
      if (uVar4 == uVar6) goto LAB_00100326;
    }
    uVar4 = uVar4 - uVar6;
    if (6 < uVar4 - 1) {
      *(undefined8 *)(lbuf_buf + uVar6 + (long)lbuffered) = *(undefined8 *)(pcVar9 + uVar6);
      pcVar5 = pcVar5 + (uVar4 & 0xfffffffffffffff8);
      pcVar10 = pcVar10 + (uVar4 & 0xfffffffffffffff8);
      if ((uVar4 & 7) == 0) goto LAB_00100326;
    }
    *pcVar10 = *pcVar5;
    if ((((pcVar5 + 1 < &dev_debug) && (pcVar10[1] = pcVar5[1], pcVar5 + 2 < &dev_debug)) &&
        ((pcVar10[2] = pcVar5[2], pcVar5 + 3 < &dev_debug &&
         ((pcVar10[3] = pcVar5[3], pcVar5 + 4 < &dev_debug &&
          (pcVar10[4] = pcVar5[4], pcVar5 + 5 < &dev_debug)))))) &&
       (pcVar10[5] = pcVar5[5], pcVar5 + 6 < &dev_debug)) {
      pcVar10[6] = pcVar5[6];
    }
  }
LAB_00100326:
  lVar12 = (long)&dev_debug - (long)pcVar9;
  if (&dev_debug < pcVar11) {
    lVar12 = 1;
  }
  lbuffered = pcVar1 + lVar12 + -0x105680;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long write_error(void)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  int *piVar23;
  undefined8 uVar24;
  long lVar25;
  long lVar26;
  ulong in_RCX;
  ulong uVar27;
  ulong extraout_RDX;
  ulong uVar28;
  ulong uVar29;
  ulong unaff_RBX;
  undefined1 *puVar30;
  undefined8 *puVar31;
  ulong in_R8;
  ulong in_R9;
  ulong uVar32;
  long unaff_retaddr;
  
  piVar23 = __errno_location();
  iVar1 = *piVar23;
  fflush_unlocked(_stdout);
  fpurge(_stdout);
  clearerr_unlocked(_stdout);
  uVar24 = dcgettext(0,"write error",5);
  error(1,iVar1,uVar24);
  lVar26 = lbuffered;
  puVar30 = lbuf_buf;
  puVar31 = (undefined8 *)0x1;
  lbuffered = 0;
  lVar25 = full_write(1,lbuf_buf,lVar26);
  if (lVar25 == lVar26) {
    return lVar25;
  }
  write_error();
  auVar22._8_8_ = in_R9;
  auVar22._0_8_ = unaff_RBX;
  if ((long)puVar30 < 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("(a1 >> (64 - 1)) == 0","src/factor.c",0x3d2,__PRETTY_FUNCTION___7);
  }
  if ((long)in_RCX < 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("(b1 >> (64 - 1)) == 0","src/factor.c",0x3d3,__PRETTY_FUNCTION___7);
  }
  if (-1 < (long)in_R9) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = extraout_RDX;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = in_R8;
    uVar28 = SUB168(auVar2 * auVar10,8);
    lVar26 = SUB168(auVar2 * auVar10,0);
    uVar32 = -unaff_retaddr * lVar26;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = extraout_RDX;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = in_RCX;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar32;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = unaff_RBX;
    uVar29 = SUB168(auVar4 * auVar12,8);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar32;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = in_R9;
    uVar32 = (SUB168(auVar3 * auVar11,0) + 1) - (ulong)(lVar26 == 0);
    uVar27 = uVar32 + uVar29;
    auVar18._8_8_ =
         SUB168(auVar3 * auVar11,8) + (ulong)CARRY8(uVar32,uVar29) + (ulong)CARRY8(uVar27,uVar28);
    auVar18._0_8_ = uVar27 + uVar28;
    auVar18 = auVar5 * auVar13 + auVar18;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = auVar18._0_8_;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = auVar18._8_8_;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = puVar30;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = in_R8;
    auVar20 = auVar6 * auVar14 + auVar20;
    lVar26 = auVar20._0_8_;
    uVar29 = auVar20._8_8_;
    uVar32 = -unaff_retaddr * lVar26;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = puVar30;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = in_RCX;
    auVar21 = auVar7 * auVar15 + auVar21;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar32;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = unaff_RBX;
    uVar28 = SUB168(auVar8 * auVar16,8);
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar32;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = in_R9;
    uVar32 = (auVar21._0_8_ + 1) - (ulong)(lVar26 == 0);
    uVar27 = uVar32 + uVar28;
    auVar19._8_8_ = auVar21._8_8_ + (ulong)CARRY8(uVar32,uVar28) + (ulong)CARRY8(uVar27,uVar29);
    auVar19._0_8_ = uVar27 + uVar29;
    auVar19 = auVar9 * auVar17 + auVar19;
    if ((in_R9 < auVar19._8_8_) || ((in_R9 == auVar19._8_8_ && (unaff_RBX <= auVar19._0_8_)))) {
      auVar19 = auVar19 - auVar22;
    }
    *puVar31 = auVar19._8_8_;
    return auVar19._0_8_;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("(m1 >> (64 - 1)) == 0","src/factor.c",0x3d4,__PRETTY_FUNCTION___7);
}



long lbuf_flush(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  long lVar22;
  long lVar23;
  ulong in_RCX;
  ulong uVar24;
  ulong extraout_RDX;
  ulong uVar25;
  ulong uVar26;
  undefined1 *puVar27;
  undefined8 *puVar28;
  ulong in_R8;
  ulong in_R9;
  ulong uVar29;
  ulong unaff_retaddr;
  long in_stack_00000008;
  
  lVar23 = lbuffered;
  puVar27 = lbuf_buf;
  puVar28 = (undefined8 *)0x1;
  lbuffered = 0;
  lVar22 = full_write(1,lbuf_buf,lVar23);
  if (lVar22 == lVar23) {
    return lVar22;
  }
  write_error();
  auVar21._8_8_ = in_R9;
  auVar21._0_8_ = unaff_retaddr;
  if ((long)puVar27 < 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("(a1 >> (64 - 1)) == 0","src/factor.c",0x3d2,__PRETTY_FUNCTION___7);
  }
  if ((long)in_RCX < 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("(b1 >> (64 - 1)) == 0","src/factor.c",0x3d3,__PRETTY_FUNCTION___7);
  }
  if (-1 < (long)in_R9) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = extraout_RDX;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = in_R8;
    uVar25 = SUB168(auVar1 * auVar9,8);
    lVar23 = SUB168(auVar1 * auVar9,0);
    uVar29 = -in_stack_00000008 * lVar23;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = extraout_RDX;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = in_RCX;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar29;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = unaff_retaddr;
    uVar26 = SUB168(auVar3 * auVar11,8);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar29;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = in_R9;
    uVar29 = (SUB168(auVar2 * auVar10,0) + 1) - (ulong)(lVar23 == 0);
    uVar24 = uVar29 + uVar26;
    auVar17._8_8_ =
         SUB168(auVar2 * auVar10,8) + (ulong)CARRY8(uVar29,uVar26) + (ulong)CARRY8(uVar24,uVar25);
    auVar17._0_8_ = uVar24 + uVar25;
    auVar17 = auVar4 * auVar12 + auVar17;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = auVar17._0_8_;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = auVar17._8_8_;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = puVar27;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = in_R8;
    auVar19 = auVar5 * auVar13 + auVar19;
    lVar23 = auVar19._0_8_;
    uVar26 = auVar19._8_8_;
    uVar29 = -in_stack_00000008 * lVar23;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = puVar27;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = in_RCX;
    auVar20 = auVar6 * auVar14 + auVar20;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar29;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = unaff_retaddr;
    uVar25 = SUB168(auVar7 * auVar15,8);
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar29;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = in_R9;
    uVar29 = (auVar20._0_8_ + 1) - (ulong)(lVar23 == 0);
    uVar24 = uVar29 + uVar25;
    auVar18._8_8_ = auVar20._8_8_ + (ulong)CARRY8(uVar29,uVar25) + (ulong)CARRY8(uVar24,uVar26);
    auVar18._0_8_ = uVar24 + uVar26;
    auVar18 = auVar8 * auVar16 + auVar18;
    if ((in_R9 < auVar18._8_8_) || ((in_R9 == auVar18._8_8_ && (unaff_retaddr <= auVar18._0_8_)))) {
      auVar18 = auVar18 - auVar21;
    }
    *puVar28 = auVar18._8_8_;
    return auVar18._0_8_;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("(m1 >> (64 - 1)) == 0","src/factor.c",0x3d4,__PRETTY_FUNCTION___7);
}



/* WARNING: Removing unreachable block (ram,0x00100602) */

undefined8
mulredc2(undefined8 *param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,ulong param_6,
        ulong param_7,long param_8)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  
  auVar21._8_8_ = param_6;
  auVar21._0_8_ = param_7;
  if ((long)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("(a1 >> (64 - 1)) == 0","src/factor.c",0x3d2,__PRETTY_FUNCTION___7);
  }
  if (-1 < (long)param_4) {
    if (-1 < (long)param_6) {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = param_3;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = param_5;
      uVar24 = SUB168(auVar1 * auVar9,8);
      lVar22 = SUB168(auVar1 * auVar9,0);
      uVar26 = -param_8 * lVar22;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = param_3;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = param_4;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar26;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = param_7;
      uVar25 = SUB168(auVar3 * auVar11,8);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar26;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = param_6;
      uVar26 = (SUB168(auVar2 * auVar10,0) + 1) - (ulong)(lVar22 == 0);
      uVar23 = uVar26 + uVar25;
      auVar17._8_8_ =
           SUB168(auVar2 * auVar10,8) + (ulong)CARRY8(uVar26,uVar25) + (ulong)CARRY8(uVar23,uVar24);
      auVar17._0_8_ = uVar23 + uVar24;
      auVar17 = auVar4 * auVar12 + auVar17;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = auVar17._0_8_;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = auVar17._8_8_;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = param_2;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = param_5;
      auVar19 = auVar5 * auVar13 + auVar19;
      lVar22 = auVar19._0_8_;
      uVar25 = auVar19._8_8_;
      uVar26 = -param_8 * lVar22;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = param_2;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = param_4;
      auVar20 = auVar6 * auVar14 + auVar20;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar26;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = param_7;
      uVar24 = SUB168(auVar7 * auVar15,8);
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar26;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = param_6;
      uVar26 = (auVar20._0_8_ + 1) - (ulong)(lVar22 == 0);
      uVar23 = uVar26 + uVar24;
      auVar18._8_8_ = auVar20._8_8_ + (ulong)CARRY8(uVar26,uVar24) + (ulong)CARRY8(uVar23,uVar25);
      auVar18._0_8_ = uVar23 + uVar25;
      auVar18 = auVar8 * auVar16 + auVar18;
      if (auVar21 <= auVar18) {
        auVar18 = auVar18 - auVar21;
      }
      *param_1 = auVar18._8_8_;
      return auVar18._0_8_;
    }
                    /* WARNING: Subroutine does not return */
    __assert_fail("(m1 >> (64 - 1)) == 0","src/factor.c",0x3d4,__PRETTY_FUNCTION___7);
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("(b1 >> (64 - 1)) == 0","src/factor.c",0x3d3,__PRETTY_FUNCTION___7);
}



void mp_factor_insert(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long local_58;
  long local_48;
  
  lVar2 = param_1[2];
  local_58 = *param_1;
  lVar6 = param_1[1];
  lVar4 = lVar2 + -1;
  lVar7 = lVar4;
  if (lVar4 < 0) {
    local_48 = lVar4;
    if (lVar2 != param_1[3]) {
      mpz_init(local_58 + lVar2 * 0x10);
      goto LAB_00100772;
    }
LAB_00100803:
    local_58 = xpalloc(local_58,param_1 + 3,1,0xffffffffffffffff,0x10);
    lVar6 = xireallocarray(lVar6,param_1[3],8);
LAB_001007ca:
    lVar5 = lVar2 * 0x10 + local_58;
    mpz_init(lVar5);
    if (lVar4 <= lVar7) goto LAB_00100772;
  }
  else {
    lVar5 = local_58 + lVar4 * 0x10;
    do {
      iVar3 = mpz_cmp(lVar5,param_2);
      if (iVar3 < 1) {
        iVar3 = mpz_cmp(lVar7 * 0x10 + local_58,param_2);
        if (iVar3 == 0) {
          plVar1 = (long *)(lVar6 + lVar7 * 8);
          *plVar1 = *plVar1 + 1;
          return;
        }
        local_48 = lVar7;
        if (param_1[2] == param_1[3]) goto LAB_00100803;
        goto LAB_001007ca;
      }
      lVar7 = lVar7 + -1;
      lVar5 = lVar5 + -0x10;
    } while (lVar7 != -1);
    if (param_1[2] == param_1[3]) {
      local_48 = -1;
      goto LAB_00100803;
    }
    lVar5 = lVar2 * 0x10 + local_58;
    mpz_init(lVar5);
    local_48 = -1;
  }
  do {
    mpz_set(lVar5,lVar5 + -0x10);
    *(undefined8 *)(lVar6 + 8 + lVar4 * 8) = *(undefined8 *)(lVar6 + lVar4 * 8);
    lVar4 = lVar4 + -1;
    lVar5 = lVar5 + -0x10;
  } while (lVar4 != lVar7);
LAB_00100772:
  mpz_set((local_48 + 1) * 0x10 + local_58,param_2);
  *(undefined8 *)(lVar6 + (local_48 + 1) * 8) = 1;
  *param_1 = local_58;
  param_1[1] = lVar6;
  param_1[2] = lVar2 + 1;
  return;
}



void factor_insert_large_part_0(void)

{
                    /* WARNING: Subroutine does not return */
  __assert_fail("hi (factors->plarge) == 0","src/factor.c",0x225,"factor_insert_large");
}



undefined1  [16] gcd2_odd_part_0(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  int iVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  uVar4 = param_2;
  if (param_2 != 0) {
    uVar4 = param_1;
    param_1 = param_2;
  }
  iVar1 = 0;
  for (uVar3 = param_1; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x8000000000000000) {
    iVar1 = iVar1 + 1;
  }
  if (iVar1 != 0) {
    bVar2 = (byte)iVar1;
    param_1 = param_1 >> (bVar2 & 0x3f) | uVar4 << (0x40 - bVar2 & 0x3f);
    uVar4 = uVar4 >> (bVar2 & 0x3f);
  }
  if (uVar4 != 0 || param_3 != 0) {
LAB_00100919:
    do {
      if ((param_3 < uVar4) || ((param_4 < param_1 && (uVar4 == param_3)))) {
        uVar3 = param_1 - param_4;
        uVar5 = (uVar4 - param_3) - (ulong)(param_1 < param_4);
        param_1 = uVar5;
        uVar4 = uVar3;
        if (uVar3 != 0) {
          param_1 = uVar3;
          uVar4 = uVar5;
        }
        iVar1 = 0;
        for (uVar3 = param_1; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x8000000000000000) {
          iVar1 = iVar1 + 1;
        }
        if (iVar1 == 0) {
          if (uVar4 == 0 && param_3 == 0) break;
          goto LAB_00100919;
        }
        bVar2 = (byte)iVar1;
        uVar3 = uVar4 << (-bVar2 & 0x3f);
        uVar4 = uVar4 >> (bVar2 & 0x3f);
        param_1 = uVar3 | param_1 >> (bVar2 & 0x3f);
      }
      else {
        if ((param_3 <= uVar4) && ((param_4 <= param_1 || (uVar4 != param_3)))) {
          auVar7._8_8_ = uVar4;
          auVar7._0_8_ = param_1;
          return auVar7;
        }
        uVar5 = param_4 - param_1;
        uVar3 = (param_3 - uVar4) - (ulong)(param_4 < param_1);
        param_4 = uVar3;
        param_3 = uVar5;
        if (uVar5 != 0) {
          param_4 = uVar5;
          param_3 = uVar3;
        }
        iVar1 = 0;
        for (uVar3 = param_4; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x8000000000000000) {
          iVar1 = iVar1 + 1;
        }
        if (iVar1 != 0) {
          bVar2 = (byte)iVar1;
          param_4 = param_3 << (-bVar2 & 0x3f) | param_4 >> (bVar2 & 0x3f);
          param_3 = param_3 >> (bVar2 & 0x3f);
        }
      }
    } while (uVar4 != 0 || param_3 != 0);
  }
  uVar4 = param_1;
  if ((param_1 & 1) != 0) {
    uVar4 = param_4;
    param_4 = param_1;
  }
  if (uVar4 != 0) {
    bVar2 = 0;
    for (uVar3 = uVar4; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x8000000000000000) {
      bVar2 = bVar2 + 1;
    }
    param_4 = param_4 >> 1;
    uVar4 = uVar4 >> (bVar2 & 0x3f);
    uVar3 = (uVar4 >> 1) - param_4;
    while (uVar3 != 0) {
      uVar4 = (long)uVar3 >> 0x3f;
      param_4 = param_4 + (uVar4 & uVar3);
      bVar2 = 0;
      uVar4 = (uVar3 ^ uVar4) - uVar4;
      for (uVar3 = uVar4; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x8000000000000000) {
        bVar2 = bVar2 + 1;
      }
      uVar4 = uVar4 >> (bVar2 & 0x3f);
      uVar3 = (uVar4 >> 1) - param_4;
    }
    param_4 = uVar4 | 1;
  }
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_4;
  return auVar6;
}



undefined1  [16] mod2(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  byte bVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  undefined1 auVar9 [16];
  
  if (param_3 != 0) {
    if (param_1 != 0) {
      lVar1 = 0x3f;
      if (param_3 != 0) {
        for (; param_3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      lVar2 = 0x3f;
      if (param_1 != 0) {
        for (; param_1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar7 = ((uint)lVar1 ^ 0x3f) - ((uint)lVar2 ^ 0x3f);
      if (0 < iVar7) {
        bVar4 = (byte)iVar7;
        uVar3 = param_4 << (bVar4 & 0x3f);
        uVar5 = param_4 >> (0x40 - bVar4 & 0x3f) | param_3 << (bVar4 & 0x3f);
        iVar6 = 0;
        do {
          if ((uVar5 < param_1) || ((param_1 == uVar5 && (uVar3 <= param_2)))) {
            bVar8 = param_2 < uVar3;
            param_2 = param_2 - uVar3;
            param_1 = (param_1 - uVar5) - (ulong)bVar8;
          }
          iVar6 = iVar6 + 1;
          uVar3 = uVar3 >> 1 | uVar5 << 0x3f;
          uVar5 = uVar5 >> 1;
        } while (iVar7 != iVar6);
      }
    }
    auVar9._8_8_ = param_1;
    auVar9._0_8_ = param_2;
    return auVar9;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("d1 != 0","src/factor.c",0x191,"mod2");
}



void mpz_va_init_constprop_0
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  uint uVar2;
  long in_FS_OFFSET;
  long *local_50;
  long local_38 [4];
  undefined8 local_18;
  undefined8 local_10;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  local_38[1] = param_2;
  local_38[2] = param_3;
  local_38[3] = param_4;
  local_18 = param_5;
  local_10 = param_6;
  for (uVar2 = 8; local_50 = (long *)&stack0x00000008, uVar2 < 0x30; uVar2 = uVar2 + 8) {
    if (*(long *)((long)local_38 + (ulong)uVar2) == 0) goto LAB_00100b73;
    mpz_init();
  }
  while( true ) {
    if (*local_50 == 0) break;
    mpz_init();
    local_50 = local_50 + 1;
  }
LAB_00100b73:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mpz_va_init_constprop_1
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  uint uVar2;
  long in_FS_OFFSET;
  long *local_50;
  long local_38 [4];
  undefined8 local_18;
  undefined8 local_10;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  local_38[1] = param_2;
  local_38[2] = param_3;
  local_38[3] = param_4;
  local_18 = param_5;
  local_10 = param_6;
  for (uVar2 = 8; local_50 = (long *)&stack0x00000008, uVar2 < 0x30; uVar2 = uVar2 + 8) {
    if (*(long *)((long)local_38 + (ulong)uVar2) == 0) goto LAB_00100c23;
    mpz_clear();
  }
  while( true ) {
    if (*local_50 == 0) break;
    mpz_clear();
    local_50 = local_50 + 1;
  }
LAB_00100c23:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void lbuf_putnl(void)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = lbuffered + 1;
  lbuf_buf[lbuffered] = 10;
  lbuffered = lVar3;
  if (line_buffered_0 < 0) goto LAB_00100d70;
  do {
    if (line_buffered_0 == 0) {
      if (lVar3 < 0x1000) {
        return;
      }
      lVar4 = 0x1000;
      pvVar1 = memrchr(lbuf_buf,10,0x1000);
      lVar5 = 0x106680;
      if (pvVar1 != (void *)0x0) {
        lVar5 = (long)pvVar1 + 1;
        lVar4 = (long)pvVar1 + -0x10567f;
      }
      lVar3 = lVar3 - lVar4;
      lbuffered = 0;
      lVar2 = full_write(1,lbuf_buf,lVar4);
      if (lVar2 == lVar4) {
        lbuffered = lVar3;
        __memmove_chk(lbuf_buf,lVar5,lVar3,0x2000);
        return;
      }
    }
    else {
      lbuffered = 0;
      lVar5 = full_write(1,lbuf_buf,lVar3);
      if (lVar3 == lVar5) {
        return;
      }
    }
    write_error();
LAB_00100d70:
    line_buffered_0 = isatty(1);
  } while( true );
}



/* WARNING: Removing unreachable block (ram,0x00101033) */

undefined8
lbuf_putmpz(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 *param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  long lVar26;
  undefined8 uVar27;
  void *pvVar28;
  long lVar29;
  ulong *puVar30;
  undefined8 extraout_RAX;
  ulong uVar31;
  undefined1 (*extraout_RDX) [16];
  ulong uVar32;
  ulong uVar33;
  ulong *puVar34;
  undefined1 *puVar35;
  undefined1 (*pauVar36) [16];
  ulong uVar37;
  ulong uVar38;
  ulong uVar39;
  undefined1 *unaff_R12;
  ulong uVar40;
  int iVar41;
  long unaff_R14;
  undefined8 uVar42;
  long in_FS_OFFSET;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_70;
  long lStack_68;
  ulong *puStack_58;
  long lStack_50;
  undefined1 *puStack_48;
  long lStack_40;
  long lStack_38;
  
  lVar26 = mpz_sizeinbase(param_1,10);
  puVar34 = lbuffered;
  if (lVar26 < 0x2000 - (long)lbuffered) {
    unaff_R12 = lbuf_buf;
    puVar34 = lbuffered + 0x20ad0;
    uVar27 = mpz_get_str(puVar34,10,param_1);
    puVar34 = (ulong *)((long)puVar34 +
                       ((lVar26 + -0x105680) -
                       (ulong)(*(char *)((long)puVar34 + lVar26 + -1) == '\0')));
    lbuffered = puVar34;
    while( true ) {
      if ((long)puVar34 < 0x1000) {
        return uVar27;
      }
      pvVar28 = memrchr(lbuf_buf,10,0x1000);
      lVar26 = 0x1000;
      unaff_R14 = 0x106680;
      if (pvVar28 != (void *)0x0) {
        unaff_R14 = (long)pvVar28 + 1;
        lVar26 = (long)pvVar28 + -0x10567f;
      }
      puVar35 = lbuf_buf;
      pauVar36 = (undefined1 (*) [16])0x1;
      puVar34 = (ulong *)((long)puVar34 - lVar26);
      lbuffered = (ulong *)0x0;
      lVar29 = full_write(1,lbuf_buf,lVar26);
      param_1 = 0x106680;
      if (lVar26 != lVar29) break;
      param_4 = 0x2000;
      lbuffered = puVar34;
      uVar27 = __memmove_chk(lbuf_buf,unaff_R14,puVar34);
    }
  }
  else {
    pauVar36 = (undefined1 (*) [16])0x1;
    puVar35 = lbuf_buf;
    lbuffered = (ulong *)0x0;
    puVar30 = (ulong *)full_write(1,lbuf_buf,puVar34);
    if (puVar34 == puVar30) {
      puVar34 = (ulong *)ximalloc(lVar26 + 1);
      mpz_get_str(puVar34,10,param_1);
      pauVar36 = (undefined1 (*) [16])0x1;
      lVar26 = lVar26 - (ulong)(*(char *)((long)puVar34 + lVar26 + -1) == '\0');
      puVar35 = (undefined1 *)puVar34;
      lVar29 = full_write(1,puVar34,lVar26);
      if (lVar29 == lVar26) {
        free(puVar34);
        return extraout_RAX;
      }
    }
  }
  write_error();
  uVar1 = *(ulong *)*extraout_RDX;
  uVar2 = *(ulong *)(*extraout_RDX + 8);
  auVar25 = *extraout_RDX;
  auVar24 = *extraout_RDX;
  uStack_98 = *param_5;
  lVar29 = *(long *)(*pauVar36 + 8);
  auVar20 = *pauVar36;
  uVar40 = *(ulong *)puVar35;
  lStack_68 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_a0 = param_5[1];
  puStack_58 = puVar34;
  lStack_50 = lVar26;
  puStack_48 = unaff_R12;
  lStack_40 = param_1;
  lStack_38 = unaff_R14;
  if ((long)uVar2 < 0) {
    if ((uVar40 & 1) != 0) {
      mulredc2(&uStack_70,uStack_a0,uStack_98,lVar29,*(undefined8 *)*pauVar36,uVar2,uVar1,param_4);
    }
    if (-1 < lVar29) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("(m1 >> (64 - 1)) == 0","src/factor.c",0x3d4,__PRETTY_FUNCTION___7);
    }
LAB_001011b1:
                    /* WARNING: Subroutine does not return */
    __assert_fail("(a1 >> (64 - 1)) == 0","src/factor.c",0x3d2,__PRETTY_FUNCTION___7);
  }
  iVar41 = 0x40;
  do {
    uVar31 = auVar20._8_8_;
    uVar39 = auVar20._0_8_;
    if ((uVar40 & 1) != 0) {
      uStack_98 = mulredc2(&uStack_70,uStack_a0,uStack_98,uVar31,uVar39,uVar2,uVar1,param_4);
      uStack_a0 = uStack_70;
    }
    if ((long)uVar31 < 0) goto LAB_001011b1;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar39;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar39;
    uVar32 = SUB168(auVar3 * auVar11,8);
    lVar26 = SUB168(auVar3 * auVar11,0);
    uVar37 = lVar26 * -param_4;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar39;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar31;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar37;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar1;
    uVar33 = SUB168(auVar5 * auVar13,8);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar37;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar2;
    uVar37 = (SUB168(auVar4 * auVar12,0) + 1) - (ulong)(lVar26 == 0);
    uVar38 = uVar37 + uVar33;
    auVar19._8_8_ =
         SUB168(auVar4 * auVar12,8) + (ulong)CARRY8(uVar37,uVar33) + (ulong)CARRY8(uVar38,uVar32);
    auVar19._0_8_ = uVar38 + uVar32;
    auVar19 = auVar6 * auVar14 + auVar19;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = auVar19._0_8_;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = auVar19._8_8_;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar31;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar39;
    auVar22 = auVar7 * auVar15 + auVar22;
    lVar26 = auVar22._0_8_;
    uVar32 = auVar22._8_8_;
    uVar39 = lVar26 * -param_4;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar31;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar31;
    auVar23 = auVar8 * auVar16 + auVar23;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar39;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar1;
    uVar37 = SUB168(auVar9 * auVar17,8);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar39;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar2;
    uVar31 = (auVar23._0_8_ + 1) - (ulong)(lVar26 == 0);
    uVar39 = uVar31 + uVar37;
    auVar21._8_8_ = auVar23._8_8_ + (ulong)CARRY8(uVar31,uVar37) + (ulong)CARRY8(uVar39,uVar32);
    auVar21._0_8_ = uVar39 + uVar32;
    auVar20 = auVar10 * auVar18 + auVar21;
    if (auVar25 <= auVar20) {
      auVar20 = auVar20 - auVar24;
    }
    uVar40 = uVar40 >> 1;
    iVar41 = iVar41 + -1;
  } while (iVar41 != 0);
  uVar40 = *(ulong *)((long)puVar35 + 8);
  if (uVar40 != 0) {
    do {
      while( true ) {
        uVar42 = auVar20._8_8_;
        uVar27 = auVar20._0_8_;
        if ((uVar40 & 1) != 0) break;
        uVar27 = mulredc2(&uStack_70,uVar42,uVar27,uVar42,uVar27,uVar2,uVar1);
        uVar40 = uVar40 >> 1;
        auVar20._8_8_ = uStack_70;
        auVar20._0_8_ = uVar27;
        if (uVar40 == 0) goto LAB_001010f2;
      }
      uStack_98 = mulredc2(&uStack_70,uStack_a0,uStack_98,uVar42,uVar27,uVar2,uVar1,param_4);
      uStack_a0 = uStack_70;
      uVar27 = mulredc2(&uStack_70,uVar42,uVar27,uVar42,uVar27,uVar2,uVar1,param_4);
      auVar20._8_8_ = uStack_70;
      auVar20._0_8_ = uVar27;
      uVar40 = uVar40 >> 1;
    } while (uVar40 != 0);
  }
LAB_001010f2:
  if (lStack_68 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uStack_98;
}



/* WARNING: Removing unreachable block (ram,0x00101033) */

undefined1  [16]
powm2(undefined1 (*param_1) [16],ulong *param_2,undefined1 (*param_3) [16],long param_4,
     undefined8 *param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  long lVar25;
  undefined8 uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  int iVar34;
  undefined8 uVar35;
  long in_FS_OFFSET;
  undefined1 auVar36 [16];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_48;
  long local_40;
  
  uVar1 = *(ulong *)*param_3;
  uVar2 = *(ulong *)(*param_3 + 8);
  auVar24 = *param_3;
  auVar36 = *param_3;
  local_70 = *param_5;
  lVar25 = *(long *)(*param_1 + 8);
  auVar20 = *param_1;
  uVar33 = *param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = param_5[1];
  if ((long)uVar2 < 0) {
    if ((uVar33 & 1) != 0) {
      mulredc2(&local_48,local_78,local_70,lVar25,*(undefined8 *)*param_1,uVar2,uVar1,param_4);
    }
    if (-1 < lVar25) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("(m1 >> (64 - 1)) == 0","src/factor.c",0x3d4,__PRETTY_FUNCTION___7);
    }
LAB_001011b1:
                    /* WARNING: Subroutine does not return */
    __assert_fail("(a1 >> (64 - 1)) == 0","src/factor.c",0x3d2,__PRETTY_FUNCTION___7);
  }
  iVar34 = 0x40;
  do {
    uVar27 = auVar20._8_8_;
    uVar32 = auVar20._0_8_;
    if ((uVar33 & 1) != 0) {
      local_70 = mulredc2(&local_48,local_78,local_70,uVar27,uVar32,uVar2,uVar1,param_4);
      local_78 = local_48;
    }
    if ((long)uVar27 < 0) goto LAB_001011b1;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar32;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar32;
    uVar28 = SUB168(auVar3 * auVar11,8);
    lVar25 = SUB168(auVar3 * auVar11,0);
    uVar30 = lVar25 * -param_4;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar32;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar27;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar30;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar1;
    uVar29 = SUB168(auVar5 * auVar13,8);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar30;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar2;
    uVar30 = (SUB168(auVar4 * auVar12,0) + 1) - (ulong)(lVar25 == 0);
    uVar31 = uVar30 + uVar29;
    auVar19._8_8_ =
         SUB168(auVar4 * auVar12,8) + (ulong)CARRY8(uVar30,uVar29) + (ulong)CARRY8(uVar31,uVar28);
    auVar19._0_8_ = uVar31 + uVar28;
    auVar19 = auVar6 * auVar14 + auVar19;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = auVar19._0_8_;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = auVar19._8_8_;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar27;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar32;
    auVar22 = auVar7 * auVar15 + auVar22;
    lVar25 = auVar22._0_8_;
    uVar28 = auVar22._8_8_;
    uVar32 = lVar25 * -param_4;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar27;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar27;
    auVar23 = auVar8 * auVar16 + auVar23;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar32;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar1;
    uVar30 = SUB168(auVar9 * auVar17,8);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar32;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar2;
    uVar27 = (auVar23._0_8_ + 1) - (ulong)(lVar25 == 0);
    uVar32 = uVar27 + uVar30;
    auVar21._8_8_ = auVar23._8_8_ + (ulong)CARRY8(uVar27,uVar30) + (ulong)CARRY8(uVar32,uVar28);
    auVar21._0_8_ = uVar32 + uVar28;
    auVar20 = auVar10 * auVar18 + auVar21;
    if (auVar24 <= auVar20) {
      auVar20 = auVar20 - auVar36;
    }
    uVar33 = uVar33 >> 1;
    iVar34 = iVar34 + -1;
  } while (iVar34 != 0);
  uVar33 = param_2[1];
  if (uVar33 != 0) {
    do {
      while( true ) {
        uVar35 = auVar20._8_8_;
        uVar26 = auVar20._0_8_;
        if ((uVar33 & 1) != 0) break;
        uVar26 = mulredc2(&local_48,uVar35,uVar26,uVar35,uVar26,uVar2,uVar1);
        uVar33 = uVar33 >> 1;
        auVar20._8_8_ = local_48;
        auVar20._0_8_ = uVar26;
        if (uVar33 == 0) goto LAB_001010f2;
      }
      local_70 = mulredc2(&local_48,local_78,local_70,uVar35,uVar26,uVar2,uVar1,param_4);
      local_78 = local_48;
      uVar26 = mulredc2(&local_48,uVar35,uVar26,uVar35,uVar26,uVar2,uVar1,param_4);
      auVar20._8_8_ = local_48;
      auVar20._0_8_ = uVar26;
      uVar33 = uVar33 >> 1;
    } while (uVar33 != 0);
  }
LAB_001010f2:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar36._8_8_ = local_78;
    auVar36._0_8_ = local_70;
    return auVar36;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x0010136e) */

undefined8
millerrabin2(undefined1 (*param_1) [16],long param_2,undefined8 param_3,undefined8 param_4,
            int param_5,undefined1 (*param_6) [16])

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  long lVar24;
  long lVar25;
  undefined7 uVar27;
  undefined8 uVar26;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  long lVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  int iVar35;
  undefined1 auVar36 [16];
  
  auVar36 = powm2(param_3,param_4,param_1,param_2,param_6);
  if (auVar36 == *param_6) {
    uVar26 = 1;
  }
  else {
    uVar1 = *(ulong *)(*param_1 + 8);
    uVar2 = *(ulong *)*param_1;
    lVar31 = uVar2 - *(ulong *)*param_6;
    lVar24 = (uVar1 - *(long *)(*param_6 + 8)) - (ulong)(uVar2 < *(ulong *)*param_6);
    auVar23._8_8_ = lVar24;
    auVar23._0_8_ = lVar31;
    uVar26 = CONCAT71((int7)((ulong)lVar24 >> 8),auVar36 == auVar23);
    if ((auVar36 != auVar23) && (1 < param_5)) {
      if (-1 < auVar36._8_8_) {
        if ((long)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("(m1 >> (64 - 1)) == 0","src/factor.c",0x3d4,__PRETTY_FUNCTION___7);
        }
        iVar35 = 1;
        do {
          uVar28 = auVar36._8_8_;
          uVar34 = auVar36._0_8_;
          auVar3._8_8_ = 0;
          auVar3._0_8_ = uVar34;
          auVar11._8_8_ = 0;
          auVar11._0_8_ = uVar34;
          uVar29 = SUB168(auVar3 * auVar11,8);
          lVar25 = SUB168(auVar3 * auVar11,0);
          uVar32 = lVar25 * -param_2;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = uVar34;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = uVar28;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = uVar32;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = uVar2;
          uVar30 = SUB168(auVar5 * auVar13,8);
          auVar6._8_8_ = 0;
          auVar6._0_8_ = uVar32;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = uVar1;
          uVar32 = (SUB168(auVar4 * auVar12,0) + 1) - (ulong)(lVar25 == 0);
          uVar33 = uVar32 + uVar30;
          auVar19._8_8_ =
               SUB168(auVar4 * auVar12,8) + (ulong)CARRY8(uVar32,uVar30) +
               (ulong)CARRY8(uVar33,uVar29);
          auVar19._0_8_ = uVar33 + uVar29;
          auVar19 = auVar6 * auVar14 + auVar19;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = auVar19._0_8_;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = auVar19._8_8_;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = uVar28;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = uVar34;
          auVar20 = auVar7 * auVar15 + auVar20;
          lVar25 = auVar20._0_8_;
          uVar32 = auVar20._8_8_;
          uVar29 = lVar25 * -param_2;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = uVar28;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar28;
          auVar21 = auVar8 * auVar16 + auVar21;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = uVar29;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar2;
          uVar30 = SUB168(auVar9 * auVar17,8);
          auVar10._8_8_ = 0;
          auVar10._0_8_ = uVar29;
          auVar18._8_8_ = 0;
          auVar18._0_8_ = uVar1;
          uVar28 = (auVar21._0_8_ + 1) - (ulong)(lVar25 == 0);
          uVar29 = uVar28 + uVar30;
          auVar36._8_8_ =
               auVar21._8_8_ + (ulong)CARRY8(uVar28,uVar30) + (ulong)CARRY8(uVar29,uVar32);
          auVar36._0_8_ = uVar29 + uVar32;
          auVar36 = auVar10 * auVar18 + auVar36;
          if (*param_1 <= auVar36) {
            auVar36 = auVar36 - *param_1;
          }
          uVar27 = SUB167(auVar10 * auVar18,1);
          auVar22._8_8_ = lVar24;
          auVar22._0_8_ = lVar31;
          if (auVar36 == auVar22) {
            return CONCAT71(uVar27,auVar36 == auVar22);
          }
          if (auVar36 == *param_6) {
            return 0;
          }
          iVar35 = iVar35 + 1;
          if (param_5 == iVar35) {
            return CONCAT71(uVar27,auVar36 == *param_6);
          }
        } while (-1 < auVar36._8_8_);
      }
                    /* WARNING: Subroutine does not return */
      __assert_fail("(a1 >> (64 - 1)) == 0","src/factor.c",0x3d2,__PRETTY_FUNCTION___7);
    }
  }
  return uVar26;
}



uint prime2_p_part_0(ulong param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  int iVar2;
  byte bVar3;
  ulong uVar4;
  char cVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  byte *pbVar16;
  long in_FS_OFFSET;
  bool bVar17;
  undefined1 auVar18 [16];
  uint uStack_1d4;
  int iStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong auStack_140 [30];
  byte bStack_4e;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar15 = param_1 - (param_2 == 0);
  uVar7 = param_2 - 1;
  if (uVar7 == 0) {
    uStack_190 = 0;
    iVar2 = 0;
    for (uVar8 = uVar15; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x8000000000000000) {
      iVar2 = iVar2 + 1;
    }
    iStack_1a0 = iVar2 + 0x40;
    uStack_198 = uVar15 >> ((byte)iVar2 & 0x3f);
  }
  else {
    iStack_1a0 = 0;
    for (uVar8 = uVar7; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x8000000000000000) {
      iStack_1a0 = iStack_1a0 + 1;
    }
    bVar3 = (byte)iStack_1a0;
    uStack_198 = uVar15 << (0x40 - bVar3 & 0x3f) | uVar7 >> (bVar3 & 0x3f);
    uStack_190 = uVar15 >> (bVar3 & 0x3f);
  }
  lVar11 = 0x3f;
  uVar8 = (ulong)(byte)binvert_table[(uint)(param_2 >> 1) & 0x7f];
  lVar13 = uVar8 * 2 - uVar8 * uVar8 * param_2;
  lVar13 = lVar13 * 2 - lVar13 * lVar13 * param_2;
  lVar13 = lVar13 * 2 - lVar13 * lVar13 * param_2;
  bVar17 = param_1 == 1;
  if (bVar17) {
    lVar11 = 0x7f;
  }
  uStack_178 = (ulong)bVar17;
  uStack_170 = (ulong)!bVar17;
  do {
    uStack_170 = uStack_170 << 1 | uStack_178 >> 0x3f;
    uStack_178 = uStack_178 * 2;
    if ((param_1 < uStack_170) || ((param_1 == uStack_170 && (param_2 <= uStack_178)))) {
      bVar17 = uStack_178 < param_2;
      uStack_178 = uStack_178 - param_2;
      uStack_170 = (uStack_170 - param_1) - (ulong)bVar17;
    }
    bVar17 = lVar11 != 0;
    lVar11 = lVar11 + -1;
  } while (bVar17);
  uStack_188 = uStack_178 * 2;
  uStack_180 = uStack_170 * 2 + (ulong)CARRY8(uStack_178,uStack_178);
  if ((param_1 < uStack_180) || ((param_1 == uStack_180 && (param_2 <= uStack_188)))) {
    bVar17 = uStack_188 < param_2;
    uStack_188 = uStack_188 - param_2;
    uStack_180 = (uStack_180 - param_1) - (ulong)bVar17;
  }
  uStack_168 = param_2;
  uStack_160 = param_1;
  uVar6 = millerrabin2(&uStack_168,lVar13,&uStack_188,&uStack_198,iStack_1a0);
  if ((char)uVar6 == '\0') {
LAB_00101806:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return uVar6;
  }
  bStack_4e = 0;
  auStack_140[0] = 0;
  if ((uVar15 == 0) && (uVar7 < 2)) {
    uStack_1d4 = 0;
  }
  else {
    factor_part_0_constprop_0(uVar15,uVar7,&uStack_148);
    uStack_1d4 = (uint)bStack_4e;
  }
  bVar3 = bStack_4e;
  uVar8 = auStack_140[0];
  uVar14 = 2;
  pbVar16 = &primes_diff;
  do {
    if (uVar8 == 0) {
LAB_001016e5:
      if (bVar3 == 0) {
LAB_00101800:
        uVar6 = uVar6 & 0xff;
        goto LAB_00101806;
      }
LAB_001016f0:
      uVar4 = uStack_178;
      lVar11 = 1;
      do {
        uVar9 = auStack_140[lVar11];
        while( true ) {
          uStack_158 = uVar7 >> 1 | uVar15 << 0x3f;
          uStack_150 = uVar15 >> 1;
          if (uVar9 != 2) {
            uVar10 = (ulong)(byte)binvert_table[(uint)(uVar9 >> 1) & 0x7f];
            lVar12 = uVar10 * 2 - uVar10 * uVar10 * uVar9;
            lVar12 = lVar12 * 2 - lVar12 * lVar12 * uVar9;
            lVar12 = lVar12 * 2 - lVar12 * lVar12 * uVar9;
            uStack_158 = uVar7 * lVar12;
            if (uVar15 < uVar9) {
              uStack_150 = 0;
            }
            else {
              auVar18._8_8_ = 0;
              auVar18._0_8_ = uStack_158;
              auVar1._8_8_ = 0;
              auVar1._0_8_ = uVar9;
              uStack_150 = (uVar15 - SUB168(auVar18 * auVar1,8)) * lVar12;
            }
          }
          auVar18 = powm2(&uStack_188,&uStack_158,&uStack_168,lVar13,&uStack_178);
          uVar9 = auVar18._8_8_;
          if (uVar4 == auVar18._0_8_) break;
          if ((int)uStack_1d4 <= (int)lVar11) goto LAB_00101800;
          lVar11 = lVar11 + 1;
          uVar9 = auStack_140[lVar11];
        }
        if ((int)uStack_1d4 <= (int)lVar11) goto LAB_001017f0;
        lVar11 = lVar11 + 1;
      } while (uStack_170 != uVar9);
    }
    else {
      uStack_150 = 0;
      uVar9 = (ulong)(byte)binvert_table[(uint)(uStack_148 >> 1) & 0x7f];
      lVar11 = uVar9 * 2 - uVar9 * uVar9 * uStack_148;
      lVar11 = lVar11 * 2 - lVar11 * lVar11 * uStack_148;
      uStack_158 = uVar7 * (lVar11 * 2 - lVar11 * lVar11 * uStack_148);
      auVar18 = powm2(&uStack_188,&uStack_158,&uStack_168,lVar13,&uStack_178);
      uVar9 = auVar18._8_8_;
      if (uStack_178 != auVar18._0_8_) goto LAB_001016e5;
      if (bVar3 != 0) {
        if (uStack_170 == uVar9) goto LAB_001018f0;
        goto LAB_001016f0;
      }
LAB_001017f0:
      if (uStack_170 != uVar9) goto LAB_00101800;
    }
LAB_001018f0:
    uVar14 = uVar14 + *pbVar16;
    uStack_180 = 0;
    uStack_188 = uVar14;
    if (uVar14 < param_1) {
      uStack_180 = uVar14;
      uStack_188 = 0;
    }
    lVar11 = (-(ulong)(uVar14 < param_1) & 0xffffffffffffffc0) + 0x7f;
    do {
      uStack_180 = uStack_180 << 1 | uStack_188 >> 0x3f;
      uStack_188 = uStack_188 * 2;
      if ((param_1 < uStack_180) || ((param_1 == uStack_180 && (param_2 <= uStack_188)))) {
        bVar17 = uStack_188 < param_2;
        uStack_188 = uStack_188 - param_2;
        uStack_180 = (uStack_180 - param_1) - (ulong)bVar17;
      }
      bVar17 = lVar11 != 0;
      lVar11 = lVar11 + -1;
    } while (bVar17);
    cVar5 = millerrabin2(&uStack_168,lVar13,&uStack_188,&uStack_198,iStack_1a0,&uStack_178);
    if (cVar5 == '\0') {
      uVar6 = 0;
      goto LAB_00101806;
    }
    pbVar16 = pbVar16 + 1;
    if (pbVar16 == &DAT_0010ae9c) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("!\"Lucas prime test failure.  This should not happen\"","src/factor.c",0x54b,
                    "prime2_p");
    }
  } while( true );
}



void factor_part_0_constprop_0(ulong param_1,ulong param_2,ulong *param_3)

{
  byte bVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  char cVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  long *plVar11;
  byte bVar12;
  ulong *puVar13;
  byte *pbVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  byte *pbVar19;
  ulong uVar20;
  
  uVar17 = param_1;
  if ((param_2 & 1) == 0) {
    if (param_2 == 0) {
      uVar17 = 0;
      bVar12 = 0;
      for (uVar16 = param_1; (uVar16 & 1) == 0; uVar16 = uVar16 >> 1 | 0x8000000000000000) {
        bVar12 = bVar12 + 1;
      }
      param_2 = param_1 >> (bVar12 & 0x3f);
      bVar12 = bVar12 + 0x40;
    }
    else {
      bVar12 = 0;
      for (uVar17 = param_2; (uVar17 & 1) == 0; uVar17 = uVar17 >> 1 | 0x8000000000000000) {
        bVar12 = bVar12 + 1;
      }
      uVar17 = param_1 >> (bVar12 & 0x3f);
      param_2 = param_2 >> (bVar12 & 0x3f) | param_1 << (0x40 - bVar12 & 0x3f);
    }
    bVar1 = *(byte *)((long)param_3 + 0xfa);
    puVar9 = param_3 + 2;
    puVar13 = param_3 + 0x1c;
    if (bVar1 != 0) {
      uVar8 = (ulong)(int)(bVar1 - 1);
      uVar16 = uVar8;
      do {
        if (param_3[uVar16 + 2] < 3) {
          if (puVar9[uVar16] == 2) {
            *(byte *)((long)puVar13 + uVar16) = *(byte *)((long)puVar13 + uVar16) + bVar12;
            goto joined_r0x001021c7;
          }
          uVar20 = uVar16 & 0xffffffff;
          lVar15 = (long)((int)uVar16 + 1);
          puVar9 = puVar9 + lVar15;
          puVar13 = (ulong *)((long)puVar13 + lVar15);
          if ((int)(bVar1 - 1) <= (int)uVar16) goto LAB_00101abb;
          break;
        }
        uVar16 = uVar16 - 1;
        uVar20 = uVar16 & 0xffffffff;
      } while ((int)uVar16 != -1);
      do {
        param_3[uVar8 + 3] = param_3[uVar8 + 2];
        *(undefined1 *)((long)param_3 + uVar8 + 0xe1) =
             *(undefined1 *)((long)param_3 + uVar8 + 0xe0);
        uVar8 = uVar8 - 1;
      } while ((int)uVar20 < (int)uVar8);
    }
LAB_00101abb:
    *puVar9 = 2;
    *(byte *)puVar13 = bVar12;
    *(byte *)((long)param_3 + 0xfa) = bVar1 + 1;
  }
joined_r0x001021c7:
  if (uVar17 == 0) {
    uVar8 = 0;
    uVar16 = 3;
  }
  else {
    uVar16 = 3;
    plVar11 = &primes_dtab;
    uVar20 = 0;
    do {
      lVar15 = *plVar11;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = param_2 * lVar15;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar16;
      uVar8 = SUB168(auVar3 * auVar5,8);
      if (uVar8 <= uVar17) {
        uVar2 = plVar11[1];
        uVar18 = param_2 * lVar15;
        do {
          uVar10 = (uVar17 - uVar8) * lVar15;
          if (uVar2 < uVar10) break;
          factor_insert_multiplicity();
          auVar4._8_8_ = 0;
          auVar4._0_8_ = uVar18 * lVar15;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = uVar16;
          uVar8 = SUB168(auVar4 * auVar6,8);
          uVar17 = uVar10;
          param_2 = uVar18;
          uVar18 = uVar18 * lVar15;
        } while (uVar8 <= uVar10);
      }
      uVar8 = uVar20 + 1;
      plVar11 = plVar11 + 2;
      uVar16 = uVar16 + (byte)(&DAT_0010ac01)[uVar20];
    } while ((uVar17 != 0) && (uVar20 = uVar8, uVar8 < 0x29c));
    if (uVar8 == 0x29c) goto LAB_001020f3;
  }
  plVar11 = &primes_dtab + uVar8 * 2;
  pbVar19 = primes_diff8 + uVar8;
  do {
    lVar15 = *plVar11;
    uVar8 = plVar11[1];
    uVar20 = lVar15 * param_2;
    if (uVar8 < uVar20) {
      uVar8 = plVar11[2] * param_2;
      if ((ulong)plVar11[3] < plVar11[2] * param_2) goto LAB_00101c1a;
LAB_00101d64:
      do {
        param_2 = uVar8;
        factor_insert_multiplicity();
        uVar8 = plVar11[2] * param_2;
      } while (plVar11[2] * param_2 <= (ulong)plVar11[3]);
      uVar8 = plVar11[4] * param_2;
      if (plVar11[4] * param_2 <= (ulong)plVar11[5]) goto LAB_00101dd3;
LAB_00101c2c:
      uVar8 = plVar11[6] * param_2;
      if ((ulong)plVar11[7] < plVar11[6] * param_2) goto LAB_00101c3e;
LAB_00101e4b:
      do {
        param_2 = uVar8;
        factor_insert_multiplicity();
        uVar8 = plVar11[6] * param_2;
      } while (plVar11[6] * param_2 <= (ulong)plVar11[7]);
      uVar8 = plVar11[8] * param_2;
      if (plVar11[8] * param_2 <= (ulong)plVar11[9]) goto LAB_00101ec3;
LAB_00101c50:
      uVar8 = plVar11[10] * param_2;
      if ((ulong)plVar11[0xb] < plVar11[10] * param_2) goto LAB_00101c62;
LAB_00101f5e:
      do {
        param_2 = uVar8;
        factor_insert_multiplicity();
        uVar8 = plVar11[10] * param_2;
      } while (plVar11[10] * param_2 <= (ulong)plVar11[0xb]);
      uVar8 = plVar11[0xc] * param_2;
      if (plVar11[0xc] * param_2 <= (ulong)plVar11[0xd]) goto LAB_00102002;
LAB_00101c74:
      uVar8 = plVar11[0xe] * param_2;
      if (plVar11[0xe] * param_2 <= (ulong)plVar11[0xf]) goto LAB_001020ae;
    }
    else {
      do {
        param_2 = uVar20;
        factor_insert_multiplicity();
        uVar20 = param_2 * lVar15;
      } while (uVar20 <= uVar8);
      uVar8 = plVar11[2] * param_2;
      if (plVar11[2] * param_2 <= (ulong)plVar11[3]) goto LAB_00101d64;
LAB_00101c1a:
      uVar8 = plVar11[4] * param_2;
      if ((ulong)plVar11[5] < plVar11[4] * param_2) goto LAB_00101c2c;
LAB_00101dd3:
      do {
        param_2 = uVar8;
        factor_insert_multiplicity();
        uVar8 = plVar11[4] * param_2;
      } while (plVar11[4] * param_2 <= (ulong)plVar11[5]);
      uVar8 = plVar11[6] * param_2;
      if (plVar11[6] * param_2 <= (ulong)plVar11[7]) goto LAB_00101e4b;
LAB_00101c3e:
      uVar8 = plVar11[8] * param_2;
      if ((ulong)plVar11[9] < plVar11[8] * param_2) goto LAB_00101c50;
LAB_00101ec3:
      do {
        param_2 = uVar8;
        factor_insert_multiplicity();
        uVar8 = plVar11[8] * param_2;
      } while (plVar11[8] * param_2 <= (ulong)plVar11[9]);
      uVar8 = plVar11[10] * param_2;
      if (plVar11[10] * param_2 <= (ulong)plVar11[0xb]) goto LAB_00101f5e;
LAB_00101c62:
      uVar8 = plVar11[0xc] * param_2;
      if ((ulong)plVar11[0xd] < plVar11[0xc] * param_2) goto LAB_00101c74;
LAB_00102002:
      do {
        param_2 = uVar8;
        factor_insert_multiplicity();
        uVar8 = plVar11[0xc] * param_2;
      } while (plVar11[0xc] * param_2 <= (ulong)plVar11[0xd]);
      uVar8 = plVar11[0xe] * param_2;
      if (plVar11[0xe] * param_2 <= (ulong)plVar11[0xf]) {
LAB_001020ae:
        do {
          param_2 = uVar8;
          factor_insert_multiplicity();
          uVar8 = plVar11[0xe] * param_2;
        } while (plVar11[0xe] * param_2 <= (ulong)plVar11[0xf]);
      }
    }
    uVar16 = uVar16 + *pbVar19;
    if (param_2 < uVar16 * uVar16) break;
    plVar11 = plVar11 + 0x10;
    pbVar14 = pbVar19 + -0x10a938;
    pbVar19 = pbVar19 + 8;
  } while ((long)pbVar14 < 0x29c);
LAB_001020f3:
  if (uVar17 == 0) {
    if (1 < param_2) {
      cVar7 = prime_p(param_2);
      if (cVar7 == '\0') {
        factor_using_pollard_rho(param_2,1,param_3);
        return;
      }
      factor_insert_multiplicity(param_3,param_2,1);
      return;
    }
  }
  else {
    cVar7 = prime2_p_part_0(uVar17,param_2);
    if (cVar7 == '\0') {
      factor_using_pollard_rho2(uVar17,param_2,1,param_3);
      return;
    }
    if (param_3[1] != 0) {
                    /* WARNING: Subroutine does not return */
      factor_insert_large_part_0();
    }
    *param_3 = param_2;
    param_3[1] = uVar17;
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x0010254f) */

undefined8 prime_p(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  int iVar14;
  undefined1 auVar15 [16];
  char cVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 uVar20;
  uint uVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  int iVar28;
  undefined1 *puVar29;
  ulong uVar30;
  byte *pbVar31;
  long in_FS_OFFSET;
  bool bVar32;
  undefined1 auStack_148 [8];
  undefined8 uStack_140;
  byte bStack_4e;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 < 2) {
LAB_00102478:
    uVar20 = 0;
  }
  else {
    if (0x17ded78 < param_1) {
      uVar30 = 0;
      iVar14 = 0;
      uVar1 = param_1 - 1;
      for (uVar23 = uVar1; (uVar23 & 1) == 0; uVar23 = uVar23 >> 1 | 0x8000000000000000) {
        iVar14 = iVar14 + 1;
      }
      uVar26 = 0;
      uVar17 = uVar1 >> ((byte)iVar14 & 0x3f);
      uVar23 = (ulong)(byte)binvert_table[(uint)(param_1 >> 1) & 0x7f];
      lVar22 = uVar23 * 2 - uVar23 * uVar23 * param_1;
      lVar22 = lVar22 * 2 - lVar22 * lVar22 * param_1;
      iVar28 = 0x40;
      lVar22 = lVar22 * 2 - lVar22 * lVar22 * param_1;
      uVar18 = 1;
      uVar23 = param_1;
      do {
        uVar26 = uVar26 >> 1 | uVar23 << 0x3f;
        uVar23 = uVar23 >> 1;
        if ((uVar23 < uVar18) || ((uVar23 == uVar18 && (uVar26 <= uVar30)))) {
          bVar32 = uVar30 < uVar26;
          uVar30 = uVar30 - uVar26;
          uVar18 = (uVar18 - uVar23) - (ulong)bVar32;
        }
        iVar28 = iVar28 + -1;
      } while (iVar28 != 0);
      uVar23 = 0;
      if (uVar30 < param_1 - uVar30) {
        uVar23 = param_1;
      }
      uVar23 = uVar23 + (uVar30 * 2 - param_1);
      cVar16 = millerrabin(param_1,lVar22,uVar23,uVar17,iVar14,uVar30);
      if (cVar16 == '\0') goto LAB_00102478;
      bStack_4e = 0;
      uStack_140 = 0;
      factor_part_0_constprop_0(0,uVar1,auStack_148);
      uVar21 = (uint)bStack_4e;
      if (bStack_4e != 0) {
        uVar18 = 2;
        pbVar31 = &primes_diff;
        puVar29 = auStack_148;
LAB_001023cd:
        do {
          auVar2._8_8_ = 0;
          auVar2._0_8_ = *(ulong *)(puVar29 + 0x10);
          auVar3._8_8_ = 0;
          auVar3._0_8_ = uVar1;
          uVar19 = SUB168(auVar3 / auVar2,0);
          uVar26 = uVar23;
          uVar27 = uVar23;
          if (((auVar3 / auVar2 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (uVar27 = uVar30, *(ulong *)(puVar29 + 0x10) <= uVar1)) {
            do {
              while( true ) {
                auVar4._8_8_ = 0;
                auVar4._0_8_ = uVar26;
                auVar9._8_8_ = 0;
                auVar9._0_8_ = uVar26;
                uVar24 = SUB168(auVar4 * auVar9,8);
                auVar5._8_8_ = 0;
                auVar5._0_8_ = SUB168(auVar4 * auVar9,0) * lVar22;
                auVar10._8_8_ = 0;
                auVar10._0_8_ = param_1;
                uVar25 = SUB168(auVar5 * auVar10,8);
                uVar26 = uVar24 - uVar25;
                if (uVar24 < uVar25) {
                  uVar26 = uVar26 + param_1;
                }
                uVar19 = uVar19 >> 1;
                if ((uVar19 & 1) == 0) break;
                auVar6._8_8_ = 0;
                auVar6._0_8_ = uVar27;
                auVar11._8_8_ = 0;
                auVar11._0_8_ = uVar26;
                uVar24 = SUB168(auVar6 * auVar11,8);
                auVar7._8_8_ = 0;
                auVar7._0_8_ = SUB168(auVar6 * auVar11,0) * lVar22;
                auVar12._8_8_ = 0;
                auVar12._0_8_ = param_1;
                uVar25 = SUB168(auVar7 * auVar12,8);
                uVar27 = uVar24 - uVar25;
                if (uVar24 < uVar25) {
                  uVar27 = uVar27 + param_1;
                }
              }
            } while (uVar19 != 0);
            if (auStack_148 + (ulong)(uVar21 - 1) * 8 == puVar29) {
              if (uVar30 != uVar27) break;
            }
            else {
              puVar29 = puVar29 + 8;
              if (uVar30 != uVar27) goto LAB_001023cd;
            }
          }
          uVar18 = uVar18 + *pbVar31;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = uVar30;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = uVar18;
          auVar8 = auVar8 * auVar13;
          if (auVar8._8_8_ == 0) {
            uVar23 = auVar8._0_8_ % param_1;
          }
          else {
            if (param_1 <= auVar8._8_8_) {
                    /* WARNING: Subroutine does not return */
              __assert_fail("__r1 < __d1","src/factor.c",0x4de,"prime_p");
            }
            iVar28 = 0x40;
            uVar27 = 0;
            uVar26 = param_1;
            do {
              uVar27 = uVar27 >> 1 | uVar26 << 0x3f;
              uVar26 = uVar26 >> 1;
              auVar15._8_8_ = uVar26;
              auVar15._0_8_ = uVar27;
              if (auVar15 <= auVar8) {
                auVar8 = auVar8 - auVar15;
              }
              uVar23 = auVar8._0_8_;
              iVar28 = iVar28 + -1;
            } while (iVar28 != 0);
          }
          cVar16 = millerrabin(param_1,lVar22,uVar23,uVar17,iVar14);
          if (cVar16 == '\0') goto LAB_00102478;
          pbVar31 = pbVar31 + 1;
          puVar29 = auStack_148;
          if (pbVar31 == &DAT_0010ae9c) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("!\"Lucas prime test failure.  This should not happen\"","src/factor.c",
                          0x4e6,"prime_p");
          }
        } while( true );
      }
    }
    uVar20 = 1;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar20;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong factor_using_pollard_rho(ulong param_1,ulong param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  byte bVar17;
  char cVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  long lVar30;
  int iVar31;
  ulong uVar32;
  long lVar33;
  ulong uVar34;
  long lVar35;
  bool bVar36;
  ulong local_48;
  
  local_48 = param_2;
  if (param_1 < 2) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("__r1 < __d1","src/factor.c",0x5a9,"factor_using_pollard_rho");
  }
LAB_001025b8:
  uVar29 = 0;
  iVar31 = 0x40;
  uVar19 = 1;
  uVar23 = 0;
  uVar25 = param_1;
  do {
    uVar23 = uVar23 >> 1 | uVar25 << 0x3f;
    uVar25 = uVar25 >> 1;
    if ((uVar25 < uVar19) || ((uVar25 == uVar19 && (uVar23 <= uVar29)))) {
      bVar36 = uVar29 < uVar23;
      uVar29 = uVar29 - uVar23;
      uVar19 = (uVar19 - uVar25) - (ulong)bVar36;
    }
    iVar31 = iVar31 + -1;
  } while (iVar31 != 0);
  uVar25 = 0;
  if (uVar29 < param_1 - uVar29) {
    uVar25 = param_1;
  }
  uVar25 = uVar25 + (uVar29 * 2 - param_1);
  if (param_1 <= local_48) {
LAB_00102901:
                    /* WARNING: Subroutine does not return */
    __assert_fail("a < n","src/factor.c",0x5af,"factor_using_pollard_rho");
  }
  lVar33 = 1;
  lVar35 = 1;
  uVar19 = uVar25;
  uVar23 = uVar25;
LAB_00102630:
  uVar34 = 0;
  uVar20 = param_1 >> 1;
  bVar17 = 0;
  for (uVar28 = param_1; (uVar28 & 1) == 0; uVar28 = uVar28 >> 1 | 0x8000000000000000) {
    bVar17 = bVar17 + 1;
  }
  uVar28 = (ulong)(byte)binvert_table[(uint)uVar20 & 0x7f];
  lVar26 = uVar28 * 2 - uVar28 * uVar28 * param_1;
  lVar26 = lVar26 * 2 - lVar26 * lVar26 * param_1;
  lVar30 = lVar26 * 2 - lVar26 * lVar26 * param_1;
  uVar32 = param_1 - local_48;
  lVar21 = local_48 - param_1;
  uVar22 = param_1 >> (bVar17 & 0x3f);
  uVar28 = uVar25;
  lVar26 = lVar33;
LAB_001026b0:
  lVar33 = lVar26;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar23;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar23;
  uVar23 = SUB168(auVar1 * auVar9,8);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = SUB168(auVar1 * auVar9,0) * lVar30;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = param_1;
  uVar27 = SUB168(auVar2 * auVar10,8);
  uVar25 = uVar23 - uVar27;
  if (uVar23 < uVar27) {
    uVar25 = uVar25 + param_1;
  }
  uVar23 = uVar34;
  if (uVar25 < uVar32) {
    uVar23 = param_1;
  }
  uVar23 = uVar23 + uVar25 + lVar21;
  uVar25 = uVar34;
  if (uVar19 < uVar23) {
    uVar25 = param_1;
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar29;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar25 + (uVar19 - uVar23);
  uVar25 = SUB168(auVar3 * auVar11,8);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = SUB168(auVar3 * auVar11,0) * lVar30;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = param_1;
  uVar27 = SUB168(auVar4 * auVar12,8);
  uVar29 = uVar25 - uVar27;
  if (uVar25 < uVar27) {
    uVar29 = uVar29 + param_1;
  }
  uVar25 = uVar28;
  if (((uint)lVar35 & 0x1f) == 1) {
    if ((param_1 & 1) == 0) {
      uVar25 = uVar29 >> 1;
      uVar24 = (uVar22 >> 1) - uVar25;
      uVar27 = uVar22;
      goto joined_r0x0010294b;
    }
    if (uVar29 == 0) goto LAB_001027a6;
    bVar17 = 0;
    for (uVar25 = uVar29; (uVar25 & 1) == 0; uVar25 = uVar25 >> 1 | 0x8000000000000000) {
      bVar17 = bVar17 + 1;
    }
    uVar24 = ((uVar29 >> (bVar17 & 0x3f)) >> 1) - uVar20;
    uVar25 = uVar20;
    if (uVar24 == 0) goto LAB_001027a6;
    do {
      uVar27 = (long)uVar24 >> 0x3f;
      uVar25 = uVar25 + (uVar27 & uVar24);
      bVar17 = 0;
      uVar27 = (uVar24 ^ uVar27) - uVar27;
      for (uVar24 = uVar27; (uVar24 & 1) == 0; uVar24 = uVar24 >> 1 | 0x8000000000000000) {
        bVar17 = bVar17 + 1;
      }
      uVar27 = uVar27 >> (bVar17 & 0x3f);
      uVar24 = (uVar27 >> 1) - uVar25;
joined_r0x0010294b:
    } while (uVar24 != 0);
    uVar25 = uVar23;
    if (1 < uVar27) goto LAB_001027a6;
  }
  lVar35 = lVar35 + -1;
  uVar28 = uVar25;
  lVar26 = lVar33;
  if ((lVar35 == 0) && (uVar28 = uVar23, uVar19 = uVar23, lVar33 != 0)) {
    lVar35 = 0;
    do {
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar28;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar28;
      uVar23 = SUB168(auVar5 * auVar13,8);
      auVar6._8_8_ = 0;
      auVar6._0_8_ = SUB168(auVar5 * auVar13,0) * lVar30;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = param_1;
      uVar28 = SUB168(auVar6 * auVar14,8);
      uVar25 = uVar23 - uVar28;
      if (uVar23 < uVar28) {
        uVar25 = uVar25 + param_1;
      }
      uVar28 = uVar34;
      if (uVar25 < uVar32) {
        uVar28 = param_1;
      }
      lVar35 = lVar35 + 1;
      uVar28 = uVar28 + uVar25 + lVar21;
      lVar26 = lVar33 * 2;
      uVar23 = uVar28;
    } while (lVar33 != lVar35);
  }
  goto LAB_001026b0;
LAB_001027a6:
  do {
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar28;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar28;
    uVar28 = SUB168(auVar7 * auVar15,8);
    auVar8._8_8_ = 0;
    auVar8._0_8_ = SUB168(auVar7 * auVar15,0) * lVar30;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = param_1;
    uVar22 = SUB168(auVar8 * auVar16,8);
    uVar25 = uVar28 - uVar22;
    if (uVar28 < uVar22) {
      uVar25 = uVar25 + param_1;
    }
    uVar28 = uVar34;
    if (uVar25 < uVar32) {
      uVar28 = param_1;
    }
    uVar28 = uVar28 + uVar25 + lVar21;
    uVar25 = uVar34;
    if (uVar19 < uVar28) {
      uVar25 = param_1;
    }
    uVar25 = uVar25 + (uVar19 - uVar28);
    if ((param_1 & 1) == 0) {
      uVar22 = uVar25 >> 1;
      uVar25 = param_1;
    }
    else {
      uVar22 = uVar20;
      if (uVar25 == 0) goto LAB_001029f8;
    }
    while( true ) {
      bVar17 = 0;
      for (uVar27 = uVar25; (uVar27 & 1) == 0; uVar27 = uVar27 >> 1 | 0x8000000000000000) {
        bVar17 = bVar17 + 1;
      }
      uVar25 = uVar25 >> (bVar17 & 0x3f);
      uVar27 = (uVar25 >> 1) - uVar22;
      if (uVar27 == 0) break;
      uVar24 = (long)uVar27 >> 0x3f;
      uVar25 = (uVar27 ^ uVar24) - uVar24;
      uVar22 = uVar22 + (uVar24 & uVar27);
    }
    uVar22 = uVar25 | 1;
  } while ((uVar25 & 0xfffffffffffffffe) == 0);
  if (param_1 == uVar22) goto LAB_001029f8;
  uVar20 = param_1 / uVar22;
  cVar18 = prime_p(uVar22,lVar30,param_1 % uVar22);
  if (cVar18 == '\0') {
    factor_using_pollard_rho(uVar22,local_48 + 1,param_3);
  }
  else {
    factor_insert_multiplicity(param_3,uVar22,1);
  }
  cVar18 = prime_p(uVar20);
  if (cVar18 != '\0') {
    uVar25 = factor_insert_multiplicity(param_3,uVar20,1);
    return uVar25;
  }
  uVar23 = uVar23 % uVar20;
  uVar19 = uVar19 % uVar20;
  uVar25 = uVar28 % uVar20;
  if (uVar20 == 1) {
    return uVar28 / uVar20;
  }
  param_1 = uVar20;
  if (uVar20 <= local_48) goto LAB_00102901;
  goto LAB_00102630;
LAB_001029f8:
  local_48 = local_48 + 1;
  goto LAB_001025b8;
}



/* WARNING: Removing unreachable block (ram,0x00102d75) */
/* WARNING: Removing unreachable block (ram,0x00102da6) */

void factor_using_pollard_rho2(ulong param_1,ulong param_2,ulong param_3,undefined1 (*param_4) [16])

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  char cVar25;
  ulong uVar26;
  ulong uVar27;
  long lVar28;
  ulong uVar29;
  long lVar30;
  ulong uVar31;
  long lVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  long lVar36;
  long lVar37;
  long in_FS_OFFSET;
  bool bVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  ulong local_b0;
  ulong local_a8;
  ulong local_a0;
  ulong local_98;
  undefined8 local_78;
  undefined8 local_70;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b0 = param_3;
LAB_00102a92:
  auVar23._8_8_ = 0;
  auVar23._0_8_ = local_b0;
  local_98 = (ulong)(param_1 < 2);
  lVar30 = (ulong)(-(uint)(param_1 < 2) & 0x40) + 0x3f;
  local_a0 = (ulong)(1 < param_1);
  do {
    local_a0 = local_a0 << 1 | local_98 >> 0x3f;
    local_98 = local_98 * 2;
    if ((param_1 < local_a0) || ((param_1 == local_a0 && (param_2 <= local_98)))) {
      bVar38 = local_98 < param_2;
      local_98 = local_98 - param_2;
      local_a0 = (local_a0 - param_1) - (ulong)bVar38;
    }
    bVar38 = lVar30 != 0;
    lVar30 = lVar30 + -1;
  } while (bVar38);
  uVar31 = local_98 * 2;
  uVar26 = local_a0 * 2 + (ulong)CARRY8(local_98,local_98);
  if ((param_1 < uVar26) || ((param_1 == uVar26 && (param_2 <= uVar31)))) {
    bVar38 = uVar31 < param_2;
    uVar31 = uVar31 - param_2;
    uVar26 = (uVar26 - param_1) - (ulong)bVar38;
  }
  auVar41._8_8_ = uVar26;
  auVar41._0_8_ = uVar31;
  if ((param_1 != 0) || (param_2 != 1)) {
    local_a8 = 1;
    uVar31 = 1;
    auVar42 = auVar41;
    auVar43 = auVar41;
LAB_00102b50:
    auVar22._8_8_ = param_1;
    auVar22._0_8_ = param_2;
    uVar26 = (ulong)(byte)binvert_table[(uint)(param_2 >> 1) & 0x7f];
    lVar30 = uVar26 * 2 - uVar26 * uVar26 * param_2;
    lVar32 = lVar30 * 2 - lVar30 * lVar30 * param_2;
    lVar36 = lVar32 * lVar32 * param_2;
    lVar30 = lVar32 * 2 - lVar36;
    uVar26 = local_a8;
LAB_00102bb0:
    do {
      local_a8 = uVar26;
      local_70 = auVar42._8_8_;
      local_78 = auVar42._0_8_;
      uVar26 = mulredc2(&local_48,auVar41._8_8_,auVar41._0_8_,auVar41._8_8_,auVar41._0_8_,param_1,
                        param_2,lVar30);
      uVar27 = uVar26 + local_b0;
      uVar33 = local_48 + CARRY8(uVar26,local_b0);
      if ((param_1 < uVar33) || ((uVar33 == param_1 && (param_2 <= uVar27)))) {
        bVar38 = uVar27 < param_2;
        uVar27 = uVar27 - param_2;
        uVar33 = (uVar33 - param_1) - (ulong)bVar38;
      }
      auVar40._8_8_ = uVar33;
      auVar40._0_8_ = uVar27;
      auVar41 = auVar42 - auVar40;
      if (auVar41._8_8_ < 0) {
        auVar41 = auVar41 + auVar22;
      }
      lVar37 = lVar30;
      local_98 = mulredc2(&local_48,local_a0,local_98,auVar41._8_8_,auVar41._0_8_,param_1,param_2);
      local_a0 = local_48;
      auVar41 = auVar43;
      if (((uint)uVar31 & 0x1f) == 1) {
        if ((param_2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("b0 & 1","src/factor.c",0x1d1,__PRETTY_FUNCTION___4);
        }
        auVar39 = auVar22;
        if (local_98 != 0 || local_48 != 0) {
          auVar39 = gcd2_odd_part_0(local_48,local_98,param_1,param_2,lVar37);
        }
        if ((auVar39._8_8_ != 0) || (auVar41 = auVar40, auVar39._0_8_ != 1)) goto LAB_00102ee6;
      }
      auVar24._8_8_ = uVar33;
      auVar24._0_8_ = uVar27;
      uVar31 = uVar31 - 1;
      uVar26 = local_a8;
      auVar43 = auVar41;
      auVar41 = auVar40;
      if ((uVar31 == 0) && (auVar43 = auVar24, auVar42 = auVar40, local_a8 != 0)) {
        lVar37 = lVar36 + lVar32 * -2;
        if ((long)uVar33 < 0) {
LAB_00102dce:
                    /* WARNING: Subroutine does not return */
          __assert_fail("(a1 >> (64 - 1)) == 0","src/factor.c",0x3d2,__PRETTY_FUNCTION___7);
        }
        if ((long)param_1 < 0) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("(m1 >> (64 - 1)) == 0","src/factor.c",0x3d4,__PRETTY_FUNCTION___7);
        }
        uVar27 = 0;
        auVar43 = auVar40;
        do {
          while( true ) {
            uVar35 = auVar43._8_8_;
            uVar29 = auVar43._0_8_;
            auVar2._8_8_ = 0;
            auVar2._0_8_ = uVar29;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = uVar29;
            uVar33 = SUB168(auVar2 * auVar10,8);
            lVar28 = SUB168(auVar2 * auVar10,0);
            uVar31 = lVar37 * lVar28;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = uVar29;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = uVar35;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = uVar31;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = param_2;
            uVar34 = SUB168(auVar4 * auVar12,8);
            auVar5._8_8_ = 0;
            auVar5._0_8_ = uVar31;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = param_1;
            uVar31 = (SUB168(auVar3 * auVar11,0) + 1) - (ulong)(lVar28 == 0);
            uVar26 = uVar31 + uVar34;
            auVar18._8_8_ =
                 SUB168(auVar3 * auVar11,8) + (ulong)CARRY8(uVar31,uVar34) +
                 (ulong)CARRY8(uVar26,uVar33);
            auVar18._0_8_ = uVar26 + uVar33;
            auVar18 = auVar5 * auVar13 + auVar18;
            auVar20._8_8_ = 0;
            auVar20._0_8_ = auVar18._0_8_;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = auVar18._8_8_;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = uVar35;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = uVar29;
            auVar20 = auVar6 * auVar14 + auVar20;
            lVar28 = auVar20._0_8_;
            uVar34 = auVar20._8_8_;
            uVar31 = lVar37 * lVar28;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = uVar35;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = uVar35;
            auVar21 = auVar7 * auVar15 + auVar21;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar31;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = param_2;
            uVar33 = SUB168(auVar8 * auVar16,8);
            auVar9._8_8_ = 0;
            auVar9._0_8_ = uVar31;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = param_1;
            uVar31 = (auVar21._0_8_ + 1) - (ulong)(lVar28 == 0);
            uVar26 = uVar31 + uVar33;
            auVar19._8_8_ =
                 auVar21._8_8_ + (ulong)CARRY8(uVar31,uVar33) + (ulong)CARRY8(uVar26,uVar34);
            auVar19._0_8_ = uVar26 + uVar34;
            auVar19 = auVar9 * auVar17 + auVar19;
            if (auVar22 <= auVar19) {
              auVar19 = auVar19 - auVar22;
            }
            uVar27 = uVar27 + 1;
            auVar43 = auVar19 + auVar23;
            uVar31 = local_a8;
            uVar26 = local_a8 * 2;
            if (auVar43 < auVar22) break;
            auVar43 = auVar43 - auVar22;
            auVar41 = auVar43;
            if (local_a8 <= uVar27) goto LAB_00102bb0;
            if (auVar43._8_8_ < 0) goto LAB_00102dce;
          }
          auVar41 = auVar43;
        } while (uVar27 < local_a8);
      }
    } while( true );
  }
LAB_00103185:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
  goto LAB_001032d8;
  while (uVar35 == 1) {
LAB_00102ee6:
    uVar26 = mulredc2(&local_48,auVar43._8_8_,auVar43._0_8_,auVar43._8_8_,auVar43._0_8_,param_1,
                      param_2,lVar30);
    uVar34 = uVar26 + local_b0;
    uVar26 = local_48 + CARRY8(uVar26,local_b0);
    if ((param_1 < uVar26) || ((uVar26 == param_1 && (param_2 <= uVar34)))) {
      bVar38 = uVar34 < param_2;
      uVar34 = uVar34 - param_2;
      uVar26 = (uVar26 - param_1) - (ulong)bVar38;
    }
    auVar43._8_8_ = uVar26;
    auVar43._0_8_ = uVar34;
    auVar41 = auVar42 - auVar43;
    if (auVar41._8_8_ < 0) {
      auVar41 = auVar41 + auVar22;
    }
    auVar40 = auVar22;
    if (auVar41._8_8_ != 0 || auVar41._0_8_ != 0) {
      auVar40 = gcd2_odd_part_0(auVar41._8_8_,auVar41._0_8_,param_1);
    }
    lVar32 = auVar40._8_8_;
    uVar35 = auVar40._0_8_;
    if (lVar32 != 0) {
      if (auVar40 == auVar22) {
        local_b0 = local_b0 + 1;
        goto LAB_00102a92;
      }
      bVar1 = binvert_table[(uint)(uVar35 >> 1) & 0x7f];
      cVar25 = prime2_p_part_0(lVar32,uVar35);
      if (cVar25 == '\0') {
        factor_using_pollard_rho2(lVar32,uVar35,local_b0 + 1,param_4);
      }
      else {
        if (*(long *)(*param_4 + 8) != 0) goto LAB_0010321e;
        *param_4 = auVar40;
      }
      uVar31 = (ulong)bVar1;
      lVar30 = uVar31 * 2 - uVar31 * uVar31 * uVar35;
      lVar30 = lVar30 * 2 - lVar30 * lVar30 * uVar35;
      param_2 = param_2 * (lVar30 * 2 - lVar30 * lVar30 * uVar35);
      goto LAB_0010310d;
    }
  }
  uVar29 = (ulong)(byte)binvert_table[(uint)(uVar35 >> 1) & 0x7f];
  lVar30 = uVar29 * 2 - uVar29 * uVar29 * uVar35;
  lVar30 = lVar30 * 2 - lVar30 * lVar30 * uVar35;
  lVar30 = lVar30 * 2 - lVar30 * lVar30 * uVar35;
  param_2 = param_2 * lVar30;
  if (param_1 < uVar35) {
    param_1 = 0;
  }
  else {
    auVar42._8_8_ = 0;
    auVar42._0_8_ = param_2;
    auVar39._8_8_ = 0;
    auVar39._0_8_ = uVar35;
    param_1 = (param_1 - SUB168(auVar42 * auVar39,8)) * lVar30;
  }
  cVar25 = prime_p();
  if (cVar25 == '\0') {
    factor_using_pollard_rho(uVar35,local_b0 + 1,param_4);
  }
  else {
    factor_insert_multiplicity(param_4,uVar35,1);
  }
  if (param_1 == 0) goto LAB_0010310d;
  cVar25 = prime2_p_part_0(param_1,param_2);
  if (cVar25 != '\0') {
    if (*(long *)(*param_4 + 8) != 0) {
LAB_0010321e:
                    /* WARNING: Subroutine does not return */
      factor_insert_large_part_0();
    }
    *(ulong *)*param_4 = param_2;
    *(ulong *)(*param_4 + 8) = param_1;
    goto LAB_00103185;
  }
  auVar41 = mod2(uVar33,uVar27,param_1,param_2);
  auVar42 = mod2(local_70,local_78,param_1,param_2);
  auVar43 = mod2(uVar26,uVar34,param_1,param_2);
  goto LAB_00102b50;
LAB_0010310d:
  cVar25 = prime_p(param_2);
  if (cVar25 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      factor_using_pollard_rho(param_2,local_b0,param_4);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    factor_insert_multiplicity(param_4,param_2,1);
    return;
  }
LAB_001032d8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void mp_factor_using_pollard_rho_constprop_0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_1f0;
  long local_1c8;
  long local_1b0;
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (dev_debug != '\0') {
    __fprintf_chk(_stderr,2,"[pollard-rho (%lu)] ",1);
  }
  lVar4 = 1;
  mpz_va_init_constprop_0(mpz_init,local_128,local_118,0);
  mpz_init_set_si(local_148,2);
  mpz_init_set_si(local_168,2);
  mpz_init_set_si(local_158,2);
  mpz_init_set_ui(local_138,1);
  lVar6 = 1;
LAB_001033f6:
  iVar3 = mpz_cmp_ui(param_1,1);
  lVar5 = lVar4;
  if (iVar3 != 0) {
LAB_00103422:
    lVar4 = lVar5;
    mpz_mul(local_128,local_168,local_168);
    mpz_mod(local_168,local_128,param_1);
    mpz_add_ui(local_168,local_168,1);
    mpz_sub(local_128,local_158,local_168);
    mpz_mul(local_118,local_138,local_128);
    mpz_mod(local_138,local_118,param_1);
    if (((uint)lVar4 & 0x1f) == 1) {
      mpz_gcd(local_128,local_138,param_1);
      iVar3 = mpz_cmp_ui(local_128,1);
      if (iVar3 != 0) goto LAB_00103570;
      mpz_set(local_148,local_168);
    }
    lVar5 = lVar4 + -1;
    if (lVar4 + -1 == 0) {
      lVar4 = lVar4 + -1;
      mpz_set(local_158,local_168);
      if (lVar6 != 0) {
        do {
          lVar4 = lVar4 + 1;
          mpz_mul(local_128,local_168,local_168);
          mpz_mod(local_168,local_128,param_1);
          mpz_add_ui(local_168,local_168,1);
        } while (lVar4 != lVar6);
      }
      mpz_set(local_148,local_168);
      lVar5 = lVar6;
      lVar6 = lVar6 * 2;
    }
    goto LAB_00103422;
  }
LAB_00103edc:
  mpz_va_init_constprop_1(mpz_clear,local_138,local_118,local_128,local_158,local_168,local_148);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00103570:
  do {
    mpz_mul(local_128,local_148,local_148);
    mpz_mod(local_148,local_128,param_1);
    mpz_add_ui(local_148,local_148,1);
    mpz_sub(local_128,local_158,local_148);
    mpz_gcd(local_128,local_128,param_1);
    iVar3 = mpz_cmp_ui(local_128,1);
  } while (iVar3 == 0);
  mpz_divexact(param_1,param_1,local_128);
  iVar3 = mpz_cmp_ui(local_128,1);
  if ((iVar3 < 1) ||
     ((iVar3 = mpz_cmp_ui(local_128,0x17ded79), -1 < iVar3 &&
      (cVar2 = mp_prime_p_part_0(local_128), cVar2 == '\0')))) {
    if ((dev_debug != '\0') &&
       (fwrite("[composite factor--restarting pollard-rho] ",1,0x2b,_stderr), dev_debug != '\0')) {
      __fprintf_chk(_stderr,2,"[pollard-rho (%lu)] ",2);
    }
    mpz_va_init_constprop_0(mpz_init,local_c8,local_b8,0);
    mpz_init_set_si(local_e8,2);
    mpz_init_set_si(local_108,2);
    mpz_init_set_si(local_f8,2);
    mpz_init_set_ui(local_d8,1);
    local_1c8 = 1;
    local_1b0 = 1;
LAB_00103701:
    iVar3 = mpz_cmp_ui(local_128,1);
    lVar5 = local_1b0;
    if (iVar3 != 0) {
LAB_0010373a:
      local_1b0 = lVar5;
      mpz_mul(local_c8,local_108,local_108);
      mpz_mod(local_108,local_c8,local_128);
      mpz_add_ui(local_108,local_108,2);
      mpz_sub(local_c8,local_f8,local_108);
      mpz_mul(local_b8,local_d8,local_c8);
      mpz_mod(local_d8,local_b8,local_128);
      if (((uint)local_1b0 & 0x1f) == 1) {
        mpz_gcd(local_c8,local_d8,local_128);
        iVar3 = mpz_cmp_ui(local_c8,1);
        if (iVar3 != 0) goto LAB_00103870;
        mpz_set(local_e8,local_108);
      }
      lVar5 = local_1b0 + -1;
      if (local_1b0 + -1 == 0) {
        local_1b0 = local_1b0 + -1;
        mpz_set(local_f8,local_108);
        if (local_1c8 != 0) {
          do {
            local_1b0 = local_1b0 + 1;
            mpz_mul(local_c8,local_108,local_108);
            mpz_mod(local_108,local_c8,local_128);
            mpz_add_ui(local_108,local_108,2);
          } while (local_1b0 != local_1c8);
        }
        mpz_set(local_e8,local_108);
        lVar5 = local_1c8;
        local_1c8 = local_1c8 * 2;
      }
      goto LAB_0010373a;
    }
LAB_00103d98:
    mpz_va_init_constprop_1(mpz_clear,local_d8,local_b8,local_c8,local_f8,local_108,local_e8,0);
  }
  else {
    mp_factor_insert(param_2,local_128);
  }
  iVar3 = mpz_cmp_ui(param_1,1);
  if ((0 < iVar3) &&
     ((iVar3 = mpz_cmp_ui(param_1,0x17ded79), iVar3 < 0 ||
      (cVar2 = mp_prime_p_part_0(param_1), cVar2 != '\0')))) {
    mp_factor_insert(param_2,param_1);
    goto LAB_00103edc;
  }
  mpz_mod(local_168,local_168,param_1);
  mpz_mod(local_158,local_158,param_1);
  mpz_mod(local_148,local_148,param_1);
  goto LAB_001033f6;
LAB_00103870:
  do {
    mpz_mul(local_c8,local_e8,local_e8);
    mpz_mod(local_e8,local_c8,local_128);
    mpz_add_ui(local_e8,local_e8,2);
    mpz_sub(local_c8,local_f8,local_e8);
    mpz_gcd(local_c8,local_c8,local_128);
    iVar3 = mpz_cmp_ui(local_c8,1);
  } while (iVar3 == 0);
  mpz_divexact(local_128,local_128,local_c8);
  iVar3 = mpz_cmp_ui(local_c8,1);
  if ((iVar3 < 1) ||
     ((iVar3 = mpz_cmp_ui(local_c8,0x17ded79), -1 < iVar3 &&
      (cVar2 = mp_prime_p_part_0(local_c8), cVar2 == '\0')))) {
    if ((dev_debug != '\0') &&
       (fwrite("[composite factor--restarting pollard-rho] ",1,0x2b,_stderr), dev_debug != '\0')) {
      __fprintf_chk(_stderr,2,"[pollard-rho (%lu)] ",3);
    }
    mpz_va_init_constprop_0(mpz_init,local_68,local_58,0);
    mpz_init_set_si(local_88,2);
    mpz_init_set_si(local_a8,2);
    mpz_init_set_si(local_98,2);
    mpz_init_set_ui(local_78,1);
    local_1f0 = 1;
    lVar5 = 1;
LAB_001039cd:
    iVar3 = mpz_cmp_ui(local_c8,1);
    lVar1 = lVar5;
    if (iVar3 != 0) {
LAB_001039f2:
      lVar5 = lVar1;
      mpz_mul(local_68,local_a8,local_a8);
      mpz_mod(local_a8,local_68,local_c8);
      mpz_add_ui(local_a8,local_a8,3);
      mpz_sub(local_68,local_98,local_a8);
      mpz_mul(local_58,local_78,local_68);
      mpz_mod(local_78,local_58,local_c8);
      if (((uint)lVar5 & 0x1f) == 1) {
        mpz_gcd(local_68,local_78,local_c8);
        iVar3 = mpz_cmp_ui(local_68,1);
        if (iVar3 != 0) goto LAB_00103b38;
        mpz_set(local_88,local_a8);
      }
      lVar1 = lVar5 + -1;
      if (lVar5 + -1 == 0) {
        lVar5 = lVar5 + -1;
        mpz_set(local_98,local_a8);
        if (local_1f0 != 0) {
          do {
            lVar5 = lVar5 + 1;
            mpz_mul(local_68,local_a8,local_a8);
            mpz_mod(local_a8,local_68,local_c8);
            mpz_add_ui(local_a8,local_a8,3);
          } while (lVar5 != local_1f0);
        }
        mpz_set(local_88,local_a8);
        lVar1 = local_1f0;
        local_1f0 = local_1f0 * 2;
      }
      goto LAB_001039f2;
    }
LAB_00103c87:
    mpz_va_init_constprop_1(mpz_clear,local_78,local_58,local_68,local_98,local_a8,local_88,0);
  }
  else {
    mp_factor_insert(param_2,local_c8);
  }
  iVar3 = mpz_cmp_ui(local_128,1);
  if ((0 < iVar3) &&
     ((iVar3 = mpz_cmp_ui(local_128,0x17ded79), iVar3 < 0 ||
      (cVar2 = mp_prime_p_part_0(local_128), cVar2 != '\0')))) {
    mp_factor_insert(param_2,local_128);
    goto LAB_00103d98;
  }
  mpz_mod(local_108,local_108,local_128);
  mpz_mod(local_f8,local_f8,local_128);
  mpz_mod(local_e8,local_e8,local_128);
  goto LAB_00103701;
LAB_00103b38:
  do {
    mpz_mul(local_68,local_88,local_88);
    mpz_mod(local_88,local_68,local_c8);
    mpz_add_ui(local_88,local_88,3);
    mpz_sub(local_68,local_98,local_88);
    mpz_gcd(local_68,local_68,local_c8);
    iVar3 = mpz_cmp_ui(local_68,1);
  } while (iVar3 == 0);
  mpz_divexact(local_c8,local_c8,local_68);
  iVar3 = mpz_cmp_ui(local_68,1);
  if ((iVar3 < 1) ||
     ((iVar3 = mpz_cmp_ui(local_68,0x17ded79), -1 < iVar3 &&
      (cVar2 = mp_prime_p_part_0(local_68), cVar2 == '\0')))) {
    if (dev_debug != '\0') {
      fwrite("[composite factor--restarting pollard-rho] ",1,0x2b,_stderr);
    }
    mp_factor_using_pollard_rho(local_68,4,param_2);
  }
  else {
    mp_factor_insert(param_2,local_68);
  }
  iVar3 = mpz_cmp_ui(local_c8,1);
  if ((0 < iVar3) &&
     ((iVar3 = mpz_cmp_ui(local_c8,0x17ded79), iVar3 < 0 ||
      (cVar2 = mp_prime_p_part_0(local_c8), cVar2 != '\0')))) {
    mp_factor_insert(param_2,local_c8);
    goto LAB_00103c87;
  }
  mpz_mod(local_a8,local_a8,local_c8);
  mpz_mod(local_98,local_98,local_c8);
  mpz_mod(local_88,local_88,local_c8);
  goto LAB_001039cd;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void mp_factor(undefined8 param_1,undefined1 (*param_2) [16])

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined1 local_68 [16];
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *param_2 = (undefined1  [16])0x0;
  param_2[1] = (undefined1  [16])0x0;
  iVar2 = mpz_sgn();
  if (iVar2 == 0) {
LAB_00104008:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
LAB_0010423a:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  if (dev_debug != '\0') {
    fwrite("[trial division] ",1,0x11,_stderr);
  }
  mpz_init();
  lVar3 = mpz_scan1(param_1,0);
  mpz_fdiv_q_2exp(param_1,param_1,lVar3);
  if (lVar3 != 0) {
    do {
      mpz_init_set_ui(local_58,2);
      mp_factor_insert(param_2,local_58);
      mpz_clear(local_58);
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  lVar4 = 1;
  lVar3 = 3;
  do {
    iVar2 = mpz_divisible_ui_p(param_1,lVar3);
    while (iVar2 == 0) {
      lVar3 = lVar3 + (ulong)(byte)(&primes_diff)[lVar4];
      iVar2 = mpz_cmp_ui(param_1,lVar3 * lVar3);
      if ((iVar2 < 0) || (lVar4 + 1 == 0x29d)) {
        mpz_clear(local_68);
        iVar2 = mpz_cmp_ui(param_1,1);
        if (iVar2 == 0) goto LAB_00104008;
        if (dev_debug != '\0') {
          fwrite("[is number prime?] ",1,0x13,_stderr);
        }
        iVar2 = mpz_cmp_ui(param_1,1);
        if ((iVar2 < 1) ||
           ((iVar2 = mpz_cmp_ui(param_1,0x17ded79), -1 < iVar2 &&
            (cVar1 = mp_prime_p_part_0(param_1), cVar1 == '\0')))) {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            mp_factor_using_pollard_rho_constprop_0(param_1,param_2);
            return;
          }
        }
        else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          mp_factor_insert(param_2,param_1);
          return;
        }
        goto LAB_0010423a;
      }
      iVar2 = mpz_divisible_ui_p(param_1,lVar3);
      lVar4 = lVar4 + 1;
    }
    mpz_tdiv_q_ui(param_1,param_1,lVar3);
    mpz_init_set_ui(local_58,lVar3);
    mp_factor_insert(param_2,local_58);
    mpz_clear(local_58);
  } while( true );
}



undefined8 mp_prime_p_part_0(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 *puVar7;
  long in_FS_OFFSET;
  void *local_a8;
  void *local_a0;
  long local_98;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  mpz_va_init_constprop_0(mpz_init,local_88,local_78,local_68,local_58,0);
  mpz_sub_ui(local_68,param_1,1);
  uVar2 = mpz_scan1(local_68,0);
  mpz_tdiv_q_2exp(local_88,local_68,uVar2);
  mpz_set_ui(local_78,2);
  mpz_powm(local_58,local_78,local_88,param_1);
  iVar1 = mpz_cmp_ui(local_58,1);
  if ((iVar1 != 0) && (iVar1 = mpz_cmp(local_58,local_68), iVar1 != 0)) {
    uVar4 = 1;
    if (1 < uVar2) {
      do {
        mpz_powm_ui(local_58,local_58,2,param_1);
        iVar1 = mpz_cmp(local_58,local_68);
        if (iVar1 == 0) goto LAB_001042f7;
        iVar1 = mpz_cmp_ui(local_58,1);
      } while ((iVar1 != 0) && (uVar4 = uVar4 + 1, uVar2 != uVar4));
    }
    uVar5 = 0;
LAB_00104487:
    mpz_va_init_constprop_1(mpz_clear,local_88,local_78,local_68,local_58,0);
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return uVar5;
  }
LAB_001042f7:
  puVar7 = &primes_diff;
  mpz_set(local_58,local_68);
  mp_factor(local_58,&local_a8);
LAB_00104320:
  if (local_98 < 1) {
    uVar5 = 1;
    goto LAB_00104473;
  }
  lVar3 = 0;
  do {
    mpz_divexact(local_58,local_68,(void *)(lVar3 * 0x10 + (long)local_a8));
    mpz_powm(local_58,local_78,local_58,param_1);
    iVar1 = mpz_cmp_ui(local_58,1);
    if (local_98 <= lVar3 + 1) {
      if (iVar1 != 0) {
        uVar5 = 1;
        goto LAB_0010444f;
      }
      break;
    }
    lVar3 = lVar3 + 1;
  } while (iVar1 != 0);
  mpz_add_ui(local_78,local_78,*puVar7);
  mpz_powm(local_58,local_78,local_88,param_1);
  iVar1 = mpz_cmp_ui(local_58,1);
  if ((iVar1 != 0) && (iVar1 = mpz_cmp(local_58,local_68), iVar1 != 0)) {
    if (uVar2 < 2) {
LAB_00104448:
      uVar5 = 0;
LAB_0010444f:
      if (0 < local_98) {
        lVar3 = 0;
        do {
          lVar6 = lVar3 + 1;
          mpz_clear((void *)(lVar3 * 0x10 + (long)local_a8));
          lVar3 = lVar6;
        } while (lVar6 < local_98);
      }
LAB_00104473:
      free(local_a8);
      free(local_a0);
      goto LAB_00104487;
    }
    uVar4 = 1;
    while( true ) {
      mpz_powm_ui(local_58,local_58,2,param_1);
      iVar1 = mpz_cmp(local_58,local_68);
      if (iVar1 == 0) break;
      iVar1 = mpz_cmp_ui(local_58,1);
      if ((iVar1 == 0) || (uVar4 = uVar4 + 1, uVar2 == uVar4)) goto LAB_00104448;
    }
  }
  puVar7 = puVar7 + 1;
  if (puVar7 == &DAT_0010ae9c) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("!\"Lucas prime test failure.  This should not happen\"","src/factor.c",0x595,
                  "mp_prime_p");
  }
  goto LAB_00104320;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void mp_factor_using_pollard_rho(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long in_FS_OFFSET;
  long local_c0;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (dev_debug != '\0') {
    __fprintf_chk(_stderr,2,"[pollard-rho (%lu)] ",param_2);
  }
  lVar4 = 1;
  mpz_va_init_constprop_0(mpz_init,local_68,local_58,0);
  mpz_init_set_si(local_88,2);
  mpz_init_set_si(local_a8,2);
  mpz_init_set_si(local_98,2);
  mpz_init_set_ui(local_78,1);
  local_c0 = 1;
LAB_00104631:
  iVar3 = mpz_cmp_ui(param_1,1);
  lVar1 = lVar4;
  if (iVar3 != 0) {
LAB_0010465a:
    lVar4 = lVar1;
    mpz_mul(local_68,local_a8,local_a8);
    mpz_mod(local_a8,local_68,param_1);
    mpz_add_ui(local_a8,local_a8,param_2);
    mpz_sub(local_68,local_98,local_a8);
    mpz_mul(local_58,local_78,local_68);
    mpz_mod(local_78,local_58,param_1);
    if (((uint)lVar4 & 0x1f) == 1) {
      mpz_gcd(local_68,local_78,param_1);
      iVar3 = mpz_cmp_ui(local_68,1);
      if (iVar3 != 0) goto LAB_00104780;
      mpz_set(local_88,local_a8);
    }
    lVar1 = lVar4 + -1;
    if (lVar4 + -1 == 0) {
      lVar4 = lVar4 + -1;
      mpz_set(local_98,local_a8);
      if (local_c0 != 0) {
        do {
          lVar4 = lVar4 + 1;
          mpz_mul(local_68,local_a8,local_a8);
          mpz_mod(local_a8,local_68,param_1);
          mpz_add_ui(local_a8,local_a8,param_2);
        } while (local_c0 != lVar4);
      }
      mpz_set(local_88,local_a8);
      lVar1 = local_c0;
      local_c0 = local_c0 * 2;
    }
    goto LAB_0010465a;
  }
LAB_001048c5:
  mpz_va_init_constprop_1(mpz_clear,local_78,local_58,local_68,local_98,local_a8,local_88);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00104780:
  do {
    mpz_mul(local_68,local_88);
    mpz_mod(local_88,local_68,param_1);
    mpz_add_ui(local_88,local_88,param_2);
    mpz_sub(local_68,local_98,local_88);
    mpz_gcd(local_68,local_68,param_1);
    iVar3 = mpz_cmp_ui(local_68,1);
  } while (iVar3 == 0);
  mpz_divexact(param_1,param_1,local_68);
  iVar3 = mpz_cmp_ui(local_68,1);
  if ((iVar3 < 1) ||
     ((iVar3 = mpz_cmp_ui(local_68,0x17ded79), -1 < iVar3 &&
      (cVar2 = mp_prime_p_part_0(local_68), cVar2 == '\0')))) {
    if (dev_debug != '\0') {
      fwrite("[composite factor--restarting pollard-rho] ",1,0x2b,_stderr);
    }
    mp_factor_using_pollard_rho(local_68,param_2 + 1,param_3);
  }
  else {
    mp_factor_insert(param_3,local_68);
  }
  iVar3 = mpz_cmp_ui(param_1,1);
  if ((0 < iVar3) &&
     ((iVar3 = mpz_cmp_ui(param_1,0x17ded79), iVar3 < 0 ||
      (cVar2 = mp_prime_p_part_0(param_1), cVar2 != '\0')))) {
    mp_factor_insert(param_3,param_1);
    goto LAB_001048c5;
  }
  mpz_mod(local_a8,local_a8,param_1);
  mpz_mod(local_98,local_98,param_1);
  mpz_mod(local_88,local_88,param_1);
  goto LAB_00104631;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 print_factors(char *param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  char *pcVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  void *pvVar14;
  bool bVar15;
  byte *pbVar16;
  ulong uVar17;
  ulong uVar18;
  byte *pbVar19;
  ulong *puVar20;
  uint uVar21;
  char *pcVar22;
  char *pcVar23;
  char *pcVar24;
  char *pcVar25;
  char *pcVar26;
  char *pcVar27;
  long lVar28;
  long in_FS_OFFSET;
  byte bVar29;
  void *local_168;
  void *local_160;
  long local_158;
  undefined8 local_148;
  long local_140;
  byte local_68 [26];
  byte local_4e;
  long local_40;
  
  bVar29 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = *param_1;
  while (cVar1 == ' ') {
    pcVar22 = param_1 + 1;
    param_1 = param_1 + 1;
    cVar1 = *pcVar22;
  }
  bVar15 = true;
  pbVar19 = (byte *)(param_1 + (cVar1 == '+'));
  pbVar16 = pbVar19;
  do {
    bVar2 = *pbVar16;
    pbVar16 = pbVar16 + 1;
    if (bVar2 == 0) {
      if (!bVar15) {
        uVar17 = 0;
        uVar18 = 0;
        pbVar16 = pbVar19;
        goto LAB_00104a2f;
      }
      break;
    }
    bVar15 = false;
  } while (bVar2 - 0x30 < 10);
  uVar6 = quote();
  uVar7 = dcgettext(0,"%s is not a valid positive integer",5);
  error(0,0,uVar7,uVar6);
  uVar6 = 0;
  goto LAB_001049f0;
LAB_00104e5d:
  bVar3 = *pbVar16;
  if (bVar3 != 0) {
    uVar21 = 0;
    bVar15 = (bool)(bVar3 != 1 & bVar2);
    uVar17 = *(ulong *)((long)&local_148 * -7 + -0x6f0 + (long)pbVar16 * 8);
LAB_00104e9d:
    pcVar25[0x105680] = ' ';
    pcVar24 = &dev_debug;
    uVar18 = uVar17;
    do {
      pcVar10 = pcVar24;
      pcVar24 = pcVar10 + -1;
      *pcVar24 = (char)uVar18 + (char)(uVar18 / 10) * -10 + '0';
      bVar4 = 9 < uVar18;
      uVar18 = uVar18 / 10;
    } while (bVar4);
    pcVar26 = pcVar25 + 0x105681;
    pcVar23 = pcVar24;
    pcVar27 = pcVar26;
    if (((0x10767fU - (long)pcVar24 < 7) || (&dev_debug < pcVar10)) ||
       ((ulong)((long)pcVar26 - (long)pcVar10) < 0xf)) {
      do {
        pcVar25 = pcVar23 + (ulong)bVar29 * -2 + 1;
        *pcVar27 = *pcVar23;
        pcVar23 = pcVar25;
        pcVar27 = pcVar27 + (ulong)bVar29 * -2 + 1;
      } while (pcVar25 < &dev_debug);
    }
    else {
      uVar18 = (long)&dev_debug - (long)pcVar24;
      if (0x10767fU - (long)pcVar24 < 0xf) {
        uVar8 = 0;
      }
      else {
        uVar12 = 0;
        uVar8 = uVar18 & 0xfffffffffffffff0;
        do {
          uVar6 = *(undefined8 *)(pcVar24 + uVar12 + 8);
          *(undefined8 *)(pcVar26 + uVar12) = *(undefined8 *)(pcVar24 + uVar12);
          *(undefined8 *)(pcVar26 + uVar12 + 8) = uVar6;
          uVar12 = uVar12 + 0x10;
        } while (uVar12 != uVar8);
        pcVar23 = pcVar24 + uVar8;
        pcVar27 = pcVar26 + uVar8;
        if (uVar18 == uVar8) goto LAB_00104f36;
      }
      uVar18 = uVar18 - uVar8;
      if (6 < uVar18 - 1) {
        *(undefined8 *)(pcVar25 + uVar8 + 0x105681) = *(undefined8 *)(pcVar24 + uVar8);
        pcVar23 = pcVar23 + (uVar18 & 0xfffffffffffffff8);
        pcVar27 = pcVar27 + (uVar18 & 0xfffffffffffffff8);
        if ((uVar18 & 7) == 0) goto LAB_00104f36;
      }
      *pcVar27 = *pcVar23;
      if ((((pcVar23 + 1 < &dev_debug) && (pcVar27[1] = pcVar23[1], pcVar23 + 2 < &dev_debug)) &&
          ((pcVar27[2] = pcVar23[2], pcVar23 + 3 < &dev_debug &&
           ((pcVar27[3] = pcVar23[3], pcVar23 + 4 < &dev_debug &&
            (pcVar27[4] = pcVar23[4], pcVar23 + 5 < &dev_debug)))))) &&
         (pcVar27[5] = pcVar23[5], pcVar23 + 6 < &dev_debug)) {
        pcVar27[6] = pcVar23[6];
      }
    }
LAB_00104f36:
    lVar11 = (long)&dev_debug - (long)pcVar24;
    if (&dev_debug < pcVar10) {
      lVar11 = 1;
    }
    pcVar26 = pcVar26 + lVar11;
    pcVar25 = pcVar26 + -0x105680;
    if (bVar15 == false) goto code_r0x00104f5f;
    *pcVar26 = '^';
    pcVar24 = &dev_debug;
    uVar17 = (ulong)bVar3;
    do {
      pcVar10 = pcVar24;
      pcVar24 = pcVar10 + -1;
      *pcVar24 = (char)uVar17 + (char)(uVar17 / 10) * -10 + '0';
      bVar4 = 9 < uVar17;
      uVar17 = uVar17 / 10;
    } while (bVar4);
    pcVar25 = pcVar26 + 1;
    pcVar23 = pcVar24;
    pcVar27 = pcVar25;
    if (((0x10767fU - (long)pcVar24 < 7) || (&dev_debug < pcVar10)) ||
       ((ulong)((long)pcVar25 - (long)pcVar10) < 0xf)) {
      do {
        pcVar26 = pcVar23 + (ulong)bVar29 * -2 + 1;
        *pcVar27 = *pcVar23;
        pcVar23 = pcVar26;
        pcVar27 = pcVar27 + (ulong)bVar29 * -2 + 1;
      } while (pcVar26 < &dev_debug);
    }
    else {
      uVar17 = (long)&dev_debug - (long)pcVar24;
      if (0x10767fU - (long)pcVar24 < 0xf) {
        uVar18 = 0;
      }
      else {
        uVar8 = 0;
        uVar18 = uVar17 & 0xfffffffffffffff0;
        do {
          uVar6 = *(undefined8 *)(pcVar24 + uVar8 + 8);
          *(undefined8 *)(pcVar25 + uVar8) = *(undefined8 *)(pcVar24 + uVar8);
          *(undefined8 *)(pcVar25 + uVar8 + 8) = uVar6;
          uVar8 = uVar8 + 0x10;
        } while (uVar18 != uVar8);
        pcVar23 = pcVar24 + uVar18;
        pcVar27 = pcVar25 + uVar18;
        if (uVar18 == uVar17) goto LAB_001051b9;
      }
      uVar17 = uVar17 - uVar18;
      if (6 < uVar17 - 1) {
        *(undefined8 *)(pcVar26 + uVar18 + 1) = *(undefined8 *)(pcVar24 + uVar18);
        pcVar23 = pcVar23 + (uVar17 & 0xfffffffffffffff8);
        pcVar27 = pcVar27 + (uVar17 & 0xfffffffffffffff8);
        if ((uVar17 & 7) == 0) goto LAB_001051b9;
      }
      *pcVar27 = *pcVar23;
      if (((pcVar23 + 1 < &dev_debug) && (pcVar27[1] = pcVar23[1], pcVar23 + 2 < &dev_debug)) &&
         (((pcVar27[2] = pcVar23[2], pcVar23 + 3 < &dev_debug &&
           ((pcVar27[3] = pcVar23[3], pcVar23 + 4 < &dev_debug &&
            (pcVar27[4] = pcVar23[4], pcVar23 + 5 < &dev_debug)))) &&
          (pcVar27[5] = pcVar23[5], pcVar23 + 6 < &dev_debug)))) {
        pcVar27[6] = pcVar23[6];
      }
    }
LAB_001051b9:
    lVar11 = (long)&dev_debug - (long)pcVar24;
    if (&dev_debug < pcVar10) {
      lVar11 = 1;
    }
    pcVar25 = pcVar25 + lVar11 + -0x105680;
  }
  goto LAB_00104f7b;
code_r0x00104f5f:
  uVar21 = uVar21 + 1;
  if (uVar21 == bVar3) goto code_r0x00104f6b;
  goto LAB_00104e9d;
code_r0x00104f6b:
  bVar15 = true;
LAB_00104f7b:
  pbVar16 = pbVar16 + 1;
  if (local_68 + (ulong)(local_4e - 1) + 1 == pbVar16) goto code_r0x00104f8a;
  goto LAB_00104e5d;
code_r0x00104f8a:
  if (bVar15 != false) {
    pcVar22 = pcVar25;
    lbuffered = pcVar25;
  }
LAB_00104fa2:
  if (local_140 != 0) {
    lbuffered = pcVar22 + 1;
    pcVar22[0x105680] = ' ';
    print_uuint(local_148,local_140);
  }
  goto LAB_00104c81;
code_r0x00104b69:
  uVar17 = uVar17 + 1;
  if (*(ulong *)((long)local_160 + lVar28 * 8) <= uVar17) goto LAB_00104b11;
  goto LAB_00104b37;
  while( true ) {
    if (0x1999999999999999 < uVar18) break;
    uVar8 = uVar17 * 2;
    uVar12 = uVar17 * 10;
    uVar13 = (ulong)(byte)(bVar2 - 0x30);
    uVar21 = (uint)(uVar17 >> 0x20);
    uVar17 = uVar12 + uVar13;
    uVar5 = uVar18 * 10;
    uVar8 = (ulong)(int)(((uVar21 >> 0x1d) - ((int)uVar21 >> 0x1f)) + (uint)(uVar12 < uVar8) +
                        (uint)CARRY8(uVar12,uVar13));
    uVar18 = uVar5 + uVar8;
    if (CARRY8(uVar5,uVar8)) break;
LAB_00104a2f:
    bVar2 = *pbVar16;
    pbVar16 = pbVar16 + 1;
    if (bVar2 == 0) {
      if (-1 < (long)uVar18) {
        if (dev_debug != '\0') {
          fwrite("[using single-precision arithmetic] ",1,0x24,_stderr);
        }
        print_uuint(uVar17,uVar18);
        local_4e = 0;
        local_140 = 0;
        pcVar22 = lbuffered + 1;
        lbuffered[0x105680] = ':';
        bVar15 = uVar18 == 0 && uVar17 < 2;
        lbuffered = pcVar22;
        if (bVar15) goto LAB_00104c81;
        factor_part_0_constprop_0(uVar18,uVar17,&local_148);
        bVar2 = print_exponents;
        if (local_4e == 0) goto LAB_00104fa2;
        pbVar16 = local_68;
        pcVar25 = pcVar22;
        goto LAB_00104e5d;
      }
      break;
    }
  }
  if (dev_debug != '\0') {
    fwrite("[using arbitrary-precision arithmetic] ",1,0x27,_stderr);
  }
  mpz_init_set_str(&local_148,pbVar19,10);
  lbuf_putmpz(&local_148);
  lbuffered[0x105680] = ':';
  lbuffered = lbuffered + 1;
  mp_factor(&local_148,&local_168);
  if (0 < local_158) {
    lVar28 = 0;
    lVar11 = local_158;
    pvVar14 = local_160;
    do {
      while( true ) {
        uVar17 = 0;
        if (*(long *)((long)pvVar14 + lVar28 * 8) == 0) break;
LAB_00104b37:
        lbuffered[0x105680] = ' ';
        lbuffered = lbuffered + 1;
        lbuf_putmpz((void *)((long)local_168 + lVar28 * 0x10));
        lVar11 = local_158;
        pvVar14 = local_160;
        if (print_exponents == 0) goto code_r0x00104b69;
        puVar20 = (ulong *)(lVar28 * 8 + (long)local_160);
        if (*puVar20 < 2) break;
        lbuffered[0x105680] = '^';
        pcVar22 = &dev_debug;
        uVar17 = *puVar20;
        do {
          pcVar25 = pcVar22;
          pcVar22 = pcVar25 + -1;
          *pcVar22 = (char)uVar17 + (char)(uVar17 / 10) * -10 + '0';
          bVar15 = 9 < uVar17;
          uVar17 = uVar17 / 10;
        } while (bVar15);
        pcVar24 = lbuffered + 0x105681;
        pcVar10 = pcVar22;
        pcVar26 = pcVar24;
        if (((0x10767fU - (long)pcVar22 < 7) || (&dev_debug < pcVar25)) ||
           ((ulong)((long)pcVar24 - (long)pcVar25) < 0xf)) {
          do {
            pcVar23 = pcVar10 + (ulong)bVar29 * -2 + 1;
            *pcVar26 = *pcVar10;
            pcVar10 = pcVar23;
            pcVar26 = pcVar26 + (ulong)bVar29 * -2 + 1;
          } while (pcVar23 < &dev_debug);
        }
        else {
          uVar17 = (long)&dev_debug - (long)pcVar22;
          if (0x10767fU - (long)pcVar22 < 0xf) {
            uVar18 = 0;
          }
          else {
            uVar8 = 0;
            uVar18 = uVar17 & 0xfffffffffffffff0;
            do {
              uVar6 = *(undefined8 *)(pcVar22 + uVar8 + 8);
              *(undefined8 *)(pcVar24 + uVar8) = *(undefined8 *)(pcVar22 + uVar8);
              *(undefined8 *)(pcVar24 + uVar8 + 8) = uVar6;
              uVar8 = uVar8 + 0x10;
            } while (uVar8 != uVar18);
            pcVar10 = pcVar22 + uVar18;
            pcVar26 = pcVar24 + uVar18;
            if (uVar18 == uVar17) goto LAB_00104c0c;
          }
          uVar17 = uVar17 - uVar18;
          if (6 < uVar17 - 1) {
            *(undefined8 *)(lbuffered + uVar18 + 0x105681) = *(undefined8 *)(pcVar22 + uVar18);
            pcVar10 = pcVar10 + (uVar17 & 0xfffffffffffffff8);
            pcVar26 = pcVar26 + (uVar17 & 0xfffffffffffffff8);
            if ((uVar17 & 7) == 0) goto LAB_00104c0c;
          }
          *pcVar26 = *pcVar10;
          if ((((pcVar10 + 1 < &dev_debug) && (pcVar26[1] = pcVar10[1], pcVar10 + 2 < &dev_debug))
              && ((pcVar26[2] = pcVar10[2], pcVar10 + 3 < &dev_debug &&
                  ((pcVar26[3] = pcVar10[3], pcVar10 + 4 < &dev_debug &&
                   (pcVar26[4] = pcVar10[4], pcVar10 + 5 < &dev_debug)))))) &&
             (pcVar26[5] = pcVar10[5], pcVar10 + 6 < &dev_debug)) {
            pcVar26[6] = pcVar10[6];
          }
        }
LAB_00104c0c:
        lVar9 = (long)&dev_debug - (long)pcVar22;
        if (&dev_debug < pcVar25) {
          lVar9 = 1;
        }
        lVar28 = lVar28 + 1;
        lbuffered = pcVar24 + lVar9 + -0x105680;
        if (local_158 <= lVar28) goto LAB_00104c3d;
      }
LAB_00104b11:
      lVar28 = lVar28 + 1;
    } while (lVar28 < lVar11);
LAB_00104c3d:
    if (0 < lVar11) {
      lVar11 = 0;
      do {
        lVar28 = lVar11 + 1;
        mpz_clear((void *)(lVar11 * 0x10 + (long)local_168));
        lVar11 = lVar28;
      } while (lVar28 < local_158);
    }
  }
  free(local_168);
  free(local_160);
  mpz_clear(&local_148);
LAB_00104c81:
  lbuf_putnl();
  uVar6 = 1;
LAB_001049f0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void usage(int param_1)

{
  FILE *pFVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined **ppuVar7;
  long in_FS_OFFSET;
  undefined *local_a8;
  char *pcStack_a0;
  char *local_98 [4];
  char *local_78;
  char *pcStack_70;
  char *local_68;
  char *pcStack_60;
  char *local_58;
  char *pcStack_50;
  undefined1 local_48 [16];
  undefined8 local_30;
  
  uVar5 = _program_name;
  ppuVar7 = &local_a8;
  local_30 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(_stderr,2,uVar3,uVar5);
    goto LAB_0010535a;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION] [NUMBER]...\n",5);
  __printf_chk(2,uVar3,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "Print the prime factors of each specified integer NUMBER.  If none\nare specified on the command line, read them from standard input.\n\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  fwrite_unlocked("  -h, --exponents   print repeated factors in form p^e unless e is 1\n",1,0x45,
                  _stdout);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pcVar4 = "[";
  local_a8 = &_LC18;
  pcStack_a0 = "test invocation";
  local_98[0] = "coreutils";
  local_98[1] = "Multi-call invocation";
  local_98[2] = "sha224sum";
  local_98[3] = "sha2 utilities";
  local_78 = "sha256sum";
  pcStack_70 = "sha2 utilities";
  local_68 = "sha384sum";
  pcStack_60 = "sha2 utilities";
  local_58 = "sha512sum";
  pcStack_50 = "sha2 utilities";
  local_48 = (undefined1  [16])0x0;
  do {
    iVar2 = strcmp("factor",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)ppuVar7 + 0x10);
    ppuVar7 = (undefined **)((long)ppuVar7 + 0x10);
  } while (pcVar4 != (char *)0x0);
  pcVar4 = *(char **)((long)ppuVar7 + 8);
  if (pcVar4 == (char *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    pcVar4 = "factor";
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) goto LAB_00105535;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","factor");
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) {
LAB_00105535:
      iVar2 = strncmp(pcVar6,"en_",3);
      pFVar1 = _stdout;
      if (iVar2 != 0) {
        pcVar6 = (char *)dcgettext(0,
                                   "Report any translation bugs to <https://translationproject.org/team/>\n"
                                   ,5);
        fputs_unlocked(pcVar6,pFVar1);
      }
    }
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = "";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","factor");
    if (pcVar4 == "factor") {
      pcVar6 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,pcVar4,pcVar6);
LAB_0010535a:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte main(int param_1,undefined8 *param_2)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int *piVar6;
  long lVar7;
  byte bVar8;
  long in_FS_OFFSET;
  undefined1 auStack_48 [8];
  void *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
LAB_00107c34:
  do {
    iVar2 = getopt_long(param_1,param_2,&_LC49,long_options,0);
    if (iVar2 == -1) {
      atexit(lbuf_flush);
      lVar7 = (long)_optind;
      if (_optind < param_1) {
        bVar8 = 1;
        for (; (int)lVar7 < param_1; lVar7 = lVar7 + 1) {
          bVar1 = print_factors(param_2[lVar7]);
          if (bVar1 != 0) {
            bVar1 = bVar8;
          }
          bVar8 = bVar1;
        }
      }
      else {
        bVar8 = 1;
        init_tokenbuffer(auStack_48);
        while( true ) {
          lVar7 = readtoken(_stdin,&_LC50,3,auStack_48);
          if (lVar7 == -1) break;
          bVar1 = print_factors(local_40);
          bVar8 = bVar8 & bVar1;
        }
        if ((*_stdin & 0x20) != 0) {
          uVar3 = dcgettext(0,"error reading input",5);
          piVar6 = __errno_location();
          error(1,*piVar6,uVar3);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        free(local_40);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return bVar8 ^ 1;
      }
LAB_00107dce:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (iVar2 != 0x68) {
      if (iVar2 < 0x69) {
        if (iVar2 == -0x83) {
          uVar3 = proper_name_lite("Niels Moller",&_LC44);
          uVar4 = proper_name_lite("Torbjorn Granlund",&_LC46);
          uVar5 = proper_name_lite("Paul Rubin","Paul Rubin");
          version_etc(_stdout,"factor","GNU coreutils",_Version,uVar5,uVar4,uVar3,0);
                    /* WARNING: Subroutine does not return */
          exit(0);
        }
        if (iVar2 == -0x82) {
          usage(0);
        }
      }
      else if (iVar2 == 0x80) {
        dev_debug = 1;
        goto LAB_00107c34;
      }
      usage(1);
      goto LAB_00107dce;
    }
    print_exponents = 1;
  } while( true );
}


