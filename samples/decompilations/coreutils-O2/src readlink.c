
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
    iVar2 = strcmp("readlink",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)ppuVar7 + 0x10);
    ppuVar7 = (undefined **)((long)ppuVar7 + 0x10);
  } while (pcVar4 != (char *)0x0);
  pcVar4 = *(char **)((long)ppuVar7 + 8);
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
  exit(param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint main(int param_1,undefined8 *param_2)

{
  byte *pbVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  _IO_FILE *p_Var5;
  uint *puVar6;
  char *__s;
  byte bVar7;
  int iVar8;
  bool bVar9;
  uint local_40;
  uint local_3c;
  
  iVar8 = -1;
  bVar7 = 0;
  __s = "efmnqsvz";
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  puVar6 = &switchD_00100b4d::switchdataD_00100da4;
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  local_40 = local_40 & 0xffffff00;
  do {
    iVar2 = getopt_long(param_1,param_2,"efmnqsvz",longopts,0);
    if (iVar2 == -1) {
      if (_optind < param_1) {
        if (param_1 - _optind != 1) {
          if (no_newline != '\0') {
            uVar3 = dcgettext(0,"ignoring --no-newline with multiple arguments",5);
            error(0,0,uVar3);
          }
          no_newline = '\0';
          if (param_1 <= _optind) {
            no_newline = 0;
            return 0;
          }
        }
        local_3c = -(uint)((char)local_40 == '\0') & 10;
        bVar9 = (char)local_40 == '\0';
        local_40 = 0;
        bVar7 = -bVar9 & 10;
        goto LAB_00100ca3;
      }
      uVar3 = dcgettext(0,"missing operand",5);
      error(0,0,uVar3);
switchD_00100b4d_caseD_67:
      p_Var5 = (_IO_FILE *)0x1;
      usage();
      do {
        __overflow(p_Var5,local_3c);
        while( true ) {
          do {
            free(__s);
            while( true ) {
              _optind = _optind + 1;
              if (param_1 <= _optind) {
                return local_40;
              }
LAB_00100ca3:
              puVar6 = (uint *)param_2[_optind];
              if (iVar8 == -1) {
                __s = (char *)areadlink_with_size(puVar6,0x3f);
              }
              else {
                __s = (char *)canonicalize_filename_mode(puVar6,iVar8);
              }
              if (__s != (char *)0x0) break;
              if (verbose != '\0') {
LAB_00100d47:
                uVar3 = quotearg_n_style_colon(0,3,puVar6);
                piVar4 = __errno_location();
                error(0,*piVar4,&_LC31,uVar3);
              }
              local_40 = 1;
            }
            fputs_unlocked(__s,_stdout);
          } while (no_newline != '\0');
          pbVar1 = (byte *)_stdout->_IO_write_ptr;
          p_Var5 = _stdout;
          if (_stdout->_IO_write_end <= pbVar1) break;
          _stdout->_IO_write_ptr = (char *)(pbVar1 + 1);
          *pbVar1 = bVar7;
        }
      } while( true );
    }
    if (0x7a < iVar2) goto switchD_00100b4d_caseD_67;
    if (iVar2 < 0x65) {
      if (iVar2 == -0x83) {
        uVar3 = proper_name_lite("Dmitry V. Levin","Dmitry V. Levin");
        version_etc(_stdout,"readlink","GNU coreutils",_Version,uVar3,0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar2 == -0x82) {
        usage(0);
        goto LAB_00100d47;
      }
      goto switchD_00100b4d_caseD_67;
    }
    switch(iVar2) {
    case 0x65:
      iVar8 = 0;
      break;
    case 0x66:
      iVar8 = 1;
      break;
    default:
      goto switchD_00100b4d_caseD_67;
    case 0x6d:
      iVar8 = 2;
      break;
    case 0x6e:
      no_newline = '\x01';
      break;
    case 0x71:
    case 0x73:
      verbose = '\0';
      break;
    case 0x76:
      verbose = '\x01';
      break;
    case 0x7a:
      local_40 = CONCAT31(local_40._1_3_,1);
    }
  } while( true );
}


