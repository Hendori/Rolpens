
undefined1 * mlx_kem_settable_ctx_params(void)

{
  return params_4;
}



undefined8 mlx_kem_set_ctx_params(void)

{
  return 1;
}



void mlx_kem_freectx(void *param_1)

{
  CRYPTO_free(param_1);
  return;
}



undefined4 mlx_kem_decapsulate(long param_1,long param_2,ulong *param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  EVP_PKEY_CTX *ctx;
  EVP_PKEY *to;
  long in_FS_OFFSET;
  size_t local_48;
  long local_40;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = puVar1[3];
  lVar3 = puVar1[2];
  lVar4 = *(long *)(lVar3 + 0x28);
  lVar5 = *(long *)(lVar2 + 0x10);
  iVar9 = *(int *)(lVar2 + 0x28);
  local_48 = *(long *)(lVar2 + 0x20) + 0x20;
  if (*(uint *)(puVar1 + 6) < 2) {
    ERR_new();
    ERR_set_debug("providers/implementations/kem/mlx_kem.c",0x101,"mlx_kem_decapsulate");
    ERR_set_error(0x39,0x80,0);
  }
  else if (param_2 == 0) {
    if (param_3 != (ulong *)0x0) {
      *param_3 = local_48;
      uVar8 = 1;
      goto LAB_00100100;
    }
  }
  else {
    if (param_3 != (ulong *)0x0) {
      if (*param_3 < local_48) {
        ERR_new();
        ERR_set_debug("providers/implementations/kem/mlx_kem.c",0x110,"mlx_kem_decapsulate");
        ERR_set_error(0x39,0x6a,"shared-secret buffer too small");
        goto LAB_001000f4;
      }
      *param_3 = local_48;
    }
    if (lVar4 + lVar5 == param_5) {
      uVar6 = *(undefined8 *)(lVar3 + 0x28);
      local_48 = 0x20;
      lVar3 = *(long *)(lVar2 + 0x10);
      lVar2 = *(long *)(lVar2 + 0x20);
      ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(*puVar1,puVar1[4],puVar1[1]);
      if (ctx == (EVP_PKEY_CTX *)0x0) {
LAB_00100310:
        uVar8 = 0;
        to = (EVP_PKEY *)0x0;
        ctx = (EVP_PKEY_CTX *)0x0;
      }
      else {
        iVar7 = EVP_PKEY_decapsulate_init(ctx,0);
        if (0 < iVar7) {
          iVar7 = EVP_PKEY_decapsulate
                            (ctx,iVar9 * lVar2 + param_2,&local_48,param_4 + lVar3 * iVar9,uVar6);
          if (0 < iVar7) {
            if (local_48 == 0x20) {
              EVP_PKEY_CTX_free(ctx);
              uVar6 = *(undefined8 *)(puVar1[3] + 0x10);
              local_48 = *(ulong *)(puVar1[3] + 0x20);
              lVar2 = *(long *)(puVar1[2] + 0x28);
              ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(*puVar1,puVar1[5],puVar1[1]);
              if (ctx == (EVP_PKEY_CTX *)0x0) goto LAB_00100310;
              to = EVP_PKEY_new();
              uVar8 = 0;
              if (to != (EVP_PKEY *)0x0) {
                iVar7 = EVP_PKEY_copy_parameters(to,(EVP_PKEY *)puVar1[5]);
                if (0 < iVar7) {
                  iVar7 = EVP_PKEY_set1_encoded_public_key(to,param_4 + (1 - iVar9) * lVar2,uVar6);
                  if (0 < iVar7) {
                    iVar7 = EVP_PKEY_derive_init(ctx);
                    if (0 < iVar7) {
                      iVar7 = EVP_PKEY_derive_set_peer(ctx,to);
                      if (0 < iVar7) {
                        iVar9 = EVP_PKEY_derive(ctx,(uchar *)(param_2 + (1 - iVar9) * 0x20),
                                                &local_48);
                        if (0 < iVar9) {
                          uVar8 = 1;
                          if (*(ulong *)(puVar1[3] + 0x20) == local_48) goto LAB_00100318;
                          ERR_new();
                          ERR_set_debug("providers/implementations/kem/mlx_kem.c",0x13e,
                                        "mlx_kem_decapsulate");
                          ERR_set_error(0x39,0xc0103,"unexpected %s shared secret output size: %lu",
                                        *(undefined8 *)puVar1[3],local_48);
                        }
                      }
                    }
                  }
                }
                uVar8 = 0;
              }
              goto LAB_00100318;
            }
            ERR_new();
            ERR_set_debug("providers/implementations/kem/mlx_kem.c",0x128,"mlx_kem_decapsulate");
            ERR_set_error(0x39,0xc0103,"unexpected %s shared secret output size: %lu",
                          *(undefined8 *)puVar1[2],local_48);
          }
        }
        uVar8 = 0;
        to = (EVP_PKEY *)0x0;
      }
LAB_00100318:
      EVP_PKEY_CTX_free(ctx);
      EVP_PKEY_free(to);
      goto LAB_00100100;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/kem/mlx_kem.c",0x117,"mlx_kem_decapsulate");
    ERR_set_error(0x39,0xfb,"wrong decapsulation input ciphertext size: %lu",param_5);
  }
LAB_001000f4:
  uVar8 = 0;
LAB_00100100:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 mlx_kem_decapsulate_init(long param_1,long param_2)

{
  int iVar1;
  
  if (*(uint *)(param_2 + 0x30) < 2) {
    ERR_new();
    ERR_set_debug("providers/implementations/kem/mlx_kem.c",0x56,"mlx_kem_decapsulate_init");
    ERR_set_error(0x39,0x80,0);
  }
  else {
    iVar1 = ossl_prov_is_running();
    if (iVar1 != 0) {
      *(long *)(param_1 + 8) = param_2;
      *(undefined4 *)(param_1 + 0x10) = 0x2000;
      return 1;
    }
  }
  return 0;
}



undefined8 mlx_kem_encapsulate_init(long param_1,long param_2)

{
  int iVar1;
  
  if (*(int *)(param_2 + 0x30) == 0) {
    ERR_new();
    ERR_set_debug("providers/implementations/kem/mlx_kem.c",0x4a,"mlx_kem_encapsulate_init");
    ERR_set_error(0x39,0x80,0);
  }
  else {
    iVar1 = ossl_prov_is_running();
    if (iVar1 != 0) {
      *(long *)(param_1 + 8) = param_2;
      *(undefined4 *)(param_1 + 0x10) = 0x1000;
      return 1;
    }
  }
  return 0;
}



undefined8 mlx_kem_encapsulate(long param_1,long param_2,ulong *param_3,long param_4,ulong *param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  EVP_PKEY_CTX *ctx;
  undefined8 uVar6;
  long in_FS_OFFSET;
  EVP_PKEY *local_58;
  ulong local_50;
  size_t local_48;
  long local_40;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (EVP_PKEY *)0x0;
  lVar2 = puVar1[3];
  iVar5 = *(int *)(lVar2 + 0x28);
  if (*(int *)(puVar1 + 6) == 0) {
    ERR_new();
    ERR_set_debug("providers/implementations/kem/mlx_kem.c",0x78,"mlx_kem_encapsulate");
    ERR_set_error(0x39,0x80,0);
    goto LAB_001006c0;
  }
  lVar3 = puVar1[2];
  local_48 = *(long *)(lVar2 + 0x20) + 0x20;
  local_50 = *(long *)(lVar2 + 0x10) + *(long *)(lVar3 + 0x28);
  if (param_2 == 0) {
    if (param_5 != (ulong *)0x0 || param_3 != (ulong *)0x0) {
      if (param_3 != (ulong *)0x0) {
        *param_3 = local_50;
      }
      if (param_5 != (ulong *)0x0) {
        *param_5 = local_48;
      }
      uVar6 = 1;
      goto LAB_001006d7;
    }
LAB_00100755:
    uVar6 = 0;
    goto LAB_001006d7;
  }
  if (param_4 == 0) {
    ERR_new();
    uVar6 = 0;
    ERR_set_debug("providers/implementations/kem/mlx_kem.c",0x88,"mlx_kem_encapsulate");
    ERR_set_error(0x39,0xf8,"null shared-secret output buffer");
    goto LAB_001006d7;
  }
  if (param_3 == (ulong *)0x0) {
    ERR_new();
    uVar6 = 0;
    ERR_set_debug("providers/implementations/kem/mlx_kem.c",0x8e,"mlx_kem_encapsulate");
    ERR_set_error(0x39,0xf7,"null ciphertext input/output length pointer");
    goto LAB_001006d7;
  }
  if (*param_3 < local_50) {
    ERR_new();
    uVar6 = 0;
    ERR_set_debug("providers/implementations/kem/mlx_kem.c",0x92,"mlx_kem_encapsulate");
    ERR_set_error(0x39,0x6a,"ciphertext buffer too small");
    goto LAB_001006d7;
  }
  *param_3 = local_50;
  if (param_5 == (ulong *)0x0) {
    ERR_new();
    uVar6 = 0;
    ERR_set_debug("providers/implementations/kem/mlx_kem.c",0x9a,"mlx_kem_encapsulate");
    ERR_set_error(0x39,0xf7,"null shared secret input/output length pointer");
    goto LAB_001006d7;
  }
  if (*param_5 < local_48) {
    ERR_new();
    ERR_set_debug("providers/implementations/kem/mlx_kem.c",0x9e,"mlx_kem_encapsulate");
    ERR_set_error(0x39,0x6a,"shared-secret buffer too small");
    goto LAB_00100755;
  }
  *param_5 = local_48;
  local_50 = *(ulong *)(lVar3 + 0x28);
  local_48 = 0x20;
  lVar3 = *(long *)(lVar2 + 0x20);
  lVar2 = *(long *)(lVar2 + 0x10);
  ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(*puVar1,puVar1[4],puVar1[1]);
  if (ctx == (EVP_PKEY_CTX *)0x0) {
LAB_001006c0:
    uVar6 = 0;
    ctx = (EVP_PKEY_CTX *)0x0;
    goto LAB_001006c5;
  }
  iVar4 = EVP_PKEY_encapsulate_init(ctx,0);
  if (iVar4 < 1) {
LAB_00100685:
    uVar6 = 0;
  }
  else {
    iVar4 = EVP_PKEY_encapsulate(ctx,iVar5 * lVar2 + param_2,&local_50,param_4 + lVar3 * iVar5);
    if (iVar4 < 1) goto LAB_00100685;
    if (*(ulong *)(puVar1[2] + 0x28) != local_50) {
      ERR_new();
      uVar6 = 0;
      ERR_set_debug("providers/implementations/kem/mlx_kem.c",0xb0,"mlx_kem_encapsulate");
      ERR_set_error(0x39,0xc0103,"unexpected %s ciphertext output size: %lu",
                    *(undefined8 *)puVar1[2],local_50);
      goto LAB_001006c5;
    }
    if (local_48 != 0x20) {
      ERR_new();
      ERR_set_debug("providers/implementations/kem/mlx_kem.c",0xb6,"mlx_kem_encapsulate");
      uVar6 = *(undefined8 *)puVar1[2];
LAB_0010066d:
      ERR_set_error(0x39,0xc0103,"unexpected %s shared secret output size: %lu",uVar6,local_48);
      goto LAB_00100685;
    }
    EVP_PKEY_CTX_free(ctx);
    lVar2 = *(long *)(puVar1[2] + 0x28);
    local_50 = *(ulong *)(puVar1[3] + 0x10);
    ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(*puVar1,puVar1[5],puVar1[1]);
    if (ctx == (EVP_PKEY_CTX *)0x0) goto LAB_001006c0;
    iVar4 = EVP_PKEY_keygen_init(ctx);
    if (iVar4 < 1) goto LAB_00100685;
    iVar4 = EVP_PKEY_keygen(ctx,&local_58);
    if (iVar4 < 1) goto LAB_00100685;
    iVar4 = EVP_PKEY_get_octet_string_param
                      (local_58,"encoded-pub-key",param_2 + (1 - iVar5) * lVar2,local_50,&local_50);
    if (iVar4 < 1) goto LAB_00100685;
    if (*(ulong *)(puVar1[3] + 0x10) == local_50) {
      EVP_PKEY_CTX_free(ctx);
      local_48 = *(ulong *)(puVar1[3] + 0x20);
      ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(*puVar1,local_58,puVar1[1]);
      if (ctx == (EVP_PKEY_CTX *)0x0) goto LAB_001006c0;
      iVar4 = EVP_PKEY_derive_init(ctx);
      if (0 < iVar4) {
        iVar4 = EVP_PKEY_derive_set_peer(ctx,(EVP_PKEY *)puVar1[5]);
        if (0 < iVar4) {
          iVar5 = EVP_PKEY_derive(ctx,(uchar *)(param_4 + (1 - iVar5) * 0x20),&local_48);
          if (0 < iVar5) {
            uVar6 = 1;
            if (*(ulong *)(puVar1[3] + 0x20) != local_48) {
              ERR_new();
              ERR_set_debug("providers/implementations/kem/mlx_kem.c",0xe6,"mlx_kem_encapsulate");
              uVar6 = *(undefined8 *)puVar1[3];
              goto LAB_0010066d;
            }
            goto LAB_001006c5;
          }
        }
      }
      goto LAB_00100685;
    }
    ERR_new();
    uVar6 = 0;
    ERR_set_debug("providers/implementations/kem/mlx_kem.c",0xd5,"mlx_kem_encapsulate");
    ERR_set_error(0x39,0xc0103,"unexpected %s public key output size: %lu",*(undefined8 *)puVar1[3],
                  local_50);
  }
LAB_001006c5:
  EVP_PKEY_free(local_58);
  EVP_PKEY_CTX_free(ctx);
LAB_001006d7:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 * mlx_kem_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)CRYPTO_malloc(0x18,"providers/implementations/kem/mlx_kem.c",0x2a);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = ossl_prov_ctx_get0_libctx(param_1);
    puVar1[1] = 0;
    *puVar1 = uVar2;
    *(undefined4 *)(puVar1 + 2) = 0;
  }
  return puVar1;
}


