
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
LAB_001000e0:
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
      goto LAB_001000e0;
    }
    file = (char *)((byte *)file + 1);
    fwrite_unlocked(&_LC2,1,2,_stdout);
    bVar1 = *file;
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

_Bool digest_file(char *filename,int *binary,uchar *bin_result,_Bool *missing,uintmax_t *length)

{
  FILE *__stream;
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar1 = (byte)*filename - 0x2d;
  if (uVar1 == 0) {
    uVar1 = (uint)(byte)filename[1];
  }
  *bin_result = '\0';
  __stream = _stdin;
  if (uVar1 == 0) {
    have_read_stdin = true;
    fadvise(_stdin,2);
    iVar2 = blake2b_stream(__stream,binary,digest_length >> 3);
    if (iVar2 == 0) {
      clearerr_unlocked(__stream);
      return true;
    }
    piVar4 = __errno_location();
    iVar2 = *piVar4;
    clearerr_unlocked(__stream);
  }
  else {
    lVar5 = fopen_safer(filename,&_LC3);
    if (lVar5 == 0) {
      if ((ignore_missing != false) && (piVar4 = __errno_location(), *piVar4 == 2)) {
        *bin_result = '\x01';
        return true;
      }
      uVar6 = quotearg_n_style_colon(0,3,filename);
      piVar4 = __errno_location();
      error(0,*piVar4,&_LC4,uVar6);
      return false;
    }
    fadvise(lVar5,2);
    iVar2 = blake2b_stream(lVar5,binary,digest_length >> 3);
    if (iVar2 == 0) {
      iVar2 = rpl_fclose(lVar5);
      if (iVar2 == 0) {
        return true;
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
    return true;
  }
LAB_001002a0:
  uVar6 = quotearg_n_style_colon(0,3,filename);
  error(0,iVar2,&_LC4,uVar6);
  return false;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void usage(int status)

{
  FILE *pFVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  char *pcVar6;
  infomap *piVar7;
  infomap infomap [7];
  
  uVar4 = _program_name;
  piVar7 = infomap;
  if (status != 0) {
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
    iVar2 = strcmp("b2sum",pcVar5);
    if (iVar2 == 0) break;
    pcVar5 = *(char **)((long)piVar7 + 0x10);
    piVar7 = (infomap *)((long)piVar7 + 0x10);
  } while (pcVar5 != (char *)0x0);
  pcVar5 = *(char **)((long)piVar7 + 8);
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
  exit(status);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int main(int argc,char **argv)

{
  undefined1 *puVar1;
  _Bool _Var2;
  long lVar3;
  uchar *puVar4;
  uchar uVar5;
  byte bVar6;
  _Bool _Var7;
  char cVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined7 extraout_var;
  __ssize_t _Var14;
  _Bool *p_Var15;
  FILE *__stream;
  size_t sVar16;
  int *piVar17;
  ulong uVar18;
  byte bVar19;
  uint uVar20;
  char **ppcVar21;
  undefined *puVar22;
  char **ppcVar23;
  char *pcVar24;
  _Bool *p_Var25;
  char **ppcVar26;
  char **ppcVar27;
  char **ppcVar28;
  uint *puVar29;
  char *pcVar30;
  option *filename;
  option *poVar31;
  ulong uVar32;
  long in_FS_OFFSET;
  bool bVar33;
  bool bVar34;
  char **local_120;
  undefined *local_118;
  char **local_110;
  _Bool local_101;
  option *local_f0;
  long local_e0;
  long local_d8;
  long local_c8;
  uchar *local_c0;
  uint local_b8;
  char local_b3;
  char local_b2;
  byte local_b1;
  char **local_b0;
  char *line;
  size_t line_chars_allocated;
  uintmax_t length;
  _Bool missing;
  undefined7 uStack_8f;
  uchar bin_buffer_unaligned [72];
  
  iVar10 = -1;
  filename = long_options;
  ppcVar23 = (char **)(ulong)(uint)argc;
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils");
  pcVar30 = "l:bctwz";
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  setvbuf(_stdout,(char *)0x0,1,0);
  local_120 = (char **)0xffffffff;
  local_110 = (char **)0x0;
  local_118 = &_LC8;
  puVar29 = &switchD_001016ab::switchdataD_00102940;
LAB_00101668:
  ppcVar26 = (char **)0x0;
  iVar9 = getopt_long(ppcVar23,argv,"l:bctwz",long_options);
  if (iVar9 == -1) {
    min_digest_line_length = 3;
    if (digest_length < 0x201) {
      if ((digest_length & 7) == 0) {
        if (digest_length == 0) {
          digest_length = 0x200;
        }
        digest_hex_bytes = digest_length >> 2;
        if (iVar10 == -1) {
          filename = (option *)0x0;
          poVar31 = filename;
          if (digest_delim == '\n') goto LAB_00101ab8;
        }
        else {
          if ((int)local_120 == 0) {
            pcVar30 = "--tag does not support --text mode";
LAB_00101ada:
            uVar11 = dcgettext(0,pcVar30,5);
            error(0,0,uVar11);
switchD_001016ab_caseD_64:
                    /* WARNING: Subroutine does not return */
            usage(1);
          }
          filename = (option *)0x1;
          if (digest_delim == '\n') goto LAB_00102389;
        }
        pcVar30 = "the --zero option is not supported when verifying checksums";
        poVar31 = filename;
        goto joined_r0x0010187f;
      }
    }
    else {
      uVar11 = quote(local_118);
      uVar12 = dcgettext(0,"invalid length: %s",5);
      error(0,0,uVar12,uVar11);
      uVar11 = quote("BLAKE2b");
      uVar12 = dcgettext(0,"maximum digest length for %s is %d bits",5);
      ppcVar26 = (char **)0x200;
      error(1,0,uVar12,uVar11);
    }
    uVar11 = quote(local_118);
    uVar12 = dcgettext(0,"invalid length: %s",5);
    error(0,0,uVar12,uVar11);
    uVar11 = dcgettext(0,"length is not a multiple of 8",5);
    error(1,0,uVar11);
LAB_00102911:
    uVar11 = quotearg_n_style_colon(0,3,local_f0);
    pcVar24 = "%s: no file was verified";
LAB_0010280e:
    uVar12 = dcgettext(0,pcVar24,5);
    error(0,0,uVar12,uVar11);
    bVar6 = 0;
LAB_0010208c:
    bVar6 = bVar6 & 1;
LAB_0010208f:
    do {
      local_b1 = local_b1 & bVar6;
      pcVar30 = (char *)((long)pcVar30 + 8);
      if (local_b0 <= pcVar30) {
        uVar20 = (uint)local_b1;
        ppcVar27 = local_110;
LAB_00101afb:
        do {
          local_110 = ppcVar27;
          if (have_read_stdin == false) {
LAB_00101b08:
            if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
              return (uVar20 ^ 1) & 0xff;
            }
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          local_120 = (char **)CONCAT71(local_120._1_7_,(char)uVar20);
          iVar10 = rpl_fclose(_stdin);
          uVar20 = uVar20 & 0xff;
          if (iVar10 != -1) goto LAB_00101b08;
          argv = (char **)dcgettext(0,"standard input",5);
          piVar17 = __errno_location();
          error(1,*piVar17,argv);
LAB_00102389:
          pcVar30 = "the --tag option is meaningless when verifying checksums";
          poVar31 = filename;
          if ((byte)local_110 != '\0') goto LAB_00101ada;
LAB_00101ab8:
          if (-1 < (int)local_120) {
            pcVar30 = "the --binary and --text options are meaningless when verifying checksums";
joined_r0x0010187f:
            if ((byte)local_110 != '\0') goto LAB_00101ada;
          }
          if ((((ignore_missing == true) &&
               (pcVar30 = "the --ignore-missing option is meaningful only when verifying checksums",
               (byte)local_110 == 0)) ||
              ((status_only == true &&
               (pcVar30 = "the --status option is meaningful only when verifying checksums",
               (byte)local_110 == 0)))) ||
             ((warn == true &&
              (pcVar30 = "the --warn option is meaningful only when verifying checksums",
              (byte)local_110 == 0)))) goto LAB_00101ada;
          bVar6 = quiet ^ 1U | (byte)local_110;
          uVar20 = (uint)bVar6;
          if (bVar6 == 0) {
            pcVar30 = "the --quiet option is meaningful only when verifying checksums";
            goto LAB_00101ada;
          }
          if ((((byte)local_110 ^ 1) & strict) != 0) {
            pcVar30 = "the --strict option is meaningful only when verifying checksums";
            goto LAB_00101ada;
          }
          ppcVar26 = argv + (int)ppcVar23;
          lVar13 = (long)_optind;
          local_b0 = ppcVar26;
          if (_optind == (int)ppcVar23) {
            local_b0 = ppcVar26 + 1;
            *ppcVar26 = "-";
          }
          ppcVar26 = argv + lVar13;
          filename = poVar31;
          ppcVar27 = local_110;
          if (ppcVar26 < local_b0) {
            filename = (option *)*ppcVar26;
            if ((byte)local_110 == 0) {
              local_101 = SUB81(poVar31,0);
              puVar29 = (uint *)(ulong)uVar20;
              ppcVar23 = (char **)&_LC81;
              ppcVar27 = (char **)&missing;
              ppcVar21 = ppcVar26;
              do {
                _Var7 = digest_file((char *)filename,(int *)bin_buffer_unaligned,&missing,
                                    (_Bool *)ppcVar27,(uintmax_t *)ppcVar26);
                uVar5 = digest_delim;
                ppcVar27 = (char **)CONCAT71(extraout_var,_Var7);
                if (_Var7) {
                  local_b8._0_1_ = false;
                  if ((digest_delim == '\n') &&
                     (sVar16 = strcspn((char *)filename,"\\\n\r"),
                     *(_Bool *)((long)&filename->name + sVar16) != false)) {
                    pcVar30 = _stdout->_IO_write_ptr;
                    if (pcVar30 < _stdout->_IO_write_end) {
                      _stdout->_IO_write_ptr = pcVar30 + 1;
                      *pcVar30 = '\\';
                    }
                    else {
                      __overflow(_stdout,0x5c);
                    }
                    local_b8._0_1_ = true;
                  }
                  if (local_101 == false) {
                    if (digest_hex_bytes >> 1 != 0) {
LAB_001019e5:
                      uVar32 = 0;
                      do {
                        puVar1 = (undefined1 *)((long)bin_buffer_unaligned + uVar32);
                        uVar32 = uVar32 + 1;
                        __printf_chk(2,&_LC81,*puVar1);
                      } while (uVar32 < digest_hex_bytes >> 1);
                      if (local_101 != false) goto LAB_00101a7c;
                    }
                    pcVar30 = _stdout->_IO_write_ptr;
                    if (pcVar30 < _stdout->_IO_write_end) {
                      _stdout->_IO_write_ptr = pcVar30 + 1;
                      *pcVar30 = ' ';
                    }
                    else {
                      __overflow(_stdout,0x20);
                    }
                    iVar10 = 0x20;
                    if (0 < (int)local_120) {
                      iVar10 = 0x2a;
                    }
                    pcVar30 = _stdout->_IO_write_ptr;
                    if (pcVar30 < _stdout->_IO_write_end) {
                      _stdout->_IO_write_ptr = pcVar30 + 1;
                      *pcVar30 = (char)iVar10;
                    }
                    else {
                      __overflow(_stdout,iVar10);
                    }
                    print_filename((char *)filename,local_b8._0_1_);
                  }
                  else {
                    fwrite_unlocked("BLAKE2b",1,7,_stdout);
                    if (digest_length < 0x200) {
                      __printf_chk(2,&_LC78);
                    }
                    fwrite_unlocked(&_LC79,1,2,_stdout);
                    print_filename((char *)filename,local_b8._0_1_);
                    fwrite_unlocked(&_LC80,1,4,_stdout);
                    if (digest_hex_bytes >> 1 != 0) goto LAB_001019e5;
                  }
LAB_00101a7c:
                  puVar4 = (uchar *)_stdout->_IO_write_ptr;
                  ppcVar27 = (char **)puVar29;
                  if (puVar4 < _stdout->_IO_write_end) {
                    _stdout->_IO_write_ptr = (char *)(puVar4 + 1);
                    *puVar4 = uVar5;
                  }
                  else {
                    __overflow(_stdout,(uint)uVar5);
                  }
                }
                ppcVar21 = ppcVar21 + 1;
                if (local_b0 <= ppcVar21) goto LAB_00101af9;
                filename = (option *)*ppcVar21;
                puVar29 = (uint *)((ulong)ppcVar27 & 0xffffffff);
                ppcVar27 = local_b0;
              } while( true );
            }
            local_c0 = bin_buffer_unaligned + 7;
            local_b1 = (byte)local_110;
            pcVar30 = (char *)ppcVar26;
            local_f0 = filename;
            goto LAB_00101b60;
          }
        } while( true );
      }
      local_f0 = *(option **)pcVar30;
      poVar31 = filename;
LAB_00101b60:
      filename = poVar31;
      local_b8 = *(_Bool *)&local_f0->name - 0x2d;
      if ((local_b8 == 0) && (local_b8 = (uint)*(_Bool *)((long)&local_f0->name + 1), local_b8 == 0)
         ) {
        have_read_stdin = true;
        local_f0 = (option *)dcgettext(0,"standard input",5);
        __stream = _stdin;
LAB_00101bb9:
        local_b2 = '\0';
        ppcVar23 = (char **)0x1;
        local_120 = &line;
        line = (char *)0x0;
        line_chars_allocated = 0;
        local_b3 = '\0';
        local_e0 = 0;
        local_d8 = 0;
        local_c8 = 0;
        ppcVar27 = (char **)pcVar30;
LAB_00101c20:
        _Var14 = __getdelim(local_120,&line_chars_allocated,10,__stream);
        poVar31 = (option *)line;
        if (0 < _Var14) {
          if (*line == '#') goto LAB_00101d88;
          lVar13 = _Var14 - (ulong)(line[_Var14 + -1] == '\n');
          ppcVar27 = (char **)(lVar13 - (ulong)(line[lVar13 - (ulong)(0 < lVar13)] == '\r'));
          if (ppcVar27 == (char **)0x0) goto LAB_00101d88;
          line[(long)ppcVar27] = '\0';
          puVar29 = (uint *)0x0;
          cVar8 = *line;
          if (cVar8 != ' ') goto LAB_00101cad;
          do {
            do {
              puVar29 = (uint *)((long)puVar29 + 1);
              cVar8 = line[(long)puVar29];
            } while (cVar8 == ' ');
LAB_00101cad:
          } while (cVar8 == '\t');
          local_101 = false;
          if (cVar8 == '\\') {
            puVar29 = (uint *)((long)puVar29 + 1);
            local_101 = (_Bool)(byte)local_110;
          }
          p_Var15 = (_Bool *)(line + (long)puVar29);
          iVar10 = strncmp(p_Var15,"BLAKE2b",7);
          if (iVar10 != 0) goto LAB_00101de0;
          ppcVar21 = (char **)((long)puVar29 + 7);
          pcVar24 = (char *)((long)poVar31 + (long)ppcVar21);
          cVar8 = *pcVar24;
          *pcVar24 = '\0';
          iVar10 = strcmp(p_Var15,"BLAKE2b");
          if (iVar10 == 0) {
            if (cVar8 == '(') {
              *pcVar24 = '(';
              digest_length = 0x200;
            }
            else {
              ppcVar21 = (char **)((long)puVar29 + 8);
              digest_length = 0x200;
              if (cVar8 == '-') {
                ppcVar26 = (char **)0x0;
                iVar10 = xstrtoumax((char *)((long)poVar31 + (long)ppcVar21),&missing,0,&length);
                if ((((iVar10 != 0) || (length == 0)) || (digest_length < length)) ||
                   ((length & 7) != 0)) goto LAB_00101d71;
                ppcVar21 = (char **)(CONCAT71(uStack_8f,missing) - (long)poVar31);
                digest_length = length;
              }
            }
            ppcVar28 = (char **)(digest_length >> 2);
            if (*(char *)((long)poVar31 + (long)ppcVar21) == ' ') {
              ppcVar21 = (char **)((long)ppcVar21 + 1);
            }
            digest_hex_bytes = (size_t)ppcVar28;
            if (*(char *)((long)poVar31 + (long)ppcVar21) == '(') {
              ppcVar27 = (char **)((long)ppcVar27 - ((long)ppcVar21 + 1));
              if (ppcVar27 != (char **)0x0) {
                poVar31 = (option *)((long)poVar31 + (long)((long)ppcVar21 + 1));
                for (p_Var15 = (_Bool *)((long)ppcVar27 + -1);
                    (p_Var15 != (_Bool *)0x0 && (p_Var15[(long)&poVar31->name] != true));
                    p_Var15 = p_Var15 + -1) {
                }
                p_Var25 = p_Var15 + (long)&poVar31->name;
                if ((*p_Var25 == true) &&
                   ((local_101 == false ||
                    (pcVar24 = filename_unescape((char *)poVar31,(size_t)p_Var15),
                    pcVar24 != (char *)0x0)))) {
                  *p_Var25 = false;
                  do {
                    do {
                      p_Var15 = p_Var15 + 1;
                      _Var7 = p_Var15[(long)&poVar31->name];
                    } while (_Var7 == true);
                  } while (_Var7 == true);
                  if (_Var7 == true) {
                    do {
                      do {
                        p_Var15 = p_Var15 + 1;
                      } while (p_Var15[(long)&poVar31->name] == true);
                    } while (p_Var15[(long)&poVar31->name] == true);
                    puVar29 = (uint *)((long)ppcVar27 - (long)p_Var15);
                    ppcVar27 = (char **)puVar29;
                    if (ppcVar28 == (char **)puVar29) {
                      p_Var15 = p_Var15 + (long)&poVar31->name;
                      ppcVar21 = (char **)0x0;
                      while( true ) {
                        if ((char **)puVar29 == ppcVar21) {
                          bVar34 = p_Var15[(long)ppcVar21] == false;
                          goto LAB_001025e5;
                        }
                        uVar20 = p_Var15[(long)ppcVar21] - 0x30;
                        if ((0x36 < (byte)uVar20) ||
                           ((0x7e0000007e03ffU >> ((ulong)uVar20 & 0x3f) & 1) == 0)) break;
                        ppcVar21 = (char **)((long)ppcVar21 + 1);
                      }
                    }
                  }
                }
              }
            }
          }
LAB_00101d71:
          do {
            if (warn != false) {
              ppcVar27 = (char **)quotearg_n_style_colon(0,3,local_f0);
              uVar11 = dcgettext(0,"%s: %ju: improperly formatted %s checksum line",5);
              ppcVar26 = ppcVar23;
              error(0,0,uVar11,ppcVar27,ppcVar23,"BLAKE2b");
            }
            local_c8 = local_c8 + 1;
            filename = poVar31;
LAB_00101d88:
            bVar6 = (byte)__stream->_flags;
            poVar31 = filename;
            while( true ) {
              ppcVar23 = (char **)((long)ppcVar23 + 1);
              filename = poVar31;
              if ((bVar6 & 0x30) != 0) goto LAB_00101fe0;
              if (ppcVar23 != (char **)0x0) goto LAB_00101c20;
              p_Var15 = (_Bool *)quotearg_n_style_colon(0,3,local_f0);
              uVar11 = dcgettext(0,"%s: too many checksum lines",5);
              error(1,0,uVar11,p_Var15);
LAB_00101de0:
              bVar6 = *p_Var15;
              if ((ulong)((long)ppcVar27 - (long)puVar29) < (bVar6 == 0x5c) + min_digest_line_length
                 ) break;
              digest_hex_bytes = 0;
              ppcVar21 = (char **)0x0;
              uVar20 = *p_Var15 - 0x30;
              bVar19 = (byte)uVar20;
              bVar34 = false;
              while ((bVar19 < 0x37 &&
                     (bVar33 = (0x7e0000007e03ffU >> ((ulong)uVar20 & 0x3f) & 1) != 0, bVar33))) {
                ppcVar21 = (char **)((long)ppcVar21 + 1);
                uVar20 = p_Var15[(long)ppcVar21] - 0x30;
                bVar19 = (byte)uVar20;
                bVar34 = bVar33;
              }
              if (((!bVar34) ||
                  (digest_hex_bytes = (size_t)ppcVar21,
                  (_Bool *)0x7e < (_Bool *)((long)ppcVar21 + -2))) || (((ulong)ppcVar21 & 1) != 0))
              break;
              digest_length = (long)ppcVar21 * 4;
              ppcVar28 = (char **)puVar29;
              p_Var25 = p_Var15;
              if ((_Bool)bVar6 != false) {
                do {
                  if ((bVar6 == 0x20) || (bVar6 == 9)) break;
                  ppcVar28 = (char **)((long)ppcVar28 + 1);
                  p_Var25 = p_Var25 + ((long)((_Bool *)((long)&poVar31->name + 1) + (long)puVar29) -
                                      (long)p_Var15);
                  bVar6 = *(_Bool *)((long)&poVar31->name + (long)ppcVar28);
                } while ((_Bool)bVar6 != false);
              }
              if (ppcVar28 == ppcVar27) break;
              *p_Var25 = false;
              puVar29 = (uint *)((long)ppcVar28 - (long)puVar29);
              p_Var25 = p_Var15;
              if (ppcVar21 != (char **)puVar29) break;
              do {
                if ((0x36 < (byte)(*p_Var25 - 0x30)) ||
                   ((0x7e0000007e03ffU >> ((ulong)(*p_Var25 - 0x30) & 0x3f) & 1) == 0))
                goto LAB_00101d71;
                p_Var25 = p_Var25 + 1;
              } while (p_Var25 + -(long)p_Var15 < puVar29);
              if (*p_Var25 != false) break;
              p_Var25 = (_Bool *)((long)ppcVar28 + 1);
              if (((long)ppcVar27 - (long)p_Var25 == 1) ||
                 ((_Var7 = ((_Bool *)((long)&poVar31->name + 1))[(long)ppcVar28], _Var7 != true &&
                  (_Var7 != true)))) {
                if (bsd_reversed == 0) break;
                bsd_reversed = 1;
              }
              else if (bsd_reversed != 1) {
                p_Var25 = (_Bool *)((long)ppcVar28 + 2);
                bsd_reversed = 0;
              }
              poVar31 = (option *)(p_Var25 + (long)&poVar31->name);
              if (local_101 != false) {
                pcVar24 = filename_unescape((char *)poVar31,(long)ppcVar27 - (long)p_Var25);
                bVar34 = pcVar24 != (char *)0x0;
LAB_001025e5:
                if (!bVar34) break;
              }
              p_Var25 = (_Bool *)(ulong)local_b8;
              if (((local_b8 == 0) && (*(_Bool *)&poVar31->name == true)) &&
                 (*(_Bool *)((long)&poVar31->name + 1) == false)) break;
              ppcVar27 = (char **)0x0;
              if (status_only == false) {
                sVar16 = strcspn((char *)poVar31,"\\\n\r");
                ppcVar27 = (char **)(ulong)(*(_Bool *)((long)&poVar31->name + sVar16) != false);
              }
              _Var7 = digest_file((char *)poVar31,(int *)((ulong)local_c0 & 0xfffffffffffffff8),
                                  &missing,p_Var25,(uintmax_t *)ppcVar26);
              iVar10 = (int)ppcVar27;
              if (_Var7) {
                if ((ignore_missing == false) || (missing == false)) {
                  if ((uint *)digest_hex_bytes == puVar29) {
                    uVar32 = (ulong)puVar29 >> 1;
                    if (uVar32 != 0) {
                      uVar18 = 0;
                      do {
                        _Var2 = p_Var15[uVar18 * 2];
                        uVar20 = (uint)_Var2;
                        if (_Var2 - 0x41 < 0x1a) {
                          uVar20 = _Var2 + 0x20;
                        }
                        bVar6 = *(byte *)((long)((ulong)local_c0 & 0xfffffffffffffff8) + uVar18);
                        ppcVar26 = (char **)(ulong)bVar6;
                        if ((int)(char)bin2hex_0[bVar6 >> 4] != uVar20) {
LAB_0010250a:
                          if (uVar32 != uVar18) goto LAB_001023e2;
                          break;
                        }
                        _Var2 = p_Var15[uVar18 * 2 + 1];
                        uVar20 = (uint)_Var2;
                        if (_Var2 - 0x41 < 0x1a) {
                          uVar20 = _Var2 + 0x20;
                        }
                        ppcVar26 = (char **)(ulong)(uint)(int)(char)bin2hex_0[bVar6 & 0xf];
                        if ((int)(char)bin2hex_0[bVar6 & 0xf] != uVar20) goto LAB_0010250a;
                        uVar18 = uVar18 + 1;
                      } while (uVar32 != uVar18);
                    }
                    local_b2 = status_only;
                    if ((status_only == false) && (local_b2 = quiet, quiet == false)) {
                      local_b2 = _Var7;
                      if (iVar10 != 0) goto LAB_00102542;
                      print_filename((char *)poVar31,false);
                      local_101 = _Var7;
LAB_00102580:
                      if (quiet == false) {
                        pcVar24 = "OK";
                        goto LAB_00102416;
                      }
                    }
                  }
                  else {
LAB_001023e2:
                    local_e0 = local_e0 + 1;
                    if (status_only == false) {
                      _Var7 = false;
                      if (iVar10 == 0) {
                        print_filename((char *)poVar31,false);
                      }
                      else {
LAB_00102542:
                        pcVar24 = _stdout->_IO_write_ptr;
                        if (pcVar24 < _stdout->_IO_write_end) {
                          _stdout->_IO_write_ptr = pcVar24 + 1;
                          *pcVar24 = '\\';
                        }
                        else {
                          __overflow(_stdout,0x5c);
                        }
                        print_filename((char *)poVar31,true);
                        local_101 = _Var7;
                        if (_Var7 != false) goto LAB_00102580;
                      }
                      pcVar24 = "FAILED";
LAB_00102416:
                      uVar11 = dcgettext(0,pcVar24,5);
                      __printf_chk(2,": %s\n",uVar11);
                    }
                  }
                }
              }
              else {
                if (status_only == false) {
                  if (iVar10 != 0) {
                    pcVar24 = _stdout->_IO_write_ptr;
                    if (pcVar24 < _stdout->_IO_write_end) {
                      _stdout->_IO_write_ptr = pcVar24 + 1;
                      *pcVar24 = '\\';
                    }
                    else {
                      __overflow(_stdout,0x5c);
                    }
                  }
                  print_filename((char *)poVar31,SUB81(ppcVar27,0));
                  uVar11 = dcgettext(0,"FAILED open or read",5);
                  __printf_chk(2,": %s\n",uVar11);
                }
                local_d8 = local_d8 + 1;
              }
              bVar6 = (byte)__stream->_flags;
              local_b3 = (byte)local_110;
            }
          } while( true );
        }
LAB_00101fe0:
        free(line);
        uVar20 = __stream->_flags & 0x20;
        if (local_b8 == 0) {
          clearerr_unlocked(__stream);
LAB_0010200b:
          iVar10 = -(uint)(uVar20 == 0);
LAB_00102010:
          if (iVar10 < 0) goto code_r0x00102018;
          ppcVar23 = (char **)quotearg_n_style_colon(0,3,local_f0);
          puVar22 = &_LC4;
          if (iVar10 == 0) goto LAB_0010268e;
        }
        else {
          iVar10 = rpl_fclose();
          if (iVar10 == 0) goto LAB_0010200b;
          if (uVar20 == 0) {
            piVar17 = __errno_location();
            iVar10 = *piVar17;
            goto LAB_00102010;
          }
          ppcVar23 = (char **)quotearg_n_style_colon(0,3,local_f0);
LAB_0010268e:
          iVar10 = 0;
          puVar22 = (undefined *)dcgettext(0,"%s: read error",5);
        }
        error(0,iVar10,puVar22,ppcVar23);
        bVar6 = 0;
        goto LAB_0010208f;
      }
      __stream = (FILE *)fopen_safer(local_f0,&_LC3);
      if (__stream != (FILE *)0x0) goto LAB_00101bb9;
      uVar11 = quotearg_n_style_colon(0,3,local_f0);
      piVar17 = __errno_location();
      error(0,*piVar17,&_LC4,uVar11);
      bVar6 = 0;
    } while( true );
  }
  if (0x84 < iVar9) goto switchD_001016ab_caseD_64;
  if (iVar9 < 0x62) {
    if (iVar9 == -0x83) {
      uVar11 = proper_name_lite("Samuel Neves","Samuel Neves");
      uVar12 = proper_name_lite("Padraig Brady",&_LC45);
      version_etc(_stdout,"b2sum","GNU coreutils",_Version,uVar12,uVar11,0);
                    /* WARNING: Subroutine does not return */
      exit(0);
    }
    if (iVar9 == -0x82) {
                    /* WARNING: Subroutine does not return */
      usage(0);
    }
    goto switchD_001016ab_caseD_64;
  }
  switch(iVar9) {
  case 0x62:
    local_120 = (char **)0x1;
    goto LAB_00101668;
  case 99:
    local_110 = (char **)0x1;
    goto LAB_00101668;
  default:
    goto switchD_001016ab_caseD_64;
  case 0x6c:
    uVar11 = dcgettext(0,"invalid length",5);
    digest_length = xnumtoumax(_optarg,10,0,0x200,&_LC8,uVar11,0,2);
    local_118 = _optarg;
    goto LAB_00101668;
  case 0x74:
    local_120 = (char **)0x0;
    goto LAB_00101668;
  case 0x77:
    status_only = false;
    warn = true;
    quiet = false;
    goto LAB_00101668;
  case 0x7a:
    digest_delim = '\0';
    goto LAB_00101668;
  case 0x80:
    ignore_missing = true;
    goto LAB_00101668;
  case 0x81:
    status_only = true;
    quiet = false;
    break;
  case 0x82:
    status_only = false;
    quiet = true;
    break;
  case 0x83:
    strict = true;
    goto LAB_00101668;
  case 0x84:
    goto switchD_001016ab_caseD_84;
  }
  warn = false;
  goto LAB_00101668;
LAB_00101af9:
  uVar20 = (uint)ppcVar27;
  ppcVar27 = local_b0;
  goto LAB_00101afb;
code_r0x00102018:
  if (local_b3 == '\0') goto LAB_001027ee;
  if (status_only == false) {
    if (local_c8 != 0) {
      ppcVar26 = (char **)0x5;
      uVar11 = dcngettext(0,"WARNING: %ju line is improperly formatted",
                          "WARNING: %ju lines are improperly formatted",local_c8);
      error(0,0,uVar11,local_c8);
    }
    if (local_d8 != 0) {
      ppcVar26 = (char **)0x5;
      uVar11 = dcngettext(0,"WARNING: %ju listed file could not be read",
                          "WARNING: %ju listed files could not be read",local_d8);
      error(0,0,uVar11,local_d8);
    }
    if (local_e0 != 0) {
      ppcVar26 = (char **)0x5;
      uVar11 = dcngettext(0,"WARNING: %ju computed checksum did NOT match",
                          "WARNING: %ju computed checksums did NOT match",local_e0);
      error(0,0,uVar11,local_e0);
    }
    if (ignore_missing == false) goto LAB_001020b3;
    if (local_b2 == '\0') goto LAB_00102911;
  }
  else {
LAB_001020b3:
    if (local_b2 == '\0') goto LAB_001020ba;
  }
  if (local_d8 == 0 && local_e0 == 0) {
    bVar6 = strict ^ 1U | local_c8 == 0;
    goto LAB_0010208c;
  }
LAB_001020ba:
  bVar6 = 0;
  goto LAB_0010208c;
LAB_001027ee:
  uVar11 = quotearg_n_style_colon(0,3,local_f0);
  pcVar24 = "%s: no properly formatted checksum lines found";
  goto LAB_0010280e;
switchD_001016ab_caseD_84:
  local_120 = (char **)0x1;
  iVar10 = 1;
  goto LAB_00101668;
}


