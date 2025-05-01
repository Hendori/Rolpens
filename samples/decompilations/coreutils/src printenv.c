
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
    iVar2 = strcmp("printenv",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)piVar7 + 0x10);
    piVar7 = (infomap *)((long)piVar7 + 0x10);
  } while (pcVar4 != (char *)0x0);
  pcVar4 = *(char **)((long)piVar7 + 8);
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
  exit(status);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int main(int argc,char **argv)

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
  
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  bVar2 = false;
  textdomain("coreutils");
  _exit_failure = 2;
  atexit((__func *)&close_stdout);
  while (iVar4 = getopt_long(argc,argv,"+iu:0",longopts,0), iVar4 != -1) {
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
  if (_optind < argc) {
    for (; (int)lVar13 < argc; lVar13 = lVar13 + 1) {
      pcVar8 = strchr(argv[lVar13],0x3d);
      if (pcVar8 == (char *)0x0) {
        iVar12 = 0;
        for (plVar11 = _environ; pcVar8 = (char *)*plVar11, pcVar8 != (char *)0x0;
            plVar11 = plVar11 + 1) {
          cVar3 = *pcVar8;
          pcVar10 = argv[lVar13];
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
    uVar5 = (uint)(argc - _optind == iVar4);
  }
  else {
    for (plVar11 = _environ; *plVar11 != 0; plVar11 = plVar11 + 1) {
      __printf_chk(2,&_LC29,*plVar11,-!bVar2 & 10);
    }
    uVar5 = 1;
  }
  return uVar5 ^ 1;
}


