
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
    iVar2 = md5_stream(__stream,binary);
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
    iVar2 = md5_stream(lVar5,binary);
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
    iVar2 = strcmp("md5sum",pcVar5);
    if (iVar2 == 0) break;
    pcVar5 = *(char **)((long)piVar7 + 0x10);
    piVar7 = (infomap *)((long)piVar7 + 0x10);
  } while (pcVar5 != (char *)0x0);
  pcVar5 = *(char **)((long)piVar7 + 8);
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
  exit(status);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int main(int argc,char **argv)

{
  byte bVar1;
  long lVar2;
  uchar *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  uchar uVar6;
  byte bVar7;
  _Bool _Var8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined7 extraout_var;
  __ssize_t _Var14;
  FILE *missing_00;
  size_t sVar15;
  size_t sVar16;
  int *piVar17;
  ulong uVar18;
  char *pcVar19;
  FILE *pFVar20;
  char cVar21;
  long lVar22;
  size_t sVar23;
  undefined *puVar24;
  uint uVar25;
  ulong uVar26;
  FILE *__lineptr;
  int iVar27;
  byte *pbVar28;
  char *pcVar29;
  long lVar30;
  _Bool *p_Var31;
  ulong in_R10;
  byte *pbVar32;
  uint *__n;
  _Bool *p_Var33;
  char *pcVar34;
  FILE *pFVar35;
  _Bool *p_Var36;
  byte *pbVar37;
  long in_FS_OFFSET;
  bool bVar38;
  undefined1 auVar39 [16];
  _Bool *local_e0;
  FILE *local_d8;
  FILE *local_d0;
  FILE *local_c8;
  _Bool local_c0;
  _Bool *local_b8;
  FILE *local_b0;
  FILE *local_a8;
  FILE *local_a0;
  FILE *local_98;
  uchar *local_90;
  byte local_82;
  byte local_81;
  FILE *local_80;
  _Bool missing_1;
  char *line;
  _Bool missing;
  uchar bin_buffer_unaligned [20];
  
  pbVar37 = (byte *)0xffffffff;
  pcVar34 = "bctwz";
  __lineptr = (FILE *)(ulong)(uint)argc;
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils");
  __n = &switchD_001014e3::switchdataD_00102520;
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  setvbuf(_stdout,(char *)0x0,1,0);
  local_d8 = (FILE *)0xffffffff;
  local_e0 = (_Bool *)0x0;
  while( true ) {
    p_Var31 = (_Bool *)0x0;
    iVar9 = getopt_long(__lineptr,argv,"bctwz",long_options);
    if (iVar9 == -1) break;
    if (0x84 < iVar9) goto switchD_001014e3_caseD_64;
    if (iVar9 < 0x62) {
      if (iVar9 == -0x83) {
        uVar10 = proper_name_lite("David Madore","David Madore");
        uVar11 = proper_name_lite("Scott Miller","Scott Miller");
        uVar12 = proper_name_lite("Ulrich Drepper","Ulrich Drepper");
        version_etc(_stdout,"md5sum","GNU coreutils",_Version,uVar12,uVar11,uVar10,0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar9 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      goto switchD_001014e3_caseD_64;
    }
    switch(iVar9) {
    case 0x62:
      pbVar37 = (byte *)0x1;
      break;
    case 99:
      local_e0 = (_Bool *)0x1;
      break;
    default:
      goto switchD_001014e3_caseD_64;
    case 0x74:
      pbVar37 = (byte *)0x0;
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
      local_d8 = (FILE *)0x1;
      pbVar37 = (byte *)0x1;
    }
  }
  min_digest_line_length = 0x22;
  digest_hex_bytes = 0x20;
  iVar9 = (int)pbVar37;
  if ((int)local_d8 == -1) {
    cVar21 = '\0';
    if (digest_delim != '\n') goto LAB_00101630;
LAB_00101840:
    if ((-1 < iVar9) && ((byte)local_e0 != 0)) {
      pcVar34 = "the --binary and --text options are meaningless when verifying checksums";
      goto LAB_00101860;
    }
  }
  else {
    if (iVar9 == 0) {
      pcVar34 = "--tag does not support --text mode";
      goto LAB_00101860;
    }
    cVar21 = '\x01';
    if (digest_delim == '\n') {
      if ((byte)local_e0 != 0) {
        pcVar34 = "the --tag option is meaningless when verifying checksums";
        goto LAB_00101860;
      }
      goto LAB_00101840;
    }
LAB_00101630:
    if ((byte)local_e0 != 0) {
      pcVar34 = "the --zero option is not supported when verifying checksums";
      goto LAB_00101860;
    }
  }
  if ((ignore_missing == true) && ((byte)local_e0 == 0)) {
    pcVar34 = "the --ignore-missing option is meaningful only when verifying checksums";
  }
  else if ((status_only == true) && ((byte)local_e0 == 0)) {
    pcVar34 = "the --status option is meaningful only when verifying checksums";
  }
  else if ((warn == true) && ((byte)local_e0 == 0)) {
    pcVar34 = "the --warn option is meaningful only when verifying checksums";
  }
  else {
    bVar7 = quiet ^ 1U | (byte)local_e0;
    p_Var33 = (_Bool *)(ulong)bVar7;
    if (bVar7 == 0) {
      pcVar34 = "the --quiet option is meaningful only when verifying checksums";
    }
    else {
      if ((((byte)local_e0 ^ 1) & strict) == 0) {
        pFVar35 = (FILE *)(argv + argc);
        lVar13 = (long)_optind;
        pFVar20 = pFVar35;
        if (_optind == argc) {
          pFVar20 = (FILE *)&pFVar35->_IO_read_ptr;
          *(undefined **)pFVar35 = &_LC54;
        }
        pFVar35 = (FILE *)(argv + lVar13);
        missing_00 = pFVar20;
        p_Var36 = p_Var33;
        if (pFVar35 < pFVar20) {
          pcVar34 = *(char **)pFVar35;
          local_c8 = (FILE *)pcVar34;
          if ((byte)local_e0 != 0) {
            local_90 = bin_buffer_unaligned + 3;
            local_81 = (byte)local_e0;
            local_80 = pFVar20;
            goto LAB_001018e0;
          }
          local_e0 = &missing;
          local_d0 = (FILE *)CONCAT71(local_d0._1_7_,cVar21);
          __lineptr = (FILE *)&_LC74;
          local_b8 = (_Bool *)CONCAT44(local_b8._4_4_,iVar9);
          do {
            _Var8 = digest_file(pcVar34,(int *)bin_buffer_unaligned,local_e0,(_Bool *)missing_00,
                                (uintmax_t *)p_Var31);
            uVar6 = digest_delim;
            p_Var36 = (_Bool *)CONCAT71(extraout_var,_Var8);
            if (_Var8) {
              local_c0 = false;
              local_c8 = (FILE *)(ulong)digest_delim;
              if ((digest_delim == '\n') &&
                 (sVar15 = strcspn(pcVar34,"\\\n\r"),
                 *(char *)((long)&((FILE *)pcVar34)->_flags + sVar15) != '\0')) {
                pcVar29 = _stdout->_IO_write_ptr;
                if (pcVar29 < _stdout->_IO_write_end) {
                  _stdout->_IO_write_ptr = pcVar29 + 1;
                  *pcVar29 = '\\';
                }
                else {
                  __overflow(_stdout,0x5c);
                }
                local_c0 = true;
              }
              if (cVar21 == '\0') {
                if (digest_hex_bytes >> 1 != 0) {
LAB_00101771:
                  pbVar37 = (byte *)0x0;
                  do {
                    pbVar32 = (byte *)((long)bin_buffer_unaligned + (long)pbVar37);
                    pbVar37 = pbVar37 + 1;
                    __printf_chk(2,&_LC74,*pbVar32);
                  } while (pbVar37 < (byte *)(digest_hex_bytes >> 1));
                  if (cVar21 != '\0') goto LAB_00101804;
                }
                pcVar29 = _stdout->_IO_write_ptr;
                if (pcVar29 < _stdout->_IO_write_end) {
                  _stdout->_IO_write_ptr = pcVar29 + 1;
                  *pcVar29 = ' ';
                }
                else {
                  __overflow(_stdout,0x20);
                }
                iVar27 = 0x20;
                if (0 < iVar9) {
                  iVar27 = 0x2a;
                }
                pcVar29 = _stdout->_IO_write_ptr;
                if (pcVar29 < _stdout->_IO_write_end) {
                  _stdout->_IO_write_ptr = pcVar29 + 1;
                  *pcVar29 = (char)iVar27;
                }
                else {
                  __overflow(_stdout,iVar27);
                }
                print_filename(pcVar34,local_c0);
              }
              else {
                fwrite_unlocked(&_LC13,1,3,_stdout);
                fwrite_unlocked(&_LC72,1,2,_stdout);
                print_filename(pcVar34,local_c0);
                missing_00 = _stdout;
                fwrite_unlocked(&_LC73,1,4,_stdout);
                if (digest_hex_bytes >> 1 != 0) goto LAB_00101771;
              }
LAB_00101804:
              puVar3 = (uchar *)_stdout->_IO_write_ptr;
              p_Var36 = p_Var33;
              if (puVar3 < _stdout->_IO_write_end) {
                _stdout->_IO_write_ptr = (char *)(puVar3 + 1);
                *puVar3 = uVar6;
              }
              else {
                __overflow(_stdout,(uint)uVar6);
              }
            }
            pFVar35 = (FILE *)&pFVar35->_IO_read_ptr;
            if (pFVar20 <= pFVar35) goto LAB_0010187f;
            pcVar34 = *(char **)pFVar35;
            p_Var33 = (_Bool *)((ulong)p_Var36 & 0xffffffff);
          } while( true );
        }
LAB_00101882:
        if ((have_read_stdin == false) || (iVar9 = rpl_fclose(_stdin), iVar9 != -1)) {
          if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
            return ((uint)p_Var36 ^ 1) & 0xff;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        sVar16 = dcgettext(0,"standard input",5);
        piVar17 = __errno_location();
        error(1,*piVar17,sVar16);
LAB_00101fe9:
        bVar7 = (byte)in_R10;
        if ((ignore_missing != false) && (missing_1 != false)) goto LAB_00101c82;
        if (sVar16 == digest_hex_bytes) {
          uVar26 = sVar16 >> 1;
          if (uVar26 != 0) {
            uVar18 = 0;
            do {
              bVar1 = pbVar37[uVar18 * 2];
              uVar25 = (uint)bVar1;
              if (bVar1 - 0x41 < 0x1a) {
                uVar25 = bVar1 + 0x20;
              }
              p_Var31 = local_b8;
              if ((int)(char)bin2hex_0[(byte)(local_b8[uVar18] >> 4)] != uVar25) {
LAB_00102148:
                if (uVar26 != uVar18) goto LAB_0010200a;
                break;
              }
              bVar1 = pbVar37[uVar18 * 2 + 1];
              uVar25 = (uint)bVar1;
              if (bVar1 - 0x41 < 0x1a) {
                uVar25 = bVar1 + 0x20;
              }
              if ((int)(char)bin2hex_0[local_b8[uVar18] & 0xf] != uVar25) goto LAB_00102148;
              uVar18 = uVar18 + 1;
            } while (uVar26 != uVar18);
          }
          local_82 = status_only;
          if ((status_only != false) || (local_82 = quiet, quiet != false)) goto LAB_00101c82;
          local_82 = bVar7;
          if ((int)local_d0 != 0) goto LAB_00102187;
          local_d0 = (FILE *)CONCAT71(local_d0._1_7_,bVar7);
          print_filename((char *)missing_00,false);
          in_R10 = in_R10 & 0xff;
LAB_001021c8:
          if (quiet != false) goto LAB_00101c82;
          pcVar29 = "OK";
        }
        else {
LAB_0010200a:
          in_R10 = (ulong)status_only;
          local_b0 = (FILE *)((long)&local_b0->_flags + 1);
          if (status_only != false) goto LAB_00101c82;
          bVar7 = 0;
          if ((int)local_d0 == 0) {
            print_filename((char *)missing_00,false);
          }
          else {
LAB_00102187:
            pcVar29 = _stdout->_IO_write_ptr;
            if (pcVar29 < _stdout->_IO_write_end) {
              _stdout->_IO_write_ptr = pcVar29 + 1;
              *pcVar29 = '\\';
            }
            else {
              __overflow(_stdout,0x5c);
              local_d0 = missing_00;
            }
            local_d0 = (FILE *)CONCAT71(local_d0._1_7_,bVar7);
            print_filename((char *)missing_00,true);
            in_R10 = (ulong)bVar7;
            if (bVar7 != 0) goto LAB_001021c8;
          }
          pcVar29 = "FAILED";
        }
        uVar10 = dcgettext(0,pcVar29,5);
        __printf_chk(2,": %s\n",uVar10);
LAB_00101c82:
        local_d0 = (FILE *)CONCAT71(local_d0._1_7_,(byte)local_e0);
        if ((((FILE *)pcVar34)->_flags & 0x30) == 0) goto LAB_00101a9f;
        do {
          free(line);
          uVar25 = ((FILE *)pcVar34)->_flags & 0x20;
          pFVar35 = local_a0;
          if ((int)local_d8 == 0) {
            clearerr_unlocked((FILE *)pcVar34);
LAB_00101cc6:
            iVar9 = -(uint)(uVar25 == 0);
LAB_00101ccb:
            if (-1 < iVar9) {
              __lineptr = (FILE *)quotearg_n_style_colon(0,3,local_c8);
              puVar24 = &_LC4;
              if (iVar9 == 0) goto LAB_00102348;
              goto LAB_00102360;
            }
            if ((char)local_d0 == '\0') {
              missing_00 = (FILE *)quotearg_n_style_colon(0,3,local_c8);
              pcVar29 = "%s: no properly formatted checksum lines found";
LAB_00102430:
              uVar10 = dcgettext(0,pcVar29,5);
              error(0,0,uVar10);
              bVar7 = 0;
            }
            else {
              if (status_only == false) {
                if (local_98 != (FILE *)0x0) {
                  p_Var31 = (_Bool *)0x5;
                  uVar10 = dcngettext(0,"WARNING: %ju line is improperly formatted",
                                      "WARNING: %ju lines are improperly formatted",local_98);
                  missing_00 = local_98;
                  error(0,0,uVar10);
                }
                if (local_a8 != (FILE *)0x0) {
                  p_Var31 = (_Bool *)0x5;
                  uVar10 = dcngettext(0,"WARNING: %ju listed file could not be read",
                                      "WARNING: %ju listed files could not be read",local_a8);
                  missing_00 = local_a8;
                  error(0,0,uVar10);
                }
                if (local_b0 != (FILE *)0x0) {
                  p_Var31 = (_Bool *)0x5;
                  uVar10 = dcngettext(0,"WARNING: %ju computed checksum did NOT match",
                                      "WARNING: %ju computed checksums did NOT match",local_b0);
                  missing_00 = local_b0;
                  error(0,0,uVar10);
                }
                if (ignore_missing == false) goto LAB_00101d6d;
                if (local_82 == 0) {
                  missing_00 = (FILE *)quotearg_n_style_colon(0,3,local_c8);
                  pcVar29 = "%s: no file was verified";
                  goto LAB_00102430;
                }
LAB_00101d23:
                if (local_a8 == (FILE *)0x0 && local_b0 == (FILE *)0x0) {
                  bVar7 = strict ^ 1U | local_98 == (FILE *)0x0;
                  goto LAB_00101d47;
                }
              }
              else {
LAB_00101d6d:
                if (local_82 != 0) goto LAB_00101d23;
              }
              bVar7 = 0;
            }
LAB_00101d47:
            bVar7 = bVar7 & 1;
          }
          else {
            iVar9 = rpl_fclose();
            if (iVar9 == 0) goto LAB_00101cc6;
            if (uVar25 == 0) {
              piVar17 = __errno_location();
              iVar9 = *piVar17;
              goto LAB_00101ccb;
            }
            __lineptr = (FILE *)quotearg_n_style_colon(0,3,local_c8);
LAB_00102348:
            iVar9 = 0;
            puVar24 = (undefined *)dcgettext(0,"%s: read error",5);
LAB_00102360:
            missing_00 = __lineptr;
            error(0,iVar9,puVar24);
            bVar7 = 0;
          }
          while( true ) {
            local_81 = local_81 & bVar7;
            pFVar35 = (FILE *)&pFVar35->_IO_read_ptr;
            if (local_80 <= pFVar35) {
              p_Var36 = (_Bool *)(ulong)local_81;
              goto LAB_00101882;
            }
            local_c8 = *(FILE **)pFVar35;
LAB_001018e0:
            local_b8 = (_Bool *)((ulong)local_90 & 0xfffffffffffffffc);
            uVar25 = strcmp((char *)local_c8,"-");
            local_d8 = (FILE *)(ulong)uVar25;
            if (uVar25 == 0) break;
            pcVar34 = (char *)fopen_safer(local_c8,&_LC3);
            if ((FILE *)pcVar34 != (FILE *)0x0) goto LAB_00101931;
            missing_00 = (FILE *)quotearg_n_style_colon(0,3,local_c8);
            piVar17 = __errno_location();
            error(0,*piVar17,&_LC4);
            bVar7 = 0;
          }
          have_read_stdin = true;
          local_c8 = (FILE *)dcgettext(0,"standard input",5);
          pcVar34 = (char *)_stdin;
LAB_00101931:
          in_R10 = 0;
          local_82 = 0;
          line = (char *)0x0;
          pbVar37 = (byte *)0x1;
          __n = (uint *)&missing;
          __lineptr = (FILE *)&line;
          _missing = (char *)0x0;
          local_d0 = (FILE *)((ulong)local_d0 & 0xffffffffffffff00);
          local_b0 = (FILE *)0x0;
          local_a8 = (FILE *)0x0;
          local_98 = (FILE *)0x0;
          p_Var36 = (_Bool *)0x1;
          local_a0 = pFVar35;
          while (missing_00 = (FILE *)pcVar34,
                _Var14 = __getdelim((char **)__lineptr,(size_t *)__n,10,(FILE *)pcVar34), 0 < _Var14
                ) {
            if (*line == '#') goto LAB_00101a90;
            lVar13 = _Var14 - (ulong)(line[_Var14 + -1] == '\n');
            missing_00 = (FILE *)(ulong)(line[lVar13 - (ulong)(0 < lVar13)] == '\r');
            lVar13 = lVar13 - (long)missing_00;
            if (lVar13 == 0) goto LAB_00101a90;
            line[lVar13] = '\0';
            lVar22 = 0;
            cVar21 = *line;
            if ((cVar21 == '\t') || (cVar21 == ' ')) {
              do {
                do {
                  lVar22 = lVar22 + 1;
                  cVar21 = line[lVar22];
                } while (cVar21 == ' ');
              } while (cVar21 == '\t');
            }
            in_R10 = 0;
            if (cVar21 == '\\') {
              in_R10 = (ulong)local_e0 & 0xff;
              lVar22 = lVar22 + 1;
            }
            auVar5._8_8_ = lVar22;
            auVar5._0_8_ = lVar13;
            auVar4._8_8_ = lVar22;
            auVar4._0_8_ = lVar13;
            auVar39._8_8_ = lVar22;
            auVar39._0_8_ = lVar13;
            pbVar37 = (byte *)(line + lVar22);
            missing_00 = (FILE *)line;
            if (*pbVar37 != 0x4d) goto LAB_00101ae8;
            auVar39 = auVar4;
            if (pbVar37[1] != 0x44) goto LAB_00101ae8;
            auVar39 = auVar5;
            if (pbVar37[2] != 0x35) goto LAB_00101ae8;
            cVar21 = line[lVar22 + 3];
            lVar30 = lVar22 + 3;
            if (cVar21 == ' ') {
              cVar21 = line[lVar22 + 4];
              lVar30 = lVar22 + 4;
            }
            if (cVar21 == '(') {
              sVar16 = lVar13 - (lVar30 + 1);
              if (sVar16 != 0) {
                missing_00 = (FILE *)(line + lVar30 + 1);
                sVar23 = sVar16;
                do {
                  sVar23 = sVar23 - 1;
                  if (sVar23 == 0) break;
                } while (*(char *)((long)missing_00 + sVar23) != ')');
                pcVar29 = (char *)((long)missing_00 + sVar23);
                if ((*pcVar29 == ')') &&
                   (((char)in_R10 == '\0' ||
                    (pcVar19 = filename_unescape((char *)missing_00,sVar23), pcVar19 != (char *)0x0)
                    ))) {
                  *pcVar29 = '\0';
                  cVar21 = *(char *)((long)&missing_00->_flags + sVar23 + 1);
                  lVar13 = sVar23 + 1;
                  if (cVar21 != ' ') goto LAB_00101e55;
                  do {
                    do {
                      lVar13 = lVar13 + 1;
                      cVar21 = *(char *)((long)&missing_00->_flags + lVar13);
                    } while (cVar21 == ' ');
LAB_00101e55:
                  } while (cVar21 == '\t');
                  if (cVar21 == '=') {
                    do {
                      do {
                        lVar13 = lVar13 + 1;
                        cVar21 = *(char *)((long)&missing_00->_flags + lVar13);
                      } while (cVar21 == ' ');
                    } while (cVar21 == '\t');
                    sVar16 = sVar16 - lVar13;
                    if (sVar16 == digest_hex_bytes) {
                      pbVar37 = (byte *)((long)&missing_00->_flags + lVar13);
                      sVar23 = 0;
                      while( true ) {
                        if (sVar16 == sVar23) {
                          bVar38 = pbVar37[sVar23] == 0;
                          goto LAB_00102204;
                        }
                        uVar25 = pbVar37[sVar23] - 0x30;
                        if ((0x36 < (byte)uVar25) ||
                           ((0x7e0000007e03ffU >> ((ulong)uVar25 & 0x3f) & 1) == 0)) break;
                        sVar23 = sVar23 + 1;
                      }
                    }
                  }
                }
              }
            }
LAB_00101a75:
            if (warn != false) {
              missing_00 = (FILE *)quotearg_n_style_colon(0,3,local_c8);
              uVar10 = dcgettext(0,"%s: %ju: improperly formatted %s checksum line",5);
              p_Var31 = p_Var36;
              error(0,0,uVar10);
            }
            local_98 = (FILE *)((long)&local_98->_flags + 1);
LAB_00101a90:
            if ((((FILE *)pcVar34)->_flags & 0x30) != 0) break;
LAB_00101a9f:
            p_Var36 = p_Var36 + 1;
            if (p_Var36 == (_Bool *)0x0) {
              missing_00 = (FILE *)quotearg_n_style_colon(0,3,local_c8);
              uVar10 = dcgettext(0,"%s: too many checksum lines",5);
              auVar39 = error(1,0,uVar10);
LAB_00101ae8:
              sVar16 = digest_hex_bytes;
              lVar22 = auVar39._8_8_;
              lVar13 = auVar39._0_8_;
              bVar7 = *pbVar37;
              if ((bVar7 == 0x5c) + min_digest_line_length <= (ulong)(lVar13 - lVar22)) {
                lVar30 = lVar22;
                pbVar32 = pbVar37;
                while (((bVar7 != 0 && (bVar7 != 0x20)) && (bVar7 != 9))) {
                  lVar30 = lVar30 + 1;
                  pbVar32 = pbVar32 + (long)missing_00 + ((lVar22 + 1) - (long)pbVar37);
                  bVar7 = *(byte *)((long)&missing_00->_flags + lVar30);
                }
                if ((lVar13 != lVar30) && (*pbVar32 = 0, lVar30 - lVar22 == sVar16)) {
                  pbVar32 = pbVar37;
                  if (sVar16 != 0) {
                    pbVar28 = pbVar37;
                    do {
                      if ((0x36 < (byte)(*pbVar28 - 0x30)) ||
                         ((0x7e0000007e03ffU >> ((ulong)(*pbVar28 - 0x30) & 0x3f) & 1) == 0))
                      goto LAB_00101a75;
                      pbVar28 = pbVar28 + 1;
                      pbVar32 = pbVar37 + sVar16;
                    } while (pbVar37 + sVar16 != pbVar28);
                  }
                  if (*pbVar32 == 0) {
                    lVar22 = lVar30 + 1;
                    if ((lVar13 - lVar22 == 1) ||
                       ((cVar21 = *(char *)((long)&missing_00->_flags + lVar30 + 1), cVar21 != ' '
                        && (cVar21 != '*')))) {
                      if (bsd_reversed == 0) goto LAB_00101a75;
                      bsd_reversed = 1;
                    }
                    else if (bsd_reversed != 1) {
                      p_Var31 = (_Bool *)0x0;
                      lVar22 = lVar30 + 2;
                      bsd_reversed = 0;
                    }
                    missing_00 = (FILE *)((long)&missing_00->_flags + lVar22);
                    if ((char)in_R10 != '\0') {
                      pcVar29 = filename_unescape((char *)missing_00,lVar13 - lVar22);
                      bVar38 = pcVar29 != (char *)0x0;
LAB_00102204:
                      if (!bVar38) goto LAB_00101a75;
                    }
                    if ((((int)local_d8 != 0) || ((char)missing_00->_flags != '-')) ||
                       (*(char *)((long)&missing_00->_flags + 1) != '\0')) {
                      local_d0 = (FILE *)0x0;
                      if (status_only == false) {
                        sVar15 = strcspn((char *)missing_00,"\\\n\r");
                        local_d0 = (FILE *)(ulong)(*(char *)((long)&missing_00->_flags + sVar15) !=
                                                  '\0');
                      }
                      _Var8 = digest_file((char *)missing_00,(int *)local_b8,&missing_1,
                                          (_Bool *)missing_00,(uintmax_t *)p_Var31);
                      in_R10 = (ulong)_Var8;
                      if (_Var8) goto LAB_00101fe9;
                      if (status_only == false) {
                        if ((int)local_d0 != 0) {
                          pcVar29 = _stdout->_IO_write_ptr;
                          if (pcVar29 < _stdout->_IO_write_end) {
                            _stdout->_IO_write_ptr = pcVar29 + 1;
                            *pcVar29 = '\\';
                          }
                          else {
                            __overflow(_stdout,0x5c);
                          }
                        }
                        print_filename((char *)missing_00,SUB81(local_d0,0));
                        uVar10 = dcgettext(0,"FAILED open or read",5);
                        __printf_chk(2,": %s\n",uVar10);
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
      pcVar34 = "the --strict option is meaningful only when verifying checksums";
    }
  }
LAB_00101860:
  uVar10 = dcgettext(0,pcVar34,5);
  error(0,0,uVar10);
switchD_001014e3_caseD_64:
                    /* WARNING: Subroutine does not return */
  usage(1);
LAB_0010187f:
  p_Var36 = (_Bool *)((ulong)p_Var36 & 0xffffffff);
  __n = (uint *)p_Var33;
  local_d8 = pFVar20;
  goto LAB_00101882;
}


