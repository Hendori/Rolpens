
int ameth_cmp_BSEARCH_CMP_FN(undefined8 *param_1,undefined8 *param_2)

{
  return *(int *)*param_1 - *(int *)*param_2;
}



undefined8 * pkey_asn1_find(undefined4 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined4 *local_160;
  undefined4 local_158 [82];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_160 = local_158;
  local_158[0] = param_1;
  if (app_methods != 0) {
    iVar1 = OPENSSL_sk_find();
    if (-1 < iVar1) {
      puVar2 = (undefined8 *)OPENSSL_sk_value(app_methods,iVar1);
      goto LAB_00100077;
    }
  }
  puVar2 = (undefined8 *)OBJ_bsearch_(&local_160,&standard_methods,0xf,8,ameth_cmp_BSEARCH_CMP_FN);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar2;
  }
LAB_00100077:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int ameth_cmp(undefined8 *param_1,undefined8 *param_2)

{
  return *(int *)*param_1 - *(int *)*param_2;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int EVP_PKEY_asn1_get_count(void)

{
  int iVar1;
  
  if (app_methods != 0) {
    iVar1 = OPENSSL_sk_num();
    return iVar1 + 0xf;
  }
  return 0xf;
}



EVP_PKEY_ASN1_METHOD * EVP_PKEY_asn1_get0(int idx)

{
  EVP_PKEY_ASN1_METHOD *pEVar1;
  
  if (idx < 0) {
    return (EVP_PKEY_ASN1_METHOD *)0x0;
  }
  if (idx < 0xf) {
    return (EVP_PKEY_ASN1_METHOD *)(&standard_methods)[idx];
  }
  pEVar1 = (EVP_PKEY_ASN1_METHOD *)OPENSSL_sk_value(app_methods,idx + -0xf);
  return pEVar1;
}



EVP_PKEY_ASN1_METHOD * EVP_PKEY_asn1_find(ENGINE **pe,int type)

{
  EVP_PKEY_ASN1_METHOD *pEVar1;
  ENGINE *e;
  
  while( true ) {
    pEVar1 = (EVP_PKEY_ASN1_METHOD *)pkey_asn1_find(type);
    if ((pEVar1 == (EVP_PKEY_ASN1_METHOD *)0x0) || (((byte)pEVar1[8] & 1) == 0)) break;
    type = *(int *)(pEVar1 + 4);
  }
  if (pe != (ENGINE **)0x0) {
    e = ENGINE_get_pkey_asn1_meth_engine(type);
    if (e != (ENGINE *)0x0) {
      *pe = e;
      pEVar1 = ENGINE_get_pkey_asn1_meth(e,type);
      return pEVar1;
    }
    *pe = (ENGINE *)0x0;
  }
  return pEVar1;
}



EVP_PKEY_ASN1_METHOD * EVP_PKEY_asn1_find_str(ENGINE **pe,char *str,int len)

{
  char *__s;
  int iVar1;
  int iVar2;
  size_t sVar3;
  EVP_PKEY_ASN1_METHOD *pEVar4;
  long in_FS_OFFSET;
  ENGINE *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (len == -1) {
    sVar3 = strlen(str);
    len = (int)sVar3;
  }
  if (pe != (ENGINE **)0x0) {
    pEVar4 = ENGINE_pkey_asn1_find_str(&local_48,str,len);
    if (pEVar4 != (EVP_PKEY_ASN1_METHOD *)0x0) {
      iVar1 = ENGINE_init(local_48);
      if (iVar1 == 0) {
        pEVar4 = (EVP_PKEY_ASN1_METHOD *)0x0;
      }
      ENGINE_free(local_48);
      *pe = local_48;
      goto LAB_00100250;
    }
    *pe = (ENGINE *)0x0;
  }
  iVar1 = EVP_PKEY_asn1_get_count();
  if (0 < iVar1) {
    do {
      iVar1 = iVar1 + -1;
      pEVar4 = EVP_PKEY_asn1_get0(iVar1);
      if (((byte)pEVar4[8] & 1) == 0) {
        __s = *(char **)(pEVar4 + 0x10);
        sVar3 = strlen(__s);
        if (len == (int)sVar3) {
          iVar2 = OPENSSL_strncasecmp(__s,str,(long)len);
          if (iVar2 == 0) goto LAB_00100250;
        }
      }
    } while (iVar1 != 0);
  }
  pEVar4 = (EVP_PKEY_ASN1_METHOD *)0x0;
LAB_00100250:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pEVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int EVP_PKEY_asn1_add0(EVP_PKEY_ASN1_METHOD *ameth)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  undefined8 local_168 [41];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  puVar3 = local_168;
  for (lVar2 = 0x28; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  if ((*(ulong *)(ameth + 8) & 1) == 0) {
    ERR_new();
    ERR_set_debug("crypto/asn1/ameth_lib.c",0x9e,"EVP_PKEY_asn1_add0");
    ERR_set_error(6,0x80106,0);
  }
  else if ((app_methods != 0) || (app_methods = OPENSSL_sk_new(ameth_cmp), app_methods != 0)) {
    local_168[0]._0_4_ = *(undefined4 *)ameth;
    iVar1 = OPENSSL_sk_find(app_methods,local_168);
    if (iVar1 < 0) {
      iVar1 = OPENSSL_sk_push(app_methods,ameth);
      if (iVar1 != 0) {
        OPENSSL_sk_sort(app_methods);
        iVar1 = 1;
        goto LAB_00100336;
      }
    }
    else {
      ERR_new();
      ERR_set_debug("crypto/asn1/ameth_lib.c",0xaa,"EVP_PKEY_asn1_add0");
      ERR_set_error(6,0xb3,0);
    }
  }
  iVar1 = 0;
LAB_00100336:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



int EVP_PKEY_asn1_get0_info
              (int *ppkey_id,int *pkey_base_id,int *ppkey_flags,char **pinfo,char **ppem_str,
              EVP_PKEY_ASN1_METHOD *ameth)

{
  if (ameth != (EVP_PKEY_ASN1_METHOD *)0x0) {
    if (ppkey_id != (int *)0x0) {
      *ppkey_id = *(int *)ameth;
    }
    if (pkey_base_id != (int *)0x0) {
      *pkey_base_id = *(int *)(ameth + 4);
    }
    if (ppkey_flags != (int *)0x0) {
      *ppkey_flags = (int)*(undefined8 *)(ameth + 8);
    }
    if (pinfo != (char **)0x0) {
      *pinfo = *(char **)(ameth + 0x18);
    }
    if (ppem_str != (char **)0x0) {
      *ppem_str = *(char **)(ameth + 0x10);
    }
    return 1;
  }
  return 0;
}



EVP_PKEY_ASN1_METHOD * EVP_PKEY_get0_asn1(EVP_PKEY *pkey)

{
  return *(EVP_PKEY_ASN1_METHOD **)&pkey->references;
}



void EVP_PKEY_asn1_copy(EVP_PKEY_ASN1_METHOD *dst,EVP_PKEY_ASN1_METHOD *src)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  EVP_PKEY_ASN1_METHOD *pEVar6;
  
  uVar1 = *(undefined8 *)dst;
  uVar2 = *(undefined8 *)(dst + 8);
  uVar3 = *(undefined8 *)(dst + 0x10);
  uVar4 = *(undefined8 *)(dst + 0x18);
  pEVar6 = dst;
  for (lVar5 = 0x28; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined8 *)pEVar6 = *(undefined8 *)src;
    src = src + 8;
    pEVar6 = pEVar6 + 8;
  }
  *(undefined8 *)dst = uVar1;
  *(undefined8 *)(dst + 8) = uVar2;
  *(undefined8 *)(dst + 0x10) = uVar3;
  *(undefined8 *)(dst + 0x18) = uVar4;
  return;
}



void EVP_PKEY_asn1_free(EVP_PKEY_ASN1_METHOD *ameth)

{
  if (ameth == (EVP_PKEY_ASN1_METHOD *)0x0) {
    return;
  }
  if (((byte)ameth[8] & 2) == 0) {
    return;
  }
  CRYPTO_free(*(void **)(ameth + 0x10));
  CRYPTO_free(*(void **)(ameth + 0x18));
  CRYPTO_free(ameth);
  return;
}



EVP_PKEY_ASN1_METHOD * EVP_PKEY_asn1_new(int id,int flags,char *pem_str,char *info)

{
  EVP_PKEY_ASN1_METHOD *ameth;
  char *pcVar1;
  
  ameth = (EVP_PKEY_ASN1_METHOD *)CRYPTO_zalloc(0x140,"crypto/asn1/ameth_lib.c",0xdf);
  if (ameth == (EVP_PKEY_ASN1_METHOD *)0x0) {
    return (EVP_PKEY_ASN1_METHOD *)0x0;
  }
  *(ulong *)ameth = CONCAT44(id,id);
  *(long *)(ameth + 8) = (long)(int)(flags | 2);
  if (info != (char *)0x0) {
    pcVar1 = CRYPTO_strdup(info,"crypto/asn1/ameth_lib.c",0xe9);
    *(char **)(ameth + 0x18) = pcVar1;
    if (pcVar1 == (char *)0x0) goto LAB_001005e6;
  }
  if (pem_str == (char *)0x0) {
    return ameth;
  }
  pcVar1 = CRYPTO_strdup(pem_str,"crypto/asn1/ameth_lib.c",0xef);
  *(char **)(ameth + 0x10) = pcVar1;
  if (pcVar1 != (char *)0x0) {
    return ameth;
  }
LAB_001005e6:
  EVP_PKEY_asn1_free(ameth);
  return (EVP_PKEY_ASN1_METHOD *)0x0;
}



int EVP_PKEY_asn1_add_alias(int to,int from)

{
  int iVar1;
  EVP_PKEY_ASN1_METHOD *ameth;
  
  ameth = EVP_PKEY_asn1_new(from,1,(char *)0x0,(char *)0x0);
  if (ameth != (EVP_PKEY_ASN1_METHOD *)0x0) {
    *(int *)(ameth + 4) = to;
    iVar1 = EVP_PKEY_asn1_add0(ameth);
    if (iVar1 != 0) {
      return 1;
    }
    EVP_PKEY_asn1_free(ameth);
  }
  return 0;
}



void EVP_PKEY_asn1_set_public
               (EVP_PKEY_ASN1_METHOD *ameth,pub_decode *pub_decode,pub_encode *pub_encode,
               pub_cmp *pub_cmp,pub_print *pub_print,pkey_size *pkey_size,pkey_bits *pkey_bits)

{
  *(pub_decode **)(ameth + 0x20) = pub_decode;
  *(pub_encode **)(ameth + 0x28) = pub_encode;
  *(pub_cmp **)(ameth + 0x30) = pub_cmp;
  *(pub_print **)(ameth + 0x38) = pub_print;
  *(pkey_size **)(ameth + 0x58) = pkey_size;
  *(pkey_bits **)(ameth + 0x60) = pkey_bits;
  return;
}



void EVP_PKEY_asn1_set_private
               (EVP_PKEY_ASN1_METHOD *ameth,priv_decode *priv_decode,priv_encode *priv_encode,
               priv_print *priv_print)

{
  *(priv_decode **)(ameth + 0x40) = priv_decode;
  *(priv_encode **)(ameth + 0x48) = priv_encode;
  *(priv_print **)(ameth + 0x50) = priv_print;
  return;
}



void EVP_PKEY_asn1_set_param
               (EVP_PKEY_ASN1_METHOD *ameth,param_decode *param_decode,param_encode *param_encode,
               param_missing *param_missing,param_copy *param_copy,param_cmp *param_cmp,
               param_print *param_print)

{
  *(param_decode **)(ameth + 0x70) = param_decode;
  *(param_encode **)(ameth + 0x78) = param_encode;
  *(param_missing **)(ameth + 0x80) = param_missing;
  *(param_copy **)(ameth + 0x88) = param_copy;
  *(param_cmp **)(ameth + 0x90) = param_cmp;
  *(param_print **)(ameth + 0x98) = param_print;
  return;
}



void EVP_PKEY_asn1_set_free(EVP_PKEY_ASN1_METHOD *ameth,pkey_free *pkey_free)

{
  *(pkey_free **)(ameth + 0xa8) = pkey_free;
  return;
}



void EVP_PKEY_asn1_set_ctrl(EVP_PKEY_ASN1_METHOD *ameth,pkey_ctrl *pkey_ctrl)

{
  *(pkey_ctrl **)(ameth + 0xb0) = pkey_ctrl;
  return;
}



void EVP_PKEY_asn1_set_security_bits(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x68) = param_2;
  return;
}



void EVP_PKEY_asn1_set_item(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xd0) = param_3;
  *(undefined8 *)(param_1 + 200) = param_2;
  return;
}



void EVP_PKEY_asn1_set_siginf(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xd8) = param_2;
  return;
}



void EVP_PKEY_asn1_set_check(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xe0) = param_2;
  return;
}



void EVP_PKEY_asn1_set_public_check(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xe8) = param_2;
  return;
}



void EVP_PKEY_asn1_set_param_check(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xf0) = param_2;
  return;
}



void EVP_PKEY_asn1_set_set_priv_key(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xf8) = param_2;
  return;
}



void EVP_PKEY_asn1_set_set_pub_key(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x100) = param_2;
  return;
}



void EVP_PKEY_asn1_set_get_priv_key(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x108) = param_2;
  return;
}



void EVP_PKEY_asn1_set_get_pub_key(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x110) = param_2;
  return;
}


