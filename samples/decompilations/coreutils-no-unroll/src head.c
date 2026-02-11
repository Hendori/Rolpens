
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

void xwrite_stdout(void *param_1,size_t param_2)

{
  size_t sVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint *puVar4;
  int *piVar5;
  ulong uVar6;
  char *pcVar7;
  int iVar8;
  
  if (param_2 == 0) {
    return;
  }
  sVar1 = fwrite_unlocked(param_1,1,param_2,_stdout);
  if (param_2 <= sVar1) {
    return;
  }
  clearerr_unlocked(_stdout);
  fpurge(_stdout);
  uVar2 = quotearg_style(4,"standard output");
  uVar3 = dcgettext(0,"error writing %s",5);
  puVar4 = (uint *)__errno_location();
  iVar8 = 1;
  uVar6 = (ulong)*puVar4;
  error(1,uVar6,uVar3,uVar2);
  if (iVar8 == 1) {
    uVar2 = quotearg_style(4);
    pcVar7 = "error reading %s";
  }
  else {
    if (iVar8 != 2) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("0","src/head.c",0xa2,"diagnose_copy_fd_failure");
    }
    uVar2 = quotearg_n_style_colon(0,3,uVar6);
    pcVar7 = "%s: file has shrunk too much";
  }
  uVar3 = dcgettext(0,pcVar7,5);
  piVar5 = __errno_location();
  error(0,*piVar5,uVar3,uVar2);
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
        goto LAB_001002c0;
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
          xwrite_stdout(local_2048,lVar7);
          goto LAB_001002bb;
        }
        lVar8 = lVar7;
      } while (lVar7 < lVar2);
      xwrite_stdout(local_2048,lVar7);
    } while (param_3 != 0);
  }
LAB_001002bb:
  uVar4 = 1;
LAB_001002c0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



ulong elide_tail_lines_seekable
                (undefined8 param_1,int param_2,long param_3,long param_4,long param_5)

{
  undefined1 *puVar1;
  __off_t _Var2;
  size_t sVar3;
  void *pvVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int *piVar8;
  size_t sVar9;
  ulong uVar10;
  undefined1 *puVar11;
  int iVar12;
  long lVar13;
  long in_FS_OFFSET;
  bool bVar14;
  undefined1 local_4030 [16384];
  
  puVar1 = &stack0xffffffffffffffd0;
  do {
    puVar11 = puVar1;
    *(undefined8 *)(puVar11 + -0x1000) = *(undefined8 *)(puVar11 + -0x1000);
    puVar1 = puVar11 + -0x1000;
  } while (puVar11 + -0x1000 != local_4030);
  lVar13 = 0x2000;
  *(undefined8 *)(puVar11 + -0x1020) = param_1;
  *(long *)(puVar11 + -0x1028) = param_4;
  *(undefined8 *)(puVar11 + 0x2ff0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if ((param_5 - param_4 & 0x1fffU) != 0) {
    lVar13 = (param_5 - param_4) % 0x2000;
  }
  param_5 = param_5 - lVar13;
  *(undefined8 *)(puVar11 + -0x1030) = 0x100421;
  _Var2 = lseek(param_2,param_5,0);
  if (_Var2 < 0) {
LAB_001006a0:
    *(undefined8 *)(puVar11 + -0x1030) = 0x1006af;
    elseek_part_0(param_5,0,*(undefined8 *)(puVar11 + -0x1020));
    uVar5 = 0;
    goto LAB_0010062a;
  }
  puVar1 = puVar11 + -0x1018;
  *(undefined8 *)(puVar11 + -0x1030) = 0x10043d;
  sVar3 = safe_read(param_2,puVar1,lVar13);
  if ((long)sVar3 < 0) {
LAB_001006b6:
    *(undefined8 *)(puVar11 + -0x1030) = 0x1006c5;
    uVar6 = quotearg_style(4,*(undefined8 *)(puVar11 + -0x1020));
    *(undefined8 *)(puVar11 + -0x1030) = 0x1006db;
    uVar7 = dcgettext(0,"error reading %s",5);
    *(undefined8 *)(puVar11 + -0x1030) = 0x1006e3;
    piVar8 = __errno_location();
    iVar12 = *piVar8;
    *(undefined8 *)(puVar11 + -0x1030) = 0x1006f4;
    error(0,iVar12,uVar7,uVar6);
    uVar5 = 0;
    goto LAB_0010062a;
  }
  iVar12 = (int)line_end;
  sVar9 = sVar3;
  if (param_3 == 0) {
LAB_0010054f:
    while( true ) {
      sVar3 = sVar9;
      while (sVar3 != 0) {
        sVar3 = sVar3 - 1;
        if (sVar3 + ((param_3 + 1) - sVar9) == 0) goto LAB_00100578;
      }
      if (param_5 == *(long *)(puVar11 + -0x1028)) break;
      param_5 = param_5 + -0x2000;
      *(undefined8 *)(puVar11 + -0x1030) = 0x100521;
      _Var2 = lseek(param_2,param_5,0);
      if (_Var2 < 0) goto LAB_001006a0;
      *(undefined8 *)(puVar11 + -0x1030) = 0x10053a;
      sVar3 = safe_read(param_2,puVar1,0x2000);
      if ((long)sVar3 < 0) goto LAB_001006b6;
      if (sVar3 == 0) break;
      param_3 = param_3 - sVar9;
      sVar9 = sVar3;
    }
LAB_00100667:
    uVar5 = 1;
  }
  else {
    if (sVar3 == 0) {
      if (param_3 == 0) goto LAB_0010054f;
    }
    else if (line_end != puVar11[sVar3 - 0x1019]) {
      param_3 = param_3 + -1;
    }
    do {
      while (sVar3 == 0) {
LAB_001004a9:
        if (*(long *)(puVar11 + -0x1028) == param_5) goto LAB_00100667;
        param_5 = param_5 + -0x2000;
        *(undefined8 *)(puVar11 + -0x1030) = 0x1004c7;
        _Var2 = lseek(param_2,param_5,0);
        if (_Var2 < 0) goto LAB_001006a0;
        *(undefined8 *)(puVar11 + -0x1030) = 0x1004e0;
        sVar3 = safe_read(param_2,puVar1,0x2000);
        if ((long)sVar3 < 0) goto LAB_001006b6;
        if (sVar3 == 0) goto LAB_00100667;
        iVar12 = (int)line_end;
      }
      *(undefined8 *)(puVar11 + -0x1030) = 0x100486;
      pvVar4 = memrchr(puVar1,iVar12,sVar3);
      if (pvVar4 == (void *)0x0) goto LAB_001004a9;
      sVar3 = (long)pvVar4 - (long)puVar1;
      bVar14 = param_3 != 0;
      param_3 = param_3 + -1;
    } while (bVar14);
LAB_00100578:
    if (*(__off_t *)(puVar11 + -0x1028) < param_5) {
      *(undefined8 *)(puVar11 + -0x1030) = 0x10058e;
      _Var2 = lseek(param_2,*(__off_t *)(puVar11 + -0x1028),0);
      if (_Var2 < 0) {
        *(undefined8 *)(puVar11 + -0x1030) = 0x10067e;
        elseek_part_0(*(undefined8 *)(puVar11 + -0x1028),0,*(undefined8 *)(puVar11 + -0x1020));
        uVar5 = 0;
        goto LAB_0010062a;
      }
      uVar5 = param_5 - *(long *)(puVar11 + -0x1028);
      do {
        uVar10 = 0x2000;
        if (uVar5 < 0x2001) {
          uVar10 = uVar5;
        }
        *(undefined8 *)(puVar11 + -0x1030) = 0x1005e5;
        lVar13 = safe_read(param_2,puVar11 + 0xfe8,uVar10);
        if (lVar13 < 0) {
          uVar6 = 1;
LAB_001005f2:
          *(undefined8 *)(puVar11 + -0x1030) = 0x1005fc;
          diagnose_copy_fd_failure(uVar6,*(undefined8 *)(puVar11 + -0x1020));
          uVar5 = 0;
          goto LAB_0010062a;
        }
        uVar5 = uVar5 - lVar13;
        if ((lVar13 == 0) && (uVar5 != 0)) {
          uVar6 = 2;
          goto LAB_001005f2;
        }
        *(undefined8 *)(puVar11 + -0x1030) = 0x1005c9;
        xwrite_stdout(puVar11 + 0xfe8,lVar13);
      } while (uVar5 != 0);
    }
    lVar13 = param_5 + 1 + sVar3;
    *(undefined8 *)(puVar11 + -0x1030) = 0x100611;
    xwrite_stdout(puVar1,sVar3 + 1);
    *(undefined8 *)(puVar11 + -0x1030) = 0x10061e;
    uVar5 = lseek(param_2,lVar13,0);
    if ((long)uVar5 < 0) {
      *(ulong *)(puVar11 + -0x1028) = uVar5;
      *(undefined8 *)(puVar11 + -0x1030) = 0x100695;
      elseek_part_0(lVar13,0,*(undefined8 *)(puVar11 + -0x1020));
      uVar5 = *(ulong *)(puVar11 + -0x1028);
    }
    uVar5 = ~uVar5 >> 0x3f;
  }
LAB_0010062a:
  if (*(long *)(puVar11 + 0x2ff0) != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(puVar11 + -0x1030) = 0x1006a0;
    __stack_chk_fail();
  }
  return uVar5;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 head_bytes(undefined8 param_1,undefined4 param_2,ulong param_3)

{
  size_t sVar1;
  ulong __n;
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
      __n = safe_read(param_2,auStack_2048,uVar5);
      if ((long)__n < 0) {
        uVar2 = quotearg_style(4,param_1);
        uVar3 = dcgettext(0,"error reading %s",5);
        piVar4 = __errno_location();
        error(0,*piVar4,uVar3,uVar2);
        uVar2 = 0;
        goto LAB_001007a1;
      }
      if (__n == 0) break;
      sVar1 = fwrite_unlocked(auStack_2048,1,__n,_stdout);
      if (sVar1 < __n) {
        clearerr_unlocked(_stdout);
        fpurge(_stdout);
        uVar2 = quotearg_style(4,"standard output");
        uVar3 = dcgettext(0,"error writing %s",5);
        piVar4 = __errno_location();
        error(1,*piVar4,uVar3,uVar2);
        goto LAB_00100865;
      }
      param_3 = param_3 - __n;
    } while (param_3 != 0);
  }
  uVar2 = 1;
LAB_001007a1:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
LAB_00100865:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 copy_fd(undefined4 param_1,ulong param_2)

{
  ulong uVar1;
  size_t sVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int *piVar5;
  long in_FS_OFFSET;
  undefined1 auStack_2038 [8200];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    uVar1 = 0x2000;
    if (param_2 < 0x2001) {
      uVar1 = param_2;
    }
    uVar1 = safe_read(param_1,auStack_2038,uVar1);
    if ((long)uVar1 < 0) {
      uVar3 = 1;
      goto LAB_001008ff;
    }
    param_2 = param_2 - uVar1;
    if ((uVar1 == 0) && (param_2 != 0)) {
      uVar3 = 2;
      goto LAB_001008ff;
    }
    sVar2 = fwrite_unlocked(auStack_2038,1,uVar1,_stdout);
    if (sVar2 < uVar1) {
      clearerr_unlocked(_stdout);
      fpurge(_stdout);
      uVar3 = quotearg_style(4,"standard output");
      uVar4 = dcgettext(0,"error writing %s",5);
      piVar5 = __errno_location();
      error(1,*piVar5,uVar4,uVar3);
      goto LAB_00100992;
    }
  } while (param_2 != 0);
  uVar3 = 0;
LAB_001008ff:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
LAB_00100992:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
    goto LAB_001009fa;
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
    if (pcVar5 != (char *)0x0) goto LAB_00100c9d;
    uVar4 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar5 = " invocation";
    __printf_chk(2,uVar4,"https://www.gnu.org/software/coreutils/",&_LC12);
  }
  else {
    uVar4 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar4,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar5 = setlocale(5,(char *)0x0);
    if (pcVar5 != (char *)0x0) {
LAB_00100c9d:
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
LAB_001009fa:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte main(int param_1,undefined8 *param_2)

{
  byte *pbVar1;
  char cVar2;
  void *pvVar3;
  code cVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  code *__file;
  ulong uVar9;
  long lVar10;
  code *pcVar11;
  code *pcVar12;
  code *pcVar13;
  __off_t _Var14;
  __blksize_t _Var15;
  undefined8 uVar16;
  long lVar17;
  int *piVar18;
  code *pcVar19;
  char *pcVar20;
  undefined *puVar21;
  code *pcVar22;
  undefined8 *puVar23;
  char *pcVar24;
  char *pcVar25;
  char *pcVar26;
  uint __c;
  char *pcVar27;
  bool bVar28;
  long in_FS_OFFSET;
  int local_154;
  code *local_150;
  undefined8 *local_148;
  code *local_140;
  uint local_138;
  bool local_133;
  char local_132;
  byte local_131;
  code *local_130;
  code *local_128;
  code *local_118;
  code *local_f0;
  void *local_e8;
  code *local_e0;
  stat local_d8;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  have_read_stdin = '\0';
  print_headers = '\0';
  line_end = (code)0xa;
  if (((param_1 < 2) || (pcVar26 = (char *)param_2[1], *pcVar26 != '-')) ||
     (9 < (int)pcVar26[1] - 0x30U)) {
    local_132 = '\x01';
    iVar7 = 0;
    local_150 = (code *)0xa;
    puVar23 = param_2;
  }
  else {
    pcVar25 = pcVar26 + 1;
    do {
      pcVar24 = pcVar25;
      cVar2 = pcVar24[1];
      pcVar25 = pcVar24 + 1;
      pcVar27 = (char *)(ulong)(uint)(int)cVar2;
    } while ((int)cVar2 - 0x30U < 10);
    if (cVar2 == '\0') {
      local_132 = '\x01';
      iVar7 = 0;
    }
    else {
      pcVar19 = (code *)0x0;
      local_132 = '\x01';
      iVar7 = 0;
      pcVar20 = pcVar25;
      do {
        switch((int)pcVar27 - 0x62U & 0xff) {
        case 0:
        case 9:
        case 0xb:
          local_132 = '\0';
          pcVar19 = (code *)pcVar27;
          break;
        case 1:
          pcVar19 = (code *)0x0;
          local_132 = '\0';
          break;
        default:
          goto switchD_00101898_caseD_2;
        case 10:
          local_132 = '\x01';
          break;
        case 0xf:
          iVar7 = 2;
          break;
        case 0x14:
          iVar7 = 1;
          break;
        case 0x18:
          line_end = (code)0x0;
        }
        pbVar1 = (byte *)(pcVar20 + 1);
        pcVar27 = (char *)(ulong)*pbVar1;
        pcVar20 = pcVar20 + 1;
      } while (*pbVar1 != 0);
      *pcVar25 = (char)pcVar19;
      if ((char)pcVar19 != '\0') {
        pcVar24[2] = '\0';
      }
    }
    puVar23 = param_2 + 1;
    param_1 = param_1 + -1;
    local_150 = (code *)string_to_integer(local_132,pcVar26 + 1);
    *puVar23 = *param_2;
  }
  local_133 = false;
  pcVar27 = "c:n:qvz0123456789";
  while (iVar6 = getopt_long(param_1,puVar23,"c:n:qvz0123456789",long_options,0), iVar6 != -1) {
    if (0x80 < iVar6) goto LAB_00102207;
    if (iVar6 < 99) {
      if (iVar6 == -0x83) {
        uVar16 = proper_name_lite("Jim Meyering","Jim Meyering");
        uVar8 = proper_name_lite("David MacKenzie","David MacKenzie");
        version_etc(_stdout,&_LC12,"GNU coreutils",_Version,uVar8,uVar16,0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar6 == -0x82) {
        piVar18 = (int *)usage(0);
        goto LAB_00102462;
      }
      goto switchD_00101738_caseD_64;
    }
    switch(iVar6) {
    case 99:
      local_133 = *_optarg == '-';
      if (local_133) {
        _optarg = _optarg + 1;
      }
      local_150 = (code *)string_to_integer(0);
      local_132 = '\0';
      break;
    default:
      goto switchD_00101738_caseD_64;
    case 0x6e:
      local_133 = *_optarg == '-';
      if (local_133) {
        _optarg = _optarg + 1;
      }
      local_150 = (code *)string_to_integer(1);
      local_132 = '\x01';
      break;
    case 0x71:
      iVar7 = 2;
      break;
    case 0x76:
      iVar7 = 1;
      break;
    case 0x7a:
      line_end = (code)0x0;
      break;
    case 0x80:
      presume_input_pipe = '\x01';
    }
  }
  if ((iVar7 == 1) || ((iVar7 == 0 && (_optind < param_1 + -1)))) {
    print_headers = '\x01';
  }
  if (_optind < param_1) {
    local_148 = puVar23 + _optind;
    pcVar19 = (code *)*local_148;
    if (pcVar19 == (code *)0x0) {
      local_131 = 1;
LAB_00101b9a:
      iVar6 = (int)pcVar19;
      if ((have_read_stdin == '\0') || (iVar7 = close(0), -1 < iVar7)) {
        if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return local_131 ^ 1;
      }
      piVar18 = __errno_location();
      error(1,*piVar18,&_LC41);
switchD_00101738_caseD_64:
      if (9 < iVar6 - 0x30U) goto LAB_00102207;
      uVar16 = dcgettext(0,"invalid trailing option -- %c",5);
      do {
        error(0,0,uVar16,iVar6);
LAB_00102207:
        usage();
switchD_00101898_caseD_2:
        uVar16 = dcgettext(0,"invalid trailing option -- %c",5);
        iVar6 = (int)(char)pcVar27;
      } while( true );
    }
  }
  else {
    pcVar19 = (code *)&_LC41;
    local_148 = (undefined8 *)default_file_list_2;
  }
  local_131 = 1;
  __file = pcVar19;
LAB_00101970:
  local_148 = local_148 + 1;
  local_138 = (byte)*__file - 0x2d;
  if ((local_138 == 0) && (local_138 = (uint)(byte)__file[1], local_138 == 0)) {
    have_read_stdin = '\x01';
    __file = (code *)dcgettext(0,"standard input",5);
    local_154 = 0;
LAB_001019b3:
    if (print_headers != '\0') {
      puVar21 = &_LC14;
      if (first_file_1 == '\0') {
        puVar21 = &_LC42;
      }
      pcVar19 = __file;
      __printf_chk(2,"%s==> %s <==\n",puVar21);
      first_file_1 = '\0';
    }
    if (local_133 != false) {
      bVar5 = local_133;
      if (local_150 == (code *)0xffffffffffffffff) goto LAB_00101b71;
      iVar7 = fstat(local_154,&local_d8);
      if (iVar7 == 0) {
        if (presume_input_pipe == '\0') {
          if ((local_d8.st_mode & 0xd000) == 0x8000) {
            local_118 = (code *)lseek(local_154,0,1);
            if (-1 < (long)local_118) {
              if (local_132 == '\0') {
                pcVar19 = (code *)0x1fffffffffffffff;
                _Var15 = local_d8.st_blksize;
                if (0x1fffffffffffffff < local_d8.st_blksize - 1U) {
                  _Var15 = 0x200;
                }
                if (local_d8.st_size <= _Var15) goto LAB_00101a5a;
                pcVar12 = (code *)(local_d8.st_size - (long)local_118);
                if ((long)pcVar12 < 0) {
                  pcVar12 = (code *)0x0;
                }
                if ((local_150 < pcVar12) && (iVar7 = copy_fd(), iVar7 != 0)) {
                  diagnose_copy_fd_failure();
                  goto LAB_00102274;
                }
              }
              else {
                _Var15 = local_d8.st_blksize;
                if (0x1fffffffffffffff < local_d8.st_blksize - 1U) {
                  _Var15 = 0x200;
                }
                if (local_d8.st_size <= _Var15) goto LAB_00101d60;
                pcVar19 = (code *)0x1;
                if ((long)local_118 < local_d8.st_size) {
                  bVar5 = elide_tail_lines_seekable
                                    (__file,local_154,local_150,local_118,local_d8.st_size);
                  pcVar19 = (code *)(ulong)bVar5;
                }
                bVar5 = (byte)pcVar19 & 1;
              }
              goto LAB_00101b71;
            }
            elseek_part_0(0,1,__file);
            goto LAB_00102274;
          }
          local_118 = (code *)0xffffffffffffffff;
          if (local_132 == '\0') goto LAB_00101a5a;
LAB_00101d60:
          pcVar27 = (char *)0x0;
          pcVar12 = (code *)xmalloc(0x2020);
          *(undefined8 *)(pcVar12 + 0x2018) = 0;
          *(undefined1 (*) [16])(pcVar12 + 0x2008) = (undefined1  [16])0x0;
          pcVar19 = (code *)xmalloc(0x2020);
          local_130 = local_118;
          local_140 = pcVar12;
          while (lVar10 = safe_read(local_154,pcVar19,0x2000), cVar4 = line_end, 0 < lVar10) {
            if (local_150 == (code *)0x0) {
              local_130 = local_130 + lVar10;
              xwrite_stdout(pcVar19);
            }
            else {
              iVar7 = (int)(char)line_end;
              *(undefined8 *)(pcVar19 + 0x2010) = 0;
              *(long *)(pcVar19 + 0x2008) = lVar10;
              *(undefined8 *)(pcVar19 + 0x2018) = 0;
              pcVar19[lVar10] = cVar4;
              pcVar13 = pcVar19;
              lVar17 = *(long *)(pcVar19 + 0x2010);
              while( true ) {
                pcVar13 = (code *)rawmemchr(pcVar13,iVar7);
                if (pcVar19 + lVar10 <= pcVar13) break;
                *(long *)(pcVar19 + 0x2010) = lVar17 + 1;
                pcVar13 = pcVar13 + 1;
                lVar17 = lVar17 + 1;
              }
              pcVar27 = (char *)((code *)pcVar27 + lVar17);
              if (*(size_t *)(pcVar19 + 0x2008) + *(long *)(local_140 + 0x2008) < 0x2000) {
                memcpy(local_140 + *(long *)(local_140 + 0x2008),pcVar19,
                       *(size_t *)(pcVar19 + 0x2008));
                lVar10 = *(long *)(pcVar19 + 0x2010);
                *(long *)(local_140 + 0x2008) =
                     *(long *)(pcVar19 + 0x2008) + *(long *)(local_140 + 0x2008);
                *(long *)(local_140 + 0x2010) = lVar10 + *(long *)(local_140 + 0x2010);
              }
              else {
                *(code **)(local_140 + 0x2018) = pcVar19;
                local_140 = pcVar19;
                if (local_150 < (code *)pcVar27 + -*(long *)(pcVar12 + 0x2010)) {
                  local_130 = local_130 + *(long *)(pcVar12 + 0x2008);
                  xwrite_stdout(pcVar12);
                  pcVar27 = (char *)((code *)pcVar27 + -*(long *)(pcVar12 + 0x2010));
                  pcVar19 = pcVar12;
                  pcVar12 = *(code **)(pcVar12 + 0x2018);
                }
                else {
                  pcVar19 = (code *)xmalloc(0x2020);
                }
              }
            }
          }
          free(pcVar19);
          if (lVar10 == 0) {
            if ((*(long *)(local_140 + 0x2008) != 0) &&
               (local_140[*(long *)(local_140 + 0x2008) + -1] != line_end)) {
              *(long *)(local_140 + 0x2010) = *(long *)(local_140 + 0x2010) + 1;
              pcVar27 = (char *)((code *)pcVar27 + 1);
            }
            pcVar11 = (code *)pcVar27 + -*(long *)(pcVar12 + 0x2010);
            pcVar22 = (code *)pcVar27;
            pcVar13 = pcVar12;
            pcVar19 = local_140;
            while (local_150 < pcVar11) {
              local_130 = local_130 + *(long *)(pcVar13 + 0x2008);
              xwrite_stdout(pcVar13);
              pcVar22 = pcVar22 + -*(long *)(pcVar13 + 0x2010);
              pcVar13 = *(code **)(pcVar13 + 0x2018);
              pcVar11 = pcVar22 + -*(long *)(pcVar13 + 0x2010);
            }
            pcVar27 = (char *)pcVar22;
            if (local_150 < pcVar22) {
              lVar10 = *(long *)(pcVar13 + 0x2008);
              __c = (uint)(char)line_end;
              pcVar27 = (char *)(ulong)__c;
              lVar17 = (long)pcVar22 - (long)local_150;
              pcVar22 = pcVar13;
              do {
                pcVar22 = (code *)memchr(pcVar22,__c,(size_t)(pcVar13 + (lVar10 - (long)pcVar22)));
                if (pcVar22 == (code *)0x0) break;
                *(long *)(pcVar13 + 0x2010) = *(long *)(pcVar13 + 0x2010) + 1;
                pcVar22 = pcVar22 + 1;
                lVar17 = lVar17 + -1;
              } while (lVar17 != 0);
              local_130 = pcVar22 + ((long)local_130 - (long)pcVar13);
              xwrite_stdout(pcVar13);
            }
          }
          else {
            pcVar19 = (code *)quotearg_style(4,__file);
            uVar16 = dcgettext(0,"error reading %s",5);
            piVar18 = __errno_location();
            bVar5 = false;
            error(0,*piVar18,uVar16);
            if (pcVar12 == (code *)0x0) goto LAB_0010201c;
          }
          do {
            pcVar13 = *(code **)(pcVar12 + 0x2018);
            free(pcVar12);
            pcVar12 = pcVar13;
          } while (pcVar13 != (code *)0x0);
        }
        else {
          local_118 = (code *)0xffffffffffffffff;
          if (local_132 != '\0') goto LAB_00101d60;
LAB_00101a5a:
          local_130 = local_118;
          if (local_150 <= string_to_integer) {
            uVar9 = 0;
            pcVar27 = (char *)(local_150 + 0x2000);
            local_128 = (code *)xnmalloc(2,pcVar27);
            local_e8 = local_128;
            local_e0 = (code *)((long)local_128 + (long)pcVar27);
            do {
              pvVar3 = (&local_e8)[uVar9];
              lVar10 = full_read(local_154,pvVar3,pcVar27);
              if (lVar10 < (long)pcVar27) {
                piVar18 = __errno_location();
                local_140 = __file;
                if (*piVar18 != 0) goto LAB_00102462;
                if ((long)local_150 < lVar10) {
                  bVar28 = local_133;
                  if ((bool)bVar5 != false) {
                    local_130 = local_130 + (lVar10 - (long)local_150);
                    xwrite_stdout(pvVar3);
                    goto LAB_00102334;
                  }
LAB_001023bc:
                  lVar17 = 0;
                  bVar5 = bVar28;
                }
                else {
                  if ((bool)bVar5 != false) goto LAB_00102334;
                  lVar17 = (long)local_150 - lVar10;
                  bVar5 = local_133;
                }
                local_130 = local_150 + ((long)local_130 - lVar17);
                xwrite_stdout((long)(&local_e8)[(uint)uVar9 ^ 1] + 0x2000);
                if ((long)local_150 < lVar10) {
LAB_001023a1:
                  local_130 = local_130 + (lVar10 - (long)local_150);
                  xwrite_stdout(pvVar3);
                }
                if ((bool)bVar5 != false) goto LAB_00102334;
              }
              else {
                bVar28 = (bool)bVar5;
                if ((bool)bVar5 == false) goto LAB_001023bc;
                if ((long)local_150 < lVar10) {
                  bVar5 = false;
                  goto LAB_001023a1;
                }
              }
              uVar9 = (ulong)((uint)uVar9 ^ 1);
              bVar5 = false;
            } while( true );
          }
          uVar9 = (ulong)((uint)local_150 & 0x1fff);
          bVar28 = false;
          pcVar11 = (code *)0x0;
          pcVar12 = (code *)(((ulong)local_150 >> 0xd) + 1 +
                            (ulong)(((ulong)local_150 & 0x1fff) != 0));
          local_f0 = (code *)0x0;
          local_128 = (code *)0x0;
          pcVar13 = (code *)0x0;
          pcVar22 = (code *)0x1;
          do {
            pcVar27 = (char *)pcVar22;
            if (local_f0 == pcVar13) {
              pcVar19 = pcVar12;
              pcVar11 = (code *)xpalloc(pcVar11,&local_f0,1,pcVar12,8);
            }
            if (bVar28 == false) {
              local_128 = pcVar13 + 1;
              uVar16 = xmalloc(0x2000);
              *(undefined8 *)(pcVar11 + (long)pcVar13 * 8) = uVar16;
              lVar10 = full_read(local_154,uVar16,0x2000);
              if (lVar10 < 0x2000) {
                piVar18 = __errno_location();
                bVar5 = local_133;
                if (*piVar18 != 0) goto LAB_00102055;
              }
              else {
                bVar5 = false;
              }
              if (local_128 == pcVar12) goto LAB_00101ad8;
            }
            else {
              lVar10 = full_read(local_154,*(undefined8 *)(pcVar11 + (long)pcVar13 * 8),0x2000);
              if (lVar10 < 0x2000) {
                piVar18 = __errno_location();
                bVar5 = bVar28;
                if (*piVar18 != 0) {
LAB_00102055:
                  bVar5 = false;
                  pcVar19 = (code *)quotearg_style(4,__file);
                  uVar16 = dcgettext(0,"error reading %s",5);
                  error(0,*piVar18,uVar16);
                  goto LAB_0010209c;
                }
              }
              else {
                bVar5 = false;
              }
LAB_00101ad8:
              local_130 = local_130 + lVar10;
              xwrite_stdout(*(undefined8 *)(pcVar11 + (long)pcVar27 * 8),lVar10);
              bVar28 = local_133;
            }
            pcVar22 = (code *)((ulong)((code *)pcVar27 + 1) % (ulong)pcVar12);
            pcVar13 = (code *)pcVar27;
          } while ((bool)bVar5 == false);
          if (bVar28 == false) {
            if (pcVar12 == (code *)pcVar27 + 1) {
              local_130 = local_130 + (lVar10 - uVar9);
              xwrite_stdout(*(undefined8 *)(pcVar11 + (long)pcVar22 * 8));
            }
          }
          else {
            if (lVar10 < (long)uVar9) {
              xwrite_stdout(*(long *)(pcVar11 + (long)pcVar27 * 8) + lVar10);
            }
            else {
              xwrite_stdout(*(long *)(pcVar11 + (long)pcVar27 * 8) + lVar10,0x2000 - lVar10);
              xwrite_stdout(*(undefined8 *)(pcVar11 + (long)pcVar22 * 8));
            }
            local_130 = local_130 + (0x2000 - uVar9);
            bVar5 = bVar28;
          }
LAB_0010209c:
          if (local_128 != (code *)0x0) {
            pcVar27 = (char *)pcVar11;
            do {
              pvVar3 = *(void **)pcVar27;
              pcVar27 = (char *)((code *)pcVar27 + 8);
              free(pvVar3);
            } while (pcVar11 + (long)local_128 * 8 != (code *)pcVar27);
          }
          free(pcVar11);
        }
        goto LAB_0010201c;
      }
      pcVar19 = (code *)quotearg_style(4,__file);
      pcVar27 = (char *)dcgettext(0,"cannot fstat %s",5);
      piVar18 = __errno_location();
      error(0,*piVar18,pcVar27);
      goto LAB_00102274;
    }
    if (local_132 == '\0') {
      bVar5 = head_bytes(__file,local_154,local_150);
    }
    else {
      bVar5 = head_lines();
    }
    goto LAB_00101b71;
  }
  local_154 = open((char *)__file,0);
  if (-1 < local_154) goto LAB_001019b3;
  pcVar19 = (code *)quotearg_style(4,__file);
  pcVar26 = "cannot open %s for reading";
  goto LAB_00101c9e;
LAB_00102462:
  bVar5 = false;
  pcVar19 = (code *)quotearg_style(4,local_140);
  uVar16 = dcgettext(0,"error reading %s",5);
  error(0,*piVar18,uVar16);
  __file = local_140;
LAB_00102334:
  free(local_128);
LAB_0010201c:
  if ((local_118 != (code *)0xffffffffffffffff) &&
     (_Var14 = lseek(local_154,(__off_t)local_130,0), _Var14 < 0)) {
    elseek_part_0(local_130,0,__file);
LAB_00102274:
    bVar5 = 0;
  }
LAB_00101b71:
  if ((local_138 != 0) && (iVar7 = close(local_154), iVar7 != 0)) {
    pcVar19 = (code *)quotearg_style(4,__file);
    pcVar26 = "failed to close %s";
LAB_00101c9e:
    bVar5 = 0;
    uVar16 = dcgettext(0,pcVar26,5);
    piVar18 = __errno_location();
    error(0,*piVar18,uVar16);
  }
  local_131 = local_131 & bVar5;
  __file = (code *)*local_148;
  if ((code *)*local_148 == (code *)0x0) goto LAB_00101b9a;
  goto LAB_00101970;
}


