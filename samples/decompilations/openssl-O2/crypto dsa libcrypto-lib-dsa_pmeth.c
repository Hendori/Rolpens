
ulong pkey_dsa_ctrl_str(undefined8 param_1,char *param_2,char *param_3)

{
  int iVar1;
  EVP_MD *pEVar2;
  ulong uVar3;
  uint uVar4;
  
  iVar1 = strcmp(param_2,"dsa_paramgen_bits");
  if (iVar1 == 0) {
    uVar3 = strtol(param_3,(char **)0x0,10);
    uVar3 = EVP_PKEY_CTX_set_dsa_paramgen_bits(param_1,uVar3 & 0xffffffff);
    return uVar3;
  }
  iVar1 = strcmp(param_2,"dsa_paramgen_q_bits");
  if (iVar1 != 0) {
    iVar1 = strcmp(param_2,"dsa_paramgen_md");
    if (iVar1 == 0) {
      pEVar2 = EVP_get_digestbyname(param_3);
      if (pEVar2 != (EVP_MD *)0x0) {
        uVar3 = EVP_PKEY_CTX_set_dsa_paramgen_md(param_1);
        return uVar3;
      }
      ERR_new();
      ERR_set_debug("crypto/dsa/dsa_pmeth.c",0xd4,"pkey_dsa_ctrl_str");
      ERR_set_error(10,0x6a,0);
      uVar4 = 0;
    }
    else {
      uVar4 = 0xfffffffe;
    }
    return (ulong)uVar4;
  }
  uVar3 = strtol(param_3,(char **)0x0,10);
  uVar3 = EVP_PKEY_CTX_set_dsa_paramgen_q_bits(param_1,uVar3 & 0xffffffff);
  return uVar3;
}



undefined8 pkey_dsa_ctrl(long param_1,int param_2,uint param_3,undefined8 *param_4)

{
  uint *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  puVar1 = *(uint **)(param_1 + 0x98);
  if (param_2 < 0xe) {
    switch(param_2) {
    case 1:
      iVar2 = EVP_MD_get_type(param_4);
      if (((((iVar2 != 0x40) && (iVar2 = EVP_MD_get_type(param_4), iVar2 != 0x74)) &&
           ((iVar2 = EVP_MD_get_type(param_4), iVar2 != 0x42 &&
            ((iVar2 = EVP_MD_get_type(param_4), iVar2 != 0x2a3 &&
             (iVar2 = EVP_MD_get_type(param_4), iVar2 != 0x2a0)))))) &&
          (iVar2 = EVP_MD_get_type(param_4), iVar2 != 0x2a1)) &&
         ((((iVar2 = EVP_MD_get_type(param_4), iVar2 != 0x2a2 &&
            (iVar2 = EVP_MD_get_type(param_4), iVar2 != 0x448)) &&
           (iVar2 = EVP_MD_get_type(param_4), iVar2 != 0x449)) &&
          ((iVar2 = EVP_MD_get_type(param_4), iVar2 != 0x44a &&
           (iVar2 = EVP_MD_get_type(param_4), iVar2 != 1099)))))) {
        ERR_new();
        uVar3 = 0xac;
LAB_001002f6:
        ERR_set_debug("crypto/dsa/dsa_pmeth.c",uVar3,"pkey_dsa_ctrl");
        ERR_set_error(10,0x6a,0);
        return 0;
      }
      *(undefined8 **)(puVar1 + 6) = param_4;
      break;
    case 2:
      ERR_new();
      ERR_set_debug("crypto/dsa/dsa_pmeth.c",0xbc,"pkey_dsa_ctrl");
      ERR_set_error(10,0x96,0);
    default:
      return 0xfffffffe;
    case 5:
    case 7:
    case 0xb:
      break;
    case 0xd:
      *param_4 = *(undefined8 *)(puVar1 + 6);
    }
  }
  else if (param_2 == 0x1002) {
    if (((param_3 & 0xffffffbf) != 0xa0) && ((param_3 & 0xfffffeff) != 0)) {
      return 0xfffffffe;
    }
    puVar1[1] = param_3;
  }
  else if (param_2 == 0x1003) {
    iVar2 = EVP_MD_get_type(param_4);
    if (((iVar2 != 0x40) && (iVar2 = EVP_MD_get_type(param_4), iVar2 != 0x2a3)) &&
       (iVar2 = EVP_MD_get_type(param_4), iVar2 != 0x2a0)) {
      ERR_new();
      uVar3 = 0x9a;
      goto LAB_001002f6;
    }
    *(undefined8 **)(puVar1 + 2) = param_4;
  }
  else {
    if (param_2 != 0x1001) {
      return 0xfffffffe;
    }
    if ((int)param_3 < 0x100) {
      return 0xfffffffe;
    }
    *puVar1 = param_3;
  }
  return 1;
}



int pkey_dsa_verify(long param_1,uchar *param_2,int param_3,uchar *param_4,long param_5)

{
  long lVar1;
  int iVar2;
  DSA *dsa;
  
  lVar1 = *(long *)(param_1 + 0x98);
  dsa = (DSA *)EVP_PKEY_get0_DSA(*(undefined8 *)(param_1 + 0x88));
  if (*(long *)(lVar1 + 0x18) != 0) {
    iVar2 = EVP_MD_get_size();
    if ((iVar2 < 1) || (iVar2 != param_5)) {
      return 0;
    }
  }
  iVar2 = DSA_verify(0,param_4,(int)param_5,param_2,param_3,dsa);
  return iVar2;
}



int pkey_dsa_sign(long param_1,uchar *param_2,ulong *param_3,uchar *param_4,long param_5)

{
  long lVar1;
  int iVar2;
  int iVar3;
  DSA *dsa;
  long in_FS_OFFSET;
  uint local_44;
  long local_40;
  
  lVar1 = *(long *)(param_1 + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  dsa = (DSA *)EVP_PKEY_get0_DSA(*(undefined8 *)(param_1 + 0x88));
  if (*(long *)(lVar1 + 0x18) != 0) {
    iVar2 = EVP_MD_get_size();
    iVar3 = 0;
    if ((iVar2 < 1) || (iVar2 != param_5)) goto LAB_00100440;
  }
  iVar3 = DSA_sign(0,param_4,(int)param_5,param_2,&local_44,dsa);
  if (0 < iVar3) {
    iVar3 = 1;
    *param_3 = (ulong)local_44;
  }
LAB_00100440:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int pkey_dsa_keygen(long param_1,EVP_PKEY *param_2)

{
  int iVar1;
  DSA *pDVar2;
  
  if (*(long *)(param_1 + 0x88) == 0) {
    ERR_new();
    ERR_set_debug("crypto/dsa/dsa_pmeth.c",0x102,"pkey_dsa_keygen");
    ERR_set_error(10,0x6b,0);
    return 0;
  }
  pDVar2 = DSA_new();
  if (pDVar2 != (DSA *)0x0) {
    EVP_PKEY_assign(param_2,0x74,pDVar2);
    iVar1 = EVP_PKEY_copy_parameters(param_2,*(EVP_PKEY **)(param_1 + 0x88));
    if (iVar1 != 0) {
      pDVar2 = (DSA *)EVP_PKEY_get0_DSA(param_2);
      iVar1 = DSA_generate_key(pDVar2);
      return iVar1;
    }
  }
  return 0;
}



int pkey_dsa_paramgen(long param_1,EVP_PKEY *param_2)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  DSA *r;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined1 local_34 [4];
  long local_30;
  
  piVar1 = *(int **)(param_1 + 0x98);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_1 + 0x60) == 0) {
    lVar3 = 0;
LAB_001005a4:
    r = DSA_new();
    if (r != (DSA *)0x0) {
      if (*(long *)(piVar1 + 6) != 0) {
        uVar4 = EVP_MD_get0_name();
        ossl_ffc_set_digest(&r->version,uVar4,0);
      }
      iVar2 = ossl_ffc_params_FIPS186_4_generate
                        (0,&r->version,0,(long)*piVar1,(long)piVar1[1],local_34,lVar3);
      BN_GENCB_free(lVar3);
      if (iVar2 < 1) {
        DSA_free(r);
      }
      else {
        EVP_PKEY_assign(param_2,0x74,r);
      }
      goto LAB_00100616;
    }
    BN_GENCB_free(lVar3);
  }
  else {
    lVar3 = BN_GENCB_new();
    if (lVar3 != 0) {
      evp_pkey_set_cb_translate(lVar3,param_1);
      goto LAB_001005a4;
    }
  }
  iVar2 = 0;
LAB_00100616:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void pkey_dsa_cleanup(long param_1)

{
  CRYPTO_free(*(void **)(param_1 + 0x98));
  return;
}



undefined8 pkey_dsa_init(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)CRYPTO_malloc(0x20,"crypto/dsa/dsa_pmeth.c",0x28);
  uVar1 = _LC4;
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = 0;
    puVar2[3] = 0;
    *puVar2 = uVar1;
    *(undefined8 **)(param_1 + 0x98) = puVar2;
    *(undefined8 **)(param_1 + 0x68) = puVar2 + 2;
    *(undefined4 *)(param_1 + 0x70) = 2;
    return 1;
  }
  return 0;
}



bool pkey_dsa_copy(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)CRYPTO_malloc(0x20,"crypto/dsa/dsa_pmeth.c",0x28);
  uVar2 = _LC4;
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined8 **)(param_1 + 0x98) = puVar3;
    *(undefined4 *)(param_1 + 0x70) = 2;
    *puVar3 = uVar2;
    *(undefined8 **)(param_1 + 0x68) = puVar3 + 2;
    puVar1 = *(undefined8 **)(param_2 + 0x98);
    puVar3[1] = 0;
    uVar2 = *puVar1;
    puVar3[3] = 0;
    *puVar3 = uVar2;
    puVar3[1] = puVar1[1];
    puVar3[3] = puVar1[3];
  }
  return puVar3 != (undefined8 *)0x0;
}



undefined1 * ossl_dsa_pkey_method(void)

{
  return dsa_pkey_meth;
}


