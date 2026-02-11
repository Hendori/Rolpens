
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_error(void)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  fflush_unlocked(_stdout);
  fpurge(_stdout);
  clearerr_unlocked(_stdout);
  uVar3 = dcgettext(0,"write error",5);
                    /* WARNING: Subroutine does not return */
  error(1,iVar1,uVar3);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char paste_parallel(long param_1,undefined8 *param_2)

{
  byte bVar1;
  char *pcVar2;
  byte *pbVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  void *__ptr;
  long *__ptr_00;
  FILE *__stream;
  size_t sVar9;
  int *piVar10;
  undefined8 uVar11;
  byte *pbVar12;
  undefined8 *puVar13;
  size_t __n;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  _IO_FILE *__stream_00;
  ulong uVar17;
  ulong uVar18;
  char local_41;
  
  __ptr = (void *)xmalloc(param_1 + 2);
  __ptr_00 = (long *)xnmalloc(param_1 + 1);
  if (param_1 == 0) {
    local_41 = '\x01';
LAB_00100340:
    free(__ptr_00);
    free(__ptr);
    return local_41;
  }
  local_41 = '\0';
  puVar13 = param_2;
  lVar5 = 0;
  do {
    while ((lVar14 = lVar5, pcVar2 = (char *)*puVar13, *pcVar2 != '-' || (pcVar2[1] != '\0'))) {
      __stream = (FILE *)rpl_fopen(pcVar2,&_LC1);
      __ptr_00[lVar14] = (long)__stream;
      if (__stream == (FILE *)0x0) {
        uVar11 = quotearg_n_style_colon(0,3,*puVar13);
        piVar10 = __errno_location();
                    /* WARNING: Subroutine does not return */
        error(1,*piVar10,&_LC2,uVar11);
      }
      iVar6 = fileno(__stream);
      if (iVar6 == 0) {
        local_41 = '\x01';
      }
      puVar13 = puVar13 + 1;
      fadvise(__stream);
      lVar5 = lVar14 + 1;
      if (param_1 == lVar14 + 1) goto LAB_00100128;
    }
    have_read_stdin = '\x01';
    puVar13 = puVar13 + 1;
    __ptr_00[lVar14] = (long)_stdin;
    lVar5 = lVar14 + 1;
  } while (param_1 != lVar14 + 1);
LAB_00100128:
  uVar15 = lVar14 + 1;
  uVar16 = uVar15;
  if (local_41 == '\0') {
    local_41 = '\x01';
  }
  else if (have_read_stdin != '\0') {
    uVar11 = dcgettext(0,"standard input is closed",5);
                    /* WARNING: Subroutine does not return */
    error(1,0,uVar11);
  }
LAB_00100148:
  __n = 0;
  uVar17 = 1;
  bVar4 = false;
  __stream_00 = (_IO_FILE *)*__ptr_00;
  pbVar12 = delims;
  if (__stream_00 == (_IO_FILE *)0x0) goto LAB_00100280;
LAB_00100178:
  pbVar3 = (byte *)__stream_00->_IO_read_ptr;
  if (pbVar3 < __stream_00->_IO_read_end) {
    __stream_00->_IO_read_ptr = (char *)(pbVar3 + 1);
    uVar7 = (uint)*pbVar3;
    if (__n == 0) goto LAB_001001e9;
  }
  else {
    uVar7 = __uflow(__stream_00);
    piVar10 = __errno_location();
    iVar6 = *piVar10;
    if (__n == 0 || uVar7 == 0xffffffff) {
      if (uVar7 != 0xffffffff) goto LAB_001001e9;
      if ((__stream_00->_flags & 0x20) == 0) {
        if (__stream_00 == _stdin) {
          clearerr_unlocked(__stream_00);
          goto LAB_001003f8;
        }
        iVar6 = rpl_fclose();
        if (iVar6 != -1) goto LAB_001003f8;
LAB_00100475:
        iVar6 = *piVar10;
      }
      else if (__stream_00 == _stdin) {
        clearerr_unlocked(__stream_00);
      }
      else {
        iVar8 = rpl_fclose();
        if (iVar8 == -1) {
          if (iVar6 != 0) goto LAB_00100431;
          goto LAB_00100475;
        }
      }
      if (iVar6 != 0) {
LAB_00100431:
        uVar11 = quotearg_n_style_colon(0,3,param_2[uVar17 - 1]);
                    /* WARNING: Subroutine does not return */
        error(0,iVar6,&_LC2,uVar11);
      }
LAB_001003f8:
      uVar16 = uVar16 - 1;
      __ptr_00[uVar17 - 1] = 0;
      goto LAB_00100280;
    }
  }
  sVar9 = fwrite_unlocked(__ptr,1,__n,_stdout);
  if (__n != sVar9) goto LAB_00100217;
  __n = 0;
LAB_001001e9:
  do {
    while( true ) {
      if (line_delim == uVar7) {
        if (uVar17 != uVar15) goto LAB_00100239;
        goto LAB_001002b5;
      }
      pcVar2 = _stdout->_IO_write_ptr;
      if (pcVar2 < _stdout->_IO_write_end) {
        _stdout->_IO_write_ptr = pcVar2 + 1;
        *pcVar2 = (char)uVar7;
      }
      else {
        iVar6 = __overflow(_stdout,uVar7 & 0xff);
        if (iVar6 < 0) goto LAB_00100217;
      }
      pbVar3 = (byte *)__stream_00->_IO_read_ptr;
      if (__stream_00->_IO_read_end <= pbVar3) break;
      __stream_00->_IO_read_ptr = (char *)(pbVar3 + 1);
      uVar7 = (uint)*pbVar3;
    }
    while (uVar7 = __uflow(__stream_00), uVar7 == 0xffffffff) {
      if (uVar17 != uVar15) {
LAB_00100239:
        bVar1 = *pbVar12;
        if (bVar1 != 0) {
          pbVar3 = (byte *)_stdout->_IO_write_ptr;
          if (pbVar3 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = (char *)(pbVar3 + 1);
            *pbVar3 = bVar1;
          }
          else {
            iVar6 = __overflow(_stdout,(uint)bVar1);
            if (iVar6 < 0) goto LAB_00100217;
          }
        }
        pbVar12 = pbVar12 + 1;
        bVar4 = true;
        uVar18 = uVar17;
        if (delim_end == pbVar12) goto LAB_001002a5;
        while( true ) {
          uVar17 = uVar18 + 1;
          if (uVar15 <= uVar18 || uVar16 == 0) goto LAB_00100337;
          __stream_00 = (_IO_FILE *)__ptr_00[uVar18];
          if (__stream_00 != (_IO_FILE *)0x0) goto LAB_00100178;
LAB_00100280:
          if (uVar17 == uVar15) break;
          if (*pbVar12 != 0) {
            *(byte *)((long)__ptr + __n) = *pbVar12;
            __n = __n + 1;
          }
          pbVar12 = pbVar12 + 1;
          uVar18 = uVar17;
          if (delim_end == pbVar12) {
LAB_001002a5:
            pbVar12 = delims;
          }
        }
        if (bVar4) {
          if ((__n != 0) && (sVar9 = fwrite_unlocked(__ptr,1,__n,_stdout), __n != sVar9))
          goto LAB_00100217;
          bVar1 = line_delim;
          pbVar3 = (byte *)_stdout->_IO_write_ptr;
          if (pbVar3 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = (char *)(pbVar3 + 1);
            *pbVar3 = bVar1;
          }
          else {
            iVar6 = __overflow(_stdout,(uint)line_delim);
            if (iVar6 < 0) goto LAB_00100217;
          }
        }
LAB_00100337:
        if (uVar16 != 0) goto LAB_00100148;
        goto LAB_00100340;
      }
      uVar7 = (uint)line_delim;
LAB_001002b5:
      pcVar2 = _stdout->_IO_write_ptr;
      if (pcVar2 < _stdout->_IO_write_end) {
        _stdout->_IO_write_ptr = pcVar2 + 1;
        *pcVar2 = (char)uVar7;
        goto LAB_00100148;
      }
      iVar6 = __overflow(_stdout,uVar7 & 0xff);
      if (-1 < iVar6) goto LAB_00100148;
LAB_00100217:
      write_error();
    }
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 paste_serial(long param_1,undefined8 *param_2)

{
  byte bVar1;
  byte *pbVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  _IO_FILE *__stream;
  undefined8 uVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  ulong uVar12;
  byte *pbVar13;
  _IO_FILE *p_Var14;
  byte *pbVar15;
  uint unaff_R13D;
  ulong uVar16;
  bool bVar17;
  undefined8 *local_60;
  int *local_50;
  long local_48;
  
  local_60 = param_2;
  local_48 = param_1;
  if (param_1 != 0) {
    do {
      pbVar2 = (byte *)*local_60;
      uVar10 = *pbVar2 - 0x2d;
      if ((uVar10 == 0) && (uVar10 = (uint)pbVar2[1], pbVar2[1] == 0)) {
        have_read_stdin = 1;
        __stream = _stdin;
      }
      else {
        __stream = (_IO_FILE *)rpl_fopen(pbVar2,&_LC1);
        if (__stream == (_IO_FILE *)0x0) {
          uVar7 = quotearg_n_style_colon(0,3,*local_60);
          piVar8 = __errno_location();
                    /* WARNING: Subroutine does not return */
          error(0,*piVar8,&_LC2,uVar7);
        }
        fadvise(__stream,2);
      }
      pbVar15 = delims;
      pbVar2 = (byte *)__stream->_IO_read_ptr;
      pbVar13 = (byte *)__stream->_IO_read_end;
      if (pbVar2 < pbVar13) {
        pbVar11 = pbVar2 + 1;
        __stream->_IO_read_ptr = (char *)pbVar11;
        uVar16 = (ulong)*pbVar2;
        local_50 = __errno_location();
      }
      else {
        uVar5 = __uflow(__stream);
        uVar16 = (ulong)uVar5;
        local_50 = __errno_location();
        iVar4 = *local_50;
        uVar9 = (uint)line_delim;
        if (uVar5 == 0xffffffff) goto LAB_00100810;
        pbVar11 = (byte *)__stream->_IO_read_ptr;
        pbVar13 = (byte *)__stream->_IO_read_end;
      }
LAB_0010063a:
      if (pbVar11 < pbVar13) {
        __stream->_IO_read_ptr = (char *)(pbVar11 + 1);
        unaff_R13D = (uint)*pbVar11;
LAB_00100650:
        p_Var14 = _stdout;
        if ((uint)line_delim == (uint)uVar16) {
          bVar1 = *pbVar15;
          uVar12 = (ulong)bVar1;
          if (bVar1 == 0) goto LAB_00100622;
          pbVar2 = (byte *)_stdout->_IO_write_ptr;
          if (_stdout->_IO_write_end <= pbVar2) goto LAB_00100770;
          pbVar15 = pbVar15 + 1;
          bVar17 = delim_end != pbVar15;
          _stdout->_IO_write_ptr = (char *)(pbVar2 + 1);
          *pbVar2 = bVar1;
          if (bVar17) goto LAB_0010062f;
          goto LAB_001006ad;
        }
        pcVar3 = _stdout->_IO_write_ptr;
        if (pcVar3 < _stdout->_IO_write_end) {
          _stdout->_IO_write_ptr = pcVar3 + 1;
          *pcVar3 = (char)uVar16;
        }
        else {
          uVar12 = uVar16 & 0xff;
          iVar4 = __overflow(_stdout,(int)uVar12);
          if (iVar4 < 0) goto LAB_00100761;
        }
        goto LAB_0010062f;
      }
      unaff_R13D = __uflow(__stream);
      if (unaff_R13D != 0xffffffff) goto LAB_00100650;
      iVar4 = *local_50;
      pcVar3 = _stdout->_IO_write_ptr;
      if (_stdout->_IO_write_end <= pcVar3) {
        uVar12 = uVar16 & 0xff;
        p_Var14 = _stdout;
        iVar6 = __overflow(_stdout,(int)uVar12);
        if (-1 < iVar6) goto LAB_001006fb;
LAB_00100761:
        do {
          write_error();
LAB_00100770:
          iVar4 = __overflow(p_Var14,(int)uVar12);
        } while (iVar4 < 0);
LAB_00100622:
        pbVar15 = pbVar15 + 1;
        if (delim_end == pbVar15) {
LAB_001006ad:
          pbVar15 = delims;
        }
LAB_0010062f:
        pbVar11 = (byte *)__stream->_IO_read_ptr;
        pbVar13 = (byte *)__stream->_IO_read_end;
        uVar16 = (ulong)unaff_R13D;
        goto LAB_0010063a;
      }
      _stdout->_IO_write_ptr = pcVar3 + 1;
      *pcVar3 = (char)uVar16;
LAB_001006fb:
      uVar9 = (uint)line_delim;
      if (uVar9 == (uint)uVar16) goto LAB_0010070d;
LAB_00100810:
      pcVar3 = _stdout->_IO_write_ptr;
      if (_stdout->_IO_write_end <= pcVar3) {
        uVar12 = (ulong)uVar9;
        p_Var14 = _stdout;
        iVar6 = __overflow(_stdout,uVar9);
        if (-1 < iVar6) goto LAB_0010070d;
        goto LAB_00100761;
      }
      _stdout->_IO_write_ptr = pcVar3 + 1;
      *pcVar3 = (char)uVar9;
LAB_0010070d:
      if ((__stream->_flags & 0x20) == 0) {
        if (uVar10 == 0) {
          clearerr_unlocked(__stream);
        }
        else {
          iVar4 = rpl_fclose();
          if (iVar4 != 0) {
LAB_0010083d:
            iVar4 = *local_50;
            goto LAB_001007ad;
          }
        }
      }
      else {
        if (uVar10 == 0) {
          clearerr_unlocked(__stream);
        }
        else {
          iVar6 = rpl_fclose();
          if (iVar6 != 0) {
            if (iVar4 != 0) goto LAB_001007b5;
            goto LAB_0010083d;
          }
        }
LAB_001007ad:
        if (iVar4 != 0) {
LAB_001007b5:
          uVar7 = quotearg_n_style_colon(0,3,*local_60);
                    /* WARNING: Subroutine does not return */
          error(0,iVar4,&_LC2,uVar7);
        }
      }
      local_60 = local_60 + 1;
      local_48 = local_48 + -1;
    } while (local_48 != 0);
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
  char *pcVar6;
  undefined **ppuVar7;
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
  ppuVar7 = &local_a8;
  local_30 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(_stderr,2,uVar3,uVar5);
    goto LAB_0010093a;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... [FILE]...\n",5);
  __printf_chk(2,uVar3,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "Write lines consisting of the sequentially corresponding lines from\neach FILE, separated by TABs, to standard output.\n"
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
                             "  -d, --delimiters=LIST   reuse characters from LIST instead of TABs\n  -s, --serial            paste one file at a time instead of in parallel\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"  -z, --zero-terminated    line delimiter is NUL, not newline\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pcVar4 = "[";
  local_a8 = &_LC4;
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
    iVar2 = strcmp("paste",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)ppuVar7 + 0x10);
    ppuVar7 = (undefined **)((long)ppuVar7 + 0x10);
  } while (pcVar4 != (char *)0x0);
  pcVar4 = *(char **)((long)ppuVar7 + 8);
  if (pcVar4 == (char *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    pcVar4 = "paste";
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) goto LAB_00100b8d;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","paste");
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) {
LAB_00100b8d:
      iVar2 = strncmp(pcVar6,"en_",3);
      pFVar1 = _stdout;
      if (iVar2 != 0) {
        pcVar6 = (char *)dcgettext(0,
                                   "Report any translation bugs to <https://translationproject.org/team/>\n"
                                   ,5);
        fputs_unlocked(pcVar6,pFVar1);
      }
    }
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = "";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","paste");
    if (pcVar4 == "paste") {
      pcVar6 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,pcVar4,pcVar6);
LAB_0010093a:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte main(int param_1,undefined8 *param_2)

{
  byte bVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *pcVar8;
  char cVar9;
  char *pcVar10;
  
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  have_read_stdin = '\0';
  serial_merge = '\0';
  pcVar10 = "\t";
  while (iVar2 = getopt_long(param_1,param_2,&_LC37,longopts,0), iVar2 != -1) {
    if (iVar2 == 100) {
      pcVar10 = _optarg;
      if (*_optarg == '\0') {
        pcVar10 = "\\0";
      }
    }
    else {
      if (iVar2 < 0x65) {
        if (iVar2 == -0x83) {
          uVar6 = proper_name_lite("David MacKenzie","David MacKenzie");
          uVar7 = proper_name_lite("David M. Ihnat","David M. Ihnat");
          version_etc(_stdout,"paste","GNU coreutils",_Version,uVar7,uVar6,0);
                    /* WARNING: Subroutine does not return */
          exit(0);
        }
        if (iVar2 == -0x82) {
          usage(0);
        }
LAB_00101476:
        pcVar5 = (char *)usage(1);
        goto LAB_00101480;
      }
      if (iVar2 == 0x73) {
        serial_merge = '\x01';
      }
      else {
        if (iVar2 != 0x7a) goto LAB_00101476;
        line_delim = 0;
      }
    }
  }
  param_1 = param_1 - _optind;
  if (param_1 == 0) {
    param_1 = 1;
    param_2[_optind] = &_LC38;
  }
  delims = (char *)xstrdup(pcVar10);
  cVar9 = *pcVar10;
  delim_end = delims;
  pcVar8 = pcVar10;
  do {
    if (cVar9 == '\0') {
      pcVar3 = paste_parallel;
      if (serial_merge != '\0') {
        pcVar3 = paste_serial;
      }
      bVar1 = (*pcVar3)((long)param_1,param_2 + _optind);
      free(delims);
      if ((have_read_stdin != '\0') && (iVar2 = rpl_fclose(_stdin), iVar2 == -1)) {
        piVar4 = __errno_location();
                    /* WARNING: Subroutine does not return */
        error(1,*piVar4,&_LC38);
      }
      return bVar1 ^ 1;
    }
    pcVar5 = delim_end + 1;
    if (cVar9 == '\\') {
      cVar9 = pcVar8[1];
      if (cVar9 < 'w') {
        if (cVar9 < '\\') {
          if (cVar9 == '\0') {
LAB_00101480:
            delim_end = pcVar5 + -1;
            uVar6 = quotearg_n_style_colon(0,6,pcVar10);
            uVar7 = dcgettext(0,"delimiter list ends with an unescaped backslash: %s",5);
                    /* WARNING: Subroutine does not return */
            error(1,0,uVar7,uVar6);
          }
          if (cVar9 != '0') goto switchD_0010137c_caseD_5c;
          cVar9 = '\0';
        }
        else {
          switch(cVar9) {
          default:
            goto switchD_0010137c_caseD_5c;
          case 'b':
            cVar9 = '\b';
            break;
          case 'f':
            cVar9 = '\f';
            break;
          case 'n':
            cVar9 = '\n';
            break;
          case 'r':
            cVar9 = '\r';
            break;
          case 't':
            cVar9 = '\t';
            break;
          case 'v':
            cVar9 = '\v';
          }
        }
      }
      else {
switchD_0010137c_caseD_5c:
      }
      *delim_end = cVar9;
      pcVar8 = pcVar8 + 2;
    }
    else {
      *delim_end = cVar9;
      pcVar8 = pcVar8 + 1;
    }
    cVar9 = *pcVar8;
    delim_end = pcVar5;
  } while( true );
}


