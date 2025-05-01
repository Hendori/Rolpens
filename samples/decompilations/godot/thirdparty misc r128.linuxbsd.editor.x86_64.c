
undefined8 r128__norm(ulong *param_1,ulong *param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  byte bVar5;
  byte bVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  
  uVar1 = *param_1;
  uVar7 = param_2[1];
  uVar2 = *param_2;
  uVar9 = param_1[1];
  if (uVar7 == 0) {
    if (uVar2 == 0) {
      return 1;
    }
    uVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> uVar7 == 0; uVar7 = uVar7 - 1) {
      }
    }
    iVar12 = (int)(uVar7 ^ 0x3f);
    if (uVar9 != 0) {
      lVar4 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      if ((int)((uint)lVar4 ^ 0x3f) <= iVar12) {
        return 1;
      }
    }
    if (iVar12 == 0) {
      uVar10 = 0;
      uVar11 = 0;
      uVar7 = uVar2;
      uVar8 = uVar9;
      uVar9 = uVar1;
    }
    else {
      bVar5 = (byte)(uVar7 ^ 0x3f);
      uVar10 = 0;
      uVar11 = 0;
      uVar7 = uVar2 << (bVar5 & 0x3f);
      uVar8 = uVar1 >> (0x40 - bVar5 & 0x3f) | uVar9 << (bVar5 & 0x3f);
      uVar9 = uVar1 << (bVar5 & 0x3f);
    }
  }
  else {
    uVar3 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> uVar3 == 0; uVar3 = uVar3 - 1) {
      }
    }
    uVar8 = 0;
    uVar10 = uVar2;
    uVar11 = uVar1;
    if ((int)(uVar3 ^ 0x3f) != 0) {
      bVar5 = (byte)(uVar3 ^ 0x3f);
      bVar6 = 0x40 - bVar5;
      uVar10 = uVar2 << (bVar5 & 0x3f);
      uVar11 = uVar1 << (bVar5 & 0x3f);
      uVar7 = uVar7 << (bVar5 & 0x3f) | uVar2 >> (bVar6 & 0x3f);
      uVar8 = uVar9 >> (bVar6 & 0x3f);
      uVar9 = uVar9 << (bVar5 & 0x3f) | uVar1 >> (bVar6 & 0x3f);
    }
  }
  *param_3 = uVar8;
  *param_1 = uVar11;
  param_1[1] = uVar9;
  *param_2 = uVar10;
  param_2[1] = uVar7;
  return 0;
}



int r128__format_isra_0(char *param_1,long param_2,ulong param_3,ulong param_4,int *param_5)

{
  bool bVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  ulong uVar4;
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  char *pcVar13;
  ulong in_R10;
  char *pcVar14;
  char cVar15;
  int iVar16;
  long in_FS_OFFSET;
  bool bVar17;
  uint local_e0;
  undefined8 local_d0;
  char local_c8 [136];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  bVar17 = (long)param_4 < 0;
  local_d0 = param_4;
  if (bVar17) {
    uVar4 = ~param_3;
    param_3 = uVar4 + 1;
    local_d0 = ~param_4 + (ulong)(0xfffffffffffffffe < uVar4);
  }
  uVar4 = local_d0;
  uVar12 = param_5[2];
  iVar10 = 0;
  if (-1 < param_5[1]) {
    iVar10 = param_5[1];
  }
  if ((int)uVar12 < 0) {
    uVar12 = 0x14;
    bVar1 = false;
LAB_001001a9:
    local_e0 = 0xffffffff;
    iVar11 = 0;
    iVar16 = param_5[4];
    bVar3 = bVar1;
    if (param_3 != 0) goto LAB_001002a8;
LAB_001001b6:
    bVar1 = bVar3;
    if (iVar16 != 0) goto LAB_001002a8;
    pcVar14 = local_c8;
    pcVar8 = local_c8;
  }
  else {
    if (uVar12 < 0x6c) {
      bVar1 = true;
      goto LAB_001001a9;
    }
    local_e0 = uVar12 - 0x6c;
    iVar11 = uVar12 - 0x6b;
    iVar16 = param_5[4];
    uVar12 = 0x6b;
    bVar1 = true;
    bVar3 = true;
    if (param_3 == 0) goto LAB_001001b6;
LAB_001002a8:
    pcVar14 = local_c8;
    bVar3 = false;
    pcVar8 = pcVar14;
    while( true ) {
      if ((param_3 == 0) && ((uVar12 == 0 || (!bVar1)))) {
        if (!bVar3) goto LAB_0010031f;
        local_d0 = in_R10;
        if (iVar16 != 0 || uVar12 != 0) goto LAB_00100328;
        goto LAB_001001ca;
      }
      if (uVar12 == (int)pcVar8 - (int)pcVar14) break;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = param_3;
      auVar2 = auVar2 * ZEXT816(10);
      in_R10 = auVar2._8_8_;
      param_3 = auVar2._0_8_;
      bVar3 = true;
      *pcVar8 = auVar2[8] + '0';
      pcVar8 = pcVar8 + 1;
    }
    if (bVar3) {
      local_d0 = in_R10;
    }
    if ((long)param_3 < 0) {
      pcVar5 = pcVar8 + -1;
      if (pcVar14 <= pcVar5) {
        do {
          if ((char)(*pcVar5 + '\x01') < ':') {
            *pcVar5 = *pcVar5 + '\x01';
            goto LAB_0010031f;
          }
          *pcVar5 = '0';
          pcVar5 = pcVar5 + -1;
        } while (pcVar5 != (char *)((long)&local_d0 + 7));
      }
      uVar4 = uVar4 + 1;
    }
LAB_0010031f:
    if (iVar16 != 0 || uVar12 != 0) {
LAB_00100328:
      *pcVar8 = R128_decimal;
      pcVar14 = pcVar8;
      pcVar8 = pcVar8 + 1;
    }
  }
LAB_001001ca:
  do {
    pcVar5 = pcVar8;
    *pcVar5 = (char)uVar4 + (char)(uVar4 / 10) * -10 + '0';
    bVar1 = 9 < uVar4;
    uVar4 = uVar4 / 10;
    pcVar8 = pcVar5 + 1;
  } while (bVar1);
  uVar7 = iVar10 - ((int)(pcVar5 + 1) - (int)local_c8);
  pcVar6 = param_1 + param_2 + -1;
  uVar12 = uVar7 - 1;
  uVar4 = (ulong)uVar12;
  pcVar8 = param_1;
  if (param_5[5] == 0) {
    pcVar9 = param_1;
    if (param_5[3] == 0) {
      cVar15 = ' ';
      if ((int)uVar12 < 1) goto LAB_00100343;
LAB_001004d2:
      pcVar8 = pcVar9 + uVar4;
      do {
        if (pcVar9 < pcVar6) {
          *pcVar9 = cVar15;
        }
        pcVar9 = pcVar9 + 1;
        uVar12 = 0;
      } while (pcVar8 != pcVar9);
LAB_001004f1:
      if (param_5[5] != 0) {
        uVar4 = (ulong)uVar12;
        goto LAB_00100343;
      }
    }
    else {
      if (bVar17) {
        cVar15 = '-';
        if (pcVar6 <= param_1) goto LAB_0010057a;
LAB_001005da:
        *param_1 = cVar15;
        pcVar8 = param_1 + 1;
        cVar15 = '0';
        pcVar9 = pcVar8;
        if (0 < (int)uVar12) goto LAB_001004d2;
        goto LAB_001004f1;
      }
      if (*param_5 == 2) {
        if (param_1 < pcVar6) {
          cVar15 = '+';
          goto LAB_001005da;
        }
      }
      else {
        if (*param_5 != 1) {
          uVar4 = (ulong)uVar7;
          cVar15 = '0';
          if ((int)uVar7 < 1) goto LAB_00100359;
          goto LAB_001004d2;
        }
        if (param_1 < pcVar6) {
          cVar15 = ' ';
          goto LAB_001005da;
        }
      }
LAB_0010057a:
      pcVar8 = param_1 + 1;
      cVar15 = '0';
      pcVar9 = pcVar8;
      if (0 < (int)uVar12) goto LAB_001004d2;
    }
    uVar4 = (ulong)uVar12;
    if (param_5[3] != 0) goto LAB_00100359;
  }
LAB_00100343:
  if (bVar17) {
    if (pcVar8 < pcVar6) {
      *pcVar8 = '-';
    }
  }
  else if (*param_5 == 2) {
    if (pcVar8 < pcVar6) {
      *pcVar8 = '+';
    }
  }
  else {
    if (*param_5 != 1) {
      uVar4 = (ulong)((int)uVar4 + 1);
      goto LAB_00100359;
    }
    if (pcVar8 < pcVar6) {
      *pcVar8 = ' ';
    }
  }
  pcVar8 = pcVar8 + 1;
LAB_00100359:
  if (pcVar14 <= pcVar5) {
    pcVar9 = pcVar5;
    pcVar13 = pcVar8;
    do {
      if (pcVar13 < pcVar6) {
        *pcVar13 = *pcVar9;
      }
      pcVar9 = pcVar9 + -1;
      pcVar13 = pcVar13 + 1;
    } while (pcVar9 != pcVar14 + -1);
    pcVar8 = pcVar8 + (long)(pcVar5 + (1 - (long)pcVar14));
  }
  pcVar5 = local_c8;
  pcVar9 = pcVar8;
  if (local_c8 < pcVar14) {
    do {
      if (pcVar9 < pcVar6) {
        *pcVar9 = *pcVar5;
      }
      pcVar5 = pcVar5 + 1;
      pcVar9 = pcVar9 + 1;
    } while (pcVar14 != pcVar5);
    pcVar8 = pcVar8 + ((long)pcVar14 - (long)local_c8);
  }
  if ((param_5[5] != 0) && (iVar10 = param_5[3], 0 < (int)uVar4)) {
    pcVar14 = pcVar8 + uVar4;
    do {
      if (pcVar8 < pcVar6) {
        *pcVar8 = (-(iVar10 == 0) & 0xf0U) + 0x30;
      }
      pcVar8 = pcVar8 + 1;
    } while (pcVar8 != pcVar14);
  }
  pcVar14 = pcVar8 + (ulong)local_e0 + 1;
  pcVar5 = pcVar8;
  if (iVar11 != 0) {
    do {
      if (pcVar5 < pcVar6) {
        *pcVar5 = '0';
      }
      pcVar5 = pcVar5 + 1;
      pcVar8 = pcVar14;
    } while (pcVar5 != pcVar14);
  }
  if (pcVar6 < pcVar8) {
    *pcVar6 = '\0';
  }
  else {
    *pcVar8 = '\0';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (int)pcVar8 - (int)param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void r128__udiv_isra_0(ulong *param_1,ulong param_2,long param_3,ulong param_4,ulong param_5)

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
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long in_FS_OFFSET;
  ulong local_60;
  ulong local_58;
  long local_50;
  ulong local_48;
  ulong local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = param_2;
  local_50 = param_3;
  local_48 = param_4;
  local_40 = param_5;
  iVar11 = r128__norm(&local_58,&local_48,&local_60);
  uVar13 = _UNK_00101b88;
  if (iVar11 == 0) {
    if (local_60 < local_40) {
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_40;
      auVar4._8_8_ = local_60;
      auVar4._0_8_ = local_50;
      uVar16 = SUB168(auVar4 / auVar2,0);
      uVar13 = SUB168(auVar4 % auVar2,0);
    }
    else {
      uVar13 = local_40 + local_50;
      uVar16 = 0xffffffffffffffff;
    }
    while( true ) {
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar16;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = local_48;
      auVar5 = auVar5 * auVar8;
      if (auVar5._8_8_ == uVar13) {
        if (auVar5._0_8_ <= local_58) goto LAB_001006c9;
      }
      else if (auVar5._8_8_ <= uVar13) goto LAB_001006c9;
      uVar16 = uVar16 - 1;
      if (-local_40 <= uVar13) break;
      uVar13 = uVar13 + local_40;
    }
    auVar7._8_8_ = 0;
    auVar7._0_8_ = local_48;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar16;
    auVar5 = auVar7 * auVar10;
LAB_001006c9:
    uVar13 = local_58 - auVar5._0_8_;
    uVar17 = (local_50 - (auVar5._8_8_ + uVar16 * local_40)) - (ulong)(local_58 < auVar5._0_8_);
    if (uVar17 < local_40) {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_40;
      auVar3._8_8_ = uVar17;
      auVar3._0_8_ = uVar13;
      uVar12 = SUB168(auVar3 / auVar1,0);
      uVar14 = SUB168(auVar3 % auVar1,0);
    }
    else {
      uVar14 = uVar13 + local_40;
      uVar12 = 0xffffffffffffffff;
    }
    do {
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar12;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = local_48;
      uVar15 = SUB168(auVar6 * auVar9,8);
      if (uVar15 == uVar14) {
        if (SUB168(auVar6 * auVar9,0) == 0) goto LAB_00100710;
      }
      else if (uVar15 <= uVar14) goto LAB_00100710;
      uVar12 = uVar12 - 1;
      if (-local_40 <= uVar14) goto LAB_00100710;
      uVar14 = uVar14 + local_40;
    } while( true );
  }
  *param_1 = __LC0;
  param_1[1] = uVar13;
LAB_00100717:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00100710:
  *param_1 = uVar12;
  param_1[1] = uVar16;
  local_48 = uVar13;
  local_40 = uVar17;
  goto LAB_00100717;
}



void r128FromInt(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  param_1[1] = param_2;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void r128FromFloat(double param_1,ulong *param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  double dVar5;
  
  uVar2 = _UNK_00101b98;
  uVar4 = _UNK_00101b88;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = 0;
  if (_LC1 <= param_1) {
    if (param_1 < _LC3) {
      if (param_1 < 0.0) {
        uVar4 = (ulong)(double)((ulong)param_1 ^ __LC5);
        dVar5 = ((double)((ulong)param_1 ^ __LC5) - (double)(long)uVar4) * __LC6;
        if (_LC3 <= dVar5) {
          uVar2 = (long)(dVar5 - _LC3) ^ 0x8000000000000000;
        }
        else {
          uVar2 = (ulong)dVar5;
        }
        uVar3 = ~uVar4 + (ulong)(0xfffffffffffffffe < ~uVar2);
        uVar4 = ~uVar2 + 1;
        uVar2 = uVar3;
      }
      else {
        uVar2 = (ulong)param_1;
        dVar5 = (param_1 - (double)(long)uVar2) * __LC6;
        if (_LC3 <= dVar5) {
          uVar3 = (long)(dVar5 - _LC3) ^ 0x8000000000000000;
          uVar4 = uVar3;
        }
        else {
          uVar3 = (ulong)dVar5;
          uVar4 = uVar3;
        }
      }
      *param_2 = uVar4;
      param_2[1] = uVar2;
    }
    else {
      *param_2 = __LC0;
      param_2[1] = uVar4;
    }
  }
  else {
    *param_2 = __LC2;
    param_2[1] = uVar2;
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_2,param_3,uVar3);
  }
  return;
}



void r128FromString(undefined1 (*param_1) [16],byte *param_2,ulong *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  bool bVar3;
  byte bVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong uVar10;
  byte *pbVar11;
  
  *param_1 = (undefined1  [16])0x0;
  while( true ) {
    bVar4 = *param_2;
    if (0x20 < bVar4) break;
    if ((0x100002e00U >> ((ulong)bVar4 & 0x3f) & 1) == 0) goto LAB_00100960;
    param_2 = param_2 + 1;
  }
  if (bVar4 == 0x2d) {
    bVar4 = param_2[1];
    bVar3 = true;
    param_2 = param_2 + 1;
  }
  else {
    if (bVar4 == 0x2b) {
      bVar4 = param_2[1];
      param_2 = param_2 + 1;
    }
LAB_00100960:
    bVar3 = false;
  }
  uVar10 = 10;
  if ((bVar4 == 0x30) && (uVar10 = 10, (param_2[1] & 0xdf) == 0x58)) {
    param_2 = param_2 + 2;
    uVar10 = 0x10;
  }
  uVar9 = 0;
  do {
    bVar4 = *param_2;
    iVar6 = (int)(char)bVar4;
    if ((byte)(bVar4 - 0x30) < 10) {
      lVar7 = (long)(iVar6 + -0x30);
    }
    else {
      if (uVar10 != 0x10) goto LAB_001009a3;
      if ((char)bVar4 < 'a') {
        if (5 < (byte)(bVar4 + 0xbf)) goto LAB_001009a3;
        lVar7 = (long)(iVar6 + -0x37);
      }
      else {
        if ('f' < (char)bVar4) goto LAB_001009a3;
        lVar7 = (long)(iVar6 + -0x57);
      }
    }
    param_2 = param_2 + 1;
    uVar9 = uVar9 * uVar10 + lVar7;
  } while( true );
LAB_00100a7c:
  pbVar8 = pbVar11 + -1;
  if (pbVar8 < param_2 + 1) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    do {
      bVar4 = *pbVar8;
      iVar6 = (int)(char)bVar4;
      if ((byte)(bVar4 - 0x30) < 10) {
        lVar7 = (long)(iVar6 + -0x30);
      }
      else if ((byte)(bVar4 + 0x9f) < 6) {
        lVar7 = (long)(iVar6 + -0x57);
      }
      else {
        lVar7 = (long)(iVar6 + -0x37);
      }
      pbVar8 = pbVar8 + -1;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar10;
      auVar2._8_8_ = lVar7;
      auVar2._0_8_ = uVar5;
      uVar5 = SUB168(auVar2 / auVar1,0);
    } while (param_2 != pbVar8);
  }
  goto LAB_001009b1;
LAB_001009a3:
  uVar5 = 0;
  pbVar11 = param_2;
  if (bVar4 == R128_decimal) {
    pbVar11 = param_2 + 1;
    do {
      bVar4 = *pbVar11;
      if (9 < (byte)(bVar4 - 0x30)) {
        if (uVar10 != 0x10) goto LAB_00100a7c;
        do {
          if (5 < (byte)((bVar4 & 0xdf) + 0xbf)) goto LAB_00100a7c;
          bVar4 = pbVar11[1];
          pbVar11 = pbVar11 + 1;
        } while (9 < (byte)(bVar4 - 0x30));
      }
      pbVar11 = pbVar11 + 1;
    } while( true );
  }
LAB_001009b1:
  *(ulong *)*param_1 = uVar5;
  *(ulong *)(*param_1 + 8) = uVar9;
  if (bVar3) {
    *(ulong *)*param_1 = ~uVar5 + 1;
    *(ulong *)(*param_1 + 8) = ~uVar9 + (ulong)(0xfffffffffffffffe < ~uVar5);
  }
  if (param_3 != (ulong *)0x0) {
    *param_3 = (ulong)pbVar11;
  }
  return;
}



long r128ToInt(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  if (-1 < lVar1) {
    return lVar1;
  }
  return (lVar1 + 1) - (ulong)(*param_1 == 0);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double r128ToFloat(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  double dVar3;
  
  uVar1 = param_1[1];
  if ((long)uVar1 < 0) {
    uVar2 = ~*param_1;
    dVar3 = (double)((ulong)((double)(uVar2 + 1) * __LC7 +
                            (double)(~uVar1 + (ulong)(0xfffffffffffffffe < uVar2))) ^ __LC5);
  }
  else {
    dVar3 = (double)*param_1 * __LC7 + (double)(long)uVar1;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    return dVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void r128ToStringOpt(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  r128__format_isra_0(param_1,param_2,*param_3,param_3[1],param_4);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void r128ToStringf(undefined8 param_1,undefined8 param_2,char *param_3,undefined8 *param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  long in_FS_OFFSET;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = __LC8;
  uVar6 = local_20;
  uStack_18 = _UNK_00101bb8;
  uVar7 = uStack_18;
  bVar1 = false;
  bVar2 = false;
  param_3 = param_3 + (*param_3 == '%');
  bVar3 = false;
  bVar4 = false;
  uVar9 = 0;
  do {
    cVar8 = *param_3;
    uStack_18._4_4_ = (undefined4)((ulong)_UNK_00101bb8 >> 0x20);
    local_20._0_4_ = (undefined4)__LC8;
    if (cVar8 == ' ') {
      if (uVar9 == 2) {
        if (bVar1) {
          uStack_18 = CONCAT44(uStack_18._4_4_,1);
          uVar7 = uStack_18;
        }
        uStack_18 = uVar7;
        if (bVar2) {
          uStack_18 = CONCAT44(1,(undefined4)uStack_18);
        }
        if (bVar3) {
          local_20 = CONCAT44(1,(undefined4)local_20);
          uVar6 = local_20;
        }
        local_20 = uVar6;
        if (bVar4) {
          local_28 = 2;
        }
        else {
          local_28 = 0;
        }
LAB_00100d63:
        r128__format_isra_0(param_1,param_2,*param_4,param_4[1],&local_28);
        if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      bVar4 = true;
      uVar9 = 1;
    }
    else if (cVar8 == '+') {
      bVar4 = true;
      uVar9 = 2;
    }
    else if (cVar8 == '0') {
      bVar3 = true;
    }
    else if (cVar8 == '-') {
      bVar2 = true;
    }
    else {
      if (cVar8 != '#') {
        if (bVar1) {
          uStack_18 = CONCAT44(uStack_18._4_4_,1);
          uVar7 = uStack_18;
        }
        uStack_18 = uVar7;
        if (bVar2) {
          uStack_18 = CONCAT44(1,(undefined4)uStack_18);
        }
        if (bVar3) {
          local_20 = CONCAT44(1,(undefined4)local_20);
          uVar6 = local_20;
        }
        local_20 = uVar6;
        uVar6 = local_20;
        uVar5 = 0;
        if (bVar4) {
          uVar5 = uVar9;
        }
        local_28 = (ulong)uVar5;
        if ((byte)(cVar8 - 0x30U) < 10) {
          iVar10 = 0;
          do {
            param_3 = param_3 + 1;
            iVar10 = cVar8 + -0x30 + iVar10 * 10;
            cVar8 = *param_3;
          } while ((byte)(cVar8 - 0x30U) < 10);
          local_28 = CONCAT44(iVar10,uVar5);
        }
        if (cVar8 == '.') {
          cVar8 = param_3[1];
          param_3 = param_3 + 1;
          local_20 = local_20 & 0xffffffff00000000;
          if ((byte)(cVar8 - 0x30U) < 10) {
            iVar10 = 0;
            do {
              param_3 = param_3 + 1;
              iVar10 = cVar8 + -0x30 + iVar10 * 10;
              cVar8 = *param_3;
            } while ((byte)(cVar8 - 0x30U) < 10);
            local_20 = CONCAT44(SUB84(uVar6,4),iVar10);
          }
        }
        goto LAB_00100d63;
      }
      bVar1 = true;
    }
    param_3 = param_3 + 1;
  } while( true );
}



void r128ToString(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  r128__format_isra_0(param_1,param_2,*param_3,param_3[1],R128__defaultFormat);
  return;
}



void r128Copy(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  return;
}



void r128Neg(long *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  *param_1 = ~uVar1 + 1;
  param_1[1] = ~param_2[1] + (ulong)(0xfffffffffffffffe < ~uVar1);
  return;
}



void r128Abs(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = param_2[1];
  uVar2 = *param_2;
  uVar3 = (long)uVar1 >> 0x3f;
  *param_1 = (uVar2 ^ uVar3) - uVar3;
  param_1[1] = ((uVar1 ^ uVar3) - uVar3) - (ulong)((uVar2 ^ uVar3) < uVar3);
  return;
}



void r128Nabs(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = param_2[1];
  uVar2 = *param_2;
  uVar3 = (long)uVar1 >> 0x3f;
  *param_1 = uVar3 - (uVar2 ^ uVar3);
  param_1[1] = (uVar3 - (uVar1 ^ uVar3)) - (ulong)(uVar3 < (uVar2 ^ uVar3));
  return;
}



void r128Not(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2 ^ 0xffffffff;
  param_1[1] = uVar1 ^ 0xffffffff;
  param_1[2] = uVar2 ^ 0xffffffff;
  param_1[3] = uVar3 ^ 0xffffffff;
  return;
}



void r128Or(ulong *param_1,ulong *param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_3[1];
  *param_1 = *param_2 | *param_3;
  param_1[1] = uVar1 | uVar2;
  return;
}



void r128And(ulong *param_1,ulong *param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_3[1];
  *param_1 = *param_2 & *param_3;
  param_1[1] = uVar1 & uVar2;
  return;
}



void r128Xor(ulong *param_1,ulong *param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_3[1];
  *param_1 = *param_2 ^ *param_3;
  param_1[1] = uVar1 ^ uVar2;
  return;
}



void r128Shl(ulong *param_1,ulong *param_2,byte param_3)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = param_2[1];
  uVar3 = *param_2;
  bVar1 = param_3 & 0x7f;
  if ((param_3 & 0x40) == 0) {
    if (bVar1 != 0) {
      *param_1 = uVar3 << (param_3 & 0x3f);
      param_1[1] = uVar2 << (param_3 & 0x3f) | uVar3 >> (0x40 - bVar1 & 0x3f);
      return;
    }
  }
  else {
    uVar2 = uVar3 << (bVar1 - 0x40 & 0x3f);
    uVar3 = 0;
  }
  *param_1 = uVar3;
  param_1[1] = uVar2;
  return;
}



void r128Shr(ulong *param_1,ulong *param_2,byte param_3)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  bVar3 = param_3 & 0x7f;
  if ((param_3 & 0x40) == 0) {
    if (bVar3 != 0) {
      param_1[1] = uVar2 >> (param_3 & 0x3f);
      *param_1 = uVar1 >> (param_3 & 0x3f) | uVar2 << (0x40 - bVar3 & 0x3f);
      return;
    }
  }
  else {
    uVar1 = uVar2 >> (bVar3 - 0x40 & 0x3f);
    uVar2 = 0;
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



void r128Sar(ulong *param_1,ulong *param_2,byte param_3)

{
  ulong uVar1;
  byte bVar2;
  ulong uVar3;
  
  uVar3 = *param_2;
  uVar1 = param_2[1];
  bVar2 = param_3 & 0x7f;
  if ((param_3 & 0x40) == 0) {
    if (bVar2 != 0) {
      param_1[1] = (long)uVar1 >> (param_3 & 0x3f);
      *param_1 = uVar3 >> (param_3 & 0x3f) | uVar1 << (0x40 - bVar2 & 0x3f);
      return;
    }
  }
  else {
    uVar3 = (long)uVar1 >> (bVar2 - 0x40 & 0x3f);
    uVar1 = (long)uVar1 >> 0x3f;
  }
  *param_1 = uVar3;
  param_1[1] = uVar1;
  return;
}



void r128Add(long *param_1,ulong *param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *param_3;
  uVar2 = *param_2;
  *param_1 = uVar1 + *param_2;
  param_1[1] = param_3[1] + param_2[1] + (ulong)CARRY8(uVar1,uVar2);
  return;
}



void r128Sub(long *param_1,ulong *param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *param_2;
  uVar2 = *param_3;
  *param_1 = uVar1 - *param_3;
  param_1[1] = (param_2[1] - param_3[1]) - (ulong)(uVar1 < uVar2);
  return;
}



void r128Mul(undefined1 (*param_1) [16],ulong *param_2,ulong *param_3)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long in_FS_OFFSET;
  bool bVar14;
  ulong local_58;
  ulong uStack_50;
  
  local_58 = *param_2;
  uStack_50 = param_2[1];
  uVar13 = *param_3;
  uVar11 = param_3[1];
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  bVar14 = (long)uStack_50 < 0;
  if (bVar14) {
    uVar12 = ~local_58;
    local_58 = uVar12 + 1;
    uStack_50 = ~uStack_50 + (ulong)(0xfffffffffffffffe < uVar12);
  }
  if ((long)uVar11 < 0) {
    uVar12 = ~uVar13;
    uVar13 = uVar12 + 1;
    uVar11 = ~uVar11 + (ulong)(0xfffffffffffffffe < uVar12);
    bVar14 = !bVar14;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_58;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar13;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_58;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar11;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar13;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uStack_50;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar11 * uStack_50;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = SUB168(auVar2 * auVar5,8);
  auVar9 = auVar3 * auVar6 + auVar4 * auVar7 + (auVar10 << 0x40) + auVar8 +
           (auVar2 * auVar5 >> 0x3f & (undefined1  [16])0x1);
  uVar13 = auVar9._0_8_;
  if (bVar14) {
    auVar9._8_8_ = ~auVar9._8_8_ + (ulong)(0xfffffffffffffffe < ~uVar13);
    auVar9._0_8_ = ~uVar13 + 1;
  }
  *param_1 = auVar9;
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void r128Div(ulong *param_1,ulong *param_2,ulong *param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  ulong local_58;
  ulong uStack_50;
  ulong local_48;
  ulong local_38;
  ulong uStack_30;
  long local_20;
  
  local_58 = *param_2;
  uStack_50 = param_2[1];
  local_48 = *param_3;
  uVar2 = param_3[1];
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((long)uStack_50 < 0) {
    bVar1 = true;
    uVar3 = ~local_58;
    local_58 = uVar3 + 1;
    uStack_50 = ~uStack_50 + (ulong)(0xfffffffffffffffe < uVar3);
    if ((local_48 == 0) && (uVar2 == 0)) {
      uVar3 = 0x8000000000000000;
      uVar2 = 0;
      goto LAB_0010137a;
    }
  }
  else {
    if ((local_48 == 0) && (uVar2 == 0)) {
      uVar2 = 0xffffffffffffffff;
      uVar3 = 0x7fffffffffffffff;
LAB_0010137a:
      *param_1 = uVar2;
      param_1[1] = uVar3;
      goto LAB_00101343;
    }
    bVar1 = false;
  }
  if ((long)uVar2 < 0) {
    local_48 = ~local_48 + 1;
    bVar1 = (bool)(bVar1 ^ 1);
  }
  r128__udiv_isra_0(&local_38,local_58,uStack_50,local_48);
  if (bVar1) {
    uVar2 = ~local_38;
    local_38 = uVar2 + 1;
    uStack_30 = ~uStack_30 + (ulong)(0xfffffffffffffffe < uVar2);
  }
  *param_1 = local_38;
  param_1[1] = uStack_30;
LAB_00101343:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void r128Mod(long *param_1,ulong *param_2,ulong *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  bool bVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long in_FS_OFFSET;
  ulong local_68;
  ulong uStack_60;
  ulong local_58;
  ulong uStack_50;
  ulong local_48;
  ulong local_40;
  long local_30;
  
  local_68 = *param_2;
  uStack_60 = param_2[1];
  local_58 = *param_3;
  uStack_50 = param_3[1];
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((long)uStack_60 < 0) {
    bVar5 = true;
    uVar7 = ~local_68;
    local_68 = uVar7 + 1;
    uStack_60 = ~uStack_60 + (ulong)(0xfffffffffffffffe < uVar7);
    if ((local_58 == 0) && (uStack_50 == 0)) {
      lVar8 = -0x8000000000000000;
      lVar11 = 0;
      goto LAB_00101552;
    }
  }
  else {
    if ((local_58 == 0) && (uStack_50 == 0)) {
      lVar11 = -1;
      lVar8 = 0x7fffffffffffffff;
LAB_00101552:
      *param_1 = lVar11;
      param_1[1] = lVar8;
      goto LAB_00101512;
    }
    bVar5 = false;
  }
  if ((long)uStack_50 < 0) {
    uVar7 = ~local_58;
    local_58 = uVar7 + 1;
    uStack_50 = ~uStack_50 + (ulong)(0xfffffffffffffffe < uVar7);
    bVar5 = (bool)(bVar5 ^ 1);
  }
  iVar6 = r128__norm(&local_68,&local_58,&local_48);
  uVar7 = 0xffffffffffffffff;
  if (iVar6 == 0) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uStack_50;
    auVar2._8_8_ = local_48;
    auVar2._0_8_ = uStack_60;
    uVar7 = SUB168(auVar2 / auVar1,0);
    uVar9 = SUB168(auVar2 % auVar1,0);
    do {
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar7;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_58;
      uVar10 = SUB168(auVar3 * auVar4,8);
      if (uVar10 == uVar9) {
        if (SUB168(auVar3 * auVar4,0) <= local_68) break;
      }
      else if (uVar10 <= uVar9) break;
      uVar7 = uVar7 - 1;
      if (-uStack_50 <= uVar9) break;
      uVar9 = uVar9 + uStack_50;
    } while( true );
  }
  local_48 = 0;
  local_40 = -uVar7;
  if (!bVar5) {
    local_40 = uVar7;
  }
  r128Mul(&local_48,&local_48,param_3);
  uVar7 = *param_2;
  *param_1 = uVar7 - local_48;
  param_1[1] = (param_2[1] - local_40) - (ulong)(uVar7 < local_48);
LAB_00101512:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void r128Rsqrt(ulong *param_1,ulong *param_2)

{
  long lVar1;
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
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  int iVar36;
  ulong uVar37;
  ulong uVar38;
  long lVar39;
  long lVar40;
  ulong uVar41;
  undefined8 uVar42;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = param_2[1];
  if ((long)uVar2 < 0) {
    uVar42 = 0x8000000000000000;
LAB_0010181a:
    auVar27._8_8_ = uVar42;
    auVar27._0_8_ = param_2;
    uVar38 = 0;
  }
  else {
    uVar38 = *param_2;
    if (uVar2 == 0) {
      if (uVar38 == 0) {
        uVar42 = 0;
        param_2 = (ulong *)0x0;
        goto LAB_0010181a;
      }
      lVar40 = 0x3f;
      if (uVar38 != 0) {
        for (; uVar38 >> lVar40 == 0; lVar40 = lVar40 + -1) {
        }
      }
      lVar39 = 0;
      lVar40 = 1L << ((byte)((int)((uint)lVar40 ^ 0x3f) >> 1) & 0x3f);
    }
    else {
      lVar39 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar39 == 0; lVar39 = lVar39 + -1) {
        }
      }
      lVar40 = 0;
      lVar39 = 1L << ((byte)((int)(((uint)lVar39 ^ 0x3f) + 0x40) >> 1) & 0x3f);
    }
    auVar24._8_8_ = lVar40;
    auVar24._0_8_ = lVar39;
    uVar33 = uVar2 << 0x3f | uVar38 >> 1;
    iVar36 = 7;
    do {
      uVar41 = auVar24._8_8_;
      uVar38 = auVar24._0_8_;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar38;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar38;
      uVar34 = SUB168(auVar3 * auVar13,8);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar41;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = uVar41;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar38;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar41;
      uVar30 = SUB168(auVar5 * auVar15,0);
      uVar35 = uVar30 * 2;
      uVar31 = uVar34 + uVar35;
      uVar37 = -(SUB168(auVar3 * auVar13,0) >> 0x3f);
      uVar32 = uVar31 + uVar37;
      uVar35 = SUB168(auVar4 * auVar14,0) + (SUB168(auVar5 * auVar15,8) << 1 | uVar30 >> 0x3f) +
               (ulong)CARRY8(uVar34,uVar35) + (ulong)CARRY8(uVar31,uVar37);
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar32;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar33;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar32;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar2 >> 1;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar35;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = uVar33;
      auVar28._8_8_ = uVar35 * (uVar2 >> 1);
      auVar28._0_8_ = SUB168(auVar6 * auVar16,8);
      auVar29._8_8_ = 0;
      auVar29._0_8_ = -(SUB168(auVar6 * auVar16,0) >> 0x3f);
      auVar29 = auVar8 * auVar18 + auVar7 * auVar17 + auVar28 + auVar29;
      uVar35 = auVar29._0_8_;
      uVar30 = 0x8000000000000000 - uVar35;
      uVar35 = (1 - auVar29._8_8_) - (ulong)(0x8000000000000000 < uVar35);
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar30;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar38;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar35;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar38;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar30;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar41;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar35;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar41;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = SUB168(auVar12 * auVar22,0);
      auVar23._8_8_ = 0;
      auVar23._0_8_ = SUB168(auVar9 * auVar19,8);
      auVar3 = auVar10 * auVar20 + auVar11 * auVar21 + (auVar25 << 0x40) + auVar23 +
               (auVar9 * auVar19 >> 0x3f & (undefined1  [16])0x1);
      auVar26._8_8_ = auVar3._8_8_;
      auVar26._0_8_ = uVar38;
      auVar27 = auVar24;
      if (auVar24 == auVar3) break;
      iVar36 = iVar36 + -1;
      uVar38 = auVar3._0_8_;
      auVar24 = auVar3;
      auVar27 = auVar26;
    } while (iVar36 != 0);
  }
  *param_1 = uVar38;
  param_1[1] = auVar27._8_8_;
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void r128Sqrt(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  long lVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  bool bVar10;
  ulong uStack_58;
  ulong uStack_50;
  long local_40;
  
  uVar1 = param_2[1];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((long)uVar1 < 0) {
    uVar7 = 0x8000000000000000;
LAB_0010194a:
    uVar8 = uVar7;
    uVar9 = 0;
  }
  else {
    uVar7 = *param_2;
    uVar9 = uVar7;
    if (uVar1 == 0) {
      if (uVar7 == 0) goto LAB_0010194a;
      lVar2 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar4 = (int)(((uint)lVar2 ^ 0x3f) + 1) >> 1;
      if (iVar4 == 0) {
        uVar8 = 0;
      }
      else {
        bVar3 = (byte)iVar4;
        uVar9 = uVar7 << (bVar3 & 0x3f);
        uVar8 = uVar7 >> (0x40 - bVar3 & 0x3f);
      }
    }
    else {
      lVar2 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar4 = (int)lVar2 >> 1;
      uVar8 = uVar1;
      if (iVar4 != 0) {
        bVar3 = (byte)iVar4;
        uVar9 = uVar1 << (0x40 - bVar3 & 0x3f) | uVar7 >> (bVar3 & 0x3f);
        uVar8 = uVar1 >> (bVar3 & 0x3f);
      }
    }
    iVar4 = 7;
    do {
      r128__udiv_isra_0(&uStack_58,uVar7,uVar1,uVar9,uVar8);
      bVar10 = CARRY8(uVar9,uStack_58);
      uStack_58 = uVar9 + uStack_58;
      uStack_50 = uVar8 + uStack_50 + (ulong)bVar10;
      uVar6 = uStack_50 >> 1;
      uVar5 = uStack_50 << 0x3f | uStack_58 >> 1;
      if ((uVar9 == uVar5) && (uVar6 == uVar8)) break;
      iVar4 = iVar4 + -1;
      uVar8 = uVar6;
      uVar9 = uVar5;
    } while (iVar4 != 0);
  }
  *param_1 = uVar9;
  param_1[1] = uVar8;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



int r128Cmp(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  int iVar4;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  if (uVar2 == uVar1) {
    iVar4 = 0;
    if (*param_1 != *param_2) {
      return (-(uint)(*param_2 < *param_1) & 2) - 1;
    }
  }
  else {
    bVar3 = uVar2 != uVar1 && (long)uVar1 <= (long)uVar2;
    iVar4 = (bVar3 - 1) + (uint)bVar3;
  }
  return iVar4;
}



ulong r128IsNeg(long param_1)

{
  return *(ulong *)(param_1 + 8) >> 0x3f;
}



void r128Min(ulong *param_1,ulong *param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_3[1];
  if (uVar1 == uVar2) {
    if (*param_2 < *param_3) goto LAB_00101a48;
  }
  else if ((long)uVar1 <= (long)uVar2) {
LAB_00101a48:
    uVar2 = *param_2;
    param_1[1] = uVar1;
    *param_1 = uVar2;
    return;
  }
  uVar1 = *param_3;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



void r128Max(ulong *param_1,ulong *param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_3[1];
  if (uVar1 == uVar2) {
    if (*param_2 <= *param_3) goto LAB_00101a88;
  }
  else if ((long)uVar1 <= (long)uVar2) {
LAB_00101a88:
    uVar1 = *param_3;
    param_1[1] = uVar2;
    *param_1 = uVar1;
    return;
  }
  uVar2 = *param_2;
  param_1[1] = uVar1;
  *param_1 = uVar2;
  return;
}



void r128Floor(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  *param_1 = 0;
  param_1[1] = uVar1;
  return;
}



void r128Ceil(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_2;
  lVar1 = param_2[1];
  *param_1 = 0;
  param_1[1] = (ulong)(lVar2 != 0) + lVar1;
  return;
}



void r128Round(undefined8 *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_2[1];
  uVar2 = *param_2;
  *param_1 = 0;
  param_1[1] = (uVar1 + 1) - (ulong)(uVar2 < 0x8000000000000000U - ((long)uVar1 >> 0x3f));
  return;
}


