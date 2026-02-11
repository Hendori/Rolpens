
bool coeff_from_nibble_4(uint param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 < 9) {
    uVar2 = 0x7fe005 - param_1;
    uVar1 = (int)((uVar2 ^ 0x7fe001 | 4 - param_1 ^ 0x7fe001) ^ uVar2) >> 0x1f;
    *param_2 = uVar2 & uVar1 | 4 - param_1 & ~uVar1;
  }
  return param_1 < 9;
}



bool coeff_from_nibble_2(uint param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1 < 0xf) {
    iVar3 = (param_1 * 0x3335 >> 0x10) * 5 - param_1;
    uVar1 = iVar3 + 2;
    uVar4 = iVar3 + 0x7fe003;
    uVar2 = (int)((uVar4 ^ 0x7fe001 | uVar1 ^ 0x7fe001) ^ uVar4) >> 0x1f;
    *param_2 = uVar4 & uVar2 | uVar1 & ~uVar2;
  }
  return param_1 < 0xf;
}



undefined4
rej_bounded_poly_constprop_0
          (EVP_MD_CTX *param_1,undefined8 param_2,code *param_3,void *param_4,long param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  byte *pbVar5;
  long lVar6;
  long in_FS_OFFSET;
  undefined4 local_dc;
  byte local_c8 [136];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = EVP_DigestInit_ex2(param_1,param_2,0);
  if ((iVar2 == 1) && (iVar2 = EVP_DigestUpdate(param_1,param_4,0x42), iVar2 == 1)) {
    iVar2 = EVP_DigestSqueeze(param_1,local_c8,0x88);
    if (iVar2 == 1) {
      iVar2 = 0;
      pbVar5 = local_c8;
      do {
        bVar1 = *pbVar5;
        lVar4 = (long)iVar2;
        lVar6 = param_5 + lVar4 * 4;
        iVar3 = (*param_3)(bVar1 & 0xf,lVar6);
        local_dc = 1;
        if (iVar3 != 0) {
          iVar2 = iVar2 + 1;
          if (0xff < iVar2) goto LAB_001000f8;
          lVar6 = param_5 + 4 + lVar4 * 4;
        }
        iVar3 = (*param_3)(bVar1 >> 4,lVar6);
        if ((iVar3 != 0) && (iVar2 = iVar2 + 1, 0xff < iVar2)) goto LAB_001000f8;
        pbVar5 = pbVar5 + 1;
      } while ((pbVar5 != (byte *)local_40) ||
              (iVar3 = EVP_DigestSqueeze(param_1,local_c8,0x88), pbVar5 = local_c8, iVar3 != 0));
    }
  }
  local_dc = 0;
LAB_001000f8:
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_dc;
}



undefined8
ossl_ml_dsa_matrix_expand_A
          (EVP_MD_CTX *param_1,undefined8 param_2,undefined8 *param_3,long *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  ushort *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  ulong local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8;
  undefined1 local_f7;
  ushort local_e8 [84];
  long local_40 [2];
  
  local_118 = *param_3;
  uStack_110 = param_3[1];
  local_108 = param_3[2];
  uStack_100 = param_3[3];
  lVar8 = *param_4;
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4[1] != 0) {
    uVar4 = param_4[2];
    local_128 = 0;
    while (uVar4 != 0) {
      uVar9 = 0;
      lVar7 = lVar8;
      do {
        local_f8 = (undefined1)uVar9;
        lVar8 = lVar7 + 0x400;
        local_f7 = (undefined1)local_128;
        iVar1 = EVP_DigestInit_ex2(param_1,param_2,0);
        if ((iVar1 != 1) || (iVar1 = EVP_DigestUpdate(param_1,&local_118,0x22), iVar1 != 1)) {
LAB_001002bc:
          uVar5 = 0;
          goto LAB_001002be;
        }
        iVar1 = EVP_DigestSqueeze(param_1,local_e8,0xa8);
        if (iVar1 != 1) goto LAB_001002bc;
        iVar1 = 0;
        puVar6 = local_e8;
        while ((uVar2 = ((byte)puVar6[1] & 0x7f) << 0x10 | (uint)*puVar6,
               *(uint *)(lVar7 + (long)iVar1 * 4) = uVar2, 0x7fe000 < uVar2 ||
               (iVar1 = iVar1 + 1, iVar1 < 0x100))) {
          puVar6 = (ushort *)((long)puVar6 + 3);
          if ((puVar6 == (ushort *)local_40) &&
             (iVar3 = EVP_DigestSqueeze(param_1,local_e8,0xa8), puVar6 = local_e8, iVar3 == 0))
          goto LAB_001002bc;
        }
        uVar4 = param_4[2];
        uVar9 = uVar9 + 1;
        lVar7 = lVar8;
      } while (uVar9 < uVar4);
      local_128 = local_128 + 1;
      if ((ulong)param_4[1] <= local_128) break;
    }
  }
  uVar5 = 1;
LAB_001002be:
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



undefined8
ossl_ml_dsa_vector_expand_S
          (undefined8 param_1,undefined8 param_2,int param_3,undefined8 *param_4,long *param_5,
          long *param_6)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  char local_48;
  undefined1 uStack_47;
  long local_40;
  
  pcVar4 = coeff_from_nibble_2;
  lVar5 = param_5[1];
  local_88 = *param_4;
  uStack_80 = param_4[1];
  local_78 = param_4[2];
  uStack_70 = param_4[3];
  local_68 = param_4[4];
  uStack_60 = param_4[5];
  local_58 = param_4[6];
  uStack_50 = param_4[7];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = param_6[1];
  if (param_3 == 4) {
    pcVar4 = coeff_from_nibble_4;
  }
  local_48 = '\0';
  uStack_47 = 0;
  if (lVar5 != 0) {
    lVar6 = 0;
    do {
      iVar2 = rej_bounded_poly_constprop_0
                        (param_1,param_2,pcVar4,&local_88,lVar6 * 0x400 + *param_5);
      if (iVar2 == 0) goto LAB_001004a7;
      local_48 = local_48 + '\x01';
      lVar6 = lVar6 + 1;
    } while (lVar5 != lVar6);
  }
  lVar5 = 0;
  if (lVar1 != 0) {
    do {
      iVar2 = rej_bounded_poly_constprop_0
                        (param_1,param_2,pcVar4,&local_88,lVar5 * 0x400 + *param_6);
      if (iVar2 == 0) goto LAB_001004a7;
      local_48 = local_48 + '\x01';
      lVar5 = lVar5 + 1;
    } while (lVar1 != lVar5);
  }
  uVar3 = 1;
LAB_001004a9:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
LAB_001004a7:
  uVar3 = 0;
  goto LAB_001004a9;
}



bool ossl_ml_dsa_poly_expand_mask
               (undefined8 param_1,void *param_2,size_t param_3,int param_4,EVP_MD_CTX *param_5,
               undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  bool bVar3;
  undefined1 local_2c8 [648];
  long local_40;
  
  uVar2 = 0x240;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 == 0x80000) {
    uVar2 = 0x280;
  }
  iVar1 = EVP_DigestInit_ex2(param_5,param_6,0);
  if (iVar1 == 1) {
    iVar1 = EVP_DigestUpdate(param_5,param_2,param_3);
    if (iVar1 == 1) {
      iVar1 = EVP_DigestSqueeze(param_5,local_2c8,uVar2);
      if (iVar1 == 1) {
        iVar1 = ossl_ml_dsa_poly_decode_expand_mask(param_1,local_2c8,uVar2,param_4);
        bVar3 = iVar1 != 0;
        goto LAB_0010058f;
      }
    }
  }
  bVar3 = false;
LAB_0010058f:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4
ossl_ml_dsa_poly_sample_in_ball
          (undefined8 *param_1,void *param_2,int param_3,EVP_MD_CTX *param_4,undefined8 param_5,
          int param_6)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  ulong uVar10;
  long in_FS_OFFSET;
  byte bVar11;
  byte local_c8 [2];
  undefined6 uStack_c6;
  long local_40;
  
  bVar11 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = EVP_DigestInit_ex2(param_4,param_5,0);
  if ((iVar1 == 1) && (iVar1 = EVP_DigestUpdate(param_4,param_2,(long)param_3), iVar1 == 1)) {
    iVar1 = EVP_DigestSqueeze(param_4,local_c8,0x88);
    if (iVar1 == 1) {
      *param_1 = 0;
      param_1[0x7f] = 0;
      puVar8 = (undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8);
      for (uVar4 = (ulong)(((int)param_1 -
                           (int)(undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8)) + 0x400U
                          >> 3); uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar8 = 0;
        puVar8 = puVar8 + (ulong)bVar11 * -2 + 1;
      }
      iVar1 = 8;
      uVar10 = (ulong)(0x100 - param_6);
      uVar9 = 1;
      uVar4 = CONCAT62(uStack_c6,CONCAT11(local_c8[1],local_c8[0]));
      if (uVar10 < 0x100) {
LAB_00100720:
        do {
          if (iVar1 == 0x88) {
            iVar1 = EVP_DigestSqueeze(param_4,local_c8,0x88);
            if (iVar1 == 0) goto LAB_0010065b;
            uVar5 = (ulong)local_c8[0];
            if (uVar10 < uVar5) {
              uVar5 = (ulong)local_c8[1];
              lVar3 = 2;
              iVar1 = 2;
              if (uVar10 < uVar5) goto LAB_00100713;
            }
            else {
              iVar1 = 1;
            }
          }
          else {
            lVar3 = (long)iVar1;
LAB_00100713:
            uVar5 = (ulong)local_c8[lVar3];
            iVar1 = (int)lVar3 + 1;
            if (uVar10 < uVar5) goto LAB_00100720;
          }
          *(undefined4 *)((long)param_1 + uVar10 * 4) = *(undefined4 *)((long)param_1 + uVar5 * 4);
          uVar10 = uVar10 + 1;
          uVar2 = (uint)uVar4 & 1;
          uVar7 = uVar2 * -2 + 1;
          uVar6 = uVar2 * -2 + 0x7fe002;
          uVar2 = (int)((uVar6 ^ 0x7fe001 | uVar7 ^ 0x7fe001) ^ uVar6) >> 0x1f;
          *(uint *)((long)param_1 + uVar5 * 4) = uVar6 & uVar2 | uVar7 & ~uVar2;
          uVar4 = uVar4 >> 1;
        } while (uVar10 != 0x100);
      }
      goto LAB_0010065e;
    }
  }
LAB_0010065b:
  uVar9 = 0;
LAB_0010065e:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}


