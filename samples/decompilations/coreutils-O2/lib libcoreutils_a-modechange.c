
undefined2 * mode_compile(byte *param_1)

{
  char cVar1;
  byte *pbVar2;
  undefined2 *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  byte bVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  byte bVar13;
  bool bVar14;
  
  bVar7 = *param_1;
  if ((byte)(bVar7 - 0x30) < 8) {
    uVar6 = 0;
    pbVar4 = param_1;
    do {
      bVar7 = *pbVar4;
      pbVar4 = pbVar4 + 1;
      uVar6 = (char)bVar7 + -0x30 + uVar6 * 8;
      if (0xfff < uVar6) {
        return (undefined2 *)0x0;
      }
    } while ((byte)(*pbVar4 - 0x30) < 8);
    if (*pbVar4 != 0) {
      return (undefined2 *)0x0;
    }
    uVar11 = uVar6 & 0xc00 | 0x3ff;
    if (4 < (long)pbVar4 - (long)param_1) {
      uVar11 = 0xfff;
    }
    puVar3 = (undefined2 *)xmalloc(0x20);
    *puVar3 = 0x13d;
    *(undefined4 *)(puVar3 + 2) = 0xfff;
    *(uint *)(puVar3 + 4) = uVar6;
    *(uint *)(puVar3 + 6) = uVar11;
    *(undefined1 *)((long)puVar3 + 0x11) = 0;
    return puVar3;
  }
  lVar10 = 1;
  pbVar4 = param_1;
  while (bVar7 != 0) {
    if (bVar7 < 0x3e) {
      lVar10 = (lVar10 + 1) - (ulong)((0x2000280000000000U >> ((ulong)bVar7 & 0x3f) & 1) == 0);
    }
    pbVar5 = pbVar4 + 1;
    pbVar4 = pbVar4 + 1;
    bVar7 = *pbVar5;
  }
  puVar3 = (undefined2 *)xnmalloc(lVar10,0x10);
  lVar10 = 0;
LAB_0010005c:
  bVar7 = *param_1;
  uVar11 = 0;
  cVar1 = bVar7 + 0x99;
  bVar14 = bVar7 == 0x67;
  uVar6 = 0;
  if (bVar14) goto LAB_00100145;
  do {
    uVar8 = (ulong)bVar7;
    if (bVar14 || SBORROW1(bVar7,'g') != cVar1 < '\0') {
      if (bVar7 != 0x61) break;
      uVar11 = 0xfff;
    }
    else if (bVar7 == 0x6f) {
      uVar11 = uVar6 | 0x207;
    }
    else {
      if (bVar7 != 0x75) goto LAB_00100104;
      uVar11 = uVar6 | 0x9c0;
    }
    while( true ) {
      bVar7 = param_1[1];
      param_1 = param_1 + 1;
      cVar1 = bVar7 + 0x99;
      bVar14 = cVar1 == '\0';
      uVar6 = uVar11;
      if (!bVar14) break;
LAB_00100145:
      uVar11 = uVar11 | 0x438;
    }
  } while( true );
  if (((char)bVar7 < 'b') && (((bVar7 & 0xef) == 0x2d || (bVar7 == 0x2b)))) {
    bVar13 = param_1[1];
    lVar12 = lVar10 + 1;
    pbVar5 = (byte *)(puVar3 + lVar10 * 8);
    cVar1 = bVar13 + 0x91;
    bVar14 = bVar13 == 0x6f;
    pbVar4 = param_1;
    if (bVar14) goto LAB_001001fe;
    do {
      uVar11 = (uint)bVar13;
      param_1 = pbVar4 + 1;
      bVar7 = (byte)uVar8;
      if (!bVar14 && SBORROW1(bVar13,'o') == cVar1 < '\0') {
        uVar9 = 0x1c0;
        pbVar2 = pbVar4 + 2;
        if (bVar13 == 0x75) goto LAB_001001ae;
LAB_0010021e:
        bVar13 = 1;
        uVar9 = 0;
        do {
          switch(uVar11 - 0x58 & 0xff) {
          case 0:
            bVar13 = 2;
            break;
          default:
            goto switchD_00100241_caseD_1;
          case 0x1a:
            uVar9 = uVar9 | 0x124;
            break;
          case 0x1b:
            uVar9 = uVar9 | 0xc00;
            break;
          case 0x1c:
            uVar9 = uVar9 | 0x200;
            break;
          case 0x1f:
            uVar9 = uVar9 | 0x92;
            break;
          case 0x20:
            uVar9 = uVar9 | 0x49;
          }
          param_1 = param_1 + 1;
          uVar11 = (uint)*param_1;
        } while( true );
      }
      if ('7' < (char)bVar13) {
        uVar9 = 0x38;
        pbVar2 = pbVar4 + 2;
        if (bVar13 == 0x67) goto LAB_001001ae;
        goto LAB_0010021e;
      }
      if ('/' < (char)bVar13) {
        uVar11 = 0;
        goto LAB_001000f1;
      }
      bVar13 = 1;
      uVar9 = 0;
switchD_00100241_caseD_1:
      *pbVar5 = bVar7;
      uVar8 = (ulong)uVar11;
      pbVar5[1] = bVar13;
      *(uint *)(pbVar5 + 4) = uVar6;
      *(uint *)(pbVar5 + 8) = uVar9;
      while( true ) {
        bVar7 = (byte)uVar8;
        if (uVar6 != 0) {
          uVar9 = uVar9 & uVar6;
        }
        *(uint *)(pbVar5 + 0xc) = uVar9;
        if (0x3d < bVar7) goto LAB_00100104;
        lVar10 = lVar12;
        if ((0x2000280000000000U >> (uVar8 & 0x3f) & 1) == 0) goto LAB_00100350;
        bVar13 = param_1[1];
        lVar12 = lVar12 + 1;
        pbVar5 = pbVar5 + 0x10;
        cVar1 = bVar13 + 0x91;
        bVar14 = cVar1 == '\0';
        pbVar4 = param_1;
        if (!bVar14) break;
LAB_001001fe:
        uVar9 = 7;
        pbVar4 = param_1;
        pbVar2 = param_1 + 2;
LAB_001001ae:
        param_1 = pbVar2;
        pbVar5[1] = 3;
        *(uint *)(pbVar5 + 4) = uVar6;
        *(uint *)(pbVar5 + 8) = uVar9;
        *pbVar5 = bVar7;
        uVar8 = (ulong)pbVar4[2];
      }
    } while( true );
  }
  goto LAB_00100104;
  while (bVar13 = *param_1, (byte)(bVar13 - 0x30) < 8) {
LAB_001000f1:
    bVar13 = *param_1;
    param_1 = param_1 + 1;
    uVar11 = (char)bVar13 + -0x30 + uVar11 * 8;
    if (0xfff < uVar11) goto LAB_00100104;
  }
  if ((uVar6 != 0) || ((bVar13 != 0 && (bVar13 != 0x2c)))) goto LAB_00100104;
  *pbVar5 = bVar7;
  pbVar5[1] = 1;
  pbVar5[4] = 0xff;
  pbVar5[5] = 0xf;
  pbVar5[6] = 0;
  pbVar5[7] = 0;
  *(uint *)(pbVar5 + 8) = uVar11;
  pbVar5[0xc] = 0xff;
  pbVar5[0xd] = 0xf;
  pbVar5[0xe] = 0;
  pbVar5[0xf] = 0;
  lVar10 = lVar12;
  bVar7 = bVar13;
LAB_00100350:
  if (bVar7 != 0x2c) {
    if (bVar7 == 0) {
      *(undefined1 *)((long)puVar3 + lVar10 * 0x10 + 1) = 0;
      return puVar3;
    }
LAB_00100104:
    free(puVar3);
    return (undefined2 *)0x0;
  }
  param_1 = param_1 + 1;
  goto LAB_0010005c;
}



undefined2 * mode_create_from_ref(char *param_1)

{
  int iVar1;
  undefined2 *puVar2;
  long in_FS_OFFSET;
  stat sStack_a8;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = stat(param_1,&sStack_a8);
  puVar2 = (undefined2 *)0x0;
  if (iVar1 == 0) {
    puVar2 = (undefined2 *)xmalloc(0x20);
    *puVar2 = 0x13d;
    *(undefined4 *)(puVar2 + 2) = 0xfff;
    *(__mode_t *)(puVar2 + 4) = sStack_a8.st_mode;
    *(undefined4 *)(puVar2 + 6) = 0xfff;
    *(undefined1 *)((long)puVar2 + 0x11) = 0;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint mode_adjust(uint param_1,char param_2,uint param_3,char *param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  param_1 = param_1 & 0xfff;
  uVar7 = 0;
  cVar3 = param_4[1];
  if (cVar3 != '\0') {
LAB_00100486:
    do {
      uVar1 = *(uint *)(param_4 + 4);
      uVar2 = *(uint *)(param_4 + 8);
      if (param_2 == '\0') {
        if (cVar3 == '\x02') {
          if ((param_1 & 0x49) != 0) {
            uVar6 = 0;
            goto LAB_00100590;
          }
          uVar5 = 0xffffffff;
          uVar6 = 0;
        }
        else {
          uVar5 = 0xffffffff;
          uVar6 = 0;
          if (cVar3 == '\x03') {
LAB_001004ac:
            uVar2 = uVar2 & param_1;
            uVar4 = -(uint)((uVar2 & 0x124) != 0) & 0x124;
            if ((uVar2 & 0x92) != 0) {
              uVar4 = uVar4 | 0x92;
            }
            if ((uVar2 & 0x49) != 0) {
              uVar4 = uVar4 | 0x49;
            }
            uVar2 = (uVar4 | uVar2) & uVar5;
          }
        }
      }
      else {
        uVar6 = ~*(uint *)(param_4 + 0xc) & 0xc00;
        if (cVar3 == '\x02') {
LAB_00100590:
          uVar5 = ~uVar6;
          uVar2 = (uVar2 | 0x49) & uVar5;
        }
        else {
          uVar5 = *(uint *)(param_4 + 0xc) | 0xfffff3ff;
          if (cVar3 == '\x03') goto LAB_001004ac;
          uVar2 = uVar2 & uVar5;
        }
      }
      if (uVar1 == 0) {
        cVar3 = *param_4;
        uVar2 = uVar2 & ~param_3;
        if (cVar3 == '-') goto LAB_00100568;
        if (cVar3 == '=') goto LAB_001004fe;
LAB_00100469:
        if (cVar3 == '+') {
          uVar7 = uVar7 | uVar2;
          param_1 = param_1 | uVar2;
        }
      }
      else {
        cVar3 = *param_4;
        uVar2 = uVar2 & uVar1;
        if (cVar3 != '-') {
          if (cVar3 != '=') goto LAB_00100469;
          uVar6 = uVar6 | ~uVar1;
          uVar5 = ~uVar6;
LAB_001004fe:
          cVar3 = param_4[0x11];
          param_4 = param_4 + 0x10;
          uVar7 = uVar7 | uVar5 & 0xfff;
          param_1 = uVar6 & param_1 | uVar2;
          if (cVar3 == '\0') break;
          goto LAB_00100486;
        }
LAB_00100568:
        uVar7 = uVar7 | uVar2;
        param_1 = param_1 & ~uVar2;
      }
      cVar3 = param_4[0x11];
      param_4 = param_4 + 0x10;
    } while (cVar3 != '\0');
  }
  if (param_5 != (uint *)0x0) {
    *param_5 = uVar7;
  }
  return param_1;
}


