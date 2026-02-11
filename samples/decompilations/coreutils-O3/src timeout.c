
void chld(void)

{
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void settimeout(double param_1,char param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  uint __seconds;
  long in_FS_OFFSET;
  timer_t local_50;
  itimerspec local_48;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48.it_value = (timespec)dtotimespec();
  local_48.it_interval.tv_sec = 0;
  local_48.it_interval.tv_nsec = 0;
  iVar1 = timer_create(0,(sigevent *)0x0,&local_50);
  if (iVar1 == 0) {
    iVar1 = timer_settime(local_50,0,&local_48,(itimerspec *)0x0);
    if (iVar1 == 0) goto LAB_00100082;
    if (param_2 != '\0') {
      uVar3 = dcgettext(0,"warning: timer_settime",5);
      piVar2 = __errno_location();
      error(0,*piVar2,uVar3);
    }
    timer_delete(local_50);
  }
  else if (param_2 != '\0') {
    piVar2 = __errno_location();
    if (*piVar2 != 0x26) {
      uVar3 = dcgettext(0,"warning: timer_create",5);
      error(0,*piVar2,uVar3);
    }
  }
  __seconds = 0xffffffff;
  if (param_1 < __LC2) {
    __seconds = (uint)((double)((long)param_1 & 0xffffffff) < param_1) + (int)(long)param_1;
  }
  alarm(__seconds);
LAB_00100082:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void unblock_signal(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  long in_FS_OFFSET;
  sigset_t sStack_a8;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  sigemptyset(&sStack_a8);
  sigaddset(&sStack_a8,param_1);
  iVar1 = sigprocmask(1,&sStack_a8,(sigset_t *)0x0);
  if (iVar1 != 0) {
    uVar2 = dcgettext(0,"warning: sigprocmask",5);
    piVar3 = __errno_location();
    error(0,*piVar3,uVar2);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void cleanup(EVP_PKEY_CTX *ctx)

{
  double dVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int __sig;
  ulong uVar6;
  long in_FS_OFFSET;
  bool bVar7;
  undefined1 local_38 [24];
  long local_20;
  
  dVar1 = kill_after;
  uVar6 = (ulong)ctx & 0xffffffff;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((int)ctx == 0xe) {
    timed_out = 1;
    uVar6 = (ulong)term_signal;
  }
  __sig = (int)uVar6;
  if (monitored_pid < 1) {
    if (monitored_pid != -1) {
                    /* WARNING: Subroutine does not return */
      _exit(__sig + 0x80);
    }
  }
  else {
    if (kill_after == 0.0) {
      iVar2 = monitored_pid;
      if (verbose != '\0') {
LAB_0010037e:
        iVar2 = sig2str(uVar6,local_38);
        if (iVar2 != 0) {
          __snprintf_chk(local_38,0x13,2,0x13,&_LC6,uVar6);
        }
        uVar4 = quote(command);
        uVar5 = dcgettext(0,"sending signal %s to command %s",5);
        error(0,0,uVar5,local_38,uVar4);
        goto LAB_001002d4;
      }
    }
    else {
      piVar3 = __errno_location();
      term_signal = 9;
      iVar2 = *piVar3;
      settimeout(dVar1,0);
      bVar7 = verbose != '\0';
      kill_after = 0.0;
      *piVar3 = iVar2;
      if (bVar7) goto LAB_0010037e;
LAB_001002d4:
      iVar2 = monitored_pid;
      if (monitored_pid == 0) {
        signal(__sig,(__sighandler_t)0x1);
      }
    }
    kill(iVar2,__sig);
    if (foreground == '\0') {
      signal(__sig,(__sighandler_t)0x1);
      kill(0,__sig);
      if ((__sig != 9) && (__sig != 0x12)) {
        if (iVar2 == 0) {
          signal(0x12,(__sighandler_t)0x1);
        }
        kill(iVar2,0x12);
        signal(0x12,(__sighandler_t)0x1);
        if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
          kill(0,0x12);
          return;
        }
        goto LAB_00100379;
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00100379:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



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
    goto LAB_0010045a;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION] DURATION COMMAND [ARG]...\n  or:  %s [OPTION]\n",5);
  __printf_chk(2,uVar3,uVar5,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"Start COMMAND, and kill it if still running after DURATION.\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -f, --foreground\n                 when not running timeout directly from a shell prompt,\n                   allow COMMAND to read from the TTY and get TTY signals;\n                   in this mode, children of COMMAND will not be timed out\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -k, --kill-after=DURATION\n                 also send a KILL signal if COMMAND is still running\n                   this long after the initial signal was sent\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -p, --preserve-status\n                 exit with the same status as COMMAND,\n                   even when the command times out\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -s, --signal=SIGNAL\n                 specify the signal to be sent on timeout;\n                   SIGNAL may be a name like \'HUP\' or a number;\n                   see \'kill -l\' for a list of signals\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"  -v, --verbose  diagnose to stderr any signal sent upon timeout\n",
                             5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nDURATION is a floating point number with an optional suffix:\n\'s\' for seconds (the default), \'m\' for minutes, \'h\' for hours or \'d\' for days.\nA duration of 0 disables the associated timeout.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nUpon timeout, send the TERM signal to COMMAND, if no other SIGNAL specified.\nThe TERM signal kills any process that does not block or catch that signal.\nIt may be necessary to use the KILL signal, since this signal can\'t be caught.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nExit status:\n  124  if COMMAND times out, and --preserve-status is not specified\n  125  if the timeout command itself fails\n  126  if COMMAND is found but cannot be invoked\n  127  if COMMAND cannot be found\n  137  if COMMAND (or timeout itself) is sent the KILL (9) signal (128+9)\n  -    the exit status of COMMAND otherwise\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pcVar4 = "[";
  local_a8 = &_LC8;
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
    iVar2 = strcmp("timeout",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)ppuVar7 + 0x10);
    ppuVar7 = (undefined **)((long)ppuVar7 + 0x10);
  } while (pcVar4 != (char *)0x0);
  pcVar4 = *(char **)((long)ppuVar7 + 8);
  if (pcVar4 == (char *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    pcVar4 = "timeout";
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) goto LAB_0010076d;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","timeout");
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) {
LAB_0010076d:
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
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","timeout");
    if (pcVar4 == "timeout") {
      pcVar6 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,pcVar4,pcVar6);
LAB_0010045a:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double parse_duration(char *param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  double extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qb;
  double dVar8;
  double extraout_XMM1_Qa;
  char *local_28;
  long local_20;
  undefined1 auVar7 [16];
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  piVar4 = __errno_location();
  *piVar4 = 0;
  uVar5 = cl_strtod(param_1,&local_28);
  auVar7._8_8_ = extraout_XMM0_Qb;
  auVar7._0_8_ = extraout_XMM0_Qa;
  if (*piVar4 == 0x22) {
    uVar2 = (undefined4)CONCAT71((int7)((ulong)uVar5 >> 8),!NAN(extraout_XMM0_Qa));
    if (extraout_XMM0_Qa != 0.0) {
      uVar2 = 0;
    }
    if ((char)uVar2 == '\0') goto LAB_00100980;
    uVar3 = movmskpd(uVar2,auVar7);
    if (((uVar3 & 1) == 0) && (param_1 != local_28)) {
      cVar1 = *local_28;
      dVar8 = _LC41;
      goto joined_r0x001009a8;
    }
LAB_001009b5:
    uVar5 = quote(param_1);
    uVar6 = dcgettext(0,"invalid time interval %s",5);
    error(0,0,uVar6,uVar5);
    usage(0x7d);
    dVar8 = extraout_XMM1_Qa;
  }
  else {
LAB_00100980:
    dVar8 = _LC42 * extraout_XMM0_Qa + extraout_XMM0_Qa;
    if ((local_28 == param_1) || (dVar8 < 0.0)) goto LAB_001009b5;
    cVar1 = *local_28;
joined_r0x001009a8:
    if (cVar1 == '\0') goto LAB_00100950;
    if (local_28[1] != '\0') goto LAB_001009b5;
    if (cVar1 != 'h') {
      if (cVar1 < 'i') {
        if (cVar1 == 'd') {
          dVar8 = dVar8 * __LC45;
          goto LAB_00100950;
        }
      }
      else {
        if (cVar1 == 'm') {
          dVar8 = dVar8 * __LC43;
          goto LAB_00100950;
        }
        if (cVar1 == 's') goto LAB_00100950;
      }
      goto LAB_001009b5;
    }
  }
  dVar8 = dVar8 * __LC44;
LAB_00100950:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return _LC42 * dVar8 + dVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint main(int param_1,undefined8 *param_2)

{
  char **__argv;
  int iVar1;
  __pid_t _Var2;
  undefined8 uVar3;
  int *piVar4;
  undefined8 uVar5;
  uint uVar6;
  char *pcVar7;
  long in_FS_OFFSET;
  uint local_14c;
  sigset_t local_148;
  _union_1457 local_c8;
  sigset_t local_c0;
  undefined4 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  _exit_failure = 0x7d;
  atexit((__func *)&close_stdout);
LAB_001015d0:
  iVar1 = getopt_long(param_1,param_2,"+fk:ps:v",long_options,0);
  if (iVar1 == -1) {
    iVar1 = param_1 - _optind;
    param_1 = iVar1 + -1;
    if (param_1 == 0 || iVar1 < 1) goto switchD_00101609_caseD_67;
    _optind = _optind + 1;
    uVar3 = parse_duration();
    __argv = (char **)(param_2 + _optind);
    command = *__argv;
    if (foreground == '\0') {
      setpgid(0,0);
    }
    iVar1 = term_signal;
    sigemptyset(&local_c0);
    local_40 = 0x10000000;
    local_c8.sa_handler = cleanup;
    sigaction(0xe,(sigaction *)&local_c8,(sigaction *)0x0);
    sigaction(2,(sigaction *)&local_c8,(sigaction *)0x0);
    sigaction(3,(sigaction *)&local_c8,(sigaction *)0x0);
    sigaction(1,(sigaction *)&local_c8,(sigaction *)0x0);
    sigaction(0xf,(sigaction *)&local_c8,(sigaction *)0x0);
    sigaction(iVar1,(sigaction *)&local_c8,(sigaction *)0x0);
    signal(0x15,(__sighandler_t)0x1);
    signal(0x16,(__sighandler_t)0x1);
    sigemptyset(&local_c0);
    local_40 = 0x10000000;
    local_c8 = (_union_1457)0x100000;
    sigaction(0x11,(sigaction *)&local_c8,(sigaction *)0x0);
    unblock_signal(0x11);
    unblock_signal(0xe);
    iVar1 = term_signal;
    sigemptyset((sigset_t *)&local_c8);
    sigaddset((sigset_t *)&local_c8,0xe);
    sigaddset((sigset_t *)&local_c8,2);
    sigaddset((sigset_t *)&local_c8,3);
    sigaddset((sigset_t *)&local_c8,1);
    sigaddset((sigset_t *)&local_c8,0xf);
    sigaddset((sigset_t *)&local_c8,iVar1);
    sigaddset((sigset_t *)&local_c8,0x11);
    iVar1 = sigprocmask(0,(sigset_t *)&local_c8,&local_148);
    if (iVar1 != 0) {
      uVar5 = dcgettext(0,"warning: sigprocmask",5);
      piVar4 = __errno_location();
      error(0,*piVar4,uVar5);
    }
    monitored_pid = fork();
    pcVar7 = "fork system call failed";
    if (monitored_pid == -1) {
LAB_001019f5:
      uVar3 = dcgettext(0,pcVar7,5);
      piVar4 = __errno_location();
      error(0,*piVar4,uVar3);
      uVar6 = 0x7d;
    }
    else {
      if (monitored_pid != 0) {
        settimeout(uVar3,1,"fork system call failed");
        while( true ) {
          _Var2 = waitpid(monitored_pid,(int *)&local_14c,1);
          if (_Var2 != 0) break;
          sigsuspend(&local_148);
        }
        if (-1 < _Var2) {
          uVar6 = local_14c & 0x7f;
          param_2 = (undefined8 *)(ulong)uVar6;
          if (uVar6 == 0) {
            uVar6 = local_14c >> 8 & 0xff;
            goto LAB_001019b4;
          }
          if ((char)((char)uVar6 + '\x01') < '\x02') {
            uVar6 = 1;
            uVar3 = dcgettext(0,"unknown status from command (%d)",5);
            error(0,0,uVar3,local_14c);
            goto LAB_001019b4;
          }
          if ((local_14c & 0x80) != 0) {
            uVar3 = dcgettext(0,"the monitored command dumped core",5);
            error(0,0,uVar3);
          }
          if (timed_out == 0) {
            iVar1 = prctl(4);
            if (iVar1 == 0) {
              signal(uVar6,(__sighandler_t)0x0);
              unblock_signal(param_2);
              raise(uVar6);
            }
            else {
              uVar3 = dcgettext(0,"warning: disabling core dumps failed",5);
              piVar4 = __errno_location();
              error(0,*piVar4,uVar3);
            }
          }
          if ((timed_out != 0) && (uVar6 == 9)) goto LAB_00101a8d;
          goto LAB_00101a44;
        }
        uVar3 = dcgettext(0,"error waiting for command",5);
        piVar4 = __errno_location();
        uVar6 = 0x7d;
        error(0,*piVar4,uVar3);
        goto LAB_001019b4;
      }
      iVar1 = sigprocmask(2,&local_148,(sigset_t *)0x0);
      if (iVar1 != 0) {
        pcVar7 = "child failed to reset signal mask";
        goto LAB_001019f5;
      }
      signal(0x15,(__sighandler_t)0x0);
      signal(0x16,(__sighandler_t)0x0);
      execvp(*__argv,__argv);
      piVar4 = __errno_location();
      iVar1 = *piVar4;
      uVar3 = quote(command);
      uVar5 = dcgettext(0,"failed to run command %s",5);
      error(0,*piVar4,uVar5,uVar3);
      uVar6 = (iVar1 == 2) + 0x7e;
    }
    goto LAB_00101940;
  }
  if (0x76 < iVar1) goto switchD_00101609_caseD_67;
  if (iVar1 < 0x66) {
    if (iVar1 == -0x83) {
      uVar3 = proper_name_lite("Padraig Brady",&_LC48);
      version_etc(_stdout,"timeout","GNU coreutils",_Version,uVar3,0);
                    /* WARNING: Subroutine does not return */
      exit(0);
    }
    if (iVar1 != -0x82) goto switchD_00101609_caseD_67;
    usage(0);
LAB_00101a8d:
    uVar6 = (uint)param_2;
    preserve_status = '\x01';
LAB_00101a44:
    uVar6 = uVar6 + 0x80;
LAB_001019b4:
    local_14c = uVar6;
    if ((timed_out != 0) && (preserve_status == '\0')) {
      local_14c = 0x7c;
      uVar6 = local_14c;
    }
LAB_00101940:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar6;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  switch(iVar1) {
  case 0x66:
    foreground = '\x01';
    goto LAB_001015d0;
  case 0x6b:
    kill_after = parse_duration(_optarg);
    goto LAB_001015d0;
  case 0x70:
    goto switchD_00101609_caseD_70;
  case 0x73:
    term_signal = operand2sig(_optarg);
    if (term_signal != -1) goto LAB_001015d0;
    break;
  case 0x76:
    goto switchD_00101609_caseD_76;
  }
switchD_00101609_caseD_67:
  usage(0x7d);
  goto switchD_00101609_caseD_70;
switchD_00101609_caseD_76:
  verbose = 1;
  goto LAB_001015d0;
switchD_00101609_caseD_70:
  preserve_status = '\x01';
  goto LAB_001015d0;
}


