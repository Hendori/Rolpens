
void userid_compare(undefined8 *param_1,undefined8 *param_2)

{
  strcmp((char *)*param_1,(char *)*param_2);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void users(undefined8 param_1,uint param_2)

{
  char *pcVar1;
  void *__ptr;
  int iVar2;
  undefined8 *__base;
  undefined8 uVar3;
  int *piVar4;
  undefined8 *puVar5;
  long lVar6;
  size_t __nmemb;
  long in_FS_OFFSET;
  long local_40;
  undefined8 *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = read_utmp(param_1,&local_40,&local_38,param_2 | 2);
  puVar5 = local_38;
  if (iVar2 == 0) {
    __base = (undefined8 *)xinmalloc(local_40);
    if (local_40 == 0) {
      qsort(__base,0,8,userid_compare);
    }
    else {
      __nmemb = 0;
      lVar6 = local_40;
      do {
        if ((*(char *)*puVar5 != '\0') && (*(short *)(puVar5 + 7) == 7)) {
          uVar3 = extract_trimmed_name(puVar5);
          __base[__nmemb] = uVar3;
          __nmemb = __nmemb + 1;
        }
        puVar5 = puVar5 + 9;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      qsort(__base,__nmemb,8,userid_compare);
      if (0 < (long)__nmemb) {
        lVar6 = 0;
        if ((long)(__nmemb - 1) < 1) goto LAB_00100100;
        do {
          fputs_unlocked((char *)__base[lVar6],_stdout);
          pcVar1 = _stdout->_IO_write_ptr;
          if (pcVar1 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = pcVar1 + 1;
            *pcVar1 = ' ';
          }
          else {
            __overflow(_stdout,0x20);
          }
          lVar6 = lVar6 + 1;
        } while (lVar6 < (long)(__nmemb - 1));
        for (; lVar6 < (long)__nmemb; lVar6 = lVar6 + 1) {
LAB_00100100:
          fputs_unlocked((char *)__base[lVar6],_stdout);
          pcVar1 = _stdout->_IO_write_ptr;
          if (pcVar1 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = pcVar1 + 1;
            *pcVar1 = '\n';
          }
          else {
            __overflow(_stdout,10);
          }
        }
        puVar5 = __base;
        do {
          __ptr = (void *)*puVar5;
          puVar5 = puVar5 + 1;
          free(__ptr);
        } while (puVar5 != __base + __nmemb);
      }
    }
    free(__base);
    free(local_38);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    uVar3 = quotearg_n_style_colon(0,3,param_1);
    piVar4 = __errno_location();
    error(1,*piVar4,&_LC0,uVar3);
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
    goto LAB_0010026a;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... [FILE]\n",5);
  __printf_chk(2,uVar3,uVar4);
  uVar4 = dcgettext(0,
                    "Output who is currently logged in according to FILE.\nIf FILE is not specified, use %s.  %s as FILE is common.\n\n"
                    ,5);
  __printf_chk(2,uVar4,"/var/run/utmp","/var/log/wtmp");
  pFVar1 = _stdout;
  pcVar5 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = _stdout;
  pcVar5 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar5,pFVar1);
  pcVar5 = "[";
  local_a8 = &_LC1;
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
    iVar2 = strcmp("users",pcVar5);
    if (iVar2 == 0) break;
    pcVar5 = *(char **)((long)ppuVar7 + 0x10);
    ppuVar7 = (undefined **)((long)ppuVar7 + 0x10);
  } while (pcVar5 != (char *)0x0);
  pcVar5 = *(char **)((long)ppuVar7 + 8);
  if (pcVar5 == (char *)0x0) {
    uVar4 = dcgettext(0,"\n%s online help: <%s>\n",5);
    pcVar5 = "users";
    __printf_chk(2,uVar4,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) goto LAB_00100435;
    uVar4 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = " invocation";
    __printf_chk(2,uVar4,"https://www.gnu.org/software/coreutils/","users");
  }
  else {
    uVar4 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar4,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) {
LAB_00100435:
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
    __printf_chk(2,uVar4,"https://www.gnu.org/software/coreutils/","users");
    if (pcVar5 == "users") {
      pcVar6 = " invocation";
    }
  }
  uVar4 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar4,pcVar5,pcVar6);
LAB_0010026a:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 main(int param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  uVar1 = proper_name_lite("David MacKenzie","David MacKenzie");
  uVar2 = proper_name_lite("Joseph Arceneaux","Joseph Arceneaux");
  parse_gnu_standard_options_only
            (param_1,param_2,"users","GNU coreutils",_Version,1,usage,uVar2,uVar1,0);
  if (param_1 == _optind) {
    users("/var/run/utmp",1);
  }
  else {
    if (param_1 - _optind != 1) {
      uVar1 = quote(param_2[(long)_optind + 1]);
      uVar2 = dcgettext(0,"extra operand %s",5);
      error(0,0,uVar2,uVar1);
                    /* WARNING: Subroutine does not return */
      usage(1);
    }
    users(param_2[_optind],0);
  }
  return 0;
}


