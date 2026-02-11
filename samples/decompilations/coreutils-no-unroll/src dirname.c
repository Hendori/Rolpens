
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
  uVar3 = dcgettext(0,"Usage: %s [OPTION] NAME...\n",5);
  __printf_chk(2,uVar3,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "Output each NAME with its last non-slash component and trailing slashes\nremoved; if NAME contains no /\'s, output \'.\' (meaning the current directory).\n\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"  -z, --zero     end each output line with NUL, not newline\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  uVar5 = _program_name;
  uVar3 = dcgettext(0,
                    "\nExamples:\n  %s /usr/bin/          -> \"/usr\"\n  %s dir1/str dir2/str  -> \"dir1\" followed by \"dir2\"\n  %s stdio.h            -> \".\"\n"
                    ,5);
  __printf_chk(2,uVar3,uVar5,uVar5,uVar5);
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
    iVar2 = strcmp("dirname",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)ppuVar7 + 0x10);
    ppuVar7 = (undefined **)((long)ppuVar7 + 0x10);
  } while (pcVar4 != (char *)0x0);
  pcVar4 = *(char **)((long)ppuVar7 + 8);
  if (pcVar4 == (char *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    pcVar4 = "dirname";
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) goto LAB_0010026d;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","dirname");
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) {
LAB_0010026d:
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
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","dirname");
    if (pcVar4 == "dirname") {
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
  byte *pbVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  size_t __n;
  undefined1 *__ptr;
  ulong uStack_38;
  
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  bVar3 = false;
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  do {
    iVar4 = getopt_long(param_1,param_2,&_LC27,longopts,0);
    if (iVar4 == -1) {
      if (_optind < param_1) {
        for (; _optind < param_1; _optind = _optind + 1) {
          __ptr = (undefined1 *)param_2[_optind];
          __n = dir_len(__ptr);
          if (__n == 0) {
            __n = 1;
            __ptr = &dot_0;
          }
          fwrite_unlocked(__ptr,1,__n,_stdout);
          pbVar1 = (byte *)_stdout->_IO_write_ptr;
          if (pbVar1 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = (char *)(pbVar1 + 1);
            *pbVar1 = -!bVar3 & 10;
          }
          else {
            __overflow(_stdout,-(uint)!bVar3 & 10);
          }
        }
        auVar2._8_8_ = 0;
        auVar2._0_8_ = uStack_38;
        return auVar2 << 0x40;
      }
      uVar5 = dcgettext(0,"missing operand",5);
      error(0,0,uVar5);
      goto LAB_0010092d;
    }
    if (iVar4 == -0x82) {
                    /* WARNING: Subroutine does not return */
      usage(0);
    }
    bVar3 = true;
  } while (iVar4 == 0x7a);
  if (iVar4 == -0x83) {
    uVar5 = proper_name_lite("Jim Meyering","Jim Meyering");
    uVar6 = proper_name_lite("David MacKenzie","David MacKenzie");
    version_etc(_stdout,"dirname","GNU coreutils",_Version,uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
    exit(0);
  }
LAB_0010092d:
                    /* WARNING: Subroutine does not return */
  usage(1);
}


