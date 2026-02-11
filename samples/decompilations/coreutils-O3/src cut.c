
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_error(void)

{
  byte bVar1;
  char *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  undefined8 uVar7;
  size_t sVar8;
  byte *pbVar9;
  FILE *pFVar10;
  FILE *pFVar11;
  byte bVar12;
  byte extraout_DL;
  byte bVar13;
  FILE *pFVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  _IO_FILE *__stream;
  _IO_FILE *p_Var19;
  size_t sVar20;
  byte bVar21;
  FILE *__n;
  char cVar22;
  FILE *pFVar23;
  FILE *pFVar14;
  
  puVar6 = (uint *)__errno_location();
  uVar5 = *puVar6;
  pFVar15 = (FILE *)(ulong)uVar5;
  fflush_unlocked(_stdout);
  fpurge(_stdout);
  clearerr_unlocked(_stdout);
  uVar7 = dcgettext(0,"write error",5);
  __stream = (_IO_FILE *)0x1;
  error(1,uVar5,uVar7);
  current_rp = _frp;
  pbVar9 = (byte *)__stream->_IO_read_ptr;
  if (pbVar9 < __stream->_IO_read_end) {
    __stream->_IO_read_ptr = (char *)(pbVar9 + 1);
    uVar5 = (uint)*pbVar9;
  }
  else {
    uVar5 = __uflow(__stream);
    if (uVar5 == 0xffffffff) {
      return;
    }
  }
  sVar20 = 1;
  ungetc(uVar5,__stream);
  pFVar23 = (FILE *)0x0;
  pFVar11 = (FILE *)0x0;
  bVar21 = 1 < *current_rp ^ suppress_non_delimited;
LAB_001000c0:
  bVar13 = sVar20 == 1 & bVar21;
  pFVar14 = (FILE *)CONCAT71((int7)((ulong)pFVar15 >> 8),bVar13);
  __n = pFVar11;
  pFVar11 = pFVar23;
  if (bVar13 != 0) goto LAB_00100258;
LAB_001000d7:
  pFVar15 = pFVar14;
  if (*current_rp <= sVar20) {
    pFVar11 = __n;
    if ((char)pFVar23 != '\0') {
      bVar13 = 1;
      pFVar10 = _stdout;
      sVar8 = fwrite_unlocked(output_delimiter_string,1,output_delimiter_length,_stdout);
      if (output_delimiter_length != sVar8) goto LAB_001003e0;
    }
LAB_00100170:
    do {
      __n = pFVar11;
      bVar13 = delim;
      iVar4 = (int)__n;
      pbVar9 = (byte *)__stream->_IO_read_ptr;
      if (pbVar9 < __stream->_IO_read_end) {
        uVar5 = (uint)delim;
        pFVar10 = (FILE *)(ulong)uVar5;
        __stream->_IO_read_ptr = (char *)(pbVar9 + 1);
        bVar1 = *pbVar9;
        pFVar15 = (FILE *)(ulong)bVar1;
        pFVar11 = pFVar10;
        if (bVar1 == uVar5) goto LAB_00100480;
        bVar12 = line_delim;
        if ((uint)bVar1 == (uint)line_delim) goto LAB_001003e8;
      }
      else {
        uVar5 = __uflow(__stream);
        pFVar10 = (FILE *)(ulong)(uint)delim;
        pFVar15 = (FILE *)(ulong)uVar5;
        pFVar11 = pFVar10;
        bVar13 = delim;
        if (delim == uVar5) {
LAB_00100480:
          pFVar10 = pFVar15;
          uVar5 = (uint)pFVar11;
          pFVar23 = (FILE *)0x1;
          pFVar15 = pFVar10;
          if (bVar13 == line_delim) {
            pFVar23 = (FILE *)0x1;
            uVar18 = (uint)line_delim;
            bVar12 = line_delim;
            if ((uint)pFVar10 != uVar5) goto LAB_001001c0;
            goto LAB_00100405;
          }
          goto LAB_001003ac;
        }
        uVar18 = (uint)line_delim;
        if ((uVar18 == uVar5) || (uVar5 == 0xffffffff)) {
          pFVar23 = (FILE *)0x1;
          pFVar11 = (FILE *)(ulong)uVar5;
          bVar12 = line_delim;
          if (delim == line_delim) goto LAB_001003f9;
          goto LAB_001001c0;
        }
      }
      pcVar2 = _stdout->_IO_write_ptr;
      pFVar11 = pFVar15;
      if (pcVar2 < _stdout->_IO_write_end) {
        _stdout->_IO_write_ptr = pcVar2 + 1;
        *pcVar2 = (char)pFVar15;
        goto LAB_00100170;
      }
      uVar16 = (ulong)pFVar15 & 0xff;
      iVar4 = __overflow(_stdout,(int)uVar16);
      bVar13 = (byte)uVar16;
    } while (-1 < iVar4);
LAB_001003e0:
    iVar4 = (int)__n;
    write_error();
    bVar12 = extraout_DL;
LAB_001003e8:
    pFVar23 = (FILE *)0x1;
    pFVar11 = pFVar15;
LAB_001003f4:
    if (bVar13 == bVar12) {
LAB_001003f9:
      uVar18 = (uint)bVar12;
      if ((int)pFVar10 != (int)pFVar11) goto LAB_001001c0;
LAB_00100405:
      pbVar9 = (byte *)__stream->_IO_read_ptr;
      if (__stream->_IO_read_end <= pbVar9) {
LAB_00100507:
        cVar22 = (char)pFVar23;
        uVar5 = __uflow(__stream);
        if (uVar5 != 0xffffffff) goto LAB_0010041e;
        __n = (FILE *)(ulong)line_delim;
        bVar13 = delim;
        bVar12 = line_delim;
        goto LAB_001001d6;
      }
LAB_00100413:
      __stream->_IO_read_ptr = (char *)(pbVar9 + 1);
      uVar5 = (uint)*pbVar9;
LAB_0010041e:
      cVar22 = (char)pFVar23;
      ungetc(uVar5,__stream);
      uVar5 = (uint)pFVar11;
      if (uVar5 == delim) goto LAB_001003ac;
      bVar12 = line_delim;
      if (line_delim != uVar5) goto LAB_001000c0;
LAB_00100450:
      pFVar15 = pFVar11;
      __n = pFVar15;
      if (((cVar22 != '\0') || (suppress_non_delimited != 1)) || (sVar20 != 1)) goto LAB_00100201;
    }
    else {
LAB_001003a0:
      uVar18 = (uint)bVar12;
      uVar5 = (uint)pFVar10;
      if (uVar5 == (uint)pFVar11) goto LAB_001003ac;
LAB_001001c0:
      cVar22 = (char)pFVar23;
      if (uVar18 == (uint)pFVar11) goto LAB_00100450;
      if ((uint)pFVar11 != 0xffffffff) goto LAB_001000c0;
      __n = (FILE *)(ulong)uVar18;
LAB_001001d6:
      if (((cVar22 == '\0') && (suppress_non_delimited == 1)) && (sVar20 == 1)) {
        return;
      }
      if (((int)__n == iVar4) && (bVar13 != bVar12)) {
        return;
      }
      pFVar15 = (FILE *)0xffffffff;
LAB_00100201:
      pbVar9 = (byte *)_stdout->_IO_write_ptr;
      if (pbVar9 < _stdout->_IO_write_end) {
        _stdout->_IO_write_ptr = (char *)(pbVar9 + 1);
        *pbVar9 = bVar12;
      }
      else {
        pFVar11 = __n;
        iVar4 = __overflow(_stdout,(int)__n);
        bVar13 = (byte)pFVar11;
        if (iVar4 < 0) goto LAB_001003e0;
      }
      if ((int)pFVar15 == -1) {
        return;
      }
    }
    sVar20 = 1;
    current_rp = _frp;
    pFVar23 = (FILE *)0x0;
    pFVar14 = (FILE *)(CONCAT71((int7)((ulong)pFVar15 >> 8),bVar21) & 0xffffffffffffff01);
    __n = pFVar15;
    pFVar11 = pFVar23;
    if ((bVar21 & 1) == 0) goto LAB_001000d7;
LAB_00100258:
    do {
      do {
        do {
          pFVar15 = pFVar14;
          pFVar23 = (FILE *)0xffffffffffffffff;
          sVar20 = getndelim2(&field_1_buffer,&field_1_bufsize,0,0xffffffffffffffff,delim,line_delim
                              ,__stream);
          if ((long)sVar20 < 0) {
            p_Var19 = field_1_buffer;
            free(field_1_buffer);
            field_1_buffer = (_IO_FILE *)0x0;
            if ((__stream->_flags & 0x30) != 0) {
              field_1_buffer = (_IO_FILE *)0x0;
              return;
            }
            xalloc_die();
            bVar3 = false;
            uVar16 = 0;
            current_rp = _frp;
            goto LAB_001006a0;
          }
          if (sVar20 == 0) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("n_bytes != 0","src/cut.c",0x140,"cut_fields");
          }
          __n = (FILE *)(sVar20 - 1);
          pFVar10 = _stdout;
          pFVar14 = pFVar15;
          if (delim == *(byte *)((long)field_1_buffer + (sVar20 - 1))) {
            pFVar23 = pFVar11;
            if (*current_rp < 2) {
              bVar13 = 1;
              pFVar23 = (FILE *)fwrite_unlocked(field_1_buffer,1,(size_t)__n,_stdout);
              if (__n != pFVar23) goto LAB_001003e0;
              pFVar23 = pFVar15;
              if (delim == line_delim) {
                pbVar9 = (byte *)__stream->_IO_read_ptr;
                if (pbVar9 < __stream->_IO_read_end) {
                  __stream->_IO_read_ptr = (char *)(pbVar9 + 1);
                  uVar5 = (uint)*pbVar9;
                }
                else {
                  uVar5 = __uflow(__stream);
                  pFVar23 = pFVar11;
                  if (uVar5 == 0xffffffff) goto LAB_001004c1;
                }
                ungetc(uVar5,__stream);
                pFVar23 = pFVar15;
              }
            }
LAB_001004c1:
            if (current_rp[1] < 2) {
              current_rp = current_rp + 2;
              sVar20 = 2;
              __n = (FILE *)0x0;
            }
            else {
              sVar20 = 2;
              __n = (FILE *)0x0;
            }
            goto LAB_001000d7;
          }
        } while (suppress_non_delimited != 0);
        bVar13 = 1;
        sVar8 = fwrite_unlocked(field_1_buffer,1,sVar20,_stdout);
        bVar12 = line_delim;
        if (sVar20 != sVar8) goto LAB_001003e0;
      } while ((int)*(char *)((long)field_1_buffer + (sVar20 - 1)) == (uint)line_delim);
      pbVar9 = (byte *)_stdout->_IO_write_ptr;
      if (pbVar9 < _stdout->_IO_write_end) {
        _stdout->_IO_write_ptr = (char *)(pbVar9 + 1);
        *pbVar9 = bVar12;
        goto LAB_00100258;
      }
      bVar13 = line_delim;
      iVar4 = __overflow(_stdout,(uint)line_delim);
    } while (-1 < iVar4);
    goto LAB_001003e0;
  }
LAB_00100359:
  bVar13 = delim;
  pbVar9 = (byte *)__stream->_IO_read_ptr;
  iVar4 = (int)__n;
  if (pbVar9 < __stream->_IO_read_end) {
    uVar17 = (uint)delim;
    pFVar10 = (FILE *)(ulong)uVar17;
    __stream->_IO_read_ptr = (char *)(pbVar9 + 1);
    bVar12 = *pbVar9;
    uVar5 = (uint)bVar12;
    if (bVar12 == uVar17) goto LAB_001004e8;
    if ((uint)bVar12 == (uint)line_delim) {
      pFVar11 = (FILE *)(ulong)uVar5;
      bVar12 = line_delim;
      goto LAB_001003f4;
    }
  }
  else {
    uVar5 = __uflow(__stream);
    uVar17 = (uint)delim;
    pFVar10 = (FILE *)(ulong)uVar17;
    uVar18 = (uint)line_delim;
    bVar13 = delim;
    if (uVar17 == uVar5) {
LAB_001004e8:
      pFVar11 = (FILE *)(ulong)uVar17;
      pFVar10 = (FILE *)(ulong)uVar5;
      bVar12 = line_delim;
      if (bVar13 != line_delim) goto LAB_001003a0;
      pbVar9 = (byte *)__stream->_IO_read_ptr;
      if (pbVar9 < __stream->_IO_read_end) goto LAB_00100413;
      goto LAB_00100507;
    }
    if ((uVar18 == uVar5) || (uVar5 == 0xffffffff)) {
      pFVar11 = (FILE *)(ulong)uVar5;
      bVar12 = line_delim;
      if (delim == line_delim) goto LAB_001001c0;
      goto LAB_001003a0;
    }
  }
  __n = (FILE *)(ulong)uVar5;
  goto LAB_00100359;
LAB_001003ac:
  sVar20 = sVar20 + 1;
  if (current_rp[1] < sVar20) {
    current_rp = current_rp + 2;
  }
  pFVar11 = (FILE *)(ulong)uVar5;
  goto LAB_001000c0;
LAB_001006a0:
  pbVar9 = (byte *)p_Var19->_IO_read_ptr;
  if (p_Var19->_IO_read_end <= pbVar9) goto LAB_0010073c;
  while( true ) {
    uVar17 = (uint)line_delim;
    p_Var19->_IO_read_ptr = (char *)(pbVar9 + 1);
    uVar5 = (uint)*pbVar9;
    if (*pbVar9 == uVar17) break;
    while( true ) {
      uVar16 = uVar16 + 1;
      if (current_rp[1] < uVar16) {
        current_rp = current_rp + 2;
      }
      if (uVar16 < *current_rp) goto LAB_001006a0;
      if (output_delimiter_string != &output_delimiter_default) {
        if (((*current_rp == uVar16) && (bVar3)) &&
           (pFVar23 = _stdout,
           sVar20 = fwrite_unlocked(output_delimiter_string,1,output_delimiter_length,_stdout),
           output_delimiter_length != sVar20)) goto LAB_001007f9;
        bVar3 = true;
      }
      pFVar23 = _stdout;
      pcVar2 = _stdout->_IO_write_ptr;
      if (_stdout->_IO_write_end <= pcVar2) goto LAB_00100800;
      _stdout->_IO_write_ptr = pcVar2 + 1;
      *pcVar2 = (char)uVar5;
      pbVar9 = (byte *)p_Var19->_IO_read_ptr;
      if (pbVar9 < p_Var19->_IO_read_end) break;
LAB_0010073c:
      uVar5 = __uflow(p_Var19);
      bVar21 = line_delim;
      uVar17 = (uint)line_delim;
      if (uVar17 == uVar5) goto LAB_00100790;
      if (uVar5 == 0xffffffff) {
        if (uVar16 != 0) {
          pbVar9 = (byte *)_stdout->_IO_write_ptr;
          if (pbVar9 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = (char *)(pbVar9 + 1);
            *pbVar9 = bVar21;
          }
          else {
            iVar4 = __overflow(_stdout,uVar17);
            if (iVar4 < 0) goto LAB_001007f9;
          }
        }
        return;
      }
    }
  }
LAB_00100790:
  pcVar2 = _stdout->_IO_write_ptr;
  if (pcVar2 < _stdout->_IO_write_end) {
    _stdout->_IO_write_ptr = pcVar2 + 1;
    *pcVar2 = (char)uVar17;
  }
  else {
    iVar4 = __overflow(_stdout,uVar17);
    if (iVar4 < 0) {
LAB_001007f9:
      do {
        write_error();
LAB_00100800:
        iVar4 = __overflow(pFVar23,uVar5 & 0xff);
      } while (iVar4 < 0);
      goto LAB_001006a0;
    }
  }
  current_rp = _frp;
  uVar16 = 0;
  bVar3 = false;
  goto LAB_001006a0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cut_fields(_IO_FILE *param_1)

{
  byte bVar1;
  char *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  size_t sVar6;
  byte *pbVar7;
  FILE *pFVar8;
  FILE *pFVar9;
  byte bVar10;
  byte extraout_DL;
  byte bVar11;
  FILE *unaff_RBX;
  uint uVar13;
  uint uVar14;
  _IO_FILE *p_Var15;
  size_t sVar16;
  byte bVar17;
  FILE *__n;
  char cVar18;
  ulong uVar19;
  FILE *pFVar12;
  
  current_rp = _frp;
  pbVar7 = (byte *)param_1->_IO_read_ptr;
  if (pbVar7 < param_1->_IO_read_end) {
    param_1->_IO_read_ptr = (char *)(pbVar7 + 1);
    uVar5 = (uint)*pbVar7;
  }
  else {
    uVar5 = __uflow(param_1);
    if (uVar5 == 0xffffffff) {
      return;
    }
  }
  sVar16 = 1;
  ungetc(uVar5,param_1);
  uVar19 = 0;
  pFVar9 = (FILE *)0x0;
  bVar17 = 1 < *current_rp ^ suppress_non_delimited;
LAB_001000c0:
  bVar11 = sVar16 == 1 & bVar17;
  pFVar12 = (FILE *)CONCAT71((int7)((ulong)unaff_RBX >> 8),bVar11);
  __n = pFVar9;
  if (bVar11 != 0) goto LAB_00100258;
LAB_001000d7:
  unaff_RBX = pFVar12;
  if (*current_rp <= sVar16) {
    pFVar9 = __n;
    if ((char)uVar19 != '\0') {
      bVar11 = 1;
      pFVar8 = _stdout;
      sVar6 = fwrite_unlocked(output_delimiter_string,1,output_delimiter_length,_stdout);
      if (output_delimiter_length != sVar6) goto LAB_001003e0;
    }
LAB_00100170:
    do {
      __n = pFVar9;
      bVar11 = delim;
      iVar4 = (int)__n;
      pbVar7 = (byte *)param_1->_IO_read_ptr;
      if (pbVar7 < param_1->_IO_read_end) {
        uVar5 = (uint)delim;
        pFVar8 = (FILE *)(ulong)uVar5;
        param_1->_IO_read_ptr = (char *)(pbVar7 + 1);
        bVar1 = *pbVar7;
        unaff_RBX = (FILE *)(ulong)bVar1;
        pFVar9 = pFVar8;
        if (bVar1 == uVar5) goto LAB_00100480;
        bVar10 = line_delim;
        if ((uint)bVar1 == (uint)line_delim) goto LAB_001003e8;
      }
      else {
        uVar5 = __uflow(param_1);
        pFVar8 = (FILE *)(ulong)(uint)delim;
        unaff_RBX = (FILE *)(ulong)uVar5;
        pFVar9 = pFVar8;
        bVar11 = delim;
        if (delim == uVar5) {
LAB_00100480:
          pFVar8 = unaff_RBX;
          uVar5 = (uint)pFVar9;
          uVar19 = 1;
          unaff_RBX = pFVar8;
          if (bVar11 == line_delim) {
            uVar19 = 1;
            uVar14 = (uint)line_delim;
            bVar10 = line_delim;
            if ((uint)pFVar8 != uVar5) goto LAB_001001c0;
            goto LAB_00100405;
          }
          goto LAB_001003ac;
        }
        uVar14 = (uint)line_delim;
        if ((uVar14 == uVar5) || (uVar5 == 0xffffffff)) {
          uVar19 = 1;
          pFVar9 = (FILE *)(ulong)uVar5;
          bVar10 = line_delim;
          if (delim == line_delim) goto LAB_001003f9;
          goto LAB_001001c0;
        }
      }
      pcVar2 = _stdout->_IO_write_ptr;
      pFVar9 = unaff_RBX;
      if (pcVar2 < _stdout->_IO_write_end) {
        _stdout->_IO_write_ptr = pcVar2 + 1;
        *pcVar2 = (char)unaff_RBX;
        goto LAB_00100170;
      }
      uVar19 = (ulong)unaff_RBX & 0xff;
      iVar4 = __overflow(_stdout,(int)uVar19);
      bVar11 = (byte)uVar19;
    } while (-1 < iVar4);
LAB_001003e0:
    iVar4 = (int)__n;
    write_error();
    bVar10 = extraout_DL;
LAB_001003e8:
    uVar19 = 1;
    pFVar9 = (FILE *)((ulong)unaff_RBX & 0xffffffff);
LAB_001003f4:
    if (bVar11 == bVar10) {
LAB_001003f9:
      uVar14 = (uint)bVar10;
      if ((int)pFVar8 != (int)pFVar9) goto LAB_001001c0;
LAB_00100405:
      pbVar7 = (byte *)param_1->_IO_read_ptr;
      if (param_1->_IO_read_end <= pbVar7) {
LAB_00100507:
        cVar18 = (char)uVar19;
        uVar5 = __uflow(param_1);
        if (uVar5 != 0xffffffff) goto LAB_0010041e;
        __n = (FILE *)(ulong)line_delim;
        bVar11 = delim;
        bVar10 = line_delim;
        goto LAB_001001d6;
      }
LAB_00100413:
      param_1->_IO_read_ptr = (char *)(pbVar7 + 1);
      uVar5 = (uint)*pbVar7;
LAB_0010041e:
      cVar18 = (char)uVar19;
      ungetc(uVar5,param_1);
      uVar5 = (uint)pFVar9;
      if (uVar5 == delim) goto LAB_001003ac;
      bVar10 = line_delim;
      if (line_delim != uVar5) goto LAB_001000c0;
LAB_00100450:
      unaff_RBX = pFVar9;
      __n = unaff_RBX;
      if (((cVar18 != '\0') || (suppress_non_delimited != 1)) || (sVar16 != 1)) goto LAB_00100201;
    }
    else {
LAB_001003a0:
      uVar14 = (uint)bVar10;
      uVar5 = (uint)pFVar8;
      if (uVar5 == (uint)pFVar9) goto LAB_001003ac;
LAB_001001c0:
      cVar18 = (char)uVar19;
      if (uVar14 == (uint)pFVar9) goto LAB_00100450;
      if ((uint)pFVar9 != 0xffffffff) goto LAB_001000c0;
      __n = (FILE *)(ulong)uVar14;
LAB_001001d6:
      if (((cVar18 == '\0') && (suppress_non_delimited == 1)) && (sVar16 == 1)) {
        return;
      }
      if (((int)__n == iVar4) && (bVar11 != bVar10)) {
        return;
      }
      unaff_RBX = (FILE *)0xffffffff;
LAB_00100201:
      pbVar7 = (byte *)_stdout->_IO_write_ptr;
      if (pbVar7 < _stdout->_IO_write_end) {
        _stdout->_IO_write_ptr = (char *)(pbVar7 + 1);
        *pbVar7 = bVar10;
      }
      else {
        pFVar9 = __n;
        iVar4 = __overflow(_stdout,(int)__n);
        bVar11 = (byte)pFVar9;
        if (iVar4 < 0) goto LAB_001003e0;
      }
      if ((int)unaff_RBX == -1) {
        return;
      }
    }
    sVar16 = 1;
    current_rp = _frp;
    uVar19 = 0;
    pFVar12 = (FILE *)(CONCAT71((int7)((ulong)unaff_RBX >> 8),bVar17) & 0xffffffffffffff01);
    __n = unaff_RBX;
    if ((bVar17 & 1) == 0) goto LAB_001000d7;
LAB_00100258:
    do {
      do {
        do {
          unaff_RBX = pFVar12;
          pFVar9 = (FILE *)0xffffffffffffffff;
          sVar16 = getndelim2(&field_1_buffer,&field_1_bufsize,0,0xffffffffffffffff,delim,line_delim
                              ,param_1);
          if ((long)sVar16 < 0) {
            p_Var15 = field_1_buffer;
            free(field_1_buffer);
            field_1_buffer = (_IO_FILE *)0x0;
            if ((param_1->_flags & 0x30) != 0) {
              field_1_buffer = (_IO_FILE *)0x0;
              return;
            }
            xalloc_die();
            bVar3 = false;
            uVar19 = 0;
            current_rp = _frp;
            goto LAB_001006a0;
          }
          if (sVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("n_bytes != 0","src/cut.c",0x140,"cut_fields");
          }
          __n = (FILE *)(sVar16 - 1);
          pFVar8 = _stdout;
          pFVar12 = unaff_RBX;
          if (delim == *(byte *)((long)field_1_buffer + (sVar16 - 1))) {
            if (*current_rp < 2) {
              bVar11 = 1;
              pFVar9 = (FILE *)fwrite_unlocked(field_1_buffer,1,(size_t)__n,_stdout);
              if (__n != pFVar9) goto LAB_001003e0;
              if (delim == line_delim) {
                pbVar7 = (byte *)param_1->_IO_read_ptr;
                if (pbVar7 < param_1->_IO_read_end) {
                  param_1->_IO_read_ptr = (char *)(pbVar7 + 1);
                  uVar5 = (uint)*pbVar7;
                }
                else {
                  uVar5 = __uflow(param_1);
                  if (uVar5 == 0xffffffff) goto LAB_001004c1;
                }
                ungetc(uVar5,param_1);
              }
              uVar19 = (ulong)unaff_RBX & 0xffffffff;
            }
LAB_001004c1:
            if (current_rp[1] < 2) {
              current_rp = current_rp + 2;
              sVar16 = 2;
              __n = (FILE *)0x0;
            }
            else {
              sVar16 = 2;
              __n = (FILE *)0x0;
            }
            goto LAB_001000d7;
          }
        } while (suppress_non_delimited != 0);
        bVar11 = 1;
        sVar6 = fwrite_unlocked(field_1_buffer,1,sVar16,_stdout);
        bVar10 = line_delim;
        if (sVar16 != sVar6) goto LAB_001003e0;
      } while ((int)*(char *)((long)field_1_buffer + (sVar16 - 1)) == (uint)line_delim);
      pbVar7 = (byte *)_stdout->_IO_write_ptr;
      if (pbVar7 < _stdout->_IO_write_end) {
        _stdout->_IO_write_ptr = (char *)(pbVar7 + 1);
        *pbVar7 = bVar10;
        goto LAB_00100258;
      }
      bVar11 = line_delim;
      iVar4 = __overflow(_stdout,(uint)line_delim);
    } while (-1 < iVar4);
    goto LAB_001003e0;
  }
LAB_00100359:
  bVar11 = delim;
  pbVar7 = (byte *)param_1->_IO_read_ptr;
  iVar4 = (int)__n;
  if (pbVar7 < param_1->_IO_read_end) {
    uVar13 = (uint)delim;
    pFVar8 = (FILE *)(ulong)uVar13;
    param_1->_IO_read_ptr = (char *)(pbVar7 + 1);
    bVar10 = *pbVar7;
    uVar5 = (uint)bVar10;
    if (bVar10 == uVar13) goto LAB_001004e8;
    if ((uint)bVar10 == (uint)line_delim) {
      pFVar9 = (FILE *)(ulong)uVar5;
      bVar10 = line_delim;
      goto LAB_001003f4;
    }
  }
  else {
    uVar5 = __uflow(param_1);
    uVar13 = (uint)delim;
    pFVar8 = (FILE *)(ulong)uVar13;
    uVar14 = (uint)line_delim;
    bVar11 = delim;
    if (uVar13 == uVar5) {
LAB_001004e8:
      pFVar9 = (FILE *)(ulong)uVar13;
      pFVar8 = (FILE *)(ulong)uVar5;
      bVar10 = line_delim;
      if (bVar11 != line_delim) goto LAB_001003a0;
      pbVar7 = (byte *)param_1->_IO_read_ptr;
      if (pbVar7 < param_1->_IO_read_end) goto LAB_00100413;
      goto LAB_00100507;
    }
    if ((uVar14 == uVar5) || (uVar5 == 0xffffffff)) {
      pFVar9 = (FILE *)(ulong)uVar5;
      bVar10 = line_delim;
      if (delim == line_delim) goto LAB_001001c0;
      goto LAB_001003a0;
    }
  }
  __n = (FILE *)(ulong)uVar5;
  goto LAB_00100359;
LAB_001003ac:
  sVar16 = sVar16 + 1;
  if (current_rp[1] < sVar16) {
    current_rp = current_rp + 2;
  }
  pFVar9 = (FILE *)(ulong)uVar5;
  goto LAB_001000c0;
LAB_001006a0:
  pbVar7 = (byte *)p_Var15->_IO_read_ptr;
  if (p_Var15->_IO_read_end <= pbVar7) goto LAB_0010073c;
  while( true ) {
    uVar13 = (uint)line_delim;
    p_Var15->_IO_read_ptr = (char *)(pbVar7 + 1);
    uVar5 = (uint)*pbVar7;
    if (*pbVar7 == uVar13) break;
    while( true ) {
      uVar19 = uVar19 + 1;
      if (current_rp[1] < uVar19) {
        current_rp = current_rp + 2;
      }
      if (uVar19 < *current_rp) goto LAB_001006a0;
      if (output_delimiter_string != &output_delimiter_default) {
        if (((*current_rp == uVar19) && (bVar3)) &&
           (pFVar9 = _stdout,
           sVar16 = fwrite_unlocked(output_delimiter_string,1,output_delimiter_length,_stdout),
           output_delimiter_length != sVar16)) goto LAB_001007f9;
        bVar3 = true;
      }
      pFVar9 = _stdout;
      pcVar2 = _stdout->_IO_write_ptr;
      if (_stdout->_IO_write_end <= pcVar2) goto LAB_00100800;
      _stdout->_IO_write_ptr = pcVar2 + 1;
      *pcVar2 = (char)uVar5;
      pbVar7 = (byte *)p_Var15->_IO_read_ptr;
      if (pbVar7 < p_Var15->_IO_read_end) break;
LAB_0010073c:
      uVar5 = __uflow(p_Var15);
      bVar17 = line_delim;
      uVar13 = (uint)line_delim;
      if (uVar13 == uVar5) goto LAB_00100790;
      if (uVar5 == 0xffffffff) {
        if (uVar19 != 0) {
          pbVar7 = (byte *)_stdout->_IO_write_ptr;
          if (pbVar7 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = (char *)(pbVar7 + 1);
            *pbVar7 = bVar17;
          }
          else {
            iVar4 = __overflow(_stdout,uVar13);
            if (iVar4 < 0) goto LAB_001007f9;
          }
        }
        return;
      }
    }
  }
LAB_00100790:
  pcVar2 = _stdout->_IO_write_ptr;
  if (pcVar2 < _stdout->_IO_write_end) {
    _stdout->_IO_write_ptr = pcVar2 + 1;
    *pcVar2 = (char)uVar13;
  }
  else {
    iVar4 = __overflow(_stdout,uVar13);
    if (iVar4 < 0) {
LAB_001007f9:
      do {
        write_error();
LAB_00100800:
        iVar4 = __overflow(pFVar9,uVar5 & 0xff);
      } while (iVar4 < 0);
      goto LAB_001006a0;
    }
  }
  current_rp = _frp;
  uVar19 = 0;
  bVar3 = false;
  goto LAB_001006a0;
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
LAB_001006a0:
  do {
    pbVar6 = (byte *)param_1->_IO_read_ptr;
    if (param_1->_IO_read_end <= pbVar6) goto LAB_0010073c;
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
        if (uVar8 < *current_rp) goto LAB_001006a0;
        if (output_delimiter_string != &output_delimiter_default) {
          if (((*current_rp == uVar8) && (bVar2)) &&
             (param_4 = _stdout,
             sVar7 = fwrite_unlocked(output_delimiter_string,1,output_delimiter_length,_stdout),
             output_delimiter_length != sVar7)) goto LAB_001007f9;
          bVar2 = true;
        }
        param_4 = _stdout;
        pcVar1 = _stdout->_IO_write_ptr;
        if (_stdout->_IO_write_end <= pcVar1) goto LAB_00100800;
        _stdout->_IO_write_ptr = pcVar1 + 1;
        *pcVar1 = (char)uVar4;
        pbVar6 = (byte *)param_1->_IO_read_ptr;
        if (pbVar6 < param_1->_IO_read_end) break;
LAB_0010073c:
        uVar4 = __uflow(param_1);
        bVar3 = line_delim;
        uVar9 = (uint)line_delim;
        if (uVar9 == uVar4) goto LAB_00100790;
        if (uVar4 == 0xffffffff) {
          if (uVar8 != 0) {
            pbVar6 = (byte *)_stdout->_IO_write_ptr;
            if (pbVar6 < _stdout->_IO_write_end) {
              _stdout->_IO_write_ptr = (char *)(pbVar6 + 1);
              *pbVar6 = bVar3;
            }
            else {
              iVar5 = __overflow(_stdout,uVar9);
              if (iVar5 < 0) goto LAB_001007f9;
            }
          }
          return;
        }
      }
    }
LAB_00100790:
    pcVar1 = _stdout->_IO_write_ptr;
    if (pcVar1 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = pcVar1 + 1;
      *pcVar1 = (char)uVar9;
    }
    else {
      iVar5 = __overflow(_stdout,uVar9);
      if (iVar5 < 0) {
LAB_001007f9:
        do {
          write_error();
LAB_00100800:
          iVar5 = __overflow(param_4,uVar4 & 0xff);
        } while (iVar5 < 0);
        goto LAB_001006a0;
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
    goto LAB_0010099a;
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
    if (pcVar4 != (char *)0x0) goto LAB_00100ca5;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC6);
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
LAB_00100ca5:
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
LAB_0010099a:
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
switchD_001018eb_caseD_6e:
  iVar5 = getopt_long(param_1,param_2,"b:c:d:f:nsz",longopts,0);
  pcVar11 = _optarg;
  if (iVar5 == -1) {
    pcVar11 = "you must specify a list of bytes, characters, or fields";
    if (pcVar13 == (char *)0x0) goto LAB_00101b67;
    if (bVar1) {
      pcVar11 = "an input delimiter may be specified only when operating on fields";
      if ((bVar2) ||
         (pcVar11 = "suppressing non-delimited lines makes sense\n\tonly when operating on fields",
         suppress_non_delimited != '\0')) goto LAB_00101b67;
      set_fields(pcVar13,(uint)complement * 2 | 4,5);
    }
    else {
      set_fields(pcVar13,(uint)complement * 2,5);
      if (bVar2) {
        if (output_delimiter_string != (char *)0x0) goto LAB_00101b22;
        goto LAB_00101b86;
      }
    }
    delim = '\t';
    if (output_delimiter_string != (char *)0x0) goto LAB_00101a8a;
    goto LAB_00101b86;
  }
  if (iVar5 < 0x82) {
    if (0x61 < iVar5) goto code_r0x001018e4;
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
      goto LAB_00101bd6;
    }
  }
  goto switchD_001018eb_caseD_65;
code_r0x001018e4:
  switch(iVar5) {
  case 0x62:
  case 99:
    bVar1 = true;
  case 0x66:
    bVar14 = pcVar13 == (char *)0x0;
    pcVar13 = _optarg;
    if (bVar14) goto switchD_001018eb_caseD_6e;
    pcVar11 = "only one list may be specified";
    break;
  case 100:
    if ((*_optarg == '\0') || (_optarg[1] == '\0')) {
      bVar2 = true;
      delim = *_optarg;
      goto switchD_001018eb_caseD_6e;
    }
LAB_00101bd6:
    pcVar11 = "the delimiter must be a single character";
    break;
  default:
    goto switchD_001018eb_caseD_65;
  case 0x6e:
    goto switchD_001018eb_caseD_6e;
  case 0x73:
    suppress_non_delimited = '\x01';
    goto switchD_001018eb_caseD_6e;
  case 0x7a:
    line_delim = 0;
    goto switchD_001018eb_caseD_6e;
  case 0x80:
    sVar6 = 1;
    if (*_optarg != '\0') {
      sVar6 = strlen(_optarg);
    }
    output_delimiter_string = pcVar11;
    output_delimiter_length = sVar6;
    goto switchD_001018eb_caseD_6e;
  case 0x81:
    complement = 1;
    goto switchD_001018eb_caseD_6e;
  }
LAB_00101b67:
  uVar7 = dcgettext(0,pcVar11,5);
  error(0,0,uVar7);
switchD_001018eb_caseD_65:
  usage(1);
LAB_00101b86:
  output_delimiter_length = 1;
  output_delimiter_default = delim;
  output_delimiter_string = &output_delimiter_default;
LAB_00101a8a:
  pcVar12 = cut_bytes;
  if (!bVar1) {
LAB_00101b22:
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


