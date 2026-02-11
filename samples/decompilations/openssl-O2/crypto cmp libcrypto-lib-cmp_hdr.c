
undefined4 set_random_constprop_0(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *ptr;
  
  ptr = CRYPTO_malloc(0x10,"crypto/cmp/cmp_hdr.c",0x7c);
  if (ptr != (void *)0x0) {
    iVar1 = RAND_bytes_ex(*param_2,ptr,0x10,0);
    if (0 < iVar1) {
      uVar2 = ossl_cmp_asn1_octet_string_set1_bytes(param_1,ptr,0x10);
      goto LAB_00100076;
    }
  }
  ERR_new();
  uVar2 = 0;
  ERR_set_debug("crypto/cmp/cmp_hdr.c",0x80,"set_random");
  ERR_set_error(0x3a,0x6e,0);
LAB_00100076:
  CRYPTO_free(ptr);
  return uVar2;
}



int ossl_cmp_hdr_set_pvno(undefined8 *param_1,int param_2)

{
  int iVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    iVar1 = ASN1_INTEGER_set((ASN1_INTEGER *)*param_1,(long)param_2);
    return iVar1;
  }
  return 0;
}



ulong ossl_cmp_hdr_get_pvno(undefined8 *param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (undefined8 *)0x0) {
    iVar1 = ASN1_INTEGER_get_int64(&local_18,*param_1);
    if ((iVar1 != 0) && (local_18 < 0x80000000)) goto LAB_00100108;
  }
  local_18 = 0xffffffff;
LAB_00100108:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_18;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int ossl_cmp_hdr_get_protection_nid(long param_1)

{
  int iVar1;
  
  if ((param_1 != 0) && (*(undefined8 **)(param_1 + 0x20) != (undefined8 *)0x0)) {
    iVar1 = OBJ_obj2nid((ASN1_OBJECT *)**(undefined8 **)(param_1 + 0x20));
    return iVar1;
  }
  return 0;
}



undefined8 OSSL_CMP_HDR_get0_transactionID(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 0x38);
  }
  ERR_new();
  ERR_set_debug("crypto/cmp/cmp_hdr.c",0x35,"OSSL_CMP_HDR_get0_transactionID");
  ERR_set_error(0x3a,0x67,0);
  return 0;
}



undefined8 ossl_cmp_hdr_get0_senderNonce(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 0x40);
  }
  return 0;
}



undefined8 OSSL_CMP_HDR_get0_recipNonce(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 0x48);
  }
  ERR_new();
  ERR_set_debug("crypto/cmp/cmp_hdr.c",0x45,"OSSL_CMP_HDR_get0_recipNonce");
  ERR_set_error(0x3a,0x67,0);
  return 0;
}



undefined8 OSSL_CMP_HDR_get0_geninfo_ITAVs(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 0x58);
  }
  ERR_new();
  ERR_set_debug("crypto/cmp/cmp_hdr.c",0x4f,"OSSL_CMP_HDR_get0_geninfo_ITAVs");
  ERR_set_error(0x3a,0x67,0);
  return 0;
}



bool ossl_cmp_general_name_is_NULL_DN(int *param_1)

{
  bool bVar1;
  X509_NAME_ENTRY *pXVar2;
  
  bVar1 = true;
  if ((param_1 != (int *)0x0) && (bVar1 = false, *param_1 == 4)) {
    pXVar2 = X509_NAME_get_entry(*(X509_NAME **)(param_1 + 2),0);
    return pXVar2 == (X509_NAME_ENTRY *)0x0;
  }
  return bVar1;
}



undefined8 ossl_cmp_hdr_set1_sender(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = GENERAL_NAME_set1_X509_NAME(param_1 + 8);
    return uVar1;
  }
  return 0;
}



undefined8 ossl_cmp_hdr_set1_recipient(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = GENERAL_NAME_set1_X509_NAME(param_1 + 0x10);
    return uVar1;
  }
  return 0;
}



bool ossl_cmp_hdr_update_messageTime(long param_1)

{
  time_t t;
  ASN1_GENERALIZEDTIME *pAVar1;
  
  if (param_1 == 0) {
    return false;
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    pAVar1 = ASN1_GENERALIZEDTIME_new();
    *(ASN1_GENERALIZEDTIME **)(param_1 + 0x18) = pAVar1;
    if (pAVar1 == (ASN1_GENERALIZEDTIME *)0x0) {
      return false;
    }
  }
  t = time((time_t *)0x0);
  pAVar1 = ASN1_GENERALIZEDTIME_set(*(ASN1_GENERALIZEDTIME **)(param_1 + 0x18),t);
  return pAVar1 != (ASN1_GENERALIZEDTIME *)0x0;
}



undefined8 ossl_cmp_hdr_set1_senderKID(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = ossl_cmp_asn1_octet_string_set1(param_1 + 0x28);
    return uVar1;
  }
  return 0;
}



undefined8 ossl_cmp_hdr_push0_freeText(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    lVar2 = *(long *)(param_1 + 0x50);
    if (lVar2 == 0) {
      lVar2 = OPENSSL_sk_new_null();
      *(long *)(param_1 + 0x50) = lVar2;
      if (lVar2 == 0) {
        return 0;
      }
    }
    uVar1 = OPENSSL_sk_push(lVar2,param_2);
    return uVar1;
  }
  return 0;
}



undefined8 ossl_cmp_hdr_push1_freeText(long param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 == (undefined4 *)0x0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x50);
  if (lVar2 == 0) {
    lVar2 = OPENSSL_sk_new_null();
    *(long *)(param_1 + 0x50) = lVar2;
    if (lVar2 == 0) {
      return 0;
    }
  }
  uVar1 = ossl_cmp_sk_ASN1_UTF8STRING_push_str(lVar2,*(undefined8 *)(param_2 + 2),*param_2);
  return uVar1;
}



undefined8 ossl_cmp_hdr_generalInfo_push0_item(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar1 = OSSL_CMP_ITAV_push0_stack_item(param_1 + 0x58);
    return uVar1;
  }
  return 0;
}



undefined8 ossl_cmp_hdr_generalInfo_push1_items(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar4 = 0;
  while( true ) {
    iVar1 = OPENSSL_sk_num(param_2);
    if (iVar1 <= iVar4) {
      return 1;
    }
    uVar2 = OPENSSL_sk_value(param_2,iVar4);
    lVar3 = OSSL_CMP_ITAV_dup(uVar2);
    if (lVar3 == 0) break;
    iVar1 = ossl_cmp_hdr_generalInfo_push0_item(param_1,lVar3);
    if (iVar1 == 0) {
      OSSL_CMP_ITAV_free(lVar3);
      return 0;
    }
    iVar4 = iVar4 + 1;
  }
  return 0;
}



undefined8 ossl_cmp_hdr_set_implicitConfirm(long param_1)

{
  int iVar1;
  ASN1_TYPE *a;
  ASN1_OBJECT *pAVar2;
  long lVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  a = (ASN1_TYPE *)ASN1_NULL_new();
  if (a != (ASN1_TYPE *)0x0) {
    pAVar2 = OBJ_nid2obj(0x136);
    lVar3 = OSSL_CMP_ITAV_create(pAVar2,a);
    if (lVar3 != 0) {
      iVar1 = ossl_cmp_hdr_generalInfo_push0_item(param_1,lVar3);
      if (iVar1 != 0) {
        return 1;
      }
    }
    ASN1_TYPE_free(a);
    OSSL_CMP_ITAV_free(lVar3);
  }
  return 0;
}



undefined8 ossl_cmp_hdr_has_implicitConfirm(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x58));
  if (0 < iVar1) {
    iVar4 = 0;
    do {
      puVar3 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x58),iVar4);
      if (puVar3 != (undefined8 *)0x0) {
        iVar2 = OBJ_obj2nid((ASN1_OBJECT *)*puVar3);
        if (iVar2 == 0x136) {
          return 1;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar1 != iVar4);
  }
  return 0;
}



undefined8 ossl_cmp_hdr_set_transactionID(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  char *ptr;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x118);
  if (lVar3 == 0) {
    iVar1 = set_random_constprop_0(param_1 + 0x118,param_1);
    if (iVar1 == 0) {
      return 0;
    }
    ptr = i2s_ASN1_OCTET_STRING((X509V3_EXT_METHOD *)0x0,*(ASN1_OCTET_STRING **)(param_1 + 0x118));
    if (ptr != (char *)0x0) {
      ossl_cmp_print_log(7,param_1,"ossl_cmp_hdr_set_transactionID","crypto/cmp/cmp_hdr.c",0x107,
                         "DEBUG","Starting new transaction with ID=%s",ptr);
    }
    CRYPTO_free(ptr);
    lVar3 = *(long *)(param_1 + 0x118);
  }
  uVar2 = ossl_cmp_asn1_octet_string_set1(param_2 + 0x38,lVar3);
  return uVar2;
}



bool ossl_cmp_hdr_init(long param_1,long param_2)

{
  int iVar1;
  X509_NAME *pXVar2;
  X509 *pXVar3;
  
  if (param_1 == 0) {
    return false;
  }
  if ((param_2 != 0) && (iVar1 = ossl_cmp_hdr_set_pvno(param_2,2), iVar1 != 0)) {
    pXVar3 = *(X509 **)(param_1 + 200);
    if ((pXVar3 == (X509 *)0x0) && (pXVar3 = *(X509 **)(param_1 + 0x1b0), pXVar3 == (X509 *)0x0)) {
      if (*(long *)(param_1 + 0x1b8) == 0) {
        pXVar2 = *(X509_NAME **)(param_1 + 0x180);
      }
      else {
        pXVar2 = (X509_NAME *)X509_REQ_get_subject_name();
      }
    }
    else {
      pXVar2 = X509_get_subject_name(pXVar3);
    }
    iVar1 = ossl_cmp_hdr_set1_sender(param_2,pXVar2);
    if (iVar1 != 0) {
      pXVar3 = *(X509 **)(param_1 + 0x108);
      if (pXVar3 == (X509 *)0x0) {
        if (*(X509 **)(param_1 + 0x90) == (X509 *)0x0) {
          pXVar3 = *(X509 **)(param_1 + 0x168);
          if ((pXVar3 == (X509 *)0x0) &&
             ((pXVar3 = *(X509 **)(param_1 + 0x1b0), pXVar3 != (X509 *)0x0 ||
              (pXVar3 = *(X509 **)(param_1 + 200), pXVar3 != (X509 *)0x0)))) {
            pXVar3 = (X509 *)X509_get_issuer_name(pXVar3);
          }
        }
        else {
          pXVar3 = (X509 *)X509_get_subject_name(*(X509 **)(param_1 + 0x90));
        }
      }
      iVar1 = ossl_cmp_hdr_set1_recipient(param_2,pXVar3);
      if ((((iVar1 != 0) && (iVar1 = ossl_cmp_hdr_update_messageTime(param_2), iVar1 != 0)) &&
          ((*(long *)(param_1 + 0x128) == 0 ||
           (iVar1 = ossl_cmp_asn1_octet_string_set1(param_2 + 0x48), iVar1 != 0)))) &&
         (((iVar1 = ossl_cmp_hdr_set_transactionID(param_1,param_2), iVar1 != 0 &&
           (iVar1 = set_random_constprop_0(param_2 + 0x40,param_1), iVar1 != 0)) &&
          (iVar1 = OSSL_CMP_CTX_set1_senderNonce(param_1,*(undefined8 *)(param_2 + 0x40)),
          iVar1 != 0)))) {
        if (*(long *)(param_1 + 0x138) == 0) {
          return true;
        }
        iVar1 = ossl_cmp_hdr_push1_freeText(param_2);
        return iVar1 != 0;
      }
    }
  }
  return false;
}


