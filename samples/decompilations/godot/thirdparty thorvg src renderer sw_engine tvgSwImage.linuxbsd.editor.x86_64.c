
/* imagePrepare(SwImage*, tvg::Matrix const&, SwBBox const&, SwBBox&, SwMpool*, unsigned int) */

void imagePrepare(SwImage *param_1,Matrix *param_2,SwBBox *param_3,SwBBox *param_4,SwMpool *param_5,
                 uint param_6)

{
  float fVar1;
  float fVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  SwOutline *pSVar9;
  void *pvVar10;
  void *pvVar11;
  undefined8 *__ptr;
  uint uVar12;
  Point *pPVar13;
  long in_FS_OFFSET;
  uint uVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined8 local_68;
  float local_60;
  undefined4 local_5c;
  float local_58;
  float local_54;
  undefined4 local_50;
  float local_4c;
  Point local_48 [8];
  long local_40;
  
  uVar12 = _LC1;
  fVar8 = _LC2;
  fVar7 = _LC0;
  fVar15 = *(float *)param_2;
  fVar16 = *(float *)(param_2 + 4);
  fVar1 = *(float *)(param_2 + 0x10);
  fVar2 = *(float *)(param_2 + 0xc);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((_LC2 < (float)((uint)(fVar15 - _LC0) & _LC1)) ||
     (_LC2 < (float)((uint)(fVar1 - _LC0) & _LC1))) {
    bVar4 = (float)((uint)fVar16 & _LC1) <= _LC2;
    param_1[0x31] = (SwImage)0x0;
    fVar15 = SQRT(fVar15 * fVar15 + fVar2 * fVar2);
    uVar14 = -(uint)((float)((uint)(fVar15 - SQRT(fVar1 * fVar1 + fVar16 * fVar16)) & uVar12) <=
                    _LC3);
    *(uint *)(param_1 + 0x2c) = (uint)fVar15 & uVar14 | ~uVar14 & (uint)fVar7;
    if (bVar4) goto LAB_001000e1;
  }
  else if (_LC2 < (float)((uint)fVar16 & _LC1)) {
    param_1[0x31] = (SwImage)0x0;
    fVar15 = SQRT(fVar15 * fVar15 + fVar2 * fVar2);
    if (_LC3 < (float)(uVar12 & (uint)(fVar15 - SQRT(fVar1 * fVar1 + fVar16 * fVar16)))) {
      *(float *)(param_1 + 0x2c) = fVar7;
    }
    else {
      *(float *)(param_1 + 0x2c) = fVar15;
    }
  }
  else {
    if ((float)((uint)fVar2 & _LC1) <= _LC2) {
      param_1[0x31] = (SwImage)0x1;
      fVar15 = nearbyintf(*(float *)(param_2 + 8));
      fVar16 = nearbyintf(*(float *)(param_2 + 0x14));
      *(ulong *)(param_1 + 0x24) = CONCAT44(-(int)fVar16,-(int)fVar15);
      goto LAB_001000f3;
    }
    param_1[0x31] = (SwImage)0x0;
    fVar15 = SQRT(fVar15 * fVar15 + fVar2 * fVar2);
    if ((float)((uint)(fVar15 - SQRT(fVar1 * fVar1 + fVar16 * fVar16)) & uVar12) <= _LC3) {
      *(float *)(param_1 + 0x2c) = fVar15;
    }
    else {
      *(float *)(param_1 + 0x2c) = fVar7;
    }
LAB_001000e1:
    if ((float)((uint)fVar2 & uVar12) <= fVar8) {
      param_1[0x32] = (SwImage)0x1;
      goto LAB_001000f3;
    }
  }
  param_1[0x32] = (SwImage)0x0;
LAB_001000f3:
  pSVar9 = (SwOutline *)mpoolReqOutline(param_5,param_6);
  uVar12 = *(uint *)(pSVar9 + 0xc);
  *(SwOutline **)param_1 = pSVar9;
  if (uVar12 < 5) {
    *(undefined4 *)(pSVar9 + 0xc) = 5;
    pvVar11 = realloc(*(void **)pSVar9,0x50);
    uVar12 = *(uint *)(pSVar9 + 0x2c);
    *(void **)pSVar9 = pvVar11;
  }
  else {
    uVar12 = *(uint *)(pSVar9 + 0x2c);
  }
  if (uVar12 < 5) {
    *(undefined4 *)(pSVar9 + 0x2c) = 5;
    pvVar11 = realloc(*(void **)(pSVar9 + 0x20),5);
    iVar3 = *(int *)(pSVar9 + 0x1c);
    *(void **)(pSVar9 + 0x20) = pvVar11;
  }
  else {
    iVar3 = *(int *)(pSVar9 + 0x1c);
  }
  if (iVar3 == 0) {
    *(undefined4 *)(pSVar9 + 0x1c) = 1;
    pvVar11 = realloc(*(void **)(pSVar9 + 0x10),4);
    *(void **)(pSVar9 + 0x10) = pvVar11;
  }
  if (*(int *)(pSVar9 + 0x3c) == 0) {
    *(undefined4 *)(pSVar9 + 0x3c) = 1;
    pvVar11 = realloc(*(void **)(pSVar9 + 0x30),1);
    *(void **)(pSVar9 + 0x30) = pvVar11;
  }
  local_68 = 0;
  local_5c = 0;
  pPVar13 = (Point *)&local_68;
  local_60 = (float)*(uint *)(param_1 + 0x18);
  local_50 = 0;
  local_54 = (float)*(uint *)(param_1 + 0x1c);
  local_58 = local_60;
  local_4c = local_54;
  do {
    auVar17 = mathTransform(pPVar13,param_2);
    uVar12 = *(uint *)(pSVar9 + 8);
    uVar14 = uVar12 + 1;
    if (*(uint *)(pSVar9 + 0xc) < uVar14) {
      uVar12 = (uVar12 + 2 >> 1) + uVar12;
      *(uint *)(pSVar9 + 0xc) = uVar12;
      pvVar11 = realloc(*(void **)pSVar9,(ulong)uVar12 << 4);
      uVar12 = *(uint *)(pSVar9 + 8);
      *(void **)pSVar9 = pvVar11;
      uVar14 = uVar12 + 1;
    }
    else {
      pvVar11 = *(void **)pSVar9;
    }
    pvVar10 = *(void **)(pSVar9 + 0x20);
    *(uint *)(pSVar9 + 8) = uVar14;
    *(undefined1 (*) [16])((long)pvVar11 + (ulong)uVar12 * 0x10) = auVar17;
    uVar12 = *(uint *)(pSVar9 + 0x28);
    uVar14 = uVar12 + 1;
    if (*(uint *)(pSVar9 + 0x2c) < uVar14) {
      uVar12 = (uVar12 + 2 >> 1) + uVar12;
      *(uint *)(pSVar9 + 0x2c) = uVar12;
      pvVar10 = realloc(pvVar10,(ulong)uVar12);
      *(void **)(pSVar9 + 0x20) = pvVar10;
      uVar12 = *(uint *)(pSVar9 + 0x28);
      uVar14 = uVar12 + 1;
    }
    pPVar13 = pPVar13 + 8;
    *(uint *)(pSVar9 + 0x28) = uVar14;
    *(undefined1 *)((long)pvVar10 + (ulong)uVar12) = 0;
  } while (pPVar13 != local_48);
  __ptr = *(undefined8 **)pSVar9;
  uVar12 = *(uint *)(pSVar9 + 8);
  uVar5 = *__ptr;
  uVar6 = __ptr[1];
  uVar14 = uVar12 + 1;
  if (*(uint *)(pSVar9 + 0xc) < uVar14) {
    uVar12 = (uVar12 + 2 >> 1) + uVar12;
    *(uint *)(pSVar9 + 0xc) = uVar12;
    __ptr = (undefined8 *)realloc(__ptr,(ulong)uVar12 << 4);
    uVar12 = *(uint *)(pSVar9 + 8);
    *(undefined8 **)pSVar9 = __ptr;
    uVar14 = uVar12 + 1;
  }
  *(uint *)(pSVar9 + 8) = uVar14;
  __ptr[(ulong)uVar12 * 2] = uVar5;
  (__ptr + (ulong)uVar12 * 2)[1] = uVar6;
  uVar12 = *(uint *)(pSVar9 + 0x28);
  pvVar11 = *(void **)(pSVar9 + 0x20);
  uVar14 = uVar12 + 1;
  if (*(uint *)(pSVar9 + 0x2c) < uVar14) {
    uVar12 = (uVar12 + 2 >> 1) + uVar12;
    *(uint *)(pSVar9 + 0x2c) = uVar12;
    pvVar11 = realloc(pvVar11,(ulong)uVar12);
    uVar12 = *(uint *)(pSVar9 + 0x28);
    *(void **)(pSVar9 + 0x20) = pvVar11;
    uVar14 = uVar12 + 1;
  }
  *(uint *)(pSVar9 + 0x28) = uVar14;
  *(undefined1 *)((long)pvVar11 + (ulong)uVar12) = 0;
  iVar3 = *(int *)(pSVar9 + 8);
  uVar12 = *(uint *)(pSVar9 + 0x18);
  uVar14 = uVar12 + 1;
  if (*(uint *)(pSVar9 + 0x1c) < uVar14) {
    uVar12 = (uVar12 + 2 >> 1) + uVar12;
    *(uint *)(pSVar9 + 0x1c) = uVar12;
    pvVar11 = realloc(*(void **)(pSVar9 + 0x10),(ulong)uVar12 << 2);
    uVar12 = *(uint *)(pSVar9 + 0x18);
    *(void **)(pSVar9 + 0x10) = pvVar11;
    uVar14 = uVar12 + 1;
  }
  else {
    pvVar11 = *(void **)(pSVar9 + 0x10);
  }
  *(uint *)(pSVar9 + 0x18) = uVar14;
  pvVar10 = *(void **)(pSVar9 + 0x30);
  *(int *)((long)pvVar11 + (ulong)uVar12 * 4) = iVar3 + -1;
  uVar12 = *(uint *)(pSVar9 + 0x38);
  uVar14 = uVar12 + 1;
  if (*(uint *)(pSVar9 + 0x3c) < uVar14) {
    uVar12 = (uVar12 + 2 >> 1) + uVar12;
    *(uint *)(pSVar9 + 0x3c) = uVar12;
    pvVar10 = realloc(pvVar10,(ulong)uVar12);
    uVar12 = *(uint *)(pSVar9 + 0x38);
    *(void **)(pSVar9 + 0x30) = pvVar10;
    uVar14 = uVar12 + 1;
  }
  *(uint *)(pSVar9 + 0x38) = uVar14;
  *(undefined1 *)((long)pvVar10 + (ulong)uVar12) = 1;
  *(SwOutline **)param_1 = pSVar9;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    mathUpdateOutlineBBox(pSVar9,param_3,param_4,(bool)param_1[0x31]);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* imageGenRle(SwImage*, SwBBox const&, bool) */

bool imageGenRle(SwImage *param_1,SwBBox *param_2,bool param_3)

{
  long lVar1;
  
  lVar1 = rleRender(*(SwRle **)(param_1 + 8),*(SwOutline **)param_1,param_2,param_3);
  *(long *)(param_1 + 8) = lVar1;
  return lVar1 != 0;
}



/* imageDelOutline(SwImage*, SwMpool*, unsigned int) */

void imageDelOutline(SwImage *param_1,SwMpool *param_2,uint param_3)

{
  mpoolRetOutline(param_2,param_3);
  *(undefined8 *)param_1 = 0;
  return;
}



/* imageReset(SwImage*) */

void imageReset(SwImage *param_1)

{
  rleReset(*(SwRle **)(param_1 + 8));
  return;
}



/* imageFree(SwImage*) */

void imageFree(SwImage *param_1)

{
  rleFree(*(SwRle **)(param_1 + 8));
  return;
}


