
void dump_pem(undefined8 param_1,undefined8 param_2,long param_3)

{
  test_output_string(param_1,param_2,param_3 + -1);
  return;
}



void check_public_PEM(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  test_strn_eq(param_1,param_2,&_LC1,"expected_pem_header",param_4,0x1a,"-----BEGIN PUBLIC KEY-----"
               ,0x1a);
  return;
}



void test_text(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6)

{
  test_strn_eq(param_1,param_2,"data1","data2",param_3,param_4,param_5,param_6);
  return;
}



void check_protected_PKCS8_PEM
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  test_strn_eq(param_1,param_2,&_LC1,"expected_pem_header",param_4,0x25,
               "-----BEGIN ENCRYPTED PRIVATE KEY-----",0x25);
  return;
}



void check_unprotected_PKCS8_PEM
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  test_strn_eq(param_1,param_2,&_LC1,"expected_pem_header",param_4,0x1b,
               "-----BEGIN PRIVATE KEY-----",0x1b);
  return;
}



undefined4
decode_EVP_PKEY_prov
          (undefined8 param_1,undefined4 param_2,undefined8 *param_3,void *param_4,int param_5,
          char *param_6,undefined8 param_7,undefined8 param_8,int param_9,char *param_10)

{
  EVP_PKEY *pEVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  BIO *bp;
  undefined8 uVar6;
  size_t sVar7;
  ulong uVar8;
  char *pcVar9;
  long in_FS_OFFSET;
  EVP_PKEY **local_70;
  EVP_PKEY *local_60;
  EVP_PKEY *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (EVP_PKEY *)0x0;
  iVar2 = strcmp(param_6,"DER");
  pcVar5 = "PEM";
  if (iVar2 != 0) {
    pcVar5 = "DER";
  }
  bp = BIO_new_mem_buf(param_4,param_5);
  iVar2 = test_ptr(param_1,param_2,"encoded_bio = BIO_new_mem_buf(encoded, encoded_len)",bp);
  if (iVar2 == 0) {
    uVar6 = 0;
    local_60 = (EVP_PKEY *)0x0;
    uVar4 = 0;
  }
  else if (param_10 == (char *)0x0) {
    iVar2 = 0;
    local_60 = (EVP_PKEY *)0x0;
    while( true ) {
      local_70 = &local_48;
      uVar6 = OSSL_DECODER_CTX_new_for_pkey(local_70,param_6,param_7,param_8,param_9,testctx,0);
      iVar3 = test_ptr(param_1,param_2,
                       "dctx = OSSL_DECODER_CTX_new_for_pkey(&testpkey, testtype, structure_type, keytype, selection, testctx, testpropq)"
                      );
      if (iVar3 == 0) break;
      uVar8 = BIO_ctrl(bp,1,0,(void *)0x0);
      iVar3 = test_int_gt(param_1,param_2,"BIO_reset(encoded_bio)",&_LC8,uVar8 & 0xffffffff,0);
      if (iVar3 == 0) break;
      uVar4 = OSSL_DECODER_from_bio(uVar6,bp);
      iVar3 = test_int_eq(param_1,param_2,"OSSL_DECODER_from_bio(dctx, encoded_bio)",
                          "(i == 2) ? 0 : 1",uVar4,iVar2 != 2);
      if (iVar3 == 0) break;
      OSSL_DECODER_CTX_free(uVar6);
      if (iVar2 == 0) {
        local_60 = local_48;
        param_6 = (char *)0x0;
        iVar2 = 1;
        local_48 = (EVP_PKEY *)0x0;
      }
      else {
        if (iVar2 != 1) goto LAB_001002da;
        if (param_9 == 4) {
          uVar4 = EVP_PKEY_parameters_eq(local_60,local_48);
          pcVar9 = "EVP_PKEY_parameters_eq(pkey, testpkey)";
        }
        else {
          uVar4 = EVP_PKEY_eq();
          pcVar9 = "EVP_PKEY_eq(pkey, testpkey)";
        }
        iVar2 = test_int_eq(param_1,param_2,pcVar9,&_LC12,uVar4,1);
        if (iVar2 == 0) goto LAB_001005c9;
        iVar2 = 2;
        param_6 = pcVar5;
      }
    }
    uVar4 = 0;
  }
  else {
    iVar2 = 0;
    local_60 = (EVP_PKEY *)0x0;
    while( true ) {
      uVar6 = OSSL_DECODER_CTX_new_for_pkey(&local_48,param_6,param_7,param_8,param_9,testctx,0);
      iVar3 = test_ptr(param_1,param_2,
                       "dctx = OSSL_DECODER_CTX_new_for_pkey(&testpkey, testtype, structure_type, keytype, selection, testctx, testpropq)"
                       ,uVar6);
      if (iVar3 == 0) break;
      sVar7 = strlen(param_10);
      iVar3 = OSSL_DECODER_CTX_set_passphrase(uVar6,param_10,sVar7);
      if (iVar3 == 0) {
        uVar4 = 0;
        goto LAB_001002eb;
      }
      uVar8 = BIO_ctrl(bp,1,0,(void *)0x0);
      iVar3 = test_int_gt(param_1,param_2,"BIO_reset(encoded_bio)",&_LC8,uVar8 & 0xffffffff,0);
      if (iVar3 == 0) break;
      uVar4 = OSSL_DECODER_from_bio(uVar6,bp);
      iVar3 = test_int_eq(param_1,param_2,"OSSL_DECODER_from_bio(dctx, encoded_bio)",
                          "(i == 2) ? 0 : 1",uVar4,iVar2 != 2);
      if (iVar3 == 0) break;
      OSSL_DECODER_CTX_free(uVar6);
      pEVar1 = local_48;
      if (iVar2 == 0) {
        iVar2 = 1;
        param_6 = (char *)0x0;
        local_48 = (EVP_PKEY *)0x0;
        local_60 = pEVar1;
      }
      else {
        if (iVar2 != 1) goto LAB_001002da;
        if (param_9 == 4) {
          uVar4 = EVP_PKEY_parameters_eq(local_60,local_48);
          pcVar9 = "EVP_PKEY_parameters_eq(pkey, testpkey)";
        }
        else {
          uVar4 = EVP_PKEY_eq();
          pcVar9 = "EVP_PKEY_eq(pkey, testpkey)";
        }
        iVar2 = test_int_eq(param_1,param_2,pcVar9,&_LC12,uVar4,1);
        if (iVar2 == 0) goto LAB_001005c9;
        iVar2 = 2;
        param_6 = pcVar5;
      }
    }
    uVar4 = 0;
  }
LAB_001002eb:
  EVP_PKEY_free(local_60);
  EVP_PKEY_free(local_48);
  BIO_free(bp);
  OSSL_DECODER_CTX_free(uVar6);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
LAB_001002da:
  uVar4 = 1;
  uVar6 = 0;
  *param_3 = local_60;
  local_60 = (EVP_PKEY *)0x0;
  goto LAB_001002eb;
LAB_001005c9:
  uVar4 = 0;
  uVar6 = 0;
  goto LAB_001002eb;
}



int encode_EVP_PKEY_prov
              (undefined8 param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4,
              undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
              char *param_9,long param_10)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  size_t sVar5;
  BIO_METHOD *type;
  BIO *bp;
  long lVar6;
  long in_FS_OFFSET;
  undefined8 *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (undefined8 *)0x0;
  uVar4 = OSSL_ENCODER_CTX_new_for_pkey(param_5,param_6,param_7,param_8,0);
  iVar2 = test_ptr(param_1,param_2,
                   "ectx = OSSL_ENCODER_CTX_new_for_pkey(pkey, selection, output_type, output_structure, testpropq)"
                   ,uVar4);
  if (iVar2 != 0) {
    uVar3 = OSSL_ENCODER_CTX_get_num_encoders(uVar4);
    iVar2 = test_int_gt(param_1,param_2,"OSSL_ENCODER_CTX_get_num_encoders(ectx)",&_LC8,uVar3,0);
    if (iVar2 != 0) {
      if (param_9 != (char *)0x0) {
        sVar5 = strlen(param_9);
        iVar2 = OSSL_ENCODER_CTX_set_passphrase(uVar4,param_9,sVar5);
        iVar2 = test_true(param_1,param_2,
                          "OSSL_ENCODER_CTX_set_passphrase(ectx, upass, strlen(pass))",iVar2 != 0);
        if (iVar2 == 0) goto LAB_00100657;
      }
      if (param_10 != 0) {
        iVar2 = OSSL_ENCODER_CTX_set_cipher(uVar4,param_10,0);
        iVar2 = test_true(param_1,param_2,"OSSL_ENCODER_CTX_set_cipher(ectx, pcipher, NULL)",
                          iVar2 != 0);
        if (iVar2 == 0) goto LAB_00100657;
      }
      type = BIO_s_mem();
      bp = BIO_new(type);
      iVar2 = test_ptr(param_1,param_2,"mem_ser = BIO_new(BIO_s_mem())",bp);
      if (iVar2 != 0) {
        iVar2 = OSSL_ENCODER_to_bio(uVar4,bp);
        iVar2 = test_true(param_1,param_2,"OSSL_ENCODER_to_bio(ectx, mem_ser)",iVar2 != 0);
        if (iVar2 == 0) goto LAB_0010065d;
        lVar6 = BIO_ctrl(bp,0x73,0,&local_48);
        iVar2 = test_true(param_1,param_2,"BIO_get_mem_ptr(mem_ser, &mem_buf) > 0",0 < lVar6);
        if (iVar2 != 0) {
          *param_3 = local_48[1];
          iVar2 = test_ptr(param_1,param_2,"*encoded = mem_buf->data");
          if (iVar2 != 0) {
            uVar1 = *local_48;
            *param_4 = uVar1;
            iVar2 = test_long_gt(param_1,param_2,"*encoded_len = mem_buf->length",&_LC8,uVar1,0);
            if (iVar2 != 0) {
              iVar2 = 1;
              local_48[1] = 0;
              *local_48 = 0;
              goto LAB_0010065d;
            }
          }
        }
      }
      iVar2 = 0;
      goto LAB_0010065d;
    }
  }
LAB_00100657:
  iVar2 = 0;
  bp = (BIO *)0x0;
LAB_0010065d:
  BIO_free(bp);
  OSSL_ENCODER_CTX_free(uVar4);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void dump_der(void)

{
  test_output_memory();
  return;
}



uint check_public_DER(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5)

{
  uint uVar1;
  int iVar2;
  EVP_PKEY *pkey;
  long in_FS_OFFSET;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = param_4;
  pkey = (EVP_PKEY *)d2i_PUBKEY_ex(0,&local_38,param_5,testctx,0);
  uVar1 = test_ptr(param_1,param_2,&_LC24,pkey);
  if (uVar1 != 0) {
    iVar2 = EVP_PKEY_is_a(pkey,param_3);
    iVar2 = test_true(param_1,param_2,"EVP_PKEY_is_a(pkey, type)",iVar2 != 0);
    uVar1 = (uint)(iVar2 != 0);
  }
  EVP_PKEY_free(pkey);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void test_mem(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  test_mem_eq(param_1,param_2,"data1","data2",param_3,param_4,param_5,param_6);
  return;
}



undefined4
check_protected_PKCS8_DER
          (undefined8 param_1,undefined4 param_2,undefined8 param_3,uchar *param_4,long param_5)

{
  undefined4 uVar1;
  X509_SIG *a;
  long in_FS_OFFSET;
  uchar *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_4;
  a = d2i_X509_SIG((X509_SIG **)0x0,&local_28,param_5);
  uVar1 = test_ptr(param_1,param_2,&_LC26,a);
  X509_SIG_free(a);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint check_unprotected_PKCS8_DER
               (undefined8 param_1,undefined4 param_2,undefined8 param_3,uchar *param_4,long param_5
               )

{
  uint uVar1;
  int iVar2;
  PKCS8_PRIV_KEY_INFO *a;
  EVP_PKEY *pkey;
  long in_FS_OFFSET;
  uchar *local_50;
  void *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = param_4;
  a = d2i_PKCS8_PRIV_KEY_INFO((PKCS8_PRIV_KEY_INFO **)0x0,&local_50,param_5);
  uVar1 = test_ptr(param_1,param_2,"p8inf",a);
  if (uVar1 != 0) {
    pkey = (EVP_PKEY *)EVP_PKCS82PKEY_ex(a,testctx,0);
    local_48 = (void *)0x0;
    uVar1 = test_ptr(param_1,param_2,&_LC24,pkey);
    if (uVar1 != 0) {
      iVar2 = EVP_PKEY_is_a(pkey,param_3);
      iVar2 = test_true(param_1,param_2,"EVP_PKEY_is_a(pkey, type)",iVar2 != 0);
      if (iVar2 == 0) {
        EVP_PKEY_type_names_do_all(pkey,collect_name,&local_48);
        if (local_48 != (void *)0x0) {
          test_note("%s isn\'t any of %s",param_3,local_48);
        }
        CRYPTO_free(local_48);
        uVar1 = 0;
      }
      else {
        iVar2 = test_true(param_1,param_2,"evp_pkey_is_provided(pkey)",
                          *(long *)&pkey[1].save_parameters != 0);
        uVar1 = (uint)(iVar2 != 0);
      }
      EVP_PKEY_free(pkey);
    }
  }
  PKCS8_PRIV_KEY_INFO_free(a);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void collect_name(char *param_1,long *param_2)

{
  int iVar1;
  char *pcVar3;
  size_t sVar2;
  
  sVar2 = strlen(param_1);
  iVar1 = (int)sVar2;
  pcVar3 = (char *)*param_2;
  if (pcVar3 != (char *)0x0) {
    sVar2 = strlen(pcVar3);
    iVar1 = iVar1 + 2 + (int)sVar2;
  }
  pcVar3 = (char *)CRYPTO_realloc(pcVar3,iVar1 + 1,"test/endecode_test.c",0x1fd);
  if (pcVar3 != (char *)0x0) {
    if (*param_2 == 0) {
      strcpy(pcVar3,param_1);
    }
    else {
      sVar2 = strlen(pcVar3);
      (pcVar3 + sVar2)[0] = ',';
      (pcVar3 + sVar2)[1] = ' ';
      strcpy(pcVar3 + sVar2 + 2,param_1);
    }
    *param_2 = (long)pcVar3;
  }
  return;
}



void check_PVK(void)

{
  undefined8 in_RCX;
  undefined8 in_R8;
  long in_FS_OFFSET;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_24 = 0;
  local_20 = 0;
  local_1c = 0xffffffff;
  local_18 = in_RCX;
  ossl_do_PVK_header(&local_18,in_R8,0,&local_1c,&local_24,&local_20);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int encode_EVP_PKEY_PVK(undefined8 param_1,ulong param_2,undefined8 *param_3,undefined8 *param_4,
                       undefined8 param_5,uint param_6,undefined8 param_7,undefined8 param_8,
                       long param_9)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  BIO_METHOD *type;
  BIO *bp;
  long lVar4;
  long in_FS_OFFSET;
  undefined8 *local_48;
  long local_40;
  
  bp = (BIO *)0x0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (undefined8 *)0x0;
  iVar2 = test_true(param_1,param_2,
                    "ossl_assert((selection & OSSL_KEYMGMT_SELECT_PRIVATE_KEY) != 0)",param_6 & 1);
  if (iVar2 != 0) {
    type = BIO_s_mem();
    bp = BIO_new(type);
    iVar2 = test_ptr(param_1,param_2 & 0xffffffff,"mem_ser = BIO_new(BIO_s_mem())",bp);
    if (iVar2 != 0) {
      uVar3 = i2b_PVK_bio_ex(bp,param_5,param_9 != 0,pass_pw,param_9,testctx,0);
      iVar2 = test_int_ge(param_1,param_2 & 0xffffffff,
                          "i2b_PVK_bio_ex(mem_ser, pkey, enc, pass_pw, (void *)pass, testctx, testpropq)"
                          ,&_LC8,uVar3,0);
      if (iVar2 == 0) goto LAB_00100ccd;
      lVar4 = BIO_ctrl(bp,0x73,0,&local_48);
      iVar2 = test_true(param_1,param_2 & 0xffffffff,"BIO_get_mem_ptr(mem_ser, &mem_buf) > 0",
                        0 < lVar4);
      if (iVar2 != 0) {
        *param_3 = local_48[1];
        iVar2 = test_ptr(param_1,param_2 & 0xffffffff,"*encoded = mem_buf->data");
        if (iVar2 != 0) {
          uVar1 = *local_48;
          *param_4 = uVar1;
          iVar2 = test_long_gt(param_1,param_2 & 0xffffffff,"*encoded_len = mem_buf->length",&_LC8,
                               uVar1,0);
          if (iVar2 != 0) {
            iVar2 = 1;
            local_48[1] = 0;
            *local_48 = 0;
            goto LAB_00100ccd;
          }
        }
      }
    }
    iVar2 = 0;
  }
LAB_00100ccd:
  BIO_free(bp);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void pass_pw(undefined8 param_1,int param_2,undefined8 param_3,char *param_4)

{
  OPENSSL_strlcpy(param_1,param_4,(long)param_2);
  strlen(param_4);
  return;
}



undefined4
check_public_MSBLOB(undefined8 param_1,undefined4 param_2,undefined8 param_3,uchar *param_4,
                   long param_5)

{
  undefined4 uVar1;
  EVP_PKEY *pkey;
  long in_FS_OFFSET;
  uchar *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_4;
  pkey = b2i_PublicKey(&local_28,param_5);
  uVar1 = test_ptr(param_1,param_2,&_LC24,pkey);
  EVP_PKEY_free(pkey);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
encode_EVP_PKEY_MSBLOB
          (undefined8 param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4,
          EVP_PKEY *param_5,ulong param_6)

{
  int iVar1;
  BIO_METHOD *type;
  BIO *out;
  long lVar2;
  char *pcVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined8 *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (undefined8 *)0x0;
  type = BIO_s_mem();
  out = BIO_new(type);
  iVar1 = test_ptr(param_1,param_2,"mem_ser = BIO_new(BIO_s_mem())",out);
  if (iVar1 != 0) {
    if ((param_6 & 1) == 0) {
      iVar1 = i2b_PublicKey_bio(out,param_5);
      pcVar3 = "i2b_PublicKey_bio(mem_ser, pkey)";
    }
    else {
      iVar1 = i2b_PrivateKey_bio(out,param_5);
      pcVar3 = "i2b_PrivateKey_bio(mem_ser, pkey)";
    }
    iVar1 = test_int_ge(param_1,param_2,pcVar3,&_LC8,iVar1,0);
    if (iVar1 != 0) {
      lVar2 = BIO_ctrl(out,0x73,0,&local_48);
      iVar1 = test_true(param_1,param_2,"BIO_get_mem_ptr(mem_ser, &mem_buf) > 0",0 < lVar2);
      if (iVar1 != 0) {
        *param_3 = local_48[1];
        iVar1 = test_ptr(param_1,param_2,"*encoded = mem_buf->data");
        if (iVar1 != 0) {
          uVar4 = *local_48;
          *param_4 = uVar4;
          iVar1 = test_long_gt(param_1,param_2,"*encoded_len = mem_buf->length",&_LC8,uVar4,0);
          if (iVar1 != 0) {
            uVar4 = 1;
            local_48[1] = 0;
            *local_48 = 0;
            goto LAB_00100fe2;
          }
        }
      }
    }
  }
  uVar4 = 0;
LAB_00100fe2:
  BIO_free(out);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



undefined4
check_MSBLOB(undefined8 param_1,undefined4 param_2,undefined8 param_3,uchar *param_4,long param_5)

{
  undefined4 uVar1;
  EVP_PKEY *pkey;
  long in_FS_OFFSET;
  uchar *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_4;
  pkey = b2i_PrivateKey(&local_28,param_5);
  uVar1 = test_ptr(param_1,param_2,&_LC24,pkey);
  EVP_PKEY_free(pkey);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong check_unprotected_legacy_PEM
                (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  size_t sVar3;
  
  iVar1 = BIO_snprintf(expected_pem_header_15,0x50,"-----BEGIN %s PRIVATE KEY-----",param_3);
  uVar2 = test_int_gt(param_1,param_2,
                      "BIO_snprintf(expected_pem_header, sizeof(expected_pem_header), \"-----BEGIN %s PRIVATE KEY-----\", type)"
                      ,&_LC8,iVar1,0);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  sVar3 = strlen(expected_pem_header_15);
  iVar1 = test_strn_eq(param_1,param_2,&_LC1,"expected_pem_header",param_4,sVar3,
                       expected_pem_header_15,sVar3);
  return (ulong)(iVar1 != 0);
}



ulong check_params_PEM(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  size_t sVar3;
  
  iVar1 = BIO_snprintf(expected_pem_header_14,0x50,"-----BEGIN %s PARAMETERS-----",param_3);
  uVar2 = test_int_gt(param_1,param_2,
                      "BIO_snprintf(expected_pem_header, sizeof(expected_pem_header), \"-----BEGIN %s PARAMETERS-----\", type)"
                      ,&_LC8,iVar1,0);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  sVar3 = strlen(expected_pem_header_14);
  iVar1 = test_strn_eq(param_1,param_2,&_LC1,"expected_pem_header",param_4,sVar3,
                       expected_pem_header_14,sVar3);
  return (ulong)(iVar1 != 0);
}



bool check_protected_legacy_PEM
               (undefined8 param_1,undefined4 param_2,undefined8 param_3,char *param_4)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  
  iVar1 = BIO_snprintf(expected_pem_header_16,0x50,"-----BEGIN %s PRIVATE KEY-----",param_3);
  iVar1 = test_int_gt(param_1,param_2,
                      "BIO_snprintf(expected_pem_header, sizeof(expected_pem_header), \"-----BEGIN %s PRIVATE KEY-----\", type)"
                      ,&_LC8,iVar1,0);
  if (iVar1 != 0) {
    sVar2 = strlen(expected_pem_header_16);
    iVar1 = test_strn_eq(param_1,param_2,&_LC1,"expected_pem_header",param_4,sVar2,
                         expected_pem_header_16,sVar2);
    if (iVar1 != 0) {
      pcVar3 = strstr(param_4,"\nDEK-Info: ");
      iVar1 = test_ptr(param_1,param_2,"strstr(data, \"\\nDEK-Info: \")",pcVar3);
      return iVar1 != 0;
    }
  }
  return false;
}



int encode_EVP_PKEY_legacy_PEM
              (undefined8 param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4,
              undefined8 param_5)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  BIO_METHOD *type;
  BIO *bp;
  long lVar4;
  long in_FS_OFFSET;
  char *in_stack_00000018;
  long in_stack_00000020;
  ulong local_68;
  undefined8 *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (undefined8 *)0x0;
  if ((in_stack_00000020 == 0) || (in_stack_00000018 == (char *)0x0)) {
    local_68 = 0;
    uVar3 = 0;
  }
  else {
    local_68 = strlen(in_stack_00000018);
    bp = (BIO *)0x0;
    uVar3 = EVP_CIPHER_fetch(testctx,in_stack_00000020,0);
    iVar2 = test_ptr(param_1,param_2,"cipher = EVP_CIPHER_fetch(testctx, pcipher, testpropq)",uVar3)
    ;
    if (iVar2 == 0) goto LAB_0010140c;
  }
  type = BIO_s_mem();
  bp = BIO_new(type);
  iVar2 = test_ptr(param_1,param_2,"mem_ser = BIO_new(BIO_s_mem())",bp);
  if (iVar2 != 0) {
    iVar2 = PEM_write_bio_PrivateKey_traditional
                      (bp,param_5,uVar3,in_stack_00000018,local_68 & 0xffffffff,0,0);
    iVar2 = test_true(param_1,param_2,
                      "PEM_write_bio_PrivateKey_traditional(mem_ser, pkey, cipher, upass, passlen, NULL, NULL)"
                      ,iVar2 != 0);
    if (iVar2 == 0) goto LAB_0010140c;
    lVar4 = BIO_ctrl(bp,0x73,0,&local_48);
    iVar2 = test_true(param_1,param_2,"BIO_get_mem_ptr(mem_ser, &mem_buf) > 0",0 < lVar4);
    if (iVar2 != 0) {
      *param_3 = local_48[1];
      iVar2 = test_ptr(param_1,param_2,"*encoded = mem_buf->data");
      if (iVar2 != 0) {
        uVar1 = *local_48;
        *param_4 = uVar1;
        iVar2 = test_long_gt(param_1,param_2,"*encoded_len = mem_buf->length",&_LC8,uVar1,0);
        if (iVar2 != 0) {
          iVar2 = 1;
          local_48[1] = 0;
          *local_48 = 0;
          goto LAB_0010140c;
        }
      }
    }
  }
  iVar2 = 0;
LAB_0010140c:
  BIO_free(bp);
  EVP_CIPHER_free(uVar3);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool check_params_DER(undefined8 param_1,undefined8 param_2,char *param_3,undefined8 param_4,
                     undefined8 param_5)

{
  char cVar1;
  int iVar2;
  EVP_PKEY *pkey;
  undefined8 uVar3;
  long in_FS_OFFSET;
  bool bVar4;
  undefined8 local_28;
  long local_20;
  
  cVar1 = *param_3;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_4;
  if (((cVar1 != 'D') || (param_3[1] != 'H')) || (uVar3 = 0x1c, param_3[2] != '\0')) {
    iVar2 = strcmp(param_3,"X9.42 DH");
    if (iVar2 == 0) {
      uVar3 = 0x398;
    }
    else {
      iVar2 = strcmp(param_3,"DSA");
      if (iVar2 == 0) {
        uVar3 = 0x74;
      }
      else {
        if (((cVar1 != 'E') || (param_3[1] != 'C')) || (param_3[2] != '\0')) {
          bVar4 = false;
          goto LAB_001015cd;
        }
        uVar3 = 0x198;
      }
    }
  }
  pkey = (EVP_PKEY *)d2i_KeyParams(uVar3,0,&local_28,param_5);
  bVar4 = pkey != (EVP_PKEY *)0x0;
  EVP_PKEY_free(pkey);
LAB_001015cd:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar4;
}



uint ec_encode_to_data_multi(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  EVP_PKEY *pkey;
  undefined8 uVar4;
  long in_FS_OFFSET;
  void *local_40;
  undefined8 local_38;
  long local_30;
  
  uVar4 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = (void *)0x0;
  local_38 = 0;
  pkey = (EVP_PKEY *)EVP_PKEY_Q_keygen(testctx,&_LC47,&_LC46,"P-256");
  uVar1 = test_ptr("test/endecode_test.c",0x523,
                   "key = EVP_PKEY_Q_keygen(testctx, \"\", \"EC\", \"P-256\")",pkey);
  if (uVar1 != 0) {
    uVar4 = OSSL_ENCODER_CTX_new_for_pkey(pkey,0x87,&_LC5,0,0);
    iVar2 = test_ptr("test/endecode_test.c",0x524,
                     "ectx = OSSL_ENCODER_CTX_new_for_pkey(key, EVP_PKEY_KEYPAIR, \"DER\", NULL, NULL)"
                     ,uVar4);
    if (iVar2 != 0) {
      uVar3 = OSSL_ENCODER_to_data(uVar4,0,&local_38);
      iVar2 = test_int_eq("test/endecode_test.c",0x526,"OSSL_ENCODER_to_data(ectx, NULL, &enc_len)",
                          &_LC12,uVar3,1);
      if (iVar2 != 0) {
        uVar3 = OSSL_ENCODER_to_data(uVar4,&local_40,&local_38);
        iVar2 = test_int_eq("test/endecode_test.c",0x527,
                            "OSSL_ENCODER_to_data(ectx, &enc, &enc_len)",&_LC12,uVar3,1);
        uVar1 = (uint)(iVar2 != 0);
        goto LAB_001016cd;
      }
    }
    uVar1 = 0;
  }
LAB_001016cd:
  CRYPTO_free(local_40);
  EVP_PKEY_free(pkey);
  OSSL_ENCODER_CTX_free(uVar4);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 make_template(byte *param_1,long param_2)

{
  int iVar1;
  EVP_PKEY_CTX *ctx;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  
  uVar2 = keyctx;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 0;
  iVar1 = *param_1 - 0x44;
  if ((iVar1 == 0) && (iVar1 = param_1[1] - 0x48, iVar1 == 0)) {
    if (param_1[2] == 0) goto LAB_001018c3;
  }
  else if (iVar1 == 0) {
LAB_001018c3:
    uVar2 = get_dh512(keyctx);
    goto LAB_0010188d;
  }
  iVar1 = strcmp((char *)param_1,"X9.42 DH");
  if (iVar1 == 0) {
    uVar2 = get_dhx512(uVar2);
    goto LAB_0010188d;
  }
  ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(uVar2,param_1,0);
  if (ctx != (EVP_PKEY_CTX *)0x0) {
    iVar1 = EVP_PKEY_paramgen_init(ctx);
    if (0 < iVar1) {
      if (param_2 != 0) {
        iVar1 = EVP_PKEY_CTX_set_params(ctx,param_2);
        if (iVar1 < 1) goto LAB_00101881;
      }
      EVP_PKEY_generate(ctx,&local_28);
    }
  }
LAB_00101881:
  EVP_PKEY_CTX_free(ctx);
  uVar2 = local_28;
LAB_0010188d:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool do_create_ec_explicit_trinomial_params_constprop_0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  BIGNUM *ret;
  BIGNUM *ret_00;
  BIGNUM *ret_01;
  BIGNUM *ret_02;
  BIGNUM *ret_03;
  BIGNUM *pBVar2;
  
  ret = BN_CTX_get(bnctx);
  iVar1 = test_ptr("test/endecode_test.c",0x4e3,"a = BN_CTX_get(bnctx)",ret);
  if (iVar1 != 0) {
    ret_00 = BN_CTX_get(bnctx);
    iVar1 = test_ptr("test/endecode_test.c",0x4e4,"b = BN_CTX_get(bnctx)",ret_00);
    if (iVar1 != 0) {
      ret_01 = BN_CTX_get(bnctx);
      iVar1 = test_ptr("test/endecode_test.c",0x4e5,"poly = BN_CTX_get(bnctx)",ret_01);
      if (iVar1 != 0) {
        ret_02 = BN_CTX_get(bnctx);
        iVar1 = test_ptr("test/endecode_test.c",0x4e6,"order = BN_CTX_get(bnctx)",ret_02);
        if (iVar1 != 0) {
          ret_03 = BN_CTX_get(bnctx);
          iVar1 = test_ptr("test/endecode_test.c",0x4e7,"cofactor = BN_CTX_get(bnctx)",ret_03);
          if (iVar1 != 0) {
            pBVar2 = BN_bin2bn(poly_data_5,0x1e,ret_01);
            iVar1 = test_ptr("test/endecode_test.c",0x4e8,
                             "BN_bin2bn(poly_data, sizeof(poly_data), poly)",pBVar2);
            if (iVar1 != 0) {
              pBVar2 = BN_bin2bn(a_data_4,0x1e,ret);
              iVar1 = test_ptr("test/endecode_test.c",0x4e9,"BN_bin2bn(a_data, sizeof(a_data), a)",
                               pBVar2);
              if (iVar1 != 0) {
                pBVar2 = BN_bin2bn(b_data_3,0x1e,ret_00);
                iVar1 = test_ptr("test/endecode_test.c",0x4ea,"BN_bin2bn(b_data, sizeof(b_data), b)"
                                 ,pBVar2);
                if (iVar1 != 0) {
                  pBVar2 = BN_bin2bn(order_data_2,0x1e,ret_02);
                  iVar1 = test_ptr("test/endecode_test.c",0x4eb,
                                   "BN_bin2bn(order_data, sizeof(order_data), order)",pBVar2);
                  if (iVar1 != 0) {
                    pBVar2 = BN_bin2bn("\x04",1,ret_03);
                    iVar1 = test_ptr("test/endecode_test.c",0x4ec,
                                     "BN_bin2bn(cofactor_data, sizeof(cofactor_data), cofactor)",
                                     pBVar2);
                    if (iVar1 != 0) {
                      iVar1 = OSSL_PARAM_BLD_push_utf8_string
                                        (param_1,"field-type","characteristic-two-field",0);
                      iVar1 = test_true("test/endecode_test.c",0x4ed,
                                        "OSSL_PARAM_BLD_push_utf8_string(bld, OSSL_PKEY_PARAM_EC_FIELD_TYPE, SN_X9_62_characteristic_two_field, 0)"
                                        ,iVar1 != 0);
                      if (iVar1 != 0) {
                        iVar1 = OSSL_PARAM_BLD_push_BN(param_1,&_LC65,ret_01);
                        iVar1 = test_true("test/endecode_test.c",0x4f0,
                                          "OSSL_PARAM_BLD_push_BN(bld, OSSL_PKEY_PARAM_EC_P, poly)",
                                          iVar1 != 0);
                        if (iVar1 != 0) {
                          iVar1 = OSSL_PARAM_BLD_push_BN(param_1,&_LC67,ret);
                          iVar1 = test_true("test/endecode_test.c",0x4f1,
                                            "OSSL_PARAM_BLD_push_BN(bld, OSSL_PKEY_PARAM_EC_A, a)",
                                            iVar1 != 0);
                          if (iVar1 != 0) {
                            iVar1 = OSSL_PARAM_BLD_push_BN(param_1,&_LC69,ret_00);
                            iVar1 = test_true("test/endecode_test.c",0x4f2,
                                              "OSSL_PARAM_BLD_push_BN(bld, OSSL_PKEY_PARAM_EC_B, b)"
                                              ,iVar1 != 0);
                            if (iVar1 != 0) {
                              iVar1 = OSSL_PARAM_BLD_push_BN(param_1,"order",ret_02);
                              iVar1 = test_true("test/endecode_test.c",0x4f3,
                                                "OSSL_PARAM_BLD_push_BN(bld, OSSL_PKEY_PARAM_EC_ORDER, order)"
                                                ,iVar1 != 0);
                              if (iVar1 != 0) {
                                iVar1 = OSSL_PARAM_BLD_push_octet_string
                                                  (param_1,"generator",param_2,0x3d);
                                iVar1 = test_true("test/endecode_test.c",0x4f5,
                                                  "OSSL_PARAM_BLD_push_octet_string(bld, OSSL_PKEY_PARAM_EC_GENERATOR, gen, gen_len)"
                                                  ,iVar1 != 0);
                                if (iVar1 != 0) {
                                  iVar1 = OSSL_PARAM_BLD_push_BN(param_1,"cofactor",ret_03);
                                  iVar1 = test_true("test/endecode_test.c",0x4f7,
                                                                                                        
                                                  "OSSL_PARAM_BLD_push_BN(bld, OSSL_PKEY_PARAM_EC_COFACTOR, cofactor)"
                                                  ,iVar1 != 0);
                                  return iVar1 != 0;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return false;
}



bool do_create_ec_explicit_prime_params_constprop_0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  BIGNUM *pBVar2;
  BIGNUM *ret;
  BIGNUM *ret_00;
  BIGNUM *ret_01;
  BIGNUM *pBVar3;
  
  pBVar2 = BN_CTX_get(bnctx);
  iVar1 = test_ptr("test/endecode_test.c",0x48a,"a = BN_CTX_get(bnctx)",pBVar2);
  if (iVar1 != 0) {
    ret = BN_CTX_get(bnctx);
    iVar1 = test_ptr("test/endecode_test.c",0x48b,"b = BN_CTX_get(bnctx)",ret);
    if (iVar1 != 0) {
      ret_00 = BN_CTX_get(bnctx);
      iVar1 = test_ptr("test/endecode_test.c",0x48c,"prime = BN_CTX_get(bnctx)",ret_00);
      if (iVar1 != 0) {
        ret_01 = BN_CTX_get(bnctx);
        iVar1 = test_ptr("test/endecode_test.c",0x48d,"order = BN_CTX_get(bnctx)",ret_01);
        if (iVar1 != 0) {
          pBVar3 = BN_bin2bn(prime_data_12,0x21,ret_00);
          iVar1 = test_ptr("test/endecode_test.c",0x48e,
                           "BN_bin2bn(prime_data, sizeof(prime_data), prime)",pBVar3);
          if (iVar1 != 0) {
            pBVar3 = BN_bin2bn(a_data_11,0x21,pBVar2);
            iVar1 = test_ptr("test/endecode_test.c",0x48f,"BN_bin2bn(a_data, sizeof(a_data), a)",
                             pBVar3);
            if (iVar1 != 0) {
              pBVar3 = BN_bin2bn(b_data_10,0x20,ret);
              iVar1 = test_ptr("test/endecode_test.c",0x490,"BN_bin2bn(b_data, sizeof(b_data), b)",
                               pBVar3);
              if (iVar1 != 0) {
                pBVar3 = BN_bin2bn(order_data_9,0x21,ret_01);
                iVar1 = test_ptr("test/endecode_test.c",0x491,
                                 "BN_bin2bn(order_data, sizeof(order_data), order)",pBVar3);
                if (iVar1 != 0) {
                  iVar1 = OSSL_PARAM_BLD_push_utf8_string(param_1,"field-type","prime-field",0);
                  iVar1 = test_true("test/endecode_test.c",0x492,
                                    "OSSL_PARAM_BLD_push_utf8_string(bld, OSSL_PKEY_PARAM_EC_FIELD_TYPE, SN_X9_62_prime_field, 0)"
                                    ,iVar1 != 0);
                  if (iVar1 != 0) {
                    iVar1 = OSSL_PARAM_BLD_push_BN(param_1,&_LC65,ret_00);
                    iVar1 = test_true("test/endecode_test.c",0x495,
                                      "OSSL_PARAM_BLD_push_BN(bld, OSSL_PKEY_PARAM_EC_P, prime)",
                                      iVar1 != 0);
                    if (iVar1 != 0) {
                      iVar1 = OSSL_PARAM_BLD_push_BN(param_1,&_LC67,pBVar2);
                      iVar1 = test_true("test/endecode_test.c",0x496,
                                        "OSSL_PARAM_BLD_push_BN(bld, OSSL_PKEY_PARAM_EC_A, a)",
                                        iVar1 != 0);
                      if (iVar1 != 0) {
                        iVar1 = OSSL_PARAM_BLD_push_BN(param_1,&_LC69,ret);
                        iVar1 = test_true("test/endecode_test.c",0x497,
                                          "OSSL_PARAM_BLD_push_BN(bld, OSSL_PKEY_PARAM_EC_B, b)",
                                          iVar1 != 0);
                        if (iVar1 != 0) {
                          iVar1 = OSSL_PARAM_BLD_push_BN(param_1,"order",ret_01);
                          iVar1 = test_true("test/endecode_test.c",0x498,
                                            "OSSL_PARAM_BLD_push_BN(bld, OSSL_PKEY_PARAM_EC_ORDER, order)"
                                            ,iVar1 != 0);
                          if (iVar1 != 0) {
                            iVar1 = OSSL_PARAM_BLD_push_octet_string
                                              (param_1,"generator",param_2,0x41);
                            iVar1 = test_true("test/endecode_test.c",0x49a,
                                              "OSSL_PARAM_BLD_push_octet_string(bld, OSSL_PKEY_PARAM_EC_GENERATOR, gen, gen_len)"
                                              ,iVar1 != 0);
                            if (iVar1 != 0) {
                              iVar1 = OSSL_PARAM_BLD_push_octet_string(param_1,&_LC82,seed_8,0x14);
                              iVar1 = test_true("test/endecode_test.c",0x49c,
                                                "OSSL_PARAM_BLD_push_octet_string(bld, OSSL_PKEY_PARAM_EC_SEED, seed, sizeof(seed))"
                                                ,iVar1 != 0);
                              if (iVar1 != 0) {
                                pBVar2 = BN_value_one();
                                iVar1 = OSSL_PARAM_BLD_push_BN(param_1,"cofactor",pBVar2);
                                iVar1 = test_true("test/endecode_test.c",0x49e,
                                                  "OSSL_PARAM_BLD_push_BN(bld, OSSL_PKEY_PARAM_EC_COFACTOR, BN_value_one())"
                                                  ,iVar1 != 0);
                                return iVar1 != 0;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return false;
}



EVP_PKEY * make_key_constprop_0(undefined8 param_1,long param_2)

{
  int iVar1;
  EVP_PKEY_CTX *ctx;
  long in_FS_OFFSET;
  EVP_PKEY *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = (EVP_PKEY *)0x0;
  if (param_2 == 0) {
    ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(keyctx,param_1,0);
  }
  else {
    ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(keyctx);
  }
  if (ctx != (EVP_PKEY_CTX *)0x0) {
    iVar1 = EVP_PKEY_keygen_init(ctx);
    if (0 < iVar1) {
      EVP_PKEY_keygen(ctx,&local_18);
    }
  }
  EVP_PKEY_CTX_free(ctx);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_18;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
test_encode_decode_constprop_0
          (undefined4 param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5,
          char *param_6,long param_7,long param_8,code *param_9,code *param_10,uint param_11)

{
  int iVar1;
  undefined4 uVar2;
  EVP_PKEY *pkey;
  undefined8 uVar3;
  EVP_PKEY *pkey_00;
  long in_FS_OFFSET;
  void *local_70;
  long local_68;
  EVP_PKEY *local_60;
  EVP_PKEY *local_58;
  void *local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = (void *)0x0;
  local_68 = 0;
  local_60 = (EVP_PKEY *)0x0;
  local_58 = (EVP_PKEY *)0x0;
  local_50 = (void *)0x0;
  local_48 = 0;
  iVar1 = (*param_9)("test/endecode_test.c",param_1,&local_70,&local_68,param_3,param_4,param_5,
                     param_6,param_7,param_8);
  iVar1 = test_true("test/endecode_test.c",0xb5,
                    "encode_cb(file, line, &encoded, &encoded_len, pkey, selection, output_type, output_structure, pass, pcipher)"
                    ,iVar1 != 0);
  if (iVar1 != 0) {
    if ((param_11 & 2) == 0) {
      iVar1 = (*param_10)("test/endecode_test.c",param_1,param_2);
      iVar1 = test_true("test/endecode_test.c",0xc2,
                        "check_cb(file, line, type, encoded, encoded_len)",iVar1 != 0);
      if (iVar1 != 0) {
        if (param_11 == 0) {
LAB_0010251a:
          param_2 = 0;
        }
        iVar1 = decode_EVP_PKEY_prov
                          ("test/endecode_test.c",param_1,&local_60,local_70,local_68,param_5,
                           param_6,param_2,param_4,param_7);
        iVar1 = test_true("test/endecode_test.c",0xc3,
                          "decode_cb(file, line, (void **)&pkey2, encoded, encoded_len, output_type, output_structure, (flags & FLAG_DECODE_WITH_TYPE ? type : NULL), selection, pass)"
                          ,iVar1 != 0);
        if (iVar1 != 0) {
          if ((param_6 == (char *)0x0) || (iVar1 = strcmp(param_6,"type-specific"), iVar1 != 0)) {
            iVar1 = decode_EVP_PKEY_prov
                              ("test/endecode_test.c",param_1,&local_58,local_70,local_68,param_5,
                               param_6,param_2,0,param_7);
            iVar1 = test_true("test/endecode_test.c",0xc9,
                              "decode_cb(file, line, (void **)&pkey3, encoded, encoded_len, output_type, output_structure, (flags & FLAG_DECODE_WITH_TYPE ? type : NULL), 0, pass)"
                              ,iVar1 != 0);
            if (iVar1 == 0) goto LAB_001023a0;
          }
          pkey_00 = local_60;
          iVar1 = (*param_9)("test/endecode_test.c",param_1,&local_50,&local_48,local_60,param_4,
                             param_5,param_6,param_7,param_8);
          iVar1 = test_true("test/endecode_test.c",0xcd,
                            "encode_cb(file, line, &encoded2, &encoded2_len, pkey2, selection, output_type, output_structure, pass, pcipher)"
                            ,iVar1 != 0);
          if (iVar1 != 0) {
            if (param_4 == 4) {
              uVar2 = EVP_PKEY_parameters_eq(param_3,pkey_00);
              iVar1 = test_int_eq("test/endecode_test.c",0xd2,"EVP_PKEY_parameters_eq(pkey, pkey2)",
                                  &_LC12,uVar2,1);
              pkey = local_58;
              if (iVar1 != 0) {
                if (local_58 == (EVP_PKEY *)0x0) goto LAB_00102528;
                uVar2 = EVP_PKEY_parameters_eq(param_3,local_58);
                iVar1 = test_int_eq("test/endecode_test.c",0xd4,
                                    "EVP_PKEY_parameters_eq(pkey, pkey3)",&_LC12,uVar2,1);
                if (iVar1 != 0) goto LAB_0010235d;
              }
            }
            else {
              uVar2 = EVP_PKEY_eq();
              iVar1 = test_int_eq("test/endecode_test.c",0xd7,"EVP_PKEY_eq(pkey, pkey2)",&_LC12,
                                  uVar2,1);
              pkey = local_58;
              if (iVar1 != 0) {
                if (local_58 == (EVP_PKEY *)0x0) {
LAB_00102528:
                  pkey = (EVP_PKEY *)0x0;
                }
                else {
                  uVar2 = EVP_PKEY_eq(param_3,local_58);
                  iVar1 = test_int_eq("test/endecode_test.c",0xd9,"EVP_PKEY_eq(pkey, pkey3)",&_LC12,
                                      uVar2,1);
                  if (iVar1 == 0) goto LAB_001023a0;
                }
LAB_0010235d:
                uVar3 = 1;
                if ((param_7 != 0 || param_8 != 0) ||
                   (iVar1 = test_mem_eq("test/endecode_test.c",param_1,"data1","data2",local_70,
                                        local_68,local_50,local_48), iVar1 != 0)) goto LAB_001023dd;
              }
            }
          }
        }
      }
    }
    else if ((is_fips == 0) || (is_fips_3_0_0 != 0)) {
      iVar1 = (*param_10)("test/endecode_test.c",param_1,param_2,local_70,local_68);
      iVar1 = test_true("test/endecode_test.c",0xc2,
                        "check_cb(file, line, type, encoded, encoded_len)",iVar1 != 0);
      if (iVar1 != 0) goto LAB_0010251a;
    }
    else {
      iVar1 = decode_EVP_PKEY_prov
                        ("test/endecode_test.c",param_1,&local_60,local_70,local_68,param_5,param_6,
                         0,param_4,param_7);
      iVar1 = test_false("test/endecode_test.c",0xba,
                         "decode_cb(file, line, (void **)&pkey2, encoded, encoded_len, output_type, output_structure, (flags & FLAG_DECODE_WITH_TYPE ? type : NULL), selection, pass)"
                         ,iVar1 != 0);
      if (iVar1 != 0) {
        pkey = (EVP_PKEY *)0x0;
        uVar3 = 1;
        pkey_00 = local_60;
        goto LAB_001023dd;
      }
    }
  }
LAB_001023a0:
  if ((local_70 != (void *)0x0) && (local_68 != 0)) {
    test_output_memory("|pkey| encoded");
  }
  if ((local_50 != (void *)0x0) && (local_48 != 0)) {
    test_output_memory("|pkey2| encoded");
  }
  uVar3 = 0;
  pkey = local_58;
  pkey_00 = local_60;
LAB_001023dd:
  CRYPTO_free(local_70);
  CRYPTO_free(local_50);
  EVP_PKEY_free(pkey_00);
  EVP_PKEY_free(pkey);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



void test_unprotected_ECExplicitPrimeNamedCurve_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x231,&_LC46,key_ECExplicitPrimeNamedCurve,0x87,&_LC5,"PrivateKeyInfo",0,0,
             encode_EVP_PKEY_prov,check_unprotected_PKCS8_DER,0);
  return;
}



void test_params_DHX_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x27a,"X9.42 DH",key_DHX,4,&_LC5,"type-specific",0,0,encode_EVP_PKEY_prov,
             check_params_DER,1);
  return;
}



void test_unprotected_RSA_via_MSBLOB(void)

{
  test_encode_decode_constprop_0
            (0x2b3,&_LC99,key_RSA,7,"MSBLOB",0,0,0,encode_EVP_PKEY_MSBLOB,check_MSBLOB,0);
  return;
}



void test_unprotected_RSA_via_PVK(void)

{
  test_encode_decode_constprop_0
            (0x2c8,&_LC99,key_RSA,7,&_LC100,0,0,0,encode_EVP_PKEY_PVK,check_PVK,0);
  return;
}



void test_protected_SLH_DSA_SHA2_128f_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x2e2,"SLH-DSA-SHA2-128f",key_SLH_DSA_SHA2_128f,7,&_LC5,"EncryptedPrivateKeyInfo",
             "the holy handgrenade of antioch","AES-256-CBC",encode_EVP_PKEY_prov,
             check_protected_PKCS8_DER,0);
  return;
}



ulong test_protected_RSA_via_PVK(void)

{
  undefined8 uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = key_RSA;
  lVar3 = OSSL_PROVIDER_load(testctx,"legacy");
  if (lVar3 != 0) {
    uVar2 = test_encode_decode_constprop_0
                      (0x327,&_LC99,uVar1,7,&_LC100,0,"the holy handgrenade of antioch",0,
                       encode_EVP_PKEY_PVK,check_PVK,0);
    OSSL_PROVIDER_unload(lVar3);
    return (ulong)uVar2;
  }
  uVar4 = test_skip("test/endecode_test.c",0x325,"Legacy provider not available");
  return uVar4;
}



void test_public_DH_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x33f,&_LC108,key_DH,0x86,&_LC5,"SubjectPublicKeyInfo",0,0,encode_EVP_PKEY_prov,
             check_public_DER,0);
  return;
}



void test_public_RSA_via_MSBLOB(void)

{
  test_encode_decode_constprop_0
            (0x36c,&_LC99,key_RSA,6,"MSBLOB",0,0,0,encode_EVP_PKEY_MSBLOB,check_public_MSBLOB,0);
  return;
}



void test_unprotected_DSA_via_MSBLOB(void)

{
  test_encode_decode_constprop_0
            (0x2b3,&_LC44,key_DSA,7,"MSBLOB",0,0,0,encode_EVP_PKEY_MSBLOB,check_MSBLOB,0);
  return;
}



void test_public_DSA_via_MSBLOB(void)

{
  test_encode_decode_constprop_0
            (0x36c,&_LC44,key_DSA,6,"MSBLOB",0,0,0,encode_EVP_PKEY_MSBLOB,check_public_MSBLOB,0);
  return;
}



void test_unprotected_DSA_via_PVK(void)

{
  test_encode_decode_constprop_0
            (0x2c8,&_LC44,key_DSA,7,&_LC100,0,0,0,encode_EVP_PKEY_PVK,check_PVK,0);
  return;
}



void test_unprotected_ECExplicitPrime2G_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x231,&_LC46,key_ECExplicitPrime2G,0x87,&_LC5,"PrivateKeyInfo",0,0,encode_EVP_PKEY_prov
             ,check_unprotected_PKCS8_DER,2);
  return;
}



void test_public_ECExplicitPrime2G_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x33f,&_LC46,key_ECExplicitPrime2G,0x86,&_LC5,"SubjectPublicKeyInfo",0,0,
             encode_EVP_PKEY_prov,check_public_DER,2);
  return;
}



void test_unprotected_ECExplicitTri2G_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x231,&_LC46,key_ECExplicitTri2G,0x87,&_LC5,"PrivateKeyInfo",0,0,encode_EVP_PKEY_prov,
             check_unprotected_PKCS8_DER,2);
  return;
}



void test_public_ECExplicitTri2G_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x33f,&_LC46,key_ECExplicitTri2G,0x86,&_LC5,"SubjectPublicKeyInfo",0,0,
             encode_EVP_PKEY_prov,check_public_DER,2);
  return;
}



void test_unprotected_SM2_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x231,&_LC109,key_SM2,0x87,&_LC5,"PrivateKeyInfo",0,0,encode_EVP_PKEY_prov,
             check_unprotected_PKCS8_DER,2);
  return;
}



void test_public_SM2_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x33f,&_LC109,key_SM2,0x86,&_LC5,"SubjectPublicKeyInfo",0,0,encode_EVP_PKEY_prov,
             check_public_DER,2);
  return;
}



undefined8
test_encode_decode_constprop_1
          (undefined4 param_1,undefined8 param_2,undefined8 param_3,int param_4,char *param_5,
          long param_6,long param_7,code *param_8,code *param_9,uint param_10)

{
  int iVar1;
  undefined4 uVar2;
  EVP_PKEY *pkey;
  undefined8 uVar3;
  EVP_PKEY *pkey_00;
  long in_FS_OFFSET;
  void *local_70;
  long local_68;
  EVP_PKEY *local_60;
  EVP_PKEY *local_58;
  void *local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = (void *)0x0;
  local_68 = 0;
  local_60 = (EVP_PKEY *)0x0;
  local_58 = (EVP_PKEY *)0x0;
  local_50 = (void *)0x0;
  local_48 = 0;
  iVar1 = (*param_8)("test/endecode_test.c",param_1,&local_70,&local_68,param_3,param_4,&_LC4,
                     param_5,param_6,param_7);
  iVar1 = test_true("test/endecode_test.c",0xb5,
                    "encode_cb(file, line, &encoded, &encoded_len, pkey, selection, output_type, output_structure, pass, pcipher)"
                    ,iVar1 != 0);
  if (iVar1 != 0) {
    if ((param_10 & 2) == 0) {
      iVar1 = (*param_9)("test/endecode_test.c",param_1,param_2);
      iVar1 = test_true("test/endecode_test.c",0xc2,
                        "check_cb(file, line, type, encoded, encoded_len)",iVar1 != 0);
      if (iVar1 != 0) {
        if (param_10 == 0) {
LAB_00103001:
          param_2 = 0;
        }
        iVar1 = decode_EVP_PKEY_prov
                          ("test/endecode_test.c",param_1,&local_60,local_70,local_68,&_LC4,param_5,
                           param_2,param_4,param_6);
        iVar1 = test_true("test/endecode_test.c",0xc3,
                          "decode_cb(file, line, (void **)&pkey2, encoded, encoded_len, output_type, output_structure, (flags & FLAG_DECODE_WITH_TYPE ? type : NULL), selection, pass)"
                          ,iVar1 != 0);
        if (iVar1 != 0) {
          if ((param_5 == (char *)0x0) || (iVar1 = strcmp(param_5,"type-specific"), iVar1 != 0)) {
            iVar1 = decode_EVP_PKEY_prov
                              ("test/endecode_test.c",param_1,&local_58,local_70,local_68,&_LC4,
                               param_5,param_2,0,param_6);
            iVar1 = test_true("test/endecode_test.c",0xc9,
                              "decode_cb(file, line, (void **)&pkey3, encoded, encoded_len, output_type, output_structure, (flags & FLAG_DECODE_WITH_TYPE ? type : NULL), 0, pass)"
                              ,iVar1 != 0);
            if (iVar1 == 0) goto LAB_00102e80;
          }
          pkey_00 = local_60;
          iVar1 = (*param_8)("test/endecode_test.c",param_1,&local_50,&local_48,local_60,param_4,
                             &_LC4,param_5,param_6,param_7);
          iVar1 = test_true("test/endecode_test.c",0xcd,
                            "encode_cb(file, line, &encoded2, &encoded2_len, pkey2, selection, output_type, output_structure, pass, pcipher)"
                            ,iVar1 != 0);
          if (iVar1 != 0) {
            if (param_4 == 4) {
              uVar2 = EVP_PKEY_parameters_eq(param_3,pkey_00);
              iVar1 = test_int_eq("test/endecode_test.c",0xd2,"EVP_PKEY_parameters_eq(pkey, pkey2)",
                                  &_LC12,uVar2,1);
              pkey = local_58;
              if (iVar1 != 0) {
                if (local_58 == (EVP_PKEY *)0x0) goto LAB_00103010;
                uVar2 = EVP_PKEY_parameters_eq(param_3,local_58);
                iVar1 = test_int_eq("test/endecode_test.c",0xd4,
                                    "EVP_PKEY_parameters_eq(pkey, pkey3)",&_LC12,uVar2,1);
                if (iVar1 != 0) goto LAB_00102e3e;
              }
            }
            else {
              uVar2 = EVP_PKEY_eq();
              iVar1 = test_int_eq("test/endecode_test.c",0xd7,"EVP_PKEY_eq(pkey, pkey2)",&_LC12,
                                  uVar2,1);
              pkey = local_58;
              if (iVar1 != 0) {
                if (local_58 == (EVP_PKEY *)0x0) {
LAB_00103010:
                  pkey = (EVP_PKEY *)0x0;
                }
                else {
                  uVar2 = EVP_PKEY_eq(param_3,local_58);
                  iVar1 = test_int_eq("test/endecode_test.c",0xd9,"EVP_PKEY_eq(pkey, pkey3)",&_LC12,
                                      uVar2,1);
                  if (iVar1 == 0) goto LAB_00102e80;
                }
LAB_00102e3e:
                uVar3 = 1;
                if ((param_6 != 0 || param_7 != 0) ||
                   (iVar1 = test_strn_eq("test/endecode_test.c",param_1,"data1","data2",local_70,
                                         local_68,local_50,local_48), iVar1 != 0))
                goto LAB_00102ebd;
              }
            }
          }
        }
      }
    }
    else if ((is_fips == 0) || (is_fips_3_0_0 != 0)) {
      iVar1 = (*param_9)("test/endecode_test.c",param_1,param_2,local_70,local_68);
      iVar1 = test_true("test/endecode_test.c",0xc2,
                        "check_cb(file, line, type, encoded, encoded_len)",iVar1 != 0);
      if (iVar1 != 0) goto LAB_00103001;
    }
    else {
      iVar1 = decode_EVP_PKEY_prov
                        ("test/endecode_test.c",param_1,&local_60,local_70,local_68,&_LC4,param_5,0,
                         param_4,param_6);
      iVar1 = test_false("test/endecode_test.c",0xba,
                         "decode_cb(file, line, (void **)&pkey2, encoded, encoded_len, output_type, output_structure, (flags & FLAG_DECODE_WITH_TYPE ? type : NULL), selection, pass)"
                         ,iVar1 != 0);
      if (iVar1 != 0) {
        pkey = (EVP_PKEY *)0x0;
        uVar3 = 1;
        pkey_00 = local_60;
        goto LAB_00102ebd;
      }
    }
  }
LAB_00102e80:
  if ((local_70 != (void *)0x0) && (local_68 != 0)) {
    test_output_string("|pkey| encoded",local_70,local_68 + -1);
  }
  if ((local_50 != (void *)0x0) && (local_48 != 0)) {
    test_output_string("|pkey2| encoded",local_50,local_48 + -1);
  }
  uVar3 = 0;
  pkey = local_58;
  pkey_00 = local_60;
LAB_00102ebd:
  CRYPTO_free(local_70);
  CRYPTO_free(local_50);
  EVP_PKEY_free(pkey_00);
  EVP_PKEY_free(pkey);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



void test_unprotected_ECExplicitPrimeNamedCurve_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x247,&_LC46,key_ECExplicitPrimeNamedCurve,0x87,"PrivateKeyInfo",0,0,
             encode_EVP_PKEY_prov,check_unprotected_PKCS8_PEM,0);
  return;
}



void test_params_DHX_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x283,"X9.42 DH",key_DHX,4,"type-specific",0,0,encode_EVP_PKEY_prov,check_params_PEM,0)
  ;
  return;
}



void test_unprotected_RSA_via_legacy_PEM(void)

{
  if ((default_libctx != 0) && (is_fips == 0)) {
    test_encode_decode_constprop_1
              (0x29d,&_LC99,key_RSA,7,"type-specific",0,0,encode_EVP_PKEY_legacy_PEM,
               check_unprotected_legacy_PEM,0);
    return;
  }
  test_skip("test/endecode_test.c",0x29b,
            "Test not available if using a non-default library context or FIPS provider");
  return;
}



void test_protected_SLH_DSA_SHA2_128f_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x2f9,"SLH-DSA-SHA2-128f",key_SLH_DSA_SHA2_128f,7,"EncryptedPrivateKeyInfo",
             "the holy handgrenade of antioch","AES-256-CBC",encode_EVP_PKEY_prov,
             check_protected_PKCS8_PEM,0);
  return;
}



void test_protected_RSA_via_legacy_PEM(void)

{
  if ((default_libctx != 0) && (is_fips == 0)) {
    test_encode_decode_constprop_1
              (0x316,&_LC99,key_RSA,7,"type-specific","the holy handgrenade of antioch",
               "AES-256-CBC",encode_EVP_PKEY_legacy_PEM,check_protected_legacy_PEM,0);
    return;
  }
  test_skip("test/endecode_test.c",0x314,
            "Test not available if using a non-default library context or FIPS provider");
  return;
}



void test_public_DH_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x355,&_LC108,key_DH,0x86,"SubjectPublicKeyInfo",0,0,encode_EVP_PKEY_prov,
             check_public_PEM,0);
  return;
}



void test_unprotected_ECExplicitPrime2G_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x247,&_LC46,key_ECExplicitPrime2G,0x87,"PrivateKeyInfo",0,0,encode_EVP_PKEY_prov,
             check_unprotected_PKCS8_PEM,2);
  return;
}



void test_public_ECExplicitPrime2G_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x355,&_LC46,key_ECExplicitPrime2G,0x86,"SubjectPublicKeyInfo",0,0,encode_EVP_PKEY_prov
             ,check_public_PEM,2);
  return;
}



void test_unprotected_ECExplicitTri2G_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x247,&_LC46,key_ECExplicitTri2G,0x87,"PrivateKeyInfo",0,0,encode_EVP_PKEY_prov,
             check_unprotected_PKCS8_PEM,2);
  return;
}



void test_public_ECExplicitTri2G_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x355,&_LC46,key_ECExplicitTri2G,0x86,"SubjectPublicKeyInfo",0,0,encode_EVP_PKEY_prov,
             check_public_PEM,2);
  return;
}



void test_unprotected_SM2_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x247,&_LC109,key_SM2,0x87,"PrivateKeyInfo",0,0,encode_EVP_PKEY_prov,
             check_unprotected_PKCS8_PEM,2);
  return;
}



void test_public_SM2_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x355,&_LC109,key_SM2,0x86,"SubjectPublicKeyInfo",0,0,encode_EVP_PKEY_prov,
             check_public_PEM,2);
  return;
}



void test_protected_ECExplicitTri2G_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x2e2,&_LC46,key_ECExplicitTri2G,7,&_LC5,"EncryptedPrivateKeyInfo",
             "the holy handgrenade of antioch","AES-256-CBC",encode_EVP_PKEY_prov,
             check_protected_PKCS8_DER,2);
  return;
}



void test_protected_ECExplicitTri2G_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x2f9,&_LC46,key_ECExplicitTri2G,7,"EncryptedPrivateKeyInfo",
             "the holy handgrenade of antioch","AES-256-CBC",encode_EVP_PKEY_prov,
             check_protected_PKCS8_PEM,2);
  return;
}



void test_protected_ECExplicitPrime2G_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x2e2,&_LC46,key_ECExplicitPrime2G,7,&_LC5,"EncryptedPrivateKeyInfo",
             "the holy handgrenade of antioch","AES-256-CBC",encode_EVP_PKEY_prov,
             check_protected_PKCS8_DER,2);
  return;
}



void test_protected_ECExplicitPrime2G_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x2f9,&_LC46,key_ECExplicitPrime2G,7,"EncryptedPrivateKeyInfo",
             "the holy handgrenade of antioch","AES-256-CBC",encode_EVP_PKEY_prov,
             check_protected_PKCS8_PEM,2);
  return;
}



void test_protected_SM2_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x2e2,&_LC109,key_SM2,7,&_LC5,"EncryptedPrivateKeyInfo",
             "the holy handgrenade of antioch","AES-256-CBC",encode_EVP_PKEY_prov,
             check_protected_PKCS8_DER,2);
  return;
}



void test_protected_SM2_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x2f9,&_LC109,key_SM2,7,"EncryptedPrivateKeyInfo","the holy handgrenade of antioch",
             "AES-256-CBC",encode_EVP_PKEY_prov,check_protected_PKCS8_PEM,2);
  return;
}



void test_params_DSA_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x27a,&_LC44,key_DSA,4,&_LC5,"type-specific",0,0,encode_EVP_PKEY_prov,check_params_DER,
             1);
  return;
}



void test_params_DSA_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x283,&_LC44,key_DSA,4,"type-specific",0,0,encode_EVP_PKEY_prov,check_params_PEM,0);
  return;
}



void test_params_EC_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x27a,&_LC46,key_EC,4,&_LC5,"type-specific",0,0,encode_EVP_PKEY_prov,check_params_DER,1
            );
  return;
}



void test_params_EC_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x283,&_LC46,key_EC,4,"type-specific",0,0,encode_EVP_PKEY_prov,check_params_PEM,0);
  return;
}



void test_params_DH_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x27a,&_LC108,key_DH,4,&_LC5,"type-specific",0,0,encode_EVP_PKEY_prov,check_params_DER,
             1);
  return;
}



void test_params_DH_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x283,&_LC108,key_DH,4,"type-specific",0,0,encode_EVP_PKEY_prov,check_params_PEM,0);
  return;
}



ulong test_protected_DSA_via_PVK(void)

{
  undefined8 uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = key_DSA;
  lVar3 = OSSL_PROVIDER_load(testctx,"legacy");
  if (lVar3 != 0) {
    uVar2 = test_encode_decode_constprop_0
                      (0x327,&_LC44,uVar1,7,&_LC100,0,"the holy handgrenade of antioch",0,
                       encode_EVP_PKEY_PVK,check_PVK,0);
    OSSL_PROVIDER_unload(lVar3);
    return (ulong)uVar2;
  }
  uVar4 = test_skip("test/endecode_test.c",0x325,"Legacy provider not available");
  return uVar4;
}



void test_unprotected_DSA_via_legacy_PEM(void)

{
  if ((default_libctx != 0) && (is_fips == 0)) {
    test_encode_decode_constprop_1
              (0x29d,&_LC44,key_DSA,7,"type-specific",0,0,encode_EVP_PKEY_legacy_PEM,
               check_unprotected_legacy_PEM,0);
    return;
  }
  test_skip("test/endecode_test.c",0x29b,
            "Test not available if using a non-default library context or FIPS provider");
  return;
}



void test_protected_DSA_via_legacy_PEM(void)

{
  if ((default_libctx != 0) && (is_fips == 0)) {
    test_encode_decode_constprop_1
              (0x316,&_LC44,key_DSA,7,"type-specific","the holy handgrenade of antioch",
               "AES-256-CBC",encode_EVP_PKEY_legacy_PEM,check_protected_legacy_PEM,0);
    return;
  }
  test_skip("test/endecode_test.c",0x314,
            "Test not available if using a non-default library context or FIPS provider");
  return;
}



void test_unprotected_ECExplicitTriNamedCurve_via_legacy_PEM(void)

{
  if ((default_libctx != 0) && (is_fips == 0)) {
    test_encode_decode_constprop_1
              (0x29d,&_LC46,key_ECExplicitTriNamedCurve,7,"type-specific",0,0,
               encode_EVP_PKEY_legacy_PEM,check_unprotected_legacy_PEM,0);
    return;
  }
  test_skip("test/endecode_test.c",0x29b,
            "Test not available if using a non-default library context or FIPS provider");
  return;
}



void test_protected_ECExplicitTriNamedCurve_via_legacy_PEM(void)

{
  if ((default_libctx != 0) && (is_fips == 0)) {
    test_encode_decode_constprop_1
              (0x316,&_LC46,key_ECExplicitTriNamedCurve,7,"type-specific",
               "the holy handgrenade of antioch","AES-256-CBC",encode_EVP_PKEY_legacy_PEM,
               check_protected_legacy_PEM,0);
    return;
  }
  test_skip("test/endecode_test.c",0x314,
            "Test not available if using a non-default library context or FIPS provider");
  return;
}



void test_unprotected_EC_via_legacy_PEM(void)

{
  if ((default_libctx != 0) && (is_fips == 0)) {
    test_encode_decode_constprop_1
              (0x29d,&_LC46,key_EC,7,"type-specific",0,0,encode_EVP_PKEY_legacy_PEM,
               check_unprotected_legacy_PEM,0);
    return;
  }
  test_skip("test/endecode_test.c",0x29b,
            "Test not available if using a non-default library context or FIPS provider");
  return;
}



void test_protected_EC_via_legacy_PEM(void)

{
  if ((default_libctx != 0) && (is_fips == 0)) {
    test_encode_decode_constprop_1
              (0x316,&_LC46,key_EC,7,"type-specific","the holy handgrenade of antioch","AES-256-CBC"
               ,encode_EVP_PKEY_legacy_PEM,check_protected_legacy_PEM,0);
    return;
  }
  test_skip("test/endecode_test.c",0x314,
            "Test not available if using a non-default library context or FIPS provider");
  return;
}



void test_unprotected_ECExplicitPrime2G_via_legacy_PEM(void)

{
  if ((default_libctx != 0) && (is_fips == 0)) {
    test_encode_decode_constprop_1
              (0x29d,&_LC46,key_ECExplicitPrime2G,7,"type-specific",0,0,encode_EVP_PKEY_legacy_PEM,
               check_unprotected_legacy_PEM,0);
    return;
  }
  test_skip("test/endecode_test.c",0x29b,
            "Test not available if using a non-default library context or FIPS provider");
  return;
}



void test_protected_ECExplicitPrime2G_via_legacy_PEM(void)

{
  if ((default_libctx != 0) && (is_fips == 0)) {
    test_encode_decode_constprop_1
              (0x316,&_LC46,key_ECExplicitPrime2G,7,"type-specific",
               "the holy handgrenade of antioch","AES-256-CBC",encode_EVP_PKEY_legacy_PEM,
               check_protected_legacy_PEM,0);
    return;
  }
  test_skip("test/endecode_test.c",0x314,
            "Test not available if using a non-default library context or FIPS provider");
  return;
}



void test_unprotected_ECExplicitPrimeNamedCurve_via_legacy_PEM(void)

{
  if ((default_libctx != 0) && (is_fips == 0)) {
    test_encode_decode_constprop_1
              (0x29d,&_LC46,key_ECExplicitPrimeNamedCurve,7,"type-specific",0,0,
               encode_EVP_PKEY_legacy_PEM,check_unprotected_legacy_PEM,0);
    return;
  }
  test_skip("test/endecode_test.c",0x29b,
            "Test not available if using a non-default library context or FIPS provider");
  return;
}



void test_protected_ECExplicitPrimeNamedCurve_via_legacy_PEM(void)

{
  if ((default_libctx != 0) && (is_fips == 0)) {
    test_encode_decode_constprop_1
              (0x316,&_LC46,key_ECExplicitPrimeNamedCurve,7,"type-specific",
               "the holy handgrenade of antioch","AES-256-CBC",encode_EVP_PKEY_legacy_PEM,
               check_protected_legacy_PEM,0);
    return;
  }
  test_skip("test/endecode_test.c",0x314,
            "Test not available if using a non-default library context or FIPS provider");
  return;
}



void test_unprotected_ECExplicitTri2G_via_legacy_PEM(void)

{
  if ((default_libctx != 0) && (is_fips == 0)) {
    test_encode_decode_constprop_1
              (0x29d,&_LC46,key_ECExplicitTri2G,7,"type-specific",0,0,encode_EVP_PKEY_legacy_PEM,
               check_unprotected_legacy_PEM,0);
    return;
  }
  test_skip("test/endecode_test.c",0x29b,
            "Test not available if using a non-default library context or FIPS provider");
  return;
}



void test_protected_ECExplicitTri2G_via_legacy_PEM(void)

{
  if ((default_libctx != 0) && (is_fips == 0)) {
    test_encode_decode_constprop_1
              (0x316,&_LC46,key_ECExplicitTri2G,7,"type-specific","the holy handgrenade of antioch",
               "AES-256-CBC",encode_EVP_PKEY_legacy_PEM,check_protected_legacy_PEM,0);
    return;
  }
  test_skip("test/endecode_test.c",0x314,
            "Test not available if using a non-default library context or FIPS provider");
  return;
}



void test_unprotected_ML_DSA_87_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x231,"ML-DSA-87",key_ML_DSA_87,0x87,&_LC5,"PrivateKeyInfo",0,0,encode_EVP_PKEY_prov,
             check_unprotected_PKCS8_DER,0);
  return;
}



void test_unprotected_ML_DSA_87_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x247,"ML-DSA-87",key_ML_DSA_87,0x87,"PrivateKeyInfo",0,0,encode_EVP_PKEY_prov,
             check_unprotected_PKCS8_PEM,0);
  return;
}



void test_public_ED448_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x33f,"ED448",key_ED448,0x86,&_LC5,"SubjectPublicKeyInfo",0,0,encode_EVP_PKEY_prov,
             check_public_DER,0);
  return;
}



void test_public_ED448_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x355,"ED448",key_ED448,0x86,"SubjectPublicKeyInfo",0,0,encode_EVP_PKEY_prov,
             check_public_PEM,0);
  return;
}



void test_unprotected_X25519_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x231,"X25519",key_X25519,0x87,&_LC5,"PrivateKeyInfo",0,0,encode_EVP_PKEY_prov,
             check_unprotected_PKCS8_DER,0);
  return;
}



void test_unprotected_X25519_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x247,"X25519",key_X25519,0x87,"PrivateKeyInfo",0,0,encode_EVP_PKEY_prov,
             check_unprotected_PKCS8_PEM,0);
  return;
}



void test_public_X25519_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x33f,"X25519",key_X25519,0x86,&_LC5,"SubjectPublicKeyInfo",0,0,encode_EVP_PKEY_prov,
             check_public_DER,0);
  return;
}



void test_public_X25519_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x355,"X25519",key_X25519,0x86,"SubjectPublicKeyInfo",0,0,encode_EVP_PKEY_prov,
             check_public_PEM,0);
  return;
}



void test_unprotected_X448_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x231,&_LC114,key_X448,0x87,&_LC5,"PrivateKeyInfo",0,0,encode_EVP_PKEY_prov,
             check_unprotected_PKCS8_DER,0);
  return;
}



void test_unprotected_X448_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x247,&_LC114,key_X448,0x87,"PrivateKeyInfo",0,0,encode_EVP_PKEY_prov,
             check_unprotected_PKCS8_PEM,0);
  return;
}



void test_public_X448_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x33f,&_LC114,key_X448,0x86,&_LC5,"SubjectPublicKeyInfo",0,0,encode_EVP_PKEY_prov,
             check_public_DER,0);
  return;
}



void test_public_X448_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x355,&_LC114,key_X448,0x86,"SubjectPublicKeyInfo",0,0,encode_EVP_PKEY_prov,
             check_public_PEM,0);
  return;
}



void test_unprotected_DHX_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x231,"X9.42 DH",key_DHX,0x87,&_LC5,"PrivateKeyInfo",0,0,encode_EVP_PKEY_prov,
             check_unprotected_PKCS8_DER,0);
  return;
}



void test_unprotected_DHX_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x247,"X9.42 DH",key_DHX,0x87,"PrivateKeyInfo",0,0,encode_EVP_PKEY_prov,
             check_unprotected_PKCS8_PEM,0);
  return;
}



void test_unprotected_DSA_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x231,&_LC44,key_DSA,0x87,&_LC5,"PrivateKeyInfo",0,0,encode_EVP_PKEY_prov,
             check_unprotected_PKCS8_DER,0);
  return;
}



void test_unprotected_DSA_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x247,&_LC44,key_DSA,0x87,"PrivateKeyInfo",0,0,encode_EVP_PKEY_prov,
             check_unprotected_PKCS8_PEM,0);
  return;
}



void test_public_DSA_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x33f,&_LC44,key_DSA,0x86,&_LC5,"SubjectPublicKeyInfo",0,0,encode_EVP_PKEY_prov,
             check_public_DER,0);
  return;
}



void test_public_DSA_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x355,&_LC44,key_DSA,0x86,"SubjectPublicKeyInfo",0,0,encode_EVP_PKEY_prov,
             check_public_PEM,0);
  return;
}



void test_unprotected_ML_DSA_44_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x231,"ML-DSA-44",key_ML_DSA_44,0x87,&_LC5,"PrivateKeyInfo",0,0,encode_EVP_PKEY_prov,
             check_unprotected_PKCS8_DER,0);
  return;
}



void test_unprotected_ML_DSA_44_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x247,"ML-DSA-44",key_ML_DSA_44,0x87,"PrivateKeyInfo",0,0,encode_EVP_PKEY_prov,
             check_unprotected_PKCS8_PEM,0);
  return;
}



void test_public_DHX_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x33f,"X9.42 DH",key_DHX,0x86,&_LC5,"SubjectPublicKeyInfo",0,0,encode_EVP_PKEY_prov,
             check_public_DER,0);
  return;
}



void test_public_DHX_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x355,"X9.42 DH",key_DHX,0x86,"SubjectPublicKeyInfo",0,0,encode_EVP_PKEY_prov,
             check_public_PEM,0);
  return;
}



void test_unprotected_DH_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x231,&_LC108,key_DH,0x87,&_LC5,"PrivateKeyInfo",0,0,encode_EVP_PKEY_prov,
             check_unprotected_PKCS8_DER,0);
  return;
}



void test_unprotected_DH_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x247,&_LC108,key_DH,0x87,"PrivateKeyInfo",0,0,encode_EVP_PKEY_prov,
             check_unprotected_PKCS8_PEM,0);
  return;
}



void test_public_EC_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x33f,&_LC46,key_EC,0x86,&_LC5,"SubjectPublicKeyInfo",0,0,encode_EVP_PKEY_prov,
             check_public_DER,0);
  return;
}



void test_public_EC_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x355,&_LC46,key_EC,0x86,"SubjectPublicKeyInfo",0,0,encode_EVP_PKEY_prov,
             check_public_PEM,0);
  return;
}



void test_unprotected_EC_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x231,&_LC46,key_EC,0x87,&_LC5,"PrivateKeyInfo",0,0,encode_EVP_PKEY_prov,
             check_unprotected_PKCS8_DER,0);
  return;
}



void test_unprotected_EC_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x247,&_LC46,key_EC,0x87,"PrivateKeyInfo",0,0,encode_EVP_PKEY_prov,
             check_unprotected_PKCS8_PEM,0);
  return;
}



void test_unprotected_ED25519_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x231,"ED25519",key_ED25519,0x87,&_LC5,"PrivateKeyInfo",0,0,encode_EVP_PKEY_prov,
             check_unprotected_PKCS8_DER,0);
  return;
}



void test_unprotected_ED25519_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x247,"ED25519",key_ED25519,0x87,"PrivateKeyInfo",0,0,encode_EVP_PKEY_prov,
             check_unprotected_PKCS8_PEM,0);
  return;
}



void test_public_ED25519_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x33f,"ED25519",key_ED25519,0x86,&_LC5,"SubjectPublicKeyInfo",0,0,encode_EVP_PKEY_prov,
             check_public_DER,0);
  return;
}



void test_public_ED25519_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x355,"ED25519",key_ED25519,0x86,"SubjectPublicKeyInfo",0,0,encode_EVP_PKEY_prov,
             check_public_PEM,0);
  return;
}



void test_unprotected_ED448_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x231,"ED448",key_ED448,0x87,&_LC5,"PrivateKeyInfo",0,0,encode_EVP_PKEY_prov,
             check_unprotected_PKCS8_DER,0);
  return;
}



void test_unprotected_ED448_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x247,"ED448",key_ED448,0x87,"PrivateKeyInfo",0,0,encode_EVP_PKEY_prov,
             check_unprotected_PKCS8_PEM,0);
  return;
}



void test_unprotected_ML_KEM_512_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x231,"ML-KEM-512",key_ML_KEM_512,0x87,&_LC5,"PrivateKeyInfo",0,0,encode_EVP_PKEY_prov,
             check_unprotected_PKCS8_DER,0);
  return;
}



void test_unprotected_ML_KEM_512_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x247,"ML-KEM-512",key_ML_KEM_512,0x87,"PrivateKeyInfo",0,0,encode_EVP_PKEY_prov,
             check_unprotected_PKCS8_PEM,0);
  return;
}



void test_public_ML_KEM_512_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x33f,"ML-KEM-512",key_ML_KEM_512,0x86,&_LC5,"SubjectPublicKeyInfo",0,0,
             encode_EVP_PKEY_prov,check_public_DER,0);
  return;
}



void test_public_ML_KEM_512_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x355,"ML-KEM-512",key_ML_KEM_512,0x86,"SubjectPublicKeyInfo",0,0,encode_EVP_PKEY_prov,
             check_public_PEM,0);
  return;
}



void test_unprotected_ML_KEM_768_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x231,"ML-KEM-768",key_ML_KEM_768,0x87,&_LC5,"PrivateKeyInfo",0,0,encode_EVP_PKEY_prov,
             check_unprotected_PKCS8_DER,0);
  return;
}



void test_unprotected_ML_KEM_768_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x247,"ML-KEM-768",key_ML_KEM_768,0x87,"PrivateKeyInfo",0,0,encode_EVP_PKEY_prov,
             check_unprotected_PKCS8_PEM,0);
  return;
}



void test_public_ML_KEM_768_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x33f,"ML-KEM-768",key_ML_KEM_768,0x86,&_LC5,"SubjectPublicKeyInfo",0,0,
             encode_EVP_PKEY_prov,check_public_DER,0);
  return;
}



void test_public_ML_KEM_768_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x355,"ML-KEM-768",key_ML_KEM_768,0x86,"SubjectPublicKeyInfo",0,0,encode_EVP_PKEY_prov,
             check_public_PEM,0);
  return;
}



void test_unprotected_ML_KEM_1024_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x231,"ML-KEM-1024",key_ML_KEM_1024,0x87,&_LC5,"PrivateKeyInfo",0,0,
             encode_EVP_PKEY_prov,check_unprotected_PKCS8_DER,0);
  return;
}



void test_unprotected_ML_KEM_1024_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x247,"ML-KEM-1024",key_ML_KEM_1024,0x87,"PrivateKeyInfo",0,0,encode_EVP_PKEY_prov,
             check_unprotected_PKCS8_PEM,0);
  return;
}



void test_public_ML_KEM_1024_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x33f,"ML-KEM-1024",key_ML_KEM_1024,0x86,&_LC5,"SubjectPublicKeyInfo",0,0,
             encode_EVP_PKEY_prov,check_public_DER,0);
  return;
}



void test_public_ML_KEM_1024_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x355,"ML-KEM-1024",key_ML_KEM_1024,0x86,"SubjectPublicKeyInfo",0,0,
             encode_EVP_PKEY_prov,check_public_PEM,0);
  return;
}



void test_unprotected_SLH_DSA_SHA2_128s_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x231,"SLH-DSA-SHA2-128s",key_SLH_DSA_SHA2_128s,0x87,&_LC5,"PrivateKeyInfo",0,0,
             encode_EVP_PKEY_prov,check_unprotected_PKCS8_DER,0);
  return;
}



void test_unprotected_SLH_DSA_SHA2_128s_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x247,"SLH-DSA-SHA2-128s",key_SLH_DSA_SHA2_128s,0x87,"PrivateKeyInfo",0,0,
             encode_EVP_PKEY_prov,check_unprotected_PKCS8_PEM,0);
  return;
}



void test_public_SLH_DSA_SHA2_128s_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x33f,"SLH-DSA-SHA2-128s",key_SLH_DSA_SHA2_128s,0x86,&_LC5,"SubjectPublicKeyInfo",0,0,
             encode_EVP_PKEY_prov,check_public_DER,0);
  return;
}



void test_public_SLH_DSA_SHA2_128s_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x355,"SLH-DSA-SHA2-128s",key_SLH_DSA_SHA2_128s,0x86,"SubjectPublicKeyInfo",0,0,
             encode_EVP_PKEY_prov,check_public_PEM,0);
  return;
}



void test_unprotected_SLH_DSA_SHA2_128f_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x231,"SLH-DSA-SHA2-128f",key_SLH_DSA_SHA2_128f,0x87,&_LC5,"PrivateKeyInfo",0,0,
             encode_EVP_PKEY_prov,check_unprotected_PKCS8_DER,0);
  return;
}



void test_unprotected_SLH_DSA_SHA2_128f_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x247,"SLH-DSA-SHA2-128f",key_SLH_DSA_SHA2_128f,0x87,"PrivateKeyInfo",0,0,
             encode_EVP_PKEY_prov,check_unprotected_PKCS8_PEM,0);
  return;
}



void test_public_SLH_DSA_SHA2_128f_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x33f,"SLH-DSA-SHA2-128f",key_SLH_DSA_SHA2_128f,0x86,&_LC5,"SubjectPublicKeyInfo",0,0,
             encode_EVP_PKEY_prov,check_public_DER,0);
  return;
}



void test_public_SLH_DSA_SHA2_128f_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x355,"SLH-DSA-SHA2-128f",key_SLH_DSA_SHA2_128f,0x86,"SubjectPublicKeyInfo",0,0,
             encode_EVP_PKEY_prov,check_public_PEM,0);
  return;
}



void test_unprotected_SLH_DSA_SHA2_192s_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x231,"SLH-DSA-SHA2-192s",key_SLH_DSA_SHA2_192s,0x87,&_LC5,"PrivateKeyInfo",0,0,
             encode_EVP_PKEY_prov,check_unprotected_PKCS8_DER,0);
  return;
}



void test_unprotected_SLH_DSA_SHA2_192s_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x247,"SLH-DSA-SHA2-192s",key_SLH_DSA_SHA2_192s,0x87,"PrivateKeyInfo",0,0,
             encode_EVP_PKEY_prov,check_unprotected_PKCS8_PEM,0);
  return;
}



void test_public_SLH_DSA_SHA2_192s_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x33f,"SLH-DSA-SHA2-192s",key_SLH_DSA_SHA2_192s,0x86,&_LC5,"SubjectPublicKeyInfo",0,0,
             encode_EVP_PKEY_prov,check_public_DER,0);
  return;
}



void test_public_SLH_DSA_SHA2_192s_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x355,"SLH-DSA-SHA2-192s",key_SLH_DSA_SHA2_192s,0x86,"SubjectPublicKeyInfo",0,0,
             encode_EVP_PKEY_prov,check_public_PEM,0);
  return;
}



void test_unprotected_SLH_DSA_SHA2_192f_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x231,"SLH-DSA-SHA2-192f",key_SLH_DSA_SHA2_192f,0x87,&_LC5,"PrivateKeyInfo",0,0,
             encode_EVP_PKEY_prov,check_unprotected_PKCS8_DER,0);
  return;
}



void test_unprotected_SLH_DSA_SHA2_192f_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x247,"SLH-DSA-SHA2-192f",key_SLH_DSA_SHA2_192f,0x87,"PrivateKeyInfo",0,0,
             encode_EVP_PKEY_prov,check_unprotected_PKCS8_PEM,0);
  return;
}



void test_public_SLH_DSA_SHA2_192f_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x33f,"SLH-DSA-SHA2-192f",key_SLH_DSA_SHA2_192f,0x86,&_LC5,"SubjectPublicKeyInfo",0,0,
             encode_EVP_PKEY_prov,check_public_DER,0);
  return;
}



void test_public_SLH_DSA_SHA2_192f_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x355,"SLH-DSA-SHA2-192f",key_SLH_DSA_SHA2_192f,0x86,"SubjectPublicKeyInfo",0,0,
             encode_EVP_PKEY_prov,check_public_PEM,0);
  return;
}



void test_unprotected_SLH_DSA_SHA2_256s_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x231,"SLH-DSA-SHA2-256s",key_SLH_DSA_SHA2_256s,0x87,&_LC5,"PrivateKeyInfo",0,0,
             encode_EVP_PKEY_prov,check_unprotected_PKCS8_DER,0);
  return;
}



void test_unprotected_SLH_DSA_SHA2_256s_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x247,"SLH-DSA-SHA2-256s",key_SLH_DSA_SHA2_256s,0x87,"PrivateKeyInfo",0,0,
             encode_EVP_PKEY_prov,check_unprotected_PKCS8_PEM,0);
  return;
}



void test_public_SLH_DSA_SHA2_256s_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x33f,"SLH-DSA-SHA2-256s",key_SLH_DSA_SHA2_256s,0x86,&_LC5,"SubjectPublicKeyInfo",0,0,
             encode_EVP_PKEY_prov,check_public_DER,0);
  return;
}



void test_public_SLH_DSA_SHA2_256s_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x355,"SLH-DSA-SHA2-256s",key_SLH_DSA_SHA2_256s,0x86,"SubjectPublicKeyInfo",0,0,
             encode_EVP_PKEY_prov,check_public_PEM,0);
  return;
}



void test_unprotected_SLH_DSA_SHA2_256f_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x231,"SLH-DSA-SHA2-256f",key_SLH_DSA_SHA2_256f,0x87,&_LC5,"PrivateKeyInfo",0,0,
             encode_EVP_PKEY_prov,check_unprotected_PKCS8_DER,0);
  return;
}



void test_unprotected_SLH_DSA_SHA2_256f_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x247,"SLH-DSA-SHA2-256f",key_SLH_DSA_SHA2_256f,0x87,"PrivateKeyInfo",0,0,
             encode_EVP_PKEY_prov,check_unprotected_PKCS8_PEM,0);
  return;
}



void test_public_SLH_DSA_SHA2_256f_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x33f,"SLH-DSA-SHA2-256f",key_SLH_DSA_SHA2_256f,0x86,&_LC5,"SubjectPublicKeyInfo",0,0,
             encode_EVP_PKEY_prov,check_public_DER,0);
  return;
}



void test_public_SLH_DSA_SHA2_256f_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x355,"SLH-DSA-SHA2-256f",key_SLH_DSA_SHA2_256f,0x86,"SubjectPublicKeyInfo",0,0,
             encode_EVP_PKEY_prov,check_public_PEM,0);
  return;
}



void test_unprotected_SLH_DSA_SHAKE_128s_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x231,"SLH-DSA-SHAKE-128s",key_SLH_DSA_SHAKE_128s,0x87,&_LC5,"PrivateKeyInfo",0,0,
             encode_EVP_PKEY_prov,check_unprotected_PKCS8_DER,0);
  return;
}



void test_unprotected_SLH_DSA_SHAKE_128s_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x247,"SLH-DSA-SHAKE-128s",key_SLH_DSA_SHAKE_128s,0x87,"PrivateKeyInfo",0,0,
             encode_EVP_PKEY_prov,check_unprotected_PKCS8_PEM,0);
  return;
}



void test_public_SLH_DSA_SHAKE_128s_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x33f,"SLH-DSA-SHAKE-128s",key_SLH_DSA_SHAKE_128s,0x86,&_LC5,"SubjectPublicKeyInfo",0,0
             ,encode_EVP_PKEY_prov,check_public_DER,0);
  return;
}



void test_public_SLH_DSA_SHAKE_128s_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x355,"SLH-DSA-SHAKE-128s",key_SLH_DSA_SHAKE_128s,0x86,"SubjectPublicKeyInfo",0,0,
             encode_EVP_PKEY_prov,check_public_PEM,0);
  return;
}



void test_unprotected_SLH_DSA_SHAKE_128f_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x231,"SLH-DSA-SHAKE-128f",key_SLH_DSA_SHAKE_128f,0x87,&_LC5,"PrivateKeyInfo",0,0,
             encode_EVP_PKEY_prov,check_unprotected_PKCS8_DER,0);
  return;
}



void test_unprotected_SLH_DSA_SHAKE_128f_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x247,"SLH-DSA-SHAKE-128f",key_SLH_DSA_SHAKE_128f,0x87,"PrivateKeyInfo",0,0,
             encode_EVP_PKEY_prov,check_unprotected_PKCS8_PEM,0);
  return;
}



void test_public_SLH_DSA_SHAKE_128f_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x33f,"SLH-DSA-SHAKE-128f",key_SLH_DSA_SHAKE_128f,0x86,&_LC5,"SubjectPublicKeyInfo",0,0
             ,encode_EVP_PKEY_prov,check_public_DER,0);
  return;
}



void test_public_SLH_DSA_SHAKE_128f_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x355,"SLH-DSA-SHAKE-128f",key_SLH_DSA_SHAKE_128f,0x86,"SubjectPublicKeyInfo",0,0,
             encode_EVP_PKEY_prov,check_public_PEM,0);
  return;
}



void test_unprotected_SLH_DSA_SHAKE_192s_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x231,"SLH-DSA-SHAKE-192s",key_SLH_DSA_SHAKE_192s,0x87,&_LC5,"PrivateKeyInfo",0,0,
             encode_EVP_PKEY_prov,check_unprotected_PKCS8_DER,0);
  return;
}



void test_unprotected_SLH_DSA_SHAKE_192s_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x247,"SLH-DSA-SHAKE-192s",key_SLH_DSA_SHAKE_192s,0x87,"PrivateKeyInfo",0,0,
             encode_EVP_PKEY_prov,check_unprotected_PKCS8_PEM,0);
  return;
}



void test_public_SLH_DSA_SHAKE_192s_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x33f,"SLH-DSA-SHAKE-192s",key_SLH_DSA_SHAKE_192s,0x86,&_LC5,"SubjectPublicKeyInfo",0,0
             ,encode_EVP_PKEY_prov,check_public_DER,0);
  return;
}



void test_public_SLH_DSA_SHAKE_192s_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x355,"SLH-DSA-SHAKE-192s",key_SLH_DSA_SHAKE_192s,0x86,"SubjectPublicKeyInfo",0,0,
             encode_EVP_PKEY_prov,check_public_PEM,0);
  return;
}



void test_unprotected_SLH_DSA_SHAKE_192f_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x231,"SLH-DSA-SHAKE-192f",key_SLH_DSA_SHAKE_192f,0x87,&_LC5,"PrivateKeyInfo",0,0,
             encode_EVP_PKEY_prov,check_unprotected_PKCS8_DER,0);
  return;
}



void test_unprotected_SLH_DSA_SHAKE_192f_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x247,"SLH-DSA-SHAKE-192f",key_SLH_DSA_SHAKE_192f,0x87,"PrivateKeyInfo",0,0,
             encode_EVP_PKEY_prov,check_unprotected_PKCS8_PEM,0);
  return;
}



void test_public_SLH_DSA_SHAKE_192f_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x33f,"SLH-DSA-SHAKE-192f",key_SLH_DSA_SHAKE_192f,0x86,&_LC5,"SubjectPublicKeyInfo",0,0
             ,encode_EVP_PKEY_prov,check_public_DER,0);
  return;
}



void test_public_SLH_DSA_SHAKE_192f_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x355,"SLH-DSA-SHAKE-192f",key_SLH_DSA_SHAKE_192f,0x86,"SubjectPublicKeyInfo",0,0,
             encode_EVP_PKEY_prov,check_public_PEM,0);
  return;
}



void test_unprotected_SLH_DSA_SHAKE_256s_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x231,"SLH-DSA-SHAKE-256s",key_SLH_DSA_SHAKE_256s,0x87,&_LC5,"PrivateKeyInfo",0,0,
             encode_EVP_PKEY_prov,check_unprotected_PKCS8_DER,0);
  return;
}



void test_unprotected_SLH_DSA_SHAKE_256s_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x247,"SLH-DSA-SHAKE-256s",key_SLH_DSA_SHAKE_256s,0x87,"PrivateKeyInfo",0,0,
             encode_EVP_PKEY_prov,check_unprotected_PKCS8_PEM,0);
  return;
}



void test_public_SLH_DSA_SHAKE_256s_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x33f,"SLH-DSA-SHAKE-256s",key_SLH_DSA_SHAKE_256s,0x86,&_LC5,"SubjectPublicKeyInfo",0,0
             ,encode_EVP_PKEY_prov,check_public_DER,0);
  return;
}



void test_public_SLH_DSA_SHAKE_256s_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x355,"SLH-DSA-SHAKE-256s",key_SLH_DSA_SHAKE_256s,0x86,"SubjectPublicKeyInfo",0,0,
             encode_EVP_PKEY_prov,check_public_PEM,0);
  return;
}



void test_unprotected_SLH_DSA_SHAKE_256f_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x231,"SLH-DSA-SHAKE-256f",key_SLH_DSA_SHAKE_256f,0x87,&_LC5,"PrivateKeyInfo",0,0,
             encode_EVP_PKEY_prov,check_unprotected_PKCS8_DER,0);
  return;
}



void test_unprotected_SLH_DSA_SHAKE_256f_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x247,"SLH-DSA-SHAKE-256f",key_SLH_DSA_SHAKE_256f,0x87,"PrivateKeyInfo",0,0,
             encode_EVP_PKEY_prov,check_unprotected_PKCS8_PEM,0);
  return;
}



void test_public_SLH_DSA_SHAKE_256f_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x33f,"SLH-DSA-SHAKE-256f",key_SLH_DSA_SHAKE_256f,0x86,&_LC5,"SubjectPublicKeyInfo",0,0
             ,encode_EVP_PKEY_prov,check_public_DER,0);
  return;
}



void test_public_SLH_DSA_SHAKE_256f_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x355,"SLH-DSA-SHAKE-256f",key_SLH_DSA_SHAKE_256f,0x86,"SubjectPublicKeyInfo",0,0,
             encode_EVP_PKEY_prov,check_public_PEM,0);
  return;
}



void test_unprotected_RSA_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x231,&_LC99,key_RSA,0x87,&_LC5,"PrivateKeyInfo",0,0,encode_EVP_PKEY_prov,
             check_unprotected_PKCS8_DER,0);
  return;
}



void test_unprotected_RSA_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x247,&_LC99,key_RSA,0x87,"PrivateKeyInfo",0,0,encode_EVP_PKEY_prov,
             check_unprotected_PKCS8_PEM,0);
  return;
}



void test_public_RSA_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x33f,&_LC99,key_RSA,0x86,&_LC5,"SubjectPublicKeyInfo",0,0,encode_EVP_PKEY_prov,
             check_public_DER,0);
  return;
}



void test_public_RSA_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x355,&_LC99,key_RSA,0x86,"SubjectPublicKeyInfo",0,0,encode_EVP_PKEY_prov,
             check_public_PEM,0);
  return;
}



void test_unprotected_ECExplicitTriNamedCurve_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x231,&_LC46,key_ECExplicitTriNamedCurve,0x87,&_LC5,"PrivateKeyInfo",0,0,
             encode_EVP_PKEY_prov,check_unprotected_PKCS8_DER,0);
  return;
}



void test_unprotected_ECExplicitTriNamedCurve_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x247,&_LC46,key_ECExplicitTriNamedCurve,0x87,"PrivateKeyInfo",0,0,encode_EVP_PKEY_prov
             ,check_unprotected_PKCS8_PEM,0);
  return;
}



void test_unprotected_RSA_PSS_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x231,"RSA-PSS",key_RSA_PSS,0x87,&_LC5,"PrivateKeyInfo",0,0,encode_EVP_PKEY_prov,
             check_unprotected_PKCS8_DER,0);
  return;
}



void test_unprotected_RSA_PSS_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x247,"RSA-PSS",key_RSA_PSS,0x87,"PrivateKeyInfo",0,0,encode_EVP_PKEY_prov,
             check_unprotected_PKCS8_PEM,0);
  return;
}



void test_public_RSA_PSS_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x33f,"RSA-PSS",key_RSA_PSS,0x86,&_LC5,"SubjectPublicKeyInfo",0,0,encode_EVP_PKEY_prov,
             check_public_DER,0);
  return;
}



void test_public_RSA_PSS_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x355,"RSA-PSS",key_RSA_PSS,0x86,"SubjectPublicKeyInfo",0,0,encode_EVP_PKEY_prov,
             check_public_PEM,0);
  return;
}



void test_public_ML_DSA_44_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x33f,"ML-DSA-44",key_ML_DSA_44,0x86,&_LC5,"SubjectPublicKeyInfo",0,0,
             encode_EVP_PKEY_prov,check_public_DER,0);
  return;
}



void test_public_ML_DSA_44_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x355,"ML-DSA-44",key_ML_DSA_44,0x86,"SubjectPublicKeyInfo",0,0,encode_EVP_PKEY_prov,
             check_public_PEM,0);
  return;
}



void test_unprotected_ML_DSA_65_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x231,"ML-DSA-65",key_ML_DSA_65,0x87,&_LC5,"PrivateKeyInfo",0,0,encode_EVP_PKEY_prov,
             check_unprotected_PKCS8_DER,0);
  return;
}



void test_unprotected_ML_DSA_65_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x247,"ML-DSA-65",key_ML_DSA_65,0x87,"PrivateKeyInfo",0,0,encode_EVP_PKEY_prov,
             check_unprotected_PKCS8_PEM,0);
  return;
}



void test_public_ML_DSA_65_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x33f,"ML-DSA-65",key_ML_DSA_65,0x86,&_LC5,"SubjectPublicKeyInfo",0,0,
             encode_EVP_PKEY_prov,check_public_DER,0);
  return;
}



void test_public_ML_DSA_65_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x355,"ML-DSA-65",key_ML_DSA_65,0x86,"SubjectPublicKeyInfo",0,0,encode_EVP_PKEY_prov,
             check_public_PEM,0);
  return;
}



void test_public_ML_DSA_87_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x33f,"ML-DSA-87",key_ML_DSA_87,0x86,&_LC5,"SubjectPublicKeyInfo",0,0,
             encode_EVP_PKEY_prov,check_public_DER,0);
  return;
}



void test_public_ML_DSA_87_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x355,"ML-DSA-87",key_ML_DSA_87,0x86,"SubjectPublicKeyInfo",0,0,encode_EVP_PKEY_prov,
             check_public_PEM,0);
  return;
}



void test_public_ECExplicitTriNamedCurve_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x33f,&_LC46,key_ECExplicitTriNamedCurve,0x86,&_LC5,"SubjectPublicKeyInfo",0,0,
             encode_EVP_PKEY_prov,check_public_DER,0);
  return;
}



void test_public_ECExplicitTriNamedCurve_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x355,&_LC46,key_ECExplicitTriNamedCurve,0x86,"SubjectPublicKeyInfo",0,0,
             encode_EVP_PKEY_prov,check_public_PEM,0);
  return;
}



void test_public_ECExplicitPrimeNamedCurve_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x33f,&_LC46,key_ECExplicitPrimeNamedCurve,0x86,&_LC5,"SubjectPublicKeyInfo",0,0,
             encode_EVP_PKEY_prov,check_public_DER,0);
  return;
}



void test_public_ECExplicitPrimeNamedCurve_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x355,&_LC46,key_ECExplicitPrimeNamedCurve,0x86,"SubjectPublicKeyInfo",0,0,
             encode_EVP_PKEY_prov,check_public_PEM,0);
  return;
}



void test_protected_ECExplicitPrimeNamedCurve_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x2e2,&_LC46,key_ECExplicitPrimeNamedCurve,7,&_LC5,"EncryptedPrivateKeyInfo",
             "the holy handgrenade of antioch","AES-256-CBC",encode_EVP_PKEY_prov,
             check_protected_PKCS8_DER,0);
  return;
}



void test_protected_ECExplicitPrimeNamedCurve_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x2f9,&_LC46,key_ECExplicitPrimeNamedCurve,7,"EncryptedPrivateKeyInfo",
             "the holy handgrenade of antioch","AES-256-CBC",encode_EVP_PKEY_prov,
             check_protected_PKCS8_PEM,0);
  return;
}



void test_protected_DH_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x2e2,&_LC108,key_DH,7,&_LC5,"EncryptedPrivateKeyInfo",
             "the holy handgrenade of antioch","AES-256-CBC",encode_EVP_PKEY_prov,
             check_protected_PKCS8_DER,0);
  return;
}



void test_protected_DH_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x2f9,&_LC108,key_DH,7,"EncryptedPrivateKeyInfo","the holy handgrenade of antioch",
             "AES-256-CBC",encode_EVP_PKEY_prov,check_protected_PKCS8_PEM,0);
  return;
}



void test_protected_ML_DSA_65_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x2e2,"ML-DSA-65",key_ML_DSA_65,7,&_LC5,"EncryptedPrivateKeyInfo",
             "the holy handgrenade of antioch","AES-256-CBC",encode_EVP_PKEY_prov,
             check_protected_PKCS8_DER,0);
  return;
}



void test_protected_ML_DSA_65_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x2f9,"ML-DSA-65",key_ML_DSA_65,7,"EncryptedPrivateKeyInfo",
             "the holy handgrenade of antioch","AES-256-CBC",encode_EVP_PKEY_prov,
             check_protected_PKCS8_PEM,0);
  return;
}



void test_protected_ECExplicitTriNamedCurve_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x2e2,&_LC46,key_ECExplicitTriNamedCurve,7,&_LC5,"EncryptedPrivateKeyInfo",
             "the holy handgrenade of antioch","AES-256-CBC",encode_EVP_PKEY_prov,
             check_protected_PKCS8_DER,0);
  return;
}



void test_protected_ECExplicitTriNamedCurve_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x2f9,&_LC46,key_ECExplicitTriNamedCurve,7,"EncryptedPrivateKeyInfo",
             "the holy handgrenade of antioch","AES-256-CBC",encode_EVP_PKEY_prov,
             check_protected_PKCS8_PEM,0);
  return;
}



void test_protected_RSA_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x2e2,&_LC99,key_RSA,7,&_LC5,"EncryptedPrivateKeyInfo",
             "the holy handgrenade of antioch","AES-256-CBC",encode_EVP_PKEY_prov,
             check_protected_PKCS8_DER,0);
  return;
}



void test_protected_RSA_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x2f9,&_LC99,key_RSA,7,"EncryptedPrivateKeyInfo","the holy handgrenade of antioch",
             "AES-256-CBC",encode_EVP_PKEY_prov,check_protected_PKCS8_PEM,0);
  return;
}



void test_protected_RSA_PSS_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x2e2,"RSA-PSS",key_RSA_PSS,7,&_LC5,"EncryptedPrivateKeyInfo",
             "the holy handgrenade of antioch","AES-256-CBC",encode_EVP_PKEY_prov,
             check_protected_PKCS8_DER,0);
  return;
}



void test_protected_RSA_PSS_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x2f9,"RSA-PSS",key_RSA_PSS,7,"EncryptedPrivateKeyInfo",
             "the holy handgrenade of antioch","AES-256-CBC",encode_EVP_PKEY_prov,
             check_protected_PKCS8_PEM,0);
  return;
}



void test_protected_SLH_DSA_SHAKE_128s_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x2e2,"SLH-DSA-SHAKE-128s",key_SLH_DSA_SHAKE_128s,7,&_LC5,"EncryptedPrivateKeyInfo",
             "the holy handgrenade of antioch","AES-256-CBC",encode_EVP_PKEY_prov,
             check_protected_PKCS8_DER,0);
  return;
}



void test_protected_SLH_DSA_SHAKE_128s_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x2f9,"SLH-DSA-SHAKE-128s",key_SLH_DSA_SHAKE_128s,7,"EncryptedPrivateKeyInfo",
             "the holy handgrenade of antioch","AES-256-CBC",encode_EVP_PKEY_prov,
             check_protected_PKCS8_PEM,0);
  return;
}



void test_protected_SLH_DSA_SHAKE_128f_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x2e2,"SLH-DSA-SHAKE-128f",key_SLH_DSA_SHAKE_128f,7,&_LC5,"EncryptedPrivateKeyInfo",
             "the holy handgrenade of antioch","AES-256-CBC",encode_EVP_PKEY_prov,
             check_protected_PKCS8_DER,0);
  return;
}



void test_protected_SLH_DSA_SHAKE_128f_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x2f9,"SLH-DSA-SHAKE-128f",key_SLH_DSA_SHAKE_128f,7,"EncryptedPrivateKeyInfo",
             "the holy handgrenade of antioch","AES-256-CBC",encode_EVP_PKEY_prov,
             check_protected_PKCS8_PEM,0);
  return;
}



void test_protected_SLH_DSA_SHA2_256s_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x2e2,"SLH-DSA-SHA2-256s",key_SLH_DSA_SHA2_256s,7,&_LC5,"EncryptedPrivateKeyInfo",
             "the holy handgrenade of antioch","AES-256-CBC",encode_EVP_PKEY_prov,
             check_protected_PKCS8_DER,0);
  return;
}



void test_protected_SLH_DSA_SHA2_256s_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x2f9,"SLH-DSA-SHA2-256s",key_SLH_DSA_SHA2_256s,7,"EncryptedPrivateKeyInfo",
             "the holy handgrenade of antioch","AES-256-CBC",encode_EVP_PKEY_prov,
             check_protected_PKCS8_PEM,0);
  return;
}



void test_protected_SLH_DSA_SHA2_256f_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x2e2,"SLH-DSA-SHA2-256f",key_SLH_DSA_SHA2_256f,7,&_LC5,"EncryptedPrivateKeyInfo",
             "the holy handgrenade of antioch","AES-256-CBC",encode_EVP_PKEY_prov,
             check_protected_PKCS8_DER,0);
  return;
}



void test_protected_SLH_DSA_SHA2_256f_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x2f9,"SLH-DSA-SHA2-256f",key_SLH_DSA_SHA2_256f,7,"EncryptedPrivateKeyInfo",
             "the holy handgrenade of antioch","AES-256-CBC",encode_EVP_PKEY_prov,
             check_protected_PKCS8_PEM,0);
  return;
}



void test_protected_SLH_DSA_SHAKE_256s_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x2e2,"SLH-DSA-SHAKE-256s",key_SLH_DSA_SHAKE_256s,7,&_LC5,"EncryptedPrivateKeyInfo",
             "the holy handgrenade of antioch","AES-256-CBC",encode_EVP_PKEY_prov,
             check_protected_PKCS8_DER,0);
  return;
}



void test_protected_SLH_DSA_SHAKE_256s_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x2f9,"SLH-DSA-SHAKE-256s",key_SLH_DSA_SHAKE_256s,7,"EncryptedPrivateKeyInfo",
             "the holy handgrenade of antioch","AES-256-CBC",encode_EVP_PKEY_prov,
             check_protected_PKCS8_PEM,0);
  return;
}



void test_protected_SLH_DSA_SHAKE_256f_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x2e2,"SLH-DSA-SHAKE-256f",key_SLH_DSA_SHAKE_256f,7,&_LC5,"EncryptedPrivateKeyInfo",
             "the holy handgrenade of antioch","AES-256-CBC",encode_EVP_PKEY_prov,
             check_protected_PKCS8_DER,0);
  return;
}



void test_protected_SLH_DSA_SHAKE_256f_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x2f9,"SLH-DSA-SHAKE-256f",key_SLH_DSA_SHAKE_256f,7,"EncryptedPrivateKeyInfo",
             "the holy handgrenade of antioch","AES-256-CBC",encode_EVP_PKEY_prov,
             check_protected_PKCS8_PEM,0);
  return;
}



void test_protected_SLH_DSA_SHAKE_192s_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x2e2,"SLH-DSA-SHAKE-192s",key_SLH_DSA_SHAKE_192s,7,&_LC5,"EncryptedPrivateKeyInfo",
             "the holy handgrenade of antioch","AES-256-CBC",encode_EVP_PKEY_prov,
             check_protected_PKCS8_DER,0);
  return;
}



void test_protected_SLH_DSA_SHAKE_192s_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x2f9,"SLH-DSA-SHAKE-192s",key_SLH_DSA_SHAKE_192s,7,"EncryptedPrivateKeyInfo",
             "the holy handgrenade of antioch","AES-256-CBC",encode_EVP_PKEY_prov,
             check_protected_PKCS8_PEM,0);
  return;
}



void test_protected_SLH_DSA_SHAKE_192f_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x2e2,"SLH-DSA-SHAKE-192f",key_SLH_DSA_SHAKE_192f,7,&_LC5,"EncryptedPrivateKeyInfo",
             "the holy handgrenade of antioch","AES-256-CBC",encode_EVP_PKEY_prov,
             check_protected_PKCS8_DER,0);
  return;
}



void test_protected_SLH_DSA_SHAKE_192f_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x2f9,"SLH-DSA-SHAKE-192f",key_SLH_DSA_SHAKE_192f,7,"EncryptedPrivateKeyInfo",
             "the holy handgrenade of antioch","AES-256-CBC",encode_EVP_PKEY_prov,
             check_protected_PKCS8_PEM,0);
  return;
}



void test_protected_X25519_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x2e2,"X25519",key_X25519,7,&_LC5,"EncryptedPrivateKeyInfo",
             "the holy handgrenade of antioch","AES-256-CBC",encode_EVP_PKEY_prov,
             check_protected_PKCS8_DER,0);
  return;
}



void test_protected_X25519_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x2f9,"X25519",key_X25519,7,"EncryptedPrivateKeyInfo","the holy handgrenade of antioch"
             ,"AES-256-CBC",encode_EVP_PKEY_prov,check_protected_PKCS8_PEM,0);
  return;
}



void test_protected_X448_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x2e2,&_LC114,key_X448,7,&_LC5,"EncryptedPrivateKeyInfo",
             "the holy handgrenade of antioch","AES-256-CBC",encode_EVP_PKEY_prov,
             check_protected_PKCS8_DER,0);
  return;
}



void test_protected_X448_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x2f9,&_LC114,key_X448,7,"EncryptedPrivateKeyInfo","the holy handgrenade of antioch",
             "AES-256-CBC",encode_EVP_PKEY_prov,check_protected_PKCS8_PEM,0);
  return;
}



void test_protected_ML_DSA_87_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x2e2,"ML-DSA-87",key_ML_DSA_87,7,&_LC5,"EncryptedPrivateKeyInfo",
             "the holy handgrenade of antioch","AES-256-CBC",encode_EVP_PKEY_prov,
             check_protected_PKCS8_DER,0);
  return;
}



void test_protected_ML_DSA_87_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x2f9,"ML-DSA-87",key_ML_DSA_87,7,"EncryptedPrivateKeyInfo",
             "the holy handgrenade of antioch","AES-256-CBC",encode_EVP_PKEY_prov,
             check_protected_PKCS8_PEM,0);
  return;
}



void test_protected_ED448_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x2e2,"ED448",key_ED448,7,&_LC5,"EncryptedPrivateKeyInfo",
             "the holy handgrenade of antioch","AES-256-CBC",encode_EVP_PKEY_prov,
             check_protected_PKCS8_DER,0);
  return;
}



void test_protected_ED448_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x2f9,"ED448",key_ED448,7,"EncryptedPrivateKeyInfo","the holy handgrenade of antioch",
             "AES-256-CBC",encode_EVP_PKEY_prov,check_protected_PKCS8_PEM,0);
  return;
}



void test_protected_DHX_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x2e2,"X9.42 DH",key_DHX,7,&_LC5,"EncryptedPrivateKeyInfo",
             "the holy handgrenade of antioch","AES-256-CBC",encode_EVP_PKEY_prov,
             check_protected_PKCS8_DER,0);
  return;
}



void test_protected_DHX_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x2f9,"X9.42 DH",key_DHX,7,"EncryptedPrivateKeyInfo","the holy handgrenade of antioch",
             "AES-256-CBC",encode_EVP_PKEY_prov,check_protected_PKCS8_PEM,0);
  return;
}



void test_protected_EC_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x2e2,&_LC46,key_EC,7,&_LC5,"EncryptedPrivateKeyInfo","the holy handgrenade of antioch"
             ,"AES-256-CBC",encode_EVP_PKEY_prov,check_protected_PKCS8_DER,0);
  return;
}



void test_protected_EC_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x2f9,&_LC46,key_EC,7,"EncryptedPrivateKeyInfo","the holy handgrenade of antioch",
             "AES-256-CBC",encode_EVP_PKEY_prov,check_protected_PKCS8_PEM,0);
  return;
}



void test_protected_DSA_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x2e2,&_LC44,key_DSA,7,&_LC5,"EncryptedPrivateKeyInfo",
             "the holy handgrenade of antioch","AES-256-CBC",encode_EVP_PKEY_prov,
             check_protected_PKCS8_DER,0);
  return;
}



void test_protected_DSA_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x2f9,&_LC44,key_DSA,7,"EncryptedPrivateKeyInfo","the holy handgrenade of antioch",
             "AES-256-CBC",encode_EVP_PKEY_prov,check_protected_PKCS8_PEM,0);
  return;
}



void test_protected_ML_DSA_44_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x2e2,"ML-DSA-44",key_ML_DSA_44,7,&_LC5,"EncryptedPrivateKeyInfo",
             "the holy handgrenade of antioch","AES-256-CBC",encode_EVP_PKEY_prov,
             check_protected_PKCS8_DER,0);
  return;
}



void test_protected_ML_DSA_44_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x2f9,"ML-DSA-44",key_ML_DSA_44,7,"EncryptedPrivateKeyInfo",
             "the holy handgrenade of antioch","AES-256-CBC",encode_EVP_PKEY_prov,
             check_protected_PKCS8_PEM,0);
  return;
}



void test_protected_ML_KEM_768_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x2e2,"ML-KEM-768",key_ML_KEM_768,7,&_LC5,"EncryptedPrivateKeyInfo",
             "the holy handgrenade of antioch","AES-256-CBC",encode_EVP_PKEY_prov,
             check_protected_PKCS8_DER,0);
  return;
}



void test_protected_ML_KEM_768_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x2f9,"ML-KEM-768",key_ML_KEM_768,7,"EncryptedPrivateKeyInfo",
             "the holy handgrenade of antioch","AES-256-CBC",encode_EVP_PKEY_prov,
             check_protected_PKCS8_PEM,0);
  return;
}



void test_protected_ML_KEM_1024_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x2e2,"ML-KEM-1024",key_ML_KEM_1024,7,&_LC5,"EncryptedPrivateKeyInfo",
             "the holy handgrenade of antioch","AES-256-CBC",encode_EVP_PKEY_prov,
             check_protected_PKCS8_DER,0);
  return;
}



void test_protected_ML_KEM_1024_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x2f9,"ML-KEM-1024",key_ML_KEM_1024,7,"EncryptedPrivateKeyInfo",
             "the holy handgrenade of antioch","AES-256-CBC",encode_EVP_PKEY_prov,
             check_protected_PKCS8_PEM,0);
  return;
}



void test_protected_ED25519_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x2e2,"ED25519",key_ED25519,7,&_LC5,"EncryptedPrivateKeyInfo",
             "the holy handgrenade of antioch","AES-256-CBC",encode_EVP_PKEY_prov,
             check_protected_PKCS8_DER,0);
  return;
}



void test_protected_ED25519_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x2f9,"ED25519",key_ED25519,7,"EncryptedPrivateKeyInfo",
             "the holy handgrenade of antioch","AES-256-CBC",encode_EVP_PKEY_prov,
             check_protected_PKCS8_PEM,0);
  return;
}



void test_protected_ML_KEM_512_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x2e2,"ML-KEM-512",key_ML_KEM_512,7,&_LC5,"EncryptedPrivateKeyInfo",
             "the holy handgrenade of antioch","AES-256-CBC",encode_EVP_PKEY_prov,
             check_protected_PKCS8_DER,0);
  return;
}



void test_protected_ML_KEM_512_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x2f9,"ML-KEM-512",key_ML_KEM_512,7,"EncryptedPrivateKeyInfo",
             "the holy handgrenade of antioch","AES-256-CBC",encode_EVP_PKEY_prov,
             check_protected_PKCS8_PEM,0);
  return;
}



void test_protected_SLH_DSA_SHA2_192s_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x2e2,"SLH-DSA-SHA2-192s",key_SLH_DSA_SHA2_192s,7,&_LC5,"EncryptedPrivateKeyInfo",
             "the holy handgrenade of antioch","AES-256-CBC",encode_EVP_PKEY_prov,
             check_protected_PKCS8_DER,0);
  return;
}



void test_protected_SLH_DSA_SHA2_192s_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x2f9,"SLH-DSA-SHA2-192s",key_SLH_DSA_SHA2_192s,7,"EncryptedPrivateKeyInfo",
             "the holy handgrenade of antioch","AES-256-CBC",encode_EVP_PKEY_prov,
             check_protected_PKCS8_PEM,0);
  return;
}



void test_protected_SLH_DSA_SHA2_192f_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x2e2,"SLH-DSA-SHA2-192f",key_SLH_DSA_SHA2_192f,7,&_LC5,"EncryptedPrivateKeyInfo",
             "the holy handgrenade of antioch","AES-256-CBC",encode_EVP_PKEY_prov,
             check_protected_PKCS8_DER,0);
  return;
}



void test_protected_SLH_DSA_SHA2_192f_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x2f9,"SLH-DSA-SHA2-192f",key_SLH_DSA_SHA2_192f,7,"EncryptedPrivateKeyInfo",
             "the holy handgrenade of antioch","AES-256-CBC",encode_EVP_PKEY_prov,
             check_protected_PKCS8_PEM,0);
  return;
}



void test_protected_SLH_DSA_SHA2_128s_via_DER(void)

{
  test_encode_decode_constprop_0
            (0x2e2,"SLH-DSA-SHA2-128s",key_SLH_DSA_SHA2_128s,7,&_LC5,"EncryptedPrivateKeyInfo",
             "the holy handgrenade of antioch","AES-256-CBC",encode_EVP_PKEY_prov,
             check_protected_PKCS8_DER,0);
  return;
}



void test_protected_SLH_DSA_SHA2_128s_via_PEM(void)

{
  test_encode_decode_constprop_1
            (0x2f9,"SLH-DSA-SHA2-128s",key_SLH_DSA_SHA2_128s,7,"EncryptedPrivateKeyInfo",
             "the holy handgrenade of antioch","AES-256-CBC",encode_EVP_PKEY_prov,
             check_protected_PKCS8_PEM,0);
  return;
}



undefined1 * test_get_options(void)

{
  return options_23;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 setup_tests(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *__s1;
  long in_FS_OFFSET;
  bool bVar5;
  char *local_108;
  undefined4 local_100;
  undefined1 *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [16];
  char *local_b8;
  undefined4 local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined4 local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  uVar3 = 0;
  uVar4 = 0;
  uVar2 = 0;
  __s1 = "default";
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b0 = 2;
  local_a0 = __LC135;
  uStack_98 = _UNK_0010e9d8;
  local_78 = __LC135;
  uStack_70 = _UNK_0010e9d8;
  local_88 = 2;
  local_68 = 0;
  local_60 = 0;
  local_b8 = "pbits";
  local_a8 = &pbits_22;
  local_90 = "qbits";
  local_80 = &qbits_21;
  local_108 = "group";
  local_58 = 0;
  local_100 = 4;
  local_f8 = groupname_20;
  local_50 = (undefined1  [16])0x0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_f0 = __LC138;
  uStack_e8 = _UNK_0010e9e8;
  local_c8 = (undefined1  [16])0x0;
LAB_00107b40:
  iVar1 = opt_next();
  do {
    if (iVar1 == 0) {
      iVar1 = strcmp(__s1,"fips");
      if (iVar1 == 0) {
        is_fips = 1;
      }
      if (default_libctx == 0) {
        iVar1 = test_get_libctx(&testctx,&nullprov,uVar2,&deflprov,__s1);
      }
      else {
        iVar1 = test_get_libctx(0,0,uVar2,&deflprov,__s1);
      }
      if (iVar1 == 0) goto LAB_00108001;
      if (is_fips == 0) {
        is_fips_3_0_0 = 0;
LAB_00107c05:
        is_fips_lt_3_5 = 0;
      }
      else {
        iVar1 = fips_provider_version_eq(testctx,3,0,0);
        is_fips_3_0_0 = (uint)(iVar1 != 0);
        if (is_fips == 0) goto LAB_00107c05;
        iVar1 = fips_provider_version_lt(testctx,3,5,0);
        is_fips_lt_3_5 = (uint)(iVar1 != 0);
      }
      iVar1 = OSSL_PROVIDER_add_builtin(testctx,"legacy",&ossl_legacy_provider_init);
      if (iVar1 != 0) {
        keyctx = OSSL_LIB_CTX_new();
        iVar1 = test_ptr("test/endecode_test.c",0x59c,"keyctx = OSSL_LIB_CTX_new()",keyctx);
        if (iVar1 != 0) {
          keyprov = OSSL_PROVIDER_load(keyctx,"default");
          iVar1 = test_ptr("test/endecode_test.c",0x59e,
                           "keyprov = OSSL_PROVIDER_load(keyctx, \"default\")",keyprov);
          if (iVar1 != 0) {
            bnctx = BN_CTX_new_ex(testctx);
            iVar1 = test_ptr("test/endecode_test.c",0x5a2,"bnctx = BN_CTX_new_ex(testctx)",bnctx);
            if (iVar1 != 0) {
              bld_prime_nc = OSSL_PARAM_BLD_new();
              iVar1 = test_ptr("test/endecode_test.c",0x5a3,"bld_prime_nc = OSSL_PARAM_BLD_new()",
                               bld_prime_nc);
              if (iVar1 != 0) {
                bld_prime = OSSL_PARAM_BLD_new();
                iVar1 = test_ptr("test/endecode_test.c",0x5a4,"bld_prime = OSSL_PARAM_BLD_new()",
                                 bld_prime);
                if (((iVar1 != 0) &&
                    (iVar1 = do_create_ec_explicit_prime_params_constprop_0
                                       (bld_prime_nc,prime256v1_gen_13), iVar1 != 0)) &&
                   (iVar1 = do_create_ec_explicit_prime_params_constprop_0
                                      (bld_prime,prime256v1_gen2_7), iVar1 != 0)) {
                  ec_explicit_prime_params_nc = OSSL_PARAM_BLD_to_param(bld_prime_nc);
                  iVar1 = test_ptr("test/endecode_test.c",0x5a7,
                                   "ec_explicit_prime_params_nc = OSSL_PARAM_BLD_to_param(bld_prime_nc)"
                                   ,ec_explicit_prime_params_nc);
                  if (iVar1 != 0) {
                    ec_explicit_prime_params_explicit = OSSL_PARAM_BLD_to_param(bld_prime);
                    iVar1 = test_ptr("test/endecode_test.c",0x5a8,
                                     "ec_explicit_prime_params_explicit = OSSL_PARAM_BLD_to_param(bld_prime)"
                                     ,ec_explicit_prime_params_explicit);
                    if (iVar1 != 0) {
                      bld_tri_nc = OSSL_PARAM_BLD_new();
                      iVar1 = test_ptr("test/endecode_test.c",0x5aa,
                                       "bld_tri_nc = OSSL_PARAM_BLD_new()",bld_tri_nc);
                      if (iVar1 != 0) {
                        bld_tri = OSSL_PARAM_BLD_new();
                        iVar1 = test_ptr("test/endecode_test.c",0x5ab,
                                         "bld_tri = OSSL_PARAM_BLD_new()",bld_tri);
                        if (((iVar1 != 0) &&
                            (iVar1 = do_create_ec_explicit_trinomial_params_constprop_0
                                               (bld_tri_nc,gen_6), iVar1 != 0)) &&
                           (iVar1 = do_create_ec_explicit_trinomial_params_constprop_0
                                              (bld_tri,gen2_0), iVar1 != 0)) {
                          ec_explicit_tri_params_nc = OSSL_PARAM_BLD_to_param(bld_tri_nc);
                          iVar1 = test_ptr("test/endecode_test.c",0x5ae,
                                           "ec_explicit_tri_params_nc = OSSL_PARAM_BLD_to_param(bld_tri_nc)"
                                           ,ec_explicit_tri_params_nc);
                          if (iVar1 != 0) {
                            ec_explicit_tri_params_explicit = OSSL_PARAM_BLD_to_param(bld_tri);
                            iVar1 = test_ptr("test/endecode_test.c",0x5af,
                                             "ec_explicit_tri_params_explicit = OSSL_PARAM_BLD_to_param(bld_tri)"
                                             ,ec_explicit_tri_params_explicit);
                            if (iVar1 != 0) {
                              test_info("test/endecode_test.c",0x5b5,"Generating keys...");
                              test_info("test/endecode_test.c",0x5b8,"Generating DH keys...");
                              template_DH = make_template(&_LC108,0);
                              iVar1 = test_ptr("test/endecode_test.c",0x5b9,
                                               "template_DH = make_template(\"DH\", ((void *)0))",
                                               template_DH);
                              if (iVar1 == 0) {
LAB_00107f15:
                                test_info("test/endecode_test.c",0x5bd,"Generating DSA keys...");
LAB_00107f35:
                                test_info("test/endecode_test.c",0x5c1,"Generating EC keys...");
LAB_00107f55:
                                bVar5 = false;
                                if (is_fips_lt_3_5 != 0) goto LAB_00108971;
LAB_00107f62:
                                test_info("test/endecode_test.c",0x5f2,"Loading RSA key...");
LAB_00107f78:
                                test_info("test/endecode_test.c",0x5f4,"Loading RSA_PSS key...");
LAB_00107f8e:
                                test_info("test/endecode_test.c",0x5f6,"Generating keys done");
                              }
                              else {
                                key_DH = make_key_constprop_0(&_LC108,template_DH);
                                iVar1 = test_ptr("test/endecode_test.c",0x5b9,
                                                 "key_DH = make_key(\"DH\", template_DH, NULL)",
                                                 key_DH);
                                if (iVar1 == 0) goto LAB_00107f15;
                                template_DHX = make_template("X9.42 DH",0);
                                iVar1 = test_ptr("test/endecode_test.c",0x5ba,
                                                 "template_DHX = make_template(\"X9.42 DH\", ((void *)0))"
                                                 ,template_DHX);
                                if (iVar1 == 0) goto LAB_00107f15;
                                key_DHX = make_key_constprop_0("X9.42 DH",template_DHX);
                                iVar1 = test_ptr("test/endecode_test.c",0x5ba,
                                                 "key_DHX = make_key(\"X9.42 DH\", template_DHX, NULL)"
                                                 ,key_DHX);
                                test_info("test/endecode_test.c",0x5bd,"Generating DSA keys...");
                                if (iVar1 == 0) goto LAB_00107f35;
                                template_DSA = make_template(&_LC44,&local_b8);
                                iVar1 = test_ptr("test/endecode_test.c",0x5be,
                                                 "template_DSA = make_template(\"DSA\", DSA_params)"
                                                 ,template_DSA);
                                if (iVar1 == 0) goto LAB_00107f35;
                                key_DSA = make_key_constprop_0(&_LC44,template_DSA);
                                iVar1 = test_ptr("test/endecode_test.c",0x5be,
                                                 "key_DSA = make_key(\"DSA\", template_DSA, NULL)",
                                                 key_DSA);
                                test_info("test/endecode_test.c",0x5c1,"Generating EC keys...");
                                if (iVar1 == 0) goto LAB_00107f55;
                                template_EC = make_template(&_LC46,&local_108);
                                iVar1 = test_ptr("test/endecode_test.c",0x5c2,
                                                 "template_EC = make_template(\"EC\", EC_params)",
                                                 template_EC);
                                if (iVar1 == 0) goto LAB_00107f55;
                                key_EC = make_key_constprop_0(&_LC46,template_EC);
                                iVar1 = test_ptr("test/endecode_test.c",0x5c2,
                                                 "key_EC = make_key(\"EC\", template_EC, NULL)",
                                                 key_EC);
                                if (iVar1 == 0) goto LAB_00107f55;
                                template_ECExplicitPrimeNamedCurve =
                                     make_template(&_LC46,ec_explicit_prime_params_nc);
                                iVar1 = test_ptr("test/endecode_test.c",0x5c3,
                                                 "template_ECExplicitPrimeNamedCurve = make_template(\"EC\", ec_explicit_prime_params_nc)"
                                                 ,template_ECExplicitPrimeNamedCurve);
                                if (iVar1 == 0) goto LAB_00107f55;
                                key_ECExplicitPrimeNamedCurve =
                                     make_key_constprop_0(&_LC46,template_ECExplicitPrimeNamedCurve)
                                ;
                                iVar1 = test_ptr("test/endecode_test.c",0x5c3,
                                                 "key_ECExplicitPrimeNamedCurve = make_key(\"EC\", template_ECExplicitPrimeNamedCurve, NULL)"
                                                 ,key_ECExplicitPrimeNamedCurve);
                                if (iVar1 == 0) goto LAB_00107f55;
                                template_ECExplicitPrime2G =
                                     make_template(&_LC46,ec_explicit_prime_params_explicit);
                                iVar1 = test_ptr("test/endecode_test.c",0x5c4,
                                                 "template_ECExplicitPrime2G = make_template(\"EC\", ec_explicit_prime_params_explicit)"
                                                 ,template_ECExplicitPrime2G);
                                if (iVar1 == 0) goto LAB_00107f55;
                                key_ECExplicitPrime2G =
                                     make_key_constprop_0(&_LC46,template_ECExplicitPrime2G);
                                iVar1 = test_ptr("test/endecode_test.c",0x5c4,
                                                 "key_ECExplicitPrime2G = make_key(\"EC\", template_ECExplicitPrime2G, NULL)"
                                                 ,key_ECExplicitPrime2G);
                                if (iVar1 == 0) goto LAB_00107f55;
                                template_ECExplicitTriNamedCurve =
                                     make_template(&_LC46,ec_explicit_tri_params_nc);
                                iVar1 = test_ptr("test/endecode_test.c",0x5c6,
                                                 "template_ECExplicitTriNamedCurve = make_template(\"EC\", ec_explicit_tri_params_nc)"
                                                 ,template_ECExplicitTriNamedCurve);
                                if (iVar1 == 0) goto LAB_00107f55;
                                key_ECExplicitTriNamedCurve =
                                     make_key_constprop_0(&_LC46,template_ECExplicitTriNamedCurve);
                                iVar1 = test_ptr("test/endecode_test.c",0x5c6,
                                                 "key_ECExplicitTriNamedCurve = make_key(\"EC\", template_ECExplicitTriNamedCurve, NULL)"
                                                 ,key_ECExplicitTriNamedCurve);
                                if (iVar1 == 0) goto LAB_00107f55;
                                template_ECExplicitTri2G =
                                     make_template(&_LC46,ec_explicit_tri_params_explicit);
                                iVar1 = test_ptr("test/endecode_test.c",0x5c7,
                                                 "template_ECExplicitTri2G = make_template(\"EC\", ec_explicit_tri_params_explicit)"
                                                 ,template_ECExplicitTri2G);
                                if (iVar1 == 0) goto LAB_00107f55;
                                key_ECExplicitTri2G =
                                     make_key_constprop_0(&_LC46,template_ECExplicitTri2G);
                                iVar1 = test_ptr("test/endecode_test.c",0x5c7,
                                                 "key_ECExplicitTri2G = make_key(\"EC\", template_ECExplicitTri2G, NULL)"
                                                 ,key_ECExplicitTri2G);
                                if (iVar1 == 0) goto LAB_00107f55;
                                key_SM2 = make_key_constprop_0(&_LC109,0);
                                iVar1 = test_ptr("test/endecode_test.c",0x5ca,
                                                 "key_SM2 = make_key(\"SM2\", NULL, ((void *)0))",
                                                 key_SM2);
                                if (iVar1 == 0) goto LAB_00107f55;
                                key_ED25519 = make_key_constprop_0("ED25519",0);
                                iVar1 = test_ptr("test/endecode_test.c",0x5ce,
                                                 "key_ED25519 = make_key(\"ED25519\", NULL, ((void *)0))"
                                                 ,key_ED25519);
                                if (iVar1 == 0) goto LAB_00107f55;
                                key_ED448 = make_key_constprop_0("ED448",0);
                                iVar1 = test_ptr("test/endecode_test.c",0x5cf,
                                                 "key_ED448 = make_key(\"ED448\", NULL, ((void *)0))"
                                                 ,key_ED448);
                                if (iVar1 == 0) goto LAB_00107f55;
                                key_X25519 = make_key_constprop_0("X25519",0);
                                iVar1 = test_ptr("test/endecode_test.c",0x5d0,
                                                 "key_X25519 = make_key(\"X25519\", NULL, ((void *)0))"
                                                 ,key_X25519);
                                if (iVar1 == 0) goto LAB_00107f55;
                                key_X448 = make_key_constprop_0(&_LC114,0);
                                iVar1 = test_ptr("test/endecode_test.c",0x5d1,
                                                 "key_X448 = make_key(\"X448\", NULL, ((void *)0))",
                                                 key_X448);
                                if (is_fips_lt_3_5 == 0) {
                                  if (iVar1 == 0) goto LAB_00107f62;
                                  key_ML_DSA_44 = make_key_constprop_0("ML-DSA-44",0);
                                  iVar1 = test_ptr("test/endecode_test.c",0x5d5,
                                                                                                      
                                                  "key_ML_DSA_44 = make_key(\"ML-DSA-44\", NULL, ((void *)0))"
                                                  ,key_ML_DSA_44);
                                  if (iVar1 == 0) goto LAB_00107f55;
                                  key_ML_DSA_65 = make_key_constprop_0("ML-DSA-65",0);
                                  iVar1 = test_ptr("test/endecode_test.c",0x5d6,
                                                                                                      
                                                  "key_ML_DSA_65 = make_key(\"ML-DSA-65\", NULL, ((void *)0))"
                                                  ,key_ML_DSA_65);
                                  if (iVar1 == 0) goto LAB_00107f55;
                                  key_ML_DSA_87 = make_key_constprop_0("ML-DSA-87",0);
                                  iVar1 = test_ptr("test/endecode_test.c",0x5d7,
                                                                                                      
                                                  "key_ML_DSA_87 = make_key(\"ML-DSA-87\", NULL, ((void *)0))"
                                                  ,key_ML_DSA_87);
                                  if (is_fips_lt_3_5 != 0) goto LAB_00108968;
                                  if (iVar1 != 0) {
                                    key_ML_KEM_512 = make_key_constprop_0("ML-KEM-512",0);
                                    iVar1 = test_ptr("test/endecode_test.c",0x5dc,
                                                                                                          
                                                  "key_ML_KEM_512 = make_key(\"ML-KEM-512\", NULL, ((void *)0))"
                                                  ,key_ML_KEM_512);
                                    if (iVar1 != 0) {
                                      key_ML_KEM_768 = make_key_constprop_0("ML-KEM-768",0);
                                      iVar1 = test_ptr("test/endecode_test.c",0x5dd,
                                                                                                              
                                                  "key_ML_KEM_768 = make_key(\"ML-KEM-768\", NULL, ((void *)0))"
                                                  ,key_ML_KEM_768);
                                      if (iVar1 != 0) {
                                        key_ML_KEM_1024 = make_key_constprop_0("ML-KEM-1024",0);
                                        iVar1 = test_ptr("test/endecode_test.c",0x5de,
                                                                                                                  
                                                  "key_ML_KEM_1024 = make_key(\"ML-KEM-1024\", NULL, ((void *)0))"
                                                  ,key_ML_KEM_1024);
                                        if (is_fips_lt_3_5 != 0) goto LAB_00108968;
                                        if (iVar1 != 0) {
                                          key_SLH_DSA_SHA2_128s =
                                               make_key_constprop_0("SLH-DSA-SHA2-128s",0);
                                          iVar1 = test_ptr("test/endecode_test.c",0x5e3,
                                                                                                                      
                                                  "key_SLH_DSA_SHA2_128s = make_key(\"SLH-DSA-SHA2-128s\", NULL, ((void *)0))"
                                                  ,key_SLH_DSA_SHA2_128s);
                                          if (iVar1 != 0) {
                                            key_SLH_DSA_SHA2_128f =
                                                 make_key_constprop_0("SLH-DSA-SHA2-128f",0);
                                            iVar1 = test_ptr("test/endecode_test.c",0x5e4,
                                                                                                                          
                                                  "key_SLH_DSA_SHA2_128f = make_key(\"SLH-DSA-SHA2-128f\", NULL, ((void *)0))"
                                                  ,key_SLH_DSA_SHA2_128f);
                                            if (iVar1 != 0) {
                                              key_SLH_DSA_SHA2_192s =
                                                   make_key_constprop_0("SLH-DSA-SHA2-192s",0);
                                              iVar1 = test_ptr("test/endecode_test.c",0x5e5,
                                                                                                                              
                                                  "key_SLH_DSA_SHA2_192s = make_key(\"SLH-DSA-SHA2-192s\", NULL, ((void *)0))"
                                                  ,key_SLH_DSA_SHA2_192s);
                                              if (iVar1 != 0) {
                                                key_SLH_DSA_SHA2_192f =
                                                     make_key_constprop_0("SLH-DSA-SHA2-192f",0);
                                                iVar1 = test_ptr("test/endecode_test.c",0x5e6,
                                                                                                                                  
                                                  "key_SLH_DSA_SHA2_192f = make_key(\"SLH-DSA-SHA2-192f\", NULL, ((void *)0))"
                                                  ,key_SLH_DSA_SHA2_192f);
                                                if (iVar1 != 0) {
                                                  key_SLH_DSA_SHA2_256s =
                                                       make_key_constprop_0("SLH-DSA-SHA2-256s",0);
                                                  iVar1 = test_ptr("test/endecode_test.c",0x5e7,
                                                                                                                                      
                                                  "key_SLH_DSA_SHA2_256s = make_key(\"SLH-DSA-SHA2-256s\", NULL, ((void *)0))"
                                                  ,key_SLH_DSA_SHA2_256s);
                                                  if (iVar1 != 0) {
                                                    key_SLH_DSA_SHA2_256f =
                                                         make_key_constprop_0("SLH-DSA-SHA2-256f",0)
                                                    ;
                                                    iVar1 = test_ptr("test/endecode_test.c",0x5e8,
                                                                                                                                          
                                                  "key_SLH_DSA_SHA2_256f = make_key(\"SLH-DSA-SHA2-256f\", NULL, ((void *)0))"
                                                  ,key_SLH_DSA_SHA2_256f);
                                                  if (iVar1 != 0) {
                                                    key_SLH_DSA_SHAKE_128s =
                                                         make_key_constprop_0
                                                                   ("SLH-DSA-SHAKE-128s",0);
                                                    iVar1 = test_ptr("test/endecode_test.c",0x5e9,
                                                                                                                                          
                                                  "key_SLH_DSA_SHAKE_128s = make_key(\"SLH-DSA-SHAKE-128s\", NULL, ((void *)0))"
                                                  ,key_SLH_DSA_SHAKE_128s);
                                                  if (iVar1 != 0) {
                                                    key_SLH_DSA_SHAKE_128f =
                                                         make_key_constprop_0
                                                                   ("SLH-DSA-SHAKE-128f",0);
                                                    iVar1 = test_ptr("test/endecode_test.c",0x5ea,
                                                                                                                                          
                                                  "key_SLH_DSA_SHAKE_128f = make_key(\"SLH-DSA-SHAKE-128f\", NULL, ((void *)0))"
                                                  ,key_SLH_DSA_SHAKE_128f);
                                                  if (iVar1 != 0) {
                                                    key_SLH_DSA_SHAKE_192s =
                                                         make_key_constprop_0
                                                                   ("SLH-DSA-SHAKE-192s",0);
                                                    iVar1 = test_ptr("test/endecode_test.c",0x5eb,
                                                                                                                                          
                                                  "key_SLH_DSA_SHAKE_192s = make_key(\"SLH-DSA-SHAKE-192s\", NULL, ((void *)0))"
                                                  ,key_SLH_DSA_SHAKE_192s);
                                                  if (iVar1 != 0) {
                                                    key_SLH_DSA_SHAKE_192f =
                                                         make_key_constprop_0
                                                                   ("SLH-DSA-SHAKE-192f",0);
                                                    iVar1 = test_ptr("test/endecode_test.c",0x5ec,
                                                                                                                                          
                                                  "key_SLH_DSA_SHAKE_192f = make_key(\"SLH-DSA-SHAKE-192f\", NULL, ((void *)0))"
                                                  ,key_SLH_DSA_SHAKE_192f);
                                                  if (iVar1 != 0) {
                                                    key_SLH_DSA_SHAKE_256s =
                                                         make_key_constprop_0
                                                                   ("SLH-DSA-SHAKE-256s",0);
                                                    iVar1 = test_ptr("test/endecode_test.c",0x5ed,
                                                                                                                                          
                                                  "key_SLH_DSA_SHAKE_256s = make_key(\"SLH-DSA-SHAKE-256s\", NULL, ((void *)0))"
                                                  ,key_SLH_DSA_SHAKE_256s);
                                                  if (iVar1 != 0) {
                                                    key_SLH_DSA_SHAKE_256f =
                                                         make_key_constprop_0
                                                                   ("SLH-DSA-SHAKE-256f",0);
                                                    iVar1 = test_ptr("test/endecode_test.c",0x5ee,
                                                                                                                                          
                                                  "key_SLH_DSA_SHAKE_256f = make_key(\"SLH-DSA-SHAKE-256f\", NULL, ((void *)0))"
                                                  ,key_SLH_DSA_SHAKE_256f);
                                                  goto LAB_00108968;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                        goto LAB_00107f62;
                                      }
                                    }
                                    goto LAB_00107f55;
                                  }
                                  goto LAB_00107f62;
                                }
LAB_00108968:
                                bVar5 = iVar1 != 0;
LAB_00108971:
                                test_info("test/endecode_test.c",0x5f2,"Loading RSA key...");
                                if (!bVar5) goto LAB_00107f78;
                                key_RSA = load_pkey_pem(uVar4,keyctx);
                                iVar1 = test_ptr("test/endecode_test.c",0x5f3,
                                                 "key_RSA = load_pkey_pem(rsa_file, keyctx)",key_RSA
                                                );
                                test_info("test/endecode_test.c",0x5f4,"Loading RSA_PSS key...");
                                if (iVar1 == 0) goto LAB_00107f8e;
                                key_RSA_PSS = load_pkey_pem(uVar3,keyctx);
                                iVar1 = test_ptr("test/endecode_test.c",0x5f5,
                                                 "key_RSA_PSS = load_pkey_pem(rsa_pss_file, keyctx)"
                                                 ,key_RSA_PSS);
                                test_info("test/endecode_test.c",0x5f6,"Generating keys done");
                                if (iVar1 != 0) {
                                  add_test("test_unprotected_DH_via_DER",test_unprotected_DH_via_DER
                                          );
                                  add_test("test_unprotected_DH_via_PEM",test_unprotected_DH_via_PEM
                                          );
                                  add_test("test_protected_DH_via_DER",test_protected_DH_via_DER);
                                  add_test("test_protected_DH_via_PEM",test_protected_DH_via_PEM);
                                  add_test("test_public_DH_via_DER",test_public_DH_via_DER);
                                  add_test("test_public_DH_via_PEM",test_public_DH_via_PEM);
                                  add_test("test_params_DH_via_DER",test_params_DH_via_DER);
                                  add_test("test_params_DH_via_PEM",test_params_DH_via_PEM);
                                  add_test("test_unprotected_DHX_via_DER",
                                           test_unprotected_DHX_via_DER);
                                  add_test("test_unprotected_DHX_via_PEM",
                                           test_unprotected_DHX_via_PEM);
                                  add_test("test_protected_DHX_via_DER",test_protected_DHX_via_DER);
                                  add_test("test_protected_DHX_via_PEM",test_protected_DHX_via_PEM);
                                  add_test("test_public_DHX_via_DER",test_public_DHX_via_DER);
                                  add_test("test_public_DHX_via_PEM",test_public_DHX_via_PEM);
                                  add_test("test_params_DHX_via_DER",test_params_DHX_via_DER);
                                  add_test("test_params_DHX_via_PEM",test_params_DHX_via_PEM);
                                  add_test("test_unprotected_DSA_via_DER",
                                           test_unprotected_DSA_via_DER);
                                  add_test("test_unprotected_DSA_via_PEM",
                                           test_unprotected_DSA_via_PEM);
                                  add_test("test_protected_DSA_via_DER",test_protected_DSA_via_DER);
                                  add_test("test_protected_DSA_via_PEM",test_protected_DSA_via_PEM);
                                  add_test("test_public_DSA_via_DER",test_public_DSA_via_DER);
                                  add_test("test_public_DSA_via_PEM",test_public_DSA_via_PEM);
                                  add_test("test_params_DSA_via_DER",test_params_DSA_via_DER);
                                  add_test("test_params_DSA_via_PEM",test_params_DSA_via_PEM);
                                  add_test("test_unprotected_DSA_via_legacy_PEM",
                                           test_unprotected_DSA_via_legacy_PEM);
                                  add_test("test_protected_DSA_via_legacy_PEM",
                                           test_protected_DSA_via_legacy_PEM);
                                  add_test("test_unprotected_DSA_via_MSBLOB",
                                           test_unprotected_DSA_via_MSBLOB);
                                  add_test("test_public_DSA_via_MSBLOB",test_public_DSA_via_MSBLOB);
                                  add_test("test_unprotected_DSA_via_PVK",
                                           test_unprotected_DSA_via_PVK);
                                  add_test("test_protected_DSA_via_PVK",test_protected_DSA_via_PVK);
                                  add_test("ec_encode_to_data_multi",ec_encode_to_data_multi);
                                  add_test("test_unprotected_EC_via_DER",test_unprotected_EC_via_DER
                                          );
                                  add_test("test_unprotected_EC_via_PEM",test_unprotected_EC_via_PEM
                                          );
                                  add_test("test_protected_EC_via_DER",test_protected_EC_via_DER);
                                  add_test("test_protected_EC_via_PEM",test_protected_EC_via_PEM);
                                  add_test("test_public_EC_via_DER",test_public_EC_via_DER);
                                  add_test("test_public_EC_via_PEM",test_public_EC_via_PEM);
                                  add_test("test_params_EC_via_DER",test_params_EC_via_DER);
                                  add_test("test_params_EC_via_PEM",test_params_EC_via_PEM);
                                  add_test("test_unprotected_EC_via_legacy_PEM",
                                           test_unprotected_EC_via_legacy_PEM);
                                  add_test("test_protected_EC_via_legacy_PEM",
                                           test_protected_EC_via_legacy_PEM);
                                  add_test("test_unprotected_ECExplicitPrimeNamedCurve_via_DER",
                                           test_unprotected_ECExplicitPrimeNamedCurve_via_DER);
                                  add_test("test_unprotected_ECExplicitPrimeNamedCurve_via_PEM",
                                           test_unprotected_ECExplicitPrimeNamedCurve_via_PEM);
                                  add_test("test_protected_ECExplicitPrimeNamedCurve_via_DER",
                                           test_protected_ECExplicitPrimeNamedCurve_via_DER);
                                  add_test("test_protected_ECExplicitPrimeNamedCurve_via_PEM",
                                           test_protected_ECExplicitPrimeNamedCurve_via_PEM);
                                  add_test("test_public_ECExplicitPrimeNamedCurve_via_DER",
                                           test_public_ECExplicitPrimeNamedCurve_via_DER);
                                  add_test("test_public_ECExplicitPrimeNamedCurve_via_PEM",
                                           test_public_ECExplicitPrimeNamedCurve_via_PEM);
                                  add_test("test_unprotected_ECExplicitPrimeNamedCurve_via_legacy_PEM"
                                           ,
                                           test_unprotected_ECExplicitPrimeNamedCurve_via_legacy_PEM
                                          );
                                  add_test("test_protected_ECExplicitPrimeNamedCurve_via_legacy_PEM"
                                           ,test_protected_ECExplicitPrimeNamedCurve_via_legacy_PEM)
                                  ;
                                  add_test("test_unprotected_ECExplicitPrime2G_via_DER",
                                           test_unprotected_ECExplicitPrime2G_via_DER);
                                  add_test("test_unprotected_ECExplicitPrime2G_via_PEM",
                                           test_unprotected_ECExplicitPrime2G_via_PEM);
                                  add_test("test_protected_ECExplicitPrime2G_via_DER",
                                           test_protected_ECExplicitPrime2G_via_DER);
                                  add_test("test_protected_ECExplicitPrime2G_via_PEM",
                                           test_protected_ECExplicitPrime2G_via_PEM);
                                  add_test("test_public_ECExplicitPrime2G_via_DER",
                                           test_public_ECExplicitPrime2G_via_DER);
                                  add_test("test_public_ECExplicitPrime2G_via_PEM",
                                           test_public_ECExplicitPrime2G_via_PEM);
                                  add_test("test_unprotected_ECExplicitPrime2G_via_legacy_PEM",
                                           test_unprotected_ECExplicitPrime2G_via_legacy_PEM);
                                  add_test("test_protected_ECExplicitPrime2G_via_legacy_PEM",
                                           test_protected_ECExplicitPrime2G_via_legacy_PEM);
                                  add_test("test_unprotected_ECExplicitTriNamedCurve_via_DER",
                                           test_unprotected_ECExplicitTriNamedCurve_via_DER);
                                  add_test("test_unprotected_ECExplicitTriNamedCurve_via_PEM",
                                           test_unprotected_ECExplicitTriNamedCurve_via_PEM);
                                  add_test("test_protected_ECExplicitTriNamedCurve_via_DER",
                                           test_protected_ECExplicitTriNamedCurve_via_DER);
                                  add_test("test_protected_ECExplicitTriNamedCurve_via_PEM",
                                           test_protected_ECExplicitTriNamedCurve_via_PEM);
                                  add_test("test_public_ECExplicitTriNamedCurve_via_DER",
                                           test_public_ECExplicitTriNamedCurve_via_DER);
                                  add_test("test_public_ECExplicitTriNamedCurve_via_PEM",
                                           test_public_ECExplicitTriNamedCurve_via_PEM);
                                  add_test("test_unprotected_ECExplicitTriNamedCurve_via_legacy_PEM"
                                           ,test_unprotected_ECExplicitTriNamedCurve_via_legacy_PEM)
                                  ;
                                  add_test("test_protected_ECExplicitTriNamedCurve_via_legacy_PEM",
                                           test_protected_ECExplicitTriNamedCurve_via_legacy_PEM);
                                  add_test("test_unprotected_ECExplicitTri2G_via_DER",
                                           test_unprotected_ECExplicitTri2G_via_DER);
                                  add_test("test_unprotected_ECExplicitTri2G_via_PEM",
                                           test_unprotected_ECExplicitTri2G_via_PEM);
                                  add_test("test_protected_ECExplicitTri2G_via_DER",
                                           test_protected_ECExplicitTri2G_via_DER);
                                  add_test("test_protected_ECExplicitTri2G_via_PEM",
                                           test_protected_ECExplicitTri2G_via_PEM);
                                  add_test("test_public_ECExplicitTri2G_via_DER",
                                           test_public_ECExplicitTri2G_via_DER);
                                  add_test("test_public_ECExplicitTri2G_via_PEM",
                                           test_public_ECExplicitTri2G_via_PEM);
                                  add_test("test_unprotected_ECExplicitTri2G_via_legacy_PEM",
                                           test_unprotected_ECExplicitTri2G_via_legacy_PEM);
                                  add_test("test_protected_ECExplicitTri2G_via_legacy_PEM",
                                           test_protected_ECExplicitTri2G_via_legacy_PEM);
                                  if (is_fips_3_0_0 == 0) {
                                    add_test("test_unprotected_SM2_via_DER",
                                             test_unprotected_SM2_via_DER);
                                    add_test("test_unprotected_SM2_via_PEM",
                                             test_unprotected_SM2_via_PEM);
                                    add_test("test_protected_SM2_via_DER",test_protected_SM2_via_DER
                                            );
                                    add_test("test_protected_SM2_via_PEM",test_protected_SM2_via_PEM
                                            );
                                    add_test("test_public_SM2_via_DER",test_public_SM2_via_DER);
                                    add_test("test_public_SM2_via_PEM",test_public_SM2_via_PEM);
                                  }
                                  add_test("test_unprotected_ED25519_via_DER",
                                           test_unprotected_ED25519_via_DER);
                                  add_test("test_unprotected_ED25519_via_PEM",
                                           test_unprotected_ED25519_via_PEM);
                                  add_test("test_protected_ED25519_via_DER",
                                           test_protected_ED25519_via_DER);
                                  add_test("test_protected_ED25519_via_PEM",
                                           test_protected_ED25519_via_PEM);
                                  add_test("test_public_ED25519_via_DER",test_public_ED25519_via_DER
                                          );
                                  add_test("test_public_ED25519_via_PEM",test_public_ED25519_via_PEM
                                          );
                                  add_test("test_unprotected_ED448_via_DER",
                                           test_unprotected_ED448_via_DER);
                                  add_test("test_unprotected_ED448_via_PEM",
                                           test_unprotected_ED448_via_PEM);
                                  add_test("test_protected_ED448_via_DER",
                                           test_protected_ED448_via_DER);
                                  add_test("test_protected_ED448_via_PEM",
                                           test_protected_ED448_via_PEM);
                                  add_test("test_public_ED448_via_DER",test_public_ED448_via_DER);
                                  add_test("test_public_ED448_via_PEM",test_public_ED448_via_PEM);
                                  add_test("test_unprotected_X25519_via_DER",
                                           test_unprotected_X25519_via_DER);
                                  add_test("test_unprotected_X25519_via_PEM",
                                           test_unprotected_X25519_via_PEM);
                                  add_test("test_protected_X25519_via_DER",
                                           test_protected_X25519_via_DER);
                                  add_test("test_protected_X25519_via_PEM",
                                           test_protected_X25519_via_PEM);
                                  add_test("test_public_X25519_via_DER",test_public_X25519_via_DER);
                                  add_test("test_public_X25519_via_PEM",test_public_X25519_via_PEM);
                                  add_test("test_unprotected_X448_via_DER",
                                           test_unprotected_X448_via_DER);
                                  add_test("test_unprotected_X448_via_PEM",
                                           test_unprotected_X448_via_PEM);
                                  add_test("test_protected_X448_via_DER",test_protected_X448_via_DER
                                          );
                                  add_test("test_protected_X448_via_PEM",test_protected_X448_via_PEM
                                          );
                                  add_test("test_public_X448_via_DER",test_public_X448_via_DER);
                                  add_test("test_public_X448_via_PEM",test_public_X448_via_PEM);
                                  if (is_fips_lt_3_5 == 0) {
                                    add_test("test_unprotected_ML_KEM_512_via_DER",
                                             test_unprotected_ML_KEM_512_via_DER);
                                    add_test("test_unprotected_ML_KEM_512_via_PEM",
                                             test_unprotected_ML_KEM_512_via_PEM);
                                    add_test("test_protected_ML_KEM_512_via_DER",
                                             test_protected_ML_KEM_512_via_DER);
                                    add_test("test_protected_ML_KEM_512_via_PEM",
                                             test_protected_ML_KEM_512_via_PEM);
                                    add_test("test_public_ML_KEM_512_via_DER",
                                             test_public_ML_KEM_512_via_DER);
                                    add_test("test_public_ML_KEM_512_via_PEM",
                                             test_public_ML_KEM_512_via_PEM);
                                    add_test("test_unprotected_ML_KEM_768_via_DER",
                                             test_unprotected_ML_KEM_768_via_DER);
                                    add_test("test_unprotected_ML_KEM_768_via_PEM",
                                             test_unprotected_ML_KEM_768_via_PEM);
                                    add_test("test_protected_ML_KEM_768_via_DER",
                                             test_protected_ML_KEM_768_via_DER);
                                    add_test("test_protected_ML_KEM_768_via_PEM",
                                             test_protected_ML_KEM_768_via_PEM);
                                    add_test("test_public_ML_KEM_768_via_DER",
                                             test_public_ML_KEM_768_via_DER);
                                    add_test("test_public_ML_KEM_768_via_PEM",
                                             test_public_ML_KEM_768_via_PEM);
                                    add_test("test_unprotected_ML_KEM_1024_via_DER",
                                             test_unprotected_ML_KEM_1024_via_DER);
                                    add_test("test_unprotected_ML_KEM_1024_via_PEM",
                                             test_unprotected_ML_KEM_1024_via_PEM);
                                    add_test("test_protected_ML_KEM_1024_via_DER",
                                             test_protected_ML_KEM_1024_via_DER);
                                    add_test("test_protected_ML_KEM_1024_via_PEM",
                                             test_protected_ML_KEM_1024_via_PEM);
                                    add_test("test_public_ML_KEM_1024_via_DER",
                                             test_public_ML_KEM_1024_via_DER);
                                    add_test("test_public_ML_KEM_1024_via_PEM",
                                             test_public_ML_KEM_1024_via_PEM);
                                  }
                                  add_test("test_unprotected_RSA_via_DER",
                                           test_unprotected_RSA_via_DER);
                                  add_test("test_unprotected_RSA_via_PEM",
                                           test_unprotected_RSA_via_PEM);
                                  add_test("test_protected_RSA_via_DER",test_protected_RSA_via_DER);
                                  add_test("test_protected_RSA_via_PEM",test_protected_RSA_via_PEM);
                                  add_test("test_public_RSA_via_DER",test_public_RSA_via_DER);
                                  add_test("test_public_RSA_via_PEM",test_public_RSA_via_PEM);
                                  add_test("test_unprotected_RSA_via_legacy_PEM",
                                           test_unprotected_RSA_via_legacy_PEM);
                                  add_test("test_protected_RSA_via_legacy_PEM",
                                           test_protected_RSA_via_legacy_PEM);
                                  add_test("test_unprotected_RSA_PSS_via_DER",
                                           test_unprotected_RSA_PSS_via_DER);
                                  add_test("test_unprotected_RSA_PSS_via_PEM",
                                           test_unprotected_RSA_PSS_via_PEM);
                                  add_test("test_protected_RSA_PSS_via_DER",
                                           test_protected_RSA_PSS_via_DER);
                                  add_test("test_protected_RSA_PSS_via_PEM",
                                           test_protected_RSA_PSS_via_PEM);
                                  add_test("test_public_RSA_PSS_via_DER",test_public_RSA_PSS_via_DER
                                          );
                                  add_test("test_public_RSA_PSS_via_PEM",test_public_RSA_PSS_via_PEM
                                          );
                                  add_test("test_unprotected_RSA_via_MSBLOB",
                                           test_unprotected_RSA_via_MSBLOB);
                                  add_test("test_public_RSA_via_MSBLOB",test_public_RSA_via_MSBLOB);
                                  add_test("test_unprotected_RSA_via_PVK",
                                           test_unprotected_RSA_via_PVK);
                                  add_test("test_protected_RSA_via_PVK",test_protected_RSA_via_PVK);
                                  if (is_fips_lt_3_5 == 0) {
                                    add_test("test_unprotected_ML_DSA_44_via_DER",
                                             test_unprotected_ML_DSA_44_via_DER);
                                    add_test("test_unprotected_ML_DSA_44_via_PEM",
                                             test_unprotected_ML_DSA_44_via_PEM);
                                    add_test("test_protected_ML_DSA_44_via_DER",
                                             test_protected_ML_DSA_44_via_DER);
                                    add_test("test_protected_ML_DSA_44_via_PEM",
                                             test_protected_ML_DSA_44_via_PEM);
                                    add_test("test_public_ML_DSA_44_via_DER",
                                             test_public_ML_DSA_44_via_DER);
                                    add_test("test_public_ML_DSA_44_via_PEM",
                                             test_public_ML_DSA_44_via_PEM);
                                    add_test("test_unprotected_ML_DSA_65_via_DER",
                                             test_unprotected_ML_DSA_65_via_DER);
                                    add_test("test_unprotected_ML_DSA_65_via_PEM",
                                             test_unprotected_ML_DSA_65_via_PEM);
                                    add_test("test_protected_ML_DSA_65_via_DER",
                                             test_protected_ML_DSA_65_via_DER);
                                    add_test("test_protected_ML_DSA_65_via_PEM",
                                             test_protected_ML_DSA_65_via_PEM);
                                    add_test("test_public_ML_DSA_65_via_DER",
                                             test_public_ML_DSA_65_via_DER);
                                    add_test("test_public_ML_DSA_65_via_PEM",
                                             test_public_ML_DSA_65_via_PEM);
                                    add_test("test_unprotected_ML_DSA_87_via_DER",
                                             test_unprotected_ML_DSA_87_via_DER);
                                    add_test("test_unprotected_ML_DSA_87_via_PEM",
                                             test_unprotected_ML_DSA_87_via_PEM);
                                    add_test("test_protected_ML_DSA_87_via_DER",
                                             test_protected_ML_DSA_87_via_DER);
                                    add_test("test_protected_ML_DSA_87_via_PEM",
                                             test_protected_ML_DSA_87_via_PEM);
                                    add_test("test_public_ML_DSA_87_via_DER",
                                             test_public_ML_DSA_87_via_DER);
                                    add_test("test_public_ML_DSA_87_via_PEM",
                                             test_public_ML_DSA_87_via_PEM);
                                    if (is_fips_lt_3_5 == 0) {
                                      add_test("test_unprotected_SLH_DSA_SHA2_128s_via_DER",
                                               test_unprotected_SLH_DSA_SHA2_128s_via_DER);
                                      add_test("test_unprotected_SLH_DSA_SHA2_128s_via_PEM",
                                               test_unprotected_SLH_DSA_SHA2_128s_via_PEM);
                                      add_test("test_protected_SLH_DSA_SHA2_128s_via_DER",
                                               test_protected_SLH_DSA_SHA2_128s_via_DER);
                                      add_test("test_protected_SLH_DSA_SHA2_128s_via_PEM",
                                               test_protected_SLH_DSA_SHA2_128s_via_PEM);
                                      add_test("test_public_SLH_DSA_SHA2_128s_via_DER",
                                               test_public_SLH_DSA_SHA2_128s_via_DER);
                                      add_test("test_public_SLH_DSA_SHA2_128s_via_PEM",
                                               test_public_SLH_DSA_SHA2_128s_via_PEM);
                                      add_test("test_unprotected_SLH_DSA_SHA2_128f_via_DER",
                                               test_unprotected_SLH_DSA_SHA2_128f_via_DER);
                                      add_test("test_unprotected_SLH_DSA_SHA2_128f_via_PEM",
                                               test_unprotected_SLH_DSA_SHA2_128f_via_PEM);
                                      add_test("test_protected_SLH_DSA_SHA2_128f_via_DER",
                                               test_protected_SLH_DSA_SHA2_128f_via_DER);
                                      add_test("test_protected_SLH_DSA_SHA2_128f_via_PEM",
                                               test_protected_SLH_DSA_SHA2_128f_via_PEM);
                                      add_test("test_public_SLH_DSA_SHA2_128f_via_DER",
                                               test_public_SLH_DSA_SHA2_128f_via_DER);
                                      add_test("test_public_SLH_DSA_SHA2_128f_via_PEM",
                                               test_public_SLH_DSA_SHA2_128f_via_PEM);
                                      add_test("test_unprotected_SLH_DSA_SHA2_192s_via_DER",
                                               test_unprotected_SLH_DSA_SHA2_192s_via_DER);
                                      add_test("test_unprotected_SLH_DSA_SHA2_192s_via_PEM",
                                               test_unprotected_SLH_DSA_SHA2_192s_via_PEM);
                                      add_test("test_protected_SLH_DSA_SHA2_192s_via_DER",
                                               test_protected_SLH_DSA_SHA2_192s_via_DER);
                                      add_test("test_protected_SLH_DSA_SHA2_192s_via_PEM",
                                               test_protected_SLH_DSA_SHA2_192s_via_PEM);
                                      add_test("test_public_SLH_DSA_SHA2_192s_via_DER",
                                               test_public_SLH_DSA_SHA2_192s_via_DER);
                                      add_test("test_public_SLH_DSA_SHA2_192s_via_PEM",
                                               test_public_SLH_DSA_SHA2_192s_via_PEM);
                                      add_test("test_unprotected_SLH_DSA_SHA2_192f_via_DER",
                                               test_unprotected_SLH_DSA_SHA2_192f_via_DER);
                                      add_test("test_unprotected_SLH_DSA_SHA2_192f_via_PEM",
                                               test_unprotected_SLH_DSA_SHA2_192f_via_PEM);
                                      add_test("test_protected_SLH_DSA_SHA2_192f_via_DER",
                                               test_protected_SLH_DSA_SHA2_192f_via_DER);
                                      add_test("test_protected_SLH_DSA_SHA2_192f_via_PEM",
                                               test_protected_SLH_DSA_SHA2_192f_via_PEM);
                                      add_test("test_public_SLH_DSA_SHA2_192f_via_DER",
                                               test_public_SLH_DSA_SHA2_192f_via_DER);
                                      add_test("test_public_SLH_DSA_SHA2_192f_via_PEM",
                                               test_public_SLH_DSA_SHA2_192f_via_PEM);
                                      add_test("test_unprotected_SLH_DSA_SHA2_256s_via_DER",
                                               test_unprotected_SLH_DSA_SHA2_256s_via_DER);
                                      add_test("test_unprotected_SLH_DSA_SHA2_256s_via_PEM",
                                               test_unprotected_SLH_DSA_SHA2_256s_via_PEM);
                                      add_test("test_protected_SLH_DSA_SHA2_256s_via_DER",
                                               test_protected_SLH_DSA_SHA2_256s_via_DER);
                                      add_test("test_protected_SLH_DSA_SHA2_256s_via_PEM",
                                               test_protected_SLH_DSA_SHA2_256s_via_PEM);
                                      add_test("test_public_SLH_DSA_SHA2_256s_via_DER",
                                               test_public_SLH_DSA_SHA2_256s_via_DER);
                                      add_test("test_public_SLH_DSA_SHA2_256s_via_PEM",
                                               test_public_SLH_DSA_SHA2_256s_via_PEM);
                                      add_test("test_unprotected_SLH_DSA_SHA2_256f_via_DER",
                                               test_unprotected_SLH_DSA_SHA2_256f_via_DER);
                                      add_test("test_unprotected_SLH_DSA_SHA2_256f_via_PEM",
                                               test_unprotected_SLH_DSA_SHA2_256f_via_PEM);
                                      add_test("test_protected_SLH_DSA_SHA2_256f_via_DER",
                                               test_protected_SLH_DSA_SHA2_256f_via_DER);
                                      add_test("test_protected_SLH_DSA_SHA2_256f_via_PEM",
                                               test_protected_SLH_DSA_SHA2_256f_via_PEM);
                                      add_test("test_public_SLH_DSA_SHA2_256f_via_DER",
                                               test_public_SLH_DSA_SHA2_256f_via_DER);
                                      add_test("test_public_SLH_DSA_SHA2_256f_via_PEM",
                                               test_public_SLH_DSA_SHA2_256f_via_PEM);
                                      add_test("test_unprotected_SLH_DSA_SHAKE_128s_via_DER",
                                               test_unprotected_SLH_DSA_SHAKE_128s_via_DER);
                                      add_test("test_unprotected_SLH_DSA_SHAKE_128s_via_PEM",
                                               test_unprotected_SLH_DSA_SHAKE_128s_via_PEM);
                                      add_test("test_protected_SLH_DSA_SHAKE_128s_via_DER",
                                               test_protected_SLH_DSA_SHAKE_128s_via_DER);
                                      add_test("test_protected_SLH_DSA_SHAKE_128s_via_PEM",
                                               test_protected_SLH_DSA_SHAKE_128s_via_PEM);
                                      add_test("test_public_SLH_DSA_SHAKE_128s_via_DER",
                                               test_public_SLH_DSA_SHAKE_128s_via_DER);
                                      add_test("test_public_SLH_DSA_SHAKE_128s_via_PEM",
                                               test_public_SLH_DSA_SHAKE_128s_via_PEM);
                                      add_test("test_unprotected_SLH_DSA_SHAKE_128f_via_DER",
                                               test_unprotected_SLH_DSA_SHAKE_128f_via_DER);
                                      add_test("test_unprotected_SLH_DSA_SHAKE_128f_via_PEM",
                                               test_unprotected_SLH_DSA_SHAKE_128f_via_PEM);
                                      add_test("test_protected_SLH_DSA_SHAKE_128f_via_DER",
                                               test_protected_SLH_DSA_SHAKE_128f_via_DER);
                                      add_test("test_protected_SLH_DSA_SHAKE_128f_via_PEM",
                                               test_protected_SLH_DSA_SHAKE_128f_via_PEM);
                                      add_test("test_public_SLH_DSA_SHAKE_128f_via_DER",
                                               test_public_SLH_DSA_SHAKE_128f_via_DER);
                                      add_test("test_public_SLH_DSA_SHAKE_128f_via_PEM",
                                               test_public_SLH_DSA_SHAKE_128f_via_PEM);
                                      add_test("test_unprotected_SLH_DSA_SHAKE_192s_via_DER",
                                               test_unprotected_SLH_DSA_SHAKE_192s_via_DER);
                                      add_test("test_unprotected_SLH_DSA_SHAKE_192s_via_PEM",
                                               test_unprotected_SLH_DSA_SHAKE_192s_via_PEM);
                                      add_test("test_protected_SLH_DSA_SHAKE_192s_via_DER",
                                               test_protected_SLH_DSA_SHAKE_192s_via_DER);
                                      add_test("test_protected_SLH_DSA_SHAKE_192s_via_PEM",
                                               test_protected_SLH_DSA_SHAKE_192s_via_PEM);
                                      add_test("test_public_SLH_DSA_SHAKE_192s_via_DER",
                                               test_public_SLH_DSA_SHAKE_192s_via_DER);
                                      add_test("test_public_SLH_DSA_SHAKE_192s_via_PEM",
                                               test_public_SLH_DSA_SHAKE_192s_via_PEM);
                                      add_test("test_unprotected_SLH_DSA_SHAKE_192f_via_DER",
                                               test_unprotected_SLH_DSA_SHAKE_192f_via_DER);
                                      add_test("test_unprotected_SLH_DSA_SHAKE_192f_via_PEM",
                                               test_unprotected_SLH_DSA_SHAKE_192f_via_PEM);
                                      add_test("test_protected_SLH_DSA_SHAKE_192f_via_DER",
                                               test_protected_SLH_DSA_SHAKE_192f_via_DER);
                                      add_test("test_protected_SLH_DSA_SHAKE_192f_via_PEM",
                                               test_protected_SLH_DSA_SHAKE_192f_via_PEM);
                                      add_test("test_public_SLH_DSA_SHAKE_192f_via_DER",
                                               test_public_SLH_DSA_SHAKE_192f_via_DER);
                                      add_test("test_public_SLH_DSA_SHAKE_192f_via_PEM",
                                               test_public_SLH_DSA_SHAKE_192f_via_PEM);
                                      add_test("test_unprotected_SLH_DSA_SHAKE_256s_via_DER",
                                               test_unprotected_SLH_DSA_SHAKE_256s_via_DER);
                                      add_test("test_unprotected_SLH_DSA_SHAKE_256s_via_PEM",
                                               test_unprotected_SLH_DSA_SHAKE_256s_via_PEM);
                                      add_test("test_protected_SLH_DSA_SHAKE_256s_via_DER",
                                               test_protected_SLH_DSA_SHAKE_256s_via_DER);
                                      add_test("test_protected_SLH_DSA_SHAKE_256s_via_PEM",
                                               test_protected_SLH_DSA_SHAKE_256s_via_PEM);
                                      add_test("test_public_SLH_DSA_SHAKE_256s_via_DER",
                                               test_public_SLH_DSA_SHAKE_256s_via_DER);
                                      add_test("test_public_SLH_DSA_SHAKE_256s_via_PEM",
                                               test_public_SLH_DSA_SHAKE_256s_via_PEM);
                                      add_test("test_unprotected_SLH_DSA_SHAKE_256f_via_DER",
                                               test_unprotected_SLH_DSA_SHAKE_256f_via_DER);
                                      add_test("test_unprotected_SLH_DSA_SHAKE_256f_via_PEM",
                                               test_unprotected_SLH_DSA_SHAKE_256f_via_PEM);
                                      add_test("test_protected_SLH_DSA_SHAKE_256f_via_DER",
                                               test_protected_SLH_DSA_SHAKE_256f_via_DER);
                                      add_test("test_protected_SLH_DSA_SHAKE_256f_via_PEM",
                                               test_protected_SLH_DSA_SHAKE_256f_via_PEM);
                                      add_test("test_public_SLH_DSA_SHAKE_256f_via_DER",
                                               test_public_SLH_DSA_SHAKE_256f_via_DER);
                                      add_test("test_public_SLH_DSA_SHAKE_256f_via_PEM",
                                               test_public_SLH_DSA_SHAKE_256f_via_PEM);
                                    }
                                  }
                                }
                              }
                              uVar2 = 1;
                              goto LAB_00108003;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_00108001:
      uVar2 = 0;
LAB_00108003:
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return uVar2;
    }
    if (5 < iVar1) {
      if (5 < iVar1 - 500U) goto LAB_00108001;
      goto LAB_00107b40;
    }
    if (iVar1 < 1) goto LAB_00108001;
    switch(iVar1) {
    default:
      goto switchD_00107b71_caseD_1;
    case 2:
      uVar4 = opt_arg();
      goto LAB_00107b40;
    case 3:
      uVar3 = opt_arg();
      goto LAB_00107b40;
    case 4:
      uVar2 = opt_arg();
      iVar1 = opt_next();
      break;
    case 5:
      __s1 = (char *)opt_arg();
      goto LAB_00107b40;
    }
  } while( true );
switchD_00107b71_caseD_1:
  default_libctx = 0;
  goto LAB_00107b40;
}



void cleanup_tests(void)

{
  OSSL_PARAM_free(ec_explicit_prime_params_nc);
  OSSL_PARAM_free(ec_explicit_prime_params_explicit);
  OSSL_PARAM_BLD_free(bld_prime_nc);
  OSSL_PARAM_BLD_free(bld_prime);
  OSSL_PARAM_free(ec_explicit_tri_params_nc);
  OSSL_PARAM_free(ec_explicit_tri_params_explicit);
  OSSL_PARAM_BLD_free(bld_tri_nc);
  OSSL_PARAM_BLD_free(bld_tri);
  BN_CTX_free(bnctx);
  EVP_PKEY_free(template_DH);
  EVP_PKEY_free(key_DH);
  EVP_PKEY_free(template_DHX);
  EVP_PKEY_free(key_DHX);
  EVP_PKEY_free(template_DSA);
  EVP_PKEY_free(key_DSA);
  EVP_PKEY_free(template_EC);
  EVP_PKEY_free(key_EC);
  EVP_PKEY_free(template_ECExplicitPrimeNamedCurve);
  EVP_PKEY_free(key_ECExplicitPrimeNamedCurve);
  EVP_PKEY_free(template_ECExplicitPrime2G);
  EVP_PKEY_free(key_ECExplicitPrime2G);
  EVP_PKEY_free(template_ECExplicitTriNamedCurve);
  EVP_PKEY_free(key_ECExplicitTriNamedCurve);
  EVP_PKEY_free(template_ECExplicitTri2G);
  EVP_PKEY_free(key_ECExplicitTri2G);
  EVP_PKEY_free(key_SM2);
  EVP_PKEY_free(key_ED25519);
  EVP_PKEY_free(key_ED448);
  EVP_PKEY_free(key_X25519);
  EVP_PKEY_free(key_X448);
  if (is_fips_lt_3_5 == 0) {
    EVP_PKEY_free(key_ML_KEM_512);
    EVP_PKEY_free(key_ML_KEM_768);
    EVP_PKEY_free(key_ML_KEM_1024);
  }
  EVP_PKEY_free(key_RSA);
  EVP_PKEY_free(key_RSA_PSS);
  if (is_fips_lt_3_5 == 0) {
    EVP_PKEY_free(key_ML_DSA_44);
    EVP_PKEY_free(key_ML_DSA_65);
    EVP_PKEY_free(key_ML_DSA_87);
    if (is_fips_lt_3_5 == 0) {
      EVP_PKEY_free(key_SLH_DSA_SHA2_128s);
      EVP_PKEY_free(key_SLH_DSA_SHA2_128f);
      EVP_PKEY_free(key_SLH_DSA_SHA2_192s);
      EVP_PKEY_free(key_SLH_DSA_SHA2_192f);
      EVP_PKEY_free(key_SLH_DSA_SHA2_256s);
      EVP_PKEY_free(key_SLH_DSA_SHA2_256f);
      EVP_PKEY_free(key_SLH_DSA_SHAKE_128s);
      EVP_PKEY_free(key_SLH_DSA_SHAKE_128f);
      EVP_PKEY_free(key_SLH_DSA_SHAKE_192s);
      EVP_PKEY_free(key_SLH_DSA_SHAKE_192f);
      EVP_PKEY_free(key_SLH_DSA_SHAKE_256s);
      EVP_PKEY_free(key_SLH_DSA_SHAKE_256f);
    }
  }
  OSSL_PROVIDER_unload(nullprov);
  OSSL_PROVIDER_unload(deflprov);
  OSSL_PROVIDER_unload(keyprov);
  OSSL_LIB_CTX_free(testctx);
  OSSL_LIB_CTX_free(keyctx);
  return;
}


