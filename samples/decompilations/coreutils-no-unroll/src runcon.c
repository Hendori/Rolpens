
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
                    "Usage: %s CONTEXT COMMAND [args]\n  or:  %s [ -c ] [-u USER] [-r ROLE] [-t TYPE] [-l RANGE] COMMAND [args]\n"
                    ,5);
  __printf_chk(2,uVar3,uVar5,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "Run a program in a different SELinux security context.\nWith neither CONTEXT nor COMMAND, print the current security context.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  CONTEXT            Complete security context\n  -c, --compute      compute process transition context before modifying\n  -t, --type=TYPE    type (for same role as parent)\n  -u, --user=USER    user identity\n  -r, --role=ROLE    role\n  -l, --range=RANGE  levelrange\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  uVar5 = dcgettext(0,
                    "\nExit status:\n  125  if the %s command itself fails\n  126  if COMMAND is found but cannot be invoked\n  127  if COMMAND cannot be found\n  -    the exit status of COMMAND otherwise\n"
                    ,5);
  __printf_chk(2,uVar5,"runcon");
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
    iVar2 = strcmp("runcon",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)ppuVar7 + 0x10);
    ppuVar7 = (undefined **)((long)ppuVar7 + 0x10);
  } while (pcVar4 != (char *)0x0);
  pcVar4 = *(char **)((long)ppuVar7 + 8);
  if (pcVar4 == (char *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    pcVar4 = "runcon";
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) goto LAB_0010028d;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","runcon");
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) {
LAB_0010028d:
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
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","runcon");
    if (pcVar4 == "runcon") {
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

void main(int param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int *piVar5;
  char *pcVar6;
  long lVar7;
  long in_FS_OFFSET;
  bool bVar8;
  long local_68;
  long local_60;
  long local_58;
  undefined4 local_44;
  undefined8 local_40;
  
  local_40 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  _exit_failure = 0x7d;
  atexit((__func *)&close_stdout);
  bVar1 = false;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  lVar7 = 0;
  while( true ) {
    local_44 = 0;
    iVar2 = getopt_long(param_1,param_2,"+r:t:u:l:c",long_options,&local_44);
    if (iVar2 == -1) break;
    if (0x75 < iVar2) goto switchD_00100add_caseD_64;
    if (iVar2 < 99) {
      if (iVar2 == -0x83) goto LAB_00100b57;
      if (iVar2 == -0x82) {
        usage(0);
        break;
      }
      goto switchD_00100add_caseD_64;
    }
    switch(iVar2) {
    case 99:
      bVar1 = true;
      break;
    default:
      goto switchD_00100add_caseD_64;
    case 0x6c:
      bVar8 = lVar7 != 0;
      lVar7 = _optarg;
      if (bVar8) {
        pcVar6 = "multiple levelranges";
LAB_00100c65:
        do {
          uVar3 = dcgettext(0,pcVar6,5);
          error(0x7d,0,uVar3);
LAB_00100c7d:
          pcVar6 = "multiple roles";
        } while( true );
      }
      break;
    case 0x72:
      if (local_68 != 0) goto LAB_00100c7d;
      local_68 = _optarg;
      break;
    case 0x74:
      if (local_58 != 0) goto LAB_00100c59;
      local_58 = _optarg;
      break;
    case 0x75:
      if (local_60 != 0) {
        pcVar6 = "multiple users";
        goto LAB_00100c65;
      }
      local_60 = _optarg;
    }
  }
  uVar3 = _program_name;
  if (_optind == param_1) {
    piVar5 = __errno_location();
    *piVar5 = 0x5f;
    uVar3 = dcgettext(0,"failed to get current context",5);
    error(0x7d,*piVar5,uVar3);
LAB_00100cbd:
    pcVar6 = "you must specify -c, -t, -u, -l, -r, or context";
  }
  else {
    if (((lVar7 == 0 && local_58 == 0) && (local_60 == 0 && local_68 == 0)) && (!bVar1)) {
      if (param_1 <= _optind) goto LAB_00100cbd;
      _optind = _optind + 1;
    }
    if (_optind < param_1) {
      uVar4 = dcgettext(0,"%s may be used only on a SELinux kernel",5);
      error(0x7d,0,uVar4,uVar3);
LAB_00100c59:
      pcVar6 = "multiple types";
      goto LAB_00100c65;
    }
    pcVar6 = "no command specified";
  }
  uVar3 = dcgettext(0,pcVar6,5);
  error(0,0,uVar3);
switchD_00100add_caseD_64:
  usage(0x7d);
LAB_00100b57:
  uVar3 = proper_name_lite("Russell Coker","Russell Coker");
  version_etc(_stdout,"runcon","GNU coreutils",_Version,uVar3,0);
                    /* WARNING: Subroutine does not return */
  exit(0);
}


