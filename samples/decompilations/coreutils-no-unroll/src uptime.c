
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void uptime(undefined8 param_1,undefined4 param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  tm *ptVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  int __status;
  long in_FS_OFFSET;
  long local_70;
  undefined8 *local_68;
  long local_60;
  double local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  local_40 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  iVar2 = read_utmp(param_1,&local_70,&local_68,param_2);
  if (iVar2 < 0) {
    uVar6 = quotearg_n_style_colon(0,3,param_1);
    piVar10 = __errno_location();
    error(0,*piVar10,&_LC0,uVar6);
    local_70 = 0;
    local_68 = (undefined8 *)0x0;
LAB_0010030c:
    lVar11 = 0;
LAB_0010030e:
    __status = 1;
    uVar6 = dcgettext(0,"couldn\'t get boot time",5);
    piVar10 = __errno_location();
    lVar12 = 0;
    error(0,*piVar10,uVar6);
  }
  else {
    if (local_70 < 1) goto LAB_0010030c;
    lVar12 = 0;
    lVar11 = 0;
    puVar4 = local_68;
    do {
      if (*(char *)*puVar4 != '\0') {
        lVar11 = lVar11 + (ulong)(*(short *)(puVar4 + 7) == 7);
      }
      if (*(short *)(puVar4 + 7) == 2) {
        lVar12 = puVar4[4];
      }
      puVar4 = puVar4 + 9;
    } while (local_68 + local_70 * 9 != puVar4);
    if (lVar12 == 0) goto LAB_0010030e;
    __status = 0;
  }
  local_60 = rpl_time(0);
  if (local_60 == -1) {
LAB_001000e7:
    __status = 1;
    uVar6 = dcgettext(0," ??:????  ",5);
    __printf_chk(2,uVar6);
  }
  else {
    ptVar5 = localtime(&local_60);
    if (ptVar5 == (tm *)0x0) goto LAB_001000e7;
    uVar6 = dcgettext(0," %H:%M:%S  ",5);
    fprintftime(_stdout,uVar6,ptVar5,0,0);
  }
  if ((lVar12 == 0) || (local_60 == -1)) {
LAB_00100140:
    __status = 1;
    uVar6 = dcgettext(0,"up ???? days ??:??,  ",5);
    __printf_chk(2,uVar6);
  }
  else {
    lVar7 = local_60 - lVar12;
    if ((lVar7 < 0) || (SBORROW8(local_60,lVar12))) goto LAB_00100140;
    uVar8 = (lVar7 % 0x15180) / 0xe10;
    uVar9 = ((lVar7 % 0x15180) % 0xe10) / 0x3c;
    if (lVar7 < 0x15180) {
      uVar6 = dcgettext(0,"up  %2d:%02d,  ",5);
      __printf_chk(2,uVar6,uVar8 & 0xffffffff,uVar9 & 0xffffffff);
    }
    else {
      uVar6 = dcngettext(0,"up %jd day %2d:%02d,  ","up %jd days %2d:%02d,  ",lVar7 / 0x15180,5);
      __printf_chk(2,uVar6,lVar7 / 0x15180,uVar8 & 0xffffffff,uVar9 & 0xffffffff);
    }
  }
  uVar6 = dcngettext(0,"%td user","%td users",lVar11,5);
  __printf_chk(2,uVar6,lVar11);
  iVar3 = getloadavg(&local_58,3);
  if (iVar3 != -1) {
    if (iVar3 < 1) goto LAB_001001b2;
    uVar6 = dcgettext(0,",  load average: %.2f",5);
    __printf_chk(local_58,2,uVar6);
    if (iVar3 != 1) {
      __printf_chk(local_50,2,", %.2f");
      if (iVar3 != 2) {
        __printf_chk(local_48,2,", %.2f");
      }
    }
  }
  pcVar1 = _stdout->_IO_write_ptr;
  if (pcVar1 < _stdout->_IO_write_end) {
    _stdout->_IO_write_ptr = pcVar1 + 1;
    *pcVar1 = '\n';
  }
  else {
    __overflow(_stdout,10);
  }
LAB_001001b2:
  if (__status <= -(iVar2 >> 0x1f)) {
    __status = -(iVar2 >> 0x1f);
  }
                    /* WARNING: Subroutine does not return */
  exit(__status);
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
    goto LAB_001003ea;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... [FILE]\n",5);
  __printf_chk(2,uVar3,uVar4);
  uVar4 = dcgettext(0,
                    "Print the current time, the length of time the system has been up,\nthe number of users on the system, and the average number of jobs\nin the run queue over the last 1, 5 and 15 minutes."
                    ,5);
  __printf_chk(2,uVar4);
  uVar4 = dcgettext(0,
                    "  Processes in\nan uninterruptible sleep state also contribute to the load average.\n"
                    ,5);
  __printf_chk(2,uVar4);
  uVar4 = dcgettext(0,"If FILE is not specified, use %s.  %s as FILE is common.\n\n",5);
  __printf_chk(2,uVar4,"/var/run/utmp","/var/log/wtmp");
  pFVar1 = _stdout;
  pcVar5 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = _stdout;
  pcVar5 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar5,pFVar1);
  pcVar5 = "[";
  local_a8 = &_LC12;
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
    iVar2 = strcmp("uptime",pcVar5);
    if (iVar2 == 0) break;
    pcVar5 = *(char **)((long)ppuVar7 + 0x10);
    ppuVar7 = (undefined **)((long)ppuVar7 + 0x10);
  } while (pcVar5 != (char *)0x0);
  pcVar5 = *(char **)((long)ppuVar7 + 8);
  if (pcVar5 == (char *)0x0) {
    uVar4 = dcgettext(0,"\n%s online help: <%s>\n",5);
    pcVar5 = "uptime";
    __printf_chk(2,uVar4,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) goto LAB_001005fd;
    uVar4 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = " invocation";
    __printf_chk(2,uVar4,"https://www.gnu.org/software/coreutils/","uptime");
  }
  else {
    uVar4 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar4,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) {
LAB_001005fd:
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
    __printf_chk(2,uVar4,"https://www.gnu.org/software/coreutils/","uptime");
    if (pcVar5 == "uptime") {
      pcVar6 = " invocation";
    }
  }
  uVar4 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar4,pcVar5,pcVar6);
LAB_001003ea:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void main(int param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  uVar1 = proper_name_lite("Kaveh Ghazi","Kaveh Ghazi");
  uVar2 = proper_name_lite("David MacKenzie","David MacKenzie");
  uVar3 = proper_name_lite("Joseph Arceneaux","Joseph Arceneaux");
  parse_gnu_standard_options_only
            (param_1,param_2,"uptime","GNU coreutils",_Version,1,usage,uVar3,uVar2,uVar1,0);
  lVar4 = (long)_optind;
  if (param_1 != _optind) {
    if (param_1 - _optind != 1) goto LAB_00100cc4;
    uptime(param_2[lVar4],0);
  }
  lVar4 = uptime("/var/run/utmp",1);
LAB_00100cc4:
  uVar1 = quote(param_2[lVar4 + 1]);
  uVar2 = dcgettext(0,"extra operand %s",5);
  error(0,0,uVar2,uVar1);
                    /* WARNING: Subroutine does not return */
  usage(1);
}


