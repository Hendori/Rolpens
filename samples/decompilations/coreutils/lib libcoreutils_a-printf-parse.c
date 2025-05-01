
/* WARNING: Unknown calling convention */

wchar_t printf_parse(char *format,char_directives *d,arguments *a)

{
  argument *paVar1;
  char_directive *pcVar2;
  char *pcVar3;
  size_t sVar4;
  byte bVar5;
  wchar_t wVar6;
  argument *__ptr;
  argument *paVar7;
  int *piVar8;
  char_directive *pcVar9;
  ulong uVar10;
  arg_type aVar11;
  ulong uVar12;
  ulong uVar13;
  arg_type aVar14;
  char *pcVar15;
  ulong uVar16;
  char *pcVar17;
  size_t sVar18;
  char cVar19;
  arg_type aVar20;
  argument *paVar21;
  size_t sVar22;
  size_t sum;
  ulong uVar23;
  char_directive *__ptr_00;
  bool bVar24;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  ulong local_60;
  
  paVar1 = a->direct_alloc_arg;
  uVar10 = 0;
  uVar23 = 7;
  local_60 = 0;
  pcVar2 = d->direct_alloc_dir;
  d->count = 0;
  d->dir = pcVar2;
  a->count = 0;
  a->arg = paVar1;
  local_78 = 0;
  local_88 = 0;
  local_80 = 7;
  pcVar9 = pcVar2;
LAB_0010007b:
  do {
    pcVar15 = format;
    if (*pcVar15 == '\0') {
      pcVar9[uVar10].dir_start = pcVar15;
      d->max_width_length = local_88;
      d->max_precision_length = local_78;
      return L'\0';
    }
    format = pcVar15 + 1;
  } while (*pcVar15 != '%');
  sVar22 = 0xffffffffffffffff;
  pcVar9 = pcVar9 + uVar10;
  pcVar9->dir_start = pcVar15;
  pcVar9->flags = L'\0';
  pcVar9->width_arg_index = 0xffffffffffffffff;
  pcVar9->precision_arg_index = 0xffffffffffffffff;
  pcVar9->arg_index = 0xffffffffffffffff;
  pcVar9->width_start = (char *)0x0;
  pcVar9->width_end = (char *)0x0;
  pcVar9->precision_start = (char *)0x0;
  pcVar9->precision_end = (char *)0x0;
  cVar19 = pcVar15[1];
  pcVar15 = format;
  if (9 < (byte)(cVar19 - 0x30U)) {
LAB_00100118:
    do {
      pcVar15 = format + 1;
      switch(cVar19) {
      case ' ':
        wVar6 = pcVar9->flags | 8;
        break;
      default:
        goto switchD_00100129_caseD_21;
      case '#':
        wVar6 = pcVar9->flags | 0x10;
        break;
      case '\'':
        wVar6 = pcVar9->flags | 1;
        break;
      case '+':
        wVar6 = pcVar9->flags | 4;
        break;
      case '-':
        wVar6 = pcVar9->flags | 2;
        break;
      case '0':
        wVar6 = pcVar9->flags | 0x20;
        break;
      case 'I':
        wVar6 = pcVar9->flags | 0x40;
      }
      pcVar9->flags = wVar6;
      cVar19 = *pcVar15;
      format = pcVar15;
    } while( true );
  }
  do {
    pcVar17 = pcVar15 + 1;
    pcVar15 = pcVar15 + 1;
  } while ((byte)(*pcVar17 - 0x30U) < 10);
  sVar22 = 0xffffffffffffffff;
  if (*pcVar17 != '$') goto LAB_00100118;
  uVar10 = 0;
  do {
    bVar5 = cVar19 - 0x30;
    pcVar15 = format;
    if (uVar10 < 0x199999999999999a) {
      uVar12 = uVar10 * 10;
    }
    else {
      uVar12 = 0xffffffffffffffff;
    }
    while (uVar10 = uVar12 + (long)(char)bVar5, CARRY8(uVar12,(long)(char)bVar5)) {
      bVar5 = pcVar15[1] - 0x30;
      if (9 < bVar5) goto switchD_00100200_caseD_1;
      pcVar15 = pcVar15 + 1;
      uVar12 = 0xffffffffffffffff;
    }
    cVar19 = pcVar15[1];
    format = pcVar15 + 1;
  } while ((byte)(cVar19 - 0x30U) < 10);
  sVar22 = uVar10 - 1;
  if (sVar22 < 0xfffffffffffffffe) {
    cVar19 = pcVar15[2];
    format = pcVar15 + 2;
    goto LAB_00100118;
  }
  goto switchD_00100200_caseD_1;
switchD_00100129_caseD_21:
  uVar10 = local_60;
  if (cVar19 == '*') {
    pcVar9->width_start = format;
    pcVar9->width_end = pcVar15;
    cVar19 = format[1];
    uVar12 = 1;
    if (local_88 != 0) {
      uVar12 = local_88;
    }
    pcVar17 = pcVar15;
    if ((byte)(cVar19 - 0x30U) < 10) {
      do {
        pcVar3 = pcVar17 + 1;
        pcVar17 = pcVar17 + 1;
      } while ((byte)(*pcVar3 - 0x30U) < 10);
      if (*pcVar3 != '$') goto LAB_00100238;
      local_60 = 0;
      do {
        pcVar17 = pcVar15;
        bVar5 = cVar19 - 0x30;
        if (local_60 < 0x199999999999999a) {
          uVar13 = local_60 * 10;
        }
        else {
          uVar13 = 0xffffffffffffffff;
        }
        while (local_60 = (long)(char)bVar5 + uVar13, CARRY8((long)(char)bVar5,uVar13)) {
          pcVar15 = pcVar17 + 1;
          pcVar17 = pcVar17 + 1;
          bVar5 = *pcVar15 - 0x30;
          if (9 < bVar5) goto switchD_00100200_caseD_1;
          uVar13 = 0xffffffffffffffff;
        }
        cVar19 = pcVar17[1];
        pcVar15 = pcVar17 + 1;
      } while ((byte)(cVar19 - 0x30U) < 10);
      local_60 = local_60 - 1;
      if (local_60 < 0xfffffffffffffffe) {
        pcVar9->width_arg_index = local_60;
        pcVar15 = pcVar17 + 2;
        goto LAB_00100254;
      }
switchD_00100200_caseD_1:
      __ptr = a->arg;
      goto LAB_001004ac;
    }
LAB_00100238:
    pcVar9->width_arg_index = local_60;
    uVar10 = local_60 + 1;
    if (local_60 == 0xffffffffffffffff) goto switchD_00100200_caseD_1;
LAB_00100254:
    paVar21 = a->arg;
    __ptr = paVar21;
    if (local_60 < uVar23) {
LAB_001002e1:
      uVar13 = a->count;
      paVar21 = __ptr + uVar13;
      if (uVar13 <= local_60) {
        do {
          paVar7 = paVar21;
          uVar13 = uVar13 + 1;
          paVar7->type = TYPE_NONE;
          paVar21 = paVar7 + 1;
        } while (uVar13 <= local_60);
        a->count = uVar13;
        paVar7->type = TYPE_NONE;
      }
      aVar20 = __ptr[local_60].type;
      local_88 = uVar12;
      if (aVar20 != TYPE_NONE) {
        if (aVar20 != TYPE_INT) goto LAB_001004ac;
        goto LAB_00100a5c;
      }
      __ptr[local_60].type = TYPE_INT;
      cVar19 = *pcVar15;
      local_60 = uVar10;
      goto joined_r0x00100339;
    }
    if ((long)uVar23 < 0) goto LAB_0010060b;
    uVar23 = uVar23 * 2;
    if (uVar23 <= local_60) {
      uVar23 = local_60 + 1;
    }
    if (uVar23 >> 0x3b != 0) goto LAB_0010060b;
    sVar18 = uVar23 << 5;
    if (paVar1 != paVar21) {
      __ptr = (argument *)realloc(paVar21,sVar18);
      if (__ptr != (argument *)0x0) {
        paVar21 = paVar1;
        if (paVar1 == a->arg) goto LAB_00100b68;
        goto LAB_001002dd;
      }
      goto LAB_00100de2;
    }
    __ptr = (argument *)malloc(sVar18);
    if (__ptr != (argument *)0x0) {
LAB_00100b68:
      __ptr = (argument *)__memcpy_chk(__ptr,paVar21,a->count << 5,sVar18);
LAB_001002dd:
      a->arg = __ptr;
      goto LAB_001002e1;
    }
  }
  else {
    pcVar15 = format;
    if ((byte)(cVar19 - 0x30U) < 10) {
      pcVar9->width_start = format;
      uVar12 = local_88;
      if ((byte)(*format - 0x30U) < 10) {
        do {
          pcVar17 = pcVar15 + 1;
          pcVar15 = pcVar15 + 1;
        } while ((byte)(*pcVar17 - 0x30U) < 10);
        uVar12 = (long)pcVar15 - (long)format;
        if ((ulong)((long)pcVar15 - (long)format) <= local_88) {
          uVar12 = local_88;
        }
      }
      local_88 = uVar12;
      pcVar9->width_end = pcVar15;
LAB_00100a5c:
      cVar19 = *pcVar15;
      local_60 = uVar10;
    }
joined_r0x00100339:
    uVar10 = local_78;
    if (cVar19 == '.') {
      if (pcVar15[1] != '*') {
        pcVar9->precision_start = pcVar15;
        pcVar17 = pcVar15 + 1;
        if ((byte)(pcVar15[1] - 0x30U) < 10) {
          do {
            pcVar3 = pcVar17 + 1;
            pcVar17 = pcVar17 + 1;
          } while ((byte)(*pcVar3 - 0x30U) < 10);
          uVar10 = (long)pcVar17 - (long)pcVar15;
          pcVar15 = pcVar17;
        }
        else {
          uVar10 = 1;
          pcVar15 = pcVar17;
        }
        pcVar9->precision_end = pcVar15;
        cVar19 = *pcVar15;
        if (uVar10 <= local_78) {
          uVar10 = local_78;
        }
        goto LAB_00100153;
      }
      pcVar17 = pcVar15 + 2;
      pcVar9->precision_start = pcVar15;
      pcVar9->precision_end = pcVar17;
      cVar19 = pcVar15[2];
      uVar10 = 2;
      if (1 < local_78) {
        uVar10 = local_78;
      }
      pcVar15 = pcVar17;
      uVar12 = local_60;
      if ((byte)(cVar19 - 0x30U) < 10) {
        do {
          pcVar3 = pcVar15 + 1;
          pcVar15 = pcVar15 + 1;
        } while ((byte)(*pcVar3 - 0x30U) < 10);
        if (*pcVar3 != '$') goto LAB_0010037d;
        uVar13 = 0;
        do {
          pcVar15 = pcVar17;
          bVar5 = cVar19 - 0x30;
          if (uVar13 < 0x199999999999999a) {
            uVar16 = uVar13 * 10;
          }
          else {
            uVar16 = 0xffffffffffffffff;
          }
          while (uVar13 = uVar16 + (long)(char)bVar5, CARRY8(uVar16,(long)(char)bVar5)) {
            pcVar17 = pcVar15 + 1;
            pcVar15 = pcVar15 + 1;
            bVar5 = *pcVar17 - 0x30;
            if (9 < bVar5) goto switchD_00100200_caseD_1;
            uVar16 = 0xffffffffffffffff;
          }
          cVar19 = pcVar15[1];
          pcVar17 = pcVar15 + 1;
        } while ((byte)(cVar19 - 0x30U) < 10);
        uVar13 = uVar13 - 1;
        if (0xfffffffffffffffd < uVar13) goto switchD_00100200_caseD_1;
        pcVar9->precision_arg_index = uVar13;
        pcVar15 = pcVar15 + 2;
      }
      else {
LAB_0010037d:
        uVar13 = pcVar9->precision_arg_index;
        pcVar15 = pcVar17;
        if (pcVar9->precision_arg_index == 0xffffffffffffffff) {
          pcVar9->precision_arg_index = local_60;
          uVar12 = local_60 + 1;
          uVar13 = local_60;
          if (local_60 == 0xffffffffffffffff) goto switchD_00100200_caseD_1;
        }
      }
      paVar21 = a->arg;
      __ptr = paVar21;
      if (uVar13 < uVar23) {
LAB_00100421:
        uVar16 = a->count;
        paVar21 = __ptr + uVar16;
        if (uVar16 <= uVar13) {
          do {
            paVar7 = paVar21;
            uVar16 = uVar16 + 1;
            paVar7->type = TYPE_NONE;
            paVar21 = paVar7 + 1;
          } while (uVar16 <= uVar13);
          a->count = uVar16;
          paVar7->type = TYPE_NONE;
        }
        aVar20 = __ptr[uVar13].type;
        local_60 = uVar12;
        if (aVar20 == TYPE_NONE) {
          __ptr[uVar13].type = TYPE_INT;
          cVar19 = *pcVar15;
        }
        else {
          if (aVar20 != TYPE_INT) goto LAB_001004ac;
          cVar19 = *pcVar15;
        }
        goto LAB_00100153;
      }
      if (-1 < (long)uVar23) {
        uVar23 = uVar23 * 2;
        if (uVar23 <= uVar13) {
          uVar23 = uVar13 + 1;
        }
        if (uVar23 >> 0x3b == 0) {
          sVar18 = uVar23 << 5;
          if (paVar1 == paVar21) {
            __ptr = (argument *)malloc(sVar18);
            if (__ptr == (argument *)0x0) goto LAB_0010061a;
LAB_00100d00:
            __ptr = (argument *)__memcpy_chk(__ptr,paVar21,a->count << 5,sVar18);
          }
          else {
            __ptr = (argument *)realloc(paVar21,sVar18);
            if (__ptr == (argument *)0x0) goto LAB_00100de2;
            paVar21 = paVar1;
            if (paVar1 == a->arg) goto LAB_00100d00;
          }
          a->arg = __ptr;
          goto LAB_00100421;
        }
      }
      goto LAB_0010060b;
    }
LAB_00100153:
    local_78 = uVar10;
    switch(cVar19) {
    case 'L':
      cVar19 = pcVar15[1];
      aVar11 = TYPE_LONGDOUBLE;
      pcVar15 = pcVar15 + 1;
      aVar20 = TYPE_ULONGLONGINT;
      aVar14 = TYPE_LONGLONGINT;
      break;
    default:
      aVar11 = TYPE_DOUBLE;
      aVar20 = TYPE_UINT;
      aVar14 = TYPE_INT;
      break;
    case 'Z':
    case 'j':
    case 't':
    case 'z':
      cVar19 = pcVar15[1];
      pcVar15 = pcVar15 + 1;
      aVar11 = TYPE_DOUBLE;
      aVar20 = TYPE_ULONGINT;
      aVar14 = TYPE_LONGINT;
      break;
    case 'h':
      cVar19 = pcVar15[1];
      if (cVar19 == 'h') {
        cVar19 = pcVar15[2];
        aVar11 = TYPE_DOUBLE;
        pcVar15 = pcVar15 + 2;
        aVar20 = TYPE_UCHAR;
        aVar14 = TYPE_SCHAR;
      }
      else {
        pcVar15 = pcVar15 + 1;
        aVar11 = TYPE_DOUBLE;
        aVar20 = TYPE_USHORT;
        aVar14 = TYPE_SHORT;
      }
      break;
    case 'l':
      cVar19 = pcVar15[1];
      if (cVar19 == 'l') {
        cVar19 = pcVar15[2];
        aVar11 = TYPE_LONGDOUBLE;
        pcVar15 = pcVar15 + 2;
        aVar20 = TYPE_ULONGLONGINT;
        aVar14 = TYPE_LONGLONGINT;
      }
      else {
        pcVar15 = pcVar15 + 1;
        aVar11 = TYPE_DOUBLE;
        aVar20 = TYPE_ULONGINT;
        aVar14 = TYPE_LONGINT;
      }
      break;
    case 'w':
      cVar19 = pcVar15[1];
      if (cVar19 == 'f') {
        cVar19 = pcVar15[2];
        if (cVar19 == '8') {
          cVar19 = pcVar15[3];
          aVar11 = TYPE_DOUBLE;
          pcVar15 = pcVar15 + 3;
          aVar20 = TYPE_UINT_FAST8_T;
          aVar14 = TYPE_INT_FAST8_T;
        }
        else {
          if (cVar19 != '1') {
            if (cVar19 == '3') {
              if (pcVar15[3] == '2') {
                cVar19 = pcVar15[4];
                aVar11 = TYPE_DOUBLE;
                pcVar15 = pcVar15 + 4;
                aVar20 = TYPE_UINT_FAST32_T;
                aVar14 = TYPE_INT_FAST32_T;
                break;
              }
            }
            else if ((cVar19 == '6') && (pcVar15[3] == '4')) {
              cVar19 = pcVar15[4];
              aVar11 = TYPE_DOUBLE;
              pcVar15 = pcVar15 + 4;
              aVar20 = TYPE_UINT_FAST64_T;
              aVar14 = TYPE_INT_FAST64_T;
              break;
            }
            goto switchD_00100200_caseD_1;
          }
          if (pcVar15[3] != '6') goto switchD_00100200_caseD_1;
          cVar19 = pcVar15[4];
          aVar11 = TYPE_DOUBLE;
          pcVar15 = pcVar15 + 4;
          aVar20 = TYPE_UINT_FAST16_T;
          aVar14 = TYPE_INT_FAST16_T;
        }
      }
      else if (cVar19 == '8') {
        cVar19 = pcVar15[2];
        aVar11 = TYPE_DOUBLE;
        pcVar15 = pcVar15 + 2;
        aVar20 = TYPE_UINT8_T;
        aVar14 = TYPE_INT8_T;
      }
      else {
        if (cVar19 != '1') {
          if (cVar19 == '3') {
            if (pcVar15[2] == '2') {
              cVar19 = pcVar15[3];
              aVar11 = TYPE_DOUBLE;
              pcVar15 = pcVar15 + 3;
              aVar20 = TYPE_UINT32_T;
              aVar14 = TYPE_INT32_T;
              break;
            }
          }
          else if ((cVar19 == '6') && (pcVar15[2] == '4')) {
            cVar19 = pcVar15[3];
            aVar11 = TYPE_DOUBLE;
            pcVar15 = pcVar15 + 3;
            aVar20 = TYPE_UINT64_T;
            aVar14 = TYPE_INT64_T;
            break;
          }
          goto switchD_00100200_caseD_1;
        }
        if (pcVar15[2] != '6') goto switchD_00100200_caseD_1;
        cVar19 = pcVar15[3];
        aVar11 = TYPE_DOUBLE;
        pcVar15 = pcVar15 + 3;
        aVar20 = TYPE_UINT16_T;
        aVar14 = TYPE_INT16_T;
      }
    }
    if (0x53 < (byte)(cVar19 - 0x25U)) goto switchD_00100200_caseD_1;
    format = pcVar15 + 1;
    switch(cVar19 - 0x25U) {
    case 0:
      goto switchD_00100200_caseD_0;
    default:
      goto switchD_00100200_caseD_1;
    case 0x1c:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x3c:
    case 0x40:
    case 0x41:
    case 0x42:
      aVar20 = aVar11;
      break;
    case 0x1d:
    case 0x33:
    case 0x3d:
    case 0x4a:
    case 0x50:
    case 0x53:
      break;
    case 0x1e:
      aVar20 = TYPE_WIDE_CHAR;
      cVar19 = 'c';
      break;
    case 0x2e:
      aVar20 = TYPE_WIDE_STRING;
      cVar19 = 's';
      goto joined_r0x0010091a;
    case 0x3e:
      aVar20 = ((aVar14 - TYPE_LONGINT & 0xfffffffd) == 0) + TYPE_CHAR;
      break;
    case 0x3f:
    case 0x44:
      aVar20 = aVar14;
      break;
    case 0x4b:
      aVar20 = TYPE_POINTER;
      break;
    case 0x4e:
      aVar20 = ((aVar14 - TYPE_LONGINT & 0xfffffffd) == 0) + TYPE_STRING;
    }
joined_r0x0010091a:
    if (sVar22 == 0xffffffffffffffff) {
      pcVar9->arg_index = local_60;
      bVar24 = local_60 == 0xffffffffffffffff;
      sVar22 = local_60;
      local_60 = local_60 + 1;
      if (bVar24) goto switchD_00100200_caseD_1;
    }
    else {
      pcVar9->arg_index = sVar22;
    }
    paVar21 = a->arg;
    __ptr = paVar21;
    if (sVar22 < uVar23) {
LAB_0010058a:
      uVar10 = a->count;
      paVar21 = __ptr + uVar10;
      if (uVar10 <= sVar22) {
        do {
          paVar7 = paVar21;
          uVar10 = uVar10 + 1;
          paVar7->type = TYPE_NONE;
          paVar21 = paVar7 + 1;
        } while (uVar10 <= sVar22);
        a->count = uVar10;
        paVar7->type = TYPE_NONE;
      }
      aVar11 = __ptr[sVar22].type;
      if (aVar11 == TYPE_NONE) {
        __ptr[sVar22].type = aVar20;
      }
      else if (aVar11 != aVar20) {
LAB_001004ac:
        if (paVar1 != __ptr) {
          free(__ptr);
        }
        if (pcVar2 != d->dir) {
          free(d->dir);
        }
        piVar8 = __errno_location();
        *piVar8 = 0x16;
        return L'\xffffffff';
      }
switchD_00100200_caseD_0:
      pcVar9->conversion = cVar19;
      sVar22 = d->count;
      pcVar9->dir_end = format;
      uVar10 = sVar22 + 1;
      d->count = uVar10;
      if (uVar10 < local_80) {
        pcVar9 = d->dir;
        goto LAB_0010007b;
      }
      if (((long)local_80 < 0) || (0x2e8ba2e8ba2e8ba < local_80 * 2)) {
LAB_00100de2:
        paVar21 = a->arg;
        goto LAB_0010060b;
      }
      __ptr_00 = d->dir;
      sVar18 = local_80 * 0xb0;
      if (pcVar2 != __ptr_00) {
        sVar4 = 1;
        if (sVar18 != 0) {
          sVar4 = sVar18;
        }
        sVar18 = sVar4;
        pcVar9 = (char_directive *)realloc(__ptr_00,sVar18);
        if (pcVar9 == (char_directive *)0x0) goto LAB_00100de2;
        __ptr_00 = d->dir;
        if (pcVar2 != __ptr_00) goto LAB_001006e3;
        uVar10 = d->count;
LAB_0010078b:
        pcVar9 = (char_directive *)__memcpy_chk(pcVar9,__ptr_00,uVar10 * 0x58,sVar18);
LAB_001006e3:
        d->dir = pcVar9;
        uVar10 = d->count;
        local_80 = local_80 * 2;
        goto LAB_0010007b;
      }
      pcVar9 = (char_directive *)malloc(sVar18);
      if (pcVar9 != (char_directive *)0x0) goto LAB_0010078b;
      paVar21 = a->arg;
      if (paVar1 == paVar21) goto LAB_0010062a;
    }
    else {
      if (-1 < (long)uVar23) {
        uVar23 = uVar23 * 2;
        if (uVar23 <= sVar22) {
          uVar23 = sVar22 + 1;
        }
        if (uVar23 >> 0x3b == 0) {
          sVar18 = uVar23 << 5;
          if (paVar1 == paVar21) {
            __ptr = (argument *)malloc(sVar18);
            if (__ptr == (argument *)0x0) goto LAB_0010061a;
LAB_00100a95:
            __ptr = (argument *)__memcpy_chk(__ptr,paVar21,a->count << 5,sVar18);
LAB_00100586:
            a->arg = __ptr;
            goto LAB_0010058a;
          }
          __ptr = (argument *)realloc(paVar21,sVar18);
          if (__ptr != (argument *)0x0) {
            paVar21 = paVar1;
            if (paVar1 == a->arg) goto LAB_00100a95;
            goto LAB_00100586;
          }
          goto LAB_00100de2;
        }
      }
LAB_0010060b:
      if (paVar1 == paVar21) goto LAB_0010061a;
    }
    free(paVar21);
  }
LAB_0010061a:
  if (pcVar2 != d->dir) {
    free(d->dir);
  }
LAB_0010062a:
  piVar8 = __errno_location();
  *piVar8 = 0xc;
  return L'\xffffffff';
}


