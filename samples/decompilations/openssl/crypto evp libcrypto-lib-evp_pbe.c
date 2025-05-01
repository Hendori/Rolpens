
int pbe2_cmp_BSEARCH_CMP_FN(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_1 - *param_2;
  if (iVar1 == 0) {
    iVar1 = param_1[1] - param_2[1];
  }
  return iVar1;
}



int pbe_cmp(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)*param_1 - *(int *)*param_2;
  if (iVar1 == 0) {
    iVar1 = ((int *)*param_1)[1] - ((int *)*param_2)[1];
  }
  return iVar1;
}



void free_evp_pbe_ctl(void *param_1)

{
  CRYPTO_free(param_1);
  return;
}



int EVP_PBE_alg_add_type(int pbe_type,int pbe_nid,int cipher_nid,int md_nid,undefined1 *keygen)

{
  long lVar1;
  int iVar2;
  undefined8 *ptr;
  
  if (pbe_algs == 0) {
    pbe_algs = OPENSSL_sk_new(pbe_cmp);
    if (pbe_algs != 0) goto LAB_0010009d;
    ERR_new();
    ERR_set_debug("crypto/evp/evp_pbe.c",0xd0,"EVP_PBE_alg_add_type");
    ERR_set_error(6,0x8000f,0);
  }
  else {
LAB_0010009d:
    ptr = (undefined8 *)CRYPTO_zalloc(0x20,"crypto/evp/evp_pbe.c",0xd5);
    if (ptr != (undefined8 *)0x0) {
      ptr[2] = keygen;
      lVar1 = pbe_algs;
      *ptr = CONCAT44(pbe_nid,pbe_type);
      ptr[1] = CONCAT44(md_nid,cipher_nid);
      iVar2 = OPENSSL_sk_push(lVar1,ptr);
      if (iVar2 != 0) {
        return 1;
      }
      ERR_new();
      ERR_set_debug("crypto/evp/evp_pbe.c",0xdf,"EVP_PBE_alg_add_type");
      ERR_set_error(6,0x8000f,0);
      goto LAB_0010016c;
    }
  }
  ptr = (undefined8 *)0x0;
LAB_0010016c:
  CRYPTO_free(ptr);
  return 0;
}



int EVP_PBE_alg_add(int nid,EVP_CIPHER *cipher,EVP_MD *md,undefined1 *keygen)

{
  int iVar1;
  int md_nid;
  
  iVar1 = -1;
  if (cipher != (EVP_CIPHER *)0x0) {
    iVar1 = EVP_CIPHER_get_nid();
  }
  md_nid = -1;
  if (md != (EVP_MD *)0x0) {
    md_nid = EVP_MD_get_type();
  }
  iVar1 = EVP_PBE_alg_add_type(0,nid,iVar1,md_nid,keygen);
  return iVar1;
}



undefined8
EVP_PBE_find_ex(undefined4 param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,
               undefined8 *param_5,undefined8 *param_6)

{
  undefined4 uVar1;
  void *pvVar2;
  undefined8 uVar3;
  int iVar4;
  long in_FS_OFFSET;
  undefined4 local_58;
  int local_54;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = (int)param_2;
  if (iVar4 == 0) {
LAB_001002f0:
    uVar3 = 0;
  }
  else {
    local_58 = param_1;
    local_54 = iVar4;
    if (pbe_algs == 0) {
LAB_001002c3:
      pvVar2 = OBJ_bsearch_(&local_58,builtin_pbe,0x22,0x20,pbe2_cmp_BSEARCH_CMP_FN);
      if (pvVar2 == (void *)0x0) goto LAB_001002f0;
    }
    else {
      OPENSSL_sk_sort(pbe_algs,param_2,0);
      uVar1 = OPENSSL_sk_find(pbe_algs,&local_58);
      pvVar2 = (void *)OPENSSL_sk_value(pbe_algs,uVar1);
      if (pvVar2 == (void *)0x0) goto LAB_001002c3;
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *(undefined4 *)((long)pvVar2 + 8);
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = *(undefined4 *)((long)pvVar2 + 0xc);
    }
    if (param_5 != (undefined8 *)0x0) {
      *param_5 = *(undefined8 *)((long)pvVar2 + 0x10);
    }
    if (param_6 != (undefined8 *)0x0) {
      *param_6 = *(undefined8 *)((long)pvVar2 + 0x18);
    }
    uVar3 = 1;
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



undefined4
EVP_PBE_CipherInit_ex
          (ASN1_OBJECT *param_1,char *param_2,uint param_3,undefined8 param_4,undefined8 param_5,
          undefined4 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined4 uVar2;
  size_t sVar3;
  char *pcVar4;
  EVP_CIPHER *pEVar5;
  EVP_MD *pEVar6;
  EVP_MD *pEVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  EVP_CIPHER *local_c8;
  int local_b0;
  int local_ac;
  code *local_a8;
  code *local_a0;
  char local_98 [88];
  long local_40;
  
  uVar8 = (ulong)param_3;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = OBJ_obj2nid(param_1);
  iVar1 = EVP_PBE_find_ex(0,iVar1,&local_b0,&local_ac,&local_a0,&local_a8);
  if (iVar1 == 0) {
    if (param_1 == (ASN1_OBJECT *)0x0) {
      OPENSSL_strlcpy(local_98,&_LC1,0x50);
    }
    else {
      i2t_ASN1_OBJECT(local_98,0x50,param_1);
    }
    ERR_new();
    ERR_set_debug("crypto/evp/evp_pbe.c",0x75,"EVP_PBE_CipherInit_ex");
    ERR_set_error(6,0x79,"TYPE=%s",local_98);
LAB_001004de:
    uVar2 = 0;
    pEVar6 = (EVP_MD *)0x0;
    pEVar5 = (EVP_CIPHER *)0x0;
    goto LAB_0010044a;
  }
  if (param_2 == (char *)0x0) {
    uVar8 = 0;
  }
  else if (param_3 == 0xffffffff) {
    sVar3 = strlen(param_2);
    uVar8 = sVar3 & 0xffffffff;
  }
  if (local_b0 == -1) {
    local_c8 = (EVP_CIPHER *)0x0;
    pEVar5 = (EVP_CIPHER *)0x0;
    if (local_ac != -1) goto LAB_001003d9;
LAB_00100507:
    pEVar6 = (EVP_MD *)0x0;
    pEVar7 = (EVP_MD *)0x0;
  }
  else {
    ERR_set_mark();
    pcVar4 = OBJ_nid2sn(local_b0);
    pEVar5 = (EVP_CIPHER *)EVP_CIPHER_fetch(param_7,pcVar4,param_8);
    local_c8 = pEVar5;
    if (pEVar5 == (EVP_CIPHER *)0x0) {
      pcVar4 = OBJ_nid2sn(local_b0);
      local_c8 = EVP_get_cipherbyname(pcVar4);
      if (local_c8 == (EVP_CIPHER *)0x0) {
        ERR_clear_last_mark();
        ERR_new();
        ERR_set_debug("crypto/evp/evp_pbe.c",0x87,"EVP_PBE_CipherInit_ex");
        pcVar4 = OBJ_nid2sn(local_b0);
        ERR_set_error(6,0xa0,pcVar4);
        goto LAB_001004de;
      }
    }
    ERR_pop_to_mark();
    if (local_ac == -1) goto LAB_00100507;
LAB_001003d9:
    ERR_set_mark();
    pcVar4 = OBJ_nid2sn(local_ac);
    pEVar6 = (EVP_MD *)EVP_MD_fetch(param_7,pcVar4,param_8);
    pEVar7 = pEVar6;
    if (pEVar6 == (EVP_MD *)0x0) {
      pcVar4 = OBJ_nid2sn(local_ac);
      pEVar7 = EVP_get_digestbyname(pcVar4);
      if (pEVar7 == (EVP_MD *)0x0) {
        ERR_clear_last_mark();
        uVar2 = 0;
        ERR_new();
        ERR_set_debug("crypto/evp/evp_pbe.c",0x97,"EVP_PBE_CipherInit_ex");
        ERR_set_error(6,0xa1,0);
        goto LAB_0010044a;
      }
    }
    ERR_pop_to_mark();
  }
  if (local_a8 == (code *)0x0) {
    uVar2 = (*local_a0)(param_5,param_2,uVar8,param_4,local_c8,pEVar7,param_6);
  }
  else {
    uVar2 = (*local_a8)(param_5,param_2,uVar8,param_4,local_c8,pEVar7,param_6,param_7,param_8);
  }
LAB_0010044a:
  EVP_CIPHER_free(pEVar5);
  EVP_MD_free(pEVar6);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



int EVP_PBE_CipherInit(ASN1_OBJECT *pbe_obj,char *pass,int passlen,ASN1_TYPE *param,
                      EVP_CIPHER_CTX *ctx,int en_de)

{
  int iVar1;
  
  iVar1 = EVP_PBE_CipherInit_ex();
  return iVar1;
}



int EVP_PBE_find(int type,int pbe_nid,int *pcnid,int *pmnid,undefined1 **pkeygen)

{
  int iVar1;
  
  iVar1 = EVP_PBE_find_ex();
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void EVP_PBE_cleanup(void)

{
  OPENSSL_sk_pop_free(pbe_algs,free_evp_pbe_ctl);
  pbe_algs = 0;
  return;
}



undefined8 EVP_PBE_get(undefined4 *param_1,undefined4 *param_2,ulong param_3)

{
  if (param_3 < 0x22) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *(undefined4 *)(builtin_pbe + param_3 * 0x20);
    }
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *(undefined4 *)(builtin_pbe + param_3 * 0x20 + 4);
    }
    return 1;
  }
  return 0;
}


