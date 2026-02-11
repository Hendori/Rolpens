
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_error(void)

{
  uint uVar1;
  FILE *pFVar2;
  int iVar3;
  uint *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined **ppuVar8;
  int __status;
  undefined *puVar9;
  long in_FS_OFFSET;
  undefined *puStack_b0;
  char *pcStack_a8;
  char *apcStack_a0 [4];
  char *pcStack_80;
  char *pcStack_78;
  char *pcStack_70;
  char *pcStack_68;
  char *pcStack_60;
  char *pcStack_58;
  undefined1 auStack_50 [16];
  undefined8 uStack_38;
  ulong uStack_30;
  
  puVar4 = (uint *)__errno_location();
  uVar1 = *puVar4;
  fflush_unlocked(_stdout);
  fpurge(_stdout);
  clearerr_unlocked(_stdout);
  uVar5 = dcgettext(0,"write error",5);
  __status = 1;
  error(1,uVar1,uVar5);
  uVar5 = _program_name;
  ppuVar8 = &puStack_b0;
  uStack_38 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  uStack_30 = (ulong)uVar1;
  if (__status != 0) {
    uVar6 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(_stderr,2,uVar6,uVar5);
    goto LAB_001000aa;
  }
  uVar6 = dcgettext(0,"Usage: %s [OPTION]... [FILE]...\n",5);
  __printf_chk(2,uVar6,uVar5);
  pFVar2 = _stdout;
  pcVar7 = (char *)dcgettext(0,"Concatenate FILE(s) to standard output.\n",5);
  fputs_unlocked(pcVar7,pFVar2);
  pFVar2 = _stdout;
  pcVar7 = (char *)dcgettext(0,"\nWith no FILE, or when FILE is -, read standard input.\n",5);
  fputs_unlocked(pcVar7,pFVar2);
  pFVar2 = _stdout;
  pcVar7 = (char *)dcgettext(0,
                             "\n  -A, --show-all           equivalent to -vET\n  -b, --number-nonblank    number nonempty output lines, overrides -n\n  -e                       equivalent to -vE\n  -E, --show-ends          display $ at end of each line\n  -n, --number             number all output lines\n  -s, --squeeze-blank      suppress repeated empty output lines\n"
                             ,5);
  fputs_unlocked(pcVar7,pFVar2);
  pFVar2 = _stdout;
  pcVar7 = (char *)dcgettext(0,
                             "  -t                       equivalent to -vT\n  -T, --show-tabs          display TAB characters as ^I\n  -u                       (ignored)\n  -v, --show-nonprinting   use ^ and M- notation, except for LFD and TAB\n"
                             ,5);
  fputs_unlocked(pcVar7,pFVar2);
  pFVar2 = _stdout;
  pcVar7 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar7,pFVar2);
  pFVar2 = _stdout;
  pcVar7 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar7,pFVar2);
  uVar5 = _program_name;
  uVar6 = dcgettext(0,
                    "\nExamples:\n  %s f - g  Output f\'s contents, then standard input, then g\'s contents.\n  %s        Copy standard input to standard output.\n"
                    ,5);
  __printf_chk(2,uVar6,uVar5,uVar5);
  pcVar7 = "[";
  puStack_b0 = &_LC1;
  pcStack_a8 = "test invocation";
  apcStack_a0[0] = "coreutils";
  apcStack_a0[1] = "Multi-call invocation";
  apcStack_a0[2] = "sha224sum";
  apcStack_a0[3] = "sha2 utilities";
  pcStack_80 = "sha256sum";
  pcStack_78 = "sha2 utilities";
  pcStack_70 = "sha384sum";
  pcStack_68 = "sha2 utilities";
  pcStack_60 = "sha512sum";
  pcStack_58 = "sha2 utilities";
  auStack_50 = (undefined1  [16])0x0;
  do {
    iVar3 = strcmp("cat",pcVar7);
    if (iVar3 == 0) break;
    pcVar7 = *(char **)((long)ppuVar8 + 0x10);
    ppuVar8 = (undefined **)((long)ppuVar8 + 0x10);
  } while (pcVar7 != (char *)0x0);
  puVar9 = *(undefined **)((long)ppuVar8 + 8);
  if (puVar9 == (undefined *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    puVar9 = &_LC2;
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar7 = setlocale(5,(char *)0x0);
    if (pcVar7 != (char *)0x0) goto LAB_00100305;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar7 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC2);
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar7 = setlocale(5,(char *)0x0);
    if (pcVar7 != (char *)0x0) {
LAB_00100305:
      iVar3 = strncmp(pcVar7,"en_",3);
      pFVar2 = _stdout;
      if (iVar3 != 0) {
        pcVar7 = (char *)dcgettext(0,
                                   "Report any translation bugs to <https://translationproject.org/team/>\n"
                                   ,5);
        fputs_unlocked(pcVar7,pFVar2);
      }
    }
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar7 = "";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC2);
    if (puVar9 == &_LC2) {
      pcVar7 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,puVar9,pcVar7);
LAB_001000aa:
                    /* WARNING: Subroutine does not return */
  exit(__status);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void usage(int param_1)

{
  FILE *pFVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
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
  ppuVar6 = &local_a8;
  local_30 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(_stderr,2,uVar3,uVar5);
    goto LAB_001000aa;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... [FILE]...\n",5);
  __printf_chk(2,uVar3,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"Concatenate FILE(s) to standard output.\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"\nWith no FILE, or when FILE is -, read standard input.\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\n  -A, --show-all           equivalent to -vET\n  -b, --number-nonblank    number nonempty output lines, overrides -n\n  -e                       equivalent to -vE\n  -E, --show-ends          display $ at end of each line\n  -n, --number             number all output lines\n  -s, --squeeze-blank      suppress repeated empty output lines\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -t                       equivalent to -vT\n  -T, --show-tabs          display TAB characters as ^I\n  -u                       (ignored)\n  -v, --show-nonprinting   use ^ and M- notation, except for LFD and TAB\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  uVar5 = _program_name;
  uVar3 = dcgettext(0,
                    "\nExamples:\n  %s f - g  Output f\'s contents, then standard input, then g\'s contents.\n  %s        Copy standard input to standard output.\n"
                    ,5);
  __printf_chk(2,uVar3,uVar5,uVar5);
  pcVar4 = "[";
  local_a8 = &_LC1;
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
    iVar2 = strcmp("cat",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)ppuVar6 + 0x10);
    ppuVar6 = (undefined **)((long)ppuVar6 + 0x10);
  } while (pcVar4 != (char *)0x0);
  puVar7 = *(undefined **)((long)ppuVar6 + 8);
  if (puVar7 == (undefined *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    puVar7 = &_LC2;
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) goto LAB_00100305;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC2);
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
LAB_00100305:
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
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC2);
    if (puVar7 == &_LC2) {
      pcVar4 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,puVar7,pcVar4);
LAB_001000aa:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte main(int param_1,undefined8 *param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  uint *puVar13;
  byte *pbVar14;
  char *pcVar15;
  uint *puVar16;
  char *pcVar17;
  long lVar18;
  __off_t _Var19;
  __off_t _Var20;
  uint *puVar21;
  int *piVar22;
  undefined8 uVar23;
  uint *puVar24;
  uint uVar25;
  long lVar26;
  byte *pbVar27;
  char *pcVar28;
  byte bVar29;
  byte *pbVar30;
  byte bVar31;
  uint *unaff_R15;
  long in_FS_OFFSET;
  byte *local_170;
  uint *local_150;
  byte local_146;
  byte local_145;
  byte local_12f;
  byte local_12e;
  byte local_12d;
  long local_120;
  uint local_118;
  uint local_114;
  long local_110;
  __dev_t local_108;
  __ino_t local_100;
  byte local_f8;
  char local_f7;
  byte local_f6;
  byte local_f5;
  uint local_f4;
  stat *local_f0;
  int local_dc;
  stat local_d8;
  long local_40;
  
  bVar31 = 0;
  bVar29 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  local_145 = 0;
  local_146 = 0;
  local_12d = 0;
  local_12f = 0;
  do {
    iVar9 = getopt_long(param_1,param_2,"benstuvAET",long_options_0,0);
    if (iVar9 == -1) {
      local_f0 = &local_d8;
      iVar9 = fstat(1,local_f0);
      pcVar28 = "standard output";
      if (iVar9 < 0) goto LAB_0010174f;
      unaff_R15 = (uint *)0x40000;
      local_f4 = local_d8.st_mode & 0xf000;
      if ((local_d8.st_blksize - 1U < 0x2000000000000000) &&
         (auVar4._8_8_ = 0, auVar4._0_8_ = SUB168(SEXT816(0x3ffff),8),
         unaff_R15 = (uint *)((0x3ffff -
                              SUB168((auVar4 << 0x40 | ZEXT816(0x3ffff)) %
                                     SEXT816(local_d8.st_blksize),0)) + local_d8.st_blksize),
         local_f4 == 0x8000)) {
LAB_0010180b:
        if (((ulong)((long)unaff_R15 + -1) & (ulong)unaff_R15) != 0) {
          lVar26 = 0x3f;
          if (unaff_R15 != (uint *)0x0) {
            for (; (ulong)unaff_R15 >> lVar26 == 0; lVar26 = lVar26 + -1) {
            }
          }
          unaff_R15 = (uint *)(1L << ((char)lVar26 + 1U & 0x3f));
        }
      }
      iVar9 = _optind;
      infile = &_LC35;
      local_12e = (bVar29 ^ 1) & local_12f;
      local_108 = local_d8.st_dev;
      local_100 = local_d8.st_ino;
      local_f6 = local_146 | local_12f;
      iVar10 = getpagesize();
      local_110 = (long)iVar10;
      local_f8 = 1;
      local_118 = 0xfffffffe;
      local_f5 = local_12d | local_145 | bVar31;
      local_f7 = '\0';
      local_120 = (long)iVar9;
      if (iVar9 < param_1) goto LAB_00100dd1;
      pbVar27 = &_LC35;
      goto LAB_00100de6;
    }
    if (0x76 < iVar9) goto switchD_00100bb4_caseD_42;
    if (iVar9 < 0x41) {
      if (iVar9 == -0x83) {
        uVar23 = proper_name_lite("Richard M. Stallman","Richard M. Stallman");
        uVar11 = proper_name_lite("Torbjorn Granlund",&_LC31);
        version_etc(_stdout,&_LC2,"GNU coreutils",_Version,uVar11,uVar23,0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar9 == -0x82) {
        usage(0);
        goto LAB_0010180b;
      }
      goto switchD_00100bb4_caseD_42;
    }
    switch(iVar9) {
    case 0x41:
      bVar31 = 1;
    case 0x65:
      local_145 = 1;
switchD_00100bb4_caseD_45:
      local_146 = 1;
      break;
    default:
switchD_00100bb4_caseD_42:
      usage();
      do {
        puVar21 = (uint *)quotearg_n_style_colon(0,3,infile);
        piVar22 = __errno_location();
        error(0,*piVar22,&_LC36,puVar21);
        local_f8 = 0;
LAB_00100db0:
        if ((local_114 != 0) && (iVar9 = close(input_desc), iVar9 < 0)) goto LAB_0010151b;
        while( true ) {
          local_120 = local_120 + 1;
          if (param_1 <= (int)local_120) {
            while( true ) {
              if ((pending_cr != '\0') && (lVar26 = full_write(1,&_LC43,1), lVar26 != 1))
              goto LAB_0010156e;
              if ((local_f7 == '\0') || (iVar9 = close(0), -1 < iVar9)) break;
              pcVar28 = "closing standard input";
LAB_0010174f:
              puVar21 = (uint *)dcgettext(0,pcVar28,5);
              piVar22 = __errno_location();
              error(1,*piVar22,puVar21);
            }
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
              return local_f8 ^ 1;
            }
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
LAB_00100dd1:
          pbVar27 = (byte *)param_2[local_120];
          infile = pbVar27;
LAB_00100de6:
          local_114 = *pbVar27 - 0x2d;
          if ((local_114 == 0) && (local_114 = (uint)pbVar27[1], local_114 == 0)) break;
          input_desc = open((char *)pbVar27,0);
          puVar21 = (uint *)(ulong)input_desc;
          if (-1 < (int)input_desc) goto LAB_00100e0f;
LAB_0010151b:
          puVar21 = (uint *)quotearg_n_style_colon(0,3,infile);
          piVar22 = __errno_location();
          error(0,*piVar22,&_LC36,puVar21);
          local_f8 = 0;
        }
        input_desc = 0;
        puVar21 = (uint *)0x0;
        local_f7 = '\x01';
LAB_00100e0f:
        iVar9 = fstat((int)puVar21,local_f0);
      } while (iVar9 < 0);
      local_150 = (uint *)0x40000;
      if ((local_d8.st_blksize - 1U >> 0x3d == 0) &&
         (auVar5._8_8_ = 0, auVar5._0_8_ = SUB168(SEXT816(0x3ffff),8),
         puVar13 = (uint *)((0x3ffff -
                            SUB168((auVar5 << 0x40 | ZEXT816(0x3ffff)) %
                                   SEXT816(local_d8.st_blksize),0)) + local_d8.st_blksize),
         local_150 = puVar13, (local_d8.st_mode & 0xf000) == 0x8000)) goto LAB_00101573;
      while( true ) {
        fdadvise((ulong)puVar21 & 0xffffffff,0,0,2);
        if (((local_d8.st_mode & 0xf000) != 0x1000) &&
           (((((local_d8.st_mode & 0xf000) != 0xc000 && (local_d8.st_dev == local_108)) &&
             (local_d8.st_ino == local_100)) && (_Var19 = lseek(input_desc,0,1), -1 < _Var19)))) {
          if ((int)local_118 < -1) {
            local_118 = rpl_fcntl(1);
          }
          iVar9 = 1;
          if (-1 < (int)local_118) {
            iVar9 = 2 - (uint)((local_118 & 0x400) == 0);
          }
          _Var20 = lseek(1,0,iVar9);
          if (_Var19 < _Var20) {
            puVar21 = (uint *)quotearg_n_style_colon(0,3,infile);
            uVar23 = dcgettext(0,"%s: input file is output file",5);
            error(0,0,uVar23,puVar21);
            local_f8 = 0;
            goto LAB_00100db0;
          }
        }
        if ((local_f6 != 0) || (local_f5 != 0)) break;
        if ((local_f4 == 0x8000) && (puVar21 = (uint *)0x0, (local_d8.st_mode & 0xf000) == 0x8000))
        {
          while (lVar26 = rpl_copy_file_range(input_desc,0,1,0,0x7fffffffc0000000,0), lVar26 != -1)
          {
            if (lVar26 == 0) {
              iVar9 = 1;
              if ((char)puVar21 != '\0') goto LAB_00101886;
              goto LAB_0010167e;
            }
            puVar21 = (uint *)0x1;
          }
          puVar21 = (uint *)__errno_location();
          uVar25 = *puVar21;
          if ((int)uVar25 < 0x1b) {
            if (((int)uVar25 < 1) || ((0x4440202UL >> ((ulong)uVar25 & 0x3f) & 1) == 0)) {
LAB_00101949:
              uVar23 = quotearg_n_style_colon(0,3,infile);
              error(0,*puVar21,&_LC36,uVar23);
              iVar9 = -1;
LAB_00101886:
              local_f8 = local_f8 & 0 < iVar9;
              local_170 = (byte *)0x0;
              goto LAB_00100da6;
            }
          }
          else if ((uVar25 != 0x26) && (uVar25 != 0x5f)) goto LAB_00101949;
        }
LAB_0010167e:
        puVar21 = local_150;
        if ((long)local_150 <= (long)unaff_R15) {
          puVar21 = unaff_R15;
        }
        local_170 = (byte *)xalignalloc(local_110,puVar21);
        do {
          lVar26 = safe_read(input_desc,local_170,puVar21);
          if (lVar26 < 0) goto LAB_001017c2;
          if (lVar26 == 0) {
            bVar29 = 1;
            goto LAB_001016e5;
          }
          lVar18 = full_write(1,local_170,lVar26);
        } while (lVar26 == lVar18);
LAB_0010156e:
        puVar13 = (uint *)write_error();
LAB_00101573:
        if (((ulong)puVar13 & (ulong)((long)puVar13 + -1)) != 0) {
          lVar26 = 0x3f;
          if (puVar13 != (uint *)0x0) {
            for (; (ulong)puVar13 >> lVar26 == 0; lVar26 = lVar26 + -1) {
            }
          }
          local_150 = (uint *)(1L << ((char)lVar26 + 1U & 0x3f));
        }
      }
      local_170 = (byte *)xalignalloc(local_110,(undefined1 *)((long)local_150 + 1));
      if ((SEXT816((long)local_150 * 4) == SEXT816((long)local_150) * SEXT816(4)) &&
         ((!SCARRY8((long)local_150 * 4,(long)unaff_R15) &&
          (puVar12 = (undefined1 *)((long)(unaff_R15 + (long)local_150) + 0x13),
          !SCARRY8((long)(unaff_R15 + (long)local_150),0x13))))) {
        puVar13 = (uint *)xalignalloc(local_110,puVar12);
        bVar6 = true;
        puVar21 = puVar13;
        pbVar27 = local_170 + 1;
        pbVar30 = local_170;
        iVar9 = newlines2;
LAB_00100f48:
        puVar24 = puVar13;
        pbVar14 = pbVar27;
        if ((uint *)((long)puVar13 + (long)unaff_R15) <= puVar21) goto LAB_001011c8;
LAB_00100f56:
        pbVar14 = pbVar27;
        if (pbVar27 <= pbVar30) goto LAB_00101233;
LAB_00100f5f:
        uVar25 = input_desc;
        local_dc = 0;
        if (bVar6) {
          iVar10 = ioctl(input_desc,0x541b,&local_dc);
          if (-1 < iVar10) {
LAB_00101306:
            if (local_dc == 0) goto LAB_00100f75;
            goto LAB_00100f90;
          }
          puVar24 = (uint *)__errno_location();
          uVar3 = *puVar24;
          if ((int)uVar3 < 0x1a) {
            if ((0x12 < (int)uVar3) && ((0x2480000UL >> ((ulong)uVar3 & 0x3f) & 1) != 0)) {
LAB_0010140f:
              bVar6 = false;
              goto LAB_00101306;
            }
          }
          else if ((uVar3 == 0x26) || (uVar3 == 0x5f)) goto LAB_0010140f;
          puVar21 = (uint *)quotearg_style(4,infile);
          uVar23 = dcgettext(0,"cannot do ioctl on %s",5);
          error(0,*puVar24,uVar23,puVar21);
LAB_001014bb:
          local_f8 = 0;
        }
        else {
LAB_00100f75:
          lVar26 = (long)puVar21 - (long)puVar13;
          uVar25 = input_desc;
          if ((0 < lVar26) &&
             (lVar18 = full_write(1,puVar13,lVar26), puVar21 = puVar13, uVar25 = input_desc,
             lVar26 != lVar18)) goto LAB_0010156e;
LAB_00100f90:
          lVar26 = safe_read(uVar25,local_170,local_150);
          if (lVar26 < 0) {
            uVar23 = quotearg_n_style_colon(0,3,infile);
            piVar22 = __errno_location();
            error(0,*piVar22,&_LC36,uVar23);
            puVar21 = (uint *)((long)puVar21 - (long)puVar13);
            if (((long)puVar21 < 1) ||
               (puVar24 = (uint *)full_write(1,puVar13,puVar21), puVar21 == puVar24))
            goto LAB_001014bb;
            goto LAB_0010156e;
          }
          if (lVar26 != 0) {
            pbVar30 = local_170 + lVar26;
            *pbVar30 = 10;
            pbVar14 = local_170;
            pbVar27 = local_170 + 1;
LAB_00100fd0:
            bVar29 = *pbVar14;
LAB_00100fd4:
            if (bVar29 != 10) {
              puVar24 = puVar21;
              if (pending_cr != '\0') {
                pending_cr = '\0';
                puVar24 = (uint *)((long)puVar21 + 1);
                *(undefined1 *)puVar21 = 0xd;
              }
              pcVar28 = line_num_start;
              if ((-1 < iVar9) && (local_12f != 0)) {
                pcVar15 = line_buf + 0x11;
                do {
                  cVar1 = *pcVar15;
                  *pcVar15 = cVar1 + '\x01';
                  if (cVar1 < '9') goto LAB_0010103d;
                  pcVar17 = pcVar15 + -1;
                  *pcVar15 = '0';
                  pcVar15 = pcVar17;
                } while (pcVar28 <= pcVar17);
                if (pcVar28 < line_buf + 1) {
                  line_buf[0] = 0x3e;
                }
                else {
                  line_num_start = pcVar28 + -1;
                  pcVar28[-1] = '1';
                  pcVar28 = line_num_start;
                }
                if (pcVar28 < line_num_print) {
                  line_num_print = line_num_print + -1;
                }
LAB_0010103d:
                puVar24 = (uint *)stpcpy((char *)puVar24,line_num_print);
              }
              uVar8 = _LC42;
              uVar7 = _LC40;
              if (local_145 == 0) {
                do {
                  if ((bVar29 == 9) && (bVar31 != 0)) {
                    bVar2 = *pbVar27;
                    *(undefined2 *)puVar24 = uVar8;
                    puVar24 = (uint *)((long)puVar24 + 2);
                  }
                  else {
                    if (bVar29 == 10) goto LAB_001012b0;
                    bVar2 = *pbVar27;
                    if (((bVar29 == 0xd) && (bVar2 == 10)) && (local_146 != 0))
                    goto code_r0x0010117b;
                    *(byte *)puVar24 = bVar29;
                    puVar24 = (uint *)((long)puVar24 + 1);
                  }
                  pbVar27 = pbVar27 + 1;
                  bVar29 = bVar2;
                } while( true );
              }
              goto LAB_0010107e;
            }
            goto LAB_00100f48;
          }
          puVar21 = (uint *)((long)puVar21 - (long)puVar13);
          if ((0 < (long)puVar21) &&
             (puVar24 = (uint *)full_write(1,puVar13,puVar21), puVar21 != puVar24))
          goto LAB_0010156e;
        }
        newlines2 = iVar9;
        free(puVar13);
        goto LAB_00100da6;
      }
      xalloc_die();
LAB_001017c2:
      puVar21 = (uint *)quotearg_n_style_colon(0,3,infile);
      piVar22 = __errno_location();
      error(0,*piVar22,&_LC36,puVar21);
      bVar29 = 0;
LAB_001016e5:
      local_f8 = local_f8 & bVar29;
LAB_00100da6:
      free(local_170);
      goto LAB_00100db0;
    case 0x45:
      goto switchD_00100bb4_caseD_45;
    case 0x54:
      bVar31 = 1;
      break;
    case 0x62:
      bVar29 = 1;
    case 0x6e:
      local_12f = 1;
      break;
    case 0x73:
      local_12d = 1;
      break;
    case 0x74:
      local_145 = 1;
      bVar31 = 1;
      break;
    case 0x75:
      break;
    case 0x76:
      local_145 = 1;
    }
  } while( true );
code_r0x0010117b:
  if (pbVar30 == pbVar27) {
    pending_cr = '\x01';
    pbVar27 = pbVar30 + 1;
    goto LAB_001012b0;
  }
  puVar21 = (uint *)((long)puVar24 + 2);
  pbVar27 = pbVar27 + 1;
  *(undefined2 *)puVar24 = 0x4d5e;
  iVar9 = -1;
  puVar24 = puVar13;
  pbVar14 = pbVar27;
  if (puVar21 < (uint *)((long)puVar13 + (long)unaff_R15)) goto LAB_00100f56;
LAB_001011c8:
  do {
    puVar16 = (uint *)full_write(1,puVar24,unaff_R15);
    if (unaff_R15 != puVar16) goto LAB_0010156e;
    puVar24 = (uint *)((long)puVar24 + (long)unaff_R15);
    lVar26 = (long)puVar21 - (long)puVar24;
  } while ((long)unaff_R15 <= lVar26);
  __memmove_chk(puVar13,puVar24,lVar26,puVar12);
  puVar21 = (uint *)((long)puVar13 + lVar26);
  if (pbVar30 < pbVar14) goto LAB_00100f5f;
LAB_00101233:
  pcVar28 = line_num_start;
  iVar9 = iVar9 + 1;
  pbVar27 = pbVar14 + 1;
  if (iVar9 < 1) goto LAB_00101262;
  if ((iVar9 == 1) || (iVar9 = 2, local_12d == 0)) goto LAB_00101257;
  bVar29 = *pbVar14;
  goto LAB_00100fd4;
LAB_00101257:
  if (local_12e != 0) {
    pcVar15 = line_buf + 0x11;
    do {
      cVar1 = *pcVar15;
      *pcVar15 = cVar1 + '\x01';
      if (cVar1 < '9') goto LAB_00101396;
      pcVar17 = pcVar15 + -1;
      *pcVar15 = '0';
      pcVar15 = pcVar17;
    } while (pcVar28 <= pcVar17);
    if (pcVar28 < line_buf + 1) {
      line_buf[0] = 0x3e;
    }
    else {
      line_num_start = pcVar28 + -1;
      pcVar28[-1] = '1';
      pcVar28 = line_num_start;
    }
    if (pcVar28 < line_num_print) {
      line_num_print = line_num_print + -1;
    }
LAB_00101396:
    puVar21 = (uint *)stpcpy((char *)puVar21,line_num_print);
  }
LAB_00101262:
  if (local_146 != 0) {
    puVar24 = puVar21;
    if (pending_cr != '\0') {
      pending_cr = '\0';
      puVar24 = (uint *)((long)puVar21 + 2);
      *(undefined2 *)puVar21 = _LC39;
    }
    *(undefined1 *)puVar24 = 0x24;
    puVar21 = (uint *)((long)puVar24 + 1);
  }
  *(undefined1 *)puVar21 = 10;
  puVar21 = (uint *)((long)puVar21 + 1);
  goto LAB_00100fd0;
LAB_0010107e:
  if (bVar29 < 0x20) {
    if ((bVar29 == 9) && (bVar31 != 1)) {
      *(undefined1 *)puVar24 = 9;
      puVar21 = (uint *)((long)puVar24 + 1);
    }
    else {
      if (bVar29 == 10) goto LAB_001012b0;
      *(undefined1 *)puVar24 = 0x5e;
      puVar21 = (uint *)((long)puVar24 + 2);
      *(byte *)((long)puVar24 + 1) = bVar29 + 0x40;
    }
  }
  else if (bVar29 < 0x7f) {
    *(byte *)puVar24 = bVar29;
    puVar21 = (uint *)((long)puVar24 + 1);
  }
  else if (bVar29 == 0x7f) {
    *(undefined2 *)puVar24 = uVar7;
    puVar21 = (uint *)((long)puVar24 + 2);
  }
  else {
    *(undefined2 *)puVar24 = _LC41;
    if (bVar29 < 0xa0) {
      *(undefined1 *)((long)puVar24 + 2) = 0x5e;
      puVar21 = puVar24 + 1;
      *(byte *)((long)puVar24 + 3) = bVar29 - 0x40;
    }
    else if (bVar29 == 0xff) {
      puVar21 = puVar24 + 1;
      *(undefined2 *)((long)puVar24 + 2) = _LC40;
    }
    else {
      puVar21 = (uint *)((long)puVar24 + 3);
      *(byte *)((long)puVar24 + 2) = bVar29 + 0x80;
    }
  }
  bVar29 = *pbVar27;
  pbVar27 = pbVar27 + 1;
  puVar24 = puVar21;
  goto LAB_0010107e;
LAB_001012b0:
  iVar9 = -1;
  puVar21 = puVar24;
  goto LAB_00100f48;
}


