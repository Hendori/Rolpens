
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void usage(int status)

{
  FILE *pFVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  char *pcVar6;
  infomap *piVar7;
  infomap infomap [7];
  
  uVar5 = _program_name;
  piVar7 = infomap;
  if (status != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(_stderr,2,uVar3,uVar5);
    goto LAB_0010005a;
  }
  uVar3 = dcgettext(0,"Usage: %s COMMAND [ARG]...\n  or:  %s OPTION\n",5);
  __printf_chk(2,uVar3,uVar5,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"Run COMMAND, ignoring hangup signals.\n\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  uVar5 = _program_name;
  uVar3 = dcgettext(0,
                    "\nIf standard input is a terminal, redirect it from an unreadable file.\nIf standard output is a terminal, append output to \'nohup.out\' if possible,\n\'$HOME/nohup.out\' otherwise.\nIf standard error is a terminal, redirect it to standard output.\nTo save output to FILE, use \'%s COMMAND > FILE\'.\n"
                    ,5);
  __printf_chk(2,uVar3,uVar5);
  uVar5 = dcgettext(0,
                    "\nYour shell may have its own version of %s, which usually supersedes\nthe version described here.  Please refer to your shell\'s documentation\nfor details about the options it supports.\n"
                    ,5);
  __printf_chk(2,uVar5,"nohup");
  uVar5 = dcgettext(0,
                    "\nExit status:\n  125  if the %s command itself fails\n  126  if COMMAND is found but cannot be invoked\n  127  if COMMAND cannot be found\n  -    the exit status of COMMAND otherwise\n"
                    ,5);
  __printf_chk(2,uVar5,"nohup");
  pcVar4 = "[";
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
    iVar2 = strcmp("nohup",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)piVar7 + 0x10);
    piVar7 = (infomap *)((long)piVar7 + 0x10);
  } while (pcVar4 != (char *)0x0);
  pcVar4 = *(char **)((long)piVar7 + 8);
  if (pcVar4 == (char *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    pcVar4 = "nohup";
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) goto LAB_0010028d;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","nohup");
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) {
LAB_0010028d:
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
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","nohup");
    if (pcVar4 == "nohup") {
      pcVar6 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,pcVar4,pcVar6);
LAB_0010005a:
                    /* WARNING: Subroutine does not return */
  exit(status);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int main(int argc,char **argv)

{
  char **__argv;
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  __mode_t __mask;
  int iVar6;
  int iVar7;
  char *pcVar8;
  undefined8 uVar9;
  int *piVar10;
  undefined8 uVar11;
  int status;
  char *local_60;
  char *local_50;
  
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  pcVar8 = getenv("POSIXLY_CORRECT");
  status = (-(uint)(pcVar8 == (char *)0x0) & 0xfffffffe) + 0x7f;
  _exit_failure = status;
  atexit((__func *)&close_stdout);
  uVar9 = proper_name_lite("Jim Meyering","Jim Meyering");
  parse_gnu_standard_options_only(argc,argv,"nohup","GNU coreutils",_Version,0,0x100000,uVar9,0);
  if (argc <= _optind) goto LAB_00100f0e;
  iVar3 = isatty(0);
  iVar4 = isatty(1);
  if (iVar4 == 0) {
    piVar10 = __errno_location();
    if (*piVar10 == 9) {
      iVar5 = isatty(2);
      if (iVar3 == 0) {
        if (iVar5 == 0) goto LAB_00100b4f;
        bVar2 = true;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        iVar6 = iVar5;
        while( true ) {
          iVar7 = fd_reopen(0,"/dev/null",1,0);
          if (-1 < iVar7) break;
LAB_00100dd0:
          argv = (char **)dcgettext(0,"failed to render standard input unusable",5);
          piVar10 = __errno_location();
          iVar6 = error(status,*piVar10,argv);
LAB_00100df9:
          bVar1 = false;
          bVar2 = false;
        }
        if (iVar5 == 0) {
          uVar9 = dcgettext(0,"ignoring input",5);
          error(0,0,uVar9);
          if ((!bVar1) || (iVar6 == 0)) goto LAB_00100b4f;
        }
        else if ((!bVar1) || (iVar6 == 0)) goto LAB_00100e3b;
      }
      __mask = umask(0xfffffe7f);
      iVar6 = open("nohup.out",0x441,0x180);
      goto LAB_00100c13;
    }
    iVar5 = isatty(2);
    iVar6 = iVar5;
    if (iVar3 != 0) goto LAB_00100df9;
    bVar2 = false;
    if (iVar5 != 0) {
LAB_00100e3b:
      iVar5 = rpl_fcntl(2,0x406,3);
      iVar6 = 1;
      goto LAB_00100e5a;
    }
  }
  else {
    iVar5 = isatty(2);
    if ((iVar3 != 0) && (iVar6 = fd_reopen(0,"/dev/null",1,0), iVar6 < 0)) goto LAB_00100dd0;
    __mask = umask(0xfffffe7f);
    iVar6 = fd_reopen(1,"nohup.out",0x441);
    bVar2 = false;
LAB_00100c13:
    if (iVar6 < 0) {
      piVar10 = __errno_location();
      iVar7 = *piVar10;
      pcVar8 = getenv("HOME");
      if (pcVar8 == (char *)0x0) {
        uVar9 = quotearg_style(4,"nohup.out");
        uVar11 = dcgettext(0,"failed to open %s",5);
        error(0,iVar7,uVar11,uVar9);
        return status;
      }
      local_60 = (char *)file_name_concat(pcVar8,"nohup.out",0);
      if (iVar4 == 0) {
        iVar6 = open(local_60,0x441,0x180);
      }
      else {
        iVar6 = fd_reopen(1,local_60,0x441,0x180);
      }
      local_50 = local_60;
      if (iVar6 < 0) {
        iVar3 = *piVar10;
        uVar9 = quotearg_style(4,"nohup.out");
        uVar11 = dcgettext(0,"failed to open %s",5);
        error(0,iVar7,uVar11,uVar9);
        uVar9 = quotearg_style(4,local_60);
        uVar11 = dcgettext(0,"failed to open %s",5);
        error(0,iVar3,uVar11,uVar9);
        return status;
      }
    }
    else {
      local_50 = "nohup.out";
      local_60 = (char *)0x0;
    }
    umask(__mask);
    uVar9 = quotearg_style(4,local_50);
    pcVar8 = "appending output to %s";
    if (iVar3 != 0) {
      pcVar8 = "ignoring input and appending output to %s";
    }
    uVar11 = dcgettext(0,pcVar8,5);
    error(0,0,uVar11,uVar9);
    free(local_60);
    if (iVar5 != 0) {
      iVar5 = rpl_fcntl(2,0x406,3);
      if (iVar4 == 0) {
LAB_00100e5a:
        pcVar8 = "redirecting stderr to stdout";
        if (iVar3 != 0) {
          pcVar8 = "ignoring input and redirecting stderr to stdout";
        }
        uVar9 = dcgettext(0,pcVar8,5);
        error(0,0,uVar9);
      }
      iVar3 = dup2(iVar6,2);
      if (iVar3 < 0) {
        uVar9 = dcgettext(0,"failed to redirect standard error",5);
        piVar10 = __errno_location();
        error(status,*piVar10,uVar9);
LAB_00100f0e:
        uVar9 = dcgettext(0,"missing operand",5);
        error(0,0,uVar9);
                    /* WARNING: Subroutine does not return */
        usage(status);
      }
      if (bVar2) {
        close(iVar6);
      }
      goto LAB_00100b55;
    }
  }
LAB_00100b4f:
  iVar5 = 2;
LAB_00100b55:
  if ((*_stderr & 0x20) == 0) {
    signal(1,(__sighandler_t)0x1);
    __argv = argv + _optind;
    execvp(*__argv,__argv);
    piVar10 = __errno_location();
    iVar3 = *piVar10;
    status = (iVar3 == 2) + 0x7e;
    iVar4 = dup2(iVar5,2);
    if (iVar4 == 2) {
      uVar9 = quotearg_style(4,*__argv);
      uVar11 = dcgettext(0,"failed to run command %s",5);
      error(0,iVar3,uVar11,uVar9);
    }
  }
  return status;
}


