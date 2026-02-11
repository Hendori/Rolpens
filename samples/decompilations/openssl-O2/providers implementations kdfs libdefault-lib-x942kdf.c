
undefined1 * x942kdf_settable_ctx_params(void)

{
  return known_settable_ctx_params_2;
}



undefined1 * x942kdf_gettable_ctx_params(void)

{
  return known_gettable_ctx_params_5;
}



bool x942kdf_get_ctx_params(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  lVar2 = OSSL_PARAM_locate(param_2,&_LC0);
  bVar4 = true;
  if (lVar2 != 0) {
    lVar3 = ossl_prov_digest_md(param_1 + 8);
    if (lVar3 == 0) {
      ERR_new(0);
      ERR_set_debug("providers/implementations/kdfs/x942kdf.c",0x1af,__func___6);
      ERR_set_error(0x39,0x81,0);
      lVar3 = 0;
    }
    else {
      iVar1 = EVP_MD_get_size();
      if (iVar1 < 0) {
        iVar1 = 0;
      }
      lVar3 = (long)iVar1;
    }
    iVar1 = OSSL_PARAM_set_size_t(lVar2,lVar3);
    bVar4 = iVar1 != 0;
  }
  return bVar4;
}



undefined8 * x942kdf_new(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = ossl_prov_is_running();
  puVar2 = (undefined8 *)0x0;
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)CRYPTO_zalloc(0xa0,"providers/implementations/kdfs/x942kdf.c",0x155);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = param_1;
      *(undefined4 *)(puVar2 + 0x13) = 1;
    }
  }
  return puVar2;
}



bool der_encode_sharedinfo
               (undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,long param_6,undefined8 param_7,long param_8,undefined8 param_9,
               long param_10,undefined8 param_11,long param_12,undefined8 param_13,long param_14,
               undefined8 param_15,int param_16,long *param_17)

{
  int iVar1;
  long lVar2;
  
  if (param_2 == 0) {
    iVar1 = WPACKET_init_null_der();
  }
  else {
    iVar1 = WPACKET_init_der();
  }
  if ((((((iVar1 != 0) && (iVar1 = ossl_DER_w_begin_sequence(param_1,0xffffffff), iVar1 != 0)) &&
        ((param_14 == 0 ||
         (iVar1 = ossl_DER_w_octet_string(param_1,3,param_14,param_15), iVar1 != 0)))) &&
       (((param_12 == 0 ||
         (iVar1 = ossl_DER_w_octet_string(param_1,2,param_12,param_13), iVar1 != 0)) &&
        ((param_16 == 0 || (iVar1 = ossl_DER_w_octet_string_uint32(param_1,2,param_16), iVar1 != 0))
        )))) && (((param_10 == 0 ||
                  (iVar1 = ossl_DER_w_octet_string(param_1,1,param_10,param_11), iVar1 != 0)) &&
                 ((param_8 == 0 ||
                  (iVar1 = ossl_DER_w_octet_string(param_1,0,param_8,param_9), iVar1 != 0)))))) &&
     ((((param_6 == 0 ||
        (iVar1 = ossl_DER_w_precompiled(param_1,0xffffffff,param_6,param_7), iVar1 != 0)) &&
       (iVar1 = ossl_DER_w_begin_sequence(param_1,0xffffffff), iVar1 != 0)) &&
      (iVar1 = ossl_DER_w_octet_string_uint32(param_1,0xffffffff,1), iVar1 != 0)))) {
    if (param_17 != (long *)0x0) {
      lVar2 = WPACKET_get_curr(param_1);
      *param_17 = lVar2;
      if (lVar2 == 0) {
        return false;
      }
    }
    iVar1 = ossl_DER_w_precompiled(param_1,0xffffffff,param_4,param_5);
    if (((iVar1 != 0) && (iVar1 = ossl_DER_w_end_sequence(param_1,0xffffffff), iVar1 != 0)) &&
       (iVar1 = ossl_DER_w_end_sequence(param_1,0xffffffff), iVar1 != 0)) {
      iVar1 = WPACKET_finish(param_1);
      return iVar1 != 0;
    }
  }
  return false;
}



void x942kdf_reset(undefined8 *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  byte bVar4;
  
  bVar4 = 0;
  uVar1 = *param_1;
  ossl_prov_digest_reset(param_1 + 1);
  CRYPTO_clear_free(param_1[4],param_1[5],"providers/implementations/kdfs/x942kdf.c",0x165);
  CRYPTO_clear_free(param_1[6],param_1[7],"providers/implementations/kdfs/x942kdf.c",0x166);
  CRYPTO_clear_free(param_1[8],param_1[0xc],"providers/implementations/kdfs/x942kdf.c",0x167);
  CRYPTO_clear_free(param_1[9],param_1[0xd],"providers/implementations/kdfs/x942kdf.c",0x168);
  CRYPTO_clear_free(param_1[10],param_1[0xe],"providers/implementations/kdfs/x942kdf.c",0x169);
  CRYPTO_clear_free(param_1[0xb],param_1[0xf],"providers/implementations/kdfs/x942kdf.c",0x16a);
  param_1[0x13] = 0;
  param_1[1] = 0;
  puVar3 = (undefined8 *)((ulong)(param_1 + 2) & 0xfffffffffffffff8);
  for (uVar2 = (ulong)(((int)(param_1 + 1) -
                       (int)(undefined8 *)((ulong)(param_1 + 2) & 0xfffffffffffffff8)) + 0x98U >> 3)
      ; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
  }
  *param_1 = uVar1;
  *(undefined4 *)(param_1 + 0x13) = 1;
  return;
}



void x942kdf_free(void *param_1)

{
  if (param_1 != (void *)0x0) {
    x942kdf_reset();
    CRYPTO_free(param_1);
    return;
  }
  return;
}



undefined8 * x942kdf_dup(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *ptr;
  
  uVar1 = *param_1;
  iVar2 = ossl_prov_is_running();
  if ((iVar2 != 0) &&
     (ptr = (undefined8 *)CRYPTO_zalloc(0xa0,"providers/implementations/kdfs/x942kdf.c",0x155),
     ptr != (undefined8 *)0x0)) {
    *ptr = uVar1;
    uVar1 = param_1[5];
    *(undefined4 *)(ptr + 0x13) = 1;
    iVar2 = ossl_prov_memdup(param_1[4],uVar1,ptr + 4,ptr + 5);
    if (((iVar2 != 0) &&
        (((iVar2 = ossl_prov_memdup(param_1[6],param_1[7],ptr + 6,ptr + 7), iVar2 != 0 &&
          (iVar2 = ossl_prov_memdup(param_1[8],param_1[0xc],ptr + 8,ptr + 0xc), iVar2 != 0)) &&
         (iVar2 = ossl_prov_memdup(param_1[9],param_1[0xd],ptr + 9,ptr + 0xd), iVar2 != 0)))) &&
       (((iVar2 = ossl_prov_memdup(param_1[10],param_1[0xe],ptr + 10,ptr + 0xe), iVar2 != 0 &&
         (iVar2 = ossl_prov_memdup(param_1[0xb],param_1[0xf],ptr + 0xb,ptr + 0xf), iVar2 != 0)) &&
        (iVar2 = ossl_prov_digest_copy(ptr + 1,param_1 + 1), iVar2 != 0)))) {
      ptr[0x11] = param_1[0x11];
      ptr[0x12] = param_1[0x12];
      ptr[0x10] = param_1[0x10];
      *(undefined4 *)(ptr + 0x13) = *(undefined4 *)(param_1 + 0x13);
      return ptr;
    }
    x942kdf_reset(ptr);
    CRYPTO_free(ptr);
  }
  return (undefined8 *)0x0;
}



undefined8 x942kdf_set_ctx_params(undefined8 *param_1,long *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  
  uVar2 = ossl_prov_ctx_get0_libctx(*param_1);
  if ((param_2 == (long *)0x0) || (*param_2 == 0)) {
LAB_001009c8:
    uVar2 = 1;
  }
  else {
    lVar3 = OSSL_PARAM_locate_const(param_2,"digest");
    if (lVar3 == 0) {
LAB_00100610:
      lVar3 = OSSL_PARAM_locate_const(param_2,"secret");
      if ((((lVar3 != 0) || (lVar3 = OSSL_PARAM_locate_const(param_2,&_LC4), lVar3 != 0)) &&
          (*(long *)(lVar3 + 0x18) != 0)) && (*(long *)(lVar3 + 0x10) != 0)) {
        CRYPTO_free((void *)param_1[4]);
        param_1[4] = 0;
        iVar1 = OSSL_PARAM_get_octet_string(lVar3,param_1 + 4,0,param_1 + 5);
        if (iVar1 == 0) goto LAB_001005eb;
      }
      lVar3 = OSSL_PARAM_locate_const(param_2,"acvp-info");
      if (((lVar3 != 0) && (*(long *)(lVar3 + 0x18) != 0)) && (*(long *)(lVar3 + 0x10) != 0)) {
        CRYPTO_free((void *)param_1[6]);
        param_1[6] = 0;
        iVar1 = OSSL_PARAM_get_octet_string(lVar3,param_1 + 6,0,param_1 + 7);
        if (iVar1 == 0) goto LAB_001005eb;
      }
      lVar3 = OSSL_PARAM_locate_const(param_2,"partyu-info");
      if (((lVar3 != 0) || (lVar3 = OSSL_PARAM_locate_const(param_2,&_LC7), lVar3 != 0)) &&
         ((*(long *)(lVar3 + 0x18) != 0 && (*(long *)(lVar3 + 0x10) != 0)))) {
        CRYPTO_free((void *)param_1[8]);
        param_1[8] = 0;
        iVar1 = OSSL_PARAM_get_octet_string(lVar3,param_1 + 8,0,param_1 + 0xc);
        if (iVar1 == 0) goto LAB_001005eb;
      }
      lVar3 = OSSL_PARAM_locate_const(param_2,"partyv-info");
      if (((lVar3 != 0) && (*(long *)(lVar3 + 0x18) != 0)) && (*(long *)(lVar3 + 0x10) != 0)) {
        CRYPTO_free((void *)param_1[9]);
        param_1[9] = 0;
        iVar1 = OSSL_PARAM_get_octet_string(lVar3,param_1 + 9,0,param_1 + 0xd);
        if (iVar1 == 0) goto LAB_001005eb;
      }
      lVar3 = OSSL_PARAM_locate_const(param_2,"use-keybits");
      if ((lVar3 == 0) || (iVar1 = OSSL_PARAM_get_int(lVar3,param_1 + 0x13), iVar1 != 0)) {
        lVar3 = OSSL_PARAM_locate_const(param_2,"supp-pubinfo");
        if (lVar3 != 0) {
          if ((*(long *)(lVar3 + 0x18) != 0) && (*(long *)(lVar3 + 0x10) != 0)) {
            CRYPTO_free((void *)param_1[10]);
            param_1[10] = 0;
            iVar1 = OSSL_PARAM_get_octet_string(lVar3,param_1 + 10,0,param_1 + 0xe);
            if (iVar1 == 0) goto LAB_001005eb;
          }
          *(undefined4 *)(param_1 + 0x13) = 0;
        }
        lVar3 = OSSL_PARAM_locate_const(param_2,"supp-privinfo");
        if (((lVar3 != 0) && (*(long *)(lVar3 + 0x18) != 0)) && (*(long *)(lVar3 + 0x10) != 0)) {
          CRYPTO_free((void *)param_1[0xb]);
          param_1[0xb] = 0;
          iVar1 = OSSL_PARAM_get_octet_string(lVar3,param_1 + 0xb,0,param_1 + 0xf);
          if (iVar1 == 0) goto LAB_001005eb;
        }
        lVar3 = OSSL_PARAM_locate_const(param_2,"cekalg");
        if (lVar3 == 0) goto LAB_001009c8;
        if (*(int *)(lVar3 + 8) == 4) {
          lVar5 = OSSL_PARAM_locate_const(param_2,"properties");
          if (lVar5 == 0) {
            uVar7 = *(undefined8 *)(lVar3 + 0x10);
            uVar4 = 0;
          }
          else {
            uVar4 = *(undefined8 *)(lVar3 + 0x10);
            uVar7 = uVar4;
          }
          lVar3 = EVP_CIPHER_fetch(uVar2,uVar7,uVar4);
          if (lVar3 != 0) {
            lVar5 = 0;
            ppuVar6 = &kek_algs;
            do {
              iVar1 = EVP_CIPHER_is_a(lVar3,*ppuVar6);
              if (iVar1 != 0) {
                EVP_CIPHER_free(lVar3);
                param_1[0x11] = (&PTR_ossl_der_oid_id_aes128_wrap_001015c8)[lVar5 * 4];
                param_1[0x12] = (&DAT_001015d0)[lVar5 * 4];
                param_1[0x10] = (&DAT_001015d8)[lVar5 * 4];
                goto LAB_001009c8;
              }
              lVar5 = lVar5 + 1;
              ppuVar6 = ppuVar6 + 4;
            } while (lVar5 != 4);
          }
          ERR_new();
          ERR_set_debug("providers/implementations/kdfs/x942kdf.c",0x61,"find_alg_id");
          ERR_set_error(0x39,0x91,0);
          EVP_CIPHER_free(lVar3);
          return 0;
        }
      }
    }
    else {
      iVar1 = ossl_prov_digest_load_from_params(param_1 + 1,param_2,uVar2);
      if (iVar1 != 0) {
        uVar4 = ossl_prov_digest_md(param_1 + 1);
        iVar1 = EVP_MD_xof(uVar4);
        if (iVar1 != 0) {
          ERR_new();
          ERR_set_debug("providers/implementations/kdfs/x942kdf.c",0x225,"x942kdf_set_ctx_params");
          ERR_set_error(0x39,0xb7,0);
          return 0;
        }
        goto LAB_00100610;
      }
    }
LAB_001005eb:
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 x942kdf_derive(long param_1,uchar *param_2,ulong param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong cnt;
  char *pcVar13;
  int iVar14;
  undefined4 uVar15;
  EVP_MD *type;
  void *d;
  void *pvVar16;
  EVP_MD_CTX *out;
  EVP_MD_CTX *ctx;
  ulong uVar17;
  uint uVar18;
  long in_FS_OFFSET;
  int local_f4;
  char *local_d8;
  ulong local_d0;
  undefined1 local_c8 [64];
  uchar local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar14 = ossl_prov_is_running();
  if ((iVar14 != 0) && (iVar14 = x942kdf_set_ctx_params(param_1,param_4), iVar14 != 0)) {
    if ((*(int *)(param_1 + 0x98) == 0) || (*(long *)(param_1 + 0x50) == 0)) {
      if ((*(long *)(param_1 + 0x30) == 0) ||
         ((((*(long *)(param_1 + 0x40) == 0 && (*(long *)(param_1 + 0x48) == 0)) &&
           (*(long *)(param_1 + 0x50) == 0)) && (*(long *)(param_1 + 0x58) == 0)))) {
        if (*(long *)(param_1 + 0x20) == 0) {
          ERR_new();
          ERR_set_debug("providers/implementations/kdfs/x942kdf.c",0x1ea,"x942kdf_derive");
          ERR_set_error(0x39,0x84,0);
        }
        else {
          type = (EVP_MD *)ossl_prov_digest_md(param_1 + 8);
          if (type == (EVP_MD *)0x0) {
            ERR_new();
            ERR_set_debug("providers/implementations/kdfs/x942kdf.c",0x1ef,"x942kdf_derive");
            ERR_set_error(0x39,0x81,0);
          }
          else {
            lVar1 = *(long *)(param_1 + 0x88);
            if ((lVar1 == 0) || (lVar2 = *(long *)(param_1 + 0x90), lVar2 == 0)) {
              ERR_new();
              ERR_set_debug("providers/implementations/kdfs/x942kdf.c",499,"x942kdf_derive");
              ERR_set_error(0x39,0x90,0);
            }
            else {
              lVar3 = *(long *)(param_1 + 0x40);
              uVar4 = *(ulong *)(param_1 + 0x60);
              if ((lVar3 == 0) || (uVar4 < 0x40000000)) {
                uVar5 = *(undefined8 *)(param_1 + 0x78);
                uVar6 = *(undefined8 *)(param_1 + 0x58);
                uVar7 = *(undefined8 *)(param_1 + 0x70);
                uVar8 = *(undefined8 *)(param_1 + 0x50);
                uVar9 = *(undefined8 *)(param_1 + 0x68);
                uVar10 = *(undefined8 *)(param_1 + 0x48);
                uVar11 = *(undefined8 *)(param_1 + 0x38);
                uVar12 = *(undefined8 *)(param_1 + 0x30);
                if (*(int *)(param_1 + 0x98) == 0) {
                  local_f4 = 0;
LAB_00100c4a:
                  local_d0 = 0;
                  local_d8 = (char *)0x0;
                  iVar14 = der_encode_sharedinfo
                                     (local_c8,0,0,lVar1,lVar2,uVar12,uVar11,lVar3,uVar4,uVar10,
                                      uVar9,uVar8,uVar7,uVar6,uVar5,local_f4,0);
                  if ((iVar14 != 0) &&
                     (iVar14 = WPACKET_get_total_written(local_c8,&local_d0), iVar14 != 0)) {
                    WPACKET_cleanup(local_c8);
                    d = (void *)CRYPTO_zalloc(local_d0,"providers/implementations/kdfs/x942kdf.c",
                                              0xe8);
                    if ((d != (void *)0x0) &&
                       ((((iVar14 = der_encode_sharedinfo
                                              (local_c8,d,local_d0,lVar1,lVar2,uVar12,uVar11,lVar3,
                                               uVar4,uVar10,uVar9,uVar8,uVar7,uVar6,uVar5,local_f4,
                                               &local_d8), iVar14 != 0 &&
                          (pvVar16 = (void *)WPACKET_get_curr(local_c8), uVar4 = local_d0,
                          pcVar13 = local_d8, d == pvVar16)) && (local_d8 != (char *)0x0)) &&
                        ((*local_d8 == '\x04' && (local_d8[1] == '\x04')))))) {
                      WPACKET_cleanup(local_c8);
                      pvVar16 = *(void **)(param_1 + 0x20);
                      cnt = *(ulong *)(param_1 + 0x28);
                      if ((cnt < 0x40000001) && ((uVar4 < 0x40000001 && (param_3 - 1 < 0x40000000)))
                         ) {
                        iVar14 = EVP_MD_get_size(type);
                        uVar17 = (ulong)iVar14;
                        if (iVar14 < 1) goto LAB_00101095;
                        out = (EVP_MD_CTX *)EVP_MD_CTX_new();
                        ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
                        if (((out != (EVP_MD_CTX *)0x0) && (ctx != (EVP_MD_CTX *)0x0)) &&
                           (iVar14 = EVP_DigestInit(ctx,type), iVar14 != 0)) {
                          uVar18 = 1;
                          while( true ) {
                            *(uint *)(pcVar13 + 2) =
                                 uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8
                                 | uVar18 << 0x18;
                            iVar14 = EVP_MD_CTX_copy_ex(out,ctx);
                            if (((iVar14 == 0) ||
                                (iVar14 = EVP_DigestUpdate(out,pvVar16,cnt), iVar14 == 0)) ||
                               (iVar14 = EVP_DigestUpdate(out,d,uVar4), iVar14 == 0))
                            goto LAB_00101019;
                            if (param_3 < uVar17) break;
                            iVar14 = EVP_DigestFinal_ex(out,param_2,(uint *)0x0);
                            if (iVar14 == 0) goto LAB_00101019;
                            param_2 = param_2 + uVar17;
                            param_3 = param_3 - uVar17;
                            if (param_3 == 0) goto LAB_00101110;
                            uVar18 = uVar18 + 1;
                          }
                          iVar14 = EVP_DigestFinal_ex(out,local_88,(uint *)0x0);
                          if (iVar14 != 0) {
                            memcpy(param_2,local_88,param_3);
LAB_00101110:
                            uVar15 = 1;
                            goto LAB_0010101b;
                          }
                        }
LAB_00101019:
                        uVar15 = 0;
LAB_0010101b:
                        EVP_MD_CTX_free(out);
                        EVP_MD_CTX_free(ctx);
                        OPENSSL_cleanse(local_88,0x40);
                      }
                      else {
                        ERR_new();
                        ERR_set_debug("providers/implementations/kdfs/x942kdf.c",0x11c,__func___0);
                        ERR_set_error(0x39,0x8e,0);
LAB_00101095:
                        uVar15 = 0;
                      }
                      CRYPTO_free(d);
                      goto LAB_00100a8f;
                    }
                  }
                  WPACKET_cleanup(local_c8);
                }
                else {
                  local_d8 = (char *)0x0;
                  local_d0 = 0;
                  if (*(ulong *)(param_1 + 0x80) < 0x1000000) {
                    local_f4 = (int)*(ulong *)(param_1 + 0x80) << 3;
                    goto LAB_00100c4a;
                  }
                }
                ERR_new();
                ERR_set_debug("providers/implementations/kdfs/x942kdf.c",0x207,"x942kdf_derive");
                ERR_set_error(0x39,0x8d,0);
              }
              else {
                ERR_new();
                ERR_set_debug("providers/implementations/kdfs/x942kdf.c",0x1fb,"x942kdf_derive");
                ERR_set_error(0x39,200,0);
              }
            }
          }
        }
      }
      else {
        ERR_new();
        ERR_set_debug("providers/implementations/kdfs/x942kdf.c",0x1e6,"x942kdf_derive");
        ERR_set_error(0x39,0x73,0);
      }
    }
    else {
      ERR_new();
      ERR_set_debug("providers/implementations/kdfs/x942kdf.c",0x1da,"x942kdf_derive");
      ERR_set_error(0x39,0xc6,0);
    }
  }
  uVar15 = 0;
LAB_00100a8f:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar15;
}


