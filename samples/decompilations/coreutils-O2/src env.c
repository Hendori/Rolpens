
void splitbuf_grow(long *param_1)

{
  long lVar1;
  size_t __n;
  long lVar2;
  
  lVar1 = param_1[2];
  __n = *(size_t *)(*param_1 + (long)(int)param_1[1] * 8);
  lVar2 = xpalloc(*param_1,param_1 + 2,1,0x7fffffff,0x10);
  *param_1 = lVar2;
  memmove((void *)(lVar2 + param_1[2] * 8),(void *)(lVar2 + lVar1 * 8),__n);
  return;
}



void splitbuf_append_byte(long *param_1,undefined1 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *param_1;
  uVar1 = *(ulong *)(lVar3 + (long)(int)param_1[1] * 8);
  uVar2 = param_1[2] << 3;
  if (uVar2 <= uVar1) {
    splitbuf_grow();
    lVar3 = *param_1;
    uVar2 = param_1[2] << 3;
  }
  *(undefined1 *)(lVar3 + uVar2 + uVar1) = param_2;
  *(ulong *)(*param_1 + (long)(int)param_1[1] * 8) = uVar1 + 1;
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
          if (iVar2 == 0) goto LAB_00100173;
        }
        iVar2 = sig2str(iVar1,local_58);
        if (iVar2 != 0) {
          __snprintf_chk(local_58,0x13,2,0x13,"SIG%d",iVar1);
        }
        __fprintf_chk(_stderr,2,"%-10s (%2d): %s%s%s\n",local_58,iVar1,pcVar6,puVar7,pcVar5);
      }
LAB_00100173:
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
  
  splitbuf_append_byte(param_1,0);
  iVar1 = (int)param_1[1];
  if (param_1[2] <= (long)((int)param_1[3] + iVar1 + 1)) {
    splitbuf_grow(param_1);
  }
  *(undefined8 *)(*param_1 + 8 + (long)iVar1 * 8) = *(undefined8 *)(*param_1 + (long)iVar1 * 8);
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
    goto LAB_0010032a;
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
    if (pcVar4 != (char *)0x0) goto LAB_001006cd;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC8);
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
LAB_001006cd:
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
LAB_0010032a:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void parse_signal_action_params(long param_1,char param_2)

{
  int iVar1;
  char *__s;
  char *pcVar2;
  int *piVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int *piVar7;
  
  if (param_1 == 0) {
    iVar1 = (-(uint)(param_2 == '\0') & 2) + 2;
    piVar7 = (int *)(signals + 0x104);
    piVar3 = (int *)(signals + 4);
    do {
      *piVar3 = iVar1;
      piVar3[1] = iVar1;
      piVar3[2] = iVar1;
      piVar3[3] = iVar1;
      piVar4 = piVar3 + 8;
      piVar3[4] = iVar1;
      piVar3[5] = iVar1;
      piVar3[6] = iVar1;
      piVar3[7] = iVar1;
      piVar3 = piVar4;
    } while (piVar7 != piVar4);
    return;
  }
  __s = (char *)xstrdup();
  pcVar2 = strtok(__s,",");
  if (pcVar2 != (char *)0x0) {
    do {
      iVar1 = operand2sig();
      if (iVar1 == 0) {
        uVar5 = quote(pcVar2);
        uVar6 = dcgettext(0,"%s: invalid signal",5);
        error(0,0,uVar6,uVar5);
LAB_001008fa:
                    /* WARNING: Subroutine does not return */
        usage(_exit_failure);
      }
      if (iVar1 < 1) goto LAB_001008fa;
      *(uint *)(signals + (long)iVar1 * 4) = (-(uint)(param_2 == '\0') & 2) + 1;
      pcVar2 = strtok((char *)0x0,",");
    } while (pcVar2 != (char *)0x0);
  }
  free(__s);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void parse_block_signal_params(long param_1,char param_2)

{
  int __signo;
  int iVar1;
  char *__s;
  char *pcVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  
  if (param_1 == 0) {
    if (param_2 == '\0') {
      sigfillset((sigset_t *)unblock_signals);
      puVar6 = block_signals;
    }
    else {
      sigfillset((sigset_t *)block_signals);
      puVar6 = unblock_signals;
    }
    sigemptyset((sigset_t *)puVar6);
    sig_mask_changed = 1;
    return;
  }
  if (sig_mask_changed == '\0') {
    sigemptyset((sigset_t *)block_signals);
    sigemptyset((sigset_t *)unblock_signals);
    sig_mask_changed = '\x01';
  }
  __s = (char *)xstrdup(param_1);
  pcVar2 = strtok(__s,",");
  if (pcVar2 != (char *)0x0) {
    puVar6 = block_signals;
    if (param_2 != '\0') {
      puVar6 = unblock_signals;
    }
    do {
      __signo = operand2sig(pcVar2);
      if (__signo == 0) {
        uVar3 = quote(pcVar2);
        uVar5 = dcgettext(0,"%s: invalid signal",5);
        error(0,0,uVar5,uVar3);
LAB_00100acf:
                    /* WARNING: Subroutine does not return */
        usage(_exit_failure);
      }
      if (__signo < 1) goto LAB_00100acf;
      if (param_2 == '\0') {
        iVar1 = sigaddset((sigset_t *)unblock_signals,__signo);
        if (iVar1 != -1) goto LAB_0010098d;
      }
      else {
        iVar1 = sigaddset((sigset_t *)block_signals,__signo);
        if (iVar1 == -1) {
          uVar3 = dcgettext(0,"failed to block signal %d",5);
          piVar4 = __errno_location();
          error(0x7d,*piVar4,uVar3,__signo);
          break;
        }
LAB_0010098d:
        sigdelset((sigset_t *)puVar6,__signo);
      }
      pcVar2 = strtok((char *)0x0,",");
    } while (pcVar2 != (char *)0x0);
  }
  free(__s);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 main(int param_1,FILE *param_2)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  char *__name;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  char **ppcVar8;
  char **ppcVar9;
  size_t sVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  FILE **ppFVar14;
  int *piVar15;
  ulong uVar16;
  undefined1 *puVar17;
  FILE *pFVar18;
  char *pcVar19;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  uint uVar20;
  long *plVar21;
  FILE **ppFVar22;
  char *pcVar23;
  char *pcVar24;
  long lVar25;
  long lVar26;
  char **ppcVar27;
  long in_FS_OFFSET;
  bool bVar28;
  bool bVar29;
  char cVar30;
  byte bVar31;
  char cVar32;
  FILE *local_150;
  int local_144;
  char *local_140;
  char *local_138;
  FILE *local_118;
  int local_110;
  long local_108;
  uint local_100;
  char local_fc;
  _union_1457 local_f8 [20];
  char *local_40;
  
  bVar31 = 0;
  local_40 = *(char **)(in_FS_OFFSET + 0x28);
  set_program_name(*(undefined8 *)param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  _exit_failure = 0x7d;
  atexit((__func *)&close_stdout);
  puVar7 = (undefined8 *)xmalloc(0x104);
  signals = puVar7;
  *puVar7 = 0;
  *(undefined8 *)((long)puVar7 + 0xfc) = 0;
  uVar16 = (ulong)(((int)puVar7 - (int)(undefined8 *)((ulong)(puVar7 + 1) & 0xfffffffffffffff8)) +
                   0x104U >> 3);
  puVar7 = (undefined8 *)((ulong)(puVar7 + 1) & 0xfffffffffffffff8);
  for (; uVar16 != 0; uVar16 = uVar16 - 1) {
    *puVar7 = 0;
    puVar7 = puVar7 + (ulong)bVar31 * -2 + 1;
  }
  bVar1 = false;
  local_138 = (char *)0x0;
  local_140 = (char *)0x0;
  bVar29 = false;
  local_150 = param_2;
  local_144 = param_1;
LAB_00101a00:
  while( true ) {
    puVar17 = longopts;
    iVar4 = getopt_long(local_144,local_150,shortopts,longopts,0);
    iVar5 = _optind;
    pcVar23 = _optarg;
    if (iVar4 == -1) break;
    if (0x83 < iVar4) goto switchD_00101a4f_caseD_31;
    if (iVar4 < 0x30) {
LAB_00101ee0:
      cVar32 = SBORROW4(iVar4,-0x83);
      cVar30 = iVar4 + 0x83 < 0;
      iVar5 = iVar4;
      if (iVar4 == -0x83) {
        uVar11 = proper_name_lite("Assaf Gordon","Assaf Gordon");
        uVar12 = proper_name_lite("David MacKenzie","David MacKenzie");
        uVar13 = proper_name_lite("Richard Mlynarik","Richard Mlynarik");
        version_etc(_stdout,&_LC8,"GNU coreutils",_Version,uVar13,uVar12,uVar11,0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      goto LAB_001029a8;
    }
    switch(iVar4) {
    case 0x30:
      bVar1 = true;
      break;
    default:
      goto switchD_00101a4f_caseD_31;
    case 0x43:
      local_140 = _optarg;
      break;
    case 0x53:
      uVar20 = local_144 - _optind;
      ppFVar14 = (FILE **)(ulong)uVar20;
      lVar26 = (long)(int)(uVar20 + 2);
      local_118 = (FILE *)xnmalloc(lVar26,0x10);
      local_110 = 1;
      local_fc = '\x01';
      local_118->_IO_read_ptr = (char *)0x0;
      cVar30 = *pcVar23;
      local_108 = lVar26;
      local_100 = uVar20;
      if (cVar30 != '\0') {
        bVar28 = false;
        bVar2 = false;
        pcVar24 = pcVar23;
LAB_00101b70:
        pcVar19 = pcVar24;
        if (cVar30 < '(') {
          if (cVar30 < '\t') {
switchD_00101b8e_caseD_e:
            ppFVar14 = (FILE **)(ulong)(uint)(int)cVar30;
            goto LAB_00101bb3;
          }
          switch(cVar30) {
          case '\t':
          case '\n':
          case '\v':
          case '\f':
          case '\r':
          case ' ':
            if (bVar2 || bVar28) goto switchD_00101b8e_caseD_e;
            local_fc = '\x01';
            bVar28 = false;
            sVar10 = strspn(pcVar24," \t\n\v\f\r");
            bVar2 = false;
            pcVar24 = pcVar24 + sVar10;
            goto LAB_00101bd0;
          default:
            goto switchD_00101b8e_caseD_e;
          case '\"':
            ppFVar14 = (FILE **)0x22;
            if (bVar28) break;
            bVar2 = (bool)(bVar2 ^ 1);
joined_r0x00101df4:
            if (local_fc != '\0') {
              check_start_new_arg_part_0();
            }
            goto LAB_00101bcc;
          case '#':
            if (local_fc == '\0') {
              ppFVar14 = (FILE **)0x23;
              goto LAB_00101bc2;
            }
            goto LAB_00101bf4;
          case '$':
            ppFVar14 = (FILE **)0x24;
            if (!bVar28) {
              if (pcVar24[1] == '{') {
                cVar30 = pcVar24[2];
                if (cVar30 < '[') {
                  if ('@' < cVar30) goto LAB_00101d1f;
                  goto LAB_00101eb0;
                }
                goto LAB_00101e98;
              }
              goto LAB_00101eb0;
            }
            break;
          case '\'':
            ppFVar14 = (FILE **)0x27;
            if (!bVar2) {
              bVar28 = (bool)(bVar28 ^ 1);
              goto joined_r0x00101df4;
            }
          }
        }
        else {
          if (cVar30 != '\\') goto switchD_00101b8e_caseD_e;
          cVar30 = pcVar24[1];
          if (!bVar28) {
            if (cVar30 != '\0') {
              if ((byte)(cVar30 - 0x22U) < 0x55) goto LAB_00101e39;
switchD_00101e51_caseD_25:
              local_150 = (FILE *)CONCAT71(local_150._1_7_,cVar30);
              uVar11 = dcgettext(0,"invalid sequence \'\\%c\' in -S",5);
              cVar30 = error(0x7d,0,uVar11,(int)cVar30);
LAB_00101e98:
              if (((byte)(cVar30 + 0x9fU) < 0x1a) || (cVar30 == '_')) {
LAB_00101d1f:
                pcVar19 = pcVar24 + 3;
                do {
                  cVar30 = *pcVar19;
                  if (cVar30 < '[') {
                    if ((cVar30 < 'A') && (9 < (byte)(cVar30 - 0x30U))) break;
                  }
                  else if ((0x19 < (byte)(cVar30 + 0x9fU)) && (cVar30 != '_'))
                  goto code_r0x00101d4e;
                  pcVar19 = pcVar19 + 1;
                } while( true );
              }
              goto LAB_00101eb0;
            }
            pcVar23 = "invalid backslash at end of string in -S";
            goto LAB_00102a86;
          }
          if ((cVar30 != '\\') && (ppFVar14 = (FILE **)0x5c, cVar30 != '\'')) goto LAB_00101bb3;
LAB_00101e39:
          pcVar19 = pcVar24 + 1;
          switch(cVar30) {
          case '\"':
          case '#':
          case '$':
          case '\'':
          case '\\':
            ppFVar14 = (FILE **)(ulong)(uint)(int)cVar30;
            break;
          default:
            goto switchD_00101e51_caseD_25;
          case '_':
            if (!bVar2) {
              local_fc = '\x01';
              pcVar24 = pcVar24 + 2;
              goto LAB_00101bd0;
            }
            ppFVar14 = (FILE **)0x20;
            break;
          case 'c':
            ppFVar14 = (FILE **)(ulong)uVar20;
            if (!bVar2) goto LAB_00101bf4;
            pcVar23 = "\'\\c\' must not appear in double-quoted -S string";
            goto LAB_00102a86;
          case 'f':
            ppFVar14 = (FILE **)0xc;
            break;
          case 'n':
            ppFVar14 = (FILE **)0xa;
            break;
          case 'r':
            ppFVar14 = (FILE **)0xd;
            break;
          case 't':
            ppFVar14 = (FILE **)0x9;
            break;
          case 'v':
            ppFVar14 = (FILE **)0xb;
          }
        }
LAB_00101bb3:
        pcVar24 = pcVar19;
        if (local_fc != '\0') {
          check_start_new_arg_part_0(&local_118);
        }
LAB_00101bc2:
        splitbuf_append_byte(&local_118,ppFVar14);
LAB_00101bcc:
        pcVar24 = pcVar24 + 1;
        goto LAB_00101bd0;
      }
      goto LAB_00101bf4;
    case 0x61:
      local_138 = _optarg;
      break;
    case 0x69:
      bVar29 = true;
      break;
    case 0x75:
      if (usvars_used == usvars_alloc) {
        usvars = xpalloc(usvars,&usvars_alloc,1,0xffffffffffffffff);
      }
      lVar26 = usvars_used * 8;
      usvars_used = usvars_used + 1;
      *(char **)(usvars + lVar26) = pcVar23;
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
      goto switchD_00101a4f_caseD_83;
    }
  }
  if ((_optind < local_144) &&
     (puVar17 = (undefined1 *)local_150,
     iVar4 = strcmp(*(char **)(&local_150->_flags + (long)_optind * 2),"-"), iVar4 == 0)) {
    _optind = iVar5 + 1;
LAB_00101fe0:
    if (dev_debug != '\0') {
      puVar17 = (undefined1 *)_stderr;
      fwrite("cleaning environ\n",1,0x11,_stderr);
    }
    _environ = &dummy_environ_0;
    pcVar23 = puVar17;
    iVar5 = _optind;
  }
  else {
    if (bVar29) goto LAB_00101fe0;
    pcVar23 = puVar17;
    if (0 < usvars_used) {
      lVar25 = 0;
      lVar26 = usvars;
      do {
        if (dev_debug != '\0') {
          puVar17 = *(undefined1 **)(lVar26 + lVar25 * 8);
          __fprintf_chk(_stderr,2,"unset:    %s\n");
        }
        lVar26 = usvars;
        iVar5 = unsetenv(*(char **)(lVar25 * 8 + usvars));
        if (iVar5 != 0) goto LAB_00102a13;
        lVar25 = lVar25 + 1;
        pcVar23 = puVar17;
        iVar5 = _optind;
      } while (lVar25 < usvars_used);
    }
  }
  while (iVar5 < local_144) {
    pFVar18 = *(FILE **)(&local_150->_flags + (long)iVar5 * 2);
    ppFVar14 = (FILE **)strchr((char *)pFVar18,0x3d);
    if (ppFVar14 == (FILE **)0x0) {
      if ((iVar5 < local_144) && (bVar1)) {
        pcVar24 = "cannot specify --null (-0) with command";
        goto LAB_001026d9;
      }
      break;
    }
    if (dev_debug != '\0') {
      __fprintf_chk(_stderr,2,"setenv:   %s\n");
      pcVar23 = (char *)pFVar18;
    }
    iVar5 = putenv(*(char **)(&local_150->_flags + (long)_optind * 2));
    if (iVar5 != 0) goto LAB_00102a9e;
    _optind = _optind + 1;
    iVar5 = _optind;
  }
  if (((local_140 == (char *)0x0) ||
      (pcVar24 = "must specify command with --chdir (-C)", iVar5 < local_144)) &&
     ((local_138 == (char *)0x0 ||
      (pcVar24 = "must specify command with --argv0 (-a)", iVar5 < local_144)))) {
    if (local_144 <= iVar5) {
      lVar26 = *_environ;
      if (lVar26 != 0) {
        plVar21 = _environ;
        do {
          plVar21 = plVar21 + 1;
          __printf_chk(2,&_LC74,lVar26,-!bVar1 & 10);
          lVar26 = *plVar21;
        } while (lVar26 != 0);
      }
      uVar11 = 0;
      goto LAB_0010222f;
    }
    lVar26 = 4;
    uVar20 = 1;
    do {
      iVar5 = *(int *)((long)signals + lVar26);
      if (iVar5 != 0) {
        iVar4 = sigaction(uVar20,(sigaction *)0x0,(sigaction *)local_f8);
        bVar29 = (iVar5 - 2U & 0xfffffffd) != 0;
        if (iVar4 == 0) {
LAB_001023ef:
          local_f8[0]._1_7_ = 0;
          local_f8[0]._0_1_ = 1 < iVar5 - 1U;
          iVar4 = sigaction(uVar20,(sigaction *)local_f8,(sigaction *)0x0);
          if ((iVar4 == 0) || (!bVar29)) goto LAB_0010239d;
          pcVar23 = "failed to set signal action for signal %d";
LAB_00102421:
          uVar11 = dcgettext(0,pcVar23,5);
          piVar15 = __errno_location();
          pcVar23 = (char *)(ulong)uVar20;
          error(0x7d,*piVar15,uVar11);
        }
        else {
          if (bVar29) {
            pcVar23 = "failed to get signal action for signal %d";
            goto LAB_00102421;
          }
          if (iVar4 == 0) goto LAB_001023ef;
LAB_0010239d:
          if (dev_debug == '\0') goto LAB_001023aa;
        }
        iVar6 = sig2str(uVar20);
        uVar11 = extraout_RDX;
        if (iVar6 != 0) {
          pcVar23 = (char *)0x13;
          __snprintf_chk(&stack0xffffffffffffffa8,0x13,2,0x13,"SIG%d",uVar20);
          uVar11 = extraout_RDX_00;
        }
        if (dev_debug != '\0') {
          pcVar23 = " (failure ignored)";
          if (iVar4 == 0) {
            pcVar23 = &_LC1;
          }
          pcVar24 = "DEFAULT";
          if (1 < iVar5 - 1U) {
            pcVar24 = "IGNORE";
          }
          __fprintf_chk(_stderr,2,"Reset signal %s (%d) to %s%s\n",&stack0xffffffffffffffa8,uVar20,
                        pcVar24,pcVar23,uVar11);
        }
      }
LAB_001023aa:
      uVar20 = uVar20 + 1;
      lVar26 = lVar26 + 4;
    } while (uVar20 != 0x41);
    if (sig_mask_changed == '\0') {
LAB_001024f4:
      if (report_signal_handling != '\0') {
        list_signal_handling();
      }
      if (local_140 != (char *)0x0) {
        if (dev_debug != '\0') {
          uVar11 = quotearg_style(4,local_140);
          __fprintf_chk(_stderr,2,"chdir:    %s\n",uVar11);
        }
        iVar5 = chdir(local_140);
        if (iVar5 != 0) {
          uVar11 = quotearg_style(4,local_140);
          pcVar23 = "cannot change directory to %s";
LAB_001029f0:
          do {
            uVar12 = dcgettext(0,pcVar23,5);
            piVar15 = __errno_location();
            error(0x7d,*piVar15,uVar12,uVar11);
LAB_00102a13:
            uVar11 = quote();
            pcVar23 = "cannot unset %s";
          } while( true );
        }
      }
      lVar26 = (long)_optind;
      pcVar23 = *(char **)(&local_150->_flags + lVar26 * 2);
      if (local_138 != (char *)0x0) {
        if (dev_debug != '\0') {
          uVar11 = quotearg_style(4,local_138);
          __fprintf_chk(_stderr,2,"argv0:     %s\n",uVar11);
          lVar26 = (long)_optind;
        }
        *(char **)(&local_150->_flags + (long)(int)lVar26 * 2) = local_138;
      }
      if (dev_debug != '\0') {
        __fprintf_chk(_stderr,2,"executing: %s\n",pcVar23);
        for (lVar26 = (long)_optind; (int)lVar26 < local_144; lVar26 = lVar26 + 1) {
          if (dev_debug != '\0') {
            uVar11 = quote(*(undefined8 *)(&local_150->_flags + lVar26 * 2));
            __fprintf_chk(_stderr,2,"   arg[%d]= %s\n",(int)lVar26 - _optind,uVar11);
          }
        }
        lVar26 = (long)_optind;
      }
      execvp(pcVar23,(char **)(&local_150->_flags + lVar26 * 2));
      piVar15 = __errno_location();
      if (*piVar15 == 2) {
        uVar11 = quote(pcVar23);
        error(0,*piVar15,&_LC85,uVar11);
        pcVar23 = strpbrk(pcVar23," \t\n\v\f\r");
        if (pcVar23 != (char *)0x0) {
          uVar11 = dcgettext(0,"use -[v]S to pass options in shebang lines",5);
          error(0,0,uVar11);
        }
        uVar11 = 0x7f;
      }
      else {
        uVar11 = quote(pcVar23);
        error(0,*piVar15,&_LC85,uVar11);
        uVar11 = 0x7e;
      }
LAB_0010222f:
      if (local_40 != *(char **)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return uVar11;
    }
    iVar6 = 1;
    sigemptyset((sigset_t *)local_f8);
    iVar4 = sigprocmask(0,(sigset_t *)0x0,(sigset_t *)local_f8);
    iVar5 = (int)pcVar23;
    pcVar24 = "failed to get signal process mask";
    if (iVar4 == 0) {
      do {
        iVar5 = sigismember((sigset_t *)block_signals,iVar6);
        if (iVar5 == 0) {
          iVar5 = sigismember((sigset_t *)unblock_signals,iVar6);
          if (iVar5 != 0) {
            pcVar24 = "UNBLOCK";
            sigdelset((sigset_t *)local_f8,iVar6);
            if (dev_debug != '\0') goto LAB_001028a8;
          }
        }
        else {
          sigaddset((sigset_t *)local_f8,iVar6);
          if (dev_debug != '\0') {
            pcVar24 = "BLOCK";
LAB_001028a8:
            pFVar18 = (FILE *)&stack0xffffffffffffffa8;
            iVar5 = sig2str(iVar6,pFVar18);
            if (iVar5 != 0) {
              pcVar23 = (char *)0x13;
              __snprintf_chk(pFVar18,0x13,2,0x13,"SIG%d",iVar6);
            }
            if (dev_debug != '\0') {
              __fprintf_chk(_stderr,2,"signal %s (%d) mask set to %s\n",pFVar18,iVar6,pcVar24);
              pcVar23 = (char *)pFVar18;
            }
          }
        }
        iVar5 = (int)pcVar23;
        iVar6 = iVar6 + 1;
      } while (iVar6 != 0x41);
      iVar4 = sigprocmask(2,(sigset_t *)local_f8,(sigset_t *)0x0);
      if (iVar4 == 0) goto LAB_001024f4;
      pcVar24 = "failed to set signal process mask";
    }
    uVar11 = dcgettext(0,pcVar24,5);
    piVar15 = __errno_location();
    cVar32 = '\0';
    cVar30 = '\0';
    iVar4 = error(0x7d,*piVar15,uVar11);
LAB_001029a8:
    if (cVar32 != cVar30) goto switchD_00101a4f_caseD_31;
    if (iVar4 < 0xe) {
      if (iVar4 < 9) {
        if (iVar4 == -0x82) {
                    /* WARNING: Subroutine does not return */
          usage(0);
        }
        goto switchD_00101a4f_caseD_31;
      }
    }
    else if (iVar4 != 0x20) goto switchD_00101a4f_caseD_31;
    uVar11 = dcgettext(0,"invalid option -- \'%c\'",5);
    error(0,0,uVar11,iVar5);
    pcVar24 = "use -[v]S to pass options in shebang lines";
  }
LAB_001026d9:
  uVar11 = dcgettext(0,pcVar24,5);
  error(0,0,uVar11);
switchD_00101a4f_caseD_31:
                    /* WARNING: Subroutine does not return */
  usage(0x7d);
switchD_00101a4f_caseD_83:
  report_signal_handling = '\x01';
  goto LAB_00101a00;
code_r0x00101d4e:
  if (cVar30 != '}') {
LAB_00101eb0:
    uVar11 = dcgettext(0,"only ${VARNAME} expansion is supported, error at: %s",5);
    iVar4 = error(0x7d,0,uVar11,pcVar24);
    goto LAB_00101ee0;
  }
  if (vnlen <= (long)(pcVar19 + (-2 - (long)pcVar24))) {
    free(varname);
    varname = (char *)xpalloc(0,&vnlen,pcVar19 + ((-1 - (long)pcVar24) - vnlen),0xffffffffffffffff);
  }
  __name = varname;
  memcpy(varname,pcVar24 + 2,(size_t)(pcVar19 + (-2 - (long)pcVar24)));
  __name[(long)(pcVar19 + (-2 - (long)pcVar24))] = '\0';
  ppFVar14 = (FILE **)getenv(__name);
  if (ppFVar14 == (FILE **)0x0) {
    if (dev_debug != '\0') {
      __fprintf_chk(_stderr,2,"replacing ${%s} with null string\n");
    }
  }
  else {
    if (local_fc != '\0') {
      check_start_new_arg_part_0(&local_118);
    }
    if (dev_debug != '\0') {
      quote(ppFVar14);
      __fprintf_chk(_stderr,2,"expanding ${%s} into %s\n");
    }
    cVar30 = *(char *)ppFVar14;
    ppFVar22 = ppFVar14;
    while (cVar30 != '\0') {
      ppFVar22 = (FILE **)((long)ppFVar22 + 1);
      splitbuf_append_byte(&local_118,(int)cVar30);
      ppFVar14 = &local_118;
      cVar30 = *(char *)ppFVar22;
    }
  }
  pcVar24 = strchr(pcVar24,0x7d);
  pcVar24 = pcVar24 + 1;
LAB_00101bd0:
  cVar30 = *pcVar24;
  if (cVar30 == '\0') goto code_r0x00101bd8;
  goto LAB_00101b70;
code_r0x00101bd8:
  ppFVar14 = (FILE **)(ulong)uVar20;
  if ((bVar28) || (bVar2)) {
    pcVar23 = "no terminating quote in -S string";
LAB_00102a86:
    uVar11 = dcgettext(0,pcVar23,5);
    error(0x7d,0,uVar11);
    goto LAB_00102a9e;
  }
LAB_00101bf4:
  splitbuf_append_byte(&local_118,0);
  local_144 = local_110;
  pFVar18 = local_118;
  if (local_110 < 2) {
    uVar3 = *(undefined4 *)&local_150->field_0x4;
    local_118->_flags = local_150->_flags;
    *(undefined4 *)&local_118->field_0x4 = uVar3;
  }
  else {
    ppcVar27 = &local_118->_IO_read_end;
    ppcVar8 = &local_118->_IO_read_ptr;
    do {
      ppcVar9 = ppcVar8 + 1;
      *ppcVar8 = *ppcVar8 + local_108 * 8 + (long)local_118;
      ppcVar8 = ppcVar9;
    } while (ppcVar9 != ppcVar27 + (local_110 - 2));
    bVar28 = dev_debug != '\0';
    uVar3 = *(undefined4 *)&local_150->field_0x4;
    local_118->_flags = local_150->_flags;
    *(undefined4 *)&local_118->field_0x4 = uVar3;
    if (bVar28) {
      uVar11 = quote(pcVar23);
      __fprintf_chk(_stderr,2,"split -S:  %s\n",uVar11);
      if (dev_debug != '\0') {
        uVar11 = quote(pFVar18->_IO_read_ptr);
        __fprintf_chk(_stderr,2," into:    %s\n",uVar11);
      }
      if (local_144 != 2) {
        do {
          if (dev_debug != '\0') {
            uVar11 = quote(*ppcVar27);
            __fprintf_chk(_stderr,2,"     &    %s\n",uVar11);
          }
          ppcVar27 = ppcVar27 + 1;
        } while (ppcVar27 != (char **)(pFVar18->_shortbuf + (ulong)(local_144 - 3) * 8 + -0x6b));
      }
    }
  }
  memcpy(&pFVar18->_flags + (long)local_144 * 2,&local_150->_flags + (long)_optind * 2,
         (long)(int)(uVar20 + 1) << 3);
  local_144 = uVar20 + local_144;
  local_150 = pFVar18;
  _optind = 0;
  goto LAB_00101a00;
LAB_00102a9e:
  *(char *)ppFVar14 = '\0';
  uVar11 = quote(*(undefined8 *)(&local_150->_flags + (long)_optind * 2));
  pcVar23 = "cannot set %s";
  goto LAB_001029f0;
}


