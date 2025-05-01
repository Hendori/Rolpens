
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void usage(int status)

{
  FILE *pFVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  infomap *piVar6;
  undefined *puVar7;
  infomap infomap [7];
  
  uVar4 = _program_name;
  piVar6 = infomap;
  if (status != 0) {
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
    iVar2 = strcmp("nice",pcVar5);
    if (iVar2 == 0) break;
    pcVar5 = *(char **)((long)piVar6 + 0x10);
    piVar6 = (infomap *)((long)piVar6 + 0x10);
  } while (pcVar5 != (char *)0x0);
  puVar7 = *(undefined **)((long)piVar6 + 8);
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
  exit(status);
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
/* WARNING: Unknown calling convention */

int main(int argc,char **argv)

{
  char **__argv;
  char *pcVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  int *piVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  int *piVar10;
  long in_FS_OFFSET;
  long tmp;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils");
  iVar7 = 1;
  textdomain("coreutils");
  _exit_failure = 0x7d;
  atexit((__func *)&close_stdout);
  if (argc < 2) {
LAB_00100c7b:
    piVar10 = __errno_location();
    if (argc != iVar7) goto LAB_00100da1;
    *piVar10 = 0;
    iVar2 = getpriority(PRIO_PROCESS,0);
    if ((iVar2 == -1) && (*piVar10 != 0)) goto LAB_00100d7b;
    iVar8 = 0;
    __printf_chk(2,&_LC34,iVar2);
  }
  else {
    pcVar9 = (char *)0x0;
    do {
      pcVar1 = argv[iVar7];
      if ((*pcVar1 == '-') &&
         ((int)pcVar1[(ulong)((pcVar1[1] - 0x2bU & 0xfd) == 0) + 1] - 0x30U < 10)) {
        iVar7 = iVar7 + 1;
        pcVar9 = pcVar1 + 1;
      }
      else {
        _optind = 0;
        argv[(long)iVar7 + -1] = *argv;
        iVar2 = getopt_long(argc - (iVar7 + -1),argv + (long)iVar7 + -1,&_LC29,longopts,0);
        iVar7 = iVar7 + -1 + _optind;
        if (iVar2 == -1) break;
        if (iVar2 < 0) {
          if (iVar2 == -0x83) {
            uVar4 = proper_name_lite("David MacKenzie","David MacKenzie");
            version_etc(_stdout,&_LC1,"GNU coreutils",_Version,uVar4,0);
                    /* WARNING: Subroutine does not return */
            exit(0);
          }
          if (iVar2 == -0x82) {
                    /* WARNING: Subroutine does not return */
            usage(0);
          }
          goto LAB_00100d14;
        }
        pcVar9 = _optarg;
        if (iVar2 != 0x6e) goto LAB_00100d14;
      }
    } while (iVar7 < argc);
    if (pcVar9 == (char *)0x0) goto LAB_00100c7b;
    uVar3 = xstrtol(pcVar9,0,10,&tmp,&_LC3);
    if (1 < uVar3) {
      uVar4 = quote(pcVar9);
      uVar6 = dcgettext(0,"invalid adjustment %s",5);
      error(0x7d,0,uVar6,uVar4);
      goto LAB_00100d50;
    }
    piVar10 = (int *)tmp;
    if (0x27 < tmp) {
      piVar10 = (int *)0x27;
    }
    if ((long)piVar10 < -0x27) {
      piVar10 = (int *)0xffffffffffffffd9;
    }
    if (iVar7 == argc) {
      uVar4 = dcgettext(0,"a command must be given with an adjustment",5);
      error(0,0,uVar4);
LAB_00100d14:
                    /* WARNING: Subroutine does not return */
      usage(0x7d);
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
      error(0x7d,*piVar10,uVar4);
LAB_00100da1:
      piVar10 = (int *)0xa;
    }
    iVar2 = setpriority(PRIO_PROCESS,0,iVar2 + (int)piVar10);
    if (iVar2 == 0) {
LAB_00100c22:
      __argv = argv + iVar7;
      execvp(*__argv,__argv);
      iVar7 = *piVar5;
      uVar4 = quote(*__argv);
      iVar8 = (iVar7 == 2) + 0x7e;
      error(0,*piVar5,&_LC35,uVar4);
    }
    else {
      if ((*piVar5 != 0xd) && (*piVar5 != 1)) {
        uVar4 = dcgettext(0,"cannot set niceness",5);
        error(0x7d,*piVar5,uVar4);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      iVar8 = 0x7d;
      uVar4 = dcgettext(0,"cannot set niceness",5);
      error(0,*piVar5,uVar4);
      if ((*_stderr & 0x20) == 0) goto LAB_00100c22;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar8;
  }
LAB_00100d50:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


