
void unescape_string(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  char cVar7;
  
  bVar4 = *param_1;
  pbVar3 = param_1;
joined_r0x0010000b:
  if (bVar4 != 0) {
    pbVar5 = param_1 + 1;
    if (bVar4 == 0x5c) {
      if (param_1[1] == 0) goto LAB_00100069;
      switch(param_1[1]) {
      case 0x30:
        bVar4 = 0;
        pbVar2 = param_1 + 5;
        pbVar5 = param_1 + 2;
        do {
          param_1 = pbVar5;
          if (7 < (byte)(*param_1 - 0x30)) break;
          pbVar5 = param_1 + 1;
          bVar4 = (*param_1 - 0x30) + bVar4 * '\b';
          param_1 = pbVar2;
        } while (pbVar2 != pbVar5);
        *pbVar3 = bVar4;
        pbVar3 = pbVar3 + 1;
        bVar4 = *param_1;
        break;
      default:
        *pbVar3 = 0x5c;
        pbVar3[1] = param_1[1];
        bVar4 = param_1[2];
        param_1 = param_1 + 2;
        pbVar3 = pbVar3 + 2;
        break;
      case 0x61:
        *pbVar3 = 7;
        param_1 = param_1 + 2;
        bVar4 = *param_1;
        pbVar3 = pbVar3 + 1;
        break;
      case 0x62:
        *pbVar3 = 8;
        param_1 = param_1 + 2;
        bVar4 = *param_1;
        pbVar3 = pbVar3 + 1;
        break;
      case 99:
        goto switchD_00100054_caseD_63;
      case 0x66:
        *pbVar3 = 0xc;
        param_1 = param_1 + 2;
        bVar4 = *param_1;
        pbVar3 = pbVar3 + 1;
        break;
      case 0x6e:
        *pbVar3 = 10;
        param_1 = param_1 + 2;
        bVar4 = *param_1;
        pbVar3 = pbVar3 + 1;
        break;
      case 0x72:
        *pbVar3 = 0xd;
        param_1 = param_1 + 2;
        bVar4 = *param_1;
        pbVar3 = pbVar3 + 1;
        break;
      case 0x74:
        *pbVar3 = 9;
        param_1 = param_1 + 2;
        bVar4 = *param_1;
        pbVar3 = pbVar3 + 1;
        break;
      case 0x76:
        *pbVar3 = 0xb;
        param_1 = param_1 + 2;
        bVar4 = *param_1;
        pbVar3 = pbVar3 + 1;
        break;
      case 0x78:
        param_1 = param_1 + 2;
        iVar6 = 0;
        bVar4 = 0;
        do {
          bVar1 = *param_1;
          if ((0x36 < (byte)(bVar1 - 0x30)) ||
             ((0x7e0000007e03ffU >> ((ulong)(bVar1 - 0x30) & 0x3f) & 1) == 0)) {
            if (iVar6 == 0) {
              pbVar3[0] = 0x5c;
              pbVar3[1] = 0x78;
              bVar4 = *param_1;
              pbVar3 = pbVar3 + 2;
              goto joined_r0x0010000b;
            }
            break;
          }
          cVar7 = bVar1 + 0xa9;
          if (5 < (byte)(bVar1 + 0x9f)) {
            cVar7 = bVar1 - 0x37;
            if (5 < (byte)(bVar1 + 0xbf)) {
              cVar7 = bVar1 - 0x30;
            }
          }
          iVar6 = iVar6 + 1;
          bVar4 = bVar4 * '\x10' + cVar7;
          param_1 = param_1 + 1;
        } while (iVar6 != 3);
        *pbVar3 = bVar4;
        bVar4 = *param_1;
        pbVar3 = pbVar3 + 1;
      }
    }
    else {
      *pbVar3 = bVar4;
      bVar4 = param_1[1];
      param_1 = pbVar5;
      pbVar3 = pbVar3 + 1;
    }
    goto joined_r0x0010000b;
  }
LAB_00100069:
  *pbVar3 = 0;
  return;
switchD_00100054_caseD_63:
  do {
    pbVar5 = pbVar5 + 1;
  } while (*pbVar5 != 0);
  goto LAB_00100069;
}



int compare_words(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = param_2[1];
  lVar2 = param_1[1];
  lVar5 = lVar2;
  if (lVar1 <= lVar2) {
    lVar5 = lVar1;
  }
  if (ignore_case == '\0') {
    if (0 < lVar5) {
      lVar4 = 0;
      do {
        iVar3 = (uint)*(byte *)(*param_1 + lVar4) - (uint)*(byte *)(*param_2 + lVar4);
        if (iVar3 != 0) {
          return iVar3;
        }
        lVar4 = lVar4 + 1;
      } while (lVar5 != lVar4);
    }
  }
  else if (0 < lVar5) {
    lVar4 = 0;
    do {
      if ((uint)(byte)(&folded_chars)[*(byte *)(*param_1 + lVar4)] -
          (uint)(byte)(&folded_chars)[*(byte *)(*param_2 + lVar4)] != 0) {
        return (uint)(byte)(&folded_chars)[*(byte *)(*param_1 + lVar4)] -
               (uint)(byte)(&folded_chars)[*(byte *)(*param_2 + lVar4)];
      }
      lVar4 = lVar4 + 1;
    } while (lVar5 != lVar4);
  }
  return (uint)(lVar1 < lVar2) - (uint)(lVar2 < lVar1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void matcher_error(void)

{
  re_pattern_buffer *__buffer;
  undefined8 uVar1;
  int *piVar2;
  undefined1 *puVar3;
  size_t __length;
  char *pcVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  char *pcVar9;
  long in_FS_OFFSET;
  bool bVar10;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_30;
  re_pattern_buffer *prStack_28;
  undefined8 uStack_20;
  
  uVar1 = dcgettext(0,"error in regular expression matcher",5);
  piVar2 = __errno_location();
  puVar8 = (undefined8 *)0x1;
  error(1,*piVar2,uVar1);
  bVar10 = ignore_case == '\0';
  __buffer = (re_pattern_buffer *)(puVar8 + 1);
  pcVar9 = (char *)*puVar8;
  puVar8[5] = puVar8 + 9;
  puVar3 = &folded_chars;
  if (bVar10) {
    puVar3 = (undefined1 *)0x0;
  }
  puVar8[1] = 0;
  puVar8[2] = 0;
  puVar8[6] = puVar3;
  prStack_28 = (re_pattern_buffer *)0x100316;
  uStack_20 = uVar1;
  __length = strlen(pcVar9);
  prStack_28 = (re_pattern_buffer *)0x100324;
  pcVar4 = re_compile_pattern(pcVar9,__length,__buffer);
  if (pcVar4 == (char *)0x0) {
    re_compile_fastmap(__buffer);
    return;
  }
  prStack_28 = (re_pattern_buffer *)0x100340;
  uVar1 = quote(pcVar9);
  prStack_28 = (re_pattern_buffer *)0x100356;
  uVar5 = dcgettext(0,"%s (for regexp %s)",5);
  plVar7 = (long *)0x0;
  pcVar9 = (char *)0x1;
  prStack_28 = (re_pattern_buffer *)0x10036d;
  error(1,0,uVar5,pcVar4,uVar1);
  lStack_40 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_30 = uVar1;
  prStack_28 = __buffer;
  if ((pcVar9 != (char *)0x0) && (*pcVar9 != '\0')) {
    if (*pcVar9 == '-') goto LAB_00100440;
    goto LAB_001003ed;
  }
  while( true ) {
    lVar6 = fread_file(_stdin,0,&lStack_48);
    *plVar7 = lVar6;
    if (lVar6 != 0) break;
    pcVar9 = "-";
    while( true ) {
      uVar1 = quotearg_n_style_colon(0,3,pcVar9);
      piVar2 = __errno_location();
      pcVar9 = (char *)0x1;
      error(1,*piVar2,&_LC4,uVar1);
LAB_00100440:
      if (pcVar9[1] == '\0') break;
LAB_001003ed:
      lVar6 = read_file();
      *plVar7 = lVar6;
      if (lVar6 != 0) goto LAB_001003c3;
    }
  }
  clearerr_unlocked(_stdin);
  lVar6 = *plVar7;
LAB_001003c3:
  plVar7[1] = lVar6 + lStack_48;
  if (lStack_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void compile_regex(undefined8 *param_1)

{
  re_pattern_buffer *__buffer;
  undefined1 *puVar1;
  size_t __length;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  int *piVar6;
  long *plVar7;
  char *pcVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long lStack_40;
  long lStack_38;
  undefined8 uStack_28;
  re_pattern_buffer *prStack_20;
  
  bVar9 = ignore_case == '\0';
  __buffer = (re_pattern_buffer *)(param_1 + 1);
  pcVar8 = (char *)*param_1;
  param_1[5] = param_1 + 9;
  puVar1 = &folded_chars;
  if (bVar9) {
    puVar1 = (undefined1 *)0x0;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[6] = puVar1;
  prStack_20 = (re_pattern_buffer *)0x100316;
  __length = strlen(pcVar8);
  prStack_20 = (re_pattern_buffer *)0x100324;
  pcVar2 = re_compile_pattern(pcVar8,__length,__buffer);
  if (pcVar2 == (char *)0x0) {
    re_compile_fastmap(__buffer);
    return;
  }
  prStack_20 = (re_pattern_buffer *)0x100340;
  uVar3 = quote(pcVar8);
  prStack_20 = (re_pattern_buffer *)0x100356;
  uVar4 = dcgettext(0,"%s (for regexp %s)",5);
  plVar7 = (long *)0x0;
  pcVar8 = (char *)0x1;
  prStack_20 = (re_pattern_buffer *)0x10036d;
  error(1,0,uVar4,pcVar2,uVar3);
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_28 = uVar3;
  prStack_20 = __buffer;
  if ((pcVar8 != (char *)0x0) && (*pcVar8 != '\0')) {
    if (*pcVar8 == '-') goto LAB_00100440;
    goto LAB_001003ed;
  }
  while( true ) {
    lVar5 = fread_file(_stdin,0,&lStack_40);
    *plVar7 = lVar5;
    if (lVar5 != 0) break;
    pcVar8 = "-";
    while( true ) {
      uVar3 = quotearg_n_style_colon(0,3,pcVar8);
      piVar6 = __errno_location();
      pcVar8 = (char *)0x1;
      error(1,*piVar6,&_LC4,uVar3);
LAB_00100440:
      if (pcVar8[1] == '\0') break;
LAB_001003ed:
      lVar5 = read_file();
      *plVar7 = lVar5;
      if (lVar5 != 0) goto LAB_001003c3;
    }
  }
  clearerr_unlocked(_stdin);
  lVar5 = *plVar7;
LAB_001003c3:
  plVar7[1] = lVar5 + lStack_40;
  if (lStack_38 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void swallow_file_in_memory(char *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  int *piVar3;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    if (*param_1 == '-') goto LAB_00100440;
    goto LAB_001003ed;
  }
  while( true ) {
    lVar1 = fread_file(_stdin,0,&local_28);
    *param_2 = lVar1;
    if (lVar1 != 0) break;
    param_1 = "-";
    while( true ) {
      uVar2 = quotearg_n_style_colon(0,3,param_1);
      piVar3 = __errno_location();
      param_1 = (char *)0x1;
      error(1,*piVar3,&_LC4,uVar2);
LAB_00100440:
      if (param_1[1] == '\0') break;
LAB_001003ed:
      lVar1 = read_file();
      *param_2 = lVar1;
      if (lVar1 != 0) goto LAB_001003c3;
    }
  }
  clearerr_unlocked(_stdin);
  lVar1 = *param_2;
LAB_001003c3:
  param_2[1] = lVar1 + local_28;
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void digest_word_file(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  void *__base;
  size_t __nmemb;
  char *pcVar3;
  long in_FS_OFFSET;
  char *local_48;
  char *local_40;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  swallow_file_in_memory();
  __base = (void *)0x0;
  *param_2 = 0;
  __nmemb = 0;
  *(undefined1 (*) [16])(param_2 + 1) = (undefined1  [16])0x0;
  pcVar3 = local_48;
  if (local_40 <= local_48) {
LAB_0010050a:
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      qsort(__base,__nmemb,0x10,compare_words);
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_001004c1:
  do {
    if (*local_48 == '\n') {
      if (pcVar3 < local_48) goto LAB_001004e0;
    }
    else {
      local_48 = local_48 + 1;
      if (local_48 != local_40) goto LAB_001004c1;
LAB_001004e0:
      if (param_2[1] == __nmemb) {
        __base = (void *)xpalloc(__base,param_2 + 1,1,0xffffffffffffffff,0x10);
        __nmemb = param_2[2];
        *param_2 = (long)__base;
      }
      puVar2 = (undefined8 *)(__nmemb * 0x10 + (long)__base);
      *puVar2 = pcVar3;
      puVar2[1] = (long)local_48 - (long)pcVar3;
      param_2[2] = __nmemb + 1;
      __nmemb = __nmemb + 1;
    }
    if ((local_40 <= local_48) || (local_48 = local_48 + 1, pcVar3 = local_48, local_40 <= local_48)
       ) goto LAB_0010050a;
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void print_field(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  char *pcVar3;
  uint uVar4;
  
  if (param_2 <= param_1) {
    return;
  }
  do {
    bVar1 = *param_1;
    uVar4 = (uint)bVar1;
    if (edited_flag[uVar4] == '\0') {
LAB_001005d0:
      pbVar2 = (byte *)_stdout->_IO_write_ptr;
      if (pbVar2 < _stdout->_IO_write_end) {
        _stdout->_IO_write_ptr = (char *)(pbVar2 + 1);
        *pbVar2 = bVar1;
      }
      else {
        __overflow(_stdout,uVar4);
      }
    }
    else if (bVar1 == 0x5c) {
      fwrite_unlocked("\\backslash{}",1,0xc,_stdout);
    }
    else if ((char)bVar1 < ']') {
      if (bVar1 != 0x22) {
        if ((byte)(bVar1 - 0x23) < 4) goto LAB_001005a8;
        goto LAB_0010061c;
      }
      pcVar3 = _stdout->_IO_write_ptr;
      if (pcVar3 < _stdout->_IO_write_end) {
        _stdout->_IO_write_ptr = pcVar3 + 1;
        *pcVar3 = '\"';
      }
      else {
        __overflow(_stdout,0x22);
      }
      pcVar3 = _stdout->_IO_write_ptr;
      if (pcVar3 < _stdout->_IO_write_end) {
        _stdout->_IO_write_ptr = pcVar3 + 1;
        *pcVar3 = '\"';
      }
      else {
        __overflow(_stdout,0x22);
      }
    }
    else if ((uVar4 - 0x7b & 0xfd) == 0) {
      __printf_chk(2,"$\\%c$");
    }
    else {
      if (bVar1 == 0x5f) {
LAB_001005a8:
        pcVar3 = _stdout->_IO_write_ptr;
        if (pcVar3 < _stdout->_IO_write_end) {
          _stdout->_IO_write_ptr = pcVar3 + 1;
          *pcVar3 = '\\';
        }
        else {
          __overflow(_stdout,0x5c);
        }
        goto LAB_001005d0;
      }
LAB_0010061c:
      pcVar3 = _stdout->_IO_write_ptr;
      if (pcVar3 < _stdout->_IO_write_end) {
        _stdout->_IO_write_ptr = pcVar3 + 1;
        *pcVar3 = ' ';
      }
      else {
        __overflow(_stdout,0x20);
      }
    }
    param_1 = param_1 + 1;
    if (param_2 == param_1) {
      return;
    }
  } while( true );
}



ulong compare_occurs(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = compare_words();
  if ((int)uVar1 == 0) {
    uVar1 = (ulong)((uint)(*param_2 < *param_1) - (uint)(*param_1 < *param_2));
  }
  return uVar1;
}



undefined8 search_table_isra_0(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = 0;
  while( true ) {
    lVar2 = param_3;
    do {
      param_3 = lVar2;
      if (param_3 <= lVar3) {
        return 0;
      }
      lVar2 = (param_3 >> 1) + (lVar3 >> 1) + (ulong)((uint)param_3 & (uint)lVar3 & 1);
      iVar1 = compare_words(param_1,lVar2 * 0x10 + param_2);
    } while (iVar1 < 0);
    if (iVar1 == 0) break;
    lVar3 = lVar2 + 1;
  }
  return 1;
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
    goto LAB_0010082a;
  }
  uVar3 = dcgettext(0,
                    "Usage: %s [OPTION]... [INPUT]...   (without -G)\n  or:  %s -G [OPTION]... [INPUT [OUTPUT]]\n"
                    ,5);
  __printf_chk(2,uVar3,uVar5,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "Output a permuted index, including context, of the words in the input files.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"\nWith no FILE, or when FILE is -, read standard input.\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -A, --auto-reference           output automatically generated references\n  -G, --traditional              behave more like System V \'ptx\'\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -F, --flag-truncation=STRING   use STRING for flagging line truncations.\n                                 The default is \'/\'\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -M, --macro-name=STRING        macro name to use instead of \'xx\'\n  -O, --format=roff              generate output as roff directives\n  -R, --right-side-refs          put references at right, not counted in -w\n  -S, --sentence-regexp=REGEXP   for end of lines or end of sentences\n  -T, --format=tex               generate output as TeX directives\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -W, --word-regexp=REGEXP       use REGEXP to match each keyword\n  -b, --break-file=FILE          word break characters in this FILE\n  -f, --ignore-case              fold lower case to upper case for sorting\n  -g, --gap-size=NUMBER          gap size in columns between output fields\n  -i, --ignore-file=FILE         read ignore word list from FILE\n  -o, --only-file=FILE           read only word list from this FILE\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -r, --references               first field of each line is a reference\n  -t, --typeset-mode               - not implemented -\n  -w, --width=NUMBER             output width in columns, reference excluded\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pcVar4 = "[";
  local_a8 = &_LC7;
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
    iVar2 = strcmp("ptx",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)ppuVar6 + 0x10);
    ppuVar6 = (undefined **)((long)ppuVar6 + 0x10);
  } while (pcVar4 != (char *)0x0);
  puVar7 = *(undefined **)((long)ppuVar6 + 8);
  if (puVar7 == (undefined *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    puVar7 = &_LC8;
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) goto LAB_00100aed;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC8);
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
LAB_00100aed:
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
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC8);
    if (puVar7 == &_LC8) {
      pcVar4 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,puVar7,pcVar4);
LAB_0010082a:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined8 main(int param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  ushort *puVar3;
  undefined2 *puVar4;
  ushort *puVar5;
  byte bVar6;
  ushort *puVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  ushort uVar15;
  ushort uVar16;
  ushort uVar17;
  ushort uVar18;
  ushort uVar19;
  ushort uVar20;
  ushort uVar21;
  ushort uVar22;
  ushort uVar23;
  ushort uVar24;
  ushort uVar25;
  ushort uVar26;
  ushort uVar27;
  ushort uVar28;
  ushort uVar29;
  ushort uVar30;
  ushort uVar31;
  byte *pbVar32;
  byte *pbVar33;
  char cVar34;
  int iVar35;
  int iVar36;
  __int32_t **pp_Var37;
  undefined8 *puVar38;
  ushort **ppuVar39;
  size_t sVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  byte *pbVar43;
  byte *pbVar44;
  byte *pbVar45;
  int *piVar46;
  undefined1 *puVar47;
  byte *pbVar48;
  byte *pbVar49;
  byte *pbVar50;
  byte *pbVar51;
  char cVar52;
  long lVar53;
  char *pcVar54;
  char cVar55;
  byte *pbVar56;
  long lVar57;
  byte *pbVar58;
  long lVar59;
  long lVar60;
  byte *pbVar61;
  long in_FS_OFFSET;
  bool bVar62;
  byte bVar63;
  ushort uVar64;
  ushort uVar65;
  ushort uVar66;
  ushort uVar67;
  ushort uVar68;
  ushort uVar69;
  ushort uVar70;
  ushort uVar71;
  ushort uVar72;
  ushort uVar73;
  ushort uVar74;
  ushort uVar75;
  ushort uVar76;
  ushort uVar77;
  ushort uVar78;
  ushort uVar79;
  long *local_130;
  byte *local_128;
  byte *local_120;
  long local_110;
  long local_100;
  byte *local_c8;
  byte *local_c0;
  byte *local_b8;
  byte *local_b0;
  byte *local_a8;
  byte *local_a0;
  byte *local_98;
  byte *local_90;
  byte *local_78;
  byte *local_70;
  byte *local_68;
  byte *pbStack_60;
  undefined1 local_58 [24];
  long local_40;
  
  bVar63 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  pbVar48 = gap_size;
  pbVar43 = line_width;
  do {
    line_width = pbVar43;
    gap_size = pbVar48;
    iVar35 = getopt_long(param_1,param_2,"AF:GM:ORS:TW:b:i:fg:o:trw:");
    if (iVar35 == -1) {
      if (_optind == param_1) {
        input_file_name = (undefined8 *)xmalloc(8);
        file_line_count = xmalloc(8);
        text_buffers = xmalloc(0x10);
        number_input_files = 1;
        *input_file_name = 0;
        break;
      }
      if (gnu_extensions != 0) {
        number_input_files = param_1 - _optind;
        input_file_name = (undefined8 *)xnmalloc((long)number_input_files,8);
        file_line_count = xnmalloc((long)number_input_files,8);
        text_buffers = xnmalloc((long)number_input_files,0x10);
        puVar38 = input_file_name;
        lVar57 = (long)number_input_files;
        if (0 < number_input_files) {
          lVar60 = (long)_optind;
          lVar53 = (long)(_optind + 1);
          do {
            pcVar54 = (char *)param_2[lVar53 + -1];
            if (*pcVar54 == '\0') {
              pcVar54 = (char *)0x0;
            }
            else {
              iVar35 = strcmp(pcVar54,"-");
              if (iVar35 == 0) {
                pcVar54 = (char *)0x0;
              }
            }
            puVar38[(lVar53 + -1) - lVar60] = pcVar54;
            _optind = (int)lVar53;
            bVar62 = lVar53 != lVar57 + lVar60;
            lVar53 = lVar53 + 1;
          } while (bVar62);
        }
        break;
      }
      number_input_files = 1;
      input_file_name = (undefined8 *)xmalloc(8);
      file_line_count = xmalloc(8);
      text_buffers = xmalloc(0x10);
      iVar35 = _optind;
      lVar57 = (long)_optind;
      pcVar54 = (char *)param_2[lVar57];
      if ((*pcVar54 == '\0') || (iVar36 = strcmp(pcVar54,"-"), iVar36 == 0)) {
        *input_file_name = 0;
      }
      else {
        *input_file_name = pcVar54;
      }
      _optind = iVar35 + 1;
      if (param_1 <= _optind) break;
      lVar57 = freopen_safer(param_2[lVar57 + 1],&_LC46,_stdout);
      if (lVar57 == 0) {
        uVar41 = quotearg_n_style_colon(0,3,param_2[_optind]);
        piVar46 = __errno_location();
        error(1,*piVar46,&_LC4,uVar41);
        goto LAB_001046dd;
      }
      _optind = _optind + 1;
      if (param_1 <= _optind) break;
      uVar41 = quote(param_2[_optind]);
      uVar42 = dcgettext(0,"extra operand %s",5);
      error(0,0,uVar42,uVar41);
      goto switchD_001021c6_caseD_b;
    }
    if (0x77 < iVar35) goto switchD_001021c6_caseD_b;
    if (iVar35 < 10) {
      if (iVar35 == -0x83) {
        uVar41 = proper_name_lite("F. Pinard",&_LC43);
        version_etc(_stdout,&_LC8,"GNU coreutils",_Version,uVar41,0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar35 == -0x82) {
        usage(0);
        goto LAB_0010309c;
      }
      goto switchD_001021c6_caseD_b;
    }
    pbVar48 = gap_size;
    pbVar43 = line_width;
    switch(iVar35) {
    case 10:
      lVar57 = __xargmatch_internal("--format",_optarg,format_args,&format_vals,4,_argmatch_die,1);
      output_format = *(uint *)((long)&format_vals + lVar57 * 4);
      pbVar48 = gap_size;
      pbVar43 = line_width;
      break;
    default:
switchD_001021c6_caseD_b:
      usage(1);
LAB_0010303b:
      uVar41 = quote(_optarg);
      pcVar54 = "invalid gap width: %s";
LAB_00103056:
      do {
        uVar42 = dcgettext(0,pcVar54,5);
        error(1,0,uVar42,uVar41);
LAB_00103071:
        uVar41 = quote();
        pcVar54 = "invalid line width: %s";
      } while( true );
    case 0x41:
      auto_reference = '\x01';
      break;
    case 0x46:
      truncation_string = _optarg;
      unescape_string();
      pbVar48 = gap_size;
      pbVar43 = line_width;
      break;
    case 0x47:
      gnu_extensions = 0;
      break;
    case 0x4d:
      macro_name = _optarg;
      break;
    case 0x4f:
      output_format = 2;
      break;
    case 0x52:
      right_reference = '\x01';
      break;
    case 0x53:
      context_regex = _optarg;
      unescape_string();
      pbVar48 = gap_size;
      pbVar43 = line_width;
      break;
    case 0x54:
      output_format = 3;
      break;
    case 0x57:
      word_regex = _optarg;
      unescape_string();
      pbVar48 = gap_size;
      pbVar43 = line_width;
      if (*word_regex == '\0') {
        word_regex = (char *)0x0;
      }
      break;
    case 0x62:
      break_file = _optarg;
      break;
    case 0x66:
      ignore_case = '\x01';
      break;
    case 0x67:
      iVar35 = xstrtoimax(_optarg,0,0,&local_68);
      if ((iVar35 != 0) || (pbVar48 = local_68, pbVar43 = line_width, (long)local_68 < 1))
      goto LAB_0010303b;
      break;
    case 0x69:
      ignore_file = _optarg;
      break;
    case 0x6f:
      only_file = _optarg;
      break;
    case 0x72:
      input_reference = '\x01';
      break;
    case 0x74:
      break;
    case 0x77:
      iVar35 = xstrtoimax(_optarg,0,0,&local_68);
      if (iVar35 != 0) goto LAB_00103071;
      pbVar48 = gap_size;
      pbVar43 = local_68;
      if ((long)local_68 < 1) goto LAB_00103071;
    }
  } while( true );
  if (output_format == 0) {
    output_format = 2 - gnu_extensions;
  }
  if (ignore_case != '\0') {
    pp_Var37 = __ctype_toupper_loc();
    lVar57 = 0;
    puVar47 = &folded_chars;
    do {
      puVar1 = (undefined4 *)((long)*pp_Var37 + lVar57);
      lVar57 = lVar57 + 4;
      *puVar47 = (char)*puVar1;
      puVar47 = puVar47 + 1;
    } while (lVar57 != 0x400);
  }
  if (context_regex == (char *)0x0) {
    if (gnu_extensions != 0) {
LAB_0010309c:
      if (input_reference == '\0') {
        context_regex = "[.?!][]\"\')}]*\\($\\|\t\\|  \\)[ \t\n]*";
        goto LAB_00102f67;
      }
    }
    context_regex = "\n";
  }
  else if (*context_regex == '\0') {
    context_regex = (char *)0x0;
    goto LAB_001025d1;
  }
LAB_00102f67:
  compile_regex(&context_regex);
LAB_001025d1:
  if (word_regex == (char *)0x0) goto LAB_00102ec8;
  compile_regex(&word_regex);
  if (break_file != (char *)0x0) goto LAB_00102ed8;
LAB_001025fb:
  if ((ignore_file != (char *)0x0) &&
     (digest_word_file(ignore_file,&ignore_table), _DAT_00100e70 == 0)) {
    ignore_file = (char *)0x0;
  }
  if ((only_file != (char *)0x0) && (digest_word_file(only_file,&only_table), _DAT_00100e50 == 0)) {
    only_file = (char *)0x0;
  }
  lVar57 = 0;
  number_of_occurs = 0;
  total_line_count = 0;
  maximum_word_length = (byte *)0x0;
  reference_max_width = 0;
  if (0 < number_input_files) {
LAB_00102684:
    lVar53 = lVar57 * 8;
    swallow_file_in_memory(input_file_name[lVar57]);
    puVar38 = (undefined8 *)(text_buffers + lVar57 * 0x10);
    local_128 = (byte *)*puVar38;
    pbVar48 = local_128;
    if (input_reference == '\0') {
      local_110 = 0;
      pbVar43 = (byte *)puVar38[1];
      pbVar44 = local_128;
      if (pbVar43 <= local_128) goto LAB_00102d5c;
      goto joined_r0x00102766;
    }
    pbVar43 = (byte *)puVar38[1];
    if (local_128 < pbVar43) {
      ppuVar39 = __ctype_b_loc();
      pbVar49 = local_128;
      do {
        if ((*(byte *)((long)*ppuVar39 + (ulong)*pbVar49 * 2 + 1) & 0x20) != 0) {
          local_110 = (long)pbVar49 - (long)local_128;
          pbVar44 = pbVar49;
          if (pbVar43 <= pbVar49) goto joined_r0x00102766;
          goto LAB_00102729;
        }
        pbVar49 = pbVar49 + 1;
      } while (pbVar49 != pbVar43);
      local_110 = (long)pbVar43 - (long)local_128;
      pbVar44 = pbVar43;
      goto joined_r0x00102766;
    }
    goto LAB_00102d5c;
  }
  goto LAB_00102d9a;
  while (pbVar49 = pbVar49 + 1, pbVar44 = pbVar43, pbVar49 != pbVar43) {
LAB_00102729:
    pbVar44 = pbVar49;
    if ((*(byte *)((long)*ppuVar39 + (ulong)*pbVar49 * 2 + 1) & 0x20) == 0) break;
  }
joined_r0x00102766:
  do {
    pbVar49 = pbVar43;
    if ((context_regex != (char *)0x0) &&
       (iVar35 = (int)pbVar43 - (int)pbVar48,
       iVar35 = re_search((re_pattern_buffer *)&DAT_00101248,(char *)pbVar48,iVar35,0,iVar35,
                          (re_registers *)context_regs), iVar35 != -1)) {
      if (iVar35 == 0) {
        uVar41 = quote(context_regex);
        pcVar54 = "error: regular expression has a match of length zero: %s";
        goto LAB_00103056;
      }
      if (iVar35 == -2) goto LAB_00102ec3;
      pbVar49 = pbVar48 + *(int *)context_regs._16_8_;
    }
    local_120 = pbVar48;
    pbVar43 = pbVar49;
    if (pbVar48 < pbVar49) {
      ppuVar39 = __ctype_b_loc();
      do {
        if ((*(byte *)((long)*ppuVar39 + (ulong)pbVar43[-1] * 2 + 1) & 0x20) == 0) break;
        pbVar43 = pbVar43 + -1;
      } while (pbVar48 != pbVar43);
    }
joined_r0x00102803:
    pbVar50 = pbVar48;
    if (word_regex == (char *)0x0) {
      do {
        if (pbVar50 < pbVar43) {
          while (*(char *)((long)&word_fastmap + (ulong)*pbVar50) == '\0') {
            pbVar50 = pbVar50 + 1;
            if (pbVar43 == pbVar50) goto LAB_00102c40;
          }
          if (pbVar43 == pbVar50) goto LAB_00102c40;
          pbVar48 = pbVar50;
          if (pbVar50 < pbVar43) goto LAB_00102a05;
        }
        else if (pbVar43 == pbVar50) goto LAB_00102c40;
        pbVar50 = pbVar50 + 1;
      } while( true );
    }
    iVar35 = (int)pbVar43 - (int)pbVar48;
    iVar35 = re_search((re_pattern_buffer *)&DAT_001010e8,(char *)pbVar48,iVar35,0,iVar35,
                       (re_registers *)word_regs);
    if (iVar35 == -2) goto LAB_00102ec3;
    if (iVar35 != -1) {
      pbVar50 = pbVar48 + *(int *)word_regs._8_8_;
      pbVar58 = pbVar48 + *(int *)word_regs._16_8_;
      goto LAB_00102858;
    }
LAB_00102c40:
    pbVar43 = (byte *)puVar38[1];
    pbVar48 = pbVar49;
  } while (pbVar49 < pbVar43);
LAB_00102d5c:
  iVar35 = number_input_files;
  lVar57 = lVar57 + 1;
  total_line_count = total_line_count + 1;
  *(long *)(file_line_count + lVar53) = total_line_count;
  if (iVar35 <= (int)lVar57) goto code_r0x00102d8a;
  goto LAB_00102684;
  while (pbVar48 = pbVar48 + 1, pbVar58 = pbVar43, pbVar43 != pbVar48) {
LAB_00102a05:
    if (*(char *)((long)&word_fastmap + (ulong)*pbVar48) == '\0') {
      if (pbVar50 != pbVar48) goto LAB_00102861;
      goto LAB_00102a20;
    }
  }
LAB_00102858:
  pbVar48 = pbVar58;
  if (pbVar50 == pbVar58) {
LAB_00102a20:
    pbVar48 = pbVar48 + 1;
    goto joined_r0x00102803;
  }
LAB_00102861:
  cVar52 = input_reference;
  pbStack_60 = pbVar48 + -(long)pbVar50;
  if ((long)maximum_word_length < (long)pbStack_60) {
    maximum_word_length = pbStack_60;
  }
  local_68 = pbVar50;
  if (input_reference != '\0') {
    if (pbVar44 < pbVar50) {
      cVar34 = '\0';
      pbVar58 = pbVar44;
      lVar60 = total_line_count;
      do {
        pbVar51 = pbVar58 + 1;
        pbVar44 = pbVar51;
        if (*pbVar58 == 10) {
          lVar60 = lVar60 + 1;
          pbVar61 = (byte *)puVar38[1];
          local_128 = pbVar51;
          cVar34 = cVar52;
          if (pbVar51 < pbVar61) {
            ppuVar39 = __ctype_b_loc();
            pbVar56 = pbVar51;
            do {
              pbVar44 = pbVar56;
              if ((*(byte *)((long)*ppuVar39 + (ulong)*pbVar44 * 2 + 1) & 0x20) != 0) {
                local_110 = (long)pbVar44 - (long)pbVar51;
                goto LAB_00102a93;
              }
              pbVar56 = pbVar44 + 1;
            } while (pbVar44 + 1 != pbVar61);
            local_110 = (long)pbVar44 - (long)pbVar58;
            pbVar44 = pbVar61;
          }
          else {
            local_110 = 0;
          }
        }
LAB_00102a93:
        pbVar58 = pbVar44;
      } while (pbVar44 < pbVar50);
      if (cVar34 != '\0') {
        total_line_count = lVar60;
      }
    }
    if (pbVar50 < pbVar44) goto joined_r0x00102803;
  }
  if (((ignore_file != (char *)0x0) &&
      (cVar34 = search_table_isra_0(&local_68,ignore_table,_DAT_00100e70), cVar34 != '\0')) ||
     ((only_file != (char *)0x0 &&
      (cVar34 = search_table_isra_0(&local_68,only_table,_DAT_00100e50), cVar34 == '\0'))))
  goto joined_r0x00102803;
  if (number_of_occurs == occurs_alloc) {
    occurs_table = (undefined8 *)xpalloc(occurs_table,&occurs_alloc,1,0xffffffffffffffff);
    cVar52 = input_reference;
  }
  cVar34 = auto_reference;
  lVar60 = total_line_count;
  sVar40 = number_of_occurs;
  puVar2 = occurs_table + number_of_occurs * 6;
  if (auto_reference == '\0') {
    if (cVar52 == '\0') goto LAB_00102964;
    puVar2[4] = (long)local_128 - (long)pbVar50;
    if (reference_max_width < local_110) {
      reference_max_width = local_110;
    }
  }
  else {
    lVar59 = total_line_count;
    if (pbVar44 < pbVar50) {
      cVar55 = '\0';
      do {
        while (pbVar58 = pbVar44 + 1, *pbVar44 != 10) {
LAB_00102b50:
          pbVar44 = pbVar58;
          if (pbVar50 <= pbVar58) goto LAB_00102bb0;
        }
        lVar59 = lVar59 + 1;
        pbVar51 = (byte *)puVar38[1];
        local_128 = pbVar58;
        cVar55 = cVar34;
        if (pbVar51 <= pbVar58) goto LAB_00102b50;
        ppuVar39 = __ctype_b_loc();
        pbVar44 = pbVar58;
        do {
          if ((*(byte *)((long)*ppuVar39 + (ulong)*pbVar44 * 2 + 1) & 0x20) != 0) break;
          pbVar44 = pbVar44 + 1;
        } while (pbVar44 != pbVar51);
      } while (pbVar44 < pbVar50);
LAB_00102bb0:
      if (cVar55 == '\0') {
        puVar2[4] = lVar60;
        goto LAB_0010294f;
      }
    }
    total_line_count = lVar59;
    puVar2[4] = total_line_count;
  }
LAB_0010294f:
  if (((local_128 == local_120) && (cVar52 != '\0')) && (local_120 < pbVar43)) {
    ppuVar39 = __ctype_b_loc();
    do {
      if ((*(byte *)((long)*ppuVar39 + (ulong)*local_120 * 2 + 1) & 0x20) != 0) {
        if (local_120 < pbVar43) goto LAB_00102d09;
        break;
      }
      local_120 = local_120 + 1;
    } while (pbVar43 != local_120);
  }
LAB_00102964:
  number_of_occurs = sVar40 + 1;
  *puVar2 = local_68;
  puVar2[1] = pbStack_60;
  puVar2[2] = (long)local_120 - (long)pbVar50;
  puVar2[3] = (long)pbVar43 - (long)pbVar50;
  *(int *)(puVar2 + 5) = (int)lVar57;
  goto joined_r0x00102803;
  while (local_120 = local_120 + 1, pbVar43 != local_120) {
LAB_00102d09:
    if ((*(byte *)((long)*ppuVar39 + (ulong)*local_120 * 2 + 1) & 0x20) == 0) break;
  }
  goto LAB_00102964;
code_r0x00102d8a:
  if (number_of_occurs != 0) {
    qsort(occurs_table,number_of_occurs,0x30,compare_occurs);
  }
LAB_00102d9a:
  if (auto_reference == '\0') {
LAB_00103118:
    if (input_reference == '\0') goto LAB_0010312c;
  }
  else {
    reference_max_width = 0;
    for (lVar57 = 0; (int)lVar57 < number_input_files; lVar57 = lVar57 + 1) {
      iVar35 = __sprintf_chk(local_58,2,0x15,&_LC51);
      lVar53 = (long)iVar35;
      if ((char *)input_file_name[lVar57] != (char *)0x0) {
        sVar40 = strlen((char *)input_file_name[lVar57]);
        lVar53 = (long)iVar35 + sVar40;
      }
      if (reference_max_width < lVar53) {
        reference_max_width = lVar53;
      }
    }
    lVar57 = reference_max_width + 2;
    reference_max_width = reference_max_width + 1;
    reference = (byte *)xmalloc(lVar57);
    if (auto_reference == '\0') goto LAB_00103118;
  }
  if ((right_reference == '\0') &&
     (line_width = line_width + -(long)(gap_size + reference_max_width), (long)line_width < 0)) {
    line_width = (byte *)0x0;
  }
LAB_0010312c:
  lVar57 = (long)line_width >> 1;
  lVar53 = lVar57 - (long)gap_size;
  before_max_width = lVar53;
  half_line_width = lVar57;
  if ((truncation_string == (undefined *)0x0) || (*truncation_string == '\0')) {
    truncation_string = (undefined *)0x0;
  }
  else {
    keyafter_max_width = lVar57;
    truncation_string_length = strlen(truncation_string);
  }
  if (gnu_extensions == 0) {
    lVar53 = -(truncation_string_length * 2 + 1);
  }
  else {
    before_max_width = lVar53 + truncation_string_length * -2;
    if (before_max_width < 0) {
      before_max_width = 0;
    }
    lVar53 = truncation_string_length * -2;
  }
  keyafter_max_width = lVar57 + lVar53;
  ppuVar39 = __ctype_b_loc();
  uVar31 = _UNK_00104b7e;
  uVar30 = _UNK_00104b7c;
  uVar29 = _UNK_00104b7a;
  uVar28 = _UNK_00104b78;
  uVar27 = _UNK_00104b76;
  uVar26 = _UNK_00104b74;
  uVar25 = _UNK_00104b72;
  uVar24 = __LC54;
  uVar23 = _UNK_00104b6e;
  uVar22 = _UNK_00104b6c;
  uVar21 = _UNK_00104b6a;
  uVar20 = _UNK_00104b68;
  uVar19 = _UNK_00104b66;
  uVar18 = _UNK_00104b64;
  uVar17 = _UNK_00104b62;
  uVar16 = __LC53;
  uVar15 = _UNK_00104b5e;
  uVar14 = _UNK_00104b5c;
  uVar13 = _UNK_00104b5a;
  uVar12 = _UNK_00104b58;
  uVar11 = _UNK_00104b56;
  uVar10 = _UNK_00104b54;
  uVar9 = _UNK_00104b52;
  uVar8 = __LC52;
  puVar7 = *ppuVar39;
  lVar57 = 0;
  do {
    puVar5 = puVar7 + lVar57 + 8;
    puVar3 = puVar7 + lVar57;
    uVar64 = ~-(ushort)((*puVar3 & uVar8) == 0) & uVar16 & uVar24;
    uVar65 = ~-(ushort)((puVar3[1] & uVar9) == 0) & uVar17 & uVar25;
    uVar66 = ~-(ushort)((puVar3[2] & uVar10) == 0) & uVar18 & uVar26;
    uVar67 = ~-(ushort)((puVar3[3] & uVar11) == 0) & uVar19 & uVar27;
    uVar68 = ~-(ushort)((puVar3[4] & uVar12) == 0) & uVar20 & uVar28;
    uVar69 = ~-(ushort)((puVar3[5] & uVar13) == 0) & uVar21 & uVar29;
    uVar70 = ~-(ushort)((puVar3[6] & uVar14) == 0) & uVar22 & uVar30;
    uVar71 = ~-(ushort)((puVar3[7] & uVar15) == 0) & uVar23 & uVar31;
    uVar72 = ~-(ushort)((*puVar5 & uVar8) == 0) & uVar16 & uVar24;
    uVar73 = ~-(ushort)((puVar5[1] & uVar9) == 0) & uVar17 & uVar25;
    uVar74 = ~-(ushort)((puVar5[2] & uVar10) == 0) & uVar18 & uVar26;
    uVar75 = ~-(ushort)((puVar5[3] & uVar11) == 0) & uVar19 & uVar27;
    uVar76 = ~-(ushort)((puVar5[4] & uVar12) == 0) & uVar20 & uVar28;
    uVar77 = ~-(ushort)((puVar5[5] & uVar13) == 0) & uVar21 & uVar29;
    uVar78 = ~-(ushort)((puVar5[6] & uVar14) == 0) & uVar22 & uVar30;
    uVar79 = ~-(ushort)((puVar5[7] & uVar15) == 0) & uVar23 & uVar31;
    edited_flag[lVar57] =
         (0 < (short)uVar64) * ((short)uVar64 < 0x100) * (char)uVar64 - (0xff < (short)uVar64);
    edited_flag[lVar57 + 1] =
         (0 < (short)uVar65) * ((short)uVar65 < 0x100) * (char)uVar65 - (0xff < (short)uVar65);
    edited_flag[lVar57 + 2] =
         (0 < (short)uVar66) * ((short)uVar66 < 0x100) * (char)uVar66 - (0xff < (short)uVar66);
    edited_flag[lVar57 + 3] =
         (0 < (short)uVar67) * ((short)uVar67 < 0x100) * (char)uVar67 - (0xff < (short)uVar67);
    edited_flag[lVar57 + 4] =
         (0 < (short)uVar68) * ((short)uVar68 < 0x100) * (char)uVar68 - (0xff < (short)uVar68);
    edited_flag[lVar57 + 5] =
         (0 < (short)uVar69) * ((short)uVar69 < 0x100) * (char)uVar69 - (0xff < (short)uVar69);
    edited_flag[lVar57 + 6] =
         (0 < (short)uVar70) * ((short)uVar70 < 0x100) * (char)uVar70 - (0xff < (short)uVar70);
    edited_flag[lVar57 + 7] =
         (0 < (short)uVar71) * ((short)uVar71 < 0x100) * (char)uVar71 - (0xff < (short)uVar71);
    edited_flag[lVar57 + 8] =
         (0 < (short)uVar72) * ((short)uVar72 < 0x100) * (char)uVar72 - (0xff < (short)uVar72);
    edited_flag[lVar57 + 9] =
         (0 < (short)uVar73) * ((short)uVar73 < 0x100) * (char)uVar73 - (0xff < (short)uVar73);
    edited_flag[lVar57 + 10] =
         (0 < (short)uVar74) * ((short)uVar74 < 0x100) * (char)uVar74 - (0xff < (short)uVar74);
    edited_flag[lVar57 + 0xb] =
         (0 < (short)uVar75) * ((short)uVar75 < 0x100) * (char)uVar75 - (0xff < (short)uVar75);
    edited_flag[lVar57 + 0xc] =
         (0 < (short)uVar76) * ((short)uVar76 < 0x100) * (char)uVar76 - (0xff < (short)uVar76);
    edited_flag[lVar57 + 0xd] =
         (0 < (short)uVar77) * ((short)uVar77 < 0x100) * (char)uVar77 - (0xff < (short)uVar77);
    edited_flag[lVar57 + 0xe] =
         (0 < (short)uVar78) * ((short)uVar78 < 0x100) * (char)uVar78 - (0xff < (short)uVar78);
    edited_flag[lVar57 + 0xf] =
         (0 < (short)uVar79) * ((short)uVar79 < 0x100) * (char)uVar79 - (0xff < (short)uVar79);
    lVar57 = lVar57 + 0x10;
  } while (lVar57 != 0x100);
  edited_flag[0xc] = 1;
  if (output_format == 2) {
    edited_flag[0x22] = 1;
  }
  else if (output_format == 3) {
    for (pbVar48 = &_LC38; *pbVar48 != 0; pbVar48 = pbVar48 + 1) {
      edited_flag[*pbVar48] = 1;
    }
  }
  tail_truncation = '\0';
  head_truncation = '\0';
  local_130 = occurs_table;
  local_100 = 0;
  _tail = (undefined1  [16])0x0;
  _head = (undefined1  [16])0x0;
  pbVar43 = local_78;
  pbVar48 = local_70;
  if ((long)number_of_occurs < 1) {
LAB_00104064:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return 0;
  }
LAB_001032a3:
  pbVar44 = (byte *)*local_130;
  pbVar51 = pbVar44 + local_130[1];
  pbVar61 = pbVar44 + local_130[3];
  puVar38 = (undefined8 *)((long)(int)local_130[5] * 0x10 + text_buffers);
  pbVar50 = (byte *)*puVar38;
  pbVar58 = (byte *)puVar38[1];
  lVar57 = local_130[2];
  pbVar49 = pbVar44 + lVar57;
  lVar53 = keyafter_max_width;
  keyafter = pbVar44;
  DAT_00100c88 = pbVar51;
  if (pbVar51 < pbVar61) {
    do {
      if (pbVar44 + lVar53 < pbVar51) break;
      DAT_00100c88 = pbVar51;
      if (word_regex == (char *)0x0) {
        if (*(char *)((long)&word_fastmap + (ulong)*pbVar51) == '\0') {
          pbVar51 = pbVar51 + 1;
        }
        else {
          if (pbVar61 <= pbVar51) break;
          do {
            pbVar51 = pbVar51 + 1;
            if (pbVar61 == pbVar51) goto LAB_001033a3;
          } while (*(char *)((long)&word_fastmap + (ulong)*pbVar51) != '\0');
        }
      }
      else {
        iVar35 = re_match((re_pattern_buffer *)&DAT_001010e8,(char *)pbVar51,
                          (int)pbVar61 - (int)pbVar51,0,(re_registers *)0x0);
        if (iVar35 == -2) goto LAB_00102ec3;
        if (iVar35 == -1) {
          iVar35 = 1;
        }
        pbVar51 = pbVar51 + iVar35;
        pbVar44 = keyafter;
        lVar53 = keyafter_max_width;
      }
    } while (pbVar51 < pbVar61);
LAB_001033a3:
    lVar57 = local_130[2];
  }
  if (pbVar51 <= keyafter + lVar53) {
    DAT_00100c88 = pbVar51;
  }
  keyafter_truncation = truncation_string != (undefined *)0x0 && DAT_00100c88 < pbVar61;
  pbVar44 = DAT_00100c88;
  if (keyafter < DAT_00100c88) {
    bVar62 = false;
    pbVar51 = pbVar43;
    pbVar43 = DAT_00100c88;
    do {
      pbVar43 = pbVar43 + -1;
      if ((*(byte *)((long)*ppuVar39 + (ulong)*pbVar43 * 2 + 1) & 0x20) == 0) {
        pbVar44 = DAT_00100c88;
        if (bVar62) {
          pbVar44 = pbVar51;
        }
        break;
      }
      bVar62 = true;
      pbVar51 = pbVar43;
      pbVar44 = pbVar43;
    } while (pbVar43 != keyafter);
  }
  DAT_00100c88 = pbVar44;
  pbVar44 = maximum_word_length + half_line_width;
  if (-(long)pbVar44 == lVar57 || -lVar57 < (long)pbVar44) {
    pbVar51 = keyafter + lVar57;
LAB_001034b1:
    DAT_00100ca8 = keyafter;
    before = pbVar51;
    pbVar44 = DAT_00100ca8;
    if (pbVar51 < keyafter) {
      bVar62 = false;
      pbVar56 = pbVar48;
      pbVar48 = keyafter;
      do {
        pbVar48 = pbVar48 + -1;
        if ((*(byte *)((long)*ppuVar39 + (ulong)*pbVar48 * 2 + 1) & 0x20) == 0) {
          pbVar44 = DAT_00100ca8;
          if (bVar62) {
            pbVar44 = pbVar56;
          }
          break;
        }
        bVar62 = true;
        pbVar56 = pbVar48;
        pbVar44 = pbVar48;
      } while (pbVar48 != pbVar51);
    }
  }
  else {
    pbVar51 = keyafter + -(long)pbVar44;
    if (word_regex != (char *)0x0) {
      iVar35 = re_match((re_pattern_buffer *)&DAT_001010e8,(char *)pbVar51,(int)pbVar44,0,
                        (re_registers *)0x0);
      if (iVar35 != -2) {
        if (iVar35 == -1) {
          iVar35 = 1;
        }
        pbVar51 = pbVar51 + iVar35;
        goto LAB_001034b1;
      }
LAB_00102ec3:
      matcher_error();
LAB_00102ec8:
      if (break_file == (char *)0x0) {
        if (gnu_extensions == 0) {
LAB_001046dd:
          puVar38 = &word_fastmap;
          for (lVar57 = 0x20; lVar57 != 0; lVar57 = lVar57 + -1) {
            *puVar38 = 0x101010101010101;
            puVar38 = puVar38 + (ulong)bVar63 * -2 + 1;
          }
          DAT_00100ec0 = 0;
          _DAT_00100ea9 = 0;
        }
        else {
          ppuVar39 = __ctype_b_loc();
          lVar57 = 0;
          pbVar48 = (byte *)&word_fastmap;
          do {
            puVar4 = (undefined2 *)((long)*ppuVar39 + lVar57);
            lVar57 = lVar57 + 2;
            *pbVar48 = (byte)((ushort)*puVar4 >> 10) & 1;
            pbVar48 = pbVar48 + 1;
          } while (lVar57 != 0x200);
        }
      }
      else {
LAB_00102ed8:
        swallow_file_in_memory(break_file,&local_68);
        puVar38 = &word_fastmap;
        for (lVar57 = 0x20; lVar57 != 0; lVar57 = lVar57 + -1) {
          *puVar38 = 0x101010101010101;
          puVar38 = puVar38 + (ulong)bVar63 * -2 + 1;
        }
        pbVar48 = local_68;
        if (local_68 < pbStack_60) {
          do {
            bVar6 = *pbVar48;
            pbVar48 = pbVar48 + 1;
            *(undefined1 *)((long)&word_fastmap + (ulong)bVar6) = 0;
          } while (pbVar48 != pbStack_60);
        }
        if (gnu_extensions == 0) {
          DAT_00100ec0 = 0;
          _DAT_00100ea9 = 0;
        }
        free(local_68);
      }
      goto LAB_001025fb;
    }
    if (*(char *)((long)&word_fastmap + (ulong)*pbVar51) == '\0') {
      pbVar51 = pbVar51 + 1;
      goto LAB_001034b1;
    }
    if (pbVar51 < keyafter) {
      do {
        if (*(char *)((long)&word_fastmap + (ulong)*pbVar51) == '\0') goto LAB_001034b1;
        pbVar51 = pbVar51 + 1;
      } while (keyafter != pbVar51);
    }
    DAT_00100ca8 = keyafter;
    before = pbVar51;
    pbVar44 = DAT_00100ca8;
  }
  DAT_00100ca8 = pbVar44;
  pbVar44 = before;
  lVar57 = before_max_width;
  pbVar51 = local_98;
  pbVar56 = DAT_00100ca8;
  if (before + before_max_width < DAT_00100ca8) {
    do {
      while (word_regex != (char *)0x0) {
        iVar35 = re_match((re_pattern_buffer *)&DAT_001010e8,(char *)before,
                          (int)pbVar56 - (int)before,0,(re_registers *)0x0);
        if (iVar35 == -2) goto LAB_00102ec3;
        if (iVar35 == -1) {
          iVar35 = 1;
        }
        lVar57 = before_max_width;
        pbVar56 = DAT_00100ca8;
        pbVar33 = before + iVar35;
LAB_00103590:
        before = pbVar33;
        if (pbVar56 <= before + lVar57) goto LAB_001035de;
      }
      if (*(char *)((long)&word_fastmap + (ulong)*before) != '\0') {
        bVar62 = false;
        pbVar45 = before;
        pbVar32 = pbVar51;
        pbVar33 = before;
        if (before < pbVar56) {
          do {
            pbVar51 = pbVar32;
            if (*(char *)((long)&word_fastmap + (ulong)*pbVar45) == '\0') {
              pbVar33 = before;
              if (bVar62) {
                pbVar33 = pbVar51;
              }
              break;
            }
            pbVar45 = pbVar45 + 1;
            bVar62 = true;
            pbVar32 = pbVar45;
            pbVar33 = pbVar56;
          } while (pbVar45 != pbVar56);
        }
        goto LAB_00103590;
      }
      before = before + 1;
    } while (before + lVar57 < pbVar56);
  }
LAB_001035de:
  local_98 = pbVar51;
  before_truncation = false;
  if (truncation_string != (undefined *)0x0) {
    pbVar51 = before;
    if (pbVar50 < before) {
      do {
        if ((*(byte *)((long)*ppuVar39 + (ulong)pbVar51[-1] * 2 + 1) & 0x20) == 0) break;
        pbVar51 = pbVar51 + -1;
      } while (pbVar50 != pbVar51);
    }
    before_truncation = pbVar49 < pbVar51;
  }
  pbVar51 = before;
  pbVar33 = before;
  if (before < pbVar58) {
    bVar62 = false;
    pbVar45 = local_b0;
    do {
      local_b0 = pbVar45;
      if ((*(byte *)((long)*ppuVar39 + (ulong)*pbVar51 * 2 + 1) & 0x20) == 0) {
        pbVar33 = before;
        if (bVar62) {
          pbVar33 = local_b0;
        }
        break;
      }
      pbVar51 = pbVar51 + 1;
      bVar62 = true;
      pbVar45 = pbVar51;
      pbVar33 = pbVar58;
    } while (pbVar58 != pbVar51);
  }
  before = pbVar33;
  lVar57 = (lVar57 - ((long)pbVar56 - (long)pbVar51)) - (long)gap_size;
  if (lVar57 < 1) {
    _tail = (undefined1  [16])0x0;
LAB_00103d9f:
    tail_truncation = '\0';
  }
  else {
    tail = DAT_00100c88;
    pbVar51 = DAT_00100c88;
    pbVar56 = tail;
    if (DAT_00100c88 < pbVar58) {
      bVar62 = false;
      pbVar56 = local_b8;
      do {
        local_b8 = pbVar56;
        if ((*(byte *)((long)*ppuVar39 + (ulong)*pbVar51 * 2 + 1) & 0x20) == 0) {
          pbVar56 = tail;
          if (bVar62) {
            pbVar56 = local_b8;
          }
          break;
        }
        pbVar51 = pbVar51 + 1;
        bVar62 = true;
        pbVar56 = pbVar51;
      } while (pbVar58 != pbVar51);
    }
    tail = pbVar56;
    DAT_00100cc8 = pbVar51;
    pbVar58 = tail;
    while ((pbVar51 < pbVar61 && (pbVar51 < pbVar58 + lVar57))) {
      DAT_00100cc8 = pbVar51;
      if (word_regex == (char *)0x0) {
        if (*(char *)((long)&word_fastmap + (ulong)*pbVar51) == '\0') {
          pbVar51 = pbVar51 + 1;
        }
        else {
          if (pbVar61 <= pbVar51) break;
          while (*(char *)((long)&word_fastmap + (ulong)*pbVar51) != '\0') {
            pbVar51 = pbVar51 + 1;
            if (pbVar61 == pbVar51) goto LAB_00103820;
          }
        }
      }
      else {
        iVar35 = re_match((re_pattern_buffer *)&DAT_001010e8,(char *)pbVar51,
                          (int)pbVar61 - (int)pbVar51,0,(re_registers *)0x0);
        if (iVar35 == -2) goto LAB_00102ec3;
        if (iVar35 == -1) {
          iVar35 = 1;
        }
        pbVar51 = pbVar51 + iVar35;
        pbVar58 = tail;
      }
    }
LAB_00103820:
    pbVar58 = tail;
    if (pbVar51 < tail + lVar57) {
      DAT_00100cc8 = pbVar51;
    }
    if (DAT_00100cc8 <= pbVar58) goto LAB_00103d9f;
    keyafter_truncation = '\0';
    tail_truncation = truncation_string != (undefined *)0x0 && DAT_00100cc8 < pbVar61;
    bVar62 = false;
    pbVar51 = local_a8;
    local_a8 = DAT_00100cc8;
    do {
      local_a8 = local_a8 + -1;
      if ((*(byte *)((long)*ppuVar39 + (ulong)*local_a8 * 2 + 1) & 0x20) == 0) {
        if (bVar62) {
          DAT_00100cc8 = pbVar51;
        }
        goto LAB_001038b9;
      }
      bVar62 = true;
      pbVar51 = local_a8;
    } while (local_a8 != pbVar58);
    DAT_00100cc8 = local_a8;
  }
LAB_001038b9:
  lVar57 = (keyafter_max_width - ((long)DAT_00100c88 - (long)keyafter)) - (long)gap_size;
  if (lVar57 < 1) {
    head_truncation = '\0';
    _head = (undefined1  [16])0x0;
  }
  else {
    DAT_00100c68 = before;
    pbVar58 = DAT_00100c68;
    if (pbVar50 < before) {
      bVar62 = false;
      pbVar51 = local_c0;
      local_c0 = before;
      do {
        local_c0 = local_c0 + -1;
        if ((*(byte *)((long)*ppuVar39 + (ulong)*local_c0 * 2 + 1) & 0x20) == 0) {
          pbVar58 = DAT_00100c68;
          if (bVar62) {
            pbVar58 = pbVar51;
          }
          break;
        }
        bVar62 = true;
        pbVar51 = local_c0;
        pbVar58 = local_c0;
      } while (local_c0 != pbVar50);
    }
    DAT_00100c68 = pbVar58;
    pbVar50 = DAT_00100c68;
    head = pbVar44;
    pbVar58 = local_a0;
    if (pbVar44 + lVar57 < pbVar50) {
      do {
        while (word_regex != (char *)0x0) {
          iVar35 = re_match((re_pattern_buffer *)&DAT_001010e8,(char *)pbVar44,
                            (int)pbVar50 - (int)pbVar44,0,(re_registers *)0x0);
          if (iVar35 == -2) goto LAB_00102ec3;
          if (iVar35 == -1) {
            iVar35 = 1;
          }
          pbVar44 = head + iVar35;
          pbVar50 = DAT_00100c68;
          head = pbVar44;
LAB_001039ad:
          if (pbVar50 <= pbVar44 + lVar57) goto LAB_001039fa;
        }
        if (*(char *)((long)&word_fastmap + (ulong)*pbVar44) != '\0') {
          bVar62 = false;
          pbVar51 = head;
          pbVar56 = pbVar58;
          pbVar44 = head;
          if (head < pbVar50) {
            do {
              pbVar58 = pbVar56;
              if (*(char *)((long)&word_fastmap + (ulong)*pbVar51) == '\0') {
                if (bVar62) {
                  head = pbVar58;
                  pbVar44 = pbVar58;
                }
                goto LAB_001039ad;
              }
              pbVar51 = pbVar51 + 1;
              bVar62 = true;
              pbVar56 = pbVar51;
            } while (pbVar51 != pbVar50);
            head = pbVar50;
            pbVar44 = pbVar50;
          }
          goto LAB_001039ad;
        }
        pbVar44 = pbVar44 + 1;
        head = pbVar44;
      } while (pbVar44 + lVar57 < pbVar50);
    }
LAB_001039fa:
    local_a0 = pbVar58;
    if (pbVar44 < pbVar50) {
      before_truncation = '\0';
    }
    head_truncation =
         pbVar44 < pbVar50 && (truncation_string != (undefined *)0x0 && pbVar49 < pbVar44);
    if (head < pbVar50) {
      bVar62 = false;
      pbVar49 = head;
      pbVar44 = local_c8;
      do {
        local_c8 = pbVar44;
        if ((*(byte *)((long)*ppuVar39 + (ulong)*pbVar49 * 2 + 1) & 0x20) == 0) {
          if (bVar62) {
            head = local_c8;
          }
          goto LAB_00103a6f;
        }
        pbVar49 = pbVar49 + 1;
        bVar62 = true;
        pbVar44 = pbVar49;
      } while (pbVar49 != pbVar50);
      head = pbVar49;
    }
  }
LAB_00103a6f:
  if (auto_reference == '\0') {
    if ((input_reference != '\0') &&
       (reference = keyafter + local_130[4], DAT_00100c48 = reference, reference < pbVar61)) {
      pbVar49 = reference;
      pbVar44 = local_90;
      cVar52 = '\0';
      do {
        local_90 = pbVar44;
        if ((*(byte *)((long)*ppuVar39 + (ulong)*pbVar49 * 2 + 1) & 0x20) != 0) {
          DAT_00100c48 = reference;
          if (cVar52 != '\0') {
            DAT_00100c48 = local_90;
          }
          break;
        }
        pbVar49 = pbVar49 + 1;
        DAT_00100c48 = pbVar61;
        pbVar44 = pbVar49;
        cVar52 = input_reference;
      } while (pbVar61 != pbVar49);
    }
  }
  else {
    pcVar54 = (char *)input_file_name[(int)local_130[5]];
    if (pcVar54 == (char *)0x0) {
      pcVar54 = "";
    }
    pcVar54 = stpcpy((char *)reference,pcVar54);
    iVar35 = __sprintf_chk(pcVar54,2,0xffffffffffffffff);
    DAT_00100c48 = (byte *)(pcVar54 + iVar35);
  }
  if (output_format == 2) {
    __printf_chk(2,".%s \"",macro_name);
    print_field(tail,DAT_00100cc8);
    if (tail_truncation != '\0') {
      fputs_unlocked(truncation_string,_stdout);
    }
    pcVar54 = _stdout->_IO_write_ptr;
    if (pcVar54 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = pcVar54 + 1;
      *pcVar54 = '\"';
    }
    else {
      __overflow(_stdout,0x22);
    }
    fwrite_unlocked(&_LC57,1,2,_stdout);
    if (before_truncation != '\0') {
      fputs_unlocked(truncation_string,_stdout);
    }
    print_field(before,DAT_00100ca8);
    pcVar54 = _stdout->_IO_write_ptr;
    if (pcVar54 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = pcVar54 + 1;
      *pcVar54 = '\"';
    }
    else {
      __overflow(_stdout,0x22);
    }
    fwrite_unlocked(&_LC57,1,2,_stdout);
    print_field(keyafter,DAT_00100c88);
    if (keyafter_truncation != '\0') {
      fputs_unlocked(truncation_string,_stdout);
    }
    pcVar54 = _stdout->_IO_write_ptr;
    if (pcVar54 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = pcVar54 + 1;
      *pcVar54 = '\"';
    }
    else {
      __overflow(_stdout,0x22);
    }
    fwrite_unlocked(&_LC57,1,2,_stdout);
    if (head_truncation != '\0') {
      fputs_unlocked(truncation_string,_stdout);
    }
    print_field(head,DAT_00100c68);
    pcVar54 = _stdout->_IO_write_ptr;
    if (pcVar54 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = pcVar54 + 1;
      *pcVar54 = '\"';
    }
    else {
      __overflow(_stdout,0x22);
    }
    if ((auto_reference != '\0') || (input_reference != '\0')) {
      fwrite_unlocked(&_LC57,1,2,_stdout);
      print_field(reference,DAT_00100c48);
      pcVar54 = _stdout->_IO_write_ptr;
      if (pcVar54 < _stdout->_IO_write_end) {
        _stdout->_IO_write_ptr = pcVar54 + 1;
        *pcVar54 = '\"';
      }
      else {
        __overflow(_stdout,0x22);
      }
    }
    goto LAB_00104026;
  }
  if (output_format < 3) {
    if (right_reference == '\0') {
      if (auto_reference == '\0') {
        print_field(reference,DAT_00100c48);
        for (pbVar49 = gap_size + (reference_max_width - ((long)DAT_00100c48 - (long)reference));
            0 < (long)pbVar49; pbVar49 = pbVar49 + -1) {
          pcVar54 = _stdout->_IO_write_ptr;
          if (pcVar54 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = pcVar54 + 1;
            *pcVar54 = ' ';
          }
          else {
            __overflow(_stdout,0x20);
          }
        }
      }
      else {
        print_field(reference,DAT_00100c48);
        pcVar54 = _stdout->_IO_write_ptr;
        if (pcVar54 < _stdout->_IO_write_end) {
          _stdout->_IO_write_ptr = pcVar54 + 1;
          *pcVar54 = ':';
        }
        else {
          __overflow(_stdout,0x3a);
        }
        pbVar49 = gap_size + (reference_max_width - ((long)DAT_00100c48 - (long)reference));
        while (pbVar49 = pbVar49 + -1, 0 < (long)pbVar49) {
          pcVar54 = _stdout->_IO_write_ptr;
          if (pcVar54 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = pcVar54 + 1;
            *pcVar54 = ' ';
          }
          else {
            __overflow(_stdout,0x20);
          }
        }
      }
    }
    if (tail < DAT_00100cc8) {
      print_field(tail,DAT_00100cc8);
      if (tail_truncation == '\0') {
        lVar57 = (half_line_width - (long)gap_size) - ((long)DAT_00100ca8 - (long)before);
        sVar40 = truncation_string_length;
        if (before_truncation != '\0') goto LAB_00104592;
        lVar57 = lVar57 - ((long)DAT_00100cc8 - (long)tail);
        sVar40 = 0;
      }
      else {
        fputs_unlocked(truncation_string,_stdout);
        lVar57 = (half_line_width - (long)gap_size) - ((long)DAT_00100ca8 - (long)before);
        sVar40 = truncation_string_length;
        if (before_truncation == '\0') {
          sVar40 = 0;
        }
LAB_00104592:
        lVar57 = (lVar57 - sVar40) - ((long)DAT_00100cc8 - (long)tail);
        sVar40 = truncation_string_length;
        if (tail_truncation == '\0') {
          sVar40 = 0;
        }
      }
      for (lVar57 = lVar57 - sVar40; 0 < lVar57; lVar57 = lVar57 + -1) {
        pcVar54 = _stdout->_IO_write_ptr;
        if (pcVar54 < _stdout->_IO_write_end) {
          _stdout->_IO_write_ptr = pcVar54 + 1;
          *pcVar54 = ' ';
        }
        else {
          __overflow(_stdout,0x20);
        }
      }
LAB_00103c2e:
      if (before_truncation != '\0') {
LAB_0010439c:
        fputs_unlocked(truncation_string,_stdout);
      }
    }
    else {
      lVar57 = (half_line_width - (long)gap_size) - ((long)DAT_00100ca8 - (long)before);
      if (before_truncation != '\0') {
        lVar57 = lVar57 - truncation_string_length;
        if (0 < lVar57) goto LAB_00103c08;
        goto LAB_0010439c;
      }
      if (0 < lVar57) {
LAB_00103c08:
        do {
          pcVar54 = _stdout->_IO_write_ptr;
          if (pcVar54 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = pcVar54 + 1;
            *pcVar54 = ' ';
          }
          else {
            __overflow(_stdout,0x20);
          }
          lVar57 = lVar57 + -1;
        } while (lVar57 != 0);
        goto LAB_00103c2e;
      }
    }
    print_field(before,DAT_00100ca8);
    pbVar49 = gap_size;
    if (0 < (long)gap_size) {
      do {
        pcVar54 = _stdout->_IO_write_ptr;
        if (pcVar54 < _stdout->_IO_write_end) {
          _stdout->_IO_write_ptr = pcVar54 + 1;
          *pcVar54 = ' ';
        }
        else {
          __overflow(_stdout,0x20);
        }
        pbVar49 = pbVar49 + -1;
      } while (pbVar49 != (byte *)0x0);
    }
    print_field(keyafter,DAT_00100c88);
    if (keyafter_truncation == '\0') {
      if (head < DAT_00100c68) {
        lVar57 = half_line_width - ((long)DAT_00100c88 - (long)keyafter);
        sVar40 = 0;
        goto LAB_001047c0;
      }
LAB_00103cb2:
      if (auto_reference != '\0') {
        if (right_reference == '\0') goto LAB_00104026;
LAB_001043df:
        sVar40 = 0;
        if (keyafter_truncation != '\0') {
          sVar40 = truncation_string_length;
        }
        for (lVar57 = (half_line_width - ((long)DAT_00100c88 - (long)keyafter)) - sVar40; 0 < lVar57
            ; lVar57 = lVar57 + -1) {
          pcVar54 = _stdout->_IO_write_ptr;
          if (pcVar54 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = pcVar54 + 1;
            *pcVar54 = ' ';
          }
          else {
            __overflow(_stdout,0x20);
          }
        }
        goto LAB_0010443a;
      }
      if (input_reference != '\0') {
        if (right_reference != '\0') goto LAB_001043df;
        goto LAB_00103cd9;
      }
    }
    else {
      fputs_unlocked(truncation_string,_stdout);
      if (DAT_00100c68 <= head) goto LAB_00103cb2;
      lVar57 = half_line_width - ((long)DAT_00100c88 - (long)keyafter);
      sVar40 = truncation_string_length;
      if (keyafter_truncation == '\0') {
        sVar40 = 0;
      }
LAB_001047c0:
      lVar57 = (lVar57 - sVar40) - ((long)DAT_00100c68 - (long)head);
      if (head_truncation == '\0') {
        if (0 < lVar57) goto LAB_001047e1;
      }
      else {
        lVar57 = lVar57 - truncation_string_length;
        if (0 < lVar57) {
LAB_001047e1:
          do {
            pcVar54 = _stdout->_IO_write_ptr;
            if (pcVar54 < _stdout->_IO_write_end) {
              _stdout->_IO_write_ptr = pcVar54 + 1;
              *pcVar54 = ' ';
            }
            else {
              __overflow(_stdout,0x20);
            }
            lVar57 = lVar57 + -1;
          } while (lVar57 != 0);
          if (head_truncation == '\0') goto LAB_0010480c;
        }
        fputs_unlocked(truncation_string,_stdout);
      }
LAB_0010480c:
      print_field(head,DAT_00100c68);
LAB_0010443a:
      if (auto_reference == '\0') {
LAB_00103cd9:
        if (input_reference == '\0') goto LAB_00104026;
      }
      pbVar49 = gap_size;
      if (right_reference != '\0') {
        for (; 0 < (long)pbVar49; pbVar49 = pbVar49 + -1) {
          pcVar54 = _stdout->_IO_write_ptr;
          if (pcVar54 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = pcVar54 + 1;
            *pcVar54 = ' ';
          }
          else {
            __overflow(_stdout,0x20);
          }
        }
        print_field(reference,DAT_00100c48);
      }
    }
LAB_00104026:
    pcVar54 = _stdout->_IO_write_ptr;
    if (pcVar54 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = pcVar54 + 1;
      *pcVar54 = '\n';
    }
    else {
      __overflow(_stdout,10);
    }
  }
  else if (output_format == 3) {
    __printf_chk(2,&_LC58,macro_name);
    pcVar54 = _stdout->_IO_write_ptr;
    if (pcVar54 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = pcVar54 + 1;
      *pcVar54 = '{';
    }
    else {
      __overflow(_stdout,0x7b);
    }
    print_field(tail,DAT_00100cc8);
    fwrite_unlocked(&_LC59,1,2,_stdout);
    print_field(before,DAT_00100ca8);
    fwrite_unlocked(&_LC59,1,2,_stdout);
    pbVar44 = DAT_00100c88;
    pbVar49 = keyafter;
    if (word_regex == (char *)0x0) {
      pbVar50 = keyafter;
      if (*(char *)((long)&word_fastmap + (ulong)*keyafter) == '\0') {
        pbVar50 = keyafter + 1;
      }
      else {
        while ((pbVar50 < DAT_00100c88 && (*(char *)((long)&word_fastmap + (ulong)*pbVar50) != '\0')
               )) {
          pbVar50 = pbVar50 + 1;
        }
      }
    }
    else {
      iVar35 = re_match((re_pattern_buffer *)&DAT_001010e8,(char *)keyafter,
                        (int)DAT_00100c88 - (int)keyafter,0,(re_registers *)0x0);
      if (iVar35 == -2) goto LAB_00102ec3;
      if (iVar35 == -1) {
        iVar35 = 1;
      }
      pbVar50 = pbVar49 + iVar35;
    }
    print_field(pbVar49,pbVar50);
    fwrite_unlocked(&_LC59,1,2,_stdout);
    print_field(pbVar50,pbVar44);
    fwrite_unlocked(&_LC59,1,2,_stdout);
    print_field(head,DAT_00100c68);
    pcVar54 = _stdout->_IO_write_ptr;
    if (pcVar54 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = pcVar54 + 1;
      *pcVar54 = '}';
    }
    else {
      __overflow(_stdout,0x7d);
    }
    if ((auto_reference != '\0') || (input_reference != '\0')) {
      pcVar54 = _stdout->_IO_write_ptr;
      if (pcVar54 < _stdout->_IO_write_end) {
        _stdout->_IO_write_ptr = pcVar54 + 1;
        *pcVar54 = '{';
      }
      else {
        __overflow(_stdout,0x7b);
      }
      print_field(reference,DAT_00100c48);
      pcVar54 = _stdout->_IO_write_ptr;
      if (pcVar54 < _stdout->_IO_write_end) {
        _stdout->_IO_write_ptr = pcVar54 + 1;
        *pcVar54 = '}';
      }
      else {
        __overflow(_stdout,0x7d);
      }
    }
    goto LAB_00104026;
  }
  local_100 = local_100 + 1;
  local_130 = local_130 + 6;
  if ((long)number_of_occurs <= local_100) goto LAB_00104064;
  goto LAB_001032a3;
}


