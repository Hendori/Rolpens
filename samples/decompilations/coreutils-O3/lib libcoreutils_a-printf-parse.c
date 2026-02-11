
undefined8 printf_parse(char *param_1,ulong *param_2,ulong *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  char *pcVar3;
  size_t sVar4;
  uint uVar5;
  ulong *puVar6;
  ulong *puVar7;
  int *piVar8;
  ulong *puVar9;
  ulong uVar10;
  char cVar11;
  int iVar12;
  byte bVar13;
  int iVar14;
  char *pcVar15;
  ulong uVar16;
  ulong uVar17;
  char *pcVar18;
  ulong uVar19;
  size_t sVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  ulong *puVar24;
  ulong uVar25;
  ulong uVar26;
  bool bVar27;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  ulong local_60;
  
  puVar1 = param_3 + 2;
  uVar10 = 0;
  uVar26 = 7;
  local_60 = 0;
  puVar2 = param_2 + 4;
  *param_2 = 0;
  param_2[1] = (ulong)puVar2;
  *param_3 = 0;
  param_3[1] = (ulong)puVar1;
  local_78 = 0;
  local_88 = 0;
  local_80 = 7;
  puVar9 = puVar2;
LAB_0010007b:
  do {
    pcVar15 = param_1;
    if (*pcVar15 == '\0') {
      puVar9[uVar10 * 0xb] = (ulong)pcVar15;
      param_2[2] = local_88;
      param_2[3] = local_78;
      return 0;
    }
    param_1 = pcVar15 + 1;
  } while (*pcVar15 != '%');
  uVar25 = 0xffffffffffffffff;
  puVar9 = puVar9 + uVar10 * 0xb;
  *puVar9 = (ulong)pcVar15;
  *(undefined4 *)(puVar9 + 2) = 0;
  puVar9[5] = 0xffffffffffffffff;
  puVar9[8] = 0xffffffffffffffff;
  puVar9[10] = 0xffffffffffffffff;
  *(undefined1 (*) [16])(puVar9 + 3) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar9 + 6) = (undefined1  [16])0x0;
  cVar11 = pcVar15[1];
  pcVar15 = param_1;
  if (9 < (byte)(cVar11 - 0x30U)) {
LAB_00100118:
    do {
      pcVar15 = param_1 + 1;
      switch(cVar11) {
      case ' ':
        uVar5 = (uint)puVar9[2] | 8;
        break;
      default:
        goto switchD_00100129_caseD_21;
      case '#':
        uVar5 = (uint)puVar9[2] | 0x10;
        break;
      case '\'':
        uVar5 = (uint)puVar9[2] | 1;
        break;
      case '+':
        uVar5 = (uint)puVar9[2] | 4;
        break;
      case '-':
        uVar5 = (uint)puVar9[2] | 2;
        break;
      case '0':
        uVar5 = (uint)puVar9[2] | 0x20;
        break;
      case 'I':
        uVar5 = (uint)puVar9[2] | 0x40;
      }
      *(uint *)(puVar9 + 2) = uVar5;
      cVar11 = *pcVar15;
      param_1 = pcVar15;
    } while( true );
  }
  do {
    pcVar18 = pcVar15 + 1;
    pcVar15 = pcVar15 + 1;
  } while ((byte)(*pcVar18 - 0x30U) < 10);
  uVar25 = 0xffffffffffffffff;
  if (*pcVar18 != '$') goto LAB_00100118;
  uVar25 = 0;
  do {
    bVar13 = cVar11 - 0x30;
    pcVar15 = param_1;
    if (uVar25 < 0x199999999999999a) {
      uVar10 = uVar25 * 10;
    }
    else {
      uVar10 = 0xffffffffffffffff;
    }
    while (uVar25 = (long)(char)bVar13 + uVar10, CARRY8((long)(char)bVar13,uVar10)) {
      bVar13 = pcVar15[1] - 0x30;
      if (9 < bVar13) goto switchD_0010020a_caseD_1004bc;
      pcVar15 = pcVar15 + 1;
      uVar10 = 0xffffffffffffffff;
    }
    cVar11 = pcVar15[1];
    param_1 = pcVar15 + 1;
  } while ((byte)(cVar11 - 0x30U) < 10);
  uVar25 = uVar25 - 1;
  if (uVar25 < 0xfffffffffffffffe) {
    cVar11 = pcVar15[2];
    param_1 = pcVar15 + 2;
    goto LAB_00100118;
  }
  goto switchD_0010020a_caseD_1004bc;
switchD_00100129_caseD_21:
  if (cVar11 == '*') {
    puVar9[3] = (ulong)param_1;
    puVar9[4] = (ulong)pcVar15;
    cVar11 = param_1[1];
    uVar10 = 1;
    if (local_88 != 0) {
      uVar10 = local_88;
    }
    pcVar18 = pcVar15;
    if (9 < (byte)(cVar11 - 0x30U)) {
LAB_00100240:
      puVar9[5] = local_60;
      uVar16 = local_60 + 1;
      bVar27 = local_60 == 0xffffffffffffffff;
      uVar19 = local_60;
      local_60 = uVar16;
      if (bVar27) goto switchD_0010020a_caseD_1004bc;
LAB_0010025c:
      puVar24 = (ulong *)param_3[1];
      puVar6 = puVar24;
      if (uVar19 < uVar26) {
LAB_001002ef:
        uVar16 = *param_3;
        puVar24 = puVar6 + uVar16 * 4;
        if (uVar16 <= uVar19) {
          do {
            puVar7 = puVar24;
            uVar16 = uVar16 + 1;
            *(undefined4 *)puVar7 = 0;
            puVar24 = puVar7 + 4;
          } while (uVar16 <= uVar19);
          *param_3 = uVar16;
          *(undefined4 *)puVar7 = 0;
        }
        iVar23 = (int)puVar6[uVar19 * 4];
        local_88 = uVar10;
        if (iVar23 != 0) {
          if (iVar23 != 5) goto LAB_001004c0;
          goto LAB_00100a5c;
        }
        *(int *)(puVar6 + uVar19 * 4) = 5;
        cVar11 = *pcVar15;
        goto joined_r0x00100349;
      }
      if (((long)uVar26 < 0) ||
         (((uVar26 = uVar26 * 2, uVar26 <= uVar19 && (uVar26 = uVar16, uVar16 < uVar19)) ||
          (uVar26 >> 0x3b != 0)))) goto LAB_0010061b;
      sVar20 = uVar26 << 5;
      if (puVar1 != puVar24) {
        puVar6 = (ulong *)realloc(puVar24,sVar20);
        if (puVar6 != (ulong *)0x0) {
          puVar24 = puVar1;
          if (puVar1 == (ulong *)param_3[1]) goto LAB_00100b87;
          goto LAB_001002eb;
        }
        goto LAB_00100e10;
      }
      puVar6 = (ulong *)malloc(sVar20);
      if (puVar6 != (ulong *)0x0) {
LAB_00100b87:
        puVar6 = (ulong *)__memcpy_chk(puVar6,puVar24,*param_3 << 5,sVar20);
LAB_001002eb:
        param_3[1] = (ulong)puVar6;
        goto LAB_001002ef;
      }
      goto LAB_0010062a;
    }
    do {
      pcVar3 = pcVar18 + 1;
      pcVar18 = pcVar18 + 1;
    } while ((byte)(*pcVar3 - 0x30U) < 10);
    if (*pcVar3 != '$') goto LAB_00100240;
    uVar16 = 0;
    do {
      pcVar18 = pcVar15;
      bVar13 = cVar11 - 0x30;
      if (uVar16 < 0x199999999999999a) {
        uVar19 = uVar16 * 10;
      }
      else {
        uVar19 = 0xffffffffffffffff;
      }
      while (uVar16 = (long)(char)bVar13 + uVar19, CARRY8((long)(char)bVar13,uVar19)) {
        pcVar15 = pcVar18 + 1;
        pcVar18 = pcVar18 + 1;
        bVar13 = *pcVar15 - 0x30;
        if (9 < bVar13) goto switchD_0010020a_caseD_1004bc;
        uVar19 = 0xffffffffffffffff;
      }
      cVar11 = pcVar18[1];
      pcVar15 = pcVar18 + 1;
    } while ((byte)(cVar11 - 0x30U) < 10);
    uVar19 = uVar16 - 1;
    if (uVar19 < 0xfffffffffffffffe) {
      puVar9[5] = uVar19;
      pcVar15 = pcVar18 + 2;
      goto LAB_0010025c;
    }
    goto switchD_0010020a_caseD_1004bc;
  }
  pcVar15 = param_1;
  if ((byte)(cVar11 - 0x30U) < 10) {
    puVar9[3] = (ulong)param_1;
    uVar10 = local_88;
    if ((byte)(*param_1 - 0x30U) < 10) {
      do {
        pcVar18 = pcVar15 + 1;
        pcVar15 = pcVar15 + 1;
      } while ((byte)(*pcVar18 - 0x30U) < 10);
      uVar10 = (long)pcVar15 - (long)param_1;
      if ((ulong)((long)pcVar15 - (long)param_1) <= local_88) {
        uVar10 = local_88;
      }
    }
    local_88 = uVar10;
    puVar9[4] = (ulong)pcVar15;
LAB_00100a5c:
    cVar11 = *pcVar15;
  }
joined_r0x00100349:
  uVar10 = local_78;
  if (cVar11 == '.') {
    if (pcVar15[1] != '*') {
      puVar9[6] = (ulong)pcVar15;
      pcVar18 = pcVar15 + 1;
      if ((byte)(pcVar15[1] - 0x30U) < 10) {
        do {
          pcVar3 = pcVar18 + 1;
          pcVar18 = pcVar18 + 1;
        } while ((byte)(*pcVar3 - 0x30U) < 10);
        uVar10 = (long)pcVar18 - (long)pcVar15;
        pcVar15 = pcVar18;
      }
      else {
        uVar10 = 1;
        pcVar15 = pcVar18;
      }
      puVar9[7] = (ulong)pcVar15;
      cVar11 = *pcVar15;
      if (uVar10 <= local_78) {
        uVar10 = local_78;
      }
      goto LAB_00100153;
    }
    pcVar18 = pcVar15 + 2;
    puVar9[6] = (ulong)pcVar15;
    puVar9[7] = (ulong)pcVar18;
    cVar11 = pcVar15[2];
    uVar10 = 2;
    if (1 < local_78) {
      uVar10 = local_78;
    }
    pcVar15 = pcVar18;
    uVar16 = local_60;
    if ((byte)(cVar11 - 0x30U) < 10) {
      do {
        pcVar3 = pcVar15 + 1;
        pcVar15 = pcVar15 + 1;
      } while ((byte)(*pcVar3 - 0x30U) < 10);
      if (*pcVar3 != '$') goto LAB_0010038d;
      uVar19 = 0;
      do {
        pcVar15 = pcVar18;
        bVar13 = cVar11 - 0x30;
        if (uVar19 < 0x199999999999999a) {
          uVar17 = uVar19 * 10;
        }
        else {
          uVar17 = 0xffffffffffffffff;
        }
        while (uVar19 = (long)(char)bVar13 + uVar17, CARRY8((long)(char)bVar13,uVar17)) {
          pcVar18 = pcVar15 + 1;
          pcVar15 = pcVar15 + 1;
          bVar13 = *pcVar18 - 0x30;
          if (9 < bVar13) goto switchD_0010020a_caseD_1004bc;
          uVar17 = 0xffffffffffffffff;
        }
        cVar11 = pcVar15[1];
        pcVar18 = pcVar15 + 1;
      } while ((byte)(cVar11 - 0x30U) < 10);
      uVar19 = uVar19 - 1;
      if (0xfffffffffffffffd < uVar19) goto switchD_0010020a_caseD_1004bc;
      puVar9[8] = uVar19;
      pcVar15 = pcVar15 + 2;
    }
    else {
LAB_0010038d:
      uVar19 = puVar9[8];
      pcVar15 = pcVar18;
      if (puVar9[8] == 0xffffffffffffffff) {
        puVar9[8] = local_60;
        uVar16 = local_60 + 1;
        uVar19 = local_60;
        if (local_60 == 0xffffffffffffffff) goto switchD_0010020a_caseD_1004bc;
      }
    }
    puVar24 = (ulong *)param_3[1];
    puVar6 = puVar24;
    if (uVar19 < uVar26) {
LAB_00100431:
      uVar17 = *param_3;
      puVar24 = puVar6 + uVar17 * 4;
      if (uVar17 <= uVar19) {
        do {
          puVar7 = puVar24;
          uVar17 = uVar17 + 1;
          *(undefined4 *)puVar7 = 0;
          puVar24 = puVar7 + 4;
        } while (uVar17 <= uVar19);
        *param_3 = uVar17;
        *(undefined4 *)puVar7 = 0;
      }
      iVar23 = (int)puVar6[uVar19 * 4];
      local_60 = uVar16;
      if (iVar23 == 0) {
        *(int *)(puVar6 + uVar19 * 4) = 5;
        cVar11 = *pcVar15;
      }
      else {
        if (iVar23 != 5) goto LAB_001004c0;
        cVar11 = *pcVar15;
      }
      goto LAB_00100153;
    }
    if (-1 < (long)uVar26) {
      uVar26 = uVar26 * 2;
      if (uVar26 <= uVar19) {
        uVar26 = uVar19 + 1;
      }
      if (uVar26 >> 0x3b == 0) {
        sVar20 = uVar26 << 5;
        if (puVar1 == puVar24) {
          puVar6 = (ulong *)malloc(sVar20);
          if (puVar6 == (ulong *)0x0) goto LAB_0010062a;
LAB_00100d2c:
          puVar6 = (ulong *)__memcpy_chk(puVar6,puVar24,*param_3 << 5,sVar20);
        }
        else {
          puVar6 = (ulong *)realloc(puVar24,sVar20);
          if (puVar6 == (ulong *)0x0) goto LAB_00100e10;
          puVar24 = puVar1;
          if (puVar1 == (ulong *)param_3[1]) goto LAB_00100d2c;
        }
        param_3[1] = (ulong)puVar6;
        goto LAB_00100431;
      }
    }
    goto LAB_0010061b;
  }
LAB_00100153:
  local_78 = uVar10;
  switch(cVar11) {
  case 'L':
    cVar11 = pcVar15[1];
    pcVar15 = pcVar15 + 1;
    goto LAB_00100908;
  default:
    iVar14 = 0x1f;
    iVar12 = 0x1d;
    iVar21 = 0x1b;
    iVar23 = 6;
    iVar22 = 5;
    break;
  case 'Z':
  case 'j':
  case 't':
  case 'z':
    cVar11 = pcVar15[1];
LAB_00100493:
    pcVar15 = pcVar15 + 1;
    iVar14 = 0x20;
    iVar12 = 0x1e;
    iVar21 = 0x1b;
    iVar23 = 8;
    iVar22 = 7;
    break;
  case 'h':
    cVar11 = pcVar15[1];
    if (cVar11 == 'h') {
      cVar11 = pcVar15[2];
      iVar14 = 0x1f;
      pcVar15 = pcVar15 + 2;
      iVar12 = 0x1d;
      iVar21 = 0x1b;
      iVar23 = 2;
      iVar22 = 1;
    }
    else {
      pcVar15 = pcVar15 + 1;
      iVar14 = 0x1f;
      iVar12 = 0x1d;
      iVar21 = 0x1b;
      iVar23 = 4;
      iVar22 = 3;
    }
    break;
  case 'l':
    cVar11 = pcVar15[1];
    if (cVar11 != 'l') goto LAB_00100493;
    cVar11 = pcVar15[2];
    pcVar15 = pcVar15 + 2;
LAB_00100908:
    iVar14 = 0x20;
    iVar12 = 0x1e;
    iVar21 = 0x1c;
    iVar23 = 10;
    iVar22 = 9;
    break;
  case 'w':
    cVar11 = pcVar15[1];
    if (cVar11 == 'f') {
      cVar11 = pcVar15[2];
      if (cVar11 == '8') {
        cVar11 = pcVar15[3];
        iVar14 = 0x1f;
        pcVar15 = pcVar15 + 3;
        iVar12 = 0x1d;
        iVar21 = 0x1b;
        iVar23 = 0x14;
        iVar22 = 0x13;
      }
      else {
        if (cVar11 != '1') {
          if (cVar11 == '3') {
            if (pcVar15[3] == '2') {
              cVar11 = pcVar15[4];
              iVar14 = 0x1f;
              pcVar15 = pcVar15 + 4;
              iVar12 = 0x1d;
              iVar21 = 0x1b;
              iVar23 = 0x18;
              iVar22 = 0x17;
              break;
            }
          }
          else if ((cVar11 == '6') && (pcVar15[3] == '4')) {
            cVar11 = pcVar15[4];
            iVar14 = 0x1f;
            pcVar15 = pcVar15 + 4;
            iVar12 = 0x1d;
            iVar21 = 0x1b;
            iVar23 = 0x1a;
            iVar22 = 0x19;
            break;
          }
          goto switchD_0010020a_caseD_1004bc;
        }
        if (pcVar15[3] != '6') goto switchD_0010020a_caseD_1004bc;
        cVar11 = pcVar15[4];
        iVar14 = 0x1f;
        pcVar15 = pcVar15 + 4;
        iVar12 = 0x1d;
        iVar21 = 0x1b;
        iVar23 = 0x16;
        iVar22 = 0x15;
      }
    }
    else if (cVar11 == '8') {
      cVar11 = pcVar15[2];
      iVar14 = 0x1f;
      pcVar15 = pcVar15 + 2;
      iVar12 = 0x1d;
      iVar21 = 0x1b;
      iVar23 = 0xc;
      iVar22 = 0xb;
    }
    else {
      if (cVar11 != '1') {
        if (cVar11 == '3') {
          if (pcVar15[2] == '2') {
            cVar11 = pcVar15[3];
            iVar14 = 0x1f;
            pcVar15 = pcVar15 + 3;
            iVar12 = 0x1d;
            iVar21 = 0x1b;
            iVar23 = 0x10;
            iVar22 = 0xf;
            break;
          }
        }
        else if ((cVar11 == '6') && (pcVar15[2] == '4')) {
          cVar11 = pcVar15[3];
          iVar14 = 0x1f;
          pcVar15 = pcVar15 + 3;
          iVar12 = 0x1d;
          iVar21 = 0x1b;
          iVar23 = 0x12;
          iVar22 = 0x11;
          break;
        }
        goto switchD_0010020a_caseD_1004bc;
      }
      if (pcVar15[2] != '6') goto switchD_0010020a_caseD_1004bc;
      cVar11 = pcVar15[3];
      iVar14 = 0x1f;
      pcVar15 = pcVar15 + 3;
      iVar12 = 0x1d;
      iVar21 = 0x1b;
      iVar23 = 0xe;
      iVar22 = 0xd;
    }
  }
  if (0x53 < (byte)(cVar11 - 0x25U)) {
switchD_0010020a_caseD_1004bc:
    puVar6 = (ulong *)param_3[1];
    goto LAB_001004c0;
  }
  param_1 = pcVar15 + 1;
  switch((long)&switchD_0010020a::switchdataD_00101050 +
         (long)(int)(&switchD_0010020a::switchdataD_00101050)[(byte)(cVar11 - 0x25U)]) {
  case 0x1004bc:
    goto switchD_0010020a_caseD_1004bc;
  case 0x1004ef:
    iVar23 = 0x1e;
    cVar11 = 'c';
    break;
  case 0x1005e9:
    goto switchD_0010020a_caseD_1005e9;
  case 0x10084e:
    iVar23 = iVar21;
    break;
  case 0x100927:
    iVar23 = 0x20;
    cVar11 = 's';
    goto joined_r0x00100936;
  case 0x100960:
    iVar23 = iVar12;
    break;
  case 0x100968:
    iVar23 = iVar14;
    break;
  case 0x100970:
    iVar23 = 0x21;
    break;
  case 0x100b2f:
    iVar23 = iVar22;
  }
joined_r0x00100936:
  if (uVar25 == 0xffffffffffffffff) {
    puVar9[10] = local_60;
    bVar27 = local_60 == 0xffffffffffffffff;
    uVar25 = local_60;
    local_60 = local_60 + 1;
    if (bVar27) goto switchD_0010020a_caseD_1004bc;
  }
  else {
    puVar9[10] = uVar25;
  }
  puVar24 = (ulong *)param_3[1];
  puVar6 = puVar24;
  if (uVar25 < uVar26) {
LAB_0010059e:
    uVar10 = *param_3;
    puVar24 = puVar6 + uVar10 * 4;
    if (uVar10 <= uVar25) {
      do {
        puVar7 = puVar24;
        uVar10 = uVar10 + 1;
        *(undefined4 *)puVar7 = 0;
        puVar24 = puVar7 + 4;
      } while (uVar10 <= uVar25);
      *param_3 = uVar10;
      *(undefined4 *)puVar7 = 0;
    }
    iVar21 = (int)puVar6[uVar25 * 4];
    if (iVar21 == 0) {
      *(int *)(puVar6 + uVar25 * 4) = iVar23;
    }
    else if (iVar21 != iVar23) {
LAB_001004c0:
      if (puVar1 != puVar6) {
        free(puVar6);
      }
      if (puVar2 != (ulong *)param_2[1]) {
        free((ulong *)param_2[1]);
      }
      piVar8 = __errno_location();
      *piVar8 = 0x16;
      return 0xffffffff;
    }
switchD_0010020a_caseD_1005e9:
    *(char *)(puVar9 + 9) = cVar11;
    uVar10 = *param_2;
    puVar9[1] = (ulong)param_1;
    uVar10 = uVar10 + 1;
    *param_2 = uVar10;
    if (uVar10 < local_80) {
      puVar9 = (ulong *)param_2[1];
      goto LAB_0010007b;
    }
    if (((long)local_80 < 0) || (0x2e8ba2e8ba2e8ba < local_80 * 2)) {
LAB_00100e10:
      puVar24 = (ulong *)param_3[1];
      goto LAB_0010061b;
    }
    puVar6 = (ulong *)param_2[1];
    sVar20 = local_80 * 0xb0;
    if (puVar2 != puVar6) {
      sVar4 = 1;
      if (sVar20 != 0) {
        sVar4 = sVar20;
      }
      sVar20 = sVar4;
      puVar9 = (ulong *)realloc(puVar6,sVar20);
      if (puVar9 == (ulong *)0x0) goto LAB_00100e10;
      puVar6 = (ulong *)param_2[1];
      if (puVar2 != puVar6) goto LAB_001006f1;
      uVar10 = *param_2;
LAB_0010079b:
      puVar9 = (ulong *)__memcpy_chk(puVar9,puVar6,uVar10 * 0x58,sVar20);
LAB_001006f1:
      param_2[1] = (ulong)puVar9;
      uVar10 = *param_2;
      local_80 = local_80 * 2;
      goto LAB_0010007b;
    }
    puVar9 = (ulong *)malloc(sVar20);
    if (puVar9 != (ulong *)0x0) goto LAB_0010079b;
    puVar24 = (ulong *)param_3[1];
    if (puVar1 == puVar24) goto LAB_0010063a;
LAB_00100622:
    free(puVar24);
  }
  else if ((long)uVar26 < 0) {
LAB_0010061b:
    if (puVar1 != puVar24) goto LAB_00100622;
  }
  else {
    uVar26 = uVar26 * 2;
    if (uVar26 <= uVar25) {
      uVar26 = uVar25 + 1;
    }
    if (uVar26 >> 0x3b != 0) goto LAB_0010061b;
    sVar20 = uVar26 << 5;
    if (puVar1 != puVar24) {
      puVar6 = (ulong *)realloc(puVar24,sVar20);
      if (puVar6 != (ulong *)0x0) {
        puVar24 = puVar1;
        if (puVar1 == (ulong *)param_3[1]) goto LAB_00100aa2;
        goto LAB_0010059a;
      }
      goto LAB_00100e10;
    }
    puVar6 = (ulong *)malloc(sVar20);
    if (puVar6 != (ulong *)0x0) {
LAB_00100aa2:
      puVar6 = (ulong *)__memcpy_chk(puVar6,puVar24,*param_3 << 5,sVar20);
LAB_0010059a:
      param_3[1] = (ulong)puVar6;
      goto LAB_0010059e;
    }
  }
LAB_0010062a:
  if (puVar2 != (ulong *)param_2[1]) {
    free((ulong *)param_2[1]);
  }
LAB_0010063a:
  piVar8 = __errno_location();
  *piVar8 = 0xc;
  return 0xffffffff;
}


