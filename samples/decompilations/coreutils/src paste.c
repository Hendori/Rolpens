
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

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
/* WARNING: Unknown calling convention */

_Bool paste_parallel(size_t nfiles,char **fnamptr)

{
  byte bVar1;
  char *pcVar2;
  byte *pbVar3;
  uchar *puVar4;
  bool bVar5;
  uchar uVar6;
  size_t sVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  void *__ptr;
  long *__ptr_00;
  FILE *__stream;
  size_t sVar11;
  int *piVar12;
  undefined8 uVar13;
  byte *pbVar14;
  char **ppcVar15;
  size_t __n;
  size_t sVar16;
  ulong uVar17;
  ulong uVar18;
  _IO_FILE *__stream_00;
  ulong uVar19;
  ulong uVar20;
  _Bool local_41;
  
  __ptr = (void *)xmalloc(nfiles + 2);
  __ptr_00 = (long *)xnmalloc(nfiles + 1);
  if (nfiles == 0) {
    local_41 = true;
LAB_00100340:
    free(__ptr_00);
    free(__ptr);
    return local_41;
  }
  local_41 = false;
  ppcVar15 = fnamptr;
  sVar7 = 0;
  do {
    while ((sVar16 = sVar7, pcVar2 = *ppcVar15, *pcVar2 != '-' || (pcVar2[1] != '\0'))) {
      __stream = (FILE *)rpl_fopen(pcVar2,&_LC1);
      __ptr_00[sVar16] = (long)__stream;
      if (__stream == (FILE *)0x0) {
        uVar13 = quotearg_n_style_colon(0,3,*ppcVar15);
        piVar12 = __errno_location();
                    /* WARNING: Subroutine does not return */
        error(1,*piVar12,&_LC2,uVar13);
      }
      iVar8 = fileno(__stream);
      if (iVar8 == 0) {
        local_41 = true;
      }
      ppcVar15 = ppcVar15 + 1;
      fadvise(__stream);
      sVar7 = sVar16 + 1;
      if (nfiles == sVar16 + 1) goto LAB_00100128;
    }
    have_read_stdin = true;
    ppcVar15 = ppcVar15 + 1;
    __ptr_00[sVar16] = (long)_stdin;
    sVar7 = sVar16 + 1;
  } while (nfiles != sVar16 + 1);
LAB_00100128:
  uVar17 = sVar16 + 1;
  uVar18 = uVar17;
  if (local_41 == false) {
    local_41 = true;
  }
  else if (have_read_stdin != false) {
    uVar13 = dcgettext(0,"standard input is closed",5);
                    /* WARNING: Subroutine does not return */
    error(1,0,uVar13);
  }
LAB_00100148:
  __n = 0;
  uVar19 = 1;
  bVar5 = false;
  __stream_00 = (_IO_FILE *)*__ptr_00;
  pbVar14 = (byte *)delims;
  if (__stream_00 == (_IO_FILE *)0x0) goto LAB_00100280;
LAB_00100178:
  pbVar3 = (byte *)__stream_00->_IO_read_ptr;
  if (pbVar3 < __stream_00->_IO_read_end) {
    __stream_00->_IO_read_ptr = (char *)(pbVar3 + 1);
    uVar9 = (uint)*pbVar3;
    if (__n == 0) goto LAB_001001e9;
  }
  else {
    uVar9 = __uflow(__stream_00);
    piVar12 = __errno_location();
    iVar8 = *piVar12;
    if (__n == 0 || uVar9 == 0xffffffff) {
      if (uVar9 != 0xffffffff) goto LAB_001001e9;
      if ((__stream_00->_flags & 0x20) == 0) {
        if (__stream_00 == _stdin) {
          clearerr_unlocked(__stream_00);
          goto LAB_001003f8;
        }
        iVar8 = rpl_fclose();
        if (iVar8 != -1) goto LAB_001003f8;
LAB_00100475:
        iVar8 = *piVar12;
      }
      else if (__stream_00 == _stdin) {
        clearerr_unlocked(__stream_00);
      }
      else {
        iVar10 = rpl_fclose();
        if (iVar10 == -1) {
          if (iVar8 != 0) goto LAB_00100431;
          goto LAB_00100475;
        }
      }
      if (iVar8 != 0) {
LAB_00100431:
        uVar13 = quotearg_n_style_colon(0,3,fnamptr[uVar19 - 1]);
                    /* WARNING: Subroutine does not return */
        error(0,iVar8,&_LC2,uVar13);
      }
LAB_001003f8:
      uVar18 = uVar18 - 1;
      __ptr_00[uVar19 - 1] = 0;
      goto LAB_00100280;
    }
  }
  sVar11 = fwrite_unlocked(__ptr,1,__n,_stdout);
  if (__n != sVar11) goto LAB_00100217;
  __n = 0;
LAB_001001e9:
  do {
    while( true ) {
      if (line_delim == uVar9) {
        if (uVar19 != uVar17) goto LAB_00100239;
        goto LAB_001002b5;
      }
      pcVar2 = _stdout->_IO_write_ptr;
      if (pcVar2 < _stdout->_IO_write_end) {
        _stdout->_IO_write_ptr = pcVar2 + 1;
        *pcVar2 = (char)uVar9;
      }
      else {
        iVar8 = __overflow(_stdout,uVar9 & 0xff);
        if (iVar8 < 0) goto LAB_00100217;
      }
      pbVar3 = (byte *)__stream_00->_IO_read_ptr;
      if (__stream_00->_IO_read_end <= pbVar3) break;
      __stream_00->_IO_read_ptr = (char *)(pbVar3 + 1);
      uVar9 = (uint)*pbVar3;
    }
    while (uVar9 = __uflow(__stream_00), uVar9 == 0xffffffff) {
      if (uVar19 != uVar17) {
LAB_00100239:
        bVar1 = *pbVar14;
        if (bVar1 != 0) {
          pbVar3 = (byte *)_stdout->_IO_write_ptr;
          if (pbVar3 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = (char *)(pbVar3 + 1);
            *pbVar3 = bVar1;
          }
          else {
            iVar8 = __overflow(_stdout,(uint)bVar1);
            if (iVar8 < 0) goto LAB_00100217;
          }
        }
        pbVar14 = pbVar14 + 1;
        bVar5 = true;
        uVar20 = uVar19;
        if ((byte *)delim_end == pbVar14) goto LAB_001002a5;
        while( true ) {
          uVar19 = uVar20 + 1;
          if (uVar17 <= uVar20 || uVar18 == 0) goto LAB_00100337;
          __stream_00 = (_IO_FILE *)__ptr_00[uVar20];
          if (__stream_00 != (_IO_FILE *)0x0) goto LAB_00100178;
LAB_00100280:
          if (uVar19 == uVar17) break;
          if (*pbVar14 != 0) {
            *(byte *)((long)__ptr + __n) = *pbVar14;
            __n = __n + 1;
          }
          pbVar14 = pbVar14 + 1;
          uVar20 = uVar19;
          if ((byte *)delim_end == pbVar14) {
LAB_001002a5:
            pbVar14 = (byte *)delims;
          }
        }
        if (bVar5) {
          if ((__n != 0) && (sVar11 = fwrite_unlocked(__ptr,1,__n,_stdout), __n != sVar11))
          goto LAB_00100217;
          uVar6 = line_delim;
          puVar4 = (uchar *)_stdout->_IO_write_ptr;
          if (puVar4 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = (char *)(puVar4 + 1);
            *puVar4 = uVar6;
          }
          else {
            iVar8 = __overflow(_stdout,(uint)line_delim);
            if (iVar8 < 0) goto LAB_00100217;
          }
        }
LAB_00100337:
        if (uVar18 != 0) goto LAB_00100148;
        goto LAB_00100340;
      }
      uVar9 = (uint)line_delim;
LAB_001002b5:
      pcVar2 = _stdout->_IO_write_ptr;
      if (pcVar2 < _stdout->_IO_write_end) {
        _stdout->_IO_write_ptr = pcVar2 + 1;
        *pcVar2 = (char)uVar9;
        goto LAB_00100148;
      }
      iVar8 = __overflow(_stdout,uVar9 & 0xff);
      if (-1 < iVar8) goto LAB_00100148;
LAB_00100217:
      write_error();
    }
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

_Bool paste_serial(size_t nfiles,char **fnamptr)

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
  char **local_60;
  int *local_50;
  size_t local_48;
  
  local_60 = fnamptr;
  local_48 = nfiles;
  if (nfiles != 0) {
    do {
      pbVar2 = (byte *)*local_60;
      uVar10 = *pbVar2 - 0x2d;
      if ((uVar10 == 0) && (uVar10 = (uint)pbVar2[1], pbVar2[1] == 0)) {
        have_read_stdin = true;
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
      pbVar15 = (byte *)delims;
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
          bVar17 = (byte *)delim_end != pbVar15;
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
        if ((byte *)delim_end == pbVar15) {
LAB_001006ad:
          pbVar15 = (byte *)delims;
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
      local_48 = local_48 - 1;
    } while (local_48 != 0);
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
  char *pcVar6;
  infomap *piVar7;
  infomap infomap [7];
  
  uVar5 = _program_name;
  piVar7 = infomap;
  if (status != 0) {
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
    iVar2 = strcmp("paste",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)piVar7 + 0x10);
    piVar7 = (infomap *)((long)piVar7 + 0x10);
  } while (pcVar4 != (char *)0x0);
  pcVar4 = *(char **)((long)piVar7 + 8);
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
  exit(status);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int main(int argc,char **argv)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  int *piVar6;
  char *pcVar7;
  char cVar8;
  char *pcVar9;
  
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  have_read_stdin = false;
  serial_merge = false;
  pcVar9 = "\t";
  while (iVar1 = getopt_long(argc,argv,&_LC37,longopts,0), iVar1 != -1) {
    if (iVar1 == 100) {
      pcVar9 = _optarg;
      if (*_optarg == '\0') {
        pcVar9 = "\\0";
      }
    }
    else {
      if (iVar1 < 0x65) {
        if (iVar1 == -0x83) {
          uVar3 = proper_name_lite("David MacKenzie","David MacKenzie");
          uVar4 = proper_name_lite("David M. Ihnat","David M. Ihnat");
          version_etc(_stdout,"paste","GNU coreutils",_Version,uVar4,uVar3,0);
                    /* WARNING: Subroutine does not return */
          exit(0);
        }
        if (iVar1 == -0x82) {
                    /* WARNING: Subroutine does not return */
          usage(0);
        }
LAB_00101476:
                    /* WARNING: Subroutine does not return */
        usage(1);
      }
      if (iVar1 == 0x73) {
        serial_merge = true;
      }
      else {
        if (iVar1 != 0x7a) goto LAB_00101476;
        line_delim = '\0';
      }
    }
  }
  iVar1 = argc - _optind;
  if (iVar1 == 0) {
    iVar1 = 1;
    argv[_optind] = "-";
  }
  delims = (char *)xstrdup(pcVar9);
  cVar8 = *pcVar9;
  delim_end = delims;
  pcVar7 = pcVar9;
  do {
    if (cVar8 == '\0') {
      pcVar5 = paste_parallel;
      if (serial_merge != false) {
        pcVar5 = paste_serial;
      }
      uVar2 = (*pcVar5)((long)iVar1,argv + _optind);
      free(delims);
      if ((have_read_stdin != false) && (iVar1 = rpl_fclose(_stdin), iVar1 == -1)) {
        piVar6 = __errno_location();
                    /* WARNING: Subroutine does not return */
        error(1,*piVar6,&_LC38);
      }
      return (uVar2 ^ 1) & 0xff;
    }
    if (cVar8 == '\\') {
      cVar8 = pcVar7[1];
      if (cVar8 < 'w') {
        if (cVar8 < '\\') {
          if (cVar8 == '\0') {
            uVar3 = quotearg_n_style_colon(0,6,pcVar9);
            uVar4 = dcgettext(0,"delimiter list ends with an unescaped backslash: %s",5);
                    /* WARNING: Subroutine does not return */
            error(1,0,uVar4,uVar3);
          }
          if (cVar8 != '0') goto switchD_0010137c_caseD_5c;
          cVar8 = '\0';
        }
        else {
          switch(cVar8) {
          default:
            goto switchD_0010137c_caseD_5c;
          case 'b':
            cVar8 = '\b';
            break;
          case 'f':
            cVar8 = '\f';
            break;
          case 'n':
            cVar8 = '\n';
            break;
          case 'r':
            cVar8 = '\r';
            break;
          case 't':
            cVar8 = '\t';
            break;
          case 'v':
            cVar8 = '\v';
          }
        }
      }
      else {
switchD_0010137c_caseD_5c:
      }
      *delim_end = cVar8;
      pcVar7 = pcVar7 + 2;
    }
    else {
      *delim_end = cVar8;
      pcVar7 = pcVar7 + 1;
    }
    cVar8 = *pcVar7;
    delim_end = delim_end + 1;
  } while( true );
}


