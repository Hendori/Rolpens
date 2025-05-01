
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void output(char *start,char *past_end)

{
  size_t sVar1;
  long lVar2;
  ulong uVar3;
  char *pcVar4;
  size_t sVar5;
  ulong uVar6;
  
  uVar3 = (long)past_end - (long)start;
  if (start == (char *)0x0) {
    sVar5 = 0;
    fwrite_unlocked(output::buffer,1,output::bytes_in_buffer,_stdout);
  }
  else {
    pcVar4 = start;
    sVar5 = uVar3;
    uVar6 = 0x2000 - output::bytes_in_buffer;
    if (uVar3 < 0x2000 - output::bytes_in_buffer) {
      pcVar4 = output::buffer + output::bytes_in_buffer;
      sVar5 = output::bytes_in_buffer + uVar3;
      sVar1 = 0x2000;
      if (0x1fff < output::bytes_in_buffer) {
        sVar1 = output::bytes_in_buffer;
      }
      lVar2 = sVar1 - output::bytes_in_buffer;
    }
    else {
      do {
        sVar1 = 0x2000;
        if (0x1fff < output::bytes_in_buffer) {
          sVar1 = output::bytes_in_buffer;
        }
        sVar5 = sVar5 - uVar6;
        start = pcVar4 + uVar6;
        __memcpy_chk(output::buffer + output::bytes_in_buffer,pcVar4,uVar6,
                     sVar1 - output::bytes_in_buffer);
        fwrite_unlocked(output::buffer,1,0x2000,_stdout);
        output::bytes_in_buffer = 0;
        pcVar4 = start;
        uVar6 = 0x2000;
      } while (0x1fff < sVar5);
      lVar2 = 0x2000;
      pcVar4 = output::buffer;
      uVar3 = sVar5;
    }
    __memcpy_chk(pcVar4,start,uVar3,lVar2);
  }
  output::bytes_in_buffer = sVar5;
  return;
}



/* WARNING: Unknown calling convention */

_Bool tac_seekable(int input_fd,char *file,off_t file_pos)

{
  size_t __n;
  char *pcVar1;
  char cVar2;
  bool bVar3;
  size_t sVar4;
  size_t sVar5;
  char *pcVar6;
  size_t sVar7;
  long lVar8;
  size_t sVar9;
  __off_t _Var10;
  undefined8 uVar11;
  undefined8 uVar12;
  int *piVar13;
  int iVar14;
  char *start;
  ulong __n_00;
  char *pcVar15;
  char *pcVar16;
  char *__s1;
  int __range;
  char *__string;
  ulong uVar17;
  char *start_00;
  
  sVar4 = match_length;
  sVar9 = read_size;
  pcVar16 = separator + 1;
  cVar2 = *separator;
  __n = match_length - 1;
  if ((ulong)file_pos % read_size != 0) {
    file_pos = file_pos - (ulong)file_pos % read_size;
    _Var10 = lseek(input_fd,file_pos,0);
    if (_Var10 < 0) {
      uVar11 = quotearg_n_style_colon(0,3,file);
      uVar12 = dcgettext(0,"%s: seek failed",5);
      piVar13 = __errno_location();
      error(0,*piVar13,uVar12,uVar11);
      sVar9 = read_size;
    }
  }
  while (sVar7 = safe_read(input_fd,G_buffer,sVar9), sVar9 = read_size, sVar7 == 0) {
    if (file_pos == 0) {
      sVar9 = 0;
      if (read_size == 0) goto LAB_00100426;
      goto LAB_001001cc;
    }
    _Var10 = lseek(input_fd,-read_size,1);
    if (_Var10 < 0) {
      uVar11 = quotearg_n_style_colon(0,3,file);
      uVar12 = dcgettext(0,"%s: seek failed",5);
      piVar13 = __errno_location();
      error(0,*piVar13,uVar12,uVar11);
      sVar9 = read_size;
    }
    file_pos = file_pos - sVar9;
  }
  sVar5 = sVar7;
  if (sVar7 == read_size) {
LAB_00100426:
    do {
      sVar7 = safe_read(input_fd,G_buffer,sVar9);
      sVar5 = sVar9;
      if (sVar7 == 0) goto LAB_001001c3;
      if ((long)sVar7 < 0) goto LAB_001005a4;
      file_pos = file_pos + sVar7;
      sVar9 = sVar7;
    } while (read_size == sVar7);
  }
  else {
LAB_001001c3:
    sVar7 = sVar5;
    if ((long)sVar7 < 0) goto LAB_001005a4;
  }
LAB_001001cc:
  bVar3 = true;
  start = G_buffer + sVar7;
  start_00 = start;
  if (sentinel_length != 0) {
    start_00 = start + (1 - sVar4);
  }
LAB_001002fa:
  pcVar6 = start_00;
  __string = G_buffer;
  if (sentinel_length != 0) goto LAB_001003db;
  while( true ) {
    iVar14 = (int)start_00 - (int)__string;
    __range = 1 - iVar14;
    if (1 < __range) break;
    pcVar15 = start;
    if ((__range == 1) ||
       (iVar14 = re_search((re_pattern_buffer *)&compiled_separator,__string,iVar14,iVar14 + -1,
                           __range,(re_registers *)&regs), __string = G_buffer, iVar14 == -1)) {
      start_00 = __string + -1;
    }
    else {
      if (iVar14 == -2) goto LAB_001006c8;
      start_00 = G_buffer + *regs.start;
      match_length = (size_t)(*regs.end - *regs.start);
    }
LAB_00100378:
    if (start_00 < __string) {
      if (file_pos == 0) {
        output(__string,pcVar15);
        return true;
      }
      __n_00 = (long)pcVar15 - (long)__string;
      if (read_size < __n_00) {
        uVar17 = sentinel_length + 2 + read_size * 4;
        sVar9 = 1;
        if (sentinel_length != 0) {
          sVar9 = sentinel_length;
        }
        if (uVar17 < G_buffer_size) {
          G_buffer_size = uVar17;
          read_size = read_size * 2;
          xalloc_die();
          goto LAB_001006c8;
        }
        G_buffer_size = uVar17;
        read_size = read_size * 2;
        lVar8 = xrealloc((long)__string - sVar9);
        G_buffer = (char *)(lVar8 + sVar9);
      }
      if ((ulong)file_pos < read_size) {
        uVar17 = 0;
        read_size = file_pos;
      }
      else {
        uVar17 = file_pos - read_size;
      }
      _Var10 = lseek(input_fd,uVar17,0);
      if (_Var10 < 0) {
        uVar11 = quotearg_n_style_colon(0,3,file);
        uVar12 = dcgettext(0,"%s: seek failed",5);
        piVar13 = __errno_location();
        error(0,*piVar13,uVar12,uVar11);
      }
      pcVar6 = G_buffer;
      sVar9 = read_size;
      start_00 = G_buffer + read_size;
      memmove(start_00,G_buffer,__n_00);
      start = pcVar6 + __n_00 + sVar9;
      if (sentinel_length == 0) {
        start_00 = start;
      }
      sVar9 = full_read(input_fd,pcVar6,sVar9);
      file_pos = uVar17;
      if (sVar9 != read_size) {
        uVar11 = quotearg_n_style_colon(0,3,file);
        uVar12 = dcgettext(0,"%s: read error",5);
        piVar13 = __errno_location();
        error(0,*piVar13,uVar12,uVar11);
        return false;
      }
      goto LAB_001002fa;
    }
    if (separator_ends_record == false) {
      output(start_00,pcVar15);
      start = start_00;
      __string = G_buffer;
    }
    else {
      start = start_00 + match_length;
      bVar3 = (bool)(bVar3 ^ 1U | pcVar15 != start);
      if (bVar3) {
        output(start,pcVar15);
        bVar3 = false;
        __string = G_buffer;
      }
    }
    if (sentinel_length != 0) {
      pcVar6 = start_00 + (1 - match_length);
LAB_001003db:
      while( true ) {
        do {
          __s1 = pcVar6;
          start_00 = __s1 + -1;
          pcVar6 = start_00;
        } while (__s1[-1] != cVar2);
        pcVar15 = start;
        if (__n == 0) break;
        do {
          iVar14 = strncmp(__s1,pcVar16,__n);
          if (iVar14 == 0) goto LAB_00100378;
          pcVar1 = start_00 + -1;
          __s1 = start_00;
          pcVar6 = start_00 + -1;
          start_00 = start_00 + -1;
        } while (cVar2 == *pcVar1);
      }
      goto LAB_00100378;
    }
  }
  pcVar16 = "record too large";
LAB_0010058c:
  uVar11 = dcgettext(0,pcVar16,5);
  error(1,0,uVar11);
LAB_001005a4:
  uVar11 = quotearg_n_style_colon(0,3,file);
  uVar12 = dcgettext(0,"%s: read error",5);
  piVar13 = __errno_location();
  error(0,*piVar13,uVar12,uVar11);
  return false;
LAB_001006c8:
  pcVar16 = "error in regular expression search";
  goto LAB_0010058c;
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
    goto LAB_0010073a;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... [FILE]...\n",5);
  __printf_chk(2,uVar3,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"Write each FILE to standard output, last line first.\n",5);
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
                             "  -b, --before             attach the separator before instead of after\n  -r, --regex              interpret the separator as a regular expression\n  -s, --separator=STRING   use STRING as the separator instead of newline\n"
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
    iVar2 = strcmp("tac",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)piVar6 + 0x10);
    piVar6 = (infomap *)((long)piVar6 + 0x10);
  } while (pcVar4 != (char *)0x0);
  puVar7 = *(undefined **)((long)piVar6 + 8);
  if (puVar7 == (undefined *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    puVar7 = &_LC5;
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) goto LAB_0010096d;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC5);
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
LAB_0010096d:
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
LAB_0010073a:
                    /* WARNING: Subroutine does not return */
  exit(status);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int main(int argc,char **argv)

{
  long lVar1;
  bool bVar2;
  size_t sVar3;
  char cVar4;
  _Bool _Var5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  size_t sVar10;
  char *pcVar11;
  ulong uVar12;
  long lVar13;
  byte *__file;
  __off_t file_pos;
  size_t sVar14;
  size_t sVar15;
  int *piVar16;
  ulong uVar17;
  uint uVar18;
  ulong unaff_R14;
  char **ppcVar19;
  long in_FS_OFFSET;
  byte local_61;
  undefined8 local_60;
  FILE *fp;
  char *file_name;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  sentinel_length = 1;
  separator = "\n";
  separator_ends_record = true;
  while (iVar6 = getopt_long(argc,argv,&_LC36,longopts,0), pcVar11 = separator, iVar6 != -1) {
    if (iVar6 == 0x62) {
      separator_ends_record = false;
    }
    else {
      if (iVar6 < 99) {
        if (iVar6 == -0x83) {
          uVar8 = proper_name_lite("David MacKenzie","David MacKenzie");
          uVar9 = proper_name_lite("Jay Lepreau","Jay Lepreau");
          version_etc(_stdout,&_LC5,"GNU coreutils",_Version,uVar9,uVar8,0);
                    /* WARNING: Subroutine does not return */
          exit(0);
        }
        if (iVar6 == -0x82) {
                    /* WARNING: Subroutine does not return */
          usage(0);
        }
        goto LAB_00103730;
      }
      if (iVar6 == 0x72) {
        sentinel_length = 0;
      }
      else {
        if (iVar6 != 0x73) goto LAB_00103730;
        separator = _optarg;
      }
    }
  }
  if (sentinel_length == 0) {
    if (*separator != '\0') {
      compiled_separator.buffer = (re_dfa_t *)0x0;
      compiled_separator.allocated = 0;
      compiled_separator.translate = (uchar *)0x0;
      compiled_separator.fastmap = compiled_separator_fastmap;
      sVar10 = strlen(separator);
      pcVar11 = re_compile_pattern(pcVar11,sVar10,(re_pattern_buffer *)&compiled_separator);
      sVar15 = match_length;
      sVar3 = sentinel_length;
      if (pcVar11 == (char *)0x0) goto LAB_0010331f;
      error(1,0,&_LC38,pcVar11);
    }
    uVar8 = dcgettext(0,"separator cannot be empty",5);
    error(1,0,uVar8);
    goto LAB_00103773;
  }
  sVar15 = 1;
  sVar3 = 1;
  if (*separator != '\0') {
    sVar15 = strlen(separator);
    sVar3 = sVar15;
  }
LAB_0010331f:
  sentinel_length = sVar3;
  match_length = sVar15;
  read_size = 0x2000;
  if (sentinel_length < 0x1000) {
    uVar17 = (sentinel_length + 0x2001) * 2;
  }
  else {
    iVar6 = 0x33;
    bVar2 = false;
    uVar12 = 0x2000;
    do {
      iVar6 = iVar6 + -1;
      if (iVar6 == 0) {
        if (bVar2) {
          read_size = unaff_R14;
        }
        goto LAB_0010372b;
      }
      unaff_R14 = uVar12 * 2;
      bVar2 = true;
      uVar17 = uVar12 & 0x7fffffffffffffff;
      uVar12 = unaff_R14;
    } while (uVar17 <= sentinel_length);
    uVar12 = unaff_R14 + 1 + sentinel_length;
    uVar17 = uVar12 * 2;
    G_buffer_size = uVar17;
    read_size = unaff_R14;
    if ((uVar12 <= unaff_R14) || (uVar17 <= uVar12)) {
LAB_0010372b:
      xalloc_die();
LAB_00103730:
                    /* WARNING: Subroutine does not return */
      usage(1);
    }
  }
  G_buffer_size = uVar17;
  lVar13 = xmalloc(uVar17);
  sVar15 = sentinel_length;
  pcVar11 = (char *)(lVar13 + 1);
  if (sentinel_length != 0) {
    lVar13 = __memcpy_chk(lVar13,separator,(sentinel_length + 1) - (ulong)(*separator == '\0'),
                          uVar17);
    pcVar11 = (char *)(lVar13 + sVar15);
  }
  G_buffer = pcVar11;
  if (_optind < argc) {
    ppcVar19 = argv + _optind;
    __file = (byte *)*ppcVar19;
    if (__file != (byte *)0x0) goto LAB_001033dd;
    local_61 = 1;
  }
  else {
    __file = &_LC31;
    ppcVar19 = main::default_file_list;
LAB_001033dd:
    local_61 = 1;
    do {
      ppcVar19 = ppcVar19 + 1;
      uVar18 = *__file - 0x2d;
      if ((uVar18 == 0) && (uVar18 = (uint)__file[1], __file[1] == 0)) {
        iVar6 = 0;
        have_read_stdin = true;
        __file = (byte *)dcgettext(0,"standard input",5);
LAB_0010342d:
        file_pos = lseek(iVar6,0,2);
        if ((file_pos < 0) || (iVar7 = isatty(iVar6), iVar7 != 0)) {
          lVar13 = 0;
          cVar4 = temp_stream();
          if (cVar4 != '\0') {
            while( true ) {
              sVar10 = safe_read(iVar6,G_buffer,read_size);
              if (sVar10 == 0) break;
              if ((long)sVar10 < 0) {
                local_60 = quotearg_n_style_colon(0,3,__file);
                pcVar11 = "%s: read error";
                goto LAB_00103604;
              }
              sVar14 = fwrite_unlocked(G_buffer,1,sVar10,(FILE *)fp);
              if (sVar10 != sVar14) goto LAB_001036d4;
              lVar13 = lVar13 + sVar10;
            }
            iVar7 = fflush_unlocked((FILE *)fp);
            if (iVar7 == 0) {
              if (-1 < lVar13) {
                iVar7 = fileno((FILE *)fp);
                _Var5 = tac_seekable(iVar7,file_name,lVar13);
                goto LAB_001034f8;
              }
            }
            else {
LAB_001036d4:
              local_60 = quotearg_n_style_colon(0,3,file_name);
              pcVar11 = "%s: write error";
LAB_00103604:
              uVar8 = dcgettext(0,pcVar11,5);
              piVar16 = __errno_location();
              error(0,*piVar16,uVar8,local_60);
            }
          }
          _Var5 = false;
        }
        else {
          _Var5 = tac_seekable(iVar6,(char *)__file,file_pos);
        }
LAB_001034f8:
        if ((uVar18 != 0) && (iVar6 = close(iVar6), iVar6 != 0)) {
          uVar8 = quotearg_n_style_colon(0,3,__file);
          pcVar11 = "%s: read error";
          goto LAB_0010358e;
        }
      }
      else {
        iVar6 = open((char *)__file,0);
        if (-1 < iVar6) goto LAB_0010342d;
        uVar8 = quotearg_style(4,__file);
        pcVar11 = "failed to open %s for reading";
LAB_0010358e:
        uVar9 = dcgettext(0,pcVar11,5);
        piVar16 = __errno_location();
        _Var5 = false;
        error(0,*piVar16,uVar9,uVar8);
      }
      __file = (byte *)*ppcVar19;
      local_61 = local_61 & _Var5;
    } while (__file != (byte *)0x0);
  }
  output((char *)0x0,(char *)0x0);
  if ((have_read_stdin != false) && (iVar6 = close(0), iVar6 < 0)) {
    piVar16 = __errno_location();
    error(0,*piVar16,&_LC31);
    local_61 = 0;
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (int)(local_61 ^ 1);
  }
LAB_00103773:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


