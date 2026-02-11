
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void print_element(char *param_1)

{
  char *pcVar1;
  
  if (printed_0 != '\0') {
    pcVar1 = _stdout->_IO_write_ptr;
    if (pcVar1 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = pcVar1 + 1;
      *pcVar1 = ' ';
    }
    else {
      __overflow(_stdout,0x20);
    }
  }
  printed_0 = 1;
  fputs_unlocked(param_1,_stdout);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void usage(int param_1)

{
  FILE *pFVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined **ppuVar6;
  char *__s1;
  char *pcVar7;
  long in_FS_OFFSET;
  undefined *local_b8;
  char *pcStack_b0;
  char *local_a8 [4];
  char *local_88;
  char *pcStack_80;
  char *local_78;
  char *pcStack_70;
  char *local_68;
  char *pcStack_60;
  undefined1 local_58 [16];
  undefined8 local_40;
  
  uVar4 = _program_name;
  ppuVar6 = &local_b8;
  local_40 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
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
    local_b8 = &_LC2;
    pcStack_b0 = "test invocation";
    local_a8[0] = "coreutils";
    local_a8[1] = "Multi-call invocation";
    local_a8[2] = "sha224sum";
    local_a8[3] = "sha2 utilities";
    local_88 = "sha256sum";
    pcStack_80 = "sha2 utilities";
    local_78 = "sha384sum";
    pcStack_70 = "sha2 utilities";
    local_68 = "sha512sum";
    pcStack_60 = "sha2 utilities";
    local_58 = (undefined1  [16])0x0;
    do {
      iVar2 = strcmp(__s1,pcVar7);
      if (iVar2 == 0) break;
      pcVar7 = *(char **)((long)ppuVar6 + 0x10);
      ppuVar6 = (undefined **)((long)ppuVar6 + 0x10);
    } while (pcVar7 != (char *)0x0);
    pcVar7 = *(char **)((long)ppuVar6 + 8);
    if (*(char **)((long)ppuVar6 + 8) == (char *)0x0) {
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
  exit(param_1);
}



/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00100d4f) overlaps instruction at (ram,0x00100d4b)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 main(int param_1,char *param_2)

{
  int iVar1;
  undefined8 uVar2;
  uint *puVar3;
  char extraout_DH;
  uint uVar4;
  char *pcVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  bool bVar7;
  bool bVar8;
  utsname local_1c8;
  long local_40;
  
  pcVar5 = "coreutils";
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*(undefined8 *)param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  if (_uname_mode == 2) {
    iVar1 = getopt_long(param_1,param_2,&_LC5,arch_long_options,0);
    if (iVar1 == -1) {
      if (param_1 == _optind) {
        iVar1 = uname(&local_1c8);
        if (iVar1 == -1) goto LAB_00100d24;
        uVar4 = 0x10;
        param_2 = (char *)0x10;
        goto LAB_00100b70;
      }
      goto LAB_00100c82;
    }
    if (iVar1 == -0x83) {
      pcVar5 = "arch";
      if (_uname_mode == 1) {
        pcVar5 = "uname";
      }
      version_etc(_stdout,pcVar5,"GNU coreutils",_Version,"David MacKenzie","Karel Zak",0,"uname");
                    /* WARNING: Subroutine does not return */
      exit(0);
    }
LAB_00100d11:
    if (iVar1 == -0x82) {
      usage(0);
      goto LAB_00100d1f;
    }
switchD_00100a3f_caseD_62:
    uVar4 = (uint)pcVar5;
    usage(1);
LAB_00100cbd:
    print_element(local_1c8.machine);
  }
  else {
    pcVar5 = (char *)0x0;
    while( true ) {
      iVar1 = getopt_long(param_1,param_2,"asnrvmpio",uname_long_options,0);
      uVar4 = (uint)pcVar5;
      if (iVar1 == -1) break;
      if (0x76 < iVar1) goto switchD_00100a3f_caseD_62;
      if (iVar1 < 0x61) {
        if (iVar1 == -0x83) {
          uVar2 = proper_name_lite("David MacKenzie","David MacKenzie");
          pcVar5 = "arch";
          if (_uname_mode == 1) {
            pcVar5 = "uname";
          }
          version_etc(_stdout,pcVar5,"GNU coreutils",_Version,uVar2,0);
                    /* WARNING: Subroutine does not return */
          exit(0);
        }
        goto LAB_00100d11;
      }
      switch(iVar1) {
      case 0x61:
        pcVar5 = (char *)0xffffffff;
        break;
      default:
        goto switchD_00100a3f_caseD_62;
      case 0x69:
        pcVar5 = (char *)(ulong)(uVar4 | 0x40);
        break;
      case 0x6d:
        pcVar5 = (char *)(ulong)(uVar4 | 0x10);
        break;
      case 0x6e:
        pcVar5 = (char *)(ulong)(uVar4 | 2);
        break;
      case 0x6f:
        pcVar5 = (char *)((ulong)pcVar5 | 0x80);
        break;
      case 0x70:
        pcVar5 = (char *)(ulong)(uVar4 | 0x20);
        break;
      case 0x72:
        pcVar5 = (char *)(ulong)(uVar4 | 4);
        break;
      case 0x73:
        pcVar5 = (char *)(ulong)(uVar4 | 1);
        break;
      case 0x76:
        pcVar5 = (char *)(ulong)(uVar4 | 8);
      }
    }
    if (param_1 != _optind) {
LAB_00100c82:
      pcVar5 = (char *)quote(*(undefined8 *)(param_2 + (long)_optind * 8));
      uVar2 = dcgettext(0,"extra operand %s",5);
      error(0,0,uVar2,pcVar5);
      goto switchD_00100a3f_caseD_62;
    }
    param_2 = (char *)0x1;
    if (uVar4 != 0) {
      param_2 = pcVar5;
    }
    if (((ulong)param_2 & 0x1f) != 0) {
      iVar1 = uname(&local_1c8);
      if (iVar1 == -1) {
LAB_00100d24:
        uVar2 = dcgettext(0,"cannot get system name",5);
        puVar3 = (uint *)__errno_location();
        uVar6 = (ulong)*puVar3;
        bVar7 = false;
        bVar8 = true;
        error(1,uVar6,uVar2);
        if (bVar7 || bVar8) {
          *(char *)(uVar6 - 3) = *(char *)(uVar6 - 3) + extraout_DH;
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (((ulong)param_2 & 1) != 0) {
        print_element();
      }
LAB_00100b70:
      if (((ulong)param_2 & 2) != 0) {
        print_element(local_1c8.nodename);
      }
      if (((ulong)param_2 & 4) != 0) {
        print_element(local_1c8.release);
      }
      if (((ulong)param_2 & 8) != 0) {
        print_element(local_1c8.version);
      }
      if (((ulong)param_2 & 0x10) == 0) goto LAB_00100b98;
      goto LAB_00100cbd;
    }
  }
LAB_00100b98:
  if (((ulong)param_2 & 0x20) == 0) {
    if (((ulong)param_2 & 0x40) == 0) goto LAB_00100bb8;
    if (uVar4 != 0xffffffff) goto LAB_00100c27;
LAB_00100bbe:
    print_element("GNU/Linux");
  }
  else {
    if (uVar4 == 0xffffffff) goto LAB_00100bbe;
    print_element("unknown");
    if (((ulong)param_2 & 0x40) != 0) {
LAB_00100c27:
      print_element("unknown");
    }
LAB_00100bb8:
    if (((ulong)param_2 & 0x80) != 0) goto LAB_00100bbe;
  }
  pcVar5 = _stdout->_IO_write_ptr;
  if (pcVar5 < _stdout->_IO_write_end) {
    _stdout->_IO_write_ptr = pcVar5 + 1;
    *pcVar5 = '\n';
  }
  else {
    __overflow(_stdout,10);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
LAB_00100d1f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


