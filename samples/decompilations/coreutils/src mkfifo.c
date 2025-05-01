
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
    iVar2 = strcmp("mkfifo",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)piVar7 + 0x10);
    piVar7 = (infomap *)((long)piVar7 + 0x10);
  } while (pcVar4 != (char *)0x0);
  pcVar4 = *(char **)((long)piVar7 + 8);
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
  exit(status);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int main(int argc,char **argv)

{
  int iVar1;
  __mode_t _Var2;
  int iVar3;
  undefined8 uVar4;
  void *__ptr;
  undefined8 uVar5;
  int *piVar6;
  char *pcVar7;
  long lVar8;
  
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  _Var2 = 0x10049b;
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  lVar8 = 0;
LAB_0010090b:
  do {
    iVar1 = getopt_long(argc,argv,&_LC30,longopts,0);
    if (iVar1 == -1) {
      if (_optind != argc) {
        if (lVar8 != 0) {
          __ptr = (void *)mode_compile();
          pcVar7 = "invalid mode";
          if (__ptr != (void *)0x0) {
            _Var2 = umask(0);
            umask(_Var2);
            _Var2 = mode_adjust(0x1b6,0,_Var2,__ptr,0);
            free(__ptr);
            if (_Var2 < 0x200) goto LAB_00100a3f;
            pcVar7 = "mode must specify only file permission bits";
          }
          uVar4 = dcgettext(0,pcVar7,5);
          error(1,0,uVar4);
LAB_00100b58:
          uVar4 = quotearg_style(4,argv[_optind]);
          pcVar7 = "cannot set permissions of %s";
          do {
            uVar5 = dcgettext(0,pcVar7,5);
            piVar6 = __errno_location();
            iVar1 = 1;
            error(0,*piVar6,uVar5,uVar4);
            while( true ) {
              _optind = _optind + 1;
joined_r0x00100a4a:
              if (argc <= _optind) {
                return iVar1;
              }
              iVar3 = mkfifo(argv[_optind],_Var2);
              if (iVar3 != 0) break;
              if ((lVar8 != 0) && (iVar3 = lchmod(argv[_optind],_Var2), iVar3 != 0))
              goto LAB_00100b58;
            }
            uVar4 = quotearg_style(4,argv[_optind]);
            pcVar7 = "cannot create fifo %s";
          } while( true );
        }
        _Var2 = 0x1b6;
LAB_00100a3f:
        iVar1 = 0;
        goto joined_r0x00100a4a;
      }
      uVar4 = dcgettext(0,"missing operand",5);
      error(0,0,uVar4);
      goto LAB_00100adb;
    }
    if (iVar1 == 0x5a) {
      if (_optarg != 0) {
        uVar4 = dcgettext(0,
                          "warning: ignoring --context; it requires an SELinux/SMACK-enabled kernel"
                          ,5);
        error(0,0,uVar4);
      }
      goto LAB_0010090b;
    }
    if (iVar1 < 0x5b) {
      if (iVar1 == -0x83) {
        uVar4 = proper_name_lite("David MacKenzie","David MacKenzie");
        version_etc(_stdout,"mkfifo","GNU coreutils",_Version,uVar4,0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar1 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      goto LAB_00100adb;
    }
    lVar8 = _optarg;
    if (iVar1 != 0x6d) {
LAB_00100adb:
                    /* WARNING: Subroutine does not return */
      usage(1);
    }
  } while( true );
}


