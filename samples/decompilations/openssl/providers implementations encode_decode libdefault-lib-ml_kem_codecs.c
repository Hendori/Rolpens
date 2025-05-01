
long ossl_ml_kem_d2i_PUBKEY
               (long *param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  
  uVar2 = ossl_prov_ctx_get0_libctx(param_4);
  puVar3 = (undefined8 *)ossl_ml_kem_get_vinfo(param_3);
  if (puVar3 != (undefined8 *)0x0) {
    if (param_3 == 0x5af) {
      puVar5 = ml_kem_768_spkifmt;
    }
    else if (param_3 == 0x5b0) {
      puVar5 = ml_kem_1024_spkifmt;
    }
    else {
      puVar5 = (undefined1 *)&ml_kem_512_spkifmt;
      if (param_3 != 0x5ae) {
        return 0;
      }
    }
    if ((((long)param_2 == puVar3[3] + 0x16) &&
        (*param_1 == *(long *)puVar5 && param_1[1] == *(long *)((long)puVar5 + 8))) &&
       (*(long *)((long)param_1 + 0xe) == *(long *)((long)puVar5 + 0xe))) {
      lVar4 = ossl_ml_kem_key_new(uVar2,param_5,param_3);
      if (lVar4 != 0) {
        iVar1 = ossl_ml_kem_parse_public_key((long)param_1 + 0x16,(long)(param_2 + -0x16),lVar4);
        if (iVar1 == 0) {
          ERR_new();
          ERR_set_debug("providers/implementations/encode_decode/ml_kem_codecs.c",0x7f,
                        "ossl_ml_kem_d2i_PUBKEY");
          ERR_set_error(0x39,0x8d,"errror parsing %s public key from input SPKI",*puVar3);
          ossl_ml_kem_key_free(lVar4);
          return 0;
        }
        return lVar4;
      }
    }
  }
  return 0;
}



long ossl_ml_kem_d2i_PKCS8
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
  void *__dest;
  uint *puVar11;
  uint *puVar12;
  undefined1 *puVar13;
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
  puVar6 = (undefined8 *)ossl_ml_kem_get_vinfo();
  if (puVar6 == (undefined8 *)0x0) goto LAB_00100228;
  if (param_3 == 0x5af) {
    puVar13 = (undefined1 *)0x101330;
  }
  else if (param_3 == 0x5b0) {
    puVar13 = (undefined1 *)0x101340;
  }
  else {
    puVar13 = codecs;
    if (param_3 != 0x5ae) goto LAB_00100228;
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
    uVar7 = ossl_prov_ctx_get_param(param_4,"ml-kem.input_formats",0);
    ptr = (long *)ossl_ml_common_pkcs8_fmt_order(*puVar6,*(undefined8 *)(puVar13 + 8),"input",uVar7)
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
            if ((uVar4 & 0xffffffffffffffbf) != 0) break;
            lVar9 = *(long *)(lVar3 + 0x40);
            if (lVar9 == 0) {
              lVar10 = *(long *)(lVar3 + 0x50);
              if (lVar10 != 0) {
                if (puVar6[3] == lVar10) {
                  if (uVar4 != 0) goto LAB_0010054c;
                  goto LAB_0010051b;
                }
                break;
              }
              if (uVar4 != 0) {
LAB_0010054c:
                puVar12 = (uint *)(*(long *)(lVar3 + 0x20) + (long)local_50);
                if ((uint *)((long)puVar11 + 2) == puVar12) {
                  uVar2 = *puVar11;
                  puVar11 = (uint *)((long)puVar11 + 2);
                  if (*(ushort *)(lVar3 + 0x18) != (ushort)((ushort)uVar2 << 8 | (ushort)uVar2 >> 8)
                     ) goto LAB_001003f0;
                }
                else if (puVar12 != puVar11) goto LAB_00100377;
                puVar11 = puVar11 + 0x10;
                if (lVar9 != 0) goto LAB_001004e3;
                goto LAB_00100512;
              }
            }
            else {
              if ((lVar9 != puVar6[1]) ||
                 ((lVar10 = *(long *)(lVar3 + 0x50), lVar10 != 0 && (lVar10 != puVar6[3])))) break;
              if (uVar4 != 0) goto LAB_0010054c;
LAB_001004e3:
              puVar12 = (uint *)(*(long *)(lVar3 + 0x38) + (long)local_50);
              if (puVar11 + 1 == puVar12) {
                uVar2 = *puVar11;
                puVar11 = puVar11 + 1;
                if (*(uint *)(lVar3 + 0x30) !=
                    (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18
                    )) goto LAB_001003f0;
              }
              else if (puVar12 != puVar11) goto LAB_00100377;
              puVar11 = (uint *)((long)puVar11 + puVar6[1]);
LAB_00100512:
              if (lVar10 != 0) {
LAB_0010051b:
                if (puVar11 != (uint *)(*(long *)(lVar3 + 0x48) + (long)local_50))
                goto LAB_00100377;
                puVar11 = (uint *)((long)puVar11 + puVar6[3]);
              }
            }
            if ((puVar11 != (uint *)((long)local_50 + (long)local_58)) ||
               (lVar9 = ossl_prov_ml_kem_new(param_4,param_5,param_3), lVar9 == 0))
            goto LAB_00100377;
            if ((*(long *)(lVar3 + 0x28) != 0) &&
               (lVar10 = ossl_ml_kem_set_seed(*(long *)(lVar3 + 0x20) + (long)local_50,0x40,lVar9),
               lVar10 == 0)) {
              ERR_new();
              ERR_set_debug("providers/implementations/encode_decode/ml_kem_codecs.c",0xfa,
                            "ossl_ml_kem_d2i_PKCS8");
              ERR_set_error(0x3c,0xc0103,"error storing %s private key seed",*puVar6);
              goto LAB_00100205;
            }
            if (*(long *)(lVar3 + 0x40) != 0) {
              __dest = CRYPTO_malloc((int)*(long *)(lVar3 + 0x40),
                                     "providers/implementations/encode_decode/ml_kem_codecs.c",0x101
                                    );
              *(void **)(lVar9 + 0xb0) = __dest;
              if (__dest == (void *)0x0) {
                ERR_new();
                ERR_set_debug("providers/implementations/encode_decode/ml_kem_codecs.c",0x102,
                              "ossl_ml_kem_d2i_PKCS8");
                ERR_set_error(0x39,0x9e,"error parsing %s private key",*puVar6);
                goto LAB_00100205;
              }
              memcpy(__dest,(void *)(*(long *)(lVar3 + 0x38) + (long)local_50),
                     *(size_t *)(lVar3 + 0x40));
            }
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
        ERR_set_debug("providers/implementations/encode_decode/ml_kem_codecs.c",0xcc,
                      "ossl_ml_kem_d2i_PKCS8");
        ERR_set_error(0x39,0xf6,"no matching enabled %s private key input formats",*puVar6);
LAB_00100377:
        lVar9 = 0;
      }
    }
    else {
      lVar9 = 0;
      ERR_new();
      ERR_set_debug("providers/implementations/encode_decode/ml_kem_codecs.c",0xb5,
                    "ossl_ml_kem_d2i_PKCS8");
      ERR_set_error(0x39,0xf9,"unexpected parameters with a PKCS#8 %s private key",*puVar6);
    }
  }
LAB_00100205:
  CRYPTO_free(ptr);
  PKCS8_PRIV_KEY_INFO_free(p8);
  ossl_ml_kem_key_free(lVar9);
LAB_00100228:
  lVar9 = 0;
LAB_0010022a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong ossl_ml_kem_i2d_pubkey(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  int iVar2;
  void *pvVar3;
  
  if (param_1[8] == 0) {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/ml_kem_codecs.c",0x11a,
                  "ossl_ml_kem_i2d_pubkey");
    ERR_set_error(0x39,0xdc,"no %s public key data available",*(undefined8 *)*param_1);
    return 0;
  }
  uVar1 = *(ulong *)(*param_1 + 0x18);
  pvVar3 = _DAT_00000000;
  if (param_2 != (undefined8 *)0x0) {
    pvVar3 = CRYPTO_malloc((int)uVar1,"providers/implementations/encode_decode/ml_kem_codecs.c",
                           0x122);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) {
      return 0;
    }
  }
  iVar2 = ossl_ml_kem_encode_public_key(pvVar3,uVar1,param_1);
  if (iVar2 == 0) {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/ml_kem_codecs.c",0x125,
                  "ossl_ml_kem_i2d_pubkey");
    ERR_set_error(0x3b,0xc0103,"error encoding %s public key",*(undefined8 *)*param_1);
    CRYPTO_free((void *)*param_2);
    return 0;
  }
  return uVar1 & 0xffffffff;
}



ulong ossl_ml_kem_i2d_prvkey(long *param_1,uint *param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int iVar4;
  undefined8 uVar5;
  long *ptr;
  long *plVar6;
  uint *ptr_00;
  uint *puVar7;
  undefined1 *puVar8;
  long lVar9;
  uint *puVar10;
  int iVar11;
  
  puVar2 = (undefined8 *)*param_1;
  iVar11 = *(int *)(puVar2 + 8);
  if (iVar11 == 0x5af) {
    puVar8 = (undefined1 *)0x101330;
LAB_0010081b:
    lVar9 = param_1[10];
  }
  else {
    if (iVar11 != 0x5b0) {
      puVar8 = codecs;
      if (iVar11 != 0x5ae) {
        return 0;
      }
      goto LAB_0010081b;
    }
    lVar9 = param_1[10];
    puVar8 = (undefined1 *)0x101340;
  }
  if (lVar9 == 0) {
    ERR_new(param_3);
    ERR_set_debug("providers/implementations/encode_decode/ml_kem_codecs.c",0x141,
                  "ossl_ml_kem_i2d_prvkey");
    ERR_set_error(0x39,0xdd,"no %s private key data available",*(undefined8 *)*param_1);
    return 0;
  }
  uVar5 = ossl_prov_ctx_get_param(param_3,"ml-kem.output_formats",0);
  ptr = (long *)ossl_ml_common_pkcs8_fmt_order(*puVar2,*(undefined8 *)(puVar8 + 8),"output",uVar5);
  if (ptr == (long *)0x0) {
    return 0;
  }
  lVar9 = *ptr;
  if (lVar9 == 0) {
LAB_001008a8:
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/ml_kem_codecs.c",0x157,
                  "ossl_ml_kem_i2d_prvkey");
    ERR_set_error(0x39,0xf6,"no matching enabled %s private key output formats",*puVar2);
  }
  else {
    plVar6 = ptr;
    if (param_1[0xc] == 0) {
      do {
        if (*(long *)(lVar9 + 0x28) == 0) goto LAB_00100884;
        lVar9 = plVar6[2];
        plVar6 = plVar6 + 2;
      } while (lVar9 != 0);
      goto LAB_001008a8;
    }
LAB_00100884:
    if ((((*(ulong *)(lVar9 + 0x28) & 0xffffffffffffffbf) != 0) ||
        ((*(long *)(lVar9 + 0x40) != 0 && (*(long *)(lVar9 + 0x40) != puVar2[1])))) ||
       ((*(long *)(lVar9 + 0x50) != 0 && (*(long *)(lVar9 + 0x50) != puVar2[3]))))
    goto LAB_001008a8;
    uVar3 = *(ulong *)(lVar9 + 8);
    iVar11 = (int)uVar3;
    ptr_00 = param_2;
    if (param_2 == (uint *)0x0) {
LAB_00100ab0:
      CRYPTO_free(ptr);
      if (iVar11 != 0) {
        return uVar3 & 0xffffffff;
      }
      goto LAB_001008f6;
    }
    ptr_00 = (uint *)CRYPTO_malloc(iVar11,"providers/implementations/encode_decode/ml_kem_codecs.c",
                                   0x163);
    if (ptr_00 != (uint *)0x0) {
      iVar4 = *(int *)(lVar9 + 0x10);
      if (iVar4 == 2) {
        *(ushort *)ptr_00 = *(ushort *)(lVar9 + 0x14) << 8 | *(ushort *)(lVar9 + 0x14) >> 8;
        puVar10 = (uint *)((long)ptr_00 + 2);
LAB_001009fb:
        if (*(long *)(lVar9 + 0x28) != 0) {
          puVar7 = (uint *)(*(long *)(lVar9 + 0x20) + (long)ptr_00);
          if ((uint *)((long)puVar10 + 2) == puVar7) {
            *(ushort *)puVar10 = *(ushort *)(lVar9 + 0x18) << 8 | *(ushort *)(lVar9 + 0x18) >> 8;
            puVar7 = (uint *)(*(long *)(lVar9 + 0x20) + (long)ptr_00);
            puVar10 = (uint *)((long)puVar10 + 2);
          }
          if ((puVar10 != puVar7) ||
             (iVar4 = ossl_ml_kem_encode_seed(puVar10,0x40,param_1), iVar4 == 0)) {
            ERR_new();
            uVar5 = 0x17f;
            goto LAB_00100a39;
          }
          puVar10 = puVar10 + 0x10;
        }
        if (*(long *)(lVar9 + 0x40) != 0) {
          puVar7 = (uint *)(*(long *)(lVar9 + 0x38) + (long)ptr_00);
          if (puVar10 + 1 == puVar7) {
            uVar1 = *(uint *)(lVar9 + 0x30);
            *puVar10 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                       uVar1 << 0x18;
            puVar7 = (uint *)(*(long *)(lVar9 + 0x38) + (long)ptr_00);
            puVar10 = puVar10 + 1;
          }
          if ((puVar10 != puVar7) ||
             (iVar4 = ossl_ml_kem_encode_private_key(puVar10,puVar2[1],param_1), iVar4 == 0)) {
            ERR_new();
            uVar5 = 0x18b;
            goto LAB_00100a39;
          }
          puVar10 = (uint *)((long)puVar10 + puVar2[1]);
        }
        if (*(long *)(lVar9 + 0x50) != 0) {
          if ((puVar10 != (uint *)(*(long *)(lVar9 + 0x48) + (long)ptr_00)) ||
             (iVar4 = ossl_ml_kem_encode_public_key(puVar10,puVar2[3],param_1), iVar4 == 0)) {
            ERR_new();
            uVar5 = 0x197;
            goto LAB_00100a39;
          }
          puVar10 = (uint *)((long)puVar10 + puVar2[3]);
        }
        if (puVar10 == (uint *)((long)iVar11 + (long)ptr_00)) {
          *(uint **)param_2 = ptr_00;
          goto LAB_00100ab0;
        }
      }
      else {
        puVar10 = ptr_00;
        if (iVar4 == 4) goto LAB_001009fb;
        if (iVar4 == 0) {
          uVar1 = *(uint *)(lVar9 + 0x14);
          *ptr_00 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
          puVar10 = ptr_00 + 1;
          goto LAB_001009fb;
        }
        ERR_new();
        uVar5 = 0x170;
LAB_00100a39:
        ERR_set_debug("providers/implementations/encode_decode/ml_kem_codecs.c",uVar5,
                      "ossl_ml_kem_i2d_prvkey");
        ERR_set_error(0x39,0xc0103,"error encoding %s private key",*puVar2);
      }
      CRYPTO_free(ptr);
      goto LAB_001008f6;
    }
  }
  CRYPTO_free(ptr);
  ptr_00 = (uint *)0x0;
LAB_001008f6:
  CRYPTO_free(ptr_00);
  return 0;
}



uint ossl_ml_kem_key_to_text(BIO *param_1,long *param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  void *ptr;
  void *ptr_00;
  uint uVar6;
  long in_FS_OFFSET;
  undefined1 local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 == (BIO *)0x0) || (param_2 == (long *)0x0)) {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/ml_kem_codecs.c",0x1b3,
                  "ossl_ml_kem_key_to_text");
    ERR_set_error(0x3b,0xc0102,0);
LAB_00100ec0:
    uVar6 = 0;
  }
  else {
    puVar1 = (undefined8 *)*param_2;
    uVar2 = puVar1[3];
    uVar3 = *puVar1;
    uVar4 = puVar1[1];
    uVar6 = param_3 & 1;
    if (((param_3 & 1) == 0) || ((param_2[10] == 0 && (param_2[0xc] == 0)))) {
      if (param_2[8] == 0) {
        ERR_new();
        ERR_set_debug("providers/implementations/encode_decode/ml_kem_codecs.c",0x1e0,
                      "ossl_ml_kem_key_to_text");
        ERR_set_error(0x39,0x80,"no %s key material available",uVar3);
      }
      else {
        iVar5 = BIO_printf(param_1,"%s Public-Key:\n",uVar3);
        uVar6 = 0;
        ptr = (void *)0x0;
        if (0 < iVar5) goto LAB_00100e2b;
      }
LAB_00100ed7:
      uVar6 = 0;
      ptr_00 = (void *)0x0;
      ptr = (void *)0x0;
    }
    else {
      iVar5 = BIO_printf(param_1,"%s Private-Key:\n",uVar3);
      if (iVar5 < 1) goto LAB_00100ec0;
      if (param_2[0xc] != 0) {
        iVar5 = ossl_ml_kem_encode_seed(local_88,0x40,param_2);
        if ((iVar5 == 0) ||
           (iVar5 = ossl_bio_print_labeled_buf(param_1,"seed:",local_88,0x40), iVar5 == 0))
        goto LAB_00100ed7;
      }
      if (param_2[10] == 0) {
        ptr = (void *)0x0;
        if (param_2[8] == 0) {
          ptr_00 = (void *)0x0;
        }
        else {
LAB_00100e2b:
          ptr_00 = CRYPTO_malloc((int)*(undefined8 *)(*param_2 + 0x18),
                                 "providers/implementations/encode_decode/ml_kem_codecs.c",0x1d7);
          if (((ptr_00 != (void *)0x0) &&
              (iVar5 = ossl_ml_kem_encode_public_key(ptr_00,uVar2,param_2), iVar5 != 0)) &&
             (iVar5 = ossl_bio_print_labeled_buf(param_1,&_LC19,ptr_00,uVar2), iVar5 != 0)) {
            uVar6 = 1;
          }
        }
      }
      else {
        ptr = CRYPTO_malloc((int)uVar4,"providers/implementations/encode_decode/ml_kem_codecs.c",
                            0x1c7);
        if (ptr == (void *)0x0) goto LAB_00100ec0;
        iVar5 = ossl_ml_kem_encode_private_key(ptr,uVar4,param_2);
        if ((iVar5 == 0) ||
           (iVar5 = ossl_bio_print_labeled_buf(param_1,&_LC17,ptr,uVar4), iVar5 == 0)) {
          uVar6 = 0;
          ptr_00 = (void *)0x0;
        }
        else {
          if (param_2[8] != 0) goto LAB_00100e2b;
          ptr_00 = (void *)0x0;
        }
      }
    }
    CRYPTO_free(ptr_00);
    CRYPTO_free(ptr);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}


