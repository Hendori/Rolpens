
bool test_addr_subset(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 uVar6;
  ASN1_OCTET_STRING *pAVar7;
  ASN1_OCTET_STRING *pAVar8;
  long lVar9;
  undefined4 *puVar10;
  long in_FS_OFFSET;
  bool bVar11;
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  puVar10 = &ranges;
  lVar9 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = 0;
  local_68 = 0;
  local_48 = 0;
  local_98 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  do {
    uVar6 = OPENSSL_sk_new_null();
    *(undefined8 *)(local_98 + lVar9) = uVar6;
    iVar5 = test_ptr("test/v3ext.c",0x1b2,"addr[i] = sk_IPAddressFamily_new_null()",uVar6);
    if (iVar5 == 0) {
LAB_00100418:
      uVar6 = 0;
      bVar11 = false;
      goto LAB_00100193;
    }
    pAVar7 = a2i_IPADDRESS(*(char **)(puVar10 + 2));
    *(ASN1_OCTET_STRING **)(local_78 + lVar9) = pAVar7;
    iVar5 = test_ptr("test/v3ext.c",0x1b3,"ip1[i] = a2i_IPADDRESS(ranges[i].ip1)",pAVar7);
    if (iVar5 == 0) goto LAB_00100418;
    pAVar8 = a2i_IPADDRESS(*(char **)(puVar10 + 4));
    *(ASN1_OCTET_STRING **)(local_58 + lVar9) = pAVar8;
    iVar5 = test_ptr("test/v3ext.c",0x1b4,"ip2[i] = a2i_IPADDRESS(ranges[i].ip2)",pAVar8);
    if (iVar5 == 0) goto LAB_00100418;
    iVar5 = X509v3_addr_add_range(uVar6,*puVar10,0,pAVar7->data,pAVar8->data);
    iVar5 = test_true("test/v3ext.c",0x1b5,
                      "X509v3_addr_add_range(addr[i], ranges[i].afi, NULL, ip1[i]->data, ip2[i]->data)"
                      ,iVar5 != 0);
    if (iVar5 == 0) goto LAB_00100418;
    lVar9 = lVar9 + 8;
    puVar10 = puVar10 + 8;
  } while (lVar9 != 0x18);
  uVar6 = OPENSSL_sk_new_null();
  iVar5 = test_ptr("test/v3ext.c",0x1ba,"addrEmpty = sk_IPAddressFamily_new_null()",uVar6);
  if (iVar5 != 0) {
    uVar2 = local_98._0_8_;
    iVar5 = X509v3_addr_subset(0,0);
    iVar5 = test_true("test/v3ext.c",0x1bb,"X509v3_addr_subset(NULL, NULL)",iVar5 != 0);
    if (iVar5 != 0) {
      iVar5 = X509v3_addr_subset(0,uVar2);
      iVar5 = test_true("test/v3ext.c",0x1bc,"X509v3_addr_subset(NULL, addr[0])",iVar5 != 0);
      if (iVar5 != 0) {
        iVar5 = X509v3_addr_subset(uVar6,uVar2);
        iVar5 = test_true("test/v3ext.c",0x1bd,"X509v3_addr_subset(addrEmpty, addr[0])",iVar5 != 0);
        if (iVar5 != 0) {
          iVar5 = X509v3_addr_subset(uVar2,uVar2);
          iVar5 = test_true("test/v3ext.c",0x1be,"X509v3_addr_subset(addr[0], addr[0])",iVar5 != 0);
          if (iVar5 != 0) {
            uVar3 = local_98._8_8_;
            iVar5 = X509v3_addr_subset(uVar2,local_98._8_8_);
            iVar5 = test_true("test/v3ext.c",0x1bf,"X509v3_addr_subset(addr[0], addr[1])",iVar5 != 0
                             );
            uVar4 = local_88;
            if (iVar5 != 0) {
              iVar5 = X509v3_addr_subset(uVar2,local_88);
              iVar5 = test_true("test/v3ext.c",0x1c0,"X509v3_addr_subset(addr[0], addr[2])",
                                iVar5 != 0);
              if (iVar5 != 0) {
                iVar5 = X509v3_addr_subset(uVar3,uVar4);
                iVar5 = test_true("test/v3ext.c",0x1c1,"X509v3_addr_subset(addr[1], addr[2])",
                                  iVar5 != 0);
                if (iVar5 != 0) {
                  iVar5 = X509v3_addr_subset(uVar2,0);
                  iVar5 = test_false("test/v3ext.c",0x1c2,"X509v3_addr_subset(addr[0], NULL)",
                                     iVar5 != 0);
                  if (iVar5 != 0) {
                    iVar5 = X509v3_addr_subset(uVar3,uVar2);
                    iVar5 = test_false("test/v3ext.c",0x1c3,"X509v3_addr_subset(addr[1], addr[0])",
                                       iVar5 != 0);
                    if (iVar5 != 0) {
                      iVar5 = X509v3_addr_subset(uVar4,uVar3);
                      iVar5 = test_false("test/v3ext.c",0x1c4,"X509v3_addr_subset(addr[2], addr[1])"
                                         ,iVar5 != 0);
                      if (iVar5 != 0) {
                        iVar5 = X509v3_addr_subset(uVar2,uVar6);
                        iVar5 = test_false("test/v3ext.c",0x1c5,
                                           "X509v3_addr_subset(addr[0], addrEmpty)",iVar5 != 0);
                        bVar11 = iVar5 != 0;
                        goto LAB_00100193;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  bVar11 = false;
LAB_00100193:
  lVar9 = 0;
  OPENSSL_sk_pop_free(uVar6,IPAddressFamily_free);
  do {
    OPENSSL_sk_pop_free(*(undefined8 *)(local_98 + lVar9),IPAddressFamily_free);
    ASN1_OCTET_STRING_free(*(ASN1_OCTET_STRING **)(local_78 + lVar9));
    puVar1 = (undefined8 *)(local_58 + lVar9);
    lVar9 = lVar9 + 8;
    ASN1_OCTET_STRING_free((ASN1_OCTET_STRING *)*puVar1);
  } while (lVar9 != 0x18);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_addr_fam_len(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  ASN1_OCTET_STRING *a;
  ASN1_OCTET_STRING *a_00;
  IPAddressFamily *pIVar4;
  ASN1_OCTET_STRING *pAVar5;
  IPAddressChoice *pIVar6;
  long in_FS_OFFSET;
  undefined4 local_48;
  undefined2 local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = OPENSSL_sk_new_null();
  iVar1 = test_ptr("test/v3ext.c",0xf1,&_LC17,uVar3);
  if (iVar1 == 0) {
    uVar2 = 0;
    a_00 = (ASN1_OCTET_STRING *)0x0;
    a = (ASN1_OCTET_STRING *)0x0;
    pIVar4 = (IPAddressFamily *)0x0;
    goto LAB_00100487;
  }
  a = a2i_IPADDRESS("192.168.0.0");
  iVar1 = test_ptr("test/v3ext.c",0xf4,&_LC19,a);
  if (iVar1 == 0) {
    a_00 = (ASN1_OCTET_STRING *)0x0;
    pIVar4 = (IPAddressFamily *)0x0;
    uVar2 = 0;
    goto LAB_00100487;
  }
  a_00 = a2i_IPADDRESS("192.168.0.1");
  iVar1 = test_ptr("test/v3ext.c",0xf7,&_LC21,a_00);
  if (iVar1 != 0) {
    iVar1 = X509v3_addr_add_range(uVar3,1,0,a->data,a_00->data);
    iVar1 = test_true("test/v3ext.c",0xf9,
                      "X509v3_addr_add_range(addr, ranges[0].afi, NULL, ip1->data, ip2->data)",
                      iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = X509v3_addr_is_canonical(uVar3);
      iVar1 = test_true("test/v3ext.c",0xfb,"X509v3_addr_is_canonical(addr)",iVar1 != 0);
      if (iVar1 != 0) {
        local_48 = 0xe0d0100;
        local_44 = 0xd0a;
        pIVar4 = IPAddressFamily_new();
        if (pIVar4 != (IPAddressFamily *)0x0) {
          if (pIVar4->ipAddressChoice == (IPAddressChoice *)0x0) {
            pIVar6 = IPAddressChoice_new();
            pIVar4->ipAddressChoice = pIVar6;
            if (pIVar6 != (IPAddressChoice *)0x0) goto LAB_001005db;
          }
          else {
LAB_001005db:
            pAVar5 = pIVar4->addressFamily;
            if (pAVar5 == (ASN1_OCTET_STRING *)0x0) {
              pAVar5 = ASN1_OCTET_STRING_new();
              pIVar4->addressFamily = pAVar5;
              if (pAVar5 == (ASN1_OCTET_STRING *)0x0) goto LAB_001005ff;
            }
            iVar1 = ASN1_OCTET_STRING_set(pAVar5,(uchar *)&local_48,6);
            if ((iVar1 != 0) && (iVar1 = OPENSSL_sk_push(uVar3,pIVar4), iVar1 != 0)) {
              iVar1 = X509v3_addr_canonize(uVar3);
              pIVar4 = (IPAddressFamily *)0x0;
              uVar2 = test_false("test/v3ext.c",0x117,"X509v3_addr_canonize(addr)",iVar1 != 0);
              if (uVar2 == 0) goto LAB_00100487;
              pIVar4 = (IPAddressFamily *)OPENSSL_sk_pop(uVar3);
              IPAddressFamily_free(pIVar4);
              local_48 = CONCAT13(local_48._3_1_,0x10000);
              local_48 = CONCAT22(local_48._2_2_,0x100);
              pIVar4 = IPAddressFamily_new();
              if (pIVar4 == (IPAddressFamily *)0x0) goto LAB_0010052f;
              if (pIVar4->ipAddressChoice == (IPAddressChoice *)0x0) {
                pIVar6 = IPAddressChoice_new();
                pIVar4->ipAddressChoice = pIVar6;
                if (pIVar6 == (IPAddressChoice *)0x0) goto LAB_001005ff;
              }
              pAVar5 = pIVar4->addressFamily;
              if (pAVar5 == (ASN1_OCTET_STRING *)0x0) {
                pAVar5 = ASN1_OCTET_STRING_new();
                pIVar4->addressFamily = pAVar5;
                if (pAVar5 == (ASN1_OCTET_STRING *)0x0) goto LAB_001005ff;
              }
              iVar1 = ASN1_OCTET_STRING_set(pAVar5,(uchar *)&local_48,3);
              if (iVar1 != 0) {
                pIVar4->ipAddressChoice->type = 0;
                iVar1 = OPENSSL_sk_push(uVar3,pIVar4);
                if (iVar1 != 0) {
                  iVar1 = X509v3_addr_canonize(uVar3);
                  iVar1 = test_true("test/v3ext.c",0x136,"X509v3_addr_canonize(addr)",iVar1 != 0);
                  uVar2 = (uint)(iVar1 != 0);
                  pIVar4 = (IPAddressFamily *)0x0;
                  goto LAB_00100487;
                }
              }
            }
          }
LAB_001005ff:
          uVar2 = 0;
          goto LAB_00100487;
        }
      }
    }
  }
LAB_0010052f:
  pIVar4 = (IPAddressFamily *)0x0;
  uVar2 = 0;
LAB_00100487:
  IPAddressFamily_free(pIVar4);
  OPENSSL_sk_pop_free(uVar3,IPAddressFamily_free);
  ASN1_OCTET_STRING_free(a);
  ASN1_OCTET_STRING_free(a_00);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



undefined4 test_ext_syntax(void)

{
  undefined *buf;
  int iVar1;
  BIO *a;
  CONF *conf;
  undefined **ppuVar2;
  size_t sVar3;
  long in_FS_OFFSET;
  undefined4 local_9c;
  long local_90;
  X509V3_CTX local_88;
  long local_40;
  
  ppuVar2 = &extvalues;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_9c = 1;
  sVar3 = 0x22;
  do {
    buf = *ppuVar2;
    a = BIO_new_mem_buf(buf,(int)sVar3);
    iVar1 = test_ptr("test/v3ext.c",0x17f,"extbio",a);
    if (iVar1 == 0) {
LAB_00100988:
      local_9c = 0;
LAB_0010098b:
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return local_9c;
    }
    conf = (CONF *)NCONF_new_ex(0,0);
    iVar1 = test_ptr("test/v3ext.c",0x183,&_LC29,conf);
    if (iVar1 == 0) {
      BIO_free(a);
      goto LAB_00100988;
    }
    iVar1 = NCONF_load_bio(conf,a,&local_90);
    iVar1 = test_long_gt("test/v3ext.c",0x187,"NCONF_load_bio(conf, extbio, &eline)",&_LC30,
                         (long)iVar1,0);
    if (iVar1 == 0) {
LAB_0010084e:
      local_9c = 0;
    }
    else {
      X509V3_set_ctx(&local_88,(X509 *)0x0,(X509 *)0x0,(X509_REQ *)0x0,(X509_CRL *)0x0,1);
      X509V3_set_nconf(&local_88,conf);
      if (*(int *)(ppuVar2 + 1) == 0) {
        ERR_set_mark();
        iVar1 = X509V3_EXT_add_nconf(conf,&local_88,"default",(X509 *)0x0);
        iVar1 = test_false("test/v3ext.c",0x195,
                           "X509V3_EXT_add_nconf(conf, &ctx, \"default\", NULL)",iVar1 != 0);
        if (iVar1 == 0) {
          test_info("test/v3ext.c",0x198,"Value: %s",buf);
          ERR_clear_last_mark();
          goto LAB_0010084e;
        }
        ERR_pop_to_mark();
      }
      else {
        iVar1 = X509V3_EXT_add_nconf(conf,&local_88,"default",(X509 *)0x0);
        iVar1 = test_true("test/v3ext.c",0x18e,"X509V3_EXT_add_nconf(conf, &ctx, \"default\", NULL)"
                          ,iVar1 != 0);
        if (iVar1 == 0) {
          test_info("test/v3ext.c",400,"Value: %s",buf);
          goto LAB_0010084e;
        }
      }
    }
    ppuVar2 = ppuVar2 + 2;
    BIO_free(a);
    NCONF_free(conf);
    if (ppuVar2 == (undefined **)&ranges) goto LAB_0010098b;
    sVar3 = strlen(*ppuVar2);
  } while( true );
}



undefined8 test_addr_ranges(void)

{
  dword dVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ASN1_OCTET_STRING *a;
  ASN1_OCTET_STRING *a_00;
  long lVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  NoteGnuProperty_4 *pNVar8;
  
  pNVar8 = (NoteGnuProperty_4 *)&ranges;
  do {
    uVar4 = OPENSSL_sk_new_null();
    iVar2 = test_ptr("test/v3ext.c",0xb7,&_LC17,uVar4);
    if (iVar2 == 0) {
LAB_00100d30:
      uVar7 = 0;
      a_00 = (ASN1_OCTET_STRING *)0x0;
      a = (ASN1_OCTET_STRING *)0x0;
      goto LAB_00100bb2;
    }
    iVar2 = X509v3_addr_canonize(uVar4);
    iVar2 = test_true("test/v3ext.c",0xbd,"X509v3_addr_canonize(addr)",iVar2 != 0);
    if (iVar2 == 0) goto LAB_00100d30;
    a = a2i_IPADDRESS(*(char **)&pNVar8->type);
    iVar2 = test_ptr("test/v3ext.c",0xc1,&_LC19,a);
    if (iVar2 == 0) {
LAB_00100d40:
      uVar7 = 0;
      a_00 = (ASN1_OCTET_STRING *)0x0;
      goto LAB_00100bb2;
    }
    iVar2 = test_true("test/v3ext.c",0xc3,"ip1->length == 4 || ip1->length == 16",
                      a->length == 4 || a->length == 0x10);
    if (iVar2 == 0) goto LAB_00100d40;
    a_00 = a2i_IPADDRESS(*(char **)(pNVar8 + 1));
    iVar2 = test_ptr("test/v3ext.c",0xc6,&_LC21,a_00);
    if (iVar2 == 0) {
LAB_00100bb0:
      uVar7 = 0;
      goto LAB_00100bb2;
    }
    iVar2 = test_int_eq("test/v3ext.c",200,"ip2->length","ip1->length",a_00->length,a->length);
    if (iVar2 == 0) goto LAB_00100bb0;
    iVar2 = memcmp(a->data,a_00->data,(long)a->length);
    iVar2 = test_true("test/v3ext.c",0xca,"memcmp(ip1->data, ip2->data, ip1->length) <= 0",iVar2 < 1
                     );
    if (iVar2 == 0) goto LAB_00100bb0;
    iVar2 = X509v3_addr_add_range(uVar4,pNVar8->namesz,0,a->data,a_00->data);
    iVar2 = test_true("test/v3ext.c",0xcd,
                      "X509v3_addr_add_range(addr, ranges[i].afi, NULL, ip1->data, ip2->data)",
                      iVar2 != 0);
    if (iVar2 == 0) goto LAB_00100bb0;
    iVar2 = X509v3_addr_is_canonical(uVar4);
    iVar2 = test_true("test/v3ext.c",0xd0,"X509v3_addr_is_canonical(addr)",iVar2 != 0);
    if (iVar2 == 0) goto LAB_00100bb0;
    dVar1 = pNVar8[1].type;
    uVar3 = OPENSSL_sk_num(uVar4);
    iVar2 = test_int_eq("test/v3ext.c",0x97,"sk_IPAddressFamily_num(addr)",&_LC40,uVar3,1);
    if (iVar2 == 0) goto LAB_00100bb0;
    lVar5 = OPENSSL_sk_value(uVar4,0);
    iVar2 = test_ptr("test/v3ext.c",0x9b,&_LC42,lVar5);
    if (iVar2 == 0) goto LAB_00100bb0;
    iVar2 = test_int_eq("test/v3ext.c",0x9e,"fam->ipAddressChoice->type",
                        "IPAddressChoice_addressesOrRanges",**(undefined4 **)(lVar5 + 8),1);
    if (iVar2 == 0) goto LAB_00100bb0;
    uVar3 = OPENSSL_sk_num(*(undefined8 *)(*(long *)(lVar5 + 8) + 8));
    iVar2 = test_int_eq("test/v3ext.c",0xa1,
                        "sk_IPAddressOrRange_num(fam->ipAddressChoice->u.addressesOrRanges)",&_LC40,
                        uVar3,1);
    if (iVar2 == 0) goto LAB_00100bb0;
    puVar6 = (undefined4 *)OPENSSL_sk_value(*(undefined8 *)(*(long *)(lVar5 + 8) + 8),0);
    iVar2 = test_ptr("test/v3ext.c",0xa5,&_LC46,puVar6);
    if (iVar2 == 0) goto LAB_00100bb0;
    iVar2 = test_int_eq("test/v3ext.c",0xa8,"aorr->type",&_LC47,*puVar6,dVar1);
    if (iVar2 == 0) goto LAB_00100bb0;
    pNVar8 = pNVar8 + 2;
    OPENSSL_sk_pop_free(uVar4,IPAddressFamily_free);
    ASN1_OCTET_STRING_free(a);
    ASN1_OCTET_STRING_free(a_00);
  } while (pNVar8 != &NoteGnuProperty_4_00102bc0);
  uVar7 = 1;
  a_00 = (ASN1_OCTET_STRING *)0x0;
  a = (ASN1_OCTET_STRING *)0x0;
  uVar4 = 0;
LAB_00100bb2:
  OPENSSL_sk_pop_free(uVar4,IPAddressFamily_free);
  ASN1_OCTET_STRING_free(a);
  ASN1_OCTET_STRING_free(a_00);
  return uVar7;
}



uint test_asid(void)

{
  int iVar1;
  uint uVar2;
  ASIdentifiers *a;
  ASIdentifiers *a_00;
  ASIdentifiers *a_01;
  ASIdentifiers *a_02;
  ASN1_INTEGER *a_03;
  ASN1_INTEGER *local_40;
  
  a = ASIdentifiers_new();
  a_00 = ASIdentifiers_new();
  a_01 = ASIdentifiers_new();
  a_02 = ASIdentifiers_new();
  iVar1 = test_ptr("test/v3ext.c",0x32,"asid1",a);
  if (iVar1 != 0) {
    iVar1 = test_ptr("test/v3ext.c",0x33,"asid2",a_00);
    if (iVar1 != 0) {
      iVar1 = test_ptr("test/v3ext.c",0x34,"asid3",a_01);
      if (iVar1 != 0) {
        local_40 = ASN1_INTEGER_new();
        iVar1 = test_ptr("test/v3ext.c",0x37,"val1 = ASN1_INTEGER_new()",local_40);
        if (iVar1 != 0) {
          iVar1 = ASN1_INTEGER_set_int64(local_40,0xfbf0);
          iVar1 = test_true("test/v3ext.c",0x38,"ASN1_INTEGER_set_int64(val1, 64496)",iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = X509v3_asid_add_id_or_range(a,0,local_40,0);
            iVar1 = test_true("test/v3ext.c",0x3b,
                              "X509v3_asid_add_id_or_range(asid1, V3_ASID_ASNUM, val1, NULL)",
                              iVar1 != 0);
            if (iVar1 != 0) {
              a_03 = ASN1_INTEGER_new();
              uVar2 = test_ptr("test/v3ext.c",0x3f,"val2 = ASN1_INTEGER_new()",a_03);
              local_40 = (ASN1_INTEGER *)0x0;
              if (uVar2 == 0) goto LAB_00100dac;
              local_40 = (ASN1_INTEGER *)0x0;
              iVar1 = ASN1_INTEGER_set_int64(a_03,0xfbf1);
              uVar2 = test_true("test/v3ext.c",0x40,"ASN1_INTEGER_set_int64(val2, 64497)",iVar1 != 0
                               );
              if (uVar2 == 0) goto LAB_00100dac;
              iVar1 = X509v3_asid_add_id_or_range(a_00,0,a_03,0);
              uVar2 = test_true("test/v3ext.c",0x43,
                                "X509v3_asid_add_id_or_range(asid2, V3_ASID_ASNUM, val2, NULL)",
                                iVar1 != 0);
              local_40 = (ASN1_INTEGER *)0x0;
              if (uVar2 == 0) goto LAB_00100dac;
              local_40 = ASN1_INTEGER_new();
              a_03 = (ASN1_INTEGER *)0x0;
              uVar2 = test_ptr("test/v3ext.c",0x47,"val1 = ASN1_INTEGER_new()",local_40);
              if (uVar2 == 0) goto LAB_00100dac;
              iVar1 = ASN1_INTEGER_set_int64(local_40,0xfbf0);
              uVar2 = test_true("test/v3ext.c",0x48,"ASN1_INTEGER_set_int64(val1, 64496)",iVar1 != 0
                               );
              if (uVar2 == 0) goto LAB_00100dac;
              a_03 = ASN1_INTEGER_new();
              iVar1 = test_ptr("test/v3ext.c",0x49,"val2 = ASN1_INTEGER_new()",a_03);
              if (iVar1 != 0) {
                iVar1 = ASN1_INTEGER_set_int64(a_03,0xfbf1);
                iVar1 = test_true("test/v3ext.c",0x4a,"ASN1_INTEGER_set_int64(val2, 64497)",
                                  iVar1 != 0);
                if (iVar1 != 0) {
                  iVar1 = X509v3_asid_add_id_or_range(a_01,0,local_40,a_03);
                  iVar1 = test_true("test/v3ext.c",0x51,
                                    "X509v3_asid_add_id_or_range(asid3, V3_ASID_ASNUM, val1, val2)",
                                    iVar1 != 0);
                  if (iVar1 != 0) {
                    iVar1 = X509v3_asid_subset(0,0);
                    iVar1 = test_true("test/v3ext.c",0x56,"X509v3_asid_subset(NULL, NULL)",
                                      iVar1 != 0);
                    if (iVar1 != 0) {
                      iVar1 = X509v3_asid_subset(0,a);
                      iVar1 = test_true("test/v3ext.c",0x57,"X509v3_asid_subset(NULL, asid1)",
                                        iVar1 != 0);
                      if (iVar1 != 0) {
                        iVar1 = X509v3_asid_subset(a,a);
                        iVar1 = test_true("test/v3ext.c",0x58,"X509v3_asid_subset(asid1, asid1)",
                                          iVar1 != 0);
                        if (iVar1 != 0) {
                          iVar1 = X509v3_asid_subset(a_00,a_00);
                          iVar1 = test_true("test/v3ext.c",0x59,"X509v3_asid_subset(asid2, asid2)",
                                            iVar1 != 0);
                          if (iVar1 != 0) {
                            iVar1 = X509v3_asid_subset(a,a_01);
                            iVar1 = test_true("test/v3ext.c",0x5a,"X509v3_asid_subset(asid1, asid3)"
                                              ,iVar1 != 0);
                            if (iVar1 != 0) {
                              iVar1 = X509v3_asid_subset(a_00,a_01);
                              iVar1 = test_true("test/v3ext.c",0x5b,
                                                "X509v3_asid_subset(asid2, asid3)",iVar1 != 0);
                              if (iVar1 != 0) {
                                iVar1 = X509v3_asid_subset(a_01,a_01);
                                iVar1 = test_true("test/v3ext.c",0x5c,
                                                  "X509v3_asid_subset(asid3, asid3)",iVar1 != 0);
                                if (iVar1 != 0) {
                                  iVar1 = X509v3_asid_subset(a_02,a);
                                  iVar1 = test_true("test/v3ext.c",0x5d,
                                                    "X509v3_asid_subset(asid4, asid1)",iVar1 != 0);
                                  if (iVar1 != 0) {
                                    iVar1 = X509v3_asid_subset(a_02,a_00);
                                    iVar1 = test_true("test/v3ext.c",0x5e,
                                                      "X509v3_asid_subset(asid4, asid2)",iVar1 != 0)
                                    ;
                                    if (iVar1 != 0) {
                                      iVar1 = X509v3_asid_subset(a_02,a_01);
                                      iVar1 = test_true("test/v3ext.c",0x5f,
                                                        "X509v3_asid_subset(asid4, asid3)",
                                                        iVar1 != 0);
                                      if (iVar1 != 0) {
                                        iVar1 = X509v3_asid_subset(a,0);
                                        iVar1 = test_false("test/v3ext.c",99,
                                                           "X509v3_asid_subset(asid1, NULL)",
                                                           iVar1 != 0);
                                        if (iVar1 != 0) {
                                          iVar1 = X509v3_asid_subset(a,a_00);
                                          iVar1 = test_false("test/v3ext.c",100,
                                                             "X509v3_asid_subset(asid1, asid2)",
                                                             iVar1 != 0);
                                          if (iVar1 != 0) {
                                            iVar1 = X509v3_asid_subset(a_00,a);
                                            iVar1 = test_false("test/v3ext.c",0x65,
                                                               "X509v3_asid_subset(asid2, asid1)",
                                                               iVar1 != 0);
                                            if (iVar1 != 0) {
                                              iVar1 = X509v3_asid_subset(a_01,a);
                                              iVar1 = test_false("test/v3ext.c",0x66,
                                                                 "X509v3_asid_subset(asid3, asid1)",
                                                                 iVar1 != 0);
                                              if (iVar1 != 0) {
                                                iVar1 = X509v3_asid_subset(a_01,a_00);
                                                iVar1 = test_false("test/v3ext.c",0x67,
                                                                                                                                      
                                                  "X509v3_asid_subset(asid3, asid2)",iVar1 != 0);
                                                if (iVar1 != 0) {
                                                  iVar1 = X509v3_asid_subset(a,a_02);
                                                  iVar1 = test_false("test/v3ext.c",0x68,
                                                                                                                                          
                                                  "X509v3_asid_subset(asid1, asid4)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = X509v3_asid_subset(a_00,a_02);
                                                    iVar1 = test_false("test/v3ext.c",0x69,
                                                                                                                                              
                                                  "X509v3_asid_subset(asid2, asid4)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = X509v3_asid_subset(a_01,a_02);
                                                    iVar1 = test_false("test/v3ext.c",0x6a,
                                                                                                                                              
                                                  "X509v3_asid_subset(asid3, asid4)",iVar1 != 0);
                                                  a_03 = (ASN1_INTEGER *)0x0;
                                                  local_40 = (ASN1_INTEGER *)0x0;
                                                  uVar2 = (uint)(iVar1 != 0);
                                                  goto LAB_00100dac;
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    goto LAB_00100da4;
                  }
                }
              }
              uVar2 = 0;
              goto LAB_00100dac;
            }
          }
        }
        uVar2 = 0;
        a_03 = (ASN1_INTEGER *)0x0;
        goto LAB_00100dac;
      }
    }
  }
LAB_00100da4:
  uVar2 = 0;
  a_03 = (ASN1_INTEGER *)0x0;
  local_40 = (ASN1_INTEGER *)0x0;
LAB_00100dac:
  ASN1_INTEGER_free(local_40);
  ASN1_INTEGER_free(a_03);
  ASIdentifiers_free(a);
  ASIdentifiers_free(a_00);
  ASIdentifiers_free(a_01);
  ASIdentifiers_free(a_02);
  return uVar2;
}



uint test_pathlen(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  BIO *bp;
  X509 *a;
  
  a = (X509 *)0x0;
  bp = BIO_new_file(infile,"r");
  uVar1 = test_ptr("test/v3ext.c",0x1d,"b = BIO_new_file(infile, \"r\")");
  if (uVar1 != 0) {
    a = PEM_read_bio_X509(bp,(X509 **)0x0,(undefined1 *)0x0,(void *)0x0);
    uVar1 = test_ptr("test/v3ext.c",0x1e,"x = PEM_read_bio_X509(b, NULL, NULL, NULL)",a);
    if (uVar1 != 0) {
      uVar2 = X509_get_pathlen(a);
      iVar3 = test_int_eq("test/v3ext.c",0x1f,"pathlen = X509_get_pathlen(x)",&_LC80,uVar2,6);
      uVar1 = (uint)(iVar3 != 0);
    }
  }
  BIO_free(bp);
  X509_free(a);
  return uVar1;
}



undefined1 * test_get_options(void)

{
  return options_0;
}



undefined8 setup_tests(void)

{
  int iVar1;
  
  iVar1 = test_skip_common_options();
  if (iVar1 == 0) {
    test_error("test/v3ext.c",0x1d7,"Error parsing test options\n");
  }
  else {
    infile = test_get_argument(0);
    iVar1 = test_ptr("test/v3ext.c",0x1db,"infile = test_get_argument(0)",infile);
    if (iVar1 != 0) {
      add_test("test_pathlen",test_pathlen);
      add_test("test_asid",test_asid);
      add_test("test_addr_ranges",test_addr_ranges);
      add_test("test_ext_syntax",test_ext_syntax);
      add_test("test_addr_fam_len",test_addr_fam_len);
      add_test("test_addr_subset",0x100000);
      return 1;
    }
  }
  return 0;
}


