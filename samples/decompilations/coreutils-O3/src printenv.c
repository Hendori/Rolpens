
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
  uVar3 = dcgettext(0,
                    "Usage: %s [OPTION]... [VARIABLE]...\nPrint the values of the specified environment VARIABLE(s).\nIf no VARIABLE is specified, print name and value pairs for them all.\n\n"
                    ,5);
  __printf_chk(2,uVar3,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"  -0, --null     end each output line with NUL, not newline\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  uVar5 = dcgettext(0,
                    "\nYour shell may have its own version of %s, which usually supersedes\nthe version described here.  Please refer to your shell\'s documentation\nfor details about the options it supports.\n"
                    ,5);
  __printf_chk(2,uVar5,"printenv");
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
    iVar2 = strcmp("printenv",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)ppuVar7 + 0x10);
    ppuVar7 = (undefined **)((long)ppuVar7 + 0x10);
  } while (pcVar4 != (char *)0x0);
  pcVar4 = *(char **)((long)ppuVar7 + 8);
  if (pcVar4 == (char *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    pcVar4 = "printenv";
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) goto LAB_0010023d;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","printenv");
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) {
LAB_0010023d:
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
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","printenv");
    if (pcVar4 == "printenv") {
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
  char cVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  long *plVar11;
  int iVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined8 uStack_38;
  
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  bVar2 = false;
  textdomain("coreutils");
  _exit_failure = 2;
  atexit((__func *)&close_stdout);
  while (iVar4 = getopt_long(param_1,param_2,"+iu:0",longopts,0), iVar4 != -1) {
    if (iVar4 == -0x82) {
                    /* WARNING: Subroutine does not return */
      usage(0);
    }
    bVar2 = true;
    if (iVar4 != 0x30) {
      if (iVar4 != -0x83) {
                    /* WARNING: Subroutine does not return */
        usage(2);
      }
      uVar6 = proper_name_lite("Richard Mlynarik","Richard Mlynarik");
      uVar7 = proper_name_lite("David MacKenzie","David MacKenzie");
      version_etc(_stdout,"printenv","GNU coreutils",_Version,uVar7,uVar6,0);
                    /* WARNING: Subroutine does not return */
      exit(0);
    }
  }
  lVar13 = (long)_optind;
  iVar4 = 0;
  if (_optind < param_1) {
    for (; (int)lVar13 < param_1; lVar13 = lVar13 + 1) {
      pcVar8 = strchr((char *)param_2[lVar13],0x3d);
      if (pcVar8 == (char *)0x0) {
        iVar12 = 0;
        for (plVar11 = _environ; pcVar8 = (char *)*plVar11, pcVar8 != (char *)0x0;
            plVar11 = plVar11 + 1) {
          cVar3 = *pcVar8;
          pcVar10 = (char *)param_2[lVar13];
          while (cVar3 != '\0') {
            while( true ) {
              pcVar9 = pcVar8;
              cVar1 = *pcVar10;
              if (cVar1 == '\0') goto LAB_00100969;
              pcVar8 = pcVar9 + 1;
              pcVar10 = pcVar10 + 1;
              if (cVar3 != cVar1) goto LAB_00100969;
              cVar3 = pcVar9[1];
              if (cVar3 != '=') break;
              if (*pcVar10 == '\0') {
                __printf_chk(2,&_LC29,pcVar9 + 2,-!bVar2 & 10);
                iVar12 = 1;
                goto LAB_00100969;
              }
            }
          }
LAB_00100969:
        }
        iVar4 = iVar4 + iVar12;
      }
    }
    uVar5 = (uint)(param_1 - _optind == iVar4);
  }
  else {
    for (plVar11 = _environ; *plVar11 != 0; plVar11 = plVar11 + 1) {
      __printf_chk(2,&_LC29,*plVar11,-!bVar2 & 10);
    }
    uVar5 = 1;
  }
  auVar14._0_4_ = uVar5 ^ 1;
  auVar14._4_4_ = 0;
  auVar14._8_8_ = uStack_38;
  return auVar14;
}


