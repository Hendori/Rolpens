
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
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... NAME...\n",5);
  __printf_chk(2,uVar3,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"Create named pipes (FIFOs) with the given NAMEs.\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -m, --mode=MODE    set file permission bits to MODE, not a=rw - umask\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -Z                   set the SELinux security context to default type\n      --context[=CTX]  like -Z, or if CTX is specified then set the SELinux\n                         or SMACK security context to CTX\n"
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
    iVar2 = strcmp("mkfifo",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)ppuVar7 + 0x10);
    ppuVar7 = (undefined **)((long)ppuVar7 + 0x10);
  } while (pcVar4 != (char *)0x0);
  pcVar4 = *(char **)((long)ppuVar7 + 8);
  if (pcVar4 == (char *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    pcVar4 = "mkfifo";
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) goto LAB_0010028d;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","mkfifo");
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
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","mkfifo");
    if (pcVar4 == "mkfifo") {
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

undefined1  [16] main(int param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  __mode_t __mask;
  uint __mode;
  undefined8 uVar3;
  void *__ptr;
  undefined8 uVar4;
  undefined8 uVar5;
  int *piVar6;
  char *pcVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined8 uStack_38;
  
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  __mode = 0x10049b;
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  lVar1 = 0;
LAB_0010090b:
  do {
    lVar8 = lVar1;
    iVar2 = getopt_long(param_1,param_2,&_LC30,longopts,0);
    if (iVar2 == -1) {
      if (_optind != param_1) {
        if (lVar8 == 0) {
          __mode = 0x1b6;
LAB_00100a3f:
          uVar3 = 0;
          if (_optind < param_1) goto LAB_00100a4c;
LAB_00100a95:
          auVar9._8_8_ = uStack_38;
          auVar9._0_8_ = uVar3;
          return auVar9;
        }
        __ptr = (void *)mode_compile();
        pcVar7 = "invalid mode";
        if (__ptr != (void *)0x0) {
          __mask = umask(0);
          umask(__mask);
          __mode = mode_adjust(0x1b6,0,__mask,__ptr,0);
          free(__ptr);
          if (__mode < 0x200) goto LAB_00100a3f;
          pcVar7 = "mode must specify only file permission bits";
        }
        uVar3 = dcgettext(0,pcVar7,5);
        error(1,0,uVar3);
        goto LAB_00100b58;
      }
LAB_00100aba:
      uVar3 = dcgettext(0,"missing operand",5);
      error(0,0,uVar3);
      goto LAB_00100adb;
    }
    if (iVar2 == 0x5a) {
      lVar1 = lVar8;
      if (_optarg != 0) {
        uVar3 = dcgettext(0,
                          "warning: ignoring --context; it requires an SELinux/SMACK-enabled kernel"
                          ,5);
        error(0,0,uVar3);
      }
      goto LAB_0010090b;
    }
    if (iVar2 < 0x5b) {
      if (iVar2 == -0x83) {
        uVar3 = proper_name_lite("David MacKenzie","David MacKenzie");
        version_etc(_stdout,"mkfifo","GNU coreutils",_Version,uVar3,0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar2 == -0x82) {
        usage(0);
        goto LAB_00100aba;
      }
      goto LAB_00100adb;
    }
    lVar1 = _optarg;
    if (iVar2 != 0x6d) {
LAB_00100adb:
      usage(1);
LAB_00100ae5:
      uVar4 = quotearg_style(4,param_2[_optind]);
      pcVar7 = "cannot create fifo %s";
      do {
        uVar5 = dcgettext(0,pcVar7,5);
        piVar6 = __errno_location();
        uVar3 = 1;
        error(0,*piVar6,uVar5,uVar4);
        do {
          _optind = _optind + 1;
          if (param_1 <= _optind) goto LAB_00100a95;
LAB_00100a4c:
          iVar2 = mkfifo((char *)param_2[_optind],__mode);
          if (iVar2 != 0) goto LAB_00100ae5;
        } while ((lVar8 == 0) || (iVar2 = lchmod((char *)param_2[_optind],__mode), iVar2 == 0));
LAB_00100b58:
        uVar4 = quotearg_style(4,param_2[_optind]);
        pcVar7 = "cannot set permissions of %s";
      } while( true );
    }
  } while( true );
}


