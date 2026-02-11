
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 build_type_arg(undefined8 *param_1,re_pattern_buffer *param_2,char *param_3)

{
  ulong __n;
  char cVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  char *pcVar5;
  undefined8 uVar6;
  FILE *pFVar7;
  long lVar8;
  uint *puVar9;
  int *piVar10;
  char *pcVar11;
  undefined1 **ppuVar12;
  uint uVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  re_pattern_buffer *prVar16;
  ulong unaff_R12;
  ulong uVar17;
  undefined8 unaff_R14;
  long in_FS_OFFSET;
  bool bVar18;
  undefined1 *puStack_110;
  char *pcStack_108;
  char *apcStack_100 [4];
  char *pcStack_e0;
  char *pcStack_d8;
  char *pcStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 auStack_b0 [16];
  undefined8 uStack_98;
  FILE *pFStack_90;
  undefined1 *puStack_88;
  ulong uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  char *pcStack_60;
  re_pattern_buffer *prStack_50;
  char *pcStack_48;
  
  cVar1 = *_optarg;
  if (cVar1 == 'p') {
    pcVar11 = _optarg + 1;
    *param_1 = _optarg;
    _optarg = pcVar11;
    pcVar11 = _optarg;
    param_2->buffer = (uchar *)0x0;
    param_2->fastmap = param_3;
    param_2->allocated = 0;
    param_2->translate = (uchar *)0x0;
    _re_syntax_options = 0x2c6;
    sVar4 = strlen(pcVar11);
    pcVar5 = re_compile_pattern(pcVar11,sVar4,param_2);
    if (pcVar5 == (char *)0x0) {
      return 1;
    }
    error(1,0,&_LC0);
    uVar6 = dcgettext(0,"line number overflow",5);
    pcVar5 = (char *)0x1;
    error(1,0,uVar6);
    pcStack_48 = pcVar11;
    pcStack_60 = pcVar5;
    prStack_50 = param_2;
    if ((*pcVar5 == '-') && (pcVar5[1] == '\0')) {
      have_read_stdin = 1;
      pFVar7 = _stdin;
    }
    else {
      uStack_70 = 0x10011d;
      pFVar7 = (FILE *)rpl_fopen(pcVar5,&_LC2);
      if (pFVar7 == (FILE *)0x0) {
        uStack_70 = 0x100558;
        uVar6 = quotearg_n_style_colon(0,3,pcStack_60);
        uStack_70 = 0x100560;
        piVar10 = __errno_location();
        uStack_70 = 0x100575;
        error(0,*piVar10,&_LC0,uVar6);
        return 0;
      }
    }
    uStack_70 = 0x10013d;
    fadvise(pFVar7,2);
LAB_00100140:
    puVar14 = line_buf;
    uStack_70 = 0x10014b;
    lVar8 = readlinebuffer(line_buf,pFVar7);
    uVar17 = unaff_R12;
    uVar6 = unaff_R14;
    if (lVar8 != 0) {
      do {
        unaff_R12 = footer_del_len;
        unaff_R14 = line_buf._16_8_;
        sVar4 = line_buf._8_8_;
        iVar3 = (int)puVar14;
        __n = line_buf._8_8_ - 1;
        if (((1 < __n) && (uVar17 = unaff_R12, 1 < footer_del_len)) &&
           (uVar6 = unaff_R14, *(short *)section_del == *(short *)line_buf._16_8_)) {
          if (__n == header_del_len) {
            uStack_70 = 0x10029a;
            uVar15 = line_buf._16_8_;
            iVar2 = memcmp((void *)line_buf._16_8_,header_del,__n);
            iVar3 = (int)uVar15;
            if (iVar2 == 0) {
              current_regex = header_regex;
              current_type = header_type;
              goto joined_r0x001002c5;
            }
          }
          if (__n == body_del_len) {
            uStack_70 = 0x10031a;
            uVar15 = unaff_R14;
            iVar2 = memcmp((void *)unaff_R14,body_del,__n);
            iVar3 = (int)uVar15;
            if (iVar2 == 0) {
              current_regex = body_regex;
              current_type = body_type;
              goto joined_r0x001002c5;
            }
          }
          if (__n == unaff_R12) {
            uStack_70 = 0x1001ba;
            uVar15 = unaff_R14;
            iVar2 = memcmp((void *)unaff_R14,footer_del,__n);
            iVar3 = (int)uVar15;
            if (iVar2 == 0) goto LAB_00100350;
          }
        }
        cVar1 = *current_type;
        if (cVar1 == 'p') {
          iVar3 = (int)sVar4 + -1;
          uStack_70 = 0x10041f;
          prVar16 = (re_pattern_buffer *)current_regex;
          iVar2 = re_search((re_pattern_buffer *)current_regex,(char *)line_buf._16_8_,iVar3,0,iVar3
                            ,(re_registers *)0x0);
          iVar3 = (int)prVar16;
          if (iVar2 == -2) {
            uStack_70 = 0x10058f;
            pFVar7 = (FILE *)dcgettext(0,"error in regular expression search",5);
            uStack_70 = 0x100597;
            piVar10 = __errno_location();
            iVar3 = 1;
            uStack_70 = 0x1005a8;
            error(1,*piVar10,pFVar7);
LAB_001005a8:
            uStack_70 = 0x1005ad;
            print_lineno_part_0();
            uVar15 = _program_name;
            puStack_88 = line_buf;
            ppuVar12 = &puStack_110;
            uStack_98 = *(undefined8 *)(in_FS_OFFSET + 0x28);
            pFStack_90 = pFVar7;
            uStack_80 = uVar17;
            uStack_78 = __n;
            uStack_70 = uVar6;
            if (iVar3 == 0) {
              uVar6 = dcgettext(0,"Usage: %s [OPTION]... [FILE]...\n",5);
              __printf_chk(2,uVar6,uVar15);
              pFVar7 = _stdout;
              pcVar11 = (char *)dcgettext(0,
                                          "Write each FILE to standard output, with line numbers added.\n"
                                          ,5);
              fputs_unlocked(pcVar11,pFVar7);
              pFVar7 = _stdout;
              pcVar11 = (char *)dcgettext(0,
                                          "\nWith no FILE, or when FILE is -, read standard input.\n"
                                          ,5);
              fputs_unlocked(pcVar11,pFVar7);
              pFVar7 = _stdout;
              pcVar11 = (char *)dcgettext(0,
                                          "\nMandatory arguments to long options are mandatory for short options too.\n"
                                          ,5);
              fputs_unlocked(pcVar11,pFVar7);
              pFVar7 = _stdout;
              pcVar11 = (char *)dcgettext(0,
                                          "  -b, --body-numbering=STYLE      use STYLE for numbering body lines\n  -d, --section-delimiter=CC      use CC for logical page delimiters\n  -f, --footer-numbering=STYLE    use STYLE for numbering footer lines\n"
                                          ,5);
              fputs_unlocked(pcVar11,pFVar7);
              pFVar7 = _stdout;
              pcVar11 = (char *)dcgettext(0,
                                          "  -h, --header-numbering=STYLE    use STYLE for numbering header lines\n  -i, --line-increment=NUMBER     line number increment at each line\n  -l, --join-blank-lines=NUMBER   group of NUMBER empty lines counted as one\n  -n, --number-format=FORMAT      insert line numbers according to FORMAT\n  -p, --no-renumber               do not reset line numbers for each section\n  -s, --number-separator=STRING   add STRING after (possible) line number\n"
                                          ,5);
              fputs_unlocked(pcVar11,pFVar7);
              pFVar7 = _stdout;
              pcVar11 = (char *)dcgettext(0,
                                          "  -v, --starting-line-number=NUMBER  first line number for each section\n  -w, --number-width=NUMBER       use NUMBER columns for line numbers\n"
                                          ,5);
              fputs_unlocked(pcVar11,pFVar7);
              pFVar7 = _stdout;
              pcVar11 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
              fputs_unlocked(pcVar11,pFVar7);
              pFVar7 = _stdout;
              pcVar11 = (char *)dcgettext(0,
                                          "      --version     output version information and exit\n"
                                          ,5);
              fputs_unlocked(pcVar11,pFVar7);
              pFVar7 = _stdout;
              pcVar11 = (char *)dcgettext(0,
                                          "\nDefault options are: -bt -d\'\\:\' -fn -hn -i1 -l1 -n\'rn\' -s<TAB> -v1 -w6\n\nCC are two delimiter characters used to construct logical page delimiters;\na missing second character implies \':\'.  As a GNU extension one can specify\nmore than two characters, and also specifying the empty string (-d \'\')\ndisables section matching.\n"
                                          ,5);
              fputs_unlocked(pcVar11,pFVar7);
              pFVar7 = _stdout;
              pcVar11 = (char *)dcgettext(0,
                                          "\nSTYLE is one of:\n\n  a      number all lines\n  t      number only nonempty lines\n  n      number no lines\n  pBRE   number only lines that contain a match for the basic regular\n         expression, BRE\n"
                                          ,5);
              fputs_unlocked(pcVar11,pFVar7);
              pFVar7 = _stdout;
              pcVar11 = (char *)dcgettext(0,
                                          "\nFORMAT is one of:\n\n  ln     left justified, no leading zeros\n  rn     right justified, no leading zeros\n  rz     right justified, leading zeros\n\n"
                                          ,5);
              fputs_unlocked(pcVar11,pFVar7);
              pcVar11 = "[";
              puStack_110 = &_LC4;
              pcStack_108 = "test invocation";
              apcStack_100[0] = "coreutils";
              apcStack_100[1] = "Multi-call invocation";
              apcStack_100[2] = "sha224sum";
              apcStack_100[3] = "sha2 utilities";
              pcStack_e0 = "sha256sum";
              pcStack_d8 = "sha2 utilities";
              pcStack_d0 = "sha384sum";
              pcStack_c8 = "sha2 utilities";
              pcStack_c0 = "sha512sum";
              pcStack_b8 = "sha2 utilities";
              auStack_b0 = (undefined1  [16])0x0;
              goto LAB_00100880;
            }
            uVar6 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
            __fprintf_chk(_stderr,2,uVar6,uVar15);
            goto LAB_00100609;
          }
          if (iVar2 != -1) goto LAB_001003a2;
LAB_001001ec:
          uStack_70 = 0x1001ff;
          fputs_unlocked(print_no_line_fmt,_stdout);
          sVar4 = line_buf._8_8_;
        }
        else if (cVar1 < 'q') {
          if (cVar1 == 'a') {
            if (blank_join < 2) {
LAB_001003a2:
              if (line_no_overflow != '\0') goto LAB_001005a8;
              uStack_70 = 0x1003d6;
              __printf_chk(2,lineno_format,lineno_width,line_no,separator_str);
              bVar18 = SCARRY8(page_incr,line_no);
              line_no = page_incr + line_no;
              sVar4 = line_buf._8_8_;
              if (bVar18) {
                line_no_overflow = '\x01';
              }
            }
            else {
              if (((long)sVar4 < 2) &&
                 (blank_lines_0 = blank_lines_0 + 1, blank_join != blank_lines_0))
              goto LAB_001001ec;
              if (line_no_overflow != '\0') goto LAB_001005a8;
              uStack_70 = 0x1004a6;
              __printf_chk(2,lineno_format,lineno_width,line_no,separator_str);
              bVar18 = SCARRY8(page_incr,line_no);
              line_no = page_incr + line_no;
              if (bVar18) {
                line_no_overflow = '\x01';
              }
              blank_lines_0 = 0;
              sVar4 = line_buf._8_8_;
            }
          }
          else if (cVar1 == 'n') goto LAB_001001ec;
        }
        else if (cVar1 == 't') {
          if (1 < (long)sVar4) goto LAB_001003a2;
          goto LAB_001001ec;
        }
        uStack_70 = 0x100221;
        fwrite_unlocked((void *)line_buf._16_8_,1,sVar4,_stdout);
        puVar14 = line_buf;
        uStack_70 = 0x10022c;
        lVar8 = readlinebuffer(line_buf,pFVar7);
        if (lVar8 == 0) break;
      } while( true );
    }
    uStack_70 = 0x10023a;
    puVar9 = (uint *)__errno_location();
    uVar13 = pFVar7->_flags & 0x20;
    if (uVar13 != 0) {
      uVar13 = *puVar9;
    }
    if ((*pcStack_60 == '-') && (pcStack_60[1] == '\0')) {
      uStack_70 = 0x100265;
      clearerr_unlocked(pFVar7);
    }
    else {
      uStack_70 = 0x100505;
      iVar3 = rpl_fclose();
      if (iVar3 != 0) {
        if (uVar13 != 0) goto LAB_0010051a;
        uVar13 = *puVar9;
      }
    }
    if (uVar13 == 0) {
      return 1;
    }
LAB_0010051a:
    uStack_70 = 0x10052b;
    uVar6 = quotearg_n_style_colon(0,3,pcStack_60);
    uStack_70 = 0x100540;
    error(0,uVar13,&_LC0,uVar6);
    return 0;
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
LAB_00100350:
  current_regex = footer_regex;
  current_type = footer_type;
joined_r0x001002c5:
  if (reset_numbers != '\0') {
    line_no_overflow = '\0';
    line_no = starting_line_number;
  }
  pcVar11 = _stdout->_IO_write_ptr;
  if (pcVar11 < _stdout->_IO_write_end) {
    _stdout->_IO_write_ptr = pcVar11 + 1;
    *pcVar11 = '\n';
  }
  else {
    uStack_70 = 0x10038a;
    __overflow(_stdout,10);
  }
  goto LAB_00100140;
  while( true ) {
    pcVar11 = *(char **)((long)ppuVar12 + 0x10);
    ppuVar12 = (undefined1 **)((long)ppuVar12 + 0x10);
    if (pcVar11 == (char *)0x0) break;
LAB_00100880:
    if (((*pcVar11 == 'n') && (pcVar11[1] == 'l')) && (pcVar11[2] == '\0')) break;
  }
  puVar14 = *(undefined1 **)((long)ppuVar12 + 8);
  if (puVar14 == (undefined1 *)0x0) {
    uVar6 = dcgettext(0,"\n%s online help: <%s>\n",5);
    puVar14 = &_LC5;
    __printf_chk(2,uVar6,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar11 = setlocale(5,(char *)0x0);
    if (pcVar11 == (char *)0x0) {
      uVar6 = dcgettext(0,"Full documentation <%s%s>\n",5);
      pcVar11 = " invocation";
      __printf_chk(2,uVar6,"https://www.gnu.org/software/coreutils/",&_LC5);
      goto LAB_00100952;
    }
LAB_001008fc:
    iVar2 = strncmp(pcVar11,"en_",3);
    pFVar7 = _stdout;
    if (iVar2 != 0) {
      pcVar11 = (char *)dcgettext(0,
                                  "Report any translation bugs to <https://translationproject.org/team/>\n"
                                  ,5);
      fputs_unlocked(pcVar11,pFVar7);
    }
  }
  else {
    uVar6 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar6,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar11 = setlocale(5,(char *)0x0);
    if (pcVar11 != (char *)0x0) goto LAB_001008fc;
  }
  uVar6 = dcgettext(0,"Full documentation <%s%s>\n",5);
  pcVar11 = "";
  __printf_chk(2,uVar6,"https://www.gnu.org/software/coreutils/",&_LC5);
  if (puVar14 == &_LC5) {
    pcVar11 = " invocation";
  }
LAB_00100952:
  uVar6 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar6,puVar14,pcVar11);
LAB_00100609:
                    /* WARNING: Subroutine does not return */
  exit(iVar3);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 print_lineno_part_0(void)

{
  ulong __n;
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  FILE *pFVar5;
  long lVar6;
  uint *puVar7;
  int *piVar8;
  undefined1 **ppuVar9;
  uint uVar10;
  char *pcVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  re_pattern_buffer *prVar14;
  ulong unaff_R12;
  ulong uVar15;
  undefined8 unaff_R14;
  size_t __n_00;
  long in_FS_OFFSET;
  bool bVar16;
  undefined1 *puStack_f8;
  char *pcStack_f0;
  char *apcStack_e8 [4];
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  char *pcStack_b0;
  char *pcStack_a8;
  char *pcStack_a0;
  undefined1 auStack_98 [16];
  undefined8 uStack_80;
  FILE *pFStack_78;
  undefined1 *puStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  char *pcStack_48;
  
  uVar4 = dcgettext(0,"line number overflow",5);
  pcVar11 = (char *)0x1;
  error(1,0,uVar4);
  pcStack_48 = pcVar11;
  if ((*pcVar11 == '-') && (pcVar11[1] == '\0')) {
    have_read_stdin = 1;
    pFVar5 = _stdin;
  }
  else {
    uStack_58 = 0x10011d;
    pFVar5 = (FILE *)rpl_fopen(pcVar11,&_LC2);
    if (pFVar5 == (FILE *)0x0) {
      uStack_58 = 0x100558;
      uVar4 = quotearg_n_style_colon(0,3,pcStack_48);
      uStack_58 = 0x100560;
      piVar8 = __errno_location();
      uStack_58 = 0x100575;
      error(0,*piVar8,&_LC0,uVar4);
      return 0;
    }
  }
  uStack_58 = 0x10013d;
  fadvise(pFVar5,2);
LAB_00100140:
  puVar12 = line_buf;
  uStack_58 = 0x10014b;
  lVar6 = readlinebuffer(line_buf,pFVar5);
  uVar15 = unaff_R12;
  uVar4 = unaff_R14;
  if (lVar6 != 0) {
    do {
      unaff_R12 = footer_del_len;
      unaff_R14 = line_buf._16_8_;
      __n_00 = line_buf._8_8_;
      iVar3 = (int)puVar12;
      __n = line_buf._8_8_ - 1;
      if (((1 < __n) && (uVar15 = unaff_R12, 1 < footer_del_len)) &&
         (uVar4 = unaff_R14, *(short *)section_del == *(short *)line_buf._16_8_)) {
        if (__n == header_del_len) {
          uStack_58 = 0x10029a;
          uVar13 = line_buf._16_8_;
          iVar2 = memcmp((void *)line_buf._16_8_,header_del,__n);
          iVar3 = (int)uVar13;
          if (iVar2 == 0) {
            current_regex = header_regex;
            current_type = header_type;
            goto joined_r0x001002c5;
          }
        }
        if (__n == body_del_len) {
          uStack_58 = 0x10031a;
          uVar13 = unaff_R14;
          iVar2 = memcmp((void *)unaff_R14,body_del,__n);
          iVar3 = (int)uVar13;
          if (iVar2 == 0) {
            current_regex = body_regex;
            current_type = body_type;
            goto joined_r0x001002c5;
          }
        }
        if (__n == unaff_R12) {
          uStack_58 = 0x1001ba;
          uVar13 = unaff_R14;
          iVar2 = memcmp((void *)unaff_R14,footer_del,__n);
          iVar3 = (int)uVar13;
          if (iVar2 == 0) goto LAB_00100350;
        }
      }
      cVar1 = *current_type;
      if (cVar1 == 'p') {
        iVar3 = (int)__n_00 + -1;
        uStack_58 = 0x10041f;
        prVar14 = (re_pattern_buffer *)current_regex;
        iVar2 = re_search((re_pattern_buffer *)current_regex,(char *)line_buf._16_8_,iVar3,0,iVar3,
                          (re_registers *)0x0);
        iVar3 = (int)prVar14;
        if (iVar2 == -2) {
          uStack_58 = 0x10058f;
          pFVar5 = (FILE *)dcgettext(0,"error in regular expression search",5);
          uStack_58 = 0x100597;
          piVar8 = __errno_location();
          iVar3 = 1;
          uStack_58 = 0x1005a8;
          error(1,*piVar8,pFVar5);
LAB_001005a8:
          uStack_58 = 0x1005ad;
          print_lineno_part_0();
          uVar13 = _program_name;
          puStack_70 = line_buf;
          ppuVar9 = &puStack_f8;
          uStack_80 = *(undefined8 *)(in_FS_OFFSET + 0x28);
          pFStack_78 = pFVar5;
          uStack_68 = uVar15;
          uStack_60 = __n;
          uStack_58 = uVar4;
          if (iVar3 == 0) {
            uVar4 = dcgettext(0,"Usage: %s [OPTION]... [FILE]...\n",5);
            __printf_chk(2,uVar4,uVar13);
            pFVar5 = _stdout;
            pcVar11 = (char *)dcgettext(0,
                                        "Write each FILE to standard output, with line numbers added.\n"
                                        ,5);
            fputs_unlocked(pcVar11,pFVar5);
            pFVar5 = _stdout;
            pcVar11 = (char *)dcgettext(0,
                                        "\nWith no FILE, or when FILE is -, read standard input.\n",
                                        5);
            fputs_unlocked(pcVar11,pFVar5);
            pFVar5 = _stdout;
            pcVar11 = (char *)dcgettext(0,
                                        "\nMandatory arguments to long options are mandatory for short options too.\n"
                                        ,5);
            fputs_unlocked(pcVar11,pFVar5);
            pFVar5 = _stdout;
            pcVar11 = (char *)dcgettext(0,
                                        "  -b, --body-numbering=STYLE      use STYLE for numbering body lines\n  -d, --section-delimiter=CC      use CC for logical page delimiters\n  -f, --footer-numbering=STYLE    use STYLE for numbering footer lines\n"
                                        ,5);
            fputs_unlocked(pcVar11,pFVar5);
            pFVar5 = _stdout;
            pcVar11 = (char *)dcgettext(0,
                                        "  -h, --header-numbering=STYLE    use STYLE for numbering header lines\n  -i, --line-increment=NUMBER     line number increment at each line\n  -l, --join-blank-lines=NUMBER   group of NUMBER empty lines counted as one\n  -n, --number-format=FORMAT      insert line numbers according to FORMAT\n  -p, --no-renumber               do not reset line numbers for each section\n  -s, --number-separator=STRING   add STRING after (possible) line number\n"
                                        ,5);
            fputs_unlocked(pcVar11,pFVar5);
            pFVar5 = _stdout;
            pcVar11 = (char *)dcgettext(0,
                                        "  -v, --starting-line-number=NUMBER  first line number for each section\n  -w, --number-width=NUMBER       use NUMBER columns for line numbers\n"
                                        ,5);
            fputs_unlocked(pcVar11,pFVar5);
            pFVar5 = _stdout;
            pcVar11 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
            fputs_unlocked(pcVar11,pFVar5);
            pFVar5 = _stdout;
            pcVar11 = (char *)dcgettext(0,
                                        "      --version     output version information and exit\n",
                                        5);
            fputs_unlocked(pcVar11,pFVar5);
            pFVar5 = _stdout;
            pcVar11 = (char *)dcgettext(0,
                                        "\nDefault options are: -bt -d\'\\:\' -fn -hn -i1 -l1 -n\'rn\' -s<TAB> -v1 -w6\n\nCC are two delimiter characters used to construct logical page delimiters;\na missing second character implies \':\'.  As a GNU extension one can specify\nmore than two characters, and also specifying the empty string (-d \'\')\ndisables section matching.\n"
                                        ,5);
            fputs_unlocked(pcVar11,pFVar5);
            pFVar5 = _stdout;
            pcVar11 = (char *)dcgettext(0,
                                        "\nSTYLE is one of:\n\n  a      number all lines\n  t      number only nonempty lines\n  n      number no lines\n  pBRE   number only lines that contain a match for the basic regular\n         expression, BRE\n"
                                        ,5);
            fputs_unlocked(pcVar11,pFVar5);
            pFVar5 = _stdout;
            pcVar11 = (char *)dcgettext(0,
                                        "\nFORMAT is one of:\n\n  ln     left justified, no leading zeros\n  rn     right justified, no leading zeros\n  rz     right justified, leading zeros\n\n"
                                        ,5);
            fputs_unlocked(pcVar11,pFVar5);
            pcVar11 = "[";
            puStack_f8 = &_LC4;
            pcStack_f0 = "test invocation";
            apcStack_e8[0] = "coreutils";
            apcStack_e8[1] = "Multi-call invocation";
            apcStack_e8[2] = "sha224sum";
            apcStack_e8[3] = "sha2 utilities";
            pcStack_c8 = "sha256sum";
            pcStack_c0 = "sha2 utilities";
            pcStack_b8 = "sha384sum";
            pcStack_b0 = "sha2 utilities";
            pcStack_a8 = "sha512sum";
            pcStack_a0 = "sha2 utilities";
            auStack_98 = (undefined1  [16])0x0;
            goto LAB_00100880;
          }
          uVar4 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
          __fprintf_chk(_stderr,2,uVar4,uVar13);
          goto LAB_00100609;
        }
        if (iVar2 != -1) goto LAB_001003a2;
LAB_001001ec:
        uStack_58 = 0x1001ff;
        fputs_unlocked(print_no_line_fmt,_stdout);
        __n_00 = line_buf._8_8_;
      }
      else if (cVar1 < 'q') {
        if (cVar1 == 'a') {
          if (blank_join < 2) {
LAB_001003a2:
            if (line_no_overflow != '\0') goto LAB_001005a8;
            uStack_58 = 0x1003d6;
            __printf_chk(2,lineno_format,lineno_width,line_no,separator_str);
            bVar16 = SCARRY8(page_incr,line_no);
            line_no = page_incr + line_no;
            __n_00 = line_buf._8_8_;
            if (bVar16) {
              line_no_overflow = '\x01';
            }
          }
          else {
            if (((long)__n_00 < 2) &&
               (blank_lines_0 = blank_lines_0 + 1, blank_join != blank_lines_0)) goto LAB_001001ec;
            if (line_no_overflow != '\0') goto LAB_001005a8;
            uStack_58 = 0x1004a6;
            __printf_chk(2,lineno_format,lineno_width,line_no,separator_str);
            bVar16 = SCARRY8(page_incr,line_no);
            line_no = page_incr + line_no;
            if (bVar16) {
              line_no_overflow = '\x01';
            }
            blank_lines_0 = 0;
            __n_00 = line_buf._8_8_;
          }
        }
        else if (cVar1 == 'n') goto LAB_001001ec;
      }
      else if (cVar1 == 't') {
        if (1 < (long)__n_00) goto LAB_001003a2;
        goto LAB_001001ec;
      }
      uStack_58 = 0x100221;
      fwrite_unlocked((void *)line_buf._16_8_,1,__n_00,_stdout);
      puVar12 = line_buf;
      uStack_58 = 0x10022c;
      lVar6 = readlinebuffer(line_buf,pFVar5);
      if (lVar6 == 0) break;
    } while( true );
  }
  uStack_58 = 0x10023a;
  puVar7 = (uint *)__errno_location();
  uVar10 = pFVar5->_flags & 0x20;
  if (uVar10 != 0) {
    uVar10 = *puVar7;
  }
  if ((*pcStack_48 == '-') && (pcStack_48[1] == '\0')) {
    uStack_58 = 0x100265;
    clearerr_unlocked(pFVar5);
  }
  else {
    uStack_58 = 0x100505;
    iVar3 = rpl_fclose();
    if (iVar3 != 0) {
      if (uVar10 != 0) goto LAB_0010051a;
      uVar10 = *puVar7;
    }
  }
  if (uVar10 == 0) {
    return 1;
  }
LAB_0010051a:
  uStack_58 = 0x10052b;
  uVar4 = quotearg_n_style_colon(0,3,pcStack_48);
  uStack_58 = 0x100540;
  error(0,uVar10,&_LC0,uVar4);
  return 0;
LAB_00100350:
  current_regex = footer_regex;
  current_type = footer_type;
joined_r0x001002c5:
  if (reset_numbers != '\0') {
    line_no_overflow = '\0';
    line_no = starting_line_number;
  }
  pcVar11 = _stdout->_IO_write_ptr;
  if (pcVar11 < _stdout->_IO_write_end) {
    _stdout->_IO_write_ptr = pcVar11 + 1;
    *pcVar11 = '\n';
  }
  else {
    uStack_58 = 0x10038a;
    __overflow(_stdout,10);
  }
  goto LAB_00100140;
  while( true ) {
    pcVar11 = *(char **)((long)ppuVar9 + 0x10);
    ppuVar9 = (undefined1 **)((long)ppuVar9 + 0x10);
    if (pcVar11 == (char *)0x0) break;
LAB_00100880:
    if (((*pcVar11 == 'n') && (pcVar11[1] == 'l')) && (pcVar11[2] == '\0')) break;
  }
  puVar12 = *(undefined1 **)((long)ppuVar9 + 8);
  if (puVar12 == (undefined1 *)0x0) {
    uVar4 = dcgettext(0,"\n%s online help: <%s>\n",5);
    puVar12 = &_LC5;
    __printf_chk(2,uVar4,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar11 = setlocale(5,(char *)0x0);
    if (pcVar11 == (char *)0x0) {
      uVar4 = dcgettext(0,"Full documentation <%s%s>\n",5);
      pcVar11 = " invocation";
      __printf_chk(2,uVar4,"https://www.gnu.org/software/coreutils/",&_LC5);
      goto LAB_00100952;
    }
LAB_001008fc:
    iVar2 = strncmp(pcVar11,"en_",3);
    pFVar5 = _stdout;
    if (iVar2 != 0) {
      pcVar11 = (char *)dcgettext(0,
                                  "Report any translation bugs to <https://translationproject.org/team/>\n"
                                  ,5);
      fputs_unlocked(pcVar11,pFVar5);
    }
  }
  else {
    uVar4 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar4,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar11 = setlocale(5,(char *)0x0);
    if (pcVar11 != (char *)0x0) goto LAB_001008fc;
  }
  uVar4 = dcgettext(0,"Full documentation <%s%s>\n",5);
  pcVar11 = "";
  __printf_chk(2,uVar4,"https://www.gnu.org/software/coreutils/",&_LC5);
  if (puVar12 == &_LC5) {
    pcVar11 = " invocation";
  }
LAB_00100952:
  uVar4 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar4,puVar12,pcVar11);
LAB_00100609:
                    /* WARNING: Subroutine does not return */
  exit(iVar3);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 nl_file(char *param_1)

{
  ulong __n;
  char cVar1;
  int iVar2;
  int iVar3;
  FILE *pFVar4;
  long lVar5;
  uint *puVar6;
  undefined8 uVar7;
  int *piVar8;
  char *pcVar9;
  undefined1 **ppuVar10;
  uint uVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  re_pattern_buffer *prVar14;
  ulong unaff_R12;
  ulong uVar15;
  undefined8 unaff_R14;
  size_t __n_00;
  long in_FS_OFFSET;
  bool bVar16;
  undefined1 *puStack_f0;
  char *pcStack_e8;
  char *apcStack_e0 [4];
  char *pcStack_c0;
  char *pcStack_b8;
  char *pcStack_b0;
  char *pcStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
  undefined1 auStack_90 [16];
  undefined8 uStack_78;
  FILE *pFStack_70;
  undefined1 *puStack_68;
  ulong uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  char *local_40;
  
  local_40 = param_1;
  if ((*param_1 == '-') && (param_1[1] == '\0')) {
    have_read_stdin = 1;
    pFVar4 = _stdin;
  }
  else {
    uStack_50 = 0x10011d;
    pFVar4 = (FILE *)rpl_fopen(param_1,&_LC2);
    if (pFVar4 == (FILE *)0x0) {
      uStack_50 = 0x100558;
      uVar7 = quotearg_n_style_colon(0,3,local_40);
      uStack_50 = 0x100560;
      piVar8 = __errno_location();
      uStack_50 = 0x100575;
      error(0,*piVar8,&_LC0,uVar7);
      return 0;
    }
  }
  uStack_50 = 0x10013d;
  fadvise(pFVar4,2);
LAB_00100140:
  puVar12 = line_buf;
  uStack_50 = 0x10014b;
  lVar5 = readlinebuffer(line_buf,pFVar4);
  uVar15 = unaff_R12;
  uVar7 = unaff_R14;
  if (lVar5 != 0) {
    do {
      unaff_R12 = footer_del_len;
      unaff_R14 = line_buf._16_8_;
      __n_00 = line_buf._8_8_;
      iVar3 = (int)puVar12;
      __n = line_buf._8_8_ - 1;
      if (((1 < __n) && (uVar15 = unaff_R12, 1 < footer_del_len)) &&
         (uVar7 = unaff_R14, *(short *)section_del == *(short *)line_buf._16_8_)) {
        if (__n == header_del_len) {
          uStack_50 = 0x10029a;
          uVar13 = line_buf._16_8_;
          iVar2 = memcmp((void *)line_buf._16_8_,header_del,__n);
          iVar3 = (int)uVar13;
          if (iVar2 == 0) {
            current_regex = header_regex;
            current_type = header_type;
            goto joined_r0x001002c5;
          }
        }
        if (__n == body_del_len) {
          uStack_50 = 0x10031a;
          uVar13 = unaff_R14;
          iVar2 = memcmp((void *)unaff_R14,body_del,__n);
          iVar3 = (int)uVar13;
          if (iVar2 == 0) {
            current_regex = body_regex;
            current_type = body_type;
            goto joined_r0x001002c5;
          }
        }
        if (__n == unaff_R12) {
          uStack_50 = 0x1001ba;
          uVar13 = unaff_R14;
          iVar2 = memcmp((void *)unaff_R14,footer_del,__n);
          iVar3 = (int)uVar13;
          if (iVar2 == 0) goto LAB_00100350;
        }
      }
      cVar1 = *current_type;
      if (cVar1 == 'p') {
        iVar3 = (int)__n_00 + -1;
        uStack_50 = 0x10041f;
        prVar14 = (re_pattern_buffer *)current_regex;
        iVar2 = re_search((re_pattern_buffer *)current_regex,(char *)line_buf._16_8_,iVar3,0,iVar3,
                          (re_registers *)0x0);
        iVar3 = (int)prVar14;
        if (iVar2 == -2) {
          uStack_50 = 0x10058f;
          pFVar4 = (FILE *)dcgettext(0,"error in regular expression search",5);
          uStack_50 = 0x100597;
          piVar8 = __errno_location();
          iVar3 = 1;
          uStack_50 = 0x1005a8;
          error(1,*piVar8,pFVar4);
LAB_001005a8:
          uStack_50 = 0x1005ad;
          print_lineno_part_0();
          uVar13 = _program_name;
          puStack_68 = line_buf;
          ppuVar10 = &puStack_f0;
          uStack_78 = *(undefined8 *)(in_FS_OFFSET + 0x28);
          pFStack_70 = pFVar4;
          uStack_60 = uVar15;
          uStack_58 = __n;
          uStack_50 = uVar7;
          if (iVar3 == 0) {
            uVar7 = dcgettext(0,"Usage: %s [OPTION]... [FILE]...\n",5);
            __printf_chk(2,uVar7,uVar13);
            pFVar4 = _stdout;
            pcVar9 = (char *)dcgettext(0,
                                       "Write each FILE to standard output, with line numbers added.\n"
                                       ,5);
            fputs_unlocked(pcVar9,pFVar4);
            pFVar4 = _stdout;
            pcVar9 = (char *)dcgettext(0,"\nWith no FILE, or when FILE is -, read standard input.\n"
                                       ,5);
            fputs_unlocked(pcVar9,pFVar4);
            pFVar4 = _stdout;
            pcVar9 = (char *)dcgettext(0,
                                       "\nMandatory arguments to long options are mandatory for short options too.\n"
                                       ,5);
            fputs_unlocked(pcVar9,pFVar4);
            pFVar4 = _stdout;
            pcVar9 = (char *)dcgettext(0,
                                       "  -b, --body-numbering=STYLE      use STYLE for numbering body lines\n  -d, --section-delimiter=CC      use CC for logical page delimiters\n  -f, --footer-numbering=STYLE    use STYLE for numbering footer lines\n"
                                       ,5);
            fputs_unlocked(pcVar9,pFVar4);
            pFVar4 = _stdout;
            pcVar9 = (char *)dcgettext(0,
                                       "  -h, --header-numbering=STYLE    use STYLE for numbering header lines\n  -i, --line-increment=NUMBER     line number increment at each line\n  -l, --join-blank-lines=NUMBER   group of NUMBER empty lines counted as one\n  -n, --number-format=FORMAT      insert line numbers according to FORMAT\n  -p, --no-renumber               do not reset line numbers for each section\n  -s, --number-separator=STRING   add STRING after (possible) line number\n"
                                       ,5);
            fputs_unlocked(pcVar9,pFVar4);
            pFVar4 = _stdout;
            pcVar9 = (char *)dcgettext(0,
                                       "  -v, --starting-line-number=NUMBER  first line number for each section\n  -w, --number-width=NUMBER       use NUMBER columns for line numbers\n"
                                       ,5);
            fputs_unlocked(pcVar9,pFVar4);
            pFVar4 = _stdout;
            pcVar9 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
            fputs_unlocked(pcVar9,pFVar4);
            pFVar4 = _stdout;
            pcVar9 = (char *)dcgettext(0,"      --version     output version information and exit\n"
                                       ,5);
            fputs_unlocked(pcVar9,pFVar4);
            pFVar4 = _stdout;
            pcVar9 = (char *)dcgettext(0,
                                       "\nDefault options are: -bt -d\'\\:\' -fn -hn -i1 -l1 -n\'rn\' -s<TAB> -v1 -w6\n\nCC are two delimiter characters used to construct logical page delimiters;\na missing second character implies \':\'.  As a GNU extension one can specify\nmore than two characters, and also specifying the empty string (-d \'\')\ndisables section matching.\n"
                                       ,5);
            fputs_unlocked(pcVar9,pFVar4);
            pFVar4 = _stdout;
            pcVar9 = (char *)dcgettext(0,
                                       "\nSTYLE is one of:\n\n  a      number all lines\n  t      number only nonempty lines\n  n      number no lines\n  pBRE   number only lines that contain a match for the basic regular\n         expression, BRE\n"
                                       ,5);
            fputs_unlocked(pcVar9,pFVar4);
            pFVar4 = _stdout;
            pcVar9 = (char *)dcgettext(0,
                                       "\nFORMAT is one of:\n\n  ln     left justified, no leading zeros\n  rn     right justified, no leading zeros\n  rz     right justified, leading zeros\n\n"
                                       ,5);
            fputs_unlocked(pcVar9,pFVar4);
            pcVar9 = "[";
            puStack_f0 = &_LC4;
            pcStack_e8 = "test invocation";
            apcStack_e0[0] = "coreutils";
            apcStack_e0[1] = "Multi-call invocation";
            apcStack_e0[2] = "sha224sum";
            apcStack_e0[3] = "sha2 utilities";
            pcStack_c0 = "sha256sum";
            pcStack_b8 = "sha2 utilities";
            pcStack_b0 = "sha384sum";
            pcStack_a8 = "sha2 utilities";
            pcStack_a0 = "sha512sum";
            pcStack_98 = "sha2 utilities";
            auStack_90 = (undefined1  [16])0x0;
            goto LAB_00100880;
          }
          uVar7 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
          __fprintf_chk(_stderr,2,uVar7,uVar13);
          goto LAB_00100609;
        }
        if (iVar2 != -1) goto LAB_001003a2;
LAB_001001ec:
        uStack_50 = 0x1001ff;
        fputs_unlocked(print_no_line_fmt,_stdout);
        __n_00 = line_buf._8_8_;
      }
      else if (cVar1 < 'q') {
        if (cVar1 == 'a') {
          if (blank_join < 2) {
LAB_001003a2:
            if (line_no_overflow != '\0') goto LAB_001005a8;
            uStack_50 = 0x1003d6;
            __printf_chk(2,lineno_format,lineno_width,line_no,separator_str);
            bVar16 = SCARRY8(page_incr,line_no);
            line_no = page_incr + line_no;
            __n_00 = line_buf._8_8_;
            if (bVar16) {
              line_no_overflow = '\x01';
            }
          }
          else {
            if (((long)__n_00 < 2) &&
               (blank_lines_0 = blank_lines_0 + 1, blank_join != blank_lines_0)) goto LAB_001001ec;
            if (line_no_overflow != '\0') goto LAB_001005a8;
            uStack_50 = 0x1004a6;
            __printf_chk(2,lineno_format,lineno_width,line_no,separator_str);
            bVar16 = SCARRY8(page_incr,line_no);
            line_no = page_incr + line_no;
            if (bVar16) {
              line_no_overflow = '\x01';
            }
            blank_lines_0 = 0;
            __n_00 = line_buf._8_8_;
          }
        }
        else if (cVar1 == 'n') goto LAB_001001ec;
      }
      else if (cVar1 == 't') {
        if (1 < (long)__n_00) goto LAB_001003a2;
        goto LAB_001001ec;
      }
      uStack_50 = 0x100221;
      fwrite_unlocked((void *)line_buf._16_8_,1,__n_00,_stdout);
      puVar12 = line_buf;
      uStack_50 = 0x10022c;
      lVar5 = readlinebuffer(line_buf,pFVar4);
      if (lVar5 == 0) break;
    } while( true );
  }
  uStack_50 = 0x10023a;
  puVar6 = (uint *)__errno_location();
  uVar11 = pFVar4->_flags & 0x20;
  if (uVar11 != 0) {
    uVar11 = *puVar6;
  }
  if ((*local_40 == '-') && (local_40[1] == '\0')) {
    uStack_50 = 0x100265;
    clearerr_unlocked(pFVar4);
  }
  else {
    uStack_50 = 0x100505;
    iVar3 = rpl_fclose();
    if (iVar3 != 0) {
      if (uVar11 != 0) goto LAB_0010051a;
      uVar11 = *puVar6;
    }
  }
  if (uVar11 == 0) {
    return 1;
  }
LAB_0010051a:
  uStack_50 = 0x10052b;
  uVar7 = quotearg_n_style_colon(0,3,local_40);
  uStack_50 = 0x100540;
  error(0,uVar11,&_LC0,uVar7);
  return 0;
LAB_00100350:
  current_regex = footer_regex;
  current_type = footer_type;
joined_r0x001002c5:
  if (reset_numbers != '\0') {
    line_no_overflow = '\0';
    line_no = starting_line_number;
  }
  pcVar9 = _stdout->_IO_write_ptr;
  if (pcVar9 < _stdout->_IO_write_end) {
    _stdout->_IO_write_ptr = pcVar9 + 1;
    *pcVar9 = '\n';
  }
  else {
    uStack_50 = 0x10038a;
    __overflow(_stdout,10);
  }
  goto LAB_00100140;
  while( true ) {
    pcVar9 = *(char **)((long)ppuVar10 + 0x10);
    ppuVar10 = (undefined1 **)((long)ppuVar10 + 0x10);
    if (pcVar9 == (char *)0x0) break;
LAB_00100880:
    if (((*pcVar9 == 'n') && (pcVar9[1] == 'l')) && (pcVar9[2] == '\0')) break;
  }
  puVar12 = *(undefined1 **)((long)ppuVar10 + 8);
  if (puVar12 == (undefined1 *)0x0) {
    uVar7 = dcgettext(0,"\n%s online help: <%s>\n",5);
    puVar12 = &_LC5;
    __printf_chk(2,uVar7,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar9 = setlocale(5,(char *)0x0);
    if (pcVar9 == (char *)0x0) {
      uVar7 = dcgettext(0,"Full documentation <%s%s>\n",5);
      pcVar9 = " invocation";
      __printf_chk(2,uVar7,"https://www.gnu.org/software/coreutils/",&_LC5);
      goto LAB_00100952;
    }
LAB_001008fc:
    iVar2 = strncmp(pcVar9,"en_",3);
    pFVar4 = _stdout;
    if (iVar2 != 0) {
      pcVar9 = (char *)dcgettext(0,
                                 "Report any translation bugs to <https://translationproject.org/team/>\n"
                                 ,5);
      fputs_unlocked(pcVar9,pFVar4);
    }
  }
  else {
    uVar7 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar7,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar9 = setlocale(5,(char *)0x0);
    if (pcVar9 != (char *)0x0) goto LAB_001008fc;
  }
  uVar7 = dcgettext(0,"Full documentation <%s%s>\n",5);
  pcVar9 = "";
  __printf_chk(2,uVar7,"https://www.gnu.org/software/coreutils/",&_LC5);
  if (puVar12 == &_LC5) {
    pcVar9 = " invocation";
  }
LAB_00100952:
  uVar7 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar7,puVar12,pcVar9);
LAB_00100609:
                    /* WARNING: Subroutine does not return */
  exit(iVar3);
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
    goto LAB_00100609;
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
    if (pcVar4 != (char *)0x0) goto LAB_001008fc;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC5);
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
LAB_001008fc:
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
LAB_00100609:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong main(int param_1,undefined8 *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *__src;
  byte bVar4;
  byte bVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  size_t sVar10;
  int *piVar11;
  long lVar12;
  char *extraout_RDX;
  char *pcVar13;
  long lVar14;
  char *pcVar15;
  undefined1 *puVar16;
  
  bVar5 = 1;
  puVar16 = longopts;
  pcVar15 = "h:b:f:v:i:pl:s:w:n:d:";
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  pcVar13 = &DAT_00102090;
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  have_read_stdin = '\0';
  do {
    while (iVar6 = getopt_long(param_1,param_2,pcVar15,puVar16,0), iVar6 == -1) {
      if (bVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        usage(1);
      }
      sVar10 = strlen(section_del);
      header_del_len = sVar10 * 3;
      lVar12 = header_del_len + 1;
      header_del = xmalloc(lVar12);
      __src = section_del;
      lVar14 = header_del + sVar10;
      pcVar15 = (char *)__stpcpy_chk(header_del,section_del,lVar12);
      pcVar15 = stpcpy(pcVar15,__src);
      strcpy(pcVar15,__src);
      body_del_len = sVar10 * 2;
      footer_del = lVar14 + sVar10;
      footer_del_len = sVar10;
      body_del = lVar14;
      initbuffer(line_buf);
      pcVar15 = (char *)strlen(separator_str);
      puVar16 = pcVar15 + (long)lineno_width + 1;
      print_no_line_fmt = xmalloc(puVar16);
      pcVar13 = pcVar15 + lineno_width;
      lVar12 = __memset_chk(print_no_line_fmt,0x20,pcVar13,puVar16);
      pcVar13[lVar12] = '\0';
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
      if ((have_read_stdin == '\0') || (iVar6 = rpl_fclose(_stdin), iVar6 != -1)) {
        return (ulong)(bVar5 ^ 1);
      }
      piVar11 = __errno_location();
      error(1,*piVar11,&_LC50);
      cVar1 = *extraout_RDX;
      pcVar2 = extraout_RDX;
      pcVar3 = section_del;
      while (cVar1 != '\0') {
        _optarg = pcVar2 + 1;
        *pcVar3 = *pcVar2;
        pcVar2 = _optarg;
        pcVar3 = pcVar3 + 1;
        cVar1 = *_optarg;
      }
    }
    if (iVar6 < 0x78) {
      if (iVar6 < 0x62) {
        if (iVar6 == -0x83) {
          uVar8 = proper_name_lite("David MacKenzie","David MacKenzie");
          uVar9 = proper_name_lite("Scott Bartram","Scott Bartram");
          version_etc(_stdout,&_LC5,"GNU coreutils",_Version,uVar9,uVar8,0);
                    /* WARNING: Subroutine does not return */
          exit(0);
        }
        if (iVar6 == -0x82) {
                    /* WARNING: Subroutine does not return */
          usage(0);
        }
      }
      else if (iVar6 - 0x62U < 0x16) {
                    /* WARNING: Could not recover jumptable at 0x00101ac9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar7 = (*(code *)(pcVar13 + *(int *)(pcVar13 + (ulong)(iVar6 - 0x62U) * 4)))();
        return uVar7;
      }
    }
    bVar5 = 0;
  } while( true );
}


