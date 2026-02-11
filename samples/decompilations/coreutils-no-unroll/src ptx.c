
void unescape_string(char *param_1)

{
  byte bVar1;
  char *pcVar2;
  char cVar3;
  char *pcVar4;
  char cVar5;
  
  cVar3 = *param_1;
  pcVar2 = param_1;
joined_r0x0010000b:
  do {
    if (cVar3 == '\0') goto LAB_00100069;
    pcVar4 = param_1 + 1;
    if (cVar3 == '\\') {
      if (param_1[1] == '\0') goto LAB_00100069;
      switch(param_1[1]) {
      case '0':
        if ((byte)(param_1[2] - 0x30U) < 8) {
          cVar3 = param_1[2] + -0x30;
          if ((byte)(param_1[3] - 0x30U) < 8) {
            cVar3 = param_1[3] + -0x30 + cVar3 * '\b';
            pcVar4 = param_1 + 4;
            if ((byte)(*pcVar4 - 0x30U) < 8) {
              param_1 = param_1 + 5;
              cVar3 = *pcVar4 + -0x30 + cVar3 * '\b';
            }
            else {
LAB_00100259:
              param_1 = param_1 + 4;
            }
          }
          else {
LAB_0010025f:
            param_1 = param_1 + 3;
          }
        }
        else {
          param_1 = param_1 + 2;
          cVar3 = '\0';
        }
        break;
      default:
        *pcVar2 = '\\';
        pcVar2[1] = param_1[1];
        cVar3 = param_1[2];
        param_1 = param_1 + 2;
        pcVar2 = pcVar2 + 2;
        goto joined_r0x0010000b;
      case 'a':
        *pcVar2 = '\a';
        param_1 = param_1 + 2;
        cVar3 = *param_1;
        pcVar2 = pcVar2 + 1;
        goto joined_r0x0010000b;
      case 'b':
        *pcVar2 = '\b';
        param_1 = param_1 + 2;
        cVar3 = *param_1;
        pcVar2 = pcVar2 + 1;
        goto joined_r0x0010000b;
      case 'c':
        goto switchD_00100054_caseD_63;
      case 'f':
        *pcVar2 = '\f';
        param_1 = param_1 + 2;
        cVar3 = *param_1;
        pcVar2 = pcVar2 + 1;
        goto joined_r0x0010000b;
      case 'n':
        *pcVar2 = '\n';
        param_1 = param_1 + 2;
        cVar3 = *param_1;
        pcVar2 = pcVar2 + 1;
        goto joined_r0x0010000b;
      case 'r':
        *pcVar2 = '\r';
        param_1 = param_1 + 2;
        cVar3 = *param_1;
        pcVar2 = pcVar2 + 1;
        goto joined_r0x0010000b;
      case 't':
        *pcVar2 = '\t';
        param_1 = param_1 + 2;
        cVar3 = *param_1;
        pcVar2 = pcVar2 + 1;
        goto joined_r0x0010000b;
      case 'v':
        *pcVar2 = '\v';
        param_1 = param_1 + 2;
        cVar3 = *param_1;
        pcVar2 = pcVar2 + 1;
        goto joined_r0x0010000b;
      case 'x':
        bVar1 = param_1[2];
        if ((0x36 < (byte)(bVar1 - 0x30)) ||
           ((0x7e0000007e03ffU >> ((ulong)(bVar1 - 0x30) & 0x3f) & 1) == 0)) {
          param_1 = param_1 + 2;
          pcVar2[0] = '\\';
          pcVar2[1] = 'x';
          cVar3 = *param_1;
          pcVar2 = pcVar2 + 2;
          goto joined_r0x0010000b;
        }
        cVar3 = bVar1 + 0xa9;
        if (5 < (byte)(bVar1 + 0x9f)) {
          cVar3 = bVar1 - 0x30;
          if ((byte)(bVar1 + 0xbf) < 6) {
            cVar3 = bVar1 - 0x37;
          }
        }
        bVar1 = param_1[3];
        if ((0x36 < (byte)(bVar1 - 0x30)) ||
           ((0x7e0000007e03ffU >> ((ulong)(bVar1 - 0x30) & 0x3f) & 1) == 0)) goto LAB_0010025f;
        cVar5 = bVar1 + 0xa9;
        if (5 < (byte)(bVar1 + 0x9f)) {
          cVar5 = bVar1 - 0x30;
          if ((byte)(bVar1 + 0xbf) < 6) {
            cVar5 = bVar1 - 0x37;
          }
        }
        bVar1 = param_1[4];
        cVar3 = cVar3 * '\x10' + cVar5;
        if ((0x36 < (byte)(bVar1 - 0x30)) ||
           ((0x7e0000007e03ffU >> ((ulong)(bVar1 - 0x30) & 0x3f) & 1) == 0)) goto LAB_00100259;
        cVar3 = bVar1 + 0xa9;
        if (5 < (byte)(bVar1 + 0x9f)) {
          cVar3 = bVar1 - 0x30;
          if ((byte)(bVar1 + 0xbf) < 6) {
            cVar3 = bVar1 - 0x37;
          }
        }
        cVar3 = cVar5 * '\x10' + cVar3;
        param_1 = param_1 + 5;
      }
      *pcVar2 = cVar3;
      cVar3 = *param_1;
      pcVar2 = pcVar2 + 1;
      goto joined_r0x0010000b;
    }
    *pcVar2 = cVar3;
    cVar3 = param_1[1];
    param_1 = pcVar4;
    pcVar2 = pcVar2 + 1;
  } while( true );
switchD_00100054_caseD_63:
  do {
    pcVar4 = pcVar4 + 1;
  } while (*pcVar4 != '\0');
LAB_00100069:
  *pcVar2 = '\0';
  return;
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
  prStack_28 = (re_pattern_buffer *)0x1003b6;
  uStack_20 = uVar1;
  __length = strlen(pcVar9);
  prStack_28 = (re_pattern_buffer *)0x1003c4;
  pcVar4 = re_compile_pattern(pcVar9,__length,__buffer);
  if (pcVar4 == (char *)0x0) {
    re_compile_fastmap(__buffer);
    return;
  }
  prStack_28 = (re_pattern_buffer *)0x1003e0;
  uVar1 = quote(pcVar9);
  prStack_28 = (re_pattern_buffer *)0x1003f6;
  uVar5 = dcgettext(0,"%s (for regexp %s)",5);
  plVar7 = (long *)0x0;
  pcVar9 = (char *)0x1;
  prStack_28 = (re_pattern_buffer *)0x10040d;
  error(1,0,uVar5,pcVar4,uVar1);
  lStack_40 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_30 = uVar1;
  prStack_28 = __buffer;
  if ((pcVar9 != (char *)0x0) && (*pcVar9 != '\0')) {
    if (*pcVar9 == '-') goto LAB_001004e0;
    goto LAB_0010048d;
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
LAB_001004e0:
      if (pcVar9[1] == '\0') break;
LAB_0010048d:
      lVar6 = read_file();
      *plVar7 = lVar6;
      if (lVar6 != 0) goto LAB_00100463;
    }
  }
  clearerr_unlocked(_stdin);
  lVar6 = *plVar7;
LAB_00100463:
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
  prStack_20 = (re_pattern_buffer *)0x1003b6;
  __length = strlen(pcVar8);
  prStack_20 = (re_pattern_buffer *)0x1003c4;
  pcVar2 = re_compile_pattern(pcVar8,__length,__buffer);
  if (pcVar2 == (char *)0x0) {
    re_compile_fastmap(__buffer);
    return;
  }
  prStack_20 = (re_pattern_buffer *)0x1003e0;
  uVar3 = quote(pcVar8);
  prStack_20 = (re_pattern_buffer *)0x1003f6;
  uVar4 = dcgettext(0,"%s (for regexp %s)",5);
  plVar7 = (long *)0x0;
  pcVar8 = (char *)0x1;
  prStack_20 = (re_pattern_buffer *)0x10040d;
  error(1,0,uVar4,pcVar2,uVar3);
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_28 = uVar3;
  prStack_20 = __buffer;
  if ((pcVar8 != (char *)0x0) && (*pcVar8 != '\0')) {
    if (*pcVar8 == '-') goto LAB_001004e0;
    goto LAB_0010048d;
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
LAB_001004e0:
      if (pcVar8[1] == '\0') break;
LAB_0010048d:
      lVar5 = read_file();
      *plVar7 = lVar5;
      if (lVar5 != 0) goto LAB_00100463;
    }
  }
  clearerr_unlocked(_stdin);
  lVar5 = *plVar7;
LAB_00100463:
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
    if (*param_1 == '-') goto LAB_001004e0;
    goto LAB_0010048d;
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
LAB_001004e0:
      if (param_1[1] == '\0') break;
LAB_0010048d:
      lVar1 = read_file();
      *param_2 = lVar1;
      if (lVar1 != 0) goto LAB_00100463;
    }
  }
  clearerr_unlocked(_stdin);
  lVar1 = *param_2;
LAB_00100463:
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
LAB_001005aa:
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      qsort(__base,__nmemb,0x10,compare_words);
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_00100561:
  do {
    if (*local_48 == '\n') {
      if (pcVar3 < local_48) goto LAB_00100580;
    }
    else {
      local_48 = local_48 + 1;
      if (local_48 != local_40) goto LAB_00100561;
LAB_00100580:
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
       ) goto LAB_001005aa;
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
LAB_00100670:
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
        if ((byte)(bVar1 - 0x23) < 4) goto LAB_00100648;
        goto LAB_001006bc;
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
LAB_00100648:
        pcVar3 = _stdout->_IO_write_ptr;
        if (pcVar3 < _stdout->_IO_write_end) {
          _stdout->_IO_write_ptr = pcVar3 + 1;
          *pcVar3 = '\\';
        }
        else {
          __overflow(_stdout,0x5c);
        }
        goto LAB_00100670;
      }
LAB_001006bc:
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



int compare_occurs(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  uVar5 = uVar2;
  if ((long)uVar1 <= (long)uVar2) {
    uVar5 = uVar1;
  }
  if (ignore_case == '\0') {
    if (0 < (long)uVar5) {
      uVar3 = 0;
      do {
        iVar4 = (uint)*(byte *)(*param_1 + uVar3) - (uint)*(byte *)(*param_2 + uVar3);
        if (iVar4 != 0) {
          return iVar4;
        }
        uVar3 = uVar3 + 1;
      } while (uVar5 != uVar3);
    }
  }
  else if (0 < (long)uVar5) {
    uVar3 = 0;
    do {
      if ((uint)(byte)(&folded_chars)[*(byte *)(*param_1 + uVar3)] -
          (uint)(byte)(&folded_chars)[*(byte *)(*param_2 + uVar3)] != 0) {
        return (uint)(byte)(&folded_chars)[*(byte *)(*param_1 + uVar3)] -
               (uint)(byte)(&folded_chars)[*(byte *)(*param_2 + uVar3)];
      }
      uVar3 = uVar3 + 1;
    } while (uVar5 != uVar3);
  }
  iVar4 = (uint)((long)uVar1 < (long)uVar2) - (uint)((long)uVar2 < (long)uVar1);
  if (iVar4 == 0) {
    iVar4 = (uint)(*param_2 < *param_1) - (uint)(*param_1 < *param_2);
  }
  return iVar4;
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
    goto LAB_001008ea;
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
    if (pcVar4 != (char *)0x0) goto LAB_00100bad;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC8);
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
LAB_00100bad:
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
LAB_001008ea:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined8 main(uint param_1,byte **param_2)

{
  undefined4 *puVar1;
  ushort *puVar2;
  undefined2 *puVar3;
  ushort *puVar4;
  byte bVar5;
  byte **ppbVar6;
  bool bVar7;
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
  uint uVar32;
  byte **ppbVar33;
  byte *pbVar34;
  char cVar35;
  int iVar36;
  undefined8 uVar37;
  long lVar38;
  __int32_t **pp_Var39;
  ushort **ppuVar40;
  byte **ppbVar41;
  byte **ppbVar42;
  size_t sVar43;
  undefined8 uVar44;
  undefined8 *puVar45;
  byte *pbVar46;
  char *pcVar47;
  byte *pbVar48;
  int *piVar49;
  char cVar50;
  byte *pbVar51;
  byte *pbVar52;
  long lVar53;
  undefined1 *puVar54;
  byte *pbVar55;
  byte **ppbVar56;
  byte *pbVar57;
  byte *pbVar58;
  ulong *puVar59;
  byte **ppbVar60;
  long lVar61;
  char cVar62;
  byte *pbVar63;
  byte **in_R10;
  byte **ppbVar64;
  uint *puVar65;
  ulong uVar66;
  byte **ppbVar67;
  byte **ppbVar68;
  byte *pbVar69;
  byte **unaff_R15;
  ulong uVar70;
  byte **ppbVar71;
  long in_FS_OFFSET;
  bool bVar72;
  byte bVar73;
  ushort uVar74;
  ushort uVar75;
  ushort uVar76;
  ushort uVar77;
  ushort uVar78;
  ushort uVar79;
  ushort uVar80;
  ushort uVar81;
  ushort uVar82;
  ushort uVar83;
  ushort uVar84;
  ushort uVar85;
  ushort uVar86;
  ushort uVar87;
  ushort uVar88;
  ushort uVar89;
  byte **ppbStack_158;
  byte ***local_140;
  byte **local_130;
  byte **local_110;
  undefined8 *local_108;
  long local_100;
  undefined4 local_f4;
  byte *local_e0;
  byte *local_d0;
  byte *local_c8;
  byte *local_c0;
  byte *local_b8;
  byte *local_b0;
  byte *local_a8;
  byte *local_a0;
  byte *local_98;
  byte *local_90;
  byte *local_88;
  byte *local_80;
  byte **local_68;
  byte **ppbStack_60;
  undefined1 local_58 [24];
  long local_40;
  
  bVar73 = 0;
  ppbVar68 = (byte **)&_LC45;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  puVar65 = &switchD_00102282::switchdataD_00101594;
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  ppbVar56 = (byte **)gap_size;
  ppbVar71 = (byte **)line_width;
  do {
    line_width = (ulong *)ppbVar71;
    gap_size = (ulong *)ppbVar56;
    iVar36 = getopt_long(param_1,param_2,&_LC45);
    if (iVar36 == -1) {
      if (_optind == param_1) {
        input_file_name = (undefined8 *)xmalloc(8);
        file_line_count = xmalloc(8);
        text_buffers = xmalloc(0x10);
        number_input_files = 1;
        *input_file_name = 0;
        goto LAB_0010261b;
      }
      if (gnu_extensions != 0) {
        number_input_files = param_1 - _optind;
        input_file_name = (undefined8 *)xnmalloc((long)number_input_files,8);
        file_line_count = xnmalloc((long)number_input_files,8);
        text_buffers = xnmalloc((long)number_input_files,0x10);
        puVar45 = input_file_name;
        lVar53 = (long)number_input_files;
        if (0 < number_input_files) {
          lVar38 = (long)(int)_optind;
          lVar61 = (long)(int)(_optind + 1);
          do {
            pbVar55 = param_2[lVar61 + -1];
            if (*pbVar55 == 0) {
              pbVar55 = (byte *)0x0;
            }
            else {
              iVar36 = strcmp((char *)pbVar55,"-");
              if (iVar36 == 0) {
                pbVar55 = (byte *)0x0;
              }
            }
            puVar45[(lVar61 + -1) - lVar38] = pbVar55;
            _optind = (uint)lVar61;
            bVar72 = lVar61 != lVar53 + lVar38;
            lVar61 = lVar61 + 1;
          } while (bVar72);
        }
        goto LAB_0010261b;
      }
      number_input_files = 1;
      input_file_name = (undefined8 *)xmalloc(8);
      file_line_count = xmalloc(8);
      text_buffers = xmalloc(0x10);
      uVar32 = _optind;
      lVar53 = (long)(int)_optind;
      pbVar55 = param_2[lVar53];
      if ((*pbVar55 == 0) || (iVar36 = strcmp((char *)pbVar55,"-"), iVar36 == 0)) {
        *input_file_name = 0;
      }
      else {
        *input_file_name = pbVar55;
      }
      _optind = uVar32 + 1;
      ppbVar68 = (byte **)(ulong)_optind;
      if ((int)param_1 <= (int)_optind) goto LAB_0010261b;
      lVar53 = freopen_safer(param_2[lVar53 + 1],&_LC46,_stdout);
      if (lVar53 == 0) {
        quotearg_n_style_colon(0,3,param_2[(int)_optind]);
        piVar49 = __errno_location();
        error(1,*piVar49,&_LC4);
        goto LAB_001046d0;
      }
      _optind = _optind + 1;
      if ((int)param_1 <= (int)_optind) {
LAB_0010261b:
        if (output_format == 0) {
          output_format = 2 - gnu_extensions;
        }
        if (ignore_case != '\0') {
          pp_Var39 = __ctype_toupper_loc();
          lVar53 = 0;
          puVar54 = &folded_chars;
          do {
            puVar1 = (undefined4 *)((long)*pp_Var39 + lVar53);
            lVar53 = lVar53 + 4;
            *puVar54 = (char)*puVar1;
            puVar54 = puVar54 + 1;
          } while (lVar53 != 0x400);
        }
        if (context_regex == (char *)0x0) goto LAB_001030a8;
        if (*context_regex != '\0') goto LAB_001030c3;
        context_regex = (char *)0x0;
        goto LAB_0010268f;
      }
      uVar37 = quote(param_2[(int)_optind]);
      uVar44 = dcgettext(0,"extra operand %s",5);
      error(0,0,uVar44,uVar37);
      goto switchD_00102282_caseD_b;
    }
    if (0x77 < iVar36) goto switchD_00102282_caseD_b;
    if (iVar36 < 10) {
      if (iVar36 == -0x83) {
        uVar37 = proper_name_lite("F. Pinard",&_LC43);
        version_etc(_stdout,&_LC8,"GNU coreutils",_Version,uVar37,0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar36 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      goto switchD_00102282_caseD_b;
    }
    ppbVar56 = (byte **)gap_size;
    ppbVar71 = (byte **)line_width;
    switch(iVar36) {
    case 10:
      ppbStack_158 = (byte **)0x1;
      lVar53 = __xargmatch_internal("--format",_optarg,format_args,&format_vals);
      output_format = *(uint *)((long)&format_vals + lVar53 * 4);
      unaff_R15 = ppbStack_158;
      ppbVar56 = (byte **)gap_size;
      ppbVar71 = (byte **)line_width;
      break;
    default:
switchD_00102282_caseD_b:
                    /* WARNING: Subroutine does not return */
      usage(1);
    case 0x41:
      auto_reference = '\x01';
      break;
    case 0x46:
      truncation_string = _optarg;
      unescape_string();
      ppbVar56 = (byte **)gap_size;
      ppbVar71 = (byte **)line_width;
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
      ppbVar56 = (byte **)gap_size;
      ppbVar71 = (byte **)line_width;
      break;
    case 0x54:
      output_format = 3;
      break;
    case 0x57:
      word_regex = _optarg;
      unescape_string();
      ppbVar56 = (byte **)gap_size;
      ppbVar71 = (byte **)line_width;
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
      iVar36 = xstrtoimax(_optarg,0,0,&local_68);
      if ((iVar36 != 0) || (ppbVar56 = local_68, ppbVar71 = (byte **)line_width, (long)local_68 < 1)
         ) {
        ppbVar56 = (byte **)quote(_optarg);
        pcVar47 = "invalid gap width: %s";
LAB_00104b94:
        uVar37 = dcgettext(0,pcVar47,5);
        error(1,0,uVar37);
        ppbVar67 = (byte **)puVar65;
        ppbVar71 = unaff_R15;
LAB_00104baf:
        local_100 = (long)ppbVar56 - (long)ppbVar68;
        ppbVar42 = in_R10;
        puVar65 = (uint *)ppbVar67;
        local_110 = ppbVar68;
        unaff_R15 = ppbVar71;
joined_r0x00102849:
        ppbVar41 = ppbVar56;
        if ((context_regex != (char *)0x0) &&
           (iVar36 = (int)ppbVar56 - (int)ppbVar68,
           iVar36 = re_search((re_pattern_buffer *)&DAT_00101308,(char *)ppbVar68,iVar36,0,iVar36,
                              (re_registers *)context_regs), iVar36 != -1)) {
          if (iVar36 == 0) {
            ppbVar56 = (byte **)quote();
            pcVar47 = "error: regular expression has a match of length zero: %s";
            goto LAB_00104b94;
          }
          if (iVar36 == -2) goto LAB_001030a3;
          ppbVar41 = (byte **)((long)ppbVar68 + (long)*(int *)context_regs._16_8_);
        }
        puVar65 = (uint *)ppbVar41;
        unaff_R15 = ppbVar41;
        local_130 = ppbVar68;
        if (ppbVar68 < ppbVar41) {
          ppuVar40 = __ctype_b_loc();
          do {
            unaff_R15 = (byte **)puVar65;
            if ((*(byte *)((long)*ppuVar40 + (ulong)*(byte *)((long)puVar65 + -1) * 2 + 1) & 0x20)
                == 0) break;
            puVar65 = (uint *)((long)puVar65 + -1);
            unaff_R15 = (byte **)puVar65;
          } while ((byte **)puVar65 != ppbVar68);
        }
joined_r0x001028e3:
        do {
          ppbVar56 = ppbVar68;
          if (word_regex == (char *)0x0) {
            do {
              if (ppbVar56 < unaff_R15) {
                while (*(char *)((long)&word_fastmap + (ulong)*(byte *)ppbVar56) == '\0') {
                  ppbVar56 = (byte **)((long)ppbVar56 + 1);
                  if (ppbVar56 == unaff_R15) goto LAB_00102d30;
                }
                if (unaff_R15 == ppbVar56) goto LAB_00102d30;
                ppbVar64 = ppbVar56;
                if (ppbVar56 < unaff_R15) goto LAB_00102b0d;
              }
              else if (unaff_R15 == ppbVar56) goto LAB_00102d30;
              ppbVar56 = (byte **)((long)ppbVar56 + 1);
            } while( true );
          }
          iVar36 = (int)unaff_R15 - (int)ppbVar68;
          iVar36 = re_search((re_pattern_buffer *)&DAT_001011a8,(char *)ppbVar68,iVar36,0,iVar36,
                             (re_registers *)word_regs);
          if (iVar36 == -2) goto LAB_001030a3;
          if (iVar36 == -1) goto LAB_00102d30;
          ppbVar56 = (byte **)((long)*(int *)word_regs._8_8_ + (long)ppbVar68);
          ppbVar64 = (byte **)((long)ppbVar68 + (long)*(int *)word_regs._16_8_);
          ppbVar68 = ppbVar64;
          if (ppbVar56 != ppbVar64) goto LAB_00102949;
LAB_00102b28:
          ppbVar68 = (byte **)((long)ppbVar64 + 1);
        } while( true );
      }
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
      iVar36 = xstrtoimax(_optarg,0,0,&local_68);
      if ((iVar36 != 0) || (ppbVar56 = (byte **)gap_size, ppbVar71 = local_68, (long)local_68 < 1))
      {
        ppbVar56 = (byte **)quote(_optarg);
        pcVar47 = "invalid line width: %s";
        goto LAB_00104b94;
      }
    }
  } while( true );
  while (ppbVar64 = (byte **)((long)ppbVar64 + 1), ppbVar68 = unaff_R15, ppbVar64 != unaff_R15) {
LAB_00102b0d:
    if (*(char *)((long)&word_fastmap + (ulong)*(byte *)ppbVar64) == '\0') {
      ppbVar68 = ppbVar64;
      if (ppbVar56 == ppbVar64) goto LAB_00102b28;
      break;
    }
  }
LAB_00102949:
  cVar50 = input_reference;
  ppbStack_60 = (byte **)((long)ppbVar68 - (long)ppbVar56);
  if ((long)maximum_word_length < (long)ppbStack_60) {
    maximum_word_length = (ulong *)ppbStack_60;
  }
  local_68 = ppbVar56;
  if (input_reference != '\0') {
    if (ppbVar42 < ppbVar56) {
      uVar70 = total_line_count;
      cVar35 = '\0';
      do {
        while (ppbVar64 = (byte **)((long)ppbVar42 + 1), *(byte *)ppbVar42 == 10) {
          uVar70 = uVar70 + 1;
          ppbVar6 = (byte **)local_108[1];
          if (ppbVar64 < ppbVar6) {
            ppuVar40 = __ctype_b_loc();
            ppbVar33 = ppbVar64;
            do {
              ppbVar60 = ppbVar33;
              if ((*(byte *)((long)*ppuVar40 + (ulong)*(byte *)ppbVar60 * 2 + 1) & 0x20) != 0) {
                local_100 = (long)ppbVar60 - (long)ppbVar64;
                goto LAB_00102cc0;
              }
              ppbVar33 = (byte **)((long)ppbVar60 + 1);
            } while ((byte **)((long)ppbVar60 + 1) != ppbVar6);
            local_100 = (long)ppbVar60 - (long)ppbVar42;
            ppbVar60 = ppbVar6;
          }
          else {
            local_100 = 0;
            ppbVar60 = ppbVar64;
          }
LAB_00102cc0:
          ppbVar42 = ppbVar60;
          local_110 = ppbVar64;
          cVar35 = cVar50;
          if (ppbVar56 <= ppbVar60) goto LAB_00102cd0;
        }
        ppbVar42 = ppbVar64;
      } while (ppbVar64 < ppbVar56);
LAB_00102cd0:
      puVar65 = (uint *)ppbVar56;
      if (cVar35 != '\0') {
        total_line_count = uVar70;
      }
    }
    if (ppbVar56 < ppbVar42) goto joined_r0x001028e3;
  }
  lVar53 = ignore_table;
  if (ignore_file != (char *)0x0) {
    pbVar55 = (byte *)0x0;
    pbVar48 = DAT_00100f30;
    while( true ) {
      puVar65 = (uint *)((long)pbVar55 >> 1);
      pbVar58 = pbVar48;
      do {
        pbVar48 = pbVar58;
        if ((long)pbVar48 <= (long)pbVar55) goto LAB_00102a0d;
        pbVar58 = (byte *)((long)puVar65 +
                          (ulong)((uint)pbVar48 & (uint)pbVar55 & 1) + ((long)pbVar48 >> 1));
        iVar36 = compare_words(local_140,(long)pbVar58 * 0x10 + lVar53);
      } while (iVar36 < 0);
      if (iVar36 == 0) break;
      pbVar55 = pbVar58 + 1;
    }
    goto joined_r0x001028e3;
  }
LAB_00102a0d:
  lVar53 = only_table;
  if (only_file != (char *)0x0) {
    in_R10 = (byte **)0x0;
    puVar65 = (uint *)DAT_00100f10;
    while( true ) {
      ppbVar64 = (byte **)puVar65;
      do {
        puVar65 = (uint *)ppbVar64;
        if ((long)puVar65 <= (long)in_R10) goto joined_r0x001028e3;
        ppbVar64 = (byte **)(((long)puVar65 >> 1) + ((long)in_R10 >> 1) +
                            (ulong)((uint)puVar65 & (uint)in_R10 & 1));
        iVar36 = compare_words(local_140,(long)ppbVar64 * 0x10 + lVar53);
      } while (iVar36 < 0);
      if (iVar36 == 0) break;
      in_R10 = (byte **)((long)ppbVar64 + 1);
    }
  }
  if (number_of_occurs == occurs_alloc) {
    occurs_table = (char *)xpalloc(occurs_table,&occurs_alloc,1,0xffffffffffffffff);
    cVar50 = input_reference;
  }
  cVar35 = auto_reference;
  uVar70 = total_line_count;
  sVar43 = number_of_occurs;
  puVar65 = (uint *)(occurs_table + number_of_occurs * 0x30);
  if (auto_reference == '\0') {
    if (cVar50 == '\0') goto LAB_00102bc9;
    *(byte **)((long)puVar65 + 0x20) = (byte *)((long)local_110 - (long)ppbVar56);
    if (reference_max_width < local_100) {
      reference_max_width = local_100;
    }
  }
  else {
    uVar66 = total_line_count;
    if (ppbVar42 < ppbVar56) {
      cVar62 = '\0';
LAB_00102dc5:
      do {
        ppbVar64 = (byte **)((long)ppbVar42 + 1);
        if (*(byte *)ppbVar42 == 10) {
          uVar66 = uVar66 + 1;
          ppbVar6 = (byte **)local_108[1];
          local_110 = ppbVar64;
          cVar62 = cVar35;
          if (ppbVar64 < ppbVar6) {
            ppuVar40 = __ctype_b_loc();
            ppbVar42 = ppbVar64;
            do {
              if ((*(byte *)((long)*ppuVar40 + (ulong)*(byte *)ppbVar42 * 2 + 1) & 0x20) != 0)
              break;
              ppbVar42 = (byte **)((long)ppbVar42 + 1);
            } while (ppbVar42 != ppbVar6);
            if (ppbVar56 <= ppbVar42) break;
            goto LAB_00102dc5;
          }
        }
        ppbVar42 = ppbVar64;
      } while (ppbVar64 < ppbVar56);
      if (cVar62 == '\0') {
        *(ulong *)((long)puVar65 + 0x20) = uVar70;
        goto LAB_00102bb5;
      }
    }
    total_line_count = uVar66;
    *(ulong *)((long)puVar65 + 0x20) = total_line_count;
  }
LAB_00102bb5:
  if (((local_110 == local_130) && (cVar50 != '\0')) && (local_130 < unaff_R15)) {
    ppuVar40 = __ctype_b_loc();
    do {
      if ((*(byte *)((long)*ppuVar40 + (ulong)*(byte *)local_130 * 2 + 1) & 0x20) != 0) {
        if (local_130 < unaff_R15) goto LAB_00102f11;
        break;
      }
      local_130 = (byte **)((long)local_130 + 1);
    } while (local_130 != unaff_R15);
  }
LAB_00102bc9:
  number_of_occurs = sVar43 + 1;
  *(byte ***)puVar65 = local_68;
  *(byte ***)((long)puVar65 + 8) = ppbStack_60;
  *(byte **)((long)puVar65 + 0x10) = (byte *)((long)local_130 - (long)ppbVar56);
  *(byte **)((long)puVar65 + 0x18) = (byte *)((long)unaff_R15 - (long)ppbVar56);
  *(undefined4 *)((long)puVar65 + 0x28) = local_f4;
  goto joined_r0x001028e3;
LAB_00102d30:
  ppbVar56 = (byte **)local_108[1];
  ppbVar68 = ppbVar41;
  if (ppbVar56 <= ppbVar41) {
LAB_00102f5d:
    do {
      iVar36 = number_input_files;
      ppbVar67 = (byte **)((long)ppbVar67 + 1);
      total_line_count = total_line_count + 1;
      *(ulong *)(file_line_count + (long)ppbVar71) = total_line_count;
      if (iVar36 <= (int)ppbVar67) {
        if (number_of_occurs != 0) {
          qsort(occurs_table,number_of_occurs,0x30,compare_occurs);
        }
        do {
          if (auto_reference == '\0') {
LAB_0010321b:
            if (input_reference != '\0') goto LAB_00103069;
          }
          else {
            reference_max_width = 0;
            for (lVar53 = 0; (int)lVar53 < number_input_files; lVar53 = lVar53 + 1) {
              iVar36 = __sprintf_chk(local_58,2,0x15,&_LC51);
              lVar61 = (long)iVar36;
              if ((char *)input_file_name[lVar53] != (char *)0x0) {
                sVar43 = strlen((char *)input_file_name[lVar53]);
                lVar61 = (long)iVar36 + sVar43;
              }
              if (reference_max_width < lVar61) {
                reference_max_width = lVar61;
              }
            }
            lVar53 = reference_max_width + 2;
            reference_max_width = reference_max_width + 1;
            reference = (byte *)xmalloc(lVar53);
            if (auto_reference == '\0') goto LAB_0010321b;
LAB_00103069:
            if ((right_reference == '\0') &&
               (line_width = (ulong *)((long)line_width - ((long)gap_size + reference_max_width)),
               (long)line_width < 0)) {
              line_width = (ulong *)0x0;
            }
          }
          lVar53 = (long)line_width >> 1;
          lVar61 = lVar53 - (long)gap_size;
          before_max_width = lVar61;
          half_line_width = lVar53;
          if ((truncation_string == (undefined *)0x0) || (*truncation_string == '\0')) {
            truncation_string = (undefined *)0x0;
          }
          else {
            keyafter_max_width = lVar53;
            truncation_string_length = strlen(truncation_string);
          }
          if (gnu_extensions == 0) {
            lVar61 = -(truncation_string_length * 2 + 1);
          }
          else {
            before_max_width = lVar61 + truncation_string_length * -2;
            if (before_max_width < 0) {
              before_max_width = 0;
            }
            lVar61 = truncation_string_length * -2;
          }
          keyafter_max_width = lVar53 + lVar61;
          local_140 = (byte ***)__ctype_b_loc();
          uVar31 = _UNK_00104ede;
          uVar30 = _UNK_00104edc;
          uVar29 = _UNK_00104eda;
          uVar28 = _UNK_00104ed8;
          uVar27 = _UNK_00104ed6;
          uVar26 = _UNK_00104ed4;
          uVar25 = _UNK_00104ed2;
          uVar24 = __LC54;
          uVar23 = _UNK_00104ece;
          uVar22 = _UNK_00104ecc;
          uVar21 = _UNK_00104eca;
          uVar20 = _UNK_00104ec8;
          uVar19 = _UNK_00104ec6;
          uVar18 = _UNK_00104ec4;
          uVar17 = _UNK_00104ec2;
          uVar16 = __LC53;
          uVar15 = _UNK_00104ebe;
          uVar14 = _UNK_00104ebc;
          uVar13 = _UNK_00104eba;
          uVar12 = _UNK_00104eb8;
          uVar11 = _UNK_00104eb6;
          uVar10 = _UNK_00104eb4;
          uVar9 = _UNK_00104eb2;
          uVar8 = __LC52;
          ppbVar68 = *local_140;
          lVar53 = 0;
          do {
            puVar4 = (ushort *)((long)ppbVar68 + (lVar53 + 8) * 2);
            puVar2 = (ushort *)((long)ppbVar68 + lVar53 * 2);
            uVar74 = ~-(ushort)((*puVar2 & uVar8) == 0) & uVar16 & uVar24;
            uVar75 = ~-(ushort)((puVar2[1] & uVar9) == 0) & uVar17 & uVar25;
            uVar76 = ~-(ushort)((puVar2[2] & uVar10) == 0) & uVar18 & uVar26;
            uVar77 = ~-(ushort)((puVar2[3] & uVar11) == 0) & uVar19 & uVar27;
            uVar78 = ~-(ushort)((puVar2[4] & uVar12) == 0) & uVar20 & uVar28;
            uVar79 = ~-(ushort)((puVar2[5] & uVar13) == 0) & uVar21 & uVar29;
            uVar80 = ~-(ushort)((puVar2[6] & uVar14) == 0) & uVar22 & uVar30;
            uVar81 = ~-(ushort)((puVar2[7] & uVar15) == 0) & uVar23 & uVar31;
            uVar82 = ~-(ushort)((*puVar4 & uVar8) == 0) & uVar16 & uVar24;
            uVar83 = ~-(ushort)((puVar4[1] & uVar9) == 0) & uVar17 & uVar25;
            uVar84 = ~-(ushort)((puVar4[2] & uVar10) == 0) & uVar18 & uVar26;
            uVar85 = ~-(ushort)((puVar4[3] & uVar11) == 0) & uVar19 & uVar27;
            uVar86 = ~-(ushort)((puVar4[4] & uVar12) == 0) & uVar20 & uVar28;
            uVar87 = ~-(ushort)((puVar4[5] & uVar13) == 0) & uVar21 & uVar29;
            uVar88 = ~-(ushort)((puVar4[6] & uVar14) == 0) & uVar22 & uVar30;
            uVar89 = ~-(ushort)((puVar4[7] & uVar15) == 0) & uVar23 & uVar31;
            edited_flag[lVar53] =
                 (0 < (short)uVar74) * ((short)uVar74 < 0x100) * (char)uVar74 -
                 (0xff < (short)uVar74);
            edited_flag[lVar53 + 1] =
                 (0 < (short)uVar75) * ((short)uVar75 < 0x100) * (char)uVar75 -
                 (0xff < (short)uVar75);
            edited_flag[lVar53 + 2] =
                 (0 < (short)uVar76) * ((short)uVar76 < 0x100) * (char)uVar76 -
                 (0xff < (short)uVar76);
            edited_flag[lVar53 + 3] =
                 (0 < (short)uVar77) * ((short)uVar77 < 0x100) * (char)uVar77 -
                 (0xff < (short)uVar77);
            edited_flag[lVar53 + 4] =
                 (0 < (short)uVar78) * ((short)uVar78 < 0x100) * (char)uVar78 -
                 (0xff < (short)uVar78);
            edited_flag[lVar53 + 5] =
                 (0 < (short)uVar79) * ((short)uVar79 < 0x100) * (char)uVar79 -
                 (0xff < (short)uVar79);
            edited_flag[lVar53 + 6] =
                 (0 < (short)uVar80) * ((short)uVar80 < 0x100) * (char)uVar80 -
                 (0xff < (short)uVar80);
            edited_flag[lVar53 + 7] =
                 (0 < (short)uVar81) * ((short)uVar81 < 0x100) * (char)uVar81 -
                 (0xff < (short)uVar81);
            edited_flag[lVar53 + 8] =
                 (0 < (short)uVar82) * ((short)uVar82 < 0x100) * (char)uVar82 -
                 (0xff < (short)uVar82);
            edited_flag[lVar53 + 9] =
                 (0 < (short)uVar83) * ((short)uVar83 < 0x100) * (char)uVar83 -
                 (0xff < (short)uVar83);
            edited_flag[lVar53 + 10] =
                 (0 < (short)uVar84) * ((short)uVar84 < 0x100) * (char)uVar84 -
                 (0xff < (short)uVar84);
            edited_flag[lVar53 + 0xb] =
                 (0 < (short)uVar85) * ((short)uVar85 < 0x100) * (char)uVar85 -
                 (0xff < (short)uVar85);
            edited_flag[lVar53 + 0xc] =
                 (0 < (short)uVar86) * ((short)uVar86 < 0x100) * (char)uVar86 -
                 (0xff < (short)uVar86);
            edited_flag[lVar53 + 0xd] =
                 (0 < (short)uVar87) * ((short)uVar87 < 0x100) * (char)uVar87 -
                 (0xff < (short)uVar87);
            edited_flag[lVar53 + 0xe] =
                 (0 < (short)uVar88) * ((short)uVar88 < 0x100) * (char)uVar88 -
                 (0xff < (short)uVar88);
            edited_flag[lVar53 + 0xf] =
                 (0 < (short)uVar89) * ((short)uVar89 < 0x100) * (char)uVar89 -
                 (0xff < (short)uVar89);
            lVar53 = lVar53 + 0x10;
          } while (lVar53 != 0x100);
          edited_flag[0xc] = 1;
          if (output_format == 2) {
            edited_flag[0x22] = 1;
          }
          else if (output_format == 3) {
            for (pbVar55 = &_LC38; *pbVar55 != 0; pbVar55 = pbVar55 + 1) {
              edited_flag[*pbVar55] = 1;
            }
          }
          tail_truncation = '\0';
          head_truncation = '\0';
          local_130 = (byte **)0x0;
          _tail = (undefined1  [16])0x0;
          _head = (undefined1  [16])0x0;
          pbVar55 = (byte *)occurs_table;
          if ((long)number_of_occurs < 1) {
LAB_00104304:
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
              return 0;
            }
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
LAB_0010338a:
          pbVar58 = *(byte **)pbVar55;
          lVar53 = *(long *)(pbVar55 + 0x10);
          pbVar57 = pbVar58 + *(long *)(pbVar55 + 8);
          pbVar69 = pbVar58 + *(long *)(pbVar55 + 0x18);
          pbVar48 = pbVar58 + lVar53;
          puVar45 = (undefined8 *)((long)*(int *)(pbVar55 + 0x28) * 0x10 + text_buffers);
          pbVar52 = (byte *)*puVar45;
          pbVar46 = (byte *)puVar45[1];
          lVar61 = keyafter_max_width;
          keyafter = pbVar58;
          DAT_00100d48 = pbVar57;
          if (pbVar57 < pbVar69) {
            do {
              if (pbVar58 + lVar61 < pbVar57) break;
              DAT_00100d48 = pbVar57;
              if (word_regex == (char *)0x0) {
                if (*(char *)((long)&word_fastmap + (ulong)*pbVar57) == '\0') {
                  pbVar57 = pbVar57 + 1;
                }
                else {
                  if (pbVar69 <= pbVar57) break;
                  do {
                    pbVar57 = pbVar57 + 1;
                    if (pbVar69 == pbVar57) goto LAB_001034b9;
                  } while (*(char *)((long)&word_fastmap + (ulong)*pbVar57) != '\0');
                }
              }
              else {
                iVar36 = re_match((re_pattern_buffer *)&DAT_001011a8,(char *)pbVar57,
                                  (int)pbVar69 - (int)pbVar57,0,(re_registers *)0x0);
                if (iVar36 == -2) goto LAB_001030a3;
                if (iVar36 == -1) {
                  iVar36 = 1;
                }
                pbVar57 = pbVar57 + iVar36;
                pbVar58 = keyafter;
                lVar61 = keyafter_max_width;
              }
            } while (pbVar57 < pbVar69);
LAB_001034b9:
            lVar53 = *(long *)(pbVar55 + 0x10);
          }
          if (pbVar57 <= keyafter + lVar61) {
            DAT_00100d48 = pbVar57;
          }
          keyafter_truncation = truncation_string != (undefined *)0x0 && DAT_00100d48 < pbVar69;
          pbVar58 = DAT_00100d48;
          if (keyafter < DAT_00100d48) {
            bVar72 = false;
            pbVar57 = local_b8;
            local_b8 = DAT_00100d48;
            do {
              local_b8 = local_b8 + -1;
              if ((*(byte *)((long)*local_140 + (ulong)*local_b8 * 2 + 1) & 0x20) == 0) {
                pbVar58 = DAT_00100d48;
                if (bVar72) {
                  pbVar58 = pbVar57;
                }
                break;
              }
              bVar72 = true;
              pbVar57 = local_b8;
              pbVar58 = local_b8;
            } while (local_b8 != keyafter);
          }
          DAT_00100d48 = pbVar58;
          lVar61 = (long)maximum_word_length + half_line_width;
          if (-lVar61 == lVar53 || -lVar53 < lVar61) {
            before = keyafter + lVar53;
LAB_001035b1:
            DAT_00100d68 = keyafter;
            pbVar58 = DAT_00100d68;
            if (before < keyafter) {
              bVar72 = false;
              pbVar57 = local_c0;
              local_c0 = keyafter;
              do {
                local_c0 = local_c0 + -1;
                if ((*(byte *)((long)*local_140 + (ulong)*local_c0 * 2 + 1) & 0x20) == 0) {
                  pbVar58 = DAT_00100d68;
                  if (bVar72) {
                    pbVar58 = pbVar57;
                  }
                  break;
                }
                bVar72 = true;
                pbVar57 = local_c0;
                pbVar58 = local_c0;
              } while (local_c0 != before);
            }
LAB_00103629:
            DAT_00100d68 = pbVar58;
            pbVar58 = before;
            pbVar57 = before;
            if (before + before_max_width < DAT_00100d68) {
              do {
                if (word_regex == (char *)0x0) {
                  if (*(char *)((long)&word_fastmap + (ulong)*before) != '\0') {
                    bVar72 = false;
                    pbVar57 = before;
                    pbVar63 = local_e0;
                    if (DAT_00100d68 <= before) goto LAB_00103884;
                    goto LAB_00103958;
                  }
                  before = before + 1;
                  goto LAB_00103884;
                }
                iVar36 = re_match((re_pattern_buffer *)&DAT_001011a8,(char *)before,
                                  (int)DAT_00100d68 - (int)before,0,(re_registers *)0x0);
                if (iVar36 == -2) goto LAB_001030a3;
                if (iVar36 == -1) {
                  iVar36 = 1;
                }
                before = before + iVar36;
                pbVar57 = before;
              } while (before + before_max_width < DAT_00100d68);
            }
            goto LAB_001036b0;
          }
          pbVar58 = keyafter + -lVar61;
          if (word_regex == (char *)0x0) {
            if (*(char *)((long)&word_fastmap + (ulong)*pbVar58) == '\0') {
              before = pbVar58 + 1;
              goto LAB_001035b1;
            }
            before = pbVar58;
            if (pbVar58 < keyafter) {
              do {
                if (*(char *)((long)&word_fastmap + (ulong)*before) == '\0') goto LAB_001035b1;
                before = before + 1;
                pbVar58 = keyafter;
              } while (keyafter != before);
            }
            DAT_00100d68 = keyafter;
            before = pbVar58;
            pbVar58 = DAT_00100d68;
            goto LAB_00103629;
          }
          iVar36 = re_match((re_pattern_buffer *)&DAT_001011a8,(char *)pbVar58,(int)lVar61,0,
                            (re_registers *)0x0);
          if (iVar36 != -2) {
            if (iVar36 == -1) {
              iVar36 = 1;
            }
            before = pbVar58 + iVar36;
            goto LAB_001035b1;
          }
LAB_001030a3:
          matcher_error();
LAB_001030a8:
          if ((gnu_extensions == 0) || (input_reference != '\0')) {
            context_regex = "\n";
          }
          else {
            context_regex = "[.?!][]\"\')}]*\\($\\|\t\\|  \\)[ \t\n]*";
          }
LAB_001030c3:
          compile_regex(&context_regex);
LAB_0010268f:
          if (word_regex == (char *)0x0) {
            if (break_file != (char *)0x0) goto LAB_00103132;
            if (gnu_extensions == 0) {
              puVar45 = &word_fastmap;
              for (lVar53 = 0x20; lVar53 != 0; lVar53 = lVar53 + -1) {
                *puVar45 = 0x101010101010101;
                puVar45 = puVar45 + (ulong)bVar73 * -2 + 1;
              }
              DAT_00100f80 = 0;
              _DAT_00100f69 = 0;
            }
            else {
              ppuVar40 = __ctype_b_loc();
              lVar53 = 0;
              pbVar55 = (byte *)&word_fastmap;
              do {
                puVar3 = (undefined2 *)((long)*ppuVar40 + lVar53);
                lVar53 = lVar53 + 2;
                *pbVar55 = (byte)((ushort)*puVar3 >> 10) & 1;
                pbVar55 = pbVar55 + 1;
              } while (lVar53 != 0x200);
            }
          }
          else {
            compile_regex(&word_regex);
            if (break_file != (char *)0x0) {
LAB_00103132:
              swallow_file_in_memory(break_file,&local_68);
              puVar45 = &word_fastmap;
              for (lVar53 = 0x20; lVar53 != 0; lVar53 = lVar53 + -1) {
                *puVar45 = 0x101010101010101;
                puVar45 = puVar45 + (ulong)bVar73 * -2 + 1;
              }
              ppbVar68 = local_68;
              if (local_68 < ppbStack_60) {
                do {
                  bVar5 = *(byte *)ppbVar68;
                  ppbVar68 = (byte **)((long)ppbVar68 + 1);
                  *(undefined1 *)((long)&word_fastmap + (ulong)bVar5) = 0;
                } while (ppbVar68 != ppbStack_60);
              }
              if (gnu_extensions == 0) {
                DAT_00100f80 = 0;
                _DAT_00100f69 = 0;
              }
              free(local_68);
            }
          }
          if ((ignore_file != (char *)0x0) &&
             (digest_word_file(ignore_file,&ignore_table), DAT_00100f30 == (byte *)0x0)) {
            ignore_file = (char *)0x0;
          }
          if ((only_file != (char *)0x0) &&
             (digest_word_file(only_file,&only_table), DAT_00100f10 == (ulong *)0x0)) {
            only_file = (char *)0x0;
          }
          ppbVar67 = (byte **)0x0;
          local_140 = &local_68;
          number_of_occurs = 0;
          total_line_count = 0;
          maximum_word_length = (ulong *)0x0;
          reference_max_width = 0;
        } while (number_input_files < 1);
      }
      local_f4 = SUB84(ppbVar67,0);
      ppbVar71 = (byte **)((long)ppbVar67 * 8);
      swallow_file_in_memory(input_file_name[(long)ppbVar67]);
      local_108 = (undefined8 *)(text_buffers + (long)ppbVar67 * 0x10);
      ppbVar68 = (byte **)*local_108;
      puVar65 = (uint *)ppbVar67;
      unaff_R15 = ppbVar71;
      local_110 = ppbVar68;
      if (input_reference != '\0') {
        ppbVar56 = (byte **)local_108[1];
        if (ppbVar68 < ppbVar56) {
          ppuVar40 = __ctype_b_loc();
          ppbVar41 = ppbVar68;
          goto LAB_001027c7;
        }
        goto LAB_00102f5d;
      }
      local_100 = 0;
      ppbVar56 = (byte **)local_108[1];
      in_R10 = ppbVar68;
      ppbVar42 = ppbVar68;
    } while (ppbVar56 <= ppbVar68);
  }
  goto joined_r0x00102849;
  while( true ) {
    pbVar57 = pbVar57 + 1;
    bVar72 = true;
    pbVar63 = pbVar57;
    if (pbVar57 == DAT_00100d68) break;
LAB_00103958:
    local_e0 = pbVar63;
    if (*(char *)((long)&word_fastmap + (ulong)*pbVar57) == '\0') {
      if (bVar72) {
        before = local_e0;
      }
      goto LAB_00103884;
    }
  }
  before = DAT_00100d68;
LAB_00103884:
  pbVar63 = before + before_max_width;
  bVar72 = false;
  pbVar57 = before;
  if (pbVar63 < DAT_00100d68) {
    do {
      if (*(char *)((long)&word_fastmap + (ulong)*pbVar57) == '\0') {
        pbVar57 = pbVar57 + 1;
        bVar72 = true;
        pbVar63 = pbVar57 + before_max_width;
        local_c8 = pbVar57;
      }
      else if (pbVar57 < DAT_00100d68) {
        bVar7 = false;
        pbVar51 = pbVar57;
        pbVar34 = local_e0;
        do {
          local_e0 = pbVar34;
          if (*(char *)((long)&word_fastmap + (ulong)*pbVar51) == '\0') {
            if (bVar7) {
              pbVar63 = local_e0 + before_max_width;
              pbVar57 = local_e0;
              local_c8 = local_e0;
              bVar72 = bVar7;
            }
            goto LAB_001038ae;
          }
          pbVar51 = pbVar51 + 1;
          bVar7 = true;
          pbVar34 = pbVar51;
        } while (pbVar51 != DAT_00100d68);
        pbVar63 = pbVar51 + before_max_width;
        bVar72 = true;
        local_c8 = DAT_00100d68;
        pbVar57 = DAT_00100d68;
      }
LAB_001038ae:
    } while (pbVar63 < DAT_00100d68);
    if (bVar72) {
      before = local_c8;
    }
  }
LAB_001036b0:
  before_truncation = false;
  if (truncation_string != (undefined *)0x0) {
    if (pbVar52 < pbVar57) {
      do {
        if ((*(byte *)((long)*local_140 + (ulong)pbVar57[-1] * 2 + 1) & 0x20) == 0) break;
        pbVar57 = pbVar57 + -1;
      } while (pbVar52 != pbVar57);
    }
    before_truncation = pbVar48 < pbVar57;
  }
  pbVar57 = before;
  pbVar63 = before;
  if (before < pbVar46) {
    bVar72 = false;
    pbVar51 = local_80;
    do {
      local_80 = pbVar51;
      if ((*(byte *)((long)*local_140 + (ulong)*pbVar57 * 2 + 1) & 0x20) == 0) {
        pbVar63 = before;
        if (bVar72) {
          before = local_80;
          pbVar63 = before;
        }
        break;
      }
      pbVar57 = pbVar57 + 1;
      bVar72 = true;
      pbVar63 = pbVar46;
      pbVar51 = pbVar57;
    } while (pbVar46 != pbVar57);
  }
  before = pbVar63;
  unaff_R15 = &tail;
  lVar53 = (before_max_width - ((long)DAT_00100d68 - (long)pbVar57)) - (long)gap_size;
  if (lVar53 < 1) {
    _tail = (undefined1  [16])0x0;
LAB_00103a79:
    tail_truncation = '\0';
  }
  else {
    tail = DAT_00100d48;
    pbVar57 = DAT_00100d48;
    pbVar63 = tail;
    if (DAT_00100d48 < pbVar46) {
      bVar72 = false;
      pbVar63 = local_90;
      do {
        local_90 = pbVar63;
        if ((*(byte *)((long)*local_140 + (ulong)*pbVar57 * 2 + 1) & 0x20) == 0) {
          pbVar63 = tail;
          if (bVar72) {
            tail = local_90;
            pbVar63 = tail;
          }
          break;
        }
        pbVar57 = pbVar57 + 1;
        bVar72 = true;
        pbVar63 = pbVar57;
      } while (pbVar46 != pbVar57);
    }
    tail = pbVar63;
    DAT_00100d88 = pbVar57;
    pbVar46 = tail;
    while ((pbVar57 < pbVar69 && (pbVar57 < pbVar46 + lVar53))) {
      DAT_00100d88 = pbVar57;
      if (word_regex == (char *)0x0) {
        if (*(char *)((long)&word_fastmap + (ulong)*pbVar57) == '\0') {
          pbVar57 = pbVar57 + 1;
        }
        else {
          if (pbVar69 <= pbVar57) break;
          while (*(char *)((long)&word_fastmap + (ulong)*pbVar57) != '\0') {
            pbVar57 = pbVar57 + 1;
            if (pbVar69 == pbVar57) goto LAB_001039d9;
          }
        }
      }
      else {
        iVar36 = re_match((re_pattern_buffer *)&DAT_001011a8,(char *)pbVar57,
                          (int)pbVar69 - (int)pbVar57,0,(re_registers *)0x0);
        if (iVar36 == -2) goto LAB_001030a3;
        if (iVar36 == -1) {
          iVar36 = 1;
        }
        pbVar57 = pbVar57 + iVar36;
        pbVar46 = tail;
      }
    }
LAB_001039d9:
    pbVar46 = tail;
    if (pbVar57 < tail + lVar53) {
      DAT_00100d88 = pbVar57;
    }
    if (DAT_00100d88 <= pbVar46) goto LAB_00103a79;
    keyafter_truncation = '\0';
    tail_truncation = truncation_string != (undefined *)0x0 && DAT_00100d88 < pbVar69;
    bVar72 = false;
    pbVar57 = local_a8;
    local_a8 = DAT_00100d88;
    do {
      local_a8 = local_a8 + -1;
      if ((*(byte *)((long)*local_140 + (ulong)*local_a8 * 2 + 1) & 0x20) == 0) {
        if (bVar72) {
          DAT_00100d88 = pbVar57;
        }
        goto LAB_00103a80;
      }
      bVar72 = true;
      pbVar57 = local_a8;
    } while (local_a8 != pbVar46);
    DAT_00100d88 = local_a8;
  }
LAB_00103a80:
  param_2 = &before;
  lVar53 = (keyafter_max_width - ((long)DAT_00100d48 - (long)keyafter)) - (long)gap_size;
  if (0 < lVar53) {
    DAT_00100d28 = before;
    if (pbVar52 < before) {
      bVar72 = false;
      pbVar46 = local_b0;
      local_b0 = before;
      do {
        local_b0 = local_b0 + -1;
        if ((*(byte *)((long)*local_140 + (ulong)*local_b0 * 2 + 1) & 0x20) == 0) {
          DAT_00100d28 = before;
          if (bVar72) {
            DAT_00100d28 = pbVar46;
          }
          break;
        }
        bVar72 = true;
        pbVar46 = local_b0;
        DAT_00100d28 = local_b0;
      } while (local_b0 != pbVar52);
    }
    pbVar46 = DAT_00100d28;
    pbVar52 = pbVar58 + lVar53;
    head = pbVar58;
    if (pbVar52 < pbVar46) {
      do {
        if (word_regex == (char *)0x0) {
          if (*(char *)((long)&word_fastmap + (ulong)*pbVar58) == '\0') {
            head = pbVar58 + 1;
            pbVar52 = head + lVar53;
            pbVar58 = head;
            goto LAB_00103bbb;
          }
          bVar72 = false;
          pbVar57 = pbVar58;
          pbVar63 = local_d0;
          if (pbVar58 < pbVar46) goto LAB_00103fd7;
          if (pbVar52 < pbVar46) goto LAB_00103bc4;
          head_truncation = false;
          goto LAB_00103cad;
        }
        iVar36 = re_match((re_pattern_buffer *)&DAT_001011a8,(char *)pbVar58,
                          (int)pbVar46 - (int)pbVar58,0,(re_registers *)0x0);
        if (iVar36 == -2) goto LAB_001030a3;
        if (iVar36 == -1) {
          iVar36 = 1;
        }
        pbVar58 = head + iVar36;
        pbVar46 = DAT_00100d28;
        head = pbVar58;
        pbVar52 = pbVar58 + lVar53;
      } while (pbVar52 < pbVar46);
    }
    goto LAB_00103c8a;
  }
  head_truncation = '\0';
  _head = (undefined1  [16])0x0;
LAB_00103cfe:
  ppbVar68 = &head;
  if (auto_reference == '\0') {
    if ((input_reference != '\0') &&
       (reference = keyafter + *(long *)(pbVar55 + 0x20), DAT_00100d08 = reference,
       reference < pbVar69)) {
      pbVar48 = reference;
      pbVar58 = local_98;
      cVar50 = '\0';
      do {
        local_98 = pbVar58;
        if ((*(byte *)((long)*local_140 + (ulong)*pbVar48 * 2 + 1) & 0x20) != 0) {
          DAT_00100d08 = reference;
          if (cVar50 != '\0') {
            DAT_00100d08 = local_98;
          }
          break;
        }
        pbVar48 = pbVar48 + 1;
        DAT_00100d08 = pbVar69;
        pbVar58 = pbVar48;
        cVar50 = input_reference;
      } while (pbVar69 != pbVar48);
    }
  }
  else {
    pcVar47 = (char *)input_file_name[*(int *)(pbVar55 + 0x28)];
    if (pcVar47 == (char *)0x0) {
LAB_001046d0:
      pcVar47 = "";
    }
    pcVar47 = stpcpy((char *)reference,pcVar47);
    iVar36 = __sprintf_chk(pcVar47,2,0xffffffffffffffff);
    DAT_00100d08 = (byte *)(pcVar47 + iVar36);
  }
  if (output_format == 2) {
    __printf_chk(2,".%s \"",macro_name);
    print_field(*unaff_R15,DAT_00100d88);
    if (tail_truncation != '\0') {
      fputs_unlocked(truncation_string,_stdout);
    }
    pcVar47 = _stdout->_IO_write_ptr;
    if (pcVar47 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = pcVar47 + 1;
      *pcVar47 = '\"';
    }
    else {
      __overflow(_stdout,0x22);
    }
    fwrite_unlocked(&_LC57,1,2,_stdout);
    if (before_truncation != '\0') {
      fputs_unlocked(truncation_string,_stdout);
    }
    print_field(*param_2,DAT_00100d68);
    pcVar47 = _stdout->_IO_write_ptr;
    if (pcVar47 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = pcVar47 + 1;
      *pcVar47 = '\"';
    }
    else {
      __overflow(_stdout,0x22);
    }
    fwrite_unlocked(&_LC57,1,2,_stdout);
    print_field(keyafter,DAT_00100d48);
    if (keyafter_truncation != '\0') {
      fputs_unlocked(truncation_string,_stdout);
    }
    pcVar47 = _stdout->_IO_write_ptr;
    if (pcVar47 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = pcVar47 + 1;
      *pcVar47 = '\"';
    }
    else {
      __overflow(_stdout,0x22);
    }
    fwrite_unlocked(&_LC57,1,2,_stdout);
    if (head_truncation != '\0') {
      fputs_unlocked(truncation_string,_stdout);
    }
    print_field(*ppbVar68,DAT_00100d28);
    pcVar47 = _stdout->_IO_write_ptr;
    if (pcVar47 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = pcVar47 + 1;
      *pcVar47 = '\"';
    }
    else {
      __overflow(_stdout,0x22);
    }
    if ((auto_reference != '\0') || (input_reference != '\0')) {
      fwrite_unlocked(&_LC57,1,2,_stdout);
      print_field(reference,DAT_00100d08);
      pcVar47 = _stdout->_IO_write_ptr;
      if (pcVar47 < _stdout->_IO_write_end) {
        _stdout->_IO_write_ptr = pcVar47 + 1;
        *pcVar47 = '\"';
      }
      else {
        __overflow(_stdout,0x22);
      }
    }
  }
  else if (output_format < 3) {
    if (right_reference == '\0') {
      if (auto_reference == '\0') {
        print_field(reference,DAT_00100d08);
        for (lVar53 = (long)gap_size +
                      (reference_max_width - ((long)DAT_00100d08 - (long)reference)); 0 < lVar53;
            lVar53 = lVar53 + -1) {
          pcVar47 = _stdout->_IO_write_ptr;
          if (pcVar47 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = pcVar47 + 1;
            *pcVar47 = ' ';
          }
          else {
            __overflow(_stdout,0x20);
          }
        }
      }
      else {
        print_field(reference,DAT_00100d08);
        pcVar47 = _stdout->_IO_write_ptr;
        if (pcVar47 < _stdout->_IO_write_end) {
          _stdout->_IO_write_ptr = pcVar47 + 1;
          *pcVar47 = ':';
        }
        else {
          __overflow(_stdout,0x3a);
        }
        lVar53 = (long)gap_size + (reference_max_width - ((long)DAT_00100d08 - (long)reference));
        while (lVar53 = lVar53 + -1, 0 < lVar53) {
          pcVar47 = _stdout->_IO_write_ptr;
          if (pcVar47 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = pcVar47 + 1;
            *pcVar47 = ' ';
          }
          else {
            __overflow(_stdout,0x20);
          }
        }
      }
    }
    if (*unaff_R15 < DAT_00100d88) {
      print_field(*unaff_R15,DAT_00100d88);
      if (tail_truncation == '\0') {
        lVar53 = (half_line_width - (long)gap_size) - ((long)DAT_00100d68 - (long)*param_2);
        sVar43 = truncation_string_length;
        if (before_truncation != '\0') goto LAB_00104a57;
        lVar53 = lVar53 - ((long)DAT_00100d88 - (long)*unaff_R15);
        sVar43 = 0;
      }
      else {
        fputs_unlocked(truncation_string,_stdout);
        lVar53 = (half_line_width - (long)gap_size) - ((long)DAT_00100d68 - (long)*param_2);
        sVar43 = truncation_string_length;
        if (before_truncation == '\0') {
          sVar43 = 0;
        }
LAB_00104a57:
        lVar53 = (lVar53 - sVar43) - ((long)DAT_00100d88 - (long)*unaff_R15);
        sVar43 = truncation_string_length;
        if (tail_truncation == '\0') {
          sVar43 = 0;
        }
      }
      for (lVar53 = lVar53 - sVar43; 0 < lVar53; lVar53 = lVar53 + -1) {
        pcVar47 = _stdout->_IO_write_ptr;
        if (pcVar47 < _stdout->_IO_write_end) {
          _stdout->_IO_write_ptr = pcVar47 + 1;
          *pcVar47 = ' ';
        }
        else {
          __overflow(_stdout,0x20);
        }
      }
LAB_00103e9f:
      if (before_truncation != '\0') {
LAB_0010475d:
        fputs_unlocked(truncation_string,_stdout);
      }
    }
    else {
      lVar53 = (half_line_width - (long)gap_size) - ((long)DAT_00100d68 - (long)*param_2);
      if (before_truncation != '\0') {
        lVar53 = lVar53 - truncation_string_length;
        if (0 < lVar53) goto LAB_00103e79;
        goto LAB_0010475d;
      }
      if (0 < lVar53) {
LAB_00103e79:
        do {
          pcVar47 = _stdout->_IO_write_ptr;
          if (pcVar47 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = pcVar47 + 1;
            *pcVar47 = ' ';
          }
          else {
            __overflow(_stdout,0x20);
          }
          lVar53 = lVar53 + -1;
        } while (lVar53 != 0);
        goto LAB_00103e9f;
      }
    }
    print_field(*param_2,DAT_00100d68);
    puVar59 = gap_size;
    if (0 < (long)gap_size) {
      do {
        pcVar47 = _stdout->_IO_write_ptr;
        if (pcVar47 < _stdout->_IO_write_end) {
          _stdout->_IO_write_ptr = pcVar47 + 1;
          *pcVar47 = ' ';
        }
        else {
          __overflow(_stdout,0x20);
        }
        puVar59 = (ulong *)((long)puVar59 + -1);
      } while (puVar59 != (ulong *)0x0);
    }
    print_field(keyafter,DAT_00100d48);
    if (keyafter_truncation == '\0') {
      pbVar48 = *ppbVar68;
      if (DAT_00100d28 <= pbVar48) goto LAB_00103f25;
      lVar53 = half_line_width - ((long)DAT_00100d48 - (long)keyafter);
      sVar43 = 0;
LAB_0010490d:
      lVar53 = (lVar53 - sVar43) - ((long)DAT_00100d28 - (long)pbVar48);
      if (head_truncation == '\0') {
        if (0 < lVar53) goto LAB_00104936;
      }
      else {
        lVar53 = lVar53 - truncation_string_length;
        if (0 < lVar53) {
LAB_00104936:
          do {
            pcVar47 = _stdout->_IO_write_ptr;
            if (pcVar47 < _stdout->_IO_write_end) {
              _stdout->_IO_write_ptr = pcVar47 + 1;
              *pcVar47 = ' ';
            }
            else {
              __overflow(_stdout,0x20);
            }
            lVar53 = lVar53 + -1;
          } while (lVar53 != 0);
          if (head_truncation == '\0') goto LAB_00104969;
        }
        fputs_unlocked(truncation_string,_stdout);
      }
LAB_00104969:
      print_field(*ppbVar68,DAT_00100d28);
LAB_001048d2:
      if (auto_reference == '\0') {
LAB_00103f4c:
        if (input_reference == '\0') goto LAB_001042c8;
      }
      puVar59 = gap_size;
      if (right_reference != '\0') {
        for (; 0 < (long)puVar59; puVar59 = (ulong *)((long)puVar59 + -1)) {
          pcVar47 = _stdout->_IO_write_ptr;
          if (pcVar47 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = pcVar47 + 1;
            *pcVar47 = ' ';
          }
          else {
            __overflow(_stdout,0x20);
          }
        }
        print_field(reference,DAT_00100d08);
      }
    }
    else {
      fputs_unlocked(truncation_string,_stdout);
      pbVar48 = *ppbVar68;
      if (pbVar48 < DAT_00100d28) {
        lVar53 = half_line_width - ((long)DAT_00100d48 - (long)keyafter);
        sVar43 = truncation_string_length;
        if (keyafter_truncation == '\0') {
          sVar43 = 0;
        }
        goto LAB_0010490d;
      }
LAB_00103f25:
      if (auto_reference == '\0') {
        if (input_reference != '\0') {
          if (right_reference != '\0') goto LAB_0010487b;
          goto LAB_00103f4c;
        }
      }
      else if (right_reference != '\0') {
LAB_0010487b:
        sVar43 = 0;
        if (keyafter_truncation != '\0') {
          sVar43 = truncation_string_length;
        }
        for (lVar53 = (half_line_width - ((long)DAT_00100d48 - (long)keyafter)) - sVar43; 0 < lVar53
            ; lVar53 = lVar53 + -1) {
          pcVar47 = _stdout->_IO_write_ptr;
          if (pcVar47 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = pcVar47 + 1;
            *pcVar47 = ' ';
          }
          else {
            __overflow(_stdout,0x20);
          }
        }
        goto LAB_001048d2;
      }
    }
  }
  else {
    if (output_format != 3) goto LAB_001042e8;
    __printf_chk(2,&_LC58,macro_name);
    pcVar47 = _stdout->_IO_write_ptr;
    if (pcVar47 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = pcVar47 + 1;
      *pcVar47 = '{';
    }
    else {
      __overflow(_stdout,0x7b);
    }
    print_field(*unaff_R15,DAT_00100d88);
    fwrite_unlocked(&_LC59,1,2,_stdout);
    print_field(*param_2,DAT_00100d68);
    fwrite_unlocked(&_LC59,1,2,_stdout);
    pbVar58 = DAT_00100d48;
    pbVar48 = keyafter;
    if (word_regex == (char *)0x0) {
      pbVar52 = keyafter;
      if (*(char *)((long)&word_fastmap + (ulong)*keyafter) == '\0') {
        pbVar52 = keyafter + 1;
      }
      else {
        while ((pbVar52 < DAT_00100d48 && (*(char *)((long)&word_fastmap + (ulong)*pbVar52) != '\0')
               )) {
          pbVar52 = pbVar52 + 1;
        }
      }
    }
    else {
      iVar36 = re_match((re_pattern_buffer *)&DAT_001011a8,(char *)keyafter,
                        (int)DAT_00100d48 - (int)keyafter,0,(re_registers *)0x0);
      if (iVar36 == -2) goto LAB_001030a3;
      if (iVar36 == -1) {
        iVar36 = 1;
      }
      pbVar52 = pbVar48 + iVar36;
    }
    print_field(pbVar48,pbVar52);
    fwrite_unlocked(&_LC59,1,2,_stdout);
    print_field(pbVar52,pbVar58);
    fwrite_unlocked(&_LC59,1,2,_stdout);
    print_field(*ppbVar68,DAT_00100d28);
    pcVar47 = _stdout->_IO_write_ptr;
    if (pcVar47 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = pcVar47 + 1;
      *pcVar47 = '}';
    }
    else {
      __overflow(_stdout,0x7d);
    }
    if ((auto_reference != '\0') || (input_reference != '\0')) {
      pcVar47 = _stdout->_IO_write_ptr;
      if (pcVar47 < _stdout->_IO_write_end) {
        _stdout->_IO_write_ptr = pcVar47 + 1;
        *pcVar47 = '{';
      }
      else {
        __overflow(_stdout,0x7b);
      }
      print_field(reference,DAT_00100d08);
      pcVar47 = _stdout->_IO_write_ptr;
      if (pcVar47 < _stdout->_IO_write_end) {
        _stdout->_IO_write_ptr = pcVar47 + 1;
        *pcVar47 = '}';
      }
      else {
        __overflow(_stdout,0x7d);
      }
    }
  }
LAB_001042c8:
  pcVar47 = _stdout->_IO_write_ptr;
  if (pcVar47 < _stdout->_IO_write_end) {
    _stdout->_IO_write_ptr = pcVar47 + 1;
    *pcVar47 = '\n';
  }
  else {
    __overflow(_stdout,10);
  }
LAB_001042e8:
  local_130 = (byte **)((long)local_130 + 1);
  pbVar55 = pbVar55 + 0x30;
  if ((long)number_of_occurs <= (long)local_130) goto LAB_00104304;
  goto LAB_0010338a;
  while( true ) {
    pbVar57 = pbVar57 + 1;
    bVar72 = true;
    pbVar63 = pbVar57;
    if (pbVar57 == pbVar46) break;
LAB_00103fd7:
    local_d0 = pbVar63;
    if (*(char *)((long)&word_fastmap + (ulong)*pbVar57) == '\0') {
      if (bVar72) {
        head = local_d0;
        pbVar52 = local_d0 + lVar53;
        pbVar58 = local_d0;
      }
      goto LAB_00103bbb;
    }
  }
  head = pbVar46;
  pbVar52 = pbVar46 + lVar53;
  pbVar58 = pbVar46;
LAB_00103bbb:
  if (pbVar52 < pbVar46) {
LAB_00103bc4:
    bVar72 = false;
    do {
      if (*(char *)((long)&word_fastmap + (ulong)*pbVar58) == '\0') {
        pbVar58 = pbVar58 + 1;
        bVar72 = true;
        pbVar52 = pbVar58 + lVar53;
        local_88 = pbVar58;
      }
      else if (pbVar58 < pbVar46) {
        bVar7 = false;
        pbVar57 = pbVar58;
        pbVar63 = local_d0;
        do {
          local_d0 = pbVar63;
          if (*(char *)((long)&word_fastmap + (ulong)*pbVar57) == '\0') {
            if (bVar7) {
              pbVar52 = local_d0 + lVar53;
              pbVar58 = local_d0;
              local_88 = local_d0;
              bVar72 = bVar7;
            }
            goto LAB_00103be0;
          }
          pbVar57 = pbVar57 + 1;
          bVar7 = true;
          pbVar63 = pbVar57;
        } while (pbVar57 != pbVar46);
        bVar72 = true;
        pbVar52 = pbVar57 + lVar53;
        pbVar58 = pbVar46;
        local_88 = pbVar46;
      }
LAB_00103be0:
    } while (pbVar52 < pbVar46);
    if (bVar72) {
      head = local_88;
    }
  }
LAB_00103c8a:
  head_truncation = false;
  if (pbVar58 < pbVar46) {
    before_truncation = '\0';
    head_truncation = truncation_string != (undefined *)0x0 && pbVar48 < pbVar58;
  }
LAB_00103cad:
  if (head < pbVar46) {
    bVar72 = false;
    pbVar48 = head;
    pbVar58 = local_a0;
    do {
      local_a0 = pbVar58;
      if ((*(byte *)((long)*local_140 + (ulong)*pbVar48 * 2 + 1) & 0x20) == 0) {
        pbVar48 = local_a0;
        if (!bVar72) goto LAB_00103cfe;
        break;
      }
      pbVar48 = pbVar48 + 1;
      bVar72 = true;
      pbVar58 = pbVar48;
    } while (pbVar48 != pbVar46);
    head = pbVar48;
  }
  goto LAB_00103cfe;
LAB_001027c7:
  if ((*(byte *)((long)*ppuVar40 + (ulong)*(byte *)ppbVar41 * 2 + 1) & 0x20) != 0)
  goto code_r0x001027d1;
  ppbVar41 = (byte **)((long)ppbVar41 + 1);
  in_R10 = ppbVar56;
  if (ppbVar41 == ppbVar56) goto LAB_00104baf;
  goto LAB_001027c7;
code_r0x001027d1:
  local_100 = (long)ppbVar41 - (long)ppbVar68;
  in_R10 = ppbVar41;
  ppbVar42 = ppbVar41;
  if (ppbVar41 < ppbVar56) {
    do {
      in_R10 = ppbVar41;
      ppbVar42 = ppbVar41;
      if ((*(byte *)((long)*ppuVar40 + (ulong)*(byte *)ppbVar41 * 2 + 1) & 0x20) == 0) break;
      ppbVar41 = (byte **)((long)ppbVar41 + 1);
      in_R10 = ppbVar56;
      ppbVar42 = ppbVar56;
    } while (ppbVar41 != ppbVar56);
  }
  goto joined_r0x00102849;
  while (local_130 = (byte **)((long)local_130 + 1), local_130 != unaff_R15) {
LAB_00102f11:
    if ((*(byte *)((long)*ppuVar40 + (ulong)*(byte *)local_130 * 2 + 1) & 0x20) == 0) break;
  }
  goto LAB_00102bc9;
}


