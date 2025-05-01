
/* WARNING: Unknown calling convention */

void chld(int sig)

{
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void settimeout(double duration,_Bool warn)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  uint __seconds;
  long in_FS_OFFSET;
  timer_t timerid;
  itimerspec its;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  its.it_value = (timespec)dtotimespec();
  its.it_interval.tv_sec = 0;
  its.it_interval.tv_nsec = 0;
  iVar2 = timer_create(0,(sigevent *)0x0,&timerid);
  if (iVar2 == 0) {
    iVar2 = timer_settime(timerid,0,(itimerspec *)&its,(itimerspec *)0x0);
    if (iVar2 == 0) goto LAB_00100082;
    if (warn) {
      uVar4 = dcgettext(0,"warning: timer_settime",5);
      piVar3 = __errno_location();
      error(0,*piVar3,uVar4);
    }
    timer_delete(timerid);
  }
  else if (warn) {
    piVar3 = __errno_location();
    if (*piVar3 != 0x26) {
      uVar4 = dcgettext(0,"warning: timer_create",5);
      error(0,*piVar3,uVar4);
    }
  }
  __seconds = 0xffffffff;
  if (duration < __LC2) {
    __seconds = (uint)((double)((long)duration & 0xffffffff) < duration) + (int)(long)duration;
  }
  alarm(__seconds);
LAB_00100082:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

void unblock_signal(int sig)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  long in_FS_OFFSET;
  sigset_t unblock_set;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  sigemptyset((sigset_t *)&unblock_set);
  sigaddset((sigset_t *)&unblock_set,sig);
  iVar2 = sigprocmask(1,(sigset_t *)&unblock_set,(sigset_t *)0x0);
  if (iVar2 != 0) {
    uVar3 = dcgettext(0,"warning: sigprocmask",5);
    piVar4 = __errno_location();
    error(0,*piVar4,uVar3);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void cleanup(EVP_PKEY_CTX *ctx)

{
  long lVar1;
  double duration;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int __sig;
  ulong uVar6;
  pid_t __pid;
  long in_FS_OFFSET;
  bool bVar7;
  char signame [19];
  
  duration = kill_after;
  uVar6 = (ulong)ctx & 0xffffffff;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((int)ctx == 0xe) {
    timed_out = 1;
    uVar6 = (ulong)(uint)term_signal;
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
      __pid = monitored_pid;
      if (verbose) {
LAB_0010037e:
        iVar2 = sig2str(uVar6,signame);
        if (iVar2 != 0) {
          __snprintf_chk(signame,0x13,2,0x13,&_LC6,uVar6);
        }
        uVar4 = quote(command);
        uVar5 = dcgettext(0,"sending signal %s to command %s",5);
        error(0,0,uVar5,signame,uVar4);
        goto LAB_001002d4;
      }
    }
    else {
      piVar3 = __errno_location();
      term_signal = 9;
      iVar2 = *piVar3;
      settimeout(duration,false);
      bVar7 = verbose != false;
      kill_after = 0.0;
      *piVar3 = iVar2;
      if (bVar7) goto LAB_0010037e;
LAB_001002d4:
      __pid = monitored_pid;
      if (monitored_pid == 0) {
        signal(__sig,(__sighandler_t)0x1);
      }
    }
    kill(__pid,__sig);
    if (foreground == false) {
      signal(__sig,(__sighandler_t)0x1);
      kill(0,__sig);
      if ((__sig != 9) && (__sig != 0x12)) {
        if (__pid == 0) {
          signal(0x12,(__sighandler_t)0x1);
        }
        kill(__pid,0x12);
        signal(0x12,(__sighandler_t)0x1);
        if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
          kill(0,0x12);
          return;
        }
        goto LAB_00100379;
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00100379:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



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
    iVar2 = strcmp("timeout",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)piVar7 + 0x10);
    piVar7 = (infomap *)((long)piVar7 + 0x10);
  } while (pcVar4 != (char *)0x0);
  pcVar4 = *(char **)((long)piVar7 + 8);
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
  exit(status);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

double parse_duration(char *str)

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
  char *ep;
  long local_20;
  undefined1 auVar7 [16];
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  piVar4 = __errno_location();
  *piVar4 = 0;
  uVar5 = cl_strtod(str,&ep);
  auVar7._8_8_ = extraout_XMM0_Qb;
  auVar7._0_8_ = extraout_XMM0_Qa;
  if (*piVar4 == 0x22) {
    uVar2 = (undefined4)CONCAT71((int7)((ulong)uVar5 >> 8),!NAN(extraout_XMM0_Qa));
    if (extraout_XMM0_Qa != 0.0) {
      uVar2 = 0;
    }
    if ((char)uVar2 == '\0') goto LAB_00100950;
    uVar3 = movmskpd(uVar2,auVar7);
    if (((uVar3 & 1) != 0) || (str == ep)) goto LAB_001009c1;
    cVar1 = *ep;
    dVar8 = _LC41;
  }
  else {
LAB_00100950:
    dVar8 = _LC42 * extraout_XMM0_Qa + extraout_XMM0_Qa;
    if ((ep == str) || (dVar8 < 0.0)) goto LAB_001009c1;
    cVar1 = *ep;
  }
  if (cVar1 != '\0') {
    if (ep[1] != '\0') {
LAB_001009c1:
      uVar5 = quote(str);
      uVar6 = dcgettext(0,"invalid time interval %s",5);
      error(0,0,uVar6,uVar5);
                    /* WARNING: Subroutine does not return */
      usage(0x7d);
    }
    if (cVar1 == 'h') {
      dVar8 = dVar8 * __LC44;
    }
    else if (cVar1 < 'i') {
      if (cVar1 != 'd') goto LAB_001009c1;
      dVar8 = dVar8 * __LC45;
    }
    else if (cVar1 == 'm') {
      dVar8 = dVar8 * __LC43;
    }
    else if (cVar1 != 's') goto LAB_001009c1;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return _LC42 * dVar8 + dVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int main(int argc,char **argv)

{
  char **__argv;
  long lVar1;
  int iVar2;
  __pid_t _Var3;
  undefined8 uVar4;
  long lVar5;
  int *piVar6;
  undefined8 uVar7;
  uint uVar8;
  char *pcVar9;
  long in_FS_OFFSET;
  double duration;
  int status;
  sigset_t orig_set;
  sigaction sa;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  _exit_failure = 0x7d;
  atexit((__func *)&close_stdout);
  do {
    iVar2 = getopt_long(argc,argv,"+fk:ps:v",long_options,0);
    if (iVar2 == -1) {
      lVar5 = (long)_optind;
      if (1 < argc - _optind) {
        _optind = _optind + 1;
        duration = parse_duration(argv[lVar5]);
        __argv = argv + _optind;
        command = *__argv;
        if (foreground == false) {
          setpgid(0,0);
        }
        iVar2 = term_signal;
        sigemptyset((sigset_t *)&sa.sa_mask);
        sa.sa_flags = 0x10000000;
        sa.__sigaction_handler.sa_handler = cleanup;
        sigaction(0xe,(sigaction *)&sa,(sigaction *)0x0);
        sigaction(2,(sigaction *)&sa,(sigaction *)0x0);
        sigaction(3,(sigaction *)&sa,(sigaction *)0x0);
        sigaction(1,(sigaction *)&sa,(sigaction *)0x0);
        sigaction(0xf,(sigaction *)&sa,(sigaction *)0x0);
        sigaction(iVar2,(sigaction *)&sa,(sigaction *)0x0);
        signal(0x15,(__sighandler_t)0x1);
        signal(0x16,(__sighandler_t)0x1);
        sigemptyset((sigset_t *)&sa.sa_mask);
        sa.sa_flags = 0x10000000;
        sa.__sigaction_handler = (anon_union_8_2_5ad2d23e_for___sigaction_handler)0x100000;
        sigaction(0x11,(sigaction *)&sa,(sigaction *)0x0);
        unblock_signal(0x11);
        unblock_signal(0xe);
        iVar2 = term_signal;
        sigemptyset((sigset_t *)&sa);
        sigaddset((sigset_t *)&sa,0xe);
        sigaddset((sigset_t *)&sa,2);
        sigaddset((sigset_t *)&sa,3);
        sigaddset((sigset_t *)&sa,1);
        sigaddset((sigset_t *)&sa,0xf);
        sigaddset((sigset_t *)&sa,iVar2);
        sigaddset((sigset_t *)&sa,0x11);
        iVar2 = sigprocmask(0,(sigset_t *)&sa,(sigset_t *)&orig_set);
        if (iVar2 != 0) {
          uVar4 = dcgettext(0,"warning: sigprocmask",5);
          piVar6 = __errno_location();
          error(0,*piVar6,uVar4);
        }
        monitored_pid = fork();
        pcVar9 = "fork system call failed";
        if (monitored_pid != -1) {
          if (monitored_pid != 0) {
            settimeout(duration,true);
            while( true ) {
              _Var3 = waitpid(monitored_pid,&status,1);
              if (_Var3 != 0) break;
              sigsuspend((sigset_t *)&orig_set);
            }
            if (_Var3 < 0) {
              uVar4 = dcgettext(0,"error waiting for command",5);
              piVar6 = __errno_location();
              uVar8 = 0x7d;
              error(0,*piVar6,uVar4);
            }
            else {
              uVar8 = status & 0x7f;
              if (uVar8 == 0) {
                uVar8 = (uint)status >> 8 & 0xff;
              }
              else if ((char)uVar8 == '\0' || (char)((char)uVar8 + '\x01') < '\x01') {
                uVar8 = 1;
                uVar4 = dcgettext(0,"unknown status from command (%d)",5);
                error(0,0,uVar4,status);
              }
              else {
                if ((status & 0x80U) != 0) {
                  uVar4 = dcgettext(0,"the monitored command dumped core",5);
                  error(0,0,uVar4);
                }
                if (timed_out == 0) {
                  iVar2 = prctl(4);
                  if (iVar2 == 0) {
                    signal(uVar8,(__sighandler_t)0x0);
                    unblock_signal(uVar8);
                    raise(uVar8);
                  }
                  else {
                    uVar4 = dcgettext(0,"warning: disabling core dumps failed",5);
                    piVar6 = __errno_location();
                    error(0,*piVar6,uVar4);
                  }
                }
                if ((timed_out != 0) && (uVar8 == 9)) {
                  preserve_status = true;
                }
                uVar8 = uVar8 + 0x80;
              }
            }
            status = uVar8;
            if ((timed_out != 0) && (preserve_status == false)) {
              status = 0x7c;
              uVar8 = status;
            }
LAB_00101940:
            if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
              return uVar8;
            }
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          iVar2 = sigprocmask(2,(sigset_t *)&orig_set,(sigset_t *)0x0);
          if (iVar2 == 0) {
            signal(0x15,(__sighandler_t)0x0);
            signal(0x16,(__sighandler_t)0x0);
            execvp(*__argv,__argv);
            piVar6 = __errno_location();
            iVar2 = *piVar6;
            uVar4 = quote(command);
            uVar7 = dcgettext(0,"failed to run command %s",5);
            error(0,*piVar6,uVar7,uVar4);
            uVar8 = (iVar2 == 2) + 0x7e;
            goto LAB_00101940;
          }
          pcVar9 = "child failed to reset signal mask";
        }
        uVar4 = dcgettext(0,pcVar9,5);
        piVar6 = __errno_location();
        error(0,*piVar6,uVar4);
        uVar8 = 0x7d;
        goto LAB_00101940;
      }
      goto switchD_00101609_caseD_67;
    }
    if (0x76 < iVar2) goto switchD_00101609_caseD_67;
    if (iVar2 < 0x66) {
      if (iVar2 == -0x83) {
        uVar4 = proper_name_lite("Padraig Brady",&_LC48);
        version_etc(_stdout,"timeout","GNU coreutils",_Version,uVar4,0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar2 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      goto switchD_00101609_caseD_67;
    }
    switch(iVar2) {
    case 0x66:
      foreground = true;
      break;
    default:
      goto switchD_00101609_caseD_67;
    case 0x6b:
      kill_after = parse_duration(_optarg);
      break;
    case 0x70:
      preserve_status = true;
      break;
    case 0x73:
      term_signal = operand2sig(_optarg);
      if (term_signal == -1) {
switchD_00101609_caseD_67:
                    /* WARNING: Subroutine does not return */
        usage(0x7d);
      }
      break;
    case 0x76:
      verbose = true;
    }
  } while( true );
}


