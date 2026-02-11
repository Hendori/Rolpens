
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
    iVar2 = strcmp("groups",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)ppuVar7 + 0x10);
    ppuVar7 = (undefined **)((long)ppuVar7 + 0x10);
  } while (pcVar4 != (char *)0x0);
  pcVar4 = *(char **)((long)ppuVar7 + 8);
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
  exit(param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] main(int param_1,undefined8 *param_2)

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
  undefined1 auVar13 [16];
  undefined8 uStack_38;
  
  _Var5 = 0x100357;
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  iVar3 = getopt_long(param_1,param_2,&_LC3,longopts,0);
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
  if (_optind != param_1) {
    bVar2 = 1;
    for (; _optind < param_1; _optind = _optind + 1) {
      ppVar9 = getpwnam((char *)param_2[_optind]);
      if (ppVar9 == (passwd *)0x0) {
        uVar7 = quote(param_2[_optind]);
        uVar8 = dcgettext(0,"%s: no such user",5);
        bVar1 = 0;
        error(0,0,uVar8,uVar7);
      }
      else {
        _Var4 = ppVar9->pw_uid;
        _Var5 = ppVar9->pw_gid;
        __printf_chk(2,"%s : ",param_2[_optind]);
        bVar1 = print_group_list(param_2[_optind],_Var4,_Var5,_Var5,1,0x20);
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
  auVar13._1_7_ = 0;
  auVar13[0] = bVar2 ^ 1;
  auVar13._8_8_ = uStack_38;
  return auVar13;
}


