
void interrupt_handler(undefined4 param_1)

{
  interrupt_signal = param_1;
  return;
}



void siginfo_handler(void)

{
  info_signal_count = info_signal_count + 1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void print_xfer_stats(long param_1)

{
  int iVar1;
  char *__s;
  char *pcVar2;
  char *__s_00;
  size_t sVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  char *pcVar7;
  long in_FS_OFFSET;
  undefined1 local_808 [654];
  undefined1 local_57a [654];
  char local_2ec [660];
  char local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar6 = param_1;
  if (param_1 == 0) {
    lVar6 = gethrxtime();
  }
  __s = (char *)human_readable(w_bytes,local_808,0x1d1,1,1);
  pcVar2 = (char *)human_readable(w_bytes,local_57a,0x1f1,1,1);
  if (start_time < lVar6) {
    __s_00 = (char *)human_readable(w_bytes,local_2ec,0x1d1,1000000000);
    sVar3 = strlen(__s_00);
    *(undefined2 *)(__s_00 + sVar3) = slash_s_5;
    __s_00[sVar3 + 2] = DAT_00106052;
  }
  else {
    uVar5 = dcgettext(0,"Infinity",5);
    __s_00 = local_2ec;
    __snprintf_chk(__s_00,0x28e,2,0x28e,"%s B/s",uVar5);
  }
  pcVar7 = "%g s";
  if (param_1 != 0) {
    pcVar7 = _stderr->_IO_write_ptr;
    if (pcVar7 < _stderr->_IO_write_end) {
      _stderr->_IO_write_ptr = pcVar7 + 1;
      *pcVar7 = '\r';
    }
    else {
      __overflow(_stderr,0xd);
    }
    pcVar7 = "%.0f s";
  }
  __snprintf_chk(local_58,0x18,2,0x18,pcVar7);
  sVar3 = strlen(__s);
  uVar5 = w_bytes;
  if (__s[sVar3 - 2] == ' ') {
    uVar4 = dcngettext(0,"%jd byte copied, %s, %s","%jd bytes copied, %s, %s",w_bytes,5);
    iVar1 = __fprintf_chk(_stderr,2,uVar4,uVar5,local_58,__s_00);
  }
  else {
    sVar3 = strlen(pcVar2);
    uVar5 = w_bytes;
    if (pcVar2[sVar3 - 2] == ' ') {
      uVar4 = dcgettext(0,"%jd bytes (%s) copied, %s, %s",5);
      pcVar2 = local_58;
    }
    else {
      uVar4 = dcgettext(0,"%jd bytes (%s, %s) copied, %s, %s",5);
      __s_00 = local_58;
    }
    iVar1 = __fprintf_chk(_stderr,2,uVar4,uVar5,__s,pcVar2,__s_00);
  }
  if (param_1 == 0) {
    pcVar2 = _stderr->_IO_write_ptr;
    if (pcVar2 < _stderr->_IO_write_end) {
      _stderr->_IO_write_ptr = pcVar2 + 1;
      *pcVar2 = '\n';
      iVar1 = progress_len;
    }
    else {
      __overflow(_stderr,10);
      iVar1 = progress_len;
    }
  }
  else if ((-1 < iVar1) && (iVar1 < progress_len)) {
    __fprintf_chk(_stderr,2,&_LC11,progress_len - iVar1,&_LC10);
  }
  progress_len = iVar1;
  reported_w_bytes = w_bytes;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 print_stats(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 in_RAX;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (status_level == 1) {
    return in_RAX;
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
  uVar7 = w_partial;
  uVar4 = w_full;
  uVar3 = r_partial;
  uVar6 = r_full;
  uVar5 = dcgettext(0,"%jd+%jd records in\n%jd+%jd records out\n",5);
  __fprintf_chk(_stderr,2,uVar5,uVar6,uVar3,uVar4);
  lVar2 = r_truncate;
  if (r_truncate != 0) {
    uVar6 = dcngettext(0,"%jd truncated record\n","%jd truncated records\n",r_truncate,5);
    uVar7 = __fprintf_chk(_stderr,2,uVar6,lVar2);
  }
  if (status_level != 2) {
    uVar6 = print_xfer_stats(0);
    return uVar6;
  }
  return uVar7;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void diagnose(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined4 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  char *pcVar1;
  char in_AL;
  long in_FS_OFFSET;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined1 *puStack_e0;
  undefined1 *puStack_d8;
  long local_d0;
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
    local_98 = param_1;
    local_88 = param_2;
    local_78 = param_3;
    local_68 = param_4;
    local_58 = param_5;
    local_48 = param_6;
    local_38 = param_7;
    local_28 = param_8;
  }
  local_d0 = *(long *)(in_FS_OFFSET + 0x28);
  local_b8 = param_11;
  local_b0 = param_12;
  local_a8 = param_13;
  local_a0 = param_14;
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
    diagnose_cold();
    return;
  }
  puStack_e0 = &stack0x00000008;
  puStack_d8 = auStack_c8;
  uStack_e8 = 0x10;
  uStack_e4 = 0x30;
  verror(0,param_9,param_10,&uStack_e8);
  if (local_d0 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



long parse_integer(char *param_1,uint *param_2)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long in_FS_OFFSET;
  bool bVar9;
  uint local_44;
  long local_40;
  char *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  uVar3 = xstrtoumax(param_1,&local_38,10,&local_40,suffixes_4);
  if ((uVar3 & 0xfffffffe) == 2) {
    cVar2 = *local_38;
    if ((cVar2 == 'B') && (param_1 < local_38)) {
      if (local_38[-1] != 'B') {
        pcVar1 = local_38 + 1;
        cVar2 = local_38[1];
        local_38 = pcVar1;
        if (cVar2 != '\0') goto LAB_00100650;
        uVar3 = uVar3 & 0xfffffffd;
      }
    }
    else {
LAB_00100650:
      if (cVar2 == 'x') {
        lVar8 = 0;
        lVar4 = parse_integer(local_38 + 1,&local_44);
        if (1 < local_44) goto LAB_001005ec;
        lVar8 = lVar4 * local_40;
        if (local_40 < 0) {
          if ((lVar4 != 0) && ((lVar4 != -1 || (local_40 != lVar8)))) goto LAB_001006e8;
        }
        else if (SEXT816(lVar8) != SEXT816(lVar4) * SEXT816(local_40)) {
LAB_001006e8:
          lVar8 = 0x7fffffffffffffff;
          local_44 = 1;
          goto LAB_001005ec;
        }
        if (lVar8 == 0) {
          if ((*param_1 == '0') && (param_1[1] == 'x')) {
            uVar5 = quote_n(1,&_LC16);
            uVar6 = quote_n(0,&_LC17);
            uVar7 = dcgettext(0,"warning: %s is a zero multiplier; use %s if that is intended",5);
            diagnose(0,uVar7,uVar6,uVar5);
            local_44 = 0;
          }
          else {
            local_44 = 0;
          }
        }
        else {
          bVar9 = (local_44 | uVar3) != 2;
          if (bVar9) {
            lVar8 = 0x7fffffffffffffff;
          }
          local_44 = (uint)bVar9;
        }
        goto LAB_001005ec;
      }
    }
  }
  local_44 = uVar3;
  lVar8 = local_40;
  if (local_40 < 0) {
    lVar8 = 0x7fffffffffffffff;
    local_44 = 1;
  }
LAB_001005ec:
  *param_2 = local_44;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar8;
}



bool invalidate_cache(int param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long lVar4;
  long __len;
  long lVar5;
  char cVar6;
  
  plVar2 = &o_pending_0;
  cVar6 = o_nocache_eof;
  if (param_1 == 0) {
    plVar2 = &i_pending_1;
    cVar6 = i_nocache_eof;
  }
  __len = *plVar2;
  if (param_2 == 0) {
    lVar5 = 0;
    if ((__len == 0) && (cVar6 == '\0')) {
      return true;
    }
  }
  else {
    lVar4 = __len + param_2;
    if (SCARRY8(__len,param_2)) {
      *plVar2 = 0x3ffff;
      lVar5 = 0x3ffff;
      __len = 0x7ffffffffffc0000;
    }
    else {
      lVar5 = lVar4 % 0x40000;
      *plVar2 = lVar5;
      if (lVar4 <= lVar5) {
        return true;
      }
      __len = lVar4 - lVar5;
    }
  }
  if (param_1 == 0) {
    lVar4 = input_offset;
    if (input_seekable == '\0') {
      piVar3 = __errno_location();
      *piVar3 = 0x1d;
      return false;
    }
LAB_0010080d:
    if (lVar4 < 0) {
      return false;
    }
    if (param_2 != 0) goto LAB_0010087f;
LAB_0010081b:
    if (__len == 0) goto LAB_0010087f;
    lVar4 = lVar4 - __len;
    if (cVar6 == '\0') {
      lVar4 = lVar4 - lVar5;
      goto LAB_0010082b;
    }
  }
  else {
    if (output_offset_2 == -1) {
      return false;
    }
    if (output_offset_2 < 0) {
      lVar4 = lseek(1,0,1);
      output_offset_2 = lVar4;
      goto LAB_0010080d;
    }
    lVar4 = output_offset_2;
    if (param_2 == 0) goto LAB_0010081b;
    lVar4 = output_offset_2 + lVar5 + __len;
    output_offset_2 = lVar4;
    if (lVar4 < 0) {
      return false;
    }
LAB_0010087f:
    lVar4 = (lVar4 - __len) - lVar5;
    if (__len != 0) goto LAB_0010082b;
  }
  __len = 0;
  lVar4 = lVar4 - lVar4 % page_size;
LAB_0010082b:
  iVar1 = posix_fadvise(param_1,lVar4,__len,4);
  piVar3 = __errno_location();
  *piVar3 = iVar1;
  return iVar1 == 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void maybe_close_stdout(void)

{
  int iVar1;
  
  if (close_stdout_required != '\0') {
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



void alloc_ibuf_part_0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 auStack_2b8 [664];
  long local_20;
  
  lVar1 = input_blocksize;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  ibuf = aligned_alloc(page_size,(ulong)(conversions_mask >> 7 & 1) + input_blocksize);
  if (ibuf == 0) {
    uVar2 = human_readable(lVar1,auStack_2b8,0x1f1,1,1);
    lVar1 = input_blocksize;
    uVar3 = dcgettext(0,"memory exhausted by input buffer of size %td bytes (%s)",5);
    error(1,0,uVar3,lVar1,uVar2);
  }
  else if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void alloc_obuf_part_0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 auStack_2b8 [664];
  long local_20;
  
  uVar1 = output_blocksize;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  obuf = aligned_alloc(page_size,output_blocksize);
  if (obuf == 0) {
    uVar2 = human_readable(uVar1,auStack_2b8,0x1f1,1,1);
    uVar1 = output_blocksize;
    uVar3 = dcgettext(0,"memory exhausted by output buffer of size %td bytes (%s)",5);
    error(1,0,uVar3,uVar1,uVar2);
  }
  else if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void alloc_obuf(void)

{
  if (obuf != 0) {
    return;
  }
  if ((conversions_mask._1_1_ & 8) == 0) {
    if (ibuf != 0) {
      obuf = ibuf;
      return;
    }
    alloc_ibuf_part_0();
    obuf = ibuf;
    return;
  }
  alloc_obuf_part_0();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void usage(int param_1)

{
  FILE *pFVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined1 **ppuVar6;
  undefined1 *puVar7;
  long in_FS_OFFSET;
  undefined1 *local_a8;
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
  ppuVar6 = &local_a8;
  local_30 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(_stderr,2,uVar3,uVar5);
    goto LAB_00100b59;
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
  __printf_chk(2,uVar5,&_LC44);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pcVar4 = "[";
  local_a8 = &_LC21;
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
    if (((*pcVar4 == 'd') && (pcVar4[1] == 'd')) && (pcVar4[2] == '\0')) break;
    pcVar4 = *(char **)((long)ppuVar6 + 0x10);
    ppuVar6 = (undefined1 **)((long)ppuVar6 + 0x10);
  } while (pcVar4 != (char *)0x0);
  puVar7 = *(undefined1 **)((long)ppuVar6 + 8);
  if (puVar7 == (undefined1 *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    puVar7 = &_LC22;
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) goto LAB_00100f7c;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC22);
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
LAB_00100f7c:
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
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC22);
    if (puVar7 == &_LC22) {
      pcVar4 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,puVar7,pcVar4);
LAB_00100b59:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



uint parse_symbols_constprop_1(char *param_1,char *param_2,undefined8 param_3)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  size_t sVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  char *pcVar8;
  uint uVar9;
  
  uVar9 = 0;
LAB_001010d6:
  pcVar3 = strchr(param_1,0x2c);
  pcVar8 = param_2;
  do {
    lVar7 = 0;
    do {
      pcVar1 = pcVar8 + lVar7;
      cVar2 = param_1[lVar7];
      if (*pcVar1 == '\0') {
        if (((cVar2 == ',') || (cVar2 == '\0')) && (*(uint *)(pcVar8 + 0xc) != 0)) {
          uVar9 = uVar9 | *(uint *)(pcVar8 + 0xc);
          if (pcVar3 == (char *)0x0) {
            return uVar9;
          }
          param_1 = pcVar3 + 1;
          goto LAB_001010d6;
        }
        break;
      }
      lVar7 = lVar7 + 1;
    } while (*pcVar1 == cVar2);
    if (*pcVar8 == '\0') {
      if (pcVar3 == (char *)0x0) goto LAB_00101193;
      sVar4 = (long)pcVar3 - (long)param_1;
      do {
        uVar5 = quotearg_n_style_mem(0,8,param_1,sVar4);
        uVar6 = dcgettext(0,param_3,5);
        diagnose(0,"%s: %s",uVar6,uVar5);
        usage(1);
LAB_00101193:
        sVar4 = strlen(param_1);
      } while( true );
    }
    pcVar8 = pcVar8 + 0x10;
  } while( true );
}



uint synchronize_output(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  EVP_PKEY_CTX *pEVar7;
  uint uVar8;
  long in_FS_OFFSET;
  sigset_t sStack_b8;
  long local_30;
  
  uVar8 = conversions_mask;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = conversions_mask & 0xffff3fff;
  uVar1 = conversions_mask & 0x4000;
  conversions_mask = uVar2;
  if (uVar1 == 0) {
joined_r0x001013f3:
    uVar8 = uVar8 & 0x8000;
    if (uVar8 == 0) goto LAB_001011f6;
    uVar8 = 0;
  }
  else {
    do {
      while ((interrupt_signal != 0 || (info_signal_count != 0))) {
        sigprocmask(0,(sigset_t *)caught_signals,&sStack_b8);
        iVar3 = interrupt_signal;
        if (info_signal_count != 0) {
          info_signal_count = info_signal_count + -1;
        }
        pEVar7 = (EVP_PKEY_CTX *)0x2;
        sigprocmask(2,&sStack_b8,(sigset_t *)0x0);
        if (iVar3 == 0) {
          print_stats();
        }
        else {
          cleanup(pEVar7);
          print_stats();
          raise(iVar3);
        }
      }
      iVar3 = fdatasync(1);
      if (-1 < iVar3) {
        if (iVar3 == 0) goto joined_r0x001013f3;
        break;
      }
      piVar4 = __errno_location();
    } while (*piVar4 == 4);
    piVar4 = __errno_location();
    uVar8 = 0;
    if ((*piVar4 - 0x16U & 0xffffffef) != 0) {
      uVar8 = 1;
      uVar5 = quotearg_style(4,output_file);
      uVar6 = dcgettext(0,"fdatasync failed for %s",5);
      diagnose(*piVar4,uVar6,uVar5);
    }
  }
  do {
    while ((interrupt_signal != 0 || (info_signal_count != 0))) {
      sigprocmask(0,(sigset_t *)caught_signals,&sStack_b8);
      iVar3 = interrupt_signal;
      if (info_signal_count != 0) {
        info_signal_count = info_signal_count + -1;
      }
      pEVar7 = (EVP_PKEY_CTX *)0x2;
      sigprocmask(2,&sStack_b8,(sigset_t *)0x0);
      if (iVar3 == 0) {
        print_stats();
      }
      else {
        cleanup(pEVar7);
        print_stats();
        raise(iVar3);
      }
    }
    iVar3 = fsync(1);
    if (-1 < iVar3) {
      if (iVar3 == 0) goto LAB_001011f6;
      break;
    }
    piVar4 = __errno_location();
  } while (*piVar4 == 4);
  uVar8 = 1;
  uVar5 = quotearg_style(4,output_file);
  uVar6 = dcgettext(0,"fsync failed for %s",5);
  piVar4 = __errno_location();
  diagnose(*piVar4,uVar6,uVar5);
LAB_001011f6:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}



void cleanup(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  
  if ((interrupt_signal == 0) && (iVar1 = synchronize_output(), iVar1 != 0)) {
                    /* WARNING: Subroutine does not return */
    exit(iVar1);
  }
  iVar1 = close(0);
  if (iVar1 == 0) goto LAB_001014e0;
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  while (iVar1 == 4) {
    iVar1 = close(0);
    if (iVar1 == 0) goto LAB_001014e0;
    iVar1 = *piVar2;
    if (iVar1 == 9) goto LAB_001014e0;
  }
  uVar3 = quotearg_style(4,input_file);
  pcVar5 = "closing input file %s";
  do {
    uVar4 = dcgettext(0,pcVar5,5);
    error(1,*piVar2,uVar4,uVar3);
LAB_001014e0:
    iVar1 = close(1);
    if (iVar1 == 0) {
      return;
    }
    piVar2 = __errno_location();
    iVar1 = *piVar2;
    while (iVar1 == 4) {
      iVar1 = close(1);
      if (iVar1 == 0) {
        return;
      }
      iVar1 = *piVar2;
      if (iVar1 == 9) {
        return;
      }
    }
    uVar3 = quotearg_style(4,output_file);
    pcVar5 = "closing output file %s";
  } while( true );
}



void process_signals(void)

{
  int __sig;
  EVP_PKEY_CTX *ctx;
  long in_FS_OFFSET;
  sigset_t sStack_a8;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  while ((interrupt_signal != 0 || (info_signal_count != 0))) {
    while( true ) {
      sigprocmask(0,(sigset_t *)caught_signals,&sStack_a8);
      __sig = interrupt_signal;
      if (info_signal_count != 0) {
        info_signal_count = info_signal_count + -1;
      }
      ctx = (EVP_PKEY_CTX *)0x2;
      sigprocmask(2,&sStack_a8,(sigset_t *)0x0);
      if (__sig != 0) break;
      print_stats();
      if ((interrupt_signal == 0) && (info_signal_count == 0)) goto LAB_001015e1;
    }
    cleanup(ctx);
    print_stats();
    raise(__sig);
  }
LAB_001015e1:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void quit_constprop_0(EVP_PKEY_CTX *param_1)

{
  process_signals();
  cleanup(param_1);
  print_stats();
                    /* WARNING: Subroutine does not return */
  exit(1);
}



int iftruncate_constprop_0(__off_t param_1)

{
  int iVar1;
  int *piVar2;
  EVP_PKEY_CTX *ctx;
  long in_FS_OFFSET;
  sigset_t sStack_b8;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    while ((interrupt_signal != 0 || (info_signal_count != 0))) {
      sigprocmask(0,(sigset_t *)caught_signals,&sStack_b8);
      iVar1 = interrupt_signal;
      if (info_signal_count != 0) {
        info_signal_count = info_signal_count + -1;
      }
      ctx = (EVP_PKEY_CTX *)0x2;
      sigprocmask(2,&sStack_b8,(sigset_t *)0x0);
      if (iVar1 == 0) {
        print_stats();
      }
      else {
        cleanup(ctx);
        print_stats();
        raise(iVar1);
      }
    }
    iVar1 = ftruncate(1,param_1);
  } while ((iVar1 < 0) && (piVar2 = __errno_location(), *piVar2 == 4));
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int ifstat(int param_1,stat *param_2)

{
  int iVar1;
  int *piVar2;
  EVP_PKEY_CTX *ctx;
  long in_FS_OFFSET;
  sigset_t sStack_b8;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    while ((interrupt_signal != 0 || (info_signal_count != 0))) {
      sigprocmask(0,(sigset_t *)caught_signals,&sStack_b8);
      iVar1 = interrupt_signal;
      if (info_signal_count != 0) {
        info_signal_count = info_signal_count + -1;
      }
      ctx = (EVP_PKEY_CTX *)0x2;
      sigprocmask(2,&sStack_b8,(sigset_t *)0x0);
      if (iVar1 == 0) {
        print_stats();
      }
      else {
        cleanup(ctx);
        print_stats();
        raise(iVar1);
      }
    }
    iVar1 = fstat(param_1,param_2);
  } while ((iVar1 < 0) && (piVar2 = __errno_location(), *piVar2 == 4));
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void set_fd_flags(ulong param_1,uint param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  int *piVar5;
  uint uVar6;
  long in_FS_OFFSET;
  undefined1 auStack_c8 [24];
  uint local_b0;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 & 0xfffdfeff) != 0) {
    uVar3 = param_1 & 0xffffffff;
    uVar1 = rpl_fcntl(param_1,3);
    uVar6 = param_2 & 0xfffdfeff | uVar1;
    uVar4 = (ulong)uVar6;
    if ((int)uVar1 < 0) goto LAB_001018f3;
    if (uVar1 != uVar6) {
      if ((uVar6 & 0x10000) != 0) {
        iVar2 = ifstat(param_1 & 0xffffffff,auStack_c8);
        if (iVar2 != 0) goto LAB_001018f3;
        if ((local_b0 & 0xf000) == 0x4000) goto LAB_00101932;
        piVar5 = __errno_location();
        *piVar5 = 0x14;
        goto LAB_001018f3;
      }
      do {
        iVar2 = rpl_fcntl(uVar3 & 0xffffffff,4,uVar4);
        if (iVar2 != -1) break;
LAB_001018f3:
        uVar3 = quotearg_style(4,param_3);
        uVar4 = dcgettext(0,"setting flags for %s",5);
        piVar5 = __errno_location();
        error(1,*piVar5,uVar4,uVar3);
LAB_00101932:
        uVar6 = (uint)uVar4 & 0xfffeffff;
        uVar4 = (ulong)uVar6;
      } while (uVar1 != uVar6);
    }
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



ulong skip(int param_1,undefined8 param_2,ulong param_3,long param_4,long *param_5)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  __off_t _Var4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *pcVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  bool bVar10;
  long local_e0;
  undefined1 local_d8 [24];
  uint local_c0;
  long local_a8;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  piVar2 = __errno_location();
  *piVar2 = 0;
  lVar3 = param_3 * param_4;
  if (SEXT816(lVar3) == SEXT816((long)param_3) * SEXT816(param_4)) {
    local_e0 = lVar3 + *param_5;
    uVar9 = (ulong)SCARRY8(lVar3,*param_5);
    if (SCARRY8(lVar3,*param_5)) goto LAB_001019ab;
    _Var4 = lseek(param_1,local_e0,1);
    if (-1 < _Var4) {
      if (param_1 != 0) {
LAB_00101aa8:
        *param_5 = 0;
LAB_00101aaf:
        uVar9 = 0;
        goto LAB_00101ab2;
      }
      iVar1 = ifstat(0,local_d8);
      if (iVar1 == 0) {
        if (((local_c0 & 0xd000) == 0x8000) && (0 < local_a8)) {
          if (input_offset < 0) goto LAB_00101ab2;
          if (local_a8 - input_offset < local_e0) {
            uVar9 = (local_e0 - local_a8) / param_4;
            local_e0 = local_a8 - input_offset;
          }
        }
        else if (input_offset < 0) goto LAB_00101ab2;
        bVar10 = SCARRY8(input_offset,local_e0);
        input_offset = input_offset + local_e0;
        if (!bVar10) goto LAB_00101ab2;
      }
      else {
        uVar6 = quotearg_style(4,param_2);
        uVar7 = dcgettext(0,"cannot fstat %s",5);
        error(1,*piVar2,uVar7,uVar6);
      }
      input_offset = -1;
LAB_00101ab2:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar9;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    iVar1 = *piVar2;
    _Var4 = lseek(param_1,0,2);
    if (_Var4 < 0) goto LAB_001019cb;
    if (iVar1 != 0) goto LAB_00101c82;
  }
  else {
LAB_001019ab:
    _Var4 = lseek(param_1,0,2);
    if (_Var4 < 0) {
      iVar1 = 0;
LAB_001019cb:
      if (param_1 == 0) {
        if (ibuf == 0) {
          alloc_ibuf_part_0();
        }
        lVar3 = ibuf;
        if (param_3 == 0) goto LAB_00101a4a;
        do {
          lVar5 = (*iread_fnc)(0,lVar3,param_4);
          uVar9 = param_3;
          while( true ) {
            if (lVar5 < 0) {
              uVar6 = quotearg_style(4,param_2);
              uVar7 = dcgettext(0,"error reading %s",5);
              diagnose(*piVar2,uVar7,uVar6);
              if ((conversions_mask._1_1_ & 1) != 0) {
                print_stats();
              }
              goto LAB_00101a9d;
            }
            if (lVar5 == 0) goto LAB_00101ab2;
            if ((-1 < input_offset) &&
               (bVar10 = SCARRY8(lVar5,input_offset), input_offset = lVar5 + input_offset, bVar10))
            {
              input_offset = -1;
            }
            if (uVar9 == 0) goto LAB_00101aa8;
            param_3 = uVar9 - 1;
            if (param_3 != 0) break;
            if (*param_5 == 0) goto LAB_00101aaf;
LAB_00101a4a:
            lVar5 = (*iread_fnc)(0,lVar3,*param_5);
            uVar9 = 0;
          }
        } while( true );
      }
      alloc_obuf();
      uVar6 = obuf;
      lVar3 = param_4;
      if (param_3 != 0) goto LAB_00101b16;
LAB_00101b10:
      param_3 = 0;
      lVar3 = *param_5;
LAB_00101b16:
      lVar3 = (*iread_fnc)(1,uVar6,lVar3);
      uVar9 = param_3;
      do {
        if (lVar3 < 0) {
          uVar6 = quotearg_n_style_colon(0,3,param_2);
          uVar7 = dcgettext(0,"%s: cannot seek",5);
          diagnose(iVar1,uVar7,uVar6);
LAB_00101a9d:
                    /* WARNING: Subroutine does not return */
          quit_constprop_0();
        }
        if (lVar3 == 0) goto LAB_00101ab2;
        if (uVar9 == 0) goto LAB_00101aa8;
        uVar9 = uVar9 - 1;
        if (uVar9 == 0) goto LAB_00101b90;
        lVar3 = (*iread_fnc)(1,uVar6,param_4);
      } while( true );
    }
  }
  iVar1 = 0x4b;
LAB_00101c82:
  uVar6 = quotearg_n_style_colon(0,3,param_2);
  pcVar8 = "%s: cannot seek";
  if (param_1 == 0) {
    pcVar8 = "%s: cannot skip";
  }
  uVar7 = dcgettext(0,pcVar8,5);
  diagnose(iVar1,uVar7,uVar6);
                    /* WARNING: Subroutine does not return */
  quit_constprop_0();
LAB_00101b90:
  if (*param_5 == 0) goto LAB_00101aaf;
  goto LAB_00101b10;
}



int ifd_reopen(undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  EVP_PKEY_CTX *ctx;
  long in_FS_OFFSET;
  sigset_t local_c8;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    while ((interrupt_signal != 0 || (info_signal_count != 0))) {
      sigprocmask(0,(sigset_t *)caught_signals,&local_c8);
      iVar1 = interrupt_signal;
      if (info_signal_count != 0) {
        info_signal_count = info_signal_count + -1;
      }
      ctx = (EVP_PKEY_CTX *)0x2;
      sigprocmask(2,&local_c8,(sigset_t *)0x0);
      if (iVar1 == 0) {
        print_stats();
      }
      else {
        cleanup(ctx);
        print_stats();
        raise(iVar1);
      }
    }
    iVar1 = fd_reopen(param_1,param_2,param_3,param_4);
  } while ((iVar1 < 0) && (piVar2 = __errno_location(), *piVar2 == 4));
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



long iwrite_constprop_0(char *param_1,size_t param_2)

{
  int iVar1;
  uint uVar2;
  __off_t _Var3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  size_t sVar7;
  char *__s2;
  EVP_PKEY_CTX *ctx;
  long lVar8;
  long in_FS_OFFSET;
  sigset_t sStack_c8;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((output_flags._1_1_ & 0x40) != 0) && ((long)param_2 < output_blocksize)) {
    uVar2 = rpl_fcntl(1,3);
    iVar1 = rpl_fcntl(1,4,uVar2 & 0xffffbfff);
    if ((iVar1 != 0) && (status_level != 1)) {
      uVar5 = quotearg_n_style_colon(0,3,output_file);
      uVar6 = dcgettext(0,"failed to turn off O_DIRECT: %s",5);
      piVar4 = __errno_location();
      diagnose(*piVar4,uVar6,uVar5);
    }
    o_nocache_eof = 1;
    invalidate_cache(1,0);
    conversions_mask = conversions_mask | 0x8000;
  }
  lVar8 = 0;
  uVar2 = conversions_mask;
  if (0 < (long)param_2) {
    do {
      while ((conversions_mask = uVar2, interrupt_signal != 0 || (info_signal_count != 0))) {
        sigprocmask(0,(sigset_t *)caught_signals,&sStack_c8);
        iVar1 = interrupt_signal;
        if (info_signal_count != 0) {
          info_signal_count = info_signal_count + -1;
        }
        ctx = (EVP_PKEY_CTX *)0x2;
        sigprocmask(2,&sStack_c8,(sigset_t *)0x0);
        if (iVar1 == 0) {
          print_stats();
          uVar2 = conversions_mask;
        }
        else {
          cleanup(ctx);
          print_stats();
          raise(iVar1);
          uVar2 = conversions_mask;
        }
      }
      final_op_was_seek = 0;
      sVar7 = param_2;
      __s2 = param_1;
      if ((uVar2 & 0x10000) == 0) {
LAB_00101f88:
        sVar7 = write(1,param_1 + lVar8,param_2 - lVar8);
        if (-1 < (long)sVar7) {
          if (sVar7 != 0) goto LAB_00101fa7;
          piVar4 = __errno_location();
          *piVar4 = 0x1c;
          break;
        }
        piVar4 = __errno_location();
        if (*piVar4 != 4) break;
      }
      else {
        do {
          if (*__s2 != '\0') goto LAB_00101f88;
          __s2 = __s2 + 1;
          sVar7 = sVar7 - 1;
          if (sVar7 == 0) goto LAB_00102020;
        } while ((sVar7 & 0xf) != 0);
        iVar1 = memcmp(param_1,__s2,sVar7);
        if (iVar1 != 0) goto LAB_00101f88;
LAB_00102020:
        _Var3 = lseek(1,param_2,1);
        if (_Var3 < 0) {
          conversions_mask = uVar2 & 0xfffeffff;
          goto LAB_00101f88;
        }
        final_op_was_seek = 1;
        sVar7 = param_2;
LAB_00101fa7:
        lVar8 = lVar8 + sVar7;
      }
      uVar2 = conversions_mask;
    } while (lVar8 < (long)param_2);
    if ((o_nocache != '\0') && (lVar8 != 0)) {
      invalidate_cache(1,lVar8);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void write_output(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int *piVar4;
  
  lVar1 = iwrite_constprop_0(obuf,output_blocksize);
  w_bytes = w_bytes + lVar1;
  if (output_blocksize == lVar1) {
    oc = 0;
    w_full = w_full + 1;
    return;
  }
  uVar2 = quotearg_style(4,output_file);
  uVar3 = dcgettext(0,"writing to %s",5);
  piVar4 = __errno_location();
  diagnose(*piVar4,uVar3,uVar2);
  if (lVar1 != 0) {
    w_partial = w_partial + 1;
  }
                    /* WARNING: Subroutine does not return */
  quit_constprop_0();
}



void copy_with_block(char *param_1,long param_2)

{
  char *pcVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if (param_2 == 0) {
    return;
  }
  pcVar1 = param_1 + param_2;
  do {
    while (lVar4 = col, *param_1 != newline_character) {
      if (col == conversion_blocksize) {
        r_truncate = r_truncate + 1;
      }
      else if (col < conversion_blocksize) {
        lVar5 = oc + 1;
        *(char *)(obuf + oc) = *param_1;
        oc = lVar5;
        if (output_blocksize <= lVar5) {
          write_output();
          lVar4 = col;
        }
      }
      col = lVar4 + 1;
      param_1 = param_1 + 1;
      if (param_1 == pcVar1) {
        return;
      }
    }
    lVar5 = col;
    lVar4 = obuf;
    uVar2 = space_character;
    if (col < conversion_blocksize) {
      do {
        while( true ) {
          lVar3 = oc + 1;
          *(undefined1 *)(lVar4 + oc) = uVar2;
          oc = lVar3;
          if (output_blocksize <= lVar3) break;
          lVar5 = lVar5 + 1;
          if (conversion_blocksize <= lVar5) goto LAB_00102242;
        }
        write_output();
        lVar5 = lVar5 + 1;
        lVar4 = obuf;
        uVar2 = space_character;
      } while (lVar5 < conversion_blocksize);
    }
LAB_00102242:
    param_1 = param_1 + 1;
    col = 0;
    if (param_1 == pcVar1) {
      col = 0;
      return;
    }
  } while( true );
}



void copy_with_unblock(long param_1,long param_2)

{
  long lVar1;
  char cVar2;
  long lVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  
  if (param_2 < 1) {
    return;
  }
  lVar6 = 0;
  do {
    while( true ) {
      cVar2 = *(char *)(param_1 + lVar6);
      lVar5 = col + 1;
      if (col < conversion_blocksize) break;
      pending_spaces_3 = 0;
      col = 0;
      lVar5 = oc + 1;
      *(undefined1 *)(obuf + oc) = newline_character;
      oc = lVar5;
      if (output_blocksize <= lVar5) {
        write_output();
      }
      if (param_2 <= lVar6) {
        return;
      }
    }
    col = lVar5;
    cVar4 = space_character;
    lVar5 = obuf;
    if (space_character == cVar2) {
      pending_spaces_3 = pending_spaces_3 + 1;
    }
    else {
      while (pending_spaces_3 != 0) {
        while( true ) {
          lVar3 = pending_spaces_3;
          lVar1 = oc + 1;
          *(char *)(lVar5 + oc) = cVar4;
          oc = lVar1;
          if (lVar1 < output_blocksize) break;
          write_output();
          pending_spaces_3 = pending_spaces_3 + -1;
          lVar5 = obuf;
          cVar4 = space_character;
          if (pending_spaces_3 == 0) goto LAB_00102430;
        }
        pending_spaces_3 = lVar3 + -1;
      }
LAB_00102430:
      lVar1 = oc + 1;
      *(char *)(lVar5 + oc) = cVar2;
      oc = lVar1;
      if (output_blocksize <= lVar1) {
        write_output();
      }
    }
    lVar6 = lVar6 + 1;
    if (param_2 <= lVar6) {
      return;
    }
  } while( true );
}



ssize_t iread(int param_1,void *param_2,size_t param_3)

{
  long lVar1;
  ssize_t sVar2;
  int *piVar3;
  undefined8 uVar4;
  int iVar5;
  EVP_PKEY_CTX *pEVar6;
  long in_FS_OFFSET;
  sigset_t sStack_c8;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    while ((interrupt_signal != 0 || (info_signal_count != 0))) {
      sigprocmask(0,(sigset_t *)caught_signals,&sStack_c8);
      iVar5 = interrupt_signal;
      if (info_signal_count != 0) {
        info_signal_count = info_signal_count + -1;
      }
      pEVar6 = (EVP_PKEY_CTX *)0x2;
      sigprocmask(2,&sStack_c8,(sigset_t *)0x0);
      if (iVar5 == 0) {
        print_stats();
      }
      else {
        cleanup(pEVar6);
        print_stats();
        raise(iVar5);
      }
    }
    sVar2 = read(param_1,param_2,param_3);
    if (sVar2 == -1) {
      piVar3 = __errno_location();
      iVar5 = *piVar3;
      if (iVar5 == 0x16) {
        if (((prev_nread_6 < (long)param_3) && (0 < prev_nread_6)) &&
           ((input_flags._1_1_ & 0x40) != 0)) {
          *piVar3 = 0;
          sVar2 = 0;
        }
        break;
      }
    }
    else {
      if (-1 < sVar2) {
        if ((0 < sVar2) && (sVar2 < (long)param_3)) goto joined_r0x001025e8;
        iVar5 = interrupt_signal;
        if (0 < sVar2) goto LAB_0010264d;
        sVar2 = 0;
        break;
      }
      piVar3 = __errno_location();
      iVar5 = *piVar3;
    }
  } while (iVar5 == 4);
LAB_00102591:
  prev_nread_6 = sVar2;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return sVar2;
joined_r0x001025e8:
  while ((interrupt_signal != 0 || (iVar5 = 0, info_signal_count != 0))) {
    sigprocmask(0,(sigset_t *)caught_signals,&sStack_c8);
    iVar5 = interrupt_signal;
    if (info_signal_count != 0) {
      info_signal_count = info_signal_count + -1;
    }
    pEVar6 = (EVP_PKEY_CTX *)0x2;
    sigprocmask(2,&sStack_c8,(sigset_t *)0x0);
    if (iVar5 == 0) {
      print_stats();
    }
    else {
      cleanup(pEVar6);
      print_stats();
      raise(iVar5);
    }
  }
LAB_0010264d:
  interrupt_signal = iVar5;
  lVar1 = prev_nread_6;
  if (((warn_partial_read != '\0') && (prev_nread_6 < (long)param_3)) && (0 < prev_nread_6)) {
    if (status_level != 1) {
      uVar4 = dcngettext(0,"warning: partial read (%td byte); suggest iflag=fullblock",
                         "warning: partial read (%td bytes); suggest iflag=fullblock",prev_nread_6,5
                        );
      diagnose(0,uVar4,lVar1);
    }
    warn_partial_read = '\0';
  }
  goto LAB_00102591;
}



long iread_fullblock(undefined4 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  if (param_3 < 1) {
    return 0;
  }
  lVar2 = 0;
  while( true ) {
    lVar1 = iread(param_1,param_2,param_3);
    if (lVar1 < 0) {
      return lVar1;
    }
    if (lVar1 == 0) break;
    param_3 = param_3 - lVar1;
    lVar2 = lVar2 + lVar1;
    param_2 = param_2 + lVar1;
    if (param_3 < 1) {
      return lVar2;
    }
  }
  return lVar2;
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint main(int param_1,undefined8 *param_2)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  __int32_t *p_Var11;
  char cVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  char *pcVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  byte *pbVar20;
  char *pcVar21;
  ulong uVar22;
  ulong *puVar23;
  ulong uVar24;
  __int32_t **pp_Var25;
  byte *pbVar26;
  uint *puVar27;
  long lVar28;
  EVP_PKEY_CTX *pEVar29;
  size_t sVar30;
  __off_t _Var31;
  EVP_PKEY_CTX *pEVar32;
  size_t sVar33;
  ulong uVar34;
  byte *pbVar35;
  int *piVar36;
  long lVar37;
  uint uVar38;
  ulong extraout_RDX;
  EVP_PKEY_CTX *__src;
  EVP_PKEY_CTX *pEVar39;
  char *pcVar40;
  char cVar41;
  ulong *puVar42;
  long lVar43;
  size_t sVar44;
  undefined8 *puVar45;
  long in_FS_OFFSET;
  bool bVar46;
  bool bVar47;
  undefined1 auVar48 [16];
  ulong local_128;
  ulong local_100;
  ulong local_f8;
  uint local_e4;
  ulong local_e0;
  _union_1457 local_d8 [3];
  uint local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  long lStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar16 = getenv("POSIXLY_CORRECT");
  sigemptyset((sigset_t *)caught_signals);
  if (pcVar16 == (char *)0x0) {
    sigaddset((sigset_t *)caught_signals,10);
  }
  sigaction(2,(sigaction *)0x0,(sigaction *)local_d8);
  if (local_d8[0].sa_handler != (__sighandler_t)0x1) {
    sigaddset((sigset_t *)caught_signals,2);
  }
  local_d8[1] = (_union_1457)caught_signals._0_8_;
  local_d8[2] = (_union_1457)caught_signals._8_8_;
  _local_c0 = caught_signals._16_8_;
  uStack_b8 = caught_signals._24_8_;
  local_b0 = caught_signals._32_8_;
  lStack_a8 = caught_signals._40_8_;
  local_a0 = caught_signals._48_8_;
  uStack_98 = caught_signals._56_8_;
  local_90 = caught_signals._64_8_;
  uStack_88 = caught_signals._72_8_;
  local_80 = caught_signals._80_8_;
  uStack_78 = caught_signals._88_8_;
  local_70 = caught_signals._96_8_;
  uStack_68 = caught_signals._104_8_;
  local_60 = caught_signals._112_8_;
  uStack_58 = caught_signals._120_8_;
  iVar13 = sigismember((sigset_t *)caught_signals,10);
  if (iVar13 != 0) {
    local_d8[0].sa_handler = siginfo_handler;
    local_50 = 0;
    sigaction(10,(sigaction *)local_d8,(sigaction *)0x0);
  }
  iVar13 = sigismember((sigset_t *)caught_signals,2);
  if (iVar13 != 0) {
    local_d8[0] = (_union_1457)0x100000;
    local_50 = 0xc0000000;
    sigaction(2,(sigaction *)local_d8,(sigaction *)0x0);
  }
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit(maybe_close_stdout);
  iVar13 = getpagesize();
  page_size = (long)iVar13;
  uVar17 = proper_name_lite("Stuart Kemp","Stuart Kemp");
  uVar18 = proper_name_lite("David MacKenzie","David MacKenzie");
  uVar19 = proper_name_lite("Paul Rubin","Paul Rubin");
  parse_gnu_standard_options_only
            (param_1,param_2,&_LC22,"coreutils",_Version,1,usage,uVar19,uVar18,uVar17,0);
  close_stdout_required = 0;
  _trans_table = __LC92;
  _DAT_001027c8 = _UNK_00106608;
  _DAT_001027d0 = __LC93;
  _DAT_001027d8 = _UNK_00106618;
  _DAT_001027e0 = __LC94;
  uRam00000000001027e8 = _UNK_00106628;
  _DAT_001027f0 = __LC95;
  uRam00000000001027f8 = _UNK_00106638;
  _DAT_00102800 = __LC96;
  uRam0000000000102808 = _UNK_00106648;
  _DAT_00102810 = __LC97;
  uRam0000000000102818 = _UNK_00106658;
  _DAT_00102820 = __LC98;
  uRam0000000000102828 = _UNK_00106668;
  _DAT_00102830 = __LC99;
  uRam0000000000102838 = _UNK_00106678;
  _DAT_00102840 = __LC100;
  uRam0000000000102848 = _UNK_00106688;
  _DAT_00102850 = __LC101;
  uRam0000000000102858 = _UNK_00106698;
  _DAT_00102860 = __LC102;
  uRam0000000000102868 = _UNK_001066a8;
  _DAT_00102870 = __LC103;
  uRam0000000000102878 = _UNK_001066b8;
  _DAT_00102880 = __LC104;
  uRam0000000000102888 = _UNK_001066c8;
  _DAT_00102890 = __LC105;
  uRam0000000000102898 = _UNK_001066d8;
  _DAT_001028a0 = __LC106;
  uRam00000000001028a8 = _UNK_001066e8;
  _DAT_001028b0 = __LC107;
  uRam00000000001028b8 = _UNK_001066f8;
  local_e0 = 0;
  if (param_1 <= _optind) goto LAB_00104759;
  lVar37 = (long)_optind;
  local_128 = 0;
  uVar14 = param_1 - _optind;
  puVar45 = param_2 + lVar37;
  cVar12 = '\0';
  uVar24 = 0;
  uVar34 = 0;
  bVar47 = false;
  local_f8 = 0;
  local_100 = 0x7fffffffffffffff;
LAB_0010427a:
  pbVar35 = (byte *)*puVar45;
  pcVar16 = strchr((char *)pbVar35,0x3d);
  if (pcVar16 == (char *)0x0) goto LAB_001059e6;
  pcVar16 = pcVar16 + 1;
  lVar28 = 0;
  do {
    pbVar26 = &_LC109 + lVar28;
    bVar1 = pbVar35[lVar28];
    uVar24 = (ulong)bVar1;
    if (*pbVar26 == 0) {
      pcVar21 = output_file;
      pcVar40 = pcVar16;
      if ((bVar1 == 0x3d) || (bVar1 == 0)) goto LAB_001042c6;
      break;
    }
    lVar28 = lVar28 + 1;
  } while (*pbVar26 == bVar1);
  pbVar20 = &_LC75;
  pbVar26 = pbVar35;
  do {
    bVar1 = *pbVar20;
    uVar24 = (ulong)bVar1;
    bVar2 = *pbVar26;
    if (bVar1 == 0) {
      pcVar21 = pcVar16;
      pcVar40 = input_file;
      if ((bVar2 == 0x3d) || (bVar2 == 0)) goto LAB_001042c6;
      break;
    }
    pbVar26 = pbVar26 + 1;
    pbVar20 = pbVar20 + 1;
  } while (bVar1 == bVar2);
  pbVar20 = &_LC76;
  pbVar26 = pbVar35;
  do {
    bVar1 = *pbVar20;
    uVar24 = (ulong)bVar1;
    bVar2 = *pbVar26;
    if (bVar1 == 0) {
      if ((bVar2 == 0x3d) || (bVar2 == 0)) {
        uVar15 = parse_symbols_constprop_1(pcVar16,&conversions,"invalid conversion");
        conversions_mask = conversions_mask | uVar15;
        pcVar21 = output_file;
        pcVar40 = input_file;
        goto LAB_001042c6;
      }
      break;
    }
    pbVar26 = pbVar26 + 1;
    pbVar20 = pbVar20 + 1;
  } while (bVar1 == bVar2);
  pbVar20 = &_LC77;
  pbVar26 = pbVar35;
  do {
    bVar1 = *pbVar20;
    uVar24 = (ulong)bVar1;
    bVar2 = *pbVar26;
    if (bVar1 == 0) {
      if ((bVar2 == 0x3d) || (bVar2 == 0)) {
        uVar15 = parse_symbols_constprop_1(pcVar16,"append","invalid input flag");
        input_flags = input_flags | uVar15;
        pcVar21 = output_file;
        pcVar40 = input_file;
        goto LAB_001042c6;
      }
      break;
    }
    pbVar26 = pbVar26 + 1;
    pbVar20 = pbVar20 + 1;
  } while (bVar1 == bVar2);
  pcVar21 = "oflag";
  pbVar26 = pbVar35;
  do {
    bVar1 = *pcVar21;
    uVar24 = (ulong)bVar1;
    bVar2 = *pbVar26;
    if (bVar1 == 0) {
      if ((bVar2 == 0x3d) || (bVar2 == 0)) {
        uVar15 = parse_symbols_constprop_1(pcVar16,"append","invalid output flag");
        output_flags = output_flags | uVar15;
        pcVar21 = output_file;
        pcVar40 = input_file;
        goto LAB_001042c6;
      }
      break;
    }
    pbVar26 = pbVar26 + 1;
    pcVar21 = (char *)((byte *)pcVar21 + 1);
  } while (bVar1 == bVar2);
  pcVar21 = "status";
  pbVar26 = pbVar35;
  do {
    bVar1 = *pcVar21;
    bVar2 = *pbVar26;
    if (bVar1 == 0) {
      if (bVar2 == 0x3d) goto LAB_0010455d;
      if (bVar2 == 0) goto LAB_0010455d;
      break;
    }
    pbVar26 = pbVar26 + 1;
    pcVar21 = (char *)((byte *)pcVar21 + 1);
  } while (bVar1 == bVar2);
  uVar22 = parse_integer(pcVar16,&local_e4);
  pcVar21 = strchr(pcVar16,0x42);
  lVar28 = 0;
  do {
    bVar1 = pbVar35[lVar28];
    pbVar26 = &_LC114 + lVar28;
    if (*pbVar26 == 0) {
      if ((bVar1 == 0) || (bVar1 == 0x3d)) {
        puVar23 = &input_blocksize;
        goto LAB_001044d8;
      }
      break;
    }
    lVar28 = lVar28 + 1;
  } while (*pbVar26 == bVar1);
  pbVar20 = &_LC80;
  pbVar26 = pbVar35;
  do {
    bVar1 = *pbVar20;
    bVar2 = *pbVar26;
    if (bVar1 == 0) {
      if ((bVar2 == 0x3d) || (bVar2 == 0)) {
        puVar23 = &output_blocksize;
        goto LAB_001044d8;
      }
      break;
    }
    pbVar26 = pbVar26 + 1;
    pbVar20 = pbVar20 + 1;
  } while (bVar1 == bVar2);
  pbVar20 = &_LC81;
  pbVar26 = pbVar35;
LAB_00104618:
  bVar1 = *pbVar20;
  bVar2 = *pbVar26;
  if (bVar1 != 0) goto LAB_0010460b;
  if ((bVar2 == 0) || (bVar2 == 0x3d)) {
    puVar23 = &local_e0;
LAB_001044d8:
    if ((long)uVar22 < 1) goto LAB_00104638;
    if (uVar22 != 0x7fffffffffffffff) {
      uVar24 = (ulong)local_e4;
      if (local_e4 != 0) goto LAB_001044fd;
      goto LAB_001046fa;
    }
    local_e4 = 1;
    goto LAB_001044fd;
  }
  goto LAB_0010464d;
LAB_0010460b:
  pbVar26 = pbVar26 + 1;
  pbVar20 = pbVar20 + 1;
  if (bVar1 != bVar2) goto LAB_0010464d;
  goto LAB_00104618;
LAB_0010464d:
  pbVar20 = &_LC82;
  pbVar26 = pbVar35;
  do {
    bVar1 = *pbVar20;
    bVar2 = *pbVar26;
    if (bVar1 == 0) {
      if ((bVar2 == 0x3d) || (bVar2 == 0)) {
        puVar23 = (ulong *)&conversion_blocksize;
        lVar28 = 1;
        goto LAB_001046cf;
      }
      break;
    }
    pbVar26 = pbVar26 + 1;
    pbVar20 = pbVar20 + 1;
  } while (bVar1 == bVar2);
  bVar46 = pcVar21 != (char *)0x0;
  pbVar20 = &_LC83;
  uVar24 = (ulong)bVar46;
  pbVar26 = pbVar35;
  do {
    bVar1 = *pbVar20;
    bVar2 = *pbVar26;
    if (bVar1 == 0) {
      if ((bVar2 == 0x3d) || (bVar2 == 0)) goto LAB_001046c5;
      break;
    }
    pbVar26 = pbVar26 + 1;
    pbVar20 = pbVar20 + 1;
  } while (bVar1 == bVar2);
  pbVar20 = &_LC84;
  pbVar26 = pbVar35;
  do {
    bVar1 = *pbVar20;
    bVar2 = *pbVar26;
    if (bVar1 == 0) {
      if ((bVar2 == 0x3d) || (bVar2 == 0)) goto LAB_001046c5;
      break;
    }
    pbVar26 = pbVar26 + 1;
    pbVar20 = pbVar20 + 1;
  } while (bVar1 == bVar2);
  pbVar20 = &_LC85;
  pbVar26 = pbVar35 + (*pbVar35 == 0x6f);
  do {
    bVar1 = *pbVar20;
    bVar2 = *pbVar26;
    if (bVar1 == 0) {
      if ((bVar2 == 0x3d) || (bVar2 == 0)) {
        local_128 = (ulong)bVar46;
        puVar23 = (ulong *)0x0;
        lVar28 = 0;
        local_f8 = uVar22;
        goto LAB_001046cf;
      }
      break;
    }
    pbVar26 = pbVar26 + 1;
    pbVar20 = pbVar20 + 1;
  } while (bVar1 == bVar2);
  do {
    pcVar21 = "count";
    pbVar26 = pbVar35;
    do {
      bVar1 = *pcVar21;
      bVar2 = *pbVar26;
      if (bVar1 == 0) {
        if ((bVar2 == 0) || (bVar2 == 0x3d)) {
          cVar12 = (char)uVar24;
          puVar23 = (ulong *)0x0;
          lVar28 = 0;
          local_100 = uVar22;
          goto LAB_001046cf;
        }
        break;
      }
      pbVar26 = pbVar26 + 1;
      pcVar21 = (char *)((byte *)pcVar21 + 1);
    } while (bVar1 == bVar2);
LAB_001059e6:
    pcVar16 = (char *)quotearg_style(4,pbVar35);
    uVar17 = dcgettext(0,"unrecognized operand %s",5);
    diagnose(0,uVar17,pcVar16);
    usage(1);
    uVar22 = extraout_RDX;
  } while( true );
LAB_001046c5:
  puVar23 = (ulong *)0x0;
  lVar28 = 0;
  uVar34 = uVar22;
  bVar47 = bVar46;
LAB_001046cf:
  if ((long)uVar22 < lVar28) {
LAB_00104638:
    local_e4 = 4;
  }
  else {
    uVar24 = (ulong)local_e4;
    if (local_e4 == 0) {
      pcVar21 = output_file;
      pcVar40 = input_file;
      if (puVar23 != (ulong *)0x0) {
LAB_001046fa:
        *puVar23 = uVar22;
        pcVar21 = output_file;
        pcVar40 = input_file;
      }
      goto LAB_001042c6;
    }
  }
LAB_001044fd:
  uVar15 = local_e4;
  uVar17 = quotearg_style(4,pcVar16);
  uVar24 = dcgettext(0,"invalid number",5);
  uVar18 = 0;
  if (uVar15 == 1) {
    uVar18 = 0x4b;
  }
  auVar48 = error(1,uVar18,"%s: %s",uVar24,uVar17);
LAB_00104550:
  if (auVar48._8_8_ != 0) {
    pcVar16 = (char *)(auVar48._8_8_ + 1);
LAB_0010455d:
    pcVar21 = strchr(pcVar16,0x2c);
    cVar41 = 'n';
    pcVar40 = "none";
    do {
      lVar28 = 0;
      do {
        bVar1 = pcVar40[lVar28];
        uVar24 = (ulong)bVar1;
        bVar2 = pcVar16[lVar28];
        if (bVar1 == 0) {
          if (((bVar2 == 0) || (bVar2 == 0x2c)) &&
             (auVar48._4_4_ = 0, auVar48._0_4_ = *(uint *)(pcVar40 + 0xc), auVar48._8_8_ = pcVar21,
             *(uint *)(pcVar40 + 0xc) != 0)) goto LAB_00104550;
          break;
        }
        lVar28 = lVar28 + 1;
      } while (bVar1 == bVar2);
      if (cVar41 == '\0') {
        if (pcVar21 == (char *)0x0) {
          sVar30 = strlen(pcVar16);
        }
        else {
          sVar30 = (long)pcVar21 - (long)pcVar16;
        }
        quotearg_n_style_mem(0,8,pcVar16,sVar30);
        pcVar16 = "invalid status level";
        goto LAB_00104732;
      }
      pcVar40 = pcVar40 + 0x10;
      cVar41 = *pcVar40;
    } while( true );
  }
  status_level = auVar48._0_4_;
  pcVar21 = output_file;
  pcVar40 = input_file;
LAB_001042c6:
  input_file = pcVar40;
  output_file = pcVar21;
  puVar45 = puVar45 + 1;
  if (puVar45 == param_2 + (ulong)uVar14 + lVar37) goto code_r0x001042d4;
  goto LAB_0010427a;
code_r0x001042d4:
  if (local_e0 == 0) goto LAB_00104771;
  output_blocksize = local_e0;
  input_blocksize = local_e0;
  while( true ) {
    if (conversion_blocksize == 0) {
      conversions_mask = conversions_mask & 0xffffffe7;
    }
    uVar14 = conversions_mask;
    if ((input_flags & 0x101000) != 0) {
      input_flags = input_flags | 0x101000;
    }
    if ((output_flags & 1) == 0) break;
    quote("fullblock");
    pcVar16 = "invalid output flag";
LAB_00104732:
    uVar17 = dcgettext(0,pcVar16,5);
    diagnose(0,"%s: %s",uVar17);
    usage(1);
LAB_00104759:
    local_128 = 0;
    uVar34 = 0;
    local_f8 = 0;
    cVar12 = '\0';
    local_100 = 0x7fffffffffffffff;
    bVar47 = false;
LAB_00104771:
    conversions_mask = conversions_mask | 0x800;
    if (input_blocksize == 0) {
      input_blocksize = 0x200;
    }
    if (output_blocksize == 0) {
      output_blocksize = 0x200;
    }
  }
  if (bVar47) {
    input_flags = input_flags | 8;
  }
  if ((input_flags & 8) == 0) {
    if (uVar34 != 0) {
      skip_records = uVar34;
    }
  }
  else if (uVar34 != 0) {
    skip_bytes = (long)uVar34 % (long)input_blocksize;
    skip_records = (long)uVar34 / (long)input_blocksize;
  }
  if (cVar12 != '\0') {
    input_flags = input_flags | 4;
  }
  if ((input_flags & 4) == 0) {
    if (local_100 != 0x7fffffffffffffff) {
      max_records = local_100;
    }
  }
  else if (local_100 != 0x7fffffffffffffff) {
    max_records = (long)local_100 / (long)input_blocksize;
    max_bytes = (long)local_100 % (long)input_blocksize;
  }
  if ((byte)local_128 != '\0') {
    output_flags = output_flags | 0x10;
  }
  if ((output_flags & 0x10) == 0) {
    if (local_f8 != 0) {
      seek_records = local_f8;
    }
  }
  else if (local_f8 != 0) {
    seek_records = (long)local_f8 / (long)output_blocksize;
    seek_bytes = (long)local_f8 % (long)output_blocksize;
  }
  puVar27 = (uint *)(ulong)conversions_mask;
  if ((conversions_mask & 0x800) == 0) {
    if ((input_flags & 1) == 0) {
      warn_partial_read = 1;
      if (skip_records == 0) {
        warn_partial_read = 1;
        if (0x7ffffffffffffffd < max_records - 1) {
          warn_partial_read = (byte)((input_flags | output_flags) >> 0xe) & 1;
        }
      }
      iread_fnc = iread;
    }
    else {
      warn_partial_read = 0;
      iread_fnc = iread_fullblock;
    }
  }
  else {
    warn_partial_read = 0;
    iread_fnc = iread_fullblock;
    if ((input_flags & 1) == 0) {
      iread_fnc = iread;
    }
  }
  uVar15 = input_flags & 0xfffffffe;
  if (((conversions_mask & 7) - 1 & conversions_mask & 7) != 0) {
    pcVar16 = "cannot combine any two of {ascii,ebcdic,ibm}";
LAB_00105f32:
    do {
      input_flags = uVar15;
      uVar17 = dcgettext(0,pcVar16,5);
      error(1,0,uVar17);
      uVar15 = input_flags;
LAB_00105f4a:
      input_flags = uVar15;
      pcVar16 = "cannot combine lcase and ucase";
      uVar15 = input_flags;
    } while( true );
  }
  if (((conversions_mask & 0x18) - 1 & conversions_mask & 0x18) != 0) {
    pcVar16 = "cannot combine block and unblock";
    goto LAB_00105f32;
  }
  if (((conversions_mask & 0x60) - 1 & conversions_mask & 0x60) != 0) goto LAB_00105f4a;
  if (((conversions_mask & 0x3000) - 1 & conversions_mask & 0x3000) != 0) {
    pcVar16 = "cannot combine excl and nocreat";
    goto LAB_00105f32;
  }
  pcVar16 = "cannot combine direct and nocache";
  uVar38 = (input_flags & 0x4002) - 1 & input_flags & 0x4002 |
           (output_flags & 0x4002) - 1 & output_flags & 0x4002;
  uVar34 = (ulong)uVar38;
  if (uVar38 != 0) goto LAB_00105f32;
  if ((input_flags & 2) != 0) {
    i_nocache_eof = max_records == 0 && max_bytes == 0;
    i_nocache = 1;
    uVar15 = input_flags & 0xfffffffc;
  }
  input_flags = uVar15;
  if ((output_flags & 2) != 0) {
    o_nocache_eof = max_records == 0 && max_bytes == 0;
    o_nocache = '\x01';
    output_flags = output_flags & 0xfffffffd;
  }
  if ((conversions_mask & 1) != 0) {
    puVar23 = (ulong *)&trans_table;
    do {
      puVar42 = puVar23 + 2;
      uVar3 = ebcdic_to_ascii[*(byte *)((long)puVar23 + 0xe)];
      uVar4 = ebcdic_to_ascii[*(byte *)((long)puVar23 + 0xd)];
      uVar5 = ebcdic_to_ascii[*(byte *)((long)puVar23 + 0xf)];
      local_128 = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(ebcdic_to_ascii
                                                                                 [*(byte *)((long)
                                                  puVar23 + 7)],
                                                  ebcdic_to_ascii[*(byte *)((long)puVar23 + 6)]),
                                                  ebcdic_to_ascii[*(byte *)((long)puVar23 + 5)]),
                                                  ebcdic_to_ascii[*(byte *)((long)puVar23 + 4)]),
                                                  ebcdic_to_ascii[*(byte *)((long)puVar23 + 3)]),
                                             ebcdic_to_ascii[*(byte *)((long)puVar23 + 2)]),
                                    ebcdic_to_ascii[*(byte *)((long)puVar23 + 1)]),
                           ebcdic_to_ascii[(byte)*puVar23]);
      uVar6 = ebcdic_to_ascii[*(byte *)((long)puVar23 + 0xc)];
      uVar7 = ebcdic_to_ascii[*(byte *)((long)puVar23 + 0xb)];
      uVar8 = ebcdic_to_ascii[*(byte *)((long)puVar23 + 10)];
      uVar9 = ebcdic_to_ascii[*(byte *)((long)puVar23 + 9)];
      uVar10 = ebcdic_to_ascii[(byte)puVar23[1]];
      *puVar23 = local_128;
      puVar23[1] = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(uVar5,uVar3),uVar4
                                                                        ),uVar6),uVar7),uVar8),uVar9
                                    ),uVar10);
      puVar23 = puVar42;
    } while ((code **)puVar42 != &iread_fnc);
    translation_needed = '\x01';
  }
  if ((uVar14 & 0x40) == 0) {
    if ((uVar14 & 0x20) == 0) goto LAB_00104b71;
    pp_Var25 = __ctype_tolower_loc();
    p_Var11 = *pp_Var25;
    pbVar35 = &trans_table;
    do {
      pbVar26 = pbVar35 + 1;
      *pbVar35 = (byte)p_Var11[*pbVar35];
      pbVar35 = pbVar26;
    } while ((code **)pbVar26 != &iread_fnc);
  }
  else {
    pp_Var25 = __ctype_toupper_loc();
    p_Var11 = *pp_Var25;
    pbVar35 = &trans_table;
    do {
      pbVar26 = pbVar35 + 1;
      *pbVar35 = (byte)p_Var11[*pbVar35];
      pbVar35 = pbVar26;
    } while ((code **)pbVar26 != &iread_fnc);
  }
  translation_needed = '\x01';
LAB_00104b71:
  if ((uVar14 & 2) == 0) goto LAB_0010572c;
  puVar23 = (ulong *)&trans_table;
  do {
    puVar42 = puVar23 + 2;
    uVar3 = ascii_to_ebcdic[*(byte *)((long)puVar23 + 0xe)];
    uVar4 = ascii_to_ebcdic[*(byte *)((long)puVar23 + 0xd)];
    uVar5 = ascii_to_ebcdic[*(byte *)((long)puVar23 + 0xc)];
    uVar6 = ascii_to_ebcdic[*(byte *)((long)puVar23 + 0xf)];
    local_128 = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(ascii_to_ebcdic
                                                                               [*(byte *)((long)
                                                  puVar23 + 7)],
                                                  ascii_to_ebcdic[*(byte *)((long)puVar23 + 6)]),
                                                  ascii_to_ebcdic[*(byte *)((long)puVar23 + 5)]),
                                                  ascii_to_ebcdic[*(byte *)((long)puVar23 + 4)]),
                                                  ascii_to_ebcdic[*(byte *)((long)puVar23 + 3)]),
                                           ascii_to_ebcdic[*(byte *)((long)puVar23 + 2)]),
                                  ascii_to_ebcdic[*(byte *)((long)puVar23 + 1)]),
                         ascii_to_ebcdic[(byte)*puVar23]);
    uVar7 = ascii_to_ebcdic[*(byte *)((long)puVar23 + 0xb)];
    uVar8 = ascii_to_ebcdic[*(byte *)((long)puVar23 + 10)];
    uVar9 = ascii_to_ebcdic[*(byte *)((long)puVar23 + 9)];
    uVar10 = ascii_to_ebcdic[(byte)puVar23[1]];
    *puVar23 = local_128;
    puVar23[1] = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(uVar6,uVar3),uVar4),
                                                              uVar5),uVar7),uVar8),uVar9),uVar10);
    puVar23 = puVar42;
  } while ((code **)puVar42 != &iread_fnc);
  do {
    translation_needed = '\x01';
    newline_character = (EVP_PKEY_CTX)0x25;
    space_character = (EVP_PKEY_CTX)0x40;
    do {
      uVar15 = input_flags;
      uVar14 = (uint)uVar34;
      if (input_file == (char *)0x0) {
        input_file = (char *)dcgettext(0,"standard input",5);
        set_fd_flags(0,uVar15,input_file);
      }
      else {
        iVar13 = ifd_reopen(0,input_file,input_flags,0);
        if (iVar13 < 0) {
          uVar17 = quotearg_style(4,input_file);
          puVar27 = (uint *)dcgettext(0,"failed to open %s",5);
          piVar36 = __errno_location();
          error(1,*piVar36,puVar27,uVar17);
          goto LAB_00105fb7;
        }
      }
      input_offset = lseek(0,0,1);
      input_seekable = (byte)~(byte)((ulong)input_offset >> 0x38) >> 7;
      if (input_offset < 0) {
        input_offset = 0;
      }
      puVar27 = (uint *)__errno_location();
      sVar30 = output_blocksize;
      uVar24 = seek_records;
      uVar15 = output_flags;
      input_seek_errno = *puVar27;
      if (output_file == (char *)0x0) {
        output_file = (char *)dcgettext(0,"standard output",5);
        set_fd_flags(1,uVar15,output_file);
LAB_00104e09:
        start_time = gethrxtime();
        lVar37 = input_offset;
        next_time = start_time + 1000000000;
        if (skip_records != 0 || skip_bytes != 0) {
          lVar43 = skip_records * input_blocksize;
          bVar47 = SEXT816(lVar43) != SEXT816((long)skip_records) * SEXT816((long)input_blocksize);
          lVar28 = lVar43;
          if (!bVar47) {
            lVar28 = skip_bytes + lVar43;
          }
          bVar46 = SCARRY8(skip_bytes,lVar43);
          lVar43 = skip(0,input_file,skip_records,input_blocksize,&skip_bytes);
          if (((lVar43 != 0) ||
              ((-1 < input_offset && ((bVar47 || bVar46 || (input_offset - lVar37 != lVar28)))))) &&
             (status_level != 1)) {
            uVar17 = quotearg_n_style_colon(0,3,input_file);
            uVar18 = dcgettext(0,"%s: cannot skip to specified offset",5);
            diagnose(0,uVar18,uVar17);
          }
        }
        pEVar39 = (EVP_PKEY_CTX *)(seek_records | seek_bytes);
        if ((EVP_PKEY_CTX *)(seek_records | seek_bytes) == (EVP_PKEY_CTX *)0x0) goto LAB_00104ef5;
        pEVar39 = (EVP_PKEY_CTX *)0x1;
        local_e0 = seek_bytes;
        lVar37 = skip();
        if (lVar37 != 0) {
          pEVar29 = (EVP_PKEY_CTX *)memset(obuf,0,output_blocksize);
          goto LAB_00105646;
        }
        if (local_e0 == 0) goto LAB_00104ef5;
        pEVar29 = (EVP_PKEY_CTX *)memset(obuf,0,local_e0);
        goto LAB_00105673;
      }
      uVar15 = 0;
      if (seek_records == 0) {
        uVar15 = ~conversions_mask & 0x200;
      }
      uVar15 = (uint)((conversions_mask & 0x1000) == 0) << 6 |
               (int)conversions_mask >> 6 & 0x80U | output_flags | uVar15;
      lVar37 = seek_records * output_blocksize;
      if (((SEXT816(lVar37) != SEXT816((long)seek_records) * SEXT816((long)output_blocksize)) ||
          (bVar47 = SCARRY8(lVar37,seek_bytes), lVar37 = lVar37 + seek_bytes, bVar47)) &&
         ((conversions_mask & 0x200) == 0)) {
        uVar17 = dcgettext(0,
                           "offset too large: cannot truncate to a length of seek=%jd (%td-byte) blocks"
                           ,5);
        error(1,0,uVar17,uVar24,sVar30);
        goto LAB_00105ea9;
      }
      if (((seek_records != 0) && (iVar13 = ifd_reopen(1,output_file,uVar15 | 2,0x1b6), -1 < iVar13)
          ) || (iVar13 = ifd_reopen(1,output_file,uVar15 | 1,0x1b6), -1 < iVar13)) {
        if (((seek_records != 0) && ((conversions_mask & 0x200) == 0)) &&
           (iVar13 = iftruncate_constprop_0(lVar37), iVar13 != 0)) {
          uVar15 = *puVar27;
          iVar13 = ifstat(1,local_d8);
          if (iVar13 == 0) {
            if (((local_c0 & 0xf000) - 0x4000 & 0xffffb000) == 0) {
              uVar17 = quotearg_style(4,output_file);
              uVar18 = dcgettext(0,"failed to truncate to %jd bytes in output file %s",5);
              diagnose(uVar15,uVar18,lVar37,uVar17);
            }
          }
          else {
            uVar17 = quotearg_style(4,output_file);
            uVar18 = dcgettext(0,"cannot fstat %s",5);
            diagnose(*puVar27,uVar18,uVar17);
          }
        }
        goto LAB_00104e09;
      }
      uVar34 = quotearg_style(4,output_file);
      uVar17 = dcgettext(0,"failed to open %s",5);
      error(1,*puVar27,uVar17);
LAB_0010572c:
    } while (((ulong)puVar27 & 4) == 0);
    puVar23 = (ulong *)&trans_table;
    do {
      puVar42 = puVar23 + 2;
      uVar3 = ascii_to_ibm[*(byte *)((long)puVar23 + 0xe)];
      uVar4 = ascii_to_ibm[*(byte *)((long)puVar23 + 0xd)];
      uVar5 = ascii_to_ibm[*(byte *)((long)puVar23 + 0xc)];
      uVar6 = ascii_to_ibm[*(byte *)((long)puVar23 + 0xf)];
      local_128 = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(ascii_to_ibm
                                                                                 [*(byte *)((long)
                                                  puVar23 + 7)],
                                                  ascii_to_ibm[*(byte *)((long)puVar23 + 6)]),
                                                  ascii_to_ibm[*(byte *)((long)puVar23 + 5)]),
                                                  ascii_to_ibm[*(byte *)((long)puVar23 + 4)]),
                                                  ascii_to_ibm[*(byte *)((long)puVar23 + 3)]),
                                             ascii_to_ibm[*(byte *)((long)puVar23 + 2)]),
                                    ascii_to_ibm[*(byte *)((long)puVar23 + 1)]),
                           ascii_to_ibm[(byte)*puVar23]);
      uVar7 = ascii_to_ibm[*(byte *)((long)puVar23 + 0xb)];
      uVar8 = ascii_to_ibm[*(byte *)((long)puVar23 + 10)];
      uVar9 = ascii_to_ibm[*(byte *)((long)puVar23 + 9)];
      uVar10 = ascii_to_ibm[(byte)puVar23[1]];
      *puVar23 = local_128;
      puVar23[1] = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(uVar6,uVar3),uVar4
                                                                        ),uVar5),uVar7),uVar8),uVar9
                                    ),uVar10);
      puVar23 = puVar42;
    } while ((code **)puVar42 != &iread_fnc);
  } while( true );
  while (lVar37 = lVar37 + -1, pEVar29 = obuf, lVar37 != 0) {
LAB_00105646:
    pEVar39 = pEVar29;
    sVar30 = output_blocksize;
    sVar33 = iwrite_constprop_0(pEVar39,output_blocksize);
    if (sVar33 != sVar30) goto LAB_00105689;
  }
  if (local_e0 != 0) {
LAB_00105673:
    uVar24 = local_e0;
    sVar30 = iwrite_constprop_0(pEVar29,local_e0);
    pEVar39 = pEVar29;
    if (sVar30 != uVar24) {
LAB_00105689:
      uVar17 = quotearg_style(4,output_file);
      uVar18 = dcgettext(0,"writing to %s",5);
      diagnose(*puVar27,uVar18,uVar17);
                    /* WARNING: Subroutine does not return */
      quit_constprop_0();
    }
  }
LAB_00104ef5:
  if (max_records == 0 && max_bytes == 0) {
LAB_00105460:
    uVar15 = synchronize_output();
    if (uVar15 == 0) {
      uVar15 = uVar14;
    }
    if (max_records == 0 && max_bytes == 0) {
      if (i_nocache != 0) {
        pEVar39 = (EVP_PKEY_CTX *)0x0;
        cVar12 = invalidate_cache(0,0);
        if (cVar12 == '\0') {
          uVar15 = 1;
          uVar17 = quotearg_n_style_colon(0,3,input_file);
          uVar18 = dcgettext(0,"failed to discard cache for: %s",5);
          pEVar39 = (EVP_PKEY_CTX *)(ulong)*puVar27;
          diagnose(pEVar39,uVar18,uVar17);
        }
      }
      if (o_nocache != '\0') {
        pEVar39 = (EVP_PKEY_CTX *)0x1;
        cVar12 = invalidate_cache(1,0);
        if (cVar12 == '\0') {
          uVar15 = 1;
          uVar17 = quotearg_n_style_colon(0,3,output_file);
          uVar18 = dcgettext(0,"failed to discard cache for: %s",5);
          pEVar39 = (EVP_PKEY_CTX *)(ulong)*puVar27;
          diagnose(pEVar39,uVar18,uVar17);
        }
      }
    }
    else {
      if ((i_nocache != 0) || (i_nocache_eof != 0)) {
        pEVar39 = (EVP_PKEY_CTX *)0x0;
        invalidate_cache(0,0);
      }
      if ((o_nocache != '\0') || (o_nocache_eof != 0)) {
        pEVar39 = (EVP_PKEY_CTX *)0x1;
        invalidate_cache(1,0);
      }
    }
    process_signals();
    cleanup(pEVar39);
    print_stats();
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar15;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  if (ibuf == (EVP_PKEY_CTX *)0x0) {
    alloc_ibuf_part_0();
  }
  alloc_obuf();
  local_128 = uVar34 & 0xffffffff;
  uVar14 = 0;
  uVar24 = 0xffffffff;
  sVar33 = 0;
joined_r0x00104f30:
  if ((status_level == 4) && (pEVar39 = (EVP_PKEY_CTX *)gethrxtime(), next_time <= (long)pEVar39)) {
    print_xfer_stats();
    next_time = next_time + 1000000000;
  }
  lVar37 = max_bytes;
  uVar34 = max_records;
  lVar28 = r_full + r_partial;
  if ((long)((max_records + 1) - (ulong)(max_bytes == 0)) <= lVar28) goto LAB_001053e0;
  pEVar29 = ibuf;
  if ((~(byte)(conversions_mask >> 8) & 5) == 0) {
    pEVar29 = (EVP_PKEY_CTX *)
              memset(ibuf,(uint)((conversions_mask & 0x18) != 0) << 5,input_blocksize);
  }
  if (lVar28 < (long)uVar34) {
    pEVar39 = (EVP_PKEY_CTX *)0x0;
    sVar30 = (*iread_fnc)(0,pEVar29,input_blocksize);
    if ((long)sVar30 < 1) goto LAB_001050ed;
LAB_00104fc9:
    if ((-1 < input_offset) &&
       (bVar47 = SCARRY8(input_offset,sVar30), input_offset = input_offset + sVar30, uVar15 = uVar14
       , bVar47)) {
LAB_00105ea9:
      input_offset = -1;
      uVar14 = uVar15;
    }
    if (i_nocache != 0) {
      invalidate_cache(0,sVar30);
    }
    goto LAB_00104ff2;
  }
  pEVar39 = (EVP_PKEY_CTX *)0x0;
  sVar30 = (*iread_fnc)(0,pEVar29,lVar37);
  if (0 < (long)sVar30) goto LAB_00104fc9;
LAB_001050ed:
  if (sVar30 == 0) {
    i_nocache_eof = i_nocache_eof | i_nocache;
    if (o_nocache != '\0') {
      local_128._0_1_ = (conversions_mask & 0x200) == 0;
    }
    o_nocache_eof = (o_nocache_eof | (byte)local_128) & 1;
LAB_001053e0:
    uVar15 = conversions_mask;
    pEVar29 = obuf;
    if (-1 < (int)uVar24) {
      local_e0 = CONCAT71(local_e0._1_7_,SUB81(uVar24,0));
      if ((conversions_mask & 8) == 0) {
        if ((conversions_mask & 0x10) == 0) {
          lVar37 = oc + 1;
          obuf[oc] = SUB81(uVar24,0);
          pEVar39 = pEVar29;
          oc = lVar37;
          if ((long)output_blocksize <= lVar37) {
            write_output();
            pEVar39 = pEVar29;
            uVar15 = conversions_mask;
          }
        }
        else {
          pEVar39 = (EVP_PKEY_CTX *)&local_e0;
          copy_with_unblock(pEVar39,1);
          uVar15 = conversions_mask;
        }
      }
      else {
        pEVar39 = (EVP_PKEY_CTX *)&local_e0;
        copy_with_block(pEVar39,1);
        uVar15 = conversions_mask;
      }
    }
    if (((uVar15 & 8) != 0) && (lVar37 = col, 0 < col)) {
      for (; lVar37 < conversion_blocksize; lVar37 = lVar37 + 1) {
        lVar28 = oc + 1;
        pEVar29 = obuf + oc;
        oc = lVar28;
        *pEVar29 = space_character;
        if ((long)output_blocksize <= lVar28) {
          write_output();
        }
      }
    }
    lVar37 = oc;
    if ((col != 0) && ((conversions_mask & 0x10) != 0)) {
      lVar37 = oc + 1;
      pEVar29 = obuf + oc;
      oc = lVar37;
      *pEVar29 = newline_character;
      if ((long)output_blocksize <= lVar37) {
        write_output();
        lVar37 = oc;
      }
    }
    if (lVar37 == 0) {
LAB_00105440:
      if (final_op_was_seek != '\0') {
        pEVar39 = (EVP_PKEY_CTX *)0x1;
        iVar13 = ifstat();
        if (iVar13 != 0) {
LAB_00105fb7:
          uVar17 = quotearg_style(4,output_file);
          pcVar16 = "cannot fstat %s";
          goto LAB_0010560e;
        }
        if ((local_c0 & 0xf000) == 0x8000) {
          pEVar39 = (EVP_PKEY_CTX *)0x1;
          pEVar29 = (EVP_PKEY_CTX *)lseek(1,0,1);
          if (((-1 < (long)pEVar29) && (lStack_a8 < (long)pEVar29)) &&
             (pEVar39 = pEVar29, iVar13 = iftruncate_constprop_0(), iVar13 != 0)) {
            uVar17 = quotearg_style(4,output_file);
            uVar18 = dcgettext(0,"failed to truncate to %jd bytes in output file %s",5);
            pEVar39 = (EVP_PKEY_CTX *)(ulong)*puVar27;
            diagnose(pEVar39,uVar18,pEVar29,uVar17);
            goto LAB_00105624;
          }
        }
      }
      if ((((conversions_mask & 0xc000) != 0) && (status_level == 4)) &&
         ((-1 < reported_w_bytes && (reported_w_bytes < w_bytes)))) {
        pEVar39 = (EVP_PKEY_CTX *)0x0;
        print_xfer_stats();
      }
      goto LAB_00105460;
    }
    pEVar39 = obuf;
    lVar37 = iwrite_constprop_0();
    w_bytes = w_bytes + lVar37;
    if (lVar37 != 0) {
      w_partial = w_partial + 1;
    }
    if (lVar37 == oc) goto LAB_00105440;
LAB_001055ee:
    uVar17 = quotearg_style(4,output_file);
    pcVar16 = "error writing %s";
LAB_0010560e:
    uVar18 = dcgettext(0,pcVar16,5);
    pEVar39 = (EVP_PKEY_CTX *)(ulong)*puVar27;
    diagnose(pEVar39,uVar18,uVar17);
LAB_00105624:
    uVar14 = 1;
    goto LAB_00105460;
  }
  if (((conversions_mask & 0x100) == 0) || (status_level != 1)) {
    uVar17 = quotearg_style(4,input_file);
    uVar18 = dcgettext(0,"error reading %s",5);
    pEVar39 = (EVP_PKEY_CTX *)(ulong)*puVar27;
    diagnose(pEVar39,uVar18,uVar17);
    if ((conversions_mask & 0x100) == 0) {
      uVar14 = 1;
      goto LAB_001053e0;
    }
  }
  print_stats();
  pEVar39 = (EVP_PKEY_CTX *)0x0;
  lVar37 = input_blocksize - sVar33;
  invalidate_cache();
  if (input_seekable == 0) {
    if (input_seek_errno == 0x1d) goto LAB_001051ce;
    *puVar27 = input_seek_errno;
    goto LAB_0010517f;
  }
  if (input_offset < 0) {
LAB_00105266:
    uVar17 = quotearg_style(4,input_file);
    uVar18 = dcgettext(0,"offset overflow while reading file %s",5);
    pEVar39 = (EVP_PKEY_CTX *)0x0;
    diagnose(0,uVar18,uVar17);
LAB_001051b7:
    input_seekable = 0;
    uVar14 = 1;
    input_seek_errno = 0x1d;
  }
  else {
    lVar28 = input_offset + lVar37;
    if (SCARRY8(input_offset,lVar37)) {
      input_offset = -1;
      goto LAB_00105266;
    }
    input_offset = lVar28;
    if (lVar28 < 0) goto LAB_00105266;
    pEVar39 = (EVP_PKEY_CTX *)0x0;
    _Var31 = lseek(0,0,1);
    if (_Var31 < 0) {
LAB_0010517f:
      uVar17 = quotearg_n_style_colon(0,3,input_file);
      uVar18 = dcgettext(0,"%s: cannot seek",5);
      pEVar39 = (EVP_PKEY_CTX *)(ulong)*puVar27;
      diagnose(pEVar39,uVar18,uVar17);
      goto LAB_001051b7;
    }
    if (lVar28 != _Var31) {
      lVar28 = lVar28 - _Var31;
      if (((lVar28 < 0) || (lVar37 < lVar28)) && (status_level != 1)) {
        uVar17 = dcgettext(0,"warning: invalid file offset after failed read",5);
        diagnose(0,uVar17);
      }
      pEVar39 = (EVP_PKEY_CTX *)0x0;
      _Var31 = lseek(0,lVar28,1);
      if (_Var31 < 0) {
        if (*puVar27 == 0) {
          uVar17 = dcgettext(0,"cannot work around kernel bug after all",5);
          diagnose(0,uVar17);
        }
        goto LAB_0010517f;
      }
    }
  }
LAB_001051ce:
  if (((conversions_mask & 0x400) == 0) || (sVar33 != 0)) goto joined_r0x00104f30;
  sVar30 = 0;
LAB_00104ff2:
  __src = ibuf;
  uVar15 = conversions_mask;
  sVar44 = sVar30;
  pEVar29 = obuf;
  if ((long)sVar30 < (long)input_blocksize) {
    r_partial = r_partial + 1;
    sVar33 = sVar30;
    if (((conversions_mask & 0x400) != 0) &&
       (sVar44 = input_blocksize, (conversions_mask & 0x100) == 0)) {
      memset(ibuf + sVar30,(uint)((conversions_mask & 0x18) != 0) << 5,input_blocksize - sVar30);
      sVar44 = input_blocksize;
      pEVar29 = obuf;
      uVar15 = conversions_mask;
    }
  }
  else {
    r_full = r_full + 1;
    sVar33 = 0;
  }
  obuf = pEVar29;
  conversions_mask = uVar15;
  if (pEVar29 == __src) {
    sVar30 = iwrite_constprop_0(__src,sVar44);
    w_bytes = w_bytes + sVar30;
    if (sVar30 == sVar44) {
      pEVar39 = __src;
      if (input_blocksize == sVar44) {
        w_full = w_full + 1;
      }
      else {
        w_partial = w_partial + 1;
      }
      goto joined_r0x00104f30;
    }
    goto LAB_001055ee;
  }
  if (translation_needed == '\0') {
    if (((uVar15 & 0x80) == 0) || (sVar44 == 0)) goto LAB_00105081;
  }
  else {
    pEVar39 = __src;
    if (sVar44 == 0) goto LAB_00105081;
    do {
      pEVar32 = pEVar39 + 1;
      *pEVar39 = *(EVP_PKEY_CTX *)(&trans_table + (byte)*pEVar39);
      pEVar39 = pEVar32;
    } while (pEVar32 != __src + sVar44);
    uVar15 = conversions_mask;
    if ((conversions_mask & 0x80) == 0) goto LAB_00105081;
  }
  uVar15 = conversions_mask;
  if (((byte)sVar44 & 1) == (byte)~(byte)(uVar24 >> 0x18) >> 7) {
    uVar34 = 0xffffffff;
    sVar30 = sVar44;
  }
  else {
    sVar44 = sVar44 - 1;
    uVar34 = (ulong)(byte)__src[sVar44];
    sVar30 = sVar44;
  }
  for (; 1 < (long)sVar30; sVar30 = sVar30 - 2) {
    __src[sVar30] = __src[sVar30 - 2];
  }
  if ((int)uVar24 < 0) {
    __src = __src + 1;
    uVar24 = uVar34;
  }
  else {
    __src[1] = SUB81(uVar24,0);
    sVar44 = sVar44 + 1;
    uVar24 = uVar34;
  }
LAB_00105081:
  if ((uVar15 & 8) == 0) {
    if ((uVar15 & 0x10) == 0) {
      do {
        lVar37 = oc;
        pEVar39 = pEVar29 + oc;
        sVar30 = output_blocksize - oc;
        if ((long)sVar44 < (long)(output_blocksize - oc)) {
          sVar30 = sVar44;
        }
        memcpy(pEVar39,__src,sVar30);
        sVar44 = sVar44 - sVar30;
        oc = lVar37 + sVar30;
        __src = __src + sVar30;
        pEVar29 = obuf;
        if ((long)output_blocksize <= oc) {
          write_output();
          pEVar29 = obuf;
        }
        obuf = pEVar29;
      } while (sVar44 != 0);
    }
    else {
      copy_with_unblock(__src,sVar44);
      pEVar39 = __src;
    }
  }
  else {
    copy_with_block(__src,sVar44);
    pEVar39 = __src;
  }
  goto joined_r0x00104f30;
}


