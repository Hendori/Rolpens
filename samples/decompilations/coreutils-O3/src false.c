
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void usage(int param_1)

{
  FILE *pFVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 *puVar8;
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
  uVar5 = dcgettext(0,"Exit with a status code indicating failure.",5);
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
  __printf_chk(2,uVar5,"false");
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
    puVar8 = (undefined1 *)ppuVar2;
    if (*(char **)(puVar8 + 0x10) == (char *)0x0) break;
    iVar3 = strcmp("false",*(char **)(puVar8 + 0x10));
    ppuVar2 = (undefined **)(puVar8 + 0x10);
  } while (iVar3 != 0);
  pcVar6 = *(char **)(puVar8 + 0x18);
  if (pcVar6 == (char *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    pcVar6 = "false";
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar7 = setlocale(5,(char *)0x0);
    if (pcVar7 != (char *)0x0) goto LAB_0010020a;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","false");
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar7 = setlocale(5,(char *)0x0);
    if (pcVar7 != (char *)0x0) {
LAB_0010020a:
      pFVar1 = _stdout;
      if (((*pcVar7 != 'e') || (pcVar7[1] != 'n')) || (pcVar7[2] != '_')) {
        pcVar7 = (char *)dcgettext(0,
                                   "Report any translation bugs to <https://translationproject.org/team/>\n"
                                   ,5);
        fputs_unlocked(pcVar7,pFVar1);
      }
    }
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar7 = "";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","false");
    if (pcVar6 != "false") goto LAB_00100270;
  }
  pcVar6 = "false";
  pcVar7 = " invocation";
LAB_00100270:
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,pcVar6,pcVar7);
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] main(int param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  char *__s1;
  int iVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_1 != 2) {
    auVar3._8_8_ = param_3;
    auVar3._0_8_ = 1;
    return auVar3;
  }
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  __s1 = (char *)param_2[1];
  iVar1 = strcmp(__s1,"--help");
  if (iVar1 != 0) {
    iVar1 = strcmp(__s1,"--version");
    if (iVar1 == 0) {
      uVar2 = proper_name_lite("Jim Meyering","Jim Meyering");
      version_etc(_stdout,"false","GNU coreutils",_Version,uVar2,0);
    }
    auVar4._8_8_ = param_4;
    auVar4._0_8_ = 1;
    return auVar4;
  }
                    /* WARNING: Subroutine does not return */
  usage(1);
}


