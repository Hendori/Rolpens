
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void usage(int param_1)

{
  FILE *pFVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  long in_FS_OFFSET;
  undefined *local_a8;
  char *pcStack_a0;
  char *local_98 [5];
  char *pcStack_70;
  char *local_68;
  char *pcStack_60;
  char *local_58;
  char *pcStack_50;
  undefined1 local_48 [16];
  undefined8 local_30;
  
  uVar5 = _program_name;
  local_30 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  uVar4 = dcgettext(0,"Usage: %s [ignored command line arguments]\n  or:  %s OPTION\n",5);
  __printf_chk(2,uVar4,uVar5,uVar5);
  uVar5 = dcgettext(0,"Exit with a status code indicating success.",5);
  __printf_chk(2,&_LC6,uVar5);
  pFVar1 = _stdout;
  pcVar6 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar6,pFVar1);
  pFVar1 = _stdout;
  pcVar6 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar6,pFVar1);
  uVar5 = dcgettext(0,
                    "\nYour shell may have its own version of %s, which usually supersedes\nthe version described here.  Please refer to your shell\'s documentation\nfor details about the options it supports.\n"
                    ,5);
  __printf_chk(2,uVar5,&_LC0);
  local_a8 = &_LC10;
  pcStack_a0 = "test invocation";
  local_98[0] = "coreutils";
  local_98[1] = "Multi-call invocation";
  local_98[2] = "sha224sum";
  local_98[3] = "sha2 utilities";
  local_98[4] = "sha256sum";
  pcStack_70 = "sha2 utilities";
  local_68 = "sha384sum";
  pcStack_60 = "sha2 utilities";
  local_58 = "sha512sum";
  pcStack_50 = "sha2 utilities";
  local_48 = (undefined1  [16])0x0;
  ppuVar2 = &local_a8;
  do {
    puVar7 = (undefined1 *)ppuVar2;
    if (*(char **)(puVar7 + 0x10) == (char *)0x0) break;
    iVar3 = strcmp("true",*(char **)(puVar7 + 0x10));
    ppuVar2 = (undefined **)(puVar7 + 0x10);
  } while (iVar3 != 0);
  puVar8 = *(undefined **)(puVar7 + 0x18);
  if (puVar8 == (undefined *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    puVar8 = &_LC0;
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) goto LAB_0010020a;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC0);
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) {
LAB_0010020a:
      pFVar1 = _stdout;
      if (((*pcVar6 != 'e') || (pcVar6[1] != 'n')) || (pcVar6[2] != '_')) {
        pcVar6 = (char *)dcgettext(0,
                                   "Report any translation bugs to <https://translationproject.org/team/>\n"
                                   ,5);
        fputs_unlocked(pcVar6,pFVar1);
      }
    }
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = "";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC0);
    if (puVar8 != &_LC0) goto LAB_00100270;
  }
  puVar8 = &_LC0;
  pcVar6 = " invocation";
LAB_00100270:
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,puVar8,pcVar6);
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] main(int param_1,undefined8 *param_2,ulong param_3,ulong param_4)

{
  char *__s1;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  undefined8 uVar4;
  
  if (param_1 != 2) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = param_3;
    return auVar1 << 0x40;
  }
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  __s1 = (char *)param_2[1];
  iVar3 = strcmp(__s1,"--help");
  if (iVar3 != 0) {
    iVar3 = strcmp(__s1,"--version");
    if (iVar3 == 0) {
      uVar4 = proper_name_lite("Jim Meyering","Jim Meyering");
      version_etc(_stdout,&_LC0,"GNU coreutils",_Version,uVar4,0);
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = param_4;
    return auVar2 << 0x40;
  }
                    /* WARNING: Subroutine does not return */
  usage(0);
}


