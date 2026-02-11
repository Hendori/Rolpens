
void splitbuf_append_byte(long *param_1,undefined1 param_2)

{
  ulong __n;
  long lVar1;
  ulong uVar2;
  
  lVar1 = *param_1;
  __n = *(ulong *)(lVar1 + (long)(int)param_1[1] * 8);
  uVar2 = param_1[2] * 8;
  if (uVar2 <= __n) {
    lVar1 = xpalloc(lVar1,param_1 + 2,1,0x7fffffff,0x10);
    *param_1 = lVar1;
    memmove((void *)(lVar1 + param_1[2] * 8),(void *)(lVar1 + uVar2),__n);
    lVar1 = *param_1;
    uVar2 = param_1[2] * 8;
  }
  *(undefined1 *)(lVar1 + uVar2 + __n) = param_2;
  *(ulong *)(*param_1 + (long)(int)param_1[1] * 8) = __n + 1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void list_signal_handling(void)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  char *pcVar5;
  char *pcVar6;
  undefined *puVar7;
  long in_FS_OFFSET;
  sigset_t local_178;
  _union_1457 local_f8 [20];
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  sigemptyset(&local_178);
  iVar1 = sigprocmask(0,(sigset_t *)0x0,&local_178);
  if (iVar1 == 0) {
    iVar1 = 1;
    do {
      iVar2 = sigaction(iVar1,(sigaction *)0x0,(sigaction *)local_f8);
      if (iVar2 == 0) {
        if (local_f8[0].sa_handler == (__sighandler_t)0x1) {
          pcVar6 = "";
          puVar7 = &_LC1;
          iVar2 = sigismember(&local_178,iVar1);
          if (iVar2 != 0) {
            pcVar6 = "BLOCK";
          }
          pcVar5 = "IGNORE";
          if (iVar2 != 0) {
            puVar7 = &_LC3;
          }
        }
        else {
          pcVar5 = "";
          pcVar6 = "BLOCK";
          puVar7 = &_LC1;
          iVar2 = sigismember(&local_178,iVar1);
          if (iVar2 == 0) goto LAB_00100163;
        }
        iVar2 = sig2str(iVar1,local_58);
        if (iVar2 != 0) {
          __snprintf_chk(local_58,0x13,2,0x13,"SIG%d",iVar1);
        }
        __fprintf_chk(_stderr,2,"%-10s (%2d): %s%s%s\n",local_58,iVar1,pcVar6,puVar7,pcVar5);
      }
LAB_00100163:
      iVar1 = iVar1 + 1;
    } while (iVar1 != 0x41);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    uVar3 = dcgettext(0,"failed to get signal process mask",5);
    piVar4 = __errno_location();
    error(0x7d,*piVar4,uVar3);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void check_start_new_arg_part_0(long *param_1)

{
  int iVar1;
  ulong __n;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  size_t __n_00;
  long lVar6;
  
  lVar4 = *param_1;
  __n = *(ulong *)(lVar4 + (long)(int)param_1[1] * 8);
  uVar5 = param_1[2] * 8;
  if (uVar5 <= __n) {
    lVar4 = xpalloc(lVar4,param_1 + 2,1,0x7fffffff,0x10);
    *param_1 = lVar4;
    memmove((void *)(lVar4 + param_1[2] * 8),(void *)(lVar4 + uVar5),__n);
    lVar4 = *param_1;
    uVar5 = param_1[2] * 8;
  }
  *(undefined1 *)(lVar4 + uVar5 + __n) = 0;
  iVar1 = (int)param_1[1];
  lVar6 = (long)iVar1;
  __n_00 = __n + 1;
  lVar3 = param_1[3];
  lVar4 = *param_1;
  lVar2 = param_1[2];
  *(size_t *)(lVar4 + lVar6 * 8) = __n_00;
  if (lVar2 <= (int)lVar3 + iVar1 + 1) {
    lVar4 = xpalloc(lVar4,param_1 + 2,1,0x7fffffff,0x10);
    *param_1 = lVar4;
    memmove((void *)(lVar4 + param_1[2] * 8),(void *)(lVar4 + lVar2 * 8),__n_00);
    lVar4 = *param_1;
    __n_00 = *(size_t *)(lVar4 + lVar6 * 8);
  }
  *(size_t *)(lVar4 + 8 + lVar6 * 8) = __n_00;
  *(int *)(param_1 + 1) = iVar1 + 1;
  *(undefined1 *)((long)param_1 + 0x1c) = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void usage(int param_1)

{
  FILE *pFVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
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
  
  uVar5 = _program_name;
  ppuVar6 = &local_a8;
  local_30 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(_stderr,2,uVar3,uVar5);
    goto LAB_001003ca;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... [-] [NAME=VALUE]... [COMMAND [ARG]...]\n",5);
  __printf_chk(2,uVar3,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"Set each NAME to VALUE in the environment and run COMMAND.\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"  -a, --argv0=ARG      pass ARG as the zeroth argument of COMMAND\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -i, --ignore-environment  start with an empty environment\n  -0, --null           end each output line with NUL, not newline\n  -u, --unset=NAME     remove variable from the environment\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"  -C, --chdir=DIR      change working directory to DIR\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -S, --split-string=S  process and split S into separate arguments;\n                        used to pass multiple arguments on shebang lines\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --block-signal[=SIG]    block delivery of SIG signal(s) to COMMAND\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --default-signal[=SIG]  reset handling of SIG signal(s) to the default\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --ignore-signal[=SIG]   set handling of SIG signal(s) to do nothing\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --list-signal-handling  list non default signal handling to stderr\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -v, --debug          print verbose information for each processing step\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nA mere - implies -i.  If no COMMAND, print the resulting environment.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nSIG may be a signal name like \'PIPE\', or a signal number like \'13\'.\nWithout SIG, all known signals are included.  Multiple signals can be\ncomma-separated.  An empty SIG argument is a no-op.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  uVar5 = dcgettext(0,
                    "\nExit status:\n  125  if the %s command itself fails\n  126  if COMMAND is found but cannot be invoked\n  127  if COMMAND cannot be found\n  -    the exit status of COMMAND otherwise\n"
                    ,5);
  __printf_chk(2,uVar5,&_LC8);
  pcVar4 = "[";
  local_a8 = &_LC7;
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
    iVar2 = strcmp("env",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)ppuVar6 + 0x10);
    ppuVar6 = (undefined **)((long)ppuVar6 + 0x10);
  } while (pcVar4 != (char *)0x0);
  puVar7 = *(undefined **)((long)ppuVar6 + 8);
  if (puVar7 == (undefined *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    puVar7 = &_LC8;
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) goto LAB_0010076d;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC8);
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
LAB_0010076d:
      iVar2 = strncmp(pcVar4,"en_",3);
      pFVar1 = _stdout;
      if (iVar2 != 0) {
        pcVar4 = (char *)dcgettext(0,
                                   "Report any translation bugs to <https://translationproject.org/team/>\n"
                                   ,5);
        fputs_unlocked(pcVar4,pFVar1);
      }
    }
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar4 = "";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC8);
    if (puVar7 == &_LC8) {
      pcVar4 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,puVar7,pcVar4);
LAB_001003ca:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void parse_signal_action_params(long param_1,char param_2)

{
  long lVar1;
  int iVar2;
  char *__s;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = signals;
  if (param_1 == 0) {
    iVar2 = (-(uint)(param_2 == '\0') & 2) + 2;
    *(int *)(signals + 4) = iVar2;
    *(int *)(lVar1 + 8) = iVar2;
    *(int *)(lVar1 + 0xc) = iVar2;
    *(int *)(lVar1 + 0x10) = iVar2;
    *(int *)(lVar1 + 0x14) = iVar2;
    *(int *)(lVar1 + 0x18) = iVar2;
    *(int *)(lVar1 + 0x1c) = iVar2;
    *(int *)(lVar1 + 0x20) = iVar2;
    *(int *)(lVar1 + 0x24) = iVar2;
    *(int *)(lVar1 + 0x28) = iVar2;
    *(int *)(lVar1 + 0x2c) = iVar2;
    *(int *)(lVar1 + 0x30) = iVar2;
    *(int *)(lVar1 + 0x34) = iVar2;
    *(int *)(lVar1 + 0x38) = iVar2;
    *(int *)(lVar1 + 0x3c) = iVar2;
    *(int *)(lVar1 + 0x40) = iVar2;
    *(int *)(lVar1 + 0x44) = iVar2;
    *(int *)(lVar1 + 0x48) = iVar2;
    *(int *)(lVar1 + 0x4c) = iVar2;
    *(int *)(lVar1 + 0x50) = iVar2;
    *(int *)(lVar1 + 0x54) = iVar2;
    *(int *)(lVar1 + 0x58) = iVar2;
    *(int *)(lVar1 + 0x5c) = iVar2;
    *(int *)(lVar1 + 0x60) = iVar2;
    *(int *)(lVar1 + 100) = iVar2;
    *(int *)(lVar1 + 0x68) = iVar2;
    *(int *)(lVar1 + 0x6c) = iVar2;
    *(int *)(lVar1 + 0x70) = iVar2;
    *(int *)(lVar1 + 0x74) = iVar2;
    *(int *)(lVar1 + 0x78) = iVar2;
    *(int *)(lVar1 + 0x7c) = iVar2;
    *(int *)(lVar1 + 0x80) = iVar2;
    *(int *)(lVar1 + 0x84) = iVar2;
    *(int *)(lVar1 + 0x88) = iVar2;
    *(int *)(lVar1 + 0x8c) = iVar2;
    *(int *)(lVar1 + 0x90) = iVar2;
    *(int *)(lVar1 + 0x94) = iVar2;
    *(int *)(lVar1 + 0x98) = iVar2;
    *(int *)(lVar1 + 0x9c) = iVar2;
    *(int *)(lVar1 + 0xa0) = iVar2;
    *(int *)(lVar1 + 0xa4) = iVar2;
    *(int *)(lVar1 + 0xa8) = iVar2;
    *(int *)(lVar1 + 0xac) = iVar2;
    *(int *)(lVar1 + 0xb0) = iVar2;
    *(int *)(lVar1 + 0xb4) = iVar2;
    *(int *)(lVar1 + 0xb8) = iVar2;
    *(int *)(lVar1 + 0xbc) = iVar2;
    *(int *)(lVar1 + 0xc0) = iVar2;
    *(int *)(lVar1 + 0xc4) = iVar2;
    *(int *)(lVar1 + 200) = iVar2;
    *(int *)(lVar1 + 0xcc) = iVar2;
    *(int *)(lVar1 + 0xd0) = iVar2;
    *(int *)(lVar1 + 0xd4) = iVar2;
    *(int *)(lVar1 + 0xd8) = iVar2;
    *(int *)(lVar1 + 0xdc) = iVar2;
    *(int *)(lVar1 + 0xe0) = iVar2;
    *(int *)(lVar1 + 0xe4) = iVar2;
    *(int *)(lVar1 + 0xe8) = iVar2;
    *(int *)(lVar1 + 0xec) = iVar2;
    *(int *)(lVar1 + 0xf0) = iVar2;
    *(int *)(lVar1 + 0xf4) = iVar2;
    *(int *)(lVar1 + 0xf8) = iVar2;
    *(int *)(lVar1 + 0xfc) = iVar2;
    *(int *)(lVar1 + 0x100) = iVar2;
    return;
  }
  __s = (char *)xstrdup();
  pcVar3 = strtok(__s,",");
  if (pcVar3 != (char *)0x0) {
    do {
      iVar2 = operand2sig();
      if (iVar2 == 0) {
        uVar4 = quote(pcVar3);
        uVar5 = dcgettext(0,"%s: invalid signal",5);
        error(0,0,uVar5,uVar4);
LAB_001009de:
                    /* WARNING: Subroutine does not return */
        usage(_exit_failure);
      }
      if (iVar2 < 1) goto LAB_001009de;
      *(uint *)(signals + (long)iVar2 * 4) = (-(uint)(param_2 == '\0') & 2) + 1;
      pcVar3 = strtok((char *)0x0,",");
    } while (pcVar3 != (char *)0x0);
  }
  free(__s);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void parse_block_signal_params(long param_1,char param_2)

{
  int iVar1;
  int iVar2;
  char *__s;
  char *pcVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *__set;
  
  if (param_1 == 0) {
    if (param_2 == '\0') {
      sigfillset((sigset_t *)unblock_signals);
      __set = block_signals;
    }
    else {
      sigfillset((sigset_t *)block_signals);
      __set = unblock_signals;
    }
    sigemptyset((sigset_t *)__set);
    sig_mask_changed = 1;
    return;
  }
  if (sig_mask_changed == '\0') goto LAB_00100b48;
  while( true ) {
    __s = (char *)xstrdup(param_1);
    pcVar3 = strtok(__s,",");
    if (pcVar3 == (char *)0x0) break;
    if (param_2 == '\0') goto LAB_00100a58;
    param_2 = ' ';
    while( true ) {
      iVar1 = operand2sig(pcVar3);
      if (iVar1 == 0) goto LAB_00100bb8;
      if (iVar1 < 1) goto LAB_00100be7;
      iVar2 = sigaddset((sigset_t *)block_signals,iVar1);
      if (iVar2 == -1) break;
      sigdelset((sigset_t *)unblock_signals,iVar1);
      pcVar3 = strtok((char *)0x0,",");
      if (pcVar3 == (char *)0x0) goto LAB_00100a9d;
    }
    param_1 = dcgettext(0,"failed to block signal %d",5);
    piVar4 = __errno_location();
    error(0x7d,*piVar4,param_1,iVar1);
LAB_00100b48:
    sigemptyset((sigset_t *)block_signals);
    sigemptyset((sigset_t *)unblock_signals);
    sig_mask_changed = '\x01';
  }
  goto LAB_00100a9d;
  while( true ) {
    if (iVar1 < 1) goto LAB_00100be7;
    iVar2 = sigaddset((sigset_t *)unblock_signals,iVar1);
    if (iVar2 != -1) {
      sigdelset((sigset_t *)block_signals,iVar1);
    }
    pcVar3 = strtok((char *)0x0,",");
    if (pcVar3 == (char *)0x0) break;
LAB_00100a58:
    iVar1 = operand2sig(pcVar3);
    if (iVar1 == 0) {
LAB_00100bb8:
      uVar5 = quote(pcVar3);
      uVar6 = dcgettext(0,"%s: invalid signal",5);
      error(0,0,uVar6,uVar5);
LAB_00100be7:
                    /* WARNING: Subroutine does not return */
      usage(_exit_failure);
    }
  }
LAB_00100a9d:
  free(__s);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 main(int param_1,FILE *param_2)

{
  byte bVar1;
  ulong __n;
  byte bVar2;
  bool bVar3;
  undefined4 uVar4;
  long lVar5;
  byte *pbVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  size_t sVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  int *piVar17;
  uint uVar18;
  ulong uVar19;
  undefined1 *puVar20;
  FILE *pFVar21;
  FILE *pFVar22;
  char **ppcVar23;
  byte *pbVar24;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  long *plVar25;
  char *pcVar26;
  char *pcVar27;
  long lVar28;
  long lVar29;
  byte *__s;
  long in_FS_OFFSET;
  bool bVar30;
  bool bVar31;
  char cVar32;
  char cVar33;
  int local_14c;
  FILE *local_148;
  byte *local_138;
  byte *local_130;
  FILE *local_118;
  int local_110;
  long local_108;
  int local_100;
  char local_fc;
  _union_1457 local_f8 [20];
  char *local_40;
  
  bVar7 = 0;
  local_40 = *(char **)(in_FS_OFFSET + 0x28);
  set_program_name(*(undefined8 *)param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  _exit_failure = 0x7d;
  atexit((__func *)&close_stdout);
  puVar12 = (undefined8 *)xmalloc(0x104);
  signals = puVar12;
  *puVar12 = 0;
  *(undefined8 *)((long)puVar12 + 0xfc) = 0;
  uVar19 = (ulong)(((int)puVar12 - (int)(undefined8 *)((ulong)(puVar12 + 1) & 0xfffffffffffffff8)) +
                   0x104U >> 3);
  puVar12 = (undefined8 *)((ulong)(puVar12 + 1) & 0xfffffffffffffff8);
  for (; uVar19 != 0; uVar19 = uVar19 - 1) {
    *puVar12 = 0;
    puVar12 = puVar12 + (ulong)bVar7 * -2 + 1;
  }
  bVar3 = false;
  local_130 = (byte *)0x0;
  local_138 = (byte *)0x0;
  bVar31 = false;
  local_14c = param_1;
  local_148 = param_2;
LAB_00101b20:
  while( true ) {
    puVar20 = longopts;
    iVar8 = getopt_long(local_14c,local_148,shortopts,longopts,0);
    iVar9 = _optind;
    pbVar6 = _optarg;
    if (iVar8 == -1) break;
    if (0x83 < iVar8) goto switchD_00101b76_caseD_31;
    if (iVar8 < 0x30) {
LAB_001020f0:
      cVar33 = SBORROW4(iVar8,-0x83);
      cVar32 = iVar8 + 0x83 < 0;
      iVar9 = iVar8;
      if (iVar8 == -0x83) {
        uVar14 = proper_name_lite("Assaf Gordon","Assaf Gordon");
        uVar15 = proper_name_lite("David MacKenzie","David MacKenzie");
        uVar16 = proper_name_lite("Richard Mlynarik","Richard Mlynarik");
        version_etc(_stdout,&_LC8,"GNU coreutils",_Version,uVar16,uVar15,uVar14,0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      goto LAB_00102ba4;
    }
    switch(iVar8) {
    case 0x30:
      bVar3 = true;
      break;
    default:
      goto switchD_00101b76_caseD_31;
    case 0x43:
      local_138 = _optarg;
      break;
    case 0x53:
      local_14c = local_14c - _optind;
      lVar28 = (long)(local_14c + 2);
      local_118 = (FILE *)xnmalloc(lVar28,0x10);
      local_110 = 1;
      local_fc = '\x01';
      local_118->_IO_read_ptr = (char *)0x0;
      bVar7 = *pbVar6;
      local_108 = lVar28;
      local_100 = local_14c;
      if (bVar7 != 0) {
        bVar30 = false;
        bVar2 = 0;
        __s = pbVar6;
LAB_00101ca8:
        if ((char)bVar7 < '(') {
          if ((char)bVar7 < '\t') goto switchD_00101cc8_caseD_e;
          switch(bVar7) {
          case 9:
          case 10:
          case 0xb:
          case 0xc:
          case 0xd:
          case 0x20:
            if (bVar2 != 0 || bVar30) break;
            local_fc = '\x01';
            bVar30 = false;
            sVar13 = strspn((char *)__s," \t\n\v\f\r");
            bVar2 = 0;
            __s = __s + sVar13;
            goto LAB_00101d35;
          case 0x22:
            if (bVar30) break;
            bVar2 = bVar2 ^ 1;
joined_r0x00101e91:
            if (local_fc != '\0') {
              check_start_new_arg_part_0();
            }
            goto LAB_00101d31;
          case 0x23:
            if (local_fc == '\0') goto LAB_00101cf4;
            goto LAB_00101d61;
          case 0x24:
            if (!bVar30) {
              if (__s[1] == 0x7b) {
                bVar7 = __s[2];
                if ('Z' < (char)bVar7) goto LAB_001020a3;
                if ('@' < (char)bVar7) goto LAB_00101ed2;
              }
              goto LAB_001020c0;
            }
            break;
          case 0x27:
            if (bVar2 == 0) {
              bVar30 = (bool)(bVar30 ^ 1);
              goto joined_r0x00101e91;
            }
          }
        }
        else {
          if (bVar7 != 0x5c) goto switchD_00101cc8_caseD_e;
          bVar1 = __s[1];
          if (!bVar30) {
            if (bVar1 == 0) {
              pcVar26 = "invalid backslash at end of string in -S";
              goto LAB_00102cca;
            }
            if ((byte)(bVar1 - 0x22) < 0x55) goto LAB_0010203b;
switchD_00102058_caseD_25:
            uVar14 = dcgettext(0,"invalid sequence \'\\%c\' in -S",5);
            bVar7 = error(0x7d,0,uVar14,(int)(char)bVar1);
            bVar2 = bVar1;
LAB_001020a3:
            if (((byte)(bVar7 + 0x9f) < 0x1a) || (bVar7 == 0x5f)) {
LAB_00101ed2:
              pbVar24 = __s + 3;
              do {
                bVar7 = *pbVar24;
                if ((char)bVar7 < '[') {
                  if (((char)bVar7 < 'A') && (9 < (byte)(bVar7 - 0x30))) break;
                }
                else if ((0x19 < (byte)(bVar7 + 0x9f)) && (bVar7 != 0x5f)) goto code_r0x00101f06;
                pbVar24 = pbVar24 + 1;
              } while( true );
            }
            goto LAB_001020c0;
          }
          if ((bVar1 != 0x5c) && (bVar1 != 0x27)) goto switchD_00101cc8_caseD_e;
LAB_0010203b:
          pbVar24 = __s + 1;
          switch(bVar1) {
          case 0x22:
          case 0x23:
          case 0x24:
          case 0x27:
          case 0x5c:
            __s = pbVar24;
            bVar7 = bVar1;
            break;
          default:
            goto switchD_00102058_caseD_25;
          case 0x5f:
            if (bVar2 == 0) {
              local_fc = '\x01';
              __s = __s + 2;
              goto LAB_00101d35;
            }
            __s = pbVar24;
            bVar7 = 0x20;
            break;
          case 99:
            if (bVar2 != 0) {
              pcVar26 = "\'\\c\' must not appear in double-quoted -S string";
              goto LAB_00102cca;
            }
            goto LAB_00101d61;
          case 0x66:
            __s = pbVar24;
            bVar7 = 0xc;
            break;
          case 0x6e:
            __s = pbVar24;
            bVar7 = 10;
            break;
          case 0x72:
            __s = pbVar24;
            bVar7 = 0xd;
            break;
          case 0x74:
            __s = pbVar24;
            bVar7 = 9;
            break;
          case 0x76:
            __s = pbVar24;
            bVar7 = 0xb;
          }
        }
switchD_00101cc8_caseD_e:
        if (local_fc != '\0') {
          check_start_new_arg_part_0(&local_118);
        }
LAB_00101cf4:
        lVar28 = local_108;
        __n = *(ulong *)(&local_118->_flags + (long)local_110 * 2);
        uVar19 = local_108 * 8;
        if (uVar19 <= __n) {
          local_118 = (FILE *)xpalloc(local_118,&local_108,1,0x7fffffff);
          memmove(&local_118->_flags + local_108 * 2,&local_118->_flags + lVar28 * 2,__n);
          uVar19 = local_108 * 8;
        }
        *(byte *)((long)&local_118->_flags + __n + uVar19) = bVar7;
        *(ulong *)(&local_118->_flags + (long)local_110 * 2) = __n + 1;
LAB_00101d31:
        __s = __s + 1;
        goto LAB_00101d35;
      }
      goto LAB_00101d61;
    case 0x61:
      local_130 = _optarg;
      break;
    case 0x69:
      bVar31 = true;
      break;
    case 0x75:
      if (usvars_used == usvars_alloc) {
        usvars = xpalloc(usvars,&usvars_alloc,1,0xffffffffffffffff);
      }
      lVar28 = usvars_used * 8;
      usvars_used = usvars_used + 1;
      *(byte **)(usvars + lVar28) = pbVar6;
      break;
    case 0x76:
      dev_debug = '\x01';
      break;
    case 0x80:
      parse_signal_action_params(_optarg,1);
      parse_block_signal_params(_optarg,0);
      break;
    case 0x81:
      parse_signal_action_params(_optarg,0);
      break;
    case 0x82:
      parse_block_signal_params(_optarg,1);
      break;
    case 0x83:
      goto switchD_00101b76_caseD_83;
    }
  }
  if ((_optind < local_14c) &&
     (puVar20 = (undefined1 *)local_148,
     iVar8 = strcmp(*(char **)(&local_148->_flags + (long)_optind * 2),"-"), iVar8 == 0)) {
    _optind = iVar9 + 1;
  }
  else if (!bVar31) {
    pcVar26 = puVar20;
    if (0 < usvars_used) {
      lVar29 = 0;
      lVar28 = usvars;
      do {
        cVar32 = dev_debug;
        if (dev_debug != '\0') {
          puVar20 = *(undefined1 **)(lVar28 + lVar29 * 8);
          __fprintf_chk(_stderr,2,"unset:    %s\n");
        }
        lVar28 = usvars;
        puVar12 = (undefined8 *)(lVar29 * 8 + usvars);
        iVar9 = unsetenv((char *)*puVar12);
        lVar5 = usvars_used;
        if (iVar9 != 0) goto LAB_00102c6f;
        lVar29 = lVar29 + 1;
        pcVar26 = puVar20;
        iVar9 = _optind;
        if (usvars_used <= lVar29) goto joined_r0x0010221f;
      } while (cVar32 != '\0');
      do {
        puVar12 = (undefined8 *)(lVar28 + lVar29 * 8);
        iVar9 = unsetenv((char *)*puVar12);
        if (iVar9 != 0) goto LAB_00102c6f;
        lVar29 = lVar29 + 1;
        pcVar26 = puVar20;
        iVar9 = _optind;
      } while (lVar29 < lVar5);
    }
    goto joined_r0x0010221f;
  }
  if (dev_debug != '\0') {
    puVar20 = (undefined1 *)_stderr;
    fwrite("cleaning environ\n",1,0x11,_stderr);
  }
  _environ = &dummy_environ_0;
  pcVar26 = puVar20;
  iVar9 = _optind;
joined_r0x0010221f:
  do {
    if (local_14c <= iVar9) goto LAB_001023aa;
    lVar28 = (long)iVar9;
    pFVar21 = *(FILE **)(&local_148->_flags + lVar28 * 2);
    pcVar27 = strchr((char *)pFVar21,0x3d);
    if (pcVar27 == (char *)0x0) {
      if ((iVar9 < local_14c) && (bVar3)) goto LAB_00102c18;
      goto LAB_001023aa;
    }
    if (dev_debug != '\0') {
      __fprintf_chk(_stderr,2,"setenv:   %s\n");
      lVar28 = (long)_optind;
      pcVar26 = (char *)pFVar21;
    }
    iVar9 = putenv(*(char **)(&local_148->_flags + lVar28 * 2));
    if (iVar9 != 0) {
      *pcVar27 = '\0';
      uVar14 = quote(*(undefined8 *)(&local_148->_flags + (long)_optind * 2));
      pcVar26 = "cannot set %s";
      goto LAB_00102bf5;
    }
    _optind = _optind + 1;
    iVar9 = _optind;
  } while( true );
LAB_00102c6f:
  uVar14 = quote(*puVar12);
  pcVar26 = "cannot unset %s";
LAB_00102bf5:
  uVar15 = dcgettext(0,pcVar26,5);
  piVar17 = __errno_location();
  error(0x7d,*piVar17,uVar15,uVar14);
LAB_00102c18:
  pcVar27 = "cannot specify --null (-0) with command";
  goto LAB_001028e9;
switchD_00101b76_caseD_83:
  report_signal_handling = '\x01';
  goto LAB_00101b20;
code_r0x00101f06:
  if (bVar7 != 0x7d) {
LAB_001020c0:
    uVar14 = dcgettext(0,"only ${VARNAME} expansion is supported, error at: %s",5);
    iVar8 = error(0x7d,0,uVar14,__s);
    goto LAB_001020f0;
  }
  if (vnlen <= (long)(pbVar24 + (-2 - (long)__s))) {
    free(varname);
    varname = (char *)xpalloc(0,&vnlen,pbVar24 + ((-1 - (long)__s) - vnlen),0xffffffffffffffff);
  }
  pcVar26 = varname;
  memcpy(varname,__s + 2,(size_t)(pbVar24 + (-2 - (long)__s)));
  pcVar26[(long)(pbVar24 + (-2 - (long)__s))] = '\0';
  pcVar26 = getenv(pcVar26);
  if (pcVar26 == (char *)0x0) {
    if (dev_debug != '\0') {
      __fprintf_chk(_stderr,2,"replacing ${%s} with null string\n");
    }
  }
  else {
    if (local_fc != '\0') {
      check_start_new_arg_part_0(&local_118);
    }
    if (dev_debug != '\0') {
      quote(pcVar26);
      __fprintf_chk(_stderr,2,"expanding ${%s} into %s\n");
    }
    cVar32 = *pcVar26;
    while (cVar32 != '\0') {
      pcVar26 = pcVar26 + 1;
      splitbuf_append_byte(&local_118,(int)cVar32);
      cVar32 = *pcVar26;
    }
  }
  pcVar26 = strchr((char *)__s,0x7d);
  __s = (byte *)(pcVar26 + 1);
LAB_00101d35:
  bVar7 = *__s;
  if (bVar7 == 0) goto code_r0x00101d41;
  goto LAB_00101ca8;
code_r0x00101d41:
  if ((bVar2 != 0) || (bVar30)) {
    do {
      pcVar26 = "no terminating quote in -S string";
LAB_00102cca:
      uVar14 = dcgettext(0,pcVar26,5);
      error(0x7d,0,uVar14);
    } while( true );
  }
LAB_00101d61:
  splitbuf_append_byte(&local_118,0);
  iVar9 = local_110;
  pFVar21 = local_118;
  if (local_110 < 2) {
    uVar4 = *(undefined4 *)&local_148->field_0x4;
    local_118->_flags = local_148->_flags;
    *(undefined4 *)&local_118->field_0x4 = uVar4;
    goto LAB_00101e07;
  }
  uVar18 = local_110 - 1;
  if (local_110 == 2) {
    lVar28 = 1;
LAB_00101de1:
    *(char **)(&local_118->_flags + lVar28 * 2) =
         (char *)((long)&local_118->_flags +
                 local_108 * 8 + *(long *)(&local_118->_flags + lVar28 * 2));
  }
  else {
    pFVar22 = local_118;
    do {
      ppcVar23 = &pFVar22->_IO_read_end;
      pFVar22->_IO_read_ptr = pFVar22->_IO_read_ptr + (long)(&local_118->_flags + local_108 * 2);
      pFVar22->_IO_read_end = pFVar22->_IO_read_end + (long)(&local_118->_flags + local_108 * 2);
      pFVar22 = (FILE *)ppcVar23;
    } while (ppcVar23 != (char **)(&local_118->_flags + (ulong)(uVar18 >> 1) * 4));
    if ((uVar18 & 1) != 0) {
      lVar28 = (long)(int)(uVar18 | 1);
      goto LAB_00101de1;
    }
  }
  bVar30 = dev_debug != '\0';
  uVar4 = *(undefined4 *)&local_148->field_0x4;
  local_118->_flags = local_148->_flags;
  *(undefined4 *)&local_118->field_0x4 = uVar4;
  if (bVar30) {
    uVar14 = quote(pbVar6);
    __fprintf_chk(_stderr,2,"split -S:  %s\n",uVar14);
    if (dev_debug != '\0') {
      uVar14 = quote(pFVar21->_IO_read_ptr);
      __fprintf_chk(_stderr,2," into:    %s\n",uVar14);
    }
    if (iVar9 != 2) {
      pFVar22 = pFVar21;
      while (dev_debug != '\0') {
        uVar14 = quote(pFVar22->_IO_read_end);
        __fprintf_chk(_stderr,2,"     &    %s\n",uVar14);
        if (pFVar22 == (FILE *)(&pFVar21->_flags + (ulong)(iVar9 - 3) * 2)) break;
        pFVar22 = (FILE *)&pFVar22->_IO_read_ptr;
      }
    }
  }
LAB_00101e07:
  memcpy(&pFVar21->_flags + (long)iVar9 * 2,&local_148->_flags + (long)_optind * 2,
         (long)(local_14c + 1) << 3);
  local_14c = local_14c + iVar9;
  local_148 = pFVar21;
  _optind = 0;
  goto LAB_00101b20;
LAB_001023aa:
  if (((local_138 == (byte *)0x0) ||
      (pcVar27 = "must specify command with --chdir (-C)", iVar9 < local_14c)) &&
     ((local_130 == (byte *)0x0 ||
      (pcVar27 = "must specify command with --argv0 (-a)", iVar9 < local_14c)))) {
    if (local_14c <= iVar9) {
      lVar28 = *_environ;
      if (lVar28 != 0) {
        plVar25 = _environ;
        do {
          plVar25 = plVar25 + 1;
          __printf_chk(2,&_LC74,lVar28,-!bVar3 & 10);
          lVar28 = *plVar25;
        } while (lVar28 != 0);
      }
      uVar14 = 0;
      goto LAB_0010243f;
    }
    lVar28 = 4;
    iVar9 = 1;
    do {
      iVar8 = *(int *)((long)signals + lVar28);
      if (iVar8 != 0) {
        iVar10 = sigaction(iVar9,(sigaction *)0x0,(sigaction *)local_f8);
        bVar31 = (iVar8 - 2U & 0xfffffffd) == 0;
        if (iVar10 == 0) {
LAB_001025f7:
          local_f8[0]._1_7_ = 0;
          local_f8[0]._0_1_ = 1 < iVar8 - 1U;
          iVar10 = sigaction(iVar9,(sigaction *)local_f8,(sigaction *)0x0);
          if ((iVar10 == 0) || (bVar31)) {
LAB_001025a5:
            if (dev_debug != '\0') {
              iVar11 = sig2str(iVar9);
              uVar14 = extraout_RDX;
              if (iVar11 != 0) {
                pcVar26 = (char *)0x13;
                __snprintf_chk(&stack0xffffffffffffffa8,0x13,2,0x13,"SIG%d",iVar9);
                uVar14 = extraout_RDX_00;
              }
              if (dev_debug != '\0') {
                pcVar26 = " (failure ignored)";
                if (iVar10 == 0) {
                  pcVar26 = &_LC1;
                }
                pcVar27 = "DEFAULT";
                if (1 < iVar8 - 1U) {
                  pcVar27 = "IGNORE";
                }
                __fprintf_chk(_stderr,2,"Reset signal %s (%d) to %s%s\n",&stack0xffffffffffffffa8,
                              iVar9,pcVar27,pcVar26,uVar14);
              }
            }
            goto LAB_001025b2;
          }
          pcVar26 = "failed to set signal action for signal %d";
        }
        else {
          if (bVar31) {
            if (iVar10 == 0) goto LAB_001025f7;
            goto LAB_001025a5;
          }
          pcVar26 = "failed to get signal action for signal %d";
        }
        uVar14 = dcgettext(0,pcVar26,5);
        piVar17 = __errno_location();
        error(0x7d,*piVar17,uVar14,iVar9);
        goto LAB_00102cb9;
      }
LAB_001025b2:
      iVar9 = iVar9 + 1;
      lVar28 = lVar28 + 4;
    } while (iVar9 != 0x41);
    if (sig_mask_changed == '\0') {
LAB_001026dc:
      if (report_signal_handling != '\0') {
        list_signal_handling();
      }
      if (local_138 != (byte *)0x0) {
        if (dev_debug != '\0') {
          uVar14 = quotearg_style(4,local_138);
          __fprintf_chk(_stderr,2,"chdir:    %s\n",uVar14);
        }
        iVar9 = chdir((char *)local_138);
        if (iVar9 != 0) {
          uVar14 = quotearg_style(4,local_138);
          pcVar26 = "cannot change directory to %s";
          goto LAB_00102bf5;
        }
      }
      lVar28 = (long)_optind;
      pcVar26 = *(char **)(&local_148->_flags + lVar28 * 2);
      if (local_130 != (byte *)0x0) {
        if (dev_debug != '\0') {
          uVar14 = quotearg_style(4,local_130);
          __fprintf_chk(_stderr,2,"argv0:     %s\n",uVar14);
          lVar28 = (long)_optind;
        }
        *(byte **)(&local_148->_flags + (long)(int)lVar28 * 2) = local_130;
      }
      if (dev_debug != '\0') {
        __fprintf_chk(_stderr,2,"executing: %s\n",pcVar26);
        for (lVar28 = (long)_optind; (int)lVar28 < local_14c; lVar28 = lVar28 + 1) {
          if (dev_debug != '\0') {
            uVar14 = quote(*(undefined8 *)(&local_148->_flags + lVar28 * 2));
            __fprintf_chk(_stderr,2,"   arg[%d]= %s\n",(int)lVar28 - _optind,uVar14);
          }
        }
        lVar28 = (long)_optind;
      }
      execvp(pcVar26,(char **)(&local_148->_flags + lVar28 * 2));
      piVar17 = __errno_location();
      if (*piVar17 == 2) {
        uVar14 = quote(pcVar26);
        error(0,*piVar17,&_LC85,uVar14);
        pcVar26 = strpbrk(pcVar26," \t\n\v\f\r");
        if (pcVar26 != (char *)0x0) {
          uVar14 = dcgettext(0,"use -[v]S to pass options in shebang lines",5);
          error(0,0,uVar14);
        }
        uVar14 = 0x7f;
      }
      else {
        uVar14 = quote(pcVar26);
        error(0,*piVar17,&_LC85,uVar14);
        uVar14 = 0x7e;
      }
LAB_0010243f:
      if (local_40 == *(char **)(in_FS_OFFSET + 0x28)) {
        return uVar14;
      }
LAB_00102cb9:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    iVar10 = 1;
    sigemptyset((sigset_t *)local_f8);
    iVar8 = sigprocmask(0,(sigset_t *)0x0,(sigset_t *)local_f8);
    iVar9 = (int)pcVar26;
    pcVar27 = "failed to get signal process mask";
    if (iVar8 == 0) {
      do {
        iVar9 = sigismember((sigset_t *)block_signals,iVar10);
        if (iVar9 == 0) {
          iVar9 = sigismember((sigset_t *)unblock_signals,iVar10);
          if (iVar9 != 0) {
            pcVar27 = "UNBLOCK";
            sigdelset((sigset_t *)local_f8,iVar10);
            if (dev_debug != '\0') goto LAB_00102aa8;
          }
        }
        else {
          sigaddset((sigset_t *)local_f8,iVar10);
          if (dev_debug != '\0') {
            pcVar27 = "BLOCK";
LAB_00102aa8:
            pFVar21 = (FILE *)&stack0xffffffffffffffa8;
            iVar9 = sig2str(iVar10,pFVar21);
            if (iVar9 != 0) {
              pcVar26 = (char *)0x13;
              __snprintf_chk(pFVar21,0x13,2,0x13,"SIG%d",iVar10);
            }
            if (dev_debug != '\0') {
              __fprintf_chk(_stderr,2,"signal %s (%d) mask set to %s\n",pFVar21,iVar10,pcVar27);
              pcVar26 = (char *)pFVar21;
            }
          }
        }
        iVar9 = (int)pcVar26;
        iVar10 = iVar10 + 1;
      } while (iVar10 != 0x41);
      iVar8 = sigprocmask(2,(sigset_t *)local_f8,(sigset_t *)0x0);
      if (iVar8 == 0) goto LAB_001026dc;
      pcVar27 = "failed to set signal process mask";
    }
    uVar14 = dcgettext(0,pcVar27,5);
    piVar17 = __errno_location();
    cVar33 = '\0';
    cVar32 = '\0';
    iVar8 = error(0x7d,*piVar17,uVar14);
LAB_00102ba4:
    if (cVar33 != cVar32) goto switchD_00101b76_caseD_31;
    if (iVar8 < 0xe) {
      if (iVar8 < 9) {
        if (iVar8 == -0x82) {
                    /* WARNING: Subroutine does not return */
          usage(0);
        }
        goto switchD_00101b76_caseD_31;
      }
    }
    else if (iVar8 != 0x20) goto switchD_00101b76_caseD_31;
    uVar14 = dcgettext(0,"invalid option -- \'%c\'",5);
    error(0,0,uVar14,iVar9);
    pcVar27 = "use -[v]S to pass options in shebang lines";
  }
LAB_001028e9:
  uVar14 = dcgettext(0,pcVar27,5);
  error(0,0,uVar14);
switchD_00101b76_caseD_31:
                    /* WARNING: Subroutine does not return */
  usage(0x7d);
}


