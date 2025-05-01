
char * alloc_kdf_algorithm_name(long *param_1,char *param_2,char *param_3)

{
  int iVar1;
  size_t sVar2;
  size_t sVar3;
  char *buf;
  long lVar4;
  
  sVar2 = strlen(param_2);
  sVar3 = strlen(param_3);
  sVar3 = sVar2 + 2 + sVar3;
  if (*param_1 == 0) {
    lVar4 = OPENSSL_sk_new_null();
    *param_1 = lVar4;
    if (lVar4 == 0) {
      return (char *)0x0;
    }
  }
  buf = (char *)app_malloc(sVar3,"algorithm name");
  BIO_snprintf(buf,sVar3,"%s:%s",param_2,param_3);
  iVar1 = OPENSSL_sk_push(*param_1,buf);
  if (iVar1 == 0) {
    CRYPTO_free(buf);
    return (char *)0x0;
  }
  return buf;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 kdf_main(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *ptr;
  void *ptr_00;
  void *ptr_01;
  char *__nptr;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  void *pvVar11;
  long in_FS_OFFSET;
  long local_78;
  BIO *local_70;
  long local_68;
  void *local_60;
  undefined8 local_58;
  long local_48;
  long local_40;
  
  ptr = (void *)0x0;
  ptr_01 = (void *)0x0;
  ptr_00 = (void *)0x0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  uVar3 = opt_init(param_1,param_2,kdf_options);
  local_78 = 0;
  local_58 = 0;
  bVar1 = false;
LAB_0010012c:
  iVar2 = opt_next();
  if (iVar2 != 0) {
    lVar5 = local_48;
    if (8 < iVar2) {
      if (iVar2 < 0x645) {
        if (iVar2 < 0x641) {
          if (iVar2 != 0x640) goto LAB_0010021d;
        }
        else {
          iVar2 = opt_provider(iVar2);
          if (iVar2 == 0) {
            local_68 = 0;
            lVar9 = 0;
            lVar5 = local_48;
            goto LAB_00100191;
          }
        }
      }
      else if (iVar2 != 0x645) {
LAB_0010021d:
        lVar9 = 0;
        BIO_printf(_bio_err,"%s: Use -help for summary.\n",uVar3);
        pvVar11 = (void *)0x0;
        local_68 = 0;
        local_70 = (BIO *)0x0;
LAB_0010024e:
        ERR_print_errors(_bio_err);
        local_58 = 1;
        local_60 = (void *)0x0;
LAB_00100379:
        CRYPTO_clear_free(pvVar11,local_78,"apps/kdf.c",0xc9);
        OPENSSL_sk_free(lVar5);
        EVP_KDF_free(lVar9);
        EVP_KDF_CTX_free(local_68);
        BIO_free(local_70);
        CRYPTO_free(local_60);
        CRYPTO_free(ptr_01);
        CRYPTO_free(ptr_00);
        CRYPTO_free(ptr);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          return local_58;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      goto LAB_0010012c;
    }
    if (iVar2 < 1) goto LAB_0010021d;
    switch(iVar2) {
    default:
      lVar9 = 0;
      opt_help(kdf_options);
      pvVar11 = (void *)0x0;
      local_68 = 0;
      local_70 = (BIO *)0x0;
      local_60 = (void *)0x0;
      lVar5 = local_48;
LAB_00100371:
      local_58 = 0;
      goto LAB_00100379;
    case 2:
      if ((local_48 == 0) && (lVar5 = OPENSSL_sk_new_null(), local_48 = lVar5, lVar5 == 0))
      goto LAB_0010021d;
      lVar5 = local_48;
      opt_arg();
      iVar2 = OPENSSL_sk_push(lVar5);
      if (iVar2 == 0) goto LAB_0010021d;
      goto LAB_0010012c;
    case 3:
      bVar1 = true;
      goto LAB_0010012c;
    case 4:
      __nptr = (char *)opt_arg();
      lVar5 = strtol(__nptr,(char **)0x0,10);
      local_78 = (long)(int)lVar5;
      goto LAB_0010012c;
    case 5:
      local_58 = opt_arg();
      goto LAB_0010012c;
    case 6:
      CRYPTO_free(ptr_01);
      uVar4 = opt_arg();
      ptr_01 = (void *)alloc_kdf_algorithm_name(&local_48,"cipher",uVar4);
      pvVar11 = ptr_01;
      break;
    case 7:
      CRYPTO_free(ptr_00);
      uVar4 = opt_arg();
      ptr_00 = (void *)alloc_kdf_algorithm_name(&local_48,"digest",uVar4);
      pvVar11 = ptr_00;
      break;
    case 8:
      CRYPTO_free(ptr);
      uVar4 = opt_arg();
      ptr = (void *)alloc_kdf_algorithm_name(&local_48,&_LC6,uVar4);
      pvVar11 = ptr;
    }
    lVar5 = local_48;
    if (pvVar11 == (void *)0x0) goto LAB_0010021d;
    goto LAB_0010012c;
  }
  iVar2 = opt_num_rest();
  puVar6 = (undefined8 *)opt_rest();
  lVar5 = local_48;
  if (iVar2 != 1) goto LAB_0010021d;
  uVar7 = app_get0_propq();
  uVar4 = *puVar6;
  uVar8 = app_get0_libctx();
  lVar9 = EVP_KDF_fetch(uVar8,uVar4,uVar7);
  if (lVar9 == 0) {
    BIO_printf(_bio_err,"Invalid KDF name %s\n",*puVar6);
    goto LAB_0010021d;
  }
  local_68 = EVP_KDF_CTX_new(lVar9);
  if (local_68 == 0) {
LAB_00100191:
    local_70 = (BIO *)0x0;
  }
  else {
    if (lVar5 != 0) {
      uVar3 = EVP_KDF_settable_ctx_params(lVar9);
      lVar10 = app_params_new_from_opts(lVar5,uVar3);
      if (lVar10 == 0) goto LAB_00100191;
      iVar2 = EVP_KDF_CTX_set_params(local_68,lVar10);
      if (iVar2 == 0) {
        BIO_printf(_bio_err,"KDF parameter error\n");
        ERR_print_errors(_bio_err);
        app_params_free(lVar10);
        pvVar11 = (void *)0x0;
        local_70 = (BIO *)0x0;
        goto LAB_0010024e;
      }
      app_params_free(lVar10);
    }
    local_70 = (BIO *)bio_open_default(local_58,0x77,(-(uint)!bVar1 & 0x7fff) + 2);
    if (local_70 == (BIO *)0x0) goto LAB_00100191;
    if (local_78 == 0) {
      BIO_printf(_bio_err,"Invalid derived key length.\n");
    }
    else {
      pvVar11 = (void *)app_malloc(local_78,"out buffer");
      if (pvVar11 != (void *)0x0) {
        iVar2 = EVP_KDF_derive(local_68,pvVar11,local_78,0);
        if (iVar2 == 0) {
          BIO_printf(_bio_err,"EVP_KDF_derive failed\n");
          goto LAB_0010024e;
        }
        if (bVar1) {
          BIO_write(local_70,pvVar11,(int)local_78);
          local_60 = (void *)0x0;
          goto LAB_00100371;
        }
        local_60 = (void *)OPENSSL_buf2hexstr(pvVar11,local_78);
        if (local_60 == (void *)0x0) {
          BIO_printf(_bio_err,"Memory allocation failure\n");
          goto LAB_0010024e;
        }
        BIO_printf(local_70,"%s\n\n",local_60);
        goto LAB_00100371;
      }
    }
  }
  pvVar11 = (void *)0x0;
  goto LAB_0010024e;
}


