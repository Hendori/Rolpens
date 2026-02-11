
char * decimal_absval_add_one(long param_1)

{
  char *pcVar1;
  char *__s;
  char cVar2;
  char cVar3;
  size_t sVar4;
  char *pcVar5;
  
  cVar2 = *(char *)(param_1 + 1);
  __s = (char *)(param_1 + 1 + (ulong)(cVar2 == '-'));
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



void print_FLT(void)

{
  long in_FS_OFFSET;
  char acStack_38 [40];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  ftoastr(acStack_38,0x1f,1,0);
  puts(acStack_38);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void print_DBL(void)

{
  long in_FS_OFFSET;
  char acStack_38 [40];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  dtoastr(acStack_38,0x28,1,0);
  puts(acStack_38);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void print_LDBL(void)

{
  undefined8 in_R8;
  undefined8 in_R9;
  long in_FS_OFFSET;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  char acStack_48 [56];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  ldtoastr(acStack_48,0x2d,1,0,in_R8,in_R9,in_stack_00000008,in_stack_00000010);
  puts(acStack_48);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
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
    iVar2 = strcmp("getlimits",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)ppuVar7 + 0x10);
    ppuVar7 = (undefined **)((long)ppuVar7 + 0x10);
  } while (pcVar4 != (char *)0x0);
  pcVar4 = *(char **)((long)ppuVar7 + 8);
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
  exit(param_1);
}



undefined8 main(undefined4 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined1 uStack_48;
  undefined1 local_47 [23];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  uVar1 = proper_name_lite("Padraig Brady",&_LC25);
  parse_gnu_standard_options_only
            (param_1,param_2,"getlimits","GNU coreutils",&_LC27,1,usage,uVar1,0);
  __sprintf_chk(local_47,2,0x15,&_LC28,0x7f);
  __printf_chk(2,"CHAR_MAX=%s\n",local_47);
  uVar1 = decimal_absval_add_one(&uStack_48);
  __printf_chk(2,"CHAR_OFLOW=%s\n",uVar1);
  __sprintf_chk(local_47,2,0x15,&_LC31,0xffffffffffffff80);
  __printf_chk(2,"CHAR_MIN=%s\n",local_47);
  uVar1 = decimal_absval_add_one(&uStack_48);
  __printf_chk(2,"CHAR_UFLOW=%s\n",uVar1);
  __sprintf_chk(local_47,2,0x15,&_LC28,0x7f);
  __printf_chk(2,"SCHAR_MAX=%s\n",local_47);
  uVar1 = decimal_absval_add_one(&uStack_48);
  __printf_chk(2,"SCHAR_OFLOW=%s\n",uVar1);
  __sprintf_chk(local_47,2,0x15,&_LC31,0xffffffffffffff80);
  __printf_chk(2,"SCHAR_MIN=%s\n",local_47);
  uVar1 = decimal_absval_add_one(&uStack_48);
  __printf_chk(2,"SCHAR_UFLOW=%s\n",uVar1);
  __sprintf_chk(local_47,2,0x15,&_LC28,0xff);
  __printf_chk(2,"UCHAR_MAX=%s\n",local_47);
  uVar1 = decimal_absval_add_one(&uStack_48);
  __printf_chk(2,"UCHAR_OFLOW=%s\n",uVar1);
  __sprintf_chk(local_47,2,0x15,&_LC28,0x7fff);
  __printf_chk(2,"SHRT_MAX=%s\n",local_47);
  uVar1 = decimal_absval_add_one(&uStack_48);
  __printf_chk(2,"SHRT_OFLOW=%s\n",uVar1);
  __sprintf_chk(local_47,2,0x15,&_LC31,0xffffffffffff8000);
  __printf_chk(2,"SHRT_MIN=%s\n",local_47);
  uVar1 = decimal_absval_add_one(&uStack_48);
  __printf_chk(2,"SHRT_UFLOW=%s\n",uVar1);
  __sprintf_chk(local_47,2,0x15,&_LC28,0x7fffffff);
  __printf_chk(2,"INT_MAX=%s\n",local_47);
  uVar1 = decimal_absval_add_one(&uStack_48);
  __printf_chk(2,"INT_OFLOW=%s\n",uVar1);
  __sprintf_chk(local_47,2,0x15,&_LC31,0xffffffff80000000);
  __printf_chk(2,"INT_MIN=%s\n",local_47);
  uVar1 = decimal_absval_add_one(&uStack_48);
  __printf_chk(2,"INT_UFLOW=%s\n",uVar1);
  __sprintf_chk(local_47,2,0x15,&_LC28,0xffffffff);
  __printf_chk(2,"UINT_MAX=%s\n",local_47);
  uVar1 = decimal_absval_add_one(&uStack_48);
  __printf_chk(2,"UINT_OFLOW=%s\n",uVar1);
  __sprintf_chk(local_47,2,0x15,&_LC28,0x7fffffffffffffff);
  __printf_chk(2,"LONG_MAX=%s\n",local_47);
  uVar1 = decimal_absval_add_one(&uStack_48);
  __printf_chk(2,"LONG_OFLOW=%s\n",uVar1);
  __sprintf_chk(local_47,2,0x15,&_LC31,0x8000000000000000);
  __printf_chk(2,"LONG_MIN=%s\n",local_47);
  uVar1 = decimal_absval_add_one(&uStack_48);
  __printf_chk(2,"LONG_UFLOW=%s\n",uVar1);
  __sprintf_chk(local_47,2,0x15,&_LC28,0xffffffffffffffff);
  __printf_chk(2,"ULONG_MAX=%s\n",local_47);
  uVar1 = decimal_absval_add_one(&uStack_48);
  __printf_chk(2,"ULONG_OFLOW=%s\n",uVar1);
  __sprintf_chk(local_47,2,0x15,&_LC28,0xffffffffffffffff);
  __printf_chk(2,"SIZE_MAX=%s\n",local_47);
  uVar1 = decimal_absval_add_one(&uStack_48);
  __printf_chk(2,"SIZE_OFLOW=%s\n",uVar1);
  __sprintf_chk(local_47,2,0x15,&_LC28,0x7fffffffffffffff);
  __printf_chk(2,"SSIZE_MAX=%s\n",local_47);
  uVar1 = decimal_absval_add_one(&uStack_48);
  __printf_chk(2,"SSIZE_OFLOW=%s\n",uVar1);
  __sprintf_chk(local_47,2,0x15,&_LC31,0x8000000000000000);
  __printf_chk(2,"SSIZE_MIN=%s\n",local_47);
  uVar1 = decimal_absval_add_one(&uStack_48);
  __printf_chk(2,"SSIZE_UFLOW=%s\n",uVar1);
  __sprintf_chk(local_47,2,0x15,&_LC28,0x7fffffffffffffff);
  __printf_chk(2,"TIME_T_MAX=%s\n",local_47);
  uVar1 = decimal_absval_add_one(&uStack_48);
  __printf_chk(2,"TIME_T_OFLOW=%s\n",uVar1);
  __sprintf_chk(local_47,2,0x15,&_LC31,0x8000000000000000);
  __printf_chk(2,"TIME_T_MIN=%s\n",local_47);
  uVar1 = decimal_absval_add_one(&uStack_48);
  __printf_chk(2,"TIME_T_UFLOW=%s\n",uVar1);
  __sprintf_chk(local_47,2,0x15,&_LC28,0xffffffff);
  __printf_chk(2,"UID_T_MAX=%s\n",local_47);
  uVar1 = decimal_absval_add_one(&uStack_48);
  __printf_chk(2,"UID_T_OFLOW=%s\n",uVar1);
  __sprintf_chk(local_47,2,0x15,&_LC28,0xffffffff);
  __printf_chk(2,"GID_T_MAX=%s\n",local_47);
  uVar1 = decimal_absval_add_one(&uStack_48);
  __printf_chk(2,"GID_T_OFLOW=%s\n",uVar1);
  __sprintf_chk(local_47,2,0x15,&_LC28,0x7fffffff);
  __printf_chk(2,"PID_T_MAX=%s\n",local_47);
  uVar1 = decimal_absval_add_one(&uStack_48);
  __printf_chk(2,"PID_T_OFLOW=%s\n",uVar1);
  __sprintf_chk(local_47,2,0x15,&_LC31,0xffffffff80000000);
  __printf_chk(2,"PID_T_MIN=%s\n",local_47);
  uVar1 = decimal_absval_add_one(&uStack_48);
  __printf_chk(2,"PID_T_UFLOW=%s\n",uVar1);
  __sprintf_chk(local_47,2,0x15,&_LC28,0x7fffffffffffffff);
  __printf_chk(2,"OFF_T_MAX=%s\n",local_47);
  uVar1 = decimal_absval_add_one(&uStack_48);
  __printf_chk(2,"OFF_T_OFLOW=%s\n",uVar1);
  __sprintf_chk(local_47,2,0x15,&_LC31,0x8000000000000000);
  __printf_chk(2,"OFF_T_MIN=%s\n",local_47);
  uVar1 = decimal_absval_add_one(&uStack_48);
  __printf_chk(2,"OFF_T_UFLOW=%s\n",uVar1);
  __sprintf_chk(local_47,2,0x15,&_LC28,0x7fffffffffffffff);
  __printf_chk(2,"INTMAX_MAX=%s\n",local_47);
  uVar1 = decimal_absval_add_one(&uStack_48);
  __printf_chk(2,"INTMAX_OFLOW=%s\n",uVar1);
  __sprintf_chk(local_47,2,0x15,&_LC31,0x8000000000000000);
  __printf_chk(2,"INTMAX_MIN=%s\n",local_47);
  uVar1 = decimal_absval_add_one(&uStack_48);
  __printf_chk(2,"INTMAX_UFLOW=%s\n",uVar1);
  __sprintf_chk(local_47,2,0x15,&_LC28,0xffffffffffffffff);
  __printf_chk(2,"UINTMAX_MAX=%s\n",local_47);
  uVar1 = decimal_absval_add_one(&uStack_48);
  __printf_chk(2,"UINTMAX_OFLOW=%s\n",uVar1);
  __printf_chk(2,"FLT_MIN=");
  print_FLT(_LC85);
  __printf_chk(2,"FLT_MAX=");
  print_FLT(_LC87);
  __printf_chk(2,"DBL_MIN=");
  print_DBL(_LC89);
  __printf_chk(2,"DBL_MAX=");
  print_DBL(_LC91);
  __printf_chk(2,"LDBL_MIN=");
  print_LDBL();
  __printf_chk(2,"LDBL_MAX=");
  print_LDBL();
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


