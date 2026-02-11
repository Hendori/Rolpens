
uint keycmp(long param_1,long param_2,long param_3,long param_4)

{
  void *__s1;
  size_t sVar1;
  void *__s2;
  size_t sVar2;
  uint uVar3;
  undefined8 *puVar4;
  size_t sVar5;
  
  if (*(long *)(param_1 + 0x18) <= param_3) {
    if (param_4 < *(long *)(param_2 + 0x18)) {
      return -(uint)(*(long *)(param_4 * 0x10 + *(long *)(param_2 + 0x28) + 8) != 0);
    }
    return 0;
  }
  puVar4 = (undefined8 *)(param_3 * 0x10 + *(long *)(param_1 + 0x28));
  __s1 = (void *)*puVar4;
  sVar1 = puVar4[1];
  if (param_4 < *(long *)(param_2 + 0x18)) {
    puVar4 = (undefined8 *)(param_4 * 0x10 + *(long *)(param_2 + 0x28));
    __s2 = (void *)*puVar4;
    sVar2 = puVar4[1];
    if (sVar1 == 0) {
      uVar3 = -(uint)(sVar2 != 0);
    }
    else if (sVar2 == 0) {
      uVar3 = 1;
    }
    else {
      if (ignore_case == '\0') {
        if (hard_LC_COLLATE != '\0') {
          uVar3 = xmemcoll(__s1,sVar1,__s2,sVar2);
          return uVar3;
        }
        sVar5 = sVar2;
        if ((long)sVar1 <= (long)sVar2) {
          sVar5 = sVar1;
        }
        uVar3 = memcmp(__s1,__s2,sVar5);
      }
      else {
        sVar5 = sVar2;
        if ((long)sVar1 <= (long)sVar2) {
          sVar5 = sVar1;
        }
        uVar3 = memcasecmp(__s1,__s2,sVar5);
      }
      if (uVar3 == 0) {
        return (uint)((long)sVar2 < (long)sVar1) - (uint)((long)sVar1 < (long)sVar2);
      }
    }
  }
  else {
    uVar3 = (uint)(sVar1 != 0);
  }
  return uVar3;
}



void set_join_field(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  if ((lVar1 != param_2) && (-1 < lVar1)) {
    uVar2 = dcgettext(0,"incompatible join fields %td, %td",5);
                    /* WARNING: Subroutine does not return */
    error(1,0,uVar2,lVar1,param_2);
  }
  *param_1 = param_2;
  return;
}



long string_to_join_field(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = xstrtoimax(param_1,0,10,&local_18,&_LC1);
  if (iVar1 == 1) {
    local_18 = 0x7ffffffffffffffe;
  }
  else {
    if ((iVar1 != 0) || (local_18 < 1)) {
      uVar2 = quote(param_1);
      uVar3 = dcgettext(0,"invalid field number: %s",5);
                    /* WARNING: Subroutine does not return */
      error(1,0,uVar3,uVar2);
    }
    local_18 = local_18 + -1;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_18;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void prfield(long param_1,long param_2)

{
  size_t __n;
  undefined8 *puVar1;
  
  if (param_1 < *(long *)(param_2 + 0x18)) {
    puVar1 = (undefined8 *)(param_1 * 0x10 + *(long *)(param_2 + 0x28));
    __n = puVar1[1];
    if (__n != 0) {
      fwrite_unlocked((void *)*puVar1,1,__n,_stdout);
      return;
    }
  }
  if (empty_filler != (char *)0x0) {
    fputs_unlocked(empty_filler,_stdout);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void prfields(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (autoformat == '\0') {
    param_3 = *(long *)(param_1 + 0x18);
  }
  lVar1 = param_2;
  if (param_3 <= param_2) {
    lVar1 = param_3;
  }
  if (0 < lVar1) {
    lVar2 = 0;
    do {
      fwrite_unlocked(output_separator,1,output_seplen,_stdout);
      lVar3 = lVar2 + 1;
      prfield(lVar2,param_1);
      lVar2 = lVar3;
    } while (lVar1 != lVar3);
  }
  lVar1 = param_2 + 1;
  if (param_2 + 1 < param_3) {
    do {
      fwrite_unlocked(output_separator,1,output_seplen,_stdout);
      lVar2 = lVar1 + 1;
      prfield(lVar1,param_1);
      lVar1 = lVar2;
    } while (param_3 != lVar2);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void prjoin(undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  byte *pbVar2;
  byte bVar3;
  FILE *__stream;
  int *piVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  
  piVar4 = (int *)outlist_head._16_8_;
  if (outlist_head._16_8_ == 0) {
    puVar6 = param_2;
    uVar5 = join_field_2;
    if (param_1 != uni_blank) {
      puVar6 = param_1;
      uVar5 = join_field_1;
    }
    prfield(uVar5,puVar6);
    prfields(param_1,join_field_1,autocount_1);
    prfields(param_2,join_field_2,autocount_2);
  }
  else {
    while( true ) {
      if (*piVar4 == 0) {
        puVar6 = param_2;
        uVar5 = join_field_2;
        if (param_1 != uni_blank) {
          puVar6 = param_1;
          uVar5 = join_field_1;
        }
        prfield(uVar5,puVar6);
        piVar4 = *(int **)(piVar4 + 4);
      }
      else {
        puVar6 = param_1;
        if (*piVar4 != 1) {
          puVar6 = param_2;
        }
        prfield(*(undefined8 *)(piVar4 + 2),puVar6);
        piVar4 = *(int **)(piVar4 + 4);
      }
      if (piVar4 == (int *)0x0) break;
      fwrite_unlocked(output_separator,1,output_seplen,_stdout);
    }
  }
  bVar3 = eolchar;
  pbVar2 = (byte *)_stdout->_IO_write_ptr;
  if (pbVar2 < _stdout->_IO_write_end) {
    _stdout->_IO_write_ptr = (char *)(pbVar2 + 1);
    *pbVar2 = bVar3;
  }
  else {
    __overflow(_stdout,(uint)eolchar);
  }
  __stream = _stdout;
  if ((_stdout->_flags & 0x20) == 0) {
    return;
  }
  piVar4 = __errno_location();
  iVar1 = *piVar4;
  fflush_unlocked(__stream);
  fpurge(_stdout);
  clearerr_unlocked(_stdout);
  uVar5 = dcgettext(0,"write error",5);
                    /* WARNING: Subroutine does not return */
  error(1,iVar1,uVar5);
}



void delseq(long param_1)

{
  long lVar1;
  void *__ptr;
  long lVar2;
  
  lVar2 = 0;
  if (0 < *(long *)(param_1 + 8)) {
    do {
      __ptr = *(void **)(*(long *)(param_1 + 0x10) + lVar2 * 8);
      if (__ptr != (void *)0x0) {
        free(*(void **)((long)__ptr + 0x28));
        *(undefined8 *)((long)__ptr + 0x28) = 0;
        free(*(void **)((long)__ptr + 0x10));
        lVar1 = *(long *)(param_1 + 0x10);
        *(undefined8 *)((long)__ptr + 0x10) = 0;
        __ptr = *(void **)(lVar1 + lVar2 * 8);
      }
      lVar2 = lVar2 + 1;
      free(__ptr);
    } while (lVar2 < *(long *)(param_1 + 8));
  }
  free(*(void **)(param_1 + 0x10));
  return;
}



void free_spareline(void)

{
  void *pvVar1;
  
  pvVar1 = spareline;
  if (spareline != (void *)0x0) {
    free(*(void **)((long)spareline + 0x28));
    free(*(void **)((long)pvVar1 + 0x10));
    free(pvVar1);
  }
  pvVar1 = DAT_00101548;
  if (DAT_00101548 != (void *)0x0) {
    free(*(void **)((long)DAT_00101548 + 0x28));
    free(*(void **)((long)pvVar1 + 0x10));
    free(pvVar1);
    return;
  }
  return;
}



/* WARNING: Type propagation algorithm not settling */

undefined8 get_line(byte *param_1,long *param_2,int param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  undefined8 *puVar13;
  byte *pbVar14;
  wint_t wVar15;
  ulong *puVar16;
  byte bVar17;
  uint uVar18;
  byte *pbVar19;
  long lVar20;
  long in_FS_OFFSET;
  bool bVar21;
  wint_t local_4c [3];
  long local_40;
  
  lVar20 = (long)(param_3 + -1);
  lVar10 = *param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(prevline + lVar20 * 8) == lVar10) {
    lVar4 = (&spareline)[lVar20];
    (&spareline)[lVar20] = lVar10;
    *param_2 = lVar4;
    lVar10 = lVar4;
  }
  if (lVar10 == 0) {
    lVar10 = xzalloc(0x30);
    *param_2 = lVar10;
  }
  else {
    *(undefined8 *)(lVar10 + 0x18) = 0;
  }
  lVar4 = readlinebuffer_delim(lVar10,param_1,(int)eolchar);
  if (lVar4 == 0) {
    if ((*param_1 & 0x20) != 0) {
      uVar6 = dcgettext(0,"read error",5);
      piVar12 = __errno_location();
                    /* WARNING: Subroutine does not return */
      error(1,*piVar12,uVar6);
    }
    free(*(void **)(lVar10 + 0x28));
    *(undefined8 *)(lVar10 + 0x28) = 0;
    free(*(void **)(lVar10 + 0x10));
    *(undefined8 *)(lVar10 + 0x10) = 0;
    uVar6 = 0;
  }
  else {
    pbVar14 = *(byte **)(lVar10 + 0x10);
    *(long *)(line_no + lVar20 * 8) = *(long *)(line_no + lVar20 * 8) + 1;
    pbVar1 = pbVar14 + *(long *)(lVar10 + 8) + -1;
    if (pbVar14 != pbVar1) {
      if (DAT_001014fd == '\0') {
LAB_001007ac:
        if (pbVar14 < pbVar1) {
          bVar17 = *pbVar14;
          if ((char)bVar17 < '\0') goto LAB_0010094c;
LAB_001007c1:
          uVar7 = 1;
          wVar15 = (int)(char)bVar17;
          do {
            pbVar19 = pbVar14;
            if (wVar15 == 10) goto LAB_00100930;
            do {
              iVar3 = iswblank(wVar15);
              if (iVar3 == 0) {
                lVar4 = 0;
                pbVar14 = pbVar19;
                if (pbVar1 <= pbVar19) goto LAB_0010077e;
                bVar17 = *pbVar19;
                if ((char)bVar17 < '\0') goto LAB_0010082c;
                goto LAB_001007f2;
              }
LAB_00100930:
              pbVar14 = pbVar19 + (uVar7 & 0xff);
              if (pbVar1 <= pbVar14) goto LAB_00100648;
              bVar17 = *pbVar14;
              if (-1 < (char)bVar17) goto LAB_001007c1;
LAB_0010094c:
              local_4c[1] = 0;
              uVar7 = 1;
              uVar8 = mbrtoc32(local_4c,pbVar14,(long)pbVar1 - (long)pbVar14,local_4c + 1);
              wVar15 = 0;
              pbVar19 = pbVar14;
            } while ((long)uVar8 < 0);
            uVar7 = uVar8 & 0xffffffff;
            wVar15 = local_4c[0];
          } while( true );
        }
        goto LAB_00100648;
      }
      if (tab != 10) {
LAB_001008cd:
        if (pbVar14 < pbVar1) {
          bVar17 = *pbVar14;
          pbVar19 = pbVar14;
          if ((char)bVar17 < '\0') goto LAB_00100a20;
          do {
            uVar7 = 1;
            uVar18 = 0;
            wVar15 = (int)(char)bVar17;
LAB_001008f9:
            if ((uVar18 - DAT_001014fc) * 0x4000 + (wVar15 - tab) == 0) {
              lVar4 = *(long *)(lVar10 + 0x18);
              lVar11 = *(long *)(lVar10 + 0x28);
              if (*(long *)(lVar10 + 0x20) <= lVar4) {
                lVar11 = xpalloc(lVar11,lVar10 + 0x20,1,0xffffffffffffffff,0x10);
                *(long *)(lVar10 + 0x28) = lVar11;
                lVar4 = *(long *)(lVar10 + 0x18);
              }
              puVar13 = (undefined8 *)(lVar4 * 0x10 + lVar11);
              *puVar13 = pbVar14;
              puVar13[1] = (long)pbVar19 - (long)pbVar14;
              *(long *)(lVar10 + 0x18) = lVar4 + 1;
              if ((char)*pbVar19 < '\0') {
                local_4c[1] = 0;
                lVar4 = mbrtoc32(local_4c,pbVar19,(long)pbVar1 - (long)pbVar19,local_4c + 1);
                if (lVar4 < 0) goto LAB_001008c5;
              }
              else {
LAB_001008c5:
                lVar4 = 1;
              }
              pbVar14 = pbVar19 + lVar4;
              goto LAB_001008cd;
            }
            pbVar19 = pbVar19 + (uVar7 & 0xff);
            if (pbVar1 <= pbVar19) goto LAB_00100617;
            bVar17 = *pbVar19;
          } while (-1 < (char)bVar17);
LAB_00100a20:
          local_4c[1] = 0;
          uVar7 = mbrtoc32(local_4c,pbVar19,(long)pbVar1 - (long)pbVar19,local_4c + 1);
          uVar18 = (uint)bVar17;
          if ((long)uVar7 < 0) {
            wVar15 = 0;
            uVar7 = 1;
          }
          else {
            uVar18 = 0;
            wVar15 = local_4c[0];
          }
          goto LAB_001008f9;
        }
      }
LAB_00100617:
      lVar4 = *(long *)(lVar10 + 0x18);
      lVar11 = *(long *)(lVar10 + 0x28);
      if (*(long *)(lVar10 + 0x20) <= lVar4) {
        lVar11 = xpalloc(lVar11,lVar10 + 0x20,1,0xffffffffffffffff,0x10);
        *(long *)(lVar10 + 0x28) = lVar11;
        lVar4 = *(long *)(lVar10 + 0x18);
      }
      puVar16 = (ulong *)(lVar11 + lVar4 * 0x10);
      *puVar16 = (ulong)pbVar14;
      puVar16[1] = (long)pbVar1 - (long)pbVar14;
      *(long *)(lVar10 + 0x18) = lVar4 + 1;
    }
LAB_00100648:
    if ((((*(long *)(prevline + lVar20 * 8) != 0) && (check_input_order != 2)) &&
        ((check_input_order == 1 || (seen_unpairable != '\0')))) &&
       ((&issued_disorder_warning)[lVar20] == '\0')) {
      uVar6 = join_field_1;
      if (param_3 != 1) {
        uVar6 = join_field_2;
      }
      iVar3 = keycmp(*(long *)(prevline + lVar20 * 8),lVar10,uVar6,uVar6);
      if (0 < iVar3) {
        lVar4 = *(long *)(lVar10 + 8);
        lVar10 = *(long *)(lVar10 + 0x10);
        if ((0 < lVar4) && (*(char *)(lVar10 + -1 + lVar4) == '\n')) {
          lVar4 = lVar4 + -1;
        }
        bVar21 = check_input_order == 1;
        uVar6 = *(undefined8 *)(line_no + lVar20 * 8);
        uVar2 = (&g_names)[lVar20];
        uVar5 = dcgettext(0,"%s:%ju: is not sorted: %.*s",5);
        lVar20 = 0x7fffffff;
        if (lVar4 < 0x80000000) {
          lVar20 = lVar4;
        }
                    /* WARNING: Subroutine does not return */
        error(bVar21,0,uVar5,uVar2,uVar6,lVar20,lVar10);
      }
    }
    *(long *)(prevline + lVar20 * 8) = lVar10;
    uVar6 = 1;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_001007f2:
  uVar7 = 1;
  wVar15 = (int)(char)bVar17;
  while (wVar15 != 10) {
    while( true ) {
      iVar3 = iswblank(wVar15);
      if ((iVar3 != 0) || (pbVar14 = pbVar14 + (uVar7 & 0xff), pbVar1 <= pbVar14))
      goto LAB_00100778;
      bVar17 = *pbVar14;
      if (-1 < (char)bVar17) goto LAB_001007f2;
LAB_0010082c:
      local_4c[1] = 0;
      uVar7 = mbrtoc32(local_4c,pbVar14,(long)pbVar1 - (long)pbVar14,local_4c + 1);
      wVar15 = local_4c[0];
      if (-1 < (long)uVar7) break;
      uVar7 = 1;
      wVar15 = 0;
    }
  }
LAB_00100778:
  lVar4 = (long)pbVar14 - (long)pbVar19;
LAB_0010077e:
  lVar11 = *(long *)(lVar10 + 0x18);
  lVar9 = *(long *)(lVar10 + 0x28);
  if (*(long *)(lVar10 + 0x20) <= lVar11) {
    lVar9 = xpalloc(lVar9,lVar10 + 0x20,1,0xffffffffffffffff,0x10);
    *(long *)(lVar10 + 0x28) = lVar9;
    lVar11 = *(long *)(lVar10 + 0x18);
  }
  puVar13 = (undefined8 *)(lVar11 * 0x10 + lVar9);
  *puVar13 = pbVar19;
  puVar13[1] = lVar4;
  *(long *)(lVar10 + 0x18) = lVar11 + 1;
  goto LAB_001007ac;
}



void getseq(undefined8 param_1,long *param_2,undefined4 param_3)

{
  long lVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = param_2[2];
  lVar4 = *param_2 * 8;
  if (*param_2 == param_2[1]) {
    lVar3 = xpalloc(lVar3,param_2 + 1,1,0xffffffffffffffff,8);
    param_2[2] = lVar3;
    lVar1 = *param_2;
    lVar4 = lVar1 * 8;
    if (lVar1 < param_2[1]) {
      lVar4 = lVar1 * 8;
      memset((void *)(lVar3 + lVar4),0,(param_2[1] - lVar1) * 8);
    }
  }
  cVar2 = get_line(param_1,lVar3 + lVar4,param_3);
  if (cVar2 != '\0') {
    *param_2 = *param_2 + 1;
  }
  return;
}



void add_field_list(char *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  char *pcVar5;
  ulong uVar6;
  undefined8 uVar7;
  char *pcVar8;
  wint_t __wc;
  ulong uVar9;
  long in_FS_OFFSET;
  wint_t local_2c;
  undefined4 local_28 [2];
  long local_20;
  
  cVar1 = *param_1;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar8 = param_1;
  if (cVar1 == '\0') {
LAB_00100e00:
    uVar3 = quote(pcVar8);
    pcVar8 = "invalid file number in field spec: %s";
LAB_00100e17:
    uVar7 = dcgettext(0,pcVar8,5);
                    /* WARNING: Subroutine does not return */
    error(1,0,uVar7,uVar3);
  }
LAB_00100c43:
  do {
    if (cVar1 < '\0') {
      pcVar5 = param_1 + (2 - (ulong)(param_1[1] == '\0'));
      local_28[0] = 0;
      uVar9 = mbrtoc32(&local_2c,param_1,
                       pcVar5 + (*pcVar5 != '\0') +
                       ((ulong)(pcVar5[*pcVar5 != '\0'] != '\0') - (long)param_1),local_28);
      __wc = local_2c;
      if (-1 < (long)uVar9) goto LAB_00100c52;
      __wc = 0;
      uVar9 = 1;
LAB_00100c5b:
      iVar2 = iswblank(__wc);
      if (iVar2 != 0) goto LAB_00100cf8;
      param_1 = param_1 + (uVar9 & 0xff);
      cVar1 = *param_1;
      if (cVar1 != '\0') goto LAB_00100c43;
LAB_00100c80:
      cVar1 = *pcVar8;
    }
    else {
      uVar9 = 1;
      __wc = (int)cVar1;
LAB_00100c52:
      if (__wc != 0x2c) goto LAB_00100c5b;
LAB_00100cf8:
      if (*param_1 == '\0') goto LAB_00100c80;
      uVar9 = 1;
      if (*param_1 < '\0') {
        pcVar5 = param_1 + (2 - (ulong)(param_1[1] == '\0'));
        local_28[0] = 0;
        uVar6 = mbrtoc32(&local_2c,param_1,
                         pcVar5 + (*pcVar5 != '\0') +
                         ((ulong)(pcVar5[*pcVar5 != '\0'] != '\0') - (long)param_1),local_28);
        if (-1 < (long)uVar6) {
          uVar9 = uVar6 & 0xff;
        }
      }
      *param_1 = '\0';
      cVar1 = *pcVar8;
      param_1 = param_1 + uVar9;
    }
    if (cVar1 == '0') {
      if (pcVar8[1] != '\0') goto LAB_00100e32;
      uVar3 = 0;
      iVar2 = 0;
    }
    else {
      if (1 < (byte)(cVar1 - 0x31U)) goto LAB_00100e00;
      if (pcVar8[1] != '.') {
LAB_00100e32:
        uVar3 = quote(pcVar8);
        pcVar8 = "invalid field specifier: %s";
        goto LAB_00100e17;
      }
      iVar2 = cVar1 + -0x30;
      uVar3 = string_to_join_field(pcVar8 + 2);
    }
    piVar4 = (int *)xmalloc(0x18);
    *piVar4 = iVar2;
    *(undefined8 *)(piVar4 + 2) = uVar3;
    piVar4[4] = 0;
    piVar4[5] = 0;
    *(int **)(outlist_end + 0x10) = piVar4;
    cVar1 = *param_1;
    outlist_end = (undefined *)piVar4;
    pcVar8 = param_1;
    if (cVar1 == '\0') {
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void usage(int param_1)

{
  FILE *pFVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
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
  ppuVar6 = &local_a8;
  local_30 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(_stderr,2,uVar3,uVar5);
    goto LAB_00100eaa;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... FILE1 FILE2\n",5);
  __printf_chk(2,uVar3,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "For each pair of input lines with identical join fields, write a line to\nstandard output.  The default join field is the first, delimited by blanks.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"\nWhen FILE1 or FILE2 (not both) is -, read standard input.\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\n  -a FILENUM             also print unpairable lines from file FILENUM, where\n                           FILENUM is 1 or 2, corresponding to FILE1 or FILE2\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -e STRING              replace missing (empty) input fields with STRING;\n                           I.e., missing fields specified with \'-12jo\' options\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -i, --ignore-case      ignore differences in case when comparing fields\n  -j FIELD               equivalent to \'-1 FIELD -2 FIELD\'\n  -o FORMAT              obey FORMAT while constructing output line\n  -t CHAR                use CHAR as input and output field separator\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -v FILENUM             like -a FILENUM, but suppress joined output lines\n  -1 FIELD               join on this FIELD of file 1\n  -2 FIELD               join on this FIELD of file 2\n      --check-order      check that the input is correctly sorted, even\n                           if all input lines are pairable\n      --nocheck-order    do not check that the input is correctly sorted\n      --header           treat the first line in each file as field headers,\n                           print them without trying to pair them\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"  -z, --zero-terminated  line delimiter is NUL, not newline\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nUnless -t CHAR is given, leading blanks separate fields and are ignored,\nelse fields are separated by CHAR.  Any FIELD is a field number counted\nfrom 1.  FORMAT is one or more comma or blank separated specifications,\neach being \'FILENUM.FIELD\' or \'0\'.  Default FORMAT outputs the join field,\nthe remaining fields from FILE1, the remaining fields from FILE2, all\nseparated by CHAR.  If FORMAT is the keyword \'auto\', then the first\nline of each file determines the number of fields output for each line.\n\nImportant: FILE1 and FILE2 must be sorted on the join fields.\nE.g., use \"sort -k 1b,1\" if \'join\' has no options,\nor use \"join -t \'\'\" if \'sort\' has no options.\nComparisons honor the rules specified by \'LC_COLLATE\'.\nIf the input is not sorted and some lines cannot be joined, a\nwarning message will be given.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pcVar4 = "[";
  local_a8 = &_LC8;
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
    iVar2 = strcmp("join",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)ppuVar6 + 0x10);
    ppuVar6 = (undefined **)((long)ppuVar6 + 0x10);
  } while (pcVar4 != (char *)0x0);
  puVar7 = *(undefined **)((long)ppuVar6 + 8);
  if (puVar7 == (undefined *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    puVar7 = &_LC9;
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) goto LAB_0010116d;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC9);
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
LAB_0010116d:
      iVar2 = strncmp(pcVar4,"en_",3);
      pFVar1 = _stdout;
      if (iVar2 != 0) {
        pcVar4 = (char *)dcgettext(0,
                                   "Report any translation bugs to <https://translationproject.org/team/>\n"
                                   ,5);
        fputs_unlocked(pcVar4,pFVar1);
      }
    }
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar4 = "";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC9);
    if (puVar7 == &_LC9) {
      pcVar4 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,puVar7,pcVar4);
LAB_00100eaa:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



void add_file_name_constprop_0
               (undefined8 param_1,int *param_2,int *param_3,int *param_4,int *param_5,
               undefined4 *param_6)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  
  iVar1 = *param_4;
  if (iVar1 != 2) {
    iVar8 = iVar1 + 1;
    lVar5 = (long)iVar1 * 4;
    lVar4 = (long)iVar1 << 3;
    goto LAB_001012dd;
  }
  iVar1 = *param_2;
  uVar6 = (&g_names)[iVar1 == 0];
  iVar8 = param_2[iVar1 == 0];
  if (iVar8 == 2) {
    param_3[1] = param_3[1] + -1;
    lVar5 = string_to_join_field(uVar6);
    lVar4 = lVar5;
    lVar3 = join_field_1;
    lVar2 = join_field_2;
    if (lVar5 != join_field_2) {
joined_r0x001013eb:
      if (-1 < lVar2) {
        uVar6 = dcgettext(0,"incompatible join fields %td, %td",5);
                    /* WARNING: Subroutine does not return */
        error(1,0,uVar6,lVar2,lVar5);
      }
    }
  }
  else {
    lVar4 = join_field_2;
    lVar3 = join_field_1;
    if (iVar8 < 3) {
      if (iVar8 == 0) {
        uVar6 = quotearg_style(4,param_1);
        uVar7 = dcgettext(0,"extra operand %s",5);
                    /* WARNING: Subroutine does not return */
        error(0,0,uVar7,uVar6);
      }
      if (iVar8 == 1) {
        *param_3 = *param_3 + -1;
        lVar5 = string_to_join_field(uVar6);
        lVar4 = join_field_2;
        lVar3 = lVar5;
        lVar2 = join_field_1;
        if (lVar5 != join_field_1) goto joined_r0x001013eb;
      }
    }
    else if (iVar8 == 3) {
      add_field_list();
      lVar4 = join_field_2;
      lVar3 = join_field_1;
    }
  }
  join_field_1 = lVar3;
  join_field_2 = lVar4;
  if (iVar1 != 0) {
    *param_2 = param_2[1];
    g_names = DAT_00101558;
  }
  lVar4 = 8;
  lVar5 = 4;
  iVar8 = 2;
LAB_001012dd:
  *(int *)((long)param_2 + lVar5) = *param_5;
  *(undefined8 *)((long)&g_names + lVar4) = param_1;
  *param_4 = iVar8;
  if (*param_5 == 3) {
    *param_6 = 3;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 main(int param_1,undefined8 *param_2)

{
  long *plVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  bool bVar8;
  byte bVar9;
  char cVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  int *piVar16;
  uint uVar17;
  ulong uVar18;
  char *pcVar19;
  void *__ptr;
  undefined1 *puVar20;
  char *pcVar21;
  undefined1 *puVar22;
  long lVar23;
  long in_FS_OFFSET;
  long local_b8;
  int local_94;
  void *local_90;
  undefined1 local_88 [16];
  long *local_78;
  undefined1 local_68 [16];
  long *local_58;
  undefined8 local_50;
  undefined1 local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_94 = 0;
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  hard_LC_COLLATE = hard_locale(3);
  atexit((__func *)&close_stdout);
  atexit(free_spareline);
  print_pairables = '\x01';
  seen_unpairable = 0;
  check_input_order = 0;
  _issued_disorder_warning = 0;
  pcVar21 = empty_filler;
LAB_00102370:
  while (empty_filler = pcVar21, iVar11 = getopt_long(param_1,param_2,"-a:e:i1:2:j:o:t:v:z"),
        pcVar19 = _optarg, iVar11 != -1) {
    if (0x82 < iVar11) {
switchD_001023bb_caseD_33:
                    /* WARNING: Subroutine does not return */
      usage(1);
    }
    if (iVar11 < 0x31) {
      if (iVar11 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      if (iVar11 != 1) {
        if (iVar11 == -0x83) {
          uVar12 = proper_name_lite("Mike Haertel","Mike Haertel");
          version_etc(_stdout,&_LC9,"GNU coreutils",_Version,uVar12,0);
                    /* WARNING: Subroutine does not return */
          exit(0);
        }
        goto switchD_001023bb_caseD_33;
      }
      add_file_name_constprop_0(_optarg,local_48,&local_50,&local_94);
      pcVar21 = empty_filler;
    }
    else {
      pcVar21 = empty_filler;
      switch(iVar11) {
      case 0x31:
        uVar12 = string_to_join_field(_optarg);
        set_join_field(&join_field_1,uVar12);
        pcVar21 = empty_filler;
        break;
      case 0x32:
        uVar12 = string_to_join_field(_optarg);
        set_join_field(&join_field_2,uVar12);
        pcVar21 = empty_filler;
        break;
      default:
        goto switchD_001023bb_caseD_33;
      case 0x65:
        goto switchD_001023bb_caseD_65;
      case 0x69:
        ignore_case = 1;
        break;
      case 0x6a:
        if ((((byte)(*_optarg - 0x31U) < 2) && (_optarg[1] == '\0')) &&
           (_optarg == (char *)(param_2[(long)_optind + -1] + 2))) {
          *(int *)(local_48 + (ulong)(*_optarg == '2') * 4 + -8) =
               *(int *)(local_48 + (ulong)(*_optarg == '2') * 4 + -8) + 1;
        }
        else {
          uVar12 = string_to_join_field();
          set_join_field(&join_field_1,uVar12);
          set_join_field(&join_field_2,join_field_1);
          pcVar21 = empty_filler;
        }
        break;
      case 0x6f:
        iVar11 = strcmp(_optarg,"auto");
        if (iVar11 == 0) {
          autoformat = '\x01';
          pcVar21 = empty_filler;
        }
        else {
          add_field_list(pcVar19);
          pcVar21 = empty_filler;
        }
        break;
      case 0x74:
        if (*_optarg == '\0') {
          uVar18 = 1;
          uVar17 = 0;
          iVar11 = 10;
          pcVar21 = output_separator;
        }
        else {
          iVar11 = strcmp(_optarg,"\\0");
          if (iVar11 == 0) {
            uVar18 = 1;
            uVar17 = 0;
            iVar11 = 0;
            output_separator = &_LC1;
            pcVar21 = output_separator;
          }
          else {
            uVar12 = mcel_scant(pcVar19,0);
            iVar11 = (int)uVar12;
            bVar9 = (byte)((ulong)uVar12 >> 0x28);
            uVar18 = (ulong)bVar9;
            uVar17 = (uint)((ulong)uVar12 >> 0x20);
            pcVar21 = _optarg;
            if (_optarg[bVar9] != '\0') {
              uVar12 = quote();
              pcVar21 = "multi-character tab %s";
              goto LAB_00102f57;
            }
          }
        }
        output_separator = pcVar21;
        if ((DAT_001014fd != '\0') &&
           (iVar11 - tab != ((uint)DAT_001014fc - (uVar17 & 0xff)) * 0x4000)) {
          pcVar21 = "incompatible tabs";
          goto LAB_00102fcf;
        }
        DAT_001014fd = (char)uVar18;
        output_seplen = uVar18;
        tab = iVar11;
        DAT_001014fc = (byte)uVar17;
        pcVar21 = empty_filler;
        break;
      case 0x76:
        print_pairables = '\0';
      case 0x61:
        iVar11 = xstrtol(_optarg,0,10,local_68);
        if ((iVar11 != 0) || (1 < local_68._0_8_ - 1)) {
          uVar12 = quote(_optarg);
          pcVar21 = "invalid file number: %s";
LAB_00102f57:
          uVar15 = dcgettext(0,pcVar21,5);
                    /* WARNING: Subroutine does not return */
          error(1,0,uVar15,uVar12);
        }
        pcVar21 = empty_filler;
        if (local_68._0_8_ == 1) {
          print_unpairables_1 = '\x01';
        }
        else {
          print_unpairables_2 = '\x01';
        }
        break;
      case 0x7a:
        eolchar = 0;
        break;
      case 0x80:
        check_input_order = 1;
        break;
      case 0x81:
        check_input_order = 2;
        break;
      case 0x82:
        join_header_lines = '\x01';
      }
    }
  }
  if (_optind < param_1) {
    do {
      lVar13 = (long)_optind;
      _optind = _optind + 1;
      add_file_name_constprop_0(param_2[lVar13],local_48,&local_50,&local_94);
    } while (_optind < param_1);
  }
  if (local_94 != 2) {
    if (local_94 != 0) {
      uVar12 = quote(param_2[(long)param_1 + -1]);
      uVar15 = dcgettext(0,"missing operand after %s",5);
                    /* WARNING: Subroutine does not return */
      error(0,0,uVar15,uVar12);
    }
    uVar12 = dcgettext(0,"missing operand",5);
                    /* WARNING: Subroutine does not return */
    error(0,0,uVar12);
  }
  if ((int)local_50 != 0) {
    set_join_field(&join_field_1,0);
    set_join_field(&join_field_2,0);
  }
  if (local_50._4_4_ != 0) {
    set_join_field(&join_field_1,1);
    set_join_field(&join_field_2,1);
  }
  pcVar21 = g_names;
  if (join_field_1 < 0) {
    join_field_1 = 0;
  }
  if (join_field_2 < 0) {
    join_field_2 = 0;
  }
  iVar11 = strcmp(g_names,"-");
  lVar13 = _stdin;
  if (iVar11 != 0) {
    lVar13 = fopen_safer(pcVar21,&_LC51);
  }
  pcVar21 = DAT_00101558;
  pcVar19 = g_names;
  if (lVar13 == 0) goto LAB_00103024;
  iVar11 = strcmp(DAT_00101558,"-");
  lVar14 = _stdin;
  if (iVar11 != 0) {
    lVar14 = fopen_safer(pcVar21,&_LC51);
  }
  pcVar19 = DAT_00101558;
  if (lVar14 == 0) goto LAB_00103024;
  if (lVar13 == lVar14) {
    uVar12 = dcgettext(0,"both files cannot be standard input",5);
    piVar16 = __errno_location();
                    /* WARNING: Subroutine does not return */
    error(1,*piVar16,uVar12);
  }
  fadvise(lVar13,2);
  fadvise(lVar14,2);
  local_78 = (long *)0x0;
  local_88 = (undefined1  [16])0x0;
  getseq(lVar13,local_88,1);
  local_58 = (long *)0x0;
  local_68 = (undefined1  [16])0x0;
  getseq(lVar14,local_68,2);
  if (autoformat != '\0') {
    autocount_1 = local_88._0_8_;
    if (local_88._0_8_ != 0) {
      autocount_1 = *(long *)(*local_78 + 0x18);
    }
    autocount_2 = local_68._0_8_;
    if (local_68._0_8_ != 0) {
      autocount_2 = *(long *)(*local_58 + 0x18);
    }
  }
  if (join_header_lines == '\0') {
LAB_00102860:
    if (local_88._0_8_ != 0) {
      while( true ) {
        if (local_68._0_8_ == 0) {
          if (check_input_order == 2) {
            bVar9 = 0;
            if (print_unpairables_1 == '\0') goto LAB_00102f2d;
            goto LAB_00102ef7;
          }
          bVar2 = true;
          goto LAB_001028f8;
        }
        iVar11 = keycmp(*local_78,*local_58,join_field_1);
        if (iVar11 < 0) {
          if (print_unpairables_1 != '\0') {
            prjoin(*local_78);
          }
          auVar7._8_8_ = 0;
          auVar7._0_8_ = local_88._8_8_;
          local_88 = auVar7 << 0x40;
          getseq(lVar13,local_88,1);
          seen_unpairable = 1;
          goto LAB_00102860;
        }
        if (iVar11 == 0) break;
        if (print_unpairables_2 != '\0') {
          prjoin(uni_blank,*local_58);
        }
        auVar6._8_8_ = 0;
        auVar6._0_8_ = local_68._8_8_;
        local_68 = auVar6 << 0x40;
        getseq(lVar14,local_68,2);
        seen_unpairable = 1;
        if (local_88._0_8_ == 0) goto LAB_001028da;
      }
      do {
        cVar10 = getseq(lVar13,local_88,1);
        if (cVar10 == '\0') {
          local_88._0_8_ = local_88._0_8_ + 1;
          bVar2 = true;
          goto LAB_00102a4a;
        }
        iVar11 = keycmp(local_78[local_88._0_8_ + -1],*local_58,join_field_1);
      } while (iVar11 == 0);
      bVar2 = false;
LAB_00102a4a:
      do {
        cVar10 = getseq(lVar14,local_68,2);
        if (cVar10 == '\0') {
          local_68._0_8_ = local_68._0_8_ + 1;
          bVar8 = true;
          goto LAB_00102a69;
        }
        iVar11 = keycmp(*local_78,local_58[local_68._0_8_ + -1],join_field_1);
      } while (iVar11 == 0);
      bVar8 = false;
LAB_00102a69:
      if (print_pairables != '\0') {
        local_b8 = 0;
        if (1 < (long)local_88._0_8_) {
          do {
            lVar23 = 0;
            if (1 < (long)local_68._0_8_) {
              do {
                plVar1 = local_58 + lVar23;
                lVar23 = lVar23 + 1;
                prjoin(local_78[local_b8],*plVar1);
              } while (lVar23 < local_68._0_8_ + -1);
            }
            local_b8 = local_b8 + 1;
          } while (local_b8 < local_88._0_8_ + -1);
        }
      }
      auVar5 = local_88;
      if (!bVar2) {
        lVar23 = *local_78;
        *local_78 = local_78[local_88._0_8_ + -1];
        local_78[local_88._0_8_ + -1] = lVar23;
      }
      local_88._1_7_ = 0;
      local_88[0] = !bVar2;
      local_88._8_8_ = auVar5._8_8_;
      if (bVar8) {
        auVar3._8_8_ = 0;
        auVar3._0_8_ = local_68._8_8_;
        local_68 = auVar3 << 0x40;
      }
      else {
        lVar23 = *local_58;
        *local_58 = local_58[local_68._0_8_ + -1];
        local_58[local_68._0_8_ + -1] = lVar23;
        local_68._0_8_ = 1;
      }
      goto LAB_00102860;
    }
  }
  else {
    if (local_88._0_8_ != 0) {
      puVar20 = uni_blank;
      puVar22 = (undefined1 *)*local_78;
      if (local_68._0_8_ != 0) goto LAB_00102b5b;
LAB_00102b63:
      prjoin(puVar22,puVar20);
      prevline = (undefined1  [16])0x0;
      if (local_88._0_8_ != 0) {
        auVar5._8_8_ = 0;
        auVar5._0_8_ = local_88._8_8_;
        local_88 = auVar5 << 0x40;
        getseq(lVar13,local_88,1);
      }
      if (local_68._0_8_ != 0) {
        auVar4._8_8_ = 0;
        auVar4._0_8_ = local_68._8_8_;
        local_68 = auVar4 << 0x40;
        getseq(lVar14,local_68,2);
      }
      goto LAB_00102860;
    }
    if (local_68._0_8_ != 0) {
      puVar22 = uni_blank;
LAB_00102b5b:
      puVar20 = (undefined1 *)*local_58;
      goto LAB_00102b63;
    }
  }
LAB_001028da:
  bVar2 = false;
  if (check_input_order == 2) {
LAB_00102f2d:
    bVar9 = 0;
LAB_00102922:
    local_90 = (void *)0x0;
    if ((print_unpairables_2 != '\0') || (__ptr = (void *)0x0, bVar9 != 0)) {
      if (local_68._0_8_ != 0) goto LAB_00102d39;
      __ptr = (void *)0x0;
    }
  }
  else {
LAB_001028f8:
    local_90 = (void *)0x0;
    bVar9 = 1;
    if (issued_disorder_warning != '\0') {
      bVar9 = DAT_00101539 ^ 1;
    }
    if ((print_unpairables_1 == '\0' && bVar9 == 0) || (!bVar2)) goto LAB_00102922;
    if (print_unpairables_1 != '\0') {
LAB_00102ef7:
      local_90 = (void *)0x0;
      prjoin(*local_78,uni_blank);
    }
    if (local_68._0_8_ != 0) {
      seen_unpairable = 1;
    }
LAB_00102e80:
    do {
      cVar10 = get_line(lVar13,&local_90,1);
      if (cVar10 == '\0') break;
      if (print_unpairables_1 == '\0') {
        cVar10 = issued_disorder_warning;
      }
      else {
        prjoin(local_90,uni_blank);
        cVar10 = print_unpairables_1;
        if (issued_disorder_warning == '\0') goto LAB_00102e80;
      }
    } while (cVar10 != '\0');
    if (((print_unpairables_2 != '\0') || (bVar9 != 0)) && (local_68._0_8_ != 0)) {
LAB_00102d39:
      if (print_unpairables_2 != '\0') {
        prjoin(uni_blank,*local_58);
      }
      if (local_88._0_8_ != 0) {
        seen_unpairable = 1;
      }
LAB_00102d58:
      do {
        cVar10 = get_line(lVar14,&local_90,2);
        if (cVar10 == '\0') break;
        if (print_unpairables_2 == '\0') {
          cVar10 = DAT_00101539;
        }
        else {
          prjoin(uni_blank,local_90);
          cVar10 = print_unpairables_2;
          if (DAT_00101539 == '\0') goto LAB_00102d58;
        }
      } while (cVar10 != '\0');
    }
    __ptr = local_90;
    if (local_90 != (void *)0x0) {
      free(*(void **)((long)local_90 + 0x28));
      free(*(void **)((long)__ptr + 0x10));
    }
  }
  free(__ptr);
  delseq(local_88);
  delseq(local_68);
  iVar11 = rpl_fclose(lVar13);
  pcVar19 = g_names;
  if ((iVar11 != 0) || (iVar11 = rpl_fclose(lVar14), pcVar19 = DAT_00101558, iVar11 != 0)) {
LAB_00103024:
    uVar12 = quotearg_n_style_colon(0,3,pcVar19);
    piVar16 = __errno_location();
                    /* WARNING: Subroutine does not return */
    error(1,*piVar16,&_LC52,uVar12);
  }
  if ((issued_disorder_warning == '\0') && (DAT_00101539 == '\0')) {
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return 0;
  }
  pcVar21 = "input is not in sorted order";
  goto LAB_00102fcf;
switchD_001023bb_caseD_65:
  pcVar21 = _optarg;
  if ((empty_filler != (char *)0x0) && (iVar11 = strcmp(empty_filler,_optarg), iVar11 != 0)) {
    pcVar21 = "conflicting empty-field replacement strings";
LAB_00102fcf:
    uVar12 = dcgettext(0,pcVar21,5);
                    /* WARNING: Subroutine does not return */
    error(1,0,uVar12);
  }
  goto LAB_00102370;
}


