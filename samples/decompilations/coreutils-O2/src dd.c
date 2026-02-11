
void translate_charset(long param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  byte *pbVar9;
  byte *pbVar10;
  
  pbVar9 = &trans_table;
  do {
    pbVar10 = pbVar9 + 0x10;
    uVar1 = *(undefined1 *)((ulong)pbVar9[0xe] + param_1);
    uVar2 = *(undefined1 *)((ulong)pbVar9[0xd] + param_1);
    uVar3 = *(undefined1 *)((ulong)pbVar9[0xc] + param_1);
    uVar4 = *(undefined1 *)((ulong)pbVar9[0xb] + param_1);
    uVar5 = *(undefined1 *)((ulong)pbVar9[0xf] + param_1);
    uVar6 = *(undefined1 *)((ulong)pbVar9[10] + param_1);
    uVar7 = *(undefined1 *)((ulong)pbVar9[9] + param_1);
    uVar8 = *(undefined1 *)((ulong)pbVar9[8] + param_1);
    *(ulong *)pbVar9 =
         CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)
                                                                         ((ulong)pbVar9[7] + param_1
                                                                         ),*(undefined1 *)
                                                                            ((ulong)pbVar9[6] +
                                                                            param_1)),
                                                               *(undefined1 *)
                                                                ((ulong)pbVar9[5] + param_1)),
                                                      *(undefined1 *)((ulong)pbVar9[4] + param_1)),
                                             *(undefined1 *)((ulong)pbVar9[3] + param_1)),
                                    *(undefined1 *)((ulong)pbVar9[2] + param_1)),
                           *(undefined1 *)((ulong)pbVar9[1] + param_1)),
                  *(undefined1 *)((ulong)*pbVar9 + param_1));
    *(ulong *)(pbVar9 + 8) =
         CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(uVar5,uVar1),uVar2),uVar3),
                                             uVar4),uVar6),uVar7),uVar8);
    pbVar9 = pbVar10;
  } while (pbVar10 != (byte *)&iread_fnc);
  translation_needed = 1;
  return;
}



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



uint operand_matches(long param_1,long param_2,undefined4 param_3)

{
  char *pcVar1;
  char cVar2;
  long lVar3;
  
  lVar3 = 0;
  do {
    pcVar1 = (char *)(param_2 + lVar3);
    cVar2 = *(char *)(param_1 + lVar3);
    if (*pcVar1 == '\0') {
      return (uint)CONCAT71((int7)((ulong)lVar3 >> 8),(char)param_3 == cVar2) |
             CONCAT31((int3)((uint)param_3 >> 8),cVar2 == '\0');
    }
    lVar3 = lVar3 + 1;
  } while (*pcVar1 == cVar2);
  return 0;
}



undefined8 iclose(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = close(param_1);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    iVar1 = *piVar2;
    do {
      if (iVar1 != 4) {
        return 0xffffffff;
      }
      iVar1 = close(param_1);
    } while ((iVar1 != 0) && (iVar1 = *piVar2, iVar1 != 9));
  }
  return 0;
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
        if (cVar2 != '\0') goto LAB_001003c0;
        uVar3 = uVar3 & 0xfffffffd;
      }
    }
    else {
LAB_001003c0:
      if (cVar2 == 'x') {
        lVar8 = 0;
        lVar4 = parse_integer(local_38 + 1,&local_44);
        if (1 < local_44) goto LAB_0010035c;
        lVar8 = lVar4 * local_40;
        if (local_40 < 0) {
          if ((lVar4 != 0) && ((lVar4 != -1 || (local_40 != lVar8)))) goto LAB_00100458;
        }
        else if (SEXT816(lVar8) != SEXT816(lVar4) * SEXT816(local_40)) {
LAB_00100458:
          lVar8 = 0x7fffffffffffffff;
          local_44 = 1;
          goto LAB_0010035c;
        }
        if (lVar8 == 0) {
          if ((*param_1 == '0') && (param_1[1] == 'x')) {
            uVar5 = quote_n(1,&_LC1);
            uVar6 = quote_n(0,&_LC2);
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
        goto LAB_0010035c;
      }
    }
  }
  local_44 = uVar3;
  lVar8 = local_40;
  if (local_40 < 0) {
    lVar8 = 0x7fffffffffffffff;
    local_44 = 1;
  }
LAB_0010035c:
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
  long lVar2;
  int *piVar3;
  long *plVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  
  if (param_1 == 0) {
    cVar6 = i_nocache_eof;
    if (param_2 == 0) {
      lVar5 = i_pending_1;
      if (i_pending_1 == 0) {
LAB_00100555:
        if (cVar6 == '\0') {
          return true;
        }
        lVar5 = 0;
        if (param_1 != 0) goto LAB_001005a9;
      }
      lVar7 = 0;
LAB_00100564:
      lVar2 = input_offset;
      if (input_seekable == '\0') {
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
    lVar5 = lVar2 + param_2;
    if (SCARRY8(lVar2,param_2)) {
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
    if (param_1 == 0) goto LAB_00100564;
    if (output_offset_2 == -1) {
      return false;
    }
    lVar7 = o_pending_0;
    if (output_offset_2 < 0) goto LAB_00100620;
    lVar2 = o_pending_0 + lVar5 + output_offset_2;
    output_offset_2 = lVar2;
    if (lVar2 < 0) {
      return false;
    }
LAB_0010069d:
    lVar2 = (lVar2 - lVar5) - lVar7;
    if (lVar5 != 0) goto LAB_001005df;
  }
  else {
    cVar6 = o_nocache_eof;
    if (param_2 != 0) {
      plVar4 = &o_pending_0;
      lVar2 = o_pending_0;
      goto LAB_00100511;
    }
    lVar5 = o_pending_0;
    if (o_pending_0 == 0) goto LAB_00100555;
LAB_001005a9:
    if (output_offset_2 == -1) {
      return false;
    }
    lVar7 = 0;
    lVar2 = output_offset_2;
    if (output_offset_2 < 0) {
LAB_00100620:
      output_offset_2 = lseek(1,0,1);
      lVar2 = output_offset_2;
      goto LAB_0010063b;
    }
LAB_001005be:
    if ((param_2 != 0) || (lVar5 == 0)) goto LAB_0010069d;
    lVar2 = lVar2 - lVar5;
    if (cVar6 == '\0') {
      lVar2 = lVar2 - lVar7;
      goto LAB_001005df;
    }
  }
  lVar5 = 0;
  lVar2 = lVar2 - lVar2 % page_size;
LAB_001005df:
  iVar1 = posix_fadvise(param_1,lVar2,lVar5,4);
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
  local_a8 = &_LC6;
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
  exit(param_1);
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
    __s_00[sVar3 + 2] = DAT_001056f2;
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
    __fprintf_chk(_stderr,2,&_LC57,progress_len - iVar1,&_LC9);
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
      if ((interrupt_signal == 0) && (info_signal_count == 0)) goto LAB_001013d1;
    }
    cleanup(ctx);
    print_stats();
    raise(__sig);
  }
LAB_001013d1:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int ifd_reopen(undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  
  do {
    process_signals();
    iVar1 = fd_reopen(param_1,param_2,param_3,param_4);
    if (-1 < iVar1) {
      return iVar1;
    }
    piVar2 = __errno_location();
  } while (*piVar2 == 4);
  return iVar1;
}



int ifstat(int param_1,stat *param_2)

{
  int iVar1;
  int *piVar2;
  
  do {
    process_signals();
    iVar1 = fstat(param_1,param_2);
    if (-1 < iVar1) {
      return iVar1;
    }
    piVar2 = __errno_location();
  } while (*piVar2 == 4);
  return iVar1;
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
    if ((int)uVar1 < 0) goto LAB_00101553;
    if (uVar1 != uVar6) {
      if ((uVar6 & 0x10000) != 0) {
        iVar2 = ifstat(param_1 & 0xffffffff,auStack_c8);
        if (iVar2 != 0) goto LAB_00101553;
        if ((local_b0 & 0xf000) == 0x4000) goto LAB_00101592;
        piVar5 = __errno_location();
        *piVar5 = 0x14;
        goto LAB_00101553;
      }
      do {
        iVar2 = rpl_fcntl(uVar3 & 0xffffffff,4,uVar4);
        if (iVar2 != -1) break;
LAB_00101553:
        uVar3 = quotearg_style(4,param_3);
        uVar4 = dcgettext(0,"setting flags for %s",5);
        piVar5 = __errno_location();
        error(1,*piVar5,uVar4,uVar3);
LAB_00101592:
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



ssize_t iread(int param_1,void *param_2,size_t param_3)

{
  int iVar1;
  long lVar2;
  ssize_t sVar3;
  int *piVar4;
  undefined8 uVar5;
  
  do {
    process_signals();
    sVar3 = read(param_1,param_2,param_3);
    if (sVar3 == -1) {
      piVar4 = __errno_location();
      iVar1 = *piVar4;
      if (iVar1 == 0x16) {
        if ((long)param_3 <= prev_nread_6) {
          prev_nread_6 = sVar3;
          return -1;
        }
        if (prev_nread_6 < 1) {
          prev_nread_6 = sVar3;
          return -1;
        }
        if ((input_flags._1_1_ & 0x40) == 0) {
          prev_nread_6 = sVar3;
          return -1;
        }
        *piVar4 = 0;
        prev_nread_6 = 0;
        return 0;
      }
    }
    else {
      if (-1 < sVar3) {
        if ((sVar3 < 1) || ((long)param_3 <= sVar3)) {
          if (sVar3 < 1) {
            prev_nread_6 = 0;
            return 0;
          }
        }
        else {
          process_signals();
        }
        lVar2 = prev_nread_6;
        if (warn_partial_read == '\0') {
          prev_nread_6 = sVar3;
          return sVar3;
        }
        if (prev_nread_6 < 1) {
          prev_nread_6 = sVar3;
          return sVar3;
        }
        if ((long)param_3 <= prev_nread_6) {
          prev_nread_6 = sVar3;
          return sVar3;
        }
        if (status_level != 1) {
          uVar5 = dcngettext(0,"warning: partial read (%td byte); suggest iflag=fullblock",
                             "warning: partial read (%td bytes); suggest iflag=fullblock",
                             prev_nread_6,5);
          diagnose(0,uVar5,lVar2);
        }
        prev_nread_6 = sVar3;
        warn_partial_read = 0;
        return sVar3;
      }
      piVar4 = __errno_location();
      iVar1 = *piVar4;
    }
    if (iVar1 != 4) {
      prev_nread_6 = sVar3;
      return sVar3;
    }
  } while( true );
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



int iftruncate_constprop_0(__off_t param_1)

{
  int iVar1;
  int *piVar2;
  
  do {
    process_signals();
    iVar1 = ftruncate(1,param_1);
    if (-1 < iVar1) {
      return iVar1;
    }
    piVar2 = __errno_location();
  } while (*piVar2 == 4);
  return iVar1;
}



long iwrite_constprop_0(char *param_1,size_t param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  __off_t _Var4;
  undefined8 uVar5;
  undefined8 uVar6;
  size_t sVar7;
  long lVar8;
  char *__s2;
  
  if (((output_flags._1_1_ & 0x40) != 0) && ((long)param_2 < output_blocksize)) {
    uVar2 = rpl_fcntl(1,3);
    iVar1 = rpl_fcntl(1,4,uVar2 & 0xffffbfff);
    if ((iVar1 != 0) && (status_level != 1)) {
      uVar5 = quotearg_n_style_colon(0,3,output_file);
      uVar6 = dcgettext(0,"failed to turn off O_DIRECT: %s",5);
      piVar3 = __errno_location();
      diagnose(*piVar3,uVar6,uVar5);
    }
    o_nocache_eof = 1;
    invalidate_cache(1,0);
    conversions_mask = conversions_mask | 0x8000;
  }
  lVar8 = 0;
  if (0 < (long)param_2) {
    do {
      process_signals();
      uVar2 = conversions_mask;
      final_op_was_seek = 0;
      sVar7 = param_2;
      __s2 = param_1;
      if ((conversions_mask & 0x10000) == 0) {
LAB_00101818:
        sVar7 = write(1,param_1 + lVar8,param_2 - lVar8);
        if (-1 < (long)sVar7) {
          if (sVar7 != 0) goto LAB_001017ce;
          piVar3 = __errno_location();
          *piVar3 = 0x1c;
          break;
        }
        piVar3 = __errno_location();
        if (*piVar3 != 4) break;
      }
      else {
        do {
          if (*__s2 != '\0') goto LAB_00101818;
          __s2 = __s2 + 1;
          sVar7 = sVar7 - 1;
          if (sVar7 == 0) goto LAB_00101860;
        } while ((sVar7 & 0xf) != 0);
        iVar1 = memcmp(param_1,__s2,sVar7);
        if (iVar1 != 0) goto LAB_00101818;
LAB_00101860:
        _Var4 = lseek(1,param_2,1);
        if (_Var4 < 0) {
          conversions_mask = uVar2 & 0xfffeffff;
          goto LAB_00101818;
        }
        final_op_was_seek = 1;
        sVar7 = param_2;
LAB_001017ce:
        lVar8 = lVar8 + sVar7;
      }
    } while (lVar8 < (long)param_2);
    if ((o_nocache != '\0') && (lVar8 != 0)) {
      invalidate_cache(1,lVar8);
      return lVar8;
    }
  }
  return lVar8;
}



undefined4 synchronize_output(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int *piVar7;
  undefined4 uVar8;
  
  uVar2 = conversions_mask;
  uVar3 = conversions_mask & 0xffff3fff;
  uVar1 = conversions_mask & 0x4000;
  conversions_mask = uVar3;
  if (uVar1 == 0) {
LAB_0010198c:
    if ((uVar2 & 0x8000) == 0) {
      return 0;
    }
    uVar8 = 0;
  }
  else {
    do {
      process_signals();
      iVar4 = fdatasync(1);
      if (-1 < iVar4) {
        if (iVar4 == 0) goto LAB_0010198c;
        break;
      }
      piVar7 = __errno_location();
    } while (*piVar7 == 4);
    piVar7 = __errno_location();
    uVar8 = 0;
    if ((*piVar7 - 0x16U & 0xffffffef) != 0) {
      uVar5 = quotearg_style(4,output_file);
      uVar6 = dcgettext(0,"fdatasync failed for %s",5);
      uVar8 = 1;
      diagnose(*piVar7,uVar6,uVar5);
    }
  }
  do {
    process_signals();
    iVar4 = fsync(1);
    if (-1 < iVar4) {
      if (iVar4 == 0) {
        return uVar8;
      }
      break;
    }
    piVar7 = __errno_location();
  } while (*piVar7 == 4);
  uVar5 = quotearg_style(4,output_file);
  uVar6 = dcgettext(0,"fsync failed for %s",5);
  piVar7 = __errno_location();
  diagnose(*piVar7,uVar6,uVar5);
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



void quit_constprop_0(EVP_PKEY_CTX *param_1)

{
  process_signals();
  cleanup(param_1);
  print_stats();
                    /* WARNING: Subroutine does not return */
  exit(1);
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
  long lVar1;
  char *pcVar2;
  long lVar3;
  
  pcVar2 = param_1 + param_2;
  if (param_2 != 0) {
    do {
      while (lVar3 = col, *param_1 == newline_character) {
        if (col < conversion_blocksize) {
          do {
            lVar1 = oc + 1;
            *(undefined1 *)(obuf + oc) = space_character;
            oc = lVar1;
            if (output_blocksize <= lVar1) {
              write_output();
            }
            lVar3 = lVar3 + 1;
          } while (lVar3 < conversion_blocksize);
        }
        param_1 = param_1 + 1;
        col = 0;
        if (param_1 == pcVar2) {
          col = 0;
          return;
        }
      }
      if (col == conversion_blocksize) {
        r_truncate = r_truncate + 1;
      }
      else if (col < conversion_blocksize) {
        lVar1 = oc + 1;
        *(char *)(obuf + oc) = *param_1;
        oc = lVar1;
        if (output_blocksize <= lVar1) {
          write_output();
          lVar3 = col;
        }
      }
      col = lVar3 + 1;
      param_1 = param_1 + 1;
    } while (param_1 != pcVar2);
  }
  return;
}



void copy_with_unblock(long param_1,long param_2)

{
  long lVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  
  if (param_2 < 1) {
    return;
  }
  lVar4 = 0;
  do {
    while( true ) {
      cVar2 = *(char *)(param_1 + lVar4);
      lVar1 = col + 1;
      if (col < conversion_blocksize) break;
      pending_spaces_3 = 0;
      col = 0;
      lVar1 = oc + 1;
      *(undefined1 *)(obuf + oc) = newline_character;
      oc = lVar1;
      if (output_blocksize <= lVar1) {
        write_output();
      }
      if (param_2 <= lVar4) {
        return;
      }
    }
    col = lVar1;
    lVar3 = oc;
    lVar1 = obuf;
    if (space_character == cVar2) {
      pending_spaces_3 = pending_spaces_3 + 1;
    }
    else {
      for (; pending_spaces_3 != 0; pending_spaces_3 = pending_spaces_3 + -1) {
        oc = lVar3 + 1;
        *(char *)(lVar1 + lVar3) = space_character;
        if (output_blocksize <= oc) {
          write_output();
          lVar1 = obuf;
        }
        lVar3 = oc;
      }
      oc = lVar3 + 1;
      *(char *)(lVar1 + lVar3) = cVar2;
      if (output_blocksize <= oc) {
        write_output();
      }
    }
    lVar4 = lVar4 + 1;
  } while (lVar4 < param_2);
  return;
}



ulong skip(int param_1,undefined8 param_2,ulong param_3,long param_4,long *param_5)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  __off_t _Var5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char *pcVar9;
  long in_FS_OFFSET;
  bool bVar10;
  int local_dc;
  undefined1 local_d8 [24];
  uint local_c0;
  long local_a8;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  piVar2 = __errno_location();
  *piVar2 = 0;
  lVar3 = param_3 * param_4;
  if (SEXT816(lVar3) == SEXT816((long)param_3) * SEXT816(param_4)) {
    lVar4 = lVar3 + *param_5;
    uVar6 = (ulong)SCARRY8(lVar3,*param_5);
    if (SCARRY8(lVar3,*param_5)) goto LAB_00101efe;
    _Var5 = lseek(param_1,lVar4,1);
    if (-1 < _Var5) {
      if (param_1 != 0) {
LAB_00101fa8:
        *param_5 = 0;
LAB_00101fb0:
        uVar6 = 0;
        goto LAB_00101fb3;
      }
      iVar1 = ifstat(0,local_d8);
      if (iVar1 == 0) {
        if (((local_c0 & 0xd000) == 0x8000) && (0 < local_a8)) {
          if (input_offset < 0) goto LAB_00101fb3;
          if (local_a8 - input_offset < lVar4) {
            uVar6 = (lVar4 - local_a8) / param_4;
            lVar4 = local_a8 - input_offset;
          }
        }
        else if (input_offset < 0) goto LAB_00101fb3;
        bVar10 = SCARRY8(input_offset,lVar4);
        input_offset = input_offset + lVar4;
        if (!bVar10) goto LAB_00101fb3;
      }
      else {
        uVar7 = quotearg_style(4,param_2);
        uVar8 = dcgettext(0,"cannot fstat %s",5);
        error(1,*piVar2,uVar8,uVar7);
      }
      input_offset = -1;
      goto LAB_00101fb3;
    }
    local_dc = *piVar2;
    _Var5 = lseek(param_1,0,2);
    if (-1 < _Var5) {
      if (local_dc != 0) goto LAB_001020cc;
      goto LAB_001020c4;
    }
  }
  else {
LAB_00101efe:
    _Var5 = lseek(param_1,0,2);
    if (-1 < _Var5) {
LAB_001020c4:
      local_dc = 0x4b;
LAB_001020cc:
      uVar7 = quotearg_n_style_colon(0,3,param_2);
      pcVar9 = "%s: cannot seek";
      if (param_1 == 0) {
        pcVar9 = "%s: cannot skip";
      }
      uVar8 = dcgettext(0,pcVar9,5);
      diagnose(local_dc,uVar8,uVar7);
                    /* WARNING: Subroutine does not return */
      quit_constprop_0();
    }
    local_dc = 0;
  }
  if (param_1 == 0) {
    lVar3 = ibuf;
    if (ibuf == 0) {
      alloc_ibuf_part_0();
      lVar3 = ibuf;
    }
  }
  else {
    alloc_obuf();
    lVar3 = obuf;
  }
  lVar4 = param_4;
  if (param_3 == 0) {
    param_3 = 0;
    lVar4 = *param_5;
  }
  while( true ) {
    lVar4 = (*iread_fnc)(param_1,lVar3,lVar4);
    if (lVar4 < 0) {
      if (param_1 == 0) {
        uVar7 = quotearg_style(4,param_2);
        uVar8 = dcgettext(0,"error reading %s",5);
        diagnose(*piVar2,uVar8,uVar7);
        if ((conversions_mask._1_1_ & 1) != 0) {
          print_stats();
        }
      }
      else {
        uVar7 = quotearg_n_style_colon(0,3,param_2);
        uVar8 = dcgettext(0,"%s: cannot seek",5);
        diagnose(local_dc,uVar8,uVar7);
      }
                    /* WARNING: Subroutine does not return */
      quit_constprop_0();
    }
    uVar6 = param_3;
    if (lVar4 == 0) break;
    if (((param_1 == 0) && (-1 < input_offset)) &&
       (bVar10 = SCARRY8(lVar4,input_offset), input_offset = lVar4 + input_offset, bVar10)) {
      input_offset = -1;
    }
    if (param_3 == 0) goto LAB_00101fa8;
    param_3 = param_3 - 1;
    lVar4 = param_4;
    if (param_3 == 0) {
      if (*param_5 == 0) goto LAB_00101fb0;
      param_3 = 0;
      lVar4 = *param_5;
    }
  }
LAB_00101fb3:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}



uint parse_symbols(char *param_1,char *param_2,char param_3,undefined8 param_4)

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
  char *pcVar11;
  
  uVar9 = 0;
LAB_00102236:
  pcVar4 = strchr(param_1,0x2c);
  pcVar11 = param_2;
  do {
    lVar8 = 0;
    do {
      pcVar1 = pcVar11 + lVar8;
      cVar2 = param_1[lVar8];
      if (*pcVar1 == '\0') {
        if (((cVar2 == ',') || (cVar2 == '\0')) && (uVar3 = *(uint *)(pcVar11 + 0xc), uVar3 != 0)) {
          uVar10 = uVar9 | uVar3;
          uVar9 = uVar3;
          if (param_3 == '\0') {
            uVar9 = uVar10;
          }
          if (pcVar4 == (char *)0x0) {
            return uVar9;
          }
          param_1 = pcVar4 + 1;
          goto LAB_00102236;
        }
        break;
      }
      lVar8 = lVar8 + 1;
    } while (*pcVar1 == cVar2);
    if (*pcVar11 == '\0') {
      if (pcVar4 == (char *)0x0) goto LAB_001022f6;
      sVar7 = (long)pcVar4 - (long)param_1;
      do {
        uVar5 = quotearg_n_style_mem(0,8,param_1,sVar7);
        uVar6 = dcgettext(0,param_4,5);
        diagnose(0,"%s: %s",uVar6,uVar5);
        usage(1);
LAB_001022f6:
        sVar7 = strlen(param_1);
      } while( true );
    }
    pcVar11 = pcVar11 + 0x10;
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
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

EVP_PKEY_CTX * main(int param_1,undefined8 *param_2)

{
  EVP_PKEY_CTX EVar1;
  EVP_PKEY_CTX EVar2;
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
  short sVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
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
  char cVar39;
  int iVar40;
  char *pcVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  char *pcVar45;
  EVP_PKEY_CTX **ppEVar46;
  __int32_t **pp_Var47;
  long lVar48;
  __off_t _Var49;
  int *piVar50;
  char cVar51;
  int extraout_EDX;
  EVP_PKEY_CTX *pEVar52;
  uint uVar53;
  EVP_PKEY_CTX *pEVar54;
  uint *puVar55;
  uint uVar56;
  char *in_R10;
  long lVar57;
  uint uVar58;
  EVP_PKEY_CTX *pEVar59;
  EVP_PKEY_CTX *pEVar60;
  EVP_PKEY_CTX *pEVar61;
  EVP_PKEY_CTX *unaff_R15;
  EVP_PKEY_CTX *pEVar62;
  long in_FS_OFFSET;
  bool bVar63;
  bool bVar64;
  int iVar65;
  int iVar79;
  undefined1 auVar67 [16];
  undefined1 auVar71 [16];
  undefined1 auVar75 [16];
  undefined1 auVar78 [16];
  undefined1 auVar80 [16];
  undefined1 auVar84 [16];
  undefined1 auVar88 [16];
  undefined1 auVar91 [16];
  undefined2 uVar92;
  undefined2 uVar93;
  undefined2 uVar94;
  undefined1 auVar96 [16];
  EVP_PKEY_CTX *local_120;
  EVP_PKEY_CTX *local_118;
  EVP_PKEY_CTX *local_108;
  EVP_PKEY_CTX *local_100;
  uint local_f8;
  char local_f2;
  char local_f1;
  EVP_PKEY_CTX *local_f0;
  int local_e4;
  EVP_PKEY_CTX *local_e0;
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
  undefined1 auVar66 [12];
  undefined1 auVar68 [16];
  undefined1 auVar72 [16];
  undefined1 auVar69 [16];
  undefined1 auVar73 [16];
  undefined1 auVar76 [16];
  undefined1 auVar70 [16];
  undefined1 auVar74 [16];
  undefined1 auVar77 [16];
  undefined1 auVar81 [16];
  undefined1 auVar85 [16];
  undefined1 auVar82 [16];
  undefined1 auVar86 [16];
  undefined1 auVar89 [16];
  undefined1 auVar83 [16];
  undefined1 auVar87 [16];
  undefined1 auVar90 [16];
  int iVar95;
  int iVar97;
  int iVar98;
  int iVar99;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar41 = getenv("POSIXLY_CORRECT");
  sigemptyset((sigset_t *)caught_signals);
  if (pcVar41 == (char *)0x0) {
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
  iVar40 = sigismember((sigset_t *)caught_signals,10);
  if (iVar40 != 0) {
    local_d8[0].sa_handler = siginfo_handler;
    local_50 = 0;
    sigaction(10,(sigaction *)local_d8,(sigaction *)0x0);
  }
  iVar40 = sigismember((sigset_t *)caught_signals,2);
  if (iVar40 != 0) {
    local_d8[0].sa_handler = interrupt_handler;
    local_50 = 0xc0000000;
    sigaction(2,(sigaction *)local_d8,(sigaction *)0x0);
  }
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit(maybe_close_stdout);
  iVar40 = getpagesize();
  page_size = (long)iVar40;
  uVar42 = proper_name_lite("Stuart Kemp","Stuart Kemp");
  uVar43 = proper_name_lite("David MacKenzie","David MacKenzie");
  uVar44 = proper_name_lite("Paul Rubin","Paul Rubin");
  pEVar60 = (EVP_PKEY_CTX *)&trans_table;
  pEVar54 = (EVP_PKEY_CTX *)&iread_fnc;
  parse_gnu_standard_options_only
            (param_1,param_2,&_LC7,"coreutils",_Version,1,usage,uVar44,uVar43,uVar42,0);
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
  iVar40 = __LC86;
  close_stdout_required = 0;
  pcVar41 = &trans_table;
  auVar67 = __LC75;
  do {
    pcVar45 = pcVar41 + 0x10;
    iVar95 = auVar67._0_4_;
    auVar96._0_4_ = iVar95 + iVar40;
    iVar97 = auVar67._4_4_;
    auVar96._4_4_ = iVar97 + iVar23;
    iVar98 = auVar67._8_4_;
    iVar99 = auVar67._12_4_;
    auVar96._8_4_ = iVar98 + iVar24;
    auVar96._12_4_ = iVar99 + iVar25;
    auVar83._0_12_ = auVar67._0_12_;
    auVar83._12_2_ = auVar67._6_2_;
    auVar83._14_2_ = (short)((uint)(iVar97 + iVar27) >> 0x10);
    auVar82._12_4_ = auVar83._12_4_;
    auVar82._0_10_ = auVar67._0_10_;
    uVar93 = (undefined2)(iVar97 + iVar27);
    auVar82._10_2_ = uVar93;
    auVar81._10_6_ = auVar82._10_6_;
    auVar81._0_8_ = auVar67._0_8_;
    auVar81._8_2_ = auVar67._4_2_;
    uVar92 = (undefined2)((uint)(iVar95 + iVar26) >> 0x10);
    auVar19._2_8_ = auVar81._8_8_;
    auVar19._0_2_ = uVar92;
    auVar19._10_6_ = 0;
    auVar91._0_2_ = auVar67._0_2_;
    auVar80._12_4_ = 0;
    auVar80._0_12_ = SUB1612(auVar19 << 0x30,4);
    auVar80 = auVar80 << 0x20;
    uVar94 = (undefined2)(iVar98 + iVar28);
    auVar87._0_12_ = auVar80._0_12_;
    auVar87._12_2_ = uVar92;
    auVar87._14_2_ = (short)((uint)(iVar98 + iVar28) >> 0x10);
    auVar86._12_4_ = auVar87._12_4_;
    auVar86._0_10_ = auVar80._0_10_;
    auVar86._10_2_ = auVar67._10_2_;
    auVar85._10_6_ = auVar86._10_6_;
    auVar85._0_8_ = auVar80._0_8_;
    auVar85._8_2_ = auVar67._2_2_;
    auVar20._2_8_ = auVar85._8_8_;
    auVar20._0_2_ = uVar94;
    auVar20._10_6_ = 0;
    auVar84._12_4_ = 0;
    auVar84._0_12_ = SUB1612(auVar20 << 0x30,4);
    auVar84 = auVar84 << 0x20;
    iVar65 = iVar95 + iVar30;
    iVar79 = iVar97 + iVar31;
    auVar66._0_8_ = CONCAT44(iVar79,iVar65);
    auVar66._8_4_ = iVar98 + iVar32;
    auVar90._0_12_ = auVar84._0_12_;
    auVar90._12_2_ = uVar94;
    auVar90._14_2_ = (short)(iVar99 + iVar29);
    auVar89._12_4_ = auVar90._12_4_;
    auVar89._0_10_ = auVar84._0_10_;
    auVar89._10_2_ = uVar93;
    auVar88._10_6_ = auVar89._10_6_;
    auVar88._0_8_ = auVar84._0_8_;
    auVar88._8_2_ = (short)(iVar95 + iVar26);
    auVar91._8_8_ = auVar88._8_8_;
    auVar91._6_2_ = auVar67._12_2_;
    auVar91._4_2_ = auVar67._8_2_;
    auVar91._2_2_ = auVar67._4_2_;
    auVar70._12_2_ = (short)((uint)iVar79 >> 0x10);
    auVar70._0_12_ = auVar66;
    auVar70._14_2_ = (short)((uint)(iVar97 + iVar35) >> 0x10);
    auVar69._12_4_ = auVar70._12_4_;
    auVar69._0_10_ = auVar66._0_10_;
    uVar93 = (undefined2)(iVar97 + iVar35);
    auVar69._10_2_ = uVar93;
    auVar68._10_6_ = auVar69._10_6_;
    auVar68._8_2_ = (short)iVar79;
    auVar68._0_8_ = auVar66._0_8_;
    uVar92 = (undefined2)((uint)(iVar95 + iVar34) >> 0x10);
    auVar21._2_8_ = auVar68._8_8_;
    auVar21._0_2_ = uVar92;
    auVar21._10_6_ = 0;
    auVar78._0_2_ = (undefined2)iVar65;
    auVar67._12_4_ = 0;
    auVar67._0_12_ = SUB1612(auVar21 << 0x30,4);
    auVar67 = auVar67 << 0x20;
    auVar91 = auVar91 & auVar38;
    uVar94 = (undefined2)(iVar98 + iVar36);
    auVar74._0_12_ = auVar67._0_12_;
    auVar74._12_2_ = uVar92;
    auVar74._14_2_ = (short)((uint)(iVar98 + iVar36) >> 0x10);
    auVar73._12_4_ = auVar74._12_4_;
    auVar73._0_10_ = auVar67._0_10_;
    auVar73._10_2_ = (short)((uint)auVar66._8_4_ >> 0x10);
    auVar72._10_6_ = auVar73._10_6_;
    auVar72._0_8_ = auVar67._0_8_;
    auVar72._8_2_ = (short)((uint)iVar65 >> 0x10);
    auVar22._2_8_ = auVar72._8_8_;
    auVar22._0_2_ = uVar94;
    auVar22._10_6_ = 0;
    auVar71._12_4_ = 0;
    auVar71._0_12_ = SUB1612(auVar22 << 0x30,4);
    auVar71 = auVar71 << 0x20;
    auVar77._0_12_ = auVar71._0_12_;
    auVar77._12_2_ = uVar94;
    auVar77._14_2_ = (short)(iVar99 + iVar37);
    auVar76._12_4_ = auVar77._12_4_;
    auVar76._0_10_ = auVar71._0_10_;
    auVar76._10_2_ = uVar93;
    auVar75._10_6_ = auVar76._10_6_;
    auVar75._0_8_ = auVar71._0_8_;
    auVar75._8_2_ = (short)(iVar95 + iVar34);
    auVar78._8_8_ = auVar75._8_8_;
    auVar78._6_2_ = (short)(iVar99 + iVar33);
    auVar78._4_2_ = (short)auVar66._8_4_;
    auVar78._2_2_ = (short)iVar79;
    auVar78 = auVar78 & auVar38;
    sVar3 = auVar91._0_2_;
    sVar4 = auVar91._2_2_;
    sVar5 = auVar91._4_2_;
    sVar6 = auVar91._6_2_;
    sVar7 = auVar91._8_2_;
    sVar8 = auVar91._10_2_;
    sVar9 = auVar91._12_2_;
    sVar10 = auVar91._14_2_;
    sVar11 = auVar78._0_2_;
    sVar12 = auVar78._2_2_;
    sVar13 = auVar78._4_2_;
    sVar14 = auVar78._6_2_;
    sVar15 = auVar78._8_2_;
    sVar16 = auVar78._10_2_;
    sVar17 = auVar78._12_2_;
    sVar18 = auVar78._14_2_;
    *pcVar41 = (0 < sVar3) * (sVar3 < 0x100) * auVar91[0] - (0xff < sVar3);
    pcVar41[1] = (0 < sVar4) * (sVar4 < 0x100) * auVar91[2] - (0xff < sVar4);
    pcVar41[2] = (0 < sVar5) * (sVar5 < 0x100) * auVar91[4] - (0xff < sVar5);
    pcVar41[3] = (0 < sVar6) * (sVar6 < 0x100) * auVar91[6] - (0xff < sVar6);
    pcVar41[4] = (0 < sVar7) * (sVar7 < 0x100) * auVar91[8] - (0xff < sVar7);
    pcVar41[5] = (0 < sVar8) * (sVar8 < 0x100) * auVar91[10] - (0xff < sVar8);
    pcVar41[6] = (0 < sVar9) * (sVar9 < 0x100) * auVar91[0xc] - (0xff < sVar9);
    pcVar41[7] = (0 < sVar10) * (sVar10 < 0x100) * auVar91[0xe] - (0xff < sVar10);
    pcVar41[8] = (0 < sVar11) * (sVar11 < 0x100) * auVar78[0] - (0xff < sVar11);
    pcVar41[9] = (0 < sVar12) * (sVar12 < 0x100) * auVar78[2] - (0xff < sVar12);
    pcVar41[10] = (0 < sVar13) * (sVar13 < 0x100) * auVar78[4] - (0xff < sVar13);
    pcVar41[0xb] = (0 < sVar14) * (sVar14 < 0x100) * auVar78[6] - (0xff < sVar14);
    pcVar41[0xc] = (0 < sVar15) * (sVar15 < 0x100) * auVar78[8] - (0xff < sVar15);
    pcVar41[0xd] = (0 < sVar16) * (sVar16 < 0x100) * auVar78[10] - (0xff < sVar16);
    pcVar41[0xe] = (0 < sVar17) * (sVar17 < 0x100) * auVar78[0xc] - (0xff < sVar17);
    pcVar41[0xf] = (0 < sVar18) * (sVar18 < 0x100) * auVar78[0xe] - (0xff < sVar18);
    pcVar41 = pcVar45;
    auVar67 = auVar96;
  } while ((code **)pcVar45 != &iread_fnc);
  local_e0 = (EVP_PKEY_CTX *)0x0;
  if (param_1 <= _optind) {
    local_f8 = (uint)local_f8._1_3_ << 8;
    local_100 = (EVP_PKEY_CTX *)0x0;
    cVar51 = '\0';
    cVar39 = '\0';
    pEVar59 = (EVP_PKEY_CTX *)0x0;
    local_118 = (EVP_PKEY_CTX *)0x7fffffffffffffff;
    goto LAB_00104233;
  }
  pEVar59 = (EVP_PKEY_CTX *)(param_2 + _optind);
  local_f8 = (uint)local_f8._1_3_ << 8;
  pEVar60 = (EVP_PKEY_CTX *)(param_2 + (ulong)(uint)(param_1 - _optind) + (long)_optind);
  puVar55 = (uint *)&_LC92;
  local_118 = (EVP_PKEY_CTX *)0x7fffffffffffffff;
  local_108 = (EVP_PKEY_CTX *)0x0;
  local_100 = (EVP_PKEY_CTX *)0x0;
  local_f1 = '\0';
  local_f2 = '\0';
  local_f0 = (EVP_PKEY_CTX *)&trans_table;
LAB_00103df0:
  pEVar61 = *(EVP_PKEY_CTX **)pEVar59;
  pcVar41 = strchr((char *)pEVar61,0x3d);
  if (pcVar41 != (char *)0x0) {
    unaff_R15 = (EVP_PKEY_CTX *)(pcVar41 + 1);
    lVar48 = 0;
    do {
      pEVar62 = (EVP_PKEY_CTX *)((long)puVar55 + lVar48);
      EVar1 = pEVar61[lVar48];
      if (*pEVar62 == (EVP_PKEY_CTX)0x0) {
        pEVar62 = output_file;
        pEVar52 = unaff_R15;
        if (EVar1 == (EVP_PKEY_CTX)0x0) goto LAB_00103e48;
        pEVar52 = unaff_R15;
        if (EVar1 == (EVP_PKEY_CTX)0x3d) goto LAB_00103e48;
        break;
      }
      lVar48 = lVar48 + 1;
    } while (*pEVar62 == EVar1);
    pEVar52 = (EVP_PKEY_CTX *)&_LC76;
    pEVar62 = pEVar61;
    do {
      EVar1 = *pEVar52;
      EVar2 = *pEVar62;
      if (EVar1 == (EVP_PKEY_CTX)0x0) {
        pEVar62 = unaff_R15;
        pEVar52 = input_file;
        if (EVar2 == (EVP_PKEY_CTX)0x0) goto LAB_00103e48;
        pEVar62 = unaff_R15;
        if (EVar2 == (EVP_PKEY_CTX)0x3d) goto LAB_00103e48;
        break;
      }
      pEVar62 = pEVar62 + 1;
      pEVar52 = pEVar52 + 1;
    } while (EVar1 == EVar2);
    pEVar52 = (EVP_PKEY_CTX *)&_LC77;
    pEVar62 = pEVar61;
    do {
      EVar1 = *pEVar52;
      EVar2 = *pEVar62;
      if (EVar1 == (EVP_PKEY_CTX)0x0) {
        if ((EVar2 == (EVP_PKEY_CTX)0x3d) || (EVar2 == (EVP_PKEY_CTX)0x0)) {
          uVar53 = parse_symbols(unaff_R15,&conversions,0,"invalid conversion");
          conversions_mask = conversions_mask | uVar53;
          pEVar62 = output_file;
          pEVar52 = input_file;
          goto LAB_00103e48;
        }
        break;
      }
      pEVar62 = pEVar62 + 1;
      pEVar52 = pEVar52 + 1;
    } while (EVar1 == EVar2);
    pEVar52 = (EVP_PKEY_CTX *)&_LC78;
    pEVar62 = pEVar61;
    do {
      EVar1 = *pEVar52;
      EVar2 = *pEVar62;
      if (EVar1 == (EVP_PKEY_CTX)0x0) {
        if ((EVar2 == (EVP_PKEY_CTX)0x0) || (EVar2 == (EVP_PKEY_CTX)0x3d)) {
          uVar53 = parse_symbols(unaff_R15,"append",0,"invalid input flag");
          input_flags = input_flags | uVar53;
          pEVar62 = output_file;
          pEVar52 = input_file;
          goto LAB_00103e48;
        }
        break;
      }
      pEVar62 = pEVar62 + 1;
      pEVar52 = pEVar52 + 1;
    } while (EVar1 == EVar2);
    pcVar41 = "oflag";
    pEVar62 = pEVar61;
    do {
      EVar1 = (EVP_PKEY_CTX)*pcVar41;
      EVar2 = *pEVar62;
      if (EVar1 == (EVP_PKEY_CTX)0x0) {
        if ((EVar2 == (EVP_PKEY_CTX)0x3d) || (EVar2 == (EVP_PKEY_CTX)0x0)) {
          uVar53 = parse_symbols(unaff_R15,"append",0,"invalid output flag");
          output_flags = output_flags | uVar53;
          pEVar62 = output_file;
          pEVar52 = input_file;
          goto LAB_00103e48;
        }
        break;
      }
      pEVar62 = pEVar62 + 1;
      pcVar41 = (char *)((EVP_PKEY_CTX *)pcVar41 + 1);
    } while (EVar1 == EVar2);
    pcVar41 = "status";
    pEVar62 = pEVar61;
    do {
      EVar1 = (EVP_PKEY_CTX)*pcVar41;
      EVar2 = *pEVar62;
      if (EVar1 == (EVP_PKEY_CTX)0x0) {
        if ((EVar2 == (EVP_PKEY_CTX)0x3d) || (EVar2 == (EVP_PKEY_CTX)0x0)) {
          status_level = parse_symbols(unaff_R15,&statuses,1,"invalid status level");
          pEVar62 = output_file;
          pEVar52 = input_file;
          goto LAB_00103e48;
        }
        break;
      }
      pEVar62 = pEVar62 + 1;
      pcVar41 = (char *)((EVP_PKEY_CTX *)pcVar41 + 1);
    } while (EVar1 == EVar2);
    local_120 = (EVP_PKEY_CTX *)parse_integer(unaff_R15,&local_e4);
    in_R10 = strchr((char *)unaff_R15,0x42);
    cVar39 = operand_matches(pEVar61,&_LC97,0x3d);
    if (cVar39 == '\0') {
      cVar39 = operand_matches();
      if (cVar39 == '\0') {
        cVar39 = operand_matches();
        if (cVar39 == '\0') {
          cVar39 = operand_matches();
          if (cVar39 != '\0') {
            ppEVar46 = (EVP_PKEY_CTX **)&conversion_blocksize;
            lVar48 = 1;
            goto LAB_001042d5;
          }
          in_R10 = (char *)(ulong)(in_R10 != (char *)0x0);
          cVar39 = operand_matches();
          if ((cVar39 != '\0') || (cVar39 = operand_matches(), cVar39 != '\0')) {
            local_f2 = (char)in_R10;
            lVar48 = 0;
            ppEVar46 = (EVP_PKEY_CTX **)0x0;
            local_108 = local_120;
            goto LAB_001042d5;
          }
          cVar39 = operand_matches(pEVar61 + (*pEVar61 == (EVP_PKEY_CTX)0x6f),&_LC103,0x3d);
          if (cVar39 != '\0') goto LAB_001054be;
          cVar39 = operand_matches(pEVar61,"count",0x3d);
          if (cVar39 != '\0') {
            local_f1 = (char)in_R10;
            lVar48 = 0;
            ppEVar46 = (EVP_PKEY_CTX **)0x0;
            local_118 = local_120;
            goto LAB_001042d5;
          }
          goto LAB_001055b4;
        }
        ppEVar46 = &local_e0;
      }
      else {
        ppEVar46 = &output_blocksize;
      }
    }
    else {
      ppEVar46 = &input_blocksize;
    }
    if ((long)local_120 < 1) {
LAB_00104207:
      local_e4 = 4;
      iVar40 = local_e4;
    }
    else if (local_120 == (EVP_PKEY_CTX *)0x7fffffffffffffff) {
      local_e4 = 1;
      iVar40 = local_e4;
    }
    else {
      iVar40 = local_e4;
      if (local_e4 == 0) {
        do {
          *ppEVar46 = local_120;
          pEVar62 = output_file;
          pEVar52 = input_file;
LAB_00103e48:
          do {
            input_file = pEVar52;
            output_file = pEVar62;
            pEVar59 = pEVar59 + 8;
            if (pEVar59 != pEVar60) goto LAB_00103df0;
            pEVar59 = local_108;
            pEVar60 = local_f0;
            cVar39 = local_f1;
            cVar51 = local_f2;
            if (local_e0 == (EVP_PKEY_CTX *)0x0) {
LAB_00104233:
              conversions_mask = conversions_mask | 0x800;
              if (input_blocksize == (EVP_PKEY_CTX *)0x0) {
                input_blocksize = (EVP_PKEY_CTX *)0x200;
              }
              if (output_blocksize == (EVP_PKEY_CTX *)0x0) {
                output_blocksize = (EVP_PKEY_CTX *)0x200;
              }
            }
            else {
              output_blocksize = local_e0;
              input_blocksize = local_e0;
            }
            if (conversion_blocksize == 0) {
              conversions_mask = conversions_mask & 0xffffffe7;
            }
            uVar53 = conversions_mask;
            if ((input_flags & 0x101000) != 0) {
              input_flags = input_flags | 0x101000;
            }
            if ((output_flags & 1) != 0) {
              uVar42 = quote("fullblock");
              uVar43 = dcgettext(0,"invalid output flag",5);
              diagnose(0,"%s: %s",uVar43,uVar42);
              usage(1);
              iVar40 = extraout_EDX;
              goto LAB_0010555b;
            }
            if (cVar51 != '\0') {
              input_flags = input_flags | 8;
            }
            if ((input_flags & 8) == 0) {
              if (pEVar59 != (EVP_PKEY_CTX *)0x0) {
                skip_records = pEVar59;
              }
            }
            else if (pEVar59 != (EVP_PKEY_CTX *)0x0) {
              skip_bytes = (long)pEVar59 % (long)input_blocksize;
              skip_records = (EVP_PKEY_CTX *)((long)pEVar59 / (long)input_blocksize);
            }
            uVar56 = input_flags | 4;
            if (cVar39 == '\0') {
              uVar56 = input_flags;
            }
            if ((uVar56 & 4) == 0) {
              if (local_118 != (EVP_PKEY_CTX *)0x7fffffffffffffff) {
                max_records = local_118;
              }
            }
            else if (local_118 != (EVP_PKEY_CTX *)0x7fffffffffffffff) {
              max_records = (EVP_PKEY_CTX *)((long)local_118 / (long)input_blocksize);
              max_bytes = (long)local_118 % (long)input_blocksize;
            }
            if ((char)local_f8 != '\0') {
              output_flags = output_flags | 0x10;
            }
            if ((output_flags & 0x10) == 0) {
              if (local_100 != (EVP_PKEY_CTX *)0x0) {
                seek_records = local_100;
              }
            }
            else if (local_100 != (EVP_PKEY_CTX *)0x0) {
              seek_records = (EVP_PKEY_CTX *)((long)local_100 / (long)output_blocksize);
              seek_bytes = (EVP_PKEY_CTX *)((long)local_100 % (long)output_blocksize);
            }
            if ((conversions_mask & 0x800) == 0) {
              if ((uVar56 & 1) == 0) {
                if ((skip_records == (EVP_PKEY_CTX *)0x0) &&
                   ((EVP_PKEY_CTX *)0x7ffffffffffffffd < max_records + -1)) {
                  iread_fnc = iread;
                  warn_partial_read = (byte)((uVar56 | output_flags) >> 0xe) & 1;
                }
                else {
                  warn_partial_read = 1;
                  iread_fnc = iread;
                }
              }
              else {
                warn_partial_read = 0;
                iread_fnc = iread_fullblock;
              }
            }
            else {
              warn_partial_read = 0;
              iread_fnc = iread_fullblock;
              if ((uVar56 & 1) == 0) {
                iread_fnc = iread;
              }
            }
            input_flags = uVar56 & 0xfffffffe;
            if (((conversions_mask & 7) - 1 & conversions_mask & 7) != 0) goto LAB_001055f0;
            if (((conversions_mask & 0x18) - 1 & conversions_mask & 0x18) != 0) goto LAB_00105614;
            if (((conversions_mask & 0x60) - 1 & conversions_mask & 0x60) != 0) {
              pcVar41 = "cannot combine lcase and ucase";
              goto LAB_001055fc;
            }
            if (((conversions_mask & 0x3000) - 1 & conversions_mask & 0x3000) != 0) {
              pcVar41 = "cannot combine excl and nocreat";
              goto LAB_001055fc;
            }
            uVar58 = (uVar56 & 0x4002) - 1 & uVar56 & 0x4002 |
                     (output_flags & 0x4002) - 1 & output_flags & 0x4002;
            pEVar59 = (EVP_PKEY_CTX *)(ulong)uVar58;
            if (uVar58 != 0) {
              pcVar41 = "cannot combine direct and nocache";
              goto LAB_001055fc;
            }
            if ((uVar56 & 2) != 0) {
              i_nocache_eof = max_records == (EVP_PKEY_CTX *)0x0 && max_bytes == 0;
              i_nocache = 1;
              input_flags = uVar56 & 0xfffffffc;
            }
            if ((output_flags & 2) != 0) {
              o_nocache_eof = max_records == (EVP_PKEY_CTX *)0x0 && max_bytes == 0;
              o_nocache = '\x01';
              output_flags = output_flags & 0xfffffffd;
            }
            if ((conversions_mask & 1) != 0) {
              translate_charset();
            }
            if ((uVar53 & 0x40) == 0) {
              if ((uVar53 & 0x20) != 0) {
                pp_Var47 = __ctype_tolower_loc();
                do {
                  pEVar61 = pEVar60 + 1;
                  *pEVar60 = SUB41((*pp_Var47)[(byte)*pEVar60],0);
                  pEVar60 = pEVar61;
                } while (pEVar54 != pEVar61);
                goto LAB_0010446f;
              }
            }
            else {
              pp_Var47 = __ctype_toupper_loc();
              do {
                pEVar61 = pEVar60 + 1;
                *pEVar60 = SUB41((*pp_Var47)[(byte)*pEVar60],0);
                pEVar60 = pEVar61;
              } while (pEVar54 != pEVar61);
LAB_0010446f:
              translation_needed = '\x01';
            }
            if ((uVar53 & 2) == 0) {
              if ((uVar53 & 4) != 0) {
                translate_charset();
                newline_character = (EVP_PKEY_CTX)0x25;
                space_character = (EVP_PKEY_CTX)0x40;
              }
            }
            else {
              translate_charset();
              newline_character = (EVP_PKEY_CTX)0x25;
              space_character = (EVP_PKEY_CTX)0x40;
            }
            uVar53 = input_flags;
            if (input_file == (EVP_PKEY_CTX *)0x0) {
              input_file = (EVP_PKEY_CTX *)dcgettext(0,"standard input",5);
              set_fd_flags(0,uVar53,input_file);
            }
            else {
              iVar40 = ifd_reopen(0,input_file,input_flags,0);
              if (iVar40 < 0) {
                puVar55 = (uint *)quotearg_style(4,input_file);
                uVar42 = dcgettext(0,"failed to open %s",5);
                piVar50 = __errno_location();
                error(1,*piVar50,uVar42,puVar55);
                goto LAB_0010568f;
              }
            }
            input_offset = (EVP_PKEY_CTX *)lseek(0,0,1);
            input_seekable = (byte)~(byte)((ulong)input_offset >> 0x38) >> 7;
            if ((long)input_offset < 0) {
              input_offset = (EVP_PKEY_CTX *)0x0;
            }
            puVar55 = (uint *)__errno_location();
            unaff_R15 = output_blocksize;
            pEVar60 = seek_records;
            uVar53 = output_flags;
            input_seek_errno = *puVar55;
            if (output_file == (EVP_PKEY_CTX *)0x0) {
              output_file = (EVP_PKEY_CTX *)dcgettext(0,"standard output",5);
              pEVar61 = (EVP_PKEY_CTX *)0x1;
              set_fd_flags(1,uVar53,output_file);
LAB_00104583:
              start_time = gethrxtime();
              pEVar54 = input_offset;
              next_time = start_time + 1000000000;
              if (skip_records != (EVP_PKEY_CTX *)0x0 || skip_bytes != 0) {
                lVar57 = (long)skip_records * (long)input_blocksize;
                bVar63 = SEXT816(lVar57) ==
                         SEXT816((long)skip_records) * SEXT816((long)input_blocksize);
                lVar48 = lVar57;
                if (bVar63) {
                  lVar48 = skip_bytes + lVar57;
                }
                bVar64 = SCARRY8(skip_bytes,lVar57);
                pEVar61 = (EVP_PKEY_CTX *)0x0;
                lVar57 = skip(0,input_file,skip_records,input_blocksize,&skip_bytes);
                if (((lVar57 != 0) ||
                    ((-1 < (long)input_offset &&
                     ((!bVar63 || bVar64 || ((long)input_offset - (long)pEVar54 != lVar48)))))) &&
                   (status_level != 1)) {
                  uVar42 = quotearg_n_style_colon(0,3,input_file);
                  uVar43 = dcgettext(0,"%s: cannot skip to specified offset",5);
                  pEVar61 = (EVP_PKEY_CTX *)0x0;
                  diagnose(0,uVar43,uVar42);
                }
              }
              if (seek_records == (EVP_PKEY_CTX *)0x0 && seek_bytes == (EVP_PKEY_CTX *)0x0)
              goto LAB_001046a8;
              pEVar61 = (EVP_PKEY_CTX *)0x1;
              local_e0 = seek_bytes;
              lVar48 = skip();
              if (lVar48 != 0) {
                pEVar54 = (EVP_PKEY_CTX *)memset(obuf,0,(size_t)output_blocksize);
                goto LAB_00104e90;
              }
              if (local_e0 == (EVP_PKEY_CTX *)0x0) goto LAB_001046a8;
              pEVar54 = (EVP_PKEY_CTX *)memset(obuf,0,(size_t)local_e0);
              goto LAB_00104ebd;
            }
            uVar53 = (uint)((conversions_mask & 0x1000) == 0) << 6 |
                     (int)conversions_mask >> 6 & 0x80U | output_flags;
            if (seek_records == (EVP_PKEY_CTX *)0x0) {
              pEVar54 = seek_bytes;
              if ((conversions_mask & 0x200) == 0) {
                uVar53 = uVar53 | 0x200;
              }
LAB_00104550:
              pEVar61 = (EVP_PKEY_CTX *)0x1;
              iVar40 = ifd_reopen(1,output_file,uVar53 | 1,0x1b6);
              if (iVar40 < 0) {
LAB_0010568f:
                uVar42 = quotearg_style(4,output_file);
                uVar43 = dcgettext(0,"failed to open %s",5);
                error(1,*puVar55,uVar43,uVar42);
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
LAB_0010456c:
              if (((seek_records != (EVP_PKEY_CTX *)0x0) && ((conversions_mask & 0x200) == 0)) &&
                 (pEVar61 = pEVar54, iVar40 = iftruncate_constprop_0(), iVar40 != 0)) {
                pEVar61 = (EVP_PKEY_CTX *)0x1;
                uVar53 = *puVar55;
                iVar40 = ifstat(1,local_d8);
                if (iVar40 == 0) {
                  if (((local_c0 & 0xf000) - 0x4000 & 0xffffb000) == 0) {
                    uVar42 = quotearg_style(4,output_file);
                    uVar43 = dcgettext(0,"failed to truncate to %jd bytes in output file %s",5);
                    pEVar61 = (EVP_PKEY_CTX *)(ulong)uVar53;
                    diagnose(pEVar61,uVar43,pEVar54,uVar42);
                  }
                }
                else {
                  uVar42 = quotearg_style(4,output_file);
                  uVar43 = dcgettext(0,"cannot fstat %s",5);
                  pEVar61 = (EVP_PKEY_CTX *)(ulong)*puVar55;
                  diagnose(pEVar61,uVar43,uVar42);
                }
              }
              goto LAB_00104583;
            }
            pEVar54 = (EVP_PKEY_CTX *)((long)seek_records * (long)output_blocksize);
            if (((SEXT816((long)pEVar54) ==
                  SEXT816((long)seek_records) * SEXT816((long)output_blocksize)) &&
                (bVar63 = SCARRY8((long)pEVar54,(long)seek_bytes),
                pEVar54 = pEVar54 + (long)seek_bytes, !bVar63)) || ((conversions_mask & 0x200) != 0)
               ) {
              pEVar61 = (EVP_PKEY_CTX *)0x1;
              iVar40 = ifd_reopen(1,output_file,uVar53 | 2,0x1b6);
              if (iVar40 < 0) goto LAB_00104550;
              goto LAB_0010456c;
            }
            uVar42 = dcgettext(0,
                               "offset too large: cannot truncate to a length of seek=%jd (%td-byte) blocks"
                               ,5);
            error(1,0,uVar42,pEVar60,unaff_R15);
LAB_001054be:
            local_100 = local_120;
            local_f8 = CONCAT31(local_f8._1_3_,(char)in_R10);
            lVar48 = 0;
            ppEVar46 = (EVP_PKEY_CTX **)0x0;
LAB_001042d5:
            if ((long)local_120 < lVar48) goto LAB_00104207;
            iVar40 = local_e4;
            if (local_e4 != 0) goto LAB_0010555b;
            pEVar62 = output_file;
            pEVar52 = input_file;
          } while (ppEVar46 == (EVP_PKEY_CTX **)0x0);
        } while( true );
      }
    }
LAB_0010555b:
    puVar55 = (uint *)quotearg_style(4,unaff_R15);
    uVar42 = dcgettext(0,"invalid number",5);
    uVar43 = 0;
    if (iVar40 == 1) {
      uVar43 = 0x4b;
    }
    error(1,uVar43,"%s: %s",uVar42,puVar55);
LAB_001055a4:
    input_offset = (EVP_PKEY_CTX *)0xffffffffffffffff;
LAB_001047a2:
    if (i_nocache != 0) {
      invalidate_cache(0,pEVar60);
    }
    do {
      pEVar61 = ibuf;
      uVar53 = conversions_mask;
      pEVar62 = obuf;
      pEVar59 = pEVar60;
      if ((long)pEVar60 < (long)input_blocksize) {
        r_partial = r_partial + 1;
        pEVar54 = pEVar60;
        if (((conversions_mask & 0x400) != 0) &&
           (pEVar59 = input_blocksize, (conversions_mask & 0x100) == 0)) {
          memset(ibuf + (long)pEVar60,(uint)((conversions_mask & 0x18) != 0) << 5,
                 (long)input_blocksize - (long)pEVar60);
          pEVar59 = input_blocksize;
          pEVar62 = obuf;
          uVar53 = conversions_mask;
        }
      }
      else {
        r_full = r_full + 1;
        pEVar54 = (EVP_PKEY_CTX *)0x0;
      }
      obuf = pEVar62;
      conversions_mask = uVar53;
      if (pEVar62 == pEVar61) {
        pEVar60 = (EVP_PKEY_CTX *)iwrite_constprop_0(pEVar61,pEVar59);
        w_bytes = w_bytes + (long)pEVar60;
        if (pEVar60 != pEVar59) goto LAB_00104db7;
        if (input_blocksize == pEVar59) {
          w_full = w_full + 1;
        }
        else {
          w_partial = w_partial + 1;
        }
      }
      else {
        if (translation_needed == '\0') {
          if (((uVar53 & 0x80) != 0) && (pEVar59 != (EVP_PKEY_CTX *)0x0)) {
LAB_00104b2a:
            uVar53 = conversions_mask;
            uVar56 = 0xffffffff;
            pEVar60 = pEVar59;
            if (((byte)pEVar59 & 1) != (byte)~(byte)((ulong)local_120 >> 0x18) >> 7) {
              pEVar60 = pEVar59 + -1;
              uVar56 = (uint)(byte)pEVar61[(long)pEVar60];
              pEVar59 = pEVar60;
            }
            for (; 1 < (long)pEVar60; pEVar60 = pEVar60 + -2) {
              pEVar61[(long)pEVar60] = (pEVar61 + -2)[(long)pEVar60];
            }
            if ((int)local_120 < 0) {
              local_120 = (EVP_PKEY_CTX *)(ulong)uVar56;
              pEVar61 = pEVar61 + 1;
            }
            else {
              EVar1 = local_120._0_1_;
              pEVar59 = (EVP_PKEY_CTX *)((long)pEVar59 + 1);
              local_120 = (EVP_PKEY_CTX *)(ulong)uVar56;
              pEVar61[1] = EVar1;
            }
          }
        }
        else {
          pEVar60 = pEVar61;
          if (pEVar59 != (EVP_PKEY_CTX *)0x0) {
            do {
              pEVar52 = pEVar60 + 1;
              *pEVar60 = *(EVP_PKEY_CTX *)(&trans_table + (byte)*pEVar60);
              pEVar60 = pEVar52;
            } while (pEVar52 != pEVar61 + (long)pEVar59);
            uVar53 = conversions_mask;
            if ((conversions_mask & 0x80) != 0) goto LAB_00104b2a;
          }
        }
        if ((uVar53 & 8) == 0) {
          pEVar60 = pEVar61;
          if ((uVar53 & 0x10) == 0) {
            do {
              pEVar52 = output_blocksize + -(long)oc;
              if ((long)pEVar59 < (long)(output_blocksize + -(long)oc)) {
                pEVar52 = pEVar59;
              }
              pEVar61 = pEVar62 + (long)oc;
              pEVar62 = oc + (long)pEVar52;
              pEVar59 = pEVar59 + -(long)pEVar52;
              memcpy(pEVar61,pEVar60,(size_t)pEVar52);
              oc = pEVar62;
              if ((long)output_blocksize <= (long)pEVar62) {
                write_output();
              }
              pEVar62 = obuf;
              pEVar60 = pEVar60 + (long)pEVar52;
            } while (pEVar59 != (EVP_PKEY_CTX *)0x0);
          }
          else {
            copy_with_unblock(pEVar61,pEVar59);
          }
        }
        else {
          copy_with_block(pEVar61,pEVar59);
        }
      }
joined_r0x001046f7:
      do {
        if ((status_level == 4) &&
           (pEVar60 = (EVP_PKEY_CTX *)gethrxtime(), next_time <= (long)pEVar60)) {
          print_xfer_stats();
          next_time = next_time + 1000000000;
          pEVar61 = pEVar60;
        }
        lVar48 = max_bytes;
        pEVar60 = max_records;
        lVar57 = r_full + r_partial;
        if ((long)(max_records + (max_bytes != 0)) <= lVar57) {
LAB_00104c5f:
          uVar53 = conversions_mask;
          if (-1 < (int)local_120) {
            local_e0 = (EVP_PKEY_CTX *)CONCAT71(local_e0._1_7_,SUB81(local_120,0));
            if ((conversions_mask & 8) == 0) {
              if ((conversions_mask & 0x10) == 0) {
                pEVar54 = oc + 1;
                obuf[(long)oc] = SUB81(local_120,0);
                oc = pEVar54;
                if ((long)output_blocksize <= (long)pEVar54) {
                  write_output();
                  uVar53 = conversions_mask;
                }
              }
              else {
                pEVar61 = (EVP_PKEY_CTX *)&local_e0;
                copy_with_unblock(pEVar61,1);
                uVar53 = conversions_mask;
              }
            }
            else {
              pEVar61 = (EVP_PKEY_CTX *)&local_e0;
              copy_with_block(pEVar61,1);
              uVar53 = conversions_mask;
            }
          }
          if (((uVar53 & 8) == 0) || (col < 1)) goto LAB_00104c98;
          lVar48 = col;
          if (col < conversion_blocksize) goto LAB_001050c1;
          goto LAB_00105057;
        }
        pEVar59 = ibuf;
        if ((~(byte)(conversions_mask >> 8) & 5) == 0) {
          pEVar59 = (EVP_PKEY_CTX *)
                    memset(ibuf,(uint)((conversions_mask & 0x18) != 0) << 5,(size_t)input_blocksize)
          ;
        }
        if (lVar57 < (long)pEVar60) {
          pEVar61 = (EVP_PKEY_CTX *)0x0;
          pEVar60 = (EVP_PKEY_CTX *)(*iread_fnc)(0,pEVar59,input_blocksize);
        }
        else {
          pEVar61 = (EVP_PKEY_CTX *)0x0;
          pEVar60 = (EVP_PKEY_CTX *)(*iread_fnc)(0,pEVar59,lVar48);
        }
        if (0 < (long)pEVar60) {
          if (((long)input_offset < 0) ||
             (bVar63 = SCARRY8((long)input_offset,(long)pEVar60),
             input_offset = input_offset + (long)pEVar60, !bVar63)) goto LAB_001047a2;
          goto LAB_001055a4;
        }
        if (pEVar60 == (EVP_PKEY_CTX *)0x0) {
          i_nocache_eof = i_nocache_eof | i_nocache;
          if (o_nocache != '\0') {
            local_118._0_1_ = (conversions_mask & 0x200) == 0;
          }
          o_nocache_eof = (o_nocache_eof | (byte)local_118) & 1;
          goto LAB_00104c5f;
        }
        if (((conversions_mask & 0x100) == 0) || (status_level != 1)) {
          uVar42 = quotearg_style(4,input_file);
          uVar43 = dcgettext(0,"error reading %s",5);
          pEVar61 = (EVP_PKEY_CTX *)(ulong)*puVar55;
          diagnose(pEVar61,uVar43,uVar42);
          if ((conversions_mask & 0x100) == 0) {
            local_f8 = 1;
            goto LAB_00104c5f;
          }
        }
        print_stats();
        pEVar61 = (EVP_PKEY_CTX *)0x0;
        lVar48 = (long)input_blocksize - (long)pEVar54;
        invalidate_cache();
        if (input_seekable == 0) {
          if (input_seek_errno == 0x1d) goto LAB_00104990;
          *puVar55 = input_seek_errno;
          goto LAB_0010493e;
        }
        if ((long)input_offset < 0) {
LAB_00104a98:
          uVar42 = quotearg_style(4,input_file);
          uVar43 = dcgettext(0,"offset overflow while reading file %s",5);
          pEVar61 = (EVP_PKEY_CTX *)0x0;
          diagnose(0,uVar43,uVar42);
LAB_00104977:
          input_seekable = 0;
          input_seek_errno = 0x1d;
          local_f8 = 1;
        }
        else {
          pEVar60 = input_offset + lVar48;
          if (SCARRY8((long)input_offset,lVar48)) {
            input_offset = (EVP_PKEY_CTX *)0xffffffffffffffff;
            goto LAB_00104a98;
          }
          input_offset = pEVar60;
          if ((long)pEVar60 < 0) goto LAB_00104a98;
          pEVar61 = (EVP_PKEY_CTX *)0x0;
          pEVar59 = (EVP_PKEY_CTX *)lseek(0,0,1);
          if ((long)pEVar59 < 0) {
LAB_0010493e:
            uVar42 = quotearg_n_style_colon(0,3,input_file);
            uVar43 = dcgettext(0,"%s: cannot seek",5);
            pEVar61 = (EVP_PKEY_CTX *)(ulong)*puVar55;
            diagnose(pEVar61,uVar43,uVar42);
            goto LAB_00104977;
          }
          if (pEVar60 != pEVar59) {
            lVar57 = (long)pEVar60 - (long)pEVar59;
            if (((lVar57 < 0) || (lVar48 < lVar57)) && (status_level != 1)) {
              uVar42 = dcgettext(0,"warning: invalid file offset after failed read",5);
              diagnose(0,uVar42);
            }
            pEVar61 = (EVP_PKEY_CTX *)0x0;
            _Var49 = lseek(0,lVar57,1);
            if (_Var49 < 0) {
              if (*puVar55 == 0) {
                uVar42 = dcgettext(0,"cannot work around kernel bug after all",5);
                diagnose(0,uVar42);
              }
              goto LAB_0010493e;
            }
          }
        }
LAB_00104990:
      } while (((conversions_mask & 0x400) == 0) || (pEVar54 != (EVP_PKEY_CTX *)0x0));
      pEVar60 = (EVP_PKEY_CTX *)0x0;
    } while( true );
  }
LAB_001055b4:
  uVar42 = quotearg_style(4,pEVar61);
  uVar43 = dcgettext(0,"unrecognized operand %s",5);
  diagnose(0,uVar43,uVar42);
  usage(1);
LAB_001055f0:
  pcVar41 = "cannot combine any two of {ascii,ebcdic,ibm}";
LAB_001055fc:
  do {
    uVar42 = dcgettext(0,pcVar41,5);
    error(1,0,uVar42);
LAB_00105614:
    pcVar41 = "cannot combine block and unblock";
  } while( true );
  while (lVar48 = lVar48 + -1, pEVar54 = obuf, lVar48 != 0) {
LAB_00104e90:
    pEVar61 = pEVar54;
    pEVar54 = output_blocksize;
    pEVar60 = (EVP_PKEY_CTX *)iwrite_constprop_0(pEVar61,output_blocksize);
    if (pEVar60 != pEVar54) goto LAB_00104ed3;
  }
  if (local_e0 != (EVP_PKEY_CTX *)0x0) {
LAB_00104ebd:
    pEVar60 = local_e0;
    pEVar62 = (EVP_PKEY_CTX *)iwrite_constprop_0(pEVar54,local_e0);
    pEVar61 = pEVar54;
    if (pEVar62 != pEVar60) {
LAB_00104ed3:
      uVar42 = quotearg_style(4,output_file);
      uVar43 = dcgettext(0,"writing to %s",5);
      diagnose(*puVar55,uVar43,uVar42);
                    /* WARNING: Subroutine does not return */
      quit_constprop_0();
    }
  }
LAB_001046a8:
  if (max_records != (EVP_PKEY_CTX *)0x0 || max_bytes != 0) {
    if (ibuf == (EVP_PKEY_CTX *)0x0) {
      alloc_ibuf_part_0();
    }
    alloc_obuf();
    local_f8 = 0;
    pEVar54 = (EVP_PKEY_CTX *)0x0;
    local_120 = (EVP_PKEY_CTX *)0xffffffff;
    local_118 = (EVP_PKEY_CTX *)0x0;
    goto joined_r0x001046f7;
  }
  goto LAB_00104ce1;
LAB_001050c1:
  do {
    pEVar54 = oc + 1;
    obuf[(long)oc] = space_character;
    oc = pEVar54;
    if ((long)output_blocksize <= (long)pEVar54) {
      write_output();
    }
    lVar48 = lVar48 + 1;
  } while (lVar48 < conversion_blocksize);
LAB_00104c98:
  pEVar54 = oc;
  uVar53 = conversions_mask;
  if (col != 0) {
LAB_00105057:
    pEVar54 = oc;
    if ((uVar53 & 0x10) != 0) {
      pEVar54 = oc + 1;
      pEVar60 = obuf + (long)oc;
      oc = pEVar54;
      *pEVar60 = newline_character;
      if ((long)output_blocksize <= (long)pEVar54) {
        write_output();
        pEVar54 = oc;
      }
    }
  }
  if (pEVar54 == (EVP_PKEY_CTX *)0x0) {
LAB_00104cb6:
    if (final_op_was_seek != '\0') {
      pEVar61 = (EVP_PKEY_CTX *)0x1;
      iVar40 = ifstat();
      if (iVar40 != 0) {
        uVar42 = quotearg_style(4,output_file);
        pcVar41 = "cannot fstat %s";
        goto LAB_00104dd7;
      }
      if ((local_c0 & 0xf000) == 0x8000) {
        pEVar61 = (EVP_PKEY_CTX *)0x1;
        pEVar54 = (EVP_PKEY_CTX *)lseek(1,0,1);
        if (((-1 < (long)pEVar54) && (lStack_a8 < (long)pEVar54)) &&
           (pEVar61 = pEVar54, iVar40 = iftruncate_constprop_0(), iVar40 != 0)) {
          uVar42 = quotearg_style(4,output_file);
          uVar43 = dcgettext(0,"failed to truncate to %jd bytes in output file %s",5);
          pEVar61 = (EVP_PKEY_CTX *)(ulong)*puVar55;
          diagnose(pEVar61,uVar43,pEVar54,uVar42);
          goto LAB_00104dee;
        }
      }
    }
    if ((((conversions_mask & 0xc000) != 0) && (status_level == 4)) &&
       ((-1 < reported_w_bytes && (reported_w_bytes < (long)w_bytes)))) {
      pEVar61 = (EVP_PKEY_CTX *)0x0;
      print_xfer_stats();
    }
    pEVar59 = (EVP_PKEY_CTX *)(ulong)local_f8;
  }
  else {
    pEVar61 = obuf;
    pEVar54 = (EVP_PKEY_CTX *)iwrite_constprop_0();
    w_bytes = w_bytes + (long)pEVar54;
    if (pEVar54 != (EVP_PKEY_CTX *)0x0) {
      w_partial = w_partial + 1;
    }
    if (pEVar54 == oc) goto LAB_00104cb6;
LAB_00104db7:
    uVar42 = quotearg_style(4,output_file);
    pcVar41 = "error writing %s";
LAB_00104dd7:
    uVar43 = dcgettext(0,pcVar41,5);
    pEVar61 = (EVP_PKEY_CTX *)(ulong)*puVar55;
    diagnose(pEVar61,uVar43,uVar42);
LAB_00104dee:
    pEVar59 = (EVP_PKEY_CTX *)0x1;
  }
LAB_00104ce1:
  uVar53 = synchronize_output();
  pEVar54 = (EVP_PKEY_CTX *)(ulong)uVar53;
  if (uVar53 == 0) {
    pEVar54 = pEVar59;
  }
  if (max_records == (EVP_PKEY_CTX *)0x0 && max_bytes == 0) {
    if (i_nocache != 0) {
      pEVar61 = (EVP_PKEY_CTX *)0x0;
      cVar39 = invalidate_cache(0,0);
      if (cVar39 == '\0') {
        uVar42 = quotearg_n_style_colon(0,3,input_file);
        uVar43 = dcgettext(0,"failed to discard cache for: %s",5);
        pEVar61 = (EVP_PKEY_CTX *)(ulong)*puVar55;
        pEVar54 = (EVP_PKEY_CTX *)0x1;
        diagnose(pEVar61,uVar43,uVar42);
      }
    }
    if (o_nocache != '\0') {
      pEVar61 = (EVP_PKEY_CTX *)0x1;
      cVar39 = invalidate_cache(1,0);
      if (cVar39 == '\0') {
        uVar42 = quotearg_n_style_colon(0,3,output_file);
        uVar43 = dcgettext(0,"failed to discard cache for: %s",5);
        pEVar61 = (EVP_PKEY_CTX *)(ulong)*puVar55;
        pEVar54 = (EVP_PKEY_CTX *)0x1;
        diagnose(pEVar61,uVar43,uVar42);
      }
    }
  }
  else {
    if ((i_nocache != 0) || (i_nocache_eof != 0)) {
      pEVar61 = (EVP_PKEY_CTX *)0x0;
      invalidate_cache(0,0);
    }
    if ((o_nocache != '\0') || (o_nocache_eof != 0)) {
      pEVar61 = (EVP_PKEY_CTX *)0x1;
      invalidate_cache(1,0);
    }
  }
  process_signals();
  cleanup(pEVar61);
  print_stats();
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pEVar54;
}


