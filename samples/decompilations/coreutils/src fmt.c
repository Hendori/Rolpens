
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void fmt_paragraph(void)

{
  byte bVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  int iVar6;
  int iVar7;
  WORD *pWVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  WORD *pWVar13;
  int iVar15;
  WORD *pWVar16;
  long lVar17;
  WORD *pWVar14;
  
  iVar10 = max_width;
  pWVar8 = word_limit;
  pWVar16 = word_limit + -1;
  iVar2 = word_limit->length;
  word_limit->best_cost = 0;
  pWVar8->length = iVar10;
  iVar9 = goal_width;
  iVar7 = first_indent;
  iVar6 = other_indent;
  iVar5 = last_line_length;
  for (; (WORD *)0x10147f < pWVar16; pWVar16 = pWVar16 + -1) {
    iVar15 = iVar6;
    if (pWVar16 == unused_word_type) {
      iVar15 = iVar7;
    }
    lVar12 = 0x7fffffffffffffff;
    iVar15 = iVar15 + pWVar16->length;
    pWVar13 = pWVar16;
    do {
      pWVar14 = pWVar13 + 1;
      if (pWVar8 == pWVar14) {
        lVar11 = 0;
      }
      else {
        lVar11 = (long)((iVar9 - iVar15) * 10);
        lVar11 = lVar11 * lVar11;
        if (pWVar8 != pWVar13[1].next_break) {
          lVar17 = (long)((iVar15 - pWVar13[1].line_length) * 10);
          lVar11 = lVar11 + (lVar17 * lVar17 >> 1);
        }
      }
      lVar11 = lVar11 + pWVar13[1].best_cost;
      if ((pWVar16 == unused_word_type) && (0 < iVar5)) {
        lVar17 = (long)((iVar15 - iVar5) * 10);
        lVar11 = lVar11 + (lVar17 * lVar17 >> 1);
      }
      if (lVar11 < lVar12) {
        pWVar16->next_break = pWVar14;
        pWVar16->line_length = iVar15;
        lVar12 = lVar11;
      }
    } while ((pWVar8 != pWVar14) &&
            (iVar15 = iVar15 + pWVar13[1].length + pWVar13->space, pWVar13 = pWVar14,
            iVar15 < iVar10));
    lVar11 = 0x1324;
    if (unused_word_type < pWVar16) {
      bVar1 = pWVar16[-1].field_0x10;
      if ((bVar1 & 2) == 0) {
        lVar11 = 0xce4;
        if ((((bVar1 & 4) == 0) && (lVar11 = 0x1324, unused_word_type + 1 < pWVar16)) &&
           ((pWVar16[-2].field_0x10 & 8) != 0)) {
          auVar4._8_8_ = 0;
          auVar4._0_8_ = SUB168(SEXT816(40000),8);
          lVar11 = SUB168((auVar4 << 0x40 | ZEXT816(40000)) /
                          SEXT816((long)(pWVar16[-1].length + 2)),0) + 0x1324;
        }
      }
      else {
        lVar11 = (ulong)(-(uint)((bVar1 & 8) == 0) & 0x58804) + 0x960;
      }
    }
    if ((pWVar16->field_0x10 & 1) == 0) {
      if ((pWVar16->field_0x10 & 8) != 0) {
        auVar3._8_8_ = 0;
        auVar3._0_8_ = SUB168(SEXT816(0x57e4),8);
        lVar11 = lVar11 + SUB168((auVar3 << 0x40 | ZEXT816(0x57e4)) /
                                 SEXT816((long)(pWVar16->length + 2)),0);
      }
    }
    else {
      lVar11 = lVar11 + -0x640;
    }
    pWVar16->best_cost = lVar12 + lVar11;
  }
  pWVar8->length = iVar2;
  return;
}



/* WARNING: Unknown calling convention */

int get_space(FILE *f,int c)

{
  int iVar1;
  byte *pbVar2;
  
  do {
    while (c != 0x20) {
      if (c != 9) {
        return c;
      }
      tabs = true;
      iVar1 = in_column + 7;
      if (-1 < in_column) {
        iVar1 = in_column;
      }
      in_column = (iVar1 >> 3) * 8 + 8;
      pbVar2 = (byte *)f->_IO_read_ptr;
      if (pbVar2 < f->_IO_read_end) goto LAB_00100244;
LAB_0010026d:
      c = __uflow((_IO_FILE *)f);
    }
    in_column = in_column + 1;
    pbVar2 = (byte *)f->_IO_read_ptr;
    if (f->_IO_read_end <= pbVar2) goto LAB_0010026d;
LAB_00100244:
    f->_IO_read_ptr = (char *)(pbVar2 + 1);
    c = (int)*pbVar2;
  } while( true );
}



/* WARNING: Unknown calling convention */

int get_prefix(FILE *f)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  
  pbVar2 = (byte *)f->_IO_read_ptr;
  in_column = 0;
  if (pbVar2 < f->_IO_read_end) {
    f->_IO_read_ptr = (char *)(pbVar2 + 1);
    uVar3 = (uint)*pbVar2;
  }
  else {
    uVar3 = __uflow((_IO_FILE *)f);
  }
  uVar3 = get_space(f,uVar3);
  next_prefix_indent = in_column;
  if (prefix_length == 0) {
    if (prefix_lead_space < in_column) {
      next_prefix_indent = prefix_lead_space;
    }
  }
  else {
    bVar1 = *prefix;
    pcVar5 = prefix;
    while( true ) {
      if (bVar1 == 0) {
        iVar4 = get_space(f,uVar3);
        return iVar4;
      }
      if (bVar1 != uVar3) break;
      in_column = in_column + 1;
      pbVar2 = (byte *)f->_IO_read_ptr;
      if (pbVar2 < f->_IO_read_end) {
        f->_IO_read_ptr = (char *)(pbVar2 + 1);
        uVar3 = (uint)*pbVar2;
      }
      else {
        uVar3 = __uflow((_IO_FILE *)f);
      }
      bVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 1;
    }
  }
  return uVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void put_word(WORD *w)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  
  uVar5 = w->length;
  pbVar2 = (byte *)w->text;
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
    uVar5 = w->length;
  }
  out_column = out_column + uVar5;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void put_space(int space)

{
  uint uVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = out_column + space;
  if (tabs) {
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
/* WARNING: Unknown calling convention */

void put_line(WORD *w,int indent)

{
  WORD *w_00;
  char *pcVar1;
  WORD *pWVar2;
  
  out_column = 0;
  put_space(prefix_indent);
  fputs_unlocked(prefix,_stdout);
  out_column = prefix_length + out_column;
  put_space(indent - out_column);
  w_00 = w->next_break + -1;
  if (w != w_00) {
    do {
      pWVar2 = w + 1;
      put_word(w);
      put_space(w->space);
      w = pWVar2;
    } while (w_00 != pWVar2);
  }
  put_word(w_00);
  last_line_length = out_column;
  pcVar1 = _stdout->_IO_write_ptr;
  if (_stdout->_IO_write_end <= pcVar1) {
    __overflow(_stdout,10);
    return;
  }
  _stdout->_IO_write_ptr = pcVar1 + 1;
  *pcVar1 = '\n';
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void flush_paragraph(void)

{
  WORD *pWVar1;
  char *pcVar2;
  int iVar3;
  long lVar4;
  WORD *pWVar5;
  long lVar6;
  WORD *pWVar7;
  WORD *pWVar8;
  COST CVar9;
  
  pWVar5 = word_limit;
  if (word_limit != unused_word_type) {
    fmt_paragraph();
    pWVar8 = pWVar5;
    if (pWVar5 != unused_word_type[0].next_break) {
      lVar4 = 0x7fffffffffffffff;
      pWVar7 = unused_word_type[0].next_break;
      CVar9 = (unused_word_type[0].next_break)->best_cost;
      do {
        pWVar1 = pWVar7->next_break;
        lVar6 = CVar9 - pWVar1->best_cost;
        if (lVar6 < lVar4) {
          lVar4 = lVar6;
          pWVar8 = pWVar7;
        }
        if (lVar4 < 0x7ffffffffffffff7) {
          lVar4 = lVar4 + 9;
        }
        pWVar7 = pWVar1;
        CVar9 = pWVar1->best_cost;
      } while (pWVar5 != pWVar1);
    }
    put_line(unused_word_type,first_indent);
    pcVar2 = wptr;
    for (pWVar5 = unused_word_type[0].next_break; wptr = pcVar2, pWVar8 != pWVar5;
        pWVar5 = pWVar5->next_break) {
      put_line(pWVar5,other_indent);
      pcVar2 = wptr;
    }
    iVar3 = __memmove_chk(parabuf,pWVar8->text,(long)pcVar2 - (long)pWVar8->text,5000);
    pWVar7 = word_limit;
    lVar4 = (long)((int)pWVar8->text - iVar3);
    wptr = pcVar2 + -lVar4;
    for (pWVar5 = pWVar8; pWVar5 <= pWVar7; pWVar5 = pWVar5 + 1) {
      pWVar5->text = pWVar5->text + -lVar4;
    }
    __memmove_chk(unused_word_type,pWVar8,(long)pWVar7 + (0x28 - (long)pWVar8),40000);
    word_limit = (WORD *)((long)pWVar7 - (long)&pWVar8[-0x66ea].field_0x10);
    return;
  }
  fwrite_unlocked(parabuf,1,(size_t)(wptr + -0x10b0e0),_stdout);
  wptr = parabuf;
  return;
}



/* WARNING: Unknown calling convention */

void set_other_indent(_Bool same_paragraph)

{
  if (split) {
    other_indent = first_indent;
    return;
  }
  if (crown) {
    other_indent = in_column;
    if (!same_paragraph) {
      other_indent = first_indent;
    }
    return;
  }
  if (tagged) {
    if ((same_paragraph) && (first_indent != in_column)) {
      other_indent = in_column;
      return;
    }
    if (first_indent == other_indent) {
      other_indent = -(uint)(first_indent == 0) & 3;
      return;
    }
  }
  else {
    other_indent = first_indent;
  }
  return;
}



/* WARNING: Unknown calling convention */

int get_line(FILE *f,int c)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  ushort **ppuVar7;
  WORD *pWVar8;
  byte bVar9;
  int iVar10;
  int *piVar11;
  byte *pbVar12;
  
LAB_00100798:
  piVar5 = (int *)wptr;
  word_limit->text = wptr;
  if (piVar5 == &out_column) goto LAB_00100966;
LAB_001007b0:
  piVar11 = (int *)((long)piVar5 + 1);
  *(char *)piVar5 = (char)c;
  pbVar2 = (byte *)f->_IO_read_ptr;
  wptr = (char *)piVar11;
  if (pbVar2 < f->_IO_read_end) {
    f->_IO_read_ptr = (char *)(pbVar2 + 1);
    c = (int)*pbVar2;
  }
  else {
    c = __uflow((_IO_FILE *)f);
    piVar11 = (int *)wptr;
    if (c == 0xffffffff) goto LAB_001007ec;
  }
  if (c < 0xe) {
    if (8 < c) goto LAB_001007ec;
  }
  else if (c == 0x20) goto LAB_001007ec;
  piVar5 = piVar11;
  if (piVar11 == &out_column) {
LAB_00100966:
    set_other_indent(true);
    flush_paragraph();
    piVar5 = (int *)wptr;
  }
  goto LAB_001007b0;
LAB_001007ec:
  pWVar8 = word_limit;
  pbVar3 = (byte *)word_limit->text;
  iVar10 = (int)piVar11 - (int)pbVar3;
  word_limit->length = iVar10;
  iVar4 = in_column + iVar10;
  pbVar2 = pbVar3 + (long)iVar10 + -1;
  in_column = iVar4;
  pcVar6 = strchr("([\'`\"",(int)(char)*pbVar3);
  ppuVar7 = __ctype_b_loc();
  pWVar8->field_0x10 =
       (byte)(*ppuVar7)[*pbVar2] & 4 | pcVar6 != (char *)0x0 | pWVar8->field_0x10 & 0xfa;
  if (pbVar3 < pbVar2) {
    do {
      pbVar12 = pbVar2;
      iVar10 = (int)(char)*pbVar12;
      pcVar6 = strchr(")]\'\"",iVar10);
      if (pcVar6 == (char *)0x0) goto LAB_00100899;
      pbVar2 = pbVar12 + -1;
    } while (pbVar3 != pbVar12 + -1);
    iVar10 = (int)(char)pbVar12[-1];
  }
  else {
    iVar10 = (int)(char)*pbVar2;
  }
LAB_00100899:
  pcVar6 = strchr(".?!",iVar10);
  pWVar8->field_0x10 = pWVar8->field_0x10 & 0xfd | (pcVar6 != (char *)0x0) * '\x02';
  c = get_space(f,c);
  pWVar8 = word_limit;
  iVar4 = in_column - iVar4;
  word_limit->space = iVar4;
  if (c == 0xffffffff) {
    pWVar8->field_0x10 = pWVar8->field_0x10 | 8;
LAB_001009b4:
    pWVar8->space = ((pWVar8->field_0x10 & 8) != 0) + 1;
    if (pWVar8 != unused_word_type + 0x3e6) goto LAB_001009d0;
  }
  else {
    bVar1 = pWVar8->field_0x10;
    if ((bVar1 & 2) == 0) {
      pWVar8->field_0x10 = bVar1 & 0xf7;
      if (c != 10) goto LAB_00100921;
      goto LAB_001009b4;
    }
    if (c == 10) {
      pWVar8->field_0x10 = bVar1 | 8;
      goto LAB_001009b4;
    }
    bVar9 = bVar1 & 0xf7;
    if (1 < iVar4) {
      bVar9 = bVar1 | 8;
    }
    pWVar8->field_0x10 = bVar9;
LAB_00100921:
    if (uniform != false) goto LAB_001009b4;
    if (pWVar8 != unused_word_type + 0x3e6) {
      word_limit = pWVar8 + 1;
      goto LAB_00100798;
    }
  }
  set_other_indent(true);
  flush_paragraph();
  pWVar8 = word_limit;
LAB_001009d0:
  word_limit = pWVar8 + 1;
  if ((c == 10) || (c == 0xffffffff)) {
    iVar4 = get_prefix(f);
    return iVar4;
  }
  goto LAB_00100798;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

_Bool fmt(FILE *f,char *file)

{
  byte bVar1;
  byte *pbVar2;
  char *pcVar3;
  WORD *w;
  WORD *pWVar4;
  int iVar5;
  byte *pbVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined *puVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  _Bool same_paragraph;
  int iVar13;
  bool bVar14;
  
  fadvise(f,2);
  tabs = false;
  other_indent = 0;
  next_char = get_prefix(f);
LAB_00100aaf:
  last_line_length = 0;
  uVar11 = next_char;
  do {
    if ((uVar11 == 10) || (uVar11 == 0xffffffff)) {
      out_column = 0;
      bVar14 = uVar11 != 10 && uVar11 != 0xffffffff;
      if (next_prefix_indent < in_column) goto LAB_00100b0e;
      if (bVar14) goto LAB_00100c58;
LAB_00100c1f:
      if (uVar11 == 0xffffffff) {
LAB_00100baa:
        next_char = -1;
        uVar11 = f->_flags & 0x20;
        if (_stdin == f) {
          clearerr_unlocked((FILE *)f);
joined_r0x00100f83:
          if (uVar11 == 0) {
            return true;
          }
LAB_00100f89:
          uVar8 = quotearg_n_style_colon(0,3,file);
        }
        else {
          iVar5 = rpl_fclose(f);
          if (iVar5 == 0) goto joined_r0x00100f83;
          if (uVar11 != 0) goto LAB_00100f89;
          piVar7 = __errno_location();
          iVar5 = *piVar7;
          if (iVar5 < 0) {
            return true;
          }
          uVar8 = quotearg_n_style_colon(0,3,file);
          puVar9 = &_LC3;
          if (iVar5 != 0) goto LAB_00100fb5;
        }
        iVar5 = 0;
        puVar9 = (undefined *)dcgettext(0,"read error",5);
LAB_00100fb5:
        error(0,iVar5,puVar9,uVar8);
        return false;
      }
    }
    else {
      if ((prefix_lead_space <= next_prefix_indent) &&
         (prefix_full_length + next_prefix_indent <= in_column)) break;
      if (in_column <= next_prefix_indent) {
LAB_00100c58:
        out_column = 0;
        put_space(next_prefix_indent);
        iVar13 = 0;
        bVar14 = true;
        pbVar6 = (byte *)prefix;
        iVar5 = in_column;
        if (out_column != in_column) goto LAB_00100b4f;
LAB_00100c88:
        put_space(iVar13);
        do {
          pcVar3 = _stdout->_IO_write_ptr;
          if (pcVar3 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = pcVar3 + 1;
            *pcVar3 = (char)uVar11;
            pbVar6 = (byte *)f->_IO_read_ptr;
            if (pbVar6 < f->_IO_read_end) goto LAB_00100ca4;
LAB_00100cf0:
            uVar11 = __uflow((_IO_FILE *)f);
            bVar14 = uVar11 != 0xffffffff;
          }
          else {
            __overflow(_stdout,uVar11 & 0xff);
            pbVar6 = (byte *)f->_IO_read_ptr;
            if (f->_IO_read_end <= pbVar6) goto LAB_00100cf0;
LAB_00100ca4:
            f->_IO_read_ptr = (char *)(pbVar6 + 1);
            uVar11 = (uint)*pbVar6;
            bVar14 = true;
          }
        } while ((uVar11 != 10) && (bVar14));
        goto LAB_00100c1f;
      }
      bVar14 = true;
LAB_00100b0e:
      out_column = 0;
      put_space(next_prefix_indent);
      pbVar6 = (byte *)prefix;
      iVar5 = in_column;
      if (out_column != in_column) {
LAB_00100b4f:
        do {
          bVar1 = *pbVar6;
          if (bVar1 == 0) break;
          pbVar2 = (byte *)_stdout->_IO_write_ptr;
          if (pbVar2 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = (char *)(pbVar2 + 1);
            *pbVar2 = bVar1;
          }
          else {
            __overflow(_stdout,(uint)bVar1);
            iVar5 = in_column;
          }
          out_column = out_column + 1;
          pbVar6 = pbVar6 + 1;
        } while (out_column != iVar5);
      }
      if (bVar14) {
        iVar13 = iVar5 - out_column;
        goto LAB_00100c88;
      }
      if (uVar11 == 0xffffffff) {
        if (prefix_length + next_prefix_indent <= in_column) {
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
    uVar11 = get_prefix(f);
  } while( true );
  prefix_indent = next_prefix_indent;
  first_indent = in_column;
  wptr = parabuf;
  word_limit = unused_word_type;
  uVar11 = get_line(f,uVar11);
  uVar10 = (ulong)(uint)next_prefix_indent;
  same_paragraph = false;
  uVar12 = (ulong)uVar11;
  if ((next_prefix_indent == prefix_indent) &&
     (prefix_full_length + next_prefix_indent <= in_column)) {
    same_paragraph = uVar11 != 0xffffffff && uVar11 != 10;
  }
  iVar5 = prefix_indent;
  set_other_indent(same_paragraph);
  uVar11 = (uint)uVar12;
  if (split == false) {
    iVar13 = (int)uVar10;
    if (crown == false) {
      if (tagged == false) {
        if (iVar13 == iVar5) {
          do {
            uVar11 = (uint)uVar12;
            if ((((in_column < (int)uVar10 + prefix_full_length) || (uVar11 == 10)) ||
                (uVar11 == 0xffffffff)) || (other_indent != in_column)) break;
            uVar11 = get_line(f,uVar11);
            uVar10 = (ulong)(uint)next_prefix_indent;
            uVar12 = (ulong)uVar11;
          } while (next_prefix_indent == prefix_indent);
        }
      }
      else if (((iVar13 == iVar5) && (iVar13 + prefix_full_length <= in_column)) &&
              ((uVar11 != 10 && ((uVar11 != 0xffffffff && (in_column != first_indent)))))) {
        do {
          uVar11 = get_line(f,(int)uVar12);
          uVar12 = (ulong)uVar11;
          if ((next_prefix_indent != prefix_indent) ||
             (((in_column < next_prefix_indent + prefix_full_length || (uVar11 == 10)) ||
              (uVar11 == 0xffffffff)))) break;
        } while (other_indent == in_column);
      }
    }
    else if ((((iVar13 == iVar5) && (iVar13 + prefix_full_length <= in_column)) && (uVar11 != 10))
            && (uVar11 != 0xffffffff)) {
      while( true ) {
        uVar11 = get_line(f,(int)uVar12);
        uVar12 = (ulong)uVar11;
        if ((next_prefix_indent != prefix_indent) ||
           (in_column < next_prefix_indent + prefix_full_length)) break;
        if ((uVar11 == 10) || ((uVar11 == 0xffffffff || (other_indent != in_column)))) break;
      }
    }
  }
  pWVar4 = word_limit;
  iVar5 = first_indent;
  next_char = uVar11;
  word_limit[-1].field_0x10 = word_limit[-1].field_0x10 | 10;
  fmt_paragraph();
  put_line(unused_word_type,iVar5);
  for (w = unused_word_type[0].next_break; w != pWVar4; w = w->next_break) {
    put_line(w,other_indent);
  }
  goto LAB_00100aaf;
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
  undefined *puVar7;
  infomap infomap [7];
  
  uVar5 = _program_name;
  piVar6 = infomap;
  if (status != 0) {
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
    iVar2 = strcmp("fmt",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)piVar6 + 0x10);
    piVar6 = (infomap *)((long)piVar6 + 0x10);
  } while (pcVar4 != (char *)0x0);
  puVar7 = *(undefined **)((long)piVar6 + 8);
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
  exit(status);
}



/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int main(int argc,char **argv)

{
  bool bVar1;
  _Bool _Var2;
  int iVar3;
  size_t sVar4;
  char *pcVar5;
  FILE *f;
  undefined8 uVar6;
  undefined8 uVar7;
  int *piVar8;
  char *pcVar9;
  char **ppcVar10;
  uint uVar11;
  char *local_50;
  char *local_48;
  
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  uniform = false;
  split = false;
  tagged = false;
  crown = false;
  max_width = 0x4b;
  prefix = "";
  prefix_full_length = 0;
  prefix_lead_space = 0;
  prefix_length = 0;
  local_50 = (char *)0x0;
  ppcVar10 = argv;
  if (((1 < argc) && (pcVar9 = argv[1], *pcVar9 == '-')) && ((int)pcVar9[1] - 0x30U < 10)) {
    local_50 = pcVar9 + 1;
    ppcVar10 = argv + 1;
    argc = argc + -1;
    *ppcVar10 = *argv;
  }
  local_48 = (char *)0x0;
  while (iVar3 = getopt_long(argc,ppcVar10,"0123456789cstuw:p:g:",long_options,0), iVar3 != -1) {
    if (0x77 < iVar3) goto LAB_0010cf96;
    if (iVar3 < 99) {
      if (iVar3 == -0x83) {
        uVar6 = proper_name_lite("Ross Paterson","Ross Paterson");
        version_etc(_stdout,&_LC6,"GNU coreutils",_Version,uVar6,0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar3 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
switchD_0010cc8b_caseD_64:
      if (iVar3 - 0x30U < 10) {
        uVar6 = dcgettext(0,
                          "invalid option -- %c; -WIDTH is recognized only when it is the first\noption; use -w N instead"
                          ,5);
        error(0,0,uVar6,iVar3);
      }
LAB_0010cf96:
                    /* WARNING: Subroutine does not return */
      usage(1);
    }
    switch(iVar3) {
    case 99:
      crown = true;
      break;
    default:
      goto switchD_0010cc8b_caseD_64;
    case 0x67:
      local_48 = _optarg;
      break;
    case 0x70:
      prefix_lead_space = 0;
      pcVar9 = _optarg;
      if (*_optarg == ' ') {
        do {
          pcVar5 = pcVar9;
          pcVar9 = pcVar5 + 1;
        } while (*pcVar9 == ' ');
        prefix_lead_space = ((int)pcVar5 - (int)_optarg) + 1;
      }
      prefix = pcVar9;
      sVar4 = strlen(pcVar9);
      prefix_full_length = (int)sVar4;
      pcVar5 = pcVar9 + prefix_full_length;
      if (pcVar9 < pcVar5) {
        do {
          if (pcVar5[-1] != ' ') break;
          pcVar5 = pcVar5 + -1;
        } while (pcVar5 != pcVar9);
      }
      *pcVar5 = '\0';
      prefix_length = (int)pcVar5 - (int)pcVar9;
      break;
    case 0x73:
      split = true;
      break;
    case 0x74:
      tagged = true;
      break;
    case 0x75:
      uniform = true;
      break;
    case 0x77:
      local_50 = _optarg;
    }
  }
  if (local_50 == (char *)0x0) {
    if (local_48 == (char *)0x0) goto LAB_0010cf48;
    uVar6 = dcgettext(0,"invalid width",5);
    goal_width = xdectoumax(local_48,0,0x4b,&_LC8,uVar6,0);
    max_width = goal_width + 10;
  }
  else {
    uVar6 = dcgettext(0,"invalid width",5);
    iVar3 = xnumtoumax(local_50,10,0,0x9c4,&_LC8,uVar6,0,8);
    max_width = iVar3;
    if (local_48 == (char *)0x0) {
LAB_0010cf48:
      goal_width = (max_width * 0xbb) / 200;
    }
    else {
      uVar6 = dcgettext(0,"invalid width",5);
      goal_width = xdectoumax(local_48,0,(long)iVar3,&_LC8,uVar6,0);
    }
  }
  if (_optind == argc) {
    _Var2 = fmt(_stdin,"-");
    uVar11 = (uint)_Var2;
  }
  else {
    bVar1 = false;
    uVar11 = 1;
    if (argc <= _optind) goto LAB_0010cf29;
    do {
      pcVar9 = ppcVar10[_optind];
      if ((*pcVar9 == '-') && (pcVar9[1] == '\0')) {
        bVar1 = true;
        _Var2 = fmt(_stdin,pcVar9);
        uVar11 = uVar11 & _Var2;
      }
      else {
        f = (FILE *)rpl_fopen(pcVar9,&_LC39);
        if (f == (FILE *)0x0) {
          uVar6 = quotearg_style(4);
          uVar7 = dcgettext(0,"cannot open %s for reading",5);
          piVar8 = __errno_location();
          uVar11 = 0;
          error(0,*piVar8,uVar7,uVar6);
        }
        else {
          _Var2 = fmt(f,pcVar9);
          uVar11 = uVar11 & _Var2;
        }
      }
      _optind = _optind + 1;
    } while (_optind < argc);
    if (!bVar1) goto LAB_0010cf29;
  }
  iVar3 = rpl_fclose(_stdin);
  if (iVar3 != 0) {
    uVar6 = dcgettext(0,"closing standard input",5);
    piVar8 = __errno_location();
    error(1,*piVar8,&_LC3,uVar6);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_0010cf29:
  return uVar11 ^ 1;
}


