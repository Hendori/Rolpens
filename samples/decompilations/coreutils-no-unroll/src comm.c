
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_error(void)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  undefined8 uVar4;
  int extraout_EDX;
  ulong uVar5;
  long lVar6;
  bool bVar7;
  
  puVar3 = (uint *)__errno_location();
  uVar1 = *puVar3;
  fflush_unlocked(_stdout);
  fpurge(_stdout);
  clearerr_unlocked(_stdout);
  uVar4 = dcgettext(0,"write error",5);
  uVar5 = (ulong)uVar1;
  lVar6 = 1;
  error(1,uVar5,uVar4);
  if ((&issued_disorder_warning)[extraout_EDX + -1] == '\0') {
    if (hard_LC_COLLATE == '\0') {
      iVar2 = memcmp2();
    }
    else {
      iVar2 = xmemcoll(*(undefined8 *)(lVar6 + 0x10),*(long *)(lVar6 + 8) + -1,
                       *(undefined8 *)(uVar5 + 0x10),*(long *)(uVar5 + 8) + -1);
    }
    if (0 < iVar2) {
      bVar7 = check_input_order == 1;
      uVar4 = dcgettext(0,"file %d is not in sorted order",5);
      error(bVar7,0,uVar4,extraout_EDX);
      (&issued_disorder_warning)[extraout_EDX + -1] = 1;
    }
  }
  return;
}



void check_order_part_0(long param_1,long param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  
  if ((&issued_disorder_warning)[param_3 + -1] == '\0') {
    if (hard_LC_COLLATE == '\0') {
      iVar1 = memcmp2();
    }
    else {
      iVar1 = xmemcoll(*(undefined8 *)(param_1 + 0x10),*(long *)(param_1 + 8) + -1,
                       *(undefined8 *)(param_2 + 0x10),*(long *)(param_2 + 8) + -1);
    }
    if (0 < iVar1) {
      bVar3 = check_input_order == 1;
      uVar2 = dcgettext(0,"file %d is not in sorted order",5);
      error(bVar3,0,uVar2,param_3);
      (&issued_disorder_warning)[param_3 + -1] = 1;
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void compare_files(long param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char *pcVar4;
  bool bVar5;
  char cVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  byte *pbVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  int *piVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined8 *puVar23;
  long *plVar24;
  long *plVar25;
  long lVar26;
  undefined1 *puVar27;
  long in_FS_OFFSET;
  undefined1 *local_200;
  long local_1f8;
  long local_1e8;
  uint local_1dc;
  long local_1d8;
  undefined8 *local_1d0;
  byte *local_1c8 [2];
  undefined8 local_1b8;
  undefined8 local_1ac;
  long local_198 [4];
  long local_178 [4];
  undefined1 local_158 [192];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [24];
  undefined8 local_40;
  
  lVar21 = 0;
  lVar20 = 0;
  puVar23 = &local_1b8;
  plVar19 = local_178;
  local_40 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  local_200 = local_158;
  do {
    puVar27 = local_200 + lVar21;
    plVar24 = plVar19 + -4;
    do {
      plVar25 = plVar24 + 1;
      initbuffer(puVar27);
      *plVar24 = (long)puVar27;
      puVar27 = puVar27 + 0x18;
      plVar24 = plVar25;
    } while (plVar19 != plVar25);
    *puVar23 = 0;
    pcVar4 = *(char **)(param_1 + lVar20);
    puVar15 = (undefined8 *)(param_1 + lVar20);
    if ((*pcVar4 != '-') || (puVar13 = _stdin, pcVar4[1] != '\0')) {
      puVar13 = (uint *)fopen_safer(pcVar4,&_LC2);
    }
    *(uint **)((long)local_1c8 + lVar20) = puVar13;
    if (puVar13 == (uint *)0x0) goto LAB_00100913;
    fadvise(puVar13,2);
    uVar14 = readlinebuffer_delim(plVar19[-4],puVar13,(int)delim);
    *(undefined8 *)((long)&local_1d8 + lVar20) = uVar14;
    local_1dc = *puVar13 & 0x20;
    if (local_1dc != 0) goto LAB_00100913;
    lVar21 = lVar21 + 0x60;
    puVar23 = (undefined8 *)((long)puVar23 + 0xc);
    plVar19 = plVar19 + 4;
    lVar20 = lVar20 + 8;
  } while (lVar21 != 0xc0);
  local_1e8 = 0;
  local_200 = (undefined1 *)0x0;
  local_1f8 = 0;
  lVar20 = local_1d8;
  puVar15 = local_1d0;
  if (local_1d8 == 0) goto LAB_0010058a;
LAB_00100220:
  if (puVar15 == (undefined8 *)0x0) goto LAB_001004b7;
  lVar21 = puVar15[1];
  lVar22 = *(long *)(lVar20 + 8);
  if (hard_LC_COLLATE == '\0') {
    lVar26 = lVar22;
    if (lVar21 <= lVar22) {
      lVar26 = lVar21;
    }
    iVar11 = memcmp(*(void **)(lVar20 + 0x10),(void *)puVar15[2],lVar26 - 1);
    if (iVar11 != 0) goto LAB_00100275;
    iVar11 = (uint)(lVar21 < lVar22) - (uint)(lVar22 < lVar21);
  }
  else {
    iVar11 = xmemcoll(*(void **)(lVar20 + 0x10),lVar22 + -1,(void *)puVar15[2],lVar21 + -1);
  }
  if (iVar11 == 0) {
    if (both != '\0') {
      if (only_file_1 != '\0') {
        fwrite_unlocked(col_sep,1,col_sep_len,_stdout);
      }
      if (only_file_2 != '\0') {
        fwrite_unlocked(col_sep,1,col_sep_len,_stdout);
      }
      fwrite_unlocked((void *)puVar15[2],1,puVar15[1],_stdout);
      if ((_stdout->_flags & 0x20) != 0) goto LAB_001008ea;
    }
    local_1e8 = local_1e8 + 1;
    bVar5 = true;
    goto LAB_001004f3;
  }
LAB_00100275:
  if (iVar11 < 1) goto LAB_001004b7;
LAB_00100284:
  seen_unpairable = '\x01';
  local_200 = local_200 + 1;
  lVar21 = lVar20;
  if (only_file_2 != '\0') {
    if (only_file_1 != '\0') {
      fwrite_unlocked(col_sep,1,col_sep_len,_stdout);
    }
    fwrite_unlocked((void *)puVar15[2],1,puVar15[1],_stdout);
    if ((_stdout->_flags & 0x20) != 0) goto LAB_001008ea;
  }
LAB_001002e7:
  pbVar10 = local_1c8[1];
  lVar26 = (long)(int)local_1ac;
  lVar22 = (long)local_1ac._4_4_;
  uVar12 = (int)local_1ac + 1;
  local_1ac = CONCAT44((int)local_1ac,uVar12) & 0xffffffff00000003;
  puVar15 = (undefined8 *)readlinebuffer_delim(local_178[uVar12 & 3],local_1c8[1],(int)delim);
  if (puVar15 == (undefined8 *)0x0) {
    if (((*(long *)(local_178[lVar22] + 0x10) != 0) && (check_input_order != 2)) &&
       ((check_input_order == 1 || (seen_unpairable != '\0')))) {
      check_order_part_0(local_178[lVar22],local_178[lVar26],2);
    }
  }
  else if ((check_input_order != 2) && ((check_input_order == 1 || (seen_unpairable != '\0')))) {
    check_order_part_0(local_178[lVar26],puVar15,2);
  }
  if ((*pbVar10 & 0x20) == 0) {
    if (lVar20 != 0) goto LAB_0010057e;
    if (puVar15 == (undefined8 *)0x0) goto LAB_0010072f;
    do {
      seen_unpairable = '\x01';
      if (only_file_2 != '\0') {
        if (only_file_1 != '\0') {
          fwrite_unlocked(col_sep,1,col_sep_len,_stdout);
        }
        fwrite_unlocked((void *)puVar15[2],1,puVar15[1],_stdout);
        if ((_stdout->_flags & 0x20) != 0) goto LAB_001008ea;
      }
      pbVar10 = local_1c8[1];
      lVar21 = (long)(int)local_1ac;
      lVar20 = (long)local_1ac._4_4_;
      uVar12 = (int)local_1ac + 1;
      local_1ac = CONCAT44((int)local_1ac,uVar12) & 0xffffffff00000003;
      puVar15 = (undefined8 *)readlinebuffer_delim(local_178[uVar12 & 3],local_1c8[1],(int)delim);
      if (puVar15 == (undefined8 *)0x0) {
        if (((*(long *)(local_178[lVar20] + 0x10) != 0) && (check_input_order != 2)) &&
           ((check_input_order == 1 || (seen_unpairable != '\0')))) {
          check_order_part_0(local_178[lVar20],local_178[lVar21],2);
        }
        local_200 = local_200 + 1;
        if ((*pbVar10 & 0x20) == 0) goto LAB_0010072f;
        break;
      }
      if ((check_input_order != 2) && ((check_input_order == 1 || (seen_unpairable != '\0')))) {
        check_order_part_0(local_178[lVar21],puVar15,2);
      }
      local_200 = local_200 + 1;
    } while ((*pbVar10 & 0x20) == 0);
  }
LAB_00100468:
  local_1dc = 1;
LAB_00100470:
  uVar14 = *(undefined8 *)(param_1 + (long)(int)local_1dc * 8);
  do {
    lVar20 = quotearg_n_style_colon(0,3,uVar14);
    piVar16 = __errno_location();
    error(1,*piVar16,&_LC3,lVar20);
LAB_001004b7:
    seen_unpairable = '\x01';
    if ((only_file_1 == '\0') ||
       (fwrite_unlocked(*(void **)(lVar20 + 0x10),1,*(size_t *)(lVar20 + 8),_stdout),
       (_stdout->_flags & 0x20) == 0)) {
      local_1f8 = local_1f8 + 1;
      bVar5 = false;
LAB_001004f3:
      pbVar10 = local_1c8[0];
      iVar11 = (int)local_1b8;
      lVar22 = (long)local_1b8._4_4_;
      uVar12 = (int)local_1b8 + 1;
      local_1b8 = CONCAT44((int)local_1b8,uVar12) & 0xffffffff00000003;
      lVar21 = readlinebuffer_delim(local_198[uVar12 & 3],local_1c8[0],(int)delim);
      if (lVar21 == 0) {
        if (((*(long *)(local_198[lVar22] + 0x10) != 0) && (check_input_order != 2)) &&
           ((check_input_order == 1 || (seen_unpairable != '\0')))) {
          check_order_part_0(local_198[lVar22],local_198[iVar11],1);
        }
      }
      else if ((check_input_order != 2) && ((check_input_order == 1 || (seen_unpairable != '\0'))))
      {
        check_order_part_0(local_198[iVar11],lVar21,1);
      }
      if ((*pbVar10 & 0x20) != 0) goto LAB_00100470;
      if (bVar5) goto LAB_001002e7;
LAB_0010057e:
      lVar20 = lVar21;
      if (lVar20 != 0) goto LAB_00100220;
LAB_0010058a:
      if (puVar15 != (undefined8 *)0x0) goto LAB_00100284;
LAB_0010072f:
      iVar11 = rpl_fclose();
      if (iVar11 != 0) goto LAB_00100470;
      iVar11 = rpl_fclose();
      puVar7 = col_sep;
      cVar6 = delim;
      if (iVar11 != 0) goto LAB_00100468;
      if (total_option != '\0') {
        if (col_sep_len == 1) {
          uVar14 = dcgettext(0,"total",5);
          cVar1 = *puVar7;
          uVar17 = umaxtostr(local_1e8,local_58);
          cVar2 = *col_sep;
          puVar15 = (undefined8 *)umaxtostr(local_200,local_78);
          cVar3 = *col_sep;
          uVar18 = umaxtostr(local_1f8,local_98);
          __printf_chk(2,"%s%c%s%c%s%c%s%c",uVar18,(int)cVar3,puVar15,(int)cVar2,uVar17,(int)cVar1,
                       uVar14,cVar6);
        }
        else {
          uVar14 = dcgettext(0,"total",5);
          uVar17 = umaxtostr(local_1e8,local_58);
          puVar8 = col_sep;
          puVar15 = (undefined8 *)umaxtostr(local_200,local_78);
          puVar9 = col_sep;
          uVar18 = umaxtostr(local_1f8,local_98);
          __printf_chk(2,"%s%s%s%s%s%s%s%c",uVar18,puVar9,puVar15,puVar8,uVar17,puVar7,uVar14,cVar6)
          ;
        }
      }
      if ((issued_disorder_warning == '\0') && (DAT_00100dc7 == '\0')) {
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
    }
    else {
LAB_001008ea:
      write_error();
    }
    uVar14 = dcgettext(0,"input is not in sorted order",5);
    error(1,0,uVar14);
LAB_00100913:
    uVar14 = *puVar15;
  } while( true );
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
    goto LAB_0010097a;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... FILE1 FILE2\n",5);
  __printf_chk(2,uVar3,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"Compare sorted files FILE1 and FILE2 line by line.\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"\nWhen FILE1 or FILE2 (not both) is -, read standard input.\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nWith no options, produce three-column output.  Column one contains\nlines unique to FILE1, column two contains lines unique to FILE2,\nand column three contains lines common to both files.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\n  -1                      suppress column 1 (lines unique to FILE1)\n  -2                      suppress column 2 (lines unique to FILE2)\n  -3                      suppress column 3 (lines that appear in both files)\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\n      --check-order       check that the input is correctly sorted, even\n                            if all input lines are pairable\n      --nocheck-order     do not check that the input is correctly sorted\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --output-delimiter=STR  separate columns with STR\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --total             output a summary\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"  -z, --zero-terminated   line delimiter is NUL, not newline\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"\nComparisons honor the rules specified by \'LC_COLLATE\'.\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  uVar5 = _program_name;
  uVar3 = dcgettext(0,
                    "\nExamples:\n  %s -12 file1 file2  Print only lines present in both file1 and file2.\n  %s -3 file1 file2  Print lines in file1 not in file2, and vice versa.\n"
                    ,5);
  __printf_chk(2,uVar3,uVar5,uVar5);
  pcVar4 = "[";
  local_a8 = &_LC8;
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
    iVar2 = strcmp("comm",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)ppuVar6 + 0x10);
    ppuVar6 = (undefined **)((long)ppuVar6 + 0x10);
  } while (pcVar4 != (char *)0x0);
  puVar7 = *(undefined **)((long)ppuVar6 + 8);
  if (puVar7 == (undefined *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    puVar7 = &_LC9;
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) goto LAB_00100c8d;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC9);
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
LAB_00100c8d:
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
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC9);
    if (puVar7 == &_LC9) {
      pcVar4 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,puVar7,pcVar4);
LAB_0010097a:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void main(int param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  size_t sVar4;
  long lVar5;
  char *pcVar6;
  
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  hard_LC_COLLATE = hard_locale(3);
  atexit((__func *)&close_stdout);
  only_file_1 = 1;
  only_file_2 = 1;
  both = 1;
  seen_unpairable = 0;
  _issued_disorder_warning = 0;
  check_input_order = 0;
  total_option = 0;
  sVar4 = col_sep_len;
LAB_00101686:
  do {
    while (col_sep_len = sVar4, iVar1 = getopt_long(param_1,param_2,&_LC45,long_options,0),
          iVar1 == -1) {
      if (col_sep_len == 0) {
        col_sep_len = 1;
      }
      lVar5 = (long)_optind;
      iVar1 = _optind;
      if (param_1 - _optind < 2) {
LAB_0010186c:
        if (iVar1 < param_1) {
          param_2 = (undefined8 *)quote(param_2[(long)param_1 + -1]);
          pcVar6 = "missing operand after %s";
          goto LAB_00101727;
        }
        uVar2 = dcgettext(0,"missing operand",5);
        error(0,0,uVar2);
      }
      else {
        if (param_1 - _optind == 2) {
          iVar1 = compare_files(param_2 + lVar5);
          goto LAB_0010186c;
        }
LAB_001018be:
        param_2 = (undefined8 *)quote(param_2[lVar5 + 2]);
        pcVar6 = "extra operand %s";
LAB_00101727:
        uVar2 = dcgettext(0,pcVar6,5);
        error(0,0,uVar2,param_2);
      }
switchD_001016ef_caseD_7b:
      usage(1);
LAB_00101749:
      only_file_2 = 0;
      sVar4 = col_sep_len;
    }
    if (0x83 < iVar1) goto switchD_001016ef_caseD_7b;
    if (0x79 < iVar1) {
LAB_001016e0:
      pcVar6 = _optarg;
      sVar4 = col_sep_len;
      switch(iVar1) {
      case 0x7a:
        delim = 0;
        break;
      default:
        goto switchD_001016ef_caseD_7b;
      case 0x80:
        check_input_order = 1;
        break;
      case 0x81:
        check_input_order = 2;
        break;
      case 0x82:
        if ((col_sep_len != 0) && (iVar1 = strcmp(col_sep,_optarg), iVar1 != 0)) {
          uVar2 = dcgettext(0,"multiple output delimiters specified",5);
          lVar5 = error(1,0,uVar2);
          goto LAB_001018be;
        }
        col_sep = pcVar6;
        sVar4 = 1;
        if (*pcVar6 != '\0') {
          sVar4 = strlen(pcVar6);
        }
        break;
      case 0x83:
        total_option = 1;
      }
      goto LAB_00101686;
    }
    sVar4 = col_sep_len;
    if (iVar1 == 0x31) {
      only_file_1 = 0;
    }
    else {
      if (iVar1 < 0x32) {
        if (iVar1 == -0x83) {
          uVar2 = proper_name_lite("David MacKenzie","David MacKenzie");
          uVar3 = proper_name_lite("Richard M. Stallman","Richard M. Stallman");
          version_etc(_stdout,&_LC9,"GNU coreutils",_Version,uVar3,uVar2,0,uVar3);
                    /* WARNING: Subroutine does not return */
          exit(0);
        }
        if (iVar1 == -0x82) {
          iVar1 = usage(0);
          goto LAB_001016e0;
        }
        goto switchD_001016ef_caseD_7b;
      }
      if (iVar1 == 0x32) goto LAB_00101749;
      if (iVar1 != 0x33) goto switchD_001016ef_caseD_7b;
      both = 0;
    }
  } while( true );
}


