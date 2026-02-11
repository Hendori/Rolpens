
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
    iVar2 = sha256_stream(__stream,param_2);
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
    iVar2 = sha256_stream(lVar5,param_2);
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
  __printf_chk(2,uVar4,"SHA256",0x100);
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
  __printf_chk(2,uVar4,"FIPS-180-2");
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
    iVar2 = strcmp("sha256sum",pcVar5);
    if (iVar2 == 0) break;
    pcVar5 = *(char **)((long)ppuVar7 + 0x10);
    ppuVar7 = (undefined **)((long)ppuVar7 + 0x10);
  } while (pcVar5 != (char *)0x0);
  pcVar5 = *(char **)((long)ppuVar7 + 8);
  if (pcVar5 == (char *)0x0) {
    uVar4 = dcgettext(0,"\n%s online help: <%s>\n",5);
    pcVar5 = "sha256sum";
    __printf_chk(2,uVar4,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) goto LAB_0010067d;
    uVar4 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = " invocation";
    __printf_chk(2,uVar4,"https://www.gnu.org/software/coreutils/","sha256sum");
  }
  else {
    uVar4 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar4,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) {
LAB_0010067d:
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
    __printf_chk(2,uVar4,"https://www.gnu.org/software/coreutils/","sha256sum");
    if (pcVar5 == "sha256sum") {
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
  size_t sVar10;
  FILE *pFVar11;
  int *piVar12;
  undefined8 uVar13;
  FILE *pFVar14;
  undefined1 *puVar15;
  ulong uVar16;
  undefined *puVar17;
  undefined1 *puVar18;
  FILE *pFVar19;
  char *pcVar20;
  _IO_FILE *p_Var21;
  FILE *pFVar22;
  byte bVar23;
  ulong uVar24;
  char *pcVar25;
  uint *puVar26;
  char *__stream;
  undefined1 *puVar27;
  FILE *pFVar28;
  FILE *pFVar29;
  long in_FS_OFFSET;
  bool bVar30;
  FILE *local_f8;
  FILE *local_f0;
  FILE *local_e8;
  byte local_dd;
  int local_dc;
  FILE *local_d8;
  ulong local_d0;
  FILE *local_c8;
  FILE *local_c0;
  FILE *local_b8;
  FILE *local_b0;
  FILE *local_a8;
  ulong local_a0;
  int local_98;
  byte local_92;
  byte local_91;
  FILE *local_90;
  char local_79;
  FILE *local_78;
  char *local_70;
  undefined8 local_68;
  char *local_40;
  
  pFVar28 = (FILE *)&DAT_ffffffff;
  puVar27 = long_options;
  __stream = "bctwz";
  pFVar14 = (FILE *)(ulong)param_1;
  local_40 = *(char **)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils");
  puVar26 = &switchD_001014e3::switchdataD_00102520;
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  setvbuf(_stdout,(char *)0x0,1,0);
  local_f8 = (FILE *)CONCAT44(local_f8._4_4_,0xffffffff);
  local_dd = 0;
  while( true ) {
    pFVar22 = (FILE *)0x0;
    puVar15 = long_options;
    iVar4 = getopt_long(param_1,param_2,"bctwz");
    if (iVar4 == -1) break;
    if (0x84 < iVar4) goto switchD_001014e3_caseD_64;
    if (iVar4 < 0x62) {
      if (iVar4 == -0x83) {
        uVar13 = proper_name_lite("David Madore","David Madore");
        uVar6 = proper_name_lite("Scott Miller","Scott Miller");
        uVar7 = proper_name_lite("Ulrich Drepper","Ulrich Drepper");
        version_etc(_stdout,"sha256sum","GNU coreutils",_Version,uVar7,uVar6,uVar13,0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar4 == -0x82) {
        p_Var21 = (_IO_FILE *)0x0;
        usage();
        pFVar29 = pFVar28;
LAB_00102308:
        __overflow(p_Var21,0x5c);
        do {
          local_dc = 1;
          pFVar11 = (FILE *)puVar26;
          do {
            if (local_dd == 0) {
              if ((ulong)digest_hex_bytes >> 1 != 0) {
LAB_0010179f:
                puVar27 = (undefined1 *)0x0;
                do {
                  pcVar20 = (char *)((long)param_2 + (long)puVar27);
                  puVar27 = (undefined1 *)((long)&((FILE *)puVar27)->_flags + 1);
                  __printf_chk(2,pFVar14,*pcVar20);
                } while (puVar27 < (FILE *)((ulong)digest_hex_bytes >> 1));
                if (local_dd != 0) goto LAB_00101834;
              }
              pcVar20 = _stdout->_IO_write_ptr;
              if (pcVar20 < _stdout->_IO_write_end) {
                _stdout->_IO_write_ptr = pcVar20 + 1;
                *pcVar20 = ' ';
              }
              else {
                __overflow(_stdout,0x20);
              }
              iVar4 = 0x20;
              if (0 < local_98) {
                iVar4 = 0x2a;
              }
              pcVar20 = _stdout->_IO_write_ptr;
              if (pcVar20 < _stdout->_IO_write_end) {
                _stdout->_IO_write_ptr = pcVar20 + 1;
                *pcVar20 = (char)iVar4;
              }
              else {
                __overflow(_stdout,iVar4);
              }
              print_filename(__stream,local_dc);
            }
            else {
              fwrite_unlocked("SHA256",1,6,_stdout);
              fwrite_unlocked(&_LC71,1,2,_stdout);
              print_filename(__stream,local_dc);
              fwrite_unlocked(&_LC72,1,4,_stdout);
              if ((ulong)digest_hex_bytes >> 1 != 0) goto LAB_0010179f;
            }
LAB_00101834:
            pbVar1 = (byte *)_stdout->_IO_write_ptr;
            puVar26 = (uint *)pFVar11;
            if (pbVar1 < _stdout->_IO_write_end) {
              _stdout->_IO_write_ptr = (char *)(pbVar1 + 1);
              *pbVar1 = (byte)local_e8;
            }
            else {
              __overflow(_stdout,(uint)(byte)local_e8);
            }
            do {
              uVar5 = (uint)pFVar11;
              pFVar29 = (FILE *)&pFVar29->_IO_read_ptr;
              puVar15 = (undefined1 *)local_f0;
              pFVar28 = pFVar29;
              if (local_f0 <= pFVar29) goto LAB_001018b1;
              __stream = *(char **)pFVar29;
              puVar26 = (uint *)((ulong)pFVar11 & 0xffffffff);
LAB_0010175c:
              pFVar11 = (FILE *)digest_file_isra_0(__stream,param_2,local_f8);
            } while ((char)pFVar11 == '\0');
            local_dc = 0;
            local_e8 = (FILE *)(ulong)digest_delim;
            pFVar11 = (FILE *)puVar26;
          } while ((digest_delim != 10) ||
                  (sVar10 = strcspn(__stream,"\\\n\r"),
                  *(char *)((long)&((FILE *)__stream)->_flags + sVar10) == '\0'));
          pcVar20 = _stdout->_IO_write_ptr;
          p_Var21 = _stdout;
          if (_stdout->_IO_write_end <= pcVar20) goto LAB_00102308;
          _stdout->_IO_write_ptr = pcVar20 + 1;
          *pcVar20 = '\\';
        } while( true );
      }
      goto switchD_001014e3_caseD_64;
    }
    switch(iVar4) {
    case 0x62:
      pFVar28 = (FILE *)0x1;
      break;
    case 99:
      local_dd = 1;
      break;
    default:
      goto switchD_001014e3_caseD_64;
    case 0x74:
      pFVar28 = (FILE *)0x0;
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
      local_f8 = (FILE *)CONCAT44(local_f8._4_4_,1);
      pFVar28 = (FILE *)0x1;
    }
  }
  min_digest_line_length = 0x42;
  digest_hex_bytes = (FILE *)0x40;
  local_98 = (int)pFVar28;
  if ((int)local_f8 == -1) {
    bVar23 = 0;
    if (digest_delim == 10) {
LAB_00101870:
      if (-1 < local_98) {
        pcVar20 = "the --binary and --text options are meaningless when verifying checksums";
        goto joined_r0x0010188a;
      }
    }
    else {
LAB_00101630:
      pcVar20 = "the --zero option is not supported when verifying checksums";
joined_r0x0010188a:
      if (local_dd != 0) goto LAB_00101890;
    }
    if ((((ignore_missing != '\x01') ||
         (pcVar20 = "the --ignore-missing option is meaningful only when verifying checksums",
         local_dd != 0)) &&
        ((status_only != 1 ||
         (pcVar20 = "the --status option is meaningful only when verifying checksums", local_dd != 0
         )))) && ((warn != '\x01' ||
                  (pcVar20 = "the --warn option is meaningful only when verifying checksums",
                  local_dd != 0)))) {
      bVar2 = quiet ^ 1 | local_dd;
      uVar5 = (uint)bVar2;
      if (bVar2 == 0) {
        pcVar20 = "the --quiet option is meaningful only when verifying checksums";
      }
      else {
        if (((local_dd ^ 1) & strict) == 0) {
          pFVar29 = (FILE *)(param_2 + (int)param_1);
          lVar9 = (long)(int)_optind;
          puVar15 = (undefined1 *)pFVar29;
          if (_optind == param_1) {
            puVar15 = (undefined1 *)&pFVar29->_IO_read_ptr;
            *(FILE **)pFVar29 = (FILE *)&_LC53;
          }
          pFVar29 = (FILE *)(param_2 + lVar9);
          if (pFVar29 < puVar15) {
            __stream = *(char **)pFVar29;
            local_d8 = (FILE *)__stream;
            if (local_dd != 0) {
              local_a0 = (long)&local_68 + 3;
              local_91 = local_dd;
              local_90 = (FILE *)puVar15;
              goto LAB_0010190b;
            }
            local_f8 = (FILE *)&local_70;
            puVar26 = (uint *)(ulong)uVar5;
            param_2 = &local_68;
            pFVar14 = (FILE *)&_LC73;
            local_f0 = (FILE *)puVar15;
            local_dd = bVar23;
            goto LAB_0010175c;
          }
          goto LAB_001018b1;
        }
        pcVar20 = "the --strict option is meaningful only when verifying checksums";
      }
    }
  }
  else if (local_98 == 0) {
    pcVar20 = "--tag does not support --text mode";
  }
  else {
    bVar23 = 1;
    if (digest_delim != 10) goto LAB_00101630;
    pcVar20 = "the --tag option is meaningless when verifying checksums";
    if (local_dd == 0) goto LAB_00101870;
  }
LAB_00101890:
  uVar13 = dcgettext(0,pcVar20,5);
  error(0,0,uVar13);
switchD_001014e3_caseD_64:
  uVar5 = usage(1);
LAB_001018b1:
  pFVar29 = pFVar28;
  if (have_read_stdin != '\0') {
    local_f8 = (FILE *)CONCAT71(local_f8._1_7_,(char)uVar5);
    iVar4 = rpl_fclose(_stdin);
    uVar5 = uVar5 & 0xff;
    if (iVar4 == -1) {
      pFVar28 = (FILE *)dcgettext(0,"standard input",5);
      piVar12 = __errno_location();
      error(1,*piVar12,pFVar28);
      puVar18 = (undefined1 *)pFVar14;
LAB_0010201b:
      bVar23 = (byte)pFVar22;
      if ((ignore_missing != '\0') && (local_79 != '\0')) goto LAB_00101caa;
      if (local_b8 == digest_hex_bytes) {
        uVar24 = (ulong)local_b8 >> 1;
        if (uVar24 != 0) {
          uVar16 = 0;
          do {
            bVar2 = *(byte *)((long)&pFVar29->_flags + uVar16 * 2);
            puVar18 = bin2hex_0;
            uVar5 = (uint)bVar2;
            if (bVar2 - 0x41 < 0x1a) {
              uVar5 = bVar2 + 0x20;
            }
            if ((int)(char)bin2hex_0[*(byte *)(local_d0 + uVar16) >> 4] != uVar5) {
LAB_00102180:
              if (uVar24 != uVar16) goto LAB_00102041;
              break;
            }
            bVar2 = *(byte *)((long)&pFVar29->_flags + uVar16 * 2 + 1);
            uVar5 = (uint)bVar2;
            if (bVar2 - 0x41 < 0x1a) {
              uVar5 = bVar2 + 0x20;
            }
            if ((int)(char)bin2hex_0[*(byte *)(local_d0 + uVar16) & 0xf] != uVar5)
            goto LAB_00102180;
            uVar16 = uVar16 + 1;
          } while (uVar24 != uVar16);
        }
        local_92 = status_only;
        if ((status_only != 0) || (local_92 = quiet, quiet != 0)) goto LAB_00101caa;
        local_92 = bVar23;
        if ((int)puVar27 != 0) goto LAB_001021bd;
        local_e8 = (FILE *)((ulong)pFVar22 & 0xff);
        print_filename(puVar15,0);
        pFVar22 = (FILE *)((ulong)pFVar22 & 0xff);
LAB_001021fe:
        if (quiet != 0) goto LAB_00101caa;
        pcVar20 = "OK";
      }
      else {
LAB_00102041:
        pFVar22 = (FILE *)(ulong)status_only;
        local_c8 = (FILE *)((long)&local_c8->_flags + 1);
        if (status_only != 0) goto LAB_00101caa;
        bVar23 = 0;
        if ((int)puVar27 == 0) {
          print_filename(puVar15,0);
        }
        else {
LAB_001021bd:
          pcVar20 = _stdout->_IO_write_ptr;
          if (pcVar20 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = pcVar20 + 1;
            *pcVar20 = '\\';
          }
          else {
            __overflow(_stdout,0x5c);
          }
          local_e8 = (FILE *)(ulong)bVar23;
          print_filename(puVar15,1);
          pFVar22 = (FILE *)(ulong)bVar23;
          if (bVar23 != 0) goto LAB_001021fe;
        }
        pcVar20 = "FAILED";
      }
      uVar13 = dcgettext(0,pcVar20,5);
      __printf_chk(2,": %s\n",uVar13);
LAB_00101caa:
      pFVar11 = (FILE *)puVar15;
      pFVar14 = (FILE *)puVar18;
      bVar23 = local_dd;
      if ((((FILE *)__stream)->_flags & 0x30) == 0) goto LAB_00101acf;
      do {
        free(local_78);
        uVar5 = ((FILE *)__stream)->_flags & 0x20;
        pFVar29 = local_b0;
        if (local_dc == 0) {
          clearerr_unlocked((FILE *)__stream);
LAB_00101cee:
          iVar4 = -(uint)(uVar5 == 0);
LAB_00101cf3:
          if (-1 < iVar4) {
            pFVar14 = (FILE *)quotearg_n_style_colon(0,3,local_d8);
            puVar17 = &_LC4;
            if (iVar4 == 0) goto LAB_00102488;
            goto LAB_0010243d;
          }
          if (bVar23 == 0) {
            pFVar11 = (FILE *)quotearg_n_style_colon(0,3,local_d8);
            pcVar20 = "%s: no properly formatted checksum lines found";
LAB_001023ff:
            uVar13 = dcgettext(0,pcVar20,5);
            error(0,0,uVar13);
            bVar23 = 0;
          }
          else {
            if (status_only == 0) {
              if (local_a8 != (FILE *)0x0) {
                pFVar22 = (FILE *)0x5;
                uVar13 = dcngettext(0,"WARNING: %ju line is improperly formatted",
                                    "WARNING: %ju lines are improperly formatted",local_a8);
                pFVar11 = local_a8;
                error(0,0,uVar13);
              }
              if (local_c0 != (FILE *)0x0) {
                pFVar22 = (FILE *)0x5;
                uVar13 = dcngettext(0,"WARNING: %ju listed file could not be read",
                                    "WARNING: %ju listed files could not be read",local_c0);
                pFVar11 = local_c0;
                error(0,0,uVar13);
              }
              if (local_c8 != (FILE *)0x0) {
                pFVar22 = (FILE *)0x5;
                uVar13 = dcngettext(0,"WARNING: %ju computed checksum did NOT match",
                                    "WARNING: %ju computed checksums did NOT match",local_c8);
                pFVar11 = local_c8;
                error(0,0,uVar13);
              }
              if (ignore_missing == '\0') goto LAB_00101d95;
              if (local_92 == 0) {
                pFVar11 = (FILE *)quotearg_n_style_colon(0,3,local_d8);
                pcVar20 = "%s: no file was verified";
                goto LAB_001023ff;
              }
LAB_00101d4b:
              if (local_c0 == (FILE *)0x0 && local_c8 == (FILE *)0x0) {
                bVar23 = strict ^ 1 | local_a8 == (FILE *)0x0;
                goto LAB_00101d6f;
              }
            }
            else {
LAB_00101d95:
              if (local_92 != 0) goto LAB_00101d4b;
            }
            bVar23 = 0;
          }
LAB_00101d6f:
          bVar23 = bVar23 & 1;
        }
        else {
          iVar4 = rpl_fclose();
          if (iVar4 == 0) goto LAB_00101cee;
          if (uVar5 == 0) {
            piVar12 = __errno_location();
            iVar4 = *piVar12;
            goto LAB_00101cf3;
          }
          pFVar14 = (FILE *)quotearg_n_style_colon(0,3,local_d8);
LAB_00102488:
          iVar4 = 0;
          puVar17 = (undefined *)dcgettext(0,"%s: read error",5);
LAB_0010243d:
          pFVar11 = pFVar14;
          error(0,iVar4,puVar17);
          bVar23 = 0;
        }
        while( true ) {
          local_91 = local_91 & bVar23;
          pFVar29 = (FILE *)&pFVar29->_IO_read_ptr;
          if (local_90 <= pFVar29) {
            uVar5 = (uint)local_91;
            puVar15 = (undefined1 *)pFVar11;
            pFVar28 = pFVar29;
            goto LAB_001018b1;
          }
          local_d8 = *(FILE **)pFVar29;
LAB_0010190b:
          local_d0 = local_a0 & 0xfffffffffffffffc;
          local_dc = strcmp((char *)local_d8,"-");
          if (local_dc == 0) break;
          __stream = (char *)fopen_safer(local_d8,&_LC3);
          if ((FILE *)__stream != (FILE *)0x0) goto LAB_0010195c;
          pFVar11 = (FILE *)quotearg_n_style_colon(0,3,local_d8);
          piVar12 = __errno_location();
          error(0,*piVar12,&_LC4);
          bVar23 = 0;
        }
        have_read_stdin = '\x01';
        local_d8 = (FILE *)dcgettext(0,"standard input",5);
        __stream = (char *)_stdin;
LAB_0010195c:
        pFVar22 = (FILE *)0x0;
        local_92 = 0;
        puVar26 = (uint *)&local_70;
        local_f8 = (FILE *)&local_78;
        local_78 = (FILE *)0x0;
        pFVar28 = (FILE *)0x1;
        local_70 = (char *)0x0;
        bVar23 = 0;
        local_c8 = (FILE *)0x0;
        local_c0 = (FILE *)0x0;
        local_a8 = (FILE *)0x0;
        pFVar14 = local_f8;
        local_f0 = (FILE *)puVar26;
        local_b0 = pFVar29;
        while (pFVar11 = (FILE *)__stream,
              _Var8 = __getdelim((char **)local_f8,(size_t *)local_f0,10,(FILE *)__stream),
              puVar18 = (undefined1 *)local_78, 0 < _Var8) {
          if ((char)local_78->_flags == '#') goto LAB_00101ac0;
          lVar9 = _Var8 - (ulong)(*(char *)((long)local_78 + _Var8 + -1) == '\n');
          pFVar11 = (FILE *)(ulong)(*(char *)((long)local_78 + (lVar9 - (ulong)(0 < lVar9))) == '\r'
                                   );
          puVar27 = (undefined1 *)(lVar9 - (long)pFVar11);
          if ((FILE *)puVar27 == (FILE *)0x0) goto LAB_00101ac0;
          *(char *)((long)local_78 + (long)puVar27) = '\0';
          puVar26 = (uint *)0x0;
          cVar3 = (char)local_78->_flags;
          if ((cVar3 == '\t') || (cVar3 == ' ')) {
            do {
              do {
                puVar26 = (uint *)((long)&((FILE *)puVar26)->_flags + 1);
                cVar3 = *(char *)((long)&((FILE *)puVar26)->_flags + (long)&local_78->_flags);
              } while (cVar3 == ' ');
            } while (cVar3 == '\t');
          }
          local_e8 = (FILE *)0x0;
          if (cVar3 == '\\') {
            puVar26 = (uint *)((long)&((FILE *)puVar26)->_flags + 1);
            local_e8 = (FILE *)(ulong)local_dd;
          }
          pFVar29 = (FILE *)((long)&((FILE *)puVar26)->_flags + (long)&local_78->_flags);
          iVar4 = strncmp((char *)pFVar29,"SHA256",6);
          if (iVar4 != 0) goto LAB_00101b18;
          cVar3 = (&((FILE *)puVar18)->field_0x6)[(long)puVar26];
          puVar15 = &((FILE *)puVar26)->field_0x6;
          if (cVar3 == ' ') {
            cVar3 = (&((FILE *)puVar18)->field_0x7)[(long)puVar26];
            puVar15 = &((FILE *)puVar26)->field_0x7;
          }
          if (cVar3 == '(') {
            puVar27 = (undefined1 *)((long)puVar27 - (long)(puVar15 + 1));
            if ((FILE *)puVar27 != (FILE *)0x0) {
              pFVar11 = (FILE *)(puVar15 + 1 + (long)&((FILE *)puVar18)->_flags);
              for (pcVar20 = ((FILE *)((long)puVar27 + -0xd8))->_unused2 + 0x13;
                  (pcVar20 != (char *)0x0 && (pcVar20[(long)&pFVar11->_flags] != ')'));
                  pcVar20 = pcVar20 + -1) {
              }
              pcVar25 = pcVar20 + (long)&pFVar11->_flags;
              if ((*pcVar25 == ')') &&
                 ((bVar30 = (byte)local_e8 == '\0', bVar30 ||
                  (lVar9 = filename_unescape(pFVar11,pcVar20), local_e8 = pFVar11, lVar9 != 0)))) {
                *pcVar25 = '\0';
                cVar3 = ((char *)((long)&pFVar11->_flags + 1))[(long)pcVar20];
                lVar9 = (long)(pcVar20 + 1);
                if (cVar3 != ' ') goto LAB_00101e7d;
                do {
                  do {
                    lVar9 = lVar9 + 1;
                    cVar3 = *(char *)(lVar9 + (long)&pFVar11->_flags);
                  } while (cVar3 == ' ');
LAB_00101e7d:
                } while (cVar3 == '\t');
                if (cVar3 == '=') {
                  do {
                    do {
                      lVar9 = lVar9 + 1;
                      cVar3 = *(char *)(lVar9 + (long)&pFVar11->_flags);
                    } while (cVar3 == ' ');
                  } while (cVar3 == '\t');
                  puVar27 = (undefined1 *)((long)puVar27 - lVar9);
                  local_b8 = (FILE *)puVar27;
                  if ((FILE *)puVar27 == digest_hex_bytes) {
                    pFVar29 = (FILE *)(lVar9 + (long)&pFVar11->_flags);
                    pFVar14 = (FILE *)0x0;
                    while( true ) {
                      bVar2 = *(byte *)((long)&pFVar14->_flags + (long)&pFVar29->_flags);
                      if ((FILE *)puVar27 == pFVar14) {
                        bVar30 = bVar2 == 0;
                        goto LAB_0010223a;
                      }
                      uVar5 = bVar2 - 0x30;
                      if ((0x36 < (byte)uVar5) ||
                         ((0x7e0000007e03ffU >> ((ulong)uVar5 & 0x3f) & 1) == 0)) break;
                      pFVar14 = (FILE *)((long)&pFVar14->_flags + 1);
                    }
                  }
                }
              }
            }
          }
LAB_00101aa3:
          if (warn != '\0') {
            puVar27 = (undefined1 *)quotearg_n_style_colon(0,3,local_d8);
            uVar13 = dcgettext(0,"%s: %ju: improperly formatted %s checksum line",5);
            pFVar11 = (FILE *)puVar27;
            pFVar22 = pFVar28;
            error(0,0,uVar13);
          }
          local_a8 = (FILE *)((long)&local_a8->_flags + 1);
          pFVar14 = (FILE *)puVar18;
LAB_00101ac0:
          puVar18 = (undefined1 *)pFVar14;
          if ((((FILE *)__stream)->_flags & 0x30) != 0) break;
LAB_00101acf:
          pFVar28 = (FILE *)((long)&pFVar28->_flags + 1);
          pFVar14 = (FILE *)puVar18;
          if (pFVar28 == (FILE *)0x0) {
            pFVar28 = (FILE *)quotearg_n_style_colon(0,3,local_d8);
            uVar13 = dcgettext(0,"%s: too many checksum lines",5);
            pFVar11 = pFVar28;
            error(1,0,uVar13);
LAB_00101b18:
            cVar3 = (char)pFVar29->_flags;
            if ((ulong)(cVar3 == '\\') + min_digest_line_length <=
                (ulong)((long)puVar27 - (long)puVar26)) {
              pFVar14 = (FILE *)puVar26;
              pFVar19 = pFVar29;
              while (((cVar3 != '\0' && (cVar3 != ' ')) && (cVar3 != '\t'))) {
                pFVar14 = (FILE *)((long)&pFVar14->_flags + 1);
                pFVar19 = (FILE *)((long)pFVar19 +
                                  ((long)((char *)((long)&((FILE *)puVar18)->_flags + 1) +
                                         (long)puVar26) - (long)pFVar29));
                cVar3 = *(char *)((long)&pFVar14->_flags + (long)&((FILE *)puVar18)->_flags);
              }
              if ((FILE *)puVar27 != pFVar14) {
                *(char *)&pFVar19->_flags = '\0';
                local_b8 = digest_hex_bytes;
                if ((FILE *)((long)pFVar14 - (long)puVar26) == digest_hex_bytes) {
                  pFVar19 = pFVar29;
                  if (digest_hex_bytes != (FILE *)0x0) {
                    pFVar19 = (FILE *)((long)&digest_hex_bytes->_flags + (long)&pFVar29->_flags);
                    pFVar11 = pFVar29;
                    do {
                      uVar5 = (byte)pFVar11->_flags - 0x30;
                      if ((0x36 < (byte)uVar5) ||
                         ((0x7e0000007e03ffU >> ((ulong)uVar5 & 0x3f) & 1) == 0)) goto LAB_00101aa3;
                      pFVar11 = (FILE *)((long)&pFVar11->_flags + 1);
                    } while (pFVar19 != pFVar11);
                  }
                  if ((char)pFVar19->_flags == '\0') {
                    pcVar20 = (char *)((long)&pFVar14->_flags + 1);
                    pFVar11 = (FILE *)(ulong)bsd_reversed;
                    if (((long)puVar27 - (long)pcVar20 == 1) ||
                       ((cVar3 = ((char *)((long)&((FILE *)puVar18)->_flags + 1))[(long)pFVar14],
                        cVar3 != ' ' && (cVar3 != '*')))) {
                      if (bsd_reversed == 0) goto LAB_00101aa3;
                      bsd_reversed = 1;
                    }
                    else if (bsd_reversed != 1) {
                      pcVar20 = (char *)((long)&pFVar14->_flags + 2);
                      bsd_reversed = 0;
                    }
                    pFVar11 = (FILE *)(pcVar20 + (long)&((FILE *)puVar18)->_flags);
                    if ((byte)local_e8 != '\0') {
                      lVar9 = filename_unescape(pFVar11,(long)puVar27 - (long)pcVar20);
                      bVar30 = lVar9 != 0;
                      local_e8 = pFVar11;
LAB_0010223a:
                      if (!bVar30) goto LAB_00101aa3;
                    }
                    if (((local_dc != 0) || ((char)pFVar11->_flags != '-')) ||
                       (*(char *)((long)&pFVar11->_flags + 1) != '\0')) {
                      puVar27 = (undefined1 *)0x0;
                      if (status_only == 0) {
                        sVar10 = strcspn((char *)pFVar11,"\\\n\r");
                        puVar27 = (undefined1 *)
                                  (ulong)(*(char *)((long)&pFVar11->_flags + sVar10) != '\0');
                      }
                      uVar5 = digest_file_isra_0(pFVar11,local_d0,&local_79);
                      pFVar22 = (FILE *)(ulong)uVar5;
                      puVar15 = (undefined1 *)pFVar11;
                      local_e8 = pFVar11;
                      if ((char)uVar5 != '\0') goto LAB_0010201b;
                      if (status_only == 0) {
                        if ((int)puVar27 != 0) {
                          pcVar20 = _stdout->_IO_write_ptr;
                          if (pcVar20 < _stdout->_IO_write_end) {
                            _stdout->_IO_write_ptr = pcVar20 + 1;
                            *pcVar20 = '\\';
                          }
                          else {
                            __overflow(_stdout,0x5c);
                          }
                        }
                        print_filename(pFVar11,puVar27);
                        uVar13 = dcgettext(0,"FAILED open or read",5);
                        __printf_chk(2,": %s\n",uVar13);
                      }
                      local_c0 = (FILE *)((long)&local_c0->_flags + 1);
                      goto LAB_00101caa;
                    }
                  }
                }
              }
            }
            goto LAB_00101aa3;
          }
        }
      } while( true );
    }
  }
  if (local_40 != *(char **)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (uVar5 ^ 1) & 0xff;
}


