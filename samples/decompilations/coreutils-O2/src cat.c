
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_error(void)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  fflush_unlocked(_stdout);
  fpurge(_stdout);
  clearerr_unlocked(_stdout);
  uVar3 = dcgettext(0,"write error",5);
  error(1,iVar1,uVar3);
  pcVar6 = line_num_start;
  pcVar5 = line_buf + 0x11;
  do {
    if (*pcVar5 < '9') {
      *pcVar5 = *pcVar5 + '\x01';
      return;
    }
    pcVar4 = pcVar5 + -1;
    *pcVar5 = '0';
    pcVar5 = pcVar4;
  } while (pcVar6 <= pcVar4);
  if (pcVar6 < line_buf + 1) {
    line_buf[0] = 0x3e;
  }
  else {
    line_num_start = pcVar6 + -1;
    pcVar6[-1] = '1';
    pcVar6 = line_num_start;
  }
  if (pcVar6 < line_num_print) {
    line_num_print = line_num_print + -1;
  }
  return;
}



void next_line_num(void)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar3 = line_num_start;
  pcVar2 = line_buf + 0x11;
  do {
    if (*pcVar2 < '9') {
      *pcVar2 = *pcVar2 + '\x01';
      return;
    }
    pcVar1 = pcVar2 + -1;
    *pcVar2 = '0';
    pcVar2 = pcVar1;
  } while (pcVar3 <= pcVar1);
  if (pcVar3 < line_buf + 1) {
    line_buf[0] = 0x3e;
  }
  else {
    line_num_start = pcVar3 + -1;
    pcVar3[-1] = '1';
    pcVar3 = line_num_start;
  }
  if (pcVar3 < line_num_print) {
    line_num_print = line_num_print + -1;
  }
  return;
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
    goto LAB_0010012a;
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
    if (pcVar4 != (char *)0x0) goto LAB_00100385;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC2);
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
LAB_00100385:
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
LAB_0010012a:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte main(int param_1,undefined8 *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  bool bVar5;
  bool bVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  uint *puVar14;
  byte *pbVar15;
  uint *puVar16;
  long lVar17;
  __off_t _Var18;
  __off_t _Var19;
  uint *puVar20;
  int *piVar21;
  undefined8 uVar22;
  uint *puVar23;
  uint uVar24;
  long lVar25;
  byte *pbVar26;
  char *pcVar27;
  byte *pbVar28;
  byte bVar29;
  uint *unaff_R15;
  long in_FS_OFFSET;
  byte *local_178;
  uint *local_158;
  byte local_14f;
  byte local_14e;
  byte local_14d;
  long local_120;
  uint local_118;
  uint local_114;
  long local_110;
  __dev_t local_108;
  __ino_t local_100;
  byte local_f8;
  byte local_f7;
  char local_f6;
  byte local_f5;
  uint local_f4;
  stat *local_f0;
  int local_dc;
  stat local_d8;
  long local_40;
  
  bVar29 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  local_14e = 0;
  local_14f = 0;
  local_f8 = 0;
  bVar6 = false;
  local_14d = 0;
  do {
    iVar10 = getopt_long(param_1,param_2,"benstuvAET",long_options_0,0);
    if (iVar10 == -1) {
      local_f0 = &local_d8;
      iVar10 = fstat(1,local_f0);
      pcVar27 = "standard output";
      if (iVar10 < 0) goto LAB_001016d0;
      unaff_R15 = (uint *)0x40000;
      local_f4 = local_d8.st_mode & 0xf000;
      if ((local_d8.st_blksize - 1U < 0x2000000000000000) &&
         (auVar3._8_8_ = 0, auVar3._0_8_ = SUB168(SEXT816(0x3ffff),8),
         unaff_R15 = (uint *)((0x3ffff -
                              SUB168((auVar3 << 0x40 | ZEXT816(0x3ffff)) %
                                     SEXT816(local_d8.st_blksize),0)) + local_d8.st_blksize),
         local_f4 == 0x8000)) {
LAB_0010178a:
        if (((ulong)((long)unaff_R15 + -1) & (ulong)unaff_R15) != 0) {
          lVar25 = 0x3f;
          if (unaff_R15 != (uint *)0x0) {
            for (; (ulong)unaff_R15 >> lVar25 == 0; lVar25 = lVar25 + -1) {
            }
          }
          unaff_R15 = (uint *)(1L << ((char)lVar25 + 1U & 0x3f));
        }
      }
      iVar10 = _optind;
      infile = &_LC35;
      local_108 = local_d8.st_dev;
      local_100 = local_d8.st_ino;
      local_f5 = local_14d | local_14f;
      iVar11 = getpagesize();
      local_f7 = 1;
      local_110 = (long)iVar11;
      local_118 = 0xfffffffe;
      local_120 = (long)iVar10;
      local_f6 = '\0';
      if (iVar10 < param_1) goto LAB_00100e33;
      pbVar26 = &_LC35;
      goto LAB_00100e48;
    }
    if (0x76 < iVar10) goto switchD_00100c39_caseD_42;
    if (iVar10 < 0x41) {
      if (iVar10 == -0x83) {
        uVar22 = proper_name_lite("Richard M. Stallman","Richard M. Stallman");
        uVar12 = proper_name_lite("Torbjorn Granlund",&_LC31);
        version_etc(_stdout,&_LC2,"GNU coreutils",_Version,uVar12,uVar22,0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar10 == -0x82) {
        usage(0);
        goto LAB_0010178a;
      }
      goto switchD_00100c39_caseD_42;
    }
    switch(iVar10) {
    case 0x41:
      bVar29 = 1;
    case 0x65:
      local_14e = 1;
switchD_00100c39_caseD_45:
      local_14f = 1;
      break;
    default:
switchD_00100c39_caseD_42:
      usage();
      do {
        puVar20 = (uint *)quotearg_n_style_colon(0,3,infile);
        piVar21 = __errno_location();
        error(0,*piVar21,&_LC36,puVar20);
        local_f7 = 0;
LAB_00100e12:
        if ((local_114 != 0) && (iVar10 = close(input_desc), iVar10 < 0)) goto LAB_0010149c;
        while( true ) {
          local_120 = local_120 + 1;
          if (param_1 <= (int)local_120) {
            while( true ) {
              if ((pending_cr != '\0') && (lVar25 = full_write(1,&_LC43,1), lVar25 != 1))
              goto LAB_001014ef;
              if ((local_f6 == '\0') || (iVar10 = close(0), -1 < iVar10)) break;
              pcVar27 = "closing standard input";
LAB_001016d0:
              puVar20 = (uint *)dcgettext(0,pcVar27,5);
              piVar21 = __errno_location();
              error(1,*piVar21,puVar20);
            }
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
              return local_f7 ^ 1;
            }
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
LAB_00100e33:
          pbVar26 = (byte *)param_2[local_120];
          infile = pbVar26;
LAB_00100e48:
          local_114 = *pbVar26 - 0x2d;
          if ((local_114 == 0) && (local_114 = (uint)pbVar26[1], local_114 == 0)) break;
          input_desc = open((char *)pbVar26,0);
          puVar20 = (uint *)(ulong)input_desc;
          if (-1 < (int)input_desc) goto LAB_00100e71;
LAB_0010149c:
          puVar20 = (uint *)quotearg_n_style_colon(0,3,infile);
          piVar21 = __errno_location();
          error(0,*piVar21,&_LC36,puVar20);
          local_f7 = 0;
        }
        input_desc = 0;
        puVar20 = (uint *)0x0;
        local_f6 = '\x01';
LAB_00100e71:
        iVar10 = fstat((int)puVar20,local_f0);
      } while (iVar10 < 0);
      local_158 = (uint *)0x40000;
      if ((local_d8.st_blksize - 1U >> 0x3d == 0) &&
         (auVar4._8_8_ = 0, auVar4._0_8_ = SUB168(SEXT816(0x3ffff),8),
         puVar14 = (uint *)((0x3ffff -
                            SUB168((auVar4 << 0x40 | ZEXT816(0x3ffff)) %
                                   SEXT816(local_d8.st_blksize),0)) + local_d8.st_blksize),
         local_158 = puVar14, (local_d8.st_mode & 0xf000) == 0x8000)) goto LAB_001014f4;
      while( true ) {
        fdadvise((ulong)puVar20 & 0xffffffff,0,0,2);
        if (((local_d8.st_mode & 0xf000) != 0x1000) &&
           (((((local_d8.st_mode & 0xf000) != 0xc000 && (local_d8.st_dev == local_108)) &&
             (local_d8.st_ino == local_100)) && (_Var18 = lseek(input_desc,0,1), -1 < _Var18)))) {
          if ((int)local_118 < -1) {
            local_118 = rpl_fcntl(1);
          }
          iVar10 = 1;
          if (-1 < (int)local_118) {
            iVar10 = 2 - (uint)((local_118 & 0x400) == 0);
          }
          _Var19 = lseek(1,0,iVar10);
          if (_Var18 < _Var19) {
            puVar20 = (uint *)quotearg_n_style_colon(0,3,infile);
            uVar22 = dcgettext(0,"%s: input file is output file",5);
            error(0,0,uVar22,puVar20);
            local_f7 = 0;
            goto LAB_00100e12;
          }
        }
        if ((local_f5 != 0) ||
           (bVar9 = local_14e | bVar29 | local_f8, puVar14 = (uint *)(ulong)bVar9, bVar9 != 0))
        break;
        if ((local_f4 == 0x8000) && (puVar20 = (uint *)0x0, (local_d8.st_mode & 0xf000) == 0x8000))
        {
          while (lVar25 = rpl_copy_file_range(input_desc,0,1,0,0x7fffffffc0000000,0), lVar25 != -1)
          {
            if (lVar25 == 0) {
              iVar10 = 1;
              if ((char)puVar20 != '\0') goto LAB_00101805;
              goto LAB_001015ff;
            }
            puVar20 = (uint *)0x1;
          }
          puVar20 = (uint *)__errno_location();
          uVar24 = *puVar20;
          if ((int)uVar24 < 0x1b) {
            if (((int)uVar24 < 1) || ((0x4440202UL >> ((ulong)uVar24 & 0x3f) & 1) == 0)) {
LAB_001018c7:
              uVar22 = quotearg_n_style_colon(0,3,infile);
              error(0,*puVar20,&_LC36,uVar22);
              iVar10 = -1;
LAB_00101805:
              local_f7 = local_f7 & 0 < iVar10;
              local_178 = (byte *)0x0;
              goto LAB_00100e09;
            }
          }
          else if ((uVar24 != 0x26) && (uVar24 != 0x5f)) goto LAB_001018c7;
        }
LAB_001015ff:
        puVar20 = local_158;
        if ((long)local_158 <= (long)unaff_R15) {
          puVar20 = unaff_R15;
        }
        local_178 = (byte *)xalignalloc(local_110,puVar20);
        do {
          lVar25 = safe_read(input_desc,local_178,puVar20);
          if (lVar25 < 0) goto LAB_00101743;
          if (lVar25 == 0) {
            bVar9 = 1;
            goto LAB_00101665;
          }
          lVar17 = full_write(1,local_178,lVar25);
        } while (lVar25 == lVar17);
LAB_001014ef:
        puVar14 = (uint *)write_error();
LAB_001014f4:
        if (((ulong)puVar14 & (ulong)((long)puVar14 + -1)) != 0) {
          lVar25 = 0x3f;
          if (puVar14 != (uint *)0x0) {
            for (; (ulong)puVar14 >> lVar25 == 0; lVar25 = lVar25 + -1) {
            }
          }
          local_158 = (uint *)(1L << ((char)lVar25 + 1U & 0x3f));
        }
      }
      local_178 = (byte *)xalignalloc(local_110,(undefined1 *)((long)local_158 + 1));
      if ((SEXT816((long)local_158 * 4) == SEXT816((long)local_158) * SEXT816(4)) &&
         ((!SCARRY8((long)local_158 * 4,(long)unaff_R15) &&
          (puVar13 = (undefined1 *)((long)(unaff_R15 + (long)local_158) + 0x13),
          !SCARRY8((long)(unaff_R15 + (long)local_158),0x13))))) {
        puVar14 = (uint *)xalignalloc(local_110,puVar13);
        bVar5 = true;
        puVar20 = puVar14;
        pbVar26 = local_178 + 1;
        pbVar28 = local_178;
        iVar10 = newlines2;
LAB_00100fb0:
        puVar23 = puVar14;
        pbVar15 = pbVar26;
        if ((uint *)((long)puVar14 + (long)unaff_R15) <= puVar20) goto LAB_00101210;
LAB_00100fbe:
        pbVar15 = pbVar26;
        if (pbVar26 <= pbVar28) goto LAB_0010127b;
LAB_00100fc7:
        uVar24 = input_desc;
        local_dc = 0;
        if (bVar5) {
          iVar11 = ioctl(input_desc,0x541b,&local_dc);
          if (-1 < iVar11) {
LAB_00101382:
            if (local_dc == 0) goto LAB_00100fdd;
            goto LAB_00101000;
          }
          puVar23 = (uint *)__errno_location();
          uVar2 = *puVar23;
          if ((int)uVar2 < 0x1a) {
            if ((0x12 < (int)uVar2) && ((0x2480000UL >> ((ulong)uVar2 & 0x3f) & 1) != 0)) {
LAB_001013f7:
              bVar5 = false;
              goto LAB_00101382;
            }
          }
          else if ((uVar2 == 0x26) || (uVar2 == 0x5f)) goto LAB_001013f7;
          puVar20 = (uint *)quotearg_style(4,infile);
          uVar22 = dcgettext(0,"cannot do ioctl on %s",5);
          error(0,*puVar23,uVar22,puVar20);
LAB_00101452:
          local_f7 = 0;
        }
        else {
LAB_00100fdd:
          lVar25 = (long)puVar20 - (long)puVar14;
          uVar24 = input_desc;
          if ((0 < lVar25) &&
             (lVar17 = full_write(1,puVar14,lVar25), puVar20 = puVar14, uVar24 = input_desc,
             lVar25 != lVar17)) goto LAB_001014ef;
LAB_00101000:
          lVar25 = safe_read(uVar24,local_178,local_158);
          if (lVar25 < 0) {
            uVar22 = quotearg_n_style_colon(0,3,infile);
            piVar21 = __errno_location();
            error(0,*piVar21,&_LC36,uVar22);
            puVar20 = (uint *)((long)puVar20 - (long)puVar14);
            if (((long)puVar20 < 1) ||
               (puVar23 = (uint *)full_write(1,puVar14,puVar20), puVar20 == puVar23))
            goto LAB_00101452;
            goto LAB_001014ef;
          }
          if (lVar25 != 0) {
            pbVar28 = local_178 + lVar25;
            *pbVar28 = 10;
            pbVar15 = local_178;
            pbVar26 = local_178 + 1;
LAB_0010103d:
            bVar9 = *pbVar15;
LAB_00101041:
            if (bVar9 != 10) {
              puVar23 = puVar20;
              if (pending_cr != '\0') {
                pending_cr = '\0';
                puVar23 = (uint *)((long)puVar20 + 1);
                *(undefined1 *)puVar20 = 0xd;
              }
              if ((-1 < iVar10) && (local_14d != 0)) {
                next_line_num();
                puVar23 = (uint *)stpcpy((char *)puVar23,line_num_print);
              }
              uVar8 = _LC42;
              uVar7 = _LC40;
              if (local_14e == 0) {
                do {
                  if ((bVar9 == 9) && (bVar29 != 0)) {
                    bVar1 = *pbVar26;
                    *(undefined2 *)puVar23 = uVar8;
                    puVar23 = (uint *)((long)puVar23 + 2);
                  }
                  else {
                    if (bVar9 == 10) goto LAB_00101330;
                    bVar1 = *pbVar26;
                    if (((bVar9 == 0xd) && (bVar1 == 10)) && (local_14f != 0))
                    goto code_r0x001011c3;
                    *(byte *)puVar23 = bVar9;
                    puVar23 = (uint *)((long)puVar23 + 1);
                  }
                  pbVar26 = pbVar26 + 1;
                  bVar9 = bVar1;
                } while( true );
              }
              goto LAB_001010ca;
            }
            goto LAB_00100fb0;
          }
          puVar20 = (uint *)((long)puVar20 - (long)puVar14);
          if ((0 < (long)puVar20) &&
             (puVar23 = (uint *)full_write(1,puVar14,puVar20), puVar20 != puVar23))
          goto LAB_001014ef;
        }
        newlines2 = iVar10;
        free(puVar14);
        goto LAB_00100e09;
      }
      xalloc_die();
      puVar14 = local_158;
LAB_00101743:
      bVar9 = (byte)puVar14;
      puVar20 = (uint *)quotearg_n_style_colon(0,3,infile);
      piVar21 = __errno_location();
      error(0,*piVar21,&_LC36,puVar20);
LAB_00101665:
      local_f7 = local_f7 & bVar9;
LAB_00100e09:
      free(local_178);
      goto LAB_00100e12;
    case 0x45:
      goto switchD_00100c39_caseD_45;
    case 0x54:
      bVar29 = 1;
      break;
    case 0x62:
      bVar6 = true;
    case 0x6e:
      local_14d = 1;
      break;
    case 0x73:
      local_f8 = 1;
      break;
    case 0x74:
      local_14e = 1;
      bVar29 = 1;
      break;
    case 0x75:
      break;
    case 0x76:
      local_14e = 1;
    }
  } while( true );
code_r0x001011c3:
  if (pbVar26 == pbVar28) {
    pending_cr = '\x01';
    pbVar26 = pbVar26 + 1;
    goto LAB_00101330;
  }
  puVar20 = (uint *)((long)puVar23 + 2);
  pbVar26 = pbVar26 + 1;
  *(undefined2 *)puVar23 = 0x4d5e;
  iVar10 = -1;
  puVar23 = puVar14;
  pbVar15 = pbVar26;
  if (puVar20 < (uint *)((long)puVar14 + (long)unaff_R15)) goto LAB_00100fbe;
LAB_00101210:
  do {
    puVar16 = (uint *)full_write(1,puVar23,unaff_R15);
    if (unaff_R15 != puVar16) goto LAB_001014ef;
    puVar23 = (uint *)((long)puVar23 + (long)unaff_R15);
    lVar25 = (long)puVar20 - (long)puVar23;
  } while ((long)unaff_R15 <= lVar25);
  __memmove_chk(puVar14,puVar23,lVar25,puVar13);
  puVar20 = (uint *)((long)puVar14 + lVar25);
  if (pbVar28 < pbVar15) goto LAB_00100fc7;
LAB_0010127b:
  iVar10 = iVar10 + 1;
  pbVar26 = pbVar15 + 1;
  if (iVar10 < 1) goto LAB_001012e0;
  if ((iVar10 == 1) || (iVar10 = 2, local_f8 == 0)) goto LAB_001012a2;
  bVar9 = *pbVar15;
  goto LAB_00101041;
LAB_001012a2:
  if ((!bVar6) && (local_14d != 0)) {
    next_line_num();
    puVar20 = (uint *)stpcpy((char *)puVar20,line_num_print);
  }
LAB_001012e0:
  if (local_14f != 0) {
    puVar23 = puVar20;
    if (pending_cr != '\0') {
      pending_cr = '\0';
      puVar23 = (uint *)((long)puVar20 + 2);
      *(undefined2 *)puVar20 = _LC39;
    }
    *(undefined1 *)puVar23 = 0x24;
    puVar20 = (uint *)((long)puVar23 + 1);
  }
  *(undefined1 *)puVar20 = 10;
  puVar20 = (uint *)((long)puVar20 + 1);
  goto LAB_0010103d;
LAB_001010ca:
  if (bVar9 < 0x20) {
    if ((bVar9 == 9) && (bVar29 != 1)) {
      *(undefined1 *)puVar23 = 9;
      puVar20 = (uint *)((long)puVar23 + 1);
    }
    else {
      if (bVar9 == 10) goto LAB_00101330;
      *(undefined1 *)puVar23 = 0x5e;
      puVar20 = (uint *)((long)puVar23 + 2);
      *(byte *)((long)puVar23 + 1) = bVar9 + 0x40;
    }
  }
  else if (bVar9 < 0x7f) {
    *(byte *)puVar23 = bVar9;
    puVar20 = (uint *)((long)puVar23 + 1);
  }
  else if (bVar9 == 0x7f) {
    *(undefined2 *)puVar23 = uVar7;
    puVar20 = (uint *)((long)puVar23 + 2);
  }
  else {
    *(undefined2 *)puVar23 = _LC41;
    if (bVar9 < 0xa0) {
      *(undefined1 *)((long)puVar23 + 2) = 0x5e;
      puVar20 = puVar23 + 1;
      *(byte *)((long)puVar23 + 3) = bVar9 - 0x40;
    }
    else if (bVar9 == 0xff) {
      puVar20 = puVar23 + 1;
      *(undefined2 *)((long)puVar23 + 2) = _LC40;
    }
    else {
      puVar20 = (uint *)((long)puVar23 + 3);
      *(byte *)((long)puVar23 + 2) = bVar9 + 0x80;
    }
  }
  bVar9 = *pbVar26;
  pbVar26 = pbVar26 + 1;
  puVar23 = puVar20;
  goto LAB_001010ca;
LAB_00101330:
  iVar10 = -1;
  puVar20 = puVar23;
  goto LAB_00100fb0;
}


