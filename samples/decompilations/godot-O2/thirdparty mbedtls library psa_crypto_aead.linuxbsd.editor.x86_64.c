
int psa_aead_setup_isra_0(undefined4 *param_1,ushort *param_2,undefined8 param_3,uint param_4)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  long in_FS_OFFSET;
  undefined4 local_50;
  undefined1 local_4c [4];
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (ulong)param_2[1];
  iVar2 = mbedtls_cipher_values_from_psa(param_4,*param_2,&local_48,local_4c,&local_50);
  iVar5 = iVar2;
  if (iVar2 != 0) goto LAB_001000c7;
  uVar3 = param_4 & 0xffc07fff;
  if (uVar3 == 0x5400100) {
    uVar1 = *param_2;
    *param_1 = 0x5500100;
    if (((uVar1 & 0x7000) != 0x2000) || ((uVar1 & 0x700) != 0x400)) {
LAB_001001c0:
      iVar5 = -0x87;
      goto LAB_001000c7;
    }
    mbedtls_ccm_init(param_1 + 2);
    uVar4 = mbedtls_ccm_setkey(param_1 + 2,local_50,param_3,local_48 & 0xffffffff);
    iVar5 = mbedtls_to_psa_error(uVar4);
  }
  else if (uVar3 == 0x5400200) {
    uVar1 = *param_2;
    *param_1 = 0x5500200;
    if (((uVar1 & 0x7000) != 0x2000) || ((uVar1 & 0x700) != 0x400)) goto LAB_001001c0;
    mbedtls_gcm_init(param_1 + 2);
    uVar4 = mbedtls_gcm_setkey(param_1 + 2,local_50,param_3,local_48 & 0xffffffff);
    iVar5 = mbedtls_to_psa_error(uVar4);
  }
  else {
    if ((uVar3 != 0x5000500) || (*param_1 = 0x5100500, param_4 != 0x5100500)) {
      iVar5 = -0x86;
      goto LAB_001000c7;
    }
    mbedtls_chachapoly_init(param_1 + 2);
    uVar4 = mbedtls_chachapoly_setkey(param_1 + 2,param_3);
    iVar5 = mbedtls_to_psa_error(uVar4);
  }
  if (iVar5 == 0) {
    *(ushort *)(param_1 + 1) = *param_2;
    *(byte *)((long)param_1 + 7) = (byte)(param_4 >> 0x10) & 0x3f;
    iVar5 = iVar2;
  }
LAB_001000c7:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong mbedtls_psa_aead_encrypt
                (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                undefined8 param_9,long param_10,long param_11,ulong param_12,long *param_13)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  int *piVar4;
  long in_FS_OFFSET;
  int local_1f8;
  byte local_1f1;
  undefined1 local_1f0 [432];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  piVar4 = &local_1f8;
  for (lVar3 = 0x36; lVar3 != 0; lVar3 = lVar3 + -1) {
    piVar4[0] = 0;
    piVar4[1] = 0;
    piVar4 = piVar4 + 2;
  }
  uVar2 = psa_aead_setup_isra_0(&local_1f8,param_1,param_2,param_4);
  if ((int)uVar2 == 0) {
    uVar2 = (ulong)local_1f1;
    if (param_12 < param_10 + uVar2) {
      uVar2 = 0xffffff76;
      goto joined_r0x00100373;
    }
    lVar3 = param_10 + param_11;
    if (local_1f8 == 0x5500100) {
      uVar1 = mbedtls_ccm_encrypt_and_tag
                        (local_1f0,param_10,param_5,param_6,param_7,param_8,param_9,param_11,lVar3,
                         uVar2);
      uVar2 = mbedtls_to_psa_error(uVar1);
LAB_001002ef:
      if ((int)uVar2 == 0) {
        *param_13 = (ulong)local_1f1 + param_10;
      }
      goto joined_r0x00100373;
    }
    if (local_1f8 == 0x5500200) {
      uVar1 = mbedtls_gcm_crypt_and_tag
                        (local_1f0,1,param_10,param_5,param_6,param_7,param_8,param_9,param_11,uVar2
                         ,lVar3);
      uVar2 = mbedtls_to_psa_error(uVar1);
      goto LAB_001002ef;
    }
    uVar2 = 0xffffff7a;
    if (local_1f8 != 0x5100500) goto LAB_0010031f;
    if (local_1f1 == 0x10) {
      uVar1 = mbedtls_chachapoly_encrypt_and_tag
                        (local_1f0,param_10,param_5,param_7,param_8,param_9,param_11,lVar3);
      uVar2 = mbedtls_to_psa_error(uVar1);
      goto LAB_001002ef;
    }
  }
  else {
joined_r0x00100373:
    if (local_1f8 == 0x5500100) {
      mbedtls_ccm_free(local_1f0);
      uVar2 = uVar2 & 0xffffffff;
      goto LAB_0010031f;
    }
    if (local_1f8 == 0x5500200) {
      mbedtls_gcm_free(local_1f0);
      uVar2 = uVar2 & 0xffffffff;
      goto LAB_0010031f;
    }
    if (local_1f8 != 0x5100500) goto LAB_0010031f;
  }
  mbedtls_chachapoly_free(local_1f0);
  uVar2 = uVar2 & 0xffffffff;
LAB_0010031f:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong mbedtls_psa_aead_decrypt
                (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long param_9,ulong param_10,undefined8 param_11,ulong param_12,long *param_13)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  uint *puVar5;
  long in_FS_OFFSET;
  undefined1 *local_200;
  uint local_1f8;
  byte local_1f1;
  undefined1 local_1f0 [432];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar5 = &local_1f8;
  for (lVar3 = 0x36; lVar3 != 0; lVar3 = lVar3 + -1) {
    puVar5[0] = 0;
    puVar5[1] = 0;
    puVar5 = puVar5 + 2;
  }
  uVar2 = psa_aead_setup_isra_0(&local_1f8,param_1,param_2,param_4);
  if ((int)uVar2 == 0) {
    uVar2 = (ulong)local_1f1;
    if (param_10 < uVar2) {
      uVar2 = 0xffffff79;
      goto joined_r0x00100542;
    }
    uVar4 = param_10 - uVar2;
    if (param_12 < uVar4) {
      uVar2 = 0xffffff76;
      if (local_1f8 != 0x5500200) goto LAB_00100548;
      goto LAB_001006e0;
    }
    lVar3 = param_9 + uVar4;
    if (local_1f8 == 0x5500100) {
      uVar1 = mbedtls_ccm_auth_decrypt
                        (local_1f0,uVar4,param_5,param_6,param_7,param_8,param_9,param_11,lVar3,
                         uVar2);
      uVar2 = mbedtls_to_psa_error(uVar1);
    }
    else {
      if (local_1f8 != 0x5500200) {
        if (local_1f8 == 0x5100500) {
          if (local_1f1 == 0x10) {
            uVar1 = mbedtls_chachapoly_auth_decrypt
                              (local_1f0,uVar4,param_5,param_7,param_8,lVar3,param_9,param_11);
            uVar2 = mbedtls_to_psa_error(uVar1);
            goto LAB_001005ba;
          }
          mbedtls_chachapoly_free(local_1f0);
        }
        uVar2 = 0xffffff7a;
        goto LAB_00100508;
      }
      uVar1 = mbedtls_gcm_auth_decrypt
                        (local_1f0,uVar4,param_5,param_6,param_7,param_8,lVar3,uVar2,param_9,
                         param_11);
      uVar2 = mbedtls_to_psa_error(uVar1);
    }
LAB_001005ba:
    local_200 = local_1f0;
    if ((int)uVar2 == 0) {
      lVar3 = param_10 - local_1f1;
      *param_13 = lVar3;
      if (local_1f8 == 0x5500200) {
        mbedtls_gcm_free(local_200);
LAB_00100608:
        uVar2 = uVar2 & 0xffffffff;
        lVar3 = param_10 - local_1f1;
      }
      else if (local_1f8 < 0x5500201) {
        if (local_1f8 == 0x5100500) {
          mbedtls_chachapoly_free(local_200);
        }
        else {
          if (local_1f8 != 0x5500100) goto LAB_00100618;
          mbedtls_ccm_free(local_200);
        }
        goto LAB_00100608;
      }
LAB_00100618:
      *param_13 = lVar3;
      goto LAB_00100508;
    }
    if (local_1f8 == 0x5500200) {
      mbedtls_gcm_free(local_200);
      uVar2 = uVar2 & 0xffffffff;
      goto LAB_00100508;
    }
  }
  else {
joined_r0x00100542:
    if (local_1f8 == 0x5500200) {
LAB_001006e0:
      mbedtls_gcm_free(local_1f0);
      uVar2 = uVar2 & 0xffffffff;
      goto LAB_00100508;
    }
  }
LAB_00100548:
  if (local_1f8 < 0x5500201) {
    if (local_1f8 == 0x5100500) {
      mbedtls_chachapoly_free(local_1f0);
      uVar2 = uVar2 & 0xffffffff;
    }
    else if (local_1f8 == 0x5500100) {
      mbedtls_ccm_free(local_1f0);
      uVar2 = uVar2 & 0xffffffff;
    }
  }
LAB_00100508:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mbedtls_psa_aead_encrypt_setup(long param_1)

{
  int iVar1;
  
  iVar1 = psa_aead_setup_isra_0();
  if (iVar1 == 0) {
    *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) | 1;
  }
  return;
}



void mbedtls_psa_aead_decrypt_setup(long param_1)

{
  int iVar1;
  
  iVar1 = psa_aead_setup_isra_0();
  if (iVar1 == 0) {
    *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfe;
  }
  return;
}



undefined8 mbedtls_psa_aead_set_nonce(int *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  iVar1 = *param_1;
  if (iVar1 == 0x5500200) {
    uVar2 = mbedtls_gcm_starts(param_1 + 2,*(byte *)((long)param_1 + 6) & 1,param_2,param_3);
    uVar3 = mbedtls_to_psa_error(uVar2);
    return uVar3;
  }
  if (iVar1 != 0x5500100) {
    if (iVar1 == 0x5100500) {
      if (param_3 == 0xc) {
        uVar2 = mbedtls_chachapoly_starts(param_1 + 2,param_2,~*(byte *)((long)param_1 + 6) & 1);
        uVar3 = mbedtls_to_psa_error(uVar2);
        return uVar3;
      }
      uVar3 = 0xffffff79;
    }
    else {
      uVar3 = 0xffffff7a;
    }
    return uVar3;
  }
  uVar2 = mbedtls_ccm_starts(param_1 + 2,*(byte *)((long)param_1 + 6) & 1,param_2,param_3);
  uVar3 = mbedtls_to_psa_error(uVar2);
  return uVar3;
}



undefined8 mbedtls_psa_aead_set_lengths(int *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (*param_1 != 0x5500100) {
    return 0;
  }
  uVar1 = mbedtls_ccm_set_lengths(param_1 + 2,param_2,param_3,*(undefined1 *)((long)param_1 + 7));
  uVar2 = mbedtls_to_psa_error(uVar1);
  return uVar2;
}



undefined8 mbedtls_psa_aead_update_ad(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  iVar1 = *param_1;
  if (iVar1 == 0x5500200) {
    uVar2 = mbedtls_gcm_update_ad(param_1 + 2);
    uVar3 = mbedtls_to_psa_error(uVar2);
    return uVar3;
  }
  if (iVar1 != 0x5500100) {
    if (iVar1 == 0x5100500) {
      uVar2 = mbedtls_chachapoly_update_aad(param_1 + 2);
      uVar3 = mbedtls_to_psa_error(uVar2);
      return uVar3;
    }
    return 0xffffff7a;
  }
  uVar2 = mbedtls_ccm_update_ad(param_1 + 2);
  uVar3 = mbedtls_to_psa_error(uVar2);
  return uVar3;
}



undefined8
mbedtls_psa_aead_update
          (int *param_1,undefined8 param_2,ulong param_3,undefined8 param_4,ulong param_5,
          ulong *param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = *param_1;
  local_18 = param_3;
  if (iVar1 == 0x5500200) {
    uVar2 = mbedtls_gcm_update(param_1 + 2,param_2,param_3,param_4,param_5,&local_18);
    uVar3 = mbedtls_to_psa_error(uVar2);
  }
  else if (iVar1 == 0x5500100) {
    if (param_5 < param_3) {
LAB_001009e0:
      uVar3 = 0xffffff76;
      goto LAB_00100978;
    }
    uVar2 = mbedtls_ccm_update(param_1 + 2,param_2,param_3,param_4,param_5,&local_18);
    uVar3 = mbedtls_to_psa_error(uVar2);
  }
  else {
    if (iVar1 != 0x5100500) {
      uVar3 = 0xffffff7a;
      goto LAB_00100978;
    }
    if (param_5 < param_3) goto LAB_001009e0;
    uVar2 = mbedtls_chachapoly_update(param_1 + 2,param_3,param_2);
    uVar3 = mbedtls_to_psa_error(uVar2);
  }
  if ((int)uVar3 == 0) {
    *param_6 = local_18;
  }
LAB_00100978:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
mbedtls_psa_aead_finish
          (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,undefined8 param_5
          ,ulong param_6,ulong *param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  uVar4 = (ulong)*(byte *)((long)param_1 + 7);
  if (param_6 < uVar4) {
LAB_00100ab0:
    uVar3 = 0xffffff76;
  }
  else {
    iVar1 = *param_1;
    if (iVar1 == 0x5500200) {
      uVar2 = mbedtls_gcm_finish(param_1 + 2,param_2,param_3,param_4,param_5,uVar4);
      uVar3 = mbedtls_to_psa_error(uVar2);
    }
    else if (iVar1 == 0x5500100) {
      uVar2 = mbedtls_ccm_finish(param_1 + 2,param_5,uVar4);
      uVar3 = mbedtls_to_psa_error(uVar2);
    }
    else {
      if (iVar1 != 0x5100500) {
        return 0xffffff7a;
      }
      if (param_6 < 0x10) goto LAB_00100ab0;
      uVar2 = mbedtls_chachapoly_finish(param_1 + 2,param_5);
      uVar3 = mbedtls_to_psa_error(uVar2);
    }
    if ((int)uVar3 == 0) {
      *param_4 = 0;
      *param_7 = (ulong)*(byte *)((long)param_1 + 7);
    }
  }
  return uVar3;
}



undefined8 mbedtls_psa_aead_abort(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 0x5500100) {
    mbedtls_ccm_free(param_1 + 2);
    *(byte *)((long)param_1 + 6) = *(byte *)((long)param_1 + 6) & 0xfe;
    return 0;
  }
  if (iVar1 != 0x5500200) {
    if (iVar1 == 0x5100500) {
      mbedtls_chachapoly_free(param_1 + 2);
    }
    *(byte *)((long)param_1 + 6) = *(byte *)((long)param_1 + 6) & 0xfe;
    return 0;
  }
  mbedtls_gcm_free(param_1 + 2);
  *(byte *)((long)param_1 + 6) = *(byte *)((long)param_1 + 6) & 0xfe;
  return 0;
}


