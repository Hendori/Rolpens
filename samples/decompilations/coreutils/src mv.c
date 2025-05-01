
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

_Bool do_move(char *source,char *dest,int dest_dirfd,char *dest_relname,cp_options *x)

{
  long lVar1;
  FILE *pFVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int *piVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined1 **ppuVar10;
  undefined1 *puVar11;
  long in_FS_OFFSET;
  char cVar12;
  undefined1 *puStack_110;
  char *pcStack_108;
  char *apcStack_100 [4];
  char *pcStack_e0;
  char *pcStack_d8;
  char *pcStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 auStack_b0 [16];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  _Bool copy_into_self;
  _Bool rename_succeeded;
  rm_options rm_options;
  char *dir [2];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = copy((EVP_PKEY_CTX *)source,(EVP_PKEY_CTX *)dest);
  cVar12 = (char)iVar3;
  if ((char)iVar3 == '\0') {
LAB_00100042:
    if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return (_Bool)cVar12;
  }
  if (copy_into_self != false) {
    cVar12 = '\0';
    goto LAB_00100042;
  }
  cVar12 = rename_succeeded;
  if (rename_succeeded != false) goto LAB_00100042;
  rm_options.ignore_missing_files = false;
  rm_options.remove_empty_directories = true;
  rm_options.one_file_system = false;
  rm_options.recursive = true;
  rm_options.interactive = RMI_NEVER;
  rm_options.stdin_tty = false;
  rm_options.verbose = false;
  rm_options.require_restore_cwd = true;
  rm_options.root_dev_ino =
       (dev_ino *)get_root_dev_ino(dev_ino_buf_0,&rename_succeeded,0,&copy_into_self);
  if (rm_options.root_dev_ino != (dev_ino *)0x0) {
    rm_options.preserve_all_root = false;
    rm_options.verbose = x->verbose;
    dir[1] = (char *)0x0;
    dir[0] = source;
    iVar3 = rm(dir,&rm_options);
    if (3 < iVar3 - 2U) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("((status) == RM_OK || (status) == RM_USER_ACCEPTED || (status) == RM_USER_DECLINED || (status) == RM_ERROR)"
                    ,"src/mv.c",0xf1,"do_move");
    }
    cVar12 = iVar3 != 5;
    goto LAB_00100042;
  }
  uVar5 = quotearg_style(4,&_LC1);
  uVar6 = dcgettext(0,"failed to get attributes of %s",5);
  piVar7 = __errno_location();
  iVar3 = 1;
  error(1,*piVar7,uVar6,uVar5);
  uVar9 = _program_name;
  ppuVar10 = &puStack_110;
  uStack_98 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  uStack_90 = uVar6;
  uStack_88 = uVar5;
  if (iVar3 != 0) {
    uVar5 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(_stderr,2,uVar5,uVar9);
    goto LAB_001001a9;
  }
  uVar5 = dcgettext(0,
                    "Usage: %s [OPTION]... [-T] SOURCE DEST\n  or:  %s [OPTION]... SOURCE... DIRECTORY\n  or:  %s [OPTION]... -t DIRECTORY SOURCE...\n"
                    ,5);
  __printf_chk(2,uVar5,uVar9,uVar9,uVar9);
  pFVar2 = _stdout;
  pcVar8 = (char *)dcgettext(0,"Rename SOURCE to DEST, or move SOURCE(s) to DIRECTORY.\n",5);
  fputs_unlocked(pcVar8,pFVar2);
  pFVar2 = _stdout;
  pcVar8 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar8,pFVar2);
  pFVar2 = _stdout;
  pcVar8 = (char *)dcgettext(0,
                             "      --backup[=CONTROL]       make a backup of each existing destination file\n  -b                           like --backup but does not accept an argument\n"
                             ,5);
  fputs_unlocked(pcVar8,pFVar2);
  pFVar2 = _stdout;
  pcVar8 = (char *)dcgettext(0,
                             "      --debug                  explain how a file is copied.  Implies -v\n"
                             ,5);
  fputs_unlocked(pcVar8,pFVar2);
  pFVar2 = _stdout;
  pcVar8 = (char *)dcgettext(0,"      --exchange               exchange source and destination\n",5)
  ;
  fputs_unlocked(pcVar8,pFVar2);
  pFVar2 = _stdout;
  pcVar8 = (char *)dcgettext(0,
                             "  -f, --force                  do not prompt before overwriting\n  -i, --interactive            prompt before overwrite\n  -n, --no-clobber             do not overwrite an existing file\nIf you specify more than one of -i, -f, -n, only the final one takes effect.\n"
                             ,5);
  fputs_unlocked(pcVar8,pFVar2);
  pFVar2 = _stdout;
  pcVar8 = (char *)dcgettext(0,
                             "      --no-copy                do not copy if renaming fails\n      --strip-trailing-slashes  remove any trailing slashes from each SOURCE\n                                 argument\n  -S, --suffix=SUFFIX          override the usual backup suffix\n"
                             ,5);
  fputs_unlocked(pcVar8,pFVar2);
  pFVar2 = _stdout;
  pcVar8 = (char *)dcgettext(0,
                             "  -t, --target-directory=DIRECTORY  move all SOURCE arguments into DIRECTORY\n  -T, --no-target-directory    treat DEST as a normal file\n"
                             ,5);
  fputs_unlocked(pcVar8,pFVar2);
  pFVar2 = _stdout;
  pcVar8 = (char *)dcgettext(0,
                             "      --update[=UPDATE]        control which existing files are updated;\n                                 UPDATE={all,none,none-fail,older(default)}\n  -u                           equivalent to --update[=older].  See below\n"
                             ,5);
  fputs_unlocked(pcVar8,pFVar2);
  pFVar2 = _stdout;
  pcVar8 = (char *)dcgettext(0,
                             "  -v, --verbose                explain what is being done\n  -Z, --context                set SELinux security context of destination\n                                 file to default type\n"
                             ,5);
  fputs_unlocked(pcVar8,pFVar2);
  pFVar2 = _stdout;
  pcVar8 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar8,pFVar2);
  pFVar2 = _stdout;
  pcVar8 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar8,pFVar2);
  pFVar2 = _stdout;
  pcVar8 = (char *)dcgettext(0,
                             "\nUPDATE controls which existing files in the destination are replaced.\n\'all\' is the default operation when an --update option is not specified,\nand results in all existing files in the destination being replaced.\n\'none\' is like the --no-clobber option, in that no files in the\ndestination are replaced, and skipped files do not induce a failure.\n\'none-fail\' also ensures no files are replaced in the destination,\nbut any skipped files are diagnosed and induce a failure.\n\'older\' is the default operation when --update is specified, and results\nin files being replaced if they\'re older than the corresponding source file.\n"
                             ,5);
  fputs_unlocked(pcVar8,pFVar2);
  pFVar2 = _stdout;
  pcVar8 = (char *)dcgettext(0,
                             "\nThe backup suffix is \'~\', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --backup option or through\nthe VERSION_CONTROL environment variable.  Here are the values:\n\n"
                             ,5);
  fputs_unlocked(pcVar8,pFVar2);
  pFVar2 = _stdout;
  pcVar8 = (char *)dcgettext(0,
                             "  none, off       never make backups (even if --backup is given)\n  numbered, t     make numbered backups\n  existing, nil   numbered if numbered backups exist, simple otherwise\n  simple, never   always make simple backups\n"
                             ,5);
  fputs_unlocked(pcVar8,pFVar2);
  pcVar8 = "[";
  puStack_110 = &_LC5;
  pcStack_108 = "test invocation";
  apcStack_100[0] = "coreutils";
  apcStack_100[1] = "Multi-call invocation";
  apcStack_100[2] = "sha224sum";
  apcStack_100[3] = "sha2 utilities";
  pcStack_e0 = "sha256sum";
  pcStack_d8 = "sha2 utilities";
  pcStack_d0 = "sha384sum";
  pcStack_c8 = "sha2 utilities";
  pcStack_c0 = "sha512sum";
  pcStack_b8 = "sha2 utilities";
  auStack_b0 = (undefined1  [16])0x0;
  do {
    if (((*pcVar8 == 'm') && (pcVar8[1] == 'v')) && (pcVar8[2] == '\0')) break;
    pcVar8 = *(char **)((long)ppuVar10 + 0x10);
    ppuVar10 = (undefined1 **)((long)ppuVar10 + 0x10);
  } while (pcVar8 != (char *)0x0);
  puVar11 = *(undefined1 **)((long)ppuVar10 + 8);
  if (puVar11 == (undefined1 *)0x0) {
    uVar9 = dcgettext(0,"\n%s online help: <%s>\n",5);
    puVar11 = &_LC6;
    __printf_chk(2,uVar9,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar8 = setlocale(5,(char *)0x0);
    if (pcVar8 != (char *)0x0) goto LAB_0010053c;
    uVar9 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar8 = " invocation";
    __printf_chk(2,uVar9,"https://www.gnu.org/software/coreutils/",&_LC6);
  }
  else {
    uVar9 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar9,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar8 = setlocale(5,(char *)0x0);
    if (pcVar8 != (char *)0x0) {
LAB_0010053c:
      iVar4 = strncmp(pcVar8,"en_",3);
      pFVar2 = _stdout;
      if (iVar4 != 0) {
        pcVar8 = (char *)dcgettext(0,
                                   "Report any translation bugs to <https://translationproject.org/team/>\n"
                                   ,5);
        fputs_unlocked(pcVar8,pFVar2);
      }
    }
    uVar9 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar8 = "";
    __printf_chk(2,uVar9,"https://www.gnu.org/software/coreutils/",&_LC6);
    if (puVar11 == &_LC6) {
      pcVar8 = " invocation";
    }
  }
  uVar9 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar9,puVar11,pcVar8);
LAB_001001a9:
                    /* WARNING: Subroutine does not return */
  exit(iVar3);
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
  infomap *piVar6;
  undefined1 *puVar7;
  infomap infomap [7];
  
  uVar5 = _program_name;
  piVar6 = infomap;
  if (status != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(_stderr,2,uVar3,uVar5);
    goto LAB_001001a9;
  }
  uVar3 = dcgettext(0,
                    "Usage: %s [OPTION]... [-T] SOURCE DEST\n  or:  %s [OPTION]... SOURCE... DIRECTORY\n  or:  %s [OPTION]... -t DIRECTORY SOURCE...\n"
                    ,5);
  __printf_chk(2,uVar3,uVar5,uVar5,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"Rename SOURCE to DEST, or move SOURCE(s) to DIRECTORY.\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --backup[=CONTROL]       make a backup of each existing destination file\n  -b                           like --backup but does not accept an argument\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --debug                  explain how a file is copied.  Implies -v\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --exchange               exchange source and destination\n",5)
  ;
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -f, --force                  do not prompt before overwriting\n  -i, --interactive            prompt before overwrite\n  -n, --no-clobber             do not overwrite an existing file\nIf you specify more than one of -i, -f, -n, only the final one takes effect.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --no-copy                do not copy if renaming fails\n      --strip-trailing-slashes  remove any trailing slashes from each SOURCE\n                                 argument\n  -S, --suffix=SUFFIX          override the usual backup suffix\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -t, --target-directory=DIRECTORY  move all SOURCE arguments into DIRECTORY\n  -T, --no-target-directory    treat DEST as a normal file\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --update[=UPDATE]        control which existing files are updated;\n                                 UPDATE={all,none,none-fail,older(default)}\n  -u                           equivalent to --update[=older].  See below\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -v, --verbose                explain what is being done\n  -Z, --context                set SELinux security context of destination\n                                 file to default type\n"
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
                             "\nUPDATE controls which existing files in the destination are replaced.\n\'all\' is the default operation when an --update option is not specified,\nand results in all existing files in the destination being replaced.\n\'none\' is like the --no-clobber option, in that no files in the\ndestination are replaced, and skipped files do not induce a failure.\n\'none-fail\' also ensures no files are replaced in the destination,\nbut any skipped files are diagnosed and induce a failure.\n\'older\' is the default operation when --update is specified, and results\nin files being replaced if they\'re older than the corresponding source file.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nThe backup suffix is \'~\', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --backup option or through\nthe VERSION_CONTROL environment variable.  Here are the values:\n\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  none, off       never make backups (even if --backup is given)\n  numbered, t     make numbered backups\n  existing, nil   numbered if numbered backups exist, simple otherwise\n  simple, never   always make simple backups\n"
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
    if (((*pcVar4 == 'm') && (pcVar4[1] == 'v')) && (pcVar4[2] == '\0')) break;
    pcVar4 = *(char **)((long)piVar6 + 0x10);
    piVar6 = (infomap *)((long)piVar6 + 0x10);
  } while (pcVar4 != (char *)0x0);
  puVar7 = *(undefined1 **)((long)piVar6 + 8);
  if (puVar7 == (undefined1 *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    puVar7 = &_LC6;
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) goto LAB_0010053c;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC6);
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
LAB_0010053c:
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
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC6);
    if (puVar7 == &_LC6) {
      pcVar4 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,puVar7,pcVar4);
LAB_001001a9:
                    /* WARNING: Subroutine does not return */
  exit(status);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int main(int argc,char **argv)

{
  char **ppcVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  bool bVar5;
  bool bVar6;
  _Bool _Var7;
  _Bool _Var8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  char *dest;
  int *piVar14;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  char *pcVar15;
  char **ppcVar16;
  long in_FS_OFFSET;
  bool bVar17;
  bool bVar18;
  char *local_160;
  char *local_158;
  int local_150;
  char *dest_relname;
  cp_options x;
  stat sb;
  
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdin);
  cp_options_default(&x);
  x.recursive = true;
  x.set_mode = false;
  x.dereference = __LC45;
  x.interactive = _UNK_001020f4;
  x.sparse_mode = _UNK_001020f8;
  x.mode = _UNK_001020fc;
  x.reflink_mode = REFLINK_AUTO;
  x.copy_as_regular = false;
  x.unlink_dest_before_opening = false;
  x.unlink_dest_after_failed_open = false;
  x.hard_link = false;
  x.move_mode = true;
  x.install_mode = false;
  x.one_file_system = false;
  x.preserve_ownership = true;
  x.preserve_mode = true;
  x.preserve_timestamps = true;
  x.explicit_no_preserve_mode = false;
  x.set_security_context = (selabel_handle *)0x0;
  x.preserve_links = _LC43._0_1_;
  x.data_copy_required = _LC43._1_1_;
  x.require_preserve = _LC43._2_1_;
  x.preserve_security_context = _LC43._3_1_;
  x.require_preserve_context = _LC43._4_1_;
  x.preserve_xattr = _LC43._5_1_;
  x.require_preserve_xattr = _LC43._6_1_;
  x.reduce_diagnostics = _LC43._7_1_;
  x.symbolic_link = false;
  iVar9 = isatty(0);
  bVar18 = false;
  x.open_dangling_dest_symlink = false;
  x.stdin_tty = iVar9 != 0;
  x.update = UPDATE_ALL;
  x.verbose = false;
  bVar5 = false;
  local_160 = (char *)0x0;
  local_158 = (char *)0x0;
  bVar6 = false;
  x.dest_info = (Hash_table *)0x0;
  x.src_info = (Hash_table *)0x0;
  pcVar15 = (char *)0x0;
  pcVar4 = local_160;
switchD_001017a3_caseD_5a:
  local_160 = pcVar4;
  iVar9 = getopt_long(argc,argv,"bfint:uvS:TZ",long_options,0);
  if (iVar9 != -1) {
    if (iVar9 < 0x84) {
      if (0x52 < iVar9) goto code_r0x0010179c;
      if (iVar9 == -0x83) {
        uVar11 = proper_name_lite("Jim Meyering","Jim Meyering");
        uVar12 = proper_name_lite("David MacKenzie","David MacKenzie");
        uVar13 = proper_name_lite("Mike Parker","Mike Parker");
        version_etc(_stdout,&_LC6,"GNU coreutils",_Version,uVar13,uVar12,uVar11,0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar9 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
    }
    goto switchD_001017a3_caseD_55;
  }
  iVar9 = argc - _optind;
  ppcVar1 = argv + _optind;
  if (iVar9 <= (int)(uint)(pcVar15 == (char *)0x0)) {
    if (iVar9 != 1) {
      uVar11 = 5;
      pcVar15 = "missing file operand";
      goto LAB_00101bd6;
    }
    uVar11 = quotearg_style(4,*ppcVar1);
    uVar12 = dcgettext(0,"missing destination file operand after %s",5);
    error(0,0,uVar12,uVar11);
    goto switchD_001017a3_caseD_55;
  }
  sb.st_mode = 0;
  if (bVar18) {
    if (pcVar15 == (char *)0x0) {
      if (2 < iVar9) goto LAB_00101d44;
      goto LAB_00101b3d;
    }
    pcVar15 = "cannot combine --target-directory (-t) and --no-target-directory (-T)";
    goto LAB_00101cd3;
  }
  if (pcVar15 == (char *)0x0) {
    pcVar15 = ppcVar1[(long)iVar9 + -1];
    if (((iVar9 == 2) && (x.exchange == false)) &&
       (x.rename_errno = renameatu(0xffffff9c,*ppcVar1,0xffffff9c,pcVar15,1), x.rename_errno != 0))
    {
      piVar14 = __errno_location();
      x.rename_errno = *piVar14;
    }
    if (x.rename_errno == 0) {
LAB_00101b3d:
      local_150 = -100;
      pcVar15 = (char *)0x0;
      goto LAB_001019c0;
    }
    local_150 = target_directory_operand(pcVar15,&sb);
    if (local_150 == -1) {
      piVar14 = __errno_location();
      iVar2 = *piVar14;
      if (iVar9 < 3) goto LAB_00101b3d;
      uVar11 = quotearg_style(4,pcVar15);
      uVar12 = dcgettext(0,"target %s",5);
      error(1,iVar2,uVar12,uVar11);
      goto LAB_00101cc2;
    }
    x.rename_errno = -1;
    iVar9 = iVar9 + -1;
    if ((!bVar5) || (iVar9 == 0)) goto LAB_001019e9;
  }
  else {
    local_150 = target_directory_operand(pcVar15,&sb);
    if (local_150 == -1) {
      uVar11 = quotearg_style(4,pcVar15);
      uVar12 = dcgettext(0,"target directory %s",5);
      piVar14 = __errno_location();
      error(1,*piVar14,uVar12,uVar11);
LAB_00101d44:
      uVar11 = quotearg_style(4,ppcVar1[2]);
      uVar12 = dcgettext(0,"extra operand %s",5);
      error(0,0,uVar12,uVar11);
                    /* WARNING: Subroutine does not return */
      usage(1);
    }
LAB_001019c0:
    if (!bVar5) goto LAB_001019e9;
  }
  ppcVar16 = ppcVar1;
  do {
    pcVar4 = *ppcVar16;
    ppcVar16 = ppcVar16 + 1;
    strip_trailing_slashes(pcVar4);
  } while (ppcVar1 + iVar9 != ppcVar16);
LAB_001019e9:
  if (x.interactive == I_ALWAYS_SKIP) {
    x.update = UPDATE_NONE;
  }
  if (bVar6) {
    uVar11 = 5;
    if ((x.exchange != false) || (x.update - UPDATE_NONE < 2)) {
LAB_00101ceb:
      pcVar15 = "cannot combine --backup with --exchange, -n, or --update=none-fail";
LAB_00101bd6:
      uVar11 = dcgettext(0,pcVar15,uVar11);
      error(0,0,uVar11);
switchD_001017a3_caseD_55:
                    /* WARNING: Subroutine does not return */
      usage(1);
    }
    uVar11 = dcgettext(0,"backup type",5);
    x.backup_type = xget_version(uVar11,local_160);
  }
  else {
    x.backup_type = no_backups;
  }
  set_simple_backup_suffix(local_158);
  hash_init();
  if (pcVar15 == (char *)0x0) {
    x.last_file = true;
    _Var8 = do_move(*ppcVar1,ppcVar1[1],-100,ppcVar1[1],&x);
  }
  else {
    if (iVar9 < 2) {
      if (iVar9 != 1) {
        _Var8 = true;
        goto LAB_00101af9;
      }
    }
    else {
      dest_info_init(&x);
    }
    _Var8 = true;
    lVar10 = 1;
    do {
      pcVar4 = ppcVar1[lVar10 + -1];
      x.last_file = iVar9 == (int)lVar10;
      uVar11 = last_component(pcVar4);
      dest = (char *)file_name_concat(pcVar15,uVar11,&dest_relname);
      strip_trailing_slashes(dest_relname);
      _Var7 = do_move(pcVar4,dest,local_150,dest_relname,&x);
      _Var8 = (_Bool)(_Var8 & _Var7);
      free(dest);
      bVar18 = iVar9 != lVar10;
      lVar10 = lVar10 + 1;
    } while (bVar18);
  }
LAB_00101af9:
  if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (int)(_Var8 ^ 1);
  }
LAB_00101cc2:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x0010179c:
  pcVar4 = local_160;
  switch(iVar9) {
  case 0x53:
    local_158 = _optarg;
    bVar6 = true;
    goto switchD_001017a3_caseD_5a;
  case 0x54:
    bVar18 = true;
    goto switchD_001017a3_caseD_5a;
  default:
    goto switchD_001017a3_caseD_55;
  case 0x5a:
    goto switchD_001017a3_caseD_5a;
  case 0x62:
    bVar6 = true;
    pcVar4 = _optarg;
    if (_optarg == (char *)0x0) {
      pcVar4 = local_160;
    }
    goto switchD_001017a3_caseD_5a;
  case 0x66:
    x.interactive = I_ALWAYS_YES;
    goto switchD_001017a3_caseD_5a;
  case 0x69:
    x.interactive = I_ASK_USER;
    goto switchD_001017a3_caseD_5a;
  case 0x6e:
    x.interactive = I_ALWAYS_SKIP;
    goto switchD_001017a3_caseD_5a;
  case 0x74:
    bVar17 = pcVar15 != (char *)0x0;
    pcVar15 = _optarg;
    if (bVar17) {
      pcVar15 = "multiple target directories specified";
LAB_00101cd3:
      uVar11 = dcgettext(0,pcVar15,5);
      error(1,0,uVar11);
      uVar11 = extraout_RDX_00;
      goto LAB_00101ceb;
    }
    goto switchD_001017a3_caseD_5a;
  case 0x75:
    x.update = UPDATE_OLDER;
    if (_optarg != (char *)0x0) {
      lVar10 = __xargmatch_internal
                         ("--update",_optarg,update_type_string,update_type,4,_argmatch_die,1,
                          extraout_RDX);
      x.update = update_type[lVar10];
    }
    goto switchD_001017a3_caseD_5a;
  case 0x76:
    x.verbose = true;
    goto switchD_001017a3_caseD_5a;
  case 0x80:
    x.verbose = true;
    x.debug = true;
    goto switchD_001017a3_caseD_5a;
  case 0x81:
    x.exchange = true;
    goto switchD_001017a3_caseD_5a;
  case 0x82:
    x.no_copy = true;
    goto switchD_001017a3_caseD_5a;
  case 0x83:
    bVar5 = true;
    goto switchD_001017a3_caseD_5a;
  }
}


