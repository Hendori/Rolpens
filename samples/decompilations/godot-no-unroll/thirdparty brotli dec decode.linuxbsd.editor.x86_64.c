
int SaveErrorCode(long param_1,int param_2,long param_3)

{
  int iVar1;
  
  *(long *)(param_1 + 0x2e8) = *(long *)(param_1 + 0x2e8) + param_3;
  *(int *)(param_1 + 0x80) = param_2;
  if ((*(long *)(param_1 + 0x50) != 0) && (*(long *)(param_1 + 0x18) == *(long *)(param_1 + 0x28)))
  {
    *(undefined8 *)(param_1 + 0x50) = 0;
    iVar1 = 0;
    if (param_2 - 1U < 3) {
      iVar1 = param_2;
    }
    return iVar1;
  }
  iVar1 = 0;
  if (param_2 - 1U < 3) {
    iVar1 = param_2;
  }
  return iVar1;
}



undefined8 DecodeMetaBlockLength(long param_1,ulong *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  
  switch(*(undefined4 *)(param_1 + 0x2f0)) {
  case 0:
    if (param_2[1] == 0) {
      pbVar2 = (byte *)param_2[2];
      if (pbVar2 == (byte *)param_2[4]) {
        return 2;
      }
      uVar8 = (ulong)*pbVar2 | *param_2;
      param_2[2] = (ulong)(pbVar2 + 1);
      uVar7 = 7;
    }
    else {
      uVar8 = *param_2;
      uVar7 = param_2[1] - 1;
    }
    param_2[1] = uVar7;
    *param_2 = uVar8 >> 1;
    *(undefined4 *)(param_1 + 0x84) = 0;
    *(byte *)(param_1 + 0x304) = *(byte *)(param_1 + 0x304) & 0xf8 | (byte)uVar8 & 1;
    if ((uVar8 & 1) == 0) {
      *(undefined4 *)(param_1 + 0x2f0) = 2;
      goto switchD_00100074_caseD_2;
    }
    *(undefined4 *)(param_1 + 0x2f0) = 1;
    break;
  case 1:
    break;
  case 2:
switchD_00100074_caseD_2:
    uVar8 = param_2[1];
    goto LAB_00100141;
  case 3:
    uVar9 = *(uint *)(param_1 + 4);
    if ((int)uVar9 < (int)(*(uint *)(param_1 + 0x304) >> 0xc & 0xff)) goto LAB_00100349;
    goto LAB_001003de;
  case 4:
    goto switchD_00100074_caseD_4;
  case 5:
    goto switchD_00100074_caseD_5;
  case 6:
    uVar8 = param_2[1];
    goto LAB_00100212;
  case 7:
    uVar5 = *(uint *)(param_1 + 0x304) >> 0xc;
    goto LAB_0010027d;
  default:
    return 0xffffffe1;
  }
  if (param_2[1] == 0) {
    pbVar2 = (byte *)param_2[2];
    if (pbVar2 == (byte *)param_2[4]) {
      return 2;
    }
    uVar7 = (ulong)*pbVar2 | *param_2;
    param_2[2] = (ulong)(pbVar2 + 1);
    uVar8 = 7;
  }
  else {
    uVar7 = *param_2;
    uVar8 = param_2[1] - 1;
  }
  param_2[1] = uVar8;
  *param_2 = uVar7 >> 1;
  if ((uVar7 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x2f0) = 2;
LAB_00100141:
    if (uVar8 < 2) {
      pbVar2 = (byte *)param_2[2];
      if (pbVar2 == (byte *)param_2[4]) {
        return 2;
      }
      bVar1 = *pbVar2;
      param_2[2] = (ulong)(pbVar2 + 1);
      bVar4 = (byte)uVar8;
      uVar8 = uVar8 + 8;
      uVar7 = (ulong)bVar1 << (bVar4 & 0x3f) | *param_2;
    }
    else {
      uVar7 = *param_2;
    }
    param_2[1] = uVar8 - 2;
    uVar5 = (uint)uVar7 & 3;
    *param_2 = uVar7 >> 2;
    *(undefined4 *)(param_1 + 4) = 0;
    *(uint *)(param_1 + 0x304) = *(uint *)(param_1 + 0x304) & 0xfff00fff | (uVar5 + 4) * 0x1000;
    if (uVar5 == 3) {
      *(byte *)(param_1 + 0x304) = *(byte *)(param_1 + 0x304) | 4;
      *(undefined4 *)(param_1 + 0x2f0) = 5;
switchD_00100074_caseD_5:
      if (param_2[1] == 0) {
        pbVar2 = (byte *)param_2[2];
        if (pbVar2 == (byte *)param_2[4]) {
          return 2;
        }
        uVar7 = (ulong)*pbVar2 | *param_2;
        param_2[2] = (ulong)(pbVar2 + 1);
        uVar8 = 7;
      }
      else {
        uVar7 = *param_2;
        uVar8 = param_2[1] - 1;
      }
      param_2[1] = uVar8;
      *param_2 = uVar7 >> 1;
      if ((uVar7 & 1) != 0) {
        return 0xfffffffe;
      }
      *(undefined4 *)(param_1 + 0x2f0) = 6;
LAB_00100212:
      if (uVar8 < 2) {
        pbVar2 = (byte *)param_2[2];
        if (pbVar2 == (byte *)param_2[4]) {
          return 2;
        }
        bVar1 = *pbVar2;
        param_2[2] = (ulong)(pbVar2 + 1);
        bVar4 = (byte)uVar8;
        uVar8 = uVar8 + 8;
        uVar7 = (ulong)bVar1 << (bVar4 & 0x3f) | *param_2;
      }
      else {
        uVar7 = *param_2;
      }
      param_2[1] = uVar8 - 2;
      *param_2 = uVar7 >> 2;
      uVar5 = (uint)uVar7 & 3;
      if ((uVar7 & 3) != 0) {
        *(undefined4 *)(param_1 + 0x2f0) = 7;
        *(uint *)(param_1 + 0x304) = *(uint *)(param_1 + 0x304) & 0xfff00fff | uVar5 << 0xc;
LAB_0010027d:
        uVar9 = *(uint *)(param_1 + 4);
        if ((int)uVar9 < (int)(uVar5 & 0xff)) {
          uVar8 = param_2[1];
          iVar3 = uVar9 * 8;
          do {
            if (uVar8 < 8) {
              pbVar2 = (byte *)param_2[2];
              if (pbVar2 == (byte *)param_2[4]) {
LAB_001004a8:
                *(uint *)(param_1 + 4) = uVar9;
                return 2;
              }
              bVar1 = *pbVar2;
              param_2[2] = (ulong)(pbVar2 + 1);
              uVar7 = (ulong)bVar1 << ((byte)uVar8 & 0x3f) | *param_2;
            }
            else {
              uVar7 = *param_2;
              uVar8 = uVar8 - 8;
            }
            param_2[1] = uVar8;
            uVar9 = uVar9 + 1;
            *param_2 = uVar7 >> 8;
            uVar5 = *(uint *)(param_1 + 0x304) >> 0xc;
            uVar6 = uVar5 & 0xff;
            if ((uVar9 == uVar6 && 1 < (byte)uVar5) && ((uVar7 & 0xff) == 0)) {
              return 0xfffffffd;
            }
            uVar5 = (uint)((uVar7 & 0xff) << ((byte)iVar3 & 0x3f)) | *(uint *)(param_1 + 0x84);
            *(uint *)(param_1 + 0x84) = uVar5;
            iVar3 = iVar3 + 8;
          } while ((int)uVar9 < (int)uVar6);
        }
        else {
          uVar5 = *(uint *)(param_1 + 0x84);
        }
        *(uint *)(param_1 + 0x84) = uVar5 + 1;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x2f0) = 3;
      uVar9 = 0;
LAB_00100349:
      uVar8 = param_2[1];
      iVar3 = uVar9 * 4;
      do {
        if (uVar8 < 4) {
          pbVar2 = (byte *)param_2[2];
          if (pbVar2 == (byte *)param_2[4]) goto LAB_001004a8;
          bVar1 = *pbVar2;
          bVar4 = (byte)uVar8;
          uVar8 = uVar8 + 8;
          param_2[2] = (ulong)(pbVar2 + 1);
          uVar7 = (ulong)bVar1 << (bVar4 & 0x3f) | *param_2;
        }
        else {
          uVar7 = *param_2;
        }
        uVar8 = uVar8 - 4;
        uVar9 = uVar9 + 1;
        *param_2 = uVar7 >> 4;
        param_2[1] = uVar8;
        uVar5 = *(uint *)(param_1 + 0x304) >> 0xc;
        uVar6 = uVar5 & 0xff;
        if ((4 < (byte)uVar5 && uVar9 == uVar6) && ((uVar7 & 0xf) == 0)) {
          return 0xffffffff;
        }
        *(uint *)(param_1 + 0x84) =
             *(uint *)(param_1 + 0x84) | ((uint)uVar7 & 0xf) << ((byte)iVar3 & 0x3f);
        iVar3 = iVar3 + 4;
      } while ((int)uVar9 < (int)uVar6);
LAB_001003de:
      *(undefined4 *)(param_1 + 0x2f0) = 4;
switchD_00100074_caseD_4:
      if ((*(byte *)(param_1 + 0x304) & 1) == 0) {
        if (param_2[1] == 0) {
          pbVar2 = (byte *)param_2[2];
          if (pbVar2 == (byte *)param_2[4]) {
            return 2;
          }
          uVar8 = (ulong)*pbVar2 | *param_2;
          param_2[2] = (ulong)(pbVar2 + 1);
          uVar7 = 7;
        }
        else {
          uVar8 = *param_2;
          uVar7 = param_2[1] - 1;
        }
        param_2[1] = uVar7;
        *param_2 = uVar8 >> 1;
        *(byte *)(param_1 + 0x304) = ((byte)uVar8 & 1) * '\x02' | *(byte *)(param_1 + 0x304) & 0xfd;
      }
      *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
    }
  }
  *(undefined4 *)(param_1 + 0x2f0) = 0;
  return 1;
}



void InverseMoveToFrontTransform(byte *param_1,ulong param_2,long param_3)

{
  byte bVar1;
  ulong uVar2;
  void *__dest;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  
  __dest = (void *)(param_3 + 0x1c4);
  uVar2 = 1;
  uVar6 = *(ulong *)(param_3 + 0x1b8);
  *(undefined4 *)(param_3 + 0x1c4) = 0x3020100;
  iVar3 = 0x3020100;
  do {
    iVar3 = iVar3 + 0x4040404;
    *(int *)(param_3 + 0x1c4 + uVar2 * 4) = iVar3;
    uVar2 = uVar2 + 1;
  } while (uVar2 <= uVar6);
  if (param_2 != 0) {
    uVar6 = 0;
    pbVar4 = param_1;
    do {
      uVar2 = (ulong)*pbVar4;
      pbVar5 = pbVar4 + 1;
      bVar1 = *(byte *)((long)__dest + uVar2);
      uVar6 = uVar6 | uVar2;
      *pbVar4 = bVar1;
      *(byte *)(param_3 + 0x1c3) = bVar1;
      __dest = memmove(__dest,(void *)(param_3 + 0x1c3),uVar2 + 1);
      pbVar4 = pbVar5;
    } while (param_1 + param_2 != pbVar5);
    param_2 = uVar6 >> 2;
  }
  *(ulong *)(param_3 + 0x1b8) = param_2;
  return;
}



void BrotliCalculateRingBufferSize(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 100);
  iVar3 = 1 << ((byte)(*(ushort *)(param_1 + 0x304) >> 6) & 0x1f);
  iVar4 = 0x400;
  if (iVar2 != 0) {
    iVar4 = iVar2;
  }
  if ((iVar2 != iVar3) && ((*(byte *)(param_1 + 0x304) & 4) == 0)) {
    iVar2 = 0;
    if (*(long *)(param_1 + 0x88) != 0) {
      iVar2 = *(int *)(param_1 + 0x58);
    }
    if ((*(byte *)(param_1 + 0x304) & 0x10) != 0) {
      iVar2 = *(int *)(param_1 + 0x84) + iVar2;
      iVar1 = iVar3;
      if (iVar2 < iVar4) {
        iVar2 = iVar4;
      }
      do {
        iVar3 = iVar1;
        iVar1 = iVar3 >> 1;
      } while (iVar2 <= iVar3 >> 1);
    }
    *(int *)(param_1 + 0x300) = iVar3;
  }
  return;
}



undefined8 SafeDecodeSymbol(char *param_1,ulong *param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar6;
  ulong uVar5;
  
  uVar1 = param_2[1];
  if (uVar1 == 0) {
    if (*param_1 != '\0') {
      return 0;
    }
    *param_3 = (ulong)*(ushort *)(param_1 + 2);
    return 1;
  }
  uVar2 = *param_2;
  pbVar6 = (byte *)(param_1 + (uVar2 & 0xff) * 4);
  bVar3 = *pbVar6;
  if (bVar3 < 9) {
    uVar5 = (ulong)bVar3;
    if (uVar1 < uVar5) {
      return 0;
    }
  }
  else {
    if (uVar1 < 9) {
      return 0;
    }
    pbVar6 = pbVar6 + (((*(ulong *)(&kBrotliBitMask + (ulong)bVar3 * 8) & uVar2) >> 8) +
                      (ulong)*(ushort *)(pbVar6 + 2)) * 4;
    if (uVar1 - 8 < (ulong)*pbVar6) {
      return 0;
    }
    uVar4 = *pbVar6 + 8;
    uVar5 = (ulong)uVar4;
    bVar3 = (byte)uVar4;
  }
  param_2[1] = uVar1 - uVar5;
  *param_2 = uVar2 >> (bVar3 & 0x3f);
  *param_3 = (ulong)*(ushort *)(pbVar6 + 2);
  return 1;
}



void DecodeLiteralBlockSwitch(long param_1)

{
  ushort uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  byte bVar6;
  byte bVar7;
  ulong uVar8;
  ulong uVar9;
  byte *pbVar10;
  ulong uVar11;
  
  uVar3 = *(ulong *)(param_1 + 0x138);
  if (1 < uVar3) {
    uVar8 = *(ulong *)(param_1 + 0x10);
    uVar9 = *(ulong *)(param_1 + 8);
    if (uVar8 < 0x11) {
      bVar7 = (byte)uVar8;
      uVar8 = uVar8 + 0x30;
      lVar4 = **(long **)(param_1 + 0x18);
      *(long *)(param_1 + 0x18) = (long)*(long **)(param_1 + 0x18) + 6;
      uVar9 = uVar9 | lVar4 << (bVar7 & 0x3f);
    }
    pbVar10 = (byte *)(*(long *)(param_1 + 0x100) + (uVar9 & 0xff) * 4);
    bVar7 = *pbVar10;
    if (8 < bVar7) {
      uVar9 = uVar9 >> 8;
      uVar8 = uVar8 - 8;
      pbVar10 = pbVar10 + ((*(ulong *)(&kBrotliBitMask + (ulong)(bVar7 - 8) * 8) & uVar9) +
                          (ulong)*(ushort *)(pbVar10 + 2)) * 4;
      bVar7 = *pbVar10;
    }
    uVar9 = uVar9 >> (bVar7 & 0x3f);
    uVar11 = (ulong)*(ushort *)(pbVar10 + 2);
    uVar8 = uVar8 - bVar7;
    *(ulong *)(param_1 + 8) = uVar9;
    *(ulong *)(param_1 + 0x10) = uVar8;
    if (uVar8 < 0x11) {
      bVar7 = (byte)uVar8;
      uVar8 = uVar8 + 0x30;
      lVar4 = **(long **)(param_1 + 0x18);
      *(long *)(param_1 + 0x18) = (long)*(long **)(param_1 + 0x18) + 6;
      uVar9 = uVar9 | lVar4 << (bVar7 & 0x3f);
    }
    pbVar10 = (byte *)(*(long *)(param_1 + 0x108) + (uVar9 & 0xff) * 4);
    bVar7 = *pbVar10;
    if (8 < bVar7) {
      uVar9 = uVar9 >> 8;
      uVar8 = uVar8 - 8;
      pbVar10 = pbVar10 + ((*(ulong *)(&kBrotliBitMask + (ulong)(bVar7 - 8) * 8) & uVar9) +
                          (ulong)*(ushort *)(pbVar10 + 2)) * 4;
      bVar7 = *pbVar10;
    }
    uVar1 = *(ushort *)(pbVar10 + 2);
    uVar9 = uVar9 >> (bVar7 & 0x3f);
    uVar8 = uVar8 - bVar7;
    *(ulong *)(param_1 + 8) = uVar9;
    bVar7 = (&DAT_00109012)[(ulong)uVar1 * 4];
    uVar1 = *(ushort *)(&_kBrotliPrefixCodeRanges + (ulong)uVar1 * 4);
    *(ulong *)(param_1 + 0x10) = uVar8;
    if (uVar8 < 0x21) {
      bVar6 = (byte)uVar8;
      uVar8 = uVar8 + 0x20;
      uVar2 = **(uint **)(param_1 + 0x18);
      *(uint **)(param_1 + 0x18) = *(uint **)(param_1 + 0x18) + 1;
      uVar9 = uVar9 | (ulong)uVar2 << (bVar6 & 0x3f);
    }
    uVar5 = *(ulong *)(&kBrotliBitMask + (ulong)bVar7 * 8);
    *(ulong *)(param_1 + 0x10) = uVar8 - bVar7;
    *(ulong *)(param_1 + 8) = uVar9 >> (bVar7 & 0x3f);
    uVar8 = *(long *)(param_1 + 0x158) + 1;
    *(ulong *)(param_1 + 0x118) = (ulong)uVar1 + (uVar5 & uVar9);
    if ((uVar11 != 1) && (uVar8 = uVar11 - 2, uVar11 == 0)) {
      uVar8 = *(ulong *)(param_1 + 0x150);
    }
    if (uVar3 <= uVar8) {
      uVar8 = uVar8 - uVar3;
    }
    uVar2 = *(uint *)(param_1 + 0x330 + (uVar8 >> 5) * 4);
    pbVar10 = (byte *)(uVar8 * 0x40 + *(long *)(param_1 + 0x310));
    *(long *)(param_1 + 0x150) = *(long *)(param_1 + 0x158);
    *(ulong *)(param_1 + 0x158) = uVar8;
    *(byte **)(param_1 + 0xa8) = pbVar10;
    *(uint *)(param_1 + 0x110) = uVar2 >> ((byte)uVar8 & 0x1f) & 1;
    *(undefined8 *)(param_1 + 0x1a0) =
         *(undefined8 *)(*(long *)(param_1 + 0xb8) + (ulong)*pbVar10 * 8);
    *(undefined **)(param_1 + 0xa0) =
         &_kBrotliContextLookupTable + ((*(byte *)(*(long *)(param_1 + 0x318) + uVar8) & 3) << 9);
    return;
  }
  return;
}



undefined8 SafeDecodeLiteralBlockSwitch(long param_1)

{
  ushort uVar1;
  uint uVar2;
  ulong uVar3;
  byte *pbVar4;
  byte bVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  byte bVar9;
  byte bVar10;
  ulong uVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  long lVar15;
  long in_FS_OFFSET;
  ulong extraout_XMM0_Qa;
  ulong uVar16;
  ulong extraout_XMM0_Qa_00;
  ulong extraout_XMM0_Qb;
  ulong uVar17;
  ulong extraout_XMM0_Qb_00;
  ulong local_50;
  ulong local_48;
  long local_40;
  
  uVar3 = *(ulong *)(param_1 + 0x138);
  lVar15 = *(long *)(param_1 + 0x108);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (uVar3 < 2) {
LAB_00100aa0:
    uVar8 = 0;
  }
  else {
    uVar16 = *(ulong *)(param_1 + 8);
    uVar17 = *(ulong *)(param_1 + 0x10);
    pbVar14 = *(byte **)(param_1 + 0x18);
    pbVar4 = *(byte **)(param_1 + 0x28);
    pbVar13 = pbVar14;
    uVar12 = uVar16;
    uVar7 = uVar17;
    while (uVar7 < 0xf) {
      if (pbVar4 == pbVar13) {
        iVar6 = SafeDecodeSymbol(*(long *)(param_1 + 0x100),param_1 + 8,&local_50);
        if (iVar6 == 0) goto LAB_00100aa0;
        iVar6 = *(int *)(param_1 + 0x2fc);
        uVar7 = *(ulong *)(param_1 + 0x10);
        uVar16 = extraout_XMM0_Qa;
        uVar17 = extraout_XMM0_Qb;
        goto joined_r0x00100b35;
      }
      bVar10 = *pbVar13;
      pbVar13 = pbVar13 + 1;
      *(byte **)(param_1 + 0x18) = pbVar13;
      bVar9 = (byte)uVar7;
      uVar7 = uVar7 + 8;
      uVar12 = (ulong)bVar10 << (bVar9 & 0x3f) | *(ulong *)(param_1 + 8);
      *(ulong *)(param_1 + 8) = uVar12;
      *(ulong *)(param_1 + 0x10) = uVar7;
    }
    pbVar13 = (byte *)(*(long *)(param_1 + 0x100) + (uVar12 & 0xff) * 4);
    bVar10 = *pbVar13;
    uVar11 = uVar12;
    if (8 < bVar10) {
      uVar11 = uVar12 >> 8;
      uVar7 = uVar7 - 8;
      pbVar13 = pbVar13 + ((ulong)((uint)*(undefined8 *)(&kBrotliBitMask + (ulong)(bVar10 - 8) * 8)
                                   & (uint)(uVar12 >> 8) & 0x7f) + (ulong)*(ushort *)(pbVar13 + 2))
                          * 4;
      bVar10 = *pbVar13;
    }
    uVar7 = uVar7 - bVar10;
    *(ulong *)(param_1 + 8) = uVar11 >> (bVar10 & 0x3f);
    local_50 = (ulong)*(ushort *)(pbVar13 + 2);
    *(ulong *)(param_1 + 0x10) = uVar7;
    iVar6 = *(int *)(param_1 + 0x2fc);
joined_r0x00100b35:
    if (iVar6 == 0) {
      if (uVar7 < 0xf) {
        pbVar13 = *(byte **)(param_1 + 0x18);
        do {
          if (pbVar4 == pbVar13) {
            iVar6 = SafeDecodeSymbol(lVar15,param_1 + 8,&local_48);
            uVar16 = extraout_XMM0_Qa_00;
            uVar17 = extraout_XMM0_Qb_00;
            if (iVar6 == 0) goto LAB_00100a6d;
            uVar7 = *(ulong *)(param_1 + 0x10);
            goto LAB_00100a10;
          }
          bVar10 = *pbVar13;
          bVar9 = (byte)uVar7;
          pbVar13 = pbVar13 + 1;
          uVar7 = uVar7 + 8;
          *(ulong *)(param_1 + 0x10) = uVar7;
          uVar12 = (ulong)bVar10 << (bVar9 & 0x3f) | *(ulong *)(param_1 + 8);
          *(byte **)(param_1 + 0x18) = pbVar13;
          *(ulong *)(param_1 + 8) = uVar12;
        } while (uVar7 < 0xf);
      }
      else {
        uVar12 = *(ulong *)(param_1 + 8);
      }
      pbVar13 = (byte *)(lVar15 + (uVar12 & 0xff) * 4);
      bVar10 = *pbVar13;
      uVar11 = uVar12;
      if (8 < bVar10) {
        uVar11 = uVar12 >> 8;
        uVar7 = uVar7 - 8;
        pbVar13 = pbVar13 + ((ulong)((uint)*(undefined8 *)
                                            (&kBrotliBitMask + (ulong)(bVar10 - 8) * 8) &
                                     (uint)(uVar12 >> 8) & 0x7f) + (ulong)*(ushort *)(pbVar13 + 2))
                            * 4;
        bVar10 = *pbVar13;
      }
      local_48 = (ulong)*(ushort *)(pbVar13 + 2);
      uVar7 = uVar7 - bVar10;
      *(ulong *)(param_1 + 8) = uVar11 >> (bVar10 & 0x3f);
      *(ulong *)(param_1 + 0x10) = uVar7;
    }
    else {
      local_48 = *(ulong *)(param_1 + 0x130);
    }
LAB_00100a10:
    bVar10 = (&DAT_00109012)[local_48 * 4];
    uVar12 = (ulong)bVar10;
    uVar1 = *(ushort *)(&_kBrotliPrefixCodeRanges + local_48 * 4);
    if (uVar7 < uVar12) {
      pbVar13 = *(byte **)(param_1 + 0x18);
LAB_00100a61:
      if (pbVar4 != pbVar13) goto LAB_00100a38;
      *(ulong *)(param_1 + 0x130) = local_48;
LAB_00100a6d:
      *(undefined4 *)(param_1 + 0x2fc) = 0;
      *(byte **)(param_1 + 0x18) = pbVar14;
      *(ulong *)(param_1 + 8) = uVar16;
      *(ulong *)(param_1 + 0x10) = uVar17;
      lVar15 = (long)pbVar4 - (long)pbVar14;
      if (lVar15 == 0) {
        *(byte **)(param_1 + 0x28) = pbVar14;
LAB_00100d14:
        *(byte **)(param_1 + 0x20) = pbVar14;
      }
      else {
        if (lVar15 + 1U < 0x1d) goto LAB_00100d14;
        *(byte **)(param_1 + 0x20) = pbVar14 + lVar15 + -0x1b;
      }
      goto LAB_00100aa0;
    }
    uVar11 = *(ulong *)(param_1 + 8);
LAB_00100bb0:
    *(undefined4 *)(param_1 + 0x2fc) = 0;
    uVar16 = *(ulong *)(&kBrotliBitMask + uVar12 * 8);
    *(ulong *)(param_1 + 0x10) = uVar7 - uVar12;
    *(ulong *)(param_1 + 8) = uVar11 >> (bVar10 & 0x3f);
    *(ulong *)(param_1 + 0x118) = (ulong)uVar1 + (uVar16 & uVar11);
    uVar7 = *(long *)(param_1 + 0x158) + 1;
    if ((local_50 != 1) && (uVar7 = local_50 - 2, local_50 == 0)) {
      uVar7 = *(ulong *)(param_1 + 0x150);
    }
    if (uVar3 <= uVar7) {
      uVar7 = uVar7 - uVar3;
    }
    uVar2 = *(uint *)(param_1 + 0x330 + (uVar7 >> 5) * 4);
    pbVar14 = (byte *)(uVar7 * 0x40 + *(long *)(param_1 + 0x310));
    *(long *)(param_1 + 0x150) = *(long *)(param_1 + 0x158);
    *(ulong *)(param_1 + 0x158) = uVar7;
    *(byte **)(param_1 + 0xa8) = pbVar14;
    *(uint *)(param_1 + 0x110) = uVar2 >> ((byte)uVar7 & 0x1f) & 1;
    *(undefined8 *)(param_1 + 0x1a0) =
         *(undefined8 *)(*(long *)(param_1 + 0xb8) + (ulong)*pbVar14 * 8);
    *(undefined **)(param_1 + 0xa0) =
         &_kBrotliContextLookupTable + ((*(byte *)(*(long *)(param_1 + 0x318) + uVar7) & 3) << 9);
    uVar8 = 1;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
LAB_00100a38:
  bVar9 = *pbVar13;
  bVar5 = (byte)uVar7;
  pbVar13 = pbVar13 + 1;
  uVar7 = uVar7 + 8;
  *(ulong *)(param_1 + 0x10) = uVar7;
  uVar11 = (ulong)bVar9 << (bVar5 & 0x3f) | *(ulong *)(param_1 + 8);
  *(byte **)(param_1 + 0x18) = pbVar13;
  *(ulong *)(param_1 + 8) = uVar11;
  if (uVar12 <= uVar7) goto LAB_00100bb0;
  goto LAB_00100a61;
}



void DecodeCommandBlockSwitch(long param_1)

{
  ushort uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  byte bVar6;
  byte bVar7;
  ulong uVar8;
  ulong uVar9;
  byte *pbVar10;
  ulong uVar11;
  
  uVar3 = *(ulong *)(param_1 + 0x140);
  if (1 < uVar3) {
    uVar8 = *(ulong *)(param_1 + 0x10);
    uVar9 = *(ulong *)(param_1 + 8);
    if (uVar8 < 0x11) {
      bVar7 = (byte)uVar8;
      uVar8 = uVar8 + 0x30;
      lVar4 = **(long **)(param_1 + 0x18);
      *(long *)(param_1 + 0x18) = (long)*(long **)(param_1 + 0x18) + 6;
      uVar9 = uVar9 | lVar4 << (bVar7 & 0x3f);
    }
    pbVar10 = (byte *)(*(long *)(param_1 + 0x100) + 0x9e0 + (uVar9 & 0xff) * 4);
    bVar7 = *pbVar10;
    if (8 < bVar7) {
      uVar9 = uVar9 >> 8;
      uVar8 = uVar8 - 8;
      pbVar10 = pbVar10 + ((*(ulong *)(&kBrotliBitMask + (ulong)(bVar7 - 8) * 8) & uVar9) +
                          (ulong)*(ushort *)(pbVar10 + 2)) * 4;
      bVar7 = *pbVar10;
    }
    uVar9 = uVar9 >> (bVar7 & 0x3f);
    uVar11 = (ulong)*(ushort *)(pbVar10 + 2);
    uVar8 = uVar8 - bVar7;
    *(ulong *)(param_1 + 8) = uVar9;
    *(ulong *)(param_1 + 0x10) = uVar8;
    if (uVar8 < 0x11) {
      bVar7 = (byte)uVar8;
      uVar8 = uVar8 + 0x30;
      lVar4 = **(long **)(param_1 + 0x18);
      *(long *)(param_1 + 0x18) = (long)*(long **)(param_1 + 0x18) + 6;
      uVar9 = uVar9 | lVar4 << (bVar7 & 0x3f);
    }
    pbVar10 = (byte *)(*(long *)(param_1 + 0x108) + 0x630 + (uVar9 & 0xff) * 4);
    bVar7 = *pbVar10;
    if (8 < bVar7) {
      uVar9 = uVar9 >> 8;
      uVar8 = uVar8 - 8;
      pbVar10 = pbVar10 + ((*(ulong *)(&kBrotliBitMask + (ulong)(bVar7 - 8) * 8) & uVar9) +
                          (ulong)*(ushort *)(pbVar10 + 2)) * 4;
      bVar7 = *pbVar10;
    }
    uVar1 = *(ushort *)(pbVar10 + 2);
    uVar9 = uVar9 >> (bVar7 & 0x3f);
    uVar8 = uVar8 - bVar7;
    *(ulong *)(param_1 + 8) = uVar9;
    bVar7 = (&DAT_00109012)[(ulong)uVar1 * 4];
    uVar1 = *(ushort *)(&_kBrotliPrefixCodeRanges + (ulong)uVar1 * 4);
    *(ulong *)(param_1 + 0x10) = uVar8;
    if (uVar8 < 0x21) {
      bVar6 = (byte)uVar8;
      uVar8 = uVar8 + 0x20;
      uVar2 = **(uint **)(param_1 + 0x18);
      *(uint **)(param_1 + 0x18) = *(uint **)(param_1 + 0x18) + 1;
      uVar9 = uVar9 | (ulong)uVar2 << (bVar6 & 0x3f);
    }
    uVar5 = *(ulong *)(&kBrotliBitMask + (ulong)bVar7 * 8);
    *(ulong *)(param_1 + 0x10) = uVar8 - bVar7;
    uVar8 = *(long *)(param_1 + 0x168) + 1;
    *(ulong *)(param_1 + 8) = uVar9 >> (bVar7 & 0x3f);
    *(ulong *)(param_1 + 0x120) = (ulong)uVar1 + (uVar5 & uVar9);
    if ((uVar11 != 1) && (uVar8 = uVar11 - 2, uVar11 == 0)) {
      uVar8 = *(ulong *)(param_1 + 0x160);
    }
    if (uVar3 <= uVar8) {
      uVar8 = uVar8 - uVar3;
    }
    *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(*(long *)(param_1 + 0xd0) + uVar8 * 8);
    *(long *)(param_1 + 0x160) = *(long *)(param_1 + 0x168);
    *(ulong *)(param_1 + 0x168) = uVar8;
    return;
  }
  return;
}



void DecodeDistanceBlockSwitch(long param_1)

{
  ushort uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  byte bVar6;
  byte bVar7;
  ulong uVar8;
  ulong uVar9;
  byte *pbVar10;
  ulong uVar11;
  
  uVar3 = *(ulong *)(param_1 + 0x148);
  if (1 < uVar3) {
    uVar8 = *(ulong *)(param_1 + 0x10);
    uVar9 = *(ulong *)(param_1 + 8);
    if (uVar8 < 0x11) {
      bVar7 = (byte)uVar8;
      uVar8 = uVar8 + 0x30;
      lVar4 = **(long **)(param_1 + 0x18);
      *(long *)(param_1 + 0x18) = (long)*(long **)(param_1 + 0x18) + 6;
      uVar9 = uVar9 | lVar4 << (bVar7 & 0x3f);
    }
    pbVar10 = (byte *)(*(long *)(param_1 + 0x100) + 0x13c0 + (uVar9 & 0xff) * 4);
    bVar7 = *pbVar10;
    if (8 < bVar7) {
      uVar9 = uVar9 >> 8;
      uVar8 = uVar8 - 8;
      pbVar10 = pbVar10 + ((*(ulong *)(&kBrotliBitMask + (ulong)(bVar7 - 8) * 8) & uVar9) +
                          (ulong)*(ushort *)(pbVar10 + 2)) * 4;
      bVar7 = *pbVar10;
    }
    uVar9 = uVar9 >> (bVar7 & 0x3f);
    uVar11 = (ulong)*(ushort *)(pbVar10 + 2);
    uVar8 = uVar8 - bVar7;
    *(ulong *)(param_1 + 8) = uVar9;
    *(ulong *)(param_1 + 0x10) = uVar8;
    if (uVar8 < 0x11) {
      bVar7 = (byte)uVar8;
      uVar8 = uVar8 + 0x30;
      lVar4 = **(long **)(param_1 + 0x18);
      *(long *)(param_1 + 0x18) = (long)*(long **)(param_1 + 0x18) + 6;
      uVar9 = uVar9 | lVar4 << (bVar7 & 0x3f);
    }
    pbVar10 = (byte *)(*(long *)(param_1 + 0x108) + 0xc60 + (uVar9 & 0xff) * 4);
    bVar7 = *pbVar10;
    if (8 < bVar7) {
      uVar9 = uVar9 >> 8;
      uVar8 = uVar8 - 8;
      pbVar10 = pbVar10 + ((*(ulong *)(&kBrotliBitMask + (ulong)(bVar7 - 8) * 8) & uVar9) +
                          (ulong)*(ushort *)(pbVar10 + 2)) * 4;
      bVar7 = *pbVar10;
    }
    uVar1 = *(ushort *)(pbVar10 + 2);
    uVar9 = uVar9 >> (bVar7 & 0x3f);
    uVar8 = uVar8 - bVar7;
    *(ulong *)(param_1 + 8) = uVar9;
    bVar7 = (&DAT_00109012)[(ulong)uVar1 * 4];
    uVar1 = *(ushort *)(&_kBrotliPrefixCodeRanges + (ulong)uVar1 * 4);
    *(ulong *)(param_1 + 0x10) = uVar8;
    if (uVar8 < 0x21) {
      bVar6 = (byte)uVar8;
      uVar8 = uVar8 + 0x20;
      uVar2 = **(uint **)(param_1 + 0x18);
      *(uint **)(param_1 + 0x18) = *(uint **)(param_1 + 0x18) + 1;
      uVar9 = uVar9 | (ulong)uVar2 << (bVar6 & 0x3f);
    }
    uVar5 = *(ulong *)(&kBrotliBitMask + (ulong)bVar7 * 8);
    *(ulong *)(param_1 + 0x10) = uVar8 - bVar7;
    uVar8 = *(long *)(param_1 + 0x178) + 1;
    *(ulong *)(param_1 + 8) = uVar9 >> (bVar7 & 0x3f);
    *(ulong *)(param_1 + 0x128) = (ulong)uVar1 + (uVar5 & uVar9);
    if ((uVar11 != 1) && (uVar8 = uVar11 - 2, uVar11 == 0)) {
      uVar8 = *(ulong *)(param_1 + 0x170);
    }
    if (uVar3 <= uVar8) {
      uVar8 = uVar8 - uVar3;
    }
    lVar4 = *(long *)(param_1 + 0x198) + uVar8 * 4;
    *(long *)(param_1 + 0xb0) = lVar4;
    *(long *)(param_1 + 0x170) = *(long *)(param_1 + 0x178);
    *(ulong *)(param_1 + 0x178) = uVar8;
    *(undefined1 *)(param_1 + 0x2cc) = *(undefined1 *)(lVar4 + *(int *)(param_1 + 0x114));
    return;
  }
  return;
}



undefined8 DecodeVarLenUint8(long param_1,ulong *param_2,ulong *param_3)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  byte bVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  
  iVar2 = *(int *)(param_1 + 0x2f8);
  if (iVar2 == 1) {
    uVar6 = param_2[1];
LAB_001011dc:
    if (2 < uVar6) goto LAB_001012b0;
    pbVar8 = (byte *)param_2[2];
    if (pbVar8 == (byte *)param_2[4]) {
      *(undefined4 *)(param_1 + 0x2f8) = 1;
      return 2;
    }
    bVar1 = *pbVar8;
    param_2[2] = (ulong)(pbVar8 + 1);
    bVar4 = (byte)uVar6;
    uVar6 = uVar6 + 8;
    uVar5 = (ulong)bVar1 << (bVar4 & 0x3f) | *param_2;
  }
  else {
    if (iVar2 == 2) {
      uVar6 = *param_3;
      goto LAB_00101133;
    }
    if (iVar2 != 0) {
      return 0xffffffe1;
    }
    if (param_2[1] != 0) {
      uVar5 = *param_2;
      uVar6 = param_2[1] - 1;
      param_2[1] = uVar6;
      *param_2 = uVar5 >> 1;
      if ((uVar5 & 1) == 0) goto LAB_00101280;
      goto LAB_001011dc;
    }
    pbVar8 = (byte *)param_2[2];
    if (pbVar8 == (byte *)param_2[4]) {
      return 2;
    }
    bVar1 = *pbVar8;
    uVar5 = *param_2;
    param_2[1] = 7;
    param_2[2] = (ulong)(pbVar8 + 1);
    uVar6 = 7;
    *param_2 = (bVar1 | uVar5) >> 1;
    if (((bVar1 | uVar5) & 1) == 0) {
LAB_00101280:
      *param_3 = 0;
      return 1;
    }
LAB_001012b0:
    uVar5 = *param_2;
  }
  param_2[1] = uVar6 - 3;
  *param_2 = uVar5 >> 3;
  uVar6 = (ulong)((uint)uVar5 & 7);
  if ((uVar5 & 7) == 0) {
    *param_3 = 1;
    *(undefined4 *)(param_1 + 0x2f8) = 0;
    return 1;
  }
  *param_3 = uVar6;
LAB_00101133:
  uVar5 = param_2[1];
  if (uVar5 < uVar6) {
    pbVar8 = (byte *)param_2[2];
    do {
      if ((byte *)param_2[4] == pbVar8) {
        *(undefined4 *)(param_1 + 0x2f8) = 2;
        return 2;
      }
      bVar1 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      param_2[2] = (ulong)pbVar8;
      bVar4 = (byte)uVar5;
      uVar5 = uVar5 + 8;
      uVar7 = (ulong)bVar1 << (bVar4 & 0x3f) | *param_2;
      *param_2 = uVar7;
      param_2[1] = uVar5;
    } while (uVar5 < uVar6);
  }
  else {
    uVar7 = *param_2;
  }
  uVar3 = *(ulong *)(&kBrotliBitMask + uVar6 * 8);
  param_2[1] = uVar5 - uVar6;
  *param_2 = uVar7 >> ((byte)uVar6 & 0x3f);
  *param_3 = (ulong)(uint)(1 << ((byte)*param_3 & 0x1f)) + (uVar3 & uVar7);
  *(undefined4 *)(param_1 + 0x2f8) = 0;
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
ReadHuffmanCode(long param_1,ulong param_2,undefined8 param_3,ulong *param_4,long param_5)

{
  long lVar1;
  int *piVar2;
  short *psVar3;
  byte bVar4;
  ushort uVar5;
  uint *puVar6;
  uint *puVar7;
  byte *pbVar8;
  byte bVar9;
  bool bVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  sbyte sVar20;
  byte bVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  byte *pbVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  ulong local_58;
  
  switch(*(undefined4 *)(param_5 + 0x358)) {
  case 0:
    uVar17 = *(ulong *)(param_5 + 0x10);
    if (uVar17 < 2) {
      pbVar25 = *(byte **)(param_5 + 0x18);
      if (pbVar25 == *(byte **)(param_5 + 0x28)) {
        return 2;
      }
      bVar4 = *pbVar25;
      *(byte **)(param_5 + 0x18) = pbVar25 + 1;
      bVar21 = (byte)uVar17;
      uVar17 = uVar17 + 8;
      uVar24 = (ulong)bVar4 << (bVar21 & 0x3f) | *(ulong *)(param_5 + 8);
    }
    else {
      uVar24 = *(ulong *)(param_5 + 8);
    }
    uVar17 = uVar17 - 2;
    uVar22 = (ulong)((uint)uVar24 & 3);
    *(ulong *)(param_5 + 0x10) = uVar17;
    *(ulong *)(param_5 + 0x360) = uVar22;
    *(ulong *)(param_5 + 8) = uVar24 >> 2;
    uVar11 = _UNK_00108368;
    uVar19 = __LC1;
    if (uVar22 != 1) {
      *(undefined8 *)(param_5 + 0xa4a) = 0;
      *(undefined4 *)(param_5 + 0xa52) = 0;
      *(undefined2 *)(param_5 + 0xa48) = 0;
      *(undefined4 *)(param_5 + 0x358) = 4;
      *(undefined8 *)(param_5 + 0x380) = uVar19;
      *(undefined8 *)(param_5 + 0x388) = uVar11;
      *(undefined1 (*) [16])(param_5 + 0xa38) = (undefined1  [16])0x0;
      goto switchD_00101320_caseD_4;
    }
    break;
  case 1:
    uVar17 = *(ulong *)(param_5 + 0x10);
    break;
  case 2:
    uVar17 = *(ulong *)(param_5 + 0x360);
    uVar24 = *(ulong *)(param_5 + 0x378);
    uVar22 = param_1 - 1;
    if (uVar22 != 0) {
      lVar27 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar27 == 0; lVar27 = lVar27 + -1) {
        }
      }
      uVar22 = (ulong)((int)lVar27 + 1);
    }
    if (uVar17 <= uVar24) goto LAB_0010166c;
    goto LAB_0010171b;
  case 3:
    uVar24 = *(ulong *)(param_5 + 0x378);
    goto LAB_0010132a;
  case 4:
switchD_00101320_caseD_4:
    uVar24 = *(ulong *)(param_5 + 0x360);
    lVar27 = *(long *)(param_5 + 0x380);
    lVar28 = *(long *)(param_5 + 0x388);
    if (uVar24 < 0x12) {
      uVar17 = *(ulong *)(param_5 + 0x10);
      do {
        bVar4 = kCodeLengthCodeOrder[uVar24];
        if (uVar17 < 4) {
          pbVar25 = *(byte **)(param_5 + 0x18);
          if (pbVar25 != *(byte **)(param_5 + 0x28)) {
            bVar21 = *pbVar25;
            bVar9 = (byte)uVar17;
            uVar17 = uVar17 + 8;
            *(byte **)(param_5 + 0x18) = pbVar25 + 1;
            uVar22 = (ulong)bVar21 << (bVar9 & 0x3f) | *(ulong *)(param_5 + 8);
            goto LAB_00101809;
          }
          if (uVar17 == 0) {
LAB_00101894:
            *(ulong *)(param_5 + 0x360) = uVar24;
            *(long *)(param_5 + 0x380) = lVar27;
            *(long *)(param_5 + 0x388) = lVar28;
            *(undefined4 *)(param_5 + 0x358) = 4;
            return 2;
          }
          uVar22 = *(ulong *)(param_5 + 8);
          uVar15 = (ulong)((uint)uVar22 & 0xf);
          uVar18 = (ulong)(byte)kCodeLengthPrefixLength[uVar15];
          if (uVar17 < uVar18) goto LAB_00101894;
        }
        else {
          uVar22 = *(ulong *)(param_5 + 8);
LAB_00101809:
          uVar15 = (ulong)((uint)uVar22 & 0xf);
          uVar18 = (ulong)(byte)kCodeLengthPrefixLength[uVar15];
        }
        bVar21 = kCodeLengthPrefixValue[uVar15];
        uVar17 = uVar17 - uVar18;
        *(ulong *)(param_5 + 0x10) = uVar17;
        *(ulong *)(param_5 + 8) = uVar22 >> ((byte)uVar18 & 0x3f);
        *(byte *)(param_5 + 0xa38 + (ulong)bVar4) = bVar21;
        if ((ulong)bVar21 != 0) {
          lVar27 = lVar27 + 1;
          psVar3 = (short *)(param_5 + 0xa4a + (ulong)bVar21 * 2);
          *psVar3 = *psVar3 + 1;
          lVar28 = lVar28 - (ulong)(0x20 >> (bVar21 & 0x1f));
          if (0x1f < lVar28 - 1U) break;
        }
        uVar24 = uVar24 + 1;
      } while (uVar24 != 0x12);
    }
    if ((lVar27 != 1) && (lVar28 != 0)) {
      uVar19 = FUN_001013b3();
      return uVar19;
    }
    BrotliBuildCodeLengthsHuffmanTable(param_5 + 0x390,param_5 + 0xa38,param_5 + 0xa4a);
    lVar27 = 0;
    *(undefined1 (*) [16])(param_5 + 0xa4a) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_5 + 0xa5a) = (undefined1  [16])0x0;
    lVar28 = *(long *)(param_5 + 0x410);
    do {
      *(int *)(param_5 + 0x9b8 + lVar27 * 4) = (int)lVar27 + -0x10;
      *(undefined2 *)(lVar28 + -0x20 + lVar27 * 2) = 0xffff;
      uVar11 = _UNK_00108378;
      uVar19 = __LC2;
      lVar27 = lVar27 + 1;
    } while (lVar27 != 0x10);
    uVar24 = 0;
    lVar27 = 0;
    uVar17 = 0;
    *(undefined4 *)(param_5 + 0x358) = 5;
    lVar29 = 0x8000;
    *(undefined8 *)(param_5 + 0x368) = uVar19;
    *(undefined8 *)(param_5 + 0x370) = uVar11;
    *(undefined8 *)(param_5 + 0x388) = 0x8000;
    local_58 = 8;
    *(undefined1 (*) [16])(param_5 + 0x378) = (undefined1  [16])0x0;
    goto LAB_001013f8;
  case 5:
    local_58 = *(ulong *)(param_5 + 0x370);
    uVar17 = *(ulong *)(param_5 + 0x378);
    lVar27 = *(long *)(param_5 + 0x380);
    lVar29 = *(long *)(param_5 + 0x388);
    uVar24 = *(ulong *)(param_5 + 0x368);
    lVar28 = *(long *)(param_5 + 0x410);
LAB_001013f8:
    lVar26 = param_5 + 0xa4a;
    lVar1 = param_5 + 0x9b8;
    iVar12 = BrotliWarmupBitReader(param_5 + 8);
    if (iVar12 == 0) {
      uVar17 = *(ulong *)(param_5 + 0x378);
      lVar29 = *(long *)(param_5 + 0x388);
      if (uVar17 < param_2) {
LAB_00101ac3:
        bVar10 = false;
        while (lVar29 != 0) {
          pbVar25 = (byte *)(param_5 + 0x390);
          if (bVar10) {
            pbVar8 = *(byte **)(param_5 + 0x18);
            if (pbVar8 == *(byte **)(param_5 + 0x28)) {
              return 2;
            }
            bVar4 = *pbVar8;
            *(byte **)(param_5 + 0x18) = pbVar8 + 1;
            uVar24 = *(long *)(param_5 + 0x10) + 8;
            *(ulong *)(param_5 + 8) =
                 *(ulong *)(param_5 + 8) | (ulong)bVar4 << ((byte)*(long *)(param_5 + 0x10) & 0x3f);
            *(ulong *)(param_5 + 0x10) = uVar24;
          }
          else {
            uVar24 = *(ulong *)(param_5 + 0x10);
          }
          uVar22 = 0;
          if (uVar24 != 0) {
            uVar22 = *(ulong *)(param_5 + 8) & 0xffffffff;
            pbVar25 = pbVar25 + (ulong)((uint)*(ulong *)(param_5 + 8) & 0x1f) * 4;
          }
          bVar4 = *pbVar25;
          uVar15 = (ulong)bVar4;
          if (uVar24 < uVar15) {
LAB_00101b91:
            uVar17 = *(ulong *)(param_5 + 0x378);
            bVar10 = true;
          }
          else {
            uVar5 = *(ushort *)(pbVar25 + 2);
            uVar18 = (ulong)uVar5;
            if (uVar5 < 0x10) {
              *(ulong *)(param_5 + 8) = *(ulong *)(param_5 + 8) >> (bVar4 & 0x3f);
              *(ulong *)(param_5 + 0x10) = uVar24 - uVar15;
              *(undefined8 *)(param_5 + 0x380) = 0;
              if (uVar18 != 0) {
                piVar2 = (int *)(lVar1 + uVar18 * 4);
                *(short *)(*(long *)(param_5 + 0x410) + (long)*piVar2 * 2) = (short)uVar17;
                *piVar2 = (int)uVar17;
                *(ulong *)(param_5 + 0x370) = uVar18;
                *(ulong *)(param_5 + 0x388) = lVar29 - (ulong)(0x8000 >> ((byte)uVar5 & 0x1f));
                psVar3 = (short *)(lVar26 + uVar18 * 2);
                *psVar3 = *psVar3 + 1;
              }
              uVar17 = uVar17 + 1;
              bVar10 = false;
              *(ulong *)(param_5 + 0x378) = uVar17;
            }
            else {
              uVar15 = uVar15 + (uVar18 - 0xe);
              if (uVar24 < uVar15) goto LAB_00101b91;
              *(ulong *)(param_5 + 8) = *(ulong *)(param_5 + 8) >> ((byte)uVar15 & 0x3f);
              sVar20 = 3;
              *(ulong *)(param_5 + 0x10) = uVar24 - uVar15;
              uVar24 = *(ulong *)(&kBrotliBitMask + (uVar18 - 0xe) * 8);
              lVar28 = 0;
              lVar27 = *(long *)(param_5 + 0x410);
              if (uVar18 == 0x10) {
                lVar28 = *(long *)(param_5 + 0x370);
                sVar20 = 2;
              }
              if (*(long *)(param_5 + 0x368) == lVar28) {
                lVar28 = *(long *)(param_5 + 0x380);
                if (lVar28 == 0) {
                  lVar23 = 3;
                }
                else {
                  lVar23 = (lVar28 + -2 << sVar20) + 3;
                }
              }
              else {
                *(long *)(param_5 + 0x368) = lVar28;
                lVar23 = 3;
                lVar28 = 0;
              }
              lVar23 = (uVar22 >> (bVar4 & 0x3f) & uVar24) + lVar23;
              *(long *)(param_5 + 0x380) = lVar23;
              lVar23 = lVar23 - lVar28;
              uVar17 = uVar17 + lVar23;
              if (param_2 < uVar17) {
                *(ulong *)(param_5 + 0x378) = param_2;
                *(undefined8 *)(param_5 + 0x388) = 0xfffff;
                break;
              }
              lVar28 = *(long *)(param_5 + 0x368);
              if (lVar28 == 0) {
                *(ulong *)(param_5 + 0x378) = uVar17;
                bVar10 = false;
              }
              else {
                uVar24 = *(ulong *)(param_5 + 0x378);
                piVar2 = (int *)(lVar1 + lVar28 * 4);
                iVar12 = *piVar2;
                do {
                  *(short *)(lVar27 + (long)iVar12 * 2) = (short)uVar24;
                  iVar12 = (int)uVar24;
                  uVar24 = uVar24 + 1;
                } while (uVar24 != uVar17);
                *(ulong *)(param_5 + 0x378) = uVar17;
                *piVar2 = (int)uVar17 + -1;
                *(long *)(param_5 + 0x388) = lVar29 - (lVar23 << (0xfU - (char)lVar28 & 0x3f));
                psVar3 = (short *)(lVar26 + lVar28 * 2);
                *psVar3 = *psVar3 + (short)lVar23;
                bVar10 = false;
              }
            }
          }
          if (param_2 <= uVar17) break;
          lVar29 = *(long *)(param_5 + 0x388);
        }
        lVar29 = *(long *)(param_5 + 0x388);
      }
    }
    else {
      if ((lVar29 != 0) && (uVar17 < param_2)) {
        puVar6 = *(uint **)(param_5 + 0x20);
        do {
          puVar7 = *(uint **)(param_5 + 0x18);
          if (puVar6 <= puVar7) {
            *(ulong *)(param_5 + 0x378) = uVar17;
            *(long *)(param_5 + 0x380) = lVar27;
            *(ulong *)(param_5 + 0x370) = local_58;
            *(ulong *)(param_5 + 0x368) = uVar24;
            *(long *)(param_5 + 0x388) = lVar29;
            if (uVar17 < param_2) goto LAB_00101ac3;
            goto LAB_00101cb1;
          }
          uVar22 = *(ulong *)(param_5 + 0x10);
          uVar15 = *(ulong *)(param_5 + 8);
          if (uVar22 < 0x21) {
            uVar14 = *puVar7;
            bVar4 = (byte)uVar22;
            uVar22 = uVar22 + 0x20;
            *(uint **)(param_5 + 0x18) = puVar7 + 1;
            uVar15 = uVar15 | (ulong)uVar14 << (bVar4 & 0x3f);
          }
          pbVar25 = (byte *)(param_5 + 0x390 + (ulong)((uint)uVar15 & 0x1f) * 4);
          bVar4 = *pbVar25;
          uVar5 = *(ushort *)(pbVar25 + 2);
          uVar18 = (ulong)uVar5;
          lVar23 = uVar22 - bVar4;
          uVar15 = uVar15 >> (bVar4 & 0x3f);
          *(long *)(param_5 + 0x10) = lVar23;
          *(ulong *)(param_5 + 8) = uVar15;
          iVar12 = (int)uVar17;
          if (uVar5 < 0x10) {
            if (uVar18 != 0) {
              piVar2 = (int *)(lVar1 + uVar18 * 4);
              *(short *)(lVar28 + (long)*piVar2 * 2) = (short)uVar17;
              *piVar2 = iVar12;
              psVar3 = (short *)(lVar26 + uVar18 * 2);
              *psVar3 = *psVar3 + 1;
              lVar29 = lVar29 - (ulong)(0x8000 >> ((byte)uVar5 & 0x1f));
              local_58 = uVar18;
            }
            uVar22 = uVar17 + 1;
            lVar23 = 0;
          }
          else {
            if (uVar18 == 0x10) {
              lVar23 = lVar23 + -2;
              uVar16 = uVar15 >> 2;
              sVar20 = 2;
              uVar18 = local_58;
              uVar22 = __kBrotliContextLookupTable;
            }
            else {
              lVar23 = lVar23 + -3;
              uVar16 = uVar15 >> 3;
              sVar20 = 3;
              uVar18 = 0;
              uVar22 = ___stack_chk_fail;
            }
            *(long *)(param_5 + 0x10) = lVar23;
            *(ulong *)(param_5 + 8) = uVar16;
            if ((lVar27 == 0) || (uVar24 != uVar18)) {
              lVar27 = 0;
              lVar23 = 0;
            }
            else {
              lVar23 = lVar27 + -2 << sVar20;
            }
            lVar23 = (uVar15 & uVar22) + 3 + lVar23;
            lVar27 = lVar23 - lVar27;
            uVar22 = uVar17 + lVar27;
            if (param_2 < uVar22) {
              lVar29 = 0xfffff;
              break;
            }
            if (uVar18 == 0) {
              uVar24 = 0;
            }
            else {
              piVar2 = (int *)(lVar1 + uVar18 * 4);
              iVar13 = *piVar2;
              do {
                *(short *)(lVar28 + (long)iVar13 * 2) = (short)uVar17;
                iVar13 = (int)uVar17;
                uVar17 = uVar17 + 1;
              } while (uVar22 != uVar17);
              *piVar2 = (int)lVar27 + -1 + iVar12;
              psVar3 = (short *)(lVar26 + uVar18 * 2);
              *psVar3 = *psVar3 + (short)lVar27;
              lVar29 = lVar29 - (lVar27 << (0xfU - (char)uVar18 & 0x3f));
              uVar24 = uVar18;
            }
          }
          if ((param_2 <= uVar22) || (uVar17 = uVar22, lVar27 = lVar23, lVar29 == 0)) break;
        } while( true );
      }
      *(long *)(param_5 + 0x388) = lVar29;
    }
    if (lVar29 != 0) {
LAB_00101cb1:
      uVar19 = FUN_001013b3();
      return uVar19;
    }
    uVar14 = BrotliBuildHuffmanTable(param_3,8,*(undefined8 *)(param_5 + 0x410),lVar26);
    if (param_4 == (ulong *)0x0) goto LAB_001013a4;
    goto LAB_0010139f;
  default:
    uVar19 = FUN_001013b3();
    return uVar19;
  }
  if (uVar17 < 2) {
    pbVar25 = *(byte **)(param_5 + 0x18);
    if (pbVar25 == *(byte **)(param_5 + 0x28)) {
      *(undefined4 *)(param_5 + 0x358) = 1;
      return 2;
    }
    bVar4 = *pbVar25;
    *(byte **)(param_5 + 0x18) = pbVar25 + 1;
    bVar21 = (byte)uVar17;
    uVar17 = uVar17 + 8;
    uVar22 = (ulong)bVar4 << (bVar21 & 0x3f) | *(ulong *)(param_5 + 8);
  }
  else {
    uVar22 = *(ulong *)(param_5 + 8);
  }
  *(undefined8 *)(param_5 + 0x360) = 0;
  uVar24 = (ulong)((uint)uVar22 & 3);
  uVar15 = param_1 - 1;
  *(ulong *)(param_5 + 0x10) = uVar17 - 2;
  *(ulong *)(param_5 + 0x378) = uVar24;
  *(ulong *)(param_5 + 8) = uVar22 >> 2;
  if (uVar15 == 0) {
    uVar22 = 0;
    uVar17 = 0;
  }
  else {
    lVar27 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar27 == 0; lVar27 = lVar27 + -1) {
      }
    }
    uVar17 = 0;
    uVar22 = (ulong)((int)lVar27 + 1);
  }
LAB_0010166c:
  uVar15 = *(ulong *)(param_5 + 0x10);
  do {
    if (uVar15 < uVar22) {
      pbVar25 = *(byte **)(param_5 + 0x18);
      do {
        if (*(byte **)(param_5 + 0x28) == pbVar25) {
          *(ulong *)(param_5 + 0x360) = uVar17;
          *(undefined4 *)(param_5 + 0x358) = 2;
          return 2;
        }
        bVar4 = *pbVar25;
        bVar21 = (byte)uVar15;
        pbVar25 = pbVar25 + 1;
        uVar15 = uVar15 + 8;
        *(ulong *)(param_5 + 0x10) = uVar15;
        uVar18 = (ulong)bVar4 << (bVar21 & 0x3f) | *(ulong *)(param_5 + 8);
        *(byte **)(param_5 + 0x18) = pbVar25;
        *(ulong *)(param_5 + 8) = uVar18;
      } while (uVar15 < uVar22);
    }
    else {
      uVar18 = *(ulong *)(param_5 + 8);
    }
    uVar16 = *(ulong *)(&kBrotliBitMask + uVar22 * 8);
    uVar15 = uVar15 - uVar22;
    *(ulong *)(param_5 + 0x10) = uVar15;
    *(ulong *)(param_5 + 8) = uVar18 >> ((byte)uVar22 & 0x3f);
    if (param_2 <= (uVar16 & uVar18)) {
      uVar19 = FUN_001013b3();
      return uVar19;
    }
    *(short *)(param_5 + 0x418 + uVar17 * 2) = (short)(uVar16 & uVar18);
    uVar17 = uVar17 + 1;
  } while (uVar17 <= uVar24);
LAB_0010171b:
  if (uVar24 != 0) {
    uVar17 = 0;
    do {
      uVar17 = uVar17 + 1;
      if (uVar24 < uVar17) break;
      uVar22 = uVar17;
      do {
        if (*(short *)(param_5 + 0x416 + uVar17 * 2) == *(short *)(param_5 + 0x418 + uVar22 * 2)) {
          uVar19 = FUN_001013b3();
          return uVar19;
        }
        uVar22 = uVar22 + 1;
      } while (uVar22 <= uVar24);
    } while (uVar17 != uVar24);
LAB_0010132a:
    if (uVar24 == 3) {
      if (*(long *)(param_5 + 0x10) == 0) {
        pbVar25 = *(byte **)(param_5 + 0x18);
        if (pbVar25 == *(byte **)(param_5 + 0x28)) {
          *(undefined4 *)(param_5 + 0x358) = 3;
          return 2;
        }
        uVar17 = (ulong)*pbVar25 | *(ulong *)(param_5 + 8);
        *(byte **)(param_5 + 0x18) = pbVar25 + 1;
        lVar27 = 7;
      }
      else {
        uVar17 = *(ulong *)(param_5 + 8);
        lVar27 = *(long *)(param_5 + 0x10) + -1;
      }
      *(long *)(param_5 + 0x10) = lVar27;
      uVar24 = (ulong)((uint)uVar17 & 1) + 3;
      *(ulong *)(param_5 + 8) = uVar17 >> 1;
      *(ulong *)(param_5 + 0x378) = uVar24;
    }
  }
  uVar14 = BrotliBuildSimpleHuffmanTable(param_3,8,param_5 + 0x418,uVar24 & 0xffffffff);
  if (param_4 != (ulong *)0x0) {
LAB_0010139f:
    *param_4 = (ulong)uVar14;
  }
LAB_001013a4:
  *(undefined4 *)(param_5 + 0x358) = 0;
  return 1;
}



void FUN_001013b3(void)

{
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 switchD_00101320::caseD_0(long param_1)

{
  int *piVar1;
  short *psVar2;
  byte bVar3;
  ushort uVar4;
  uint *puVar5;
  uint *puVar6;
  byte *pbVar7;
  byte bVar8;
  bool bVar9;
  undefined8 uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  long lVar18;
  sbyte sVar19;
  byte bVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  long unaff_RBX;
  ulong uVar25;
  byte *pbVar26;
  long in_R8;
  long lVar27;
  ulong uVar28;
  long lVar29;
  long lVar30;
  ulong unaff_R15;
  undefined8 unaff_retaddr;
  ulong *in_stack_00000008;
  
  uVar21 = *(ulong *)(in_R8 + 0x10);
  if (uVar21 < 2) {
    pbVar26 = *(byte **)(in_R8 + 0x18);
    if (pbVar26 == *(byte **)(in_R8 + 0x28)) {
      return 2;
    }
    bVar3 = *pbVar26;
    *(byte **)(in_R8 + 0x18) = pbVar26 + 1;
    bVar20 = (byte)uVar21;
    uVar21 = uVar21 + 8;
    uVar24 = (ulong)bVar3 << (bVar20 & 0x3f) | *(ulong *)(in_R8 + 8);
  }
  else {
    uVar24 = *(ulong *)(in_R8 + 8);
  }
  uVar22 = uVar21 - 2;
  uVar28 = (ulong)((uint)uVar24 & 3);
  *(ulong *)(unaff_RBX + 0x10) = uVar22;
  *(ulong *)(unaff_RBX + 0x360) = uVar28;
  *(ulong *)(unaff_RBX + 8) = uVar24 >> 2;
  uVar10 = _UNK_00108368;
  uVar17 = __LC1;
  if (uVar28 == 1) {
    if (uVar22 < 2) {
      pbVar26 = *(byte **)(unaff_RBX + 0x18);
      if (pbVar26 == *(byte **)(unaff_RBX + 0x28)) {
        *(undefined4 *)(unaff_RBX + 0x358) = 1;
        return 2;
      }
      bVar3 = *pbVar26;
      *(byte **)(unaff_RBX + 0x18) = pbVar26 + 1;
      bVar20 = (byte)uVar22;
      uVar22 = uVar21 + 6;
      uVar21 = (ulong)bVar3 << (bVar20 & 0x3f) | *(ulong *)(unaff_RBX + 8);
    }
    else {
      uVar21 = *(ulong *)(unaff_RBX + 8);
    }
    *(undefined8 *)(unaff_RBX + 0x360) = 0;
    uVar28 = (ulong)((uint)uVar21 & 3);
    uVar24 = param_1 - 1;
    *(ulong *)(unaff_RBX + 0x10) = uVar22 - 2;
    *(ulong *)(unaff_RBX + 0x378) = uVar28;
    *(ulong *)(unaff_RBX + 8) = uVar21 >> 2;
    if (uVar24 == 0) {
      uVar21 = 0;
    }
    else {
      lVar14 = 0x3f;
      if (uVar24 != 0) {
        for (; uVar24 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      uVar21 = (ulong)((int)lVar14 + 1);
    }
    uVar22 = 0;
    uVar24 = *(ulong *)(unaff_RBX + 0x10);
    do {
      if (uVar24 < uVar21) {
        pbVar26 = *(byte **)(unaff_RBX + 0x18);
        do {
          if (*(byte **)(unaff_RBX + 0x28) == pbVar26) {
            *(ulong *)(unaff_RBX + 0x360) = uVar22;
            *(undefined4 *)(unaff_RBX + 0x358) = 2;
            return 2;
          }
          bVar3 = *pbVar26;
          bVar20 = (byte)uVar24;
          pbVar26 = pbVar26 + 1;
          uVar24 = uVar24 + 8;
          *(ulong *)(unaff_RBX + 0x10) = uVar24;
          uVar16 = (ulong)bVar3 << (bVar20 & 0x3f) | *(ulong *)(unaff_RBX + 8);
          *(byte **)(unaff_RBX + 0x18) = pbVar26;
          *(ulong *)(unaff_RBX + 8) = uVar16;
        } while (uVar24 < uVar21);
      }
      else {
        uVar16 = *(ulong *)(unaff_RBX + 8);
      }
      uVar25 = *(ulong *)(&kBrotliBitMask + uVar21 * 8);
      uVar24 = uVar24 - uVar21;
      *(ulong *)(unaff_RBX + 0x10) = uVar24;
      *(ulong *)(unaff_RBX + 8) = uVar16 >> ((byte)uVar21 & 0x3f);
      if (unaff_R15 <= (uVar25 & uVar16)) {
        uVar17 = FUN_001013b3();
        return uVar17;
      }
      *(short *)(unaff_RBX + 0x418 + uVar22 * 2) = (short)(uVar25 & uVar16);
      uVar22 = uVar22 + 1;
    } while (uVar22 <= uVar28);
    if (uVar28 != 0) {
      uVar21 = 0;
      do {
        uVar21 = uVar21 + 1;
        if (uVar28 < uVar21) break;
        uVar24 = uVar21;
        do {
          if (*(short *)(unaff_RBX + 0x416 + uVar21 * 2) ==
              *(short *)(unaff_RBX + 0x418 + uVar24 * 2)) {
            uVar17 = FUN_001013b3();
            return uVar17;
          }
          uVar24 = uVar24 + 1;
        } while (uVar24 <= uVar28);
      } while (uVar21 != uVar28);
      if (uVar28 == 3) {
        if (*(long *)(unaff_RBX + 0x10) == 0) {
          pbVar26 = *(byte **)(unaff_RBX + 0x18);
          if (pbVar26 == *(byte **)(unaff_RBX + 0x28)) {
            *(undefined4 *)(unaff_RBX + 0x358) = 3;
            return 2;
          }
          uVar21 = (ulong)*pbVar26 | *(ulong *)(unaff_RBX + 8);
          *(byte **)(unaff_RBX + 0x18) = pbVar26 + 1;
          lVar14 = 7;
        }
        else {
          uVar21 = *(ulong *)(unaff_RBX + 8);
          lVar14 = *(long *)(unaff_RBX + 0x10) + -1;
        }
        *(long *)(unaff_RBX + 0x10) = lVar14;
        uVar28 = (ulong)((uint)uVar21 & 1) + 3;
        *(ulong *)(unaff_RBX + 8) = uVar21 >> 1;
        *(ulong *)(unaff_RBX + 0x378) = uVar28;
      }
    }
    uVar11 = BrotliBuildSimpleHuffmanTable(unaff_retaddr,8,unaff_RBX + 0x418,uVar28);
  }
  else {
    *(undefined8 *)(unaff_RBX + 0xa4a) = 0;
    *(undefined4 *)(unaff_RBX + 0xa52) = 0;
    *(undefined2 *)(unaff_RBX + 0xa48) = 0;
    *(undefined4 *)(unaff_RBX + 0x358) = 4;
    *(undefined8 *)(unaff_RBX + 0x380) = uVar17;
    *(undefined8 *)(unaff_RBX + 0x388) = uVar10;
    *(undefined1 (*) [16])(unaff_RBX + 0xa38) = (undefined1  [16])0x0;
    uVar21 = *(ulong *)(unaff_RBX + 0x360);
    lVar14 = *(long *)(unaff_RBX + 0x380);
    lVar29 = *(long *)(unaff_RBX + 0x388);
    if (uVar21 < 0x12) {
      uVar24 = *(ulong *)(unaff_RBX + 0x10);
      do {
        bVar3 = kCodeLengthCodeOrder[uVar21];
        if (uVar24 < 4) {
          pbVar26 = *(byte **)(unaff_RBX + 0x18);
          if (pbVar26 != *(byte **)(unaff_RBX + 0x28)) {
            bVar20 = *pbVar26;
            bVar8 = (byte)uVar24;
            uVar24 = uVar24 + 8;
            *(byte **)(unaff_RBX + 0x18) = pbVar26 + 1;
            uVar28 = (ulong)bVar20 << (bVar8 & 0x3f) | *(ulong *)(unaff_RBX + 8);
            goto LAB_00101809;
          }
          if (uVar24 == 0) {
LAB_00101894:
            *(ulong *)(unaff_RBX + 0x360) = uVar21;
            *(long *)(unaff_RBX + 0x380) = lVar14;
            *(long *)(unaff_RBX + 0x388) = lVar29;
            *(undefined4 *)(unaff_RBX + 0x358) = 4;
            return 2;
          }
          uVar28 = *(ulong *)(unaff_RBX + 8);
          uVar22 = (ulong)((uint)uVar28 & 0xf);
          uVar16 = (ulong)(byte)kCodeLengthPrefixLength[uVar22];
          if (uVar24 < uVar16) goto LAB_00101894;
        }
        else {
          uVar28 = *(ulong *)(unaff_RBX + 8);
LAB_00101809:
          uVar22 = (ulong)((uint)uVar28 & 0xf);
          uVar16 = (ulong)(byte)kCodeLengthPrefixLength[uVar22];
        }
        bVar20 = kCodeLengthPrefixValue[uVar22];
        uVar24 = uVar24 - uVar16;
        *(ulong *)(unaff_RBX + 0x10) = uVar24;
        *(ulong *)(unaff_RBX + 8) = uVar28 >> ((byte)uVar16 & 0x3f);
        *(byte *)(unaff_RBX + 0xa38 + (ulong)bVar3) = bVar20;
        if ((ulong)bVar20 != 0) {
          lVar14 = lVar14 + 1;
          psVar2 = (short *)(unaff_RBX + 0xa4a + (ulong)bVar20 * 2);
          *psVar2 = *psVar2 + 1;
          lVar29 = lVar29 - (ulong)(0x20 >> (bVar20 & 0x1f));
          if (0x1f < lVar29 - 1U) break;
        }
        uVar21 = uVar21 + 1;
      } while (uVar21 != 0x12);
    }
    if ((lVar14 != 1) && (lVar29 != 0)) {
      uVar17 = FUN_001013b3();
      return uVar17;
    }
    lVar14 = unaff_RBX + 0xa4a;
    BrotliBuildCodeLengthsHuffmanTable(unaff_RBX + 0x390,unaff_RBX + 0xa38,lVar14);
    lVar18 = 0;
    *(undefined1 (*) [16])(unaff_RBX + 0xa4a) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(unaff_RBX + 0xa5a) = (undefined1  [16])0x0;
    lVar29 = *(long *)(unaff_RBX + 0x410);
    do {
      *(int *)(unaff_RBX + 0x9b8 + lVar18 * 4) = (int)lVar18 + -0x10;
      *(undefined2 *)(lVar29 + -0x20 + lVar18 * 2) = 0xffff;
      uVar10 = _UNK_00108378;
      uVar17 = __LC2;
      lVar18 = lVar18 + 1;
    } while (lVar18 != 0x10);
    *(undefined4 *)(unaff_RBX + 0x358) = 5;
    lVar30 = 0x8000;
    *(undefined8 *)(unaff_RBX + 0x368) = uVar17;
    *(undefined8 *)(unaff_RBX + 0x370) = uVar10;
    *(undefined8 *)(unaff_RBX + 0x388) = 0x8000;
    uVar24 = 8;
    *(undefined1 (*) [16])(unaff_RBX + 0x378) = (undefined1  [16])0x0;
    lVar18 = unaff_RBX + 0x9b8;
    iVar12 = BrotliWarmupBitReader(unaff_RBX + 8);
    uVar21 = 0;
    if (iVar12 == 0) {
      uVar28 = *(ulong *)(unaff_RBX + 0x378);
      lVar30 = *(long *)(unaff_RBX + 0x388);
      if (uVar28 < unaff_R15) {
LAB_00101ac3:
        bVar9 = false;
        while (lVar30 != 0) {
          pbVar26 = (byte *)(unaff_RBX + 0x390);
          if (bVar9) {
            pbVar7 = *(byte **)(unaff_RBX + 0x18);
            if (pbVar7 == *(byte **)(unaff_RBX + 0x28)) {
              return 2;
            }
            bVar3 = *pbVar7;
            *(byte **)(unaff_RBX + 0x18) = pbVar7 + 1;
            uVar21 = *(long *)(unaff_RBX + 0x10) + 8;
            *(ulong *)(unaff_RBX + 8) =
                 *(ulong *)(unaff_RBX + 8) |
                 (ulong)bVar3 << ((byte)*(long *)(unaff_RBX + 0x10) & 0x3f);
            *(ulong *)(unaff_RBX + 0x10) = uVar21;
          }
          else {
            uVar21 = *(ulong *)(unaff_RBX + 0x10);
          }
          uVar24 = 0;
          if (uVar21 != 0) {
            uVar24 = *(ulong *)(unaff_RBX + 8) & 0xffffffff;
            pbVar26 = pbVar26 + (ulong)((uint)*(ulong *)(unaff_RBX + 8) & 0x1f) * 4;
          }
          bVar3 = *pbVar26;
          uVar22 = (ulong)bVar3;
          if (uVar21 < uVar22) {
LAB_00101b91:
            uVar28 = *(ulong *)(unaff_RBX + 0x378);
            bVar9 = true;
          }
          else {
            uVar4 = *(ushort *)(pbVar26 + 2);
            uVar16 = (ulong)uVar4;
            if (uVar4 < 0x10) {
              *(ulong *)(unaff_RBX + 8) = *(ulong *)(unaff_RBX + 8) >> (bVar3 & 0x3f);
              *(ulong *)(unaff_RBX + 0x10) = uVar21 - uVar22;
              *(undefined8 *)(unaff_RBX + 0x380) = 0;
              if (uVar16 != 0) {
                piVar1 = (int *)(lVar18 + uVar16 * 4);
                *(short *)(*(long *)(unaff_RBX + 0x410) + (long)*piVar1 * 2) = (short)uVar28;
                *piVar1 = (int)uVar28;
                *(ulong *)(unaff_RBX + 0x370) = uVar16;
                *(ulong *)(unaff_RBX + 0x388) = lVar30 - (ulong)(0x8000 >> ((byte)uVar4 & 0x1f));
                psVar2 = (short *)(lVar14 + uVar16 * 2);
                *psVar2 = *psVar2 + 1;
              }
              uVar28 = uVar28 + 1;
              bVar9 = false;
              *(ulong *)(unaff_RBX + 0x378) = uVar28;
            }
            else {
              uVar22 = uVar22 + (uVar16 - 0xe);
              if (uVar21 < uVar22) goto LAB_00101b91;
              *(ulong *)(unaff_RBX + 8) = *(ulong *)(unaff_RBX + 8) >> ((byte)uVar22 & 0x3f);
              sVar19 = 3;
              *(ulong *)(unaff_RBX + 0x10) = uVar21 - uVar22;
              uVar21 = *(ulong *)(&kBrotliBitMask + (uVar16 - 0xe) * 8);
              lVar27 = 0;
              lVar29 = *(long *)(unaff_RBX + 0x410);
              if (uVar16 == 0x10) {
                lVar27 = *(long *)(unaff_RBX + 0x370);
                sVar19 = 2;
              }
              if (*(long *)(unaff_RBX + 0x368) == lVar27) {
                lVar27 = *(long *)(unaff_RBX + 0x380);
                if (lVar27 == 0) {
                  lVar23 = 3;
                }
                else {
                  lVar23 = (lVar27 + -2 << sVar19) + 3;
                }
              }
              else {
                *(long *)(unaff_RBX + 0x368) = lVar27;
                lVar23 = 3;
                lVar27 = 0;
              }
              lVar23 = (uVar24 >> (bVar3 & 0x3f) & uVar21) + lVar23;
              *(long *)(unaff_RBX + 0x380) = lVar23;
              lVar23 = lVar23 - lVar27;
              uVar28 = uVar28 + lVar23;
              if (unaff_R15 < uVar28) {
                *(ulong *)(unaff_RBX + 0x378) = unaff_R15;
                *(undefined8 *)(unaff_RBX + 0x388) = 0xfffff;
                break;
              }
              lVar27 = *(long *)(unaff_RBX + 0x368);
              if (lVar27 == 0) {
                *(ulong *)(unaff_RBX + 0x378) = uVar28;
                bVar9 = false;
              }
              else {
                uVar21 = *(ulong *)(unaff_RBX + 0x378);
                piVar1 = (int *)(lVar18 + lVar27 * 4);
                iVar12 = *piVar1;
                do {
                  *(short *)(lVar29 + (long)iVar12 * 2) = (short)uVar21;
                  iVar12 = (int)uVar21;
                  uVar21 = uVar21 + 1;
                } while (uVar21 != uVar28);
                *(ulong *)(unaff_RBX + 0x378) = uVar28;
                *piVar1 = (int)uVar28 + -1;
                *(long *)(unaff_RBX + 0x388) = lVar30 - (lVar23 << (0xfU - (char)lVar27 & 0x3f));
                psVar2 = (short *)(lVar14 + lVar27 * 2);
                *psVar2 = *psVar2 + (short)lVar23;
                bVar9 = false;
              }
            }
          }
          if (unaff_R15 <= uVar28) break;
          lVar30 = *(long *)(unaff_RBX + 0x388);
        }
        lVar30 = *(long *)(unaff_RBX + 0x388);
      }
    }
    else {
      if (unaff_R15 != 0) {
        puVar5 = *(uint **)(unaff_RBX + 0x20);
        uVar28 = 0;
        lVar27 = 0;
        do {
          puVar6 = *(uint **)(unaff_RBX + 0x18);
          if (puVar5 <= puVar6) {
            *(ulong *)(unaff_RBX + 0x378) = uVar28;
            *(long *)(unaff_RBX + 0x380) = lVar27;
            *(ulong *)(unaff_RBX + 0x370) = uVar24;
            *(ulong *)(unaff_RBX + 0x368) = uVar21;
            *(long *)(unaff_RBX + 0x388) = lVar30;
            if (uVar28 < unaff_R15) goto LAB_00101ac3;
            goto LAB_00101cb1;
          }
          uVar22 = *(ulong *)(unaff_RBX + 0x10);
          uVar16 = *(ulong *)(unaff_RBX + 8);
          if (uVar22 < 0x21) {
            uVar11 = *puVar6;
            bVar3 = (byte)uVar22;
            uVar22 = uVar22 + 0x20;
            *(uint **)(unaff_RBX + 0x18) = puVar6 + 1;
            uVar16 = uVar16 | (ulong)uVar11 << (bVar3 & 0x3f);
          }
          pbVar26 = (byte *)(unaff_RBX + 0x390 + (ulong)((uint)uVar16 & 0x1f) * 4);
          bVar3 = *pbVar26;
          uVar4 = *(ushort *)(pbVar26 + 2);
          uVar25 = (ulong)uVar4;
          lVar23 = uVar22 - bVar3;
          uVar16 = uVar16 >> (bVar3 & 0x3f);
          *(long *)(unaff_RBX + 0x10) = lVar23;
          *(ulong *)(unaff_RBX + 8) = uVar16;
          iVar12 = (int)uVar28;
          if (uVar4 < 0x10) {
            if (uVar25 != 0) {
              piVar1 = (int *)(lVar18 + uVar25 * 4);
              *(short *)(lVar29 + (long)*piVar1 * 2) = (short)uVar28;
              *piVar1 = iVar12;
              psVar2 = (short *)(lVar14 + uVar25 * 2);
              *psVar2 = *psVar2 + 1;
              lVar30 = lVar30 - (ulong)(0x8000 >> ((byte)uVar4 & 0x1f));
              uVar24 = uVar25;
            }
            uVar22 = uVar28 + 1;
            lVar23 = 0;
          }
          else {
            if (uVar25 == 0x10) {
              lVar23 = lVar23 + -2;
              uVar15 = uVar16 >> 2;
              sVar19 = 2;
              uVar25 = uVar24;
              uVar22 = __kBrotliContextLookupTable;
            }
            else {
              lVar23 = lVar23 + -3;
              uVar15 = uVar16 >> 3;
              sVar19 = 3;
              uVar25 = 0;
              uVar22 = ___stack_chk_fail;
            }
            *(long *)(unaff_RBX + 0x10) = lVar23;
            *(ulong *)(unaff_RBX + 8) = uVar15;
            if ((lVar27 == 0) || (uVar21 != uVar25)) {
              lVar27 = 0;
              lVar23 = 0;
            }
            else {
              lVar23 = lVar27 + -2 << sVar19;
            }
            lVar23 = (uVar16 & uVar22) + 3 + lVar23;
            lVar27 = lVar23 - lVar27;
            uVar22 = uVar28 + lVar27;
            if (unaff_R15 < uVar22) {
              lVar30 = 0xfffff;
              break;
            }
            if (uVar25 == 0) {
              uVar21 = 0;
            }
            else {
              piVar1 = (int *)(lVar18 + uVar25 * 4);
              iVar13 = *piVar1;
              do {
                *(short *)(lVar29 + (long)iVar13 * 2) = (short)uVar28;
                iVar13 = (int)uVar28;
                uVar28 = uVar28 + 1;
              } while (uVar22 != uVar28);
              *piVar1 = (int)lVar27 + -1 + iVar12;
              psVar2 = (short *)(lVar14 + uVar25 * 2);
              *psVar2 = *psVar2 + (short)lVar27;
              lVar30 = lVar30 - (lVar27 << (0xfU - (char)uVar25 & 0x3f));
              uVar21 = uVar25;
            }
          }
          if ((unaff_R15 <= uVar22) || (uVar28 = uVar22, lVar27 = lVar23, lVar30 == 0)) break;
        } while( true );
      }
      *(long *)(unaff_RBX + 0x388) = lVar30;
    }
    if (lVar30 != 0) {
LAB_00101cb1:
      uVar17 = FUN_001013b3();
      return uVar17;
    }
    uVar11 = BrotliBuildHuffmanTable(unaff_retaddr,8,*(undefined8 *)(unaff_RBX + 0x410),lVar14);
  }
  if (in_stack_00000008 != (ulong *)0x0) {
    *in_stack_00000008 = (ulong)uVar11;
  }
  *(undefined4 *)(unaff_RBX + 0x358) = 0;
  return 1;
}



undefined8 DecodeContextMap(ulong param_1,ulong *param_2,long *param_3,long param_4)

{
  byte bVar1;
  int iVar2;
  void *__s;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  byte bVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  ulong uVar10;
  size_t __n;
  long in_FS_OFFSET;
  ulong local_58;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (4 < *(uint *)(param_4 + 0x354)) {
    uVar5 = FUN_00101ec0();
    return uVar5;
  }
  switch(*(undefined4 *)(param_4 + 0x354)) {
  case 0:
    uVar5 = DecodeVarLenUint8(param_4,param_4 + 8,param_2);
    if ((int)uVar5 != 1) goto code_r0x00101ec0;
    *param_2 = *param_2 + 1;
    *(undefined8 *)(param_4 + 0xa78) = 0;
    __s = (void *)(**(code **)(param_4 + 0x30))(*(undefined8 *)(param_4 + 0x40));
    *param_3 = (long)__s;
    if (__s == (void *)0x0) {
      uVar5 = FUN_00101ec0();
      return uVar5;
    }
    if (*param_2 < 2) {
      memset(__s,0,param_1);
      goto LAB_00101f34;
    }
    *(undefined4 *)(param_4 + 0x354) = 1;
  case 1:
    uVar7 = *(ulong *)(param_4 + 0x10);
    if (4 < uVar7) {
      uVar4 = *(ulong *)(param_4 + 8);
LAB_00101e67:
      lVar3 = uVar7 - 1;
      uVar10 = uVar4 >> 1;
      uVar8 = (ulong)((uint)uVar4 & 1);
      if ((uVar4 & 1) != 0) {
        lVar3 = uVar7 - 5;
        uVar8 = (ulong)((uint)uVar10 & 0xf) + 1;
        uVar10 = uVar4 >> 5;
      }
      *(ulong *)(param_4 + 0xa80) = uVar8;
      *(long *)(param_4 + 0x10) = lVar3;
      *(ulong *)(param_4 + 8) = uVar10;
      *(undefined4 *)(param_4 + 0x354) = 2;
LAB_00101f47:
      uVar5 = ReadHuffmanCode(uVar8 + *param_2,uVar8 + *param_2,param_4 + 0xa90,0,param_4);
      if ((int)uVar5 != 1) goto code_r0x00101ec0;
      local_58 = *(ulong *)(param_4 + 0xa80);
      lVar3 = *param_3;
      *(undefined8 *)(param_4 + 0xa88) = 0xffff;
      local_48 = 0xffff;
      uVar8 = *(ulong *)(param_4 + 0xa78);
      *(undefined4 *)(param_4 + 0x354) = 3;
      if (uVar8 < param_1) {
        uVar7 = *(ulong *)(param_4 + 0x10);
LAB_00101fb8:
        do {
          if (uVar7 < 0xf) {
            pbVar9 = *(byte **)(param_4 + 0x18);
            do {
              if (*(byte **)(param_4 + 0x28) == pbVar9) {
                iVar2 = SafeDecodeSymbol(param_4 + 0xa90,param_4 + 8,&local_48);
                if (iVar2 != 0) goto joined_r0x0010201d;
                uVar4 = 0xffff;
                goto LAB_001020ec;
              }
              bVar1 = *pbVar9;
              pbVar9 = pbVar9 + 1;
              *(byte **)(param_4 + 0x18) = pbVar9;
              bVar6 = (byte)uVar7;
              uVar7 = uVar7 + 8;
              uVar4 = (ulong)bVar1 << (bVar6 & 0x3f) | *(ulong *)(param_4 + 8);
              *(ulong *)(param_4 + 8) = uVar4;
              *(ulong *)(param_4 + 0x10) = uVar7;
            } while (uVar7 < 0xf);
          }
          else {
            uVar4 = *(ulong *)(param_4 + 8);
          }
          pbVar9 = (byte *)(param_4 + 0xa90 + (uVar4 & 0xff) * 4);
          bVar1 = *pbVar9;
          uVar10 = uVar4;
          if (8 < bVar1) {
            uVar10 = uVar4 >> 8;
            uVar7 = uVar7 - 8;
            pbVar9 = pbVar9 + ((ulong)((uint)*(undefined8 *)
                                              (&kBrotliBitMask + (ulong)(bVar1 - 8) * 8) &
                                       (uint)(uVar4 >> 8) & 0x7f) + (ulong)*(ushort *)(pbVar9 + 2))
                              * 4;
            bVar1 = *pbVar9;
          }
          local_48 = (ulong)*(ushort *)(pbVar9 + 2);
          *(ulong *)(param_4 + 0x10) = uVar7 - bVar1;
          *(ulong *)(param_4 + 8) = uVar10 >> (bVar1 & 0x3f);
joined_r0x0010201d:
          if (local_48 == 0) {
            *(undefined1 *)(lVar3 + uVar8) = 0;
            uVar8 = uVar8 + 1;
          }
          else if (local_58 < local_48) {
            *(char *)(lVar3 + uVar8) = (char)local_48 - (char)local_58;
            uVar8 = uVar8 + 1;
          }
          else {
            uVar7 = *(ulong *)(param_4 + 0x10);
LAB_001020a8:
            if (uVar7 < local_48) {
              pbVar9 = *(byte **)(param_4 + 0x18);
              do {
                uVar4 = local_48;
                if (*(byte **)(param_4 + 0x28) == pbVar9) {
LAB_001020ec:
                  *(ulong *)(param_4 + 0xa88) = uVar4;
                  *(ulong *)(param_4 + 0xa78) = uVar8;
                  uVar5 = FUN_00101ec0();
                  return uVar5;
                }
                bVar1 = *pbVar9;
                pbVar9 = pbVar9 + 1;
                *(byte **)(param_4 + 0x18) = pbVar9;
                bVar6 = (byte)uVar7;
                uVar7 = uVar7 + 8;
                uVar4 = (ulong)bVar1 << (bVar6 & 0x3f) | *(ulong *)(param_4 + 8);
                *(ulong *)(param_4 + 8) = uVar4;
                *(ulong *)(param_4 + 0x10) = uVar7;
              } while (uVar7 < local_48);
            }
            else {
              uVar4 = *(ulong *)(param_4 + 8);
            }
            uVar10 = *(ulong *)(&kBrotliBitMask + local_48 * 8);
            *(ulong *)(param_4 + 0x10) = uVar7 - local_48;
            __n = (ulong)(uint)(1 << ((byte)local_48 & 0x1f)) + (uVar10 & uVar4);
            *(ulong *)(param_4 + 8) = uVar4 >> ((byte)local_48 & 0x3f);
            uVar7 = __n + uVar8;
            if (param_1 < uVar7) {
              uVar5 = FUN_00101ec0();
              return uVar5;
            }
            memset((void *)(uVar8 + lVar3),0,__n);
            uVar8 = uVar7;
          }
          if (param_1 <= uVar8) break;
          uVar7 = *(ulong *)(param_4 + 0x10);
        } while( true );
      }
      break;
    }
    pbVar9 = *(byte **)(param_4 + 0x18);
    if (pbVar9 != *(byte **)(param_4 + 0x28)) {
      bVar1 = *pbVar9;
      *(byte **)(param_4 + 0x18) = pbVar9 + 1;
      bVar6 = (byte)uVar7;
      uVar7 = uVar7 + 8;
      uVar4 = (ulong)bVar1 << (bVar6 & 0x3f) | *(ulong *)(param_4 + 8);
      goto LAB_00101e67;
    }
    goto LAB_00101eba;
  case 2:
    uVar8 = *(ulong *)(param_4 + 0xa80);
    goto LAB_00101f47;
  case 3:
    local_48 = *(ulong *)(param_4 + 0xa88);
    local_58 = *(ulong *)(param_4 + 0xa80);
    uVar8 = *(ulong *)(param_4 + 0xa78);
    lVar3 = *param_3;
    if ((uVar8 < param_1) || (local_48 != 0xffff)) {
      uVar7 = *(ulong *)(param_4 + 0x10);
      if (local_48 != 0xffff) goto LAB_001020a8;
      goto LAB_00101fb8;
    }
  }
  if (*(long *)(param_4 + 0x10) == 0) {
    pbVar9 = *(byte **)(param_4 + 0x18);
    if (pbVar9 == *(byte **)(param_4 + 0x28)) {
      *(undefined4 *)(param_4 + 0x354) = 4;
LAB_00101eba:
      uVar5 = 2;
code_r0x00101ec0:
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return uVar5;
    }
    uVar8 = (ulong)*pbVar9 | *(ulong *)(param_4 + 8);
    *(byte **)(param_4 + 0x18) = pbVar9 + 1;
    lVar3 = 7;
  }
  else {
    uVar8 = *(ulong *)(param_4 + 8);
    lVar3 = *(long *)(param_4 + 0x10) + -1;
  }
  *(long *)(param_4 + 0x10) = lVar3;
  *(ulong *)(param_4 + 8) = uVar8 >> 1;
  if ((uVar8 & 1) != 0) {
    InverseMoveToFrontTransform(*param_3,param_1,param_4);
  }
  *(undefined4 *)(param_4 + 0x354) = 0;
LAB_00101f34:
  uVar5 = FUN_00101ec0();
  return uVar5;
}



void FUN_00101ec0(void)

{
  long in_FS_OFFSET;
  long in_stack_00000018;
  
  if (in_stack_00000018 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 WriteRingBuffer(long param_1,ulong *param_2,long *param_3,long *param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  void *__src;
  ulong __n;
  
  iVar2 = *(int *)(param_1 + 100);
  lVar4 = (long)*(int *)(param_1 + 0x58);
  if (iVar2 <= *(int *)(param_1 + 0x58)) {
    lVar4 = (long)iVar2;
  }
  uVar6 = ((long)iVar2 * *(long *)(param_1 + 0x1a8) - *(ulong *)(param_1 + 0x1b0)) + lVar4;
  uVar3 = *param_2;
  __n = uVar6;
  if (uVar3 <= uVar6) {
    __n = uVar3;
  }
  if (*(int *)(param_1 + 0x84) < 0) {
    uVar5 = 0xfffffff7;
  }
  else {
    if (param_3 != (long *)0x0) {
      __src = (void *)(((long)*(int *)(param_1 + 0x68) & *(ulong *)(param_1 + 0x1b0)) +
                      *(long *)(param_1 + 0x88));
      if ((void *)*param_3 == (void *)0x0) {
        *param_3 = (long)__src;
      }
      else {
        memcpy((void *)*param_3,__src,__n);
        *param_3 = *param_3 + __n;
        uVar3 = *param_2;
        iVar2 = *(int *)(param_1 + 100);
      }
    }
    *param_2 = uVar3 - __n;
    lVar4 = *(long *)(param_1 + 0x1b0) + __n;
    *(long *)(param_1 + 0x1b0) = lVar4;
    if (param_4 != (long *)0x0) {
      *param_4 = lVar4;
    }
    iVar1 = 1 << ((byte)(*(ushort *)(param_1 + 0x304) >> 6) & 0x1f);
    if (__n < uVar6) {
      if ((iVar2 == iVar1) || ((param_5 & 1) != 0)) {
        return 3;
      }
    }
    else if ((iVar2 == iVar1) && (iVar2 <= *(int *)(param_1 + 0x58))) {
      iVar2 = *(int *)(param_1 + 0x58) - iVar2;
      *(long *)(param_1 + 0x1a8) = *(long *)(param_1 + 0x1a8) + 1;
      *(int *)(param_1 + 0x58) = iVar2;
      *(byte *)(param_1 + 0x304) = *(byte *)(param_1 + 0x304) & 0xf7 | (iVar2 != 0) << 3;
    }
    uVar5 = 1;
  }
  return uVar5;
}



void WrapRingBuffer(long param_1)

{
  if ((*(byte *)(param_1 + 0x304) & 8) == 0) {
    return;
  }
  memcpy(*(void **)(param_1 + 0x88),*(void **)(param_1 + 0x90),(long)*(int *)(param_1 + 0x58));
  *(byte *)(param_1 + 0x304) = *(byte *)(param_1 + 0x304) & 0xf7;
  return;
}



undefined8 BrotliEnsureRingBuffer(long param_1)

{
  int iVar1;
  void *__src;
  long lVar2;
  
  if (*(int *)(param_1 + 100) == *(int *)(param_1 + 0x300)) {
    return 1;
  }
  __src = *(void **)(param_1 + 0x88);
  lVar2 = (**(code **)(param_1 + 0x30))
                    (*(undefined8 *)(param_1 + 0x40),(long)*(int *)(param_1 + 0x300) + 0x21e);
  *(long *)(param_1 + 0x88) = lVar2;
  if (lVar2 != 0) {
    *(undefined1 *)(lVar2 + -2 + (long)*(int *)(param_1 + 0x300)) = 0;
    *(undefined1 *)(*(long *)(param_1 + 0x88) + -1 + (long)*(int *)(param_1 + 0x300)) = 0;
    if (__src != (void *)0x0) {
      memcpy(*(void **)(param_1 + 0x88),__src,(long)*(int *)(param_1 + 0x58));
      (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40),__src);
    }
    iVar1 = *(int *)(param_1 + 0x300);
    *(long *)(param_1 + 0x90) = (long)iVar1 + *(long *)(param_1 + 0x88);
    *(ulong *)(param_1 + 100) = CONCAT44(iVar1 + -1,iVar1);
    return 1;
  }
  *(void **)(param_1 + 0x88) = __src;
  return 0;
}



undefined8 SkipMetadataBlock(long param_1)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  undefined1 *puVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long in_FS_OFFSET;
  undefined1 local_48 [8];
  long local_40;
  
  iVar7 = *(int *)(param_1 + 0x84);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (iVar7 == 0) {
LAB_001025f0:
    uVar4 = 1;
  }
  else {
    uVar5 = *(ulong *)(param_1 + 0x10);
    if (7 < uVar5) {
      iVar11 = (int)uVar5 >> 3;
      if (iVar7 < iVar11) {
        iVar11 = iVar7;
      }
      lVar12 = (long)iVar11;
      if (lVar12 == 0) {
        if (uVar5 < 0x40) {
          *(ulong *)(param_1 + 8) = *(ulong *)(param_1 + 8) & ~(-1L << ((byte)uVar5 & 0x3f));
          pcVar3 = *(code **)(param_1 + 0x2d8);
        }
        else {
          pcVar3 = *(code **)(param_1 + 0x2d8);
        }
        if (pcVar3 != (code *)0x0) goto LAB_001025ce;
      }
      else {
        puVar9 = local_48;
        uVar10 = *(ulong *)(param_1 + 8);
        uVar2 = 8;
        lVar13 = lVar12;
        do {
          uVar5 = uVar5 - 8;
          *puVar9 = (char)uVar10;
          uVar10 = uVar10 >> 8;
          uVar8 = 8;
          if (7 < uVar2) {
            uVar8 = uVar2;
          }
          uVar6 = (uVar8 - uVar2) + 1;
          if (uVar6 < uVar8) {
            uVar6 = uVar8;
          }
          puVar9 = puVar9 + 1;
          lVar13 = lVar13 + -1;
          uVar2 = ((uVar2 - 1) - uVar8) + uVar6;
          if (uVar5 < 8) {
            *(ulong *)(param_1 + 8) = uVar10;
            *(ulong *)(param_1 + 0x10) = uVar5;
            *(ulong *)(param_1 + 8) = *(ulong *)(param_1 + 8) & ~(-1L << ((byte)uVar5 & 0x3f));
            if (lVar13 != 0) {
              lVar1 = *(long *)(param_1 + 0x18);
              __memcpy_chk(puVar9,lVar1,lVar13,uVar2);
              *(long *)(param_1 + 0x18) = lVar1 + lVar13;
            }
            goto LAB_001025c2;
          }
        } while (lVar13 != 0);
        *(ulong *)(param_1 + 0x10) = uVar5;
        *(ulong *)(param_1 + 8) = uVar10;
        if (uVar5 < 0x40) {
          *(ulong *)(param_1 + 8) = *(ulong *)(param_1 + 8) & ~(-1L << ((byte)uVar5 & 0x3f));
        }
LAB_001025c2:
        pcVar3 = *(code **)(param_1 + 0x2d8);
        if (pcVar3 != (code *)0x0) {
LAB_001025ce:
          (*pcVar3)(*(undefined8 *)(param_1 + 0x2e0),local_48,lVar12);
          iVar7 = *(int *)(param_1 + 0x84);
        }
        iVar7 = iVar7 - iVar11;
        *(int *)(param_1 + 0x84) = iVar7;
        if (iVar7 == 0) goto LAB_001025f0;
      }
    }
    lVar12 = *(long *)(param_1 + 0x18);
    iVar11 = 0x40000000;
    uVar5 = *(long *)(param_1 + 0x28) - lVar12;
    if (uVar5 < 0x40000001) {
      iVar11 = (int)(*(ulong *)(param_1 + 0x10) >> 3) + (int)uVar5;
    }
    if (iVar7 <= iVar11) {
      iVar11 = iVar7;
    }
    if (0 < iVar11) {
      if (*(code **)(param_1 + 0x2d8) != (code *)0x0) {
        (**(code **)(param_1 + 0x2d8))(*(undefined8 *)(param_1 + 0x2e0),lVar12,(long)iVar11);
        iVar7 = *(int *)(param_1 + 0x84);
        lVar12 = *(long *)(param_1 + 0x18);
      }
      *(long *)(param_1 + 0x18) = lVar12 + iVar11;
      *(int *)(param_1 + 0x84) = iVar7 - iVar11;
      if (iVar7 - iVar11 == 0) goto LAB_001025f0;
    }
    uVar4 = 2;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong CopyUncompressedBlockToOutput
                (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 *__dest;
  int iVar4;
  size_t __n;
  int iVar5;
  
  iVar1 = BrotliEnsureRingBuffer(param_4);
  if (iVar1 == 0) {
    return 0xffffffe6;
  }
  iVar1 = *(int *)(param_4 + 0x2f4);
  if (iVar1 != 0) {
    do {
      if (iVar1 == 1) goto LAB_00102861;
      if (iVar1 == 1) goto LAB_00102861;
    } while( true );
  }
  do {
    uVar3 = *(ulong *)(param_4 + 0x10);
    uVar2 = *(long *)(param_4 + 0x28) - *(long *)(param_4 + 0x18);
    iVar4 = *(int *)(param_4 + 0x84);
    iVar1 = *(int *)(param_4 + 0x58);
    iVar5 = 0x40000000;
    if (uVar2 < 0x40000001) {
      iVar5 = (int)(uVar3 >> 3) + (int)uVar2;
    }
    if (iVar4 <= iVar5) {
      iVar5 = iVar4;
    }
    if (*(int *)(param_4 + 100) < iVar1 + iVar5) {
      iVar5 = *(int *)(param_4 + 100) - iVar1;
    }
    __dest = (undefined1 *)((long)iVar1 + *(long *)(param_4 + 0x88));
    __n = (size_t)iVar5;
    if (uVar3 < 8) {
      uVar2 = *(ulong *)(param_4 + 8);
LAB_001027f9:
      *(ulong *)(param_4 + 8) = ~(-1L << ((byte)uVar3 & 0x3f)) & uVar2;
      if (__n == 0) {
LAB_001028be:
        iVar4 = *(int *)(param_4 + 0x84);
        iVar1 = *(int *)(param_4 + 0x58);
      }
      else {
        memcpy(__dest,*(void **)(param_4 + 0x18),__n);
        *(long *)(param_4 + 0x18) = *(long *)(param_4 + 0x18) + __n;
        iVar1 = *(int *)(param_4 + 0x58);
        iVar4 = *(int *)(param_4 + 0x84);
      }
    }
    else if (__n == 0) {
      if (uVar3 < 0x40) {
        *(ulong *)(param_4 + 8) = *(ulong *)(param_4 + 8) & ~(-1L << ((byte)uVar3 & 0x3f));
      }
    }
    else {
      uVar2 = *(ulong *)(param_4 + 8);
      do {
        *__dest = (char)uVar2;
        __dest = __dest + 1;
        __n = __n - 1;
        uVar3 = *(long *)(param_4 + 0x10) - 8;
        *(ulong *)(param_4 + 0x10) = uVar3;
        uVar2 = *(ulong *)(param_4 + 8) >> 8;
        *(ulong *)(param_4 + 8) = uVar2;
        if (uVar3 < 8) goto LAB_001027f9;
      } while (__n != 0);
      if (0x3f < uVar3) goto LAB_001028be;
      iVar4 = *(int *)(param_4 + 0x84);
      iVar1 = *(int *)(param_4 + 0x58);
      *(ulong *)(param_4 + 8) = ~(-1L << ((byte)uVar3 & 0x3f)) & uVar2;
    }
    *(int *)(param_4 + 0x58) = iVar5 + iVar1;
    *(int *)(param_4 + 0x84) = iVar4 - iVar5;
    if (iVar5 + iVar1 < 1 << ((byte)(*(ushort *)(param_4 + 0x304) >> 6) & 0x1f)) {
      return (ulong)(2 - (iVar4 - iVar5 == 0));
    }
    *(undefined4 *)(param_4 + 0x2f4) = 1;
LAB_00102861:
    uVar3 = WriteRingBuffer(param_4,param_1,param_2,param_3,0);
    if ((int)uVar3 != 1) {
      return uVar3;
    }
    if (*(int *)(param_4 + 100) == 1 << ((byte)(*(ushort *)(param_4 + 0x304) >> 6) & 0x1f)) {
      *(undefined4 *)(param_4 + 0x60) = *(undefined4 *)(param_4 + 0x5c);
    }
    *(undefined4 *)(param_4 + 0x2f4) = 0;
  } while( true );
}



int CopyFromCompoundDictionary(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  lVar2 = *(long *)(param_1 + 0x328);
  iVar3 = *(int *)(lVar2 + 0x14);
  iVar7 = param_2;
  do {
    if (*(int *)(lVar2 + 0x10) == iVar3) break;
    iVar1 = *(int *)(lVar2 + 8);
    iVar3 = *(int *)(lVar2 + 0x10) - iVar3;
    iVar5 = *(int *)(param_1 + 100) - iVar7;
    lVar4 = (long)iVar7;
    iVar6 = (*(int *)(lVar2 + 0x98 + (long)(iVar1 + 1) * 4) -
            *(int *)(lVar2 + 0x98 + (long)iVar1 * 4)) - *(int *)(lVar2 + 0xc);
    if (iVar3 < iVar5) {
      iVar5 = iVar3;
    }
    iVar3 = iVar5;
    if (iVar6 <= iVar5) {
      iVar3 = iVar6;
    }
    iVar7 = iVar7 + iVar3;
    memcpy((void *)(lVar4 + *(long *)(param_1 + 0x88)),
           (void *)((long)*(int *)(lVar2 + 0xc) + *(long *)(lVar2 + 0x18 + (long)iVar1 * 8)),
           (long)iVar3);
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + iVar3;
    iVar3 = iVar3 + *(int *)(lVar2 + 0x14);
    *(int *)(lVar2 + 0x14) = iVar3;
    if (iVar6 <= iVar5) {
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      *(undefined4 *)(lVar2 + 0xc) = 0;
    }
  } while (*(int *)(param_1 + 100) != iVar7);
  return iVar7 - param_2;
}



undefined8 SafeDecodeDistanceBlockSwitch_constprop_0(long param_1)

{
  ushort uVar1;
  ulong uVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte bVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  byte bVar9;
  byte bVar10;
  ulong uVar11;
  ulong uVar12;
  byte *pbVar13;
  long lVar14;
  long lVar15;
  long in_FS_OFFSET;
  ulong extraout_XMM0_Qa;
  ulong uVar16;
  ulong extraout_XMM0_Qa_00;
  ulong extraout_XMM0_Qb;
  ulong uVar17;
  ulong extraout_XMM0_Qb_00;
  ulong local_50;
  ulong local_48;
  long local_40;
  
  uVar2 = *(ulong *)(param_1 + 0x148);
  lVar15 = *(long *)(param_1 + 0x108);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (uVar2 < 2) {
LAB_00102b60:
    uVar8 = 0;
  }
  else {
    uVar16 = *(ulong *)(param_1 + 8);
    uVar17 = *(ulong *)(param_1 + 0x10);
    pbVar3 = *(byte **)(param_1 + 0x18);
    lVar14 = *(long *)(param_1 + 0x100) + 0x13c0;
    pbVar4 = *(byte **)(param_1 + 0x28);
    pbVar13 = pbVar3;
    uVar12 = uVar16;
    uVar7 = uVar17;
    while (uVar7 < 0xf) {
      if (pbVar4 == pbVar13) {
        iVar6 = SafeDecodeSymbol(lVar14,param_1 + 8,&local_50);
        if (iVar6 == 0) goto LAB_00102b60;
        iVar6 = *(int *)(param_1 + 0x2fc);
        uVar7 = *(ulong *)(param_1 + 0x10);
        uVar16 = extraout_XMM0_Qa;
        uVar17 = extraout_XMM0_Qb;
        goto joined_r0x00102bf5;
      }
      bVar10 = *pbVar13;
      pbVar13 = pbVar13 + 1;
      *(byte **)(param_1 + 0x18) = pbVar13;
      bVar9 = (byte)uVar7;
      uVar7 = uVar7 + 8;
      uVar12 = (ulong)bVar10 << (bVar9 & 0x3f) | *(ulong *)(param_1 + 8);
      *(ulong *)(param_1 + 8) = uVar12;
      *(ulong *)(param_1 + 0x10) = uVar7;
    }
    pbVar13 = (byte *)(lVar14 + (uVar12 & 0xff) * 4);
    bVar10 = *pbVar13;
    uVar11 = uVar12;
    if (8 < bVar10) {
      uVar11 = uVar12 >> 8;
      uVar7 = uVar7 - 8;
      pbVar13 = pbVar13 + ((ulong)((uint)*(undefined8 *)(&kBrotliBitMask + (ulong)(bVar10 - 8) * 8)
                                   & (uint)(uVar12 >> 8) & 0x7f) + (ulong)*(ushort *)(pbVar13 + 2))
                          * 4;
      bVar10 = *pbVar13;
    }
    uVar7 = uVar7 - bVar10;
    *(ulong *)(param_1 + 8) = uVar11 >> (bVar10 & 0x3f);
    local_50 = (ulong)*(ushort *)(pbVar13 + 2);
    *(ulong *)(param_1 + 0x10) = uVar7;
    iVar6 = *(int *)(param_1 + 0x2fc);
joined_r0x00102bf5:
    if (iVar6 == 0) {
      lVar15 = lVar15 + 0xc60;
      if (uVar7 < 0xf) {
        pbVar13 = *(byte **)(param_1 + 0x18);
        do {
          if (pbVar4 == pbVar13) {
            iVar6 = SafeDecodeSymbol(lVar15,param_1 + 8,&local_48);
            uVar16 = extraout_XMM0_Qa_00;
            uVar17 = extraout_XMM0_Qb_00;
            if (iVar6 == 0) goto LAB_00102b2d;
            uVar7 = *(ulong *)(param_1 + 0x10);
            goto LAB_00102ad0;
          }
          bVar10 = *pbVar13;
          bVar9 = (byte)uVar7;
          pbVar13 = pbVar13 + 1;
          uVar7 = uVar7 + 8;
          *(ulong *)(param_1 + 0x10) = uVar7;
          uVar12 = (ulong)bVar10 << (bVar9 & 0x3f) | *(ulong *)(param_1 + 8);
          *(byte **)(param_1 + 0x18) = pbVar13;
          *(ulong *)(param_1 + 8) = uVar12;
        } while (uVar7 < 0xf);
      }
      else {
        uVar12 = *(ulong *)(param_1 + 8);
      }
      pbVar13 = (byte *)(lVar15 + (uVar12 & 0xff) * 4);
      bVar10 = *pbVar13;
      uVar11 = uVar12;
      if (8 < bVar10) {
        uVar11 = uVar12 >> 8;
        uVar7 = uVar7 - 8;
        pbVar13 = pbVar13 + ((ulong)((uint)*(undefined8 *)
                                            (&kBrotliBitMask + (ulong)(bVar10 - 8) * 8) &
                                     (uint)(uVar12 >> 8) & 0x7f) + (ulong)*(ushort *)(pbVar13 + 2))
                            * 4;
        bVar10 = *pbVar13;
      }
      local_48 = (ulong)*(ushort *)(pbVar13 + 2);
      uVar7 = uVar7 - bVar10;
      *(ulong *)(param_1 + 8) = uVar11 >> (bVar10 & 0x3f);
      *(ulong *)(param_1 + 0x10) = uVar7;
    }
    else {
      local_48 = *(ulong *)(param_1 + 0x130);
    }
LAB_00102ad0:
    bVar10 = (&DAT_00109012)[local_48 * 4];
    uVar12 = (ulong)bVar10;
    uVar1 = *(ushort *)(&_kBrotliPrefixCodeRanges + local_48 * 4);
    if (uVar7 < uVar12) {
      pbVar13 = *(byte **)(param_1 + 0x18);
LAB_00102b21:
      if (pbVar4 != pbVar13) goto LAB_00102af8;
      *(ulong *)(param_1 + 0x130) = local_48;
LAB_00102b2d:
      *(undefined4 *)(param_1 + 0x2fc) = 0;
      *(byte **)(param_1 + 0x18) = pbVar3;
      *(ulong *)(param_1 + 8) = uVar16;
      *(ulong *)(param_1 + 0x10) = uVar17;
      lVar15 = (long)pbVar4 - (long)pbVar3;
      if (lVar15 == 0) {
        *(byte **)(param_1 + 0x28) = pbVar3;
LAB_00102d84:
        *(byte **)(param_1 + 0x20) = pbVar3;
      }
      else {
        if (lVar15 + 1U < 0x1d) goto LAB_00102d84;
        *(byte **)(param_1 + 0x20) = pbVar3 + lVar15 + -0x1b;
      }
      goto LAB_00102b60;
    }
    uVar11 = *(ulong *)(param_1 + 8);
LAB_00102c70:
    *(undefined4 *)(param_1 + 0x2fc) = 0;
    uVar16 = *(ulong *)(&kBrotliBitMask + uVar12 * 8);
    *(ulong *)(param_1 + 0x10) = uVar7 - uVar12;
    *(ulong *)(param_1 + 8) = uVar11 >> (bVar10 & 0x3f);
    *(ulong *)(param_1 + 0x128) = (ulong)uVar1 + (uVar16 & uVar11);
    uVar7 = *(long *)(param_1 + 0x178) + 1;
    if ((local_50 != 1) && (uVar7 = local_50 - 2, local_50 == 0)) {
      uVar7 = *(ulong *)(param_1 + 0x170);
    }
    if (uVar2 <= uVar7) {
      uVar7 = uVar7 - uVar2;
    }
    lVar15 = *(long *)(param_1 + 0x198) + uVar7 * 4;
    *(long *)(param_1 + 0xb0) = lVar15;
    *(long *)(param_1 + 0x170) = *(long *)(param_1 + 0x178);
    *(ulong *)(param_1 + 0x178) = uVar7;
    *(undefined1 *)(param_1 + 0x2cc) = *(undefined1 *)(lVar15 + *(int *)(param_1 + 0x114));
    uVar8 = 1;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
LAB_00102af8:
  bVar9 = *pbVar13;
  bVar5 = (byte)uVar7;
  pbVar13 = pbVar13 + 1;
  uVar7 = uVar7 + 8;
  *(ulong *)(param_1 + 0x10) = uVar7;
  uVar11 = (ulong)bVar9 << (bVar5 & 0x3f) | *(ulong *)(param_1 + 8);
  *(byte **)(param_1 + 0x18) = pbVar13;
  *(ulong *)(param_1 + 8) = uVar11;
  if (uVar12 <= uVar7) goto LAB_00102c70;
  goto LAB_00102b21;
}



undefined8 SafeDecodeCommandBlockSwitch_constprop_0(long param_1)

{
  ushort uVar1;
  ulong uVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte bVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  byte bVar9;
  byte bVar10;
  ulong uVar11;
  ulong uVar12;
  byte *pbVar13;
  long lVar14;
  long lVar15;
  long in_FS_OFFSET;
  ulong extraout_XMM0_Qa;
  ulong uVar16;
  ulong extraout_XMM0_Qa_00;
  ulong extraout_XMM0_Qb;
  ulong uVar17;
  ulong extraout_XMM0_Qb_00;
  ulong local_50;
  ulong local_48;
  long local_40;
  
  uVar2 = *(ulong *)(param_1 + 0x140);
  lVar15 = *(long *)(param_1 + 0x108);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (uVar2 < 2) {
LAB_00102f00:
    uVar8 = 0;
  }
  else {
    uVar16 = *(ulong *)(param_1 + 8);
    uVar17 = *(ulong *)(param_1 + 0x10);
    pbVar3 = *(byte **)(param_1 + 0x18);
    lVar14 = *(long *)(param_1 + 0x100) + 0x9e0;
    pbVar4 = *(byte **)(param_1 + 0x28);
    pbVar13 = pbVar3;
    uVar12 = uVar16;
    uVar7 = uVar17;
    while (uVar7 < 0xf) {
      if (pbVar4 == pbVar13) {
        iVar6 = SafeDecodeSymbol(lVar14,param_1 + 8,&local_50);
        if (iVar6 == 0) goto LAB_00102f00;
        iVar6 = *(int *)(param_1 + 0x2fc);
        uVar7 = *(ulong *)(param_1 + 0x10);
        uVar16 = extraout_XMM0_Qa;
        uVar17 = extraout_XMM0_Qb;
        goto joined_r0x00102f95;
      }
      bVar10 = *pbVar13;
      pbVar13 = pbVar13 + 1;
      *(byte **)(param_1 + 0x18) = pbVar13;
      bVar9 = (byte)uVar7;
      uVar7 = uVar7 + 8;
      uVar12 = (ulong)bVar10 << (bVar9 & 0x3f) | *(ulong *)(param_1 + 8);
      *(ulong *)(param_1 + 8) = uVar12;
      *(ulong *)(param_1 + 0x10) = uVar7;
    }
    pbVar13 = (byte *)(lVar14 + (uVar12 & 0xff) * 4);
    bVar10 = *pbVar13;
    uVar11 = uVar12;
    if (8 < bVar10) {
      uVar11 = uVar12 >> 8;
      uVar7 = uVar7 - 8;
      pbVar13 = pbVar13 + ((ulong)((uint)*(undefined8 *)(&kBrotliBitMask + (ulong)(bVar10 - 8) * 8)
                                   & (uint)(uVar12 >> 8) & 0x7f) + (ulong)*(ushort *)(pbVar13 + 2))
                          * 4;
      bVar10 = *pbVar13;
    }
    uVar7 = uVar7 - bVar10;
    *(ulong *)(param_1 + 8) = uVar11 >> (bVar10 & 0x3f);
    local_50 = (ulong)*(ushort *)(pbVar13 + 2);
    *(ulong *)(param_1 + 0x10) = uVar7;
    iVar6 = *(int *)(param_1 + 0x2fc);
joined_r0x00102f95:
    if (iVar6 == 0) {
      lVar15 = lVar15 + 0x630;
      if (uVar7 < 0xf) {
        pbVar13 = *(byte **)(param_1 + 0x18);
        do {
          if (pbVar4 == pbVar13) {
            iVar6 = SafeDecodeSymbol(lVar15,param_1 + 8,&local_48);
            uVar16 = extraout_XMM0_Qa_00;
            uVar17 = extraout_XMM0_Qb_00;
            if (iVar6 == 0) goto LAB_00102ecd;
            uVar7 = *(ulong *)(param_1 + 0x10);
            goto LAB_00102e70;
          }
          bVar10 = *pbVar13;
          bVar9 = (byte)uVar7;
          pbVar13 = pbVar13 + 1;
          uVar7 = uVar7 + 8;
          *(ulong *)(param_1 + 0x10) = uVar7;
          uVar12 = (ulong)bVar10 << (bVar9 & 0x3f) | *(ulong *)(param_1 + 8);
          *(byte **)(param_1 + 0x18) = pbVar13;
          *(ulong *)(param_1 + 8) = uVar12;
        } while (uVar7 < 0xf);
      }
      else {
        uVar12 = *(ulong *)(param_1 + 8);
      }
      pbVar13 = (byte *)(lVar15 + (uVar12 & 0xff) * 4);
      bVar10 = *pbVar13;
      uVar11 = uVar12;
      if (8 < bVar10) {
        uVar11 = uVar12 >> 8;
        uVar7 = uVar7 - 8;
        pbVar13 = pbVar13 + ((ulong)((uint)*(undefined8 *)
                                            (&kBrotliBitMask + (ulong)(bVar10 - 8) * 8) &
                                     (uint)(uVar12 >> 8) & 0x7f) + (ulong)*(ushort *)(pbVar13 + 2))
                            * 4;
        bVar10 = *pbVar13;
      }
      local_48 = (ulong)*(ushort *)(pbVar13 + 2);
      uVar7 = uVar7 - bVar10;
      *(ulong *)(param_1 + 8) = uVar11 >> (bVar10 & 0x3f);
      *(ulong *)(param_1 + 0x10) = uVar7;
    }
    else {
      local_48 = *(ulong *)(param_1 + 0x130);
    }
LAB_00102e70:
    bVar10 = (&DAT_00109012)[local_48 * 4];
    uVar12 = (ulong)bVar10;
    uVar1 = *(ushort *)(&_kBrotliPrefixCodeRanges + local_48 * 4);
    if (uVar7 < uVar12) {
      pbVar13 = *(byte **)(param_1 + 0x18);
LAB_00102ec1:
      if (pbVar4 != pbVar13) goto LAB_00102e98;
      *(ulong *)(param_1 + 0x130) = local_48;
LAB_00102ecd:
      *(undefined4 *)(param_1 + 0x2fc) = 0;
      *(byte **)(param_1 + 0x18) = pbVar3;
      *(ulong *)(param_1 + 8) = uVar16;
      *(ulong *)(param_1 + 0x10) = uVar17;
      lVar15 = (long)pbVar4 - (long)pbVar3;
      if (lVar15 == 0) {
        *(byte **)(param_1 + 0x28) = pbVar3;
LAB_00103114:
        *(byte **)(param_1 + 0x20) = pbVar3;
      }
      else {
        if (lVar15 + 1U < 0x1d) goto LAB_00103114;
        *(byte **)(param_1 + 0x20) = pbVar3 + lVar15 + -0x1b;
      }
      goto LAB_00102f00;
    }
    uVar11 = *(ulong *)(param_1 + 8);
LAB_00103010:
    *(undefined4 *)(param_1 + 0x2fc) = 0;
    uVar16 = *(ulong *)(&kBrotliBitMask + uVar12 * 8);
    *(ulong *)(param_1 + 0x10) = uVar7 - uVar12;
    *(ulong *)(param_1 + 8) = uVar11 >> (bVar10 & 0x3f);
    *(ulong *)(param_1 + 0x120) = (ulong)uVar1 + (uVar16 & uVar11);
    uVar7 = *(long *)(param_1 + 0x168) + 1;
    if ((local_50 != 1) && (uVar7 = local_50 - 2, local_50 == 0)) {
      uVar7 = *(ulong *)(param_1 + 0x160);
    }
    if (uVar2 <= uVar7) {
      uVar7 = uVar7 - uVar2;
    }
    *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(*(long *)(param_1 + 0xd0) + uVar7 * 8);
    uVar8 = 1;
    *(long *)(param_1 + 0x160) = *(long *)(param_1 + 0x168);
    *(ulong *)(param_1 + 0x168) = uVar7;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
LAB_00102e98:
  bVar9 = *pbVar13;
  bVar5 = (byte)uVar7;
  pbVar13 = pbVar13 + 1;
  uVar7 = uVar7 + 8;
  *(ulong *)(param_1 + 0x10) = uVar7;
  uVar11 = (ulong)bVar9 << (bVar5 & 0x3f) | *(ulong *)(param_1 + 8);
  *(byte **)(param_1 + 0x18) = pbVar13;
  *(ulong *)(param_1 + 8) = uVar11;
  if (uVar12 <= uVar7) goto LAB_00103010;
  goto LAB_00102ec1;
}



bool InitializeCompoundDictionaryCopy(long param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  
  lVar3 = *(long *)(param_1 + 0x328);
  iVar1 = *(int *)(lVar3 + 4);
  iVar9 = param_2 >> ((byte)*(int *)(lVar3 + 0xd8) & 0x1f);
  if (*(int *)(lVar3 + 0xd8) == -1) {
    if (iVar1 + -1 >> 8 == 0) {
      *(undefined4 *)(lVar3 + 0xd8) = 0;
      iVar8 = 1;
      iVar7 = 0;
      iVar9 = param_2;
    }
    else {
      iVar9 = 8;
      do {
        iVar7 = iVar9;
        iVar9 = iVar7 + 1;
      } while (iVar1 + -1 >> ((byte)iVar9 & 0x1f) != 0);
      iVar7 = iVar7 + -7;
      *(int *)(lVar3 + 0xd8) = iVar7;
      iVar9 = param_2 >> ((byte)iVar7 & 0x1f);
      if (iVar1 < 1) goto LAB_001031cd;
      iVar8 = 1 << ((byte)iVar7 & 0x1f);
    }
    lVar12 = 0;
    iVar10 = 0;
    do {
      lVar4 = (long)(int)lVar12;
      do {
        lVar12 = lVar4;
        lVar4 = lVar12 + 1;
      } while (*(int *)(lVar3 + 0x98 + (lVar12 + 1) * 4) < iVar10);
      iVar11 = iVar10 + iVar8;
      *(char *)(lVar3 + 0xdc + (long)(iVar10 >> ((byte)iVar7 & 0x1f))) = (char)lVar12;
      iVar10 = iVar11;
    } while (iVar11 < iVar1);
  }
LAB_001031cd:
  uVar6 = (ulong)*(byte *)(lVar3 + 0xdc + (long)iVar9);
  do {
    uVar5 = uVar6;
    uVar6 = uVar5 + 1;
  } while (*(int *)(lVar3 + 0x98 + uVar6 * 4) <= param_2);
  if (param_2 + param_3 <= iVar1) {
    uVar2 = *(uint *)(param_1 + 0x6c);
    *(undefined4 *)(param_1 + 0x70 + (ulong)(uVar2 & 3) * 4) = *(undefined4 *)(param_1 + 0x2c8);
    *(uint *)(param_1 + 0x6c) = uVar2 + 1;
    *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) - param_3;
    iVar9 = (int)uVar5;
    *(int *)(lVar3 + 8) = iVar9;
    iVar9 = *(int *)(lVar3 + 0x98 + (long)iVar9 * 4);
    *(int *)(lVar3 + 0x10) = param_3;
    *(int *)(lVar3 + 0xc) = param_2 - iVar9;
    *(undefined4 *)(lVar3 + 0x14) = 0;
  }
  return param_2 + param_3 <= iVar1;
}



undefined8 ProcessCommands(int *param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  byte bVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  int iVar20;
  int iVar21;
  byte *pbVar22;
  long lVar23;
  long *plVar24;
  long lVar25;
  long lVar26;
  uint uVar27;
  int iVar28;
  long *plVar29;
  int iVar30;
  long local_58;
  int local_50;
  int local_4c;
  
  iVar30 = 0;
  iVar20 = param_1[0x16];
  uVar27 = param_1[1];
  if (*(long *)(param_1 + 0xca) != 0) {
    iVar30 = *(int *)(*(long *)(param_1 + 0xca) + 4);
  }
  if (*(ulong *)(param_1 + 6) < *(ulong *)(param_1 + 8)) {
    BrotliWarmupBitReader(param_1 + 2);
    iVar8 = *param_1;
    if (iVar8 == 7) goto LAB_00103790;
    if (iVar8 == 8) goto LAB_00103340;
    if (iVar8 == 9) goto LAB_001035b8;
    if (iVar8 == 10) {
      iVar8 = param_1[0x19];
      lVar18 = (long)iVar20;
LAB_001032ce:
      iVar8 = iVar8 - iVar20;
      lVar25 = lVar18 + 1;
      while (uVar27 = uVar27 - 1, -1 < (int)uVar27) {
        uVar9 = iVar20 - param_1[0xb2];
        iVar20 = iVar20 + 1;
        *(undefined1 *)(*(long *)(param_1 + 0x22) + lVar18) =
             *(undefined1 *)(*(long *)(param_1 + 0x22) + (long)(int)(uVar9 & param_1[0x1a]));
        lVar18 = lVar18 + 1;
        if (lVar18 == lVar25 + (ulong)(iVar8 - 1)) {
          *param_1 = 0x10;
          uVar12 = 1;
          goto LAB_0010331c;
        }
      }
      if (0 < param_1[0x21]) {
LAB_00103790:
        plVar24 = *(long **)(param_1 + 6);
        plVar29 = *(long **)(param_1 + 8);
        while( true ) {
          if (plVar29 <= plVar24) {
            *param_1 = 7;
            uVar12 = 2;
            goto LAB_0010331c;
          }
          if (*(long *)(param_1 + 0x48) != 0) break;
          DecodeCommandBlockSwitch(param_1);
          plVar24 = *(long **)(param_1 + 6);
        }
        uVar15 = *(ulong *)(param_1 + 4);
        uVar19 = *(ulong *)(param_1 + 2);
        if (uVar15 < 0x11) {
          lVar18 = *plVar24;
          bVar16 = (byte)uVar15;
          uVar15 = uVar15 + 0x30;
          *(long *)(param_1 + 6) = (long)plVar24 + 6;
          uVar19 = uVar19 | lVar18 << (bVar16 & 0x3f);
        }
        pbVar22 = (byte *)(*(long *)(param_1 + 0x26) + (uVar19 & 0xff) * 4);
        bVar16 = *pbVar22;
        if (8 < bVar16) {
          uVar19 = uVar19 >> 8;
          uVar15 = uVar15 - 8;
          pbVar22 = pbVar22 + ((*(ulong *)(&kBrotliBitMask + (ulong)(bVar16 - 8) * 8) & uVar19) +
                              (ulong)*(ushort *)(pbVar22 + 2)) * 4;
          bVar16 = *pbVar22;
        }
        uVar19 = uVar19 >> (bVar16 & 0x3f);
        uVar15 = uVar15 - bVar16;
        uVar17 = (ulong)*(ushort *)(pbVar22 + 2);
        *(ulong *)(param_1 + 2) = uVar19;
        *(ulong *)(param_1 + 4) = uVar15;
        bVar16 = kCmdLut[uVar17 * 8 + 3];
        iVar8 = (int)(char)kCmdLut[uVar17 * 8 + 2];
        bVar2 = kCmdLut[uVar17 * 8];
        bVar3 = kCmdLut[uVar17 * 8 + 1];
        param_1[0x45] = (uint)bVar16;
        param_1[0xb2] = iVar8;
        uVar4 = *(ushort *)(kCmdLut + uVar17 * 8 + 6);
        *(undefined1 *)(param_1 + 0xb3) = *(undefined1 *)(*(long *)(param_1 + 0x2c) + (ulong)bVar16)
        ;
        uVar5 = *(ushort *)(kCmdLut + uVar17 * 8 + 4);
        uVar27 = (uint)uVar5;
        if (bVar2 != 0) {
          if (uVar15 < 0x21) {
            bVar16 = (byte)uVar15;
            uVar15 = uVar15 + 0x20;
            uVar19 = uVar19 | (ulong)**(uint **)(param_1 + 6) << (bVar16 & 0x3f);
            *(long *)(param_1 + 6) = *(long *)(param_1 + 6) + 4;
          }
          uVar15 = uVar15 - bVar2;
          *(ulong *)(param_1 + 4) = uVar15;
          uVar12 = *(undefined8 *)(&kBrotliBitMask + (ulong)bVar2 * 8);
          uVar27 = (uint)uVar19;
          uVar19 = uVar19 >> (bVar2 & 0x3f);
          *(ulong *)(param_1 + 2) = uVar19;
          uVar27 = (uint)uVar5 + ((uint)uVar12 & uVar27);
        }
        if (uVar15 < 0x21) {
          bVar16 = (byte)uVar15;
          uVar15 = uVar15 + 0x20;
          uVar9 = **(uint **)(param_1 + 6);
          *(uint **)(param_1 + 6) = *(uint **)(param_1 + 6) + 1;
          uVar19 = uVar19 | (ulong)uVar9 << (bVar16 & 0x3f);
        }
        *(ulong *)(param_1 + 4) = uVar15 - bVar3;
        uVar12 = *(undefined8 *)(&kBrotliBitMask + (ulong)bVar3 * 8);
        *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + -1;
        *(ulong *)(param_1 + 2) = uVar19 >> (bVar3 & 0x3f);
        param_1[0xb1] = (uint)uVar4 + ((uint)uVar12 & (uint)uVar19);
        if (uVar27 == 0) goto LAB_001035bf;
        param_1[0x21] = param_1[0x21] - uVar27;
        while (plVar24 = *(long **)(param_1 + 6), param_1[0x44] != 0) {
          uVar15 = *(ulong *)(param_1 + 4);
          uVar19 = *(ulong *)(param_1 + 2);
          if (uVar15 < 9) {
            lVar18 = *plVar24;
            plVar24 = (long *)((long)plVar24 + 7);
            *(long **)(param_1 + 6) = plVar24;
            uVar19 = uVar19 | lVar18 << ((byte)uVar15 & 0x3f);
            *(ulong *)(param_1 + 4) = uVar15 + 0x38;
            *(ulong *)(param_1 + 2) = uVar19;
          }
          lVar18 = (long)iVar20;
          pbVar22 = (byte *)(*(long *)(param_1 + 0x68) + (uVar19 & 0xff) * 4);
          bVar16 = *pbVar22;
          uVar4 = *(ushort *)(pbVar22 + 2);
          if (plVar29 <= plVar24) goto LAB_00103458;
          while( true ) {
            uVar19 = (ulong)uVar4;
            uVar15 = (ulong)bVar16;
            if (*(long *)(param_1 + 0x46) == 0) break;
            uVar17 = *(ulong *)(param_1 + 4);
            uVar13 = *(ulong *)(param_1 + 2);
            if (uVar15 < 9) {
              uVar17 = uVar17 - uVar15;
              *(ulong *)(param_1 + 4) = uVar17;
              uVar13 = uVar13 >> (bVar16 & 0x3f);
              *(ulong *)(param_1 + 2) = uVar13;
            }
            else {
              if (uVar17 < 0x11) {
                lVar25 = *plVar24;
                *(long *)(param_1 + 6) = (long)plVar24 + 6;
                bVar16 = (byte)uVar17;
                uVar17 = uVar17 + 0x30;
                uVar13 = uVar13 | lVar25 << (bVar16 & 0x3f);
              }
              pbVar22 = (byte *)(*(long *)(param_1 + 0x68) +
                                ((uVar13 & 0xff) + uVar19 +
                                (*(ulong *)(uVar15 * 8 + 0x108fc8) & uVar13 >> 8)) * 4);
              bVar16 = *pbVar22;
              uVar17 = (uVar17 - 8) - (ulong)bVar16;
              *(ulong *)(param_1 + 4) = uVar17;
              uVar19 = (ulong)*(ushort *)(pbVar22 + 2);
              uVar13 = (uVar13 >> 8) >> (bVar16 & 0x3f);
              *(ulong *)(param_1 + 2) = uVar13;
            }
            if (uVar17 < 9) {
              lVar25 = **(long **)(param_1 + 6);
              *(long *)(param_1 + 6) = (long)*(long **)(param_1 + 6) + 7;
              uVar13 = uVar13 | lVar25 << ((byte)uVar17 & 0x3f);
              *(ulong *)(param_1 + 4) = uVar17 + 0x38;
              *(ulong *)(param_1 + 2) = uVar13;
            }
            iVar20 = iVar20 + 1;
            uVar27 = uVar27 - 1;
            pbVar22 = (byte *)(*(long *)(param_1 + 0x68) + (uVar13 & 0xff) * 4);
            bVar16 = *pbVar22;
            uVar4 = *(ushort *)(pbVar22 + 2);
            *(char *)(*(long *)(param_1 + 0x22) + lVar18) = (char)uVar19;
            *(long *)(param_1 + 0x46) = *(long *)(param_1 + 0x46) + -1;
            if (iVar20 == param_1[0x19]) goto LAB_00103990;
            lVar18 = lVar18 + 1;
            if (uVar27 == 0) goto LAB_00103c90;
            plVar24 = *(long **)(param_1 + 6);
            if (*(long **)(param_1 + 8) <= plVar24) goto LAB_00103458;
          }
LAB_00103338:
          DecodeLiteralBlockSwitch(param_1);
LAB_00103340:
          plVar29 = *(long **)(param_1 + 8);
        }
        lVar25 = (long)iVar20;
        uVar19 = (ulong)*(byte *)(*(long *)(param_1 + 0x22) +
                                 (long)(int)(iVar20 - 1U & param_1[0x1a]));
        uVar15 = (ulong)*(byte *)(*(long *)(param_1 + 0x22) +
                                 (long)(int)(iVar20 - 2U & param_1[0x1a]));
        uVar9 = uVar27 - 1;
        lVar18 = lVar25 + 1;
        if (plVar24 < plVar29) {
          while (*(long *)(param_1 + 0x46) != 0) {
            lVar6 = *(long *)(*(long *)(param_1 + 0x2e) +
                             (ulong)*(byte *)(*(long *)(param_1 + 0x2a) +
                                             (ulong)(*(byte *)(*(long *)(param_1 + 0x28) + 0x100 +
                                                              uVar15) |
                                                    *(byte *)(*(long *)(param_1 + 0x28) +
                                                             (uVar19 & 0xff)))) * 8);
            uVar15 = *(ulong *)(param_1 + 4);
            uVar17 = *(ulong *)(param_1 + 2);
            if (uVar15 < 0x11) {
              lVar7 = *plVar24;
              bVar16 = (byte)uVar15;
              uVar15 = uVar15 + 0x30;
              *(ulong *)(param_1 + 6) = (long)plVar24 + 6;
              uVar17 = uVar17 | lVar7 << (bVar16 & 0x3f);
            }
            pbVar22 = (byte *)(lVar6 + (uVar17 & 0xff) * 4);
            bVar16 = *pbVar22;
            if (8 < bVar16) {
              uVar17 = uVar17 >> 8;
              uVar15 = uVar15 - 8;
              pbVar22 = pbVar22 + ((*(ulong *)(&kBrotliBitMask + (ulong)(bVar16 - 8) * 8) & uVar17)
                                  + (ulong)*(ushort *)(pbVar22 + 2)) * 4;
              bVar16 = *pbVar22;
            }
            iVar20 = iVar20 + 1;
            uVar27 = uVar27 - 1;
            *(ulong *)(param_1 + 2) = uVar17 >> (bVar16 & 0x3f);
            *(ulong *)(param_1 + 4) = uVar15 - bVar16;
            uVar4 = *(ushort *)(pbVar22 + 2);
            *(char *)(*(long *)(param_1 + 0x22) + lVar25) = (char)uVar4;
            *(long *)(param_1 + 0x46) = *(long *)(param_1 + 0x46) + -1;
            if (iVar20 == param_1[0x19]) goto LAB_00103990;
            lVar25 = lVar25 + 1;
            if (lVar25 == lVar18 + (ulong)uVar9) goto LAB_00103c90;
            plVar24 = *(long **)(param_1 + 6);
            uVar15 = uVar19 & 0xff;
            uVar19 = (ulong)uVar4;
            if (*(long **)(param_1 + 8) <= plVar24) goto LAB_00103458;
          }
          goto LAB_00103338;
        }
LAB_00103458:
        *param_1 = 8;
        uVar12 = 2;
        goto LAB_0010331c;
      }
LAB_001039ae:
      *param_1 = 0xe;
      uVar12 = 1;
      goto LAB_0010331c;
    }
    uVar12 = 0xffffffe1;
  }
  else {
    uVar12 = 2;
LAB_0010331c:
    param_1[0x16] = iVar20;
    param_1[1] = uVar27;
  }
  return uVar12;
LAB_00103990:
  *param_1 = 0xd;
  uVar12 = 1;
  goto LAB_0010331c;
LAB_00103c90:
  if (param_1[0x21] < 1) {
    *param_1 = 0xe;
    uVar27 = 0;
    uVar12 = 1;
    goto LAB_0010331c;
  }
LAB_001035b8:
  iVar8 = param_1[0xb2];
LAB_001035bf:
  if (iVar8 < 0) {
    lVar18 = *(long *)(param_1 + 0x4a);
    if (lVar18 == 0) {
      DecodeDistanceBlockSwitch(param_1);
      lVar18 = *(long *)(param_1 + 0x4a);
    }
    uVar15 = *(ulong *)(param_1 + 4);
    uVar19 = *(ulong *)(param_1 + 2);
    lVar25 = *(long *)(*(long *)(param_1 + 0x3a) + (ulong)*(byte *)(param_1 + 0xb3) * 8);
    if (uVar15 < 0x11) {
      lVar6 = **(long **)(param_1 + 6);
      *(long *)(param_1 + 6) = (long)*(long **)(param_1 + 6) + 6;
      bVar16 = (byte)uVar15;
      uVar15 = uVar15 + 0x30;
      uVar19 = uVar19 | lVar6 << (bVar16 & 0x3f);
    }
    pbVar22 = (byte *)(lVar25 + (uVar19 & 0xff) * 4);
    bVar16 = *pbVar22;
    if (8 < bVar16) {
      uVar19 = uVar19 >> 8;
      uVar15 = uVar15 - 8;
      pbVar22 = pbVar22 + ((*(ulong *)(&kBrotliBitMask + (ulong)(bVar16 - 8) * 8) & uVar19) +
                          (ulong)*(ushort *)(pbVar22 + 2)) * 4;
      bVar16 = *pbVar22;
    }
    uVar4 = *(ushort *)(pbVar22 + 2);
    param_1[0x45] = 0;
    uVar15 = uVar15 - bVar16;
    *(long *)(param_1 + 0x4a) = lVar18 + -1;
    *(ulong *)(param_1 + 4) = uVar15;
    uVar19 = uVar19 >> (bVar16 & 0x3f);
    *(ulong *)(param_1 + 2) = uVar19;
    if ((uVar4 & 0xfff0) == 0) {
      iVar8 = param_1[0x1b];
      uVar27 = (uint)uVar4;
      if (uVar27 < 4) {
        iVar21 = 1 >> ((byte)uVar4 & 0x1f);
        param_1[0x45] = iVar21;
        iVar10 = param_1[(ulong)(iVar8 - (uVar4 - 3) & 3) + 0x1c];
        param_1[0x1b] = iVar8 - iVar21;
        param_1[0xb2] = iVar10;
      }
      else {
        if (uVar27 < 10) {
          iVar10 = uVar27 - 4;
          iVar21 = 3;
        }
        else {
          iVar10 = uVar27 - 10;
          iVar21 = 2;
        }
        iVar10 = ((0x605142 >> ((byte)(iVar10 << 2) & 0x1f) & 0xfU) - 3) +
                 param_1[(ulong)(iVar21 + iVar8 & 3) + 0x1c];
        if (0 < iVar10) goto LAB_00103b50;
        param_1[0xb2] = 0x7fffffff;
        iVar10 = 0x7fffffff;
      }
    }
    else {
      bVar16 = *(byte *)((long)param_1 + (ulong)uVar4 + 0x350);
      if (uVar15 < 0x21) {
        bVar2 = (byte)uVar15;
        uVar15 = uVar15 + 0x20;
        uVar27 = **(uint **)(param_1 + 6);
        *(uint **)(param_1 + 6) = *(uint **)(param_1 + 6) + 1;
        uVar19 = uVar19 | (ulong)uVar27 << (bVar2 & 0x3f);
      }
      uVar17 = *(ulong *)(&kBrotliBitMask + (ulong)bVar16 * 8);
      *(ulong *)(param_1 + 4) = uVar15 - bVar16;
      *(ulong *)(param_1 + 2) = uVar19 >> (bVar16 & 0x3f);
      iVar10 = (int)((uVar17 & uVar19) << ((byte)*(undefined8 *)(param_1 + 0x60) & 0x3f)) +
               param_1[(ulong)uVar4 * 2 + 0x15c];
LAB_00103b50:
      param_1[0xb2] = iVar10;
    }
  }
  else {
    param_1[0x45] = (uint)(iVar8 == 0);
    iVar8 = param_1[0x1b];
    param_1[0x1b] = iVar8 - 1U;
    iVar10 = param_1[(ulong)(iVar8 - 1U & 3) + 0x1c];
    param_1[0xb2] = iVar10;
  }
  iVar8 = param_1[0x17];
  if (param_1[0x18] != iVar8) {
    if (iVar20 < iVar8) {
      iVar8 = iVar20;
    }
    param_1[0x18] = iVar8;
  }
  uVar27 = param_1[0xb1];
  if (iVar8 < iVar10) {
    if (0x7ffffffc < iVar10) {
      return 0xfffffff0;
    }
    iVar10 = iVar10 - iVar8;
    if (iVar30 < iVar10) {
      if (0x1b < uVar27 - 4) {
        return 0xfffffff4;
      }
      lVar18 = *(long *)(param_1 + 0x22);
      bVar16 = 0;
      lVar25 = *(long *)(param_1 + 200);
      uVar9 = *(uint *)(lVar25 + 0xf8);
      if (uVar9 != 0) {
        bVar16 = *(byte *)(lVar25 + 0xfc +
                          (ulong)(*(byte *)(*(long *)(param_1 + 0x28) + 0x100 +
                                           (ulong)*(byte *)(lVar18 + (int)(iVar20 - 2U &
                                                                          param_1[0x1a]))) |
                                 *(byte *)(*(long *)(param_1 + 0x28) +
                                          (ulong)*(byte *)(lVar18 + (int)(iVar20 - 1U &
                                                                         param_1[0x1a])))));
        uVar9 = (uint)bVar16;
      }
      lVar26 = (long)(int)uVar27;
      lVar6 = *(long *)(lVar25 + 0x140 + (long)(int)uVar9 * 8);
      lVar7 = *(long *)(lVar25 + 0x340 + (long)(int)uVar9 * 8);
      uVar11 = (iVar10 + -1) - iVar30;
      bVar2 = *(byte *)(lVar6 + lVar26);
      local_4c = *(int *)(lVar6 + 0x20 + lVar26 * 4);
      uVar9 = *(uint *)(&kBrotliBitMask + (ulong)bVar2 * 8);
      local_50 = (int)uVar11 >> (bVar2 & 0x1f);
      param_1[0x1b] = param_1[0x1b] + param_1[0x45];
      local_4c = (uVar9 & uVar11) * uVar27 + local_4c;
      if ((bVar2 == 0) || (lVar23 = lVar7, local_58 = lVar6, *(int *)(lVar7 + 0x18) <= local_50)) {
        if (1 < *(byte *)(lVar25 + 0x13c)) {
          uVar11 = uVar11 - (1 << (bVar2 & 0x1f) & 0xfffffffeU) * *(int *)(lVar7 + 0x18);
          uVar15 = 0;
          do {
            if (bVar16 != (byte)uVar15) {
              local_58 = *(long *)(lVar25 + 0x140 + uVar15 * 8);
              bVar3 = *(byte *)(local_58 + lVar26);
              if (bVar3 != 0) {
                lVar23 = *(long *)(lVar25 + 0x340 + uVar15 * 8);
                iVar8 = (1 << (bVar3 & 0x1f) & 0xfffffffeU) * *(int *)(lVar23 + 0x18);
                if ((int)uVar11 < iVar8) {
                  local_50 = (int)uVar11 >> (bVar3 & 0x1f);
                  local_4c = (uVar11 & *(uint *)(&kBrotliBitMask + (ulong)bVar3 * 8)) * uVar27 +
                             *(int *)(local_58 + 0x20 + lVar26 * 4);
                  goto LAB_00103707;
                }
                uVar11 = uVar11 - iVar8;
              }
            }
            uVar15 = uVar15 + 1;
          } while (uVar15 != *(byte *)(lVar25 + 0x13c));
        }
        lVar23 = lVar7;
        local_58 = lVar6;
        if (bVar2 == 0) {
          return 0xfffffff4;
        }
      }
LAB_00103707:
      if (*(long *)(local_58 + 0xa8) == 0) {
        return 0xffffffed;
      }
      if (*(int *)(lVar23 + 0x18) <= local_50) {
        return 0xfffffff5;
      }
      puVar1 = (undefined8 *)(*(long *)(local_58 + 0xa8) + (long)local_4c);
      puVar14 = (undefined8 *)(lVar18 + iVar20);
      if (*(short *)(lVar23 + 0x30) == local_50) {
        if (uVar27 < 8) {
          if ((uVar27 & 4) == 0) {
            if ((uVar27 != 0) && (*(undefined1 *)puVar14 = *(undefined1 *)puVar1, (uVar27 & 2) != 0)
               ) {
              *(undefined2 *)((long)puVar14 + ((ulong)uVar27 - 2)) =
                   *(undefined2 *)((long)puVar1 + ((ulong)uVar27 - 2));
            }
          }
          else {
            *(undefined4 *)puVar14 = *(undefined4 *)puVar1;
            *(undefined4 *)((long)puVar14 + ((ulong)uVar27 - 4)) =
                 *(undefined4 *)((long)puVar1 + ((ulong)uVar27 - 4));
          }
        }
        else {
          *puVar14 = *puVar1;
          *(undefined8 *)((long)puVar14 + ((ulong)uVar27 - 8)) =
               *(undefined8 *)((long)puVar1 + ((ulong)uVar27 - 8));
          lVar18 = (long)puVar14 - ((ulong)(puVar14 + 1) & 0xfffffffffffffff8);
          uVar9 = uVar27 + (int)lVar18 & 0xfffffff8;
          if (7 < uVar9) {
            uVar11 = 0;
            do {
              uVar15 = (ulong)uVar11;
              uVar11 = uVar11 + 8;
              *(undefined8 *)(((ulong)(puVar14 + 1) & 0xfffffffffffffff8) + uVar15) =
                   *(undefined8 *)((long)puVar1 + (uVar15 - lVar18));
            } while (uVar11 < uVar9);
          }
        }
        iVar20 = iVar20 + uVar27;
        uVar9 = uVar27;
      }
      else {
        uVar9 = BrotliTransformDictionaryWord(puVar14,puVar1,uVar27,lVar23,local_50);
        if (uVar9 == 0) {
          if (param_1[0xb2] < 0x79) {
            return 0xfffffff5;
          }
        }
        else {
          iVar20 = iVar20 + uVar9;
        }
      }
      iVar8 = param_1[0x21] - uVar9;
      param_1[0x21] = iVar8;
      if (param_1[0x19] <= iVar20) {
LAB_00103c78:
        *param_1 = 0xf;
        uVar12 = 1;
        goto LAB_0010331c;
      }
    }
    else {
      iVar8 = InitializeCompoundDictionaryCopy(param_1,iVar30 - iVar10,uVar27);
      if (iVar8 == 0) {
        return 0xffffffee;
      }
      iVar8 = CopyFromCompoundDictionary(param_1,iVar20);
      iVar20 = iVar20 + iVar8;
      if (param_1[0x19] <= iVar20) goto LAB_00103c78;
      iVar8 = param_1[0x21];
    }
  }
  else {
    lVar18 = (long)iVar20;
    iVar28 = iVar20 + uVar27;
    uVar11 = iVar20 - iVar10 & param_1[0x1a];
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x22) + lVar18);
    puVar14 = (undefined8 *)(*(long *)(param_1 + 0x22) + (long)(int)uVar11);
    uVar9 = param_1[0x1b];
    iVar21 = uVar27 + uVar11;
    param_1[(ulong)(uVar9 & 3) + 0x1c] = iVar10;
    param_1[0x21] = param_1[0x21] - uVar27;
    param_1[0x1b] = uVar9 + 1;
    uVar12 = puVar14[1];
    *puVar1 = *puVar14;
    puVar1[1] = uVar12;
    iVar8 = param_1[0x19];
    if ((iVar20 < iVar21) && ((int)uVar11 < iVar28)) goto LAB_001032ce;
    if (iVar21 <= iVar28) {
      iVar21 = iVar28;
    }
    if (iVar8 <= iVar21) goto LAB_001032ce;
    iVar20 = iVar28;
    if (0x10 < (int)uVar27) {
      if (0x20 < (int)uVar27) {
        memcpy(puVar1 + 2,puVar14 + 2,(long)(int)(uVar27 - 0x10));
        iVar8 = param_1[0x21];
        goto LAB_00103784;
      }
      uVar12 = puVar14[3];
      puVar1[2] = puVar14[2];
      puVar1[3] = uVar12;
    }
    iVar8 = param_1[0x21];
  }
LAB_00103784:
  if (iVar8 < 1) goto LAB_001039ae;
  goto LAB_00103790;
}



undefined8 SafeProcessCommands(int *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  ushort uVar3;
  long lVar4;
  long lVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  ulong uVar18;
  int iVar19;
  long lVar20;
  byte *pbVar21;
  byte *pbVar22;
  ulong uVar23;
  ulong uVar24;
  int iVar25;
  int iVar26;
  long lVar27;
  byte bVar28;
  byte *pbVar29;
  int iVar30;
  long lVar31;
  uint uVar32;
  long in_FS_OFFSET;
  ulong extraout_XMM0_Qa;
  ulong extraout_XMM0_Qa_00;
  ulong extraout_XMM0_Qb;
  ulong extraout_XMM0_Qb_00;
  long local_70;
  int local_5c;
  ulong local_48;
  long local_40;
  
  iVar30 = 0;
  iVar25 = param_1[0x16];
  uVar32 = param_1[1];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  piVar1 = param_1 + 2;
  if (*(long *)(param_1 + 0xca) != 0) {
    iVar30 = *(int *)(*(long *)(param_1 + 0xca) + 4);
  }
  iVar7 = *param_1;
  if (iVar7 == 7) goto LAB_001041a0;
  if (iVar7 == 8) goto LAB_0010433d;
  if (iVar7 == 9) {
    iVar7 = param_1[0xb2];
    goto LAB_00103fb6;
  }
  if (iVar7 == 10) {
    iVar7 = param_1[0x19];
    lVar20 = (long)iVar25;
LAB_00103f2f:
    iVar7 = iVar7 - iVar25;
    lVar12 = lVar20 + 1;
    while (uVar32 = uVar32 - 1, -1 < (int)uVar32) {
      uVar8 = iVar25 - param_1[0xb2];
      iVar25 = iVar25 + 1;
      *(undefined1 *)(*(long *)(param_1 + 0x22) + lVar20) =
           *(undefined1 *)(*(long *)(param_1 + 0x22) + (long)(int)(uVar8 & param_1[0x1a]));
      lVar20 = lVar20 + 1;
      if (lVar20 == lVar12 + (ulong)(iVar7 - 1)) {
        *param_1 = 0x10;
        uVar10 = 1;
        goto LAB_00103f7c;
      }
    }
    if (0 < param_1[0x21]) {
LAB_001041a0:
      lVar20 = *(long *)(param_1 + 0x48);
      *param_1 = 7;
      if (lVar20 == 0) goto LAB_00104b50;
      uVar23 = *(ulong *)(param_1 + 2);
      uVar14 = *(ulong *)(param_1 + 4);
      pbVar22 = *(byte **)(param_1 + 10);
      pbVar29 = *(byte **)(param_1 + 6);
      lVar12 = (long)pbVar22 - (long)pbVar29;
      pbVar21 = pbVar29;
      uVar24 = uVar23;
      uVar18 = uVar14;
      while (uVar18 < 0xf) {
        if (pbVar22 == pbVar21) {
          iVar7 = SafeDecodeSymbol(*(long *)(param_1 + 0x26),piVar1,&local_48);
          uVar23 = extraout_XMM0_Qa;
          uVar14 = extraout_XMM0_Qb;
          if (iVar7 != 0) goto LAB_00104240;
          goto LAB_001045c6;
        }
        bVar28 = *pbVar21;
        pbVar21 = pbVar21 + 1;
        *(byte **)(param_1 + 6) = pbVar21;
        bVar16 = (byte)uVar18;
        uVar18 = uVar18 + 8;
        uVar24 = (ulong)bVar28 << (bVar16 & 0x3f) | *(ulong *)(param_1 + 2);
        *(ulong *)(param_1 + 2) = uVar24;
        *(ulong *)(param_1 + 4) = uVar18;
      }
      pbVar21 = (byte *)(*(long *)(param_1 + 0x26) + (uVar24 & 0xff) * 4);
      bVar28 = *pbVar21;
      uVar13 = uVar24;
      if (8 < bVar28) {
        uVar13 = uVar24 >> 8;
        uVar18 = uVar18 - 8;
        pbVar21 = pbVar21 + ((ulong)((uint)*(undefined8 *)
                                            (&kBrotliBitMask + (ulong)(bVar28 - 8) * 8) &
                                     (uint)(uVar24 >> 8) & 0x7f) + (ulong)*(ushort *)(pbVar21 + 2))
                            * 4;
        bVar28 = *pbVar21;
      }
      *(ulong *)(param_1 + 4) = uVar18 - bVar28;
      *(ulong *)(param_1 + 2) = uVar13 >> (bVar28 & 0x3f);
      local_48 = (ulong)*(ushort *)(pbVar21 + 2);
LAB_00104240:
      bVar28 = kCmdLut[local_48 * 8 + 3];
      iVar7 = (int)(char)kCmdLut[local_48 * 8 + 2];
      bVar16 = kCmdLut[local_48 * 8];
      bVar17 = kCmdLut[local_48 * 8 + 1];
      param_1[0x45] = (uint)bVar28;
      param_1[0xb2] = iVar7;
      uVar3 = *(ushort *)(kCmdLut + local_48 * 8 + 6);
      uVar24 = (ulong)bVar16;
      uVar8 = (uint)bVar16;
      uVar32 = (uint)*(ushort *)(kCmdLut + local_48 * 8 + 4);
      *(undefined1 *)(param_1 + 0xb3) = *(undefined1 *)(*(long *)(param_1 + 0x2c) + (ulong)bVar28);
      if (uVar24 != 0) {
        uVar18 = *(ulong *)(param_1 + 4);
        if (uVar18 < uVar24) {
          pbVar21 = *(byte **)(param_1 + 6);
          do {
            if (pbVar22 == pbVar21) {
              *(byte **)(param_1 + 6) = pbVar29;
              *(ulong *)(param_1 + 2) = uVar23;
              *(ulong *)(param_1 + 4) = uVar14;
              if (lVar12 != 0) goto LAB_001042f0;
              goto LAB_00104760;
            }
            bVar28 = *pbVar21;
            pbVar21 = pbVar21 + 1;
            *(byte **)(param_1 + 6) = pbVar21;
            bVar15 = (byte)uVar18;
            uVar18 = uVar18 + 8;
            uVar13 = (ulong)bVar28 << (bVar15 & 0x3f) | *(ulong *)(param_1 + 2);
            *(ulong *)(param_1 + 2) = uVar13;
            *(ulong *)(param_1 + 4) = uVar18;
          } while (uVar18 < uVar24);
        }
        else {
          uVar13 = *(ulong *)(param_1 + 2);
        }
        *(ulong *)(param_1 + 4) = uVar18 - uVar24;
        *(ulong *)(param_1 + 2) = uVar13 >> (bVar16 & 0x3f);
        uVar8 = (uint)uVar13 & (uint)*(undefined8 *)(&kBrotliBitMask + uVar24 * 8);
      }
      uVar24 = (ulong)bVar17;
      if (uVar24 != 0) {
        uVar18 = *(ulong *)(param_1 + 4);
        if (uVar24 <= uVar18) {
          uVar13 = *(ulong *)(param_1 + 2);
LAB_00104ae1:
          *(ulong *)(param_1 + 4) = uVar18 - uVar24;
          *(ulong *)(param_1 + 2) = uVar13 >> (bVar17 & 0x3f);
          uVar9 = (uint)uVar13 & *(uint *)(&kBrotliBitMask + uVar24 * 8);
          goto LAB_00104311;
        }
        pbVar21 = *(byte **)(param_1 + 6);
        while (pbVar22 != pbVar21) {
          bVar28 = *pbVar21;
          pbVar21 = pbVar21 + 1;
          *(byte **)(param_1 + 6) = pbVar21;
          bVar16 = (byte)uVar18;
          uVar18 = uVar18 + 8;
          uVar13 = (ulong)bVar28 << (bVar16 & 0x3f) | *(ulong *)(param_1 + 2);
          *(ulong *)(param_1 + 2) = uVar13;
          *(ulong *)(param_1 + 4) = uVar18;
          if (uVar24 <= uVar18) goto LAB_00104ae1;
        }
        *(byte **)(param_1 + 6) = pbVar29;
        *(ulong *)(param_1 + 2) = uVar23;
        *(ulong *)(param_1 + 4) = uVar14;
        if (lVar12 == 0) goto LAB_00104760;
LAB_001042f0:
        if (0x1c < lVar12 + 1U) {
          pbVar29 = pbVar29 + lVar12 + -0x1b;
        }
        goto LAB_00104306;
      }
      uVar9 = 0;
LAB_00104311:
      param_1[0xb1] = uVar9 + uVar3;
      *(long *)(param_1 + 0x48) = lVar20 + -1;
      uVar32 = uVar32 + uVar8;
      if (uVar32 == 0) goto LAB_00103fb6;
      param_1[0x21] = param_1[0x21] - uVar32;
LAB_0010433d:
      do {
        *param_1 = 8;
        lVar20 = *(long *)(param_1 + 0x46);
        if (param_1[0x44] == 0) {
          lVar12 = (long)iVar25;
          uVar14 = (ulong)*(byte *)(*(long *)(param_1 + 0x22) +
                                   (long)(int)(iVar25 - 1U & param_1[0x1a]));
          uVar23 = (ulong)*(byte *)(*(long *)(param_1 + 0x22) +
                                   (long)(int)(iVar25 - 2U & param_1[0x1a]));
          while (lVar20 != 0) {
            uVar24 = *(ulong *)(param_1 + 4);
            lVar20 = *(long *)(*(long *)(param_1 + 0x2e) +
                              (ulong)*(byte *)(*(long *)(param_1 + 0x2a) +
                                              (ulong)(*(byte *)(*(long *)(param_1 + 0x28) + 0x100 +
                                                               uVar23) |
                                                     *(byte *)(*(long *)(param_1 + 0x28) +
                                                              (uVar14 & 0xff)))) * 8);
            if (uVar24 < 0xf) {
              pbVar22 = *(byte **)(param_1 + 6);
              do {
                if (*(byte **)(param_1 + 10) == pbVar22) {
                  iVar7 = SafeDecodeSymbol(lVar20,piVar1,&local_48);
                  uVar24 = local_48;
                  if (iVar7 != 0) goto LAB_0010456a;
                  goto LAB_001045c6;
                }
                bVar28 = *pbVar22;
                pbVar22 = pbVar22 + 1;
                *(byte **)(param_1 + 6) = pbVar22;
                bVar16 = (byte)uVar24;
                uVar24 = uVar24 + 8;
                uVar23 = (ulong)bVar28 << (bVar16 & 0x3f) | *(ulong *)(param_1 + 2);
                *(ulong *)(param_1 + 2) = uVar23;
                *(ulong *)(param_1 + 4) = uVar24;
              } while (uVar24 < 0xf);
            }
            else {
              uVar23 = *(ulong *)(param_1 + 2);
            }
            pbVar22 = (byte *)(lVar20 + (uVar23 & 0xff) * 4);
            bVar28 = *pbVar22;
            uVar18 = uVar23;
            if (8 < bVar28) {
              uVar18 = uVar23 >> 8;
              uVar24 = uVar24 - 8;
              pbVar22 = pbVar22 + ((ulong)((uint)*(undefined8 *)
                                                  (&kBrotliBitMask + (ulong)(bVar28 - 8) * 8) &
                                           (uint)(uVar23 >> 8) & 0x7f) +
                                  (ulong)*(ushort *)(pbVar22 + 2)) * 4;
              bVar28 = *pbVar22;
            }
            *(ulong *)(param_1 + 4) = uVar24 - bVar28;
            uVar3 = *(ushort *)(pbVar22 + 2);
            *(ulong *)(param_1 + 2) = uVar18 >> (bVar28 & 0x3f);
            uVar24 = (ulong)uVar3;
LAB_0010456a:
            iVar25 = iVar25 + 1;
            uVar32 = uVar32 - 1;
            *(char *)(*(long *)(param_1 + 0x22) + lVar12) = (char)uVar24;
            lVar20 = *(long *)(param_1 + 0x46) + -1;
            *(long *)(param_1 + 0x46) = lVar20;
            if (iVar25 == param_1[0x19]) goto LAB_00104638;
            lVar12 = lVar12 + 1;
            uVar23 = uVar14 & 0xff;
            if (uVar32 == 0) goto LAB_00104421;
            uVar14 = uVar24 & 0xffffffff;
          }
        }
        else {
          lVar12 = (long)iVar25;
          while (lVar20 != 0) {
            uVar23 = *(ulong *)(param_1 + 4);
            if (uVar23 < 0xf) {
              pbVar22 = *(byte **)(param_1 + 6);
              do {
                if (*(byte **)(param_1 + 10) == pbVar22) {
                  iVar7 = SafeDecodeSymbol(*(long *)(param_1 + 0x68),piVar1,&local_48);
                  if (iVar7 == 0) goto LAB_001045c6;
                  uVar6 = (undefined1)local_48;
                  goto LAB_001043e6;
                }
                bVar28 = *pbVar22;
                pbVar22 = pbVar22 + 1;
                *(byte **)(param_1 + 6) = pbVar22;
                bVar16 = (byte)uVar23;
                uVar23 = uVar23 + 8;
                uVar14 = (ulong)bVar28 << (bVar16 & 0x3f) | *(ulong *)(param_1 + 2);
                *(ulong *)(param_1 + 2) = uVar14;
                *(ulong *)(param_1 + 4) = uVar23;
              } while (uVar23 < 0xf);
            }
            else {
              uVar14 = *(ulong *)(param_1 + 2);
            }
            pbVar22 = (byte *)(*(long *)(param_1 + 0x68) + (uVar14 & 0xff) * 4);
            bVar28 = *pbVar22;
            uVar24 = uVar14;
            if (8 < bVar28) {
              uVar24 = uVar14 >> 8;
              uVar23 = uVar23 - 8;
              pbVar22 = pbVar22 + ((ulong)((uint)*(undefined8 *)
                                                  (&kBrotliBitMask + (ulong)(bVar28 - 8) * 8) &
                                           (uint)(uVar14 >> 8) & 0x7f) +
                                  (ulong)*(ushort *)(pbVar22 + 2)) * 4;
              bVar28 = *pbVar22;
            }
            *(ulong *)(param_1 + 2) = uVar24 >> (bVar28 & 0x3f);
            uVar6 = (undefined1)*(undefined2 *)(pbVar22 + 2);
            *(ulong *)(param_1 + 4) = uVar23 - bVar28;
LAB_001043e6:
            iVar25 = iVar25 + 1;
            uVar32 = uVar32 - 1;
            *(undefined1 *)(*(long *)(param_1 + 0x22) + lVar12) = uVar6;
            lVar20 = *(long *)(param_1 + 0x46) + -1;
            *(long *)(param_1 + 0x46) = lVar20;
            if (iVar25 == param_1[0x19]) goto LAB_00104638;
            lVar12 = lVar12 + 1;
            if (uVar32 == 0) goto LAB_00104421;
          }
        }
        iVar7 = SafeDecodeLiteralBlockSwitch(param_1);
      } while (iVar7 != 0);
      goto LAB_001045c6;
    }
LAB_0010465e:
    *param_1 = 0xe;
    uVar10 = 1;
LAB_00103f7c:
    param_1[0x16] = iVar25;
    param_1[1] = uVar32;
  }
  else {
    uVar10 = 0xffffffe1;
  }
LAB_00103f83:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00104b50:
  iVar7 = SafeDecodeCommandBlockSwitch_constprop_0(param_1);
  if (iVar7 != 0) goto LAB_001041a0;
LAB_001045c6:
  uVar10 = 2;
  goto LAB_00103f7c;
LAB_00104638:
  *param_1 = 0xd;
  uVar10 = 1;
  goto LAB_00103f7c;
LAB_00104421:
  if (param_1[0x21] < 1) {
    *param_1 = 0xe;
    uVar32 = 0;
    uVar10 = 1;
    goto LAB_00103f7c;
  }
  iVar7 = param_1[0xb2];
  uVar32 = 0;
LAB_00103fb6:
  *param_1 = 9;
  if (-1 < iVar7) {
    param_1[0x45] = (uint)(iVar7 == 0);
    iVar7 = param_1[0x1b];
    param_1[0x1b] = iVar7 - 1U;
    iVar7 = param_1[(ulong)(iVar7 - 1U & 3) + 0x1c];
    param_1[0xb2] = iVar7;
    goto LAB_00103fe6;
  }
  if ((*(long *)(param_1 + 0x4a) == 0) &&
     (iVar7 = SafeDecodeDistanceBlockSwitch_constprop_0(param_1), iVar7 == 0)) goto LAB_001045c6;
  uVar23 = *(ulong *)(param_1 + 2);
  uVar14 = *(ulong *)(param_1 + 4);
  pbVar29 = *(byte **)(param_1 + 6);
  pbVar22 = *(byte **)(param_1 + 10);
  lVar20 = *(long *)(*(long *)(param_1 + 0x3a) + (ulong)*(byte *)(param_1 + 0xb3) * 8);
  pbVar21 = pbVar29;
  uVar24 = uVar23;
  uVar18 = uVar14;
  while (uVar18 < 0xf) {
    if (pbVar22 == pbVar21) {
      iVar7 = SafeDecodeSymbol(lVar20,piVar1,&local_48);
      uVar23 = extraout_XMM0_Qa_00;
      uVar14 = extraout_XMM0_Qb_00;
      if (iVar7 != 0) goto LAB_001047f8;
      goto LAB_001045c6;
    }
    bVar28 = *pbVar21;
    pbVar21 = pbVar21 + 1;
    *(byte **)(param_1 + 6) = pbVar21;
    bVar16 = (byte)uVar18;
    uVar18 = uVar18 + 8;
    uVar24 = (ulong)bVar28 << (bVar16 & 0x3f) | *(ulong *)(param_1 + 2);
    *(ulong *)(param_1 + 2) = uVar24;
    *(ulong *)(param_1 + 4) = uVar18;
  }
  pbVar21 = (byte *)(lVar20 + (uVar24 & 0xff) * 4);
  bVar28 = *pbVar21;
  uVar13 = uVar24;
  if (8 < bVar28) {
    uVar13 = uVar24 >> 8;
    uVar18 = uVar18 - 8;
    pbVar21 = pbVar21 + ((ulong)((uint)*(undefined8 *)(&kBrotliBitMask + (ulong)(bVar28 - 8) * 8) &
                                 (uint)(uVar24 >> 8) & 0x7f) + (ulong)*(ushort *)(pbVar21 + 2)) * 4;
    bVar28 = *pbVar21;
  }
  local_48 = (ulong)*(ushort *)(pbVar21 + 2);
  *(ulong *)(param_1 + 4) = uVar18 - bVar28;
  *(ulong *)(param_1 + 2) = uVar13 >> (bVar28 & 0x3f);
LAB_001047f8:
  lVar20 = *(long *)(param_1 + 0x4a);
  param_1[0x45] = 0;
  *(long *)(param_1 + 0x4a) = lVar20 + -1;
  iVar7 = (int)local_48;
  if ((local_48 & 0xfffffff0) == 0) {
    iVar26 = param_1[0x1b];
    if (iVar7 < 4) {
      iVar19 = 1 >> ((byte)local_48 & 0x1f);
      param_1[0x45] = iVar19;
      iVar7 = param_1[(ulong)(iVar26 - (iVar7 + -3) & 3) + 0x1c];
      param_1[0x1b] = iVar26 - iVar19;
      param_1[0xb2] = iVar7;
    }
    else {
      if (iVar7 < 10) {
        iVar7 = iVar7 + -4;
        iVar19 = 3;
      }
      else {
        iVar7 = iVar7 + -10;
        iVar19 = 2;
      }
      iVar7 = ((0x605142 >> ((byte)(iVar7 << 2) & 0x1f) & 0xfU) - 3) +
              param_1[(ulong)(iVar19 + iVar26 & 3) + 0x1c];
      if (0 < iVar7) goto LAB_00104a61;
      param_1[0xb2] = 0x7fffffff;
      iVar7 = 0x7fffffff;
    }
  }
  else {
    bVar28 = *(byte *)((long)param_1 + local_48 + 0x350);
    uVar24 = (ulong)bVar28;
    if (uVar24 != 0) {
      uVar18 = *(ulong *)(param_1 + 4);
      if (uVar18 < uVar24) {
        pbVar21 = *(byte **)(param_1 + 6);
        do {
          if (pbVar22 == pbVar21) {
            *(long *)(param_1 + 0x4a) = lVar20;
            *(byte **)(param_1 + 6) = pbVar29;
            *(ulong *)(param_1 + 2) = uVar23;
            *(ulong *)(param_1 + 4) = uVar14;
            lVar20 = (long)pbVar22 - (long)pbVar29;
            if (lVar20 == 0) goto LAB_00104760;
            if (lVar20 + 1U < 0x1d) goto LAB_00104306;
            *(byte **)(param_1 + 8) = pbVar29 + lVar20 + -0x1b;
            goto LAB_001045c6;
          }
          bVar16 = *pbVar21;
          pbVar21 = pbVar21 + 1;
          *(byte **)(param_1 + 6) = pbVar21;
          bVar17 = (byte)uVar18;
          uVar18 = uVar18 + 8;
          uVar13 = (ulong)bVar16 << (bVar17 & 0x3f) | *(ulong *)(param_1 + 2);
          *(ulong *)(param_1 + 2) = uVar13;
          *(ulong *)(param_1 + 4) = uVar18;
        } while (uVar18 < uVar24);
      }
      else {
        uVar13 = *(ulong *)(param_1 + 2);
      }
      *(ulong *)(param_1 + 4) = uVar18 - uVar24;
      *(ulong *)(param_1 + 2) = uVar13 >> (bVar28 & 0x3f);
      uVar24 = uVar13 & *(ulong *)(&kBrotliBitMask + uVar24 * 8);
    }
    iVar7 = (int)(uVar24 << ((byte)*(undefined8 *)(param_1 + 0x60) & 0x3f)) +
            param_1[local_48 * 2 + 0x15c];
LAB_00104a61:
    param_1[0xb2] = iVar7;
  }
LAB_00103fe6:
  iVar26 = param_1[0x17];
  if (param_1[0x18] != iVar26) {
    if (iVar25 < iVar26) {
      iVar26 = iVar25;
    }
    param_1[0x18] = iVar26;
  }
  uVar32 = param_1[0xb1];
  if (iVar26 < iVar7) {
    if (0x7ffffffc < iVar7) {
      uVar10 = 0xfffffff0;
      goto LAB_00103f83;
    }
    iVar7 = iVar7 - iVar26;
    if (iVar30 < iVar7) {
      if (0x1b < uVar32 - 4) {
LAB_00104a9f:
        uVar10 = 0xfffffff4;
        goto LAB_00103f83;
      }
      lVar20 = *(long *)(param_1 + 0x22);
      bVar28 = 0;
      lVar12 = *(long *)(param_1 + 200);
      uVar8 = *(uint *)(lVar12 + 0xf8);
      if (uVar8 != 0) {
        bVar28 = *(byte *)(lVar12 + 0xfc +
                          (ulong)(*(byte *)(*(long *)(param_1 + 0x28) + 0x100 +
                                           (ulong)*(byte *)(lVar20 + (int)(iVar25 - 2U &
                                                                          param_1[0x1a]))) |
                                 *(byte *)(*(long *)(param_1 + 0x28) +
                                          (ulong)*(byte *)(lVar20 + (int)(iVar25 - 1U &
                                                                         param_1[0x1a])))));
        uVar8 = (uint)bVar28;
      }
      lVar31 = (long)(int)uVar32;
      lVar4 = *(long *)(lVar12 + 0x140 + (long)(int)uVar8 * 8);
      lVar5 = *(long *)(lVar12 + 0x340 + (long)(int)uVar8 * 8);
      uVar9 = (iVar7 + -1) - iVar30;
      bVar16 = *(byte *)(lVar4 + lVar31);
      local_5c = *(int *)(lVar4 + 0x20 + lVar31 * 4);
      uVar8 = *(uint *)(&kBrotliBitMask + (ulong)bVar16 * 8);
      iVar7 = (int)uVar9 >> (bVar16 & 0x1f);
      param_1[0x1b] = param_1[0x1b] + param_1[0x45];
      local_5c = (uVar8 & uVar9) * uVar32 + local_5c;
      if ((*(int *)(lVar5 + 0x18) <= iVar7) || (lVar27 = lVar4, local_70 = lVar5, bVar16 == 0)) {
        if (1 < *(byte *)(lVar12 + 0x13c)) {
          uVar9 = uVar9 - (1 << (bVar16 & 0x1f) & 0xfffffffeU) * *(int *)(lVar5 + 0x18);
          uVar23 = 0;
          do {
            if (bVar28 != (byte)uVar23) {
              lVar27 = *(long *)(lVar12 + 0x140 + uVar23 * 8);
              bVar17 = *(byte *)(lVar27 + lVar31);
              if (bVar17 != 0) {
                local_70 = *(long *)(lVar12 + 0x340 + uVar23 * 8);
                iVar26 = (1 << (bVar17 & 0x1f) & 0xfffffffeU) * *(int *)(local_70 + 0x18);
                if ((int)uVar9 < iVar26) {
                  iVar7 = (int)uVar9 >> (bVar17 & 0x1f);
                  local_5c = (uVar9 & *(uint *)(&kBrotliBitMask + (ulong)bVar17 * 8)) * uVar32 +
                             *(int *)(lVar27 + 0x20 + lVar31 * 4);
                  goto LAB_0010410d;
                }
                uVar9 = uVar9 - iVar26;
              }
            }
            uVar23 = uVar23 + 1;
          } while (uVar23 != *(byte *)(lVar12 + 0x13c));
        }
        lVar27 = lVar4;
        local_70 = lVar5;
        if (bVar16 == 0) goto LAB_00104a9f;
      }
LAB_0010410d:
      if (*(long *)(lVar27 + 0xa8) == 0) {
        uVar10 = 0xffffffed;
        goto LAB_00103f83;
      }
      if (*(int *)(local_70 + 0x18) <= iVar7) {
LAB_00104b75:
        uVar10 = 0xfffffff5;
        goto LAB_00103f83;
      }
      puVar2 = (undefined8 *)(*(long *)(lVar27 + 0xa8) + (long)local_5c);
      puVar11 = (undefined8 *)(lVar20 + iVar25);
      if (*(short *)(local_70 + 0x30) == iVar7) {
        if (uVar32 < 8) {
          if ((uVar32 & 4) == 0) {
            if ((uVar32 != 0) && (*(undefined1 *)puVar11 = *(undefined1 *)puVar2, (uVar32 & 2) != 0)
               ) {
              *(undefined2 *)((long)puVar11 + ((ulong)uVar32 - 2)) =
                   *(undefined2 *)((long)puVar2 + ((ulong)uVar32 - 2));
            }
          }
          else {
            *(undefined4 *)puVar11 = *(undefined4 *)puVar2;
            *(undefined4 *)((long)puVar11 + ((ulong)uVar32 - 4)) =
                 *(undefined4 *)((long)puVar2 + ((ulong)uVar32 - 4));
          }
        }
        else {
          *puVar11 = *puVar2;
          *(undefined8 *)((long)puVar11 + ((ulong)uVar32 - 8)) =
               *(undefined8 *)((long)puVar2 + ((ulong)uVar32 - 8));
          lVar20 = (long)puVar11 - ((ulong)(puVar11 + 1) & 0xfffffffffffffff8);
          uVar8 = (int)lVar20 + uVar32 & 0xfffffff8;
          if (7 < uVar8) {
            uVar9 = 0;
            do {
              uVar23 = (ulong)uVar9;
              uVar9 = uVar9 + 8;
              *(undefined8 *)(((ulong)(puVar11 + 1) & 0xfffffffffffffff8) + uVar23) =
                   *(undefined8 *)((long)puVar2 + (uVar23 - lVar20));
            } while (uVar9 < uVar8);
          }
        }
        iVar25 = iVar25 + uVar32;
        uVar8 = uVar32;
      }
      else {
        uVar8 = BrotliTransformDictionaryWord(puVar11,puVar2,uVar32,local_70,iVar7);
        if (uVar8 == 0) {
          if (param_1[0xb2] < 0x79) goto LAB_00104b75;
        }
        else {
          iVar25 = iVar25 + uVar8;
        }
      }
      iVar7 = param_1[0x21] - uVar8;
      param_1[0x21] = iVar7;
      if (param_1[0x19] <= iVar25) {
LAB_00104b05:
        *param_1 = 0xf;
        uVar10 = 1;
        goto LAB_00103f7c;
      }
    }
    else {
      iVar7 = InitializeCompoundDictionaryCopy(param_1,iVar30 - iVar7,uVar32);
      if (iVar7 == 0) {
        uVar10 = 0xffffffee;
        goto LAB_00103f83;
      }
      iVar7 = CopyFromCompoundDictionary(param_1,iVar25);
      iVar25 = iVar25 + iVar7;
      if (param_1[0x19] <= iVar25) goto LAB_00104b05;
      iVar7 = param_1[0x21];
    }
  }
  else {
    lVar20 = (long)iVar25;
    iVar19 = iVar25 + uVar32;
    uVar9 = iVar25 - iVar7 & param_1[0x1a];
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0x22) + lVar20);
    iVar26 = uVar32 + uVar9;
    puVar11 = (undefined8 *)((long)(int)uVar9 + *(long *)(param_1 + 0x22));
    uVar8 = param_1[0x1b];
    param_1[(ulong)(uVar8 & 3) + 0x1c] = iVar7;
    param_1[0x21] = param_1[0x21] - uVar32;
    param_1[0x1b] = uVar8 + 1;
    uVar10 = puVar11[1];
    *puVar2 = *puVar11;
    puVar2[1] = uVar10;
    iVar7 = param_1[0x19];
    if ((iVar25 < iVar26) && ((int)uVar9 < iVar19)) goto LAB_00103f2f;
    if (iVar26 <= iVar19) {
      iVar26 = iVar19;
    }
    if (iVar7 <= iVar26) goto LAB_00103f2f;
    iVar25 = iVar19;
    if (0x10 < (int)uVar32) {
      if (0x20 < (int)uVar32) {
        memcpy(puVar2 + 2,puVar11 + 2,(long)(int)(uVar32 - 0x10));
        iVar7 = param_1[0x21];
        goto LAB_0010418e;
      }
      uVar10 = puVar11[3];
      puVar2[2] = puVar11[2];
      puVar2[3] = uVar10;
    }
    iVar7 = param_1[0x21];
  }
LAB_0010418e:
  if (iVar7 < 1) goto LAB_0010465e;
  goto LAB_001041a0;
LAB_00104760:
  *(byte **)(param_1 + 10) = pbVar29;
LAB_00104306:
  *(byte **)(param_1 + 8) = pbVar29;
  goto LAB_001045c6;
}



undefined8 BrotliDecoderSetParameter(int *param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*param_1 == 0) {
    if (param_2 == 0) {
      *(byte *)(param_1 + 0xc1) = *(byte *)(param_1 + 0xc1) & 0xef | (param_3 == 0) << 4;
    }
    else {
      if (param_2 != 1) {
        return 0;
      }
      *(byte *)(param_1 + 0xc1) = *(byte *)(param_1 + 0xc1) & 0xdf | (param_3 != 0) << 5;
    }
    uVar1 = 1;
  }
  return uVar1;
}



void * BrotliDecoderCreateInstance(code *param_1,code *param_2,undefined8 param_3)

{
  int iVar1;
  void *__ptr;
  
  if (param_1 == (code *)0x0 && param_2 == (code *)0x0) {
    __ptr = malloc(0x1670);
  }
  else {
    if (param_1 == (code *)0x0) {
      return (void *)0x0;
    }
    if (param_2 == (code *)0x0) {
      return (void *)0x0;
    }
    __ptr = (void *)(*param_1)(param_3,0x1670);
  }
  if (__ptr != (void *)0x0) {
    iVar1 = BrotliDecoderStateInit(__ptr,param_1,param_2,param_3);
    if (iVar1 != 0) {
      return __ptr;
    }
    if (param_1 == (code *)0x0 && param_2 == (code *)0x0) {
      free(__ptr);
    }
    else if ((param_1 != (code *)0x0) && (param_2 != (code *)0x0)) {
      (*param_2)(param_3,__ptr);
    }
  }
  return (void *)0x0;
}



void BrotliDecoderDestroyInstance(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if (param_1 != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x38);
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    BrotliDecoderStateCleanup();
                    /* WARNING: Could not recover jumptable at 0x00104e2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(uVar1,param_1);
    return;
  }
  return;
}



undefined8 BrotliDecoderAttachDictionary(int *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  uint *puVar9;
  
  uVar1 = **(uint **)(param_1 + 200);
  if ((*param_1 == 0) && (iVar4 = BrotliSharedDictionaryAttach(), iVar4 != 0)) {
    puVar9 = *(uint **)(param_1 + 200);
    uVar7 = (ulong)uVar1;
    if (uVar1 < *puVar9) {
      do {
        uVar2 = *(undefined8 *)(puVar9 + uVar7 * 2 + 2);
        uVar3 = *(undefined8 *)(puVar9 + uVar7 * 2 + 0x20);
        piVar5 = *(int **)(param_1 + 0xca);
        if (*param_1 != 0) {
          return 0;
        }
        if (piVar5 == (int *)0x0) {
          piVar5 = (int *)(**(code **)(param_1 + 0xc))(*(undefined8 *)(param_1 + 0x10));
          if (piVar5 == (int *)0x0) {
            return 0;
          }
          piVar5[0] = 0;
          piVar5[1] = 0;
          iVar6 = 0;
          iVar4 = 1;
          lVar8 = 0;
          piVar5[4] = 0;
          piVar5[5] = 0;
          puVar9 = *(uint **)(param_1 + 200);
          piVar5[0x36] = -1;
          piVar5[0x26] = 0;
          *(int **)(param_1 + 0xca) = piVar5;
        }
        else {
          iVar4 = *piVar5;
          lVar8 = (long)iVar4;
          if (iVar4 == 0xf) {
            return 0;
          }
          iVar6 = piVar5[1];
          iVar4 = iVar4 + 1;
        }
        *(undefined8 *)(piVar5 + lVar8 * 2 + 6) = uVar3;
        iVar6 = iVar6 + (int)uVar2;
        uVar7 = uVar7 + 1;
        *piVar5 = iVar4;
        piVar5[1] = iVar6;
        piVar5[(long)iVar4 + 0x26] = iVar6;
      } while (uVar7 < *puVar9);
    }
    return 1;
  }
  return 0;
}



undefined8
BrotliDecoderDecompressStream
          (int *param_1,long *param_2,long *param_3,long *param_4,long *param_5,undefined8 *param_6)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  undefined1 uVar4;
  ushort uVar5;
  size_t __n;
  ulong uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  int *piVar12;
  size_t sVar13;
  long lVar14;
  ulong uVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  uint uVar19;
  uint uVar20;
  int *piVar21;
  long lVar22;
  byte *pbVar23;
  byte *pbVar24;
  byte *pbVar25;
  ulong uVar26;
  long lVar27;
  ulong uVar28;
  long lVar29;
  undefined1 *puVar30;
  int *piVar31;
  long *plVar32;
  ulong uVar33;
  long in_FS_OFFSET;
  ulong local_48;
  long local_40;
  
  lVar22 = *param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_6 != (undefined8 *)0x0) {
    *param_6 = *(undefined8 *)(param_1 + 0x6c);
  }
  if (param_1[0x20] < 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 0;
    }
  }
  else {
    if (*param_4 == 0) {
      param_5 = (long *)0x0;
    }
    else if ((param_5 == (long *)0x0) || (*param_5 == 0)) {
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00106351;
      iVar7 = -0x14;
      lVar22 = lVar22 - *param_2;
      goto LAB_00105101;
    }
    lVar14 = *(long *)(param_1 + 0x14);
    if (lVar14 == 0) {
      lVar14 = *param_2;
      piVar12 = (int *)*param_3;
      *(int **)(param_1 + 6) = piVar12;
      if (lVar14 == 0) {
        *(int **)(param_1 + 10) = piVar12;
      }
      else {
        *(long *)(param_1 + 10) = (long)piVar12 + lVar14;
        if (0x1c < lVar14 + 1U) {
          piVar12 = (int *)((long)piVar12 + lVar14 + -0x1b);
        }
      }
      iVar7 = 1;
    }
    else {
      piVar1 = param_1 + 0x12;
      *(int **)(param_1 + 6) = piVar1;
      *(long *)(param_1 + 10) = (long)piVar1 + lVar14;
      iVar7 = 2;
      piVar12 = (int *)((long)param_1 + lVar14 + 0x2d);
      if (lVar14 + 1U < 0x1d) {
        piVar12 = piVar1;
      }
    }
    piVar1 = param_1 + 2;
    *(int **)(param_1 + 8) = piVar12;
LAB_0010507a:
    if (iVar7 == 1) goto switchD_00105179_default;
LAB_00105083:
    if (iVar7 == 2) {
LAB_0010508c:
      if ((*(long *)(param_1 + 0x22) == 0) ||
         (iVar7 = WriteRingBuffer(param_1,param_4,param_5,param_6), -1 < iVar7)) {
        lVar14 = *(long *)(param_1 + 0x14);
        puVar30 = *(undefined1 **)(param_1 + 6);
        if (lVar14 == 0) {
          *param_3 = (long)puVar30;
          lVar14 = *(long *)(param_1 + 10) - (long)puVar30;
          *param_2 = lVar14;
          while (lVar14 != 0) {
            lVar14 = *(long *)(param_1 + 0x14);
            uVar4 = *puVar30;
            puVar30 = puVar30 + 1;
            *(undefined1 *)((long)param_1 + lVar14 + 0x48) = uVar4;
            *(long *)(param_1 + 0x14) = lVar14 + 1;
            *param_3 = (long)puVar30;
            *param_2 = *param_2 + -1;
            lVar14 = *param_2;
          }
LAB_001050e0:
          lVar29 = 0;
          iVar7 = 2;
          goto LAB_001050e7;
        }
        if (*(undefined1 **)(param_1 + 10) == puVar30) {
          param_1[0x14] = 0;
          param_1[0x15] = 0;
          lVar14 = *param_3;
          lVar29 = *param_2;
          *(long *)(param_1 + 6) = lVar14;
          if (lVar29 == 0) {
            *(long *)(param_1 + 10) = lVar14;
          }
          else {
            *(long *)(param_1 + 10) = lVar14 + lVar29;
            if (0x1c < lVar29 + 1U) {
              *(long *)(param_1 + 8) = lVar14 + -0x1b + lVar29;
              goto switchD_00105179_default;
            }
          }
          *(long *)(param_1 + 8) = lVar14;
        }
        else {
          if (*param_2 == 0) goto LAB_001050e0;
          piVar12 = param_1 + 0x12;
          lVar29 = lVar14 + 1;
          piVar21 = piVar12;
          piVar31 = piVar12;
          if (lVar29 != 0) {
            piVar21 = (int *)((long)param_1 + lVar14 + 0x2e);
            piVar31 = (int *)((long)piVar12 + lVar29);
            if (lVar14 + 2U < 0x1d) {
              piVar21 = piVar12;
            }
          }
          *(undefined1 *)((long)param_1 + lVar14 + 0x48) = *(undefined1 *)*param_3;
          *(long *)(param_1 + 0x14) = lVar29;
          *(int **)(param_1 + 6) = piVar12;
          *(int **)(param_1 + 10) = piVar31;
          *(int **)(param_1 + 8) = piVar21;
          *param_3 = *param_3 + 1;
          *param_2 = *param_2 + -1;
        }
switchD_00105179_default:
        switch(*param_1) {
        case 0:
          iVar7 = BrotliWarmupBitReader(piVar1);
          if (iVar7 == 0) goto LAB_0010508c;
          bVar18 = *(byte *)(param_1 + 0xc1);
          lVar14 = *(long *)(param_1 + 4);
          uVar15 = *(ulong *)(param_1 + 2);
          bVar16 = bVar18 & 0xdf;
          *(byte *)(param_1 + 0xc1) = bVar16;
          *(long *)(param_1 + 4) = lVar14 + -1;
          uVar28 = uVar15 >> 1;
          *(ulong *)(param_1 + 2) = uVar28;
          if ((uVar15 & 1) == 0) {
            *(ushort *)(param_1 + 0xc1) = *(ushort *)(param_1 + 0xc1) & 0xf03f | 0x400;
          }
          else {
            *(long *)(param_1 + 4) = lVar14 + -4;
            uVar33 = uVar15 >> 4;
            *(ulong *)(param_1 + 2) = uVar33;
            if ((uVar28 & 7) == 0) {
              uVar20 = (uint)uVar33 & 7;
              *(long *)(param_1 + 4) = lVar14 + -7;
              *(ulong *)(param_1 + 2) = uVar15 >> 7;
              if (uVar20 == 1) {
                if ((bVar18 >> 5 & 1) != 0) {
                  *(long *)(param_1 + 4) = lVar14 + -8;
                  *(ulong *)(param_1 + 2) = uVar15 >> 8;
                  if ((uVar15 >> 7 & 1) == 0) {
                    *(byte *)(param_1 + 0xc1) = bVar16 | 0x20;
                    goto LAB_00105e2c;
                  }
                }
LAB_0010612e:
                iVar7 = -0xd;
                goto LAB_001054df;
              }
              if ((uVar33 & 7) == 0) {
                *(ushort *)(param_1 + 0xc1) = *(ushort *)(param_1 + 0xc1) & 0xf03f | 0x440;
                goto LAB_00105e2c;
              }
              iVar7 = uVar20 + 8;
            }
            else {
              iVar7 = ((uint)uVar28 & 7) + 0x11;
            }
            *(ushort *)(param_1 + 0xc1) =
                 (ushort)(iVar7 << 6) | *(ushort *)(param_1 + 0xc1) & 0xf03f;
          }
LAB_00105e2c:
          *param_1 = ((*(byte *)(param_1 + 0xc1) & 0x20) == 0) + 1;
          goto switchD_00105179_default;
        case 1:
          uVar15 = *(ulong *)(param_1 + 4);
          if (uVar15 < 6) {
            pbVar25 = *(byte **)(param_1 + 6);
            if (pbVar25 == *(byte **)(param_1 + 10)) goto LAB_0010508c;
            bVar18 = *pbVar25;
            *(byte **)(param_1 + 6) = pbVar25 + 1;
            bVar16 = (byte)uVar15;
            uVar15 = uVar15 + 8;
            uVar28 = (ulong)bVar18 << (bVar16 & 0x3f) | *(ulong *)(param_1 + 2);
          }
          else {
            uVar28 = *(ulong *)(param_1 + 2);
          }
          *(ulong *)(param_1 + 4) = uVar15 - 6;
          *(ulong *)(param_1 + 2) = uVar28 >> 6;
          bVar18 = (byte)uVar28 & 0x3f;
          *(ushort *)(param_1 + 0xc1) =
               *(ushort *)(param_1 + 0xc1) & 0xf03f | (ushort)(((uint)uVar28 & 0x3f) << 6);
          if (0x14 < (bVar18 + 0x36 & 0x3f)) goto LAB_0010612e;
          *param_1 = 2;
          break;
        case 2:
          bVar18 = (byte)(*(ushort *)(param_1 + 0xc1) >> 6) & 0x3f;
          break;
        case 3:
          goto switchD_00105179_caseD_3;
        case 4:
          goto switchD_00105179_caseD_4;
        case 5:
          goto switchD_00105179_caseD_5;
        case 6:
          iVar7 = param_1[1];
LAB_00105cca:
          lVar14 = *(long *)(param_1 + 0x4e);
          if (iVar7 < (int)lVar14) {
            lVar29 = (long)iVar7;
            do {
              uVar15 = *(ulong *)(param_1 + 4);
              if (uVar15 < 2) {
                pbVar25 = *(byte **)(param_1 + 6);
                if (pbVar25 == *(byte **)(param_1 + 10)) {
                  param_1[1] = iVar7;
                  goto LAB_0010508c;
                }
                bVar18 = *pbVar25;
                *(byte **)(param_1 + 6) = pbVar25 + 1;
                bVar16 = (byte)uVar15;
                uVar15 = uVar15 + 8;
                uVar28 = (ulong)bVar18 << (bVar16 & 0x3f) | *(ulong *)(param_1 + 2);
              }
              else {
                uVar28 = *(ulong *)(param_1 + 2);
              }
              iVar7 = iVar7 + 1;
              *(ulong *)(param_1 + 4) = uVar15 - 2;
              *(ulong *)(param_1 + 2) = uVar28 >> 2;
              *(byte *)(*(long *)(param_1 + 0xc6) + lVar29) = (byte)uVar28 & 3;
              lVar14 = *(long *)(param_1 + 0x4e);
              lVar29 = lVar29 + 1;
            } while (iVar7 < (int)lVar14);
          }
          *param_1 = 0x16;
LAB_001057bf:
          iVar7 = DecodeContextMap(lVar14 << 6,param_1 + 0xc2,param_1 + 0xc4,param_1);
          if (iVar7 != 1) goto LAB_00105083;
          uVar15 = *(ulong *)(param_1 + 0x4e);
          *(undefined1 (*) [16])(param_1 + 0xcc) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(param_1 + 0xd0) = (undefined1  [16])0x0;
          if (uVar15 != 0) {
            uVar28 = 0;
            pbVar25 = *(byte **)(param_1 + 0xc4);
            do {
              bVar18 = *pbVar25;
              bVar16 = 0;
              pbVar23 = pbVar25;
              do {
                pbVar24 = pbVar23 + 4;
                bVar16 = bVar16 | *pbVar23 ^ bVar18 | pbVar23[1] ^ bVar18 | pbVar23[2] ^ bVar18 |
                                  pbVar23[3] ^ bVar18;
                pbVar23 = pbVar24;
              } while (pbVar24 != pbVar25 + 0x40);
              if (bVar16 == 0) {
                param_1[(uVar28 >> 5) + 0xcc] =
                     param_1[(uVar28 >> 5) + 0xcc] | 1 << ((byte)uVar28 & 0x1f);
              }
              uVar28 = uVar28 + 1;
              pbVar25 = pbVar25 + 0x40;
            } while (uVar28 != uVar15);
          }
          *param_1 = 0x17;
switchD_00105179_caseD_17:
          uVar15 = *(long *)(param_1 + 0x62) + 0x10;
          bVar18 = (byte)*(undefined8 *)(param_1 + 0x60);
          if ((*(byte *)(param_1 + 0xc1) & 0x20) == 0) {
            uVar15 = uVar15 + (uint)(0x18 << (bVar18 + 1 & 0x1f));
            uVar28 = uVar15;
          }
          else {
            uVar28 = 0x8000000c;
            uVar20 = (uint)*(long *)(param_1 + 0x62);
            if (uVar20 < 0x7ffffffc) {
              uVar28 = uVar15 & 0xffffffff;
              uVar10 = (0x7ffffffc - uVar20 >> (bVar18 & 0x1f)) + 4;
              uVar19 = uVar10 >> 1;
              uVar9 = 0x1f;
              if (uVar19 != 0) {
                for (; uVar19 >> uVar9 == 0; uVar9 = uVar9 - 1) {
                }
              }
              uVar9 = uVar10 >> (0x1fU - (char)(uVar9 ^ 0x1f) & 0x1f) & 1 |
                      (0x1e - (uVar9 ^ 0x1f)) * 2;
              if (uVar9 != 0) {
                uVar28 = (ulong)(((1 << (bVar18 & 0x1f)) - 1U | uVar9 - 1 << (bVar18 & 0x1f)) + 0x11
                                + uVar20);
              }
            }
            uVar15 = uVar15 + (uint)(0x3e << (bVar18 + 1 & 0x1f));
          }
          iVar7 = DecodeContextMap(*(long *)(param_1 + 0x52) * 4,param_1 + 100,param_1 + 0x66,
                                   param_1);
          if (iVar7 != 1) goto LAB_00105083;
          uVar20 = BrotliDecoderHuffmanTreeGroupInit
                             (param_1,param_1 + 0x2e,0x100,0x100,*(undefined8 *)(param_1 + 0xc2));
          uVar9 = BrotliDecoderHuffmanTreeGroupInit
                            (param_1,param_1 + 0x34,0x2c0,0x2c0,*(undefined8 *)(param_1 + 0x50));
          uVar10 = BrotliDecoderHuffmanTreeGroupInit(param_1,param_1 + 0x3a,uVar15,uVar28);
          if ((uVar20 & uVar10 & uVar9 & 1) == 0) {
            if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00106351;
            iVar7 = -0x16;
            lVar22 = lVar22 - *param_2;
            goto LAB_00105101;
          }
          param_1[0] = 0x18;
          param_1[1] = 0;
LAB_00105980:
          plVar32 = (long *)(param_1 + 0x2e);
LAB_00105983:
          if (param_1[0xd4] == 1) {
            iVar7 = param_1[0x29b];
          }
          else {
            lVar14 = plVar32[1];
            param_1[0x29b] = 0;
            param_1[0xd4] = 1;
            *(long *)(param_1 + 0x29c) = lVar14;
            iVar7 = 0;
          }
          if (iVar7 < (int)(uint)*(ushort *)((long)plVar32 + 0x14)) {
            lVar14 = *(long *)(param_1 + 0x29c);
            do {
              iVar7 = ReadHuffmanCode((short)plVar32[2],*(undefined2 *)((long)plVar32 + 0x12),lVar14
                                      ,&local_48);
              if (iVar7 != 1) goto LAB_00105083;
              iVar7 = param_1[0x29b];
              lVar14 = *(long *)(param_1 + 0x29c);
              *(long *)(*plVar32 + (long)iVar7 * 8) = lVar14;
              iVar7 = iVar7 + 1;
              param_1[0x29b] = iVar7;
              lVar14 = lVar14 + local_48 * 4;
              uVar5 = *(ushort *)((long)plVar32 + 0x14);
              *(long *)(param_1 + 0x29c) = lVar14;
            } while (iVar7 < (int)(uint)uVar5);
          }
          param_1[0xd4] = 0;
          iVar7 = param_1[1];
          param_1[1] = iVar7 + 1;
          if (2 < iVar7 + 1) {
            *param_1 = 0x19;
switchD_00105179_caseD_19:
            uVar15 = *(ulong *)(param_1 + 0x56);
            pbVar25 = (byte *)(uVar15 * 0x40 + *(long *)(param_1 + 0xc4));
            uVar20 = param_1[(uVar15 >> 5) + 0xcc];
            *(byte **)(param_1 + 0x2a) = pbVar25;
            param_1[0x44] = uVar20 >> ((byte)uVar15 & 0x1f) & 1;
            *(undefined8 *)(param_1 + 0x68) =
                 *(undefined8 *)(*(long *)(param_1 + 0x2e) + (ulong)*pbVar25 * 8);
            *(undefined **)(param_1 + 0x28) =
                 &_kBrotliContextLookupTable +
                 ((*(byte *)(*(long *)(param_1 + 0xc6) + uVar15) & 3) << 9);
            *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_1 + 0x66);
            *(undefined8 *)(param_1 + 0x26) = **(undefined8 **)(param_1 + 0x34);
            iVar7 = BrotliEnsureRingBuffer(param_1);
            if (iVar7 == 0) {
              iVar7 = -0x1b;
              goto LAB_001054df;
            }
            uVar11 = *(undefined8 *)(param_1 + 0x60);
            uVar5 = *(ushort *)((long)param_1 + 0xfa);
            __n = *(size_t *)(param_1 + 0x62);
            uVar15 = (ulong)(uint)(1 << ((byte)uVar11 & 0x1f));
            if (__n == 0) {
              uVar28 = 0x10;
            }
            else {
              memset(param_1 + 0xd8,0,__n);
              sVar13 = 0;
              do {
                sVar13 = sVar13 + 1;
                *(size_t *)(param_1 + sVar13 * 2 + 0x17a) = sVar13;
              } while (__n != sVar13);
              uVar28 = __n + 0x10;
            }
            if (uVar28 < uVar5) {
              uVar33 = 0;
              lVar14 = uVar28 * 8;
              lVar29 = 1;
              do {
                lVar27 = ((uVar33 + 2 << ((byte)lVar29 & 0x3f)) + -4 << ((byte)uVar11 & 0x3f)) +
                         __n + 1;
                memset((void *)((long)param_1 + uVar28 + 0x350),(uint)lVar29 & 0xff,uVar15);
                lVar3 = uVar15 + lVar27;
                lVar2 = lVar27 * -8;
                do {
                  *(long *)((long)param_1 + lVar27 * 8 + lVar14 + lVar2 + 0x570) = lVar27;
                  lVar27 = lVar27 + 1;
                } while (lVar27 != lVar3);
                uVar28 = uVar28 + uVar15;
                lVar29 = lVar29 + uVar33;
                uVar33 = uVar33 ^ 1;
                lVar14 = lVar14 + uVar15 * 8;
              } while (uVar28 < uVar5);
            }
            *param_1 = 7;
switchD_00105179_caseD_7:
            iVar7 = ProcessCommands(param_1);
            if (iVar7 == 2) {
              iVar7 = SafeProcessCommands(param_1);
              goto LAB_0010507a;
            }
            if (iVar7 != 1) goto LAB_001054df;
          }
          goto switchD_00105179_default;
        case 7:
        case 8:
        case 9:
        case 10:
          goto switchD_00105179_caseD_7;
        case 0xb:
          iVar7 = CopyUncompressedBlockToOutput(param_4,param_5,param_6,param_1);
          goto joined_r0x00105d5b;
        case 0xc:
          iVar7 = SkipMetadataBlock(param_1);
joined_r0x00105d5b:
          if (iVar7 == 1) goto LAB_001052da;
          goto LAB_00105083;
        case 0xd:
        case 0xf:
        case 0x10:
          iVar7 = WriteRingBuffer(param_1,param_4,param_5,param_6);
          if (iVar7 != 1) goto LAB_00105083;
          WrapRingBuffer(param_1);
          if (param_1[0x19] == 1 << ((byte)(*(ushort *)(param_1 + 0xc1) >> 6) & 0x1f)) {
            param_1[0x18] = param_1[0x17];
          }
          if (*param_1 != 0xf) {
            if (*param_1 == 0x10) {
              *param_1 = 10;
            }
            else if (param_1[1] == 0) {
              if (param_1[0x21] == 0) goto LAB_001052da;
              *param_1 = 9;
            }
            else {
              *param_1 = 8;
            }
            goto switchD_00105179_default;
          }
          lVar14 = *(long *)(param_1 + 0xca);
          if ((lVar14 != 0) && (*(int *)(lVar14 + 0x10) != *(int *)(lVar14 + 0x14))) {
            iVar8 = CopyFromCompoundDictionary(param_1,param_1[0x16]);
            iVar7 = param_1[0x16];
            param_1[0x16] = iVar8 + iVar7;
            if (param_1[0x19] <= iVar8 + iVar7) goto switchD_00105179_default;
          }
          if (param_1[0x21] != 0) {
            *param_1 = 7;
            goto switchD_00105179_default;
          }
          goto LAB_001052da;
        case 0xe:
          if (param_1[0x21] < 0) {
            iVar7 = -10;
            goto LAB_001054df;
          }
          BrotliDecoderStateCleanupAfterMetablock(param_1);
          if ((*(byte *)(param_1 + 0xc1) & 1) != 0) {
            uVar15 = *(ulong *)(param_1 + 4);
            uVar20 = (uint)uVar15 & 7;
            if ((uVar15 & 7) == 0) {
              if (uVar15 < 0x40) {
                *(ulong *)(param_1 + 2) = *(ulong *)(param_1 + 2) & ~(-1L << ((byte)uVar15 & 0x3f));
LAB_00105b2e:
                if (*(long *)(param_1 + 0x14) == 0) {
                  lVar14 = *(long *)(param_1 + 6);
                  uVar28 = uVar15 >> 3;
                  if (uVar28 != 0) goto LAB_001062d7;
                  goto LAB_00105b49;
                }
              }
              else {
LAB_001062c1:
                if (*(long *)(param_1 + 0x14) == 0) {
                  lVar14 = *(long *)(param_1 + 6);
                  uVar28 = uVar15 >> 3;
LAB_001062d7:
                  lVar14 = lVar14 - uVar28;
LAB_00105b49:
                  uVar20 = (uint)uVar15 & 7;
                  *(long *)(param_1 + 6) = lVar14;
                  *(ulong *)(param_1 + 4) = (ulong)uVar20;
                  *(ulong *)(param_1 + 2) = *(ulong *)(param_1 + 2) & ~(-1L << (sbyte)uVar20);
                  *param_2 = *(long *)(param_1 + 10) - lVar14;
                  *param_3 = lVar14;
                }
              }
              *param_1 = 0x1a;
              goto switchD_00105179_caseD_1a;
            }
            uVar15 = uVar15 - uVar20;
            uVar28 = *(ulong *)(&kBrotliBitMask + (ulong)uVar20 * 8);
            *(ulong *)(param_1 + 4) = uVar15;
            uVar28 = uVar28 & *(ulong *)(param_1 + 2);
            uVar33 = *(ulong *)(param_1 + 2) >> (sbyte)uVar20;
            *(ulong *)(param_1 + 2) = uVar33;
            if (uVar15 < 0x40) {
              *(ulong *)(param_1 + 2) = ~(-1L << ((byte)uVar15 & 0x3f)) & uVar33;
              if (uVar28 == 0) goto LAB_00105b2e;
            }
            else if (uVar28 == 0) goto LAB_001062c1;
            iVar7 = -0xf;
            goto LAB_001054df;
          }
          *param_1 = 3;
          goto switchD_00105179_default;
        case 0x11:
          goto switchD_00105179_caseD_11;
        case 0x12:
          iVar8 = param_1[1];
          if (2 < iVar8) goto code_r0x001057a6;
          lVar14 = (long)iVar8 * 8 + 0x138;
          goto LAB_001055cd;
        case 0x13:
          goto switchD_00105179_caseD_13;
        case 0x14:
          goto switchD_00105179_caseD_14;
        case 0x15:
          goto switchD_00105179_caseD_15;
        case 0x16:
          lVar14 = *(long *)(param_1 + 0x4e);
          goto LAB_001057bf;
        case 0x17:
          goto switchD_00105179_caseD_17;
        case 0x18:
          iVar7 = param_1[1];
          if (iVar7 == 1) {
            plVar32 = (long *)(param_1 + 0x34);
            goto LAB_00105983;
          }
          if (iVar7 == 2) {
            plVar32 = (long *)(param_1 + 0x3a);
            goto LAB_00105983;
          }
          if (iVar7 == 0) goto LAB_00105980;
          if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00106351;
          iVar7 = -0x1f;
          lVar22 = lVar22 - *param_2;
          goto LAB_00105101;
        case 0x19:
          goto switchD_00105179_caseD_19;
        case 0x1a:
switchD_00105179_caseD_1a:
          if ((*(long *)(param_1 + 0x22) != 0) &&
             (iVar7 = WriteRingBuffer(param_1,param_4,param_5,param_6), iVar7 != 1))
          goto LAB_00105083;
          if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00106351;
          iVar7 = 1;
          lVar22 = lVar22 - *param_2;
          goto LAB_00105101;
        default:
          goto switchD_00105179_default;
        }
        param_1[0x17] = (1 << (bVar18 & 0x1f)) + -0x10;
        lVar14 = (**(code **)(param_1 + 0xc))(*(undefined8 *)(param_1 + 0x10),0x3030);
        *(long *)(param_1 + 0x40) = lVar14;
        if (lVar14 == 0) {
          iVar7 = -0x1e;
          goto LAB_001054df;
        }
        *param_1 = 3;
        *(long *)(param_1 + 0x42) = lVar14 + 0x1da0;
switchD_00105179_caseD_3:
        BrotliDecoderStateMetablockBegin(param_1);
        *param_1 = 4;
switchD_00105179_caseD_4:
        iVar7 = DecodeMetaBlockLength(param_1,piVar1);
        if (iVar7 != 1) goto LAB_00105083;
        bVar18 = *(byte *)(param_1 + 0xc1);
        uVar15 = (ulong)bVar18;
        if ((bVar18 & 6) == 0) {
          if (param_1[0x21] != 0) {
            BrotliCalculateRingBufferSize();
switchD_00105179_caseD_11:
            param_1[0xd8] = 0;
            param_1[0xd9] = 0;
            iVar8 = 0;
            param_1[0xd6] = 0;
            param_1[0xd4] = 0;
            param_1[0xd5] = 0;
            param_1[0] = 0x12;
            param_1[1] = 0;
            *(int **)(param_1 + 0x104) = param_1 + 0x10e;
            lVar14 = 0x138;
LAB_001055cd:
            iVar7 = DecodeVarLenUint8(param_1,piVar1,(long)param_1 + lVar14);
            if (iVar7 != 1) goto LAB_00105083;
            lVar14 = *(long *)(param_1 + ((long)iVar8 + 0x26) * 2 + 2);
            *(ulong *)(param_1 + ((long)iVar8 + 0x26) * 2 + 2) = lVar14 + 1U;
            if (lVar14 + 1U < 2) {
              param_1[1] = iVar8 + 1;
            }
            else {
              *param_1 = 0x13;
switchD_00105179_caseD_13:
              iVar7 = ReadHuffmanCode(*(long *)(param_1 + (long)param_1[1] * 2 + 0x4e) + 2,
                                      *(long *)(param_1 + (long)param_1[1] * 2 + 0x4e) + 2,
                                      *(long *)(param_1 + 0x40) + (long)(param_1[1] * 0x278) * 4,0);
              if (iVar7 != 1) goto LAB_00105083;
              *param_1 = 0x14;
switchD_00105179_caseD_14:
              iVar7 = ReadHuffmanCode(0x1a,0x1a,
                                      *(long *)(param_1 + 0x42) + (long)(param_1[1] * 0x18c) * 4,0);
              if (iVar7 != 1) goto LAB_00105083;
              *param_1 = 0x15;
switchD_00105179_caseD_15:
              iVar7 = param_1[1];
              uVar15 = *(ulong *)(param_1 + 4);
              if (param_1[0xbf] == 0) {
                lVar14 = *(long *)(param_1 + 0x42) + (long)(iVar7 * 0x18c) * 4;
                if (uVar15 < 0xf) {
                  pbVar25 = *(byte **)(param_1 + 6);
                  do {
                    if (*(byte **)(param_1 + 10) == pbVar25) {
                      iVar8 = SafeDecodeSymbol(lVar14,piVar1,&local_48);
                      if (iVar8 == 0) goto LAB_0010508c;
                      uVar15 = *(ulong *)(param_1 + 4);
                      goto LAB_00105720;
                    }
                    bVar18 = *pbVar25;
                    pbVar25 = pbVar25 + 1;
                    *(byte **)(param_1 + 6) = pbVar25;
                    bVar16 = (byte)uVar15;
                    uVar15 = uVar15 + 8;
                    uVar28 = (ulong)bVar18 << (bVar16 & 0x3f) | *(ulong *)(param_1 + 2);
                    *(ulong *)(param_1 + 2) = uVar28;
                    *(ulong *)(param_1 + 4) = uVar15;
                  } while (uVar15 < 0xf);
                }
                else {
                  uVar28 = *(ulong *)(param_1 + 2);
                }
                pbVar25 = (byte *)(lVar14 + (uVar28 & 0xff) * 4);
                bVar18 = *pbVar25;
                uVar33 = uVar28;
                if (8 < bVar18) {
                  uVar33 = uVar28 >> 8;
                  uVar15 = uVar15 - 8;
                  pbVar25 = pbVar25 + ((ulong)((uint)*(undefined8 *)
                                                      (&kBrotliBitMask + (ulong)(bVar18 - 8) * 8) &
                                               (uint)(uVar28 >> 8) & 0x7f) +
                                      (ulong)*(ushort *)(pbVar25 + 2)) * 4;
                  bVar18 = *pbVar25;
                }
                local_48 = (ulong)*(ushort *)(pbVar25 + 2);
                uVar15 = uVar15 - bVar18;
                *(ulong *)(param_1 + 2) = uVar33 >> (bVar18 & 0x3f);
                *(ulong *)(param_1 + 4) = uVar15;
              }
              else {
                local_48 = *(ulong *)(param_1 + 0x4c);
              }
LAB_00105720:
              bVar18 = (&DAT_00109012)[local_48 * 4];
              uVar28 = (ulong)bVar18;
              uVar5 = *(ushort *)(&_kBrotliPrefixCodeRanges + local_48 * 4);
              if (uVar15 < uVar28) {
                pbVar25 = *(byte **)(param_1 + 6);
                do {
                  if (*(byte **)(param_1 + 10) == pbVar25) {
                    *(ulong *)(param_1 + 0x4c) = local_48;
                    param_1[0xbf] = 1;
                    goto LAB_0010508c;
                  }
                  bVar16 = *pbVar25;
                  pbVar25 = pbVar25 + 1;
                  *(byte **)(param_1 + 6) = pbVar25;
                  bVar17 = (byte)uVar15;
                  uVar15 = uVar15 + 8;
                  uVar33 = (ulong)bVar16 << (bVar17 & 0x3f) | *(ulong *)(param_1 + 2);
                  *(ulong *)(param_1 + 2) = uVar33;
                  *(ulong *)(param_1 + 4) = uVar15;
                } while (uVar15 < uVar28);
              }
              else {
                uVar33 = *(ulong *)(param_1 + 2);
              }
              uVar6 = *(ulong *)(&kBrotliBitMask + uVar28 * 8);
              *(ulong *)(param_1 + 4) = uVar15 - uVar28;
              *(ulong *)(param_1 + 2) = uVar33 >> (bVar18 & 0x3f);
              *(ulong *)(param_1 + (long)iVar7 * 2 + 0x46) = (ulong)uVar5 + (uVar6 & uVar33);
              param_1[0xbf] = 0;
              param_1[1] = iVar7 + 1;
              *param_1 = 0x12;
            }
            goto switchD_00105179_default;
          }
        }
        else {
          uVar28 = *(ulong *)(param_1 + 4);
          uVar20 = (uint)uVar28 & 7;
          if ((uVar28 & 7) == 0) {
            if (uVar28 < 0x40) {
              *(ulong *)(param_1 + 2) = *(ulong *)(param_1 + 2) & ~(-1L << ((byte)uVar28 & 0x3f));
            }
          }
          else {
            uVar33 = *(ulong *)(param_1 + 2);
            uVar28 = uVar28 - uVar20;
            uVar6 = *(ulong *)(&kBrotliBitMask + (ulong)uVar20 * 8);
            uVar26 = uVar33 >> (sbyte)uVar20;
            if (uVar28 < 0x40) {
              uVar26 = uVar26 & ~(-1L << ((byte)uVar28 & 0x3f));
            }
            *(ulong *)(param_1 + 4) = uVar28;
            *(ulong *)(param_1 + 2) = uVar26;
            if ((uVar6 & uVar33) != 0) {
              iVar7 = -0xe;
              goto LAB_001054df;
            }
          }
          if ((bVar18 & 4) != 0) {
            *param_1 = 0xc;
            if (*(code **)(param_1 + 0xb4) != (code *)0x0) {
              (**(code **)(param_1 + 0xb4))(*(undefined8 *)(param_1 + 0xb8),(long)param_1[0x21]);
            }
            goto switchD_00105179_default;
          }
          if (param_1[0x21] != 0) {
            BrotliCalculateRingBufferSize(param_1);
            if ((uVar15 & 2) == 0) goto switchD_00105179_caseD_11;
            *param_1 = 0xb;
            goto switchD_00105179_default;
          }
        }
LAB_001052da:
        *param_1 = 0xe;
        goto switchD_00105179_default;
      }
      lVar29 = *param_2;
    }
    else {
LAB_001054df:
      if (*(long *)(param_1 + 0x14) == 0) {
        uVar15 = *(ulong *)(param_1 + 4) >> 3;
        lVar14 = *(long *)(param_1 + 6);
        if (uVar15 != 0) {
          lVar14 = *(long *)(param_1 + 6) - uVar15;
        }
        uVar20 = (uint)*(ulong *)(param_1 + 4) & 7;
        *(ulong *)(param_1 + 4) = (ulong)uVar20;
        *(ulong *)(param_1 + 2) = *(ulong *)(param_1 + 2) & ~(-1L << (sbyte)uVar20);
        *(long *)(param_1 + 6) = lVar14;
        lVar29 = *(long *)(param_1 + 10) - lVar14;
        *param_2 = lVar29;
        *param_3 = lVar14;
      }
      else {
        param_1[0x14] = 0;
        param_1[0x15] = 0;
        lVar29 = *param_2;
      }
    }
LAB_001050e7:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      lVar22 = lVar22 - lVar29;
LAB_00105101:
      uVar11 = SaveErrorCode(param_1,iVar7,lVar22);
      return uVar11;
    }
  }
LAB_00106351:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x001057a6:
  *param_1 = 5;
  goto switchD_00105179_default;
switchD_00105179_caseD_5:
  uVar15 = *(ulong *)(param_1 + 4);
  if (uVar15 < 6) {
    pbVar25 = *(byte **)(param_1 + 6);
    if (pbVar25 == *(byte **)(param_1 + 10)) goto LAB_0010508c;
    bVar18 = *pbVar25;
    *(byte **)(param_1 + 6) = pbVar25 + 1;
    bVar16 = (byte)uVar15;
    uVar15 = uVar15 + 8;
    uVar28 = (ulong)bVar18 << (bVar16 & 0x3f) | *(ulong *)(param_1 + 2);
  }
  else {
    uVar28 = *(ulong *)(param_1 + 2);
  }
  *(ulong *)(param_1 + 4) = uVar15 - 6;
  uVar20 = (uint)uVar28 & 3;
  *(ulong *)(param_1 + 2) = uVar28 >> 6;
  *(ulong *)(param_1 + 0x60) = (ulong)uVar20;
  *(ulong *)(param_1 + 0x62) = (ulong)((uint)(uVar28 >> 2) & 0xf) << (sbyte)uVar20;
  lVar14 = (**(code **)(param_1 + 0xc))
                     (*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x4e));
  *(long *)(param_1 + 0xc6) = lVar14;
  if (lVar14 != 0) {
    param_1[0] = 6;
    param_1[1] = 0;
    iVar7 = 0;
    goto LAB_00105cca;
  }
  iVar7 = -0x15;
  goto LAB_001054df;
}



bool BrotliDecoderDecompress
               (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  long in_FS_OFFSET;
  bool bVar2;
  undefined8 local_16c0;
  undefined8 local_16b8;
  undefined8 local_16b0;
  undefined8 local_16a8;
  undefined8 local_16a0;
  undefined1 local_1698 [5752];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_16a8 = *param_3;
  local_16c0 = 0;
  local_16b8 = param_1;
  local_16b0 = param_2;
  local_16a0 = param_4;
  iVar1 = BrotliDecoderStateInit(local_1698,0,0,0);
  bVar2 = false;
  if (iVar1 != 0) {
    iVar1 = BrotliDecoderDecompressStream
                      (local_1698,&local_16b8,&local_16b0,&local_16a8,&local_16a0,&local_16c0);
    *param_3 = local_16c0;
    BrotliDecoderStateCleanup(local_1698);
    bVar2 = iVar1 == 1;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool BrotliDecoderHasMoreOutput(long param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if ((-1 < *(int *)(param_1 + 0x80)) && (*(long *)(param_1 + 0x88) != 0)) {
    bVar1 = (long)*(int *)(param_1 + 100) * *(long *)(param_1 + 0x1a8) +
            (long)*(int *)(param_1 + 0x58) != *(long *)(param_1 + 0x1b0);
  }
  return bVar1;
}



undefined8 BrotliDecoderTakeOutput(long param_1,long *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined8 local_30;
  long local_28;
  long local_20;
  
  lVar3 = *param_2;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = 0;
  if (lVar3 == 0) {
    lVar3 = 0x1000000;
  }
  local_28 = lVar3;
  if ((*(long *)(param_1 + 0x88) != 0) && (-1 < *(int *)(param_1 + 0x80))) {
    WrapRingBuffer();
    uVar1 = WriteRingBuffer(param_1,&local_28,&local_30,0,1);
    if ((uVar1 & 0xfffffffd) == 1) {
      *param_2 = lVar3 - local_28;
      uVar2 = local_30;
      goto LAB_0010656e;
    }
    if ((int)uVar1 < 0) {
      SaveErrorCode(param_1,uVar1,0);
    }
  }
  *param_2 = 0;
  uVar2 = 0;
LAB_0010656e:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool BrotliDecoderIsUsed(int *param_1)

{
  bool bVar1;
  
  bVar1 = true;
  if (*param_1 == 0) {
    bVar1 = *(long *)(param_1 + 4) != 0;
  }
  return bVar1;
}



bool BrotliDecoderIsFinished(int *param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (((*param_1 == 0x1a) && (bVar1 = true, -1 < param_1[0x20])) && (*(long *)(param_1 + 0x22) != 0)
     ) {
    return (long)param_1[0x19] * *(long *)(param_1 + 0x6a) + (long)param_1[0x16] ==
           *(long *)(param_1 + 0x6c);
  }
  return bVar1;
}



undefined4 BrotliDecoderGetErrorCode(long param_1)

{
  return *(undefined4 *)(param_1 + 0x80);
}



char * BrotliDecoderErrorString(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return "_NO_ERROR";
  case 1:
    return "_SUCCESS";
  case 2:
    return "_NEEDS_MORE_INPUT";
  case 3:
    return "_NEEDS_MORE_OUTPUT";
  case 0xffffffe1:
    return "_ERROR_UNREACHABLE";
  case 0xffffffe2:
    return "_ERROR_ALLOC_BLOCK_TYPE_TREES";
  default:
    return "INVALID";
  case 0xffffffe5:
    return "_ERROR_ALLOC_RING_BUFFER_2";
  case 0xffffffe6:
    return "_ERROR_ALLOC_RING_BUFFER_1";
  case 0xffffffe7:
    return "_ERROR_ALLOC_CONTEXT_MAP";
  case 0xffffffea:
    return "_ERROR_ALLOC_TREE_GROUPS";
  case 0xffffffeb:
    return "_ERROR_ALLOC_CONTEXT_MODES";
  case 0xffffffec:
    return "_ERROR_INVALID_ARGUMENTS";
  case 0xffffffed:
    return "_ERROR_DICTIONARY_NOT_SET";
  case 0xffffffee:
    return "_ERROR_COMPOUND_DICTIONARY";
  case 0xfffffff0:
    return "_ERROR_FORMAT_DISTANCE";
  case 0xfffffff1:
    return "_ERROR_FORMAT_PADDING_2";
  case 0xfffffff2:
    return "_ERROR_FORMAT_PADDING_1";
  case 0xfffffff3:
    return "_ERROR_FORMAT_WINDOW_BITS";
  case 0xfffffff4:
    return "_ERROR_FORMAT_DICTIONARY";
  case 0xfffffff5:
    return "_ERROR_FORMAT_TRANSFORM";
  case 0xfffffff6:
    return "_ERROR_FORMAT_BLOCK_LENGTH_2";
  case 0xfffffff7:
    return "_ERROR_FORMAT_BLOCK_LENGTH_1";
  case 0xfffffff8:
    return "_ERROR_FORMAT_CONTEXT_MAP_REPEAT";
  case 0xfffffff9:
    return "_ERROR_FORMAT_HUFFMAN_SPACE";
  case 0xfffffffa:
    return "_ERROR_FORMAT_CL_SPACE";
  case 0xfffffffb:
    return "_ERROR_FORMAT_SIMPLE_HUFFMAN_SAME";
  case 0xfffffffc:
    return "_ERROR_FORMAT_SIMPLE_HUFFMAN_ALPHABET";
  case 0xfffffffd:
    return "_ERROR_FORMAT_EXUBERANT_META_NIBBLE";
  case 0xfffffffe:
    return "_ERROR_FORMAT_RESERVED";
  case 0xffffffff:
    return "_ERROR_FORMAT_EXUBERANT_NIBBLE";
  }
}



undefined8 BrotliDecoderVersion(void)

{
  return 0x1001000;
}



void BrotliDecoderSetMetadataCallbacks
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x2d0) = param_2;
  *(undefined8 *)(param_1 + 0x2d8) = param_3;
  *(undefined8 *)(param_1 + 0x2e0) = param_4;
  return;
}



undefined8 DecodeMetaBlockLength_cold(void)

{
  return 0xffffffe1;
}



void ReadHuffmanCode_cold(void)

{
  FUN_001013b3();
  return;
}



void DecodeContextMap_cold(void)

{
  FUN_00101ec0();
  return;
}


