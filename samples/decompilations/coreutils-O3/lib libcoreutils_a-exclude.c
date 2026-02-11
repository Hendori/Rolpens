
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
    if (iVar1 < 1) goto LAB_001000f6;
    *pcVar2 = '/';
    pcVar2 = pcVar2 + 1;
  }
  iVar1 = mbscasecmp(param_1,__ptr);
LAB_001000f6:
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
  if ('@' < cVar2) goto LAB_001002df;
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
        if ((uVar3 & 0x2180) != 0) goto LAB_001002f1;
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
LAB_001002df:
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
LAB_001002f1:
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
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  void *__ptr;
  long lVar5;
  
  puVar3 = (undefined8 *)*param_1;
  do {
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)param_1[1];
      while (puVar3 != (undefined8 *)0x0) {
        puVar2 = (undefined8 *)*puVar3;
        free((void *)puVar3[1]);
        free(puVar3);
        puVar3 = puVar2;
      }
      free(param_1);
      return;
    }
    puVar2 = (undefined8 *)*puVar3;
    if (*(int *)(puVar3 + 1) == 0) {
      hash_free(puVar3[2]);
    }
    else if (*(int *)(puVar3 + 1) == 1) {
      lVar4 = puVar3[4];
      __ptr = (void *)puVar3[2];
      if (0 < lVar4) {
        lVar5 = 0;
        do {
          while (puVar1 = (uint *)((long)__ptr + lVar5 * 0x48), (*puVar1 & 0x8000000) != 0) {
            lVar5 = lVar5 + 1;
            regfree((regex_t *)(puVar1 + 2));
            lVar4 = puVar3[4];
            __ptr = (void *)puVar3[2];
            if (lVar4 <= lVar5) goto LAB_001003d9;
          }
          lVar5 = lVar5 + 1;
        } while (lVar5 < lVar4);
      }
LAB_001003d9:
      free(__ptr);
    }
    free(puVar3);
    puVar3 = puVar2;
  } while( true );
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
          goto LAB_001004f3;
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
LAB_001004f3:
  return uVar4 & 0xffffffff;
}



uint excluded_file_name(long *param_1,char *param_2)

{
  long lVar1;
  uchar *puVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  char *pcVar6;
  char *pcVar7;
  size_t sVar8;
  char *__dest;
  char cVar9;
  char cVar10;
  code *pcVar11;
  long *plVar12;
  uint uVar13;
  regex_t *__preg;
  bool bVar14;
  long *local_40;
  
  if ((long *)*param_1 == (long *)0x0) {
    return 0;
  }
  __dest = (char *)0x0;
  plVar3 = (long *)*param_1;
  do {
    local_40 = plVar3;
    if ((int)local_40[1] == 0) {
      plVar12 = local_40;
      if (__dest == (char *)0x0) {
        sVar8 = strlen(param_2);
        __dest = (char *)xmalloc(sVar8 + 1);
      }
      do {
        lVar1 = plVar12[2];
        uVar13 = *(uint *)((long)plVar12 + 0xc) & 0x40000000;
        pcVar7 = param_2;
        if ((*(uint *)((long)plVar12 + 0xc) & 8) == 0) {
          while( true ) {
            strcpy(__dest,pcVar7);
            lVar5 = hash_lookup(lVar1,__dest);
            if (lVar5 != 0) goto LAB_001005c4;
            if ((uVar13 != 0) || (pcVar7 = strchr(pcVar7,0x2f), pcVar7 == (char *)0x0)) break;
            pcVar7 = pcVar7 + 1;
          }
        }
        else {
          while( true ) {
            strcpy(__dest,pcVar7);
            lVar5 = hash_lookup(lVar1,__dest);
            while( true ) {
              if (lVar5 != 0) goto LAB_001005c4;
              pcVar6 = strrchr(__dest,0x2f);
              if (pcVar6 == (char *)0x0) break;
              *pcVar6 = '\0';
              lVar5 = hash_lookup(lVar1,__dest);
            }
            if ((uVar13 != 0) || (pcVar7 = strchr(pcVar7,0x2f), pcVar7 == (char *)0x0)) break;
            pcVar7 = pcVar7 + 1;
          }
        }
        local_40 = (long *)*plVar12;
        if (local_40 == (long *)0x0) goto LAB_001007b0;
        plVar12 = local_40;
      } while ((int)local_40[1] == 0);
    }
    lVar1 = local_40[4];
    if (0 < lVar1) {
      __preg = (regex_t *)(local_40[2] + 8);
      lVar5 = 0;
LAB_001006cf:
      do {
        uVar13 = *(uint *)&__preg[-1].field_0x38;
        if ((uVar13 & 0x8000000) == 0) {
          puVar2 = __preg->buffer;
          pcVar11 = fnmatch_no_wildcards;
          if ((uVar13 & 0x10000000) != 0) {
            pcVar11 = fnmatch;
          }
          iVar4 = (*pcVar11)(puVar2,param_2,uVar13);
          bVar14 = iVar4 == 0;
          if (((uVar13 & 0x40000000) == 0) && (*param_2 != '\0')) {
            if (iVar4 != 0) {
              cVar9 = param_2[1];
              pcVar7 = param_2 + 1;
              if (*param_2 == '/') goto LAB_00100758;
              while (cVar10 = cVar9, cVar9 != '\0') {
                while( true ) {
                  pcVar7 = pcVar7 + 1;
                  cVar9 = *pcVar7;
                  if (cVar10 != '/') break;
LAB_00100758:
                  while (cVar9 == '/') {
                    pcVar6 = pcVar7 + 1;
                    pcVar7 = pcVar7 + 1;
                    cVar9 = *pcVar6;
                  }
                  iVar4 = (*pcVar11)(puVar2,pcVar7,uVar13);
                  cVar10 = *pcVar7;
                  if (cVar10 == '\0') {
                    bVar14 = iVar4 == 0;
                    goto LAB_00100788;
                  }
                  if (iVar4 == 0) goto LAB_00100776;
                }
              }
              goto LAB_001006bc;
            }
          }
          else {
LAB_00100788:
            if (!bVar14) {
              lVar5 = lVar5 + 1;
              __preg = (regex_t *)&__preg[1].allocated;
              if (lVar1 == lVar5) break;
              goto LAB_001006cf;
            }
          }
LAB_00100776:
          uVar13 = 0;
          goto LAB_001005cb;
        }
        iVar4 = regexec(__preg,param_2,0,(regmatch_t *)0x0,0);
        if (iVar4 == 0) goto LAB_00100776;
LAB_001006bc:
        lVar5 = lVar5 + 1;
        __preg = (regex_t *)&__preg[1].allocated;
      } while (lVar1 != lVar5);
    }
    plVar3 = (long *)*local_40;
    plVar12 = local_40;
  } while ((long *)*local_40 != (long *)0x0);
LAB_001007b0:
  local_40 = plVar12;
  uVar13 = 1;
LAB_001005cb:
  free(__dest);
  return (*(uint *)((long)local_40 + 0xc) >> 0x1d ^ 1) & 1 ^ uVar13;
LAB_001005c4:
  uVar13 = 0;
  local_40 = plVar12;
  goto LAB_001005cb;
}



void add_exclude(long *param_1,char *param_2,uint param_3)

{
  uint *puVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  size_t sVar7;
  char *pcVar8;
  long lVar9;
  char *__ptr;
  ulong uVar10;
  code *pcVar11;
  code *pcVar12;
  uint __cflags;
  char *pcVar13;
  
  plVar5 = (long *)*param_1;
  if (((param_3 & 0x18000000) == 0) ||
     (cVar3 = fnmatch_pattern_has_wildcards(param_2,param_3), cVar3 == '\0')) {
    if ((plVar5 == (long *)0x0) ||
       ((*(int *)(plVar5 + 1) != 0 ||
        (((*(uint *)((long)plVar5 + 0xc) ^ param_3) & 0x60000018) != 0)))) {
      plVar5 = (long *)xmalloc(0x28);
      pcVar11 = string_compare;
      pcVar12 = string_hasher;
      *(undefined4 *)(plVar5 + 1) = 0;
      *(uint *)((long)plVar5 + 0xc) = param_3;
      if ((param_3 & 0x10) != 0) {
        pcVar11 = string_compare_ci;
        pcVar12 = string_hasher_ci;
      }
      lVar9 = hash_initialize(0,0,pcVar12,pcVar11,free);
      plVar5[2] = lVar9;
      lVar9 = *param_1;
      *param_1 = (long)plVar5;
      *plVar5 = lVar9;
    }
    __ptr = (char *)xstrdup(param_2);
    pcVar8 = __ptr;
    pcVar13 = __ptr;
    if ((param_3 & 0x10000002) == 0x10000000) {
      do {
        cVar3 = *pcVar8;
        while (cVar3 != '\\') {
          pcVar8 = pcVar8 + 1;
          *pcVar13 = cVar3;
          if (cVar3 == '\0') goto LAB_00100a4a;
          pcVar13 = pcVar13 + 1;
          cVar3 = *pcVar8;
        }
        cVar3 = pcVar8[1];
        cVar2 = pcVar8[cVar3 != '\0'];
        *pcVar13 = cVar2;
        pcVar8 = pcVar8 + (cVar3 != '\0') + 1;
        pcVar13 = pcVar13 + 1;
      } while (cVar2 != '\0');
    }
LAB_00100a4a:
    pcVar8 = (char *)hash_insert(*(undefined8 *)(*param_1 + 0x10),__ptr);
    if (__ptr == pcVar8) {
      return;
    }
    free(__ptr);
    return;
  }
  if (((plVar5 == (long *)0x0) || (*(int *)(plVar5 + 1) != 1)) ||
     (((*(uint *)((long)plVar5 + 0xc) ^ param_3) & 0x20000000) != 0)) {
    plVar5 = (long *)xmalloc(0x28);
    lVar6 = 0;
    *(undefined4 *)(plVar5 + 1) = 1;
    *(uint *)((long)plVar5 + 0xc) = param_3;
    plVar5[2] = 0;
    *(undefined1 (*) [16])(plVar5 + 3) = (undefined1  [16])0x0;
    lVar9 = *param_1;
    *param_1 = (long)plVar5;
    *plVar5 = lVar9;
LAB_001008b1:
    lVar6 = xpalloc(lVar6,plVar5 + 3,1,0xffffffffffffffff,0x48);
    lVar9 = plVar5[4];
    plVar5[2] = lVar6;
  }
  else {
    lVar9 = plVar5[4];
    lVar6 = plVar5[2];
    if (lVar9 == plVar5[3]) goto LAB_001008b1;
  }
  plVar5[4] = lVar9 + 1;
  puVar1 = (uint *)(lVar6 + lVar9 * 0x48);
  *puVar1 = param_3;
  if ((param_3 & 0x8000000) == 0) {
    if ((param_3 & 0x4000000) != 0) {
      param_2 = (char *)xstrdup(param_2);
      plVar5 = (long *)xmalloc(0x10);
      lVar9 = param_1[1];
      param_1[1] = (long)plVar5;
      *plVar5 = lVar9;
      plVar5[1] = (long)param_2;
    }
    *(char **)(puVar1 + 2) = param_2;
    return;
  }
  __cflags = (int)param_3 >> 3 & 2U | 9;
  if ((param_3 & 8) == 0) {
    iVar4 = regcomp((regex_t *)(puVar1 + 2),param_2,__cflags);
LAB_00100999:
    if (iVar4 == 0) {
      return;
    }
  }
  else {
    sVar7 = strlen(param_2);
    if (sVar7 == 0) goto LAB_001009a9;
    do {
      if (param_2[sVar7 - 1] != '/') {
        uVar10 = sVar7 + 7;
        pcVar8 = (char *)ximalloc(uVar10);
        __memcpy_chk(pcVar8,param_2,sVar7,uVar10);
        if (uVar10 < sVar7) {
          uVar10 = sVar7;
        }
        __memcpy_chk(pcVar8 + sVar7,"(/.*)?",7,uVar10 - sVar7);
        iVar4 = regcomp((regex_t *)(puVar1 + 2),pcVar8,__cflags);
        free(pcVar8);
        goto LAB_00100999;
      }
      sVar7 = sVar7 - 1;
    } while (sVar7 != 0);
  }
  lVar9 = plVar5[4] + -1;
LAB_001009a9:
  plVar5[4] = lVar9;
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
LAB_00100d5a:
                  *pbVar13 = 0;
                  (*param_1)(param_2,pbVar15,param_4,param_6);
                }
                else {
                  for (; pbVar15 != pbVar13; pbVar13 = pbVar13 + -1) {
                    if ((*(byte *)((long)*ppuVar9 + (ulong)pbVar13[-1] * 2 + 1) & 0x20) == 0)
                    goto LAB_00100d5a;
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

int add_exclude_file(code *param_1,long param_2,char *param_3,undefined4 param_4,byte param_5)

{
  byte bVar1;
  char *pcVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  _IO_FILE *p_Var6;
  uint *puVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  ushort **ppuVar10;
  long lVar11;
  byte *pbVar12;
  char cVar13;
  byte *pbVar14;
  byte *pbVar15;
  long in_FS_OFFSET;
  int local_50;
  uint local_4c;
  long local_48;
  long local_40;
  
  p_Var6 = _stdin;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*param_3 == '-') && (param_3[1] == '\0')) {
    local_48 = 0;
    lVar11 = 0;
    lVar5 = 0;
    do {
      pcVar2 = p_Var6->_IO_read_ptr;
      if (pcVar2 < p_Var6->_IO_read_end) {
        p_Var6->_IO_read_ptr = pcVar2 + 1;
        cVar13 = *pcVar2;
      }
      else {
        iVar4 = __uflow(p_Var6);
        cVar13 = (char)iVar4;
        if (iVar4 == -1) goto code_r0x00101044;
      }
      if (local_48 == lVar11) {
        lVar5 = xpalloc(lVar5,&local_48,1,0xffffffffffffffff,1);
      }
      *(char *)(lVar5 + lVar11) = cVar13;
      lVar11 = lVar11 + 1;
    } while( true );
  }
  p_Var6 = (_IO_FILE *)rpl_fopen(param_3,&_LC0);
  if (p_Var6 != (_IO_FILE *)0x0) {
    local_48 = 0;
    lVar11 = 0;
    lVar5 = 0;
    do {
      pcVar2 = p_Var6->_IO_read_ptr;
      if (pcVar2 < p_Var6->_IO_read_end) {
        p_Var6->_IO_read_ptr = pcVar2 + 1;
        cVar13 = *pcVar2;
      }
      else {
        iVar4 = __uflow(p_Var6);
        cVar13 = (char)iVar4;
        if (iVar4 == -1) goto code_r0x00100ef0;
      }
      if (local_48 == lVar11) {
        lVar5 = xpalloc(lVar5,&local_48,1,0xffffffffffffffff,1);
      }
      *(char *)(lVar5 + lVar11) = cVar13;
      lVar11 = lVar11 + 1;
    } while( true );
  }
  goto LAB_001011f7;
code_r0x00101044:
  local_50 = 0;
  local_4c = p_Var6->_flags & 0x20;
  if (local_4c != 0) {
    puVar7 = (uint *)__errno_location();
    local_4c = *puVar7;
    local_50 = -(uint)(local_4c != 0);
  }
  pbVar8 = (byte *)xirealloc(lVar5,lVar11 + 1);
  pbVar8[lVar11] = param_5;
  if (lVar11 == 0) {
    puVar9 = (undefined8 *)xmalloc(0x10);
    uVar3 = *(undefined8 *)(param_2 + 8);
    *(undefined8 **)(param_2 + 8) = puVar9;
    *puVar9 = uVar3;
    puVar9[1] = pbVar8;
  }
  else {
    bVar1 = pbVar8[lVar11 + -1];
    puVar9 = (undefined8 *)xmalloc(0x10);
    pbVar12 = pbVar8 + lVar11 + (ulong)(bVar1 != param_5);
    uVar3 = *(undefined8 *)(param_2 + 8);
    *(undefined8 **)(param_2 + 8) = puVar9;
    *puVar9 = uVar3;
    puVar9[1] = pbVar8;
    if (pbVar8 < pbVar12) {
      pbVar14 = pbVar8;
      do {
        while (pbVar15 = pbVar8 + 1, param_5 != *pbVar8) {
          pbVar8 = pbVar15;
          if (pbVar12 == pbVar15) goto LAB_00101125;
        }
        ppuVar10 = __ctype_b_loc();
        if (((*ppuVar10)[param_5] & 0x2000) == 0) {
LAB_00101105:
          *pbVar8 = 0;
          (*param_1)(param_2,pbVar14,param_4);
        }
        else {
          for (; pbVar14 != pbVar8; pbVar8 = pbVar8 + -1) {
            if ((*(byte *)((long)*ppuVar10 + (ulong)pbVar8[-1] * 2 + 1) & 0x20) == 0)
            goto LAB_00101105;
          }
        }
        pbVar8 = pbVar15;
        pbVar14 = pbVar15;
      } while (pbVar12 != pbVar15);
    }
  }
LAB_00101125:
  puVar7 = (uint *)__errno_location();
  *puVar7 = local_4c;
  goto LAB_00101003;
code_r0x00100ef0:
  local_50 = 0;
  local_4c = p_Var6->_flags & 0x20;
  if (local_4c != 0) {
    puVar7 = (uint *)__errno_location();
    local_4c = *puVar7;
    local_50 = -(uint)(local_4c != 0);
  }
  pbVar8 = (byte *)xirealloc(lVar5,lVar11 + 1);
  pbVar8[lVar11] = param_5;
  if (lVar11 == 0) {
    puVar9 = (undefined8 *)xmalloc(0x10);
    uVar3 = *(undefined8 *)(param_2 + 8);
    *(undefined8 **)(param_2 + 8) = puVar9;
    *puVar9 = uVar3;
    puVar9[1] = pbVar8;
  }
  else {
    bVar1 = pbVar8[lVar11 + -1];
    puVar9 = (undefined8 *)xmalloc(0x10);
    pbVar12 = pbVar8 + lVar11 + (ulong)(bVar1 != param_5);
    uVar3 = *(undefined8 *)(param_2 + 8);
    *(undefined8 **)(param_2 + 8) = puVar9;
    *puVar9 = uVar3;
    puVar9[1] = pbVar8;
    if (pbVar8 < pbVar12) {
      pbVar14 = pbVar8;
      do {
        while (pbVar15 = pbVar14 + 1, param_5 != *pbVar14) {
          pbVar14 = pbVar15;
          if (pbVar12 == pbVar15) goto LAB_00100fe0;
        }
        ppuVar10 = __ctype_b_loc();
        if (((*ppuVar10)[param_5] & 0x2000) == 0) {
LAB_00100fc3:
          *pbVar14 = 0;
          (*param_1)(param_2,pbVar8,param_4);
        }
        else {
          for (; pbVar8 != pbVar14; pbVar14 = pbVar14 + -1) {
            if ((*(byte *)((long)*ppuVar10 + (ulong)pbVar14[-1] * 2 + 1) & 0x20) == 0)
            goto LAB_00100fc3;
          }
        }
        pbVar8 = pbVar15;
        pbVar14 = pbVar15;
      } while (pbVar12 != pbVar15);
    }
  }
LAB_00100fe0:
  puVar7 = (uint *)__errno_location();
  *puVar7 = local_4c;
  iVar4 = rpl_fclose(p_Var6);
  if (-1 < iVar4) {
    *puVar7 = local_4c;
    goto LAB_00101003;
  }
LAB_001011f7:
  local_50 = -1;
LAB_00101003:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_50;
}


