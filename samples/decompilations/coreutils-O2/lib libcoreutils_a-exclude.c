
void call_addfn(void)

{
  undefined8 *in_RCX;
  
                    /* WARNING: Could not recover jumptable at 0x00100004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*in_RCX)();
  return;
}



bool string_compare_ci(void)

{
  int iVar1;
  
  iVar1 = mbscasecmp();
  return iVar1 == 0;
}



bool string_compare(char *param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = strcmp(param_1,param_2);
  return iVar1 == 0;
}



void string_hasher(void)

{
  hash_string();
  return;
}



int fnmatch_no_wildcards(char *param_1,char *param_2,uint param_3)

{
  int iVar1;
  size_t __n;
  char *__ptr;
  char *pcVar2;
  
  if ((param_3 & 8) == 0) {
    if ((param_3 & 0x10) != 0) {
      iVar1 = mbscasecmp();
      return iVar1;
    }
    iVar1 = strcmp(param_1,param_2);
    return iVar1;
  }
  if ((param_3 & 0x10) == 0) {
    __n = strlen(param_1);
    iVar1 = strncmp(param_1,param_2,__n);
    if (iVar1 == 0) {
      iVar1 = 0;
      if (param_2[__n] != 0x2f) {
        iVar1 = (int)param_2[__n];
      }
    }
    return iVar1;
  }
  __ptr = (char *)xstrdup(param_2);
  pcVar2 = __ptr;
  while( true ) {
    pcVar2 = strchr(pcVar2,0x2f);
    if (pcVar2 == (char *)0x0) break;
    *pcVar2 = '\0';
    iVar1 = mbscasecmp(param_1,__ptr);
    if (iVar1 < 1) goto LAB_00100106;
    *pcVar2 = '/';
    pcVar2 = pcVar2 + 1;
  }
  iVar1 = mbscasecmp(param_1,__ptr);
LAB_00100106:
  free(__ptr);
  return iVar1;
}



/* WARNING: Type propagation algorithm not settling */

ulong string_hasher_ci(byte *param_1,ulong param_2)

{
  byte bVar1;
  wint_t wVar2;
  ulong uVar3;
  byte *pbVar4;
  long lVar5;
  uint uVar6;
  long in_FS_OFFSET;
  wint_t local_4c [3];
  long local_40;
  
  bVar1 = *param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (bVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    do {
      uVar6 = (uint)bVar1;
      if ((char)bVar1 < '\0') {
        pbVar4 = param_1 + (2 - (ulong)(param_1[1] == 0));
        local_4c[1] = 0;
        lVar5 = mbrtoc32(local_4c,param_1,
                         pbVar4 + (*pbVar4 != 0) +
                         ((ulong)(pbVar4[*pbVar4 != 0] != 0) - (long)param_1),local_4c + 1);
        if (lVar5 < 0) {
          lVar5 = 1;
          wVar2 = 0;
        }
        else {
          uVar6 = 0;
          wVar2 = local_4c[0];
        }
      }
      else {
        lVar5 = 1;
        uVar6 = 0;
        wVar2 = (int)(char)bVar1;
      }
      wVar2 = towlower(wVar2);
      param_1 = param_1 + lVar5;
      bVar1 = *param_1;
      uVar3 = (ulong)(wVar2 - uVar6) + uVar3 * 0x1f;
    } while (bVar1 != 0);
    uVar3 = uVar3 % param_2;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void exclude_add_pattern_buffer(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)xmalloc(0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 **)(param_1 + 8) = puVar2;
  *puVar2 = uVar1;
  puVar2[1] = param_2;
  return;
}



undefined8 fnmatch_pattern_has_wildcards(char *param_1,uint param_2)

{
  char *pcVar1;
  char cVar2;
  ulong uVar3;
  char *pcVar4;
  
  cVar2 = *param_1;
  pcVar1 = param_1 + 1;
  if ('@' < cVar2) goto LAB_001002ef;
  do {
    pcVar4 = pcVar1;
    if (cVar2 < '!') {
      if (cVar2 == '\0') {
        return 0;
      }
    }
    else {
      uVar3 = 1L << (cVar2 - 0x21U & 0x3f);
      if ((uVar3 & 0x80000401) == 0) {
        if ((uVar3 & 0x2180) != 0) goto LAB_00100301;
        if ((uVar3 & 0x40000200) != 0) {
          return 1;
        }
      }
      else if (((param_2 & 0x20) != 0) && (param_1[1] == '(')) {
        return 1;
      }
    }
    while( true ) {
      cVar2 = *pcVar4;
      pcVar1 = pcVar4 + 1;
      param_1 = pcVar4;
      if (cVar2 < 'A') break;
LAB_001002ef:
      pcVar4 = pcVar1;
      if (cVar2 == '\\') {
        if (((param_2 & 0x8000000) == 0) && ((param_2 & 2) == 0)) {
          pcVar4 = pcVar1 + (param_1[1] != '\0');
        }
      }
      else if (cVar2 < ']') {
        if (cVar2 == '[') {
          return 1;
        }
      }
      else if ((cVar2 + 0x85U & 0xfd) == 0) {
LAB_00100301:
        pcVar4 = pcVar1;
        if ((param_2 & 0x8000000) != 0) {
          return 1;
        }
      }
    }
  } while( true );
}



void new_exclude(void)

{
  xzalloc(0x10);
  return;
}



void free_exclude(undefined8 *param_1)

{
  uint *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *__ptr;
  void *__ptr_00;
  long lVar4;
  long *__ptr_01;
  
  plVar2 = (long *)*param_1;
  while (__ptr_01 = plVar2, plVar2 != (long *)0x0) {
    while( true ) {
      plVar2 = (long *)*__ptr_01;
      if ((int)__ptr_01[1] == 0) break;
      if ((int)__ptr_01[1] == 1) {
        __ptr_00 = (void *)__ptr_01[2];
        if (0 < __ptr_01[4]) {
          lVar4 = 0;
          do {
            while (puVar1 = (uint *)((long)__ptr_00 + lVar4 * 0x48), (*puVar1 & 0x8000000) == 0) {
              lVar4 = lVar4 + 1;
              if (__ptr_01[4] <= lVar4) goto LAB_00100401;
            }
            lVar4 = lVar4 + 1;
            regfree((regex_t *)(puVar1 + 2));
            __ptr_00 = (void *)__ptr_01[2];
          } while (lVar4 < __ptr_01[4]);
        }
LAB_00100401:
        free(__ptr_00);
      }
      free(__ptr_01);
      __ptr_01 = plVar2;
      if (plVar2 == (long *)0x0) goto LAB_00100416;
    }
    hash_free(__ptr_01[2]);
    free(__ptr_01);
  }
LAB_00100416:
  __ptr = (undefined8 *)param_1[1];
  while (__ptr != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*__ptr;
    free((void *)__ptr[1]);
    free(__ptr);
    __ptr = puVar3;
  }
  free(param_1);
  return;
}



ulong exclude_fnmatch(undefined8 param_1,char *param_2,uint param_3,undefined8 param_4)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  char cVar5;
  code *pcVar6;
  
  pcVar6 = fnmatch_no_wildcards;
  if ((param_3 & 0x10000000) != 0) {
    pcVar6 = fnmatch;
  }
  iVar3 = (*pcVar6)(param_1,param_2,param_3);
  uVar4 = CONCAT71((int7)((ulong)param_4 >> 8),iVar3 == 0);
  if (((param_3 & 0x40000000) == 0) && (cVar5 = *param_2, cVar5 != '\0')) {
    do {
      if (iVar3 == 0) {
        return 1;
      }
      while( true ) {
        cVar2 = param_2[1];
        param_2 = param_2 + 1;
        if (cVar5 == '/') break;
        cVar5 = cVar2;
        if (cVar2 == '\0') {
          uVar4 = 0;
          goto LAB_00100503;
        }
      }
      while (cVar2 == '/') {
        pcVar1 = param_2 + 1;
        param_2 = param_2 + 1;
        cVar2 = *pcVar1;
      }
      iVar3 = (*pcVar6)(param_1,param_2,param_3);
      cVar5 = *param_2;
    } while (cVar5 != '\0');
    uVar4 = CONCAT71((int7)(uVar4 >> 8),iVar3 == 0);
  }
LAB_00100503:
  return uVar4 & 0xffffffff;
}



uint excluded_file_name(long *param_1,char *param_2)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  char *pcVar6;
  char *pcVar7;
  size_t sVar8;
  char *__dest;
  uint uVar9;
  regex_t *__preg;
  
  param_1 = (long *)*param_1;
  if (param_1 == (long *)0x0) {
    return 0;
  }
  iVar4 = (int)param_1[1];
  __dest = (char *)0x0;
  while( true ) {
    if (iVar4 == 0) {
      if (__dest == (char *)0x0) {
        sVar8 = strlen(param_2);
        __dest = (char *)xmalloc(sVar8 + 1);
      }
      uVar9 = *(uint *)((long)param_1 + 0xc);
      lVar1 = param_1[2];
      pcVar7 = param_2;
      while( true ) {
        strcpy(__dest,pcVar7);
        lVar5 = hash_lookup(lVar1,__dest);
        while( true ) {
          if (lVar5 != 0) goto LAB_001005cd;
          if (((uVar9 & 8) == 0) || (pcVar6 = strrchr(__dest,0x2f), pcVar6 == (char *)0x0)) break;
          *pcVar6 = '\0';
          lVar5 = hash_lookup(lVar1,__dest);
        }
        if (((uVar9 & 0x40000000) != 0) || (pcVar7 = strchr(pcVar7,0x2f), pcVar7 == (char *)0x0))
        break;
        pcVar7 = pcVar7 + 1;
      }
    }
    else {
      lVar1 = param_1[4];
      if (0 < lVar1) {
        __preg = (regex_t *)(param_1[2] + 8);
        lVar5 = 0;
        do {
          if ((*(uint *)&__preg[-1].field_0x38 & 0x8000000) == 0) {
            cVar3 = exclude_fnmatch(__preg->buffer,param_2);
            if (cVar3 != '\0') goto LAB_001005cd;
          }
          else {
            iVar4 = regexec(__preg,param_2,0,(regmatch_t *)0x0,0);
            if (iVar4 == 0) goto LAB_001005cd;
          }
          lVar5 = lVar5 + 1;
          __preg = (regex_t *)&__preg[1].allocated;
        } while (lVar1 != lVar5);
      }
    }
    plVar2 = (long *)*param_1;
    if (plVar2 == (long *)0x0) break;
    iVar4 = *(int *)(plVar2 + 1);
    param_1 = plVar2;
  }
  uVar9 = 1;
LAB_001005cf:
  free(__dest);
  return (*(uint *)((long)param_1 + 0xc) >> 0x1d ^ 1) & 1 ^ uVar9;
LAB_001005cd:
  uVar9 = 0;
  goto LAB_001005cf;
}



void add_exclude(long *param_1,char *param_2,uint param_3)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  size_t sVar6;
  char *pcVar7;
  long lVar8;
  char *__ptr;
  ulong uVar9;
  code *pcVar10;
  code *pcVar11;
  char *pcVar12;
  uint __cflags;
  
  plVar4 = (long *)*param_1;
  if (((param_3 & 0x18000000) == 0) ||
     (cVar2 = fnmatch_pattern_has_wildcards(param_2,param_3), cVar2 == '\0')) {
    if ((plVar4 == (long *)0x0) ||
       ((*(int *)(plVar4 + 1) != 0 ||
        (((*(uint *)((long)plVar4 + 0xc) ^ param_3) & 0x60000018) != 0)))) {
      plVar4 = (long *)xmalloc(0x28);
      pcVar10 = string_compare;
      pcVar11 = string_hasher;
      *(undefined4 *)(plVar4 + 1) = 0;
      *(uint *)((long)plVar4 + 0xc) = param_3;
      if ((param_3 & 0x10) != 0) {
        pcVar10 = string_compare_ci;
        pcVar11 = string_hasher_ci;
      }
      lVar8 = hash_initialize(0,0,pcVar11,pcVar10,free);
      plVar4[2] = lVar8;
      lVar8 = *param_1;
      *param_1 = (long)plVar4;
      *plVar4 = lVar8;
    }
    __ptr = (char *)xstrdup(param_2);
    pcVar7 = __ptr;
    pcVar12 = __ptr;
    if ((param_3 & 0x10000002) == 0x10000000) {
      do {
        cVar2 = *pcVar12;
        if (cVar2 == '\\') {
          pcVar12 = pcVar12 + (pcVar12[1] != '\0');
          cVar2 = *pcVar12;
        }
        *pcVar7 = cVar2;
        pcVar7 = pcVar7 + 1;
        pcVar12 = pcVar12 + 1;
      } while (cVar2 != '\0');
    }
    pcVar7 = (char *)hash_insert(*(undefined8 *)(*param_1 + 0x10),__ptr);
    if (__ptr == pcVar7) {
      return;
    }
    free(__ptr);
    return;
  }
  if (((plVar4 == (long *)0x0) || (*(int *)(plVar4 + 1) != 1)) ||
     (((*(uint *)((long)plVar4 + 0xc) ^ param_3) & 0x20000000) != 0)) {
    plVar4 = (long *)xmalloc(0x28);
    lVar5 = 0;
    *(undefined4 *)(plVar4 + 1) = 1;
    *(uint *)((long)plVar4 + 0xc) = param_3;
    plVar4[2] = 0;
    *(undefined1 (*) [16])(plVar4 + 3) = (undefined1  [16])0x0;
    lVar8 = *param_1;
    *param_1 = (long)plVar4;
    *plVar4 = lVar8;
LAB_00100761:
    lVar5 = xpalloc(lVar5,plVar4 + 3,1,0xffffffffffffffff,0x48);
    lVar8 = plVar4[4];
    plVar4[2] = lVar5;
  }
  else {
    lVar8 = plVar4[4];
    lVar5 = plVar4[2];
    if (lVar8 == plVar4[3]) goto LAB_00100761;
  }
  plVar4[4] = lVar8 + 1;
  puVar1 = (uint *)(lVar5 + lVar8 * 0x48);
  *puVar1 = param_3;
  if ((param_3 & 0x8000000) == 0) {
    if ((param_3 & 0x4000000) != 0) {
      param_2 = (char *)xstrdup(param_2);
      plVar4 = (long *)xmalloc(0x10);
      lVar8 = param_1[1];
      param_1[1] = (long)plVar4;
      *plVar4 = lVar8;
      plVar4[1] = (long)param_2;
    }
    *(char **)(puVar1 + 2) = param_2;
    return;
  }
  __cflags = (int)param_3 >> 3 & 2U | 9;
  if ((param_3 & 8) == 0) {
    iVar3 = regcomp((regex_t *)(puVar1 + 2),param_2,__cflags);
LAB_00100849:
    if (iVar3 == 0) {
      return;
    }
  }
  else {
    sVar6 = strlen(param_2);
    if (sVar6 == 0) goto LAB_00100859;
    do {
      if (param_2[sVar6 - 1] != '/') {
        uVar9 = sVar6 + 7;
        pcVar7 = (char *)ximalloc(uVar9);
        __memcpy_chk(pcVar7,param_2,sVar6,uVar9);
        if (uVar9 < sVar6) {
          uVar9 = sVar6;
        }
        __memcpy_chk(pcVar7 + sVar6,"(/.*)?",7,uVar9 - sVar6);
        iVar3 = regcomp((regex_t *)(puVar1 + 2),pcVar7,__cflags);
        free(pcVar7);
        goto LAB_00100849;
      }
      sVar6 = sVar6 - 1;
    } while (sVar6 != 0);
  }
  lVar8 = plVar4[4] + -1;
LAB_00100859:
  plVar4[4] = lVar8;
  return;
}



int add_exclude_fp(code *param_1,long param_2,_IO_FILE *param_3,undefined4 param_4,byte param_5,
                  undefined8 param_6)

{
  byte bVar1;
  char *pcVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  uint *puVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  ushort **ppuVar9;
  long lVar10;
  byte *pbVar11;
  char cVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  long in_FS_OFFSET;
  uint local_58;
  int local_54;
  long local_48;
  long local_40;
  
  lVar5 = 0;
  lVar10 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  do {
    pcVar2 = param_3->_IO_read_ptr;
    if (pcVar2 < param_3->_IO_read_end) {
      param_3->_IO_read_ptr = pcVar2 + 1;
      cVar12 = *pcVar2;
    }
    else {
      iVar4 = __uflow(param_3);
      cVar12 = (char)iVar4;
      if (iVar4 == -1) {
        local_54 = 0;
        local_58 = param_3->_flags & 0x20;
        if (local_58 != 0) {
          puVar6 = (uint *)__errno_location();
          local_58 = *puVar6;
          local_54 = -(uint)(local_58 != 0);
        }
        pbVar7 = (byte *)xirealloc(lVar5,lVar10 + 1);
        pbVar7[lVar10] = param_5;
        if (lVar10 == 0) {
          puVar8 = (undefined8 *)xmalloc(0x10);
          uVar3 = *(undefined8 *)(param_2 + 8);
          *(undefined8 **)(param_2 + 8) = puVar8;
          *puVar8 = uVar3;
          puVar8[1] = pbVar7;
        }
        else {
          bVar1 = pbVar7[lVar10 + -1];
          puVar8 = (undefined8 *)xmalloc(0x10);
          uVar3 = *(undefined8 *)(param_2 + 8);
          *(undefined8 **)(param_2 + 8) = puVar8;
          *puVar8 = uVar3;
          puVar8[1] = pbVar7;
          if (pbVar7 < pbVar7 + lVar10 + (ulong)(bVar1 != param_5)) {
            pbVar13 = pbVar7;
            pbVar15 = pbVar7;
            do {
              pbVar11 = pbVar13 + 1;
              pbVar14 = pbVar15;
              if (*pbVar13 == param_5) {
                ppuVar9 = __ctype_b_loc();
                pbVar14 = pbVar11;
                if (((*ppuVar9)[param_5] & 0x2000) == 0) {
LAB_00100bfa:
                  *pbVar13 = 0;
                  (*param_1)(param_2,pbVar15,param_4,param_6);
                }
                else {
                  for (; pbVar15 != pbVar13; pbVar13 = pbVar13 + -1) {
                    if ((*(byte *)((long)*ppuVar9 + (ulong)pbVar13[-1] * 2 + 1) & 0x20) == 0)
                    goto LAB_00100bfa;
                  }
                }
              }
              pbVar13 = pbVar11;
              pbVar15 = pbVar14;
            } while (pbVar7 + lVar10 + (ulong)(bVar1 != param_5) != pbVar11);
          }
        }
        puVar6 = (uint *)__errno_location();
        *puVar6 = local_58;
        if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return local_54;
      }
    }
    if (local_48 == lVar10) {
      lVar5 = xpalloc(lVar5,&local_48,1,0xffffffffffffffff,1);
    }
    *(char *)(lVar5 + lVar10) = cVar12;
    lVar10 = lVar10 + 1;
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
add_exclude_file(undefined8 param_1,undefined8 param_2,char *param_3,ulong param_4,char param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  undefined8 local_30 [2];
  
  local_30[0] = param_1;
  if ((*param_3 == '-') && (param_3[1] == '\0')) {
    uVar2 = add_exclude_fp(0x100000,param_2,_stdin,param_4,(int)param_5,local_30);
    return uVar2;
  }
  lVar4 = rpl_fopen(param_3,&_LC0);
  if (lVar4 != 0) {
    uVar2 = add_exclude_fp(0x100000,param_2,lVar4,param_4 & 0xffffffff,(int)param_5,local_30);
    piVar5 = __errno_location();
    iVar1 = *piVar5;
    iVar3 = rpl_fclose(lVar4);
    if (-1 < iVar3) {
      *piVar5 = iVar1;
      return uVar2;
    }
  }
  return 0xffffffff;
}


