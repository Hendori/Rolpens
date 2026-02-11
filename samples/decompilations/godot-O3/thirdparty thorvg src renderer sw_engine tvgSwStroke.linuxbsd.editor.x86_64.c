
/* strokeFree(SwStroke*) */

void strokeFree(SwStroke *param_1)

{
  if (param_1 != (SwStroke *)0x0) {
    if (*(void **)(param_1 + 0x78) != (void *)0x0) {
      free(*(void **)(param_1 + 0x78));
    }
    if (*(void **)(param_1 + 0x80) != (void *)0x0) {
      free(*(void **)(param_1 + 0x80));
    }
    if (*(void **)(param_1 + 0x98) != (void *)0x0) {
      free(*(void **)(param_1 + 0x98));
    }
    if (*(void **)(param_1 + 0xa0) != (void *)0x0) {
      free(*(void **)(param_1 + 0xa0));
    }
    fillFree(*(SwFill **)(param_1 + 0x68));
    free(param_1);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strokeReset(SwStroke*, tvg::RenderShape const*, tvg::Matrix const&) */

void strokeReset(SwStroke *param_1,RenderShape *param_2,Matrix *param_3)

{
  float *pfVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  
  pfVar1 = *(float **)(param_2 + 0x28);
  fVar4 = (float)*(undefined8 *)(param_3 + 0xc);
  fVar6 = (float)((ulong)*(undefined8 *)(param_3 + 0xc) >> 0x20);
  fVar8 = (float)*(undefined8 *)param_3;
  fVar5 = (float)((ulong)*(undefined8 *)param_3 >> 0x20);
  auVar7._0_4_ = fVar4 * fVar4 + fVar8 * fVar8;
  auVar7._4_4_ = fVar6 * fVar6 + fVar5 * fVar5;
  auVar7._8_8_ = 0;
  auVar7 = sqrtps(auVar7,auVar7);
  *(long *)(param_1 + 0xb0) = auVar7._0_8_;
  uVar3 = _UNK_00102078;
  uVar2 = __LC1;
  if (pfVar1 == (float *)0x0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x48) = uVar2;
    *(undefined8 *)(param_1 + 0x50) = uVar3;
    fVar6 = 0.0;
  }
  else {
    fVar5 = _LC4 * pfVar1[10];
    *(long *)(param_1 + 0x48) = (long)(_LC2 * *pfVar1 * __LC3);
    *(float *)(param_1 + 0x58) = pfVar1[8];
    fVar6 = pfVar1[9];
    *(long *)(param_1 + 0x50) = (long)fVar5;
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0xffffffff;
  *(ulong *)(param_1 + 0x5c) = CONCAT44(fVar6,fVar6);
  return;
}



/* strokeParseOutline(SwStroke*, SwOutline const&) */

undefined8 strokeParseOutline(SwStroke *param_1,SwOutline *param_2)

{
  SwPoint *pSVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  char *pcVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  uint *puVar10;
  undefined8 *puVar11;
  int extraout_EDX;
  int iVar12;
  SwPoint *pSVar13;
  SwPoint *extraout_RDX;
  SwPoint *extraout_RDX_00;
  SwPoint *extraout_RDX_01;
  byte *pbVar14;
  byte *pbVar15;
  uint *puVar16;
  SwStroke SVar17;
  ulong uVar18;
  byte *pbVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  SwPoint *pSVar23;
  SwPoint *pSVar24;
  long in_FS_OFFSET;
  uint local_64;
  
  puVar10 = *(uint **)(param_2 + 0x10);
  uVar18 = (ulong)*(uint *)(param_2 + 0x18);
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  local_64 = 0;
  uVar5 = 0;
  puVar16 = puVar10;
  if (puVar10 < puVar10 + uVar18) {
    do {
      uVar2 = *puVar16;
      lVar7 = *(long *)param_2;
      if ((uint)uVar5 < uVar2) {
        pSVar13 = (SwPoint *)(uVar5 * 0x10);
        pSVar23 = pSVar13 + lVar7;
        pcVar6 = (char *)(uVar5 + *(long *)(param_2 + 0x20));
        uVar8 = *(undefined8 *)pSVar23;
        uVar4 = *(undefined8 *)(pSVar23 + 8);
        if (*pcVar6 == '\x01') {
          uVar8 = 0;
          goto LAB_00101de5;
        }
        if (*(long *)(param_2 + 0x30) == 0) {
          *(undefined8 *)(param_1 + 0x10) = uVar8;
          *(undefined8 *)(param_1 + 0x18) = uVar4;
          *(undefined2 *)(param_1 + 0xb8) = 1;
          if (*(int *)(param_1 + 0x5c) != 1) goto LAB_00101c33;
LAB_00101db9:
          SVar17 = (SwStroke)(*(int *)(param_1 + 0x58) == 2);
        }
        else {
          SVar17 = *(SwStroke *)(*(long *)(param_2 + 0x30) + (ulong)local_64);
          param_1[0xb8] = (SwStroke)0x1;
          *(undefined8 *)(param_1 + 0x10) = uVar8;
          *(undefined8 *)(param_1 + 0x18) = uVar4;
          param_1[0xb9] = SVar17;
          if (*(int *)(param_1 + 0x5c) == 1) {
            if (SVar17 == (SwStroke)0x0) goto LAB_00101db9;
            SVar17 = (SwStroke)0x0;
          }
          else {
LAB_00101c33:
            SVar17 = (SwStroke)0x1;
          }
        }
        param_1[0xba] = SVar17;
        *(undefined8 *)param_1 = 0;
        pSVar24 = (SwPoint *)(lVar7 + (ulong)uVar2 * 0x10);
        *(undefined8 *)(param_1 + 0x30) = uVar8;
        *(undefined8 *)(param_1 + 0x38) = uVar4;
        while (pcVar6 = pcVar6 + 1, pSVar23 < pSVar24) {
          while (*pcVar6 != '\0') {
            pSVar1 = pSVar23 + 0x30;
            pSVar13 = pSVar23 + 0x20;
            if (pSVar24 < pSVar1) {
              if (pSVar24 != pSVar13) goto LAB_00101cce;
              _cubicTo(param_1,*(SwPoint **)(pSVar23 + 0x10),*(SwPoint **)(pSVar23 + 0x18),
                       *(SwPoint **)pSVar24);
              pSVar13 = extraout_RDX;
            }
            else {
              _cubicTo(param_1,*(SwPoint **)(pSVar23 + 0x10),*(SwPoint **)(pSVar23 + 0x18),
                       *(SwPoint **)(pSVar23 + 0x20));
              pSVar13 = extraout_RDX_01;
            }
            pcVar6 = pcVar6 + 3;
            pSVar23 = pSVar1;
            if (pSVar24 <= pSVar1) goto LAB_00101cce;
          }
          pSVar23 = pSVar23 + 0x10;
          _lineTo(param_1,pSVar23);
          pSVar13 = extraout_RDX_00;
        }
LAB_00101cce:
        if (param_1[0xb8] == (SwStroke)0x0) {
          if (param_1[0xb9] == (SwStroke)0x0) {
            _addCap(param_1,*(longlong *)param_1,(int)pSVar13);
            uVar21 = *(int *)(param_1 + 0x90) - *(int *)(param_1 + 0xa8);
            iVar12 = extraout_EDX;
            if (uVar21 != 0) {
              _growBorder((SwStrokeBorder *)(param_1 + 0x70),uVar21);
              iVar20 = *(int *)(param_1 + 0xa8);
              uVar22 = *(uint *)(param_1 + 0x70);
              pbVar19 = (byte *)(*(long *)(param_1 + 0xa0) + -1 + (ulong)*(uint *)(param_1 + 0x90));
              puVar9 = (undefined8 *)
                       (*(long *)(param_1 + 0x98) + -0x10 + (ulong)*(uint *)(param_1 + 0x90) * 0x10)
              ;
              puVar11 = (undefined8 *)((ulong)uVar22 * 0x10 + *(long *)(param_1 + 0x78));
              pbVar14 = (byte *)((ulong)uVar22 + *(long *)(param_1 + 0x80));
              pbVar15 = pbVar14;
              if ((undefined8 *)((long)iVar20 * 0x10 + *(long *)(param_1 + 0x98)) <= puVar9) {
                do {
                  uVar8 = *puVar9;
                  uVar4 = puVar9[1];
                  puVar9 = puVar9 + -2;
                  pbVar15 = pbVar14 + 1;
                  *puVar11 = uVar8;
                  puVar11[1] = uVar4;
                  *pbVar14 = *pbVar19 & 0xf3;
                  iVar20 = *(int *)(param_1 + 0xa8);
                  puVar11 = puVar11 + 2;
                  pbVar14 = pbVar15;
                  pbVar19 = pbVar19 + -1;
                } while ((undefined8 *)((long)iVar20 * 0x10 + *(long *)(param_1 + 0x98)) <= puVar9);
                uVar22 = *(uint *)(param_1 + 0x70);
              }
              iVar12 = (int)pbVar15;
              *(int *)(param_1 + 0x90) = iVar20;
              *(uint *)(param_1 + 0x70) = uVar21 + uVar22;
              param_1[0x8c] = (SwStroke)0x0;
              param_1[0xac] = (SwStroke)0x0;
            }
            *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x30);
            *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x38);
            _addCap(param_1,*(long *)(param_1 + 0x28) + 0xb40000,iVar12);
            _borderClose((SwStrokeBorder *)(param_1 + 0x70),false);
          }
          else {
            if ((*(long *)(param_1 + 0x10) != *(long *)(param_1 + 0x30)) ||
               (*(long *)(param_1 + 0x18) != *(long *)(param_1 + 0x38))) {
              _lineTo(param_1,(SwPoint *)(param_1 + 0x30));
            }
            *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 0x28);
            lVar7 = mathDiff(*(longlong *)param_1,*(longlong *)(param_1 + 0x28));
            if (lVar7 != 0) {
              uVar21 = (uint)((ulong)lVar7 >> 0x20);
              _inside(param_1,uVar21 >> 0x1f,*(longlong *)(param_1 + 0x40));
              _outside(param_1,~uVar21 >> 0x1f,*(longlong *)(param_1 + 0x40));
            }
            _borderClose((SwStrokeBorder *)(param_1 + 0x70),false);
            _borderClose((SwStrokeBorder *)(param_1 + 0x90),true);
          }
        }
        puVar10 = *(uint **)(param_2 + 0x10);
        uVar18 = (ulong)*(uint *)(param_2 + 0x18);
      }
      uVar5 = (ulong)(uVar2 + 1);
      puVar16 = puVar16 + 1;
      local_64 = local_64 + 1;
    } while (puVar16 < puVar10 + uVar18);
  }
  uVar8 = 1;
LAB_00101de5:
  if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* strokeExportOutline(SwStroke*, SwMpool*, unsigned int) */

SwOutline * strokeExportOutline(SwStroke *param_1,SwMpool *param_2,uint param_3)

{
  uint uVar1;
  SwOutline *pSVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  long in_FS_OFFSET;
  uint local_40;
  int local_3c;
  uint local_38;
  int local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  _getCounts((SwStrokeBorder *)(ulong)*(uint *)(param_1 + 0x70),*(uint **)(param_1 + 0x80),&local_40
            );
  _getCounts((SwStrokeBorder *)(ulong)*(uint *)(param_1 + 0x90),*(uint **)(param_1 + 0xa0),&local_38
            );
  uVar5 = local_34 + local_3c;
  uVar4 = local_38 + local_40;
  pSVar2 = (SwOutline *)mpoolReqStrokeOutline(param_2,param_3);
  if (*(uint *)(pSVar2 + 0xc) < uVar4) {
    *(uint *)(pSVar2 + 0xc) = uVar4;
    pvVar3 = realloc(*(void **)pSVar2,(ulong)uVar4 << 4);
    *(void **)pSVar2 = pvVar3;
    uVar1 = *(uint *)(pSVar2 + 0x2c);
  }
  else {
    uVar1 = *(uint *)(pSVar2 + 0x2c);
  }
  if (uVar1 < uVar4) {
    *(uint *)(pSVar2 + 0x2c) = uVar4;
    pvVar3 = realloc(*(void **)(pSVar2 + 0x20),(ulong)uVar4);
    *(void **)(pSVar2 + 0x20) = pvVar3;
    uVar4 = *(uint *)(pSVar2 + 0x1c);
  }
  else {
    uVar4 = *(uint *)(pSVar2 + 0x1c);
  }
  if (uVar4 < uVar5) {
    *(uint *)(pSVar2 + 0x1c) = uVar5;
    pvVar3 = realloc(*(void **)(pSVar2 + 0x10),(ulong)uVar5 << 2);
    *(void **)(pSVar2 + 0x10) = pvVar3;
  }
  _exportBorderOutline(param_1,pSVar2,0);
  _exportBorderOutline(param_1,pSVar2,1);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


