
undefined1 * spki2typespki_settable_ctx_params(void)

{
  return settables_0;
}



bool spki2typespki_set_ctx_params(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  bool bVar3;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = param_1 + 8;
  lVar2 = OSSL_PARAM_locate_const(param_2,"properties",0);
  bVar3 = true;
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_get_utf8_string(lVar2,&local_18,0x100);
    bVar3 = iVar1 != 0;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void spki2typespki_freectx(void *param_1)

{
  CRYPTO_free(param_1);
  return;
}



void spki2typespki_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x108,"providers/implementations/encode_decode/decode_spki2typespki.c",0x29
                        );
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
  }
  return;
}



undefined4
ossl_spki2typespki_der_decode
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4,undefined8 param_5
          ,undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  int iVar1;
  undefined4 uVar2;
  X509_PUBKEY *pub;
  long in_FS_OFFSET;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined4 local_184;
  undefined8 local_180;
  X509_ALGOR *local_178;
  ASN1_OBJECT *local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  char local_78 [56];
  long local_40;
  
  uVar2 = 1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_178 = (X509_ALGOR *)0x0;
  local_170 = (ASN1_OBJECT *)0x0;
  local_184 = 2;
  local_180 = param_1;
  pub = (X509_PUBKEY *)ossl_d2i_X509_PUBKEY_INTERNAL(&local_180,param_2,param_8,param_9);
  if (pub == (X509_PUBKEY *)0x0) goto LAB_00100168;
  iVar1 = X509_PUBKEY_get0_param((ASN1_OBJECT **)0x0,(uchar **)0x0,(int *)0x0,&local_178,pub);
  if (iVar1 == 0) {
LAB_00100162:
    uVar2 = 0;
  }
  else {
    X509_ALGOR_get0(&local_170,(int *)0x0,(void **)0x0,local_178);
    iVar1 = OBJ_obj2nid(local_170);
    if (iVar1 == 0x198) {
      iVar1 = ossl_x509_algor_is_sm2(local_178);
      if (iVar1 == 0) goto LAB_001001c8;
      builtin_strncpy(local_78,"SM2",4);
    }
    else {
LAB_001001c8:
      iVar1 = OBJ_obj2txt(local_78,0x32,local_170,0);
      if (iVar1 < 1) goto LAB_00100162;
    }
    ossl_X509_PUBKEY_INTERNAL_free(pub);
    OSSL_PARAM_construct_utf8_string(&local_1b8,"data-type",local_78,0);
    local_168 = local_1b8;
    uStack_160 = uStack_1b0;
    local_158 = local_1a8;
    uStack_150 = uStack_1a0;
    local_148 = local_198;
    OSSL_PARAM_construct_utf8_string(&local_1b8,"input-type",&_LC3,0);
    local_140 = local_1b8;
    uStack_138 = uStack_1b0;
    local_130 = local_1a8;
    uStack_128 = uStack_1a0;
    local_120 = local_198;
    OSSL_PARAM_construct_utf8_string(&local_1b8,"data-structure","SubjectPublicKeyInfo",0);
    local_118 = local_1b8;
    uStack_110 = uStack_1b0;
    local_108 = local_1a8;
    uStack_100 = uStack_1a0;
    local_f8 = local_198;
    OSSL_PARAM_construct_octet_string(&local_1b8,&_LC7,param_1,param_2);
    local_f0 = local_1b8;
    uStack_e8 = uStack_1b0;
    local_e0 = local_1a8;
    uStack_d8 = uStack_1a0;
    local_d0 = local_198;
    OSSL_PARAM_construct_int(&local_1b8,&_LC8,&local_184);
    pub = (X509_PUBKEY *)0x0;
    local_a8 = local_198;
    local_c8 = local_1b8;
    uStack_c0 = uStack_1b0;
    local_b8 = local_1a8;
    uStack_b0 = uStack_1a0;
    OSSL_PARAM_construct_end(&local_1b8);
    local_a0 = local_1b8;
    uStack_98 = uStack_1b0;
    local_80 = local_198;
    local_90 = local_1a8;
    uStack_88 = uStack_1a0;
    uVar2 = (*param_4)(&local_168,param_5);
  }
LAB_00100168:
  ossl_X509_PUBKEY_INTERNAL_free(pub);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4
spki2typespki_decode
          (undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  void *local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ossl_read_der(*param_1,param_2,&local_50,&local_48);
  uVar2 = 1;
  if (iVar1 != 0) {
    uVar3 = ossl_prov_ctx_get0_libctx(*param_1);
    uVar2 = ossl_spki2typespki_der_decode
                      (local_50,local_48,param_3,param_4,param_5,param_6,param_7,uVar3,param_1 + 1);
    CRYPTO_free(local_50);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


