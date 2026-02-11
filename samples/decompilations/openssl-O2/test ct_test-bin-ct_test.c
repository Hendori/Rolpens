
ulong test_ctlog_from_base64(void)

{
  int iVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined4 local_2f;
  undefined1 local_2b;
  undefined4 local_2a;
  undefined1 local_26;
  undefined4 local_25;
  undefined1 local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  local_2f = 0x4030201;
  local_2b = 0;
  local_2a = 0x3d3d3d3d;
  local_26 = 0;
  local_25 = 0x656d616e;
  local_21 = 0;
  iVar1 = CTLOG_new_from_base64(&local_38,&local_2f,&local_25);
  uVar2 = test_true("test/ct_test.c",0x1fb,"!CTLOG_new_from_base64(&ctlogp, notb64, name)",
                    iVar1 == 0);
  if ((int)uVar2 != 0) {
    iVar1 = CTLOG_new_from_base64(&local_38,&local_2a,&local_25);
    iVar1 = test_true("test/ct_test.c",0x1fc,"!CTLOG_new_from_base64(&ctlogp, pad, name)",iVar1 == 0
                     );
    uVar2 = (ulong)(iVar1 != 0);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_default_ct_policy_eval_ctx_time_is_now(void)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  time_t __time1;
  double dVar5;
  
  uVar3 = CT_POLICY_EVAL_CTX_new();
  uVar4 = CT_POLICY_EVAL_CTX_get_time();
  __time1 = time((time_t *)0x0);
  dVar5 = difftime(__time1,uVar4 / 1000);
  iVar1 = (int)dVar5;
  iVar2 = -iVar1;
  if (0 < iVar1) {
    iVar2 = iVar1;
  }
  iVar2 = test_time_t_le("test/ct_test.c",0x1e9,"abs((int)difftime(time(NULL), default_time))",
                         "time_tolerance",(long)iVar2,600);
  CT_POLICY_EVAL_CTX_free(uVar3);
  return iVar2 != 0;
}



undefined8 * set_up(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *ptr;
  undefined8 uVar3;
  
  ptr = (undefined8 *)CRYPTO_zalloc(0x68,"test/ct_test.c",0x40);
  iVar1 = test_ptr("test/ct_test.c",0x40,"fixture = OPENSSL_zalloc(sizeof(*fixture))",ptr);
  if (iVar1 == 0) {
    if (ptr == (undefined8 *)0x0) goto LAB_00100239;
  }
  else {
    *ptr = param_1;
    ptr[1] = 0x16ff35318f8;
    uVar3 = CTLOG_STORE_new();
    ptr[2] = uVar3;
    iVar1 = test_ptr("test/ct_test.c",0x44,"fixture->ctlog_store = CTLOG_STORE_new()",uVar3);
    if (iVar1 != 0) {
      uVar2 = CTLOG_STORE_load_default_file(ptr[2]);
      iVar1 = test_int_eq("test/ct_test.c",0x45,
                          "CTLOG_STORE_load_default_file(fixture->ctlog_store)",&_LC7,uVar2,1);
      if (iVar1 != 0) {
        return ptr;
      }
    }
  }
  CTLOG_STORE_free(ptr[2]);
LAB_00100239:
  CRYPTO_free(ptr);
  test_error("test/ct_test.c",0x4e,"Failed to setup");
  return (undefined8 *)0x0;
}



X509 * load_pem_cert(void)

{
  char *filename;
  BIO *bp;
  X509 *pXVar1;
  
  pXVar1 = (X509 *)0x0;
  filename = (char *)test_mk_file_path();
  if (filename != (char *)0x0) {
    bp = BIO_new_file(filename,"r");
    if (bp != (BIO *)0x0) {
      pXVar1 = PEM_read_bio_X509(bp,(X509 **)0x0,(undefined1 *)0x0,(void *)0x0);
    }
    BIO_free(bp);
  }
  CRYPTO_free(filename);
  return pXVar1;
}



undefined8 assert_validity(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = SCT_LIST_validate(param_2,param_3);
  iVar2 = test_int_ge("test/ct_test.c",0xbe,"SCT_LIST_validate(scts, policy_ctx)",&_LC11,uVar1,0);
  if (iVar2 != 0) {
    iVar2 = 0;
    iVar6 = 0;
    iVar5 = 0;
    while( true ) {
      iVar3 = OPENSSL_sk_num(param_2);
      if (iVar3 <= iVar2) break;
      uVar4 = OPENSSL_sk_value(param_2,iVar2);
      iVar3 = SCT_get_validation_status(uVar4);
      if (iVar3 == 2) {
        iVar6 = iVar6 + 1;
      }
      else {
        iVar5 = iVar5 + (uint)(iVar3 == 3);
      }
      iVar2 = iVar2 + 1;
    }
    iVar2 = test_int_eq("test/ct_test.c",0xd4,"valid_sct_count","fixture->expected_valid_sct_count",
                        iVar6,*(undefined4 *)(param_1 + 0x34));
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = OPENSSL_sk_num(param_2);
    test_info("test/ct_test.c",0xd8,"%d SCTs failed, %d SCTs unverified",iVar5,
              (iVar2 - iVar5) - iVar6);
  }
  return 0;
}



int execute_cert_test(long param_1)

{
  void *pvVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  char *filename;
  BIO *pBVar6;
  X509 *x;
  undefined8 uVar7;
  X509 *a;
  X509_EXTENSION *ext;
  BIO_METHOD *pBVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  void *local_2008;
  void *local_2000;
  long local_1ff8;
  undefined8 local_1ff0;
  undefined1 local_1fe8 [8104];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_2008 = (void *)0x0;
  local_2000 = (void *)0x0;
  uVar5 = CT_POLICY_EVAL_CTX_new();
  if (*(long *)(param_1 + 0x58) != 0) {
    filename = (char *)test_mk_file_path(*(undefined8 *)(param_1 + 0x50));
    if (filename == (char *)0x0) {
      uVar9 = 0xffffffffffffffff;
    }
    else {
      uVar9 = 0xffffffffffffffff;
      pBVar6 = BIO_new_file(filename,"r");
      if (pBVar6 != (BIO *)0x0) {
        iVar2 = BIO_read(pBVar6,local_1fe8,0x1f9f);
        uVar9 = (ulong)iVar2;
      }
      BIO_free(pBVar6);
    }
    CRYPTO_free(filename);
    iVar2 = test_int_ge("test/ct_test.c",0xf1,"sct_text_len",&_LC11,uVar9 & 0xffffffff,0);
    if (iVar2 == 0) {
      a = (X509 *)0x0;
      x = (X509 *)0x0;
      iVar2 = 0;
      goto LAB_00100553;
    }
    local_1fe8[uVar9] = 0;
  }
  CT_POLICY_EVAL_CTX_set_shared_CTLOG_STORE(uVar5,*(undefined8 *)(param_1 + 0x10));
  CT_POLICY_EVAL_CTX_set_time(uVar5,*(undefined8 *)(param_1 + 8));
  if (*(long *)(param_1 + 0x20) == 0) {
    a = (X509 *)0x0;
    x = (X509 *)0x0;
LAB_001005c3:
    if (*(long *)(param_1 + 0x38) == 0) {
LAB_00100895:
      iVar2 = 1;
      goto LAB_00100553;
    }
    local_1ff8 = *(long *)(param_1 + 0x38);
    uVar7 = o2i_SCT_LIST(&local_2008,&local_1ff8,*(undefined8 *)(param_1 + 0x40));
    iVar2 = test_ptr("test/ct_test.c",0x12f,"o2i_SCT_LIST(&scts, &p, fixture->tls_sct_list_len)",
                     uVar7);
    if ((iVar2 != 0) &&
       (((*(int *)(param_1 + 0x60) == 0 || (x == (X509 *)0x0)) ||
        (iVar2 = assert_validity(param_1,local_2008,uVar5), iVar2 != 0)))) {
      pvVar1 = local_2008;
      if (*(long *)(param_1 + 0x58) == 0) {
LAB_00100854:
        iVar2 = i2o_SCT_LIST(local_2008,&local_2000);
        iVar2 = test_mem_eq("test/ct_test.c",0x13d,"fixture->tls_sct_list","tls_sct_list",
                            *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                            local_2000,(long)iVar2);
        if (iVar2 != 0) goto LAB_00100895;
      }
      else {
        local_1ff0 = 0;
        pBVar8 = BIO_s_mem();
        pBVar6 = BIO_new(pBVar8);
        iVar2 = test_ptr("test/ct_test.c",0x85,"text_buffer = BIO_new(BIO_s_mem())",pBVar6);
        if (iVar2 != 0) {
          SCT_LIST_print(pvVar1,pBVar6,0,&_LC22,0);
          iVar2 = BIO_write(pBVar6,&DAT_00101860,1);
          iVar2 = test_true("test/ct_test.c",0x8b,"BIO_write(text_buffer, \"\\0\", 1)",iVar2 != 0);
          if (iVar2 != 0) {
            BIO_ctrl(pBVar6,3,0,&local_1ff0);
            iVar2 = test_str_eq("test/ct_test.c",0x8f,"actual_output","expected_output",local_1ff0,
                                local_1fe8);
            if (iVar2 != 0) {
              BIO_free(pBVar6);
              goto LAB_00100854;
            }
          }
        }
LAB_00100666:
        BIO_free(pBVar6);
      }
    }
  }
  else {
    a = (X509 *)0x0;
    x = (X509 *)load_pem_cert(*(undefined8 *)(param_1 + 0x18),*(long *)(param_1 + 0x20));
    iVar2 = test_ptr("test/ct_test.c",0x100,
                     "cert = load_pem_cert(fixture->certs_dir, fixture->certificate_file)",x);
    if (iVar2 == 0) goto LAB_00100553;
    CT_POLICY_EVAL_CTX_set1_cert(uVar5,x);
    a = *(X509 **)(param_1 + 0x28);
    if (a != (X509 *)0x0) {
      a = (X509 *)load_pem_cert(*(undefined8 *)(param_1 + 0x18),a);
      iVar2 = test_ptr("test/ct_test.c",0x107,
                       "issuer = load_pem_cert(fixture->certs_dir, fixture->issuer_file)",a);
      if (iVar2 == 0) goto LAB_00100553;
      CT_POLICY_EVAL_CTX_set1_issuer(uVar5,a);
    }
    iVar2 = X509_get_ext_by_NID(x,0x3b7,-1);
    ext = X509_get_ext(x,iVar2);
    if (*(int *)(param_1 + 0x30) < 1) {
      iVar2 = test_ptr_null("test/ct_test.c",0x127,"sct_extension",ext);
joined_r0x001008ba:
      if (iVar2 != 0) goto LAB_001005c3;
    }
    else {
      iVar2 = test_ptr("test/ct_test.c",0x111,"sct_extension",ext);
      if (iVar2 != 0) {
        if (*(long *)(param_1 + 0x58) == 0) {
LAB_001009b0:
          local_2008 = X509V3_EXT_d2i(ext);
          for (iVar2 = 0; iVar4 = OPENSSL_sk_num(local_2008), iVar2 < iVar4; iVar2 = iVar2 + 1) {
            uVar7 = OPENSSL_sk_value(local_2008,iVar2);
            uVar3 = SCT_get_source(uVar7);
            iVar4 = test_int_eq("test/ct_test.c",0x11d,"SCT_get_source(sct_i)",
                                "SCT_SOURCE_X509V3_EXTENSION",uVar3,2);
            if (iVar4 == 0) goto LAB_0010066b;
          }
          if (*(int *)(param_1 + 0x60) == 0) goto LAB_001005c3;
          iVar2 = assert_validity(param_1,local_2008,uVar5);
          goto joined_r0x001008ba;
        }
        local_1ff0 = 0;
        pBVar8 = BIO_s_mem();
        pBVar6 = BIO_new(pBVar8);
        iVar2 = test_ptr("test/ct_test.c",0x9f,"text_buffer = BIO_new(BIO_s_mem())");
        if (iVar2 != 0) {
          iVar2 = X509V3_EXT_print(pBVar6,ext,0,0);
          iVar2 = test_true("test/ct_test.c",0xa0,
                            "X509V3_EXT_print(text_buffer, extension, X509V3_EXT_DEFAULT, 0)",
                            iVar2 != 0);
          if (iVar2 == 0) {
            BIO_free(pBVar6);
            iVar2 = 0;
            goto LAB_00100553;
          }
          iVar2 = BIO_write(pBVar6,&_LC22,1);
          iVar2 = test_true("test/ct_test.c",0xa5,"BIO_write(text_buffer, \"\\n\", 1)",iVar2 != 0);
          if (iVar2 != 0) {
            iVar2 = BIO_write(pBVar6,&DAT_00101860,1);
            iVar2 = test_true("test/ct_test.c",0xa9,"BIO_write(text_buffer, \"\\0\", 1)",iVar2 != 0)
            ;
            if (iVar2 != 0) {
              BIO_ctrl(pBVar6,3,0,&local_1ff0);
              iVar2 = test_str_eq("test/ct_test.c",0xad,"actual_output","expected_output",local_1ff0
                                  ,local_1fe8);
              if (iVar2 == 0) {
                BIO_free(pBVar6);
                goto LAB_0010066b;
              }
              BIO_free(pBVar6);
              goto LAB_001009b0;
            }
          }
        }
        goto LAB_00100666;
      }
    }
  }
LAB_0010066b:
  iVar2 = 0;
LAB_00100553:
  X509_free(x);
  X509_free(a);
  SCT_LIST_free(local_2008);
  SCT_free(0);
  CT_POLICY_EVAL_CTX_free(uVar5);
  CRYPTO_free(local_2000);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 test_no_scts_in_certificate(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  void *ptr;
  
  uVar2 = 0;
  ptr = (void *)set_up("test_no_scts_in_certificate");
  uVar1 = certs_dir;
  if (ptr != (void *)0x0) {
    *(undefined4 *)((long)ptr + 0x30) = 0;
    *(undefined8 *)((long)ptr + 0x18) = uVar1;
    *(char **)((long)ptr + 0x20) = "leaf.pem";
    *(char **)((long)ptr + 0x28) = "subinterCA.pem";
    uVar2 = execute_cert_test(ptr);
    CTLOG_STORE_free(*(undefined8 *)((long)ptr + 0x10));
    SCT_LIST_free(*(undefined8 *)((long)ptr + 0x48));
    CRYPTO_free(ptr);
  }
  return uVar2;
}



undefined4 test_one_sct_in_certificate(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  void *ptr;
  
  uVar2 = 0;
  ptr = (void *)set_up("test_one_sct_in_certificate");
  uVar1 = certs_dir;
  if (ptr != (void *)0x0) {
    *(char **)((long)ptr + 0x28) = "embeddedSCTs1_issuer.pem";
    *(undefined8 *)((long)ptr + 0x18) = uVar1;
    *(undefined8 *)((long)ptr + 0x50) = uVar1;
    *(char **)((long)ptr + 0x20) = "embeddedSCTs1.pem";
    *(undefined4 *)((long)ptr + 0x30) = 1;
    *(char **)((long)ptr + 0x58) = "embeddedSCTs1.sct";
    uVar2 = execute_cert_test(ptr);
    CTLOG_STORE_free(*(undefined8 *)((long)ptr + 0x10));
    SCT_LIST_free(*(undefined8 *)((long)ptr + 0x48));
    CRYPTO_free(ptr);
  }
  return uVar2;
}



undefined4 test_multiple_scts_in_certificate(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  void *ptr;
  
  uVar2 = 0;
  ptr = (void *)set_up("test_multiple_scts_in_certificate");
  uVar1 = certs_dir;
  if (ptr != (void *)0x0) {
    *(char **)((long)ptr + 0x28) = "embeddedSCTs3_issuer.pem";
    *(undefined8 *)((long)ptr + 0x18) = uVar1;
    *(undefined8 *)((long)ptr + 0x50) = uVar1;
    *(char **)((long)ptr + 0x20) = "embeddedSCTs3.pem";
    *(undefined4 *)((long)ptr + 0x30) = 3;
    *(char **)((long)ptr + 0x58) = "embeddedSCTs3.sct";
    uVar2 = execute_cert_test(ptr);
    CTLOG_STORE_free(*(undefined8 *)((long)ptr + 0x10));
    SCT_LIST_free(*(undefined8 *)((long)ptr + 0x48));
    CRYPTO_free(ptr);
  }
  return uVar2;
}



undefined4 test_verify_one_sct(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  void *ptr;
  
  uVar2 = 0;
  ptr = (void *)set_up("test_verify_one_sct");
  uVar1 = certs_dir;
  if (ptr != (void *)0x0) {
    *(undefined4 *)((long)ptr + 0x60) = 1;
    *(undefined8 *)((long)ptr + 0x18) = uVar1;
    *(char **)((long)ptr + 0x20) = "embeddedSCTs1.pem";
    *(char **)((long)ptr + 0x28) = "embeddedSCTs1_issuer.pem";
    *(undefined8 *)((long)ptr + 0x30) = _LC41;
    uVar2 = execute_cert_test(ptr);
    CTLOG_STORE_free(*(undefined8 *)((long)ptr + 0x10));
    SCT_LIST_free(*(undefined8 *)((long)ptr + 0x48));
    CRYPTO_free(ptr);
  }
  return uVar2;
}



undefined4 test_verify_multiple_scts(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  void *ptr;
  
  uVar2 = 0;
  ptr = (void *)set_up("test_verify_multiple_scts");
  uVar1 = certs_dir;
  if (ptr != (void *)0x0) {
    *(undefined4 *)((long)ptr + 0x60) = 1;
    *(undefined8 *)((long)ptr + 0x18) = uVar1;
    *(char **)((long)ptr + 0x20) = "embeddedSCTs3.pem";
    *(char **)((long)ptr + 0x28) = "embeddedSCTs3_issuer.pem";
    *(undefined8 *)((long)ptr + 0x30) = _LC42;
    uVar2 = execute_cert_test(ptr);
    CTLOG_STORE_free(*(undefined8 *)((long)ptr + 0x10));
    SCT_LIST_free(*(undefined8 *)((long)ptr + 0x48));
    CRYPTO_free(ptr);
  }
  return uVar2;
}



undefined4 test_verify_fails_for_future_sct(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  void *ptr;
  
  uVar2 = 0;
  ptr = (void *)set_up("test_verify_fails_for_future_sct");
  if (ptr != (void *)0x0) {
    *(undefined8 *)((long)ptr + 8) = 0x13dd5fd9a80;
    uVar1 = certs_dir;
    *(undefined8 *)((long)ptr + 0x30) = 1;
    *(undefined8 *)((long)ptr + 0x18) = uVar1;
    *(char **)((long)ptr + 0x20) = "embeddedSCTs1.pem";
    *(char **)((long)ptr + 0x28) = "embeddedSCTs1_issuer.pem";
    *(undefined4 *)((long)ptr + 0x60) = 1;
    uVar2 = execute_cert_test(ptr);
    CTLOG_STORE_free(*(undefined8 *)((long)ptr + 0x10));
    SCT_LIST_free(*(undefined8 *)((long)ptr + 0x48));
    CRYPTO_free(ptr);
  }
  return uVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 test_decode_tls_sct(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  void *ptr;
  long in_FS_OFFSET;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined3 uStack_40;
  undefined5 uStack_3d;
  undefined3 uStack_38;
  undefined8 uStack_35;
  long local_20;
  
  uVar2 = 0;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_a8 = __LC45;
  uStack_a0 = _UNK_001019c8;
  local_98 = __LC46;
  uStack_90 = _UNK_001019d8;
  local_88 = __LC47;
  uStack_80 = _UNK_001019e8;
  local_78 = __LC48;
  uStack_70 = _UNK_001019f8;
  local_68 = __LC49;
  uStack_60 = _UNK_00101a08;
  local_58 = __LC50;
  uStack_50 = _UNK_00101a18;
  local_48 = __LC51;
  uStack_40 = (undefined3)_UNK_00101a28;
  uStack_3d = (undefined5)__LC52;
  uStack_38 = (undefined3)((ulong)__LC52 >> 0x28);
  uStack_35 = _UNK_00101a38;
  ptr = (void *)set_up("test_decode_tls_sct");
  if (ptr != (void *)0x0) {
    *(undefined8 **)((long)ptr + 0x38) = &local_a8;
    uVar1 = ct_dir;
    *(undefined8 *)((long)ptr + 0x40) = 0x7a;
    *(undefined8 *)((long)ptr + 0x50) = uVar1;
    *(char **)((long)ptr + 0x58) = "tls1.sct";
    uVar2 = execute_cert_test(ptr);
    CTLOG_STORE_free(*(undefined8 *)((long)ptr + 0x10));
    SCT_LIST_free(*(undefined8 *)((long)ptr + 0x48));
    CRYPTO_free(ptr);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 test_encode_tls_sct(void)

{
  int iVar1;
  undefined4 uVar2;
  void *ptr;
  long lVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined1 local_b9;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined5 uStack_a0;
  undefined3 uStack_9b;
  undefined5 uStack_98;
  char acStack_93 [11];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined5 uStack_30;
  undefined3 uStack_2b;
  undefined5 uStack_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_b9 = 0;
  local_b8 = __LC54;
  uStack_b0 = _UNK_00101a48;
  local_a8 = __LC55;
  uStack_a0 = (undefined5)_UNK_00101a58;
  uStack_9b = (undefined3)_LC56._0_8_;
  uStack_98 = SUB85(_LC56._0_8_,3);
  acStack_93._0_8_ = _LC56._8_8_;
  local_88 = __LC57;
  uStack_80 = _UNK_00101a78;
  local_78 = __LC58;
  uStack_70 = _UNK_00101a88;
  local_68 = __LC59;
  uStack_60 = _UNK_00101a98;
  local_58 = __LC60;
  uStack_50 = _UNK_00101aa8;
  local_48 = __LC61;
  uStack_40 = _UNK_00101ab8;
  local_38 = __LC62;
  uStack_30 = (undefined5)_UNK_00101ac8;
  uStack_2b = 0x4a325a;
  uStack_28 = 0x49386237;
  ptr = (void *)set_up("test_encode_tls_sct");
  if (ptr != (void *)0x0) {
    lVar3 = OPENSSL_sk_new_null();
    *(long *)((long)ptr + 0x48) = lVar3;
    if (lVar3 == 0) {
      CTLOG_STORE_free(*(undefined8 *)((long)ptr + 0x10));
      SCT_LIST_free(*(undefined8 *)((long)ptr + 0x48));
      CRYPTO_free(ptr);
      uVar2 = 0;
      goto LAB_0010107b;
    }
    uVar4 = SCT_new_from_base64(0,&local_b8,0,1,&local_b9,&local_88);
    iVar1 = test_ptr("test/ct_test.c",0x1ca,
                     "sct = SCT_new_from_base64(SCT_VERSION_V1, log_id, CT_LOG_ENTRY_TYPE_X509, timestamp, extensions, signature)"
                     ,uVar4);
    if (iVar1 != 0) {
      iVar1 = OPENSSL_sk_push(*(undefined8 *)((long)ptr + 0x48),uVar4);
      if (iVar1 != 0) {
        *(undefined8 *)((long)ptr + 0x50) = ct_dir;
        *(char **)((long)ptr + 0x58) = "tls1.sct";
        uVar2 = execute_cert_test(ptr);
        CTLOG_STORE_free(*(undefined8 *)((long)ptr + 0x10));
        SCT_LIST_free(*(undefined8 *)((long)ptr + 0x48));
        CRYPTO_free(ptr);
        goto LAB_0010107b;
      }
    }
    CTLOG_STORE_free(*(undefined8 *)((long)ptr + 0x10));
    SCT_LIST_free(*(undefined8 *)((long)ptr + 0x48));
    CRYPTO_free(ptr);
  }
  uVar2 = 0;
LAB_0010107b:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 setup_tests(void)

{
  ct_dir = getenv("CT_DIR");
  if (ct_dir == (char *)0x0) {
    ct_dir = "ct";
  }
  certs_dir = getenv("CERTS_DIR");
  if (certs_dir == (char *)0x0) {
    certs_dir = "certs";
  }
  add_test("test_no_scts_in_certificate",test_no_scts_in_certificate);
  add_test("test_one_sct_in_certificate",test_one_sct_in_certificate);
  add_test("test_multiple_scts_in_certificate",test_multiple_scts_in_certificate);
  add_test("test_verify_one_sct",test_verify_one_sct);
  add_test("test_verify_multiple_scts",test_verify_multiple_scts);
  add_test("test_verify_fails_for_future_sct",test_verify_fails_for_future_sct);
  add_test("test_decode_tls_sct",test_decode_tls_sct);
  add_test("test_encode_tls_sct",test_encode_tls_sct);
  add_test("test_default_ct_policy_eval_ctx_time_is_now",test_default_ct_policy_eval_ctx_time_is_now
          );
  add_test("test_ctlog_from_base64",0x100000);
  return 1;
}


