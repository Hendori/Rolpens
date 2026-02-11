
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
    iVar2 = strcmp("nohup",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)ppuVar7 + 0x10);
    ppuVar7 = (undefined **)((long)ppuVar7 + 0x10);
  } while (pcVar4 != (char *)0x0);
  pcVar4 = *(char **)((long)ppuVar7 + 8);
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
  exit(param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int main(int param_1,undefined8 *param_2)

{
  char **__argv;
  bool bVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  int *piVar6;
  undefined8 uVar7;
  int iVar8;
  int unaff_R13D;
  int unaff_R14D;
  int unaff_R15D;
  char *local_60;
  undefined8 local_58;
  char *local_50;
  int local_48;
  
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  pcVar4 = getenv("POSIXLY_CORRECT");
  iVar8 = (-(uint)(pcVar4 == (char *)0x0) & 0xfffffffe) + 0x7f;
  _exit_failure = iVar8;
  atexit((__func *)&close_stdout);
  uVar5 = proper_name_lite("Jim Meyering","Jim Meyering");
  parse_gnu_standard_options_only
            (param_1,param_2,"nohup","GNU coreutils",_Version,0,0x100000,uVar5,0);
  if (param_1 <= _optind) goto LAB_00100f0e;
  unaff_R13D = isatty(0);
  param_1 = isatty(1);
  if (param_1 == 0) {
    piVar6 = __errno_location();
    if (*piVar6 == 9) {
      unaff_R14D = isatty(2);
      if (unaff_R13D != 0) {
        local_48 = 1;
        bVar1 = true;
        iVar3 = unaff_R14D;
        goto LAB_00100e09;
      }
      if (unaff_R14D != 0) {
        local_48 = 1;
        goto LAB_00100d7d;
      }
    }
    else {
      unaff_R14D = isatty(2);
      iVar3 = unaff_R14D;
      if (unaff_R13D != 0) {
        while( true ) {
          bVar1 = false;
          local_48 = 0;
LAB_00100e09:
          iVar2 = fd_reopen(0,"/dev/null",1,0);
          if (-1 < iVar2) break;
LAB_00100dd0:
          param_2 = (undefined8 *)dcgettext(0,"failed to render standard input unusable",5);
          piVar6 = __errno_location();
          iVar3 = error(iVar8,*piVar6,param_2);
        }
        if (unaff_R14D == 0) {
          uVar5 = dcgettext(0,"ignoring input",5);
          error(0,0,uVar5);
          if ((!bVar1) || (iVar3 == 0)) goto LAB_00100b4f;
        }
        else if ((!bVar1) || (iVar3 == 0)) goto LAB_00100e3b;
LAB_00100d7d:
        local_58._0_4_ = umask(0xfffffe7f);
        unaff_R15D = open("nohup.out",0x441,0x180);
        goto LAB_00100c13;
      }
      local_48 = 0;
      if (unaff_R14D != 0) {
LAB_00100e3b:
        unaff_R14D = rpl_fcntl(2,0x406,3);
        unaff_R15D = 1;
        do {
          pcVar4 = "redirecting stderr to stdout";
          if (unaff_R13D != 0) {
            pcVar4 = "ignoring input and redirecting stderr to stdout";
          }
          uVar5 = dcgettext(0,pcVar4,5);
          error(0,0,uVar5);
          do {
            iVar3 = dup2(unaff_R15D,2);
            if (-1 < iVar3) {
              if (local_48 != 0) {
                close(unaff_R15D);
              }
              goto LAB_00100b55;
            }
            param_2 = (undefined8 *)dcgettext(0,"failed to redirect standard error",5);
            piVar6 = __errno_location();
            error(iVar8,*piVar6,param_2);
LAB_00100f0e:
            uVar5 = dcgettext(0,"missing operand",5);
            error(0,0,uVar5);
            usage(iVar8);
LAB_00100f36:
            local_50 = "nohup.out";
            local_60 = (char *)0x0;
LAB_00100c8a:
            umask((__mode_t)local_58);
            local_58 = quotearg_style(4,local_50);
            pcVar4 = "appending output to %s";
            if (unaff_R13D != 0) {
              pcVar4 = "ignoring input and appending output to %s";
            }
            uVar5 = dcgettext(0,pcVar4,5);
            error(0,0,uVar5,local_58);
            free(local_60);
            if (unaff_R14D == 0) goto LAB_00100b4f;
            unaff_R14D = rpl_fcntl(2,0x406,3);
          } while (param_1 != 0);
        } while( true );
      }
    }
LAB_00100b4f:
    unaff_R14D = 2;
LAB_00100b55:
    if ((*_stderr & 0x20) == 0) {
      signal(1,(__sighandler_t)0x1);
      __argv = (char **)(param_2 + _optind);
      execvp(*__argv,__argv);
      piVar6 = __errno_location();
      iVar3 = *piVar6;
      iVar8 = (iVar3 == 2) + 0x7e;
      iVar2 = dup2(unaff_R14D,2);
      if (iVar2 == 2) {
        uVar5 = quotearg_style(4,*__argv);
        uVar7 = dcgettext(0,"failed to run command %s",5);
        error(0,iVar3,uVar7,uVar5);
      }
    }
  }
  else {
    unaff_R14D = isatty(2);
    if ((unaff_R13D != 0) && (iVar3 = fd_reopen(0,"/dev/null",1,0), iVar3 < 0)) goto LAB_00100dd0;
    local_58._0_4_ = umask(0xfffffe7f);
    unaff_R15D = fd_reopen(1,"nohup.out",0x441);
    local_48 = 0;
LAB_00100c13:
    if (-1 < unaff_R15D) goto LAB_00100f36;
    piVar6 = __errno_location();
    iVar3 = *piVar6;
    pcVar4 = getenv("HOME");
    if (pcVar4 == (char *)0x0) {
      uVar5 = quotearg_style(4,"nohup.out");
      uVar7 = dcgettext(0,"failed to open %s",5);
      error(0,iVar3,uVar7,uVar5);
    }
    else {
      local_60 = (char *)file_name_concat(pcVar4,"nohup.out",0);
      if (param_1 == 0) {
        unaff_R15D = open(local_60,0x441,0x180);
      }
      else {
        unaff_R15D = fd_reopen(1,local_60,0x441,0x180);
      }
      local_50 = local_60;
      if (-1 < unaff_R15D) goto LAB_00100c8a;
      iVar2 = *piVar6;
      uVar5 = quotearg_style(4,"nohup.out");
      uVar7 = dcgettext(0,"failed to open %s",5);
      error(0,iVar3,uVar7,uVar5);
      uVar5 = quotearg_style(4,local_60);
      uVar7 = dcgettext(0,"failed to open %s",5);
      error(0,iVar2,uVar7,uVar5);
    }
  }
  return iVar8;
}


