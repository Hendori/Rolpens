
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 get_genm_itav(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ASN1_OBJECT *o;
  undefined8 uVar5;
  int iVar6;
  long in_FS_OFFSET;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  char local_b0 [8];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    ERR_new();
    ERR_set_debug("crypto/cmp/cmp_genm.c",0x53,"get_genm_itav");
    ERR_set_error(0x3a,0x67,0);
LAB_001001e5:
    lVar3 = 0;
  }
  else {
    iVar1 = OSSL_CMP_CTX_get_status();
    if (iVar1 != -1) {
      ERR_new();
      ERR_set_debug("crypto/cmp/cmp_genm.c",0x57,"get_genm_itav");
      ERR_set_error(0x3a,0xbf,
                    "client context in unsuitable state; should call CMPclient_reinit() before");
      goto LAB_001001e5;
    }
    iVar1 = OSSL_CMP_CTX_push0_genm_ITAV(param_1,param_2);
    if (iVar1 == 0) goto LAB_001001e5;
    lVar3 = OSSL_CMP_exec_GENM_ses(param_1);
    if (lVar3 == 0) {
      iVar1 = OSSL_CMP_CTX_get_status(param_1);
      if (iVar1 != -3) {
        ERR_new();
        ERR_set_debug("crypto/cmp/cmp_genm.c",0x62,"get_genm_itav");
        ERR_set_error(0x3a,0xc0,"with infoType %s",param_4);
      }
      goto LAB_001001f8;
    }
    uVar4 = OPENSSL_sk_num(lVar3);
    iVar1 = (int)uVar4;
    if (iVar1 < 1) {
      ERR_new();
      ERR_set_debug("crypto/cmp/cmp_genm.c",0x68,"get_genm_itav");
      ERR_set_error(0x3a,0xc1,
                    "response on genm requesting infoType %s does not include suitable value",
                    param_4);
      OPENSSL_sk_free(lVar3);
      goto LAB_001001f8;
    }
    if (iVar1 != 1) {
      ossl_cmp_print_log(4,param_1,"get_genm_itav","crypto/cmp/cmp_genm.c",0x6f,&_LC4,
                         "response on genm contains %d ITAVs; will use the first ITAV with infoType id-it-%s"
                         ,uVar4,param_4);
    }
    iVar6 = 0;
    do {
      uVar4 = OPENSSL_sk_shift(lVar3);
      o = (ASN1_OBJECT *)OSSL_CMP_ITAV_get0_type(uVar4);
      local_b0[0] = '\0';
      local_b0[1] = '\0';
      local_b0[2] = '\0';
      local_b0[3] = '\0';
      local_b0[4] = '\0';
      local_b0[5] = '\0';
      local_b0[6] = '\0';
      local_b0[7] = '\0';
      local_b8 = 0x2720657079546f66;
      local_c8 = __LC9;
      uStack_c0 = _UNK_00101468;
      local_a8 = (undefined1  [16])0x0;
      local_98 = (undefined1  [16])0x0;
      local_88 = (undefined1  [16])0x0;
      local_78 = (undefined1  [16])0x0;
      local_68 = (undefined1  [16])0x0;
      local_58 = (undefined1  [16])0x0;
      iVar2 = OBJ_obj2nid(o);
      if (iVar2 == param_3) {
        iVar6 = iVar6 + 1;
        if (iVar6 < iVar1) {
          do {
            iVar6 = iVar6 + 1;
            uVar5 = OPENSSL_sk_shift(lVar3);
            OSSL_CMP_ITAV_free(uVar5);
          } while (iVar1 != iVar6);
        }
        OPENSSL_sk_free(lVar3);
        goto LAB_00100200;
      }
      iVar2 = OBJ_obj2txt(local_b0,0x68,o,0);
      if (iVar2 < 0) {
        __strcat_chk(&local_c8,"<unknown>",0x80);
      }
      iVar6 = iVar6 + 1;
      ossl_cmp_print_log(4,param_1,"get_genm_itav","crypto/cmp/cmp_genm.c",0x81,&_LC4,
                         "%s\' while expecting \'id-it-%s\'",&local_c8,param_4);
      OSSL_CMP_ITAV_free(uVar4);
    } while (iVar1 != iVar6);
    param_2 = 0;
    ERR_new();
    ERR_set_debug("crypto/cmp/cmp_genm.c",0x84,"get_genm_itav");
    ERR_set_error(0x3a,0xc1,"could not find any ITAV for %s",param_4);
  }
  OPENSSL_sk_free(lVar3);
  OSSL_CMP_ITAV_free(param_2);
LAB_001001f8:
  uVar4 = 0;
LAB_00100200:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
verify_ss_cert_trans(undefined8 param_1,X509 *param_2,long param_3,X509 *param_4,undefined8 param_5)

{
  stack_st_X509 *chain;
  int iVar1;
  X509_STORE *ctx;
  X509_VERIFY_PARAM *pm;
  undefined8 uVar2;
  undefined8 uVar3;
  X509_STORE_CTX *ctx_00;
  char *pcVar4;
  long in_FS_OFFSET;
  stack_st_X509 *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ctx = (X509_STORE *)OSSL_CMP_CTX_get0_trustedStore();
  local_48 = (stack_st_X509 *)0x0;
  if (param_2 == (X509 *)0x0) {
LAB_0010049f:
    if ((param_3 == 0) || (iVar1 = ossl_x509_add_cert_new(&local_48,param_3,1), iVar1 != 0)) {
      chain = local_48;
      uVar2 = OSSL_CMP_CTX_get0_propq(param_1);
      uVar3 = OSSL_CMP_CTX_get0_libctx(param_1);
      if ((ctx == (X509_STORE *)0x0) || (param_4 == (X509 *)0x0)) {
        ERR_new();
        ERR_set_debug("crypto/cmp/cmp_genm.c",0xe9,"verify_ss_cert");
        ERR_set_error(0x3a,0xc0102,0);
LAB_00100523:
        ERR_new();
        ERR_set_debug("crypto/cmp/cmp_genm.c",0x113,"verify_ss_cert_trans");
        pcVar4 = "with given certificate as trust anchor";
        if (param_2 == (X509 *)0x0) {
          pcVar4 = "using trust store";
        }
        ERR_set_error(0x3a,0xc3,"failed to validate %s certificate received in genp %s",param_5,
                      pcVar4);
        goto LAB_0010056d;
      }
      ctx_00 = (X509_STORE_CTX *)X509_STORE_CTX_new_ex(uVar3,uVar2);
      if (ctx_00 == (X509_STORE_CTX *)0x0) {
        X509_STORE_CTX_free((X509_STORE_CTX *)0x0);
        goto LAB_00100523;
      }
      iVar1 = X509_STORE_CTX_init(ctx_00,ctx,param_4,chain);
      if (iVar1 == 0) {
        X509_STORE_CTX_free(ctx_00);
        goto LAB_00100523;
      }
      X509_STORE_CTX_set_verify_cb(ctx_00,selfsigned_verify_cb);
      iVar1 = X509_verify_cert(ctx_00);
      X509_STORE_CTX_free(ctx_00);
      if (iVar1 < 1) goto LAB_00100523;
      uVar2 = 1;
    }
    else {
LAB_0010056d:
      uVar2 = 0;
    }
    OPENSSL_sk_pop_free(local_48,X509_free);
    if (param_2 == (X509 *)0x0) goto LAB_00100462;
  }
  else {
    uVar2 = 0;
    pm = (X509_VERIFY_PARAM *)X509_STORE_get0_param(ctx);
    ctx = X509_STORE_new();
    if (ctx == (X509_STORE *)0x0) goto LAB_00100462;
    iVar1 = X509_STORE_set1_param(ctx,pm);
    if ((iVar1 != 0) && (iVar1 = X509_STORE_add_cert(ctx,param_2), iVar1 != 0)) goto LAB_0010049f;
    uVar2 = 0;
    OPENSSL_sk_pop_free(local_48,X509_free);
  }
  X509_STORE_free(ctx);
LAB_00100462:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



ulong selfsigned_verify_cb(uint param_1,X509_STORE_CTX *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  
  if (param_1 == 0) {
    uVar1 = X509_STORE_CTX_get_error_depth(param_2);
    uVar5 = (ulong)uVar1;
    if ((uVar1 == 0) && (iVar2 = X509_STORE_CTX_get_error(param_2), iVar2 == 0x12)) {
      uVar6 = X509_STORE_CTX_get0_chain(param_2);
      uVar7 = X509_STORE_CTX_get0_untrusted(param_2);
      UNRECOVERED_JUMPTABLE = (code *)X509_STORE_CTX_get_check_issued(param_2);
      uVar8 = OPENSSL_sk_value(uVar6,0);
      for (iVar2 = 0; iVar3 = OPENSSL_sk_num(uVar7), iVar2 < iVar3; iVar2 = iVar2 + 1) {
        uVar8 = OPENSSL_sk_value(uVar7,iVar2);
        uVar9 = X509_add_cert(uVar6,uVar8,1);
        if ((int)uVar9 == 0) {
          return uVar9;
        }
      }
      iVar2 = 0;
      uVar7 = X509_STORE_CTX_get0_store(param_2);
      uVar7 = X509_STORE_get1_all_certs(uVar7);
      do {
        iVar3 = OPENSSL_sk_num(uVar7);
        if (iVar3 <= iVar2) {
LAB_00100770:
          OPENSSL_sk_pop_free(uVar7,X509_free);
          return uVar5;
        }
        uVar10 = OPENSSL_sk_value(uVar7,iVar2);
        iVar3 = (*UNRECOVERED_JUMPTABLE)(param_2,uVar8,uVar10);
        if (iVar3 != 0) {
          iVar2 = X509_add_cert(uVar6,uVar8,1);
          uVar5 = (ulong)(iVar2 != 0);
          goto LAB_00100770;
        }
        iVar2 = iVar2 + 1;
      } while( true );
    }
  }
  lVar4 = X509_STORE_CTX_get0_store(param_2);
  if ((lVar4 != 0) &&
     (UNRECOVERED_JUMPTABLE = (code *)X509_STORE_get_verify_cb(lVar4),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00100688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (*UNRECOVERED_JUMPTABLE)((ulong)param_1,param_2);
    return uVar5;
  }
  return (ulong)param_1;
}



void cert_msg_constprop_0
               (undefined4 param_1,int param_2,undefined8 param_3,X509 *param_4,undefined8 param_5)

{
  X509_NAME *a;
  char *ptr;
  undefined *puVar1;
  
  a = X509_get_subject_name(param_4);
  ptr = X509_NAME_oneline(a,(char *)0x0,0);
  puVar1 = &_LC14;
  if (param_2 == 4) {
    puVar1 = &_LC4;
  }
  ossl_cmp_print_log(param_2,param_3,"ossl_X509_check","crypto/cmp/cmp_genm.c",param_1,puVar1,
                     "certificate from \'%s\' with subject \'%s\' %s",&_LC15,ptr,param_5);
  CRYPTO_free(ptr);
  return;
}



undefined8 OSSL_CMP_get1_caCerts(undefined8 param_1,undefined8 *param_2)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char *pcVar12;
  long in_FS_OFFSET;
  bool bVar13;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  if (param_2 == (undefined8 *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/cmp/cmp_genm.c",0x94,"OSSL_CMP_get1_caCerts");
    ERR_set_error(0x3a,0x67,0);
  }
  else {
    *param_2 = 0;
    lVar7 = OSSL_CMP_ITAV_new_caCerts(0);
    if (lVar7 != 0) {
      lVar7 = get_genm_itav(param_1,lVar7,0x4c7,"caCerts");
      if (lVar7 != 0) {
        iVar3 = OSSL_CMP_ITAV_get0_caCerts(lVar7,&local_48);
        if (iVar3 == 0) {
LAB_00100aa0:
          uVar9 = 0;
        }
        else {
          if (local_48 != 0) {
            lVar8 = OSSL_CMP_CTX_get0_trustedStore(param_1);
            bVar13 = true;
            if (lVar8 != 0) {
              lVar8 = X509_STORE_get0_param();
              bVar13 = lVar8 == 0;
            }
            lVar2 = local_48;
            iVar3 = 0;
            bVar1 = true;
            while( true ) {
              iVar4 = OPENSSL_sk_num(lVar2);
              if (iVar4 <= iVar3) break;
              uVar9 = OPENSSL_sk_value(lVar2,iVar3);
              uVar5 = X509_get_extension_flags(uVar9);
              uVar10 = X509_get0_notAfter(uVar9);
              uVar11 = X509_get0_notBefore(uVar9);
              iVar4 = X509_cmp_timeframe(lVar8,uVar11,uVar10);
              if (iVar4 == 0) {
                if ((uVar5 & 0x50) == 0) {
LAB_001009af:
                  cert_msg_constprop_0(0x34,4 - (uint)!bVar13,param_1,uVar9,"is not a CA cert");
                  goto LAB_0010094d;
                }
              }
              else {
                pcVar12 = "has expired";
                if (iVar4 < 1) {
                  pcVar12 = "not yet valid";
                }
                cert_msg_constprop_0(0x2e,4 - (uint)!bVar13,param_1,uVar9,pcVar12);
                if ((uVar5 & 0x50) == 0) goto LAB_001009af;
LAB_0010094d:
                bVar1 = false;
              }
              iVar3 = iVar3 + 1;
            }
            if (bVar1) {
              uVar6 = OPENSSL_sk_num(local_48);
              uVar9 = OPENSSL_sk_new_reserve(0,uVar6);
              *param_2 = uVar9;
              iVar3 = X509_add_certs(uVar9,local_48,5);
              if (iVar3 != 0) goto LAB_00100a6f;
              OPENSSL_sk_pop_free(*param_2,X509_free);
              *param_2 = 0;
            }
            goto LAB_00100aa0;
          }
LAB_00100a6f:
          uVar9 = 1;
        }
        OSSL_CMP_ITAV_free(lVar7);
        goto LAB_00100a02;
      }
    }
  }
  uVar9 = 0;
LAB_00100a02:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4
OSSL_CMP_get1_rootCaKeyUpdate
          (undefined8 param_1,X509 *param_2,long *param_3,long *param_4,long *param_5)

{
  int iVar1;
  long lVar2;
  X509 *a;
  undefined4 uVar3;
  long lVar4;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == (long *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/cmp/cmp_genm.c",0x128,"OSSL_CMP_get1_rootCaKeyUpdate");
    ERR_set_error(0x3a,0xc0102,0);
  }
  else {
    *param_3 = 0;
    lVar2 = OSSL_CMP_ITAV_new_rootCaCert(param_2);
    if (lVar2 != 0) {
      lVar2 = get_genm_itav(param_1,lVar2,0x4c8,"rootCaKeyUpdate");
      if (lVar2 != 0) {
        iVar1 = OSSL_CMP_ITAV_get0_rootCaKeyUpdate(lVar2,param_3,&local_50);
        if (iVar1 == 0) {
LAB_00100cb0:
          uVar3 = 0;
          a = (X509 *)0x0;
        }
        else {
          a = (X509 *)*param_3;
          uVar3 = 1;
          if (a != (X509 *)0x0) {
            a = X509_dup(param_2);
            if ((a == (X509 *)0x0) && (param_2 != (X509 *)0x0)) goto LAB_00100cb0;
            iVar1 = verify_ss_cert_trans(param_1,a,local_50,*param_3,"newWithNew");
            if (iVar1 == 0) {
              ERR_new();
              ERR_set_debug("crypto/cmp/cmp_genm.c",0x13f,"OSSL_CMP_get1_rootCaKeyUpdate");
              ERR_set_error(0x3a,0xc3,0);
              uVar3 = 0;
              goto LAB_00100c30;
            }
            lVar4 = *param_3;
            if ((param_2 != (X509 *)0x0) && (local_48 != 0)) {
              iVar1 = verify_ss_cert_trans(param_1,lVar4,local_48,a,"oldWithOld");
              if (iVar1 == 0) {
                ERR_new();
                ERR_set_debug("crypto/cmp/cmp_genm.c",0x145,"OSSL_CMP_get1_rootCaKeyUpdate");
                ERR_set_error(0x3a,0xc3,0);
                uVar3 = 0;
                goto LAB_00100c30;
              }
              lVar4 = *param_3;
            }
            iVar1 = X509_up_ref(lVar4);
            if (iVar1 != 0) {
              if (param_4 == (long *)0x0) {
LAB_00100be7:
                if (param_5 != (long *)0x0) {
                  *param_5 = local_48;
                  if (local_48 != 0) {
                    iVar1 = X509_up_ref();
                    if (iVar1 == 0) {
                      if (param_4 != (long *)0x0) {
                        X509_free((X509 *)*param_4);
                      }
                      goto LAB_00100c24;
                    }
                  }
                }
                uVar3 = 1;
                goto LAB_00100c30;
              }
              *param_4 = local_50;
              if (local_50 == 0) goto LAB_00100be7;
              iVar1 = X509_up_ref();
              if (iVar1 != 0) goto LAB_00100be7;
LAB_00100c24:
              X509_free((X509 *)*param_3);
            }
            uVar3 = 0;
          }
        }
LAB_00100c30:
        OSSL_CMP_ITAV_free(lVar2);
        X509_free(a);
        goto LAB_00100c82;
      }
    }
  }
  uVar3 = 0;
LAB_00100c82:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int OSSL_CMP_get1_crlUpdate(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  if (param_4 == (long *)0x0) {
    ERR_new();
    iVar1 = 0;
    ERR_set_debug("crypto/cmp/cmp_genm.c",0x169,"OSSL_CMP_get1_crlUpdate");
    ERR_set_error(0x3a,0x67,0);
    goto LAB_00100ea0;
  }
  *param_4 = 0;
  lVar4 = OSSL_CMP_CRLSTATUS_create(param_3,param_2,1);
  if (lVar4 == 0) {
    ERR_new();
    lVar6 = 0;
    lVar5 = 0;
    iVar1 = 0;
    ERR_set_debug("crypto/cmp/cmp_genm.c",0x16f,"OSSL_CMP_get1_crlUpdate");
    ERR_set_error(0x3a,0xc6,0);
  }
  else {
    lVar5 = OPENSSL_sk_new_reserve(0,1);
    if (lVar5 == 0) {
      ERR_new();
      lVar6 = 0;
      iVar1 = 0;
      ERR_set_debug("crypto/cmp/cmp_genm.c",0x173,"OSSL_CMP_get1_crlUpdate");
      ERR_set_error(0x3a,0xc6,0);
    }
    else {
      iVar1 = 0;
      OPENSSL_sk_push(lVar5,lVar4);
      lVar6 = OSSL_CMP_ITAV_new0_crlStatusList(lVar5);
      if (lVar6 != 0) {
        lVar6 = get_genm_itav(param_1,lVar6,0x4e9,&_LC24);
        if (lVar6 != 0) {
          iVar1 = OSSL_CMP_ITAV_get0_crls(lVar6,&local_48);
          if (iVar1 != 0) {
            if (local_48 == 0) {
              lVar5 = 0;
              iVar1 = 1;
              lVar4 = 0;
            }
            else {
              iVar1 = OPENSSL_sk_num(local_48);
              if (iVar1 == 1) {
                lVar4 = OPENSSL_sk_value(local_48,0);
                *param_4 = lVar4;
                if (lVar4 != 0) {
                  iVar3 = X509_CRL_up_ref(lVar4);
                  iVar1 = 1;
                  if (iVar3 != 0) goto LAB_00100ed0;
                }
                *param_4 = 0;
              }
              else {
                ERR_new();
                ERR_set_debug("crypto/cmp/cmp_genm.c",0x188,"OSSL_CMP_get1_crlUpdate");
                uVar2 = OPENSSL_sk_num(local_48);
                ERR_set_error(0x3a,0xc1,"Unexpected number of CRLs in genp: %d",uVar2);
              }
              iVar1 = 0;
              lVar5 = 0;
              lVar4 = 0;
            }
            goto LAB_00100e88;
          }
        }
LAB_00100ed0:
        lVar5 = 0;
        lVar4 = 0;
      }
    }
  }
LAB_00100e88:
  OSSL_CMP_CRLSTATUS_free(lVar4);
  OPENSSL_sk_free(lVar5);
  OSSL_CMP_ITAV_free(lVar6);
LAB_00100ea0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool OSSL_CMP_get1_certReqTemplate(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  long lVar2;
  
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = 0;
  }
  if (param_2 == (undefined8 *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/cmp/cmp_genm.c",0x1a4,"OSSL_CMP_get1_certReqTemplate");
    ERR_set_error(0x3a,0x67,0);
  }
  else {
    *param_2 = 0;
    lVar2 = OSSL_CMP_ITAV_new0_certReqTemplate(0,0);
    if (lVar2 == 0) {
      ERR_new();
      ERR_set_debug("crypto/cmp/cmp_genm.c",0x1aa,"OSSL_CMP_get1_certReqTemplate");
      ERR_set_error(0x3a,0xc5,0);
    }
    else {
      lVar2 = get_genm_itav(param_1,lVar2,0x4c9,"certReqTemplate");
      if (lVar2 != 0) {
        iVar1 = OSSL_CMP_ITAV_get1_certReqTemplate(lVar2,param_2,param_3);
        OSSL_CMP_ITAV_free(lVar2);
        return iVar1 != 0;
      }
    }
  }
  return false;
}


