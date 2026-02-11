
void store_char(undefined1 param_1)

{
  if ((long)(ulong)buff_current < buff_allocated) {
    *(undefined1 *)(buff + (ulong)buff_current) = param_1;
    buff_current = buff_current + 1;
    return;
  }
  buff = xpalloc(buff,&buff_allocated,1,0xffffffffffffffff,1);
  *(undefined1 *)(buff + (ulong)buff_current) = param_1;
  buff_current = buff_current + 1;
  return;
}



undefined1  [16] first_last_page(undefined4 param_1,char param_2,char *param_3)

{
  char *pcVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  char cVar6;
  long in_FS_OFFSET;
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined8 uVar9;
  char *local_48;
  ulong local_40;
  ulong local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0xffffffffffffffff;
  uVar3 = xstrtoumax(param_3,&local_48,10,&local_40,&_LC0);
  if ((uVar3 & 0xfffffffd) != 0) {
LAB_00100163:
    uVar4 = (ulong)uVar3;
    xstrtol_fatal(uVar4,param_1,(int)param_2,long_options,param_3);
    uVar5 = dcgettext(0,"invalid number of columns",5);
    uVar9 = 4;
    uVar8 = 0;
    columns = xnumtoimax(uVar4,10,1,0x7fffffff,&_LC0,uVar5,0,4,param_3);
    explicit_columns = 1;
    auVar2._8_8_ = uVar9;
    auVar2._0_8_ = uVar8;
    return auVar2;
  }
  if ((local_48 != param_3) && (local_40 != 0)) {
    cVar6 = *local_48;
    if (cVar6 == ':') {
      pcVar1 = local_48 + 1;
      uVar3 = xstrtoumax(pcVar1,&local_48,10,&local_38,&_LC0);
      if (uVar3 != 0) goto LAB_00100163;
      if ((local_48 == pcVar1) || (local_38 < local_40)) goto LAB_00100100;
      cVar6 = *local_48;
    }
    if (cVar6 == '\0') {
      last_page_number = local_38;
      uVar4 = 1;
      first_page_number = local_40;
      goto LAB_00100102;
    }
  }
LAB_00100100:
  uVar4 = 0;
LAB_00100102:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar4;
    return auVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined1  [16] parse_column_count(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = dcgettext(0,"invalid number of columns",5);
  columns = xnumtoimax(param_1,10,1,0x7fffffff,&_LC0,uVar1);
  explicit_columns = 1;
  return ZEXT816(4) << 0x40;
}



ulong add_line_number(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar7;
  char *pcVar6;
  
  iVar1 = __sprintf_chk(number_buff,2,0xffffffffffffffff,&_LC2,chars_per_number,line_number);
  uVar3 = (ulong)chars_per_number;
  line_number = line_number + 1;
  pcVar4 = (char *)((int)(iVar1 - chars_per_number) + number_buff);
  pcVar6 = pcVar4;
  if (0 < (int)chars_per_number) {
    do {
      pcVar5 = pcVar6 + 1;
      (**(code **)(param_1 + 0x20))((int)*pcVar6);
      pcVar6 = pcVar5;
    } while (pcVar5 != pcVar4 + uVar3);
  }
  if (columns < 2) {
    uVar3 = (**(code **)(param_1 + 0x20))();
    if (number_separator == '\t') {
      uVar3 = (long)output_position / (long)chars_per_output_tab & 0xffffffff;
      output_position =
           (chars_per_output_tab - output_position % chars_per_output_tab) + output_position;
    }
  }
  else if (number_separator == '\t') {
    uVar2 = number_width - chars_per_number;
    uVar3 = (ulong)uVar2;
    if (0 < (int)uVar2) {
      do {
        uVar3 = (**(code **)(param_1 + 0x20))(0x20);
        bVar7 = uVar2 == 1;
        uVar2 = uVar2 - 2;
        if (bVar7) break;
        uVar3 = (**(code **)(param_1 + 0x20))(0x20);
      } while (uVar2 != 0);
    }
  }
  else {
    uVar3 = (**(code **)(param_1 + 0x20))();
  }
  if ((truncate_lines != '\0') && (parallel_files == '\0')) {
    uVar3 = (ulong)number_width;
    input_position = input_position + number_width;
  }
  return uVar3;
}



void init_header(char *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  long local_138;
  ulong uStack_130;
  undefined1 local_128 [64];
  stat local_e8;
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*param_1 == '-') && (param_1[1] == '\0')) {
    param_2 = -1;
  }
  else if ((-1 < param_2) && (iVar3 = fstat(param_2,&local_e8), iVar3 == 0)) {
    local_138 = local_e8.st_mtim.tv_sec;
    uVar7 = local_e8.st_mtim.tv_nsec;
    goto LAB_00100352;
  }
  if (timespec_0 == 0) {
    gettime(&timespec_0);
  }
  local_138 = timespec_0;
  uVar7 = uRam0000000000103b08;
LAB_00100352:
  uStack_130 = uVar7;
  lVar4 = localtime_rz(localtz,&local_138,local_128);
  if (lVar4 == 0) {
    uVar5 = xmalloc(0x21);
    uVar6 = imaxtostr(local_138,local_58);
    __sprintf_chk(uVar5,2,0x21,"%s.%09d",uVar6,uVar7 & 0xffffffff);
  }
  else {
    lVar4 = nstrftime(0,0xffffffffffffffff,date_format,local_128,localtz,uVar7 & 0xffffffff);
    uVar5 = xmalloc(lVar4 + 1);
    nstrftime(uVar5,lVar4 + 1,date_format,local_128,localtz,uVar7 & 0xffffffff);
  }
  free(date_text);
  iVar3 = chars_per_line;
  file_text = custom_header;
  if ((custom_header == (char *)0x0) && (file_text = "", -1 < param_2)) {
    file_text = param_1;
  }
  date_text = (void *)uVar5;
  iVar1 = gnu_mbswidth(uVar5,0);
  iVar2 = gnu_mbswidth(file_text,0);
  header_width_available = (iVar3 - iVar1) - iVar2;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void print_white_space(void)

{
  int iVar1;
  byte *pbVar2;
  char *pcVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar1 = spaces_not_printed + output_position;
  iVar7 = output_position;
  if ((1 < spaces_not_printed) &&
     (iVar5 = chars_per_output_tab - output_position % chars_per_output_tab,
     iVar6 = output_position + iVar5, iVar5 <= spaces_not_printed)) {
    do {
      iVar7 = iVar6;
      bVar4 = output_tab_char;
      pbVar2 = (byte *)_stdout->_IO_write_ptr;
      if (pbVar2 < _stdout->_IO_write_end) {
        _stdout->_IO_write_ptr = (char *)(pbVar2 + 1);
        *pbVar2 = bVar4;
      }
      else {
        __overflow(_stdout,(uint)output_tab_char);
      }
    } while ((1 < iVar1 - iVar7) &&
            (iVar6 = (chars_per_output_tab - iVar7 % chars_per_output_tab) + iVar7, iVar6 <= iVar1))
    ;
  }
  while (iVar7 = iVar7 + 1, iVar7 <= iVar1) {
    pcVar3 = _stdout->_IO_write_ptr;
    if (pcVar3 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = pcVar3 + 1;
      *pcVar3 = ' ';
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
    pbVar4 = col_sep_string + col_sep_length;
    pbVar2 = col_sep_string;
    if (0 < (int)col_sep_length) {
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



uint char_to_clump(byte param_1)

{
  byte *pbVar1;
  uint uVar2;
  ushort **ppuVar3;
  int iVar4;
  uint uVar5;
  long in_FS_OFFSET;
  byte local_34;
  byte local_33;
  byte local_32;
  long local_30;
  
  iVar4 = input_position;
  pbVar1 = clump_buff;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (input_tab_char == param_1) {
    uVar2 = chars_per_input_tab - input_position % chars_per_input_tab;
    if (untabify_input != '\0') {
      if (uVar2 == 0) {
        uVar5 = 0;
        goto LAB_001007b8;
      }
      goto LAB_00100791;
    }
    *clump_buff = param_1;
    uVar5 = 1;
joined_r0x0010083d:
    if (-1 < (int)uVar2) {
      input_position = uVar2 + iVar4;
      goto LAB_001007b8;
    }
  }
  else {
    if (param_1 == 9) {
      uVar2 = (uint)(input_position >> 0x1f) >> 0x1d;
      uVar2 = (uVar2 - (input_position + uVar2 & 7)) + 8;
      if (untabify_input == '\0') {
        *clump_buff = 9;
        uVar5 = 1;
        input_position = uVar2 + input_position;
        goto LAB_001007b8;
      }
LAB_00100791:
      memset(clump_buff,0x20,(ulong)uVar2);
      uVar5 = uVar2;
      goto joined_r0x0010083d;
    }
    ppuVar3 = __ctype_b_loc();
    iVar4 = input_position;
    if ((*(byte *)((long)*ppuVar3 + (ulong)param_1 * 2 + 1) & 0x40) != 0) {
      *pbVar1 = param_1;
      uVar5 = 1;
      input_position = input_position + 1;
      goto LAB_001007b8;
    }
    if (use_esc_sequence != '\0') {
LAB_00100880:
      *pbVar1 = 0x5c;
      uVar5 = 4;
      __sprintf_chk(&local_34,2,4,&_LC4,param_1);
      pbVar1[1] = local_34;
      pbVar1[2] = local_33;
      pbVar1[3] = local_32;
      input_position = input_position + 4;
      goto LAB_001007b8;
    }
    if (use_cntrl_prefix != '\0') {
      if (-1 < (char)param_1) {
        *pbVar1 = 0x5e;
        uVar5 = 2;
        pbVar1[1] = param_1 ^ 0x40;
        input_position = input_position + 2;
        goto LAB_001007b8;
      }
      goto LAB_00100880;
    }
    if (param_1 != 8) {
      *pbVar1 = param_1;
      uVar5 = 1;
      goto LAB_001007b8;
    }
    *pbVar1 = 8;
    uVar5 = 1;
    uVar2 = 0xffffffff;
  }
  if (iVar4 == 0) {
    uVar5 = 0;
  }
  else if ((int)-uVar2 < iVar4) {
    input_position = uVar2 + iVar4;
  }
  else {
    input_position = 0;
  }
LAB_001007b8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void print_char(byte param_1)

{
  byte *pbVar1;
  ushort **ppuVar2;
  
  if (tabify_output != '\0') {
    if (param_1 == 0x20) {
      spaces_not_printed = spaces_not_printed + 1;
      return;
    }
    if (0 < spaces_not_printed) {
      print_white_space();
    }
    ppuVar2 = __ctype_b_loc();
    if ((*(byte *)((long)*ppuVar2 + (ulong)param_1 * 2 + 1) & 0x40) == 0) {
      if (param_1 == 8) {
        output_position = output_position + -1;
      }
    }
    else {
      output_position = output_position + 1;
    }
  }
  pbVar1 = (byte *)_stdout->_IO_write_ptr;
  if (pbVar1 < _stdout->_IO_write_end) {
    _stdout->_IO_write_ptr = (char *)(pbVar1 + 1);
    *pbVar1 = param_1;
    return;
  }
  __overflow(_stdout,(uint)param_1);
  return;
}



void integer_overflow(void)

{
  undefined8 uVar1;
  
  uVar1 = dcgettext(0,"integer overflow",5);
                    /* WARNING: Subroutine does not return */
  error(1,0,uVar1);
}



void separator_string(char *param_1)

{
  int iVar1;
  size_t sVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  long lVar8;
  
  pcVar7 = param_1;
  sVar2 = strlen(param_1);
  iVar4 = (int)pcVar7;
  if (sVar2 < 0x80000000) {
    col_sep_string = param_1;
    col_sep_length = (int)sVar2;
    return;
  }
  integer_overflow();
  iVar5 = (int)((long)lines_per_body * (long)columns);
  if (((((long)iVar5 == (long)lines_per_body * (long)columns) && (!SCARRY4(iVar5,1))) &&
      (!SCARRY4(chars_per_column,1))) &&
     (lVar8 = (long)(chars_per_column + 1) * (long)iVar5, iVar1 = (int)lVar8, iVar1 == lVar8)) {
    buff_allocated = (long)iVar1 * ((ulong)use_col_separator + 1);
    free(line_vector);
    line_vector = (void *)xnmalloc((long)(iVar5 + 1),4);
    free(end_vector);
    end_vector = (void *)xnmalloc((long)iVar5,4);
    free(buff);
    buff = (void *)ximalloc(buff_allocated);
    return;
  }
  integer_overflow();
  lines_per_body = lines_per_page + -10;
  if (lines_per_body < 1) {
    extremities = '\0';
    keep_FF = 1;
    lines_per_body = lines_per_page;
LAB_00100b1a:
    iVar5 = lines_per_body;
    if ((double_space != '\0') && (iVar5 = 1, 1 < lines_per_body)) {
LAB_00100caa:
      iVar5 = lines_per_body >> 1;
    }
  }
  else {
    if (extremities != '\0') goto LAB_00100b1a;
    lines_per_body = lines_per_page;
    iVar5 = lines_per_body;
    if (double_space != '\0') goto LAB_00100caa;
  }
  lines_per_body = iVar5;
  if (iVar4 == 0) {
    parallel_files = '\0';
  }
  else if (parallel_files != '\0') {
    columns = iVar4;
  }
  if (storing_columns != '\0') {
    balance_columns = 1;
  }
  iVar4 = col_sep_length;
  if (columns < 2) {
    storing_columns = '\0';
LAB_00100bb7:
    if (join_lines != '\0') {
LAB_00100bbb:
      truncate_lines = 0;
    }
  }
  else {
    if (use_col_separator == 0) {
      col_sep_string = " ";
      col_sep_length = 1;
      if (join_lines != '\0') {
        col_sep_string = "\t";
      }
      use_col_separator = 1;
      if (*col_sep_string != '\t') {
LAB_00100ba4:
        untabify_input = 1;
      }
      truncate_lines = 1;
      tabify_output = 1;
      iVar4 = 1;
      goto LAB_00100bb7;
    }
    if (join_lines != '\0') {
      if (col_sep_length == 1) {
        if (*col_sep_string != '\t') goto LAB_00100ba4;
        tabify_output = 1;
      }
      else {
        untabify_input = 1;
        tabify_output = 1;
      }
      goto LAB_00100bbb;
    }
    if ((col_sep_length == 1) && (*col_sep_string == '\t')) {
      col_sep_string = &_LC7;
    }
    truncate_lines = 1;
    untabify_input = 1;
    tabify_output = 1;
  }
  if (numbered_lines != '\0') {
    line_count = start_line_num;
    iVar5 = chars_per_number + 1;
    if (number_separator == '\t') {
      uVar6 = (uint)((int)chars_per_number >> 0x1f) >> 0x1d;
      iVar5 = chars_per_number + 8 + (uVar6 - (chars_per_number + uVar6 & 7));
    }
    number_width = iVar5;
    if (parallel_files != '\0') goto LAB_00100c16;
  }
  iVar5 = 0;
LAB_00100c16:
  lVar8 = (long)(columns + -1) * (long)iVar4;
  iVar4 = (int)lVar8;
  if (iVar4 != lVar8) {
    iVar4 = 0x7fffffff;
  }
  if (SBORROW4(chars_per_line - iVar5,iVar4)) {
    chars_per_column = 0;
  }
  else {
    chars_per_column = ((chars_per_line - iVar5) - iVar4) / columns;
    if (0 < chars_per_column) {
      if (numbered_lines != '\0') {
        free(number_buff);
        lVar8 = (long)(int)chars_per_number + 1;
        if (chars_per_number < 0xc) {
          lVar8 = 0xc;
        }
        number_buff = (void *)xmalloc(lVar8);
      }
      free(clump_buff);
      lVar8 = (long)chars_per_input_tab;
      if (chars_per_input_tab < 8) {
        lVar8 = 8;
      }
      clump_buff = (void *)xmalloc(lVar8);
      return;
    }
  }
  uVar3 = dcgettext(0,"page width too narrow",5);
                    /* WARNING: Subroutine does not return */
  error(1,0,uVar3);
}



void init_store_cols(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  
  iVar3 = (int)((long)lines_per_body * (long)columns);
  if (((((long)iVar3 == (long)lines_per_body * (long)columns) && (!SCARRY4(iVar3,1))) &&
      (!SCARRY4(chars_per_column,1))) &&
     (lVar5 = (long)(chars_per_column + 1) * (long)iVar3, iVar1 = (int)lVar5, iVar1 == lVar5)) {
    buff_allocated = (long)iVar1 * ((ulong)use_col_separator + 1);
    free(line_vector);
    line_vector = (void *)xnmalloc((long)(iVar3 + 1),4);
    free(end_vector);
    end_vector = (void *)xnmalloc((long)iVar3,4);
    free(buff);
    buff = (void *)ximalloc(buff_allocated);
    return;
  }
  integer_overflow();
  lines_per_body = lines_per_page + -10;
  if (lines_per_body < 1) {
    extremities = '\0';
    keep_FF = 1;
    lines_per_body = lines_per_page;
LAB_00100b1a:
    iVar3 = lines_per_body;
    if ((double_space != '\0') && (iVar3 = 1, 1 < lines_per_body)) {
LAB_00100caa:
      iVar3 = lines_per_body >> 1;
    }
  }
  else {
    if (extremities != '\0') goto LAB_00100b1a;
    lines_per_body = lines_per_page;
    iVar3 = lines_per_body;
    if (double_space != '\0') goto LAB_00100caa;
  }
  lines_per_body = iVar3;
  if (param_1 == 0) {
    parallel_files = '\0';
  }
  else if (parallel_files != '\0') {
    columns = param_1;
  }
  if (storing_columns != '\0') {
    balance_columns = 1;
  }
  iVar3 = col_sep_length;
  if (columns < 2) {
    storing_columns = '\0';
LAB_00100bb7:
    if (join_lines != '\0') {
LAB_00100bbb:
      truncate_lines = 0;
    }
  }
  else {
    if (use_col_separator == 0) {
      col_sep_string = " ";
      col_sep_length = 1;
      if (join_lines != '\0') {
        col_sep_string = "\t";
      }
      use_col_separator = 1;
      if (*col_sep_string != '\t') {
LAB_00100ba4:
        untabify_input = 1;
      }
      truncate_lines = 1;
      tabify_output = 1;
      iVar3 = 1;
      goto LAB_00100bb7;
    }
    if (join_lines != '\0') {
      if (col_sep_length == 1) {
        if (*col_sep_string != '\t') goto LAB_00100ba4;
        tabify_output = 1;
      }
      else {
        untabify_input = 1;
        tabify_output = 1;
      }
      goto LAB_00100bbb;
    }
    if ((col_sep_length == 1) && (*col_sep_string == '\t')) {
      col_sep_string = &_LC7;
    }
    truncate_lines = 1;
    untabify_input = 1;
    tabify_output = 1;
  }
  if (numbered_lines != '\0') {
    line_count = start_line_num;
    iVar1 = chars_per_number + 1;
    if (number_separator == '\t') {
      uVar4 = (uint)((int)chars_per_number >> 0x1f) >> 0x1d;
      iVar1 = chars_per_number + 8 + (uVar4 - (chars_per_number + uVar4 & 7));
    }
    number_width = iVar1;
    if (parallel_files != '\0') goto LAB_00100c16;
  }
  iVar1 = 0;
LAB_00100c16:
  lVar5 = (long)(columns + -1) * (long)iVar3;
  iVar3 = (int)lVar5;
  if (iVar3 != lVar5) {
    iVar3 = 0x7fffffff;
  }
  if (SBORROW4(chars_per_line - iVar1,iVar3)) {
    chars_per_column = 0;
  }
  else {
    chars_per_column = ((chars_per_line - iVar1) - iVar3) / columns;
    if (0 < chars_per_column) {
      if (numbered_lines != '\0') {
        free(number_buff);
        lVar5 = (long)(int)chars_per_number + 1;
        if (chars_per_number < 0xc) {
          lVar5 = 0xc;
        }
        number_buff = (void *)xmalloc(lVar5);
      }
      free(clump_buff);
      lVar5 = (long)chars_per_input_tab;
      if (chars_per_input_tab < 8) {
        lVar5 = 8;
      }
      clump_buff = (void *)xmalloc(lVar5);
      return;
    }
  }
  uVar2 = dcgettext(0,"page width too narrow",5);
                    /* WARNING: Subroutine does not return */
  error(1,0,uVar2);
}



void init_parameters(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  
  lines_per_body = lines_per_page + -10;
  if (lines_per_body < 1) {
    extremities = '\0';
    keep_FF = 1;
    lines_per_body = lines_per_page;
LAB_00100b1a:
    iVar2 = lines_per_body;
    if ((double_space != '\0') && (iVar2 = 1, 1 < lines_per_body)) {
LAB_00100caa:
      iVar2 = lines_per_body >> 1;
    }
  }
  else {
    if (extremities != '\0') goto LAB_00100b1a;
    lines_per_body = lines_per_page;
    iVar2 = lines_per_body;
    if (double_space != '\0') goto LAB_00100caa;
  }
  lines_per_body = iVar2;
  if (param_1 == 0) {
    parallel_files = '\0';
  }
  else if (parallel_files != '\0') {
    columns = param_1;
  }
  if (storing_columns != '\0') {
    balance_columns = 1;
  }
  iVar2 = col_sep_length;
  if (columns < 2) {
    storing_columns = '\0';
LAB_00100bb7:
    if (join_lines != '\0') {
LAB_00100bbb:
      truncate_lines = 0;
    }
  }
  else {
    if (use_col_separator == '\0') {
      col_sep_string = " ";
      col_sep_length = 1;
      if (join_lines != '\0') {
        col_sep_string = "\t";
      }
      use_col_separator = '\x01';
      if (*col_sep_string != '\t') {
LAB_00100ba4:
        untabify_input = 1;
      }
      truncate_lines = 1;
      tabify_output = 1;
      iVar2 = 1;
      goto LAB_00100bb7;
    }
    if (join_lines != '\0') {
      if (col_sep_length == 1) {
        if (*col_sep_string != '\t') goto LAB_00100ba4;
        tabify_output = 1;
      }
      else {
        untabify_input = 1;
        tabify_output = 1;
      }
      goto LAB_00100bbb;
    }
    if ((col_sep_length == 1) && (*col_sep_string == '\t')) {
      col_sep_string = &_LC7;
    }
    truncate_lines = 1;
    untabify_input = 1;
    tabify_output = 1;
  }
  if (numbered_lines != '\0') {
    line_count = start_line_num;
    iVar4 = chars_per_number + 1;
    if (number_separator == '\t') {
      uVar3 = (uint)((int)chars_per_number >> 0x1f) >> 0x1d;
      iVar4 = chars_per_number + 8 + (uVar3 - (chars_per_number + uVar3 & 7));
    }
    number_width = iVar4;
    if (parallel_files != '\0') goto LAB_00100c16;
  }
  iVar4 = 0;
LAB_00100c16:
  lVar5 = (long)(columns + -1) * (long)iVar2;
  iVar2 = (int)lVar5;
  if (iVar2 != lVar5) {
    iVar2 = 0x7fffffff;
  }
  if (SBORROW4(chars_per_line - iVar4,iVar2)) {
    chars_per_column = 0;
  }
  else {
    chars_per_column = ((chars_per_line - iVar4) - iVar2) / columns;
    if (0 < chars_per_column) {
      if (numbered_lines != '\0') {
        free(number_buff);
        lVar5 = (long)(int)chars_per_number + 1;
        if (chars_per_number < 0xc) {
          lVar5 = 0xc;
        }
        number_buff = (void *)xmalloc(lVar5);
      }
      free(clump_buff);
      lVar5 = (long)chars_per_input_tab;
      if (chars_per_input_tab < 8) {
        lVar5 = 8;
      }
      clump_buff = (void *)xmalloc(lVar5);
      return;
    }
  }
  uVar1 = dcgettext(0,"page width too narrow",5);
                    /* WARNING: Subroutine does not return */
  error(1,0,uVar1);
}



void close_file(undefined8 *param_1)

{
  int iVar1;
  uint *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  
  if (*(int *)(param_1 + 2) == 3) {
    return;
  }
  puVar2 = (uint *)__errno_location();
  uVar6 = ((FILE *)*param_1)->_flags & 0x20;
  if (uVar6 != 0) {
    uVar6 = *puVar2;
  }
  iVar1 = fileno((FILE *)*param_1);
  if (iVar1 == 0) {
    clearerr_unlocked((FILE *)*param_1);
  }
  else {
    iVar1 = rpl_fclose();
    if (iVar1 != 0) {
      if (uVar6 != 0) goto LAB_00100f21;
      uVar6 = *puVar2;
    }
  }
  if (uVar6 == 0) {
    if (parallel_files == '\0') {
      lVar5 = (ulong)columns * 0x40 + column_vector;
      lVar3 = column_vector;
      if (columns != 0) {
        do {
          *(undefined4 *)(lVar3 + 0x10) = 3;
          if (*(int *)(lVar3 + 0x2c) == 0) {
            *(undefined4 *)(lVar3 + 0x30) = 0;
          }
          lVar3 = lVar3 + 0x40;
        } while (lVar5 != lVar3);
      }
      files_ready_to_read = files_ready_to_read + -1;
      return;
    }
    *(undefined4 *)(param_1 + 2) = 3;
    *(undefined4 *)(param_1 + 6) = 0;
    files_ready_to_read = files_ready_to_read + -1;
    return;
  }
LAB_00100f21:
  uVar4 = quotearg_n_style_colon(0,3,param_1[1]);
                    /* WARNING: Subroutine does not return */
  error(1,uVar6,&_LC9,uVar4);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 open_file(char *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  int *piVar4;
  
  if ((*param_1 == '-') && (param_1[1] == '\0')) {
    lVar1 = dcgettext(0,"standard input",5);
    lVar3 = _stdin;
    have_read_stdin = 1;
    *param_2 = _stdin;
    param_2[1] = lVar1;
  }
  else {
    param_2[1] = (long)param_1;
    lVar3 = fopen_safer(param_1,&_LC11);
    *param_2 = lVar3;
  }
  if (lVar3 == 0) {
    failed_opens = 1;
    if (ignore_failed_opens == '\0') {
      uVar2 = quotearg_n_style_colon(0,3,param_1);
      piVar4 = __errno_location();
                    /* WARNING: Subroutine does not return */
      error(0,*piVar4,&_LC9,uVar2);
    }
    uVar2 = 0;
  }
  else {
    fadvise(lVar3,2);
    *(undefined1 *)((long)param_2 + 0x39) = 0;
    uVar2 = 1;
    total_files = total_files + 1;
    *(undefined4 *)(param_2 + 2) = 0;
  }
  return uVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void print_header(void)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  long in_FS_OFFSET;
  undefined1 auStack_138 [280];
  long local_20;
  
  iVar3 = chars_per_margin;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  output_position = 0;
  if (tabify_output == '\0') {
    iVar6 = 1;
    if (0 < chars_per_margin) {
      do {
        pcVar1 = _stdout->_IO_write_ptr;
        if (pcVar1 < _stdout->_IO_write_end) {
          _stdout->_IO_write_ptr = pcVar1 + 1;
          *pcVar1 = ' ';
        }
        else {
          __overflow(_stdout,0x20);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 <= iVar3);
    }
    output_position = iVar3;
    iVar3 = spaces_not_printed;
  }
  spaces_not_printed = iVar3;
  print_white_space();
  lVar2 = page_number;
  if (page_number == 0) {
    uVar5 = dcgettext(0,"page number overflow",5);
                    /* WARNING: Subroutine does not return */
    error(1,0,uVar5);
  }
  uVar5 = dcgettext(0,"Page %ju",5);
  __sprintf_chk(auStack_138,2,0x114,uVar5,lVar2);
  iVar3 = header_width_available;
  iVar4 = gnu_mbswidth(auStack_138,0);
  iVar6 = 0;
  if (-1 < iVar3 - iVar4) {
    iVar6 = iVar3 - iVar4;
  }
  __printf_chk(2,"\n\n%*s%s%*s%s%*s%s\n\n\n",chars_per_margin,&_LC0,date_text,iVar6 >> 1,&_LC7,
               file_text,iVar6 - (iVar6 >> 1),&_LC7,auStack_138);
  print_a_header = 0;
  output_position = 0;
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void read_rest_of_line(undefined8 *param_1)

{
  long lVar1;
  _IO_FILE *__stream;
  char *pcVar2;
  byte *pbVar3;
  int iVar4;
  uint __c;
  long lVar5;
  long lVar6;
  
  __stream = (_IO_FILE *)*param_1;
  do {
    while (pcVar2 = __stream->_IO_read_ptr, __stream->_IO_read_end <= pcVar2) {
      iVar4 = __uflow(__stream);
      if (iVar4 == 10) {
        return;
      }
      if (iVar4 == 0xc) goto LAB_00101230;
      if (iVar4 == -1) {
        close_file(param_1);
        return;
      }
    }
    __stream->_IO_read_ptr = pcVar2 + 1;
    if (*pcVar2 == '\n') {
      return;
    }
  } while (*pcVar2 != '\f');
LAB_00101230:
  pbVar3 = (byte *)__stream->_IO_read_ptr;
  if (pbVar3 < __stream->_IO_read_end) {
    __stream->_IO_read_ptr = (char *)(pbVar3 + 1);
    __c = (uint)*pbVar3;
  }
  else {
    __c = __uflow(__stream);
  }
  lVar5 = column_vector;
  if (__c != 10) {
    ungetc(__c,__stream);
    lVar5 = column_vector;
  }
  if (keep_FF != '\0') {
    print_a_FF = 1;
  }
  column_vector = lVar5;
  if (parallel_files == '\0') {
    if (columns != 0) {
      iVar4 = 2 - (uint)storing_columns;
      lVar1 = lVar5 + (ulong)columns * 0x40;
      if (((ulong)columns * 0x40 & 0x40) != 0) {
        *(int *)(lVar5 + 0x10) = iVar4;
        lVar5 = lVar5 + 0x40;
        if (lVar5 == lVar1) goto LAB_00101272;
      }
      do {
        *(int *)(lVar5 + 0x10) = iVar4;
        lVar6 = lVar5 + 0x80;
        *(int *)(lVar5 + 0x50) = iVar4;
        lVar5 = lVar6;
      } while (lVar6 != lVar1);
    }
  }
  else {
    *(undefined4 *)(param_1 + 2) = 2;
  }
LAB_00101272:
  files_ready_to_read = files_ready_to_read + -1;
  *(undefined4 *)(param_1 + 6) = 0;
  return;
}



void skip_read(undefined8 *param_1,int param_2)

{
  long lVar1;
  _IO_FILE *__stream;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  bool bVar9;
  
  __stream = (_IO_FILE *)*param_1;
  pbVar5 = (byte *)__stream->_IO_read_ptr;
  if (pbVar5 < __stream->_IO_read_end) {
    __stream->_IO_read_ptr = (char *)(pbVar5 + 1);
    uVar4 = (uint)*pbVar5;
  }
  else {
    uVar4 = __uflow(__stream);
  }
  cVar3 = last_line;
  if (uVar4 == 0xc) {
    pbVar5 = (byte *)__stream->_IO_read_ptr;
    if (*(char *)((long)param_1 + 0x39) != '\0') {
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
        bVar9 = uVar4 == 0xc;
        *(undefined1 *)((long)param_1 + 0x39) = 0;
        if (last_line != '\0') {
          *(undefined1 *)((long)param_1 + 0x39) = 1;
        }
        if (uVar4 != 10) goto LAB_001013b4;
        goto LAB_001014c8;
      }
      bVar9 = last_line == '\0';
      *(undefined1 *)((long)param_1 + 0x39) = 0;
      if (bVar9) {
        if (uVar4 == 0xc) {
          pbVar5 = (byte *)__stream->_IO_read_ptr;
          goto LAB_00101571;
        }
      }
      else {
        *(undefined1 *)((long)param_1 + 0x39) = 1;
        if (uVar4 == 0xc) {
          pbVar5 = (byte *)__stream->_IO_read_ptr;
          goto LAB_001015d2;
        }
      }
      bVar9 = false;
      goto LAB_00101373;
    }
    if (last_line != '\0') {
      *(undefined1 *)((long)param_1 + 0x39) = 1;
LAB_001015d2:
      bVar9 = true;
      goto LAB_001013cf;
    }
LAB_00101571:
    bVar9 = true;
  }
  else {
    *(undefined1 *)((long)param_1 + 0x39) = 0;
    if (cVar3 != '\0') {
      *(undefined1 *)((long)param_1 + 0x39) = 1;
    }
    bVar9 = false;
    if (uVar4 == 10) {
      bVar9 = false;
      goto LAB_001014c8;
    }
LAB_00101373:
    do {
      if (uVar4 == 0xffffffff) {
        close_file(param_1);
        goto LAB_001014c8;
      }
      while (pcVar2 = __stream->_IO_read_ptr, pcVar2 < __stream->_IO_read_end) {
        __stream->_IO_read_ptr = pcVar2 + 1;
        if (*pcVar2 == '\n') goto LAB_001014c8;
        if (*pcVar2 == '\f') goto LAB_001013c0;
      }
      uVar4 = __uflow(__stream);
      if (uVar4 == 10) goto LAB_001014c8;
LAB_001013b4:
    } while (uVar4 != 0xc);
LAB_001013c0:
    pbVar5 = (byte *)__stream->_IO_read_ptr;
    if (last_line != '\0') {
LAB_001013cf:
      lVar7 = column_vector;
      if (parallel_files == '\0') {
        if (columns != 0) {
          lVar1 = column_vector + (ulong)columns * 0x40;
          if (((ulong)columns * 0x40 & 0x40) != 0) {
            *(undefined1 *)(column_vector + 0x39) = 0;
            lVar7 = lVar7 + 0x40;
            if (lVar7 == lVar1) goto LAB_00101428;
          }
          do {
            *(undefined1 *)(lVar7 + 0x39) = 0;
            lVar8 = lVar7 + 0x80;
            *(undefined1 *)(lVar7 + 0x79) = 0;
            lVar7 = lVar8;
          } while (lVar8 != lVar1);
        }
      }
      else {
        *(undefined1 *)((long)param_1 + 0x39) = 0;
      }
    }
  }
LAB_00101428:
  if (pbVar5 < __stream->_IO_read_end) {
    __stream->_IO_read_ptr = (char *)(pbVar5 + 1);
    uVar4 = (uint)*pbVar5;
  }
  else {
    uVar4 = __uflow(__stream);
  }
  if (uVar4 == 10) {
    if (parallel_files == '\0') goto LAB_00101453;
LAB_00101580:
    *(undefined4 *)(param_1 + 2) = 2;
  }
  else {
    ungetc(uVar4,__stream);
    if (parallel_files != '\0') goto LAB_00101580;
LAB_00101453:
    lVar7 = column_vector;
    if (columns != 0) {
      iVar6 = 2 - (uint)storing_columns;
      lVar1 = column_vector + (ulong)columns * 0x40;
      if (((ulong)columns * 0x40 & 0x40) != 0) {
        *(int *)(column_vector + 0x10) = iVar6;
        lVar7 = lVar7 + 0x40;
        if (lVar7 == lVar1) goto LAB_00101588;
      }
      do {
        *(int *)(lVar7 + 0x10) = iVar6;
        lVar8 = lVar7 + 0x80;
        *(int *)(lVar7 + 0x50) = iVar6;
        lVar7 = lVar8;
      } while (lVar8 != lVar1);
    }
  }
LAB_00101588:
  files_ready_to_read = files_ready_to_read + -1;
  *(undefined4 *)(param_1 + 6) = 0;
LAB_001014c8:
  if ((skip_count != '\0') && (((parallel_files != '\x01' || (param_2 == 1)) && (!bVar9)))) {
    line_count = line_count + 1;
  }
  return;
}



bool skip_to_page(ulong param_1)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  char cVar10;
  ulong uVar11;
  int iVar12;
  
  if (param_1 < 2) {
    return 0 < files_ready_to_read;
  }
  uVar3 = (ulong)columns;
  uVar11 = 1;
  lVar5 = column_vector;
  do {
    iVar12 = 1;
    if (1 < lines_per_body) {
      do {
        if ((int)uVar3 < 1) {
          if (lines_per_body <= iVar12 + 1) goto LAB_0010185c;
          break;
        }
        iVar7 = 1;
        do {
          while (*(int *)(lVar5 + 0x10) == 0) {
            iVar8 = iVar7 + 1;
            skip_read(lVar5,iVar7);
            uVar3 = (ulong)columns;
            lVar5 = lVar5 + 0x40;
            iVar7 = iVar8;
            if ((int)columns < iVar8) goto LAB_001016de;
          }
          iVar7 = iVar7 + 1;
          lVar5 = lVar5 + 0x40;
        } while (iVar7 <= (int)uVar3);
LAB_001016de:
        iVar12 = iVar12 + 1;
        lVar5 = column_vector;
      } while (iVar12 < lines_per_body);
    }
    last_line = 1;
    if ((int)uVar3 < 1) {
LAB_0010185c:
      uVar2 = (uint)uVar3;
      if (storing_columns != '\0') {
joined_r0x0010194a:
        cVar10 = storing_columns;
        if (uVar2 != 0) goto LAB_00101746;
        goto LAB_0010178b;
      }
joined_r0x00101879:
      cVar10 = storing_columns;
      if (uVar2 != 0) goto LAB_00101746;
joined_r0x001018a1:
      if (files_ready_to_read < 1) {
LAB_00101908:
        last_line = 0;
        uVar4 = dcgettext(0,"starting page number %ju exceeds page count %ju",5);
                    /* WARNING: Subroutine does not return */
        error(0,0,uVar4,param_1,uVar11);
      }
    }
    else {
      iVar12 = 1;
      do {
        while (*(int *)(lVar5 + 0x10) == 0) {
          iVar7 = iVar12 + 1;
          skip_read(lVar5,iVar12);
          uVar3 = (ulong)columns;
          lVar5 = lVar5 + 0x40;
          iVar12 = iVar7;
          if ((int)columns < iVar7) {
            lVar5 = column_vector;
            uVar2 = columns;
            if (storing_columns == '\0') goto joined_r0x00101879;
            if (0 < (int)columns) goto LAB_001018b8;
            goto joined_r0x0010194a;
          }
        }
        iVar12 = iVar12 + 1;
        lVar5 = lVar5 + 0x40;
      } while (iVar12 <= (int)uVar3);
      lVar5 = column_vector;
      cVar10 = storing_columns;
      if (storing_columns != '\0') {
LAB_001018b8:
        lVar5 = column_vector;
        lVar9 = uVar3 * 0x40 + column_vector;
        lVar6 = column_vector;
        do {
          if (*(int *)(lVar6 + 0x10) != 3) {
            *(undefined4 *)(lVar6 + 0x10) = 2;
          }
          lVar6 = lVar6 + 0x40;
        } while (lVar9 != lVar6);
        cVar10 = '\x01';
      }
LAB_00101746:
      bVar1 = false;
      lVar6 = lVar5;
      iVar12 = files_ready_to_read;
      do {
        if (*(int *)(lVar6 + 0x10) == 2) {
          *(undefined4 *)(lVar6 + 0x10) = 0;
          iVar12 = iVar12 + 1;
          bVar1 = true;
        }
        lVar6 = lVar6 + 0x40;
      } while (lVar6 != uVar3 * 0x40 + lVar5);
      if (bVar1) {
        files_ready_to_read = iVar12;
      }
      if (cVar10 == '\0') goto joined_r0x001018a1;
LAB_0010178b:
      if (*(int *)(lVar5 + 0x10) == 3) {
        files_ready_to_read = 0;
        goto LAB_00101908;
      }
      files_ready_to_read = 1;
    }
    last_line = 0;
    uVar11 = uVar11 + 1;
    if (param_1 == uVar11) {
      return 0 < files_ready_to_read;
    }
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 print_stored(long param_1)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  ushort **ppuVar8;
  long lVar9;
  long lVar10;
  byte *pbVar11;
  byte *pbVar12;
  long lVar13;
  int iVar14;
  
  lVar5 = buff;
  lVar13 = (long)*(int *)(param_1 + 0x28);
  pad_vertically = 1;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  iVar3 = *(int *)(line_vector + 4 + lVar13 * 4);
  pbVar11 = (byte *)(*(int *)(line_vector + lVar13 * 4) + lVar5);
  if (print_a_header != '\0') {
    print_header();
  }
  lVar6 = column_vector;
  if (*(int *)(param_1 + 0x10) != 1) goto LAB_001019dd;
  if (0 < (int)columns) {
    lVar1 = column_vector + (ulong)columns * 0x40;
    lVar9 = column_vector;
    if (((ulong)columns * 0x40 & 0x40) != 0) {
      lVar9 = column_vector + 0x40;
      *(undefined4 *)(column_vector + 0x10) = 2;
      if (lVar9 == lVar1) goto LAB_00101b4f;
    }
    do {
      *(undefined4 *)(lVar9 + 0x10) = 2;
      lVar10 = lVar9 + 0x80;
      *(undefined4 *)(lVar9 + 0x50) = 2;
      lVar9 = lVar10;
    } while (lVar10 != lVar1);
  }
LAB_00101b4f:
  if (*(int *)(lVar6 + 0x30) < 1) {
    if (extremities != '\0') {
      return 1;
    }
    pad_vertically = 0;
    return 1;
  }
LAB_001019dd:
  if (col_sep_length < padding_not_printed) {
    iVar7 = padding_not_printed - col_sep_length;
    iVar14 = output_position;
    if (tabify_output == '\0') {
      while (iVar14 = iVar14 + 1, iVar14 <= iVar7) {
        pcVar4 = _stdout->_IO_write_ptr;
        if (pcVar4 < _stdout->_IO_write_end) {
          _stdout->_IO_write_ptr = pcVar4 + 1;
          *pcVar4 = ' ';
        }
        else {
          __overflow(_stdout,0x20);
        }
      }
    }
    else {
      spaces_not_printed = iVar7 - output_position;
      iVar7 = output_position;
    }
    output_position = iVar7;
    padding_not_printed = 0;
  }
  if (use_col_separator != '\0') {
    print_sep_string();
  }
  do {
    while( true ) {
      if (pbVar11 == (byte *)(lVar5 + iVar3)) {
        if ((spaces_not_printed == 0) &&
           (output_position = *(int *)(end_vector + lVar13 * 4) + *(int *)(param_1 + 0x34),
           *(int *)(param_1 + 0x34) - col_sep_length == chars_per_margin)) {
          output_position = output_position - col_sep_length;
        }
        return 1;
      }
      pbVar12 = pbVar11 + 1;
      bVar2 = *pbVar11;
      pbVar11 = pbVar12;
      if (tabify_output != '\0') break;
LAB_00101a60:
      pbVar12 = (byte *)_stdout->_IO_write_ptr;
      if (pbVar12 < _stdout->_IO_write_end) {
        _stdout->_IO_write_ptr = (char *)(pbVar12 + 1);
        *pbVar12 = bVar2;
      }
      else {
        __overflow(_stdout,(uint)bVar2);
      }
    }
    if (bVar2 != 0x20) {
      if (0 < spaces_not_printed) {
        print_white_space();
      }
      ppuVar8 = __ctype_b_loc();
      if ((*(byte *)((long)*ppuVar8 + (ulong)bVar2 * 2 + 1) & 0x40) == 0) {
        if (bVar2 == 8) {
          output_position = output_position + -1;
        }
      }
      else {
        output_position = output_position + 1;
      }
      goto LAB_00101a60;
    }
    spaces_not_printed = spaces_not_printed + 1;
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 read_line(undefined8 *param_1)

{
  long lVar1;
  byte bVar2;
  char cVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  char *pcVar11;
  char *pcVar12;
  _IO_FILE *p_Var13;
  char *pcVar14;
  int iVar15;
  uint local_3c;
  
  iVar10 = input_position;
  p_Var13 = (_IO_FILE *)*param_1;
  pbVar4 = (byte *)p_Var13->_IO_read_ptr;
  if (pbVar4 < p_Var13->_IO_read_end) {
    p_Var13->_IO_read_ptr = (char *)(pbVar4 + 1);
    bVar2 = *pbVar4;
    uVar6 = (uint)bVar2;
    if (bVar2 == 0xc) {
LAB_00101ed8:
      pbVar4 = (byte *)p_Var13->_IO_read_ptr;
      if (*(char *)((long)param_1 + 0x39) != '\0') {
        if (pbVar4 < p_Var13->_IO_read_end) {
          p_Var13->_IO_read_ptr = (char *)(pbVar4 + 1);
          uVar6 = (uint)*pbVar4;
          if (uVar6 == 10) {
LAB_001021b8:
            pbVar4 = (byte *)p_Var13->_IO_read_ptr;
            if (pbVar4 < p_Var13->_IO_read_end) {
              p_Var13->_IO_read_ptr = (char *)(pbVar4 + 1);
              uVar6 = (uint)*pbVar4;
              *(undefined1 *)((long)param_1 + 0x39) = 0;
              if (uVar6 != 10) goto joined_r0x001021d9;
            }
            else {
              uVar6 = __uflow(p_Var13);
              *(undefined1 *)((long)param_1 + 0x39) = 0;
              if (uVar6 != 10) goto LAB_00102297;
            }
            uVar6 = 10;
            goto LAB_00101c76;
          }
          *(undefined1 *)((long)param_1 + 0x39) = 0;
joined_r0x001021d9:
          if (uVar6 != 0xc) goto LAB_00101c6a;
        }
        else {
          uVar6 = __uflow(p_Var13);
          if (uVar6 == 10) {
            p_Var13 = (_IO_FILE *)*param_1;
            goto LAB_001021b8;
          }
          *(undefined1 *)((long)param_1 + 0x39) = 0;
LAB_00102297:
          if (uVar6 != 0xc) goto LAB_00101ea8;
          p_Var13 = (_IO_FILE *)*param_1;
        }
      }
      pbVar4 = (byte *)p_Var13->_IO_read_ptr;
      if (pbVar4 < p_Var13->_IO_read_end) {
        p_Var13->_IO_read_ptr = (char *)(pbVar4 + 1);
        uVar6 = (uint)*pbVar4;
      }
      else {
        uVar6 = __uflow(p_Var13);
      }
      if (uVar6 == 10) {
        if (print_a_header == '\0') goto LAB_00101f4f;
LAB_00101f42:
        FF_only = 1;
        if (storing_columns != 0) goto LAB_00101f4f;
        pad_vertically = 1;
        print_header();
      }
      else {
        ungetc(uVar6,(FILE *)*param_1);
        if (print_a_header != '\0') goto LAB_00101f42;
LAB_00101f4f:
        FF_only = 1;
        if (keep_FF != '\0') {
          print_a_FF = 1;
        }
      }
      lVar9 = column_vector;
      if (parallel_files == '\0') {
        if (columns != 0) {
          iVar10 = 2 - (uint)storing_columns;
          lVar1 = column_vector + (ulong)columns * 0x40;
          if (((ulong)columns * 0x40 & 0x40) != 0) {
            *(int *)(column_vector + 0x10) = iVar10;
            lVar9 = lVar9 + 0x40;
            if (lVar9 == lVar1) goto LAB_0010200f;
          }
          do {
            *(int *)(lVar9 + 0x10) = iVar10;
            *(int *)(lVar9 + 0x50) = iVar10;
            if (lVar9 + 0x80 == lVar1) break;
            *(int *)(lVar9 + 0x90) = iVar10;
            lVar8 = lVar9 + 0x100;
            *(int *)(lVar9 + 0xd0) = iVar10;
            lVar9 = lVar8;
          } while (lVar8 != lVar1);
        }
      }
      else {
LAB_00102008:
        *(undefined4 *)(param_1 + 2) = 2;
      }
LAB_0010200f:
      files_ready_to_read = files_ready_to_read + -1;
      *(undefined4 *)(param_1 + 6) = 0;
      return 1;
    }
    *(undefined1 *)((long)param_1 + 0x39) = 0;
    if (bVar2 == 10) goto LAB_00101c76;
  }
  else {
    uVar6 = __uflow(p_Var13);
    iVar10 = input_position;
    if (uVar6 == 0xc) {
      p_Var13 = (_IO_FILE *)*param_1;
      goto LAB_00101ed8;
    }
    *(undefined1 *)((long)param_1 + 0x39) = 0;
    if (uVar6 == 10) goto LAB_00101c76;
LAB_00101ea8:
    if (uVar6 == 0xffffffff) {
LAB_00101eb1:
      close_file(param_1);
      return 1;
    }
  }
LAB_00101c6a:
  local_3c = char_to_clump((int)(char)uVar6);
LAB_00101c76:
  if ((truncate_lines == '\0') || (input_position <= chars_per_column)) {
    if (param_1[4] != 0x100000) {
      pad_vertically = 1;
      if ((print_a_header != '\0') && (storing_columns == 0)) {
        print_header();
      }
      iVar10 = separators_not_printed;
      if ((parallel_files != '\0') && (align_empty_cols != '\0')) {
        separators_not_printed = 0;
        iVar7 = 1;
        lVar9 = column_vector;
        if (0 < iVar10) {
          do {
            padding_not_printed = *(int *)(lVar9 + 0x34);
            if (col_sep_length < padding_not_printed) {
              iVar5 = padding_not_printed - col_sep_length;
              iVar15 = output_position;
              if (tabify_output == '\0') {
                while (iVar15 = iVar15 + 1, iVar15 <= iVar5) {
                  pcVar12 = _stdout->_IO_write_ptr;
                  if (pcVar12 < _stdout->_IO_write_end) {
                    _stdout->_IO_write_ptr = pcVar12 + 1;
                    *pcVar12 = ' ';
                  }
                  else {
                    __overflow(_stdout,0x20);
                  }
                }
              }
              else {
                spaces_not_printed = iVar5 - output_position;
                iVar5 = output_position;
              }
              output_position = iVar5;
              padding_not_printed = 0;
              if (use_col_separator != '\0') goto LAB_00101d7d;
LAB_00101d11:
              cVar3 = *(char *)(lVar9 + 0x38);
            }
            else {
              if (use_col_separator == '\0') goto LAB_00101d11;
LAB_00101d7d:
              print_sep_string();
              cVar3 = *(char *)(lVar9 + 0x38);
            }
            if (cVar3 != '\0') {
              add_line_number(lVar9);
            }
            separators_not_printed = separators_not_printed + 1;
            iVar7 = iVar7 + 1;
            lVar9 = lVar9 + 0x40;
          } while (iVar7 <= iVar10);
        }
        align_empty_cols = '\0';
        padding_not_printed = *(int *)((long)param_1 + 0x34);
        spaces_not_printed = chars_per_column;
        if (truncate_lines == '\0') {
          spaces_not_printed = 0;
        }
      }
      if (col_sep_length < padding_not_printed) {
        iVar7 = padding_not_printed - col_sep_length;
        iVar10 = output_position;
        if (tabify_output == '\0') {
          while (iVar10 = iVar10 + 1, iVar10 <= iVar7) {
            pcVar12 = _stdout->_IO_write_ptr;
            if (pcVar12 < _stdout->_IO_write_end) {
              _stdout->_IO_write_ptr = pcVar12 + 1;
              *pcVar12 = ' ';
            }
            else {
              __overflow(_stdout,0x20);
            }
          }
        }
        else {
          spaces_not_printed = iVar7 - output_position;
          iVar7 = output_position;
        }
        output_position = iVar7;
        padding_not_printed = 0;
      }
      if (use_col_separator != '\0') {
        print_sep_string();
      }
    }
    if (*(char *)(param_1 + 7) != '\0') {
      add_line_number(param_1);
    }
    empty_line = 0;
    if (uVar6 == 10) {
      empty_line = 0;
      return 1;
    }
    pcVar14 = clump_buff + local_3c;
    pcVar12 = clump_buff;
    if (local_3c != 0) {
      do {
        pcVar11 = pcVar12 + 1;
        (*(code *)param_1[4])((int)*pcVar12);
        pcVar12 = pcVar11;
      } while (pcVar11 != pcVar14);
    }
LAB_00101e00:
    p_Var13 = (_IO_FILE *)*param_1;
    pbVar4 = (byte *)p_Var13->_IO_read_ptr;
    if (pbVar4 < p_Var13->_IO_read_end) {
      p_Var13->_IO_read_ptr = (char *)(pbVar4 + 1);
      bVar2 = *pbVar4;
      uVar6 = (uint)bVar2;
      if (bVar2 == 10) {
        return 1;
      }
      if (bVar2 == 0xc) {
LAB_00102050:
        pbVar4 = (byte *)p_Var13->_IO_read_ptr;
        if (pbVar4 < p_Var13->_IO_read_end) {
          p_Var13->_IO_read_ptr = (char *)(pbVar4 + 1);
          uVar6 = (uint)*pbVar4;
        }
        else {
          uVar6 = __uflow(p_Var13);
        }
        if (uVar6 != 10) {
          ungetc(uVar6,(FILE *)*param_1);
        }
        lVar9 = column_vector;
        if (keep_FF != '\0') {
          print_a_FF = 1;
        }
        if (parallel_files != '\0') goto LAB_00102008;
        if (columns != 0) {
          iVar10 = 2 - (uint)storing_columns;
          lVar1 = column_vector + (ulong)columns * 0x40;
          if (((ulong)columns * 0x40 & 0x40) == 0) goto LAB_001020d8;
          *(int *)(column_vector + 0x10) = iVar10;
          for (lVar9 = lVar9 + 0x40; lVar9 != lVar1; lVar9 = lVar9 + 0x80) {
LAB_001020d8:
            *(int *)(lVar9 + 0x10) = iVar10;
            *(int *)(lVar9 + 0x50) = iVar10;
          }
        }
        goto LAB_0010200f;
      }
    }
    else {
      uVar6 = __uflow(p_Var13);
      if (uVar6 == 10) {
        return 1;
      }
      if (uVar6 == 0xc) {
        p_Var13 = (_IO_FILE *)*param_1;
        goto LAB_00102050;
      }
      if (uVar6 == 0xffffffff) goto LAB_00101eb1;
    }
    iVar10 = input_position;
    uVar6 = char_to_clump((int)(char)uVar6);
    if ((truncate_lines == '\0') || (input_position <= chars_per_column)) {
      pcVar14 = clump_buff + uVar6;
      pcVar12 = clump_buff;
      if (uVar6 != 0) {
        do {
          pcVar11 = pcVar12 + 1;
          (*(code *)param_1[4])((int)*pcVar12);
          pcVar12 = pcVar11;
        } while (pcVar11 != pcVar14);
      }
      goto LAB_00101e00;
    }
  }
  input_position = iVar10;
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void print_files_part_0(void)

{
  char *pcVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  char cVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  byte bVar14;
  ulong uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  code *pcVar19;
  code *pcVar20;
  byte bVar21;
  int iVar22;
  bool bVar23;
  
  lVar13 = column_vector;
  bVar21 = parallel_files;
  bVar14 = numbered_lines;
  cVar5 = storing_columns;
  uVar11 = columns;
  uVar4 = uVar11;
  if (truncate_lines == '\0') {
    iVar10 = 0;
LAB_00102306:
    iVar9 = chars_per_margin + col_sep_length;
    if ((int)columns < 2) {
LAB_001030c8:
      iVar9 = chars_per_margin + col_sep_length;
      uVar17 = 1;
      lVar6 = column_vector;
      uVar4 = 1;
      if (storing_columns != '\0') goto LAB_00102a13;
LAB_00102fb6:
      pcVar19 = read_line;
      pcVar20 = print_char;
    }
    else {
      pcVar20 = store_char;
      pcVar19 = print_stored;
      if (storing_columns == '\0') {
        pcVar20 = print_char;
        pcVar19 = read_line;
      }
      if (numbered_lines == 0) {
        if (truncate_lines != '\0') goto LAB_00103053;
        lVar6 = (ulong)(columns - 1) * 0x40 + column_vector;
        lVar12 = column_vector;
        do {
          *(int *)(lVar12 + 0x34) = iVar9;
          lVar7 = lVar12 + 0x40;
          iVar9 = 0;
          *(code **)(lVar12 + 0x18) = pcVar19;
          *(code **)(lVar12 + 0x20) = pcVar20;
          *(undefined1 *)(lVar12 + 0x38) = 0;
          lVar12 = lVar7;
        } while (lVar6 != lVar7);
        goto LAB_0010290f;
      }
      bVar2 = parallel_files ^ 1;
      if (truncate_lines != '\0') goto LAB_0010299e;
      uVar17 = 1;
      lVar6 = column_vector;
      do {
        bVar23 = uVar17 == 1;
        *(int *)(lVar6 + 0x34) = iVar9;
        uVar17 = uVar17 + 1;
        *(code **)(lVar6 + 0x18) = pcVar19;
        *(code **)(lVar6 + 0x20) = pcVar20;
        iVar9 = 0;
        *(byte *)(lVar6 + 0x38) = bVar23 | bVar2;
        lVar6 = lVar6 + 0x40;
      } while (uVar11 != uVar17);
      lVar6 = (ulong)(uVar11 - 1) * 0x40 + lVar13;
      if (cVar5 == '\0') goto LAB_001023cb;
LAB_00102a13:
      uVar17 = uVar4;
      if (balance_columns == '\0') {
        cVar5 = '\x01';
        goto LAB_00102fb6;
      }
      pcVar19 = print_stored;
      pcVar20 = store_char;
      cVar5 = balance_columns;
    }
    *(code **)(lVar6 + 0x18) = pcVar19;
    *(code **)(lVar6 + 0x20) = pcVar20;
    bVar21 = parallel_files;
    if (bVar14 == 0) goto LAB_001023e5;
  }
  else {
    iVar10 = chars_per_margin + chars_per_column;
    if (parallel_files == 0) goto LAB_00102306;
    if (numbered_lines == 0) {
      if ((int)columns < 2) goto LAB_001030c8;
      pcVar20 = store_char;
      pcVar19 = print_stored;
      if (storing_columns == '\0') {
        pcVar20 = print_char;
        pcVar19 = read_line;
      }
LAB_00103053:
      iVar16 = columns - 2;
      iVar18 = chars_per_column + col_sep_length;
      iVar10 = col_sep_length + iVar10;
      lVar6 = (ulong)(columns - 1) * 0x40 + column_vector;
      lVar12 = column_vector;
      iVar9 = chars_per_margin + col_sep_length;
      iVar22 = iVar10;
      do {
        *(int *)(lVar12 + 0x34) = iVar9;
        lVar7 = lVar12 + 0x40;
        *(code **)(lVar12 + 0x18) = pcVar19;
        *(code **)(lVar12 + 0x20) = pcVar20;
        *(undefined1 *)(lVar12 + 0x38) = 0;
        lVar12 = lVar7;
        iVar9 = iVar22;
        iVar22 = iVar22 + iVar18;
      } while (lVar6 != lVar7);
      iVar9 = iVar16 * iVar18 + iVar10;
LAB_0010290f:
      if (cVar5 == '\0') {
        *(code **)(lVar6 + 0x18) = read_line;
        bVar14 = 0;
        *(code **)(lVar6 + 0x20) = print_char;
        goto LAB_001023e5;
      }
      goto LAB_00102a13;
    }
    iVar10 = iVar10 + number_width;
    if ((int)columns < 2) goto LAB_001030c8;
    pcVar20 = store_char;
    pcVar19 = print_stored;
    if (storing_columns == '\0') {
      pcVar20 = print_char;
      pcVar19 = read_line;
    }
LAB_0010299e:
    bVar2 = parallel_files ^ 1;
    iVar22 = col_sep_length + chars_per_column;
    iVar9 = col_sep_length + iVar10;
    uVar17 = 1;
    lVar6 = column_vector;
    iVar16 = chars_per_margin + col_sep_length;
    iVar10 = iVar9;
    do {
      bVar23 = uVar17 == 1;
      *(int *)(lVar6 + 0x34) = iVar16;
      uVar17 = uVar17 + 1;
      *(code **)(lVar6 + 0x18) = pcVar19;
      *(byte *)(lVar6 + 0x38) = bVar23 | bVar2;
      *(code **)(lVar6 + 0x20) = pcVar20;
      lVar6 = lVar6 + 0x40;
      iVar16 = iVar10;
      iVar10 = iVar10 + iVar22;
    } while (uVar17 != uVar11);
    lVar6 = (ulong)(uVar11 - 1) * 0x40 + lVar13;
    iVar9 = (uVar11 - 2) * iVar22 + iVar9;
    if (cVar5 != '\0') goto LAB_00102a13;
LAB_001023cb:
    *(code **)(lVar6 + 0x18) = read_line;
    *(code **)(lVar6 + 0x20) = print_char;
    uVar17 = uVar11;
  }
  bVar14 = bVar21 ^ 1 | uVar17 == 1;
LAB_001023e5:
  uVar8 = (ulong)uVar11;
  *(byte *)(lVar6 + 0x38) = bVar14;
  *(int *)(lVar6 + 0x34) = iVar9;
  line_number = line_count;
  if (cVar5 != '\0') goto LAB_001026f8;
  if (uVar11 == 0) {
    return;
  }
LAB_0010240b:
  iVar10 = lines_per_body;
  lVar12 = uVar8 * 0x40 + lVar13;
  lVar6 = lVar13;
  do {
    while (*(int *)(lVar6 + 0x10) == 0) {
      *(int *)(lVar6 + 0x30) = iVar10;
      lVar6 = lVar6 + 0x40;
      if (lVar6 == lVar12) goto LAB_0010243d;
    }
    *(undefined4 *)(lVar6 + 0x30) = 0;
    lVar6 = lVar6 + 0x40;
  } while (lVar12 != lVar6);
LAB_0010243d:
  uVar15 = uVar8;
  if ((int)uVar8 == 0) {
    return;
  }
  do {
    iVar10 = 0;
    lVar12 = uVar15 * 0x40 + lVar13;
    lVar6 = lVar13;
    if (storing_columns == '\0') {
      do {
        iVar10 = iVar10 + (uint)(*(uint *)(lVar6 + 0x10) < 2);
        lVar6 = lVar6 + 0x40;
      } while (lVar6 != lVar12);
    }
    else {
      do {
        if ((*(uint *)(lVar6 + 0x10) < 2) ||
           ((0 < *(int *)(lVar6 + 0x2c) && (0 < *(int *)(lVar6 + 0x30))))) {
          iVar10 = iVar10 + 1;
        }
        lVar6 = lVar6 + 0x40;
      } while (lVar6 != lVar12);
    }
    if (iVar10 == 0) {
      return;
    }
    if (extremities != '\0') {
      print_a_header = 1;
    }
    pad_vertically = 0;
    iVar10 = lines_per_body;
    if (double_space != '\0') {
      iVar10 = lines_per_body * 2;
    }
    bVar14 = 0;
    if (iVar10 < 1) {
      if ((iVar10 == 0) && (0 < (int)uVar15)) {
LAB_00102bf7:
        pad_vertically = bVar14;
        iVar10 = 1;
        do {
          if (*(int *)(lVar13 + 0x10) == 0) {
            *(undefined1 *)(lVar13 + 0x39) = 1;
          }
          iVar10 = iVar10 + 1;
          lVar13 = lVar13 + 0x40;
        } while (iVar10 <= (int)uVar15);
        iVar10 = 0;
        goto LAB_00102c19;
      }
LAB_00102c32:
      if ((keep_FF != '\0') && (print_a_FF != '\0')) {
        pcVar1 = _stdout->_IO_write_ptr;
        if (pcVar1 < _stdout->_IO_write_end) {
          _stdout->_IO_write_ptr = pcVar1 + 1;
          *pcVar1 = '\f';
        }
        else {
          __overflow(_stdout,0xc);
        }
        print_a_FF = '\0';
      }
    }
    else {
      while (pad_vertically = bVar14, (int)uVar15 != 0) {
        iVar9 = 0;
        lVar12 = uVar15 * 0x40 + lVar13;
        lVar6 = lVar13;
        if (storing_columns == '\0') {
          do {
            iVar9 = iVar9 + (uint)(*(uint *)(lVar6 + 0x10) < 2);
            lVar6 = lVar6 + 0x40;
          } while (lVar6 != lVar12);
        }
        else {
          do {
            if ((*(uint *)(lVar6 + 0x10) < 2) ||
               ((0 < *(int *)(lVar6 + 0x2c) && (0 < *(int *)(lVar6 + 0x30))))) {
              iVar9 = iVar9 + 1;
            }
            lVar6 = lVar6 + 0x40;
          } while (lVar6 != lVar12);
        }
        if (iVar9 == 0) break;
        output_position = 0;
        spaces_not_printed = 0;
        separators_not_printed = 0;
        pad_vertically = 0;
        align_empty_cols = 0;
        empty_line = '\x01';
        if (0 < (int)uVar15) {
          iVar9 = 1;
LAB_001025d1:
          do {
            input_position = 0;
            if ((*(int *)(lVar13 + 0x30) < 1) && (*(int *)(lVar13 + 0x10) != 1)) {
              if (parallel_files != 0) {
                if (empty_line == '\0') {
                  padding_not_printed = *(int *)(lVar13 + 0x34);
                  if (col_sep_length < padding_not_printed) {
                    iVar16 = padding_not_printed - col_sep_length;
                    iVar22 = output_position;
                    if (tabify_output == '\0') {
                      while (iVar22 = iVar22 + 1, iVar22 <= iVar16) {
                        pcVar1 = _stdout->_IO_write_ptr;
                        if (pcVar1 < _stdout->_IO_write_end) {
                          _stdout->_IO_write_ptr = pcVar1 + 1;
                          *pcVar1 = ' ';
                        }
                        else {
                          __overflow(_stdout,0x20);
                        }
                      }
                    }
                    else {
LAB_00102d94:
                      spaces_not_printed = iVar16 - output_position;
                      iVar16 = output_position;
                    }
LAB_00102da0:
                    output_position = iVar16;
                    padding_not_printed = 0;
                  }
LAB_00102ce8:
                  if (use_col_separator == '\0') {
                    if (*(char *)(lVar13 + 0x38) == '\0') {
                      uVar8 = (ulong)columns;
                      iVar9 = iVar9 + 1;
                      lVar13 = lVar13 + 0x40;
                      uVar11 = columns;
                      bVar21 = pad_vertically;
                      if ((int)columns < iVar9) break;
                      goto LAB_001025d1;
                    }
                  }
                  else {
                    print_sep_string();
                    uVar8 = (ulong)columns;
                    if (*(char *)(lVar13 + 0x38) == '\0') goto LAB_001025b0;
                  }
                  add_line_number(lVar13);
                  goto LAB_00102a70;
                }
                align_empty_cols = 1;
              }
            }
            else {
              padding_not_printed = *(int *)(lVar13 + 0x34);
              FF_only = '\0';
              cVar5 = (**(code **)(lVar13 + 0x18))(lVar13);
              if (cVar5 == '\0') {
                read_rest_of_line(lVar13);
              }
              bVar21 = pad_vertically;
              iVar22 = *(int *)(lVar13 + 0x30) + -1;
              bVar14 = bVar14 | pad_vertically;
              *(int *)(lVar13 + 0x30) = iVar22;
              if (iVar22 < 1) {
                uVar11 = columns;
                if (columns == 0) {
                  if (bVar21 != 0) goto LAB_00102d31;
                  goto LAB_00102bd4;
                }
                iVar22 = 0;
                lVar12 = (ulong)columns * 0x40 + column_vector;
                lVar6 = column_vector;
                if (storing_columns == '\0') {
                  do {
                    iVar22 = iVar22 + (uint)(*(uint *)(lVar6 + 0x10) < 2);
                    lVar6 = lVar6 + 0x40;
                  } while (lVar6 != lVar12);
                }
                else {
                  do {
                    if ((*(uint *)(lVar6 + 0x10) < 2) ||
                       ((0 < *(int *)(lVar6 + 0x2c) && (0 < *(int *)(lVar6 + 0x30))))) {
                      iVar22 = iVar22 + 1;
                    }
                    lVar6 = lVar6 + 0x40;
                  } while (lVar6 != lVar12);
                }
                if (iVar22 == 0) break;
              }
              if ((parallel_files == 0) || (iVar22 = *(int *)(lVar13 + 0x10), iVar22 == 0)) {
LAB_00102a70:
                uVar8 = (ulong)columns;
              }
              else if (empty_line == '\0') {
                if ((iVar22 == 3) || ((uVar8 = (ulong)columns, iVar22 == 2 && (FF_only != '\0')))) {
                  padding_not_printed = *(int *)(lVar13 + 0x34);
                  if (col_sep_length < padding_not_printed) {
                    iVar16 = padding_not_printed - col_sep_length;
                    iVar22 = output_position;
                    if (tabify_output != '\0') goto LAB_00102d94;
                    while (iVar22 = iVar22 + 1, iVar22 <= iVar16) {
                      pcVar1 = _stdout->_IO_write_ptr;
                      if (pcVar1 < _stdout->_IO_write_end) {
                        _stdout->_IO_write_ptr = pcVar1 + 1;
                        *pcVar1 = ' ';
                      }
                      else {
                        __overflow(_stdout,0x20);
                      }
                    }
                    goto LAB_00102da0;
                  }
                  goto LAB_00102ce8;
                }
              }
              else {
                align_empty_cols = 1;
                uVar8 = (ulong)columns;
              }
            }
LAB_001025b0:
            if (use_col_separator != '\0') {
              separators_not_printed = separators_not_printed + 1;
            }
            iVar9 = iVar9 + 1;
            lVar13 = lVar13 + 0x40;
            uVar11 = (uint)uVar8;
            bVar21 = pad_vertically;
          } while (iVar9 <= (int)(uint)uVar8);
          if (bVar21 != 0) {
LAB_00102d31:
            pcVar1 = _stdout->_IO_write_ptr;
            if (pcVar1 < _stdout->_IO_write_end) {
              _stdout->_IO_write_ptr = pcVar1 + 1;
              *pcVar1 = '\n';
            }
            else {
              __overflow(_stdout,10);
              uVar11 = columns;
            }
            iVar10 = iVar10 + -1;
          }
          uVar15 = (ulong)uVar11;
          lVar13 = column_vector;
          if (uVar11 != 0) goto LAB_00102ae9;
LAB_00102bd4:
          if (extremities != '\0') goto LAB_00102b1a;
LAB_00102be1:
          pad_vertically = bVar14;
          if ((iVar10 == 0) && (uVar15 = (ulong)columns, lVar13 = column_vector, 0 < (int)columns))
          goto LAB_00102bf7;
          break;
        }
LAB_00102ae9:
        uVar11 = 0;
        iVar9 = 0;
        if (storing_columns == '\0') {
          do {
            iVar9 = iVar9 + (uint)(*(uint *)(lVar13 + 0x10) < 2);
            uVar11 = uVar11 + 1;
            lVar13 = lVar13 + 0x40;
          } while (uVar11 < (uint)uVar15);
        }
        else {
          do {
            if ((*(uint *)(lVar13 + 0x10) < 2) ||
               ((0 < *(int *)(lVar13 + 0x2c) && (0 < *(int *)(lVar13 + 0x30))))) {
              iVar9 = iVar9 + 1;
            }
            uVar11 = uVar11 + 1;
            lVar13 = lVar13 + 0x40;
          } while (uVar11 < (uint)uVar15);
        }
        if (iVar9 == 0) goto LAB_00102bd4;
LAB_00102b1a:
        if ((double_space != '\0') && (bVar14 != 0)) {
          pcVar1 = _stdout->_IO_write_ptr;
          if (pcVar1 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = pcVar1 + 1;
            *pcVar1 = '\n';
          }
          else {
            __overflow(_stdout,10);
          }
          iVar10 = iVar10 + -1;
        }
        if (iVar10 < 1) goto LAB_00102be1;
        uVar8 = (ulong)columns;
        lVar13 = column_vector;
        uVar15 = (ulong)columns;
      }
LAB_00102c19:
      if ((pad_vertically == 0) || (extremities == '\0')) goto LAB_00102c32;
      iVar10 = iVar10 + 5;
      if (use_form_feed == '\0') {
        do {
          pcVar1 = _stdout->_IO_write_ptr;
          if (pcVar1 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = pcVar1 + 1;
            *pcVar1 = '\n';
          }
          else {
            __overflow(_stdout,10);
          }
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      else {
        pcVar1 = _stdout->_IO_write_ptr;
        if (pcVar1 < _stdout->_IO_write_end) {
          _stdout->_IO_write_ptr = pcVar1 + 1;
          *pcVar1 = '\f';
        }
        else {
          __overflow(_stdout,0xc);
        }
      }
    }
    lVar13 = column_vector;
    page_number = page_number + 1;
    if (last_page_number < page_number) {
      return;
    }
    uVar8 = (ulong)columns;
    if (columns == 0) {
      if (storing_columns == '\0') {
        return;
      }
    }
    else {
      bVar23 = false;
      lVar12 = (ulong)columns * 0x40 + column_vector;
      lVar6 = column_vector;
      uVar11 = files_ready_to_read;
      do {
        if (*(int *)(lVar6 + 0x10) == 2) {
          *(undefined4 *)(lVar6 + 0x10) = 0;
          uVar11 = uVar11 + 1;
          bVar23 = true;
        }
        lVar6 = lVar6 + 0x40;
      } while (lVar6 != lVar12);
      if (bVar23) {
        files_ready_to_read = uVar11;
      }
      if (storing_columns == '\0') goto LAB_0010240b;
    }
    files_ready_to_read = (uint)(*(int *)(lVar13 + 0x10) != 3);
LAB_001026f8:
    buff_current = 0;
    uVar11 = (int)uVar8 - (uint)(balance_columns == '\0');
    if ((int)uVar11 < 1) {
      iVar10 = 0;
      lVar6 = 0;
      iVar9 = 0;
    }
    else {
      lVar6 = lVar13;
      if (((ulong)uVar11 * 0x40 & 0x40) == 0) goto LAB_00102741;
      *(undefined4 *)(lVar13 + 0x2c) = 0;
      for (lVar6 = lVar13 + 0x40; lVar6 != lVar13 + (ulong)uVar11 * 0x40; lVar6 = lVar6 + 0x80) {
LAB_00102741:
        *(undefined4 *)(lVar6 + 0x2c) = 0;
        *(undefined4 *)(lVar6 + 0x6c) = 0;
      }
      iVar10 = 0;
      iVar9 = 1;
      uVar8 = 0;
      while (iVar22 = lines_per_body, files_ready_to_read != 0) {
        *(int *)(lVar13 + 0x28) = (int)uVar8;
        if (iVar22 == 0) {
          iVar9 = iVar9 + 1;
          if ((iVar9 <= (int)uVar11) && (files_ready_to_read != 0)) {
            do {
              iVar9 = iVar9 + 1;
              *(int *)(lVar13 + 0x68) = (int)uVar8;
              lVar13 = lVar13 + 0x40;
            } while (iVar9 <= (int)uVar11);
          }
          break;
        }
        do {
          if (*(int *)(lVar13 + 0x10) == 0) {
            input_position = 0;
            cVar5 = read_line(lVar13);
            if (cVar5 == '\0') {
              read_rest_of_line(lVar13);
            }
            iVar16 = buff_current;
            lVar6 = line_vector;
            if ((*(int *)(lVar13 + 0x10) == 0) || (iVar10 != buff_current)) {
              *(int *)(lVar13 + 0x2c) = *(int *)(lVar13 + 0x2c) + 1;
              uVar3 = input_position;
              *(int *)(lVar6 + uVar8 * 4) = iVar10;
              *(undefined4 *)(end_vector + uVar8 * 4) = uVar3;
              uVar8 = (ulong)((int)uVar8 + 1);
              iVar10 = iVar16;
            }
          }
        } while ((iVar22 != 1) && (iVar22 = iVar22 + -1, files_ready_to_read != 0));
        iVar9 = iVar9 + 1;
        lVar13 = lVar13 + 0x40;
        if ((int)uVar11 < iVar9) break;
      }
      iVar9 = (int)uVar8;
      lVar6 = uVar8 << 2;
      uVar8 = (ulong)columns;
      lVar13 = column_vector;
    }
    cVar5 = balance_columns;
    *(int *)(line_vector + lVar6) = iVar10;
    iVar10 = (int)uVar8;
    if (cVar5 == '\0') {
      if (iVar10 != 1) break;
      if (*(int *)(lVar13 + 0x10) == 0) {
        *(int *)(lVar13 + 0x30) = lines_per_body;
      }
      else {
        *(undefined4 *)(lVar13 + 0x30) = 0;
      }
    }
    else {
      if (0 < iVar10) {
        iVar22 = iVar9 / iVar10;
        iVar9 = iVar9 % iVar10;
        if (iVar9 < 1) {
          iVar18 = 0;
          iVar16 = 1;
          lVar6 = lVar13;
        }
        else {
          iVar16 = 1;
          if (iVar10 < iVar9) {
            iVar9 = iVar10;
          }
          iVar18 = 0;
          lVar12 = lVar13;
          do {
            iVar16 = iVar16 + 1;
            *(int *)(lVar12 + 0x28) = iVar18;
            iVar18 = iVar18 + iVar22 + 1;
            lVar6 = lVar12 + 0x40;
            *(int *)(lVar12 + 0x2c) = iVar22 + 1;
            lVar12 = lVar6;
          } while (iVar16 <= iVar9);
          if (iVar10 < iVar16) break;
        }
        do {
          iVar16 = iVar16 + 1;
          *(int *)(lVar6 + 0x28) = iVar18;
          iVar18 = iVar18 + iVar22;
          *(int *)(lVar6 + 0x2c) = iVar22;
          lVar6 = lVar6 + 0x40;
        } while (iVar16 <= iVar10);
      }
      if (iVar10 != 1) break;
      *(undefined4 *)(lVar13 + 0x30) = *(undefined4 *)(lVar13 + 0x2c);
    }
    uVar15 = 1;
  } while( true );
  lVar12 = (ulong)(iVar10 - 1) * 0x40 + lVar13;
  lVar6 = lVar13;
  do {
    lVar7 = lVar6 + 0x40;
    *(undefined4 *)(lVar6 + 0x30) = *(undefined4 *)(lVar6 + 0x2c);
    lVar6 = lVar7;
  } while (lVar7 != lVar12);
  if (cVar5 == '\0') {
    iVar10 = 0;
    if (*(int *)(lVar12 + 0x10) == 0) {
      iVar10 = lines_per_body;
    }
  }
  else {
    iVar10 = *(int *)(lVar12 + 0x2c);
  }
  *(int *)(lVar12 + 0x30) = iVar10;
  goto LAB_0010243d;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 print_files(uint param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  int *piVar12;
  undefined8 uStack_38;
  
  init_parameters((ulong)param_1);
  total_files = 0;
  free(column_vector);
  plVar5 = (long *)xnmalloc((long)columns,0x40);
  column_vector = plVar5;
  if (parallel_files == '\0') {
    if ((int)param_1 < 1) {
      lVar6 = dcgettext(0,"standard input",5);
      *(undefined1 *)((long)plVar5 + 0x39) = 0;
      lVar7 = _stdin;
      *(undefined4 *)(plVar5 + 2) = 0;
      total_files = total_files + 1;
      *plVar5 = lVar7;
      plVar5[1] = lVar6;
      have_read_stdin = 1;
      init_header(&_LC0,0xffffffff);
    }
    else {
      cVar3 = open_file(*param_2,plVar5);
      if (cVar3 == '\0') {
        return uStack_38;
      }
      iVar4 = fileno((FILE *)*plVar5);
      init_header(*param_2,iVar4);
    }
    iVar4 = columns;
    lVar7 = *plVar5;
    lVar6 = plVar5[1];
    *(undefined4 *)((long)plVar5 + 0x2c) = 0;
    if (iVar4 != 1) {
      plVar10 = plVar5 + 8;
      do {
        *(undefined4 *)(plVar10 + 2) = 0;
        plVar11 = plVar10 + 8;
        *plVar10 = lVar7;
        plVar10[1] = lVar6;
        *(undefined1 *)((long)plVar10 + 0x39) = 0;
        *(undefined4 *)((long)plVar10 + 0x2c) = 0;
        plVar10 = plVar11;
      } while (plVar11 != plVar5 + ((ulong)(iVar4 - 2) + 2) * 8);
    }
  }
  else {
    if (param_1 != 0) {
      puVar1 = param_2 + param_1;
      do {
        while ((pcVar2 = (char *)*param_2, *pcVar2 == '-' && (pcVar2[1] == '\0'))) {
          lVar6 = dcgettext(0,"standard input",5);
          lVar7 = _stdin;
          have_read_stdin = 1;
          *plVar5 = _stdin;
          plVar5[1] = lVar6;
          if (lVar7 != 0) goto LAB_001031aa;
LAB_001031f7:
          failed_opens = 1;
          if (ignore_failed_opens == '\0') {
            uVar9 = quotearg_n_style_colon(lVar7,3,pcVar2);
            piVar12 = __errno_location();
                    /* WARNING: Subroutine does not return */
            error(0,*piVar12,&_LC9,uVar9);
          }
          param_2 = param_2 + 1;
          columns = columns + -1;
          if (param_2 == puVar1) goto LAB_0010321b;
        }
        plVar5[1] = (long)pcVar2;
        lVar7 = fopen_safer(pcVar2,&_LC11);
        *plVar5 = lVar7;
        if (lVar7 == 0) goto LAB_001031f7;
LAB_001031aa:
        param_2 = param_2 + 1;
        fadvise(lVar7,2);
        *(undefined4 *)(plVar5 + 2) = 0;
        *(undefined1 *)((long)plVar5 + 0x39) = 0;
        total_files = total_files + 1;
        plVar5 = plVar5 + 8;
      } while (param_2 != puVar1);
    }
LAB_0010321b:
    if (columns == 0) {
      return uStack_38;
    }
    init_header(&_LC0,0xffffffff);
  }
  files_ready_to_read = total_files;
  if (storing_columns != '\0') {
    init_store_cols();
  }
  uVar8 = 1;
  if ((1 < first_page_number) && (cVar3 = skip_to_page(), uVar8 = first_page_number, cVar3 == '\0'))
  {
    return uStack_38;
  }
  page_number = uVar8;
  uVar9 = print_files_part_0();
  return uVar9;
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
    goto LAB_00103409;
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
  local_a8 = &_LC16;
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
    if (((*pcVar4 == 'p') && (pcVar4[1] == 'r')) && (pcVar4[2] == '\0')) break;
    pcVar4 = *(char **)((long)ppuVar6 + 0x10);
    ppuVar6 = (undefined1 **)((long)ppuVar6 + 0x10);
  } while (pcVar4 != (char *)0x0);
  puVar7 = *(undefined1 **)((long)ppuVar6 + 8);
  if (puVar7 == (undefined1 *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    puVar7 = &_LC17;
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) goto LAB_00103804;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC17);
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
LAB_00103804:
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
LAB_00103409:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



void getoptarg(char *param_1,char param_2,char *param_3,undefined4 *param_4)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  cVar1 = *param_1;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (cVar1 == '\0') {
    uVar3 = quote();
    uVar4 = dcgettext(0,"\'-%c\': Invalid argument: %s",5);
    uVar2 = 0;
  }
  else {
    if (9 < (int)cVar1 - 0x30U) {
      *param_3 = cVar1;
      if (param_1[1] == '\0') goto LAB_001039d4;
      param_1 = param_1 + 1;
    }
    uVar2 = xstrtol(param_1,0,10,&local_38,&_LC0);
    if (uVar2 == 0) {
      if (local_38 < 1) {
        uVar3 = quote(param_1);
        uVar4 = dcgettext(0,"\'-%c\' extra characters or invalid number in the argument: %s",5);
        uVar2 = 0;
      }
      else {
        if (local_38 < 0x80000000) {
          *param_4 = (int)local_38;
LAB_001039d4:
          if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return;
        }
        uVar3 = quote(param_1);
        uVar4 = dcgettext(0,"\'-%c\' extra characters or invalid number in the argument: %s",5);
        uVar2 = 0x4b;
      }
    }
    else {
      uVar3 = quote(param_1);
      uVar4 = dcgettext(0,"\'-%c\' extra characters or invalid number in the argument: %s",5);
      uVar2 = -(uVar2 & 1) & 0x4b;
    }
  }
                    /* WARNING: Subroutine does not return */
  error(0,uVar2,uVar4,(int)param_2,uVar3);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 main(int param_1,undefined8 *param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  void *__ptr;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int *piVar11;
  char *pcVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  uint uVar16;
  long in_FS_OFFSET;
  undefined1 auVar17 [16];
  undefined8 *local_68;
  uint local_60;
  char local_5b;
  char local_5a;
  char local_59;
  undefined4 local_4c;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  local_68 = (undefined8 *)0x0;
  if (1 < param_1) {
    local_68 = (undefined8 *)xnmalloc((long)(param_1 + -1),8);
  }
  local_59 = '\0';
  local_5a = '\0';
  local_5b = '\0';
  local_60 = 0;
  lVar15 = 0;
  __ptr = (void *)0x0;
LAB_00105288:
  puVar13 = long_options;
  local_4c = 0xffffffff;
  iVar3 = getopt_long(param_1,param_2,"-0123456789D:FJN:S::TW:abcde::fh:i::l:mn::o:rs::tvw:",
                      long_options,&local_4c);
  if (iVar3 != -1) {
    if (iVar3 - 0x30U < 10) {
      lVar1 = lVar15 + 1;
      if (local_48 <= lVar1) {
        __ptr = (void *)xpalloc(__ptr,&local_48,2,0xffffffffffffffff,1);
      }
      *(char *)((long)__ptr + lVar15) = (char)iVar3;
      *(undefined1 *)((long)__ptr + lVar1) = 0;
      lVar15 = lVar1;
      goto LAB_00105288;
    }
    if (0x81 < iVar3) {
switchD_00105311_caseD_2:
      pcVar12 = (char *)usage(1);
LAB_00105bf6:
      cVar2 = first_last_page(0xfffffffe,0x2b,pcVar12 + 1);
      if (cVar2 != '\0') goto LAB_001055bb;
LAB_00105821:
      lVar15 = 0;
      local_68[local_60] = _optarg;
      local_60 = local_60 + 1;
      goto LAB_00105288;
    }
    if (iVar3 < 1) {
      if (iVar3 == -0x83) {
        uVar9 = proper_name_lite("Roland Huebner","Roland Huebner");
        uVar10 = proper_name_lite("Pete TerMaat","Pete TerMaat");
        version_etc(_stdout,&_LC17,"GNU coreutils",_Version,uVar10,uVar9,0,puVar13);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar3 != -0x82) goto switchD_00105311_caseD_2;
      usage(0);
      goto LAB_00105c39;
    }
    switch(iVar3) {
    case 1:
      if ((first_page_number == 0) && (pcVar12 = _optarg, *_optarg == '+')) goto LAB_00105bf6;
      goto LAB_00105821;
    default:
      goto switchD_00105311_caseD_2;
    case 0x44:
      date_format = _optarg;
      lVar15 = 0;
      goto LAB_00105288;
    case 0x46:
    case 0x66:
      use_form_feed = 1;
      break;
    case 0x4a:
      join_lines = 1;
      lVar15 = 0;
      goto LAB_00105288;
    case 0x4e:
      lVar15 = 0;
      skip_count = 0;
      uVar9 = dcgettext(0,"\'-N NUMBER\' invalid starting line number",5);
      start_line_num = xnumtoimax(_optarg,10,0xffffffff80000000,0x7fffffff,&_LC0,uVar9,0,0);
      goto LAB_00105288;
    case 0x53:
      use_col_separator = '\x01';
      col_sep_string = &_LC0;
      col_sep_length = 0;
      local_59 = '\0';
      if (_optarg != (char *)0x0) {
        separator_string();
        lVar15 = 0;
        goto LAB_00105288;
      }
      break;
    case 0x54:
      extremities = 0;
      lVar15 = 0;
      keep_FF = 0;
      goto LAB_00105288;
    case 0x57:
      lVar15 = 0;
      truncate_lines = '\x01';
      uVar9 = dcgettext(0,"\'-W PAGE_WIDTH\' invalid number of characters",5);
      chars_per_line = xnumtoimax(_optarg,10,1,0x7fffffff,&_LC0,uVar9,0,4);
      local_5a = '\0';
      goto LAB_00105288;
    case 0x61:
      print_across_flag = '\x01';
      lVar15 = 0;
      storing_columns = '\0';
      goto LAB_00105288;
    case 0x62:
      balance_columns = 1;
      lVar15 = 0;
      goto LAB_00105288;
    case 99:
      use_cntrl_prefix = 1;
      lVar15 = 0;
      goto LAB_00105288;
    case 100:
      double_space = 1;
      lVar15 = 0;
      goto LAB_00105288;
    case 0x65:
      if (_optarg != (char *)0x0) {
        getoptarg(_optarg,0x65,&input_tab_char,&chars_per_input_tab);
      }
      untabify_input = 1;
      lVar15 = 0;
      goto LAB_00105288;
    case 0x68:
      custom_header = _optarg;
      lVar15 = 0;
      goto LAB_00105288;
    case 0x69:
      if (_optarg != (char *)0x0) {
        getoptarg(_optarg,0x69,&output_tab_char,&chars_per_output_tab);
      }
      tabify_output = 1;
      lVar15 = 0;
      goto LAB_00105288;
    case 0x6c:
      lVar15 = 0;
      uVar9 = dcgettext(0,"\'-l PAGE_LENGTH\' invalid number of lines",5);
      lines_per_page = xnumtoimax(_optarg,10,1,0x7fffffff,&_LC0,uVar9,0,4);
      goto LAB_00105288;
    case 0x6d:
      parallel_files = '\x01';
      lVar15 = 0;
      storing_columns = '\0';
      goto LAB_00105288;
    case 0x6e:
      numbered_lines = 1;
      if (_optarg != (char *)0x0) {
        lVar15 = 0;
        getoptarg(_optarg,0x6e,&number_separator,&chars_per_number);
        goto LAB_00105288;
      }
      break;
    case 0x6f:
      uVar9 = dcgettext(0,"\'-o MARGIN\' invalid line offset",5);
      chars_per_margin = xnumtoimax(_optarg,10,0,0x7fffffff,&_LC0,uVar9,0,0);
      lVar15 = 0;
      goto LAB_00105288;
    case 0x72:
      ignore_failed_opens = 1;
      lVar15 = 0;
      goto LAB_00105288;
    case 0x73:
      local_5b = use_col_separator;
      local_59 = use_col_separator;
      if (use_col_separator == '\0') {
        if (_optarg != (char *)0x0) {
          separator_string();
        }
        local_59 = '\x01';
        lVar15 = 0;
        local_5b = '\x01';
        goto LAB_00105288;
      }
      break;
    case 0x74:
      extremities = 0;
      lVar15 = 0;
      keep_FF = 1;
      goto LAB_00105288;
    case 0x76:
      use_esc_sequence = 1;
      lVar15 = 0;
      goto LAB_00105288;
    case 0x77:
      uVar9 = dcgettext(0,"\'-w PAGE_WIDTH\' invalid number of characters",5);
      uVar4 = xnumtoimax(_optarg,10,1,0x7fffffff,&_LC0,uVar9,0,4);
      local_5b = truncate_lines;
      local_5a = local_5b;
      if (truncate_lines == '\0') {
        lVar15 = 0;
        local_5a = '\x01';
        local_5b = '\x01';
        chars_per_line = uVar4;
        goto LAB_00105288;
      }
      break;
    case 0x80:
      goto switchD_00105311_caseD_80;
    case 0x81:
      if (_optarg == (char *)0x0) {
        pcVar12 = "\'--pages=FIRST_PAGE[:LAST_PAGE]\' missing argument";
        goto LAB_00105c45;
      }
      cVar2 = first_last_page(local_4c,0);
      if (cVar2 == '\0') {
        uVar9 = quote(_optarg);
        uVar10 = dcgettext(0,"invalid page range %s",5);
                    /* WARNING: Subroutine does not return */
        error(1,0,uVar10,uVar9);
      }
    }
LAB_001055bb:
    lVar15 = 0;
    goto LAB_00105288;
  }
  if (__ptr != (void *)0x0) {
    parse_column_count(__ptr);
    free(__ptr);
  }
  if (date_format == (char *)0x0) {
    pcVar12 = getenv("POSIXLY_CORRECT");
    if ((pcVar12 == (char *)0x0) || (cVar2 = hard_locale(2), cVar2 != '\0')) {
      date_format = "%Y-%m-%d %H:%M";
    }
    else {
      date_format = "%b %e %H:%M %Y";
    }
  }
  pcVar12 = getenv("TZ");
  auVar17 = tzalloc(pcVar12);
  cVar2 = parallel_files;
  puVar14 = auVar17._8_8_;
  localtz = auVar17._0_8_;
  if (first_page_number == 0) {
    first_page_number = 1;
  }
  if (parallel_files != '\0') {
    if (explicit_columns != '\0') {
LAB_00105c39:
      pcVar12 = "cannot specify number of columns when printing in parallel";
LAB_00105c45:
      uVar9 = dcgettext(0,pcVar12,5);
                    /* WARNING: Subroutine does not return */
      error(1,0,uVar9);
    }
    puVar14 = (undefined8 *)0x5;
    pcVar12 = "cannot specify both printing across and printing in parallel";
    if (print_across_flag != '\0') goto LAB_00105c45;
  }
  if (local_5b == '\0') goto LAB_0010540d;
  if (local_5a == '\0') {
    if ((((use_col_separator == '\x01') || (local_59 == '\0')) ||
        ((parallel_files == '\0' && (explicit_columns == '\0')))) ||
       ((truncate_lines == '\0' && (join_lines = 1, col_sep_length < 1)))) goto LAB_0010540d;
  }
  else {
    if ((parallel_files == '\0') && (explicit_columns == '\0')) {
      join_lines = 1;
      goto LAB_0010540d;
    }
    truncate_lines = '\x01';
    if (local_59 == '\0') goto LAB_0010540d;
  }
  use_col_separator = '\x01';
LAB_0010540d:
  if (_optind < param_1) {
    puVar14 = param_2 + _optind;
    uVar16 = (param_1 - _optind) + local_60;
    do {
      uVar9 = *puVar14;
      uVar5 = (ulong)local_60;
      local_60 = local_60 + 1;
      puVar14 = puVar14 + 1;
      local_68[uVar5] = uVar9;
      _optind = param_1;
    } while (local_60 != uVar16);
  }
  if (local_60 == 0) {
    print_files(0,0,puVar14);
  }
  else if (cVar2 == '\0') {
    puVar14 = local_68 + local_60;
    do {
      init_parameters(1);
      total_files = 0;
      free(column_vector);
      puVar6 = (undefined8 *)xnmalloc((long)columns,0x40);
      column_vector = puVar6;
      if (parallel_files == '\0') {
        uVar9 = *local_68;
        cVar2 = open_file(uVar9,puVar6);
        if (cVar2 != '\0') {
          iVar3 = fileno((FILE *)*puVar6);
          init_header(uVar9,iVar3);
          iVar3 = columns;
          uVar9 = *puVar6;
          uVar10 = puVar6[1];
          *(undefined4 *)((long)puVar6 + 0x2c) = 0;
          if (iVar3 != 1) {
            puVar7 = puVar6 + 8;
            do {
              *(undefined4 *)(puVar7 + 2) = 0;
              puVar8 = puVar7 + 8;
              *puVar7 = uVar9;
              puVar7[1] = uVar10;
              *(undefined1 *)((long)puVar7 + 0x39) = 0;
              *(undefined4 *)((long)puVar7 + 0x2c) = 0;
              puVar7 = puVar8;
            } while (puVar8 != puVar6 + ((ulong)(iVar3 - 2) + 2) * 8);
          }
LAB_001054a8:
          files_ready_to_read = total_files;
          if (storing_columns != '\0') {
            init_store_cols();
          }
          uVar5 = 1;
          if ((first_page_number < 2) ||
             (cVar2 = skip_to_page(), uVar5 = first_page_number, cVar2 != '\0')) {
            page_number = uVar5;
            print_files_part_0();
          }
        }
      }
      else {
        cVar2 = open_file(*local_68,puVar6);
        if (cVar2 == '\0') {
          columns = columns + -1;
        }
        if (columns != 0) {
          init_header(&_LC0,0xffffffff);
          goto LAB_001054a8;
        }
      }
      local_68 = local_68 + 1;
    } while (puVar14 != local_68);
  }
  else {
    print_files(local_60,local_68,puVar14);
  }
  free(number_buff);
  free(clump_buff);
  free(column_vector);
  free(line_vector);
  free(end_vector);
  free(buff);
  if ((have_read_stdin != '\0') && (iVar3 = rpl_fclose(_stdin), iVar3 == -1)) {
    uVar9 = dcgettext(0,"standard input",5);
    piVar11 = __errno_location();
                    /* WARNING: Subroutine does not return */
    error(1,*piVar11,uVar9);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return failed_opens;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
switchD_00105311_caseD_80:
  lVar15 = 0;
  parse_column_count(_optarg);
  free(__ptr);
  local_48 = 0;
  __ptr = (void *)0x0;
  goto LAB_00105288;
}


