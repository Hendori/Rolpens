
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
  char cVar1;
  bool bVar2;
  size_t __n;
  ulong uVar3;
  __off_t _Var4;
  undefined8 uVar5;
  undefined8 uVar6;
  int *piVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  char *pcVar11;
  char *pcVar12;
  ulong uVar13;
  char *pcVar14;
  int iVar15;
  ulong uVar16;
  char *pcVar17;
  char *__string;
  bool bVar18;
  
  lVar10 = match_length;
  uVar13 = read_size;
  pcVar14 = separator + 1;
  cVar1 = *separator;
  __n = match_length - 1;
  if (param_3 % read_size != 0) {
    param_3 = param_3 - param_3 % read_size;
    _Var4 = lseek(param_1,param_3,0);
    if (_Var4 < 0) {
      uVar5 = quotearg_n_style_colon(0,3,param_2);
      uVar6 = dcgettext(0,"%s: seek failed",5);
      piVar7 = __errno_location();
      error(0,*piVar7,uVar6,uVar5);
      uVar13 = read_size;
    }
  }
  while (uVar3 = safe_read(param_1,G_buffer,uVar13), uVar13 = read_size, uVar3 == 0) {
    if (param_3 == 0) {
      uVar13 = 0;
      if (read_size == 0) goto LAB_00100416;
      goto LAB_001001d4;
    }
    _Var4 = lseek(param_1,-read_size,1);
    if (_Var4 < 0) {
      uVar5 = quotearg_n_style_colon(0,3,param_2);
      uVar6 = dcgettext(0,"%s: seek failed",5);
      piVar7 = __errno_location();
      error(0,*piVar7,uVar6,uVar5);
      uVar13 = read_size;
    }
    param_3 = param_3 - uVar13;
  }
  uVar16 = uVar3;
  if (uVar3 == read_size) {
LAB_00100416:
    do {
      uVar3 = safe_read(param_1,G_buffer,uVar13);
      uVar16 = uVar13;
      if (uVar3 == 0) goto LAB_001001cb;
      if ((long)uVar3 < 0) goto LAB_00100847;
      param_3 = param_3 + uVar3;
      uVar13 = uVar3;
    } while (read_size == uVar3);
  }
  else {
LAB_001001cb:
    uVar3 = uVar16;
    if ((long)uVar3 < 0) {
LAB_00100847:
      uVar5 = quotearg_n_style_colon(0,3,param_2);
      uVar6 = dcgettext(0,"%s: read error",5);
      piVar7 = __errno_location();
      error(0,*piVar7,uVar6,uVar5);
      return 0;
    }
  }
LAB_001001d4:
  bVar2 = true;
  pcVar11 = G_buffer + uVar3;
  pcVar17 = pcVar11;
  if (sentinel_length != 0) {
    pcVar17 = pcVar11 + (1 - lVar10);
  }
  if (__n != 0) {
LAB_00100304:
    __string = G_buffer;
    if (sentinel_length != 0) goto LAB_001003e3;
    do {
      iVar9 = (int)pcVar17 - (int)__string;
      iVar15 = 1 - iVar9;
      if (1 < iVar15) goto LAB_00100956;
      pcVar12 = pcVar11;
      if ((iVar15 == 1) ||
         (iVar9 = re_search((re_pattern_buffer *)compiled_separator,__string,iVar9,iVar9 + -1,iVar15
                            ,(re_registers *)regs), __string = G_buffer, iVar9 == -1)) {
        pcVar17 = __string + -1;
      }
      else {
        if (iVar9 == -2) goto LAB_00100932;
        pcVar17 = G_buffer + *(int *)regs._8_8_;
        match_length = (long)(*(int *)regs._16_8_ - *(int *)regs._8_8_);
      }
      while( true ) {
        if (pcVar17 < __string) {
          if (param_3 == 0) goto LAB_001004be;
          uVar13 = (long)pcVar12 - (long)__string;
          if (read_size < uVar13) {
            uVar16 = read_size * 2;
            uVar3 = sentinel_length + 2 + read_size * 4;
            lVar10 = 1;
            if (sentinel_length != 0) {
              lVar10 = sentinel_length;
            }
            bVar18 = uVar3 < G_buffer_size;
            G_buffer_size = uVar3;
            read_size = uVar16;
            if (bVar18) goto LAB_0010092d;
            lVar8 = xrealloc((long)__string - lVar10);
            __string = (char *)(lVar8 + lVar10);
            G_buffer = __string;
          }
          if (param_3 < read_size) {
            uVar3 = 0;
            read_size = param_3;
          }
          else {
            uVar3 = param_3 - read_size;
          }
          uVar16 = read_size;
          _Var4 = lseek(param_1,uVar3,0);
          if (_Var4 < 0) {
            uVar5 = quotearg_n_style_colon(0,3,param_2);
            uVar6 = dcgettext(0,"%s: seek failed",5);
            piVar7 = __errno_location();
            error(0,*piVar7,uVar6,uVar5);
            uVar16 = read_size;
            __string = G_buffer;
          }
          pcVar11 = __string + uVar13 + uVar16;
          memmove(__string + uVar16,__string,uVar13);
          pcVar17 = __string + uVar16;
          if (sentinel_length == 0) {
            pcVar17 = pcVar11;
          }
          uVar13 = full_read(param_1,__string,uVar16);
          param_3 = uVar3;
          if (uVar13 != read_size) goto LAB_00100800;
          goto LAB_00100304;
        }
        if (separator_ends_record == '\0') {
          output(pcVar17,pcVar12);
          pcVar11 = pcVar17;
          __string = G_buffer;
        }
        else {
          pcVar11 = pcVar17 + match_length;
          bVar2 = (bool)(bVar2 ^ 1U | pcVar11 != pcVar12);
          if (bVar2) {
            output(pcVar11,pcVar12);
            bVar2 = false;
            __string = G_buffer;
          }
        }
        if (sentinel_length == 0) break;
        pcVar17 = pcVar17 + (1 - match_length);
LAB_001003e3:
        do {
          do {
            pcVar12 = pcVar17;
            pcVar17 = pcVar12 + -1;
          } while (pcVar12[-1] != cVar1);
          iVar9 = strncmp(pcVar12,pcVar14,__n);
          pcVar12 = pcVar11;
        } while (iVar9 != 0);
      }
    } while( true );
  }
  bVar2 = true;
  do {
    __string = G_buffer;
    if (sentinel_length != 0) goto LAB_00100648;
    while( true ) {
      iVar9 = (int)pcVar17 - (int)__string;
      iVar15 = 1 - iVar9;
      if (1 < iVar15) goto LAB_00100956;
      if ((iVar15 == 1) ||
         (iVar9 = re_search((re_pattern_buffer *)compiled_separator,__string,iVar9,iVar9 + -1,iVar15
                            ,(re_registers *)regs), __string = G_buffer, iVar9 == -1)) {
        pcVar17 = __string + -1;
      }
      else {
        if (iVar9 == -2) goto LAB_00100932;
        pcVar17 = G_buffer + *(int *)regs._8_8_;
        match_length = (long)(*(int *)regs._16_8_ - *(int *)regs._8_8_);
      }
      pcVar14 = pcVar11;
      if (pcVar17 < __string) break;
      while( true ) {
        if (separator_ends_record == '\0') {
          output(pcVar17,pcVar14);
          pcVar11 = pcVar17;
          __string = G_buffer;
        }
        else {
          pcVar11 = pcVar17 + match_length;
          bVar2 = (bool)(bVar2 ^ 1U | pcVar11 != pcVar14);
          if (bVar2) {
            output(pcVar11,pcVar14);
            bVar2 = false;
            __string = G_buffer;
          }
        }
        if (sentinel_length == 0) break;
        pcVar17 = pcVar17 + (1 - match_length);
LAB_00100648:
        do {
          pcVar17 = pcVar17 + -1;
        } while (cVar1 != *pcVar17);
        pcVar14 = pcVar11;
        if (pcVar17 < __string) goto LAB_00100656;
      }
    }
LAB_00100656:
    pcVar12 = pcVar11;
    if (param_3 == 0) {
LAB_001004be:
      output(__string,pcVar12);
      return 1;
    }
    uVar13 = (long)pcVar11 - (long)__string;
    if (read_size < uVar13) {
      uVar16 = read_size * 2;
      uVar3 = sentinel_length + 2 + read_size * 4;
      lVar10 = 1;
      if (sentinel_length != 0) {
        lVar10 = sentinel_length;
      }
      bVar18 = uVar3 < G_buffer_size;
      G_buffer_size = uVar3;
      read_size = uVar16;
      if (bVar18) {
LAB_0010092d:
        xalloc_die();
LAB_00100932:
        pcVar14 = "error in regular expression search";
        do {
          uVar5 = dcgettext(0,pcVar14,5);
          error(1,0,uVar5);
LAB_00100956:
          pcVar14 = "record too large";
        } while( true );
      }
      lVar8 = xrealloc((long)__string - lVar10);
      __string = (char *)(lVar8 + lVar10);
      G_buffer = __string;
    }
    if (param_3 < read_size) {
      uVar3 = 0;
      read_size = param_3;
    }
    else {
      uVar3 = param_3 - read_size;
    }
    uVar16 = read_size;
    _Var4 = lseek(param_1,uVar3,0);
    if (_Var4 < 0) {
      uVar5 = quotearg_n_style_colon(0,3,param_2);
      uVar6 = dcgettext(0,"%s: seek failed",5);
      piVar7 = __errno_location();
      error(0,*piVar7,uVar6,uVar5);
      uVar16 = read_size;
      __string = G_buffer;
    }
    pcVar11 = __string + uVar13 + uVar16;
    memmove(__string + uVar16,__string,uVar13);
    pcVar17 = __string + uVar16;
    if (sentinel_length == 0) {
      pcVar17 = pcVar11;
    }
    uVar13 = full_read(param_1,__string,uVar16);
    param_3 = uVar3;
    if (uVar13 != read_size) {
LAB_00100800:
      uVar5 = quotearg_n_style_colon(0,3,param_2);
      uVar6 = dcgettext(0,"%s: read error",5);
      piVar7 = __errno_location();
      error(0,*piVar7,uVar6,uVar5);
      return 0;
    }
  } while( true );
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
    goto LAB_001009ca;
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
    if (pcVar4 != (char *)0x0) goto LAB_00100bfd;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC5);
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
LAB_00100bfd:
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
LAB_001009ca:
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
        if (iVar4 != -0x82) goto LAB_001039d0;
        cVar2 = '\0';
        usage();
        goto LAB_001039bf;
      }
      if (iVar4 == 0x72) {
        sentinel_length = 0;
      }
      else {
        if (iVar4 != 0x73) goto LAB_001039d0;
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
LAB_001035bf:
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
        if (iVar4 == 0) goto LAB_001039bf;
        unaff_R14 = uVar13 * 2;
        cVar2 = '\x01';
        uVar16 = uVar13 & 0x7fffffffffffffff;
        uVar13 = unaff_R14;
      } while (uVar16 <= sentinel_length);
      uVar16 = unaff_R14 + 1 + sentinel_length;
      uVar13 = uVar16 * 2;
      G_buffer_size = uVar13;
      read_size = unaff_R14;
      if ((uVar16 <= unaff_R14) || (uVar13 <= uVar16)) goto LAB_001039cb;
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
      if (__file != (byte *)0x0) goto LAB_0010367d;
      local_61 = 1;
    }
    else {
      __file = &_LC31;
      puVar18 = default_file_list_2;
LAB_0010367d:
      local_61 = 1;
      do {
        puVar18 = (undefined1 *)((long)puVar18 + 8);
        uVar17 = *__file - 0x2d;
        if ((uVar17 == 0) && (uVar17 = (uint)__file[1], __file[1] == 0)) {
          iVar4 = 0;
          have_read_stdin = '\x01';
          __file = (byte *)dcgettext(0,"standard input",5);
LAB_001036cd:
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
                  goto LAB_001038a4;
                }
                sVar12 = fwrite_unlocked(G_buffer,1,sVar7,local_50);
                if (sVar7 != sVar12) goto LAB_00103974;
                lVar9 = lVar9 + sVar7;
              }
              iVar5 = fflush_unlocked(local_50);
              if (iVar5 == 0) {
                if (-1 < lVar9) {
                  iVar5 = fileno(local_50);
                  bVar3 = tac_seekable(iVar5,local_48,lVar9);
                  goto LAB_00103798;
                }
              }
              else {
LAB_00103974:
                local_60 = quotearg_n_style_colon(0,3,local_48);
                pcVar8 = "%s: write error";
LAB_001038a4:
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
LAB_00103798:
          if ((uVar17 != 0) && (iVar4 = close(iVar4), iVar4 != 0)) {
            uVar15 = quotearg_n_style_colon(0,3,__file);
            pcVar8 = "%s: read error";
            goto LAB_0010382e;
          }
        }
        else {
          iVar4 = open((char *)__file,0);
          if (-1 < iVar4) goto LAB_001036cd;
          uVar15 = quotearg_style(4,__file);
          pcVar8 = "failed to open %s for reading";
LAB_0010382e:
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
    goto LAB_00103a13;
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
    if (pcVar8 == (char *)0x0) goto LAB_001035bf;
    goto LAB_001039da;
  }
LAB_001039ef:
  uVar15 = dcgettext(0,"separator cannot be empty",5);
  error(1,0,uVar15);
LAB_00103a13:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_001039bf:
  if (cVar2 != '\0') {
    read_size = unaff_R14;
  }
LAB_001039cb:
  xalloc_die();
LAB_001039d0:
  usage(1);
LAB_001039da:
  error(1,0,&_LC38);
  goto LAB_001039ef;
}


