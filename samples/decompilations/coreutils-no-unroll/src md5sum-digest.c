
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
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  size_t *psVar6;
  __ssize_t _Var7;
  long lVar8;
  ulong uVar9;
  size_t sVar10;
  ulong uVar11;
  int *piVar12;
  undefined8 uVar13;
  long lVar14;
  byte **__lineptr;
  undefined8 uVar15;
  byte *pbVar16;
  undefined1 uVar17;
  ulong uVar18;
  undefined *puVar19;
  byte *pbVar20;
  char *pcVar21;
  char cVar22;
  _IO_FILE *p_Var23;
  byte *in_R9;
  ulong in_R10;
  ulong uVar24;
  uint *puVar25;
  char *__stream;
  undefined1 *puVar26;
  size_t *psVar27;
  byte *pbVar28;
  byte *__s;
  long in_FS_OFFSET;
  bool bVar29;
  size_t *local_d8;
  byte *local_d0;
  FILE *local_c8;
  undefined8 local_c0;
  ulong local_b8;
  long local_b0;
  long local_a8;
  byte *local_a0;
  long local_98;
  ulong local_90;
  uint local_88;
  byte local_82;
  byte local_81;
  byte *local_80;
  char local_69;
  byte *local_68;
  size_t local_60;
  undefined8 local_58;
  long local_40;
  
  __s = (byte *)0xffffffff;
  puVar26 = long_options;
  __stream = "bctwz";
  __lineptr = (byte **)(ulong)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils");
  puVar25 = &switchD_001014e3::switchdataD_001024f0;
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  setvbuf(_stdout,(char *)0x0,1,0);
  local_d0 = (byte *)CONCAT44(local_d0._4_4_,0xffffffff);
  local_d8 = (size_t *)((ulong)local_d8 & 0xffffffffffffff00);
  while (iVar3 = getopt_long(param_1,param_2,"bctwz",long_options), iVar3 != -1) {
    if (0x84 < iVar3) goto switchD_001014e3_caseD_64;
    if (iVar3 < 0x62) {
      if (iVar3 == -0x83) {
        uVar13 = proper_name_lite("David Madore","David Madore");
        uVar15 = proper_name_lite("Scott Miller","Scott Miller");
        uVar5 = proper_name_lite("Ulrich Drepper","Ulrich Drepper");
        version_etc(_stdout,"md5sum","GNU coreutils",_Version,uVar5,uVar15,uVar13,0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar3 == -0x82) {
        p_Var23 = (_IO_FILE *)0x0;
        usage();
        psVar27 = (size_t *)puVar25;
        goto LAB_0010229b;
      }
      goto switchD_001014e3_caseD_64;
    }
    switch(iVar3) {
    case 0x62:
      __s = (byte *)0x1;
      break;
    case 99:
      local_d8 = (size_t *)CONCAT71(local_d8._1_7_,1);
      break;
    default:
      goto switchD_001014e3_caseD_64;
    case 0x74:
      __s = (byte *)0x0;
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
      local_d0 = (byte *)CONCAT44(local_d0._4_4_,1);
      __s = (byte *)0x1;
    }
  }
  min_digest_line_length = 0x22;
  digest_hex_bytes = 0x20;
  iVar3 = (int)__s;
  if ((int)local_d0 == -1) {
    uVar17 = 0;
    if (digest_delim == 10) {
LAB_00101838:
      if ((iVar3 < 0) || ((byte)local_d8 == 0)) {
LAB_0010163a:
        if ((ignore_missing == '\x01') && ((byte)local_d8 == 0)) {
          pcVar21 = "the --ignore-missing option is meaningful only when verifying checksums";
        }
        else if ((status_only == 1) && ((byte)local_d8 == 0)) {
          pcVar21 = "the --status option is meaningful only when verifying checksums";
        }
        else if ((warn == '\x01') && ((byte)local_d8 == 0)) {
          pcVar21 = "the --warn option is meaningful only when verifying checksums";
        }
        else {
          bVar2 = quiet ^ 1 | (byte)local_d8;
          psVar27 = (size_t *)(ulong)bVar2;
          if (bVar2 == 0) {
            pcVar21 = "the --quiet option is meaningful only when verifying checksums";
          }
          else {
            if ((((byte)local_d8 ^ 1) & strict) == 0) {
              pbVar28 = (byte *)(param_2 + (int)param_1);
              lVar8 = (long)(int)_optind;
              pbVar16 = pbVar28;
              if (_optind == param_1) {
                pbVar16 = pbVar28 + 8;
                *(undefined **)pbVar28 = &_LC54;
              }
              in_R9 = (byte *)(param_2 + lVar8);
              if (in_R9 < pbVar16) {
                __stream = *(char **)in_R9;
                local_c8 = (FILE *)__stream;
                if ((byte)local_d8 != 0) {
                  local_90 = (long)&local_58 + 3;
                  local_81 = (byte)local_d8;
                  pbVar28 = in_R9;
                  local_80 = pbVar16;
                  goto LAB_001018d6;
                }
                local_d8 = &local_60;
                local_88 = CONCAT31(local_88._1_3_,uVar17);
                param_2 = &local_58;
                __lineptr = (byte **)&_LC74;
                local_b8 = CONCAT44(local_b8._4_4_,iVar3);
                puVar26 = in_R9;
                local_d0 = pbVar16;
                do {
                  psVar6 = (size_t *)digest_file_isra_0(__stream,param_2,local_d8);
                  puVar25 = (uint *)psVar27;
                  if ((char)psVar6 != '\0') {
                    local_c0 = 0;
                    local_c8 = (FILE *)(ulong)digest_delim;
                    psVar6 = psVar27;
                    if ((digest_delim == 10) &&
                       (sVar10 = strcspn(__stream,"\\\n\r"),
                       *(char *)((long)&((FILE *)__stream)->_flags + sVar10) != '\0')) {
                      pcVar21 = _stdout->_IO_write_ptr;
                      p_Var23 = _stdout;
                      if (pcVar21 < _stdout->_IO_write_end) {
                        _stdout->_IO_write_ptr = pcVar21 + 1;
                        *pcVar21 = '\\';
                      }
                      else {
LAB_0010229b:
                        __overflow(p_Var23,0x5c);
                      }
                      local_c0 = 1;
                      psVar6 = psVar27;
                    }
                    if ((char)local_88 == '\0') {
                      if (digest_hex_bytes >> 1 != 0) {
LAB_00101765:
                        __s = (byte *)0x0;
                        do {
                          pbVar28 = (byte *)((long)param_2 + (long)__s);
                          __s = __s + 1;
                          __printf_chk(2,__lineptr,*pbVar28);
                        } while (__s < (byte *)(digest_hex_bytes >> 1));
                        if ((char)local_88 != '\0') goto LAB_001017fc;
                      }
                      pcVar21 = _stdout->_IO_write_ptr;
                      if (pcVar21 < _stdout->_IO_write_end) {
                        _stdout->_IO_write_ptr = pcVar21 + 1;
                        *pcVar21 = ' ';
                      }
                      else {
                        __overflow(_stdout,0x20);
                      }
                      iVar3 = 0x20;
                      if (0 < (int)local_b8) {
                        iVar3 = 0x2a;
                      }
                      pcVar21 = _stdout->_IO_write_ptr;
                      if (pcVar21 < _stdout->_IO_write_end) {
                        _stdout->_IO_write_ptr = pcVar21 + 1;
                        *pcVar21 = (char)iVar3;
                      }
                      else {
                        __overflow(_stdout,iVar3);
                      }
                      print_filename(__stream,local_c0);
                    }
                    else {
                      fwrite_unlocked(&_LC13,1,3,_stdout);
                      fwrite_unlocked(&_LC72,1,2,_stdout);
                      print_filename(__stream,local_c0);
                      fwrite_unlocked(&_LC73,1,4,_stdout);
                      if (digest_hex_bytes >> 1 != 0) goto LAB_00101765;
                    }
LAB_001017fc:
                    pbVar28 = (byte *)_stdout->_IO_write_ptr;
                    puVar25 = (uint *)psVar6;
                    if (pbVar28 < _stdout->_IO_write_end) {
                      _stdout->_IO_write_ptr = (char *)(pbVar28 + 1);
                      *pbVar28 = (byte)local_c8;
                    }
                    else {
                      __overflow(_stdout,(uint)(byte)local_c8);
                    }
                  }
                  uVar4 = (uint)psVar6;
                  puVar26 = puVar26 + 8;
                  if (local_d0 <= puVar26) goto LAB_00101876;
                  __stream = *(char **)puVar26;
                  psVar27 = (size_t *)((ulong)psVar6 & 0xffffffff);
                } while( true );
              }
              goto LAB_00101879;
            }
            pcVar21 = "the --strict option is meaningful only when verifying checksums";
          }
        }
      }
      else {
        pcVar21 = "the --binary and --text options are meaningless when verifying checksums";
      }
    }
    else {
LAB_00101630:
      if ((byte)local_d8 == 0) goto LAB_0010163a;
      pcVar21 = "the --zero option is not supported when verifying checksums";
    }
  }
  else if (iVar3 == 0) {
    pcVar21 = "--tag does not support --text mode";
  }
  else {
    uVar17 = 1;
    if (digest_delim != 10) goto LAB_00101630;
    if ((byte)local_d8 == 0) goto LAB_00101838;
    pcVar21 = "the --tag option is meaningless when verifying checksums";
  }
  uVar13 = dcgettext(0,pcVar21,5);
  error(0,0,uVar13);
switchD_001014e3_caseD_64:
  uVar4 = usage(1);
LAB_00101876:
  psVar27 = (size_t *)(ulong)uVar4;
LAB_00101879:
  if ((have_read_stdin == '\0') || (iVar3 = rpl_fclose(_stdin), iVar3 != -1)) {
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return ((uint)psVar27 ^ 1) & 0xff;
  }
  uVar11 = dcgettext(0,"standard input",5);
  piVar12 = __errno_location();
  error(1,*piVar12,uVar11);
LAB_00101fd7:
  bVar2 = (byte)in_R10;
  if ((ignore_missing != '\0') && (local_69 != '\0')) goto LAB_00101c73;
  if (digest_hex_bytes == uVar11) {
    uVar11 = uVar11 >> 1;
    if (uVar11 != 0) {
      uVar9 = 0;
      do {
        bVar1 = in_R9[uVar9 * 2];
        uVar4 = (uint)bVar1;
        if (bVar1 - 0x41 < 0x1a) {
          uVar4 = bVar1 + 0x20;
        }
        if ((int)(char)bin2hex_0[*(byte *)(local_b8 + uVar9) >> 4] != uVar4) {
LAB_0010211f:
          if (uVar11 != uVar9) goto LAB_00101ff8;
          break;
        }
        bVar1 = in_R9[uVar9 * 2 + 1];
        uVar4 = (uint)bVar1;
        if (bVar1 - 0x41 < 0x1a) {
          uVar4 = bVar1 + 0x20;
        }
        if ((int)(char)bin2hex_0[*(byte *)(local_b8 + uVar9) & 0xf] != uVar4) goto LAB_0010211f;
        uVar9 = uVar9 + 1;
      } while (uVar11 != uVar9);
    }
    local_82 = status_only;
    if ((status_only != 0) || (local_82 = quiet, quiet != 0)) goto LAB_00101c73;
    local_82 = bVar2;
    if (local_88 != 0) goto LAB_0010215e;
    local_88 = CONCAT31(local_88._1_3_,bVar2);
    print_filename(__s,0);
    in_R10 = in_R10 & 0xff;
LAB_0010219f:
    if (quiet != 0) goto LAB_00101c73;
    pcVar21 = "OK";
  }
  else {
LAB_00101ff8:
    in_R10 = (ulong)status_only;
    local_b0 = local_b0 + 1;
    if (status_only != 0) goto LAB_00101c73;
    bVar2 = 0;
    if (local_88 == 0) {
      print_filename(__s,0);
    }
    else {
LAB_0010215e:
      pcVar21 = _stdout->_IO_write_ptr;
      if (pcVar21 < _stdout->_IO_write_end) {
        _stdout->_IO_write_ptr = pcVar21 + 1;
        *pcVar21 = '\\';
      }
      else {
        local_88 = CONCAT31(local_88._1_3_,bVar2);
        __overflow(_stdout,0x5c);
      }
      local_88 = CONCAT31(local_88._1_3_,bVar2);
      print_filename(__s,1);
      in_R10 = (ulong)bVar2;
      if (bVar2 != 0) goto LAB_0010219f;
    }
    pcVar21 = "FAILED";
  }
  uVar13 = dcgettext(0,pcVar21,5);
  __printf_chk(2,": %s\n",uVar13);
LAB_00101c73:
  local_88 = CONCAT31(local_88._1_3_,(byte)local_d8);
  if ((((FILE *)__stream)->_flags & 0x30) == 0) goto LAB_00101a87;
  do {
    free(local_68);
    uVar4 = ((FILE *)__stream)->_flags & 0x20;
    pbVar28 = local_a0;
    if ((int)local_d0 == 0) {
      clearerr_unlocked((FILE *)__stream);
LAB_00101cb3:
      iVar3 = -(uint)(uVar4 == 0);
LAB_00101cb8:
      if (-1 < iVar3) {
        __lineptr = (byte **)quotearg_n_style_colon(0,3,local_c8);
        puVar19 = &_LC4;
        if (iVar3 == 0) goto LAB_00102454;
        goto LAB_0010242b;
      }
      if ((char)local_88 == '\0') {
        uVar13 = quotearg_n_style_colon(0,3,local_c8);
        pcVar21 = "%s: no properly formatted checksum lines found";
LAB_001022d9:
        uVar15 = dcgettext(0,pcVar21,5);
        error(0,0,uVar15,uVar13);
        bVar2 = 0;
      }
      else {
        if (status_only == 0) {
          if (local_98 != 0) {
            uVar13 = dcngettext(0,"WARNING: %ju line is improperly formatted",
                                "WARNING: %ju lines are improperly formatted",local_98);
            error(0,0,uVar13,local_98);
          }
          if (local_a8 != 0) {
            uVar13 = dcngettext(0,"WARNING: %ju listed file could not be read",
                                "WARNING: %ju listed files could not be read",local_a8);
            error(0,0,uVar13,local_a8);
          }
          if (local_b0 != 0) {
            uVar13 = dcngettext(0,"WARNING: %ju computed checksum did NOT match",
                                "WARNING: %ju computed checksums did NOT match",local_b0);
            error(0,0,uVar13,local_b0);
          }
          if (ignore_missing == '\0') goto LAB_00101d5a;
          if (local_82 == 0) {
            uVar13 = quotearg_n_style_colon(0,3,local_c8);
            pcVar21 = "%s: no file was verified";
            goto LAB_001022d9;
          }
LAB_00101d10:
          if (local_a8 == 0 && local_b0 == 0) {
            bVar2 = strict ^ 1 | local_98 == 0;
            goto LAB_00101d34;
          }
        }
        else {
LAB_00101d5a:
          if (local_82 != 0) goto LAB_00101d10;
        }
        bVar2 = 0;
      }
LAB_00101d34:
      bVar2 = bVar2 & 1;
    }
    else {
      iVar3 = rpl_fclose();
      if (iVar3 == 0) goto LAB_00101cb3;
      if (uVar4 == 0) {
        piVar12 = __errno_location();
        iVar3 = *piVar12;
        goto LAB_00101cb8;
      }
      __lineptr = (byte **)quotearg_n_style_colon(0,3,local_c8);
LAB_00102454:
      iVar3 = 0;
      puVar19 = (undefined *)dcgettext(0,"%s: read error",5);
LAB_0010242b:
      error(0,iVar3,puVar19,__lineptr);
      bVar2 = 0;
    }
    while( true ) {
      local_81 = local_81 & bVar2;
      pbVar28 = pbVar28 + 8;
      if (local_80 <= pbVar28) {
        psVar27 = (size_t *)(ulong)local_81;
        goto LAB_00101879;
      }
      local_c8 = *(FILE **)pbVar28;
LAB_001018d6:
      local_b8 = local_90 & 0xfffffffffffffffc;
      uVar4 = strcmp((char *)local_c8,"-");
      local_d0 = (byte *)(ulong)uVar4;
      if (uVar4 == 0) break;
      __stream = (char *)fopen_safer(local_c8,&_LC3);
      if ((FILE *)__stream != (FILE *)0x0) goto LAB_00101927;
      uVar13 = quotearg_n_style_colon(0,3,local_c8);
      piVar12 = __errno_location();
      error(0,*piVar12,&_LC4,uVar13);
      bVar2 = 0;
    }
    have_read_stdin = '\x01';
    local_c8 = (FILE *)dcgettext(0,"standard input",5);
    __stream = (char *)_stdin;
LAB_00101927:
    local_82 = 0;
    __s = (byte *)0x1;
    local_68 = (byte *)0x0;
    puVar25 = (uint *)&local_60;
    __lineptr = &local_68;
    local_60 = 0;
    local_88 = local_88 & 0xffffff00;
    local_b0 = 0;
    local_a8 = 0;
    local_98 = 0;
    psVar27 = (size_t *)0x1;
    local_a0 = pbVar28;
LAB_00101970:
    _Var7 = __getdelim((char **)__lineptr,(size_t *)puVar25,10,(FILE *)__stream);
    if (0 < _Var7) {
      if (*local_68 == 0x23) goto LAB_00101a78;
      lVar8 = _Var7 - (ulong)(local_68[_Var7 + -1] == 10);
      uVar9 = lVar8 - (ulong)(local_68[lVar8 - (ulong)(0 < lVar8)] == 0xd);
      if (uVar9 == 0) goto LAB_00101a78;
      local_68[uVar9] = 0;
      bVar2 = *local_68;
      uVar24 = (ulong)bVar2;
      pbVar28 = local_68;
      if ((bVar2 != 9) && (bVar2 != 0x20)) goto LAB_00101acb;
      uVar18 = 0;
      do {
        do {
          uVar18 = uVar18 + 1;
          bVar2 = local_68[uVar18];
          uVar24 = (ulong)bVar2;
        } while (bVar2 == 0x20);
      } while (bVar2 == 9);
      in_R9 = local_68 + uVar18;
      do {
        uVar11 = digest_hex_bytes;
        cVar22 = '\0';
        if ((char)uVar24 == '\\') {
          uVar18 = uVar18 + 1;
          cVar22 = (char)local_d8;
          in_R9 = pbVar28 + uVar18;
        }
        if (((*in_R9 == 0x4d) && (in_R9[1] == 0x44)) && (in_R9[2] == 0x35)) {
          bVar2 = pbVar28[uVar18 + 3];
          in_R9 = (byte *)(uVar18 + 3);
          if (bVar2 == 0x20) {
            bVar2 = pbVar28[uVar18 + 4];
            in_R9 = (byte *)(uVar18 + 4);
          }
          if (bVar2 == 0x28) {
            in_R9 = in_R9 + 1;
            lVar8 = uVar9 - (long)in_R9;
            if (lVar8 != 0) {
              __s = pbVar28 + (long)in_R9;
              for (in_R9 = (byte *)(lVar8 + -1);
                  (in_R9 != (byte *)0x0 && (__s[(long)in_R9] != 0x29)); in_R9 = in_R9 + -1) {
              }
              pbVar28 = __s + (long)in_R9;
              if ((*pbVar28 == 0x29) &&
                 ((cVar22 == '\0' || (lVar14 = filename_unescape(__s,in_R9), lVar14 != 0)))) {
                *pbVar28 = 0;
                bVar2 = (__s + 1)[(long)in_R9];
                pbVar28 = in_R9 + 1;
                if ((bVar2 == 9) || (bVar2 == 0x20)) {
                  do {
                    do {
                      pbVar28 = pbVar28 + 1;
                      bVar2 = __s[(long)pbVar28];
                    } while (bVar2 == 0x20);
                  } while (bVar2 == 9);
                }
                if (bVar2 == 0x3d) {
                  do {
                    do {
                      pbVar28 = pbVar28 + 1;
                    } while (__s[(long)pbVar28] == 0x20);
                  } while (__s[(long)pbVar28] == 9);
                  uVar11 = lVar8 - (long)pbVar28;
                  if (uVar11 == digest_hex_bytes) {
                    in_R9 = __s + (long)pbVar28;
                    for (uVar9 = 0; uVar9 != uVar11; uVar9 = uVar9 + 1) {
                      uVar4 = in_R9[uVar9] - 0x30;
                      if ((0x36 < (byte)uVar4) ||
                         ((0x7e0000007e03ffU >> ((ulong)uVar4 & 0x3f) & 1) == 0)) goto LAB_00101a5e;
                    }
                    bVar29 = in_R9[uVar9] == 0;
                    goto LAB_001021eb;
                  }
                }
              }
            }
          }
        }
        else {
          bVar2 = *in_R9;
          in_R10 = (ulong)(bVar2 == 0x5c) + min_digest_line_length;
          uVar24 = uVar18;
          pbVar16 = in_R9;
          if (in_R10 <= uVar9 - uVar18) {
            while (((in_R10 = uVar24, bVar2 != 0 && (bVar2 != 0x20)) && (bVar2 != 9))) {
              uVar24 = in_R10 + 1;
              bVar2 = pbVar28[uVar24];
              pbVar16 = pbVar28 + uVar24;
            }
            if ((uVar9 != in_R10) && (*pbVar16 = 0, in_R10 - uVar18 == uVar11)) {
              pbVar16 = in_R9;
              if (uVar11 != 0) {
                pbVar20 = in_R9;
                do {
                  if ((0x36 < (byte)(*pbVar20 - 0x30)) ||
                     ((0x7e0000007e03ffU >> ((ulong)(*pbVar20 - 0x30) & 0x3f) & 1) == 0))
                  goto LAB_00101a5e;
                  pbVar20 = pbVar20 + 1;
                  pbVar16 = in_R9 + uVar11;
                } while (pbVar20 != in_R9 + uVar11);
              }
              if (*pbVar16 == 0) {
                lVar8 = in_R10 + 1;
                if ((uVar9 - lVar8 == 1) ||
                   ((pbVar28[in_R10 + 1] != 0x20 && (pbVar28[in_R10 + 1] != 0x2a)))) {
                  if (bsd_reversed == 0) goto LAB_00101a5e;
                  bsd_reversed = 1;
                }
                else if (bsd_reversed != 1) {
                  lVar8 = in_R10 + 2;
                  bsd_reversed = 0;
                }
                __s = pbVar28 + lVar8;
                if (cVar22 != '\0') {
                  lVar8 = filename_unescape(__s,uVar9 - lVar8);
                  bVar29 = lVar8 != 0;
LAB_001021eb:
                  if (!bVar29) goto LAB_00101a5e;
                }
                if ((((int)local_d0 != 0) || (*__s != 0x2d)) || (__s[1] != 0)) {
                  local_88 = 0;
                  if (status_only == 0) {
                    sVar10 = strcspn((char *)__s,"\\\n\r");
                    local_88 = (uint)(__s[sVar10] != 0);
                  }
                  uVar9 = digest_file_isra_0(__s,local_b8,&local_69);
                  in_R10 = uVar9 & 0xffffffff;
                  if ((char)uVar9 != '\0') goto LAB_00101fd7;
                  if (status_only == 0) {
                    if (local_88 != 0) {
                      pcVar21 = _stdout->_IO_write_ptr;
                      if (pcVar21 < _stdout->_IO_write_end) {
                        _stdout->_IO_write_ptr = pcVar21 + 1;
                        *pcVar21 = '\\';
                      }
                      else {
                        __overflow(_stdout,0x5c);
                      }
                    }
                    print_filename(__s,local_88);
                    uVar13 = dcgettext(0,"FAILED open or read",5);
                    __printf_chk(2,": %s\n",uVar13);
                  }
                  local_a8 = local_a8 + 1;
                  goto LAB_00101c73;
                }
              }
            }
          }
        }
LAB_00101a5e:
        if (warn != '\0') {
          uVar13 = quotearg_n_style_colon(0,3,local_c8);
          uVar15 = dcgettext(0,"%s: %ju: improperly formatted %s checksum line",5);
          in_R9 = &_LC13;
          error(0,0,uVar15,uVar13);
        }
        local_98 = local_98 + 1;
LAB_00101a78:
        if ((((FILE *)__stream)->_flags & 0x30) != 0) break;
LAB_00101a87:
        psVar27 = (size_t *)((long)psVar27 + 1);
        if (psVar27 != (size_t *)0x0) goto LAB_00101970;
        pbVar28 = (byte *)quotearg_n_style_colon(0,3,local_c8);
        uVar13 = dcgettext(0,"%s: too many checksum lines",5);
        uVar24 = 0;
        uVar9 = error(1,0,uVar13);
LAB_00101acb:
        uVar18 = 0;
        in_R9 = pbVar28;
      } while( true );
    }
  } while( true );
}


