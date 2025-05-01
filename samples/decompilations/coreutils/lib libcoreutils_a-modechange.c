
/* WARNING: Unknown calling convention */

mode_change * mode_compile(char *mode_string)

{
  byte bVar1;
  mode_t mVar2;
  byte *pbVar3;
  mode_change *pmVar4;
  char *pcVar5;
  mode_change *pmVar6;
  byte *pbVar7;
  uint uVar8;
  byte bVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  char cVar15;
  bool bVar16;
  
  bVar9 = *mode_string;
  if ((byte)(bVar9 - 0x30) < 8) {
    uVar8 = 0;
    pcVar5 = mode_string;
    do {
      cVar15 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      uVar8 = cVar15 + -0x30 + uVar8 * 8;
      if (0xfff < uVar8) {
        return (mode_change *)0x0;
      }
    } while ((byte)(*pcVar5 - 0x30U) < 8);
    if (*pcVar5 != '\0') {
      return (mode_change *)0x0;
    }
    mVar2 = uVar8 & 0xc00 | 0x3ff;
    if (4 < (long)pcVar5 - (long)mode_string) {
      mVar2 = 0xfff;
    }
    pmVar4 = (mode_change *)xmalloc(0x20);
    pmVar4->op = '=';
    pmVar4->flag = '\x01';
    pmVar4->affected = 0xfff;
    pmVar4->value = uVar8;
    pmVar4->mentioned = mVar2;
    pmVar4[1].flag = '\0';
    return pmVar4;
  }
  lVar12 = 1;
  pcVar5 = mode_string;
  while (bVar9 != 0) {
    if (bVar9 < 0x3e) {
      lVar12 = (lVar12 + 1) - (ulong)((0x2000280000000000U >> ((ulong)bVar9 & 0x3f) & 1) == 0);
    }
    pbVar7 = (byte *)(pcVar5 + 1);
    pcVar5 = pcVar5 + 1;
    bVar9 = *pbVar7;
  }
  pmVar4 = (mode_change *)xnmalloc(lVar12,0x10);
  lVar12 = 0;
LAB_0010005c:
  bVar9 = *mode_string;
  uVar13 = 0;
  cVar15 = bVar9 + 0x99;
  bVar16 = bVar9 == 0x67;
  uVar8 = 0;
  if (bVar16) goto LAB_00100145;
  do {
    uVar10 = (ulong)bVar9;
    if (bVar16 || SBORROW1(bVar9,'g') != cVar15 < '\0') {
      if (bVar9 != 0x61) break;
      uVar13 = 0xfff;
    }
    else if (bVar9 == 0x6f) {
      uVar13 = uVar8 | 0x207;
    }
    else {
      if (bVar9 != 0x75) goto LAB_00100104;
      uVar13 = uVar8 | 0x9c0;
    }
    while( true ) {
      bVar9 = ((byte *)mode_string)[1];
      mode_string = (char *)((byte *)mode_string + 1);
      cVar15 = bVar9 + 0x99;
      bVar16 = cVar15 == '\0';
      uVar8 = uVar13;
      if (!bVar16) break;
LAB_00100145:
      uVar13 = uVar13 | 0x438;
    }
  } while( true );
  if (((char)bVar9 < 'b') && (((bVar9 & 0xef) == 0x2d || (bVar9 == 0x2b)))) {
    bVar1 = ((byte *)mode_string)[1];
    lVar14 = lVar12 + 1;
    pmVar6 = pmVar4 + lVar12;
    cVar15 = bVar1 + 0x91;
    bVar16 = bVar1 == 0x6f;
    pbVar7 = (byte *)mode_string;
    if (bVar16) goto LAB_001001fe;
    do {
      uVar13 = (uint)bVar1;
      mode_string = (char *)(pbVar7 + 1);
      bVar9 = (byte)uVar10;
      if (!bVar16 && SBORROW1(bVar1,'o') == cVar15 < '\0') {
        uVar11 = 0x1c0;
        pbVar3 = pbVar7 + 2;
        if (bVar1 == 0x75) goto LAB_001001ae;
LAB_0010021e:
        cVar15 = '\x01';
        uVar11 = 0;
        do {
          switch(uVar13 - 0x58 & 0xff) {
          case 0:
            cVar15 = '\x02';
            break;
          default:
            goto switchD_00100241_caseD_1;
          case 0x1a:
            uVar11 = uVar11 | 0x124;
            break;
          case 0x1b:
            uVar11 = uVar11 | 0xc00;
            break;
          case 0x1c:
            uVar11 = uVar11 | 0x200;
            break;
          case 0x1f:
            uVar11 = uVar11 | 0x92;
            break;
          case 0x20:
            uVar11 = uVar11 | 0x49;
          }
          mode_string = (char *)((byte *)mode_string + 1);
          uVar13 = (uint)(byte)*mode_string;
        } while( true );
      }
      if ('7' < (char)bVar1) {
        uVar11 = 0x38;
        pbVar3 = pbVar7 + 2;
        if (bVar1 == 0x67) goto LAB_001001ae;
        goto LAB_0010021e;
      }
      if ('/' < (char)bVar1) {
        uVar13 = 0;
        goto LAB_001000f1;
      }
      cVar15 = '\x01';
      uVar11 = 0;
switchD_00100241_caseD_1:
      pmVar6->op = bVar9;
      uVar10 = (ulong)uVar13;
      pmVar6->flag = cVar15;
      pmVar6->affected = uVar8;
      pmVar6->value = uVar11;
      while( true ) {
        bVar9 = (byte)uVar10;
        if (uVar8 != 0) {
          uVar11 = uVar11 & uVar8;
        }
        pmVar6->mentioned = uVar11;
        if (0x3d < bVar9) goto LAB_00100104;
        lVar12 = lVar14;
        if ((0x2000280000000000U >> (uVar10 & 0x3f) & 1) == 0) goto LAB_00100350;
        bVar1 = ((byte *)mode_string)[1];
        lVar14 = lVar14 + 1;
        pmVar6 = pmVar6 + 1;
        cVar15 = bVar1 + 0x91;
        bVar16 = cVar15 == '\0';
        pbVar7 = (byte *)mode_string;
        if (!bVar16) break;
LAB_001001fe:
        uVar11 = 7;
        pbVar7 = (byte *)mode_string;
        pbVar3 = (byte *)mode_string + 2;
LAB_001001ae:
        mode_string = (char *)pbVar3;
        pmVar6->flag = '\x03';
        pmVar6->affected = uVar8;
        pmVar6->value = uVar11;
        pmVar6->op = bVar9;
        uVar10 = (ulong)pbVar7[2];
      }
    } while( true );
  }
  goto LAB_00100104;
  while (bVar1 = *mode_string, (byte)(bVar1 - 0x30) < 8) {
LAB_001000f1:
    bVar1 = *mode_string;
    mode_string = (char *)((byte *)mode_string + 1);
    uVar13 = (char)bVar1 + -0x30 + uVar13 * 8;
    if (0xfff < uVar13) goto LAB_00100104;
  }
  if ((uVar8 != 0) || ((bVar1 != 0 && (bVar1 != 0x2c)))) goto LAB_00100104;
  pmVar6->op = bVar9;
  pmVar6->flag = '\x01';
  pmVar6->affected = 0xfff;
  pmVar6->value = uVar13;
  pmVar6->mentioned = 0xfff;
  lVar12 = lVar14;
  bVar9 = bVar1;
LAB_00100350:
  if (bVar9 != 0x2c) {
    if (bVar9 == 0) {
      pmVar4[lVar12].flag = '\0';
      return pmVar4;
    }
LAB_00100104:
    free(pmVar4);
    return (mode_change *)0x0;
  }
  mode_string = (char *)((byte *)mode_string + 1);
  goto LAB_0010005c;
}



/* WARNING: Unknown calling convention */

mode_change * mode_create_from_ref(char *ref_file)

{
  long lVar1;
  int iVar2;
  mode_change *pmVar3;
  long in_FS_OFFSET;
  stat ref_stats;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = stat(ref_file,(stat *)&ref_stats);
  pmVar3 = (mode_change *)0x0;
  if (iVar2 == 0) {
    pmVar3 = (mode_change *)xmalloc(0x20);
    pmVar3->op = '=';
    pmVar3->flag = '\x01';
    pmVar3->affected = 0xfff;
    pmVar3->value = ref_stats.st_mode;
    pmVar3->mentioned = 0xfff;
    pmVar3[1].flag = '\0';
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pmVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

mode_t mode_adjust(mode_t oldmode,_Bool dir,mode_t umask_value,mode_change *changes,
                  mode_t *pmode_bits)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  mode_t mVar8;
  
  uVar5 = oldmode & 0xfff;
  mVar8 = 0;
  cVar3 = changes->flag;
  if (cVar3 != '\0') {
LAB_00100486:
    do {
      uVar1 = changes->affected;
      uVar2 = changes->value;
      if (dir) {
        uVar7 = ~changes->mentioned & 0xc00;
        if (cVar3 == '\x02') {
LAB_00100590:
          uVar6 = ~uVar7;
          uVar2 = (uVar2 | 0x49) & uVar6;
        }
        else {
          uVar6 = changes->mentioned | 0xfffff3ff;
          if (cVar3 == '\x03') goto LAB_001004ac;
          uVar2 = uVar2 & uVar6;
        }
      }
      else if (cVar3 == '\x02') {
        if ((uVar5 & 0x49) != 0) {
          uVar7 = 0;
          goto LAB_00100590;
        }
        uVar6 = 0xffffffff;
        uVar7 = 0;
      }
      else {
        uVar6 = 0xffffffff;
        uVar7 = 0;
        if (cVar3 == '\x03') {
LAB_001004ac:
          uVar2 = uVar2 & uVar5;
          uVar4 = -(uint)((uVar2 & 0x124) != 0) & 0x124;
          if ((uVar2 & 0x92) != 0) {
            uVar4 = uVar4 | 0x92;
          }
          if ((uVar2 & 0x49) != 0) {
            uVar4 = uVar4 | 0x49;
          }
          uVar2 = (uVar4 | uVar2) & uVar6;
        }
      }
      if (uVar1 == 0) {
        cVar3 = changes->op;
        uVar2 = uVar2 & ~umask_value;
        if (cVar3 == '-') goto LAB_00100568;
        if (cVar3 == '=') goto LAB_001004fe;
LAB_00100469:
        if (cVar3 == '+') {
          mVar8 = mVar8 | uVar2;
          uVar5 = uVar5 | uVar2;
        }
      }
      else {
        cVar3 = changes->op;
        uVar2 = uVar2 & uVar1;
        if (cVar3 != '-') {
          if (cVar3 != '=') goto LAB_00100469;
          uVar7 = uVar7 | ~uVar1;
          uVar6 = ~uVar7;
LAB_001004fe:
          cVar3 = changes[1].flag;
          changes = changes + 1;
          mVar8 = mVar8 | uVar6 & 0xfff;
          uVar5 = uVar7 & uVar5 | uVar2;
          if (cVar3 == '\0') break;
          goto LAB_00100486;
        }
LAB_00100568:
        mVar8 = mVar8 | uVar2;
        uVar5 = uVar5 & ~uVar2;
      }
      cVar3 = changes[1].flag;
      changes = changes + 1;
    } while (cVar3 != '\0');
  }
  if (pmode_bits != (mode_t *)0x0) {
    *pmode_bits = mVar8;
  }
  return uVar5;
}


