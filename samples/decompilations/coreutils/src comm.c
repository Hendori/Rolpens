
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */
/* WARNING: Enum "anon_enum_32": Some values do not have unique names */

void writeline(linebuffer *line,int class)

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
  
  if (class == 2) {
    if (!only_file_2) {
      return;
    }
    if (!only_file_1) goto LAB_00100027;
  }
  else {
    if (class != 3) {
      if (!only_file_1) {
        return;
      }
      goto LAB_00100027;
    }
    if (!both) {
      return;
    }
    if (only_file_1) {
      fwrite_unlocked(col_sep,1,col_sep_len,_stdout);
    }
    if (only_file_2 == false) goto LAB_00100027;
  }
  fwrite_unlocked(col_sep,1,col_sep_len,_stdout);
LAB_00100027:
  fwrite_unlocked(line->buffer,1,line->length,_stdout);
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
  if (issued_disorder_warning[extraout_EDX + -1] == false) {
    if (hard_LC_COLLATE == false) {
      iVar2 = memcmp2();
    }
    else {
      iVar2 = xmemcoll(*(undefined8 *)(lVar6 + 0x10),*(long *)(lVar6 + 8) + -1,
                       *(undefined8 *)(uVar5 + 0x10),*(long *)(uVar5 + 8) + -1);
    }
    if (0 < iVar2) {
      bVar7 = check_input_order == CHECK_ORDER_ENABLED;
      uVar4 = dcgettext(0,"file %d is not in sorted order",5);
      error(bVar7,0,uVar4,extraout_EDX);
      issued_disorder_warning[extraout_EDX + -1] = true;
    }
  }
  return;
}



/* WARNING: Unknown calling convention */
/* WARNING: Enum "anon_enum_32": Some values do not have unique names */

void check_order(linebuffer *prev,linebuffer *current,int whatfile)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  
  if (issued_disorder_warning[whatfile + -1] == false) {
    if (hard_LC_COLLATE) {
      iVar1 = xmemcoll(prev->buffer,prev->length + -1,current->buffer,current->length + -1);
    }
    else {
      iVar1 = memcmp2();
    }
    if (0 < iVar1) {
      bVar3 = check_input_order == CHECK_ORDER_ENABLED;
      uVar2 = dcgettext(0,"file %d is not in sorted order",5);
      error(bVar3,0,uVar2,whatfile);
      issued_disorder_warning[whatfile + -1] = true;
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */
/* WARNING: Enum "anon_enum_32": Some values do not have unique names */

void compare_files(char **infiles)

{
  undefined8 *puVar1;
  FILE *pFVar2;
  char cVar3;
  FILE *pFVar4;
  int iVar5;
  int iVar6;
  int (*paiVar7) [3];
  undefined8 uVar8;
  linebuffer *plVar9;
  linebuffer *plVar10;
  linebuffer *plVar11;
  int *piVar12;
  undefined8 uVar13;
  char *pcVar14;
  int iVar15;
  long lVar16;
  linebuffer **pplVar17;
  undefined **ppuVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  int (*paiVar23) [3];
  undefined *puVar24;
  linebuffer **pplVar25;
  linebuffer **pplVar26;
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
  linebuffer *plStack_260;
  linebuffer *plStack_258;
  linebuffer *plStack_250;
  linebuffer *plStack_248;
  int (*paiStack_240) [3];
  linebuffer (*local_230) [4];
  undefined8 local_228;
  int (*local_220) [3];
  FILE **local_218;
  linebuffer **local_210;
  long local_208;
  long local_200;
  char **local_1f8;
  int local_1f0;
  int local_1ec;
  undefined1 local_1db;
  _Bool fill_up [2];
  linebuffer *thisline [2];
  FILE *streams [2];
  int alt [2] [3];
  linebuffer *all_line [2] [4];
  linebuffer lba [2] [4];
  char buf1 [21];
  char buf2 [21];
  char buf3 [21];
  
  lVar21 = 0;
  lVar19 = 0;
  pplVar17 = all_line[1];
  paiVar23 = alt;
  local_218 = streams;
  local_230 = lba;
  local_220 = paiVar23;
  local_1f8 = infiles;
  do {
    plVar10 = (linebuffer *)((long)&(*local_230)[0].size + lVar21);
    pplVar25 = pplVar17 + -4;
    do {
      pplVar26 = pplVar25 + 1;
      paiStack_240 = (int (*) [3])0x100236;
      initbuffer(plVar10);
      *pplVar25 = plVar10;
      plVar10 = plVar10 + 1;
      pplVar25 = pplVar26;
    } while (pplVar26 != pplVar17);
    *(int *)((long)paiVar23 + 0) = 0;
    *(int *)((long)paiVar23 + 4) = 0;
    pcVar14 = *(char **)((long)local_1f8 + lVar19);
    puVar1 = (undefined8 *)((long)local_1f8 + lVar19);
    if ((*pcVar14 != '-') || (paiVar7 = _stdin, pcVar14[1] != '\0')) {
      paiStack_240 = (int (*) [3])0x10026d;
      paiVar7 = (int (*) [3])fopen_safer(pcVar14,&_LC2);
    }
    *(int (**) [3])((long)local_218 + lVar19) = paiVar7;
    if (paiVar7 == (int (*) [3])0x0) {
LAB_00100772:
      pcVar14 = (char *)*puVar1;
      goto LAB_0010072e;
    }
    paiStack_240 = (int (*) [3])0x10028f;
    fadvise(paiVar7,2);
    paiStack_240 = (int (*) [3])0x1002a2;
    uVar8 = readlinebuffer_delim(pplVar17[-4],paiVar7,(int)(char)delim);
    *(undefined8 *)((long)thisline + lVar19) = uVar8;
    if (((*paiVar7)[0] & 0x20U) != 0) goto LAB_00100772;
    lVar21 = lVar21 + 0x60;
    paiVar23 = paiVar23 + 1;
    pplVar17 = pplVar17 + 4;
    lVar19 = lVar19 + 8;
  } while (lVar21 != 0xc0);
  lVar19 = 0;
  local_200 = 0;
  plVar10 = (linebuffer *)&local_1db;
  local_208 = 0;
  local_1ec = 0;
  local_210 = thisline;
  if (thisline[0] == (linebuffer *)0x0) goto LAB_0010049c;
  do {
    plVar11 = thisline[1];
    plVar9 = thisline[0];
    fill_up[0] = false;
    fill_up[1] = false;
    if (thisline[1] == (linebuffer *)0x0) {
LAB_001004c7:
      seen_unpairable = true;
      lVar19 = lVar19 + 1;
      paiStack_240 = (int (*) [3])0x1004d8;
      writeline(plVar9,1);
    }
    else {
      lVar21 = thisline[1]->length;
      lVar20 = thisline[0]->length;
      if (hard_LC_COLLATE == false) {
        lVar16 = lVar20;
        if (lVar21 <= lVar20) {
          lVar16 = lVar21;
        }
        paiStack_240 = (int (*) [3])0x10034a;
        iVar5 = memcmp(thisline[0]->buffer,thisline[1]->buffer,lVar16 - 1);
        if (iVar5 == 0) {
          iVar5 = (uint)(lVar21 < lVar20) - (uint)(lVar20 < lVar21);
          goto joined_r0x00100555;
        }
LAB_00100366:
        if (0 < iVar5) goto LAB_00100375;
        goto LAB_001004c7;
      }
      paiStack_240 = (int (*) [3])0x100553;
      iVar5 = xmemcoll(thisline[0]->buffer,lVar20 + -1,thisline[1]->buffer,lVar21 + -1);
joined_r0x00100555:
      if (iVar5 != 0) goto LAB_00100366;
      local_200 = local_200 + 1;
      paiStack_240 = (int (*) [3])0x10056e;
      writeline(plVar11,3);
      fill_up[0] = false;
      fill_up[1] = true;
    }
    fill_up[0] = true;
    while( true ) {
      lVar21 = 1;
      paiVar7 = local_220;
      cVar3 = fill_up[0];
      while( true ) {
        if (cVar3 != '\0') {
          iVar5 = (*paiVar7)[0];
          iVar6 = (int)lVar21;
          lVar20 = (long)(iVar6 + -1);
          iVar15 = (int)(char)delim;
          local_1f0 = (*paiVar7)[1];
          local_228._4_4_ = (undefined4)((ulong)local_228 >> 0x20);
          local_228 = (char *)CONCAT44(local_228._4_4_,iVar5);
          local_230 = (linebuffer (*) [4])(lVar20 * 4);
          pFVar2 = local_218[lVar21 + -1];
          plVar9 = all_line[0]
                   [(long)&(*(linebuffer (*) [4])(lVar20 * 4))[0].size + (ulong)(iVar5 + 1U & 3)];
          *(ulong *)*paiVar7 = CONCAT44(iVar5,iVar5 + 1U) & 0xffffffff00000003;
          paiStack_240 = (int (*) [3])0x10041b;
          plVar9 = (linebuffer *)readlinebuffer_delim(plVar9,pFVar2,iVar15);
          local_210[lVar21 + -1] = plVar9;
          if (plVar9 == (linebuffer *)0x0) {
            if (((all_line[0][(long)&(*local_230)[0].size + (long)local_1f0]->buffer != (char *)0x0)
                && (check_input_order != CHECK_ORDER_DISABLED)) &&
               ((check_input_order == CHECK_ORDER_ENABLED || (seen_unpairable != false)))) {
              paiStack_240 = (int (*) [3])0x100538;
              check_order(all_line[0][(long)&(*local_230)[0].size + (long)local_1f0],
                          all_line[lVar20][(int)local_228],iVar6);
            }
          }
          else if ((check_input_order != CHECK_ORDER_DISABLED) &&
                  ((check_input_order == CHECK_ORDER_ENABLED || (seen_unpairable != false)))) {
            paiStack_240 = (int (*) [3])0x100468;
            check_order(all_line[lVar20][(int)local_228],plVar9,iVar6);
          }
          if ((pFVar2->_flags & 0x20) != 0) {
            pcVar14 = local_1f8[lVar20];
            goto LAB_0010072e;
          }
          *(char *)((long)&plVar10->size + lVar21) = '\0';
        }
        if (lVar21 != 1) break;
        paiVar7 = paiVar7 + 1;
        lVar21 = 2;
        cVar3 = fill_up[1];
      }
      paiVar7 = paiVar7 + 1;
      if (thisline[0] != (linebuffer *)0x0) break;
LAB_0010049c:
      if (thisline[1] == (linebuffer *)0x0) {
        paiStack_240 = (int (*) [3])0x100598;
        iVar5 = rpl_fclose(streams[0]);
        if (iVar5 != 0) goto LAB_00100762;
        paiStack_240 = (int (*) [3])0x1005aa;
        iVar5 = rpl_fclose();
        pcVar14 = col_sep;
        if (iVar5 != 0) {
          do {
            local_1ec = 1;
LAB_00100762:
            pcVar14 = local_1f8[local_1ec];
LAB_0010072e:
            paiStack_240 = (int (*) [3])0x10073a;
            uVar8 = quotearg_n_style_colon(0,3,pcVar14);
            paiStack_240 = (int (*) [3])0x100742;
            piVar12 = __errno_location();
            paiStack_240 = (int (*) [3])0x10075a;
            error(1,*piVar12,&_LC3,uVar8);
          } while( true );
        }
        uVar22 = 0;
        plVar9 = thisline[0];
        if (total_option != false) {
          uVar22 = (ulong)delim;
          if (col_sep_len == 1) {
            paiStack_240 = (int (*) [3])0x100695;
            plVar10 = (linebuffer *)dcgettext(0,"total",5);
            plVar9 = (linebuffer *)(ulong)(uint)(int)*pcVar14;
            paiStack_240 = (int (*) [3])0x1006ae;
            plVar11 = (linebuffer *)umaxtostr(local_200,buf3);
            local_228 = (char *)CONCAT44(local_228._4_4_,(int)*col_sep);
            paiStack_240 = (int (*) [3])0x1006d3;
            local_230 = (linebuffer (*) [4])umaxtostr(local_208,buf2);
            paiVar7 = (int (*) [3])(ulong)(uint)(int)*col_sep;
            paiStack_240 = (int (*) [3])0x1006f3;
            uVar8 = umaxtostr(lVar19,buf1);
            plStack_260 = (linebuffer *)0x10071c;
            plStack_258 = plVar11;
            plStack_250 = plVar9;
            plStack_248 = plVar10;
            paiStack_240 = (int (*) [3])uVar22;
            __printf_chk(2,"%s%c%s%c%s%c%s%c",uVar8,paiVar7,local_230,(ulong)local_228 & 0xffffffff)
            ;
          }
          else {
            paiStack_240 = (int (*) [3])0x10060c;
            plVar9 = (linebuffer *)dcgettext(0,"total",5);
            paiStack_240 = (int (*) [3])0x100621;
            plVar10 = (linebuffer *)umaxtostr(local_200,buf3);
            local_228 = col_sep;
            paiStack_240 = (int (*) [3])0x100642;
            local_230 = (linebuffer (*) [4])umaxtostr(local_208,buf2);
            paiVar7 = (int (*) [3])col_sep;
            paiStack_240 = (int (*) [3])0x10065e;
            uVar8 = umaxtostr(lVar19,buf1);
            plStack_250 = (linebuffer *)pcVar14;
            plStack_260 = (linebuffer *)0x100687;
            plStack_258 = plVar10;
            plStack_248 = plVar9;
            paiStack_240 = (int (*) [3])uVar22;
            __printf_chk(2,"%s%s%s%s%s%s%s%c",uVar8,paiVar7,local_230,local_228);
          }
        }
        if ((issued_disorder_warning[0] == false) && (issued_disorder_warning[1] == false)) {
                    /* WARNING: Subroutine does not return */
          paiStack_240 = (int (*) [3])0x1005dc;
          exit(0);
        }
        paiStack_240 = (int (*) [3])0x10078a;
        uVar8 = dcgettext(0,"input is not in sorted order",5);
        iVar5 = 1;
        paiStack_240 = (int (*) [3])0x10079b;
        error(1,0,uVar8);
        uVar8 = _program_name;
        ppuVar18 = &puStack_2e0;
        uStack_268 = *(undefined8 *)(in_FS_OFFSET + 0x28);
        plStack_260 = plVar9;
        plStack_258 = plVar10;
        plStack_250 = (linebuffer *)uVar22;
        plStack_248 = (linebuffer *)lVar19;
        paiStack_240 = paiVar7;
        if (iVar5 == 0) {
          uVar13 = dcgettext(0,"Usage: %s [OPTION]... FILE1 FILE2\n",5);
          __printf_chk(2,uVar13,uVar8);
          pFVar4 = _stdout;
          pcVar14 = (char *)dcgettext(0,"Compare sorted files FILE1 and FILE2 line by line.\n",5);
          fputs_unlocked(pcVar14,pFVar4);
          pFVar4 = _stdout;
          pcVar14 = (char *)dcgettext(0,
                                      "\nWhen FILE1 or FILE2 (not both) is -, read standard input.\n"
                                      ,5);
          fputs_unlocked(pcVar14,pFVar4);
          pFVar4 = _stdout;
          pcVar14 = (char *)dcgettext(0,
                                      "\nWith no options, produce three-column output.  Column one contains\nlines unique to FILE1, column two contains lines unique to FILE2,\nand column three contains lines common to both files.\n"
                                      ,5);
          fputs_unlocked(pcVar14,pFVar4);
          pFVar4 = _stdout;
          pcVar14 = (char *)dcgettext(0,
                                      "\n  -1                      suppress column 1 (lines unique to FILE1)\n  -2                      suppress column 2 (lines unique to FILE2)\n  -3                      suppress column 3 (lines that appear in both files)\n"
                                      ,5);
          fputs_unlocked(pcVar14,pFVar4);
          pFVar4 = _stdout;
          pcVar14 = (char *)dcgettext(0,
                                      "\n      --check-order       check that the input is correctly sorted, even\n                            if all input lines are pairable\n      --nocheck-order     do not check that the input is correctly sorted\n"
                                      ,5);
          fputs_unlocked(pcVar14,pFVar4);
          pFVar4 = _stdout;
          pcVar14 = (char *)dcgettext(0,"      --output-delimiter=STR  separate columns with STR\n",
                                      5);
          fputs_unlocked(pcVar14,pFVar4);
          pFVar4 = _stdout;
          pcVar14 = (char *)dcgettext(0,"      --total             output a summary\n",5);
          fputs_unlocked(pcVar14,pFVar4);
          pFVar4 = _stdout;
          pcVar14 = (char *)dcgettext(0,
                                      "  -z, --zero-terminated   line delimiter is NUL, not newline\n"
                                      ,5);
          fputs_unlocked(pcVar14,pFVar4);
          pFVar4 = _stdout;
          pcVar14 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
          fputs_unlocked(pcVar14,pFVar4);
          pFVar4 = _stdout;
          pcVar14 = (char *)dcgettext(0,"      --version     output version information and exit\n",
                                      5);
          fputs_unlocked(pcVar14,pFVar4);
          pFVar4 = _stdout;
          pcVar14 = (char *)dcgettext(0,
                                      "\nComparisons honor the rules specified by \'LC_COLLATE\'.\n"
                                      ,5);
          fputs_unlocked(pcVar14,pFVar4);
          uVar8 = _program_name;
          uVar13 = dcgettext(0,
                             "\nExamples:\n  %s -12 file1 file2  Print only lines present in both file1 and file2.\n  %s -3 file1 file2  Print lines in file1 not in file2, and vice versa.\n"
                             ,5);
          __printf_chk(2,uVar13,uVar8,uVar8);
          pcVar14 = "[";
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
        uVar13 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
        __fprintf_chk(_stderr,2,uVar13,uVar8);
        goto LAB_001007fa;
      }
      fill_up = (_Bool  [2])((ushort)fill_up & 0xff00);
      plVar11 = thisline[1];
LAB_00100375:
      seen_unpairable = true;
      local_208 = local_208 + 1;
      paiStack_240 = (int (*) [3])0x100388;
      writeline(plVar11,2);
      fill_up[1] = true;
    }
  } while( true );
  while( true ) {
    pcVar14 = *(char **)((long)ppuVar18 + 0x10);
    ppuVar18 = (undefined **)((long)ppuVar18 + 0x10);
    if (pcVar14 == (char *)0x0) break;
LAB_00100aad:
    iVar6 = strcmp("comm",pcVar14);
    if (iVar6 == 0) break;
  }
  puVar24 = *(undefined **)((long)ppuVar18 + 8);
  if (puVar24 == (undefined *)0x0) {
    uVar8 = dcgettext(0,"\n%s online help: <%s>\n",5);
    puVar24 = &_LC9;
    __printf_chk(2,uVar8,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar14 = setlocale(5,(char *)0x0);
    if (pcVar14 == (char *)0x0) {
      uVar8 = dcgettext(0,"Full documentation <%s%s>\n",5);
      pcVar14 = " invocation";
      __printf_chk(2,uVar8,"https://www.gnu.org/software/coreutils/",&_LC9);
      goto LAB_00100b63;
    }
LAB_00100b0d:
    iVar6 = strncmp(pcVar14,"en_",3);
    pFVar4 = _stdout;
    if (iVar6 != 0) {
      pcVar14 = (char *)dcgettext(0,
                                  "Report any translation bugs to <https://translationproject.org/team/>\n"
                                  ,5);
      fputs_unlocked(pcVar14,pFVar4);
    }
  }
  else {
    uVar8 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar8,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar14 = setlocale(5,(char *)0x0);
    if (pcVar14 != (char *)0x0) goto LAB_00100b0d;
  }
  uVar8 = dcgettext(0,"Full documentation <%s%s>\n",5);
  pcVar14 = "";
  __printf_chk(2,uVar8,"https://www.gnu.org/software/coreutils/",&_LC9);
  if (puVar24 == &_LC9) {
    pcVar14 = " invocation";
  }
LAB_00100b63:
  uVar8 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar8,puVar24,pcVar14);
LAB_001007fa:
                    /* WARNING: Subroutine does not return */
  exit(iVar5);
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
    iVar2 = strcmp("comm",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)piVar6 + 0x10);
    piVar6 = (infomap *)((long)piVar6 + 0x10);
  } while (pcVar4 != (char *)0x0);
  puVar7 = *(undefined **)((long)piVar6 + 8);
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
  exit(status);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */
/* WARNING: Enum "anon_enum_32": Some values do not have unique names */

int main(int argc,char **argv)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  size_t sVar4;
  long lVar5;
  char *pcVar6;
  
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  hard_LC_COLLATE = (_Bool)hard_locale(3);
  atexit((__func *)&close_stdout);
  only_file_1 = true;
  only_file_2 = true;
  both = true;
  seen_unpairable = false;
  issued_disorder_warning[0] = false;
  issued_disorder_warning[1] = false;
  check_input_order = CHECK_ORDER_DEFAULT;
  total_option = false;
  sVar4 = col_sep_len;
  while (col_sep_len = sVar4, iVar1 = getopt_long(argc,argv,&_LC45,long_options,0), pcVar6 = _optarg
        , iVar1 != -1) {
    if (0x83 < iVar1) goto switchD_0010156f_caseD_7b;
    sVar4 = col_sep_len;
    if (iVar1 < 0x7a) {
      if (iVar1 == 0x31) {
        only_file_1 = false;
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
                    /* WARNING: Subroutine does not return */
            usage(0);
          }
          goto switchD_0010156f_caseD_7b;
        }
        if (iVar1 == 0x32) {
          only_file_2 = false;
        }
        else {
          if (iVar1 != 0x33) goto switchD_0010156f_caseD_7b;
          both = false;
        }
      }
    }
    else {
      switch(iVar1) {
      case 0x7a:
        delim = '\0';
        break;
      default:
        goto switchD_0010156f_caseD_7b;
      case 0x80:
        check_input_order = CHECK_ORDER_ENABLED;
        break;
      case 0x81:
        check_input_order = CHECK_ORDER_DISABLED;
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
        total_option = true;
      }
    }
  }
  if (col_sep_len == 0) {
    col_sep_len = 1;
  }
  lVar5 = (long)_optind;
  if (argc - _optind < 2) {
    if (argc <= _optind) {
      uVar2 = dcgettext(0,"missing operand",5);
      error(0,0,uVar2);
      goto switchD_0010156f_caseD_7b;
    }
    uVar2 = quote(argv[(long)argc + -1]);
    pcVar6 = "missing operand after %s";
  }
  else {
    if (argc - _optind == 2) {
                    /* WARNING: Subroutine does not return */
      compare_files(argv + lVar5);
    }
LAB_0010173e:
    uVar2 = quote(argv[lVar5 + 2]);
    pcVar6 = "extra operand %s";
  }
  uVar3 = dcgettext(0,pcVar6,5);
  error(0,0,uVar3,uVar2);
switchD_0010156f_caseD_7b:
                    /* WARNING: Subroutine does not return */
  usage(1);
}


