
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 fold_file(char *param_1,ulong param_2)

{
  size_t sVar1;
  char cVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  ushort **ppuVar7;
  char *pcVar8;
  uint *puVar9;
  undefined8 uVar10;
  int *piVar11;
  ulong uVar12;
  char cVar13;
  char *pcVar14;
  size_t __n;
  size_t __n_00;
  _IO_FILE *local_50;
  
  if ((*param_1 == '-') && (param_1[1] == '\0')) {
    have_read_stdin = 1;
    local_50 = _stdin;
  }
  else {
    local_50 = (_IO_FILE *)rpl_fopen(param_1,&_LC0);
  }
  if (local_50 == (_IO_FILE *)0x0) {
    uVar10 = quotearg_n_style_colon(0,3,param_1);
    piVar11 = __errno_location();
    error(0,*piVar11,&_LC1,uVar10);
    return 0;
  }
  __n_00 = 0;
  uVar12 = 0;
  fadvise(local_50,2);
LAB_00100060:
  pbVar3 = (byte *)local_50->_IO_read_ptr;
  if (pbVar3 < local_50->_IO_read_end) {
    local_50->_IO_read_ptr = (char *)(pbVar3 + 1);
    uVar4 = (uint)*pbVar3;
  }
  else {
    uVar4 = __uflow(local_50);
    if (uVar4 == 0xffffffff) goto code_r0x001002f8;
  }
  if ((long)(allocated_out_1 - __n_00) < 2) {
    line_out_0 = (char *)xpalloc(line_out_0,&allocated_out_1,1,0xffffffffffffffff,1);
  }
  pcVar14 = line_out_0;
  if (uVar4 != 10) {
    cVar13 = (char)uVar4;
    if (count_bytes != '\0') goto LAB_0010010d;
LAB_001000ae:
    if (cVar13 != '\b') goto joined_r0x001000bc;
    if (uVar12 != 0) {
      uVar12 = uVar12 - 1;
joined_r0x00100116:
      do {
        if (uVar12 <= param_2) break;
        sVar1 = __n_00;
        if (break_spaces == '\0') {
LAB_001000ed:
          if (__n_00 == 0) {
            *pcVar14 = cVar13;
            __n_00 = 1;
            goto LAB_00100060;
          }
          pcVar14[__n_00] = '\n';
          sVar1 = __n_00 + 1;
          __n_00 = 0;
          fwrite_unlocked(pcVar14,1,sVar1,_stdout);
          pcVar14 = line_out_0;
          if (count_bytes == '\0') {
LAB_00100161:
            uVar12 = 0;
            if (cVar13 == '\b') break;
joined_r0x001000bc:
            if (cVar13 == '\r') {
              pcVar14[__n_00] = '\r';
              uVar12 = 0;
              __n_00 = __n_00 + 1;
              goto LAB_00100060;
            }
            uVar6 = uVar12 & 0xfffffffffffffff8;
            uVar12 = uVar12 + 1;
            if (cVar13 == '\t') {
              uVar12 = uVar6 + 8;
            }
            goto joined_r0x00100116;
          }
          __n_00 = 0;
          uVar12 = 0;
        }
        else {
          do {
            __n = sVar1;
            if (__n == 0) goto LAB_001000ed;
            ppuVar7 = __ctype_b_loc();
            sVar1 = __n - 1;
          } while (((*ppuVar7)[(byte)pcVar14[__n - 1]] & 1) == 0);
          fwrite_unlocked(pcVar14,1,__n,_stdout);
          pcVar14 = _stdout->_IO_write_ptr;
          if (pcVar14 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = pcVar14 + 1;
            *pcVar14 = '\n';
          }
          else {
            __overflow(_stdout,10);
          }
          pcVar14 = line_out_0;
          __n_00 = __n_00 - __n;
          memmove(line_out_0,line_out_0 + __n,__n_00);
          if ((long)__n_00 < 1) {
            if (count_bytes == '\0') goto LAB_00100161;
            uVar12 = 0;
          }
          else {
            uVar12 = __n_00;
            if (count_bytes == '\0') goto code_r0x00100248;
          }
        }
LAB_0010010d:
        uVar12 = uVar12 + 1;
      } while( true );
    }
    pcVar14[__n_00] = cVar13;
    __n_00 = __n_00 + 1;
    goto LAB_00100060;
  }
  line_out_0[__n_00] = '\n';
  sVar1 = __n_00 + 1;
  __n_00 = 0;
  uVar12 = 0;
  fwrite_unlocked(pcVar14,1,sVar1,_stdout);
  goto LAB_00100060;
code_r0x00100248:
  uVar12 = 0;
  pcVar8 = pcVar14;
  do {
    cVar2 = *pcVar8;
    if (cVar2 == '\b') {
      uVar12 = (uVar12 - 1) + (ulong)(uVar12 == 0);
    }
    else if (cVar2 == '\r') {
      uVar12 = 0;
    }
    else {
      uVar6 = uVar12 + 1;
      uVar12 = (uVar12 & 0xfffffffffffffff8) + 8;
      if (cVar2 != '\t') {
        uVar12 = uVar6;
      }
    }
    pcVar8 = pcVar8 + 1;
  } while (pcVar14 + __n_00 != pcVar8);
  goto LAB_001000ae;
code_r0x001002f8:
  puVar9 = (uint *)__errno_location();
  uVar4 = local_50->_flags & 0x20;
  if (uVar4 != 0) {
    uVar4 = *puVar9;
  }
  if (__n_00 != 0) {
    fwrite_unlocked(line_out_0,1,__n_00,_stdout);
  }
  if ((*param_1 == '-') && (param_1[1] == '\0')) {
    clearerr_unlocked(local_50);
  }
  else {
    iVar5 = rpl_fclose();
    if (iVar5 != 0) {
      if (uVar4 != 0) goto LAB_001003bf;
      uVar4 = *puVar9;
    }
  }
  if (uVar4 == 0) {
    return 1;
  }
LAB_001003bf:
  uVar10 = quotearg_n_style_colon(0,3,param_1);
  error(0,uVar4,&_LC1,uVar10);
  return 0;
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
    goto LAB_0010048a;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... [FILE]...\n",5);
  __printf_chk(2,uVar3,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"Wrap input lines in each FILE, writing to standard output.\n",5);
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
                             "  -b, --bytes         count bytes rather than columns\n  -s, --spaces        break at spaces\n  -w, --width=WIDTH   use WIDTH columns instead of 80\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pcVar4 = "[";
  local_a8 = &_LC2;
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
    iVar2 = strcmp("fold",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)ppuVar6 + 0x10);
    ppuVar6 = (undefined **)((long)ppuVar6 + 0x10);
  } while (pcVar4 != (char *)0x0);
  puVar7 = *(undefined **)((long)ppuVar6 + 8);
  if (puVar7 == (undefined *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    puVar7 = &_LC3;
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) goto LAB_001006bd;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC3);
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
LAB_001006bd:
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
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC3);
    if (puVar7 == &_LC3) {
      pcVar4 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,puVar7,pcVar4);
LAB_0010048a:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte main(int param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int *piVar5;
  long lVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long in_FS_OFFSET;
  undefined1 local_42;
  undefined1 local_41;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  uVar8 = 0x50;
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  have_read_stdin = '\0';
  count_bytes = 0;
  break_spaces = 0;
LAB_00100c8a:
  do {
    iVar4 = getopt_long(param_1,param_2,shortopts,longopts,0);
    if (iVar4 == -1) break;
    if (iVar4 != 0x62) {
      if (iVar4 < 99) {
        if (iVar4 != -0x82) {
          if (iVar4 < -0x81) {
            if (iVar4 == -0x83) {
              uVar8 = proper_name_lite("David MacKenzie","David MacKenzie");
              version_etc(_stdout,&_LC3,"GNU coreutils",_Version,uVar8,0);
                    /* WARNING: Subroutine does not return */
              exit(0);
            }
          }
          else if (iVar4 - 0x30U < 10) {
            if (_optarg == (undefined1 *)0x0) {
              local_42 = (undefined1)iVar4;
              _optarg = &local_42;
              local_41 = 0;
            }
            else {
              _optarg = _optarg + -1;
            }
            goto LAB_00100d2a;
          }
          goto LAB_00100e8a;
        }
      }
      else {
        if (iVar4 == 0x73) {
          break_spaces = 1;
          goto LAB_00100c8a;
        }
        if (iVar4 == 0x77) {
LAB_00100d2a:
          uVar8 = dcgettext(0,"invalid number of columns",5);
          uVar8 = xnumtoumax(_optarg,10,1,0xfffffffffffffff6,&_LC5,uVar8,0,0xc);
          goto LAB_00100c8a;
        }
LAB_00100e8a:
        usage(1);
      }
      usage(0);
      goto LAB_00100e9b;
    }
    count_bytes = 1;
  } while( true );
  if (_optind == param_1) goto LAB_00100e70;
  if (_optind < param_1) {
    lVar6 = (long)_optind;
    uVar7 = param_1 - _optind;
    puVar9 = param_2 + lVar6;
    bVar3 = 1;
    do {
      uVar1 = *puVar9;
      puVar9 = puVar9 + 1;
      bVar2 = fold_file(uVar1,uVar8);
      bVar3 = bVar3 & bVar2;
    } while (puVar9 != param_2 + (ulong)uVar7 + lVar6);
  }
  else {
    bVar3 = 1;
  }
  while (have_read_stdin != '\0') {
    iVar4 = rpl_fclose(_stdin);
    if (iVar4 != -1) break;
    piVar5 = __errno_location();
    error(1,*piVar5,&_LC32);
LAB_00100e70:
    bVar3 = fold_file(&_LC32,uVar8);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3 ^ 1;
  }
LAB_00100e9b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


