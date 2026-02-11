
long filename_unescape(long param_1,ulong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  char cVar3;
  ulong uVar4;
  
  uVar4 = 0;
  puVar1 = (undefined1 *)(param_1 + 1);
  if (param_2 != 0) {
    do {
      puVar2 = puVar1;
      cVar3 = *(char *)(param_1 + uVar4);
      if (cVar3 == '\0') {
        return 0;
      }
      if (cVar3 == '\\') {
        if (param_2 - 1 == uVar4) {
          return 0;
        }
        uVar4 = uVar4 + 1;
        cVar3 = *(char *)(param_1 + uVar4);
        if (cVar3 == 'n') {
          cVar3 = '\n';
        }
        else if (cVar3 == 'r') {
          cVar3 = '\r';
        }
        else {
          if (cVar3 != '\\') {
            return 0;
          }
          cVar3 = '\\';
        }
      }
      uVar4 = uVar4 + 1;
      puVar2[-1] = cVar3;
      puVar1 = puVar2 + 1;
    } while (uVar4 < param_2);
    if (puVar2 < (undefined1 *)(param_2 + param_1)) {
      *puVar2 = 0;
    }
  }
  return param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void print_filename(byte *param_1,char param_2)

{
  byte bVar1;
  byte *pbVar2;
  
  if (param_2 == '\0') {
    fputs_unlocked((char *)param_1,_stdout);
    return;
  }
  bVar1 = *param_1;
  do {
    while( true ) {
      if (bVar1 == 0) {
        return;
      }
      if (bVar1 != 0xd) break;
      fwrite_unlocked(&_LC1,1,2,_stdout);
LAB_001000e0:
      bVar1 = param_1[1];
      param_1 = param_1 + 1;
    }
    if (bVar1 != 0x5c) {
      if (bVar1 == 10) {
        fwrite_unlocked(&_LC0,1,2,_stdout);
      }
      else {
        pbVar2 = (byte *)_stdout->_IO_write_ptr;
        if (pbVar2 < _stdout->_IO_write_end) {
          _stdout->_IO_write_ptr = (char *)(pbVar2 + 1);
          *pbVar2 = bVar1;
        }
        else {
          __overflow(_stdout,(uint)bVar1);
        }
      }
      goto LAB_001000e0;
    }
    param_1 = param_1 + 1;
    fwrite_unlocked(&_LC2,1,2,_stdout);
    bVar1 = *param_1;
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 digest_file_isra_0(byte *param_1,undefined8 param_2,undefined1 *param_3)

{
  FILE *__stream;
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar1 = *param_1 - 0x2d;
  if (uVar1 == 0) {
    uVar1 = (uint)param_1[1];
  }
  *param_3 = 0;
  __stream = _stdin;
  if (uVar1 == 0) {
    have_read_stdin = 1;
    fadvise(_stdin,2);
    iVar2 = blake2b_stream(__stream,param_2,digest_length >> 3);
    if (iVar2 == 0) {
      clearerr_unlocked(__stream);
      return 1;
    }
    piVar4 = __errno_location();
    iVar2 = *piVar4;
    clearerr_unlocked(__stream);
  }
  else {
    lVar5 = fopen_safer(param_1,&_LC3);
    if (lVar5 == 0) {
      if ((ignore_missing != '\0') && (piVar4 = __errno_location(), *piVar4 == 2)) {
        *param_3 = 1;
        return 1;
      }
      uVar6 = quotearg_n_style_colon(0,3,param_1);
      piVar4 = __errno_location();
      error(0,*piVar4,&_LC4,uVar6);
      return 0;
    }
    fadvise(lVar5,2);
    iVar2 = blake2b_stream(lVar5,param_2,digest_length >> 3);
    if (iVar2 == 0) {
      iVar2 = rpl_fclose(lVar5);
      if (iVar2 == 0) {
        return 1;
      }
    }
    else {
      piVar4 = __errno_location();
      iVar2 = *piVar4;
      iVar3 = rpl_fclose(lVar5);
      if (iVar3 == 0) goto LAB_001001fc;
      if (iVar2 != 0) goto LAB_001002a0;
    }
    piVar4 = __errno_location();
    iVar2 = *piVar4;
  }
LAB_001001fc:
  if (iVar2 == 0) {
    return 1;
  }
LAB_001002a0:
  uVar6 = quotearg_n_style_colon(0,3,param_1);
  error(0,iVar2,&_LC4,uVar6);
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void usage(int param_1)

{
  FILE *pFVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined **ppuVar7;
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
  
  uVar4 = _program_name;
  ppuVar7 = &local_a8;
  local_30 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(_stderr,2,uVar3,uVar4);
    goto LAB_0010037a;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... [FILE]...\n",5);
  __printf_chk(2,uVar3,uVar4);
  uVar4 = dcgettext(0,"Print or check %s (%d-bit) checksums.\n",5);
  __printf_chk(2,uVar4,"BLAKE2b",0x200);
  pFVar1 = _stdout;
  pcVar5 = (char *)dcgettext(0,"\nWith no FILE, or when FILE is -, read standard input.\n",5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = _stdout;
  pcVar5 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = _stdout;
  pcVar5 = (char *)dcgettext(0,"  -b, --binary          read in binary mode\n",5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = _stdout;
  pcVar5 = (char *)dcgettext(0,
                             "  -c, --check           read checksums from the FILEs and check them\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = _stdout;
  pcVar5 = (char *)dcgettext(0,
                             "  -l, --length=BITS     digest length in bits; must not exceed the max for\n                          the blake2 algorithm and must be a multiple of 8\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = _stdout;
  pcVar5 = (char *)dcgettext(0,"      --tag             create a BSD-style checksum\n",5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = _stdout;
  pcVar5 = (char *)dcgettext(0,"  -t, --text            read in text mode (default)\n",5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = _stdout;
  pcVar5 = (char *)dcgettext(0,
                             "  -z, --zero            end each output line with NUL, not newline,\n                          and disable file name escaping\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = _stdout;
  pcVar5 = (char *)dcgettext(0,
                             "\nThe following five options are useful only when verifying checksums:\n      --ignore-missing  don\'t fail or report status for missing files\n      --quiet           don\'t print OK for each successfully verified file\n      --status          don\'t output anything, status code shows success\n      --strict          exit non-zero for improperly formatted checksum lines\n  -w, --warn            warn about improperly formatted checksum lines\n\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = _stdout;
  pcVar5 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = _stdout;
  pcVar5 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar5,pFVar1);
  uVar4 = dcgettext(0,"\nThe sums are computed as described in %s.\n",5);
  __printf_chk(2,uVar4,"RFC 7693");
  pFVar1 = _stdout;
  pcVar5 = (char *)dcgettext(0,
                             "When checking, the input should be a former output of this program.\nThe default mode is to print a line with: checksum, a space,\na character indicating input mode (\'*\' for binary, \' \' for text\nor where binary is insignificant), and name for each FILE.\n\nThere is no difference between binary mode and text mode on GNU systems.\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pcVar5 = "[";
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
    iVar2 = strcmp("b2sum",pcVar5);
    if (iVar2 == 0) break;
    pcVar5 = *(char **)((long)ppuVar7 + 0x10);
    ppuVar7 = (undefined **)((long)ppuVar7 + 0x10);
  } while (pcVar5 != (char *)0x0);
  pcVar5 = *(char **)((long)ppuVar7 + 8);
  if (pcVar5 == (char *)0x0) {
    uVar4 = dcgettext(0,"\n%s online help: <%s>\n",5);
    pcVar5 = "b2sum";
    __printf_chk(2,uVar4,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) goto LAB_001006dd;
    uVar4 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = " invocation";
    __printf_chk(2,uVar4,"https://www.gnu.org/software/coreutils/","b2sum");
  }
  else {
    uVar4 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar4,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) {
LAB_001006dd:
      iVar2 = strncmp(pcVar6,"en_",3);
      pFVar1 = _stdout;
      if (iVar2 != 0) {
        pcVar6 = (char *)dcgettext(0,
                                   "Report any translation bugs to <https://translationproject.org/team/>\n"
                                   ,5);
        fputs_unlocked(pcVar6,pFVar1);
      }
    }
    uVar4 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = "";
    __printf_chk(2,uVar4,"https://www.gnu.org/software/coreutils/","b2sum");
    if (pcVar5 == "b2sum") {
      pcVar6 = " invocation";
    }
  }
  uVar4 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar4,pcVar5,pcVar6);
LAB_0010037a:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint main(uint param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  uint *puVar8;
  __ssize_t _Var9;
  byte *pbVar10;
  FILE *pFVar11;
  size_t sVar12;
  int *piVar13;
  ulong uVar14;
  undefined8 uVar15;
  byte bVar16;
  uint uVar17;
  uint *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  char *pcVar21;
  byte *pbVar22;
  uint *puVar23;
  uint *puVar24;
  char *pcVar25;
  undefined1 *puVar26;
  byte *pbVar27;
  ulong uVar28;
  long in_FS_OFFSET;
  bool bVar29;
  bool bVar30;
  byte **local_120;
  char *local_118;
  uint *local_110;
  byte local_101;
  byte *local_f0;
  long local_e0;
  long local_d8;
  long local_c8;
  ulong local_c0;
  uint local_b8;
  byte local_b4;
  byte local_b3;
  byte local_b2;
  byte local_b1;
  uint *local_b0;
  byte *local_a8;
  size_t local_a0;
  ulong local_98;
  char local_90;
  undefined7 uStack_8f;
  undefined8 local_88;
  long local_40;
  
  iVar5 = -1;
  puVar26 = long_options;
  puVar20 = (undefined *)(ulong)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils");
  pcVar25 = "l:bctwz";
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  setvbuf(_stdout,(char *)0x0,1,0);
  local_120 = (byte **)0xffffffff;
  local_110 = (uint *)((ulong)local_110 & 0xffffffffffffff00);
  local_118 = "";
  puVar24 = &switchD_001016ab::switchdataD_00102940;
LAB_00101668:
  iVar4 = getopt_long(param_1,param_2,"l:bctwz",long_options,0);
  if (iVar4 == -1) {
    min_digest_line_length = 3;
    if (digest_length < 0x201) {
      if ((digest_length & 7) == 0) {
        if (digest_length == 0) {
          digest_length = 0x200;
        }
        digest_hex_bytes = (uint *)(digest_length >> 2);
        if (iVar5 == -1) {
          puVar26 = (byte *)0x0;
          if (digest_delim == 10) goto LAB_00101ab8;
        }
        else {
          if ((int)local_120 == 0) {
            pcVar25 = "--tag does not support --text mode";
            goto LAB_00101ada;
          }
          puVar26 = (byte *)0x1;
          if (digest_delim == 10) goto LAB_00102389;
        }
        pcVar25 = "the --zero option is not supported when verifying checksums";
        goto joined_r0x0010187f;
      }
    }
    else {
      uVar7 = quote(local_118);
      uVar15 = dcgettext(0,"invalid length: %s",5);
      error(0,0,uVar15,uVar7);
      uVar7 = quote("BLAKE2b");
      uVar15 = dcgettext(0,"maximum digest length for %s is %d bits",5);
      error(1,0,uVar15,uVar7,0x200);
    }
    uVar7 = quote(local_118);
    uVar15 = dcgettext(0,"invalid length: %s",5);
    error(0,0,uVar15,uVar7);
    uVar7 = dcgettext(0,"length is not a multiple of 8",5);
    error(1,0,uVar7);
    goto LAB_00102911;
  }
  if (0x84 < iVar4) goto switchD_001016ab_caseD_64;
  if (iVar4 < 0x62) {
    if (iVar4 == -0x83) {
      uVar7 = proper_name_lite("Samuel Neves","Samuel Neves");
      uVar15 = proper_name_lite("Padraig Brady",&_LC45);
      version_etc(_stdout,"b2sum","GNU coreutils",_Version,uVar15,uVar7,0);
                    /* WARNING: Subroutine does not return */
      exit(0);
    }
    if (iVar4 == -0x82) {
      pFVar11 = (_IO_FILE *)0x0;
      usage();
      goto LAB_0010266b;
    }
switchD_001016ab_caseD_64:
    do {
      puVar8 = (uint *)usage(1);
LAB_00101af9:
      uVar28 = (ulong)puVar8 & 0xffffffff;
LAB_00101afb:
      uVar17 = (uint)uVar28;
      if (have_read_stdin == '\0') {
LAB_00101b08:
        if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return (uVar17 ^ 1) & 0xff;
      }
      local_120 = (byte **)CONCAT71(local_120._1_7_,(char)uVar28);
      iVar5 = rpl_fclose(_stdin);
      uVar17 = uVar17 & 0xff;
      if (iVar5 != -1) goto LAB_00101b08;
      param_2 = (undefined8 *)dcgettext(0,"standard input",5);
      piVar13 = __errno_location();
      error(1,*piVar13,param_2);
LAB_00102389:
      pcVar25 = "the --tag option is meaningless when verifying checksums";
      if ((byte)local_110 != '\0') goto LAB_00101ada;
LAB_00101ab8:
      if (-1 < (int)local_120) {
        pcVar25 = "the --binary and --text options are meaningless when verifying checksums";
joined_r0x0010187f:
        if ((byte)local_110 != '\0') goto LAB_00101ada;
      }
      if ((((ignore_missing == '\x01') &&
           (pcVar25 = "the --ignore-missing option is meaningful only when verifying checksums",
           (byte)local_110 == 0)) ||
          ((status_only == 1 &&
           (pcVar25 = "the --status option is meaningful only when verifying checksums",
           (byte)local_110 == 0)))) ||
         ((warn == '\x01' &&
          (pcVar25 = "the --warn option is meaningful only when verifying checksums",
          (byte)local_110 == 0)))) goto LAB_00101ada;
      bVar3 = quiet ^ 1 | (byte)local_110;
      uVar28 = (ulong)(uint)bVar3;
      if (bVar3 != 0) {
        if ((((byte)local_110 ^ 1) & strict) != 0) {
          pcVar25 = "the --strict option is meaningful only when verifying checksums";
          goto LAB_00101ada;
        }
        puVar8 = (uint *)(param_2 + (int)puVar20);
        lVar6 = (long)_optind;
        local_b0 = puVar8;
        if (_optind == (int)puVar20) {
          local_b0 = puVar8 + 2;
          *(undefined **)puVar8 = &_LC60;
        }
        pcVar25 = (char *)(param_2 + lVar6);
        if (local_b0 <= pcVar25) goto LAB_00101afb;
        local_f0 = *(byte **)pcVar25;
        if ((byte)local_110 != 0) {
          local_c0 = (long)&local_88 + 7;
          local_b1 = (byte)local_110;
          do {
            local_b8 = *local_f0 - 0x2d;
            if ((local_b8 == 0) && (local_b8 = (uint)local_f0[1], local_b8 == 0)) {
              have_read_stdin = '\x01';
              local_f0 = (byte *)dcgettext(0,"standard input",5);
              pFVar11 = _stdin;
LAB_00101bb9:
              local_b2 = 0;
              puVar20 = (undefined *)0x1;
              local_120 = &local_a8;
              local_a8 = (byte *)0x0;
              local_a0 = 0;
              local_b3 = 0;
              local_e0 = 0;
              local_d8 = 0;
              local_c8 = 0;
              puVar8 = (uint *)pcVar25;
LAB_00101c20:
              _Var9 = __getdelim((char **)local_120,&local_a0,10,pFVar11);
              pbVar27 = local_a8;
              if (0 < _Var9) {
                if (*local_a8 == 0x23) goto LAB_00101d88;
                lVar6 = _Var9 - (ulong)(local_a8[_Var9 + -1] == 10);
                puVar8 = (uint *)(lVar6 - (ulong)(local_a8[lVar6 - (ulong)(0 < lVar6)] == 0xd));
                if (puVar8 == (uint *)0x0) goto LAB_00101d88;
                local_a8[(long)puVar8] = 0;
                puVar24 = (uint *)0x0;
                bVar3 = *local_a8;
                if (bVar3 != 0x20) goto LAB_00101cad;
                do {
                  do {
                    puVar24 = (uint *)((long)puVar24 + 1);
                    bVar3 = local_a8[(long)puVar24];
                  } while (bVar3 == 0x20);
LAB_00101cad:
                } while (bVar3 == 9);
                local_101 = 0;
                if (bVar3 == 0x5c) {
                  puVar24 = (uint *)((long)puVar24 + 1);
                  local_101 = (byte)local_110;
                }
                pbVar10 = local_a8 + (long)puVar24;
                iVar5 = strncmp((char *)pbVar10,"BLAKE2b",7);
                if (iVar5 != 0) goto LAB_00101de0;
                puVar18 = (uint *)((long)puVar24 + 7);
                pbVar22 = pbVar27 + (long)puVar18;
                bVar3 = *pbVar22;
                *pbVar22 = 0;
                iVar5 = strcmp((char *)pbVar10,"BLAKE2b");
                if (iVar5 == 0) {
                  if (bVar3 == 0x28) {
                    *pbVar22 = 0x28;
                    digest_length = 0x200;
                  }
                  else {
                    puVar18 = puVar24 + 2;
                    digest_length = 0x200;
                    if (bVar3 == 0x2d) {
                      iVar5 = xstrtoumax(pbVar27 + (long)puVar18,&local_90,0,&local_98,0);
                      if ((((iVar5 != 0) || (local_98 == 0)) || (digest_length < local_98)) ||
                         ((local_98 & 7) != 0)) goto LAB_00101d71;
                      puVar18 = (uint *)(CONCAT71(uStack_8f,local_90) - (long)pbVar27);
                      digest_length = local_98;
                    }
                  }
                  puVar23 = (uint *)(digest_length >> 2);
                  if (pbVar27[(long)puVar18] == 0x20) {
                    puVar18 = (uint *)((long)puVar18 + 1);
                  }
                  digest_hex_bytes = puVar23;
                  if (pbVar27[(long)puVar18] == 0x28) {
                    puVar8 = (uint *)((long)puVar8 - ((long)puVar18 + 1));
                    if (puVar8 != (uint *)0x0) {
                      pbVar27 = pbVar27 + (long)((long)puVar18 + 1);
                      puVar18 = puVar8;
                      do {
                        puVar18 = (uint *)((long)puVar18 + -1);
                        if (puVar18 == (uint *)0x0) break;
                      } while (pbVar27[(long)puVar18] != 0x29);
                      pbVar10 = pbVar27 + (long)puVar18;
                      if ((*pbVar10 == 0x29) &&
                         ((local_101 == 0 ||
                          (lVar6 = filename_unescape(pbVar27,puVar18), lVar6 != 0)))) {
                        *pbVar10 = 0;
                        do {
                          do {
                            puVar18 = (uint *)((long)puVar18 + 1);
                            bVar3 = pbVar27[(long)puVar18];
                          } while (bVar3 == 0x20);
                        } while (bVar3 == 9);
                        if (bVar3 == 0x3d) {
                          do {
                            do {
                              puVar18 = (uint *)((long)puVar18 + 1);
                            } while (pbVar27[(long)puVar18] == 0x20);
                          } while (pbVar27[(long)puVar18] == 9);
                          puVar24 = (uint *)((long)puVar8 - (long)puVar18);
                          puVar8 = puVar24;
                          if (puVar23 == puVar24) {
                            pbVar10 = pbVar27 + (long)puVar18;
                            puVar18 = (uint *)0x0;
                            while( true ) {
                              if (puVar24 == puVar18) {
                                bVar30 = pbVar10[(long)puVar18] == 0;
                                goto LAB_001025e5;
                              }
                              uVar17 = pbVar10[(long)puVar18] - 0x30;
                              if ((0x36 < (byte)uVar17) ||
                                 ((0x7e0000007e03ffU >> ((ulong)uVar17 & 0x3f) & 1) == 0)) break;
                              puVar18 = (uint *)((long)puVar18 + 1);
                            }
                          }
                        }
                      }
                    }
                  }
                }
LAB_00101d71:
                do {
                  if (warn != '\0') {
                    puVar8 = (uint *)quotearg_n_style_colon(0,3,local_f0);
                    uVar7 = dcgettext(0,"%s: %ju: improperly formatted %s checksum line",5);
                    error(0,0,uVar7,puVar8,puVar20,"BLAKE2b");
                  }
                  local_c8 = local_c8 + 1;
                  puVar26 = pbVar27;
LAB_00101d88:
                  bVar3 = (byte)pFVar11->_flags;
                  pbVar27 = puVar26;
                  while( true ) {
                    puVar20 = puVar20 + 1;
                    puVar26 = pbVar27;
                    if ((bVar3 & 0x30) != 0) goto LAB_00101fe0;
                    if (puVar20 != (undefined *)0x0) goto LAB_00101c20;
                    pbVar10 = (byte *)quotearg_n_style_colon(0,3,local_f0);
                    uVar7 = dcgettext(0,"%s: too many checksum lines",5);
                    error(1,0,uVar7,pbVar10);
LAB_00101de0:
                    bVar3 = *pbVar10;
                    if ((ulong)((long)puVar8 - (long)puVar24) <
                        (ulong)(bVar3 == 0x5c) + min_digest_line_length) break;
                    digest_hex_bytes = (uint *)0x0;
                    puVar18 = (uint *)0x0;
                    uVar17 = *pbVar10 - 0x30;
                    bVar16 = (byte)uVar17;
                    bVar30 = false;
                    while ((bVar16 < 0x37 &&
                           (bVar29 = (0x7e0000007e03ffU >> ((ulong)uVar17 & 0x3f) & 1) != 0, bVar29)
                           )) {
                      puVar18 = (uint *)((long)puVar18 + 1);
                      uVar17 = pbVar10[(long)puVar18] - 0x30;
                      bVar16 = (byte)uVar17;
                      bVar30 = bVar29;
                    }
                    if (((!bVar30) ||
                        (digest_hex_bytes = puVar18, (byte *)0x7e < (byte *)((long)puVar18 + -2)))
                       || (((ulong)puVar18 & 1) != 0)) break;
                    digest_length = (long)puVar18 * 4;
                    puVar23 = puVar24;
                    pbVar22 = pbVar10;
                    if (bVar3 != 0) {
                      do {
                        if ((bVar3 == 0x20) || (bVar3 == 9)) break;
                        puVar23 = (uint *)((long)puVar23 + 1);
                        pbVar22 = pbVar22 + ((long)(pbVar27 + 1 + (long)puVar24) - (long)pbVar10);
                        bVar3 = pbVar27[(long)puVar23];
                      } while (bVar3 != 0);
                    }
                    if (puVar23 == puVar8) break;
                    *pbVar22 = 0;
                    puVar24 = (uint *)((long)puVar23 - (long)puVar24);
                    pbVar22 = pbVar10;
                    if (puVar18 != puVar24) break;
                    do {
                      if ((0x36 < (byte)(*pbVar22 - 0x30)) ||
                         ((0x7e0000007e03ffU >> ((ulong)(*pbVar22 - 0x30) & 0x3f) & 1) == 0))
                      goto LAB_00101d71;
                      pbVar22 = pbVar22 + 1;
                    } while (pbVar22 + -(long)pbVar10 < puVar24);
                    if (*pbVar22 != 0) break;
                    pbVar22 = (byte *)((long)puVar23 + 1);
                    if (((long)puVar8 - (long)pbVar22 == 1) ||
                       (((pbVar27 + 1)[(long)puVar23] != 0x20 &&
                        ((pbVar27 + 1)[(long)puVar23] != 0x2a)))) {
                      if (bsd_reversed == 0) break;
                      bsd_reversed = 1;
                    }
                    else if (bsd_reversed != 1) {
                      pbVar22 = (byte *)((long)puVar23 + 2);
                      bsd_reversed = 0;
                    }
                    pbVar27 = pbVar27 + (long)pbVar22;
                    if (local_101 != 0) {
                      lVar6 = filename_unescape(pbVar27,(long)puVar8 - (long)pbVar22);
                      bVar30 = lVar6 != 0;
LAB_001025e5:
                      if (!bVar30) break;
                    }
                    if (((local_b8 == 0) && (*pbVar27 == 0x2d)) && (pbVar27[1] == 0)) break;
                    puVar8 = (uint *)0x0;
                    if (status_only == 0) {
                      sVar12 = strcspn((char *)pbVar27,"\\\n\r");
                      puVar8 = (uint *)(ulong)(pbVar27[sVar12] != 0);
                    }
                    bVar3 = digest_file_isra_0(pbVar27,local_c0 & 0xfffffffffffffff8,&local_90);
                    iVar5 = (int)puVar8;
                    if (bVar3 == 0) {
                      if (status_only == 0) {
                        if (iVar5 != 0) {
                          pcVar21 = _stdout->_IO_write_ptr;
                          if (pcVar21 < _stdout->_IO_write_end) {
                            _stdout->_IO_write_ptr = pcVar21 + 1;
                            *pcVar21 = '\\';
                          }
                          else {
                            __overflow(_stdout,0x5c);
                          }
                        }
                        print_filename(pbVar27,puVar8);
                        uVar7 = dcgettext(0,"FAILED open or read",5);
                        __printf_chk(2,": %s\n",uVar7);
                      }
                      local_d8 = local_d8 + 1;
                    }
                    else if ((ignore_missing == '\0') || (local_90 == '\0')) {
                      if (digest_hex_bytes == puVar24) {
                        uVar28 = (ulong)puVar24 >> 1;
                        if (uVar28 != 0) {
                          uVar14 = 0;
                          do {
                            bVar16 = pbVar10[uVar14 * 2];
                            uVar17 = (uint)bVar16;
                            if (bVar16 - 0x41 < 0x1a) {
                              uVar17 = bVar16 + 0x20;
                            }
                            bVar16 = *(byte *)((local_c0 & 0xfffffffffffffff8) + uVar14);
                            if ((int)(char)bin2hex_0[bVar16 >> 4] != uVar17) {
LAB_0010250a:
                              if (uVar28 != uVar14) goto LAB_001023e2;
                              break;
                            }
                            bVar2 = pbVar10[uVar14 * 2 + 1];
                            uVar17 = (uint)bVar2;
                            if (bVar2 - 0x41 < 0x1a) {
                              uVar17 = bVar2 + 0x20;
                            }
                            if ((int)(char)bin2hex_0[bVar16 & 0xf] != uVar17) goto LAB_0010250a;
                            uVar14 = uVar14 + 1;
                          } while (uVar28 != uVar14);
                        }
                        local_b2 = status_only;
                        if ((status_only == 0) && (local_b2 = quiet, quiet == 0)) {
                          local_b2 = bVar3;
                          if (iVar5 != 0) goto LAB_00102542;
                          print_filename(pbVar27,0);
                          local_101 = bVar3;
LAB_00102580:
                          if (quiet == 0) {
                            pcVar21 = "OK";
                            goto LAB_00102416;
                          }
                        }
                      }
                      else {
LAB_001023e2:
                        local_e0 = local_e0 + 1;
                        if (status_only == 0) {
                          bVar3 = 0;
                          if (iVar5 == 0) {
                            print_filename(pbVar27,0);
                          }
                          else {
LAB_00102542:
                            local_101 = bVar3;
                            pcVar21 = _stdout->_IO_write_ptr;
                            if (pcVar21 < _stdout->_IO_write_end) {
                              _stdout->_IO_write_ptr = pcVar21 + 1;
                              *pcVar21 = '\\';
                            }
                            else {
                              __overflow(_stdout,0x5c);
                            }
                            print_filename(pbVar27,1);
                            if (local_101 != 0) goto LAB_00102580;
                          }
                          pcVar21 = "FAILED";
LAB_00102416:
                          uVar7 = dcgettext(0,pcVar21,5);
                          __printf_chk(2,": %s\n",uVar7);
                        }
                      }
                    }
                    bVar3 = (byte)pFVar11->_flags;
                    local_b3 = (byte)local_110;
                  }
                } while( true );
              }
LAB_00101fe0:
              free(local_a8);
              uVar17 = pFVar11->_flags & 0x20;
              if (local_b8 == 0) {
                clearerr_unlocked(pFVar11);
LAB_0010200b:
                iVar5 = -(uint)(uVar17 == 0);
LAB_00102010:
                if (iVar5 < 0) {
                  if (local_b3 == 0) {
                    uVar7 = quotearg_n_style_colon(0,3,local_f0);
                    pcVar21 = "%s: no properly formatted checksum lines found";
LAB_0010280e:
                    uVar15 = dcgettext(0,pcVar21,5);
                    error(0,0,uVar15,uVar7);
                    bVar3 = 0;
                  }
                  else {
                    if (status_only == 0) {
                      if (local_c8 != 0) {
                        uVar7 = dcngettext(0,"WARNING: %ju line is improperly formatted",
                                           "WARNING: %ju lines are improperly formatted",local_c8);
                        error(0,0,uVar7,local_c8);
                      }
                      if (local_d8 != 0) {
                        uVar7 = dcngettext(0,"WARNING: %ju listed file could not be read",
                                           "WARNING: %ju listed files could not be read",local_d8);
                        error(0,0,uVar7,local_d8);
                      }
                      if (local_e0 != 0) {
                        uVar7 = dcngettext(0,"WARNING: %ju computed checksum did NOT match",
                                           "WARNING: %ju computed checksums did NOT match",local_e0)
                        ;
                        error(0,0,uVar7,local_e0);
                      }
                      if (ignore_missing == '\0') goto LAB_001020b3;
                      if (local_b2 == 0) {
LAB_00102911:
                        uVar7 = quotearg_n_style_colon(0,3,local_f0);
                        pcVar21 = "%s: no file was verified";
                        goto LAB_0010280e;
                      }
LAB_00102068:
                      if (local_d8 == 0 && local_e0 == 0) {
                        bVar3 = strict ^ 1 | local_c8 == 0;
                        goto LAB_0010208c;
                      }
                    }
                    else {
LAB_001020b3:
                      if (local_b2 != 0) goto LAB_00102068;
                    }
                    bVar3 = 0;
                  }
LAB_0010208c:
                  bVar3 = bVar3 & 1;
                  goto LAB_0010208f;
                }
                puVar20 = (undefined *)quotearg_n_style_colon(0,3,local_f0);
                puVar19 = &_LC4;
                if (iVar5 == 0) goto LAB_0010268e;
              }
              else {
                iVar5 = rpl_fclose();
                if (iVar5 == 0) goto LAB_0010200b;
                if (uVar17 == 0) {
                  piVar13 = __errno_location();
                  iVar5 = *piVar13;
                  goto LAB_00102010;
                }
                puVar20 = (undefined *)quotearg_n_style_colon(0,3,local_f0);
LAB_0010268e:
                iVar5 = 0;
                puVar19 = (undefined *)dcgettext(0,"%s: read error",5);
              }
              error(0,iVar5,puVar19,puVar20);
              bVar3 = 0;
            }
            else {
              pFVar11 = (FILE *)fopen_safer(local_f0,&_LC3);
              if (pFVar11 != (FILE *)0x0) goto LAB_00101bb9;
              uVar7 = quotearg_n_style_colon(0,3,local_f0);
              piVar13 = __errno_location();
              error(0,*piVar13,&_LC4,uVar7);
              bVar3 = 0;
            }
LAB_0010208f:
            local_b1 = local_b1 & bVar3;
            pcVar25 = (char *)((long)pcVar25 + 8);
            if (local_b0 <= pcVar25) goto LAB_00102334;
            local_f0 = *(byte **)pcVar25;
          } while( true );
        }
        local_118 = &local_90;
        local_101 = (byte)puVar26;
        puVar24 = (uint *)(ulong)(uint)bVar3;
        param_2 = &local_88;
        puVar20 = &_LC81;
        local_110 = local_b0;
        do {
          puVar8 = (uint *)digest_file_isra_0(local_f0,param_2,local_118);
          puVar26 = local_f0;
          if ((char)puVar8 != '\0') {
            local_b4 = digest_delim;
            local_b8 = 0;
            puVar8 = puVar24;
            if ((digest_delim == 10) &&
               (sVar12 = strcspn((char *)local_f0,"\\\n\r"), local_f0[sVar12] != 0)) {
              pcVar21 = _stdout->_IO_write_ptr;
              pFVar11 = _stdout;
              if (pcVar21 < _stdout->_IO_write_end) {
                _stdout->_IO_write_ptr = pcVar21 + 1;
                *pcVar21 = '\\';
              }
              else {
LAB_0010266b:
                __overflow(pFVar11,0x5c);
                puVar8 = puVar24;
              }
              local_b8 = 1;
            }
            if (local_101 == 0) {
              if ((ulong)digest_hex_bytes >> 1 != 0) {
LAB_001019e5:
                uVar28 = 0;
                do {
                  puVar1 = (undefined1 *)((long)param_2 + uVar28);
                  uVar28 = uVar28 + 1;
                  __printf_chk(2,puVar20,*puVar1);
                } while (uVar28 < (ulong)digest_hex_bytes >> 1);
                if (local_101 != 0) goto LAB_00101a7c;
              }
              pcVar21 = _stdout->_IO_write_ptr;
              if (pcVar21 < _stdout->_IO_write_end) {
                _stdout->_IO_write_ptr = pcVar21 + 1;
                *pcVar21 = ' ';
              }
              else {
                __overflow(_stdout,0x20);
              }
              iVar5 = 0x20;
              if (0 < (int)local_120) {
                iVar5 = 0x2a;
              }
              pcVar21 = _stdout->_IO_write_ptr;
              if (pcVar21 < _stdout->_IO_write_end) {
                _stdout->_IO_write_ptr = pcVar21 + 1;
                *pcVar21 = (char)iVar5;
              }
              else {
                __overflow(_stdout,iVar5);
              }
              print_filename(puVar26,local_b8);
            }
            else {
              fwrite_unlocked("BLAKE2b",1,7,_stdout);
              if (digest_length < 0x200) {
                __printf_chk(2,&_LC78);
              }
              fwrite_unlocked(&_LC79,1,2,_stdout);
              print_filename(puVar26,local_b8);
              fwrite_unlocked(&_LC80,1,4,_stdout);
              if ((ulong)digest_hex_bytes >> 1 != 0) goto LAB_001019e5;
            }
LAB_00101a7c:
            pbVar27 = (byte *)_stdout->_IO_write_ptr;
            puVar24 = puVar8;
            if (pbVar27 < _stdout->_IO_write_end) {
              _stdout->_IO_write_ptr = (char *)(pbVar27 + 1);
              *pbVar27 = local_b4;
            }
            else {
              __overflow(_stdout,(uint)local_b4);
            }
          }
          pcVar25 = (char *)((long)pcVar25 + 8);
          if (local_110 <= pcVar25) goto LAB_00101af9;
          local_f0 = *(byte **)pcVar25;
          puVar24 = (uint *)((ulong)puVar8 & 0xffffffff);
        } while( true );
      }
      pcVar25 = "the --quiet option is meaningful only when verifying checksums";
LAB_00101ada:
      uVar7 = dcgettext(0,pcVar25,5);
      error(0,0,uVar7);
    } while( true );
  }
  switch(iVar4) {
  case 0x62:
    local_120 = (byte **)0x1;
    goto LAB_00101668;
  case 99:
    local_110 = (uint *)CONCAT71(local_110._1_7_,1);
    goto LAB_00101668;
  default:
    goto switchD_001016ab_caseD_64;
  case 0x6c:
    uVar7 = dcgettext(0,"invalid length",5);
    digest_length = xnumtoumax(_optarg,10,0,0x200,&_LC8,uVar7,0,2);
    local_118 = _optarg;
    goto LAB_00101668;
  case 0x74:
    local_120 = (byte **)0x0;
    goto LAB_00101668;
  case 0x77:
    status_only = 0;
    warn = '\x01';
    quiet = 0;
    goto LAB_00101668;
  case 0x7a:
    digest_delim = 0;
    goto LAB_00101668;
  case 0x80:
    ignore_missing = '\x01';
    goto LAB_00101668;
  case 0x81:
    status_only = 1;
    quiet = 0;
    break;
  case 0x82:
    status_only = 0;
    quiet = 1;
    break;
  case 0x83:
    strict = 1;
    goto LAB_00101668;
  case 0x84:
    goto switchD_001016ab_caseD_84;
  }
  warn = '\0';
  goto LAB_00101668;
switchD_001016ab_caseD_84:
  local_120 = (byte **)0x1;
  iVar5 = 1;
  goto LAB_00101668;
LAB_00102334:
  uVar28 = (ulong)local_b1;
  goto LAB_00101afb;
}


