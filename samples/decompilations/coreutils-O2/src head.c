
void string_to_integer(char param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (param_1 == '\0') {
    uVar1 = dcgettext(0,"invalid number of bytes",5);
  }
  else {
    uVar1 = dcgettext(0,"invalid number of lines",5);
  }
  xnumtoumax(param_2,10,0,0xffffffffffffffff,"bkKmMGTPEZYRQ0",uVar1,0,2);
  return;
}



void diagnose_copy_fd_failure(int param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int *piVar3;
  char *pcVar4;
  
  if (param_1 == 1) {
    uVar1 = quotearg_style(4);
    pcVar4 = "error reading %s";
  }
  else {
    if (param_1 != 2) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("0","src/head.c",0xa2,"diagnose_copy_fd_failure");
    }
    uVar1 = quotearg_n_style_colon(0,3,param_2);
    pcVar4 = "%s: file has shrunk too much";
  }
  uVar2 = dcgettext(0,pcVar4,5);
  piVar3 = __errno_location();
  error(0,*piVar3,uVar2,uVar1);
  return;
}



void elseek_part_0(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int *piVar3;
  char *pcVar4;
  
  uVar1 = quotearg_n_style_colon(0,3);
  pcVar4 = "%s: cannot seek to relative offset %jd";
  if (param_2 == 0) {
    pcVar4 = "%s: cannot seek to offset %jd";
  }
  uVar2 = dcgettext(0,pcVar4,5);
  piVar3 = __errno_location();
  error(0,*piVar3,uVar2,uVar1,param_1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

size_t xwrite_stdout_part_0(void *param_1,size_t param_2)

{
  size_t sVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  undefined1 auStack_2040 [8200];
  long lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  sVar1 = fwrite_unlocked(param_1,1,param_2,_stdout);
  if (param_2 <= sVar1) {
    return sVar1;
  }
  clearerr_unlocked(_stdout);
  fpurge(_stdout);
  uVar2 = quotearg_style(4,"standard output");
  uVar3 = dcgettext(0,"error writing %s",5);
  puVar4 = (uint *)__errno_location();
  uVar8 = 1;
  uVar7 = (ulong)*puVar4;
  error(1,uVar7,uVar3,uVar2);
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_30 = uVar3;
  uStack_28 = uVar2;
  do {
    uVar6 = 0x2000;
    if (uVar7 < 0x2001) {
      uVar6 = uVar7;
    }
    lVar5 = safe_read(uVar8 & 0xffffffff,auStack_2040,uVar6);
    if (lVar5 < 0) {
      sVar1 = 1;
      goto LAB_0010026d;
    }
    uVar7 = uVar7 - lVar5;
    if ((lVar5 == 0) && (uVar7 != 0)) {
      sVar1 = 2;
      goto LAB_0010026d;
    }
    xwrite_stdout_part_0(auStack_2040,lVar5);
  } while (uVar7 != 0);
  sVar1 = 0;
LAB_0010026d:
  if (lStack_38 == *(long *)(in_FS_OFFSET + 0x28)) {
    return sVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 copy_fd(undefined4 param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  undefined1 auStack_2028 [8200];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    uVar3 = 0x2000;
    if (param_2 < 0x2001) {
      uVar3 = param_2;
    }
    lVar1 = safe_read(param_1,auStack_2028,uVar3);
    if (lVar1 < 0) {
      uVar2 = 1;
      goto LAB_0010026d;
    }
    param_2 = param_2 - lVar1;
    if ((lVar1 == 0) && (param_2 != 0)) {
      uVar2 = 2;
      goto LAB_0010026d;
    }
    xwrite_stdout_part_0(auStack_2028,lVar1);
  } while (param_2 != 0);
  uVar2 = 0;
LAB_0010026d:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 head_bytes(undefined8 param_1,undefined4 param_2,ulong param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  undefined1 auStack_2048 [8200];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 != 0) {
    uVar5 = 0x2000;
    do {
      if (param_3 < uVar5) {
        uVar5 = param_3;
      }
      lVar1 = safe_read(param_2,auStack_2048,uVar5);
      if (lVar1 < 0) {
        uVar2 = quotearg_style(4,param_1);
        uVar3 = dcgettext(0,"error reading %s",5);
        piVar4 = __errno_location();
        error(0,*piVar4,uVar3,uVar2);
        uVar2 = 0;
        goto LAB_0010033c;
      }
      if (lVar1 == 0) break;
      xwrite_stdout_part_0(auStack_2048,lVar1);
      param_3 = param_3 - lVar1;
    } while (param_3 != 0);
  }
  uVar2 = 1;
LAB_0010033c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 head_lines(undefined8 param_1,int param_2,long param_3)

{
  int iVar1;
  long lVar2;
  __off_t _Var3;
  undefined8 uVar4;
  undefined8 uVar5;
  int *piVar6;
  long lVar7;
  long in_FS_OFFSET;
  stat sStack_20d8;
  char local_2048 [8200];
  long local_40;
  long lVar8;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 != 0) {
    do {
      lVar2 = safe_read(param_2,local_2048,0x2000);
      if (lVar2 < 0) {
        uVar4 = quotearg_style(4,param_1);
        uVar5 = dcgettext(0,"error reading %s",5);
        piVar6 = __errno_location();
        error(0,*piVar6,uVar5,uVar4);
        uVar4 = 0;
        goto LAB_00100480;
      }
      if (lVar2 == 0) break;
      lVar8 = 0;
      do {
        lVar7 = lVar8 + 1;
        if ((local_2048[lVar8] == line_end) && (param_3 = param_3 + -1, param_3 == 0)) {
          lVar2 = lVar7 - lVar2;
          _Var3 = lseek(param_2,lVar2,1);
          if ((_Var3 < 0) &&
             (((iVar1 = fstat(param_2,&sStack_20d8), iVar1 != 0 ||
               ((sStack_20d8.st_mode & 0xf000) == 0x8000)) &&
              (_Var3 = lseek(param_2,lVar2,1), _Var3 < 0)))) {
            elseek_part_0(lVar2,1,param_1);
          }
          xwrite_stdout_part_0(local_2048,lVar7);
          goto LAB_0010047b;
        }
        lVar8 = lVar7;
      } while (lVar7 < lVar2);
      xwrite_stdout_part_0(local_2048,lVar7);
    } while (param_3 != 0);
  }
LAB_0010047b:
  uVar4 = 1;
LAB_00100480:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



ulong elide_tail_lines_seekable
                (undefined8 param_1,int param_2,long param_3,long param_4,long param_5)

{
  __off_t _Var1;
  size_t __n;
  void *pvVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int *piVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long in_FS_OFFSET;
  undefined8 local_2050;
  undefined1 local_2048 [8200];
  long local_40;
  
  lVar8 = 0x2000;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_5 - param_4 & 0x1fffU) != 0) {
    lVar8 = (param_5 - param_4) % 0x2000;
  }
  param_5 = param_5 - lVar8;
  local_2050 = param_1;
  _Var1 = lseek(param_2,param_5,0);
  if (_Var1 < 0) {
LAB_001007e8:
    elseek_part_0(param_5,0,local_2050);
    uVar3 = 0;
  }
  else {
    __n = safe_read(param_2,local_2048,lVar8);
    if (-1 < (long)__n) {
      iVar7 = (int)line_end;
      lVar8 = param_3;
      if (((param_3 != 0) && (__n != 0)) && (local_2048[__n - 1] != line_end)) {
        lVar8 = param_3 + -1;
      }
      do {
        lVar9 = lVar8;
        if (__n != 0) {
          if (param_3 == 0) {
            do {
              __n = __n - 1;
              lVar9 = lVar8 + -1;
              if (lVar8 == 0) goto LAB_00100669;
              lVar8 = lVar9;
            } while (__n != 0);
          }
          else {
            do {
              pvVar2 = memrchr(local_2048,iVar7,__n);
              lVar9 = lVar8;
              if (pvVar2 == (void *)0x0) break;
              __n = (long)pvVar2 - (long)local_2048;
              lVar9 = lVar8 + -1;
              if (lVar8 == 0) goto LAB_00100669;
              lVar8 = lVar9;
            } while (__n != 0);
          }
        }
        if (param_5 == param_4) goto LAB_001007ac;
        param_5 = param_5 + -0x2000;
        _Var1 = lseek(param_2,param_5,0);
        if (_Var1 < 0) goto LAB_001007e8;
        __n = safe_read(param_2,local_2048,0x2000);
        if ((long)__n < 0) break;
        if (__n == 0) goto LAB_001007ac;
        iVar7 = (int)line_end;
        lVar8 = lVar9;
      } while( true );
    }
    uVar4 = quotearg_style(4,local_2050);
    uVar5 = dcgettext(0,"error reading %s",5);
    piVar6 = __errno_location();
    error(0,*piVar6,uVar5,uVar4);
    uVar3 = 0;
  }
LAB_001006e5:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
LAB_00100669:
  if (param_4 < param_5) {
    _Var1 = lseek(param_2,param_4,0);
    if (_Var1 < 0) {
      elseek_part_0(param_4,0,local_2050);
      uVar3 = 0;
      goto LAB_001006e5;
    }
    iVar7 = copy_fd(param_2,param_5 - param_4);
    if (iVar7 != 0) {
      diagnose_copy_fd_failure(iVar7,local_2050);
      uVar3 = 0;
      goto LAB_001006e5;
    }
  }
  if (__n != 0xffffffffffffffff) {
    xwrite_stdout_part_0(local_2048);
  }
  lVar8 = param_5 + 1 + __n;
  uVar3 = lseek(param_2,lVar8,0);
  if ((long)uVar3 < 0) {
    elseek_part_0(lVar8,0,local_2050);
  }
  uVar3 = ~uVar3 >> 0x3f;
  goto LAB_001006e5;
LAB_001007ac:
  uVar3 = 1;
  goto LAB_001006e5;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void usage(int param_1)

{
  FILE *pFVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
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
  
  uVar4 = _program_name;
  ppuVar6 = &local_a8;
  local_30 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(_stderr,2,uVar3,uVar4);
    goto LAB_001008aa;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... [FILE]...\n",5);
  __printf_chk(2,uVar3,uVar4);
  uVar4 = dcgettext(0,
                    "Print the first %d lines of each FILE to standard output.\nWith more than one FILE, precede each with a header giving the file name.\n"
                    ,5);
  __printf_chk(2,uVar4,10);
  pFVar1 = _stdout;
  pcVar5 = (char *)dcgettext(0,"\nWith no FILE, or when FILE is -, read standard input.\n",5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = _stdout;
  pcVar5 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  uVar4 = dcgettext(0,
                    "  -c, --bytes=[-]NUM       print the first NUM bytes of each file;\n                             with the leading \'-\', print all but the last\n                             NUM bytes of each file\n  -n, --lines=[-]NUM       print the first NUM lines instead of the first %d;\n                             with the leading \'-\', print all but the last\n                             NUM lines of each file\n"
                    ,5);
  __printf_chk(2,uVar4,10);
  pFVar1 = _stdout;
  pcVar5 = (char *)dcgettext(0,
                             "  -q, --quiet, --silent    never print headers giving file names\n  -v, --verbose            always print headers giving file names\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = _stdout;
  pcVar5 = (char *)dcgettext(0,"  -z, --zero-terminated    line delimiter is NUL, not newline\n",5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = _stdout;
  pcVar5 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = _stdout;
  pcVar5 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = _stdout;
  pcVar5 = (char *)dcgettext(0,
                             "\nNUM may have a multiplier suffix:\nb 512, kB 1000, K 1024, MB 1000*1000, M 1024*1024,\nGB 1000*1000*1000, G 1024*1024*1024, and so on for T, P, E, Z, Y, R, Q.\nBinary prefixes can be used, too: KiB=K, MiB=M, and so on.\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pcVar5 = "[";
  local_a8 = &_LC11;
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
    iVar2 = strcmp("head",pcVar5);
    if (iVar2 == 0) break;
    pcVar5 = *(char **)((long)ppuVar6 + 0x10);
    ppuVar6 = (undefined **)((long)ppuVar6 + 0x10);
  } while (pcVar5 != (char *)0x0);
  puVar7 = *(undefined **)((long)ppuVar6 + 8);
  if (puVar7 == (undefined *)0x0) {
    uVar4 = dcgettext(0,"\n%s online help: <%s>\n",5);
    puVar7 = &_LC12;
    __printf_chk(2,uVar4,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar5 = setlocale(5,(char *)0x0);
    if (pcVar5 != (char *)0x0) goto LAB_00100b4d;
    uVar4 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar5 = " invocation";
    __printf_chk(2,uVar4,"https://www.gnu.org/software/coreutils/",&_LC12);
  }
  else {
    uVar4 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar4,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar5 = setlocale(5,(char *)0x0);
    if (pcVar5 != (char *)0x0) {
LAB_00100b4d:
      iVar2 = strncmp(pcVar5,"en_",3);
      pFVar1 = _stdout;
      if (iVar2 != 0) {
        pcVar5 = (char *)dcgettext(0,
                                   "Report any translation bugs to <https://translationproject.org/team/>\n"
                                   ,5);
        fputs_unlocked(pcVar5,pFVar1);
      }
    }
    uVar4 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar5 = "";
    __printf_chk(2,uVar4,"https://www.gnu.org/software/coreutils/",&_LC12);
    if (puVar7 == &_LC12) {
      pcVar5 = " invocation";
    }
  }
  uVar4 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar4,puVar7,pcVar5);
LAB_001008aa:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte main(int param_1,byte *param_2)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  byte *pbVar5;
  long lVar6;
  code *__ptr;
  __off_t _Var7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  code *pcVar11;
  __blksize_t _Var12;
  int *piVar13;
  undefined8 uVar14;
  void *pvVar15;
  byte *pbVar16;
  byte bVar17;
  char *pcVar18;
  undefined *puVar19;
  char cVar20;
  code *pcVar21;
  char *pcVar22;
  char *pcVar23;
  char *pcVar24;
  char *pcVar25;
  long lVar26;
  uint uVar27;
  code *pcVar28;
  long lVar29;
  ulong uVar30;
  bool bVar31;
  long in_FS_OFFSET;
  int local_14c;
  code *local_148;
  byte *local_140;
  byte *local_138;
  uint local_130;
  bool local_12b;
  char local_12a;
  byte local_129;
  code *local_128;
  code *local_120;
  code *local_118;
  code *local_f0;
  void *local_e8;
  code *local_e0;
  stat local_d8;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*(undefined8 *)param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  have_read_stdin = '\0';
  print_headers = '\0';
  line_end = 10;
  if (((param_1 < 2) || (pcVar24 = *(char **)(param_2 + 8), *pcVar24 != '-')) ||
     (9 < (int)pcVar24[1] - 0x30U)) {
    local_12a = '\x01';
    iVar3 = 0;
    local_148 = (code *)0xa;
    pbVar5 = param_2;
  }
  else {
    pcVar23 = pcVar24 + 1;
    do {
      pcVar22 = pcVar23;
      cVar20 = pcVar22[1];
      pcVar23 = pcVar22 + 1;
      pcVar25 = (char *)(ulong)(uint)(int)cVar20;
    } while ((int)cVar20 - 0x30U < 10);
    if (cVar20 == '\0') {
      local_12a = '\x01';
      iVar3 = 0;
    }
    else {
      pcVar28 = (code *)0x0;
      local_12a = '\x01';
      iVar3 = 0;
      pcVar18 = pcVar23;
      do {
        switch((int)pcVar25 - 0x62U & 0xff) {
        case 0:
        case 9:
        case 0xb:
          local_12a = '\0';
          pcVar28 = (code *)pcVar25;
          break;
        case 1:
          pcVar28 = (code *)0x0;
          local_12a = '\0';
          break;
        default:
          goto switchD_00101748_caseD_2;
        case 10:
          local_12a = '\x01';
          break;
        case 0xf:
          iVar3 = 2;
          break;
        case 0x14:
          iVar3 = 1;
          break;
        case 0x18:
          line_end = 0;
        }
        pbVar5 = (byte *)(pcVar18 + 1);
        pcVar25 = (char *)(ulong)*pbVar5;
        pcVar18 = pcVar18 + 1;
      } while (*pbVar5 != 0);
      *pcVar23 = (char)pcVar28;
      if ((char)pcVar28 != '\0') {
        pcVar22[2] = '\0';
      }
    }
    pbVar5 = param_2 + 8;
    param_1 = param_1 + -1;
    local_148 = (code *)string_to_integer(local_12a,pcVar24 + 1);
    *(undefined8 *)pbVar5 = *(undefined8 *)param_2;
  }
  local_12b = false;
  pcVar25 = "c:n:qvz0123456789";
  do {
    uVar2 = getopt_long(param_1,pbVar5,"c:n:qvz0123456789",long_options,0);
    pbVar16 = (byte *)(ulong)uVar2;
    if (uVar2 == 0xffffffff) {
      if ((iVar3 == 1) || ((iVar3 == 0 && (_optind < param_1 + -1)))) {
        print_headers = '\x01';
      }
      if (_optind < param_1) {
        local_140 = pbVar5 + (long)_optind * 8;
        pbVar16 = *(byte **)local_140;
        if (pbVar16 == (byte *)0x0) {
          local_129 = 1;
LAB_00101a85:
          uVar2 = (uint)pbVar16;
          if ((have_read_stdin == '\0') || (iVar3 = close(0), -1 < iVar3)) {
            if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail();
            }
            return local_129 ^ 1;
          }
          piVar13 = __errno_location();
          error(1,*piVar13,&_LC41);
switchD_001015e8_caseD_64:
          if (9 < uVar2 - 0x30) goto LAB_00102084;
          uVar14 = dcgettext(0,"invalid trailing option -- %c",5);
          do {
            error(0,0,uVar14,uVar2);
LAB_00102084:
            usage();
switchD_00101748_caseD_2:
            uVar14 = dcgettext(0,"invalid trailing option -- %c",5);
            uVar2 = (uint)(char)pcVar25;
          } while( true );
        }
      }
      else {
        pbVar16 = &_LC41;
        local_140 = default_file_list_2;
      }
      local_129 = 1;
      pbVar5 = pbVar16;
      goto LAB_00101820;
    }
    if (0x80 < (int)uVar2) goto LAB_00102084;
    if ((int)uVar2 < 99) {
      if (uVar2 == 0xffffff7d) {
        uVar14 = proper_name_lite("Jim Meyering","Jim Meyering");
        uVar4 = proper_name_lite("David MacKenzie","David MacKenzie");
        version_etc(_stdout,&_LC12,"GNU coreutils",_Version,uVar4,uVar14,0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (uVar2 == 0xffffff7e) {
        usage();
LAB_001022fe:
        uVar2 = 0;
        elseek_part_0(0,1,pbVar5);
LAB_00101a5c:
        if ((local_130 != 0) && (iVar3 = close(local_14c), iVar3 != 0)) {
          pbVar16 = (byte *)quotearg_style(4,pbVar5);
          pcVar24 = "failed to close %s";
          goto LAB_00101b76;
        }
        while( true ) {
          local_129 = local_129 & (byte)uVar2;
          pbVar5 = *(byte **)local_140;
          if (*(byte **)local_140 == (byte *)0x0) goto LAB_00101a85;
LAB_00101820:
          local_140 = local_140 + 8;
          local_130 = *pbVar5 - 0x2d;
          if ((local_130 == 0) && (local_130 = (uint)pbVar5[1], local_130 == 0)) break;
          local_14c = open((char *)pbVar5,0);
          if (-1 < local_14c) goto LAB_00101863;
          pbVar16 = (byte *)quotearg_style(4,pbVar5);
          pcVar24 = "cannot open %s for reading";
LAB_00101b76:
          uVar14 = dcgettext(0,pcVar24,5);
          piVar13 = __errno_location();
          uVar2 = 0;
          error(0,*piVar13,uVar14);
        }
        have_read_stdin = '\x01';
        pbVar5 = (byte *)dcgettext(0,"standard input",5);
        local_14c = 0;
LAB_00101863:
        if (print_headers != '\0') {
          puVar19 = &_LC14;
          if (first_file_1 == '\0') {
            puVar19 = &_LC42;
          }
          pbVar16 = pbVar5;
          __printf_chk(2,"%s==> %s <==\n",puVar19);
          first_file_1 = '\0';
        }
        if (local_12b == false) break;
        if (local_148 == (code *)0xffffffffffffffff) {
LAB_00101c26:
          uVar2 = (uint)local_12b;
          goto LAB_00101a5c;
        }
        iVar3 = fstat(local_14c,&local_d8);
        if (iVar3 != 0) {
          pbVar16 = (byte *)quotearg_style(4,pbVar5);
          pcVar25 = (char *)dcgettext(0,"cannot fstat %s",5);
          piVar13 = __errno_location();
          uVar2 = 0;
          error(0,*piVar13,pcVar25);
          goto LAB_00101a5c;
        }
        if ((presume_input_pipe == '\0') && ((local_d8.st_mode & 0xd000) == 0x8000)) {
          local_120 = (code *)lseek(local_14c,0,1);
          if (-1 < (long)local_120) {
            if (local_12a == '\0') {
              pbVar16 = (byte *)0x1fffffffffffffff;
              _Var12 = local_d8.st_blksize;
              if (0x1fffffffffffffff < local_d8.st_blksize - 1U) {
                _Var12 = 0x200;
              }
              if (local_d8.st_size <= _Var12) goto LAB_001018d4;
              local_120 = (code *)(local_d8.st_size - (long)local_120);
              if ((long)local_120 < 0) {
                local_120 = (code *)0x0;
              }
              if ((local_120 <= local_148) || (iVar3 = copy_fd(), iVar3 == 0)) goto LAB_00101c26;
              uVar2 = 0;
              diagnose_copy_fd_failure();
            }
            else {
              pbVar16 = (byte *)0x1fffffffffffffff;
              _Var12 = local_d8.st_blksize;
              if (0x1fffffffffffffff < local_d8.st_blksize - 1U) {
                _Var12 = 0x200;
              }
              if (local_d8.st_size <= _Var12) {
LAB_00101cd5:
                pcVar28 = (code *)0x0;
                pbVar8 = (byte *)xmalloc(0x2020);
                pbVar8[0x2018] = 0;
                pbVar8[0x2019] = 0;
                pbVar8[0x201a] = 0;
                pbVar8[0x201b] = 0;
                pbVar8[0x201c] = 0;
                pbVar8[0x201d] = 0;
                pbVar8[0x201e] = 0;
                pbVar8[0x201f] = 0;
                *(undefined1 (*) [16])(pbVar8 + 0x2008) = (undefined1  [16])0x0;
                pbVar9 = (byte *)xmalloc(0x2020);
                local_128 = local_120;
                local_138 = pbVar8;
                while (lVar6 = safe_read(local_14c,pbVar9,0x2000), bVar17 = line_end, 0 < lVar6) {
                  if (local_148 == (code *)0x0) {
                    local_128 = local_128 + lVar6;
                    xwrite_stdout_part_0(pbVar9);
                  }
                  else {
                    uVar2 = (uint)(char)line_end;
                    pcVar25 = (char *)(ulong)uVar2;
                    pbVar9[0x2010] = 0;
                    pbVar9[0x2011] = 0;
                    pbVar9[0x2012] = 0;
                    pbVar9[0x2013] = 0;
                    pbVar9[0x2014] = 0;
                    pbVar9[0x2015] = 0;
                    pbVar9[0x2016] = 0;
                    pbVar9[0x2017] = 0;
                    *(long *)(pbVar9 + 0x2008) = lVar6;
                    pbVar9[0x2018] = 0;
                    pbVar9[0x2019] = 0;
                    pbVar9[0x201a] = 0;
                    pbVar9[0x201b] = 0;
                    pbVar9[0x201c] = 0;
                    pbVar9[0x201d] = 0;
                    pbVar9[0x201e] = 0;
                    pbVar9[0x201f] = 0;
                    pbVar9[lVar6] = bVar17;
                    pbVar10 = pbVar9;
                    lVar29 = *(long *)(pbVar9 + 0x2010);
                    while( true ) {
                      pbVar10 = (byte *)rawmemchr(pbVar10,uVar2);
                      if (pbVar9 + lVar6 <= pbVar10) break;
                      *(long *)(pbVar9 + 0x2010) = lVar29 + 1;
                      pbVar10 = pbVar10 + 1;
                      lVar29 = lVar29 + 1;
                    }
                    pcVar28 = pcVar28 + lVar29;
                    if (*(size_t *)(pbVar9 + 0x2008) + *(long *)(local_138 + 0x2008) < 0x2000) {
                      memcpy(local_138 + *(long *)(local_138 + 0x2008),pbVar9,
                             *(size_t *)(pbVar9 + 0x2008));
                      lVar6 = *(long *)(pbVar9 + 0x2010);
                      *(long *)(local_138 + 0x2008) =
                           *(long *)(pbVar9 + 0x2008) + *(long *)(local_138 + 0x2008);
                      *(long *)(local_138 + 0x2010) = lVar6 + *(long *)(local_138 + 0x2010);
                    }
                    else {
                      *(byte **)(local_138 + 0x2018) = pbVar9;
                      local_138 = pbVar9;
                      if (local_148 < pcVar28 + -*(long *)(pbVar8 + 0x2010)) {
                        local_128 = local_128 + *(long *)(pbVar8 + 0x2008);
                        if (*(long *)(pbVar8 + 0x2008) != 0) {
                          xwrite_stdout_part_0(pbVar8);
                        }
                        pcVar28 = pcVar28 + -*(long *)(pbVar8 + 0x2010);
                        pbVar9 = pbVar8;
                        pbVar8 = *(byte **)(pbVar8 + 0x2018);
                      }
                      else {
                        pbVar9 = (byte *)xmalloc(0x2020);
                      }
                    }
                  }
                }
                free(pbVar9);
                if (lVar6 != 0) {
                  pbVar16 = (byte *)quotearg_style(4,pbVar5);
                  uVar14 = dcgettext(0,"error reading %s",5);
                  piVar13 = __errno_location();
                  uVar2 = 0;
                  error(0,*piVar13,uVar14);
                  goto joined_r0x001022a1;
                }
                if ((*(long *)(local_138 + 0x2008) != 0) &&
                   (pbVar16 = (byte *)(ulong)line_end,
                   local_138[*(long *)(local_138 + 0x2008) + -1] != line_end)) {
                  *(long *)(local_138 + 0x2010) = *(long *)(local_138 + 0x2010) + 1;
                  pcVar28 = pcVar28 + 1;
                }
                pcVar11 = pcVar28 + -*(long *)(pbVar8 + 0x2010);
                pbVar9 = pbVar8;
                while (local_148 < pcVar11) {
                  pcVar25 = (char *)(local_128 + *(long *)(pbVar9 + 0x2008));
                  if (*(long *)(pbVar9 + 0x2008) != 0) {
                    xwrite_stdout_part_0(pbVar9);
                  }
                  pcVar28 = pcVar28 + -*(long *)(pbVar9 + 0x2010);
                  pbVar9 = *(byte **)(pbVar9 + 0x2018);
                  local_128 = (code *)pcVar25;
                  pcVar11 = pcVar28 + -*(long *)(pbVar9 + 0x2010);
                }
                if (local_148 < pcVar28) {
                  lVar29 = (long)pcVar28 - (long)local_148;
                  uVar2 = (uint)(char)line_end;
                  pcVar25 = (char *)(ulong)uVar2;
                  lVar6 = *(long *)(pbVar9 + 0x2008);
                  pbVar10 = pbVar9;
                  do {
                    pbVar10 = (byte *)memchr(pbVar10,uVar2,
                                             (size_t)(pbVar9 + (lVar6 - (long)pbVar10)));
                    if (pbVar10 == (byte *)0x0) break;
                    *(long *)(pbVar9 + 0x2010) = *(long *)(pbVar9 + 0x2010) + 1;
                    pbVar10 = pbVar10 + 1;
                    lVar29 = lVar29 + -1;
                  } while (lVar29 != 0);
                  if ((long)pbVar10 - (long)pbVar9 != 0) {
                    xwrite_stdout_part_0(pbVar9);
                  }
                  local_128 = local_128 + ((long)pbVar10 - (long)pbVar9);
                }
                uVar2 = (uint)local_12b;
                do {
                  pbVar9 = *(byte **)(pbVar8 + 0x2018);
                  free(pbVar8);
                  pbVar8 = pbVar9;
joined_r0x001022a1:
                } while (pbVar8 != (byte *)0x0);
                goto LAB_00101c9a;
              }
              pbVar16 = (byte *)0x1;
              if ((long)local_120 < local_d8.st_size) {
                bVar17 = elide_tail_lines_seekable(pbVar5,local_14c,local_148,local_120);
                pbVar16 = (byte *)(ulong)bVar17;
              }
              uVar2 = (uint)pbVar16 & 1;
            }
            goto LAB_00101a5c;
          }
          goto LAB_001022fe;
        }
        local_120 = (code *)0xffffffffffffffff;
        if (local_12a != '\0') goto LAB_00101cd5;
LAB_001018d4:
        local_128 = local_120;
        if (string_to_integer < local_148) {
          pbVar16 = (byte *)(ulong)((uint)local_148 & 0x1fff);
          pcVar11 = (code *)0x0;
          bVar31 = false;
          local_f0 = (code *)0x0;
          __ptr = (code *)0x0;
          pcVar28 = (code *)(((ulong)local_148 >> 0xd) + 1 +
                            (ulong)(((ulong)local_148 & 0x1fff) != 0));
          local_118 = (code *)0x0;
          pcVar21 = (code *)0x0;
          pcVar25 = (char *)(code *)0x1;
          do {
            if (local_f0 == pcVar21) {
              pcVar11 = pcVar28;
              __ptr = (code *)xpalloc(__ptr,&local_f0,1,pcVar28,8);
            }
            if (bVar31 == false) {
              uVar14 = xmalloc(0x2000);
              *(undefined8 *)(__ptr + (long)pcVar21 * 8) = uVar14;
              local_118 = pcVar21 + 1;
              lVar6 = full_read(local_14c,uVar14,0x2000);
              if (lVar6 < 0x2000) goto LAB_00101991;
              if (local_118 == pcVar28) goto LAB_00101939;
            }
            else {
              lVar6 = full_read(local_14c,*(undefined8 *)(__ptr + (long)pcVar21 * 8),0x2000);
              if (lVar6 < 0x2000) goto LAB_00101991;
LAB_00101939:
              local_128 = local_128 + lVar6;
              xwrite_stdout_part_0(*(undefined8 *)(__ptr + (long)pcVar25 * 8),lVar6);
              bVar31 = local_12b;
            }
            pcVar21 = (code *)pcVar25;
            pcVar25 = (char *)((ulong)((code *)pcVar25 + 1) % (ulong)pcVar28);
          } while( true );
        }
        uVar30 = 0;
        pcVar28 = local_148 + 0x2000;
        pvVar15 = (void *)xnmalloc(2,pcVar28);
        uVar2 = (uint)local_12b;
        local_e8 = pvVar15;
        local_e0 = (code *)((long)pvVar15 + (long)pcVar28);
LAB_00102140:
        pvVar1 = (&local_e8)[uVar30];
        lVar6 = full_read(local_14c,pvVar1,pcVar28);
        uVar27 = (uint)uVar30;
        cVar20 = (char)uVar2;
        if ((long)pcVar28 <= lVar6) {
          if (cVar20 != '\0') {
            if ((long)local_148 < lVar6) {
              uVar2 = 0;
LAB_001021f5:
              lVar6 = lVar6 - (long)local_148;
LAB_001021f8:
              local_128 = local_128 + lVar6;
              xwrite_stdout_part_0(pvVar1);
              goto LAB_00102208;
            }
            uVar30 = (ulong)(uVar27 ^ 1);
            uVar2 = 0;
            goto LAB_00102140;
          }
          local_128 = local_128 + (long)local_148;
          if (local_148 == (code *)0x0) goto LAB_001021f8;
          pbVar16 = (byte *)(ulong)(uVar27 ^ 1);
          xwrite_stdout_part_0((long)(&local_e8)[(long)pbVar16] + 0x2000,local_148);
          if ((long)local_148 < lVar6) goto LAB_001021f5;
          uVar30 = (ulong)(byte)(uVar27 ^ 1);
LAB_001021e7:
          uVar2 = 0;
          goto LAB_00102140;
        }
        piVar13 = __errno_location();
        if (*piVar13 == 0) {
          if ((long)local_148 < lVar6) {
            if (cVar20 == '\0') {
              local_128 = local_128 + (long)local_148;
              uVar2 = (uint)local_12b;
              if (local_148 == (code *)0x0) goto LAB_001021f8;
              xwrite_stdout_part_0((long)(&local_e8)[uVar27 ^ 1] + 0x2000,local_148);
              uVar2 = (uint)local_12b;
            }
            goto LAB_001021f5;
          }
          if (cVar20 != '\0') goto LAB_0010219d;
          local_128 = local_128 + lVar6;
          if (lVar6 == 0) {
            uVar2 = (uint)local_12b;
            goto LAB_0010219d;
          }
          xwrite_stdout_part_0((long)(&local_e8)[uVar27 ^ 1] + 0x2000);
          uVar2 = (uint)local_12b;
LAB_00102208:
          uVar30 = (ulong)(uVar27 ^ 1);
          if ((char)uVar2 != '\0') goto LAB_0010219d;
          goto LAB_001021e7;
        }
        pbVar16 = (byte *)quotearg_style(4,pbVar5);
        uVar14 = dcgettext(0,"error reading %s",5);
        uVar2 = 0;
        error(0,*piVar13,uVar14);
LAB_0010219d:
        free(pvVar15);
        pcVar25 = (char *)local_148;
        goto LAB_00101c9a;
      }
      goto switchD_001015e8_caseD_64;
    }
    switch(uVar2) {
    case 99:
      local_12b = *_optarg == '-';
      if (local_12b) {
        _optarg = _optarg + 1;
      }
      local_148 = (code *)string_to_integer(0);
      local_12a = '\0';
      break;
    default:
      goto switchD_001015e8_caseD_64;
    case 0x6e:
      local_12b = *_optarg == '-';
      if (local_12b) {
        _optarg = _optarg + 1;
      }
      local_148 = (code *)string_to_integer(1);
      local_12a = '\x01';
      break;
    case 0x71:
      iVar3 = 2;
      break;
    case 0x76:
      iVar3 = 1;
      break;
    case 0x7a:
      line_end = 0;
      break;
    case 0x80:
      presume_input_pipe = '\x01';
    }
  } while( true );
  if (local_12a == '\0') {
    uVar2 = head_bytes(pbVar5,local_14c,local_148);
  }
  else {
    uVar2 = head_lines();
  }
  goto LAB_00101a5c;
LAB_00101991:
  piVar13 = __errno_location();
  if (*piVar13 == 0) {
    bVar17 = pcVar21 + 1 == pcVar28 | bVar31;
    pbVar8 = (byte *)CONCAT71((int7)((ulong)pcVar11 >> 8),bVar17);
    uVar2 = (uint)pbVar8;
    if (bVar17 == 0) {
      pcVar25 = (char *)((code *)pcVar25 + 1);
      if ((code *)pcVar25 == pcVar28) {
        if (lVar6 - (long)pbVar16 != 0) {
          xwrite_stdout_part_0(*(undefined8 *)(__ptr + ((ulong)pcVar28 % (ulong)pcVar28) * 8));
        }
        local_128 = local_128 + (lVar6 - (long)pbVar16);
      }
      pbVar16 = pbVar8;
      uVar2 = (uint)local_12b;
    }
    else {
      if (lVar6 != 0) {
        local_128 = local_128 + lVar6;
        xwrite_stdout_part_0(*(undefined8 *)(__ptr + (long)pcVar25 * 8));
      }
      pcVar11 = (code *)pcVar25 + 1;
      lVar29 = (long)pcVar25 * 8;
      lVar26 = 0x2000 - (long)pbVar16;
      if (lVar6 < (long)pbVar16) {
        xwrite_stdout_part_0(*(long *)(__ptr + lVar29) + lVar6);
      }
      else {
        pcVar25 = (char *)(lVar6 - (long)pbVar16);
        xwrite_stdout_part_0(*(long *)(__ptr + lVar29) + lVar6);
        if ((code *)pcVar25 != (code *)0x0) {
          xwrite_stdout_part_0(*(undefined8 *)(__ptr + ((ulong)pcVar11 % (ulong)pcVar28) * 8));
        }
      }
      local_128 = local_128 + lVar26;
    }
  }
  else {
    pbVar16 = (byte *)quotearg_style(4,pbVar5);
    uVar14 = dcgettext(0,"error reading %s",5);
    uVar2 = 0;
    error(0,*piVar13,uVar14);
  }
  if (local_118 != (code *)0x0) {
    pcVar25 = (char *)__ptr;
    do {
      pvVar15 = *(void **)pcVar25;
      pcVar25 = (char *)((code *)pcVar25 + 8);
      free(pvVar15);
    } while (__ptr + (long)local_118 * 8 != (code *)pcVar25);
  }
  free(__ptr);
LAB_00101c9a:
  if ((local_120 != (code *)0xffffffffffffffff) &&
     (_Var7 = lseek(local_14c,(__off_t)local_128,0), _Var7 < 0)) {
    uVar2 = 0;
    elseek_part_0(local_128,0,pbVar5);
  }
  goto LAB_00101a5c;
}


