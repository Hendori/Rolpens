
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void output(long param_1,long param_2)

{
  size_t sVar1;
  long lVar2;
  ulong uVar3;
  undefined1 *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar3 = param_2 - param_1;
  if (param_1 == 0) {
    uVar5 = 0;
    fwrite_unlocked(buffer_0,1,bytes_in_buffer_1,_stdout);
  }
  else {
    lVar2 = param_1;
    uVar5 = uVar3;
    uVar6 = 0x2000 - bytes_in_buffer_1;
    if (uVar3 < 0x2000 - bytes_in_buffer_1) {
      puVar4 = buffer_0 + bytes_in_buffer_1;
      uVar5 = bytes_in_buffer_1 + uVar3;
      sVar1 = 0x2000;
      if (0x1fff < bytes_in_buffer_1) {
        sVar1 = bytes_in_buffer_1;
      }
      lVar2 = sVar1 - bytes_in_buffer_1;
    }
    else {
      do {
        uVar3 = 0x2000;
        if (0x1fff < bytes_in_buffer_1) {
          uVar3 = bytes_in_buffer_1;
        }
        uVar5 = uVar5 - uVar6;
        param_1 = lVar2 + uVar6;
        __memcpy_chk(buffer_0 + bytes_in_buffer_1,lVar2,uVar6,uVar3 - bytes_in_buffer_1);
        fwrite_unlocked(buffer_0,1,0x2000,_stdout);
        bytes_in_buffer_1 = 0;
        lVar2 = param_1;
        uVar6 = 0x2000;
      } while (0x1fff < uVar5);
      lVar2 = 0x2000;
      puVar4 = buffer_0;
      uVar3 = uVar5;
    }
    __memcpy_chk(puVar4,param_1,uVar3,lVar2);
  }
  bytes_in_buffer_1 = uVar5;
  return;
}



undefined8 tac_seekable(int param_1,undefined8 param_2,ulong param_3)

{
  size_t __n;
  char *pcVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  char *pcVar5;
  ulong uVar6;
  long lVar7;
  __off_t _Var8;
  undefined8 uVar9;
  undefined8 uVar10;
  int *piVar11;
  int iVar12;
  long lVar13;
  char *pcVar14;
  ulong uVar15;
  char *pcVar16;
  char *pcVar17;
  char *__s1;
  int __range;
  char *__string;
  char *__dest;
  
  lVar13 = match_length;
  uVar15 = read_size;
  pcVar17 = separator + 1;
  cVar2 = *separator;
  __n = match_length - 1;
  if (param_3 % read_size != 0) {
    param_3 = param_3 - param_3 % read_size;
    _Var8 = lseek(param_1,param_3,0);
    if (_Var8 < 0) {
      uVar9 = quotearg_n_style_colon(0,3,param_2);
      uVar10 = dcgettext(0,"%s: seek failed",5);
      piVar11 = __errno_location();
      error(0,*piVar11,uVar10,uVar9);
      uVar15 = read_size;
    }
  }
  while (uVar6 = safe_read(param_1,G_buffer,uVar15), uVar15 = read_size, uVar6 == 0) {
    if (param_3 == 0) {
      uVar15 = 0;
      if (read_size == 0) goto LAB_00100426;
      goto LAB_001001cc;
    }
    _Var8 = lseek(param_1,-read_size,1);
    if (_Var8 < 0) {
      uVar9 = quotearg_n_style_colon(0,3,param_2);
      uVar10 = dcgettext(0,"%s: seek failed",5);
      piVar11 = __errno_location();
      error(0,*piVar11,uVar10,uVar9);
      uVar15 = read_size;
    }
    param_3 = param_3 - uVar15;
  }
  uVar4 = uVar6;
  if (uVar6 == read_size) {
LAB_00100426:
    do {
      uVar6 = safe_read(param_1,G_buffer,uVar15);
      uVar4 = uVar15;
      if (uVar6 == 0) goto LAB_001001c3;
      if ((long)uVar6 < 0) goto LAB_001005a4;
      param_3 = param_3 + uVar6;
      uVar15 = uVar6;
    } while (read_size == uVar6);
  }
  else {
LAB_001001c3:
    uVar6 = uVar4;
    if ((long)uVar6 < 0) goto LAB_001005a4;
  }
LAB_001001cc:
  bVar3 = true;
  pcVar14 = G_buffer + uVar6;
  __dest = pcVar14;
  if (sentinel_length != 0) {
    __dest = pcVar14 + (1 - lVar13);
  }
LAB_001002fa:
  pcVar5 = __dest;
  __string = G_buffer;
  if (sentinel_length != 0) goto LAB_001003db;
  while( true ) {
    iVar12 = (int)__dest - (int)__string;
    __range = 1 - iVar12;
    if (1 < __range) break;
    pcVar16 = pcVar14;
    if ((__range == 1) ||
       (iVar12 = re_search((re_pattern_buffer *)compiled_separator,__string,iVar12,iVar12 + -1,
                           __range,(re_registers *)regs), __string = G_buffer, iVar12 == -1)) {
      __dest = __string + -1;
    }
    else {
      if (iVar12 == -2) goto LAB_001006c8;
      __dest = G_buffer + *(int *)regs._8_8_;
      match_length = (long)(*(int *)regs._16_8_ - *(int *)regs._8_8_);
    }
LAB_00100378:
    if (__dest < __string) {
      if (param_3 == 0) {
        output(__string,pcVar16);
        return 1;
      }
      uVar15 = (long)pcVar16 - (long)__string;
      if (read_size < uVar15) {
        uVar6 = sentinel_length + 2 + read_size * 4;
        lVar13 = 1;
        if (sentinel_length != 0) {
          lVar13 = sentinel_length;
        }
        if (uVar6 < G_buffer_size) {
          G_buffer_size = uVar6;
          read_size = read_size * 2;
          xalloc_die();
          goto LAB_001006c8;
        }
        G_buffer_size = uVar6;
        read_size = read_size * 2;
        lVar7 = xrealloc((long)__string - lVar13);
        G_buffer = (char *)(lVar7 + lVar13);
      }
      if (param_3 < read_size) {
        uVar6 = 0;
        read_size = param_3;
      }
      else {
        uVar6 = param_3 - read_size;
      }
      _Var8 = lseek(param_1,uVar6,0);
      if (_Var8 < 0) {
        uVar9 = quotearg_n_style_colon(0,3,param_2);
        uVar10 = dcgettext(0,"%s: seek failed",5);
        piVar11 = __errno_location();
        error(0,*piVar11,uVar10,uVar9);
      }
      pcVar5 = G_buffer;
      uVar4 = read_size;
      __dest = G_buffer + read_size;
      memmove(__dest,G_buffer,uVar15);
      pcVar14 = pcVar5 + uVar15 + uVar4;
      if (sentinel_length == 0) {
        __dest = pcVar14;
      }
      uVar15 = full_read(param_1,pcVar5,uVar4);
      param_3 = uVar6;
      if (uVar15 != read_size) {
        uVar9 = quotearg_n_style_colon(0,3,param_2);
        uVar10 = dcgettext(0,"%s: read error",5);
        piVar11 = __errno_location();
        error(0,*piVar11,uVar10,uVar9);
        return 0;
      }
      goto LAB_001002fa;
    }
    if (separator_ends_record == '\0') {
      output(__dest,pcVar16);
      pcVar14 = __dest;
      __string = G_buffer;
    }
    else {
      pcVar14 = __dest + match_length;
      bVar3 = (bool)(bVar3 ^ 1U | pcVar16 != pcVar14);
      if (bVar3) {
        output(pcVar14,pcVar16);
        bVar3 = false;
        __string = G_buffer;
      }
    }
    if (sentinel_length != 0) {
      pcVar5 = __dest + (1 - match_length);
LAB_001003db:
      while( true ) {
        do {
          __s1 = pcVar5;
          __dest = __s1 + -1;
          pcVar5 = __dest;
        } while (__s1[-1] != cVar2);
        pcVar16 = pcVar14;
        if (__n == 0) break;
        do {
          iVar12 = strncmp(__s1,pcVar17,__n);
          if (iVar12 == 0) goto LAB_00100378;
          pcVar1 = __dest + -1;
          __s1 = __dest;
          pcVar5 = __dest + -1;
          __dest = __dest + -1;
        } while (cVar2 == *pcVar1);
      }
      goto LAB_00100378;
    }
  }
  pcVar17 = "record too large";
LAB_0010058c:
  uVar9 = dcgettext(0,pcVar17,5);
  error(1,0,uVar9);
LAB_001005a4:
  uVar9 = quotearg_n_style_colon(0,3,param_2);
  uVar10 = dcgettext(0,"%s: read error",5);
  piVar11 = __errno_location();
  error(0,*piVar11,uVar10,uVar9);
  return 0;
LAB_001006c8:
  pcVar17 = "error in regular expression search";
  goto LAB_0010058c;
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
    iVar2 = strcmp("tac",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)ppuVar6 + 0x10);
    ppuVar6 = (undefined **)((long)ppuVar6 + 0x10);
  } while (pcVar4 != (char *)0x0);
  puVar7 = *(undefined **)((long)ppuVar6 + 8);
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
  exit(param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte main(int param_1,undefined8 *param_2)

{
  long lVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  size_t sVar7;
  char *pcVar8;
  long lVar9;
  void *pvVar10;
  byte *__file;
  __off_t _Var11;
  size_t sVar12;
  ulong uVar13;
  int *piVar14;
  undefined8 uVar15;
  ulong uVar16;
  uint uVar17;
  ulong unaff_R14;
  undefined1 *puVar18;
  long in_FS_OFFSET;
  byte local_61;
  undefined8 local_60;
  FILE *local_50;
  undefined8 local_48;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  sentinel_length = 1;
  separator = "\n";
  separator_ends_record = 1;
  while (iVar4 = getopt_long(param_1,param_2,&_LC36,longopts,0), pcVar8 = separator, iVar4 != -1) {
    if (iVar4 == 0x62) {
      separator_ends_record = 0;
    }
    else {
      if (iVar4 < 99) {
        if (iVar4 == -0x83) {
          uVar15 = proper_name_lite("David MacKenzie","David MacKenzie");
          uVar6 = proper_name_lite("Jay Lepreau","Jay Lepreau");
          version_etc(_stdout,&_LC5,"GNU coreutils",_Version,uVar6,uVar15,0);
                    /* WARNING: Subroutine does not return */
          exit(0);
        }
        if (iVar4 != -0x82) goto LAB_00103730;
        cVar2 = '\0';
        usage();
        goto LAB_0010371f;
      }
      if (iVar4 == 0x72) {
        sentinel_length = 0;
      }
      else {
        if (iVar4 != 0x73) goto LAB_00103730;
        separator = _optarg;
      }
    }
  }
  if (sentinel_length != 0) {
    uVar13 = 1;
    uVar16 = 1;
    if (*separator != '\0') {
      uVar13 = strlen(separator);
      uVar16 = uVar13;
    }
LAB_0010331f:
    sentinel_length = uVar16;
    match_length = uVar13;
    read_size = 0x2000;
    if (sentinel_length < 0x1000) {
      uVar13 = (sentinel_length + 0x2001) * 2;
    }
    else {
      iVar4 = 0x33;
      cVar2 = '\0';
      uVar13 = 0x2000;
      do {
        iVar4 = iVar4 + -1;
        if (iVar4 == 0) goto LAB_0010371f;
        unaff_R14 = uVar13 * 2;
        cVar2 = '\x01';
        uVar16 = uVar13 & 0x7fffffffffffffff;
        uVar13 = unaff_R14;
      } while (uVar16 <= sentinel_length);
      uVar16 = unaff_R14 + 1 + sentinel_length;
      uVar13 = uVar16 * 2;
      G_buffer_size = uVar13;
      read_size = unaff_R14;
      if ((uVar16 <= unaff_R14) || (uVar13 <= uVar16)) goto LAB_0010372b;
    }
    G_buffer_size = uVar13;
    lVar9 = xmalloc(uVar13);
    uVar16 = sentinel_length;
    pvVar10 = (void *)(lVar9 + 1);
    if (sentinel_length != 0) {
      lVar9 = __memcpy_chk(lVar9,separator,(sentinel_length + 1) - (ulong)(*separator == '\0'),
                           uVar13);
      pvVar10 = (void *)(lVar9 + uVar16);
    }
    G_buffer = pvVar10;
    if (_optind < param_1) {
      puVar18 = (undefined1 *)(param_2 + _optind);
      __file = *(byte **)puVar18;
      if (__file != (byte *)0x0) goto LAB_001033dd;
      local_61 = 1;
    }
    else {
      __file = &_LC31;
      puVar18 = default_file_list_2;
LAB_001033dd:
      local_61 = 1;
      do {
        puVar18 = (undefined1 *)((long)puVar18 + 8);
        uVar17 = *__file - 0x2d;
        if ((uVar17 == 0) && (uVar17 = (uint)__file[1], __file[1] == 0)) {
          iVar4 = 0;
          have_read_stdin = '\x01';
          __file = (byte *)dcgettext(0,"standard input",5);
LAB_0010342d:
          _Var11 = lseek(iVar4,0,2);
          if ((_Var11 < 0) || (iVar5 = isatty(iVar4), iVar5 != 0)) {
            lVar9 = 0;
            cVar2 = temp_stream();
            if (cVar2 != '\0') {
              while( true ) {
                sVar7 = safe_read(iVar4,G_buffer,read_size);
                if (sVar7 == 0) break;
                if ((long)sVar7 < 0) {
                  local_60 = quotearg_n_style_colon(0,3,__file);
                  pcVar8 = "%s: read error";
                  goto LAB_00103604;
                }
                sVar12 = fwrite_unlocked(G_buffer,1,sVar7,local_50);
                if (sVar7 != sVar12) goto LAB_001036d4;
                lVar9 = lVar9 + sVar7;
              }
              iVar5 = fflush_unlocked(local_50);
              if (iVar5 == 0) {
                if (-1 < lVar9) {
                  iVar5 = fileno(local_50);
                  bVar3 = tac_seekable(iVar5,local_48,lVar9);
                  goto LAB_001034f8;
                }
              }
              else {
LAB_001036d4:
                local_60 = quotearg_n_style_colon(0,3,local_48);
                pcVar8 = "%s: write error";
LAB_00103604:
                uVar15 = dcgettext(0,pcVar8,5);
                piVar14 = __errno_location();
                error(0,*piVar14,uVar15,local_60);
              }
            }
            bVar3 = 0;
          }
          else {
            bVar3 = tac_seekable(iVar4,__file,_Var11);
          }
LAB_001034f8:
          if ((uVar17 != 0) && (iVar4 = close(iVar4), iVar4 != 0)) {
            uVar15 = quotearg_n_style_colon(0,3,__file);
            pcVar8 = "%s: read error";
            goto LAB_0010358e;
          }
        }
        else {
          iVar4 = open((char *)__file,0);
          if (-1 < iVar4) goto LAB_0010342d;
          uVar15 = quotearg_style(4,__file);
          pcVar8 = "failed to open %s for reading";
LAB_0010358e:
          uVar6 = dcgettext(0,pcVar8,5);
          piVar14 = __errno_location();
          bVar3 = 0;
          error(0,*piVar14,uVar6,uVar15);
        }
        __file = *(byte **)puVar18;
        local_61 = local_61 & bVar3;
      } while (__file != (byte *)0x0);
    }
    output(0,0);
    if ((have_read_stdin != '\0') && (iVar4 = close(0), iVar4 < 0)) {
      piVar14 = __errno_location();
      error(0,*piVar14,&_LC31);
      local_61 = 0;
    }
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      return local_61 ^ 1;
    }
    goto LAB_00103773;
  }
  if (*separator != '\0') {
    compiled_separator._0_8_ = 0;
    compiled_separator._8_8_ = 0;
    compiled_separator._40_8_ = 0;
    compiled_separator._32_8_ = compiled_separator_fastmap;
    sVar7 = strlen(separator);
    pcVar8 = re_compile_pattern(pcVar8,sVar7,(re_pattern_buffer *)compiled_separator);
    uVar13 = match_length;
    uVar16 = sentinel_length;
    if (pcVar8 == (char *)0x0) goto LAB_0010331f;
    goto LAB_0010373a;
  }
LAB_0010374f:
  uVar15 = dcgettext(0,"separator cannot be empty",5);
  error(1,0,uVar15);
LAB_00103773:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0010371f:
  if (cVar2 != '\0') {
    read_size = unaff_R14;
  }
LAB_0010372b:
  xalloc_die();
LAB_00103730:
  usage(1);
LAB_0010373a:
  error(1,0,&_LC38);
  goto LAB_0010374f;
}


