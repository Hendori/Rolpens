
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
                    "Usage: %s [OPTION]... CONTEXT FILE...\n  or:  %s [OPTION]... [-u USER] [-r ROLE] [-l RANGE] [-t TYPE] FILE...\n  or:  %s [OPTION]... --reference=RFILE FILE...\n"
                    ,5);
  __printf_chk(2,uVar3,uVar5,uVar5,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "Change the SELinux security context of each FILE to CONTEXT.\nWith --reference, change the security context of each FILE to that of RFILE.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --dereference      affect the referent of each symbolic link (this is\n                         the default), rather than the symbolic link itself\n  -h, --no-dereference   affect symbolic links instead of any referenced file\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -u, --user=USER        set user USER in the target security context\n  -r, --role=ROLE        set role ROLE in the target security context\n  -t, --type=TYPE        set type TYPE in the target security context\n  -l, --range=RANGE      set range RANGE in the target security context\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --no-preserve-root  do not treat \'/\' specially (the default)\n      --preserve-root    fail to operate recursively on \'/\'\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --reference=RFILE  use RFILE\'s security context rather than specifying\n                         a CONTEXT value\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -R, --recursive        operate on files and directories recursively\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -v, --verbose          output a diagnostic for every file processed\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nThe following options modify how a hierarchy is traversed when the -R\noption is also specified.  If more than one is specified, only the final\none takes effect.\n\n  -H                     if a command line argument is a symbolic link\n                         to a directory, traverse it\n  -L                     traverse every symbolic link to a directory\n                         encountered\n  -P                     do not traverse any symbolic links (default)\n\n"
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
    iVar2 = strcmp("chcon",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)piVar7 + 0x10);
    piVar7 = (infomap *)((long)piVar7 + 0x10);
  } while (pcVar4 != (char *)0x0);
  pcVar4 = *(char **)((long)piVar7 + 8);
  if (pcVar4 == (char *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    pcVar4 = "chcon";
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) goto LAB_00100345;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","chcon");
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) {
LAB_00100345:
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
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","chcon");
    if (pcVar4 == "chcon") {
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
  bool bVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined8 uVar9;
  int extraout_EDX;
  long lVar10;
  uint uVar11;
  long lVar12;
  char *pcVar13;
  uint uVar14;
  long in_FS_OFFSET;
  char *local_60;
  uint local_54;
  int local_50;
  char *file_context;
  long local_40;
  
  bVar1 = false;
  lVar12 = (long)argc;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  bVar2 = false;
  local_60 = (char *)0x0;
  local_50 = -1;
  local_54 = 0x10;
  do {
    iVar5 = getopt_long(argc,argv,"HLPRhvu:r:t:l:",long_options,0);
    if (iVar5 == -1) {
      if (recurse == false) {
        local_54 = 0x10;
        uVar3 = local_50 != 0;
LAB_0010136e:
        affect_symlink_referent = (_Bool)uVar3;
        lVar10 = (long)_optind;
        iVar5 = _optind;
        if (((int)((uint)(byte)(local_60 != (char *)0x0 | bVar1) << 0x1f) >> 0x1f) + 2 <=
            argc - _optind) {
          if (local_60 != (char *)0x0) {
            argv = (char **)__errno_location();
            *(int *)argv = 0x5f;
            lVar12 = quotearg_style(4,local_60);
            uVar6 = dcgettext(0,"failed to get security context of %s",5);
            error(1,*(int *)argv,uVar6,lVar12);
LAB_00101a04:
            pcVar13 = "-R -h requires -P";
            goto LAB_00101a10;
          }
          if (!bVar1) {
            _optind = _optind + 1;
            local_60 = argv[lVar10];
          }
          specified_context = local_60;
          if ((recurse == false) || (!bVar2)) {
            root_dev_ino = (dev_ino *)0x0;
          }
          else {
            root_dev_ino = (dev_ino *)get_root_dev_ino(&main::lexical_block_10::dev_ino_buf);
            if (root_dev_ino == (dev_ino *)0x0) {
              lVar12 = quotearg_style(4,&_LC41);
              argv = (char **)dcgettext(0,"failed to get attributes of %s",5);
              piVar8 = __errno_location();
              error(1,*piVar8,argv,lVar12);
              iVar5 = extraout_EDX;
              goto LAB_0010184d;
            }
          }
          uVar11 = 1;
          lVar12 = xfts_open(argv + _optind,local_54 | 8,0);
          lVar10 = rpl_fts_read(lVar12);
          if (lVar10 != 0) break;
          goto LAB_001014d3;
        }
LAB_0010184d:
        if ((int)lVar12 <= iVar5) {
          uVar6 = dcgettext(0,"missing operand",5);
          error(0,0,uVar6);
          goto switchD_0010123b_caseD_49;
        }
      }
      else {
        if (local_54 != 0x10) {
          uVar3 = recurse;
          if (local_50 != 0) goto LAB_0010136e;
          goto LAB_00101a04;
        }
        pcVar13 = "-R --dereference requires either -H or -L";
        uVar3 = 0;
        if (local_50 != 1) goto LAB_0010136e;
LAB_00101a10:
        uVar6 = dcgettext(0,pcVar13,5);
        error(1,0,uVar6);
      }
      uVar6 = quote(argv[lVar12 + -1]);
      uVar7 = dcgettext(0,"missing operand after %s",5);
      error(0,0,uVar7,uVar6);
      goto switchD_0010123b_caseD_49;
    }
    if (0x83 < iVar5) goto switchD_0010123b_caseD_49;
    if (iVar5 < 0x48) {
      if (iVar5 == -0x83) {
        uVar6 = proper_name_lite("Jim Meyering","Jim Meyering");
        uVar7 = proper_name_lite("Russell Coker","Russell Coker");
        version_etc(_stdout,"chcon","GNU coreutils",_Version,uVar7,uVar6,0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar5 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      goto switchD_0010123b_caseD_49;
    }
    switch(iVar5) {
    case 0x48:
      local_54 = 0x11;
      break;
    default:
switchD_0010123b_caseD_49:
                    /* WARNING: Subroutine does not return */
      usage(1);
    case 0x4c:
      local_54 = 2;
      break;
    case 0x50:
      local_54 = 0x10;
      break;
    case 0x52:
      recurse = true;
      break;
    case 0x66:
      break;
    case 0x68:
      local_50 = 0;
      break;
    case 0x6c:
    case 0x72:
    case 0x74:
    case 0x75:
      bVar1 = true;
      break;
    case 0x76:
      verbose = true;
      break;
    case 0x80:
      local_50 = 1;
      break;
    case 0x81:
      bVar2 = false;
      break;
    case 0x82:
      bVar2 = true;
      break;
    case 0x83:
      local_60 = _optarg;
    }
  } while( true );
LAB_00101420:
  pcVar13 = *(char **)(lVar10 + 0x38);
  uVar6 = *(undefined8 *)(lVar10 + 0x30);
  switch(*(undefined2 *)(lVar10 + 0x68)) {
  default:
    goto switchD_0010143b_caseD_0;
  case 1:
    if (recurse == false) goto switchD_0010143b_caseD_0;
    if ((root_dev_ino == (dev_ino *)0x0) ||
       (*(dev_t *)(lVar10 + 0x70) != root_dev_ino->st_dev ||
        *(ino_t *)(lVar10 + 0x78) != root_dev_ino->st_ino)) goto LAB_0010154c;
    iVar5 = strcmp(pcVar13,"/");
    if (iVar5 == 0) {
      uVar6 = quotearg_style(4,pcVar13);
      uVar7 = dcgettext(0,"it is dangerous to operate recursively on %s",5);
      error(0,0,uVar7,uVar6);
    }
    else {
      uVar6 = quotearg_n_style(1,4,&_LC41);
      uVar7 = quotearg_n_style(0,4,pcVar13);
      uVar9 = dcgettext(0,"it is dangerous to operate recursively on %s (same as %s)",5);
      error(0,0,uVar9,uVar7,uVar6);
    }
    uVar6 = dcgettext(0,"use --no-preserve-root to override this failsafe",5);
    error(0,0,uVar6);
    rpl_fts_set(lVar12,lVar10,4);
    rpl_fts_read(lVar12);
LAB_001016b8:
    uVar14 = 0;
    goto LAB_001014bc;
  case 2:
    cVar4 = cycle_warning_required(lVar12,lVar10);
    if (cVar4 != '\0') {
      uVar6 = quotearg_n_style_colon(0,3,pcVar13);
      uVar7 = dcgettext(0,
                        "WARNING: Circular directory structure.\nThis almost certainly means that you have a corrupted file system.\nNOTIFY YOUR SYSTEM MANAGER.\nThe following directory is part of the cycle:\n  %s\n"
                        ,5);
      error(0,0,uVar7,uVar6);
      goto LAB_001016b8;
    }
switchD_0010143b_caseD_0:
    if (verbose != false) {
      uVar7 = quotearg_style(4,pcVar13);
      uVar9 = dcgettext(0,"changing security context of %s\n",5);
      __printf_chk(2,uVar9,uVar7);
    }
    pcVar13 = specified_context;
    file_context = (char *)0x0;
    if (specified_context == (char *)0x0) {
      if (affect_symlink_referent == false) {
        iVar5 = lgetfileconat(*(undefined4 *)(lVar12 + 0x2c),uVar6,&file_context);
      }
      else {
        iVar5 = getfileconat();
      }
      if ((iVar5 < 0) && (piVar8 = __errno_location(), *piVar8 != 0x3d)) {
        uVar6 = quotearg_style(4,uVar6);
        pcVar13 = "failed to get security context of %s";
      }
      else {
        pcVar13 = file_context;
        if (file_context == (char *)0x0) {
          uVar6 = quotearg_style(4,uVar6);
          uVar7 = dcgettext(0,"can\'t apply partial context to unlabeled file %s",5);
          error(0,0,uVar7,uVar6);
          break;
        }
        piVar8 = __errno_location();
        *piVar8 = 0x5f;
        uVar6 = quote(pcVar13);
        pcVar13 = "failed to create security context: %s";
      }
      uVar7 = dcgettext(0,pcVar13,5);
      error(0,*piVar8,uVar7,uVar6);
      break;
    }
    if (affect_symlink_referent == false) {
      iVar5 = lsetfileconat(*(undefined4 *)(lVar12 + 0x2c),uVar6,specified_context);
    }
    else {
      iVar5 = setfileconat();
    }
    if (iVar5 != 0) {
      uVar7 = quote_n(1,pcVar13);
      uVar6 = quotearg_n_style(0,4,uVar6);
      uVar9 = dcgettext(0,"failed to change context of %s to %s",5);
      piVar8 = __errno_location();
      error(0,*piVar8,uVar9,uVar6,uVar7);
      break;
    }
    uVar14 = 1;
    goto LAB_001014af;
  case 4:
    uVar6 = quotearg_style(4,pcVar13);
    pcVar13 = "cannot read directory %s";
    goto LAB_001018c6;
  case 6:
    if (recurse == false) {
LAB_0010154c:
      uVar14 = 1;
      goto LAB_001014bc;
    }
    if ((root_dev_ino == (dev_ino *)0x0) ||
       (*(dev_t *)(lVar10 + 0x70) != root_dev_ino->st_dev ||
        *(ino_t *)(lVar10 + 0x78) != root_dev_ino->st_ino)) goto switchD_0010143b_caseD_0;
    iVar5 = strcmp(pcVar13,"/");
    if (iVar5 == 0) {
      uVar6 = quotearg_style(4,pcVar13);
      uVar7 = dcgettext(0,"it is dangerous to operate recursively on %s",5);
      error(0,0,uVar7,uVar6);
    }
    else {
      uVar6 = quotearg_n_style(1,4,&_LC41);
      uVar7 = quotearg_n_style(0,4,pcVar13);
      uVar9 = dcgettext(0,"it is dangerous to operate recursively on %s (same as %s)",5);
      error(0,0,uVar9,uVar7,uVar6);
    }
    uVar6 = dcgettext(0,"use --no-preserve-root to override this failsafe",5);
    error(0,0,uVar6);
    break;
  case 7:
    uVar6 = quotearg_n_style_colon(0,3,pcVar13);
    error(0,*(undefined4 *)(lVar10 + 0x40),&_LC48,uVar6);
    break;
  case 10:
    if ((*(long *)(lVar10 + 0x58) == 0) && (*(long *)(lVar10 + 0x20) == 0)) {
      *(undefined8 *)(lVar10 + 0x20) = 1;
      rpl_fts_set(lVar12,lVar10,1);
      goto LAB_0010154c;
    }
    uVar6 = quotearg_style(4,pcVar13);
    pcVar13 = "cannot access %s";
LAB_001018c6:
    uVar7 = dcgettext(0,pcVar13,5);
    error(0,*(undefined4 *)(lVar10 + 0x40),uVar7,uVar6);
  }
  uVar14 = 0;
LAB_001014af:
  if (recurse == false) {
    rpl_fts_set(lVar12,lVar10,4);
  }
LAB_001014bc:
  uVar11 = uVar11 & uVar14;
  lVar10 = rpl_fts_read();
  if (lVar10 == 0) {
LAB_001014d3:
    piVar8 = __errno_location();
    if (*piVar8 != 0) {
      uVar11 = 0;
      uVar6 = dcgettext(0,"fts_read failed",5);
      error(0,*piVar8,uVar6);
    }
    iVar5 = rpl_fts_close(lVar12);
    if (iVar5 != 0) {
      uVar11 = 0;
      uVar6 = dcgettext(0,"fts_close failed",5);
      error(0,*piVar8,uVar6);
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar11 ^ 1;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  goto LAB_00101420;
}


