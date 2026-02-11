
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 build_type_arg(undefined8 *param_1,re_pattern_buffer *param_2,char *param_3)

{
  char cVar1;
  size_t __length;
  char *pcVar2;
  
  cVar1 = *_optarg;
  if (cVar1 == 'p') {
    pcVar2 = _optarg + 1;
    *param_1 = _optarg;
    _optarg = pcVar2;
    pcVar2 = _optarg;
    param_2->buffer = (uchar *)0x0;
    param_2->fastmap = param_3;
    param_2->allocated = 0;
    param_2->translate = (uchar *)0x0;
    _re_syntax_options = 0x2c6;
    __length = strlen(pcVar2);
    pcVar2 = re_compile_pattern(pcVar2,__length,param_2);
    if (pcVar2 == (char *)0x0) {
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    error(1,0,&_LC0,pcVar2);
  }
  if (cVar1 < 'q') {
    if ((cVar1 == 'a') || (cVar1 == 'n')) {
LAB_00100027:
      *param_1 = _optarg;
      return 1;
    }
  }
  else if (cVar1 == 't') goto LAB_00100027;
  return 0;
}



void print_lineno(void)

{
  undefined8 uVar1;
  bool bVar2;
  
  if (line_no_overflow == '\0') {
    __printf_chk(2,lineno_format,lineno_width,line_no,separator_str);
    bVar2 = SCARRY8(page_incr,line_no);
    line_no = page_incr + line_no;
    if (bVar2) {
      line_no_overflow = '\x01';
    }
    return;
  }
  uVar1 = dcgettext(0,"line number overflow",5);
                    /* WARNING: Subroutine does not return */
  error(1,0,uVar1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 nl_file(char *param_1)

{
  ulong __n;
  char cVar1;
  char *pcVar2;
  ulong uVar3;
  int iVar4;
  FILE *__stream;
  long lVar5;
  uint *puVar6;
  undefined8 uVar7;
  int *piVar8;
  uint uVar9;
  size_t __n_00;
  
  if ((*param_1 == '-') && (param_1[1] == '\0')) {
    have_read_stdin = 1;
    __stream = _stdin;
  }
  else {
    __stream = (FILE *)rpl_fopen(param_1,&_LC2);
    if (__stream == (FILE *)0x0) {
      uVar7 = quotearg_n_style_colon(0,3,param_1);
      piVar8 = __errno_location();
                    /* WARNING: Subroutine does not return */
      error(0,*piVar8,&_LC0,uVar7);
    }
  }
  fadvise(__stream,2);
LAB_00100190:
  lVar5 = readlinebuffer(line_buf,__stream);
  if (lVar5 != 0) {
    do {
      uVar3 = footer_del_len;
      uVar7 = line_buf._16_8_;
      __n_00 = line_buf._8_8_;
      __n = line_buf._8_8_ - 1;
      if (((1 < __n) && (1 < footer_del_len)) &&
         (*(short *)line_buf._16_8_ == *(short *)section_del)) {
        if ((__n == header_del_len) &&
           (iVar4 = memcmp((void *)line_buf._16_8_,header_del,__n), iVar4 == 0)) {
          current_regex = header_regex;
          current_type = header_type;
          goto joined_r0x00100315;
        }
        if ((__n == body_del_len) && (iVar4 = memcmp((void *)uVar7,body_del,__n), iVar4 == 0)) {
          current_regex = body_regex;
          current_type = body_type;
          goto joined_r0x00100315;
        }
        if ((__n == uVar3) && (iVar4 = memcmp((void *)uVar7,footer_del,__n), iVar4 == 0))
        goto LAB_001003a0;
      }
      cVar1 = *current_type;
      if (cVar1 == 'p') {
        iVar4 = (int)__n_00 + -1;
        iVar4 = re_search((re_pattern_buffer *)current_regex,(char *)line_buf._16_8_,iVar4,0,iVar4,
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
          __n_00 = line_buf._8_8_;
        }
        else {
LAB_001003f2:
          print_lineno();
          __n_00 = line_buf._8_8_;
        }
      }
      else if (cVar1 < 'q') {
        if (cVar1 == 'a') {
          if (blank_join < 2) goto LAB_001003f2;
          if (((long)__n_00 < 2) && (blank_lines_0 = blank_lines_0 + 1, blank_join != blank_lines_0)
             ) goto LAB_0010023c;
          print_lineno();
          blank_lines_0 = 0;
          __n_00 = line_buf._8_8_;
        }
        else if (cVar1 == 'n') goto LAB_0010023c;
      }
      else if (cVar1 == 't') {
        if (1 < (long)__n_00) goto LAB_001003f2;
        goto LAB_0010023c;
      }
      fwrite_unlocked((void *)line_buf._16_8_,1,__n_00,_stdout);
      lVar5 = readlinebuffer(line_buf,__stream);
      if (lVar5 == 0) break;
    } while( true );
  }
  puVar6 = (uint *)__errno_location();
  uVar9 = __stream->_flags & 0x20;
  if (uVar9 != 0) {
    uVar9 = *puVar6;
  }
  if ((*param_1 == '-') && (param_1[1] == '\0')) {
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
    return 1;
  }
LAB_001004ca:
  uVar7 = quotearg_n_style_colon(0,3,param_1);
                    /* WARNING: Subroutine does not return */
  error(0,uVar9,&_LC0,uVar7);
LAB_001003a0:
  current_regex = footer_regex;
  current_type = footer_type;
joined_r0x00100315:
  if (reset_numbers != '\0') {
    line_no_overflow = 0;
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

void usage(int param_1)

{
  FILE *pFVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined1 **ppuVar6;
  undefined1 *puVar7;
  long in_FS_OFFSET;
  undefined1 *local_a8;
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
    if (((*pcVar4 == 'n') && (pcVar4[1] == 'l')) && (pcVar4[2] == '\0')) break;
    pcVar4 = *(char **)((long)ppuVar6 + 0x10);
    ppuVar6 = (undefined1 **)((long)ppuVar6 + 0x10);
  } while (pcVar4 != (char *)0x0);
  puVar7 = *(undefined1 **)((long)ppuVar6 + 8);
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
  exit(param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte main(int param_1,undefined8 *param_2)

{
  char *pcVar1;
  char *__s1;
  undefined *__src;
  char *pcVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  size_t sVar9;
  char *pcVar10;
  int *piVar11;
  long lVar12;
  long lVar13;
  
  bVar5 = 1;
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  have_read_stdin = '\0';
  pcVar10 = lineno_format;
  pcVar2 = section_del;
  do {
    while( true ) {
      section_del = pcVar2;
      lineno_format = pcVar10;
      iVar6 = getopt_long(param_1,param_2,"h:b:f:v:i:pl:s:w:n:d:",longopts,0);
      __s1 = _optarg;
      if (iVar6 == -1) {
        if (bVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          usage(1);
        }
        sVar9 = strlen(section_del);
        header_del_len = sVar9 * 3;
        lVar12 = header_del_len + 1;
        header_del = xmalloc(lVar12);
        __src = section_del;
        lVar13 = header_del + sVar9;
        pcVar10 = (char *)__stpcpy_chk(header_del,section_del,lVar12);
        pcVar10 = stpcpy(pcVar10,__src);
        strcpy(pcVar10,__src);
        body_del_len = sVar9 * 2;
        footer_del = lVar13 + sVar9;
        footer_del_len = sVar9;
        body_del = lVar13;
        initbuffer(line_buf);
        sVar9 = strlen(separator_str);
        lVar12 = sVar9 + 1 + (long)lineno_width;
        print_no_line_fmt = xmalloc(lVar12);
        lVar13 = (long)lineno_width;
        lVar12 = __memset_chk(print_no_line_fmt,0x20,lVar13 + sVar9,lVar12);
        *(undefined1 *)(lVar12 + lVar13 + sVar9) = 0;
        line_no = starting_line_number;
        current_type = body_type;
        current_regex = body_regex;
        if (_optind == param_1) {
          bVar5 = nl_file(&_LC50);
        }
        else {
          for (; _optind < param_1; _optind = _optind + 1) {
            bVar4 = nl_file(param_2[_optind]);
            bVar5 = bVar5 & bVar4;
          }
        }
        if ((have_read_stdin != '\0') && (iVar6 = rpl_fclose(_stdin), iVar6 == -1)) {
          piVar11 = __errno_location();
                    /* WARNING: Subroutine does not return */
          error(1,*piVar11,&_LC50);
        }
        return bVar5 ^ 1;
      }
      pcVar10 = lineno_format;
      pcVar2 = section_del;
      if (iVar6 < 0x78) break;
switchD_00101a69_caseD_63:
      bVar5 = 0;
    }
    if (iVar6 < 0x62) {
      if (iVar6 == -0x83) {
        uVar7 = proper_name_lite("David MacKenzie","David MacKenzie");
        uVar8 = proper_name_lite("Scott Bartram","Scott Bartram");
        version_etc(_stdout,&_LC5,"GNU coreutils",_Version,uVar8,uVar7,0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar6 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      goto switchD_00101a69_caseD_63;
    }
    switch(iVar6) {
    case 0x62:
      cVar3 = build_type_arg(&body_type,body_regex,body_fastmap);
      pcVar10 = lineno_format;
      pcVar2 = section_del;
      if (cVar3 == '\0') {
        uVar7 = quote(_optarg);
        pcVar10 = "invalid body numbering style: %s";
        goto LAB_00102005;
      }
      break;
    default:
      goto switchD_00101a69_caseD_63;
    case 100:
      sVar9 = strlen(_optarg);
      pcVar10 = lineno_format;
      pcVar2 = __s1;
      if (sVar9 - 1 < 2) {
        cVar3 = *__s1;
        pcVar1 = section_del;
        while (pcVar10 = lineno_format, pcVar2 = section_del, cVar3 != '\0') {
          _optarg = __s1 + 1;
          *pcVar1 = *__s1;
          pcVar1 = pcVar1 + 1;
          __s1 = _optarg;
          cVar3 = *_optarg;
        }
      }
      break;
    case 0x66:
      cVar3 = build_type_arg(&footer_type,footer_regex,footer_fastmap);
      pcVar10 = lineno_format;
      pcVar2 = section_del;
      if (cVar3 == '\0') {
        uVar7 = quote(_optarg);
        pcVar10 = "invalid footer numbering style: %s";
        goto LAB_00102005;
      }
      break;
    case 0x68:
      cVar3 = build_type_arg(&header_type,header_regex,header_fastmap);
      pcVar10 = lineno_format;
      pcVar2 = section_del;
      if (cVar3 == '\0') {
        uVar7 = quote(_optarg);
        pcVar10 = "invalid header numbering style: %s";
        goto LAB_00102005;
      }
      break;
    case 0x69:
      uVar7 = dcgettext(0,"invalid line number increment",5);
      page_incr = xdectoimax(_optarg,0x8000000000000000,0x7fffffffffffffff,&_LC7,uVar7,0);
      pcVar10 = lineno_format;
      pcVar2 = section_del;
      break;
    case 0x6c:
      uVar7 = dcgettext(0,"invalid line number of blank lines",5);
      blank_join = xnumtoimax(_optarg,10,1,0x7fffffffffffffff,&_LC7,uVar7,0,6);
      pcVar10 = lineno_format;
      pcVar2 = section_del;
      break;
    case 0x6e:
      if (((*_optarg != 'l') || (_optarg[1] != 'n')) || (pcVar10 = "%-*jd%s", _optarg[2] != '\0')) {
        iVar6 = strcmp(_optarg,"rn");
        if (iVar6 == 0) {
          pcVar10 = "%*jd%s";
          pcVar2 = section_del;
        }
        else {
          iVar6 = strcmp(__s1,"rz");
          pcVar10 = "%0*jd%s";
          pcVar2 = section_del;
          if (iVar6 != 0) {
            uVar7 = quote(__s1);
            pcVar10 = "invalid line numbering format: %s";
LAB_00102005:
            uVar8 = dcgettext(0,pcVar10,5);
                    /* WARNING: Subroutine does not return */
            error(0,0,uVar8,uVar7);
          }
        }
      }
      break;
    case 0x70:
      reset_numbers = 0;
      break;
    case 0x73:
      separator_str = _optarg;
      break;
    case 0x76:
      uVar7 = dcgettext(0,"invalid starting line number",5);
      starting_line_number = xdectoimax(_optarg,0x8000000000000000,0x7fffffffffffffff,&_LC7,uVar7,0)
      ;
      pcVar10 = lineno_format;
      pcVar2 = section_del;
      break;
    case 0x77:
      uVar7 = dcgettext(0,"invalid line number field width",5);
      lineno_width = xnumtoimax(_optarg,10,1,0x7fffffff,&_LC7,uVar7,0,4);
      pcVar10 = lineno_format;
      pcVar2 = section_del;
    }
  } while( true );
}


