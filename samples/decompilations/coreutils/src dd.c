
/* WARNING: Unknown calling convention */

void translate_charset(char *new_trans)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  _func_ssize_t_int_char_ptr_idx_t **pp_Var9;
  _func_ssize_t_int_char_ptr_idx_t **pp_Var10;
  
  pp_Var9 = (_func_ssize_t_int_char_ptr_idx_t **)trans_table;
  do {
    pp_Var10 = pp_Var9 + 2;
    cVar1 = new_trans[*(byte *)((long)pp_Var9 + 0xe)];
    cVar2 = new_trans[*(byte *)((long)pp_Var9 + 0xd)];
    cVar3 = new_trans[*(byte *)((long)pp_Var9 + 0xc)];
    cVar4 = new_trans[*(byte *)((long)pp_Var9 + 0xb)];
    cVar5 = new_trans[*(byte *)((long)pp_Var9 + 0xf)];
    cVar6 = new_trans[*(byte *)((long)pp_Var9 + 10)];
    cVar7 = new_trans[*(byte *)((long)pp_Var9 + 9)];
    cVar8 = new_trans[*(byte *)(pp_Var9 + 1)];
    *pp_Var9 = (_func_ssize_t_int_char_ptr_idx_t *)
               CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(new_trans[*(byte *)((
                                                  long)pp_Var9 + 7)],
                                                  new_trans[*(byte *)((long)pp_Var9 + 6)]),
                                                  new_trans[*(byte *)((long)pp_Var9 + 5)]),
                                                  new_trans[*(byte *)((long)pp_Var9 + 4)]),
                                                  new_trans[*(byte *)((long)pp_Var9 + 3)]),
                                          new_trans[*(byte *)((long)pp_Var9 + 2)]),
                                 new_trans[*(byte *)((long)pp_Var9 + 1)]),
                        new_trans[*(byte *)pp_Var9]);
    pp_Var9[1] = (_func_ssize_t_int_char_ptr_idx_t *)
                 CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar5,cVar1),cVar2),
                                                              cVar3),cVar4),cVar6),cVar7),cVar8);
    pp_Var9 = pp_Var10;
  } while (pp_Var10 != &iread_fnc);
  translation_needed = true;
  return;
}



/* WARNING: Unknown calling convention */

void interrupt_handler(int sig)

{
  interrupt_signal = sig;
  return;
}



/* WARNING: Unknown calling convention */

void siginfo_handler(int sig)

{
  info_signal_count = info_signal_count + 1;
  return;
}



/* WARNING: Unknown calling convention */

_Bool operand_matches(char *str,char *pattern,char delim)

{
  char *pcVar1;
  char cVar2;
  long lVar3;
  
  lVar3 = 0;
  do {
    pcVar1 = pattern + lVar3;
    cVar2 = str[lVar3];
    if (*pcVar1 == '\0') {
      return delim == cVar2 || cVar2 == '\0';
    }
    lVar3 = lVar3 + 1;
  } while (*pcVar1 == cVar2);
  return false;
}



/* WARNING: Unknown calling convention */

int iclose(int fd)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = close(fd);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    iVar1 = *piVar2;
    do {
      if (iVar1 != 4) {
        return -1;
      }
      iVar1 = close(fd);
    } while ((iVar1 != 0) && (iVar1 = *piVar2, iVar1 != 9));
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void diagnose(int errnum,char *fmt,...)

{
  long lVar1;
  char *pcVar2;
  char in_AL;
  undefined8 in_RCX;
  undefined8 in_RDX;
  undefined8 in_R8;
  undefined8 in_R9;
  long in_FS_OFFSET;
  undefined8 in_XMM0_Qa;
  undefined8 in_XMM1_Qa;
  undefined8 in_XMM2_Qa;
  undefined8 in_XMM3_Qa;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;
  va_list ap;
  undefined1 auStack_c8 [16];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  
  if (in_AL != '\0') {
    local_98 = in_XMM0_Qa;
    local_88 = in_XMM1_Qa;
    local_78 = in_XMM2_Qa;
    local_68 = in_XMM3_Qa;
    local_58 = in_XMM4_Qa;
    local_48 = in_XMM5_Qa;
    local_38 = in_XMM6_Qa;
    local_28 = in_XMM7_Qa;
  }
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  local_b8 = in_RDX;
  local_b0 = in_RCX;
  local_a8 = in_R8;
  local_a0 = in_R9;
  if (0 < progress_len) {
    pcVar2 = _stderr->_IO_write_ptr;
    if (pcVar2 < _stderr->_IO_write_end) {
      _stderr->_IO_write_ptr = pcVar2 + 1;
      *pcVar2 = '\n';
    }
    else {
      __overflow(_stderr,10);
    }
    progress_len = 0;
    diagnose_cold();
    return;
  }
  ap[0].overflow_arg_area = &stack0x00000008;
  ap[0].reg_save_area = auStack_c8;
  ap[0].gp_offset = 0x10;
  ap[0].fp_offset = 0x30;
  verror(0,errnum,fmt,ap);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

intmax_t parse_integer(char *str,strtol_error *invalid)

{
  char cVar1;
  strtol_error sVar2;
  intmax_t iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  uintmax_t uVar7;
  long in_FS_OFFSET;
  bool bVar8;
  strtol_error f;
  uintmax_t n;
  char *suffix;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  n = 0;
  sVar2 = xstrtoumax(str,&suffix,10,&n,"bcEGkKMPQRTwYZ0");
  if ((sVar2 & ~LONGINT_OVERFLOW) == LONGINT_INVALID_SUFFIX_CHAR) {
    cVar1 = *suffix;
    if ((cVar1 == 'B') && (str < suffix)) {
      if (suffix[-1] != 'B') {
        pcVar6 = suffix + 1;
        cVar1 = suffix[1];
        suffix = pcVar6;
        if (cVar1 != '\0') goto LAB_001003c0;
        sVar2 = sVar2 & ~LONGINT_INVALID_SUFFIX_CHAR;
      }
    }
    else {
LAB_001003c0:
      if (cVar1 == 'x') {
        uVar7 = 0;
        iVar3 = parse_integer(suffix + 1,&f);
        if (LONGINT_OVERFLOW < f) goto LAB_0010035c;
        uVar7 = iVar3 * n;
        if ((long)n < 0) {
          if ((iVar3 != 0) && ((iVar3 != -1 || (n != uVar7)))) goto LAB_00100458;
        }
        else if (SEXT816((long)uVar7) != SEXT816(iVar3) * SEXT816((long)n)) {
LAB_00100458:
          uVar7 = 0x7fffffffffffffff;
          f = LONGINT_OVERFLOW;
          goto LAB_0010035c;
        }
        if (uVar7 == 0) {
          if ((*str == '0') && (str[1] == 'x')) {
            uVar4 = quote_n(1,&_LC1);
            uVar5 = quote_n(0,&_LC2);
            pcVar6 = (char *)dcgettext(0,
                                       "warning: %s is a zero multiplier; use %s if that is intended"
                                       ,5);
            diagnose(0,pcVar6,uVar5,uVar4);
            f = LONGINT_OK;
          }
          else {
            f = LONGINT_OK;
          }
        }
        else {
          bVar8 = (f | sVar2) != LONGINT_INVALID_SUFFIX_CHAR;
          if (bVar8) {
            uVar7 = 0x7fffffffffffffff;
          }
          f = (strtol_error)bVar8;
        }
        goto LAB_0010035c;
      }
    }
  }
  f = sVar2;
  uVar7 = n;
  if ((long)n < 0) {
    uVar7 = 0x7fffffffffffffff;
    f = LONGINT_OVERFLOW;
  }
LAB_0010035c:
  *invalid = f;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}



/* WARNING: Unknown calling convention */

_Bool invalidate_cache(int fd,off_t len)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  long *plVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  
  if (fd == 0) {
    cVar6 = i_nocache_eof;
    if (len == 0) {
      lVar5 = i_pending_1;
      if (i_pending_1 == 0) {
LAB_00100555:
        if (cVar6 == '\0') {
          return true;
        }
        lVar5 = 0;
        if (fd != 0) goto LAB_001005a9;
      }
      lVar7 = 0;
LAB_00100564:
      lVar2 = input_offset;
      if (input_seekable == false) {
        piVar3 = __errno_location();
        *piVar3 = 0x1d;
        return false;
      }
LAB_0010063b:
      if (lVar2 < 0) {
        return false;
      }
      goto LAB_001005be;
    }
    plVar4 = &i_pending_1;
    lVar2 = i_pending_1;
LAB_00100511:
    lVar5 = lVar2 + len;
    if (SCARRY8(lVar2,len)) {
      *plVar4 = 0x3ffff;
      lVar5 = 0x7ffffffffffc0000;
    }
    else {
      lVar2 = lVar5 % 0x40000;
      *plVar4 = lVar2;
      if (lVar5 <= lVar2) {
        return true;
      }
      lVar5 = lVar5 - lVar2;
    }
    lVar7 = i_pending_1;
    if (fd == 0) goto LAB_00100564;
    if (invalidate_cache::lexical_block_7::output_offset == -1) {
      return false;
    }
    lVar7 = o_pending_0;
    if (invalidate_cache::lexical_block_7::output_offset < 0) goto LAB_00100620;
    lVar2 = o_pending_0 + lVar5 + invalidate_cache::lexical_block_7::output_offset;
    invalidate_cache::lexical_block_7::output_offset = lVar2;
    if (lVar2 < 0) {
      return false;
    }
LAB_0010069d:
    lVar2 = (lVar2 - lVar5) - lVar7;
    if (lVar5 != 0) goto LAB_001005df;
  }
  else {
    cVar6 = o_nocache_eof;
    if (len != 0) {
      plVar4 = &o_pending_0;
      lVar2 = o_pending_0;
      goto LAB_00100511;
    }
    lVar5 = o_pending_0;
    if (o_pending_0 == 0) goto LAB_00100555;
LAB_001005a9:
    if (invalidate_cache::lexical_block_7::output_offset == -1) {
      return false;
    }
    lVar7 = 0;
    lVar2 = invalidate_cache::lexical_block_7::output_offset;
    if (invalidate_cache::lexical_block_7::output_offset < 0) {
LAB_00100620:
      invalidate_cache::lexical_block_7::output_offset = lseek(1,0,1);
      lVar2 = invalidate_cache::lexical_block_7::output_offset;
      goto LAB_0010063b;
    }
LAB_001005be:
    if ((len != 0) || (lVar5 == 0)) goto LAB_0010069d;
    lVar2 = lVar2 - lVar5;
    if (cVar6 == '\0') {
      lVar2 = lVar2 - lVar7;
      goto LAB_001005df;
    }
  }
  lVar5 = 0;
  lVar2 = lVar2 - lVar2 % page_size;
LAB_001005df:
  iVar1 = posix_fadvise(fd,lVar2,lVar5,4);
  piVar3 = __errno_location();
  *piVar3 = iVar1;
  return iVar1 == 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void maybe_close_stdout(void)

{
  int iVar1;
  
  if (close_stdout_required) {
    close_stdout();
    return;
  }
  iVar1 = close_stream(_stderr);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  _exit(1);
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void alloc_ibuf(void)

{
  long lVar1;
  idx_t iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  char hbuf [652];
  
  iVar2 = input_blocksize;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  ibuf = (char *)aligned_alloc(page_size,(ulong)((uint)conversions_mask >> 7 & 1) + input_blocksize)
  ;
  if (ibuf == (char *)0x0) {
    uVar3 = human_readable(iVar2,hbuf,0x1f1,1,1);
    iVar2 = input_blocksize;
    uVar4 = dcgettext(0,"memory exhausted by input buffer of size %td bytes (%s)",5);
    error(1,0,uVar4,iVar2,uVar3);
  }
  else if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void alloc_obuf(void)

{
  long lVar1;
  idx_t iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  char hbuf [652];
  
  iVar2 = output_blocksize;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  obuf = (char *)aligned_alloc(page_size,output_blocksize);
  if (obuf == (char *)0x0) {
    uVar3 = human_readable(iVar2,hbuf,0x1f1,1,1);
    iVar2 = output_blocksize;
    uVar4 = dcgettext(0,"memory exhausted by output buffer of size %td bytes (%s)",5);
    error(1,0,uVar4,iVar2,uVar3);
  }
  else if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void alloc_obuf(void)

{
  if (obuf != (char *)0x0) {
    return;
  }
  if ((conversions_mask._1_1_ & 8) == 0) {
    if (ibuf != (char *)0x0) {
      obuf = ibuf;
      return;
    }
    alloc_ibuf();
    obuf = ibuf;
    return;
  }
  alloc_obuf();
  return;
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
  infomap *piVar6;
  undefined1 *puVar7;
  infomap infomap [7];
  
  uVar5 = _program_name;
  piVar6 = infomap;
  if (status != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(_stderr,2,uVar3,uVar5);
    goto LAB_00100929;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPERAND]...\n  or:  %s OPTION\n",5);
  __printf_chk(2,uVar3,uVar5,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "Copy a file, converting and formatting according to the operands.\n\n  bs=BYTES        read and write up to BYTES bytes at a time (default: 512);\n                  overrides ibs and obs\n  cbs=BYTES       convert BYTES bytes at a time\n  conv=CONVS      convert the file as per the comma separated symbol list\n  count=N         copy only N input blocks\n  ibs=BYTES       read up to BYTES bytes at a time (default: 512)\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  if=FILE         read from FILE instead of stdin\n  iflag=FLAGS     read as per the comma separated symbol list\n  obs=BYTES       write BYTES bytes at a time (default: 512)\n  of=FILE         write to FILE instead of stdout\n  oflag=FLAGS     write as per the comma separated symbol list\n  seek=N          (or oseek=N) skip N obs-sized output blocks\n  skip=N          (or iseek=N) skip N ibs-sized input blocks\n  status=LEVEL    The LEVEL of information to print to stderr;\n                  \'none\' suppresses everything but error messages,\n                  \'noxfer\' suppresses the final transfer statistics,\n                  \'progress\' shows periodic transfer statistics\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nN and BYTES may be followed by the following multiplicative suffixes:\nc=1, w=2, b=512, kB=1000, K=1024, MB=1000*1000, M=1024*1024, xM=M,\nGB=1000*1000*1000, G=1024*1024*1024, and so on for T, P, E, Z, Y, R, Q.\nBinary prefixes can be used, too: KiB=K, MiB=M, and so on.\nIf N ends in \'B\', it counts bytes not blocks.\n\nEach CONV symbol may be:\n\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  ascii     from EBCDIC to ASCII\n  ebcdic    from ASCII to EBCDIC\n  ibm       from ASCII to alternate EBCDIC\n  block     pad newline-terminated records with spaces to cbs-size\n  unblock   replace trailing spaces in cbs-size records with newline\n  lcase     change upper case to lower case\n  ucase     change lower case to upper case\n  sparse    try to seek rather than write all-NUL output blocks\n  swab      swap every pair of input bytes\n  sync      pad every input block with NULs to ibs-size; when used\n            with block or unblock, pad with spaces rather than NULs\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  excl      fail if the output file already exists\n  nocreat   do not create the output file\n  notrunc   do not truncate the output file\n  noerror   continue after read errors\n  fdatasync  physically write output file data before finishing\n  fsync     likewise, but also write metadata\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nEach FLAG symbol may be:\n\n  append    append mode (makes sense only for output; conv=notrunc suggested)\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"  direct    use direct I/O for data\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"  directory  fail unless a directory\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"  dsync     use synchronized I/O for data\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"  sync      likewise, but also for metadata\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"  fullblock  accumulate full blocks of input (iflag only)\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"  nonblock  use non-blocking I/O\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"  noatime   do not update access time\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"  nocache   Request to drop cache.  See also oflag=sync\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"  noctty    do not assign controlling terminal from file\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"  nofollow  do not follow symlinks\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  uVar5 = dcgettext(0,
                    "\nSending a %s signal to a running \'dd\' process makes it\nprint I/O statistics to standard error and then resume copying.\n\nOptions are:\n\n"
                    ,5);
  __printf_chk(2,uVar5,&_LC30);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
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
    if (((*pcVar4 == 'd') && (pcVar4[1] == 'd')) && (pcVar4[2] == '\0')) break;
    pcVar4 = *(char **)((long)piVar6 + 0x10);
    piVar6 = (infomap *)((long)piVar6 + 0x10);
  } while (pcVar4 != (char *)0x0);
  puVar7 = *(undefined1 **)((long)piVar6 + 8);
  if (puVar7 == (undefined1 *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    puVar7 = &_LC7;
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) goto LAB_00100d4c;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC7);
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
LAB_00100d4c:
      iVar2 = strncmp(pcVar4,"en_",3);
      pFVar1 = _stdout;
      if (iVar2 != 0) {
        pcVar4 = (char *)dcgettext(0,
                                   "Report any translation bugs to <https://translationproject.org/team/>\n"
                                   ,5);
        fputs_unlocked(pcVar4,pFVar1);
      }
    }
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar4 = "";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC7);
    if (puVar7 == &_LC7) {
      pcVar4 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,puVar7,pcVar4);
LAB_00100929:
                    /* WARNING: Subroutine does not return */
  exit(status);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void print_xfer_stats(xtime_t progress_time)

{
  long lVar1;
  intmax_t iVar2;
  int iVar3;
  char *pcVar4;
  char (*__s) [654];
  char (*__s_00) [654];
  size_t sVar5;
  undefined8 uVar6;
  xtime_t xVar7;
  char *pcVar8;
  long in_FS_OFFSET;
  char hbuf [3] [654];
  char delta_s_buf [24];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  xVar7 = progress_time;
  if (progress_time == 0) {
    xVar7 = gethrxtime();
  }
  pcVar4 = (char *)human_readable(w_bytes,hbuf,0x1d1,1,1);
  __s = (char (*) [654])human_readable(w_bytes,hbuf + 1,0x1f1,1,1);
  if (start_time < xVar7) {
    __s_00 = (char (*) [654])human_readable(w_bytes,hbuf + 2,0x1d1,1000000000);
    sVar5 = strlen((char *)__s_00);
    *(undefined2 *)(*__s_00 + sVar5) = print_xfer_stats::slash_s._0_2_;
    (*__s_00)[sVar5 + 2] = print_xfer_stats::slash_s[2];
  }
  else {
    uVar6 = dcgettext(0,"Infinity",5);
    __s_00 = hbuf + 2;
    __snprintf_chk(__s_00,0x28e,2,0x28e,"%s B/s",uVar6);
  }
  pcVar8 = "%g s";
  if (progress_time != 0) {
    pcVar8 = _stderr->_IO_write_ptr;
    if (pcVar8 < _stderr->_IO_write_end) {
      _stderr->_IO_write_ptr = pcVar8 + 1;
      *pcVar8 = '\r';
    }
    else {
      __overflow(_stderr,0xd);
    }
    pcVar8 = "%.0f s";
  }
  __snprintf_chk((char (*) [654])delta_s_buf,0x18,2,0x18,pcVar8);
  sVar5 = strlen(pcVar4);
  iVar2 = w_bytes;
  if (pcVar4[sVar5 - 2] == ' ') {
    uVar6 = dcngettext(0,"%jd byte copied, %s, %s","%jd bytes copied, %s, %s",w_bytes,5);
    iVar3 = __fprintf_chk(_stderr,2,uVar6,iVar2,(char (*) [654])delta_s_buf,__s_00);
  }
  else {
    sVar5 = strlen((char *)__s);
    iVar2 = w_bytes;
    if (__s[-1][sVar5 + 0x28c] == ' ') {
      uVar6 = dcgettext(0,"%jd bytes (%s) copied, %s, %s",5);
      __s = (char (*) [654])delta_s_buf;
    }
    else {
      uVar6 = dcgettext(0,"%jd bytes (%s, %s) copied, %s, %s",5);
      __s_00 = (char (*) [654])delta_s_buf;
    }
    iVar3 = __fprintf_chk(_stderr,2,uVar6,iVar2,pcVar4,__s,__s_00);
  }
  if (progress_time == 0) {
    pcVar4 = _stderr->_IO_write_ptr;
    if (pcVar4 < _stderr->_IO_write_end) {
      _stderr->_IO_write_ptr = pcVar4 + 1;
      *pcVar4 = '\n';
      iVar3 = progress_len;
    }
    else {
      __overflow(_stderr,10);
      iVar3 = progress_len;
    }
  }
  else if ((-1 < iVar3) && (iVar3 < progress_len)) {
    __fprintf_chk(_stderr,2,&_LC57,progress_len - iVar3,&_LC9);
  }
  progress_len = iVar3;
  reported_w_bytes = w_bytes;
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void print_stats(void)

{
  char *pcVar1;
  intmax_t iVar2;
  intmax_t iVar3;
  intmax_t iVar4;
  intmax_t iVar5;
  undefined8 uVar6;
  
  if (status_level == 1) {
    return;
  }
  if (0 < progress_len) {
    pcVar1 = _stderr->_IO_write_ptr;
    if (pcVar1 < _stderr->_IO_write_end) {
      _stderr->_IO_write_ptr = pcVar1 + 1;
      *pcVar1 = '\n';
    }
    else {
      __overflow(_stderr,10);
    }
    progress_len = 0;
  }
  iVar5 = w_partial;
  iVar4 = w_full;
  iVar3 = r_partial;
  iVar2 = r_full;
  uVar6 = dcgettext(0,"%jd+%jd records in\n%jd+%jd records out\n",5);
  __fprintf_chk(_stderr,2,uVar6,iVar2,iVar3,iVar4,iVar5);
  iVar2 = r_truncate;
  if (r_truncate != 0) {
    uVar6 = dcngettext(0,"%jd truncated record\n","%jd truncated records\n",r_truncate,5);
    __fprintf_chk(_stderr,2,uVar6,iVar2);
  }
  if (status_level != 2) {
    print_xfer_stats(0);
    return;
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void process_signals(void)

{
  long lVar1;
  sig_atomic_t __sig;
  EVP_PKEY_CTX *ctx;
  long in_FS_OFFSET;
  sigset_t oldset;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  while ((interrupt_signal != 0 || (info_signal_count != 0))) {
    while( true ) {
      sigprocmask(0,(sigset_t *)&caught_signals,(sigset_t *)&oldset);
      __sig = interrupt_signal;
      if (info_signal_count != 0) {
        info_signal_count = info_signal_count + -1;
      }
      ctx = (EVP_PKEY_CTX *)0x2;
      sigprocmask(2,(sigset_t *)&oldset,(sigset_t *)0x0);
      if (__sig != 0) break;
      print_stats();
      if ((interrupt_signal == 0) && (info_signal_count == 0)) goto LAB_001013d1;
    }
    cleanup(ctx);
    print_stats();
    raise(__sig);
  }
LAB_001013d1:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

int ifd_reopen(int desired_fd,char *file,int flag,mode_t mode)

{
  int iVar1;
  int *piVar2;
  
  do {
    process_signals();
    iVar1 = fd_reopen(desired_fd,file,flag,mode);
    if (-1 < iVar1) {
      return iVar1;
    }
    piVar2 = __errno_location();
  } while (*piVar2 == 4);
  return iVar1;
}



/* WARNING: Unknown calling convention */

int ifstat(int fd,stat *st)

{
  int iVar1;
  int *piVar2;
  
  do {
    process_signals();
    iVar1 = fstat(fd,(stat *)st);
    if (-1 < iVar1) {
      return iVar1;
    }
    piVar2 = __errno_location();
  } while (*piVar2 == 4);
  return iVar1;
}



/* WARNING: Unknown calling convention */

void set_fd_flags(int fd,int add_flags,char *name)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  int *piVar6;
  uint uVar7;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  stat st;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((add_flags & 0xfffdfeffU) != 0) {
    uVar4 = (ulong)(uint)fd;
    uVar2 = rpl_fcntl(CONCAT44(in_register_0000003c,fd),3);
    uVar7 = add_flags & 0xfffdfeffU | uVar2;
    uVar5 = (ulong)uVar7;
    if ((int)uVar2 < 0) goto LAB_00101553;
    if (uVar2 != uVar7) {
      if ((uVar7 & 0x10000) != 0) {
        iVar3 = ifstat(fd,&st);
        if (iVar3 != 0) goto LAB_00101553;
        if ((st.st_mode & 0xf000) == 0x4000) goto LAB_00101592;
        piVar6 = __errno_location();
        *piVar6 = 0x14;
        goto LAB_00101553;
      }
      do {
        iVar3 = rpl_fcntl(uVar4 & 0xffffffff,4,uVar5);
        if (iVar3 != -1) break;
LAB_00101553:
        uVar4 = quotearg_style(4,name);
        uVar5 = dcgettext(0,"setting flags for %s",5);
        piVar6 = __errno_location();
        error(1,*piVar6,uVar5,uVar4);
LAB_00101592:
        uVar7 = (uint)uVar5 & 0xfffeffff;
        uVar5 = (ulong)uVar7;
      } while (uVar2 != uVar7);
    }
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Unknown calling convention */

ssize_t iread(int fd,char *buf,idx_t size)

{
  ssize_t sVar1;
  ssize_t sVar2;
  int *piVar3;
  char *fmt;
  int iVar4;
  
  do {
    process_signals();
    sVar2 = read(fd,buf,size);
    if (sVar2 == -1) {
      piVar3 = __errno_location();
      iVar4 = *piVar3;
      if (iVar4 == 0x16) {
        if (size <= iread::prev_nread) {
          iread::prev_nread = sVar2;
          return -1;
        }
        if (iread::prev_nread < 1) {
          iread::prev_nread = sVar2;
          return -1;
        }
        if ((input_flags._1_1_ & 0x40) == 0) {
          iread::prev_nread = sVar2;
          return -1;
        }
        *piVar3 = 0;
        iread::prev_nread = 0;
        return 0;
      }
    }
    else {
      if (-1 < sVar2) {
        if ((sVar2 < 1) || (size <= sVar2)) {
          if (sVar2 < 1) {
            iread::prev_nread = 0;
            return 0;
          }
        }
        else {
          process_signals();
        }
        sVar1 = iread::prev_nread;
        if (warn_partial_read == false) {
          iread::prev_nread = sVar2;
          return sVar2;
        }
        if (iread::prev_nread < 1) {
          iread::prev_nread = sVar2;
          return sVar2;
        }
        if (size <= iread::prev_nread) {
          iread::prev_nread = sVar2;
          return sVar2;
        }
        if (status_level != 1) {
          fmt = (char *)dcngettext(0,"warning: partial read (%td byte); suggest iflag=fullblock",
                                   "warning: partial read (%td bytes); suggest iflag=fullblock",
                                   iread::prev_nread,5);
          diagnose(0,fmt,sVar1);
        }
        iread::prev_nread = sVar2;
        warn_partial_read = false;
        return sVar2;
      }
      piVar3 = __errno_location();
      iVar4 = *piVar3;
    }
    if (iVar4 != 4) {
      iread::prev_nread = sVar2;
      return sVar2;
    }
  } while( true );
}



/* WARNING: Unknown calling convention */

ssize_t iread_fullblock(int fd,char *buf,idx_t size)

{
  ssize_t sVar1;
  long lVar2;
  
  if (size < 1) {
    return 0;
  }
  lVar2 = 0;
  while( true ) {
    sVar1 = iread(fd,buf,size);
    if (sVar1 < 0) {
      return sVar1;
    }
    if (sVar1 == 0) break;
    size = size - sVar1;
    lVar2 = lVar2 + sVar1;
    buf = buf + sVar1;
    if (size < 1) {
      return lVar2;
    }
  }
  return lVar2;
}



int iftruncate(int fd,off_t length)

{
  int iVar1;
  int *piVar2;
  undefined4 in_register_0000003c;
  
  do {
    process_signals();
    iVar1 = ftruncate(1,CONCAT44(in_register_0000003c,fd));
    if (-1 < iVar1) {
      return iVar1;
    }
    piVar2 = __errno_location();
  } while (*piVar2 == 4);
  return iVar1;
}



/* WARNING: Type propagation algorithm not settling */

idx_t iwrite(int fd,char *buf,idx_t size)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  __off_t _Var5;
  undefined8 uVar6;
  char *pcVar7;
  char *pcVar8;
  char *__s2;
  undefined4 in_register_0000003c;
  char *__s1;
  
  __s1 = (char *)CONCAT44(in_register_0000003c,fd);
  if (((output_flags._1_1_ & 0x40) != 0) && ((long)buf < output_blocksize)) {
    uVar2 = rpl_fcntl(1,3);
    iVar3 = rpl_fcntl(1,4,uVar2 & 0xffffbfff);
    if ((iVar3 != 0) && (status_level != 1)) {
      uVar6 = quotearg_n_style_colon(0,3,output_file);
      pcVar8 = (char *)dcgettext(0,"failed to turn off O_DIRECT: %s",5);
      piVar4 = __errno_location();
      diagnose(*piVar4,pcVar8,uVar6);
    }
    o_nocache_eof = true;
    invalidate_cache(1,0);
    conversions_mask = conversions_mask | 0x8000;
  }
  pcVar8 = (char *)0x0;
  if (0 < (long)buf) {
    do {
      process_signals();
      iVar3 = conversions_mask;
      final_op_was_seek = false;
      pcVar7 = buf;
      __s2 = __s1;
      if ((conversions_mask & 0x10000U) == 0) {
LAB_00101818:
        pcVar7 = (char *)write(1,__s1 + (long)pcVar8,(long)buf - (long)pcVar8);
        if (-1 < (long)pcVar7) {
          if (pcVar7 != (char *)0x0) goto LAB_001017ce;
          piVar4 = __errno_location();
          *piVar4 = 0x1c;
          break;
        }
        piVar4 = __errno_location();
        if (*piVar4 != 4) break;
      }
      else {
        do {
          if (*__s2 != '\0') goto LAB_00101818;
          __s2 = __s2 + 1;
          pcVar7 = pcVar7 + -1;
          if (pcVar7 == (char *)0x0) goto LAB_00101860;
        } while (((ulong)pcVar7 & 0xf) != 0);
        iVar1 = memcmp(__s1,__s2,(size_t)pcVar7);
        if (iVar1 != 0) goto LAB_00101818;
LAB_00101860:
        _Var5 = lseek(1,(__off_t)buf,1);
        if (_Var5 < 0) {
          conversions_mask = iVar3 & 0xfffeffff;
          goto LAB_00101818;
        }
        final_op_was_seek = true;
        pcVar7 = buf;
LAB_001017ce:
        pcVar8 = pcVar8 + (long)pcVar7;
      }
    } while ((long)pcVar8 < (long)buf);
    if ((o_nocache != false) && (pcVar8 != (char *)0x0)) {
      invalidate_cache(1,(off_t)pcVar8);
      return (idx_t)pcVar8;
    }
  }
  return (idx_t)pcVar8;
}



/* WARNING: Unknown calling convention */

int synchronize_output(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  
  iVar7 = conversions_mask;
  uVar2 = conversions_mask & 0xffff3fff;
  uVar1 = conversions_mask & 0x4000;
  conversions_mask = uVar2;
  if (uVar1 == 0) {
LAB_0010198c:
    if ((iVar7 & 0x8000U) == 0) {
      return 0;
    }
    iVar7 = 0;
  }
  else {
    do {
      process_signals();
      iVar3 = fdatasync(1);
      if (-1 < iVar3) {
        if (iVar3 == 0) goto LAB_0010198c;
        break;
      }
      piVar6 = __errno_location();
    } while (*piVar6 == 4);
    piVar6 = __errno_location();
    iVar7 = 0;
    if ((*piVar6 - 0x16U & 0xffffffef) != 0) {
      uVar4 = quotearg_style(4,output_file);
      pcVar5 = (char *)dcgettext(0,"fdatasync failed for %s",5);
      iVar7 = 1;
      diagnose(*piVar6,pcVar5,uVar4);
    }
  }
  do {
    process_signals();
    iVar3 = fsync(1);
    if (-1 < iVar3) {
      if (iVar3 == 0) {
        return iVar7;
      }
      break;
    }
    piVar6 = __errno_location();
  } while (*piVar6 == 4);
  uVar4 = quotearg_style(4,output_file);
  pcVar5 = (char *)dcgettext(0,"fsync failed for %s",5);
  piVar6 = __errno_location();
  diagnose(*piVar6,pcVar5,uVar4);
  return 1;
}



void cleanup(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int *piVar4;
  char *pcVar5;
  
  if (interrupt_signal == 0) {
    iVar1 = synchronize_output();
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      exit(iVar1);
    }
  }
  iVar1 = iclose(0);
  if (iVar1 != 0) goto LAB_00101b33;
  iVar1 = iclose(1);
  if (iVar1 == 0) {
    return;
  }
  uVar2 = quotearg_style(4,output_file);
  pcVar5 = "closing output file %s";
  do {
    uVar3 = dcgettext(0,pcVar5,5);
    piVar4 = __errno_location();
    error(1,*piVar4,uVar3,uVar2);
LAB_00101b33:
    uVar2 = quotearg_style(4,input_file);
    pcVar5 = "closing input file %s";
  } while( true );
}



void quit(int code)

{
  undefined4 in_register_0000003c;
  EVP_PKEY_CTX *ctx;
  
  ctx = (EVP_PKEY_CTX *)CONCAT44(in_register_0000003c,code);
  process_signals();
  cleanup(ctx);
  print_stats();
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void write_output(void)

{
  idx_t iVar1;
  undefined8 uVar2;
  char *fmt;
  int *piVar3;
  idx_t in_RDX;
  int errnum;
  
  iVar1 = iwrite((int)obuf,(char *)output_blocksize,in_RDX);
  w_bytes = w_bytes + iVar1;
  if (output_blocksize == iVar1) {
    oc = 0;
    w_full = w_full + 1;
    return;
  }
  uVar2 = quotearg_style(4,output_file);
  fmt = (char *)dcgettext(0,"writing to %s",5);
  piVar3 = __errno_location();
  errnum = *piVar3;
  diagnose(errnum,fmt,uVar2);
  if (iVar1 != 0) {
    w_partial = w_partial + 1;
  }
                    /* WARNING: Subroutine does not return */
  quit(errnum);
}



/* WARNING: Unknown calling convention */

void copy_with_block(char *buf,idx_t nread)

{
  long lVar1;
  char *pcVar2;
  idx_t iVar3;
  
  pcVar2 = buf + nread;
  if (nread != 0) {
    do {
      while (iVar3 = col, *buf == newline_character) {
        if (col < conversion_blocksize) {
          do {
            lVar1 = oc + 1;
            obuf[oc] = space_character;
            oc = lVar1;
            if (output_blocksize <= lVar1) {
              write_output();
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < conversion_blocksize);
        }
        buf = buf + 1;
        col = 0;
        if (buf == pcVar2) {
          col = 0;
          return;
        }
      }
      if (col == conversion_blocksize) {
        r_truncate = r_truncate + 1;
      }
      else if (col < conversion_blocksize) {
        lVar1 = oc + 1;
        obuf[oc] = *buf;
        oc = lVar1;
        if (output_blocksize <= lVar1) {
          write_output();
          iVar3 = col;
        }
      }
      col = iVar3 + 1;
      buf = buf + 1;
    } while (buf != pcVar2);
  }
  return;
}



/* WARNING: Unknown calling convention */

void copy_with_unblock(char *buf,idx_t nread)

{
  long lVar1;
  char cVar2;
  char *pcVar3;
  long lVar4;
  
  if (nread < 1) {
    return;
  }
  lVar4 = 0;
  do {
    while( true ) {
      cVar2 = buf[lVar4];
      lVar1 = col + 1;
      if (col < conversion_blocksize) break;
      copy_with_unblock::pending_spaces = 0;
      col = 0;
      lVar1 = oc + 1;
      obuf[oc] = newline_character;
      oc = lVar1;
      if (output_blocksize <= lVar1) {
        write_output();
      }
      if (nread <= lVar4) {
        return;
      }
    }
    col = lVar1;
    lVar1 = oc;
    pcVar3 = obuf;
    if (space_character == cVar2) {
      copy_with_unblock::pending_spaces = copy_with_unblock::pending_spaces + 1;
    }
    else {
      for (; copy_with_unblock::pending_spaces != 0;
          copy_with_unblock::pending_spaces = copy_with_unblock::pending_spaces + -1) {
        oc = lVar1 + 1;
        pcVar3[lVar1] = space_character;
        if (output_blocksize <= oc) {
          write_output();
          pcVar3 = obuf;
        }
        lVar1 = oc;
      }
      oc = lVar1 + 1;
      pcVar3[lVar1] = cVar2;
      if (output_blocksize <= oc) {
        write_output();
      }
    }
    lVar4 = lVar4 + 1;
  } while (lVar4 < nread);
  return;
}



/* WARNING: Unknown calling convention */

intmax_t skip(int fdesc,char *file,intmax_t records,idx_t blocksize,idx_t *bytes)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  long __offset;
  __off_t _Var5;
  ssize_t sVar6;
  ulong uVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined8 uVar10;
  idx_t iVar11;
  long in_FS_OFFSET;
  bool bVar12;
  int local_dc;
  stat st;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  piVar3 = __errno_location();
  *piVar3 = 0;
  lVar4 = records * blocksize;
  if (SEXT816(lVar4) == SEXT816(records) * SEXT816(blocksize)) {
    __offset = lVar4 + *bytes;
    uVar7 = (ulong)SCARRY8(lVar4,*bytes);
    if (SCARRY8(lVar4,*bytes)) goto LAB_00101efe;
    _Var5 = lseek(fdesc,__offset,1);
    if (-1 < _Var5) {
      if (fdesc != 0) {
LAB_00101fa8:
        *bytes = 0;
LAB_00101fb0:
        uVar7 = 0;
        goto LAB_00101fb3;
      }
      iVar2 = ifstat(0,&st);
      if (iVar2 == 0) {
        if (((st.st_mode & 0xd000) == 0x8000) && (0 < st.st_size)) {
          if (input_offset < 0) goto LAB_00101fb3;
          if (st.st_size - input_offset < __offset) {
            uVar7 = (__offset - st.st_size) / blocksize;
            __offset = st.st_size - input_offset;
          }
        }
        else if (input_offset < 0) goto LAB_00101fb3;
        bVar12 = SCARRY8(input_offset,__offset);
        input_offset = input_offset + __offset;
        if (!bVar12) goto LAB_00101fb3;
      }
      else {
        uVar8 = quotearg_style(4,file);
        uVar10 = dcgettext(0,"cannot fstat %s",5);
        error(1,*piVar3,uVar10,uVar8);
      }
      input_offset = -1;
      goto LAB_00101fb3;
    }
    local_dc = *piVar3;
    _Var5 = lseek(fdesc,0,2);
    if (-1 < _Var5) {
      if (local_dc != 0) goto LAB_001020cc;
      goto LAB_001020c4;
    }
  }
  else {
LAB_00101efe:
    _Var5 = lseek(fdesc,0,2);
    if (-1 < _Var5) {
LAB_001020c4:
      local_dc = 0x4b;
LAB_001020cc:
      uVar8 = quotearg_n_style_colon(0,3,file);
      pcVar9 = "%s: cannot seek";
      if (fdesc == 0) {
        pcVar9 = "%s: cannot skip";
      }
      pcVar9 = (char *)dcgettext(0,pcVar9,5);
      diagnose(local_dc,pcVar9,uVar8);
                    /* WARNING: Subroutine does not return */
      quit(local_dc);
    }
    local_dc = 0;
  }
  if (fdesc == 0) {
    pcVar9 = ibuf;
    if (ibuf == (char *)0x0) {
      alloc_ibuf();
      pcVar9 = ibuf;
    }
  }
  else {
    alloc_obuf();
    pcVar9 = obuf;
  }
  iVar11 = blocksize;
  if (records == 0) {
    records = 0;
    iVar11 = *bytes;
  }
  while( true ) {
    sVar6 = (*iread_fnc)(fdesc,pcVar9,iVar11);
    if (sVar6 < 0) {
      if (fdesc == 0) {
        uVar8 = quotearg_style(4,file);
        pcVar9 = (char *)dcgettext(0,"error reading %s",5);
        local_dc = *piVar3;
        diagnose(local_dc,pcVar9,uVar8);
        if ((conversions_mask._1_1_ & 1) != 0) {
          print_stats();
        }
      }
      else {
        uVar8 = quotearg_n_style_colon(0,3,file);
        pcVar9 = (char *)dcgettext(0,"%s: cannot seek",5);
        diagnose(local_dc,pcVar9,uVar8);
      }
                    /* WARNING: Subroutine does not return */
      quit(local_dc);
    }
    uVar7 = records;
    if (sVar6 == 0) break;
    if (((fdesc == 0) && (-1 < input_offset)) &&
       (bVar12 = SCARRY8(sVar6,input_offset), input_offset = sVar6 + input_offset, bVar12)) {
      input_offset = -1;
    }
    if (records == 0) goto LAB_00101fa8;
    records = records - 1;
    iVar11 = blocksize;
    if (records == 0) {
      if (*bytes == 0) goto LAB_00101fb0;
      records = 0;
      iVar11 = *bytes;
    }
  }
LAB_00101fb3:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}



/* WARNING: Unknown calling convention */

int parse_symbols(char *str,symbol_value *table,_Bool exclusive,char *error_msgid)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  size_t sVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  symbol_value *psVar11;
  
  uVar9 = 0;
LAB_00102236:
  pcVar4 = strchr(str,0x2c);
  psVar11 = table;
  do {
    lVar8 = 0;
    do {
      pcVar1 = psVar11->symbol + lVar8;
      cVar2 = str[lVar8];
      if (*pcVar1 == '\0') {
        if (((cVar2 == ',') || (cVar2 == '\0')) && (uVar3 = psVar11->value, uVar3 != 0)) {
          uVar10 = uVar9 | uVar3;
          uVar9 = uVar3;
          if (!exclusive) {
            uVar9 = uVar10;
          }
          if (pcVar4 == (char *)0x0) {
            return uVar9;
          }
          str = pcVar4 + 1;
          goto LAB_00102236;
        }
        break;
      }
      lVar8 = lVar8 + 1;
    } while (*pcVar1 == cVar2);
    if (psVar11->symbol[0] == '\0') {
      if (pcVar4 == (char *)0x0) {
        sVar7 = strlen(str);
      }
      else {
        sVar7 = (long)pcVar4 - (long)str;
      }
      uVar5 = quotearg_n_style_mem(0,8,str,sVar7);
      uVar6 = dcgettext(0,error_msgid,5);
      diagnose(0,"%s: %s",uVar6,uVar5);
                    /* WARNING: Subroutine does not return */
      usage(1);
    }
    psVar11 = psVar11 + 1;
  } while( true );
}



void diagnose_cold(void)

{
  undefined4 unaff_EBP;
  long in_FS_OFFSET;
  undefined1 *puStack0000000000000008;
  undefined1 *puStack0000000000000010;
  long in_stack_00000018;
  
  puStack0000000000000008 = &stack0x000000f0;
  puStack0000000000000010 = &stack0x00000020;
  verror(0,unaff_EBP);
  if (in_stack_00000018 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int main(int argc,char **argv)

{
  long lVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  idx_t iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  undefined1 auVar38 [16];
  strtol_error sVar39;
  _Bool _Var40;
  int iVar41;
  char *pcVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  _func_ssize_t_int_char_ptr_idx_t **pp_Var46;
  _func_ssize_t_int_char_ptr_idx_t **pp_Var47;
  char *pcVar48;
  idx_t *piVar49;
  __int32_t **pp_Var50;
  long lVar51;
  intmax_t iVar52;
  char **ppcVar53;
  EVP_PKEY_CTX *pEVar54;
  __off_t _Var55;
  idx_t iVar56;
  int *piVar57;
  char cVar58;
  char cVar59;
  code *pcVar60;
  char *pcVar61;
  char *extraout_RDX;
  byte *pbVar62;
  byte *pbVar63;
  char *extraout_RDX_00;
  idx_t extraout_RDX_01;
  idx_t extraout_RDX_02;
  char *extraout_RDX_03;
  char *extraout_RDX_04;
  idx_t extraout_RDX_05;
  char *extraout_RDX_06;
  char *extraout_RDX_07;
  uint uVar64;
  uint *puVar65;
  char *pcVar66;
  off_t oVar67;
  ulong uVar68;
  char *in_R10;
  long lVar69;
  char **ppcVar70;
  _func_ssize_t_int_char_ptr_idx_t **pp_Var71;
  uint uVar72;
  uchar *puVar73;
  EVP_PKEY_CTX *pEVar74;
  char **ppcVar75;
  long in_FS_OFFSET;
  bool bVar76;
  bool bVar77;
  int iVar78;
  int iVar92;
  undefined1 auVar80 [16];
  undefined1 auVar84 [16];
  undefined1 auVar88 [16];
  undefined1 auVar91 [16];
  undefined1 auVar93 [16];
  undefined1 auVar97 [16];
  undefined1 auVar101 [16];
  undefined1 auVar104 [16];
  undefined2 uVar105;
  undefined2 uVar106;
  undefined2 uVar107;
  undefined1 auVar109 [16];
  ulong local_120;
  ulong local_118;
  ulong local_108;
  ulong local_100;
  int local_f8;
  char local_f2;
  char local_f1;
  EVP_PKEY_CTX *local_f0;
  strtol_error invalid;
  idx_t blocksize;
  stat stdout_stat;
  undefined1 auVar79 [12];
  undefined1 auVar81 [16];
  undefined1 auVar85 [16];
  undefined1 auVar82 [16];
  undefined1 auVar86 [16];
  undefined1 auVar89 [16];
  undefined1 auVar83 [16];
  undefined1 auVar87 [16];
  undefined1 auVar90 [16];
  undefined1 auVar94 [16];
  undefined1 auVar98 [16];
  undefined1 auVar95 [16];
  undefined1 auVar99 [16];
  undefined1 auVar102 [16];
  undefined1 auVar96 [16];
  undefined1 auVar100 [16];
  undefined1 auVar103 [16];
  int iVar108;
  int iVar110;
  int iVar111;
  int iVar112;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar42 = getenv("POSIXLY_CORRECT");
  sigemptyset((sigset_t *)&caught_signals);
  if (pcVar42 == (char *)0x0) {
    sigaddset((sigset_t *)&caught_signals,10);
  }
  sigaction(2,(sigaction *)0x0,(sigaction *)&stdout_stat);
  if (stdout_stat.st_dev != 1) {
    sigaddset((sigset_t *)&caught_signals,2);
  }
  stdout_stat.st_ino = caught_signals.__val[0];
  stdout_stat.st_nlink = caught_signals.__val[1];
  stdout_stat.st_mode = (undefined4)caught_signals.__val[2];
  stdout_stat.st_uid = caught_signals.__val[2]._4_4_;
  stdout_stat.st_gid = (undefined4)caught_signals.__val[3];
  stdout_stat.__pad0 = caught_signals.__val[3]._4_4_;
  stdout_stat.st_rdev = caught_signals.__val[4];
  stdout_stat.st_size = caught_signals.__val[5];
  stdout_stat.st_blksize = caught_signals.__val[6];
  stdout_stat.st_blocks = caught_signals.__val[7];
  stdout_stat.st_atim.tv_sec = caught_signals.__val[8];
  stdout_stat.st_atim.tv_nsec = caught_signals.__val[9];
  stdout_stat.st_mtim.tv_sec = caught_signals.__val[10];
  stdout_stat.st_mtim.tv_nsec = caught_signals.__val[0xb];
  stdout_stat.st_ctim.tv_sec = caught_signals.__val[0xc];
  stdout_stat.st_ctim.tv_nsec = caught_signals.__val[0xd];
  stdout_stat.__glibc_reserved[0] = caught_signals.__val[0xe];
  stdout_stat.__glibc_reserved[1] = caught_signals.__val[0xf];
  iVar41 = sigismember((sigset_t *)&caught_signals,10);
  if (iVar41 != 0) {
    stdout_stat.st_dev = (__dev_t)siginfo_handler;
    stdout_stat.__glibc_reserved[2]._0_4_ = 0;
    sigaction(10,(sigaction *)&stdout_stat,(sigaction *)0x0);
  }
  iVar41 = sigismember((sigset_t *)&caught_signals,2);
  if (iVar41 != 0) {
    stdout_stat.st_dev = (__dev_t)interrupt_handler;
    stdout_stat.__glibc_reserved[2]._0_4_ = 0xc0000000;
    sigaction(2,(sigaction *)&stdout_stat,(sigaction *)0x0);
  }
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit(maybe_close_stdout);
  iVar41 = getpagesize();
  page_size = (idx_t)iVar41;
  uVar43 = proper_name_lite("Stuart Kemp","Stuart Kemp");
  uVar44 = proper_name_lite("David MacKenzie","David MacKenzie");
  uVar45 = proper_name_lite("Paul Rubin","Paul Rubin");
  puVar73 = trans_table;
  pp_Var71 = &iread_fnc;
  parse_gnu_standard_options_only
            (argc,argv,&_LC7,"coreutils",_Version,1,usage,uVar45,uVar44,uVar43,0);
  auVar38 = __LC90;
  iVar37 = _UNK_00105cec;
  iVar36 = _UNK_00105ce8;
  iVar35 = _UNK_00105ce4;
  iVar34 = __LC89;
  iVar33 = _UNK_00105cdc;
  iVar32 = _UNK_00105cd8;
  iVar31 = _UNK_00105cd4;
  iVar30 = __LC88;
  iVar29 = _UNK_00105ccc;
  iVar28 = _UNK_00105cc8;
  iVar27 = _UNK_00105cc4;
  iVar26 = __LC87;
  iVar25 = _UNK_00105cbc;
  iVar24 = _UNK_00105cb8;
  iVar23 = _UNK_00105cb4;
  iVar41 = __LC86;
  close_stdout_required = false;
  pp_Var46 = (_func_ssize_t_int_char_ptr_idx_t **)trans_table;
  auVar80 = __LC75;
  do {
    pp_Var47 = pp_Var46 + 2;
    iVar108 = auVar80._0_4_;
    auVar109._0_4_ = iVar108 + iVar41;
    iVar110 = auVar80._4_4_;
    auVar109._4_4_ = iVar110 + iVar23;
    iVar111 = auVar80._8_4_;
    iVar112 = auVar80._12_4_;
    auVar109._8_4_ = iVar111 + iVar24;
    auVar109._12_4_ = iVar112 + iVar25;
    auVar96._0_12_ = auVar80._0_12_;
    auVar96._12_2_ = auVar80._6_2_;
    auVar96._14_2_ = (short)((uint)(iVar110 + iVar27) >> 0x10);
    auVar95._12_4_ = auVar96._12_4_;
    auVar95._0_10_ = auVar80._0_10_;
    uVar106 = (undefined2)(iVar110 + iVar27);
    auVar95._10_2_ = uVar106;
    auVar94._10_6_ = auVar95._10_6_;
    auVar94._0_8_ = auVar80._0_8_;
    auVar94._8_2_ = auVar80._4_2_;
    uVar105 = (undefined2)((uint)(iVar108 + iVar26) >> 0x10);
    auVar18._2_8_ = auVar94._8_8_;
    auVar18._0_2_ = uVar105;
    auVar18._10_6_ = 0;
    auVar104._0_2_ = auVar80._0_2_;
    auVar93._12_4_ = 0;
    auVar93._0_12_ = SUB1612(auVar18 << 0x30,4);
    auVar93 = auVar93 << 0x20;
    uVar107 = (undefined2)(iVar111 + iVar28);
    auVar100._0_12_ = auVar93._0_12_;
    auVar100._12_2_ = uVar105;
    auVar100._14_2_ = (short)((uint)(iVar111 + iVar28) >> 0x10);
    auVar99._12_4_ = auVar100._12_4_;
    auVar99._0_10_ = auVar93._0_10_;
    auVar99._10_2_ = auVar80._10_2_;
    auVar98._10_6_ = auVar99._10_6_;
    auVar98._0_8_ = auVar93._0_8_;
    auVar98._8_2_ = auVar80._2_2_;
    auVar19._2_8_ = auVar98._8_8_;
    auVar19._0_2_ = uVar107;
    auVar19._10_6_ = 0;
    auVar97._12_4_ = 0;
    auVar97._0_12_ = SUB1612(auVar19 << 0x30,4);
    auVar97 = auVar97 << 0x20;
    iVar78 = iVar108 + iVar30;
    iVar92 = iVar110 + iVar31;
    auVar79._0_8_ = CONCAT44(iVar92,iVar78);
    auVar79._8_4_ = iVar111 + iVar32;
    auVar103._0_12_ = auVar97._0_12_;
    auVar103._12_2_ = uVar107;
    auVar103._14_2_ = (short)(iVar112 + iVar29);
    auVar102._12_4_ = auVar103._12_4_;
    auVar102._0_10_ = auVar97._0_10_;
    auVar102._10_2_ = uVar106;
    auVar101._10_6_ = auVar102._10_6_;
    auVar101._0_8_ = auVar97._0_8_;
    auVar101._8_2_ = (short)(iVar108 + iVar26);
    auVar104._8_8_ = auVar101._8_8_;
    auVar104._6_2_ = auVar80._12_2_;
    auVar104._4_2_ = auVar80._8_2_;
    auVar104._2_2_ = auVar80._4_2_;
    auVar83._12_2_ = (short)((uint)iVar92 >> 0x10);
    auVar83._0_12_ = auVar79;
    auVar83._14_2_ = (short)((uint)(iVar110 + iVar35) >> 0x10);
    auVar82._12_4_ = auVar83._12_4_;
    auVar82._0_10_ = auVar79._0_10_;
    uVar106 = (undefined2)(iVar110 + iVar35);
    auVar82._10_2_ = uVar106;
    auVar81._10_6_ = auVar82._10_6_;
    auVar81._8_2_ = (short)iVar92;
    auVar81._0_8_ = auVar79._0_8_;
    uVar105 = (undefined2)((uint)(iVar108 + iVar34) >> 0x10);
    auVar20._2_8_ = auVar81._8_8_;
    auVar20._0_2_ = uVar105;
    auVar20._10_6_ = 0;
    auVar91._0_2_ = (undefined2)iVar78;
    auVar80._12_4_ = 0;
    auVar80._0_12_ = SUB1612(auVar20 << 0x30,4);
    auVar80 = auVar80 << 0x20;
    auVar104 = auVar104 & auVar38;
    uVar107 = (undefined2)(iVar111 + iVar36);
    auVar87._0_12_ = auVar80._0_12_;
    auVar87._12_2_ = uVar105;
    auVar87._14_2_ = (short)((uint)(iVar111 + iVar36) >> 0x10);
    auVar86._12_4_ = auVar87._12_4_;
    auVar86._0_10_ = auVar80._0_10_;
    auVar86._10_2_ = (short)((uint)auVar79._8_4_ >> 0x10);
    auVar85._10_6_ = auVar86._10_6_;
    auVar85._0_8_ = auVar80._0_8_;
    auVar85._8_2_ = (short)((uint)iVar78 >> 0x10);
    auVar21._2_8_ = auVar85._8_8_;
    auVar21._0_2_ = uVar107;
    auVar21._10_6_ = 0;
    auVar84._12_4_ = 0;
    auVar84._0_12_ = SUB1612(auVar21 << 0x30,4);
    auVar84 = auVar84 << 0x20;
    auVar90._0_12_ = auVar84._0_12_;
    auVar90._12_2_ = uVar107;
    auVar90._14_2_ = (short)(iVar112 + iVar37);
    auVar89._12_4_ = auVar90._12_4_;
    auVar89._0_10_ = auVar84._0_10_;
    auVar89._10_2_ = uVar106;
    auVar88._10_6_ = auVar89._10_6_;
    auVar88._0_8_ = auVar84._0_8_;
    auVar88._8_2_ = (short)(iVar108 + iVar34);
    auVar91._8_8_ = auVar88._8_8_;
    auVar91._6_2_ = (short)(iVar112 + iVar33);
    auVar91._4_2_ = (short)auVar79._8_4_;
    auVar91._2_2_ = (short)iVar92;
    auVar91 = auVar91 & auVar38;
    sVar2 = auVar104._0_2_;
    sVar3 = auVar104._2_2_;
    sVar4 = auVar104._4_2_;
    sVar5 = auVar104._6_2_;
    sVar6 = auVar104._8_2_;
    sVar7 = auVar104._10_2_;
    sVar8 = auVar104._12_2_;
    sVar9 = auVar104._14_2_;
    sVar10 = auVar91._0_2_;
    sVar11 = auVar91._2_2_;
    sVar12 = auVar91._4_2_;
    sVar13 = auVar91._6_2_;
    sVar14 = auVar91._8_2_;
    sVar15 = auVar91._10_2_;
    sVar16 = auVar91._12_2_;
    sVar17 = auVar91._14_2_;
    *(char *)pp_Var46 = (0 < sVar2) * (sVar2 < 0x100) * auVar104[0] - (0xff < sVar2);
    *(char *)((long)pp_Var46 + 1) = (0 < sVar3) * (sVar3 < 0x100) * auVar104[2] - (0xff < sVar3);
    *(char *)((long)pp_Var46 + 2) = (0 < sVar4) * (sVar4 < 0x100) * auVar104[4] - (0xff < sVar4);
    *(char *)((long)pp_Var46 + 3) = (0 < sVar5) * (sVar5 < 0x100) * auVar104[6] - (0xff < sVar5);
    *(char *)((long)pp_Var46 + 4) = (0 < sVar6) * (sVar6 < 0x100) * auVar104[8] - (0xff < sVar6);
    *(char *)((long)pp_Var46 + 5) = (0 < sVar7) * (sVar7 < 0x100) * auVar104[10] - (0xff < sVar7);
    *(char *)((long)pp_Var46 + 6) = (0 < sVar8) * (sVar8 < 0x100) * auVar104[0xc] - (0xff < sVar8);
    *(char *)((long)pp_Var46 + 7) = (0 < sVar9) * (sVar9 < 0x100) * auVar104[0xe] - (0xff < sVar9);
    *(char *)(pp_Var46 + 1) = (0 < sVar10) * (sVar10 < 0x100) * auVar91[0] - (0xff < sVar10);
    *(char *)((long)pp_Var46 + 9) = (0 < sVar11) * (sVar11 < 0x100) * auVar91[2] - (0xff < sVar11);
    *(char *)((long)pp_Var46 + 10) = (0 < sVar12) * (sVar12 < 0x100) * auVar91[4] - (0xff < sVar12);
    *(char *)((long)pp_Var46 + 0xb) = (0 < sVar13) * (sVar13 < 0x100) * auVar91[6] - (0xff < sVar13)
    ;
    *(char *)((long)pp_Var46 + 0xc) = (0 < sVar14) * (sVar14 < 0x100) * auVar91[8] - (0xff < sVar14)
    ;
    *(char *)((long)pp_Var46 + 0xd) =
         (0 < sVar15) * (sVar15 < 0x100) * auVar91[10] - (0xff < sVar15);
    *(char *)((long)pp_Var46 + 0xe) =
         (0 < sVar16) * (sVar16 < 0x100) * auVar91[0xc] - (0xff < sVar16);
    *(char *)((long)pp_Var46 + 0xf) =
         (0 < sVar17) * (sVar17 < 0x100) * auVar91[0xe] - (0xff < sVar17);
    pp_Var46 = pp_Var47;
    auVar80 = auVar109;
  } while (pp_Var47 != &iread_fnc);
  blocksize = 0;
  if (argc <= _optind) {
    local_f8 = (uint)local_f8._1_3_ << 8;
    local_100 = 0;
    cVar59 = '\0';
    cVar58 = '\0';
    uVar68 = 0;
    local_118 = 0x7fffffffffffffff;
    goto LAB_00104233;
  }
  ppcVar70 = argv + _optind;
  local_f8 = (uint)local_f8._1_3_ << 8;
  ppcVar53 = argv + (ulong)(uint)(argc - _optind) + (long)_optind;
  puVar65 = (uint *)&_LC92;
  local_118 = 0x7fffffffffffffff;
  local_108 = 0;
  local_100 = 0;
  local_f1 = '\0';
  local_f2 = '\0';
  local_f0 = (EVP_PKEY_CTX *)trans_table;
LAB_00103df0:
  pcVar66 = *ppcVar70;
  pcVar42 = strchr(pcVar66,0x3d);
  if (pcVar42 != (char *)0x0) {
    pcVar42 = pcVar42 + 1;
    lVar51 = 0;
    do {
      pcVar61 = (char *)((long)puVar65 + lVar51);
      cVar58 = pcVar66[lVar51];
      if (*pcVar61 == '\0') {
        pcVar61 = output_file;
        pcVar48 = pcVar42;
        if (cVar58 == '\0') goto LAB_00103e48;
        if (cVar58 == '=') goto LAB_00103e48;
        break;
      }
      lVar51 = lVar51 + 1;
    } while (*pcVar61 == cVar58);
    pcVar48 = "of";
    pcVar61 = pcVar66;
    do {
      cVar58 = *pcVar48;
      cVar59 = *pcVar61;
      if (cVar58 == '\0') {
        pcVar61 = pcVar42;
        pcVar48 = input_file;
        if (cVar59 == '\0') goto LAB_00103e48;
        if (cVar59 == '=') goto LAB_00103e48;
        break;
      }
      pcVar61 = pcVar61 + 1;
      pcVar48 = pcVar48 + 1;
    } while (cVar58 == cVar59);
    pcVar48 = "conv";
    pcVar61 = pcVar66;
    do {
      cVar58 = *pcVar48;
      cVar59 = *pcVar61;
      if (cVar58 == '\0') {
        if ((cVar59 == '=') || (cVar59 == '\0')) {
          uVar64 = parse_symbols(pcVar42,conversions,false,"invalid conversion");
          conversions_mask = conversions_mask | uVar64;
          pcVar61 = output_file;
          pcVar48 = input_file;
          goto LAB_00103e48;
        }
        break;
      }
      pcVar61 = pcVar61 + 1;
      pcVar48 = pcVar48 + 1;
    } while (cVar58 == cVar59);
    pcVar48 = "iflag";
    pcVar61 = pcVar66;
    do {
      cVar58 = *pcVar48;
      cVar59 = *pcVar61;
      if (cVar58 == '\0') {
        if ((cVar59 == '\0') || (cVar59 == '=')) {
          uVar64 = parse_symbols(pcVar42,flags,false,"invalid input flag");
          input_flags = input_flags | uVar64;
          pcVar61 = output_file;
          pcVar48 = input_file;
          goto LAB_00103e48;
        }
        break;
      }
      pcVar61 = pcVar61 + 1;
      pcVar48 = pcVar48 + 1;
    } while (cVar58 == cVar59);
    pcVar48 = "oflag";
    pcVar61 = pcVar66;
    do {
      cVar58 = *pcVar48;
      cVar59 = *pcVar61;
      if (cVar58 == '\0') {
        if ((cVar59 == '=') || (cVar59 == '\0')) {
          uVar64 = parse_symbols(pcVar42,flags,false,"invalid output flag");
          output_flags = output_flags | uVar64;
          pcVar61 = output_file;
          pcVar48 = input_file;
          goto LAB_00103e48;
        }
        break;
      }
      pcVar61 = pcVar61 + 1;
      pcVar48 = pcVar48 + 1;
    } while (cVar58 == cVar59);
    pcVar48 = "status";
    pcVar61 = pcVar66;
    do {
      cVar58 = *pcVar48;
      cVar59 = *pcVar61;
      if (cVar58 == '\0') {
        if ((cVar59 == '=') || (cVar59 == '\0')) {
          status_level = parse_symbols(pcVar42,statuses,true,"invalid status level");
          pcVar61 = output_file;
          pcVar48 = input_file;
          goto LAB_00103e48;
        }
        break;
      }
      pcVar61 = pcVar61 + 1;
      pcVar48 = pcVar48 + 1;
    } while (cVar58 == cVar59);
    local_120 = parse_integer(pcVar42,&invalid);
    in_R10 = strchr(pcVar42,0x42);
    pcVar61 = pcVar66;
    _Var40 = operand_matches(pcVar66,"ibs",'=');
    if (_Var40) {
      piVar49 = &input_blocksize;
    }
    else {
      _Var40 = operand_matches(pcVar61,"obs",'=');
      if (_Var40) {
        piVar49 = &output_blocksize;
      }
      else {
        _Var40 = operand_matches(pcVar61,"bs",'=');
        if (!_Var40) {
          _Var40 = operand_matches(pcVar61,"cbs",'=');
          if (_Var40) {
            piVar49 = &conversion_blocksize;
            lVar51 = 1;
            goto LAB_001042d5;
          }
          in_R10 = (char *)(ulong)(in_R10 != (char *)0x0);
          _Var40 = operand_matches(pcVar61,"skip",'=');
          if ((_Var40) || (_Var40 = operand_matches(pcVar61,"iseek",'='), _Var40)) {
            local_f2 = (char)in_R10;
            lVar51 = 0;
            piVar49 = (idx_t *)0x0;
            local_108 = local_120;
            goto LAB_001042d5;
          }
          _Var40 = operand_matches(pcVar66 + (*pcVar66 == 'o'),"seek",'=');
          if (_Var40) goto LAB_001054be;
          _Var40 = operand_matches(pcVar66,"count",'=');
          if (_Var40) {
            local_f1 = (char)in_R10;
            lVar51 = 0;
            piVar49 = (idx_t *)0x0;
            local_118 = local_120;
            goto LAB_001042d5;
          }
          goto LAB_001055b4;
        }
        piVar49 = &blocksize;
      }
    }
    if ((long)local_120 < 1) {
LAB_00104207:
      invalid = LONGINT_INVALID;
    }
    else if (local_120 == 0x7fffffffffffffff) {
      invalid = LONGINT_OVERFLOW;
    }
    else if (invalid == LONGINT_OK) {
      do {
        *piVar49 = local_120;
        pcVar61 = output_file;
        pcVar48 = input_file;
LAB_00103e48:
        do {
          input_file = pcVar48;
          output_file = pcVar61;
          ppcVar70 = ppcVar70 + 1;
          if (ppcVar70 != ppcVar53) goto LAB_00103df0;
          uVar68 = local_108;
          puVar73 = (uchar *)local_f0;
          cVar58 = local_f1;
          cVar59 = local_f2;
          if (blocksize == 0) {
LAB_00104233:
            conversions_mask = conversions_mask | 0x800;
            if (input_blocksize == 0) {
              input_blocksize = 0x200;
            }
            if (output_blocksize == 0) {
              output_blocksize = 0x200;
            }
          }
          else {
            output_blocksize = blocksize;
            input_blocksize = blocksize;
          }
          if (conversion_blocksize == 0) {
            conversions_mask = conversions_mask & 0xffffffe7;
          }
          iVar41 = conversions_mask;
          if ((input_flags & 0x101000U) != 0) {
            input_flags = input_flags | 0x101000;
          }
          if ((output_flags & 1U) != 0) {
            uVar43 = quote();
            uVar44 = dcgettext(0,"invalid output flag",5);
            diagnose(0,"%s: %s",uVar44,uVar43);
                    /* WARNING: Subroutine does not return */
            usage(1);
          }
          if (cVar59 != '\0') {
            input_flags = input_flags | 8;
          }
          if ((input_flags & 8U) == 0) {
            if (uVar68 != 0) {
              skip_records = uVar68;
            }
          }
          else if (uVar68 != 0) {
            skip_bytes = (long)uVar68 % input_blocksize;
            skip_records = (long)uVar68 / input_blocksize;
          }
          uVar64 = input_flags | 4;
          if (cVar58 == '\0') {
            uVar64 = input_flags;
          }
          if ((uVar64 & 4) == 0) {
            if (local_118 != 0x7fffffffffffffff) {
              max_records = local_118;
            }
          }
          else if (local_118 != 0x7fffffffffffffff) {
            max_records = (long)local_118 / input_blocksize;
            max_bytes = (long)local_118 % input_blocksize;
          }
          if ((char)local_f8 != '\0') {
            output_flags = output_flags | 0x10;
          }
          if ((output_flags & 0x10U) == 0) {
            if (local_100 != 0) {
              seek_records = local_100;
            }
          }
          else if (local_100 != 0) {
            seek_records = (long)local_100 / output_blocksize;
            seek_bytes = (long)local_100 % output_blocksize;
          }
          if ((conversions_mask & 0x800U) == 0) {
            if ((uVar64 & 1) == 0) {
              if ((skip_records == 0) && (0x7ffffffffffffffd < max_records - 1U)) {
                pcVar60 = iread;
                warn_partial_read = (_Bool)((byte)((uVar64 | output_flags) >> 0xe) & 1);
              }
              else {
                warn_partial_read = true;
                pcVar60 = iread;
              }
            }
            else {
              warn_partial_read = false;
              pcVar60 = iread_fullblock;
            }
          }
          else {
            warn_partial_read = false;
            pcVar60 = iread_fullblock;
            if ((uVar64 & 1) == 0) {
              pcVar60 = iread;
            }
          }
          input_flags = uVar64 & 0xfffffffe;
          iread_fnc = pcVar60;
          if (((conversions_mask & 7U) - 1 & conversions_mask & 7U) != 0) {
            pcVar42 = "cannot combine any two of {ascii,ebcdic,ibm}";
LAB_001055fc:
            do {
              uVar43 = dcgettext(0,pcVar42,5);
              error(1,0,uVar43);
LAB_00105614:
              pcVar42 = "cannot combine block and unblock";
            } while( true );
          }
          if (((conversions_mask & 0x18U) - 1 & conversions_mask & 0x18U) != 0) goto LAB_00105614;
          if (((conversions_mask & 0x60U) - 1 & conversions_mask & 0x60U) != 0) {
            pcVar42 = "cannot combine lcase and ucase";
            goto LAB_001055fc;
          }
          if (((conversions_mask & 0x3000U) - 1 & conversions_mask & 0x3000U) != 0) {
            pcVar42 = "cannot combine excl and nocreat";
            goto LAB_001055fc;
          }
          uVar72 = (uVar64 & 0x4002) - 1 & uVar64 & 0x4002 |
                   (output_flags & 0x4002U) - 1 & output_flags & 0x4002U;
          ppcVar70 = (char **)(ulong)uVar72;
          if (uVar72 != 0) {
            pcVar42 = "cannot combine direct and nocache";
            goto LAB_001055fc;
          }
          if ((uVar64 & 2) != 0) {
            i_nocache_eof = max_records == 0 && max_bytes == 0;
            i_nocache = true;
            input_flags = uVar64 & 0xfffffffc;
          }
          if ((output_flags & 2U) != 0) {
            o_nocache_eof = max_records == 0 && max_bytes == 0;
            o_nocache = true;
            output_flags = output_flags & 0xfffffffd;
          }
          if ((conversions_mask & 1U) != 0) {
            translate_charset("");
          }
          if ((iVar41 & 0x40U) == 0) {
            if ((iVar41 & 0x20U) != 0) {
              pp_Var50 = __ctype_tolower_loc();
              do {
                pEVar74 = (EVP_PKEY_CTX *)puVar73 + 1;
                *puVar73 = (uchar)SUB41((*pp_Var50)[*puVar73],0);
                puVar73 = (uchar *)pEVar74;
              } while ((EVP_PKEY_CTX *)pp_Var71 != pEVar74);
              goto LAB_0010446f;
            }
          }
          else {
            pp_Var50 = __ctype_toupper_loc();
            do {
              pEVar74 = (EVP_PKEY_CTX *)puVar73 + 1;
              *puVar73 = (uchar)SUB41((*pp_Var50)[*puVar73],0);
              puVar73 = (uchar *)pEVar74;
            } while ((EVP_PKEY_CTX *)pp_Var71 != pEVar74);
LAB_0010446f:
            translation_needed = true;
          }
          if ((iVar41 & 2U) == 0) {
            if ((iVar41 & 4U) != 0) {
              translate_charset("");
              newline_character = '%';
              space_character = '@';
            }
          }
          else {
            translate_charset("");
            newline_character = '%';
            space_character = '@';
          }
          iVar41 = input_flags;
          if (input_file == (char *)0x0) {
            input_file = (char *)dcgettext(0,"standard input",5);
            set_fd_flags(0,iVar41,input_file);
          }
          else {
            iVar41 = ifd_reopen(0,input_file,input_flags,0);
            if (iVar41 < 0) {
              puVar65 = (uint *)quotearg_style(4,input_file);
              uVar43 = dcgettext(0,"failed to open %s",5);
              piVar57 = __errno_location();
              error(1,*piVar57,uVar43,puVar65);
              goto LAB_0010568f;
            }
          }
          input_offset = lseek(0,0,1);
          input_seekable = (_Bool)((byte)~(byte)((ulong)input_offset >> 0x38) >> 7);
          if (input_offset < 0) {
            input_offset = 0;
          }
          puVar65 = (uint *)__errno_location();
          pcVar42 = (char *)output_blocksize;
          ppcVar53 = (char **)seek_records;
          iVar41 = output_flags;
          input_seek_errno = *puVar65;
          if (output_file == (char *)0x0) {
            output_file = (char *)dcgettext(0,"standard output",5);
            pEVar74 = (EVP_PKEY_CTX *)0x1;
            set_fd_flags(1,iVar41,output_file);
LAB_00104583:
            start_time = gethrxtime();
            oVar67 = input_offset;
            next_time = start_time + 1000000000;
            if (skip_records != 0 || skip_bytes != 0) {
              lVar69 = skip_records * input_blocksize;
              bVar76 = SEXT816(lVar69) == SEXT816(skip_records) * SEXT816(input_blocksize);
              lVar51 = lVar69;
              if (bVar76) {
                lVar51 = skip_bytes + lVar69;
              }
              bVar77 = SCARRY8(skip_bytes,lVar69);
              pEVar74 = (EVP_PKEY_CTX *)0x0;
              iVar52 = skip(0,input_file,skip_records,input_blocksize,&skip_bytes);
              if (((iVar52 != 0) ||
                  ((-1 < input_offset && ((!bVar76 || bVar77 || (input_offset - oVar67 != lVar51))))
                  )) && (status_level != 1)) {
                uVar43 = quotearg_n_style_colon(0,3,input_file);
                pcVar42 = (char *)dcgettext(0,"%s: cannot skip to specified offset",5);
                pEVar74 = (EVP_PKEY_CTX *)0x0;
                diagnose(0,pcVar42,uVar43);
              }
            }
            if (seek_records == 0 && seek_bytes == 0) goto LAB_001046a8;
            pEVar74 = (EVP_PKEY_CTX *)0x1;
            blocksize = seek_bytes;
            iVar52 = skip(1,output_file,seek_records,output_blocksize,&blocksize);
            if (iVar52 != 0) {
              pEVar54 = (EVP_PKEY_CTX *)memset(obuf,0,output_blocksize);
              iVar56 = extraout_RDX_01;
              goto LAB_00104e90;
            }
            if (blocksize == 0) goto LAB_001046a8;
            pEVar54 = (EVP_PKEY_CTX *)memset(obuf,0,blocksize);
            iVar56 = extraout_RDX_05;
            goto LAB_00104ebd;
          }
          uVar64 = (uint)((conversions_mask & 0x1000U) == 0) << 6 |
                   conversions_mask >> 6 & 0x80U | output_flags;
          if (seek_records == 0) {
            pp_Var71 = (_func_ssize_t_int_char_ptr_idx_t **)seek_bytes;
            if ((conversions_mask & 0x200U) == 0) {
              uVar64 = uVar64 | 0x200;
            }
LAB_00104550:
            pEVar74 = (EVP_PKEY_CTX *)0x1;
            pcVar42 = output_file;
            iVar41 = ifd_reopen(1,output_file,uVar64 | 1,0x1b6);
            if (iVar41 < 0) {
LAB_0010568f:
              uVar43 = quotearg_style(4,output_file);
              uVar44 = dcgettext(0,"failed to open %s",5);
              error(1,*puVar65,uVar44,uVar43);
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
LAB_0010456c:
            if (((seek_records != 0) && ((conversions_mask & 0x200U) == 0)) &&
               (pEVar74 = (EVP_PKEY_CTX *)pp_Var71,
               iVar41 = iftruncate((int)pp_Var71,(off_t)pcVar42), iVar41 != 0)) {
              pEVar74 = (EVP_PKEY_CTX *)0x1;
              uVar64 = *puVar65;
              iVar41 = ifstat(1,&stdout_stat);
              if (iVar41 == 0) {
                if (((stdout_stat.st_mode & 0xf000) - 0x4000 & 0xffffb000) == 0) {
                  uVar43 = quotearg_style(4,output_file);
                  pcVar42 = (char *)dcgettext(0,"failed to truncate to %jd bytes in output file %s",
                                              5);
                  pEVar74 = (EVP_PKEY_CTX *)(ulong)uVar64;
                  diagnose(uVar64,pcVar42,pp_Var71,uVar43);
                }
              }
              else {
                uVar43 = quotearg_style(4,output_file);
                pcVar42 = (char *)dcgettext(0,"cannot fstat %s",5);
                pEVar74 = (EVP_PKEY_CTX *)(ulong)*puVar65;
                diagnose(*puVar65,pcVar42,uVar43);
              }
            }
            goto LAB_00104583;
          }
          pp_Var71 = (_func_ssize_t_int_char_ptr_idx_t **)(seek_records * output_blocksize);
          if (((SEXT816((long)pp_Var71) == SEXT816(seek_records) * SEXT816(output_blocksize)) &&
              (bVar76 = SCARRY8((long)pp_Var71,seek_bytes),
              pp_Var71 = (_func_ssize_t_int_char_ptr_idx_t **)((long)pp_Var71 + seek_bytes), !bVar76
              )) || ((conversions_mask & 0x200U) != 0)) {
            pEVar74 = (EVP_PKEY_CTX *)0x1;
            iVar41 = ifd_reopen(1,output_file,uVar64 | 2,0x1b6);
            pcVar42 = output_file;
            if (iVar41 < 0) goto LAB_00104550;
            goto LAB_0010456c;
          }
          uVar43 = dcgettext(0,
                             "offset too large: cannot truncate to a length of seek=%jd (%td-byte) blocks"
                             ,5);
          error(1,0,uVar43,ppcVar53,pcVar42);
LAB_001054be:
          local_100 = local_120;
          local_f8 = CONCAT31(local_f8._1_3_,(char)in_R10);
          lVar51 = 0;
          piVar49 = (idx_t *)0x0;
LAB_001042d5:
          if ((long)local_120 < lVar51) goto LAB_00104207;
          if (invalid != LONGINT_OK) goto LAB_0010555b;
          pcVar61 = output_file;
          pcVar48 = input_file;
        } while ((ulong *)piVar49 == (ulong *)0x0);
      } while( true );
    }
LAB_0010555b:
    sVar39 = invalid;
    puVar65 = (uint *)quotearg_style(4,pcVar42);
    uVar43 = dcgettext(0,"invalid number",5);
    uVar44 = 0;
    if (sVar39 == LONGINT_OVERFLOW) {
      uVar44 = 0x4b;
    }
    error(1,uVar44,"%s: %s",uVar43,puVar65);
LAB_001055a4:
    input_offset = -1;
LAB_001047a2:
    if (i_nocache != false) {
      invalidate_cache(0,(off_t)ppcVar53);
    }
    do {
      pEVar74 = (EVP_PKEY_CTX *)ibuf;
      uVar64 = conversions_mask;
      pcVar42 = obuf;
      ppcVar75 = ppcVar53;
      if ((long)ppcVar53 < input_blocksize) {
        r_partial = r_partial + 1;
        ppcVar70 = ppcVar53;
        if (((conversions_mask & 0x400U) != 0) &&
           (ppcVar75 = (char **)input_blocksize, (conversions_mask & 0x100U) == 0)) {
          memset(ibuf + (long)ppcVar53,(uint)((conversions_mask & 0x18U) != 0) << 5,
                 input_blocksize - (long)ppcVar53);
          ppcVar75 = (char **)input_blocksize;
          pcVar42 = obuf;
          uVar64 = conversions_mask;
        }
      }
      else {
        r_full = r_full + 1;
        ppcVar70 = (char **)0x0;
      }
      obuf = pcVar42;
      conversions_mask = uVar64;
      if ((EVP_PKEY_CTX *)pcVar42 == pEVar74) {
        ppcVar53 = (char **)iwrite((int)pEVar74,(char *)ppcVar75,input_blocksize);
        w_bytes = w_bytes + (long)ppcVar53;
        if (ppcVar53 != ppcVar75) goto LAB_00104db7;
        if ((char **)input_blocksize == ppcVar75) {
          w_full = w_full + 1;
        }
        else {
          w_partial = w_partial + 1;
        }
      }
      else {
        if (translation_needed == false) {
          if (((uVar64 & 0x80) != 0) && (ppcVar75 != (char **)0x0)) {
LAB_00104b2a:
            uVar64 = conversions_mask;
            uVar72 = 0xffffffff;
            ppcVar53 = ppcVar75;
            if (((byte)ppcVar75 & 1) != (byte)~(byte)(local_120 >> 0x18) >> 7) {
              ppcVar53 = (char **)((long)ppcVar75 + -1);
              uVar72 = (uint)(byte)((char *)pEVar74)[(long)ppcVar53];
              ppcVar75 = ppcVar53;
            }
            for (; 1 < (long)ppcVar53; ppcVar53 = (char **)((long)ppcVar53 + -2)) {
              ((char *)pEVar74)[(long)ppcVar53] = ((char *)pEVar74 + -2)[(long)ppcVar53];
            }
            if ((int)local_120 < 0) {
              local_120 = (ulong)uVar72;
              pEVar74 = (EVP_PKEY_CTX *)((char *)pEVar74 + 1);
            }
            else {
              cVar58 = (char)local_120;
              ppcVar75 = (char **)((long)ppcVar75 + 1);
              local_120 = (ulong)uVar72;
              ((char *)pEVar74)[1] = cVar58;
            }
          }
        }
        else {
          pbVar62 = (byte *)pEVar74;
          if (ppcVar75 != (char **)0x0) {
            do {
              pbVar63 = pbVar62 + 1;
              *pbVar62 = trans_table[*pbVar62];
              pbVar62 = pbVar63;
            } while (pbVar63 != (byte *)((char *)pEVar74 + (long)ppcVar75));
            uVar64 = conversions_mask;
            if ((conversions_mask & 0x80U) != 0) goto LAB_00104b2a;
          }
        }
        if ((uVar64 & 8) == 0) {
          pEVar54 = pEVar74;
          if ((uVar64 & 0x10) == 0) {
            do {
              ppcVar53 = (char **)(output_blocksize - oc);
              if ((long)ppcVar75 < (long)(output_blocksize - oc)) {
                ppcVar53 = ppcVar75;
              }
              pEVar74 = (EVP_PKEY_CTX *)(pcVar42 + oc);
              pcVar42 = (char *)(oc + (long)ppcVar53);
              ppcVar75 = (char **)((long)ppcVar75 - (long)ppcVar53);
              memcpy(pEVar74,pEVar54,(size_t)ppcVar53);
              oc = (idx_t)pcVar42;
              if (output_blocksize <= (long)pcVar42) {
                write_output();
              }
              pcVar42 = obuf;
              pEVar54 = pEVar54 + (long)ppcVar53;
            } while (ppcVar75 != (char **)0x0);
          }
          else {
            copy_with_unblock((char *)pEVar74,(idx_t)ppcVar75);
          }
        }
        else {
          copy_with_block((char *)pEVar74,(idx_t)ppcVar75);
        }
      }
joined_r0x001046f7:
      do {
        if ((status_level == 4) &&
           (pEVar54 = (EVP_PKEY_CTX *)gethrxtime(), next_time <= (long)pEVar54)) {
          print_xfer_stats((xtime_t)pEVar54);
          next_time = next_time + 1000000000;
          pEVar74 = pEVar54;
        }
        iVar56 = max_bytes;
        iVar52 = max_records;
        lVar51 = r_full + r_partial;
        pcVar42 = (char *)((max_records + 1) - (ulong)(max_bytes == 0));
        if ((long)pcVar42 <= lVar51) {
LAB_00104c5f:
          uVar64 = conversions_mask;
          if (-1 < (int)local_120) {
            blocksize = CONCAT71(blocksize._1_7_,(char)local_120);
            if ((conversions_mask & 8U) == 0) {
              if ((conversions_mask & 0x10U) == 0) {
                pcVar42 = (char *)(oc + 1);
                obuf[oc] = (char)local_120;
                oc = (idx_t)pcVar42;
                if (output_blocksize <= (long)pcVar42) {
                  write_output();
                  pcVar42 = extraout_RDX_06;
                  uVar64 = conversions_mask;
                }
              }
              else {
                pEVar74 = (EVP_PKEY_CTX *)&blocksize;
                copy_with_unblock((char *)pEVar74,1);
                pcVar42 = extraout_RDX_07;
                uVar64 = conversions_mask;
              }
            }
            else {
              pEVar74 = (EVP_PKEY_CTX *)&blocksize;
              copy_with_block((char *)pEVar74,1);
              pcVar42 = extraout_RDX_00;
              uVar64 = conversions_mask;
            }
          }
          if (((uVar64 & 8) == 0) || (col < 1)) goto LAB_00104c98;
          iVar56 = col;
          if (col < conversion_blocksize) goto LAB_001050c1;
          goto LAB_00105057;
        }
        pcVar42 = ibuf;
        if ((~(byte)((uint)conversions_mask >> 8) & 5) == 0) {
          pcVar42 = (char *)memset(ibuf,(uint)((conversions_mask & 0x18U) != 0) << 5,input_blocksize
                                  );
        }
        if (lVar51 < iVar52) {
          pEVar74 = (EVP_PKEY_CTX *)0x0;
          ppcVar53 = (char **)(*iread_fnc)(0,pcVar42,input_blocksize);
        }
        else {
          pEVar74 = (EVP_PKEY_CTX *)0x0;
          ppcVar53 = (char **)(*iread_fnc)(0,pcVar42,iVar56);
        }
        if (0 < (long)ppcVar53) {
          if ((input_offset < 0) ||
             (bVar76 = SCARRY8(input_offset,(long)ppcVar53),
             input_offset = input_offset + (long)ppcVar53, !bVar76)) goto LAB_001047a2;
          goto LAB_001055a4;
        }
        if (ppcVar53 == (char **)0x0) {
          i_nocache_eof = (_Bool)(i_nocache_eof | i_nocache);
          if (o_nocache != false) {
            local_118._0_4_ = (uint)((conversions_mask & 0x200U) == 0);
          }
          pcVar42 = (char *)(ulong)(o_nocache_eof | (uint)local_118);
          o_nocache_eof = (_Bool)((byte)(o_nocache_eof | (uint)local_118) & 1);
          goto LAB_00104c5f;
        }
        if (((conversions_mask & 0x100U) == 0) || (status_level != 1)) {
          uVar43 = quotearg_style(4,input_file);
          pcVar42 = (char *)dcgettext(0,"error reading %s",5);
          pEVar74 = (EVP_PKEY_CTX *)(ulong)*puVar65;
          diagnose(*puVar65,pcVar42,uVar43);
          if ((conversions_mask & 0x100U) == 0) {
            local_f8 = 1;
            pcVar42 = extraout_RDX;
            goto LAB_00104c5f;
          }
        }
        print_stats();
        pEVar74 = (EVP_PKEY_CTX *)0x0;
        lVar51 = input_blocksize - (long)ppcVar70;
        invalidate_cache(0,lVar51);
        if (input_seekable == false) {
          if (input_seek_errno == 0x1d) goto LAB_00104990;
          *puVar65 = input_seek_errno;
          goto LAB_0010493e;
        }
        if (input_offset < 0) {
LAB_00104a98:
          uVar43 = quotearg_style(4,input_file);
          pcVar42 = (char *)dcgettext(0,"offset overflow while reading file %s",5);
          pEVar74 = (EVP_PKEY_CTX *)0x0;
          diagnose(0,pcVar42,uVar43);
LAB_00104977:
          input_seekable = false;
          input_seek_errno = 0x1d;
          local_f8 = 1;
        }
        else {
          lVar69 = input_offset + lVar51;
          if (SCARRY8(input_offset,lVar51)) {
            input_offset = -1;
            goto LAB_00104a98;
          }
          input_offset = lVar69;
          if (lVar69 < 0) goto LAB_00104a98;
          pEVar74 = (EVP_PKEY_CTX *)0x0;
          _Var55 = lseek(0,0,1);
          if (_Var55 < 0) {
LAB_0010493e:
            uVar43 = quotearg_n_style_colon(0,3,input_file);
            pcVar42 = (char *)dcgettext(0,"%s: cannot seek",5);
            pEVar74 = (EVP_PKEY_CTX *)(ulong)*puVar65;
            diagnose(*puVar65,pcVar42,uVar43);
            goto LAB_00104977;
          }
          if (lVar69 != _Var55) {
            lVar69 = lVar69 - _Var55;
            if (((lVar69 < 0) || (lVar51 < lVar69)) && (status_level != 1)) {
              pcVar42 = (char *)dcgettext(0,"warning: invalid file offset after failed read",5);
              diagnose(0,pcVar42);
            }
            pEVar74 = (EVP_PKEY_CTX *)0x0;
            _Var55 = lseek(0,lVar69,1);
            if (_Var55 < 0) {
              if (*puVar65 == 0) {
                pcVar42 = (char *)dcgettext(0,"cannot work around kernel bug after all",5);
                diagnose(0,pcVar42);
              }
              goto LAB_0010493e;
            }
          }
        }
LAB_00104990:
      } while (((conversions_mask & 0x400U) == 0) || (ppcVar70 != (char **)0x0));
      ppcVar53 = (char **)0x0;
    } while( true );
  }
LAB_001055b4:
  uVar43 = quotearg_style(4,pcVar66);
  pcVar42 = (char *)dcgettext(0,"unrecognized operand %s",5);
  diagnose(0,pcVar42,uVar43);
                    /* WARNING: Subroutine does not return */
  usage(1);
  while (iVar52 = iVar52 + -1, iVar56 = extraout_RDX_02, pEVar54 = (EVP_PKEY_CTX *)obuf, iVar52 != 0
        ) {
LAB_00104e90:
    pEVar74 = pEVar54;
    iVar22 = output_blocksize;
    iVar56 = iwrite((int)pEVar74,(char *)output_blocksize,iVar56);
    if (iVar56 != iVar22) goto LAB_00104ed3;
  }
  if (blocksize != 0) {
LAB_00104ebd:
    iVar22 = blocksize;
    iVar56 = iwrite((int)pEVar54,(char *)blocksize,iVar56);
    pEVar74 = pEVar54;
    if (iVar56 != iVar22) {
LAB_00104ed3:
      uVar43 = quotearg_style(4,output_file);
      pcVar42 = (char *)dcgettext(0,"writing to %s",5);
      uVar64 = *puVar65;
      diagnose(uVar64,pcVar42,uVar43);
                    /* WARNING: Subroutine does not return */
      quit(uVar64);
    }
  }
LAB_001046a8:
  local_f8 = 0;
  if (max_records != 0 || max_bytes != 0) {
    if (ibuf == (char *)0x0) {
      alloc_ibuf();
    }
    alloc_obuf();
    local_f8 = 0;
    ppcVar70 = (char **)0x0;
    local_120 = 0xffffffff;
    local_118 = 0;
    goto joined_r0x001046f7;
  }
  goto LAB_00104ce1;
LAB_001050c1:
  do {
    lVar51 = oc + 1;
    obuf[oc] = space_character;
    pcVar42 = (char *)oc;
    oc = lVar51;
    if (output_blocksize <= lVar51) {
      write_output();
      pcVar42 = extraout_RDX_04;
    }
    iVar56 = iVar56 + 1;
  } while (iVar56 < conversion_blocksize);
LAB_00104c98:
  pcVar66 = (char *)oc;
  uVar64 = conversions_mask;
  if (col != 0) {
LAB_00105057:
    pcVar61 = obuf;
    pcVar66 = (char *)oc;
    if ((uVar64 & 0x10) != 0) {
      pcVar66 = (char *)(oc + 1);
      pcVar42 = obuf + oc;
      oc = (idx_t)pcVar66;
      *pcVar42 = newline_character;
      pcVar42 = pcVar61;
      if (output_blocksize <= (long)pcVar66) {
        write_output();
        pcVar42 = extraout_RDX_03;
        pcVar66 = (char *)oc;
      }
    }
  }
  if (pcVar66 == (char *)0x0) {
LAB_00104cb6:
    if (final_op_was_seek != false) {
      pEVar74 = (EVP_PKEY_CTX *)0x1;
      iVar41 = ifstat(1,&stdout_stat);
      if (iVar41 != 0) {
        uVar43 = quotearg_style(4,output_file);
        pcVar42 = "cannot fstat %s";
        goto LAB_00104dd7;
      }
      if ((stdout_stat.st_mode & 0xf000) == 0x8000) {
        oVar67 = 0;
        pEVar74 = (EVP_PKEY_CTX *)0x1;
        pEVar54 = (EVP_PKEY_CTX *)lseek(1,0,1);
        if (((-1 < (long)pEVar54) && (stdout_stat.st_size < (long)pEVar54)) &&
           (pEVar74 = pEVar54, iVar41 = iftruncate((int)pEVar54,oVar67), iVar41 != 0)) {
          uVar43 = quotearg_style(4,output_file);
          pcVar42 = (char *)dcgettext(0,"failed to truncate to %jd bytes in output file %s",5);
          pEVar74 = (EVP_PKEY_CTX *)(ulong)*puVar65;
          diagnose(*puVar65,pcVar42,pEVar54,uVar43);
          goto LAB_00104dee;
        }
      }
    }
    if ((((conversions_mask & 0xc000U) != 0) && (status_level == 4)) &&
       ((-1 < reported_w_bytes && (reported_w_bytes < w_bytes)))) {
      pEVar74 = (EVP_PKEY_CTX *)0x0;
      print_xfer_stats(0);
    }
  }
  else {
    pEVar74 = (EVP_PKEY_CTX *)obuf;
    iVar56 = iwrite((int)obuf,pcVar66,(idx_t)pcVar42);
    w_bytes = w_bytes + iVar56;
    if (iVar56 != 0) {
      w_partial = w_partial + 1;
    }
    if (iVar56 == oc) goto LAB_00104cb6;
LAB_00104db7:
    uVar43 = quotearg_style(4,output_file);
    pcVar42 = "error writing %s";
LAB_00104dd7:
    pcVar42 = (char *)dcgettext(0,pcVar42,5);
    pEVar74 = (EVP_PKEY_CTX *)(ulong)*puVar65;
    diagnose(*puVar65,pcVar42,uVar43);
LAB_00104dee:
    local_f8 = 1;
  }
LAB_00104ce1:
  iVar41 = synchronize_output();
  if (iVar41 == 0) {
    iVar41 = local_f8;
  }
  if (max_records == 0 && max_bytes == 0) {
    if (i_nocache != false) {
      pEVar74 = (EVP_PKEY_CTX *)0x0;
      _Var40 = invalidate_cache(0,0);
      if (!_Var40) {
        uVar43 = quotearg_n_style_colon(0,3,input_file);
        pcVar42 = (char *)dcgettext(0,"failed to discard cache for: %s",5);
        pEVar74 = (EVP_PKEY_CTX *)(ulong)*puVar65;
        iVar41 = 1;
        diagnose(*puVar65,pcVar42,uVar43);
      }
    }
    if (o_nocache != false) {
      pEVar74 = (EVP_PKEY_CTX *)0x1;
      _Var40 = invalidate_cache(1,0);
      if (!_Var40) {
        uVar43 = quotearg_n_style_colon(0,3,output_file);
        pcVar42 = (char *)dcgettext(0,"failed to discard cache for: %s",5);
        pEVar74 = (EVP_PKEY_CTX *)(ulong)*puVar65;
        iVar41 = 1;
        diagnose(*puVar65,pcVar42,uVar43);
      }
    }
  }
  else {
    if ((i_nocache != false) || (i_nocache_eof != false)) {
      pEVar74 = (EVP_PKEY_CTX *)0x0;
      invalidate_cache(0,0);
    }
    if ((o_nocache != false) || (o_nocache_eof != false)) {
      pEVar74 = (EVP_PKEY_CTX *)0x1;
      invalidate_cache(1,0);
    }
  }
  process_signals();
  cleanup(pEVar74);
  print_stats();
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar41;
}


