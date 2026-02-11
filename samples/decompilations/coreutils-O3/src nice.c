
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
    goto LAB_0010005a;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION] [COMMAND [ARG]...]\n",5);
  __printf_chk(2,uVar3,uVar4);
  uVar4 = dcgettext(0,
                    "Run COMMAND with an adjusted niceness, which affects process scheduling.\nWith no COMMAND, print the current niceness.  Niceness values range from\n%d (most favorable to the process) to %d (least favorable to the process).\n"
                    ,5);
  __printf_chk(2,uVar4,0xffffffec,0x13);
  pFVar1 = _stdout;
  pcVar5 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = _stdout;
  pcVar5 = (char *)dcgettext(0,"  -n, --adjustment=N   add integer N to the niceness (default 10)\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = _stdout;
  pcVar5 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = _stdout;
  pcVar5 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar5,pFVar1);
  uVar4 = dcgettext(0,
                    "\nYour shell may have its own version of %s, which usually supersedes\nthe version described here.  Please refer to your shell\'s documentation\nfor details about the options it supports.\n"
                    ,5);
  __printf_chk(2,uVar4,&_LC1);
  uVar4 = dcgettext(0,
                    "\nExit status:\n  125  if the %s command itself fails\n  126  if COMMAND is found but cannot be invoked\n  127  if COMMAND cannot be found\n  -    the exit status of COMMAND otherwise\n"
                    ,5);
  __printf_chk(2,uVar4,&_LC1);
  pcVar5 = "[";
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
    iVar2 = strcmp("nice",pcVar5);
    if (iVar2 == 0) break;
    pcVar5 = *(char **)((long)ppuVar6 + 0x10);
    ppuVar6 = (undefined **)((long)ppuVar6 + 0x10);
  } while (pcVar5 != (char *)0x0);
  puVar7 = *(undefined **)((long)ppuVar6 + 8);
  if (puVar7 == (undefined *)0x0) {
    uVar4 = dcgettext(0,"\n%s online help: <%s>\n",5);
    puVar7 = &_LC1;
    __printf_chk(2,uVar4,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar5 = setlocale(5,(char *)0x0);
    if (pcVar5 != (char *)0x0) goto LAB_001002b5;
    uVar4 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar5 = " invocation";
    __printf_chk(2,uVar4,"https://www.gnu.org/software/coreutils/",&_LC1);
  }
  else {
    uVar4 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar4,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar5 = setlocale(5,(char *)0x0);
    if (pcVar5 != (char *)0x0) {
LAB_001002b5:
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
    __printf_chk(2,uVar4,"https://www.gnu.org/software/coreutils/",&_LC1);
    if (puVar7 == &_LC1) {
      pcVar5 = " invocation";
    }
  }
  uVar4 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar4,puVar7,pcVar5);
LAB_0010005a:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



/* WARNING: Control flow encountered bad instruction data */

void main_cold(void)

{
  undefined8 uVar1;
  undefined4 *unaff_R12;
  
  uVar1 = dcgettext(0,"cannot set niceness",5);
  error(0x7d,*unaff_R12,uVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char main(int param_1,undefined8 *param_2)

{
  char **__argv;
  char *pcVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  int *piVar5;
  undefined8 uVar6;
  int iVar7;
  char cVar8;
  int *piVar9;
  long in_FS_OFFSET;
  int *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils");
  iVar7 = 1;
  textdomain("coreutils");
  _exit_failure = 0x7d;
  atexit((__func *)&close_stdout);
  if (param_1 < 2) {
LAB_00100c7b:
    piVar9 = __errno_location();
    if (param_1 != iVar7) goto LAB_00100da1;
    *piVar9 = 0;
    iVar2 = getpriority(PRIO_PROCESS,0);
    if ((iVar2 == -1) && (*piVar9 != 0)) goto LAB_00100d7b;
    cVar8 = '\0';
    __printf_chk(2,&_LC34,iVar2);
  }
  else {
    piVar9 = (int *)0x0;
    do {
      pcVar1 = (char *)param_2[iVar7];
      if ((*pcVar1 == '-') &&
         ((int)pcVar1[(ulong)((pcVar1[1] - 0x2bU & 0xfd) == 0) + 1] - 0x30U < 10)) {
        iVar7 = iVar7 + 1;
        piVar5 = (int *)(pcVar1 + 1);
      }
      else {
        _optind = 0;
        param_2[(long)iVar7 + -1] = *param_2;
        iVar2 = getopt_long(param_1 - (iVar7 + -1),param_2 + (long)iVar7 + -1,&_LC29,longopts,0);
        iVar7 = iVar7 + -1 + _optind;
        piVar5 = piVar9;
        if (iVar2 == -1) break;
        if (iVar2 < 0) {
          if (iVar2 == -0x83) {
            uVar4 = proper_name_lite("David MacKenzie","David MacKenzie");
            version_etc(_stdout,&_LC1,"GNU coreutils",_Version,uVar4,0);
                    /* WARNING: Subroutine does not return */
            exit(0);
          }
          if (iVar2 != -0x82) goto LAB_00100d14;
          usage(0);
          goto LAB_00100cf3;
        }
        piVar5 = _optarg;
        if (iVar2 != 0x6e) goto LAB_00100d14;
      }
      piVar9 = piVar5;
    } while (iVar7 < param_1);
    if (piVar5 == (int *)0x0) goto LAB_00100c7b;
    uVar3 = xstrtol(piVar5,0,10,&local_48,&_LC3);
    if (1 < uVar3) {
LAB_00100d1e:
      uVar4 = quote(piVar5);
      uVar6 = dcgettext(0,"invalid adjustment %s",5);
      error(0x7d,0,uVar6,uVar4);
      goto LAB_00100d50;
    }
    piVar9 = local_48;
    if (0x27 < (long)local_48) {
      piVar9 = (int *)0x27;
    }
    if ((long)piVar9 < -0x27) {
      piVar9 = (int *)0xffffffffffffffd9;
    }
    if (iVar7 == param_1) {
LAB_00100cf3:
      uVar4 = dcgettext(0,"a command must be given with an adjustment",5);
      error(0,0,uVar4);
LAB_00100d14:
      piVar5 = piVar9;
      usage(0x7d);
      goto LAB_00100d1e;
    }
    while( true ) {
      piVar5 = __errno_location();
      *piVar5 = 0;
      iVar2 = getpriority(PRIO_PROCESS,0);
      if ((iVar2 != -1) || (*piVar5 == 0)) break;
      uVar4 = dcgettext(0,"cannot get niceness",5);
      error(0x7d,*piVar5,uVar4);
LAB_00100d7b:
      uVar4 = dcgettext(0,"cannot get niceness",5);
      error(0x7d,*piVar9,uVar4);
LAB_00100da1:
      piVar9 = (int *)0xa;
    }
    iVar2 = setpriority(PRIO_PROCESS,0,iVar2 + (int)piVar9);
    if (iVar2 == 0) {
LAB_00100c22:
      __argv = (char **)(param_2 + iVar7);
      execvp(*__argv,__argv);
      iVar7 = *piVar5;
      uVar4 = quote(*__argv);
      cVar8 = (iVar7 == 2) + '~';
      error(0,*piVar5,&_LC35,uVar4);
    }
    else {
      if ((*piVar5 != 0xd) && (*piVar5 != 1)) {
        uVar4 = dcgettext(0,"cannot set niceness",5);
        error(0x7d,*piVar5,uVar4);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      cVar8 = '}';
      uVar4 = dcgettext(0,"cannot set niceness",5);
      error(0,*piVar5,uVar4);
      if ((*_stderr & 0x20) == 0) goto LAB_00100c22;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return cVar8;
  }
LAB_00100d50:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


