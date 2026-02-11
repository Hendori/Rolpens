
void fmt_paragraph(void)

{
  byte bVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  undefined1 *puVar13;
  int iVar15;
  undefined1 *puVar16;
  long lVar17;
  undefined1 *puVar14;
  
  iVar10 = max_width;
  puVar8 = word_limit;
  puVar16 = word_limit + -0x28;
  uVar2 = *(undefined4 *)(word_limit + 8);
  *(undefined8 *)(word_limit + 0x18) = 0;
  *(int *)(puVar8 + 8) = iVar10;
  iVar9 = goal_width;
  iVar7 = first_indent;
  iVar6 = other_indent;
  iVar5 = last_line_length;
  for (; (undefined1 *)0x10147f < puVar16; puVar16 = puVar16 + -0x28) {
    iVar15 = iVar6;
    if (puVar16 == unused_word_type) {
      iVar15 = iVar7;
    }
    lVar12 = 0x7fffffffffffffff;
    iVar15 = iVar15 + *(int *)(puVar16 + 8);
    puVar14 = puVar16;
    do {
      puVar13 = puVar14 + 0x28;
      if (puVar8 == puVar13) {
        lVar11 = 0;
      }
      else {
        lVar11 = (long)((iVar9 - iVar15) * 10);
        lVar11 = lVar11 * lVar11;
        if (puVar8 != *(undefined1 **)(puVar14 + 0x48)) {
          lVar17 = (long)((iVar15 - *(int *)(puVar14 + 0x3c)) * 10);
          lVar11 = lVar11 + (lVar17 * lVar17 >> 1);
        }
      }
      lVar11 = lVar11 + *(long *)(puVar14 + 0x40);
      if ((puVar16 == unused_word_type) && (0 < iVar5)) {
        lVar17 = (long)((iVar15 - iVar5) * 10);
        lVar11 = lVar11 + (lVar17 * lVar17 >> 1);
      }
      if (lVar11 < lVar12) {
        *(undefined1 **)(puVar16 + 0x20) = puVar13;
        *(int *)(puVar16 + 0x14) = iVar15;
        lVar12 = lVar11;
      }
    } while ((puVar8 != puVar13) &&
            (iVar15 = iVar15 + *(int *)(puVar14 + 0x30) + *(int *)(puVar14 + 0xc), puVar14 = puVar13
            , iVar15 < iVar10));
    lVar11 = 0x1324;
    if (unused_word_type < puVar16) {
      bVar1 = puVar16[-0x18];
      if ((bVar1 & 2) == 0) {
        lVar11 = 0xce4;
        if ((((bVar1 & 4) == 0) && (lVar11 = 0x1324, (undefined1 *)0x1014a8 < puVar16)) &&
           ((puVar16[-0x40] & 8) != 0)) {
          auVar4._8_8_ = 0;
          auVar4._0_8_ = SUB168(SEXT816(40000),8);
          lVar11 = SUB168((auVar4 << 0x40 | ZEXT816(40000)) /
                          SEXT816((long)(*(int *)(puVar16 + -0x20) + 2)),0) + 0x1324;
        }
      }
      else {
        lVar11 = (ulong)(-(uint)((bVar1 & 8) == 0) & 0x58804) + 0x960;
      }
    }
    if ((puVar16[0x10] & 1) == 0) {
      if ((puVar16[0x10] & 8) != 0) {
        auVar3._8_8_ = 0;
        auVar3._0_8_ = SUB168(SEXT816(0x57e4),8);
        lVar11 = lVar11 + SUB168((auVar3 << 0x40 | ZEXT816(0x57e4)) /
                                 SEXT816((long)(*(int *)(puVar16 + 8) + 2)),0);
      }
    }
    else {
      lVar11 = lVar11 + -0x640;
    }
    *(long *)(puVar16 + 0x18) = lVar12 + lVar11;
  }
  *(undefined4 *)(puVar8 + 8) = uVar2;
  return;
}



void get_space(_IO_FILE *param_1,uint param_2)

{
  int iVar1;
  byte *pbVar2;
  
  do {
    while (param_2 != 0x20) {
      if (param_2 != 9) {
        return;
      }
      tabs = 1;
      iVar1 = in_column + 7;
      if (-1 < in_column) {
        iVar1 = in_column;
      }
      in_column = (iVar1 >> 3) * 8 + 8;
      pbVar2 = (byte *)param_1->_IO_read_ptr;
      if (pbVar2 < param_1->_IO_read_end) goto LAB_00100244;
LAB_0010026d:
      param_2 = __uflow(param_1);
    }
    in_column = in_column + 1;
    pbVar2 = (byte *)param_1->_IO_read_ptr;
    if (param_1->_IO_read_end <= pbVar2) goto LAB_0010026d;
LAB_00100244:
    param_1->_IO_read_ptr = (char *)(pbVar2 + 1);
    param_2 = (uint)*pbVar2;
  } while( true );
}



void get_prefix(_IO_FILE *param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  
  pbVar4 = (byte *)param_1->_IO_read_ptr;
  in_column = 0;
  if (pbVar4 < param_1->_IO_read_end) {
    param_1->_IO_read_ptr = (char *)(pbVar4 + 1);
    uVar3 = (uint)*pbVar4;
  }
  else {
    uVar3 = __uflow(param_1);
  }
  uVar3 = get_space(param_1,uVar3);
  next_prefix_indent = in_column;
  if (prefix_length == 0) {
    if (prefix_lead_space < in_column) {
      next_prefix_indent = prefix_lead_space;
    }
  }
  else {
    bVar1 = *prefix;
    pbVar4 = prefix;
    while( true ) {
      if (bVar1 == 0) {
        get_space(param_1,uVar3);
        return;
      }
      if (bVar1 != uVar3) break;
      in_column = in_column + 1;
      pbVar2 = (byte *)param_1->_IO_read_ptr;
      if (pbVar2 < param_1->_IO_read_end) {
        param_1->_IO_read_ptr = (char *)(pbVar2 + 1);
        uVar3 = (uint)*pbVar2;
      }
      else {
        uVar3 = __uflow(param_1);
      }
      bVar1 = pbVar4[1];
      pbVar4 = pbVar4 + 1;
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void put_word(undefined8 *param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  
  uVar5 = *(uint *)(param_1 + 1);
  pbVar2 = (byte *)*param_1;
  if (uVar5 != 0) {
    pbVar3 = pbVar2;
    do {
      pbVar4 = pbVar3 + 1;
      bVar1 = *pbVar3;
      pbVar3 = (byte *)_stdout->_IO_write_ptr;
      if (pbVar3 < _stdout->_IO_write_end) {
        _stdout->_IO_write_ptr = (char *)(pbVar3 + 1);
        *pbVar3 = bVar1;
      }
      else {
        __overflow(_stdout,(uint)bVar1);
      }
      pbVar3 = pbVar4;
    } while (pbVar4 != pbVar2 + uVar5);
    uVar5 = *(uint *)(param_1 + 1);
  }
  out_column = out_column + uVar5;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void put_space(int param_1)

{
  uint uVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = out_column + param_1;
  if (tabs != '\0') {
    uVar3 = uVar1 + 7;
    if (-1 < (int)uVar1) {
      uVar3 = uVar1;
    }
    if (out_column + 1 < (int)(uVar3 & 0xfffffff8)) {
      do {
        pcVar2 = _stdout->_IO_write_ptr;
        if (pcVar2 < _stdout->_IO_write_end) {
          _stdout->_IO_write_ptr = pcVar2 + 1;
          *pcVar2 = '\t';
        }
        else {
          __overflow(_stdout,9);
        }
        iVar4 = out_column + 7;
        if (-1 < out_column) {
          iVar4 = out_column;
        }
        iVar4 = (iVar4 >> 3) + 1;
        out_column = iVar4 * 8;
      } while (iVar4 < (int)uVar3 >> 3);
    }
  }
  for (; out_column < (int)uVar1; out_column = out_column + 1) {
    pcVar2 = _stdout->_IO_write_ptr;
    if (pcVar2 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = pcVar2 + 1;
      *pcVar2 = ' ';
    }
    else {
      __overflow(_stdout,0x20);
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void put_line(long param_1,int param_2)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  
  out_column = 0;
  put_space(prefix_indent);
  fputs_unlocked(prefix,_stdout);
  out_column = prefix_length + out_column;
  put_space(param_2 - out_column);
  lVar1 = *(long *)(param_1 + 0x20) + -0x28;
  if (param_1 != lVar1) {
    do {
      lVar3 = param_1 + 0x28;
      put_word(param_1);
      put_space(*(undefined4 *)(param_1 + 0xc));
      param_1 = lVar3;
    } while (lVar1 != lVar3);
  }
  put_word(lVar1);
  last_line_length = out_column;
  pcVar2 = _stdout->_IO_write_ptr;
  if (_stdout->_IO_write_end <= pcVar2) {
    __overflow(_stdout,10);
    return;
  }
  _stdout->_IO_write_ptr = pcVar2 + 1;
  *pcVar2 = '\n';
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void flush_paragraph(void)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  plVar4 = word_limit;
  if (word_limit != (long *)unused_word_type) {
    fmt_paragraph();
    plVar7 = plVar4;
    if (plVar4 != (long *)unused_word_type._32_8_) {
      lVar3 = 0x7fffffffffffffff;
      plVar6 = (long *)unused_word_type._32_8_;
      lVar5 = *(long *)(unused_word_type._32_8_ + 0x18);
      do {
        plVar1 = (long *)plVar6[4];
        lVar5 = lVar5 - plVar1[3];
        if (lVar5 < lVar3) {
          lVar3 = lVar5;
          plVar7 = plVar6;
        }
        if (lVar3 < 0x7ffffffffffffff7) {
          lVar3 = lVar3 + 9;
        }
        plVar6 = plVar1;
        lVar5 = plVar1[3];
      } while (plVar4 != plVar1);
    }
    put_line(unused_word_type,first_indent);
    lVar3 = (long)wptr;
    for (plVar4 = (long *)unused_word_type._32_8_; wptr = (undefined1 *)lVar3, plVar7 != plVar4;
        plVar4 = (long *)plVar4[4]) {
      put_line(plVar4,other_indent);
      lVar3 = (long)wptr;
    }
    iVar2 = __memmove_chk(parabuf,*plVar7,lVar3 - *plVar7,5000);
    plVar6 = word_limit;
    lVar5 = (long)((int)*plVar7 - iVar2);
    wptr = (undefined1 *)(lVar3 - lVar5);
    for (plVar4 = plVar7; plVar4 <= plVar6; plVar4 = plVar4 + 5) {
      *plVar4 = *plVar4 - lVar5;
    }
    __memmove_chk(unused_word_type,plVar7,(long)plVar6 + (0x28 - (long)plVar7),40000);
    word_limit = (long *)((long)plVar6 - (long)(plVar7 + -0x20290));
    return;
  }
  fwrite_unlocked(parabuf,1,(long)wptr - 0x10b0e0,_stdout);
  wptr = parabuf;
  return;
}



void set_other_indent(char param_1)

{
  if (split != '\0') {
    other_indent = first_indent;
    return;
  }
  if (crown != '\0') {
    other_indent = in_column;
    if (param_1 == '\0') {
      other_indent = first_indent;
    }
    return;
  }
  if (tagged == '\0') {
    other_indent = first_indent;
  }
  else {
    if ((param_1 != '\0') && (first_indent != in_column)) {
      other_indent = in_column;
      return;
    }
    if (first_indent == other_indent) {
      other_indent = -(uint)(first_indent == 0) & 3;
      return;
    }
  }
  return;
}



void get_line(_IO_FILE *param_1,uint param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  ushort **ppuVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  byte *pbVar12;
  
LAB_00100798:
  puVar6 = wptr;
  *word_limit = wptr;
  if (puVar6 == &out_column) goto LAB_00100966;
LAB_001007b0:
  puVar11 = (undefined4 *)((long)puVar6 + 1);
  *(char *)puVar6 = (char)param_2;
  pbVar2 = (byte *)param_1->_IO_read_ptr;
  wptr = puVar11;
  if (pbVar2 < param_1->_IO_read_end) {
    param_1->_IO_read_ptr = (char *)(pbVar2 + 1);
    param_2 = (uint)*pbVar2;
  }
  else {
    param_2 = __uflow(param_1);
    puVar11 = wptr;
    if (param_2 == 0xffffffff) goto LAB_001007ec;
  }
  if ((int)param_2 < 0xe) {
    if (8 < (int)param_2) goto LAB_001007ec;
  }
  else if (param_2 == 0x20) goto LAB_001007ec;
  puVar6 = puVar11;
  if (puVar11 == &out_column) {
LAB_00100966:
    set_other_indent(1);
    flush_paragraph();
    puVar6 = wptr;
  }
  goto LAB_001007b0;
LAB_001007ec:
  puVar9 = word_limit;
  pbVar3 = (byte *)*word_limit;
  iVar10 = (int)puVar11 - (int)pbVar3;
  *(int *)(word_limit + 1) = iVar10;
  iVar5 = in_column + iVar10;
  pbVar2 = pbVar3 + (long)iVar10 + -1;
  in_column = iVar5;
  pcVar7 = strchr("([\'`\"",(int)(char)*pbVar3);
  ppuVar8 = __ctype_b_loc();
  *(byte *)(puVar9 + 2) =
       (byte)(*ppuVar8)[*pbVar2] & 4 | pcVar7 != (char *)0x0 | *(byte *)(puVar9 + 2) & 0xfa;
  if (pbVar3 < pbVar2) {
    do {
      pbVar12 = pbVar2;
      iVar10 = (int)(char)*pbVar12;
      pcVar7 = strchr(")]\'\"",iVar10);
      if (pcVar7 == (char *)0x0) goto LAB_00100899;
      pbVar2 = pbVar12 + -1;
    } while (pbVar3 != pbVar12 + -1);
    iVar10 = (int)(char)pbVar12[-1];
  }
  else {
    iVar10 = (int)(char)*pbVar2;
  }
LAB_00100899:
  pcVar7 = strchr(".?!",iVar10);
  *(byte *)(puVar9 + 2) = *(byte *)(puVar9 + 2) & 0xfd | (pcVar7 != (char *)0x0) * '\x02';
  param_2 = get_space(param_1,param_2);
  puVar9 = word_limit;
  iVar5 = in_column - iVar5;
  *(int *)((long)word_limit + 0xc) = iVar5;
  if (param_2 == 0xffffffff) {
    *(byte *)(puVar9 + 2) = *(byte *)(puVar9 + 2) | 8;
LAB_001009b4:
    *(uint *)((long)puVar9 + 0xc) = ((*(byte *)(puVar9 + 2) & 8) != 0) + 1;
    if (puVar9 != (undefined8 *)(unused_word_type + 0x9bf0)) goto LAB_001009d0;
  }
  else {
    bVar1 = *(byte *)(puVar9 + 2);
    if ((bVar1 & 2) == 0) {
      *(byte *)(puVar9 + 2) = bVar1 & 0xf7;
      if (param_2 != 10) goto LAB_00100921;
      goto LAB_001009b4;
    }
    if (param_2 == 10) {
      *(byte *)(puVar9 + 2) = bVar1 | 8;
      goto LAB_001009b4;
    }
    bVar4 = bVar1 & 0xf7;
    if (1 < iVar5) {
      bVar4 = bVar1 | 8;
    }
    *(byte *)(puVar9 + 2) = bVar4;
LAB_00100921:
    if (uniform != '\0') goto LAB_001009b4;
    if (puVar9 != (undefined8 *)(unused_word_type + 0x9bf0)) {
      word_limit = puVar9 + 5;
      goto LAB_00100798;
    }
  }
  set_other_indent(1);
  flush_paragraph();
  puVar9 = word_limit;
LAB_001009d0:
  word_limit = puVar9 + 5;
  if ((param_2 == 10) || (param_2 == 0xffffffff)) {
    get_prefix(param_1);
    return;
  }
  goto LAB_00100798;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 fmt(_IO_FILE *param_1,undefined8 param_2)

{
  byte bVar1;
  byte *pbVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined *puVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  int iVar16;
  bool bVar17;
  
  fadvise(param_1,2);
  tabs = 0;
  other_indent = 0;
  next_char = get_prefix(param_1);
LAB_00100aaf:
  last_line_length = 0;
  uVar14 = next_char;
  do {
    if ((uVar14 == 10) || (uVar14 == 0xffffffff)) {
      out_column = 0;
      bVar17 = uVar14 != 10 && uVar14 != 0xffffffff;
      if ((int)next_prefix_indent < in_column) goto LAB_00100b0e;
      if (bVar17) goto LAB_00100c58;
LAB_00100c1f:
      if (uVar14 == 0xffffffff) {
LAB_00100baa:
        next_char = 0xffffffff;
        uVar14 = param_1->_flags & 0x20;
        if (_stdin == param_1) {
          clearerr_unlocked(param_1);
joined_r0x00100f83:
          if (uVar14 == 0) {
            return 1;
          }
LAB_00100f89:
          uVar10 = quotearg_n_style_colon(0,3,param_2);
        }
        else {
          iVar6 = rpl_fclose(param_1);
          if (iVar6 == 0) goto joined_r0x00100f83;
          if (uVar14 != 0) goto LAB_00100f89;
          piVar9 = __errno_location();
          iVar6 = *piVar9;
          if (iVar6 < 0) {
            return 1;
          }
          uVar10 = quotearg_n_style_colon(0,3,param_2);
          puVar11 = &_LC3;
          if (iVar6 != 0) goto LAB_00100fb5;
        }
        iVar6 = 0;
        puVar11 = (undefined *)dcgettext(0,"read error",5);
LAB_00100fb5:
        error(0,iVar6,puVar11,uVar10);
        return 0;
      }
    }
    else {
      if ((prefix_lead_space <= (int)next_prefix_indent) &&
         ((int)(prefix_full_length + next_prefix_indent) <= in_column)) break;
      if (in_column <= (int)next_prefix_indent) {
LAB_00100c58:
        out_column = 0;
        put_space();
        iVar16 = 0;
        bVar17 = true;
        pbVar8 = prefix;
        iVar6 = in_column;
        if (out_column != in_column) goto LAB_00100b4f;
LAB_00100c88:
        put_space(iVar16);
        do {
          pcVar3 = _stdout->_IO_write_ptr;
          if (pcVar3 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = pcVar3 + 1;
            *pcVar3 = (char)uVar14;
            pbVar8 = (byte *)param_1->_IO_read_ptr;
            if (pbVar8 < param_1->_IO_read_end) goto LAB_00100ca4;
LAB_00100cf0:
            uVar14 = __uflow(param_1);
            bVar17 = uVar14 != 0xffffffff;
          }
          else {
            __overflow(_stdout,uVar14 & 0xff);
            pbVar8 = (byte *)param_1->_IO_read_ptr;
            if (param_1->_IO_read_end <= pbVar8) goto LAB_00100cf0;
LAB_00100ca4:
            param_1->_IO_read_ptr = (char *)(pbVar8 + 1);
            uVar14 = (uint)*pbVar8;
            bVar17 = true;
          }
        } while ((uVar14 != 10) && (bVar17));
        goto LAB_00100c1f;
      }
      bVar17 = true;
LAB_00100b0e:
      out_column = 0;
      put_space();
      pbVar8 = prefix;
      iVar6 = in_column;
      if (out_column != in_column) {
LAB_00100b4f:
        do {
          bVar1 = *pbVar8;
          if (bVar1 == 0) break;
          pbVar2 = (byte *)_stdout->_IO_write_ptr;
          if (pbVar2 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = (char *)(pbVar2 + 1);
            *pbVar2 = bVar1;
          }
          else {
            __overflow(_stdout,(uint)bVar1);
            iVar6 = in_column;
          }
          out_column = out_column + 1;
          pbVar8 = pbVar8 + 1;
        } while (out_column != iVar6);
      }
      if (bVar17) {
        iVar16 = iVar6 - out_column;
        goto LAB_00100c88;
      }
      if (uVar14 == 0xffffffff) {
        if ((int)(prefix_length + next_prefix_indent) <= in_column) {
          pcVar3 = _stdout->_IO_write_ptr;
          if (pcVar3 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = pcVar3 + 1;
            *pcVar3 = '\n';
          }
          else {
            __overflow(_stdout,10);
          }
        }
        goto LAB_00100baa;
      }
    }
    pcVar3 = _stdout->_IO_write_ptr;
    if (pcVar3 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = pcVar3 + 1;
      *pcVar3 = '\n';
    }
    else {
      __overflow(_stdout,10);
    }
    uVar14 = get_prefix(param_1);
  } while( true );
  prefix_indent = next_prefix_indent;
  first_indent = in_column;
  wptr = parabuf;
  word_limit = unused_word_type;
  uVar14 = get_line(param_1,uVar14);
  uVar13 = (ulong)next_prefix_indent;
  bVar17 = false;
  uVar15 = (ulong)uVar14;
  if ((next_prefix_indent == prefix_indent) &&
     ((int)(prefix_full_length + next_prefix_indent) <= in_column)) {
    bVar17 = uVar14 != 0xffffffff && uVar14 != 10;
  }
  uVar14 = prefix_indent;
  set_other_indent(bVar17);
  uVar7 = (uint)uVar15;
  if (split == '\0') {
    uVar12 = (uint)uVar13;
    if (crown == '\0') {
      if (tagged == '\0') {
        if (uVar12 == uVar14) {
          do {
            uVar7 = (uint)uVar15;
            if ((((in_column < (int)uVar13 + prefix_full_length) || (uVar7 == 10)) ||
                (uVar7 == 0xffffffff)) || (other_indent != in_column)) break;
            uVar7 = get_line(param_1);
            uVar13 = (ulong)next_prefix_indent;
            uVar15 = (ulong)uVar7;
          } while (next_prefix_indent == prefix_indent);
        }
      }
      else if (((uVar12 == uVar14) && ((int)(uVar12 + prefix_full_length) <= in_column)) &&
              ((uVar7 != 10 && ((uVar7 != 0xffffffff && (in_column != first_indent)))))) {
        do {
          uVar7 = get_line(param_1);
          if ((next_prefix_indent != prefix_indent) ||
             (((in_column < (int)(next_prefix_indent + prefix_full_length) || (uVar7 == 10)) ||
              (uVar7 == 0xffffffff)))) break;
        } while (other_indent == in_column);
      }
    }
    else if ((((uVar12 == uVar14) && ((int)(uVar12 + prefix_full_length) <= in_column)) &&
             (uVar7 != 10)) && (uVar7 != 0xffffffff)) {
      while ((uVar7 = get_line(param_1), next_prefix_indent == prefix_indent &&
             ((int)(next_prefix_indent + prefix_full_length) <= in_column))) {
        if ((uVar7 == 10) || ((uVar7 == 0xffffffff || (other_indent != in_column)))) break;
      }
    }
  }
  puVar5 = word_limit;
  iVar6 = first_indent;
  next_char = uVar7;
  word_limit[-0x18] = word_limit[-0x18] | 10;
  fmt_paragraph();
  put_line(unused_word_type,iVar6);
  for (puVar4 = (undefined1 *)unused_word_type._32_8_; puVar4 != puVar5;
      puVar4 = *(undefined1 **)(puVar4 + 0x20)) {
    put_line(puVar4,other_indent);
  }
  goto LAB_00100aaf;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void usage(int param_1)

{
  FILE *pFVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
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
  ppuVar6 = &local_a8;
  local_30 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(_stderr,2,uVar3,uVar5);
    goto LAB_001010aa;
  }
  uVar3 = dcgettext(0,"Usage: %s [-WIDTH] [OPTION]... [FILE]...\n",5);
  __printf_chk(2,uVar3,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "Reformat each paragraph in the FILE(s), writing to standard output.\nThe option -WIDTH is an abbreviated form of --width=DIGITS.\n"
                             ,5);
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
                             "  -c, --crown-margin        preserve indentation of first two lines\n  -p, --prefix=STRING       reformat only lines beginning with STRING,\n                              reattaching the prefix to reformatted lines\n  -s, --split-only          split long lines, but do not refill\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -t, --tagged-paragraph    indentation of first line different from second\n  -u, --uniform-spacing     one space between words, two after sentences\n  -w, --width=WIDTH         maximum line width (default of 75 columns)\n  -g, --goal=WIDTH          goal width (default of 93% of width)\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pcVar4 = "[";
  local_a8 = &_LC5;
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
    iVar2 = strcmp("fmt",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)ppuVar6 + 0x10);
    ppuVar6 = (undefined **)((long)ppuVar6 + 0x10);
  } while (pcVar4 != (char *)0x0);
  puVar7 = *(undefined **)((long)ppuVar6 + 8);
  if (puVar7 == (undefined *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    puVar7 = &_LC6;
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) goto LAB_001012fd;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC6);
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
LAB_001012fd:
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
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC6);
    if (puVar7 == &_LC6) {
      pcVar4 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,puVar7,pcVar4);
LAB_001010aa:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte main(int param_1,undefined8 *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  size_t sVar4;
  char *pcVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int *piVar9;
  char *pcVar10;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  ulong extraout_RDX_01;
  ulong uVar11;
  ulong extraout_RDX_02;
  ulong extraout_RDX_03;
  undefined8 *puVar12;
  char cVar13;
  undefined1 *puVar14;
  char *local_50;
  char *local_48;
  
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  uniform = 0;
  split = 0;
  tagged = 0;
  crown = 0;
  max_width = 0x4b;
  prefix = "";
  prefix_full_length = 0;
  prefix_lead_space = 0;
  prefix_length = 0;
  local_50 = (char *)0x0;
  puVar12 = param_2;
  if (((1 < param_1) && (pcVar10 = (char *)param_2[1], *pcVar10 == '-')) &&
     ((int)pcVar10[1] - 0x30U < 10)) {
    local_50 = pcVar10 + 1;
    puVar12 = param_2 + 1;
    param_1 = param_1 + -1;
    *puVar12 = *param_2;
  }
  local_48 = (char *)0x0;
  puVar14 = long_options;
  cVar13 = -0x6b;
  while (iVar3 = getopt_long(param_1,puVar12,"0123456789cstuw:p:g:",long_options,0), iVar3 != -1) {
    if (0x77 < iVar3) {
LAB_0010cf96:
      usage(1);
      goto LAB_0010cfa0;
    }
    if (iVar3 < 99) {
      if (iVar3 == -0x83) {
        uVar7 = proper_name_lite("Ross Paterson","Ross Paterson");
        version_etc(_stdout,&_LC6,"GNU coreutils",_Version,uVar7,0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar3 == -0x82) {
        usage(0);
        goto LAB_0010d00f;
      }
switchD_0010cc8b_caseD_64:
      if (iVar3 - 0x30U < 10) {
        uVar7 = dcgettext(0,
                          "invalid option -- %c; -WIDTH is recognized only when it is the first\noption; use -w N instead"
                          ,5);
        error(0,0,uVar7,iVar3);
      }
      goto LAB_0010cf96;
    }
    switch(iVar3) {
    case 99:
      crown = 1;
      break;
    default:
      goto switchD_0010cc8b_caseD_64;
    case 0x67:
      local_48 = _optarg;
      break;
    case 0x70:
      prefix_lead_space = 0;
      pcVar10 = _optarg;
      if (*_optarg == ' ') {
        do {
          pcVar5 = pcVar10;
          pcVar10 = pcVar5 + 1;
        } while (*pcVar10 == ' ');
        prefix_lead_space = ((int)pcVar5 - (int)_optarg) + 1;
      }
      prefix = pcVar10;
      sVar4 = strlen(pcVar10);
      prefix_full_length = (int)sVar4;
      pcVar5 = pcVar10 + prefix_full_length;
      if (pcVar10 < pcVar5) {
        do {
          if (pcVar5[-1] != ' ') break;
          pcVar5 = pcVar5 + -1;
        } while (pcVar5 != pcVar10);
      }
      *pcVar5 = '\0';
      prefix_length = (int)pcVar5 - (int)pcVar10;
      break;
    case 0x73:
      split = 1;
      break;
    case 0x74:
      tagged = 1;
      break;
    case 0x75:
      uniform = 1;
      break;
    case 0x77:
      local_50 = _optarg;
    }
  }
  if (local_50 == (char *)0x0) {
    if (local_48 == (char *)0x0) goto LAB_0010cf48;
LAB_0010cfa0:
    uVar7 = dcgettext(0,"invalid width",5);
    goal_width = xdectoumax(local_48,0,0x4b,&_LC8,uVar7,0);
    max_width = goal_width + 10;
    uVar11 = extraout_RDX_02;
  }
  else {
    uVar7 = dcgettext(0,"invalid width",5);
    iVar3 = xnumtoumax(local_50,10,0,0x9c4,&_LC8,uVar7,0,8);
    max_width = iVar3;
    if (local_48 == (char *)0x0) {
LAB_0010cf48:
      goal_width = (max_width * 0xbb) / 200;
      uVar11 = (long)(max_width * 0xbb) % 200 & 0xffffffff;
    }
    else {
      uVar7 = dcgettext(0,"invalid width",5);
      goal_width = xdectoumax(local_48,0,(long)iVar3,&_LC8,uVar7,0);
      uVar11 = extraout_RDX;
    }
  }
  if (_optind == param_1) {
    bVar2 = fmt(_stdin,&_LC38,uVar11);
  }
  else {
    cVar13 = '\0';
    bVar2 = 1;
    puVar14 = &_LC39;
    if (param_1 <= _optind) goto LAB_0010cf29;
    do {
      pcVar10 = (char *)puVar12[_optind];
      if ((*pcVar10 == '-') && (pcVar10[1] == '\0')) {
        cVar13 = '\x01';
        bVar1 = fmt(_stdin,pcVar10,uVar11);
        bVar2 = bVar2 & bVar1;
        uVar11 = extraout_RDX_00;
      }
      else {
        lVar6 = rpl_fopen(pcVar10,puVar14);
        if (lVar6 == 0) {
LAB_0010d00f:
          uVar7 = quotearg_style(4);
          uVar8 = dcgettext(0,"cannot open %s for reading",5);
          piVar9 = __errno_location();
          bVar2 = 0;
          error(0,*piVar9,uVar8,uVar7);
          uVar11 = extraout_RDX_03;
        }
        else {
          bVar1 = fmt(lVar6,pcVar10);
          bVar2 = bVar2 & bVar1;
          uVar11 = extraout_RDX_01;
        }
      }
      _optind = _optind + 1;
    } while (_optind < param_1);
    if (cVar13 == '\0') goto LAB_0010cf29;
  }
  iVar3 = rpl_fclose(_stdin);
  if (iVar3 != 0) {
    uVar7 = dcgettext(0,"closing standard input",5);
    piVar9 = __errno_location();
    error(1,*piVar9,&_LC3,uVar7);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_0010cf29:
  return bVar2 ^ 1;
}


