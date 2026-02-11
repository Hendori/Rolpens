
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
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  uint *puVar6;
  byte *pbVar7;
  size_t sVar8;
  int *piVar9;
  ulong uVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte bVar13;
  uint uVar14;
  undefined *puVar15;
  undefined *puVar16;
  uint *in_R9;
  char *pcVar17;
  uint *puVar18;
  uint *puVar19;
  char *pcVar20;
  undefined1 *__s;
  FILE *pFVar21;
  ulong uVar22;
  long in_FS_OFFSET;
  bool bVar23;
  bool bVar24;
  undefined8 local_120;
  size_t *local_118;
  uint *local_110;
  byte local_101;
  byte *local_f0;
  ulong local_e8;
  long local_e0;
  long local_d8;
  uint *local_d0;
  long local_c8;
  ulong local_c0;
  uint local_b8;
  byte local_b4;
  char local_b3;
  byte local_b2;
  byte local_b1;
  uint *local_b0;
  byte *local_a8;
  size_t local_a0;
  ulong local_98;
  size_t local_90;
  undefined8 local_88;
  long local_40;
  
  pFVar21 = (FILE *)0xffffffff;
  __s = long_options;
  puVar16 = (undefined *)(ulong)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils");
  pcVar20 = "l:bctwz";
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  setvbuf(_stdout,(char *)0x0,1,0);
  local_120 = (byte **)CONCAT44(local_120._4_4_,0xffffffff);
  local_110 = (uint *)((ulong)local_110 & 0xffffffffffffff00);
  local_118 = (size_t *)&_LC8;
  puVar19 = &switchD_001016ab::switchdataD_00102950;
LAB_00101668:
  iVar3 = getopt_long(param_1,param_2,"l:bctwz",long_options,0);
  if (iVar3 == -1) {
    min_digest_line_length = 3;
    if (digest_length < 0x201) {
      if ((digest_length & 7) == 0) {
        if (digest_length == 0) {
          digest_length = 0x200;
        }
        digest_hex_bytes = (uint *)(digest_length >> 2);
        if ((int)pFVar21 == -1) {
          in_R9 = (uint *)0x0;
          if (digest_delim == 10) goto LAB_00101ac8;
        }
        else {
          if ((int)local_120 == 0) {
            pcVar20 = "--tag does not support --text mode";
            goto LAB_00101aea;
          }
          in_R9 = (uint *)0x1;
          if (digest_delim == 10) goto LAB_001023b3;
        }
        pcVar20 = "the --zero option is not supported when verifying checksums";
        goto joined_r0x0010187f;
      }
    }
    else {
      uVar5 = quote(local_118);
      uVar11 = dcgettext(0,"invalid length: %s",5);
      error(0,0,uVar11,uVar5);
      uVar5 = quote("BLAKE2b");
      uVar11 = dcgettext(0,"maximum digest length for %s is %d bits",5);
      error(1,0,uVar11,uVar5,0x200);
    }
    uVar5 = quote(local_118);
    uVar11 = dcgettext(0,"invalid length: %s",5);
    error(0,0,uVar11,uVar5);
    uVar5 = dcgettext(0,"length is not a multiple of 8",5);
    error(1,0,uVar5);
    goto LAB_001028ff;
  }
  if (0x84 < iVar3) goto switchD_001016ab_caseD_64;
  if (iVar3 < 0x62) {
    if (iVar3 == -0x83) {
      uVar5 = proper_name_lite("Samuel Neves","Samuel Neves");
      uVar11 = proper_name_lite("Padraig Brady",&_LC45);
      version_etc(_stdout,"b2sum","GNU coreutils",_Version,uVar11,uVar5,0);
                    /* WARNING: Subroutine does not return */
      exit(0);
    }
    if (iVar3 == -0x82) {
      pFVar21 = (_IO_FILE *)0x0;
      usage();
      goto LAB_0010269b;
    }
    goto switchD_001016ab_caseD_64;
  }
  switch(iVar3) {
  case 0x62:
    local_120 = (byte **)CONCAT44(local_120._4_4_,1);
    goto LAB_00101668;
  case 99:
    local_110 = (uint *)CONCAT71(local_110._1_7_,1);
    goto LAB_00101668;
  default:
    goto switchD_001016ab_caseD_64;
  case 0x6c:
    in_R9 = (uint *)dcgettext(0,"invalid length",5);
    digest_length = xnumtoumax(_optarg,10,0,0x200,&_LC8,in_R9,0,2);
    local_118 = _optarg;
    goto LAB_00101668;
  case 0x74:
    in_R9 = (uint *)0x0;
    local_120 = (byte **)((ulong)local_120._4_4_ << 0x20);
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
  local_120 = (byte **)CONCAT44(local_120._4_4_,1);
  pFVar21 = (FILE *)0x1;
  goto LAB_00101668;
switchD_001016ab_caseD_64:
  puVar6 = (uint *)usage(1);
LAB_00101b09:
  uVar22 = (ulong)puVar6 & 0xffffffff;
LAB_00101b0c:
  do {
    uVar14 = (uint)uVar22;
    if (have_read_stdin == '\0') {
LAB_00101b19:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return (uVar14 ^ 1) & 0xff;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    local_120 = (byte **)CONCAT71(local_120._1_7_,(byte)uVar22);
    iVar3 = rpl_fclose(_stdin);
    uVar14 = (uint)(byte)uVar22;
    if (iVar3 != -1) goto LAB_00101b19;
    param_2 = (undefined8 *)dcgettext(0,"standard input",5);
    piVar9 = __errno_location();
    error(1,*piVar9,param_2);
LAB_001023b3:
    pcVar20 = "the --tag option is meaningless when verifying checksums";
    if ((byte)local_110 != '\0') goto LAB_00101aea;
LAB_00101ac8:
    if (-1 < (int)local_120) {
      pcVar20 = "the --binary and --text options are meaningless when verifying checksums";
joined_r0x0010187f:
      if ((byte)local_110 != '\0') goto LAB_00101aea;
    }
    if ((((ignore_missing == '\x01') &&
         (pcVar20 = "the --ignore-missing option is meaningful only when verifying checksums",
         (byte)local_110 == 0)) ||
        ((status_only == 1 &&
         (pcVar20 = "the --status option is meaningful only when verifying checksums",
         (byte)local_110 == 0)))) ||
       ((warn == '\x01' &&
        (pcVar20 = "the --warn option is meaningful only when verifying checksums",
        (byte)local_110 == 0)))) goto LAB_00101aea;
    pcVar20 = "the --quiet option is meaningful only when verifying checksums";
    bVar2 = quiet ^ 1 | (byte)local_110;
    uVar22 = (ulong)(uint)bVar2;
    if ((bVar2 == 0) ||
       (pcVar20 = "the --strict option is meaningful only when verifying checksums",
       (((byte)local_110 ^ 1) & strict) != 0)) goto LAB_00101aea;
    puVar6 = (uint *)(param_2 + (int)puVar16);
    lVar4 = (long)_optind;
    local_b0 = puVar6;
    if (_optind == (int)puVar16) {
      local_b0 = puVar6 + 2;
      *(undefined **)puVar6 = &_LC60;
    }
    pcVar20 = (char *)(param_2 + lVar4);
  } while (local_b0 <= pcVar20);
  __s = *(undefined1 **)pcVar20;
  if ((byte)local_110 != 0) {
    local_c0 = (long)&local_88 + 7;
    local_b1 = (byte)local_110;
    pbVar7 = __s;
    do {
      local_e8 = local_c0 & 0xfffffffffffffff8;
      local_b8 = (byte)*__s - 0x2d;
      if ((local_b8 == 0) && (local_b8 = (uint)(byte)__s[1], local_b8 == 0)) {
        have_read_stdin = '\x01';
        local_f0 = (byte *)dcgettext(0,"standard input",5);
        pFVar21 = _stdin;
LAB_00101bc4:
        local_118 = &local_a0;
        local_b2 = 0;
        puVar16 = (undefined *)0x1;
        local_120 = &local_a8;
        local_a8 = (byte *)0x0;
        local_a0 = 0;
        local_b3 = '\0';
        local_e0 = 0;
        local_d8 = 0;
        local_c8 = 0;
        local_d0 = (uint *)pcVar20;
LAB_00101c28:
        in_R9 = (uint *)__getdelim((char **)local_120,local_118,10,pFVar21);
        __s = local_a8;
        if (0 < (long)in_R9) {
          pcVar17 = (char *)in_R9;
          if (*local_a8 == 0x23) goto LAB_00101da0;
          lVar4 = (long)in_R9 - (ulong)((local_a8 + -1)[(long)in_R9] == 10);
          pcVar17 = (char *)(lVar4 - (ulong)(local_a8[lVar4 - (ulong)(0 < lVar4)] == 0xd));
          pcVar20 = pcVar17;
          if ((uint *)pcVar17 == (uint *)0x0) goto LAB_00101da0;
          local_a8[(long)pcVar17] = 0;
          bVar2 = *local_a8;
          if ((bVar2 == 0x20) || (bVar2 == 9)) {
            puVar19 = (uint *)0x0;
            do {
              do {
                puVar19 = (uint *)((long)puVar19 + 1);
                bVar2 = local_a8[(long)puVar19];
              } while (bVar2 == 0x20);
            } while (bVar2 == 9);
            pbVar7 = local_a8 + (long)puVar19;
          }
          else {
            puVar19 = (uint *)0x0;
            pbVar7 = local_a8;
          }
          local_101 = 0;
          if (bVar2 == 0x5c) {
            puVar19 = (uint *)((long)puVar19 + 1);
            pbVar7 = local_a8 + (long)puVar19;
            local_101 = (byte)local_110;
          }
          in_R9 = (uint *)pcVar17;
          iVar3 = strncmp((char *)pbVar7,"BLAKE2b",7);
          if (iVar3 != 0) goto LAB_00101df8;
          puVar6 = (uint *)((long)puVar19 + 7);
          pbVar12 = __s + (long)puVar6;
          bVar2 = *pbVar12;
          *pbVar12 = 0;
          iVar3 = strcmp((char *)pbVar7,"BLAKE2b");
          if (iVar3 == 0) {
            if (bVar2 == 0x28) {
              *pbVar12 = 0x28;
              digest_length = 0x200;
            }
            else {
              puVar6 = puVar19 + 2;
              digest_length = 0x200;
              if (bVar2 == 0x2d) {
                iVar3 = xstrtoumax(__s + (long)puVar6,&local_90,0,&local_98,0);
                if ((((iVar3 != 0) || (local_98 == 0)) || (digest_length < local_98)) ||
                   ((local_98 & 7) != 0)) goto LAB_00101d85;
                puVar6 = (uint *)(CONCAT71(local_90._1_7_,(char)local_90) - (long)__s);
                digest_length = local_98;
              }
            }
            puVar18 = (uint *)(digest_length >> 2);
            if (__s[(long)puVar6] == 0x20) {
              puVar6 = (uint *)((long)puVar6 + 1);
            }
            digest_hex_bytes = puVar18;
            if (__s[(long)puVar6] == 0x28) {
              pcVar20 = (char *)((long)pcVar17 - ((long)puVar6 + 1));
              if ((uint *)pcVar20 != (uint *)0x0) {
                __s = __s + (long)((long)puVar6 + 1);
                for (pbVar7 = (byte *)((long)pcVar20 + -1);
                    (pbVar7 != (byte *)0x0 && (__s[(long)pbVar7] != 0x29)); pbVar7 = pbVar7 + -1) {
                }
                in_R9 = (uint *)(__s + (long)pbVar7);
                if (((byte)*in_R9 == 0x29) &&
                   ((local_101 == 0 || (lVar4 = filename_unescape(__s,pbVar7), lVar4 != 0)))) {
                  *(byte *)in_R9 = 0;
                  do {
                    do {
                      pbVar7 = pbVar7 + 1;
                      bVar2 = __s[(long)pbVar7];
                    } while (bVar2 == 0x20);
                  } while (bVar2 == 9);
                  if (bVar2 == 0x3d) {
                    do {
                      do {
                        pbVar7 = pbVar7 + 1;
                      } while (__s[(long)pbVar7] == 0x20);
                    } while (__s[(long)pbVar7] == 9);
                    puVar19 = (uint *)((long)pcVar20 - (long)pbVar7);
                    pcVar20 = (char *)puVar19;
                    if (puVar18 == puVar19) {
                      pbVar7 = __s + (long)pbVar7;
                      puVar6 = (uint *)0x0;
                      while( true ) {
                        if (puVar6 == puVar19) {
                          bVar24 = pbVar7[(long)puVar6] == 0;
                          pcVar20 = (char *)puVar19;
                          goto LAB_0010263c;
                        }
                        uVar14 = pbVar7[(long)puVar6] - 0x30;
                        pcVar20 = (char *)puVar19;
                        if ((0x36 < (byte)uVar14) ||
                           (pcVar20 = (char *)puVar19,
                           (0x7e0000007e03ffU >> ((ulong)uVar14 & 0x3f) & 1) == 0)) break;
                        puVar6 = (uint *)((long)puVar6 + 1);
                      }
                    }
                  }
                }
              }
            }
          }
LAB_00101d85:
          do {
            pcVar17 = (char *)in_R9;
            pbVar7 = __s;
            if (warn != '\0') {
LAB_001028ff:
              pcVar20 = (char *)quotearg_n_style_colon(0,3,local_f0);
              uVar5 = dcgettext(0,"%s: %ju: improperly formatted %s checksum line",5);
              pcVar17 = "BLAKE2b";
              error(0,0,uVar5,pcVar20);
              pbVar7 = __s;
            }
            local_c8 = local_c8 + 1;
LAB_00101da0:
            bVar2 = (byte)pFVar21->_flags;
            in_R9 = (uint *)pcVar17;
            pcVar17 = pcVar20;
            __s = pbVar7;
            while( true ) {
              puVar16 = puVar16 + 1;
              pbVar7 = __s;
              if ((bVar2 & 0x30) != 0) goto LAB_00101ff0;
              pcVar20 = pcVar17;
              if (puVar16 != (undefined *)0x0) goto LAB_00101c28;
              pbVar7 = (byte *)quotearg_n_style_colon(0,3,local_f0);
              uVar5 = dcgettext(0,"%s: too many checksum lines",5);
              error(1,0,uVar5,pbVar7);
LAB_00101df8:
              bVar2 = *pbVar7;
              pcVar20 = pcVar17;
              if ((ulong)((long)pcVar17 - (long)puVar19) <
                  (ulong)(bVar2 == 0x5c) + min_digest_line_length) break;
              digest_hex_bytes = (uint *)0x0;
              puVar6 = (uint *)0x0;
              uVar14 = *pbVar7 - 0x30;
              bVar13 = (byte)uVar14;
              bVar24 = false;
              while ((bVar13 < 0x37 &&
                     (bVar23 = (0x7e0000007e03ffU >> ((ulong)uVar14 & 0x3f) & 1) != 0, bVar23))) {
                puVar6 = (uint *)((long)puVar6 + 1);
                uVar14 = pbVar7[(long)puVar6] - 0x30;
                bVar13 = (byte)uVar14;
                bVar24 = bVar23;
              }
              if (((!bVar24) ||
                  (digest_hex_bytes = puVar6, (byte *)0x7e < (byte *)((long)puVar6 + -2))) ||
                 (((ulong)puVar6 & 1) != 0)) break;
              digest_length = (long)puVar6 * 4;
              pbVar12 = pbVar7;
              puVar18 = puVar19;
              while (((bVar2 != 0 && (bVar2 != 0x20)) && (bVar2 != 9))) {
                puVar18 = (uint *)((long)puVar18 + 1);
                pbVar12 = __s + (long)puVar18;
                bVar2 = __s[(long)puVar18];
              }
              if (puVar18 == (uint *)pcVar17) break;
              *pbVar12 = 0;
              puVar19 = (uint *)((long)puVar18 - (long)puVar19);
              pbVar12 = pbVar7;
              if (puVar6 != puVar19) break;
              do {
                if ((0x36 < (byte)(*pbVar12 - 0x30)) ||
                   ((0x7e0000007e03ffU >> ((ulong)(*pbVar12 - 0x30) & 0x3f) & 1) == 0))
                goto LAB_00101d85;
                pbVar12 = pbVar12 + 1;
              } while (pbVar12 + -(long)pbVar7 < puVar19);
              if (*pbVar12 != 0) break;
              pbVar12 = (byte *)((long)puVar18 + 1);
              if (((long)pcVar17 - (long)pbVar12 == 1) ||
                 (((__s + 1)[(long)puVar18] != 0x20 && ((__s + 1)[(long)puVar18] != 0x2a)))) {
                if (bsd_reversed == 0) break;
                bsd_reversed = 1;
              }
              else if (bsd_reversed != 1) {
                pbVar12 = (byte *)((long)puVar18 + 2);
                bsd_reversed = 0;
              }
              __s = __s + (long)pbVar12;
              if (local_101 != 0) {
                lVar4 = filename_unescape(__s,(long)pcVar17 - (long)pbVar12);
                bVar24 = lVar4 != 0;
LAB_0010263c:
                if (!bVar24) break;
              }
              if (((local_b8 == 0) && (*__s == 0x2d)) && (__s[1] == 0)) break;
              pcVar17 = (char *)0x0;
              if (status_only == 0) {
                sVar8 = strcspn(__s,"\\\n\r");
                pcVar17 = (char *)(ulong)(__s[sVar8] != 0);
              }
              bVar2 = digest_file_isra_0(__s,local_e8,&local_90);
              iVar3 = (int)pcVar17;
              if (bVar2 == 0) {
                if (status_only == 0) {
                  if (iVar3 != 0) {
                    pcVar20 = _stdout->_IO_write_ptr;
                    if (pcVar20 < _stdout->_IO_write_end) {
                      _stdout->_IO_write_ptr = pcVar20 + 1;
                      *pcVar20 = '\\';
                    }
                    else {
                      __overflow(_stdout,0x5c);
                    }
                  }
                  print_filename(__s,pcVar17);
                  uVar5 = dcgettext(0,"FAILED open or read",5);
                  __printf_chk(2,": %s\n",uVar5);
                }
                local_d8 = local_d8 + 1;
              }
              else if ((ignore_missing == '\0') || ((char)local_90 == '\0')) {
                if (digest_hex_bytes == puVar19) {
                  uVar22 = (ulong)puVar19 >> 1;
                  if (uVar22 != 0) {
                    uVar10 = 0;
                    do {
                      bVar13 = pbVar7[uVar10 * 2];
                      uVar14 = (uint)bVar13;
                      if (bVar13 - 0x41 < 0x1a) {
                        uVar14 = bVar13 + 0x20;
                      }
                      in_R9 = (uint *)(ulong)(uint)(int)(char)bin2hex_0[*(byte *)(local_e8 + uVar10)
                                                                        >> 4];
                      if ((int)(char)bin2hex_0[*(byte *)(local_e8 + uVar10) >> 4] != uVar14) {
LAB_0010253a:
                        if (uVar22 != uVar10) goto LAB_0010240c;
                        break;
                      }
                      bVar13 = pbVar7[uVar10 * 2 + 1];
                      in_R9 = (uint *)(ulong)(bVar13 + 0x20);
                      uVar14 = (uint)bVar13;
                      if (bVar13 - 0x41 < 0x1a) {
                        uVar14 = bVar13 + 0x20;
                      }
                      if ((int)(char)bin2hex_0[*(byte *)(local_e8 + uVar10) & 0xf] != uVar14)
                      goto LAB_0010253a;
                      uVar10 = uVar10 + 1;
                    } while (uVar22 != uVar10);
                  }
                  local_b2 = status_only;
                  if ((status_only == 0) && (local_b2 = quiet, quiet == 0)) {
                    local_b2 = bVar2;
                    if (iVar3 != 0) goto LAB_00102572;
                    print_filename(__s,0);
                    local_101 = bVar2;
LAB_001025b0:
                    if (quiet == 0) {
                      pcVar20 = "OK";
                      goto LAB_00102440;
                    }
                  }
                }
                else {
LAB_0010240c:
                  local_e0 = local_e0 + 1;
                  if (status_only == 0) {
                    bVar2 = 0;
                    if (iVar3 == 0) {
                      print_filename(__s,0);
                    }
                    else {
LAB_00102572:
                      local_101 = bVar2;
                      pcVar20 = _stdout->_IO_write_ptr;
                      if (pcVar20 < _stdout->_IO_write_end) {
                        _stdout->_IO_write_ptr = pcVar20 + 1;
                        *pcVar20 = '\\';
                      }
                      else {
                        __overflow(_stdout,0x5c);
                      }
                      print_filename(__s,1);
                      if (local_101 != 0) goto LAB_001025b0;
                    }
                    pcVar20 = "FAILED";
LAB_00102440:
                    uVar5 = dcgettext(0,pcVar20,5);
                    __printf_chk(2,": %s\n",uVar5);
                  }
                }
              }
              bVar2 = (byte)pFVar21->_flags;
              local_b3 = (byte)local_110;
            }
          } while( true );
        }
LAB_00101ff0:
        free(local_a8);
        uVar14 = pFVar21->_flags & 0x20;
        pcVar20 = (char *)local_d0;
        if (local_b8 == 0) {
          clearerr_unlocked(pFVar21);
LAB_0010201b:
          iVar3 = -(uint)(uVar14 == 0);
LAB_00102020:
          if (iVar3 < 0) {
            if (local_b3 == '\0') {
              uVar5 = quotearg_n_style_colon(0,3,local_f0);
              pcVar17 = "%s: no properly formatted checksum lines found";
LAB_00102744:
              uVar11 = dcgettext(0,pcVar17,5);
              error(0,0,uVar11,uVar5);
              bVar2 = 0;
            }
            else {
              if (status_only == 0) {
                if (local_c8 != 0) {
                  uVar5 = dcngettext(0,"WARNING: %ju line is improperly formatted",
                                     "WARNING: %ju lines are improperly formatted",local_c8);
                  error(0,0,uVar5,local_c8);
                }
                if (local_d8 != 0) {
                  uVar5 = dcngettext(0,"WARNING: %ju listed file could not be read",
                                     "WARNING: %ju listed files could not be read",local_d8);
                  error(0,0,uVar5,local_d8);
                }
                if (local_e0 != 0) {
                  uVar5 = dcngettext(0,"WARNING: %ju computed checksum did NOT match",
                                     "WARNING: %ju computed checksums did NOT match",local_e0);
                  error(0,0,uVar5,local_e0);
                }
                if (ignore_missing == '\0') goto LAB_001020c6;
                if (local_b2 == 0) {
                  uVar5 = quotearg_n_style_colon(0,3,local_f0);
                  pcVar17 = "%s: no file was verified";
                  goto LAB_00102744;
                }
LAB_00102078:
                if (local_d8 == 0 && local_e0 == 0) {
                  bVar2 = strict ^ 1 | local_c8 == 0;
                  goto LAB_0010209c;
                }
              }
              else {
LAB_001020c6:
                if (local_b2 != 0) goto LAB_00102078;
              }
              bVar2 = 0;
            }
LAB_0010209c:
            bVar2 = bVar2 & 1;
            goto LAB_0010209f;
          }
          puVar16 = (undefined *)quotearg_n_style_colon(0,3,local_f0);
          puVar15 = &_LC4;
          if (iVar3 == 0) goto LAB_001026be;
        }
        else {
          iVar3 = rpl_fclose();
          if (iVar3 == 0) goto LAB_0010201b;
          if (uVar14 == 0) {
            piVar9 = __errno_location();
            iVar3 = *piVar9;
            goto LAB_00102020;
          }
          puVar16 = (undefined *)quotearg_n_style_colon(0,3,local_f0);
LAB_001026be:
          iVar3 = 0;
          puVar15 = (undefined *)dcgettext(0,"%s: read error",5);
        }
        error(0,iVar3,puVar15,puVar16);
        bVar2 = 0;
      }
      else {
        pFVar21 = (FILE *)fopen_safer(__s,&_LC3);
        local_f0 = __s;
        if (pFVar21 != (FILE *)0x0) goto LAB_00101bc4;
        uVar5 = quotearg_n_style_colon(0,3,__s);
        piVar9 = __errno_location();
        error(0,*piVar9,&_LC4,uVar5);
        bVar2 = 0;
      }
LAB_0010209f:
      local_b1 = local_b1 & bVar2;
      pcVar20 = (char *)((long)pcVar20 + 8);
      if (local_b0 <= pcVar20) goto LAB_0010235c;
      __s = *(undefined1 **)pcVar20;
    } while( true );
  }
  local_118 = &local_90;
  puVar19 = (uint *)(ulong)(uint)bVar2;
  param_2 = &local_88;
  puVar16 = &_LC81;
  local_101 = (byte)in_R9;
  local_110 = local_b0;
  do {
    puVar6 = (uint *)digest_file_isra_0(__s,param_2,local_118);
    if ((char)puVar6 != '\0') {
      local_b4 = digest_delim;
      local_b8 = 0;
      puVar6 = puVar19;
      if ((digest_delim == 10) && (sVar8 = strcspn(__s,"\\\n\r"), __s[sVar8] != 0)) {
        pcVar17 = _stdout->_IO_write_ptr;
        pFVar21 = _stdout;
        if (pcVar17 < _stdout->_IO_write_end) {
          _stdout->_IO_write_ptr = pcVar17 + 1;
          *pcVar17 = '\\';
        }
        else {
LAB_0010269b:
          __overflow(pFVar21,0x5c);
          puVar6 = puVar19;
        }
        local_b8 = 1;
      }
      if (local_101 == 0) {
        if ((ulong)digest_hex_bytes >> 1 != 0) {
LAB_001019fd:
          uVar22 = 0;
          do {
            puVar1 = (undefined1 *)((long)param_2 + uVar22);
            uVar22 = uVar22 + 1;
            __printf_chk(2,puVar16,*puVar1);
          } while (uVar22 < (ulong)digest_hex_bytes >> 1);
          if (local_101 != 0) goto LAB_00101a8c;
        }
        pcVar17 = _stdout->_IO_write_ptr;
        if (pcVar17 < _stdout->_IO_write_end) {
          _stdout->_IO_write_ptr = pcVar17 + 1;
          *pcVar17 = ' ';
        }
        else {
          __overflow(_stdout,0x20);
        }
        iVar3 = 0x20;
        if (0 < (int)local_120) {
          iVar3 = 0x2a;
        }
        pcVar17 = _stdout->_IO_write_ptr;
        if (pcVar17 < _stdout->_IO_write_end) {
          _stdout->_IO_write_ptr = pcVar17 + 1;
          *pcVar17 = (char)iVar3;
        }
        else {
          __overflow(_stdout,iVar3);
        }
        print_filename(__s,local_b8);
      }
      else {
        fwrite_unlocked("BLAKE2b",1,7,_stdout);
        if (digest_length < 0x200) {
          __printf_chk(2,&_LC78);
        }
        fwrite_unlocked(&_LC79,1,2,_stdout);
        print_filename(__s,local_b8);
        fwrite_unlocked(&_LC80,1,4,_stdout);
        if ((ulong)digest_hex_bytes >> 1 != 0) goto LAB_001019fd;
      }
LAB_00101a8c:
      pbVar7 = (byte *)_stdout->_IO_write_ptr;
      puVar19 = puVar6;
      if (pbVar7 < _stdout->_IO_write_end) {
        _stdout->_IO_write_ptr = (char *)(pbVar7 + 1);
        *pbVar7 = local_b4;
      }
      else {
        __overflow(_stdout,(uint)local_b4);
      }
    }
    pcVar20 = (char *)((long)pcVar20 + 8);
    if (local_110 <= pcVar20) goto LAB_00101b09;
    __s = *(undefined1 **)pcVar20;
    puVar19 = (uint *)((ulong)puVar6 & 0xffffffff);
  } while( true );
LAB_00101aea:
  uVar5 = dcgettext(0,pcVar20,5);
  error(0,0,uVar5);
  goto switchD_001016ab_caseD_64;
LAB_0010235c:
  uVar22 = (ulong)local_b1;
  goto LAB_00101b0c;
}


