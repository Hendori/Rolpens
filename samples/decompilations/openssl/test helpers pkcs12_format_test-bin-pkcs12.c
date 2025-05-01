
undefined8 add_attributes(PKCS12_SAFEBAG *param_1,long *param_2)

{
  char *__s;
  uchar *name;
  int iVar1;
  size_t sVar2;
  ASN1_OBJECT *value;
  X509_ATTRIBUTE *attr;
  undefined8 uVar3;
  long lVar4;
  long in_FS_OFFSET;
  stack_st_X509_ATTRIBUTE *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (stack_st_X509_ATTRIBUTE *)0x0;
  if ((param_2 != (long *)0x0) && (lVar4 = *param_2, lVar4 != 0)) {
    do {
      while( true ) {
        test_info("test/helpers/pkcs12.c",0x161,"Adding attribute %s = %s",lVar4,param_2[1]);
        iVar1 = OBJ_txt2nid((char *)*param_2);
        if (iVar1 != 0x9c) break;
        iVar1 = PKCS12_add_friendlyname_utf8(param_1,param_2[1],0xffffffff);
        iVar1 = test_true("test/helpers/pkcs12.c",0x165,
                          "PKCS12_add_friendlyname(bag, p_attr->value, -1)",iVar1 != 0);
joined_r0x001001be:
        if (iVar1 == 0) {
          uVar3 = 0;
          goto LAB_00100165;
        }
LAB_001000a9:
        lVar4 = param_2[2];
        param_2 = param_2 + 2;
        if (lVar4 == 0) goto LAB_00100160;
      }
      if (iVar1 == 0x9d) {
        name = (uchar *)param_2[1];
        sVar2 = strlen((char *)name);
        iVar1 = PKCS12_add_localkeyid(param_1,name,(int)sVar2);
        iVar1 = test_true("test/helpers/pkcs12.c",0x168,
                          "PKCS12_add_localkeyid(bag, (unsigned char *)p_attr->value, strlen(p_attr->value))"
                          ,iVar1 != 0);
        if (iVar1 != 0) goto LAB_001000a9;
        uVar3 = 0;
        goto LAB_00100165;
      }
      if (iVar1 != 0x503) {
        __s = (char *)param_2[1];
        sVar2 = strlen(__s);
        iVar1 = PKCS12_add1_attr_by_txt(param_1,*param_2,0x1001,__s,sVar2 & 0xffffffff);
        iVar1 = test_true("test/helpers/pkcs12.c",0x173,
                          "PKCS12_add1_attr_by_txt(bag, p_attr->oid, MBSTRING_ASC, (unsigned char *)p_attr->value, strlen(p_attr->value))"
                          ,iVar1 != 0);
        goto joined_r0x001001be;
      }
      local_48 = (stack_st_X509_ATTRIBUTE *)PKCS12_SAFEBAG_get0_attrs(param_1);
      value = OBJ_txt2obj((char *)param_2[1],0);
      attr = X509_ATTRIBUTE_create(0x503,6,value);
      X509at_add1_attr(&local_48,attr);
      PKCS12_SAFEBAG_set0_attrs(param_1,local_48);
      X509_ATTRIBUTE_free(attr);
      lVar4 = param_2[2];
      param_2 = param_2 + 2;
    } while (lVar4 != 0);
  }
LAB_00100160:
  uVar3 = 1;
LAB_00100165:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint check_asn1_string(int *param_1,char *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  size_t sVar4;
  char *ptr;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  ptr = (char *)0x0;
  uVar2 = test_ptr("test/helpers/pkcs12.c",0x1de,&_LC5,param_1);
  if (uVar2 == 0) goto LAB_001002aa;
  iVar3 = *param_1;
  if (iVar3 == 0xc) {
    piVar1 = *(int **)(param_1 + 2);
    sVar4 = strlen(param_2);
    uVar6 = 0x1ea;
    pcVar5 = "(char *)av->value.utf8string->data";
    iVar3 = *piVar1;
    uVar7 = *(undefined8 *)(piVar1 + 2);
  }
  else {
    if (iVar3 == 0x1e) {
      ptr = OPENSSL_uni2asc(*(uchar **)(*(int **)(param_1 + 2) + 2),**(int **)(param_1 + 2));
      iVar3 = test_str_eq("test/helpers/pkcs12.c",0x1e5,&_LC7,"(char *)value",param_2,ptr);
      uVar2 = (uint)(iVar3 != 0);
      goto LAB_001002aa;
    }
    uVar2 = 0;
    if (iVar3 != 4) goto LAB_001002aa;
    piVar1 = *(int **)(param_1 + 2);
    sVar4 = strlen(param_2);
    uVar6 = 0x1f0;
    pcVar5 = "(char *)av->value.octet_string->data";
    iVar3 = *piVar1;
    uVar7 = *(undefined8 *)(piVar1 + 2);
  }
  iVar3 = test_mem_eq("test/helpers/pkcs12.c",uVar6,&_LC7,pcVar5,param_2,sVar4,uVar7,(long)iVar3);
  uVar2 = (uint)(iVar3 != 0);
LAB_001002aa:
  CRYPTO_free(ptr);
  return uVar2;
}



undefined4 check_attrs(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  char *__s1;
  int iVar2;
  int iVar3;
  X509_ATTRIBUTE *attr;
  ASN1_OBJECT *a;
  ASN1_TYPE *pAVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  long in_FS_OFFSET;
  int local_bc;
  char local_a8 [104];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (local_bc = 0; iVar2 = OPENSSL_sk_num(param_1), local_bc < iVar2; local_bc = local_bc + 1) {
    attr = (X509_ATTRIBUTE *)OPENSSL_sk_value(param_1,local_bc);
    a = X509_ATTRIBUTE_get0_object(attr);
    OBJ_obj2txt(local_a8,100,a,0);
    __s1 = (char *)*param_2;
    puVar6 = param_2;
    while (__s1 != (char *)0x0) {
      iVar2 = strcmp(__s1,local_a8);
      if (iVar2 == 0) {
        iVar2 = X509_ATTRIBUTE_count(attr);
        iVar2 = test_int_eq("test/helpers/pkcs12.c",0x213,"X509_ATTRIBUTE_count(attr)",&_LC10,iVar2,
                            1);
        if (iVar2 == 0) goto LAB_00100488;
        iVar2 = 0;
        goto LAB_0010046c;
      }
      puVar1 = puVar6 + 2;
      puVar6 = puVar6 + 2;
      __s1 = (char *)*puVar1;
    }
LAB_00100478:
  }
  uVar5 = 1;
LAB_0010048b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0010046c:
  iVar3 = X509_ATTRIBUTE_count(attr);
  if (iVar3 <= iVar2) goto LAB_00100478;
  pAVar4 = X509_ATTRIBUTE_get0_type(attr,iVar2);
  check_asn1_string(pAVar4,puVar6[1]);
  iVar3 = test_true("test/helpers/pkcs12.c",0x218,"check_asn1_string(av, p_attr->value)");
  if (iVar3 == 0) goto LAB_00100488;
  iVar2 = iVar2 + 1;
  goto LAB_0010046c;
LAB_00100488:
  uVar5 = 0;
  goto LAB_0010048b;
}



PKCS12 * from_bio_p12(BIO *param_1,long param_2)

{
  char *__s;
  int iVar1;
  PKCS12 *pPVar2;
  size_t sVar3;
  long in_FS_OFFSET;
  PKCS12 *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (PKCS12 *)0x0;
  if (legacy == 0) {
    local_38 = (PKCS12 *)PKCS12_init_ex(0x15,test_ctx,test_propq);
    iVar1 = test_ptr("test/helpers/pkcs12.c",0xd8,&_LC13,local_38);
    if (iVar1 != 0) goto LAB_00100504;
  }
  else {
LAB_00100504:
    local_38 = d2i_PKCS12_bio(param_1,&local_38);
    BIO_free(param_1);
    iVar1 = test_ptr("test/helpers/pkcs12.c",0xdd,&_LC13,local_38);
    pPVar2 = local_38;
    if (iVar1 != 0) {
      if (param_2 == 0) {
        iVar1 = PKCS12_mac_present(local_38);
        iVar1 = test_false("test/helpers/pkcs12.c",0xe0,"PKCS12_mac_present(p12)",iVar1 != 0);
        pPVar2 = local_38;
      }
      else {
        iVar1 = PKCS12_mac_present(local_38);
        iVar1 = test_true("test/helpers/pkcs12.c",0x108,"PKCS12_mac_present(p12)",iVar1 != 0);
        if (iVar1 == 0) goto LAB_0010056b;
        __s = *(char **)(param_2 + 8);
        sVar3 = strlen(__s);
        iVar1 = PKCS12_verify_mac(pPVar2,__s,(int)sVar3);
        iVar1 = test_true("test/helpers/pkcs12.c",0x109,
                          "PKCS12_verify_mac(p12, mac->pass, strlen(mac->pass))",iVar1 != 0);
        pPVar2 = local_38;
      }
      local_38 = pPVar2;
      if (iVar1 != 0) goto LAB_00100576;
    }
  }
LAB_0010056b:
  PKCS12_free(local_38);
  pPVar2 = (PKCS12 *)0x0;
LAB_00100576:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



stack_st_PKCS12_SAFEBAG * decode_contentinfo(undefined8 param_1,undefined8 param_2,long param_3)

{
  char *__s;
  int iVar1;
  PKCS7 *p7;
  size_t sVar2;
  stack_st_PKCS12_SAFEBAG *psVar3;
  
  p7 = (PKCS7 *)OPENSSL_sk_value();
  iVar1 = test_ptr("test/helpers/pkcs12.c",0x13b,&_LC16,p7);
  if (iVar1 != 0) {
    iVar1 = OBJ_obj2nid(p7->type);
    if (param_3 == 0) {
      iVar1 = test_int_eq("test/helpers/pkcs12.c",0x144,"bagnid","NID_pkcs7_data",iVar1,0x15);
      if (iVar1 == 0) {
        return (stack_st_PKCS12_SAFEBAG *)0x0;
      }
      psVar3 = PKCS12_unpack_p7data(p7);
    }
    else {
      iVar1 = test_int_eq("test/helpers/pkcs12.c",0x140,"bagnid","NID_pkcs7_encrypted",iVar1,0x1a);
      if (iVar1 == 0) {
        return (stack_st_PKCS12_SAFEBAG *)0x0;
      }
      __s = *(char **)(param_3 + 8);
      sVar2 = strlen(__s);
      psVar3 = PKCS12_unpack_p7encdata(p7,__s,(int)sVar2);
    }
    iVar1 = test_ptr("test/helpers/pkcs12.c",0x148,&_LC20,psVar3);
    if (iVar1 != 0) {
      return psVar3;
    }
  }
  return (stack_st_PKCS12_SAFEBAG *)0x0;
}



void generate_p12_part_0(undefined8 *param_1,int *param_2)

{
  undefined8 uVar1;
  int iVar2;
  PKCS12 *p12;
  char *pcVar3;
  EVP_MD *md_type;
  size_t sVar4;
  BIO *bp;
  bool bVar5;
  
  if (legacy == 0) {
    p12 = (PKCS12 *)PKCS12_add_safes_ex((stack_st_PKCS7 *)param_1[3],0,test_ctx,test_propq);
  }
  else {
    p12 = PKCS12_add_safes((stack_st_PKCS7 *)param_1[3],0);
  }
  iVar2 = test_ptr("test/helpers/pkcs12.c",0xa3,&_LC13);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    goto LAB_001007a7;
  }
  OPENSSL_sk_pop_free(param_1[3],&PKCS7_free);
  uVar1 = test_propq;
  if (param_2 == (int *)0x0) {
    i2d_PKCS12_bio((BIO *)param_1[2],p12);
    if (write_files == 0) goto LAB_001007a7;
    md_type = (EVP_MD *)0x0;
    bVar5 = false;
LAB_00100900:
    bp = BIO_new_file((char *)*param_1,"w");
    if (bp != (BIO *)0x0) {
      iVar2 = i2d_PKCS12_bio(bp,p12);
      test_int_eq("test/helpers/pkcs12.c",0xc9,"i2d_PKCS12_bio(out, p12)",&_LC10,iVar2,1);
    }
    BIO_free(bp);
  }
  else {
    if (legacy == 0) {
      pcVar3 = OBJ_nid2sn(*param_2);
      md_type = (EVP_MD *)EVP_MD_fetch(test_ctx,pcVar3,uVar1);
    }
    else {
      pcVar3 = OBJ_nid2sn(*param_2);
      md_type = EVP_get_digestbyname(pcVar3);
    }
    pcVar3 = *(char **)(param_2 + 2);
    sVar4 = strlen(pcVar3);
    iVar2 = PKCS12_set_mac(p12,pcVar3,(int)sVar4,(uchar *)0x0,0,param_2[4],md_type);
    iVar2 = test_true("test/helpers/pkcs12.c",0xaf,
                      "PKCS12_set_mac(p12, mac->pass, strlen(mac->pass), NULL, 0, mac->iter, md)",
                      iVar2 != 0);
    bVar5 = md_type != (EVP_MD *)0x0;
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 1) = 0;
    }
    else {
      i2d_PKCS12_bio((BIO *)param_1[2],p12);
      if (write_files != 0) goto LAB_00100900;
    }
  }
  if ((legacy == 0) && (bVar5)) {
    EVP_MD_free(md_type);
  }
LAB_001007a7:
  PKCS12_free(p12);
  return;
}



BIO * read_p12(char *param_1,long param_2)

{
  char *__s;
  int iVar1;
  BIO *bp;
  BIO *p12;
  size_t sVar2;
  
  bp = BIO_new_file(param_1,"r");
  p12 = bp;
  if (bp != (BIO *)0x0) {
    p12 = (BIO *)d2i_PKCS12_bio(bp,(PKCS12 **)0x0);
    BIO_free(bp);
    iVar1 = test_ptr("test/helpers/pkcs12.c",0xf7,&_LC13,p12);
    if (iVar1 != 0) {
      if (param_2 == 0) {
        iVar1 = PKCS12_mac_present(p12);
        iVar1 = test_false("test/helpers/pkcs12.c",0xfa,"PKCS12_mac_present(p12)",iVar1 != 0);
        if (iVar1 != 0) {
          return p12;
        }
      }
      else {
        iVar1 = PKCS12_mac_present(p12);
        iVar1 = test_true("test/helpers/pkcs12.c",0x108,"PKCS12_mac_present(p12)",iVar1 != 0);
        if (iVar1 != 0) {
          __s = *(char **)(param_2 + 8);
          sVar2 = strlen(__s);
          iVar1 = PKCS12_verify_mac((PKCS12 *)p12,__s,(int)sVar2);
          iVar1 = test_true("test/helpers/pkcs12.c",0x109,
                            "PKCS12_verify_mac(p12, mac->pass, strlen(mac->pass))",iVar1 != 0);
          if (iVar1 != 0) {
            return p12;
          }
        }
      }
    }
  }
  PKCS12_free((PKCS12 *)p12);
  return (BIO *)0x0;
}



void PKCS12_helper_set_write_files(undefined4 param_1)

{
  write_files = param_1;
  return;
}



void PKCS12_helper_set_legacy(undefined4 param_1)

{
  legacy = param_1;
  return;
}



void PKCS12_helper_set_libctx(undefined8 param_1)

{
  test_ctx = param_1;
  return;
}



void PKCS12_helper_set_propq(undefined8 param_1)

{
  test_propq = param_1;
  return;
}



undefined8 * new_pkcs12_builder(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)CRYPTO_malloc(0x38,"test/helpers/pkcs12.c",0x69);
  iVar1 = test_ptr("test/helpers/pkcs12.c",0x6a,&_LC25,puVar2);
  if (iVar1 != 0) {
    *puVar2 = param_1;
    *(undefined4 *)(puVar2 + 1) = 1;
    return puVar2;
  }
  return (undefined8 *)0x0;
}



undefined4 end_pkcs12_builder(void *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((long)param_1 + 8);
  CRYPTO_free(param_1);
  return uVar1;
}



void start_pkcs12(long param_1)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



void end_pkcs12(long param_1)

{
  int iVar1;
  BIO_METHOD *type;
  BIO *pBVar2;
  
  if (*(int *)(param_1 + 8) == 0) {
    return;
  }
  type = BIO_s_mem();
  pBVar2 = BIO_new(type);
  *(BIO **)(param_1 + 0x10) = pBVar2;
  iVar1 = test_ptr("test/helpers/pkcs12.c",0x9b,"pb->p12bio",pBVar2);
  if (iVar1 != 0) {
    generate_p12_part_0(param_1,0);
    return;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}



void end_pkcs12_with_mac(long param_1,undefined8 param_2)

{
  int iVar1;
  BIO_METHOD *type;
  BIO *pBVar2;
  
  if (*(int *)(param_1 + 8) == 0) {
    return;
  }
  type = BIO_s_mem();
  pBVar2 = BIO_new(type);
  *(BIO **)(param_1 + 0x10) = pBVar2;
  iVar1 = test_ptr("test/helpers/pkcs12.c",0x9b,"pb->p12bio",pBVar2);
  if (iVar1 != 0) {
    generate_p12_part_0(param_1,param_2);
    return;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}



void start_contentinfo(long param_1)

{
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



void end_contentinfo(long param_1)

{
  int iVar1;
  stack_st_PKCS12_SAFEBAG *bags;
  
  bags = *(stack_st_PKCS12_SAFEBAG **)(param_1 + 0x28);
  if ((*(int *)(param_1 + 8) != 0) && (bags != (stack_st_PKCS12_SAFEBAG *)0x0)) {
    iVar1 = PKCS12_add_safe((stack_st_PKCS7 **)(param_1 + 0x18),bags,-1,0,(char *)0x0);
    iVar1 = test_true("test/helpers/pkcs12.c",0x11a,
                      "PKCS12_add_safe(&pb->safes, pb->bags, -1, 0, NULL)",iVar1 != 0);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 8) = 0;
    }
    bags = *(stack_st_PKCS12_SAFEBAG **)(param_1 + 0x28);
  }
  OPENSSL_sk_pop_free(bags,&PKCS12_SAFEBAG_free);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



void end_contentinfo_encrypted(long param_1,int *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 extraout_RDX;
  stack_st_PKCS12_SAFEBAG *bags;
  
  uVar1 = test_propq;
  bags = *(stack_st_PKCS12_SAFEBAG **)(param_1 + 0x28);
  if ((*(int *)(param_1 + 8) != 0) && (bags != (stack_st_PKCS12_SAFEBAG *)0x0)) {
    if (legacy == 0) {
      iVar2 = PKCS12_add_safe_ex((stack_st_PKCS7 **)(param_1 + 0x18),bags);
      iVar2 = test_true("test/helpers/pkcs12.c",0x12a,
                        "PKCS12_add_safe_ex(&pb->safes, pb->bags, enc->nid, enc->iter, enc->pass, test_ctx, test_propq)"
                        ,iVar2 != 0);
      param_3 = uVar1;
    }
    else {
      iVar2 = PKCS12_add_safe((stack_st_PKCS7 **)(param_1 + 0x18),bags,*param_2,param_2[4],
                              *(char **)(param_2 + 2));
      iVar2 = test_true("test/helpers/pkcs12.c",0x126,
                        "PKCS12_add_safe(&pb->safes, pb->bags, enc->nid, enc->iter, enc->pass)",
                        iVar2 != 0);
      param_3 = extraout_RDX;
    }
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 8) = 0;
    }
    bags = *(stack_st_PKCS12_SAFEBAG **)(param_1 + 0x28);
  }
  OPENSSL_sk_pop_free(bags,&PKCS12_SAFEBAG_free,param_3);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



void add_certbag(long param_1,uchar *param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  X509 *a;
  X509_NAME *a_00;
  char *ptr;
  PKCS12_SAFEBAG *pPVar2;
  long in_FS_OFFSET;
  uchar *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(param_1 + 8) != 0) {
    local_38 = param_2;
    a = d2i_X509((X509 **)0x0,&local_38,(long)param_3);
    test_ptr("test/helpers/pkcs12.c",0x52,&_LC30,a);
    iVar1 = test_ptr("test/helpers/pkcs12.c",0x18a,&_LC30,a);
    if (iVar1 != 0) {
      a_00 = X509_get_subject_name(a);
      ptr = X509_NAME_oneline(a_00,(char *)0x0,0);
      test_info("test/helpers/pkcs12.c",400,"Adding certificate <%s>",ptr);
      CRYPTO_free(ptr);
      pPVar2 = PKCS12_add_cert((stack_st_PKCS12_SAFEBAG **)(param_1 + 0x28),a);
      iVar1 = test_ptr("test/helpers/pkcs12.c",0x194,&_LC32,pPVar2);
      if (iVar1 == 0) {
LAB_00100eaa:
        *(undefined4 *)(param_1 + 8) = 0;
      }
      else {
        iVar1 = add_attributes(pPVar2,param_4);
        iVar1 = test_true("test/helpers/pkcs12.c",0x199,"add_attributes(bag, attrs)",iVar1 != 0);
        if (iVar1 == 0) goto LAB_00100eaa;
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        X509_free(a);
        return;
      }
      goto LAB_00100f04;
    }
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00100f04:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void add_keybag(long param_1,uchar *param_2,int param_3,undefined8 param_4,int *param_5)

{
  int iVar1;
  EVP_PKEY *key;
  PKCS12_SAFEBAG *pPVar2;
  long in_FS_OFFSET;
  uchar *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(param_1 + 8) != 0) {
    test_info("test/helpers/pkcs12.c",0x1aa,"Adding key");
    local_48 = param_2;
    key = d2i_AutoPrivateKey((EVP_PKEY **)0x0,&local_48,(long)param_3);
    test_ptr("test/helpers/pkcs12.c",0x5d,&_LC35,key);
    iVar1 = test_ptr("test/helpers/pkcs12.c",0x1ad,&_LC35,key);
    if (iVar1 != 0) {
      if (legacy == 0) {
        pPVar2 = (PKCS12_SAFEBAG *)
                 PKCS12_add_key_ex((stack_st_PKCS12_SAFEBAG **)(param_1 + 0x28),key,0);
      }
      else {
        pPVar2 = PKCS12_add_key((stack_st_PKCS12_SAFEBAG **)(param_1 + 0x28),key,0,param_5[4],
                                *param_5,*(char **)(param_5 + 2));
      }
      iVar1 = test_ptr("test/helpers/pkcs12.c",0x1b7,&_LC32,pPVar2);
      if (iVar1 == 0) {
LAB_00101033:
        *(undefined4 *)(param_1 + 8) = 0;
      }
      else {
        iVar1 = add_attributes(pPVar2,param_4);
        if (iVar1 == 0) goto LAB_00101033;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        EVP_PKEY_free(key);
        return;
      }
      goto LAB_0010107c;
    }
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010107c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void add_secretbag(long param_1,undefined4 param_2,char *param_3,undefined8 param_4)

{
  int iVar1;
  size_t sVar2;
  undefined8 uVar3;
  
  if (*(int *)(param_1 + 8) == 0) {
    return;
  }
  test_info("test/helpers/pkcs12.c",0x1c9,"Adding secret <%s>",param_3);
  sVar2 = strlen(param_3);
  uVar3 = PKCS12_add_secret(param_1 + 0x28,param_2,param_3,sVar2 & 0xffffffff);
  iVar1 = test_ptr("test/helpers/pkcs12.c",0x1cc,&_LC32,uVar3);
  if ((iVar1 != 0) && (iVar1 = add_attributes(uVar3,param_4), iVar1 != 0)) {
    return;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}



void check_certbag(long param_1,uchar *param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  X509 *a;
  X509 *b;
  long in_FS_OFFSET;
  uchar *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(param_1 + 8) != 0) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
    uVar3 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x28));
    iVar1 = test_ptr("test/helpers/pkcs12.c",0x230,&_LC32,uVar3);
    if (iVar1 != 0) {
      uVar4 = PKCS12_SAFEBAG_get0_attrs(uVar3);
      iVar1 = check_attrs(uVar4,param_4);
      if (iVar1 != 0) {
        uVar2 = PKCS12_SAFEBAG_get_nid(uVar3);
        iVar1 = test_int_eq("test/helpers/pkcs12.c",0x235,"PKCS12_SAFEBAG_get_nid(bag)",
                            "NID_certBag",uVar2,0x98);
        if (iVar1 != 0) {
          uVar2 = PKCS12_SAFEBAG_get_bag_nid(uVar3);
          iVar1 = test_int_eq("test/helpers/pkcs12.c",0x236,"PKCS12_SAFEBAG_get_bag_nid(bag)",
                              "NID_x509Certificate",uVar2,0x9e);
          if (iVar1 != 0) {
            a = (X509 *)PKCS12_SAFEBAG_get1_cert(uVar3);
            iVar1 = test_ptr("test/helpers/pkcs12.c",0x23b,&_LC41,a);
            if (iVar1 == 0) {
              *(undefined4 *)(param_1 + 8) = 0;
              b = (X509 *)0x0;
            }
            else {
              local_48 = param_2;
              b = d2i_X509((X509 **)0x0,&local_48,(long)param_3);
              test_ptr("test/helpers/pkcs12.c",0x52,&_LC30,b);
              iVar1 = X509_cmp(a,b);
              iVar1 = test_false("test/helpers/pkcs12.c",0x240,"X509_cmp(x509, ref_x509)",iVar1 != 0
                                );
              if (iVar1 == 0) {
                *(undefined4 *)(param_1 + 8) = 0;
              }
            }
            X509_free(a);
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
              X509_free(b);
              return;
            }
            goto LAB_00101315;
          }
        }
      }
    }
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00101315:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void check_keybag(long param_1,uchar *param_2,int param_3,undefined8 param_4,long param_5)

{
  char *__s;
  int iVar1;
  PKCS12_SAFEBAG *bag;
  undefined8 uVar2;
  size_t sVar3;
  PKCS8_PRIV_KEY_INFO *pPVar4;
  EVP_PKEY *pkey;
  EVP_PKEY *pkey_00;
  long in_FS_OFFSET;
  uchar *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(param_1 + 8) != 0) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
    bag = (PKCS12_SAFEBAG *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x28));
    iVar1 = test_ptr("test/helpers/pkcs12.c",0x254,&_LC32,bag);
    if (iVar1 != 0) {
      uVar2 = PKCS12_SAFEBAG_get0_attrs(bag);
      iVar1 = check_attrs(uVar2,param_4);
      if (iVar1 != 0) {
        iVar1 = PKCS12_SAFEBAG_get_nid(bag);
        if (iVar1 == 0x96) {
          pPVar4 = (PKCS8_PRIV_KEY_INFO *)PKCS12_SAFEBAG_get0_p8inf(bag);
          pkey = EVP_PKCS82PKEY(pPVar4);
          iVar1 = test_ptr("test/helpers/pkcs12.c",0x261,"pkey = EVP_PKCS82PKEY(p8c)",pkey);
          if (iVar1 == 0) {
LAB_00101566:
            *(undefined4 *)(param_1 + 8) = 0;
            pkey_00 = (EVP_PKEY *)0x0;
          }
          else {
LAB_00101481:
            local_48 = param_2;
            pkey_00 = d2i_AutoPrivateKey((EVP_PKEY **)0x0,&local_48,(long)param_3);
            test_ptr("test/helpers/pkcs12.c",0x5d,&_LC35,pkey_00);
            iVar1 = EVP_PKEY_eq(pkey,pkey_00);
            iVar1 = test_true("test/helpers/pkcs12.c",0x27f,"EVP_PKEY_eq(pkey, ref_pkey)",iVar1 != 0
                             );
            if (iVar1 == 0) {
              *(undefined4 *)(param_1 + 8) = 0;
            }
          }
        }
        else {
          if (iVar1 == 0x97) {
            __s = *(char **)(param_5 + 8);
            sVar3 = strlen(__s);
            if (legacy == 0) {
              pPVar4 = (PKCS8_PRIV_KEY_INFO *)
                       PKCS12_decrypt_skey_ex(bag,__s,sVar3 & 0xffffffff,test_ctx,test_propq);
            }
            else {
              pPVar4 = PKCS12_decrypt_skey(bag,__s,(int)sVar3);
            }
            iVar1 = test_ptr("test/helpers/pkcs12.c",0x26c,&_LC44,pPVar4);
            if (iVar1 != 0) {
              pkey = EVP_PKCS82PKEY(pPVar4);
              iVar1 = test_ptr("test/helpers/pkcs12.c",0x270,"pkey = EVP_PKCS82PKEY(p8)",pkey);
              if (iVar1 == 0) {
                PKCS8_PRIV_KEY_INFO_free(pPVar4);
                goto LAB_00101566;
              }
              PKCS8_PRIV_KEY_INFO_free(pPVar4);
              goto LAB_00101481;
            }
          }
          *(undefined4 *)(param_1 + 8) = 0;
          pkey_00 = (EVP_PKEY *)0x0;
          pkey = (EVP_PKEY *)0x0;
        }
        EVP_PKEY_free(pkey);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          EVP_PKEY_free(pkey_00);
          return;
        }
        goto LAB_001015a0;
      }
    }
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001015a0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void check_secretbag(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(int *)(param_1 + 8) == 0) {
    return;
  }
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  uVar3 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x28));
  iVar1 = test_ptr("test/helpers/pkcs12.c",0x28e,&_LC32,uVar3);
  if (iVar1 != 0) {
    uVar4 = PKCS12_SAFEBAG_get0_attrs(uVar3);
    iVar1 = check_attrs(uVar4,param_4);
    if (iVar1 != 0) {
      uVar2 = PKCS12_SAFEBAG_get_nid(uVar3);
      iVar1 = test_int_eq("test/helpers/pkcs12.c",0x294,"PKCS12_SAFEBAG_get_nid(bag)",
                          "NID_secretBag",uVar2,0x9a);
      if (iVar1 != 0) {
        uVar2 = PKCS12_SAFEBAG_get_bag_nid(uVar3);
        iVar1 = test_int_eq("test/helpers/pkcs12.c",0x295,"PKCS12_SAFEBAG_get_bag_nid(bag)",
                            "secret_nid",uVar2,param_2);
        if (iVar1 != 0) {
          uVar3 = PKCS12_SAFEBAG_get0_bag_obj(uVar3);
          iVar1 = check_asn1_string(uVar3,param_3);
          iVar1 = test_true("test/helpers/pkcs12.c",0x296,
                            "check_asn1_string(PKCS12_SAFEBAG_get0_bag_obj(bag), secret)",iVar1 != 0
                           );
          if (iVar1 != 0) {
            return;
          }
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}



void start_check_pkcs12(long param_1)

{
  int iVar1;
  PKCS12 *p12;
  stack_st_PKCS7 *psVar2;
  
  if (*(int *)(param_1 + 8) == 0) {
    return;
  }
  p12 = (PKCS12 *)from_bio_p12(*(undefined8 *)(param_1 + 0x10),0);
  iVar1 = test_ptr("test/helpers/pkcs12.c",0x2a3,&_LC13,p12);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    return;
  }
  psVar2 = PKCS12_unpack_authsafes(p12);
  *(stack_st_PKCS7 **)(param_1 + 0x18) = psVar2;
  iVar1 = test_ptr("test/helpers/pkcs12.c",0x2a8,"pb->safes",psVar2);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  PKCS12_free(p12);
  return;
}



void start_check_pkcs12_with_mac(long param_1)

{
  int iVar1;
  PKCS12 *p12;
  stack_st_PKCS7 *psVar2;
  
  if (*(int *)(param_1 + 8) == 0) {
    return;
  }
  p12 = (PKCS12 *)from_bio_p12(*(undefined8 *)(param_1 + 0x10));
  iVar1 = test_ptr("test/helpers/pkcs12.c",0x2b7,&_LC13,p12);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    return;
  }
  psVar2 = PKCS12_unpack_authsafes(p12);
  *(stack_st_PKCS7 **)(param_1 + 0x18) = psVar2;
  iVar1 = test_ptr("test/helpers/pkcs12.c",700,"pb->safes",psVar2);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  PKCS12_free(p12);
  return;
}



void start_check_pkcs12_file(undefined8 *param_1)

{
  int iVar1;
  PKCS12 *p12;
  stack_st_PKCS7 *psVar2;
  
  if (*(int *)(param_1 + 1) == 0) {
    return;
  }
  p12 = (PKCS12 *)read_p12(*param_1,0);
  iVar1 = test_ptr("test/helpers/pkcs12.c",0x2cb,&_LC13,p12);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    return;
  }
  psVar2 = PKCS12_unpack_authsafes(p12);
  param_1[3] = psVar2;
  iVar1 = test_ptr("test/helpers/pkcs12.c",0x2d0,"pb->safes",psVar2);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 1) = 0;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  PKCS12_free(p12);
  return;
}



void start_check_pkcs12_file_with_mac(undefined8 *param_1)

{
  int iVar1;
  PKCS12 *p12;
  stack_st_PKCS7 *psVar2;
  
  if (*(int *)(param_1 + 1) == 0) {
    return;
  }
  p12 = (PKCS12 *)read_p12(*param_1);
  iVar1 = test_ptr("test/helpers/pkcs12.c",0x2df,&_LC13,p12);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    return;
  }
  psVar2 = PKCS12_unpack_authsafes(p12);
  param_1[3] = psVar2;
  iVar1 = test_ptr("test/helpers/pkcs12.c",0x2e4,"pb->safes",psVar2);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 1) = 0;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  PKCS12_free(p12);
  return;
}



void end_check_pkcs12(long param_1)

{
  if (*(int *)(param_1 + 8) == 0) {
    return;
  }
  OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x18),&PKCS7_free);
  return;
}



void start_check_contentinfo(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if (*(int *)(param_1 + 8) == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(int *)(param_1 + 0x20) = iVar1 + 1;
  uVar3 = decode_contentinfo(*(undefined8 *)(param_1 + 0x18),iVar1,0);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  iVar1 = test_ptr("test/helpers/pkcs12.c",0x2fb,"pb->bags",uVar3);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    return;
  }
  uVar2 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x28));
  test_info("test/helpers/pkcs12.c",0x2ff,"Decoding %d bags",uVar2);
  return;
}



void start_check_contentinfo_encrypted(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if (*(int *)(param_1 + 8) == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(int *)(param_1 + 0x20) = iVar1 + 1;
  uVar3 = decode_contentinfo(*(undefined8 *)(param_1 + 0x18),iVar1,param_2);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  iVar1 = test_ptr("test/helpers/pkcs12.c",0x309,"pb->bags",uVar3);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    return;
  }
  uVar2 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x28));
  test_info("test/helpers/pkcs12.c",0x30d,"Decoding %d bags",uVar2);
  return;
}



void end_check_contentinfo(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 8) == 0) {
    return;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  uVar2 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x28));
  iVar3 = test_int_eq("test/helpers/pkcs12.c",0x316,"sk_PKCS12_SAFEBAG_num(pb->bags)","pb->bag_idx",
                      uVar2,uVar1);
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x28),&PKCS12_SAFEBAG_free);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}


