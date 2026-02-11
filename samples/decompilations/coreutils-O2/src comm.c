
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void writeline(long param_1,int param_2)

{
  uint uVar1;
  FILE *__stream;
  int iVar2;
  uint *puVar3;
  undefined8 uVar4;
  int extraout_EDX;
  ulong uVar5;
  long lVar6;
  bool bVar7;
  
  if (param_2 == 2) {
    if (only_file_2 == '\0') {
      return;
    }
    if (only_file_1 == '\0') goto LAB_00100027;
  }
  else {
    if (param_2 != 3) {
      if (only_file_1 == '\0') {
        return;
      }
      goto LAB_00100027;
    }
    if (both == '\0') {
      return;
    }
    if (only_file_1 != '\0') {
      fwrite_unlocked(col_sep,1,col_sep_len,_stdout);
    }
    if (only_file_2 == '\0') goto LAB_00100027;
  }
  fwrite_unlocked(col_sep,1,col_sep_len,_stdout);
LAB_00100027:
  fwrite_unlocked(*(void **)(param_1 + 0x10),1,*(size_t *)(param_1 + 8),_stdout);
  __stream = _stdout;
  if ((_stdout->_flags & 0x20) == 0) {
    return;
  }
  puVar3 = (uint *)__errno_location();
  uVar1 = *puVar3;
  fflush_unlocked(__stream);
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
  long lVar1;
  byte *pbVar2;
  char cVar3;
  FILE *pFVar4;
  ushort uVar5;
  int iVar6;
  uint *puVar7;
  undefined8 uVar8;
  char *pcVar9;
  char *pcVar10;
  int *piVar11;
  undefined8 uVar12;
  char *pcVar13;
  int iVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined **ppuVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  ulong *puVar22;
  undefined *puVar23;
  undefined1 *puVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  long in_FS_OFFSET;
  undefined *puStack_2e0;
  char *pcStack_2d8;
  char *apcStack_2d0 [4];
  char *pcStack_2b0;
  char *pcStack_2a8;
  char *pcStack_2a0;
  char *pcStack_298;
  char *pcStack_290;
  char *pcStack_288;
  undefined1 auStack_280 [16];
  undefined8 uStack_268;
  char *pcStack_260;
  char *pcStack_258;
  char *pcStack_250;
  char *pcStack_248;
  uint *puStack_240;
  undefined1 *local_230;
  undefined8 local_228;
  ulong *local_220;
  undefined8 *local_218;
  char **local_210;
  long local_208;
  long local_200;
  long local_1f8;
  int local_1f0;
  int local_1ec;
  char local_1db;
  undefined2 local_1da;
  char *local_1d8;
  long local_1d0;
  undefined8 local_1c8 [2];
  ulong local_1b8 [4];
  long local_198 [4];
  undefined8 local_178 [4];
  undefined1 local_158 [192];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [24];
  undefined8 local_40;
  
  lVar20 = 0;
  lVar18 = 0;
  puVar16 = local_178;
  local_40 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  puVar22 = local_1b8;
  local_218 = local_1c8;
  local_230 = local_158;
  local_220 = puVar22;
  local_1f8 = param_1;
  do {
    puVar24 = local_230 + lVar20;
    puVar25 = puVar16 + -4;
    do {
      puVar26 = puVar25 + 1;
      puStack_240 = (uint *)0x100236;
      initbuffer(puVar24);
      *puVar25 = puVar24;
      puVar24 = puVar24 + 0x18;
      puVar25 = puVar26;
    } while (puVar26 != puVar16);
    *puVar22 = 0;
    pcVar13 = *(char **)(local_1f8 + lVar18);
    puVar25 = (undefined8 *)(local_1f8 + lVar18);
    if ((*pcVar13 != '-') || (puVar7 = _stdin, pcVar13[1] != '\0')) {
      puStack_240 = (uint *)0x10026d;
      puVar7 = (uint *)fopen_safer(pcVar13,&_LC2);
    }
    *(uint **)((long)local_218 + lVar18) = puVar7;
    if (puVar7 == (uint *)0x0) {
LAB_00100772:
      uVar8 = *puVar25;
      goto LAB_0010072e;
    }
    puStack_240 = (uint *)0x10028f;
    fadvise(puVar7,2);
    puStack_240 = (uint *)0x1002a2;
    uVar8 = readlinebuffer_delim(puVar16[-4],puVar7,(int)(char)delim);
    *(undefined8 *)((long)&local_1d8 + lVar18) = uVar8;
    if ((*puVar7 & 0x20) != 0) goto LAB_00100772;
    lVar20 = lVar20 + 0x60;
    puVar22 = (ulong *)((long)puVar22 + 0xc);
    puVar16 = puVar16 + 4;
    lVar18 = lVar18 + 8;
  } while (lVar20 != 0xc0);
  lVar18 = 0;
  local_200 = 0;
  pcVar13 = &local_1db;
  local_208 = 0;
  local_1ec = 0;
  local_210 = &local_1d8;
  if (local_1d8 == (char *)0x0) goto LAB_0010049c;
  do {
    lVar20 = local_1d0;
    pcVar9 = local_1d8;
    local_1da = 0;
    if (local_1d0 == 0) {
LAB_001004c7:
      seen_unpairable = '\x01';
      lVar18 = lVar18 + 1;
      puStack_240 = (uint *)0x1004d8;
      writeline(pcVar9,1);
    }
    else {
      lVar1 = *(long *)(local_1d0 + 8);
      lVar19 = *(long *)(local_1d8 + 8);
      if (hard_LC_COLLATE == '\0') {
        lVar15 = lVar19;
        if (lVar1 <= lVar19) {
          lVar15 = lVar1;
        }
        puStack_240 = (uint *)0x10034a;
        iVar6 = memcmp(*(void **)(local_1d8 + 0x10),*(void **)(local_1d0 + 0x10),lVar15 - 1);
        if (iVar6 == 0) {
          iVar6 = (uint)(lVar1 < lVar19) - (uint)(lVar19 < lVar1);
          goto joined_r0x00100555;
        }
LAB_00100366:
        if (0 < iVar6) goto LAB_00100375;
        goto LAB_001004c7;
      }
      puStack_240 = (uint *)0x100553;
      iVar6 = xmemcoll(*(void **)(local_1d8 + 0x10),lVar19 + -1,*(void **)(local_1d0 + 0x10),
                       lVar1 + -1);
joined_r0x00100555:
      if (iVar6 != 0) goto LAB_00100366;
      local_200 = local_200 + 1;
      puStack_240 = (uint *)0x10056e;
      writeline(lVar20,3);
      local_1da = 0x100;
    }
    local_1da = CONCAT11(local_1da._1_1_,1);
    while( true ) {
      lVar20 = 1;
      puVar22 = local_220;
      uVar5 = local_1da;
      cVar3 = (char)local_1da;
      while( true ) {
        local_1da = uVar5;
        uVar5 = local_1da;
        if (cVar3 != '\0') {
          iVar6 = (int)*puVar22;
          lVar19 = (long)((int)lVar20 + -1);
          iVar14 = (int)(char)delim;
          local_1f0 = *(int *)((long)puVar22 + 4);
          local_228._4_4_ = (undefined4)((ulong)local_228 >> 0x20);
          local_228 = (undefined *)CONCAT44(local_228._4_4_,iVar6);
          local_230 = (undefined1 *)(lVar19 * 4);
          pbVar2 = (byte *)local_218[lVar20 + -1];
          lVar1 = local_198[(long)((undefined1 *)(lVar19 * 4) + (iVar6 + 1U & 3))];
          *puVar22 = CONCAT44(iVar6,iVar6 + 1U) & 0xffffffff00000003;
          puStack_240 = (uint *)0x10041b;
          pcVar9 = (char *)readlinebuffer_delim(lVar1,pbVar2,iVar14);
          local_210[lVar20 + -1] = pcVar9;
          if (pcVar9 == (char *)0x0) {
            if (((*(long *)(local_198[(long)(local_230 + local_1f0)] + 0x10) != 0) &&
                (check_input_order != 2)) && ((check_input_order == 1 || (seen_unpairable != '\0')))
               ) {
              puStack_240 = (uint *)0x100538;
              check_order_part_0(local_198[(long)(local_230 + local_1f0)],
                                 local_198[(long)(int)local_228 + lVar19 * 4],lVar20);
            }
          }
          else if ((check_input_order != 2) &&
                  ((check_input_order == 1 || (seen_unpairable != '\0')))) {
            puStack_240 = (uint *)0x100468;
            check_order_part_0(local_198[(long)(int)local_228 + lVar19 * 4],pcVar9,lVar20);
          }
          if ((*pbVar2 & 0x20) != 0) {
            uVar8 = *(undefined8 *)(local_1f8 + lVar19 * 8);
            goto LAB_0010072e;
          }
          pcVar13[lVar20] = '\0';
          uVar5 = local_1da;
        }
        if (lVar20 != 1) break;
        puVar22 = (ulong *)((long)puVar22 + 0xc);
        lVar20 = 2;
        local_1da._1_1_ = (char)(uVar5 >> 8);
        cVar3 = local_1da._1_1_;
      }
      puVar7 = (uint *)((long)puVar22 + 0xc);
      local_1da = uVar5;
      if (local_1d8 != (char *)0x0) break;
LAB_0010049c:
      if (local_1d0 == 0) {
        puStack_240 = (uint *)0x100598;
        iVar6 = rpl_fclose(local_1c8[0]);
        if (iVar6 != 0) goto LAB_00100762;
        puStack_240 = (uint *)0x1005aa;
        iVar6 = rpl_fclose();
        puVar23 = col_sep;
        if (iVar6 != 0) {
          do {
            local_1ec = 1;
LAB_00100762:
            uVar8 = *(undefined8 *)(local_1f8 + (long)local_1ec * 8);
LAB_0010072e:
            puStack_240 = (uint *)0x10073a;
            uVar8 = quotearg_n_style_colon(0,3,uVar8);
            puStack_240 = (uint *)0x100742;
            piVar11 = __errno_location();
            puStack_240 = (uint *)0x10075a;
            error(1,*piVar11,&_LC3,uVar8);
          } while( true );
        }
        uVar21 = 0;
        pcVar9 = local_1d8;
        if (total_option != '\0') {
          uVar21 = (ulong)delim;
          if (col_sep_len == 1) {
            puStack_240 = (uint *)0x100695;
            pcVar13 = (char *)dcgettext(0,"total",5);
            pcVar9 = (char *)(ulong)(uint)(int)(char)*puVar23;
            puStack_240 = (uint *)0x1006ae;
            pcVar10 = (char *)umaxtostr(local_200,local_58);
            local_228 = (undefined *)CONCAT44(local_228._4_4_,(int)(char)*col_sep);
            puStack_240 = (uint *)0x1006d3;
            local_230 = (undefined1 *)umaxtostr(local_208,local_78);
            puVar7 = (uint *)(ulong)(uint)(int)(char)*col_sep;
            puStack_240 = (uint *)0x1006f3;
            uVar8 = umaxtostr(lVar18,local_98);
            pcStack_260 = (char *)0x10071c;
            pcStack_258 = pcVar10;
            pcStack_250 = pcVar9;
            pcStack_248 = pcVar13;
            puStack_240 = (uint *)uVar21;
            __printf_chk(2,"%s%c%s%c%s%c%s%c",uVar8,puVar7,local_230,(ulong)local_228 & 0xffffffff);
          }
          else {
            puStack_240 = (uint *)0x10060c;
            pcVar9 = (char *)dcgettext(0,"total",5);
            puStack_240 = (uint *)0x100621;
            pcVar13 = (char *)umaxtostr(local_200,local_58);
            local_228 = col_sep;
            puStack_240 = (uint *)0x100642;
            local_230 = (undefined1 *)umaxtostr(local_208,local_78);
            puVar7 = (uint *)col_sep;
            puStack_240 = (uint *)0x10065e;
            uVar8 = umaxtostr(lVar18,local_98);
            pcStack_250 = puVar23;
            pcStack_260 = (char *)0x100687;
            pcStack_258 = pcVar13;
            pcStack_248 = pcVar9;
            puStack_240 = (uint *)uVar21;
            __printf_chk(2,"%s%s%s%s%s%s%s%c",uVar8,puVar7,local_230,local_228);
          }
        }
        if ((issued_disorder_warning == '\0') && (DAT_00100c47 == '\0')) {
                    /* WARNING: Subroutine does not return */
          puStack_240 = (uint *)0x1005dc;
          exit(0);
        }
        puStack_240 = (uint *)0x10078a;
        uVar8 = dcgettext(0,"input is not in sorted order",5);
        iVar6 = 1;
        puStack_240 = (uint *)0x10079b;
        error(1,0,uVar8);
        uVar8 = _program_name;
        ppuVar17 = &puStack_2e0;
        uStack_268 = *(undefined8 *)(in_FS_OFFSET + 0x28);
        pcStack_260 = pcVar9;
        pcStack_258 = pcVar13;
        pcStack_250 = (char *)uVar21;
        pcStack_248 = (char *)lVar18;
        puStack_240 = puVar7;
        if (iVar6 == 0) {
          uVar12 = dcgettext(0,"Usage: %s [OPTION]... FILE1 FILE2\n",5);
          __printf_chk(2,uVar12,uVar8);
          pFVar4 = _stdout;
          pcVar13 = (char *)dcgettext(0,"Compare sorted files FILE1 and FILE2 line by line.\n",5);
          fputs_unlocked(pcVar13,pFVar4);
          pFVar4 = _stdout;
          pcVar13 = (char *)dcgettext(0,
                                      "\nWhen FILE1 or FILE2 (not both) is -, read standard input.\n"
                                      ,5);
          fputs_unlocked(pcVar13,pFVar4);
          pFVar4 = _stdout;
          pcVar13 = (char *)dcgettext(0,
                                      "\nWith no options, produce three-column output.  Column one contains\nlines unique to FILE1, column two contains lines unique to FILE2,\nand column three contains lines common to both files.\n"
                                      ,5);
          fputs_unlocked(pcVar13,pFVar4);
          pFVar4 = _stdout;
          pcVar13 = (char *)dcgettext(0,
                                      "\n  -1                      suppress column 1 (lines unique to FILE1)\n  -2                      suppress column 2 (lines unique to FILE2)\n  -3                      suppress column 3 (lines that appear in both files)\n"
                                      ,5);
          fputs_unlocked(pcVar13,pFVar4);
          pFVar4 = _stdout;
          pcVar13 = (char *)dcgettext(0,
                                      "\n      --check-order       check that the input is correctly sorted, even\n                            if all input lines are pairable\n      --nocheck-order     do not check that the input is correctly sorted\n"
                                      ,5);
          fputs_unlocked(pcVar13,pFVar4);
          pFVar4 = _stdout;
          pcVar13 = (char *)dcgettext(0,"      --output-delimiter=STR  separate columns with STR\n",
                                      5);
          fputs_unlocked(pcVar13,pFVar4);
          pFVar4 = _stdout;
          pcVar13 = (char *)dcgettext(0,"      --total             output a summary\n",5);
          fputs_unlocked(pcVar13,pFVar4);
          pFVar4 = _stdout;
          pcVar13 = (char *)dcgettext(0,
                                      "  -z, --zero-terminated   line delimiter is NUL, not newline\n"
                                      ,5);
          fputs_unlocked(pcVar13,pFVar4);
          pFVar4 = _stdout;
          pcVar13 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
          fputs_unlocked(pcVar13,pFVar4);
          pFVar4 = _stdout;
          pcVar13 = (char *)dcgettext(0,"      --version     output version information and exit\n",
                                      5);
          fputs_unlocked(pcVar13,pFVar4);
          pFVar4 = _stdout;
          pcVar13 = (char *)dcgettext(0,
                                      "\nComparisons honor the rules specified by \'LC_COLLATE\'.\n"
                                      ,5);
          fputs_unlocked(pcVar13,pFVar4);
          uVar8 = _program_name;
          uVar12 = dcgettext(0,
                             "\nExamples:\n  %s -12 file1 file2  Print only lines present in both file1 and file2.\n  %s -3 file1 file2  Print lines in file1 not in file2, and vice versa.\n"
                             ,5);
          __printf_chk(2,uVar12,uVar8,uVar8);
          pcVar13 = "[";
          puStack_2e0 = &_LC8;
          pcStack_2d8 = "test invocation";
          apcStack_2d0[0] = "coreutils";
          apcStack_2d0[1] = "Multi-call invocation";
          apcStack_2d0[2] = "sha224sum";
          apcStack_2d0[3] = "sha2 utilities";
          pcStack_2b0 = "sha256sum";
          pcStack_2a8 = "sha2 utilities";
          pcStack_2a0 = "sha384sum";
          pcStack_298 = "sha2 utilities";
          pcStack_290 = "sha512sum";
          pcStack_288 = "sha2 utilities";
          auStack_280 = (undefined1  [16])0x0;
          goto LAB_00100aad;
        }
        uVar12 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
        __fprintf_chk(_stderr,2,uVar12,uVar8);
        goto LAB_001007fa;
      }
      local_1da = local_1da & 0xff00;
      lVar20 = local_1d0;
LAB_00100375:
      seen_unpairable = '\x01';
      local_208 = local_208 + 1;
      puStack_240 = (uint *)0x100388;
      writeline(lVar20,2);
      local_1da = CONCAT11(1,(char)local_1da);
    }
  } while( true );
  while( true ) {
    pcVar13 = *(char **)((long)ppuVar17 + 0x10);
    ppuVar17 = (undefined **)((long)ppuVar17 + 0x10);
    if (pcVar13 == (char *)0x0) break;
LAB_00100aad:
    iVar14 = strcmp("comm",pcVar13);
    if (iVar14 == 0) break;
  }
  puVar23 = *(undefined **)((long)ppuVar17 + 8);
  if (puVar23 == (undefined *)0x0) {
    uVar8 = dcgettext(0,"\n%s online help: <%s>\n",5);
    puVar23 = &_LC9;
    __printf_chk(2,uVar8,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar13 = setlocale(5,(char *)0x0);
    if (pcVar13 == (char *)0x0) {
      uVar8 = dcgettext(0,"Full documentation <%s%s>\n",5);
      pcVar13 = " invocation";
      __printf_chk(2,uVar8,"https://www.gnu.org/software/coreutils/",&_LC9);
      goto LAB_00100b63;
    }
LAB_00100b0d:
    iVar14 = strncmp(pcVar13,"en_",3);
    pFVar4 = _stdout;
    if (iVar14 != 0) {
      pcVar13 = (char *)dcgettext(0,
                                  "Report any translation bugs to <https://translationproject.org/team/>\n"
                                  ,5);
      fputs_unlocked(pcVar13,pFVar4);
    }
  }
  else {
    uVar8 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar8,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar13 = setlocale(5,(char *)0x0);
    if (pcVar13 != (char *)0x0) goto LAB_00100b0d;
  }
  uVar8 = dcgettext(0,"Full documentation <%s%s>\n",5);
  pcVar13 = "";
  __printf_chk(2,uVar8,"https://www.gnu.org/software/coreutils/",&_LC9);
  if (puVar23 == &_LC9) {
    pcVar13 = " invocation";
  }
LAB_00100b63:
  uVar8 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar8,puVar23,pcVar13);
LAB_001007fa:
                    /* WARNING: Subroutine does not return */
  exit(iVar6);
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
    goto LAB_001007fa;
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
    if (pcVar4 != (char *)0x0) goto LAB_00100b0d;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC9);
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
LAB_00100b0d:
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
LAB_001007fa:
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
LAB_00101506:
  do {
    while (col_sep_len = sVar4, iVar1 = getopt_long(param_1,param_2,&_LC45,long_options,0),
          iVar1 == -1) {
      if (col_sep_len == 0) {
        col_sep_len = 1;
      }
      lVar5 = (long)_optind;
      iVar1 = _optind;
      if (param_1 - _optind < 2) {
LAB_001016ec:
        if (iVar1 < param_1) {
          param_2 = (undefined8 *)quote(param_2[(long)param_1 + -1]);
          pcVar6 = "missing operand after %s";
          goto LAB_001015a7;
        }
        uVar2 = dcgettext(0,"missing operand",5);
        error(0,0,uVar2);
      }
      else {
        if (param_1 - _optind == 2) {
          iVar1 = compare_files(param_2 + lVar5);
          goto LAB_001016ec;
        }
LAB_0010173e:
        param_2 = (undefined8 *)quote(param_2[lVar5 + 2]);
        pcVar6 = "extra operand %s";
LAB_001015a7:
        uVar2 = dcgettext(0,pcVar6,5);
        error(0,0,uVar2,param_2);
      }
switchD_0010156f_caseD_7b:
      usage(1);
LAB_001015c9:
      only_file_2 = 0;
      sVar4 = col_sep_len;
    }
    if (0x83 < iVar1) goto switchD_0010156f_caseD_7b;
    if (0x79 < iVar1) {
LAB_00101560:
      pcVar6 = _optarg;
      sVar4 = col_sep_len;
      switch(iVar1) {
      case 0x7a:
        delim = 0;
        break;
      default:
        goto switchD_0010156f_caseD_7b;
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
          goto LAB_0010173e;
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
      goto LAB_00101506;
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
          goto LAB_00101560;
        }
        goto switchD_0010156f_caseD_7b;
      }
      if (iVar1 == 0x32) goto LAB_001015c9;
      if (iVar1 != 0x33) goto switchD_0010156f_caseD_7b;
      both = 0;
    }
  } while( true );
}


