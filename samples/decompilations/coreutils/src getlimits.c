
/* WARNING: Unknown calling convention */

char * decimal_absval_add_one(char *buf)

{
  char *pcVar1;
  char *__s;
  char cVar2;
  char cVar3;
  size_t sVar4;
  char *pcVar5;
  
  cVar2 = buf[1];
  __s = buf + (ulong)(cVar2 == '-') + 1;
  sVar4 = strlen(__s);
  __s[-1] = '0';
  pcVar5 = __s + (sVar4 - 1);
  cVar3 = __s[sVar4 - 1];
  while (cVar3 == '9') {
    *pcVar5 = '0';
    pcVar1 = pcVar5 + -1;
    pcVar5 = pcVar5 + -1;
    cVar3 = *pcVar1;
  }
  *pcVar5 = cVar3 + '\x01';
  if (__s <= pcVar5) {
    pcVar5 = __s;
  }
  if (cVar2 == '-') {
    pcVar5[-1] = '-';
    pcVar5 = pcVar5 + -1;
  }
  return pcVar5;
}



/* WARNING: Unknown calling convention */

void print_FLT(float x)

{
  long lVar1;
  long in_FS_OFFSET;
  char buf [31];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  ftoastr(buf,0x1f,1,0);
  puts(buf);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

void print_DBL(double x)

{
  long lVar1;
  long in_FS_OFFSET;
  char buf [40];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  dtoastr(buf,0x28,1,0);
  puts(buf);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

void print_LDBL(longdouble x)

{
  long lVar1;
  undefined8 in_R8;
  undefined8 in_R9;
  long in_FS_OFFSET;
  undefined6 in_stack_00000012;
  char buf [45];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  ldtoastr(buf,0x2d,1,0,in_R8,in_R9,x._0_8_,CONCAT62(in_stack_00000012,x._8_2_));
  puts(buf);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
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
    goto LAB_001001ca;
  }
  uVar3 = dcgettext(0,"Usage: %s\n",5);
  __printf_chk(2,uVar3,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "Output platform dependent limits in a format useful for shell scripts.\n\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
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
    iVar2 = strcmp("getlimits",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)piVar7 + 0x10);
    piVar7 = (infomap *)((long)piVar7 + 0x10);
  } while (pcVar4 != (char *)0x0);
  pcVar4 = *(char **)((long)piVar7 + 8);
  if (pcVar4 == (char *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    pcVar4 = "getlimits";
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) goto LAB_0010038d;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","getlimits");
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) {
LAB_0010038d:
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
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","getlimits");
    if (pcVar4 == "getlimits") {
      pcVar6 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,pcVar4,pcVar6);
LAB_001001ca:
                    /* WARNING: Subroutine does not return */
  exit(status);
}



/* WARNING: Unknown calling convention */

int main(int argc,char **argv)

{
  long lVar1;
  undefined2 uVar2;
  char *pcVar3;
  char *pcVar4;
  long in_FS_OFFSET;
  char limit [22];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  uVar2 = proper_name_lite("Padraig Brady",&_LC25);
  parse_gnu_standard_options_only(argc,argv,"getlimits","GNU coreutils",&_LC27,1,usage,uVar2,0);
  pcVar4 = limit + 1;
  __sprintf_chk(pcVar4,2,0x15,&_LC28,0x7f);
  __printf_chk(2,"CHAR_MAX=%s\n",pcVar4);
  pcVar3 = decimal_absval_add_one(limit);
  __printf_chk(2,"CHAR_OFLOW=%s\n",pcVar3);
  __sprintf_chk(pcVar4,2,0x15,&_LC31,0xffffffffffffff80);
  __printf_chk(2,"CHAR_MIN=%s\n",pcVar4);
  pcVar3 = decimal_absval_add_one(limit);
  __printf_chk(2,"CHAR_UFLOW=%s\n",pcVar3);
  __sprintf_chk(pcVar4,2,0x15,&_LC28,0x7f);
  __printf_chk(2,"SCHAR_MAX=%s\n",pcVar4);
  pcVar3 = decimal_absval_add_one(limit);
  __printf_chk(2,"SCHAR_OFLOW=%s\n",pcVar3);
  __sprintf_chk(pcVar4,2,0x15,&_LC31,0xffffffffffffff80);
  __printf_chk(2,"SCHAR_MIN=%s\n",pcVar4);
  pcVar3 = decimal_absval_add_one(limit);
  __printf_chk(2,"SCHAR_UFLOW=%s\n",pcVar3);
  __sprintf_chk(pcVar4,2,0x15,&_LC28,0xff);
  __printf_chk(2,"UCHAR_MAX=%s\n",pcVar4);
  pcVar3 = decimal_absval_add_one(limit);
  __printf_chk(2,"UCHAR_OFLOW=%s\n",pcVar3);
  __sprintf_chk(pcVar4,2,0x15,&_LC28,0x7fff);
  __printf_chk(2,"SHRT_MAX=%s\n",pcVar4);
  pcVar3 = decimal_absval_add_one(limit);
  __printf_chk(2,"SHRT_OFLOW=%s\n",pcVar3);
  __sprintf_chk(pcVar4,2,0x15,&_LC31,0xffffffffffff8000);
  __printf_chk(2,"SHRT_MIN=%s\n",pcVar4);
  pcVar3 = decimal_absval_add_one(limit);
  __printf_chk(2,"SHRT_UFLOW=%s\n",pcVar3);
  __sprintf_chk(pcVar4,2,0x15,&_LC28,0x7fffffff);
  __printf_chk(2,"INT_MAX=%s\n",pcVar4);
  pcVar3 = decimal_absval_add_one(limit);
  __printf_chk(2,"INT_OFLOW=%s\n",pcVar3);
  __sprintf_chk(pcVar4,2,0x15,&_LC31,0xffffffff80000000);
  __printf_chk(2,"INT_MIN=%s\n",pcVar4);
  pcVar3 = decimal_absval_add_one(limit);
  __printf_chk(2,"INT_UFLOW=%s\n",pcVar3);
  __sprintf_chk(pcVar4,2,0x15,&_LC28,0xffffffff);
  __printf_chk(2,"UINT_MAX=%s\n",pcVar4);
  pcVar3 = decimal_absval_add_one(limit);
  __printf_chk(2,"UINT_OFLOW=%s\n",pcVar3);
  __sprintf_chk(pcVar4,2,0x15,&_LC28,0x7fffffffffffffff);
  __printf_chk(2,"LONG_MAX=%s\n",pcVar4);
  pcVar3 = decimal_absval_add_one(limit);
  __printf_chk(2,"LONG_OFLOW=%s\n",pcVar3);
  __sprintf_chk(pcVar4,2,0x15,&_LC31,0x8000000000000000);
  __printf_chk(2,"LONG_MIN=%s\n",pcVar4);
  pcVar3 = decimal_absval_add_one(limit);
  __printf_chk(2,"LONG_UFLOW=%s\n",pcVar3);
  __sprintf_chk(pcVar4,2,0x15,&_LC28,0xffffffffffffffff);
  __printf_chk(2,"ULONG_MAX=%s\n",pcVar4);
  pcVar3 = decimal_absval_add_one(limit);
  __printf_chk(2,"ULONG_OFLOW=%s\n",pcVar3);
  __sprintf_chk(pcVar4,2,0x15,&_LC28,0xffffffffffffffff);
  __printf_chk(2,"SIZE_MAX=%s\n",pcVar4);
  pcVar3 = decimal_absval_add_one(limit);
  __printf_chk(2,"SIZE_OFLOW=%s\n",pcVar3);
  __sprintf_chk(pcVar4,2,0x15,&_LC28,0x7fffffffffffffff);
  __printf_chk(2,"SSIZE_MAX=%s\n",pcVar4);
  pcVar3 = decimal_absval_add_one(limit);
  __printf_chk(2,"SSIZE_OFLOW=%s\n",pcVar3);
  __sprintf_chk(pcVar4,2,0x15,&_LC31,0x8000000000000000);
  __printf_chk(2,"SSIZE_MIN=%s\n",pcVar4);
  pcVar3 = decimal_absval_add_one(limit);
  __printf_chk(2,"SSIZE_UFLOW=%s\n",pcVar3);
  __sprintf_chk(pcVar4,2,0x15,&_LC28,0x7fffffffffffffff);
  __printf_chk(2,"TIME_T_MAX=%s\n",pcVar4);
  pcVar3 = decimal_absval_add_one(limit);
  __printf_chk(2,"TIME_T_OFLOW=%s\n",pcVar3);
  __sprintf_chk(pcVar4,2,0x15,&_LC31,0x8000000000000000);
  __printf_chk(2,"TIME_T_MIN=%s\n",pcVar4);
  pcVar3 = decimal_absval_add_one(limit);
  __printf_chk(2,"TIME_T_UFLOW=%s\n",pcVar3);
  __sprintf_chk(pcVar4,2,0x15,&_LC28,0xffffffff);
  __printf_chk(2,"UID_T_MAX=%s\n",pcVar4);
  pcVar3 = decimal_absval_add_one(limit);
  __printf_chk(2,"UID_T_OFLOW=%s\n",pcVar3);
  __sprintf_chk(pcVar4,2,0x15,&_LC28,0xffffffff);
  __printf_chk(2,"GID_T_MAX=%s\n",pcVar4);
  pcVar3 = decimal_absval_add_one(limit);
  __printf_chk(2,"GID_T_OFLOW=%s\n",pcVar3);
  __sprintf_chk(pcVar4,2,0x15,&_LC28,0x7fffffff);
  __printf_chk(2,"PID_T_MAX=%s\n",pcVar4);
  pcVar3 = decimal_absval_add_one(limit);
  __printf_chk(2,"PID_T_OFLOW=%s\n",pcVar3);
  __sprintf_chk(pcVar4,2,0x15,&_LC31,0xffffffff80000000);
  __printf_chk(2,"PID_T_MIN=%s\n",pcVar4);
  pcVar3 = decimal_absval_add_one(limit);
  __printf_chk(2,"PID_T_UFLOW=%s\n",pcVar3);
  __sprintf_chk(pcVar4,2,0x15,&_LC28,0x7fffffffffffffff);
  __printf_chk(2,"OFF_T_MAX=%s\n",pcVar4);
  pcVar3 = decimal_absval_add_one(limit);
  __printf_chk(2,"OFF_T_OFLOW=%s\n",pcVar3);
  __sprintf_chk(pcVar4,2,0x15,&_LC31,0x8000000000000000);
  __printf_chk(2,"OFF_T_MIN=%s\n",pcVar4);
  pcVar3 = decimal_absval_add_one(limit);
  __printf_chk(2,"OFF_T_UFLOW=%s\n",pcVar3);
  __sprintf_chk(pcVar4,2,0x15,&_LC28,0x7fffffffffffffff);
  __printf_chk(2,"INTMAX_MAX=%s\n",pcVar4);
  pcVar3 = decimal_absval_add_one(limit);
  __printf_chk(2,"INTMAX_OFLOW=%s\n",pcVar3);
  __sprintf_chk(pcVar4,2,0x15,&_LC31,0x8000000000000000);
  __printf_chk(2,"INTMAX_MIN=%s\n",pcVar4);
  pcVar3 = decimal_absval_add_one(limit);
  __printf_chk(2,"INTMAX_UFLOW=%s\n",pcVar3);
  __sprintf_chk(pcVar4,2,0x15,&_LC28,0xffffffffffffffff);
  __printf_chk(2,"UINTMAX_MAX=%s\n",pcVar4);
  pcVar4 = decimal_absval_add_one(limit);
  __printf_chk(2,"UINTMAX_OFLOW=%s\n",pcVar4);
  __printf_chk(2,"FLT_MIN=");
  print_FLT(_LC85);
  __printf_chk(2,"FLT_MAX=");
  print_FLT(_LC87);
  __printf_chk(2,"DBL_MIN=");
  print_DBL(_LC89);
  __printf_chk(2,"DBL_MAX=");
  print_DBL(_LC91);
  __printf_chk(2,"LDBL_MIN=");
  print_LDBL((longdouble)CONCAT28(1,0x8000000000000000));
  __printf_chk(2,"LDBL_MAX=");
  print_LDBL((longdouble)CONCAT28(0x7ffe,0xffffffffffffffff));
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


