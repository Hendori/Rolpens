
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_error(void)

{
  char *pcVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  undefined8 uVar8;
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
  _IO_FILE *__stream;
  _IO_FILE *p_Var20;
  size_t sVar21;
  byte bVar22;
  byte bVar23;
  
  piVar7 = __errno_location();
  iVar6 = *piVar7;
  fflush_unlocked(_stdout);
  fpurge(_stdout);
  clearerr_unlocked(_stdout);
  uVar8 = dcgettext(0,"write error",5);
  __stream = (_IO_FILE *)0x1;
  error(1,iVar6,uVar8);
  current_rp = _frp;
  pbVar11 = (byte *)__stream->_IO_read_ptr;
  if (pbVar11 < __stream->_IO_read_end) {
    __stream->_IO_read_ptr = (char *)(pbVar11 + 1);
    uVar16 = (uint)*pbVar11;
  }
  else {
    uVar16 = __uflow(__stream);
    if (uVar16 == 0xffffffff) {
      return;
    }
  }
  sVar21 = 1;
  ungetc(uVar16,__stream);
  bVar23 = 0;
  pFVar14 = (FILE *)0x0;
  bVar22 = 1 < *current_rp ^ suppress_non_delimited;
joined_r0x001000ca:
  do {
    bVar3 = sVar21 == 1 & bVar22;
    if (bVar3 == 0) {
LAB_001000d7:
      if (sVar21 < *current_rp) goto LAB_001002e2;
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
        pbVar11 = (byte *)__stream->_IO_read_ptr;
        if (pbVar11 < __stream->_IO_read_end) {
          uVar17 = (uint)delim;
          pFVar13 = (FILE *)(ulong)uVar17;
          __stream->_IO_read_ptr = (char *)(pbVar11 + 1);
          bVar23 = *pbVar11;
          pFVar15 = (FILE *)(ulong)bVar23;
          uVar4 = (uint)bVar23;
          if (bVar23 == uVar17) goto LAB_00100450;
          pFVar10 = (FILE *)(ulong)line_delim;
          bVar3 = line_delim;
          if ((uint)bVar23 == (uint)line_delim) goto LAB_00100378;
        }
        else {
          uVar4 = __uflow(__stream);
          uVar17 = (uint)delim;
          pFVar13 = (FILE *)(ulong)uVar17;
          pFVar10 = (FILE *)(ulong)uVar4;
          if (uVar17 == uVar4) {
LAB_00100450:
            uVar5 = (uint)pFVar13;
            bVar23 = 1;
            if ((byte)pFVar13 == line_delim) {
              bVar23 = 1;
              uVar19 = (uint)line_delim;
              pFVar10 = pFVar13;
              bVar3 = line_delim;
              if (uVar4 != uVar5) goto LAB_001001c0;
              goto LAB_00100394;
            }
            goto LAB_00100333;
          }
          uVar19 = (uint)line_delim;
          if ((uVar19 == uVar4) || (pFVar15 = pFVar10, uVar4 == 0xffffffff)) {
            bVar3 = line_delim;
            if (delim == line_delim) goto LAB_00100383;
            bVar23 = 1;
            goto LAB_001001c0;
          }
        }
        pcVar1 = _stdout->_IO_write_ptr;
        if (pcVar1 < _stdout->_IO_write_end) {
          _stdout->_IO_write_ptr = pcVar1 + 1;
          *pcVar1 = (char)pFVar15;
          goto LAB_00100170;
        }
        uVar18 = (ulong)pFVar15 & 0xff;
        iVar6 = __overflow(_stdout,(int)uVar18);
      } while (-1 < iVar6);
    }
    else {
LAB_001001e8:
      do {
        do {
          do {
            pFVar14 = (FILE *)0xffffffffffffffff;
            sVar21 = getndelim2(&field_1_buffer,&field_1_bufsize,0,0xffffffffffffffff,delim,
                                line_delim,__stream);
            if ((long)sVar21 < 0) {
              p_Var20 = field_1_buffer;
              free(field_1_buffer);
              field_1_buffer = (_IO_FILE *)0x0;
              if ((__stream->_flags & 0x30) != 0) {
                field_1_buffer = (_IO_FILE *)0x0;
                return;
              }
              xalloc_die();
              bVar2 = false;
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
            if (delim == *(byte *)((long)field_1_buffer + (sVar21 - 1))) {
              bVar12 = bVar23;
              if (*current_rp < 2) {
                uVar18 = 1;
                pFVar10 = (FILE *)fwrite_unlocked(field_1_buffer,1,(size_t)pFVar14,_stdout);
                if (pFVar14 != pFVar10) goto LAB_00100370;
                bVar12 = bVar3;
                if (delim == line_delim) {
                  pbVar11 = (byte *)__stream->_IO_read_ptr;
                  if (pbVar11 < __stream->_IO_read_end) {
                    __stream->_IO_read_ptr = (char *)(pbVar11 + 1);
                    uVar16 = (uint)*pbVar11;
                  }
                  else {
                    uVar16 = __uflow(__stream);
                    bVar12 = bVar23;
                    if (uVar16 == 0xffffffff) goto LAB_001004c5;
                  }
                  ungetc(uVar16,__stream);
                  bVar12 = bVar3;
                }
              }
LAB_001004c5:
              bVar23 = bVar12;
              if (current_rp[1] < 2) {
                current_rp = current_rp + 2;
                sVar21 = 2;
                pFVar14 = (FILE *)0x0;
              }
              else {
                sVar21 = 2;
                pFVar14 = (FILE *)0x0;
              }
              goto LAB_001000d7;
            }
          } while (suppress_non_delimited != 0);
          uVar18 = 1;
          sVar9 = fwrite_unlocked(field_1_buffer,1,sVar21,_stdout);
          bVar12 = line_delim;
          if (sVar21 != sVar9) goto LAB_00100370;
          uVar16 = (uint)line_delim;
          uVar18 = (ulong)uVar16;
        } while ((int)*(char *)((long)field_1_buffer + (sVar21 - 1)) == uVar16);
        pbVar11 = (byte *)_stdout->_IO_write_ptr;
        if (pbVar11 < _stdout->_IO_write_end) {
          _stdout->_IO_write_ptr = (char *)(pbVar11 + 1);
          *pbVar11 = bVar12;
          goto LAB_001001e8;
        }
        iVar6 = __overflow(_stdout,uVar16);
      } while (-1 < iVar6);
    }
LAB_00100370:
    do {
      uVar16 = (uint)pFVar14;
      uVar17 = (uint)uVar18;
      bVar3 = write_error();
      pFVar10 = extraout_RDX;
LAB_00100378:
      bVar23 = 1;
      if (bVar3 == (byte)uVar17) {
LAB_00100383:
        bVar23 = 1;
        uVar19 = (uint)bVar3;
        uVar5 = (uint)pFVar10;
        if (uVar17 != uVar5) goto LAB_001001c0;
LAB_00100394:
        bVar23 = 1;
        pbVar11 = (byte *)__stream->_IO_read_ptr;
        if (__stream->_IO_read_end <= pbVar11) {
LAB_001004fe:
          uVar17 = __uflow(__stream);
          if (uVar17 != 0xffffffff) goto LAB_001003ad;
          uVar19 = (uint)line_delim;
          bVar12 = delim;
          bVar3 = line_delim;
          goto LAB_00100482;
        }
LAB_001003a2:
        __stream->_IO_read_ptr = (char *)(pbVar11 + 1);
        uVar17 = (uint)*pbVar11;
LAB_001003ad:
        ungetc(uVar17,__stream);
        pFVar10 = (FILE *)(ulong)uVar5;
        if (uVar5 == delim) goto LAB_00100333;
        bVar3 = line_delim;
        if (uVar5 != line_delim) goto LAB_001001d1;
LAB_001003e0:
        uVar19 = (uint)pFVar10;
        pFVar14 = (FILE *)((ulong)pFVar10 & 0xffffffff);
        if (((bVar23 == 0) && (suppress_non_delimited == 1)) && (sVar21 == 1)) goto LAB_00100429;
      }
      else {
LAB_00100328:
        uVar5 = uVar17;
        uVar19 = (uint)bVar3;
        if (uVar5 == (uint)pFVar10) goto LAB_00100333;
LAB_001001c0:
        bVar12 = (byte)pFVar13;
        if (uVar19 == (uint)pFVar10) goto LAB_001003e0;
        if ((uint)pFVar10 != 0xffffffff) {
LAB_001001d1:
          pFVar14 = (FILE *)((ulong)pFVar10 & 0xffffffff);
          goto joined_r0x001000ca;
        }
LAB_00100482:
        if (((bVar23 == 0) && (suppress_non_delimited == 1)) && (sVar21 == 1)) {
          return;
        }
        if ((uVar16 == uVar19) && (bVar12 != bVar3)) {
          return;
        }
        pFVar14 = (FILE *)0xffffffff;
      }
      pFVar13 = (FILE *)_stdout->_IO_write_ptr;
      if (pFVar13 < (FILE *)_stdout->_IO_write_end) {
        _stdout->_IO_write_ptr = (char *)((long)&pFVar13->_flags + 1);
        *(byte *)&pFVar13->_flags = bVar3;
        break;
      }
      uVar18 = (ulong)uVar19;
      iVar6 = __overflow(_stdout,uVar19);
    } while (iVar6 < 0);
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
      if (current_rp[1] < uVar18) {
        current_rp = current_rp + 2;
      }
      if (uVar18 < *current_rp) goto LAB_00100680;
      if (output_delimiter_string != &output_delimiter_default) {
        if (((*current_rp == uVar18) && (bVar2)) &&
           (pFVar14 = _stdout,
           sVar21 = fwrite_unlocked(output_delimiter_string,1,output_delimiter_length,_stdout),
           output_delimiter_length != sVar21)) goto LAB_001007d9;
        bVar2 = true;
      }
      pFVar14 = _stdout;
      pcVar1 = _stdout->_IO_write_ptr;
      if (_stdout->_IO_write_end <= pcVar1) goto LAB_001007e0;
      _stdout->_IO_write_ptr = pcVar1 + 1;
      *pcVar1 = (char)uVar16;
      pbVar11 = (byte *)p_Var20->_IO_read_ptr;
      if (pbVar11 < p_Var20->_IO_read_end) break;
LAB_0010071c:
      uVar16 = __uflow(p_Var20);
      bVar23 = line_delim;
      uVar17 = (uint)line_delim;
      if (uVar17 == uVar16) goto LAB_00100770;
      if (uVar16 == 0xffffffff) {
        if (uVar18 != 0) {
          pbVar11 = (byte *)_stdout->_IO_write_ptr;
          if (pbVar11 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = (char *)(pbVar11 + 1);
            *pbVar11 = bVar23;
          }
          else {
            iVar6 = __overflow(_stdout,uVar17);
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
    *pcVar1 = (char)uVar17;
  }
  else {
    iVar6 = __overflow(_stdout,uVar17);
    if (iVar6 < 0) {
LAB_001007d9:
      do {
        write_error();
LAB_001007e0:
        iVar6 = __overflow(pFVar14,uVar16 & 0xff);
      } while (iVar6 < 0);
      goto LAB_00100680;
    }
  }
  current_rp = _frp;
  uVar18 = 0;
  bVar2 = false;
  goto LAB_00100680;
LAB_001002e2:
  uVar16 = (uint)pFVar14;
  pbVar11 = (byte *)__stream->_IO_read_ptr;
  if (pbVar11 < __stream->_IO_read_end) {
    uVar17 = (uint)delim;
    pFVar13 = (FILE *)(ulong)uVar17;
    __stream->_IO_read_ptr = (char *)(pbVar11 + 1);
    bVar3 = *pbVar11;
    pFVar10 = (FILE *)(ulong)bVar3;
    uVar5 = (uint)bVar3;
    if (uVar17 == bVar3) goto LAB_001004e8;
    if (line_delim == bVar3) {
LAB_0010031a:
      uVar19 = (uint)(byte)pFVar13;
      bVar3 = line_delim;
      if ((byte)pFVar13 == line_delim) goto LAB_001001c0;
      goto LAB_00100328;
    }
  }
  else {
    uVar5 = __uflow(__stream);
    uVar17 = (uint)delim;
    pFVar13 = (FILE *)(ulong)uVar17;
    pFVar10 = (FILE *)(ulong)uVar5;
    if (uVar17 == uVar5) {
LAB_001004e8:
      uVar5 = (uint)pFVar10;
      bVar3 = line_delim;
      if (line_delim != (byte)pFVar13) goto LAB_00100328;
      pbVar11 = (byte *)__stream->_IO_read_ptr;
      if (pbVar11 < __stream->_IO_read_end) goto LAB_001003a2;
      goto LAB_001004fe;
    }
    if ((line_delim == uVar5) || (uVar5 == 0xffffffff)) goto LAB_0010031a;
  }
  pFVar14 = (FILE *)(ulong)uVar5;
  goto LAB_001002e2;
LAB_00100333:
  sVar21 = sVar21 + 1;
  if (current_rp[1] < sVar21) {
    current_rp = current_rp + 2;
  }
  pFVar14 = (FILE *)(ulong)uVar5;
  goto joined_r0x001000ca;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cut_fields(_IO_FILE *param_1)

{
  char *pcVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  size_t sVar7;
  FILE *pFVar8;
  byte *pbVar9;
  byte bVar10;
  FILE *pFVar11;
  FILE *pFVar12;
  FILE *extraout_RDX;
  FILE *pFVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  _IO_FILE *p_Var18;
  size_t sVar19;
  byte bVar20;
  byte bVar21;
  
  current_rp = _frp;
  pbVar9 = (byte *)param_1->_IO_read_ptr;
  if (pbVar9 < param_1->_IO_read_end) {
    param_1->_IO_read_ptr = (char *)(pbVar9 + 1);
    uVar14 = (uint)*pbVar9;
  }
  else {
    uVar14 = __uflow(param_1);
    if (uVar14 == 0xffffffff) {
      return;
    }
  }
  sVar19 = 1;
  ungetc(uVar14,param_1);
  bVar21 = 0;
  pFVar12 = (FILE *)0x0;
  bVar20 = 1 < *current_rp ^ suppress_non_delimited;
joined_r0x001000ca:
  do {
    bVar3 = sVar19 == 1 & bVar20;
    if (bVar3 == 0) {
LAB_001000d7:
      if (sVar19 < *current_rp) goto LAB_001002e2;
      pFVar13 = pFVar12;
      if (bVar21 != 0) {
        uVar16 = 1;
        pFVar11 = _stdout;
        sVar7 = fwrite_unlocked(output_delimiter_string,1,output_delimiter_length,_stdout);
        if (output_delimiter_length != sVar7) goto LAB_00100370;
      }
LAB_00100170:
      do {
        pFVar12 = pFVar13;
        uVar14 = (uint)pFVar12;
        pbVar9 = (byte *)param_1->_IO_read_ptr;
        if (pbVar9 < param_1->_IO_read_end) {
          uVar15 = (uint)delim;
          pFVar11 = (FILE *)(ulong)uVar15;
          param_1->_IO_read_ptr = (char *)(pbVar9 + 1);
          bVar21 = *pbVar9;
          pFVar13 = (FILE *)(ulong)bVar21;
          uVar4 = (uint)bVar21;
          if (bVar21 == uVar15) goto LAB_00100450;
          pFVar8 = (FILE *)(ulong)line_delim;
          bVar3 = line_delim;
          if ((uint)bVar21 == (uint)line_delim) goto LAB_00100378;
        }
        else {
          uVar4 = __uflow(param_1);
          uVar15 = (uint)delim;
          pFVar11 = (FILE *)(ulong)uVar15;
          pFVar8 = (FILE *)(ulong)uVar4;
          if (uVar15 == uVar4) {
LAB_00100450:
            uVar5 = (uint)pFVar11;
            bVar21 = 1;
            if ((byte)pFVar11 == line_delim) {
              bVar21 = 1;
              uVar17 = (uint)line_delim;
              pFVar8 = pFVar11;
              bVar3 = line_delim;
              if (uVar4 != uVar5) goto LAB_001001c0;
              goto LAB_00100394;
            }
            goto LAB_00100333;
          }
          uVar17 = (uint)line_delim;
          if ((uVar17 == uVar4) || (pFVar13 = pFVar8, uVar4 == 0xffffffff)) {
            bVar3 = line_delim;
            if (delim == line_delim) goto LAB_00100383;
            bVar21 = 1;
            goto LAB_001001c0;
          }
        }
        pcVar1 = _stdout->_IO_write_ptr;
        if (pcVar1 < _stdout->_IO_write_end) {
          _stdout->_IO_write_ptr = pcVar1 + 1;
          *pcVar1 = (char)pFVar13;
          goto LAB_00100170;
        }
        uVar16 = (ulong)pFVar13 & 0xff;
        iVar6 = __overflow(_stdout,(int)uVar16);
      } while (-1 < iVar6);
    }
    else {
LAB_001001e8:
      do {
        do {
          do {
            pFVar12 = (FILE *)0xffffffffffffffff;
            sVar19 = getndelim2(&field_1_buffer,&field_1_bufsize,0,0xffffffffffffffff,delim,
                                line_delim,param_1);
            if ((long)sVar19 < 0) {
              p_Var18 = field_1_buffer;
              free(field_1_buffer);
              field_1_buffer = (_IO_FILE *)0x0;
              if ((param_1->_flags & 0x30) != 0) {
                field_1_buffer = (_IO_FILE *)0x0;
                return;
              }
              xalloc_die();
              bVar2 = false;
              uVar16 = 0;
              current_rp = _frp;
              goto LAB_00100680;
            }
            if (sVar19 == 0) {
                    /* WARNING: Subroutine does not return */
              __assert_fail("n_bytes != 0","src/cut.c",0x140,"cut_fields");
            }
            pFVar12 = (FILE *)(sVar19 - 1);
            pFVar11 = _stdout;
            if (delim == *(byte *)((long)field_1_buffer + (sVar19 - 1))) {
              bVar10 = bVar21;
              if (*current_rp < 2) {
                uVar16 = 1;
                pFVar8 = (FILE *)fwrite_unlocked(field_1_buffer,1,(size_t)pFVar12,_stdout);
                if (pFVar12 != pFVar8) goto LAB_00100370;
                bVar10 = bVar3;
                if (delim == line_delim) {
                  pbVar9 = (byte *)param_1->_IO_read_ptr;
                  if (pbVar9 < param_1->_IO_read_end) {
                    param_1->_IO_read_ptr = (char *)(pbVar9 + 1);
                    uVar14 = (uint)*pbVar9;
                  }
                  else {
                    uVar14 = __uflow(param_1);
                    bVar10 = bVar21;
                    if (uVar14 == 0xffffffff) goto LAB_001004c5;
                  }
                  ungetc(uVar14,param_1);
                  bVar10 = bVar3;
                }
              }
LAB_001004c5:
              bVar21 = bVar10;
              if (current_rp[1] < 2) {
                current_rp = current_rp + 2;
                sVar19 = 2;
                pFVar12 = (FILE *)0x0;
              }
              else {
                sVar19 = 2;
                pFVar12 = (FILE *)0x0;
              }
              goto LAB_001000d7;
            }
          } while (suppress_non_delimited != 0);
          uVar16 = 1;
          sVar7 = fwrite_unlocked(field_1_buffer,1,sVar19,_stdout);
          bVar10 = line_delim;
          if (sVar19 != sVar7) goto LAB_00100370;
          uVar14 = (uint)line_delim;
          uVar16 = (ulong)uVar14;
        } while ((int)*(char *)((long)field_1_buffer + (sVar19 - 1)) == uVar14);
        pbVar9 = (byte *)_stdout->_IO_write_ptr;
        if (pbVar9 < _stdout->_IO_write_end) {
          _stdout->_IO_write_ptr = (char *)(pbVar9 + 1);
          *pbVar9 = bVar10;
          goto LAB_001001e8;
        }
        iVar6 = __overflow(_stdout,uVar14);
      } while (-1 < iVar6);
    }
LAB_00100370:
    do {
      uVar14 = (uint)pFVar12;
      uVar15 = (uint)uVar16;
      bVar3 = write_error();
      pFVar8 = extraout_RDX;
LAB_00100378:
      bVar21 = 1;
      if (bVar3 == (byte)uVar15) {
LAB_00100383:
        bVar21 = 1;
        uVar17 = (uint)bVar3;
        uVar5 = (uint)pFVar8;
        if (uVar15 != uVar5) goto LAB_001001c0;
LAB_00100394:
        bVar21 = 1;
        pbVar9 = (byte *)param_1->_IO_read_ptr;
        if (param_1->_IO_read_end <= pbVar9) {
LAB_001004fe:
          uVar15 = __uflow(param_1);
          if (uVar15 != 0xffffffff) goto LAB_001003ad;
          uVar17 = (uint)line_delim;
          bVar10 = delim;
          bVar3 = line_delim;
          goto LAB_00100482;
        }
LAB_001003a2:
        param_1->_IO_read_ptr = (char *)(pbVar9 + 1);
        uVar15 = (uint)*pbVar9;
LAB_001003ad:
        ungetc(uVar15,param_1);
        pFVar8 = (FILE *)(ulong)uVar5;
        if (uVar5 == delim) goto LAB_00100333;
        bVar3 = line_delim;
        if (uVar5 != line_delim) goto LAB_001001d1;
LAB_001003e0:
        uVar17 = (uint)pFVar8;
        pFVar12 = (FILE *)((ulong)pFVar8 & 0xffffffff);
        if (((bVar21 == 0) && (suppress_non_delimited == 1)) && (sVar19 == 1)) goto LAB_00100429;
      }
      else {
LAB_00100328:
        uVar5 = uVar15;
        uVar17 = (uint)bVar3;
        if (uVar5 == (uint)pFVar8) goto LAB_00100333;
LAB_001001c0:
        bVar10 = (byte)pFVar11;
        if (uVar17 == (uint)pFVar8) goto LAB_001003e0;
        if ((uint)pFVar8 != 0xffffffff) {
LAB_001001d1:
          pFVar12 = (FILE *)((ulong)pFVar8 & 0xffffffff);
          goto joined_r0x001000ca;
        }
LAB_00100482:
        if (((bVar21 == 0) && (suppress_non_delimited == 1)) && (sVar19 == 1)) {
          return;
        }
        if ((uVar14 == uVar17) && (bVar10 != bVar3)) {
          return;
        }
        pFVar12 = (FILE *)0xffffffff;
      }
      pFVar11 = (FILE *)_stdout->_IO_write_ptr;
      if (pFVar11 < (FILE *)_stdout->_IO_write_end) {
        _stdout->_IO_write_ptr = (char *)((long)&pFVar11->_flags + 1);
        *(byte *)&pFVar11->_flags = bVar3;
        break;
      }
      uVar16 = (ulong)uVar17;
      iVar6 = __overflow(_stdout,uVar17);
    } while (iVar6 < 0);
    if ((int)pFVar12 == -1) {
      return;
    }
LAB_00100429:
    sVar19 = 1;
    bVar21 = 0;
    current_rp = _frp;
  } while( true );
LAB_00100680:
  pbVar9 = (byte *)p_Var18->_IO_read_ptr;
  if (p_Var18->_IO_read_end <= pbVar9) goto LAB_0010071c;
  while( true ) {
    uVar15 = (uint)line_delim;
    p_Var18->_IO_read_ptr = (char *)(pbVar9 + 1);
    uVar14 = (uint)*pbVar9;
    if (*pbVar9 == uVar15) break;
    while( true ) {
      uVar16 = uVar16 + 1;
      if (current_rp[1] < uVar16) {
        current_rp = current_rp + 2;
      }
      if (uVar16 < *current_rp) goto LAB_00100680;
      if (output_delimiter_string != &output_delimiter_default) {
        if (((*current_rp == uVar16) && (bVar2)) &&
           (pFVar12 = _stdout,
           sVar19 = fwrite_unlocked(output_delimiter_string,1,output_delimiter_length,_stdout),
           output_delimiter_length != sVar19)) goto LAB_001007d9;
        bVar2 = true;
      }
      pFVar12 = _stdout;
      pcVar1 = _stdout->_IO_write_ptr;
      if (_stdout->_IO_write_end <= pcVar1) goto LAB_001007e0;
      _stdout->_IO_write_ptr = pcVar1 + 1;
      *pcVar1 = (char)uVar14;
      pbVar9 = (byte *)p_Var18->_IO_read_ptr;
      if (pbVar9 < p_Var18->_IO_read_end) break;
LAB_0010071c:
      uVar14 = __uflow(p_Var18);
      bVar21 = line_delim;
      uVar15 = (uint)line_delim;
      if (uVar15 == uVar14) goto LAB_00100770;
      if (uVar14 == 0xffffffff) {
        if (uVar16 != 0) {
          pbVar9 = (byte *)_stdout->_IO_write_ptr;
          if (pbVar9 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = (char *)(pbVar9 + 1);
            *pbVar9 = bVar21;
          }
          else {
            iVar6 = __overflow(_stdout,uVar15);
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
    *pcVar1 = (char)uVar15;
  }
  else {
    iVar6 = __overflow(_stdout,uVar15);
    if (iVar6 < 0) {
LAB_001007d9:
      do {
        write_error();
LAB_001007e0:
        iVar6 = __overflow(pFVar12,uVar14 & 0xff);
      } while (iVar6 < 0);
      goto LAB_00100680;
    }
  }
  current_rp = _frp;
  uVar16 = 0;
  bVar2 = false;
  goto LAB_00100680;
LAB_001002e2:
  uVar14 = (uint)pFVar12;
  pbVar9 = (byte *)param_1->_IO_read_ptr;
  if (pbVar9 < param_1->_IO_read_end) {
    uVar15 = (uint)delim;
    pFVar11 = (FILE *)(ulong)uVar15;
    param_1->_IO_read_ptr = (char *)(pbVar9 + 1);
    bVar3 = *pbVar9;
    pFVar8 = (FILE *)(ulong)bVar3;
    uVar5 = (uint)bVar3;
    if (uVar15 == bVar3) goto LAB_001004e8;
    if (line_delim == bVar3) {
LAB_0010031a:
      uVar17 = (uint)(byte)pFVar11;
      bVar3 = line_delim;
      if ((byte)pFVar11 == line_delim) goto LAB_001001c0;
      goto LAB_00100328;
    }
  }
  else {
    uVar5 = __uflow(param_1);
    uVar15 = (uint)delim;
    pFVar11 = (FILE *)(ulong)uVar15;
    pFVar8 = (FILE *)(ulong)uVar5;
    if (uVar15 == uVar5) {
LAB_001004e8:
      uVar5 = (uint)pFVar8;
      bVar3 = line_delim;
      if (line_delim != (byte)pFVar11) goto LAB_00100328;
      pbVar9 = (byte *)param_1->_IO_read_ptr;
      if (pbVar9 < param_1->_IO_read_end) goto LAB_001003a2;
      goto LAB_001004fe;
    }
    if ((line_delim == uVar5) || (uVar5 == 0xffffffff)) goto LAB_0010031a;
  }
  pFVar12 = (FILE *)(ulong)uVar5;
  goto LAB_001002e2;
LAB_00100333:
  sVar19 = sVar19 + 1;
  if (current_rp[1] < sVar19) {
    current_rp = current_rp + 2;
  }
  pFVar12 = (FILE *)(ulong)uVar5;
  goto joined_r0x001000ca;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cut_bytes(_IO_FILE *param_1,undefined8 param_2,undefined8 param_3,FILE *param_4)

{
  char *pcVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  size_t sVar7;
  ulong uVar8;
  uint uVar9;
  
  bVar2 = false;
  uVar8 = 0;
  current_rp = _frp;
LAB_00100680:
  do {
    pbVar6 = (byte *)param_1->_IO_read_ptr;
    if (param_1->_IO_read_end <= pbVar6) goto LAB_0010071c;
    while( true ) {
      uVar9 = (uint)line_delim;
      param_1->_IO_read_ptr = (char *)(pbVar6 + 1);
      uVar4 = (uint)*pbVar6;
      if (*pbVar6 == uVar9) break;
      while( true ) {
        uVar8 = uVar8 + 1;
        if (current_rp[1] < uVar8) {
          current_rp = current_rp + 2;
        }
        if (uVar8 < *current_rp) goto LAB_00100680;
        if (output_delimiter_string != &output_delimiter_default) {
          if (((*current_rp == uVar8) && (bVar2)) &&
             (param_4 = _stdout,
             sVar7 = fwrite_unlocked(output_delimiter_string,1,output_delimiter_length,_stdout),
             output_delimiter_length != sVar7)) goto LAB_001007d9;
          bVar2 = true;
        }
        param_4 = _stdout;
        pcVar1 = _stdout->_IO_write_ptr;
        if (_stdout->_IO_write_end <= pcVar1) goto LAB_001007e0;
        _stdout->_IO_write_ptr = pcVar1 + 1;
        *pcVar1 = (char)uVar4;
        pbVar6 = (byte *)param_1->_IO_read_ptr;
        if (pbVar6 < param_1->_IO_read_end) break;
LAB_0010071c:
        uVar4 = __uflow(param_1);
        bVar3 = line_delim;
        uVar9 = (uint)line_delim;
        if (uVar9 == uVar4) goto LAB_00100770;
        if (uVar4 == 0xffffffff) {
          if (uVar8 != 0) {
            pbVar6 = (byte *)_stdout->_IO_write_ptr;
            if (pbVar6 < _stdout->_IO_write_end) {
              _stdout->_IO_write_ptr = (char *)(pbVar6 + 1);
              *pbVar6 = bVar3;
            }
            else {
              iVar5 = __overflow(_stdout,uVar9);
              if (iVar5 < 0) goto LAB_001007d9;
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
      *pcVar1 = (char)uVar9;
    }
    else {
      iVar5 = __overflow(_stdout,uVar9);
      if (iVar5 < 0) {
LAB_001007d9:
        do {
          write_error();
LAB_001007e0:
          iVar5 = __overflow(param_4,uVar4 & 0xff);
        } while (iVar5 < 0);
        goto LAB_00100680;
      }
    }
    current_rp = _frp;
    uVar8 = 0;
    bVar2 = false;
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool cut_file(char *param_1,code *param_2)

{
  int iVar1;
  FILE *__stream;
  uint *puVar2;
  int *piVar3;
  undefined8 uVar4;
  uint uVar5;
  
  if ((*param_1 == '-') && (param_1[1] == '\0')) {
    have_read_stdin = 1;
    __stream = _stdin;
  }
  else {
    __stream = (FILE *)rpl_fopen(param_1,&_LC3);
    if (__stream == (FILE *)0x0) {
      uVar4 = quotearg_n_style_colon(0,3,param_1);
      piVar3 = __errno_location();
      error(0,*piVar3,&_LC4,uVar4);
      return false;
    }
  }
  fadvise(__stream,2);
  (*param_2)(__stream);
  puVar2 = (uint *)__errno_location();
  uVar5 = __stream->_flags & 0x20;
  if (uVar5 != 0) {
    uVar5 = *puVar2;
  }
  if ((*param_1 == '-') && (param_1[1] == '\0')) {
    clearerr_unlocked(__stream);
  }
  else {
    iVar1 = rpl_fclose();
    if (iVar1 == -1) {
      uVar5 = *puVar2;
    }
  }
  if (uVar5 != 0) {
    uVar4 = quotearg_n_style_colon(0,3,param_1);
    error(0,uVar5,&_LC4,uVar4);
  }
  return uVar5 == 0;
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
    iVar2 = strcmp("cut",pcVar4);
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
  exit(param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte main(int param_1,undefined8 *param_2)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  size_t sVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int *piVar10;
  char *pcVar11;
  code *pcVar12;
  char *pcVar13;
  bool bVar14;
  
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  suppress_non_delimited = '\0';
  delim = '\0';
  have_read_stdin = '\0';
  bVar1 = false;
  bVar2 = false;
  pcVar13 = (char *)0x0;
switchD_001018cb_caseD_6e:
  iVar5 = getopt_long(param_1,param_2,"b:c:d:f:nsz",longopts,0);
  pcVar11 = _optarg;
  if (iVar5 == -1) {
    pcVar11 = "you must specify a list of bytes, characters, or fields";
    if (pcVar13 == (char *)0x0) goto LAB_00101b47;
    if (bVar1) {
      pcVar11 = "an input delimiter may be specified only when operating on fields";
      if ((bVar2) ||
         (pcVar11 = "suppressing non-delimited lines makes sense\n\tonly when operating on fields",
         suppress_non_delimited != '\0')) goto LAB_00101b47;
      set_fields(pcVar13,(uint)complement * 2 | 4,5);
    }
    else {
      set_fields(pcVar13,(uint)complement * 2,5);
      if (bVar2) {
        if (output_delimiter_string != (char *)0x0) goto LAB_00101b02;
        goto LAB_00101b66;
      }
    }
    delim = '\t';
    if (output_delimiter_string != (char *)0x0) goto LAB_00101a6a;
    goto LAB_00101b66;
  }
  if (iVar5 < 0x82) {
    if (0x61 < iVar5) goto code_r0x001018c4;
    if (iVar5 == -0x83) {
      uVar7 = proper_name_lite("Jim Meyering","Jim Meyering");
      uVar8 = proper_name_lite("David MacKenzie","David MacKenzie");
      uVar9 = proper_name_lite("David M. Ihnat","David M. Ihnat");
      version_etc(_stdout,&_LC6,"GNU coreutils",_Version,uVar9,uVar8,uVar7,0);
                    /* WARNING: Subroutine does not return */
      exit(0);
    }
    if (iVar5 == -0x82) {
      usage(0);
      goto LAB_00101bb6;
    }
  }
  goto switchD_001018cb_caseD_65;
code_r0x001018c4:
  switch(iVar5) {
  case 0x62:
  case 99:
    bVar1 = true;
  case 0x66:
    bVar14 = pcVar13 == (char *)0x0;
    pcVar13 = _optarg;
    if (bVar14) goto switchD_001018cb_caseD_6e;
    pcVar11 = "only one list may be specified";
    break;
  case 100:
    if ((*_optarg == '\0') || (_optarg[1] == '\0')) {
      bVar2 = true;
      delim = *_optarg;
      goto switchD_001018cb_caseD_6e;
    }
LAB_00101bb6:
    pcVar11 = "the delimiter must be a single character";
    break;
  default:
    goto switchD_001018cb_caseD_65;
  case 0x6e:
    goto switchD_001018cb_caseD_6e;
  case 0x73:
    suppress_non_delimited = '\x01';
    goto switchD_001018cb_caseD_6e;
  case 0x7a:
    line_delim = 0;
    goto switchD_001018cb_caseD_6e;
  case 0x80:
    sVar6 = 1;
    if (*_optarg != '\0') {
      sVar6 = strlen(_optarg);
    }
    output_delimiter_string = pcVar11;
    output_delimiter_length = sVar6;
    goto switchD_001018cb_caseD_6e;
  case 0x81:
    complement = 1;
    goto switchD_001018cb_caseD_6e;
  }
LAB_00101b47:
  uVar7 = dcgettext(0,pcVar11,5);
  error(0,0,uVar7);
switchD_001018cb_caseD_65:
  usage(1);
LAB_00101b66:
  output_delimiter_length = 1;
  output_delimiter_default = delim;
  output_delimiter_string = &output_delimiter_default;
LAB_00101a6a:
  pcVar12 = cut_bytes;
  if (!bVar1) {
LAB_00101b02:
    pcVar12 = cut_fields;
  }
  if (_optind == param_1) {
    bVar4 = cut_file(&_LC48,pcVar12);
  }
  else {
    bVar4 = 1;
    for (; _optind < param_1; _optind = _optind + 1) {
      bVar3 = cut_file(param_2[_optind],pcVar12);
      bVar4 = bVar4 & bVar3;
    }
  }
  if ((have_read_stdin != '\0') && (iVar5 = rpl_fclose(_stdin), iVar5 == -1)) {
    piVar10 = __errno_location();
    bVar4 = 0;
    error(0,*piVar10,&_LC48);
  }
  return bVar4 ^ 1;
}


