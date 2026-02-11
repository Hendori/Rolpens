
bool ossl_dh_kdf_X9_42_asn1
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,undefined8 param_10)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  bool bVar6;
  long in_FS_OFFSET;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90 [10];
  long local_40;
  
  bVar6 = false;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = EVP_MD_get0_name(param_8);
  lVar3 = EVP_KDF_fetch(param_9,"X942KDF-ASN1",param_10);
  if (lVar3 != 0) {
    lVar4 = EVP_KDF_CTX_new(lVar3);
    if (lVar4 != 0) {
      OSSL_PARAM_construct_utf8_string(&local_138,"digest",uVar2,0);
      puVar5 = &local_b8;
      local_e8 = local_118;
      local_108 = local_138;
      uStack_100 = uStack_130;
      local_f8 = local_128;
      uStack_f0 = uStack_120;
      OSSL_PARAM_construct_octet_string(&local_138,&_LC2,param_3,param_4);
      local_e0 = local_138;
      uStack_d8 = uStack_130;
      local_c0 = local_118;
      local_d0 = local_128;
      uStack_c8 = uStack_120;
      if (param_6 != 0) {
        puVar5 = local_90;
        OSSL_PARAM_construct_octet_string(&local_138,&_LC3,param_6,param_7);
        local_98 = local_118;
        local_b8 = local_138;
        uStack_b0 = uStack_130;
        local_a8 = local_128;
        uStack_a0 = uStack_120;
      }
      OSSL_PARAM_construct_utf8_string(&local_138,"cekalg",param_5,0);
      *puVar5 = local_138;
      puVar5[1] = uStack_130;
      puVar5[2] = local_128;
      puVar5[3] = uStack_120;
      puVar5[4] = local_118;
      OSSL_PARAM_construct_end(&local_138);
      puVar5[5] = local_138;
      puVar5[6] = uStack_130;
      puVar5[7] = local_128;
      puVar5[8] = uStack_120;
      puVar5[9] = local_118;
      iVar1 = EVP_KDF_derive(lVar4,param_1,param_2,&local_108);
      bVar6 = 0 < iVar1;
    }
    EVP_KDF_CTX_free(lVar4);
    EVP_KDF_free(lVar3);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
DH_KDF_X9_42(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            ASN1_OBJECT *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  char local_78 [56];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = EVP_MD_get0_provider(param_8);
  uVar2 = ossl_provider_libctx(uVar2);
  iVar1 = OBJ_obj2txt(local_78,0x32,param_5,0);
  uVar3 = 0;
  if (0 < iVar1) {
    uVar3 = ossl_dh_kdf_X9_42_asn1
                      (param_1,param_2,param_3,param_4,local_78,param_6,param_7,param_8,uVar2,0);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


