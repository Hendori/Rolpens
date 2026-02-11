
void CRYPTO_ccm128_init(byte *param_1,int param_2,char param_3,undefined8 param_4,undefined8 param_5
                       )

{
  *(undefined8 *)(param_1 + 0x28) = param_5;
  *(undefined8 *)(param_1 + 0x30) = param_4;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *param_1 = (byte)((param_2 - 2U >> 1 & 7) << 3) | param_3 - 1U & 7;
  return;
}



undefined8 CRYPTO_ccm128_setiv(byte *param_1,byte *param_2,ulong param_3,undefined8 param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  
  bVar1 = *param_1;
  uVar3 = 0xe - (bVar1 & 7);
  uVar4 = (ulong)uVar3;
  if (param_3 < uVar4) {
    return 0xffffffff;
  }
  if ((bVar1 & 7) < 3) {
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  else {
    uVar2 = (uint)((ulong)param_4 >> 0x20);
    *(uint *)(param_1 + 8) =
         (((uVar2 & 0xff) << 8 | uVar2 >> 8 & 0xff) << 8 | (ushort)((ulong)param_4 >> 0x30) & 0xff)
         << 8 | (uint)(byte)((ulong)param_4 >> 0x38);
  }
  uVar2 = (uint)param_4;
  *(uint *)(param_1 + 0xc) =
       uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  *param_1 = bVar1 & 0xbf;
  if (uVar3 < 8) {
    if ((uVar3 & 4) == 0) {
      if ((uVar3 != 0) && (param_1[1] = *param_2, (uVar3 & 2) != 0)) {
        *(undefined2 *)(param_1 + (uVar4 - 1)) = *(undefined2 *)(param_2 + (uVar4 - 2));
      }
    }
    else {
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)param_2;
      *(undefined4 *)(param_1 + (uVar4 - 3)) = *(undefined4 *)(param_2 + (uVar4 - 4));
    }
  }
  else {
    *(undefined8 *)(param_1 + 1) = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + (uVar4 - 7)) = *(undefined8 *)(param_2 + (uVar4 - 8));
    uVar3 = uVar3 + (int)(param_1 + (1 - ((ulong)(param_1 + 9) & 0xfffffffffffffff8))) & 0xfffffff8;
    if (7 < uVar3) {
      uVar2 = 0;
      do {
        uVar4 = (ulong)uVar2;
        uVar2 = uVar2 + 8;
        *(undefined8 *)(((ulong)(param_1 + 9) & 0xfffffffffffffff8) + uVar4) =
             *(undefined8 *)
              (param_2 +
              (uVar4 - (long)(param_1 + (1 - ((ulong)(param_1 + 9) & 0xfffffffffffffff8)))));
      } while (uVar2 < uVar3);
      return 0;
    }
  }
  return 0;
}



void CRYPTO_ccm128_aad(byte *param_1,byte *param_2,ulong param_3)

{
  byte *pbVar1;
  ushort uVar2;
  code *pcVar3;
  ushort uVar4;
  uint uVar5;
  undefined8 uVar6;
  byte local_40;
  
  if (param_3 == 0) {
    return;
  }
  pbVar1 = param_1 + 0x10;
  *param_1 = *param_1 | 0x40;
  pcVar3 = *(code **)(param_1 + 0x28);
  (*pcVar3)(param_1,pbVar1,*(undefined8 *)(param_1 + 0x30));
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
  uVar4 = (ushort)param_3 << 8 | (ushort)param_3 >> 8;
  if (param_3 < 0xff00) {
    *(ushort *)(param_1 + 0x10) = *(ushort *)(param_1 + 0x10) ^ uVar4;
    uVar5 = 2;
  }
  else {
    uVar2 = *(ushort *)(param_1 + 0x14);
    local_40 = (byte)(param_3 >> 0x10);
    if (param_3 >> 0x20 == 0) {
      *(ushort *)(param_1 + 0x14) = uVar4 ^ uVar2;
      *(uint *)(param_1 + 0x10) =
           (((uint)(param_1[0x13] ^ local_40) << 8 |
            ((uint)param_1[0x12] ^ (uint)(param_3 >> 0x18)) & 0xff) << 8 |
           (uint)(param_1[0x11] ^ 0xfe)) << 8 | (uint)(byte)~param_1[0x10];
      uVar5 = 6;
    }
    else {
      *(ulong *)(param_1 + 0x10) =
           (((((ulong)CONCAT21(CONCAT11(local_40 ^ param_1[0x17],
                                        (byte)(param_3 >> 0x18) ^ param_1[0x16]),
                               (byte)(param_3 >> 0x20) ^ (byte)(uVar2 >> 8)) << 8 |
              (ulong)(((uint)(param_3 >> 0x28) ^ (uint)uVar2) & 0xff)) << 8 |
             (ulong)(((uint)param_1[0x13] ^ (uint)(ushort)(param_3 >> 0x30)) & 0xff)) << 8 |
            (ulong)(byte)(param_1[0x12] ^ (byte)(param_3 >> 0x38))) << 8 |
           (ulong)(byte)~param_1[0x11]) << 8 | (ulong)(byte)~param_1[0x10];
      *(ushort *)(param_1 + 0x18) = *(ushort *)(param_1 + 0x18) ^ uVar4;
      uVar5 = 10;
    }
  }
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  do {
    if ((0xf < uVar5) || (param_3 == 0)) {
      (*pcVar3)(pbVar1,pbVar1,uVar6);
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
      if (param_3 == 0) {
        return;
      }
      uVar6 = *(undefined8 *)(param_1 + 0x30);
      uVar5 = 0;
    }
    param_3 = param_3 - 1;
    param_1[(ulong)uVar5 + 0x10] = param_1[(ulong)uVar5 + 0x10] ^ *param_2;
    param_2 = param_2 + 1;
    uVar5 = uVar5 + 1;
  } while( true );
}



undefined8 CRYPTO_ccm128_encrypt(byte *param_1,ulong *param_2,ulong *param_3,ulong param_4)

{
  long lVar1;
  byte *pbVar2;
  ulong *puVar3;
  byte bVar4;
  code *pcVar5;
  byte bVar6;
  ulong uVar7;
  undefined8 uVar8;
  byte *pbVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  ulong *puVar13;
  ulong *puVar14;
  long in_FS_OFFSET;
  ulong local_58 [5];
  
  pcVar5 = *(code **)(param_1 + 0x28);
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  bVar4 = *param_1;
  if ((bVar4 & 0x40) == 0) {
    (*pcVar5)(param_1,param_1 + 0x10,uVar8);
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
  }
  uVar10 = 0xf - (bVar4 & 7);
  *param_1 = bVar4 & 7;
  if (uVar10 == 0xf) {
    uVar7 = 0;
  }
  else {
    pbVar9 = param_1 + uVar10;
    uVar7 = 0;
    do {
      bVar6 = *pbVar9;
      *pbVar9 = 0;
      pbVar9 = pbVar9 + 1;
      uVar7 = (uVar7 | bVar6) << 8;
    } while (pbVar9 != param_1 + (ulong)((bVar4 & 7) - 1) + (ulong)uVar10 + 1);
  }
  bVar6 = param_1[0xf];
  param_1[0xf] = 1;
  if ((uVar7 | bVar6) == param_4) {
    uVar7 = (param_4 + 0xf >> 3 | 1) + *(long *)(param_1 + 0x20);
    *(ulong *)(param_1 + 0x20) = uVar7;
    if (uVar7 < 0x2000000000000001) {
      if (0xf < param_4) {
        lVar1 = (param_4 - 0x10 & 0xfffffffffffffff0) + 0x10;
        puVar3 = (ulong *)((long)param_2 + lVar1);
        puVar13 = param_3;
        do {
          *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) ^ *param_2;
          *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) ^ param_2[1];
          (*pcVar5)(param_1 + 0x10,param_1 + 0x10,uVar8);
          (*pcVar5)(param_1,local_58,uVar8);
          pbVar9 = param_1;
          do {
            bVar6 = pbVar9[0xf];
            iVar11 = (int)pbVar9;
            pbVar9[0xf] = bVar6 + 1;
            pbVar9 = pbVar9 + -1;
          } while ((7 - (int)param_1) + iVar11 != 0 && (byte)(bVar6 + 1) == 0);
          puVar14 = param_2 + 2;
          *puVar13 = local_58[0] ^ *param_2;
          puVar13[1] = local_58[1] ^ param_2[1];
          puVar13 = puVar13 + 2;
          param_2 = puVar14;
        } while (puVar3 != puVar14);
        param_3 = (ulong *)((long)param_3 + lVar1);
        param_4 = (ulong)((uint)param_4 & 0xf);
        param_2 = puVar3;
      }
      if (param_4 != 0) {
        uVar7 = 0;
        do {
          param_1[uVar7 + 0x10] = param_1[uVar7 + 0x10] ^ *(byte *)((long)param_2 + uVar7);
          uVar7 = uVar7 + 1;
        } while (uVar7 != param_4);
        (*pcVar5)(param_1 + 0x10,param_1 + 0x10,uVar8);
        (*pcVar5)(param_1,local_58,uVar8);
        uVar7 = 0;
        do {
          *(byte *)((long)param_3 + uVar7) =
               *(byte *)((long)local_58 + uVar7) ^ *(byte *)((long)param_2 + uVar7);
          uVar7 = uVar7 + 1;
        } while (param_4 != uVar7);
      }
      pbVar9 = param_1 + uVar10;
      bVar6 = (bVar4 & 7) + 1;
      if (bVar6 < 8) {
        if ((bVar6 & 4) == 0) {
          if ((bVar6 != 0) && (*pbVar9 = 0, (bVar6 & 2) != 0)) {
            (pbVar9 + ((ulong)bVar6 - 2))[0] = 0;
            (pbVar9 + ((ulong)bVar6 - 2))[1] = 0;
          }
        }
        else {
          pbVar9[0] = 0;
          pbVar9[1] = 0;
          pbVar9[2] = 0;
          pbVar9[3] = 0;
          pbVar9 = pbVar9 + ((ulong)bVar6 - 4);
          pbVar9[0] = 0;
          pbVar9[1] = 0;
          pbVar9[2] = 0;
          pbVar9[3] = 0;
        }
      }
      else {
        pbVar9[0] = 0;
        pbVar9[1] = 0;
        pbVar9[2] = 0;
        pbVar9[3] = 0;
        pbVar9[4] = 0;
        pbVar9[5] = 0;
        pbVar9[6] = 0;
        pbVar9[7] = 0;
        pbVar2 = pbVar9 + ((ulong)bVar6 - 8);
        pbVar2[0] = 0;
        pbVar2[1] = 0;
        pbVar2[2] = 0;
        pbVar2[3] = 0;
        pbVar2[4] = 0;
        pbVar2[5] = 0;
        pbVar2[6] = 0;
        pbVar2[7] = 0;
        uVar10 = (uint)bVar6 + ((int)pbVar9 - (int)((ulong)(pbVar9 + 8) & 0xfffffffffffffff8)) &
                 0xfffffff8;
        if (7 < uVar10) {
          uVar12 = 0;
          do {
            uVar7 = (ulong)uVar12;
            uVar12 = uVar12 + 8;
            *(undefined8 *)(((ulong)(pbVar9 + 8) & 0xfffffffffffffff8) + uVar7) = 0;
          } while (uVar12 < uVar10);
        }
      }
      (*pcVar5)(param_1,local_58,uVar8);
      *param_1 = bVar4;
      uVar8 = 0;
      *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) ^ local_58[0];
      *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) ^ local_58[1];
    }
    else {
      uVar8 = 0xfffffffe;
    }
  }
  else {
    uVar8 = 0xffffffff;
  }
  if (local_58[3] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}



undefined8 CRYPTO_ccm128_decrypt(byte *param_1,ulong *param_2,ulong *param_3,ulong param_4)

{
  long lVar1;
  ulong *puVar2;
  byte *pbVar3;
  byte bVar4;
  code *pcVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  byte *pbVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  ulong *puVar13;
  ulong *puVar14;
  long in_FS_OFFSET;
  ulong local_58 [5];
  
  pcVar5 = *(code **)(param_1 + 0x28);
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  bVar4 = *param_1;
  if ((bVar4 & 0x40) == 0) {
    (*pcVar5)(param_1,param_1 + 0x10,uVar8);
  }
  uVar11 = 0xf - (bVar4 & 7);
  *param_1 = bVar4 & 7;
  if (uVar11 == 0xf) {
    uVar7 = 0;
  }
  else {
    pbVar9 = param_1 + uVar11;
    uVar7 = 0;
    do {
      bVar10 = *pbVar9;
      *pbVar9 = 0;
      pbVar9 = pbVar9 + 1;
      uVar7 = (uVar7 | bVar10) << 8;
    } while (pbVar9 != param_1 + (ulong)((bVar4 & 7) - 1) + (ulong)uVar11 + 1);
  }
  bVar10 = param_1[0xf];
  param_1[0xf] = 1;
  if ((uVar7 | bVar10) == param_4) {
    if (0xf < param_4) {
      lVar1 = (param_4 - 0x10 & 0xfffffffffffffff0) + 0x10;
      puVar2 = (ulong *)((long)param_2 + lVar1);
      puVar13 = param_3;
      do {
        (*pcVar5)(param_1,local_58,uVar8);
        pbVar9 = param_1;
        do {
          bVar10 = pbVar9[0xf];
          iVar6 = (int)pbVar9;
          pbVar9[0xf] = bVar10 + 1;
          pbVar9 = pbVar9 + -1;
        } while ((7 - (int)param_1) + iVar6 != 0 && (byte)(bVar10 + 1) == 0);
        uVar7 = *param_2;
        puVar14 = param_2 + 2;
        *puVar13 = local_58[0] ^ uVar7;
        *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) ^ local_58[0] ^ uVar7;
        uVar7 = param_2[1];
        puVar13[1] = local_58[1] ^ uVar7;
        *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) ^ local_58[1] ^ uVar7;
        (*pcVar5)(param_1 + 0x10,param_1 + 0x10,uVar8);
        puVar13 = puVar13 + 2;
        param_2 = puVar14;
      } while (puVar14 != puVar2);
      param_3 = (ulong *)((long)param_3 + lVar1);
      param_4 = (ulong)((uint)param_4 & 0xf);
      param_2 = puVar2;
    }
    if (param_4 != 0) {
      (*pcVar5)(param_1,local_58,uVar8);
      uVar7 = 0;
      do {
        bVar10 = *(byte *)((long)local_58 + uVar7) ^ *(byte *)((long)param_2 + uVar7);
        *(byte *)((long)param_3 + uVar7) = bVar10;
        param_1[uVar7 + 0x10] = param_1[uVar7 + 0x10] ^ bVar10;
        uVar7 = uVar7 + 1;
      } while (param_4 != uVar7);
      (*pcVar5)(param_1 + 0x10,param_1 + 0x10,uVar8);
    }
    bVar10 = (bVar4 & 7) + 1;
    pbVar9 = param_1 + uVar11;
    if (bVar10 < 8) {
      if ((bVar10 & 4) == 0) {
        if ((bVar10 != 0) && (*pbVar9 = 0, (bVar10 & 2) != 0)) {
          (pbVar9 + ((ulong)bVar10 - 2))[0] = 0;
          (pbVar9 + ((ulong)bVar10 - 2))[1] = 0;
        }
      }
      else {
        pbVar9[0] = 0;
        pbVar9[1] = 0;
        pbVar9[2] = 0;
        pbVar9[3] = 0;
        pbVar9 = pbVar9 + ((ulong)bVar10 - 4);
        pbVar9[0] = 0;
        pbVar9[1] = 0;
        pbVar9[2] = 0;
        pbVar9[3] = 0;
      }
    }
    else {
      pbVar9[0] = 0;
      pbVar9[1] = 0;
      pbVar9[2] = 0;
      pbVar9[3] = 0;
      pbVar9[4] = 0;
      pbVar9[5] = 0;
      pbVar9[6] = 0;
      pbVar9[7] = 0;
      pbVar3 = pbVar9 + ((ulong)bVar10 - 8);
      pbVar3[0] = 0;
      pbVar3[1] = 0;
      pbVar3[2] = 0;
      pbVar3[3] = 0;
      pbVar3[4] = 0;
      pbVar3[5] = 0;
      pbVar3[6] = 0;
      pbVar3[7] = 0;
      uVar11 = (uint)bVar10 + ((int)pbVar9 - (int)((ulong)(pbVar9 + 8) & 0xfffffffffffffff8)) &
               0xfffffff8;
      if (7 < uVar11) {
        uVar12 = 0;
        do {
          uVar7 = (ulong)uVar12;
          uVar12 = uVar12 + 8;
          *(undefined8 *)(((ulong)(pbVar9 + 8) & 0xfffffffffffffff8) + uVar7) = 0;
        } while (uVar12 < uVar11);
      }
    }
    (*pcVar5)(param_1,local_58,uVar8);
    *param_1 = bVar4;
    uVar8 = 0;
    *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) ^ local_58[0];
    *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) ^ local_58[1];
  }
  else {
    uVar8 = 0xffffffff;
  }
  if (local_58[3] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}



undefined8
CRYPTO_ccm128_encrypt_ccm64(byte *param_1,long param_2,long param_3,ulong param_4,code *param_5)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  code *pcVar4;
  uint uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  ulong uVar10;
  uint uVar11;
  long in_FS_OFFSET;
  bool bVar12;
  ulong local_58 [5];
  
  bVar2 = *param_1;
  pcVar4 = *(code **)(param_1 + 0x28);
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  if ((bVar2 & 0x40) == 0) {
    (*pcVar4)(param_1,param_1 + 0x10);
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
  }
  uVar11 = 0xf - (bVar2 & 7);
  *param_1 = bVar2 & 7;
  if (uVar11 == 0xf) {
    uVar7 = 0;
  }
  else {
    pbVar9 = param_1 + uVar11;
    uVar7 = 0;
    do {
      bVar3 = *pbVar9;
      *pbVar9 = 0;
      pbVar9 = pbVar9 + 1;
      uVar7 = (uVar7 | bVar3) << 8;
    } while (param_1 + (ulong)((bVar2 & 7) - 1) + (ulong)uVar11 + 1 != pbVar9);
  }
  bVar3 = param_1[0xf];
  param_1[0xf] = 1;
  if ((uVar7 | bVar3) != param_4) {
    uVar6 = 0xffffffff;
    goto LAB_00100b8a;
  }
  uVar7 = (param_4 + 0xf >> 3 | 1) + *(long *)(param_1 + 0x20);
  *(ulong *)(param_1 + 0x20) = uVar7;
  if (0x2000000000000000 < uVar7) {
    uVar6 = 0xfffffffe;
    goto LAB_00100b8a;
  }
  if (param_4 < 0x10) {
    if (param_4 != 0) goto LAB_00100bbe;
  }
  else {
    uVar8 = param_4 >> 4;
    (*param_5)(param_2,param_3,uVar8,uVar6,param_1);
    uVar7 = param_4 & 0xfffffffffffffff0;
    param_2 = param_2 + uVar7;
    param_3 = param_3 + uVar7;
    param_4 = param_4 - uVar7;
    if (param_4 != 0) {
      pbVar9 = param_1 + 0xf;
      uVar7 = 0;
      do {
        uVar10 = uVar8 & 0xff;
        uVar8 = uVar8 >> 8;
        uVar7 = uVar7 + *pbVar9 + uVar10;
        *pbVar9 = (byte)uVar7;
        uVar7 = uVar7 >> 8;
        if (param_1 + 8 == pbVar9) break;
        pbVar9 = pbVar9 + -1;
      } while (uVar7 != 0 || uVar8 != 0);
LAB_00100bbe:
      uVar7 = 0;
      do {
        uVar8 = uVar7;
        param_1[uVar8 + 0x10] = param_1[uVar8 + 0x10] ^ *(byte *)(param_2 + uVar8);
        uVar7 = uVar8 + 1;
      } while (uVar8 + 1 != param_4);
      (*pcVar4)(param_1 + 0x10,param_1 + 0x10,uVar6);
      (*pcVar4)(param_1,local_58,uVar6);
      uVar7 = 0;
      do {
        *(byte *)(param_3 + uVar7) = *(byte *)((long)local_58 + uVar7) ^ *(byte *)(param_2 + uVar7);
        bVar12 = uVar7 != uVar8;
        uVar7 = uVar7 + 1;
      } while (bVar12);
    }
  }
  bVar3 = (bVar2 & 7) + 1;
  pbVar9 = param_1 + uVar11;
  if (bVar3 < 8) {
    if ((bVar3 & 4) == 0) {
      if ((bVar3 != 0) && (*pbVar9 = 0, (bVar3 & 2) != 0)) {
        (pbVar9 + ((ulong)bVar3 - 2))[0] = 0;
        (pbVar9 + ((ulong)bVar3 - 2))[1] = 0;
      }
    }
    else {
      pbVar9[0] = 0;
      pbVar9[1] = 0;
      pbVar9[2] = 0;
      pbVar9[3] = 0;
      pbVar9 = pbVar9 + ((ulong)bVar3 - 4);
      pbVar9[0] = 0;
      pbVar9[1] = 0;
      pbVar9[2] = 0;
      pbVar9[3] = 0;
    }
  }
  else {
    pbVar9[0] = 0;
    pbVar9[1] = 0;
    pbVar9[2] = 0;
    pbVar9[3] = 0;
    pbVar9[4] = 0;
    pbVar9[5] = 0;
    pbVar9[6] = 0;
    pbVar9[7] = 0;
    pbVar1 = pbVar9 + ((ulong)bVar3 - 8);
    pbVar1[0] = 0;
    pbVar1[1] = 0;
    pbVar1[2] = 0;
    pbVar1[3] = 0;
    pbVar1[4] = 0;
    pbVar1[5] = 0;
    pbVar1[6] = 0;
    pbVar1[7] = 0;
    uVar11 = (uint)bVar3 + ((int)pbVar9 - (int)((ulong)(pbVar9 + 8) & 0xfffffffffffffff8)) &
             0xfffffff8;
    if (7 < uVar11) {
      uVar5 = 0;
      do {
        uVar7 = (ulong)uVar5;
        uVar5 = uVar5 + 8;
        *(undefined8 *)(((ulong)(pbVar9 + 8) & 0xfffffffffffffff8) + uVar7) = 0;
      } while (uVar5 < uVar11);
    }
  }
  (*pcVar4)(param_1,local_58,uVar6);
  *param_1 = bVar2;
  uVar6 = 0;
  *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) ^ local_58[0];
  *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) ^ local_58[1];
LAB_00100b8a:
  if (local_58[3] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}



undefined8
CRYPTO_ccm128_decrypt_ccm64(byte *param_1,long param_2,long param_3,ulong param_4,code *param_5)

{
  byte *pbVar1;
  byte bVar2;
  code *pcVar3;
  byte bVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  byte *pbVar10;
  ulong uVar11;
  long in_FS_OFFSET;
  byte local_78;
  ulong local_58 [5];
  
  bVar2 = *param_1;
  pcVar3 = *(code **)(param_1 + 0x28);
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  if ((bVar2 & 0x40) == 0) {
    (*pcVar3)(param_1,param_1 + 0x10);
  }
  uVar9 = 0xf - (bVar2 & 7);
  local_78 = bVar2 & 7;
  *param_1 = bVar2 & 7;
  if (uVar9 == 0xf) {
    uVar7 = 0;
  }
  else {
    pbVar10 = param_1 + uVar9;
    uVar7 = 0;
    do {
      bVar4 = *pbVar10;
      *pbVar10 = 0;
      pbVar10 = pbVar10 + 1;
      uVar7 = (uVar7 | bVar4) << 8;
    } while (pbVar10 != param_1 + (ulong)((bVar2 & 7) - 1) + (ulong)uVar9 + 1);
  }
  bVar4 = param_1[0xf];
  param_1[0xf] = 1;
  if ((uVar7 | bVar4) != param_4) {
    uVar5 = 0xffffffff;
    goto LAB_00100ebd;
  }
  if (param_4 < 0x10) {
    if (param_4 != 0) goto LAB_00100ef2;
  }
  else {
    uVar8 = param_4 >> 4;
    (*param_5)(param_2,param_3,uVar8,uVar5);
    uVar7 = param_4 & 0xfffffffffffffff0;
    param_2 = param_2 + uVar7;
    param_3 = param_3 + uVar7;
    param_4 = param_4 - uVar7;
    if (param_4 != 0) {
      pbVar10 = param_1 + 0xf;
      uVar7 = 0;
      do {
        uVar11 = uVar8 & 0xff;
        uVar8 = uVar8 >> 8;
        uVar7 = uVar7 + *pbVar10 + uVar11;
        *pbVar10 = (byte)uVar7;
        uVar7 = uVar7 >> 8;
        if (param_1 + 8 == pbVar10) break;
        pbVar10 = pbVar10 + -1;
      } while (uVar7 != 0 || uVar8 != 0);
LAB_00100ef2:
      (*pcVar3)(param_1,local_58,uVar5);
      uVar7 = 0;
      do {
        bVar4 = *(byte *)((long)local_58 + uVar7) ^ *(byte *)(param_2 + uVar7);
        *(byte *)(param_3 + uVar7) = bVar4;
        param_1[uVar7 + 0x10] = param_1[uVar7 + 0x10] ^ bVar4;
        uVar7 = uVar7 + 1;
      } while (uVar7 != param_4);
      (*pcVar3)(param_1 + 0x10,param_1 + 0x10,uVar5);
    }
  }
  pbVar10 = param_1 + uVar9;
  local_78 = local_78 + 1;
  if (local_78 < 8) {
    if ((local_78 & 4) == 0) {
      if ((local_78 != 0) && (*pbVar10 = 0, (local_78 & 2) != 0)) {
        (pbVar10 + ((ulong)local_78 - 2))[0] = 0;
        (pbVar10 + ((ulong)local_78 - 2))[1] = 0;
      }
    }
    else {
      pbVar10[0] = 0;
      pbVar10[1] = 0;
      pbVar10[2] = 0;
      pbVar10[3] = 0;
      pbVar10 = pbVar10 + ((ulong)local_78 - 4);
      pbVar10[0] = 0;
      pbVar10[1] = 0;
      pbVar10[2] = 0;
      pbVar10[3] = 0;
    }
  }
  else {
    pbVar10[0] = 0;
    pbVar10[1] = 0;
    pbVar10[2] = 0;
    pbVar10[3] = 0;
    pbVar10[4] = 0;
    pbVar10[5] = 0;
    pbVar10[6] = 0;
    pbVar10[7] = 0;
    pbVar1 = pbVar10 + ((ulong)local_78 - 8);
    pbVar1[0] = 0;
    pbVar1[1] = 0;
    pbVar1[2] = 0;
    pbVar1[3] = 0;
    pbVar1[4] = 0;
    pbVar1[5] = 0;
    pbVar1[6] = 0;
    pbVar1[7] = 0;
    uVar9 = (uint)local_78 + ((int)pbVar10 - (int)((ulong)(pbVar10 + 8) & 0xfffffffffffffff8)) &
            0xfffffff8;
    if (7 < uVar9) {
      uVar6 = 0;
      do {
        uVar7 = (ulong)uVar6;
        uVar6 = uVar6 + 8;
        *(undefined8 *)(((ulong)(pbVar10 + 8) & 0xfffffffffffffff8) + uVar7) = 0;
      } while (uVar6 < uVar9);
    }
  }
  (*pcVar3)(param_1,local_58,uVar5);
  *param_1 = bVar2;
  uVar5 = 0;
  *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) ^ local_58[0];
  *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) ^ local_58[1];
LAB_00100ebd:
  if (local_58[3] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



ulong CRYPTO_ccm128_tag(byte *param_1,byte *param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar1 = (*param_1 >> 3 & 7) * 2 + 2;
  uVar2 = (ulong)uVar1;
  if (uVar2 == param_3) {
    if (uVar1 < 8) {
      if ((uVar1 & 4) == 0) {
        if ((uVar1 != 0) && (*param_2 = param_1[0x10], (uVar1 & 2) != 0)) {
          *(undefined2 *)(param_2 + (uVar2 - 2)) = *(undefined2 *)(param_1 + uVar2 + 0xe);
        }
      }
      else {
        *(undefined4 *)param_2 = *(undefined4 *)(param_1 + 0x10);
        *(undefined4 *)(param_2 + (uVar2 - 4)) = *(undefined4 *)(param_1 + uVar2 + 0xc);
      }
    }
    else {
      *(undefined8 *)param_2 = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_2 + (uVar2 - 8)) = *(undefined8 *)(param_1 + uVar2 + 8);
      lVar4 = (long)param_2 - ((ulong)(param_2 + 8) & 0xfffffffffffffff8);
      uVar1 = uVar1 + (int)lVar4 & 0xfffffff8;
      if (7 < uVar1) {
        uVar3 = 0;
        do {
          uVar5 = (ulong)uVar3;
          uVar3 = uVar3 + 8;
          *(undefined8 *)(((ulong)(param_2 + 8) & 0xfffffffffffffff8) + uVar5) =
               *(undefined8 *)(param_1 + uVar5 + (0x10 - lVar4));
        } while (uVar3 < uVar1);
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


