
/* WARNING: Unknown calling convention */

char * make_filename(int num)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  size_t sVar4;
  
  strcpy(filename_space,prefix);
  pcVar3 = filename_space;
  pcVar2 = suffix;
  iVar1 = digits;
  if (suffix != (char *)0x0) {
    sVar4 = strlen(prefix);
    __sprintf_chk(pcVar3 + sVar4,2,0xffffffffffffffff,pcVar2,num);
    return filename_space;
  }
  sVar4 = strlen(prefix);
  __sprintf_chk(pcVar3 + sVar4,2,0xffffffffffffffff,&_LC0,iVar1,num);
  return filename_space;
}



/* WARNING: Unknown calling convention */

control * new_control_record(void)

{
  control *pcVar1;
  
  if (control_used == new_control_record::control_allocated) {
    controls = (control *)
               xpalloc(controls,&new_control_record::control_allocated,1,0xffffffffffffffff,0x60);
  }
  pcVar1 = controls + control_used;
  control_used = control_used + 1;
  pcVar1->regexpr = false;
  pcVar1->repeat = 0;
  pcVar1->repeat_forever = false;
  pcVar1->offset = 0;
  pcVar1->lines_required = 0;
  return pcVar1;
}



/* WARNING: Unknown calling convention */

buffer_record * get_new_buffer(idx_t min_size)

{
  intmax_t iVar1;
  buffer_record *pbVar2;
  char *pcVar3;
  
  pbVar2 = (buffer_record *)xmalloc(0x48);
  pbVar2->bytes_alloc = 0;
  pcVar3 = (char *)xpalloc(0,pbVar2,min_size,0xffffffffffffffff,1);
  pbVar2->bytes_used = 0;
  pbVar2->buffer = pcVar3;
  iVar1 = last_line_number;
  pbVar2->num_lines = 0;
  pbVar2->curr_line = (line *)0x0;
  pbVar2->first_available = iVar1 + 1;
  pbVar2->start_line = iVar1 + 1;
  pbVar2->line_start = (line *)0x0;
  pbVar2->next = (buffer_record *)0x0;
  return pbVar2;
}



/* WARNING: Unknown calling convention */

void free_buffer(buffer_record *buf)

{
  line *plVar1;
  line *__ptr;
  
  __ptr = buf->line_start;
  while (__ptr != (line *)0x0) {
    plVar1 = __ptr->next;
    free(__ptr);
    __ptr = plVar1;
  }
  free(buf->buffer);
  free(buf);
  return;
}



/* WARNING: Unknown calling convention */

void delete_all_files(_Bool in_signal_handler)

{
  int iVar1;
  char *__name;
  int *piVar2;
  undefined8 uVar3;
  int num;
  bool bVar4;
  
  num = files_created + -1;
  if (-1 < num) {
    do {
      __name = make_filename(num);
      iVar1 = unlink(__name);
      if (((iVar1 != 0) && (piVar2 = __errno_location(), *piVar2 != 2)) && (!in_signal_handler)) {
        uVar3 = quotearg_n_style_colon(0,3,__name);
        error(0,*piVar2,&_LC1,uVar3);
      }
      bVar4 = num != 0;
      num = num + -1;
    } while (bVar4);
  }
  files_created = 0;
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void cleanup_fatal(void)

{
  sigset_t oldset;
  
  close_output_file();
  sigprocmask(0,(sigset_t *)&caught_signals,(sigset_t *)&oldset);
  if (remove_files != false) {
    delete_all_files(false);
  }
  sigprocmask(2,(sigset_t *)&oldset,(sigset_t *)0x0);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void close_output_file(void)

{
  long lVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long in_FS_OFFSET;
  sigset_t oldset;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (output_stream == (FILE *)0x0) {
LAB_0010037b:
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  if ((output_stream->_flags & 0x20) == 0) {
    iVar3 = rpl_fclose();
    if (iVar3 == 0) {
      if ((bytes_written == 0) && (elide_empty_files != false)) {
        sigprocmask(0,(sigset_t *)&caught_signals,(sigset_t *)&oldset);
        pcVar2 = output_filename;
        iVar4 = unlink(output_filename);
        piVar5 = __errno_location();
        iVar3 = *piVar5;
        files_created = files_created + -1;
        sigprocmask(2,(sigset_t *)&oldset,(sigset_t *)0x0);
        if ((iVar4 != 0) && (iVar3 != 2)) {
          uVar6 = quotearg_n_style_colon(0,3,pcVar2);
          error(0,iVar3,&_LC1,uVar6);
        }
      }
      else if (suppress_count == false) {
        __fprintf_chk(_stdout,2,&_LC3);
      }
      output_stream = (FILE *)0x0;
      goto LAB_0010037b;
    }
    uVar6 = quotearg_n_style_colon(0,3,output_filename);
    piVar5 = __errno_location();
    puVar7 = &_LC1;
    iVar3 = *piVar5;
  }
  else {
    uVar6 = quotearg_style(4,output_filename);
    puVar7 = (undefined *)dcgettext(0,"write error for %s",5);
    iVar3 = 0;
  }
  error(0,iVar3,puVar7,uVar6);
  output_stream = (FILE *)0x0;
                    /* WARNING: Subroutine does not return */
  cleanup_fatal();
}



/* WARNING: Unknown calling convention */

void save_line_to_file(cstring *line)

{
  size_t sVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int *piVar4;
  
  sVar1 = fwrite_unlocked(line->str,1,line->len,(FILE *)output_stream);
  if (line->len == sVar1) {
    bytes_written = bytes_written + line->len;
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



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void create_output_file(void)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  FILE *pFVar5;
  int *piVar6;
  int iVar7;
  long in_FS_OFFSET;
  sigset_t oldset;
  
  iVar2 = files_created;
  iVar7 = 0x4b;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar3 = make_filename(files_created);
  output_filename = pcVar3;
  if (iVar2 != 0x7fffffff) {
    sigprocmask(0,(sigset_t *)&caught_signals,(sigset_t *)&oldset);
    pFVar5 = (FILE *)fopen_safer(pcVar3,&_LC4);
    output_stream = pFVar5;
    piVar6 = __errno_location();
    files_created = (iVar2 + 1) - (uint)(pFVar5 == (FILE *)0x0);
    iVar7 = *piVar6;
    sigprocmask(2,(sigset_t *)&oldset,(sigset_t *)0x0);
    if (pFVar5 != (FILE *)0x0) {
      bytes_written = 0;
      if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  }
  uVar4 = quotearg_n_style_colon(0,3,output_filename);
  error(0,iVar7,&_LC1,uVar4);
                    /* WARNING: Subroutine does not return */
  cleanup_fatal();
}



/* WARNING: Unknown calling convention */

void interrupt_handler(int sig)

{
  if (remove_files) {
    delete_all_files(true);
  }
  signal(sig,(__sighandler_t)0x0);
  raise(sig);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void handle_line_error(control *p,intmax_t repetition)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char buf [21];
  
  uVar1 = imaxtostr(p,buf);
  uVar2 = quote(uVar1);
  uVar1 = _program_name;
  uVar3 = dcgettext(0,"%s: %s: line number out of range",5);
  __fprintf_chk(_stderr,2,uVar3,uVar1,uVar2);
  if (repetition == 0) {
    fputc(10,_stderr);
  }
  else {
    uVar1 = dcgettext(0," on repetition %jd\n",5);
    __fprintf_chk(_stderr,2,uVar1,repetition);
  }
                    /* WARNING: Subroutine does not return */
  cleanup_fatal();
}



/* WARNING: Unknown calling convention */

void keep_new_line(buffer_record *b,char *line_start,idx_t line_len)

{
  line *plVar1;
  line *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if (b->line_start == (line *)0x0) {
    plVar2 = (line *)xmalloc(0x520);
    lVar4 = 1;
    lVar5 = 1;
    plVar2->used = 0;
    plVar2->insert_index = 0;
    plVar2->retrieve_index = 0;
    plVar2->next = (line *)0x0;
    lVar3 = 0;
    b->line_start = plVar2;
    b->curr_line = plVar2;
  }
  else {
    plVar2 = b->curr_line;
    if (plVar2->used == 0x50) {
      plVar1 = (line *)xmalloc(0x520);
      plVar1->used = 0;
      plVar1->insert_index = 0;
      plVar1->next = (line *)0x0;
      plVar1->retrieve_index = 0;
      plVar2->next = plVar1;
      plVar2 = b->curr_line->next;
      lVar5 = plVar2->used;
      lVar3 = plVar2->insert_index;
      b->curr_line = plVar2;
      lVar5 = lVar5 + 1;
      lVar4 = lVar3 + 1;
    }
    else {
      lVar3 = plVar2->insert_index;
      lVar5 = plVar2->used + 1;
      lVar4 = lVar3 + 1;
    }
  }
  plVar2->starts[lVar3].str = line_start;
  plVar2->starts[lVar3].len = line_len;
  plVar2->used = lVar5;
  plVar2->insert_index = lVar4;
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void xalloc_die(void)

{
  undefined8 uVar1;
  
  uVar1 = dcgettext(0,"memory exhausted",5);
  error(0,0,&_LC1,uVar1);
                    /* WARNING: Subroutine does not return */
  cleanup_fatal();
}



/* WARNING: Unknown calling convention */

_Bool load_buffer(void)

{
  long lVar1;
  buffer_record *pbVar2;
  idx_t iVar3;
  buffer_record *b;
  char *pcVar4;
  buffer_record *pbVar5;
  char *pcVar6;
  undefined8 uVar7;
  int *piVar8;
  long lVar9;
  char *pcVar10;
  long lVar11;
  
  if (have_read_eof) {
    return false;
  }
  iVar3 = hold_count;
  if (hold_count < 0x1ffe) {
    iVar3 = 0x1ffe;
  }
  lVar9 = iVar3 + 1;
  do {
    b = get_new_buffer(lVar9);
    iVar3 = hold_count;
    lVar1 = b->bytes_alloc;
    pcVar6 = b->buffer;
    lVar9 = lVar1;
    if (hold_count != 0) {
      pcVar6 = (char *)mempcpy(pcVar6,hold_area,hold_count);
      b->bytes_used = b->bytes_used + iVar3;
      hold_count = 0;
      lVar9 = lVar1 - iVar3;
    }
    if (lVar9 == 1) {
LAB_001008e4:
      lVar9 = 0;
    }
    else {
      lVar9 = safe_read(0,pcVar6);
      if (lVar9 == 0) {
        have_read_eof = true;
        goto LAB_001008e4;
      }
      if (lVar9 < 0) {
        uVar7 = dcgettext(0,"read error",5);
        piVar8 = __errno_location();
        error(0,*piVar8,uVar7);
                    /* WARNING: Subroutine does not return */
        cleanup_fatal();
      }
    }
    lVar9 = lVar9 + b->bytes_used;
    b->bytes_used = lVar9;
    if (lVar9 != 0) {
      pcVar6 = b->buffer;
      lVar11 = 0;
      pcVar10 = pcVar6 + lVar9;
      *pcVar10 = '\n';
      while( true ) {
        pcVar4 = (char *)rawmemchr(pcVar6,10);
        lVar9 = (long)pcVar4 - (long)pcVar6;
        if (pcVar10 == pcVar4) break;
        lVar11 = lVar11 + 1;
        keep_new_line(b,pcVar6,lVar9 + 1);
        pcVar6 = pcVar4 + 1;
      }
      if (lVar9 != 0) {
        if (have_read_eof != false) {
          keep_new_line(b,pcVar6,lVar9);
          b->num_lines = lVar11 + 1;
          lVar9 = last_line_number + 1;
          last_line_number = last_line_number + lVar11 + 1;
          b->start_line = lVar9;
          b->first_available = lVar9;
          goto LAB_0010098d;
        }
        pcVar6 = (char *)ximemdup(pcVar6,lVar9);
        free(hold_area);
        hold_count = lVar9;
        hold_area = pcVar6;
      }
      b->num_lines = lVar11;
      lVar9 = last_line_number + 1;
      last_line_number = last_line_number + lVar11;
      b->start_line = lVar9;
      b->first_available = lVar9;
      if (lVar11 != 0) {
LAB_0010098d:
        b->next = (buffer_record *)0x0;
        b->curr_line = b->line_start;
        pbVar2 = head;
        if (head != (buffer_record *)0x0) {
          do {
            pbVar5 = pbVar2;
            pbVar2 = pbVar5->next;
          } while (pbVar2 != (buffer_record *)0x0);
          pbVar5->next = b;
          b = head;
        }
        head = b;
        return true;
      }
    }
    free_buffer(b);
    if (have_read_eof != false) {
      return false;
    }
    lVar9 = (lVar1 >> 1) + lVar1;
    if (SCARRY8(lVar1 >> 1,lVar1)) {
                    /* WARNING: Subroutine does not return */
      xalloc_die();
    }
  } while( true );
}



/* WARNING: Unknown calling convention */

cstring * find_line(intmax_t linenum)

{
  _Bool _Var1;
  long lVar2;
  line *plVar3;
  long lVar4;
  buffer_record *pbVar5;
  buffer_record *pbVar6;
  ulong uVar7;
  ulong uVar8;
  
  if (((head == (buffer_record *)0x0) && (_Var1 = load_buffer(), !_Var1)) ||
     (lVar2 = head->start_line, linenum < lVar2)) {
    return (cstring *)0x0;
  }
  lVar4 = head->num_lines + lVar2;
  pbVar6 = head;
  while (pbVar5 = pbVar6, lVar4 <= linenum) {
    while (pbVar6 = pbVar5->next, pbVar6 != (buffer_record *)0x0) {
      lVar2 = pbVar6->start_line;
      pbVar5 = pbVar6;
      if (linenum < pbVar6->num_lines + lVar2) goto LAB_00100b98;
    }
    _Var1 = load_buffer();
    if (!_Var1) {
      return (cstring *)0x0;
    }
    pbVar6 = pbVar5->next;
    lVar2 = pbVar6->start_line;
    lVar4 = pbVar6->num_lines + lVar2;
  }
LAB_00100b98:
  uVar7 = linenum - lVar2;
  plVar3 = pbVar6->line_start;
  uVar8 = uVar7;
  if (0x4f < (long)uVar7) {
    uVar8 = uVar7 - 0x50;
    plVar3 = plVar3->next;
    if (0x4f < (long)uVar8) {
      if ((uVar8 / 0x50 & 1) != 0) {
        uVar8 = uVar7 - 0xa0;
        plVar3 = plVar3->next;
        if ((long)uVar8 < 0x50) goto LAB_00100bfb;
      }
      do {
        uVar8 = uVar8 - 0xa0;
        plVar3 = plVar3->next->next;
      } while (0x4f < (long)uVar8);
    }
  }
LAB_00100bfb:
  return plVar3->starts + uVar8;
}



/* WARNING: Unknown calling convention */

cstring * remove_line(void)

{
  long lVar1;
  line *plVar2;
  buffer_record *pbVar3;
  _Bool _Var4;
  long lVar5;
  cstring *pcVar6;
  
  if (remove_line::prev_buf != (buffer_record *)0x0) {
    free_buffer(remove_line::prev_buf);
    remove_line::prev_buf = (buffer_record *)0x0;
  }
  if ((head != (buffer_record *)0x0) || (_Var4 = load_buffer(), _Var4)) {
    pbVar3 = head;
    lVar1 = head->first_available;
    if (current_line < lVar1) {
      current_line = lVar1;
    }
    plVar2 = head->curr_line;
    head->first_available = lVar1 + 1;
    lVar1 = plVar2->retrieve_index;
    lVar5 = lVar1 + 1;
    plVar2->retrieve_index = lVar5;
    pcVar6 = plVar2->starts + lVar1;
    if (lVar5 == plVar2->used) {
      plVar2 = plVar2->next;
      pbVar3->curr_line = plVar2;
      if ((plVar2 == (line *)0x0) || (plVar2->used == 0)) {
        remove_line::prev_buf = pbVar3;
        head = pbVar3->next;
        return pcVar6;
      }
    }
  }
  else {
    pcVar6 = (cstring *)0x0;
  }
  return pcVar6;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void dump_rest_of_file(void)

{
  cstring *line;
  
  while( true ) {
    line = remove_line();
    if (line == (cstring *)0x0) break;
    save_line_to_file(line);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void regexp_error(control *p,intmax_t repetition,_Bool ignore)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = quote(global_argv[(int)p]);
  uVar3 = _program_name;
  uVar2 = dcgettext(0,"%s: %s: match not found",5);
  __fprintf_chk(_stderr,2,uVar2,uVar3,uVar1);
  if (repetition == 0) {
    fputc(10,_stderr);
  }
  else {
    uVar3 = dcgettext(0," on repetition %jd\n",5);
    __fprintf_chk(_stderr,2,uVar3,repetition);
  }
  if (!ignore) {
    dump_rest_of_file();
    close_output_file();
  }
                    /* WARNING: Subroutine does not return */
  cleanup_fatal();
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
    iVar2 = strcmp("csplit",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)piVar7 + 0x10);
    piVar7 = (infomap *)((long)piVar7 + 0x10);
  } while (pcVar4 != (char *)0x0);
  pcVar4 = *(char **)((long)piVar7 + 8);
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
  exit(status);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int main(int argc,char **argv)

{
  byte *pbVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  control *pcVar5;
  _Bool _Var6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  control *pcVar11;
  size_t sVar12;
  char *pcVar13;
  cstring *pcVar14;
  ushort **ppuVar15;
  byte bVar16;
  long lVar17;
  byte *pbVar18;
  ulong uVar19;
  int *piVar20;
  char cVar21;
  control *pcVar22;
  int *piVar23;
  ulong uVar24;
  sigset_t *psVar25;
  char *pcVar26;
  char *pcVar27;
  ulong uVar28;
  __sigset_t *p_Var29;
  long in_R9;
  control *unaff_R13;
  char **ppcVar30;
  long lVar31;
  long in_FS_OFFSET;
  byte bVar32;
  long local_100;
  uintmax_t *local_f0;
  uintmax_t val;
  sigaction act;
  
  bVar32 = 0;
  ppcVar30 = (char **)&_LC13;
  pcVar22 = (control *)&_LC45;
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  remove_files = true;
  controls = (control *)0x0;
  control_used = 0;
  suppress_count = false;
  suppress_matched = false;
  prefix = "xx";
  global_argv = argv;
  while (iVar7 = getopt_long(argc,argv,&_LC45,longopts,0), iVar7 != -1) {
    if (0x80 < iVar7) goto switchD_00101fa4_caseD_63;
    if (iVar7 < 0x62) {
      if (iVar7 == -0x83) {
        uVar9 = proper_name_lite("David MacKenzie","David MacKenzie");
        uVar10 = proper_name_lite("Stuart Kemp","Stuart Kemp");
        version_etc(_stdout,"csplit","GNU coreutils",_Version,uVar10,uVar9,0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar7 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      goto switchD_00101fa4_caseD_63;
    }
    switch(iVar7) {
    case 0x62:
      suffix = _optarg;
      break;
    default:
      goto switchD_00101fa4_caseD_63;
    case 0x66:
      prefix = _optarg;
      break;
    case 0x6b:
      remove_files = false;
      break;
    case 0x6e:
      dcgettext(0,"invalid number",5);
      in_R9 = 0;
      digits = xdectoimax(_optarg,0,0x7fffffff,&_LC13);
      break;
    case 0x71:
    case 0x73:
      suppress_count = true;
      break;
    case 0x7a:
      elide_empty_files = true;
      break;
    case 0x80:
      suppress_matched = true;
    }
  }
  if ((int)(argc - _optind) < 2) {
    if ((int)_optind < argc) {
LAB_00102c80:
      uVar9 = quote(argv[(long)argc + -1]);
      uVar10 = dcgettext(0,"missing operand after %s",5);
      error(0,0,uVar10,uVar9);
    }
    else {
      uVar9 = dcgettext(0,"missing operand",5);
      error(0,0,uVar9);
    }
switchD_00101fa4_caseD_63:
                    /* WARNING: Subroutine does not return */
    usage(1);
  }
  pcVar11 = (control *)strlen(prefix);
  if (suffix == (char *)0x0) {
    lVar17 = 0xb;
    if ((uint)digits < 0xb) goto LAB_001021ea;
    lVar17 = (long)digits;
    goto LAB_001021ea;
  }
  bVar4 = false;
  in_R9 = 1;
  uVar28 = 0x100800001;
  bVar16 = *suffix;
  pbVar18 = (byte *)suffix;
  if (bVar16 == 0) {
LAB_00102a69:
    pcVar26 = "missing %% conversion specification in suffix";
  }
  else {
LAB_00102110:
    pbVar1 = pbVar18 + 1;
    if (bVar16 != 0x25) goto LAB_00102100;
    pbVar18 = pbVar18 + 1;
    if (*pbVar1 == 0x25) goto LAB_00102100;
    if (!bVar4) {
      uVar24 = 0;
      do {
        bVar16 = *pbVar18;
        if (bVar16 == 0x27) {
          uVar24 = (ulong)((uint)uVar24 | 1);
        }
        else if ((char)bVar16 < '(') {
          if (bVar16 != 0x23) goto LAB_0010215d;
          uVar24 = (ulong)((uint)uVar24 | 2);
        }
        else if ((bVar16 != 0x2d) && (bVar16 != 0x30)) goto LAB_0010215d;
        pbVar18 = pbVar18 + 1;
      } while( true );
    }
    pcVar26 = "too many %% conversion specifications in suffix";
  }
LAB_00102a75:
  uVar9 = dcgettext(0,pcVar26,5);
  error(1,0,uVar9);
  do {
    uVar9 = quote(*ppcVar30);
    uVar10 = dcgettext(0,"warning: line number %s is the same as preceding line number",5);
    error(0,0,uVar10,uVar9);
    do {
      last_val_2 = val;
      unaff_R13->lines_required = val;
      while( true ) {
        uVar8 = (int)pcVar11 + 1;
        if (argc <= (int)uVar8) goto LAB_00102360;
        pcVar26 = *(char **)((long)(argv + 1) + (long)pcVar22);
        if (*pcVar26 == '{') {
          sVar12 = strlen(pcVar26);
          pcVar27 = pcVar26 + (sVar12 - 1);
          if (*pcVar27 != '}') {
            pcVar26 = (char *)quote(pcVar26);
            pcVar27 = "%s: \'}\' is required in repeat count";
            goto LAB_00102b0a;
          }
          *pcVar27 = '\0';
          if ((pcVar26 + 1 == pcVar27 + -1) && (pcVar26[1] == '*')) {
            unaff_R13->repeat_forever = true;
          }
          else {
            iVar7 = xstrtoumax(pcVar26 + 1,0,10,local_f0,&_LC13);
            if ((iVar7 != 0) || ((long)val < 0)) {
              pcVar26 = (char *)quote(*(undefined8 *)((long)(global_argv + 1) + (long)pcVar22));
              pcVar27 = "%s}: integer required between \'{\' and \'}\'";
              goto LAB_00102b0a;
            }
            unaff_R13->repeat = val;
          }
          *pcVar27 = '}';
          uVar8 = (int)pcVar11 + 2;
          pcVar11 = (control *)(ulong)uVar8;
          if (argc <= (int)uVar8) goto LAB_00102360;
        }
        else {
          pcVar11 = (control *)(ulong)uVar8;
        }
LAB_00102248:
        iVar7 = (int)pcVar11;
        pcVar22 = (control *)((long)iVar7 * 8);
        ppcVar30 = argv + iVar7;
        pcVar26 = *ppcVar30;
        cVar21 = *pcVar26;
        if ((cVar21 != '/') && (cVar21 != '%')) break;
        uVar28 = (ulong)(uint)(int)cVar21;
        pcVar27 = strrchr(pcVar26 + 1,(int)cVar21);
        if (pcVar27 == (char *)0x0) {
          uVar9 = dcgettext(0,"%s: closing delimiter \'%c\' missing",5);
          error(1,0,uVar9,pcVar26,uVar28);
LAB_00102bc5:
          regexp_error((control *)(ulong)(uint)pcVar11->argnum,uVar28,SUB81(pcVar22,0));
          goto LAB_00102bd4;
        }
        unaff_R13 = new_control_record();
        unaff_R13->argnum = iVar7;
        unaff_R13->ignore = cVar21 == '%';
        unaff_R13->regexpr = true;
        (unaff_R13->re_compiled).buffer = (re_dfa_t *)0x0;
        (unaff_R13->re_compiled).allocated = 0;
        pcVar13 = (char *)xmalloc(0x100);
        (unaff_R13->re_compiled).fastmap = pcVar13;
        (unaff_R13->re_compiled).translate = (uchar *)0x0;
        _re_syntax_options = 0x2c6;
        pcVar13 = re_compile_pattern(pcVar26 + 1,(size_t)(pcVar27 + (-1 - (long)pcVar26)),
                                     (re_pattern_buffer *)&unaff_R13->re_compiled);
        if (pcVar13 != (char *)0x0) {
          uVar9 = quote(pcVar26);
          uVar10 = dcgettext(0,"%s: invalid regular expression: %s",5);
          error(0,0,uVar10,uVar9,pcVar13);
                    /* WARNING: Subroutine does not return */
          cleanup_fatal();
        }
        if ((pcVar27[1] != '\0') &&
           (iVar7 = xstrtoimax(pcVar27 + 1,0,10,unaff_R13,&_LC13), iVar7 != 0)) {
          pcVar26 = (char *)quote(pcVar26);
          pcVar27 = "%s: integer expected after delimiter";
          goto LAB_00102b0a;
        }
      }
      unaff_R13 = new_control_record();
      pcVar26 = *ppcVar30;
      unaff_R13->argnum = iVar7;
      iVar7 = xstrtoumax(pcVar26,0,10,local_f0,&_LC13);
      uVar28 = last_val_2;
      if (iVar7 != 0) goto LAB_00102b25;
      if ((long)val < 0) goto LAB_00102b25;
      if (val == 0) goto LAB_00102afb;
      if (val < last_val_2) {
        uVar9 = quote(*ppcVar30);
        uVar10 = dcgettext(0,"line number %s is smaller than preceding line number, %jd",5);
        error(1,0,uVar10,uVar9,uVar28);
LAB_00102afb:
        pcVar26 = *ppcVar30;
        pcVar27 = "%s: line number must be greater than zero";
LAB_00102b0a:
        do {
          uVar9 = dcgettext(0,pcVar27,5);
          error(1,0,uVar9,pcVar26);
LAB_00102b25:
          pcVar26 = (char *)quote();
          pcVar27 = "%s: invalid pattern";
        } while( true );
      }
    } while (val != last_val_2);
  } while( true );
LAB_0010215d:
  for (; (int)(char)*pbVar18 - 0x30U < 10; pbVar18 = pbVar18 + 1) {
  }
  if (*pbVar18 == 0x2e) {
    do {
      pbVar1 = pbVar18 + 1;
      pbVar18 = pbVar18 + 1;
    } while ((int)(char)*pbVar1 - 0x30U < 10);
  }
  bVar16 = *pbVar18;
  pcVar22 = (control *)(ulong)bVar16;
  if (bVar16 == 0) {
    pcVar26 = "missing conversion specifier in suffix";
    goto LAB_00102a75;
  }
  bVar16 = bVar16 + 0xa8;
  if (0x20 < bVar16) goto LAB_00102962;
  uVar19 = in_R9 << (bVar16 & 0x3f);
  if ((uVar19 & uVar28) != 0) goto LAB_001029a2;
  if ((uVar19 & 0x21000) == 0) {
    if (bVar16 != 0x1d) goto LAB_00102962;
    *pbVar18 = 100;
  }
  uVar8 = 1;
LAB_001021b9:
  uVar8 = ~uVar8 & (uint)uVar24;
  if (uVar8 != 0) {
    uVar9 = dcgettext(0,"invalid flags in conversion specification: %%%c%c",5);
    error(1,0,uVar9,(-((uVar8 & 2) == 0) & 4U) + 0x23,(int)(char)pcVar22);
    goto LAB_00102c80;
  }
  bVar4 = true;
LAB_00102100:
  bVar16 = pbVar18[1];
  pbVar18 = pbVar18 + 1;
  if (bVar16 != 0) goto LAB_00102110;
  if (!bVar4) goto LAB_00102a69;
  in_R9 = 0x7fffffff;
  iVar7 = __snprintf_chk(0,0,2,0xffffffffffffffff);
  lVar17 = (long)iVar7;
  if (iVar7 < 0) {
LAB_001028ab:
                    /* WARNING: Subroutine does not return */
    xalloc_die();
  }
LAB_001021ea:
  if (SCARRY8(lVar17 + 1,(long)pcVar11)) goto LAB_001028ab;
  filename_space = (char *)ximalloc((undefined *)((long)&pcVar11->offset + lVar17 + 1));
  pcVar26 = argv[(int)_optind];
  uVar8 = _optind + 1;
  _optind = uVar8;
  iVar7 = strcmp(pcVar26,"-");
  if ((iVar7 != 0) && (iVar7 = fd_reopen(0,pcVar26,0,0), uVar8 = _optind, iVar7 < 0)) {
    pcVar22 = (control *)quotearg_style(4,pcVar26);
    uVar9 = dcgettext(0,"cannot open %s for reading",5);
    piVar20 = __errno_location();
    error(1,*piVar20,uVar9,pcVar22);
LAB_00102962:
    ppuVar15 = __ctype_b_loc();
    pcVar11 = (control *)((ulong)pcVar22 & 0xff);
    pcVar26 = "invalid conversion specifier in suffix: %c";
    if ((*(byte *)((long)*ppuVar15 + (long)pcVar22 * 2 + 1) & 0x40) == 0) {
      pcVar26 = "invalid conversion specifier in suffix: \\%.3o";
    }
    uVar9 = dcgettext(0,pcVar26,5);
    uVar24 = 0;
    uVar28 = 1;
    pbVar18 = (byte *)error(1,0,uVar9,pcVar11);
LAB_001029a2:
    uVar8 = 2;
    goto LAB_001021b9;
  }
  pcVar11 = (control *)(ulong)uVar8;
  local_f0 = &val;
  if ((int)uVar8 < argc) goto LAB_00102248;
LAB_00102360:
  piVar23 = main::lexical_block_6::sig;
  piVar20 = main::lexical_block_6::sig;
  sigemptyset((sigset_t *)&caught_signals);
  do {
    iVar7 = *piVar20;
    sigaction(iVar7,(sigaction *)0x0,(sigaction *)&act);
    if (act.__sigaction_handler.sa_handler != (__sighandler_t)0x1) {
      sigaddset((sigset_t *)&caught_signals,iVar7);
    }
    piVar20 = piVar20 + 1;
  } while (piVar20 != (int *)0x102dac);
  psVar25 = &caught_signals;
  p_Var29 = &act.sa_mask;
  for (lVar17 = 0x20; lVar17 != 0; lVar17 = lVar17 + -1) {
    *(int *)p_Var29->__val = (int)psVar25->__val[0];
    psVar25 = (sigset_t *)((long)psVar25 + ((ulong)bVar32 * -2 + 1) * 4);
    p_Var29 = (__sigset_t *)((long)p_Var29 + (ulong)bVar32 * -8 + 4);
  }
  act.sa_flags = 0;
  act.__sigaction_handler.sa_handler = interrupt_handler;
  do {
    uVar8 = *piVar23;
    pcVar11 = (control *)(ulong)uVar8;
    iVar7 = sigismember((sigset_t *)&caught_signals,uVar8);
    if (iVar7 != 0) {
      sigaction(uVar8,(sigaction *)&act,(sigaction *)0x0);
    }
    piVar23 = (int *)((uint *)piVar23 + 1);
  } while ((uint *)piVar23 != (uint *)0x102dac);
  local_100 = 0;
  pcVar22 = (control *)0x102dac;
LAB_00102509:
  if (control_used <= local_100) {
    create_output_file();
    dump_rest_of_file();
    close_output_file();
    iVar7 = close(0);
    if (iVar7 != 0) {
      uVar9 = dcgettext(0,"read error",5);
      piVar20 = __errno_location();
      error(0,*piVar20,uVar9);
                    /* WARNING: Subroutine does not return */
      cleanup_fatal();
    }
    if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 0;
    }
LAB_00102bd4:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  uVar28 = 0;
  if (controls[local_100].regexpr != false) {
    uVar28 = 0;
    goto LAB_0010253e;
  }
  do {
    uVar24 = uVar28;
    pcVar5 = controls;
    if ((controls[local_100].repeat_forever == false) && (controls[local_100].repeat < (long)uVar24)
       ) goto LAB_0010279f;
    lVar17 = controls[local_100].lines_required;
    uVar28 = uVar24 + 1;
    create_output_file();
    lVar17 = lVar17 * uVar28;
    pcVar14 = find_line(current_line + 1);
    if (((pcVar14 == (cstring *)0x0) && (suppress_matched != false)) ||
       (((head == (buffer_record *)0x0 && (_Var6 = load_buffer(), !_Var6)) ||
        (lVar3 = head->first_available, lVar3 == 0)))) break;
    pcVar11 = (control *)(lVar3 + 1);
    pcVar22 = (control *)(lVar17 + 1);
    if (lVar17 - lVar3 == 0 || lVar17 < lVar3) {
      close_output_file();
    }
    else {
      do {
        pcVar14 = remove_line();
        if (pcVar14 == (cstring *)0x0) goto LAB_00102859;
        save_line_to_file(pcVar14);
        pcVar11 = (control *)((long)&pcVar11->offset + 1);
      } while (pcVar22 != pcVar11);
      close_output_file();
    }
    if (suppress_matched != false) {
      remove_line();
    }
    pcVar14 = find_line(current_line + 1);
  } while ((pcVar14 != (cstring *)0x0) || (suppress_matched != false));
LAB_00102859:
  handle_line_error((control *)pcVar5[local_100].lines_required,uVar24);
  do {
    create_output_file();
    do {
      cVar21 = (char)pcVar22;
      if (-1 < pcVar11->offset) {
LAB_001025bb:
        current_line = current_line + 1;
        pcVar14 = find_line(current_line);
        if (pcVar14 != (cstring *)0x0) {
          lVar17 = pcVar14->len;
          if (pcVar14->str[lVar17 + -1] == '\n') {
            lVar17 = lVar17 + -1;
          }
          iVar7 = re_search((re_pattern_buffer *)&pcVar11->re_compiled,pcVar14->str,(int)lVar17,0,
                            (int)lVar17,(re_registers *)0x0);
          if (iVar7 == -2) {
LAB_00102b3e:
            uVar9 = dcgettext(0,"error in regular expression search",5);
            error(0,0,uVar9);
                    /* WARNING: Subroutine does not return */
            cleanup_fatal();
          }
          if (iVar7 == -1) {
            pcVar14 = remove_line();
            if (cVar21 == '\0') {
              save_line_to_file(pcVar14);
            }
            goto LAB_001025bb;
          }
          goto LAB_001027aa;
        }
        if (pcVar11->repeat_forever == false) goto LAB_00102bc5;
        if (cVar21 != '\0') goto LAB_001025ea;
        while (pcVar14 = remove_line(), pcVar14 != (cstring *)0x0) {
          save_line_to_file(pcVar14);
        }
        goto LAB_00102768;
      }
      do {
        current_line = current_line + 1;
        pcVar14 = find_line(current_line);
        if (pcVar14 == (cstring *)0x0) {
          if (pcVar11->repeat_forever == false) goto LAB_00102bc5;
          if (cVar21 == '\0') goto LAB_0010275b;
          goto LAB_001025ea;
        }
        lVar17 = pcVar14->len;
        if (pcVar14->str[lVar17 + -1] == '\n') {
          lVar17 = lVar17 + -1;
        }
        iVar7 = re_search((re_pattern_buffer *)&pcVar11->re_compiled,pcVar14->str,(int)lVar17,0,
                          (int)lVar17,(re_registers *)0x0);
        if (iVar7 == -2) goto LAB_00102b3e;
      } while (iVar7 == -1);
LAB_001027aa:
      lVar17 = current_line + pcVar11->offset;
      iVar7 = pcVar11->argnum;
      if (((head == (buffer_record *)0x0) && (_Var6 = load_buffer(), !_Var6)) ||
         ((lVar3 = head->first_available, lVar3 == 0 || (lVar17 < lVar3)))) {
        pcVar26 = global_argv[iVar7];
LAB_00102a26:
        uVar9 = quote(pcVar26);
        uVar10 = dcgettext(0,"%s: line number out of range",5);
        error(0,0,uVar10,uVar9);
                    /* WARNING: Subroutine does not return */
        cleanup_fatal();
      }
      lVar31 = 0;
      if (lVar17 != lVar3) {
        do {
          pcVar14 = remove_line();
          if (pcVar14 == (cstring *)0x0) {
            pcVar26 = global_argv[iVar7];
            goto LAB_00102a26;
          }
          if (cVar21 == '\0') {
            save_line_to_file(pcVar14);
          }
          lVar31 = lVar31 + 1;
        } while (lVar17 - lVar3 != lVar31);
      }
      if (cVar21 == '\0') {
        close_output_file();
      }
      if (0 < pcVar11->offset) {
        current_line = lVar17;
      }
      if (suppress_matched != false) {
        remove_line();
      }
      uVar28 = uVar28 + 1;
LAB_0010253e:
      pcVar11 = controls + local_100;
      if ((pcVar11->repeat_forever == false) && (pcVar11->repeat < (long)uVar28)) goto LAB_0010279f;
      pcVar22 = (control *)(ulong)pcVar11->ignore;
    } while (pcVar11->ignore != false);
  } while( true );
LAB_0010279f:
  local_100 = local_100 + 1;
  goto LAB_00102509;
LAB_0010275b:
  while (pcVar14 = remove_line(), pcVar14 != (cstring *)0x0) {
    save_line_to_file(pcVar14);
  }
LAB_00102768:
  close_output_file();
LAB_001025ea:
                    /* WARNING: Subroutine does not return */
  exit(0);
}


