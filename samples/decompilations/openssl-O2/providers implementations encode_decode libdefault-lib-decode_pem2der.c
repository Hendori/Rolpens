
undefined1 * pem2der_settable_ctx_params(void)

{
  return settables_1;
}



undefined4
pem2der_pass_helper(undefined8 param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined4 local_18 [2];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_4 == (undefined8 *)0x0) || ((code *)*param_4 == (code *)0x0)) ||
     (iVar1 = (*(code *)*param_4)(param_1,(long)param_2,local_18,0,param_4[1]), iVar1 == 0)) {
    local_18[0] = 0xffffffff;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18[0];
}



ulong pem2der_set_ctx_params(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = OSSL_PARAM_locate_const(param_2,"properties");
  local_28 = param_1 + 0x28;
  if (lVar2 != 0) {
    uVar3 = OSSL_PARAM_get_utf8_string(lVar2,&local_28,0x100);
    if ((int)uVar3 == 0) goto LAB_001000f4;
  }
  lVar2 = OSSL_PARAM_locate_const(param_2,"data-structure");
  local_28 = param_1 + 8;
  if (lVar2 == 0) {
    uVar3 = 1;
  }
  else {
    iVar1 = OSSL_PARAM_get_utf8_string(lVar2,&local_28,0x20);
    uVar3 = (ulong)(iVar1 != 0);
  }
LAB_001000f4:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void pem2der_freectx(void *param_1)

{
  CRYPTO_free(param_1);
  return;
}



void pem2der_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x128,"providers/implementations/encode_decode/decode_pem2der.c",0x3f);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
  }
  return;
}



undefined4
pem2der_decode(undefined8 *param_1,undefined8 param_2,uint param_3,code *param_4,undefined8 param_5,
              undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  BIO *bp;
  size_t sVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined **ppuVar8;
  ulong uVar9;
  EVP_CIPHER_INFO *pEVar10;
  EVP_CIPHER_INFO *pEVar11;
  long in_FS_OFFSET;
  EVP_CIPHER *local_178;
  EVP_CIPHER *pEStack_170;
  EVP_CIPHER *local_168;
  EVP_CIPHER *pEStack_160;
  EVP_CIPHER *local_158;
  undefined4 local_13c;
  char *local_138;
  char *local_130;
  uchar *local_128;
  long local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined1 local_108 [16];
  EVP_CIPHER *local_f8;
  EVP_CIPHER *pEStack_f0;
  EVP_CIPHER *local_e8;
  EVP_CIPHER_INFO local_e0 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_13c = 0;
  local_138 = (char *)0x0;
  local_130 = (char *)0x0;
  local_128 = (uchar *)0x0;
  local_120 = 0;
  bp = (BIO *)ossl_bio_new_from_core_bio(*param_1);
  if (bp != (BIO *)0x0) {
    iVar3 = PEM_read_bio(bp,&local_138,&local_130,&local_128,&local_120);
    BIO_free(bp);
    pcVar7 = local_130;
    if (0 < iVar3) {
      sVar5 = strlen(local_130);
      if (sVar5 < 0xb) {
LAB_0010024c:
        pcVar7 = local_138;
        uVar9 = 0;
        ppuVar8 = &pem_name_map_0;
        do {
          iVar3 = strcmp(pcVar7,*ppuVar8);
          if (iVar3 == 0) {
            lVar1 = (&DAT_00100830)[uVar9 * 4];
            puVar2 = (&PTR__LC3_00100838)[uVar9 * 4];
            if (uVar9 < 2) {
              if ((param_3 & 1) == 0) {
                iVar3 = OPENSSL_strcasecmp(param_1 + 1,"EncryptedPrivateKeyInfo");
                if ((iVar3 != 0) &&
                   (iVar3 = OPENSSL_strcasecmp(param_1 + 1,"PrivateKeyInfo"), iVar3 != 0))
                goto LAB_0010051d;
              }
              uVar6 = ossl_prov_ctx_get0_libctx(*param_1);
              uVar4 = ossl_epki2pki_der_decode
                                (local_128,local_120,param_3,param_4,param_5,param_6,param_7,uVar6,
                                 param_1 + 5);
              pcVar7 = local_138;
              goto LAB_00100486;
            }
            if (uVar9 == 2) {
LAB_0010051d:
              if (((param_3 & 2) != 0) ||
                 (iVar3 = OPENSSL_strcasecmp(param_1 + 1,"SubjectPublicKeyInfo"), iVar3 == 0)) {
                uVar6 = ossl_prov_ctx_get0_libctx(*param_1);
                uVar4 = ossl_spki2typespki_der_decode
                                  (local_128,local_120,param_3,param_4,param_5,param_6,param_7,uVar6
                                   ,param_1 + 5);
                pcVar7 = local_138;
                goto LAB_00100486;
              }
            }
            local_13c = (&DAT_00100828)[uVar9 * 8];
            if (lVar1 == 0) {
              pEVar10 = (EVP_CIPHER_INFO *)local_108;
            }
            else {
              pEVar10 = local_e0;
              OSSL_PARAM_construct_utf8_string(&local_178,"data-type",lVar1,0);
              local_e8 = local_158;
              local_108._0_8_ = local_178;
              local_108._8_8_ = pEStack_170;
              local_f8 = local_168;
              pEStack_f0 = pEStack_160;
            }
            pEVar11 = pEVar10;
            if (puVar2 != (undefined *)0x0) {
              OSSL_PARAM_construct_utf8_string(&local_178,"data-structure",puVar2,0);
              pEVar11 = (EVP_CIPHER_INFO *)(pEVar10[1].iv + 8);
              pEVar10->cipher = local_178;
              *(EVP_CIPHER **)pEVar10->iv = pEStack_170;
              *(EVP_CIPHER **)(pEVar10->iv + 8) = local_168;
              pEVar10[1].cipher = pEStack_160;
              *(EVP_CIPHER **)pEVar10[1].iv = local_158;
            }
            OSSL_PARAM_construct_octet_string(&local_178,&_LC7,local_128,local_120);
            pEVar11->cipher = local_178;
            *(EVP_CIPHER **)pEVar11->iv = pEStack_170;
            *(EVP_CIPHER **)(pEVar11->iv + 8) = local_168;
            pEVar11[1].cipher = pEStack_160;
            *(EVP_CIPHER **)pEVar11[1].iv = local_158;
            OSSL_PARAM_construct_int(&local_178,&_LC8,&local_13c);
            *(EVP_CIPHER **)(pEVar11[1].iv + 8) = local_178;
            pEVar11[2].cipher = pEStack_170;
            *(EVP_CIPHER **)pEVar11[2].iv = local_168;
            *(EVP_CIPHER **)(pEVar11[2].iv + 8) = pEStack_160;
            pEVar11[3].cipher = local_158;
            OSSL_PARAM_construct_end(&local_178);
            *(EVP_CIPHER **)pEVar11[3].iv = local_178;
            *(EVP_CIPHER **)(pEVar11[3].iv + 8) = pEStack_170;
            pEVar11[4].cipher = local_168;
            *(EVP_CIPHER **)pEVar11[4].iv = pEStack_160;
            *(EVP_CIPHER **)(pEVar11[4].iv + 8) = local_158;
            uVar4 = (*param_4)(local_108,param_5);
            pcVar7 = local_138;
            goto LAB_00100486;
          }
          uVar9 = uVar9 + 1;
          ppuVar8 = ppuVar8 + 4;
        } while (uVar9 != 0x11);
        uVar4 = 1;
      }
      else {
        local_110 = param_7;
        local_118 = param_6;
        iVar3 = PEM_get_EVP_CIPHER_INFO(pcVar7,(EVP_CIPHER_INFO *)local_108);
        if ((iVar3 != 0) &&
           (iVar3 = PEM_do_header((EVP_CIPHER_INFO *)local_108,local_128,&local_120,
                                  pem2der_pass_helper,&local_118), iVar3 != 0)) goto LAB_0010024c;
        uVar4 = 0;
        pcVar7 = local_138;
      }
LAB_00100486:
      CRYPTO_free(pcVar7);
      CRYPTO_free(local_130);
      CRYPTO_free(local_128);
      goto LAB_0010044e;
    }
  }
  uVar4 = 1;
LAB_0010044e:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}


