
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



void string_to_join_field_part_0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = quote();
  uVar2 = dcgettext(0,"invalid field number: %s",5);
                    /* WARNING: Subroutine does not return */
  error(1,0,uVar2,uVar1);
}



long string_to_join_field(undefined8 param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = xstrtoimax(param_1,0,10,&local_18,&_LC2);
  if (iVar1 == 1) {
    local_18 = 0x7ffffffffffffffe;
  }
  else {
    if ((iVar1 != 0) || (local_18 < 1)) {
      string_to_join_field_part_0(param_1);
      goto LAB_001001f4;
    }
    local_18 = local_18 + -1;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_18;
  }
LAB_001001f4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void prfield_part_0_isra_0(long param_1,long param_2)

{
  size_t __n;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_2 + param_1 * 0x10);
  __n = puVar1[1];
  if (__n != 0) {
    fwrite_unlocked((void *)*puVar1,1,__n,_stdout);
    return;
  }
  if (empty_filler != (char *)0x0) {
    fputs_unlocked(empty_filler,_stdout);
    return;
  }
  return;
}



void delseq(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = 0;
  if (0 < *(long *)(param_1 + 8)) {
    do {
      while (lVar2 = *(long *)((long)*(void **)(param_1 + 0x10) + lVar3 * 8), lVar2 == 0) {
        lVar3 = lVar3 + 1;
        if (*(long *)(param_1 + 8) <= lVar3) {
          free(*(void **)(param_1 + 0x10));
          return;
        }
      }
      free(*(void **)(lVar2 + 0x28));
      *(undefined8 *)(lVar2 + 0x28) = 0;
      free(*(void **)(lVar2 + 0x10));
      lVar1 = *(long *)(param_1 + 0x10);
      *(undefined8 *)(lVar2 + 0x10) = 0;
      lVar2 = lVar3 * 8;
      lVar3 = lVar3 + 1;
      free(*(void **)(lVar1 + lVar2));
    } while (lVar3 < *(long *)(param_1 + 8));
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
  pvVar1 = DAT_00101888;
  if (DAT_00101888 != (void *)0x0) {
    free(*(void **)((long)DAT_00101888 + 0x28));
    free(*(void **)((long)pvVar1 + 0x10));
    free(pvVar1);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void prfields(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  if (autoformat == '\0') {
    param_3 = *(long *)(param_1 + 0x18);
  }
  lVar2 = param_2;
  if (param_3 <= param_2) {
    lVar2 = param_3;
  }
  if (0 < lVar2) {
    lVar1 = 0;
    do {
      while (fwrite_unlocked(output_separator,1,output_seplen,_stdout),
            lVar1 < *(long *)(param_1 + 0x18)) {
        prfield_part_0_isra_0(lVar1,*(undefined8 *)(param_1 + 0x28));
LAB_00100385:
        lVar1 = lVar1 + 1;
        if (lVar2 == lVar1) goto LAB_001003d5;
      }
      if (empty_filler == (char *)0x0) goto LAB_00100385;
      lVar1 = lVar1 + 1;
      fputs_unlocked(empty_filler,_stdout);
    } while (lVar2 != lVar1);
  }
LAB_001003d5:
  param_2 = param_2 + 1;
  if (param_3 <= param_2) {
    return;
  }
  do {
    while (fwrite_unlocked(output_separator,1,output_seplen,_stdout),
          *(long *)(param_1 + 0x18) <= param_2) {
      if (empty_filler == (char *)0x0) goto LAB_001003ed;
      param_2 = param_2 + 1;
      fputs_unlocked(empty_filler,_stdout);
      if (param_3 == param_2) {
        return;
      }
    }
    prfield_part_0_isra_0(param_2,*(undefined8 *)(param_1 + 0x28));
LAB_001003ed:
    param_2 = param_2 + 1;
    if (param_3 == param_2) {
      return;
    }
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void prjoin(undefined1 *param_1,undefined1 *param_2)

{
  byte *pbVar1;
  size_t __n;
  byte bVar2;
  FILE *__stream;
  int iVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  int *piVar7;
  undefined8 uVar8;
  
  if (outlist_head._16_8_ != 0) {
    piVar7 = (int *)outlist_head._16_8_;
    if (param_1 == uni_blank) {
      iVar3 = *(int *)outlist_head._16_8_;
      if (iVar3 != 0) goto LAB_001004c7;
LAB_00100480:
      puVar4 = param_2;
      lVar5 = join_field_2;
      if (*(long *)(param_2 + 0x18) <= join_field_2) goto LAB_001004db;
LAB_00100490:
      prfield_part_0_isra_0(lVar5,*(undefined8 *)(puVar4 + 0x28));
      while (piVar7 = *(int **)(piVar7 + 4), piVar7 != (int *)0x0) {
        while( true ) {
          fwrite_unlocked(output_separator,1,output_seplen,_stdout);
          iVar3 = *piVar7;
          if (iVar3 == 0) goto LAB_00100480;
LAB_001004c7:
          lVar5 = *(long *)(piVar7 + 2);
          puVar4 = uni_blank;
          if (iVar3 != 1) {
            puVar4 = param_2;
          }
          if (lVar5 < *(long *)(puVar4 + 0x18)) goto LAB_00100490;
LAB_001004db:
          if (empty_filler == (char *)0x0) break;
          fputs_unlocked(empty_filler,_stdout);
          piVar7 = *(int **)(piVar7 + 4);
          if (piVar7 == (int *)0x0) goto LAB_00100508;
        }
      }
    }
    else {
      while( true ) {
        puVar4 = param_1;
        lVar5 = join_field_1;
        if ((*piVar7 != 0) && (puVar4 = param_2, lVar5 = *(long *)(piVar7 + 2), *piVar7 == 1)) {
          puVar4 = param_1;
        }
        if (lVar5 < *(long *)(puVar4 + 0x18)) {
          prfield_part_0_isra_0(lVar5,*(undefined8 *)(puVar4 + 0x28));
        }
        else if (empty_filler != (char *)0x0) {
          fputs_unlocked(empty_filler,_stdout);
        }
        piVar7 = *(int **)(piVar7 + 4);
        if (piVar7 == (int *)0x0) break;
        fwrite_unlocked(output_separator,1,output_seplen,_stdout);
      }
    }
LAB_00100508:
    bVar2 = eolchar;
    pbVar1 = (byte *)_stdout->_IO_write_ptr;
    if (pbVar1 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = (char *)(pbVar1 + 1);
      *pbVar1 = bVar2;
    }
    else {
      __overflow(_stdout,(uint)eolchar);
    }
    goto LAB_00100527;
  }
  lVar5 = join_field_2;
  puVar4 = param_2;
  if (param_1 != uni_blank) {
    lVar5 = join_field_1;
    puVar4 = param_1;
  }
  if (lVar5 < *(long *)(puVar4 + 0x18)) {
    puVar6 = (undefined8 *)(lVar5 * 0x10 + *(long *)(puVar4 + 0x28));
    __n = puVar6[1];
    if (__n == 0) goto LAB_00100658;
    fwrite_unlocked((void *)*puVar6,1,__n,_stdout);
  }
  else {
LAB_00100658:
    if (empty_filler != (char *)0x0) {
      fputs_unlocked(empty_filler,_stdout);
    }
  }
  prfields(param_1,join_field_1,autocount_1);
  prfields(param_2,join_field_2,autocount_2);
  bVar2 = eolchar;
  pbVar1 = (byte *)_stdout->_IO_write_ptr;
  if (pbVar1 < _stdout->_IO_write_end) {
    _stdout->_IO_write_ptr = (char *)(pbVar1 + 1);
    *pbVar1 = bVar2;
  }
  else {
    __overflow(_stdout,(uint)eolchar);
  }
LAB_00100527:
  __stream = _stdout;
  if ((_stdout->_flags & 0x20) != 0) {
    piVar7 = __errno_location();
    iVar3 = *piVar7;
    fflush_unlocked(__stream);
    fpurge(_stdout);
    clearerr_unlocked(_stdout);
    uVar8 = dcgettext(0,"write error",5);
                    /* WARNING: Subroutine does not return */
    error(1,iVar3,uVar8);
  }
  return;
}



void add_field_list(char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  wint_t __wc;
  byte bVar8;
  long lVar9;
  char *pcVar10;
  long in_FS_OFFSET;
  wint_t local_50;
  undefined4 uStack_4c;
  undefined4 local_48 [2];
  long local_40;
  
  cVar1 = *param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (cVar1 == '\0') {
LAB_00100938:
    uVar7 = quote(param_1);
    pcVar10 = "invalid file number in field spec: %s";
LAB_0010094f:
    uVar6 = dcgettext(0,pcVar10,5);
                    /* WARNING: Subroutine does not return */
    error(1,0,uVar6,uVar7);
  }
  pcVar10 = param_1;
LAB_0010073b:
  do {
    if (cVar1 < '\0') {
      pcVar5 = pcVar10 + (2 - (ulong)(pcVar10[1] == '\0'));
      local_48[0] = 0;
      lVar9 = mbrtoc32(&local_50,pcVar10,
                       pcVar5 + (*pcVar5 != '\0') +
                       ((ulong)(pcVar5[*pcVar5 != '\0'] != '\0') - (long)pcVar10),local_48);
      __wc = local_50;
      if (-1 < lVar9) goto LAB_0010074a;
      __wc = 0;
      bVar8 = 1;
LAB_00100753:
      iVar2 = iswblank(__wc);
      if (iVar2 != 0) goto LAB_00100820;
      pcVar10 = pcVar10 + bVar8;
      cVar1 = *pcVar10;
      if (cVar1 != '\0') goto LAB_0010073b;
LAB_00100770:
      cVar1 = *param_1;
    }
    else {
      lVar9 = 1;
      __wc = (int)cVar1;
LAB_0010074a:
      bVar8 = (byte)lVar9;
      if (__wc != 0x2c) goto LAB_00100753;
LAB_00100820:
      if (*pcVar10 == '\0') goto LAB_00100770;
      lVar9 = 1;
      if (*pcVar10 < '\0') {
        pcVar5 = pcVar10 + (2 - (ulong)(pcVar10[1] == '\0'));
        local_48[0] = 0;
        lVar9 = mbrtoc32(&local_50,pcVar10,
                         pcVar5 + (*pcVar5 != '\0') +
                         ((ulong)(pcVar5[*pcVar5 != '\0'] != '\0') - (long)pcVar10),local_48);
        if (lVar9 < 0) {
          lVar9 = 1;
        }
      }
      *pcVar10 = '\0';
      cVar1 = *param_1;
      pcVar10 = pcVar10 + lVar9;
    }
    if (cVar1 == '0') {
      if (param_1[1] != '\0') goto LAB_0010096a;
      lVar9 = 0;
      iVar2 = 0;
    }
    else {
      if (1 < (byte)(cVar1 - 0x31U)) goto LAB_00100938;
      if (param_1[1] != '.') {
LAB_0010096a:
        uVar7 = quote(param_1);
        pcVar10 = "invalid field specifier: %s";
        goto LAB_0010094f;
      }
      iVar2 = cVar1 + -0x30;
      iVar3 = xstrtoimax(param_1 + 2,0,10,&local_50,&_LC2);
      if (iVar3 == 1) {
        lVar9 = 0x7ffffffffffffffe;
      }
      else {
        if ((iVar3 != 0) || (CONCAT44(uStack_4c,local_50) < 1)) {
          uVar7 = quote(param_1 + 2);
          pcVar10 = "invalid field number: %s";
          goto LAB_0010094f;
        }
        lVar9 = CONCAT44(uStack_4c,local_50) + -1;
      }
    }
    piVar4 = (int *)xmalloc(0x18);
    *piVar4 = iVar2;
    *(long *)(piVar4 + 2) = lVar9;
    piVar4[4] = 0;
    piVar4[5] = 0;
    *(int **)(outlist_end + 0x10) = piVar4;
    cVar1 = *pcVar10;
    outlist_end = (undefined *)piVar4;
    param_1 = pcVar10;
    if (cVar1 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
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
      if (DAT_0010183d == '\0') {
LAB_00100bec:
        if (pbVar14 < pbVar1) {
          bVar17 = *pbVar14;
          if ((char)bVar17 < '\0') goto LAB_00100d8c;
LAB_00100c01:
          uVar7 = 1;
          wVar15 = (int)(char)bVar17;
          do {
            pbVar19 = pbVar14;
            if (wVar15 == 10) goto LAB_00100d70;
            do {
              iVar3 = iswblank(wVar15);
              if (iVar3 == 0) {
                lVar4 = 0;
                pbVar14 = pbVar19;
                if (pbVar1 <= pbVar19) goto LAB_00100bbe;
                bVar17 = *pbVar19;
                if ((char)bVar17 < '\0') goto LAB_00100c6c;
                goto LAB_00100c32;
              }
LAB_00100d70:
              pbVar14 = pbVar19 + (uVar7 & 0xff);
              if (pbVar1 <= pbVar14) goto LAB_00100a88;
              bVar17 = *pbVar14;
              if (-1 < (char)bVar17) goto LAB_00100c01;
LAB_00100d8c:
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
        goto LAB_00100a88;
      }
      if (tab != 10) {
LAB_00100d0d:
        if (pbVar14 < pbVar1) {
          bVar17 = *pbVar14;
          pbVar19 = pbVar14;
          if ((char)bVar17 < '\0') goto LAB_00100e60;
          do {
            uVar7 = 1;
            uVar18 = 0;
            wVar15 = (int)(char)bVar17;
LAB_00100d39:
            if ((uVar18 - DAT_0010183c) * 0x4000 + (wVar15 - tab) == 0) {
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
                if (lVar4 < 0) goto LAB_00100d05;
              }
              else {
LAB_00100d05:
                lVar4 = 1;
              }
              pbVar14 = pbVar19 + lVar4;
              goto LAB_00100d0d;
            }
            pbVar19 = pbVar19 + (uVar7 & 0xff);
            if (pbVar1 <= pbVar19) goto LAB_00100a57;
            bVar17 = *pbVar19;
          } while (-1 < (char)bVar17);
LAB_00100e60:
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
          goto LAB_00100d39;
        }
      }
LAB_00100a57:
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
LAB_00100a88:
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
LAB_00100c32:
  uVar7 = 1;
  wVar15 = (int)(char)bVar17;
  while (wVar15 != 10) {
    while( true ) {
      iVar3 = iswblank(wVar15);
      if ((iVar3 != 0) || (pbVar14 = pbVar14 + (uVar7 & 0xff), pbVar1 <= pbVar14))
      goto LAB_00100bb8;
      bVar17 = *pbVar14;
      if (-1 < (char)bVar17) goto LAB_00100c32;
LAB_00100c6c:
      local_4c[1] = 0;
      uVar7 = mbrtoc32(local_4c,pbVar14,(long)pbVar1 - (long)pbVar14,local_4c + 1);
      wVar15 = local_4c[0];
      if (-1 < (long)uVar7) break;
      uVar7 = 1;
      wVar15 = 0;
    }
  }
LAB_00100bb8:
  lVar4 = (long)pbVar14 - (long)pbVar19;
LAB_00100bbe:
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
  goto LAB_00100bec;
}



void getseq_constprop_0(undefined8 param_1,long *param_2)

{
  long lVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *param_2 * 8;
  if (*param_2 == param_2[1]) {
    lVar3 = xpalloc(param_2[2],param_2 + 1,1,0xffffffffffffffff,8);
    lVar1 = *param_2;
    param_2[2] = lVar3;
    lVar4 = lVar1 * 8;
    if (lVar1 < param_2[1]) {
      lVar4 = lVar1 * 8;
      memset((void *)(lVar3 + lVar4),0,(param_2[1] - lVar1) * 8);
    }
  }
  cVar2 = get_line(param_1,param_2[2] + lVar4,2);
  if (cVar2 != '\0') {
    *param_2 = *param_2 + 1;
  }
  return;
}



void getseq_constprop_1(undefined8 param_1,long *param_2)

{
  long lVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *param_2 * 8;
  if (*param_2 == param_2[1]) {
    lVar3 = xpalloc(param_2[2],param_2 + 1,1,0xffffffffffffffff,8);
    lVar1 = *param_2;
    param_2[2] = lVar3;
    lVar4 = lVar1 * 8;
    if (lVar1 < param_2[1]) {
      lVar4 = lVar1 * 8;
      memset((void *)(lVar3 + lVar4),0,(param_2[1] - lVar1) * 8);
    }
  }
  cVar2 = get_line(param_1,param_2[2] + lVar4,1);
  if (cVar2 != '\0') {
    *param_2 = *param_2 + 1;
  }
  return;
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
    goto LAB_0010111a;
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
    if (pcVar4 != (char *)0x0) goto LAB_001013dd;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC9);
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
LAB_001013dd:
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
LAB_0010111a:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



/* WARNING: Control flow encountered bad instruction data */

void add_file_name_constprop_0
               (undefined8 param_1,int *param_2,int *param_3,int *param_4,int *param_5,
               undefined4 *param_6)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  iVar1 = *param_4;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (iVar1 == 2) {
    iVar1 = *param_2;
    uVar4 = (&g_names)[iVar1 == 0];
    iVar8 = param_2[iVar1 == 0];
    if (iVar8 == 2) {
      param_3[1] = param_3[1] + -1;
      iVar8 = xstrtoimax(uVar4,0,10,&local_48,&_LC2);
      if (iVar8 == 1) {
        lVar7 = 0x7ffffffffffffffe;
      }
      else {
        if ((iVar8 != 0) || (local_48 < 1)) {
LAB_001017ba:
          string_to_join_field_part_0();
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        lVar7 = local_48 + -1;
      }
      lVar3 = lVar7;
      lVar2 = join_field_1;
      if ((-1 < join_field_2) && (lVar6 = join_field_2, join_field_2 != lVar7)) {
LAB_0010170a:
        uVar4 = dcgettext(0,"incompatible join fields %td, %td",5);
                    /* WARNING: Subroutine does not return */
        error(1,0,uVar4,lVar6,lVar7);
      }
    }
    else {
      lVar3 = join_field_2;
      lVar2 = join_field_1;
      if (iVar8 < 3) {
        if (iVar8 == 0) {
          uVar4 = quotearg_style(4,param_1);
          uVar5 = dcgettext(0,"extra operand %s",5);
                    /* WARNING: Subroutine does not return */
          error(0,0,uVar5,uVar4);
        }
        if (iVar8 == 1) {
          *param_3 = *param_3 + -1;
          iVar8 = xstrtoimax(uVar4,0,10,&local_48,&_LC2);
          if (iVar8 == 1) {
            lVar7 = 0x7ffffffffffffffe;
          }
          else {
            if ((iVar8 != 0) || (local_48 < 1)) goto LAB_001017ba;
            lVar7 = local_48 + -1;
          }
          lVar3 = join_field_2;
          lVar2 = lVar7;
          if ((join_field_1 != lVar7) && (lVar6 = join_field_1, -1 < join_field_1))
          goto LAB_0010170a;
        }
      }
      else if (iVar8 == 3) {
        add_field_list();
        lVar3 = join_field_2;
        lVar2 = join_field_1;
      }
    }
    join_field_1 = lVar2;
    join_field_2 = lVar3;
    if (iVar1 != 0) {
      *param_2 = param_2[1];
      g_names = DAT_00101898;
    }
    lVar3 = 8;
    lVar7 = 4;
    iVar8 = 2;
  }
  else {
    iVar8 = iVar1 + 1;
    lVar7 = (long)iVar1 * 4;
    lVar3 = (long)iVar1 << 3;
  }
  *(int *)((long)param_2 + lVar7) = *param_5;
  *(undefined8 *)((long)&g_names + lVar3) = param_1;
  *param_4 = iVar8;
  if (*param_5 == 3) {
    *param_6 = 3;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 main(int param_1,void **param_2)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  byte bVar7;
  char cVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int *piVar14;
  uint uVar15;
  ulong uVar16;
  char *pcVar17;
  void *__ptr;
  char *pcVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  char *pcVar21;
  char *pcVar22;
  long in_FS_OFFSET;
  bool bVar23;
  long local_d0;
  undefined1 *local_b8;
  undefined1 *local_b0;
  int local_94;
  void *local_90;
  undefined1 local_88 [16];
  long *local_78;
  undefined1 local_68 [16];
  long *local_58;
  undefined8 local_50;
  undefined1 local_48 [8];
  long local_40;
  
  pcVar18 = (char *)(long)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_94 = 0;
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  pcVar21 = "-a:e:i1:2:j:o:t:v:z";
  textdomain("coreutils");
  hard_LC_COLLATE = hard_locale(3);
  atexit((__func *)&close_stdout);
  atexit(free_spareline);
  print_pairables = '\x01';
  seen_unpairable = 0;
  check_input_order = 0;
  _issued_disorder_warning = 0;
  pcVar22 = empty_filler;
LAB_001026b8:
  empty_filler = pcVar22;
  iVar9 = getopt_long(param_1,param_2,"-a:e:i1:2:j:o:t:v:z");
  pcVar17 = _optarg;
  if (iVar9 != -1) {
    if (0x82 < iVar9) {
switchD_00102703_caseD_33:
      usage(1);
      goto LAB_0010345f;
    }
    if (iVar9 < 0x31) {
      if (iVar9 != -0x82) {
        if (iVar9 != 1) {
          if (iVar9 == -0x83) {
            uVar13 = proper_name_lite("Mike Haertel","Mike Haertel");
            version_etc(_stdout,&_LC9,"GNU coreutils",_Version,uVar13,0);
                    /* WARNING: Subroutine does not return */
            exit(0);
          }
          goto switchD_00102703_caseD_33;
        }
        add_file_name_constprop_0(_optarg,local_48,&local_50,&local_94);
        pcVar22 = empty_filler;
        goto LAB_001026b8;
      }
      usage(0);
    }
    else {
      pcVar22 = empty_filler;
      switch(iVar9) {
      case 0x31:
        uVar13 = string_to_join_field(_optarg);
        set_join_field(&join_field_1,uVar13);
        pcVar22 = empty_filler;
        goto LAB_001026b8;
      case 0x32:
        uVar13 = string_to_join_field(_optarg);
        set_join_field(&join_field_2,uVar13);
        pcVar22 = empty_filler;
        goto LAB_001026b8;
      default:
        goto switchD_00102703_caseD_33;
      case 0x65:
        goto switchD_00102703_caseD_65;
      case 0x69:
        ignore_case = 1;
        goto LAB_001026b8;
      case 0x6a:
        if ((((byte)(*_optarg - 0x31U) < 2) && (_optarg[1] == '\0')) &&
           (_optarg == (char *)((long)param_2[(long)_optind + -1] + 2))) {
          *(int *)(local_48 + (ulong)(*_optarg == '2') * 4 + -8) =
               *(int *)(local_48 + (ulong)(*_optarg == '2') * 4 + -8) + 1;
        }
        else {
          uVar13 = string_to_join_field();
          set_join_field(&join_field_1,uVar13);
          set_join_field(&join_field_2,join_field_1);
          pcVar22 = empty_filler;
        }
        goto LAB_001026b8;
      case 0x6f:
        iVar9 = strcmp(_optarg,"auto");
        if (iVar9 == 0) {
          autoformat = '\x01';
          pcVar22 = empty_filler;
        }
        else {
          add_field_list(pcVar17);
          pcVar22 = empty_filler;
        }
        goto LAB_001026b8;
      case 0x74:
        if (*_optarg == '\0') {
          uVar16 = 1;
          uVar15 = 0;
          iVar9 = 10;
          pcVar22 = output_separator;
        }
        else {
          iVar9 = strcmp(_optarg,"\\0");
          if (iVar9 == 0) {
            uVar16 = 1;
            uVar15 = 0;
            iVar9 = 0;
            output_separator = &_LC2;
            pcVar22 = output_separator;
          }
          else {
            uVar13 = mcel_scant(pcVar17,0);
            iVar9 = (int)uVar13;
            bVar7 = (byte)((ulong)uVar13 >> 0x28);
            uVar16 = (ulong)bVar7;
            uVar15 = (uint)((ulong)uVar13 >> 0x20);
            pcVar22 = _optarg;
            if (_optarg[bVar7] != '\0') {
              uVar13 = quote();
              pcVar18 = "multi-character tab %s";
              goto LAB_00103519;
            }
          }
        }
        output_separator = pcVar22;
        if ((DAT_0010183d != '\0') &&
           (iVar9 - tab != ((uint)DAT_0010183c - (uVar15 & 0xff)) * 0x4000)) {
          pcVar18 = "incompatible tabs";
          goto LAB_00103540;
        }
        DAT_0010183d = (char)uVar16;
        output_seplen = uVar16;
        tab = iVar9;
        DAT_0010183c = (byte)uVar15;
        pcVar22 = empty_filler;
        goto LAB_001026b8;
      case 0x76:
        print_pairables = '\0';
      case 0x61:
        iVar9 = xstrtol(_optarg,0,10,local_68);
        if ((iVar9 == 0) && (local_68._0_8_ - 1 < 2)) {
          pcVar22 = empty_filler;
          if (local_68._0_8_ == 1) {
            print_unpairables_1 = '\x01';
          }
          else {
            print_unpairables_2 = '\x01';
          }
          goto LAB_001026b8;
        }
        break;
      case 0x7a:
        eolchar = 0;
        goto LAB_001026b8;
      case 0x80:
        check_input_order = 1;
        goto LAB_001026b8;
      case 0x81:
        check_input_order = 2;
        goto LAB_001026b8;
      case 0x82:
        join_header_lines = '\x01';
        goto LAB_001026b8;
      }
    }
    uVar13 = quote(_optarg);
    pcVar18 = "invalid file number: %s";
LAB_00103519:
    uVar12 = dcgettext(0,pcVar18,5);
                    /* WARNING: Subroutine does not return */
    error(1,0,uVar12,uVar13);
  }
  if (_optind < param_1) {
    do {
      lVar10 = (long)_optind;
      _optind = _optind + 1;
      add_file_name_constprop_0(param_2[lVar10],local_48,&local_50,&local_94);
    } while (_optind < param_1);
  }
  if (local_94 != 2) {
    if (local_94 != 0) {
      uVar13 = quote(param_2[(long)(pcVar18 + -1)]);
      uVar12 = dcgettext(0,"missing operand after %s",5);
                    /* WARNING: Subroutine does not return */
      error(0,0,uVar12,uVar13);
    }
    uVar13 = dcgettext(0,"missing operand",5);
                    /* WARNING: Subroutine does not return */
    error(0,0,uVar13);
  }
  if ((int)local_50 != 0) {
    set_join_field(&join_field_1,0);
    set_join_field(&join_field_2,0);
  }
  if (local_50._4_4_ != 0) {
    set_join_field(&join_field_1,1);
    set_join_field(&join_field_2,1);
  }
  pcVar18 = g_names;
  if (join_field_1 < 0) {
    join_field_1 = 0;
  }
  if (join_field_2 < 0) {
    join_field_2 = 0;
  }
  iVar9 = strcmp(g_names,"-");
  pcVar21 = _stdin;
  if (iVar9 != 0) {
    pcVar21 = (char *)fopen_safer(pcVar18,&_LC51);
  }
  pcVar22 = DAT_00101898;
  pcVar17 = g_names;
  if (pcVar21 == (char *)0x0) goto LAB_0010355f;
  iVar9 = strcmp(DAT_00101898,"-");
  pcVar18 = _stdin;
  if (iVar9 != 0) {
    pcVar18 = (char *)fopen_safer(pcVar22,&_LC51);
  }
  pcVar17 = DAT_00101898;
  if (pcVar18 == (char *)0x0) goto LAB_0010355f;
  if (pcVar21 == pcVar18) {
    uVar13 = dcgettext(0,"both files cannot be standard input",5);
    piVar14 = __errno_location();
                    /* WARNING: Subroutine does not return */
    error(1,*piVar14,uVar13);
  }
  fadvise(pcVar21,2);
  fadvise(pcVar18,2);
  local_b0 = local_88;
  local_78 = (long *)0x0;
  local_88 = (undefined1  [16])0x0;
  getseq_constprop_1(pcVar21,local_b0);
  local_b8 = local_68;
  local_58 = (long *)0x0;
  local_68 = (undefined1  [16])0x0;
  getseq_constprop_0(pcVar18,local_b8);
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
LAB_00102bc5:
    if (local_88._0_8_ == 0) goto LAB_00102f73;
    lVar10 = local_88._0_8_;
    while (local_68._0_8_ != 0) {
      iVar9 = keycmp(*local_78,*local_58,join_field_1);
      if (iVar9 < 0) {
        if (print_unpairables_1 != '\0') {
          prjoin(*local_78,uni_blank);
        }
        bVar23 = local_88._8_8_ == 0;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = local_88._8_8_;
        local_88 = auVar6 << 0x40;
        if (bVar23) {
          local_78 = (long *)xpalloc(local_78,local_88 + 8,1,0xffffffffffffffff,8);
          lVar10 = local_88._0_8_;
          if ((long)local_88._0_8_ < (long)local_88._8_8_) {
            memset(local_78 + local_88._0_8_,0,(local_88._8_8_ - local_88._0_8_) * 8);
            lVar10 = local_88._0_8_;
          }
        }
        else {
          lVar10 = 0;
        }
        cVar8 = get_line(pcVar21,local_78 + lVar10,1);
        if (cVar8 != '\0') {
          local_88._0_8_ = local_88._0_8_ + 1;
        }
LAB_00102c2f:
        seen_unpairable = 1;
      }
      else {
        if (iVar9 != 0) {
          if (print_unpairables_2 != '\0') {
            prjoin(uni_blank,*local_58);
          }
          uVar13 = local_68._8_8_;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = local_68._8_8_;
          local_68 = auVar5 << 0x40;
          if (uVar13 == 0) {
            local_58 = (long *)xpalloc(local_58,local_68 + 8,1,0xffffffffffffffff,8);
            lVar10 = local_68._0_8_;
            if ((long)local_68._0_8_ < (long)local_68._8_8_) {
              memset(local_58 + local_68._0_8_,0,(local_68._8_8_ - local_68._0_8_) * 8);
              lVar10 = local_68._0_8_;
            }
          }
          else {
            lVar10 = 0;
          }
          cVar8 = get_line(pcVar18,local_58 + lVar10,2);
          if (cVar8 != '\0') {
            local_68._0_8_ = local_68._0_8_ + 1;
          }
          goto LAB_00102c2f;
        }
        do {
          lVar10 = local_88._0_8_ * 8;
          plVar11 = local_78;
          if (local_88._0_8_ == local_88._8_8_) {
            plVar11 = (long *)xpalloc(local_78,local_88 + 8,1,0xffffffffffffffff,8);
            lVar10 = local_88._0_8_ * 8;
            local_78 = plVar11;
            if ((long)local_88._0_8_ < (long)local_88._8_8_) {
              lVar10 = local_88._0_8_ * 8;
              memset(plVar11 + local_88._0_8_,0,(local_88._8_8_ - local_88._0_8_) * 8);
            }
          }
          cVar8 = get_line(pcVar21,(long)plVar11 + lVar10,1);
          uVar13 = local_88._0_8_;
          if (cVar8 == '\0') {
            local_88._0_8_ = local_88._0_8_ + 1;
            bVar23 = true;
            goto LAB_00102cca;
          }
          local_88._0_8_ = local_88._0_8_ + 1;
          iVar9 = keycmp(local_78[uVar13],*local_58,join_field_1);
        } while (iVar9 == 0);
        bVar23 = false;
LAB_00102cca:
        do {
          lVar10 = local_68._0_8_ * 8;
          plVar11 = local_58;
          if (local_68._0_8_ == local_68._8_8_) {
            plVar11 = (long *)xpalloc(local_58,local_68 + 8,1,0xffffffffffffffff,8);
            lVar10 = local_68._0_8_ * 8;
            local_58 = plVar11;
            if ((long)local_68._0_8_ < (long)local_68._8_8_) {
              lVar10 = local_68._0_8_ * 8;
              memset(plVar11 + local_68._0_8_,0,(local_68._8_8_ - local_68._0_8_) * 8);
            }
          }
          cVar8 = get_line(pcVar18,(long)plVar11 + lVar10,2);
          if (cVar8 == '\0') {
            local_68._0_8_ = local_68._0_8_ + 1;
            bVar1 = true;
            goto LAB_00102d0f;
          }
          plVar11 = local_58 + local_68._0_8_;
          local_68._0_8_ = local_68._0_8_ + 1;
          iVar9 = keycmp(*local_78,*plVar11,join_field_1);
        } while (iVar9 == 0);
        bVar1 = false;
LAB_00102d0f:
        if ((print_pairables != '\0') && (1 < (long)local_88._0_8_)) {
          local_d0 = 0;
          do {
            if ((long)local_68._0_8_ < 2) break;
            lVar10 = 0;
            do {
              plVar11 = local_58 + lVar10;
              lVar10 = lVar10 + 1;
              prjoin(local_78[local_d0],*plVar11);
            } while (lVar10 < local_68._0_8_ + -1);
            local_d0 = local_d0 + 1;
          } while (local_d0 < local_88._0_8_ + -1);
        }
        if (!bVar23) {
          lVar10 = *local_78;
          *local_78 = local_78[local_88._0_8_ + -1];
          local_78[local_88._0_8_ + -1] = lVar10;
        }
        local_88._1_7_ = 0;
        local_88[0] = !bVar23;
        if (bVar1) {
          auVar2._8_8_ = 0;
          auVar2._0_8_ = local_68._8_8_;
          local_68 = auVar2 << 0x40;
        }
        else {
          lVar10 = *local_58;
          *local_58 = local_58[local_68._0_8_ + -1];
          local_58[local_68._0_8_ + -1] = lVar10;
          local_68._0_8_ = 1;
        }
      }
      lVar10 = local_88._0_8_;
      if (local_88._0_8_ == 0) goto LAB_00102f73;
    }
    if (check_input_order != 2) goto LAB_00102f89;
    bVar7 = 0;
LAB_00102fa4:
    local_90 = (void *)0x0;
    if ((print_unpairables_1 == '\0' && bVar7 == 0) || (lVar10 == 0)) goto LAB_00102fbb;
    if (print_unpairables_1 != '\0') {
      prjoin(*local_78,uni_blank);
    }
    if (local_68._0_8_ != 0) {
      seen_unpairable = 1;
    }
LAB_001033c0:
    do {
      cVar8 = get_line(pcVar21,&local_90,1);
      if (cVar8 == '\0') break;
      if (print_unpairables_1 == '\0') {
        cVar8 = issued_disorder_warning;
      }
      else {
        prjoin(local_90,uni_blank);
        cVar8 = print_unpairables_1;
        if (issued_disorder_warning == '\0') goto LAB_001033c0;
      }
    } while (cVar8 != '\0');
    if (((bVar7 != 0) || (print_unpairables_2 != '\0')) && (local_68._0_8_ != 0)) {
LAB_00103251:
      param_2 = &local_90;
      if (print_unpairables_2 != '\0') {
        prjoin(uni_blank,*local_58);
      }
      if (local_88._0_8_ != 0) {
LAB_0010345f:
        seen_unpairable = 1;
      }
LAB_00103270:
      do {
        cVar8 = get_line(pcVar18,param_2,2);
        if (cVar8 == '\0') break;
        if (print_unpairables_2 == '\0') {
          cVar8 = DAT_00101879;
        }
        else {
          prjoin(uni_blank,local_90);
          cVar8 = print_unpairables_2;
          if (DAT_00101879 == '\0') goto LAB_00103270;
        }
      } while (cVar8 != '\0');
    }
    __ptr = local_90;
    if (local_90 != (void *)0x0) {
      free(*(void **)((long)local_90 + 0x28));
      free(*(void **)((long)__ptr + 0x10));
    }
  }
  else {
    if (local_88._0_8_ != 0) {
      puVar19 = uni_blank;
      puVar20 = (undefined1 *)*local_78;
      if (local_68._0_8_ != 0) goto LAB_00103472;
LAB_00103365:
      prjoin(puVar20,puVar19);
      prevline = (undefined1  [16])0x0;
      if (local_88._0_8_ != 0) {
        auVar4._8_8_ = 0;
        auVar4._0_8_ = local_88._8_8_;
        local_88 = auVar4 << 0x40;
        getseq_constprop_1(pcVar21,local_b0);
      }
      if (local_68._0_8_ != 0) {
        auVar3._8_8_ = 0;
        auVar3._0_8_ = local_68._8_8_;
        local_68 = auVar3 << 0x40;
        getseq_constprop_0(pcVar18,local_b8);
      }
      goto LAB_00102bc5;
    }
    if (local_68._0_8_ != 0) {
      puVar20 = uni_blank;
LAB_00103472:
      puVar19 = (undefined1 *)*local_58;
      goto LAB_00103365;
    }
LAB_00102f73:
    lVar10 = 0;
    bVar7 = 0;
    if (check_input_order != 2) {
LAB_00102f89:
      bVar7 = 1;
      if (issued_disorder_warning != '\0') {
        bVar7 = DAT_00101879 ^ 1;
      }
      goto LAB_00102fa4;
    }
LAB_00102fbb:
    local_90 = (void *)0x0;
    if ((print_unpairables_2 != '\0') || (__ptr = (void *)0x0, bVar7 != 0)) {
      if (local_68._0_8_ != 0) goto LAB_00103251;
      __ptr = (void *)0x0;
    }
  }
  free(__ptr);
  delseq(local_b0);
  delseq(local_b8);
  iVar9 = rpl_fclose(pcVar21);
  pcVar17 = g_names;
  if ((iVar9 != 0) || (iVar9 = rpl_fclose(pcVar18), pcVar17 = DAT_00101898, iVar9 != 0)) {
LAB_0010355f:
    uVar13 = quotearg_n_style_colon(0,3,pcVar17);
    piVar14 = __errno_location();
                    /* WARNING: Subroutine does not return */
    error(1,*piVar14,&_LC52,uVar13);
  }
  if ((issued_disorder_warning == '\0') && (DAT_00101879 == '\0')) {
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return 0;
  }
  pcVar18 = "input is not in sorted order";
  goto LAB_00103540;
switchD_00102703_caseD_65:
  pcVar22 = _optarg;
  if ((empty_filler != (char *)0x0) && (iVar9 = strcmp(empty_filler,_optarg), iVar9 != 0)) {
    pcVar18 = "conflicting empty-field replacement strings";
LAB_00103540:
    uVar13 = dcgettext(0,pcVar18,5);
                    /* WARNING: Subroutine does not return */
    error(1,0,uVar13);
  }
  goto LAB_001026b8;
}


