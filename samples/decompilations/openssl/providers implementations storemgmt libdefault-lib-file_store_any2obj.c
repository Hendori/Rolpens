
undefined1 * any2obj_settable_ctx_params(void)

{
  return settables_2;
}



bool any2obj_set_ctx_params(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  bool bVar3;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = OSSL_PARAM_locate_const(param_2,"data-structure");
  bVar3 = true;
  local_18 = param_1 + 8;
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_get_utf8_string(lVar2,&local_18,0x20);
    bVar3 = iVar1 != 0;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4
any2obj_decode_final
          (long param_1,undefined4 param_2,long param_3,long param_4,BUF_MEM *param_5,code *param_6,
          undefined8 param_7)

{
  size_t sVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long in_FS_OFFSET;
  undefined8 *local_188;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined4 local_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110 [26];
  long local_40;
  
  uVar3 = 1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_13c = param_2;
  if (param_5 != (BUF_MEM *)0x0) {
    if (param_4 == 0) {
      puVar5 = &local_138;
    }
    else {
      puVar5 = local_110;
      OSSL_PARAM_construct_utf8_string(&local_178,"data-type",param_4,0);
      local_118 = local_158;
      local_138 = local_178;
      uStack_130 = uStack_170;
      local_128 = local_168;
      uStack_120 = uStack_160;
    }
    local_188 = &local_138;
    puVar4 = puVar5;
    if (param_3 != 0) {
      puVar4 = puVar5 + 5;
      OSSL_PARAM_construct_utf8_string(&local_178,"input-type",param_3,0);
      *puVar5 = local_178;
      puVar5[1] = uStack_170;
      puVar5[2] = local_168;
      puVar5[3] = uStack_160;
      puVar5[4] = local_158;
    }
    puVar5 = puVar4;
    if (*(char *)(param_1 + 8) != '\0') {
      puVar5 = puVar4 + 5;
      OSSL_PARAM_construct_utf8_string(&local_178,"data-structure",param_1 + 8,0);
      *puVar4 = local_178;
      puVar4[1] = uStack_170;
      puVar4[2] = local_168;
      puVar4[3] = uStack_160;
      puVar4[4] = local_158;
    }
    OSSL_PARAM_construct_int(&local_178,&_LC3,&local_13c);
    sVar1 = param_5->length;
    pcVar2 = param_5->data;
    *puVar5 = local_178;
    puVar5[1] = uStack_170;
    puVar5[2] = local_168;
    puVar5[3] = uStack_160;
    puVar5[4] = local_158;
    OSSL_PARAM_construct_octet_string(&local_178,&_LC4,pcVar2,sVar1);
    puVar5[5] = local_178;
    puVar5[6] = uStack_170;
    puVar5[7] = local_168;
    puVar5[8] = uStack_160;
    puVar5[9] = local_158;
    OSSL_PARAM_construct_end(&local_178);
    puVar5[10] = local_178;
    puVar5[0xb] = uStack_170;
    puVar5[0xc] = local_168;
    puVar5[0xd] = uStack_160;
    puVar5[0xe] = local_158;
    uVar3 = (*param_6)(local_188,param_7);
    BUF_MEM_free(param_5);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
pvk2obj_decode(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  BIO *b;
  BUF_MEM *str;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined *puVar3;
  undefined8 uVar4;
  uint len;
  long in_FS_OFFSET;
  int local_54;
  int local_50;
  int local_4c;
  char *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  b = (BIO *)ossl_bio_new_from_core_bio(*param_1);
  local_4c = -1;
  if (b == (BIO *)0x0) {
    str = (BUF_MEM *)0x0;
  }
  else {
    str = BUF_MEM_new();
    if ((str != (BUF_MEM *)0x0) &&
       (iVar1 = BUF_MEM_grow(str,0x18), CONCAT44(extraout_var,iVar1) != 0)) {
      ERR_set_mark();
      iVar1 = BIO_read(b,str->data,0x18);
      ERR_pop_to_mark();
      if (iVar1 == 0x18) {
        ERR_set_mark();
        local_48 = str->data;
        iVar1 = ossl_do_PVK_header(&local_48,0x18,0,&local_4c,&local_54,&local_50);
        ERR_pop_to_mark();
        if (iVar1 < 1) goto LAB_00100394;
        len = local_50 + local_54;
        iVar1 = BUF_MEM_grow(str,(ulong)len + 0x18);
        if (CONCAT44(extraout_var_00,iVar1) == 0) {
          ERR_new();
          uVar4 = 0x109;
          goto LAB_00100317;
        }
        ERR_set_mark();
        uVar2 = BIO_read(b,str->data + 0x18,len);
        ERR_pop_to_mark();
        BIO_free(b);
        if (len != uVar2) goto LAB_0010039c;
        puVar3 = &_LC5;
        if (local_4c != 0) {
          puVar3 = &_LC6;
        }
      }
      else {
LAB_00100394:
        BIO_free(b);
LAB_0010039c:
        BUF_MEM_free(str);
        puVar3 = (undefined *)0x0;
        str = (BUF_MEM *)0x0;
      }
      uVar4 = any2obj_decode_final(param_1,2,&_LC8,puVar3,str,param_4,param_5);
      goto LAB_00100348;
    }
    ERR_new();
    uVar4 = 0xf3;
LAB_00100317:
    ERR_set_debug("providers/implementations/storemgmt/file_store_any2obj.c",uVar4,"pvk2obj_decode")
    ;
    ERR_set_error(9,0x80007,0);
  }
  BIO_free(b);
  BUF_MEM_free(str);
  uVar4 = 0;
LAB_00100348:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



void any2obj_freectx(void *param_1)

{
  CRYPTO_free(param_1);
  return;
}



void any2obj_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x28,"providers/implementations/storemgmt/file_store_any2obj.c",0x38);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
  }
  return;
}



undefined8
msblob2obj_decode(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  uint len;
  uint uVar2;
  BIO *b;
  BUF_MEM *str;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined *puVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined4 local_58;
  undefined1 local_54 [4];
  int local_50;
  undefined4 local_4c;
  char *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  b = (BIO *)ossl_bio_new_from_core_bio(*param_1);
  local_50 = -1;
  local_4c = 0xffffffff;
  if (b == (BIO *)0x0) {
    str = (BUF_MEM *)0x0;
  }
  else {
    str = BUF_MEM_new();
    if ((str != (BUF_MEM *)0x0) &&
       (iVar1 = BUF_MEM_grow(str,0x10), CONCAT44(extraout_var,iVar1) != 0)) {
      ERR_set_mark();
      iVar1 = BIO_read(b,str->data,0x10);
      ERR_pop_to_mark();
      if (iVar1 == 0x10) {
        ERR_set_mark();
        local_48 = str->data;
        iVar1 = ossl_do_blob_header(&local_48,0x10,local_54,&local_58,&local_50,&local_4c);
        ERR_pop_to_mark();
        if (iVar1 < 1) goto LAB_001005fc;
        len = ossl_blob_length(local_58,local_50,local_4c);
        iVar1 = BUF_MEM_grow(str,(ulong)len + 0x10);
        if (CONCAT44(extraout_var_00,iVar1) == 0) {
          ERR_new();
          uVar4 = 0xc4;
          goto LAB_0010057f;
        }
        ERR_set_mark();
        uVar2 = BIO_read(b,str->data + 0x10,len);
        ERR_pop_to_mark();
        BIO_free(b);
        if (len != uVar2) goto LAB_00100604;
      }
      else {
LAB_001005fc:
        BIO_free(b);
LAB_00100604:
        BUF_MEM_free(str);
        str = (BUF_MEM *)0x0;
      }
      puVar3 = &_LC5;
      if (local_50 != 0) {
        puVar3 = &_LC6;
      }
      uVar4 = any2obj_decode_final(param_1,2,"msblob",puVar3,str,param_4,param_5);
      goto LAB_001005b0;
    }
    ERR_new();
    uVar4 = 0xae;
LAB_0010057f:
    ERR_set_debug("providers/implementations/storemgmt/file_store_any2obj.c",uVar4,
                  "msblob2obj_decode");
    ERR_set_error(9,0x80007,0);
  }
  BIO_free(b);
  BUF_MEM_free(str);
  uVar4 = 0;
LAB_001005b0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



undefined8
der2obj_decode(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5)

{
  int iVar1;
  BIO *a;
  undefined8 uVar2;
  long in_FS_OFFSET;
  BUF_MEM *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
  local_38 = (BUF_MEM *)0x0;
  uVar2 = 0;
  if (a != (BIO *)0x0) {
    ERR_set_mark();
    iVar1 = asn1_d2i_read_bio(a,&local_38);
    ERR_pop_to_mark();
    if ((iVar1 < 0) && (local_38 != (BUF_MEM *)0x0)) {
      BUF_MEM_free(local_38);
      local_38 = (BUF_MEM *)0x0;
    }
    BIO_free(a);
    uVar2 = any2obj_decode_final(param_1,0,0,0,local_38,param_4,param_5);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


