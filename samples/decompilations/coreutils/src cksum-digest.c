
/* WARNING: Unknown calling convention */

char * filename_unescape(char *s,size_t s_len)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  ulong uVar4;
  
  uVar4 = 0;
  pcVar1 = s + 1;
  if (s_len != 0) {
    do {
      pcVar2 = pcVar1;
      cVar3 = s[uVar4];
      if (cVar3 == '\0') {
        return (char *)0x0;
      }
      if (cVar3 == '\\') {
        if (s_len - 1 == uVar4) {
          return (char *)0x0;
        }
        uVar4 = uVar4 + 1;
        cVar3 = s[uVar4];
        if (cVar3 == 'n') {
          cVar3 = '\n';
        }
        else if (cVar3 == 'r') {
          cVar3 = '\r';
        }
        else {
          if (cVar3 != '\\') {
            return (char *)0x0;
          }
          cVar3 = '\\';
        }
      }
      uVar4 = uVar4 + 1;
      pcVar2[-1] = cVar3;
      pcVar1 = pcVar2 + 1;
    } while (uVar4 < s_len);
    if (pcVar2 < s + s_len) {
      *pcVar2 = '\0';
    }
  }
  return s;
}



/* WARNING: Unknown calling convention */

_Bool valid_digits(uchar *s,size_t len)

{
  undefined1 auVar1 [16];
  size_t sVar2;
  ulong uVar3;
  byte *pbVar4;
  bool bVar5;
  
  pbVar4 = s;
  if ((((digest_length >> 3) + 2) / 3) * 4 == len) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = digest_length;
    sVar2 = digest_length -
            ((SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),8) & 0xfffffffffffffffe) +
            digest_length / 3);
    if (sVar2 != len) {
      uVar3 = 0;
      do {
        if ((char)(&base64_to_int)[*s] < '\0') {
          return false;
        }
        uVar3 = uVar3 + 1;
        s = s + 1;
      } while (uVar3 < len - sVar2);
      pbVar4 = s;
      if (uVar3 < len) {
        pbVar4 = s + (len - uVar3);
        do {
          if (*s != 0x3d) {
            return false;
          }
          s = s + 1;
        } while (pbVar4 != s);
      }
    }
  }
  else {
    if (digest_hex_bytes != len) {
      return false;
    }
    if (len != 0) {
      pbVar4 = s + len;
      do {
        if (0x36 < (byte)(*s - 0x30)) {
          return false;
        }
        bVar5 = (0x7e0000007e03ffU >> ((ulong)(*s - 0x30) & 0x3f) & 1) != 0;
        if (!bVar5) {
          return bVar5;
        }
        s = s + 1;
      } while (pbVar4 != s);
    }
  }
  return *pbVar4 == 0;
}



/* WARNING: Unknown calling convention */

int sm3_sum_stream(FILE *stream,void *resstream,uintmax_t *length)

{
  int iVar1;
  
  iVar1 = sm3_stream();
  return iVar1;
}



/* WARNING: Unknown calling convention */

int blake2b_sum_stream(FILE *stream,void *resstream,uintmax_t *length)

{
  int iVar1;
  
  iVar1 = blake2b_stream(stream,resstream,*length);
  return iVar1;
}



/* WARNING: Unknown calling convention */

int sha512_sum_stream(FILE *stream,void *resstream,uintmax_t *length)

{
  int iVar1;
  
  iVar1 = sha512_stream();
  return iVar1;
}



/* WARNING: Unknown calling convention */

int sha384_sum_stream(FILE *stream,void *resstream,uintmax_t *length)

{
  int iVar1;
  
  iVar1 = sha384_stream();
  return iVar1;
}



/* WARNING: Unknown calling convention */

int sha256_sum_stream(FILE *stream,void *resstream,uintmax_t *length)

{
  int iVar1;
  
  iVar1 = sha256_stream();
  return iVar1;
}



/* WARNING: Unknown calling convention */

int sha224_sum_stream(FILE *stream,void *resstream,uintmax_t *length)

{
  int iVar1;
  
  iVar1 = sha224_stream();
  return iVar1;
}



/* WARNING: Unknown calling convention */

int sha1_sum_stream(FILE *stream,void *resstream,uintmax_t *length)

{
  int iVar1;
  
  iVar1 = sha1_stream();
  return iVar1;
}



/* WARNING: Unknown calling convention */

int md5_sum_stream(FILE *stream,void *resstream,uintmax_t *length)

{
  int iVar1;
  
  iVar1 = md5_stream();
  return iVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void print_filename(char *file,_Bool escape)

{
  byte bVar1;
  byte *pbVar2;
  
  if (!escape) {
    fputs_unlocked(file,_stdout);
    return;
  }
  bVar1 = *file;
  do {
    while( true ) {
      if (bVar1 == 0) {
        return;
      }
      if (bVar1 != 0xd) break;
      fwrite_unlocked(&_LC1,1,2,_stdout);
LAB_00100260:
      bVar1 = ((byte *)file)[1];
      file = (char *)((byte *)file + 1);
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
    file = (char *)((byte *)file + 1);
    fwrite_unlocked(&_LC2,1,2,_stdout);
    bVar1 = *file;
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void output_file(char *file,int binary_file,void *digest,_Bool raw,_Bool tagged,uchar delim,
                _Bool args,uintmax_t length)

{
  undefined1 *puVar1;
  long lVar2;
  char *pcVar3;
  uchar *puVar4;
  _Bool escape;
  size_t sVar5;
  int iVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  char b64 [89];
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if (raw) {
    if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
      fwrite_unlocked(digest,1,digest_length >> 3,_stdout);
      return;
    }
    goto LAB_00100642;
  }
  escape = false;
  if ((delim == '\n') && (sVar5 = strcspn(file,"\\\n\r"), file[sVar5] != '\0')) {
    pcVar3 = _stdout->_IO_write_ptr;
    if (pcVar3 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = pcVar3 + 1;
      *pcVar3 = '\\';
    }
    else {
      __overflow(_stdout,0x5c);
    }
    escape = true;
    if (!tagged) goto LAB_00100368;
LAB_001004b0:
    fputs_unlocked(algorithm_tags[cksum_algorithm],_stdout);
    if ((cksum_algorithm == blake2b) && (digest_length < 0x200)) {
      __printf_chk(2,&_LC4);
    }
    fwrite_unlocked(&_LC5,1,2,_stdout);
    print_filename(file,escape);
    fwrite_unlocked(&_LC6,1,4,_stdout);
    if (base64_digest == false) {
      if (digest_hex_bytes >> 1 != 0) {
LAB_00100381:
        uVar7 = 0;
        do {
          puVar1 = (undefined1 *)((long)digest + uVar7);
          uVar7 = uVar7 + 1;
          __printf_chk(2,&_LC7,*puVar1);
        } while (uVar7 < digest_hex_bytes >> 1);
        goto LAB_001003b7;
      }
    }
    else {
LAB_00100540:
      base64_encode(digest,digest_length >> 3,b64,0x59);
      fputs_unlocked(b64,_stdout);
LAB_001003b7:
      if (!tagged) goto LAB_001003bc;
    }
  }
  else {
    if (tagged) goto LAB_001004b0;
LAB_00100368:
    if (base64_digest != false) goto LAB_00100540;
    if (digest_hex_bytes >> 1 != 0) goto LAB_00100381;
LAB_001003bc:
    pcVar3 = _stdout->_IO_write_ptr;
    if (pcVar3 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = pcVar3 + 1;
      *pcVar3 = ' ';
    }
    else {
      __overflow(_stdout,0x20);
    }
    pcVar3 = _stdout->_IO_write_ptr;
    iVar6 = (-(uint)(binary_file == 0) & 0xfffffff6) + 0x2a;
    if (pcVar3 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = pcVar3 + 1;
      *pcVar3 = (char)iVar6;
    }
    else {
      __overflow(_stdout,iVar6);
    }
    print_filename(file,escape);
  }
  puVar4 = (uchar *)_stdout->_IO_write_ptr;
  if (puVar4 < _stdout->_IO_write_end) {
    _stdout->_IO_write_ptr = (char *)(puVar4 + 1);
    *puVar4 = delim;
    if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    __overflow(_stdout,(uint)delim);
    return;
  }
LAB_00100642:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

_Bool digest_file(char *filename,int *binary,uchar *bin_result,_Bool *missing,uintmax_t *length)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  FILE *__stream;
  int *piVar5;
  uint uVar6;
  
  uVar6 = (byte)*filename - 0x2d;
  if (uVar6 == 0) {
    uVar6 = (uint)(byte)filename[1];
  }
  *bin_result = '\0';
  if (uVar6 == 0) {
    have_read_stdin = true;
    __stream = _stdin;
  }
  else {
    __stream = (FILE *)fopen_safer(filename,&_LC8);
    if (__stream == (FILE *)0x0) {
      if ((ignore_missing != false) && (piVar5 = __errno_location(), *piVar5 == 2)) {
        *bin_result = '\x01';
        return true;
      }
      uVar4 = quotearg_n_style_colon(0,3,filename);
      piVar5 = __errno_location();
      error(0,*piVar5,&_LC9,uVar4);
      return false;
    }
  }
  fadvise(__stream,2);
  uVar3 = (ulong)cksum_algorithm;
  if (cksum_algorithm == blake2b) {
    *(uintmax_t *)missing = digest_length >> 3;
  }
  iVar1 = (*cksumfns[uVar3])((FILE *)__stream,binary,(uintmax_t *)missing);
  if (iVar1 == 0) {
    if (uVar6 == 0) {
      clearerr_unlocked(__stream);
      return true;
    }
    iVar1 = rpl_fclose();
    if (iVar1 == 0) {
      return true;
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
    return true;
  }
LAB_00100718:
  uVar4 = quotearg_n_style_colon(0,3,filename);
  error(0,iVar1,&_LC9,uVar4);
  return false;
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
  char *pcVar6;
  infomap *piVar7;
  infomap infomap [7];
  
  uVar5 = _program_name;
  piVar7 = infomap;
  if (status != 0) {
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
    iVar2 = strcmp("cksum",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)piVar7 + 0x10);
    piVar7 = (infomap *)((long)piVar7 + 0x10);
  } while (pcVar4 != (char *)0x0);
  pcVar4 = *(char **)((long)piVar7 + 8);
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
  exit(status);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int main(int argc,char **argv)

{
  long lVar1;
  Algorithm AVar2;
  byte bVar3;
  _Bool _Var4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  __ssize_t _Var10;
  size_t sVar11;
  undefined7 extraout_var;
  uint *puVar12;
  char **ppcVar13;
  ulong uVar14;
  char **ppcVar15;
  int *piVar16;
  byte *pbVar17;
  uint uVar18;
  FILE *pFVar19;
  undefined *puVar20;
  uintmax_t *filename;
  char *pcVar21;
  char *pcVar22;
  uintmax_t *length_00;
  char *in_R9;
  _Bool *p_Var23;
  char **ppcVar24;
  char *missing_00;
  option *poVar25;
  char **ppcVar26;
  char **ppcVar27;
  long in_FS_OFFSET;
  bool bVar28;
  bool bVar29;
  undefined8 local_198;
  char **local_190;
  size_t *local_188;
  byte local_169;
  uintmax_t *local_160;
  uintmax_t *local_158;
  FILE *local_150;
  FILE *local_148;
  char **local_140;
  FILE *local_138;
  _Bool *local_130;
  uint local_128;
  byte local_124;
  byte local_123;
  char local_122;
  byte local_121;
  char **local_120;
  char *line;
  size_t line_chars_allocated;
  _Bool missing;
  undefined7 uStack_107;
  uintmax_t length;
  uchar bin_buffer_unaligned_1 [72];
  uchar bin_buffer_unaligned [72];
  
  ppcVar26 = (char **)0xffffffff;
  poVar25 = long_options;
  ppcVar24 = (char **)(ulong)(uint)argc;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils");
  missing_00 = "a:l:bctwz";
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  setvbuf(_stdout,(char *)0x0,1,0);
  local_198 = (FILE *)CONCAT44(local_198._4_4_,0xffffffff);
  local_169 = 0;
  local_190 = (char **)&_LC13;
  while( true ) {
    iVar6 = getopt_long(ppcVar24,argv,"a:l:bctwz",long_options,0);
    if (iVar6 == -1) break;
    if (0x88 < iVar6) goto switchD_00101f8d_caseD_64;
    if (iVar6 < 0x61) {
      if (iVar6 == -0x83) {
        uVar7 = proper_name_lite("Q. Frank Xia","Q. Frank Xia");
        uVar8 = proper_name_lite("Padraig Brady",&_LC53);
        version_etc(_stdout,"cksum","GNU coreutils",_Version,uVar8,uVar7,0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar6 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      goto switchD_00101f8d_caseD_64;
    }
    switch(iVar6) {
    case 0x61:
      in_R9 = _argmatch_die;
      lVar9 = __xargmatch_internal
                        ("--algorithm",_optarg,algorithm_args,algorithm_types,4,_argmatch_die,0);
      cksum_algorithm = algorithm_types[lVar9];
      algorithm_specified = true;
      break;
    case 0x62:
      ppcVar26 = (char **)0x1;
      break;
    case 99:
      local_169 = 1;
      break;
    default:
      goto switchD_00101f8d_caseD_64;
    case 0x6c:
      uVar7 = dcgettext(0,"invalid length",5);
      in_R9 = (char *)0x2;
      digest_length = xnumtoumax(_optarg,10,0,0x200,&_LC13,uVar7,0);
      local_190 = _optarg;
      break;
    case 0x74:
      ppcVar26 = (char **)0x0;
      break;
    case 0x77:
      status_only = false;
      warn = true;
      quiet = false;
      break;
    case 0x7a:
      digest_delim = '\0';
      break;
    case 0x80:
      ignore_missing = true;
      break;
    case 0x81:
      status_only = true;
      warn = false;
      quiet = false;
      break;
    case 0x82:
      status_only = false;
      warn = false;
      quiet = true;
      break;
    case 0x83:
      strict = true;
      break;
    case 0x84:
      local_198 = (FILE *)CONCAT44(local_198._4_4_,1);
      ppcVar26 = (char **)0x1;
      break;
    case 0x85:
      bVar28 = (int)local_198 == 1;
      local_198 = (FILE *)((ulong)local_198._4_4_ << 0x20);
      if (bVar28) {
        ppcVar26 = (char **)0xffffffff;
      }
      break;
    case 0x86:
      cksum_debug = true;
      break;
    case 0x87:
      raw_digest = true;
      break;
    case 0x88:
      base64_digest = true;
    }
  }
  min_digest_line_length = 3;
  if (digest_length == 0) {
    digest_length = (uintmax_t)algorithm_bits[cksum_algorithm];
    digest_hex_bytes = digest_length >> 2;
    if (((cksum_algorithm < md5) && (local_169 != 0)) &&
       (pcVar21 = "--check is not supported with --algorithm={bsd,sysv,crc,crc32b}",
       algorithm_specified != false)) goto LAB_00103224;
  }
  else {
    if (cksum_algorithm != blake2b) goto LAB_001032b3;
    if (0x200 < digest_length) goto LAB_0010323c;
    if ((digest_length & 7) != 0) {
      uVar7 = quote(local_190);
      uVar8 = dcgettext(0,"invalid length: %s",5);
      error(0,0,uVar8,uVar7);
      pcVar21 = "length is not a multiple of 8";
      goto LAB_00103224;
    }
    digest_hex_bytes = digest_length >> 2;
  }
  if ((base64_digest == false) || (raw_digest == false)) {
    bVar28 = (int)local_198 != 0;
    filename = (uintmax_t *)CONCAT71(0x1032,bVar28);
    iVar6 = (int)ppcVar26;
    if (((((iVar6 != 0) || (pcVar21 = "--text mode is only supported with --untagged", !bVar28)) &&
         ((digest_delim == '\n' ||
          (pcVar21 = "the --zero option is not supported when verifying checksums", local_169 == 0))
         )) && ((iVar6 < 0 ||
                (pcVar21 = 
                 "the --binary and --text options are meaningless when verifying checksums",
                local_169 == 0)))) &&
       ((((ignore_missing != true ||
          (pcVar21 = "the --ignore-missing option is meaningful only when verifying checksums",
          local_169 != 0)) &&
         ((status_only != true ||
          (pcVar21 = "the --status option is meaningful only when verifying checksums",
          local_169 != 0)))) &&
        ((warn != true ||
         (pcVar21 = "the --warn option is meaningful only when verifying checksums", local_169 != 0)
         ))))) {
      pcVar21 = "the --quiet option is meaningful only when verifying checksums";
      bVar3 = quiet ^ 1U | local_169;
      length_00 = (uintmax_t *)(ulong)bVar3;
      if ((bVar3 != 0) &&
         (pcVar21 = "the --strict option is meaningful only when verifying checksums",
         ((local_169 ^ 1) & strict) == 0)) {
        ppcVar27 = argv + argc;
        lVar9 = (long)_optind;
        if (_optind == argc) {
          ppcVar15 = ppcVar27 + 1;
          *ppcVar27 = "-";
        }
        else {
          ppcVar15 = ppcVar27;
          if ((1 < argc - _optind) &&
             (pcVar21 = "the --raw option is not supported with multiple files", raw_digest != false
             )) {
LAB_00103224:
            do {
              uVar7 = dcgettext(0,pcVar21,5);
              error(1,0,uVar7);
LAB_0010323c:
              uVar7 = quote(local_190);
              uVar8 = dcgettext(0,"invalid length: %s",5);
              error(0,0,uVar8,uVar7);
              uVar7 = quote(algorithm_tags[cksum_algorithm]);
              uVar8 = dcgettext(0,"maximum digest length for %s is %d bits",5);
              error(1,0,uVar8,uVar7,0x200);
LAB_001032b3:
              pcVar21 = "--length is only supported with --algorithm=blake2b";
            } while( true );
          }
        }
        ppcVar27 = argv + lVar9;
        if (ppcVar27 < ppcVar15) {
          local_160 = (uintmax_t *)*ppcVar27;
          if (local_169 != 0) {
            length_00 = (uintmax_t *)(ulong)local_169;
            missing_00 = (char *)(bin_buffer_unaligned_1 + 7);
            local_121 = local_169;
            local_130 = (_Bool *)missing_00;
            local_120 = ppcVar15;
            goto LAB_00102490;
          }
          local_188 = (size_t *)CONCAT44(local_188._4_4_,argc);
          if (iVar6 < 0) {
            ppcVar26 = (char **)0x0;
          }
          poVar25 = (option *)&missing;
          local_198 = (FILE *)CONCAT71(local_198._1_7_,bVar3);
          missing_00 = (char *)&length;
          iVar6 = (int)ppcVar26;
          local_190 = (char **)CONCAT44(local_190._4_4_,iVar6);
          filename = local_160;
          ppcVar26 = ppcVar27;
          while( true ) {
            _Var4 = digest_file((char *)filename,(int *)bin_buffer_unaligned,(uchar *)poVar25,
                                (_Bool *)missing_00,length_00);
            if (_Var4) {
              in_R9 = (char *)(ulong)digest_delim;
              length_00 = (uintmax_t *)(ulong)bVar28;
              (*cksum_output_fns[cksum_algorithm])
                        ((char *)filename,iVar6,bin_buffer_unaligned,raw_digest,bVar28,digest_delim,
                         _optind != argc,length);
            }
            else {
              local_198 = (FILE *)((ulong)local_198 & 0xffffffffffffff00);
            }
            ppcVar26 = ppcVar26 + 1;
            if (ppcVar15 <= ppcVar26) break;
            filename = (uintmax_t *)*ppcVar26;
          }
          length_00 = (uintmax_t *)((ulong)local_198 & 0xff);
          ppcVar24 = ppcVar15;
        }
LAB_0010242a:
        if (have_read_stdin != false) {
          local_198 = (FILE *)CONCAT71(local_198._1_7_,(char)length_00);
          iVar6 = rpl_fclose(_stdin);
          if (iVar6 == -1) {
            ppcVar15 = (char **)dcgettext(0,"standard input",5);
            piVar16 = __errno_location();
            pbVar17 = (byte *)error(1,*piVar16,ppcVar15);
            ppcVar27 = ppcVar26;
LAB_00102fab:
            pcVar21 = filename_unescape(missing_00,(long)ppcVar15 - (long)pbVar17);
            if (pcVar21 != (char *)0x0) goto LAB_0010281c;
LAB_001026e0:
            do {
              if (warn != false) {
                in_R9 = algorithm_tags[cksum_algorithm];
                ppcVar24 = (char **)quotearg_n_style_colon(0,3,local_160);
                uVar7 = dcgettext(0,"%s: %ju: improperly formatted %s checksum line",5);
                length_00 = filename;
                error(0,0,uVar7,ppcVar24);
              }
              local_138 = (FILE *)((long)&local_138->_flags + 1);
LAB_001026f8:
              filename = (uintmax_t *)((long)filename + 1);
              if ((local_198->_flags & 0x30) != 0) goto LAB_001028c0;
LAB_00102709:
              if (filename != (uintmax_t *)0x0) goto LAB_00102550;
              ppcVar15 = (char **)quotearg_n_style_colon(0,3,local_160);
              uVar7 = dcgettext(0,"%s: too many checksum lines",5);
              ppcVar26 = ppcVar15;
              error(1,0,uVar7);
LAB_00102750:
              cVar5 = *(char *)&((FILE *)poVar25)->_flags;
            } while ((ulong)((long)ppcVar15 - (long)ppcVar27) <
                     (cVar5 == '\\') + min_digest_line_length);
            if ((int)ppcVar26 == 10) {
              uVar14 = 0;
              digest_hex_bytes = 0;
              bVar28 = false;
              while ((uVar18 = *(_Bool *)((long)&((FILE *)poVar25)->_flags + uVar14) - 0x30,
                     (byte)uVar18 < 0x37 &&
                     (bVar29 = (0x7e0000007e03ffU >> ((ulong)uVar18 & 0x3f) & 1) != 0, bVar29))) {
                uVar14 = uVar14 + 1;
                bVar28 = bVar29;
              }
              if (((!bVar28) || (digest_hex_bytes = uVar14, 0x7e < uVar14 - 2)) ||
                 ((uVar14 & 1) != 0)) goto LAB_001026e0;
              digest_length = uVar14 << 2;
            }
            pFVar19 = (FILE *)poVar25;
            ppcVar26 = ppcVar27;
            while (((cVar5 != '\0' && (cVar5 != ' ')) && (cVar5 != '\t'))) {
              ppcVar26 = (char **)((long)ppcVar26 + 1);
              pFVar19 = (FILE *)((long)pFVar19 +
                                ((long)(in_R9 + 1 + (long)ppcVar27) - (long)poVar25));
              cVar5 = in_R9[(long)ppcVar26];
            }
            if (ppcVar15 != ppcVar26) {
              *(_Bool *)&pFVar19->_flags = false;
              ppcVar24 = (char **)((long)ppcVar26 - (long)ppcVar27);
              _Var4 = valid_digits((uchar *)poVar25,(size_t)ppcVar24);
              if (_Var4) {
                pbVar17 = (byte *)((long)ppcVar26 + 1);
                if (((long)ppcVar15 - (long)pbVar17 == 1) ||
                   (((in_R9 + 1)[(long)ppcVar26] != ' ' && ((in_R9 + 1)[(long)ppcVar26] != '*')))) {
                  if (bsd_reversed == 0) goto LAB_001026e0;
                  bsd_reversed = 1;
                }
                else if (bsd_reversed != 1) {
                  pbVar17 = (byte *)((long)ppcVar26 + 2);
                  bsd_reversed = 0;
                }
                missing_00 = in_R9 + (long)pbVar17;
                if (local_124 == 0) {
LAB_0010281c:
                  do {
                    if (((local_128 == 0) && (*missing_00 == '-')) &&
                       (((_Bool *)missing_00)[1] == false)) goto LAB_001026e0;
                    bVar28 = false;
                    if (status_only == false) {
                      sVar11 = strcspn(missing_00,"\\\n\r");
                      bVar28 = ((_Bool *)missing_00)[sVar11] != false;
                    }
                    _Var4 = digest_file(missing_00,(int *)local_158,&missing,(_Bool *)&length,
                                        length_00);
                    ppcVar27 = (char **)(CONCAT71(extraout_var,_Var4) & 0xffffffff);
                    if (_Var4) {
                      if ((ignore_missing == false) || (missing == false)) {
                        if (ppcVar24 < digest_hex_bytes) {
                          ppcVar24 = (char **)bin_buffer_unaligned;
                          uVar14 = digest_length >> 3;
                          base64_encode(local_158,uVar14,ppcVar24,0x59);
                          iVar6 = memcmp(poVar25,ppcVar24,((uVar14 + 2) / 3) * 4 + 1);
                          bVar29 = iVar6 == 0;
LAB_00102d80:
                          if (!bVar29) goto LAB_00102ab8;
LAB_00102d88:
                          local_122 = status_only;
                          if ((status_only != false) || (local_122 = quiet, quiet != false))
                          goto LAB_001028a0;
                          local_122 = (char)ppcVar27;
                          if (bVar28) goto LAB_00102dbb;
                          print_filename(missing_00,false);
LAB_00102df1:
                          if (quiet == false) {
                            pcVar21 = "OK";
LAB_00102aed:
                            uVar7 = dcgettext(0,pcVar21,5);
                            __printf_chk(2,": %s\n",uVar7);
                          }
                        }
                        else {
                          if ((char **)digest_hex_bytes == ppcVar24) {
                            ppcVar24 = (char **)((ulong)ppcVar24 >> 1);
                            if (ppcVar24 != (char **)0x0) {
                              ppcVar26 = (char **)0x0;
                              while( true ) {
                                _Var4 = *(_Bool *)((long)&((FILE *)poVar25)->_flags +
                                                  (long)ppcVar26 * 2);
                                uVar18 = (uint)_Var4;
                                if (_Var4 - 0x41 < 0x1a) {
                                  uVar18 = _Var4 + 0x20;
                                }
                                if ((int)"0123456789abcdef"
                                         [*(byte *)((long)local_158 + (long)ppcVar26) >> 4] !=
                                    uVar18) break;
                                _Var4 = *(_Bool *)((long)&((FILE *)poVar25)->_flags +
                                                  (long)ppcVar26 * 2 + 1);
                                in_R9 = (char *)(ulong)(_Var4 - 0x41);
                                uVar18 = (uint)_Var4;
                                if (_Var4 - 0x41 < 0x1a) {
                                  uVar18 = _Var4 + 0x20;
                                }
                                if (((int)"0123456789abcdef"
                                          [*(byte *)((long)local_158 + (long)ppcVar26) & 0xf] !=
                                     uVar18) ||
                                   (ppcVar26 = (char **)((long)ppcVar26 + 1), ppcVar24 == ppcVar26))
                                break;
                              }
                              bVar29 = ppcVar26 == ppcVar24;
                              length_00 = local_158;
                              goto LAB_00102d80;
                            }
                            goto LAB_00102d88;
                          }
LAB_00102ab8:
                          ppcVar27 = (char **)(ulong)status_only;
                          local_150 = (FILE *)((long)&local_150->_flags + 1);
                          if (status_only == false) {
                            if (bVar28) {
LAB_00102dbb:
                              pcVar21 = _stdout->_IO_write_ptr;
                              if (pcVar21 < _stdout->_IO_write_end) {
                                _stdout->_IO_write_ptr = pcVar21 + 1;
                                *pcVar21 = '\\';
                              }
                              else {
                                __overflow(_stdout,0x5c);
                              }
                              print_filename(missing_00,true);
                              if ((char)ppcVar27 != '\0') goto LAB_00102df1;
                            }
                            else {
                              print_filename(missing_00,false);
                            }
                            pcVar21 = "FAILED";
                            goto LAB_00102aed;
                          }
                        }
                      }
                    }
                    else {
                      if (status_only == false) {
                        if (bVar28) {
                          pcVar21 = _stdout->_IO_write_ptr;
                          if (pcVar21 < _stdout->_IO_write_end) {
                            _stdout->_IO_write_ptr = pcVar21 + 1;
                            *pcVar21 = '\\';
                          }
                          else {
                            __overflow(_stdout,0x5c);
                          }
                        }
                        print_filename(missing_00,bVar28);
                        uVar7 = dcgettext(0,"FAILED open or read",5);
                        __printf_chk(2,": %s\n",uVar7);
                      }
                      local_148 = (FILE *)((long)&local_148->_flags + 1);
                    }
LAB_001028a0:
                    local_123 = local_169;
                    filename = (uintmax_t *)((long)filename + 1);
                    if ((local_198->_flags & 0x30) == 0) goto LAB_00102709;
LAB_001028c0:
                    do {
                      free(line);
                      poVar25 = (option *)local_198;
                      ppcVar27 = local_140;
                      if ((local_198->_flags & 0x20U) == 0) {
                        if (local_128 == 0) {
                          clearerr_unlocked(local_198);
                        }
                        else {
                          iVar6 = rpl_fclose();
                          if (iVar6 != 0) {
                            puVar12 = (uint *)__errno_location();
                            uVar18 = *puVar12;
                            filename = (uintmax_t *)(ulong)uVar18;
                            if (-1 < (int)uVar18) {
                              uVar7 = quotearg_n_style_colon(0,3,local_160);
                              puVar20 = &_LC9;
                              if (uVar18 == 0) goto LAB_00102cf1;
                              goto LAB_00102d09;
                            }
                          }
                        }
                        bVar3 = 0;
                        if (local_123 == 0) {
                          filename = (uintmax_t *)quotearg_n_style_colon(0,3,local_160);
                          pcVar21 = "%s: no properly formatted checksum lines found";
LAB_001030b2:
                          uVar7 = dcgettext(0,pcVar21,5);
                          error(0,0,uVar7,filename);
                        }
                        else if (status_only == false) {
                          if (local_138 != (FILE *)0x0) {
                            length_00 = (uintmax_t *)0x5;
                            uVar7 = dcngettext(0,"WARNING: %ju line is improperly formatted",
                                               "WARNING: %ju lines are improperly formatted",
                                               local_138);
                            error(0,0,uVar7,local_138);
                            poVar25 = (option *)local_138;
                          }
                          if (local_148 != (FILE *)0x0) {
                            length_00 = (uintmax_t *)0x5;
                            uVar7 = dcngettext(0,"WARNING: %ju listed file could not be read",
                                               "WARNING: %ju listed files could not be read",
                                               local_148);
                            error(0,0,uVar7,local_148);
                            poVar25 = (option *)local_148;
                          }
                          if (local_150 == (FILE *)0x0) {
                            if (ignore_missing == false) goto LAB_00102b0f;
                            if (local_122 == '\0') goto LAB_00103092;
                            goto LAB_0010295c;
                          }
                          length_00 = (uintmax_t *)0x5;
                          uVar7 = dcngettext(0,"WARNING: %ju computed checksum did NOT match",
                                             "WARNING: %ju computed checksums did NOT match",
                                             local_150);
                          error(0,0,uVar7,local_150);
                          poVar25 = (option *)local_150;
                          if ((ignore_missing != false) && (local_122 == '\0')) {
LAB_00103092:
                            filename = (uintmax_t *)quotearg_n_style_colon(0,3,local_160);
                            pcVar21 = "%s: no file was verified";
                            goto LAB_001030b2;
                          }
                        }
                        else {
LAB_00102b0f:
                          if (local_122 != '\0') {
LAB_0010295c:
                            if (local_148 == (FILE *)0x0 && local_150 == (FILE *)0x0) {
                              bVar3 = strict ^ 1U | local_138 == (FILE *)0x0;
                            }
                          }
                        }
                        bVar3 = bVar3 & 1;
                      }
                      else {
                        if (local_128 == 0) {
                          clearerr_unlocked(local_198);
                        }
                        else {
                          rpl_fclose();
                        }
                        uVar7 = quotearg_n_style_colon(0,3,local_160);
LAB_00102cf1:
                        filename = (uintmax_t *)0x0;
                        puVar20 = (undefined *)dcgettext(0,"%s: read error",5);
LAB_00102d09:
                        error(0,filename,puVar20,uVar7);
                        bVar3 = 0;
                      }
                      while( true ) {
                        ppcVar26 = ppcVar27 + 1;
                        local_121 = local_121 & bVar3;
                        if (local_120 <= ppcVar26) {
                          length_00 = (uintmax_t *)(ulong)local_121;
                          goto LAB_0010242a;
                        }
                        local_160 = (uintmax_t *)*ppcVar26;
                        ppcVar27 = ppcVar26;
LAB_00102490:
                        local_158 = (uintmax_t *)((ulong)local_130 & 0xfffffffffffffff8);
                        local_128 = (byte)*local_160 - 0x2d;
                        if ((local_128 == 0) &&
                           (local_128 = (uint)*(byte *)((long)local_160 + 1), local_128 == 0))
                        break;
                        poVar25 = (option *)fopen_safer(local_160,&_LC8);
                        if ((FILE *)poVar25 != (FILE *)0x0) goto LAB_001024e9;
                        uVar7 = quotearg_n_style_colon(0,3,local_160);
                        piVar16 = __errno_location();
                        bVar3 = 0;
                        error(0,*piVar16,&_LC9,uVar7);
                      }
                      have_read_stdin = true;
                      local_160 = (uintmax_t *)dcgettext(0,"standard input",5);
                      poVar25 = (option *)_stdin;
LAB_001024e9:
                      local_188 = &line_chars_allocated;
                      local_122 = '\0';
                      filename = (uintmax_t *)0x1;
                      local_190 = &line;
                      line = (char *)0x0;
                      line_chars_allocated = 0;
                      local_123 = 0;
                      local_150 = (FILE *)0x0;
                      local_148 = (FILE *)0x0;
                      local_138 = (FILE *)0x0;
                      local_198 = (FILE *)poVar25;
                      local_140 = ppcVar27;
LAB_00102550:
                      _Var10 = __getdelim(local_190,local_188,10,local_198);
                      pcVar21 = line;
                    } while (_Var10 < 1);
                    if (*line == '#') goto LAB_001026f8;
                    lVar9 = _Var10 - (ulong)(line[_Var10 + -1] == '\n');
                    ppcVar15 = (char **)(lVar9 - (ulong)(line[lVar9 - (ulong)(0 < lVar9)] == '\r'));
                    if (ppcVar15 == (char **)0x0) goto LAB_001026f8;
                    line[(long)ppcVar15] = '\0';
                    ppcVar27 = (char **)0x0;
                    cVar5 = *line;
                    if (cVar5 != ' ') goto LAB_001025dd;
                    do {
                      do {
                        ppcVar27 = (char **)((long)ppcVar27 + 1);
                        cVar5 = line[(long)ppcVar27];
                      } while (cVar5 == ' ');
LAB_001025dd:
                    } while (cVar5 == '\t');
                    local_124 = 0;
                    if (cVar5 == '\\') {
                      ppcVar27 = (char **)((long)ppcVar27 + 1);
                      local_124 = local_169;
                    }
                    poVar25 = (option *)(line + (long)ppcVar27);
                    in_R9 = pcVar21;
                    if (algorithm_specified == false) {
                      if (max_tag_len_1 == (char **)0x0) {
                        pcVar22 = "BSD";
                        ppcVar24 = algorithm_tags;
                        do {
                          ppcVar26 = max_tag_len_1;
                          ppcVar13 = (char **)strlen(pcVar22);
                          ppcVar24 = ppcVar24 + 1;
                          pcVar22 = *ppcVar24;
                          max_tag_len_1 = ppcVar26;
                          if (ppcVar26 < ppcVar13) {
                            max_tag_len_1 = ppcVar13;
                          }
                          missing_00 = pcVar21;
                        } while (pcVar22 != (char *)0x0);
                      }
                      ppcVar26 = (char **)0x0;
                      while ((_Var4 = *(_Bool *)((long)&((FILE *)poVar25)->_flags + (long)ppcVar26),
                             ppcVar24 = max_tag_len_1, 0x2d < _Var4 ||
                             ((0xffffdefefffffdfeU >> ((ulong)_Var4 & 0x3f) & 1) != 0))) {
                        ppcVar26 = (char **)((long)ppcVar26 + 1);
                        if (max_tag_len_1 < ppcVar26) goto LAB_001026e0;
                      }
                      if (max_tag_len_1 < ppcVar26) goto LAB_001026e0;
                      ppcVar24 = (char **)(pcVar21 + (long)((long)ppcVar26 + (long)ppcVar27));
                      bVar3 = *(byte *)ppcVar24;
                      missing_00 = (char *)(ulong)bVar3;
                      *(byte *)ppcVar24 = 0;
                      lVar9 = argmatch_exact(poVar25,algorithm_tags);
                      *(byte *)ppcVar24 = bVar3;
                      if (lVar9 < 4) goto LAB_001026e0;
                      cksum_algorithm = (Algorithm)lVar9;
                    }
                    AVar2 = cksum_algorithm;
                    missing_00 = (char *)(ulong)cksum_algorithm;
                    ppcVar24 = (char **)algorithm_tags[(long)missing_00];
                    sVar11 = strlen((char *)ppcVar24);
                    iVar6 = strncmp((char *)poVar25,(char *)ppcVar24,sVar11);
                    ppcVar26 = (char **)(ulong)AVar2;
                    in_R9 = pcVar21;
                    if (iVar6 != 0) goto LAB_00102750;
                    ppcVar27 = (char **)((long)ppcVar27 + sVar11);
                    pcVar22 = pcVar21 + (long)ppcVar27;
                    cVar5 = *pcVar22;
                    *pcVar22 = '\0';
                    iVar6 = strcmp((char *)poVar25,(char *)ppcVar24);
                    if (iVar6 != 0) goto LAB_001026e0;
                    digest_length = (uintmax_t)algorithm_bits[(long)missing_00];
                    if (cVar5 == '(') {
                      *pcVar22 = '(';
                    }
                    else {
                      ppcVar27 = (char **)((long)ppcVar27 + 1);
                      if (cVar5 == '-') {
                        length_00 = (uintmax_t *)0x0;
                        in_R9 = pcVar21;
                        iVar6 = xstrtoumax(pcVar21 + (long)ppcVar27,&length,0,&missing);
                        if ((((iVar6 != 0) || (uVar14 = CONCAT71(uStack_107,missing), uVar14 == 0))
                            || (digest_length < uVar14)) || ((missing & 7U) != 0))
                        goto LAB_001026e0;
                        ppcVar27 = (char **)(length - (long)pcVar21);
                        digest_length = uVar14;
                      }
                    }
                    digest_hex_bytes = digest_length >> 2;
                    if (pcVar21[(long)ppcVar27] == ' ') {
                      ppcVar27 = (char **)((long)ppcVar27 + 1);
                    }
                    in_R9 = pcVar21;
                    if (pcVar21[(long)ppcVar27] != '(') goto LAB_001026e0;
                    lVar9 = (long)ppcVar15 - ((long)ppcVar27 + 1);
                    if (lVar9 == 0) goto LAB_001026e0;
                    missing_00 = pcVar21 + (long)((long)ppcVar27 + 1);
                    for (in_R9 = (char *)(lVar9 + -1);
                        (in_R9 != (char *)0x0 && (((_Bool *)missing_00)[(long)in_R9] != true));
                        in_R9 = in_R9 + -1) {
                    }
                    p_Var23 = (_Bool *)missing_00 + (long)in_R9;
                    if ((*p_Var23 != true) ||
                       ((local_124 != 0 &&
                        (pcVar21 = filename_unescape(missing_00,(size_t)in_R9),
                        pcVar21 == (char *)0x0)))) goto LAB_001026e0;
                    *p_Var23 = false;
                    do {
                      do {
                        in_R9 = in_R9 + 1;
                        _Var4 = ((_Bool *)missing_00)[(long)in_R9];
                      } while (_Var4 == true);
                    } while (_Var4 == true);
                    if (_Var4 != true) goto LAB_001026e0;
                    do {
                      do {
                        in_R9 = in_R9 + 1;
                      } while (((_Bool *)missing_00)[(long)in_R9] == true);
                    } while (((_Bool *)missing_00)[(long)in_R9] == true);
                    ppcVar24 = (char **)(lVar9 - (long)in_R9);
                    poVar25 = (option *)((_Bool *)missing_00 + (long)in_R9);
                    _Var4 = valid_digits((uchar *)poVar25,(size_t)ppcVar24);
                    if (!_Var4) goto LAB_001026e0;
                  } while( true );
                }
                goto LAB_00102fab;
              }
            }
            goto LAB_001026e0;
          }
        }
        if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return (uint)length_00 ^ 1;
      }
    }
  }
  else {
    pcVar21 = "--base64 and --raw are mutually exclusive";
  }
  uVar7 = dcgettext(0,pcVar21,5);
  error(0,0,uVar7);
switchD_00101f8d_caseD_64:
                    /* WARNING: Subroutine does not return */
  usage(1);
}


