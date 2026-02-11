
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_counts(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,char *param_6)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined5 *puVar3;
  undefined5 *puVar4;
  long in_FS_OFFSET;
  undefined1 auStack_58 [24];
  long local_40;
  
  puVar3 = (undefined5 *)0x10195d;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (print_lines != '\0') {
    uVar2 = umaxtostr(param_1,auStack_58);
    puVar3 = &format_sp_int_0;
    __printf_chk(2,0x10195d,number_width,uVar2);
  }
  puVar4 = puVar3;
  if (print_words != '\0') {
    uVar2 = umaxtostr(param_2,auStack_58);
    puVar4 = &format_sp_int_0;
    __printf_chk(2,puVar3,number_width,uVar2);
  }
  puVar3 = puVar4;
  if (print_chars != '\0') {
    uVar2 = umaxtostr(param_3,auStack_58);
    puVar3 = &format_sp_int_0;
    __printf_chk(2,puVar4,number_width,uVar2);
  }
  puVar4 = puVar3;
  if (print_bytes != '\0') {
    uVar2 = umaxtostr(param_4,auStack_58);
    puVar4 = &format_sp_int_0;
    __printf_chk(2,puVar3,number_width,uVar2);
  }
  if (print_linelength != '\0') {
    uVar2 = imaxtostr(param_5,auStack_58);
    __printf_chk(2,puVar4,number_width,uVar2);
  }
  if (param_6 != (char *)0x0) {
    pcVar1 = strchr(param_6,10);
    if (pcVar1 != (char *)0x0) {
      param_6 = (char *)quotearg_n_style_colon(0,3,param_6);
    }
    __printf_chk(2,&_LC0,param_6);
  }
  pcVar1 = _stdout->_IO_write_ptr;
  if (pcVar1 < _stdout->_IO_write_end) {
    _stdout->_IO_write_ptr = pcVar1 + 1;
    *pcVar1 = '\n';
  }
  else {
    __overflow(_stdout,10);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong wc(undefined4 param_1,long param_2,int *param_3,long param_4)

{
  char *pcVar1;
  long *plVar2;
  char cVar3;
  int __fd;
  bool bVar4;
  undefined1 *puVar5;
  int iVar6;
  size_t sVar7;
  ssize_t sVar8;
  long lVar9;
  int *piVar10;
  __off_t _Var11;
  undefined8 uVar12;
  byte *pbVar13;
  __off_t _Var14;
  ulong uVar15;
  undefined1 *puVar16;
  ulong uVar17;
  ulong uVar18;
  byte *__buf;
  char *pcVar19;
  wchar_t __c;
  long lVar20;
  byte bVar21;
  uint uVar22;
  long lVar23;
  long lVar24;
  char *pcVar25;
  uint uVar26;
  long in_FS_OFFSET;
  byte bVar27;
  undefined1 auStack_40030 [262144];
  
  puVar5 = &stack0xffffffffffffffd0;
  do {
    puVar16 = puVar5;
    *(undefined8 *)(puVar16 + -0x1000) = *(undefined8 *)(puVar16 + -0x1000);
    puVar5 = puVar16 + -0x1000;
  } while (puVar16 + -0x1000 != auStack_40030);
  *(undefined4 *)(puVar16 + -0x1094) = param_1;
  *(long *)(puVar16 + -0x1050) = param_2;
  *(undefined8 *)(puVar16 + 0x3eff0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  *(long *)(puVar16 + -0x1048) = param_2;
  if (param_2 == 0) {
    *(undefined8 *)(puVar16 + -0x10b0) = 0x100c5c;
    uVar12 = dcgettext(0,"standard input",5);
    *(undefined8 *)(puVar16 + -0x1048) = uVar12;
  }
  *(undefined8 *)(puVar16 + -0x10b0) = 0x10026f;
  sVar7 = __ctype_get_mb_cur_max();
  bVar21 = print_bytes;
  if (sVar7 < 2) {
    puVar16[-0x103d] = 0;
    if (print_bytes == 0) {
      bVar21 = print_chars;
    }
  }
  else {
    puVar16[-0x103d] = print_chars;
  }
  if ((print_words != '\0') || (print_linelength != '\0')) {
    *(undefined8 *)(puVar16 + -0x10b0) = 0x1002b4;
    fdadvise(*(undefined4 *)(puVar16 + -0x1094),0,0,2);
LAB_001002b4:
    *(undefined8 *)(puVar16 + -0x10b0) = 0x1002b9;
    sVar7 = __ctype_get_mb_cur_max();
    if (1 < sVar7) {
      *(undefined8 *)(puVar16 + -0x10a0) = 0;
      uVar18 = 0;
      bVar21 = 0;
      uVar17 = 0;
      *(undefined8 *)(puVar16 + -0x1020) = 0;
      lVar9 = 0;
      pcVar19 = puVar16 + -0x1018;
      *(undefined8 *)(puVar16 + -0x1078) = 0;
      *(undefined8 *)(puVar16 + -0x1088) = 0;
      *(undefined8 *)(puVar16 + -0x1080) = 0;
      *(undefined8 *)(puVar16 + -0x1068) = 0;
LAB_00100528:
      *(ulong *)(puVar16 + -0x10a8) = uVar18;
      uVar15 = 0x40001;
      if (0x40000 < uVar18) {
        uVar15 = uVar18;
      }
      *(undefined8 *)(puVar16 + -0x10b0) = 0x100550;
      lVar23 = __read_chk(*(undefined4 *)(puVar16 + -0x1094),pcVar19 + uVar18,0x40000 - uVar18,
                          uVar15 - uVar18);
      uVar18 = *(ulong *)(puVar16 + -0x10a8);
      if (lVar23 == 0) {
        if (uVar18 == 0) goto LAB_00100cf4;
      }
      else if (lVar23 < 0) {
        *(undefined8 *)(puVar16 + -0x10b0) = 0x1009eb;
        piVar10 = __errno_location();
        iVar6 = *piVar10;
        uVar18 = CONCAT71((int7)(uVar17 >> 8),iVar6 == 0);
        goto LAB_001009f5;
      }
      *(long *)(puVar16 + -0x1088) = *(long *)(puVar16 + -0x1088) + lVar23;
      *(undefined1 **)(puVar16 + -0x10a8) = puVar16 + -0x1020;
      pcVar1 = pcVar19 + lVar23 + uVar18;
      *(long *)(puVar16 + -0x1070) = lVar23;
      *(char **)(puVar16 + -0x1060) = pcVar19;
      pcVar25 = pcVar19;
      do {
        uVar22 = (uint)uVar17;
        if ((bVar21 != 0) || (cVar3 = *pcVar25, cVar3 < '\0')) {
          pcVar19 = pcVar25 + uVar18;
          uVar15 = (long)pcVar1 - (long)pcVar19;
          *(undefined8 *)(puVar16 + -0x10b0) = 0x10081b;
          uVar18 = rpl_mbrtoc32(puVar16 + -0x1038,pcVar19,uVar15,*(undefined8 *)(puVar16 + -0x10a8))
          ;
          if (uVar18 <= uVar15) {
            *(ulong *)(puVar16 + -0x1090) = uVar18 + (uVar18 == 0);
            *(undefined8 *)(puVar16 + -0x10b0) = 0x100896;
            iVar6 = mbsinit(*(mbstate_t **)(puVar16 + -0x10a8));
            __c = *(wchar_t *)(puVar16 + -0x1038);
            uVar15 = *(ulong *)(puVar16 + -0x1090);
            bVar27 = iVar6 == 0;
            switch(__c) {
            case L'\t':
              uVar18 = 0;
              goto LAB_00100675;
            case L'\n':
              uVar18 = 0;
              goto LAB_00100665;
            case L'\v':
              uVar18 = 0;
              uVar17 = 0;
              goto LAB_00100608;
            case L'\f':
            case L'\r':
              uVar18 = 0;
              goto LAB_0010062d;
            case L' ':
              uVar18 = 0;
              goto LAB_001006a5;
            }
            if ((bVar21 ^ 1) == uVar15) {
              uVar18 = 0;
              goto LAB_001005d5;
            }
            if (print_linelength != '\0') {
              *(ulong *)(puVar16 + -0x1058) = uVar15;
              puVar16[-0x1090] = bVar27;
              *(undefined8 *)(puVar16 + -0x10b0) = 0x100b4e;
              iVar6 = wcwidth(__c);
              bVar27 = puVar16[-0x1090];
              uVar15 = *(ulong *)(puVar16 + -0x1058);
              if (0 < iVar6) {
                *(long *)(puVar16 + -0x10a0) = *(long *)(puVar16 + -0x10a0) + (long)iVar6;
              }
              __c = *(wchar_t *)(puVar16 + -0x1038);
            }
            *(ulong *)(puVar16 + -0x1058) = uVar15;
            puVar16[-0x1090] = bVar27;
            *(wchar_t *)(puVar16 + -0x103c) = __c;
            *(undefined8 *)(puVar16 + -0x10b0) = 0x1008f3;
            iVar6 = iswspace(__c);
            uVar15 = *(ulong *)(puVar16 + -0x1058);
            if (iVar6 == 0) {
              iVar6 = *(int *)(puVar16 + -0x103c);
              if (posixly_correct == 0) {
                if ((iVar6 == 0xa0) || (iVar6 == 0x2007)) goto LAB_00100b30;
                uVar26 = (uint)CONCAT71((int7)((ulong)pcVar19 >> 8),iVar6 == 0x202f) |
                         (uint)(iVar6 == 0x2060);
                uVar17 = (ulong)(uVar26 ^ 1);
                *(ulong *)(puVar16 + -0x1080) =
                     *(long *)(puVar16 + -0x1080) + (ulong)(((uVar22 | uVar26) ^ 1) & 0xff);
              }
              else {
                *(ulong *)(puVar16 + -0x1080) =
                     *(long *)(puVar16 + -0x1080) + (ulong)((uVar22 ^ 1) & 0xff);
                uVar17 = (ulong)posixly_correct;
              }
            }
            else {
LAB_00100b30:
              uVar17 = 0;
            }
            uVar18 = 0;
            bVar27 = puVar16[-0x1090];
            goto LAB_00100608;
          }
          if (uVar18 == 0xfffffffffffffffe) {
            lVar23 = (long)pcVar1 - (long)pcVar25;
            bVar21 = lVar23 < 0x40000 && *(long *)(puVar16 + -0x1070) != 0;
            if ((bool)bVar21) {
              pcVar19 = *(char **)(puVar16 + -0x1060);
              *(long *)(puVar16 + -0x10a8) = lVar23;
              *(undefined8 *)(puVar16 + -0x10b0) = 0x1009d7;
              __memmove_chk(pcVar19,pcVar25,lVar23,0x40001);
              uVar18 = *(ulong *)(puVar16 + -0x10a8);
              goto LAB_00100528;
            }
          }
          pcVar25 = pcVar25 + 1;
          uVar18 = 0;
          bVar21 = 0;
          *(ulong *)(puVar16 + -0x1080) =
               *(long *)(puVar16 + -0x1080) + (ulong)((uVar22 ^ 1) & 0xff);
          uVar17 = 1;
          **(undefined8 **)(puVar16 + -0x10a8) = 0;
          goto LAB_0010060f;
        }
        __c = (wchar_t)cVar3;
        *(wchar_t *)(puVar16 + -0x1038) = __c;
        bVar27 = bVar21;
        switch(cVar3) {
        case '\t':
          uVar15 = 1;
LAB_00100675:
          lVar23 = *(long *)(puVar16 + -0x10a0);
          uVar17 = 0;
          *(ulong *)(puVar16 + -0x10a0) =
               lVar23 + 8 +
               (((ulong)(lVar23 >> 0x3f) >> 0x3d) -
               (ulong)((int)lVar23 + ((uint)(lVar23 >> 0x3f) >> 0x1d) & 7));
          break;
        case '\n':
          uVar15 = 1;
LAB_00100665:
          *(long *)(puVar16 + -0x1068) = *(long *)(puVar16 + -0x1068) + 1;
          goto LAB_0010062d;
        case '\v':
          uVar17 = 0;
          uVar15 = 1;
          break;
        case '\f':
        case '\r':
          uVar15 = 1;
LAB_0010062d:
          lVar23 = *(long *)(puVar16 + -0x10a0);
          *(undefined8 *)(puVar16 + -0x10a0) = 0;
          if (lVar23 <= *(long *)(puVar16 + -0x1078)) {
            lVar23 = *(long *)(puVar16 + -0x1078);
          }
          uVar17 = 0;
          *(long *)(puVar16 + -0x1078) = lVar23;
          break;
        default:
          uVar15 = 1;
LAB_001005d5:
          *(ulong *)(puVar16 + -0x10a0) =
               *(long *)(puVar16 + -0x10a0) + (ulong)(byte)wc_isprint[(uint)__c];
          bVar21 = (&wc_isspace)[(uint)__c];
          *(ulong *)(puVar16 + -0x1080) =
               *(long *)(puVar16 + -0x1080) + (ulong)(((uVar22 | bVar21) ^ 1) & 0xff);
          uVar17 = (ulong)(bVar21 ^ 1);
          break;
        case ' ':
          uVar15 = 1;
LAB_001006a5:
          *(long *)(puVar16 + -0x10a0) = *(long *)(puVar16 + -0x10a0) + 1;
          uVar17 = 0;
        }
LAB_00100608:
        pcVar25 = pcVar25 + uVar15;
        lVar9 = lVar9 + 1;
        bVar21 = bVar27;
LAB_0010060f:
      } while (pcVar25 < pcVar1);
      pcVar19 = *(char **)(puVar16 + -0x1060);
      goto LAB_00100528;
    }
    *(undefined8 *)(puVar16 + -0x1088) = 0;
    uVar22 = 0;
    lVar24 = 0;
    lVar9 = 0;
    __buf = puVar16 + -0x1018;
    lVar23 = 0;
    *(undefined8 *)(puVar16 + -0x10a0) = 0;
    while( true ) {
      *(byte **)(puVar16 + -0x10a8) = __buf;
      *(undefined8 *)(puVar16 + -0x10b0) = 0x100312;
      sVar8 = read(*(int *)(puVar16 + -0x1094),__buf,0x40000);
      __buf = *(byte **)(puVar16 + -0x10a8);
      if (sVar8 == 0) break;
      if (sVar8 < 0) {
        *(long *)(puVar16 + -0x1068) = lVar9;
        lVar20 = *(long *)(puVar16 + -0x10a0);
        *(long *)(puVar16 + -0x1080) = lVar24;
        *(undefined8 *)(puVar16 + -0x10b0) = 0x100cd4;
        piVar10 = __errno_location();
        iVar6 = *piVar10;
        uVar18 = CONCAT71(0x1014,iVar6 == 0);
        goto LAB_00100c7d;
      }
      lVar20 = *(long *)(puVar16 + -0x10a0);
      *(long *)(puVar16 + -0x1088) = *(long *)(puVar16 + -0x1088) + sVar8;
      pbVar13 = __buf;
      do {
        bVar21 = *pbVar13;
        pbVar13 = pbVar13 + 1;
        switch(bVar21) {
        case 9:
          uVar22 = 0;
          lVar23 = lVar23 + (8 - lVar23 % 8);
          break;
        case 10:
          lVar9 = lVar9 + 1;
        case 0xc:
        case 0xd:
          if (lVar20 < lVar23) {
            lVar20 = lVar23;
          }
          lVar23 = 0;
          uVar22 = 0;
          break;
        case 0xb:
          uVar22 = 0;
          break;
        default:
          lVar23 = lVar23 + (ulong)(byte)wc_isprint[bVar21];
          uVar26 = uVar22 | (byte)(&wc_isspace)[bVar21];
          uVar22 = (byte)(&wc_isspace)[bVar21] ^ 1;
          lVar24 = lVar24 + (ulong)(uVar26 ^ 1);
          break;
        case 0x20:
          lVar23 = lVar23 + 1;
          uVar22 = 0;
        }
      } while (pbVar13 != __buf + sVar8);
      *(long *)(puVar16 + -0x10a0) = lVar20;
    }
    *(long *)(puVar16 + -0x1080) = lVar24;
    lVar20 = *(long *)(puVar16 + -0x10a0);
    uVar18 = 1;
    *(long *)(puVar16 + -0x1068) = lVar9;
    iVar6 = 0;
LAB_00100c7d:
    if (lVar23 <= lVar20) {
      lVar23 = lVar20;
    }
    lVar9 = 0;
    goto LAB_00100a10;
  }
  if ((bVar21 == 1) && (puVar16[-0x103d] == '\0')) {
    if (print_lines != '\0') {
      *(undefined8 *)(puVar16 + -0x10b0) = 0x100d13;
      fdadvise(*(undefined4 *)(puVar16 + -0x1094),0,0);
      if (print_lines != '\0') {
LAB_001006e0:
        if (use_avx2_1 == '\0') {
          if (debug == '\0') {
            if ((_DAT_001040cc & 0x400) != 0) {
LAB_00100c0c:
              use_avx2_1 = '\x01';
              goto LAB_00100c13;
            }
          }
          else {
            if ((_DAT_001040cc & 0x400) != 0) {
              *(undefined8 *)(puVar16 + -0x10b0) = 0x100bfe;
              uVar12 = dcgettext(0,"using avx2 hardware support",5);
              *(undefined8 *)(puVar16 + -0x10b0) = 0x100c0c;
              error(0,0,uVar12);
              goto LAB_00100c0c;
            }
            *(undefined8 *)(puVar16 + -0x10b0) = 0x100e26;
            uVar12 = dcgettext(0,"avx2 support not detected",5);
            *(undefined8 *)(puVar16 + -0x10b0) = 0x100e34;
            error(0,0,uVar12);
          }
          use_avx2_1 = -1;
LAB_001006f3:
          bVar4 = false;
          lVar9 = 0;
          pcVar19 = puVar16 + -0x1018;
          lVar23 = 0;
          while( true ) {
            *(undefined8 *)(puVar16 + -0x10b0) = 0x100719;
            sVar8 = read(*(int *)(puVar16 + -0x1094),pcVar19,0x40000);
            if (sVar8 < 1) break;
            lVar9 = lVar9 + sVar8;
            pcVar1 = pcVar19 + sVar8;
            if (bVar4) {
              *pcVar1 = '\n';
              lVar24 = 0;
              pcVar25 = pcVar19;
              while( true ) {
                *(undefined8 *)(puVar16 + -0x10b0) = 0x10099a;
                pcVar25 = (char *)rawmemchr(pcVar25,10);
                if (pcVar1 <= pcVar25) break;
                lVar24 = lVar24 + 1;
                pcVar25 = pcVar25 + 1;
              }
              lVar23 = lVar23 + lVar24;
              lVar24 = lVar24 * 0xf;
            }
            else if (pcVar19 < pcVar1) {
              lVar24 = 0;
              pcVar25 = pcVar19;
              do {
                cVar3 = *pcVar25;
                pcVar25 = pcVar25 + 1;
                lVar24 = lVar24 + (ulong)(cVar3 == '\n');
              } while (pcVar1 != pcVar25);
              lVar23 = lVar23 + lVar24;
              lVar24 = lVar24 * 0xf;
            }
            else {
              lVar24 = 0;
            }
            bVar4 = lVar24 <= sVar8;
          }
          *(long *)(puVar16 + -0x1068) = lVar23;
          *(long *)(puVar16 + -0x1088) = lVar9;
          if (sVar8 == 0) {
            uVar18 = 1;
            iVar6 = 0;
          }
          else {
            *(undefined8 *)(puVar16 + -0x10b0) = 0x100b85;
            piVar10 = __errno_location();
            iVar6 = *piVar10;
            uVar18 = CONCAT71((int7)((ulong)sVar8 >> 8),iVar6 == 0);
          }
        }
        else {
          if (use_avx2_1 < '\x01') goto LAB_001006f3;
LAB_00100c13:
          *(undefined8 *)(puVar16 + -0x10b0) = 0x100c21;
          wc_lines_avx2(puVar16 + -0x1038,*(undefined4 *)(puVar16 + -0x1094));
          iVar6 = *(int *)(puVar16 + -0x1038);
          *(undefined8 *)(puVar16 + -0x1068) = *(undefined8 *)(puVar16 + -0x1030);
          uVar18 = CONCAT71((int7)((ulong)param_4 >> 8),iVar6 == 0);
          *(undefined8 *)(puVar16 + -0x1088) = *(undefined8 *)(puVar16 + -0x1028);
        }
        *(undefined8 *)(puVar16 + -0x1080) = 0;
        lVar9 = 0;
        lVar23 = 0;
        goto LAB_00100a10;
      }
    }
  }
  else {
    *(undefined8 *)(puVar16 + -0x10b0) = 0x1006c4;
    fdadvise(*(undefined4 *)(puVar16 + -0x1094),0,0);
    if ((((puVar16[-0x103d] ^ 1) & bVar21) == 0) || (print_lines != '\0')) {
      if (puVar16[-0x103d] == '\0') goto LAB_001006e0;
      goto LAB_001002b4;
    }
  }
  iVar6 = *param_3;
  if (0 < iVar6) {
    *(undefined8 *)(puVar16 + -0x10b0) = 0x10042f;
    iVar6 = fstat(*(int *)(puVar16 + -0x1094),(stat *)(param_3 + 2));
    *param_3 = iVar6;
  }
  lVar9 = page_size;
  if ((iVar6 == 0) && ((param_3[8] & 0xd000U) == 0x8000)) {
    lVar23 = *(long *)(param_3 + 0xe);
    *(long *)(puVar16 + -0x1088) = lVar23;
    if (lVar23 < 0) goto LAB_00100784;
    if (param_4 == -1) {
      *(undefined8 *)(puVar16 + -0x10b0) = 0x100d80;
      _Var14 = lseek(*(int *)(puVar16 + -0x1094),0,1);
      if (*(long *)(puVar16 + -0x1088) % lVar9 == 0) {
        bVar21 = (byte)~(byte)((ulong)_Var14 >> 0x38) >> 7;
        goto LAB_00100da0;
      }
      if (_Var14 <= *(long *)(puVar16 + -0x1088)) {
        plVar2 = (long *)(puVar16 + -0x1088);
        *plVar2 = *plVar2 - _Var14;
        if (*plVar2 != 0) goto LAB_00100489;
      }
      goto LAB_00100784;
    }
    bVar21 = 1;
    _Var14 = lVar23 % page_size;
    if (_Var14 != 0) {
LAB_00100489:
      *(undefined8 *)(puVar16 + -0x10b0) = 0x10049c;
      _Var14 = lseek(*(int *)(puVar16 + -0x1094),*(__off_t *)(puVar16 + -0x1088),1);
      if (-1 < _Var14) {
        uVar18 = 1;
        lVar9 = 0;
        *(undefined8 *)(puVar16 + -0x1080) = 0;
        *(undefined8 *)(puVar16 + -0x1068) = 0;
        iVar6 = 0;
        lVar23 = 0;
        goto LAB_00100a10;
      }
      goto LAB_00100784;
    }
LAB_00100da0:
    lVar9 = 0x201;
    if (*(long *)(param_3 + 0x10) - 1U < 0x2000000000000000) {
      lVar9 = *(long *)(param_3 + 0x10) + 1;
    }
    lVar9 = *(long *)(puVar16 + -0x1088) - *(long *)(puVar16 + -0x1088) % lVar9;
    if ((lVar9 <= _Var14) || (bVar21 == 0)) goto LAB_00100784;
    *(undefined8 *)(puVar16 + -0x10b0) = 0x100dfd;
    _Var11 = lseek(*(int *)(puVar16 + -0x1094),lVar9,1);
    if (_Var11 < 0) goto LAB_00100784;
    *(long *)(puVar16 + -0x1088) = lVar9 - _Var14;
  }
  else {
LAB_00100784:
    *(undefined8 *)(puVar16 + -0x1088) = 0;
  }
  __fd = *(int *)(puVar16 + -0x1094);
  *(undefined8 *)(puVar16 + -0x10b0) = 0x1007a9;
  fdadvise(__fd,0,0,2);
  lVar9 = *(long *)(puVar16 + -0x1088);
  while( true ) {
    *(undefined8 *)(puVar16 + -0x10b0) = 0x1007c8;
    sVar8 = read(__fd,puVar16 + -0x1018,0x40000);
    if (sVar8 == 0) break;
    if (sVar8 < 0) {
      *(long *)(puVar16 + -0x1088) = lVar9;
      *(undefined8 *)(puVar16 + -0x10b0) = 0x100d4a;
      piVar10 = __errno_location();
      *(undefined8 *)(puVar16 + -0x1080) = 0;
      *(undefined8 *)(puVar16 + -0x1068) = 0;
      iVar6 = *piVar10;
      uVar18 = (ulong)CONCAT31((int3)((uint)__fd >> 8),iVar6 == 0);
      lVar9 = 0;
      lVar23 = 0;
      goto LAB_00100a10;
    }
    lVar9 = lVar9 + sVar8;
  }
  *(long *)(puVar16 + -0x1088) = lVar9;
  uVar18 = 1;
  *(undefined8 *)(puVar16 + -0x1080) = 0;
  iVar6 = 0;
  *(undefined8 *)(puVar16 + -0x1068) = 0;
  lVar9 = 0;
  lVar23 = 0;
LAB_00100a10:
  if ((byte)puVar16[-0x103d] < print_chars) {
    lVar9 = *(long *)(puVar16 + -0x1088);
  }
  if (total_mode != 2) {
    *(undefined8 *)(puVar16 + -0x10b0) = 0x100a4a;
    write_counts(*(undefined8 *)(puVar16 + -0x1068),*(undefined8 *)(puVar16 + -0x1080),lVar9,
                 *(long *)(puVar16 + -0x1088),lVar23,*(undefined8 *)(puVar16 + -0x1050));
  }
  lVar24 = total_lines + -0x8000000000000000;
  total_lines = lVar24 + *(long *)(puVar16 + -0x1068) + -0x8000000000000000;
  total_lines_overflow = total_lines_overflow | SCARRY8(lVar24,*(long *)(puVar16 + -0x1068));
  lVar24 = total_words + -0x8000000000000000;
  total_words = lVar24 + *(long *)(puVar16 + -0x1080) + -0x8000000000000000;
  total_words_overflow = total_words_overflow | SCARRY8(lVar24,*(long *)(puVar16 + -0x1080));
  lVar24 = total_chars + -0x8000000000000000;
  total_chars = lVar9 + lVar24 + -0x8000000000000000;
  total_chars_overflow = total_chars_overflow | SCARRY8(lVar9,lVar24);
  lVar9 = total_bytes + -0x8000000000000000;
  total_bytes = lVar9 + *(long *)(puVar16 + -0x1088) + -0x8000000000000000;
  total_bytes_overflow = total_bytes_overflow | SCARRY8(lVar9,*(long *)(puVar16 + -0x1088));
  if (max_line_length < lVar23) {
    max_line_length = lVar23;
  }
  if (iVar6 != 0) {
    *(undefined8 *)(puVar16 + -0x10b0) = 0x100e4a;
    uVar12 = quotearg_n_style_colon(0,3,*(undefined8 *)(puVar16 + -0x1048));
    *(undefined8 *)(puVar16 + -0x10b0) = 0x100e60;
    error(0,iVar6,&_LC4,uVar12);
  }
  if (*(long *)(puVar16 + 0x3eff0) != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(puVar16 + -0x10b0) = 0x100e18;
    __stack_chk_fail();
  }
  return uVar18 & 0xffffffff;
LAB_00100cf4:
  uVar18 = 1;
  iVar6 = 0;
LAB_001009f5:
  lVar23 = *(long *)(puVar16 + -0x10a0);
  if (*(long *)(puVar16 + -0x10a0) <= *(long *)(puVar16 + -0x1078)) {
    lVar23 = *(long *)(puVar16 + -0x1078);
  }
  goto LAB_00100a10;
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
    if (((*pcVar4 == 'w') && (pcVar4[1] == 'c')) && (pcVar4[2] == '\0')) break;
    pcVar4 = *(char **)((long)ppuVar6 + 0x10);
    ppuVar6 = (undefined1 **)((long)ppuVar6 + 0x10);
  } while (pcVar4 != (char *)0x0);
  puVar7 = *(undefined1 **)((long)ppuVar6 + 8);
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
  exit(param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte main(ulong param_1,undefined8 *param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  char *__s1;
  char cVar4;
  ushort uVar5;
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
  byte bVar29;
  int iVar30;
  char *pcVar31;
  FILE *pFVar32;
  ushort **ppuVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  long lVar37;
  FILE *__stream;
  int *piVar38;
  bool bVar39;
  uint uVar40;
  stat *__buf;
  uint *puVar41;
  char *pcVar42;
  ulong uVar43;
  uint *puVar44;
  long in_FS_OFFSET;
  ushort uVar45;
  ushort uVar48;
  ushort uVar49;
  ushort uVar50;
  double dVar46;
  double dVar47;
  ushort uVar51;
  ushort uVar52;
  ushort uVar53;
  ushort uVar54;
  ushort uVar55;
  ushort uVar56;
  ushort uVar57;
  ushort uVar58;
  ushort uVar59;
  ushort uVar60;
  ushort uVar61;
  ushort uVar62;
  double dVar63;
  int *local_220;
  int *local_218;
  byte local_20a;
  char local_209;
  int local_1fc;
  uint *local_1f8;
  char *local_1f0;
  stat local_d8;
  long local_40;
  
  puVar44 = &switchD_00102103::switchdataD_00101880;
  pcVar42 = "clLmw";
  __stream = (FILE *)(param_1 & 0xffffffff);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  iVar30 = getpagesize();
  page_size = (long)iVar30;
  setvbuf(_stdout,(char *)0x0,1,0);
  pcVar31 = getenv("POSIXLY_CORRECT");
  print_bytes = 0;
  print_chars = 0;
  posixly_correct = pcVar31 != (char *)0x0;
  print_words = 0;
  print_lines = 0;
  print_linelength = 0;
  max_line_length = 0;
  total_bytes = 0;
  total_chars = 0;
  total_words = 0;
  total_lines = 0;
  pcVar31 = (char *)0x0;
  while( true ) {
    iVar30 = getopt_long(param_1 & 0xffffffff,param_2,"clLmw",longopts,0);
    if (iVar30 == -1) {
      if (print_lines != 0) {
        if (print_linelength == 0) goto LAB_001022bf;
        goto LAB_00102251;
      }
      bVar29 = print_linelength;
      if (print_words != 0) goto LAB_0010291e;
      if ((print_chars == 0) && (print_bytes == 0)) {
        if (print_linelength != 0) goto LAB_00102251;
        print_bytes = 1;
        print_words = 1;
        print_lines = 1;
        goto LAB_0010250e;
      }
      if (print_linelength != 0) goto LAB_00102251;
      goto LAB_001022cc;
    }
    if (0x82 < iVar30) goto switchD_00102103_caseD_4d;
    if (iVar30 < 0x4c) break;
    switch(iVar30) {
    case 0x4c:
      print_linelength = 1;
      break;
    default:
      goto switchD_00102103_caseD_4d;
    case 99:
      print_bytes = 1;
      break;
    case 0x6c:
      print_lines = 1;
      break;
    case 0x6d:
      print_chars = 1;
      break;
    case 0x77:
      print_words = 1;
      break;
    case 0x80:
      debug = 1;
      break;
    case 0x81:
      pcVar31 = _optarg;
      break;
    case 0x82:
      lVar37 = __xargmatch_internal("--total",_optarg,total_args,total_types,4,_argmatch_die,1);
      total_mode = *(int *)(total_types + lVar37 * 4);
    }
  }
  if (iVar30 == -0x83) {
    uVar34 = proper_name_lite("David MacKenzie","David MacKenzie");
    uVar35 = proper_name_lite("Paul Rubin","Paul Rubin");
    version_etc(_stdout,&_LC6,"GNU coreutils",_Version,uVar35,uVar34,0);
                    /* WARNING: Subroutine does not return */
    exit(0);
  }
  if (iVar30 == -0x82) {
    iVar30 = usage(0);
    goto LAB_00102b19;
  }
switchD_00102103_caseD_4d:
  lVar37 = usage(1);
LAB_0010299a:
  uVar40 = (int)__stream - (int)lVar37;
  __stream = (FILE *)(ulong)uVar40;
  pcVar42 = (char *)(param_2 + (int)lVar37);
  puVar44 = (uint *)(long)(int)uVar40;
LAB_00102900:
  param_2 = (undefined8 *)argv_iter_init_argv(pcVar42);
  local_209 = '\0';
  if (param_2 != (undefined8 *)0x0) goto LAB_00102831;
LAB_00102919:
  do {
    bVar29 = xalloc_die();
LAB_0010291e:
    if (bVar29 == 0) {
LAB_0010250e:
      ppuVar33 = __ctype_b_loc();
      cVar4 = posixly_correct;
      uVar43 = 0;
      puVar44 = (uint *)*ppuVar33;
      do {
        bVar39 = true;
        if (((*(byte *)((long)puVar44 + uVar43 * 2 + 1) & 0x20) == 0) &&
           (bVar39 = false, cVar4 == '\0')) {
          iVar30 = rpl_btowc(uVar43 & 0xffffffff);
          bVar39 = iVar30 == 0xa0 || iVar30 == 0x2007;
          if (iVar30 != 0xa0 && iVar30 != 0x2007) {
            bVar39 = iVar30 == 0x202f || iVar30 == 0x2060;
          }
        }
        (&wc_isspace)[uVar43] = bVar39;
        uVar43 = uVar43 + 1;
      } while (uVar43 != 0x100);
      pcVar42 = (char *)0x100;
    }
    else {
LAB_00102251:
      ppuVar33 = __ctype_b_loc();
      uVar28 = _UNK_00102e9e;
      uVar27 = _UNK_00102e9c;
      uVar26 = _UNK_00102e9a;
      uVar25 = _UNK_00102e98;
      uVar24 = _UNK_00102e96;
      uVar23 = _UNK_00102e94;
      uVar22 = _UNK_00102e92;
      uVar21 = __LC42;
      uVar20 = _UNK_00102e8e;
      uVar19 = _UNK_00102e8c;
      uVar18 = _UNK_00102e8a;
      uVar17 = _UNK_00102e88;
      uVar16 = _UNK_00102e86;
      uVar15 = _UNK_00102e84;
      uVar14 = _UNK_00102e82;
      uVar13 = __LC41;
      uVar12 = _UNK_00102e7e;
      uVar11 = _UNK_00102e7c;
      uVar10 = _UNK_00102e7a;
      uVar9 = _UNK_00102e78;
      uVar8 = _UNK_00102e76;
      uVar7 = _UNK_00102e74;
      uVar6 = _UNK_00102e72;
      uVar5 = __LC40;
      puVar3 = *ppuVar33;
      lVar37 = 0;
      do {
        puVar2 = puVar3 + lVar37 + 8;
        puVar1 = puVar3 + lVar37;
        uVar45 = ~-(ushort)((*puVar1 & uVar5) == 0) & uVar13 & uVar21;
        uVar48 = ~-(ushort)((puVar1[1] & uVar6) == 0) & uVar14 & uVar22;
        uVar49 = ~-(ushort)((puVar1[2] & uVar7) == 0) & uVar15 & uVar23;
        uVar50 = ~-(ushort)((puVar1[3] & uVar8) == 0) & uVar16 & uVar24;
        uVar51 = ~-(ushort)((puVar1[4] & uVar9) == 0) & uVar17 & uVar25;
        uVar52 = ~-(ushort)((puVar1[5] & uVar10) == 0) & uVar18 & uVar26;
        uVar53 = ~-(ushort)((puVar1[6] & uVar11) == 0) & uVar19 & uVar27;
        uVar54 = ~-(ushort)((puVar1[7] & uVar12) == 0) & uVar20 & uVar28;
        uVar55 = ~-(ushort)((*puVar2 & uVar5) == 0) & uVar13 & uVar21;
        uVar56 = ~-(ushort)((puVar2[1] & uVar6) == 0) & uVar14 & uVar22;
        uVar57 = ~-(ushort)((puVar2[2] & uVar7) == 0) & uVar15 & uVar23;
        uVar58 = ~-(ushort)((puVar2[3] & uVar8) == 0) & uVar16 & uVar24;
        uVar59 = ~-(ushort)((puVar2[4] & uVar9) == 0) & uVar17 & uVar25;
        uVar60 = ~-(ushort)((puVar2[5] & uVar10) == 0) & uVar18 & uVar26;
        uVar61 = ~-(ushort)((puVar2[6] & uVar11) == 0) & uVar19 & uVar27;
        uVar62 = ~-(ushort)((puVar2[7] & uVar12) == 0) & uVar20 & uVar28;
        wc_isprint[lVar37] =
             (0 < (short)uVar45) * ((short)uVar45 < 0x100) * (char)uVar45 - (0xff < (short)uVar45);
        wc_isprint[lVar37 + 1] =
             (0 < (short)uVar48) * ((short)uVar48 < 0x100) * (char)uVar48 - (0xff < (short)uVar48);
        wc_isprint[lVar37 + 2] =
             (0 < (short)uVar49) * ((short)uVar49 < 0x100) * (char)uVar49 - (0xff < (short)uVar49);
        wc_isprint[lVar37 + 3] =
             (0 < (short)uVar50) * ((short)uVar50 < 0x100) * (char)uVar50 - (0xff < (short)uVar50);
        wc_isprint[lVar37 + 4] =
             (0 < (short)uVar51) * ((short)uVar51 < 0x100) * (char)uVar51 - (0xff < (short)uVar51);
        wc_isprint[lVar37 + 5] =
             (0 < (short)uVar52) * ((short)uVar52 < 0x100) * (char)uVar52 - (0xff < (short)uVar52);
        wc_isprint[lVar37 + 6] =
             (0 < (short)uVar53) * ((short)uVar53 < 0x100) * (char)uVar53 - (0xff < (short)uVar53);
        wc_isprint[lVar37 + 7] =
             (0 < (short)uVar54) * ((short)uVar54 < 0x100) * (char)uVar54 - (0xff < (short)uVar54);
        wc_isprint[lVar37 + 8] =
             (0 < (short)uVar55) * ((short)uVar55 < 0x100) * (char)uVar55 - (0xff < (short)uVar55);
        wc_isprint[lVar37 + 9] =
             (0 < (short)uVar56) * ((short)uVar56 < 0x100) * (char)uVar56 - (0xff < (short)uVar56);
        wc_isprint[lVar37 + 10] =
             (0 < (short)uVar57) * ((short)uVar57 < 0x100) * (char)uVar57 - (0xff < (short)uVar57);
        wc_isprint[lVar37 + 0xb] =
             (0 < (short)uVar58) * ((short)uVar58 < 0x100) * (char)uVar58 - (0xff < (short)uVar58);
        wc_isprint[lVar37 + 0xc] =
             (0 < (short)uVar59) * ((short)uVar59 < 0x100) * (char)uVar59 - (0xff < (short)uVar59);
        wc_isprint[lVar37 + 0xd] =
             (0 < (short)uVar60) * ((short)uVar60 < 0x100) * (char)uVar60 - (0xff < (short)uVar60);
        wc_isprint[lVar37 + 0xe] =
             (0 < (short)uVar61) * ((short)uVar61 < 0x100) * (char)uVar61 - (0xff < (short)uVar61);
        wc_isprint[lVar37 + 0xf] =
             (0 < (short)uVar62) * ((short)uVar62 < 0x100) * (char)uVar62 - (0xff < (short)uVar62);
        lVar37 = lVar37 + 0x10;
      } while (lVar37 != 0x100);
LAB_001022bf:
      if (print_words != 0) goto LAB_0010250e;
    }
LAB_001022cc:
    lVar37 = (long)_optind;
    if (pcVar31 == (char *)0x0) goto LAB_001028eb;
    if (_optind < (int)__stream) {
      pcVar31 = (char *)quotearg_style(4,param_2[lVar37]);
      uVar34 = dcgettext(0,"extra operand %s",5);
      error(0,0,uVar34,pcVar31);
      uVar34 = dcgettext(0,"file operands cannot be combined with --files0-from",5);
      __fprintf_chk(_stderr,2,&_LC45,uVar34);
      goto switchD_00102103_caseD_4d;
    }
    iVar30 = strcmp(pcVar31,"-");
    __stream = _stdin;
    if ((iVar30 == 0) || (__stream = (FILE *)rpl_fopen(pcVar31,&_LC47), __stream != (FILE *)0x0)) {
      iVar30 = fileno(__stream);
      iVar30 = fstat(iVar30,&local_d8);
      if ((iVar30 == 0) && ((local_d8.st_mode & 0xf000) == 0x8000)) {
        dVar63 = (double)local_d8.st_size;
        dVar46 = (double)physmem_available();
        dVar47 = _LC33;
        if (dVar46 * _LC49 <= _LC33) {
          dVar47 = (double)physmem_available();
          dVar47 = _LC49 * dVar47;
        }
        if (dVar47 < dVar63) goto LAB_00102334;
        readtokens0_init(&local_1f8);
        local_209 = readtokens0(__stream,&local_1f8);
        if ((local_209 == '\0') ||
           (iVar30 = rpl_fclose(__stream), pcVar42 = local_1f0, puVar44 = local_1f8, iVar30 != 0)) {
          uVar34 = quotearg_style(4,pcVar31);
          uVar35 = dcgettext(0,"cannot read file names from %s",5);
          error(1,0,uVar35,uVar34);
          goto LAB_00102c0e;
        }
        param_2 = (undefined8 *)argv_iter_init_argv(local_1f0);
      }
      else {
LAB_00102334:
        pcVar42 = (char *)0x0;
        puVar44 = (uint *)0x0;
        param_2 = (undefined8 *)argv_iter_init_stream(__stream);
        local_209 = '\0';
      }
      if (param_2 == (undefined8 *)0x0) goto LAB_00102919;
      if (puVar44 == (uint *)0x0) {
        local_220 = (int *)xnmalloc(1);
        goto LAB_00102370;
      }
LAB_00102831:
      local_220 = (int *)xnmalloc();
      if (puVar44 == (uint *)0x1) goto LAB_00102a12;
      if (0 < (long)puVar44) goto LAB_00102856;
LAB_0010238e:
      number_width = 1;
    }
    else {
      uVar34 = quotearg_style(4,pcVar31);
      pcVar31 = (char *)dcgettext(0,"cannot open %s for reading",5);
      piVar38 = __errno_location();
      error(1,*piVar38,pcVar31,uVar34);
LAB_00102a12:
      if ((uint)print_lines + (uint)print_words + (uint)print_chars + (uint)print_bytes +
          (uint)print_linelength == 1) {
LAB_00102370:
        bVar39 = total_mode == 2;
        *local_220 = 1;
        if ((bVar39) || (puVar44 != (uint *)0x1)) goto LAB_0010238e;
      }
      else {
LAB_00102856:
        puVar41 = (uint *)0x0;
        __buf = (stat *)(local_220 + 2);
        do {
          __s1 = *(char **)(pcVar42 + (long)puVar41 * 8);
          if ((__s1 == (char *)0x0) || (iVar30 = strcmp(__s1,"-"), iVar30 == 0)) {
            iVar30 = fstat(0,__buf);
          }
          else {
            iVar30 = stat(__s1,__buf);
          }
          puVar41 = (uint *)((long)puVar41 + 1);
          *(int *)(__buf[-1].__unused + 2) = iVar30;
          __buf = (stat *)&__buf[1].st_ino;
        } while (puVar44 != puVar41);
        if (total_mode == 2) goto LAB_0010238e;
      }
      if (0 < *local_220) goto LAB_0010238e;
      iVar30 = 1;
      uVar43 = 0;
      puVar41 = (uint *)0x0;
      piVar38 = local_220;
      do {
        if (*piVar38 == 0) {
          if ((piVar38[8] & 0xf000U) == 0x8000) {
            lVar37 = uVar43 + 0x8000000000000000;
            uVar43 = lVar37 + *(long *)(piVar38 + 0xe) + 0x8000000000000000;
            if (SCARRY8(lVar37,*(long *)(piVar38 + 0xe))) {
              uVar43 = 0xffffffffffffffff;
              break;
            }
          }
          else {
            iVar30 = 7;
          }
        }
        puVar41 = (uint *)((long)puVar41 + 1);
        piVar38 = piVar38 + 0x26;
      } while (puVar44 != puVar41);
      number_width = 1;
      for (; 9 < uVar43; uVar43 = uVar43 / 10) {
        number_width = number_width + 1;
      }
      if (number_width <= iVar30) {
        number_width = iVar30;
      }
    }
    __stream = (FILE *)0x0;
    local_20a = 1;
    while (pcVar42 = (char *)argv_iter(param_2,&local_1fc), pcVar42 != (char *)0x0) {
      if (pcVar31 == (char *)0x0) {
        if (*pcVar42 == '\0') {
          dcgettext(0,"invalid zero-length file name",5);
          error(0,0,&_LC4);
          goto LAB_001026b8;
        }
LAB_0010247d:
        pFVar32 = (FILE *)0x0;
        if (puVar44 != (uint *)0x0) {
          pFVar32 = __stream;
        }
LAB_0010248d:
        local_218 = (int *)((long)&pFVar32->_flags + (long)local_220);
        iVar30 = strcmp(pcVar42,"-");
        if (iVar30 == 0) {
          have_read_stdin = '\x01';
          bVar29 = wc(0,pcVar42,local_218,0xffffffffffffffff);
        }
        else {
LAB_001023ef:
          iVar30 = open(pcVar42,0);
          if (iVar30 != -1) {
            bVar29 = wc(iVar30,pcVar42,local_218,0);
            iVar30 = close(iVar30);
            if (iVar30 == 0) goto LAB_0010242d;
          }
          quotearg_n_style_colon(0,3,pcVar42);
          piVar38 = __errno_location();
          bVar29 = 0;
          error(0,*piVar38,&_LC4);
        }
LAB_0010242d:
        local_20a = local_20a & bVar29;
      }
      else {
        if ((*pcVar31 == '-') && (pcVar31[1] == '\0')) {
          iVar30 = strcmp(pcVar42,"-");
          if (iVar30 == 0) {
            quotearg_style(4,pcVar42);
            uVar34 = dcgettext(0,"when reading file names from stdin, no file name of %s allowed",5)
            ;
            error(0,0,uVar34);
            if (*pcVar42 != '\0') goto LAB_001026b8;
          }
          else if (*pcVar42 != '\0') {
            pFVar32 = __stream;
            if (puVar44 != (uint *)0x0) goto LAB_0010248d;
            local_218 = local_220;
            goto LAB_001023ef;
          }
        }
        else if (*pcVar42 != '\0') goto LAB_0010247d;
        uVar34 = dcgettext(0,"invalid zero-length file name",5);
        uVar35 = argv_iter_n_args(param_2);
        uVar36 = quotearg_n_style_colon(0,3,pcVar31);
        error(0,0,"%s:%zu: %s",uVar36,uVar35,uVar34);
LAB_001026b8:
        local_20a = 0;
      }
      if (puVar44 == (uint *)0x0) {
        *local_220 = 1;
      }
      __stream = (FILE *)&__stream->__pad1;
    }
    pcVar42 = (char *)0x0;
    iVar30 = local_1fc;
    if (local_1fc == 2) {
      bVar29 = pcVar31 == (char *)0x0 & local_20a;
      pcVar31 = (char *)(ulong)bVar29;
      if ((bVar29 != 0) && (lVar37 = argv_iter_n_args(param_2), local_20a = bVar29, lVar37 == 0)) {
        have_read_stdin = '\x01';
        local_20a = wc(0,0,local_220,0xffffffffffffffff);
      }
      goto LAB_00102729;
    }
LAB_00102b19:
    if (iVar30 != 3) break;
  } while( true );
  __stream = (FILE *)quotearg_n_style_colon(0,3,pcVar31);
  pcVar31 = (char *)dcgettext(0,"%s: read error",5);
  piVar38 = __errno_location();
  error(0,*piVar38,pcVar31,__stream);
  local_20a = 0;
LAB_00102729:
  if (local_209 != '\0') {
    readtokens0_free(&local_1f8);
  }
  if ((total_mode != 3) && ((total_mode != 0 || (uVar43 = argv_iter_n_args(param_2), 1 < uVar43))))
  {
    if (total_lines_overflow != '\0') {
      total_lines = 0xffffffffffffffff;
      uVar34 = dcgettext(0,"total lines",5);
      error(0,0x4b,uVar34);
      local_20a = 0;
    }
    if (total_words_overflow != '\0') {
      total_words = 0xffffffffffffffff;
      uVar34 = dcgettext(0,"total words",5);
      error(0,0x4b,uVar34);
      local_20a = 0;
    }
    if (total_chars_overflow != '\0') {
      total_chars = 0xffffffffffffffff;
      uVar34 = dcgettext(0,"total characters",5);
      error(0,0x4b,uVar34);
      local_20a = 0;
    }
    if (total_bytes_overflow != '\0') {
      total_bytes = 0xffffffffffffffff;
      uVar34 = dcgettext(0,"total bytes",5);
      error(0,0x4b,uVar34);
      local_20a = 0;
    }
    if (total_mode != 2) {
      pcVar42 = (char *)dcgettext(0,"total",5);
    }
    write_counts(total_lines,total_words,total_chars,total_bytes,max_line_length,pcVar42);
  }
  argv_iter_free(param_2);
  free(local_220);
  if ((have_read_stdin == '\0') || (iVar30 = close(0), iVar30 == 0)) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return local_20a ^ 1;
    }
LAB_00102c0e:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  piVar38 = __errno_location();
  lVar37 = error(1,*piVar38,&_LC46);
LAB_001028eb:
  if ((int)lVar37 < (int)__stream) goto LAB_0010299a;
  pcVar42 = (char *)&stdin_only_2;
  puVar44 = (uint *)0x1;
  goto LAB_00102900;
}


