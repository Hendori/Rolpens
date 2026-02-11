
int compare_ranges(ulong *param_1,ulong *param_2)

{
  return (uint)(*param_2 < *param_1) - (uint)(*param_1 < *param_2);
}



void add_range_pair(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  if (n_frp == n_frp_allocated) {
    frp = xpalloc(frp,&n_frp_allocated,1,0xffffffffffffffff,0x10);
  }
  puVar1 = (undefined8 *)(frp + n_frp * 0x10);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  n_frp = n_frp + 1;
  return;
}



void set_fields(byte *param_1,uint param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  byte *pbVar8;
  ushort **ppuVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  size_t sVar13;
  void *__ptr;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  byte *pbVar17;
  long lVar18;
  ulong *puVar19;
  char *pcVar20;
  ulong uVar21;
  size_t sVar22;
  bool bVar23;
  long lVar24;
  ulong *__ptr_00;
  
  if ((((param_2 & 1) == 0) || (*param_1 != 0x2d)) || (param_1[1] != 0)) {
    bVar7 = false;
    uVar11 = 0;
  }
  else {
    param_1 = param_1 + 1;
    bVar7 = true;
    uVar11 = 1;
  }
  bVar23 = false;
  uVar21 = 1;
  bVar4 = bVar7;
  bVar6 = false;
LAB_00100187:
  do {
    while( true ) {
      pbVar17 = param_1 + 1;
      bVar2 = *param_1;
      if (bVar2 != 0x2d) break;
      if (bVar4) {
LAB_001005e4:
        if ((param_2 & 4) == 0) {
          uVar12 = dcgettext(0,"invalid field range",5);
        }
        else {
          uVar12 = dcgettext(0,"invalid byte or character range",5);
        }
        goto LAB_00100529;
      }
      if ((bool)(uVar11 == 0 & bVar7)) {
LAB_0010050f:
        if ((param_2 & 4) == 0) {
          uVar12 = dcgettext(0,"fields are numbered from 1",5);
        }
        else {
          uVar12 = dcgettext(0,"byte/character positions are numbered from 1",5);
        }
        goto LAB_00100529;
      }
      bVar23 = false;
      if (bVar7) {
        uVar21 = uVar11;
        uVar11 = 0;
        param_1 = pbVar17;
        bVar4 = bVar7;
      }
      else {
        uVar21 = 1;
        uVar11 = 0;
        param_1 = pbVar17;
        bVar4 = true;
      }
    }
    if (((bVar2 != 0x2c) && (ppuVar9 = __ctype_b_loc(), ((*ppuVar9)[bVar2] & 1) == 0)) &&
       (bVar2 != 0)) {
      if (9 < (int)(char)bVar2 - 0x30U) {
        uVar12 = quote(param_1);
        if ((param_2 & 4) != 0) goto LAB_001003b0;
        uVar14 = dcgettext(0,"invalid field value %s",5);
        do {
          error(0,0,uVar14,uVar12);
          usage();
LAB_001003b0:
          uVar14 = dcgettext(0,"invalid byte/character position %s",5);
        } while( true );
      }
      if ((!bVar23) || (num_start_0 == (byte *)0x0)) {
        num_start_0 = param_1;
      }
      pbVar8 = num_start_0;
      bVar5 = bVar4;
      if (!bVar4) {
        bVar7 = true;
        bVar5 = bVar6;
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar11;
      uVar10 = SUB168(auVar3 * ZEXT816(10),0);
      if (SUB168(auVar3 * ZEXT816(10),8) == 0) {
        uVar16 = (ulong)((char)bVar2 + -0x30);
        uVar11 = uVar10 + uVar16;
        if ((uVar11 != 0xffffffffffffffff) && (!CARRY8(uVar10,uVar16))) {
          bVar23 = true;
          param_1 = pbVar17;
          bVar6 = bVar5;
          goto LAB_00100187;
        }
      }
      sVar13 = strspn((char *)num_start_0,"0123456789");
      __ptr = (void *)ximemdup0(pbVar8,sVar13);
      uVar12 = quote(__ptr);
      if ((param_2 & 4) == 0) {
        uVar14 = dcgettext(0,"field number %s is too large",5);
      }
      else {
        uVar14 = dcgettext(0,"byte/character offset %s is too large",5);
      }
      error(0,0,uVar14,uVar12);
      free(__ptr);
      usage(1);
      goto LAB_001005e4;
    }
    if (bVar4) {
      if (bVar7) {
        if (!bVar6) goto LAB_00100161;
LAB_001002c9:
        if (uVar11 < uVar21) {
          pcVar20 = "invalid decreasing range";
          goto LAB_0010054d;
        }
        add_range_pair(uVar21,uVar11);
      }
      else {
        if (bVar6) goto LAB_001002c9;
        if ((param_2 & 1) == 0) goto LAB_00100541;
        uVar21 = 1;
LAB_00100161:
        add_range_pair(uVar21,0xffffffffffffffff);
      }
      bVar2 = *param_1;
    }
    else {
      if (uVar11 == 0) goto LAB_0010050f;
      add_range_pair(uVar11,uVar11);
      bVar2 = *param_1;
    }
    if (bVar2 == 0) break;
    bVar23 = false;
    bVar4 = false;
    bVar7 = false;
    uVar11 = 0;
    param_1 = pbVar17;
    bVar6 = false;
  } while( true );
  if (n_frp == 0) {
    if ((param_2 & 4) == 0) {
      pcVar20 = "missing list of fields";
      goto LAB_0010054d;
    }
    uVar12 = dcgettext(0,"missing list of byte/character positions",5);
LAB_00100529:
    do {
      error(0,0,uVar12);
      usage();
LAB_00100541:
      pcVar20 = "invalid range with no endpoint: -";
LAB_0010054d:
      uVar12 = dcgettext(0,pcVar20,5);
    } while( true );
  }
  qsort(frp,n_frp,0x10,compare_ranges);
  __ptr_00 = frp;
  if (0 < (long)n_frp) {
    lVar24 = 0;
    lVar18 = 0x10;
    while (lVar24 = lVar24 + 1, lVar24 < (long)n_frp) {
      while( true ) {
        puVar19 = (ulong *)((long)__ptr_00 + lVar18);
        uVar11 = *(ulong *)((long)__ptr_00 + lVar18 + -8);
        if (uVar11 < *puVar19) break;
        uVar21 = puVar19[1];
        if (puVar19[1] < uVar11) {
          uVar21 = uVar11;
        }
        lVar15 = n_frp - lVar24;
        *(ulong *)((long)__ptr_00 + lVar18 + -8) = uVar21;
        memmove(puVar19,(void *)((long)__ptr_00 + lVar18 + 0x10),(lVar15 + -1) * 0x10);
        n_frp = n_frp - 1;
        __ptr_00 = frp;
        if ((long)n_frp <= lVar24) goto LAB_00100410;
      }
      lVar18 = lVar18 + 0x10;
      if ((long)n_frp <= lVar24) break;
    }
  }
LAB_00100410:
  sVar13 = n_frp;
  if ((param_2 & 2) != 0) {
    frp = (ulong *)0x0;
    n_frp = 0;
    n_frp_allocated = 0;
    if (1 < *__ptr_00) {
      add_range_pair(1,*__ptr_00 - 1);
    }
    puVar19 = __ptr_00 + 1;
    sVar22 = 1;
    if (1 < (long)sVar13) {
      do {
        if (*puVar19 + 1 != puVar19[1]) {
          add_range_pair(*puVar19 + 1,puVar19[1] - 1);
        }
        sVar22 = sVar22 + 1;
        puVar19 = puVar19 + 2;
      } while (sVar13 != sVar22);
    }
    if (__ptr_00[sVar13 * 2 + -1] != 0xffffffffffffffff) {
      add_range_pair(__ptr_00[sVar13 * 2 + -1] + 1,0xffffffffffffffff);
    }
    free(__ptr_00);
    __ptr_00 = frp;
  }
  n_frp = n_frp + 1;
  frp = (ulong *)xrealloc(__ptr_00,n_frp * 0x10);
  puVar1 = (undefined4 *)((long)frp + -0x10 + n_frp * 0x10);
  *puVar1 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1[2] = 0xffffffff;
  puVar1[3] = 0xffffffff;
  return;
}


