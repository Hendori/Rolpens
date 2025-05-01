
undefined1 * kbkdf_settable_ctx_params(void)

{
  return known_settable_ctx_params_1;
}



undefined1 * kbkdf_gettable_ctx_params(void)

{
  return known_gettable_ctx_params_3;
}



bool kbkdf_get_ctx_params(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  
  lVar2 = OSSL_PARAM_locate(param_2,&_LC0);
  bVar3 = true;
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_size_t(lVar2,0xffffffffffffffff);
    bVar3 = iVar1 != 0;
  }
  return bVar3;
}



bool kbkdf_set_ctx_params(undefined8 *param_1,long *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  long in_FS_OFFSET;
  bool bVar7;
  byte bVar8;
  undefined4 auStack_b8 [15];
  uint local_7c;
  undefined4 local_78 [10];
  undefined4 local_50 [12];
  long local_20;
  
  bVar8 = 0;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = ossl_prov_ctx_get0_libctx(*param_1);
  if ((param_2 == (long *)0x0) || (*param_2 == 0)) {
LAB_00100180:
    bVar7 = true;
    goto LAB_00100185;
  }
  iVar1 = ossl_prov_macctx_load_from_params(param_1 + 2,param_2,0,0,0,uVar2);
  if (iVar1 != 0) {
    if (param_1[2] != 0) {
      *(undefined4 *)((long)param_1 + 100) = 0;
      uVar2 = EVP_MAC_CTX_get0_mac();
      iVar1 = EVP_MAC_is_a(uVar2,"KMAC128");
      if (iVar1 == 0) {
        uVar2 = EVP_MAC_CTX_get0_mac(param_1[2]);
        iVar1 = EVP_MAC_is_a(uVar2,"KMAC256");
        if (iVar1 == 0) {
          uVar2 = EVP_MAC_CTX_get0_mac(param_1[2]);
          iVar1 = EVP_MAC_is_a(uVar2,&_LC3);
          if (iVar1 == 0) {
            uVar2 = EVP_MAC_CTX_get0_mac(param_1[2]);
            iVar1 = EVP_MAC_is_a(uVar2,&_LC4);
            if (iVar1 == 0) {
              ERR_new();
              ERR_set_debug("providers/implementations/kdfs/kbkdf.c",0x189,"kbkdf_set_ctx_params");
              ERR_set_error(0x39,0x97,0);
              bVar7 = false;
              goto LAB_00100185;
            }
          }
          goto LAB_001000f5;
        }
      }
      *(undefined4 *)((long)param_1 + 100) = 1;
    }
LAB_001000f5:
    lVar3 = OSSL_PARAM_locate_const(param_2,&_LC6);
    if (lVar3 != 0) {
      iVar1 = OPENSSL_strncasecmp("counter",*(undefined8 *)(lVar3 + 0x10),
                                  *(undefined8 *)(lVar3 + 0x18));
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 1) = 0;
      }
      else {
        iVar1 = OPENSSL_strncasecmp("feedback",*(undefined8 *)(lVar3 + 0x10),
                                    *(undefined8 *)(lVar3 + 0x18));
        if (iVar1 != 0) {
          ERR_new();
          ERR_set_debug("providers/implementations/kdfs/kbkdf.c",0x196,"kbkdf_set_ctx_params");
          ERR_set_error(0x39,0x7d,0);
          bVar7 = false;
          goto LAB_00100185;
        }
        *(undefined4 *)(param_1 + 1) = 1;
      }
    }
    lVar3 = OSSL_PARAM_locate_const(param_2,&_LC9);
    if (lVar3 != 0) {
      iVar1 = ossl_param_get1_octet_string(lVar3,&_LC9,param_1 + 4,param_1 + 5);
      if (iVar1 == 0) goto LAB_00100178;
    }
    iVar1 = ossl_param_get1_octet_string(param_2,&_LC10,param_1 + 6,param_1 + 7);
    if (iVar1 != 0) {
      iVar1 = ossl_param_get1_concat_octet_string(param_2,&_LC11,param_1 + 8,param_1 + 9,0);
      if (iVar1 != 0) {
        iVar1 = ossl_param_get1_octet_string(param_2,&_LC12,param_1 + 10,param_1 + 0xb);
        if (iVar1 != 0) {
          lVar3 = OSSL_PARAM_locate_const(param_2,"use-l");
          if (lVar3 != 0) {
            iVar1 = OSSL_PARAM_get_int(lVar3,param_1 + 0xc);
            if (iVar1 == 0) goto LAB_00100178;
          }
          lVar3 = OSSL_PARAM_locate_const(param_2,&_LC14);
          if (lVar3 == 0) {
LAB_0010025f:
            lVar3 = OSSL_PARAM_locate_const(param_2,"use-separator");
            if (lVar3 != 0) {
              iVar1 = OSSL_PARAM_get_int(lVar3,param_1 + 0xd);
              if (iVar1 == 0) goto LAB_00100178;
            }
            lVar3 = param_1[2];
            if ((lVar3 == 0) || (lVar4 = param_1[5], lVar4 == 0)) goto LAB_00100180;
            if (*(int *)((long)param_1 + 100) != 0) {
              if ((param_1[6] != 0) && (param_1[7] != 0)) {
                OSSL_PARAM_construct_octet_string(auStack_b8,"custom",param_1[6]);
                puVar5 = auStack_b8;
                puVar6 = local_78;
                for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
                  *puVar6 = *puVar5;
                  puVar5 = puVar5 + (ulong)bVar8 * -2 + 1;
                  puVar6 = puVar6 + (ulong)bVar8 * -2 + 1;
                }
                OSSL_PARAM_construct_end(auStack_b8);
                puVar5 = auStack_b8;
                puVar6 = local_50;
                for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
                  *puVar6 = *puVar5;
                  puVar5 = puVar5 + (ulong)bVar8 * -2 + 1;
                  puVar6 = puVar6 + (ulong)bVar8 * -2 + 1;
                }
                iVar1 = EVP_MAC_CTX_set_params(lVar3,local_78);
                if (iVar1 < 1) goto LAB_00100178;
                lVar4 = param_1[5];
                lVar3 = param_1[2];
              }
            }
            iVar1 = EVP_MAC_init(lVar3,param_1[4],lVar4,0);
            bVar7 = iVar1 != 0;
            goto LAB_00100185;
          }
          local_7c = 0;
          iVar1 = OSSL_PARAM_get_int(lVar3,&local_7c);
          if (iVar1 != 0) {
            if (((local_7c - 0x10 & 0xffffffef) == 0) || ((local_7c & 0xffffffef) == 8)) {
              *(uint *)(param_1 + 3) = local_7c;
              goto LAB_0010025f;
            }
          }
        }
      }
    }
  }
LAB_00100178:
  bVar7 = false;
LAB_00100185:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 * kbkdf_new(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = ossl_prov_is_running();
  puVar2 = (undefined8 *)0x0;
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)CRYPTO_zalloc(0x70,"providers/implementations/kdfs/kbkdf.c",0x79);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = param_1;
      *(undefined4 *)(puVar2 + 3) = 0x20;
      *(undefined4 *)(puVar2 + 0xd) = 1;
      puVar2[0xc] = 1;
    }
  }
  return puVar2;
}



undefined4 kbkdf_derive(long param_1,void *param_2,ulong param_3,undefined8 param_4)

{
  void *pvVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  size_t __n;
  ulong uVar18;
  ulong uVar19;
  long in_FS_OFFSET;
  void *local_140;
  uint local_110;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined1 local_a5;
  uint local_a4;
  ulong local_a0;
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
  iVar9 = ossl_prov_is_running();
  if ((iVar9 != 0) && (iVar9 = kbkdf_set_ctx_params(param_1,param_4), iVar9 != 0)) {
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 == 0) {
      if ((*(long *)(param_1 + 0x28) == 0) || (*(long *)(param_1 + 0x20) == 0)) {
        ERR_new();
        ERR_set_debug("providers/implementations/kdfs/kbkdf.c",0x136,"kbkdf_derive");
        ERR_set_error(0x39,0x72,0);
      }
      else {
        ERR_new();
        ERR_set_debug("providers/implementations/kdfs/kbkdf.c",0x13b,"kbkdf_derive");
        ERR_set_error(0x39,0x96,0);
      }
    }
    else {
      if (param_3 != 0) {
        if (*(int *)(param_1 + 100) == 0) {
          uVar14 = EVP_MAC_CTX_get_mac_size(lVar3);
          if (uVar14 == 0) {
            local_140 = (void *)0x0;
          }
          else {
            if ((*(ulong *)(param_1 + 0x58) == uVar14) || (*(ulong *)(param_1 + 0x58) == 0)) {
              if ((*(int *)(param_1 + 8) == 0) &&
                 ((ulong)(1L << ((byte)*(undefined4 *)(param_1 + 0x18) & 0x3f)) <= param_3 / uVar14)
                 ) {
                ERR_new();
                ERR_set_debug("providers/implementations/kdfs/kbkdf.c",0x158,"kbkdf_derive");
                ERR_set_error(0x39,0x69,0);
              }
              else {
                local_110 = 0;
                if (*(int *)(param_1 + 0x60) != 0) {
                  uVar12 = (int)param_3 * 8;
                  local_110 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                              (int)param_3 << 0x1b;
                }
                local_140 = (void *)CRYPTO_zalloc(uVar14,"providers/implementations/kdfs/kbkdf.c",
                                                  0x160);
                if (local_140 != (void *)0x0) {
                  iVar9 = *(int *)(param_1 + 0x68);
                  __n = *(size_t *)(param_1 + 0x58);
                  local_a5 = 0;
                  iVar11 = *(int *)(param_1 + 0x18);
                  uVar4 = *(undefined8 *)(param_1 + 0x48);
                  iVar2 = *(int *)(param_1 + 8);
                  uVar5 = *(undefined8 *)(param_1 + 0x40);
                  uVar6 = *(undefined8 *)(param_1 + 0x38);
                  uVar7 = *(undefined8 *)(param_1 + 0x30);
                  uVar8 = *(undefined8 *)(param_1 + 0x10);
                  local_a4 = local_110;
                  if (__n != 0) {
                    memcpy(local_140,*(void **)(param_1 + 0x50),__n);
                  }
                  iVar10 = iVar11 + 7;
                  if (-1 < iVar11) {
                    iVar10 = iVar11;
                  }
                  uVar18 = 0;
                  iVar10 = iVar10 >> 3;
                  lVar3 = (long)&local_a0 + (long)(4 - iVar10);
                  uVar12 = 0x1000000;
                  if (iVar2 == 1) {
                    uVar17 = 1;
                    uVar19 = param_3;
                    while( true ) {
                      local_a0 = CONCAT44(local_a0._4_4_,uVar12);
                      lVar15 = EVP_MAC_CTX_dup(uVar8);
                      if (lVar15 == 0) break;
                      iVar11 = EVP_MAC_update(lVar15,local_140,__n);
                      if (iVar11 == 0) {
                        EVP_MAC_CTX_free(lVar15);
                        goto LAB_00100962;
                      }
                      iVar11 = EVP_MAC_update(lVar15,lVar3,(long)iVar10);
                      if ((((iVar11 == 0) ||
                           (iVar11 = EVP_MAC_update(lVar15,uVar7,uVar6), iVar11 == 0)) ||
                          ((iVar9 != 0 && (iVar11 = EVP_MAC_update(lVar15,&local_a5,1), iVar11 == 0)
                           ))) || ((iVar11 = EVP_MAC_update(lVar15,uVar5,uVar4), iVar11 == 0 ||
                                   (((local_110 != 0 &&
                                     (iVar11 = EVP_MAC_update(lVar15,&local_a4,4), iVar11 == 0)) ||
                                    (iVar11 = EVP_MAC_final(lVar15,local_140,0,uVar14), iVar11 == 0)
                                    ))))) goto LAB_00100bed;
                      uVar16 = uVar14;
                      if (uVar19 <= uVar14) {
                        uVar16 = uVar19;
                      }
                      uVar17 = uVar17 + 1;
                      uVar19 = uVar19 - uVar14;
                      pvVar1 = (void *)((long)param_2 + uVar18);
                      uVar18 = uVar18 + uVar14;
                      memcpy(pvVar1,local_140,uVar16);
                      EVP_MAC_CTX_free(lVar15);
                      if (param_3 <= uVar18) goto LAB_00100c0c;
                      uVar12 = uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 |
                               uVar17 * 0x1000000;
                      __n = uVar14;
                    }
                  }
                  else {
                    uVar17 = 1;
                    uVar19 = param_3;
                    while( true ) {
                      local_a0 = CONCAT44(local_a0._4_4_,uVar12);
                      lVar15 = EVP_MAC_CTX_dup(uVar8);
                      if (lVar15 == 0) break;
                      iVar11 = EVP_MAC_update(lVar15,lVar3,(long)iVar10);
                      if (((iVar11 == 0) ||
                          (iVar11 = EVP_MAC_update(lVar15,uVar7,uVar6), iVar11 == 0)) ||
                         ((((iVar9 != 0 &&
                            (iVar11 = EVP_MAC_update(lVar15,&local_a5,1), iVar11 == 0)) ||
                           (iVar11 = EVP_MAC_update(lVar15,uVar5,uVar4), iVar11 == 0)) ||
                          (((local_110 != 0 &&
                            (iVar11 = EVP_MAC_update(lVar15,&local_a4,4), iVar11 == 0)) ||
                           (iVar11 = EVP_MAC_final(lVar15,local_140,0,uVar14), iVar11 == 0))))))
                      goto LAB_00100bed;
                      uVar16 = uVar19;
                      if (uVar14 <= uVar19) {
                        uVar16 = uVar14;
                      }
                      uVar17 = uVar17 + 1;
                      uVar19 = uVar19 - uVar14;
                      pvVar1 = (void *)((long)param_2 + uVar18);
                      uVar18 = uVar18 + uVar14;
                      memcpy(pvVar1,local_140,uVar16);
                      EVP_MAC_CTX_free(lVar15);
                      if (param_3 <= uVar18) goto LAB_00100c0c;
                      uVar12 = uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 |
                               uVar17 * 0x1000000;
                    }
                  }
                  EVP_MAC_CTX_free(0);
                  goto LAB_00100962;
                }
              }
            }
            else {
              ERR_new();
              ERR_set_debug("providers/implementations/kdfs/kbkdf.c",0x150,"kbkdf_derive");
              ERR_set_error(0x39,0x9a,0);
            }
            local_140 = (void *)0x0;
          }
        }
        else {
          uVar4 = *(undefined8 *)(param_1 + 0x48);
          uVar5 = *(undefined8 *)(param_1 + 0x40);
          local_a0 = param_3;
          OSSL_PARAM_construct_size_t(&local_d8,&_LC0,&local_a0);
          local_78 = local_b8;
          local_98 = local_d8;
          uStack_90 = uStack_d0;
          local_88 = local_c8;
          uStack_80 = uStack_c0;
          OSSL_PARAM_construct_end(&local_d8);
          local_50 = local_b8;
          local_70 = local_d8;
          uStack_68 = uStack_d0;
          local_60 = local_c8;
          uStack_58 = uStack_c0;
          iVar9 = EVP_MAC_CTX_set_params(lVar3,&local_98);
          if (((0 < iVar9) && (iVar9 = EVP_MAC_update(lVar3,uVar5,uVar4), iVar9 != 0)) &&
             (iVar9 = EVP_MAC_final(lVar3,param_2,0,local_a0), iVar9 != 0)) {
            uVar14 = 0;
            uVar13 = 1;
            local_140 = (void *)0x0;
            goto LAB_0010096f;
          }
          uVar14 = 0;
          local_140 = (void *)0x0;
        }
LAB_00100962:
        OPENSSL_cleanse(param_2,param_3);
        uVar13 = 0;
        goto LAB_0010096f;
      }
      ERR_new();
      ERR_set_debug("providers/implementations/kdfs/kbkdf.c",0x141,"kbkdf_derive");
      ERR_set_error(0x39,0x69,0);
    }
  }
  uVar13 = 0;
LAB_001004cf:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar13;
LAB_00100bed:
  EVP_MAC_CTX_free(lVar15);
  goto LAB_00100962;
LAB_00100c0c:
  EVP_MAC_CTX_free(0);
  uVar13 = 1;
LAB_0010096f:
  CRYPTO_clear_free(local_140,uVar14,"providers/implementations/kdfs/kbkdf.c",0x16a);
  goto LAB_001004cf;
}



void kbkdf_reset(undefined8 *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  byte bVar4;
  
  bVar4 = 0;
  uVar1 = *param_1;
  EVP_MAC_CTX_free(param_1[2]);
  CRYPTO_clear_free(param_1[8],param_1[9],"providers/implementations/kdfs/kbkdf.c",0x93);
  CRYPTO_clear_free(param_1[6],param_1[7],"providers/implementations/kdfs/kbkdf.c",0x94);
  CRYPTO_clear_free(param_1[4],param_1[5],"providers/implementations/kdfs/kbkdf.c",0x95);
  CRYPTO_clear_free(param_1[10],param_1[0xb],"providers/implementations/kdfs/kbkdf.c",0x96);
  param_1[0xd] = 0;
  param_1[1] = 0;
  puVar3 = (undefined8 *)((ulong)(param_1 + 2) & 0xfffffffffffffff8);
  for (uVar2 = (ulong)(((int)param_1 -
                       (int)(undefined8 *)((ulong)(param_1 + 2) & 0xfffffffffffffff8)) + 0x70U >> 3)
      ; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
  }
  *param_1 = uVar1;
  *(undefined4 *)(param_1 + 3) = 0x20;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0xd) = 1;
  return;
}



void kbkdf_free(void *param_1)

{
  if (param_1 != (void *)0x0) {
    kbkdf_reset();
    CRYPTO_free(param_1);
    return;
  }
  return;
}



undefined8 * kbkdf_dup(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *ptr;
  long lVar5;
  
  uVar3 = *param_1;
  iVar4 = ossl_prov_is_running();
  if (iVar4 != 0) {
    ptr = (undefined8 *)CRYPTO_zalloc(0x70,"providers/implementations/kdfs/kbkdf.c",0x79);
    if (ptr != (undefined8 *)0x0) {
      *ptr = uVar3;
      uVar3 = param_1[2];
      *(undefined4 *)(ptr + 3) = 0x20;
      *(undefined4 *)(ptr + 0xd) = 1;
      ptr[0xc] = 1;
      lVar5 = EVP_MAC_CTX_dup(uVar3);
      ptr[2] = lVar5;
      if (lVar5 != 0) {
        iVar4 = ossl_prov_memdup(param_1[4],param_1[5],ptr + 4,ptr + 5);
        if (iVar4 != 0) {
          iVar4 = ossl_prov_memdup(param_1[6],param_1[7],ptr + 6,ptr + 7);
          if (iVar4 != 0) {
            iVar4 = ossl_prov_memdup(param_1[8],param_1[9],ptr + 8,ptr + 9);
            if (iVar4 != 0) {
              iVar4 = ossl_prov_memdup(param_1[10],param_1[0xb],ptr + 10,ptr + 0xb);
              if (iVar4 != 0) {
                uVar1 = *(undefined4 *)(param_1 + 0xd);
                *(undefined4 *)(ptr + 1) = *(undefined4 *)(param_1 + 1);
                uVar2 = *(undefined4 *)(param_1 + 3);
                *(undefined4 *)(ptr + 0xd) = uVar1;
                *(undefined4 *)(ptr + 3) = uVar2;
                ptr[0xc] = param_1[0xc];
                return ptr;
              }
            }
          }
        }
      }
      kbkdf_reset(ptr);
      CRYPTO_free(ptr);
    }
  }
  return (undefined8 *)0x0;
}


