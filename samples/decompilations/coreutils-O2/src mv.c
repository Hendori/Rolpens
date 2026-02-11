
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint do_move(EVP_PKEY_CTX *param_1,EVP_PKEY_CTX *param_2,undefined8 param_3,undefined8 param_4,
            long param_5)

{
  FILE *pFVar1;
  uint uVar2;
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
  char local_5a;
  byte local_59 [5];
  undefined4 local_54;
  undefined2 local_50;
  undefined1 local_4e;
  long local_48;
  undefined1 local_40;
  undefined2 local_3f;
  undefined1 local_3d;
  EVP_PKEY_CTX *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = copy(param_1,param_2);
  if ((char)uVar2 == '\0') {
LAB_00100042:
    if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return uVar2;
  }
  if (local_5a != '\0') {
    uVar2 = 0;
    goto LAB_00100042;
  }
  uVar2 = (uint)local_59[0];
  if (local_59[0] != 0) goto LAB_00100042;
  local_59[1] = 0;
  local_4e = 1;
  local_50 = 0x100;
  local_54 = 5;
  local_3f = 0;
  local_3d = 1;
  local_48 = get_root_dev_ino(dev_ino_buf_0,local_59,0,&local_5a);
  if (local_48 != 0) {
    local_40 = 0;
    local_3f = CONCAT11(*(undefined1 *)(param_5 + 0x40),(undefined1)local_3f);
    local_30 = 0;
    local_38 = param_1;
    iVar3 = rm(&local_38,local_59 + 1);
    if (3 < iVar3 - 2U) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("((status) == RM_OK || (status) == RM_USER_ACCEPTED || (status) == RM_USER_DECLINED || (status) == RM_ERROR)"
                    ,"src/mv.c",0xf1,"do_move");
    }
    uVar2 = (uint)(iVar3 != 5);
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
  pFVar1 = _stdout;
  pcVar8 = (char *)dcgettext(0,"Rename SOURCE to DEST, or move SOURCE(s) to DIRECTORY.\n",5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = _stdout;
  pcVar8 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = _stdout;
  pcVar8 = (char *)dcgettext(0,
                             "      --backup[=CONTROL]       make a backup of each existing destination file\n  -b                           like --backup but does not accept an argument\n"
                             ,5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = _stdout;
  pcVar8 = (char *)dcgettext(0,
                             "      --debug                  explain how a file is copied.  Implies -v\n"
                             ,5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = _stdout;
  pcVar8 = (char *)dcgettext(0,"      --exchange               exchange source and destination\n",5)
  ;
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = _stdout;
  pcVar8 = (char *)dcgettext(0,
                             "  -f, --force                  do not prompt before overwriting\n  -i, --interactive            prompt before overwrite\n  -n, --no-clobber             do not overwrite an existing file\nIf you specify more than one of -i, -f, -n, only the final one takes effect.\n"
                             ,5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = _stdout;
  pcVar8 = (char *)dcgettext(0,
                             "      --no-copy                do not copy if renaming fails\n      --strip-trailing-slashes  remove any trailing slashes from each SOURCE\n                                 argument\n  -S, --suffix=SUFFIX          override the usual backup suffix\n"
                             ,5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = _stdout;
  pcVar8 = (char *)dcgettext(0,
                             "  -t, --target-directory=DIRECTORY  move all SOURCE arguments into DIRECTORY\n  -T, --no-target-directory    treat DEST as a normal file\n"
                             ,5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = _stdout;
  pcVar8 = (char *)dcgettext(0,
                             "      --update[=UPDATE]        control which existing files are updated;\n                                 UPDATE={all,none,none-fail,older(default)}\n  -u                           equivalent to --update[=older].  See below\n"
                             ,5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = _stdout;
  pcVar8 = (char *)dcgettext(0,
                             "  -v, --verbose                explain what is being done\n  -Z, --context                set SELinux security context of destination\n                                 file to default type\n"
                             ,5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = _stdout;
  pcVar8 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = _stdout;
  pcVar8 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = _stdout;
  pcVar8 = (char *)dcgettext(0,
                             "\nUPDATE controls which existing files in the destination are replaced.\n\'all\' is the default operation when an --update option is not specified,\nand results in all existing files in the destination being replaced.\n\'none\' is like the --no-clobber option, in that no files in the\ndestination are replaced, and skipped files do not induce a failure.\n\'none-fail\' also ensures no files are replaced in the destination,\nbut any skipped files are diagnosed and induce a failure.\n\'older\' is the default operation when --update is specified, and results\nin files being replaced if they\'re older than the corresponding source file.\n"
                             ,5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = _stdout;
  pcVar8 = (char *)dcgettext(0,
                             "\nThe backup suffix is \'~\', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --backup option or through\nthe VERSION_CONTROL environment variable.  Here are the values:\n\n"
                             ,5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = _stdout;
  pcVar8 = (char *)dcgettext(0,
                             "  none, off       never make backups (even if --backup is given)\n  numbered, t     make numbered backups\n  existing, nil   numbered if numbered backups exist, simple otherwise\n  simple, never   always make simple backups\n"
                             ,5);
  fputs_unlocked(pcVar8,pFVar1);
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
      pFVar1 = _stdout;
      if (iVar4 != 0) {
        pcVar8 = (char *)dcgettext(0,
                                   "Report any translation bugs to <https://translationproject.org/team/>\n"
                                   ,5);
        fputs_unlocked(pcVar8,pFVar1);
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
  local_a8 = &_LC5;
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
    if (((*pcVar4 == 'm') && (pcVar4[1] == 'v')) && (pcVar4[2] == '\0')) break;
    pcVar4 = *(char **)((long)ppuVar6 + 0x10);
    ppuVar6 = (undefined1 **)((long)ppuVar6 + 0x10);
  } while (pcVar4 != (char *)0x0);
  puVar7 = *(undefined1 **)((long)ppuVar6 + 8);
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
  exit(param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte main(ulong param_1,undefined8 *param_2)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  void *__ptr;
  int *piVar10;
  ulong uVar11;
  undefined8 extraout_RDX;
  undefined8 uVar12;
  undefined8 extraout_RDX_00;
  uint uVar13;
  char *pcVar14;
  uint *puVar15;
  uint *puVar16;
  long lVar17;
  long in_FS_OFFSET;
  bool bVar18;
  long local_160;
  long local_158;
  int local_150;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_134;
  undefined8 uStack_12c;
  undefined4 local_124;
  undefined1 local_120;
  undefined1 local_11f;
  char local_11e;
  undefined1 local_11d;
  undefined4 local_11a;
  undefined1 local_116;
  undefined8 local_110;
  undefined8 local_108;
  undefined2 local_100;
  undefined1 local_fe;
  int local_fc;
  undefined1 local_f8;
  undefined1 local_f6;
  undefined1 local_f5;
  undefined1 local_f4;
  undefined1 local_f3;
  int local_f0;
  undefined4 local_ec;
  undefined1 local_e8 [16];
  undefined1 local_d8 [24];
  undefined4 local_c0;
  long local_40;
  
  uVar11 = param_1 & 0xffffffff;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  puVar15 = &switchD_001017a3::switchdataD_00101dc0;
  textdomain("coreutils");
  atexit((__func *)&close_stdin);
  cp_options_default(&local_138);
  local_100 = 1;
  local_134 = __LC45;
  uStack_12c = _UNK_001020f8;
  local_ec = 1;
  local_124 = 0;
  local_120 = 1;
  local_11d = 0;
  local_11a = 0x1010100;
  local_116 = 0;
  local_110 = 0;
  local_108 = _LC43;
  local_fe = 0;
  iVar6 = isatty(0);
  bVar18 = false;
  local_f4 = 0;
  local_f5 = iVar6 != 0;
  local_fc = 0;
  local_f8 = 0;
  bVar1 = false;
  local_160 = 0;
  local_158 = 0;
  bVar2 = false;
  local_e8 = (undefined1  [16])0x0;
  lVar17 = 0;
  lVar3 = local_160;
switchD_001017a3_caseD_5a:
  local_160 = lVar3;
  lVar7 = lVar17;
  iVar6 = getopt_long(param_1 & 0xffffffff,param_2,"bfint:uvS:TZ",long_options,0);
  if (iVar6 == -1) {
    uVar13 = (int)param_1 - _optind;
    uVar11 = (ulong)uVar13;
    puVar15 = (uint *)(param_2 + _optind);
    if ((int)(uint)(lVar7 == 0) < (int)uVar13) {
      local_c0 = 0;
      if (bVar18) {
        if (lVar7 != 0) {
          pcVar14 = "cannot combine --target-directory (-t) and --no-target-directory (-T)";
          goto LAB_00101cd3;
        }
        if ((int)uVar13 < 3) goto LAB_00101b3d;
      }
      else {
        if (lVar7 == 0) {
          lVar7 = *(long *)(puVar15 + ((long)(int)uVar13 + -1) * 2);
          iVar6 = local_f0;
          if (uVar13 == 2) goto LAB_00101bf5;
          goto LAB_00101b74;
        }
        local_150 = target_directory_operand(lVar7,local_d8);
        if (local_150 != -1) goto LAB_001019c0;
        uVar12 = quotearg_style(4,lVar7);
        uVar9 = dcgettext(0,"target directory %s",5);
        piVar10 = __errno_location();
        error(1,*piVar10,uVar9,uVar12);
      }
      uVar12 = quotearg_style(4,*(undefined8 *)(puVar15 + 4));
      uVar9 = dcgettext(0,"extra operand %s",5);
      error(0,0,uVar9,uVar12);
      usage(1);
    }
    else {
      uVar11 = (ulong)(uVar13 - 1);
      if (uVar13 - 1 != 0) {
        uVar12 = 5;
        pcVar14 = "missing file operand";
        goto LAB_00101bd6;
      }
    }
    uVar11 = quotearg_style(4,*(undefined8 *)puVar15);
    uVar12 = dcgettext(0,"missing destination file operand after %s",5);
    error(0,0,uVar12,uVar11);
    goto switchD_001017a3_caseD_55;
  }
  if (0x83 < iVar6) goto switchD_001017a3_caseD_55;
  if (iVar6 < 0x53) {
    if (iVar6 == -0x83) {
      uVar12 = proper_name_lite("Jim Meyering","Jim Meyering");
      uVar9 = proper_name_lite("David MacKenzie","David MacKenzie");
      uVar8 = proper_name_lite("Mike Parker","Mike Parker");
      version_etc(_stdout,&_LC6,"GNU coreutils",_Version,uVar8,uVar9,uVar12,0);
                    /* WARNING: Subroutine does not return */
      exit(0);
    }
    if (iVar6 == -0x82) {
      usage(0);
      goto LAB_00101c7b;
    }
    goto switchD_001017a3_caseD_55;
  }
  lVar17 = lVar7;
  lVar3 = local_160;
  switch(iVar6) {
  case 0x53:
    local_158 = _optarg;
    bVar2 = true;
    goto switchD_001017a3_caseD_5a;
  case 0x54:
    bVar18 = true;
    goto switchD_001017a3_caseD_5a;
  default:
    break;
  case 0x5a:
    goto switchD_001017a3_caseD_5a;
  case 0x62:
    bVar2 = true;
    lVar3 = _optarg;
    if (_optarg == 0) {
      lVar3 = local_160;
    }
    goto switchD_001017a3_caseD_5a;
  case 0x66:
    local_134 = CONCAT44(1,(undefined4)local_134);
    goto switchD_001017a3_caseD_5a;
  case 0x69:
    local_134 = CONCAT44(3,(undefined4)local_134);
    goto switchD_001017a3_caseD_5a;
  case 0x6e:
    local_134 = CONCAT44(2,(undefined4)local_134);
    goto switchD_001017a3_caseD_5a;
  case 0x74:
    lVar17 = _optarg;
    if (lVar7 != 0) {
      pcVar14 = "multiple target directories specified";
LAB_00101cd3:
      uVar12 = dcgettext(0,pcVar14,5);
      error(1,0,uVar12);
      uVar12 = extraout_RDX_00;
      goto LAB_00101ceb;
    }
    goto switchD_001017a3_caseD_5a;
  case 0x75:
    local_fc = 1;
    if (_optarg != 0) {
      lVar7 = __xargmatch_internal
                        ("--update",_optarg,update_type_string,update_type,4,_argmatch_die,1,
                         extraout_RDX);
      local_fc = *(int *)(update_type + lVar7 * 4);
    }
    goto switchD_001017a3_caseD_5a;
  case 0x76:
    local_f8 = 1;
    goto switchD_001017a3_caseD_5a;
  case 0x80:
    local_f8 = 1;
    local_f6 = 1;
    goto switchD_001017a3_caseD_5a;
  case 0x81:
    local_11e = '\x01';
    goto switchD_001017a3_caseD_5a;
  case 0x82:
    local_11f = 1;
    goto switchD_001017a3_caseD_5a;
  case 0x83:
    bVar1 = true;
    goto switchD_001017a3_caseD_5a;
  }
switchD_001017a3_caseD_55:
  usage(1);
LAB_00101bf5:
  iVar6 = local_f0;
  if ((local_11e == '\0') &&
     (iVar6 = renameatu(0xffffff9c,*(undefined8 *)puVar15,0xffffff9c,lVar7,1), iVar6 != 0)) {
    piVar10 = __errno_location();
    iVar6 = *piVar10;
  }
LAB_00101b74:
  local_f0 = iVar6;
  if (local_f0 == 0) {
LAB_00101b3d:
    local_150 = -100;
    lVar7 = 0;
LAB_001019c0:
    if (bVar1) {
LAB_001019c7:
      puVar16 = puVar15;
      do {
        uVar12 = *(undefined8 *)puVar16;
        puVar16 = puVar16 + 2;
        strip_trailing_slashes(uVar12);
      } while (puVar15 + (long)(int)uVar11 * 2 != puVar16);
    }
  }
  else {
    local_150 = target_directory_operand(lVar7,local_d8);
    if (local_150 == -1) {
LAB_00101c7b:
      piVar10 = __errno_location();
      iVar6 = *piVar10;
      if ((int)uVar11 < 3) goto LAB_00101b3d;
      uVar12 = quotearg_style(4,lVar7);
      uVar9 = dcgettext(0,"target %s",5);
      error(1,iVar6,uVar9,uVar12);
      goto LAB_00101cc2;
    }
    local_f0 = -1;
    uVar13 = (int)uVar11 - 1;
    uVar11 = (ulong)uVar13;
    if ((bVar1) && (uVar13 != 0)) goto LAB_001019c7;
  }
  if (local_134._4_4_ == 2) {
    local_fc = 2;
  }
  if (!bVar2) {
    local_138 = 0;
    goto LAB_00101a3e;
  }
  uVar12 = 5;
  if ((local_11e == '\0') && (1 < local_fc - 2U)) goto code_r0x00101a23;
LAB_00101ceb:
  pcVar14 = "cannot combine --backup with --exchange, -n, or --update=none-fail";
LAB_00101bd6:
  uVar12 = dcgettext(0,pcVar14,uVar12);
  error(0,0,uVar12);
  goto switchD_001017a3_caseD_55;
code_r0x00101a23:
  uVar12 = dcgettext(0,"backup type",5);
  local_138 = xget_version(uVar12,local_160);
LAB_00101a3e:
  set_simple_backup_suffix(local_158);
  hash_init();
  if (lVar7 == 0) {
    local_f3 = 1;
    bVar5 = do_move(*(undefined8 *)puVar15,*(undefined8 *)(puVar15 + 2),0xffffff9c,
                    *(undefined8 *)(puVar15 + 2),&local_138);
  }
  else {
    iVar6 = (int)uVar11;
    if (iVar6 < 2) {
      if (iVar6 != 1) {
        bVar5 = 1;
        goto LAB_00101af9;
      }
    }
    else {
      dest_info_init(&local_138);
    }
    bVar5 = 1;
    lVar17 = 1;
    do {
      uVar12 = *(undefined8 *)(puVar15 + (lVar17 + -1) * 2);
      local_f3 = iVar6 == (int)lVar17;
      uVar9 = last_component(uVar12);
      __ptr = (void *)file_name_concat(lVar7,uVar9,&local_140);
      strip_trailing_slashes(local_140);
      bVar4 = do_move(uVar12,__ptr,local_150,local_140,&local_138);
      bVar5 = bVar5 & bVar4;
      free(__ptr);
      bVar18 = iVar6 != lVar17;
      lVar17 = lVar17 + 1;
    } while (bVar18);
  }
LAB_00101af9:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar5 ^ 1;
  }
LAB_00101cc2:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


