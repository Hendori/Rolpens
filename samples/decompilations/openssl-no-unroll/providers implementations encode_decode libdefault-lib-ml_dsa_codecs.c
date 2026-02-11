
long ossl_ml_dsa_d2i_PUBKEY
               (long *param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  
  uVar2 = ossl_prov_ctx_get0_libctx(param_4);
  puVar3 = (undefined8 *)ossl_ml_dsa_params_get(param_3);
  if (puVar3 != (undefined8 *)0x0) {
    if (param_3 == 0x5b2) {
      puVar5 = ml_dsa_65_spkifmt;
    }
    else if (param_3 == 0x5b3) {
      puVar5 = ml_dsa_87_spkifmt;
    }
    else {
      puVar5 = (undefined1 *)&ml_dsa_44_spkifmt;
      if (param_3 != 0x5b1) {
        return 0;
      }
    }
    if ((((long)param_2 == puVar3[9] + 0x16) &&
        (*param_1 == *(long *)puVar5 && param_1[1] == *(long *)((long)puVar5 + 8))) &&
       (*(long *)((long)param_1 + 0xe) == *(long *)((long)puVar5 + 0xe))) {
      lVar4 = ossl_ml_dsa_key_new(uVar2,param_5,param_3);
      if (lVar4 != 0) {
        iVar1 = ossl_ml_dsa_pk_decode(lVar4,(long)param_1 + 0x16,(long)(param_2 + -0x16));
        if (iVar1 == 0) {
          ERR_new();
          ERR_set_debug("providers/implementations/encode_decode/ml_dsa_codecs.c",0x80,
                        "ossl_ml_dsa_d2i_PUBKEY");
          ERR_set_error(0x39,0x8d,"errror parsing %s public key from input SPKI",*puVar3);
          ossl_ml_dsa_key_free(lVar4);
          return 0;
        }
        return lVar4;
      }
    }
  }
  return 0;
}



long ossl_ml_dsa_d2i_PKCS8
               (uchar *param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  undefined8 *puVar6;
  PKCS8_PRIV_KEY_INFO *p8;
  undefined8 uVar7;
  long *ptr;
  long *plVar8;
  long lVar9;
  long lVar10;
  uint *puVar11;
  long lVar12;
  uint *puVar13;
  undefined1 *puVar14;
  long in_FS_OFFSET;
  uchar *local_60;
  int local_58;
  int local_54;
  uint *local_50;
  X509_ALGOR *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (X509_ALGOR *)0x0;
  local_60 = param_1;
  puVar6 = (undefined8 *)ossl_ml_dsa_params_get();
  if (puVar6 == (undefined8 *)0x0) goto LAB_00100228;
  if (param_3 == 0x5b2) {
    puVar14 = (undefined1 *)0x1010b0;
  }
  else if (param_3 == 0x5b3) {
    puVar14 = (undefined1 *)0x1010c0;
  }
  else {
    puVar14 = codecs;
    if (param_3 != 0x5b1) goto LAB_00100228;
  }
  p8 = d2i_PKCS8_PRIV_KEY_INFO((PKCS8_PRIV_KEY_INFO **)0x0,&local_60,(long)param_2);
  if (p8 == (PKCS8_PRIV_KEY_INFO *)0x0) goto LAB_00100228;
  iVar5 = PKCS8_pkey_get0((ASN1_OBJECT **)0x0,(uchar **)&local_50,&local_58,&local_48,p8);
  if ((iVar5 == 0) || (iVar5 = OBJ_obj2nid(local_48->algorithm), iVar5 != param_3)) {
LAB_001001f9:
    lVar9 = 0;
    ptr = (long *)0x0;
  }
  else {
    uVar7 = ossl_prov_ctx_get_param(param_4,"ml-dsa.input_formats",0);
    ptr = (long *)ossl_ml_common_pkcs8_fmt_order(*puVar6,*(undefined8 *)(puVar14 + 8),"input",uVar7)
    ;
    if (ptr == (long *)0x0) goto LAB_001001f9;
    X509_ALGOR_get0((ASN1_OBJECT **)0x0,&local_54,(void **)0x0,local_48);
    if (local_54 == -1) {
      if (local_58 < 4) {
LAB_001003f0:
        lVar9 = 0;
      }
      else {
        uVar2 = *local_50;
        lVar3 = *ptr;
        plVar8 = ptr;
        while (lVar3 != 0) {
          if (*(long *)(lVar3 + 8) == (long)local_58) {
            iVar5 = *(int *)(lVar3 + 0x10);
            puVar11 = local_50;
            if (iVar5 != 4) {
              if ((uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18)
                  >> ((char)iVar5 * '\b' & 0x1fU) != *(uint *)(lVar3 + 0x14)) goto LAB_0010031a;
              puVar11 = (uint *)((long)local_50 + (4 - (long)iVar5));
            }
            uVar4 = *(ulong *)(lVar3 + 0x28);
            if ((uVar4 & 0xffffffffffffffdf) != 0) break;
            lVar9 = *(long *)(lVar3 + 0x40);
            if (lVar9 == 0) {
              lVar10 = *(long *)(lVar3 + 0x50);
              if (lVar10 != 0) {
                if (puVar6[9] == lVar10) {
                  if (uVar4 != 0) goto LAB_0010058c;
                  goto LAB_0010055b;
                }
                break;
              }
              if (uVar4 != 0) {
LAB_0010058c:
                puVar13 = (uint *)(*(long *)(lVar3 + 0x20) + (long)local_50);
                if ((uint *)((long)puVar11 + 2) == puVar13) {
                  uVar2 = *puVar11;
                  puVar11 = (uint *)((long)puVar11 + 2);
                  if (*(ushort *)(lVar3 + 0x18) != (ushort)((ushort)uVar2 << 8 | (ushort)uVar2 >> 8)
                     ) goto LAB_001003f0;
                }
                else if (puVar13 != puVar11) goto LAB_00100377;
                puVar11 = puVar11 + 8;
                if (lVar9 != 0) goto LAB_00100523;
                goto LAB_00100552;
              }
            }
            else {
              if ((lVar9 != puVar6[8]) ||
                 ((lVar10 = *(long *)(lVar3 + 0x50), lVar10 != 0 && (lVar10 != puVar6[9])))) break;
              if (uVar4 != 0) goto LAB_0010058c;
LAB_00100523:
              puVar13 = (uint *)(*(long *)(lVar3 + 0x38) + (long)local_50);
              if (puVar11 + 1 == puVar13) {
                uVar2 = *puVar11;
                puVar11 = puVar11 + 1;
                if (*(uint *)(lVar3 + 0x30) !=
                    (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18
                    )) goto LAB_001003f0;
              }
              else if (puVar13 != puVar11) goto LAB_00100377;
              puVar11 = (uint *)((long)puVar11 + puVar6[8]);
LAB_00100552:
              if (lVar10 != 0) {
LAB_0010055b:
                if (puVar11 != (uint *)(*(long *)(lVar3 + 0x48) + (long)local_50))
                goto LAB_00100377;
                puVar11 = (uint *)((long)puVar11 + puVar6[9]);
              }
            }
            if ((puVar11 != (uint *)((long)local_50 + (long)local_58)) ||
               (lVar9 = ossl_prov_ml_dsa_new(param_4,param_5,param_3), lVar9 == 0))
            goto LAB_00100377;
            lVar10 = 0;
            if (*(long *)(lVar3 + 0x28) != 0) {
              lVar10 = *(long *)(lVar3 + 0x20) + (long)local_50;
            }
            lVar12 = 0;
            if (*(long *)(lVar3 + 0x40) != 0) {
              lVar12 = *(long *)(lVar3 + 0x38) + (long)local_50;
            }
            iVar5 = ossl_ml_dsa_set_prekey(lVar9,0,0,lVar10,0x20,lVar12,puVar6[8],lVar9);
            if (iVar5 == 0) goto LAB_00100205;
            CRYPTO_free(ptr);
            PKCS8_PRIV_KEY_INFO_free(p8);
            goto LAB_0010022a;
          }
LAB_0010031a:
          plVar1 = plVar8 + 2;
          plVar8 = plVar8 + 2;
          lVar3 = *plVar1;
        }
        ERR_new();
        ERR_set_debug("providers/implementations/encode_decode/ml_dsa_codecs.c",0xcf,
                      "ossl_ml_dsa_d2i_PKCS8");
        ERR_set_error(0x39,0xf5,"no matching enabled %s private key input formats",*puVar6);
LAB_00100377:
        lVar9 = 0;
      }
    }
    else {
      lVar9 = 0;
      ERR_new();
      ERR_set_debug("providers/implementations/encode_decode/ml_dsa_codecs.c",0xb8,
                    "ossl_ml_dsa_d2i_PKCS8");
      ERR_set_error(0x39,0xf9,"unexpected parameters with a PKCS#8 %s private key",*puVar6);
    }
  }
LAB_00100205:
  CRYPTO_free(ptr);
  PKCS8_PRIV_KEY_INFO_free(p8);
  ossl_ml_dsa_key_free(lVar9);
LAB_00100228:
  lVar9 = 0;
LAB_0010022a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ossl_ml_dsa_i2d_pubkey(undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = (undefined8 *)ossl_ml_dsa_key_params();
  lVar2 = ossl_ml_dsa_key_get_pub(param_1);
  if (lVar2 == 0) {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/ml_dsa_codecs.c",0x112,
                  "ossl_ml_dsa_i2d_pubkey");
    ERR_set_error(0x39,0xdc,"no %s public key data available",*puVar1);
  }
  else {
    if (param_2 == (long *)0x0) {
      return puVar1[9];
    }
    lVar2 = CRYPTO_memdup(lVar2,puVar1[9],"providers/implementations/encode_decode/ml_dsa_codecs.c",
                          0x117);
    *param_2 = lVar2;
    if (lVar2 != 0) {
      return puVar1[9];
    }
  }
  return 0;
}



int ossl_ml_dsa_i2d_prvkey(undefined8 param_1,uint *param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  size_t __n;
  undefined8 *puVar3;
  undefined8 *puVar4;
  void *pvVar5;
  undefined8 uVar6;
  long *ptr;
  long *plVar7;
  uint *puVar8;
  uint *puVar9;
  long lVar10;
  int iVar11;
  uint *__dest;
  undefined1 *puVar12;
  uint *local_70;
  
  puVar3 = (undefined8 *)ossl_ml_dsa_key_params();
  puVar4 = (undefined8 *)ossl_ml_dsa_key_get_seed(param_1);
  pvVar5 = (void *)ossl_ml_dsa_key_get_priv(param_1);
  iVar11 = *(int *)(puVar3 + 1);
  if (iVar11 == 0x5b2) {
    puVar12 = (undefined1 *)0x1010b0;
  }
  else if (iVar11 == 0x5b3) {
    puVar12 = (undefined1 *)0x1010c0;
  }
  else {
    puVar12 = codecs;
    if (iVar11 != 0x5b1) {
      return 0;
    }
  }
  if (pvVar5 == (void *)0x0) {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/ml_dsa_codecs.c",0x130,
                  "ossl_ml_dsa_i2d_prvkey");
    ERR_set_error(0x39,0xdd,"no %s private key data available",*puVar3);
    return 0;
  }
  uVar6 = ossl_prov_ctx_get_param(param_3,"ml-dsa.output_formats",0);
  ptr = (long *)ossl_ml_common_pkcs8_fmt_order(*puVar3,*(undefined8 *)(puVar12 + 8),"output",uVar6);
  if (ptr == (long *)0x0) {
    return 0;
  }
  lVar10 = *ptr;
  if (lVar10 == 0) {
LAB_00100770:
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/ml_dsa_codecs.c",0x146,
                  "ossl_ml_dsa_i2d_prvkey");
    ERR_set_error(0x39,0xf5,"no matching enabled %s private key output formats",*puVar3);
    CRYPTO_free(ptr);
  }
  else {
    plVar7 = ptr;
    if (puVar4 == (undefined8 *)0x0) {
      do {
        if (*(long *)(lVar10 + 0x28) == 0) goto LAB_0010074c;
        lVar10 = plVar7[2];
        plVar7 = plVar7 + 2;
      } while (lVar10 != 0);
      goto LAB_00100770;
    }
LAB_0010074c:
    if ((((*(ulong *)(lVar10 + 0x28) & 0xffffffffffffffdf) != 0) ||
        ((*(long *)(lVar10 + 0x40) != 0 && (*(long *)(lVar10 + 0x40) != puVar3[8])))) ||
       ((*(long *)(lVar10 + 0x50) != 0 && (*(long *)(lVar10 + 0x50) != puVar3[9]))))
    goto LAB_00100770;
    iVar11 = (int)*(undefined8 *)(lVar10 + 8);
    local_70 = param_2;
    if (param_2 == (uint *)0x0) {
LAB_00100990:
      CRYPTO_free(ptr);
      if (iVar11 != 0) {
        return iVar11;
      }
      goto LAB_001007c6;
    }
    local_70 = (uint *)CRYPTO_malloc(iVar11,
                                     "providers/implementations/encode_decode/ml_dsa_codecs.c",0x152
                                    );
    if (local_70 != (uint *)0x0) {
      iVar1 = *(int *)(lVar10 + 0x10);
      if (iVar1 != 2) {
        __dest = local_70;
        if (iVar1 == 4) goto LAB_001008d8;
        if (iVar1 == 0) {
          uVar2 = *(uint *)(lVar10 + 0x14);
          *local_70 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                      uVar2 << 0x18;
          __dest = local_70 + 1;
          goto LAB_001008d8;
        }
        ERR_new();
        uVar6 = 0x15f;
LAB_0010091b:
        ERR_set_debug("providers/implementations/encode_decode/ml_dsa_codecs.c",uVar6,
                      "ossl_ml_dsa_i2d_prvkey");
        ERR_set_error(0x39,0xc0103,"error encoding %s private key",*puVar3);
        CRYPTO_free(ptr);
        goto LAB_001007c6;
      }
      *(ushort *)local_70 = *(ushort *)(lVar10 + 0x14) << 8 | *(ushort *)(lVar10 + 0x14) >> 8;
      __dest = (uint *)((long)local_70 + 2);
LAB_001008d8:
      if (*(long *)(lVar10 + 0x28) != 0) {
        puVar8 = (uint *)(*(long *)(lVar10 + 0x20) + (long)local_70);
        puVar9 = __dest;
        if ((uint *)((long)__dest + 2) == puVar8) {
          *(ushort *)__dest = *(ushort *)(lVar10 + 0x18) << 8 | *(ushort *)(lVar10 + 0x18) >> 8;
          puVar8 = (uint *)(*(long *)(lVar10 + 0x20) + (long)local_70);
          puVar9 = (uint *)((long)__dest + 2);
        }
        if (puVar9 != puVar8) {
          ERR_new();
          uVar6 = 0x16c;
          goto LAB_0010091b;
        }
        uVar6 = puVar4[1];
        __dest = puVar9 + 8;
        *(undefined8 *)puVar9 = *puVar4;
        *(undefined8 *)(puVar9 + 2) = uVar6;
        uVar6 = puVar4[3];
        *(undefined8 *)(puVar9 + 4) = puVar4[2];
        *(undefined8 *)(puVar9 + 6) = uVar6;
      }
      if (*(long *)(lVar10 + 0x40) != 0) {
        puVar9 = (uint *)(*(long *)(lVar10 + 0x38) + (long)local_70);
        if (__dest + 1 == puVar9) {
          uVar2 = *(uint *)(lVar10 + 0x30);
          *__dest = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
          puVar9 = (uint *)(*(long *)(lVar10 + 0x38) + (long)local_70);
          __dest = __dest + 1;
        }
        if (__dest != puVar9) {
          ERR_new();
          uVar6 = 0x177;
          goto LAB_0010091b;
        }
        pvVar5 = memcpy(__dest,pvVar5,puVar3[8]);
        __dest = (uint *)(puVar3[8] + (long)pvVar5);
      }
      if (*(long *)(lVar10 + 0x50) != 0) {
        if (__dest != (uint *)(*(long *)(lVar10 + 0x48) + (long)local_70)) {
          ERR_new();
          uVar6 = 0x182;
          goto LAB_0010091b;
        }
        __n = puVar3[9];
        pvVar5 = (void *)ossl_ml_dsa_key_get_pub(param_1);
        pvVar5 = memcpy(__dest,pvVar5,__n);
        __dest = (uint *)(puVar3[9] + (long)pvVar5);
      }
      if (__dest != (uint *)((long)iVar11 + (long)local_70)) {
        CRYPTO_free(ptr);
        goto LAB_001007c6;
      }
      *(uint **)param_2 = local_70;
      goto LAB_00100990;
    }
    CRYPTO_free(ptr);
  }
  local_70 = (uint *)0x0;
LAB_001007c6:
  CRYPTO_free(local_70);
  return 0;
}



bool ossl_ml_dsa_key_to_text(BIO *param_1,long param_2,ulong param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((param_1 == (BIO *)0x0) || (param_2 == 0)) {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/ml_dsa_codecs.c",0x19c,
                  "ossl_ml_dsa_key_to_text");
    ERR_set_error(0x39,0xc0102,0);
    return false;
  }
  puVar2 = (undefined8 *)ossl_ml_dsa_key_params(param_2);
  lVar3 = ossl_ml_dsa_key_get_pub(param_2);
  lVar4 = ossl_ml_dsa_key_get_priv(param_2);
  lVar5 = ossl_ml_dsa_key_get_seed(param_2);
  if (lVar3 != 0) {
    if ((param_3 & 1) == 0) {
      if (((param_3 & 2) == 0) ||
         (iVar1 = BIO_printf(param_1,"%s Public-Key:\n",*puVar2), 0 < iVar1)) {
LAB_00100c6b:
        iVar1 = ossl_bio_print_labeled_buf(param_1,&_LC16,lVar3,puVar2[9]);
        return iVar1 != 0;
      }
    }
    else {
      if (lVar4 == 0) {
        ERR_new();
        uVar6 = 0x1ad;
        goto LAB_00100d11;
      }
      iVar1 = BIO_printf(param_1,"%s Private-Key:\n",*puVar2);
      if ((0 < iVar1) &&
         (((lVar5 == 0 ||
           (iVar1 = ossl_bio_print_labeled_buf(param_1,"seed:",lVar5,0x20), iVar1 != 0)) &&
          (iVar1 = ossl_bio_print_labeled_buf(param_1,"priv:",lVar4,puVar2[8]), iVar1 != 0))))
      goto LAB_00100c6b;
    }
    return false;
  }
  ERR_new();
  uVar6 = 0x1a6;
LAB_00100d11:
  ERR_set_debug("providers/implementations/encode_decode/ml_dsa_codecs.c",uVar6,
                "ossl_ml_dsa_key_to_text");
  ERR_set_error(0x39,0x80,"no %s key material available",*puVar2);
  return false;
}


