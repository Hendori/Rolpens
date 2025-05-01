
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void write_counts(uintmax_t lines,uintmax_t words,uintmax_t chars,uintmax_t bytes,
                 intmax_t linelength,char *file)

{
  long lVar1;
  undefined8 uVar2;
  char *pcVar3;
  char *pcVar4;
  long in_FS_OFFSET;
  char buf [21];
  
  pcVar3 = "%*s";
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (print_lines) {
    uVar2 = umaxtostr(lines,buf);
    pcVar3 = " %*s";
    __printf_chk(2,"%*s",number_width,uVar2);
  }
  pcVar4 = pcVar3;
  if (print_words != false) {
    uVar2 = umaxtostr(words,buf);
    pcVar4 = " %*s";
    __printf_chk(2,pcVar3,number_width,uVar2);
  }
  pcVar3 = pcVar4;
  if (print_chars != false) {
    uVar2 = umaxtostr(chars,buf);
    pcVar3 = " %*s";
    __printf_chk(2,pcVar4,number_width,uVar2);
  }
  pcVar4 = pcVar3;
  if (print_bytes != false) {
    uVar2 = umaxtostr(bytes,buf);
    pcVar4 = " %*s";
    __printf_chk(2,pcVar3,number_width,uVar2);
  }
  if (print_linelength != false) {
    uVar2 = imaxtostr(linelength,buf);
    __printf_chk(2,pcVar4,number_width,uVar2);
  }
  if (file != (char *)0x0) {
    pcVar3 = strchr(file,10);
    if (pcVar3 != (char *)0x0) {
      file = (char *)quotearg_n_style_colon(0,3,file);
    }
    __printf_chk(2,&_LC0,file);
  }
  pcVar3 = _stdout->_IO_write_ptr;
  if (pcVar3 < _stdout->_IO_write_end) {
    _stdout->_IO_write_ptr = pcVar3 + 1;
    *pcVar3 = '\n';
  }
  else {
    __overflow(_stdout,10);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

_Bool wc(wchar_t fd,char *file_x,fstatus *fstatus,off_t current_pos)

{
  char *pcVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  idx_t iVar5;
  undefined1 *puVar6;
  int iVar7;
  size_t sVar8;
  ssize_t sVar9;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  __off_t _Var13;
  undefined8 uVar14;
  byte bVar15;
  byte *pbVar16;
  __off_t _Var17;
  ulong uVar18;
  undefined1 *puVar19;
  byte *__buf;
  wchar_t wVar20;
  long lVar21;
  byte bVar22;
  uint uVar23;
  long lVar24;
  uintmax_t chars;
  long lVar25;
  char *pcVar26;
  char *pcVar27;
  uint uVar28;
  long in_FS_OFFSET;
  byte bVar29;
  _Bool _Var30;
  char32_t wide_char;
  mbstate_t state;
  char buf [262145];
  
  puVar6 = &stack0xffffffffffffffd0;
  do {
    puVar19 = puVar6;
    *(undefined8 *)(puVar19 + -0x1000) = *(undefined8 *)(puVar19 + -0x1000);
    puVar6 = puVar19 + -0x1000;
  } while (puVar19 + -0x1000 != buf + 0x18);
  *(wchar_t *)(puVar19 + -0x1094) = fd;
  *(char **)(puVar19 + -0x1050) = file_x;
  *(undefined8 *)(puVar19 + 0x3eff0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  *(char **)(puVar19 + -0x1048) = file_x;
  if (file_x == (char *)0x0) {
    *(undefined8 *)(puVar19 + -0x10b0) = 0x100c5c;
    uVar14 = dcgettext(0,"standard input",5);
    *(undefined8 *)(puVar19 + -0x1048) = uVar14;
  }
  *(undefined8 *)(puVar19 + -0x10b0) = 0x10026f;
  sVar8 = __ctype_get_mb_cur_max();
  bVar22 = print_bytes;
  if (sVar8 < 2) {
    puVar19[-0x103d] = 0;
    if (print_bytes == false) {
      bVar22 = print_chars;
    }
  }
  else {
    puVar19[-0x103d] = print_chars;
  }
  if ((print_words != false) || (print_linelength != false)) {
    *(undefined8 *)(puVar19 + -0x10b0) = 0x1002b4;
    fdadvise(*(undefined4 *)(puVar19 + -0x1094),0,0,2);
LAB_001002b4:
    *(undefined8 *)(puVar19 + -0x10b0) = 0x1002b9;
    sVar8 = __ctype_get_mb_cur_max();
    if (1 < sVar8) {
      *(undefined8 *)(puVar19 + -0x10a0) = 0;
      uVar10 = 0;
      bVar22 = 0;
      bVar15 = 0;
      *(undefined8 *)(puVar19 + -0x1020) = 0;
      chars = 0;
      pcVar26 = puVar19 + -0x1018;
      *(undefined8 *)(puVar19 + -0x1078) = 0;
      *(undefined8 *)(puVar19 + -0x1088) = 0;
      *(undefined8 *)(puVar19 + -0x1080) = 0;
      *(undefined8 *)(puVar19 + -0x1068) = 0;
LAB_00100528:
      *(ulong *)(puVar19 + -0x10a8) = uVar10;
      uVar18 = 0x40001;
      if (0x40000 < uVar10) {
        uVar18 = uVar10;
      }
      *(undefined8 *)(puVar19 + -0x10b0) = 0x100550;
      lVar24 = __read_chk(*(undefined4 *)(puVar19 + -0x1094),pcVar26 + uVar10,0x40000 - uVar10,
                          uVar18 - uVar10);
      uVar10 = *(ulong *)(puVar19 + -0x10a8);
      if (lVar24 == 0) {
        if (uVar10 == 0) goto LAB_00100cf4;
      }
      else if (lVar24 < 0) {
        *(undefined8 *)(puVar19 + -0x10b0) = 0x1009eb;
        piVar12 = __errno_location();
        iVar7 = *piVar12;
        _Var30 = iVar7 == 0;
        goto LAB_001009f5;
      }
      *(long *)(puVar19 + -0x1088) = *(long *)(puVar19 + -0x1088) + lVar24;
      *(undefined1 **)(puVar19 + -0x10a8) = puVar19 + -0x1020;
      pcVar1 = pcVar26 + lVar24 + uVar10;
      *(long *)(puVar19 + -0x1070) = lVar24;
      *(char **)(puVar19 + -0x1060) = pcVar26;
      pcVar27 = pcVar26;
      do {
        if ((bVar22 != 0) || (cVar3 = *pcVar27, cVar3 < '\0')) {
          uVar18 = (long)pcVar1 - (long)(pcVar27 + uVar10);
          *(undefined8 *)(puVar19 + -0x10b0) = 0x10081b;
          uVar10 = rpl_mbrtoc32(puVar19 + -0x1038,pcVar27 + uVar10,uVar18,
                                *(undefined8 *)(puVar19 + -0x10a8));
          if (uVar10 <= uVar18) {
            *(ulong *)(puVar19 + -0x1090) = uVar10 + (uVar10 == 0);
            *(undefined8 *)(puVar19 + -0x10b0) = 0x100896;
            iVar7 = mbsinit(*(mbstate_t **)(puVar19 + -0x10a8));
            wVar20 = *(wchar_t *)(puVar19 + -0x1038);
            uVar18 = *(ulong *)(puVar19 + -0x1090);
            bVar29 = iVar7 == 0;
            switch(wVar20) {
            case L'\t':
              uVar10 = 0;
              goto LAB_00100675;
            case L'\n':
              uVar10 = 0;
              goto LAB_00100665;
            case L'\v':
              uVar10 = 0;
              bVar15 = 0;
              goto LAB_00100608;
            case L'\f':
            case L'\r':
              uVar10 = 0;
              goto LAB_0010062d;
            case L' ':
              uVar10 = 0;
              goto LAB_001006a5;
            }
            if ((bVar22 ^ 1) == uVar18) {
              uVar10 = 0;
              goto LAB_001005d5;
            }
            if (print_linelength != false) {
              *(ulong *)(puVar19 + -0x1058) = uVar18;
              puVar19[-0x1090] = bVar29;
              *(undefined8 *)(puVar19 + -0x10b0) = 0x100b4e;
              iVar7 = wcwidth(wVar20);
              bVar29 = puVar19[-0x1090];
              uVar18 = *(ulong *)(puVar19 + -0x1058);
              if (0 < iVar7) {
                *(long *)(puVar19 + -0x10a0) = *(long *)(puVar19 + -0x10a0) + (long)iVar7;
              }
              wVar20 = *(wchar_t *)(puVar19 + -0x1038);
            }
            *(ulong *)(puVar19 + -0x1058) = uVar18;
            puVar19[-0x1090] = bVar29;
            *(wchar_t *)(puVar19 + -0x103c) = wVar20;
            *(undefined8 *)(puVar19 + -0x10b0) = 0x1008f3;
            iVar7 = iswspace(wVar20);
            uVar18 = *(ulong *)(puVar19 + -0x1058);
            if (iVar7 == 0) {
              iVar7 = *(int *)(puVar19 + -0x103c);
              if (posixly_correct == false) {
                if ((iVar7 == 0xa0) || (iVar7 == 0x2007)) goto LAB_00100b30;
                bVar22 = bVar15 | (iVar7 == 0x202f || iVar7 == 0x2060);
                bVar15 = iVar7 != 0x202f && iVar7 != 0x2060;
                *(ulong *)(puVar19 + -0x1080) = *(long *)(puVar19 + -0x1080) + (ulong)(bVar22 ^ 1);
              }
              else {
                *(ulong *)(puVar19 + -0x1080) = *(long *)(puVar19 + -0x1080) + (ulong)(bVar15 ^ 1);
                bVar15 = posixly_correct;
              }
            }
            else {
LAB_00100b30:
              bVar15 = 0;
            }
            uVar10 = 0;
            bVar29 = puVar19[-0x1090];
            goto LAB_00100608;
          }
          if (uVar10 == 0xfffffffffffffffe) {
            lVar24 = (long)pcVar1 - (long)pcVar27;
            bVar22 = lVar24 < 0x40000 && *(long *)(puVar19 + -0x1070) != 0;
            if ((bool)bVar22) {
              pcVar26 = *(char **)(puVar19 + -0x1060);
              *(long *)(puVar19 + -0x10a8) = lVar24;
              *(undefined8 *)(puVar19 + -0x10b0) = 0x1009d7;
              __memmove_chk(pcVar26,pcVar27,lVar24,0x40001);
              uVar10 = *(ulong *)(puVar19 + -0x10a8);
              goto LAB_00100528;
            }
          }
          pcVar27 = pcVar27 + 1;
          uVar10 = 0;
          bVar22 = 0;
          *(ulong *)(puVar19 + -0x1080) = *(long *)(puVar19 + -0x1080) + (ulong)(bVar15 ^ 1);
          bVar15 = 1;
          **(undefined8 **)(puVar19 + -0x10a8) = 0;
          goto LAB_0010060f;
        }
        wVar20 = (wchar_t)cVar3;
        *(wchar_t *)(puVar19 + -0x1038) = wVar20;
        bVar29 = bVar22;
        switch(cVar3) {
        case '\t':
          uVar18 = 1;
LAB_00100675:
          lVar24 = *(long *)(puVar19 + -0x10a0);
          bVar15 = 0;
          *(ulong *)(puVar19 + -0x10a0) =
               lVar24 + 8 +
               (((ulong)(lVar24 >> 0x3f) >> 0x3d) -
               (ulong)((int)lVar24 + ((uint)(lVar24 >> 0x3f) >> 0x1d) & 7));
          break;
        case '\n':
          uVar18 = 1;
LAB_00100665:
          *(long *)(puVar19 + -0x1068) = *(long *)(puVar19 + -0x1068) + 1;
          goto LAB_0010062d;
        case '\v':
          bVar15 = 0;
          uVar18 = 1;
          break;
        case '\f':
        case '\r':
          uVar18 = 1;
LAB_0010062d:
          lVar24 = *(long *)(puVar19 + -0x10a0);
          *(undefined8 *)(puVar19 + -0x10a0) = 0;
          if (lVar24 <= *(long *)(puVar19 + -0x1078)) {
            lVar24 = *(long *)(puVar19 + -0x1078);
          }
          bVar15 = 0;
          *(long *)(puVar19 + -0x1078) = lVar24;
          break;
        default:
          uVar18 = 1;
LAB_001005d5:
          *(ulong *)(puVar19 + -0x10a0) =
               *(long *)(puVar19 + -0x10a0) + (ulong)wc_isprint[(uint)wVar20];
          bVar22 = bVar15 | wc_isspace[(uint)wVar20];
          bVar15 = wc_isspace[(uint)wVar20] ^ 1;
          *(ulong *)(puVar19 + -0x1080) = *(long *)(puVar19 + -0x1080) + (ulong)(bVar22 ^ 1);
          break;
        case ' ':
          uVar18 = 1;
LAB_001006a5:
          *(long *)(puVar19 + -0x10a0) = *(long *)(puVar19 + -0x10a0) + 1;
          bVar15 = 0;
        }
LAB_00100608:
        pcVar27 = pcVar27 + uVar18;
        chars = chars + 1;
        bVar22 = bVar29;
LAB_0010060f:
      } while (pcVar27 < pcVar1);
      pcVar26 = *(char **)(puVar19 + -0x1060);
      goto LAB_00100528;
    }
    *(undefined8 *)(puVar19 + -0x1088) = 0;
    uVar23 = 0;
    lVar25 = 0;
    lVar11 = 0;
    __buf = puVar19 + -0x1018;
    lVar24 = 0;
    *(undefined8 *)(puVar19 + -0x10a0) = 0;
    while( true ) {
      *(byte **)(puVar19 + -0x10a8) = __buf;
      *(undefined8 *)(puVar19 + -0x10b0) = 0x100312;
      sVar9 = read(*(int *)(puVar19 + -0x1094),__buf,0x40000);
      __buf = *(byte **)(puVar19 + -0x10a8);
      if (sVar9 == 0) break;
      if (sVar9 < 0) {
        *(long *)(puVar19 + -0x1068) = lVar11;
        lVar21 = *(long *)(puVar19 + -0x10a0);
        *(long *)(puVar19 + -0x1080) = lVar25;
        *(undefined8 *)(puVar19 + -0x10b0) = 0x100cd4;
        piVar12 = __errno_location();
        iVar7 = *piVar12;
        _Var30 = iVar7 == 0;
        goto LAB_00100c7d;
      }
      lVar21 = *(long *)(puVar19 + -0x10a0);
      *(long *)(puVar19 + -0x1088) = *(long *)(puVar19 + -0x1088) + sVar9;
      pbVar16 = __buf;
      do {
        bVar22 = *pbVar16;
        pbVar16 = pbVar16 + 1;
        switch(bVar22) {
        case 9:
          uVar23 = 0;
          lVar24 = lVar24 + (8 - lVar24 % 8);
          break;
        case 10:
          lVar11 = lVar11 + 1;
        case 0xc:
        case 0xd:
          if (lVar21 < lVar24) {
            lVar21 = lVar24;
          }
          lVar24 = 0;
          uVar23 = 0;
          break;
        case 0xb:
          uVar23 = 0;
          break;
        default:
          lVar24 = lVar24 + (ulong)wc_isprint[bVar22];
          uVar28 = uVar23 | wc_isspace[bVar22];
          uVar23 = wc_isspace[bVar22] ^ 1;
          lVar25 = lVar25 + (ulong)(uVar28 ^ 1);
          break;
        case 0x20:
          lVar24 = lVar24 + 1;
          uVar23 = 0;
        }
      } while (pbVar16 != __buf + sVar9);
      *(long *)(puVar19 + -0x10a0) = lVar21;
    }
    *(long *)(puVar19 + -0x1080) = lVar25;
    lVar21 = *(long *)(puVar19 + -0x10a0);
    _Var30 = true;
    *(long *)(puVar19 + -0x1068) = lVar11;
    iVar7 = 0;
LAB_00100c7d:
    if (lVar24 <= lVar21) {
      lVar24 = lVar21;
    }
    chars = 0;
    goto LAB_00100a10;
  }
  if ((bVar22 == 1) && (puVar19[-0x103d] == '\0')) {
    if (print_lines != false) {
      *(undefined8 *)(puVar19 + -0x10b0) = 0x100d13;
      fdadvise(*(undefined4 *)(puVar19 + -0x1094),0,0);
      if (print_lines != false) {
LAB_001006e0:
        if (use_avx2_1 == '\0') {
          if (debug == false) {
            if ((_DAT_001040cc & 0x400) != 0) {
LAB_00100c0c:
              use_avx2_1 = '\x01';
              goto LAB_00100c13;
            }
          }
          else {
            if ((_DAT_001040cc & 0x400) != 0) {
              *(undefined8 *)(puVar19 + -0x10b0) = 0x100bfe;
              uVar14 = dcgettext(0,"using avx2 hardware support",5);
              *(undefined8 *)(puVar19 + -0x10b0) = 0x100c0c;
              error(0,0,uVar14);
              goto LAB_00100c0c;
            }
            *(undefined8 *)(puVar19 + -0x10b0) = 0x100e26;
            uVar14 = dcgettext(0,"avx2 support not detected",5);
            *(undefined8 *)(puVar19 + -0x10b0) = 0x100e34;
            error(0,0,uVar14);
          }
          use_avx2_1 = -1;
LAB_001006f3:
          bVar4 = false;
          lVar24 = 0;
          pcVar26 = puVar19 + -0x1018;
          lVar11 = 0;
          while( true ) {
            *(undefined8 *)(puVar19 + -0x10b0) = 0x100719;
            sVar9 = read(*(int *)(puVar19 + -0x1094),pcVar26,0x40000);
            if (sVar9 < 1) break;
            lVar24 = lVar24 + sVar9;
            pcVar1 = pcVar26 + sVar9;
            if (bVar4) {
              *pcVar1 = '\n';
              lVar25 = 0;
              pcVar27 = pcVar26;
              while( true ) {
                *(undefined8 *)(puVar19 + -0x10b0) = 0x10099a;
                pcVar27 = (char *)rawmemchr(pcVar27,10);
                if (pcVar1 <= pcVar27) break;
                lVar25 = lVar25 + 1;
                pcVar27 = pcVar27 + 1;
              }
              lVar11 = lVar11 + lVar25;
              lVar25 = lVar25 * 0xf;
            }
            else if (pcVar26 < pcVar1) {
              lVar25 = 0;
              pcVar27 = pcVar26;
              do {
                cVar3 = *pcVar27;
                pcVar27 = pcVar27 + 1;
                lVar25 = lVar25 + (ulong)(cVar3 == '\n');
              } while (pcVar1 != pcVar27);
              lVar11 = lVar11 + lVar25;
              lVar25 = lVar25 * 0xf;
            }
            else {
              lVar25 = 0;
            }
            bVar4 = lVar25 <= sVar9;
          }
          *(long *)(puVar19 + -0x1068) = lVar11;
          *(long *)(puVar19 + -0x1088) = lVar24;
          if (sVar9 == 0) {
            _Var30 = true;
            iVar7 = 0;
          }
          else {
            *(undefined8 *)(puVar19 + -0x10b0) = 0x100b85;
            piVar12 = __errno_location();
            iVar7 = *piVar12;
            _Var30 = iVar7 == 0;
          }
        }
        else {
          if (use_avx2_1 < '\x01') goto LAB_001006f3;
LAB_00100c13:
          *(undefined8 *)(puVar19 + -0x10b0) = 0x100c21;
          wc_lines_avx2(puVar19 + -0x1038,*(undefined4 *)(puVar19 + -0x1094));
          iVar7 = *(int *)(puVar19 + -0x1038);
          *(undefined8 *)(puVar19 + -0x1068) = *(undefined8 *)(puVar19 + -0x1030);
          _Var30 = iVar7 == 0;
          *(undefined8 *)(puVar19 + -0x1088) = *(undefined8 *)(puVar19 + -0x1028);
        }
        *(undefined8 *)(puVar19 + -0x1080) = 0;
        chars = 0;
        lVar24 = 0;
        goto LAB_00100a10;
      }
    }
  }
  else {
    *(undefined8 *)(puVar19 + -0x10b0) = 0x1006c4;
    fdadvise(*(undefined4 *)(puVar19 + -0x1094),0,0);
    if ((((puVar19[-0x103d] ^ 1) & bVar22) == 0) || (print_lines != false)) {
      if (puVar19[-0x103d] == '\0') goto LAB_001006e0;
      goto LAB_001002b4;
    }
  }
  wVar20 = fstatus->failed;
  if (L'\0' < wVar20) {
    *(undefined8 *)(puVar19 + -0x10b0) = 0x10042f;
    wVar20 = fstat(*(int *)(puVar19 + -0x1094),(stat *)&fstatus->st);
    fstatus->failed = wVar20;
  }
  iVar5 = page_size;
  if ((wVar20 == L'\0') && (((fstatus->st).st_mode & 0xd000) == 0x8000)) {
    lVar24 = (fstatus->st).st_size;
    *(long *)(puVar19 + -0x1088) = lVar24;
    if (lVar24 < 0) goto LAB_00100784;
    if (current_pos == -1) {
      *(undefined8 *)(puVar19 + -0x10b0) = 0x100d80;
      _Var17 = lseek(*(int *)(puVar19 + -0x1094),0,1);
      if (*(long *)(puVar19 + -0x1088) % iVar5 == 0) {
        bVar22 = (byte)~(byte)((ulong)_Var17 >> 0x38) >> 7;
        goto LAB_00100da0;
      }
      if (_Var17 <= *(long *)(puVar19 + -0x1088)) {
        plVar2 = (long *)(puVar19 + -0x1088);
        *plVar2 = *plVar2 - _Var17;
        if (*plVar2 != 0) goto LAB_00100489;
      }
      goto LAB_00100784;
    }
    bVar22 = 1;
    _Var17 = lVar24 % page_size;
    if (_Var17 != 0) {
LAB_00100489:
      *(undefined8 *)(puVar19 + -0x10b0) = 0x10049c;
      _Var17 = lseek(*(int *)(puVar19 + -0x1094),*(__off_t *)(puVar19 + -0x1088),1);
      if (-1 < _Var17) {
        _Var30 = true;
        chars = 0;
        *(undefined8 *)(puVar19 + -0x1080) = 0;
        *(undefined8 *)(puVar19 + -0x1068) = 0;
        iVar7 = 0;
        lVar24 = 0;
        goto LAB_00100a10;
      }
      goto LAB_00100784;
    }
LAB_00100da0:
    lVar24 = (fstatus->st).st_blksize;
    lVar11 = 0x201;
    if (lVar24 - 1U < 0x2000000000000000) {
      lVar11 = lVar24 + 1;
    }
    lVar24 = *(long *)(puVar19 + -0x1088) - *(long *)(puVar19 + -0x1088) % lVar11;
    if ((lVar24 <= _Var17) || (bVar22 == 0)) goto LAB_00100784;
    *(undefined8 *)(puVar19 + -0x10b0) = 0x100dfd;
    _Var13 = lseek(*(int *)(puVar19 + -0x1094),lVar24,1);
    if (_Var13 < 0) goto LAB_00100784;
    *(long *)(puVar19 + -0x1088) = lVar24 - _Var17;
  }
  else {
LAB_00100784:
    *(undefined8 *)(puVar19 + -0x1088) = 0;
  }
  iVar7 = *(int *)(puVar19 + -0x1094);
  *(undefined8 *)(puVar19 + -0x10b0) = 0x1007a9;
  fdadvise(iVar7,0,0,2);
  lVar24 = *(long *)(puVar19 + -0x1088);
  while( true ) {
    *(undefined8 *)(puVar19 + -0x10b0) = 0x1007c8;
    sVar9 = read(iVar7,puVar19 + -0x1018,0x40000);
    if (sVar9 == 0) break;
    if (sVar9 < 0) {
      *(long *)(puVar19 + -0x1088) = lVar24;
      *(undefined8 *)(puVar19 + -0x10b0) = 0x100d4a;
      piVar12 = __errno_location();
      *(undefined8 *)(puVar19 + -0x1080) = 0;
      *(undefined8 *)(puVar19 + -0x1068) = 0;
      iVar7 = *piVar12;
      _Var30 = iVar7 == 0;
      chars = 0;
      lVar24 = 0;
      goto LAB_00100a10;
    }
    lVar24 = lVar24 + sVar9;
  }
  *(long *)(puVar19 + -0x1088) = lVar24;
  _Var30 = true;
  *(undefined8 *)(puVar19 + -0x1080) = 0;
  iVar7 = 0;
  *(undefined8 *)(puVar19 + -0x1068) = 0;
  chars = 0;
  lVar24 = 0;
LAB_00100a10:
  if ((byte)puVar19[-0x103d] < print_chars) {
    chars = *(uintmax_t *)(puVar19 + -0x1088);
  }
  if (total_mode != total_only) {
    *(undefined8 *)(puVar19 + -0x10b0) = 0x100a4a;
    write_counts(*(uintmax_t *)(puVar19 + -0x1068),*(uintmax_t *)(puVar19 + -0x1080),chars,
                 *(uintmax_t *)(puVar19 + -0x1088),lVar24,*(char **)(puVar19 + -0x1050));
  }
  lVar11 = total_lines + 0x8000000000000000;
  total_lines = lVar11 + *(long *)(puVar19 + -0x1068) + 0x8000000000000000;
  total_lines_overflow =
       (_Bool)(total_lines_overflow | SCARRY8(lVar11,*(long *)(puVar19 + -0x1068)));
  lVar11 = total_words + 0x8000000000000000;
  total_words = lVar11 + *(long *)(puVar19 + -0x1080) + 0x8000000000000000;
  total_words_overflow =
       (_Bool)(total_words_overflow | SCARRY8(lVar11,*(long *)(puVar19 + -0x1080)));
  lVar11 = total_chars + 0x8000000000000000;
  total_chars = chars + lVar11 + 0x8000000000000000;
  total_chars_overflow = (_Bool)(total_chars_overflow | SCARRY8(chars,lVar11));
  lVar11 = total_bytes + 0x8000000000000000;
  total_bytes = lVar11 + *(long *)(puVar19 + -0x1088) + 0x8000000000000000;
  total_bytes_overflow =
       (_Bool)(total_bytes_overflow | SCARRY8(lVar11,*(long *)(puVar19 + -0x1088)));
  if (max_line_length < lVar24) {
    max_line_length = lVar24;
  }
  if (iVar7 != 0) {
    *(undefined8 *)(puVar19 + -0x10b0) = 0x100e4a;
    uVar14 = quotearg_n_style_colon(0,3,*(undefined8 *)(puVar19 + -0x1048));
    *(undefined8 *)(puVar19 + -0x10b0) = 0x100e60;
    error(0,iVar7,&_LC4,uVar14);
  }
  if (*(long *)(puVar19 + 0x3eff0) != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(puVar19 + -0x10b0) = 0x100e18;
    __stack_chk_fail();
  }
  return _Var30;
LAB_00100cf4:
  _Var30 = true;
  iVar7 = 0;
LAB_001009f5:
  lVar24 = *(long *)(puVar19 + -0x10a0);
  if (*(long *)(puVar19 + -0x10a0) <= *(long *)(puVar19 + -0x1078)) {
    lVar24 = *(long *)(puVar19 + -0x1078);
  }
  goto LAB_00100a10;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void usage(wchar_t status)

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
  if (status != L'\0') {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(_stderr,2,uVar3,uVar5);
    goto LAB_00100ec9;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... [FILE]...\n  or:  %s [OPTION]... --files0-from=F\n",5);
  __printf_chk(2,uVar3,uVar5,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "Print newline, word, and byte counts for each FILE, and a total line if\nmore than one FILE is specified.  A word is a nonempty sequence of non white\nspace delimited by white space characters or by start or end of input.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"\nWith no FILE, or when FILE is -, read standard input.\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nThe options below may be used to select which counts are printed, always in\nthe following order: newline, word, character, byte, maximum line length.\n  -c, --bytes            print the byte counts\n  -m, --chars            print the character counts\n  -l, --lines            print the newline counts\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --files0-from=F    read input from the files specified by\n                           NUL-terminated names in file F;\n                           If F is - then read names from standard input\n  -L, --max-line-length  print the maximum display width\n  -w, --words            print the word counts\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --total=WHEN       when to print a line with total counts;\n                           WHEN can be: auto, always, only, never\n"
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
    if (((*pcVar4 == 'w') && (pcVar4[1] == 'c')) && (pcVar4[2] == '\0')) break;
    pcVar4 = *(char **)((long)piVar6 + 0x10);
    piVar6 = (infomap *)((long)piVar6 + 0x10);
  } while (pcVar4 != (char *)0x0);
  puVar7 = *(undefined1 **)((long)piVar6 + 8);
  if (puVar7 == (undefined1 *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    puVar7 = &_LC6;
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) goto LAB_0010112c;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC6);
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
LAB_0010112c:
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
LAB_00100ec9:
                    /* WARNING: Subroutine does not return */
  exit(status);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

wchar_t main(wchar_t argc,char **argv)

{
  __off_t *p_Var1;
  ushort *puVar2;
  ushort *puVar3;
  long lVar4;
  ushort *puVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  ushort uVar15;
  ushort uVar16;
  ushort uVar17;
  ushort uVar18;
  ushort uVar19;
  ushort uVar20;
  ushort uVar21;
  ushort uVar22;
  ushort uVar23;
  ushort uVar24;
  ushort uVar25;
  ushort uVar26;
  ushort uVar27;
  ushort uVar28;
  ushort uVar29;
  _Bool _Var30;
  char cVar31;
  int iVar32;
  wchar_t wVar33;
  char *pcVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  ushort **ppuVar37;
  long lVar38;
  FILE *pFVar39;
  undefined8 uVar40;
  ulong uVar41;
  FILE *__stream;
  int *piVar42;
  _Bool _Var43;
  fstatus *pfVar44;
  uint uVar45;
  stat *__buf;
  wchar_t minimum_width;
  char *pcVar46;
  char **ppcVar47;
  uint *puVar48;
  uint *puVar49;
  long in_FS_OFFSET;
  bool bVar50;
  ushort uVar51;
  ushort uVar54;
  ushort uVar55;
  ushort uVar56;
  double dVar52;
  double dVar53;
  ushort uVar57;
  ushort uVar58;
  ushort uVar59;
  ushort uVar60;
  ushort uVar61;
  ushort uVar62;
  ushort uVar63;
  ushort uVar64;
  ushort uVar65;
  ushort uVar66;
  ushort uVar67;
  ushort uVar68;
  double dVar69;
  fstatus *local_220;
  fstatus *local_218;
  _Bool local_20a;
  char local_209;
  argv_iter_err ai_err;
  Tokens tok;
  stat st;
  
  puVar49 = &switchD_00102103::switchdataD_00101880;
  pcVar46 = "clLmw";
  __stream = (FILE *)(ulong)(uint)argc;
  lVar4 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  iVar32 = getpagesize();
  page_size = (idx_t)iVar32;
  setvbuf(_stdout,(char *)0x0,1,0);
  pcVar34 = getenv("POSIXLY_CORRECT");
  print_bytes = false;
  print_chars = false;
  posixly_correct = pcVar34 != (char *)0x0;
  print_words = false;
  print_lines = false;
  print_linelength = false;
  max_line_length = 0;
  total_bytes = 0;
  total_chars = 0;
  total_words = 0;
  total_lines = 0;
  pcVar34 = (char *)0x0;
  do {
    iVar32 = getopt_long(__stream,argv,"clLmw",longopts,0);
    if (iVar32 == -1) {
      if (print_lines == false) {
        ppcVar47 = (char **)pcVar46;
        cVar31 = print_linelength;
        if (print_words != false) goto LAB_0010291e;
        if ((print_chars == false) && (print_bytes == false)) {
          if (print_linelength == false) {
            print_bytes = true;
            print_words = true;
            print_lines = true;
            goto LAB_0010250e;
          }
        }
        else if (print_linelength == false) goto LAB_001022cc;
      }
      else if (print_linelength == false) goto LAB_001022bf;
LAB_00102251:
      ppuVar37 = __ctype_b_loc();
      uVar29 = _UNK_00102e9e;
      uVar28 = _UNK_00102e9c;
      uVar27 = _UNK_00102e9a;
      uVar26 = _UNK_00102e98;
      uVar25 = _UNK_00102e96;
      uVar24 = _UNK_00102e94;
      uVar23 = _UNK_00102e92;
      uVar22 = __LC42;
      uVar21 = _UNK_00102e8e;
      uVar20 = _UNK_00102e8c;
      uVar19 = _UNK_00102e8a;
      uVar18 = _UNK_00102e88;
      uVar17 = _UNK_00102e86;
      uVar16 = _UNK_00102e84;
      uVar15 = _UNK_00102e82;
      uVar14 = __LC41;
      uVar13 = _UNK_00102e7e;
      uVar12 = _UNK_00102e7c;
      uVar11 = _UNK_00102e7a;
      uVar10 = _UNK_00102e78;
      uVar9 = _UNK_00102e76;
      uVar8 = _UNK_00102e74;
      uVar7 = _UNK_00102e72;
      uVar6 = __LC40;
      puVar5 = *ppuVar37;
      lVar38 = 0;
      do {
        puVar3 = puVar5 + lVar38 + 8;
        puVar2 = puVar5 + lVar38;
        uVar51 = ~-(ushort)((*puVar2 & uVar6) == 0) & uVar14 & uVar22;
        uVar54 = ~-(ushort)((puVar2[1] & uVar7) == 0) & uVar15 & uVar23;
        uVar55 = ~-(ushort)((puVar2[2] & uVar8) == 0) & uVar16 & uVar24;
        uVar56 = ~-(ushort)((puVar2[3] & uVar9) == 0) & uVar17 & uVar25;
        uVar57 = ~-(ushort)((puVar2[4] & uVar10) == 0) & uVar18 & uVar26;
        uVar58 = ~-(ushort)((puVar2[5] & uVar11) == 0) & uVar19 & uVar27;
        uVar59 = ~-(ushort)((puVar2[6] & uVar12) == 0) & uVar20 & uVar28;
        uVar60 = ~-(ushort)((puVar2[7] & uVar13) == 0) & uVar21 & uVar29;
        uVar61 = ~-(ushort)((*puVar3 & uVar6) == 0) & uVar14 & uVar22;
        uVar62 = ~-(ushort)((puVar3[1] & uVar7) == 0) & uVar15 & uVar23;
        uVar63 = ~-(ushort)((puVar3[2] & uVar8) == 0) & uVar16 & uVar24;
        uVar64 = ~-(ushort)((puVar3[3] & uVar9) == 0) & uVar17 & uVar25;
        uVar65 = ~-(ushort)((puVar3[4] & uVar10) == 0) & uVar18 & uVar26;
        uVar66 = ~-(ushort)((puVar3[5] & uVar11) == 0) & uVar19 & uVar27;
        uVar67 = ~-(ushort)((puVar3[6] & uVar12) == 0) & uVar20 & uVar28;
        uVar68 = ~-(ushort)((puVar3[7] & uVar13) == 0) & uVar21 & uVar29;
        wc_isprint[lVar38] =
             (_Bool)((0 < (short)uVar51) * ((short)uVar51 < 0x100) * (char)uVar51 -
                    (0xff < (short)uVar51));
        wc_isprint[lVar38 + 1] =
             (_Bool)((0 < (short)uVar54) * ((short)uVar54 < 0x100) * (char)uVar54 -
                    (0xff < (short)uVar54));
        wc_isprint[lVar38 + 2] =
             (_Bool)((0 < (short)uVar55) * ((short)uVar55 < 0x100) * (char)uVar55 -
                    (0xff < (short)uVar55));
        wc_isprint[lVar38 + 3] =
             (_Bool)((0 < (short)uVar56) * ((short)uVar56 < 0x100) * (char)uVar56 -
                    (0xff < (short)uVar56));
        wc_isprint[lVar38 + 4] =
             (_Bool)((0 < (short)uVar57) * ((short)uVar57 < 0x100) * (char)uVar57 -
                    (0xff < (short)uVar57));
        wc_isprint[lVar38 + 5] =
             (_Bool)((0 < (short)uVar58) * ((short)uVar58 < 0x100) * (char)uVar58 -
                    (0xff < (short)uVar58));
        wc_isprint[lVar38 + 6] =
             (_Bool)((0 < (short)uVar59) * ((short)uVar59 < 0x100) * (char)uVar59 -
                    (0xff < (short)uVar59));
        wc_isprint[lVar38 + 7] =
             (_Bool)((0 < (short)uVar60) * ((short)uVar60 < 0x100) * (char)uVar60 -
                    (0xff < (short)uVar60));
        wc_isprint[lVar38 + 8] =
             (_Bool)((0 < (short)uVar61) * ((short)uVar61 < 0x100) * (char)uVar61 -
                    (0xff < (short)uVar61));
        wc_isprint[lVar38 + 9] =
             (_Bool)((0 < (short)uVar62) * ((short)uVar62 < 0x100) * (char)uVar62 -
                    (0xff < (short)uVar62));
        wc_isprint[lVar38 + 10] =
             (_Bool)((0 < (short)uVar63) * ((short)uVar63 < 0x100) * (char)uVar63 -
                    (0xff < (short)uVar63));
        wc_isprint[lVar38 + 0xb] =
             (_Bool)((0 < (short)uVar64) * ((short)uVar64 < 0x100) * (char)uVar64 -
                    (0xff < (short)uVar64));
        wc_isprint[lVar38 + 0xc] =
             (_Bool)((0 < (short)uVar65) * ((short)uVar65 < 0x100) * (char)uVar65 -
                    (0xff < (short)uVar65));
        wc_isprint[lVar38 + 0xd] =
             (_Bool)((0 < (short)uVar66) * ((short)uVar66 < 0x100) * (char)uVar66 -
                    (0xff < (short)uVar66));
        wc_isprint[lVar38 + 0xe] =
             (_Bool)((0 < (short)uVar67) * ((short)uVar67 < 0x100) * (char)uVar67 -
                    (0xff < (short)uVar67));
        wc_isprint[lVar38 + 0xf] =
             (_Bool)((0 < (short)uVar68) * ((short)uVar68 < 0x100) * (char)uVar68 -
                    (0xff < (short)uVar68));
        lVar38 = lVar38 + 0x10;
      } while (lVar38 != 0x100);
LAB_001022bf:
      if (print_words != false) goto LAB_0010250e;
LAB_001022cc:
      do {
        iVar32 = _optind;
        if (pcVar34 == (char *)0x0) goto LAB_001028eb;
        if (_optind < (int)__stream) {
          uVar35 = quotearg_style(4,argv[_optind]);
          uVar36 = dcgettext(0,"extra operand %s",5);
          error(0,0,uVar36,uVar35);
          uVar35 = dcgettext(0,"file operands cannot be combined with --files0-from",5);
          __fprintf_chk(_stderr,2,&_LC45,uVar35);
          goto switchD_00102103_caseD_4d;
        }
        iVar32 = strcmp(pcVar34,"-");
        __stream = _stdin;
        if ((iVar32 != 0) && (__stream = (FILE *)rpl_fopen(pcVar34,&_LC47), __stream == (FILE *)0x0)
           ) {
          quotearg_style(4,pcVar34);
          pcVar34 = (char *)dcgettext(0,"cannot open %s for reading",5);
          piVar42 = __errno_location();
          error(1,*piVar42,pcVar34);
          ppcVar47 = (char **)pcVar46;
          goto LAB_00102a12;
        }
        iVar32 = fileno(__stream);
        iVar32 = fstat(iVar32,(stat *)&st);
        if ((iVar32 == 0) && ((st.st_mode & 0xf000) == 0x8000)) {
          dVar69 = (double)st.st_size;
          dVar52 = (double)physmem_available();
          dVar53 = _LC33;
          if (dVar52 * _LC49 <= _LC33) {
            dVar53 = (double)physmem_available();
            dVar53 = _LC49 * dVar53;
          }
          if (dVar53 < dVar69) goto LAB_00102334;
          readtokens0_init(&tok);
          local_209 = readtokens0(__stream,&tok);
          if ((local_209 == '\0') ||
             (iVar32 = rpl_fclose(__stream), ppcVar47 = tok.tok, puVar49 = (uint *)tok.n_tok,
             iVar32 != 0)) {
            uVar35 = quotearg_style(4,pcVar34);
            uVar36 = dcgettext(0,"cannot read file names from %s",5);
            error(1,0,uVar36,uVar35);
LAB_00102c0e:
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          argv = (char **)argv_iter_init_argv(tok.tok);
        }
        else {
LAB_00102334:
          ppcVar47 = (char **)0x0;
          puVar49 = (uint *)0x0;
          argv = (char **)argv_iter_init_stream(__stream);
          local_209 = '\0';
        }
        if (argv != (char **)0x0) {
          if (puVar49 != (uint *)0x0) goto LAB_00102831;
          local_220 = (fstatus *)xnmalloc(1);
LAB_00102370:
          bVar50 = total_mode != total_only;
          local_220->failed = L'\x01';
          if ((bVar50) && (puVar49 == (uint *)0x1)) goto LAB_001025a3;
LAB_0010238e:
          number_width = L'\x01';
LAB_00102393:
          __stream = (FILE *)0x0;
          local_20a = true;
          while (pcVar46 = (char *)argv_iter(argv), pcVar46 != (char *)0x0) {
            if (pcVar34 == (char *)0x0) {
              if (*pcVar46 == '\0') {
                dcgettext(0,"invalid zero-length file name",5);
                error(0,0,&_LC4);
                goto LAB_001026b8;
              }
LAB_0010247d:
              pFVar39 = (FILE *)0x0;
              if (puVar49 != (uint *)0x0) {
                pFVar39 = __stream;
              }
LAB_0010248d:
              local_218 = (fstatus *)
                          ((long)(local_220->st).__glibc_reserved +
                          (long)(pFVar39[-1]._unused2 + -0x6c));
              iVar32 = strcmp(pcVar46,"-");
              if (iVar32 == 0) {
                have_read_stdin = true;
                _Var30 = wc(L'\0',pcVar46,local_218,-1);
              }
              else {
LAB_001023ef:
                wVar33 = open(pcVar46,0);
                if (wVar33 != L'\xffffffff') {
                  _Var30 = wc(wVar33,pcVar46,local_218,0);
                  iVar32 = close(wVar33);
                  if (iVar32 == 0) goto LAB_0010242d;
                }
                quotearg_n_style_colon(0,3,pcVar46);
                piVar42 = __errno_location();
                _Var30 = false;
                error(0,*piVar42,&_LC4);
              }
LAB_0010242d:
              local_20a = (_Bool)(local_20a & _Var30);
            }
            else {
              if ((*pcVar34 == '-') && (pcVar34[1] == '\0')) {
                iVar32 = strcmp(pcVar46,"-");
                if (iVar32 == 0) {
                  quotearg_style(4,pcVar46);
                  uVar35 = dcgettext(0,
                                     "when reading file names from stdin, no file name of %s allowed"
                                     ,5);
                  error(0,0,uVar35);
                  if (*pcVar46 != '\0') goto LAB_001026b8;
                }
                else if (*pcVar46 != '\0') {
                  pFVar39 = __stream;
                  if (puVar49 != (uint *)0x0) goto LAB_0010248d;
                  local_218 = local_220;
                  goto LAB_001023ef;
                }
              }
              else if (*pcVar46 != '\0') goto LAB_0010247d;
              uVar35 = dcgettext(0,"invalid zero-length file name",5);
              uVar36 = argv_iter_n_args(argv);
              uVar40 = quotearg_n_style_colon(0,3,pcVar34);
              error(0,0,"%s:%zu: %s",uVar40,uVar36,uVar35);
LAB_001026b8:
              local_20a = false;
            }
            if (puVar49 == (uint *)0x0) {
              local_220->failed = L'\x01';
            }
            __stream = (FILE *)&__stream->__pad1;
          }
          if (ai_err == AI_ERR_EOF) {
            _Var30 = (_Bool)(pcVar34 == (char *)0x0 & local_20a);
            pcVar34 = (char *)(ulong)_Var30;
            if ((_Var30 != false) && (lVar38 = argv_iter_n_args(), local_20a = _Var30, lVar38 == 0))
            {
              have_read_stdin = true;
              local_20a = wc(L'\0',(char *)0x0,local_220,-1);
            }
          }
          else {
            ppcVar47 = (char **)0x0;
            if (ai_err == AI_ERR_MEM) goto LAB_00102919;
            __stream = (FILE *)quotearg_n_style_colon(0,3,pcVar34);
            pcVar34 = (char *)dcgettext(0,"%s: read error",5);
            piVar42 = __errno_location();
            error(0,*piVar42,pcVar34);
            local_20a = false;
          }
          if (local_209 != '\0') {
            readtokens0_free(&tok);
          }
          if ((total_mode != total_never) &&
             ((total_mode != total_auto || (uVar41 = argv_iter_n_args(argv), 1 < uVar41)))) {
            if (total_lines_overflow != false) {
              total_lines = 0xffffffffffffffff;
              uVar35 = dcgettext(0,"total lines",5);
              error(0,0x4b,uVar35);
              local_20a = false;
            }
            if (total_words_overflow != false) {
              total_words = 0xffffffffffffffff;
              uVar35 = dcgettext(0,"total words",5);
              error(0,0x4b,uVar35);
              local_20a = false;
            }
            if (total_chars_overflow != false) {
              total_chars = 0xffffffffffffffff;
              uVar35 = dcgettext(0,"total characters",5);
              error(0,0x4b,uVar35);
              local_20a = false;
            }
            if (total_bytes_overflow != false) {
              total_bytes = 0xffffffffffffffff;
              uVar35 = dcgettext(0,"total bytes",5);
              error(0,0x4b,uVar35);
              local_20a = false;
            }
            pcVar46 = (char *)0x0;
            if (total_mode != total_only) {
              pcVar46 = (char *)dcgettext(0,"total",5);
            }
            write_counts(total_lines,total_words,total_chars,total_bytes,max_line_length,pcVar46);
          }
          argv_iter_free(argv);
          free(local_220);
          if ((have_read_stdin == false) || (iVar32 = close(0), iVar32 == 0)) {
            if (lVar4 == *(long *)(in_FS_OFFSET + 0x28)) {
              return (wchar_t)(local_20a ^ 1);
            }
            goto LAB_00102c0e;
          }
          piVar42 = __errno_location();
          iVar32 = error(1,*piVar42,&_LC46);
LAB_001028eb:
          if (iVar32 < (int)__stream) {
            uVar45 = (int)__stream - iVar32;
            __stream = (FILE *)(ulong)uVar45;
            ppcVar47 = argv + iVar32;
            puVar49 = (uint *)(long)(int)uVar45;
          }
          else {
            ppcVar47 = main::lexical_block_16::stdin_only;
            puVar49 = (uint *)0x1;
          }
          argv = (char **)argv_iter_init_argv(ppcVar47);
          local_209 = '\0';
          if (argv == (char **)0x0) goto LAB_00102919;
LAB_00102831:
          local_220 = (fstatus *)xnmalloc();
          if (puVar49 == (uint *)0x1) {
LAB_00102a12:
            if ((uint)print_lines + (uint)print_words + (uint)print_chars + (uint)print_bytes +
                (uint)print_linelength == 1) goto LAB_00102370;
          }
          else if ((long)puVar49 < 1) goto LAB_0010238e;
          puVar48 = (uint *)0x0;
          pfVar44 = local_220;
          do {
            __buf = &pfVar44->st;
            pcVar46 = ppcVar47[(long)puVar48];
            if ((pcVar46 == (char *)0x0) || (iVar32 = strcmp(pcVar46,"-"), iVar32 == 0)) {
              iVar32 = fstat(0,(stat *)__buf);
            }
            else {
              iVar32 = stat(pcVar46,(stat *)__buf);
            }
            puVar48 = (uint *)((long)puVar48 + 1);
            *(int *)((long)(__buf + -1) + 0x88) = iVar32;
            pfVar44 = (fstatus *)(__buf + 1);
          } while (puVar49 != puVar48);
          if (total_mode == total_only) goto LAB_0010238e;
LAB_001025a3:
          if (L'\0' < local_220->failed) goto LAB_0010238e;
          wVar33 = L'\x01';
          uVar41 = 0;
          puVar48 = (uint *)0x0;
          pfVar44 = local_220;
          do {
            if (pfVar44->failed == L'\0') {
              if (((pfVar44->st).st_mode & 0xf000) == 0x8000) {
                lVar38 = uVar41 + 0x8000000000000000;
                p_Var1 = &(pfVar44->st).st_size;
                uVar41 = lVar38 + *p_Var1 + 0x8000000000000000;
                if (SCARRY8(lVar38,*p_Var1)) {
                  uVar41 = 0xffffffffffffffff;
                  break;
                }
              }
              else {
                wVar33 = L'\a';
              }
            }
            puVar48 = (uint *)((long)puVar48 + 1);
            pfVar44 = pfVar44 + 1;
          } while (puVar49 != puVar48);
          number_width = L'\x01';
          for (; 9 < uVar41; uVar41 = uVar41 / 10) {
            number_width = number_width + L'\x01';
          }
          if (number_width <= wVar33) {
            number_width = wVar33;
          }
          goto LAB_00102393;
        }
LAB_00102919:
        cVar31 = xalloc_die();
LAB_0010291e:
        pcVar46 = (char *)ppcVar47;
        if (cVar31 != '\0') goto LAB_00102251;
LAB_0010250e:
        ppuVar37 = __ctype_b_loc();
        _Var30 = posixly_correct;
        uVar41 = 0;
        puVar49 = (uint *)*ppuVar37;
        do {
          _Var43 = true;
          if (((*(byte *)((long)puVar49 + uVar41 * 2 + 1) & 0x20) == 0) &&
             (_Var43 = false, _Var30 == false)) {
            iVar32 = rpl_btowc(uVar41 & 0xffffffff);
            _Var43 = iVar32 == 0xa0 || iVar32 == 0x2007;
            if (iVar32 != 0xa0 && iVar32 != 0x2007) {
              _Var43 = iVar32 == 0x202f || iVar32 == 0x2060;
            }
          }
          wc_isspace[uVar41] = _Var43;
          uVar41 = uVar41 + 1;
        } while (uVar41 != 0x100);
        pcVar46 = (char *)0x100;
      } while( true );
    }
    if (0x82 < iVar32) goto switchD_00102103_caseD_4d;
    if (iVar32 < 0x4c) {
      if (iVar32 == -0x83) {
        uVar35 = proper_name_lite("David MacKenzie","David MacKenzie");
        uVar36 = proper_name_lite("Paul Rubin","Paul Rubin");
        version_etc(_stdout,&_LC6,"GNU coreutils",_Version,uVar36,uVar35,0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar32 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(L'\0');
      }
switchD_00102103_caseD_4d:
                    /* WARNING: Subroutine does not return */
      usage(L'\x01');
    }
    switch(iVar32) {
    case 0x4c:
      print_linelength = true;
      break;
    default:
      goto switchD_00102103_caseD_4d;
    case 99:
      print_bytes = true;
      break;
    case 0x6c:
      print_lines = true;
      break;
    case 0x6d:
      print_chars = true;
      break;
    case 0x77:
      print_words = true;
      break;
    case 0x80:
      debug = true;
      break;
    case 0x81:
      pcVar34 = _optarg;
      break;
    case 0x82:
      lVar38 = __xargmatch_internal("--total",_optarg,total_args,total_types,4,_argmatch_die,1);
      total_mode = total_types[lVar38];
    }
  } while( true );
}


