
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
    iVar2 = sha1_stream(__stream,param_2);
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
    iVar2 = sha1_stream(lVar5,param_2);
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
      if (iVar3 == 0) goto LAB_001001f1;
      if (iVar2 != 0) goto LAB_0010028a;
    }
    piVar4 = __errno_location();
    iVar2 = *piVar4;
  }
LAB_001001f1:
  if (iVar2 == 0) {
    return 1;
  }
LAB_0010028a:
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
    goto LAB_0010036a;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... [FILE]...\n",5);
  __printf_chk(2,uVar3,uVar4);
  uVar4 = dcgettext(0,"Print or check %s (%d-bit) checksums.\n",5);
  __printf_chk(2,uVar4,&_LC13,0xa0);
  pFVar1 = _stdout;
  pcVar5 = (char *)dcgettext(0,"\nWith no FILE, or when FILE is -, read standard input.\n",5);
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
  __printf_chk(2,uVar4,"FIPS-180-1");
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
    iVar2 = strcmp("sha1sum",pcVar5);
    if (iVar2 == 0) break;
    pcVar5 = *(char **)((long)ppuVar7 + 0x10);
    ppuVar7 = (undefined **)((long)ppuVar7 + 0x10);
  } while (pcVar5 != (char *)0x0);
  pcVar5 = *(char **)((long)ppuVar7 + 8);
  if (pcVar5 == (char *)0x0) {
    uVar4 = dcgettext(0,"\n%s online help: <%s>\n",5);
    pcVar5 = "sha1sum";
    __printf_chk(2,uVar4,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) goto LAB_00100685;
    uVar4 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = " invocation";
    __printf_chk(2,uVar4,"https://www.gnu.org/software/coreutils/","sha1sum");
  }
  else {
    uVar4 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar4,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) {
LAB_00100685:
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
    __printf_chk(2,uVar4,"https://www.gnu.org/software/coreutils/","sha1sum");
    if (pcVar5 == "sha1sum") {
      pcVar6 = " invocation";
    }
  }
  uVar4 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar4,pcVar5,pcVar6);
LAB_0010036a:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint main(uint param_1,undefined8 *param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  __ssize_t _Var8;
  long lVar9;
  undefined1 *puVar10;
  size_t sVar11;
  FILE *pFVar12;
  int *piVar13;
  undefined8 uVar14;
  FILE *pFVar15;
  FILE *pFVar16;
  FILE *pFVar17;
  ulong uVar18;
  undefined *puVar19;
  undefined1 *puVar20;
  char *pcVar21;
  _IO_FILE *p_Var22;
  FILE *pFVar23;
  byte bVar24;
  ulong uVar25;
  char *pcVar26;
  uint *puVar27;
  char *__stream;
  FILE *pFVar28;
  FILE *pFVar29;
  long in_FS_OFFSET;
  bool bVar30;
  FILE *local_e8;
  FILE *local_e0;
  FILE *local_d8;
  FILE *local_d0;
  FILE *local_c8;
  ulong local_c0;
  FILE *local_b8;
  FILE *local_b0;
  FILE *local_a8;
  FILE *local_a0;
  FILE *local_98;
  ulong local_90;
  int local_88;
  byte local_83;
  byte local_82;
  byte local_81;
  FILE *local_80;
  char local_69;
  FILE *local_68;
  char *local_60;
  undefined8 local_58;
  char *local_40;
  
  pFVar29 = (FILE *)0xffffffff;
  pFVar28 = (FILE *)&long_options;
  __stream = "bctwz";
  pFVar16 = (FILE *)(ulong)param_1;
  local_40 = *(char **)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils");
  puVar27 = &switchD_001014f3::switchdataD_00102530;
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  setvbuf(_stdout,(char *)0x0,1,0);
  local_e8 = (FILE *)CONCAT44(local_e8._4_4_,0xffffffff);
  local_83 = 0;
  while( true ) {
    pFVar23 = (FILE *)0x0;
    pFVar17 = (FILE *)&long_options;
    iVar4 = getopt_long(param_1,param_2,"bctwz");
    if (iVar4 == -1) break;
    if (0x84 < iVar4) goto switchD_001014f3_caseD_64;
    if (iVar4 < 0x62) {
      if (iVar4 == -0x83) {
        uVar14 = proper_name_lite("David Madore","David Madore");
        uVar6 = proper_name_lite("Scott Miller","Scott Miller");
        uVar7 = proper_name_lite("Ulrich Drepper","Ulrich Drepper");
        version_etc(_stdout,"sha1sum","GNU coreutils",_Version,uVar7,uVar6,uVar14,0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar4 == -0x82) {
        p_Var22 = (_IO_FILE *)0x0;
        usage();
        pFVar15 = pFVar29;
LAB_0010231a:
        __overflow(p_Var22,0x5c);
        do {
          local_88 = 1;
          pFVar12 = (FILE *)puVar27;
          do {
            if (local_83 == 0) {
              if ((ulong)digest_hex_bytes >> 1 != 0) {
LAB_001017af:
                pFVar28 = (FILE *)0x0;
                do {
                  puVar20 = (undefined1 *)((long)param_2 + (long)pFVar28);
                  pFVar28 = (FILE *)((long)&pFVar28->_flags + 1);
                  __printf_chk(2,pFVar16,*puVar20);
                } while (pFVar28 < (FILE *)((ulong)digest_hex_bytes >> 1));
                if (local_83 != 0) goto LAB_00101844;
              }
              pcVar21 = _stdout->_IO_write_ptr;
              if (pcVar21 < _stdout->_IO_write_end) {
                _stdout->_IO_write_ptr = pcVar21 + 1;
                *pcVar21 = ' ';
              }
              else {
                __overflow(_stdout,0x20);
              }
              iVar4 = 0x20;
              if (0 < (int)local_d0) {
                iVar4 = 0x2a;
              }
              pcVar21 = _stdout->_IO_write_ptr;
              if (pcVar21 < _stdout->_IO_write_end) {
                _stdout->_IO_write_ptr = pcVar21 + 1;
                *pcVar21 = (char)iVar4;
              }
              else {
                __overflow(_stdout,iVar4);
              }
              print_filename(__stream,local_88);
            }
            else {
              fwrite_unlocked(&_LC13,1,4,_stdout);
              fwrite_unlocked(&_LC72,1,2,_stdout);
              print_filename(__stream,local_88);
              pFVar17 = _stdout;
              fwrite_unlocked(&_LC73,1,4,_stdout);
              if ((ulong)digest_hex_bytes >> 1 != 0) goto LAB_001017af;
            }
LAB_00101844:
            pbVar1 = (byte *)_stdout->_IO_write_ptr;
            puVar27 = (uint *)pFVar12;
            if (pbVar1 < _stdout->_IO_write_end) {
              _stdout->_IO_write_ptr = (char *)(pbVar1 + 1);
              *pbVar1 = (byte)local_d8;
            }
            else {
              __overflow(_stdout,(uint)(byte)local_d8);
            }
            do {
              uVar5 = (uint)pFVar12;
              pFVar15 = (FILE *)&pFVar15->_IO_read_ptr;
              pFVar29 = pFVar15;
              if (local_e0 <= pFVar15) goto LAB_001018c2;
              __stream = *(char **)pFVar15;
              puVar27 = (uint *)((ulong)pFVar12 & 0xffffffff);
LAB_0010176c:
              pFVar12 = (FILE *)digest_file_isra_0(__stream,param_2,local_e8);
            } while ((char)pFVar12 == '\0');
            local_88 = 0;
            local_d8 = (FILE *)(ulong)digest_delim;
            pFVar12 = (FILE *)puVar27;
          } while ((digest_delim != 10) ||
                  (sVar11 = strcspn(__stream,"\\\n\r"),
                  *(char *)((long)&((FILE *)__stream)->_flags + sVar11) == '\0'));
          pcVar21 = _stdout->_IO_write_ptr;
          p_Var22 = _stdout;
          if (_stdout->_IO_write_end <= pcVar21) goto LAB_0010231a;
          _stdout->_IO_write_ptr = pcVar21 + 1;
          *pcVar21 = '\\';
        } while( true );
      }
      goto switchD_001014f3_caseD_64;
    }
    switch(iVar4) {
    case 0x62:
      pFVar29 = (FILE *)0x1;
      break;
    case 99:
      local_83 = 1;
      break;
    default:
      goto switchD_001014f3_caseD_64;
    case 0x74:
      pFVar29 = (FILE *)0x0;
      break;
    case 0x77:
      status_only = 0;
      warn = '\x01';
      quiet = 0;
      break;
    case 0x7a:
      digest_delim = 0;
      break;
    case 0x80:
      ignore_missing = '\x01';
      break;
    case 0x81:
      status_only = 1;
      warn = '\0';
      quiet = 0;
      break;
    case 0x82:
      status_only = 0;
      warn = '\0';
      quiet = 1;
      break;
    case 0x83:
      strict = 1;
      break;
    case 0x84:
      local_e8 = (FILE *)CONCAT44(local_e8._4_4_,1);
      pFVar29 = (FILE *)0x1;
    }
  }
  min_digest_line_length = 0x2a;
  digest_hex_bytes = (FILE *)0x28;
  if ((int)local_e8 == -1) {
    bVar24 = 0;
    if (digest_delim == 10) {
LAB_00101881:
      if (-1 < (int)pFVar29) {
        pcVar21 = "the --binary and --text options are meaningless when verifying checksums";
        goto joined_r0x0010189b;
      }
    }
    else {
LAB_00101640:
      pcVar21 = "the --zero option is not supported when verifying checksums";
joined_r0x0010189b:
      if (local_83 != 0) goto LAB_001018a1;
    }
    if ((((ignore_missing != '\x01') ||
         (pcVar21 = "the --ignore-missing option is meaningful only when verifying checksums",
         local_83 != 0)) &&
        ((status_only != 1 ||
         (pcVar21 = "the --status option is meaningful only when verifying checksums", local_83 != 0
         )))) && ((warn != '\x01' ||
                  (pcVar21 = "the --warn option is meaningful only when verifying checksums",
                  local_83 != 0)))) {
      bVar2 = quiet ^ 1 | local_83;
      uVar5 = (uint)bVar2;
      if (bVar2 == 0) {
        pcVar21 = "the --quiet option is meaningful only when verifying checksums";
      }
      else {
        if (((local_83 ^ 1) & strict) == 0) {
          pFVar15 = (FILE *)(param_2 + (int)param_1);
          lVar9 = (long)(int)_optind;
          pFVar17 = pFVar15;
          if (_optind == param_1) {
            pFVar17 = (FILE *)&pFVar15->_IO_read_ptr;
            *(undefined **)pFVar15 = &_LC54;
          }
          pFVar15 = (FILE *)(param_2 + lVar9);
          if (pFVar15 < pFVar17) {
            __stream = *(char **)pFVar15;
            local_c8 = (FILE *)__stream;
            if (local_83 == 0) {
              local_e8 = (FILE *)&local_60;
              puVar27 = (uint *)(ulong)uVar5;
              param_2 = &local_58;
              pFVar16 = (FILE *)&_LC74;
              local_e0 = pFVar17;
              local_d0 = pFVar29;
              local_83 = bVar24;
              goto LAB_0010176c;
            }
            local_90 = (long)&local_58 + 3;
            local_81 = local_83;
            local_80 = pFVar17;
            goto LAB_0010191c;
          }
          goto LAB_001018c2;
        }
        pcVar21 = "the --strict option is meaningful only when verifying checksums";
      }
    }
  }
  else if ((int)pFVar29 == 0) {
    pcVar21 = "--tag does not support --text mode";
  }
  else {
    bVar24 = 1;
    if (digest_delim != 10) goto LAB_00101640;
    pcVar21 = "the --tag option is meaningless when verifying checksums";
    if (local_83 == 0) goto LAB_00101881;
  }
LAB_001018a1:
  uVar14 = dcgettext(0,pcVar21,5);
  error(0,0,uVar14);
switchD_001014f3_caseD_64:
  uVar5 = usage(1);
LAB_001018c2:
  if (have_read_stdin != '\0') {
    local_e8 = (FILE *)CONCAT71(local_e8._1_7_,(char)uVar5);
    iVar4 = rpl_fclose(_stdin);
    uVar5 = uVar5 & 0xff;
    if (iVar4 == -1) {
      pFVar12 = (FILE *)dcgettext(0,"standard input",5);
      piVar13 = __errno_location();
      error(1,*piVar13,pFVar12);
      puVar20 = (undefined1 *)pFVar16;
      pFVar15 = pFVar28;
LAB_0010202e:
      bVar24 = (byte)pFVar23;
      if ((ignore_missing != '\0') && (local_69 != '\0')) goto LAB_00101cb2;
      if (digest_hex_bytes == local_a8) {
        uVar25 = (ulong)local_a8 >> 1;
        if (uVar25 != 0) {
          uVar18 = 0;
          do {
            bVar2 = *(byte *)((long)&pFVar15->_flags + uVar18 * 2);
            puVar20 = bin2hex_0;
            uVar5 = (uint)bVar2;
            if (bVar2 - 0x41 < 0x1a) {
              uVar5 = bVar2 + 0x20;
            }
            if ((int)(char)bin2hex_0[*(byte *)(local_c0 + uVar18) >> 4] != uVar5) {
LAB_00102178:
              if (uVar25 != uVar18) goto LAB_00102054;
              break;
            }
            bVar2 = *(byte *)((long)&pFVar15->_flags + uVar18 * 2 + 1);
            uVar5 = (uint)bVar2;
            if (bVar2 - 0x41 < 0x1a) {
              uVar5 = bVar2 + 0x20;
            }
            if ((int)(char)bin2hex_0[*(byte *)(local_c0 + uVar18) & 0xf] != uVar5)
            goto LAB_00102178;
            uVar18 = uVar18 + 1;
          } while (uVar25 != uVar18);
        }
        local_82 = status_only;
        if ((status_only != 0) || (local_82 = quiet, quiet != 0)) goto LAB_00101cb2;
        local_82 = bVar24;
        if ((int)pFVar29 != 0) goto LAB_001021b5;
        local_d8 = (FILE *)((ulong)pFVar23 & 0xff);
        print_filename(pFVar17,0);
        pFVar23 = (FILE *)((ulong)pFVar23 & 0xff);
LAB_001021f6:
        if (quiet != 0) goto LAB_00101cb2;
        pcVar21 = "OK";
      }
      else {
LAB_00102054:
        pFVar23 = (FILE *)(ulong)status_only;
        local_b8 = (FILE *)((long)&local_b8->_flags + 1);
        if (status_only != 0) goto LAB_00101cb2;
        bVar24 = 0;
        if ((int)pFVar29 == 0) {
          print_filename(pFVar17,0);
        }
        else {
LAB_001021b5:
          pcVar21 = _stdout->_IO_write_ptr;
          if (pcVar21 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = pcVar21 + 1;
            *pcVar21 = '\\';
          }
          else {
            __overflow(_stdout,0x5c);
          }
          local_d8 = (FILE *)(ulong)bVar24;
          print_filename(pFVar17,1);
          pFVar23 = (FILE *)(ulong)bVar24;
          if (bVar24 != 0) goto LAB_001021f6;
        }
        pcVar21 = "FAILED";
      }
      uVar14 = dcgettext(0,pcVar21,5);
      __printf_chk(2,": %s\n",uVar14);
LAB_00101cb2:
      pFVar16 = (FILE *)puVar20;
      bVar24 = local_83;
      if ((((FILE *)__stream)->_flags & 0x30) == 0) goto LAB_00101adf;
      do {
        free(local_68);
        uVar5 = ((FILE *)__stream)->_flags & 0x20;
        pFVar15 = local_a0;
        if (local_88 == 0) {
          clearerr_unlocked((FILE *)__stream);
LAB_00101cf6:
          iVar4 = -(uint)(uVar5 == 0);
LAB_00101cfb:
          if (-1 < iVar4) {
            pFVar16 = (FILE *)quotearg_n_style_colon(0,3,local_c8);
            puVar19 = &_LC4;
            if (iVar4 == 0) goto LAB_00102489;
            goto LAB_0010244f;
          }
          if (bVar24 == 0) {
            pFVar17 = (FILE *)quotearg_n_style_colon(0,3,local_c8);
            pcVar21 = "%s: no properly formatted checksum lines found";
LAB_00102411:
            uVar14 = dcgettext(0,pcVar21,5);
            error(0,0,uVar14);
            bVar24 = 0;
          }
          else {
            if (status_only == 0) {
              if (local_98 != (FILE *)0x0) {
                pFVar23 = (FILE *)0x5;
                uVar14 = dcngettext(0,"WARNING: %ju line is improperly formatted",
                                    "WARNING: %ju lines are improperly formatted",local_98);
                pFVar17 = local_98;
                error(0,0,uVar14);
              }
              if (local_b0 != (FILE *)0x0) {
                pFVar23 = (FILE *)0x5;
                uVar14 = dcngettext(0,"WARNING: %ju listed file could not be read",
                                    "WARNING: %ju listed files could not be read",local_b0);
                pFVar17 = local_b0;
                error(0,0,uVar14);
              }
              if (local_b8 != (FILE *)0x0) {
                pFVar23 = (FILE *)0x5;
                uVar14 = dcngettext(0,"WARNING: %ju computed checksum did NOT match",
                                    "WARNING: %ju computed checksums did NOT match",local_b8);
                pFVar17 = local_b8;
                error(0,0,uVar14);
              }
              if (ignore_missing == '\0') goto LAB_00101d9d;
              if (local_82 == 0) {
                pFVar17 = (FILE *)quotearg_n_style_colon(0,3,local_c8);
                pcVar21 = "%s: no file was verified";
                goto LAB_00102411;
              }
LAB_00101d53:
              if (local_b0 == (FILE *)0x0 && local_b8 == (FILE *)0x0) {
                bVar24 = strict ^ 1 | local_98 == (FILE *)0x0;
                goto LAB_00101d77;
              }
            }
            else {
LAB_00101d9d:
              if (local_82 != 0) goto LAB_00101d53;
            }
            bVar24 = 0;
          }
LAB_00101d77:
          bVar24 = bVar24 & 1;
        }
        else {
          iVar4 = rpl_fclose();
          if (iVar4 == 0) goto LAB_00101cf6;
          if (uVar5 == 0) {
            piVar13 = __errno_location();
            iVar4 = *piVar13;
            goto LAB_00101cfb;
          }
          pFVar16 = (FILE *)quotearg_n_style_colon(0,3,local_c8);
LAB_00102489:
          iVar4 = 0;
          puVar19 = (undefined *)dcgettext(0,"%s: read error",5);
LAB_0010244f:
          pFVar17 = pFVar16;
          error(0,iVar4,puVar19);
          bVar24 = 0;
        }
        while( true ) {
          local_81 = local_81 & bVar24;
          pFVar15 = (FILE *)&pFVar15->_IO_read_ptr;
          if (local_80 <= pFVar15) {
            uVar5 = (uint)local_81;
            pFVar28 = pFVar15;
            goto LAB_001018c2;
          }
          local_c8 = *(FILE **)pFVar15;
LAB_0010191c:
          local_c0 = local_90 & 0xfffffffffffffffc;
          local_88 = strcmp((char *)local_c8,"-");
          if (local_88 == 0) break;
          __stream = (char *)fopen_safer(local_c8,&_LC3);
          if ((FILE *)__stream != (FILE *)0x0) goto LAB_0010196d;
          pFVar17 = (FILE *)quotearg_n_style_colon(0,3,local_c8);
          piVar13 = __errno_location();
          error(0,*piVar13,&_LC4);
          bVar24 = 0;
        }
        have_read_stdin = '\x01';
        local_c8 = (FILE *)dcgettext(0,"standard input",5);
        __stream = (char *)_stdin;
LAB_0010196d:
        pFVar23 = (FILE *)0x0;
        local_82 = 0;
        pFVar12 = (FILE *)0x1;
        puVar27 = (uint *)&local_60;
        local_e8 = (FILE *)&local_68;
        local_68 = (FILE *)0x0;
        local_60 = (char *)0x0;
        bVar24 = 0;
        local_b8 = (FILE *)0x0;
        local_b0 = (FILE *)0x0;
        local_98 = (FILE *)0x0;
        pFVar16 = local_e8;
        local_e0 = (FILE *)puVar27;
        local_a0 = pFVar15;
        while (pFVar17 = (FILE *)__stream,
              _Var8 = __getdelim((char **)local_e8,(size_t *)local_e0,10,(FILE *)__stream),
              puVar20 = (undefined1 *)local_68, 0 < _Var8) {
          if ((char)local_68->_flags == '#') goto LAB_00101ad0;
          lVar9 = _Var8 - (ulong)(*(char *)((long)local_68 + _Var8 + -1) == '\n');
          pFVar17 = (FILE *)(ulong)(*(char *)((long)local_68 + (lVar9 - (ulong)(0 < lVar9))) == '\r'
                                   );
          pFVar29 = (FILE *)(lVar9 - (long)pFVar17);
          if (pFVar29 == (FILE *)0x0) goto LAB_00101ad0;
          *(undefined1 *)((long)local_68 + (long)pFVar29) = 0;
          cVar3 = (char)local_68->_flags;
          if ((cVar3 == '\t') || (cVar3 == ' ')) {
            puVar27 = (uint *)0x0;
            do {
              do {
                puVar27 = (uint *)((long)&((FILE *)puVar27)->_flags + 1);
                cVar3 = *(char *)((long)&((FILE *)puVar27)->_flags + (long)&local_68->_flags);
              } while (cVar3 == ' ');
            } while (cVar3 == '\t');
            pFVar15 = (FILE *)((long)&((FILE *)puVar27)->_flags + (long)&local_68->_flags);
          }
          else {
            puVar27 = (uint *)0x0;
            pFVar15 = local_68;
          }
          local_d8 = (FILE *)0x0;
          if (cVar3 == '\\') {
            puVar27 = (uint *)((long)&((FILE *)puVar27)->_flags + 1);
            pFVar15 = (FILE *)((long)&((FILE *)puVar27)->_flags + (long)&local_68->_flags);
            local_d8 = (FILE *)(ulong)local_83;
          }
          iVar4 = strncmp((char *)pFVar15,"SHA1",4);
          if (iVar4 != 0) goto LAB_00101b28;
          cVar3 = (&((FILE *)puVar20)->field_0x4)[(long)puVar27];
          puVar10 = &((FILE *)puVar27)->field_0x4;
          if (cVar3 == ' ') {
            cVar3 = (&((FILE *)puVar20)->field_0x5)[(long)puVar27];
            puVar10 = &((FILE *)puVar27)->field_0x5;
          }
          if (cVar3 == '(') {
            pFVar29 = (FILE *)((long)pFVar29 - (long)(puVar10 + 1));
            if (pFVar29 != (FILE *)0x0) {
              pFVar17 = (FILE *)(puVar10 + 1 + (long)&((FILE *)puVar20)->_flags);
              for (pcVar21 = pFVar29[-1]._unused2 + 0x13;
                  (pcVar21 != (char *)0x0 && (pcVar21[(long)&pFVar17->_flags] != ')'));
                  pcVar21 = pcVar21 + -1) {
              }
              pcVar26 = pcVar21 + (long)&pFVar17->_flags;
              if ((*pcVar26 == ')') &&
                 ((bVar30 = (byte)local_d8 == '\0', bVar30 ||
                  (lVar9 = filename_unescape(pFVar17,pcVar21), local_d8 = pFVar17, lVar9 != 0)))) {
                *pcVar26 = '\0';
                cVar3 = ((undefined1 *)((long)&pFVar17->_flags + 1))[(long)pcVar21];
                lVar9 = (long)(pcVar21 + 1);
                if ((cVar3 == '\t') || (cVar3 == ' ')) {
                  do {
                    do {
                      lVar9 = lVar9 + 1;
                      cVar3 = *(char *)(lVar9 + (long)&pFVar17->_flags);
                    } while (cVar3 == ' ');
                  } while (cVar3 == '\t');
                }
                if (cVar3 == '=') {
                  do {
                    do {
                      lVar9 = lVar9 + 1;
                      cVar3 = *(char *)(lVar9 + (long)&pFVar17->_flags);
                    } while (cVar3 == ' ');
                  } while (cVar3 == '\t');
                  pFVar29 = (FILE *)((long)pFVar29 - lVar9);
                  local_a8 = pFVar29;
                  if (pFVar29 == digest_hex_bytes) {
                    pFVar15 = (FILE *)(lVar9 + (long)&pFVar17->_flags);
                    pFVar16 = (FILE *)0x0;
                    while( true ) {
                      bVar2 = *(byte *)((long)&pFVar16->_flags + (long)&pFVar15->_flags);
                      if (pFVar16 == pFVar29) {
                        bVar30 = bVar2 == 0;
                        goto LAB_0010224c;
                      }
                      uVar5 = bVar2 - 0x30;
                      if ((0x36 < (byte)uVar5) ||
                         ((0x7e0000007e03ffU >> ((ulong)uVar5 & 0x3f) & 1) == 0)) break;
                      pFVar16 = (FILE *)((long)&pFVar16->_flags + 1);
                    }
                  }
                }
              }
            }
          }
LAB_00101ab8:
          if (warn != '\0') {
            pFVar15 = (FILE *)quotearg_n_style_colon(0,3,local_c8);
            uVar14 = dcgettext(0,"%s: %ju: improperly formatted %s checksum line",5);
            pFVar17 = pFVar15;
            pFVar23 = pFVar12;
            error(0,0,uVar14);
          }
          local_98 = (FILE *)((long)&local_98->_flags + 1);
          pFVar16 = (FILE *)puVar20;
LAB_00101ad0:
          puVar20 = (undefined1 *)pFVar16;
          if ((((FILE *)__stream)->_flags & 0x30) != 0) break;
LAB_00101adf:
          pFVar12 = (FILE *)((long)&pFVar12->_flags + 1);
          pFVar16 = (FILE *)puVar20;
          if (pFVar12 == (FILE *)0x0) {
            pFVar12 = (FILE *)quotearg_n_style_colon(0,3,local_c8);
            uVar14 = dcgettext(0,"%s: too many checksum lines",5);
            pFVar17 = pFVar12;
            error(1,0,uVar14);
LAB_00101b28:
            cVar3 = (char)pFVar15->_flags;
            pFVar16 = (FILE *)puVar27;
            pFVar28 = pFVar15;
            if ((ulong)(cVar3 == '\\') + min_digest_line_length <=
                (ulong)((long)pFVar29 - (long)puVar27)) {
              while (((cVar3 != '\0' && (cVar3 != ' ')) && (cVar3 != '\t'))) {
                pFVar16 = (FILE *)((long)&pFVar16->_flags + 1);
                cVar3 = *(char *)((long)&pFVar16->_flags + (long)&((FILE *)puVar20)->_flags);
                pFVar28 = (FILE *)((long)&pFVar16->_flags + (long)&((FILE *)puVar20)->_flags);
              }
              if (pFVar29 != pFVar16) {
                *(undefined1 *)&pFVar28->_flags = 0;
                local_a8 = digest_hex_bytes;
                if ((FILE *)((long)pFVar16 - (long)puVar27) == digest_hex_bytes) {
                  pFVar28 = pFVar15;
                  if (digest_hex_bytes != (FILE *)0x0) {
                    pFVar28 = (FILE *)((long)&digest_hex_bytes->_flags + (long)&pFVar15->_flags);
                    pFVar17 = pFVar15;
                    do {
                      uVar5 = (byte)pFVar17->_flags - 0x30;
                      if ((0x36 < (byte)uVar5) ||
                         ((0x7e0000007e03ffU >> ((ulong)uVar5 & 0x3f) & 1) == 0)) goto LAB_00101ab8;
                      pFVar17 = (FILE *)((long)&pFVar17->_flags + 1);
                    } while (pFVar17 != pFVar28);
                  }
                  if ((char)pFVar28->_flags == '\0') {
                    puVar10 = (undefined1 *)((long)&pFVar16->_flags + 1);
                    pFVar17 = (FILE *)(ulong)bsd_reversed;
                    if (((long)pFVar29 - (long)puVar10 == 1) ||
                       ((cVar3 = ((undefined1 *)((long)&((FILE *)puVar20)->_flags + 1))
                                 [(long)pFVar16], cVar3 != ' ' && (cVar3 != '*')))) {
                      if (bsd_reversed == 0) goto LAB_00101ab8;
                      bsd_reversed = 1;
                    }
                    else if (bsd_reversed != 1) {
                      puVar10 = (undefined1 *)((long)&pFVar16->_flags + 2);
                      bsd_reversed = 0;
                    }
                    pFVar17 = (FILE *)(puVar10 + (long)&((FILE *)puVar20)->_flags);
                    if ((byte)local_d8 != '\0') {
                      lVar9 = filename_unescape(pFVar17,(long)pFVar29 - (long)puVar10);
                      bVar30 = lVar9 != 0;
                      local_d8 = pFVar17;
LAB_0010224c:
                      if (!bVar30) goto LAB_00101ab8;
                    }
                    if (((local_88 != 0) || ((char)pFVar17->_flags != '-')) ||
                       (*(char *)((long)&pFVar17->_flags + 1) != '\0')) {
                      pFVar29 = (FILE *)0x0;
                      if (status_only == 0) {
                        sVar11 = strcspn((char *)pFVar17,"\\\n\r");
                        pFVar29 = (FILE *)(ulong)(*(char *)((long)&pFVar17->_flags + sVar11) != '\0'
                                                 );
                      }
                      uVar5 = digest_file_isra_0(pFVar17,local_c0,&local_69);
                      pFVar23 = (FILE *)(ulong)uVar5;
                      local_d8 = pFVar17;
                      if ((char)uVar5 != '\0') goto LAB_0010202e;
                      if (status_only == 0) {
                        if ((int)pFVar29 != 0) {
                          pcVar21 = _stdout->_IO_write_ptr;
                          if (pcVar21 < _stdout->_IO_write_end) {
                            _stdout->_IO_write_ptr = pcVar21 + 1;
                            *pcVar21 = '\\';
                          }
                          else {
                            __overflow(_stdout,0x5c);
                          }
                        }
                        print_filename(pFVar17,pFVar29);
                        uVar14 = dcgettext(0,"FAILED open or read",5);
                        __printf_chk(2,": %s\n",uVar14);
                      }
                      local_b0 = (FILE *)((long)&local_b0->_flags + 1);
                      goto LAB_00101cb2;
                    }
                  }
                }
              }
            }
            goto LAB_00101ab8;
          }
        }
      } while( true );
    }
  }
  if (local_40 == *(char **)(in_FS_OFFSET + 0x28)) {
    return (uVar5 ^ 1) & 0xff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


