
/* WARNING: Unknown calling convention */

int compare_ranges(void *a,void *b)

{
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
  return (uint)(*b < *a) - (uint)(*a < *b);
}



/* WARNING: Unknown calling convention */

void add_range_pair(uintmax_t lo,uintmax_t hi)

{
  field_range_pair *pfVar1;
  
  if (n_frp == n_frp_allocated) {
    frp = (field_range_pair *)xpalloc(frp,&n_frp_allocated,1,0xffffffffffffffff,0x10);
  }
  pfVar1 = frp + n_frp;
  pfVar1->lo = lo;
  pfVar1->hi = hi;
  n_frp = n_frp + 1;
  return;
}



/* WARNING: Unknown calling convention */

void set_fields(char *fieldstr,uint options)

{
  ulong *__dest;
  byte bVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  idx_t iVar7;
  ushort **ppuVar8;
  ulong uVar9;
  uintmax_t lo;
  undefined8 uVar10;
  size_t sVar11;
  void *__ptr;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  byte *pbVar15;
  uintmax_t *puVar16;
  char *pcVar17;
  uintmax_t lo_00;
  long lVar18;
  bool bVar19;
  long lVar20;
  field_range_pair *pfVar21;
  
  if ((((options & 1) == 0) || (*fieldstr != '-')) || (fieldstr[1] != '\0')) {
    bVar6 = false;
    lo = 0;
  }
  else {
    fieldstr = fieldstr + 1;
    bVar6 = true;
    lo = 1;
  }
  bVar19 = false;
  lo_00 = 1;
  bVar3 = bVar6;
  bVar5 = false;
LAB_00100187:
  do {
    while( true ) {
      pbVar15 = (byte *)fieldstr + 1;
      bVar1 = *fieldstr;
      if (bVar1 != 0x2d) break;
      if (bVar3) {
LAB_001005e4:
        if ((options & 4) == 0) {
          uVar10 = dcgettext(0,"invalid field range",5);
        }
        else {
          uVar10 = dcgettext(0,"invalid byte or character range",5);
        }
        goto LAB_00100529;
      }
      if ((bool)(lo == 0 & bVar6)) {
LAB_0010050f:
        if ((options & 4) == 0) {
          uVar10 = dcgettext(0,"fields are numbered from 1",5);
        }
        else {
          uVar10 = dcgettext(0,"byte/character positions are numbered from 1",5);
        }
        goto LAB_00100529;
      }
      bVar19 = false;
      if (bVar6) {
        lo_00 = lo;
        lo = 0;
        fieldstr = (char *)pbVar15;
        bVar3 = bVar6;
      }
      else {
        lo_00 = 1;
        lo = 0;
        fieldstr = (char *)pbVar15;
        bVar3 = true;
      }
    }
    if (((bVar1 != 0x2c) && (ppuVar8 = __ctype_b_loc(), ((*ppuVar8)[bVar1] & 1) == 0)) &&
       (bVar1 != 0)) {
      if (9 < (int)(char)bVar1 - 0x30U) {
        uVar10 = quote(fieldstr);
        if ((options & 4) != 0) goto LAB_001003b0;
        uVar12 = dcgettext(0,"invalid field value %s",5);
        do {
          error(0,0,uVar12,uVar10);
          usage();
LAB_001003b0:
          uVar12 = dcgettext(0,"invalid byte/character position %s",5);
        } while( true );
      }
      if ((!bVar19) || (set_fields::lexical_block_8::num_start == (char *)0x0)) {
        set_fields::lexical_block_8::num_start = fieldstr;
      }
      pcVar17 = set_fields::lexical_block_8::num_start;
      bVar4 = bVar3;
      if (!bVar3) {
        bVar6 = true;
        bVar4 = bVar5;
      }
      auVar2._8_8_ = 0;
      auVar2._0_8_ = lo;
      uVar9 = SUB168(auVar2 * ZEXT816(10),0);
      if (SUB168(auVar2 * ZEXT816(10),8) == 0) {
        uVar14 = (ulong)((char)bVar1 + -0x30);
        lo = uVar9 + uVar14;
        if ((lo != 0xffffffffffffffff) && (!CARRY8(uVar9,uVar14))) {
          bVar19 = true;
          fieldstr = (char *)pbVar15;
          bVar5 = bVar4;
          goto LAB_00100187;
        }
      }
      sVar11 = strspn(set_fields::lexical_block_8::num_start,"0123456789");
      __ptr = (void *)ximemdup0(pcVar17,sVar11);
      uVar10 = quote(__ptr);
      if ((options & 4) == 0) {
        uVar12 = dcgettext(0,"field number %s is too large",5);
      }
      else {
        uVar12 = dcgettext(0,"byte/character offset %s is too large",5);
      }
      error(0,0,uVar12,uVar10);
      free(__ptr);
      usage(1);
      goto LAB_001005e4;
    }
    if (bVar3) {
      if (bVar6) {
        if (!bVar5) goto LAB_00100161;
LAB_001002c9:
        if (lo < lo_00) {
          pcVar17 = "invalid decreasing range";
          goto LAB_0010054d;
        }
        add_range_pair(lo_00,lo);
      }
      else {
        if (bVar5) goto LAB_001002c9;
        if ((options & 1) == 0) goto LAB_00100541;
        lo_00 = 1;
LAB_00100161:
        add_range_pair(lo_00,0xffffffffffffffff);
      }
      bVar1 = *fieldstr;
    }
    else {
      if (lo == 0) goto LAB_0010050f;
      add_range_pair(lo,lo);
      bVar1 = *fieldstr;
    }
    if (bVar1 == 0) break;
    bVar19 = false;
    bVar3 = false;
    bVar6 = false;
    lo = 0;
    fieldstr = (char *)pbVar15;
    bVar5 = false;
  } while( true );
  if (n_frp == 0) {
    if ((options & 4) == 0) {
      pcVar17 = "missing list of fields";
      goto LAB_0010054d;
    }
    uVar10 = dcgettext(0,"missing list of byte/character positions",5);
LAB_00100529:
    do {
      error(0,0,uVar10);
      usage();
LAB_00100541:
      pcVar17 = "invalid range with no endpoint: -";
LAB_0010054d:
      uVar10 = dcgettext(0,pcVar17,5);
    } while( true );
  }
  qsort(frp,n_frp,0x10,compare_ranges);
  pfVar21 = frp;
  if (0 < n_frp) {
    lVar20 = 0;
    lVar18 = 0x10;
    while (lVar20 = lVar20 + 1, lVar20 < n_frp) {
      while( true ) {
        __dest = (ulong *)((long)&pfVar21->lo + lVar18);
        uVar9 = *(ulong *)((long)&pfVar21[-1].hi + lVar18);
        if (uVar9 < *__dest) break;
        uVar14 = __dest[1];
        if (__dest[1] < uVar9) {
          uVar14 = uVar9;
        }
        lVar13 = n_frp - lVar20;
        *(ulong *)((long)&pfVar21[-1].hi + lVar18) = uVar14;
        memmove(__dest,(void *)((long)&pfVar21[1].lo + lVar18),(lVar13 + -1) * 0x10);
        n_frp = n_frp + -1;
        pfVar21 = frp;
        if (n_frp <= lVar20) goto LAB_00100410;
      }
      lVar18 = lVar18 + 0x10;
      if (n_frp <= lVar20) break;
    }
  }
LAB_00100410:
  iVar7 = n_frp;
  if ((options & 2) != 0) {
    frp = (field_range_pair *)0x0;
    n_frp = 0;
    n_frp_allocated = 0;
    if (1 < pfVar21->lo) {
      add_range_pair(1,pfVar21->lo - 1);
    }
    puVar16 = &pfVar21->hi;
    lVar18 = 1;
    if (1 < iVar7) {
      do {
        if (*puVar16 + 1 != puVar16[1]) {
          add_range_pair(*puVar16 + 1,puVar16[1] - 1);
        }
        lVar18 = lVar18 + 1;
        puVar16 = puVar16 + 2;
      } while (iVar7 != lVar18);
    }
    if (pfVar21[iVar7 + -1].hi != 0xffffffffffffffff) {
      add_range_pair(pfVar21[iVar7 + -1].hi + 1,0xffffffffffffffff);
    }
    free(pfVar21);
    pfVar21 = frp;
  }
  n_frp = n_frp + 1;
  frp = (field_range_pair *)xrealloc(pfVar21,n_frp * 0x10);
  pfVar21 = frp + n_frp + -1;
  *(undefined4 *)&pfVar21->lo = 0xffffffff;
  *(undefined4 *)((long)&pfVar21->lo + 4) = 0xffffffff;
  *(undefined4 *)&pfVar21->hi = 0xffffffff;
  *(undefined4 *)((long)&pfVar21->hi + 4) = 0xffffffff;
  return;
}


