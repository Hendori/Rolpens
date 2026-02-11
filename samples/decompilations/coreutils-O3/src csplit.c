
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



void cleanup_fatal(void)

{
  int iVar1;
  char *__name;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  long in_FS_OFFSET;
  bool bVar5;
  sigset_t sStack_b8;
  undefined8 local_30;
  
  local_30 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  close_output_file();
  sigprocmask(0,(sigset_t *)&caught_signals,&sStack_b8);
  if (remove_files != '\0') {
    iVar4 = files_created + -1;
    if (-1 < iVar4) {
      do {
        __name = (char *)make_filename(iVar4);
        iVar1 = unlink(__name);
        if ((iVar1 != 0) && (piVar2 = __errno_location(), *piVar2 != 2)) {
          uVar3 = quotearg_n_style_colon(0,3,__name);
          error(0,*piVar2,&_LC1,uVar3);
        }
        bVar5 = iVar4 != 0;
        iVar4 = iVar4 + -1;
      } while (bVar5);
    }
    files_created = 0;
  }
  sigprocmask(2,&sStack_b8,(sigset_t *)0x0);
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
LAB_001002cb:
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
      goto LAB_001002cb;
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



void interrupt_handler(int param_1)

{
  char *__name;
  int iVar1;
  bool bVar2;
  
  if (remove_files != '\0') {
    iVar1 = files_created + -1;
    if (-1 < iVar1) {
      do {
        __name = (char *)make_filename(iVar1);
        unlink(__name);
        bVar2 = iVar1 != 0;
        iVar1 = iVar1 + -1;
      } while (bVar2);
    }
    files_created = 0;
  }
  signal(param_1,(__sighandler_t)0x0);
  raise(param_1);
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



undefined8 load_buffer(undefined8 param_1,undefined1 *param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  long *plVar3;
  undefined1 (*pauVar4) [16];
  undefined1 (*pauVar5) [16];
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  int *piVar9;
  undefined1 (*pauVar10) [16];
  long lVar11;
  undefined1 *puVar12;
  long unaff_RBP;
  long lVar13;
  long lVar14;
  undefined1 *unaff_R12;
  undefined1 *unaff_R14;
  
  if (have_read_eof != '\0') {
    return 0;
  }
  puVar2 = hold_count;
  if ((long)hold_count < 0x1ffe) {
    puVar2 = (undefined1 *)0x1ffe;
  }
  puVar2 = puVar2 + 1;
LAB_00100738:
  plVar3 = (long *)get_new_buffer(puVar2);
  puVar2 = hold_count;
  lVar14 = *plVar3;
  lVar11 = lVar14;
  puVar12 = param_2;
  param_2 = (undefined1 *)plVar3[5];
  if (hold_count != (undefined1 *)0x0) {
    puVar12 = hold_area;
    param_2 = (undefined1 *)mempcpy((undefined1 *)plVar3[5],hold_area,(size_t)hold_count);
    plVar3[1] = (long)(puVar2 + plVar3[1]);
    hold_count = (undefined1 *)0x0;
    lVar11 = lVar14 - (long)puVar2;
  }
  if (lVar11 != 1) {
    lVar11 = safe_read(0);
    if (lVar11 != 0) {
      if (lVar11 < 0) {
        uVar8 = dcgettext(0,"read error",5);
        piVar9 = __errno_location();
        error(0,*piVar9,uVar8);
                    /* WARNING: Subroutine does not return */
        cleanup_fatal();
      }
      goto LAB_0010076a;
    }
    have_read_eof = '\x01';
    puVar12 = param_2;
  }
  lVar11 = 0;
  param_2 = puVar12;
LAB_0010076a:
  puVar12 = (undefined1 *)(lVar11 + plVar3[1]);
  plVar3[1] = (long)puVar12;
  if (puVar12 == (undefined1 *)0x0) goto LAB_001008d0;
  unaff_R12 = (undefined1 *)plVar3[5];
  unaff_RBP = 0;
  puVar12 = puVar12 + (long)unaff_R12;
  *puVar12 = 10;
  do {
    param_2 = (undefined1 *)0xa;
    unaff_R14 = (undefined1 *)rawmemchr(unaff_R12,10);
    puVar2 = unaff_R14 + -(long)unaff_R12;
    if (puVar12 == unaff_R14) {
      if (puVar2 != (undefined1 *)0x0) {
        if (have_read_eof != '\0') {
          if ((undefined1 (*) [16])plVar3[6] == (undefined1 (*) [16])0x0) {
            pauVar5 = (undefined1 (*) [16])xmalloc(0x520);
            lVar14 = 1;
            lVar11 = 1;
            *(undefined8 *)pauVar5[1] = 0;
            *(undefined8 *)(pauVar5[0x51] + 8) = 0;
            *pauVar5 = (undefined1  [16])0x0;
            plVar3[6] = (long)pauVar5;
            lVar13 = 0;
            pauVar4 = pauVar5;
          }
          else {
            pauVar5 = (undefined1 (*) [16])plVar3[7];
            if (*(long *)*pauVar5 == 0x50) {
              pauVar10 = (undefined1 (*) [16])xmalloc(0x520);
              pauVar4 = (undefined1 (*) [16])plVar3[6];
              *pauVar10 = (undefined1  [16])0x0;
              *(undefined8 *)(pauVar10[0x51] + 8) = 0;
              *(undefined8 *)pauVar10[1] = 0;
              *(undefined1 (**) [16])(pauVar5[0x51] + 8) = pauVar10;
              pauVar5 = *(undefined1 (**) [16])(plVar3[7] + 0x518);
              lVar13 = *(long *)(*pauVar5 + 8);
              lVar14 = lVar13 + 1;
              lVar11 = *(long *)*pauVar5 + 1;
            }
            else {
              lVar13 = *(long *)(*pauVar5 + 8);
              lVar11 = *(long *)*pauVar5 + 1;
              lVar14 = lVar13 + 1;
              pauVar4 = (undefined1 (*) [16])plVar3[6];
            }
          }
          *(undefined1 **)pauVar5[lVar13 + 2] = unaff_R12;
          *(undefined1 **)(pauVar5[lVar13 + 1] + 8) = puVar2;
          *(long *)*pauVar5 = lVar11;
          lVar11 = last_line_number + 1;
          last_line_number = last_line_number + unaff_RBP + 1;
          *(long *)(*pauVar5 + 8) = lVar14;
          plVar3[4] = unaff_RBP + 1;
          plVar3[2] = lVar11;
          plVar3[3] = lVar11;
          goto LAB_001009d1;
        }
        param_2 = puVar2;
        puVar12 = (undefined1 *)ximemdup(unaff_R12);
        free(hold_area);
        hold_count = puVar2;
        hold_area = puVar12;
      }
      plVar3[4] = unaff_RBP;
      lVar11 = last_line_number + 1;
      last_line_number = last_line_number + unaff_RBP;
      plVar3[2] = lVar11;
      plVar3[3] = lVar11;
      if (unaff_RBP != 0) {
        pauVar4 = (undefined1 (*) [16])plVar3[6];
LAB_001009d1:
        plVar1 = head;
        plVar3[8] = 0;
        plVar3[7] = (long)pauVar4;
        if (plVar1 != (long *)0x0) {
          do {
            plVar7 = plVar1;
            plVar1 = (long *)plVar7[8];
          } while (plVar1 != (long *)0x0);
          plVar7[8] = (long)plVar3;
          plVar3 = head;
        }
        head = plVar3;
        return 1;
      }
LAB_001008d0:
      free_buffer(plVar3);
      if (have_read_eof != '\0') {
        return 0;
      }
      puVar2 = (undefined1 *)((lVar14 >> 1) + lVar14);
      if (!SCARRY8(lVar14 >> 1,lVar14)) goto LAB_00100738;
      xalloc_die();
LAB_00100900:
      pauVar5 = (undefined1 (*) [16])xmalloc(0x520);
      lVar13 = 1;
      *pauVar5 = (undefined1  [16])0x0;
      lVar11 = 1;
      *(undefined8 *)pauVar5[1] = 0;
      *(undefined8 *)(pauVar5[0x51] + 8) = 0;
      lVar6 = 0;
      plVar3[6] = (long)pauVar5;
      plVar3[7] = (long)pauVar5;
    }
    else {
      param_2 = puVar2 + 1;
      if (plVar3[6] == 0) goto LAB_00100900;
      pauVar5 = (undefined1 (*) [16])plVar3[7];
      if (*(long *)*pauVar5 == 0x50) {
        pauVar4 = (undefined1 (*) [16])xmalloc(0x520);
        *pauVar4 = (undefined1  [16])0x0;
        *(undefined8 *)(pauVar4[0x51] + 8) = 0;
        *(undefined8 *)pauVar4[1] = 0;
        *(undefined1 (**) [16])(pauVar5[0x51] + 8) = pauVar4;
        pauVar5 = *(undefined1 (**) [16])(plVar3[7] + 0x518);
        lVar6 = *(long *)(*pauVar5 + 8);
        lVar11 = *(long *)*pauVar5;
        plVar3[7] = (long)pauVar5;
        lVar11 = lVar11 + 1;
        lVar13 = lVar6 + 1;
      }
      else {
        lVar6 = *(long *)(*pauVar5 + 8);
        lVar11 = *(long *)*pauVar5 + 1;
        lVar13 = lVar6 + 1;
      }
    }
    unaff_RBP = unaff_RBP + 1;
    *(undefined1 **)pauVar5[lVar6 + 2] = unaff_R12;
    unaff_R12 = unaff_R14 + 1;
    *(undefined1 **)(pauVar5[lVar6 + 1] + 8) = param_2;
    *(long *)*pauVar5 = lVar11;
    *(long *)(*pauVar5 + 8) = lVar13;
  } while( true );
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
  long *plVar2;
  long *plVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  
  while( true ) {
    if (prev_buf_0 != 0) {
      free_buffer();
      prev_buf_0 = 0;
    }
    if ((head == 0) && (cVar5 = load_buffer(), cVar5 == '\0')) break;
    lVar4 = head;
    lVar1 = *(long *)(head + 0x18);
    if (current_line < lVar1) {
      current_line = lVar1;
    }
    plVar2 = *(long **)(head + 0x38);
    *(long *)(head + 0x18) = lVar1 + 1;
    lVar1 = plVar2[2];
    lVar6 = lVar1 + 1;
    plVar2[2] = lVar6;
    if (lVar6 == *plVar2) {
      plVar3 = (long *)plVar2[0xa3];
      *(long **)(lVar4 + 0x38) = plVar3;
      if ((plVar3 == (long *)0x0) || (*plVar3 == 0)) {
        head = *(long *)(lVar4 + 0x40);
        prev_buf_0 = lVar4;
      }
    }
    save_line_to_file(plVar2 + lVar1 * 2 + 3);
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
    goto LAB_00100dfa;
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
    if (pcVar6 != (char *)0x0) goto LAB_00101095;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","csplit");
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) {
LAB_00101095:
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
LAB_00100dfa:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 main(int param_1,uint *param_2)

{
  byte *pbVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  size_t sVar6;
  char *pcVar7;
  char *pcVar8;
  ushort **ppuVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  byte bVar12;
  uint uVar13;
  byte *pbVar14;
  uint *puVar15;
  int *piVar16;
  uint *puVar17;
  byte bVar18;
  char *pcVar19;
  uint *puVar20;
  ulong uVar21;
  undefined4 *puVar22;
  long lVar23;
  undefined4 *puVar24;
  long lVar25;
  long lVar26;
  uint uVar27;
  undefined1 (*pauVar28) [16];
  re_pattern_buffer *__buffer;
  uint *unaff_R14;
  ulong uVar29;
  uint *puVar30;
  long in_FS_OFFSET;
  byte bVar31;
  long local_108;
  long local_100;
  ulong local_e0;
  _union_1457 local_d8;
  undefined4 local_d0 [32];
  undefined4 local_50;
  long local_40;
  
  bVar31 = 0;
  pcVar19 = "f:b:kn:sqz";
  bVar18 = 0x59;
  local_108 = CONCAT44(local_108._4_4_,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*(long *)param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  puVar15 = &switchD_00101f44::switchdataD_00103180;
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  remove_files = 1;
  controls = 0;
  control_used = 0;
  suppress_count = 0;
  suppress_matched = '\0';
  prefix = &_LC41;
  global_argv = param_2;
  while (iVar4 = getopt_long(param_1,param_2,"f:b:kn:sqz",longopts,0), iVar4 != -1) {
    if (0x80 < iVar4) goto switchD_00101f44_caseD_63;
    if (iVar4 < 0x62) {
      if (iVar4 != -0x83) goto LAB_00102ef2;
      uVar10 = proper_name_lite("David MacKenzie","David MacKenzie");
      uVar11 = proper_name_lite("Stuart Kemp","Stuart Kemp");
      version_etc(_stdout,"csplit","GNU coreutils",_Version,uVar11,uVar10,0);
                    /* WARNING: Subroutine does not return */
      exit(0);
    }
    switch(iVar4) {
    case 0x62:
      suffix = _optarg;
      break;
    default:
      goto switchD_00101f44_caseD_63;
    case 0x66:
      prefix = _optarg;
      break;
    case 0x6b:
      remove_files = 0;
      break;
    case 0x6e:
      dcgettext(0,"invalid number",5);
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
  }
  iVar4 = _optind;
  if (param_1 - _optind < 2) goto LAB_00102cfc;
  puVar15 = (uint *)strlen((char *)prefix);
  if (suffix == (byte *)0x0) {
    lVar25 = 0xb;
    if (10 < digits) goto LAB_00102d32;
    goto LAB_0010218a;
  }
  bVar2 = false;
  bVar12 = *suffix;
  pbVar14 = suffix;
  bVar18 = 0x59;
  if (bVar12 != 0) {
LAB_001020b0:
    bVar18 = (byte)pcVar19;
    pbVar1 = pbVar14 + 1;
    if ((bVar12 != 0x25) || (pbVar14 = pbVar14 + 1, *pbVar1 == 0x25)) goto LAB_001020a0;
    if (!bVar2) {
      uVar27 = 0;
      do {
        bVar18 = *pbVar14;
        if (bVar18 == 0x27) {
          uVar27 = uVar27 | 1;
        }
        else if ((char)bVar18 < '(') {
          if (bVar18 != 0x23) goto LAB_001020fd;
          uVar27 = uVar27 | 2;
        }
        else if ((bVar18 != 0x2d) && (bVar18 != 0x30)) goto LAB_001020fd;
        pbVar14 = pbVar14 + 1;
      } while( true );
    }
    pcVar19 = "too many %% conversion specifications in suffix";
    goto LAB_00102eda;
  }
LAB_00102ece:
  pcVar19 = "missing %% conversion specification in suffix";
LAB_00102eda:
  uVar10 = dcgettext(0,pcVar19,5);
  iVar4 = error(1,0,uVar10);
LAB_00102ef2:
  if (iVar4 == -0x82) {
    usage();
    goto LAB_00102f04;
  }
switchD_00101f44_caseD_63:
  while( true ) {
    usage(1);
LAB_00102d32:
    lVar25 = (long)(int)digits;
LAB_0010218a:
    lVar23 = lVar25 + 1;
    lVar25 = lVar23 + (long)puVar15;
    if (!SCARRY8(lVar23,(long)puVar15)) break;
LAB_00102cf7:
    iVar4 = xalloc_die(lVar25);
LAB_00102cfc:
    if (iVar4 < (int)local_108) {
      puVar15 = (uint *)quote(*(undefined8 *)(param_2 + ((long)(int)local_108 + -1) * 2));
      uVar10 = dcgettext(0,"missing operand after %s",5);
      error(0,0,uVar10,puVar15);
    }
    else {
      uVar10 = dcgettext(0,"missing operand",5);
      error(0,0,uVar10);
    }
  }
  filename_space = ximalloc();
  pcVar19 = *(char **)(param_2 + (long)_optind * 2);
  iVar4 = _optind + 1;
  _optind = iVar4;
  iVar5 = strcmp(pcVar19,"-");
  if ((iVar5 != 0) && (iVar5 = fd_reopen(0,pcVar19,0,0), iVar4 = _optind, iVar5 < 0)) {
    puVar20 = (uint *)quotearg_style(4,pcVar19);
    puVar15 = (uint *)dcgettext(0,"cannot open %s for reading",5);
    piVar16 = __errno_location();
    error(1,*piVar16,puVar15);
    goto LAB_00102de3;
  }
  while (iVar4 < (int)local_108) {
    do {
      iVar5 = iVar4;
      lVar25 = (long)iVar5;
      puVar15 = param_2 + lVar25 * 2;
      pcVar19 = *(char **)puVar15;
      cVar3 = *pcVar19;
      uVar27 = (uint)cVar3;
      pauVar28 = (undefined1 (*) [16])(ulong)uVar27;
      if ((cVar3 != '/') && (cVar3 != '%')) {
        if (control_used == control_allocated_1) {
          controls = xpalloc(controls,&control_allocated_1,1,0xffffffffffffffff,0x60);
          pcVar19 = *(char **)puVar15;
        }
        pauVar28 = (undefined1 (*) [16])(control_used * 0x60 + controls);
        control_used = control_used + 1;
        pauVar28[1][0xe] = 0;
        *(undefined8 *)pauVar28[1] = 0;
        pauVar28[1][0xc] = 0;
        *(int *)(pauVar28[1] + 8) = iVar5;
        *pauVar28 = (undefined1  [16])0x0;
        iVar4 = xstrtoumax(pcVar19,0,10,&local_e0,&_LC13);
        uVar29 = last_val_2;
        if (iVar4 != 0) goto LAB_00103010;
        if ((long)local_e0 < 0) goto LAB_00103010;
        if (local_e0 != 0) {
          if (last_val_2 <= local_e0) {
            if (local_e0 == last_val_2) goto LAB_00102f73;
            goto LAB_001022ac;
          }
          uVar10 = quote(*(undefined8 *)puVar15);
          uVar11 = dcgettext(0,"line number %s is smaller than preceding line number, %jd",5);
          error(1,0,uVar11,uVar10,uVar29);
        }
        uVar10 = *(undefined8 *)puVar15;
        pcVar19 = "%s: line number must be greater than zero";
        goto LAB_00102ff5;
      }
      puVar15 = (uint *)(pcVar19 + 1);
      pcVar7 = strrchr((char *)puVar15,uVar27);
      if (pcVar7 == (char *)0x0) {
        uVar10 = dcgettext(0,"%s: closing delimiter \'%c\' missing",5);
        error(1,0,uVar10,pcVar19,uVar27);
LAB_00102f73:
        quote(*(undefined8 *)puVar15);
        uVar10 = dcgettext(0,"warning: line number %s is the same as preceding line number",5);
        error(0,0,uVar10);
LAB_001022ac:
        last_val_2 = local_e0;
        *(ulong *)(*pauVar28 + 8) = local_e0;
      }
      else {
        if (control_used == control_allocated_1) {
          controls = xpalloc(controls,&control_allocated_1,1,0xffffffffffffffff,0x60);
        }
        pauVar28 = (undefined1 (*) [16])(control_used * 0x60 + controls);
        pauVar28[1][0xd] = cVar3 == '%';
        *(undefined8 *)pauVar28[1] = 0;
        pauVar28[1][0xc] = 0;
        *(int *)(pauVar28[1] + 8) = iVar5;
        pauVar28[1][0xe] = 1;
        *(undefined8 *)pauVar28[2] = 0;
        *(undefined8 *)(pauVar28[2] + 8) = 0;
        *pauVar28 = (undefined1  [16])0x0;
        control_used = control_used + 1;
        uVar10 = xmalloc(0x100);
        *(undefined8 *)(pauVar28[4] + 8) = 0;
        *(undefined8 *)pauVar28[4] = uVar10;
        _re_syntax_options = 0x2c6;
        pcVar8 = re_compile_pattern((char *)puVar15,(size_t)(pcVar7 + (-1 - (long)pcVar19)),
                                    (re_pattern_buffer *)(pauVar28 + 2));
        if (pcVar8 != (char *)0x0) {
          uVar10 = quote(pcVar19);
          uVar11 = dcgettext(0,"%s: invalid regular expression: %s",5);
          error(0,0,uVar11,uVar10,pcVar8);
                    /* WARNING: Subroutine does not return */
          cleanup_fatal();
        }
        if ((pcVar7[1] != '\0') && (iVar4 = xstrtoimax(pcVar7 + 1,0,10,pauVar28,&_LC13), iVar4 != 0)
           ) {
          uVar10 = quote(pcVar19);
          pcVar19 = "%s: integer expected after delimiter";
          goto LAB_00102ff5;
        }
      }
      if ((int)local_108 <= iVar5 + 1) goto LAB_00102348;
      pcVar19 = *(char **)(param_2 + (lVar25 + 1) * 2);
      iVar4 = iVar5 + 1;
    } while (*pcVar19 != '{');
    sVar6 = strlen(pcVar19);
    pcVar7 = pcVar19 + (sVar6 - 1);
    if (*pcVar7 != '}') {
      uVar10 = quote(pcVar19);
      pcVar19 = "%s: \'}\' is required in repeat count";
LAB_00102ff5:
      do {
        uVar11 = dcgettext(0,pcVar19,5);
        error(1,0,uVar11,uVar10);
LAB_00103010:
        uVar10 = quote();
        pcVar19 = "%s: invalid pattern";
      } while( true );
    }
    *pcVar7 = '\0';
    if ((pcVar19 + 1 == pcVar7 + -1) && (pcVar19[1] == '*')) {
      pauVar28[1][0xc] = 1;
    }
    else {
      iVar4 = xstrtoumax(pcVar19 + 1,0,10,&local_e0,&_LC13);
      if ((iVar4 != 0) || ((long)local_e0 < 0)) {
        uVar10 = quote(*(undefined8 *)(global_argv + (lVar25 + 1) * 2));
        pcVar19 = "%s}: integer required between \'{\' and \'}\'";
        goto LAB_00102ff5;
      }
      *(ulong *)pauVar28[1] = local_e0;
    }
    *pcVar7 = '}';
    iVar4 = iVar5 + 2;
  }
LAB_00102348:
  puVar20 = &sig_3;
  piVar16 = &sig_3;
  sigemptyset((sigset_t *)&caught_signals);
  do {
    iVar4 = *piVar16;
    sigaction(iVar4,(sigaction *)0x0,(sigaction *)&local_d8);
    if (local_d8.sa_handler != (__sighandler_t)0x1) {
      sigaddset((sigset_t *)&caught_signals,iVar4);
    }
    piVar16 = piVar16 + 1;
  } while (piVar16 != (int *)0x10322c);
  puVar22 = &caught_signals;
  puVar24 = local_d0;
  for (lVar25 = 0x20; lVar25 != 0; lVar25 = lVar25 + -1) {
    *puVar24 = *puVar22;
    puVar22 = puVar22 + (ulong)bVar31 * -2 + 1;
    puVar24 = puVar24 + (ulong)bVar31 * -2 + 1;
  }
  local_50 = 0;
  local_d8.sa_handler = interrupt_handler;
  do {
    uVar27 = *puVar20;
    puVar15 = (uint *)(ulong)uVar27;
    iVar4 = sigismember((sigset_t *)&caught_signals,uVar27);
    if (iVar4 != 0) {
      sigaction(uVar27,(sigaction *)&local_d8,(sigaction *)0x0);
    }
    puVar20 = puVar20 + 1;
  } while (puVar20 != (uint *)0x10322c);
  for (local_100 = 0; local_100 < control_used; local_100 = local_100 + 1) {
    local_108 = local_100 * 0x60;
    param_2 = (uint *)0x0;
    if (*(char *)(controls + 0x1e + local_108) == '\0') {
      while ((unaff_R14 = param_2, __buffer = (re_pattern_buffer *)(controls + local_108),
             *(char *)((long)&__buffer->syntax + 4) != '\0' ||
             ((long)unaff_R14 <= (long)__buffer->used))) {
        uVar29 = __buffer->allocated;
        param_2 = (uint *)((long)unaff_R14 + 1);
        create_output_file();
        puVar30 = (uint *)(uVar29 * (long)param_2);
        puVar20 = (uint *)((long)current_line + 1);
        if ((head == (uint *)0x0) && (cVar3 = load_buffer(), cVar3 == '\0')) {
LAB_00102ca0:
          if (suppress_matched != '\0') goto LAB_00102c62;
LAB_00102a3d:
          if ((head == (uint *)0x0) && (cVar3 = load_buffer(), cVar3 == '\0')) goto LAB_00102c62;
        }
        else {
          lVar25 = *(long *)(head + 4);
          if (lVar25 <= (long)puVar20) {
            lVar23 = *(long *)(head + 8) + lVar25;
            puVar17 = head;
            while (puVar15 = puVar17, lVar23 <= (long)puVar20) {
              while (puVar17 = *(uint **)(puVar15 + 0x10), puVar17 != (uint *)0x0) {
                lVar25 = *(long *)(puVar17 + 4);
                puVar15 = puVar17;
                if ((long)puVar20 < *(long *)(puVar17 + 8) + lVar25) goto LAB_001029c5;
              }
              cVar3 = load_buffer();
              if (cVar3 == '\0') goto LAB_00102ca0;
              puVar17 = *(uint **)(puVar15 + 0x10);
              lVar25 = *(long *)(puVar17 + 4);
              lVar23 = *(long *)(puVar17 + 8) + lVar25;
            }
LAB_001029c5:
            uVar21 = (long)puVar20 - lVar25;
            lVar25 = *(long *)(puVar17 + 0xc);
            uVar29 = uVar21;
            if (0x4f < (long)uVar21) {
              uVar29 = uVar21 - 0x50;
              lVar25 = *(long *)(lVar25 + 0x518);
              if (0x4f < (long)uVar29) {
                if ((uVar29 / 0x50 & 1) != 0) {
                  uVar29 = uVar21 - 0xa0;
                  lVar25 = *(long *)(lVar25 + 0x518);
                  if ((long)uVar29 < 0x50) goto LAB_00102a2b;
                }
                do {
                  uVar29 = uVar29 - 0xa0;
                  lVar25 = *(long *)(*(long *)(lVar25 + 0x518) + 0x518);
                } while (0x4f < (long)uVar29);
              }
            }
LAB_00102a2b:
            puVar20 = (uint *)(uVar29 * 0x10);
            puVar15 = puVar17;
            if (lVar25 + 0x18 + (long)puVar20 == 0) goto LAB_00102ca0;
            goto LAB_00102a3d;
          }
          puVar15 = head;
          if (suppress_matched != '\0') goto LAB_00102c62;
        }
        lVar25 = *(long *)(head + 6);
        if (lVar25 == 0) goto LAB_00102c62;
        puVar15 = (uint *)(lVar25 + 1);
        puVar20 = (uint *)((long)puVar30 + 1);
        if ((long)puVar30 - lVar25 != 0 && lVar25 <= (long)puVar30) {
          do {
            lVar25 = remove_line();
            if (lVar25 == 0) goto LAB_00102c62;
            save_line_to_file();
            puVar15 = (uint *)((long)puVar15 + 1);
          } while (puVar15 != puVar20);
        }
        close_output_file();
        if (suppress_matched != '\0') {
          remove_line();
        }
        puVar20 = (uint *)((long)current_line + 1);
        if (((head == (uint *)0x0) && (cVar3 = load_buffer(), cVar3 == '\0')) ||
           (lVar25 = *(long *)(head + 4), puVar15 = head, (long)puVar20 < lVar25))
        goto LAB_00102c55;
        lVar23 = *(long *)(head + 8) + lVar25;
        while (lVar23 <= (long)puVar20) {
          puVar17 = *(uint **)(puVar15 + 0x10);
          if (puVar17 == (uint *)0x0) {
            cVar3 = load_buffer();
            if (cVar3 == '\0') goto LAB_00102c55;
            puVar17 = *(uint **)(puVar15 + 0x10);
          }
          lVar25 = *(long *)(puVar17 + 4);
          puVar15 = puVar17;
          lVar23 = *(long *)(puVar17 + 8) + lVar25;
        }
        uVar21 = (long)puVar20 - lVar25;
        lVar25 = *(long *)(puVar15 + 0xc);
        uVar29 = uVar21;
        if (0x4f < (long)uVar21) {
          uVar29 = uVar21 - 0x50;
          lVar25 = *(long *)(lVar25 + 0x518);
          if (0x4f < (long)uVar29) {
            if ((uVar29 / 0x50 & 1) != 0) {
              uVar29 = uVar21 - 0xa0;
              lVar25 = *(long *)(lVar25 + 0x518);
              if ((long)uVar29 < 0x50) goto LAB_001028fb;
            }
            do {
              uVar29 = uVar29 - 0xa0;
              lVar25 = *(long *)(*(long *)(lVar25 + 0x518) + 0x518);
            } while (0x4f < (long)uVar29);
          }
        }
LAB_001028fb:
        puVar20 = (uint *)(uVar29 * 0x10);
        if (lVar25 + 0x18 + (long)puVar20 == 0) {
LAB_00102c55:
          if (suppress_matched == '\0') {
LAB_00102c62:
            handle_line_error_isra_0(__buffer->allocated,unaff_R14);
            goto LAB_00102c6f;
          }
        }
      }
    }
    else {
      for (param_2 = (uint *)0x0;
          (puVar15 = (uint *)(controls + local_108), (char)puVar15[7] != '\0' ||
          ((long)param_2 <= *(long *)(puVar15 + 4))); param_2 = (uint *)((long)param_2 + 1)) {
        puVar20 = (uint *)(ulong)*(byte *)((long)puVar15 + 0x1d);
        if (*(byte *)((long)puVar15 + 0x1d) == 0) {
LAB_00102de3:
          create_output_file();
        }
        bVar18 = (byte)puVar20;
        __buffer = (re_pattern_buffer *)(puVar15 + 8);
        if (*(long *)puVar15 < 0) {
          while (puVar30 = (uint *)((long)current_line + 1), unaff_R14 = head,
                current_line = puVar30, head != (uint *)0x0) {
LAB_0010283a:
            bVar18 = (byte)puVar20;
            lVar25 = *(long *)(head + 4);
            unaff_R14 = head;
            if ((long)puVar30 < lVar25) goto LAB_00102c19;
            lVar23 = *(long *)(head + 8) + lVar25;
            unaff_R14 = head;
            while (lVar23 <= (long)puVar30) {
              puVar17 = *(uint **)(unaff_R14 + 0x10);
              if (puVar17 == (uint *)0x0) {
                cVar3 = load_buffer();
                if (cVar3 == '\0') goto LAB_00102c19;
                puVar17 = *(uint **)(unaff_R14 + 0x10);
              }
              lVar25 = *(long *)(puVar17 + 4);
              unaff_R14 = puVar17;
              lVar23 = *(long *)(puVar17 + 8) + lVar25;
            }
            lVar25 = (long)puVar30 - lVar25;
            lVar23 = *(long *)(unaff_R14 + 0xc);
            if (lVar25 < 0x50) {
              lVar25 = lVar25 * 0x10;
              if (lVar23 + 0x18 + lVar25 == 0) goto LAB_00102c19;
            }
            else {
              uVar29 = lVar25 - 0x50;
              lVar23 = *(long *)(lVar23 + 0x518);
              if (0x4f < (long)uVar29) {
                if ((uVar29 / 0x50 & 1) != 0) {
                  uVar29 = lVar25 - 0xa0;
                  lVar23 = *(long *)(lVar23 + 0x518);
                  if ((long)uVar29 < 0x50) goto LAB_001027db;
                }
                do {
                  uVar29 = uVar29 - 0xa0;
                  lVar23 = *(long *)(*(long *)(lVar23 + 0x518) + 0x518);
                } while (0x4f < (long)uVar29);
              }
LAB_001027db:
              lVar25 = uVar29 << 4;
            }
            lVar26 = *(long *)(lVar25 + lVar23 + 0x18);
            pcVar19 = *(char **)(lVar25 + lVar23 + 0x20);
            if (pcVar19[lVar26 + -1] == '\n') {
              lVar26 = lVar26 + -1;
            }
            iVar4 = re_search(__buffer,pcVar19,(int)lVar26,0,(int)lVar26,(re_registers *)0x0);
            if (iVar4 == -2) goto LAB_0010303a;
            if (iVar4 != -1) goto LAB_00102b13;
          }
LAB_00102c6f:
          cVar3 = load_buffer();
          if (cVar3 != '\0') goto LAB_0010283a;
LAB_00102c19:
          if ((char)puVar15[7] == '\0') goto LAB_0010309b;
          if ((char)puVar20 != '\0') goto LAB_00102bd2;
          while (lVar25 = remove_line(), lVar25 != 0) {
            save_line_to_file();
          }
LAB_00102beb:
          close_output_file();
LAB_00102bd2:
                    /* WARNING: Subroutine does not return */
          exit(0);
        }
LAB_00102628:
        unaff_R14 = head;
        puVar30 = (uint *)((long)current_line + 1);
        current_line = puVar30;
        if (((head == (uint *)0x0) && (cVar3 = load_buffer(), cVar3 == '\0')) ||
           (lVar25 = *(long *)(head + 4), unaff_R14 = head, (long)puVar30 < lVar25)) {
LAB_00102bc3:
          if ((char)puVar15[7] == '\0') goto LAB_0010309b;
          if (bVar18 != 0) goto LAB_00102bd2;
          while (lVar25 = remove_line(), lVar25 != 0) {
            save_line_to_file();
          }
          goto LAB_00102beb;
        }
        lVar23 = *(long *)(head + 8) + lVar25;
        puVar17 = head;
        while (unaff_R14 = puVar17, lVar23 <= (long)puVar30) {
          while (puVar17 = *(uint **)(unaff_R14 + 0x10), puVar17 != (uint *)0x0) {
            lVar25 = *(long *)(puVar17 + 4);
            unaff_R14 = puVar17;
            if ((long)puVar30 < *(long *)(puVar17 + 8) + lVar25) goto LAB_001026a8;
          }
          cVar3 = load_buffer();
          if (cVar3 == '\0') goto LAB_00102bc3;
          puVar17 = *(uint **)(unaff_R14 + 0x10);
          lVar25 = *(long *)(puVar17 + 4);
          lVar23 = *(long *)(puVar17 + 8) + lVar25;
        }
LAB_001026a8:
        lVar25 = (long)puVar30 - lVar25;
        lVar23 = *(long *)(puVar17 + 0xc);
        if (lVar25 < 0x50) {
          lVar25 = lVar25 * 0x10;
          unaff_R14 = puVar17;
          if (lVar23 + 0x18 + lVar25 == 0) goto LAB_00102bc3;
        }
        else {
          uVar29 = lVar25 - 0x50;
          lVar23 = *(long *)(lVar23 + 0x518);
          if (0x4f < (long)uVar29) {
            if ((uVar29 / 0x50 & 1) != 0) {
              uVar29 = lVar25 - 0xa0;
              lVar23 = *(long *)(lVar23 + 0x518);
              if ((long)uVar29 < 0x50) goto LAB_00102713;
            }
            do {
              uVar29 = uVar29 - 0xa0;
              lVar23 = *(long *)(*(long *)(lVar23 + 0x518) + 0x518);
            } while (0x4f < (long)uVar29);
          }
LAB_00102713:
          lVar25 = uVar29 << 4;
        }
        lVar26 = *(long *)(lVar25 + lVar23 + 0x18);
        pcVar19 = *(char **)(lVar25 + lVar23 + 0x20);
        if (pcVar19[lVar26 + -1] == '\n') {
          lVar26 = lVar26 + -1;
        }
        iVar4 = re_search(__buffer,pcVar19,(int)lVar26,0,(int)lVar26,(re_registers *)0x0);
        if (iVar4 == -2) {
LAB_0010303a:
          uVar10 = dcgettext(0,"error in regular expression search",5);
          error(0,0,uVar10);
                    /* WARNING: Subroutine does not return */
          cleanup_fatal();
        }
        if (iVar4 == -1) {
          remove_line();
          if (bVar18 == 0) {
            save_line_to_file();
          }
          goto LAB_00102628;
        }
LAB_00102b13:
        unaff_R14 = (uint *)((long)current_line + *(long *)puVar15);
        uVar27 = puVar15[6];
        if ((((head == (uint *)0x0) && (cVar3 = load_buffer(), cVar3 == '\0')) ||
            (puVar20 = *(uint **)(head + 6), puVar20 == (uint *)0x0)) ||
           ((long)unaff_R14 < (long)puVar20)) {
          uVar10 = *(undefined8 *)(global_argv + (long)(int)uVar27 * 2);
          goto LAB_00102e9d;
        }
        if (unaff_R14 == puVar20) {
LAB_00102f04:
          if (bVar18 == 0) goto LAB_00102d7e;
        }
        else {
          lVar25 = 0;
          if (bVar18 == 0) {
            lVar25 = 0;
            do {
              lVar23 = remove_line();
              if (lVar23 == 0) goto LAB_0010312f;
              save_line_to_file();
              lVar25 = lVar25 + 1;
            } while ((long)unaff_R14 - (long)puVar20 != lVar25);
LAB_00102d7e:
            close_output_file();
          }
          else {
            do {
              lVar23 = remove_line();
              if (lVar23 == 0) goto LAB_0010312f;
              lVar25 = lVar25 + 1;
            } while ((long)unaff_R14 - (long)puVar20 != lVar25);
          }
        }
        if (0 < *(long *)puVar15) {
          current_line = unaff_R14;
        }
        if (suppress_matched != '\0') {
          remove_line();
        }
      }
    }
  }
LAB_00102e37:
  create_output_file();
  dump_rest_of_file();
  close_output_file();
  iVar4 = close(0);
  if (iVar4 != 0) {
    uVar10 = dcgettext(0,"read error",5);
    piVar16 = __errno_location();
    error(0,*piVar16,uVar10);
                    /* WARNING: Subroutine does not return */
    cleanup_fatal();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_001020fd:
  for (; (int)(char)*pbVar14 - 0x30U < 10; pbVar14 = pbVar14 + 1) {
  }
  if (*pbVar14 == 0x2e) {
    do {
      pbVar1 = pbVar14 + 1;
      pbVar14 = pbVar14 + 1;
    } while ((int)(char)*pbVar1 - 0x30U < 10);
  }
  bVar18 = *pbVar14;
  pcVar19 = (char *)(ulong)bVar18;
  if (bVar18 == 0) goto LAB_001030aa;
  bVar12 = bVar18 + 0xa8;
  if (bVar12 < 0x21) {
    uVar29 = 1L << (bVar12 & 0x3f);
    if ((uVar29 & 0x100800001) == 0) {
      if ((uVar29 & 0x21000) == 0) {
        if (bVar12 != 0x1d) goto LAB_00102df7;
        *pbVar14 = 100;
      }
      uVar13 = 1;
    }
    else {
      uVar13 = 2;
    }
    if ((~uVar13 & uVar27) != 0) {
      puVar20 = (uint *)(ulong)(uint)(int)(char)bVar18;
      uVar10 = dcgettext(0,"invalid flags in conversion specification: %%%c%c",5);
      puVar15 = (uint *)(ulong)((-(uint)((~uVar13 & uVar27 & 2) == 0) & 4) + 0x23);
      error(1,0,uVar10,puVar15,(int)(char)bVar18);
      goto LAB_0010309b;
    }
    bVar2 = true;
LAB_001020a0:
    bVar12 = pbVar14[1];
    pbVar14 = pbVar14 + 1;
    if (bVar12 == 0) goto LAB_00102cc9;
    goto LAB_001020b0;
  }
LAB_00102df7:
  ppuVar9 = __ctype_b_loc();
  pcVar7 = "invalid conversion specifier in suffix: %c";
  if ((*(byte *)((long)*ppuVar9 + (long)pcVar19 * 2 + 1) & 0x40) == 0) {
    pcVar7 = "invalid conversion specifier in suffix: \\%.3o";
  }
  uVar10 = dcgettext(0,pcVar7,5);
  error(1,0,uVar10,bVar18);
  goto LAB_00102e37;
LAB_00102cc9:
  bVar18 = (byte)pcVar19;
  if (bVar2) {
    iVar4 = __snprintf_chk(0,0,2,0xffffffffffffffff);
    lVar25 = (long)iVar4;
    if (-1 < iVar4) goto LAB_0010218a;
    goto LAB_00102cf7;
  }
  goto LAB_00102ece;
LAB_0010309b:
  bVar18 = (byte)puVar20;
  regexp_error_isra_0(puVar15[6],param_2,(ulong)puVar20 & 0xff);
LAB_001030aa:
  pcVar19 = "missing conversion specifier in suffix";
  goto LAB_00102eda;
LAB_0010312f:
  uVar10 = *(undefined8 *)(global_argv + (long)(int)uVar27 * 2);
LAB_00102e9d:
  uVar10 = quote(uVar10);
  uVar11 = dcgettext(0,"%s: line number out of range",5);
  error(0,0,uVar11,uVar10);
                    /* WARNING: Subroutine does not return */
  cleanup_fatal();
}


