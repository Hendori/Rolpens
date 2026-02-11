
int cols_ready_to_print(void)

{
  long lVar1;
  int iVar2;
  
  if (columns != 0) {
    iVar2 = 0;
    lVar1 = column_vector;
    do {
      if ((*(uint *)(lVar1 + 0x10) < 2) ||
         (((storing_columns != '\0' && (0 < *(int *)(lVar1 + 0x2c))) && (0 < *(int *)(lVar1 + 0x30))
          ))) {
        iVar2 = iVar2 + 1;
      }
      lVar1 = lVar1 + 0x40;
    } while ((ulong)columns * 0x40 + column_vector != lVar1);
    return iVar2;
  }
  return 0;
}



void hold_file(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  
  lVar3 = column_vector;
  if (parallel_files != '\0') {
    files_ready_to_read = files_ready_to_read + -1;
    *(undefined4 *)(param_1 + 0x10) = 2;
    *(undefined4 *)(param_1 + 0x30) = 0;
    return;
  }
  if (columns != 0) {
    iVar4 = 2 - (uint)storing_columns;
    lVar1 = column_vector + (ulong)columns * 0x40;
    lVar2 = column_vector;
    if (((ulong)columns * 0x40 & 0x40) != 0) {
      *(int *)(column_vector + 0x10) = iVar4;
      lVar2 = lVar3 + 0x40;
      if (lVar3 + 0x40 == lVar1) goto LAB_001000b7;
    }
    do {
      *(int *)(lVar2 + 0x10) = iVar4;
      lVar3 = lVar2 + 0x80;
      *(int *)(lVar2 + 0x50) = iVar4;
      lVar2 = lVar3;
    } while (lVar3 != lVar1);
  }
LAB_001000b7:
  files_ready_to_read = files_ready_to_read + -1;
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}



void reset_status(void)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  
  lVar2 = column_vector;
  if (columns != 0) {
    bVar1 = false;
    lVar5 = (ulong)columns * 0x40 + column_vector;
    lVar3 = column_vector;
    uVar4 = files_ready_to_read;
    do {
      if (*(int *)(lVar3 + 0x10) == 2) {
        *(undefined4 *)(lVar3 + 0x10) = 0;
        uVar4 = uVar4 + 1;
        bVar1 = true;
      }
      lVar3 = lVar3 + 0x40;
    } while (lVar3 != lVar5);
    if (bVar1) {
      files_ready_to_read = uVar4;
    }
  }
  if (storing_columns != '\0') {
    files_ready_to_read = (uint)(*(int *)(lVar2 + 0x10) != 3);
  }
  return;
}



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



undefined8 first_last_page(undefined4 param_1,char param_2,char *param_3)

{
  char *pcVar1;
  uint uVar2;
  undefined8 uVar3;
  char cVar4;
  long in_FS_OFFSET;
  char *local_48;
  ulong local_40;
  ulong local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0xffffffffffffffff;
  uVar2 = xstrtoumax(param_3,&local_48,10,&local_40,&_LC0);
  if ((uVar2 & 0xfffffffd) != 0) {
LAB_001002d6:
    xstrtol_fatal(uVar2,param_1,(int)param_2,long_options,param_3);
    uVar3 = xnumtoimax();
    return uVar3;
  }
  if ((local_48 != param_3) && (local_40 != 0)) {
    cVar4 = *local_48;
    if (cVar4 == ':') {
      pcVar1 = local_48 + 1;
      uVar2 = xstrtoumax(pcVar1,&local_48,10,&local_38,&_LC0);
      if (uVar2 != 0) goto LAB_001002d6;
      if ((local_48 == pcVar1) || (local_38 < local_40)) goto LAB_00100268;
      cVar4 = *local_48;
    }
    if (cVar4 == '\0') {
      first_page_number = local_40;
      last_page_number = local_38;
      uVar3 = 1;
      goto LAB_0010026a;
    }
  }
LAB_00100268:
  uVar3 = 0;
LAB_0010026a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void getoptnum(undefined8 param_1,int param_2,undefined8 param_3)

{
  xnumtoimax(param_1,10,(long)param_2,0x7fffffff,&_LC0,param_3,0,(ulong)(param_2 == 1) << 2);
  return;
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
  
  iVar1 = __sprintf_chk(number_buff,2,0xffffffffffffffff,&_LC1,chars_per_number,line_number);
  uVar3 = (ulong)chars_per_number;
  line_number = line_number + 1;
  pcVar4 = (char *)((int)(iVar1 - chars_per_number) + number_buff);
  pcVar6 = pcVar4;
  if (0 < (int)chars_per_number) {
    do {
      pcVar5 = pcVar6 + 1;
      (**(code **)(param_1 + 0x20))((int)*pcVar6);
      pcVar6 = pcVar5;
    } while (pcVar4 + uVar3 != pcVar5);
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
    goto LAB_001004b2;
  }
  if (timespec_0 == 0) {
    gettime(&timespec_0);
  }
  local_138 = timespec_0;
  uVar7 = uRam0000000000102fa8;
LAB_001004b2:
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

void pad_across_to(int param_1)

{
  char *pcVar1;
  int iVar2;
  
  if (tabify_output != '\0') {
    spaces_not_printed = param_1 - output_position;
    return;
  }
  tabify_output = 0;
  for (iVar2 = output_position + 1; iVar2 <= param_1; iVar2 = iVar2 + 1) {
    pcVar1 = _stdout->_IO_write_ptr;
    if (pcVar1 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = pcVar1 + 1;
      *pcVar1 = ' ';
    }
    else {
      __overflow(_stdout,0x20);
    }
  }
  output_position = param_1;
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



void align_column(long param_1)

{
  char cVar1;
  
  padding_not_printed = *(int *)(param_1 + 0x34);
  if (col_sep_length < padding_not_printed) {
    pad_across_to(padding_not_printed - col_sep_length);
    padding_not_printed = 0;
    if (use_col_separator != '\0') goto LAB_001008ea;
  }
  else if (use_col_separator != '\0') {
LAB_001008ea:
    print_sep_string();
    cVar1 = *(char *)(param_1 + 0x38);
    goto joined_r0x001008f3;
  }
  cVar1 = *(char *)(param_1 + 0x38);
joined_r0x001008f3:
  if (cVar1 == '\0') {
    return;
  }
  add_line_number(param_1);
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
        goto LAB_001009e8;
      }
      goto LAB_001009c1;
    }
    *clump_buff = param_1;
    uVar5 = 1;
joined_r0x00100a6d:
    if (-1 < (int)uVar2) {
      input_position = uVar2 + iVar4;
      goto LAB_001009e8;
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
        goto LAB_001009e8;
      }
LAB_001009c1:
      memset(clump_buff,0x20,(ulong)uVar2);
      uVar5 = uVar2;
      goto joined_r0x00100a6d;
    }
    ppuVar3 = __ctype_b_loc();
    iVar4 = input_position;
    if ((*(byte *)((long)*ppuVar3 + (ulong)param_1 * 2 + 1) & 0x40) != 0) {
      *pbVar1 = param_1;
      uVar5 = 1;
      input_position = input_position + 1;
      goto LAB_001009e8;
    }
    if (use_esc_sequence != '\0') {
LAB_00100ab0:
      *pbVar1 = 0x5c;
      uVar5 = 4;
      __sprintf_chk(&local_34,2,4,&_LC3,param_1);
      pbVar1[1] = local_34;
      pbVar1[2] = local_33;
      pbVar1[3] = local_32;
      input_position = input_position + 4;
      goto LAB_001009e8;
    }
    if (use_cntrl_prefix != '\0') {
      if (-1 < (char)param_1) {
        *pbVar1 = 0x5e;
        uVar5 = 2;
        pbVar1[1] = param_1 ^ 0x40;
        input_position = input_position + 2;
        goto LAB_001009e8;
      }
      goto LAB_00100ab0;
    }
    if (param_1 != 8) {
      *pbVar1 = param_1;
      uVar5 = 1;
      goto LAB_001009e8;
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
LAB_001009e8:
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
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  size_t sVar6;
  char *__s;
  long in_FS_OFFSET;
  undefined1 auStack_148 [280];
  long lStack_30;
  char *pcStack_20;
  
  uVar5 = dcgettext(0,"integer overflow",5);
  __s = (char *)0x1;
  error(1,0,uVar5);
  sVar6 = strlen(__s);
  if (sVar6 < 0x80000000) {
    col_sep_string = __s;
    col_sep_length = (int)sVar6;
    return;
  }
  integer_overflow();
  lStack_30 = *(long *)(in_FS_OFFSET + 0x28);
  output_position = 0;
  pcStack_20 = __s;
  pad_across_to(chars_per_margin);
  print_white_space();
  lVar2 = page_number;
  if (page_number == 0) {
    uVar5 = dcgettext(0,"page number overflow",5);
    error(1,0,uVar5);
  }
  else {
    uVar5 = dcgettext(0,"Page %ju",5);
    __sprintf_chk(auStack_148,2,0x114,uVar5,lVar2);
    iVar1 = header_width_available;
    iVar3 = gnu_mbswidth(auStack_148,0);
    iVar4 = 0;
    if (-1 < iVar1 - iVar3) {
      iVar4 = iVar1 - iVar3;
    }
    __printf_chk(2,"\n\n%*s%s%*s%s%*s%s\n\n\n",chars_per_margin,&_LC0,date_text,iVar4 >> 1,&_LC8,
                 file_text,iVar4 - (iVar4 >> 1),&_LC8,auStack_148);
    print_a_header = 0;
    output_position = 0;
    if (lStack_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void separator_string(char *param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  size_t sVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  undefined1 auStack_140 [280];
  long lStack_28;
  char *pcStack_18;
  
  sVar5 = strlen(param_1);
  if (sVar5 < 0x80000000) {
    col_sep_string = param_1;
    col_sep_length = (int)sVar5;
    return;
  }
  integer_overflow();
  lStack_28 = *(long *)(in_FS_OFFSET + 0x28);
  output_position = 0;
  pcStack_18 = param_1;
  pad_across_to(chars_per_margin);
  print_white_space();
  lVar2 = page_number;
  if (page_number == 0) {
    uVar6 = dcgettext(0,"page number overflow",5);
    error(1,0,uVar6);
  }
  else {
    uVar6 = dcgettext(0,"Page %ju",5);
    __sprintf_chk(auStack_140,2,0x114,uVar6,lVar2);
    iVar1 = header_width_available;
    iVar3 = gnu_mbswidth(auStack_140,0);
    iVar4 = 0;
    if (-1 < iVar1 - iVar3) {
      iVar4 = iVar1 - iVar3;
    }
    __printf_chk(2,"\n\n%*s%s%*s%s%*s%s\n\n\n",chars_per_margin,&_LC0,date_text,iVar4 >> 1,&_LC8,
                 file_text,iVar4 - (iVar4 >> 1),&_LC8,auStack_140);
    print_a_header = 0;
    output_position = 0;
    if (lStack_28 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void print_header(void)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined1 auStack_138 [280];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  output_position = 0;
  pad_across_to(chars_per_margin);
  print_white_space();
  lVar2 = page_number;
  if (page_number == 0) {
    uVar5 = dcgettext(0,"page number overflow",5);
    error(1,0,uVar5);
  }
  else {
    uVar5 = dcgettext(0,"Page %ju",5);
    __sprintf_chk(auStack_138,2,0x114,uVar5,lVar2);
    iVar1 = header_width_available;
    iVar3 = gnu_mbswidth(auStack_138,0);
    iVar4 = 0;
    if (-1 < iVar1 - iVar3) {
      iVar4 = iVar1 - iVar3;
    }
    __printf_chk(2,"\n\n%*s%s%*s%s%*s%s\n\n\n",chars_per_margin,&_LC0,date_text,iVar4 >> 1,&_LC8,
                 file_text,iVar4 - (iVar4 >> 1),&_LC8,auStack_138);
    print_a_header = 0;
    output_position = 0;
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 print_stored(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  long lVar8;
  
  lVar3 = buff;
  lVar8 = (long)*(int *)(param_1 + 0x28);
  pad_vertically = 1;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  iVar2 = *(int *)(line_vector + 4 + lVar8 * 4);
  pcVar7 = (char *)(*(int *)(line_vector + lVar8 * 4) + lVar3);
  if (print_a_header != '\0') {
    print_header();
  }
  lVar4 = column_vector;
  if (*(int *)(param_1 + 0x10) != 1) goto LAB_00100de9;
  if (0 < (int)columns) {
    lVar1 = column_vector + (ulong)columns * 0x40;
    lVar5 = column_vector;
    if (((ulong)columns * 0x40 & 0x40) != 0) {
      lVar5 = column_vector + 0x40;
      *(undefined4 *)(column_vector + 0x10) = 2;
      if (lVar1 == lVar5) goto LAB_00100ebf;
    }
    do {
      *(undefined4 *)(lVar5 + 0x10) = 2;
      lVar6 = lVar5 + 0x80;
      *(undefined4 *)(lVar5 + 0x50) = 2;
      lVar5 = lVar6;
    } while (lVar1 != lVar6);
  }
LAB_00100ebf:
  if (*(int *)(lVar4 + 0x30) < 1) {
    if (extremities != '\0') {
      return 1;
    }
    pad_vertically = 0;
    return 1;
  }
LAB_00100de9:
  if (col_sep_length < padding_not_printed) {
    pad_across_to(padding_not_printed - col_sep_length);
    padding_not_printed = 0;
  }
  if (use_col_separator != '\0') {
    print_sep_string();
  }
  for (; pcVar7 != (char *)(lVar3 + iVar2); pcVar7 = pcVar7 + 1) {
    print_char((int)*pcVar7);
  }
  if ((spaces_not_printed == 0) &&
     (output_position = *(int *)(end_vector + lVar8 * 4) + *(int *)(param_1 + 0x34),
     *(int *)(param_1 + 0x34) - col_sep_length == chars_per_margin)) {
    output_position = output_position - col_sep_length;
    return 1;
  }
  return 1;
}



void close_file(undefined8 *param_1)

{
  _IO_FILE *__stream;
  char *pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  long lVar6;
  undefined8 uVar7;
  byte *pbVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  undefined8 *puVar12;
  bool bVar13;
  
  if (*(int *)(param_1 + 2) == 3) {
    return;
  }
  puVar5 = (uint *)__errno_location();
  uVar11 = ((FILE *)*param_1)->_flags & 0x20;
  if (uVar11 != 0) {
    uVar11 = *puVar5;
  }
  iVar3 = fileno((FILE *)*param_1);
  if (iVar3 == 0) {
    clearerr_unlocked((FILE *)*param_1);
LAB_00100f75:
    if (uVar11 == 0) {
      if (parallel_files == '\0') {
        lVar9 = (ulong)columns * 0x40 + column_vector;
        lVar6 = column_vector;
        if (columns != 0) {
          do {
            *(undefined4 *)(lVar6 + 0x10) = 3;
            if (*(int *)(lVar6 + 0x2c) == 0) {
              *(undefined4 *)(lVar6 + 0x30) = 0;
            }
            lVar6 = lVar6 + 0x40;
          } while (lVar9 != lVar6);
        }
        files_ready_to_read = files_ready_to_read + -1;
        return;
      }
      *(undefined4 *)(param_1 + 2) = 3;
      *(undefined4 *)(param_1 + 6) = 0;
      files_ready_to_read = files_ready_to_read + -1;
      return;
    }
  }
  else {
    iVar3 = rpl_fclose();
    if (iVar3 == 0) goto LAB_00100f75;
    if (uVar11 == 0) {
      uVar11 = *puVar5;
      goto LAB_00100f75;
    }
  }
  uVar7 = quotearg_n_style_colon(0,3,param_1[1]);
  puVar12 = (undefined8 *)0x1;
  error(1,uVar11,&_LC9,uVar7);
  __stream = (_IO_FILE *)*puVar12;
  pbVar8 = (byte *)__stream->_IO_read_ptr;
  if (pbVar8 < __stream->_IO_read_end) {
    __stream->_IO_read_ptr = (char *)(pbVar8 + 1);
    uVar4 = (uint)*pbVar8;
  }
  else {
    uVar4 = __uflow(__stream);
  }
  cVar2 = last_line;
  if (uVar4 == 0xc) {
    pbVar8 = (byte *)__stream->_IO_read_ptr;
    if (*(char *)((long)puVar12 + 0x39) != '\0') {
      if (pbVar8 < __stream->_IO_read_end) {
        __stream->_IO_read_ptr = (char *)(pbVar8 + 1);
        uVar4 = (uint)*pbVar8;
      }
      else {
        uVar4 = __uflow(__stream);
      }
      if (uVar4 == 10) {
        pbVar8 = (byte *)__stream->_IO_read_ptr;
        if (pbVar8 < __stream->_IO_read_end) {
          __stream->_IO_read_ptr = (char *)(pbVar8 + 1);
          uVar4 = (uint)*pbVar8;
        }
        else {
          uVar4 = __uflow(__stream);
        }
        bVar13 = uVar4 == 0xc;
        *(undefined1 *)((long)puVar12 + 0x39) = 0;
        if (last_line != '\0') {
          *(undefined1 *)((long)puVar12 + 0x39) = 1;
        }
        if (uVar4 != 10) goto LAB_001010d4;
        goto LAB_00101170;
      }
      bVar13 = last_line == '\0';
      *(undefined1 *)((long)puVar12 + 0x39) = 0;
      if (bVar13) {
        if (uVar4 == 0xc) {
          pbVar8 = (byte *)__stream->_IO_read_ptr;
          goto LAB_00101231;
        }
      }
      else {
        *(undefined1 *)((long)puVar12 + 0x39) = 1;
        if (uVar4 == 0xc) {
          pbVar8 = (byte *)__stream->_IO_read_ptr;
          goto LAB_00101272;
        }
      }
      bVar13 = false;
      goto LAB_00101093;
    }
    if (last_line != '\0') {
      *(undefined1 *)((long)puVar12 + 0x39) = 1;
LAB_00101272:
      bVar13 = true;
      goto LAB_001010ef;
    }
LAB_00101231:
    bVar13 = true;
  }
  else {
    *(undefined1 *)((long)puVar12 + 0x39) = 0;
    if (cVar2 != '\0') {
      *(undefined1 *)((long)puVar12 + 0x39) = 1;
    }
    bVar13 = false;
    if (uVar4 == 10) {
      bVar13 = false;
      goto LAB_00101170;
    }
LAB_00101093:
    do {
      if (uVar4 == 0xffffffff) {
        close_file(puVar12);
        goto LAB_00101170;
      }
      while (pcVar1 = __stream->_IO_read_ptr, pcVar1 < __stream->_IO_read_end) {
        __stream->_IO_read_ptr = pcVar1 + 1;
        if (*pcVar1 == '\n') goto LAB_00101170;
        if (*pcVar1 == '\f') goto LAB_001010e0;
      }
      uVar4 = __uflow(__stream);
      if (uVar4 == 10) goto LAB_00101170;
LAB_001010d4:
    } while (uVar4 != 0xc);
LAB_001010e0:
    pbVar8 = (byte *)__stream->_IO_read_ptr;
    if (last_line != '\0') {
LAB_001010ef:
      lVar6 = column_vector;
      if (parallel_files == '\0') {
        if (columns != 0) {
          lVar9 = column_vector + (ulong)columns * 0x40;
          if (((ulong)columns * 0x40 & 0x40) != 0) {
            *(undefined1 *)(column_vector + 0x39) = 0;
            lVar6 = lVar6 + 0x40;
            if (lVar9 == lVar6) goto LAB_00101148;
          }
          do {
            *(undefined1 *)(lVar6 + 0x39) = 0;
            lVar10 = lVar6 + 0x80;
            *(undefined1 *)(lVar6 + 0x79) = 0;
            lVar6 = lVar10;
          } while (lVar9 != lVar10);
        }
      }
      else {
        *(undefined1 *)((long)puVar12 + 0x39) = 0;
      }
    }
  }
LAB_00101148:
  if (pbVar8 < __stream->_IO_read_end) {
    __stream->_IO_read_ptr = (char *)(pbVar8 + 1);
    uVar4 = (uint)*pbVar8;
  }
  else {
    uVar4 = __uflow(__stream);
  }
  if (uVar4 == 10) {
    hold_file(puVar12);
  }
  else {
    ungetc(uVar4,__stream);
    hold_file(puVar12);
  }
LAB_00101170:
  if ((skip_count != '\0') && (((parallel_files != '\x01' || (uVar11 == 1)) && (!bVar13)))) {
    line_count = line_count + 1;
  }
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
  long lVar6;
  long lVar7;
  bool bVar8;
  
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
        bVar8 = uVar4 == 0xc;
        *(undefined1 *)((long)param_1 + 0x39) = 0;
        if (last_line != '\0') {
          *(undefined1 *)((long)param_1 + 0x39) = 1;
        }
        if (uVar4 != 10) goto LAB_001010d4;
        goto LAB_00101170;
      }
      bVar8 = last_line == '\0';
      *(undefined1 *)((long)param_1 + 0x39) = 0;
      if (bVar8) {
        if (uVar4 == 0xc) {
          pbVar5 = (byte *)__stream->_IO_read_ptr;
          goto LAB_00101231;
        }
      }
      else {
        *(undefined1 *)((long)param_1 + 0x39) = 1;
        if (uVar4 == 0xc) {
          pbVar5 = (byte *)__stream->_IO_read_ptr;
          goto LAB_00101272;
        }
      }
      bVar8 = false;
      goto LAB_00101093;
    }
    if (last_line != '\0') {
      *(undefined1 *)((long)param_1 + 0x39) = 1;
LAB_00101272:
      bVar8 = true;
      goto LAB_001010ef;
    }
LAB_00101231:
    bVar8 = true;
  }
  else {
    *(undefined1 *)((long)param_1 + 0x39) = 0;
    if (cVar3 != '\0') {
      *(undefined1 *)((long)param_1 + 0x39) = 1;
    }
    bVar8 = false;
    if (uVar4 == 10) {
      bVar8 = false;
      goto LAB_00101170;
    }
LAB_00101093:
    do {
      if (uVar4 == 0xffffffff) {
        close_file(param_1);
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
    if (last_line != '\0') {
LAB_001010ef:
      lVar6 = column_vector;
      if (parallel_files == '\0') {
        if (columns != 0) {
          lVar1 = column_vector + (ulong)columns * 0x40;
          if (((ulong)columns * 0x40 & 0x40) != 0) {
            *(undefined1 *)(column_vector + 0x39) = 0;
            lVar6 = lVar6 + 0x40;
            if (lVar1 == lVar6) goto LAB_00101148;
          }
          do {
            *(undefined1 *)(lVar6 + 0x39) = 0;
            lVar7 = lVar6 + 0x80;
            *(undefined1 *)(lVar6 + 0x79) = 0;
            lVar6 = lVar7;
          } while (lVar1 != lVar7);
        }
      }
      else {
        *(undefined1 *)((long)param_1 + 0x39) = 0;
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
    hold_file(param_1);
  }
  else {
    ungetc(uVar4,__stream);
    hold_file(param_1);
  }
LAB_00101170:
  if ((skip_count != '\0') && (((parallel_files != '\x01' || (param_2 == 1)) && (!bVar8)))) {
    line_count = line_count + 1;
  }
  return;
}



void read_rest_of_line(undefined8 *param_1)

{
  _IO_FILE *__stream;
  char *pcVar1;
  byte *pbVar2;
  int iVar3;
  uint __c;
  
  __stream = (_IO_FILE *)*param_1;
  do {
    while (pcVar1 = __stream->_IO_read_ptr, __stream->_IO_read_end <= pcVar1) {
      iVar3 = __uflow(__stream);
      if (iVar3 == 10) {
        return;
      }
      if (iVar3 == 0xc) goto LAB_00101370;
      if (iVar3 == -1) {
        close_file(param_1);
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
  if (keep_FF != '\0') {
    print_a_FF = 1;
  }
  hold_file(param_1);
  return;
}



undefined8 read_line(undefined8 *param_1)

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
  long lVar10;
  
  iVar8 = input_position;
  p_Var6 = (_IO_FILE *)*param_1;
  pbVar2 = (byte *)p_Var6->_IO_read_ptr;
  if (pbVar2 < p_Var6->_IO_read_end) {
    p_Var6->_IO_read_ptr = (char *)(pbVar2 + 1);
    bVar1 = *pbVar2;
    uVar3 = (uint)bVar1;
    if (bVar1 == 0xc) {
LAB_00101628:
      pbVar2 = (byte *)p_Var6->_IO_read_ptr;
      if (*(char *)((long)param_1 + 0x39) == '\0') goto LAB_00101660;
      if (p_Var6->_IO_read_end <= pbVar2) {
        uVar3 = __uflow(p_Var6);
        if (uVar3 == 10) {
          p_Var6 = (_IO_FILE *)*param_1;
          goto LAB_00101758;
        }
        *(undefined1 *)((long)param_1 + 0x39) = 0;
LAB_00101825:
        if (uVar3 == 0xc) {
          p_Var6 = (_IO_FILE *)*param_1;
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
          *(undefined1 *)((long)param_1 + 0x39) = 0;
          if (uVar3 != 10) goto joined_r0x00101779;
        }
        else {
          uVar3 = __uflow(p_Var6);
          *(undefined1 *)((long)param_1 + 0x39) = 0;
          if (uVar3 != 10) goto LAB_00101825;
        }
        uVar3 = 10;
        goto LAB_00101425;
      }
      *(undefined1 *)((long)param_1 + 0x39) = 0;
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
          ungetc(uVar3,(FILE *)*param_1);
        }
        FF_only = 1;
        if ((print_a_header == '\0') || (FF_only = 1, storing_columns != '\0')) {
LAB_0010169b:
          if (keep_FF != '\0') {
            print_a_FF = 1;
          }
        }
        else {
          pad_vertically = 1;
          print_header();
        }
        hold_file(param_1);
        return 1;
      }
    }
    else {
      *(undefined1 *)((long)param_1 + 0x39) = 0;
      if (bVar1 == 10) goto LAB_00101425;
    }
  }
  else {
    uVar3 = __uflow(p_Var6);
    iVar8 = input_position;
    if (uVar3 == 0xc) {
      p_Var6 = (_IO_FILE *)*param_1;
      goto LAB_00101628;
    }
    *(undefined1 *)((long)param_1 + 0x39) = 0;
    if (uVar3 == 10) goto LAB_00101425;
LAB_001015f8:
    if (uVar3 == 0xffffffff) {
LAB_00101601:
      close_file(param_1);
      return 1;
    }
  }
  unaff_R12D = char_to_clump((int)(char)uVar3);
LAB_00101425:
  if ((truncate_lines == '\0') || (input_position <= chars_per_column)) {
    if ((code *)param_1[4] != store_char) {
      pad_vertically = 1;
      if ((print_a_header != '\0') && (storing_columns == '\0')) {
        print_header();
      }
      iVar8 = separators_not_printed;
      if ((parallel_files != '\0') && (align_empty_cols != '\0')) {
        separators_not_printed = 0;
        iVar7 = 1;
        lVar10 = column_vector;
        if (0 < iVar8) {
          do {
            iVar7 = iVar7 + 1;
            align_column(lVar10);
            separators_not_printed = separators_not_printed + 1;
            lVar10 = lVar10 + 0x40;
          } while (iVar7 <= iVar8);
        }
        align_empty_cols = '\0';
        padding_not_printed = *(int *)((long)param_1 + 0x34);
        spaces_not_printed = chars_per_column;
        if (truncate_lines == '\0') {
          spaces_not_printed = 0;
        }
      }
      if (col_sep_length < padding_not_printed) {
        pad_across_to(padding_not_printed - col_sep_length);
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
    if (uVar3 == 10) {
      empty_line = 0;
      return 1;
    }
    pcVar9 = clump_buff + unaff_R12D;
    pcVar5 = clump_buff;
    if (unaff_R12D != 0) {
      do {
        pcVar4 = pcVar5 + 1;
        (*(code *)param_1[4])((int)*pcVar5);
        pcVar5 = pcVar4;
      } while (pcVar9 != pcVar4);
    }
LAB_00101550:
    p_Var6 = (_IO_FILE *)*param_1;
    pbVar2 = (byte *)p_Var6->_IO_read_ptr;
    if (pbVar2 < p_Var6->_IO_read_end) {
      p_Var6->_IO_read_ptr = (char *)(pbVar2 + 1);
      bVar1 = *pbVar2;
      uVar3 = (uint)bVar1;
      if (bVar1 == 10) {
        return 1;
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
          ungetc(uVar3,(FILE *)*param_1);
        }
        goto LAB_0010169b;
      }
    }
    else {
      uVar3 = __uflow(p_Var6);
      if (uVar3 == 10) {
        return 1;
      }
      if (uVar3 == 0xc) {
        p_Var6 = (_IO_FILE *)*param_1;
        goto LAB_001016e0;
      }
      if (uVar3 == 0xffffffff) goto LAB_00101601;
    }
    iVar8 = input_position;
    uVar3 = char_to_clump((int)(char)uVar3);
    if ((truncate_lines == '\0') || (input_position <= chars_per_column)) {
      pcVar9 = clump_buff + uVar3;
      pcVar5 = clump_buff;
      if (uVar3 != 0) {
        do {
          pcVar4 = pcVar5 + 1;
          (*(code *)param_1[4])((int)*pcVar5);
          pcVar5 = pcVar4;
        } while (pcVar9 != pcVar4);
      }
      goto LAB_00101550;
    }
  }
  input_position = iVar8;
  return 0;
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
      error(0,*piVar4,&_LC9,uVar2);
      uVar2 = 0;
    }
    else {
      uVar2 = 0;
    }
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

void print_files(uint param_1,undefined8 *param_2)

{
  char *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  char cVar4;
  void *pvVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  byte bVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  code *pcVar21;
  int iVar22;
  ulong uVar23;
  byte bVar24;
  undefined1 *puVar25;
  int iVar26;
  int iVar27;
  code *pcVar28;
  ulong uVar29;
  byte bVar30;
  
  lines_per_body = lines_per_page + -10;
  if (lines_per_body < 1) {
    extremities = '\0';
    keep_FF = '\x01';
LAB_00101ecd:
    lines_per_body = lines_per_page;
  }
  else if (extremities == '\0') goto LAB_00101ecd;
  if ((double_space != '\0') &&
     (bVar2 = lines_per_body < 2, lines_per_body = lines_per_body >> 1, bVar2)) {
    lines_per_body = 1;
  }
  if (param_1 == 0) {
    parallel_files = 0;
    uVar15 = (ulong)columns;
    uVar16 = columns;
  }
  else {
    uVar15 = (ulong)param_1;
    uVar16 = param_1;
    if (parallel_files == 0) {
      uVar15 = (ulong)columns;
      uVar16 = columns;
    }
  }
  columns = uVar16;
  if (storing_columns != '\0') {
    balance_columns = '\x01';
  }
  iVar7 = col_sep_length;
  if ((int)uVar15 < 2) {
    storing_columns = '\0';
LAB_00101a1d:
    if (join_lines != '\0') {
LAB_001023b5:
      truncate_lines = '\0';
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
LAB_00101a0a:
        untabify_input = 1;
      }
      truncate_lines = '\x01';
      tabify_output = 1;
      iVar7 = 1;
      goto LAB_00101a1d;
    }
    if (join_lines != '\0') {
      if (col_sep_length == 1) {
        if (*col_sep_string != '\t') goto LAB_00101a0a;
        tabify_output = 1;
      }
      else {
        untabify_input = 1;
        tabify_output = 1;
      }
      goto LAB_001023b5;
    }
    if ((col_sep_length == 1) && (*col_sep_string == '\t')) {
      col_sep_string = &_LC8;
    }
    truncate_lines = '\x01';
    untabify_input = 1;
    tabify_output = 1;
  }
  uVar23 = (ulong)numbered_lines;
  if (numbered_lines != 0) {
    line_count = start_line_num;
    number_width = chars_per_number + 1;
    if (number_separator == '\t') {
      uVar16 = (uint)((int)chars_per_number >> 0x1f) >> 0x1d;
      number_width = chars_per_number + 8 + (uVar16 - (chars_per_number + uVar16 & 7));
    }
    puVar25 = (undefined1 *)(ulong)number_width;
    if (parallel_files != 0) goto LAB_00101a7b;
  }
  puVar25 = (undefined1 *)0x0;
LAB_00101a7b:
  uVar29 = (long)((int)uVar15 + -1) * (long)iVar7;
  uVar18 = uVar29 & 0xffffffff;
  if ((long)(int)uVar29 != uVar29) goto LAB_001027de;
  do {
    iVar7 = chars_per_line - (int)puVar25;
    if (SBORROW4(iVar7,(int)uVar18)) {
      chars_per_column = 0;
LAB_001027b5:
      uVar13 = dcgettext(0,"page width too narrow",5);
      uVar23 = 0;
      puVar25 = (undefined1 *)0x1;
      error(1,0,uVar13);
    }
    else {
      chars_per_column = (iVar7 - (int)uVar18) / (int)uVar15;
      if (chars_per_column < 1) goto LAB_001027b5;
      if ((char)uVar23 != '\0') {
        free(number_buff);
        lVar11 = (long)(int)chars_per_number + 1;
        if (chars_per_number < 0xc) {
          lVar11 = 0xc;
        }
        number_buff = (void *)xmalloc(lVar11);
      }
      free(clump_buff);
      iVar7 = chars_per_input_tab;
      if (chars_per_input_tab < 8) {
        iVar7 = 8;
      }
      clump_buff = (void *)xmalloc((long)iVar7);
      total_files = 0;
      free(column_vector);
      puVar9 = (undefined8 *)xnmalloc((long)(int)columns,0x40);
      column_vector = puVar9;
      if (parallel_files == 0) {
        if ((int)param_1 < 1) {
          uVar12 = dcgettext(0,"standard input",5);
          *(undefined1 *)((long)puVar9 + 0x39) = 0;
          uVar13 = _stdin;
          uVar23 = 0xffffffff;
          *(undefined4 *)(puVar9 + 2) = 0;
          puVar25 = &_LC0;
          total_files = total_files + 1;
          *puVar9 = uVar13;
          puVar9[1] = uVar12;
          have_read_stdin = 1;
          init_header();
        }
        else {
          cVar6 = open_file(*param_2,puVar9);
          if (cVar6 == '\0') {
            return;
          }
          uVar16 = fileno((FILE *)*puVar9);
          puVar25 = (undefined1 *)*param_2;
          uVar23 = (ulong)uVar16;
          init_header();
        }
        uVar16 = columns;
        *(undefined4 *)((long)puVar9 + 0x2c) = 0;
        uVar13 = *puVar9;
        uVar12 = puVar9[1];
        if (uVar16 != 1) {
          puVar10 = puVar9 + 8;
          do {
            *(undefined4 *)(puVar10 + 2) = 0;
            puVar19 = puVar10 + 8;
            *puVar10 = uVar13;
            puVar10[1] = uVar12;
            *(undefined1 *)((long)puVar10 + 0x39) = 0;
            *(undefined4 *)((long)puVar10 + 0x2c) = 0;
            puVar10 = puVar19;
          } while (puVar19 != puVar9 + ((ulong)(uVar16 - 2) + 2) * 8);
        }
      }
      else {
        puVar10 = param_2 + param_1;
        if (param_1 != 0) {
          do {
            while (cVar6 = open_file(*param_2,puVar9), cVar6 == '\0') {
              param_2 = param_2 + 1;
              columns = columns - 1;
              if (param_2 == puVar10) goto LAB_00101b5c;
            }
            param_2 = param_2 + 1;
            puVar9 = puVar9 + 8;
          } while (param_2 != puVar10);
        }
LAB_00101b5c:
        if (columns == 0) {
          return;
        }
        uVar23 = 0xffffffff;
        puVar25 = &_LC0;
        init_header();
      }
      files_ready_to_read = total_files;
      if (storing_columns == '\0') goto LAB_00101b94;
      uVar29 = (long)lines_per_body * (long)(int)columns;
      iVar7 = (int)uVar29;
      param_2 = (undefined8 *)(uVar29 & 0xffffffff);
      if (((((long)iVar7 == uVar29) && (!SCARRY4(iVar7,1))) && (!SCARRY4(chars_per_column,1))) &&
         (lVar11 = (long)(chars_per_column + 1) * (long)iVar7, iVar8 = (int)lVar11, iVar8 == lVar11)
         ) break;
    }
    integer_overflow();
LAB_001027de:
    uVar18 = 0x7fffffff;
  } while( true );
  buff_allocated = (long)iVar8 * ((ulong)use_col_separator + 1);
  free(line_vector);
  line_vector = (void *)xnmalloc((long)(iVar7 + 1),4);
  free(end_vector);
  end_vector = (void *)xnmalloc((long)iVar7,4);
  free(buff);
  buff = (void *)ximalloc(buff_allocated);
LAB_00101b94:
  uVar15 = first_page_number;
  uVar23 = 1;
  if (1 < first_page_number) {
    uVar29 = 1;
    do {
      iVar7 = 1;
      uVar23 = (ulong)columns;
      puVar9 = column_vector;
      if (1 < lines_per_body) {
        do {
          if (0 < (int)uVar23) {
            puVar10 = puVar9;
            iVar8 = 1;
            do {
              while (*(int *)(puVar10 + 2) != 0) {
                iVar8 = iVar8 + 1;
                puVar10 = puVar10 + 8;
                puVar9 = column_vector;
                if ((int)uVar23 < iVar8) goto LAB_001024a4;
              }
              iVar26 = iVar8 + 1;
              skip_read(puVar10,iVar8);
              uVar23 = (ulong)columns;
              puVar9 = column_vector;
              puVar10 = puVar10 + 8;
              iVar8 = iVar26;
            } while (iVar26 <= (int)columns);
          }
LAB_001024a4:
          iVar7 = iVar7 + 1;
        } while (iVar7 < lines_per_body);
      }
      last_line = 1;
      iVar7 = 1;
      if (0 < (int)uVar23) {
        do {
          while (*(int *)(puVar9 + 2) == 0) {
            iVar8 = iVar7 + 1;
            skip_read(puVar9,iVar7);
            uVar23 = (ulong)columns;
            puVar9 = puVar9 + 8;
            iVar7 = iVar8;
            if ((int)columns < iVar8) goto LAB_001024f5;
          }
          iVar7 = iVar7 + 1;
          puVar9 = puVar9 + 8;
        } while (iVar7 <= (int)uVar23);
LAB_001024f5:
        if ((storing_columns != '\0') && (0 < (int)uVar23)) {
          puVar10 = column_vector + uVar23 * 8;
          puVar9 = column_vector;
          do {
            if (*(int *)(puVar9 + 2) != 3) {
              *(undefined4 *)(puVar9 + 2) = 2;
            }
            puVar9 = puVar9 + 8;
          } while (puVar9 != puVar10);
        }
      }
      reset_status();
      last_line = 0;
      if (files_ready_to_read < 1) {
        uVar13 = dcgettext(0,"starting page number %ju exceeds page count %ju",5);
        error(0,0,uVar13,uVar15,uVar29);
        uVar23 = first_page_number;
        if (files_ready_to_read < 1) {
          return;
        }
        break;
      }
      uVar29 = uVar29 + 1;
      uVar23 = first_page_number;
    } while (uVar15 != uVar29);
  }
  puVar9 = column_vector;
  cVar4 = truncate_lines;
  iVar8 = chars_per_column;
  bVar24 = numbered_lines;
  iVar7 = col_sep_length;
  cVar6 = storing_columns;
  uVar16 = columns;
  iVar26 = 0;
  if (((truncate_lines != '\0') &&
      (iVar26 = chars_per_column + chars_per_margin, parallel_files != 0)) && (numbered_lines != 0))
  {
    iVar26 = iVar26 + number_width;
  }
  uVar15 = (ulong)columns;
  iVar22 = chars_per_margin + col_sep_length;
  page_number = uVar23;
  if ((int)columns < 2) {
    uVar16 = 1;
    puVar10 = column_vector;
  }
  else {
    pcVar28 = store_char;
    if (storing_columns == '\0') {
      pcVar28 = print_char;
    }
    pcVar21 = print_stored;
    uVar17 = 1;
    if (storing_columns == '\0') {
      pcVar21 = read_line;
    }
    bVar30 = parallel_files ^ 1;
    puVar10 = column_vector;
    iVar27 = iVar22;
    do {
      while( true ) {
        puVar10[3] = pcVar21;
        bVar14 = 0;
        puVar10[4] = pcVar28;
        if (bVar24 != 0) {
          bVar14 = uVar17 == 1 | bVar30;
        }
        *(byte *)(puVar10 + 7) = bVar14;
        *(int *)((long)puVar10 + 0x34) = iVar27;
        if (cVar4 != '\0') break;
        uVar17 = uVar17 + 1;
        iVar26 = 0;
        iVar22 = 0;
        puVar10 = puVar10 + 8;
        iVar27 = 0;
        if (uVar17 == uVar16) goto LAB_00101ca5;
      }
      iVar22 = iVar7 + iVar26;
      uVar17 = uVar17 + 1;
      puVar10 = puVar10 + 8;
      iVar26 = iVar22 + iVar8;
      iVar27 = iVar22;
    } while (uVar17 != uVar16);
LAB_00101ca5:
    puVar10 = puVar9 + (ulong)(uVar16 - 1) * 8;
  }
  pcVar28 = read_line;
  pcVar21 = print_char;
  if ((cVar6 != '\0') && (balance_columns != '\0')) {
    pcVar28 = print_stored;
    pcVar21 = store_char;
  }
  puVar10[3] = pcVar28;
  puVar10[4] = pcVar21;
  if (bVar24 != 0) {
    bVar24 = parallel_files ^ 1 | uVar16 == 1;
  }
  *(byte *)(puVar10 + 7) = bVar24;
  *(int *)((long)puVar10 + 0x34) = iVar22;
  line_number = line_count;
  if (cVar6 != '\0') goto LAB_001020a2;
  do {
    iVar7 = lines_per_body;
    if ((int)uVar15 != 0) {
      puVar10 = puVar9;
      do {
        iVar8 = 0;
        if (*(int *)(puVar10 + 2) == 0) {
          iVar8 = iVar7;
        }
        puVar19 = puVar10 + 8;
        *(int *)(puVar10 + 6) = iVar8;
        puVar10 = puVar19;
      } while (puVar19 != puVar9 + uVar15 * 8);
    }
LAB_00101d58:
    uVar16 = (uint)uVar15;
    iVar7 = cols_ready_to_print();
    if (iVar7 == 0) {
      return;
    }
    if (extremities != '\0') {
      print_a_header = 1;
    }
    pad_vertically = 0;
    iVar7 = lines_per_body;
    if (double_space != '\0') {
      iVar7 = lines_per_body * 2;
    }
    bVar24 = 0;
    if (iVar7 < 1) {
      if ((iVar7 == 0) && (0 < (int)uVar16)) goto LAB_00101fe2;
LAB_00102023:
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
      do {
        iVar8 = cols_ready_to_print();
        pad_vertically = bVar24;
        if (iVar8 == 0) goto LAB_0010200a;
        output_position = 0;
        spaces_not_printed = 0;
        separators_not_printed = 0;
        pad_vertically = 0;
        align_empty_cols = 0;
        empty_line = '\x01';
        if (0 < (int)columns) {
          iVar8 = 1;
          puVar9 = column_vector;
          do {
            input_position = 0;
            if ((*(int *)(puVar9 + 6) < 1) && (*(int *)(puVar9 + 2) != 1)) {
              if (parallel_files != 0) {
                if (empty_line == '\0') {
LAB_00102258:
                  align_column(puVar9);
                }
                else {
LAB_00101eb6:
                  align_empty_cols = 1;
                }
              }
            }
            else {
              padding_not_printed = *(undefined4 *)((long)puVar9 + 0x34);
              FF_only = '\0';
              cVar6 = (*(code *)puVar9[3])(puVar9);
              if (cVar6 == '\0') {
                read_rest_of_line(puVar9);
              }
              bVar30 = pad_vertically;
              iVar26 = *(int *)(puVar9 + 6);
              bVar24 = bVar24 | pad_vertically;
              *(int *)(puVar9 + 6) = iVar26 + -1;
              if ((iVar26 + -1 < 1) && (iVar26 = cols_ready_to_print(), iVar26 == 0)) {
                if (bVar30 == 0) goto LAB_00102280;
                goto LAB_00101f5e;
              }
              if ((parallel_files != 0) && (iVar26 = *(int *)(puVar9 + 2), iVar26 != 0)) {
                if (empty_line != '\0') goto LAB_00101eb6;
                if ((iVar26 == 3) || ((iVar26 == 2 && (FF_only != '\0')))) goto LAB_00102258;
              }
            }
            if (use_col_separator != 0) {
              separators_not_printed = separators_not_printed + 1;
            }
            iVar8 = iVar8 + 1;
            puVar9 = puVar9 + 8;
          } while (iVar8 <= (int)columns);
          if (pad_vertically != 0) {
LAB_00101f5e:
            pcVar1 = _stdout->_IO_write_ptr;
            if (pcVar1 < _stdout->_IO_write_end) {
              _stdout->_IO_write_ptr = pcVar1 + 1;
              *pcVar1 = '\n';
            }
            else {
              __overflow(_stdout,10);
            }
            iVar7 = iVar7 + -1;
          }
        }
        iVar8 = cols_ready_to_print();
        if (iVar8 == 0) {
LAB_00102280:
          if (extremities == '\0') break;
        }
        if ((double_space != '\0') && (bVar24 != 0)) {
          pcVar1 = _stdout->_IO_write_ptr;
          if (pcVar1 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = pcVar1 + 1;
            *pcVar1 = '\n';
          }
          else {
            __overflow(_stdout,10);
          }
          iVar7 = iVar7 + -1;
        }
      } while (0 < iVar7);
      pad_vertically = bVar24;
      if ((iVar7 == 0) &&
         (puVar9 = column_vector, uVar16 = columns, bVar24 = pad_vertically, 0 < (int)columns)) {
LAB_00101fe2:
        pad_vertically = bVar24;
        iVar7 = 1;
        do {
          if (*(int *)(puVar9 + 2) == 0) {
            *(undefined1 *)((long)puVar9 + 0x39) = 1;
          }
          iVar7 = iVar7 + 1;
          puVar9 = puVar9 + 8;
        } while (iVar7 <= (int)uVar16);
        iVar7 = 0;
      }
LAB_0010200a:
      if ((pad_vertically == 0) || (extremities == '\0')) goto LAB_00102023;
      iVar7 = iVar7 + 5;
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
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
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
    page_number = page_number + 1;
    if (last_page_number < page_number) {
      return;
    }
    reset_status();
    uVar15 = (ulong)columns;
    puVar9 = column_vector;
  } while (storing_columns == '\0');
LAB_001020a2:
  buff_current = 0;
  uVar16 = (int)uVar15 - (uint)(balance_columns == '\0');
  if ((int)uVar16 < 1) {
    iVar7 = 0;
    lVar11 = 0;
    uVar23 = 0;
  }
  else {
    puVar10 = puVar9;
    if (((int)(puVar9 + (ulong)uVar16 * 8) - (int)puVar9 & 0x40U) == 0) goto LAB_001020f0;
    *(undefined4 *)((long)puVar9 + 0x2c) = 0;
    for (puVar10 = puVar9 + 8; puVar10 != puVar9 + (ulong)uVar16 * 8; puVar10 = puVar10 + 0x10) {
LAB_001020f0:
      *(undefined4 *)((long)puVar10 + 0x2c) = 0;
      *(undefined4 *)((long)puVar10 + 0x6c) = 0;
    }
    iVar7 = 0;
    iVar8 = 1;
    uVar23 = 0;
    do {
      iVar26 = lines_per_body;
      if (files_ready_to_read == 0) break;
      *(int *)(puVar9 + 5) = (int)uVar23;
      iVar22 = iVar26;
      while (iVar22 != 0) {
        if (*(int *)(puVar9 + 2) == 0) {
          input_position = 0;
          cVar6 = read_line(puVar9);
          if (cVar6 == '\0') {
            read_rest_of_line(puVar9);
          }
          iVar22 = buff_current;
          pvVar5 = line_vector;
          if ((*(int *)(puVar9 + 2) == 0) || (iVar7 != buff_current)) {
            *(int *)((long)puVar9 + 0x2c) = *(int *)((long)puVar9 + 0x2c) + 1;
            uVar3 = input_position;
            *(int *)((long)pvVar5 + uVar23 * 4) = iVar7;
            *(undefined4 *)((long)end_vector + uVar23 * 4) = uVar3;
            uVar23 = (ulong)((int)uVar23 + 1);
            iVar7 = iVar22;
          }
        }
        if (iVar26 == 1) break;
        iVar26 = iVar26 + -1;
        iVar22 = files_ready_to_read;
      }
      iVar8 = iVar8 + 1;
      puVar9 = puVar9 + 8;
    } while (iVar8 <= (int)uVar16);
    uVar15 = (ulong)columns;
    lVar11 = uVar23 << 2;
    puVar9 = column_vector;
  }
  cVar6 = balance_columns;
  *(int *)((long)line_vector + lVar11) = iVar7;
  iVar7 = (int)uVar15;
  puVar10 = puVar9;
  if (cVar6 == '\0') {
    if (iVar7 != 1) {
LAB_001021ff:
      puVar10 = puVar9 + (ulong)(iVar7 - 1) * 8;
      puVar19 = puVar9;
      do {
        puVar20 = puVar19 + 8;
        *(undefined4 *)(puVar19 + 6) = *(undefined4 *)((long)puVar19 + 0x2c);
        puVar19 = puVar20;
      } while (puVar10 != puVar20);
      if (cVar6 != '\0') goto LAB_00102227;
    }
    if (*(int *)(puVar10 + 2) == 0) {
      *(int *)(puVar10 + 6) = lines_per_body;
    }
    else {
      *(undefined4 *)(puVar10 + 6) = 0;
    }
  }
  else {
    if (0 < iVar7) {
      iVar22 = 0;
      iVar26 = 1;
      iVar8 = (int)uVar23 / iVar7;
      puVar19 = puVar9;
      do {
        *(int *)(puVar19 + 5) = iVar22;
        iVar27 = iVar8;
        if (iVar26 <= (int)uVar23 % iVar7) {
          iVar27 = iVar8 + 1;
        }
        iVar26 = iVar26 + 1;
        *(int *)((long)puVar19 + 0x2c) = iVar27;
        iVar22 = iVar22 + iVar27;
        puVar19 = puVar19 + 8;
      } while (iVar26 != iVar7 + 1);
    }
    if (iVar7 != 1) goto LAB_001021ff;
LAB_00102227:
    *(undefined4 *)(puVar10 + 6) = *(undefined4 *)((long)puVar10 + 0x2c);
  }
  goto LAB_00101d58;
}



undefined1  [16] parse_column_count(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = dcgettext(0,"invalid number of columns",5);
  columns = xnumtoimax(param_1,10,1,0x7fffffff,&_LC0,uVar1);
  explicit_columns = 1;
  return ZEXT816(4) << 0x40;
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
      if (param_1[1] != '\0') {
        param_1 = param_1 + 1;
        goto LAB_00102e25;
      }
LAB_00102e74:
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00102ec9;
    }
LAB_00102e25:
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
          goto LAB_00102e74;
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
  error(0,uVar2,uVar4,(int)param_2,uVar3);
  usage(1);
LAB_00102ec9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 main(int param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  void *__ptr;
  undefined8 uVar4;
  undefined8 uVar5;
  int *piVar6;
  char *pcVar7;
  undefined8 *puVar8;
  undefined8 *extraout_RDX;
  undefined8 *extraout_RDX_00;
  long lVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  long in_FS_OFFSET;
  undefined1 auVar13 [16];
  long local_68;
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
  local_68 = 0;
  if (1 < param_1) {
    local_68 = xnmalloc((long)(param_1 + -1),8);
  }
  local_59 = '\0';
  local_5a = '\0';
  local_5b = '\0';
  local_60 = 0;
  lVar10 = 0;
  __ptr = (void *)0x0;
LAB_00104728:
  local_4c = 0xffffffff;
  iVar2 = getopt_long(param_1,param_2,"-0123456789D:FJN:S::TW:abcde::fh:i::l:mn::o:rs::tvw:",
                      long_options,&local_4c);
  if (iVar2 != -1) {
    if (iVar2 - 0x30U < 10) {
      lVar9 = lVar10 + 1;
      if (local_48 <= lVar9) {
        __ptr = (void *)xpalloc(__ptr,&local_48,2,0xffffffffffffffff,1);
      }
      *(char *)((long)__ptr + lVar10) = (char)iVar2;
      *(undefined1 *)((long)__ptr + lVar9) = 0;
      lVar10 = lVar9;
      goto LAB_00104728;
    }
    if (0x81 < iVar2) {
switchD_001047b1_caseD_2:
      pcVar7 = (char *)usage(1);
LAB_00104ed0:
      cVar1 = first_last_page(0xfffffffe,0x2b,pcVar7 + 1);
      if (cVar1 != '\0') goto LAB_001049ac;
LAB_00104bca:
      lVar10 = 0;
      *(char **)(local_68 + (ulong)local_60 * 8) = _optarg;
      local_60 = local_60 + 1;
      goto LAB_00104728;
    }
    if (iVar2 < 1) {
      if (iVar2 == -0x83) {
        uVar4 = proper_name_lite("Roland Huebner","Roland Huebner");
        uVar5 = proper_name_lite("Pete TerMaat","Pete TerMaat");
        version_etc(_stdout,&_LC17,"GNU coreutils",_Version,uVar5,uVar4,0,uVar5);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar2 != -0x82) goto switchD_001047b1_caseD_2;
      usage(0);
      goto LAB_00104f13;
    }
    switch(iVar2) {
    case 1:
      if ((first_page_number == 0) && (pcVar7 = _optarg, *_optarg == '+')) goto LAB_00104ed0;
      goto LAB_00104bca;
    default:
      goto switchD_001047b1_caseD_2;
    case 0x44:
switchD_001047b1_caseD_44:
      date_format = _optarg;
      lVar10 = 0;
      goto LAB_00104728;
    case 0x46:
    case 0x66:
      use_form_feed = 1;
      break;
    case 0x4a:
      join_lines = 1;
      lVar10 = 0;
      goto LAB_00104728;
    case 0x4e:
      lVar10 = 0;
      skip_count = 0;
      uVar4 = dcgettext(0,"\'-N NUMBER\' invalid starting line number",5);
      start_line_num = getoptnum(_optarg,0x80000000,uVar4);
      goto LAB_00104728;
    case 0x53:
      use_col_separator = '\x01';
      col_sep_string = &_LC0;
      col_sep_length = 0;
      local_59 = '\0';
      if (_optarg != (char *)0x0) {
        separator_string();
        lVar10 = 0;
        goto LAB_00104728;
      }
      break;
    case 0x54:
      extremities = 0;
      lVar10 = 0;
      keep_FF = 0;
      goto LAB_00104728;
    case 0x57:
      lVar10 = 0;
      truncate_lines = '\x01';
      uVar4 = dcgettext(0,"\'-W PAGE_WIDTH\' invalid number of characters",5);
      chars_per_line = getoptnum(_optarg,1,uVar4);
      local_5a = '\0';
      goto LAB_00104728;
    case 0x61:
      print_across_flag = '\x01';
      lVar10 = 0;
      storing_columns = 0;
      goto LAB_00104728;
    case 0x62:
      balance_columns = 1;
      lVar10 = 0;
      goto LAB_00104728;
    case 99:
      use_cntrl_prefix = 1;
      lVar10 = 0;
      goto LAB_00104728;
    case 100:
      double_space = 1;
      lVar10 = 0;
      goto LAB_00104728;
    case 0x65:
      if (_optarg != (char *)0x0) {
        getoptarg(_optarg,0x65,&input_tab_char,&chars_per_input_tab);
      }
      untabify_input = 1;
      lVar10 = 0;
      goto LAB_00104728;
    case 0x68:
      custom_header = _optarg;
      lVar10 = 0;
      goto LAB_00104728;
    case 0x69:
      if (_optarg != (char *)0x0) {
        getoptarg(_optarg,0x69,&output_tab_char,&chars_per_output_tab);
      }
      tabify_output = 1;
      lVar10 = 0;
      goto LAB_00104728;
    case 0x6c:
      lVar10 = 0;
      uVar4 = dcgettext(0,"\'-l PAGE_LENGTH\' invalid number of lines",5);
      lines_per_page = getoptnum(_optarg,1,uVar4);
      goto LAB_00104728;
    case 0x6d:
      parallel_files = '\x01';
      lVar10 = 0;
      storing_columns = 0;
      goto LAB_00104728;
    case 0x6e:
      numbered_lines = 1;
      if (_optarg != (char *)0x0) {
        lVar10 = 0;
        getoptarg(_optarg,0x6e,&number_separator,&chars_per_number);
        goto LAB_00104728;
      }
      break;
    case 0x6f:
      lVar10 = 0;
      uVar4 = dcgettext(0,"\'-o MARGIN\' invalid line offset",5);
      chars_per_margin = getoptnum(_optarg,0,uVar4);
      goto LAB_00104728;
    case 0x72:
      ignore_failed_opens = 1;
      lVar10 = 0;
      goto LAB_00104728;
    case 0x73:
      local_5b = use_col_separator;
      local_59 = use_col_separator;
      if (use_col_separator == '\0') {
        if (_optarg != (char *)0x0) {
          separator_string();
        }
        local_59 = '\x01';
        lVar10 = 0;
        local_5b = '\x01';
        goto LAB_00104728;
      }
      break;
    case 0x74:
      extremities = 0;
      lVar10 = 0;
      keep_FF = 1;
      goto LAB_00104728;
    case 0x76:
      use_esc_sequence = 1;
      lVar10 = 0;
      goto LAB_00104728;
    case 0x77:
      uVar4 = dcgettext(0,"\'-w PAGE_WIDTH\' invalid number of characters",5);
      uVar3 = getoptnum(_optarg,1,uVar4);
      local_5b = truncate_lines;
      local_5a = local_5b;
      if (truncate_lines == '\0') {
        lVar10 = 0;
        local_5a = '\x01';
        local_5b = '\x01';
        chars_per_line = uVar3;
        goto LAB_00104728;
      }
      break;
    case 0x80:
      goto switchD_001047b1_caseD_80;
    case 0x81:
      if (_optarg == (char *)0x0) {
        pcVar7 = "\'--pages=FIRST_PAGE[:LAST_PAGE]\' missing argument";
        goto LAB_00104f1f;
      }
      cVar1 = first_last_page(local_4c,0);
      if (cVar1 == '\0') {
        uVar4 = quote(_optarg);
        uVar5 = dcgettext(0,"invalid page range %s",5);
        error(1,0,uVar5,uVar4);
        goto switchD_001047b1_caseD_44;
      }
    }
LAB_001049ac:
    lVar10 = 0;
    goto LAB_00104728;
  }
  if (__ptr != (void *)0x0) {
    parse_column_count(__ptr);
    free(__ptr);
  }
  if (date_format == (char *)0x0) {
    pcVar7 = getenv("POSIXLY_CORRECT");
    if ((pcVar7 == (char *)0x0) || (cVar1 = hard_locale(2), cVar1 != '\0')) {
      date_format = "%Y-%m-%d %H:%M";
    }
    else {
      date_format = "%b %e %H:%M %Y";
    }
  }
  pcVar7 = getenv("TZ");
  auVar13 = tzalloc(pcVar7);
  cVar1 = parallel_files;
  puVar8 = auVar13._8_8_;
  localtz = auVar13._0_8_;
  if (first_page_number == 0) {
    first_page_number = 1;
  }
  if (parallel_files != '\0') {
    if (explicit_columns == '\0') {
      puVar8 = (undefined8 *)0x5;
      pcVar7 = "cannot specify both printing across and printing in parallel";
      if (print_across_flag == '\0') goto LAB_00104875;
    }
    else {
LAB_00104f13:
      pcVar7 = "cannot specify number of columns when printing in parallel";
    }
LAB_00104f1f:
    uVar4 = dcgettext(0,pcVar7,5);
    error(1,0,uVar4);
    goto LAB_00104f37;
  }
LAB_00104875:
  if (local_5b != '\0') {
    if (local_5a == '\0') {
      if ((((use_col_separator != '\x01') && (local_59 != '\0')) &&
          ((parallel_files != '\0' || (explicit_columns != '\0')))) &&
         ((truncate_lines != '\0' || (join_lines = 1, 0 < col_sep_length)))) {
LAB_001048a6:
        use_col_separator = '\x01';
      }
    }
    else if ((parallel_files == '\0') && (explicit_columns == '\0')) {
      join_lines = 1;
    }
    else {
      truncate_lines = '\x01';
      if (local_59 != '\0') goto LAB_001048a6;
    }
  }
  if (_optind < param_1) {
    puVar8 = param_2 + _optind;
    uVar11 = (param_1 - _optind) + local_60;
    do {
      uVar4 = *puVar8;
      uVar12 = (ulong)local_60;
      local_60 = local_60 + 1;
      puVar8 = puVar8 + 1;
      *(undefined8 *)(local_68 + uVar12 * 8) = uVar4;
      _optind = param_1;
    } while (local_60 != uVar11);
  }
  if (local_60 == 0) {
    print_files(0,0,puVar8);
  }
  else {
    if (cVar1 != '\0') goto LAB_00104eb3;
    lVar10 = local_68;
    do {
      lVar9 = lVar10 + 8;
      print_files(1,lVar10,puVar8);
      puVar8 = extraout_RDX;
      lVar10 = lVar9;
    } while (local_68 + (ulong)local_60 * 8 != lVar9);
  }
  while( true ) {
    free(number_buff);
    free(clump_buff);
    free(column_vector);
    free(line_vector);
    free(end_vector);
    free(buff);
    if ((have_read_stdin == '\0') || (iVar2 = rpl_fclose(_stdin), iVar2 != -1)) break;
    uVar4 = dcgettext(0,"standard input",5);
    piVar6 = __errno_location();
    error(1,*piVar6,uVar4);
    puVar8 = extraout_RDX_00;
LAB_00104eb3:
    print_files(local_60,local_68,puVar8);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return failed_opens;
  }
LAB_00104f37:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
switchD_001047b1_caseD_80:
  lVar10 = 0;
  parse_column_count(_optarg);
  free(__ptr);
  local_48 = 0;
  __ptr = (void *)0x0;
  goto LAB_00104728;
}


