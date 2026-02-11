
bool execute_HDR_init_test(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  ASN1_OCTET_STRING *pAVar3;
  ASN1_OCTET_STRING *a;
  
  uVar1 = ossl_cmp_hdr_init(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  iVar2 = test_int_eq("test/cmp_hdr_test.c",0x1a0,"fixture->expected",
                      "ossl_cmp_hdr_init(fixture->cmp_ctx, fixture->hdr)",
                      *(undefined4 *)(param_1 + 8),uVar1);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 8) == 0) {
      return true;
    }
    uVar1 = ossl_cmp_hdr_get_pvno(*(undefined8 *)(param_1 + 0x18));
    iVar2 = test_int_eq("test/cmp_hdr_test.c",0x1a6,"ossl_cmp_hdr_get_pvno(fixture->hdr)",
                        "OSSL_CMP_PVNO",uVar1,2);
    if (iVar2 != 0) {
      pAVar3 = (ASN1_OCTET_STRING *)ossl_cmp_hdr_get0_senderNonce(*(undefined8 *)(param_1 + 0x18));
      iVar2 = ASN1_OCTET_STRING_cmp
                        (pAVar3,*(ASN1_OCTET_STRING **)(*(long *)(param_1 + 0x10) + 0x120));
      iVar2 = test_int_eq("test/cmp_hdr_test.c",0x1aa,&_LC6,
                          "ASN1_OCTET_STRING_cmp(header_nonce, fixture->cmp_ctx->senderNonce)",0,
                          iVar2);
      if (iVar2 != 0) {
        pAVar3 = (ASN1_OCTET_STRING *)
                 OSSL_CMP_HDR_get0_transactionID(*(undefined8 *)(param_1 + 0x18));
        iVar2 = ASN1_OCTET_STRING_cmp
                          (pAVar3,*(ASN1_OCTET_STRING **)(*(long *)(param_1 + 0x10) + 0x118));
        iVar2 = test_true("test/cmp_hdr_test.c",0x1ae,
                          "ASN1_OCTET_STRING_cmp(header_transactionID, fixture->cmp_ctx->transactionID) == 0"
                          ,iVar2 == 0);
        if (iVar2 != 0) {
          a = (ASN1_OCTET_STRING *)OSSL_CMP_HDR_get0_recipNonce(*(undefined8 *)(param_1 + 0x18));
          pAVar3 = *(ASN1_OCTET_STRING **)(*(long *)(param_1 + 0x10) + 0x128);
          if (pAVar3 == (ASN1_OCTET_STRING *)0x0) {
            return true;
          }
          iVar2 = test_ptr("test/cmp_hdr_test.c",0x1b5,"header_nonce",a);
          if (iVar2 != 0) {
            iVar2 = ASN1_OCTET_STRING_cmp(a,pAVar3);
            iVar2 = test_int_eq("test/cmp_hdr_test.c",0x1b6,&_LC6,
                                "ASN1_OCTET_STRING_cmp(header_nonce, ctx_nonce)",0,iVar2);
            return iVar2 != 0;
          }
        }
      }
    }
  }
  return false;
}



undefined8 * set_up(undefined8 param_1)

{
  int iVar1;
  undefined8 *ptr;
  undefined8 uVar2;
  
  ptr = (undefined8 *)CRYPTO_zalloc(0x20,"test/cmp_hdr_test.c",0x23);
  iVar1 = test_ptr("test/cmp_hdr_test.c",0x23,"fixture = OPENSSL_zalloc(sizeof(*fixture))",ptr);
  if (iVar1 != 0) {
    *ptr = param_1;
    uVar2 = OSSL_CMP_CTX_new(0,0);
    ptr[2] = uVar2;
    iVar1 = test_ptr("test/cmp_hdr_test.c",0x26,"fixture->cmp_ctx = OSSL_CMP_CTX_new(NULL, NULL)",
                     uVar2);
    if (iVar1 != 0) {
      uVar2 = OSSL_CMP_PKIHEADER_new();
      ptr[3] = uVar2;
      iVar1 = test_ptr("test/cmp_hdr_test.c",0x28,"fixture->hdr = OSSL_CMP_PKIHEADER_new()",uVar2);
      if (iVar1 != 0) {
        return ptr;
      }
    }
    OSSL_CMP_PKIHEADER_free(ptr[3]);
    OSSL_CMP_CTX_free(ptr[2]);
    CRYPTO_free(ptr);
  }
  return (undefined8 *)0x0;
}



bool test_HDR_get0_senderNonce(void)

{
  int iVar1;
  undefined4 uVar2;
  void *ptr;
  X509_NAME *name;
  ASN1_OCTET_STRING *b;
  bool bVar3;
  undefined8 uVar4;
  
  ptr = (void *)set_up("test_HDR_get0_senderNonce");
  if (ptr == (void *)0x0) {
    return false;
  }
  *(undefined4 *)((long)ptr + 8) = 1;
  name = X509_NAME_new();
  iVar1 = test_ptr("test/cmp_hdr_test.c",0x4e,"sender",name);
  if (iVar1 != 0) {
    uVar4 = 0;
    X509_NAME_add_entry_by_txt(name,"CN",0x1001,(uchar *)"A common sender name",-1,-1,0);
    uVar2 = OSSL_CMP_CTX_set1_subjectName(*(undefined8 *)((long)ptr + 0x10),name);
    iVar1 = test_int_eq("test/cmp_hdr_test.c",0x52,
                        "OSSL_CMP_CTX_set1_subjectName(fixture->cmp_ctx, sender)",&_LC16,uVar2,1);
    if (iVar1 != 0) {
      uVar2 = ossl_cmp_hdr_init(*(undefined8 *)((long)ptr + 0x10),*(undefined8 *)((long)ptr + 0x18),
                                uVar4,0x1002c1);
      iVar1 = test_int_eq("test/cmp_hdr_test.c",0x55,
                          "ossl_cmp_hdr_init(fixture->cmp_ctx, fixture->hdr)",&_LC16,uVar2,1);
      if (iVar1 != 0) {
        b = (ASN1_OCTET_STRING *)ossl_cmp_hdr_get0_senderNonce(*(undefined8 *)((long)ptr + 0x18));
        iVar1 = ASN1_OCTET_STRING_cmp
                          (*(ASN1_OCTET_STRING **)(*(long *)((long)ptr + 0x10) + 0x120),b);
        iVar1 = test_int_eq("test/cmp_hdr_test.c",0x59,
                            "ASN1_OCTET_STRING_cmp(fixture->cmp_ctx->senderNonce, sn)",&_LC6,iVar1,0
                           );
        bVar3 = iVar1 != 0;
        goto LAB_001002c7;
      }
    }
  }
  bVar3 = false;
LAB_001002c7:
  X509_NAME_free(name);
  OSSL_CMP_PKIHEADER_free(*(undefined8 *)((long)ptr + 0x18));
  OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 0x10));
  CRYPTO_free(ptr);
  return bVar3;
}



undefined4 test_HDR_init_with_ref(void)

{
  int iVar1;
  undefined4 uVar2;
  void *ptr;
  long in_FS_OFFSET;
  uchar local_2f [15];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  ptr = (void *)set_up("test_HDR_init_with_ref");
  if (ptr != (void *)0x0) {
    *(undefined4 *)((long)ptr + 8) = 1;
    iVar1 = RAND_bytes(local_2f,0xf);
    iVar1 = test_int_eq("test/cmp_hdr_test.c",0x1c4,&_LC16,"RAND_bytes(ref, sizeof(ref))",1,iVar1);
    if (iVar1 != 0) {
      iVar1 = OSSL_CMP_CTX_set1_referenceValue(*(undefined8 *)((long)ptr + 0x10),local_2f,0xf);
      iVar1 = test_true("test/cmp_hdr_test.c",0x1c5,
                        "OSSL_CMP_CTX_set1_referenceValue(fixture->cmp_ctx, ref, sizeof(ref))",
                        iVar1 != 0);
      if (iVar1 != 0) {
        uVar2 = execute_HDR_init_test(ptr);
        OSSL_CMP_PKIHEADER_free(*(undefined8 *)((long)ptr + 0x18));
        OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 0x10));
        CRYPTO_free(ptr);
        goto LAB_0010048c;
      }
    }
    OSSL_CMP_PKIHEADER_free(*(undefined8 *)((long)ptr + 0x18));
    OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 0x10));
    CRYPTO_free(ptr);
  }
  uVar2 = 0;
LAB_0010048c:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_HDR_set_and_check_implicit_confirm(void)

{
  int iVar1;
  void *ptr;
  bool bVar2;
  
  ptr = (void *)set_up("test_HDR_set_and_check_implicit_confirm");
  if (ptr == (void *)0x0) {
    return false;
  }
  iVar1 = ossl_cmp_hdr_has_implicitConfirm(*(undefined8 *)((long)ptr + 0x18));
  iVar1 = test_false("test/cmp_hdr_test.c",399,"ossl_cmp_hdr_has_implicitConfirm(fixture->hdr)",
                     iVar1 != 0);
  if (iVar1 != 0) {
    iVar1 = ossl_cmp_hdr_set_implicitConfirm(*(undefined8 *)((long)ptr + 0x18));
    iVar1 = test_true("test/cmp_hdr_test.c",400,"ossl_cmp_hdr_set_implicitConfirm(fixture->hdr)",
                      iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = ossl_cmp_hdr_has_implicitConfirm(*(undefined8 *)((long)ptr + 0x18));
      iVar1 = test_true("test/cmp_hdr_test.c",0x191,"ossl_cmp_hdr_has_implicitConfirm(fixture->hdr)"
                        ,iVar1 != 0);
      bVar2 = iVar1 != 0;
      goto LAB_00100572;
    }
  }
  bVar2 = false;
LAB_00100572:
  OSSL_CMP_PKIHEADER_free(*(undefined8 *)((long)ptr + 0x18));
  OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 0x10));
  CRYPTO_free(ptr);
  return bVar2;
}



bool test_HDR_generalInfo_push1_items(void)

{
  int iVar1;
  undefined4 uVar2;
  void *ptr;
  ASN1_INTEGER *a;
  ASN1_TYPE *pAVar3;
  ASN1_OBJECT *pAVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  bool bVar8;
  undefined8 local_68;
  char local_60 [32];
  long local_40;
  
  bVar8 = false;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ptr = (void *)set_up("test_HDR_generalInfo_push1_items");
  if (ptr == (void *)0x0) goto LAB_001006ac;
  *(undefined4 *)((long)ptr + 8) = 1;
  builtin_strncpy(local_60,"1.2.3.4",8);
  local_68 = 0;
  a = ASN1_INTEGER_new();
  pAVar3 = ASN1_TYPE_new();
  iVar1 = test_ptr("test/cmp_hdr_test.c",0x15c,"asn1int",a);
  if (iVar1 == 0) goto LAB_00100688;
  iVar1 = test_ptr("test/cmp_hdr_test.c",0x15f,&_LC24,pAVar3);
  if (iVar1 == 0) {
LAB_0010071f:
    ASN1_INTEGER_free(a);
LAB_00100688:
    bVar8 = false;
  }
  else {
    iVar1 = ASN1_INTEGER_set(a,0x58);
    iVar1 = test_true("test/cmp_hdr_test.c",0x160,"ASN1_INTEGER_set(asn1int, 88)",iVar1 != 0);
    if (iVar1 == 0) goto LAB_0010071f;
    ASN1_TYPE_set(pAVar3,2,a);
    pAVar4 = OBJ_txt2obj(local_60,1);
    lVar5 = OSSL_CMP_ITAV_create(pAVar4,pAVar3);
    iVar1 = test_ptr("test/cmp_hdr_test.c",0x166,
                     "itav = OSSL_CMP_ITAV_create(OBJ_txt2obj(oid, 1), val)",lVar5);
    if (iVar1 == 0) {
      ASN1_TYPE_free(pAVar3);
      goto LAB_00100688;
    }
    iVar1 = OSSL_CMP_ITAV_push0_stack_item(&local_68,lVar5);
    iVar1 = test_true("test/cmp_hdr_test.c",0x16a,"OSSL_CMP_ITAV_push0_stack_item(&itavs, itav)",
                      iVar1 != 0);
    if (iVar1 == 0) {
      OSSL_CMP_ITAV_free(lVar5);
      goto LAB_00100688;
    }
    uVar2 = ossl_cmp_hdr_generalInfo_push1_items(*(undefined8 *)((long)ptr + 0x18),local_68);
    iVar1 = test_int_eq("test/cmp_hdr_test.c",0x16f,
                        "ossl_cmp_hdr_generalInfo_push1_items(fixture->hdr, itavs)",&_LC16,uVar2,1);
    if (iVar1 == 0) {
LAB_001008d0:
      bVar8 = false;
    }
    else {
      uVar7 = *(undefined8 *)(*(long *)((long)ptr + 0x18) + 0x58);
      uVar6 = OPENSSL_sk_value(uVar7,0);
      pAVar4 = (ASN1_OBJECT *)OSSL_CMP_ITAV_get0_type(uVar6);
      OBJ_obj2txt(local_60 + 8,0x14,pAVar4,0);
      iVar1 = memcmp(local_60,local_60 + 8,8);
      iVar1 = test_int_eq("test/cmp_hdr_test.c",0x175,"memcmp(oid, buf, sizeof(oid))",&_LC6,iVar1,0)
      ;
      if (iVar1 == 0) goto LAB_001008d0;
      uVar7 = OPENSSL_sk_value(uVar7,0);
      pAVar3 = (ASN1_TYPE *)OSSL_CMP_ITAV_get0_value(uVar7);
      iVar1 = ASN1_TYPE_cmp(*(ASN1_TYPE **)(lVar5 + 8),pAVar3);
      iVar1 = test_int_eq("test/cmp_hdr_test.c",0x179,
                          "ASN1_TYPE_cmp(itav->infoValue.other, pushed_val)",&_LC6,iVar1,0);
      bVar8 = iVar1 != 0;
    }
    OPENSSL_sk_pop_free(local_68,OSSL_CMP_ITAV_free);
  }
  OSSL_CMP_PKIHEADER_free(*(undefined8 *)((long)ptr + 0x18));
  OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 0x10));
  CRYPTO_free(ptr);
LAB_001006ac:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_HDR_generalInfo_push0_item(void)

{
  int iVar1;
  undefined4 uVar2;
  void *ptr;
  long lVar3;
  long lVar4;
  bool bVar5;
  
  ptr = (void *)set_up("test_HDR_generalInfo_push0_item");
  if (ptr == (void *)0x0) {
    return false;
  }
  *(undefined4 *)((long)ptr + 8) = 1;
  lVar3 = OSSL_CMP_ITAV_new();
  iVar1 = test_ptr("test/cmp_hdr_test.c",0x13a,&_LC31,lVar3);
  if (iVar1 != 0) {
    uVar2 = ossl_cmp_hdr_generalInfo_push0_item(*(undefined8 *)((long)ptr + 0x18),lVar3);
    iVar1 = test_int_eq("test/cmp_hdr_test.c",0x13d,
                        "ossl_cmp_hdr_generalInfo_push0_item(fixture->hdr, itav)",&_LC16,uVar2,1);
    if (iVar1 != 0) {
      lVar4 = OPENSSL_sk_value(*(undefined8 *)(*(long *)((long)ptr + 0x18) + 0x58),0);
      iVar1 = test_true("test/cmp_hdr_test.c",0x141,
                        "itav == sk_OSSL_CMP_ITAV_value(fixture->hdr->generalInfo, 0)",
                        lVar3 == lVar4);
      bVar5 = iVar1 != 0;
      goto LAB_00100931;
    }
  }
  bVar5 = false;
LAB_00100931:
  OSSL_CMP_PKIHEADER_free(*(undefined8 *)((long)ptr + 0x18));
  OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 0x10));
  CRYPTO_free(ptr);
  return bVar5;
}



bool test_HDR_push1_freeText(void)

{
  int iVar1;
  undefined4 uVar2;
  void *ptr;
  ASN1_UTF8STRING *str;
  ASN1_STRING *b;
  bool bVar3;
  
  ptr = (void *)set_up("test_HDR_push1_freeText");
  if (ptr == (void *)0x0) {
    return false;
  }
  *(undefined4 *)((long)ptr + 8) = 1;
  str = ASN1_UTF8STRING_new();
  iVar1 = test_ptr("test/cmp_hdr_test.c",0x119,&_LC34,str);
  if ((iVar1 != 0) && (iVar1 = ASN1_STRING_set(str,"A free text",-1), iVar1 != 0)) {
    uVar2 = ossl_cmp_hdr_push1_freeText(*(undefined8 *)((long)ptr + 0x18),str);
    iVar1 = test_int_eq("test/cmp_hdr_test.c",0x11f,
                        "ossl_cmp_hdr_push1_freeText(fixture->hdr, text)",&_LC16,uVar2,1);
    if (iVar1 != 0) {
      b = (ASN1_STRING *)OPENSSL_sk_value(*(undefined8 *)(*(long *)((long)ptr + 0x18) + 0x50),0);
      iVar1 = ASN1_STRING_cmp(str,b);
      iVar1 = test_int_eq("test/cmp_hdr_test.c",0x123,"ASN1_STRING_cmp(text, pushed_text)",&_LC6,
                          iVar1,0);
      bVar3 = iVar1 != 0;
      goto LAB_00100a29;
    }
  }
  bVar3 = false;
LAB_00100a29:
  ASN1_UTF8STRING_free(str);
  OSSL_CMP_PKIHEADER_free(*(undefined8 *)((long)ptr + 0x18));
  OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 0x10));
  CRYPTO_free(ptr);
  return bVar3;
}



undefined8 test_HDR_push0_freeText(void)

{
  int iVar1;
  undefined4 uVar2;
  void *ptr;
  ASN1_UTF8STRING *str;
  ASN1_UTF8STRING *pAVar3;
  undefined8 uVar4;
  
  ptr = (void *)set_up("test_HDR_push0_freeText");
  if (ptr == (void *)0x0) {
    return 0;
  }
  *(undefined4 *)((long)ptr + 8) = 1;
  str = ASN1_UTF8STRING_new();
  iVar1 = test_ptr("test/cmp_hdr_test.c",0xf8,&_LC34,str);
  if (iVar1 != 0) {
    iVar1 = ASN1_STRING_set(str,"A free text",-1);
    if (iVar1 != 0) {
      uVar2 = ossl_cmp_hdr_push0_freeText(*(undefined8 *)((long)ptr + 0x18),str);
      iVar1 = test_int_eq("test/cmp_hdr_test.c",0xfe,
                          "ossl_cmp_hdr_push0_freeText(fixture->hdr, text)",&_LC16,uVar2,1);
      if (iVar1 != 0) {
        pAVar3 = (ASN1_UTF8STRING *)
                 OPENSSL_sk_value(*(undefined8 *)(*(long *)((long)ptr + 0x18) + 0x50),0);
        iVar1 = test_true("test/cmp_hdr_test.c",0x101,
                          "text == sk_ASN1_UTF8STRING_value(fixture->hdr->freeText, 0)",
                          str == pAVar3);
        if (iVar1 != 0) {
          uVar4 = 1;
          goto LAB_00100b61;
        }
      }
    }
    ASN1_UTF8STRING_free(str);
  }
  uVar4 = 0;
LAB_00100b61:
  OSSL_CMP_PKIHEADER_free(*(undefined8 *)((long)ptr + 0x18));
  OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 0x10));
  CRYPTO_free(ptr);
  return uVar4;
}



bool test_HDR_set1_senderKID(void)

{
  int iVar1;
  undefined4 uVar2;
  void *ptr;
  ASN1_OCTET_STRING *str;
  bool bVar3;
  
  ptr = (void *)set_up("test_HDR_set1_senderKID");
  if (ptr == (void *)0x0) {
    return false;
  }
  *(undefined4 *)((long)ptr + 8) = 1;
  str = ASN1_OCTET_STRING_new();
  iVar1 = test_ptr("test/cmp_hdr_test.c",0xdb,"senderKID",str);
  if (iVar1 != 0) {
    iVar1 = ASN1_OCTET_STRING_set(str,rand_data,0x10);
    iVar1 = test_int_eq("test/cmp_hdr_test.c",0xde,
                        "ASN1_OCTET_STRING_set(senderKID, rand_data, sizeof(rand_data))",&_LC16,
                        iVar1,1);
    if (iVar1 != 0) {
      uVar2 = ossl_cmp_hdr_set1_senderKID(*(undefined8 *)((long)ptr + 0x18),str);
      iVar1 = test_int_eq("test/cmp_hdr_test.c",0xe1,
                          "ossl_cmp_hdr_set1_senderKID(fixture->hdr, senderKID)",&_LC16,uVar2,1);
      if (iVar1 != 0) {
        iVar1 = ASN1_OCTET_STRING_cmp
                          (*(ASN1_OCTET_STRING **)(*(long *)((long)ptr + 0x18) + 0x28),str);
        iVar1 = test_int_eq("test/cmp_hdr_test.c",0xe3,
                            "ASN1_OCTET_STRING_cmp(fixture->hdr->senderKID, senderKID)",&_LC6,iVar1,
                            0);
        bVar3 = iVar1 != 0;
        goto LAB_00100c89;
      }
    }
  }
  bVar3 = false;
LAB_00100c89:
  ASN1_OCTET_STRING_free(str);
  OSSL_CMP_PKIHEADER_free(*(undefined8 *)((long)ptr + 0x18));
  OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 0x10));
  CRYPTO_free(ptr);
  return bVar3;
}



undefined4 test_HDR_update_messageTime(void)

{
  int iVar1;
  undefined4 uVar2;
  void *ptr;
  tm *ptVar3;
  time_t tVar4;
  time_t tVar5;
  long in_FS_OFFSET;
  time_t local_c0;
  tm local_b8;
  tm local_78;
  long local_40;
  
  uVar2 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ptr = (void *)set_up();
  if (ptr == (void *)0x0) goto LAB_00100e6e;
  *(undefined4 *)((long)ptr + 8) = 1;
  local_c0 = time((time_t *)0x0);
  ptVar3 = gmtime(&local_c0);
  local_78.tm_sec = ptVar3->tm_sec;
  local_78.tm_min = ptVar3->tm_min;
  local_78.tm_hour = ptVar3->tm_hour;
  local_78.tm_mday = ptVar3->tm_mday;
  local_78.tm_mon = ptVar3->tm_mon;
  local_78.tm_year = ptVar3->tm_year;
  local_78.tm_wday = ptVar3->tm_wday;
  local_78.tm_yday = ptVar3->tm_yday;
  local_78.tm_isdst = ptVar3->tm_isdst;
  local_78._36_4_ = *(undefined4 *)&ptVar3->field_0x24;
  local_78.tm_gmtoff = ptVar3->tm_gmtoff;
  local_78.tm_zone = ptVar3->tm_zone;
  tVar4 = mktime(&local_78);
  iVar1 = ossl_cmp_hdr_update_messageTime(*(undefined8 *)((long)ptr + 0x18));
  iVar1 = test_true("test/cmp_hdr_test.c",0xbe,"ossl_cmp_hdr_update_messageTime(fixture->hdr)",
                    iVar1 != 0);
  if (iVar1 == 0) {
LAB_00100e4a:
    uVar2 = 0;
  }
  else {
    iVar1 = ASN1_TIME_to_tm(*(undefined8 *)(*(long *)((long)ptr + 0x18) + 0x18),&local_b8);
    iVar1 = test_true("test/cmp_hdr_test.c",0xc0,
                      "ASN1_TIME_to_tm(fixture->hdr->messageTime, &hdrtm)",iVar1 != 0);
    if (iVar1 == 0) goto LAB_00100e4a;
    tVar5 = mktime(&local_b8);
    iVar1 = test_time_t_le("test/cmp_hdr_test.c",0xc5,"before","hdrtime",tVar4,tVar5);
    if (iVar1 == 0) goto LAB_00100e4a;
    local_c0 = time((time_t *)0x0);
    ptVar3 = gmtime(&local_c0);
    local_78.tm_sec = ptVar3->tm_sec;
    local_78.tm_min = ptVar3->tm_min;
    local_78.tm_hour = ptVar3->tm_hour;
    local_78.tm_mday = ptVar3->tm_mday;
    local_78.tm_mon = ptVar3->tm_mon;
    local_78.tm_year = ptVar3->tm_year;
    local_78.tm_wday = ptVar3->tm_wday;
    local_78.tm_yday = ptVar3->tm_yday;
    local_78.tm_isdst = ptVar3->tm_isdst;
    local_78._36_4_ = *(undefined4 *)&ptVar3->field_0x24;
    local_78.tm_gmtoff = ptVar3->tm_gmtoff;
    local_78.tm_zone = ptVar3->tm_zone;
    tVar4 = mktime(&local_78);
    uVar2 = test_time_t_le("test/cmp_hdr_test.c",0xcb,"hdrtime","after",tVar5,tVar4);
  }
  OSSL_CMP_PKIHEADER_free(*(undefined8 *)((long)ptr + 0x18));
  OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 0x10));
  CRYPTO_free(ptr);
LAB_00100e6e:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_HDR_set1_recipient(void)

{
  int iVar1;
  undefined4 uVar2;
  void *ptr;
  X509_NAME *name;
  bool bVar3;
  
  ptr = (void *)set_up("test_HDR_set1_recipient");
  if (ptr == (void *)0x0) {
    return false;
  }
  *(undefined4 *)((long)ptr + 8) = 1;
  name = X509_NAME_new();
  iVar1 = test_ptr("test/cmp_hdr_test.c",0x93,"x509name",name);
  if (iVar1 != 0) {
    X509_NAME_add_entry_by_txt(name,"CN",0x1001,(uchar *)"A common recipient name",-1,-1,0);
    uVar2 = ossl_cmp_hdr_set1_recipient(*(undefined8 *)((long)ptr + 0x18),name);
    iVar1 = test_int_eq("test/cmp_hdr_test.c",0x97,
                        "ossl_cmp_hdr_set1_recipient(fixture->hdr, x509name)",&_LC16,uVar2,1);
    if ((iVar1 != 0) &&
       (iVar1 = test_int_eq("test/cmp_hdr_test.c",0x9a,"fixture->hdr->recipient->type","GEN_DIRNAME"
                            ,**(undefined4 **)(*(long *)((long)ptr + 0x18) + 0x10),4), iVar1 != 0))
    {
      iVar1 = X509_NAME_cmp(*(X509_NAME **)(*(long *)(*(long *)((long)ptr + 0x18) + 0x10) + 8),name)
      ;
      iVar1 = test_int_eq("test/cmp_hdr_test.c",0x9d,
                          "X509_NAME_cmp(fixture->hdr->recipient->d.directoryName, x509name)",&_LC6,
                          iVar1,0);
      bVar3 = iVar1 != 0;
      goto LAB_00100fd9;
    }
  }
  bVar3 = false;
LAB_00100fd9:
  X509_NAME_free(name);
  OSSL_CMP_PKIHEADER_free(*(undefined8 *)((long)ptr + 0x18));
  OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 0x10));
  CRYPTO_free(ptr);
  return bVar3;
}



bool test_HDR_set1_sender(void)

{
  int iVar1;
  undefined4 uVar2;
  void *ptr;
  X509_NAME *name;
  bool bVar3;
  
  ptr = (void *)set_up("test_HDR_set1_sender");
  if (ptr == (void *)0x0) {
    return false;
  }
  *(undefined4 *)((long)ptr + 8) = 1;
  name = X509_NAME_new();
  iVar1 = test_ptr("test/cmp_hdr_test.c",0x71,"x509name",name);
  if (iVar1 != 0) {
    X509_NAME_add_entry_by_txt(name,"CN",0x1001,(uchar *)"A common sender name",-1,-1,0);
    uVar2 = ossl_cmp_hdr_set1_sender(*(undefined8 *)((long)ptr + 0x18),name);
    iVar1 = test_int_eq("test/cmp_hdr_test.c",0x75,
                        "ossl_cmp_hdr_set1_sender(fixture->hdr, x509name)",&_LC16,uVar2,1);
    if ((iVar1 != 0) &&
       (iVar1 = test_int_eq("test/cmp_hdr_test.c",0x78,"fixture->hdr->sender->type","GEN_DIRNAME",
                            **(undefined4 **)(*(long *)((long)ptr + 0x18) + 8),4), iVar1 != 0)) {
      iVar1 = X509_NAME_cmp(*(X509_NAME **)(*(long *)(*(long *)((long)ptr + 0x18) + 8) + 8),name);
      iVar1 = test_int_eq("test/cmp_hdr_test.c",0x7b,
                          "X509_NAME_cmp(fixture->hdr->sender->d.directoryName, x509name)",&_LC6,
                          iVar1,0);
      bVar3 = iVar1 != 0;
      goto LAB_00101159;
    }
  }
  bVar3 = false;
LAB_00101159:
  X509_NAME_free(name);
  OSSL_CMP_PKIHEADER_free(*(undefined8 *)((long)ptr + 0x18));
  OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 0x10));
  CRYPTO_free(ptr);
  return bVar3;
}



uint test_HDR_set_get_pvno(void)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  void *ptr;
  
  uVar2 = 0;
  ptr = (void *)set_up("test_HDR_set_get_pvno");
  if (ptr != (void *)0x0) {
    *(undefined4 *)((long)ptr + 8) = 1;
    uVar1 = ossl_cmp_hdr_set_pvno(*(undefined8 *)((long)ptr + 0x18),0x4d);
    uVar2 = test_int_eq("test/cmp_hdr_test.c",0x35,"ossl_cmp_hdr_set_pvno(fixture->hdr, pvno)",
                        &_LC16,uVar1,1);
    if (uVar2 != 0) {
      uVar1 = ossl_cmp_hdr_get_pvno(*(undefined8 *)((long)ptr + 0x18));
      iVar3 = test_int_eq("test/cmp_hdr_test.c",0x37,"ossl_cmp_hdr_get_pvno(fixture->hdr)",&_LC59,
                          uVar1,0x4d);
      uVar2 = (uint)(iVar3 != 0);
    }
    OSSL_CMP_PKIHEADER_free(*(undefined8 *)((long)ptr + 0x18));
    OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 0x10));
    CRYPTO_free(ptr);
  }
  return uVar2;
}



undefined4 test_HDR_init_with_subject(void)

{
  int iVar1;
  undefined4 uVar2;
  void *ptr;
  X509_NAME *name;
  undefined8 uVar3;
  
  ptr = (void *)set_up("test_HDR_init_with_subject");
  if (ptr != (void *)0x0) {
    *(undefined4 *)((long)ptr + 8) = 1;
    name = X509_NAME_new();
    iVar1 = test_ptr("test/cmp_hdr_test.c",0x1d4,"subject = X509_NAME_new()",name);
    if (iVar1 != 0) {
      uVar3 = 0;
      iVar1 = X509_NAME_add_entry_by_txt(name,"CN",0x1001,(uchar *)"Common Name",-1,-1,0);
      iVar1 = test_true("test/cmp_hdr_test.c",0x1d5,
                        "X509_NAME_ADD(subject, \"CN\", \"Common Name\")",iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = OSSL_CMP_CTX_set1_subjectName(*(undefined8 *)((long)ptr + 0x10),name,uVar3,0x101399)
        ;
        iVar1 = test_true("test/cmp_hdr_test.c",0x1d6,
                          "OSSL_CMP_CTX_set1_subjectName(fixture->cmp_ctx, subject)",iVar1 != 0);
        if (iVar1 != 0) {
          X509_NAME_free(name);
          uVar2 = execute_HDR_init_test(ptr);
          OSSL_CMP_PKIHEADER_free(*(undefined8 *)((long)ptr + 0x18));
          OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 0x10));
          CRYPTO_free(ptr);
          return uVar2;
        }
      }
    }
    OSSL_CMP_PKIHEADER_free(*(undefined8 *)((long)ptr + 0x18));
    OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 0x10));
    CRYPTO_free(ptr);
    X509_NAME_free(name);
  }
  return 0;
}



void cleanup_tests(void)

{
  return;
}



undefined8 setup_tests(void)

{
  RAND_bytes(rand_data,0x10);
  add_test("test_HDR_set_get_pvno",test_HDR_set_get_pvno);
  add_test("test_HDR_get0_senderNonce",test_HDR_get0_senderNonce);
  add_test("test_HDR_set1_sender",test_HDR_set1_sender);
  add_test("test_HDR_set1_recipient",test_HDR_set1_recipient);
  add_test("test_HDR_update_messageTime",test_HDR_update_messageTime);
  add_test("test_HDR_set1_senderKID",test_HDR_set1_senderKID);
  add_test("test_HDR_push0_freeText",test_HDR_push0_freeText);
  add_test("test_HDR_push1_freeText",test_HDR_push1_freeText);
  add_test("test_HDR_generalInfo_push0_item",test_HDR_generalInfo_push0_item);
  add_test("test_HDR_generalInfo_push1_items",test_HDR_generalInfo_push1_items);
  add_test("test_HDR_set_and_check_implicit_confirm",test_HDR_set_and_check_implicit_confirm);
  add_test("test_HDR_init_with_ref",test_HDR_init_with_ref);
  add_test("test_HDR_init_with_subject",test_HDR_init_with_subject);
  return 1;
}


