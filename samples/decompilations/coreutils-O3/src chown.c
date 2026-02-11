
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void usage(int param_1)

{
  undefined8 uVar1;
  FILE *pFVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined **ppuVar8;
  char *pcVar9;
  char *pcVar10;
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
  
  uVar6 = _program_name;
  ppuVar8 = &local_a8;
  local_30 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
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
  local_a8 = &_LC2;
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
    iVar3 = strcmp(pcVar9,pcVar10);
    if (iVar3 == 0) break;
    pcVar10 = *(char **)((long)ppuVar8 + 0x10);
    ppuVar8 = (undefined **)((long)ppuVar8 + 0x10);
  } while (pcVar10 != (char *)0x0);
  pcVar10 = *(char **)((long)ppuVar8 + 8);
  if (*(char **)((long)ppuVar8 + 8) == (char *)0x0) {
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
  exit(param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte main(int param_1,undefined8 *param_2)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  int *piVar6;
  undefined8 uVar7;
  size_t sVar8;
  int iVar9;
  long lVar10;
  char *pcVar11;
  int iVar12;
  long in_FS_OFFSET;
  uint local_130;
  byte local_119;
  __uid_t local_118;
  __gid_t local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  char local_104;
  long local_100;
  undefined1 local_f8;
  undefined1 local_f7;
  long local_f0;
  long local_e8 [2];
  stat local_d8;
  long local_40;
  
  iVar12 = -1;
  lVar10 = (long)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_118 = 0xffffffff;
  local_114 = 0xffffffff;
  local_110 = 0xffffffff;
  local_10c = 0xffffffff;
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  chopt_init(&local_108);
  local_130 = 0x10;
  bVar1 = false;
  while( true ) {
    iVar3 = getopt_long(param_1,param_2,"HLPRcfhv",long_options,0);
    if (iVar3 == -1) {
      if (local_104 != '\0') {
        if (local_130 == 0x10) goto LAB_001017bf;
        goto LAB_00101597;
      }
      local_130 = 0x10;
      goto LAB_00101597;
    }
    if (0x84 < iVar3) goto switchD_001013e3_caseD_49;
    if (iVar3 < 0x48) break;
    switch(iVar3) {
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
      local_104 = '\x01';
      break;
    case 99:
      local_108 = 1;
      break;
    case 0x66:
      local_f7 = 1;
      break;
    case 0x68:
      iVar12 = 0;
      break;
    case 0x76:
      local_108 = 0;
      break;
    case 0x80:
      iVar12 = 1;
      break;
    case 0x81:
      lVar4 = parse_user_spec_warn(_optarg,&local_110,&local_10c,0,0,&local_119);
      if (lVar4 != 0) {
        bVar2 = local_119 ^ 1;
        quote(_optarg);
        error(bVar2,0,"%s: %s",lVar4);
      }
      break;
    case 0x82:
      bVar1 = false;
      break;
    case 0x83:
      bVar1 = true;
      break;
    case 0x84:
      reference_file = _optarg;
    }
  }
  if (iVar3 == -0x83) {
    uVar7 = proper_name_lite("Jim Meyering","Jim Meyering");
    uVar5 = proper_name_lite("David MacKenzie","David MacKenzie");
    pcVar11 = "chgrp";
    if (_chown_mode == 1) {
      pcVar11 = "chown";
    }
    version_etc(_stdout,pcVar11,"GNU coreutils",_Version,uVar5,uVar7,0);
                    /* WARNING: Subroutine does not return */
    exit(0);
  }
  if (iVar3 == -0x82) {
    usage(0);
LAB_0010185c:
    uVar7 = dcgettext(0,"-R --dereference requires either -H or -L",5);
    error(1,0,uVar7);
LAB_00101880:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
switchD_001013e3_caseD_49:
  usage(1);
LAB_001017bf:
  if (iVar12 == 1) goto LAB_0010185c;
  iVar12 = 0;
LAB_00101597:
  pcVar11 = reference_file;
  local_f8 = iVar12 != 0;
  iVar9 = (int)lVar10 - _optind;
  iVar3 = _optind;
  if (reference_file == (char *)0x0) {
    if (1 < iVar9) {
      pcVar11 = (char *)param_2[_optind];
      if (_chown_mode == 2) {
        sVar8 = strlen(pcVar11);
        pcVar11 = (char *)xmalloc(sVar8 + 2);
        lVar10 = (long)_optind;
        *pcVar11 = ':';
        strcpy(pcVar11 + 1,(char *)param_2[lVar10]);
      }
      lVar10 = parse_user_spec_warn(pcVar11,&local_118,&local_114,&local_f0,local_e8,&local_119);
      if ((char *)param_2[_optind] != pcVar11) {
        free(pcVar11);
      }
      if (lVar10 != 0) {
        bVar2 = local_119 ^ 1;
        uVar7 = quote(param_2[_optind]);
        error(bVar2,0,"%s: %s",lVar10,uVar7);
      }
      if (((_chown_mode == 1) && (local_f0 == 0)) && (local_e8[0] != 0)) {
        local_f0 = xstrdup(&_LC4);
      }
      _optind = _optind + 1;
LAB_001015fc:
      if (((local_104 != '\0') && (bVar1)) &&
         (local_100 = get_root_dev_ino(dev_ino_buf_0), local_100 == 0)) {
        pcVar11 = "/";
        goto LAB_00101750;
      }
      bVar2 = chown_files(param_2 + _optind,local_130 | 0x400,local_118,local_114,local_110,
                          local_10c,&local_108,(long)_optind);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return bVar2 ^ 1;
      }
      goto LAB_00101880;
    }
  }
  else if (0 < iVar9) {
    iVar3 = stat(reference_file,&local_d8);
    if (iVar3 == 0) {
      if (_chown_mode == 1) {
        local_118 = local_d8.st_uid;
        local_f0 = uid_to_name(local_d8.st_uid,pcVar11);
      }
      local_114 = local_d8.st_gid;
      local_e8[0] = gid_to_name();
      goto LAB_001015fc;
    }
LAB_00101750:
    lVar10 = quotearg_style(4,pcVar11);
    param_2 = (undefined8 *)dcgettext(0,"failed to get attributes of %s",5);
    piVar6 = __errno_location();
    iVar3 = error(1,*piVar6,param_2,lVar10);
  }
  if (iVar3 < (int)lVar10) {
    param_2 = (undefined8 *)quote(param_2[lVar10 + -1]);
    uVar7 = dcgettext(0,"missing operand after %s",5);
    error(0,0,uVar7,param_2);
  }
  else {
    uVar7 = dcgettext(0,"missing operand",5);
    error(0,0,uVar7);
  }
  goto switchD_001013e3_caseD_49;
}


