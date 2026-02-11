
int FinalizeSkipProba(long param_1)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  
  iVar3 = *(int *)(param_1 + 0x30) * *(int *)(param_1 + 0x34);
  iVar1 = *(int *)(param_1 + 0x5bd0);
  uVar4 = (ulong)iVar3;
  if (uVar4 == 0) {
    *(undefined1 *)(param_1 + 0xe23) = 0xff;
    *(undefined4 *)(param_1 + 0x5bcc) = 0;
  }
  else {
    uVar4 = ((uVar4 - (long)iVar1) * 0xff) / uVar4;
    bVar2 = (byte)uVar4;
    *(byte *)(param_1 + 0xe23) = bVar2;
    *(uint *)(param_1 + 0x5bcc) = (uint)(bVar2 < 0xfa);
    if (bVar2 < 0xfa) {
      return (uint)*(ushort *)(&VP8EntropyCost + (long)(int)(0xff - (uint)bVar2) * 2) * iVar1 +
             0x900 + (iVar3 - iVar1) * (uint)*(ushort *)(&VP8EntropyCost + (uVar4 & 0xff) * 2);
    }
  }
  return 0x100;
}



int FinalizeTokenProbas(long param_1)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  int iVar13;
  int local_5c;
  long local_58;
  uint local_50;
  
  lVar5 = 0;
  local_5c = 0;
  local_50 = 0;
  do {
    lVar12 = 0;
    do {
      iVar10 = 3;
      local_58 = lVar5 + 0xb + lVar12;
      do {
        lVar9 = local_58 + -0xb;
        do {
          while( true ) {
            uVar4 = *(uint *)(param_1 + 0x424 + lVar9 * 4);
            bVar1 = (&VP8CoeffsProba0)[lVar9];
            uVar8 = uVar4 >> 0x10;
            uVar4 = uVar4 & 0xffff;
            if (uVar4 == 0) {
              iVar13 = 0;
              uVar11 = 0xff;
              uVar7 = 0xff;
            }
            else {
              uVar7 = 0xff - (uVar4 * 0xff) / uVar8;
              uVar11 = (ulong)(uVar7 & 0xff);
              iVar13 = 0xff - (uVar7 & 0xff);
            }
            uVar2 = *(ushort *)(&VP8EntropyCost + (ulong)(byte)(&VP8CoeffsUpdateProba)[lVar9] * 2);
            iVar6 = uVar8 - uVar4;
            uVar3 = *(ushort *)
                     (&VP8EntropyCost +
                     (long)(int)(0xff - (uint)(byte)(&VP8CoeffsUpdateProba)[lVar9]) * 2);
            if ((int)(*(ushort *)(&VP8EntropyCost + (long)(int)(0xff - (uint)bVar1) * 2) * uVar4 +
                      (uint)*(ushort *)(&VP8EntropyCost + (long)(int)(uint)bVar1 * 2) * iVar6 +
                     (uint)uVar2) <=
                (int)(uVar3 + 0x800 +
                     *(ushort *)(&VP8EntropyCost + (long)iVar13 * 2) * uVar4 +
                     (uint)*(ushort *)(&VP8EntropyCost + uVar11 * 2) * iVar6)) break;
            local_50 = local_50 | bVar1 != uVar7;
            *(char *)(param_1 + 4 + lVar9) = (char)uVar7;
            lVar9 = lVar9 + 1;
            local_5c = uVar3 + 0x800 + local_5c;
            if (local_58 == lVar9) goto LAB_001001fb;
          }
          *(byte *)(param_1 + 4 + lVar9) = bVar1;
          lVar9 = lVar9 + 1;
          local_5c = local_5c + (uint)uVar2;
        } while (local_58 != lVar9);
LAB_001001fb:
        local_58 = local_58 + 0xb;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
      lVar12 = lVar12 + 0x21;
    } while (lVar12 != 0x108);
    lVar5 = lVar5 + 0x108;
    if (lVar5 == 0x420) {
      *(uint *)(param_1 + 0x4da8) = local_50;
      return local_5c;
    }
  } while( true );
}



void SetSegmentProbas(long param_1)

{
  byte *pbVar1;
  long lVar2;
  byte bVar3;
  ulong uVar4;
  byte *pbVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long in_FS_OFFSET;
  undefined1 local_48 [16];
  long local_30;
  
  iVar10 = *(int *)(param_1 + 0x34) * *(int *)(param_1 + 0x30);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (undefined1  [16])0x0;
  if (0 < iVar10) {
    pbVar5 = *(byte **)(param_1 + 0x5c60);
    pbVar1 = pbVar5 + (long)iVar10 * 4;
    do {
      bVar6 = *pbVar5;
      pbVar5 = pbVar5 + 4;
      *(int *)(local_48 + (ulong)(bVar6 >> 5 & 3) * 4) =
           *(int *)(local_48 + (ulong)(bVar6 >> 5 & 3) * 4) + 1;
    } while (pbVar5 != pbVar1);
  }
  lVar2 = *(long *)(*(long *)(param_1 + 8) + 0x80);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x5c) = local_48._0_8_;
    *(undefined8 *)(lVar2 + 100) = local_48._8_8_;
  }
  if (*(int *)(param_1 + 0x20) < 2) {
    *(undefined4 *)(param_1 + 0x24) = 0;
    iVar10 = 0;
    goto LAB_0010040b;
  }
  iVar8 = local_48._8_4_ + local_48._12_4_;
  iVar9 = local_48._0_4_ + local_48._4_4_;
  iVar7 = iVar8 + iVar9;
  if (iVar7 == 0) {
    *(undefined1 *)(param_1 + 0xe20) = 0xff;
    bVar6 = 0xff;
    if (iVar9 != 0) goto LAB_00100343;
    *(undefined2 *)(param_1 + 0xe21) = 0xffff;
LAB_00100450:
    *(undefined4 *)(param_1 + 0x24) = 0;
    if (0 < iVar10) {
      pbVar5 = *(byte **)(param_1 + 0x5c60);
      pbVar1 = pbVar5 + (long)iVar10 * 4;
      do {
        *pbVar5 = *pbVar5 & 0x9f;
        pbVar5 = pbVar5 + 4;
      } while (pbVar1 != pbVar5);
    }
    uVar4 = (ulong)*(byte *)(param_1 + 0xe22);
    iVar9 = 0xff - (uint)*(byte *)(param_1 + 0xe22);
  }
  else {
    bVar6 = (byte)((iVar9 * 0xff + iVar7 / 2) / iVar7);
    *(byte *)(param_1 + 0xe20) = bVar6;
    if (iVar9 == 0) {
      *(undefined1 *)(param_1 + 0xe21) = 0xff;
LAB_0010036a:
      uVar4 = (long)(iVar8 / 2 + local_48._8_4_ * 0xff) / (long)iVar8;
      bVar3 = (byte)uVar4;
      *(byte *)(param_1 + 0xe22) = bVar3;
      if ((bVar6 & bVar3) == 0xff) goto LAB_00100450;
      uVar4 = uVar4 & 0xff;
      iVar9 = 0xff - (int)uVar4;
    }
    else {
LAB_00100343:
      bVar3 = (byte)((iVar9 / 2 + local_48._0_4_ * 0xff) / iVar9);
      *(byte *)(param_1 + 0xe21) = bVar3;
      bVar6 = bVar6 & bVar3;
      if (iVar8 != 0) goto LAB_0010036a;
      *(undefined1 *)(param_1 + 0xe22) = 0xff;
      uVar4 = 0xff;
      iVar9 = 0;
      if (bVar6 == 0xff) goto LAB_00100450;
    }
    *(undefined4 *)(param_1 + 0x24) = 1;
  }
  iVar10 = ((uint)*(ushort *)(&VP8EntropyCost + uVar4 * 2) +
           (uint)*(ushort *)
                  (&VP8EntropyCost + (long)(int)(0xff - (uint)*(byte *)(param_1 + 0xe20)) * 2)) *
           local_48._8_4_ +
           ((uint)*(ushort *)
                   (&VP8EntropyCost + (long)(int)(0xff - (uint)*(byte *)(param_1 + 0xe21)) * 2) +
           (uint)*(ushort *)(&VP8EntropyCost + (ulong)*(byte *)(param_1 + 0xe20) * 2)) *
           local_48._4_4_ +
           local_48._0_4_ *
           ((uint)*(ushort *)(&VP8EntropyCost + (ulong)*(byte *)(param_1 + 0xe21) * 2) +
           (uint)*(ushort *)(&VP8EntropyCost + (ulong)*(byte *)(param_1 + 0xe20) * 2)) +
           ((uint)*(ushort *)(&VP8EntropyCost + (long)iVar9 * 2) +
           (uint)*(ushort *)
                  (&VP8EntropyCost + (long)(int)(0xff - (uint)*(byte *)(param_1 + 0xe20)) * 2)) *
           local_48._12_4_;
LAB_0010040b:
  *(int *)(param_1 + 0x28) = iVar10;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void StoreSideInfo(int *param_1)

{
  long lVar1;
  byte *pbVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  byte bVar6;
  int iVar7;
  ulong uVar8;
  byte *pbVar9;
  
  lVar1 = *(long *)(param_1 + 10);
  pbVar2 = *(byte **)(param_1 + 0xc);
  lVar3 = *(long *)(lVar1 + 8);
  if (*(long *)(lVar3 + 0x80) != 0) {
    lVar4 = *(long *)(param_1 + 4);
    lVar5 = *(long *)(param_1 + 2);
    iVar7 = (*_VP8SSE16x16)(lVar5,lVar4);
    *(long *)(lVar1 + 0x5bd8) = *(long *)(lVar1 + 0x5bd8) + (long)iVar7;
    iVar7 = (*_VP8SSE8x8)(lVar5 + 0x10,lVar4 + 0x10);
    *(long *)(lVar1 + 0x5be0) = *(long *)(lVar1 + 0x5be0) + (long)iVar7;
    iVar7 = (*_VP8SSE8x8)(lVar5 + 0x18,lVar4 + 0x18);
    *(long *)(lVar1 + 0x5bf8) = *(long *)(lVar1 + 0x5bf8) + 0x100;
    *(long *)(lVar1 + 0x5be8) = *(long *)(lVar1 + 0x5be8) + (long)iVar7;
    bVar6 = *pbVar2;
    *(int *)(lVar1 + 0x5c34) = *(int *)(lVar1 + 0x5c34) + (uint)((bVar6 & 3) == 0);
    *(int *)(lVar1 + 0x5c38) = *(int *)(lVar1 + 0x5c38) + (uint)((bVar6 & 3) == 1);
    *(int *)(lVar1 + 0x5c3c) = *(int *)(lVar1 + 0x5c3c) + (bVar6 >> 4 & 1);
  }
  if (*(long *)(lVar3 + 0x78) != 0) {
    pbVar9 = (byte *)(*(long *)(lVar3 + 0x78) +
                     (long)(param_1[1] * *(int *)(lVar1 + 0x30) + *param_1));
    switch(*(undefined4 *)(lVar3 + 0x70)) {
    default:
      *pbVar9 = 0;
      break;
    case 1:
      *pbVar9 = *pbVar2 & 3;
      break;
    case 2:
      *pbVar9 = *pbVar2 >> 5 & 3;
      break;
    case 3:
      *pbVar9 = (byte)*(undefined4 *)(lVar1 + 0x508 + (ulong)(*pbVar2 >> 5 & 3) * 0x2e8);
      break;
    case 4:
      if ((*pbVar2 & 3) == 1) {
        *pbVar9 = **(byte **)(param_1 + 0x10);
      }
      else {
        *pbVar9 = 0xff;
      }
      break;
    case 5:
      *pbVar9 = *pbVar2 >> 2 & 3;
      break;
    case 6:
      uVar8 = *(long *)(param_1 + 0x4e) + *(long *)(param_1 + 0x4c) + 7U >> 3;
      bVar6 = (byte)uVar8;
      if (0xff < (int)uVar8) {
        bVar6 = 0xff;
      }
      *pbVar9 = bVar6;
      break;
    case 7:
      *pbVar9 = pbVar2[1];
    }
  }
  return;
}



undefined8 PreLoopInitialize(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  iVar5 = 0;
  iVar1 = *(int *)(param_1 + 0x3c);
  iVar2 = *(int *)(param_1 + 0x30) * *(int *)(param_1 + 0x34) *
          (uint)*(byte *)((long)&kAverageBytesPerMB + (long)(*(int *)(param_1 + 0xe00) >> 4));
  iVar3 = iVar2 / iVar1;
  auVar7._8_8_ = (long)iVar2 % (long)iVar1 & 0xffffffff;
  auVar7._0_8_ = 1;
  lVar6 = param_1 + 0x70;
  while( true ) {
    if (iVar1 <= iVar5) {
      return auVar7._0_8_;
    }
    iVar5 = iVar5 + 1;
    auVar7 = VP8BitWriterInit(lVar6,(long)iVar3,auVar7._8_8_);
    if (auVar7._0_4_ == 0) break;
    iVar1 = *(int *)(param_1 + 0x3c);
    lVar6 = lVar6 + 0x30;
  }
  VP8EncFreeBitWriters(param_1);
  uVar4 = WebPEncodingSetError(*(undefined8 *)(param_1 + 8),1);
  return uVar4;
}



undefined8 PutCoeffs(undefined8 param_1,int param_2,int *param_3)

{
  undefined1 uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined *puVar9;
  uint local_3c;
  
  iVar4 = *param_3;
  lVar8 = (long)iVar4;
  puVar7 = (undefined1 *)(lVar8 * 0x21 + (long)param_2 * 0xb + *(long *)(param_3 + 6));
  uVar5 = VP8PutBit(param_1,(uint)~param_3[1] >> 0x1f,*puVar7);
  if ((int)uVar5 != 0) {
    puVar9 = &VP8EncBands + lVar8;
    while (iVar4 < 0x10) {
      uVar2 = *(ushort *)(*(long *)(param_3 + 2) + lVar8 * 2);
      uVar3 = -uVar2;
      if (0 < (short)uVar2) {
        uVar3 = uVar2;
      }
      iVar4 = VP8PutBit(param_1,uVar3 != 0,puVar7[1]);
      if (iVar4 == 0) {
        puVar7 = (undefined1 *)((ulong)(byte)puVar9[1] * 0x21 + *(long *)(param_3 + 6));
      }
      else {
        iVar4 = VP8PutBit(param_1,1 < uVar3,puVar7[2]);
        if (iVar4 == 0) {
          puVar7 = (undefined1 *)((ulong)(byte)puVar9[1] * 0x21 + *(long *)(param_3 + 6) + 0xb);
        }
        else {
          iVar4 = VP8PutBit(param_1,4 < uVar3,puVar7[3]);
          if (iVar4 == 0) {
            iVar4 = VP8PutBit(param_1,uVar3 != 2,puVar7[4]);
            if (iVar4 != 0) {
              VP8PutBit(param_1,uVar3 == 4,puVar7[5]);
            }
          }
          else {
            iVar4 = VP8PutBit(param_1,10 < uVar3,puVar7[6]);
            if (iVar4 == 0) {
              iVar4 = VP8PutBit(param_1,6 < uVar3,puVar7[7]);
              if (iVar4 == 0) {
                VP8PutBit(param_1,uVar3 == 6,0x9f);
              }
              else {
                VP8PutBit(param_1,8 < uVar3,0xa5);
                VP8PutBit(param_1,~uVar3 & 1,0x91);
              }
            }
            else {
              uVar1 = puVar7[8];
              if (uVar3 < 0x13) {
                VP8PutBit(param_1,0,uVar1);
                uVar6 = 4;
                VP8PutBit(param_1,0,puVar7[9]);
                local_3c = uVar3 - 0xb;
                puVar7 = &VP8Cat3;
              }
              else if (uVar3 < 0x23) {
                VP8PutBit(param_1,0,uVar1);
                uVar6 = 8;
                VP8PutBit(param_1,1,puVar7[9]);
                local_3c = uVar3 - 0x13;
                puVar7 = &VP8Cat4;
              }
              else if (uVar3 < 0x43) {
                VP8PutBit(param_1,1,uVar1);
                uVar6 = 0x10;
                VP8PutBit(param_1,0,puVar7[10]);
                local_3c = uVar3 - 0x23;
                puVar7 = &VP8Cat5;
              }
              else {
                VP8PutBit(param_1,1,uVar1);
                uVar6 = 0x400;
                VP8PutBit(param_1,1,puVar7[10]);
                local_3c = uVar3 - 0x43;
                puVar7 = &VP8Cat6;
              }
              do {
                VP8PutBit(param_1,(local_3c & uVar6) != 0,*puVar7);
                uVar6 = (int)uVar6 >> 1;
                puVar7 = puVar7 + 1;
              } while (uVar6 != 0);
            }
          }
          puVar7 = (undefined1 *)((ulong)(byte)puVar9[1] * 0x21 + *(long *)(param_3 + 6) + 0x16);
        }
        VP8PutBitUniform(param_1,(uint)(int)(short)uVar2 >> 0x1f);
        if (((int)lVar8 == 0xf) ||
           (iVar4 = VP8PutBit(param_1,(int)lVar8 + 1 <= param_3[1],*puVar7), iVar4 == 0)) break;
      }
      lVar8 = lVar8 + 1;
      puVar9 = puVar9 + 1;
      iVar4 = (int)lVar8;
    }
    uVar5 = 1;
  }
  return uVar5;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong PostLoopFinalize(long param_1,uint param_2)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  
  lVar2 = *(long *)(param_1 + 0x28);
  if (param_2 != 0) {
    uVar8 = (ulong)param_2;
    if (0 < *(int *)(lVar2 + 0x3c)) {
      lVar9 = lVar2 + 0x70;
      iVar10 = 0;
      do {
        VP8BitWriterFinish(lVar9);
        piVar1 = (int *)(lVar9 + 0x28);
        iVar10 = iVar10 + 1;
        lVar9 = lVar9 + 0x30;
        uVar11 = (uint)uVar8 & (uint)(*piVar1 == 0);
        uVar8 = (ulong)uVar11;
      } while (iVar10 < *(int *)(lVar2 + 0x3c));
      if (uVar11 == 0) goto LAB_00100b90;
    }
    lVar5 = _UNK_00102428;
    lVar9 = __LC0;
    if (*(long *)(*(long *)(lVar2 + 8) + 0x80) != 0) {
      plVar6 = (long *)(param_1 + 0xd0);
      puVar12 = (undefined4 *)(lVar2 + 0x5c04);
      do {
        lVar3 = plVar6[3];
        lVar4 = plVar6[9];
        plVar7 = plVar6 + 1;
        lVar2 = plVar6[6];
        *puVar12 = (int)((ulong)(*plVar6 + lVar9) >> 3);
        puVar12[1] = (int)((ulong)(lVar3 + lVar5) >> 3);
        puVar12[2] = (int)((ulong)(lVar2 + lVar9) >> 3);
        puVar12[3] = (int)((ulong)(lVar4 + lVar5) >> 3);
        plVar6 = plVar7;
        puVar12 = puVar12 + 4;
      } while (plVar7 != (long *)(param_1 + 0xe8));
    }
    VP8AdjustFilterStrength(param_1);
    return uVar8;
  }
LAB_00100b90:
  VP8EncFreeBitWriters(lVar2);
  uVar8 = WebPEncodingSetError(*(undefined8 *)(lVar2 + 8),1);
  return uVar8;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ComputeNextQ_isra_0(int *param_1)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = _LC1;
  dVar1 = *(double *)(param_1 + 6);
  fVar5 = (float)param_1[2];
  if (*param_1 == 0) {
    fVar3 = 0.0;
    if (*(double *)(param_1 + 8) == dVar1) goto LAB_00100bf8;
    fVar4 = (float)(((*(double *)(param_1 + 10) - dVar1) / (*(double *)(param_1 + 8) - dVar1)) *
                   (double)((float)param_1[3] - fVar5));
  }
  else {
    fVar4 = (float)param_1[1];
    if (*(double *)(param_1 + 10) <= dVar1 && dVar1 != *(double *)(param_1 + 10)) {
      fVar4 = (float)((uint)fVar4 ^ __LC4);
    }
    *param_1 = 0;
  }
  fVar3 = fVar2;
  if ((fVar2 <= fVar4) && (fVar3 = fVar4, _LC2 < fVar4)) {
    fVar3 = _LC2;
  }
LAB_00100bf8:
  param_1[1] = (int)fVar3;
  fVar3 = fVar3 + fVar5;
  *(double *)(param_1 + 8) = dVar1;
  param_1[3] = (int)fVar5;
  fVar5 = (float)param_1[4];
  if (((float)param_1[4] <= fVar3) && (fVar5 = (float)param_1[5], fVar3 <= (float)param_1[5])) {
    fVar5 = fVar3;
  }
  param_1[2] = (int)fVar5;
  return;
}



void InitPassStats_isra_0(long param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  ulong uVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  
  uVar3 = *(uint *)(param_1 + 0x10);
  uVar4 = (ulong)(int)uVar3;
  fVar1 = *(float *)(param_1 + 0x14);
  *param_2 = 0x4120000000000001;
  fVar6 = (float)(int)*(undefined8 *)(param_1 + 0x6c);
  fVar7 = (float)(int)((ulong)*(undefined8 *)(param_1 + 0x6c) >> 0x20);
  param_2[2] = CONCAT44(fVar7,fVar6);
  fVar2 = *(float *)(param_1 + 4);
  if ((fVar6 <= fVar2) && (fVar6 = fVar7, fVar2 <= fVar7)) {
    fVar6 = fVar2;
  }
  param_2[1] = CONCAT44(fVar6,fVar6);
  if (uVar4 == 0) {
    dVar5 = _LC5;
    if (0.0 < fVar1) {
      dVar5 = (double)fVar1;
    }
  }
  else if ((long)uVar4 < 0) {
    dVar5 = (double)(uVar4 >> 1 | (ulong)(uVar3 & 1));
    dVar5 = dVar5 + dVar5;
  }
  else {
    dVar5 = (double)(long)uVar4;
  }
  param_2[5] = dVar5;
  *(uint *)(param_2 + 6) = (uint)(uVar4 != 0);
  *(undefined1 (*) [16])(param_2 + 3) = (undefined1  [16])0x0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void VP8EncLoop(long *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  long lVar12;
  ulong uVar13;
  undefined1 *puVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  undefined8 *puVar18;
  long lVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  long lVar25;
  int iVar26;
  long *plVar27;
  long in_FS_OFFSET;
  bool bVar28;
  bool bVar29;
  byte bVar30;
  double dVar31;
  long *local_13f0;
  long *local_13d8;
  ulong local_13b0;
  long local_13a8;
  long *local_13a0;
  long local_1398;
  long *local_1360;
  undefined1 local_1328 [48];
  undefined1 local_12f8 [4];
  uint local_12f4;
  double local_12e0;
  int local_12c8;
  long local_12b8 [2];
  long local_12a8;
  long local_12a0;
  undefined1 local_1290 [32];
  undefined1 local_1270 [512];
  undefined1 local_1070 [296];
  long local_f48 [5];
  undefined8 local_f20;
  byte *local_f18;
  long local_f10;
  uint *local_f00;
  int local_ea4;
  int local_ea0 [8];
  int local_e80;
  long alStack_e68 [10];
  long local_e18;
  long local_e10;
  long local_40;
  
  bVar30 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = PreLoopInitialize();
  if (iVar4 == 0) goto LAB_00100d91;
  iVar4 = (int)param_1[0xb88];
  iVar9 = *(int *)((long)param_1 + 0x5c54);
  lVar12 = param_1[0x43];
  iVar10 = *(int *)(*param_1 + 0x3c);
  bVar28 = iVar9 == 0;
  iVar5 = (iVar10 / 2 + 0x14) / iVar10;
  bVar29 = iVar9 != 0;
  iVar6 = (int)param_1[6] * *(int *)((long)param_1 + 0x34);
  InitPassStats_isra_0(*param_1,local_12f8);
  *(undefined8 *)((long)param_1 + 0x1244) = 0;
  *(undefined8 *)((long)param_1 + 0x22bc) = 0;
  puVar18 = (undefined8 *)((long)param_1 + 0x124cU & 0xfffffffffffffff8);
  uVar13 = (ulong)(((int)param_1 - (int)puVar18) + 0x22c4U >> 3);
  for (; uVar13 != 0; uVar13 = uVar13 - 1) {
    *puVar18 = 0;
    puVar18 = puVar18 + (ulong)bVar30 * -2 + 1;
  }
  if ((iVar4 == 0 || iVar4 == 3) && bVar28) {
    if (iVar4 == 3) {
      iVar26 = iVar6 >> 1;
      bVar28 = 200 < iVar6;
      iVar6 = 100;
      if (bVar28) {
        iVar6 = iVar26;
      }
    }
    else {
      iVar26 = iVar6 >> 2;
      bVar28 = 200 < iVar6;
      iVar6 = 0x32;
      if (bVar28) {
        iVar6 = iVar26;
      }
    }
    if (0 < iVar10) {
LAB_00100f2f:
      uVar13 = (long)iVar6 * 0x180;
      do {
        while( true ) {
          local_1360 = param_1 + 0x1c4;
          local_13f0 = local_f48;
          iVar26 = iVar10 + -1;
          bVar28 = true;
          if ((_LC10 < (double)(float)(local_12f4 & __LC9)) && (iVar26 != 0)) {
            bVar28 = (int)param_1[0xb89] == 0;
          }
          VP8IteratorInit(param_1,local_13f0);
          VP8SetSegmentParams(param_1);
          SetSegmentProbas(param_1);
          VP8CalculateLevelCosts(local_1360);
          *(undefined4 *)(param_1 + 0xb7a) = 0;
          param_1[0xb7d] = 0;
          param_1[0xb7f] = 0;
          local_13b0 = 0;
          local_13a8 = 0;
          local_1398 = 0;
          *(undefined1 (*) [16])(param_1 + 0xb7b) = (undefined1  [16])0x0;
          iVar8 = iVar6;
          do {
            local_13a0 = local_12b8;
            local_13f0 = local_f48;
            VP8IteratorImport(local_13f0,0);
            iVar7 = VP8Decimate(local_13f0,local_13a0,2 < iVar4 || bVar29);
            uVar3 = local_f20;
            if (iVar7 != 0) {
              *(int *)(param_1 + 0xb7a) = (int)param_1[0xb7a] + 1;
            }
            VP8IteratorNzToBytes(local_13f0);
            if ((*local_f18 & 3) == 1) {
              VP8InitResidual(0,1,uVar3,local_1328);
              (*_VP8SetResidualCoeffs)(local_1290,local_1328);
              local_ea4 = VP8RecordCoeffs(local_e80 + local_ea4,local_1328);
              local_e80 = local_ea4;
              VP8InitResidual(1,0,uVar3,local_1328);
            }
            else {
              VP8InitResidual(0,3,uVar3,local_1328);
            }
            lVar19 = 0;
            puVar14 = local_1270;
            do {
              local_13f0 = local_f48;
              iVar7 = *(int *)((long)local_ea0 + lVar19);
              puVar24 = puVar14;
              plVar21 = local_13f0;
              do {
                iVar1 = *(int *)((long)plVar21 + 0x84);
                plVar22 = (long *)((long)plVar21 + 4);
                (*_VP8SetResidualCoeffs)(puVar24,local_1328);
                puVar24 = puVar24 + 0x20;
                iVar7 = VP8RecordCoeffs(iVar7 + iVar1,local_1328);
                *(int *)((long)local_ea0 + lVar19) = iVar7;
                *(int *)((long)plVar21 + 0x84) = iVar7;
                plVar21 = plVar22;
              } while (plVar22 != local_f48 + 2);
              puVar14 = puVar14 + 0x80;
              lVar19 = lVar19 + 4;
            } while (lVar19 != 0x10);
            VP8InitResidual(0,2,uVar3,local_1328);
            lVar19 = 0;
            plVar21 = local_f48 + 1;
            plVar22 = local_13f0;
            puVar14 = local_1070;
            do {
              iVar7 = 0;
              puVar24 = puVar14;
              plVar27 = plVar22;
              puVar23 = puVar14;
              plVar20 = plVar22;
              do {
                do {
                  plVar17 = plVar27;
                  local_1360 = param_1 + 0x1c4;
                  local_13f0 = local_f48;
                  lVar16 = plVar20[0x17];
                  iVar1 = *(int *)((long)plVar17 + 0x94);
                  (*_VP8SetResidualCoeffs)(puVar24,local_1328);
                  uVar11 = VP8RecordCoeffs((int)lVar16 + iVar1,local_1328);
                  *(undefined4 *)(plVar20 + 0x17) = uVar11;
                  *(undefined4 *)((long)plVar17 + 0x94) = uVar11;
                  puVar24 = puVar24 + 0x20;
                  plVar27 = (long *)((long)plVar17 + 4);
                } while ((long *)((long)plVar17 + 4) != plVar21);
                iVar7 = iVar7 + 2;
                plVar20 = (long *)((long)plVar20 + 4);
                puVar24 = puVar23 + 0x40;
                plVar27 = plVar22;
                puVar23 = puVar24;
              } while (iVar7 != 4);
              plVar21 = (long *)((long)plVar17 + 0xc);
              lVar19 = lVar19 + 4;
              plVar22 = plVar22 + 1;
              puVar14 = puVar14 + 0x80;
            } while (lVar19 != 8);
            VP8IteratorBytesToNz(local_13f0);
            local_13a8 = local_13a8 + local_12a8;
            local_13b0 = local_13b0 + local_12b8[0];
            local_1398 = local_1398 + local_12a0 + local_12a8;
            if ((iVar5 != 0) && (iVar7 = VP8IteratorProgress(local_13f0), iVar7 == 0))
            goto LAB_00101568;
            VP8IteratorSaveBoundary(local_13f0);
            iVar7 = VP8IteratorNext(local_13f0);
          } while ((iVar7 != 0) && (iVar8 = iVar8 + -1, 0 < iVar8));
          uVar15 = (int)param_1[5] + local_13a8;
          if (local_12c8 == 0) {
            dVar31 = _LC8;
            if ((local_13b0 != 0) && (uVar13 != 0)) {
              if ((long)uVar13 < 0) {
                dVar31 = (double)(uVar13 >> 1) + (double)(uVar13 >> 1);
              }
              else {
                dVar31 = (double)(long)uVar13;
              }
              dVar31 = log10((dVar31 * __LC11) / (double)local_13b0);
              dVar31 = dVar31 * __LC12;
            }
          }
          else {
            iVar8 = FinalizeSkipProba(0);
            iVar7 = FinalizeTokenProbas(local_1360);
            dVar31 = (double)((local_1398 + 0x400 + uVar15 + (long)iVar8 + (long)iVar7 >> 0xb) +
                             0x1e);
          }
          local_12e0 = dVar31;
          if (uVar15 == 0) goto LAB_00101568;
          if (((int)param_1[0xb89] < 1) || (uVar15 < 0x3fc00001)) break;
          *(int *)(param_1 + 0xb89) = (int)param_1[0xb89] >> 1;
        }
        if (bVar28) break;
        if ((iVar9 != 0) &&
           (ComputeNextQ_isra_0(local_12f8), (double)(float)(local_12f4 & __LC9) <= _LC10))
        goto joined_r0x00101553;
        iVar10 = iVar26;
      } while (iVar26 != 0);
      goto LAB_001019f0;
    }
LAB_00100ed7:
    local_1360 = param_1 + 0x1c4;
    FinalizeSkipProba(param_1);
    FinalizeTokenProbas(local_1360);
  }
  else {
    if (0 < iVar10) goto LAB_00100f2f;
LAB_001019f0:
    if (iVar9 == 0) goto LAB_00100ed7;
joined_r0x00101553:
    if (local_12c8 == 0) goto LAB_00100ed7;
  }
  local_1360 = param_1 + 0x1c4;
  VP8CalculateLevelCosts(local_1360);
  WebPReportProgress(param_1[1],(int)lVar12 + 0x14,param_1 + 0x43);
LAB_00101568:
  local_13a0 = local_12b8;
  local_13f0 = local_f48;
  VP8IteratorInit(param_1,local_13f0);
  VP8InitFilter(local_13f0);
  do {
    uVar11 = *(undefined4 *)((long)param_1 + 0x5c44);
    iVar4 = *(int *)((long)param_1 + 0x5bcc);
    VP8IteratorImport(local_13f0,0);
    iVar9 = VP8Decimate(local_13f0,local_13a0,uVar11);
    lVar12 = local_f10;
    uVar3 = local_f20;
    if ((iVar4 == 0) || (iVar9 == 0)) {
      bVar30 = *local_f18 & 3;
      local_13a8._0_4_ = *local_f18 >> 5 & 3;
      VP8IteratorNzToBytes(local_13f0);
      iVar4 = *(int *)(lVar12 + 0xc);
      iVar9 = *(int *)(lVar12 + 8);
      lVar19 = *(long *)(lVar12 + 0x18);
      if (bVar30 == 1) {
        VP8InitResidual(0,1,uVar3,local_12f8);
        (*_VP8SetResidualCoeffs)(local_1290,local_12f8);
        local_ea4 = PutCoeffs(lVar12,local_e80 + local_ea4,local_12f8);
        local_e80 = local_ea4;
        VP8InitResidual(1,0,uVar3,local_12f8);
      }
      else {
        VP8InitResidual(0,3,uVar3,local_12f8);
      }
      lVar16 = 0;
      puVar14 = local_1270;
      local_13d8 = local_13f0;
      plVar21 = local_13f0;
      do {
        iVar10 = (int)plVar21[0x15];
        puVar24 = puVar14;
        plVar22 = local_13f0;
        do {
          iVar6 = *(int *)((long)plVar22 + 0x84);
          plVar27 = (long *)((long)plVar22 + 4);
          (*_VP8SetResidualCoeffs)(puVar24,local_12f8);
          iVar10 = PutCoeffs(lVar12,iVar10 + iVar6,local_12f8);
          puVar24 = puVar24 + 0x20;
          *(int *)(plVar21 + 0x15) = iVar10;
          *(int *)((long)plVar22 + 0x84) = iVar10;
          plVar22 = plVar27;
        } while (local_f48 + 2 != plVar27);
        plVar21 = (long *)((long)plVar21 + 4);
        lVar16 = lVar16 + 4;
        puVar14 = puVar14 + 0x80;
      } while (lVar16 != 0x10);
      lVar16 = (long)(*(int *)(lVar12 + 0xc) + 8) +
               ((long)*(int *)(lVar12 + 8) + *(long *)(lVar12 + 0x18)) * 8;
      VP8InitResidual(0,2,uVar3,local_12f8);
      lVar25 = 0;
      puVar14 = local_1070;
      plVar21 = local_f48 + 1;
      plVar22 = plVar21;
      while( true ) {
        plVar20 = plVar22;
        iVar10 = 0;
        plVar22 = local_13d8;
        puVar24 = puVar14;
        puVar23 = puVar14;
        plVar27 = local_13d8;
        do {
          do {
            plVar17 = (long *)((long)plVar22 + 4);
            lVar2 = plVar27[0x17];
            iVar6 = *(int *)((long)plVar22 + 0x94);
            (*_VP8SetResidualCoeffs)(puVar24,local_12f8);
            uVar11 = PutCoeffs(lVar12,(int)lVar2 + iVar6,local_12f8);
            *(undefined4 *)(plVar27 + 0x17) = uVar11;
            *(undefined4 *)((long)plVar22 + 0x94) = uVar11;
            plVar22 = plVar17;
            puVar24 = puVar24 + 0x20;
          } while (plVar21 != plVar17);
          puVar24 = puVar23 + 0x40;
          plVar27 = (long *)((long)plVar27 + 4);
          iVar10 = iVar10 + 2;
          plVar22 = local_13d8;
          puVar23 = puVar24;
        } while (iVar10 != 4);
        lVar25 = lVar25 + 4;
        puVar14 = puVar14 + 0x80;
        plVar21 = plVar21 + 1;
        if (lVar25 == 8) break;
        plVar22 = plVar20 + 1;
        local_13d8 = plVar20;
      }
      lVar12 = ((long)(*(int *)(lVar12 + 0xc) + 8) +
               ((long)*(int *)(lVar12 + 8) + *(long *)(lVar12 + 0x18)) * 8) - lVar16;
      local_e18 = (lVar16 + (iVar9 + lVar19) * -8) - (long)(iVar4 + 8);
      local_e10 = lVar12;
      local_f48[(long)(int)(uint)(bVar30 == 1) + 0x1a + (long)(int)(uint)local_13a8 * 3] =
           local_f48[(long)(int)(uint)(bVar30 == 1) + 0x1a + (long)(int)(uint)local_13a8 * 3] +
           local_e18;
      alStack_e68[(long)(int)(uint)local_13a8 * 3] =
           alStack_e68[(long)(int)(uint)local_13a8 * 3] + lVar12;
      VP8IteratorBytesToNz(local_13f0);
      if (*(int *)(local_f10 + 0x28) == 0) goto LAB_001018bc;
LAB_00101a61:
      PostLoopFinalize(local_13f0,0);
      goto LAB_00100d91;
    }
    if ((*local_f18 & 3) == 1) {
      *local_f00 = 0;
      local_e80 = 0;
    }
    else {
      *local_f00 = *local_f00 & 0x1000000;
    }
LAB_001018bc:
    StoreSideInfo(local_13f0);
    VP8StoreFilterStats(local_13f0);
    VP8IteratorExport(local_13f0);
    iVar4 = VP8IteratorProgress(local_13f0);
    VP8IteratorSaveBoundary(local_13f0);
    if (iVar4 == 0) goto LAB_00101a61;
    iVar9 = VP8IteratorNext(local_13f0);
  } while (iVar9 != 0);
  PostLoopFinalize(local_13f0,iVar4);
LAB_00100d91:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void VP8EncTokenLoop(long *param_1)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined1 *puVar14;
  undefined8 *puVar15;
  undefined1 *puVar16;
  int iVar17;
  undefined1 *puVar18;
  int iVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  long in_FS_OFFSET;
  bool bVar26;
  byte bVar27;
  double dVar28;
  undefined1 *local_13e0;
  int local_13a4;
  long local_13a0;
  ulong local_1398;
  int local_1354;
  long *local_1338;
  undefined1 local_1328 [48];
  undefined1 local_12f8 [4];
  uint local_12f4;
  double local_12e0;
  int local_12c8;
  long local_12b8 [2];
  long local_12a8;
  undefined1 local_1290 [32];
  undefined1 local_1270 [512];
  undefined1 local_1070 [296];
  undefined1 local_f48 [8];
  undefined1 local_f40 [8];
  undefined1 local_f38 [24];
  long local_f20;
  byte *local_f18;
  int local_ea4;
  int local_e80;
  long local_40;
  
  bVar27 = 0;
  lVar10 = param_1[6];
  iVar8 = *(int *)((long)param_1 + 0x34);
  iVar17 = *(int *)(*param_1 + 0x3c);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = *(int *)((long)param_1 + 0x5c54);
  uVar4 = *(undefined4 *)((long)param_1 + 0x5c44);
  InitPassStats_isra_0(*param_1,local_12f8);
  iVar7 = PreLoopInitialize(param_1);
  if (iVar7 != 0) {
    plVar1 = param_1 + 0x1c4;
    iVar7 = (int)lVar10 * iVar8 >> 3;
    if (iVar7 < 0x60) {
      iVar7 = 0x60;
    }
    if (iVar17 < 1) {
      iVar19 = 0x28;
    }
    else {
      iVar19 = 0x28;
      plVar2 = param_1 + 0x3e;
      uVar11 = (long)(int)lVar10 * (long)iVar8 * 0x180;
      do {
        while( true ) {
          local_1354 = iVar17 + -1;
          bVar26 = true;
          if ((_LC10 < (double)(float)(local_12f4 & __LC9)) && (local_1354 != 0)) {
            bVar26 = (int)param_1[0xb89] == 0;
          }
          lVar10 = (long)iVar19;
          iVar19 = iVar19 - iVar19 / (iVar17 + 1);
          VP8IteratorInit(param_1,local_f48,lVar10 % (long)(iVar17 + 1) & 0xffffffff);
          VP8SetSegmentParams(param_1);
          SetSegmentProbas(param_1);
          VP8CalculateLevelCosts(plVar1);
          *(undefined4 *)(param_1 + 0xb7a) = 0;
          param_1[0xb7d] = 0;
          param_1[0xb7f] = 0;
          *(undefined1 (*) [16])(param_1 + 0xb7b) = (undefined1  [16])0x0;
          if (bVar26) {
            *(undefined8 *)((long)param_1 + 0x1244) = 0;
            *(undefined8 *)((long)param_1 + 0x22bc) = 0;
            puVar15 = (undefined8 *)((long)param_1 + 0x124cU & 0xfffffffffffffff8);
            uVar13 = (ulong)(((int)param_1 - (int)puVar15) + 0x22c4U >> 3);
            for (; uVar13 != 0; uVar13 = uVar13 - 1) {
              *puVar15 = 0;
              puVar15 = puVar15 + (ulong)bVar27 * -2 + 1;
            }
            VP8InitFilter(local_f48);
          }
          VP8TBufferClear(plVar2);
          local_1398 = 0;
          local_13a0 = 0;
          local_13a4 = iVar7;
          do {
            VP8IteratorImport(local_f48,0);
            local_13a4 = local_13a4 + -1;
            if (local_13a4 == -1) {
              FinalizeTokenProbas(plVar1);
              VP8CalculateLevelCosts(plVar1);
              local_13a4 = iVar7;
            }
            VP8Decimate(local_f48,local_12b8,uVar4);
            lVar10 = local_f20;
            VP8IteratorNzToBytes(local_f48);
            if ((*local_f18 & 3) == 1) {
              iVar8 = local_e80 + local_ea4;
              VP8InitResidual(0,1,lVar10,local_1328);
              (*_VP8SetResidualCoeffs)(local_1290,local_1328);
              local_ea4 = VP8RecordCoeffTokens(iVar8,local_1328,plVar2);
              local_e80 = local_ea4;
              VP8InitResidual(1,0,lVar10,local_1328);
            }
            else {
              VP8InitResidual(0,3,lVar10,local_1328);
            }
            lVar12 = 0;
            puVar18 = local_f48;
            puVar21 = local_1270;
            do {
              iVar8 = *(int *)(puVar18 + 0xa8);
              puVar16 = local_f48;
              puVar23 = puVar21;
              do {
                iVar5 = *(int *)(puVar16 + 0x84);
                puVar20 = puVar16 + 4;
                (*_VP8SetResidualCoeffs)(puVar23,local_1328);
                iVar8 = VP8RecordCoeffTokens(iVar8 + iVar5,local_1328,plVar2);
                puVar23 = puVar23 + 0x20;
                *(int *)(puVar18 + 0xa8) = iVar8;
                *(int *)(puVar16 + 0x84) = iVar8;
                puVar16 = puVar20;
              } while (puVar20 != local_f38);
              puVar18 = puVar18 + 4;
              lVar12 = lVar12 + 4;
              puVar21 = puVar21 + 0x80;
            } while (lVar12 != 0x10);
            lVar12 = 0;
            VP8InitResidual(0,2,lVar10,local_1328);
            puVar18 = local_f40;
            puVar21 = local_f48;
            puVar16 = puVar18;
            puVar23 = local_1070;
            while( true ) {
              iVar8 = 0;
              puVar20 = puVar21;
              puVar25 = puVar23;
              puVar24 = puVar23;
              puVar22 = puVar21;
              do {
                do {
                  puVar14 = puVar20 + 4;
                  iVar5 = *(int *)(puVar22 + 0xb8);
                  iVar6 = *(int *)(puVar20 + 0x94);
                  (*_VP8SetResidualCoeffs)(puVar25,local_1328);
                  uVar9 = VP8RecordCoeffTokens(iVar5 + iVar6,local_1328,plVar2);
                  *(undefined4 *)(puVar22 + 0xb8) = uVar9;
                  *(undefined4 *)(puVar20 + 0x94) = uVar9;
                  puVar20 = puVar14;
                  puVar25 = puVar25 + 0x20;
                } while (puVar18 != puVar14);
                puVar25 = puVar24 + 0x40;
                puVar22 = puVar22 + 4;
                iVar8 = iVar8 + 2;
                puVar20 = puVar21;
                puVar24 = puVar25;
              } while (iVar8 != 4);
              lVar12 = lVar12 + 4;
              puVar18 = puVar18 + 8;
              puVar23 = puVar23 + 0x80;
              if (lVar12 == 8) break;
              puVar21 = puVar16;
              puVar16 = puVar16 + 8;
            }
            VP8IteratorBytesToNz(local_f48);
            if ((int)param_1[0x42] != 0) {
              WebPEncodingSetError(param_1[1],1);
              goto LAB_00102128;
            }
            local_13a0 = local_13a0 + local_12a8;
            local_1398 = local_1398 + local_12b8[0];
            if (bVar26) {
              StoreSideInfo(local_f48);
              VP8StoreFilterStats(local_f48);
              VP8IteratorExport(local_f48);
              iVar8 = VP8IteratorProgress(local_f48);
              VP8IteratorSaveBoundary(local_f48);
              if (iVar8 == 0) goto LAB_00102128;
            }
            else {
              VP8IteratorSaveBoundary(local_f48);
            }
            iVar8 = VP8IteratorNext(local_f48);
          } while (iVar8 != 0);
          uVar13 = (int)param_1[5] + local_13a0;
          if (local_12c8 == 0) {
            dVar28 = _LC8;
            if ((local_1398 != 0) && (uVar11 != 0)) {
              if ((long)uVar11 < 0) {
                dVar28 = (double)(uVar11 >> 1) + (double)(uVar11 >> 1);
              }
              else {
                dVar28 = (double)(long)uVar11;
              }
              dVar28 = log10((dVar28 * __LC11) / (double)local_1398);
              dVar28 = dVar28 * __LC12;
            }
          }
          else {
            iVar8 = FinalizeTokenProbas(plVar1);
            lVar10 = VP8EstimateTokenSize(plVar2,(long)param_1 + 0xe24);
            dVar28 = (double)((uVar13 + 0x400 + lVar10 + (long)iVar8 >> 0xb) + 0x1e);
          }
          local_12e0 = dVar28;
          if ((uVar13 < 0x3fc00001) || ((int)param_1[0xb89] < 1)) break;
          *(int *)(param_1 + 0xb89) = (int)param_1[0xb89] >> 1;
          if (bVar26) {
            if (*(long *)(*(long *)(local_f20 + 8) + 0x80) != 0) {
              *(undefined8 *)(local_f20 + 0x5c34) = 0;
              *(undefined4 *)(local_f20 + 0x5c3c) = 0;
            }
            *(undefined8 *)(local_f20 + 0x5be8) = 0;
            *(undefined8 *)(local_f20 + 0x5bf8) = 0;
            *(undefined1 (*) [16])(local_f20 + 0x5bd8) = (undefined1  [16])0x0;
          }
        }
        if (bVar26) break;
        if (iVar3 != 0) {
          ComputeNextQ_isra_0(local_12f8);
        }
        iVar17 = local_1354;
      } while (local_1354 != 0);
    }
    if (local_12c8 == 0) {
      FinalizeTokenProbas(plVar1);
    }
    local_1338 = param_1 + 0x3e;
    iVar8 = VP8EmitTokens(local_1338,param_1 + 0xe,(long)param_1 + 0xe24,1);
    if (iVar8 == 0) {
LAB_00102128:
      bVar26 = false;
    }
    else {
      iVar8 = WebPReportProgress(param_1[1],(int)param_1[0x43] + iVar19,param_1 + 0x43);
      bVar26 = iVar8 != 0;
    }
    local_13e0 = local_f48;
    PostLoopFinalize(local_13e0,bVar26);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


