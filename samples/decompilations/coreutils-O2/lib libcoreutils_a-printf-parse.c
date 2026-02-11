
undefined8 printf_parse(char *param_1,ulong *param_2,ulong *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  char *pcVar3;
  size_t sVar4;
  byte bVar5;
  uint uVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  int *piVar10;
  ulong *puVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  int iVar15;
  char *pcVar16;
  ulong uVar17;
  char *pcVar18;
  size_t sVar19;
  char cVar20;
  int iVar21;
  ulong *puVar22;
  ulong uVar23;
  ulong uVar24;
  bool bVar25;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  ulong local_60;
  
  puVar1 = param_3 + 2;
  uVar12 = 0;
  uVar24 = 7;
  local_60 = 0;
  puVar2 = param_2 + 4;
  *param_2 = 0;
  param_2[1] = (ulong)puVar2;
  *param_3 = 0;
  param_3[1] = (ulong)puVar1;
  local_78 = 0;
  local_88 = 0;
  local_80 = 7;
  puVar11 = puVar2;
LAB_0010007b:
  do {
    pcVar16 = param_1;
    if (*pcVar16 == '\0') {
      puVar11[uVar12 * 0xb] = (ulong)pcVar16;
      param_2[2] = local_88;
      param_2[3] = local_78;
      return 0;
    }
    param_1 = pcVar16 + 1;
  } while (*pcVar16 != '%');
  uVar23 = 0xffffffffffffffff;
  puVar11 = puVar11 + uVar12 * 0xb;
  *puVar11 = (ulong)pcVar16;
  *(undefined4 *)(puVar11 + 2) = 0;
  puVar11[5] = 0xffffffffffffffff;
  puVar11[8] = 0xffffffffffffffff;
  puVar11[10] = 0xffffffffffffffff;
  *(undefined1 (*) [16])(puVar11 + 3) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar11 + 6) = (undefined1  [16])0x0;
  cVar20 = pcVar16[1];
  pcVar16 = param_1;
  if (9 < (byte)(cVar20 - 0x30U)) {
LAB_00100118:
    do {
      pcVar16 = param_1 + 1;
      switch(cVar20) {
      case ' ':
        uVar6 = (uint)puVar11[2] | 8;
        break;
      default:
        goto switchD_00100129_caseD_21;
      case '#':
        uVar6 = (uint)puVar11[2] | 0x10;
        break;
      case '\'':
        uVar6 = (uint)puVar11[2] | 1;
        break;
      case '+':
        uVar6 = (uint)puVar11[2] | 4;
        break;
      case '-':
        uVar6 = (uint)puVar11[2] | 2;
        break;
      case '0':
        uVar6 = (uint)puVar11[2] | 0x20;
        break;
      case 'I':
        uVar6 = (uint)puVar11[2] | 0x40;
      }
      *(uint *)(puVar11 + 2) = uVar6;
      cVar20 = *pcVar16;
      param_1 = pcVar16;
    } while( true );
  }
  do {
    pcVar18 = pcVar16 + 1;
    pcVar16 = pcVar16 + 1;
  } while ((byte)(*pcVar18 - 0x30U) < 10);
  uVar23 = 0xffffffffffffffff;
  if (*pcVar18 != '$') goto LAB_00100118;
  uVar23 = 0;
  do {
    bVar5 = cVar20 - 0x30;
    pcVar16 = param_1;
    if (uVar23 < 0x199999999999999a) {
      uVar12 = uVar23 * 10;
    }
    else {
      uVar12 = 0xffffffffffffffff;
    }
    while (uVar23 = uVar12 + (long)(char)bVar5, CARRY8(uVar12,(long)(char)bVar5)) {
      bVar5 = pcVar16[1] - 0x30;
      if (9 < bVar5) goto switchD_00100200_caseD_1;
      pcVar16 = pcVar16 + 1;
      uVar12 = 0xffffffffffffffff;
    }
    cVar20 = pcVar16[1];
    param_1 = pcVar16 + 1;
  } while ((byte)(cVar20 - 0x30U) < 10);
  uVar23 = uVar23 - 1;
  if (uVar23 < 0xfffffffffffffffe) {
    cVar20 = pcVar16[2];
    param_1 = pcVar16 + 2;
    goto LAB_00100118;
  }
  goto switchD_00100200_caseD_1;
switchD_00100129_caseD_21:
  uVar12 = local_60;
  if (cVar20 == '*') {
    puVar11[3] = (ulong)param_1;
    puVar11[4] = (ulong)pcVar16;
    cVar20 = param_1[1];
    uVar7 = 1;
    if (local_88 != 0) {
      uVar7 = local_88;
    }
    pcVar18 = pcVar16;
    if ((byte)(cVar20 - 0x30U) < 10) {
      do {
        pcVar3 = pcVar18 + 1;
        pcVar18 = pcVar18 + 1;
      } while ((byte)(*pcVar3 - 0x30U) < 10);
      if (*pcVar3 != '$') goto LAB_00100238;
      local_60 = 0;
      do {
        pcVar18 = pcVar16;
        bVar5 = cVar20 - 0x30;
        if (local_60 < 0x199999999999999a) {
          uVar14 = local_60 * 10;
        }
        else {
          uVar14 = 0xffffffffffffffff;
        }
        while (local_60 = (long)(char)bVar5 + uVar14, CARRY8((long)(char)bVar5,uVar14)) {
          pcVar16 = pcVar18 + 1;
          pcVar18 = pcVar18 + 1;
          bVar5 = *pcVar16 - 0x30;
          if (9 < bVar5) goto switchD_00100200_caseD_1;
          uVar14 = 0xffffffffffffffff;
        }
        cVar20 = pcVar18[1];
        pcVar16 = pcVar18 + 1;
      } while ((byte)(cVar20 - 0x30U) < 10);
      local_60 = local_60 - 1;
      if (local_60 < 0xfffffffffffffffe) {
        puVar11[5] = local_60;
        pcVar16 = pcVar18 + 2;
        goto LAB_00100254;
      }
switchD_00100200_caseD_1:
      puVar8 = (ulong *)param_3[1];
      goto LAB_001004ac;
    }
LAB_00100238:
    puVar11[5] = local_60;
    uVar12 = local_60 + 1;
    if (local_60 == 0xffffffffffffffff) goto switchD_00100200_caseD_1;
LAB_00100254:
    puVar22 = (ulong *)param_3[1];
    puVar8 = puVar22;
    if (local_60 < uVar24) {
LAB_001002e1:
      uVar14 = *param_3;
      puVar22 = puVar8 + uVar14 * 4;
      if (uVar14 <= local_60) {
        do {
          puVar9 = puVar22;
          uVar14 = uVar14 + 1;
          *(undefined4 *)puVar9 = 0;
          puVar22 = puVar9 + 4;
        } while (uVar14 <= local_60);
        *param_3 = uVar14;
        *(undefined4 *)puVar9 = 0;
      }
      iVar21 = (int)puVar8[local_60 * 4];
      local_88 = uVar7;
      if (iVar21 != 0) {
        if (iVar21 != 5) goto LAB_001004ac;
        goto LAB_00100a5c;
      }
      *(int *)(puVar8 + local_60 * 4) = 5;
      cVar20 = *pcVar16;
      local_60 = uVar12;
      goto joined_r0x00100339;
    }
    if ((long)uVar24 < 0) goto LAB_0010060b;
    uVar24 = uVar24 * 2;
    if (uVar24 <= local_60) {
      uVar24 = local_60 + 1;
    }
    if (uVar24 >> 0x3b != 0) goto LAB_0010060b;
    sVar19 = uVar24 << 5;
    if (puVar1 != puVar22) {
      puVar8 = (ulong *)realloc(puVar22,sVar19);
      if (puVar8 != (ulong *)0x0) {
        puVar22 = puVar1;
        if (puVar1 == (ulong *)param_3[1]) goto LAB_00100b68;
        goto LAB_001002dd;
      }
      goto LAB_00100de2;
    }
    puVar8 = (ulong *)malloc(sVar19);
    if (puVar8 != (ulong *)0x0) {
LAB_00100b68:
      puVar8 = (ulong *)__memcpy_chk(puVar8,puVar22,*param_3 << 5,sVar19);
LAB_001002dd:
      param_3[1] = (ulong)puVar8;
      goto LAB_001002e1;
    }
  }
  else {
    pcVar16 = param_1;
    if ((byte)(cVar20 - 0x30U) < 10) {
      puVar11[3] = (ulong)param_1;
      uVar7 = local_88;
      if ((byte)(*param_1 - 0x30U) < 10) {
        do {
          pcVar18 = pcVar16 + 1;
          pcVar16 = pcVar16 + 1;
        } while ((byte)(*pcVar18 - 0x30U) < 10);
        uVar7 = (long)pcVar16 - (long)param_1;
        if ((ulong)((long)pcVar16 - (long)param_1) <= local_88) {
          uVar7 = local_88;
        }
      }
      local_88 = uVar7;
      puVar11[4] = (ulong)pcVar16;
LAB_00100a5c:
      cVar20 = *pcVar16;
      local_60 = uVar12;
    }
joined_r0x00100339:
    uVar12 = local_78;
    if (cVar20 == '.') {
      if (pcVar16[1] != '*') {
        puVar11[6] = (ulong)pcVar16;
        pcVar18 = pcVar16 + 1;
        if ((byte)(pcVar16[1] - 0x30U) < 10) {
          do {
            pcVar3 = pcVar18 + 1;
            pcVar18 = pcVar18 + 1;
          } while ((byte)(*pcVar3 - 0x30U) < 10);
          uVar12 = (long)pcVar18 - (long)pcVar16;
          pcVar16 = pcVar18;
        }
        else {
          uVar12 = 1;
          pcVar16 = pcVar18;
        }
        puVar11[7] = (ulong)pcVar16;
        cVar20 = *pcVar16;
        if (uVar12 <= local_78) {
          uVar12 = local_78;
        }
        goto LAB_00100153;
      }
      pcVar18 = pcVar16 + 2;
      puVar11[6] = (ulong)pcVar16;
      puVar11[7] = (ulong)pcVar18;
      cVar20 = pcVar16[2];
      uVar12 = 2;
      if (1 < local_78) {
        uVar12 = local_78;
      }
      pcVar16 = pcVar18;
      uVar7 = local_60;
      if ((byte)(cVar20 - 0x30U) < 10) {
        do {
          pcVar3 = pcVar16 + 1;
          pcVar16 = pcVar16 + 1;
        } while ((byte)(*pcVar3 - 0x30U) < 10);
        if (*pcVar3 != '$') goto LAB_0010037d;
        uVar14 = 0;
        do {
          pcVar16 = pcVar18;
          bVar5 = cVar20 - 0x30;
          if (uVar14 < 0x199999999999999a) {
            uVar17 = uVar14 * 10;
          }
          else {
            uVar17 = 0xffffffffffffffff;
          }
          while (uVar14 = uVar17 + (long)(char)bVar5, CARRY8(uVar17,(long)(char)bVar5)) {
            pcVar18 = pcVar16 + 1;
            pcVar16 = pcVar16 + 1;
            bVar5 = *pcVar18 - 0x30;
            if (9 < bVar5) goto switchD_00100200_caseD_1;
            uVar17 = 0xffffffffffffffff;
          }
          cVar20 = pcVar16[1];
          pcVar18 = pcVar16 + 1;
        } while ((byte)(cVar20 - 0x30U) < 10);
        uVar14 = uVar14 - 1;
        if (0xfffffffffffffffd < uVar14) goto switchD_00100200_caseD_1;
        puVar11[8] = uVar14;
        pcVar16 = pcVar16 + 2;
      }
      else {
LAB_0010037d:
        uVar14 = puVar11[8];
        pcVar16 = pcVar18;
        if (puVar11[8] == 0xffffffffffffffff) {
          puVar11[8] = local_60;
          uVar7 = local_60 + 1;
          uVar14 = local_60;
          if (local_60 == 0xffffffffffffffff) goto switchD_00100200_caseD_1;
        }
      }
      puVar22 = (ulong *)param_3[1];
      puVar8 = puVar22;
      if (uVar14 < uVar24) {
LAB_00100421:
        uVar17 = *param_3;
        puVar22 = puVar8 + uVar17 * 4;
        if (uVar17 <= uVar14) {
          do {
            puVar9 = puVar22;
            uVar17 = uVar17 + 1;
            *(undefined4 *)puVar9 = 0;
            puVar22 = puVar9 + 4;
          } while (uVar17 <= uVar14);
          *param_3 = uVar17;
          *(undefined4 *)puVar9 = 0;
        }
        iVar21 = (int)puVar8[uVar14 * 4];
        local_60 = uVar7;
        if (iVar21 == 0) {
          *(int *)(puVar8 + uVar14 * 4) = 5;
          cVar20 = *pcVar16;
        }
        else {
          if (iVar21 != 5) goto LAB_001004ac;
          cVar20 = *pcVar16;
        }
        goto LAB_00100153;
      }
      if (-1 < (long)uVar24) {
        uVar24 = uVar24 * 2;
        if (uVar24 <= uVar14) {
          uVar24 = uVar14 + 1;
        }
        if (uVar24 >> 0x3b == 0) {
          sVar19 = uVar24 << 5;
          if (puVar1 == puVar22) {
            puVar8 = (ulong *)malloc(sVar19);
            if (puVar8 == (ulong *)0x0) goto LAB_0010061a;
LAB_00100d00:
            puVar8 = (ulong *)__memcpy_chk(puVar8,puVar22,*param_3 << 5,sVar19);
          }
          else {
            puVar8 = (ulong *)realloc(puVar22,sVar19);
            if (puVar8 == (ulong *)0x0) goto LAB_00100de2;
            puVar22 = puVar1;
            if (puVar1 == (ulong *)param_3[1]) goto LAB_00100d00;
          }
          param_3[1] = (ulong)puVar8;
          goto LAB_00100421;
        }
      }
      goto LAB_0010060b;
    }
LAB_00100153:
    local_78 = uVar12;
    switch(cVar20) {
    case 'L':
      cVar20 = pcVar16[1];
      iVar13 = 0x1c;
      pcVar16 = pcVar16 + 1;
      iVar21 = 10;
      iVar15 = 9;
      break;
    default:
      iVar13 = 0x1b;
      iVar21 = 6;
      iVar15 = 5;
      break;
    case 'Z':
    case 'j':
    case 't':
    case 'z':
      cVar20 = pcVar16[1];
      pcVar16 = pcVar16 + 1;
      iVar13 = 0x1b;
      iVar21 = 8;
      iVar15 = 7;
      break;
    case 'h':
      cVar20 = pcVar16[1];
      if (cVar20 == 'h') {
        cVar20 = pcVar16[2];
        iVar13 = 0x1b;
        pcVar16 = pcVar16 + 2;
        iVar21 = 2;
        iVar15 = 1;
      }
      else {
        pcVar16 = pcVar16 + 1;
        iVar13 = 0x1b;
        iVar21 = 4;
        iVar15 = 3;
      }
      break;
    case 'l':
      cVar20 = pcVar16[1];
      if (cVar20 == 'l') {
        cVar20 = pcVar16[2];
        iVar13 = 0x1c;
        pcVar16 = pcVar16 + 2;
        iVar21 = 10;
        iVar15 = 9;
      }
      else {
        pcVar16 = pcVar16 + 1;
        iVar13 = 0x1b;
        iVar21 = 8;
        iVar15 = 7;
      }
      break;
    case 'w':
      cVar20 = pcVar16[1];
      if (cVar20 == 'f') {
        cVar20 = pcVar16[2];
        if (cVar20 == '8') {
          cVar20 = pcVar16[3];
          iVar13 = 0x1b;
          pcVar16 = pcVar16 + 3;
          iVar21 = 0x14;
          iVar15 = 0x13;
        }
        else {
          if (cVar20 != '1') {
            if (cVar20 == '3') {
              if (pcVar16[3] == '2') {
                cVar20 = pcVar16[4];
                iVar13 = 0x1b;
                pcVar16 = pcVar16 + 4;
                iVar21 = 0x18;
                iVar15 = 0x17;
                break;
              }
            }
            else if ((cVar20 == '6') && (pcVar16[3] == '4')) {
              cVar20 = pcVar16[4];
              iVar13 = 0x1b;
              pcVar16 = pcVar16 + 4;
              iVar21 = 0x1a;
              iVar15 = 0x19;
              break;
            }
            goto switchD_00100200_caseD_1;
          }
          if (pcVar16[3] != '6') goto switchD_00100200_caseD_1;
          cVar20 = pcVar16[4];
          iVar13 = 0x1b;
          pcVar16 = pcVar16 + 4;
          iVar21 = 0x16;
          iVar15 = 0x15;
        }
      }
      else if (cVar20 == '8') {
        cVar20 = pcVar16[2];
        iVar13 = 0x1b;
        pcVar16 = pcVar16 + 2;
        iVar21 = 0xc;
        iVar15 = 0xb;
      }
      else {
        if (cVar20 != '1') {
          if (cVar20 == '3') {
            if (pcVar16[2] == '2') {
              cVar20 = pcVar16[3];
              iVar13 = 0x1b;
              pcVar16 = pcVar16 + 3;
              iVar21 = 0x10;
              iVar15 = 0xf;
              break;
            }
          }
          else if ((cVar20 == '6') && (pcVar16[2] == '4')) {
            cVar20 = pcVar16[3];
            iVar13 = 0x1b;
            pcVar16 = pcVar16 + 3;
            iVar21 = 0x12;
            iVar15 = 0x11;
            break;
          }
          goto switchD_00100200_caseD_1;
        }
        if (pcVar16[2] != '6') goto switchD_00100200_caseD_1;
        cVar20 = pcVar16[3];
        iVar13 = 0x1b;
        pcVar16 = pcVar16 + 3;
        iVar21 = 0xe;
        iVar15 = 0xd;
      }
    }
    if (0x53 < (byte)(cVar20 - 0x25U)) goto switchD_00100200_caseD_1;
    param_1 = pcVar16 + 1;
    switch(cVar20 - 0x25U) {
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
      iVar21 = iVar13;
      break;
    case 0x1d:
    case 0x33:
    case 0x3d:
    case 0x4a:
    case 0x50:
    case 0x53:
      break;
    case 0x1e:
      iVar21 = 0x1e;
      cVar20 = 'c';
      break;
    case 0x2e:
      iVar21 = 0x20;
      cVar20 = 's';
      goto joined_r0x0010091a;
    case 0x3e:
      iVar21 = ((iVar15 - 7U & 0xfffffffd) == 0) + 0x1d;
      break;
    case 0x3f:
    case 0x44:
      iVar21 = iVar15;
      break;
    case 0x4b:
      iVar21 = 0x21;
      break;
    case 0x4e:
      iVar21 = ((iVar15 - 7U & 0xfffffffd) == 0) + 0x1f;
    }
joined_r0x0010091a:
    if (uVar23 == 0xffffffffffffffff) {
      puVar11[10] = local_60;
      bVar25 = local_60 == 0xffffffffffffffff;
      uVar23 = local_60;
      local_60 = local_60 + 1;
      if (bVar25) goto switchD_00100200_caseD_1;
    }
    else {
      puVar11[10] = uVar23;
    }
    puVar22 = (ulong *)param_3[1];
    puVar8 = puVar22;
    if (uVar23 < uVar24) {
LAB_0010058a:
      uVar12 = *param_3;
      puVar22 = puVar8 + uVar12 * 4;
      if (uVar12 <= uVar23) {
        do {
          puVar9 = puVar22;
          uVar12 = uVar12 + 1;
          *(undefined4 *)puVar9 = 0;
          puVar22 = puVar9 + 4;
        } while (uVar12 <= uVar23);
        *param_3 = uVar12;
        *(undefined4 *)puVar9 = 0;
      }
      iVar13 = (int)puVar8[uVar23 * 4];
      if (iVar13 == 0) {
        *(int *)(puVar8 + uVar23 * 4) = iVar21;
      }
      else if (iVar13 != iVar21) {
LAB_001004ac:
        if (puVar1 != puVar8) {
          free(puVar8);
        }
        if (puVar2 != (ulong *)param_2[1]) {
          free((ulong *)param_2[1]);
        }
        piVar10 = __errno_location();
        *piVar10 = 0x16;
        return 0xffffffff;
      }
switchD_00100200_caseD_0:
      *(char *)(puVar11 + 9) = cVar20;
      uVar12 = *param_2;
      puVar11[1] = (ulong)param_1;
      uVar12 = uVar12 + 1;
      *param_2 = uVar12;
      if (uVar12 < local_80) {
        puVar11 = (ulong *)param_2[1];
        goto LAB_0010007b;
      }
      if (((long)local_80 < 0) || (0x2e8ba2e8ba2e8ba < local_80 * 2)) {
LAB_00100de2:
        puVar22 = (ulong *)param_3[1];
        goto LAB_0010060b;
      }
      puVar8 = (ulong *)param_2[1];
      sVar19 = local_80 * 0xb0;
      if (puVar2 != puVar8) {
        sVar4 = 1;
        if (sVar19 != 0) {
          sVar4 = sVar19;
        }
        sVar19 = sVar4;
        puVar11 = (ulong *)realloc(puVar8,sVar19);
        if (puVar11 == (ulong *)0x0) goto LAB_00100de2;
        puVar8 = (ulong *)param_2[1];
        if (puVar2 != puVar8) goto LAB_001006e3;
        uVar12 = *param_2;
LAB_0010078b:
        puVar11 = (ulong *)__memcpy_chk(puVar11,puVar8,uVar12 * 0x58,sVar19);
LAB_001006e3:
        param_2[1] = (ulong)puVar11;
        uVar12 = *param_2;
        local_80 = local_80 * 2;
        goto LAB_0010007b;
      }
      puVar11 = (ulong *)malloc(sVar19);
      if (puVar11 != (ulong *)0x0) goto LAB_0010078b;
      puVar22 = (ulong *)param_3[1];
      if (puVar1 == puVar22) goto LAB_0010062a;
    }
    else {
      if (-1 < (long)uVar24) {
        uVar24 = uVar24 * 2;
        if (uVar24 <= uVar23) {
          uVar24 = uVar23 + 1;
        }
        if (uVar24 >> 0x3b == 0) {
          sVar19 = uVar24 << 5;
          if (puVar1 == puVar22) {
            puVar8 = (ulong *)malloc(sVar19);
            if (puVar8 == (ulong *)0x0) goto LAB_0010061a;
LAB_00100a95:
            puVar8 = (ulong *)__memcpy_chk(puVar8,puVar22,*param_3 << 5,sVar19);
LAB_00100586:
            param_3[1] = (ulong)puVar8;
            goto LAB_0010058a;
          }
          puVar8 = (ulong *)realloc(puVar22,sVar19);
          if (puVar8 != (ulong *)0x0) {
            puVar22 = puVar1;
            if (puVar1 == (ulong *)param_3[1]) goto LAB_00100a95;
            goto LAB_00100586;
          }
          goto LAB_00100de2;
        }
      }
LAB_0010060b:
      if (puVar1 == puVar22) goto LAB_0010061a;
    }
    free(puVar22);
  }
LAB_0010061a:
  if (puVar2 != (ulong *)param_2[1]) {
    free((ulong *)param_2[1]);
  }
LAB_0010062a:
  piVar10 = __errno_location();
  *piVar10 = 0xc;
  return 0xffffffff;
}


