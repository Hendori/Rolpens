
void userid_compare(undefined8 *param_1,undefined8 *param_2)

{
  strcmp((char *)*param_1,(char *)*param_2);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void users(undefined8 param_1,uint param_2)

{
  void *__ptr;
  FILE *pFVar1;
  int iVar2;
  int iVar3;
  undefined8 *__base;
  undefined8 uVar4;
  undefined8 uVar5;
  int *piVar6;
  char *pcVar7;
  char *pcVar8;
  char cVar9;
  undefined8 *puVar10;
  undefined **ppuVar11;
  long lVar12;
  size_t __nmemb;
  size_t sVar13;
  long in_FS_OFFSET;
  undefined *puStack_100;
  char *pcStack_f8;
  char *apcStack_f0 [4];
  char *pcStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  char *pcStack_b0;
  char *pcStack_a8;
  undefined1 auStack_a0 [16];
  undefined8 uStack_88;
  undefined8 uStack_80;
  long local_50;
  undefined8 *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = read_utmp(param_1,&local_50,&local_48,param_2 | 2);
  puVar10 = local_48;
  if (iVar2 == 0) {
    __base = (undefined8 *)xinmalloc(local_50);
    if (local_50 == 0) {
      qsort(__base,0,8,userid_compare);
    }
    else {
      __nmemb = 0;
      lVar12 = local_50;
      do {
        if ((*(char *)*puVar10 != '\0') && (*(short *)(puVar10 + 7) == 7)) {
          uVar4 = extract_trimmed_name(puVar10);
          __base[__nmemb] = uVar4;
          __nmemb = __nmemb + 1;
        }
        puVar10 = puVar10 + 9;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      sVar13 = 0;
      qsort(__base,__nmemb,8,userid_compare);
      if (0 < (long)__nmemb) {
        do {
          iVar2 = 0x20;
          if ((long)(__nmemb - 1) <= (long)sVar13) {
            iVar2 = 10;
          }
          cVar9 = '\n';
          if ((long)sVar13 < (long)(__nmemb - 1)) {
            cVar9 = ' ';
          }
          fputs_unlocked((char *)__base[sVar13],_stdout);
          pcVar7 = _stdout->_IO_write_ptr;
          if (pcVar7 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = pcVar7 + 1;
            *pcVar7 = cVar9;
          }
          else {
            __overflow(_stdout,iVar2);
          }
          sVar13 = sVar13 + 1;
        } while (sVar13 != __nmemb);
        puVar10 = __base;
        do {
          __ptr = (void *)*puVar10;
          puVar10 = puVar10 + 1;
          free(__ptr);
        } while (puVar10 != __base + sVar13);
      }
    }
    free(__base);
    free(local_48);
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  uVar5 = quotearg_n_style_colon(0,3,param_1);
  piVar6 = __errno_location();
  iVar2 = 1;
  error(1,*piVar6,&_LC0,uVar5);
  uVar4 = _program_name;
  ppuVar11 = &puStack_100;
  uStack_88 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  uStack_80 = uVar5;
  if (iVar2 != 0) {
    uVar5 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(_stderr,2,uVar5,uVar4);
    goto LAB_0010023a;
  }
  uVar5 = dcgettext(0,"Usage: %s [OPTION]... [FILE]\n",5);
  __printf_chk(2,uVar5,uVar4);
  uVar4 = dcgettext(0,
                    "Output who is currently logged in according to FILE.\nIf FILE is not specified, use %s.  %s as FILE is common.\n\n"
                    ,5);
  __printf_chk(2,uVar4,"/var/run/utmp","/var/log/wtmp");
  pFVar1 = _stdout;
  pcVar7 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar7,pFVar1);
  pFVar1 = _stdout;
  pcVar7 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar7,pFVar1);
  pcVar7 = "[";
  puStack_100 = &_LC1;
  pcStack_f8 = "test invocation";
  apcStack_f0[0] = "coreutils";
  apcStack_f0[1] = "Multi-call invocation";
  apcStack_f0[2] = "sha224sum";
  apcStack_f0[3] = "sha2 utilities";
  pcStack_d0 = "sha256sum";
  pcStack_c8 = "sha2 utilities";
  pcStack_c0 = "sha384sum";
  pcStack_b8 = "sha2 utilities";
  pcStack_b0 = "sha512sum";
  pcStack_a8 = "sha2 utilities";
  auStack_a0 = (undefined1  [16])0x0;
  do {
    iVar3 = strcmp("users",pcVar7);
    if (iVar3 == 0) break;
    pcVar7 = *(char **)((long)ppuVar11 + 0x10);
    ppuVar11 = (undefined **)((long)ppuVar11 + 0x10);
  } while (pcVar7 != (char *)0x0);
  pcVar7 = *(char **)((long)ppuVar11 + 8);
  if (pcVar7 == (char *)0x0) {
    uVar4 = dcgettext(0,"\n%s online help: <%s>\n",5);
    pcVar7 = "users";
    __printf_chk(2,uVar4,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar8 = setlocale(5,(char *)0x0);
    if (pcVar8 != (char *)0x0) goto LAB_00100405;
    uVar4 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar8 = " invocation";
    __printf_chk(2,uVar4,"https://www.gnu.org/software/coreutils/","users");
  }
  else {
    uVar4 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar4,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar8 = setlocale(5,(char *)0x0);
    if (pcVar8 != (char *)0x0) {
LAB_00100405:
      iVar3 = strncmp(pcVar8,"en_",3);
      pFVar1 = _stdout;
      if (iVar3 != 0) {
        pcVar8 = (char *)dcgettext(0,
                                   "Report any translation bugs to <https://translationproject.org/team/>\n"
                                   ,5);
        fputs_unlocked(pcVar8,pFVar1);
      }
    }
    uVar4 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar8 = "";
    __printf_chk(2,uVar4,"https://www.gnu.org/software/coreutils/","users");
    if (pcVar7 == "users") {
      pcVar8 = " invocation";
    }
  }
  uVar4 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar4,pcVar7,pcVar8);
LAB_0010023a:
                    /* WARNING: Subroutine does not return */
  exit(iVar2);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void usage(int param_1)

{
  FILE *pFVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
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
  
  uVar4 = _program_name;
  ppuVar7 = &local_a8;
  local_30 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(_stderr,2,uVar3,uVar4);
    goto LAB_0010023a;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... [FILE]\n",5);
  __printf_chk(2,uVar3,uVar4);
  uVar4 = dcgettext(0,
                    "Output who is currently logged in according to FILE.\nIf FILE is not specified, use %s.  %s as FILE is common.\n\n"
                    ,5);
  __printf_chk(2,uVar4,"/var/run/utmp","/var/log/wtmp");
  pFVar1 = _stdout;
  pcVar5 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = _stdout;
  pcVar5 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar5,pFVar1);
  pcVar5 = "[";
  local_a8 = &_LC1;
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
    iVar2 = strcmp("users",pcVar5);
    if (iVar2 == 0) break;
    pcVar5 = *(char **)((long)ppuVar7 + 0x10);
    ppuVar7 = (undefined **)((long)ppuVar7 + 0x10);
  } while (pcVar5 != (char *)0x0);
  pcVar5 = *(char **)((long)ppuVar7 + 8);
  if (pcVar5 == (char *)0x0) {
    uVar4 = dcgettext(0,"\n%s online help: <%s>\n",5);
    pcVar5 = "users";
    __printf_chk(2,uVar4,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) goto LAB_00100405;
    uVar4 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = " invocation";
    __printf_chk(2,uVar4,"https://www.gnu.org/software/coreutils/","users");
  }
  else {
    uVar4 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar4,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) {
LAB_00100405:
      iVar2 = strncmp(pcVar6,"en_",3);
      pFVar1 = _stdout;
      if (iVar2 != 0) {
        pcVar6 = (char *)dcgettext(0,
                                   "Report any translation bugs to <https://translationproject.org/team/>\n"
                                   ,5);
        fputs_unlocked(pcVar6,pFVar1);
      }
    }
    uVar4 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = "";
    __printf_chk(2,uVar4,"https://www.gnu.org/software/coreutils/","users");
    if (pcVar5 == "users") {
      pcVar6 = " invocation";
    }
  }
  uVar4 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar4,pcVar5,pcVar6);
LAB_0010023a:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 main(int param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  uVar1 = proper_name_lite("David MacKenzie","David MacKenzie");
  uVar2 = proper_name_lite("Joseph Arceneaux","Joseph Arceneaux");
  parse_gnu_standard_options_only
            (param_1,param_2,"users","GNU coreutils",_Version,1,usage,uVar2,uVar1,0);
  if (param_1 == _optind) {
    users("/var/run/utmp",1);
  }
  else {
    if (param_1 - _optind != 1) {
      uVar1 = quote(param_2[(long)_optind + 1]);
      uVar2 = dcgettext(0,"extra operand %s",5);
      error(0,0,uVar2,uVar1);
                    /* WARNING: Subroutine does not return */
      usage(1);
    }
    users(param_2[_optind],0);
  }
  return 0;
}


