
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

_Bool build_type_arg(char **typep,re_pattern_buffer *regexp,char *fastmap)

{
  char cVar1;
  size_t __length;
  char *pcVar2;
  
  cVar1 = *_optarg;
  if (cVar1 == 'p') {
    pcVar2 = _optarg + 1;
    *typep = _optarg;
    _optarg = pcVar2;
    pcVar2 = _optarg;
    regexp->buffer = (re_dfa_t *)0x0;
    regexp->fastmap = fastmap;
    regexp->allocated = 0;
    regexp->translate = (uchar *)0x0;
    _re_syntax_options = 0x2c6;
    __length = strlen(pcVar2);
    pcVar2 = re_compile_pattern(pcVar2,__length,(re_pattern_buffer *)regexp);
    if (pcVar2 == (char *)0x0) {
      return true;
    }
                    /* WARNING: Subroutine does not return */
    error(1,0,&_LC0,pcVar2);
  }
  if (cVar1 < 'q') {
    if ((cVar1 == 'a') || (cVar1 == 'n')) {
LAB_00100027:
      *typep = _optarg;
      return true;
    }
  }
  else if (cVar1 == 't') goto LAB_00100027;
  return false;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void print_lineno(void)

{
  undefined8 uVar1;
  bool bVar2;
  
  if (!line_no_overflow) {
    __printf_chk(2,lineno_format,lineno_width,line_no,separator_str);
    bVar2 = SCARRY8(page_incr,line_no);
    line_no = page_incr + line_no;
    if (bVar2) {
      line_no_overflow = true;
    }
    return;
  }
  uVar1 = dcgettext(0,"line number overflow",5);
                    /* WARNING: Subroutine does not return */
  error(1,0,uVar1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

_Bool nl_file(char *file)

{
  ulong __n;
  char cVar1;
  char *pcVar2;
  size_t sVar3;
  int iVar4;
  FILE *__stream;
  long lVar5;
  uint *puVar6;
  undefined8 uVar7;
  int *piVar8;
  uint uVar9;
  size_t __n_00;
  
  if ((*file == '-') && (file[1] == '\0')) {
    have_read_stdin = true;
    __stream = _stdin;
  }
  else {
    __stream = (FILE *)rpl_fopen(file,&_LC2);
    if (__stream == (FILE *)0x0) {
      uVar7 = quotearg_n_style_colon(0,3,file);
      piVar8 = __errno_location();
                    /* WARNING: Subroutine does not return */
      error(0,*piVar8,&_LC0,uVar7);
    }
  }
  fadvise(__stream,2);
LAB_00100190:
  lVar5 = readlinebuffer(&line_buf,__stream);
  if (lVar5 != 0) {
    do {
      sVar3 = footer_del_len;
      pcVar2 = line_buf.buffer;
      __n_00 = line_buf.length;
      __n = line_buf.length - 1;
      if (((1 < __n) && (1 < footer_del_len)) &&
         (*(short *)line_buf.buffer == *(short *)section_del)) {
        if ((__n == header_del_len) && (iVar4 = memcmp(line_buf.buffer,header_del,__n), iVar4 == 0))
        {
          current_regex = &header_regex;
          current_type = header_type;
          goto joined_r0x00100315;
        }
        if ((__n == body_del_len) && (iVar4 = memcmp(pcVar2,body_del,__n), iVar4 == 0)) {
          current_regex = &body_regex;
          current_type = body_type;
          goto joined_r0x00100315;
        }
        if ((__n == sVar3) && (iVar4 = memcmp(pcVar2,footer_del,__n), iVar4 == 0))
        goto LAB_001003a0;
      }
      cVar1 = *current_type;
      if (cVar1 == 'p') {
        iVar4 = (int)__n_00 + -1;
        iVar4 = re_search((re_pattern_buffer *)current_regex,line_buf.buffer,iVar4,0,iVar4,
                          (re_registers *)0x0);
        if (iVar4 == -2) {
          uVar7 = dcgettext(0,"error in regular expression search",5);
          piVar8 = __errno_location();
                    /* WARNING: Subroutine does not return */
          error(1,*piVar8,uVar7);
        }
        if (iVar4 == -1) {
LAB_0010023c:
          fputs_unlocked(print_no_line_fmt,_stdout);
          __n_00 = line_buf.length;
        }
        else {
LAB_001003f2:
          print_lineno();
          __n_00 = line_buf.length;
        }
      }
      else if (cVar1 < 'q') {
        if (cVar1 == 'a') {
          if (blank_join < 2) goto LAB_001003f2;
          if (((long)__n_00 < 2) && (blank_lines_0 = blank_lines_0 + 1, blank_join != blank_lines_0)
             ) goto LAB_0010023c;
          print_lineno();
          blank_lines_0 = 0;
          __n_00 = line_buf.length;
        }
        else if (cVar1 == 'n') goto LAB_0010023c;
      }
      else if (cVar1 == 't') {
        if (1 < (long)__n_00) goto LAB_001003f2;
        goto LAB_0010023c;
      }
      fwrite_unlocked(line_buf.buffer,1,__n_00,_stdout);
      lVar5 = readlinebuffer(&line_buf,__stream);
      if (lVar5 == 0) break;
    } while( true );
  }
  puVar6 = (uint *)__errno_location();
  uVar9 = __stream->_flags & 0x20;
  if (uVar9 != 0) {
    uVar9 = *puVar6;
  }
  if ((*file == '-') && (file[1] == '\0')) {
    clearerr_unlocked(__stream);
  }
  else {
    iVar4 = rpl_fclose();
    if (iVar4 != 0) {
      if (uVar9 != 0) goto LAB_001004ca;
      uVar9 = *puVar6;
    }
  }
  if (uVar9 == 0) {
    return true;
  }
LAB_001004ca:
  uVar7 = quotearg_n_style_colon(0,3,file);
                    /* WARNING: Subroutine does not return */
  error(0,uVar9,&_LC0,uVar7);
LAB_001003a0:
  current_regex = &footer_regex;
  current_type = footer_type;
joined_r0x00100315:
  if (reset_numbers != false) {
    line_no_overflow = false;
    line_no = starting_line_number;
  }
  pcVar2 = _stdout->_IO_write_ptr;
  if (pcVar2 < _stdout->_IO_write_end) {
    _stdout->_IO_write_ptr = pcVar2 + 1;
    *pcVar2 = '\n';
  }
  else {
    __overflow(_stdout,10);
  }
  goto LAB_00100190;
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
  undefined1 *puVar7;
  infomap infomap [7];
  
  uVar5 = _program_name;
  piVar6 = infomap;
  if (status != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(_stderr,2,uVar3,uVar5);
    goto LAB_001005b9;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... [FILE]...\n",5);
  __printf_chk(2,uVar3,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"Write each FILE to standard output, with line numbers added.\n",5);
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
                             "  -b, --body-numbering=STYLE      use STYLE for numbering body lines\n  -d, --section-delimiter=CC      use CC for logical page delimiters\n  -f, --footer-numbering=STYLE    use STYLE for numbering footer lines\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -h, --header-numbering=STYLE    use STYLE for numbering header lines\n  -i, --line-increment=NUMBER     line number increment at each line\n  -l, --join-blank-lines=NUMBER   group of NUMBER empty lines counted as one\n  -n, --number-format=FORMAT      insert line numbers according to FORMAT\n  -p, --no-renumber               do not reset line numbers for each section\n  -s, --number-separator=STRING   add STRING after (possible) line number\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -v, --starting-line-number=NUMBER  first line number for each section\n  -w, --number-width=NUMBER       use NUMBER columns for line numbers\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nDefault options are: -bt -d\'\\:\' -fn -hn -i1 -l1 -n\'rn\' -s<TAB> -v1 -w6\n\nCC are two delimiter characters used to construct logical page delimiters;\na missing second character implies \':\'.  As a GNU extension one can specify\nmore than two characters, and also specifying the empty string (-d \'\')\ndisables section matching.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nSTYLE is one of:\n\n  a      number all lines\n  t      number only nonempty lines\n  n      number no lines\n  pBRE   number only lines that contain a match for the basic regular\n         expression, BRE\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nFORMAT is one of:\n\n  ln     left justified, no leading zeros\n  rn     right justified, no leading zeros\n  rz     right justified, leading zeros\n\n"
                             ,5);
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
    if (((*pcVar4 == 'n') && (pcVar4[1] == 'l')) && (pcVar4[2] == '\0')) break;
    pcVar4 = *(char **)((long)piVar6 + 0x10);
    piVar6 = (infomap *)((long)piVar6 + 0x10);
  } while (pcVar4 != (char *)0x0);
  puVar7 = *(undefined1 **)((long)piVar6 + 8);
  if (puVar7 == (undefined1 *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    puVar7 = &_LC5;
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) goto LAB_001008ac;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC5);
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
LAB_001008ac:
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
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC5);
    if (puVar7 == &_LC5) {
      pcVar4 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,puVar7,pcVar4);
LAB_001005b9:
                    /* WARNING: Subroutine does not return */
  exit(status);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int main(int argc,char **argv)

{
  char cVar1;
  char *pcVar2;
  _Bool _Var3;
  _Bool _Var4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  size_t sVar8;
  char *pcVar9;
  int *piVar10;
  long lVar11;
  char *pcVar12;
  char *pcVar13;
  long lVar14;
  
  _Var4 = true;
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  have_read_stdin = false;
  pcVar12 = lineno_format;
  pcVar9 = section_del;
  do {
    while( true ) {
      section_del = pcVar9;
      lineno_format = pcVar12;
      iVar5 = getopt_long(argc,argv,"h:b:f:v:i:pl:s:w:n:d:",longopts,0);
      pcVar13 = _optarg;
      if (iVar5 == -1) {
        if (_Var4 == false) {
                    /* WARNING: Subroutine does not return */
          usage(1);
        }
        sVar8 = strlen(section_del);
        header_del_len = sVar8 * 3;
        lVar11 = header_del_len + 1;
        header_del = (char *)xmalloc(lVar11);
        pcVar12 = section_del;
        pcVar13 = header_del + sVar8;
        pcVar9 = (char *)__stpcpy_chk(header_del,section_del,lVar11);
        pcVar9 = stpcpy(pcVar9,pcVar12);
        strcpy(pcVar9,pcVar12);
        body_del_len = sVar8 * 2;
        footer_del = pcVar13 + sVar8;
        footer_del_len = sVar8;
        body_del = pcVar13;
        initbuffer(&line_buf);
        sVar8 = strlen(separator_str);
        lVar11 = sVar8 + 1 + (long)lineno_width;
        print_no_line_fmt = (char *)xmalloc(lVar11);
        lVar14 = (long)lineno_width;
        lVar11 = __memset_chk(print_no_line_fmt,0x20,lVar14 + sVar8,lVar11);
        *(undefined1 *)(lVar11 + lVar14 + sVar8) = 0;
        line_no = starting_line_number;
        current_type = body_type;
        current_regex = &body_regex;
        if (_optind == argc) {
          _Var4 = nl_file("-");
        }
        else {
          for (; _optind < argc; _optind = _optind + 1) {
            _Var3 = nl_file(argv[_optind]);
            _Var4 = (_Bool)(_Var4 & _Var3);
          }
        }
        if ((have_read_stdin != false) && (iVar5 = rpl_fclose(_stdin), iVar5 == -1)) {
          piVar10 = __errno_location();
                    /* WARNING: Subroutine does not return */
          error(1,*piVar10,&_LC50);
        }
        return (int)(_Var4 ^ 1);
      }
      pcVar12 = lineno_format;
      pcVar9 = section_del;
      if (iVar5 < 0x78) break;
switchD_00101a69_caseD_63:
      _Var4 = false;
    }
    if (iVar5 < 0x62) {
      if (iVar5 == -0x83) {
        uVar6 = proper_name_lite("David MacKenzie","David MacKenzie");
        uVar7 = proper_name_lite("Scott Bartram","Scott Bartram");
        version_etc(_stdout,&_LC5,"GNU coreutils",_Version,uVar7,uVar6,0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar5 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      goto switchD_00101a69_caseD_63;
    }
    switch(iVar5) {
    case 0x62:
      _Var3 = build_type_arg(&body_type,&body_regex,body_fastmap);
      pcVar12 = lineno_format;
      pcVar9 = section_del;
      if (!_Var3) {
        uVar6 = quote(_optarg);
        pcVar12 = "invalid body numbering style: %s";
        goto LAB_00102005;
      }
      break;
    default:
      goto switchD_00101a69_caseD_63;
    case 100:
      sVar8 = strlen(_optarg);
      pcVar12 = lineno_format;
      pcVar9 = pcVar13;
      if (sVar8 - 1 < 2) {
        cVar1 = *pcVar13;
        pcVar2 = section_del;
        while (pcVar12 = lineno_format, pcVar9 = section_del, cVar1 != '\0') {
          _optarg = pcVar13 + 1;
          *pcVar2 = *pcVar13;
          pcVar2 = pcVar2 + 1;
          pcVar13 = _optarg;
          cVar1 = *_optarg;
        }
      }
      break;
    case 0x66:
      _Var3 = build_type_arg(&footer_type,&footer_regex,footer_fastmap);
      pcVar12 = lineno_format;
      pcVar9 = section_del;
      if (!_Var3) {
        uVar6 = quote(_optarg);
        pcVar12 = "invalid footer numbering style: %s";
        goto LAB_00102005;
      }
      break;
    case 0x68:
      _Var3 = build_type_arg(&header_type,&header_regex,header_fastmap);
      pcVar12 = lineno_format;
      pcVar9 = section_del;
      if (!_Var3) {
        uVar6 = quote(_optarg);
        pcVar12 = "invalid header numbering style: %s";
        goto LAB_00102005;
      }
      break;
    case 0x69:
      uVar6 = dcgettext(0,"invalid line number increment",5);
      page_incr = xdectoimax(_optarg,0x8000000000000000,0x7fffffffffffffff,&_LC7,uVar6,0);
      pcVar12 = lineno_format;
      pcVar9 = section_del;
      break;
    case 0x6c:
      uVar6 = dcgettext(0,"invalid line number of blank lines",5);
      blank_join = xnumtoimax(_optarg,10,1,0x7fffffffffffffff,&_LC7,uVar6,0,6);
      pcVar12 = lineno_format;
      pcVar9 = section_del;
      break;
    case 0x6e:
      if (((*_optarg != 'l') || (_optarg[1] != 'n')) || (pcVar12 = "%-*jd%s", _optarg[2] != '\0')) {
        iVar5 = strcmp(_optarg,"rn");
        if (iVar5 == 0) {
          pcVar12 = "%*jd%s";
          pcVar9 = section_del;
        }
        else {
          iVar5 = strcmp(pcVar13,"rz");
          pcVar12 = "%0*jd%s";
          pcVar9 = section_del;
          if (iVar5 != 0) {
            uVar6 = quote(pcVar13);
            pcVar12 = "invalid line numbering format: %s";
LAB_00102005:
            uVar7 = dcgettext(0,pcVar12,5);
                    /* WARNING: Subroutine does not return */
            error(0,0,uVar7,uVar6);
          }
        }
      }
      break;
    case 0x70:
      reset_numbers = false;
      break;
    case 0x73:
      separator_str = _optarg;
      break;
    case 0x76:
      uVar6 = dcgettext(0,"invalid starting line number",5);
      starting_line_number = xdectoimax(_optarg,0x8000000000000000,0x7fffffffffffffff,&_LC7,uVar6,0)
      ;
      pcVar12 = lineno_format;
      pcVar9 = section_del;
      break;
    case 0x77:
      uVar6 = dcgettext(0,"invalid line number field width",5);
      lineno_width = xnumtoimax(_optarg,10,1,0x7fffffff,&_LC7,uVar6,0,4);
      pcVar12 = lineno_format;
      pcVar9 = section_del;
    }
  } while( true );
}


