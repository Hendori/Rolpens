
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



ulong valid_digits(byte *param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  uint uVar2;
  ulong uVar3;
  byte *pbVar4;
  ulong uVar5;
  bool bVar6;
  
  pbVar4 = param_1;
  if ((((digest_length >> 3) + 2) / 3) * 4 == param_2) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = digest_length;
    uVar3 = digest_length -
            ((SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),8) & 0xfffffffffffffffe) +
            digest_length / 3);
    uVar5 = param_2 - uVar3;
    if (uVar3 != param_2) {
      uVar3 = 0;
      do {
        if ((char)(&base64_to_int)[*param_1] < '\0') {
          return 0;
        }
        uVar3 = uVar3 + 1;
        param_1 = param_1 + 1;
      } while (uVar3 < uVar5);
      pbVar4 = param_1;
      if (uVar3 < param_2) {
        pbVar4 = param_1 + (param_2 - uVar3);
        do {
          if (*param_1 != 0x3d) {
            return 0;
          }
          param_1 = param_1 + 1;
        } while (pbVar4 != param_1);
      }
    }
  }
  else {
    uVar3 = 0;
    if (digest_hex_bytes != param_2) {
      return 0;
    }
    if (param_2 != 0) {
      pbVar4 = param_1 + param_2;
      do {
        uVar2 = *param_1 - 0x30;
        if (0x36 < (byte)uVar2) {
          return 0;
        }
        bVar6 = (0x7e0000007e03ffU >> ((ulong)uVar2 & 0x3f) & 1) != 0;
        uVar3 = (ulong)CONCAT31((int3)(uVar2 >> 8),bVar6);
        if (!bVar6) {
          return uVar3;
        }
        param_1 = param_1 + 1;
      } while (pbVar4 != param_1);
    }
  }
  return CONCAT71((int7)(uVar3 >> 8),*pbVar4 == 0);
}



void sm3_sum_stream(void)

{
  sm3_stream();
  return;
}



void blake2b_sum_stream(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  blake2b_stream(param_1,param_2,*param_3);
  return;
}



void sha512_sum_stream(void)

{
  sha512_stream();
  return;
}



void sha384_sum_stream(void)

{
  sha384_stream();
  return;
}



void sha256_sum_stream(void)

{
  sha256_stream();
  return;
}



void sha224_sum_stream(void)

{
  sha224_stream();
  return;
}



void sha1_sum_stream(void)

{
  sha1_stream();
  return;
}



void md5_sum_stream(void)

{
  md5_stream();
  return;
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
LAB_00100260:
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
      goto LAB_00100260;
    }
    param_1 = param_1 + 1;
    fwrite_unlocked(&_LC2,1,2,_stdout);
    bVar1 = *param_1;
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void output_file(char *param_1,int param_2,void *param_3,char param_4,char param_5,byte param_6)

{
  undefined1 *puVar1;
  char *pcVar2;
  byte *pbVar3;
  size_t sVar4;
  int iVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  undefined4 local_ac;
  char local_a8 [104];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 != '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      fwrite_unlocked(param_3,1,digest_length >> 3,_stdout);
      return;
    }
    goto LAB_00100642;
  }
  local_ac = 0;
  if ((param_6 == 10) && (sVar4 = strcspn(param_1,"\\\n\r"), param_1[sVar4] != '\0')) {
    pcVar2 = _stdout->_IO_write_ptr;
    if (pcVar2 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = pcVar2 + 1;
      *pcVar2 = '\\';
    }
    else {
      __overflow(_stdout,0x5c);
    }
    local_ac = 1;
    if (param_5 == '\0') goto LAB_00100368;
LAB_001004b0:
    fputs_unlocked(*(char **)(algorithm_tags + (ulong)cksum_algorithm * 8),_stdout);
    if ((cksum_algorithm == 10) && (digest_length < 0x200)) {
      __printf_chk(2,&_LC4);
    }
    fwrite_unlocked(&_LC5,1,2,_stdout);
    print_filename(param_1,local_ac);
    fwrite_unlocked(&_LC6,1,4,_stdout);
    if (base64_digest == '\0') {
      if (digest_hex_bytes >> 1 != 0) {
LAB_00100381:
        uVar6 = 0;
        do {
          puVar1 = (undefined1 *)((long)param_3 + uVar6);
          uVar6 = uVar6 + 1;
          __printf_chk(2,&_LC7,*puVar1);
        } while (uVar6 < digest_hex_bytes >> 1);
        goto LAB_001003b7;
      }
    }
    else {
LAB_00100540:
      base64_encode(param_3,digest_length >> 3,local_a8,0x59);
      fputs_unlocked(local_a8,_stdout);
LAB_001003b7:
      if (param_5 == '\0') goto LAB_001003bc;
    }
  }
  else {
    if (param_5 != '\0') goto LAB_001004b0;
LAB_00100368:
    if (base64_digest != '\0') goto LAB_00100540;
    if (digest_hex_bytes >> 1 != 0) goto LAB_00100381;
LAB_001003bc:
    pcVar2 = _stdout->_IO_write_ptr;
    if (pcVar2 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = pcVar2 + 1;
      *pcVar2 = ' ';
    }
    else {
      __overflow(_stdout,0x20);
    }
    pcVar2 = _stdout->_IO_write_ptr;
    iVar5 = (-(uint)(param_2 == 0) & 0xfffffff6) + 0x2a;
    if (pcVar2 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = pcVar2 + 1;
      *pcVar2 = (char)iVar5;
    }
    else {
      __overflow(_stdout,iVar5);
    }
    print_filename(param_1,local_ac);
  }
  pbVar3 = (byte *)_stdout->_IO_write_ptr;
  if (pbVar3 < _stdout->_IO_write_end) {
    _stdout->_IO_write_ptr = (char *)(pbVar3 + 1);
    *pbVar3 = param_6;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    __overflow(_stdout,(uint)param_6);
    return;
  }
LAB_00100642:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 digest_file_isra_0(byte *param_1,undefined8 param_2,undefined1 *param_3,ulong *param_4)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  FILE *__stream;
  int *piVar5;
  uint uVar6;
  
  uVar6 = *param_1 - 0x2d;
  if (uVar6 == 0) {
    uVar6 = (uint)param_1[1];
  }
  *param_3 = 0;
  if (uVar6 == 0) {
    have_read_stdin = 1;
    __stream = _stdin;
  }
  else {
    __stream = (FILE *)fopen_safer(param_1,&_LC8);
    if (__stream == (FILE *)0x0) {
      if ((ignore_missing != '\0') && (piVar5 = __errno_location(), *piVar5 == 2)) {
        *param_3 = 1;
        return 1;
      }
      uVar4 = quotearg_n_style_colon(0,3,param_1);
      piVar5 = __errno_location();
      error(0,*piVar5,&_LC9,uVar4);
      return 0;
    }
  }
  fadvise(__stream,2);
  uVar3 = (ulong)cksum_algorithm;
  if (cksum_algorithm == 10) {
    *param_4 = digest_length >> 3;
  }
  iVar1 = (**(code **)(cksumfns + uVar3 * 8))(__stream,param_2,param_4);
  if (iVar1 == 0) {
    if (uVar6 == 0) {
      clearerr_unlocked(__stream);
      return 1;
    }
    iVar1 = rpl_fclose();
    if (iVar1 == 0) {
      return 1;
    }
    piVar5 = __errno_location();
LAB_001007b6:
    iVar1 = *piVar5;
  }
  else {
    piVar5 = __errno_location();
    iVar1 = *piVar5;
    if (uVar6 == 0) {
      clearerr_unlocked(__stream);
    }
    else {
      iVar2 = rpl_fclose();
      if (iVar2 != 0) {
        if (iVar1 != 0) goto LAB_00100718;
        goto LAB_001007b6;
      }
    }
  }
  if (iVar1 == 0) {
    return 1;
  }
LAB_00100718:
  uVar4 = quotearg_n_style_colon(0,3,param_1);
  error(0,iVar1,&_LC9,uVar4);
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void usage(int param_1)

{
  FILE *pFVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
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
  
  uVar5 = _program_name;
  ppuVar7 = &local_a8;
  local_30 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(_stderr,2,uVar3,uVar5);
    goto LAB_0010085a;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... [FILE]...\n",5);
  __printf_chk(2,uVar3,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "Print or verify checksums.\nBy default use the 32 bit CRC algorithm.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"\nWith no FILE, or when FILE is -, read standard input.\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -a, --algorithm=TYPE  select the digest type to use.  See DIGEST below\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --base64          emit base64-encoded digests, not hexadecimal\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -c, --check           read checksums from the FILEs and check them\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -l, --length=BITS     digest length in bits; must not exceed the max for\n                          the blake2 algorithm and must be a multiple of 8\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --raw             emit a raw binary digest, not hexadecimal\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --tag             create a BSD-style checksum (the default)\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --untagged        create a reversed style checksum, without digest type\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -z, --zero            end each output line with NUL, not newline,\n                          and disable file name escaping\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nThe following five options are useful only when verifying checksums:\n      --ignore-missing  don\'t fail or report status for missing files\n      --quiet           don\'t print OK for each successfully verified file\n      --status          don\'t output anything, status code shows success\n      --strict          exit non-zero for improperly formatted checksum lines\n  -w, --warn            warn about improperly formatted checksum lines\n\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --debug           indicate which implementation used\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nDIGEST determines the digest algorithm and default output format:\n  sysv      (equivalent to sum -s)\n  bsd       (equivalent to sum -r)\n  crc       (equivalent to cksum)\n  crc32b    (only available through cksum)\n  md5       (equivalent to md5sum)\n  sha1      (equivalent to sha1sum)\n  sha224    (equivalent to sha224sum)\n  sha256    (equivalent to sha256sum)\n  sha384    (equivalent to sha384sum)\n  sha512    (equivalent to sha512sum)\n  blake2b   (equivalent to b2sum)\n  sm3       (only available through cksum)\n\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "When checking, the input should be a former output of this program,\nor equivalent standalone program.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pcVar4 = "[";
  local_a8 = &_LC10;
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
    iVar2 = strcmp("cksum",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)ppuVar7 + 0x10);
    ppuVar7 = (undefined **)((long)ppuVar7 + 0x10);
  } while (pcVar4 != (char *)0x0);
  pcVar4 = *(char **)((long)ppuVar7 + 8);
  if (pcVar4 == (char *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    pcVar4 = "cksum";
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) goto LAB_00100c1d;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","cksum");
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) {
LAB_00100c1d:
      iVar2 = strncmp(pcVar6,"en_",3);
      pFVar1 = _stdout;
      if (iVar2 != 0) {
        pcVar6 = (char *)dcgettext(0,
                                   "Report any translation bugs to <https://translationproject.org/team/>\n"
                                   ,5);
        fputs_unlocked(pcVar6,pFVar1);
      }
    }
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = "";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","cksum");
    if (pcVar4 == "cksum") {
      pcVar6 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,pcVar4,pcVar6);
LAB_0010085a:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte main(uint param_1,undefined8 *param_2)

{
  _IO_FILE **pp_Var1;
  byte bVar2;
  _IO_marker **pp_Var3;
  char **ppcVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  __ssize_t _Var9;
  size_t sVar10;
  _IO_marker **pp_Var11;
  undefined8 uVar12;
  int *piVar13;
  ulong uVar14;
  byte *pbVar15;
  _IO_FILE **pp_Var16;
  FILE *pFVar17;
  undefined *puVar18;
  uint uVar19;
  long lVar20;
  byte *pbVar21;
  undefined1 *puVar22;
  char **ppcVar23;
  uint *puVar24;
  char *pcVar25;
  char **in_R9;
  byte *pbVar26;
  _IO_FILE **pp_Var27;
  char *__s;
  undefined1 *puVar28;
  byte *pbVar29;
  long in_FS_OFFSET;
  bool bVar30;
  bool bVar31;
  undefined8 local_198;
  char ***local_190;
  size_t *local_188;
  byte local_169;
  uint *local_160;
  ulong local_158;
  FILE *local_150;
  FILE *local_148;
  byte *local_140;
  FILE *local_138;
  char **local_130;
  uint local_128;
  byte local_124;
  byte local_123;
  byte local_122;
  byte local_121;
  _IO_marker **local_120;
  char **local_118;
  size_t local_110;
  FILE local_108;
  
  pbVar29 = (byte *)0xffffffff;
  puVar28 = long_options;
  pp_Var27 = (_IO_FILE **)(ulong)param_1;
  local_108._unused2._4_8_ = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils");
  __s = "a:l:bctwz";
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  setvbuf(_stdout,(char *)0x0,1,0);
  local_198 = (FILE *)CONCAT44(local_198._4_4_,0xffffffff);
  local_169 = 0;
  local_190 = (char ***)&_LC13;
  puVar24 = &switchD_00101f8d::switchdataD_001032e0;
  while( true ) {
    iVar7 = getopt_long(pp_Var27,param_2,"a:l:bctwz",long_options,0);
    if (iVar7 == -1) break;
    if (0x88 < iVar7) goto switchD_00101f8d_caseD_64;
    if (iVar7 < 0x61) {
      if (iVar7 == -0x83) {
        uVar12 = proper_name_lite("Q. Frank Xia","Q. Frank Xia");
        uVar8 = proper_name_lite("Padraig Brady",&_LC53);
        version_etc(_stdout,"cksum","GNU coreutils",_Version,uVar8,uVar12,0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar7 == -0x82) {
        usage(0);
        goto LAB_00103046;
      }
      goto switchD_00101f8d_caseD_64;
    }
    switch(iVar7) {
    case 0x61:
      in_R9 = _argmatch_die;
      lVar20 = __xargmatch_internal
                         ("--algorithm",_optarg,algorithm_args,algorithm_types,4,_argmatch_die,0);
      cksum_algorithm = *(uint *)(algorithm_types + lVar20 * 4);
      algorithm_specified = '\x01';
      break;
    case 0x62:
      pbVar29 = (byte *)0x1;
      break;
    case 99:
      local_169 = 1;
      break;
    default:
      goto switchD_00101f8d_caseD_64;
    case 0x6c:
      uVar12 = dcgettext(0,"invalid length",5);
      in_R9 = (char **)0x2;
      digest_length = xnumtoumax(_optarg,10,0,0x200,&_LC13,uVar12,0);
      local_190 = _optarg;
      break;
    case 0x74:
      pbVar29 = (byte *)0x0;
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
      local_198 = (FILE *)CONCAT44(local_198._4_4_,1);
      pbVar29 = (byte *)0x1;
      break;
    case 0x85:
      bVar30 = (int)local_198 == 1;
      local_198 = (FILE *)((ulong)local_198._4_4_ << 0x20);
      if (bVar30) {
        pbVar29 = (byte *)0xffffffff;
      }
      break;
    case 0x86:
      cksum_debug = 1;
      break;
    case 0x87:
      raw_digest = '\x01';
      break;
    case 0x88:
      base64_digest = '\x01';
    }
  }
  min_digest_line_length = 3;
  if (digest_length == 0) {
    digest_length = (ulong)*(int *)(algorithm_bits + (ulong)cksum_algorithm * 4);
    digest_hex_bytes = (byte *)(digest_length >> 2);
    if (((cksum_algorithm < 4) && (local_169 != 0)) &&
       (pcVar25 = "--check is not supported with --algorithm={bsd,sysv,crc,crc32b}",
       algorithm_specified != '\0')) goto LAB_00103224;
  }
  else {
    if (cksum_algorithm != 10) goto LAB_001032b3;
    if (0x200 < digest_length) goto LAB_0010323c;
    if ((digest_length & 7) != 0) {
      uVar12 = quote(local_190);
      uVar8 = dcgettext(0,"invalid length: %s",5);
      error(0,0,uVar8,uVar12);
      pcVar25 = "length is not a multiple of 8";
      goto LAB_00103224;
    }
    digest_hex_bytes = (byte *)(digest_length >> 2);
  }
  if ((base64_digest == '\0') || (raw_digest == '\0')) {
    bVar30 = (int)local_198 != 0;
    puVar24 = (uint *)CONCAT71(0x1032,bVar30);
    iVar7 = (int)pbVar29;
    if (((((iVar7 != 0) || (pcVar25 = "--text mode is only supported with --untagged", !bVar30)) &&
         ((digest_delim == 10 ||
          (pcVar25 = "the --zero option is not supported when verifying checksums", local_169 == 0))
         )) && ((iVar7 < 0 ||
                (pcVar25 = 
                 "the --binary and --text options are meaningless when verifying checksums",
                local_169 == 0)))) &&
       ((((ignore_missing != '\x01' ||
          (pcVar25 = "the --ignore-missing option is meaningful only when verifying checksums",
          local_169 != 0)) &&
         ((status_only != 1 ||
          (pcVar25 = "the --status option is meaningful only when verifying checksums",
          local_169 != 0)))) &&
        ((warn != '\x01' ||
         (pcVar25 = "the --warn option is meaningful only when verifying checksums", local_169 != 0)
         ))))) {
      pcVar25 = "the --quiet option is meaningful only when verifying checksums";
      bVar5 = quiet ^ 1 | local_169;
      if ((bVar5 != 0) &&
         (pcVar25 = "the --strict option is meaningful only when verifying checksums",
         ((local_169 ^ 1) & strict) == 0)) {
        pp_Var1 = (_IO_FILE **)(param_2 + (int)param_1);
        lVar20 = (long)(int)_optind;
        if (_optind == param_1) {
          pp_Var16 = pp_Var1 + 1;
          *pp_Var1 = (_IO_FILE *)&_LC70;
        }
        else {
          pp_Var16 = pp_Var1;
          if ((1 < (int)(param_1 - _optind)) &&
             (pcVar25 = "the --raw option is not supported with multiple files", raw_digest != '\0')
             ) {
LAB_00103224:
            do {
              uVar12 = dcgettext(0,pcVar25,5);
              error(1,0,uVar12);
LAB_0010323c:
              uVar12 = quote(local_190);
              uVar8 = dcgettext(0,"invalid length: %s",5);
              error(0,0,uVar8,uVar12);
              uVar12 = quote(*(undefined8 *)(algorithm_tags + (ulong)cksum_algorithm * 8));
              uVar8 = dcgettext(0,"maximum digest length for %s is %d bits",5);
              error(1,0,uVar8,uVar12,0x200);
LAB_001032b3:
              pcVar25 = "--length is only supported with --algorithm=blake2b";
            } while( true );
          }
        }
        pbVar15 = (byte *)(param_2 + lVar20);
        if (pbVar15 < pp_Var16) {
          local_160 = *(uint **)pbVar15;
          if (local_169 != 0) {
            __s = (char *)((long)&local_108._IO_read_end + 7);
            local_121 = local_169;
            local_130 = (char **)__s;
            local_120 = (_IO_marker **)pp_Var16;
            goto LAB_00102490;
          }
          local_188 = (size_t *)CONCAT44(local_188._4_4_,param_1);
          pbVar21 = pbVar29;
          if (iVar7 < 0) {
            pbVar21 = (byte *)0x0;
          }
          puVar28 = (undefined1 *)&local_108;
          local_198 = (FILE *)CONCAT71(local_198._1_7_,bVar5);
          __s = (char *)&local_108._IO_read_ptr;
          local_190 = (char ***)CONCAT44(local_190._4_4_,(int)pbVar21);
          puVar24 = local_160;
          pbVar29 = pbVar15;
          while( true ) {
            cVar6 = digest_file_isra_0(puVar24,&local_108._markers,puVar28,__s);
            if (cVar6 == '\0') {
              local_198 = (FILE *)((ulong)local_198 & 0xffffffffffffff00);
            }
            else {
              in_R9 = (char **)(ulong)digest_delim;
              (**(code **)(cksum_output_fns + (ulong)cksum_algorithm * 8))
                        (puVar24,pbVar21,&local_108._markers,raw_digest,bVar30,in_R9,
                         _optind != param_1,local_108._IO_read_ptr);
            }
            pbVar29 = pbVar29 + 8;
            if (pp_Var16 <= pbVar29) break;
            puVar24 = *(uint **)pbVar29;
          }
          pp_Var27 = pp_Var16;
          bVar5 = (byte)local_198;
        }
LAB_0010242a:
        if (have_read_stdin != '\0') {
          local_198 = (FILE *)CONCAT71(local_198._1_7_,bVar5);
          iVar7 = rpl_fclose(_stdin);
          if (iVar7 == -1) {
            pbVar21 = (byte *)dcgettext(0,"standard input",5);
            piVar13 = __errno_location();
            pbVar15 = (byte *)error(1,*piVar13,pbVar21);
            goto LAB_00102fab;
          }
        }
        if (local_108._unused2._4_8_ == *(long *)(in_FS_OFFSET + 0x28)) {
          return bVar5 ^ 1;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
    }
  }
  else {
    pcVar25 = "--base64 and --raw are mutually exclusive";
  }
  uVar12 = dcgettext(0,pcVar25,5);
  error(0,0,uVar12);
switchD_00101f8d_caseD_64:
  usage(1);
LAB_00102ff2:
  print_filename(__s,0);
LAB_00102df1:
  if (quiet != 0) goto LAB_001028a0;
  pcVar25 = "OK";
LAB_00102aed:
  uVar12 = dcgettext(0,pcVar25,5);
  __printf_chk(2,": %s\n",uVar12);
LAB_001028a0:
  local_123 = local_169;
  puVar24 = (uint *)((long)puVar24 + 1);
  if ((local_198->_flags & 0x30) == 0) goto LAB_00102709;
  do {
    free(local_118);
    param_2 = (undefined8 *)0x0;
    puVar28 = (undefined1 *)local_198;
    pbVar29 = local_140;
    if ((local_198->_flags & 0x20U) == 0) {
      if (local_128 == 0) {
        clearerr_unlocked(local_198);
      }
      else {
        iVar7 = rpl_fclose();
        if (iVar7 != 0) {
          puVar24 = (uint *)__errno_location();
          uVar19 = *puVar24;
          puVar24 = (uint *)(ulong)uVar19;
          if (-1 < (int)uVar19) {
            uVar12 = quotearg_n_style_colon(0,3,local_160);
            puVar18 = &_LC9;
            if (uVar19 == 0) goto LAB_00102cf1;
            goto LAB_00102d09;
          }
        }
      }
      uVar19 = 0;
      if (local_123 == 0) {
        puVar24 = (uint *)quotearg_n_style_colon(0,3,local_160);
        pcVar25 = "%s: no properly formatted checksum lines found";
LAB_001030b2:
        uVar12 = dcgettext(0,pcVar25,5);
        error(0,0,uVar12,puVar24);
      }
      else if (status_only == 0) {
        if (local_138 != (FILE *)0x0) {
          uVar12 = dcngettext(0,"WARNING: %ju line is improperly formatted",
                              "WARNING: %ju lines are improperly formatted",local_138,5);
          error(0,0,uVar12,local_138);
          puVar28 = (undefined1 *)local_138;
        }
        if (local_148 != (FILE *)0x0) {
          uVar12 = dcngettext(0,"WARNING: %ju listed file could not be read",
                              "WARNING: %ju listed files could not be read",local_148,5);
          error(0,0,uVar12,local_148);
          puVar28 = (undefined1 *)local_148;
        }
        if (local_150 == (FILE *)0x0) {
          if (ignore_missing == '\0') goto LAB_00102b0f;
          if (local_122 == 0) goto LAB_00103092;
          goto LAB_0010295c;
        }
LAB_00103046:
        uVar19 = (uint)param_2;
        uVar12 = dcngettext(0,"WARNING: %ju computed checksum did NOT match",
                            "WARNING: %ju computed checksums did NOT match",local_150,5);
        error(0,0,uVar12,local_150);
        puVar28 = (undefined1 *)local_150;
        if ((ignore_missing != '\0') && (local_122 == 0)) {
LAB_00103092:
          puVar24 = (uint *)quotearg_n_style_colon(0,3,local_160);
          pcVar25 = "%s: no file was verified";
          goto LAB_001030b2;
        }
      }
      else {
LAB_00102b0f:
        if (local_122 != 0) {
LAB_0010295c:
          if (local_148 == (FILE *)0x0 && local_150 == (FILE *)0x0) {
            uVar19 = strict ^ 1 | (uint)(local_138 == (FILE *)0x0);
          }
        }
      }
      uVar19 = uVar19 & 1;
    }
    else {
      if (local_128 == 0) {
        clearerr_unlocked(local_198);
      }
      else {
        rpl_fclose();
      }
      uVar12 = quotearg_n_style_colon(0,3,local_160);
LAB_00102cf1:
      puVar24 = (uint *)0x0;
      puVar18 = (undefined *)dcgettext(0,"%s: read error",5);
LAB_00102d09:
      error(0,puVar24,puVar18,uVar12);
      uVar19 = 0;
    }
    while( true ) {
      pbVar29 = pbVar29 + 8;
      local_121 = local_121 & (byte)uVar19;
      bVar5 = local_121;
      if (local_120 <= pbVar29) goto LAB_0010242a;
      local_160 = *(uint **)pbVar29;
      pbVar15 = pbVar29;
LAB_00102490:
      local_158 = (ulong)local_130 & 0xfffffffffffffff8;
      local_128 = (byte)*local_160 - 0x2d;
      pbVar29 = pbVar15;
      if ((local_128 == 0) && (local_128 = (uint)*(byte *)((long)local_160 + 1), local_128 == 0))
      break;
      puVar28 = (undefined1 *)fopen_safer(local_160,&_LC8);
      if ((FILE *)puVar28 != (FILE *)0x0) goto LAB_001024e9;
      uVar12 = quotearg_n_style_colon(0,3,local_160);
      piVar13 = __errno_location();
      uVar19 = 0;
      error(0,*piVar13,&_LC9,uVar12);
    }
    have_read_stdin = '\x01';
    local_160 = (uint *)dcgettext(0,"standard input",5);
    puVar28 = (undefined1 *)_stdin;
LAB_001024e9:
    local_188 = &local_110;
    local_122 = 0;
    puVar24 = (uint *)0x1;
    local_190 = &local_118;
    local_118 = (char **)0x0;
    local_110 = 0;
    local_123 = 0;
    local_150 = (FILE *)0x0;
    local_148 = (FILE *)0x0;
    local_138 = (FILE *)0x0;
    local_198 = (FILE *)puVar28;
    local_140 = pbVar15;
    while (_Var9 = __getdelim((char **)local_190,local_188,10,local_198), ppcVar4 = local_118,
          0 < _Var9) {
      if (*(byte *)local_118 == 0x23) goto LAB_001026f8;
      lVar20 = _Var9 - (ulong)(*(byte *)((long)local_118 + _Var9 + -1) == 10);
      pbVar21 = (byte *)(lVar20 - (ulong)(*(byte *)((long)local_118 + (lVar20 - (ulong)(0 < lVar20))
                                                   ) == 0xd));
      if (pbVar21 == (byte *)0x0) goto LAB_001026f8;
      *(byte *)((long)local_118 + (long)pbVar21) = 0;
      pbVar29 = (byte *)0x0;
      bVar5 = *(byte *)local_118;
      if (bVar5 != 0x20) goto LAB_001025dd;
      do {
        do {
          pbVar29 = pbVar29 + 1;
          bVar5 = *(byte *)((long)local_118 + (long)pbVar29);
        } while (bVar5 == 0x20);
LAB_001025dd:
      } while (bVar5 == 9);
      local_124 = 0;
      if (bVar5 == 0x5c) {
        pbVar29 = pbVar29 + 1;
        local_124 = local_169;
      }
      puVar28 = (undefined1 *)((long)local_118 + (long)pbVar29);
      in_R9 = ppcVar4;
      if (algorithm_specified == '\0') {
        if (max_tag_len_1 == (_IO_marker **)0x0) {
          pcVar25 = "BSD";
          puVar22 = algorithm_tags;
          do {
            pp_Var3 = max_tag_len_1;
            pp_Var11 = (_IO_marker **)strlen(pcVar25);
            puVar22 = (undefined1 *)((long)puVar22 + 8);
            pcVar25 = *(char **)puVar22;
            max_tag_len_1 = pp_Var3;
            if (pp_Var3 < pp_Var11) {
              max_tag_len_1 = pp_Var11;
            }
            __s = (char *)ppcVar4;
          } while (pcVar25 != (char *)0x0);
        }
        pbVar15 = (byte *)0x0;
        do {
          pp_Var27 = (_IO_FILE **)max_tag_len_1;
          if ((pbVar15[(long)&((FILE *)puVar28)->_flags] < 0x2e) &&
             ((0xffffdefefffffdfeU >> ((ulong)pbVar15[(long)&((FILE *)puVar28)->_flags] & 0x3f) & 1)
              == 0)) {
            if (pbVar15 <= max_tag_len_1) {
              pp_Var27 = (_IO_FILE **)((long)ppcVar4 + (long)(pbVar15 + (long)pbVar29));
              bVar5 = *(byte *)pp_Var27;
              __s = (char *)(ulong)bVar5;
              *(byte *)pp_Var27 = 0;
              lVar20 = argmatch_exact(puVar28,algorithm_tags);
              *(byte *)pp_Var27 = bVar5;
              if (3 < lVar20) {
                cksum_algorithm = (uint)lVar20;
                goto LAB_00102608;
              }
            }
            break;
          }
          pbVar15 = pbVar15 + 1;
        } while (pbVar15 <= max_tag_len_1);
      }
      else {
LAB_00102608:
        uVar19 = cksum_algorithm;
        __s = (char *)(ulong)cksum_algorithm;
        pp_Var27 = *(_IO_FILE ***)(algorithm_tags + (long)__s * 8);
        sVar10 = strlen((char *)pp_Var27);
        iVar7 = strncmp(puVar28,(char *)pp_Var27,sVar10);
        in_R9 = ppcVar4;
        if (iVar7 != 0) goto LAB_00102750;
        pbVar29 = pbVar29 + sVar10;
        pbVar15 = (byte *)((long)ppcVar4 + (long)pbVar29);
        bVar5 = *pbVar15;
        *pbVar15 = 0;
        iVar7 = strcmp(puVar28,(char *)pp_Var27);
        if (iVar7 == 0) {
          digest_length = (ulong)*(int *)(algorithm_bits + (long)__s * 4);
          if (bVar5 == 0x28) {
            *pbVar15 = 0x28;
          }
          else {
            pbVar29 = pbVar29 + 1;
            if (bVar5 == 0x2d) {
              in_R9 = ppcVar4;
              iVar7 = xstrtoumax((byte *)((long)ppcVar4 + (long)pbVar29),&local_108._IO_read_ptr,0,
                                 &local_108,0);
              if ((((iVar7 != 0) ||
                   (uVar14 = CONCAT71(local_108._1_7_,(byte)local_108._flags), uVar14 == 0)) ||
                  (digest_length < uVar14)) || (((byte)local_108._flags & 7) != 0))
              goto LAB_001026e0;
              pbVar29 = (byte *)(local_108._IO_read_ptr + -(long)ppcVar4);
              digest_length = uVar14;
            }
          }
          digest_hex_bytes = (byte *)(digest_length >> 2);
          if (*(byte *)((long)ppcVar4 + (long)pbVar29) == 0x20) {
            pbVar29 = pbVar29 + 1;
          }
          in_R9 = ppcVar4;
          if (*(byte *)((long)ppcVar4 + (long)pbVar29) == 0x28) {
            ppcVar23 = (char **)(pbVar21 + -(long)(pbVar29 + 1));
            if (ppcVar23 != (char **)0x0) {
              __s = (char *)((long)ppcVar4 + (long)(pbVar29 + 1));
              in_R9 = ppcVar23;
              do {
                in_R9 = (char **)((long)in_R9 + -1);
                if (in_R9 == (char **)0x0) break;
              } while (*(byte *)((long)__s + (long)in_R9) != 0x29);
              pbVar15 = (byte *)((long)__s + (long)in_R9);
              if ((*pbVar15 == 0x29) &&
                 ((local_124 == 0 || (lVar20 = filename_unescape(__s,in_R9), lVar20 != 0)))) {
                *pbVar15 = 0;
                do {
                  do {
                    in_R9 = (char **)((long)in_R9 + 1);
                    bVar5 = *(byte *)((long)__s + (long)in_R9);
                  } while (bVar5 == 0x20);
                } while (bVar5 == 9);
                if (bVar5 == 0x3d) {
                  do {
                    do {
                      in_R9 = (char **)((long)in_R9 + 1);
                    } while (*(byte *)((long)__s + (long)in_R9) == 0x20);
                  } while (*(byte *)((long)__s + (long)in_R9) == 9);
                  pp_Var27 = (_IO_FILE **)((long)ppcVar23 - (long)in_R9);
                  puVar28 = (undefined1 *)((long)__s + (long)in_R9);
                  cVar6 = valid_digits(puVar28,pp_Var27);
                  if (cVar6 != '\0') goto LAB_0010281c;
                }
              }
            }
          }
        }
      }
LAB_001026e0:
      if (warn != '\0') {
        in_R9 = *(char ***)(algorithm_tags + (ulong)cksum_algorithm * 8);
        pp_Var27 = (_IO_FILE **)quotearg_n_style_colon(0,3,local_160);
        uVar12 = dcgettext(0,"%s: %ju: improperly formatted %s checksum line",5);
        error(0,0,uVar12,pp_Var27);
      }
      local_138 = (FILE *)((long)&local_138->_flags + 1);
LAB_001026f8:
      puVar24 = (uint *)((long)puVar24 + 1);
      if ((local_198->_flags & 0x30) != 0) break;
LAB_00102709:
      if (puVar24 == (uint *)0x0) {
        pbVar21 = (byte *)quotearg_n_style_colon(0,3,local_160);
        uVar12 = dcgettext(0,"%s: too many checksum lines",5);
        pbVar15 = pbVar21;
        error(1,0,uVar12);
        uVar19 = (uint)pbVar15;
LAB_00102750:
        bVar5 = (byte)((FILE *)puVar28)->_flags;
        if ((ulong)(bVar5 == 0x5c) + min_digest_line_length <=
            (ulong)((long)pbVar21 - (long)pbVar29)) {
          if (uVar19 == 10) {
            pbVar15 = (byte *)0x0;
            digest_hex_bytes = (byte *)0x0;
            bVar30 = false;
            while (((byte)(pbVar15[(long)&((FILE *)puVar28)->_flags] - 0x30) < 0x37 &&
                   (bVar31 = (0x7e0000007e03ffU >>
                              ((ulong)(pbVar15[(long)&((FILE *)puVar28)->_flags] - 0x30) & 0x3f) & 1
                             ) != 0, bVar31))) {
              pbVar15 = pbVar15 + 1;
              bVar30 = bVar31;
            }
            if (((!bVar30) || (digest_hex_bytes = pbVar15, (byte *)0x7e < pbVar15 + -2)) ||
               (((ulong)pbVar15 & 1) != 0)) goto LAB_001026e0;
            digest_length = (long)pbVar15 << 2;
          }
          pFVar17 = (FILE *)puVar28;
          pbVar26 = pbVar29;
          while (((bVar5 != 0 && (bVar5 != 0x20)) && (bVar5 != 9))) {
            pbVar26 = pbVar26 + 1;
            pFVar17 = (FILE *)((long)pFVar17 +
                              ((long)((byte *)((long)in_R9 + 1) + (long)pbVar29) - (long)puVar28));
            bVar5 = *(byte *)((long)in_R9 + (long)pbVar26);
          }
          if (pbVar21 != pbVar26) {
            *(byte *)&pFVar17->_flags = 0;
            pp_Var27 = (_IO_FILE **)(pbVar26 + -(long)pbVar29);
            cVar6 = valid_digits();
            if (cVar6 != '\0') {
              pbVar15 = pbVar26 + 1;
              if (((long)pbVar21 - (long)pbVar15 == 1) ||
                 ((((byte *)((long)in_R9 + 1))[(long)pbVar26] != 0x20 &&
                  (((byte *)((long)in_R9 + 1))[(long)pbVar26] != 0x2a)))) {
                if (bsd_reversed == 0) goto LAB_001026e0;
                bsd_reversed = 1;
              }
              else if (bsd_reversed != 1) {
                pbVar15 = pbVar26 + 2;
                bsd_reversed = 0;
              }
              __s = (char *)((long)in_R9 + (long)pbVar15);
              if (local_124 != 0) {
LAB_00102fab:
                lVar20 = filename_unescape(__s,(long)pbVar21 - (long)pbVar15);
                if (lVar20 == 0) goto LAB_001026e0;
              }
LAB_0010281c:
              if (((local_128 != 0) || (*__s != 0x2d)) || (*(byte *)((long)__s + 1) != 0)) {
                bVar30 = false;
                if (status_only == 0) {
                  sVar10 = strcspn(__s,"\\\n\r");
                  bVar30 = *(byte *)((long)__s + sVar10) != 0;
                }
                uVar19 = digest_file_isra_0(__s,local_158,&local_108,&local_108._IO_read_ptr);
                pbVar29 = (byte *)(ulong)uVar19;
                bVar5 = (byte)uVar19;
                if (bVar5 == 0) {
                  if (status_only == 0) {
                    if (bVar30 != false) {
                      pcVar25 = _stdout->_IO_write_ptr;
                      if (pcVar25 < _stdout->_IO_write_end) {
                        _stdout->_IO_write_ptr = pcVar25 + 1;
                        *pcVar25 = '\\';
                      }
                      else {
                        __overflow(_stdout,0x5c);
                      }
                    }
                    print_filename(__s,bVar30);
                    uVar12 = dcgettext(0,"FAILED open or read",5);
                    __printf_chk(2,": %s\n",uVar12);
                  }
                  local_148 = (FILE *)((long)&local_148->_flags + 1);
                  goto LAB_001028a0;
                }
                if ((ignore_missing != '\0') && ((byte)local_108._flags != 0)) goto LAB_001028a0;
                if (pp_Var27 < digest_hex_bytes) {
                  pp_Var27 = (_IO_FILE **)&local_108._markers;
                  uVar14 = digest_length >> 3;
                  base64_encode(local_158,uVar14,pp_Var27,0x59);
                  iVar7 = memcmp(puVar28,pp_Var27,((uVar14 + 2) / 3) * 4 + 1);
                  bVar31 = iVar7 == 0;
                  goto LAB_00102d80;
                }
                if ((_IO_FILE **)digest_hex_bytes != pp_Var27) goto LAB_00102ab8;
                pp_Var27 = (_IO_FILE **)((ulong)pp_Var27 >> 1);
                if (pp_Var27 == (_IO_FILE **)0x0) goto LAB_00102d88;
                pbVar15 = (byte *)0x0;
                goto LAB_00102f10;
              }
            }
          }
        }
        goto LAB_001026e0;
      }
    }
  } while( true );
LAB_00102f10:
  bVar2 = *(byte *)((long)&((FILE *)puVar28)->_flags + (long)pbVar15 * 2);
  uVar19 = (uint)bVar2;
  if (bVar2 - 0x41 < 0x1a) {
    uVar19 = bVar2 + 0x20;
  }
  if ((int)"0123456789abcdef"[pbVar15[local_158] >> 4] != uVar19) goto LAB_00102f37;
  bVar2 = *(byte *)((long)&((FILE *)puVar28)->_flags + (long)pbVar15 * 2 + 1);
  in_R9 = (char **)(ulong)(bVar2 - 0x41);
  uVar19 = (uint)bVar2;
  if (bVar2 - 0x41 < 0x1a) {
    uVar19 = bVar2 + 0x20;
  }
  if (((int)"0123456789abcdef"[pbVar15[local_158] & 0xf] != uVar19) ||
     (pbVar15 = pbVar15 + 1, pp_Var27 == (_IO_FILE **)pbVar15)) goto LAB_00102f37;
  goto LAB_00102f10;
LAB_00102f37:
  bVar31 = (_IO_FILE **)pbVar15 == pp_Var27;
LAB_00102d80:
  if (!bVar31) {
LAB_00102ab8:
    pbVar29 = (byte *)(ulong)status_only;
    local_150 = (FILE *)((long)&local_150->_flags + 1);
    if (status_only == 0) {
      if (bVar30 != false) goto LAB_00102dbb;
      print_filename(__s,0);
      goto LAB_00102ae1;
    }
    goto LAB_001028a0;
  }
LAB_00102d88:
  local_122 = status_only;
  if ((status_only != 0) || (local_122 = quiet, quiet != 0)) goto LAB_001028a0;
  local_122 = bVar5;
  if (bVar30 == false) goto LAB_00102ff2;
LAB_00102dbb:
  pcVar25 = _stdout->_IO_write_ptr;
  if (pcVar25 < _stdout->_IO_write_end) {
    _stdout->_IO_write_ptr = pcVar25 + 1;
    *pcVar25 = '\\';
  }
  else {
    __overflow(_stdout,0x5c);
  }
  print_filename(__s,1);
  if ((char)pbVar29 != '\0') goto LAB_00102df1;
LAB_00102ae1:
  pcVar25 = "FAILED";
  goto LAB_00102aed;
}


