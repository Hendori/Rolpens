
void fmt_paragraph(void)

{
  byte bVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  long lVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  int iVar17;
  int iVar18;
  long lVar19;
  long lVar20;
  
  iVar11 = max_width;
  puVar9 = word_limit;
  puVar16 = word_limit + -0x28;
  uVar2 = *(undefined4 *)(word_limit + 8);
  *(undefined8 *)(word_limit + 0x18) = 0;
  *(int *)(puVar9 + 8) = iVar11;
  iVar10 = goal_width;
  iVar8 = first_indent;
  iVar7 = other_indent;
  iVar6 = last_line_length;
  if (puVar16 < unused_word_type) {
    *(undefined4 *)(puVar9 + 8) = uVar2;
    return;
  }
  puVar15 = puVar16;
  if ((undefined1 *)0x101a48 < puVar16) {
    puVar13 = unused_word_type + (long)(puVar16 + ~(ulong)puVar16);
    if (unused_word_type + (long)(puVar16 + ~(ulong)puVar16) < (undefined1 *)0x101a48) {
      puVar13 = (undefined1 *)0x101a48;
    }
    do {
      if (puVar16 == unused_word_type) {
        lVar20 = 0x7fffffffffffffff;
        iVar18 = iVar8 + unused_word_type._8_4_;
        puVar15 = unused_word_type;
        if (iVar6 < 1) {
          puVar15 = unused_word_type;
          do {
            puVar12 = puVar15 + 0x28;
            if (puVar9 == puVar12) {
              lVar19 = *(long *)(puVar9 + 0x18);
              if (lVar20 <= lVar19) goto LAB_00100421;
LAB_001003eb:
              lVar20 = lVar19;
              unused_word_type._20_4_ = iVar18;
              unused_word_type._32_8_ = puVar12;
            }
            else {
              lVar19 = (long)((iVar10 - iVar18) * 10);
              lVar19 = lVar19 * lVar19;
              if (puVar9 != *(undefined1 **)(puVar15 + 0x48)) {
                lVar14 = (long)((iVar18 - *(int *)(puVar15 + 0x3c)) * 10);
                lVar19 = lVar19 + (lVar14 * lVar14 >> 1);
              }
              lVar19 = lVar19 + *(long *)(puVar15 + 0x40);
              if (lVar19 < lVar20) goto LAB_001003eb;
            }
            if ((puVar9 == puVar12) ||
               (iVar18 = iVar18 + *(int *)(puVar15 + 0x30) + *(int *)(puVar15 + 0xc),
               puVar15 = puVar12, iVar11 <= iVar18)) goto LAB_00100421;
          } while( true );
        }
        do {
          puVar12 = puVar15 + 0x28;
          if (puVar9 == puVar12) {
            lVar19 = 0;
          }
          else {
            lVar19 = (long)((iVar10 - iVar18) * 10);
            lVar19 = lVar19 * lVar19;
            if (puVar9 != *(undefined1 **)(puVar15 + 0x48)) {
              lVar14 = (long)((iVar18 - *(int *)(puVar15 + 0x3c)) * 10);
              lVar19 = lVar19 + (lVar14 * lVar14 >> 1);
            }
          }
          lVar14 = (long)((iVar18 - iVar6) * 10);
          lVar19 = (lVar14 * lVar14 >> 1) + lVar19 + *(long *)(puVar15 + 0x40);
          if (lVar19 < lVar20) {
            lVar20 = lVar19;
            unused_word_type._20_4_ = iVar18;
            unused_word_type._32_8_ = puVar12;
          }
        } while ((puVar9 != puVar12) &&
                (iVar18 = iVar18 + *(int *)(puVar15 + 0x30) + *(int *)(puVar15 + 0xc),
                puVar15 = puVar12, iVar18 < iVar11));
LAB_00100421:
        lVar19 = 0x1324;
        iVar18 = unused_word_type._8_4_;
      }
      else {
        iVar18 = *(int *)(puVar16 + 8);
        lVar20 = 0x7fffffffffffffff;
        iVar17 = iVar7 + iVar18;
        puVar15 = puVar16;
        do {
          puVar12 = puVar15 + 0x28;
          if (puVar9 == puVar12) {
            lVar19 = *(long *)(puVar9 + 0x18);
            if (lVar19 < lVar20) {
              *(undefined1 **)(puVar16 + 0x20) = puVar9;
              *(int *)(puVar16 + 0x14) = iVar17;
              lVar20 = lVar19;
            }
            break;
          }
          lVar19 = (long)((iVar10 - iVar17) * 10);
          lVar19 = lVar19 * lVar19;
          if (puVar9 != *(undefined1 **)(puVar15 + 0x48)) {
            lVar14 = (long)((iVar17 - *(int *)(puVar15 + 0x3c)) * 10);
            lVar19 = lVar19 + (lVar14 * lVar14 >> 1);
          }
          lVar14 = *(long *)(puVar15 + 0x40);
          if (lVar19 + lVar14 < lVar20) {
            *(undefined1 **)(puVar16 + 0x20) = puVar12;
            *(int *)(puVar16 + 0x14) = iVar17;
            lVar20 = lVar19 + lVar14;
          }
          iVar17 = iVar17 + *(int *)(puVar15 + 0x30) + *(int *)(puVar15 + 0xc);
          puVar15 = puVar12;
        } while (iVar17 < iVar11);
        lVar19 = 0x1324;
        if (unused_word_type < puVar16) {
          bVar1 = puVar16[-0x18];
          if ((bVar1 & 2) == 0) {
            lVar19 = 0xce4;
            if (((bVar1 & 4) == 0) && (lVar19 = 0x1324, (puVar16[-0x40] & 8) != 0)) {
              auVar5._8_8_ = 0;
              auVar5._0_8_ = SUB168(SEXT816(40000),8);
              lVar19 = SUB168((auVar5 << 0x40 | ZEXT816(40000)) /
                              SEXT816((long)(*(int *)(puVar16 + -0x20) + 2)),0) + 0x1324;
            }
          }
          else {
            lVar19 = (ulong)(-(uint)((bVar1 & 8) == 0) & 0x58804) + 0x960;
          }
        }
      }
      if ((puVar16[0x10] & 1) == 0) {
        if ((puVar16[0x10] & 8) != 0) {
          auVar4._8_8_ = 0;
          auVar4._0_8_ = SUB168(SEXT816(0x57e4),8);
          lVar19 = lVar19 + SUB168((auVar4 << 0x40 | ZEXT816(0x57e4)) / SEXT816((long)(iVar18 + 2)),
                                   0);
        }
      }
      else {
        lVar19 = lVar19 + -0x640;
      }
      puVar15 = puVar16 + -0x28;
      *(long *)(puVar16 + 0x18) = lVar19 + lVar20;
      puVar16 = puVar15;
    } while (puVar13 < puVar15);
    if (puVar15 < unused_word_type) goto LAB_00100287;
  }
  do {
    if (puVar15 == unused_word_type) {
      lVar20 = 0x7fffffffffffffff;
      iVar18 = iVar8 + unused_word_type._8_4_;
      puVar16 = unused_word_type;
      if (iVar6 < 1) {
        puVar16 = unused_word_type;
        do {
          puVar13 = puVar16 + 0x28;
          if (puVar9 == puVar13) {
            if (*(long *)(puVar9 + 0x18) < lVar20) {
              unused_word_type._32_8_ = puVar9;
              lVar20 = *(long *)(puVar9 + 0x18);
              unused_word_type._20_4_ = iVar18;
            }
            break;
          }
          lVar19 = (long)((iVar10 - iVar18) * 10);
          lVar19 = lVar19 * lVar19;
          if (puVar9 != *(undefined1 **)(puVar16 + 0x48)) {
            lVar14 = (long)((iVar18 - *(int *)(puVar16 + 0x3c)) * 10);
            lVar19 = lVar19 + (lVar14 * lVar14 >> 1);
          }
          if (lVar19 + *(long *)(puVar16 + 0x40) < lVar20) {
            lVar20 = lVar19 + *(long *)(puVar16 + 0x40);
            unused_word_type._20_4_ = iVar18;
            unused_word_type._32_8_ = puVar13;
          }
          iVar18 = iVar18 + *(int *)(puVar16 + 0x30) + *(int *)(puVar16 + 0xc);
          puVar16 = puVar13;
        } while (iVar18 < iVar11);
      }
      else {
        do {
          puVar13 = puVar16 + 0x28;
          if (puVar9 == puVar13) {
            lVar19 = (long)((iVar18 - iVar6) * 10);
            lVar19 = (lVar19 * lVar19 >> 1) + *(long *)(puVar9 + 0x18);
            if (lVar19 < lVar20) {
LAB_001004a7:
              lVar20 = lVar19;
              unused_word_type._20_4_ = iVar18;
              unused_word_type._32_8_ = puVar13;
            }
            if (puVar9 == puVar13) break;
          }
          else {
            lVar19 = (long)((iVar10 - iVar18) * 10);
            lVar19 = lVar19 * lVar19;
            if (puVar9 != *(undefined1 **)(puVar16 + 0x48)) {
              lVar14 = (long)((iVar18 - *(int *)(puVar16 + 0x3c)) * 10);
              lVar19 = lVar19 + (lVar14 * lVar14 >> 1);
            }
            lVar14 = (long)((iVar18 - iVar6) * 10);
            lVar19 = (lVar14 * lVar14 >> 1) + lVar19 + *(long *)(puVar16 + 0x40);
            if (lVar19 < lVar20) goto LAB_001004a7;
          }
          iVar18 = iVar18 + *(int *)(puVar16 + 0x30) + *(int *)(puVar16 + 0xc);
          puVar16 = puVar13;
        } while (iVar18 < iVar11);
      }
      lVar19 = 0x1324;
      iVar18 = unused_word_type._8_4_;
    }
    else {
      iVar18 = *(int *)(puVar15 + 8);
      lVar20 = 0x7fffffffffffffff;
      iVar17 = iVar7 + iVar18;
      puVar16 = puVar15;
      do {
        puVar13 = puVar16 + 0x28;
        if (puVar9 == puVar13) {
          lVar19 = *(long *)(puVar9 + 0x18);
          if (lVar19 < lVar20) {
            *(undefined1 **)(puVar15 + 0x20) = puVar9;
            *(int *)(puVar15 + 0x14) = iVar17;
            lVar20 = lVar19;
          }
          break;
        }
        lVar19 = (long)((iVar10 - iVar17) * 10);
        lVar19 = lVar19 * lVar19;
        if (puVar9 != *(undefined1 **)(puVar16 + 0x48)) {
          lVar14 = (long)((iVar17 - *(int *)(puVar16 + 0x3c)) * 10);
          lVar19 = lVar19 + (lVar14 * lVar14 >> 1);
        }
        lVar14 = *(long *)(puVar16 + 0x40);
        if (lVar19 + lVar14 < lVar20) {
          *(undefined1 **)(puVar15 + 0x20) = puVar13;
          *(int *)(puVar15 + 0x14) = iVar17;
          lVar20 = lVar19 + lVar14;
        }
        iVar17 = iVar17 + *(int *)(puVar16 + 0x30) + *(int *)(puVar16 + 0xc);
        puVar16 = puVar13;
      } while (iVar17 < iVar11);
      lVar19 = 0x1324;
      if (unused_word_type < puVar15) {
        bVar1 = puVar15[-0x18];
        if ((bVar1 & 2) == 0) {
          lVar19 = (ulong)(-(uint)((bVar1 & 4) == 0) & 0x640) + 0xce4;
        }
        else {
          lVar19 = (ulong)(-(uint)((bVar1 & 8) == 0) & 0x58804) + 0x960;
        }
      }
    }
    if ((puVar15[0x10] & 1) == 0) {
      if ((puVar15[0x10] & 8) != 0) {
        auVar3._8_8_ = 0;
        auVar3._0_8_ = SUB168(SEXT816(0x57e4),8);
        lVar19 = lVar19 + SUB168((auVar3 << 0x40 | ZEXT816(0x57e4)) / SEXT816((long)(iVar18 + 2)),0)
        ;
      }
    }
    else {
      lVar19 = lVar19 + -0x640;
    }
    puVar16 = puVar15 + -0x28;
    *(long *)(puVar15 + 0x18) = lVar19 + lVar20;
    puVar15 = puVar16;
  } while ((undefined1 *)0x101a1f < puVar16);
LAB_00100287:
  *(undefined4 *)(puVar9 + 8) = uVar2;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void put_space(int param_1)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar1 = out_column + param_1;
  iVar3 = out_column;
  if (tabs != '\0') {
    uVar4 = uVar1 + 7;
    if (-1 < (int)uVar1) {
      uVar4 = uVar1;
    }
    if (out_column + 1 < (int)(uVar4 & 0xfffffff8)) {
      do {
        pcVar2 = _stdout->_IO_write_ptr;
        if (pcVar2 < _stdout->_IO_write_end) {
          _stdout->_IO_write_ptr = pcVar2 + 1;
          *pcVar2 = '\t';
        }
        else {
          __overflow(_stdout,9);
        }
        iVar3 = out_column + 7;
        if (-1 < out_column) {
          iVar3 = out_column;
        }
        iVar5 = (iVar3 >> 3) + 1;
        out_column = iVar5 * 8;
        iVar3 = out_column;
      } while (iVar5 < (int)uVar4 >> 3);
    }
  }
  do {
    if ((int)uVar1 <= iVar3) {
      return;
    }
    while (pcVar2 = _stdout->_IO_write_ptr, _stdout->_IO_write_end <= pcVar2) {
      __overflow(_stdout,0x20);
      iVar3 = out_column + 1;
      out_column = iVar3;
      if ((int)uVar1 <= iVar3) {
        return;
      }
    }
    _stdout->_IO_write_ptr = pcVar2 + 1;
    out_column = iVar3 + 1;
    *pcVar2 = ' ';
    iVar3 = iVar3 + 1;
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void put_line(undefined8 *param_1,int param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  long lVar3;
  byte *pbVar4;
  char *pcVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  
  out_column = 0;
  put_space(prefix_indent);
  fputs_unlocked(prefix,_stdout);
  out_column = prefix_length + out_column;
  put_space(param_2 - out_column);
  lVar3 = param_1[4];
  if (param_1 != (undefined8 *)(lVar3 + -0x28)) {
    do {
      uVar8 = *(uint *)(param_1 + 1);
      pbVar4 = (byte *)*param_1;
      if (uVar8 != 0) {
        pbVar6 = pbVar4;
        do {
          pbVar7 = pbVar6 + 1;
          bVar2 = *pbVar6;
          pbVar6 = (byte *)_stdout->_IO_write_ptr;
          if (pbVar6 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = (char *)(pbVar6 + 1);
            *pbVar6 = bVar2;
          }
          else {
            __overflow(_stdout,(uint)bVar2);
          }
          pbVar6 = pbVar7;
        } while (pbVar7 != pbVar4 + uVar8);
        uVar8 = *(uint *)(param_1 + 1);
      }
      puVar1 = (undefined4 *)((long)param_1 + 0xc);
      param_1 = param_1 + 5;
      out_column = out_column + uVar8;
      put_space(*puVar1);
    } while ((undefined8 *)(lVar3 + -0x28) != param_1);
  }
  uVar8 = *(uint *)(lVar3 + -0x20);
  pbVar4 = *(byte **)(lVar3 + -0x28);
  pbVar6 = pbVar4;
  if (uVar8 != 0) {
    do {
      pbVar7 = pbVar6 + 1;
      bVar2 = *pbVar6;
      pbVar6 = (byte *)_stdout->_IO_write_ptr;
      if (pbVar6 < _stdout->_IO_write_end) {
        _stdout->_IO_write_ptr = (char *)(pbVar6 + 1);
        *pbVar6 = bVar2;
      }
      else {
        __overflow(_stdout,(uint)bVar2);
      }
      pbVar6 = pbVar7;
    } while (pbVar7 != pbVar4 + uVar8);
    uVar8 = *(uint *)(lVar3 + -0x20);
  }
  last_line_length = uVar8 + out_column;
  pcVar5 = _stdout->_IO_write_ptr;
  out_column = last_line_length;
  if (pcVar5 < _stdout->_IO_write_end) {
    _stdout->_IO_write_ptr = pcVar5 + 1;
    *pcVar5 = '\n';
    return;
  }
  __overflow(_stdout,10);
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
    word_limit = (long *)((long)plVar6 - (long)(plVar7 + -0x20344));
    return;
  }
  fwrite_unlocked(parabuf,1,(long)wptr - 0x10b680,_stdout);
  wptr = parabuf;
  return;
}



void get_prefix(_IO_FILE *param_1)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  
  pbVar6 = (byte *)param_1->_IO_read_ptr;
  in_column = 0;
  if (param_1->_IO_read_end <= pbVar6) goto LAB_00100a51;
  param_1->_IO_read_ptr = (char *)(pbVar6 + 1);
  uVar3 = (uint)*pbVar6;
  iVar4 = 0;
  do {
    while (uVar3 == 0x20) {
      iVar4 = iVar4 + 1;
      pbVar6 = (byte *)param_1->_IO_read_ptr;
      in_column = iVar4;
      if (param_1->_IO_read_end <= pbVar6) goto LAB_00100a51;
LAB_00100a2e:
      in_column = iVar4;
      param_1->_IO_read_ptr = (char *)(pbVar6 + 1);
      uVar3 = (uint)*pbVar6;
    }
    if (uVar3 != 9) break;
    tabs = 1;
    iVar2 = iVar4 + 7;
    if (-1 < iVar4) {
      iVar2 = iVar4;
    }
    iVar4 = (iVar2 >> 3) * 8 + 8;
    pbVar6 = (byte *)param_1->_IO_read_ptr;
    in_column = iVar4;
    if (pbVar6 < param_1->_IO_read_end) goto LAB_00100a2e;
LAB_00100a51:
    uVar3 = __uflow(param_1);
    iVar4 = in_column;
  } while( true );
  next_prefix_indent = iVar4;
  if (prefix_length == 0) {
    next_prefix_indent = prefix_lead_space;
    if (iVar4 < prefix_lead_space) {
      next_prefix_indent = iVar4;
    }
  }
  else {
    uVar5 = (uint)*prefix;
    pbVar6 = prefix;
    if (*prefix != 0) {
      do {
        while( true ) {
          if (uVar5 != uVar3) {
            return;
          }
          in_column = in_column + 1;
          pbVar1 = (byte *)param_1->_IO_read_ptr;
          if (pbVar1 < param_1->_IO_read_end) break;
          pbVar6 = pbVar6 + 1;
          uVar3 = __uflow(param_1);
          uVar5 = (uint)*pbVar6;
          if (*pbVar6 == 0) goto LAB_00100b37;
        }
        pbVar6 = pbVar6 + 1;
        param_1->_IO_read_ptr = (char *)(pbVar1 + 1);
        uVar5 = (uint)*pbVar6;
        uVar3 = (uint)*pbVar1;
      } while (*pbVar6 != 0);
LAB_00100b37:
      do {
        if (uVar3 != 0x20) {
          if (uVar3 != 9) {
            return;
          }
          tabs = 1;
          iVar4 = in_column + 7;
          if (-1 < in_column) {
            iVar4 = in_column;
          }
          in_column = (iVar4 >> 3) * 8 + 8;
          pbVar6 = (byte *)param_1->_IO_read_ptr;
          if (pbVar6 < param_1->_IO_read_end) goto LAB_00100b2c;
LAB_00100b55:
          uVar3 = __uflow(param_1);
          goto LAB_00100b37;
        }
        in_column = in_column + 1;
        pbVar6 = (byte *)param_1->_IO_read_ptr;
        if (param_1->_IO_read_end <= pbVar6) goto LAB_00100b55;
LAB_00100b2c:
        param_1->_IO_read_ptr = (char *)(pbVar6 + 1);
        uVar3 = (uint)*pbVar6;
      } while( true );
    }
  }
  return;
}



void get_line(_IO_FILE *param_1,uint param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  ushort **ppuVar7;
  byte *pbVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  byte bVar12;
  byte *pbVar13;
  
LAB_00100b88:
  puVar5 = wptr;
  *word_limit = wptr;
  if (puVar5 == &out_column) goto LAB_00100d46;
LAB_00100ba0:
  puVar10 = (undefined4 *)((long)puVar5 + 1);
  *(char *)puVar5 = (char)param_2;
  pbVar8 = (byte *)param_1->_IO_read_ptr;
  wptr = puVar10;
  if (pbVar8 < param_1->_IO_read_end) {
    param_1->_IO_read_ptr = (char *)(pbVar8 + 1);
    param_2 = (uint)*pbVar8;
  }
  else {
    param_2 = __uflow(param_1);
    puVar10 = wptr;
    if (param_2 == 0xffffffff) goto LAB_00100bdc;
  }
  if ((int)param_2 < 0xe) {
    if (8 < (int)param_2) goto LAB_00100bdc;
  }
  else if (param_2 == 0x20) goto LAB_00100bdc;
  puVar5 = puVar10;
  if (puVar10 == &out_column) {
LAB_00100d46:
    if (split == '\0') {
      if (crown == '\0') {
        if (tagged == '\0') {
          other_indent = first_indent;
        }
        else if (in_column == first_indent) {
          if (other_indent == in_column) {
            other_indent = -(uint)(in_column == 0) & 3;
          }
        }
        else {
          other_indent = in_column;
        }
      }
      else {
        other_indent = in_column;
      }
    }
    else {
      other_indent = first_indent;
    }
    flush_paragraph();
    puVar5 = wptr;
  }
  goto LAB_00100ba0;
LAB_00100bdc:
  puVar11 = word_limit;
  pbVar2 = (byte *)*word_limit;
  iVar9 = (int)puVar10 - (int)pbVar2;
  *(int *)(word_limit + 1) = iVar9;
  uVar3 = in_column + iVar9;
  pbVar8 = pbVar2 + (long)iVar9 + -1;
  in_column = uVar3;
  pcVar6 = strchr("([\'`\"",(int)(char)*pbVar2);
  ppuVar7 = __ctype_b_loc();
  *(byte *)(puVar11 + 2) =
       (byte)(*ppuVar7)[*pbVar8] & 4 | pcVar6 != (char *)0x0 | *(byte *)(puVar11 + 2) & 0xfa;
  if (pbVar2 < pbVar8) {
    do {
      pbVar13 = pbVar8;
      iVar9 = (int)(char)*pbVar13;
      pcVar6 = strchr(")]\'\"",iVar9);
      if (pcVar6 == (char *)0x0) goto LAB_00100c89;
      pbVar8 = pbVar13 + -1;
    } while (pbVar2 != pbVar13 + -1);
    iVar9 = (int)(char)pbVar13[-1];
  }
  else {
    iVar9 = (int)(char)*pbVar8;
  }
LAB_00100c89:
  pcVar6 = strchr(".?!",iVar9);
  *(byte *)(puVar11 + 2) = *(byte *)(puVar11 + 2) & 0xfd | (pcVar6 != (char *)0x0) * '\x02';
  uVar4 = uVar3;
  do {
    while (puVar11 = word_limit, param_2 == 0x20) {
      uVar4 = uVar4 + 1;
      pbVar8 = (byte *)param_1->_IO_read_ptr;
      in_column = uVar4;
      if (pbVar8 < param_1->_IO_read_end) goto LAB_00100cf3;
LAB_00100d18:
      param_2 = __uflow(param_1);
      uVar4 = in_column;
    }
    if (param_2 != 9) break;
    tabs = 1;
    if ((int)uVar4 < 0) {
      uVar4 = uVar4 + 7;
    }
    pbVar8 = (byte *)param_1->_IO_read_ptr;
    uVar4 = ((int)uVar4 >> 3) * 8 + 8;
    in_column = uVar4;
    if (param_1->_IO_read_end <= pbVar8) goto LAB_00100d18;
LAB_00100cf3:
    in_column = uVar4;
    param_1->_IO_read_ptr = (char *)(pbVar8 + 1);
    param_2 = (uint)*pbVar8;
  } while( true );
  *(uint *)((long)word_limit + 0xc) = uVar4 - uVar3;
  if (param_2 == 0xffffffff) {
    *(byte *)(puVar11 + 2) = *(byte *)(puVar11 + 2) | 8;
LAB_00100e2c:
    *(uint *)((long)puVar11 + 0xc) = ((*(byte *)(puVar11 + 2) & 8) != 0) + 1;
    if (puVar11 != (undefined8 *)(unused_word_type + 0x9bf0)) goto LAB_00100e4c;
  }
  else {
    bVar1 = *(byte *)(puVar11 + 2);
    if ((bVar1 & 2) == 0) {
      *(byte *)(puVar11 + 2) = bVar1 & 0xf7;
      if (param_2 != 10) goto LAB_00100df9;
      goto LAB_00100e2c;
    }
    if (param_2 == 10) {
      *(byte *)(puVar11 + 2) = bVar1 | 8;
      goto LAB_00100e2c;
    }
    bVar12 = bVar1 | 8;
    if ((int)(uVar4 - uVar3) < 2) {
      bVar12 = bVar1 & 0xf7;
    }
    *(byte *)(puVar11 + 2) = bVar12;
LAB_00100df9:
    if (uniform != '\0') goto LAB_00100e2c;
    if (puVar11 != (undefined8 *)(unused_word_type + 0x9bf0)) {
      word_limit = puVar11 + 5;
      goto LAB_00100b88;
    }
  }
  if (split == '\0') {
    uVar3 = uVar4;
    if (crown == '\0') {
      if (tagged == '\0') {
        other_indent = first_indent;
        uVar3 = other_indent;
      }
      else if ((uVar4 == first_indent) && (uVar3 = other_indent, other_indent == uVar4)) {
        uVar3 = -(uint)(uVar4 == 0) & 3;
      }
    }
  }
  else {
    other_indent = first_indent;
    uVar3 = other_indent;
  }
  other_indent = uVar3;
  flush_paragraph();
  puVar11 = word_limit;
LAB_00100e4c:
  word_limit = puVar11 + 5;
  if ((param_2 == 10) || (param_2 == 0xffffffff)) {
    get_prefix(param_1);
    return;
  }
  goto LAB_00100b88;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 fmt(_IO_FILE *param_1,undefined8 param_2)

{
  byte bVar1;
  byte *pbVar2;
  char *pcVar3;
  undefined1 *puVar4;
  bool bVar5;
  undefined1 *puVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  int *piVar10;
  undefined8 uVar11;
  undefined *puVar12;
  uint uVar13;
  uint uVar14;
  
  fadvise(param_1,2);
  tabs = 0;
  other_indent = 0;
  next_char = get_prefix(param_1);
LAB_00100fcf:
  last_line_length = 0;
  uVar13 = next_char;
  do {
    if ((uVar13 == 10) || (uVar13 == 0xffffffff)) {
      out_column = 0;
      bVar5 = uVar13 != 10 && uVar13 != 0xffffffff;
      if (next_prefix_indent < (int)in_column) goto LAB_0010102e;
      if (bVar5) goto LAB_00101190;
LAB_0010114f:
      if (uVar13 == 0xffffffff) goto LAB_001010da;
    }
    else {
      if ((prefix_lead_space <= next_prefix_indent) &&
         (prefix_full_length + next_prefix_indent <= (int)in_column)) break;
      if (next_prefix_indent < (int)in_column) {
        bVar5 = true;
LAB_0010102e:
        out_column = 0;
        put_space();
        pbVar9 = prefix;
        uVar7 = out_column;
        uVar14 = in_column;
        if (in_column != out_column) {
LAB_00101069:
          do {
            while( true ) {
              bVar1 = *pbVar9;
              if (bVar1 == 0) goto LAB_001010b0;
              pbVar2 = (byte *)_stdout->_IO_write_ptr;
              if (pbVar2 < _stdout->_IO_write_end) break;
              __overflow(_stdout,(uint)bVar1);
              out_column = out_column + 1;
              pbVar9 = pbVar9 + 1;
              uVar7 = out_column;
              uVar14 = in_column;
              if (out_column == in_column) goto LAB_001010b0;
            }
            uVar7 = uVar7 + 1;
            _stdout->_IO_write_ptr = (char *)(pbVar2 + 1);
            out_column = uVar7;
            *pbVar2 = bVar1;
            pbVar9 = pbVar9 + 1;
          } while (uVar7 != uVar14);
        }
LAB_001010b0:
        if (!bVar5) {
          if (uVar13 != 0xffffffff) goto LAB_00101158;
          if (prefix_length + next_prefix_indent <= (int)in_column) {
            pcVar3 = _stdout->_IO_write_ptr;
            if (pcVar3 < _stdout->_IO_write_end) {
              _stdout->_IO_write_ptr = pcVar3 + 1;
              *pcVar3 = '\n';
            }
            else {
              __overflow(_stdout,10);
            }
          }
LAB_001010da:
          next_char = 0xffffffff;
          uVar13 = param_1->_flags & 0x20;
          if (_stdin == param_1) {
            clearerr_unlocked(param_1);
joined_r0x0010149a:
            if (uVar13 == 0) {
              return 1;
            }
LAB_001014a0:
            uVar11 = quotearg_n_style_colon(0,3,param_2);
          }
          else {
            iVar8 = rpl_fclose(param_1);
            if (iVar8 == 0) goto joined_r0x0010149a;
            if (uVar13 != 0) goto LAB_001014a0;
            piVar10 = __errno_location();
            iVar8 = *piVar10;
            if (iVar8 < 0) {
              return 1;
            }
            uVar11 = quotearg_n_style_colon(0,3,param_2);
            puVar12 = &_LC3;
            if (iVar8 != 0) goto LAB_001014cc;
          }
          iVar8 = 0;
          puVar12 = (undefined *)dcgettext(0,"read error",5);
LAB_001014cc:
          error(0,iVar8,puVar12,uVar11);
          return 0;
        }
        iVar8 = uVar14 - uVar7;
      }
      else {
LAB_00101190:
        out_column = 0;
        put_space();
        iVar8 = 0;
        bVar5 = true;
        pbVar9 = prefix;
        uVar7 = out_column;
        uVar14 = in_column;
        if (out_column != in_column) goto LAB_00101069;
      }
      put_space(iVar8);
      do {
        while( true ) {
          pcVar3 = _stdout->_IO_write_ptr;
          if (pcVar3 < _stdout->_IO_write_end) break;
          __overflow(_stdout,uVar13 & 0xff);
          pbVar9 = (byte *)param_1->_IO_read_ptr;
          if (pbVar9 < param_1->_IO_read_end) goto LAB_001011e4;
LAB_00101220:
          uVar13 = __uflow(param_1);
          if (uVar13 == 10) goto LAB_0010114f;
          if (uVar13 == 0xffffffff) goto LAB_001010da;
        }
        _stdout->_IO_write_ptr = pcVar3 + 1;
        *pcVar3 = (char)uVar13;
        pbVar9 = (byte *)param_1->_IO_read_ptr;
        if (param_1->_IO_read_end <= pbVar9) goto LAB_00101220;
LAB_001011e4:
        param_1->_IO_read_ptr = (char *)(pbVar9 + 1);
        uVar13 = (uint)*pbVar9;
      } while (*pbVar9 != 10);
    }
LAB_00101158:
    pcVar3 = _stdout->_IO_write_ptr;
    if (pcVar3 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = pcVar3 + 1;
      *pcVar3 = '\n';
    }
    else {
      __overflow(_stdout,10);
    }
    uVar13 = get_prefix(param_1);
  } while( true );
  prefix_indent = next_prefix_indent;
  first_indent = in_column;
  wptr = parabuf;
  word_limit = unused_word_type;
  uVar7 = get_line(param_1,uVar13);
  uVar13 = first_indent;
  if ((next_prefix_indent == prefix_indent) &&
     (((next_prefix_indent + prefix_full_length <= (int)in_column && (uVar7 != 10)) &&
      (uVar7 != 0xffffffff)))) {
    if (split != '\0') {
LAB_00101361:
      other_indent = first_indent;
      goto LAB_001012fb;
    }
    if (crown != '\0') {
      other_indent = in_column;
LAB_0010157e:
      if (((next_prefix_indent + prefix_full_length <= (int)in_column) && (uVar7 != 10)) &&
         (uVar7 != 0xffffffff)) {
        while ((uVar7 = get_line(param_1), next_prefix_indent == prefix_indent &&
               (next_prefix_indent + prefix_full_length <= (int)in_column))) {
          if ((uVar7 == 10) || ((uVar7 == 0xffffffff || (in_column != other_indent)))) break;
        }
      }
      goto LAB_001012fb;
    }
    if (tagged == '\0') goto LAB_001013f7;
    if (in_column == first_indent) goto LAB_001013e1;
    other_indent = in_column;
  }
  else {
    if (split != '\0') goto LAB_00101361;
    if (crown != '\0') {
      other_indent = first_indent;
      if (next_prefix_indent != prefix_indent) goto LAB_001012fb;
      goto LAB_0010157e;
    }
    if (tagged == '\0') {
LAB_001013f7:
      other_indent = uVar13;
      if (tagged == '\0') {
        if (next_prefix_indent == prefix_indent) {
          while (((next_prefix_indent + prefix_full_length <= (int)in_column && (uVar7 != 10)) &&
                 (uVar7 != 0xffffffff))) {
            if ((in_column != other_indent) ||
               (uVar7 = get_line(param_1), next_prefix_indent != prefix_indent)) break;
          }
        }
        goto LAB_001012fb;
      }
    }
    else {
LAB_001013e1:
      if (other_indent == first_indent) {
        uVar13 = -(uint)(first_indent == 0) & 3;
        goto LAB_001013f7;
      }
    }
    if (next_prefix_indent != prefix_indent) goto LAB_001012fb;
  }
  if (((next_prefix_indent + prefix_full_length <= (int)in_column) && (uVar7 != 10)) &&
     ((uVar7 != 0xffffffff && (in_column != first_indent)))) {
    while (((uVar7 = get_line(param_1), next_prefix_indent == prefix_indent &&
            (next_prefix_indent + prefix_full_length <= (int)in_column)) && (uVar7 != 10))) {
      if ((uVar7 == 0xffffffff) || (in_column != other_indent)) break;
    }
  }
LAB_001012fb:
  next_char = uVar7;
  puVar6 = word_limit;
  uVar13 = first_indent;
  word_limit[-0x18] = word_limit[-0x18] | 10;
  fmt_paragraph();
  put_line(unused_word_type,uVar13);
  for (puVar4 = (undefined1 *)unused_word_type._32_8_; puVar4 != puVar6;
      puVar4 = *(undefined1 **)(puVar4 + 0x20)) {
    put_line(puVar4,other_indent);
  }
  goto LAB_00100fcf;
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
    goto LAB_0010164a;
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
    if (pcVar4 != (char *)0x0) goto LAB_0010189d;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC6);
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
LAB_0010189d:
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
LAB_0010164a:
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
  cVar13 = '5';
  while (iVar3 = getopt_long(param_1,puVar12,"0123456789cstuw:p:g:",long_options,0), iVar3 != -1) {
    if (0x77 < iVar3) {
LAB_0010d536:
      usage(1);
      goto LAB_0010d540;
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
        goto LAB_0010d5af;
      }
switchD_0010d22b_caseD_64:
      if (iVar3 - 0x30U < 10) {
        uVar7 = dcgettext(0,
                          "invalid option -- %c; -WIDTH is recognized only when it is the first\noption; use -w N instead"
                          ,5);
        error(0,0,uVar7,iVar3);
      }
      goto LAB_0010d536;
    }
    switch(iVar3) {
    case 99:
      crown = 1;
      break;
    default:
      goto switchD_0010d22b_caseD_64;
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
    if (local_48 == (char *)0x0) goto LAB_0010d4e8;
LAB_0010d540:
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
LAB_0010d4e8:
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
    if (param_1 <= _optind) goto LAB_0010d4c9;
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
LAB_0010d5af:
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
    if (cVar13 == '\0') goto LAB_0010d4c9;
  }
  iVar3 = rpl_fclose(_stdin);
  if (iVar3 != 0) {
    uVar7 = dcgettext(0,"closing standard input",5);
    piVar9 = __errno_location();
    error(1,*piVar9,&_LC3,uVar7);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_0010d4c9:
  return bVar2 ^ 1;
}


