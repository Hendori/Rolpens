
char * make_filename(undefined4 param_1)

{
  undefined4 uVar1;
  long lVar2;
  char *pcVar3;
  size_t sVar4;
  
  strcpy(filename_space,prefix);
  pcVar3 = filename_space;
  lVar2 = suffix;
  uVar1 = digits;
  if (suffix != 0) {
    sVar4 = strlen(prefix);
    __sprintf_chk(pcVar3 + sVar4,2,0xffffffffffffffff,lVar2,param_1);
    return filename_space;
  }
  sVar4 = strlen(prefix);
  __sprintf_chk(pcVar3 + sVar4,2,0xffffffffffffffff,&_LC0,uVar1,param_1);
  return filename_space;
}



void new_control_record(void)

{
  undefined1 (*pauVar1) [16];
  
  if (control_used == control_allocated_1) {
    controls = xpalloc(controls,&control_allocated_1,1,0xffffffffffffffff,0x60);
  }
  pauVar1 = (undefined1 (*) [16])(control_used * 0x60 + controls);
  control_used = control_used + 1;
  pauVar1[1][0xe] = 0;
  *(undefined8 *)pauVar1[1] = 0;
  pauVar1[1][0xc] = 0;
  *pauVar1 = (undefined1  [16])0x0;
  return;
}



undefined8 * get_new_buffer(undefined8 param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)xmalloc(0x48);
  *puVar2 = 0;
  uVar3 = xpalloc(0,puVar2,param_1,0xffffffffffffffff,1);
  puVar2[1] = 0;
  puVar2[5] = uVar3;
  lVar1 = last_line_number;
  puVar2[4] = 0;
  puVar2[7] = 0;
  puVar2[3] = lVar1 + 1;
  puVar2[2] = lVar1 + 1;
  puVar2[6] = 0;
  puVar2[8] = 0;
  return puVar2;
}



void free_buffer(void *param_1)

{
  void *pvVar1;
  void *__ptr;
  
  __ptr = *(void **)((long)param_1 + 0x30);
  while (__ptr != (void *)0x0) {
    pvVar1 = *(void **)((long)__ptr + 0x518);
    free(__ptr);
    __ptr = pvVar1;
  }
  free(*(void **)((long)param_1 + 0x28));
  free(param_1);
  return;
}



void delete_all_files_part_0(char param_1)

{
  int iVar1;
  char *__name;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  bool bVar5;
  
  iVar4 = files_created + -1;
  if (-1 < iVar4) {
    do {
      __name = (char *)make_filename(iVar4);
      iVar1 = unlink(__name);
      if (((iVar1 != 0) && (piVar2 = __errno_location(), *piVar2 != 2)) && (param_1 == '\0')) {
        uVar3 = quotearg_n_style_colon(0,3,__name);
        error(0,*piVar2,&_LC1,uVar3);
      }
      bVar5 = iVar4 != 0;
      iVar4 = iVar4 + -1;
    } while (bVar5);
  }
  files_created = 0;
  return;
}



void cleanup_fatal(void)

{
  long in_FS_OFFSET;
  sigset_t sStack_98;
  undefined8 local_10;
  
  local_10 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  close_output_file();
  sigprocmask(0,(sigset_t *)&caught_signals,&sStack_98);
  if (remove_files != '\0') {
    delete_all_files_part_0(0);
  }
  sigprocmask(2,&sStack_98,(sigset_t *)0x0);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void close_output_file(void)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long in_FS_OFFSET;
  sigset_t sStack_b8;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (output_stream == (byte *)0x0) {
LAB_0010037b:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  if ((*output_stream & 0x20) == 0) {
    iVar2 = rpl_fclose();
    if (iVar2 == 0) {
      if ((bytes_written == 0) && (elide_empty_files != '\0')) {
        sigprocmask(0,(sigset_t *)&caught_signals,&sStack_b8);
        pcVar1 = output_filename;
        iVar3 = unlink(output_filename);
        piVar4 = __errno_location();
        iVar2 = *piVar4;
        files_created = files_created + -1;
        sigprocmask(2,&sStack_b8,(sigset_t *)0x0);
        if ((iVar3 != 0) && (iVar2 != 2)) {
          uVar5 = quotearg_n_style_colon(0,3,pcVar1);
          error(0,iVar2,&_LC1,uVar5);
        }
      }
      else if (suppress_count == '\0') {
        __fprintf_chk(_stdout,2,&_LC3);
      }
      output_stream = (byte *)0x0;
      goto LAB_0010037b;
    }
    uVar5 = quotearg_n_style_colon(0,3,output_filename);
    piVar4 = __errno_location();
    puVar6 = &_LC1;
    iVar2 = *piVar4;
  }
  else {
    uVar5 = quotearg_style(4,output_filename);
    puVar6 = (undefined *)dcgettext(0,"write error for %s",5);
    iVar2 = 0;
  }
  error(0,iVar2,puVar6,uVar5);
  output_stream = (byte *)0x0;
                    /* WARNING: Subroutine does not return */
  cleanup_fatal();
}



void save_line_to_file(size_t *param_1)

{
  size_t sVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int *piVar4;
  
  sVar1 = fwrite_unlocked((void *)param_1[1],1,*param_1,output_stream);
  if (*param_1 == sVar1) {
    bytes_written = bytes_written + *param_1;
    return;
  }
  uVar2 = quotearg_style(4,output_filename);
  uVar3 = dcgettext(0,"write error for %s",5);
  piVar4 = __errno_location();
  error(0,*piVar4,uVar3,uVar2);
  output_stream = (FILE *)0x0;
                    /* WARNING: Subroutine does not return */
  cleanup_fatal();
}



void create_output_file(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  int *piVar4;
  int iVar5;
  long in_FS_OFFSET;
  sigset_t sStack_b8;
  long local_30;
  
  iVar1 = files_created;
  iVar5 = 0x4b;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = make_filename();
  output_filename = uVar2;
  if (iVar1 != 0x7fffffff) {
    sigprocmask(0,(sigset_t *)&caught_signals,&sStack_b8);
    lVar3 = fopen_safer(uVar2,&_LC4);
    output_stream = lVar3;
    piVar4 = __errno_location();
    files_created = (iVar1 + 1) - (uint)(lVar3 == 0);
    iVar5 = *piVar4;
    sigprocmask(2,&sStack_b8,(sigset_t *)0x0);
    if (lVar3 != 0) {
      bytes_written = 0;
      if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  }
  uVar2 = quotearg_n_style_colon(0,3,output_filename);
  error(0,iVar5,&_LC1,uVar2);
                    /* WARNING: Subroutine does not return */
  cleanup_fatal();
}



void interrupt_handler(int param_1)

{
  if (remove_files != '\0') {
    delete_all_files_part_0(1);
  }
  signal(param_1,(__sighandler_t)0x0);
  raise(param_1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void handle_line_error_isra_0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 auStack_38 [24];
  undefined8 local_20;
  
  local_20 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  uVar1 = imaxtostr(param_1,auStack_38);
  uVar2 = quote(uVar1);
  uVar1 = _program_name;
  uVar3 = dcgettext(0,"%s: %s: line number out of range",5);
  __fprintf_chk(_stderr,2,uVar3,uVar1,uVar2);
  if (param_2 == 0) {
    fputc(10,_stderr);
  }
  else {
    uVar1 = dcgettext(0," on repetition %jd\n",5);
    __fprintf_chk(_stderr,2,uVar1,param_2);
  }
                    /* WARNING: Subroutine does not return */
  cleanup_fatal();
}



void keep_new_line(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  long lVar3;
  long lVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 0x30) == 0) {
    pauVar2 = (undefined1 (*) [16])xmalloc(0x520);
    lVar4 = 1;
    lVar5 = 1;
    *pauVar2 = (undefined1  [16])0x0;
    *(undefined8 *)pauVar2[1] = 0;
    *(undefined8 *)(pauVar2[0x51] + 8) = 0;
    lVar3 = 0;
    *(undefined1 (**) [16])(param_1 + 0x30) = pauVar2;
    *(undefined1 (**) [16])(param_1 + 0x38) = pauVar2;
  }
  else {
    pauVar2 = *(undefined1 (**) [16])(param_1 + 0x38);
    if (*(long *)*pauVar2 == 0x50) {
      pauVar1 = (undefined1 (*) [16])xmalloc(0x520);
      *pauVar1 = (undefined1  [16])0x0;
      *(undefined8 *)(pauVar1[0x51] + 8) = 0;
      *(undefined8 *)pauVar1[1] = 0;
      *(undefined1 (**) [16])(pauVar2[0x51] + 8) = pauVar1;
      pauVar2 = *(undefined1 (**) [16])(*(long *)(param_1 + 0x38) + 0x518);
      lVar5 = *(long *)*pauVar2;
      lVar3 = *(long *)(*pauVar2 + 8);
      *(undefined1 (**) [16])(param_1 + 0x38) = pauVar2;
      lVar5 = lVar5 + 1;
      lVar4 = lVar3 + 1;
    }
    else {
      lVar3 = *(long *)(*pauVar2 + 8);
      lVar5 = *(long *)*pauVar2 + 1;
      lVar4 = lVar3 + 1;
    }
  }
  *(undefined8 *)pauVar2[lVar3 + 2] = param_2;
  *(undefined8 *)(pauVar2[lVar3 + 1] + 8) = param_3;
  *(long *)*pauVar2 = lVar5;
  *(long *)(*pauVar2 + 8) = lVar4;
  return;
}



void xalloc_die(void)

{
  undefined8 uVar1;
  
  uVar1 = dcgettext(0,"memory exhausted",5);
  error(0,0,&_LC1,uVar1);
                    /* WARNING: Subroutine does not return */
  cleanup_fatal();
}



undefined8 load_buffer(void)

{
  long lVar1;
  long *plVar2;
  size_t sVar3;
  long *plVar4;
  undefined1 *puVar5;
  long *plVar6;
  void *pvVar7;
  undefined8 uVar8;
  int *piVar9;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined1 *__s;
  
  if (have_read_eof != '\0') {
    return 0;
  }
  sVar3 = hold_count;
  if ((long)hold_count < 0x1ffe) {
    sVar3 = 0x1ffe;
  }
  pvVar7 = (void *)(sVar3 + 1);
LAB_001008b8:
  plVar4 = (long *)get_new_buffer(pvVar7);
  sVar3 = hold_count;
  lVar1 = *plVar4;
  pvVar7 = (void *)plVar4[5];
  lVar10 = lVar1;
  if (hold_count != 0) {
    pvVar7 = mempcpy(pvVar7,hold_area,hold_count);
    plVar4[1] = plVar4[1] + sVar3;
    hold_count = 0;
    lVar10 = lVar1 - sVar3;
  }
  if (lVar10 != 1) goto LAB_00100a68;
LAB_001008e4:
  lVar10 = 0;
  do {
    lVar10 = lVar10 + plVar4[1];
    plVar4[1] = lVar10;
    if (lVar10 != 0) {
      __s = (undefined1 *)plVar4[5];
      lVar12 = 0;
      puVar11 = __s + lVar10;
      *puVar11 = 10;
      while( true ) {
        puVar5 = (undefined1 *)rawmemchr(__s,10);
        sVar3 = (long)puVar5 - (long)__s;
        if (puVar11 == puVar5) break;
        lVar12 = lVar12 + 1;
        keep_new_line(plVar4,__s,sVar3 + 1);
        __s = puVar5 + 1;
      }
      if (sVar3 != 0) {
        if (have_read_eof != '\0') {
          keep_new_line(plVar4,__s);
          plVar4[4] = lVar12 + 1;
          lVar1 = last_line_number + 1;
          last_line_number = last_line_number + lVar12 + 1;
          plVar4[2] = lVar1;
          plVar4[3] = lVar1;
          goto LAB_0010098d;
        }
        pvVar7 = (void *)ximemdup(__s,sVar3);
        free(hold_area);
        hold_count = sVar3;
        hold_area = pvVar7;
      }
      plVar4[4] = lVar12;
      lVar10 = last_line_number + 1;
      last_line_number = last_line_number + lVar12;
      plVar4[2] = lVar10;
      plVar4[3] = lVar10;
      if (lVar12 != 0) {
LAB_0010098d:
        plVar4[8] = 0;
        plVar4[7] = plVar4[6];
        plVar2 = head;
        if (head != (long *)0x0) {
          do {
            plVar6 = plVar2;
            plVar2 = (long *)plVar6[8];
          } while (plVar2 != (long *)0x0);
          plVar6[8] = (long)plVar4;
          plVar4 = head;
        }
        head = plVar4;
        return 1;
      }
    }
    free_buffer(plVar4);
    if (have_read_eof != '\0') {
      return 0;
    }
    pvVar7 = (void *)((lVar1 >> 1) + lVar1);
    if (!SCARRY8(lVar1 >> 1,lVar1)) goto LAB_001008b8;
    xalloc_die();
LAB_00100a68:
    lVar10 = safe_read(0,pvVar7);
    if (lVar10 == 0) break;
    if (lVar10 < 0) {
      uVar8 = dcgettext(0,"read error",5);
      piVar9 = __errno_location();
      error(0,*piVar9,uVar8);
                    /* WARNING: Subroutine does not return */
      cleanup_fatal();
    }
  } while( true );
  have_read_eof = '\x01';
  goto LAB_001008e4;
}



long find_line(long param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (((head == 0) && (cVar1 = load_buffer(), cVar1 == '\0')) ||
     (lVar2 = *(long *)(head + 0x10), param_1 < lVar2)) {
    return 0;
  }
  lVar3 = *(long *)(head + 0x20) + lVar2;
  lVar5 = head;
  while (lVar4 = lVar5, lVar3 <= param_1) {
    while (lVar5 = *(long *)(lVar4 + 0x40), lVar5 != 0) {
      lVar2 = *(long *)(lVar5 + 0x10);
      lVar4 = lVar5;
      if (param_1 < *(long *)(lVar5 + 0x20) + lVar2) goto LAB_00100b98;
    }
    cVar1 = load_buffer();
    if (cVar1 == '\0') {
      return 0;
    }
    lVar5 = *(long *)(lVar4 + 0x40);
    lVar2 = *(long *)(lVar5 + 0x10);
    lVar3 = *(long *)(lVar5 + 0x20) + lVar2;
  }
LAB_00100b98:
  uVar6 = param_1 - lVar2;
  lVar2 = *(long *)(lVar5 + 0x30);
  uVar7 = uVar6;
  if (0x4f < (long)uVar6) {
    uVar7 = uVar6 - 0x50;
    lVar2 = *(long *)(lVar2 + 0x518);
    if (0x4f < (long)uVar7) {
      if ((uVar7 / 0x50 & 1) != 0) {
        uVar7 = uVar6 - 0xa0;
        lVar2 = *(long *)(lVar2 + 0x518);
        if ((long)uVar7 < 0x50) goto LAB_00100bfb;
      }
      do {
        uVar7 = uVar7 - 0xa0;
        lVar2 = *(long *)(*(long *)(lVar2 + 0x518) + 0x518);
      } while (0x4f < (long)uVar7);
    }
  }
LAB_00100bfb:
  return lVar2 + 0x18 + uVar7 * 0x10;
}



long * remove_line(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  long lVar5;
  long *plVar6;
  
  if (prev_buf_0 != 0) {
    free_buffer();
    prev_buf_0 = 0;
  }
  if ((head == 0) && (cVar4 = load_buffer(), cVar4 == '\0')) {
    plVar6 = (long *)0x0;
  }
  else {
    lVar3 = head;
    lVar1 = *(long *)(head + 0x18);
    if (current_line < lVar1) {
      current_line = lVar1;
    }
    plVar2 = *(long **)(head + 0x38);
    *(long *)(head + 0x18) = lVar1 + 1;
    lVar1 = plVar2[2];
    lVar5 = lVar1 + 1;
    plVar2[2] = lVar5;
    plVar6 = plVar2 + lVar1 * 2 + 3;
    if (lVar5 == *plVar2) {
      plVar2 = (long *)plVar2[0xa3];
      *(long **)(lVar3 + 0x38) = plVar2;
      if ((plVar2 == (long *)0x0) || (*plVar2 == 0)) {
        prev_buf_0 = lVar3;
        head = *(undefined8 *)(lVar3 + 0x40);
        return plVar6;
      }
    }
  }
  return plVar6;
}



void dump_rest_of_file(void)

{
  long lVar1;
  
  while( true ) {
    lVar1 = remove_line();
    if (lVar1 == 0) break;
    save_line_to_file(lVar1);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void regexp_error_isra_0(int param_1,long param_2,char param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = quote(*(undefined8 *)(global_argv + (long)param_1 * 8));
  uVar3 = _program_name;
  uVar2 = dcgettext(0,"%s: %s: match not found",5);
  __fprintf_chk(_stderr,2,uVar2,uVar3,uVar1);
  if (param_2 == 0) {
    fputc(10,_stderr);
  }
  else {
    uVar3 = dcgettext(0," on repetition %jd\n",5);
    __fprintf_chk(_stderr,2,uVar3,param_2);
  }
  if (param_3 == '\0') {
    dump_rest_of_file();
    close_output_file();
  }
                    /* WARNING: Subroutine does not return */
  cleanup_fatal();
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
    goto LAB_00100e5a;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... FILE PATTERN...\n",5);
  __printf_chk(2,uVar3,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "Output pieces of FILE separated by PATTERN(s) to files \'xx00\', \'xx01\', ...,\nand output byte counts of each piece to standard output.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"\nRead standard input if FILE is -\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -b, --suffix-format=FORMAT  use sprintf FORMAT instead of %02d\n  -f, --prefix=PREFIX        use PREFIX instead of \'xx\'\n  -k, --keep-files           do not remove output files on errors\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --suppress-matched     suppress the lines matching PATTERN\n",
                             5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -n, --digits=DIGITS        use specified number of digits instead of 2\n  -s, --quiet, --silent      do not print counts of output file sizes\n  -z, --elide-empty-files    suppress empty output files\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nEach PATTERN may be:\n  INTEGER            copy up to but not including specified line number\n  /REGEXP/[OFFSET]   copy up to but not including a matching line\n  %REGEXP%[OFFSET]   skip to, but not including a matching line\n  {INTEGER}          repeat the previous pattern specified number of times\n  {*}                repeat the previous pattern as many times as possible\n\nA line OFFSET is an integer optionally preceded by \'+\' or \'-\'\n"
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
    iVar2 = strcmp("csplit",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)ppuVar7 + 0x10);
    ppuVar7 = (undefined **)((long)ppuVar7 + 0x10);
  } while (pcVar4 != (char *)0x0);
  pcVar4 = *(char **)((long)ppuVar7 + 8);
  if (pcVar4 == (char *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    pcVar4 = "csplit";
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) goto LAB_001010f5;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","csplit");
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) {
LAB_001010f5:
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
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","csplit");
    if (pcVar4 == "csplit") {
      pcVar6 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,pcVar4,pcVar6);
LAB_00100e5a:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 main(int param_1,undefined8 *param_2)

{
  byte *pbVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  size_t sVar6;
  char *pcVar7;
  char *pcVar8;
  long *plVar9;
  long lVar10;
  ushort **ppuVar11;
  byte *pbVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  byte bVar15;
  ulong uVar16;
  uint uVar17;
  uint *puVar18;
  int *piVar19;
  char *pcVar20;
  uint *puVar21;
  ulong uVar22;
  undefined4 *puVar23;
  char *pcVar24;
  undefined4 *puVar25;
  long lVar26;
  long lVar27;
  long in_R9;
  long unaff_R13;
  ulong uVar28;
  undefined8 *puVar29;
  long lVar30;
  long lVar31;
  long in_FS_OFFSET;
  byte bVar32;
  long local_100;
  ulong *local_f0;
  ulong local_e0;
  _union_1457 local_d8;
  undefined4 local_d0 [32];
  undefined4 local_50;
  long local_40;
  
  bVar32 = 0;
  puVar29 = (undefined8 *)&_LC13;
  pcVar20 = "f:b:kn:sqz";
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  puVar18 = &switchD_00101fa4::switchdataD_00102d00;
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  remove_files = 1;
  controls = 0;
  control_used = 0;
  suppress_count = 0;
  suppress_matched = '\0';
  prefix = &_LC41;
  global_argv = param_2;
  do {
    iVar5 = getopt_long(param_1,param_2,"f:b:kn:sqz",longopts,0);
    if (iVar5 == -1) {
      uVar17 = _optind;
      if ((int)(param_1 - _optind) < 2) goto LAB_001028b0;
      puVar18 = (uint *)strlen((char *)prefix);
      if (suffix == (byte *)0x0) {
        lVar26 = 0xb;
        if (10 < digits) goto LAB_001028e6;
        goto LAB_001021ea;
      }
      bVar2 = false;
      in_R9 = 1;
      uVar28 = 0x100800001;
      bVar15 = *suffix;
      pbVar12 = suffix;
      if (bVar15 != 0) goto LAB_00102110;
LAB_00102a69:
      pcVar24 = "missing %% conversion specification in suffix";
LAB_00102a75:
      uVar13 = dcgettext(0,pcVar24,5);
      error(1,0,uVar13);
      goto LAB_00102a8d;
    }
    if (0x80 < iVar5) goto switchD_00101fa4_caseD_63;
    if (iVar5 < 0x62) {
      if (iVar5 == -0x83) {
        uVar13 = proper_name_lite("David MacKenzie","David MacKenzie");
        uVar14 = proper_name_lite("Stuart Kemp","Stuart Kemp");
        version_etc(_stdout,"csplit","GNU coreutils",_Version,uVar14,uVar13,0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar5 != -0x82) {
switchD_00101fa4_caseD_63:
        do {
          usage(1);
LAB_001028e6:
          lVar26 = (long)(int)digits;
LAB_001021ea:
          if (!SCARRY8(lVar26 + 1,(long)puVar18)) {
            filename_space = ximalloc(lVar26 + 1 + (long)puVar18);
            pcVar20 = (char *)param_2[(int)_optind];
            uVar17 = _optind + 1;
            _optind = uVar17;
            iVar5 = strcmp(pcVar20,"-");
            if ((iVar5 != 0) && (iVar5 = fd_reopen(0,pcVar20,0,0), uVar17 = _optind, iVar5 < 0)) {
              pcVar20 = (char *)quotearg_style(4,pcVar20);
              uVar13 = dcgettext(0,"cannot open %s for reading",5);
              piVar19 = __errno_location();
              error(1,*piVar19,uVar13,pcVar20);
LAB_00102962:
              ppuVar11 = __ctype_b_loc();
              puVar18 = (uint *)((ulong)pcVar20 & 0xff);
              pcVar24 = "invalid conversion specifier in suffix: %c";
              if ((*(byte *)((long)*ppuVar11 + (long)pcVar20 * 2 + 1) & 0x40) == 0) {
                pcVar24 = "invalid conversion specifier in suffix: \\%.3o";
              }
              uVar13 = dcgettext(0,pcVar24,5);
              uVar22 = 0;
              uVar28 = 1;
              pbVar12 = (byte *)error(1,0,uVar13,puVar18);
LAB_001029a2:
              uVar17 = 2;
LAB_001021b9:
              uVar17 = ~uVar17 & (uint)uVar22;
              if (uVar17 != 0) {
                uVar13 = dcgettext(0,"invalid flags in conversion specification: %%%c%c",5);
                error(1,0,uVar13,(-((uVar17 & 2) == 0) & 4U) + 0x23,(int)(char)pcVar20);
                goto LAB_00102c80;
              }
              bVar2 = true;
              do {
                bVar15 = pbVar12[1];
                pbVar12 = pbVar12 + 1;
                if (bVar15 == 0) {
                  if (!bVar2) goto LAB_00102a69;
                  in_R9 = 0x7fffffff;
                  iVar5 = __snprintf_chk(0,0,2);
                  lVar26 = (long)iVar5;
                  if (iVar5 < 0) goto LAB_001028ab;
                  goto LAB_001021ea;
                }
LAB_00102110:
                pbVar1 = pbVar12 + 1;
              } while ((bVar15 != 0x25) || (pbVar12 = pbVar12 + 1, *pbVar1 == 0x25));
              if (!bVar2) {
                uVar22 = 0;
                do {
                  bVar15 = *pbVar12;
                  if (bVar15 == 0x27) {
                    uVar22 = (ulong)((uint)uVar22 | 1);
                  }
                  else if ((char)bVar15 < '(') {
                    if (bVar15 != 0x23) goto LAB_0010215d;
                    uVar22 = (ulong)((uint)uVar22 | 2);
                  }
                  else if ((bVar15 != 0x2d) && (bVar15 != 0x30)) goto LAB_0010215d;
                  pbVar12 = pbVar12 + 1;
                } while( true );
              }
              pcVar24 = "too many %% conversion specifications in suffix";
              goto LAB_00102a75;
            }
            puVar18 = (uint *)(ulong)uVar17;
            local_f0 = &local_e0;
            if ((int)uVar17 < param_1) goto LAB_00102248;
            goto LAB_00102360;
          }
LAB_001028ab:
          uVar17 = xalloc_die();
LAB_001028b0:
          if ((int)uVar17 < param_1) {
LAB_00102c80:
            unaff_R13 = (long)param_1;
            puVar18 = (uint *)quote(param_2[unaff_R13 + -1]);
            uVar13 = dcgettext(0,"missing operand after %s",5);
            error(0,0,uVar13);
          }
          else {
            uVar13 = dcgettext(0,"missing operand",5);
            error(0,0,uVar13);
          }
        } while( true );
      }
      usage(0);
      goto LAB_00102a69;
    }
    switch(iVar5) {
    case 0x62:
      suffix = _optarg;
      break;
    default:
      goto switchD_00101fa4_caseD_63;
    case 0x66:
      prefix = _optarg;
      break;
    case 0x6b:
      remove_files = 0;
      break;
    case 0x6e:
      dcgettext(0,"invalid number",5);
      in_R9 = 0;
      digits = xdectoimax(_optarg,0,0x7fffffff,&_LC13);
      break;
    case 0x71:
    case 0x73:
      suppress_count = 1;
      break;
    case 0x7a:
      elide_empty_files = 1;
      break;
    case 0x80:
      suppress_matched = '\x01';
    }
  } while( true );
LAB_0010215d:
  for (; (int)(char)*pbVar12 - 0x30U < 10; pbVar12 = pbVar12 + 1) {
  }
  if (*pbVar12 == 0x2e) {
    do {
      pbVar1 = pbVar12 + 1;
      pbVar12 = pbVar12 + 1;
    } while ((int)(char)*pbVar1 - 0x30U < 10);
  }
  bVar15 = *pbVar12;
  pcVar20 = (char *)(ulong)bVar15;
  if (bVar15 == 0) {
    pcVar24 = "missing conversion specifier in suffix";
    goto LAB_00102a75;
  }
  bVar15 = bVar15 + 0xa8;
  if (0x20 < bVar15) goto LAB_00102962;
  uVar16 = in_R9 << (bVar15 & 0x3f);
  if ((uVar16 & uVar28) != 0) goto LAB_001029a2;
  if ((uVar16 & 0x21000) == 0) {
    if (bVar15 != 0x1d) goto LAB_00102962;
    *pbVar12 = 100;
  }
  uVar17 = 1;
  goto LAB_001021b9;
LAB_00102248:
  iVar5 = (int)puVar18;
  pcVar20 = (char *)((long)iVar5 * 8);
  puVar29 = param_2 + iVar5;
  pcVar24 = (char *)*puVar29;
  cVar3 = *pcVar24;
  if ((cVar3 != '/') && (cVar3 != '%')) {
    unaff_R13 = new_control_record();
    uVar13 = *puVar29;
    *(int *)(unaff_R13 + 0x18) = iVar5;
    iVar5 = xstrtoumax(uVar13,0,10,local_f0,&_LC13);
    uVar28 = last_val_2;
    if (iVar5 != 0) goto LAB_00102b25;
    if ((long)local_e0 < 0) goto LAB_00102b25;
    if (local_e0 != 0) {
      if (last_val_2 <= local_e0) {
        if (local_e0 == last_val_2) {
LAB_00102a8d:
          uVar13 = quote(*puVar29);
          uVar14 = dcgettext(0,"warning: line number %s is the same as preceding line number",5);
          error(0,0,uVar14,uVar13);
        }
        last_val_2 = local_e0;
        *(ulong *)(unaff_R13 + 8) = local_e0;
        goto LAB_001022d2;
      }
      uVar13 = quote(*puVar29);
      uVar14 = dcgettext(0,"line number %s is smaller than preceding line number, %jd",5);
      error(1,0,uVar14,uVar13,uVar28);
    }
    uVar13 = *puVar29;
    pcVar20 = "%s: line number must be greater than zero";
    goto LAB_00102b0a;
  }
  uVar28 = (ulong)(uint)(int)cVar3;
  pcVar7 = strrchr(pcVar24 + 1,(int)cVar3);
  if (pcVar7 == (char *)0x0) {
    uVar13 = dcgettext(0,"%s: closing delimiter \'%c\' missing",5);
    error(1,0,uVar13,pcVar24,uVar28);
    goto LAB_00102bc5;
  }
  unaff_R13 = new_control_record();
  *(int *)(unaff_R13 + 0x18) = iVar5;
  *(bool *)(unaff_R13 + 0x1d) = cVar3 == '%';
  *(undefined1 *)(unaff_R13 + 0x1e) = 1;
  *(undefined8 *)(unaff_R13 + 0x20) = 0;
  *(undefined8 *)(unaff_R13 + 0x28) = 0;
  uVar13 = xmalloc(0x100);
  *(undefined8 *)(unaff_R13 + 0x40) = uVar13;
  *(undefined8 *)(unaff_R13 + 0x48) = 0;
  _re_syntax_options = 0x2c6;
  pcVar8 = re_compile_pattern(pcVar24 + 1,(size_t)(pcVar7 + (-1 - (long)pcVar24)),
                              (re_pattern_buffer *)(unaff_R13 + 0x20));
  if (pcVar8 != (char *)0x0) {
    uVar13 = quote(pcVar24);
    uVar14 = dcgettext(0,"%s: invalid regular expression: %s",5);
    error(0,0,uVar14,uVar13,pcVar8);
                    /* WARNING: Subroutine does not return */
    cleanup_fatal();
  }
  if ((pcVar7[1] != '\0') && (iVar5 = xstrtoimax(pcVar7 + 1,0,10,unaff_R13,&_LC13), iVar5 != 0)) {
    uVar13 = quote(pcVar24);
    pcVar20 = "%s: integer expected after delimiter";
    goto LAB_00102b0a;
  }
LAB_001022d2:
  uVar17 = (int)puVar18 + 1;
  if (param_1 <= (int)uVar17) {
LAB_00102360:
    puVar21 = &sig_3;
    piVar19 = &sig_3;
    sigemptyset((sigset_t *)&caught_signals);
    do {
      iVar5 = *piVar19;
      sigaction(iVar5,(sigaction *)0x0,(sigaction *)&local_d8);
      if (local_d8.sa_handler != (__sighandler_t)0x1) {
        sigaddset((sigset_t *)&caught_signals,iVar5);
      }
      piVar19 = piVar19 + 1;
    } while (piVar19 != (int *)0x102dac);
    puVar23 = &caught_signals;
    puVar25 = local_d0;
    for (lVar26 = 0x20; lVar26 != 0; lVar26 = lVar26 + -1) {
      *puVar25 = *puVar23;
      puVar23 = puVar23 + (ulong)bVar32 * -2 + 1;
      puVar25 = puVar25 + (ulong)bVar32 * -2 + 1;
    }
    local_50 = 0;
    local_d8.sa_handler = interrupt_handler;
    do {
      uVar17 = *puVar21;
      puVar18 = (uint *)(ulong)uVar17;
      iVar5 = sigismember((sigset_t *)&caught_signals,uVar17);
      if (iVar5 != 0) {
        sigaction(uVar17,(sigaction *)&local_d8,(sigaction *)0x0);
      }
      puVar21 = puVar21 + 1;
    } while (puVar21 != (uint *)0x102dac);
    local_100 = 0;
    pcVar20 = (char *)0x102dac;
    do {
      if (control_used <= local_100) {
        create_output_file();
        dump_rest_of_file();
        close_output_file();
        iVar5 = close(0);
        if (iVar5 != 0) {
          uVar13 = dcgettext(0,"read error",5);
          piVar19 = __errno_location();
          error(0,*piVar19,uVar13);
                    /* WARNING: Subroutine does not return */
          cleanup_fatal();
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          return 0;
        }
        goto LAB_00102bd4;
      }
      lVar26 = local_100 * 0x60;
      uVar28 = 0;
      if (*(char *)(controls + 0x1e + lVar26) == '\0') {
        while ((uVar22 = uVar28, lVar27 = controls + lVar26, *(char *)(lVar27 + 0x1c) != '\0' ||
               ((long)uVar22 <= *(long *)(lVar27 + 0x10)))) {
          lVar30 = *(long *)(lVar27 + 8);
          uVar28 = uVar22 + 1;
          create_output_file();
          lVar30 = lVar30 * uVar28;
          lVar31 = find_line(current_line + 1);
          if (((lVar31 == 0) && (suppress_matched != '\0')) ||
             (((head == 0 && (cVar3 = load_buffer(), cVar3 == '\0')) ||
              (lVar31 = *(long *)(head + 0x18), lVar31 == 0)))) goto LAB_00102859;
          puVar18 = (uint *)(lVar31 + 1);
          pcVar20 = (char *)(lVar30 + 1);
          if (lVar30 - lVar31 == 0 || lVar30 < lVar31) {
            close_output_file();
          }
          else {
            do {
              lVar30 = remove_line();
              if (lVar30 == 0) goto LAB_00102859;
              save_line_to_file(lVar30);
              puVar18 = (uint *)((long)puVar18 + 1);
            } while ((uint *)pcVar20 != puVar18);
            close_output_file();
          }
          if (suppress_matched != '\0') {
            remove_line();
          }
          lVar30 = find_line();
          if ((lVar30 == 0) && (suppress_matched == '\0')) {
LAB_00102859:
            handle_line_error_isra_0(*(undefined8 *)(lVar27 + 8),uVar22);
            goto LAB_00102866;
          }
        }
      }
      else {
        for (uVar28 = 0;
            (puVar18 = (uint *)(controls + lVar26), (char)puVar18[7] != '\0' ||
            ((long)uVar28 <= *(long *)(puVar18 + 4))); uVar28 = uVar28 + 1) {
          pcVar20 = (char *)(ulong)*(byte *)((long)puVar18 + 0x1d);
          if (*(byte *)((long)puVar18 + 0x1d) == 0) {
LAB_00102866:
            create_output_file();
          }
          cVar3 = (char)pcVar20;
          if (*(long *)puVar18 < 0) {
            do {
              current_line = current_line + 1;
              plVar9 = (long *)find_line();
              if (plVar9 == (long *)0x0) {
                if ((char)puVar18[7] == '\0') {
LAB_00102bc5:
                  regexp_error_isra_0(puVar18[6],uVar28,(ulong)pcVar20 & 0xff);
LAB_00102bd4:
                    /* WARNING: Subroutine does not return */
                  __stack_chk_fail();
                }
                if (cVar3 != '\0') goto LAB_001025ea;
                while (lVar26 = remove_line(), lVar26 != 0) {
                  save_line_to_file();
                }
LAB_00102768:
                close_output_file();
LAB_001025ea:
                    /* WARNING: Subroutine does not return */
                exit(0);
              }
              lVar27 = *plVar9;
              if (((char *)plVar9[1])[lVar27 + -1] == '\n') {
                lVar27 = lVar27 + -1;
              }
              iVar5 = re_search((re_pattern_buffer *)(puVar18 + 8),(char *)plVar9[1],(int)lVar27,0,
                                (int)lVar27,(re_registers *)0x0);
              if (iVar5 == -2) {
LAB_00102b3e:
                uVar13 = dcgettext(0,"error in regular expression search",5);
                error(0,0,uVar13);
                    /* WARNING: Subroutine does not return */
                cleanup_fatal();
              }
            } while (iVar5 == -1);
          }
          else {
            while( true ) {
              current_line = current_line + 1;
              plVar9 = (long *)find_line();
              if (plVar9 == (long *)0x0) {
                if ((char)puVar18[7] == '\0') goto LAB_00102bc5;
                if (cVar3 != '\0') goto LAB_001025ea;
                while (lVar26 = remove_line(), lVar26 != 0) {
                  save_line_to_file();
                }
                goto LAB_00102768;
              }
              lVar27 = *plVar9;
              if (((char *)plVar9[1])[lVar27 + -1] == '\n') {
                lVar27 = lVar27 + -1;
              }
              iVar5 = re_search((re_pattern_buffer *)(puVar18 + 8),(char *)plVar9[1],(int)lVar27,0,
                                (int)lVar27,(re_registers *)0x0);
              if (iVar5 == -2) goto LAB_00102b3e;
              if (iVar5 != -1) break;
              uVar13 = remove_line();
              if (cVar3 == '\0') {
                save_line_to_file(uVar13);
              }
            }
          }
          lVar27 = current_line + *(long *)puVar18;
          uVar17 = puVar18[6];
          if ((((head == 0) && (cVar4 = load_buffer(), cVar4 == '\0')) ||
              (lVar30 = *(long *)(head + 0x18), lVar30 == 0)) || (lVar27 < lVar30)) {
            uVar13 = global_argv[(int)uVar17];
LAB_00102a26:
            uVar13 = quote(uVar13);
            uVar14 = dcgettext(0,"%s: line number out of range",5);
            error(0,0,uVar14,uVar13);
                    /* WARNING: Subroutine does not return */
            cleanup_fatal();
          }
          lVar31 = 0;
          if (lVar27 != lVar30) {
            do {
              lVar10 = remove_line();
              if (lVar10 == 0) {
                uVar13 = global_argv[(int)uVar17];
                goto LAB_00102a26;
              }
              if (cVar3 == '\0') {
                save_line_to_file();
              }
              lVar31 = lVar31 + 1;
            } while (lVar27 - lVar30 != lVar31);
          }
          if (cVar3 == '\0') {
            close_output_file();
          }
          if (0 < *(long *)puVar18) {
            current_line = lVar27;
          }
          if (suppress_matched != '\0') {
            remove_line();
          }
        }
      }
      local_100 = local_100 + 1;
    } while( true );
  }
  pcVar24 = *(char **)((long)(param_2 + 1) + (long)pcVar20);
  if (*pcVar24 == '{') {
    sVar6 = strlen(pcVar24);
    pcVar7 = pcVar24 + (sVar6 - 1);
    if (*pcVar7 != '}') {
      uVar13 = quote(pcVar24);
      pcVar20 = "%s: \'}\' is required in repeat count";
LAB_00102b0a:
      do {
        uVar14 = dcgettext(0,pcVar20,5);
        error(1,0,uVar14,uVar13);
LAB_00102b25:
        uVar13 = quote();
        pcVar20 = "%s: invalid pattern";
      } while( true );
    }
    *pcVar7 = '\0';
    if ((pcVar24 + 1 == pcVar7 + -1) && (pcVar24[1] == '*')) {
      *(undefined1 *)(unaff_R13 + 0x1c) = 1;
    }
    else {
      iVar5 = xstrtoumax(pcVar24 + 1,0,10,local_f0,&_LC13);
      if ((iVar5 != 0) || ((long)local_e0 < 0)) {
        uVar13 = quote(*(undefined8 *)((long)(global_argv + 1) + (long)pcVar20));
        pcVar20 = "%s}: integer required between \'{\' and \'}\'";
        goto LAB_00102b0a;
      }
      *(ulong *)(unaff_R13 + 0x10) = local_e0;
    }
    *pcVar7 = '}';
    uVar17 = (int)puVar18 + 2;
    puVar18 = (uint *)(ulong)uVar17;
    if (param_1 <= (int)uVar17) goto LAB_00102360;
  }
  else {
    puVar18 = (uint *)(ulong)uVar17;
  }
  goto LAB_00102248;
}


