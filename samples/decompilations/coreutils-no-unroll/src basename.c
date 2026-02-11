
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void perform_basename(undefined8 param_1,char *param_2,char param_3)

{
  byte *pbVar1;
  char *__s;
  size_t sVar2;
  char *pcVar3;
  char *pcVar4;
  
  __s = (char *)base_name();
  strip_trailing_slashes(__s);
  if ((param_2 != (char *)0x0) && (*__s != '/')) {
    sVar2 = strlen(__s);
    pcVar4 = __s + sVar2;
    sVar2 = strlen(param_2);
    pcVar3 = param_2 + sVar2;
    while (__s < pcVar4) {
      if (pcVar3 <= param_2) {
        if (__s < pcVar4) {
          *pcVar4 = '\0';
        }
        break;
      }
      pcVar4 = pcVar4 + -1;
      pcVar3 = pcVar3 + -1;
      if (*pcVar4 != *pcVar3) break;
    }
  }
  fputs_unlocked(__s,_stdout);
  pbVar1 = (byte *)_stdout->_IO_write_ptr;
  if (pbVar1 < _stdout->_IO_write_end) {
    _stdout->_IO_write_ptr = (char *)(pbVar1 + 1);
    *pbVar1 = -(param_3 == '\0') & 10;
  }
  else {
    __overflow(_stdout,-(uint)(param_3 == '\0') & 10);
  }
  free(__s);
  return;
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
    goto LAB_0010014a;
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
    iVar2 = strcmp("basename",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)ppuVar7 + 0x10);
    ppuVar7 = (undefined **)((long)ppuVar7 + 0x10);
  } while (pcVar4 != (char *)0x0);
  pcVar4 = *(char **)((long)ppuVar7 + 8);
  if (pcVar4 == (char *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    pcVar4 = "basename";
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) goto LAB_0010038d;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","basename");
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
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","basename");
    if (pcVar4 == "basename") {
      pcVar6 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,pcVar4,pcVar6);
LAB_0010014a:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 main(int param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 local_39;
  
  bVar1 = false;
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  local_39 = 0;
  uVar3 = 0;
LAB_00100a23:
  do {
    iVar2 = getopt_long(param_1,param_2,"+as:z",longopts,0);
    if (iVar2 == -1) {
      lVar4 = (long)_optind;
      if (_optind < param_1) {
        if (bVar1) {
          while ((int)lVar4 < param_1) {
            perform_basename(param_2[lVar4],uVar3,local_39);
            _optind = _optind + 1;
            lVar4 = (long)_optind;
          }
        }
        else {
          if (_optind + 2 < param_1) {
            uVar3 = quote(param_2[lVar4 + 2]);
            uVar5 = dcgettext(0,"extra operand %s",5);
            error(0,0,uVar5,uVar3);
                    /* WARNING: Subroutine does not return */
            usage(1);
          }
          uVar3 = 0;
          if (_optind + 2 == param_1) {
            uVar3 = param_2[lVar4 + 1];
          }
          perform_basename(param_2[lVar4],uVar3,local_39);
        }
        return 0;
      }
      uVar3 = dcgettext(0,"missing operand",5);
      error(0,0,uVar3);
LAB_00100b58:
                    /* WARNING: Subroutine does not return */
      usage(1);
    }
    uVar5 = uVar3;
    if (iVar2 == 0x61) {
LAB_00100a67:
      bVar1 = true;
      uVar3 = uVar5;
      goto LAB_00100a23;
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
      goto LAB_00100b58;
    }
    uVar5 = _optarg;
    if (iVar2 == 0x73) goto LAB_00100a67;
    if (iVar2 != 0x7a) goto LAB_00100b58;
    local_39 = 1;
  } while( true );
}


