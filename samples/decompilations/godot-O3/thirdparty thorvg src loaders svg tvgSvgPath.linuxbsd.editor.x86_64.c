
/* svgPathToShape(char const*, tvg::Shape*) */

bool svgPathToShape(char *param_1,Shape *param_2)

{
  char *pcVar1;
  float *pfVar2;
  uint uVar3;
  Array *pAVar4;
  bool bVar5;
  byte bVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  void *pvVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  float *pfVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  uint uVar22;
  undefined8 uVar23;
  char *pcVar24;
  long in_FS_OFFSET;
  bool bVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  int local_90;
  undefined8 local_80;
  undefined8 local_78;
  char *local_70;
  float local_68 [4];
  float local_58;
  float fStack_54;
  float afStack_50 [4];
  long local_40;
  
  pAVar4 = *(Array **)(param_2 + 0x18);
  cVar8 = *param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 0;
  local_78 = 0;
  uVar3 = *(uint *)(pAVar4 + 8);
  if (cVar8 != '\0') {
    bVar5 = false;
    bVar25 = false;
    local_a0 = 0;
    local_90 = 0;
    uVar12 = 0;
LAB_00100a8e:
    do {
      iVar10 = isspace((int)cVar8);
      if (iVar10 == 0) {
        param_1 = param_1 + (cVar8 == ',');
      }
      else {
        cVar8 = param_1[1];
        param_1 = param_1 + 1;
        if (cVar8 != '\0') goto LAB_00100a8e;
      }
      cVar8 = *param_1;
      uVar22 = (uint)cVar8;
      local_70 = param_1;
      iVar10 = isalpha(uVar22);
      if (iVar10 == 0) {
        if ((char)uVar12 == 'm') {
          uVar22 = 0x6c;
LAB_00100aea:
          uVar12 = uVar22;
          if (local_90 == 7) goto LAB_00100c93;
LAB_00100af7:
          if (local_90 < 1) goto LAB_00100dd0;
          cVar8 = (char)uVar12;
          pfVar19 = local_68;
          pfVar2 = pfVar19 + local_90;
          do {
            cVar7 = _parseNumber(&local_70,pfVar19);
            if (cVar7 == '\0') goto switchD_00100ec1_caseD_42;
            cVar7 = *local_70;
            pcVar24 = local_70;
            while (cVar7 != '\0') {
              iVar10 = isspace((int)cVar7);
              if (iVar10 == 0) {
                pcVar24 = pcVar24 + (cVar7 == ',');
                break;
              }
              pcVar1 = pcVar24 + 1;
              pcVar24 = pcVar24 + 1;
              cVar7 = *pcVar1;
            }
            pfVar19 = pfVar19 + 1;
            local_70 = pcVar24;
          } while (pfVar19 != pfVar2);
          uVar22 = uVar12 & 0xff;
        }
        else {
          if ((char)uVar12 == 'M') {
            uVar22 = 0x4c;
            goto LAB_00100aea;
          }
          if (bVar25) goto switchD_00100ec1_caseD_42;
          if (local_90 != 7) goto LAB_00100af7;
LAB_00100c93:
          cVar8 = _parseNumber(&local_70,local_68);
          if ((((cVar8 == '\0') || (cVar8 = _parseNumber(&local_70,local_68 + 1), cVar8 == '\0')) ||
              (cVar8 = _parseNumber(&local_70,local_68 + 2), cVar8 == '\0')) ||
             (cVar8 = *local_70, 1 < (byte)(cVar8 - 0x30U))) goto switchD_00100ec1_caseD_42;
          cVar7 = local_70[1];
          pcVar24 = local_70 + 1;
          if (cVar7 == '\0') goto switchD_00100ec1_caseD_42;
          do {
            iVar10 = isspace((int)cVar7);
            if (iVar10 == 0) {
              pcVar24 = pcVar24 + (cVar7 == ',');
              break;
            }
            cVar7 = pcVar24[1];
            pcVar24 = pcVar24 + 1;
          } while (cVar7 != '\0');
          cVar7 = *pcVar24;
          if (1 < (byte)(cVar7 - 0x30U)) goto switchD_00100ec1_caseD_42;
          cVar9 = pcVar24[1];
          while (pcVar24 = pcVar24 + 1, cVar9 != '\0') {
            iVar10 = isspace((int)cVar9);
            if (iVar10 == 0) {
              pcVar24 = pcVar24 + (cVar9 == ',');
              break;
            }
            cVar9 = pcVar24[1];
          }
          local_70 = pcVar24;
          cVar9 = _parseNumber(&local_70,&fStack_54);
          if ((cVar9 == '\0') || (cVar9 = _parseNumber(&local_70,afStack_50), cVar9 == '\0'))
          goto switchD_00100ec1_caseD_42;
          local_68[3] = (float)(cVar8 + (int)_LC9);
          local_58 = (float)(cVar7 + _LC9._4_4_);
LAB_00100dd0:
          if (local_70 == (char *)0x0) goto switchD_00100ec1_caseD_42;
          cVar8 = (char)uVar12;
          uVar22 = uVar12;
        }
        if (cVar8 != 'a') goto LAB_00100b85;
        fStack_54 = fStack_54 + (float)local_80;
        afStack_50[0] = afStack_50[0] + (float)((ulong)local_80 >> 0x20);
        uVar20 = CONCAT44(afStack_50[0],fStack_54);
LAB_00100df7:
        param_1 = local_70;
        if (((float)((uint)local_68[0] & _LC1) <= _LC11) ||
           ((float)((uint)local_68[1] & _LC1) <= _LC11)) {
          uVar12 = *(uint *)(pAVar4 + 8);
          pvVar15 = *(void **)pAVar4;
          uVar11 = uVar12 + 1;
          if (*(uint *)(pAVar4 + 0xc) < uVar11) {
            uVar12 = (uVar12 + 2 >> 1) + uVar12;
            *(uint *)(pAVar4 + 0xc) = uVar12;
            pvVar15 = realloc(pvVar15,(ulong)uVar12 * 4);
            uVar12 = *(uint *)(pAVar4 + 8);
            *(void **)pAVar4 = pvVar15;
            uVar11 = uVar12 + 1;
          }
          *(uint *)(pAVar4 + 8) = uVar11;
          *(undefined4 *)((long)pvVar15 + (ulong)uVar12 * 4) = 2;
          uVar12 = *(uint *)(pAVar4 + 0x18);
          if (*(uint *)(pAVar4 + 0x1c) < uVar12 + 1) {
            uVar12 = (uVar12 + 2 >> 1) + uVar12;
            *(uint *)(pAVar4 + 0x1c) = uVar12;
            pvVar15 = realloc(*(void **)(pAVar4 + 0x10),(ulong)uVar12 * 8);
            uVar12 = *(uint *)(pAVar4 + 0x18);
            *(void **)(pAVar4 + 0x10) = pvVar15;
            *(uint *)(pAVar4 + 0x18) = uVar12 + 1;
            *(undefined8 *)((long)pvVar15 + (ulong)uVar12 * 8) = uVar20;
            local_80 = uVar20;
          }
          else {
            *(uint *)(pAVar4 + 0x18) = uVar12 + 1;
            *(undefined8 *)((long)*(void **)(pAVar4 + 0x10) + (ulong)uVar12 * 8) = uVar20;
            local_80 = uVar20;
          }
          goto LAB_00100c17;
        }
        fVar30 = (float)((ulong)uVar20 >> 0x20);
        if (((float)((uint)((float)local_80 - (float)uVar20) & _LC1) <= _LC11) &&
           (fVar26 = local_80._4_4_ - fVar30, (float)((uint)fVar26 & _LC1) <= _LC11))
        goto LAB_00100c17;
        _pathAppendArcTo(pAVar4,pAVar4 + 0x10,(Point *)&local_80,(Point *)&local_78,(float)uVar20,
                         fVar30,(float)((uint)local_68[0] & _LC1),(float)((uint)local_68[1] & _LC1),
                         local_68[2],local_68[3] != 0.0,local_58 != 0.0);
        local_80 = uVar20;
        local_78 = uVar20;
        goto LAB_00101068;
      }
      local_70 = param_1 + 1;
      bVar6 = cVar8 + 0xbf;
      if (bVar6 < 0x36) {
        local_90 = (int)(char)CSWTCH_57[bVar6];
        goto LAB_00100aea;
      }
      local_90 = 0;
LAB_00100b85:
      param_1 = local_70;
      bVar6 = (char)uVar22 + 0x9d;
      if (bVar6 < 0x14) {
        if ((1L << (bVar6 & 0x3f) & 0x34601U) != 0) {
          if (1 < local_90) {
            lVar14 = 0;
            do {
              *(ulong *)(local_68 + lVar14 * 2) =
                   CONCAT44((float)((ulong)*(undefined8 *)(local_68 + lVar14 * 2) >> 0x20) +
                            local_80._4_4_,
                            (float)*(undefined8 *)(local_68 + lVar14 * 2) + (float)local_80);
              lVar14 = lVar14 + 1;
            } while ((uint)lVar14 < (local_90 - 2U >> 1) + 1);
          }
          goto LAB_00100ea4;
        }
        if (bVar6 == 0x13) {
          local_68[0] = local_68[0] + local_80._4_4_;
          goto LAB_001012a9;
        }
        if (bVar6 != 5) goto LAB_00100ea4;
        local_68[0] = local_68[0] + (float)local_80;
LAB_00100bc9:
        fVar30 = local_68[0];
        uVar12 = *(uint *)(pAVar4 + 8);
        pvVar15 = *(void **)pAVar4;
        uVar11 = uVar12 + 1;
        uVar20 = CONCAT44(local_80._4_4_,local_68[0]);
        if (*(uint *)(pAVar4 + 0xc) < uVar11) {
          uVar12 = (uVar12 + 2 >> 1) + uVar12;
          *(uint *)(pAVar4 + 0xc) = uVar12;
          pvVar15 = realloc(pvVar15,(ulong)uVar12 * 4);
          uVar12 = *(uint *)(pAVar4 + 8);
          *(void **)pAVar4 = pvVar15;
          uVar11 = uVar12 + 1;
        }
        *(uint *)(pAVar4 + 8) = uVar11;
        *(undefined4 *)((long)pvVar15 + (ulong)uVar12 * 4) = 2;
        uVar12 = *(uint *)(pAVar4 + 0x18);
        pvVar15 = *(void **)(pAVar4 + 0x10);
        uVar11 = uVar12 + 1;
        if (*(uint *)(pAVar4 + 0x1c) < uVar11) {
          uVar12 = (uVar12 + 2 >> 1) + uVar12;
          *(uint *)(pAVar4 + 0x1c) = uVar12;
          pvVar15 = realloc(pvVar15,(ulong)uVar12 * 8);
          uVar12 = *(uint *)(pAVar4 + 0x18);
          *(void **)(pAVar4 + 0x10) = pvVar15;
          uVar11 = uVar12 + 1;
        }
        *(uint *)(pAVar4 + 0x18) = uVar11;
        *(undefined8 *)((long)pvVar15 + (ulong)uVar12 * 8) = uVar20;
        local_80 = CONCAT44(local_80._4_4_,fVar30);
        goto LAB_00100c17;
      }
LAB_00100ea4:
      fVar26 = local_68[1];
      fVar30 = local_68[0];
      switch((char)uVar22) {
      case 'A':
        uVar20 = CONCAT44(afStack_50[0],fStack_54);
        goto LAB_00100df7;
      default:
        goto switchD_00100ec1_caseD_42;
      case 'C':
      case 'c':
        uVar12 = *(uint *)(pAVar4 + 8);
        pvVar15 = *(void **)pAVar4;
        uVar11 = uVar12 + 1;
        if (*(uint *)(pAVar4 + 0xc) < uVar11) {
          uVar12 = (uVar12 + 2 >> 1) + uVar12;
          *(uint *)(pAVar4 + 0xc) = uVar12;
          pvVar15 = realloc(pvVar15,(ulong)uVar12 * 4);
          uVar12 = *(uint *)(pAVar4 + 8);
          *(void **)pAVar4 = pvVar15;
          uVar11 = uVar12 + 1;
        }
        uVar18 = *(uint *)(pAVar4 + 0x1c);
        uVar20 = CONCAT44(local_68[1],local_68[0]);
        *(uint *)(pAVar4 + 8) = uVar11;
        *(undefined4 *)((long)pvVar15 + (ulong)uVar12 * 4) = 3;
        uVar11 = *(uint *)(pAVar4 + 0x18);
        uVar23 = CONCAT44(local_68[3],local_68[2]);
        uVar21 = CONCAT44(fStack_54,local_58);
        uVar12 = uVar11 + 1;
        pvVar15 = *(void **)(pAVar4 + 0x10);
        if (uVar18 < uVar12) {
          uVar11 = (uVar11 + 2 >> 1) + uVar11;
          *(uint *)(pAVar4 + 0x1c) = uVar11;
          pvVar15 = realloc(pvVar15,(ulong)uVar11 * 8);
          uVar11 = *(uint *)(pAVar4 + 0x18);
          uVar18 = *(uint *)(pAVar4 + 0x1c);
          *(void **)(pAVar4 + 0x10) = pvVar15;
          uVar12 = uVar11 + 1;
        }
        *(uint *)(pAVar4 + 0x18) = uVar12;
        *(undefined8 *)((long)pvVar15 + (ulong)uVar11 * 8) = uVar20;
        uVar13 = uVar11 + 2;
        if (uVar13 <= uVar18) goto LAB_00101043;
LAB_00101223:
        uVar12 = uVar12 + (uVar11 + 3 >> 1);
        *(uint *)(pAVar4 + 0x1c) = uVar12;
        pvVar15 = realloc(pvVar15,(ulong)uVar12 * 8);
        uVar11 = *(uint *)(pAVar4 + 0x1c);
        *(void **)(pAVar4 + 0x10) = pvVar15;
        uVar12 = *(uint *)(pAVar4 + 0x18);
        uVar13 = uVar12 + 1;
        uVar16 = (ulong)uVar13;
        *(uint *)(pAVar4 + 0x18) = uVar13;
        *(undefined8 *)((long)pvVar15 + (ulong)uVar12 * 8) = uVar23;
        uVar17 = uVar12 + 2;
        if (uVar11 < uVar17) goto LAB_0010125e;
        goto LAB_00101057;
      case 'H':
      case 'h':
        goto LAB_00100bc9;
      case 'L':
      case 'l':
        uVar12 = *(uint *)(pAVar4 + 8);
        uVar20 = CONCAT44(local_68[1],local_68[0]);
        pvVar15 = *(void **)pAVar4;
        uVar11 = uVar12 + 1;
        if (*(uint *)(pAVar4 + 0xc) < uVar11) {
          uVar12 = (uVar12 + 2 >> 1) + uVar12;
          *(uint *)(pAVar4 + 0xc) = uVar12;
          pvVar15 = realloc(pvVar15,(ulong)uVar12 * 4);
          uVar12 = *(uint *)(pAVar4 + 8);
          *(void **)pAVar4 = pvVar15;
          uVar11 = uVar12 + 1;
        }
        *(uint *)(pAVar4 + 8) = uVar11;
        *(undefined4 *)((long)pvVar15 + (ulong)uVar12 * 4) = 2;
        uVar12 = *(uint *)(pAVar4 + 0x18);
        pvVar15 = *(void **)(pAVar4 + 0x10);
        uVar11 = uVar12 + 1;
        if (*(uint *)(pAVar4 + 0x1c) < uVar11) {
          uVar12 = (uVar12 + 2 >> 1) + uVar12;
          *(uint *)(pAVar4 + 0x1c) = uVar12;
          pvVar15 = realloc(pvVar15,(ulong)uVar12 * 8);
          uVar12 = *(uint *)(pAVar4 + 0x18);
          *(void **)(pAVar4 + 0x10) = pvVar15;
          uVar11 = uVar12 + 1;
        }
        *(uint *)(pAVar4 + 0x18) = uVar11;
        *(undefined8 *)((long)pvVar15 + (ulong)uVar12 * 8) = uVar20;
        local_80 = uVar20;
        goto LAB_00100c17;
      case 'M':
      case 'm':
        local_a0 = CONCAT44(local_68[1],local_68[0]);
        uVar12 = *(uint *)(pAVar4 + 8);
        pvVar15 = *(void **)pAVar4;
        uVar11 = uVar12 + 1;
        if (*(uint *)(pAVar4 + 0xc) < uVar11) {
          uVar12 = (uVar12 + 2 >> 1) + uVar12;
          *(uint *)(pAVar4 + 0xc) = uVar12;
          pvVar15 = realloc(pvVar15,(ulong)uVar12 * 4);
          uVar12 = *(uint *)(pAVar4 + 8);
          *(void **)pAVar4 = pvVar15;
          uVar11 = uVar12 + 1;
        }
        *(uint *)(pAVar4 + 8) = uVar11;
        *(undefined4 *)((long)pvVar15 + (ulong)uVar12 * 4) = 1;
        uVar12 = *(uint *)(pAVar4 + 0x18);
        pvVar15 = *(void **)(pAVar4 + 0x10);
        uVar11 = uVar12 + 1;
        if (*(uint *)(pAVar4 + 0x1c) < uVar11) {
          uVar12 = (uVar12 + 2 >> 1) + uVar12;
          *(uint *)(pAVar4 + 0x1c) = uVar12;
          pvVar15 = realloc(pvVar15,(ulong)uVar12 * 8);
          uVar12 = *(uint *)(pAVar4 + 0x18);
          *(void **)(pAVar4 + 0x10) = pvVar15;
          uVar11 = uVar12 + 1;
        }
        *(uint *)(pAVar4 + 0x18) = uVar11;
        bVar25 = false;
        *(undefined8 *)((long)pvVar15 + (ulong)uVar12 * 8) = local_a0;
        local_80 = local_a0;
        break;
      case 'Q':
      case 'q':
        uVar12 = *(uint *)(pAVar4 + 8);
        uVar20 = CONCAT44(local_68[3],local_68[2]);
        pvVar15 = *(void **)pAVar4;
        uVar11 = uVar12 + 1;
        fVar29 = ((float)local_80 + local_68[0] + local_68[0]) * (float)_LC10;
        fVar31 = (local_80._4_4_ + local_68[1] + local_68[1]) * _LC10._4_4_;
        fVar27 = (local_68[0] + local_68[0] + local_68[2]) * (float)_LC10;
        fVar28 = (local_68[1] + local_68[1] + local_68[3]) * _LC10._4_4_;
        if (*(uint *)(pAVar4 + 0xc) < uVar11) {
          uVar12 = (uVar12 + 2 >> 1) + uVar12;
          *(uint *)(pAVar4 + 0xc) = uVar12;
          pvVar15 = realloc(pvVar15,(ulong)uVar12 * 4);
          uVar12 = *(uint *)(pAVar4 + 8);
          *(void **)pAVar4 = pvVar15;
          uVar11 = uVar12 + 1;
        }
        local_a8 = CONCAT44(fVar26,fVar30);
        *(uint *)(pAVar4 + 8) = uVar11;
        uVar11 = *(uint *)(pAVar4 + 0x1c);
        *(undefined4 *)((long)pvVar15 + (ulong)uVar12 * 4) = 3;
        uVar18 = *(uint *)(pAVar4 + 0x18);
        pvVar15 = *(void **)(pAVar4 + 0x10);
        uVar12 = uVar18 + 1;
        if (uVar11 < uVar12) {
          uVar18 = (uVar18 + 2 >> 1) + uVar18;
          *(uint *)(pAVar4 + 0x1c) = uVar18;
          pvVar15 = realloc(pvVar15,(ulong)uVar18 * 8);
          uVar18 = *(uint *)(pAVar4 + 0x18);
          uVar11 = *(uint *)(pAVar4 + 0x1c);
          *(void **)(pAVar4 + 0x10) = pvVar15;
          uVar12 = uVar18 + 1;
        }
        *(uint *)(pAVar4 + 0x18) = uVar12;
        pfVar2 = (float *)((long)pvVar15 + (ulong)uVar18 * 8);
        *pfVar2 = fVar29;
        pfVar2[1] = fVar31;
        uVar13 = uVar18 + 2;
        if (uVar11 < uVar13) {
          uVar12 = uVar12 + (uVar18 + 3 >> 1);
          *(uint *)(pAVar4 + 0x1c) = uVar12;
          pvVar15 = realloc(pvVar15,(ulong)uVar12 * 8);
          uVar11 = *(uint *)(pAVar4 + 0x1c);
          *(void **)(pAVar4 + 0x10) = pvVar15;
          uVar12 = *(uint *)(pAVar4 + 0x18);
          uVar13 = uVar12 + 1;
        }
        *(uint *)(pAVar4 + 0x18) = uVar13;
        *(ulong *)((long)pvVar15 + (ulong)uVar12 * 8) = CONCAT44(fVar28,fVar27);
        uVar18 = uVar12 + 2;
        if (uVar11 < uVar18) {
          uVar13 = (uVar12 + 3 >> 1) + uVar13;
          *(uint *)(pAVar4 + 0x1c) = uVar13;
          pvVar15 = realloc(pvVar15,(ulong)uVar13 * 8);
          uVar13 = *(uint *)(pAVar4 + 0x18);
          *(void **)(pAVar4 + 0x10) = pvVar15;
          uVar18 = uVar13 + 1;
        }
        *(uint *)(pAVar4 + 0x18) = uVar18;
        *(undefined8 *)((long)pvVar15 + (ulong)uVar13 * 8) = uVar20;
        local_78 = local_a8;
        local_80 = uVar20;
        goto LAB_00100fc8;
      case 'S':
      case 's':
        uVar12 = *(uint *)(pAVar4 + 8);
        pvVar15 = *(void **)pAVar4;
        uVar20 = local_80;
        if (((1 < uVar12) && (*(int *)((long)pvVar15 + (ulong)(uVar12 - 1) * 4) == 3)) && (!bVar5))
        {
          uVar20 = CONCAT44((local_80._4_4_ + local_80._4_4_) - local_78._4_4_,
                            ((float)local_80 + (float)local_80) - (float)local_78);
        }
        uVar11 = uVar12 + 1;
        if (*(uint *)(pAVar4 + 0xc) < uVar11) {
          uVar12 = uVar12 + (uVar12 + 2 >> 1);
          *(uint *)(pAVar4 + 0xc) = uVar12;
          pvVar15 = realloc(pvVar15,(ulong)uVar12 * 4);
          *(void **)pAVar4 = pvVar15;
          uVar12 = *(uint *)(pAVar4 + 8);
          uVar11 = uVar12 + 1;
        }
        uVar18 = *(uint *)(pAVar4 + 0x1c);
        uVar23 = CONCAT44(local_68[1],local_68[0]);
        *(uint *)(pAVar4 + 8) = uVar11;
        uVar11 = *(uint *)(pAVar4 + 0x18);
        uVar21 = CONCAT44(local_68[3],local_68[2]);
        *(undefined4 *)((long)pvVar15 + (ulong)uVar12 * 4) = 3;
        pvVar15 = *(void **)(pAVar4 + 0x10);
        uVar12 = uVar11 + 1;
        if (uVar18 < uVar12) {
          uVar11 = (uVar11 + 2 >> 1) + uVar11;
          *(uint *)(pAVar4 + 0x1c) = uVar11;
          pvVar15 = realloc(pvVar15,(ulong)uVar11 * 8);
          uVar11 = *(uint *)(pAVar4 + 0x18);
          uVar18 = *(uint *)(pAVar4 + 0x1c);
          *(void **)(pAVar4 + 0x10) = pvVar15;
          uVar12 = uVar11 + 1;
        }
        *(uint *)(pAVar4 + 0x18) = uVar12;
        *(undefined8 *)((long)pvVar15 + (ulong)uVar11 * 8) = uVar20;
        uVar13 = uVar11 + 2;
        if (uVar18 < uVar13) goto LAB_00101223;
LAB_00101043:
        uVar16 = (ulong)uVar13;
        *(uint *)(pAVar4 + 0x18) = uVar13;
        *(undefined8 *)((long)pvVar15 + (ulong)uVar12 * 8) = uVar23;
        uVar17 = uVar12 + 2;
        if (uVar18 < uVar17) {
LAB_0010125e:
          uVar13 = (uVar12 + 3 >> 1) + uVar13;
          *(uint *)(pAVar4 + 0x1c) = uVar13;
          pvVar15 = realloc(pvVar15,(ulong)uVar13 * 8);
          uVar16 = (ulong)*(uint *)(pAVar4 + 0x18);
          *(void **)(pAVar4 + 0x10) = pvVar15;
          uVar17 = *(uint *)(pAVar4 + 0x18) + 1;
        }
LAB_00101057:
        *(uint *)(pAVar4 + 0x18) = uVar17;
        *(undefined8 *)((long)pvVar15 + uVar16 * 8) = uVar21;
        local_80 = uVar21;
        local_78 = uVar23;
LAB_00101068:
        bVar5 = false;
        bVar25 = false;
        break;
      case 'T':
      case 't':
        uVar12 = *(uint *)(pAVar4 + 8);
        pvVar15 = *(void **)pAVar4;
        uVar20 = local_80;
        if (((1 < uVar12) && (*(int *)((long)pvVar15 + (ulong)(uVar12 - 1) * 4) == 3)) && (bVar5)) {
          uVar20 = CONCAT44((local_80._4_4_ + local_80._4_4_) - local_78._4_4_,
                            ((float)local_80 + (float)local_80) - (float)local_78);
        }
        uVar23 = CONCAT44(local_68[1],local_68[0]);
        uVar11 = uVar12 + 1;
        fVar30 = (float)((ulong)uVar20 >> 0x20);
        fVar28 = (float)uVar20 + (float)uVar20;
        fVar30 = fVar30 + fVar30;
        fVar26 = ((float)local_80 + fVar28) * (float)_LC10;
        fVar27 = (local_80._4_4_ + fVar30) * _LC10._4_4_;
        local_b0 = CONCAT44((fVar30 + local_68[1]) * _LC10._4_4_,
                            (fVar28 + local_68[0]) * (float)_LC10);
        if (*(uint *)(pAVar4 + 0xc) < uVar11) {
          uVar12 = uVar12 + (uVar12 + 2 >> 1);
          *(uint *)(pAVar4 + 0xc) = uVar12;
          pvVar15 = realloc(pvVar15,(ulong)uVar12 * 4);
          *(void **)pAVar4 = pvVar15;
          uVar12 = *(uint *)(pAVar4 + 8);
          uVar11 = uVar12 + 1;
        }
        *(uint *)(pAVar4 + 8) = uVar11;
        uVar11 = *(uint *)(pAVar4 + 0x18);
        uVar18 = *(uint *)(pAVar4 + 0x1c);
        *(undefined4 *)((long)pvVar15 + (ulong)uVar12 * 4) = 3;
        uVar12 = uVar11 + 1;
        pvVar15 = *(void **)(pAVar4 + 0x10);
        if (uVar18 < uVar12) {
          uVar11 = (uVar11 + 2 >> 1) + uVar11;
          *(uint *)(pAVar4 + 0x1c) = uVar11;
          pvVar15 = realloc(pvVar15,(ulong)uVar11 * 8);
          uVar11 = *(uint *)(pAVar4 + 0x18);
          uVar18 = *(uint *)(pAVar4 + 0x1c);
          *(void **)(pAVar4 + 0x10) = pvVar15;
          uVar12 = uVar11 + 1;
        }
        *(uint *)(pAVar4 + 0x18) = uVar12;
        *(ulong *)((long)pvVar15 + (ulong)uVar11 * 8) = CONCAT44(fVar27,fVar26);
        uVar13 = uVar11 + 2;
        if (uVar18 < uVar13) {
          uVar12 = uVar12 + (uVar11 + 3 >> 1);
          *(uint *)(pAVar4 + 0x1c) = uVar12;
          pvVar15 = realloc(pvVar15,(ulong)uVar12 * 8);
          uVar18 = *(uint *)(pAVar4 + 0x1c);
          *(void **)(pAVar4 + 0x10) = pvVar15;
          uVar12 = *(uint *)(pAVar4 + 0x18);
          uVar13 = uVar12 + 1;
        }
        *(uint *)(pAVar4 + 0x18) = uVar13;
        *(undefined8 *)((long)pvVar15 + (ulong)uVar12 * 8) = local_b0;
        uVar11 = uVar12 + 2;
        if (uVar18 < uVar11) {
          uVar13 = (uVar12 + 3 >> 1) + uVar13;
          *(uint *)(pAVar4 + 0x1c) = uVar13;
          pvVar15 = realloc(pvVar15,(ulong)uVar13 * 8);
          uVar13 = *(uint *)(pAVar4 + 0x18);
          *(void **)(pAVar4 + 0x10) = pvVar15;
          uVar11 = uVar13 + 1;
        }
        *(uint *)(pAVar4 + 0x18) = uVar11;
        *(undefined8 *)((long)pvVar15 + (ulong)uVar13 * 8) = uVar23;
        local_80 = uVar23;
        local_78 = uVar20;
LAB_00100fc8:
        bVar5 = true;
        bVar25 = false;
        break;
      case 'V':
      case 'v':
LAB_001012a9:
        fVar30 = local_68[0];
        uVar12 = *(uint *)(pAVar4 + 8);
        pvVar15 = *(void **)pAVar4;
        uVar20 = CONCAT44(local_68[0],(float)local_80);
        uVar11 = uVar12 + 1;
        if (*(uint *)(pAVar4 + 0xc) < uVar11) {
          uVar12 = (uVar12 + 2 >> 1) + uVar12;
          *(uint *)(pAVar4 + 0xc) = uVar12;
          pvVar15 = realloc(pvVar15,(ulong)uVar12 * 4);
          uVar12 = *(uint *)(pAVar4 + 8);
          *(void **)pAVar4 = pvVar15;
          uVar11 = uVar12 + 1;
        }
        *(uint *)(pAVar4 + 8) = uVar11;
        *(undefined4 *)((long)pvVar15 + (ulong)uVar12 * 4) = 2;
        uVar12 = *(uint *)(pAVar4 + 0x18);
        pvVar15 = *(void **)(pAVar4 + 0x10);
        uVar11 = uVar12 + 1;
        if (*(uint *)(pAVar4 + 0x1c) < uVar11) {
          uVar12 = (uVar12 + 2 >> 1) + uVar12;
          *(uint *)(pAVar4 + 0x1c) = uVar12;
          pvVar15 = realloc(pvVar15,(ulong)uVar12 * 8);
          uVar12 = *(uint *)(pAVar4 + 0x18);
          *(void **)(pAVar4 + 0x10) = pvVar15;
          uVar11 = uVar12 + 1;
        }
        *(uint *)(pAVar4 + 0x18) = uVar11;
        local_80 = CONCAT44(fVar30,(float)local_80);
        *(undefined8 *)((long)pvVar15 + (ulong)uVar12 * 8) = uVar20;
LAB_00100c17:
        bVar25 = false;
        break;
      case 'Z':
      case 'z':
        uVar12 = *(uint *)(pAVar4 + 8);
        pvVar15 = *(void **)pAVar4;
        uVar11 = uVar12 + 1;
        if (*(uint *)(pAVar4 + 0xc) < uVar11) {
          uVar12 = (uVar12 + 2 >> 1) + uVar12;
          *(uint *)(pAVar4 + 0xc) = uVar12;
          pvVar15 = realloc(pvVar15,(ulong)uVar12 * 4);
          uVar12 = *(uint *)(pAVar4 + 8);
          *(void **)pAVar4 = pvVar15;
          uVar11 = uVar12 + 1;
        }
        *(uint *)(pAVar4 + 8) = uVar11;
        local_80 = local_a0;
        bVar25 = true;
        *(undefined4 *)((long)pvVar15 + (ulong)uVar12 * 4) = 0;
      }
      cVar8 = *param_1;
      uVar12 = uVar22;
      if (cVar8 == '\0') goto switchD_00100ec1_caseD_42;
    } while( true );
  }
LAB_0010130f:
  bVar25 = true;
LAB_00100c48:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar25;
switchD_00100ec1_caseD_42:
  if (uVar3 < *(uint *)(pAVar4 + 8)) {
    bVar25 = *(int *)(*(long *)pAVar4 + (ulong)uVar3 * 4) == 1;
    goto LAB_00100c48;
  }
  goto LAB_0010130f;
}


