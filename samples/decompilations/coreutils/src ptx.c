
/* WARNING: Unknown calling convention */

void unescape_string(char *string)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  char cVar7;
  
  bVar4 = *string;
  pbVar3 = (byte *)string;
joined_r0x0010000b:
  if (bVar4 != 0) {
    pbVar5 = (byte *)string + 1;
    if (bVar4 == 0x5c) {
      if (((byte *)string)[1] == 0) goto LAB_00100069;
      switch(((byte *)string)[1]) {
      case 0x30:
        bVar4 = 0;
        pbVar2 = (byte *)string + 5;
        pbVar5 = (byte *)string + 2;
        do {
          string = (char *)pbVar5;
          if (7 < (byte)(*string - 0x30U)) break;
          pbVar5 = (byte *)string + 1;
          bVar4 = (*string - 0x30U) + bVar4 * '\b';
          string = (char *)pbVar2;
        } while (pbVar2 != pbVar5);
        *pbVar3 = bVar4;
        pbVar3 = pbVar3 + 1;
        bVar4 = *string;
        break;
      default:
        *pbVar3 = 0x5c;
        pbVar3[1] = ((byte *)string)[1];
        bVar4 = ((byte *)string)[2];
        string = (char *)((byte *)string + 2);
        pbVar3 = pbVar3 + 2;
        break;
      case 0x61:
        *pbVar3 = 7;
        string = (char *)((byte *)string + 2);
        bVar4 = *string;
        pbVar3 = pbVar3 + 1;
        break;
      case 0x62:
        *pbVar3 = 8;
        string = (char *)((byte *)string + 2);
        bVar4 = *string;
        pbVar3 = pbVar3 + 1;
        break;
      case 99:
        goto switchD_00100054_caseD_63;
      case 0x66:
        *pbVar3 = 0xc;
        string = (char *)((byte *)string + 2);
        bVar4 = *string;
        pbVar3 = pbVar3 + 1;
        break;
      case 0x6e:
        *pbVar3 = 10;
        string = (char *)((byte *)string + 2);
        bVar4 = *string;
        pbVar3 = pbVar3 + 1;
        break;
      case 0x72:
        *pbVar3 = 0xd;
        string = (char *)((byte *)string + 2);
        bVar4 = *string;
        pbVar3 = pbVar3 + 1;
        break;
      case 0x74:
        *pbVar3 = 9;
        string = (char *)((byte *)string + 2);
        bVar4 = *string;
        pbVar3 = pbVar3 + 1;
        break;
      case 0x76:
        *pbVar3 = 0xb;
        string = (char *)((byte *)string + 2);
        bVar4 = *string;
        pbVar3 = pbVar3 + 1;
        break;
      case 0x78:
        string = (char *)((byte *)string + 2);
        iVar6 = 0;
        bVar4 = 0;
        do {
          bVar1 = *string;
          if ((0x36 < (byte)(bVar1 - 0x30)) ||
             ((0x7e0000007e03ffU >> ((ulong)(bVar1 - 0x30) & 0x3f) & 1) == 0)) {
            if (iVar6 == 0) {
              pbVar3[0] = 0x5c;
              pbVar3[1] = 0x78;
              bVar4 = *string;
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
          string = (char *)((byte *)string + 1);
        } while (iVar6 != 3);
        *pbVar3 = bVar4;
        bVar4 = *string;
        pbVar3 = pbVar3 + 1;
      }
    }
    else {
      *pbVar3 = bVar4;
      bVar4 = ((byte *)string)[1];
      string = (char *)pbVar5;
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



/* WARNING: Unknown calling convention */

int compare_words(void *void_first,void *void_second)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = *(long *)((long)void_second + 8);
  lVar2 = *(long *)((long)void_first + 8);
  lVar5 = lVar2;
  if (lVar1 <= lVar2) {
    lVar5 = lVar1;
  }
  if (ignore_case) {
    if (0 < lVar5) {
                    /* WARNING: Load size is inaccurate */
      lVar4 = 0;
                    /* WARNING: Load size is inaccurate */
      do {
        if ((uint)folded_chars[*(byte *)(*void_first + lVar4)] -
            (uint)folded_chars[*(byte *)(*void_second + lVar4)] != 0) {
          return (uint)folded_chars[*(byte *)(*void_first + lVar4)] -
                 (uint)folded_chars[*(byte *)(*void_second + lVar4)];
        }
        lVar4 = lVar4 + 1;
      } while (lVar5 != lVar4);
    }
  }
  else if (0 < lVar5) {
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
    lVar4 = 0;
    do {
      iVar3 = (uint)*(byte *)(*void_first + lVar4) - (uint)*(byte *)(*void_second + lVar4);
      if (iVar3 != 0) {
        return iVar3;
      }
      lVar4 = lVar4 + 1;
    } while (lVar5 != lVar4);
  }
  return (uint)(lVar1 < lVar2) - (uint)(lVar2 < lVar1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void matcher_error(void)

{
  re_pattern_buffer *__buffer;
  undefined8 uVar1;
  int *piVar2;
  uchar *puVar3;
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
  bVar10 = ignore_case == false;
  __buffer = (re_pattern_buffer *)(puVar8 + 1);
  pcVar9 = (char *)*puVar8;
  puVar8[5] = puVar8 + 9;
  puVar3 = folded_chars;
  if (bVar10) {
    puVar3 = (uchar *)0x0;
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
/* WARNING: Unknown calling convention */

void compile_regex(regex_data *regex)

{
  re_pattern_buffer *__buffer;
  _Bool _Var1;
  uchar *puVar2;
  size_t __length;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  long *plVar8;
  char *pcVar9;
  long in_FS_OFFSET;
  long lStack_40;
  long lStack_38;
  undefined8 uStack_28;
  re_pattern_buffer *prStack_20;
  
  _Var1 = ignore_case;
  __buffer = &regex->pattern;
  pcVar9 = regex->string;
  (regex->pattern).fastmap = regex->fastmap;
  puVar2 = folded_chars;
  if (!_Var1) {
    puVar2 = (uchar *)0x0;
  }
  (regex->pattern).buffer = (re_dfa_t *)0x0;
  (regex->pattern).allocated = 0;
  (regex->pattern).translate = puVar2;
  prStack_20 = (re_pattern_buffer *)0x100316;
  __length = strlen(pcVar9);
  prStack_20 = (re_pattern_buffer *)0x100324;
  pcVar3 = re_compile_pattern(pcVar9,__length,(re_pattern_buffer *)__buffer);
  if (pcVar3 == (char *)0x0) {
    re_compile_fastmap((re_pattern_buffer *)__buffer);
    return;
  }
  prStack_20 = (re_pattern_buffer *)0x100340;
  uVar4 = quote(pcVar9);
  prStack_20 = (re_pattern_buffer *)0x100356;
  uVar5 = dcgettext(0,"%s (for regexp %s)",5);
  plVar8 = (long *)0x0;
  pcVar9 = (char *)0x1;
  prStack_20 = (re_pattern_buffer *)0x10036d;
  error(1,0,uVar5,pcVar3,uVar4);
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_28 = uVar4;
  prStack_20 = __buffer;
  if ((pcVar9 != (char *)0x0) && (*pcVar9 != '\0')) {
    if (*pcVar9 == '-') goto LAB_00100440;
    goto LAB_001003ed;
  }
  while( true ) {
    lVar6 = fread_file(_stdin,0,&lStack_40);
    *plVar8 = lVar6;
    if (lVar6 != 0) break;
    pcVar9 = "-";
    while( true ) {
      uVar4 = quotearg_n_style_colon(0,3,pcVar9);
      piVar7 = __errno_location();
      pcVar9 = (char *)0x1;
      error(1,*piVar7,&_LC4,uVar4);
LAB_00100440:
      if (pcVar9[1] == '\0') break;
LAB_001003ed:
      lVar6 = read_file();
      *plVar8 = lVar6;
      if (lVar6 != 0) goto LAB_001003c3;
    }
  }
  clearerr_unlocked(_stdin);
  lVar6 = *plVar8;
LAB_001003c3:
  plVar8[1] = lVar6 + lStack_40;
  if (lStack_38 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void swallow_file_in_memory(char *file_name,BLOCK *block)

{
  char *pcVar1;
  undefined8 uVar2;
  int *piVar3;
  long in_FS_OFFSET;
  size_t used_length;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((file_name != (char *)0x0) && (*file_name != '\0')) {
    if (*file_name == '-') goto LAB_00100440;
    goto LAB_001003ed;
  }
  while( true ) {
    pcVar1 = (char *)fread_file(_stdin,0,&used_length);
    block->start = pcVar1;
    if (pcVar1 != (char *)0x0) break;
    file_name = "-";
    while( true ) {
      uVar2 = quotearg_n_style_colon(0,3,file_name);
      piVar3 = __errno_location();
      file_name = (char *)0x1;
      error(1,*piVar3,&_LC4,uVar2);
LAB_00100440:
      if (file_name[1] == '\0') break;
LAB_001003ed:
      pcVar1 = (char *)read_file();
      block->start = pcVar1;
      if (pcVar1 != (char *)0x0) goto LAB_001003c3;
    }
  }
  clearerr_unlocked(_stdin);
  pcVar1 = block->start;
LAB_001003c3:
  block->end = pcVar1 + used_length;
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Unknown calling convention */

void digest_word_file(char *file_name,WORD_TABLE *table)

{
  long lVar1;
  WORD *__base;
  char *pcVar2;
  size_t __nmemb;
  long in_FS_OFFSET;
  BLOCK file_contents;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  swallow_file_in_memory(file_name,&file_contents);
  __base = (WORD *)0x0;
  table->start = (WORD *)0x0;
  __nmemb = 0;
  table->alloc = 0;
  table->length = 0;
  while (pcVar2 = file_contents.start, file_contents.start < file_contents.end) {
    do {
      if (*pcVar2 == '\n') {
        if (pcVar2 <= file_contents.start) goto joined_r0x00100508;
        break;
      }
      pcVar2 = pcVar2 + 1;
    } while (pcVar2 != file_contents.end);
    if (table->alloc == __nmemb) {
      __base = (WORD *)xpalloc(__base,&table->alloc,1,0xffffffffffffffff,0x10);
      __nmemb = table->length;
      table->start = __base;
    }
    __base[__nmemb].start = file_contents.start;
    __base[__nmemb].size = (long)pcVar2 - (long)file_contents.start;
    table->length = __nmemb + 1;
    __nmemb = __nmemb + 1;
joined_r0x00100508:
    if (file_contents.end <= pcVar2) break;
    file_contents.start = pcVar2 + 1;
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  qsort(__base,__nmemb,0x10,compare_words);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void print_field(BLOCK field)

{
  byte bVar1;
  byte *pbVar2;
  char *pcVar3;
  uint uVar4;
  byte *pbVar5;
  
  pbVar5 = (byte *)field.start;
  if (field.end <= pbVar5) {
    return;
  }
  do {
    bVar1 = *pbVar5;
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
    pbVar5 = pbVar5 + 1;
    if ((byte *)field.end == pbVar5) {
      return;
    }
  } while( true );
}



/* WARNING: Unknown calling convention */

int compare_occurs(void *void_first,void *void_second)

{
  int iVar1;
  
  iVar1 = compare_words(void_first,void_second);
  if (iVar1 == 0) {
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
    iVar1 = (uint)(*void_second < *void_first) - (uint)(*void_first < *void_second);
  }
  return iVar1;
}



_Bool search_table(WORD *word,WORD_TABLE *table)

{
  int iVar1;
  long in_RDX;
  long lVar2;
  long lVar3;
  
  lVar3 = 0;
  while( true ) {
    lVar2 = in_RDX;
    do {
      in_RDX = lVar2;
      if (in_RDX <= lVar3) {
        return false;
      }
      lVar2 = (in_RDX >> 1) + (lVar3 >> 1) + (ulong)((uint)in_RDX & (uint)lVar3 & 1);
      iVar1 = compare_words(word,&table->start + lVar2 * 2);
    } while (iVar1 < 0);
    if (iVar1 == 0) break;
    lVar3 = lVar2 + 1;
  }
  return true;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void usage(int status)

{
  FILE *pFVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  infomap *piVar6;
  undefined *puVar7;
  infomap infomap [7];
  
  uVar5 = _program_name;
  piVar6 = infomap;
  if (status != 0) {
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
  infomap[0].program = "[";
  infomap[0].node = "test invocation";
  infomap[1].program = "coreutils";
  infomap[1].node = "Multi-call invocation";
  infomap[2].program = "sha224sum";
  infomap[2].node = "sha2 utilities";
  infomap[3].program = "sha256sum";
  infomap[3].node = "sha2 utilities";
  infomap[4].program = "sha384sum";
  infomap[4].node = "sha2 utilities";
  infomap[5].program = "sha512sum";
  infomap[5].node = "sha2 utilities";
  infomap[6].program = (char *)0x0;
  infomap[6].node = (char *)0x0;
  do {
    iVar2 = strcmp("ptx",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)piVar6 + 0x10);
    piVar6 = (infomap *)((long)piVar6 + 0x10);
  } while (pcVar4 != (char *)0x0);
  puVar7 = *(undefined **)((long)piVar6 + 8);
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
  exit(status);
}



/* WARNING (jumptable): Heritage AFTER dead removal. Revisit: 0x00100cc0 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */
/* WARNING: Unknown calling convention */

int main(int argc,char **argv)

{
  undefined4 *puVar1;
  OCCURS *pOVar2;
  ushort *puVar3;
  undefined2 *puVar4;
  ushort *puVar5;
  byte bVar6;
  long lVar7;
  ushort *puVar8;
  char *pcVar9;
  idx_t aiVar10 [1];
  char **ppcVar11;
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
  ushort uVar32;
  ushort uVar33;
  ushort uVar34;
  ushort uVar35;
  byte *pbVar36;
  idx_t iVar37;
  _Bool _Var38;
  int iVar39;
  int iVar40;
  undefined8 uVar41;
  long lVar42;
  __int32_t **pp_Var43;
  BLOCK *pBVar44;
  ushort **ppuVar45;
  byte *pbVar46;
  size_t sVar47;
  char *pcVar48;
  undefined8 uVar49;
  byte *pbVar50;
  byte *pbVar51;
  int *piVar52;
  long lVar53;
  uchar *puVar54;
  byte *pbVar55;
  byte *pbVar56;
  byte *pbVar57;
  idx_t iVar58;
  byte *pbVar59;
  char cVar60;
  byte *pbVar61;
  byte *pbVar62;
  char cVar63;
  byte *pbVar64;
  long lVar65;
  intmax_t iVar66;
  intmax_t iVar67;
  byte *pbVar68;
  long in_FS_OFFSET;
  bool bVar69;
  byte bVar70;
  ushort uVar71;
  ushort uVar72;
  ushort uVar73;
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
  BLOCK field;
  BLOCK field_00;
  BLOCK field_01;
  BLOCK field_02;
  OCCURS *local_130;
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
  intmax_t tmp;
  byte *pbStack_60;
  char ordinal_string [21];
  
  bVar70 = 0;
  lVar7 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  iVar58 = gap_size;
  iVar37 = line_width;
  do {
    line_width = iVar37;
    gap_size = iVar58;
    iVar39 = getopt_long(argc,argv,"AF:GM:ORS:TW:b:i:fg:o:trw:");
    if (iVar39 == -1) {
      if (_optind == argc) {
        input_file_name = (char **)xmalloc(8);
        file_line_count = (intmax_t *)xmalloc(8);
        text_buffers = (BLOCK *)xmalloc(0x10);
        number_input_files = 1;
        *input_file_name = (char *)0x0;
        break;
      }
      if (gnu_extensions != false) {
        number_input_files = argc - _optind;
        input_file_name = (char **)xnmalloc((long)number_input_files,8);
        file_line_count = (intmax_t *)xnmalloc((long)number_input_files,8);
        text_buffers = (BLOCK *)xnmalloc((long)number_input_files,0x10);
        ppcVar11 = input_file_name;
        lVar53 = (long)number_input_files;
        if (0 < number_input_files) {
          lVar42 = (long)_optind;
          lVar65 = (long)(_optind + 1);
          do {
            pcVar48 = argv[lVar65 + -1];
            if (*pcVar48 == '\0') {
              pcVar48 = (char *)0x0;
            }
            else {
              iVar39 = strcmp(pcVar48,"-");
              if (iVar39 == 0) {
                pcVar48 = (char *)0x0;
              }
            }
            ppcVar11[(lVar65 + -1) - lVar42] = pcVar48;
            _optind = (int)lVar65;
            bVar69 = lVar65 != lVar53 + lVar42;
            lVar65 = lVar65 + 1;
          } while (bVar69);
        }
        break;
      }
      number_input_files = 1;
      input_file_name = (char **)xmalloc(8);
      file_line_count = (intmax_t *)xmalloc(8);
      text_buffers = (BLOCK *)xmalloc(0x10);
      iVar39 = _optind;
      lVar53 = (long)_optind;
      pcVar48 = argv[lVar53];
      if ((*pcVar48 == '\0') || (iVar40 = strcmp(pcVar48,"-"), iVar40 == 0)) {
        *input_file_name = (char *)0x0;
      }
      else {
        *input_file_name = pcVar48;
      }
      _optind = iVar39 + 1;
      if (argc <= _optind) break;
      lVar53 = freopen_safer(argv[lVar53 + 1],&_LC46,_stdout);
      if (lVar53 == 0) {
        uVar41 = quotearg_n_style_colon(0,3,argv[_optind]);
        piVar52 = __errno_location();
        error(1,*piVar52,&_LC4,uVar41);
        goto LAB_001046dd;
      }
      _optind = _optind + 1;
      if (argc <= _optind) break;
      uVar41 = quote(argv[_optind]);
      uVar49 = dcgettext(0,"extra operand %s",5);
      error(0,0,uVar49,uVar41);
      goto switchD_001021c6_caseD_b;
    }
    if (0x77 < iVar39) goto switchD_001021c6_caseD_b;
    if (iVar39 < 10) {
      if (iVar39 == -0x83) {
        uVar41 = proper_name_lite("F. Pinard",&_LC43);
        version_etc(_stdout,&_LC8,"GNU coreutils",_Version,uVar41,0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar39 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      goto switchD_001021c6_caseD_b;
    }
    iVar58 = gap_size;
    iVar37 = line_width;
    switch(iVar39) {
    case 10:
      lVar53 = __xargmatch_internal("--format",_optarg,format_args,format_vals,4,_argmatch_die,1);
      output_format = format_vals[lVar53];
      iVar58 = gap_size;
      iVar37 = line_width;
      break;
    default:
switchD_001021c6_caseD_b:
                    /* WARNING: Subroutine does not return */
      usage(1);
    case 0x41:
      auto_reference = true;
      break;
    case 0x46:
      truncation_string = _optarg;
      unescape_string(_optarg);
      iVar58 = gap_size;
      iVar37 = line_width;
      break;
    case 0x47:
      gnu_extensions = false;
      break;
    case 0x4d:
      macro_name = _optarg;
      break;
    case 0x4f:
      output_format = ROFF_FORMAT;
      break;
    case 0x52:
      right_reference = true;
      break;
    case 0x53:
      context_regex.string = _optarg;
      unescape_string(_optarg);
      iVar58 = gap_size;
      iVar37 = line_width;
      break;
    case 0x54:
      output_format = TEX_FORMAT;
      break;
    case 0x57:
      word_regex.string = _optarg;
      unescape_string(_optarg);
      iVar58 = gap_size;
      iVar37 = line_width;
      if (*word_regex.string == '\0') {
        word_regex.string = (char *)0x0;
      }
      break;
    case 0x62:
      break_file = _optarg;
      break;
    case 0x66:
      ignore_case = true;
      break;
    case 0x67:
      iVar39 = xstrtoimax(_optarg,0,0,&tmp);
      if ((iVar39 != 0) || (iVar58 = tmp, iVar37 = line_width, tmp < 1)) {
        uVar41 = quote(_optarg);
        pcVar48 = "invalid gap width: %s";
LAB_00103056:
        do {
          uVar49 = dcgettext(0,pcVar48,5);
          error(1,0,uVar49,uVar41);
LAB_00103071:
          uVar41 = quote();
          pcVar48 = "invalid line width: %s";
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
      input_reference = true;
      break;
    case 0x74:
      break;
    case 0x77:
      iVar39 = xstrtoimax(_optarg,0,0,&tmp);
      if (iVar39 != 0) goto LAB_00103071;
      iVar58 = gap_size;
      iVar37 = tmp;
      if (tmp < 1) goto LAB_00103071;
    }
  } while( true );
  if (output_format == UNKNOWN_FORMAT) {
    output_format = ROFF_FORMAT - gnu_extensions;
  }
  if (ignore_case != false) {
    pp_Var43 = __ctype_toupper_loc();
    lVar53 = 0;
    puVar54 = folded_chars;
    do {
      puVar1 = (undefined4 *)((long)*pp_Var43 + lVar53);
      lVar53 = lVar53 + 4;
      *puVar54 = (uchar)*puVar1;
      puVar54 = puVar54 + 1;
    } while (lVar53 != 0x400);
  }
  if (context_regex.string == (char *)0x0) {
    if ((gnu_extensions == false) || (input_reference != false)) {
      context_regex.string = "\n";
    }
    else {
      context_regex.string = "[.?!][]\"\')}]*\\($\\|\t\\|  \\)[ \t\n]*";
    }
  }
  else if (*context_regex.string == '\0') {
    context_regex.string = (char *)0x0;
    goto LAB_001025d1;
  }
  compile_regex(&context_regex);
LAB_001025d1:
  if (word_regex.string == (char *)0x0) goto LAB_00102ec8;
  compile_regex(&word_regex);
  if (break_file != (char *)0x0) goto LAB_00102ed8;
LAB_001025fb:
  if ((ignore_file != (char *)0x0) &&
     (digest_word_file(ignore_file,&ignore_table), ignore_table.length == 0)) {
    ignore_file = (char *)0x0;
  }
  if ((only_file != (char *)0x0) &&
     (digest_word_file(only_file,&only_table), only_table.length == 0)) {
    only_file = (char *)0x0;
  }
  lVar53 = 0;
  number_of_occurs[0] = 0;
  total_line_count = 0;
  maximum_word_length = 0;
  reference_max_width = 0;
  if (0 < number_input_files) {
LAB_00102684:
    swallow_file_in_memory(input_file_name[lVar53],text_buffers + lVar53);
    pBVar44 = text_buffers + lVar53;
    local_128 = (byte *)pBVar44->start;
    pbVar55 = local_128;
    if (input_reference == false) {
      local_110 = 0;
      pbVar50 = (byte *)pBVar44->end;
      pbVar46 = local_128;
      if (pbVar50 <= local_128) goto LAB_00102d5c;
      goto joined_r0x00102766;
    }
    pbVar50 = (byte *)pBVar44->end;
    if (local_128 < pbVar50) {
      ppuVar45 = __ctype_b_loc();
      pbVar59 = local_128;
      do {
        if ((*(byte *)((long)*ppuVar45 + (ulong)*pbVar59 * 2 + 1) & 0x20) != 0) {
          local_110 = (long)pbVar59 - (long)local_128;
          pbVar46 = pbVar59;
          if (pbVar50 <= pbVar59) goto joined_r0x00102766;
          goto LAB_00102729;
        }
        pbVar59 = pbVar59 + 1;
      } while (pbVar59 != pbVar50);
      local_110 = (long)pbVar50 - (long)local_128;
      pbVar46 = pbVar50;
      goto joined_r0x00102766;
    }
    goto LAB_00102d5c;
  }
  goto LAB_00102d9a;
  while (pbVar59 = pbVar59 + 1, pbVar46 = pbVar50, pbVar59 != pbVar50) {
LAB_00102729:
    pbVar46 = pbVar59;
    if ((*(byte *)((long)*ppuVar45 + (ulong)*pbVar59 * 2 + 1) & 0x20) == 0) break;
  }
joined_r0x00102766:
  do {
    pbVar59 = pbVar50;
    if ((context_regex.string != (char *)0x0) &&
       (iVar39 = (int)pbVar50 - (int)pbVar55,
       iVar39 = re_search((re_pattern_buffer *)&context_regex.pattern,(char *)pbVar55,iVar39,0,
                          iVar39,(re_registers *)&context_regs), iVar39 != -1)) {
      if (iVar39 == 0) {
        uVar41 = quote(context_regex.string);
        pcVar48 = "error: regular expression has a match of length zero: %s";
        goto LAB_00103056;
      }
      if (iVar39 == -2) goto LAB_00102ec3;
      pbVar59 = pbVar55 + *context_regs.end;
    }
    local_120 = pbVar55;
    pbVar50 = pbVar59;
    if (pbVar55 < pbVar59) {
      ppuVar45 = __ctype_b_loc();
      do {
        if ((*(byte *)((long)*ppuVar45 + (ulong)pbVar50[-1] * 2 + 1) & 0x20) == 0) break;
        pbVar50 = pbVar50 + -1;
      } while (pbVar55 != pbVar50);
    }
joined_r0x00102803:
    pbVar56 = pbVar55;
    if (word_regex.string == (char *)0x0) {
      do {
        if (pbVar56 < pbVar50) {
          while (word_fastmap[*pbVar56] == '\0') {
            pbVar56 = pbVar56 + 1;
            if (pbVar50 == pbVar56) goto LAB_00102c40;
          }
          if (pbVar50 == pbVar56) goto LAB_00102c40;
          pbVar55 = pbVar56;
          if (pbVar56 < pbVar50) goto LAB_00102a05;
        }
        else if (pbVar50 == pbVar56) goto LAB_00102c40;
        pbVar56 = pbVar56 + 1;
      } while( true );
    }
    iVar39 = (int)pbVar50 - (int)pbVar55;
    iVar39 = re_search((re_pattern_buffer *)&word_regex.pattern,(char *)pbVar55,iVar39,0,iVar39,
                       (re_registers *)&word_regs);
    if (iVar39 == -2) goto LAB_00102ec3;
    if (iVar39 != -1) {
      pbVar56 = pbVar55 + *word_regs.start;
      pbVar57 = pbVar55 + *word_regs.end;
      goto LAB_00102858;
    }
LAB_00102c40:
    pbVar50 = (byte *)pBVar44->end;
    pbVar55 = pbVar59;
  } while (pbVar59 < pbVar50);
LAB_00102d5c:
  iVar39 = number_input_files;
  lVar65 = lVar53 + 1;
  total_line_count = total_line_count + 1;
  file_line_count[lVar53] = total_line_count;
  lVar53 = lVar65;
  if (iVar39 <= (int)lVar65) goto code_r0x00102d8a;
  goto LAB_00102684;
  while (pbVar55 = pbVar55 + 1, pbVar57 = pbVar50, pbVar50 != pbVar55) {
LAB_00102a05:
    if (word_fastmap[*pbVar55] == '\0') {
      if (pbVar56 != pbVar55) goto LAB_00102861;
      goto LAB_00102a20;
    }
  }
LAB_00102858:
  pbVar55 = pbVar57;
  if (pbVar56 == pbVar57) {
LAB_00102a20:
    pbVar55 = pbVar55 + 1;
    goto joined_r0x00102803;
  }
LAB_00102861:
  cVar60 = input_reference;
  pbStack_60 = pbVar55 + -(long)pbVar56;
  if (maximum_word_length < (long)pbStack_60) {
    maximum_word_length = (idx_t)pbStack_60;
  }
  tmp = (intmax_t)pbVar56;
  if (input_reference != false) {
    if (pbVar46 < pbVar56) {
      cVar63 = '\0';
      pbVar57 = pbVar46;
      iVar67 = total_line_count;
      do {
        pbVar68 = pbVar57 + 1;
        pbVar46 = pbVar68;
        if (*pbVar57 == 10) {
          iVar67 = iVar67 + 1;
          pbVar62 = (byte *)pBVar44->end;
          local_128 = pbVar68;
          cVar63 = cVar60;
          if (pbVar68 < pbVar62) {
            ppuVar45 = __ctype_b_loc();
            pbVar61 = pbVar68;
            do {
              pbVar46 = pbVar61;
              if ((*(byte *)((long)*ppuVar45 + (ulong)*pbVar46 * 2 + 1) & 0x20) != 0) {
                local_110 = (long)pbVar46 - (long)pbVar68;
                goto LAB_00102a93;
              }
              pbVar61 = pbVar46 + 1;
            } while (pbVar46 + 1 != pbVar62);
            local_110 = (long)pbVar46 - (long)pbVar57;
            pbVar46 = pbVar62;
          }
          else {
            local_110 = 0;
          }
        }
LAB_00102a93:
        pbVar57 = pbVar46;
      } while (pbVar46 < pbVar56);
      if (cVar63 != '\0') {
        total_line_count = iVar67;
      }
    }
    if (pbVar56 < pbVar46) goto joined_r0x00102803;
  }
  if (((ignore_file != (char *)0x0) &&
      (_Var38 = search_table((WORD *)&tmp,(WORD_TABLE *)ignore_table.start), _Var38)) ||
     ((only_file != (char *)0x0 &&
      (_Var38 = search_table((WORD *)&tmp,(WORD_TABLE *)only_table.start), !_Var38))))
  goto joined_r0x00102803;
  if (number_of_occurs[0] == occurs_alloc[0]) {
    occurs_table[0] = (OCCURS *)xpalloc(occurs_table[0],occurs_alloc,1,0xffffffffffffffff);
    cVar60 = input_reference;
  }
  _Var38 = auto_reference;
  iVar67 = total_line_count;
  aiVar10[0] = number_of_occurs[0];
  pOVar2 = occurs_table[0] + number_of_occurs[0];
  if (auto_reference == false) {
    if (cVar60 == '\0') goto LAB_00102964;
    pOVar2->reference = (long)local_128 - (long)pbVar56;
    if (reference_max_width < local_110) {
      reference_max_width = local_110;
    }
  }
  else {
    iVar66 = total_line_count;
    if (pbVar46 < pbVar56) {
      cVar63 = '\0';
      do {
        while (pbVar57 = pbVar46 + 1, *pbVar46 != 10) {
LAB_00102b50:
          pbVar46 = pbVar57;
          if (pbVar56 <= pbVar57) goto LAB_00102bb0;
        }
        iVar66 = iVar66 + 1;
        pbVar68 = (byte *)pBVar44->end;
        local_128 = pbVar57;
        cVar63 = _Var38;
        if (pbVar68 <= pbVar57) goto LAB_00102b50;
        ppuVar45 = __ctype_b_loc();
        pbVar46 = pbVar57;
        do {
          if ((*(byte *)((long)*ppuVar45 + (ulong)*pbVar46 * 2 + 1) & 0x20) != 0) break;
          pbVar46 = pbVar46 + 1;
        } while (pbVar46 != pbVar68);
      } while (pbVar46 < pbVar56);
LAB_00102bb0:
      if (cVar63 == '\0') {
        pOVar2->reference = iVar67;
        goto LAB_0010294f;
      }
    }
    total_line_count = iVar66;
    pOVar2->reference = total_line_count;
  }
LAB_0010294f:
  if (((local_128 == local_120) && (cVar60 != '\0')) && (local_120 < pbVar50)) {
    ppuVar45 = __ctype_b_loc();
    do {
      if ((*(byte *)((long)*ppuVar45 + (ulong)*local_120 * 2 + 1) & 0x20) != 0) {
        if (local_120 < pbVar50) goto LAB_00102d09;
        break;
      }
      local_120 = local_120 + 1;
    } while (pbVar50 != local_120);
  }
LAB_00102964:
  number_of_occurs[0] = aiVar10[0] + 1;
  (pOVar2->key).start = (char *)tmp;
  (pOVar2->key).size = (idx_t)pbStack_60;
  pOVar2->left = (long)local_120 - (long)pbVar56;
  pOVar2->right = (long)pbVar50 - (long)pbVar56;
  pOVar2->file_index = (int)lVar53;
  goto joined_r0x00102803;
  while (local_120 = local_120 + 1, pbVar50 != local_120) {
LAB_00102d09:
    if ((*(byte *)((long)*ppuVar45 + (ulong)*local_120 * 2 + 1) & 0x20) == 0) break;
  }
  goto LAB_00102964;
code_r0x00102d8a:
  if (number_of_occurs[0] != 0) {
    qsort(occurs_table[0],number_of_occurs[0],0x30,compare_occurs);
  }
LAB_00102d9a:
  if (auto_reference == false) {
LAB_00103118:
    if (input_reference == false) goto LAB_0010312c;
  }
  else {
    reference_max_width = 0;
    for (lVar53 = 0; (int)lVar53 < number_input_files; lVar53 = lVar53 + 1) {
      iVar39 = __sprintf_chk(ordinal_string,2,0x15,&_LC51);
      lVar65 = (long)iVar39;
      if (input_file_name[lVar53] != (char *)0x0) {
        sVar47 = strlen(input_file_name[lVar53]);
        lVar65 = (long)iVar39 + sVar47;
      }
      if (reference_max_width < lVar65) {
        reference_max_width = lVar65;
      }
    }
    lVar53 = reference_max_width + 2;
    reference_max_width = reference_max_width + 1;
    pcVar48 = (char *)xmalloc(lVar53);
    reference.start = pcVar48;
    if (auto_reference == false) goto LAB_00103118;
  }
  if ((right_reference == false) &&
     (line_width = line_width - (gap_size + reference_max_width), line_width < 0)) {
    line_width = 0;
  }
LAB_0010312c:
  lVar53 = line_width >> 1;
  lVar65 = lVar53 - gap_size;
  before_max_width = lVar65;
  half_line_width = lVar53;
  if ((truncation_string == (char *)0x0) || (*truncation_string == '\0')) {
    truncation_string = (char *)0x0;
  }
  else {
    keyafter_max_width = lVar53;
    truncation_string_length = strlen(truncation_string);
  }
  if (gnu_extensions == false) {
    lVar65 = -(truncation_string_length * 2 + 1);
  }
  else {
    before_max_width = lVar65 + truncation_string_length * -2;
    if (before_max_width < 0) {
      before_max_width = 0;
    }
    lVar65 = truncation_string_length * -2;
  }
  keyafter_max_width = lVar53 + lVar65;
  ppuVar45 = __ctype_b_loc();
  uVar35 = _UNK_00104b7e;
  uVar34 = _UNK_00104b7c;
  uVar33 = _UNK_00104b7a;
  uVar32 = _UNK_00104b78;
  uVar31 = _UNK_00104b76;
  uVar30 = _UNK_00104b74;
  uVar29 = _UNK_00104b72;
  uVar28 = __LC54;
  uVar27 = _UNK_00104b6e;
  uVar26 = _UNK_00104b6c;
  uVar25 = _UNK_00104b6a;
  uVar24 = _UNK_00104b68;
  uVar23 = _UNK_00104b66;
  uVar22 = _UNK_00104b64;
  uVar21 = _UNK_00104b62;
  uVar20 = __LC53;
  uVar19 = _UNK_00104b5e;
  uVar18 = _UNK_00104b5c;
  uVar17 = _UNK_00104b5a;
  uVar16 = _UNK_00104b58;
  uVar15 = _UNK_00104b56;
  uVar14 = _UNK_00104b54;
  uVar13 = _UNK_00104b52;
  uVar12 = __LC52;
  puVar8 = *ppuVar45;
  lVar53 = 0;
  do {
    puVar5 = puVar8 + lVar53 + 8;
    puVar3 = puVar8 + lVar53;
    uVar71 = ~-(ushort)((*puVar3 & uVar12) == 0) & uVar20 & uVar28;
    uVar72 = ~-(ushort)((puVar3[1] & uVar13) == 0) & uVar21 & uVar29;
    uVar73 = ~-(ushort)((puVar3[2] & uVar14) == 0) & uVar22 & uVar30;
    uVar74 = ~-(ushort)((puVar3[3] & uVar15) == 0) & uVar23 & uVar31;
    uVar75 = ~-(ushort)((puVar3[4] & uVar16) == 0) & uVar24 & uVar32;
    uVar76 = ~-(ushort)((puVar3[5] & uVar17) == 0) & uVar25 & uVar33;
    uVar77 = ~-(ushort)((puVar3[6] & uVar18) == 0) & uVar26 & uVar34;
    uVar78 = ~-(ushort)((puVar3[7] & uVar19) == 0) & uVar27 & uVar35;
    uVar79 = ~-(ushort)((*puVar5 & uVar12) == 0) & uVar20 & uVar28;
    uVar80 = ~-(ushort)((puVar5[1] & uVar13) == 0) & uVar21 & uVar29;
    uVar81 = ~-(ushort)((puVar5[2] & uVar14) == 0) & uVar22 & uVar30;
    uVar82 = ~-(ushort)((puVar5[3] & uVar15) == 0) & uVar23 & uVar31;
    uVar83 = ~-(ushort)((puVar5[4] & uVar16) == 0) & uVar24 & uVar32;
    uVar84 = ~-(ushort)((puVar5[5] & uVar17) == 0) & uVar25 & uVar33;
    uVar85 = ~-(ushort)((puVar5[6] & uVar18) == 0) & uVar26 & uVar34;
    uVar86 = ~-(ushort)((puVar5[7] & uVar19) == 0) & uVar27 & uVar35;
    edited_flag[lVar53] =
         (0 < (short)uVar71) * ((short)uVar71 < 0x100) * (char)uVar71 - (0xff < (short)uVar71);
    edited_flag[lVar53 + 1] =
         (0 < (short)uVar72) * ((short)uVar72 < 0x100) * (char)uVar72 - (0xff < (short)uVar72);
    edited_flag[lVar53 + 2] =
         (0 < (short)uVar73) * ((short)uVar73 < 0x100) * (char)uVar73 - (0xff < (short)uVar73);
    edited_flag[lVar53 + 3] =
         (0 < (short)uVar74) * ((short)uVar74 < 0x100) * (char)uVar74 - (0xff < (short)uVar74);
    edited_flag[lVar53 + 4] =
         (0 < (short)uVar75) * ((short)uVar75 < 0x100) * (char)uVar75 - (0xff < (short)uVar75);
    edited_flag[lVar53 + 5] =
         (0 < (short)uVar76) * ((short)uVar76 < 0x100) * (char)uVar76 - (0xff < (short)uVar76);
    edited_flag[lVar53 + 6] =
         (0 < (short)uVar77) * ((short)uVar77 < 0x100) * (char)uVar77 - (0xff < (short)uVar77);
    edited_flag[lVar53 + 7] =
         (0 < (short)uVar78) * ((short)uVar78 < 0x100) * (char)uVar78 - (0xff < (short)uVar78);
    edited_flag[lVar53 + 8] =
         (0 < (short)uVar79) * ((short)uVar79 < 0x100) * (char)uVar79 - (0xff < (short)uVar79);
    edited_flag[lVar53 + 9] =
         (0 < (short)uVar80) * ((short)uVar80 < 0x100) * (char)uVar80 - (0xff < (short)uVar80);
    edited_flag[lVar53 + 10] =
         (0 < (short)uVar81) * ((short)uVar81 < 0x100) * (char)uVar81 - (0xff < (short)uVar81);
    edited_flag[lVar53 + 0xb] =
         (0 < (short)uVar82) * ((short)uVar82 < 0x100) * (char)uVar82 - (0xff < (short)uVar82);
    edited_flag[lVar53 + 0xc] =
         (0 < (short)uVar83) * ((short)uVar83 < 0x100) * (char)uVar83 - (0xff < (short)uVar83);
    edited_flag[lVar53 + 0xd] =
         (0 < (short)uVar84) * ((short)uVar84 < 0x100) * (char)uVar84 - (0xff < (short)uVar84);
    edited_flag[lVar53 + 0xe] =
         (0 < (short)uVar85) * ((short)uVar85 < 0x100) * (char)uVar85 - (0xff < (short)uVar85);
    edited_flag[lVar53 + 0xf] =
         (0 < (short)uVar86) * ((short)uVar86 < 0x100) * (char)uVar86 - (0xff < (short)uVar86);
    lVar53 = lVar53 + 0x10;
  } while (lVar53 != 0x100);
  edited_flag[0xc] = '\x01';
  if (output_format == ROFF_FORMAT) {
    edited_flag[0x22] = '\x01';
  }
  else if (output_format == TEX_FORMAT) {
    for (pbVar55 = &_LC38; *pbVar55 != 0; pbVar55 = pbVar55 + 1) {
      edited_flag[*pbVar55] = '\x01';
    }
  }
  tail_truncation = false;
  head_truncation = false;
  local_130 = occurs_table[0];
  local_100 = 0;
  tail.start = (char *)0x0;
  tail.end = (char *)0x0;
  head.start = (char *)0x0;
  head.end = (char *)0x0;
  pbVar50 = local_78;
  pbVar55 = local_70;
  if (number_of_occurs[0] < 1) {
LAB_00104064:
    if (lVar7 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return 0;
  }
LAB_001032a3:
  pcVar48 = (local_130->key).start;
  pbVar57 = (byte *)(pcVar48 + (local_130->key).size);
  pbVar68 = (byte *)(pcVar48 + local_130->right);
  pbVar46 = (byte *)text_buffers[local_130->file_index].start;
  pbVar56 = (byte *)text_buffers[local_130->file_index].end;
  lVar53 = local_130->left;
  pbVar59 = (byte *)(pcVar48 + lVar53);
  lVar65 = keyafter_max_width;
  keyafter.start = pcVar48;
  keyafter.end = (char *)pbVar57;
  if (pbVar57 < pbVar68) {
    do {
      if (pcVar48 + lVar65 < pbVar57) break;
      keyafter.end = (char *)pbVar57;
      if (word_regex.string == (char *)0x0) {
        if (word_fastmap[*pbVar57] == '\0') {
          pbVar57 = pbVar57 + 1;
        }
        else {
          if (pbVar68 <= pbVar57) break;
          do {
            pbVar57 = pbVar57 + 1;
            if (pbVar68 == pbVar57) goto LAB_001033a3;
          } while (word_fastmap[*pbVar57] != '\0');
        }
      }
      else {
        iVar39 = re_match((re_pattern_buffer *)&word_regex.pattern,(char *)pbVar57,
                          (int)pbVar68 - (int)pbVar57,0,(re_registers *)0x0);
        if (iVar39 == -2) goto LAB_00102ec3;
        if (iVar39 == -1) {
          iVar39 = 1;
        }
        pbVar57 = pbVar57 + iVar39;
        pcVar48 = keyafter.start;
        lVar65 = keyafter_max_width;
      }
    } while (pbVar57 < pbVar68);
LAB_001033a3:
    lVar53 = local_130->left;
  }
  if (pbVar57 <= keyafter.start + lVar65) {
    keyafter.end = (char *)pbVar57;
  }
  keyafter_truncation = truncation_string != (char *)0x0 && keyafter.end < pbVar68;
  pbVar57 = (byte *)keyafter.end;
  if (keyafter.start < keyafter.end) {
    bVar69 = false;
    pbVar62 = pbVar50;
    pbVar50 = (byte *)keyafter.end;
    do {
      pbVar50 = pbVar50 + -1;
      if ((*(byte *)((long)*ppuVar45 + (ulong)*pbVar50 * 2 + 1) & 0x20) == 0) {
        pbVar57 = (byte *)keyafter.end;
        if (bVar69) {
          pbVar57 = pbVar62;
        }
        break;
      }
      bVar69 = true;
      pbVar62 = pbVar50;
      pbVar57 = pbVar50;
    } while (pbVar50 != (byte *)keyafter.start);
  }
  keyafter.end = (char *)pbVar57;
  lVar65 = maximum_word_length + half_line_width;
  if (-lVar65 == lVar53 || -lVar53 < lVar65) {
    pbVar57 = (byte *)(keyafter.start + lVar53);
LAB_001034b1:
    before.end = keyafter.start;
    before.start = (char *)pbVar57;
    if (pbVar57 < keyafter.start) {
      bVar69 = false;
      pbVar62 = pbVar55;
      pbVar55 = (byte *)keyafter.start;
      do {
        pbVar55 = pbVar55 + -1;
        if ((*(byte *)((long)*ppuVar45 + (ulong)*pbVar55 * 2 + 1) & 0x20) == 0) {
          if (bVar69) {
            before.end = (char *)pbVar62;
          }
          goto LAB_00103519;
        }
        bVar69 = true;
        pbVar62 = pbVar55;
      } while (pbVar55 != pbVar57);
      before.end = (char *)pbVar55;
    }
  }
  else {
    pbVar57 = (byte *)(keyafter.start + -lVar65);
    if (word_regex.string != (char *)0x0) {
      iVar39 = re_match((re_pattern_buffer *)&word_regex.pattern,(char *)pbVar57,(int)lVar65,0,
                        (re_registers *)0x0);
      if (iVar39 != -2) {
        if (iVar39 == -1) {
          iVar39 = 1;
        }
        pbVar57 = pbVar57 + iVar39;
        goto LAB_001034b1;
      }
LAB_00102ec3:
      matcher_error();
LAB_00102ec8:
      if (break_file == (char *)0x0) {
        if (gnu_extensions == false) {
LAB_001046dd:
          lVar53 = 0x20;
          pcVar48 = word_fastmap;
          while (lVar53 != 0) {
            lVar53 = lVar53 + -1;
            builtin_strncpy(pcVar48,"\x01\x01\x01\x01\x01\x01\x01\x01",8);
            pcVar48 = pcVar48 + ((ulong)bVar70 * -2 + 1) * 8;
          }
          word_fastmap[0x20] = '\0';
          word_fastmap[9] = '\0';
          word_fastmap[10] = '\0';
        }
        else {
          ppuVar45 = __ctype_b_loc();
          lVar53 = 0;
          pbVar55 = (byte *)word_fastmap;
          do {
            puVar4 = (undefined2 *)((long)*ppuVar45 + lVar53);
            lVar53 = lVar53 + 2;
            *pbVar55 = (byte)((ushort)*puVar4 >> 10) & 1;
            pbVar55 = pbVar55 + 1;
          } while (lVar53 != 0x200);
        }
      }
      else {
LAB_00102ed8:
        swallow_file_in_memory(break_file,(BLOCK *)&tmp);
        lVar53 = 0x20;
        pcVar48 = word_fastmap;
        while (lVar53 != 0) {
          lVar53 = lVar53 + -1;
          builtin_strncpy(pcVar48,"\x01\x01\x01\x01\x01\x01\x01\x01",8);
          pcVar48 = pcVar48 + ((ulong)bVar70 * -2 + 1) * 8;
        }
        pbVar55 = (byte *)tmp;
        if ((ulong)tmp < pbStack_60) {
          do {
            bVar6 = *pbVar55;
            pbVar55 = pbVar55 + 1;
            word_fastmap[bVar6] = '\0';
          } while (pbVar55 != pbStack_60);
        }
        if (gnu_extensions == false) {
          word_fastmap[0x20] = '\0';
          word_fastmap[9] = '\0';
          word_fastmap[10] = '\0';
        }
        free((void *)tmp);
      }
      goto LAB_001025fb;
    }
    if (word_fastmap[*pbVar57] == '\0') {
      pbVar57 = pbVar57 + 1;
      goto LAB_001034b1;
    }
    if (pbVar57 < keyafter.start) {
      do {
        if (word_fastmap[*pbVar57] == '\0') goto LAB_001034b1;
        pbVar57 = pbVar57 + 1;
      } while ((byte *)keyafter.start != pbVar57);
    }
    before.end = keyafter.start;
    before.start = (char *)pbVar57;
  }
LAB_00103519:
  pbVar62 = pbVar57;
  lVar53 = before_max_width;
  pbVar61 = local_98;
  pbVar64 = (byte *)before.end;
  if (pbVar57 + before_max_width < before.end) {
    do {
      while (word_regex.string != (char *)0x0) {
        iVar39 = re_match((re_pattern_buffer *)&word_regex.pattern,(char *)pbVar62,
                          (int)pbVar64 - (int)pbVar62,0,(re_registers *)0x0);
        if (iVar39 == -2) goto LAB_00102ec3;
        if (iVar39 == -1) {
          iVar39 = 1;
        }
        before.start = before.start + iVar39;
        lVar53 = before_max_width;
        pbVar62 = (byte *)before.start;
        pbVar64 = (byte *)before.end;
LAB_00103590:
        if (pbVar64 <= pbVar62 + lVar53) goto LAB_001035de;
      }
      if (word_fastmap[*pbVar62] != '\0') {
        bVar69 = false;
        pbVar51 = (byte *)before.start;
        pbVar36 = pbVar61;
        pbVar62 = (byte *)before.start;
        if (before.start < pbVar64) {
          do {
            pbVar61 = pbVar36;
            if (word_fastmap[*pbVar51] == '\0') {
              if (bVar69) {
                before.start = (char *)pbVar61;
                pbVar62 = pbVar61;
              }
              goto LAB_00103590;
            }
            pbVar51 = pbVar51 + 1;
            bVar69 = true;
            pbVar36 = pbVar51;
          } while (pbVar51 != pbVar64);
          before.start = (char *)pbVar64;
          pbVar62 = pbVar64;
        }
        goto LAB_00103590;
      }
      pbVar62 = pbVar62 + 1;
      before.start = (char *)pbVar62;
    } while (pbVar62 + lVar53 < pbVar64);
  }
LAB_001035de:
  local_98 = pbVar61;
  before_truncation = false;
  if (truncation_string != (char *)0x0) {
    if (pbVar46 < pbVar62) {
      do {
        if ((*(byte *)((long)*ppuVar45 + (ulong)pbVar62[-1] * 2 + 1) & 0x20) == 0) break;
        pbVar62 = pbVar62 + -1;
      } while (pbVar46 != pbVar62);
    }
    before_truncation = pbVar59 < pbVar62;
  }
  pbVar62 = (byte *)before.start;
  if (before.start < pbVar56) {
    bVar69 = false;
    pbVar61 = local_b0;
    do {
      local_b0 = pbVar61;
      if ((*(byte *)((long)*ppuVar45 + (ulong)*pbVar62 * 2 + 1) & 0x20) == 0) {
        if (bVar69) {
          before.start = (char *)local_b0;
        }
        goto LAB_0010366a;
      }
      pbVar62 = pbVar62 + 1;
      bVar69 = true;
      pbVar61 = pbVar62;
    } while (pbVar56 != pbVar62);
    before.start = (char *)pbVar56;
  }
LAB_0010366a:
  lVar53 = (lVar53 - ((long)pbVar64 - (long)pbVar62)) - gap_size;
  if (lVar53 < 1) {
    tail.start = (char *)0x0;
    tail.end = (char *)0x0;
LAB_00103d9f:
    tail_truncation = false;
  }
  else {
    tail.start = keyafter.end;
    pbVar62 = (byte *)keyafter.end;
    pbVar61 = (byte *)tail.start;
    if (keyafter.end < pbVar56) {
      bVar69 = false;
      pbVar61 = local_b8;
      do {
        local_b8 = pbVar61;
        if ((*(byte *)((long)*ppuVar45 + (ulong)*pbVar62 * 2 + 1) & 0x20) == 0) {
          pbVar61 = (byte *)tail.start;
          if (bVar69) {
            pbVar61 = local_b8;
          }
          break;
        }
        pbVar62 = pbVar62 + 1;
        bVar69 = true;
        pbVar61 = pbVar62;
      } while (pbVar56 != pbVar62);
    }
    tail.start = (char *)pbVar61;
    tail.end = (char *)pbVar62;
    pcVar48 = tail.start;
    while ((pbVar62 < pbVar68 && (pbVar62 < pcVar48 + lVar53))) {
      tail.end = (char *)pbVar62;
      if (word_regex.string == (char *)0x0) {
        if (word_fastmap[*pbVar62] == '\0') {
          pbVar62 = pbVar62 + 1;
        }
        else {
          if (pbVar68 <= pbVar62) break;
          while (word_fastmap[*pbVar62] != '\0') {
            pbVar62 = pbVar62 + 1;
            if (pbVar68 == pbVar62) goto LAB_00103820;
          }
        }
      }
      else {
        iVar39 = re_match((re_pattern_buffer *)&word_regex.pattern,(char *)pbVar62,
                          (int)pbVar68 - (int)pbVar62,0,(re_registers *)0x0);
        if (iVar39 == -2) goto LAB_00102ec3;
        if (iVar39 == -1) {
          iVar39 = 1;
        }
        pbVar62 = pbVar62 + iVar39;
        pcVar48 = tail.start;
      }
    }
LAB_00103820:
    pcVar48 = tail.start;
    if (pbVar62 < tail.start + lVar53) {
      tail.end = (char *)pbVar62;
    }
    if (tail.end <= pcVar48) goto LAB_00103d9f;
    keyafter_truncation = false;
    tail_truncation = truncation_string != (char *)0x0 && tail.end < pbVar68;
    bVar69 = false;
    pbVar56 = local_a8;
    local_a8 = (byte *)tail.end;
    do {
      local_a8 = local_a8 + -1;
      if ((*(byte *)((long)*ppuVar45 + (ulong)*local_a8 * 2 + 1) & 0x20) == 0) {
        if (bVar69) {
          tail.end = (char *)pbVar56;
        }
        goto LAB_001038b9;
      }
      bVar69 = true;
      pbVar56 = local_a8;
    } while (local_a8 != (byte *)pcVar48);
    tail.end = (char *)local_a8;
  }
LAB_001038b9:
  lVar53 = (keyafter_max_width - ((long)keyafter.end - (long)keyafter.start)) - gap_size;
  if (lVar53 < 1) {
    head_truncation = false;
    head.start = (char *)0x0;
    head.end = (char *)0x0;
  }
  else {
    head.end = before.start;
    pbVar56 = (byte *)head.end;
    if (pbVar46 < before.start) {
      bVar69 = false;
      pbVar62 = local_c0;
      local_c0 = (byte *)before.start;
      do {
        local_c0 = local_c0 + -1;
        if ((*(byte *)((long)*ppuVar45 + (ulong)*local_c0 * 2 + 1) & 0x20) == 0) {
          pbVar56 = (byte *)head.end;
          if (bVar69) {
            pbVar56 = pbVar62;
          }
          break;
        }
        bVar69 = true;
        pbVar62 = local_c0;
        pbVar56 = local_c0;
      } while (local_c0 != pbVar46);
    }
    head.end = (char *)pbVar56;
    head.start = (char *)pbVar57;
    pbVar46 = (byte *)head.end;
    pbVar56 = local_a0;
    if (pbVar57 + lVar53 < head.end) {
      do {
        while (word_regex.string != (char *)0x0) {
          iVar39 = re_match((re_pattern_buffer *)&word_regex.pattern,(char *)pbVar57,
                            (int)pbVar46 - (int)pbVar57,0,(re_registers *)0x0);
          if (iVar39 == -2) goto LAB_00102ec3;
          if (iVar39 == -1) {
            iVar39 = 1;
          }
          pbVar57 = (byte *)(head.start + iVar39);
          head.start = (char *)pbVar57;
          pbVar46 = (byte *)head.end;
LAB_001039ad:
          if (pbVar46 <= pbVar57 + lVar53) goto LAB_001039fa;
        }
        if (word_fastmap[*pbVar57] != '\0') {
          bVar69 = false;
          pbVar62 = (byte *)head.start;
          pbVar61 = pbVar56;
          pbVar57 = (byte *)head.start;
          if (head.start < pbVar46) {
            do {
              pbVar56 = pbVar61;
              if (word_fastmap[*pbVar62] == '\0') {
                if (bVar69) {
                  head.start = (char *)pbVar56;
                  pbVar57 = pbVar56;
                }
                goto LAB_001039ad;
              }
              pbVar62 = pbVar62 + 1;
              bVar69 = true;
              pbVar61 = pbVar62;
            } while (pbVar62 != pbVar46);
            head.start = (char *)pbVar46;
            pbVar57 = pbVar46;
          }
          goto LAB_001039ad;
        }
        pbVar57 = pbVar57 + 1;
        head.start = (char *)pbVar57;
      } while (pbVar57 + lVar53 < pbVar46);
    }
LAB_001039fa:
    local_a0 = pbVar56;
    if (pbVar57 < pbVar46) {
      before_truncation = false;
    }
    head_truncation = pbVar57 < pbVar46 && (truncation_string != (char *)0x0 && pbVar59 < pbVar57);
    if (head.start < pbVar46) {
      bVar69 = false;
      pbVar59 = (byte *)head.start;
      pbVar56 = local_c8;
      do {
        local_c8 = pbVar56;
        if ((*(byte *)((long)*ppuVar45 + (ulong)*pbVar59 * 2 + 1) & 0x20) == 0) {
          if (bVar69) {
            head.start = (char *)local_c8;
          }
          goto LAB_00103a6f;
        }
        pbVar59 = pbVar59 + 1;
        bVar69 = true;
        pbVar56 = pbVar59;
      } while (pbVar59 != pbVar46);
      head.start = (char *)pbVar59;
    }
  }
LAB_00103a6f:
  if (auto_reference == false) {
    if (input_reference != false) {
      reference.start = keyafter.start + local_130->reference;
      reference.end = reference.start;
      if (reference.start < pbVar68) {
        pbVar59 = (byte *)reference.start;
        pbVar46 = local_90;
        cVar60 = '\0';
        do {
          local_90 = pbVar46;
          if ((*(byte *)((long)*ppuVar45 + (ulong)*pbVar59 * 2 + 1) & 0x20) != 0) {
            if (cVar60 != '\0') {
              reference.end = (char *)local_90;
            }
            goto LAB_00103b08;
          }
          pbVar59 = pbVar59 + 1;
          pbVar46 = pbVar59;
          cVar60 = input_reference;
        } while (pbVar68 != pbVar59);
        reference.end = (char *)pbVar68;
      }
    }
  }
  else {
    pcVar48 = input_file_name[local_130->file_index];
    if (pcVar48 == (char *)0x0) {
      pcVar48 = "";
    }
    pcVar48 = stpcpy(reference.start,pcVar48);
    iVar39 = __sprintf_chk(pcVar48,2,0xffffffffffffffff);
    reference.end = pcVar48 + iVar39;
  }
LAB_00103b08:
  if (output_format == ROFF_FORMAT) {
    __printf_chk(2,".%s \"",macro_name);
    print_field(tail);
    if (tail_truncation != false) {
      fputs_unlocked(truncation_string,_stdout);
    }
    pcVar48 = _stdout->_IO_write_ptr;
    if (pcVar48 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = pcVar48 + 1;
      *pcVar48 = '\"';
    }
    else {
      __overflow(_stdout,0x22);
    }
    fwrite_unlocked(&_LC57,1,2,_stdout);
    if (before_truncation != false) {
      fputs_unlocked(truncation_string,_stdout);
    }
    print_field(before);
    pcVar48 = _stdout->_IO_write_ptr;
    if (pcVar48 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = pcVar48 + 1;
      *pcVar48 = '\"';
    }
    else {
      __overflow(_stdout,0x22);
    }
    fwrite_unlocked(&_LC57,1,2,_stdout);
    field_02.end = keyafter.end;
    field_02.start = keyafter.start;
    print_field(field_02);
    if (keyafter_truncation != false) {
      fputs_unlocked(truncation_string,_stdout);
    }
    pcVar48 = _stdout->_IO_write_ptr;
    if (pcVar48 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = pcVar48 + 1;
      *pcVar48 = '\"';
    }
    else {
      __overflow(_stdout,0x22);
    }
    fwrite_unlocked(&_LC57,1,2,_stdout);
    if (head_truncation != false) {
      fputs_unlocked(truncation_string,_stdout);
    }
    print_field(head);
    pcVar48 = _stdout->_IO_write_ptr;
    if (pcVar48 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = pcVar48 + 1;
      *pcVar48 = '\"';
    }
    else {
      __overflow(_stdout,0x22);
    }
    if ((auto_reference != false) || (input_reference != false)) {
      fwrite_unlocked(&_LC57,1,2,_stdout);
      print_field(reference);
      pcVar48 = _stdout->_IO_write_ptr;
      if (pcVar48 < _stdout->_IO_write_end) {
        _stdout->_IO_write_ptr = pcVar48 + 1;
        *pcVar48 = '\"';
      }
      else {
        __overflow(_stdout,0x22);
      }
    }
    goto LAB_00104026;
  }
  if (output_format < TEX_FORMAT) {
    if (right_reference == false) {
      if (auto_reference == false) {
        print_field(reference);
        for (lVar53 = (gap_size + reference_max_width) -
                      ((long)reference.end - (long)reference.start); 0 < lVar53;
            lVar53 = lVar53 + -1) {
          pcVar48 = _stdout->_IO_write_ptr;
          if (pcVar48 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = pcVar48 + 1;
            *pcVar48 = ' ';
          }
          else {
            __overflow(_stdout,0x20);
          }
        }
      }
      else {
        print_field(reference);
        pcVar48 = _stdout->_IO_write_ptr;
        if (pcVar48 < _stdout->_IO_write_end) {
          _stdout->_IO_write_ptr = pcVar48 + 1;
          *pcVar48 = ':';
        }
        else {
          __overflow(_stdout,0x3a);
        }
        lVar53 = (gap_size + reference_max_width) - ((long)reference.end - (long)reference.start);
        while (lVar53 = lVar53 + -1, 0 < lVar53) {
          pcVar48 = _stdout->_IO_write_ptr;
          if (pcVar48 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = pcVar48 + 1;
            *pcVar48 = ' ';
          }
          else {
            __overflow(_stdout,0x20);
          }
        }
      }
    }
    if (tail.start < tail.end) {
      print_field(tail);
      if (tail_truncation == false) {
        lVar65 = (half_line_width - gap_size) - ((long)before.end - (long)before.start);
        lVar53 = truncation_string_length;
        if (before_truncation != false) goto LAB_00104592;
        lVar65 = lVar65 - ((long)tail.end - (long)tail.start);
        lVar53 = 0;
      }
      else {
        fputs_unlocked(truncation_string,_stdout);
        lVar65 = (half_line_width - gap_size) - ((long)before.end - (long)before.start);
        lVar53 = truncation_string_length;
        if (before_truncation == false) {
          lVar53 = 0;
        }
LAB_00104592:
        lVar65 = (lVar65 - lVar53) - ((long)tail.end - (long)tail.start);
        lVar53 = truncation_string_length;
        if (tail_truncation == false) {
          lVar53 = 0;
        }
      }
      for (lVar65 = lVar65 - lVar53; 0 < lVar65; lVar65 = lVar65 + -1) {
        pcVar48 = _stdout->_IO_write_ptr;
        if (pcVar48 < _stdout->_IO_write_end) {
          _stdout->_IO_write_ptr = pcVar48 + 1;
          *pcVar48 = ' ';
        }
        else {
          __overflow(_stdout,0x20);
        }
      }
LAB_00103c2e:
      if (before_truncation != false) {
LAB_0010439c:
        fputs_unlocked(truncation_string,_stdout);
      }
    }
    else {
      lVar53 = (half_line_width - gap_size) - ((long)before.end - (long)before.start);
      if (before_truncation != false) {
        lVar53 = lVar53 - truncation_string_length;
        if (0 < lVar53) goto LAB_00103c08;
        goto LAB_0010439c;
      }
      if (0 < lVar53) {
LAB_00103c08:
        do {
          pcVar48 = _stdout->_IO_write_ptr;
          if (pcVar48 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = pcVar48 + 1;
            *pcVar48 = ' ';
          }
          else {
            __overflow(_stdout,0x20);
          }
          lVar53 = lVar53 + -1;
        } while (lVar53 != 0);
        goto LAB_00103c2e;
      }
    }
    print_field(before);
    iVar58 = gap_size;
    if (0 < gap_size) {
      do {
        pcVar48 = _stdout->_IO_write_ptr;
        if (pcVar48 < _stdout->_IO_write_end) {
          _stdout->_IO_write_ptr = pcVar48 + 1;
          *pcVar48 = ' ';
        }
        else {
          __overflow(_stdout,0x20);
        }
        iVar58 = iVar58 + -1;
      } while (iVar58 != 0);
    }
    field.end = keyafter.end;
    field.start = keyafter.start;
    print_field(field);
    if (keyafter_truncation == false) {
      if (head.start < head.end) {
        lVar65 = half_line_width - ((long)keyafter.end - (long)keyafter.start);
        lVar53 = 0;
        goto LAB_001047c0;
      }
LAB_00103cb2:
      if (auto_reference != false) {
        if (right_reference == false) goto LAB_00104026;
LAB_001043df:
        lVar53 = 0;
        if (keyafter_truncation != false) {
          lVar53 = truncation_string_length;
        }
        for (lVar53 = (half_line_width - ((long)keyafter.end - (long)keyafter.start)) - lVar53;
            0 < lVar53; lVar53 = lVar53 + -1) {
          pcVar48 = _stdout->_IO_write_ptr;
          if (pcVar48 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = pcVar48 + 1;
            *pcVar48 = ' ';
          }
          else {
            __overflow(_stdout,0x20);
          }
        }
        goto LAB_0010443a;
      }
      if (input_reference != false) {
        if (right_reference != false) goto LAB_001043df;
        goto LAB_00103cd9;
      }
    }
    else {
      fputs_unlocked(truncation_string,_stdout);
      if (head.end <= head.start) goto LAB_00103cb2;
      lVar65 = half_line_width - ((long)keyafter.end - (long)keyafter.start);
      lVar53 = truncation_string_length;
      if (keyafter_truncation == false) {
        lVar53 = 0;
      }
LAB_001047c0:
      lVar53 = (lVar65 - lVar53) - ((long)head.end - (long)head.start);
      if (head_truncation == false) {
        if (0 < lVar53) goto LAB_001047e1;
      }
      else {
        lVar53 = lVar53 - truncation_string_length;
        if (0 < lVar53) {
LAB_001047e1:
          do {
            pcVar48 = _stdout->_IO_write_ptr;
            if (pcVar48 < _stdout->_IO_write_end) {
              _stdout->_IO_write_ptr = pcVar48 + 1;
              *pcVar48 = ' ';
            }
            else {
              __overflow(_stdout,0x20);
            }
            lVar53 = lVar53 + -1;
          } while (lVar53 != 0);
          if (head_truncation == false) goto LAB_0010480c;
        }
        fputs_unlocked(truncation_string,_stdout);
      }
LAB_0010480c:
      print_field(head);
LAB_0010443a:
      if (auto_reference == false) {
LAB_00103cd9:
        if (input_reference == false) goto LAB_00104026;
      }
      lVar53 = gap_size;
      if (right_reference != false) {
        for (; 0 < lVar53; lVar53 = lVar53 + -1) {
          pcVar48 = _stdout->_IO_write_ptr;
          if (pcVar48 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = pcVar48 + 1;
            *pcVar48 = ' ';
          }
          else {
            __overflow(_stdout,0x20);
          }
        }
        print_field(reference);
      }
    }
LAB_00104026:
    pcVar48 = _stdout->_IO_write_ptr;
    if (pcVar48 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = pcVar48 + 1;
      *pcVar48 = '\n';
    }
    else {
      __overflow(_stdout,10);
    }
  }
  else if (output_format == TEX_FORMAT) {
    __printf_chk(2,&_LC58,macro_name);
    pcVar48 = _stdout->_IO_write_ptr;
    if (pcVar48 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = pcVar48 + 1;
      *pcVar48 = '{';
    }
    else {
      __overflow(_stdout,0x7b);
    }
    print_field(tail);
    fwrite_unlocked(&_LC59,1,2,_stdout);
    print_field(before);
    fwrite_unlocked(&_LC59,1,2,_stdout);
    pcVar9 = keyafter.end;
    pcVar48 = keyafter.start;
    if (word_regex.string == (char *)0x0) {
      pbVar59 = (byte *)keyafter.start;
      if (word_fastmap[(byte)*keyafter.start] == '\0') {
        pbVar59 = (byte *)(keyafter.start + 1);
      }
      else {
        while ((pbVar59 < keyafter.end && (word_fastmap[*pbVar59] != '\0'))) {
          pbVar59 = pbVar59 + 1;
        }
      }
    }
    else {
      iVar39 = re_match((re_pattern_buffer *)&word_regex.pattern,keyafter.start,
                        (int)keyafter.end - (int)keyafter.start,0,(re_registers *)0x0);
      if (iVar39 == -2) goto LAB_00102ec3;
      if (iVar39 == -1) {
        iVar39 = 1;
      }
      pbVar59 = (byte *)(pcVar48 + iVar39);
    }
    field_00.end = (char *)pbVar59;
    field_00.start = pcVar48;
    print_field(field_00);
    fwrite_unlocked(&_LC59,1,2,_stdout);
    field_01.end = pcVar9;
    field_01.start = (char *)pbVar59;
    print_field(field_01);
    fwrite_unlocked(&_LC59,1,2,_stdout);
    print_field(head);
    pcVar48 = _stdout->_IO_write_ptr;
    if (pcVar48 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = pcVar48 + 1;
      *pcVar48 = '}';
    }
    else {
      __overflow(_stdout,0x7d);
    }
    if ((auto_reference != false) || (input_reference != false)) {
      pcVar48 = _stdout->_IO_write_ptr;
      if (pcVar48 < _stdout->_IO_write_end) {
        _stdout->_IO_write_ptr = pcVar48 + 1;
        *pcVar48 = '{';
      }
      else {
        __overflow(_stdout,0x7b);
      }
      print_field(reference);
      pcVar48 = _stdout->_IO_write_ptr;
      if (pcVar48 < _stdout->_IO_write_end) {
        _stdout->_IO_write_ptr = pcVar48 + 1;
        *pcVar48 = '}';
      }
      else {
        __overflow(_stdout,0x7d);
      }
    }
    goto LAB_00104026;
  }
  local_100 = local_100 + 1;
  local_130 = local_130 + 1;
  if (number_of_occurs[0] <= local_100) goto LAB_00104064;
  goto LAB_001032a3;
}


