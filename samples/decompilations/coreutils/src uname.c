
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void print_element(char *element)

{
  char *pcVar1;
  
  if (print_element::printed) {
    pcVar1 = _stdout->_IO_write_ptr;
    if (pcVar1 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = pcVar1 + 1;
      *pcVar1 = ' ';
    }
    else {
      __overflow(_stdout,0x20);
    }
  }
  print_element::printed = true;
  fputs_unlocked(element,_stdout);
  return;
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
  infomap *piVar6;
  char *__s1;
  char *pcVar7;
  infomap infomap [7];
  
  uVar4 = _program_name;
  piVar6 = infomap;
  if (status == 0) {
    uVar3 = dcgettext(0,"Usage: %s [OPTION]...\n",5);
    __printf_chk(2,uVar3,uVar4);
    pFVar1 = _stdout;
    pcVar7 = "Print machine architecture.\n\n";
    if (_uname_mode == 1) {
      pcVar7 = (char *)dcgettext(0,
                                 "Print certain system information.  With no OPTION, same as -s.\n\n  -a, --all                print all information, in the following order,\n                             except omit -p and -i if unknown:\n  -s, --kernel-name        print the kernel name\n  -n, --nodename           print the network node hostname\n  -r, --kernel-release     print the kernel release\n"
                                 ,5);
      fputs_unlocked(pcVar7,pFVar1);
      pcVar7 = 
      "  -v, --kernel-version     print the kernel version\n  -m, --machine            print the machine hardware name\n  -p, --processor          print the processor type (non-portable)\n  -i, --hardware-platform  print the hardware platform (non-portable)\n  -o, --operating-system   print the operating system\n"
      ;
    }
    pFVar1 = _stdout;
    __s1 = "arch";
    pcVar7 = (char *)dcgettext(0,pcVar7,5);
    fputs_unlocked(pcVar7,pFVar1);
    pFVar1 = _stdout;
    pcVar7 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
    fputs_unlocked(pcVar7,pFVar1);
    pFVar1 = _stdout;
    pcVar7 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
    fputs_unlocked(pcVar7,pFVar1);
    pcVar7 = "[";
    if (_uname_mode == 1) {
      __s1 = "uname";
    }
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
      iVar2 = strcmp(__s1,pcVar7);
      if (iVar2 == 0) break;
      pcVar7 = *(char **)((long)piVar6 + 0x10);
      piVar6 = (infomap *)((long)piVar6 + 0x10);
    } while (pcVar7 != (char *)0x0);
    pcVar7 = *(char **)((long)piVar6 + 8);
    if (*(char **)((long)piVar6 + 8) == (char *)0x0) {
      pcVar7 = __s1;
    }
    uVar4 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar4,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar5 = setlocale(5,(char *)0x0);
    if (pcVar5 != (char *)0x0) {
      iVar2 = strncmp(pcVar5,"en_",3);
      pFVar1 = _stdout;
      if (iVar2 != 0) {
        pcVar5 = (char *)dcgettext(0,
                                   "Report any translation bugs to <https://translationproject.org/team/>\n"
                                   ,5);
        fputs_unlocked(pcVar5,pFVar1);
      }
    }
    iVar2 = strcmp(__s1,"[");
    pcVar5 = "test";
    if (iVar2 != 0) {
      pcVar5 = __s1;
    }
    uVar4 = dcgettext(0,"Full documentation <%s%s>\n",5);
    __printf_chk(2,uVar4,"https://www.gnu.org/software/coreutils/",pcVar5);
    pcVar5 = "";
    if (__s1 == pcVar7) {
      pcVar5 = " invocation";
    }
    uVar4 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
    __printf_chk(2,uVar4,pcVar7,pcVar5);
  }
  else {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(_stderr,2,uVar3,uVar4);
  }
                    /* WARNING: Subroutine does not return */
  exit(status);
}



/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00100d4f) overlaps instruction at (ram,0x00100d4b)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int main(int argc,char **argv)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint *puVar5;
  char extraout_DH;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  bool bVar10;
  bool bVar11;
  utsname name;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  if (_uname_mode == 2) {
    iVar2 = getopt_long(argc,argv,&_LC5,arch_long_options,0);
    if (iVar2 != -1) {
      if (iVar2 == -0x83) {
        pcVar8 = "arch";
        if (_uname_mode == 1) {
          pcVar8 = "uname";
        }
        version_etc(_stdout,pcVar8,"GNU coreutils",_Version,"David MacKenzie","Karel Zak",0,"uname")
        ;
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
LAB_00100d11:
      if (iVar2 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      goto switchD_00100a3f_caseD_62;
    }
    if (argc == _optind) {
      iVar2 = uname((utsname *)&name);
      if (iVar2 == -1) goto LAB_00100d24;
      uVar6 = 0x10;
      uVar7 = 0x10;
      goto LAB_00100b70;
    }
  }
  else {
    uVar6 = 0;
    while (iVar2 = getopt_long(argc,argv,"asnrvmpio",uname_long_options,0), iVar2 != -1) {
      if (0x76 < iVar2) goto switchD_00100a3f_caseD_62;
      if (iVar2 < 0x61) {
        if (iVar2 == -0x83) {
          uVar3 = proper_name_lite("David MacKenzie","David MacKenzie");
          pcVar8 = "arch";
          if (_uname_mode == 1) {
            pcVar8 = "uname";
          }
          version_etc(_stdout,pcVar8,"GNU coreutils",_Version,uVar3,0);
                    /* WARNING: Subroutine does not return */
          exit(0);
        }
        goto LAB_00100d11;
      }
      switch(iVar2) {
      case 0x61:
        uVar6 = 0xffffffff;
        break;
      default:
        goto switchD_00100a3f_caseD_62;
      case 0x69:
        uVar6 = uVar6 | 0x40;
        break;
      case 0x6d:
        uVar6 = uVar6 | 0x10;
        break;
      case 0x6e:
        uVar6 = uVar6 | 2;
        break;
      case 0x6f:
        uVar6 = uVar6 | 0x80;
        break;
      case 0x70:
        uVar6 = uVar6 | 0x20;
        break;
      case 0x72:
        uVar6 = uVar6 | 4;
        break;
      case 0x73:
        uVar6 = uVar6 | 1;
        break;
      case 0x76:
        uVar6 = uVar6 | 8;
      }
    }
    if (argc == _optind) {
      uVar7 = 1;
      if (uVar6 != 0) {
        uVar7 = uVar6;
      }
      if ((uVar7 & 0x1f) != 0) {
        iVar2 = uname((utsname *)&name);
        if (iVar2 == -1) {
LAB_00100d24:
          uVar3 = dcgettext(0,"cannot get system name",5);
          puVar5 = (uint *)__errno_location();
          uVar9 = (ulong)*puVar5;
          bVar10 = false;
          bVar11 = true;
          error(1,uVar9,uVar3);
          if (bVar10 || bVar11) {
            *(char *)(uVar9 - 3) = *(char *)(uVar9 - 3) + extraout_DH;
          }
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if ((uVar7 & 1) != 0) {
          print_element((char *)&name);
        }
LAB_00100b70:
        if ((uVar7 & 2) != 0) {
          print_element(name.nodename);
        }
        if ((uVar7 & 4) != 0) {
          print_element(name.release);
        }
        if ((uVar7 & 8) != 0) {
          print_element(name.version);
        }
        if ((uVar7 & 0x10) != 0) {
          print_element(name.machine);
        }
      }
      if ((uVar7 & 0x20) == 0) {
        if ((uVar7 & 0x40) == 0) goto LAB_00100bb8;
        if (uVar6 != 0xffffffff) goto LAB_00100c27;
      }
      else if (uVar6 != 0xffffffff) {
        print_element("unknown");
        if ((uVar7 & 0x40) != 0) {
LAB_00100c27:
          print_element("unknown");
        }
LAB_00100bb8:
        if ((uVar7 & 0x80) == 0) goto LAB_00100bca;
      }
      print_element("GNU/Linux");
LAB_00100bca:
      pcVar8 = _stdout->_IO_write_ptr;
      if (pcVar8 < _stdout->_IO_write_end) {
        _stdout->_IO_write_ptr = pcVar8 + 1;
        *pcVar8 = '\n';
      }
      else {
        __overflow(_stdout,10);
      }
      if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
        return 0;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  uVar3 = quote(argv[_optind]);
  uVar4 = dcgettext(0,"extra operand %s",5);
  error(0,0,uVar4,uVar3);
switchD_00100a3f_caseD_62:
                    /* WARNING: Subroutine does not return */
  usage(1);
}


