
int X509_set_serialNumber(X509 *x,ASN1_INTEGER *serial)

{
  int iVar1;
  
  if (x == (X509 *)0x0) {
    return 0;
  }
  if ((ASN1_INTEGER *)&x->sig_alg == serial) {
    *(undefined4 *)&x->crldp = 1;
    return 1;
  }
  iVar1 = ASN1_STRING_copy((ASN1_STRING *)&x->sig_alg,serial);
  return iVar1;
}



int X509_set_issuer_name(X509 *x,X509_NAME *name)

{
  int iVar1;
  
  if (x == (X509 *)0x0) {
    return 0;
  }
  iVar1 = X509_NAME_set((X509_NAME **)&(x->ex_data).dummy,name);
  if (iVar1 != 0) {
    *(undefined4 *)&x->crldp = 1;
    return 1;
  }
  return 0;
}



int X509_set_subject_name(X509 *x,X509_NAME *name)

{
  int iVar1;
  
  if (x == (X509 *)0x0) {
    return 0;
  }
  iVar1 = X509_NAME_set((X509_NAME **)&x->ex_flags,name);
  if (iVar1 != 0) {
    *(undefined4 *)&x->crldp = 1;
    return 1;
  }
  return 0;
}



undefined8 ossl_x509_set1_time(undefined4 *param_1,long *param_2,ASN1_STRING *param_3)

{
  ASN1_STRING *pAVar1;
  
  if ((ASN1_STRING *)*param_2 == param_3) {
    return 1;
  }
  pAVar1 = ASN1_STRING_dup(param_3);
  if ((param_3 != (ASN1_STRING *)0x0) && (pAVar1 == (ASN1_STRING *)0x0)) {
    return 0;
  }
  ASN1_TIME_free((ASN1_TIME *)*param_2);
  *param_2 = (long)pAVar1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 1;
  }
  return 1;
}



undefined8 X509_set1_notBefore(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar1 = ossl_x509_set1_time(param_1 + 0x80,param_1 + 0x38,param_2);
    return uVar1;
  }
  return 0;
}



undefined8 X509_set1_notAfter(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar1 = ossl_x509_set1_time(param_1 + 0x80,param_1 + 0x40,param_2);
    return uVar1;
  }
  return 0;
}



int X509_set_pubkey(X509 *x,EVP_PKEY *pkey)

{
  int iVar1;
  
  if (x == (X509 *)0x0) {
    return 0;
  }
  iVar1 = X509_PUBKEY_set((X509_PUBKEY **)&x->ex_kusage,pkey);
  if (iVar1 != 0) {
    *(undefined4 *)&x->crldp = 1;
    return 1;
  }
  return 0;
}



bool X509_up_ref(long param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0xc0);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return 1 < iVar2 + 1;
}



void X509_get_version(undefined8 *param_1)

{
  ASN1_INTEGER_get((ASN1_INTEGER *)*param_1);
  return;
}



int X509_set_version(X509 *x,long version)

{
  int iVar1;
  long lVar2;
  X509_CINF *a;
  
  if (x == (X509 *)0x0) {
    return 0;
  }
  lVar2 = X509_get_version();
  if (lVar2 != version) {
    a = x->cert_info;
    if (version == 0) {
      ASN1_INTEGER_free((ASN1_INTEGER *)a);
      x->cert_info = (X509_CINF *)0x0;
    }
    else {
      if (a == (X509_CINF *)0x0) {
        a = (X509_CINF *)ASN1_INTEGER_new();
        x->cert_info = a;
        if (a == (X509_CINF *)0x0) {
          return 0;
        }
      }
      iVar1 = ASN1_INTEGER_set((ASN1_INTEGER *)a,version);
      if (iVar1 == 0) {
        return 0;
      }
    }
    *(undefined4 *)&x->crldp = 1;
  }
  return 1;
}



undefined8 X509_get0_notBefore(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



undefined8 X509_get0_notAfter(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



undefined8 X509_getm_notBefore(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



undefined8 X509_getm_notAfter(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



void X509_get_signature_type(long param_1)

{
  int type;
  
  type = OBJ_obj2nid(*(ASN1_OBJECT **)(param_1 + 0x88));
  EVP_PKEY_type(type);
  return;
}



undefined8 X509_get_X509_PUBKEY(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



undefined8 X509_get0_extensions(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



void X509_get0_uids(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x58);
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = *(undefined8 *)(param_1 + 0x60);
  }
  return;
}



long X509_get0_tbs_sigalg(long param_1)

{
  return param_1 + 0x20;
}



uint X509_SIG_INFO_get(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,
                      undefined4 *param_4,undefined4 *param_5)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_1;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = param_1[1];
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = param_1[2];
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = param_1[3];
  }
  return param_1[3] & 1;
}



void X509_SIG_INFO_set(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                      undefined4 param_5)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  return;
}



void X509_get_signature_info
               (X509 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  X509_check_purpose(param_1,-1,-1);
  X509_SIG_INFO_get(param_1->sha1_hash + 8,param_2,param_3,param_4,param_5);
  return;
}



undefined8 ossl_x509_init_sig_info(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  EVP_PKEY_ASN1_METHOD *pEVar6;
  char *name;
  EVP_MD *pEVar7;
  long in_FS_OFFSET;
  int local_28;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = X509_PUBKEY_get0(*(undefined8 *)(param_1 + 0x50));
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0xffffffff;
  iVar1 = OBJ_obj2nid(*(ASN1_OBJECT **)(param_1 + 0x88));
  iVar1 = OBJ_find_sigid_algs(iVar1,&local_24,&local_28);
  if ((iVar1 == 0) || (local_28 == 0)) {
    ERR_new();
    ERR_set_debug("crypto/x509/x509_set.c",0xe1,"x509_sig_info_init");
    ERR_set_error(0xb,0x90,0);
LAB_001004f0:
    uVar5 = 0;
    goto LAB_001004f8;
  }
  *(ulong *)(param_1 + 0xb0) = CONCAT44(local_28,local_24);
  if (local_24 == 0x40) {
    *(undefined4 *)(param_1 + 0xb8) = 0x3f;
    uVar3 = *(uint *)(param_1 + 0xbc);
LAB_00100528:
    uVar3 = uVar3 | 2;
  }
  else {
    if (local_24 < 0x41) {
      if (local_24 == 0) {
        pEVar6 = EVP_PKEY_asn1_find((ENGINE **)0x0,local_28);
        if (((pEVar6 == (EVP_PKEY_ASN1_METHOD *)0x0) || (*(code **)(pEVar6 + 0xd8) == (code *)0x0))
           || (iVar1 = (**(code **)(pEVar6 + 0xd8))(param_1 + 0xb0,param_1 + 0x88,param_1 + 0x98),
              iVar1 == 0)) {
          if ((lVar4 == 0) || (iVar1 = EVP_PKEY_get_security_bits(lVar4), iVar1 == 0)) {
            ERR_new();
            ERR_set_debug("crypto/x509/x509_set.c",0xf7,"x509_sig_info_init");
            ERR_set_error(0xb,0x8e,0);
            goto LAB_001004f0;
          }
LAB_001005a1:
          *(int *)(param_1 + 0xb8) = iVar1;
        }
        uVar3 = *(uint *)(param_1 + 0xbc);
        if ((local_24 == 0x40) || (local_24 - 0x2a0U < 3)) goto LAB_00100528;
        goto LAB_001004af;
      }
      uVar2 = 0x27;
      if (local_24 != 4) goto LAB_001005f9;
    }
    else {
      uVar2 = 0x69;
      if (local_24 != 0x329) {
LAB_001005f9:
        name = OBJ_nid2sn(local_24);
        pEVar7 = EVP_get_digestbyname(name);
        if (pEVar7 == (EVP_MD *)0x0) {
          ERR_new(0);
          ERR_set_debug("crypto/x509/x509_set.c",0x117,"x509_sig_info_init");
          ERR_set_error(0xb,0x8d,0);
        }
        else {
          iVar1 = EVP_MD_get_size();
          if (0 < iVar1) {
            iVar1 = iVar1 << 2;
            goto LAB_001005a1;
          }
        }
        goto LAB_001004f0;
      }
    }
    *(undefined4 *)(param_1 + 0xb8) = uVar2;
    uVar3 = *(uint *)(param_1 + 0xbc);
  }
LAB_001004af:
  *(uint *)(param_1 + 0xbc) = uVar3 | 1;
  uVar5 = 1;
LAB_001004f8:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}


