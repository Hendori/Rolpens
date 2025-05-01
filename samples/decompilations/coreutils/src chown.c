
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void usage(int status)

{
  undefined8 uVar1;
  FILE *pFVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  infomap *piVar8;
  char *pcVar9;
  char *pcVar10;
  infomap infomap [7];
  
  uVar6 = _program_name;
  piVar8 = infomap;
  if (status != 0) {
    uVar4 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(_stderr,2,uVar4,uVar6);
    goto LAB_00100429;
  }
  if (_chown_mode == 1) {
    uVar4 = dcgettext(0,"[OWNER][:[GROUP]]",5);
  }
  else {
    uVar4 = dcgettext(0,"GROUP",5);
  }
  uVar1 = _program_name;
  uVar5 = dcgettext(0,
                    "Usage: %s [OPTION]... %s FILE...\n  or:  %s [OPTION]... --reference=RFILE FILE...\n"
                    ,5);
  __printf_chk(2,uVar5,uVar1,uVar4,uVar6);
  pFVar2 = _stdout;
  pcVar9 = 
  "Change the owner and/or group of each FILE to OWNER and/or GROUP.\nWith --reference, change the owner and group of each FILE to those of RFILE.\n\n"
  ;
  if (_chown_mode != 1) {
    pcVar9 = 
    "Change the group of each FILE to GROUP.\nWith --reference, change the group of each FILE to that of RFILE.\n\n"
    ;
  }
  pcVar9 = (char *)dcgettext(0,pcVar9,5);
  fputs_unlocked(pcVar9,pFVar2);
  pFVar2 = _stdout;
  pcVar9 = (char *)dcgettext(0,
                             "  -c, --changes          like verbose but report only when a change is made\n  -f, --silent, --quiet  suppress most error messages\n  -v, --verbose          output a diagnostic for every file processed\n"
                             ,5);
  fputs_unlocked(pcVar9,pFVar2);
  pFVar2 = _stdout;
  pcVar9 = (char *)dcgettext(0,
                             "      --dereference      affect the referent of each symbolic link (this is\n                         the default), rather than the symbolic link itself\n  -h, --no-dereference   affect symbolic links instead of any referenced file\n"
                             ,5);
  fputs_unlocked(pcVar9,pFVar2);
  pFVar2 = _stdout;
  pcVar9 = (char *)dcgettext(0,
                             "                         (useful only on systems that can change the\n                         ownership of a symlink)\n"
                             ,5);
  fputs_unlocked(pcVar9,pFVar2);
  pFVar2 = _stdout;
  pcVar9 = (char *)dcgettext(0,
                             "      --from=CURRENT_OWNER:CURRENT_GROUP\n                         change the ownership of each file only if\n                         its current owner and/or group match those specified\n                         here. Either may be omitted, in which case a match\n                         is not required for the omitted attribute\n"
                             ,5);
  fputs_unlocked(pcVar9,pFVar2);
  pFVar2 = _stdout;
  pcVar9 = (char *)dcgettext(0,
                             "      --no-preserve-root  do not treat \'/\' specially (the default)\n      --preserve-root    fail to operate recursively on \'/\'\n"
                             ,5);
  fputs_unlocked(pcVar9,pFVar2);
  pFVar2 = _stdout;
  pcVar9 = (char *)dcgettext(0,
                             "      --reference=RFILE  use RFILE\'s ownership rather than specifying values.\n                         RFILE is always dereferenced if a symbolic link.\n"
                             ,5);
  fputs_unlocked(pcVar9,pFVar2);
  pFVar2 = _stdout;
  pcVar9 = (char *)dcgettext(0,
                             "  -R, --recursive        operate on files and directories recursively\n"
                             ,5);
  fputs_unlocked(pcVar9,pFVar2);
  uVar6 = dcgettext(0,
                    "\nThe following options modify how a hierarchy is traversed when the -R\noption is also specified.  If more than one is specified, only the final\none takes effect. %s is the default.\n\n  -H                     if a command line argument is a symbolic link\n                         to a directory, traverse it\n  -L                     traverse every symbolic link to a directory\n                         encountered\n  -P                     do not traverse any symbolic links\n\n"
                    ,5);
  __printf_chk(2,uVar6,&_LC19);
  pFVar2 = _stdout;
  pcVar9 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar9,pFVar2);
  pFVar2 = _stdout;
  pcVar9 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar9,pFVar2);
  pFVar2 = _stdout;
  if (_chown_mode == 1) {
    pcVar9 = (char *)dcgettext(0,
                               "\nOwner is unchanged if missing.  Group is unchanged if missing, but changed\nto login group if implied by a \':\' following a symbolic OWNER.\nOWNER and GROUP may be numeric as well as symbolic.\n"
                               ,5);
    fputs_unlocked(pcVar9,pFVar2);
    uVar6 = _program_name;
    if (_chown_mode != 1) goto LAB_0010023f;
    uVar4 = dcgettext(0,
                      "\nExamples:\n  %s root /u        Change the owner of /u to \"root\".\n  %s root:staff /u  Likewise, but also change its group to \"staff\".\n  %s -hR root /u    Change the owner of /u and subfiles to \"root\".\n"
                      ,5);
    __printf_chk(2,uVar4,uVar6,uVar6,uVar6);
  }
  else {
LAB_0010023f:
    uVar6 = _program_name;
    uVar4 = dcgettext(0,
                      "\nExamples:\n  %s staff /u      Change the group of /u to \"staff\".\n  %s -hR staff /u  Change the group of /u and subfiles to \"staff\".\n"
                      ,5);
    __printf_chk(2,uVar4,uVar6,uVar6);
  }
  pcVar9 = "chgrp";
  if (_chown_mode == 1) {
    pcVar9 = "chown";
  }
  pcVar10 = "[";
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
    iVar3 = strcmp(pcVar9,pcVar10);
    if (iVar3 == 0) break;
    pcVar10 = *(char **)((long)piVar8 + 0x10);
    piVar8 = (infomap *)((long)piVar8 + 0x10);
  } while (pcVar10 != (char *)0x0);
  pcVar10 = *(char **)((long)piVar8 + 8);
  if (*(char **)((long)piVar8 + 8) == (char *)0x0) {
    pcVar10 = pcVar9;
  }
  uVar6 = dcgettext(0,"\n%s online help: <%s>\n",5);
  __printf_chk(2,uVar6,"GNU coreutils","https://www.gnu.org/software/coreutils/");
  pcVar7 = setlocale(5,(char *)0x0);
  if (pcVar7 != (char *)0x0) {
    iVar3 = strncmp(pcVar7,"en_",3);
    pFVar2 = _stdout;
    if (iVar3 != 0) {
      pcVar7 = (char *)dcgettext(0,
                                 "Report any translation bugs to <https://translationproject.org/team/>\n"
                                 ,5);
      fputs_unlocked(pcVar7,pFVar2);
    }
  }
  uVar6 = dcgettext(0,"Full documentation <%s%s>\n",5);
  __printf_chk(2,uVar6,"https://www.gnu.org/software/coreutils/",pcVar9);
  pcVar7 = "";
  if (pcVar9 == pcVar10) {
    pcVar7 = " invocation";
  }
  uVar6 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar6,pcVar10,pcVar7);
LAB_00100429:
                    /* WARNING: Subroutine does not return */
  exit(status);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int main(int argc,char **argv)

{
  long lVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int *piVar10;
  size_t sVar11;
  long lVar12;
  char *pcVar13;
  long in_FS_OFFSET;
  uint local_130;
  _Bool warn;
  uid_t uid;
  gid_t gid;
  uid_t required_uid;
  gid_t required_gid;
  Chown_option chopt;
  stat ref_stats;
  
  iVar5 = -1;
  lVar12 = (long)argc;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uid = 0xffffffff;
  gid = 0xffffffff;
  required_uid = 0xffffffff;
  required_gid = 0xffffffff;
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  chopt_init(&chopt);
  local_130 = 0x10;
  bVar2 = false;
  while (iVar4 = getopt_long(argc,argv,"HLPRcfhv",long_options,0), pcVar13 = reference_file,
        iVar4 != -1) {
    if (0x84 < iVar4) goto switchD_001013e3_caseD_49;
    if (iVar4 < 0x48) {
      if (iVar4 == -0x83) {
        uVar8 = proper_name_lite("Jim Meyering","Jim Meyering");
        uVar9 = proper_name_lite("David MacKenzie","David MacKenzie");
        pcVar13 = "chgrp";
        if (_chown_mode == 1) {
          pcVar13 = "chown";
        }
        version_etc(_stdout,pcVar13,"GNU coreutils",_Version,uVar9,uVar8,0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar4 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      goto switchD_001013e3_caseD_49;
    }
    switch(iVar4) {
    case 0x48:
      local_130 = 0x11;
      break;
    default:
      goto switchD_001013e3_caseD_49;
    case 0x4c:
      local_130 = 2;
      break;
    case 0x50:
      local_130 = 0x10;
      break;
    case 0x52:
      chopt.recurse = true;
      break;
    case 99:
      chopt.verbosity = V_changes_only;
      break;
    case 0x66:
      chopt.force_silent = true;
      break;
    case 0x68:
      iVar5 = 0;
      break;
    case 0x76:
      chopt.verbosity = V_high;
      break;
    case 0x80:
      iVar5 = 1;
      break;
    case 0x81:
      lVar7 = parse_user_spec_warn(_optarg,&required_uid,&required_gid,0,0,&warn);
      if (lVar7 != 0) {
        bVar3 = warn ^ 1;
        quote(_optarg);
        error(bVar3,0,"%s: %s",lVar7);
      }
      break;
    case 0x82:
      bVar2 = false;
      break;
    case 0x83:
      bVar2 = true;
      break;
    case 0x84:
      reference_file = _optarg;
    }
  }
  if (chopt.recurse == false) {
    local_130 = 0x10;
  }
  else if (local_130 == 0x10) {
    if (iVar5 == 1) {
      uVar8 = dcgettext(0,"-R --dereference requires either -H or -L",5);
      error(1,0,uVar8);
      goto LAB_00101880;
    }
    iVar5 = 0;
  }
  chopt.affect_symlink_referent = iVar5 != 0;
  iVar5 = _optind;
  if (reference_file == (char *)0x0) {
    if (argc - _optind < 2) goto LAB_0010178c;
    pcVar13 = argv[_optind];
    if (_chown_mode == 2) {
      sVar11 = strlen(pcVar13);
      pcVar13 = (char *)xmalloc(sVar11 + 2);
      lVar12 = (long)_optind;
      *pcVar13 = ':';
      strcpy(pcVar13 + 1,argv[lVar12]);
    }
    lVar12 = parse_user_spec_warn(pcVar13,&uid,&gid,&chopt.user_name,&chopt.group_name,&warn);
    if (argv[_optind] != pcVar13) {
      free(pcVar13);
    }
    if (lVar12 != 0) {
      uVar8 = quote(argv[_optind]);
      error(warn ^ 1,0,"%s: %s",lVar12,uVar8);
    }
    if (((_chown_mode == 1) && (chopt.user_name == (char *)0x0)) &&
       (chopt.group_name != (char *)0x0)) {
      chopt.user_name = (char *)xstrdup(&_LC4);
    }
    _optind = _optind + 1;
LAB_001015fc:
    if (((chopt.recurse == false) || (!bVar2)) ||
       (chopt.root_dev_ino = (dev_ino *)get_root_dev_ino(&main::lexical_block_15::dev_ino_buf),
       chopt.root_dev_ino != (dev_ino *)0x0)) {
      uVar6 = chown_files(argv + _optind,local_130 | 0x400,uid,gid,required_uid,required_gid,&chopt,
                          (long)_optind);
      if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
        return (uVar6 ^ 1) & 0xff;
      }
LAB_00101880:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pcVar13 = "/";
    chopt.root_dev_ino = (dev_ino *)0x0;
  }
  else {
    if (argc - _optind < 1) goto LAB_0010178c;
    iVar5 = stat(reference_file,(stat *)&ref_stats);
    if (iVar5 == 0) {
      if (_chown_mode == 1) {
        uid = ref_stats.st_uid;
        chopt.user_name = (char *)uid_to_name(ref_stats.st_uid,pcVar13);
      }
      gid = ref_stats.st_gid;
      chopt.group_name = (char *)gid_to_name();
      goto LAB_001015fc;
    }
  }
  lVar12 = quotearg_style(4,pcVar13);
  argv = (char **)dcgettext(0,"failed to get attributes of %s",5);
  piVar10 = __errno_location();
  iVar5 = error(1,*piVar10,argv,lVar12);
LAB_0010178c:
  if (iVar5 < (int)lVar12) {
    uVar8 = quote(argv[lVar12 + -1]);
    uVar9 = dcgettext(0,"missing operand after %s",5);
    error(0,0,uVar9,uVar8);
  }
  else {
    uVar8 = dcgettext(0,"missing operand",5);
    error(0,0,uVar8);
  }
switchD_001013e3_caseD_49:
                    /* WARNING: Subroutine does not return */
  usage(1);
}


