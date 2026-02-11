
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 skeyutl_main(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  char *pcVar11;
  undefined4 uVar12;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  lVar10 = 0;
  lVar4 = 0;
  uVar5 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  uVar3 = opt_init(param_1,param_2,skeyutl_options);
  bVar1 = false;
switchD_0010008a_caseD_645:
  do {
    do {
      iVar2 = opt_next();
      if (iVar2 == 0) {
        iVar2 = opt_cipher_any(uVar5,&local_48);
        if (iVar2 == 0) {
LAB_001001a8:
          pcVar11 = "%s: Use -help for summary.\n";
LAB_001001b3:
          lVar6 = 0;
          lVar8 = 0;
          uVar12 = 1;
          BIO_printf(_bio_err,pcVar11,uVar3);
          goto LAB_001000af;
        }
        lVar6 = lVar10;
        if (local_48 == 0) {
          if (lVar10 == 0) {
            BIO_printf(_bio_err,"Either -skeymgmt -or -cipher option should be specified\n");
            goto LAB_00100118;
          }
          if (!bVar1) goto LAB_001002ff;
          uVar3 = app_get0_propq();
        }
        else {
          if (!bVar1) {
LAB_001002ff:
            BIO_printf(_bio_err,"Key generation is the only supported operation as of now\n");
            goto LAB_00100118;
          }
          uVar3 = app_get0_propq();
          if (lVar10 == 0) {
            lVar6 = EVP_CIPHER_get0_name(local_48);
          }
        }
        uVar5 = app_get0_libctx();
        lVar6 = EVP_SKEYMGMT_fetch(uVar5,lVar6,uVar3);
        if (lVar6 == 0) goto LAB_00100118;
        uVar3 = EVP_SKEYMGMT_get0_gen_settable_params(lVar6);
        uVar3 = app_params_new_from_opts(lVar4,uVar3);
        uVar5 = app_get0_propq();
        if (lVar10 == 0) {
          uVar7 = EVP_CIPHER_get0_name(local_48);
          uVar9 = app_get0_libctx();
          lVar8 = EVP_SKEY_generate(uVar9,uVar7,uVar5,uVar3);
          OSSL_PARAM_free(uVar3);
          if (lVar8 == 0) {
            lVar10 = EVP_CIPHER_get0_name(local_48);
            goto LAB_0010037e;
          }
        }
        else {
          uVar7 = app_get0_libctx();
          lVar8 = EVP_SKEY_generate(uVar7,lVar10,uVar5,uVar3);
          OSSL_PARAM_free(uVar3);
          if (lVar8 == 0) {
LAB_0010037e:
            lVar8 = 0;
            uVar12 = 1;
            BIO_printf(_bio_err,"Error creating opaque key for skeymgmt %s\n",lVar10);
            ERR_print_errors(_bio_err);
            goto LAB_001000af;
          }
        }
        pcVar11 = (char *)EVP_SKEY_get0_key_id(lVar8);
        if (pcVar11 == (char *)0x0) {
          pcVar11 = "<unknown>";
        }
        BIO_printf(_bio_out,"An opaque key identified by %s is created\n",pcVar11);
        uVar3 = EVP_SKEY_get0_provider_name(lVar8);
        BIO_printf(_bio_out,"Provider: %s\n",uVar3);
        uVar3 = EVP_SKEY_get0_skeymgmt_name(lVar8);
        BIO_printf(_bio_out,"Key management: %s\n",uVar3);
        uVar12 = 0;
        goto LAB_001000af;
      }
    } while (0x649 < iVar2);
    if (0x640 < iVar2) {
      switch(iVar2) {
      case 0x641:
      case 0x642:
      case 0x643:
      case 0x644:
        iVar2 = opt_provider(iVar2);
        if (iVar2 == 0) {
LAB_00100118:
          lVar6 = 0;
          lVar8 = 0;
          uVar12 = 1;
          goto LAB_001000af;
        }
        break;
      case 0x646:
        uVar5 = opt_arg();
        break;
      case 0x647:
        if ((lVar4 != 0) || (lVar4 = OPENSSL_sk_new_null(), lVar4 != 0)) {
          uVar7 = opt_arg();
          iVar2 = OPENSSL_sk_push(lVar4,uVar7);
          if (iVar2 != 0) break;
        }
        pcVar11 = "%s: out of memory\n";
        goto LAB_001001b3;
      case 0x648:
        lVar10 = opt_arg();
        break;
      case 0x649:
        bVar1 = true;
      }
      goto switchD_0010008a_caseD_645;
    }
    if (iVar2 == -1) goto LAB_001001a8;
    if (iVar2 == 1) {
      lVar6 = 0;
      lVar8 = 0;
      uVar12 = 0;
      opt_help(skeyutl_options);
LAB_001000af:
      ERR_print_errors(_bio_err);
      OPENSSL_sk_free(lVar4);
      EVP_SKEYMGMT_free(lVar6);
      EVP_SKEY_free(lVar8);
      EVP_CIPHER_free(local_48);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar12;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}


