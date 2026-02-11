
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
    iVar2 = md5_stream(__stream,param_2);
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
    iVar2 = md5_stream(lVar5,param_2);
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
  __printf_chk(2,uVar4,&_LC13,0x80);
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
  __printf_chk(2,uVar4,"RFC 1321");
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
    iVar2 = strcmp("md5sum",pcVar5);
    if (iVar2 == 0) break;
    pcVar5 = *(char **)((long)ppuVar7 + 0x10);
    ppuVar7 = (undefined **)((long)ppuVar7 + 0x10);
  } while (pcVar5 != (char *)0x0);
  pcVar5 = *(char **)((long)ppuVar7 + 8);
  if (pcVar5 == (char *)0x0) {
    uVar4 = dcgettext(0,"\n%s online help: <%s>\n",5);
    pcVar5 = "md5sum";
    __printf_chk(2,uVar4,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) goto LAB_00100685;
    uVar4 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = " invocation";
    __printf_chk(2,uVar4,"https://www.gnu.org/software/coreutils/","md5sum");
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
    __printf_chk(2,uVar4,"https://www.gnu.org/software/coreutils/","md5sum");
    if (pcVar5 == "md5sum") {
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
  FILE *pFVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  byte bVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char **ppcVar10;
  __ssize_t _Var11;
  long lVar12;
  size_t sVar13;
  ulong uVar14;
  ulong uVar15;
  int *piVar16;
  undefined8 uVar17;
  FILE *__lineptr;
  undefined1 *__s;
  undefined1 uVar18;
  long lVar19;
  undefined *puVar20;
  char cVar21;
  byte *pbVar22;
  char *pcVar23;
  long lVar24;
  _IO_FILE *p_Var25;
  ulong in_R10;
  byte *pbVar26;
  uint *puVar27;
  char *__stream;
  undefined1 *puVar28;
  char **ppcVar29;
  byte *pbVar30;
  long in_FS_OFFSET;
  bool bVar31;
  undefined1 auVar32 [16];
  char **local_e0;
  FILE *local_d8;
  FILE *local_d0;
  FILE *local_c8;
  undefined8 local_c0;
  ulong local_b8;
  FILE *local_b0;
  FILE *local_a8;
  FILE *local_a0;
  FILE *local_98;
  ulong local_90;
  byte local_82;
  byte local_81;
  FILE *local_80;
  char local_69;
  FILE *local_68;
  char *local_60;
  undefined8 local_58;
  char *local_40;
  
  pbVar30 = &DAT_ffffffff;
  puVar28 = long_options;
  __stream = "bctwz";
  __lineptr = (FILE *)(ulong)param_1;
  local_40 = *(char **)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils");
  puVar27 = &switchD_001014e3::switchdataD_00102520;
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  setvbuf(_stdout,(char *)0x0,1,0);
  local_d8 = (FILE *)CONCAT44(local_d8._4_4_,0xffffffff);
  local_e0 = (char **)((ulong)local_e0 & 0xffffffffffffff00);
  while( true ) {
    __s = long_options;
    iVar6 = getopt_long(param_1,param_2,"bctwz");
    if (iVar6 == -1) break;
    if (0x84 < iVar6) goto switchD_001014e3_caseD_64;
    if (iVar6 < 0x62) {
      if (iVar6 == -0x83) {
        uVar17 = proper_name_lite("David Madore","David Madore");
        uVar8 = proper_name_lite("Scott Miller","Scott Miller");
        uVar9 = proper_name_lite("Ulrich Drepper","Ulrich Drepper");
        version_etc(_stdout,"md5sum","GNU coreutils",_Version,uVar9,uVar8,uVar17,0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar6 == -0x82) {
        p_Var25 = (_IO_FILE *)0x0;
        usage();
        ppcVar29 = (char **)puVar27;
LAB_001022d2:
        __overflow(p_Var25,0x5c);
        do {
          local_c0 = 1;
          ppcVar10 = ppcVar29;
          do {
            if ((char)local_d0 == '\0') {
              if (digest_hex_bytes >> 1 != 0) {
LAB_00101771:
                pbVar30 = (byte *)0x0;
                do {
                  pbVar26 = (byte *)((long)param_2 + (long)pbVar30);
                  pbVar30 = pbVar30 + 1;
                  __printf_chk(2,__lineptr,*pbVar26);
                } while (pbVar30 < (byte *)(digest_hex_bytes >> 1));
                if ((char)local_d0 != '\0') goto LAB_00101804;
              }
              pcVar23 = _stdout->_IO_write_ptr;
              if (pcVar23 < _stdout->_IO_write_end) {
                _stdout->_IO_write_ptr = pcVar23 + 1;
                *pcVar23 = ' ';
              }
              else {
                __overflow(_stdout,0x20);
              }
              iVar6 = 0x20;
              if (0 < (int)local_b8) {
                iVar6 = 0x2a;
              }
              pcVar23 = _stdout->_IO_write_ptr;
              if (pcVar23 < _stdout->_IO_write_end) {
                _stdout->_IO_write_ptr = pcVar23 + 1;
                *pcVar23 = (char)iVar6;
              }
              else {
                __overflow(_stdout,iVar6);
              }
              print_filename(__stream,local_c0);
            }
            else {
              fwrite_unlocked(&_LC13,1,3,_stdout);
              fwrite_unlocked(&_LC72,1,2,_stdout);
              print_filename(__stream,local_c0);
              __s = (undefined1 *)_stdout;
              fwrite_unlocked(&_LC73,1,4,_stdout);
              if (digest_hex_bytes >> 1 != 0) goto LAB_00101771;
            }
LAB_00101804:
            pbVar26 = (byte *)_stdout->_IO_write_ptr;
            puVar27 = (uint *)ppcVar10;
            if (pbVar26 < _stdout->_IO_write_end) {
              _stdout->_IO_write_ptr = (char *)(pbVar26 + 1);
              *pbVar26 = (byte)local_c8;
            }
            else {
              __overflow(_stdout,(uint)(byte)local_c8);
            }
            do {
              uVar7 = (uint)ppcVar10;
              puVar28 = (undefined1 *)&((FILE *)puVar28)->_IO_read_ptr;
              if (local_d8 <= puVar28) goto LAB_0010187f;
              __stream = *(char **)puVar28;
              ppcVar29 = (char **)((ulong)ppcVar10 & 0xffffffff);
LAB_0010172d:
              ppcVar10 = (char **)digest_file_isra_0(__stream,param_2,local_e0);
              puVar27 = (uint *)ppcVar29;
            } while ((char)ppcVar10 == '\0');
            local_c0 = 0;
            local_c8 = (FILE *)(ulong)digest_delim;
            ppcVar10 = ppcVar29;
          } while ((digest_delim != 10) ||
                  (sVar13 = strcspn(__stream,"\\\n\r"),
                  *(char *)((long)&((FILE *)__stream)->_flags + sVar13) == '\0'));
          pcVar23 = _stdout->_IO_write_ptr;
          p_Var25 = _stdout;
          if (_stdout->_IO_write_end <= pcVar23) goto LAB_001022d2;
          _stdout->_IO_write_ptr = pcVar23 + 1;
          *pcVar23 = '\\';
        } while( true );
      }
      goto switchD_001014e3_caseD_64;
    }
    switch(iVar6) {
    case 0x62:
      pbVar30 = (byte *)0x1;
      break;
    case 99:
      local_e0 = (char **)CONCAT71(local_e0._1_7_,1);
      break;
    default:
      goto switchD_001014e3_caseD_64;
    case 0x74:
      pbVar30 = (byte *)0x0;
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
      local_d8 = (FILE *)CONCAT44(local_d8._4_4_,1);
      pbVar30 = (byte *)0x1;
    }
  }
  min_digest_line_length = 0x22;
  digest_hex_bytes = 0x20;
  iVar6 = (int)pbVar30;
  if ((int)local_d8 == -1) {
    uVar18 = 0;
    if (digest_delim == 10) {
LAB_00101840:
      if ((iVar6 < 0) || ((byte)local_e0 == 0)) {
LAB_0010163b:
        if ((ignore_missing == '\x01') && ((byte)local_e0 == 0)) {
          pcVar23 = "the --ignore-missing option is meaningful only when verifying checksums";
        }
        else if ((status_only == 1) && ((byte)local_e0 == 0)) {
          pcVar23 = "the --status option is meaningful only when verifying checksums";
        }
        else if ((warn == '\x01') && ((byte)local_e0 == 0)) {
          pcVar23 = "the --warn option is meaningful only when verifying checksums";
        }
        else {
          bVar5 = quiet ^ 1 | (byte)local_e0;
          ppcVar29 = (char **)(ulong)bVar5;
          if (bVar5 == 0) {
            pcVar23 = "the --quiet option is meaningful only when verifying checksums";
          }
          else {
            if ((((byte)local_e0 ^ 1) & strict) == 0) {
              pFVar1 = (FILE *)(param_2 + (int)param_1);
              lVar12 = (long)(int)_optind;
              __s = (undefined1 *)pFVar1;
              if (_optind == param_1) {
                __s = (undefined1 *)&pFVar1->_IO_read_ptr;
                *(undefined **)pFVar1 = &_LC54;
              }
              puVar28 = (undefined1 *)(param_2 + lVar12);
              if (puVar28 < __s) {
                __stream = *(char **)puVar28;
                local_c8 = (FILE *)__stream;
                if ((byte)local_e0 == 0) {
                  local_e0 = &local_60;
                  local_d0 = (FILE *)CONCAT71(local_d0._1_7_,uVar18);
                  param_2 = &local_58;
                  __lineptr = (FILE *)&_LC74;
                  local_b8 = CONCAT44(local_b8._4_4_,iVar6);
                  local_d8 = (FILE *)__s;
                  goto LAB_0010172d;
                }
                local_90 = (long)&local_58 + 3;
                local_81 = (byte)local_e0;
                local_80 = (FILE *)__s;
                goto LAB_001018e0;
              }
              goto LAB_00101882;
            }
            pcVar23 = "the --strict option is meaningful only when verifying checksums";
          }
        }
      }
      else {
        pcVar23 = "the --binary and --text options are meaningless when verifying checksums";
      }
    }
    else {
LAB_00101630:
      if ((byte)local_e0 == 0) goto LAB_0010163b;
      pcVar23 = "the --zero option is not supported when verifying checksums";
    }
  }
  else if (iVar6 == 0) {
    pcVar23 = "--tag does not support --text mode";
  }
  else {
    uVar18 = 1;
    if (digest_delim != 10) goto LAB_00101630;
    if ((byte)local_e0 == 0) goto LAB_00101840;
    pcVar23 = "the --tag option is meaningless when verifying checksums";
  }
  uVar17 = dcgettext(0,pcVar23,5);
  error(0,0,uVar17);
switchD_001014e3_caseD_64:
  uVar7 = usage(1);
LAB_0010187f:
  ppcVar29 = (char **)(ulong)uVar7;
LAB_00101882:
  if ((have_read_stdin == '\0') || (iVar6 = rpl_fclose(_stdin), iVar6 != -1)) {
    if (local_40 == *(char **)(in_FS_OFFSET + 0x28)) {
      return ((uint)ppcVar29 ^ 1) & 0xff;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  uVar15 = dcgettext(0,"standard input",5);
  piVar16 = __errno_location();
  error(1,*piVar16,uVar15);
LAB_00101fe9:
  bVar5 = (byte)in_R10;
  if ((ignore_missing != '\0') && (local_69 != '\0')) goto LAB_00101c82;
  if (uVar15 == digest_hex_bytes) {
    uVar15 = uVar15 >> 1;
    if (uVar15 != 0) {
      uVar14 = 0;
      do {
        bVar2 = pbVar30[uVar14 * 2];
        uVar7 = (uint)bVar2;
        if (bVar2 - 0x41 < 0x1a) {
          uVar7 = bVar2 + 0x20;
        }
        if ((int)(char)bin2hex_0[*(byte *)(local_b8 + uVar14) >> 4] != uVar7) {
LAB_00102148:
          if (uVar15 != uVar14) goto LAB_0010200a;
          break;
        }
        bVar2 = pbVar30[uVar14 * 2 + 1];
        uVar7 = (uint)bVar2;
        if (bVar2 - 0x41 < 0x1a) {
          uVar7 = bVar2 + 0x20;
        }
        if ((int)(char)bin2hex_0[*(byte *)(local_b8 + uVar14) & 0xf] != uVar7) goto LAB_00102148;
        uVar14 = uVar14 + 1;
      } while (uVar15 != uVar14);
    }
    local_82 = status_only;
    if ((status_only != 0) || (local_82 = quiet, quiet != 0)) goto LAB_00101c82;
    local_82 = bVar5;
    if ((int)local_d0 != 0) goto LAB_00102187;
    local_d0 = (FILE *)CONCAT71(local_d0._1_7_,bVar5);
    print_filename(__s,0);
    in_R10 = in_R10 & 0xff;
LAB_001021c8:
    if (quiet != 0) goto LAB_00101c82;
    pcVar23 = "OK";
  }
  else {
LAB_0010200a:
    in_R10 = (ulong)status_only;
    local_b0 = (FILE *)((long)&local_b0->_flags + 1);
    if (status_only != 0) goto LAB_00101c82;
    bVar5 = 0;
    if ((int)local_d0 == 0) {
      print_filename(__s,0);
    }
    else {
LAB_00102187:
      pcVar23 = _stdout->_IO_write_ptr;
      if (pcVar23 < _stdout->_IO_write_end) {
        _stdout->_IO_write_ptr = pcVar23 + 1;
        *pcVar23 = '\\';
      }
      else {
        __overflow(_stdout,0x5c);
        local_d0 = (FILE *)__s;
      }
      local_d0 = (FILE *)CONCAT71(local_d0._1_7_,bVar5);
      print_filename(__s,1);
      in_R10 = (ulong)bVar5;
      if (bVar5 != 0) goto LAB_001021c8;
    }
    pcVar23 = "FAILED";
  }
  uVar17 = dcgettext(0,pcVar23,5);
  __printf_chk(2,": %s\n",uVar17);
LAB_00101c82:
  local_d0 = (FILE *)CONCAT71(local_d0._1_7_,(byte)local_e0);
  if ((((FILE *)__stream)->_flags & 0x30) == 0) goto LAB_00101a9f;
  do {
    free(local_68);
    uVar7 = ((FILE *)__stream)->_flags & 0x20;
    puVar28 = (undefined1 *)local_a0;
    if ((int)local_d8 == 0) {
      clearerr_unlocked((FILE *)__stream);
LAB_00101cc6:
      iVar6 = -(uint)(uVar7 == 0);
LAB_00101ccb:
      if (-1 < iVar6) {
        __lineptr = (FILE *)quotearg_n_style_colon(0,3,local_c8);
        puVar20 = &_LC4;
        if (iVar6 == 0) goto LAB_00102348;
        goto LAB_00102360;
      }
      if ((char)local_d0 == '\0') {
        __s = (undefined1 *)quotearg_n_style_colon(0,3,local_c8);
        pcVar23 = "%s: no properly formatted checksum lines found";
LAB_00102430:
        uVar17 = dcgettext(0,pcVar23,5);
        error(0,0,uVar17);
        bVar5 = 0;
      }
      else {
        if (status_only == 0) {
          if (local_98 != (FILE *)0x0) {
            uVar17 = dcngettext(0,"WARNING: %ju line is improperly formatted",
                                "WARNING: %ju lines are improperly formatted",local_98);
            __s = (undefined1 *)local_98;
            error(0,0,uVar17);
          }
          if (local_a8 != (FILE *)0x0) {
            uVar17 = dcngettext(0,"WARNING: %ju listed file could not be read",
                                "WARNING: %ju listed files could not be read",local_a8);
            __s = (undefined1 *)local_a8;
            error(0,0,uVar17);
          }
          if (local_b0 != (FILE *)0x0) {
            uVar17 = dcngettext(0,"WARNING: %ju computed checksum did NOT match",
                                "WARNING: %ju computed checksums did NOT match",local_b0);
            __s = (undefined1 *)local_b0;
            error(0,0,uVar17);
          }
          if (ignore_missing == '\0') goto LAB_00101d6d;
          if (local_82 == 0) {
            __s = (undefined1 *)quotearg_n_style_colon(0,3,local_c8);
            pcVar23 = "%s: no file was verified";
            goto LAB_00102430;
          }
LAB_00101d23:
          if (local_a8 == (FILE *)0x0 && local_b0 == (FILE *)0x0) {
            bVar5 = strict ^ 1 | local_98 == (FILE *)0x0;
            goto LAB_00101d47;
          }
        }
        else {
LAB_00101d6d:
          if (local_82 != 0) goto LAB_00101d23;
        }
        bVar5 = 0;
      }
LAB_00101d47:
      bVar5 = bVar5 & 1;
    }
    else {
      iVar6 = rpl_fclose();
      if (iVar6 == 0) goto LAB_00101cc6;
      if (uVar7 == 0) {
        piVar16 = __errno_location();
        iVar6 = *piVar16;
        goto LAB_00101ccb;
      }
      __lineptr = (FILE *)quotearg_n_style_colon(0,3,local_c8);
LAB_00102348:
      iVar6 = 0;
      puVar20 = (undefined *)dcgettext(0,"%s: read error",5);
LAB_00102360:
      __s = (undefined1 *)__lineptr;
      error(0,iVar6,puVar20);
      bVar5 = 0;
    }
    while( true ) {
      local_81 = local_81 & bVar5;
      puVar28 = (undefined1 *)&((FILE *)puVar28)->_IO_read_ptr;
      if (local_80 <= puVar28) {
        ppcVar29 = (char **)(ulong)local_81;
        goto LAB_00101882;
      }
      local_c8 = *(FILE **)puVar28;
LAB_001018e0:
      local_b8 = local_90 & 0xfffffffffffffffc;
      uVar7 = strcmp((char *)local_c8,"-");
      local_d8 = (FILE *)(ulong)uVar7;
      if (uVar7 == 0) break;
      __stream = (char *)fopen_safer(local_c8,&_LC3);
      if ((FILE *)__stream != (FILE *)0x0) goto LAB_00101931;
      __s = (undefined1 *)quotearg_n_style_colon(0,3,local_c8);
      piVar16 = __errno_location();
      error(0,*piVar16,&_LC4);
      bVar5 = 0;
    }
    have_read_stdin = '\x01';
    local_c8 = (FILE *)dcgettext(0,"standard input",5);
    __stream = (char *)_stdin;
LAB_00101931:
    in_R10 = 0;
    local_82 = 0;
    local_68 = (FILE *)0x0;
    pbVar30 = (byte *)0x1;
    puVar27 = (uint *)&local_60;
    __lineptr = (FILE *)&local_68;
    local_60 = (char *)0x0;
    local_d0 = (FILE *)((ulong)local_d0 & 0xffffffffffffff00);
    local_b0 = (FILE *)0x0;
    local_a8 = (FILE *)0x0;
    local_98 = (FILE *)0x0;
    ppcVar29 = (char **)0x1;
    local_a0 = (FILE *)puVar28;
    while (__s = __stream,
          _Var11 = __getdelim((char **)__lineptr,(size_t *)puVar27,10,(FILE *)__stream), 0 < _Var11)
    {
      if ((char)local_68->_flags == '#') goto LAB_00101a90;
      lVar12 = _Var11 - (ulong)(*(char *)((long)local_68 + _Var11 + -1) == '\n');
      __s = (undefined1 *)
            (ulong)(*(char *)((long)local_68 + (lVar12 - (ulong)(0 < lVar12))) == '\r');
      lVar12 = lVar12 - (long)__s;
      if (lVar12 == 0) goto LAB_00101a90;
      *(undefined1 *)((long)local_68 + lVar12) = 0;
      lVar19 = 0;
      cVar21 = (char)local_68->_flags;
      if ((cVar21 == '\t') || (cVar21 == ' ')) {
        do {
          do {
            lVar19 = lVar19 + 1;
            cVar21 = *(char *)((long)&local_68->_flags + lVar19);
          } while (cVar21 == ' ');
        } while (cVar21 == '\t');
      }
      in_R10 = 0;
      if (cVar21 == '\\') {
        in_R10 = (ulong)local_e0 & 0xff;
        lVar19 = lVar19 + 1;
      }
      auVar4._8_8_ = lVar19;
      auVar4._0_8_ = lVar12;
      auVar3._8_8_ = lVar19;
      auVar3._0_8_ = lVar12;
      auVar32._8_8_ = lVar19;
      auVar32._0_8_ = lVar12;
      pbVar30 = (byte *)((long)&local_68->_flags + lVar19);
      __s = (undefined1 *)local_68;
      if (*pbVar30 != 0x4d) goto LAB_00101ae8;
      auVar32 = auVar3;
      if (pbVar30[1] != 0x44) goto LAB_00101ae8;
      auVar32 = auVar4;
      if (pbVar30[2] != 0x35) goto LAB_00101ae8;
      cVar21 = local_68->_shortbuf[lVar19 + -0x80];
      lVar24 = lVar19 + 3;
      if (cVar21 == ' ') {
        cVar21 = local_68->_shortbuf[lVar19 + -0x7f];
        lVar24 = lVar19 + 4;
      }
      if (cVar21 == '(') {
        lVar12 = lVar12 - (lVar24 + 1);
        if (lVar12 != 0) {
          __s = (undefined1 *)((long)&local_68->_flags + lVar24 + 1);
          lVar19 = lVar12;
          do {
            lVar19 = lVar19 + -1;
            if (lVar19 == 0) break;
          } while (*(char *)((long)__s + lVar19) != ')');
          pcVar23 = (char *)((long)__s + lVar19);
          if ((*pcVar23 == ')') &&
             (((char)in_R10 == '\0' || (lVar24 = filename_unescape(__s,lVar19), lVar24 != 0)))) {
            *pcVar23 = '\0';
            cVar21 = *(char *)((long)&((FILE *)__s)->_flags + lVar19 + 1);
            lVar19 = lVar19 + 1;
            if (cVar21 != ' ') goto LAB_00101e55;
            do {
              do {
                lVar19 = lVar19 + 1;
                cVar21 = *(char *)((long)&((FILE *)__s)->_flags + lVar19);
              } while (cVar21 == ' ');
LAB_00101e55:
            } while (cVar21 == '\t');
            if (cVar21 == '=') {
              do {
                do {
                  lVar19 = lVar19 + 1;
                  cVar21 = *(char *)((long)&((FILE *)__s)->_flags + lVar19);
                } while (cVar21 == ' ');
              } while (cVar21 == '\t');
              uVar15 = lVar12 - lVar19;
              if (uVar15 == digest_hex_bytes) {
                pbVar30 = (byte *)((long)&((FILE *)__s)->_flags + lVar19);
                uVar14 = 0;
                while( true ) {
                  if (uVar15 == uVar14) {
                    bVar31 = pbVar30[uVar14] == 0;
                    goto LAB_00102204;
                  }
                  uVar7 = pbVar30[uVar14] - 0x30;
                  if ((0x36 < (byte)uVar7) ||
                     ((0x7e0000007e03ffU >> ((ulong)uVar7 & 0x3f) & 1) == 0)) break;
                  uVar14 = uVar14 + 1;
                }
              }
            }
          }
        }
      }
LAB_00101a75:
      if (warn != '\0') {
        __s = (undefined1 *)quotearg_n_style_colon(0,3,local_c8);
        uVar17 = dcgettext(0,"%s: %ju: improperly formatted %s checksum line",5);
        error(0,0,uVar17);
      }
      local_98 = (FILE *)((long)&local_98->_flags + 1);
LAB_00101a90:
      if ((((FILE *)__stream)->_flags & 0x30) != 0) break;
LAB_00101a9f:
      ppcVar29 = (char **)((long)ppcVar29 + 1);
      if (ppcVar29 == (char **)0x0) {
        __s = (undefined1 *)quotearg_n_style_colon(0,3,local_c8);
        uVar17 = dcgettext(0,"%s: too many checksum lines",5);
        auVar32 = error(1,0,uVar17);
LAB_00101ae8:
        uVar15 = digest_hex_bytes;
        lVar19 = auVar32._8_8_;
        lVar12 = auVar32._0_8_;
        bVar5 = *pbVar30;
        if ((ulong)(bVar5 == 0x5c) + min_digest_line_length <= (ulong)(lVar12 - lVar19)) {
          lVar24 = lVar19;
          pbVar26 = pbVar30;
          while (((bVar5 != 0 && (bVar5 != 0x20)) && (bVar5 != 9))) {
            lVar24 = lVar24 + 1;
            pbVar26 = pbVar26 + (long)__s + ((lVar19 + 1) - (long)pbVar30);
            bVar5 = *(byte *)((long)&((FILE *)__s)->_flags + lVar24);
          }
          if ((lVar12 != lVar24) && (*pbVar26 = 0, lVar24 - lVar19 == uVar15)) {
            pbVar26 = pbVar30;
            if (uVar15 != 0) {
              pbVar22 = pbVar30;
              do {
                if ((0x36 < (byte)(*pbVar22 - 0x30)) ||
                   ((0x7e0000007e03ffU >> ((ulong)(*pbVar22 - 0x30) & 0x3f) & 1) == 0))
                goto LAB_00101a75;
                pbVar22 = pbVar22 + 1;
                pbVar26 = pbVar30 + uVar15;
              } while (pbVar30 + uVar15 != pbVar22);
            }
            if (*pbVar26 == 0) {
              lVar19 = lVar24 + 1;
              if ((lVar12 - lVar19 == 1) ||
                 ((cVar21 = *(char *)((long)&((FILE *)__s)->_flags + lVar24 + 1), cVar21 != ' ' &&
                  (cVar21 != '*')))) {
                if (bsd_reversed == 0) goto LAB_00101a75;
                bsd_reversed = 1;
              }
              else if (bsd_reversed != 1) {
                lVar19 = lVar24 + 2;
                bsd_reversed = 0;
              }
              __s = (undefined1 *)((long)&((FILE *)__s)->_flags + lVar19);
              if ((char)in_R10 != '\0') {
                lVar12 = filename_unescape(__s,lVar12 - lVar19);
                bVar31 = lVar12 != 0;
LAB_00102204:
                if (!bVar31) goto LAB_00101a75;
              }
              if ((((int)local_d8 != 0) || ((char)((FILE *)__s)->_flags != '-')) ||
                 (*(char *)((long)&((FILE *)__s)->_flags + 1) != '\0')) {
                local_d0 = (FILE *)0x0;
                if (status_only == 0) {
                  sVar13 = strcspn(__s,"\\\n\r");
                  local_d0 = (FILE *)(ulong)(*(char *)((long)&((FILE *)__s)->_flags + sVar13) !=
                                            '\0');
                }
                uVar14 = digest_file_isra_0(__s,local_b8,&local_69);
                in_R10 = uVar14 & 0xffffffff;
                if ((char)uVar14 != '\0') goto LAB_00101fe9;
                if (status_only == 0) {
                  if ((int)local_d0 != 0) {
                    pcVar23 = _stdout->_IO_write_ptr;
                    if (pcVar23 < _stdout->_IO_write_end) {
                      _stdout->_IO_write_ptr = pcVar23 + 1;
                      *pcVar23 = '\\';
                    }
                    else {
                      __overflow(_stdout,0x5c);
                    }
                  }
                  print_filename(__s,local_d0);
                  uVar17 = dcgettext(0,"FAILED open or read",5);
                  __printf_chk(2,": %s\n",uVar17);
                }
                local_a8 = (FILE *)((long)&local_a8->_flags + 1);
                goto LAB_00101c82;
              }
            }
          }
        }
        goto LAB_00101a75;
      }
    }
  } while( true );
}


