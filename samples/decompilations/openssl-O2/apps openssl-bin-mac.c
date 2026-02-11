
char * alloc_mac_algorithm_name(long *param_1,char *param_2,char *param_3)

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

undefined4 mac_main(undefined8 param_1,undefined8 param_2)

{
  byte *pbVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  void *data;
  undefined8 uVar5;
  void *pvVar6;
  void *ptr;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  BIO *bp;
  undefined4 uVar13;
  long lVar14;
  long in_FS_OFFSET;
  void *local_98;
  BIO *local_88;
  undefined8 local_78;
  long local_70;
  long local_50;
  int local_48;
  undefined4 uStack_44;
  long local_40;
  
  ptr = (void *)0x0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  uVar4 = opt_init(param_1,param_2,mac_options);
  data = (void *)app_malloc(0x2000,"I/O buffer");
  local_98 = (void *)0x0;
  bVar2 = false;
  local_78 = 0;
  local_70 = 0;
LAB_00100146:
  do {
    iVar3 = opt_next();
    if (iVar3 == 0) {
      iVar3 = opt_check_rest_arg("MAC name");
      lVar14 = local_50;
      if (iVar3 != 0) {
        puVar7 = (undefined8 *)opt_rest();
        uVar8 = app_get0_propq();
        uVar5 = *puVar7;
        uVar9 = app_get0_libctx();
        lVar10 = EVP_MAC_fetch(uVar9,uVar5,uVar8);
        if (lVar10 != 0) {
          lVar11 = EVP_MAC_CTX_new(lVar10);
          if (lVar11 != 0) {
            if (lVar14 != 0) {
              uVar4 = EVP_MAC_settable_ctx_params(lVar10);
              lVar12 = app_params_new_from_opts(lVar14,uVar4);
              if (lVar12 == 0) goto LAB_001005bb;
              iVar3 = EVP_MAC_CTX_set_params(lVar11,lVar12);
              if (iVar3 == 0) {
                BIO_printf(_bio_err,"MAC parameter error\n");
                ERR_print_errors(_bio_err);
                bp = (BIO *)0x0;
                app_params_free(lVar12);
                local_88 = (BIO *)0x0;
                goto LAB_0010021e;
              }
              app_params_free(lVar12);
            }
            bp = (BIO *)bio_open_default(local_78,0x72,2);
            if (bp != (BIO *)0x0) {
              local_88 = (BIO *)bio_open_default(local_70,0x77,(-(uint)!bVar2 & 0x7fff) + 2);
              if (local_88 == (BIO *)0x0) goto LAB_0010021e;
              iVar3 = EVP_MAC_init(lVar11,0,0);
              if (iVar3 != 0) goto LAB_00100524;
              BIO_printf(_bio_err,"EVP_MAC_Init failed\n");
              goto LAB_0010021e;
            }
          }
LAB_001005bb:
          local_88 = (BIO *)0x0;
          bp = (BIO *)0x0;
          goto LAB_0010021e;
        }
        BIO_printf(_bio_err,"Invalid MAC name %s\n",*puVar7);
      }
      break;
    }
    lVar14 = local_50;
    if (iVar3 < 8) {
      if (iVar3 < 1) break;
      switch(iVar3) {
      default:
        bp = (BIO *)0x0;
        lVar11 = 0;
        lVar10 = 0;
        opt_help(mac_options);
        uVar13 = 0;
        local_88 = (BIO *)0x0;
        lVar14 = local_50;
        goto LAB_00100311;
      case 2:
        if ((local_50 == 0) && (local_50 = OPENSSL_sk_new_null(), lVar14 = local_50, local_50 == 0))
        goto LAB_001001f5;
        lVar14 = local_50;
        uVar5 = opt_arg();
        iVar3 = OPENSSL_sk_push(lVar14,uVar5);
        lVar14 = local_50;
        if (iVar3 == 0) goto LAB_001001f5;
        goto LAB_00100146;
      case 3:
        bVar2 = true;
        goto LAB_00100146;
      case 4:
        local_78 = opt_arg();
        goto LAB_00100146;
      case 5:
        local_70 = opt_arg();
        goto LAB_00100146;
      case 6:
        CRYPTO_free(ptr);
        uVar5 = opt_arg();
        ptr = (void *)alloc_mac_algorithm_name(&local_50,"cipher",uVar5);
        pvVar6 = ptr;
        break;
      case 7:
        CRYPTO_free(local_98);
        uVar5 = opt_arg();
        local_98 = (void *)alloc_mac_algorithm_name(&local_50,"digest",uVar5);
        pvVar6 = local_98;
      }
      lVar14 = local_50;
      if (pvVar6 == (void *)0x0) break;
      goto LAB_00100146;
    }
    if (0x644 < iVar3) {
      if (iVar3 != 0x645) break;
      goto LAB_00100146;
    }
    if (0x640 < iVar3) {
      iVar3 = opt_provider(iVar3);
      if (iVar3 == 0) {
        bp = (BIO *)0x0;
        lVar11 = 0;
        lVar10 = 0;
        local_88 = (BIO *)0x0;
        lVar14 = local_50;
        goto LAB_0010021e;
      }
      goto LAB_00100146;
    }
  } while (iVar3 == 0x640);
LAB_001001f5:
  bp = (BIO *)0x0;
  lVar11 = 0;
  lVar10 = 0;
  BIO_printf(_bio_err,"%s: Use -help for summary.\n",uVar4);
  local_88 = (BIO *)0x0;
  goto LAB_0010021e;
  while( true ) {
    iVar3 = BIO_read(bp,data,0x2000);
    if (iVar3 < 0) {
      BIO_printf(_bio_err,"Read Error in \'%s\'\n",local_78);
      ERR_print_errors(_bio_err);
      goto LAB_0010021e;
    }
    if (iVar3 == 0) goto LAB_00100621;
    iVar3 = EVP_MAC_update(lVar11,data,(long)iVar3);
    if (iVar3 == 0) break;
LAB_00100524:
    lVar12 = BIO_ctrl(bp,10,0,(void *)0x0);
    if (((int)lVar12 == 0) && (lVar12 = BIO_ctrl(bp,2,0,(void *)0x0), (int)lVar12 != 0)) {
LAB_00100621:
      iVar3 = EVP_MAC_final(lVar11,0,&local_48,0);
      if (iVar3 == 0) {
        BIO_printf(_bio_err,"EVP_MAC_final failed\n",&local_48);
        goto LAB_0010021e;
      }
      if (0x2000 < CONCAT44(uStack_44,local_48)) {
        BIO_printf(_bio_err,"output len is too large\n",&local_48);
        goto LAB_0010021e;
      }
      iVar3 = EVP_MAC_final(lVar11,data,&local_48,0x2000);
      if (iVar3 == 0) {
        BIO_printf(_bio_err,"EVP_MAC_final failed\n");
        goto LAB_0010021e;
      }
      uVar13 = 0;
      if (bVar2) {
        BIO_write(local_88,data,local_48);
      }
      else {
        lVar12 = 0;
        if (0 < local_48) {
          do {
            pbVar1 = (byte *)((long)data + lVar12);
            lVar12 = lVar12 + 1;
            BIO_printf(local_88,"%02X",(ulong)*pbVar1);
          } while ((int)lVar12 < local_48);
        }
        if (local_70 == 0) {
          BIO_printf(local_88,"\n");
        }
      }
      goto LAB_00100311;
    }
  }
  BIO_printf(_bio_err,"EVP_MAC_update failed\n");
LAB_0010021e:
  ERR_print_errors(_bio_err);
  uVar13 = 1;
LAB_00100311:
  CRYPTO_clear_free(data,0x2000,"apps/mac.c",0xe3);
  CRYPTO_free(ptr);
  CRYPTO_free(local_98);
  OPENSSL_sk_free(lVar14);
  BIO_free(bp);
  BIO_free(local_88);
  EVP_MAC_CTX_free(lVar11);
  EVP_MAC_free(lVar10);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


