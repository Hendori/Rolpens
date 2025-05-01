
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void usage(int status)

{
  FILE *pFVar1;
  infomap *piVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  infomap infomap [7];
  
  uVar5 = _program_name;
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
  piVar2 = infomap;
  do {
    puVar7 = (undefined1 *)piVar2;
    if (*(char **)(puVar7 + 0x10) == (char *)0x0) break;
    iVar3 = strcmp("true",*(char **)(puVar7 + 0x10));
    piVar2 = (infomap *)(puVar7 + 0x10);
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
  exit(status);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int main(int argc,char **argv)

{
  char *__s1;
  int iVar1;
  undefined8 uVar2;
  
  if (argc != 2) {
    return 0;
  }
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  __s1 = argv[1];
  iVar1 = strcmp(__s1,"--help");
  if (iVar1 != 0) {
    iVar1 = strcmp(__s1,"--version");
    if (iVar1 == 0) {
      uVar2 = proper_name_lite("Jim Meyering","Jim Meyering");
      version_etc(_stdout,&_LC0,"GNU coreutils",_Version,uVar2,0);
    }
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  usage(0);
}


