
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
  size_t sVar5;
  size_t sVar6;
  char *pcVar7;
  int *piVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  char cVar14;
  char *pcVar15;
  char cVar16;
  long lVar17;
  long lVar18;
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
  while (iVar4 = getopt_long(param_1,param_2,&_LC30,longopts,0), iVar4 != -1) {
    if (iVar4 == 0x50) {
      bVar1 = true;
    }
    else {
      if (iVar4 < 0x51) {
        if (iVar4 != -0x83) goto LAB_00100ee0;
        uVar13 = proper_name_lite("Jim Meyering","Jim Meyering");
        uVar10 = proper_name_lite("David MacKenzie","David MacKenzie");
        uVar12 = proper_name_lite("Paul Eggert","Paul Eggert");
        version_etc(_stdout,"pathchk","GNU coreutils",_Version,uVar12,uVar10,uVar13,0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar4 != 0x70) {
        if (iVar4 != 0x80) goto LAB_00100ed6;
        bVar1 = true;
      }
      bVar2 = true;
    }
  }
  if (_optind != param_1) {
    local_d9 = 1;
    if (_optind < param_1) goto LAB_001009a7;
LAB_00100b07:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return local_d9 ^ 1;
  }
  uVar13 = dcgettext(0,"missing operand",5);
  error(0,0,uVar13);
LAB_00100ed6:
  do {
    iVar4 = usage(1);
LAB_00100ee0:
  } while (iVar4 != -0x82);
  usage(0);
LAB_00100eee:
  uVar13 = dcgettext(0,"empty file name",5);
  error(0,0,uVar13);
  bVar3 = 0;
LAB_00100ae8:
  local_d9 = local_d9 & bVar3;
  _optind = _optind + 1;
  if (param_1 <= _optind) goto LAB_00100b07;
LAB_001009a7:
  __s = (char *)param_2[_optind];
  sVar5 = strlen(__s);
  pcVar15 = __s;
  if (bVar1) goto LAB_00100baf;
  if (!bVar2) goto LAB_00100bd2;
  if (sVar5 != 0) goto LAB_001009dc;
  goto LAB_00100eee;
LAB_00100baf:
  while (pcVar15 = strchr(pcVar15,0x2d), pcVar15 != (char *)0x0) {
    if ((__s == pcVar15) || (pcVar15[-1] == '/')) {
      uVar13 = quotearg_style(4,__s);
      uVar10 = dcgettext(0,"leading \'-\' in a component of file name %s",5);
      error(0,0,uVar10,uVar13);
      bVar3 = 0;
      goto LAB_00100ae8;
    }
    pcVar15 = pcVar15 + 1;
  }
  if (sVar5 == 0) goto LAB_00100eee;
  if (bVar2) {
LAB_001009dc:
    sVar6 = strspn(__s,"/ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789._-");
    pcVar15 = __s + sVar6;
    if (*pcVar15 != '\0') {
      mbszero(&local_d8);
      uVar11 = rpl_mbrlen(pcVar15,sVar5 - sVar6,&local_d8);
      uVar13 = quotearg_n_style(0,4,__s);
      if (0x10 < uVar11) {
        uVar11 = 1;
      }
      uVar10 = quotearg_n_style_mem(1,8,pcVar15,uVar11);
      uVar12 = dcgettext(0,"non-portable character %s in file name %s",5);
      error(0,0,uVar12,uVar10,uVar13);
      bVar3 = 0;
      goto LAB_00100ae8;
    }
    if (0xff < sVar5) {
      lVar18 = 0x100;
      goto LAB_00100cc0;
    }
    cVar16 = *__s;
    lVar18 = 0xe;
LAB_00100a15:
    if (cVar16 != '/') {
      lVar17 = 0xe;
      pcVar15 = __s;
      goto LAB_00100a47;
    }
    pcVar7 = __s;
    lVar17 = 0xe;
    do {
      do {
        cVar16 = pcVar7[1];
        pcVar15 = pcVar7 + 1;
        pcVar7 = pcVar7 + 1;
      } while (cVar16 == '/');
LAB_00100a47:
      if (cVar16 == '\0') break;
      lVar9 = lVar18;
      if (lVar18 == 0) {
        pcVar7 = ".";
        if (__s != pcVar15) {
          pcVar7 = __s;
        }
        piVar8 = __errno_location();
        *piVar8 = 0;
        *pcVar15 = '\0';
        lVar9 = pathconf(pcVar7,3);
        *pcVar15 = cVar16;
        if (lVar9 < 0) {
          if (*piVar8 == 0) {
            lVar9 = 0x7fffffffffffffff;
          }
          else {
            lVar9 = lVar17;
            lVar18 = lVar17;
            if (*piVar8 != 2) {
              *pcVar15 = '\0';
              uVar13 = quotearg_n_style_colon(0,3,pcVar7);
              error(0,*piVar8,&_LC36,uVar13);
              *pcVar15 = cVar16;
              bVar3 = 0;
              goto LAB_00100ae8;
            }
          }
        }
      }
      cVar16 = pcVar15[1];
      if ((cVar16 == '/') || (cVar16 == '\0')) {
        pcVar7 = pcVar15 + 1;
        lVar17 = 1;
      }
      else {
        lVar17 = 1;
        do {
          lVar17 = lVar17 + 1;
          cVar16 = pcVar15[lVar17];
          if (cVar16 == '/') break;
        } while (cVar16 != '\0');
        pcVar7 = pcVar15 + lVar17;
      }
      if (lVar9 < lVar17) {
        *pcVar7 = '\0';
        uVar13 = quote(pcVar15);
        uVar10 = dcgettext(0,"limit %td exceeded by length %td of file name component %s",5);
        error(0,0,uVar10,lVar9,lVar17,uVar13);
        *pcVar7 = cVar16;
        bVar3 = 0;
        goto LAB_00100ae8;
      }
      lVar17 = lVar9;
    } while (cVar16 == '/');
  }
  else {
LAB_00100bd2:
    iVar4 = lstat(__s,&local_d8);
    if (iVar4 != 0) {
      piVar8 = __errno_location();
      if ((*piVar8 != 2) || (sVar5 == 0)) {
        uVar13 = quotearg_n_style_colon(0,3,__s);
        error(0,*piVar8,&_LC36,uVar13);
        bVar3 = 0;
        goto LAB_00100ae8;
      }
      if (0xff < sVar5) {
        pcVar15 = "/";
        if (*__s != '/') {
          pcVar15 = ".";
        }
        *piVar8 = 0;
        lVar18 = pathconf(pcVar15,4);
        if (lVar18 < 0) {
          if (*piVar8 != 0) {
            uVar13 = dcgettext(0,"%s: unable to determine maximum file name length",5);
            error(0,*piVar8,uVar13,pcVar15);
            bVar3 = 0;
            goto LAB_00100ae8;
          }
LAB_00100cc0:
          uVar13 = quotearg_style(4,__s);
          uVar10 = dcgettext(0,"limit %td exceeded by length %td of file name %s",5);
          error(0,0,uVar10,lVar18 + -1,sVar5,uVar13);
          bVar3 = 0;
          goto LAB_00100ae8;
        }
        if (lVar18 <= (long)sVar5) goto LAB_00100cc0;
      }
      cVar16 = *__s;
      pcVar15 = __s;
      cVar14 = cVar16;
      if (cVar16 != '/') goto LAB_00100c65;
      do {
        do {
          cVar14 = pcVar15[1];
          pcVar15 = pcVar15 + 1;
        } while (cVar14 == '/');
LAB_00100c65:
        if (cVar14 == '\0') break;
        cVar14 = pcVar15[1];
        if ((cVar14 == '\0') || (cVar14 == '/')) {
          pcVar15 = pcVar15 + 1;
        }
        else {
          uVar11 = 1;
          do {
            uVar11 = uVar11 + 1;
            cVar14 = pcVar15[uVar11];
            if (cVar14 == '/') break;
          } while (cVar14 != '\0');
          if (0xe < uVar11) {
            lVar18 = 0;
            goto LAB_00100a15;
          }
          pcVar15 = pcVar15 + uVar11;
        }
      } while (cVar14 == '/');
    }
  }
  bVar3 = 1;
  goto LAB_00100ae8;
}


