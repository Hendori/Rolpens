
/* dividePoly(float const*, int, float*, int*, float*, int*, float, rcAxis) */

void dividePoly(float param_7,float *param_1,int param_2,long param_3,int *param_4,long param_5,
               int *param_6,uint param_8)

{
  long lVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  long in_FS_OFFSET;
  float fVar16;
  float fVar17;
  float local_78 [14];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 < 1) {
    iVar10 = 0;
    iVar12 = 0;
  }
  else {
    lVar14 = (long)param_2;
    pfVar5 = param_1 + param_8;
    pfVar3 = local_78;
    do {
      fVar17 = *pfVar5;
      pfVar4 = pfVar3 + 1;
      pfVar5 = pfVar5 + 3;
      *pfVar3 = param_7 - fVar17;
      pfVar3 = pfVar4;
    } while (pfVar4 != local_78 + lVar14);
    lVar7 = 0;
    pfVar5 = param_1;
    fVar17 = local_78[param_2 + -1];
    iVar13 = param_2 + -1;
    iVar11 = 0;
    iVar9 = 0;
    do {
      while( true ) {
        fVar2 = local_78[lVar7];
        fVar16 = *pfVar5;
        iVar6 = (int)lVar7;
        if (0.0 <= fVar2 != 0.0 <= fVar17) break;
        iVar12 = iVar11;
        if (0.0 <= fVar2) {
          iVar12 = iVar11 + 1;
          pfVar3 = (float *)(param_3 + (long)(iVar11 * 3) * 4);
          *pfVar3 = fVar16;
          pfVar3[1] = pfVar5[1];
          pfVar3[2] = pfVar5[2];
          iVar10 = iVar9;
          if (fVar2 != 0.0) goto LAB_00100173;
          fVar16 = *pfVar5;
        }
        lVar7 = lVar7 + 1;
        iVar10 = iVar9 + 1;
        pfVar3 = (float *)(param_5 + (long)(iVar9 * 3) * 4);
        *pfVar3 = fVar16;
        pfVar3[1] = pfVar5[1];
        pfVar3[2] = pfVar5[2];
        pfVar5 = pfVar5 + 3;
        fVar17 = fVar2;
        iVar13 = iVar6;
        iVar11 = iVar12;
        iVar9 = iVar10;
        if (lVar14 == lVar7) goto LAB_0010021e;
      }
      lVar15 = (long)(iVar13 * 3);
      lVar1 = (long)(iVar11 * 3) * 4;
      lVar8 = (long)(iVar11 * 3) + 1;
      pfVar3 = (float *)(param_3 + lVar1);
      fVar17 = fVar17 / (fVar17 - fVar2);
      *pfVar3 = (fVar16 - param_1[lVar15]) * fVar17 + param_1[lVar15];
      *(float *)(param_3 + lVar8 * 4) =
           (pfVar5[1] - param_1[lVar15 + 1]) * fVar17 + param_1[lVar15 + 1];
      *(float *)(param_3 + 4 + lVar8 * 4) =
           (pfVar5[2] - param_1[lVar15 + 2]) * fVar17 + param_1[lVar15 + 2];
      lVar8 = (long)(iVar9 * 3) * 4;
      pfVar4 = (float *)(param_5 + lVar8);
      *pfVar4 = *pfVar3;
      pfVar4[1] = pfVar3[1];
      iVar10 = iVar9 + 1;
      pfVar4[2] = pfVar3[2];
      iVar12 = iVar11 + 1;
      if (fVar2 <= 0.0) {
        if (fVar2 < 0.0) {
          pfVar3 = (float *)(param_5 + 0xc + lVar8);
          iVar10 = iVar9 + 2;
          *pfVar3 = *pfVar5;
          pfVar3[1] = pfVar5[1];
          pfVar3[2] = pfVar5[2];
        }
      }
      else {
        pfVar3 = (float *)(param_3 + 0xc + lVar1);
        iVar12 = iVar11 + 2;
        *pfVar3 = *pfVar5;
        pfVar3[1] = pfVar5[1];
        pfVar3[2] = pfVar5[2];
      }
LAB_00100173:
      lVar7 = lVar7 + 1;
      pfVar5 = pfVar5 + 3;
      fVar17 = fVar2;
      iVar13 = iVar6;
      iVar11 = iVar12;
      iVar9 = iVar10;
    } while (lVar14 != lVar7);
  }
LAB_0010021e:
  *param_4 = iVar12;
  *param_6 = iVar10;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* addSpan(rcHeightfield&, int, int, unsigned short, unsigned short, unsigned char, int) */

undefined8
addSpan(rcHeightfield *param_1,int param_2,int param_3,ushort param_4,ushort param_5,uchar param_6,
       int param_7)

{
  long lVar1;
  uint *puVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  undefined8 *puVar7;
  ushort uVar8;
  uint *puVar9;
  uint *puVar10;
  ushort uVar11;
  ushort uVar12;
  uint uVar13;
  
  puVar10 = *(uint **)(param_1 + 0x38);
  if ((puVar10 == (uint *)0x0) || (puVar6 = *(uint **)(puVar10 + 2), puVar6 == (uint *)0x0)) {
    puVar7 = (undefined8 *)rcAlloc(0x8008,0);
    if (puVar7 == (undefined8 *)0x0) {
      return 0;
    }
    *puVar7 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 **)(param_1 + 0x30) = puVar7;
    puVar9 = (uint *)(puVar7 + 0x1001);
    puVar10 = *(uint **)(param_1 + 0x38);
    do {
      puVar6 = puVar10;
      puVar10 = puVar9 + -4;
      *(uint **)(puVar9 + -2) = puVar6;
      puVar9 = puVar10;
    } while (puVar10 != (uint *)(puVar7 + 1));
  }
  iVar4 = *(int *)param_1;
  lVar1 = *(long *)(param_1 + 0x28);
  *(uint **)(param_1 + 0x38) = puVar6;
  puVar10[2] = 0;
  puVar10[3] = 0;
  puVar7 = (undefined8 *)(lVar1 + (long)(param_3 * iVar4 + param_2) * 8);
  *puVar10 = (uint)param_6 << 0x1a | param_4 & 0x1fff | (param_5 & 0x1fff) << 0xd;
  puVar6 = (uint *)*puVar7;
  if (puVar6 != (uint *)0x0) {
    puVar9 = (uint *)0x0;
    while( true ) {
      uVar3 = param_5 & 0x1fff;
      uVar12 = (ushort)*puVar6 & 0x1fff;
      if (uVar3 < uVar12) break;
      puVar2 = *(uint **)(puVar6 + 2);
      uVar8 = (ushort)(*puVar6 >> 0xd) & 0x1fff;
      uVar11 = (ushort)*puVar10 & 0x1fff;
      if (uVar11 <= uVar8) {
        if (uVar12 < uVar11) {
          *(ushort *)puVar10 = (ushort)*puVar10 & 0xe000 | uVar12;
        }
        uVar12 = uVar8;
        if (uVar3 < uVar8) {
          *puVar10 = *puVar10 & 0xfc001fff | (uint)uVar8 << 0xd;
          uVar12 = (ushort)(*puVar6 >> 0xd) & 0x1fff;
          uVar3 = uVar8;
        }
        iVar4 = (uint)uVar3 - (uint)uVar12;
        if (iVar4 < 1) {
          iVar4 = -iVar4;
        }
        if (iVar4 <= param_7) {
          uVar5 = (uint)(*(byte *)((long)puVar6 + 3) >> 2);
          uVar13 = (uint)(*(byte *)((long)puVar10 + 3) >> 2);
          if (uVar5 < uVar13) {
            uVar5 = uVar13;
          }
          *(byte *)((long)puVar10 + 3) = *(byte *)((long)puVar10 + 3) & 3 | (byte)(uVar5 << 2);
        }
        *(undefined8 *)(puVar6 + 2) = *(undefined8 *)(param_1 + 0x38);
        *(uint **)(param_1 + 0x38) = puVar6;
        puVar6 = puVar9;
        if (puVar9 == (uint *)0x0) {
          *puVar7 = puVar2;
        }
        else {
          *(uint **)(puVar9 + 2) = puVar2;
        }
      }
      puVar9 = puVar6;
      if (puVar2 == (uint *)0x0) break;
      param_5 = (ushort)(*puVar10 >> 0xd);
      puVar6 = puVar2;
    }
    if (puVar9 != (uint *)0x0) {
      *(undefined8 *)(puVar10 + 2) = *(undefined8 *)(puVar9 + 2);
      *(uint **)(puVar9 + 2) = puVar10;
      return 1;
    }
    puVar6 = (uint *)*puVar7;
  }
  *(uint **)(puVar10 + 2) = puVar6;
  *puVar7 = puVar10;
  return 1;
}



/* rasterizeTri(float const*, float const*, float const*, unsigned char, rcHeightfield&, float
   const*, float const*, float, float, float, int) */

undefined8
rasterizeTri(float *param_1,float *param_2,float *param_3,uchar param_4,rcHeightfield *param_5,
            float *param_6,float *param_7,float param_8,float param_9,float param_10,int param_11)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  undefined8 uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  float *pfVar18;
  int iVar19;
  float *pfVar20;
  undefined4 uVar21;
  float *pfVar22;
  int iVar23;
  float *pfVar24;
  float *pfVar25;
  long in_FS_OFFSET;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  int local_1a8;
  undefined4 local_1a4;
  int local_1a0;
  int local_19c;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_178;
  float local_144 [21];
  float local_f0 [21];
  float local_9c [23];
  long local_40;
  
  fVar26 = param_2[1];
  fVar28 = *param_1;
  fVar29 = param_1[1];
  fVar27 = *param_2;
  fVar1 = param_3[1];
  fVar2 = *param_3;
  fVar10 = fVar29;
  if (fVar29 <= fVar26) {
    fVar10 = fVar26;
  }
  fVar11 = fVar28;
  if (fVar27 <= fVar28) {
    fVar11 = fVar27;
  }
  fVar3 = param_1[2];
  fVar4 = param_3[2];
  fVar5 = param_2[2];
  if (fVar26 <= fVar29) {
    fVar29 = fVar26;
  }
  if (fVar28 <= fVar27) {
    fVar28 = fVar27;
  }
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (fVar10 <= fVar1) {
    fVar10 = fVar1;
  }
  if (fVar2 <= fVar11) {
    fVar11 = fVar2;
  }
  fVar8 = fVar3;
  if (fVar5 <= fVar3) {
    fVar8 = fVar5;
  }
  fVar9 = fVar3;
  if (fVar3 <= fVar5) {
    fVar9 = fVar5;
  }
  if (fVar1 <= fVar29) {
    fVar29 = fVar1;
  }
  if (fVar28 <= fVar2) {
    fVar28 = fVar2;
  }
  if (fVar4 <= fVar8) {
    fVar8 = fVar4;
  }
  if (fVar9 <= fVar4) {
    fVar9 = fVar4;
  }
  if (((((*param_7 < fVar11) || (fVar28 < *param_6)) || (param_7[1] < fVar29)) ||
      ((fVar10 < param_6[1] || (param_7[2] < fVar8)))) || (fVar28 = param_6[2], fVar9 < fVar28))
  goto LAB_001005a0;
  iVar6 = *(int *)param_5;
  fVar29 = param_7[1] - param_6[1];
  iVar12 = *(int *)(param_5 + 4) + -1;
  iVar23 = (int)((fVar8 - fVar28) * param_9);
  iVar15 = (int)((fVar9 - fVar28) * param_9);
  fStack_190 = fVar3;
  fStack_18c = fVar27;
  local_188 = fVar26;
  fStack_184 = fVar5;
  fStack_180 = fVar2;
  fStack_17c = fVar1;
  local_178 = fVar4;
  if (iVar23 < -1) {
    if (-1 < iVar15) {
      iVar23 = -1;
LAB_00100a19:
      iVar14 = iVar15;
      if (iVar12 <= iVar15) {
        iVar14 = iVar12;
      }
      goto LAB_00100a20;
    }
    iVar23 = -1;
    iVar14 = 0;
    fStack_194 = param_1[1];
  }
  else {
    if (iVar12 <= iVar23) {
      iVar23 = iVar12;
    }
    iVar14 = 0;
    if (-1 < iVar15) goto LAB_00100a19;
LAB_00100a20:
    local_1a4 = 3;
    local_198 = *param_1;
    fStack_194 = param_1[1];
    if (iVar14 < iVar23) goto LAB_001005a0;
  }
  local_198 = *param_1;
  pfVar25 = local_144;
  pfVar24 = local_9c;
  pfVar18 = &local_198;
  pfVar22 = local_f0;
  uVar21 = 3;
  while( true ) {
    pfVar20 = pfVar18;
    dividePoly(fVar28 + (float)iVar23 * param_8 + param_8,pfVar20,uVar21,pfVar25,&local_1a8,pfVar22,
               &local_1a4,2);
    if ((-1 < iVar23) && (2 < local_1a8)) {
      iVar12 = 1;
      pfVar18 = pfVar25;
      fVar26 = *pfVar25;
      fVar28 = *pfVar25;
      do {
        pfVar18 = pfVar18 + 3;
        fVar27 = *pfVar18;
        iVar12 = iVar12 + 1;
        fVar1 = fVar27;
        if (fVar27 <= fVar28) {
          fVar1 = fVar28;
        }
        if (fVar26 <= fVar27) {
          fVar27 = fVar26;
        }
        fVar26 = fVar27;
        fVar28 = fVar1;
      } while (iVar12 < local_1a8);
      fVar26 = *param_6;
      iVar15 = (int)((fVar1 - fVar26) * param_9);
      iVar12 = (int)((fVar27 - fVar26) * param_9);
      if ((-1 < iVar15) && (iVar12 < iVar6)) {
        iVar16 = iVar6 + -1;
        local_19c = local_1a8;
        iVar19 = iVar12;
        if (iVar16 <= iVar12) {
          iVar19 = iVar16;
        }
        if (iVar12 < -1) {
          iVar19 = -1;
        }
        if (iVar15 < iVar16) {
          iVar16 = iVar15;
        }
        if (iVar19 <= iVar16) {
          pfVar18 = pfVar24;
          pfVar24 = pfVar25;
          while( true ) {
            pfVar25 = pfVar18;
            dividePoly(fVar26 + (float)iVar19 * param_8 + param_8,pfVar24,local_19c,pfVar20,
                       &local_1a0,pfVar25,&local_19c,0);
            if ((2 < local_1a0) && (-1 < iVar19)) {
              fVar26 = pfVar20[1];
              pfVar18 = pfVar20 + 4;
              iVar12 = 1;
              fVar28 = fVar26;
              do {
                fVar27 = *pfVar18;
                iVar12 = iVar12 + 1;
                pfVar18 = pfVar18 + 3;
                if (fVar27 <= fVar28) {
                  fVar28 = fVar27;
                }
                if (fVar26 <= fVar27) {
                  fVar26 = fVar27;
                }
              } while (iVar12 < local_1a0);
              fVar26 = fVar26 - param_6[1];
              if ((0.0 <= fVar26) && (fVar28 = fVar28 - param_6[1], fVar28 <= fVar29)) {
                if (fVar28 < 0.0) {
                  fVar28 = 0.0;
                }
                fVar28 = fVar28 * param_10;
                fVar27 = fVar29;
                if (fVar26 <= fVar29) {
                  fVar27 = fVar26;
                }
                if ((float)((uint)fVar28 & _LC2) < _LC1) {
                  fVar28 = (float)((uint)((float)(int)fVar28 -
                                         (float)(-(uint)(fVar28 < (float)(int)fVar28) & _LC3)) |
                                  ~_LC2 & (uint)fVar28);
                }
                fVar27 = fVar27 * param_10;
                iVar12 = (int)fVar28;
                if (0x1fff < (int)fVar28) {
                  iVar12 = 0x1fff;
                }
                if (iVar12 < 0) {
                  iVar12 = 0;
                }
                if ((float)((uint)fVar27 & _LC2) < _LC1) {
                  fVar27 = (float)((uint)((float)(int)fVar27 +
                                         (float)(-(uint)((float)(int)fVar27 < fVar27) & _LC3)) |
                                  ~_LC2 & (uint)fVar27);
                }
                iVar17 = (int)fVar27;
                iVar15 = 0x1fff;
                if (iVar17 < 0x2000) {
                  iVar15 = iVar17;
                }
                iVar7 = iVar12 + 1;
                if (iVar12 + 1 <= iVar17) {
                  iVar7 = iVar15;
                }
                uVar13 = addSpan(param_5,iVar19,iVar23,(ushort)iVar12,(ushort)iVar7,param_4,param_11
                                );
                if ((char)uVar13 == '\0') goto LAB_001005a5;
              }
            }
            iVar19 = iVar19 + 1;
            if (iVar16 < iVar19) break;
            fVar26 = *param_6;
            pfVar18 = pfVar24;
            pfVar24 = pfVar25;
          }
        }
      }
    }
    iVar23 = iVar23 + 1;
    if (iVar14 < iVar23) break;
    fVar28 = param_6[2];
    pfVar18 = pfVar22;
    pfVar22 = pfVar20;
    uVar21 = local_1a4;
  }
LAB_001005a0:
  uVar13 = 1;
LAB_001005a5:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar13;
}



/* rcAddSpan(rcContext*, rcHeightfield&, int, int, unsigned short, unsigned short, unsigned char,
   int) */

undefined1  [16]
rcAddSpan(rcContext *param_1,rcHeightfield *param_2,int param_3,int param_4,ushort param_5,
         ushort param_6,uchar param_7,int param_8)

{
  uint uVar1;
  undefined8 extraout_RDX;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uStack_20;
  
  uVar2 = (ulong)(uint)param_8;
  uVar1 = addSpan(param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  if ((char)uVar1 != '\0') {
    auVar3._8_8_ = uVar2;
    auVar3._0_8_ = CONCAT44(0,uVar1);
    return auVar3;
  }
  rcContext::log(param_1,3,"rcAddSpan: Out of memory.",uStack_20);
  auVar4._8_8_ = extraout_RDX;
  auVar4._0_8_ = CONCAT44(0,uVar1);
  return auVar4;
}



/* rcRasterizeTriangle(rcContext*, float const*, float const*, float const*, unsigned char,
   rcHeightfield&, int) */

undefined4
rcRasterizeTriangle(rcContext *param_1,float *param_2,float *param_3,float *param_4,uchar param_5,
                   rcHeightfield *param_6,int param_7)

{
  undefined4 uVar1;
  
  if ((param_1[9] != (rcContext)0x0) &&
     (*(code **)(*(long *)param_1 + 0x28) != rcContext::doStartTimer)) {
    (**(code **)(*(long *)param_1 + 0x28))(param_1,2);
  }
  uVar1 = rasterizeTri(param_2,param_3,param_4,param_5,param_6,(float *)(param_6 + 8),
                       (float *)(param_6 + 0x14),*(float *)(param_6 + 0x20),
                       _LC3 / *(float *)(param_6 + 0x20),_LC3 / *(float *)(param_6 + 0x24),param_7);
  if ((char)uVar1 == '\0') {
    rcContext::log(param_1,3,"rcRasterizeTriangle: Out of memory.");
  }
  if ((param_1[9] != (rcContext)0x0) &&
     (*(code **)(*(long *)param_1 + 0x30) != rcContext::doStopTimer)) {
    (**(code **)(*(long *)param_1 + 0x30))(param_1,2);
    return uVar1;
  }
  return uVar1;
}



/* rcRasterizeTriangles(rcContext*, float const*, int, int const*, unsigned char const*, int,
   rcHeightfield&, int) */

undefined1
rcRasterizeTriangles
          (rcContext *param_1,float *param_2,int param_3,int *param_4,uchar *param_5,int param_6,
          rcHeightfield *param_7,int param_8)

{
  rcContext rVar1;
  char cVar2;
  ulong uVar3;
  undefined1 uVar4;
  uchar *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if ((param_1[9] != (rcContext)0x0) &&
     (*(code **)(*(long *)param_1 + 0x28) != rcContext::doStartTimer)) {
    (**(code **)(*(long *)param_1 + 0x28))(param_1,2);
  }
  fVar6 = *(float *)(param_7 + 0x20);
  fVar8 = _LC3 / *(float *)(param_7 + 0x24);
  fVar7 = _LC3 / fVar6;
  if (param_6 < 1) {
LAB_00100d15:
    rVar1 = param_1[9];
    uVar4 = 1;
  }
  else {
    puVar5 = param_5 + (param_6 - 1);
    while( true ) {
      uVar3 = (ulong)(uint)param_8;
      cVar2 = rasterizeTri(param_2 + *param_4 * 3,param_2 + param_4[1] * 3,param_2 + param_4[2] * 3,
                           *param_5,param_7,(float *)(param_7 + 8),(float *)(param_7 + 0x14),fVar6,
                           fVar7,fVar8,param_8);
      if (cVar2 == '\0') break;
      param_4 = param_4 + 3;
      if (puVar5 == param_5) goto LAB_00100d15;
      fVar6 = *(float *)(param_7 + 0x20);
      param_5 = param_5 + 1;
    }
    rcContext::log(param_1,3,"rcRasterizeTriangles: Out of memory.",uVar3);
    rVar1 = param_1[9];
    uVar4 = 0;
  }
  if ((rVar1 != (rcContext)0x0) && (*(code **)(*(long *)param_1 + 0x30) != rcContext::doStopTimer))
  {
    (**(code **)(*(long *)param_1 + 0x30))(param_1,2);
  }
  return uVar4;
}



/* rcRasterizeTriangles(rcContext*, float const*, int, unsigned short const*, unsigned char const*,
   int, rcHeightfield&, int) */

undefined1
rcRasterizeTriangles
          (rcContext *param_1,float *param_2,int param_3,ushort *param_4,uchar *param_5,int param_6,
          rcHeightfield *param_7,int param_8)

{
  rcContext rVar1;
  char cVar2;
  ulong uVar3;
  undefined1 uVar4;
  uchar *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if ((param_1[9] != (rcContext)0x0) &&
     (*(code **)(*(long *)param_1 + 0x28) != rcContext::doStartTimer)) {
    (**(code **)(*(long *)param_1 + 0x28))(param_1,2);
  }
  fVar6 = *(float *)(param_7 + 0x20);
  fVar8 = _LC3 / *(float *)(param_7 + 0x24);
  fVar7 = _LC3 / fVar6;
  if (param_6 < 1) {
LAB_00100ead:
    rVar1 = param_1[9];
    uVar4 = 1;
  }
  else {
    puVar5 = param_5 + (param_6 - 1);
    while( true ) {
      uVar3 = (ulong)(uint)param_8;
      cVar2 = rasterizeTri(param_2 + (int)((uint)*param_4 + (uint)*param_4 * 2),
                           param_2 + (int)((uint)param_4[1] + (uint)param_4[1] * 2),
                           param_2 + (int)((uint)param_4[2] + (uint)param_4[2] * 2),*param_5,param_7
                           ,(float *)(param_7 + 8),(float *)(param_7 + 0x14),fVar6,fVar7,fVar8,
                           param_8);
      if (cVar2 == '\0') break;
      param_4 = param_4 + 3;
      if (puVar5 == param_5) goto LAB_00100ead;
      fVar6 = *(float *)(param_7 + 0x20);
      param_5 = param_5 + 1;
    }
    rcContext::log(param_1,3,"rcRasterizeTriangles: Out of memory.",uVar3);
    rVar1 = param_1[9];
    uVar4 = 0;
  }
  if ((rVar1 != (rcContext)0x0) && (*(code **)(*(long *)param_1 + 0x30) != rcContext::doStopTimer))
  {
    (**(code **)(*(long *)param_1 + 0x30))(param_1,2);
  }
  return uVar4;
}



/* rcRasterizeTriangles(rcContext*, float const*, unsigned char const*, int, rcHeightfield&, int) */

undefined1
rcRasterizeTriangles
          (rcContext *param_1,float *param_2,uchar *param_3,int param_4,rcHeightfield *param_5,
          int param_6)

{
  rcContext rVar1;
  char cVar2;
  undefined1 uVar3;
  uchar *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ulong uVar8;
  
  if ((param_1[9] != (rcContext)0x0) &&
     (*(code **)(*(long *)param_1 + 0x28) != rcContext::doStartTimer)) {
    (**(code **)(*(long *)param_1 + 0x28))(param_1,2);
  }
  fVar5 = *(float *)(param_5 + 0x20);
  fVar7 = _LC3 / *(float *)(param_5 + 0x24);
  fVar6 = _LC3 / fVar5;
  if (param_4 < 1) {
LAB_0010101d:
    rVar1 = param_1[9];
    uVar3 = 1;
  }
  else {
    puVar4 = param_3 + (param_4 - 1);
    while (uVar8 = (ulong)(uint)param_6,
          cVar2 = rasterizeTri(param_2,param_2 + 3,param_2 + 6,*param_3,param_5,
                               (float *)(param_5 + 8),(float *)(param_5 + 0x14),fVar5,fVar6,fVar7,
                               param_6), cVar2 != '\0') {
      param_2 = param_2 + 9;
      if (puVar4 == param_3) goto LAB_0010101d;
      fVar5 = *(float *)(param_5 + 0x20);
      param_3 = param_3 + 1;
    }
    rcContext::log(param_1,3,"rcRasterizeTriangles: Out of memory.",uVar8);
    rVar1 = param_1[9];
    uVar3 = 0;
  }
  if ((rVar1 != (rcContext)0x0) && (*(code **)(*(long *)param_1 + 0x30) != rcContext::doStopTimer))
  {
    (**(code **)(*(long *)param_1 + 0x30))(param_1,2);
  }
  return uVar3;
}



/* rcContext::doStartTimer(rcTimerLabel) */

void rcContext::doStartTimer(void)

{
  return;
}



/* rcContext::doStopTimer(rcTimerLabel) */

void rcContext::doStopTimer(void)

{
  return;
}


