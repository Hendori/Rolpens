
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void write_error(void)

{
  uchar *puVar1;
  char *pcVar2;
  bool bVar3;
  uchar uVar4;
  byte extraout_AL;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  undefined8 uVar10;
  size_t sVar11;
  FILE *pFVar12;
  byte *pbVar13;
  byte bVar14;
  FILE *pFVar15;
  FILE *pFVar16;
  FILE *extraout_RDX;
  FILE *pFVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  uint uVar21;
  _IO_FILE *__stream;
  _IO_FILE *p_Var22;
  size_t sVar23;
  byte bVar24;
  byte bVar25;
  
  piVar9 = __errno_location();
  iVar8 = *piVar9;
  fflush_unlocked(_stdout);
  fpurge(_stdout);
  clearerr_unlocked(_stdout);
  uVar10 = dcgettext(0,"write error",5);
  __stream = (_IO_FILE *)0x1;
  error(1,iVar8,uVar10);
  current_rp = _frp;
  pbVar13 = (byte *)__stream->_IO_read_ptr;
  if (pbVar13 < __stream->_IO_read_end) {
    __stream->_IO_read_ptr = (char *)(pbVar13 + 1);
    uVar18 = (uint)*pbVar13;
  }
  else {
    uVar18 = __uflow(__stream);
    if (uVar18 == 0xffffffff) {
      return;
    }
  }
  sVar23 = 1;
  ungetc(uVar18,__stream);
  bVar25 = 0;
  pFVar16 = (FILE *)0x0;
  bVar24 = 1 < current_rp->lo ^ suppress_non_delimited;
joined_r0x001000ca:
  do {
    bVar5 = sVar23 == 1 & bVar24;
    if (bVar5 == 0) {
LAB_001000d7:
      if (sVar23 < current_rp->lo) goto LAB_001002e2;
      pFVar17 = pFVar16;
      if (bVar25 != 0) {
        uVar20 = 1;
        pFVar15 = _stdout;
        sVar11 = fwrite_unlocked(output_delimiter_string,1,output_delimiter_length,_stdout);
        if (output_delimiter_length != sVar11) goto LAB_00100370;
      }
LAB_00100170:
      do {
        pFVar16 = pFVar17;
        uVar18 = (uint)pFVar16;
        pbVar13 = (byte *)__stream->_IO_read_ptr;
        if (pbVar13 < __stream->_IO_read_end) {
          uVar19 = (uint)delim;
          pFVar15 = (FILE *)(ulong)uVar19;
          __stream->_IO_read_ptr = (char *)(pbVar13 + 1);
          bVar25 = *pbVar13;
          pFVar17 = (FILE *)(ulong)bVar25;
          uVar6 = (uint)bVar25;
          if (bVar25 == uVar19) goto LAB_00100450;
          pFVar12 = (FILE *)(ulong)line_delim;
          bVar5 = line_delim;
          if ((uint)bVar25 == (uint)line_delim) goto LAB_00100378;
        }
        else {
          uVar6 = __uflow(__stream);
          uVar19 = (uint)delim;
          pFVar15 = (FILE *)(ulong)uVar19;
          pFVar12 = (FILE *)(ulong)uVar6;
          if (uVar19 == uVar6) {
LAB_00100450:
            uVar7 = (uint)pFVar15;
            bVar25 = 1;
            if ((uchar)pFVar15 == line_delim) {
              bVar25 = 1;
              uVar21 = (uint)line_delim;
              pFVar12 = pFVar15;
              bVar5 = line_delim;
              if (uVar6 != uVar7) goto LAB_001001c0;
              goto LAB_00100394;
            }
            goto LAB_00100333;
          }
          uVar21 = (uint)line_delim;
          if ((uVar21 == uVar6) || (pFVar17 = pFVar12, uVar6 == 0xffffffff)) {
            bVar5 = line_delim;
            if (delim == line_delim) goto LAB_00100383;
            bVar25 = 1;
            goto LAB_001001c0;
          }
        }
        pcVar2 = _stdout->_IO_write_ptr;
        if (pcVar2 < _stdout->_IO_write_end) {
          _stdout->_IO_write_ptr = pcVar2 + 1;
          *pcVar2 = (char)pFVar17;
          goto LAB_00100170;
        }
        uVar20 = (ulong)pFVar17 & 0xff;
        iVar8 = __overflow(_stdout,(int)uVar20);
      } while (-1 < iVar8);
    }
    else {
LAB_001001e8:
      do {
        do {
          do {
            pFVar16 = (FILE *)0xffffffffffffffff;
            sVar23 = getndelim2(&field_1_buffer,&field_1_bufsize,0,0xffffffffffffffff,delim,
                                line_delim,__stream);
            if ((long)sVar23 < 0) {
              p_Var22 = (_IO_FILE *)field_1_buffer;
              free(field_1_buffer);
              field_1_buffer = (char *)0x0;
              if ((__stream->_flags & 0x30) != 0) {
                field_1_buffer = (char *)0x0;
                return;
              }
              xalloc_die();
              bVar3 = false;
              uVar20 = 0;
              current_rp = _frp;
              goto LAB_00100680;
            }
            if (sVar23 == 0) {
                    /* WARNING: Subroutine does not return */
              __assert_fail("n_bytes != 0","src/cut.c",0x140,"cut_fields");
            }
            pFVar16 = (FILE *)(sVar23 - 1);
            pFVar15 = _stdout;
            if (delim == field_1_buffer[sVar23 - 1]) {
              bVar14 = bVar25;
              if (current_rp->lo < 2) {
                uVar20 = 1;
                pFVar12 = (FILE *)fwrite_unlocked(field_1_buffer,1,(size_t)pFVar16,_stdout);
                if (pFVar16 != pFVar12) goto LAB_00100370;
                bVar14 = bVar5;
                if (delim == line_delim) {
                  pbVar13 = (byte *)__stream->_IO_read_ptr;
                  if (pbVar13 < __stream->_IO_read_end) {
                    __stream->_IO_read_ptr = (char *)(pbVar13 + 1);
                    uVar18 = (uint)*pbVar13;
                  }
                  else {
                    uVar18 = __uflow(__stream);
                    bVar14 = bVar25;
                    if (uVar18 == 0xffffffff) goto LAB_001004c5;
                  }
                  ungetc(uVar18,__stream);
                  bVar14 = bVar5;
                }
              }
LAB_001004c5:
              bVar25 = bVar14;
              if (current_rp->hi < 2) {
                current_rp = current_rp + 1;
                sVar23 = 2;
                pFVar16 = (FILE *)0x0;
              }
              else {
                sVar23 = 2;
                pFVar16 = (FILE *)0x0;
              }
              goto LAB_001000d7;
            }
          } while (suppress_non_delimited != false);
          uVar20 = 1;
          sVar11 = fwrite_unlocked(field_1_buffer,1,sVar23,_stdout);
          uVar4 = line_delim;
          if (sVar23 != sVar11) goto LAB_00100370;
          uVar18 = (uint)line_delim;
          uVar20 = (ulong)uVar18;
        } while ((int)field_1_buffer[sVar23 - 1] == uVar18);
        puVar1 = (uchar *)_stdout->_IO_write_ptr;
        if (puVar1 < _stdout->_IO_write_end) {
          _stdout->_IO_write_ptr = (char *)(puVar1 + 1);
          *puVar1 = uVar4;
          goto LAB_001001e8;
        }
        iVar8 = __overflow(_stdout,uVar18);
      } while (-1 < iVar8);
    }
LAB_00100370:
    do {
      uVar18 = (uint)pFVar16;
      uVar19 = (uint)uVar20;
      write_error();
      pFVar12 = extraout_RDX;
      bVar5 = extraout_AL;
LAB_00100378:
      bVar25 = 1;
      if (bVar5 == (byte)uVar19) {
LAB_00100383:
        bVar25 = 1;
        uVar21 = (uint)bVar5;
        uVar7 = (uint)pFVar12;
        if (uVar19 != uVar7) goto LAB_001001c0;
LAB_00100394:
        bVar25 = 1;
        pbVar13 = (byte *)__stream->_IO_read_ptr;
        if (__stream->_IO_read_end <= pbVar13) {
LAB_001004fe:
          uVar19 = __uflow(__stream);
          if (uVar19 != 0xffffffff) goto LAB_001003ad;
          uVar21 = (uint)line_delim;
          bVar14 = delim;
          bVar5 = line_delim;
          goto LAB_00100482;
        }
LAB_001003a2:
        __stream->_IO_read_ptr = (char *)(pbVar13 + 1);
        uVar19 = (uint)*pbVar13;
LAB_001003ad:
        ungetc(uVar19,__stream);
        pFVar12 = (FILE *)(ulong)uVar7;
        if (uVar7 == delim) goto LAB_00100333;
        bVar5 = line_delim;
        if (uVar7 != line_delim) goto LAB_001001d1;
LAB_001003e0:
        uVar21 = (uint)pFVar12;
        pFVar16 = (FILE *)((ulong)pFVar12 & 0xffffffff);
        if (((bVar25 == 0) && (suppress_non_delimited == true)) && (sVar23 == 1)) goto LAB_00100429;
      }
      else {
LAB_00100328:
        uVar7 = uVar19;
        uVar21 = (uint)bVar5;
        if (uVar7 == (uint)pFVar12) goto LAB_00100333;
LAB_001001c0:
        bVar14 = (byte)pFVar15;
        if (uVar21 == (uint)pFVar12) goto LAB_001003e0;
        if ((uint)pFVar12 != 0xffffffff) {
LAB_001001d1:
          pFVar16 = (FILE *)((ulong)pFVar12 & 0xffffffff);
          goto joined_r0x001000ca;
        }
LAB_00100482:
        if (((bVar25 == 0) && (suppress_non_delimited == true)) && (sVar23 == 1)) {
          return;
        }
        if ((uVar18 == uVar21) && (bVar14 != bVar5)) {
          return;
        }
        pFVar16 = (FILE *)0xffffffff;
      }
      pFVar15 = (FILE *)_stdout->_IO_write_ptr;
      if (pFVar15 < (FILE *)_stdout->_IO_write_end) {
        _stdout->_IO_write_ptr = (char *)((long)&pFVar15->_flags + 1);
        *(byte *)&pFVar15->_flags = bVar5;
        break;
      }
      uVar20 = (ulong)uVar21;
      iVar8 = __overflow(_stdout,uVar21);
    } while (iVar8 < 0);
    if ((int)pFVar16 == -1) {
      return;
    }
LAB_00100429:
    sVar23 = 1;
    bVar25 = 0;
    current_rp = _frp;
  } while( true );
LAB_00100680:
  pbVar13 = (byte *)p_Var22->_IO_read_ptr;
  if (p_Var22->_IO_read_end <= pbVar13) goto LAB_0010071c;
  while( true ) {
    uVar19 = (uint)line_delim;
    p_Var22->_IO_read_ptr = (char *)(pbVar13 + 1);
    uVar18 = (uint)*pbVar13;
    if (*pbVar13 == uVar19) break;
    while( true ) {
      uVar20 = uVar20 + 1;
      if (current_rp->hi < uVar20) {
        current_rp = current_rp + 1;
      }
      if (uVar20 < current_rp->lo) goto LAB_00100680;
      if (output_delimiter_string != output_delimiter_default) {
        if (((current_rp->lo == uVar20) && (bVar3)) &&
           (pFVar16 = _stdout,
           sVar23 = fwrite_unlocked(output_delimiter_string,1,output_delimiter_length,_stdout),
           output_delimiter_length != sVar23)) goto LAB_001007d9;
        bVar3 = true;
      }
      pFVar16 = _stdout;
      pcVar2 = _stdout->_IO_write_ptr;
      if (_stdout->_IO_write_end <= pcVar2) goto LAB_001007e0;
      _stdout->_IO_write_ptr = pcVar2 + 1;
      *pcVar2 = (char)uVar18;
      pbVar13 = (byte *)p_Var22->_IO_read_ptr;
      if (pbVar13 < p_Var22->_IO_read_end) break;
LAB_0010071c:
      uVar18 = __uflow(p_Var22);
      uVar4 = line_delim;
      uVar19 = (uint)line_delim;
      if (uVar19 == uVar18) goto LAB_00100770;
      if (uVar18 == 0xffffffff) {
        if (uVar20 != 0) {
          puVar1 = (uchar *)_stdout->_IO_write_ptr;
          if (puVar1 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = (char *)(puVar1 + 1);
            *puVar1 = uVar4;
          }
          else {
            iVar8 = __overflow(_stdout,uVar19);
            if (iVar8 < 0) goto LAB_001007d9;
          }
        }
        return;
      }
    }
  }
LAB_00100770:
  pcVar2 = _stdout->_IO_write_ptr;
  if (pcVar2 < _stdout->_IO_write_end) {
    _stdout->_IO_write_ptr = pcVar2 + 1;
    *pcVar2 = (char)uVar19;
  }
  else {
    iVar8 = __overflow(_stdout,uVar19);
    if (iVar8 < 0) {
LAB_001007d9:
      do {
        write_error();
LAB_001007e0:
        iVar8 = __overflow(pFVar16,uVar18 & 0xff);
      } while (iVar8 < 0);
      goto LAB_00100680;
    }
  }
  current_rp = _frp;
  uVar20 = 0;
  bVar3 = false;
  goto LAB_00100680;
LAB_001002e2:
  uVar18 = (uint)pFVar16;
  pbVar13 = (byte *)__stream->_IO_read_ptr;
  if (pbVar13 < __stream->_IO_read_end) {
    uVar19 = (uint)delim;
    pFVar15 = (FILE *)(ulong)uVar19;
    __stream->_IO_read_ptr = (char *)(pbVar13 + 1);
    bVar5 = *pbVar13;
    pFVar12 = (FILE *)(ulong)bVar5;
    uVar7 = (uint)bVar5;
    if (uVar19 == bVar5) goto LAB_001004e8;
    if (line_delim == bVar5) {
LAB_0010031a:
      uVar21 = (uint)(byte)pFVar15;
      bVar5 = line_delim;
      if ((byte)pFVar15 == line_delim) goto LAB_001001c0;
      goto LAB_00100328;
    }
  }
  else {
    uVar7 = __uflow(__stream);
    uVar19 = (uint)delim;
    pFVar15 = (FILE *)(ulong)uVar19;
    pFVar12 = (FILE *)(ulong)uVar7;
    if (uVar19 == uVar7) {
LAB_001004e8:
      uVar7 = (uint)pFVar12;
      bVar5 = line_delim;
      if (line_delim != (uchar)pFVar15) goto LAB_00100328;
      pbVar13 = (byte *)__stream->_IO_read_ptr;
      if (pbVar13 < __stream->_IO_read_end) goto LAB_001003a2;
      goto LAB_001004fe;
    }
    if ((line_delim == uVar7) || (uVar7 == 0xffffffff)) goto LAB_0010031a;
  }
  pFVar16 = (FILE *)(ulong)uVar7;
  goto LAB_001002e2;
LAB_00100333:
  sVar23 = sVar23 + 1;
  if (current_rp->hi < sVar23) {
    current_rp = current_rp + 1;
  }
  pFVar16 = (FILE *)(ulong)uVar7;
  goto joined_r0x001000ca;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void cut_fields(FILE *stream)

{
  uchar *puVar1;
  char *pcVar2;
  bool bVar3;
  uchar uVar4;
  byte extraout_AL;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  size_t sVar9;
  FILE *pFVar10;
  byte *pbVar11;
  byte bVar12;
  FILE *pFVar13;
  FILE *pFVar14;
  FILE *extraout_RDX;
  FILE *pFVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  _IO_FILE *p_Var20;
  size_t sVar21;
  byte bVar22;
  byte bVar23;
  
  current_rp = _frp;
  pbVar11 = (byte *)stream->_IO_read_ptr;
  if (pbVar11 < stream->_IO_read_end) {
    stream->_IO_read_ptr = (char *)(pbVar11 + 1);
    uVar16 = (uint)*pbVar11;
  }
  else {
    uVar16 = __uflow((_IO_FILE *)stream);
    if (uVar16 == 0xffffffff) {
      return;
    }
  }
  sVar21 = 1;
  ungetc(uVar16,(FILE *)stream);
  bVar23 = 0;
  pFVar14 = (FILE *)0x0;
  bVar22 = 1 < current_rp->lo ^ suppress_non_delimited;
joined_r0x001000ca:
  do {
    bVar5 = sVar21 == 1 & bVar22;
    if (bVar5 == 0) {
LAB_001000d7:
      if (sVar21 < current_rp->lo) goto LAB_001002e2;
      pFVar15 = pFVar14;
      if (bVar23 != 0) {
        uVar18 = 1;
        pFVar13 = _stdout;
        sVar9 = fwrite_unlocked(output_delimiter_string,1,output_delimiter_length,_stdout);
        if (output_delimiter_length != sVar9) goto LAB_00100370;
      }
LAB_00100170:
      do {
        pFVar14 = pFVar15;
        uVar16 = (uint)pFVar14;
        pbVar11 = (byte *)stream->_IO_read_ptr;
        if (pbVar11 < stream->_IO_read_end) {
          uVar17 = (uint)delim;
          pFVar13 = (FILE *)(ulong)uVar17;
          stream->_IO_read_ptr = (char *)(pbVar11 + 1);
          bVar23 = *pbVar11;
          pFVar15 = (FILE *)(ulong)bVar23;
          uVar6 = (uint)bVar23;
          if (bVar23 == uVar17) goto LAB_00100450;
          pFVar10 = (FILE *)(ulong)line_delim;
          bVar5 = line_delim;
          if ((uint)bVar23 == (uint)line_delim) goto LAB_00100378;
        }
        else {
          uVar6 = __uflow((_IO_FILE *)stream);
          uVar17 = (uint)delim;
          pFVar13 = (FILE *)(ulong)uVar17;
          pFVar10 = (FILE *)(ulong)uVar6;
          if (uVar17 == uVar6) {
LAB_00100450:
            uVar7 = (uint)pFVar13;
            bVar23 = 1;
            if ((uchar)pFVar13 == line_delim) {
              bVar23 = 1;
              uVar19 = (uint)line_delim;
              pFVar10 = pFVar13;
              bVar5 = line_delim;
              if (uVar6 != uVar7) goto LAB_001001c0;
              goto LAB_00100394;
            }
            goto LAB_00100333;
          }
          uVar19 = (uint)line_delim;
          if ((uVar19 == uVar6) || (pFVar15 = pFVar10, uVar6 == 0xffffffff)) {
            bVar5 = line_delim;
            if (delim == line_delim) goto LAB_00100383;
            bVar23 = 1;
            goto LAB_001001c0;
          }
        }
        pcVar2 = _stdout->_IO_write_ptr;
        if (pcVar2 < _stdout->_IO_write_end) {
          _stdout->_IO_write_ptr = pcVar2 + 1;
          *pcVar2 = (char)pFVar15;
          goto LAB_00100170;
        }
        uVar18 = (ulong)pFVar15 & 0xff;
        iVar8 = __overflow(_stdout,(int)uVar18);
      } while (-1 < iVar8);
    }
    else {
LAB_001001e8:
      do {
        do {
          do {
            pFVar14 = (FILE *)0xffffffffffffffff;
            sVar21 = getndelim2(&field_1_buffer,&field_1_bufsize,0,0xffffffffffffffff,delim,
                                line_delim,stream);
            if ((long)sVar21 < 0) {
              p_Var20 = (_IO_FILE *)field_1_buffer;
              free(field_1_buffer);
              field_1_buffer = (char *)0x0;
              if ((stream->_flags & 0x30) != 0) {
                field_1_buffer = (char *)0x0;
                return;
              }
              xalloc_die();
              bVar3 = false;
              uVar18 = 0;
              current_rp = _frp;
              goto LAB_00100680;
            }
            if (sVar21 == 0) {
                    /* WARNING: Subroutine does not return */
              __assert_fail("n_bytes != 0","src/cut.c",0x140,"cut_fields");
            }
            pFVar14 = (FILE *)(sVar21 - 1);
            pFVar13 = _stdout;
            if (delim == field_1_buffer[sVar21 - 1]) {
              bVar12 = bVar23;
              if (current_rp->lo < 2) {
                uVar18 = 1;
                pFVar10 = (FILE *)fwrite_unlocked(field_1_buffer,1,(size_t)pFVar14,_stdout);
                if (pFVar14 != pFVar10) goto LAB_00100370;
                bVar12 = bVar5;
                if (delim == line_delim) {
                  pbVar11 = (byte *)stream->_IO_read_ptr;
                  if (pbVar11 < stream->_IO_read_end) {
                    stream->_IO_read_ptr = (char *)(pbVar11 + 1);
                    uVar16 = (uint)*pbVar11;
                  }
                  else {
                    uVar16 = __uflow((_IO_FILE *)stream);
                    bVar12 = bVar23;
                    if (uVar16 == 0xffffffff) goto LAB_001004c5;
                  }
                  ungetc(uVar16,(FILE *)stream);
                  bVar12 = bVar5;
                }
              }
LAB_001004c5:
              bVar23 = bVar12;
              if (current_rp->hi < 2) {
                current_rp = current_rp + 1;
                sVar21 = 2;
                pFVar14 = (FILE *)0x0;
              }
              else {
                sVar21 = 2;
                pFVar14 = (FILE *)0x0;
              }
              goto LAB_001000d7;
            }
          } while (suppress_non_delimited != false);
          uVar18 = 1;
          sVar9 = fwrite_unlocked(field_1_buffer,1,sVar21,_stdout);
          uVar4 = line_delim;
          if (sVar21 != sVar9) goto LAB_00100370;
          uVar16 = (uint)line_delim;
          uVar18 = (ulong)uVar16;
        } while ((int)field_1_buffer[sVar21 - 1] == uVar16);
        puVar1 = (uchar *)_stdout->_IO_write_ptr;
        if (puVar1 < _stdout->_IO_write_end) {
          _stdout->_IO_write_ptr = (char *)(puVar1 + 1);
          *puVar1 = uVar4;
          goto LAB_001001e8;
        }
        iVar8 = __overflow(_stdout,uVar16);
      } while (-1 < iVar8);
    }
LAB_00100370:
    do {
      uVar16 = (uint)pFVar14;
      uVar17 = (uint)uVar18;
      write_error();
      pFVar10 = extraout_RDX;
      bVar5 = extraout_AL;
LAB_00100378:
      bVar23 = 1;
      if (bVar5 == (byte)uVar17) {
LAB_00100383:
        bVar23 = 1;
        uVar19 = (uint)bVar5;
        uVar7 = (uint)pFVar10;
        if (uVar17 != uVar7) goto LAB_001001c0;
LAB_00100394:
        bVar23 = 1;
        pbVar11 = (byte *)stream->_IO_read_ptr;
        if (stream->_IO_read_end <= pbVar11) {
LAB_001004fe:
          uVar17 = __uflow((_IO_FILE *)stream);
          if (uVar17 != 0xffffffff) goto LAB_001003ad;
          uVar19 = (uint)line_delim;
          bVar12 = delim;
          bVar5 = line_delim;
          goto LAB_00100482;
        }
LAB_001003a2:
        stream->_IO_read_ptr = (char *)(pbVar11 + 1);
        uVar17 = (uint)*pbVar11;
LAB_001003ad:
        ungetc(uVar17,(FILE *)stream);
        pFVar10 = (FILE *)(ulong)uVar7;
        if (uVar7 == delim) goto LAB_00100333;
        bVar5 = line_delim;
        if (uVar7 != line_delim) goto LAB_001001d1;
LAB_001003e0:
        uVar19 = (uint)pFVar10;
        pFVar14 = (FILE *)((ulong)pFVar10 & 0xffffffff);
        if (((bVar23 == 0) && (suppress_non_delimited == true)) && (sVar21 == 1)) goto LAB_00100429;
      }
      else {
LAB_00100328:
        uVar7 = uVar17;
        uVar19 = (uint)bVar5;
        if (uVar7 == (uint)pFVar10) goto LAB_00100333;
LAB_001001c0:
        bVar12 = (byte)pFVar13;
        if (uVar19 == (uint)pFVar10) goto LAB_001003e0;
        if ((uint)pFVar10 != 0xffffffff) {
LAB_001001d1:
          pFVar14 = (FILE *)((ulong)pFVar10 & 0xffffffff);
          goto joined_r0x001000ca;
        }
LAB_00100482:
        if (((bVar23 == 0) && (suppress_non_delimited == true)) && (sVar21 == 1)) {
          return;
        }
        if ((uVar16 == uVar19) && (bVar12 != bVar5)) {
          return;
        }
        pFVar14 = (FILE *)0xffffffff;
      }
      pFVar13 = (FILE *)_stdout->_IO_write_ptr;
      if (pFVar13 < (FILE *)_stdout->_IO_write_end) {
        _stdout->_IO_write_ptr = (char *)((long)&pFVar13->_flags + 1);
        *(byte *)&pFVar13->_flags = bVar5;
        break;
      }
      uVar18 = (ulong)uVar19;
      iVar8 = __overflow(_stdout,uVar19);
    } while (iVar8 < 0);
    if ((int)pFVar14 == -1) {
      return;
    }
LAB_00100429:
    sVar21 = 1;
    bVar23 = 0;
    current_rp = _frp;
  } while( true );
LAB_00100680:
  pbVar11 = (byte *)p_Var20->_IO_read_ptr;
  if (p_Var20->_IO_read_end <= pbVar11) goto LAB_0010071c;
  while( true ) {
    uVar17 = (uint)line_delim;
    p_Var20->_IO_read_ptr = (char *)(pbVar11 + 1);
    uVar16 = (uint)*pbVar11;
    if (*pbVar11 == uVar17) break;
    while( true ) {
      uVar18 = uVar18 + 1;
      if (current_rp->hi < uVar18) {
        current_rp = current_rp + 1;
      }
      if (uVar18 < current_rp->lo) goto LAB_00100680;
      if (output_delimiter_string != output_delimiter_default) {
        if (((current_rp->lo == uVar18) && (bVar3)) &&
           (pFVar14 = _stdout,
           sVar21 = fwrite_unlocked(output_delimiter_string,1,output_delimiter_length,_stdout),
           output_delimiter_length != sVar21)) goto LAB_001007d9;
        bVar3 = true;
      }
      pFVar14 = _stdout;
      pcVar2 = _stdout->_IO_write_ptr;
      if (_stdout->_IO_write_end <= pcVar2) goto LAB_001007e0;
      _stdout->_IO_write_ptr = pcVar2 + 1;
      *pcVar2 = (char)uVar16;
      pbVar11 = (byte *)p_Var20->_IO_read_ptr;
      if (pbVar11 < p_Var20->_IO_read_end) break;
LAB_0010071c:
      uVar16 = __uflow(p_Var20);
      uVar4 = line_delim;
      uVar17 = (uint)line_delim;
      if (uVar17 == uVar16) goto LAB_00100770;
      if (uVar16 == 0xffffffff) {
        if (uVar18 != 0) {
          puVar1 = (uchar *)_stdout->_IO_write_ptr;
          if (puVar1 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = (char *)(puVar1 + 1);
            *puVar1 = uVar4;
          }
          else {
            iVar8 = __overflow(_stdout,uVar17);
            if (iVar8 < 0) goto LAB_001007d9;
          }
        }
        return;
      }
    }
  }
LAB_00100770:
  pcVar2 = _stdout->_IO_write_ptr;
  if (pcVar2 < _stdout->_IO_write_end) {
    _stdout->_IO_write_ptr = pcVar2 + 1;
    *pcVar2 = (char)uVar17;
  }
  else {
    iVar8 = __overflow(_stdout,uVar17);
    if (iVar8 < 0) {
LAB_001007d9:
      do {
        write_error();
LAB_001007e0:
        iVar8 = __overflow(pFVar14,uVar16 & 0xff);
      } while (iVar8 < 0);
      goto LAB_00100680;
    }
  }
  current_rp = _frp;
  uVar18 = 0;
  bVar3 = false;
  goto LAB_00100680;
LAB_001002e2:
  uVar16 = (uint)pFVar14;
  pbVar11 = (byte *)stream->_IO_read_ptr;
  if (pbVar11 < stream->_IO_read_end) {
    uVar17 = (uint)delim;
    pFVar13 = (FILE *)(ulong)uVar17;
    stream->_IO_read_ptr = (char *)(pbVar11 + 1);
    bVar5 = *pbVar11;
    pFVar10 = (FILE *)(ulong)bVar5;
    uVar7 = (uint)bVar5;
    if (uVar17 == bVar5) goto LAB_001004e8;
    if (line_delim == bVar5) {
LAB_0010031a:
      uVar19 = (uint)(byte)pFVar13;
      bVar5 = line_delim;
      if ((byte)pFVar13 == line_delim) goto LAB_001001c0;
      goto LAB_00100328;
    }
  }
  else {
    uVar7 = __uflow((_IO_FILE *)stream);
    uVar17 = (uint)delim;
    pFVar13 = (FILE *)(ulong)uVar17;
    pFVar10 = (FILE *)(ulong)uVar7;
    if (uVar17 == uVar7) {
LAB_001004e8:
      uVar7 = (uint)pFVar10;
      bVar5 = line_delim;
      if (line_delim != (uchar)pFVar13) goto LAB_00100328;
      pbVar11 = (byte *)stream->_IO_read_ptr;
      if (pbVar11 < stream->_IO_read_end) goto LAB_001003a2;
      goto LAB_001004fe;
    }
    if ((line_delim == uVar7) || (uVar7 == 0xffffffff)) goto LAB_0010031a;
  }
  pFVar14 = (FILE *)(ulong)uVar7;
  goto LAB_001002e2;
LAB_00100333:
  sVar21 = sVar21 + 1;
  if (current_rp->hi < sVar21) {
    current_rp = current_rp + 1;
  }
  pFVar14 = (FILE *)(ulong)uVar7;
  goto joined_r0x001000ca;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void cut_bytes(FILE *stream)

{
  char *pcVar1;
  uchar *puVar2;
  bool bVar3;
  uchar uVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  size_t sVar8;
  FILE *in_RCX;
  ulong uVar9;
  uint uVar10;
  
  bVar3 = false;
  uVar9 = 0;
  current_rp = _frp;
LAB_00100680:
  do {
    pbVar7 = (byte *)stream->_IO_read_ptr;
    if (stream->_IO_read_end <= pbVar7) goto LAB_0010071c;
    while( true ) {
      uVar10 = (uint)line_delim;
      stream->_IO_read_ptr = (char *)(pbVar7 + 1);
      uVar5 = (uint)*pbVar7;
      if (*pbVar7 == uVar10) break;
      while( true ) {
        uVar9 = uVar9 + 1;
        if (current_rp->hi < uVar9) {
          current_rp = current_rp + 1;
        }
        if (uVar9 < current_rp->lo) goto LAB_00100680;
        if (output_delimiter_string != output_delimiter_default) {
          if (((current_rp->lo == uVar9) && (bVar3)) &&
             (in_RCX = _stdout,
             sVar8 = fwrite_unlocked(output_delimiter_string,1,output_delimiter_length,_stdout),
             output_delimiter_length != sVar8)) goto LAB_001007d9;
          bVar3 = true;
        }
        in_RCX = _stdout;
        pcVar1 = _stdout->_IO_write_ptr;
        if (_stdout->_IO_write_end <= pcVar1) goto LAB_001007e0;
        _stdout->_IO_write_ptr = pcVar1 + 1;
        *pcVar1 = (char)uVar5;
        pbVar7 = (byte *)stream->_IO_read_ptr;
        if (pbVar7 < stream->_IO_read_end) break;
LAB_0010071c:
        uVar5 = __uflow((_IO_FILE *)stream);
        uVar4 = line_delim;
        uVar10 = (uint)line_delim;
        if (uVar10 == uVar5) goto LAB_00100770;
        if (uVar5 == 0xffffffff) {
          if (uVar9 != 0) {
            puVar2 = (uchar *)_stdout->_IO_write_ptr;
            if (puVar2 < _stdout->_IO_write_end) {
              _stdout->_IO_write_ptr = (char *)(puVar2 + 1);
              *puVar2 = uVar4;
            }
            else {
              iVar6 = __overflow(_stdout,uVar10);
              if (iVar6 < 0) goto LAB_001007d9;
            }
          }
          return;
        }
      }
    }
LAB_00100770:
    pcVar1 = _stdout->_IO_write_ptr;
    if (pcVar1 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = pcVar1 + 1;
      *pcVar1 = (char)uVar10;
    }
    else {
      iVar6 = __overflow(_stdout,uVar10);
      if (iVar6 < 0) {
LAB_001007d9:
        do {
          write_error();
LAB_001007e0:
          iVar6 = __overflow(in_RCX,uVar5 & 0xff);
        } while (iVar6 < 0);
        goto LAB_00100680;
      }
    }
    current_rp = _frp;
    uVar9 = 0;
    bVar3 = false;
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

_Bool cut_file(char *file,_func_void_FILE_ptr *cut_stream)

{
  int iVar1;
  FILE *__stream;
  uint *puVar2;
  int *piVar3;
  undefined8 uVar4;
  uint uVar5;
  
  if ((*file == '-') && (file[1] == '\0')) {
    have_read_stdin = true;
    __stream = _stdin;
  }
  else {
    __stream = (FILE *)rpl_fopen(file,&_LC3);
    if (__stream == (FILE *)0x0) {
      uVar4 = quotearg_n_style_colon(0,3,file);
      piVar3 = __errno_location();
      error(0,*piVar3,&_LC4,uVar4);
      return false;
    }
  }
  fadvise(__stream,2);
  (*cut_stream)((FILE *)__stream);
  puVar2 = (uint *)__errno_location();
  uVar5 = __stream->_flags & 0x20;
  if (uVar5 != 0) {
    uVar5 = *puVar2;
  }
  if ((*file == '-') && (file[1] == '\0')) {
    clearerr_unlocked(__stream);
  }
  else {
    iVar1 = rpl_fclose();
    if (iVar1 == -1) {
      uVar5 = *puVar2;
    }
  }
  if (uVar5 != 0) {
    uVar4 = quotearg_n_style_colon(0,3,file);
    error(0,uVar5,&_LC4,uVar4);
  }
  return uVar5 == 0;
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
    goto LAB_0010097a;
  }
  uVar3 = dcgettext(0,"Usage: %s OPTION... [FILE]...\n",5);
  __printf_chk(2,uVar3,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"Print selected parts of lines from each FILE to standard output.\n",
                             5);
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
                             "  -b, --bytes=LIST        select only these bytes\n  -c, --characters=LIST   select only these characters\n  -d, --delimiter=DELIM   use DELIM instead of TAB for field delimiter\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -f, --fields=LIST       select only these fields;  also print any line\n                            that contains no delimiter character, unless\n                            the -s option is specified\n  -n                      (ignored)\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --complement        complement the set of selected bytes, characters\n                            or fields\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -s, --only-delimited    do not print lines not containing delimiters\n      --output-delimiter=STRING  use STRING as the output delimiter\n                            the default is to use the input delimiter\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"  -z, --zero-terminated   line delimiter is NUL, not newline\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nUse one, and only one of -b, -c or -f.  Each LIST is made up of one\nrange, or many ranges separated by commas.  Selected input is written\nin the same order that it is read, and is written exactly once.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "Each range is one of:\n\n  N     N\'th byte, character or field, counted from 1\n  N-    from N\'th byte, character or field, to end of line\n  N-M   from N\'th to M\'th (included) byte, character or field\n  -M    from first to M\'th (included) byte, character or field\n"
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
    iVar2 = strcmp("cut",pcVar4);
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
    if (pcVar4 != (char *)0x0) goto LAB_00100c85;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC6);
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
LAB_00100c85:
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
LAB_0010097a:
                    /* WARNING: Subroutine does not return */
  exit(status);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int main(int argc,char **argv)

{
  bool bVar1;
  bool bVar2;
  uchar *puVar3;
  _Bool _Var4;
  _Bool _Var5;
  int iVar6;
  size_t sVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int *piVar11;
  char *pcVar12;
  code *cut_stream;
  uchar *puVar13;
  bool bVar14;
  
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  suppress_non_delimited = false;
  delim = '\0';
  have_read_stdin = false;
  bVar1 = false;
  bVar2 = false;
  puVar13 = (uchar *)0x0;
switchD_001018cb_caseD_6e:
  iVar6 = getopt_long(argc,argv,"b:c:d:f:nsz",longopts,0);
  puVar3 = _optarg;
  if (iVar6 == -1) {
    pcVar12 = "you must specify a list of bytes, characters, or fields";
    if (puVar13 != (uchar *)0x0) {
      if (bVar1) {
        pcVar12 = "an input delimiter may be specified only when operating on fields";
        if ((bVar2) ||
           (pcVar12 = "suppressing non-delimited lines makes sense\n\tonly when operating on fields"
           , suppress_non_delimited != false)) goto LAB_00101b47;
        set_fields(puVar13,(uint)complement * 2 | 4,5);
LAB_00101a55:
        delim = '\t';
        if (output_delimiter_string == (char *)0x0) {
LAB_00101b66:
          output_delimiter_length = 1;
          output_delimiter_default[0] = delim;
          output_delimiter_string = output_delimiter_default;
        }
        cut_stream = cut_bytes;
        if (bVar1) goto LAB_00101a7c;
      }
      else {
        set_fields(puVar13,(uint)complement * 2,5);
        if (!bVar2) goto LAB_00101a55;
        if (output_delimiter_string == (char *)0x0) goto LAB_00101b66;
      }
      cut_stream = cut_fields;
LAB_00101a7c:
      if (_optind == argc) {
        _Var5 = cut_file("-",cut_stream);
      }
      else {
        _Var5 = true;
        for (; _optind < argc; _optind = _optind + 1) {
          _Var4 = cut_file(argv[_optind],cut_stream);
          _Var5 = (_Bool)(_Var5 & _Var4);
        }
      }
      if ((have_read_stdin != false) && (iVar6 = rpl_fclose(_stdin), iVar6 == -1)) {
        piVar11 = __errno_location();
        _Var5 = false;
        error(0,*piVar11,&_LC48);
      }
      return (int)(_Var5 ^ 1);
    }
    goto LAB_00101b47;
  }
  if (iVar6 < 0x82) {
    if (0x61 < iVar6) goto code_r0x001018c4;
    if (iVar6 == -0x83) {
      uVar8 = proper_name_lite("Jim Meyering","Jim Meyering");
      uVar9 = proper_name_lite("David MacKenzie","David MacKenzie");
      uVar10 = proper_name_lite("David M. Ihnat","David M. Ihnat");
      version_etc(_stdout,&_LC6,"GNU coreutils",_Version,uVar10,uVar9,uVar8,0);
                    /* WARNING: Subroutine does not return */
      exit(0);
    }
    if (iVar6 == -0x82) {
                    /* WARNING: Subroutine does not return */
      usage(0);
    }
  }
  goto switchD_001018cb_caseD_65;
code_r0x001018c4:
  switch(iVar6) {
  case 0x62:
  case 99:
    bVar1 = true;
  case 0x66:
    bVar14 = puVar13 == (uchar *)0x0;
    puVar13 = _optarg;
    if (bVar14) goto switchD_001018cb_caseD_6e;
    pcVar12 = "only one list may be specified";
    break;
  case 100:
    if ((*_optarg == '\0') || (_optarg[1] == '\0')) {
      bVar2 = true;
      delim = *_optarg;
      goto switchD_001018cb_caseD_6e;
    }
    pcVar12 = "the delimiter must be a single character";
    break;
  default:
    goto switchD_001018cb_caseD_65;
  case 0x6e:
    goto switchD_001018cb_caseD_6e;
  case 0x73:
    suppress_non_delimited = true;
    goto switchD_001018cb_caseD_6e;
  case 0x7a:
    line_delim = '\0';
    goto switchD_001018cb_caseD_6e;
  case 0x80:
    sVar7 = 1;
    if (*_optarg != '\0') {
      sVar7 = strlen((char *)_optarg);
    }
    output_delimiter_string = (char *)puVar3;
    output_delimiter_length = sVar7;
    goto switchD_001018cb_caseD_6e;
  case 0x81:
    complement = true;
    goto switchD_001018cb_caseD_6e;
  }
LAB_00101b47:
  uVar8 = dcgettext(0,pcVar12,5);
  error(0,0,uVar8);
switchD_001018cb_caseD_65:
                    /* WARNING: Subroutine does not return */
  usage(1);
}


