
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
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... FILE...\n",5);
  __printf_chk(2,uVar3,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"Print value of a symbolic link or canonical file name\n\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -f, --canonicalize            canonicalize by following every symlink in\n                                every component of the given name recursively;\n                                all but the last component must exist\n  -e, --canonicalize-existing   canonicalize by following every symlink in\n                                every component of the given name recursively,\n                                all components must exist\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -m, --canonicalize-missing    canonicalize by following every symlink in\n                                every component of the given name recursively,\n                                without requirements on components existence\n  -n, --no-newline              do not output the trailing delimiter\n  -q, --quiet\n  -s, --silent                  suppress most error messages (on by default)\n  -v, --verbose                 report error messages\n  -z, --zero                    end each output line with NUL, not newline\n"
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
    iVar2 = strcmp("readlink",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)piVar7 + 0x10);
    piVar7 = (infomap *)((long)piVar7 + 0x10);
  } while (pcVar4 != (char *)0x0);
  pcVar4 = *(char **)((long)piVar7 + 8);
  if (pcVar4 == (char *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    pcVar4 = "readlink";
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) goto LAB_00100265;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","readlink");
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) {
LAB_00100265:
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
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","readlink");
    if (pcVar4 == "readlink") {
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
  byte *pbVar1;
  char *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  char *__s;
  int *piVar6;
  int iVar7;
  int local_40;
  
  iVar7 = -1;
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  bVar3 = false;
  do {
    iVar4 = getopt_long(argc,argv,"efmnqsvz",longopts,0);
    if (iVar4 == -1) {
      if (_optind < argc) {
        if (argc - _optind != 1) {
          if (no_newline != false) {
            uVar5 = dcgettext(0,"ignoring --no-newline with multiple arguments",5);
            error(0,0,uVar5);
          }
          no_newline = false;
          if (argc <= _optind) {
            no_newline = false;
            return 0;
          }
        }
        local_40 = 0;
        do {
          pcVar2 = argv[_optind];
          if (iVar7 == -1) {
            __s = (char *)areadlink_with_size(pcVar2,0x3f);
          }
          else {
            __s = (char *)canonicalize_filename_mode(pcVar2,iVar7);
          }
          if (__s == (char *)0x0) {
            if (verbose != false) {
              uVar5 = quotearg_n_style_colon(0,3,pcVar2);
              piVar6 = __errno_location();
              error(0,*piVar6,&_LC31,uVar5);
            }
            local_40 = 1;
          }
          else {
            fputs_unlocked(__s,_stdout);
            if (no_newline == false) {
              pbVar1 = (byte *)_stdout->_IO_write_ptr;
              if (pbVar1 < _stdout->_IO_write_end) {
                _stdout->_IO_write_ptr = (char *)(pbVar1 + 1);
                *pbVar1 = -!bVar3 & 10;
              }
              else {
                __overflow(_stdout,-(uint)!bVar3 & 10);
              }
            }
            free(__s);
          }
          _optind = _optind + 1;
        } while (_optind < argc);
        return local_40;
      }
      uVar5 = dcgettext(0,"missing operand",5);
      error(0,0,uVar5);
switchD_00100b4d_caseD_67:
                    /* WARNING: Subroutine does not return */
      usage(1);
    }
    if (0x7a < iVar4) goto switchD_00100b4d_caseD_67;
    if (iVar4 < 0x65) {
      if (iVar4 == -0x83) {
        uVar5 = proper_name_lite("Dmitry V. Levin","Dmitry V. Levin");
        version_etc(_stdout,"readlink","GNU coreutils",_Version,uVar5,0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar4 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      goto switchD_00100b4d_caseD_67;
    }
    switch(iVar4) {
    case 0x65:
      iVar7 = 0;
      break;
    case 0x66:
      iVar7 = 1;
      break;
    default:
      goto switchD_00100b4d_caseD_67;
    case 0x6d:
      iVar7 = 2;
      break;
    case 0x6e:
      no_newline = true;
      break;
    case 0x71:
    case 0x73:
      verbose = false;
      break;
    case 0x76:
      verbose = true;
      break;
    case 0x7a:
      bVar3 = true;
    }
  } while( true );
}


