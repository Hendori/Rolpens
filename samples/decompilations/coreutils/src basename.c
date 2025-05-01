
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void perform_basename(char *string,char *suffix,_Bool use_nuls)

{
  char *__s;
  size_t sVar1;
  char *pcVar2;
  char *pcVar3;
  
  __s = (char *)base_name();
  strip_trailing_slashes(__s);
  if ((suffix != (char *)0x0) && (*__s != '/')) {
    sVar1 = strlen(__s);
    pcVar3 = __s + sVar1;
    sVar1 = strlen(suffix);
    pcVar2 = suffix + sVar1;
    while (__s < pcVar3) {
      if (pcVar2 <= suffix) {
        if (__s < pcVar3) {
          *pcVar3 = '\0';
        }
        break;
      }
      pcVar3 = pcVar3 + -1;
      pcVar2 = pcVar2 + -1;
      if (*pcVar3 != *pcVar2) break;
    }
  }
  fputs_unlocked(__s,_stdout);
  pcVar3 = _stdout->_IO_write_ptr;
  if (pcVar3 < _stdout->_IO_write_end) {
    _stdout->_IO_write_ptr = pcVar3 + 1;
    *pcVar3 = (char)(-(uint)!use_nuls & 10);
  }
  else {
    __overflow(_stdout,-(uint)!use_nuls & 10);
  }
  free(__s);
  return;
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
    goto LAB_0010013a;
  }
  uVar3 = dcgettext(0,"Usage: %s NAME [SUFFIX]\n  or:  %s OPTION... NAME...\n",5);
  __printf_chk(2,uVar3,uVar5,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "Print NAME with any leading directory components removed.\nIf specified, also remove a trailing SUFFIX.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -a, --multiple       support multiple arguments and treat each as a NAME\n  -s, --suffix=SUFFIX  remove a trailing SUFFIX; implies -a\n  -z, --zero           end each output line with NUL, not newline\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  uVar5 = _program_name;
  uVar3 = dcgettext(0,
                    "\nExamples:\n  %s /usr/bin/sort          -> \"sort\"\n  %s include/stdio.h .h     -> \"stdio\"\n  %s -s .h include/stdio.h  -> \"stdio\"\n  %s -a any/str1 any/str2   -> \"str1\" followed by \"str2\"\n"
                    ,5);
  __printf_chk(2,uVar3,uVar5,uVar5,uVar5,uVar5);
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
    iVar2 = strcmp("basename",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)piVar7 + 0x10);
    piVar7 = (infomap *)((long)piVar7 + 0x10);
  } while (pcVar4 != (char *)0x0);
  pcVar4 = *(char **)((long)piVar7 + 8);
  if (pcVar4 == (char *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    pcVar4 = "basename";
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) goto LAB_0010037d;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","basename");
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) {
LAB_0010037d:
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
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","basename");
    if (pcVar4 == "basename") {
      pcVar6 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,pcVar4,pcVar6);
LAB_0010013a:
                    /* WARNING: Subroutine does not return */
  exit(status);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int main(int argc,char **argv)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  char *pcVar7;
  _Bool local_39;
  
  bVar1 = false;
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  local_39 = false;
  pcVar6 = (char *)0x0;
LAB_00100a13:
  do {
    iVar2 = getopt_long(argc,argv,"+as:z",longopts,0);
    if (iVar2 == -1) {
      lVar4 = (long)_optind;
      if (_optind < argc) {
        if (bVar1) {
          while ((int)lVar4 < argc) {
            perform_basename(argv[lVar4],pcVar6,local_39);
            _optind = _optind + 1;
            lVar4 = (long)_optind;
          }
        }
        else {
          if (_optind + 2 < argc) {
            uVar3 = quote(argv[lVar4 + 2]);
            uVar5 = dcgettext(0,"extra operand %s",5);
            error(0,0,uVar5,uVar3);
                    /* WARNING: Subroutine does not return */
            usage(1);
          }
          pcVar6 = (char *)0x0;
          if (_optind + 2 == argc) {
            pcVar6 = argv[lVar4 + 1];
          }
          perform_basename(argv[lVar4],pcVar6,local_39);
        }
        return 0;
      }
      uVar3 = dcgettext(0,"missing operand",5);
      error(0,0,uVar3);
LAB_00100b48:
                    /* WARNING: Subroutine does not return */
      usage(1);
    }
    pcVar7 = pcVar6;
    if (iVar2 == 0x61) {
LAB_00100a57:
      bVar1 = true;
      pcVar6 = pcVar7;
      goto LAB_00100a13;
    }
    if (iVar2 < 0x62) {
      if (iVar2 == -0x83) {
        uVar3 = proper_name_lite("David MacKenzie","David MacKenzie");
        version_etc(_stdout,"basename","GNU coreutils",_Version,uVar3,0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar2 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      goto LAB_00100b48;
    }
    pcVar7 = _optarg;
    if (iVar2 == 0x73) goto LAB_00100a57;
    if (iVar2 != 0x7a) goto LAB_00100b48;
    local_39 = true;
  } while( true );
}


