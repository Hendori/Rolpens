
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
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... [USERNAME]...\n",5);
  __printf_chk(2,uVar3,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "Print group memberships for each USERNAME or, if no USERNAME is specified, for\nthe current process (which may differ if the groups database has changed).\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
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
    iVar2 = strcmp("groups",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)piVar7 + 0x10);
    piVar7 = (infomap *)((long)piVar7 + 0x10);
  } while (pcVar4 != (char *)0x0);
  pcVar4 = *(char **)((long)piVar7 + 8);
  if (pcVar4 == (char *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    pcVar4 = "groups";
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) goto LAB_0010021d;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","groups");
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) {
LAB_0010021d:
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
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","groups");
    if (pcVar4 == "groups") {
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
  byte bVar1;
  byte bVar2;
  int iVar3;
  __uid_t _Var4;
  __gid_t _Var5;
  __gid_t _Var6;
  undefined8 uVar7;
  undefined8 uVar8;
  passwd *ppVar9;
  int *piVar10;
  ulong uVar11;
  ulong extraout_RDX;
  char *pcVar12;
  undefined8 in_R9;
  
  _Var5 = 0x100357;
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  iVar3 = getopt_long(argc,argv,&_LC3,longopts,0);
  if (iVar3 != -1) {
    if (iVar3 == -0x83) {
      uVar7 = proper_name_lite("James Youngman","James Youngman");
      uVar8 = proper_name_lite("David MacKenzie","David MacKenzie");
      version_etc(_stdout,"groups","GNU coreutils",_Version,uVar8,uVar7,0,in_R9);
                    /* WARNING: Subroutine does not return */
      exit(0);
    }
    if (iVar3 == -0x82) {
                    /* WARNING: Subroutine does not return */
      usage(0);
    }
                    /* WARNING: Subroutine does not return */
    usage(1);
  }
  if (_optind != argc) {
    bVar2 = 1;
    for (; _optind < argc; _optind = _optind + 1) {
      ppVar9 = getpwnam(argv[_optind]);
      if (ppVar9 == (passwd *)0x0) {
        uVar7 = quote(argv[_optind]);
        uVar8 = dcgettext(0,"%s: no such user",5);
        bVar1 = 0;
        error(0,0,uVar8,uVar7);
      }
      else {
        _Var4 = ppVar9->pw_uid;
        _Var5 = ppVar9->pw_gid;
        __printf_chk(2,"%s : ",argv[_optind]);
        bVar1 = print_group_list(argv[_optind],_Var4,_Var5,_Var5,1,0x20);
        if (bVar1 != 0) {
          bVar1 = bVar2;
        }
        pcVar12 = _stdout->_IO_write_ptr;
        if (pcVar12 < _stdout->_IO_write_end) {
          _stdout->_IO_write_ptr = pcVar12 + 1;
          *pcVar12 = '\n';
        }
        else {
          __overflow(_stdout,10);
        }
      }
      bVar2 = bVar1;
    }
    goto LAB_0010084b;
  }
  piVar10 = __errno_location();
  *piVar10 = 0;
  _Var4 = getuid();
  if ((_Var4 == 0xffffffff) && (pcVar12 = "cannot get real UID", *piVar10 != 0)) {
LAB_001008d9:
    uVar7 = dcgettext(0,pcVar12,5);
    error(1,*piVar10,uVar7);
    uVar11 = extraout_RDX;
  }
  else {
    *piVar10 = 0;
    _Var5 = getegid();
    if ((_Var5 == 0xffffffff) && (*piVar10 != 0)) {
      pcVar12 = "cannot get effective GID";
      goto LAB_001008d9;
    }
    *piVar10 = 0;
    _Var6 = getgid();
    uVar11 = (ulong)_Var6;
    if ((_Var6 == 0xffffffff) && (*piVar10 != 0)) {
      pcVar12 = "cannot get real GID";
      goto LAB_001008d9;
    }
  }
  bVar2 = print_group_list(0,_Var4,uVar11,_Var5,1,0x20);
  pcVar12 = _stdout->_IO_write_ptr;
  if (pcVar12 < _stdout->_IO_write_end) {
    _stdout->_IO_write_ptr = pcVar12 + 1;
    *pcVar12 = '\n';
  }
  else {
    __overflow(_stdout,10);
  }
LAB_0010084b:
  return (uint)(bVar2 ^ 1);
}


