
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void usage(int status)

{
  FILE *pFVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  infomap *piVar6;
  undefined1 *puVar7;
  infomap infomap [7];
  
  uVar5 = _program_name;
  piVar6 = infomap;
  if (status != 0) {
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
    if (((*pcVar4 == 'r') && (pcVar4[1] == 'm')) && (pcVar4[2] == '\0')) break;
    pcVar4 = *(char **)((long)piVar6 + 0x10);
    piVar6 = (infomap *)((long)piVar6 + 0x10);
  } while (pcVar4 != (char *)0x0);
  puVar7 = *(undefined1 **)((long)piVar6 + 8);
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
  exit(status);
}



/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int main(int argc,char **argv)

{
  interactive_type iVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int *piVar11;
  long lVar12;
  char *extraout_RDX;
  char *pcVar13;
  ulong uVar14;
  long lVar15;
  long in_FS_OFFSET;
  rm_options x;
  stat st;
  
  uVar14 = (ulong)(uint)argc;
  lVar15 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils");
  textdomain("coreutils");
  atexit((__func *)&close_stdin);
  x.ignore_missing_files = false;
  x.interactive = RMI_SOMETIMES;
  x.remove_empty_directories = false;
  x.one_file_system = false;
  x.recursive = false;
  x.root_dev_ino = (dev_ino *)0x0;
  x.preserve_all_root = false;
  iVar5 = isatty(0);
  bVar3 = true;
  x.stdin_tty = iVar5 != 0;
  bVar2 = false;
  x.verbose = false;
  x.require_restore_cwd = false;
LAB_00101190:
  iVar5 = getopt_long(uVar14,argv,"dfirvIR",long_opts,0);
  pcVar13 = _optarg;
  if (iVar5 != -1) {
    if (0x84 < iVar5) goto switchD_001011cb_caseD_4a;
    if (iVar5 < 0x49) {
      if (iVar5 == -0x83) {
        uVar8 = proper_name_lite("Jim Meyering","Jim Meyering");
        uVar9 = proper_name_lite("Richard M. Stallman","Richard M. Stallman");
        uVar10 = proper_name_lite("David MacKenzie","David MacKenzie");
        uVar7 = proper_name_lite("Paul Rubin","Paul Rubin");
        version_etc(_stdout,&_LC1,"GNU coreutils",_Version,uVar7,uVar10,uVar9,uVar8,0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      goto LAB_00101608;
    }
    if (0x3b < iVar5 - 0x49U) goto switchD_001011cb_caseD_4a;
    switch(iVar5) {
    case 0x49:
switchD_001011cb_caseD_49:
      x.interactive = RMI_SOMETIMES;
      bVar2 = true;
      x.ignore_missing_files = false;
      break;
    default:
      goto switchD_001011cb_caseD_4a;
    case 0x52:
    case 0x72:
      x.recursive = true;
      break;
    case 100:
      x.remove_empty_directories = true;
      break;
    case 0x66:
      x.interactive = RMI_NEVER;
      bVar2 = false;
      x.ignore_missing_files = true;
      break;
    case 0x76:
      x.verbose = true;
      break;
    case 0x80:
      if (_optarg != (char *)0x0) {
        lVar12 = __xargmatch_internal
                           ("--interactive",_optarg,interactive_args,interactive_types,4,
                            _argmatch_die,1,
                            (long)&switchD_001011cb::switchdataD_001016a0 +
                            (long)(int)(&switchD_001011cb::switchdataD_001016a0)[iVar5 - 0x49U]);
        iVar1 = interactive_types[lVar12];
        if (iVar1 == interactive_once) goto switchD_001011cb_caseD_49;
        if (iVar1 != interactive_always) {
          if (iVar1 == interactive_never) {
            x.interactive = RMI_NEVER;
            bVar2 = false;
          }
          break;
        }
      }
    case 0x69:
      x.interactive = RMI_ALWAYS;
      bVar2 = false;
      x.ignore_missing_files = false;
      break;
    case 0x81:
      x.one_file_system = true;
      break;
    case 0x82:
      iVar5 = strcmp(argv[(long)_optind + -1],"--no-preserve-root");
      if (iVar5 != 0) {
        uVar8 = dcgettext(0,"you may not abbreviate the --no-preserve-root option",5);
        error(1,0,uVar8);
        pcVar13 = extraout_RDX;
LAB_00101669:
        uVar8 = quotearg_style(4,pcVar13);
        uVar9 = dcgettext(0,"unrecognized --preserve-root argument: %s",5);
        error(1,0,uVar9,uVar8);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      bVar3 = false;
      break;
    case 0x83:
      if (_optarg != (char *)0x0) {
        iVar5 = strcmp(_optarg,"all");
        if (iVar5 != 0) goto LAB_00101669;
        x.preserve_all_root = true;
      }
      bVar3 = true;
      break;
    case 0x84:
      goto switchD_001011cb_caseD_84;
    }
    goto LAB_00101190;
  }
  if (_optind < argc) {
    if ((x.recursive != false) && (bVar3)) {
      x.root_dev_ino = (dev_ino *)get_root_dev_ino(&main::lexical_block_11::dev_ino_buf);
      if (x.root_dev_ino == (dev_ino *)0x0) {
        uVar14 = quotearg_style(4,&_LC45);
        argv = (char **)dcgettext(0,"failed to get attributes of %s",5);
        piVar11 = __errno_location();
        iVar5 = error(1,*piVar11,argv,uVar14);
LAB_00101608:
        argc = (int)uVar14;
        if (iVar5 == -0x82) {
                    /* WARNING: Subroutine does not return */
          usage(0);
        }
switchD_001011cb_caseD_4a:
        for (lVar15 = 1; (int)lVar15 < argc; lVar15 = lVar15 + 1) {
          pcVar13 = argv[lVar15];
          if ((*pcVar13 == '-') && (pcVar13[1] != '\0')) {
            iVar5 = lstat(pcVar13,(stat *)&st);
            if (iVar5 == 0) {
              uVar8 = quotearg_style(4,pcVar13);
              uVar9 = quotearg_n_style(1,3,pcVar13);
              pcVar13 = *argv;
              uVar10 = dcgettext(0,"Try \'%s ./%s\' to remove the file %s.\n",5);
              __fprintf_chk(_stderr,2,uVar10,pcVar13,uVar9,uVar8);
              break;
            }
          }
        }
        goto LAB_001015a1;
      }
    }
    uVar8 = _program_name;
    lVar12 = (long)_optind;
    if (bVar2) {
      uVar14 = (ulong)(argc - _optind);
      if (x.recursive == false) {
        if (uVar14 < 4) goto LAB_001014b9;
        uVar9 = dcngettext(0,"%s: remove %ju argument? ","%s: remove %ju arguments? ",uVar14,5);
      }
      else {
        uVar9 = dcngettext(0,"%s: remove %ju argument recursively? ",
                           "%s: remove %ju arguments recursively? ",uVar14,5);
      }
      __fprintf_chk(_stderr,2,uVar9,uVar8,uVar14);
      cVar4 = yesno();
      if (cVar4 == '\0') goto LAB_00101408;
    }
LAB_001014b9:
    iVar5 = rm(argv + lVar12,&x);
    uVar6 = (uint)(iVar5 == 5);
    if (3 < iVar5 - 2U) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("((status) == RM_OK || (status) == RM_USER_ACCEPTED || (status) == RM_USER_DECLINED || (status) == RM_ERROR)"
                    ,"src/rm.c",0x174,"main");
    }
  }
  else {
    if (x.ignore_missing_files == false) {
      uVar8 = dcgettext(0,"missing operand",5);
      error(0,0,uVar8);
LAB_001015a1:
                    /* WARNING: Subroutine does not return */
      usage(1);
    }
LAB_00101408:
    uVar6 = 0;
  }
  if (lVar15 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
switchD_001011cb_caseD_84:
  x.stdin_tty = true;
  goto LAB_00101190;
}


