
/* WARNING: Unknown calling convention */

void call_addfn(exclude *ex,char *pattern,int options,void *data)

{
                    /* WARNING: Could not recover jumptable at 0x00100004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Load size is inaccurate */
  (**data)();
  return;
}



/* WARNING: Unknown calling convention */

_Bool string_compare_ci(void *data1,void *data2)

{
  int iVar1;
  
  iVar1 = mbscasecmp();
  return iVar1 == 0;
}



/* WARNING: Unknown calling convention */

_Bool string_compare(void *data1,void *data2)

{
  int iVar1;
  
  iVar1 = strcmp((char *)data1,(char *)data2);
  return iVar1 == 0;
}



/* WARNING: Unknown calling convention */

size_t string_hasher(void *data,size_t n_buckets)

{
  size_t sVar1;
  
  sVar1 = hash_string();
  return sVar1;
}



/* WARNING: Unknown calling convention */

int fnmatch_no_wildcards(char *pattern,char *f,int options)

{
  int iVar1;
  size_t __n;
  char *__ptr;
  char *pcVar2;
  
  if ((options & 8U) == 0) {
    if ((options & 0x10U) != 0) {
      iVar1 = mbscasecmp();
      return iVar1;
    }
    iVar1 = strcmp(pattern,f);
    return iVar1;
  }
  if ((options & 0x10U) == 0) {
    __n = strlen(pattern);
    iVar1 = strncmp(pattern,f,__n);
    if ((iVar1 == 0) && (f[__n] != 0x2f)) {
      iVar1 = (int)f[__n];
    }
    return iVar1;
  }
  __ptr = (char *)xstrdup(f);
  pcVar2 = __ptr;
  while( true ) {
    pcVar2 = strchr(pcVar2,0x2f);
    if (pcVar2 == (char *)0x0) break;
    *pcVar2 = '\0';
    iVar1 = mbscasecmp(pattern,__ptr);
    if (iVar1 < 1) goto LAB_00100106;
    *pcVar2 = '/';
    pcVar2 = pcVar2 + 1;
  }
  iVar1 = mbscasecmp(pattern,__ptr);
LAB_00100106:
  free(__ptr);
  return iVar1;
}



/* WARNING: Unknown calling convention */

size_t string_hasher_ci(void *data,size_t n_buckets)

{
  byte bVar1;
  long lVar2;
  wint_t wVar3;
  size_t sVar4;
  byte *pbVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  long in_FS_OFFSET;
  char32_t ch;
  mbstate_t mbs;
  
                    /* WARNING: Load size is inaccurate */
  bVar1 = *data;
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if (bVar1 == 0) {
    sVar4 = 0;
  }
  else {
    uVar6 = 0;
    do {
      uVar8 = (uint)bVar1;
      if ((char)bVar1 < '\0') {
        pbVar5 = (byte *)((long)data + (2 - (ulong)(*(byte *)((long)data + 1) == 0)));
        mbs.__count = 0;
        lVar7 = mbrtoc32(&ch,data,pbVar5 + (*pbVar5 != 0) +
                                  ((ulong)(pbVar5[*pbVar5 != 0] != 0) - (long)data),&mbs);
        if (lVar7 < 0) {
          lVar7 = 1;
          wVar3 = 0;
        }
        else {
          uVar8 = 0;
          wVar3 = ch;
        }
      }
      else {
        lVar7 = 1;
        uVar8 = 0;
        wVar3 = (int)(char)bVar1;
      }
      wVar3 = towlower(wVar3);
      data = (void *)((long)data + lVar7);
                    /* WARNING: Load size is inaccurate */
      bVar1 = *data;
      uVar6 = (ulong)(wVar3 - uVar8) + uVar6 * 0x1f;
    } while (bVar1 != 0);
    sVar4 = uVar6 % n_buckets;
  }
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return sVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

void exclude_add_pattern_buffer(exclude *ex,char *buf)

{
  pattern_buffer *ppVar1;
  pattern_buffer *ppVar2;
  
  ppVar2 = (pattern_buffer *)xmalloc(0x10);
  ppVar1 = ex->patbuf;
  ex->patbuf = ppVar2;
  ppVar2->next = ppVar1;
  ppVar2->base = buf;
  return;
}



/* WARNING: Unknown calling convention */

_Bool fnmatch_pattern_has_wildcards(char *str,int options)

{
  char *pcVar1;
  char cVar2;
  ulong uVar3;
  char *pcVar4;
  
  cVar2 = *str;
  pcVar1 = str + 1;
  if ('@' < cVar2) goto LAB_001002ef;
  do {
    pcVar4 = pcVar1;
    if (cVar2 < '!') {
      if (cVar2 == '\0') {
        return false;
      }
    }
    else {
      uVar3 = 1L << (cVar2 - 0x21U & 0x3f);
      if ((uVar3 & 0x80000401) == 0) {
        if ((uVar3 & 0x2180) != 0) goto LAB_00100301;
        if ((uVar3 & 0x40000200) != 0) {
          return true;
        }
      }
      else if (((options & 0x20U) != 0) && (str[1] == '(')) {
        return true;
      }
    }
    while( true ) {
      cVar2 = *pcVar4;
      pcVar1 = pcVar4 + 1;
      str = pcVar4;
      if (cVar2 < 'A') break;
LAB_001002ef:
      pcVar4 = pcVar1;
      if (cVar2 == '\\') {
        if (((options & 0x8000000U) == 0) && ((options & 2U) == 0)) {
          pcVar4 = pcVar1 + (str[1] != '\0');
        }
      }
      else if (cVar2 < ']') {
        if (cVar2 == '[') {
          return true;
        }
      }
      else if ((cVar2 + 0x85U & 0xfd) == 0) {
LAB_00100301:
        pcVar4 = pcVar1;
        if ((options & 0x8000000U) != 0) {
          return true;
        }
      }
    }
  } while( true );
}



/* WARNING: Unknown calling convention */

exclude * new_exclude(void)

{
  exclude *peVar1;
  
  peVar1 = (exclude *)xzalloc(0x10);
  return peVar1;
}



/* WARNING: Unknown calling convention */

void free_exclude(exclude *ex)

{
  long lVar1;
  exclude_segment *peVar2;
  pattern_buffer *ppVar3;
  pattern_buffer *__ptr;
  Hash_table *__ptr_00;
  long lVar4;
  exclude_segment *__ptr_01;
  
  peVar2 = ex->head;
  while (__ptr_01 = peVar2, peVar2 != (exclude_segment *)0x0) {
    while( true ) {
      peVar2 = __ptr_01->next;
      if (__ptr_01->type == exclude_hash) break;
      if (__ptr_01->type == exclude_pattern) {
        __ptr_00 = (__ptr_01->v).table;
        if (0 < (__ptr_01->v).pat.exclude_count) {
          lVar4 = 0;
          do {
            while (lVar1 = lVar4 * 0x48, (*(uint *)(__ptr_00 + lVar1) & 0x8000000) == 0) {
              lVar4 = lVar4 + 1;
              if ((__ptr_01->v).pat.exclude_count <= lVar4) goto LAB_00100401;
            }
            lVar4 = lVar4 + 1;
            regfree((regex_t *)(__ptr_00 + lVar1 + 8));
            __ptr_00 = (__ptr_01->v).table;
          } while (lVar4 < (__ptr_01->v).pat.exclude_count);
        }
LAB_00100401:
        free(__ptr_00);
      }
      free(__ptr_01);
      __ptr_01 = peVar2;
      if (peVar2 == (exclude_segment *)0x0) goto LAB_00100416;
    }
    hash_free((__ptr_01->v).table);
    free(__ptr_01);
  }
LAB_00100416:
  __ptr = ex->patbuf;
  while (__ptr != (pattern_buffer *)0x0) {
    ppVar3 = __ptr->next;
    free(__ptr->base);
    free(__ptr);
    __ptr = ppVar3;
  }
  free(ex);
  return;
}



/* WARNING: Unknown calling convention */

_Bool exclude_fnmatch(char *pattern,char *f,int options)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char cVar4;
  code *pcVar5;
  _Bool _Var6;
  
  pcVar5 = fnmatch_no_wildcards;
  if ((options & 0x10000000U) != 0) {
    pcVar5 = fnmatch;
  }
  iVar3 = (*pcVar5)(pattern,f,options);
  _Var6 = iVar3 == 0;
  if (((options & 0x40000000U) == 0) && (cVar4 = *f, cVar4 != '\0')) {
    do {
      if (iVar3 == 0) {
        return true;
      }
      while( true ) {
        cVar2 = f[1];
        f = f + 1;
        if (cVar4 == '/') break;
        cVar4 = cVar2;
        if (cVar2 == '\0') {
          return false;
        }
      }
      while (cVar2 == '/') {
        pcVar1 = f + 1;
        f = f + 1;
        cVar2 = *pcVar1;
      }
      iVar3 = (*pcVar5)(pattern,f,options);
      cVar4 = *f;
    } while (cVar4 != '\0');
    _Var6 = iVar3 == 0;
  }
  return _Var6;
}



/* WARNING: Unknown calling convention */

_Bool excluded_file_name(exclude *ex,char *f)

{
  exclude_type eVar1;
  uint uVar2;
  exclude_segment *peVar3;
  Hash_table *pHVar4;
  exclude_segment *peVar5;
  patopts *ppVar6;
  _Bool _Var7;
  int iVar8;
  long lVar9;
  char *pcVar10;
  char *pcVar11;
  size_t sVar12;
  char *__dest;
  byte bVar13;
  anon_union_64_2_72001662_for_v *__preg;
  long lVar14;
  
  peVar3 = ex->head;
  if (peVar3 == (exclude_segment *)0x0) {
    return false;
  }
  eVar1 = peVar3->type;
  __dest = (char *)0x0;
  while( true ) {
    if (eVar1 == exclude_hash) {
      if (__dest == (char *)0x0) {
        sVar12 = strlen(f);
        __dest = (char *)xmalloc(sVar12 + 1);
      }
      uVar2 = peVar3->options;
      pHVar4 = (peVar3->v).table;
      pcVar11 = f;
      while( true ) {
        strcpy(__dest,pcVar11);
        lVar9 = hash_lookup(pHVar4,__dest);
        while( true ) {
          if (lVar9 != 0) goto LAB_001005cd;
          if (((uVar2 & 8) == 0) || (pcVar10 = strrchr(__dest,0x2f), pcVar10 == (char *)0x0)) break;
          *pcVar10 = '\0';
          lVar9 = hash_lookup(pHVar4,__dest);
        }
        if (((uVar2 & 0x40000000) != 0) || (pcVar11 = strchr(pcVar11,0x2f), pcVar11 == (char *)0x0))
        break;
        pcVar11 = pcVar11 + 1;
      }
    }
    else {
      lVar9 = (peVar3->v).pat.exclude_count;
      ppVar6 = (peVar3->v).pat.exclude;
      if (0 < lVar9) {
        lVar14 = 0;
        do {
          __preg = &ppVar6->v;
          if ((*(uint *)((long)(__preg + -1) + 0x38) & 0x8000000) == 0) {
            _Var7 = exclude_fnmatch((char *)(__preg->re).buffer,f,
                                    *(uint *)((long)(__preg + -1) + 0x38));
            if (_Var7) goto LAB_001005cd;
          }
          else {
            iVar8 = regexec((regex_t *)&__preg->re,f,0,(regmatch_t *)0x0,0);
            if (iVar8 == 0) goto LAB_001005cd;
          }
          lVar14 = lVar14 + 1;
          ppVar6 = (patopts *)(__preg + 1);
        } while (lVar9 != lVar14);
      }
    }
    peVar5 = peVar3->next;
    if (peVar5 == (exclude_segment *)0x0) break;
    eVar1 = peVar5->type;
    peVar3 = peVar5;
  }
  bVar13 = 1;
LAB_001005cf:
  free(__dest);
  return (_Bool)(((byte)((uint)peVar3->options >> 0x1d) ^ 1) & 1 ^ bVar13);
LAB_001005cd:
  bVar13 = 0;
  goto LAB_001005cf;
}



/* WARNING: Unknown calling convention */

void add_exclude(exclude *ex,char *pattern,int options)

{
  pattern_buffer *ppVar1;
  exclude_segment *peVar2;
  _Bool _Var3;
  int iVar4;
  exclude_segment *peVar5;
  Hash_table *pHVar6;
  size_t sVar7;
  char *pcVar8;
  char *__ptr;
  pattern_buffer *ppVar9;
  char cVar10;
  ulong uVar11;
  code *pcVar12;
  code *pcVar13;
  char *pcVar14;
  uint __cflags;
  long lVar15;
  
  peVar5 = ex->head;
  if (((options & 0x18000000U) == 0) ||
     (_Var3 = fnmatch_pattern_has_wildcards(pattern,options), !_Var3)) {
    if ((peVar5 == (exclude_segment *)0x0) ||
       ((peVar5->type != exclude_hash || (((peVar5->options ^ options) & 0x60000018U) != 0)))) {
      peVar5 = (exclude_segment *)xmalloc(0x28);
      pcVar12 = string_compare;
      pcVar13 = string_hasher;
      peVar5->type = exclude_hash;
      peVar5->options = options;
      if ((options & 0x10U) != 0) {
        pcVar12 = string_compare_ci;
        pcVar13 = string_hasher_ci;
      }
      pHVar6 = (Hash_table *)hash_initialize(0,0,pcVar13,pcVar12,free);
      (peVar5->v).table = pHVar6;
      peVar2 = ex->head;
      ex->head = peVar5;
      peVar5->next = peVar2;
    }
    __ptr = (char *)xstrdup(pattern);
    pcVar8 = __ptr;
    pcVar14 = __ptr;
    if ((options & 0x10000002U) == 0x10000000) {
      do {
        cVar10 = *pcVar14;
        if (cVar10 == '\\') {
          pcVar14 = pcVar14 + (pcVar14[1] != '\0');
          cVar10 = *pcVar14;
        }
        *pcVar8 = cVar10;
        pcVar8 = pcVar8 + 1;
        pcVar14 = pcVar14 + 1;
      } while (cVar10 != '\0');
    }
    pcVar8 = (char *)hash_insert((ex->head->v).table,__ptr);
    if (__ptr == pcVar8) {
      return;
    }
    free(__ptr);
    return;
  }
  if (((peVar5 == (exclude_segment *)0x0) || (peVar5->type != exclude_pattern)) ||
     (((peVar5->options ^ options) & 0x20000000U) != 0)) {
    peVar5 = (exclude_segment *)xmalloc(0x28);
    pHVar6 = (Hash_table *)0x0;
    peVar5->type = exclude_pattern;
    peVar5->options = options;
    (peVar5->v).table = (Hash_table *)0x0;
    *(undefined1 (*) [16])((long)&peVar5->v + 8) = (undefined1  [16])0x0;
    peVar2 = ex->head;
    ex->head = peVar5;
    peVar5->next = peVar2;
LAB_00100761:
    pHVar6 = (Hash_table *)
             xpalloc(pHVar6,(undefined1 *)((long)&peVar5->v + 8),1,0xffffffffffffffff,0x48);
    lVar15 = (peVar5->v).pat.exclude_count;
    (peVar5->v).table = pHVar6;
  }
  else {
    lVar15 = (peVar5->v).pat.exclude_count;
    pHVar6 = (peVar5->v).table;
    if (lVar15 == (peVar5->v).pat.exclude_alloc) goto LAB_00100761;
  }
  (peVar5->v).pat.exclude_count = lVar15 + 1;
  pHVar6 = pHVar6 + lVar15 * 0x48;
  *(int *)pHVar6 = options;
  if ((options & 0x8000000U) == 0) {
    if ((options & 0x4000000U) != 0) {
      pattern = (char *)xstrdup(pattern);
      ppVar9 = (pattern_buffer *)xmalloc(0x10);
      ppVar1 = ex->patbuf;
      ex->patbuf = ppVar9;
      ppVar9->next = ppVar1;
      ppVar9->base = pattern;
    }
    *(char **)(pHVar6 + 8) = pattern;
    return;
  }
  __cflags = options >> 3 & 2U | 9;
  if ((options & 8U) == 0) {
    iVar4 = regcomp((regex_t *)(pHVar6 + 8),pattern,__cflags);
LAB_00100849:
    if (iVar4 == 0) {
      return;
    }
  }
  else {
    sVar7 = strlen(pattern);
    if (sVar7 == 0) goto LAB_00100859;
    do {
      if (pattern[sVar7 - 1] != '/') {
        uVar11 = sVar7 + 7;
        pcVar8 = (char *)ximalloc(uVar11);
        __memcpy_chk(pcVar8,pattern,sVar7,uVar11);
        if (uVar11 < sVar7) {
          uVar11 = sVar7;
        }
        __memcpy_chk(pcVar8 + sVar7,"(/.*)?",7,uVar11 - sVar7);
        iVar4 = regcomp((regex_t *)(pHVar6 + 8),pcVar8,__cflags);
        free(pcVar8);
        goto LAB_00100849;
      }
      sVar7 = sVar7 - 1;
    } while (sVar7 != 0);
  }
  lVar15 = (peVar5->v).pat.exclude_count + -1;
LAB_00100859:
  (peVar5->v).pat.exclude_count = lVar15;
  return;
}



/* WARNING: Unknown calling convention */

int add_exclude_fp(_func_void_exclude_ptr_char_ptr_int_void_ptr *add_func,exclude *ex,FILE *fp,
                  int options,char line_end,void *data)

{
  pattern_buffer *ppVar1;
  int iVar2;
  long lVar3;
  uint *puVar4;
  char *pcVar5;
  pattern_buffer *ppVar6;
  ushort **ppuVar7;
  long lVar8;
  char *pcVar9;
  char cVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  long in_FS_OFFSET;
  uint local_58;
  int local_54;
  idx_t buf_alloc;
  long local_40;
  
  lVar3 = 0;
  lVar8 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  buf_alloc = 0;
  do {
    pcVar5 = fp->_IO_read_ptr;
    if (pcVar5 < fp->_IO_read_end) {
      fp->_IO_read_ptr = pcVar5 + 1;
      cVar10 = *pcVar5;
    }
    else {
      iVar2 = __uflow((_IO_FILE *)fp);
      cVar10 = (char)iVar2;
      if (iVar2 == -1) {
        local_54 = 0;
        local_58 = fp->_flags & 0x20;
        if (local_58 != 0) {
          puVar4 = (uint *)__errno_location();
          local_58 = *puVar4;
          local_54 = -(uint)(local_58 != 0);
        }
        pcVar5 = (char *)xirealloc(lVar3,lVar8 + 1);
        pcVar5[lVar8] = line_end;
        if (lVar8 == 0) {
          ppVar6 = (pattern_buffer *)xmalloc(0x10);
          ppVar1 = ex->patbuf;
          ex->patbuf = ppVar6;
          ppVar6->next = ppVar1;
          ppVar6->base = pcVar5;
        }
        else {
          cVar10 = pcVar5[lVar8 + -1];
          ppVar6 = (pattern_buffer *)xmalloc(0x10);
          ppVar1 = ex->patbuf;
          ex->patbuf = ppVar6;
          ppVar6->next = ppVar1;
          ppVar6->base = pcVar5;
          if (pcVar5 < pcVar5 + lVar8 + (ulong)(cVar10 != line_end)) {
            pcVar11 = pcVar5;
            pcVar13 = pcVar5;
            do {
              pcVar9 = pcVar11 + 1;
              pcVar12 = pcVar13;
              if (*pcVar11 == line_end) {
                ppuVar7 = __ctype_b_loc();
                pcVar12 = pcVar9;
                if (((*ppuVar7)[(byte)line_end] & 0x2000) == 0) {
LAB_00100bfa:
                  *pcVar11 = '\0';
                  (*add_func)(ex,pcVar13,options,data);
                }
                else {
                  for (; pcVar13 != pcVar11; pcVar11 = pcVar11 + -1) {
                    if ((*(byte *)((long)*ppuVar7 + (ulong)(byte)pcVar11[-1] * 2 + 1) & 0x20) == 0)
                    goto LAB_00100bfa;
                  }
                }
              }
              pcVar11 = pcVar9;
              pcVar13 = pcVar12;
            } while (pcVar5 + lVar8 + (ulong)(cVar10 != line_end) != pcVar9);
          }
        }
        puVar4 = (uint *)__errno_location();
        *puVar4 = local_58;
        if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return local_54;
      }
    }
    if (buf_alloc == lVar8) {
      lVar3 = xpalloc(lVar3,&buf_alloc,1,0xffffffffffffffff,1);
    }
    *(char *)(lVar3 + lVar8) = cVar10;
    lVar8 = lVar8 + 1;
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int add_exclude_file(_func_void_exclude_ptr_char_ptr_int *add_func,exclude *ex,char *file_name,
                    int options,char line_end)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FILE *fp;
  int *piVar4;
  _func_void_exclude_ptr_char_ptr_int *local_30 [2];
  
  local_30[0] = add_func;
  if ((*file_name == '-') && (file_name[1] == '\0')) {
    iVar1 = add_exclude_fp(call_addfn,ex,_stdin,options,line_end,local_30);
    return iVar1;
  }
  fp = (FILE *)rpl_fopen(file_name,&_LC0);
  if (fp != (FILE *)0x0) {
    iVar2 = add_exclude_fp(call_addfn,ex,fp,options,line_end,local_30);
    piVar4 = __errno_location();
    iVar1 = *piVar4;
    iVar3 = rpl_fclose(fp);
    if (-1 < iVar3) {
      *piVar4 = iVar1;
      return iVar2;
    }
  }
  return -1;
}


