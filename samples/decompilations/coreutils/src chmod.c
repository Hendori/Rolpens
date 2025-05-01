
/* WARNING: Unknown calling convention */

_Bool process_file(FTS *fts,FTSENT *ent)

{
  uint uVar1;
  char *__s1;
  long lVar2;
  char cVar3;
  uint __mode;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined8 uVar9;
  char *pcVar10;
  Verbosity VVar11;
  undefined1 uVar12;
  stat *__buf;
  long in_FS_OFFSET;
  bool bVar13;
  stat stat_buf;
  stat new_stats;
  char new_perms [12];
  char naively_expected_perms [12];
  
  __buf = ent->fts_statp;
  __s1 = ent->fts_path;
  pcVar10 = ent->fts_accpath;
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  switch(ent->fts_info) {
  case 2:
    cVar3 = cycle_warning_required();
    if (cVar3 == '\0') break;
    uVar6 = quotearg_n_style_colon(0,3,__s1);
    uVar7 = dcgettext(0,
                      "WARNING: Circular directory structure.\nThis almost certainly means that you have a corrupted file system.\nNOTIFY YOUR SYSTEM MANAGER.\nThe following directory is part of the cycle:\n  %s\n"
                      ,5);
    error(0,0,uVar7,uVar6);
    goto LAB_001006a9;
  case 4:
    if (!force_silent) {
      uVar6 = quotearg_style(4,__s1);
      pcVar10 = "cannot read directory %s";
LAB_001006e4:
      uVar7 = dcgettext(0,pcVar10,5);
      error(0,ent->fts_errno,uVar7,uVar6);
    }
    goto LAB_0010024d;
  case 6:
switchD_0010004f_caseD_6:
    uVar12 = 1;
    goto LAB_00100203;
  case 7:
    if (!force_silent) {
      uVar6 = quotearg_n_style_colon(0,3,__s1);
      error(0,ent->fts_errno,&_LC1,uVar6);
    }
    goto LAB_0010024d;
  case 10:
    if ((ent->fts_level == 0) && (ent->fts_number == 0)) {
      ent->fts_number = 1;
      rpl_fts_set(fts,ent,1);
      goto switchD_0010004f_caseD_6;
    }
    if (!force_silent) {
      uVar6 = quotearg_style(4,__s1);
      pcVar10 = "cannot access %s";
      goto LAB_001006e4;
    }
LAB_0010024d:
    uVar5 = 0;
    goto LAB_00100250;
  case 0xc:
    if (dereference == 1) {
      __buf = &stat_buf;
      iVar4 = fstatat(fts->fts_cwd_fd,pcVar10,(stat *)__buf,0);
      if (iVar4 != 0) {
        if (force_silent == false) {
          uVar6 = quotearg_style(4,__s1);
          uVar7 = dcgettext(0,"cannot dereference %s",5);
          piVar8 = __errno_location();
          error(0,*piVar8,uVar7,uVar6);
        }
        goto LAB_0010024d;
      }
    }
    break;
  case 0xd:
    if (dereference != 0) {
      if (!force_silent) {
        uVar6 = quotearg_style(4,__s1);
        uVar7 = dcgettext(0,"cannot operate on dangling symlink %s",5);
        error(0,0,uVar7,uVar6);
      }
      goto LAB_0010024d;
    }
  }
  if ((root_dev_ino != (dev_ino *)0x0) &&
     (__buf->st_dev == root_dev_ino->st_dev && __buf->st_ino == root_dev_ino->st_ino)) {
    iVar4 = strcmp(__s1,"/");
    if (iVar4 == 0) {
      uVar6 = quotearg_style(4,__s1);
      uVar7 = dcgettext(0,"it is dangerous to operate recursively on %s",5);
      error(0,0,uVar7,uVar6);
    }
    else {
      uVar6 = quotearg_n_style(1,4,&_LC6);
      uVar7 = quotearg_n_style(0,4,__s1);
      uVar9 = dcgettext(0,"it is dangerous to operate recursively on %s (same as %s)",5);
      error(0,0,uVar9,uVar7,uVar6);
    }
    uVar6 = dcgettext(0,"use --no-preserve-root to override this failsafe",5);
    error(0,0,uVar6);
    rpl_fts_set(fts,ent,4);
    rpl_fts_read(fts);
LAB_001006a9:
    uVar12 = 0;
    goto LAB_00100203;
  }
  uVar1 = __buf->st_mode;
  __mode = mode_adjust(uVar1,(uVar1 & 0xf000) == 0x4000,umask_value,change,0);
  if (dereference == -1) {
    bVar13 = ent->fts_level == 0;
  }
  else {
    bVar13 = dereference != 0;
  }
  iVar4 = fchmodat(fts->fts_cwd_fd,pcVar10,__mode,(uint)(bVar13 ^ 1) << 8);
  VVar11 = verbosity;
  if (iVar4 == 0) {
    if (verbosity != V_off) {
      uVar5 = __mode;
      if (((__mode & 0xe00) == 0) ||
         (iVar4 = fstatat(fts->fts_cwd_fd,pcVar10,(stat *)&new_stats,0), uVar5 = new_stats.st_mode,
         iVar4 == 0)) {
        if (((uVar5 ^ uVar1) & 0xfff) != 0) {
          uVar6 = quotearg_style(4,__s1);
          strmode(__mode,new_perms);
          new_perms[10] = '\0';
          strmode(uVar1,naively_expected_perms);
          naively_expected_perms[10] = '\0';
          uVar7 = dcgettext(0,"mode of %s changed from %04lo (%s) to %04lo (%s)\n",5);
          __printf_chk(2,uVar7,uVar6,uVar1 & 0xfff,naively_expected_perms + 1,__mode & 0xfff,
                       new_perms + 1);
          goto LAB_001001b1;
        }
      }
      else if (force_silent == false) {
        uVar6 = quotearg_style(4,__s1);
        uVar7 = dcgettext(0,"getting new attributes of %s",5);
        piVar8 = __errno_location();
        error(0,*piVar8,uVar7,uVar6);
        VVar11 = verbosity;
      }
      if (VVar11 == V_high) {
        uVar6 = quotearg_style(4,__s1);
        strmode(__mode,new_perms);
        new_perms[10] = '\0';
        strmode(uVar1,naively_expected_perms);
        naively_expected_perms[10] = '\0';
        uVar7 = dcgettext(0,"mode of %s retained as %04lo (%s)\n",5);
        __printf_chk(2,uVar7,uVar6,__mode & 0xfff,new_perms + 1);
      }
    }
LAB_001001b1:
    uVar12 = diagnose_surprises;
    if (diagnose_surprises == false) {
      uVar12 = 1;
    }
    else {
      uVar5 = mode_adjust(uVar1,(uVar1 & 0xf000) == 0x4000,0,change,0);
      if ((~uVar5 & __mode) != 0) {
        strmode(__mode,new_perms);
        strmode(uVar5,naively_expected_perms);
        naively_expected_perms[10] = '\0';
        new_perms[10] = '\0';
        uVar6 = quotearg_n_style_colon(0,3,__s1);
        uVar7 = dcgettext(0,"%s: new permissions are %s, not %s",5);
        error(0,0,uVar7,uVar6,new_perms + 1,naively_expected_perms + 1);
LAB_0010077d:
        uVar12 = 0;
      }
    }
  }
  else {
    piVar8 = __errno_location();
    if (*piVar8 == 0x5f) {
      uVar5 = 2;
LAB_00100250:
      if ((verbosity != V_off) && (verbosity == V_high)) {
        uVar6 = quotearg_style(4,__s1);
        if (uVar5 == 0) {
          uVar7 = dcgettext(0,"%s could not be accessed\n",5);
          __printf_chk(2,uVar7,uVar6);
        }
        else {
          uVar5 = 2;
          uVar7 = dcgettext(0,"neither symbolic link %s nor referent has been changed\n",5);
          __printf_chk(2,uVar7,uVar6);
        }
      }
    }
    else {
      if (force_silent == false) {
        uVar6 = quotearg_style(4,__s1);
        uVar7 = dcgettext(0,"changing permissions of %s",5);
        error(0,*piVar8,uVar7,uVar6);
      }
      if (verbosity == V_off) goto LAB_0010077d;
      if (verbosity == V_high) {
        uVar5 = 1;
        uVar6 = quotearg_style(4,__s1);
        strmode(__mode,new_perms);
        new_perms[10] = '\0';
        strmode(uVar1,naively_expected_perms);
        naively_expected_perms[10] = '\0';
        uVar7 = dcgettext(0,"failed to change mode of %s from %04lo (%s) to %04lo (%s)\n",5);
        __printf_chk(2,uVar7,uVar6,uVar1 & 0xfff,naively_expected_perms + 1,__mode & 0xfff,
                     new_perms + 1);
      }
      else {
        uVar5 = 1;
      }
    }
    uVar12 = 1 < uVar5;
  }
  if (recurse == false) {
    rpl_fts_set(fts,ent,4);
  }
LAB_00100203:
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (_Bool)uVar12;
}



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
    iVar2 = strcmp("chmod",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)piVar7 + 0x10);
    piVar7 = (infomap *)((long)piVar7 + 0x10);
  } while (pcVar4 != (char *)0x0);
  pcVar4 = *(char **)((long)piVar7 + 8);
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
  exit(status);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int main(int argc,char **argv)

{
  long lVar1;
  bool bVar2;
  _Bool _Var3;
  int iVar4;
  ulong uVar5;
  size_t sVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  FTS *fts;
  FTSENT *ent;
  int *piVar9;
  long lVar10;
  byte bVar11;
  char *pcVar12;
  long lVar13;
  long in_FS_OFFSET;
  uint local_80;
  char *local_78;
  undefined *local_70;
  idx_t mode_alloc;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  mode_alloc = 0;
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  diagnose_surprises = false;
  force_silent = false;
  recurse = false;
  local_80 = 0x11;
  local_70 = (undefined *)0x0;
  bVar2 = false;
  local_78 = (char *)0x0;
  lVar10 = 0;
  while( true ) {
    uVar5 = getopt_long(argc,argv,
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
      pcVar12 = argv[(long)_optind + -1];
      sVar6 = strlen(pcVar12);
      lVar13 = (lVar10 + 1) - (ulong)(lVar10 == 0);
      lVar1 = sVar6 + lVar13;
      if (mode_alloc <= lVar1) {
        local_78 = (char *)xpalloc(local_78,&mode_alloc,(lVar1 + 1) - mode_alloc,0xffffffffffffffff)
        ;
      }
      local_78[lVar10] = ',';
      memcpy(local_78 + lVar13,pcVar12,sVar6 + 1);
      diagnose_surprises = true;
      lVar10 = lVar1;
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
        recurse = true;
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
        verbosity = V_changes_only;
        break;
      case 0x66:
        force_silent = true;
        break;
      case 0x68:
        dereference = 0;
        break;
      case 0x76:
        verbosity = V_high;
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
  if ((recurse == false) || (local_80 != 0x10)) {
    if ((dereference == -1) && (local_80 == 2)) {
      dereference = 1;
    }
LAB_00101ec1:
    if (local_70 == (undefined *)0x0) {
      lVar10 = (long)_optind;
      if (local_78 == (char *)0x0) {
        _optind = _optind + 1;
        local_78 = argv[lVar10];
        if (argc <= _optind) {
          if (local_78 == (char *)0x0) goto LAB_0010202e;
          goto LAB_001020e6;
        }
      }
      else if (argc <= _optind) {
LAB_001020e6:
        if (argv[(long)_optind + -1] == local_78) {
          uVar7 = quote(argv[(long)argc + -1]);
          uVar8 = dcgettext(0,"missing operand after %s",5);
          error(0,0,uVar8,uVar7);
          goto switchD_00101c83_caseD_49;
        }
        goto LAB_0010202e;
      }
      change = (mode_change *)mode_compile();
      if (change == (mode_change *)0x0) {
        uVar7 = quote(local_78);
        uVar8 = dcgettext(0,"invalid mode: %s",5);
        error(0,0,uVar8,uVar7);
                    /* WARNING: Subroutine does not return */
        usage(1);
      }
      umask_value = umask(0);
LAB_00101f04:
      if ((recurse == false) || (!bVar2)) {
        root_dev_ino = (dev_ino *)0x0;
      }
      else {
        root_dev_ino = (dev_ino *)get_root_dev_ino(&main::lexical_block_11::dev_ino_buf);
        if (root_dev_ino == (dev_ino *)0x0) {
          local_70 = &_LC6;
          root_dev_ino = (dev_ino *)0x0;
LAB_001020a1:
          uVar7 = quotearg_style(4,local_70);
          uVar8 = dcgettext(0,"failed to get attributes of %s",5);
          piVar9 = __errno_location();
          error(1,*piVar9,uVar8,uVar7);
LAB_001020dd:
                    /* WARNING: Subroutine does not return */
          usage(0);
        }
      }
      bVar11 = 1;
      fts = (FTS *)xfts_open(argv + _optind,local_80 | 0x400,0);
      while (ent = (FTSENT *)rpl_fts_read(fts), ent != (FTSENT *)0x0) {
        _Var3 = process_file(fts,ent);
        bVar11 = bVar11 & _Var3;
      }
      piVar9 = __errno_location();
      if (*piVar9 != 0) {
        if (force_silent == false) {
          bVar11 = 0;
          uVar7 = dcgettext(0,"fts_read failed",5);
          error(0,*piVar9,uVar7);
        }
        else {
          bVar11 = 0;
        }
      }
      iVar4 = rpl_fts_close(fts);
      if (iVar4 != 0) {
        bVar11 = 0;
        uVar7 = dcgettext(0,"fts_close failed",5);
        error(0,*piVar9,uVar7);
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return (int)(bVar11 ^ 1);
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (local_78 != (char *)0x0) goto LAB_00102182;
    if (_optind < argc) {
      change = (mode_change *)mode_create_from_ref(local_70);
      if (change == (mode_change *)0x0) goto LAB_001020a1;
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


