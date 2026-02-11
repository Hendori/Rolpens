
/* rleRender(SwRle*, SwOutline const*, SwBBox const&, bool) */

undefined8 rleRender(SwRle *param_1,SwOutline *param_2,SwBBox *param_3,bool param_4)

{
  ulong uVar1;
  RleWorker *pRVar2;
  long lVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  undefined8 uVar7;
  long *plVar8;
  char *pcVar9;
  long *plVar10;
  undefined1 *puVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined1 *puVar17;
  int iVar18;
  int iVar19;
  long lVar20;
  undefined1 *puVar21;
  long lVar22;
  long in_FS_OFFSET;
  long lVar23;
  SwPoint *pSVar24;
  undefined1 local_4030 [16384];
  
  puVar17 = &stack0xffffffffffffffd0;
  do {
    puVar11 = puVar17;
    *(undefined8 *)(puVar11 + -0x1000) = *(undefined8 *)(puVar11 + -0x1000);
    puVar17 = puVar11 + -0x1000;
  } while (puVar11 + -0x1000 != local_4030);
  uVar7 = *(undefined8 *)param_3;
  uVar4 = *(undefined8 *)(param_3 + 8);
  lVar15 = *(long *)param_3;
  lVar14 = *(long *)(param_3 + 8);
  puVar17 = puVar11 + -0x1018;
  *(undefined8 *)(puVar11 + 0x2ff0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(puVar11 + -0x1960) = uVar7;
  *(undefined8 *)(puVar11 + -0x1958) = uVar4;
  uVar7 = *(undefined8 *)(param_3 + 0x10);
  uVar4 = *(undefined8 *)(param_3 + 0x18);
  *(undefined1 (*) [16])(puVar11 + -0x1918) = (undefined1  [16])0x0;
  *(undefined8 *)(puVar11 + -0x1950) = uVar7;
  *(undefined8 *)(puVar11 + -0x1948) = uVar4;
  *(undefined1 (*) [16])(puVar11 + -0x1930) = (undefined1  [16])0x0;
  lVar22 = *(long *)(puVar11 + -0x1948);
  *(undefined1 **)(puVar11 + -0x1048) = puVar17;
  lVar23 = lVar22 - lVar14;
  *(undefined8 *)(puVar11 + -0x1040) = 0x4000;
  *(undefined1 **)(puVar11 + -0x1038) = puVar17;
  puVar11[-0x1028] = 1;
  *(undefined8 *)(puVar11 + -0x1920) = 0;
  *(SwOutline **)(puVar11 + -0x1058) = param_2;
  *(undefined8 *)(puVar11 + -0x1050) = 0x100;
  puVar11[-0x1027] = param_4;
  *(long *)(puVar11 + -0x1940) = *(long *)(puVar11 + -0x1950) - lVar15;
  *(long *)(puVar11 + -0x1938) = lVar23;
  if (param_1 == (SwRle *)0x0) {
    *(long *)(puVar11 + -0x1ca8) = lVar22;
    *(long *)(puVar11 + -0x1c98) = lVar14;
    *(undefined8 *)(puVar11 + -0x1cb0) = 0x101399;
    param_1 = (SwRle *)calloc(1,0x10);
    lVar14 = *(long *)(puVar11 + -0x1c98);
    lVar22 = *(long *)(puVar11 + -0x1ca8);
  }
  *(SwRle **)(puVar11 + -0x1978) = param_1;
  lVar15 = lVar23 + 0xff;
  if (-1 < lVar23) {
    lVar15 = lVar23;
  }
  iVar19 = (int)((ulong)lVar15 >> 8);
  if (iVar19 == 0) {
    iVar18 = 1;
    iVar19 = 0;
  }
  else {
    iVar18 = 0x27;
    if (iVar19 < 0x28) {
      iVar18 = iVar19;
    }
    if (iVar19 < 1) {
LAB_0010134b:
      uVar7 = *(undefined8 *)(puVar11 + -0x1978);
LAB_00101265:
      if (*(long *)(puVar11 + 0x2ff0) == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar7;
      }
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar11 + -0x1cb0) = &UNK_001013af;
      __stack_chk_fail();
    }
    iVar19 = iVar18 + -1;
  }
  *(int *)(puVar11 + -0x1c34) = iVar19;
  lVar15 = 0x4000;
  *(int *)(puVar11 + -0x1c1c) = iVar18;
  iVar18 = 0;
  *(undefined1 **)(puVar11 + -0x1c70) = puVar11 + -0x1bf8;
  iVar19 = 0x100;
LAB_00100c9c:
  *(long *)(puVar11 + -0x1bf8) = lVar14;
  *(int *)(puVar11 + -0x1c20) = iVar18;
  pRVar2 = (RleWorker *)(puVar11 + -0x1978);
  *(long *)(puVar11 + -0x1c28) = lVar22;
  lVar23 = iVar19 + lVar14;
  if (lVar22 < iVar19 + lVar14) {
    lVar23 = lVar22;
  }
  puVar21 = puVar11 + -0x1c18;
  if (iVar18 == *(int *)(puVar11 + -0x1c34)) {
    lVar23 = lVar22;
  }
  *(long *)(puVar11 + -0x1bf0) = lVar23;
  *(long *)(puVar11 + -0x1c30) = lVar23;
  plVar8 = *(long **)(puVar11 + -0x1c70);
  do {
    *(undefined1 **)(puVar11 + -0x1038) = puVar17;
    lVar22 = lVar23 - lVar14;
    uVar6 = (int)lVar22 * 8;
    *(long *)(puVar11 + -0x1030) = lVar22;
    if ((uVar6 & 0x1f) != 0) {
      uVar6 = (uVar6 + 0x20) - (uVar6 & 0x1f);
    }
    *(undefined1 **)(puVar11 + -0x1920) = puVar17 + (int)uVar6;
    if ((puVar17 + (int)uVar6 < puVar17 + lVar15) &&
       (lVar15 = lVar15 - (int)uVar6, *(long *)(puVar11 + -0x1918) = lVar15 >> 5, 0x20 < lVar15)) {
      if (0 < lVar22) {
        *(undefined8 *)(puVar11 + -0x1cb0) = 0x100ddb;
        memset(puVar17,0,lVar22 * 8);
      }
      plVar10 = *(long **)(puVar11 + -0x1058);
      puVar11[-0x1028] = 1;
      *(undefined8 *)(puVar11 + -0x1910) = 0;
      uVar13 = plVar10[2];
      uVar6 = *(uint *)(plVar10 + 3);
      *(long *)(puVar11 + -0x1958) = lVar14;
      *(long *)(puVar11 + -0x1948) = lVar23;
      *(long *)(puVar11 + -0x1938) = lVar22;
      if (uVar13 < uVar13 + (ulong)uVar6 * 4) {
        *(long *)(puVar11 + -0x1c68) = lVar22;
        cVar5 = '\x01';
        iVar19 = 0;
        *(ulong *)(puVar11 + -0x1c78) = uVar13;
        *(long **)(puVar11 + -0x1c60) = plVar8;
        *(long *)(puVar11 + -0x1c58) = lVar23;
        *(long *)(puVar11 + -0x1c50) = lVar14;
        do {
          lVar20 = (long)iVar19;
          lVar14 = *plVar10;
          lVar22 = plVar10[4];
          plVar8 = (long *)(lVar20 * 0x10 + lVar14);
          lVar23 = *plVar8;
          lVar15 = plVar8[1];
          *(undefined4 *)(puVar11 + -0x1c38) = **(undefined4 **)(puVar11 + -0x1c78);
          lVar23 = lVar23 << 2;
          *(long *)(puVar11 + -0x1c98) = lVar23;
          *(long *)(puVar11 + -0x1c90) = lVar15 << 2;
          lVar15 = *(long *)(puVar11 + -0x1c90);
          if (cVar5 == '\0') {
            *(long **)(puVar11 + -0x1ca8) = plVar8;
            *(undefined8 *)(puVar11 + -0x1cb0) = 0x100e91;
            cVar5 = _recordCell(pRVar2);
            plVar8 = *(long **)(puVar11 + -0x1ca8);
            if (cVar5 != '\0') goto LAB_00100e9d;
LAB_00101230:
            lVar14 = *(long *)(puVar11 + -0x1c50);
            plVar8 = *(long **)(puVar11 + -0x1c60);
            lVar23 = *(long *)(puVar11 + -0x1c58);
            lVar22 = (*(long *)(puVar11 + -0x1c68) >> 1) + lVar14;
            if (lVar22 == lVar14) goto LAB_00101256;
            goto LAB_00100d12;
          }
LAB_00100e9d:
          lVar15 = lVar15 >> 8;
          *(long **)(puVar11 + -0x1c80) = plVar8;
          *(long *)(puVar11 + -0x1ca8) = lVar15;
          lVar3 = *(long *)(puVar11 + -0x1960);
          puVar11[-0x1028] = 0;
          *(undefined1 (*) [16])(puVar11 + -0x1930) = (undefined1  [16])0x0;
          lVar16 = lVar23 >> 8;
          if (*(long *)(puVar11 + -0x1950) < lVar23 >> 8) {
            lVar16 = *(long *)(puVar11 + -0x1950);
          }
          if (lVar16 < lVar3) {
            lVar16 = lVar3;
          }
          *(long *)(puVar11 + -0x1968) = lVar15 - *(long *)(puVar11 + -0x1958);
          *(long *)(puVar11 + -0x1970) = lVar16 - lVar3;
          *(undefined8 *)(puVar11 + -0x1cb0) = 0x100f0f;
          cVar5 = _setCell(pRVar2,lVar16,lVar15);
          lVar15 = *(long *)(puVar11 + -0x1ca8);
          uVar13 = *(ulong *)(puVar11 + -0x1c80);
          if (cVar5 == '\0') goto LAB_00101230;
          *(undefined8 *)(puVar11 + -0x1908) = *(undefined8 *)(puVar11 + -0x1c98);
          *(undefined8 *)(puVar11 + -0x1900) = *(undefined8 *)(puVar11 + -0x1c90);
          uVar12 = lVar14 + (ulong)*(uint *)(puVar11 + -0x1c38) * 0x10;
          lVar23 = lVar15;
          lVar14 = lVar15;
          if (uVar13 < uVar12) {
            pcVar9 = (char *)(lVar22 + 1 + lVar20);
            *(long **)(puVar11 + -0x1c48) = plVar10;
            *(long *)(puVar11 + -0x1c40) = lVar15;
            *(undefined8 *)(puVar11 + -0x1c80) = *(undefined8 *)(puVar11 + -0x1c98);
            do {
              while (*pcVar9 == '\0') {
                lVar14 = *(long *)(uVar13 + 0x18);
                lVar22 = *(long *)(puVar11 + -0x1900) >> 8;
                *(long *)(puVar11 + -0x1ca8) = *(long *)(uVar13 + 0x10) << 2;
                *(long *)(puVar11 + -0x1ca0) = lVar14 << 2;
                lVar15 = *(long *)(puVar11 + -0x1ca0) >> 8;
                lVar14 = lVar15;
                if (lVar22 <= lVar15) {
                  lVar14 = lVar22;
                }
                if (lVar14 < *(long *)(puVar11 + -0x1948)) {
                  if (lVar22 < lVar15) {
                    lVar22 = lVar15;
                  }
                  if (lVar22 < *(long *)(puVar11 + -0x1958)) goto LAB_00101290;
                  *(undefined8 *)(puVar11 + -0x1cb0) = 0x101041;
                  cVar5 = _lineTo(pRVar2,*(SwPoint **)(puVar11 + -0x1ca8));
                  if (cVar5 == '\0') goto LAB_00101230;
                }
                else {
LAB_00101290:
                  *(undefined8 *)(puVar11 + -0x1908) = *(undefined8 *)(puVar11 + -0x1ca8);
                  *(undefined8 *)(puVar11 + -0x1900) = *(undefined8 *)(puVar11 + -0x1ca0);
                }
                uVar13 = uVar13 + 0x10;
                pcVar9 = pcVar9 + 1;
                if (uVar12 <= uVar13) goto LAB_00101060;
              }
              uVar1 = uVar13 + 0x30;
              if (uVar12 < uVar1) {
                if (uVar12 != uVar13 + 0x20) break;
                lVar14 = *(long *)(uVar13 + 0x28);
                *(long *)(puVar11 + -0x1c18) = *(long *)(uVar13 + 0x20) << 2;
                *(long *)(puVar11 + -0x1c10) = lVar14 << 2;
                lVar14 = *(long *)(uVar13 + 0x18);
                *(long *)(puVar11 + -0x1c08) = *(long *)(uVar13 + 0x10) << 2;
                *(long *)(puVar11 + -0x1c00) = lVar14 << 2;
                *(undefined8 *)(puVar11 + -0x1cb0) = 0x100fc3;
                cVar5 = _cubicTo(pRVar2,puVar11 + -0x1c08,puVar21,*(SwPoint **)(puVar11 + -0x1c80));
              }
              else {
                lVar14 = *(long *)(uVar13 + 0x28);
                lVar22 = *(long *)(uVar13 + 0x38);
                pSVar24 = (SwPoint *)(*(long *)(uVar13 + 0x30) << 2);
                *(long *)(puVar11 + -0x1c18) = *(long *)(uVar13 + 0x20) << 2;
                *(long *)(puVar11 + -0x1c10) = lVar14 << 2;
                lVar14 = *(long *)(uVar13 + 0x10);
                lVar15 = *(long *)(uVar13 + 0x18);
                *(SwPoint **)(puVar11 + -0x1ca8) = pSVar24;
                *(long *)(puVar11 + -0x1ca0) = lVar22 << 2;
                *(long *)(puVar11 + -0x1c08) = lVar14 << 2;
                *(long *)(puVar11 + -0x1c00) = lVar15 << 2;
                *(undefined8 *)(puVar11 + -0x1cb0) = 0x10121f;
                cVar5 = _cubicTo(pRVar2,puVar11 + -0x1c08,puVar21,pSVar24);
              }
              if (cVar5 == '\0') goto LAB_00101230;
              pcVar9 = pcVar9 + 3;
              uVar13 = uVar1;
            } while (uVar1 < uVar12);
LAB_00101060:
            lVar14 = *(long *)(puVar11 + -0x1c40);
            plVar10 = *(long **)(puVar11 + -0x1c48);
            lVar15 = *(long *)(puVar11 + -0x1900) >> 8;
            lVar23 = lVar15;
            if (lVar14 <= lVar15) {
              lVar23 = lVar14;
            }
          }
          if (lVar23 < *(long *)(puVar11 + -0x1948)) {
            if (lVar15 <= lVar14) {
              lVar15 = lVar14;
            }
            if (lVar15 < *(long *)(puVar11 + -0x1958)) goto LAB_001012a2;
            *(undefined8 *)(puVar11 + -0x1cb0) = 0x1010b5;
            cVar5 = _lineTo(pRVar2,*(SwPoint **)(puVar11 + -0x1c98));
            if (cVar5 == '\0') goto LAB_00101230;
          }
          else {
LAB_001012a2:
            *(undefined8 *)(puVar11 + -0x1908) = *(undefined8 *)(puVar11 + -0x1c98);
            *(undefined8 *)(puVar11 + -0x1900) = *(undefined8 *)(puVar11 + -0x1c90);
          }
          uVar6 = *(uint *)(plVar10 + 3);
          lVar14 = plVar10[2];
          *(long *)(puVar11 + -0x1c78) = *(long *)(puVar11 + -0x1c78) + 4;
          cVar5 = puVar11[-0x1028];
          iVar19 = *(int *)(puVar11 + -0x1c38) + 1;
        } while (*(ulong *)(puVar11 + -0x1c78) < lVar14 + (ulong)uVar6 * 4);
        lVar22 = *(long *)(puVar11 + -0x1c68);
        plVar8 = *(long **)(puVar11 + -0x1c60);
        lVar23 = *(long *)(puVar11 + -0x1c58);
        lVar14 = *(long *)(puVar11 + -0x1c50);
        if (cVar5 == '\0') {
          *(undefined8 *)(puVar11 + -0x1cb0) = 0x101368;
          cVar5 = _recordCell(pRVar2);
          if (cVar5 == '\0') goto LAB_00100d00;
        }
        if ((*(long *)(puVar11 + -0x1910) != 0) && (0 < *(long *)(puVar11 + -0x1030))) {
          *(undefined1 **)(puVar11 + -0x1c98) = puVar21;
          lVar14 = 0;
          *(long **)(puVar11 + -0x1ca8) = plVar8;
          do {
            iVar18 = 0;
            plVar8 = *(long **)(*(long *)(puVar11 + -0x1038) + lVar14 * 8);
            iVar19 = 0;
            if (plVar8 != (long *)0x0) {
              do {
                lVar22 = *plVar8;
                lVar15 = (long)iVar19;
                if ((iVar18 != 0) && (lVar15 < lVar22)) {
                  *(undefined8 *)(puVar11 + -0x1cb0) = 0x1011cb;
                  _horizLine(pRVar2,lVar15,lVar14,(long)iVar18 << 9,lVar22 - lVar15);
                  lVar22 = *plVar8;
                }
                iVar18 = iVar18 + (int)plVar8[1];
                lVar15 = (long)iVar18 * 0x200 - plVar8[2];
                if ((lVar15 != 0) && (-1 < lVar22)) {
                  *(undefined8 *)(puVar11 + -0x1cb0) = 0x101190;
                  _horizLine(pRVar2,lVar22,lVar14,lVar15,1);
                  lVar22 = *plVar8;
                }
                plVar8 = (long *)plVar8[3];
                iVar19 = (int)lVar22 + 1;
              } while (plVar8 != (long *)0x0);
              if (iVar18 != 0) {
                *(undefined8 *)(puVar11 + -0x1cb0) = 0x1012d9;
                _horizLine(pRVar2,(long)iVar19,lVar14,(long)iVar18 * 0x200,
                           *(long *)(puVar11 + -0x1940) - (long)iVar19);
              }
            }
            lVar14 = lVar14 + 1;
          } while (lVar14 < *(long *)(puVar11 + -0x1030));
          plVar8 = *(long **)(puVar11 + -0x1ca8);
          puVar21 = *(undefined1 **)(puVar11 + -0x1c98);
        }
      }
      plVar10 = plVar8 + -2;
      if (plVar10 < *(long **)(puVar11 + -0x1c70)) break;
    }
    else {
LAB_00100d00:
      lVar22 = (lVar22 >> 1) + lVar14;
      if (lVar22 == lVar14) {
LAB_00101256:
        *(undefined8 *)(puVar11 + -0x1cb0) = 0x101263;
        free(*(void **)(puVar11 + -0x1978));
        uVar7 = 0;
        goto LAB_00101265;
      }
LAB_00100d12:
      if ((long)*(int *)(puVar11 + -0x1050) <= lVar14 - lVar23) {
        *(int *)(puVar11 + -0x104c) = *(int *)(puVar11 + -0x104c) + 1;
      }
      plVar8[3] = lVar22;
      plVar10 = plVar8 + 2;
      *plVar8 = lVar22;
      plVar8 = *(long **)(puVar11 + -0x1c70);
      *plVar10 = lVar14;
      if (plVar10 < plVar8) break;
    }
    puVar17 = *(undefined1 **)(puVar11 + -0x1048);
    lVar23 = plVar10[1];
    lVar14 = *plVar10;
    lVar15 = *(long *)(puVar11 + -0x1040);
    plVar8 = plVar10;
  } while( true );
  lVar14 = *(long *)(puVar11 + -0x1c30);
  lVar22 = *(long *)(puVar11 + -0x1c28);
  iVar18 = *(int *)(puVar11 + -0x1c20) + 1;
  if (iVar18 == *(int *)(puVar11 + -0x1c1c)) goto LAB_0010134b;
  iVar19 = *(int *)(puVar11 + -0x1050);
  puVar17 = *(undefined1 **)(puVar11 + -0x1048);
  lVar15 = *(long *)(puVar11 + -0x1040);
  goto LAB_00100c9c;
}



/* rleRender(SwBBox const*) */

undefined8 * rleRender(SwBBox *param_1)

{
  short sVar1;
  short sVar2;
  undefined8 *puVar3;
  short *psVar4;
  short *psVar5;
  short *psVar6;
  ulong uVar7;
  uint uVar8;
  
  sVar1 = *(short *)param_1;
  sVar2 = *(short *)(param_1 + 0x10);
  uVar8 = (int)*(undefined8 *)(param_1 + 0x18) - (int)*(ulong *)(param_1 + 8);
  uVar7 = *(ulong *)(param_1 + 8) & 0xffffffff;
  puVar3 = (undefined8 *)malloc(0x10);
  psVar4 = (short *)malloc((ulong)(uVar8 & 0xffff) * 8);
  *puVar3 = psVar4;
  puVar3[1] = CONCAT44(uVar8,uVar8) & 0xffff0000ffff;
  if ((short)uVar8 != 0) {
    psVar5 = psVar4;
    do {
      psVar5[1] = (short)uVar7;
      psVar6 = psVar5 + 4;
      uVar7 = (ulong)((int)uVar7 + 1);
      *psVar5 = sVar1;
      psVar5[2] = sVar2 - sVar1;
      *(undefined1 *)(psVar5 + 3) = 0xff;
      psVar5 = psVar6;
    } while (psVar6 != psVar4 + (ulong)(uVar8 & 0xffff) * 4);
  }
  return puVar3;
}



/* rleReset(SwRle*) */

void rleReset(SwRle *param_1)

{
  if (param_1 != (SwRle *)0x0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}



/* rleFree(SwRle*) */

void rleFree(SwRle *param_1)

{
  if (param_1 != (SwRle *)0x0) {
    if (*(void **)param_1 != (void *)0x0) {
      free(*(void **)param_1);
    }
    free(param_1);
    return;
  }
  return;
}



/* rleClip(SwRle*, SwRle const*) */

undefined8 rleClip(SwRle *param_1,SwRle *param_2)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  ushort *__ptr;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  ushort *puVar9;
  ushort *puVar10;
  undefined4 uVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  ushort *puVar15;
  ulong uVar16;
  bool bVar17;
  
  uVar5 = *(uint *)(param_1 + 0xc);
  if (uVar5 != 0) {
    uVar6 = *(uint *)(param_2 + 0xc);
    if (uVar6 != 0) {
      uVar14 = uVar6;
      if (uVar6 <= uVar5) {
        uVar14 = uVar5;
      }
      uVar16 = (ulong)uVar14;
      puVar7 = (uint *)malloc(uVar16 << 3);
      __ptr = *(ushort **)param_1;
      puVar10 = *(ushort **)param_2;
      puVar1 = puVar10 + (ulong)uVar6 * 4;
      if ((__ptr < __ptr + (ulong)uVar5 * 4) &&
         (puVar13 = puVar7, puVar15 = __ptr, puVar10 < puVar1)) {
        do {
          uVar2 = puVar10[1];
          puVar12 = puVar13;
          if (puVar15[1] < uVar2) {
            puVar15 = puVar15 + 4;
            bVar17 = puVar10 < puVar1;
          }
          else if (uVar2 < puVar15[1]) {
            puVar10 = puVar10 + 4;
            bVar17 = puVar10 < puVar1;
          }
          else {
            bVar17 = puVar10 < puVar1;
            if (((int)uVar16 != 0) && (puVar9 = puVar10, bVar17)) {
              while (puVar12 = puVar13, puVar9[1] == uVar2) {
                uVar3 = *puVar9;
                uVar4 = *puVar15;
                uVar14 = (uint)puVar9[2] + (uint)uVar3;
                uVar6 = (uint)puVar15[2] + (uint)uVar4;
                if ((uVar4 <= uVar14) && (uVar3 <= uVar6)) {
                  uVar8 = (uint)uVar3;
                  if (uVar3 <= uVar4) {
                    uVar8 = (uint)uVar4;
                  }
                  if (uVar14 < uVar6) {
                    uVar6 = uVar14;
                  }
                  if (0 < (int)(uVar6 - uVar8)) {
                    *(short *)(puVar13 + 1) = (short)(uVar6 - uVar8);
                    uVar16 = (ulong)((int)uVar16 - 1);
                    puVar12 = puVar13 + 2;
                    *puVar13 = (uint)uVar2 << 0x10 | uVar8;
                    *(char *)((long)puVar13 + 6) =
                         (char)((uint)(byte)puVar15[3] * (uint)(byte)puVar9[3] + 0xff >> 8);
                  }
                }
                if ((puVar1 <= puVar9 + 4) || ((int)uVar16 == 0)) break;
                puVar9 = puVar9 + 4;
                puVar13 = puVar12;
                uVar2 = puVar10[1];
              }
            }
            puVar15 = puVar15 + 4;
          }
        } while ((puVar15 < __ptr + (ulong)uVar5 * 4) && (puVar13 = puVar12, bVar17));
        uVar11 = (undefined4)((long)puVar12 - (long)puVar7 >> 3);
      }
      else {
        uVar11 = 0;
      }
      free(__ptr);
      *(uint **)param_1 = puVar7;
      *(ulong *)(param_1 + 8) = CONCAT44(uVar11,uVar11);
      return 1;
    }
  }
  return 0;
}



/* rleClip(SwRle*, SwBBox const*) */

undefined8 rleClip(SwRle *param_1,SwBBox *param_2)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  ushort *__ptr;
  undefined8 uVar4;
  ushort *puVar5;
  ushort *puVar6;
  ushort *puVar7;
  short sVar8;
  ushort *puVar9;
  ushort *puVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  ushort uVar14;
  ushort uVar15;
  ulong uVar16;
  int iVar17;
  
  uVar12 = *(uint *)(param_1 + 0xc);
  if (uVar12 == 0) {
    return 0;
  }
  uVar16 = (ulong)uVar12;
  puVar6 = (ushort *)malloc(uVar16 * 8);
  __ptr = *(ushort **)param_1;
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  uVar14 = (ushort)*(undefined8 *)param_2;
  iVar17 = (int)(short)uVar14;
  sVar8 = (short)*(undefined8 *)(param_2 + 8);
  iVar1 = iVar17 + -1 + (int)(short)(*(short *)(param_2 + 0x10) - uVar14);
  if (__ptr < __ptr + uVar16 * 4) {
    puVar10 = puVar6;
    puVar5 = __ptr;
    while( true ) {
      puVar7 = puVar5 + 4;
      uVar2 = puVar5[1];
      puVar9 = puVar10;
      if ((int)(short)((short)uVar4 - sVar8) + (int)sVar8 <= (int)(uint)uVar2) break;
      if (((int)sVar8 <= (int)(uint)uVar2) && (uVar3 = *puVar5, (int)(uint)uVar3 <= iVar1)) {
        uVar15 = puVar5[2];
        if (iVar17 < (int)((uint)uVar3 + (uint)uVar15)) {
          uVar11 = (uint)uVar3;
          if ((int)uVar11 < iVar17) {
            if (iVar1 - iVar17 < (int)((uint)uVar15 - (iVar17 - uVar11))) {
              uVar15 = ((short)iVar1 - uVar14) + 1;
            }
            else {
              uVar15 = (uVar3 + uVar15) - uVar14;
            }
            puVar10[2] = uVar15;
            *puVar10 = uVar14;
          }
          else {
            *puVar10 = uVar3;
            if ((int)(iVar1 - uVar11) < (int)(uint)uVar15) {
              uVar15 = ((short)iVar1 + 1) - uVar3;
            }
            puVar10[2] = uVar15;
          }
          if (uVar15 != 0) {
            puVar10[1] = uVar2;
            puVar9 = puVar10 + 4;
            uVar12 = uVar12 - 1;
            *(char *)(puVar10 + 3) = (char)puVar5[3];
          }
        }
      }
      if ((uVar12 == 0) || (puVar10 = puVar9, puVar5 = puVar7, __ptr + uVar16 * 4 <= puVar7)) break;
    }
    uVar13 = (undefined4)((long)puVar9 - (long)puVar6 >> 3);
  }
  else {
    uVar13 = 0;
  }
  free(__ptr);
  *(ushort **)param_1 = puVar6;
  *(ulong *)(param_1 + 8) = CONCAT44(uVar13,uVar13);
  return 1;
}


