
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void usage(int param_1)

{
  FILE *pFVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined **ppuVar7;
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
  ppuVar7 = &local_a8;
  local_30 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(_stderr,2,uVar3,uVar5);
    goto LAB_0010005a;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... NAME...\n",5);
  __printf_chk(2,uVar3,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "Diagnose invalid or non-portable file names.\n\n  -p                  check for most POSIX systems\n  -P                  check for empty names and leading \"-\"\n      --portability   check for all POSIX systems (equivalent to -p -P)\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pcVar4 = "[";
  local_a8 = &_LC0;
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
    iVar2 = strcmp("pathchk",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)ppuVar7 + 0x10);
    ppuVar7 = (undefined **)((long)ppuVar7 + 0x10);
  } while (pcVar4 != (char *)0x0);
  pcVar4 = *(char **)((long)ppuVar7 + 8);
  if (pcVar4 == (char *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    pcVar4 = "pathchk";
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) goto LAB_0010021d;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","pathchk");
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) {
LAB_0010021d:
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
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","pathchk");
    if (pcVar4 == "pathchk") {
      pcVar6 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,pcVar4,pcVar6);
LAB_0010005a:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte main(int param_1,undefined8 *param_2)

{
  char *__s;
  bool bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  size_t sVar8;
  size_t sVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  char *pcVar14;
  char *pcVar15;
  long lVar16;
  long lVar17;
  char cVar18;
  long in_FS_OFFSET;
  byte local_d9;
  stat local_d8;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  bVar1 = false;
  bVar2 = false;
LAB_001008bc:
  do {
    iVar4 = getopt_long(param_1,param_2,&_LC30,longopts,0);
    if (iVar4 == -1) {
      if (_optind == param_1) {
        uVar5 = dcgettext(0,"missing operand",5);
        error(0,0,uVar5);
LAB_00100e2e:
        usage(1);
      }
      else {
        local_d9 = 1;
        if (_optind < param_1) goto LAB_001009a7;
LAB_00100b73:
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          return local_d9 ^ 1;
        }
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (iVar4 == 0x50) {
      bVar1 = true;
      goto LAB_001008bc;
    }
    if (iVar4 < 0x51) {
      if (iVar4 == -0x83) {
        uVar5 = proper_name_lite("Jim Meyering","Jim Meyering");
        uVar6 = proper_name_lite("David MacKenzie","David MacKenzie");
        uVar7 = proper_name_lite("Paul Eggert","Paul Eggert");
        version_etc(_stdout,"pathchk","GNU coreutils",_Version,uVar7,uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar4 == -0x82) {
        usage(0);
LAB_00100e8b:
        uVar5 = dcgettext(0,"empty file name",5);
        error(0,0,uVar5);
        bVar3 = 0;
LAB_00100b54:
        local_d9 = local_d9 & bVar3;
        _optind = _optind + 1;
        if (param_1 <= _optind) goto LAB_00100b73;
LAB_001009a7:
        __s = (char *)param_2[_optind];
        sVar8 = strlen(__s);
        pcVar14 = __s;
        if (bVar1) break;
        if (!bVar2) goto LAB_00100bea;
        if (sVar8 != 0) goto LAB_001009dc;
        goto LAB_00100e8b;
      }
      goto LAB_00100e2e;
    }
    if (iVar4 != 0x70) {
      if (iVar4 != 0x80) goto LAB_00100e2e;
      bVar1 = true;
    }
    bVar2 = true;
  } while( true );
  while (pcVar14 = strchr(pcVar14,0x2d), pcVar14 != (char *)0x0) {
    if ((__s == pcVar14) || (pcVar14[-1] == '/')) {
      uVar5 = quotearg_style(4,__s);
      uVar6 = dcgettext(0,"leading \'-\' in a component of file name %s",5);
      error(0,0,uVar6,uVar5);
      bVar3 = 0;
      goto LAB_00100b54;
    }
    pcVar14 = pcVar14 + 1;
  }
  if (sVar8 == 0) goto LAB_00100e8b;
  if (!bVar2) {
LAB_00100bea:
    iVar4 = lstat(__s,&local_d8);
    if (iVar4 == 0) {
LAB_00100b4f:
      bVar3 = 1;
      goto LAB_00100b54;
    }
    piVar10 = __errno_location();
    if ((*piVar10 != 2) || (sVar8 == 0)) {
      uVar5 = quotearg_n_style_colon(0,3,__s);
      error(0,*piVar10,&_LC36,uVar5);
      bVar3 = 0;
      goto LAB_00100b54;
    }
    pcVar14 = __s;
    if (sVar8 < 0x100) {
LAB_00100c64:
      do {
        for (; *pcVar14 == '/'; pcVar14 = pcVar14 + 1) {
LAB_00100c60:
        }
        if (*pcVar14 == '\0') goto LAB_00100b4f;
        if ((pcVar14[1] == '\0') || (pcVar14[1] == '/')) goto LAB_00100c60;
        uVar13 = 1;
        do {
          uVar13 = uVar13 + 1;
          if (pcVar14[uVar13] == '/') break;
        } while (pcVar14[uVar13] != '\0');
        if (0xe < uVar13) goto LAB_00100ca2;
        pcVar14 = pcVar14 + uVar13;
      } while( true );
    }
    pcVar15 = "/";
    if (*__s != '/') {
      pcVar15 = ".";
    }
    *piVar10 = 0;
    lVar16 = pathconf(pcVar15,4);
    if (lVar16 < 0) {
      if (*piVar10 != 0) {
        uVar5 = dcgettext(0,"%s: unable to determine maximum file name length",5);
        error(0,*piVar10,uVar5,pcVar15);
        bVar3 = 0;
        goto LAB_00100b54;
      }
    }
    else if ((long)sVar8 < lVar16) goto LAB_00100c64;
LAB_00100cb4:
    uVar5 = quotearg_style(4,__s);
    uVar6 = dcgettext(0,"limit %td exceeded by length %td of file name %s",5);
    error(0,0,uVar6,lVar16 + -1,sVar8,uVar5);
    bVar3 = 0;
    goto LAB_00100b54;
  }
LAB_001009dc:
  sVar9 = strspn(__s,"/ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789._-");
  pcVar14 = __s + sVar9;
  if (*pcVar14 != '\0') {
    mbszero(&local_d8);
    uVar13 = rpl_mbrlen(pcVar14,sVar8 - sVar9,&local_d8);
    uVar5 = quotearg_n_style(0,4,__s);
    if (0x10 < uVar13) {
      uVar13 = 1;
    }
    uVar6 = quotearg_n_style_mem(1,8,pcVar14,uVar13);
    uVar7 = dcgettext(0,"non-portable character %s in file name %s",5);
    error(0,0,uVar7,uVar6,uVar5);
    bVar3 = 0;
    goto LAB_00100b54;
  }
  if (0xff < sVar8) {
    lVar16 = 0x100;
    goto LAB_00100cb4;
  }
  lVar16 = 0xe;
LAB_00100a0f:
  pcVar14 = __s;
  lVar17 = 0xe;
  do {
    while (pcVar15 = pcVar14, cVar18 = *pcVar15, cVar18 == '/') {
      pcVar14 = pcVar15 + 1;
    }
    if (cVar18 == '\0') goto LAB_00100b4f;
    lVar11 = lVar16;
    if (lVar16 == 0) {
      pcVar14 = ".";
      if (__s != pcVar15) {
        pcVar14 = __s;
      }
      piVar10 = __errno_location();
      *piVar10 = 0;
      *pcVar15 = '\0';
      lVar11 = pathconf(pcVar14,3);
      *pcVar15 = cVar18;
      if (lVar11 < 0) {
        if (*piVar10 == 0) {
          lVar11 = 0x7fffffffffffffff;
        }
        else {
          lVar16 = lVar17;
          lVar11 = lVar17;
          if (*piVar10 != 2) {
            *pcVar15 = '\0';
            uVar5 = quotearg_n_style_colon(0,3,pcVar14);
            error(0,*piVar10,&_LC36,uVar5);
            *pcVar15 = cVar18;
            bVar3 = 0;
            goto LAB_00100b54;
          }
        }
      }
    }
    cVar18 = pcVar15[1];
    if ((cVar18 == '/') || (cVar18 == '\0')) {
      pcVar14 = pcVar15 + 1;
      lVar12 = 1;
    }
    else {
      lVar12 = 1;
      do {
        lVar12 = lVar12 + 1;
        cVar18 = pcVar15[lVar12];
        if (cVar18 == '/') break;
      } while (cVar18 != '\0');
      pcVar14 = pcVar15 + lVar12;
    }
    lVar17 = lVar11;
  } while (lVar12 <= lVar11);
  *pcVar14 = '\0';
  uVar5 = quote(pcVar15);
  uVar6 = dcgettext(0,"limit %td exceeded by length %td of file name component %s",5);
  error(0,0,uVar6,lVar11,lVar12,uVar5);
  *pcVar14 = cVar18;
  bVar3 = 0;
  goto LAB_00100b54;
LAB_00100ca2:
  lVar16 = 0;
  goto LAB_00100a0f;
}


