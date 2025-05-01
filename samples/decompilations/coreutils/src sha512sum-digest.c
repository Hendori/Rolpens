
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
    iVar2 = sha512_stream(__stream,binary);
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
    iVar2 = sha512_stream(lVar5,binary);
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
      if (iVar3 == 0) goto LAB_001001f1;
      if (iVar2 != 0) goto LAB_0010028a;
    }
    piVar4 = __errno_location();
    iVar2 = *piVar4;
  }
LAB_001001f1:
  if (iVar2 == 0) {
    return true;
  }
LAB_0010028a:
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
    goto LAB_0010036a;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... [FILE]...\n",5);
  __printf_chk(2,uVar3,uVar4);
  uVar4 = dcgettext(0,"Print or check %s (%d-bit) checksums.\n",5);
  __printf_chk(2,uVar4,"SHA512",0x200);
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
    iVar2 = strcmp("sha512sum",pcVar5);
    if (iVar2 == 0) break;
    pcVar5 = *(char **)((long)piVar7 + 0x10);
    piVar7 = (infomap *)((long)piVar7 + 0x10);
  } while (pcVar5 != (char *)0x0);
  pcVar5 = *(char **)((long)piVar7 + 8);
  if (pcVar5 == (char *)0x0) {
    uVar4 = dcgettext(0,"\n%s online help: <%s>\n",5);
    pcVar5 = "sha512sum";
    __printf_chk(2,uVar4,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) goto LAB_0010067d;
    uVar4 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = " invocation";
    __printf_chk(2,uVar4,"https://www.gnu.org/software/coreutils/","sha512sum");
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
    __printf_chk(2,uVar4,"https://www.gnu.org/software/coreutils/","sha512sum");
    if (pcVar5 == "sha512sum") {
      pcVar6 = " invocation";
    }
  }
  uVar4 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar4,pcVar5,pcVar6);
LAB_0010036a:
                    /* WARNING: Subroutine does not return */
  exit(status);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int main(int argc,char **argv)

{
  long lVar1;
  uchar *puVar2;
  uchar uVar3;
  byte bVar4;
  _Bool _Var5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  FILE *pFVar12;
  undefined7 extraout_var;
  __ssize_t _Var13;
  _Bool *p_Var14;
  size_t sVar15;
  undefined7 extraout_var_00;
  FILE *pFVar16;
  FILE *pFVar17;
  int *piVar18;
  char *pcVar19;
  undefined1 *puVar20;
  ulong uVar21;
  undefined *puVar22;
  uint uVar23;
  undefined1 *puVar24;
  int iVar25;
  char *pcVar26;
  FILE *pFVar27;
  FILE *length;
  byte bVar28;
  ulong uVar29;
  char *pcVar30;
  uint *puVar31;
  char *__stream;
  option *poVar32;
  FILE *pFVar33;
  long in_FS_OFFSET;
  bool bVar34;
  FILE *local_118;
  FILE *local_110;
  FILE *local_108;
  byte local_fd;
  int local_fc;
  FILE *local_f8;
  int *local_f0;
  FILE *local_e8;
  FILE *local_e0;
  FILE *local_d8;
  FILE *local_d0;
  FILE *local_c8;
  uchar *local_c0;
  char local_b2;
  byte local_b1;
  FILE *local_b0;
  _Bool missing_1;
  char *line;
  _Bool missing;
  uchar bin_buffer_unaligned [72];
  
  pFVar33 = (FILE *)0xffffffff;
  poVar32 = long_options;
  __stream = "bctwz";
  puVar24 = (undefined1 *)(ulong)(uint)argc;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils");
  puVar31 = &switchD_001014e3::switchdataD_00102520;
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  setvbuf(_stdout,(char *)0x0,1,0);
  local_118 = (FILE *)CONCAT44(local_118._4_4_,0xffffffff);
  local_fd = 0;
  while( true ) {
    length = (FILE *)0x0;
    iVar7 = getopt_long(puVar24,argv,"bctwz",long_options);
    if (iVar7 == -1) break;
    if (0x84 < iVar7) goto switchD_001014e3_caseD_64;
    if (iVar7 < 0x62) {
      if (iVar7 == -0x83) {
        uVar8 = proper_name_lite("David Madore","David Madore");
        uVar9 = proper_name_lite("Scott Miller","Scott Miller");
        uVar10 = proper_name_lite("Ulrich Drepper","Ulrich Drepper");
        version_etc(_stdout,"sha512sum","GNU coreutils",_Version,uVar10,uVar9,uVar8,0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar7 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      goto switchD_001014e3_caseD_64;
    }
    switch(iVar7) {
    case 0x62:
      pFVar33 = (FILE *)0x1;
      break;
    case 99:
      local_fd = 1;
      break;
    default:
      goto switchD_001014e3_caseD_64;
    case 0x74:
      pFVar33 = (FILE *)0x0;
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
      local_118 = (FILE *)CONCAT44(local_118._4_4_,1);
      pFVar33 = (FILE *)0x1;
    }
  }
  min_digest_line_length = 0x82;
  digest_hex_bytes = 0x80;
  iVar7 = (int)pFVar33;
  if ((int)local_118 == -1) {
    bVar28 = 0;
    if (digest_delim != '\n') goto LAB_00101630;
LAB_00101870:
    if (-1 < iVar7) {
      pcVar26 = "the --binary and --text options are meaningless when verifying checksums";
      goto joined_r0x0010188a;
    }
  }
  else {
    if (iVar7 == 0) {
      pcVar26 = "--tag does not support --text mode";
      goto LAB_00101890;
    }
    bVar28 = 1;
    if (digest_delim == '\n') {
      pcVar26 = "the --tag option is meaningless when verifying checksums";
      if (local_fd != 0) goto LAB_00101890;
      goto LAB_00101870;
    }
LAB_00101630:
    pcVar26 = "the --zero option is not supported when verifying checksums";
joined_r0x0010188a:
    if (local_fd != 0) goto LAB_00101890;
  }
  if ((((ignore_missing != true) ||
       (pcVar26 = "the --ignore-missing option is meaningful only when verifying checksums",
       local_fd != 0)) &&
      ((status_only != true ||
       (pcVar26 = "the --status option is meaningful only when verifying checksums", local_fd != 0))
      )) && ((warn != true ||
             (pcVar26 = "the --warn option is meaningful only when verifying checksums",
             local_fd != 0)))) {
    bVar4 = quiet ^ 1U | local_fd;
    uVar29 = (ulong)(uint)bVar4;
    if (bVar4 == 0) {
      pcVar26 = "the --quiet option is meaningful only when verifying checksums";
    }
    else {
      if (((local_fd ^ 1) & strict) == 0) {
        pFVar12 = (FILE *)(argv + argc);
        lVar11 = (long)_optind;
        pFVar16 = pFVar12;
        if (_optind == argc) {
          pFVar16 = (FILE *)&pFVar12->_IO_read_ptr;
          *(char **)pFVar12 = "-";
        }
        pFVar12 = (FILE *)(argv + lVar11);
        if (pFVar12 < pFVar16) {
          local_f8 = *(FILE **)pFVar12;
          if (local_fd != 0) {
            local_c0 = bin_buffer_unaligned + 7;
            local_b1 = local_fd;
            local_b0 = pFVar16;
            goto LAB_0010190b;
          }
          local_118 = (FILE *)&missing;
          puVar31 = (uint *)(ulong)(uint)bVar4;
          puVar24 = &_LC73;
          __stream = (char *)local_f8;
          pFVar33 = pFVar12;
          do {
            _Var5 = digest_file(__stream,(int *)bin_buffer_unaligned,(uchar *)local_118,
                                (_Bool *)pFVar16,(uintmax_t *)length);
            uVar3 = digest_delim;
            pFVar12 = (FILE *)CONCAT71(extraout_var,_Var5);
            if (_Var5) {
              local_fc = 0;
              local_108 = (FILE *)(ulong)digest_delim;
              if ((digest_delim == '\n') &&
                 (sVar15 = strcspn(__stream,"\\\n\r"),
                 *(char *)((long)&((FILE *)__stream)->_flags + sVar15) != '\0')) {
                pcVar26 = _stdout->_IO_write_ptr;
                if (pcVar26 < _stdout->_IO_write_end) {
                  _stdout->_IO_write_ptr = pcVar26 + 1;
                  *pcVar26 = '\\';
                }
                else {
                  __overflow(_stdout,0x5c);
                }
                local_fc = 1;
              }
              if (bVar28 == 0) {
                if (digest_hex_bytes >> 1 != 0) {
LAB_0010179f:
                  poVar32 = (option *)0x0;
                  do {
                    p_Var14 = (_Bool *)((long)bin_buffer_unaligned + (long)poVar32);
                    poVar32 = (option *)((long)&((FILE *)poVar32)->_flags + 1);
                    __printf_chk(2,&_LC73,*p_Var14);
                  } while (poVar32 < (FILE *)(digest_hex_bytes >> 1));
                  if (bVar28 != 0) goto LAB_00101834;
                }
                pcVar26 = _stdout->_IO_write_ptr;
                if (pcVar26 < _stdout->_IO_write_end) {
                  _stdout->_IO_write_ptr = pcVar26 + 1;
                  *pcVar26 = ' ';
                }
                else {
                  __overflow(_stdout,0x20);
                }
                iVar25 = 0x20;
                if (0 < iVar7) {
                  iVar25 = 0x2a;
                }
                pcVar26 = _stdout->_IO_write_ptr;
                if (pcVar26 < _stdout->_IO_write_end) {
                  _stdout->_IO_write_ptr = pcVar26 + 1;
                  *pcVar26 = (char)iVar25;
                }
                else {
                  __overflow(_stdout,iVar25);
                }
                print_filename(__stream,SUB41(local_fc,0));
              }
              else {
                fwrite_unlocked("SHA512",1,6,_stdout);
                fwrite_unlocked(&_LC71,1,2,_stdout);
                print_filename(__stream,SUB41(local_fc,0));
                fwrite_unlocked(&_LC72,1,4,_stdout);
                if (digest_hex_bytes >> 1 != 0) goto LAB_0010179f;
              }
LAB_00101834:
              puVar2 = (uchar *)_stdout->_IO_write_ptr;
              pFVar12 = (FILE *)puVar31;
              if (puVar2 < _stdout->_IO_write_end) {
                _stdout->_IO_write_ptr = (char *)(puVar2 + 1);
                *puVar2 = uVar3;
              }
              else {
                __overflow(_stdout,(uint)uVar3);
              }
            }
            pFVar33 = (FILE *)&pFVar33->_IO_read_ptr;
            if (pFVar16 <= pFVar33) goto LAB_001018af;
            __stream = *(char **)pFVar33;
            puVar31 = (uint *)((ulong)pFVar12 & 0xffffffff);
          } while( true );
        }
LAB_001018b1:
        uVar23 = (uint)uVar29;
        if (have_read_stdin != false) {
          local_118 = (FILE *)CONCAT71(local_118._1_7_,(char)uVar29);
          iVar7 = rpl_fclose(_stdin);
          uVar23 = uVar23 & 0xff;
          if (iVar7 == -1) {
            pFVar17 = (FILE *)dcgettext(0,"standard input",5);
            piVar18 = __errno_location();
            error(1,*piVar18,pFVar17);
            pFVar12 = pFVar33;
LAB_0010201b:
            if ((ignore_missing != false) && (missing_1 != false)) goto LAB_00101caa;
            if (local_d8 == (FILE *)digest_hex_bytes) {
              uVar29 = (ulong)local_d8 >> 1;
              if (uVar29 != 0) {
                uVar21 = 0;
                do {
                  _Var5 = *(_Bool *)((long)&pFVar12->_flags + uVar21 * 2);
                  puVar24 = bin2hex_0;
                  uVar23 = (uint)_Var5;
                  if (_Var5 - 0x41 < 0x1a) {
                    uVar23 = _Var5 + 0x20;
                  }
                  if ((int)(char)bin2hex_0[*(byte *)((long)local_f0 + uVar21) >> 4] != uVar23) {
LAB_00102180:
                    if (uVar29 != uVar21) goto LAB_00102041;
                    break;
                  }
                  _Var5 = *(_Bool *)((long)&pFVar12->_flags + uVar21 * 2 + 1);
                  uVar23 = (uint)_Var5;
                  if (_Var5 - 0x41 < 0x1a) {
                    uVar23 = _Var5 + 0x20;
                  }
                  if ((int)(char)bin2hex_0[*(byte *)((long)local_f0 + uVar21) & 0xf] != uVar23)
                  goto LAB_00102180;
                  uVar21 = uVar21 + 1;
                } while (uVar29 != uVar21);
              }
              local_b2 = status_only;
              if ((status_only != false) || (local_b2 = quiet, quiet != false)) goto LAB_00101caa;
              local_b2 = (char)length;
              if ((int)poVar32 != 0) goto LAB_001021bd;
              local_108 = (FILE *)((ulong)length & 0xff);
              print_filename((char *)pFVar16,false);
              length = (FILE *)((ulong)length & 0xff);
LAB_001021fe:
              if (quiet != false) goto LAB_00101caa;
              pcVar26 = "OK";
            }
            else {
LAB_00102041:
              length = (FILE *)(ulong)status_only;
              local_e8 = (FILE *)((long)&local_e8->_flags + 1);
              if (status_only != false) goto LAB_00101caa;
              if ((int)poVar32 == 0) {
                print_filename((char *)pFVar16,false);
              }
              else {
LAB_001021bd:
                cVar6 = (char)length;
                pcVar26 = _stdout->_IO_write_ptr;
                if (pcVar26 < _stdout->_IO_write_end) {
                  _stdout->_IO_write_ptr = pcVar26 + 1;
                  *pcVar26 = '\\';
                }
                else {
                  __overflow(_stdout,0x5c);
                }
                local_108 = (FILE *)((ulong)length & 0xff);
                print_filename((char *)pFVar16,true);
                length = (FILE *)((ulong)length & 0xff);
                if (cVar6 != '\0') goto LAB_001021fe;
              }
              pcVar26 = "FAILED";
            }
            uVar8 = dcgettext(0,pcVar26,5);
            __printf_chk(2,": %s\n",uVar8);
LAB_00101caa:
            pFVar33 = (FILE *)puVar24;
            bVar28 = local_fd;
            if ((((FILE *)__stream)->_flags & 0x30) == 0) goto LAB_00101acf;
            do {
              puVar24 = (undefined1 *)pFVar33;
              free(line);
              uVar23 = ((FILE *)__stream)->_flags & 0x20;
              pFVar12 = local_d0;
              if (local_fc == 0) {
                clearerr_unlocked((FILE *)__stream);
LAB_00101cee:
                iVar7 = -(uint)(uVar23 == 0);
LAB_00101cf3:
                if (-1 < iVar7) {
                  puVar24 = (undefined1 *)quotearg_n_style_colon(0,3,local_f8);
                  puVar22 = &_LC4;
                  if (iVar7 == 0) goto LAB_00102488;
                  goto LAB_0010243d;
                }
                if (bVar28 == 0) {
                  pFVar16 = (FILE *)quotearg_n_style_colon(0,3,local_f8);
                  pcVar26 = "%s: no properly formatted checksum lines found";
LAB_001023ff:
                  uVar8 = dcgettext(0,pcVar26,5);
                  error(0,0,uVar8);
                  bVar28 = 0;
                }
                else {
                  if (status_only == false) {
                    if (local_c8 != (FILE *)0x0) {
                      length = (FILE *)0x5;
                      uVar8 = dcngettext(0,"WARNING: %ju line is improperly formatted",
                                         "WARNING: %ju lines are improperly formatted",local_c8);
                      pFVar16 = local_c8;
                      error(0,0,uVar8);
                    }
                    if (local_e0 != (FILE *)0x0) {
                      length = (FILE *)0x5;
                      uVar8 = dcngettext(0,"WARNING: %ju listed file could not be read",
                                         "WARNING: %ju listed files could not be read",local_e0);
                      pFVar16 = local_e0;
                      error(0,0,uVar8);
                    }
                    if (local_e8 != (FILE *)0x0) {
                      length = (FILE *)0x5;
                      uVar8 = dcngettext(0,"WARNING: %ju computed checksum did NOT match",
                                         "WARNING: %ju computed checksums did NOT match",local_e8);
                      pFVar16 = local_e8;
                      error(0,0,uVar8);
                    }
                    if (ignore_missing == false) goto LAB_00101d95;
                    if (local_b2 == '\0') {
                      pFVar16 = (FILE *)quotearg_n_style_colon(0,3,local_f8);
                      pcVar26 = "%s: no file was verified";
                      goto LAB_001023ff;
                    }
LAB_00101d4b:
                    if (local_e0 == (FILE *)0x0 && local_e8 == (FILE *)0x0) {
                      bVar28 = strict ^ 1U | local_c8 == (FILE *)0x0;
                      goto LAB_00101d6f;
                    }
                  }
                  else {
LAB_00101d95:
                    if (local_b2 != '\0') goto LAB_00101d4b;
                  }
                  bVar28 = 0;
                }
LAB_00101d6f:
                bVar28 = bVar28 & 1;
              }
              else {
                iVar7 = rpl_fclose();
                if (iVar7 == 0) goto LAB_00101cee;
                if (uVar23 == 0) {
                  piVar18 = __errno_location();
                  iVar7 = *piVar18;
                  goto LAB_00101cf3;
                }
                puVar24 = (undefined1 *)quotearg_n_style_colon(0,3,local_f8);
LAB_00102488:
                iVar7 = 0;
                puVar22 = (undefined *)dcgettext(0,"%s: read error",5);
LAB_0010243d:
                pFVar16 = (FILE *)puVar24;
                error(0,iVar7,puVar22);
                bVar28 = 0;
              }
              while( true ) {
                local_b1 = local_b1 & bVar28;
                pFVar33 = (FILE *)&pFVar12->_IO_read_ptr;
                if (local_b0 <= pFVar33) {
                  uVar29 = (ulong)local_b1;
                  goto LAB_001018b1;
                }
                local_f8 = *(FILE **)pFVar33;
                pFVar12 = pFVar33;
LAB_0010190b:
                local_f0 = (int *)((ulong)local_c0 & 0xfffffffffffffff8);
                local_fc = strcmp((char *)local_f8,"-");
                if (local_fc == 0) break;
                __stream = (char *)fopen_safer(local_f8,&_LC3);
                if ((FILE *)__stream != (FILE *)0x0) goto LAB_0010195c;
                pFVar16 = (FILE *)quotearg_n_style_colon(0,3,local_f8);
                piVar18 = __errno_location();
                error(0,*piVar18,&_LC4);
                bVar28 = 0;
              }
              have_read_stdin = true;
              local_f8 = (FILE *)dcgettext(0,"standard input",5);
              __stream = (char *)_stdin;
LAB_0010195c:
              length = (FILE *)0x0;
              local_b2 = '\0';
              puVar31 = (uint *)&missing;
              local_118 = (FILE *)&line;
              line = (char *)0x0;
              pFVar17 = (FILE *)0x1;
              _missing = (char *)0x0;
              bVar28 = 0;
              local_e8 = (FILE *)0x0;
              local_e0 = (FILE *)0x0;
              local_c8 = (FILE *)0x0;
              pFVar33 = local_118;
              local_110 = (FILE *)puVar31;
              local_d0 = pFVar12;
              while (pFVar16 = (FILE *)__stream,
                    _Var13 = __getdelim((char **)local_118,(size_t *)local_110,10,(FILE *)__stream),
                    puVar24 = line, 0 < _Var13) {
                if (*line == '#') goto LAB_00101ac0;
                lVar11 = _Var13 - (ulong)(line[_Var13 + -1] == '\n');
                pFVar16 = (FILE *)(ulong)(line[lVar11 - (ulong)(0 < lVar11)] == '\r');
                poVar32 = (option *)(lVar11 - (long)pFVar16);
                if ((FILE *)poVar32 == (FILE *)0x0) goto LAB_00101ac0;
                line[(long)poVar32] = '\0';
                puVar31 = (uint *)0x0;
                cVar6 = *line;
                if ((cVar6 == '\t') || (cVar6 == ' ')) {
                  do {
                    do {
                      puVar31 = (uint *)((long)&((FILE *)puVar31)->_flags + 1);
                      cVar6 = line[(long)puVar31];
                    } while (cVar6 == ' ');
                  } while (cVar6 == '\t');
                }
                local_108 = (FILE *)0x0;
                if (cVar6 == '\\') {
                  puVar31 = (uint *)((long)&((FILE *)puVar31)->_flags + 1);
                  local_108 = (FILE *)(ulong)local_fd;
                }
                pFVar12 = (FILE *)(line + (long)puVar31);
                iVar7 = strncmp((char *)pFVar12,"SHA512",6);
                if (iVar7 != 0) goto LAB_00101b18;
                cVar6 = (puVar24 + 6)[(long)puVar31];
                puVar20 = &((FILE *)puVar31)->field_0x6;
                if (cVar6 == ' ') {
                  cVar6 = (puVar24 + 7)[(long)puVar31];
                  puVar20 = &((FILE *)puVar31)->field_0x7;
                }
                if (cVar6 == '(') {
                  poVar32 = (option *)((long)poVar32 - (long)(puVar20 + 1));
                  if ((FILE *)poVar32 != (FILE *)0x0) {
                    pFVar16 = (FILE *)(puVar24 + (long)(puVar20 + 1));
                    for (pcVar26 = ((FILE *)((long)poVar32 + -0xd8))->_unused2 + 0x13;
                        (pcVar26 != (char *)0x0 && (pcVar26[(long)&pFVar16->_flags] != ')'));
                        pcVar26 = pcVar26 + -1) {
                    }
                    pcVar30 = pcVar26 + (long)&pFVar16->_flags;
                    if ((*pcVar30 == ')') &&
                       ((bVar34 = (char)local_108 == '\0', bVar34 ||
                        (pcVar19 = filename_unescape((char *)pFVar16,(size_t)pcVar26),
                        local_108 = pFVar16, pcVar19 != (char *)0x0)))) {
                      *pcVar30 = '\0';
                      cVar6 = ((_Bool *)((long)&pFVar16->_flags + 1))[(long)pcVar26];
                      lVar11 = (long)(pcVar26 + 1);
                      if (cVar6 != ' ') goto LAB_00101e7d;
                      do {
                        do {
                          lVar11 = lVar11 + 1;
                          cVar6 = *(_Bool *)(lVar11 + (long)&pFVar16->_flags);
                        } while (cVar6 == ' ');
LAB_00101e7d:
                      } while (cVar6 == '\t');
                      if (cVar6 == '=') {
                        do {
                          do {
                            lVar11 = lVar11 + 1;
                            _Var5 = *(_Bool *)(lVar11 + (long)&pFVar16->_flags);
                          } while (_Var5 == true);
                        } while (_Var5 == true);
                        poVar32 = (option *)((long)poVar32 - lVar11);
                        local_d8 = (FILE *)poVar32;
                        if (poVar32 == (option *)digest_hex_bytes) {
                          pFVar12 = (FILE *)(lVar11 + (long)&pFVar16->_flags);
                          pFVar33 = (FILE *)0x0;
                          while( true ) {
                            _Var5 = *(_Bool *)((long)&pFVar33->_flags + (long)&pFVar12->_flags);
                            if ((FILE *)poVar32 == pFVar33) {
                              bVar34 = _Var5 == false;
                              goto LAB_0010223a;
                            }
                            uVar23 = _Var5 - 0x30;
                            if ((0x36 < (byte)uVar23) ||
                               ((0x7e0000007e03ffU >> ((ulong)uVar23 & 0x3f) & 1) == 0)) break;
                            pFVar33 = (FILE *)((long)&pFVar33->_flags + 1);
                          }
                        }
                      }
                    }
                  }
                }
LAB_00101aa3:
                if (warn != false) {
                  poVar32 = (option *)quotearg_n_style_colon(0,3,local_f8);
                  uVar8 = dcgettext(0,"%s: %ju: improperly formatted %s checksum line",5);
                  pFVar16 = (FILE *)poVar32;
                  length = pFVar17;
                  error(0,0,uVar8);
                }
                local_c8 = (FILE *)((long)&local_c8->_flags + 1);
                pFVar33 = (FILE *)puVar24;
LAB_00101ac0:
                puVar24 = (undefined1 *)pFVar33;
                if ((((FILE *)__stream)->_flags & 0x30) != 0) break;
LAB_00101acf:
                pFVar17 = (FILE *)((long)&pFVar17->_flags + 1);
                pFVar33 = (FILE *)puVar24;
                if (pFVar17 == (FILE *)0x0) {
                  pFVar17 = (FILE *)quotearg_n_style_colon(0,3,local_f8);
                  uVar8 = dcgettext(0,"%s: too many checksum lines",5);
                  pFVar16 = pFVar17;
                  error(1,0,uVar8);
LAB_00101b18:
                  cVar6 = (char)pFVar12->_flags;
                  if ((cVar6 == '\\') + min_digest_line_length <=
                      (ulong)((long)poVar32 - (long)puVar31)) {
                    pFVar33 = (FILE *)puVar31;
                    pFVar27 = pFVar12;
                    while (((cVar6 != '\0' && (cVar6 != ' ')) && (cVar6 != '\t'))) {
                      pFVar33 = (FILE *)((long)&pFVar33->_flags + 1);
                      pFVar27 = (FILE *)((long)pFVar27 +
                                        ((long)((_Bool *)((long)&((FILE *)puVar24)->_flags + 1) +
                                               (long)puVar31) - (long)pFVar12));
                      cVar6 = *(_Bool *)((long)&pFVar33->_flags + (long)&((FILE *)puVar24)->_flags);
                    }
                    if ((FILE *)poVar32 != pFVar33) {
                      *(_Bool *)&pFVar27->_flags = false;
                      local_d8 = (FILE *)digest_hex_bytes;
                      if ((long)pFVar33 - (long)puVar31 == digest_hex_bytes) {
                        pFVar27 = pFVar12;
                        if (digest_hex_bytes != 0) {
                          pFVar27 = (FILE *)((long)&pFVar12->_flags + digest_hex_bytes);
                          pFVar16 = pFVar12;
                          do {
                            uVar23 = SUB41(pFVar16->_flags,0) - 0x30;
                            if ((0x36 < (byte)uVar23) ||
                               ((0x7e0000007e03ffU >> ((ulong)uVar23 & 0x3f) & 1) == 0))
                            goto LAB_00101aa3;
                            pFVar16 = (FILE *)((long)&pFVar16->_flags + 1);
                          } while (pFVar27 != pFVar16);
                        }
                        if (SUB41(pFVar27->_flags,0) == false) {
                          p_Var14 = (_Bool *)((long)&pFVar33->_flags + 1);
                          pFVar16 = (FILE *)(ulong)(uint)bsd_reversed;
                          if (((long)poVar32 - (long)p_Var14 == 1) ||
                             ((_Var5 = ((_Bool *)((long)&((FILE *)puVar24)->_flags + 1))
                                       [(long)pFVar33], _Var5 != true && (_Var5 != true)))) {
                            if (bsd_reversed == 0) goto LAB_00101aa3;
                            bsd_reversed = 1;
                          }
                          else if (bsd_reversed != 1) {
                            p_Var14 = (_Bool *)((long)&pFVar33->_flags + 2);
                            bsd_reversed = 0;
                          }
                          pFVar16 = (FILE *)(p_Var14 + (long)&((FILE *)puVar24)->_flags);
                          if ((char)local_108 != '\0') {
                            pcVar26 = filename_unescape((char *)pFVar16,
                                                        (long)poVar32 - (long)p_Var14);
                            bVar34 = pcVar26 != (char *)0x0;
                            local_108 = pFVar16;
LAB_0010223a:
                            if (!bVar34) goto LAB_00101aa3;
                          }
                          if (((local_fc != 0) || (SUB41(pFVar16->_flags,0) != true)) ||
                             (*(_Bool *)((long)&pFVar16->_flags + 1) != false)) {
                            poVar32 = (option *)0x0;
                            if (status_only == false) {
                              sVar15 = strcspn((char *)pFVar16,"\\\n\r");
                              poVar32 = (option *)
                                        (ulong)(*(_Bool *)((long)&pFVar16->_flags + sVar15) != false
                                               );
                            }
                            _Var5 = digest_file((char *)pFVar16,local_f0,&missing_1,(_Bool *)pFVar16
                                                ,(uintmax_t *)length);
                            length = (FILE *)(CONCAT71(extraout_var_00,_Var5) & 0xffffffff);
                            local_108 = pFVar16;
                            if (_Var5) goto LAB_0010201b;
                            if (status_only == false) {
                              if ((int)poVar32 != 0) {
                                pcVar26 = _stdout->_IO_write_ptr;
                                if (pcVar26 < _stdout->_IO_write_end) {
                                  _stdout->_IO_write_ptr = pcVar26 + 1;
                                  *pcVar26 = '\\';
                                }
                                else {
                                  __overflow(_stdout,0x5c);
                                }
                              }
                              print_filename((char *)pFVar16,SUB81(poVar32,0));
                              uVar8 = dcgettext(0,"FAILED open or read",5);
                              __printf_chk(2,": %s\n",uVar8);
                            }
                            local_e0 = (FILE *)((long)&local_e0->_flags + 1);
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
        if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return (uVar23 ^ 1) & 0xff;
      }
      pcVar26 = "the --strict option is meaningful only when verifying checksums";
    }
  }
LAB_00101890:
  uVar8 = dcgettext(0,pcVar26,5);
  error(0,0,uVar8);
switchD_001014e3_caseD_64:
                    /* WARNING: Subroutine does not return */
  usage(1);
LAB_001018af:
  uVar29 = (ulong)pFVar12 & 0xffffffff;
  local_110 = pFVar16;
  local_fd = bVar28;
  goto LAB_001018b1;
}


