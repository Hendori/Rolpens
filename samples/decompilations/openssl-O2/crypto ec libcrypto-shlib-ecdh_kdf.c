
bool ossl_ecdh_kdf_X9_63(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        ,undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8
                        ,undefined8 param_9)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  bool bVar5;
  long in_FS_OFFSET;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = EVP_MD_get0_name(param_7);
  bVar5 = false;
  uVar3 = EVP_KDF_fetch(param_8,"X963KDF",param_9);
  lVar4 = EVP_KDF_CTX_new(uVar3);
  if (lVar4 != 0) {
    OSSL_PARAM_construct_utf8_string(&local_118,"digest",uVar2,0);
    local_c8 = local_f8;
    local_e8 = local_118;
    uStack_e0 = uStack_110;
    local_d8 = local_108;
    uStack_d0 = uStack_100;
    OSSL_PARAM_construct_octet_string(&local_118,&_LC2,param_3,param_4);
    local_c0 = local_118;
    uStack_b8 = uStack_110;
    local_b0 = local_108;
    uStack_a8 = uStack_100;
    local_a0 = local_f8;
    OSSL_PARAM_construct_octet_string(&local_118,&_LC3,param_5,param_6);
    local_78 = local_f8;
    local_98 = local_118;
    uStack_90 = uStack_110;
    local_88 = local_108;
    uStack_80 = uStack_100;
    OSSL_PARAM_construct_end(&local_118);
    local_70 = local_118;
    uStack_68 = uStack_110;
    local_50 = local_f8;
    local_60 = local_108;
    uStack_58 = uStack_100;
    iVar1 = EVP_KDF_derive(lVar4,param_1,param_2,&local_e8);
    bVar5 = 0 < iVar1;
    EVP_KDF_CTX_free(lVar4);
  }
  EVP_KDF_free(uVar3);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ECDH_KDF_X9_62(void)

{
  ossl_ecdh_kdf_X9_63();
  return;
}


