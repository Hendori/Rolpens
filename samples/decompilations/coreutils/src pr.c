
/* WARNING: Unknown calling convention */
/* WARNING: Enum "anon_enum_32": Some values do not have unique names */

uint cols_ready_to_print(void)

{
  COLUMN *pCVar1;
  uint uVar2;
  
  if (columns != 0) {
    uVar2 = 0;
    pCVar1 = column_vector;
    do {
      if (((uint)pCVar1->status < 2) ||
         (((storing_columns && (0 < pCVar1->lines_stored)) && (0 < pCVar1->lines_to_print)))) {
        uVar2 = uVar2 + 1;
      }
      pCVar1 = pCVar1 + 1;
    } while (column_vector + (uint)columns != pCVar1);
    return uVar2;
  }
  return 0;
}



/* WARNING: Unknown calling convention */
/* WARNING: Enum "anon_enum_32": Some values do not have unique names */

void hold_file(COLUMN *p)

{
  COLUMN *pCVar1;
  COLUMN *pCVar2;
  COLUMN *pCVar3;
  anon_enum_32 aVar4;
  
  pCVar3 = column_vector;
  if (parallel_files) {
    files_ready_to_read = files_ready_to_read + -1;
    p->status = DT_CHR;
    p->lines_to_print = 0;
    return;
  }
  if (columns != 0) {
    aVar4 = DT_CHR - (uint)storing_columns;
    pCVar1 = column_vector + (uint)columns;
    pCVar2 = column_vector;
    if (((ulong)(uint)columns * 0x40 & 0x40) != 0) {
      column_vector->status = aVar4;
      pCVar2 = pCVar3 + 1;
      if (pCVar3 + 1 == pCVar1) goto LAB_001000b7;
    }
    do {
      pCVar2->status = aVar4;
      pCVar3 = pCVar2 + 2;
      pCVar2[1].status = aVar4;
      pCVar2 = pCVar3;
    } while (pCVar3 != pCVar1);
  }
LAB_001000b7:
  files_ready_to_read = files_ready_to_read + -1;
  p->lines_to_print = 0;
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Enum "anon_enum_32": Some values do not have unique names */

void reset_status(void)

{
  bool bVar1;
  COLUMN *pCVar2;
  COLUMN *pCVar3;
  int iVar4;
  COLUMN *pCVar5;
  
  pCVar2 = column_vector;
  if (columns != 0) {
    bVar1 = false;
    pCVar5 = column_vector + (uint)columns;
    pCVar3 = column_vector;
    iVar4 = files_ready_to_read;
    do {
      if (pCVar3->status == DT_CHR) {
        pCVar3->status = DT_UNKNOWN;
        iVar4 = iVar4 + 1;
        bVar1 = true;
      }
      pCVar3 = pCVar3 + 1;
    } while (pCVar3 != pCVar5);
    if (bVar1) {
      files_ready_to_read = iVar4;
    }
  }
  if (storing_columns != false) {
    files_ready_to_read = (int)(pCVar2->status != CLOSED);
  }
  return;
}



/* WARNING: Unknown calling convention */

void store_char(char c)

{
  if ((long)(ulong)buff_current < buff_allocated) {
    buff[buff_current] = c;
    buff_current = buff_current + 1;
    return;
  }
  buff = (char *)xpalloc(buff,&buff_allocated,1,0xffffffffffffffff,1);
  buff[buff_current] = c;
  buff_current = buff_current + 1;
  return;
}



/* WARNING: Unknown calling convention */

_Bool first_last_page(int oi,char c,char *pages)

{
  char *pcVar1;
  _Bool _Var2;
  undefined1 uVar3;
  uint uVar4;
  char cVar5;
  long in_FS_OFFSET;
  char *p;
  uintmax_t first;
  uintmax_t last;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  last = 0xffffffffffffffff;
  uVar4 = xstrtoumax(pages,&p,10,&first,&_LC0);
  if ((uVar4 & 0xfffffffd) != 0) {
LAB_001002d6:
    xstrtol_fatal(uVar4,oi,(int)c,long_options,pages);
    uVar3 = xnumtoimax();
    return (_Bool)uVar3;
  }
  if ((p != pages) && (first != 0)) {
    cVar5 = *p;
    if (cVar5 == ':') {
      pcVar1 = p + 1;
      uVar4 = xstrtoumax(pcVar1,&p,10,&last,&_LC0);
      if (uVar4 != 0) goto LAB_001002d6;
      if ((p == pcVar1) || (last < first)) goto LAB_00100268;
      cVar5 = *p;
    }
    if (cVar5 == '\0') {
      first_page_number = first;
      last_page_number = last;
      _Var2 = true;
      goto LAB_0010026a;
    }
  }
LAB_00100268:
  _Var2 = false;
LAB_0010026a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return _Var2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

int getoptnum(char *n_str,int min,char *err)

{
  int iVar1;
  
  iVar1 = xnumtoimax(n_str,10,(long)min,0x7fffffff,&_LC0,err,0,(ulong)(min == 1) << 2);
  return iVar1;
}



/* WARNING: Unknown calling convention */
/* WARNING: Enum "anon_enum_32": Some values do not have unique names */

void add_line_number(COLUMN *p)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  ulong uVar5;
  bool bVar6;
  char *pcVar4;
  
  iVar1 = __sprintf_chk(number_buff,2,0xffffffffffffffff,&_LC1,chars_per_number,line_number);
  uVar5 = (ulong)(uint)chars_per_number;
  line_number = line_number + 1;
  pcVar2 = number_buff + (iVar1 - chars_per_number);
  pcVar4 = pcVar2;
  if (0 < chars_per_number) {
    do {
      pcVar3 = pcVar4 + 1;
      (*p->char_func)(*pcVar4);
      pcVar4 = pcVar3;
    } while (pcVar2 + uVar5 != pcVar3);
  }
  if (columns < 2) {
    (*p->char_func)(number_separator);
    if (number_separator == '\t') {
      output_position =
           (chars_per_output_tab - output_position % chars_per_output_tab) + output_position;
    }
  }
  else if (number_separator == '\t') {
    iVar1 = number_width - chars_per_number;
    if (0 < iVar1) {
      do {
        (*p->char_func)(' ');
        bVar6 = iVar1 == 1;
        iVar1 = iVar1 + -2;
        if (bVar6) break;
        (*p->char_func)(' ');
      } while (iVar1 != 0);
    }
  }
  else {
    (*p->char_func)(number_separator);
  }
  if ((truncate_lines != false) && (parallel_files == false)) {
    input_position = input_position + number_width;
  }
  return;
}



/* WARNING: Unknown calling convention */

void init_header(char *filename,int desc)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  char *pcVar6;
  undefined8 uVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  timespec t;
  tm tm;
  stat st;
  char secbuf [21];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*filename == '-') && (filename[1] == '\0')) {
    desc = -1;
  }
  else if ((-1 < desc) && (iVar4 = fstat(desc,(stat *)&st), iVar4 == 0)) {
    t.tv_nsec = st.st_mtim.tv_nsec;
    t.tv_sec = st.st_mtim.tv_sec;
    uVar8 = st.st_mtim.tv_nsec;
    goto LAB_001004b2;
  }
  if (init_header::lexical_block_7::timespec.tv_sec == 0) {
    gettime(&init_header::lexical_block_7::timespec);
  }
  t.tv_nsec = init_header::lexical_block_7::timespec.tv_nsec;
  t.tv_sec = init_header::lexical_block_7::timespec.tv_sec;
  uVar8 = init_header::lexical_block_7::timespec.tv_nsec;
LAB_001004b2:
  lVar5 = localtime_rz(localtz,&t,&tm);
  if (lVar5 == 0) {
    pcVar6 = (char *)xmalloc(0x21);
    uVar7 = imaxtostr(t.tv_sec,secbuf);
    __sprintf_chk(pcVar6,2,0x21,"%s.%09d",uVar7,uVar8 & 0xffffffff);
  }
  else {
    lVar5 = nstrftime(0,0xffffffffffffffff,date_format,&tm,localtz,uVar8 & 0xffffffff);
    pcVar6 = (char *)xmalloc(lVar5 + 1);
    nstrftime(pcVar6,lVar5 + 1,date_format,&tm,localtz,uVar8 & 0xffffffff);
  }
  free(date_text);
  iVar4 = chars_per_line;
  file_text = custom_header;
  if ((custom_header == (char *)0x0) && (file_text = "", -1 < desc)) {
    file_text = filename;
  }
  date_text = pcVar6;
  iVar2 = gnu_mbswidth(pcVar6,0);
  iVar3 = gnu_mbswidth(file_text,0);
  header_width_available = (iVar4 - iVar2) - iVar3;
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void pad_across_to(int position)

{
  char *pcVar1;
  int iVar2;
  
  if (tabify_output) {
    spaces_not_printed = position - output_position;
    return;
  }
  for (iVar2 = output_position + 1; iVar2 <= position; iVar2 = iVar2 + 1) {
    pcVar1 = _stdout->_IO_write_ptr;
    if (pcVar1 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = pcVar1 + 1;
      *pcVar1 = ' ';
    }
    else {
      __overflow(_stdout,0x20);
    }
  }
  output_position = position;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void print_white_space(void)

{
  int iVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = spaces_not_printed + output_position;
  iVar6 = output_position;
  if ((1 < spaces_not_printed) &&
     (iVar4 = chars_per_output_tab - output_position % chars_per_output_tab,
     iVar5 = output_position + iVar4, iVar4 <= spaces_not_printed)) {
    do {
      iVar6 = iVar5;
      cVar3 = output_tab_char;
      pcVar2 = _stdout->_IO_write_ptr;
      if (pcVar2 < _stdout->_IO_write_end) {
        _stdout->_IO_write_ptr = pcVar2 + 1;
        *pcVar2 = cVar3;
      }
      else {
        __overflow(_stdout,(uint)(byte)output_tab_char);
      }
    } while ((1 < iVar1 - iVar6) &&
            (iVar5 = (chars_per_output_tab - iVar6 % chars_per_output_tab) + iVar6, iVar5 <= iVar1))
    ;
  }
  while (iVar6 = iVar6 + 1, iVar6 <= iVar1) {
    pcVar2 = _stdout->_IO_write_ptr;
    if (pcVar2 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = pcVar2 + 1;
      *pcVar2 = ' ';
    }
    else {
      __overflow(_stdout,0x20);
    }
  }
  output_position = iVar1;
  spaces_not_printed = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void print_sep_string(void)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  if (separators_not_printed < 1) {
    if (0 < spaces_not_printed) {
      print_white_space();
      return;
    }
  }
  else {
    pbVar4 = (byte *)(col_sep_string + (uint)col_sep_length);
    pbVar2 = (byte *)col_sep_string;
    if (0 < col_sep_length) {
      do {
        bVar1 = *pbVar2;
        pbVar3 = pbVar2 + 1;
        if (bVar1 == 0x20) {
          spaces_not_printed = spaces_not_printed + 1;
        }
        else {
          if (0 < spaces_not_printed) {
            print_white_space();
            bVar1 = *pbVar2;
          }
          pbVar2 = (byte *)_stdout->_IO_write_ptr;
          if (pbVar2 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = (char *)(pbVar2 + 1);
            *pbVar2 = bVar1;
          }
          else {
            __overflow(_stdout,(uint)bVar1);
          }
          output_position = output_position + 1;
        }
        pbVar2 = pbVar3;
      } while (pbVar4 != pbVar3);
    }
    do {
      if (0 < spaces_not_printed) {
        print_white_space();
      }
      separators_not_printed = separators_not_printed + -1;
    } while (0 < separators_not_printed);
  }
  return;
}



/* WARNING: Unknown calling convention */
/* WARNING: Enum "anon_enum_32": Some values do not have unique names */

void align_column(COLUMN *p)

{
  char cVar1;
  
  padding_not_printed = p->start_position;
  if (col_sep_length < padding_not_printed) {
    pad_across_to(padding_not_printed - col_sep_length);
    padding_not_printed = 0;
    if (use_col_separator != false) goto LAB_001008ea;
  }
  else if (use_col_separator) {
LAB_001008ea:
    print_sep_string();
    cVar1 = p->numbered;
    goto joined_r0x001008f3;
  }
  cVar1 = p->numbered;
joined_r0x001008f3:
  if (cVar1 == '\0') {
    return;
  }
  add_line_number(p);
  return;
}



/* WARNING: Unknown calling convention */

int char_to_clump(char c)

{
  long lVar1;
  char *pcVar2;
  uint uVar3;
  ushort **ppuVar4;
  int iVar5;
  uint uVar6;
  long in_FS_OFFSET;
  char esc_buff [4];
  
  iVar5 = input_position;
  pcVar2 = clump_buff;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (input_tab_char == c) {
    uVar3 = chars_per_input_tab - input_position % chars_per_input_tab;
    if (untabify_input) {
      if (uVar3 == 0) {
        uVar6 = 0;
        goto LAB_001009e8;
      }
      goto LAB_001009c1;
    }
    *clump_buff = c;
    uVar6 = 1;
joined_r0x00100a6d:
    if (-1 < (int)uVar3) {
      input_position = uVar3 + iVar5;
      goto LAB_001009e8;
    }
  }
  else {
    if (c == '\t') {
      uVar3 = (uint)(input_position >> 0x1f) >> 0x1d;
      uVar3 = (uVar3 - (input_position + uVar3 & 7)) + 8;
      if (!untabify_input) {
        *clump_buff = '\t';
        uVar6 = 1;
        input_position = uVar3 + input_position;
        goto LAB_001009e8;
      }
LAB_001009c1:
      memset(clump_buff,0x20,(ulong)uVar3);
      uVar6 = uVar3;
      goto joined_r0x00100a6d;
    }
    ppuVar4 = __ctype_b_loc();
    iVar5 = input_position;
    if ((*(byte *)((long)*ppuVar4 + (ulong)(byte)c * 2 + 1) & 0x40) != 0) {
      *pcVar2 = c;
      uVar6 = 1;
      input_position = input_position + 1;
      goto LAB_001009e8;
    }
    if (use_esc_sequence != false) {
LAB_00100ab0:
      *pcVar2 = '\\';
      uVar6 = 4;
      __sprintf_chk(esc_buff,2,4,&_LC3,c);
      pcVar2[1] = esc_buff[0];
      pcVar2[2] = esc_buff[1];
      pcVar2[3] = esc_buff[2];
      input_position = input_position + 4;
      goto LAB_001009e8;
    }
    if (use_cntrl_prefix != false) {
      if (-1 < c) {
        *pcVar2 = '^';
        uVar6 = 2;
        pcVar2[1] = c ^ 0x40;
        input_position = input_position + 2;
        goto LAB_001009e8;
      }
      goto LAB_00100ab0;
    }
    if (c != '\b') {
      *pcVar2 = c;
      uVar6 = 1;
      goto LAB_001009e8;
    }
    *pcVar2 = '\b';
    uVar6 = 1;
    uVar3 = 0xffffffff;
  }
  if (iVar5 == 0) {
    uVar6 = 0;
  }
  else if ((int)-uVar3 < iVar5) {
    input_position = uVar3 + iVar5;
  }
  else {
    input_position = 0;
  }
LAB_001009e8:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void print_char(char c)

{
  char *pcVar1;
  ushort **ppuVar2;
  
  if (tabify_output) {
    if (c == ' ') {
      spaces_not_printed = spaces_not_printed + 1;
      return;
    }
    if (0 < spaces_not_printed) {
      print_white_space();
    }
    ppuVar2 = __ctype_b_loc();
    if ((*(byte *)((long)*ppuVar2 + (ulong)(byte)c * 2 + 1) & 0x40) == 0) {
      if (c == '\b') {
        output_position = output_position + -1;
      }
    }
    else {
      output_position = output_position + 1;
    }
  }
  pcVar1 = _stdout->_IO_write_ptr;
  if (pcVar1 < _stdout->_IO_write_end) {
    _stdout->_IO_write_ptr = pcVar1 + 1;
    *pcVar1 = c;
    return;
  }
  __overflow(_stdout,(uint)(byte)c);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void integer_overflow(void)

{
  undefined8 uVar1;
  size_t sVar2;
  char *__s;
  
  uVar1 = dcgettext(0,"integer overflow",5);
  __s = (char *)0x1;
  error(1,0,uVar1);
  sVar2 = strlen(__s);
  if (sVar2 < 0x80000000) {
    col_sep_string = __s;
    col_sep_length = (int)sVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  integer_overflow();
}



/* WARNING: Unknown calling convention */

void separator_string(char *optarg_S)

{
  size_t sVar1;
  
  sVar1 = strlen(optarg_S);
  if (sVar1 < 0x80000000) {
    col_sep_string = optarg_S;
    col_sep_length = (int)sVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  integer_overflow();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void print_header(void)

{
  long lVar1;
  int iVar2;
  uintmax_t uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  char page_text [276];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  output_position = 0;
  pad_across_to(chars_per_margin);
  print_white_space();
  uVar3 = page_number;
  if (page_number == 0) {
    uVar6 = dcgettext(0,"page number overflow",5);
    error(1,0,uVar6);
  }
  else {
    uVar6 = dcgettext(0,"Page %ju",5);
    __sprintf_chk(page_text,2,0x114,uVar6,uVar3);
    iVar2 = header_width_available;
    iVar4 = gnu_mbswidth(page_text,0);
    iVar5 = 0;
    if (-1 < iVar2 - iVar4) {
      iVar5 = iVar2 - iVar4;
    }
    __printf_chk(2,"\n\n%*s%s%*s%s%*s%s\n\n\n",chars_per_margin,&_LC0,date_text,iVar5 >> 1,&_LC8,
                 file_text,iVar5 - (iVar5 >> 1),&_LC8,page_text);
    print_a_header = false;
    output_position = 0;
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */
/* WARNING: Enum "anon_enum_32": Some values do not have unique names */

_Bool print_stored(COLUMN *p)

{
  COLUMN *pCVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  COLUMN *pCVar5;
  COLUMN *pCVar6;
  COLUMN *pCVar7;
  char *pcVar8;
  
  pcVar4 = buff;
  iVar2 = p->current_line;
  pad_vertically = true;
  p->current_line = iVar2 + 1;
  iVar3 = line_vector[(long)iVar2 + 1];
  pcVar8 = pcVar4 + line_vector[iVar2];
  if (print_a_header != false) {
    print_header();
  }
  pCVar5 = column_vector;
  if (p->status != DT_FIFO) goto LAB_00100de9;
  if (0 < columns) {
    pCVar1 = column_vector + (uint)columns;
    pCVar6 = column_vector;
    if (((ulong)(uint)columns * 0x40 & 0x40) != 0) {
      pCVar6 = column_vector + 1;
      column_vector->status = DT_CHR;
      if (pCVar1 == pCVar6) goto LAB_00100ebf;
    }
    do {
      pCVar6->status = DT_CHR;
      pCVar7 = pCVar6 + 2;
      pCVar6[1].status = DT_CHR;
      pCVar6 = pCVar7;
    } while (pCVar1 != pCVar7);
  }
LAB_00100ebf:
  if (pCVar5->lines_to_print < 1) {
    if (extremities != false) {
      return true;
    }
    pad_vertically = false;
    return true;
  }
LAB_00100de9:
  if (col_sep_length < padding_not_printed) {
    pad_across_to(padding_not_printed - col_sep_length);
    padding_not_printed = 0;
  }
  if (use_col_separator != false) {
    print_sep_string();
  }
  for (; pcVar8 != pcVar4 + iVar3; pcVar8 = pcVar8 + 1) {
    print_char(*pcVar8);
  }
  if ((spaces_not_printed == 0) &&
     (output_position = end_vector[iVar2] + p->start_position,
     p->start_position - col_sep_length == chars_per_margin)) {
    output_position = output_position - col_sep_length;
    return true;
  }
  return true;
}



/* WARNING: Unknown calling convention */
/* WARNING: Enum "anon_enum_32": Some values do not have unique names */

void close_file(COLUMN *p)

{
  COLUMN *pCVar1;
  _IO_FILE *__stream;
  char *pcVar2;
  _Bool _Var3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  undefined8 uVar7;
  byte *pbVar8;
  COLUMN *pCVar9;
  COLUMN *pCVar10;
  uint uVar11;
  COLUMN *pCVar12;
  bool bVar13;
  
  if (p->status == CLOSED) {
    return;
  }
  puVar6 = (uint *)__errno_location();
  uVar11 = ((FILE *)p->fp)->_flags & 0x20;
  if (uVar11 != 0) {
    uVar11 = *puVar6;
  }
  iVar4 = fileno((FILE *)p->fp);
  if (iVar4 == 0) {
    clearerr_unlocked((FILE *)p->fp);
LAB_00100f75:
    if (uVar11 == 0) {
      if (parallel_files == false) {
        pCVar9 = column_vector + (uint)columns;
        pCVar12 = column_vector;
        if (columns != 0) {
          do {
            pCVar12->status = CLOSED;
            if (pCVar12->lines_stored == 0) {
              pCVar12->lines_to_print = 0;
            }
            pCVar12 = pCVar12 + 1;
          } while (pCVar9 != pCVar12);
        }
        files_ready_to_read = files_ready_to_read + -1;
        return;
      }
      p->status = CLOSED;
      p->lines_to_print = 0;
      files_ready_to_read = files_ready_to_read + -1;
      return;
    }
  }
  else {
    iVar4 = rpl_fclose();
    if (iVar4 == 0) goto LAB_00100f75;
    if (uVar11 == 0) {
      uVar11 = *puVar6;
      goto LAB_00100f75;
    }
  }
  uVar7 = quotearg_n_style_colon(0,3,p->name);
  pCVar12 = (COLUMN *)0x1;
  error(1,uVar11,&_LC9,uVar7);
  __stream = (_IO_FILE *)pCVar12->fp;
  pbVar8 = (byte *)__stream->_IO_read_ptr;
  if (pbVar8 < __stream->_IO_read_end) {
    __stream->_IO_read_ptr = (char *)(pbVar8 + 1);
    uVar5 = (uint)*pbVar8;
  }
  else {
    uVar5 = __uflow(__stream);
  }
  _Var3 = last_line;
  if (uVar5 == 0xc) {
    pbVar8 = (byte *)__stream->_IO_read_ptr;
    if (pCVar12->full_page_printed != false) {
      if (pbVar8 < __stream->_IO_read_end) {
        __stream->_IO_read_ptr = (char *)(pbVar8 + 1);
        uVar5 = (uint)*pbVar8;
      }
      else {
        uVar5 = __uflow(__stream);
      }
      if (uVar5 == 10) {
        pbVar8 = (byte *)__stream->_IO_read_ptr;
        if (pbVar8 < __stream->_IO_read_end) {
          __stream->_IO_read_ptr = (char *)(pbVar8 + 1);
          uVar5 = (uint)*pbVar8;
        }
        else {
          uVar5 = __uflow(__stream);
        }
        bVar13 = uVar5 == 0xc;
        pCVar12->full_page_printed = false;
        if (last_line != false) {
          pCVar12->full_page_printed = true;
        }
        if (uVar5 != 10) goto LAB_001010d4;
        goto LAB_00101170;
      }
      bVar13 = last_line == false;
      pCVar12->full_page_printed = false;
      if (bVar13) {
        if (uVar5 == 0xc) {
          pbVar8 = (byte *)__stream->_IO_read_ptr;
          goto LAB_00101231;
        }
      }
      else {
        pCVar12->full_page_printed = true;
        if (uVar5 == 0xc) {
          pbVar8 = (byte *)__stream->_IO_read_ptr;
          goto LAB_00101272;
        }
      }
      bVar13 = false;
      goto LAB_00101093;
    }
    if (last_line != false) {
      pCVar12->full_page_printed = true;
LAB_00101272:
      bVar13 = true;
      goto LAB_001010ef;
    }
LAB_00101231:
    bVar13 = true;
  }
  else {
    pCVar12->full_page_printed = false;
    if (_Var3 != false) {
      pCVar12->full_page_printed = true;
    }
    bVar13 = false;
    if (uVar5 == 10) {
      bVar13 = false;
      goto LAB_00101170;
    }
LAB_00101093:
    do {
      if (uVar5 == 0xffffffff) {
        close_file(pCVar12);
        goto LAB_00101170;
      }
      while (pcVar2 = __stream->_IO_read_ptr, pcVar2 < __stream->_IO_read_end) {
        __stream->_IO_read_ptr = pcVar2 + 1;
        if (*pcVar2 == '\n') goto LAB_00101170;
        if (*pcVar2 == '\f') goto LAB_001010e0;
      }
      uVar5 = __uflow(__stream);
      if (uVar5 == 10) goto LAB_00101170;
LAB_001010d4:
    } while (uVar5 != 0xc);
LAB_001010e0:
    pbVar8 = (byte *)__stream->_IO_read_ptr;
    if (last_line != false) {
LAB_001010ef:
      pCVar9 = column_vector;
      if (parallel_files == false) {
        if (columns != 0) {
          pCVar1 = column_vector + (uint)columns;
          if (((ulong)(uint)columns * 0x40 & 0x40) != 0) {
            column_vector->full_page_printed = false;
            pCVar9 = pCVar9 + 1;
            if (pCVar1 == pCVar9) goto LAB_00101148;
          }
          do {
            pCVar9->full_page_printed = false;
            pCVar10 = pCVar9 + 2;
            pCVar9[1].full_page_printed = false;
            pCVar9 = pCVar10;
          } while (pCVar1 != pCVar10);
        }
      }
      else {
        pCVar12->full_page_printed = false;
      }
    }
  }
LAB_00101148:
  if (pbVar8 < __stream->_IO_read_end) {
    __stream->_IO_read_ptr = (char *)(pbVar8 + 1);
    uVar5 = (uint)*pbVar8;
  }
  else {
    uVar5 = __uflow(__stream);
  }
  if (uVar5 == 10) {
    hold_file(pCVar12);
  }
  else {
    ungetc(uVar5,__stream);
    hold_file(pCVar12);
  }
LAB_00101170:
  if ((skip_count != false) && (((parallel_files != true || (uVar11 == 1)) && (!bVar13)))) {
    line_count = line_count + 1;
  }
  return;
}



/* WARNING: Unknown calling convention */
/* WARNING: Enum "anon_enum_32": Some values do not have unique names */

void skip_read(COLUMN *p,int column_number)

{
  COLUMN *pCVar1;
  _IO_FILE *__stream;
  char *pcVar2;
  _Bool _Var3;
  uint uVar4;
  byte *pbVar5;
  COLUMN *pCVar6;
  COLUMN *pCVar7;
  bool bVar8;
  
  __stream = (_IO_FILE *)p->fp;
  pbVar5 = (byte *)__stream->_IO_read_ptr;
  if (pbVar5 < __stream->_IO_read_end) {
    __stream->_IO_read_ptr = (char *)(pbVar5 + 1);
    uVar4 = (uint)*pbVar5;
  }
  else {
    uVar4 = __uflow(__stream);
  }
  _Var3 = last_line;
  if (uVar4 == 0xc) {
    pbVar5 = (byte *)__stream->_IO_read_ptr;
    if (p->full_page_printed != false) {
      if (pbVar5 < __stream->_IO_read_end) {
        __stream->_IO_read_ptr = (char *)(pbVar5 + 1);
        uVar4 = (uint)*pbVar5;
      }
      else {
        uVar4 = __uflow(__stream);
      }
      if (uVar4 == 10) {
        pbVar5 = (byte *)__stream->_IO_read_ptr;
        if (pbVar5 < __stream->_IO_read_end) {
          __stream->_IO_read_ptr = (char *)(pbVar5 + 1);
          uVar4 = (uint)*pbVar5;
        }
        else {
          uVar4 = __uflow(__stream);
        }
        bVar8 = uVar4 == 0xc;
        p->full_page_printed = false;
        if (last_line != false) {
          p->full_page_printed = true;
        }
        if (uVar4 != 10) goto LAB_001010d4;
        goto LAB_00101170;
      }
      bVar8 = last_line == false;
      p->full_page_printed = false;
      if (bVar8) {
        if (uVar4 == 0xc) {
          pbVar5 = (byte *)__stream->_IO_read_ptr;
          goto LAB_00101231;
        }
      }
      else {
        p->full_page_printed = true;
        if (uVar4 == 0xc) {
          pbVar5 = (byte *)__stream->_IO_read_ptr;
          goto LAB_00101272;
        }
      }
      bVar8 = false;
      goto LAB_00101093;
    }
    if (last_line != false) {
      p->full_page_printed = true;
LAB_00101272:
      bVar8 = true;
      goto LAB_001010ef;
    }
LAB_00101231:
    bVar8 = true;
  }
  else {
    p->full_page_printed = false;
    if (_Var3 != false) {
      p->full_page_printed = true;
    }
    bVar8 = false;
    if (uVar4 == 10) {
      bVar8 = false;
      goto LAB_00101170;
    }
LAB_00101093:
    do {
      if (uVar4 == 0xffffffff) {
        close_file(p);
        goto LAB_00101170;
      }
      while (pcVar2 = __stream->_IO_read_ptr, pcVar2 < __stream->_IO_read_end) {
        __stream->_IO_read_ptr = pcVar2 + 1;
        if (*pcVar2 == '\n') goto LAB_00101170;
        if (*pcVar2 == '\f') goto LAB_001010e0;
      }
      uVar4 = __uflow(__stream);
      if (uVar4 == 10) goto LAB_00101170;
LAB_001010d4:
    } while (uVar4 != 0xc);
LAB_001010e0:
    pbVar5 = (byte *)__stream->_IO_read_ptr;
    if (last_line != false) {
LAB_001010ef:
      pCVar6 = column_vector;
      if (parallel_files == false) {
        if (columns != 0) {
          pCVar1 = column_vector + (uint)columns;
          if (((ulong)(uint)columns * 0x40 & 0x40) != 0) {
            column_vector->full_page_printed = false;
            pCVar6 = pCVar6 + 1;
            if (pCVar1 == pCVar6) goto LAB_00101148;
          }
          do {
            pCVar6->full_page_printed = false;
            pCVar7 = pCVar6 + 2;
            pCVar6[1].full_page_printed = false;
            pCVar6 = pCVar7;
          } while (pCVar1 != pCVar7);
        }
      }
      else {
        p->full_page_printed = false;
      }
    }
  }
LAB_00101148:
  if (pbVar5 < __stream->_IO_read_end) {
    __stream->_IO_read_ptr = (char *)(pbVar5 + 1);
    uVar4 = (uint)*pbVar5;
  }
  else {
    uVar4 = __uflow(__stream);
  }
  if (uVar4 == 10) {
    hold_file(p);
  }
  else {
    ungetc(uVar4,__stream);
    hold_file(p);
  }
LAB_00101170:
  if ((skip_count != false) && (((parallel_files != true || (column_number == 1)) && (!bVar8)))) {
    line_count = line_count + 1;
  }
  return;
}



/* WARNING: Unknown calling convention */
/* WARNING: Enum "anon_enum_32": Some values do not have unique names */

void read_rest_of_line(COLUMN *p)

{
  _IO_FILE *__stream;
  char *pcVar1;
  byte *pbVar2;
  int iVar3;
  uint __c;
  
  __stream = (_IO_FILE *)p->fp;
  do {
    while (pcVar1 = __stream->_IO_read_ptr, __stream->_IO_read_end <= pcVar1) {
      iVar3 = __uflow(__stream);
      if (iVar3 == 10) {
        return;
      }
      if (iVar3 == 0xc) goto LAB_00101370;
      if (iVar3 == -1) {
        close_file(p);
        return;
      }
    }
    __stream->_IO_read_ptr = pcVar1 + 1;
    if (*pcVar1 == '\n') {
      return;
    }
  } while (*pcVar1 != '\f');
LAB_00101370:
  pbVar2 = (byte *)__stream->_IO_read_ptr;
  if (pbVar2 < __stream->_IO_read_end) {
    __stream->_IO_read_ptr = (char *)(pbVar2 + 1);
    __c = (uint)*pbVar2;
  }
  else {
    __c = __uflow(__stream);
  }
  if (__c != 10) {
    ungetc(__c,__stream);
  }
  if (keep_FF != false) {
    print_a_FF = true;
  }
  hold_file(p);
  return;
}



/* WARNING: Unknown calling convention */
/* WARNING: Enum "anon_enum_32": Some values do not have unique names */

_Bool read_line(COLUMN *p)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  _IO_FILE *p_Var6;
  uint unaff_R12D;
  int iVar7;
  int iVar8;
  char *pcVar9;
  COLUMN *p_00;
  
  iVar8 = input_position;
  p_Var6 = (_IO_FILE *)p->fp;
  pbVar2 = (byte *)p_Var6->_IO_read_ptr;
  if (pbVar2 < p_Var6->_IO_read_end) {
    p_Var6->_IO_read_ptr = (char *)(pbVar2 + 1);
    bVar1 = *pbVar2;
    uVar3 = (uint)bVar1;
    if (bVar1 == 0xc) {
LAB_00101628:
      pbVar2 = (byte *)p_Var6->_IO_read_ptr;
      if (p->full_page_printed == false) goto LAB_00101660;
      if (p_Var6->_IO_read_end <= pbVar2) {
        uVar3 = __uflow(p_Var6);
        if (uVar3 == 10) {
          p_Var6 = (_IO_FILE *)p->fp;
          goto LAB_00101758;
        }
        p->full_page_printed = false;
LAB_00101825:
        if (uVar3 == 0xc) {
          p_Var6 = (_IO_FILE *)p->fp;
          goto LAB_00101660;
        }
        goto LAB_001015f8;
      }
      p_Var6->_IO_read_ptr = (char *)(pbVar2 + 1);
      uVar3 = (uint)*pbVar2;
      if (uVar3 == 10) {
LAB_00101758:
        pbVar2 = (byte *)p_Var6->_IO_read_ptr;
        if (pbVar2 < p_Var6->_IO_read_end) {
          p_Var6->_IO_read_ptr = (char *)(pbVar2 + 1);
          uVar3 = (uint)*pbVar2;
          p->full_page_printed = false;
          if (uVar3 != 10) goto joined_r0x00101779;
        }
        else {
          uVar3 = __uflow(p_Var6);
          p->full_page_printed = false;
          if (uVar3 != 10) goto LAB_00101825;
        }
        uVar3 = 10;
        goto LAB_00101425;
      }
      p->full_page_printed = false;
joined_r0x00101779:
      if (uVar3 == 0xc) {
LAB_00101660:
        pbVar2 = (byte *)p_Var6->_IO_read_ptr;
        if (pbVar2 < p_Var6->_IO_read_end) {
          p_Var6->_IO_read_ptr = (char *)(pbVar2 + 1);
          uVar3 = (uint)*pbVar2;
        }
        else {
          uVar3 = __uflow(p_Var6);
        }
        if (uVar3 != 10) {
          ungetc(uVar3,(FILE *)p->fp);
        }
        FF_only = true;
        if ((print_a_header == false) || (FF_only = true, storing_columns != false)) {
LAB_0010169b:
          if (keep_FF != false) {
            print_a_FF = true;
          }
        }
        else {
          pad_vertically = true;
          print_header();
        }
        hold_file(p);
        return true;
      }
    }
    else {
      p->full_page_printed = false;
      if (bVar1 == 10) goto LAB_00101425;
    }
  }
  else {
    uVar3 = __uflow(p_Var6);
    iVar8 = input_position;
    if (uVar3 == 0xc) {
      p_Var6 = (_IO_FILE *)p->fp;
      goto LAB_00101628;
    }
    p->full_page_printed = false;
    if (uVar3 == 10) goto LAB_00101425;
LAB_001015f8:
    if (uVar3 == 0xffffffff) {
LAB_00101601:
      close_file(p);
      return true;
    }
  }
  unaff_R12D = char_to_clump((char)uVar3);
LAB_00101425:
  if ((truncate_lines == false) || (input_position <= chars_per_column)) {
    if (p->char_func != store_char) {
      pad_vertically = true;
      if ((print_a_header != false) && (storing_columns == false)) {
        print_header();
      }
      iVar8 = separators_not_printed;
      if ((parallel_files != false) && (align_empty_cols != false)) {
        separators_not_printed = 0;
        iVar7 = 1;
        p_00 = column_vector;
        if (0 < iVar8) {
          do {
            iVar7 = iVar7 + 1;
            align_column(p_00);
            separators_not_printed = separators_not_printed + 1;
            p_00 = p_00 + 1;
          } while (iVar7 <= iVar8);
        }
        align_empty_cols = false;
        padding_not_printed = p->start_position;
        spaces_not_printed = chars_per_column;
        if (truncate_lines == false) {
          spaces_not_printed = 0;
        }
      }
      if (col_sep_length < padding_not_printed) {
        pad_across_to(padding_not_printed - col_sep_length);
        padding_not_printed = 0;
      }
      if (use_col_separator != false) {
        print_sep_string();
      }
    }
    if (p->numbered != false) {
      add_line_number(p);
    }
    empty_line = false;
    if (uVar3 == 10) {
      empty_line = false;
      return true;
    }
    pcVar9 = clump_buff + unaff_R12D;
    pcVar5 = clump_buff;
    if (unaff_R12D != 0) {
      do {
        pcVar4 = pcVar5 + 1;
        (*p->char_func)(*pcVar5);
        pcVar5 = pcVar4;
      } while (pcVar9 != pcVar4);
    }
LAB_00101550:
    p_Var6 = (_IO_FILE *)p->fp;
    pbVar2 = (byte *)p_Var6->_IO_read_ptr;
    if (pbVar2 < p_Var6->_IO_read_end) {
      p_Var6->_IO_read_ptr = (char *)(pbVar2 + 1);
      bVar1 = *pbVar2;
      uVar3 = (uint)bVar1;
      if (bVar1 == 10) {
        return true;
      }
      if (bVar1 == 0xc) {
LAB_001016e0:
        pbVar2 = (byte *)p_Var6->_IO_read_ptr;
        if (pbVar2 < p_Var6->_IO_read_end) {
          p_Var6->_IO_read_ptr = (char *)(pbVar2 + 1);
          uVar3 = (uint)*pbVar2;
        }
        else {
          uVar3 = __uflow(p_Var6);
        }
        if (uVar3 != 10) {
          ungetc(uVar3,(FILE *)p->fp);
        }
        goto LAB_0010169b;
      }
    }
    else {
      uVar3 = __uflow(p_Var6);
      if (uVar3 == 10) {
        return true;
      }
      if (uVar3 == 0xc) {
        p_Var6 = (_IO_FILE *)p->fp;
        goto LAB_001016e0;
      }
      if (uVar3 == 0xffffffff) goto LAB_00101601;
    }
    iVar8 = input_position;
    uVar3 = char_to_clump((char)uVar3);
    if ((truncate_lines == false) || (input_position <= chars_per_column)) {
      pcVar9 = clump_buff + uVar3;
      pcVar5 = clump_buff;
      if (uVar3 != 0) {
        do {
          pcVar4 = pcVar5 + 1;
          (*p->char_func)(*pcVar5);
          pcVar5 = pcVar4;
        } while (pcVar9 != pcVar4);
      }
      goto LAB_00101550;
    }
  }
  input_position = iVar8;
  return false;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */
/* WARNING: Enum "anon_enum_32": Some values do not have unique names */

_Bool open_file(char *name,COLUMN *p)

{
  _Bool _Var1;
  char *pcVar2;
  FILE *pFVar3;
  undefined8 uVar4;
  int *piVar5;
  
  if ((*name == '-') && (name[1] == '\0')) {
    pcVar2 = (char *)dcgettext(0,"standard input",5);
    pFVar3 = _stdin;
    have_read_stdin = true;
    p->fp = _stdin;
    p->name = pcVar2;
  }
  else {
    p->name = name;
    pFVar3 = (FILE *)fopen_safer(name,&_LC11);
    p->fp = pFVar3;
  }
  if (pFVar3 == (FILE *)0x0) {
    failed_opens = true;
    if (ignore_failed_opens == false) {
      uVar4 = quotearg_n_style_colon(0,3,name);
      piVar5 = __errno_location();
      error(0,*piVar5,&_LC9,uVar4);
      _Var1 = false;
    }
    else {
      _Var1 = false;
    }
  }
  else {
    fadvise(pFVar3,2);
    p->full_page_printed = false;
    _Var1 = true;
    total_files = total_files + 1;
    p->status = DT_UNKNOWN;
  }
  return _Var1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */
/* WARNING: Enum "anon_enum_32": Some values do not have unique names */

void print_files(int number_of_files,char **av)

{
  char **ppcVar1;
  anon_enum_32 aVar2;
  bool bVar3;
  FILE *pFVar4;
  uintmax_t uVar5;
  _Bool _Var6;
  int *piVar7;
  uint uVar8;
  _Bool _Var9;
  COLUMN *pCVar10;
  uintmax_t uVar11;
  COLUMN *pCVar12;
  long lVar13;
  ulong uVar14;
  char *pcVar15;
  undefined8 uVar16;
  byte bVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  COLUMN *pCVar21;
  COLUMN *pCVar22;
  code *pcVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  byte bVar27;
  char cVar28;
  int iVar29;
  code *pcVar30;
  ulong uVar31;
  uintmax_t uVar32;
  uint uVar33;
  byte bVar34;
  int iVar35;
  
  lines_per_body = lines_per_page + -10;
  if (lines_per_body < 1) {
    extremities = false;
    keep_FF = true;
LAB_00101ecd:
    lines_per_body = lines_per_page;
  }
  else if (!extremities) goto LAB_00101ecd;
  if ((double_space) && (bVar3 = lines_per_body < 2, lines_per_body = lines_per_body >> 1, bVar3)) {
    lines_per_body = 1;
  }
  if (number_of_files == 0) {
    parallel_files = false;
  }
  else if (parallel_files) {
    columns = number_of_files;
  }
  if (storing_columns) {
    balance_columns = true;
  }
  iVar19 = col_sep_length;
  if (columns < 2) {
    storing_columns = false;
LAB_00101a1d:
    if (join_lines) {
LAB_001023b5:
      truncate_lines = false;
    }
  }
  else {
    if (!use_col_separator) {
      col_sep_string = " ";
      col_sep_length = 1;
      if (join_lines) {
        col_sep_string = "\t";
      }
      use_col_separator = true;
      if (*col_sep_string != '\t') {
LAB_00101a0a:
        untabify_input = true;
      }
      truncate_lines = true;
      tabify_output = true;
      iVar19 = 1;
      goto LAB_00101a1d;
    }
    if (join_lines) {
      if (col_sep_length == 1) {
        if (*col_sep_string != '\t') goto LAB_00101a0a;
        tabify_output = true;
      }
      else {
        untabify_input = true;
        tabify_output = true;
      }
      goto LAB_001023b5;
    }
    if ((col_sep_length == 1) && (*col_sep_string == '\t')) {
      col_sep_string = " ";
    }
    truncate_lines = true;
    untabify_input = true;
    tabify_output = true;
  }
  if (numbered_lines) {
    line_count = start_line_num;
    iVar35 = chars_per_number + 1;
    if (number_separator == '\t') {
      uVar18 = (uint)(chars_per_number >> 0x1f) >> 0x1d;
      iVar35 = chars_per_number + 8 + (uVar18 - (chars_per_number + uVar18 & 7));
    }
    number_width = iVar35;
    if (parallel_files == false) goto LAB_00101f10;
  }
  else {
LAB_00101f10:
    iVar35 = 0;
  }
  lVar13 = (long)(columns + -1) * (long)iVar19;
  iVar19 = (int)lVar13;
  if (iVar19 != lVar13) {
    iVar19 = 0x7fffffff;
  }
  if (SBORROW4(chars_per_line - iVar35,iVar19)) {
    chars_per_column = 0;
  }
  else {
    chars_per_column = ((chars_per_line - iVar35) - iVar19) / columns;
    if (0 < chars_per_column) {
      if (numbered_lines) {
        free(number_buff);
        lVar13 = (long)chars_per_number + 1;
        if ((uint)chars_per_number < 0xc) {
          lVar13 = 0xc;
        }
        number_buff = (char *)xmalloc(lVar13);
      }
      free(clump_buff);
      iVar19 = chars_per_input_tab;
      if (chars_per_input_tab < 8) {
        iVar19 = 8;
      }
      clump_buff = (char *)xmalloc((long)iVar19);
      total_files = 0;
      free(column_vector);
      pCVar10 = (COLUMN *)xnmalloc((long)columns,0x40);
      column_vector = pCVar10;
      if (parallel_files == false) {
        if (number_of_files < 1) {
          pcVar15 = (char *)dcgettext(0,"standard input",5);
          pCVar10->full_page_printed = false;
          pFVar4 = _stdin;
          pCVar10->status = DT_UNKNOWN;
          total_files = total_files + 1;
          pCVar10->fp = pFVar4;
          pCVar10->name = pcVar15;
          have_read_stdin = true;
          init_header("",-1);
        }
        else {
          _Var9 = open_file(*av,pCVar10);
          if (!_Var9) {
            return;
          }
          iVar19 = fileno((FILE *)pCVar10->fp);
          init_header(*av,iVar19);
        }
        iVar19 = columns;
        pCVar10->lines_stored = 0;
        pFVar4 = pCVar10->fp;
        pcVar15 = pCVar10->name;
        if (iVar19 != 1) {
          pCVar12 = pCVar10 + 1;
          do {
            pCVar12->status = DT_UNKNOWN;
            pCVar21 = pCVar12 + 1;
            pCVar12->fp = pFVar4;
            pCVar12->name = pcVar15;
            pCVar12->full_page_printed = false;
            pCVar12->lines_stored = 0;
            pCVar12 = pCVar21;
          } while (pCVar21 != pCVar10 + (ulong)(iVar19 - 2) + 2);
        }
      }
      else {
        ppcVar1 = av + (uint)number_of_files;
        if (number_of_files != 0) {
          do {
            while (_Var9 = open_file(*av,pCVar10), !_Var9) {
              av = av + 1;
              columns = columns + -1;
              if (av == ppcVar1) goto LAB_00101b5c;
            }
            av = av + 1;
            pCVar10 = pCVar10 + 1;
          } while (av != ppcVar1);
        }
LAB_00101b5c:
        if (columns == 0) {
          return;
        }
        init_header("",-1);
      }
      files_ready_to_read = total_files;
      if (storing_columns == false) {
LAB_00101b94:
        uVar5 = first_page_number;
        uVar11 = 1;
        if (1 < first_page_number) {
          uVar32 = 1;
          do {
            iVar19 = 1;
            uVar14 = (ulong)(uint)columns;
            pCVar10 = column_vector;
            if (1 < lines_per_body) {
              do {
                if (0 < (int)uVar14) {
                  pCVar12 = pCVar10;
                  iVar35 = 1;
                  do {
                    while (pCVar12->status != DT_UNKNOWN) {
                      iVar35 = iVar35 + 1;
                      pCVar12 = pCVar12 + 1;
                      pCVar10 = column_vector;
                      if ((int)uVar14 < iVar35) goto LAB_001024a4;
                    }
                    iVar26 = iVar35 + 1;
                    skip_read(pCVar12,iVar35);
                    uVar14 = (ulong)(uint)columns;
                    pCVar10 = column_vector;
                    pCVar12 = pCVar12 + 1;
                    iVar35 = iVar26;
                  } while (iVar26 <= columns);
                }
LAB_001024a4:
                iVar19 = iVar19 + 1;
              } while (iVar19 < lines_per_body);
            }
            last_line = true;
            iVar19 = 1;
            if (0 < (int)uVar14) {
              do {
                while (pCVar10->status != DT_UNKNOWN) {
                  iVar19 = iVar19 + 1;
                  pCVar10 = pCVar10 + 1;
                  if ((int)uVar14 < iVar19) goto LAB_001024f5;
                }
                iVar35 = iVar19 + 1;
                skip_read(pCVar10,iVar19);
                uVar14 = (ulong)(uint)columns;
                pCVar10 = pCVar10 + 1;
                iVar19 = iVar35;
              } while (iVar35 <= columns);
LAB_001024f5:
              if ((storing_columns != false) && (0 < (int)uVar14)) {
                pCVar12 = column_vector + uVar14;
                pCVar10 = column_vector;
                do {
                  if (pCVar10->status != CLOSED) {
                    pCVar10->status = DT_CHR;
                  }
                  pCVar10 = pCVar10 + 1;
                } while (pCVar10 != pCVar12);
              }
            }
            reset_status();
            last_line = false;
            if (files_ready_to_read < 1) {
              uVar16 = dcgettext(0,"starting page number %ju exceeds page count %ju",5);
              error(0,0,uVar16,uVar5,uVar32);
              uVar11 = first_page_number;
              if (files_ready_to_read < 1) {
                return;
              }
              break;
            }
            uVar32 = uVar32 + 1;
            uVar11 = first_page_number;
          } while (uVar5 != uVar32);
        }
        pCVar10 = column_vector;
        _Var6 = truncate_lines;
        iVar26 = chars_per_column;
        bVar27 = numbered_lines;
        iVar35 = col_sep_length;
        _Var9 = storing_columns;
        iVar19 = columns;
        iVar29 = 0;
        if (((truncate_lines != false) &&
            (iVar29 = chars_per_column + chars_per_margin, parallel_files != false)) &&
           (numbered_lines != false)) {
          iVar29 = iVar29 + number_width;
        }
        uVar14 = (ulong)(uint)columns;
        iVar24 = chars_per_margin + col_sep_length;
        page_number = uVar11;
        if (columns < 2) {
          iVar19 = 1;
          pCVar12 = column_vector;
        }
        else {
          pcVar30 = store_char;
          if (storing_columns == false) {
            pcVar30 = print_char;
          }
          pcVar23 = print_stored;
          iVar20 = 1;
          if (storing_columns == false) {
            pcVar23 = read_line;
          }
          bVar34 = parallel_files ^ 1;
          pCVar12 = column_vector;
          iVar25 = iVar24;
          do {
            while( true ) {
              pCVar12->print_func = pcVar23;
              bVar17 = false;
              pCVar12->char_func = pcVar30;
              if ((_Bool)bVar27 != false) {
                bVar17 = iVar20 == 1 | bVar34;
              }
              pCVar12->numbered = (_Bool)bVar17;
              pCVar12->start_position = iVar25;
              if (_Var6 != false) break;
              iVar20 = iVar20 + 1;
              iVar29 = 0;
              iVar24 = 0;
              pCVar12 = pCVar12 + 1;
              iVar25 = 0;
              if (iVar20 == iVar19) goto LAB_00101ca5;
            }
            iVar24 = iVar35 + iVar29;
            iVar20 = iVar20 + 1;
            pCVar12 = pCVar12 + 1;
            iVar29 = iVar24 + iVar26;
            iVar25 = iVar24;
          } while (iVar20 != iVar19);
LAB_00101ca5:
          pCVar12 = pCVar10 + (iVar19 - 1);
        }
        pcVar30 = read_line;
        pcVar23 = print_char;
        if ((_Var9 != false) && (balance_columns != false)) {
          pcVar30 = print_stored;
          pcVar23 = store_char;
        }
        pCVar12->print_func = pcVar30;
        pCVar12->char_func = pcVar23;
        if ((_Bool)bVar27 != false) {
          bVar27 = parallel_files ^ 1U | iVar19 == 1;
        }
        pCVar12->numbered = (_Bool)bVar27;
        pCVar12->start_position = iVar24;
        line_number = line_count;
        if (_Var9 != false) goto LAB_001020a2;
        do {
          iVar19 = lines_per_body;
          if ((int)uVar14 != 0) {
            pCVar12 = pCVar10;
            do {
              iVar35 = 0;
              if (pCVar12->status == DT_UNKNOWN) {
                iVar35 = iVar19;
              }
              pCVar21 = pCVar12 + 1;
              pCVar12->lines_to_print = iVar35;
              pCVar12 = pCVar21;
            } while (pCVar21 != pCVar10 + uVar14);
          }
LAB_00101d58:
          iVar19 = (int)uVar14;
          uVar18 = cols_ready_to_print();
          if (uVar18 == 0) {
            return;
          }
          if (extremities != false) {
            print_a_header = true;
          }
          pad_vertically = false;
          iVar35 = lines_per_body;
          if (double_space != false) {
            iVar35 = lines_per_body * 2;
          }
          bVar27 = 0;
          if (iVar35 < 1) {
            if ((iVar35 == 0) && (0 < iVar19)) goto LAB_00101fe2;
LAB_00102023:
            if ((keep_FF != false) && (print_a_FF != false)) {
              pcVar15 = _stdout->_IO_write_ptr;
              if (pcVar15 < _stdout->_IO_write_end) {
                _stdout->_IO_write_ptr = pcVar15 + 1;
                *pcVar15 = '\f';
              }
              else {
                __overflow(_stdout,0xc);
              }
              print_a_FF = false;
            }
          }
          else {
            do {
              uVar18 = cols_ready_to_print();
              pad_vertically = (_Bool)bVar27;
              if (uVar18 == 0) goto LAB_0010200a;
              output_position = 0;
              spaces_not_printed = 0;
              separators_not_printed = 0;
              pad_vertically = false;
              align_empty_cols = false;
              empty_line = true;
              if (0 < columns) {
                iVar19 = 1;
                pCVar10 = column_vector;
                do {
                  input_position = 0;
                  if ((pCVar10->lines_to_print < 1) && (pCVar10->status != DT_FIFO)) {
                    if (parallel_files != false) {
                      if (empty_line == false) {
LAB_00102258:
                        align_column(pCVar10);
                      }
                      else {
LAB_00101eb6:
                        align_empty_cols = true;
                      }
                    }
                  }
                  else {
                    padding_not_printed = pCVar10->start_position;
                    FF_only = false;
                    _Var9 = (*pCVar10->print_func)(pCVar10);
                    if (!_Var9) {
                      read_rest_of_line(pCVar10);
                    }
                    cVar28 = pad_vertically;
                    iVar26 = pCVar10->lines_to_print + -1;
                    bVar27 = bVar27 | pad_vertically;
                    pCVar10->lines_to_print = iVar26;
                    if ((iVar26 < 1) && (uVar18 = cols_ready_to_print(), uVar18 == 0)) {
                      if (cVar28 == '\0') goto LAB_00102280;
                      goto LAB_00101f5e;
                    }
                    if ((parallel_files != false) && (aVar2 = pCVar10->status, aVar2 != DT_UNKNOWN))
                    {
                      if (empty_line != false) goto LAB_00101eb6;
                      if ((aVar2 == CLOSED) || ((aVar2 == DT_CHR && (FF_only != false))))
                      goto LAB_00102258;
                    }
                  }
                  if (use_col_separator != false) {
                    separators_not_printed = separators_not_printed + 1;
                  }
                  iVar19 = iVar19 + 1;
                  pCVar10 = pCVar10 + 1;
                } while (iVar19 <= columns);
                if (pad_vertically != false) {
LAB_00101f5e:
                  pcVar15 = _stdout->_IO_write_ptr;
                  if (pcVar15 < _stdout->_IO_write_end) {
                    _stdout->_IO_write_ptr = pcVar15 + 1;
                    *pcVar15 = '\n';
                  }
                  else {
                    __overflow(_stdout,10);
                  }
                  iVar35 = iVar35 + -1;
                }
              }
              uVar18 = cols_ready_to_print();
              if (uVar18 == 0) {
LAB_00102280:
                if (extremities == false) break;
              }
              if ((double_space != false) && (bVar27 != 0)) {
                pcVar15 = _stdout->_IO_write_ptr;
                if (pcVar15 < _stdout->_IO_write_end) {
                  _stdout->_IO_write_ptr = pcVar15 + 1;
                  *pcVar15 = '\n';
                }
                else {
                  __overflow(_stdout,10);
                }
                iVar35 = iVar35 + -1;
              }
            } while (0 < iVar35);
            pad_vertically = (_Bool)bVar27;
            if ((iVar35 == 0) &&
               (pCVar10 = column_vector, iVar19 = columns, bVar27 = pad_vertically, 0 < columns)) {
LAB_00101fe2:
              pad_vertically = (_Bool)bVar27;
              iVar35 = 1;
              do {
                if (pCVar10->status == DT_UNKNOWN) {
                  pCVar10->full_page_printed = true;
                }
                iVar35 = iVar35 + 1;
                pCVar10 = pCVar10 + 1;
              } while (iVar35 <= iVar19);
              iVar35 = 0;
            }
LAB_0010200a:
            if ((pad_vertically == false) || (extremities == false)) goto LAB_00102023;
            iVar35 = iVar35 + 5;
            if (use_form_feed == false) {
              do {
                pcVar15 = _stdout->_IO_write_ptr;
                if (pcVar15 < _stdout->_IO_write_end) {
                  _stdout->_IO_write_ptr = pcVar15 + 1;
                  *pcVar15 = '\n';
                }
                else {
                  __overflow(_stdout,10);
                }
                iVar35 = iVar35 + -1;
              } while (iVar35 != 0);
            }
            else {
              pcVar15 = _stdout->_IO_write_ptr;
              if (pcVar15 < _stdout->_IO_write_end) {
                _stdout->_IO_write_ptr = pcVar15 + 1;
                *pcVar15 = '\f';
              }
              else {
                __overflow(_stdout,0xc);
              }
            }
          }
          page_number = page_number + 1;
          if (last_page_number < page_number) {
            return;
          }
          reset_status();
          uVar14 = (ulong)(uint)columns;
          pCVar10 = column_vector;
        } while (storing_columns == false);
LAB_001020a2:
        buff_current = 0;
        uVar18 = (int)uVar14 - (uint)(balance_columns == false);
        if ((int)uVar18 < 1) {
          uVar33 = 0;
          lVar13 = 0;
          uVar31 = 0;
        }
        else {
          pCVar12 = pCVar10;
          if (((int)(pCVar10 + uVar18) - (int)pCVar10 & 0x40U) == 0) goto LAB_001020f0;
          pCVar10->lines_stored = 0;
          for (pCVar12 = pCVar10 + 1; pCVar12 != pCVar10 + uVar18; pCVar12 = pCVar12 + 2) {
LAB_001020f0:
            pCVar12->lines_stored = 0;
            pCVar12[1].lines_stored = 0;
          }
          uVar33 = 0;
          iVar19 = 1;
          uVar31 = 0;
          do {
            iVar35 = lines_per_body;
            if (files_ready_to_read == 0) break;
            pCVar10->current_line = (int)uVar31;
            iVar26 = iVar35;
            while (iVar26 != 0) {
              if (pCVar10->status == DT_UNKNOWN) {
                input_position = 0;
                _Var9 = read_line(pCVar10);
                if (!_Var9) {
                  read_rest_of_line(pCVar10);
                }
                uVar8 = buff_current;
                piVar7 = line_vector;
                if ((pCVar10->status == DT_UNKNOWN) || (uVar33 != buff_current)) {
                  pCVar10->lines_stored = pCVar10->lines_stored + 1;
                  iVar26 = input_position;
                  piVar7[uVar31] = uVar33;
                  end_vector[uVar31] = iVar26;
                  uVar31 = (ulong)((int)uVar31 + 1);
                  uVar33 = uVar8;
                }
              }
              if (iVar35 == 1) break;
              iVar35 = iVar35 + -1;
              iVar26 = files_ready_to_read;
            }
            iVar19 = iVar19 + 1;
            pCVar10 = pCVar10 + 1;
          } while (iVar19 <= (int)uVar18);
          uVar14 = (ulong)(uint)columns;
          lVar13 = uVar31 << 2;
          pCVar10 = column_vector;
        }
        _Var9 = balance_columns;
        *(uint *)((long)line_vector + lVar13) = uVar33;
        iVar19 = (int)uVar14;
        pCVar12 = pCVar10;
        if (_Var9 == false) {
          if (iVar19 != 1) {
LAB_001021ff:
            pCVar12 = pCVar10 + (iVar19 - 1);
            pCVar21 = pCVar10;
            do {
              pCVar22 = pCVar21 + 1;
              pCVar21->lines_to_print = pCVar21->lines_stored;
              pCVar21 = pCVar22;
            } while (pCVar12 != pCVar22);
            if (_Var9 != false) goto LAB_00102227;
          }
          if (pCVar12->status == DT_UNKNOWN) {
            pCVar12->lines_to_print = lines_per_body;
          }
          else {
            pCVar12->lines_to_print = 0;
          }
        }
        else {
          if (0 < iVar19) {
            iVar29 = 0;
            iVar26 = 1;
            iVar35 = (int)uVar31 / iVar19;
            pCVar21 = pCVar10;
            do {
              pCVar21->current_line = iVar29;
              iVar24 = iVar35;
              if (iVar26 <= (int)uVar31 % iVar19) {
                iVar24 = iVar35 + 1;
              }
              iVar26 = iVar26 + 1;
              pCVar21->lines_stored = iVar24;
              iVar29 = iVar29 + iVar24;
              pCVar21 = pCVar21 + 1;
            } while (iVar26 != iVar19 + 1);
          }
          if (iVar19 != 1) goto LAB_001021ff;
LAB_00102227:
          pCVar12->lines_to_print = pCVar12->lines_stored;
        }
        goto LAB_00101d58;
      }
      iVar19 = (int)((long)lines_per_body * (long)columns);
      if (((((long)iVar19 == (long)lines_per_body * (long)columns) && (!SCARRY4(iVar19,1))) &&
          (!SCARRY4(chars_per_column,1))) &&
         (lVar13 = (long)(chars_per_column + 1) * (long)iVar19, iVar35 = (int)lVar13,
         iVar35 == lVar13)) {
        buff_allocated = (long)iVar35 * ((ulong)use_col_separator + 1);
        free(line_vector);
        line_vector = (int *)xnmalloc((long)(iVar19 + 1),4);
        free(end_vector);
        end_vector = (int *)xnmalloc((long)iVar19,4);
        free(buff);
        buff = (char *)ximalloc(buff_allocated);
        goto LAB_00101b94;
      }
      goto LAB_001027d9;
    }
  }
  uVar16 = dcgettext(0,"page width too narrow",5);
  error(1,0,uVar16);
LAB_001027d9:
                    /* WARNING: Subroutine does not return */
  integer_overflow();
}



/* WARNING: Unknown calling convention */

void parse_column_count(char *s)

{
  undefined8 uVar1;
  
  uVar1 = dcgettext(0,"invalid number of columns",5);
  columns = xnumtoimax(s,10,1,0x7fffffff,&_LC0,uVar1,0,4);
  explicit_columns = true;
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
    goto LAB_001028a9;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... [FILE]...\n",5);
  __printf_chk(2,uVar3,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"Paginate or columnate FILE(s) for printing.\n",5);
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
                             "  +FIRST_PAGE[:LAST_PAGE], --pages=FIRST_PAGE[:LAST_PAGE]\n                    begin [stop] printing with page FIRST_[LAST_]PAGE\n  -COLUMN, --columns=COLUMN\n                    output COLUMN columns and print columns down,\n                    unless -a is used. Balance number of lines in the\n                    columns on each page\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -a, --across      print columns across rather than down, used together\n                    with -COLUMN\n  -c, --show-control-chars\n                    use hat notation (^G) and octal backslash notation\n  -d, --double-space\n                    double space the output\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -D, --date-format=FORMAT\n                    use FORMAT for the header date\n  -e[CHAR[WIDTH]], --expand-tabs[=CHAR[WIDTH]]\n                    expand input CHARs (TABs) to tab WIDTH (8)\n  -F, -f, --form-feed\n                    use form feeds instead of newlines to separate pages\n                    (by a 3-line page header with -F or a 5-line header\n                    and trailer without -F)\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -h, --header=HEADER\n                    use a centered HEADER instead of filename in page header,\n                    -h \"\" prints a blank line, don\'t use -h\"\"\n  -i[CHAR[WIDTH]], --output-tabs[=CHAR[WIDTH]]\n                    replace spaces with CHARs (TABs) to tab WIDTH (8)\n  -J, --join-lines  merge full lines, turns off -W line truncation, no column\n                    alignment, --sep-string[=STRING] sets separators\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -l, --length=PAGE_LENGTH\n                    set the page length to PAGE_LENGTH (66) lines\n                    (default number of lines of text 56, and with -F 63).\n                    implies -t if PAGE_LENGTH <= 10\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -m, --merge       print all files in parallel, one in each column,\n                    truncate lines, but join lines of full length with -J\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -n[SEP[DIGITS]], --number-lines[=SEP[DIGITS]]\n                    number lines, use DIGITS (5) digits, then SEP (TAB),\n                    default counting starts with 1st line of input file\n  -N, --first-line-number=NUMBER\n                    start counting with NUMBER at 1st line of first\n                    page printed (see +FIRST_PAGE)\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -o, --indent=MARGIN\n                    offset each line with MARGIN (zero) spaces, do not\n                    affect -w or -W, MARGIN will be added to PAGE_WIDTH\n  -r, --no-file-warnings\n                    omit warning when a file cannot be opened\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -s[CHAR], --separator[=CHAR]\n                    separate columns by a single character, default for CHAR\n                    is the <TAB> character without -w and \'no char\' with -w.\n                    -s[CHAR] turns off line truncation of all 3 column\n                    options (-COLUMN|-a -COLUMN|-m) except -w is set\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -S[STRING], --sep-string[=STRING]\n                    separate columns by STRING,\n                    without -S: Default separator <TAB> with -J and <space>\n                    otherwise (same as -S\" \"), no effect on column options\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -t, --omit-header  omit page headers and trailers;\n                     implied if PAGE_LENGTH <= 10\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -T, --omit-pagination\n                    omit page headers and trailers, eliminate any pagination\n                    by form feeds set in input files\n  -v, --show-nonprinting\n                    use octal backslash notation\n  -w, --width=PAGE_WIDTH\n                    set page width to PAGE_WIDTH (72) characters for\n                    multiple text-column output only, -s[char] turns off (72)\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -W, --page-width=PAGE_WIDTH\n                    set page width to PAGE_WIDTH (72) characters always,\n                    truncate lines, except -J option is set, no interference\n                    with -S or -s\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
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
    if (((*pcVar4 == 'p') && (pcVar4[1] == 'r')) && (pcVar4[2] == '\0')) break;
    pcVar4 = *(char **)((long)piVar6 + 0x10);
    piVar6 = (infomap *)((long)piVar6 + 0x10);
  } while (pcVar4 != (char *)0x0);
  puVar7 = *(undefined1 **)((long)piVar6 + 8);
  if (puVar7 == (undefined1 *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    puVar7 = &_LC17;
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) goto LAB_00102ca4;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC17);
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
LAB_00102ca4:
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
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC17);
    if (puVar7 == &_LC17) {
      pcVar4 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,puVar7,pcVar4);
LAB_001028a9:
                    /* WARNING: Subroutine does not return */
  exit(status);
}



/* WARNING: Unknown calling convention */

void getoptarg(char *arg,char switch_char,char *character,int *number)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  long tmp_long;
  long local_30;
  
  cVar1 = *arg;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (cVar1 == '\0') {
    uVar3 = quote();
    uVar4 = dcgettext(0,"\'-%c\': Invalid argument: %s",5);
    uVar2 = 0;
  }
  else {
    if (9 < (int)cVar1 - 0x30U) {
      *character = cVar1;
      if (arg[1] == '\0') goto LAB_00102e74;
      arg = arg + 1;
    }
    uVar2 = xstrtol(arg,0,10,&tmp_long,&_LC0);
    if (uVar2 == 0) {
      if (tmp_long < 1) {
        uVar3 = quote(arg);
        uVar4 = dcgettext(0,"\'-%c\' extra characters or invalid number in the argument: %s",5);
        uVar2 = 0;
      }
      else {
        if (tmp_long < 0x80000000) {
          *number = (int)tmp_long;
LAB_00102e74:
          if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return;
        }
        uVar3 = quote(arg);
        uVar4 = dcgettext(0,"\'-%c\' extra characters or invalid number in the argument: %s",5);
        uVar2 = 0x4b;
      }
    }
    else {
      uVar3 = quote(arg);
      uVar4 = dcgettext(0,"\'-%c\' extra characters or invalid number in the argument: %s",5);
      uVar2 = -(uVar2 & 1) & 0x4b;
    }
  }
  error(0,uVar2,uVar4,(int)switch_char,uVar3);
                    /* WARNING: Subroutine does not return */
  usage(1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */
/* WARNING: Enum "anon_enum_32": Some values do not have unique names */

int main(int argc,char **argv)

{
  long lVar1;
  _Bool _Var2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int *piVar9;
  char **ppcVar10;
  char **ppcVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  long in_FS_OFFSET;
  char **local_68;
  uint local_60;
  char local_5b;
  char local_5a;
  char local_59;
  int oi;
  idx_t n_alloc;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  n_alloc = 0;
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  local_68 = (char **)0x0;
  if (1 < argc) {
    local_68 = (char **)xnmalloc((long)(argc + -1),8);
  }
  local_59 = '\0';
  local_5a = '\0';
  local_5b = '\0';
  local_60 = 0;
  lVar12 = 0;
  pcVar5 = (char *)0x0;
LAB_00104728:
  oi = -1;
  iVar4 = getopt_long(argc,argv,"-0123456789D:FJN:S::TW:abcde::fh:i::l:mn::o:rs::tvw:",long_options,
                      &oi);
  if (iVar4 != -1) {
    if (iVar4 - 0x30U < 10) {
      lVar1 = lVar12 + 1;
      if (n_alloc <= lVar1) {
        pcVar5 = (char *)xpalloc(pcVar5,&n_alloc,2,0xffffffffffffffff,1);
      }
      pcVar5[lVar12] = (char)iVar4;
      pcVar5[lVar1] = '\0';
      lVar12 = lVar1;
      goto LAB_00104728;
    }
    if (0x81 < iVar4) {
switchD_001047b1_caseD_2:
                    /* WARNING: Subroutine does not return */
      usage(1);
    }
    if (iVar4 < 1) {
      if (iVar4 == -0x83) {
        uVar7 = proper_name_lite("Roland Huebner","Roland Huebner");
        uVar8 = proper_name_lite("Pete TerMaat","Pete TerMaat");
        version_etc(_stdout,&_LC17,"GNU coreutils",_Version,uVar8,uVar7,0,uVar8);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar4 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      goto switchD_001047b1_caseD_2;
    }
    switch(iVar4) {
    case 1:
      if (((first_page_number != 0) || (*_optarg != '+')) ||
         (_Var2 = first_last_page(-2,'+',_optarg + 1), !_Var2)) {
        lVar12 = 0;
        local_68[local_60] = _optarg;
        local_60 = local_60 + 1;
        goto LAB_00104728;
      }
      break;
    default:
      goto switchD_001047b1_caseD_2;
    case 0x44:
switchD_001047b1_caseD_44:
      date_format = _optarg;
      lVar12 = 0;
      goto LAB_00104728;
    case 0x46:
    case 0x66:
      use_form_feed = true;
      break;
    case 0x4a:
      join_lines = true;
      lVar12 = 0;
      goto LAB_00104728;
    case 0x4e:
      lVar12 = 0;
      skip_count = false;
      pcVar6 = (char *)dcgettext(0,"\'-N NUMBER\' invalid starting line number",5);
      start_line_num = getoptnum(_optarg,-0x80000000,pcVar6);
      goto LAB_00104728;
    case 0x53:
      use_col_separator = true;
      col_sep_string = "";
      col_sep_length = 0;
      local_59 = '\0';
      if (_optarg != (char *)0x0) {
        separator_string(_optarg);
        lVar12 = 0;
        goto LAB_00104728;
      }
      break;
    case 0x54:
      extremities = false;
      lVar12 = 0;
      keep_FF = false;
      goto LAB_00104728;
    case 0x57:
      lVar12 = 0;
      truncate_lines = true;
      pcVar6 = (char *)dcgettext(0,"\'-W PAGE_WIDTH\' invalid number of characters",5);
      chars_per_line = getoptnum(_optarg,1,pcVar6);
      local_5a = '\0';
      goto LAB_00104728;
    case 0x61:
      print_across_flag = true;
      lVar12 = 0;
      storing_columns = false;
      goto LAB_00104728;
    case 0x62:
      balance_columns = true;
      lVar12 = 0;
      goto LAB_00104728;
    case 99:
      use_cntrl_prefix = true;
      lVar12 = 0;
      goto LAB_00104728;
    case 100:
      double_space = true;
      lVar12 = 0;
      goto LAB_00104728;
    case 0x65:
      if (_optarg != (char *)0x0) {
        getoptarg(_optarg,'e',&input_tab_char,&chars_per_input_tab);
      }
      untabify_input = true;
      lVar12 = 0;
      goto LAB_00104728;
    case 0x68:
      custom_header = _optarg;
      lVar12 = 0;
      goto LAB_00104728;
    case 0x69:
      if (_optarg != (char *)0x0) {
        getoptarg(_optarg,'i',&output_tab_char,&chars_per_output_tab);
      }
      tabify_output = true;
      lVar12 = 0;
      goto LAB_00104728;
    case 0x6c:
      lVar12 = 0;
      pcVar6 = (char *)dcgettext(0,"\'-l PAGE_LENGTH\' invalid number of lines",5);
      lines_per_page = getoptnum(_optarg,1,pcVar6);
      goto LAB_00104728;
    case 0x6d:
      parallel_files = true;
      lVar12 = 0;
      storing_columns = false;
      goto LAB_00104728;
    case 0x6e:
      numbered_lines = true;
      if (_optarg != (char *)0x0) {
        lVar12 = 0;
        getoptarg(_optarg,'n',&number_separator,&chars_per_number);
        goto LAB_00104728;
      }
      break;
    case 0x6f:
      lVar12 = 0;
      pcVar6 = (char *)dcgettext(0,"\'-o MARGIN\' invalid line offset",5);
      chars_per_margin = getoptnum(_optarg,0,pcVar6);
      goto LAB_00104728;
    case 0x72:
      ignore_failed_opens = true;
      lVar12 = 0;
      goto LAB_00104728;
    case 0x73:
      local_5b = use_col_separator;
      local_59 = use_col_separator;
      if (use_col_separator == false) {
        if (_optarg != (char *)0x0) {
          separator_string(_optarg);
        }
        local_59 = '\x01';
        lVar12 = 0;
        local_5b = '\x01';
        goto LAB_00104728;
      }
      break;
    case 0x74:
      extremities = false;
      lVar12 = 0;
      keep_FF = true;
      goto LAB_00104728;
    case 0x76:
      use_esc_sequence = true;
      lVar12 = 0;
      goto LAB_00104728;
    case 0x77:
      pcVar6 = (char *)dcgettext(0,"\'-w PAGE_WIDTH\' invalid number of characters",5);
      iVar4 = getoptnum(_optarg,1,pcVar6);
      local_5b = truncate_lines;
      local_5a = local_5b;
      if (truncate_lines == false) {
        lVar12 = 0;
        local_5a = '\x01';
        local_5b = '\x01';
        chars_per_line = iVar4;
        goto LAB_00104728;
      }
      break;
    case 0x80:
      goto switchD_001047b1_caseD_80;
    case 0x81:
      if (_optarg == (char *)0x0) {
        pcVar5 = "\'--pages=FIRST_PAGE[:LAST_PAGE]\' missing argument";
        goto LAB_00104f1f;
      }
      _Var2 = first_last_page(oi,'\0',_optarg);
      if (!_Var2) {
        uVar7 = quote(_optarg);
        uVar8 = dcgettext(0,"invalid page range %s",5);
        error(1,0,uVar8,uVar7);
        goto switchD_001047b1_caseD_44;
      }
    }
    lVar12 = 0;
    goto LAB_00104728;
  }
  if (pcVar5 != (char *)0x0) {
    parse_column_count(pcVar5);
    free(pcVar5);
  }
  if (date_format == (char *)0x0) {
    pcVar5 = getenv("POSIXLY_CORRECT");
    if ((pcVar5 == (char *)0x0) || (cVar3 = hard_locale(2), cVar3 != '\0')) {
      date_format = "%Y-%m-%d %H:%M";
    }
    else {
      date_format = "%b %e %H:%M %Y";
    }
  }
  getenv("TZ");
  localtz = (timezone_t)tzalloc();
  _Var2 = parallel_files;
  if (first_page_number == 0) {
    first_page_number = 1;
  }
  if (parallel_files != false) {
    if (explicit_columns == false) {
      pcVar5 = "cannot specify both printing across and printing in parallel";
      if (print_across_flag == false) goto LAB_00104875;
    }
    else {
      pcVar5 = "cannot specify number of columns when printing in parallel";
    }
LAB_00104f1f:
    uVar7 = dcgettext(0,pcVar5,5);
    error(1,0,uVar7);
    goto LAB_00104f37;
  }
LAB_00104875:
  if (local_5b != '\0') {
    if (local_5a == '\0') {
      if ((((use_col_separator != true) && (local_59 != '\0')) &&
          ((parallel_files != false || (explicit_columns != false)))) &&
         ((truncate_lines != false || (join_lines = true, 0 < col_sep_length)))) {
LAB_001048a6:
        use_col_separator = true;
      }
    }
    else if ((parallel_files == false) && (explicit_columns == false)) {
      join_lines = true;
    }
    else {
      truncate_lines = true;
      if (local_59 != '\0') goto LAB_001048a6;
    }
  }
  if (_optind < argc) {
    ppcVar10 = argv + _optind;
    uVar13 = (argc - _optind) + local_60;
    do {
      pcVar5 = *ppcVar10;
      uVar14 = (ulong)local_60;
      local_60 = local_60 + 1;
      ppcVar10 = ppcVar10 + 1;
      local_68[uVar14] = pcVar5;
      _optind = argc;
    } while (local_60 != uVar13);
  }
  if (local_60 == 0) {
    print_files(0,(char **)0x0);
  }
  else {
    if (_Var2 != false) goto LAB_00104eb3;
    ppcVar10 = local_68;
    do {
      ppcVar11 = ppcVar10 + 1;
      print_files(1,ppcVar10);
      ppcVar10 = ppcVar11;
    } while (local_68 + local_60 != ppcVar11);
  }
  while( true ) {
    free(number_buff);
    free(clump_buff);
    free(column_vector);
    free(line_vector);
    free(end_vector);
    free(buff);
    if ((have_read_stdin == false) || (iVar4 = rpl_fclose(_stdin), iVar4 != -1)) break;
    uVar7 = dcgettext(0,"standard input",5);
    piVar9 = __errno_location();
    error(1,*piVar9,uVar7);
LAB_00104eb3:
    print_files(local_60,local_68);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (uint)failed_opens;
  }
LAB_00104f37:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
switchD_001047b1_caseD_80:
  lVar12 = 0;
  parse_column_count(_optarg);
  free(pcVar5);
  n_alloc = 0;
  pcVar5 = (char *)0x0;
  goto LAB_00104728;
}


