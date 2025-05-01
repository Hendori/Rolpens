
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

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
    line_buf[0] = '>';
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



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

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
    line_buf[0] = '>';
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
/* WARNING: Unknown calling convention */

void usage(int status)

{
  FILE *pFVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  infomap *piVar6;
  undefined *puVar7;
  infomap infomap [7];
  
  uVar5 = _program_name;
  piVar6 = infomap;
  if (status != 0) {
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
    iVar2 = strcmp("cat",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)piVar6 + 0x10);
    piVar6 = (infomap *)((long)piVar6 + 0x10);
  } while (pcVar4 != (char *)0x0);
  puVar7 = *(undefined **)((long)piVar6 + 8);
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
  exit(status);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int main(int argc,char **argv)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  bool bVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  byte bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 *puVar16;
  uint *puVar17;
  byte *pbVar18;
  uint *puVar19;
  long lVar20;
  uint *extraout_RAX;
  __off_t _Var21;
  __off_t _Var22;
  int *piVar23;
  uint *puVar24;
  uint *puVar25;
  long lVar26;
  char *pcVar27;
  byte *pbVar28;
  byte *pbVar29;
  byte bVar30;
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
  int n_to_read;
  stat stat_buf;
  
  bVar30 = 0;
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  local_14e = 0;
  local_14f = 0;
  local_f8 = 0;
  bVar7 = false;
  local_14d = 0;
switchD_00100c39_caseD_75:
  iVar11 = getopt_long(argc,argv,"benstuvAET",main::long_options,0);
  if (iVar11 != -1) {
    if (0x76 < iVar11) goto switchD_00100c39_caseD_42;
    if (iVar11 < 0x41) {
      if (iVar11 == -0x83) {
        uVar14 = proper_name_lite("Richard M. Stallman","Richard M. Stallman");
        uVar15 = proper_name_lite("Torbjorn Granlund",&_LC31);
        version_etc(_stdout,&_LC2,"GNU coreutils",_Version,uVar15,uVar14,0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar11 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      goto switchD_00100c39_caseD_42;
    }
    switch(iVar11) {
    case 0x41:
      bVar30 = 1;
    case 0x65:
      local_14e = 1;
switchD_00100c39_caseD_45:
      local_14f = 1;
      break;
    default:
switchD_00100c39_caseD_42:
                    /* WARNING: Subroutine does not return */
      usage(1);
    case 0x45:
      goto switchD_00100c39_caseD_45;
    case 0x54:
      bVar30 = 1;
      break;
    case 0x62:
      bVar7 = true;
    case 0x6e:
      local_14d = 1;
      break;
    case 0x73:
      local_f8 = 1;
      break;
    case 0x74:
      local_14e = 1;
      bVar30 = 1;
      break;
    case 0x75:
      break;
    case 0x76:
      local_14e = 1;
    }
    goto switchD_00100c39_caseD_75;
  }
  iVar12 = fstat(1,(stat *)&stat_buf);
  iVar11 = _optind;
  pcVar27 = "standard output";
  if (iVar12 < 0) goto LAB_001016d0;
  unaff_R15 = (uint *)0x40000;
  local_f4 = stat_buf.st_mode & 0xf000;
  if (((stat_buf.st_blksize - 1U < 0x2000000000000000) &&
      (auVar4._8_8_ = 0, auVar4._0_8_ = SUB168(SEXT816(0x3ffff),8),
      unaff_R15 = (uint *)((0x3ffff -
                           SUB168((auVar4 << 0x40 | ZEXT816(0x3ffff)) % SEXT816(stat_buf.st_blksize)
                                  ,0)) + stat_buf.st_blksize), local_f4 == 0x8000)) &&
     (((ulong)((long)unaff_R15 + -1) & (ulong)unaff_R15) != 0)) {
    lVar26 = 0x3f;
    if (unaff_R15 != (uint *)0x0) {
      for (; (ulong)unaff_R15 >> lVar26 == 0; lVar26 = lVar26 + -1) {
      }
    }
    unaff_R15 = (uint *)(1L << ((char)lVar26 + 1U & 0x3f));
  }
  infile = "-";
  local_108 = stat_buf.st_dev;
  local_100 = stat_buf.st_ino;
  local_f5 = local_14d | local_14f;
  iVar12 = getpagesize();
  local_f7 = 1;
  local_110 = (long)iVar12;
  local_118 = 0xfffffffe;
  local_120 = (long)iVar11;
  local_f6 = '\0';
  if (iVar11 < argc) goto LAB_00100e33;
  pbVar28 = &_LC35;
LAB_00100e48:
  local_114 = *pbVar28 - 0x2d;
  if ((local_114 == 0) && (local_114 = (uint)pbVar28[1], local_114 == 0)) {
    input_desc = 0;
    puVar25 = (uint *)0x0;
    local_f6 = '\x01';
  }
  else {
    input_desc = open((char *)pbVar28,0);
    puVar25 = (uint *)(ulong)(uint)input_desc;
    if (input_desc < 0) goto LAB_0010149c;
  }
  iVar11 = fstat((int)puVar25,(stat *)&stat_buf);
  if (iVar11 < 0) {
    puVar25 = (uint *)quotearg_n_style_colon(0,3,infile);
    piVar23 = __errno_location();
    error(0,*piVar23,&_LC36,puVar25);
    local_f7 = 0;
    goto LAB_00100e12;
  }
  local_158 = (uint *)0x40000;
  if ((stat_buf.st_blksize - 1U >> 0x3d == 0) &&
     (auVar5._8_8_ = 0, auVar5._0_8_ = SUB168(SEXT816(0x3ffff),8),
     puVar17 = (uint *)((0x3ffff -
                        SUB168((auVar5 << 0x40 | ZEXT816(0x3ffff)) % SEXT816(stat_buf.st_blksize),0)
                        ) + stat_buf.st_blksize), local_158 = puVar17,
     (stat_buf.st_mode & 0xf000) == 0x8000)) goto LAB_001014f4;
LAB_00100ed5:
  fdadvise((ulong)puVar25 & 0xffffffff,0,0,2);
  if (((stat_buf.st_mode & 0xf000) == 0x1000) ||
     (((((stat_buf.st_mode & 0xf000) == 0xc000 || (stat_buf.st_dev != local_108)) ||
       (stat_buf.st_ino != local_100)) || (_Var21 = lseek(input_desc,0,1), _Var21 < 0)))) {
LAB_00100f12:
    if ((local_f5 != 0) ||
       (bVar10 = local_14e | bVar30 | local_f8, puVar17 = (uint *)(ulong)bVar10, bVar10 != 0)) {
      local_178 = (byte *)xalignalloc(local_110,(undefined1 *)((long)local_158 + 1));
      if ((SEXT816((long)local_158 * 4) == SEXT816((long)local_158) * SEXT816(4)) &&
         ((!SCARRY8((long)local_158 * 4,(long)unaff_R15) &&
          (puVar16 = (undefined1 *)((long)(unaff_R15 + (long)local_158) + 0x13),
          !SCARRY8((long)(unaff_R15 + (long)local_158),0x13))))) {
        puVar17 = (uint *)xalignalloc(local_110,puVar16);
        bVar6 = true;
        puVar25 = puVar17;
        pbVar28 = local_178 + 1;
        pbVar29 = local_178;
        iVar11 = newlines2;
LAB_00100fb0:
        puVar24 = puVar17;
        pbVar18 = pbVar28;
        if ((uint *)((long)puVar17 + (long)unaff_R15) <= puVar25) goto LAB_00101210;
LAB_00100fbe:
        pbVar18 = pbVar28;
        if (pbVar28 <= pbVar29) goto LAB_0010127b;
LAB_00100fc7:
        iVar12 = input_desc;
        n_to_read = 0;
        if (bVar6) {
          iVar13 = ioctl(input_desc,0x541b,&n_to_read);
          if (-1 < iVar13) {
LAB_00101382:
            if (n_to_read == 0) goto LAB_00100fdd;
            goto LAB_00101000;
          }
          puVar24 = (uint *)__errno_location();
          uVar2 = *puVar24;
          if ((int)uVar2 < 0x1a) {
            if ((0x12 < (int)uVar2) && ((0x2480000UL >> ((ulong)uVar2 & 0x3f) & 1) != 0)) {
LAB_001013f7:
              bVar6 = false;
              goto LAB_00101382;
            }
          }
          else if ((uVar2 == 0x26) || (uVar2 == 0x5f)) goto LAB_001013f7;
          puVar25 = (uint *)quotearg_style(4,infile);
          uVar14 = dcgettext(0,"cannot do ioctl on %s",5);
          error(0,*puVar24,uVar14,puVar25);
LAB_00101452:
          local_f7 = 0;
        }
        else {
LAB_00100fdd:
          lVar26 = (long)puVar25 - (long)puVar17;
          iVar12 = input_desc;
          if ((0 < lVar26) &&
             (lVar20 = full_write(1,puVar17,lVar26), puVar25 = puVar17, iVar12 = input_desc,
             lVar26 != lVar20)) goto LAB_001014ef;
LAB_00101000:
          lVar26 = safe_read(iVar12,local_178,local_158);
          if (lVar26 < 0) {
            uVar14 = quotearg_n_style_colon(0,3,infile);
            piVar23 = __errno_location();
            error(0,*piVar23,&_LC36,uVar14);
            puVar25 = (uint *)((long)puVar25 - (long)puVar17);
            if (((long)puVar25 < 1) ||
               (puVar24 = (uint *)full_write(1,puVar17,puVar25), puVar25 == puVar24))
            goto LAB_00101452;
            goto LAB_001014ef;
          }
          if (lVar26 != 0) {
            pbVar29 = local_178 + lVar26;
            *pbVar29 = 10;
            pbVar18 = local_178;
            pbVar28 = local_178 + 1;
LAB_0010103d:
            bVar10 = *pbVar18;
LAB_00101041:
            if (bVar10 != 10) {
              puVar24 = puVar25;
              if (pending_cr != false) {
                pending_cr = false;
                puVar24 = (uint *)((long)puVar25 + 1);
                *(undefined1 *)puVar25 = 0xd;
              }
              if ((-1 < iVar11) && (local_14d != 0)) {
                next_line_num();
                puVar24 = (uint *)stpcpy((char *)puVar24,line_num_print);
              }
              uVar9 = _LC42;
              uVar8 = _LC40;
              if (local_14e == 0) {
                do {
                  if ((bVar10 == 9) && (bVar30 != 0)) {
                    bVar1 = *pbVar28;
                    *(undefined2 *)puVar24 = uVar9;
                    puVar24 = (uint *)((long)puVar24 + 2);
                  }
                  else {
                    if (bVar10 == 10) goto LAB_00101330;
                    bVar1 = *pbVar28;
                    if (((bVar10 == 0xd) && (bVar1 == 10)) && (local_14f != 0))
                    goto code_r0x001011c3;
                    *(byte *)puVar24 = bVar10;
                    puVar24 = (uint *)((long)puVar24 + 1);
                  }
                  pbVar28 = pbVar28 + 1;
                  bVar10 = bVar1;
                } while( true );
              }
              goto LAB_001010ca;
            }
            goto LAB_00100fb0;
          }
          puVar25 = (uint *)((long)puVar25 - (long)puVar17);
          if ((0 < (long)puVar25) &&
             (puVar24 = (uint *)full_write(1,puVar17,puVar25), puVar25 != puVar24))
          goto LAB_001014ef;
        }
        newlines2 = iVar11;
        free(puVar17);
        goto LAB_00100e09;
      }
      xalloc_die();
      puVar17 = local_158;
LAB_00101743:
      bVar10 = (byte)puVar17;
      puVar25 = (uint *)quotearg_n_style_colon(0,3,infile);
      piVar23 = __errno_location();
      error(0,*piVar23,&_LC36,puVar25);
LAB_00101665:
      local_f7 = local_f7 & bVar10;
LAB_00100e09:
      free(local_178);
      goto LAB_00100e12;
    }
    if ((local_f4 == 0x8000) && (puVar25 = (uint *)0x0, (stat_buf.st_mode & 0xf000) == 0x8000)) {
      while (lVar26 = rpl_copy_file_range(input_desc,0,1,0,0x7fffffffc0000000,0), lVar26 != -1) {
        if (lVar26 == 0) {
          iVar11 = 1;
          if ((char)puVar25 != '\0') goto LAB_00101805;
          goto LAB_001015ff;
        }
        puVar25 = (uint *)0x1;
      }
      puVar25 = (uint *)__errno_location();
      uVar2 = *puVar25;
      if ((int)uVar2 < 0x1b) {
        if (((int)uVar2 < 1) || ((0x4440202UL >> ((ulong)uVar2 & 0x3f) & 1) == 0)) {
LAB_001018c7:
          uVar14 = quotearg_n_style_colon(0,3,infile);
          error(0,*puVar25,&_LC36,uVar14);
          iVar11 = -1;
LAB_00101805:
          local_f7 = local_f7 & 0 < iVar11;
          local_178 = (byte *)0x0;
          goto LAB_00100e09;
        }
      }
      else if ((uVar2 != 0x26) && (uVar2 != 0x5f)) goto LAB_001018c7;
    }
LAB_001015ff:
    puVar25 = local_158;
    if ((long)local_158 <= (long)unaff_R15) {
      puVar25 = unaff_R15;
    }
    local_178 = (byte *)xalignalloc(local_110,puVar25);
    do {
      lVar26 = safe_read(input_desc,local_178,puVar25);
      if (lVar26 < 0) goto LAB_00101743;
      if (lVar26 == 0) {
        bVar10 = 1;
        goto LAB_00101665;
      }
      lVar20 = full_write(1,local_178,lVar26);
    } while (lVar26 == lVar20);
  }
  else {
    if ((int)local_118 < -1) {
      local_118 = rpl_fcntl(1);
    }
    iVar11 = 1;
    if (-1 < (int)local_118) {
      iVar11 = 2 - (uint)((local_118 & 0x400) == 0);
    }
    _Var22 = lseek(1,0,iVar11);
    if (_Var22 <= _Var21) goto LAB_00100f12;
    puVar25 = (uint *)quotearg_n_style_colon(0,3,infile);
    uVar14 = dcgettext(0,"%s: input file is output file",5);
    error(0,0,uVar14,puVar25);
    local_f7 = 0;
LAB_00100e12:
    if ((local_114 != 0) && (iVar11 = close(input_desc), iVar11 < 0)) {
LAB_0010149c:
      puVar25 = (uint *)quotearg_n_style_colon(0,3,infile);
      piVar23 = __errno_location();
      error(0,*piVar23,&_LC36,puVar25);
      local_f7 = 0;
    }
    local_120 = local_120 + 1;
    if ((int)local_120 < argc) goto LAB_00100e33;
    while ((pending_cr == false || (lVar26 = full_write(1,&_LC43,1), lVar26 == 1))) {
      if ((local_f6 == '\0') || (iVar11 = close(0), -1 < iVar11)) {
        if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
          return (int)(local_f7 ^ 1);
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      pcVar27 = "closing standard input";
LAB_001016d0:
      puVar25 = (uint *)dcgettext(0,pcVar27,5);
      piVar23 = __errno_location();
      error(1,*piVar23,puVar25);
    }
  }
LAB_001014ef:
  write_error();
  puVar17 = extraout_RAX;
LAB_001014f4:
  if (((ulong)puVar17 & (ulong)((long)puVar17 + -1)) != 0) {
    lVar26 = 0x3f;
    if (puVar17 != (uint *)0x0) {
      for (; (ulong)puVar17 >> lVar26 == 0; lVar26 = lVar26 + -1) {
      }
    }
    local_158 = (uint *)(1L << ((char)lVar26 + 1U & 0x3f));
  }
  goto LAB_00100ed5;
code_r0x001011c3:
  if (pbVar28 == pbVar29) {
    pending_cr = true;
    pbVar28 = pbVar28 + 1;
    goto LAB_00101330;
  }
  puVar25 = (uint *)((long)puVar24 + 2);
  pbVar28 = pbVar28 + 1;
  *(undefined2 *)puVar24 = 0x4d5e;
  iVar11 = -1;
  puVar24 = puVar17;
  pbVar18 = pbVar28;
  if (puVar25 < (uint *)((long)puVar17 + (long)unaff_R15)) goto LAB_00100fbe;
LAB_00101210:
  do {
    puVar19 = (uint *)full_write(1,puVar24,unaff_R15);
    if (unaff_R15 != puVar19) goto LAB_001014ef;
    puVar24 = (uint *)((long)puVar24 + (long)unaff_R15);
    lVar26 = (long)puVar25 - (long)puVar24;
  } while ((long)unaff_R15 <= lVar26);
  __memmove_chk(puVar17,puVar24,lVar26,puVar16);
  puVar25 = (uint *)((long)puVar17 + lVar26);
  if (pbVar29 < pbVar18) goto LAB_00100fc7;
LAB_0010127b:
  iVar11 = iVar11 + 1;
  pbVar28 = pbVar18 + 1;
  if (iVar11 < 1) goto LAB_001012e0;
  if ((iVar11 == 1) || (iVar11 = 2, local_f8 == 0)) goto LAB_001012a2;
  bVar10 = *pbVar18;
  goto LAB_00101041;
LAB_001012a2:
  if ((!bVar7) && (local_14d != 0)) {
    next_line_num();
    puVar25 = (uint *)stpcpy((char *)puVar25,line_num_print);
  }
LAB_001012e0:
  if (local_14f != 0) {
    puVar24 = puVar25;
    if (pending_cr != false) {
      pending_cr = false;
      puVar24 = (uint *)((long)puVar25 + 2);
      *(undefined2 *)puVar25 = _LC39;
    }
    *(undefined1 *)puVar24 = 0x24;
    puVar25 = (uint *)((long)puVar24 + 1);
  }
  *(undefined1 *)puVar25 = 10;
  puVar25 = (uint *)((long)puVar25 + 1);
  goto LAB_0010103d;
LAB_001010ca:
  if (bVar10 < 0x20) {
    if ((bVar10 == 9) && (bVar30 != 1)) {
      *(undefined1 *)puVar24 = 9;
      puVar25 = (uint *)((long)puVar24 + 1);
    }
    else {
      if (bVar10 == 10) goto LAB_00101330;
      *(undefined1 *)puVar24 = 0x5e;
      puVar25 = (uint *)((long)puVar24 + 2);
      *(byte *)((long)puVar24 + 1) = bVar10 + 0x40;
    }
  }
  else if (bVar10 < 0x7f) {
    *(byte *)puVar24 = bVar10;
    puVar25 = (uint *)((long)puVar24 + 1);
  }
  else if (bVar10 == 0x7f) {
    *(undefined2 *)puVar24 = uVar8;
    puVar25 = (uint *)((long)puVar24 + 2);
  }
  else {
    *(undefined2 *)puVar24 = _LC41;
    if (bVar10 < 0xa0) {
      *(undefined1 *)((long)puVar24 + 2) = 0x5e;
      puVar25 = puVar24 + 1;
      *(byte *)((long)puVar24 + 3) = bVar10 - 0x40;
    }
    else if (bVar10 == 0xff) {
      puVar25 = puVar24 + 1;
      *(undefined2 *)((long)puVar24 + 2) = _LC40;
    }
    else {
      puVar25 = (uint *)((long)puVar24 + 3);
      *(byte *)((long)puVar24 + 2) = bVar10 + 0x80;
    }
  }
  bVar10 = *pbVar28;
  pbVar28 = pbVar28 + 1;
  puVar24 = puVar25;
  goto LAB_001010ca;
LAB_00101330:
  iVar11 = -1;
  puVar25 = puVar24;
  goto LAB_00100fb0;
LAB_00100e33:
  pbVar28 = (byte *)argv[local_120];
  infile = (char *)pbVar28;
  goto LAB_00100e48;
}


