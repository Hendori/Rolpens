
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint cb(uint param_1,X509_STORE_CTX *param_2)

{
  uint uVar1;
  uint uVar2;
  X509 *a;
  ulong flags;
  X509_NAME *nm;
  char *pcVar3;
  X509_STORE_CTX *pXVar4;
  char *pcVar5;
  
  uVar1 = X509_STORE_CTX_get_error(param_2);
  a = X509_STORE_CTX_get_current_cert(param_2);
  if (param_1 == 0) {
    if (a != (X509 *)0x0) {
      flags = get_nameopt();
      nm = X509_get_subject_name(a);
      X509_NAME_print_ex(_bio_err,nm,0,flags);
      BIO_printf(_bio_err,"\n");
    }
    pcVar3 = X509_verify_cert_error_string((long)(int)uVar1);
    uVar2 = X509_STORE_CTX_get_error_depth(param_2);
    pXVar4 = X509_STORE_CTX_get0_parent_ctx(param_2);
    pcVar5 = "";
    if (pXVar4 != (X509_STORE_CTX *)0x0) {
      pcVar5 = "[CRL path] ";
    }
    BIO_printf(_bio_err,"%serror %d at %d depth lookup: %s\n",pcVar5,(ulong)uVar1,(ulong)uVar2,
               pcVar3);
    if (uVar1 == 0x2b) {
      policies_print(param_2);
      return 1;
    }
    if ((int)uVar1 < 0x2c) {
      if ((int)uVar1 < 0x1b) {
        param_1 = 0;
        if (9 < (int)uVar1) {
          param_1 = (uint)((0x6041c00UL >> ((ulong)uVar1 & 0x3f) & 1) != 0);
        }
      }
      else {
        if (uVar1 == 0x22) {
          return 1;
        }
        param_1 = (uint)(uVar1 == 0x25);
      }
    }
    else {
      param_1 = (uint)(uVar1 - 0x4e < 0x10);
    }
  }
  else {
    if ((uVar1 == 0) && (param_1 == 2)) {
      policies_print(param_2);
    }
    if (v_verbose == 0) {
      ERR_clear_error();
    }
  }
  return param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
check(X509_STORE *param_1,char *param_2,stack_st_X509 *param_3,long param_4,
     stack_st_X509_CRL *param_5,int param_6,long param_7)

{
  int iVar1;
  int iVar2;
  X509 *a;
  X509_STORE_CTX *ctx;
  stack_st_X509 *psVar3;
  X509 *a_00;
  ulong flags;
  X509_NAME *nm;
  undefined8 uVar4;
  uint uVar5;
  
  a = (X509 *)load_cert_pass(param_2,0,1,0,"certificate file");
  if (a == (X509 *)0x0) {
LAB_001002c0:
    ERR_print_errors(_bio_err);
  }
  else {
    iVar2 = 0;
    iVar1 = 0;
    if (param_7 != 0) {
      while (iVar2 = iVar1, iVar1 = OPENSSL_sk_num(param_7), iVar2 < iVar1) {
        uVar4 = OPENSSL_sk_value(param_7,iVar2);
        iVar1 = x509_ctrl_string(a);
        if (iVar1 < 1) {
          BIO_printf(_bio_err,"parameter error \"%s\"\n",uVar4);
          ERR_print_errors(_bio_err);
          X509_free(a);
          return 0;
        }
        iVar1 = iVar2 + 1;
      }
    }
    ctx = X509_STORE_CTX_new();
    if (ctx == (X509_STORE_CTX *)0x0) {
      if (param_2 == (char *)0x0) {
        param_2 = "stdin";
      }
      BIO_printf(_bio_err,"error %s: X.509 store context allocation failed\n",param_2);
    }
    else {
      X509_STORE_set_flags(param_1,0);
      iVar1 = X509_STORE_CTX_init(ctx,param_1,a,param_3);
      if (iVar1 == 0) {
        X509_STORE_CTX_free(ctx);
        if (param_2 == (char *)0x0) {
          param_2 = "stdin";
        }
        BIO_printf(_bio_err,"error %s: X.509 store context initialization failed\n",param_2);
      }
      else {
        if (param_4 != 0) {
          X509_STORE_CTX_set0_trusted_stack(ctx,param_4);
        }
        if (param_5 != (stack_st_X509_CRL *)0x0) {
          X509_STORE_CTX_set0_crls(ctx,param_5);
        }
        iVar2 = X509_verify_cert(ctx);
        if (param_2 == (char *)0x0) {
          param_2 = "stdin";
        }
        if ((0 < iVar2) && (iVar1 = X509_STORE_CTX_get_error(ctx), iVar1 == 0)) {
          BIO_printf(_bio_out,"%s: OK\n",param_2);
          if (param_6 == 0) {
            X509_STORE_CTX_free(ctx);
          }
          else {
            psVar3 = X509_STORE_CTX_get1_chain(ctx);
            iVar1 = X509_STORE_CTX_get_num_untrusted(ctx);
            BIO_printf(_bio_out,"Chain:\n");
            for (uVar5 = 0; iVar2 = OPENSSL_sk_num(psVar3), (int)uVar5 < iVar2; uVar5 = uVar5 + 1) {
              a_00 = (X509 *)OPENSSL_sk_value(psVar3,uVar5);
              BIO_printf(_bio_out,"depth=%d: ",(ulong)uVar5);
              flags = get_nameopt();
              nm = X509_get_subject_name(a_00);
              X509_NAME_print_ex_fp(_stdout,nm,0,flags);
              if ((int)uVar5 < iVar1) {
                BIO_printf(_bio_out," (untrusted)");
              }
              BIO_printf(_bio_out,"\n");
            }
            OSSL_STACK_OF_X509_free(psVar3);
            X509_STORE_CTX_free(ctx);
          }
          uVar4 = 1;
          goto LAB_001002a4;
        }
        BIO_printf(_bio_err,"error %s: verification failed\n",param_2);
        X509_STORE_CTX_free(ctx);
      }
    }
    if (iVar2 < 1) goto LAB_001002c0;
  }
  uVar4 = 0;
LAB_001002a4:
  X509_free(a);
  return uVar4;
}



/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int verify_main(undefined4 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  X509_VERIFY_PARAM *pm;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  X509_PURPOSE *xp;
  char *pcVar12;
  char *pcVar13;
  long lVar14;
  X509_STORE *ctx;
  long in_FS_OFFSET;
  long local_88;
  long local_80;
  long local_78;
  undefined4 local_68;
  int local_60;
  undefined8 local_58;
  long local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  pm = X509_VERIFY_PARAM_new();
  if (pm != (X509_VERIFY_PARAM *)0x0) {
    uVar8 = 0;
    lVar14 = 0;
    lVar11 = 0;
    uVar7 = opt_init(param_1,param_2,verify_options);
    local_68 = 0;
    bVar4 = false;
    local_60 = 0;
    uVar2 = 0;
    uVar3 = 0;
    local_88 = 0;
    local_78 = 0;
    local_80 = 0;
switchD_00100566_caseD_0:
    iVar5 = opt_next();
    if (iVar5 == 0) {
LAB_001005b8:
      iVar6 = opt_num_rest();
      puVar9 = (undefined8 *)opt_rest();
      if ((local_50 == 0) || ((local_88 == 0 && local_78 == 0) && local_80 == 0)) {
        ctx = (X509_STORE *)setup_verify(local_78,uVar2,local_80,uVar3,local_88,uVar8);
        if (ctx != (X509_STORE *)0x0) {
          X509_STORE_set_verify_cb(ctx,cb);
          if (local_60 != 0) {
            X509_STORE_set1_param(ctx,pm);
          }
          ERR_clear_error();
          if (bVar4) {
            store_setup_crl_download(ctx);
          }
          if (iVar6 < 1) {
            iVar5 = check(ctx,0,local_58,local_50,local_48,local_68,lVar14);
            iVar5 = -(uint)(iVar5 != 1);
          }
          else {
            puVar1 = puVar9 + iVar6;
            do {
              iVar6 = check(ctx,*puVar9,local_58,local_50,local_48,local_68,lVar14);
              if (iVar6 != 1) {
                iVar5 = -1;
              }
              puVar9 = puVar9 + 1;
            } while (puVar1 != puVar9);
          }
          X509_VERIFY_PARAM_free(pm);
          X509_STORE_free(ctx);
          OSSL_STACK_OF_X509_free(local_58);
          OSSL_STACK_OF_X509_free(local_50);
          OPENSSL_sk_pop_free(local_48,&X509_CRL_free);
          OPENSSL_sk_free(lVar14);
          release_engine(lVar11);
          if (iVar5 < 0) {
            iVar5 = 2;
          }
          goto LAB_00100734;
        }
      }
      else {
        BIO_printf(_bio_err,"%s: Cannot use -trusted with -CAfile, -CApath or -CAstore\n",uVar7);
      }
      goto LAB_001006ea;
    }
    while (iVar5 < 0xe) {
      if (iVar5 < -1) goto switchD_00100566_caseD_0;
      switch(iVar5) {
      default:
        goto switchD_00100566_caseD_0;
      case 1:
        opt_help(verify_options);
        BIO_printf(_bio_err,"\nRecognized certificate chain purposes:\n");
        for (iVar5 = 0; iVar6 = X509_PURPOSE_get_count(), iVar5 < iVar6; iVar5 = iVar5 + 1) {
          xp = X509_PURPOSE_get0(iVar5);
          pcVar12 = X509_PURPOSE_get0_name(xp);
          pcVar13 = X509_PURPOSE_get0_sname(xp);
          BIO_printf(_bio_err,"  %-15s  %s\n",pcVar13,pcVar12);
        }
        BIO_printf(_bio_err,"Recognized certificate policy names:\n");
        for (iVar5 = 0; iVar6 = X509_VERIFY_PARAM_get_count(), iVar5 < iVar6; iVar5 = iVar5 + 1) {
          uVar7 = X509_VERIFY_PARAM_get0(iVar5);
          uVar7 = X509_VERIFY_PARAM_get0_name(uVar7);
          BIO_printf(_bio_err,"  %s\n",uVar7);
        }
        iVar5 = 0;
        goto LAB_00100912;
      case 2:
        uVar10 = opt_arg();
        lVar11 = setup_engine_methods(uVar10,0xffffffff,0);
        if (lVar11 != 0) goto switchD_00100566_caseD_0;
        goto LAB_0010069a;
      case 3:
        local_80 = opt_arg();
        goto switchD_00100566_caseD_0;
      case 4:
        local_78 = opt_arg();
        goto switchD_00100566_caseD_0;
      case 5:
        local_88 = opt_arg();
        goto switchD_00100566_caseD_0;
      case 7:
        uVar2 = 1;
        goto switchD_00100566_caseD_0;
      case 8:
        uVar8 = 1;
        goto switchD_00100566_caseD_0;
      case 9:
        uVar10 = opt_arg();
        iVar5 = load_certs(uVar10,0,&local_58,0,"untrusted certificates");
        goto joined_r0x0010079d;
      case 10:
        uVar8 = opt_arg();
        iVar5 = load_certs(uVar8,0,&local_50,0,"trusted certificates");
        if (iVar5 == 0) goto LAB_0010069a;
        uVar2 = 1;
        uVar8 = 1;
      case 6:
        uVar3 = 1;
        iVar5 = opt_next();
        if (iVar5 == 0) {
          iVar5 = 0;
          goto LAB_001005b8;
        }
        break;
      case 0xb:
        uVar10 = opt_arg();
        iVar5 = load_crls(uVar10,&local_48,0,"other CRLs");
        goto joined_r0x0010079d;
      case 0xc:
        bVar4 = true;
        goto switchD_00100566_caseD_0;
      case 0xd:
        local_68 = 1;
        goto switchD_00100566_caseD_0;
      case -1:
        goto switchD_00100566_caseD_ffffffff;
      }
    }
    if (iVar5 == 0x7f0) {
      uVar10 = opt_arg();
      iVar5 = set_nameopt(uVar10);
joined_r0x0010079d:
      if (iVar5 != 0) goto switchD_00100566_caseD_0;
    }
    else {
      if (0x7f0 < iVar5) {
        if (iVar5 == 0x7f1) {
          if ((lVar14 == 0) && (lVar14 = OPENSSL_sk_new_null(), lVar14 == 0))
          goto switchD_00100566_caseD_ffffffff;
          uVar10 = opt_arg();
          iVar5 = OPENSSL_sk_push(lVar14,uVar10);
          if (iVar5 == 0) goto switchD_00100566_caseD_ffffffff;
        }
        else if (iVar5 == 0x7f2) {
          v_verbose = 1;
        }
        goto switchD_00100566_caseD_0;
      }
      if (iVar5 < 0x645) {
        if (0x640 < iVar5) {
          iVar5 = opt_provider(iVar5);
          goto joined_r0x0010079d;
        }
        goto switchD_00100566_caseD_0;
      }
      if (0x1d < iVar5 - 0x7d1U) goto switchD_00100566_caseD_0;
      iVar5 = opt_verify(iVar5,pm);
      if (iVar5 != 0) {
        local_60 = local_60 + 1;
        goto switchD_00100566_caseD_0;
      }
    }
LAB_0010069a:
    iVar5 = 1;
LAB_00100912:
    X509_VERIFY_PARAM_free(pm);
    X509_STORE_free((X509_STORE *)0x0);
    OSSL_STACK_OF_X509_free(local_58);
    OSSL_STACK_OF_X509_free(local_50);
    OPENSSL_sk_pop_free(local_48,&X509_CRL_free);
    OPENSSL_sk_free(lVar14);
    release_engine(lVar11);
    goto LAB_00100734;
  }
  lVar14 = 0;
  lVar11 = 0;
LAB_001006ea:
  X509_VERIFY_PARAM_free(pm);
  X509_STORE_free((X509_STORE *)0x0);
  OSSL_STACK_OF_X509_free(local_58);
  OSSL_STACK_OF_X509_free(local_50);
  OPENSSL_sk_pop_free(local_48,&X509_CRL_free);
  OPENSSL_sk_free(lVar14);
  release_engine(lVar11);
  iVar5 = 1;
LAB_00100734:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
switchD_00100566_caseD_ffffffff:
  BIO_printf(_bio_err,"%s: Use -help for summary.\n",uVar7);
  goto LAB_001006ea;
}


