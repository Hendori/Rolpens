
ulong process_file(long param_1,long param_2)

{
  char *__s1;
  char cVar1;
  uint __mode;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char *pcVar9;
  int *piVar10;
  stat *__buf;
  long in_FS_OFFSET;
  bool bVar11;
  stat local_178;
  stat local_e8;
  undefined1 local_58;
  undefined1 local_57 [9];
  undefined1 local_4e;
  undefined1 local_4c;
  undefined1 local_4b [9];
  undefined1 local_42;
  long local_40;
  
  __buf = (stat *)(param_2 + 0x70);
  __s1 = *(char **)(param_2 + 0x38);
  pcVar9 = *(char **)(param_2 + 0x30);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  switch(*(undefined2 *)(param_2 + 0x68)) {
  case 2:
    cVar1 = cycle_warning_required();
    if (cVar1 == '\0') break;
    uVar6 = quotearg_n_style_colon(0,3,__s1);
    uVar7 = dcgettext(0,
                      "WARNING: Circular directory structure.\nThis almost certainly means that you have a corrupted file system.\nNOTIFY YOUR SYSTEM MANAGER.\nThe following directory is part of the cycle:\n  %s\n"
                      ,5);
    error(0,0,uVar7,uVar6);
    goto LAB_00100699;
  case 4:
    if (force_silent == '\0') {
      uVar6 = quotearg_style(4,__s1);
      pcVar9 = "cannot read directory %s";
LAB_001007e6:
      uVar7 = dcgettext(0,pcVar9,5);
      error(0,*(undefined4 *)(param_2 + 0x40),uVar7,uVar6);
    }
    goto LAB_0010024d;
  case 6:
switchD_0010004f_caseD_6:
    piVar10 = (int *)0x1;
    goto LAB_00100203;
  case 7:
    if (force_silent == '\0') {
      uVar6 = quotearg_n_style_colon(0,3,__s1);
      error(0,*(undefined4 *)(param_2 + 0x40),&_LC1,uVar6);
    }
    goto LAB_0010024d;
  case 10:
    if ((*(long *)(param_2 + 0x58) == 0) && (*(long *)(param_2 + 0x20) == 0)) {
      *(undefined8 *)(param_2 + 0x20) = 1;
      rpl_fts_set(param_1,param_2,1);
      goto switchD_0010004f_caseD_6;
    }
    if (force_silent == '\0') {
      uVar6 = quotearg_style(4,__s1);
      pcVar9 = "cannot access %s";
      goto LAB_001007e6;
    }
LAB_0010024d:
    piVar10 = (int *)0x0;
    bVar11 = false;
    goto LAB_00100253;
  case 0xc:
    if (dereference == 1) {
      __buf = &local_178;
      iVar5 = fstatat(*(int *)(param_1 + 0x2c),pcVar9,__buf,0);
      if (iVar5 != 0) {
        if (force_silent == '\0') {
          uVar6 = quotearg_style(4,__s1);
          uVar7 = dcgettext(0,"cannot dereference %s",5);
          piVar10 = __errno_location();
          error(0,*piVar10,uVar7,uVar6);
        }
        goto LAB_0010024d;
      }
    }
    break;
  case 0xd:
    if (dereference != 0) {
      if (force_silent == '\0') {
        uVar6 = quotearg_style(4,__s1);
        uVar7 = dcgettext(0,"cannot operate on dangling symlink %s",5);
        error(0,0,uVar7,uVar6);
      }
      goto LAB_0010024d;
    }
  }
  if ((root_dev_ino != (__ino_t *)0x0) &&
     (__buf->st_dev == root_dev_ino[1] && __buf->st_ino == *root_dev_ino)) {
    iVar5 = strcmp(__s1,"/");
    if (iVar5 == 0) {
      uVar6 = quotearg_style(4,__s1);
      uVar7 = dcgettext(0,"it is dangerous to operate recursively on %s",5);
      error(0,0,uVar7,uVar6);
    }
    else {
      uVar6 = quotearg_n_style(1,4,&_LC6);
      uVar7 = quotearg_n_style(0,4,__s1);
      uVar8 = dcgettext(0,"it is dangerous to operate recursively on %s (same as %s)",5);
      error(0,0,uVar8,uVar7,uVar6);
    }
    uVar6 = dcgettext(0,"use --no-preserve-root to override this failsafe",5);
    error(0,0,uVar6);
    rpl_fts_set(param_1,param_2,4);
    rpl_fts_read(param_1);
LAB_00100699:
    piVar10 = (int *)0x0;
    goto LAB_00100203;
  }
  uVar4 = __buf->st_mode;
  __mode = mode_adjust(uVar4,(uVar4 & 0xf000) == 0x4000,umask_value,change,0);
  if (dereference == -1) {
    bVar11 = *(long *)(param_2 + 0x58) == 0;
  }
  else {
    bVar11 = dereference != 0;
  }
  iVar2 = fchmodat(*(int *)(param_1 + 0x2c),pcVar9,__mode,(uint)(bVar11 ^ 1) << 8);
  iVar5 = verbosity;
  if (iVar2 == 0) {
    if (verbosity != 2) {
      uVar3 = __mode;
      if (((__mode & 0xe00) == 0) ||
         (iVar2 = fstatat(*(int *)(param_1 + 0x2c),pcVar9,&local_e8,0), uVar3 = local_e8.st_mode,
         iVar2 == 0)) {
        if (((uVar3 ^ uVar4) & 0xfff) != 0) {
          uVar6 = quotearg_style(4,__s1);
          strmode(__mode,&local_58);
          local_4e = 0;
          strmode(uVar4,&local_4c);
          local_42 = 0;
          uVar7 = dcgettext(0,"mode of %s changed from %04lo (%s) to %04lo (%s)\n",5);
          __printf_chk(2,uVar7,uVar6,uVar4 & 0xfff,local_4b,__mode & 0xfff,local_57);
          goto LAB_001001b1;
        }
      }
      else if (force_silent == '\0') {
        uVar6 = quotearg_style(4,__s1);
        uVar7 = dcgettext(0,"getting new attributes of %s",5);
        piVar10 = __errno_location();
        error(0,*piVar10,uVar7,uVar6);
        iVar5 = verbosity;
      }
      if (iVar5 == 0) {
        uVar6 = quotearg_style(4,__s1);
        strmode(__mode,&local_58);
        local_4e = 0;
        strmode(uVar4,&local_4c);
        local_42 = 0;
        uVar7 = dcgettext(0,"mode of %s retained as %04lo (%s)\n",5);
        __printf_chk(2,uVar7,uVar6,__mode & 0xfff,local_57);
      }
    }
LAB_001001b1:
    piVar10 = (int *)(ulong)diagnose_surprises;
    if (diagnose_surprises == 0) {
      piVar10 = (int *)0x1;
    }
    else {
      uVar4 = mode_adjust(uVar4,(uVar4 & 0xf000) == 0x4000,0,change,0);
      if ((~uVar4 & __mode) != 0) {
        strmode(__mode,&local_58);
        strmode(uVar4,&local_4c);
        local_42 = 0;
        local_4e = 0;
        uVar6 = quotearg_n_style_colon(0,3,__s1);
        uVar7 = dcgettext(0,"%s: new permissions are %s, not %s",5);
        error(0,0,uVar7,uVar6,local_57,local_4b);
LAB_00100469:
        piVar10 = (int *)0x0;
      }
    }
  }
  else {
    piVar10 = __errno_location();
    if (*piVar10 == 0x5f) {
      piVar10 = (int *)0x1;
      bVar11 = true;
LAB_00100253:
      if ((verbosity == 2) || (verbosity != 0)) goto LAB_001001f6;
      uVar6 = quotearg_style(4,__s1);
      if (bVar11) {
        uVar3 = 2;
        uVar7 = dcgettext(0,"neither symbolic link %s nor referent has been changed\n",5);
        __printf_chk(2,uVar7,uVar6);
      }
      else {
        uVar7 = dcgettext(0,"%s could not be accessed\n",5);
        __printf_chk(2,uVar7,uVar6);
        uVar3 = 0;
      }
    }
    else {
      if (force_silent == '\0') {
        uVar6 = quotearg_style(4,__s1);
        uVar7 = dcgettext(0,"changing permissions of %s",5);
        error(0,*piVar10,uVar7,uVar6);
      }
      if ((verbosity == 2) || (verbosity != 0)) goto LAB_00100469;
      uVar6 = quotearg_style(4,__s1);
      strmode(__mode,&local_58);
      local_4e = 0;
      strmode(uVar4,&local_4c);
      local_42 = 0;
      uVar7 = dcgettext(0,"failed to change mode of %s from %04lo (%s) to %04lo (%s)\n",5);
      uVar3 = 1;
      __printf_chk(2,uVar7,uVar6,uVar4 & 0xfff,local_4b,__mode & 0xfff,local_57);
    }
    piVar10 = (int *)CONCAT71((int7)((ulong)piVar10 >> 8),1 < uVar3);
  }
LAB_001001f6:
  if (recurse == '\0') {
    rpl_fts_set(param_1,param_2,4);
  }
LAB_00100203:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (ulong)piVar10 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



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
    goto LAB_001008fa;
  }
  uVar3 = dcgettext(0,
                    "Usage: %s [OPTION]... MODE[,MODE]... FILE...\n  or:  %s [OPTION]... OCTAL-MODE FILE...\n  or:  %s [OPTION]... --reference=RFILE FILE...\n"
                    ,5);
  __printf_chk(2,uVar3,uVar5,uVar5,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "Change the mode of each FILE to MODE.\nWith --reference, change the mode of each FILE to that of RFILE.\n\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -c, --changes          like verbose but report only when a change is made\n  -f, --silent, --quiet  suppress most error messages\n  -v, --verbose          output a diagnostic for every file processed\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --dereference      affect the referent of each symbolic link,\n                           rather than the symbolic link itself\n  -h, --no-dereference   affect each symbolic link, rather than the referent\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --no-preserve-root  do not treat \'/\' specially (the default)\n      --preserve-root    fail to operate recursively on \'/\'\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --reference=RFILE  use RFILE\'s mode instead of specifying MODE values.\n                         RFILE is always dereferenced if a symbolic link.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"  -R, --recursive        change files and directories recursively\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  uVar5 = dcgettext(0,
                    "\nThe following options modify how a hierarchy is traversed when the -R\noption is also specified.  If more than one is specified, only the final\none takes effect. %s is the default.\n\n  -H                     if a command line argument is a symbolic link\n                         to a directory, traverse it\n  -L                     traverse every symbolic link to a directory\n                         encountered\n  -P                     do not traverse any symbolic links\n\n"
                    ,5);
  __printf_chk(2,uVar5,&_LC32);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nEach MODE is of the form \'[ugoa]*([-+=]([rwxXst]*|[ugo]))+|[-+=][0-7]+\'.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pcVar4 = "[";
  local_a8 = &_LC18;
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
    iVar2 = strcmp("chmod",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)ppuVar7 + 0x10);
    ppuVar7 = (undefined **)((long)ppuVar7 + 0x10);
  } while (pcVar4 != (char *)0x0);
  pcVar4 = *(char **)((long)ppuVar7 + 8);
  if (pcVar4 == (char *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    pcVar4 = "chmod";
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) goto LAB_00100bc5;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","chmod");
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) {
LAB_00100bc5:
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
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","chmod");
    if (pcVar4 == "chmod") {
      pcVar6 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,pcVar4,pcVar6);
LAB_001008fa:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint main(int param_1,undefined8 *param_2)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  size_t sVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  int *piVar10;
  uint uVar11;
  char *pcVar12;
  long lVar13;
  long in_FS_OFFSET;
  uint local_80;
  long local_78;
  undefined *local_70;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  diagnose_surprises = 0;
  force_silent = '\0';
  recurse = '\0';
  local_80 = 0x11;
  local_70 = (undefined *)0x0;
  bVar2 = false;
  local_78 = 0;
  lVar9 = 0;
  while( true ) {
    uVar5 = getopt_long(param_1,param_2,
                        "HLPRcfhvr::w::x::X::s::t::u::g::o::a::,::+::=::0::1::2::3::4::5::6::7::",
                        long_options,0);
    iVar4 = (int)uVar5;
    if (iVar4 == -1) break;
    if (0x83 < iVar4) goto switchD_00101c83_caseD_49;
    if (iVar4 < 0x48) {
      if (iVar4 == -0x83) {
        uVar7 = proper_name_lite("Jim Meyering","Jim Meyering");
        uVar8 = proper_name_lite("David MacKenzie","David MacKenzie");
        version_etc(_stdout,"chmod","GNU coreutils",_Version,uVar8,uVar7,0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar4 < -0x83) goto switchD_00101c83_caseD_49;
      if (iVar4 == -0x82) goto LAB_001020dd;
      if ((0x12 < iVar4 - 0x2bU) || ((0x20ff180000000000U >> (uVar5 & 0x3f) & 1) == 0))
      goto switchD_00101c83_caseD_49;
switchD_00101c83_caseD_58:
      pcVar12 = (char *)param_2[(long)_optind + -1];
      sVar6 = strlen(pcVar12);
      lVar13 = (lVar9 + 1) - (ulong)(lVar9 == 0);
      lVar1 = sVar6 + lVar13;
      if (local_48 <= lVar1) {
        local_78 = xpalloc(local_78,&local_48,(lVar1 + 1) - local_48,0xffffffffffffffff);
      }
      *(undefined1 *)(local_78 + lVar9) = 0x2c;
      memcpy((void *)(local_78 + lVar13),pcVar12,sVar6 + 1);
      diagnose_surprises = 1;
      lVar9 = lVar1;
    }
    else {
      switch(iVar4) {
      case 0x48:
        local_80 = 0x11;
        break;
      default:
        goto switchD_00101c83_caseD_49;
      case 0x4c:
        local_80 = 2;
        break;
      case 0x50:
        local_80 = 0x10;
        break;
      case 0x52:
        recurse = '\x01';
        break;
      case 0x58:
      case 0x61:
      case 0x67:
      case 0x6f:
      case 0x72:
      case 0x73:
      case 0x74:
      case 0x75:
      case 0x77:
      case 0x78:
        goto switchD_00101c83_caseD_58;
      case 99:
        verbosity = 1;
        break;
      case 0x66:
        force_silent = '\x01';
        break;
      case 0x68:
        dereference = 0;
        break;
      case 0x76:
        verbosity = 0;
        break;
      case 0x80:
        dereference = 1;
        break;
      case 0x81:
        bVar2 = false;
        break;
      case 0x82:
        bVar2 = true;
        break;
      case 0x83:
        local_70 = _optarg;
      }
    }
  }
  if ((recurse == '\0') || (local_80 != 0x10)) {
    if ((dereference == -1) && (local_80 == 2)) {
      dereference = 1;
    }
LAB_00101ec1:
    if (local_70 == (undefined *)0x0) {
      lVar9 = (long)_optind;
      if (local_78 == 0) {
        _optind = _optind + 1;
        local_78 = param_2[lVar9];
        if (param_1 <= _optind) {
          if (local_78 == 0) goto LAB_0010202e;
          goto LAB_001020e6;
        }
      }
      else if (param_1 <= _optind) {
LAB_001020e6:
        if (param_2[(long)_optind + -1] == local_78) {
          uVar7 = quote(param_2[(long)param_1 + -1]);
          uVar8 = dcgettext(0,"missing operand after %s",5);
          error(0,0,uVar8,uVar7);
          goto switchD_00101c83_caseD_49;
        }
        goto LAB_0010202e;
      }
      change = mode_compile();
      if (change == 0) {
        uVar7 = quote(local_78);
        uVar8 = dcgettext(0,"invalid mode: %s",5);
        error(0,0,uVar8,uVar7);
                    /* WARNING: Subroutine does not return */
        usage(1);
      }
      umask_value = umask(0);
LAB_00101f04:
      if ((recurse == '\0') || (!bVar2)) {
        root_dev_ino = 0;
      }
      else {
        root_dev_ino = get_root_dev_ino(dev_ino_buf_1);
        if (root_dev_ino == 0) {
          local_70 = &_LC6;
          root_dev_ino = 0;
LAB_001020a1:
          uVar7 = quotearg_style(4,local_70);
          uVar8 = dcgettext(0,"failed to get attributes of %s",5);
          piVar10 = __errno_location();
          error(1,*piVar10,uVar8,uVar7);
LAB_001020dd:
                    /* WARNING: Subroutine does not return */
          usage(0);
        }
      }
      uVar11 = 1;
      uVar7 = xfts_open(param_2 + _optind,local_80 | 0x400,0);
      while (lVar9 = rpl_fts_read(uVar7), lVar9 != 0) {
        uVar3 = process_file(uVar7,lVar9);
        uVar11 = uVar11 & uVar3;
      }
      piVar10 = __errno_location();
      if (*piVar10 != 0) {
        if (force_silent == '\0') {
          uVar11 = 0;
          uVar8 = dcgettext(0,"fts_read failed",5);
          error(0,*piVar10,uVar8);
        }
        else {
          uVar11 = 0;
        }
      }
      iVar4 = rpl_fts_close(uVar7);
      if (iVar4 != 0) {
        uVar11 = 0;
        uVar7 = dcgettext(0,"fts_close failed",5);
        error(0,*piVar10,uVar7);
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar11 ^ 1;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (local_78 != 0) goto LAB_00102182;
    if (_optind < param_1) {
      change = mode_create_from_ref(local_70);
      if (change == 0) goto LAB_001020a1;
      goto LAB_00101f04;
    }
LAB_0010202e:
    pcVar12 = "missing operand";
  }
  else {
    if (dereference != 1) {
      dereference = 0;
      goto LAB_00101ec1;
    }
    uVar7 = dcgettext(0,"-R --dereference requires either -H or -L",5);
    error(1,0,uVar7);
LAB_00102182:
    pcVar12 = "cannot combine mode and --reference options";
  }
  uVar7 = dcgettext(0,pcVar12,5);
  error(0,0,uVar7);
switchD_00101c83_caseD_49:
                    /* WARNING: Subroutine does not return */
  usage(1);
}


