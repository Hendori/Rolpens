
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void usage(int param_1)

{
  FILE *pFVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined1 **ppuVar6;
  undefined1 *puVar7;
  long in_FS_OFFSET;
  undefined1 *local_a8;
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
  ppuVar6 = &local_a8;
  local_30 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(_stderr,2,uVar3,uVar5);
    goto LAB_00100059;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... [FILE]...\n",5);
  __printf_chk(2,uVar3,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "Remove (unlink) the FILE(s).\n\n  -f, --force           ignore nonexistent files and arguments, never prompt\n  -i                    prompt before every removal\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -I                    prompt once before removing more than three files, or\n                          when removing recursively; less intrusive than -i,\n                          while still giving protection against most mistakes\n      --interactive[=WHEN]  prompt according to WHEN: never, once (-I), or\n                          always (-i); without WHEN, prompt always\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --one-file-system  when removing a hierarchy recursively, skip any\n                          directory that is on a file system different from\n                          that of the corresponding command line argument\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --no-preserve-root  do not treat \'/\' specially\n      --preserve-root[=all]  do not remove \'/\' (default);\n                              with \'all\', reject any command line argument\n                              on a separate device from its parent\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -r, -R, --recursive   remove directories and their contents recursively\n  -d, --dir             remove empty directories\n  -v, --verbose         explain what is being done\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nBy default, rm does not remove directories.  Use the --recursive (-r or -R)\noption to remove each listed directory, too, along with all of its contents.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nAny attempt to remove a file whose last file name component is \'.\' or \'..\'\nis rejected with a diagnostic.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  uVar5 = _program_name;
  uVar3 = dcgettext(0,
                    "\nTo remove a file whose name starts with a \'-\', for example \'-foo\',\nuse one of these commands:\n  %s -- -foo\n\n  %s ./-foo\n"
                    ,5);
  __printf_chk(2,uVar3,uVar5,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nIf you use rm to remove a file, it might be possible to recover\nsome of its contents, given sufficient expertise and/or time.  For greater\nassurance that the contents are unrecoverable, consider using shred(1).\n"
                             ,5);
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
    if (((*pcVar4 == 'r') && (pcVar4[1] == 'm')) && (pcVar4[2] == '\0')) break;
    pcVar4 = *(char **)((long)ppuVar6 + 0x10);
    ppuVar6 = (undefined1 **)((long)ppuVar6 + 0x10);
  } while (pcVar4 != (char *)0x0);
  puVar7 = *(undefined1 **)((long)ppuVar6 + 8);
  if (puVar7 == (undefined1 *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    puVar7 = &_LC1;
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) goto LAB_0010035c;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC1);
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
LAB_0010035c:
      iVar2 = strncmp(pcVar4,"en_",3);
      pFVar1 = _stdout;
      if (iVar2 != 0) {
        pcVar4 = (char *)dcgettext(0,
                                   "Report any translation bugs to <https://translationproject.org/team/>\n"
                                   ,5);
        fputs_unlocked(pcVar4,pFVar1);
      }
    }
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar4 = "";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC1);
    if (puVar7 == &_LC1) {
      pcVar4 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,puVar7,pcVar4);
LAB_00100059:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool main(ulong param_1,undefined8 *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  int *piVar9;
  char *extraout_RDX;
  char *pcVar10;
  int iVar11;
  long lVar12;
  long in_FS_OFFSET;
  bool bVar13;
  char local_f8 [4];
  undefined4 local_f4;
  undefined1 local_f0;
  char cStack_ef;
  undefined1 local_ee;
  long local_e8;
  undefined1 local_e0;
  undefined1 local_df;
  undefined1 local_de;
  undefined1 uStack_dd;
  stat local_d8;
  long local_40;
  
  uVar7 = param_1 & 0xffffffff;
  iVar11 = (int)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils");
  textdomain("coreutils");
  atexit((__func *)&close_stdin);
  local_f8[0] = '\0';
  local_f4 = 4;
  local_ee = 0;
  local_f0 = 0;
  cStack_ef = '\0';
  local_e8 = 0;
  local_e0 = 0;
  iVar3 = isatty(0);
  bVar1 = true;
  local_df = iVar3 != 0;
  bVar13 = false;
  local_de = 0;
  uStack_dd = 0;
LAB_00101190:
  iVar3 = getopt_long(param_1 & 0xffffffff,param_2,"dfirvIR",long_opts,0);
  pcVar10 = _optarg;
  if (iVar3 != -1) {
    if (0x84 < iVar3) goto switchD_001011cb_caseD_4a;
    if (iVar3 < 0x49) {
      if (iVar3 != -0x83) goto LAB_00101608;
      uVar6 = proper_name_lite("Jim Meyering","Jim Meyering");
      uVar8 = proper_name_lite("Richard M. Stallman","Richard M. Stallman");
      uVar4 = proper_name_lite("David MacKenzie","David MacKenzie");
      uVar5 = proper_name_lite("Paul Rubin","Paul Rubin");
      version_etc(_stdout,&_LC1,"GNU coreutils",_Version,uVar5,uVar4,uVar8,uVar6,0);
                    /* WARNING: Subroutine does not return */
      exit(0);
    }
    if (0x3b < iVar3 - 0x49U) goto switchD_001011cb_caseD_4a;
    switch(iVar3) {
    case 0x49:
switchD_001011cb_caseD_49:
      local_f4 = 4;
      bVar13 = true;
      local_f8[0] = '\0';
      break;
    default:
      goto switchD_001011cb_caseD_4a;
    case 0x52:
    case 0x72:
      cStack_ef = '\x01';
      break;
    case 100:
      local_ee = 1;
      break;
    case 0x66:
      local_f4 = 5;
      bVar13 = false;
      local_f8[0] = '\x01';
      break;
    case 0x76:
      local_de = 1;
      break;
    case 0x80:
      if (_optarg != (char *)0x0) {
        lVar12 = __xargmatch_internal
                           ("--interactive",_optarg,interactive_args,interactive_types,4,
                            _argmatch_die,1,
                            (long)&switchD_001011cb::switchdataD_001016a0 +
                            (long)(int)(&switchD_001011cb::switchdataD_001016a0)[iVar3 - 0x49U]);
        iVar3 = *(int *)(interactive_types + lVar12 * 4);
        if (iVar3 == 1) goto switchD_001011cb_caseD_49;
        if (iVar3 != 2) {
          if (iVar3 == 0) {
            local_f4 = 5;
            bVar13 = false;
          }
          break;
        }
      }
    case 0x69:
      local_f4 = 3;
      bVar13 = false;
      local_f8[0] = '\0';
      break;
    case 0x81:
      local_f0 = 1;
      break;
    case 0x82:
      iVar3 = strcmp((char *)param_2[(long)_optind + -1],"--no-preserve-root");
      if (iVar3 != 0) {
        uVar6 = dcgettext(0,"you may not abbreviate the --no-preserve-root option",5);
        error(1,0,uVar6);
        pcVar10 = extraout_RDX;
LAB_00101669:
        uVar6 = quotearg_style(4,pcVar10);
        uVar8 = dcgettext(0,"unrecognized --preserve-root argument: %s",5);
        error(1,0,uVar8,uVar6);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      bVar1 = false;
      break;
    case 0x83:
      if (_optarg != (char *)0x0) {
        iVar3 = strcmp(_optarg,"all");
        if (iVar3 != 0) goto LAB_00101669;
        local_e0 = 1;
      }
      bVar1 = true;
      break;
    case 0x84:
      goto switchD_001011cb_caseD_84;
    }
    goto LAB_00101190;
  }
  if (_optind < iVar11) {
    if ((cStack_ef != '\0') && (bVar1)) goto LAB_001015ab;
LAB_00101445:
    uVar6 = _program_name;
    lVar12 = (long)_optind;
    if (bVar13) {
      uVar7 = (ulong)(iVar11 - _optind);
      if (cStack_ef == '\0') {
        if (uVar7 < 4) goto LAB_001014b9;
        uVar8 = dcngettext(0,"%s: remove %ju argument? ","%s: remove %ju arguments? ",uVar7,5);
      }
      else {
        uVar8 = dcngettext(0,"%s: remove %ju argument recursively? ",
                           "%s: remove %ju arguments recursively? ",uVar7,5);
      }
      __fprintf_chk(_stderr,2,uVar8,uVar6,uVar7);
      cVar2 = yesno();
      if (cVar2 == '\0') goto LAB_00101408;
    }
LAB_001014b9:
    iVar3 = rm(param_2 + lVar12,local_f8);
    bVar13 = iVar3 == 5;
    if (3 < iVar3 - 2U) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("((status) == RM_OK || (status) == RM_USER_ACCEPTED || (status) == RM_USER_DECLINED || (status) == RM_ERROR)"
                    ,"src/rm.c",0x174,"main");
    }
  }
  else {
    if (local_f8[0] == '\0') {
      uVar6 = dcgettext(0,"missing operand",5);
      error(0,0,uVar6);
      goto LAB_001015a1;
    }
LAB_00101408:
    bVar13 = false;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar13;
  }
LAB_0010161a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
switchD_001011cb_caseD_84:
  local_df = 1;
  goto LAB_00101190;
  while( true ) {
    uVar7 = quotearg_style(4,&_LC45);
    param_2 = (undefined8 *)dcgettext(0,"failed to get attributes of %s",5);
    piVar9 = __errno_location();
    iVar3 = error(1,*piVar9,param_2,uVar7);
LAB_00101608:
    if (iVar3 == -0x82) break;
switchD_001011cb_caseD_4a:
    for (lVar12 = 1; (int)lVar12 < (int)uVar7; lVar12 = lVar12 + 1) {
      pcVar10 = (char *)param_2[lVar12];
      if ((*pcVar10 == '-') && (pcVar10[1] != '\0')) {
        iVar3 = lstat(pcVar10,&local_d8);
        if (iVar3 == 0) {
          uVar6 = quotearg_style(4,pcVar10);
          uVar7 = quotearg_n_style(1,3,pcVar10);
          param_2 = (undefined8 *)*param_2;
          uVar8 = dcgettext(0,"Try \'%s ./%s\' to remove the file %s.\n",5);
          __fprintf_chk(_stderr,2,uVar8,param_2,uVar7,uVar6);
          break;
        }
      }
    }
LAB_001015a1:
    iVar11 = (int)uVar7;
    usage(1);
LAB_001015ab:
    local_e8 = get_root_dev_ino(dev_ino_buf_1);
    if (local_e8 != 0) goto LAB_00101445;
  }
  usage(0);
  goto LAB_0010161a;
}


