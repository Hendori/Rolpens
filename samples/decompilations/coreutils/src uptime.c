
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void uptime(char *filename,int options)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  gl_utmp *pgVar4;
  tm *ptVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  int __status;
  idx_t n_users;
  gl_utmp *utmp_buf;
  time_t time_now;
  double avg [3];
  
  iVar2 = read_utmp(filename,&n_users,&utmp_buf,options);
  if (iVar2 < 0) {
    uVar6 = quotearg_n_style_colon(0,3,filename);
    piVar10 = __errno_location();
    error(0,*piVar10,&_LC0,uVar6);
    n_users = 0;
    utmp_buf = (gl_utmp *)0x0;
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
    if (n_users < 1) goto LAB_0010030c;
    lVar12 = 0;
    lVar11 = 0;
    pgVar4 = utmp_buf;
    do {
      if (*pgVar4->ut_user != '\0') {
        lVar11 = lVar11 + (ulong)(pgVar4->ut_type == 7);
      }
      if (pgVar4->ut_type == 2) {
        lVar12 = (pgVar4->ut_ts).tv_sec;
      }
      pgVar4 = pgVar4 + 1;
    } while (utmp_buf + n_users != pgVar4);
    if (lVar12 == 0) goto LAB_0010030e;
    __status = 0;
  }
  time_now = rpl_time(0);
  if (time_now == -1) {
LAB_001000e7:
    __status = 1;
    uVar6 = dcgettext(0," ??:????  ",5);
    __printf_chk(2,uVar6);
  }
  else {
    ptVar5 = localtime(&time_now);
    if (ptVar5 == (tm *)0x0) goto LAB_001000e7;
    uVar6 = dcgettext(0," %H:%M:%S  ",5);
    fprintftime(_stdout,uVar6,ptVar5,0,0);
  }
  if ((lVar12 == 0) || (time_now == -1)) {
LAB_00100140:
    __status = 1;
    uVar6 = dcgettext(0,"up ???? days ??:??,  ",5);
    __printf_chk(2,uVar6);
  }
  else {
    lVar7 = time_now - lVar12;
    if ((lVar7 < 0) || (SBORROW8(time_now,lVar12))) goto LAB_00100140;
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
  iVar3 = getloadavg(avg,3);
  if (iVar3 != -1) {
    if (iVar3 < 1) goto LAB_001001b2;
    uVar6 = dcgettext(0,",  load average: %.2f",5);
    __printf_chk(avg[0],2,uVar6);
    if (iVar3 != 1) {
      __printf_chk(avg[1],2,", %.2f");
      if (iVar3 != 2) {
        __printf_chk(avg[2],2,", %.2f");
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
/* WARNING: Unknown calling convention */

void usage(int status)

{
  FILE *pFVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  char *pcVar6;
  infomap *piVar7;
  infomap infomap [7];
  
  uVar4 = _program_name;
  piVar7 = infomap;
  if (status != 0) {
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
    iVar2 = strcmp("uptime",pcVar5);
    if (iVar2 == 0) break;
    pcVar5 = *(char **)((long)piVar7 + 0x10);
    piVar7 = (infomap *)((long)piVar7 + 0x10);
  } while (pcVar5 != (char *)0x0);
  pcVar5 = *(char **)((long)piVar7 + 8);
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
  exit(status);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int main(int argc,char **argv)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  uVar1 = proper_name_lite("Kaveh Ghazi","Kaveh Ghazi");
  uVar2 = proper_name_lite("David MacKenzie","David MacKenzie");
  uVar3 = proper_name_lite("Joseph Arceneaux","Joseph Arceneaux");
  parse_gnu_standard_options_only
            (argc,argv,"uptime","GNU coreutils",_Version,1,usage,uVar3,uVar2,uVar1,0);
  if (argc == _optind) {
                    /* WARNING: Subroutine does not return */
    uptime("/var/run/utmp",1);
  }
  if (argc - _optind == 1) {
                    /* WARNING: Subroutine does not return */
    uptime(argv[_optind],0);
  }
  uVar1 = quote(argv[(long)_optind + 1]);
  uVar2 = dcgettext(0,"extra operand %s",5);
  error(0,0,uVar2,uVar1);
                    /* WARNING: Subroutine does not return */
  usage(1);
}


