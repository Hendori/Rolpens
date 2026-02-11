
void factor_insert_multiplicity(long param_1,ulong param_2,char param_3)

{
  byte bVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  char *pcVar7;
  long lVar8;
  
  bVar1 = *(byte *)(param_1 + 0xfa);
  pcVar7 = (char *)(param_1 + 0xe0);
  puVar5 = (ulong *)(param_1 + 0x10);
  if (bVar1 != 0) {
    uVar2 = (ulong)(int)(bVar1 - 1);
    uVar4 = uVar2;
    do {
      if (*(ulong *)(param_1 + 0x10 + uVar4 * 8) <= param_2) {
        iVar3 = (int)uVar4;
        lVar8 = (long)iVar3;
        uVar6 = uVar4 & 0xffffffff;
        if (*(ulong *)(param_1 + 0x10 + lVar8 * 8) == param_2) {
          pcVar7[lVar8] = pcVar7[lVar8] + param_3;
          return;
        }
        puVar5 = (ulong *)(param_1 + 0x18 + lVar8 * 8);
        pcVar7 = pcVar7 + (iVar3 + 1);
        if ((int)(bVar1 - 1) <= iVar3) goto LAB_00100099;
        break;
      }
      uVar4 = uVar4 - 1;
      uVar6 = uVar4 & 0xffffffff;
    } while ((int)uVar4 != -1);
    do {
      *(undefined8 *)(param_1 + 0x18 + uVar2 * 8) = *(undefined8 *)(param_1 + 0x10 + uVar2 * 8);
      *(undefined1 *)(param_1 + 0xe1 + uVar2) = *(undefined1 *)(param_1 + 0xe0 + uVar2);
      uVar2 = uVar2 - 1;
    } while ((int)uVar6 < (int)uVar2);
  }
LAB_00100099:
  *puVar5 = param_2;
  *pcVar7 = param_3;
  *(byte *)(param_1 + 0xfa) = bVar1 + 1;
  return;
}



ulong powm(ulong param_1,ulong param_2,ulong param_3,long param_4,ulong param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar11 = param_1;
  if ((param_2 & 1) == 0) goto LAB_00100120;
  do {
    while( true ) {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = param_1;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = param_1;
      uVar9 = SUB168(auVar1 * auVar5,8);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = SUB168(auVar1 * auVar5,0) * param_4;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = param_3;
      uVar10 = SUB168(auVar2 * auVar6,8);
      param_1 = uVar9 - uVar10;
      if (uVar9 < uVar10) {
        param_1 = param_1 + param_3;
      }
      param_2 = param_2 >> 1;
      param_5 = uVar11;
      if ((param_2 & 1) == 0) break;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar11;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = param_1;
      uVar9 = SUB168(auVar3 * auVar7,8);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = SUB168(auVar3 * auVar7,0) * param_4;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = param_3;
      uVar10 = SUB168(auVar4 * auVar8,8);
      uVar11 = uVar9 - uVar10;
      if (uVar9 < uVar10) {
        uVar11 = uVar11 + param_3;
      }
    }
LAB_00100120:
    uVar11 = param_5;
  } while (param_2 != 0);
  return param_5;
}



ulong millerrabin(ulong param_1,long param_2,undefined8 param_3,undefined8 param_4,int param_5,
                 ulong param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar10 = param_6;
  uVar5 = powm(param_3,param_4,param_1,param_2,param_6);
  uVar9 = param_1 - param_6;
  uVar10 = CONCAT71((int7)(uVar10 >> 8),param_6 == uVar5 || uVar5 == uVar9);
  if ((param_6 != uVar5 && uVar5 != uVar9) && (1 < param_5)) {
    iVar8 = 1;
    while( true ) {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar5;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar5;
      uVar6 = SUB168(auVar1 * auVar3,8);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = SUB168(auVar1 * auVar3,0) * param_2;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = param_1;
      uVar7 = SUB168(auVar2 * auVar4,8);
      uVar5 = uVar6 - uVar7;
      if (uVar6 < uVar7) {
        uVar5 = uVar5 + param_1;
      }
      if (uVar9 == uVar5) break;
      if ((param_6 == uVar5) || (iVar8 = iVar8 + 1, param_5 == iVar8)) goto LAB_001001b5;
    }
    uVar10 = 1;
  }
LAB_001001b5:
  return uVar10 & 0xffffffff;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_error(void)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  undefined8 uVar4;
  long lVar5;
  
  piVar3 = __errno_location();
  iVar1 = *piVar3;
  fflush_unlocked(_stdout);
  fpurge(_stdout);
  clearerr_unlocked(_stdout);
  uVar4 = dcgettext(0,"write error",5);
  error(1,iVar1,uVar4);
  lVar2 = lbuffered;
  lbuffered = 0;
  lVar5 = full_write(1,lbuf_buf,lVar2);
  if (lVar5 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  write_error();
}



void lbuf_flush(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = lbuffered;
  lbuffered = 0;
  lVar2 = full_write(1,lbuf_buf,lVar1);
  if (lVar2 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  write_error();
}



ulong gcd_odd(ulong param_1,ulong param_2)

{
  ulong uVar1;
  byte bVar2;
  ulong uVar3;
  
  uVar1 = param_2;
  if ((param_2 & 1) != 0) {
    uVar1 = param_1;
    param_1 = param_2;
  }
  if (uVar1 == 0) {
    return param_1;
  }
  param_1 = param_1 >> 1;
  bVar2 = 0;
  for (uVar3 = uVar1; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x8000000000000000) {
    bVar2 = bVar2 + 1;
  }
  while( true ) {
    uVar1 = uVar1 >> (bVar2 & 0x3f);
    uVar3 = (uVar1 >> 1) - param_1;
    if (uVar3 == 0) break;
    uVar1 = (long)uVar3 >> 0x3f;
    param_1 = param_1 + (uVar1 & uVar3);
    bVar2 = 0;
    uVar1 = (uVar3 ^ uVar1) - uVar1;
    for (uVar3 = uVar1; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x8000000000000000) {
      bVar2 = bVar2 + 1;
    }
  }
  return uVar1 | 1;
}



/* WARNING: Removing unreachable block (ram,0x001003d2) */

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



undefined1  [16]
powm2(undefined8 *param_1,ulong *param_2,undefined8 *param_3,undefined8 param_4,undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  undefined1 auVar7 [16];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_48;
  long local_40;
  
  local_68 = *param_5;
  local_70 = param_5[1];
  uVar3 = *param_1;
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar6 = *param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = 0x40;
  uVar4 = param_1[1];
  do {
    if ((uVar6 & 1) != 0) {
      local_68 = mulredc2(&local_48,local_70,local_68,uVar4,uVar3,uVar2,uVar1,param_4);
      local_70 = local_48;
    }
    uVar6 = uVar6 >> 1;
    uVar3 = mulredc2(&local_48,uVar4,uVar3,uVar4,uVar3,uVar2,uVar1,param_4);
    iVar5 = iVar5 + -1;
    uVar4 = local_48;
  } while (iVar5 != 0);
  for (uVar6 = param_2[1]; uVar6 != 0; uVar6 = uVar6 >> 1) {
    local_48 = uVar4;
    if ((uVar6 & 1) != 0) {
      local_68 = mulredc2(&local_48,local_70,local_68,uVar4,uVar3,uVar2,uVar1,param_4);
      local_70 = local_48;
    }
    uVar3 = mulredc2(&local_48,uVar4,uVar3,uVar4,uVar3,uVar2,uVar1);
    uVar4 = local_48;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar7._8_8_ = local_70;
    auVar7._0_8_ = local_68;
    return auVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong millerrabin2(ulong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5,undefined1 (*param_6) [16])

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  ulong uVar6;
  int iVar7;
  bool bVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  undefined1 auVar10 [16];
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  auVar10 = powm2(param_3,param_4,param_1,param_2,param_6);
  uVar1 = *(ulong *)*param_6;
  uVar2 = *(ulong *)(*param_6 + 8);
  if (auVar10 != *param_6) {
    uVar3 = param_1[1];
    uVar4 = *param_1;
    uVar9 = (uVar3 - uVar2) - (ulong)(uVar4 < uVar1);
    auVar5._8_8_ = uVar9;
    auVar5._0_8_ = uVar4 - uVar1;
    bVar8 = auVar10 == auVar5;
    uVar6 = CONCAT71(auVar10._1_7_,bVar8);
    if (auVar10 != auVar5) {
      iVar7 = 1;
      if (1 < param_5) {
        do {
          uVar6 = mulredc2(&local_48,auVar10._8_8_,auVar10._0_8_,auVar10._8_8_,auVar10._0_8_,uVar3,
                           uVar4,param_2);
          auVar10._8_8_ = local_48;
          auVar10._0_8_ = uVar6;
          if ((local_48 == uVar9) && (uVar6 == uVar4 - uVar1)) goto LAB_001006f1;
        } while (((local_48 != uVar2) || (uVar1 != uVar6)) && (iVar7 = iVar7 + 1, param_5 != iVar7))
        ;
        uVar6 = (ulong)bVar8;
      }
      goto LAB_001006c2;
    }
  }
LAB_001006f1:
  uVar6 = 1;
LAB_001006c2:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6 & 0xffffffff;
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



undefined8
mp_millerrabin(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,ulong param_6)

{
  int iVar1;
  ulong uVar2;
  
  mpz_powm(param_4,param_3,param_5,param_1);
  iVar1 = mpz_cmp_ui(param_4,1);
  if ((iVar1 != 0) && (iVar1 = mpz_cmp(param_4,param_2), iVar1 != 0)) {
    uVar2 = 1;
    if (1 < param_6) {
      do {
        mpz_powm_ui(param_4,param_4,2,param_1);
        iVar1 = mpz_cmp(param_4,param_2);
        if (iVar1 == 0) {
          return 1;
        }
        iVar1 = mpz_cmp_ui(param_4,1);
      } while ((iVar1 != 0) && (uVar2 = uVar2 + 1, param_6 != uVar2));
    }
    return 0;
  }
  return 1;
}



void mpz_va_init(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  uint local_58;
  long *local_50;
  long local_38 [4];
  undefined8 local_18;
  undefined8 local_10;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (long *)&stack0x00000008;
  local_58 = 8;
  local_38[1] = param_2;
  local_38[2] = param_3;
  local_38[3] = param_4;
  local_18 = param_5;
  local_10 = param_6;
  while( true ) {
    uVar3 = (ulong)local_58;
    if (local_58 < 0x30) {
      local_58 = local_58 + 8;
      lVar2 = *(long *)((long)local_38 + uVar3);
    }
    else {
      lVar2 = *local_50;
      local_50 = local_50 + 1;
    }
    if (lVar2 == 0) break;
    (*param_1)();
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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
      goto LAB_00100a02;
    }
LAB_00100a93:
    local_58 = xpalloc(local_58,param_1 + 3,1,0xffffffffffffffff,0x10);
    lVar6 = xireallocarray(lVar6,param_1[3],8);
LAB_00100a5a:
    lVar5 = lVar2 * 0x10 + local_58;
    mpz_init(lVar5);
    if (lVar4 <= lVar7) goto LAB_00100a02;
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
        if (param_1[2] == param_1[3]) goto LAB_00100a93;
        goto LAB_00100a5a;
      }
      lVar7 = lVar7 + -1;
      lVar5 = lVar5 + -0x10;
    } while (lVar7 != -1);
    if (param_1[2] == param_1[3]) {
      local_48 = -1;
      goto LAB_00100a93;
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
  } while (lVar7 != lVar4);
LAB_00100a02:
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



void gcd2_odd_part_0(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  int iVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar2 = param_1;
  if (param_2 != 0) {
    uVar2 = param_2;
    param_2 = param_1;
  }
  iVar1 = 0;
  for (uVar4 = uVar2; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x8000000000000000) {
    iVar1 = iVar1 + 1;
  }
  if (iVar1 != 0) {
    bVar3 = (byte)iVar1;
    uVar2 = uVar2 >> (bVar3 & 0x3f) | param_2 << (0x40 - bVar3 & 0x3f);
    param_2 = param_2 >> (bVar3 & 0x3f);
  }
  if (param_2 != 0 || param_3 != 0) {
    do {
      while ((param_3 < param_2 || ((param_4 < uVar2 && (param_3 == param_2))))) {
        uVar4 = uVar2 - param_4;
        uVar5 = (param_2 - param_3) - (ulong)(uVar2 < param_4);
        uVar2 = uVar4;
        param_2 = uVar5;
        if (uVar4 == 0) {
          param_2 = 0;
          uVar2 = uVar5;
        }
        iVar1 = 0;
        for (uVar4 = uVar2; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x8000000000000000) {
          iVar1 = iVar1 + 1;
        }
        if (iVar1 != 0) {
          bVar3 = (byte)iVar1;
          uVar2 = uVar2 >> (bVar3 & 0x3f) | param_2 << (-bVar3 & 0x3f);
          param_2 = param_2 >> (bVar3 & 0x3f);
        }
LAB_00100bb9:
        if (param_2 == 0 && param_3 == 0) goto LAB_00100c28;
      }
      if ((param_3 <= param_2) && ((param_4 <= uVar2 || (param_3 != param_2)))) {
        return;
      }
      uVar4 = param_4 - uVar2;
      uVar5 = (param_3 - param_2) - (ulong)(param_4 < uVar2);
      param_4 = uVar4;
      param_3 = uVar5;
      if (uVar4 == 0) {
        param_3 = 0;
        param_4 = uVar5;
      }
      iVar1 = 0;
      for (uVar4 = param_4; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x8000000000000000) {
        iVar1 = iVar1 + 1;
      }
      if (iVar1 == 0) goto LAB_00100bb9;
      bVar3 = (byte)iVar1;
      uVar4 = param_3 << (-bVar3 & 0x3f);
      param_3 = param_3 >> (bVar3 & 0x3f);
      param_4 = param_4 >> (bVar3 & 0x3f) | uVar4;
    } while (param_2 != 0 || param_3 != 0);
  }
LAB_00100c28:
  gcd_odd(param_4,uVar2);
  return;
}



void lbuf_half_flush(void)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  pvVar2 = memrchr(lbuf_buf,10,0x1000);
  lVar1 = lbuffered;
  if (pvVar2 == (void *)0x0) {
    lVar4 = 0x1000;
    lVar5 = 0x104ce0;
  }
  else {
    lVar5 = (long)pvVar2 + 1;
    lVar4 = (long)pvVar2 + -0x103cdf;
  }
  lbuffered = 0;
  lVar3 = full_write(1,lbuf_buf,lVar4);
  if (lVar4 == lVar3) {
    lbuffered = lVar1 - lVar4;
    __memmove_chk(lbuf_buf,lVar5,lVar1 - lVar4,0x2000);
    return;
  }
                    /* WARNING: Subroutine does not return */
  write_error();
}



void print_uuint(ulong param_1,ulong param_2)

{
  char *pcVar1;
  ulong uVar2;
  ulong uVar3;
  char *pcVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  int iVar11;
  bool bVar12;
  
  if (param_2 == 0) {
    pcVar4 = &dev_debug;
  }
  else {
    uVar2 = param_1;
    pcVar4 = lbuf_buf + 0x1fed;
    while( true ) {
      iVar11 = 0x40;
      pcVar10 = pcVar4 + 0x13;
      param_1 = 0;
      uVar7 = 0;
      uVar3 = 10000000000000000000;
      uVar5 = param_2 + (ulong)(9999999999999999999 < param_2) * 0x7538dcfb76180000;
      do {
        uVar7 = uVar7 >> 1 | uVar3 << 0x3f;
        uVar3 = uVar3 >> 1;
        param_1 = param_1 * 2;
        if ((uVar3 < uVar5) || ((uVar3 == uVar5 && (uVar7 <= uVar2)))) {
          param_1 = param_1 + 1;
          bVar12 = uVar2 < uVar7;
          uVar2 = uVar2 - uVar7;
          uVar5 = (uVar5 - uVar3) - (ulong)bVar12;
        }
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      do {
        pcVar10 = pcVar10 + -1;
        *pcVar10 = (char)uVar2 + (char)(uVar2 / 10) * -10 + '0';
        uVar2 = uVar2 / 10;
      } while (pcVar10 != pcVar4);
      if (param_2 < 10000000000000000000) break;
      param_2 = 1;
      uVar2 = param_1;
      pcVar4 = pcVar4 + -0x13;
    }
  }
  do {
    pcVar10 = pcVar4;
    pcVar4 = pcVar10 + -1;
    *pcVar4 = (char)param_1 + (char)(param_1 / 10) * -10 + '0';
    bVar12 = 9 < param_1;
    param_1 = param_1 / 10;
  } while (bVar12);
  pcVar8 = pcVar4;
  pcVar9 = lbuf_buf + (long)lbuffered;
  do {
    pcVar1 = pcVar8 + 1;
    *pcVar9 = *pcVar8;
    pcVar8 = pcVar1;
    pcVar9 = pcVar9 + 1;
  } while (pcVar1 < &dev_debug);
  lVar6 = (long)&dev_debug - (long)pcVar4;
  if (&dev_debug < pcVar10) {
    lVar6 = 1;
  }
  lbuffered = lbuf_buf + (long)lbuffered + lVar6 + -0x103ce0;
  return;
}



/* WARNING: Removing unreachable block (ram,0x0010111f) */

undefined8 prime_p(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  undefined1 auVar5 [16];
  char cVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  byte *pbVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  int iVar17;
  undefined1 *puVar18;
  long in_FS_OFFSET;
  bool bVar19;
  undefined1 auStack_148 [8];
  undefined8 uStack_140;
  byte bStack_4e;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 < 2) {
LAB_001010f0:
    uVar9 = 0;
  }
  else {
    if (0x17ded78 < param_1) {
      uVar14 = 0;
      iVar4 = 0;
      uVar1 = param_1 - 1;
      for (uVar12 = uVar1; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x8000000000000000) {
        iVar4 = iVar4 + 1;
      }
      uVar15 = 0;
      uVar7 = uVar1 >> ((byte)iVar4 & 0x3f);
      uVar12 = (ulong)(byte)binvert_table[(uint)(param_1 >> 1) & 0x7f];
      lVar11 = uVar12 * 2 - uVar12 * uVar12 * param_1;
      lVar11 = lVar11 * 2 - lVar11 * lVar11 * param_1;
      iVar17 = 0x40;
      lVar11 = lVar11 * 2 - lVar11 * lVar11 * param_1;
      uVar8 = 1;
      uVar12 = param_1;
      do {
        uVar15 = uVar15 >> 1 | uVar12 << 0x3f;
        uVar12 = uVar12 >> 1;
        if ((uVar12 < uVar8) || ((uVar12 == uVar8 && (uVar15 <= uVar14)))) {
          bVar19 = uVar14 < uVar15;
          uVar14 = uVar14 - uVar15;
          uVar8 = (uVar8 - uVar12) - (ulong)bVar19;
        }
        iVar17 = iVar17 + -1;
      } while (iVar17 != 0);
      uVar12 = 0;
      if (uVar14 < param_1 - uVar14) {
        uVar12 = param_1;
      }
      uVar12 = uVar12 + (uVar14 * 2 - param_1);
      cVar6 = millerrabin(param_1,lVar11,uVar12,uVar7,iVar4,uVar14);
      if (cVar6 == '\0') goto LAB_001010f0;
      bStack_4e = 0;
      uStack_140 = 0;
      factor_part_0_constprop_0(0,uVar1,auStack_148);
      uVar10 = (uint)bStack_4e;
      if (bStack_4e != 0) {
        uVar8 = 2;
        pbVar13 = &primes_diff;
        puVar18 = auStack_148;
LAB_00100ff6:
        do {
          uVar15 = powm(uVar12,uVar1 / *(ulong *)(puVar18 + 0x10),param_1);
          if (auStack_148 + (ulong)(uVar10 - 1) * 8 == puVar18) {
            if (uVar15 != uVar14) break;
          }
          else {
            puVar18 = puVar18 + 8;
            if (uVar15 != uVar14) goto LAB_00100ff6;
          }
          uVar8 = uVar8 + *pbVar13;
          auVar2._8_8_ = 0;
          auVar2._0_8_ = uVar14;
          auVar3._8_8_ = 0;
          auVar3._0_8_ = uVar8;
          auVar2 = auVar2 * auVar3;
          if (auVar2._8_8_ == 0) {
            uVar12 = auVar2._0_8_ % param_1;
          }
          else {
            if (param_1 <= auVar2._8_8_) {
                    /* WARNING: Subroutine does not return */
              __assert_fail("__r1 < __d1","src/factor.c",0x4de,"prime_p");
            }
            iVar17 = 0x40;
            uVar16 = 0;
            uVar15 = param_1;
            do {
              uVar16 = uVar16 >> 1 | uVar15 << 0x3f;
              uVar15 = uVar15 >> 1;
              auVar5._8_8_ = uVar15;
              auVar5._0_8_ = uVar16;
              if (auVar5 <= auVar2) {
                auVar2 = auVar2 - auVar5;
              }
              uVar12 = auVar2._0_8_;
              iVar17 = iVar17 + -1;
            } while (iVar17 != 0);
          }
          cVar6 = millerrabin(param_1,lVar11,uVar12,uVar7,iVar4,uVar14);
          if (cVar6 == '\0') goto LAB_001010f0;
          pbVar13 = pbVar13 + 1;
          puVar18 = auStack_148;
          if (pbVar13 == &DAT_001094fc) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("!\"Lucas prime test failure.  This should not happen\"","src/factor.c",
                          0x4e6,"prime_p");
          }
        } while( true );
      }
    }
    uVar9 = 1;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar9;
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
  char cVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  int iVar26;
  ulong uVar27;
  long lVar28;
  ulong uVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  bool bVar33;
  
  if (param_1 < 2) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("__r1 < __d1","src/factor.c",0x5a9,"factor_using_pollard_rho");
  }
  uVar20 = 0;
  while( true ) {
    uVar27 = 0;
    iVar26 = 0x40;
    uVar18 = 1;
    uVar21 = 0;
    uVar22 = param_1;
    do {
      uVar21 = uVar21 >> 1 | uVar22 << 0x3f;
      uVar22 = uVar22 >> 1;
      if ((uVar22 < uVar18) || ((uVar22 == uVar18 && (uVar21 <= uVar27)))) {
        bVar33 = uVar27 < uVar21;
        uVar27 = uVar27 - uVar21;
        uVar18 = (uVar18 - uVar22) - (ulong)bVar33;
      }
      iVar26 = iVar26 + -1;
    } while (iVar26 != 0);
    uVar22 = uVar20;
    if (uVar27 < param_1 - uVar27) {
      uVar22 = param_1;
    }
    uVar22 = uVar22 + (uVar27 * 2 - param_1);
    if (param_1 <= param_2) break;
    lVar30 = 1;
    lVar32 = 1;
    uVar18 = uVar22;
    uVar21 = uVar22;
    while( true ) {
      uVar25 = (ulong)(byte)binvert_table[(uint)(param_1 >> 1) & 0x7f];
      lVar23 = uVar25 * 2 - uVar25 * uVar25 * param_1;
      lVar23 = lVar23 * 2 - lVar23 * lVar23 * param_1;
      lVar28 = lVar23 * 2 - lVar23 * lVar23 * param_1;
      uVar29 = param_1 - param_2;
      lVar23 = param_2 - param_1;
      uVar25 = uVar18;
      while( true ) {
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar21;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar21;
        uVar21 = SUB168(auVar1 * auVar9,8);
        auVar2._8_8_ = 0;
        auVar2._0_8_ = SUB168(auVar1 * auVar9,0) * lVar28;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = param_1;
        uVar24 = SUB168(auVar2 * auVar10,8);
        uVar18 = uVar21 - uVar24;
        if (uVar21 < uVar24) {
          uVar18 = uVar18 + param_1;
        }
        uVar21 = uVar20;
        if (uVar18 < uVar29) {
          uVar21 = param_1;
        }
        uVar21 = uVar21 + uVar18 + lVar23;
        uVar18 = uVar20;
        if (uVar22 < uVar21) {
          uVar18 = param_1;
        }
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uVar27;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar18 + (uVar22 - uVar21);
        uVar18 = SUB168(auVar3 * auVar11,8);
        auVar4._8_8_ = 0;
        auVar4._0_8_ = SUB168(auVar3 * auVar11,0) * lVar28;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = param_1;
        uVar24 = SUB168(auVar4 * auVar12,8);
        uVar27 = uVar18 - uVar24;
        if (uVar18 < uVar24) {
          uVar27 = uVar27 + param_1;
        }
        uVar18 = uVar25;
        lVar31 = lVar30;
        if ((((uint)lVar32 & 0x1f) == 1) &&
           (lVar19 = gcd_odd(uVar27,param_1), uVar18 = uVar21, lVar31 = lVar30, lVar19 != 1)) break;
        lVar32 = lVar32 + -1;
        uVar25 = uVar18;
        lVar30 = lVar31;
        if ((lVar32 == 0) && (uVar22 = uVar21, uVar25 = uVar21, lVar31 != 0)) {
          lVar32 = 0;
          do {
            auVar5._8_8_ = 0;
            auVar5._0_8_ = uVar25;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = uVar25;
            uVar21 = SUB168(auVar5 * auVar13,8);
            auVar6._8_8_ = 0;
            auVar6._0_8_ = SUB168(auVar5 * auVar13,0) * lVar28;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = param_1;
            uVar25 = SUB168(auVar6 * auVar14,8);
            uVar18 = uVar21 - uVar25;
            if (uVar21 < uVar25) {
              uVar18 = uVar18 + param_1;
            }
            uVar25 = uVar20;
            if (uVar18 < uVar29) {
              uVar25 = param_1;
            }
            lVar32 = lVar32 + 1;
            uVar25 = uVar25 + uVar18 + lVar23;
            uVar21 = uVar25;
            lVar30 = lVar31 * 2;
          } while (lVar31 != lVar32);
        }
      }
      do {
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar25;
        auVar15._8_8_ = 0;
        auVar15._0_8_ = uVar25;
        uVar25 = SUB168(auVar7 * auVar15,8);
        auVar8._8_8_ = 0;
        auVar8._0_8_ = SUB168(auVar7 * auVar15,0) * lVar28;
        auVar16._8_8_ = 0;
        auVar16._0_8_ = param_1;
        uVar24 = SUB168(auVar8 * auVar16,8);
        uVar18 = uVar25 - uVar24;
        if (uVar25 < uVar24) {
          uVar18 = uVar18 + param_1;
        }
        uVar25 = uVar20;
        if (uVar18 < uVar29) {
          uVar25 = param_1;
        }
        uVar25 = uVar25 + uVar18 + lVar23;
        uVar18 = uVar20;
        if (uVar22 < uVar25) {
          uVar18 = param_1;
        }
        uVar18 = gcd_odd(uVar18 + (uVar22 - uVar25),param_1);
      } while (uVar18 == 1);
      if (uVar18 == param_1) break;
      param_1 = param_1 / uVar18;
      cVar17 = prime_p();
      if (cVar17 == '\0') {
        factor_using_pollard_rho(uVar18,param_2 + 1,param_3);
      }
      else {
        factor_insert_multiplicity(param_3,uVar18,1);
      }
      cVar17 = prime_p(param_1);
      if (cVar17 != '\0') {
        uVar20 = factor_insert_multiplicity(param_3,param_1,1);
        return uVar20;
      }
      uVar21 = uVar21 % param_1;
      uVar22 = uVar22 % param_1;
      uVar18 = uVar25 % param_1;
      if (param_1 == 1) {
        return uVar25 / param_1;
      }
      if (param_1 <= param_2) goto LAB_0010149f;
    }
    param_2 = param_2 + 1;
  }
LAB_0010149f:
                    /* WARNING: Subroutine does not return */
  __assert_fail("a < n","src/factor.c",0x5af,"factor_using_pollard_rho");
}



void factor_part_0_constprop_0(ulong param_1,ulong param_2,ulong *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  int iVar8;
  long lVar9;
  char cVar10;
  byte *pbVar11;
  long lVar12;
  ulong uVar13;
  int iVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  byte *pbVar20;
  ulong uVar21;
  byte *pbVar22;
  
  if ((param_2 & 1) == 0) {
    if (param_2 != 0) {
      iVar8 = 0;
      for (uVar19 = param_2; (uVar19 & 1) == 0; uVar19 = uVar19 >> 1 | 0x8000000000000000) {
        iVar8 = iVar8 + 1;
      }
      bVar1 = (byte)iVar8;
      uVar19 = param_1 << (0x40 - bVar1 & 0x3f);
      param_1 = param_1 >> (bVar1 & 0x3f);
      param_2 = param_2 >> (bVar1 & 0x3f) | uVar19;
      factor_insert_multiplicity(param_3,2,iVar8);
      goto LAB_001015e0;
    }
    uVar18 = 0;
    iVar8 = 0;
    for (uVar19 = param_1; (uVar19 & 1) == 0; uVar19 = uVar19 >> 1 | 0x8000000000000000) {
      iVar8 = iVar8 + 1;
    }
    uVar19 = 3;
    param_2 = param_1 >> ((byte)iVar8 & 0x3f);
    factor_insert_multiplicity(param_3,2,iVar8 + 0x40);
    param_1 = 0;
  }
  else {
LAB_001015e0:
    if (param_1 == 0) {
      uVar18 = 0;
      uVar19 = 3;
    }
    else {
      uVar19 = 3;
      plVar15 = &primes_dtab;
      uVar16 = 0;
      do {
        lVar12 = *plVar15;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = lVar12 * param_2;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar19;
        uVar18 = SUB168(auVar4 * auVar6,8);
        if (uVar18 <= param_1) {
          uVar17 = plVar15[1];
          uVar21 = lVar12 * param_2;
          do {
            uVar13 = (param_1 - uVar18) * lVar12;
            if (uVar17 < uVar13) break;
            factor_insert_multiplicity(param_3,uVar19,1);
            auVar5._8_8_ = 0;
            auVar5._0_8_ = uVar21 * lVar12;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = uVar19;
            uVar18 = SUB168(auVar5 * auVar7,8);
            param_2 = uVar21;
            uVar21 = uVar21 * lVar12;
            param_1 = uVar13;
          } while (uVar18 <= uVar13);
        }
        uVar18 = uVar16 + 1;
        plVar15 = plVar15 + 2;
        uVar19 = uVar19 + (byte)(&DAT_00109261)[uVar16];
      } while ((param_1 != 0) && (uVar16 = uVar18, uVar18 < 0x29c));
      if (uVar18 == 0x29c) goto LAB_00101b98;
    }
  }
  iVar8 = (int)uVar18;
  uVar17 = (ulong)(iVar8 + 1);
  plVar15 = &primes_dtab + uVar18 * 2;
  pbVar20 = &primes_diff + uVar17;
  uVar16 = uVar17;
  pbVar22 = primes_diff8 + uVar18;
  do {
    lVar12 = *plVar15;
    uVar18 = plVar15[1];
    uVar21 = lVar12 * param_2;
    iVar14 = (int)uVar16;
    if (uVar18 < uVar21) {
      uVar18 = plVar15[2] * param_2;
      if (uVar18 <= (ulong)plVar15[3]) goto LAB_00101848;
LAB_00101722:
      uVar18 = plVar15[4] * param_2;
      if (uVar18 <= (ulong)plVar15[5]) goto LAB_00101898;
LAB_00101734:
      uVar18 = plVar15[6] * param_2;
      if (uVar18 <= (ulong)plVar15[7]) goto LAB_00101900;
LAB_00101746:
      uVar18 = plVar15[8] * param_2;
      if (uVar18 <= (ulong)plVar15[9]) goto LAB_00101978;
LAB_00101758:
      uVar18 = plVar15[10] * param_2;
      if (uVar18 <= (ulong)plVar15[0xb]) goto LAB_00101a08;
LAB_0010176a:
      uVar18 = plVar15[0xc] * param_2;
      if (uVar18 <= (ulong)plVar15[0xd]) goto LAB_00101a80;
LAB_0010177c:
      uVar18 = plVar15[0xe] * param_2;
      if (uVar18 <= (ulong)plVar15[0xf]) goto LAB_00101b10;
    }
    else {
      do {
        param_2 = uVar21;
        factor_insert_multiplicity(param_3,uVar19,1);
        uVar21 = param_2 * lVar12;
      } while (uVar21 <= uVar18);
      uVar18 = plVar15[2] * param_2;
      if ((ulong)plVar15[3] < uVar18) goto LAB_00101722;
LAB_00101848:
      bVar1 = *pbVar20;
      do {
        param_2 = uVar18;
        factor_insert_multiplicity(param_3,bVar1 + uVar19,1);
        uVar18 = plVar15[2] * param_2;
      } while (plVar15[2] * param_2 <= (ulong)plVar15[3]);
      uVar18 = plVar15[4] * param_2;
      if ((ulong)plVar15[5] < uVar18) goto LAB_00101734;
LAB_00101898:
      bVar1 = pbVar20[(iVar8 + 2) - uVar17];
      bVar2 = *pbVar20;
      do {
        param_2 = uVar18;
        factor_insert_multiplicity(param_3,(ulong)bVar1 + bVar2 + uVar19,1);
        uVar18 = plVar15[4] * param_2;
      } while (plVar15[4] * param_2 <= (ulong)plVar15[5]);
      uVar18 = plVar15[6] * param_2;
      if ((ulong)plVar15[7] < uVar18) goto LAB_00101746;
LAB_00101900:
      bVar1 = *pbVar20;
      bVar2 = pbVar20[(iVar8 + 2) - uVar17];
      bVar3 = pbVar20[(iVar8 + 3) - uVar17];
      do {
        param_2 = uVar18;
        factor_insert_multiplicity(param_3,bVar1 + uVar19 + (ulong)bVar2 + (ulong)bVar3,1);
        uVar18 = plVar15[6] * param_2;
      } while (plVar15[6] * param_2 <= (ulong)plVar15[7]);
      uVar18 = plVar15[8] * param_2;
      if ((ulong)plVar15[9] < uVar18) goto LAB_00101758;
LAB_00101978:
      do {
        param_2 = uVar18;
        pbVar11 = &primes_diff + iVar14;
        uVar18 = uVar19;
        do {
          bVar1 = *pbVar11;
          pbVar11 = pbVar11 + 1;
          uVar18 = uVar18 + bVar1;
        } while (pbVar11 != &DAT_00109264 + iVar14);
        factor_insert_multiplicity(param_3,uVar18,1);
        uVar18 = plVar15[8] * param_2;
      } while (plVar15[8] * param_2 <= (ulong)plVar15[9]);
      uVar18 = plVar15[10] * param_2;
      if ((ulong)plVar15[0xb] < uVar18) goto LAB_0010176a;
LAB_00101a08:
      do {
        param_2 = uVar18;
        lVar12 = 0;
        uVar18 = uVar19;
        do {
          lVar9 = lVar12 + iVar14;
          lVar12 = lVar12 + 1;
          uVar18 = uVar18 + (byte)(&primes_diff)[lVar9];
        } while (lVar12 != 5);
        factor_insert_multiplicity(param_3,uVar18,1);
        uVar18 = plVar15[10] * param_2;
      } while (plVar15[10] * param_2 <= (ulong)plVar15[0xb]);
      uVar18 = plVar15[0xc] * param_2;
      if ((ulong)plVar15[0xd] < uVar18) goto LAB_0010177c;
LAB_00101a80:
      do {
        param_2 = uVar18;
        pbVar11 = &primes_diff + iVar14;
        uVar18 = uVar19;
        do {
          bVar1 = *pbVar11;
          pbVar11 = pbVar11 + 1;
          uVar18 = uVar18 + bVar1;
        } while (&DAT_00109266 + iVar14 != pbVar11);
        factor_insert_multiplicity(param_3,uVar18,1);
        uVar18 = plVar15[0xc] * param_2;
      } while (plVar15[0xc] * param_2 <= (ulong)plVar15[0xd]);
      uVar18 = plVar15[0xe] * param_2;
      if (uVar18 <= (ulong)plVar15[0xf]) {
LAB_00101b10:
        do {
          param_2 = uVar18;
          pbVar11 = &primes_diff + iVar14;
          uVar18 = uVar19;
          do {
            bVar1 = *pbVar11;
            pbVar11 = pbVar11 + 1;
            uVar18 = uVar18 + bVar1;
          } while (&DAT_00109267 + iVar14 != pbVar11);
          factor_insert_multiplicity(param_3,uVar18,1);
          uVar18 = plVar15[0xe] * param_2;
        } while (plVar15[0xe] * param_2 <= (ulong)plVar15[0xf]);
      }
    }
    uVar19 = uVar19 + *pbVar22;
    if (param_2 < uVar19 * uVar19) break;
    plVar15 = plVar15 + 0x10;
    pbVar20 = pbVar20 + 8;
    uVar16 = (ulong)(iVar14 + 8);
    pbVar11 = pbVar22 + -0x108f98;
    pbVar22 = pbVar22 + 8;
  } while ((long)pbVar11 < 0x29c);
LAB_00101b98:
  if (param_1 == 0) {
    if (1 < param_2) {
      cVar10 = prime_p(param_2);
      if (cVar10 != '\0') {
        factor_insert_multiplicity(param_3,param_2,1);
        return;
      }
      factor_using_pollard_rho(param_2,1,param_3);
      return;
    }
  }
  else {
    cVar10 = prime2_p_part_0(param_1,param_2);
    if (cVar10 == '\0') {
      factor_using_pollard_rho2(param_1,param_2,1,param_3);
      return;
    }
    if (param_3[1] != 0) {
                    /* WARNING: Subroutine does not return */
      factor_insert_large_part_0();
    }
    *param_3 = param_2;
    param_3[1] = param_1;
  }
  return;
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
  uVar7 = param_1 - (param_2 == 0);
  uVar14 = param_2 - 1;
  if (uVar14 == 0) {
    uStack_190 = 0;
    iVar2 = 0;
    for (uVar8 = uVar7; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x8000000000000000) {
      iVar2 = iVar2 + 1;
    }
    iStack_1a0 = iVar2 + 0x40;
    uStack_198 = uVar7 >> ((byte)iVar2 & 0x3f);
  }
  else {
    iStack_1a0 = 0;
    for (uVar8 = uVar14; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x8000000000000000) {
      iStack_1a0 = iStack_1a0 + 1;
    }
    bVar3 = (byte)iStack_1a0;
    uStack_190 = uVar7 >> (bVar3 & 0x3f);
    uStack_198 = uVar7 << (0x40 - bVar3 & 0x3f) | uVar14 >> (bVar3 & 0x3f);
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
LAB_001020be:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return uVar6;
  }
  bStack_4e = 0;
  auStack_140[0] = 0;
  if ((uVar7 == 0) && (uVar14 < 2)) {
    uStack_1d4 = 0;
  }
  else {
    factor_part_0_constprop_0(uVar7,uVar14,&uStack_148);
    uStack_1d4 = (uint)bStack_4e;
  }
  bVar3 = bStack_4e;
  uVar8 = auStack_140[0];
  uVar15 = 2;
  pbVar16 = &primes_diff;
  do {
    if (uVar8 == 0) {
LAB_00101f9d:
      if (bVar3 == 0) {
LAB_001020b8:
        uVar6 = uVar6 & 0xff;
        goto LAB_001020be;
      }
LAB_00101fa8:
      uVar4 = uStack_178;
      lVar11 = 1;
      do {
        uVar9 = auStack_140[lVar11];
        while( true ) {
          uStack_158 = uVar14 >> 1 | uVar7 << 0x3f;
          uStack_150 = uVar7 >> 1;
          if (uVar9 != 2) {
            uVar10 = (ulong)(byte)binvert_table[(uint)(uVar9 >> 1) & 0x7f];
            lVar12 = uVar10 * 2 - uVar10 * uVar10 * uVar9;
            lVar12 = lVar12 * 2 - lVar12 * lVar12 * uVar9;
            lVar12 = lVar12 * 2 - lVar12 * lVar12 * uVar9;
            uStack_158 = uVar14 * lVar12;
            if (uVar7 < uVar9) {
              uStack_150 = 0;
            }
            else {
              auVar18._8_8_ = 0;
              auVar18._0_8_ = uStack_158;
              auVar1._8_8_ = 0;
              auVar1._0_8_ = uVar9;
              uStack_150 = (uVar7 - SUB168(auVar18 * auVar1,8)) * lVar12;
            }
          }
          auVar18 = powm2(&uStack_188,&uStack_158,&uStack_168,lVar13,&uStack_178);
          uVar9 = auVar18._8_8_;
          if (uVar4 == auVar18._0_8_) break;
          if ((int)uStack_1d4 <= (int)lVar11) goto LAB_001020b8;
          lVar11 = lVar11 + 1;
          uVar9 = auStack_140[lVar11];
        }
        if ((int)uStack_1d4 <= (int)lVar11) goto LAB_001020a8;
        lVar11 = lVar11 + 1;
      } while (uStack_170 != uVar9);
    }
    else {
      uStack_150 = 0;
      uVar9 = (ulong)(byte)binvert_table[(uint)(uStack_148 >> 1) & 0x7f];
      lVar11 = uVar9 * 2 - uVar9 * uVar9 * uStack_148;
      lVar11 = lVar11 * 2 - lVar11 * lVar11 * uStack_148;
      uStack_158 = uVar14 * (lVar11 * 2 - lVar11 * lVar11 * uStack_148);
      auVar18 = powm2(&uStack_188,&uStack_158,&uStack_168,lVar13,&uStack_178);
      uVar9 = auVar18._8_8_;
      if (uStack_178 != auVar18._0_8_) goto LAB_00101f9d;
      if (bVar3 != 0) {
        if (uStack_170 == uVar9) goto LAB_001021a0;
        goto LAB_00101fa8;
      }
LAB_001020a8:
      if (uStack_170 != uVar9) goto LAB_001020b8;
    }
LAB_001021a0:
    uVar15 = uVar15 + *pbVar16;
    uStack_180 = 0;
    uStack_188 = uVar15;
    if (uVar15 < param_1) {
      uStack_180 = uVar15;
      uStack_188 = 0;
    }
    lVar11 = (-(ulong)(uVar15 < param_1) & 0xffffffffffffffc0) + 0x7f;
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
      goto LAB_001020be;
    }
    pbVar16 = pbVar16 + 1;
    if (pbVar16 == &DAT_001094fc) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("!\"Lucas prime test failure.  This should not happen\"","src/factor.c",0x54b,
                    "prime2_p");
    }
  } while( true );
}



void factor_using_pollard_rho2(ulong param_1,ulong param_2,ulong param_3,undefined1 (*param_4) [16])

{
  byte bVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  char cVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long in_FS_OFFSET;
  bool bVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  ulong local_98;
  ulong local_90;
  undefined8 local_78;
  ulong local_70;
  undefined8 local_68;
  long local_60;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = param_3;
LAB_001022ce:
  local_98 = (ulong)(1 < param_1);
  lVar11 = (ulong)(-(uint)(param_1 < 2) & 0x40) + 0x3f;
  local_90 = (ulong)(param_1 < 2);
  do {
    local_98 = local_98 << 1 | local_90 >> 0x3f;
    local_90 = local_90 * 2;
    if ((param_1 < local_98) || ((param_1 == local_98 && (param_2 <= local_90)))) {
      bVar13 = local_90 < param_2;
      local_90 = local_90 - param_2;
      local_98 = (local_98 - param_1) - (ulong)bVar13;
    }
    bVar13 = lVar11 != 0;
    lVar11 = lVar11 + -1;
  } while (bVar13);
  uVar12 = local_90 * 2;
  uVar5 = local_98 * 2 + (ulong)CARRY8(local_90,local_90);
  if ((param_1 < uVar5) || ((param_1 == uVar5 && (param_2 <= uVar12)))) {
    bVar13 = uVar12 < param_2;
    uVar12 = uVar12 - param_2;
    uVar5 = (uVar5 - param_1) - (ulong)bVar13;
  }
  auVar16._8_8_ = uVar5;
  auVar16._0_8_ = uVar12;
  if ((param_2 != 1) || (param_1 != 0)) {
    lVar11 = 1;
    local_60 = 1;
    auVar17 = auVar16;
    auVar18 = auVar16;
LAB_00102390:
    auVar3._8_8_ = param_1;
    auVar3._0_8_ = param_2;
    uVar12 = (ulong)(byte)binvert_table[(uint)(param_2 >> 1) & 0x7f];
    lVar9 = uVar12 * 2 - uVar12 * uVar12 * param_2;
    lVar9 = lVar9 * 2 - lVar9 * lVar9 * param_2;
    lVar10 = lVar9 * 2 - lVar9 * lVar9 * param_2;
    lVar9 = local_60;
    do {
      local_60 = lVar9;
      local_68 = auVar17._8_8_;
      local_78 = auVar17._0_8_;
      uVar12 = mulredc2(&local_48,auVar16._8_8_,auVar16._0_8_,auVar16._8_8_,auVar16._0_8_,param_1,
                        param_2,lVar10);
      uVar5 = uVar12 + local_70;
      uVar12 = local_48 + CARRY8(uVar12,local_70);
      if ((param_1 < uVar12) || ((param_1 == uVar12 && (param_2 <= uVar5)))) {
        bVar13 = uVar5 < param_2;
        uVar5 = uVar5 - param_2;
        uVar12 = (uVar12 - param_1) - (ulong)bVar13;
      }
      auVar15._8_8_ = uVar12;
      auVar15._0_8_ = uVar5;
      auVar16 = auVar17 - auVar15;
      if (auVar16._8_8_ < 0) {
        auVar16 = auVar16 + auVar3;
      }
      local_90 = mulredc2(&local_48,local_98,local_90,auVar16._8_8_,auVar16._0_8_,param_1,param_2,
                          lVar10);
      local_98 = local_48;
      auVar16 = auVar18;
      if (((uint)lVar11 & 0x1f) == 1) {
        if ((param_2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("b0 & 1","src/factor.c",0x1d1,__PRETTY_FUNCTION___4);
        }
        auVar14 = auVar3;
        if (local_90 != 0 || local_48 != 0) {
          auVar14 = gcd2_odd_part_0(local_48,local_90,param_1,param_2);
        }
        if ((auVar14._8_8_ != 0) || (auVar16 = auVar15, auVar14._0_8_ != 1)) goto LAB_0010260e;
      }
      lVar11 = lVar11 + -1;
      lVar9 = local_60;
      auVar18 = auVar16;
      auVar16 = auVar15;
      if ((lVar11 == 0) && (auVar18 = auVar15, auVar17 = auVar15, local_60 != 0)) {
        lVar11 = 0;
        do {
          uVar12 = mulredc2(&local_48,uVar12,uVar5,uVar12,uVar5,param_1,param_2,lVar10);
          uVar5 = uVar12 + local_70;
          uVar12 = local_48 + CARRY8(uVar12,local_70);
          if ((param_1 < uVar12) || ((param_1 == uVar12 && (param_2 <= uVar5)))) {
            bVar13 = uVar5 < param_2;
            uVar5 = uVar5 - param_2;
            uVar12 = (uVar12 - param_1) - (ulong)bVar13;
          }
          auVar18._8_8_ = uVar12;
          auVar18._0_8_ = uVar5;
          lVar11 = lVar11 + 1;
          lVar9 = local_60 * 2;
          auVar16 = auVar18;
        } while (local_60 != lVar11);
      }
    } while( true );
  }
LAB_0010288b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
  goto LAB_001028f9;
  while (uVar2 == 1) {
LAB_0010260e:
    uVar6 = mulredc2(&local_48,auVar18._8_8_,auVar18._0_8_,auVar18._8_8_,auVar18._0_8_,param_1,
                     param_2,lVar10);
    uVar7 = uVar6 + local_70;
    uVar6 = local_48 + CARRY8(uVar6,local_70);
    if ((param_1 < uVar6) || ((param_1 == uVar6 && (param_2 <= uVar7)))) {
      bVar13 = uVar7 < param_2;
      uVar7 = uVar7 - param_2;
      uVar6 = (uVar6 - param_1) - (ulong)bVar13;
    }
    auVar18._8_8_ = uVar6;
    auVar18._0_8_ = uVar7;
    auVar16 = auVar17 - auVar18;
    if (auVar16._8_8_ < 0) {
      auVar16 = auVar16 + auVar3;
    }
    auVar15 = auVar3;
    if (auVar16._8_8_ != 0 || auVar16._0_8_ != 0) {
      auVar15 = gcd2_odd_part_0(auVar16._8_8_,auVar16._0_8_,param_1,param_2);
    }
    lVar9 = auVar15._8_8_;
    uVar2 = auVar15._0_8_;
    if (lVar9 != 0) {
      if (auVar15 == auVar3) {
        local_70 = local_70 + 1;
        goto LAB_001022ce;
      }
      bVar1 = binvert_table[(uint)(uVar2 >> 1) & 0x7f];
      cVar4 = prime2_p_part_0(lVar9,uVar2);
      if (cVar4 == '\0') {
        factor_using_pollard_rho2(lVar9,uVar2,local_70 + 1,param_4);
      }
      else {
        if (*(long *)(*param_4 + 8) != 0) goto LAB_001028fe;
        *param_4 = auVar15;
      }
      uVar12 = (ulong)bVar1;
      lVar11 = uVar12 * 2 - uVar12 * uVar12 * uVar2;
      lVar11 = lVar11 * 2 - lVar11 * lVar11 * uVar2;
      param_2 = param_2 * (lVar11 * 2 - lVar11 * lVar11 * uVar2);
      goto LAB_0010282f;
    }
  }
  uVar8 = (ulong)(byte)binvert_table[(uint)(uVar2 >> 1) & 0x7f];
  lVar9 = uVar8 * 2 - uVar8 * uVar8 * uVar2;
  lVar9 = lVar9 * 2 - lVar9 * lVar9 * uVar2;
  lVar9 = lVar9 * 2 - lVar9 * lVar9 * uVar2;
  param_2 = param_2 * lVar9;
  if (param_1 < uVar2) {
    param_1 = 0;
  }
  else {
    auVar17._8_8_ = 0;
    auVar17._0_8_ = param_2;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar2;
    param_1 = (param_1 - SUB168(auVar17 * auVar14,8)) * lVar9;
  }
  cVar4 = prime_p(uVar2);
  if (cVar4 == '\0') {
    factor_using_pollard_rho(uVar2,local_70 + 1,param_4);
  }
  else {
    factor_insert_multiplicity(param_4,uVar2,1);
  }
  if (param_1 == 0) goto LAB_0010282f;
  cVar4 = prime2_p_part_0(param_1,param_2);
  if (cVar4 != '\0') {
    if (*(long *)(*param_4 + 8) != 0) {
LAB_001028fe:
                    /* WARNING: Subroutine does not return */
      factor_insert_large_part_0();
    }
    *(ulong *)*param_4 = param_2;
    *(ulong *)(*param_4 + 8) = param_1;
    goto LAB_0010288b;
  }
  auVar16 = mod2(uVar12,uVar5,param_1,param_2);
  auVar17 = mod2(local_68,local_78,param_1,param_2);
  auVar18 = mod2(uVar6,uVar7,param_1,param_2);
  goto LAB_00102390;
LAB_0010282f:
  cVar4 = prime_p(param_2);
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      factor_using_pollard_rho(param_2,local_70,param_4);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    factor_insert_multiplicity(param_4,param_2,1);
    return;
  }
LAB_001028f9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void lbuf_putnl(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = lbuffered + 1;
  lbuf_buf[lbuffered] = 10;
  lbuffered = lVar1;
  if (line_buffered_0 < 0) {
    line_buffered_0 = isatty(1);
  }
  if (line_buffered_0 == 0) {
    if (0xfff < lVar1) {
      lbuf_half_flush();
      return;
    }
  }
  else {
    lbuffered = 0;
    lVar2 = full_write(1,lbuf_buf,lVar1);
    if (lVar1 != lVar2) {
                    /* WARNING: Subroutine does not return */
      write_error();
    }
  }
  return;
}



void lbuf_putmpz(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  void *__ptr;
  long lVar3;
  undefined1 *puVar4;
  
  lVar1 = mpz_sizeinbase(param_1,10);
  lVar3 = (long)lbuffered;
  if (lVar1 < 0x2000 - (long)lbuffered) {
    puVar4 = lbuf_buf + (long)lbuffered;
    mpz_get_str(puVar4,10,param_1);
    lbuffered = puVar4 + ((lVar1 + -0x103ce0) - (ulong)(puVar4[lVar1 + -1] == '\0'));
    while (0xfff < (long)lbuffered) {
      lbuf_half_flush();
    }
    return;
  }
  lbuffered = (undefined1 *)0x0;
  lVar2 = full_write(1,lbuf_buf,lVar3);
  if (lVar3 == lVar2) {
    __ptr = (void *)ximalloc(lVar1 + 1);
    mpz_get_str(__ptr,10,param_1);
    lVar1 = lVar1 - (ulong)(*(char *)((long)__ptr + lVar1 + -1) == '\0');
    lVar3 = full_write(1,__ptr,lVar1);
    if (lVar3 == lVar1) {
      free(__ptr);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  write_error();
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
  mpz_va_init(mpz_init,local_68,local_58,0);
  mpz_init_set_si(local_88,2);
  mpz_init_set_si(local_a8,2);
  mpz_init_set_si(local_98,2);
  mpz_init_set_ui(local_78,1);
  local_c0 = 1;
LAB_00102c21:
  iVar3 = mpz_cmp_ui(param_1,1);
  lVar1 = lVar4;
  if (iVar3 != 0) {
LAB_00102c4a:
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
      if (iVar3 != 0) goto LAB_00102d70;
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
    goto LAB_00102c4a;
  }
LAB_00102eb5:
  mpz_va_init(mpz_clear,local_78,local_58,local_68,local_98,local_a8,local_88);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00102d70:
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
    goto LAB_00102eb5;
  }
  mpz_mod(local_a8,local_a8,param_1);
  mpz_mod(local_98,local_98,param_1);
  mpz_mod(local_88,local_88,param_1);
  goto LAB_00102c21;
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
LAB_00102f88:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
LAB_001031ba:
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
        if (iVar2 == 0) goto LAB_00102f88;
        if (dev_debug != '\0') {
          fwrite("[is number prime?] ",1,0x13,_stderr);
        }
        iVar2 = mpz_cmp_ui(param_1,1);
        if ((iVar2 < 1) ||
           ((iVar2 = mpz_cmp_ui(param_1,0x17ded79), -1 < iVar2 &&
            (cVar1 = mp_prime_p_part_0(param_1), cVar1 == '\0')))) {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            mp_factor_using_pollard_rho(param_1,1,param_2);
            return;
          }
        }
        else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          mp_factor_insert(param_2,param_1);
          return;
        }
        goto LAB_001031ba;
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



char mp_prime_p_part_0(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  long in_FS_OFFSET;
  char local_a9;
  void *local_a8;
  void *local_a0;
  long local_98;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  mpz_va_init(mpz_init,local_88,local_78,local_68,local_58,0);
  mpz_sub_ui(local_68,param_1,1);
  uVar3 = mpz_scan1(local_68,0);
  mpz_tdiv_q_2exp(local_88,local_68,uVar3);
  mpz_set_ui(local_78,2);
  local_a9 = mp_millerrabin(param_1,local_68,local_78,local_58,local_88,uVar3);
  if (local_a9 != '\0') {
    puVar6 = &primes_diff;
    mpz_set(local_58,local_68);
    mp_factor(local_58,&local_a8);
    while (0 < local_98) {
      lVar4 = 0;
      do {
        mpz_divexact(local_58,local_68,(void *)(lVar4 * 0x10 + (long)local_a8));
        mpz_powm(local_58,local_78,local_58,param_1);
        iVar2 = mpz_cmp_ui(local_58,1);
        if (local_98 <= lVar4 + 1) {
          cVar1 = local_a9;
          if (iVar2 != 0) goto LAB_00103375;
          break;
        }
        lVar4 = lVar4 + 1;
      } while (iVar2 != 0);
      mpz_add_ui(local_78,local_78,*puVar6);
      cVar1 = mp_millerrabin(param_1,local_68,local_78,local_58,local_88,uVar3);
      if (cVar1 == '\0') {
LAB_00103375:
        local_a9 = cVar1;
        if (0 < local_98) {
          lVar4 = 0;
          do {
            lVar5 = lVar4 + 1;
            mpz_clear((void *)(lVar4 * 0x10 + (long)local_a8));
            lVar4 = lVar5;
          } while (lVar5 < local_98);
        }
        break;
      }
      puVar6 = puVar6 + 1;
      if (puVar6 == &DAT_001094fc) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("!\"Lucas prime test failure.  This should not happen\"","src/factor.c",0x595,
                      "mp_prime_p");
      }
    }
    free(local_a8);
    free(local_a0);
  }
  mpz_va_init(mpz_clear,local_88,local_78,local_68,local_58,0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_a9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 print_factors(char *param_1)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  void *pvVar11;
  byte *pbVar12;
  ulong uVar13;
  int iVar14;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  byte *pbVar18;
  undefined8 *puVar19;
  char *pcVar20;
  char *pcVar21;
  char *pcVar22;
  char *pcVar23;
  char *pcVar24;
  long lVar25;
  undefined8 *puVar26;
  long in_FS_OFFSET;
  byte bVar27;
  int local_170;
  void *local_168;
  void *local_160;
  long local_158;
  undefined8 local_148;
  long local_140;
  undefined8 local_138 [29];
  byte local_4e;
  long local_40;
  
  bVar27 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = *param_1;
  while (cVar1 == ' ') {
    pcVar23 = param_1 + 1;
    param_1 = param_1 + 1;
    cVar1 = *pcVar23;
  }
  bVar3 = true;
  pbVar18 = (byte *)(param_1 + (cVar1 == '+'));
  pbVar12 = pbVar18;
  do {
    bVar2 = *pbVar12;
    pbVar12 = pbVar12 + 1;
    if (bVar2 == 0) {
      uVar13 = 0;
      uVar15 = 0;
      pbVar12 = pbVar18;
      if (!bVar3) goto LAB_001034e7;
      break;
    }
    bVar3 = false;
  } while (bVar2 - 0x30 < 10);
  uVar7 = quote();
  uVar8 = dcgettext(0,"%s is not a valid positive integer",5);
  error(0,0,uVar8,uVar7);
  uVar7 = 0;
  goto LAB_001034a8;
  while( true ) {
    if (0x1999999999999999 < uVar15) break;
    uVar9 = uVar13 * 2;
    uVar4 = uVar13 * 10;
    uVar10 = (ulong)(byte)(bVar2 - 0x30);
    uVar6 = (uint)(uVar13 >> 0x20);
    uVar13 = uVar4 + uVar10;
    uVar5 = uVar15 * 10;
    uVar9 = (ulong)(int)(((uVar6 >> 0x1d) - ((int)uVar6 >> 0x1f)) + (uint)(uVar4 < uVar9) +
                        (uint)CARRY8(uVar4,uVar10));
    uVar15 = uVar5 + uVar9;
    if (CARRY8(uVar5,uVar9)) break;
LAB_001034e7:
    bVar2 = *pbVar12;
    pbVar12 = pbVar12 + 1;
    if (bVar2 == 0) {
      if (-1 < (long)uVar15) {
        if (dev_debug != '\0') {
          fwrite("[using single-precision arithmetic] ",1,0x24,_stderr);
        }
        print_uuint(uVar13,uVar15);
        local_4e = 0;
        local_140 = 0;
        pcVar23 = lbuffered + 1;
        lbuffered[0x103ce0] = ':';
        lbuffered = pcVar23;
        if ((uVar15 != 0) || (1 < uVar13)) {
          factor_part_0_constprop_0(uVar15,uVar13,&local_148);
          if (local_4e != 0) {
            puVar26 = local_138;
            puVar19 = &local_148;
            do {
              cVar1 = print_exponents;
              iVar14 = 0;
              if (*(char *)(puVar19 + 0x1c) != '\0') {
                do {
                  uVar7 = *puVar26;
                  lbuffered[0x103ce0] = ' ';
                  lbuffered = lbuffered + 1;
                  print_uuint(uVar7,0);
                  if (cVar1 != '\0') {
                    bVar2 = *(byte *)(puVar19 + 0x1c);
                    if (1 < bVar2) {
                      lbuffered[0x103ce0] = '^';
                      uVar13 = (ulong)bVar2;
                      pcVar23 = &dev_debug;
                      do {
                        pcVar24 = pcVar23;
                        pcVar23 = pcVar24 + -1;
                        *pcVar23 = (char)uVar13 + (char)(uVar13 / 10) * -10 + '0';
                        bVar3 = 9 < uVar13;
                        uVar13 = uVar13 / 10;
                      } while (bVar3);
                      pcVar21 = pcVar23;
                      pcVar22 = lbuffered + 0x103ce1;
                      do {
                        pcVar20 = pcVar21 + (ulong)bVar27 * -2 + 1;
                        *pcVar22 = *pcVar21;
                        pcVar21 = pcVar20;
                        pcVar22 = pcVar22 + (ulong)bVar27 * -2 + 1;
                      } while (pcVar20 < &dev_debug);
                      lVar25 = (long)&dev_debug - (long)pcVar23;
                      if (&dev_debug < pcVar24) {
                        lVar25 = 1;
                      }
                      lbuffered = lbuffered + 0x103ce1 + lVar25 + -0x103ce0;
                    }
                    break;
                  }
                  iVar14 = iVar14 + 1;
                } while (iVar14 < (int)(uint)*(byte *)(puVar19 + 0x1c));
              }
              local_170 = (int)&local_148;
              puVar19 = (undefined8 *)((long)puVar19 + 1);
              puVar26 = puVar26 + 1;
            } while ((int)puVar19 - local_170 < (int)(uint)local_4e);
          }
          if (local_140 != 0) {
            lbuffered[0x103ce0] = ' ';
            lbuffered = lbuffered + 1;
            print_uuint(local_148,local_140);
          }
        }
        goto LAB_00103682;
      }
      break;
    }
  }
  if (dev_debug != '\0') {
    fwrite("[using arbitrary-precision arithmetic] ",1,0x27,_stderr);
  }
  mpz_init_set_str(&local_148,pbVar18,10);
  lbuf_putmpz(&local_148);
  lbuffered[0x103ce0] = ':';
  lbuffered = lbuffered + 1;
  mp_factor(&local_148,&local_168);
  if (0 < local_158) {
    lVar25 = 0;
    pvVar11 = local_160;
    do {
      while( true ) {
        uVar13 = 0;
        if (*(long *)((long)pvVar11 + lVar25 * 8) == 0) break;
        do {
          lbuffered[0x103ce0] = ' ';
          lbuffered = lbuffered + 1;
          lbuf_putmpz((void *)((long)local_168 + lVar25 * 0x10));
          pvVar11 = local_160;
          if (print_exponents != '\0') {
            puVar16 = (ulong *)(lVar25 * 8 + (long)local_160);
            if (1 < *puVar16) {
              lbuffered[0x103ce0] = '^';
              uVar13 = *puVar16;
              pcVar23 = &dev_debug;
              do {
                pcVar24 = pcVar23;
                pcVar23 = pcVar24 + -1;
                *pcVar23 = (char)uVar13 + (char)(uVar13 / 10) * -10 + '0';
                bVar3 = 9 < uVar13;
                uVar13 = uVar13 / 10;
              } while (bVar3);
              pcVar21 = pcVar23;
              pcVar22 = lbuffered + 0x103ce1;
              do {
                pcVar20 = pcVar21 + (ulong)bVar27 * -2 + 1;
                *pcVar22 = *pcVar21;
                pcVar21 = pcVar20;
                pcVar22 = pcVar22 + (ulong)bVar27 * -2 + 1;
              } while (pcVar20 < &dev_debug);
              lVar17 = (long)&dev_debug - (long)pcVar23;
              if (&dev_debug < pcVar24) {
                lVar17 = 1;
              }
              lbuffered = lbuffered + 0x103ce1 + lVar17 + -0x103ce0;
            }
            goto LAB_001035ca;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < *(ulong *)((long)local_160 + lVar25 * 8));
        lVar25 = lVar25 + 1;
        if (local_158 <= lVar25) goto LAB_0010363a;
      }
LAB_001035ca:
      lVar25 = lVar25 + 1;
    } while (lVar25 < local_158);
LAB_0010363a:
    if (0 < local_158) {
      lVar25 = 0;
      do {
        lVar17 = lVar25 + 1;
        mpz_clear((void *)(lVar25 * 0x10 + (long)local_168));
        lVar25 = lVar17;
      } while (lVar17 < local_158);
    }
  }
  free(local_168);
  free(local_160);
  mpz_clear(&local_148);
LAB_00103682:
  lbuf_putnl();
  uVar7 = 1;
LAB_001034a8:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
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
    goto LAB_001039ba;
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
    if (pcVar6 != (char *)0x0) goto LAB_00103b95;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","factor");
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) {
LAB_00103b95:
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
LAB_001039ba:
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
LAB_00106294:
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
LAB_0010642e:
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
        goto LAB_00106294;
      }
      usage(1);
      goto LAB_0010642e;
    }
    print_exponents = 1;
  } while( true );
}


