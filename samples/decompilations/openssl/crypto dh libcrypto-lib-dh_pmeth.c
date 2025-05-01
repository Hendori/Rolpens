
undefined8 pkey_dh_ctrl_str(long param_1,char *param_2,char *param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  iVar1 = strcmp(param_2,"dh_paramgen_prime_len");
  if (iVar1 == 0) {
    uVar3 = strtol(param_3,(char **)0x0,10);
    uVar4 = EVP_PKEY_CTX_set_dh_paramgen_prime_len(param_1,uVar3 & 0xffffffff);
    return uVar4;
  }
  iVar1 = strcmp(param_2,"dh_rfc5114");
  if (iVar1 == 0) {
    lVar6 = *(long *)(param_1 + 0x98);
    lVar5 = strtol(param_3,(char **)0x0,10);
    uVar2 = (uint)lVar5;
    if (uVar2 < 4) {
LAB_001000eb:
      *(uint *)(lVar6 + 0x20) = uVar2;
      return 1;
    }
  }
  else {
    iVar1 = strcmp(param_2,"dh_param");
    if (iVar1 == 0) {
      lVar6 = *(long *)(param_1 + 0x98);
      uVar2 = OBJ_sn2nid(param_3);
      if (uVar2 != 0) goto LAB_001000eb;
      ERR_new();
      ERR_set_debug("crypto/dh/dh_pmeth.c",0xf5,"pkey_dh_ctrl_str");
      ERR_set_error(5,0x6e,0);
    }
    else {
      iVar1 = strcmp(param_2,"dh_paramgen_generator");
      if (iVar1 == 0) {
        uVar3 = strtol(param_3,(char **)0x0,10);
        uVar4 = EVP_PKEY_CTX_set_dh_paramgen_generator(param_1,uVar3 & 0xffffffff);
        return uVar4;
      }
      iVar1 = strcmp(param_2,"dh_paramgen_subprime_len");
      if (iVar1 == 0) {
        uVar3 = strtol(param_3,(char **)0x0,10);
        uVar4 = EVP_PKEY_CTX_set_dh_paramgen_subprime_len(param_1,uVar3 & 0xffffffff);
        return uVar4;
      }
      iVar1 = strcmp(param_2,"dh_paramgen_type");
      if (iVar1 == 0) {
        uVar3 = strtol(param_3,(char **)0x0,10);
        uVar4 = EVP_PKEY_CTX_set_dh_paramgen_type(param_1,uVar3 & 0xffffffff);
        return uVar4;
      }
      iVar1 = strcmp(param_2,"dh_pad");
      if (iVar1 == 0) {
        uVar3 = strtol(param_3,(char **)0x0,10);
        uVar4 = EVP_PKEY_CTX_set_dh_pad(param_1,uVar3 & 0xffffffff);
        return uVar4;
      }
    }
  }
  return 0xfffffffe;
}



uint pkey_dh_ctrl(long param_1,int param_2,uint param_3,undefined8 *param_4)

{
  uint *puVar1;
  long lVar2;
  
  puVar1 = *(uint **)(param_1 + 0x98);
  if (param_2 == 2) {
    return 1;
  }
  if (0xf < param_2 - 0x1001U) {
    return 0xfffffffe;
  }
  switch(param_2) {
  case 0x1002:
    if (puVar1[2] != 0) {
      return 0xfffffffe;
    }
    puVar1[1] = param_3;
    break;
  case 0x1003:
    if (2 < param_3 - 1) {
      return 0xfffffffe;
    }
    goto LAB_0010023c;
  case 0x1004:
    if (puVar1[2] == 0) {
      return 0xfffffffe;
    }
    puVar1[3] = param_3;
    break;
  case 0x1005:
    if (2 < param_3) {
      return 0xfffffffe;
    }
    puVar1[2] = param_3;
    break;
  case 0x1006:
    if (param_3 == 0xfffffffe) {
      return (int)(char)puVar1[0xb];
    }
    if (1 < param_3 - 1) {
      return 0xfffffffe;
    }
    *(char *)(puVar1 + 0xb) = (char)param_3;
    break;
  case 0x1007:
    *(undefined8 **)(puVar1 + 0xe) = param_4;
    break;
  case 0x1008:
    *param_4 = *(undefined8 *)(puVar1 + 0xe);
    break;
  case 0x1009:
    if ((int)param_3 < 1) {
      return 0xfffffffe;
    }
    *(long *)(puVar1 + 0x14) = (long)(int)param_3;
    break;
  case 0x100a:
    *(int *)param_4 = (int)*(undefined8 *)(puVar1 + 0x14);
    break;
  case 0x100b:
    CRYPTO_free(*(void **)(puVar1 + 0x10));
    *(undefined8 **)(puVar1 + 0x10) = param_4;
    lVar2 = (long)(int)param_3;
    if (param_4 == (undefined8 *)0x0) {
      lVar2 = 0;
    }
    *(long *)(puVar1 + 0x12) = lVar2;
    break;
  case 0x100c:
    *param_4 = *(undefined8 *)(puVar1 + 0x10);
    return puVar1[0x12];
  case 0x100d:
    ASN1_OBJECT_free(*(ASN1_OBJECT **)(puVar1 + 0xc));
    *(undefined8 **)(puVar1 + 0xc) = param_4;
    break;
  case 0x100e:
    *param_4 = *(undefined8 *)(puVar1 + 0xc);
    break;
  case 0x100f:
    if ((int)param_3 < 1) {
      return 0xfffffffe;
    }
LAB_0010023c:
    if (puVar1[8] != 0) {
      return 0xfffffffe;
    }
    puVar1[8] = param_3;
    break;
  case 0x1010:
    puVar1[4] = param_3;
    break;
  default:
    if ((int)param_3 < 0x100) {
      return 0xfffffffe;
    }
    *puVar1 = param_3;
  }
  return 1;
}



void pkey_dh_cleanup(long param_1)

{
  void *ptr;
  
  ptr = *(void **)(param_1 + 0x98);
  if (ptr != (void *)0x0) {
    CRYPTO_free(*(void **)((long)ptr + 0x40));
    ASN1_OBJECT_free(*(ASN1_OBJECT **)((long)ptr + 0x30));
    CRYPTO_free(ptr);
    return;
  }
  return;
}



int pkey_dh_derive(long param_1,uchar *param_2,long *param_3)

{
  long lVar1;
  BIGNUM *pub_key;
  int iVar2;
  int iVar3;
  DH *dh;
  long lVar4;
  uchar *key;
  undefined8 uVar5;
  
  lVar1 = *(long *)(param_1 + 0x98);
  if ((*(long *)(param_1 + 0x88) == 0) || (*(long *)(param_1 + 0x90) == 0)) {
    ERR_new();
    uVar5 = 0x196;
  }
  else {
    dh = (DH *)EVP_PKEY_get0_DH();
    lVar4 = EVP_PKEY_get0_DH(*(undefined8 *)(param_1 + 0x90));
    if (lVar4 != 0) {
      pub_key = *(BIGNUM **)(lVar4 + 0x70);
      if (*(char *)(lVar1 + 0x2c) == '\x01') {
        if (param_2 == (uchar *)0x0) {
          iVar2 = DH_size(dh);
          *param_3 = (long)iVar2;
          return 1;
        }
        if (*(int *)(lVar1 + 0x10) == 0) {
          iVar2 = DH_compute_key(param_2,pub_key,dh);
        }
        else {
          iVar2 = DH_compute_key_padded(param_2,pub_key,dh);
        }
        if (iVar2 < 0) {
          return iVar2;
        }
        lVar4 = (long)iVar2;
      }
      else {
        if (*(char *)(lVar1 + 0x2c) != '\x02') {
          return 0;
        }
        lVar4 = *(long *)(lVar1 + 0x50);
        if (lVar4 == 0) {
          return 0;
        }
        if (*(long *)(lVar1 + 0x30) == 0) {
          return 0;
        }
        if (param_2 != (uchar *)0x0) {
          if (lVar4 != *param_3) {
            return 0;
          }
          iVar2 = DH_size(dh);
          if (iVar2 < 1) {
            return 0;
          }
          key = (uchar *)CRYPTO_malloc(iVar2,"crypto/dh/dh_pmeth.c",0x1be);
          if (key == (uchar *)0x0) {
            return 0;
          }
          iVar3 = DH_compute_key_padded(key,pub_key,dh);
          if ((iVar3 < 1) ||
             (iVar3 = DH_KDF_X9_42(param_2,*param_3,key,(long)iVar2,*(undefined8 *)(lVar1 + 0x30),
                                   *(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x48),
                                   *(undefined8 *)(lVar1 + 0x38)), iVar3 == 0)) {
            iVar3 = 0;
          }
          else {
            *param_3 = *(long *)(lVar1 + 0x50);
            iVar3 = 1;
          }
          CRYPTO_clear_free(key,(long)iVar2,"crypto/dh/dh_pmeth.c",0x1c8);
          return iVar3;
        }
      }
      *param_3 = lVar4;
      return 1;
    }
    ERR_new();
    uVar5 = 0x19c;
  }
  ERR_set_debug("crypto/dh/dh_pmeth.c",uVar5,"pkey_dh_derive");
  ERR_set_error(5,0x6c,0);
  return 0;
}



int pkey_dh_keygen(long param_1,EVP_PKEY *param_2)

{
  int iVar1;
  DH *pDVar2;
  
  iVar1 = *(int *)(*(long *)(param_1 + 0x98) + 0x20);
  if (*(long *)(param_1 + 0x88) == 0) {
    if (iVar1 == 0) {
      ERR_new();
      ERR_set_debug("crypto/dh/dh_pmeth.c",0x17c,"pkey_dh_keygen");
      ERR_set_error(5,0x6b,0);
      return 0;
    }
  }
  else if (iVar1 == 0) {
    pDVar2 = DH_new();
    goto joined_r0x001006a7;
  }
  pDVar2 = (DH *)DH_new_by_nid();
joined_r0x001006a7:
  if (pDVar2 != (DH *)0x0) {
    EVP_PKEY_assign(param_2,**(int **)(param_1 + 0x78),pDVar2);
    if ((*(EVP_PKEY **)(param_1 + 0x88) == (EVP_PKEY *)0x0) ||
       (iVar1 = EVP_PKEY_copy_parameters(param_2,*(EVP_PKEY **)(param_1 + 0x88)), iVar1 != 0)) {
      pDVar2 = (DH *)EVP_PKEY_get0_DH(param_2);
      iVar1 = DH_generate_key(pDVar2);
      return iVar1;
    }
  }
  return 0;
}



undefined8 pkey_dh_init(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)CRYPTO_zalloc(0x58,"crypto/dh/dh_pmeth.c",0x3a);
  uVar1 = _LC8;
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar2 + 0xc) = 0xffffffff;
    *(undefined1 *)((long)puVar2 + 0x2c) = 1;
    *puVar2 = uVar1;
    *(undefined8 **)(param_1 + 0x98) = puVar2;
    *(long *)(param_1 + 0x68) = (long)puVar2 + 0x24;
    *(undefined4 *)(param_1 + 0x70) = 2;
    return 1;
  }
  return 0;
}



int pkey_dh_paramgen(long param_1,EVP_PKEY *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  void *key;
  BN_GENCB *cb;
  DH *pDVar4;
  undefined8 uVar5;
  int iVar6;
  long in_FS_OFFSET;
  undefined1 local_44 [4];
  long local_40;
  
  piVar2 = *(int **)(param_1 + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (piVar2[8] == 0) {
    if (*(long *)(param_1 + 0x60) == 0) {
      iVar3 = piVar2[2];
      cb = (BN_GENCB *)0x0;
      if (iVar3 < 1) goto LAB_0010080a;
LAB_00100862:
      iVar1 = *piVar2;
      iVar6 = piVar2[3];
      if (iVar3 < 3) {
        pDVar4 = DH_new();
        if (pDVar4 != (DH *)0x0) {
          if ((iVar6 == -1) && (iVar6 = 0xa0, 0x7ff < iVar1)) {
            iVar6 = 0x100;
          }
          if (*(long *)(piVar2 + 6) != 0) {
            uVar5 = EVP_MD_get0_name();
            ossl_ffc_set_digest(&pDVar4->p,uVar5,0);
          }
          if (piVar2[2] == 1) {
            iVar3 = ossl_ffc_params_FIPS186_2_generate
                              (0,&pDVar4->p,1,(long)iVar1,(long)iVar6,local_44,cb);
LAB_001008eb:
            if (0 < iVar3) {
              BN_GENCB_free(cb);
              EVP_PKEY_assign(param_2,0x398,pDVar4);
              goto LAB_001007b3;
            }
          }
          else if (0 < piVar2[2]) {
            iVar3 = ossl_ffc_params_FIPS186_4_generate
                              (0,&pDVar4->p,1,(long)iVar1,(long)iVar6,local_44);
            goto LAB_001008eb;
          }
          DH_free(pDVar4);
        }
      }
    }
    else {
      cb = (BN_GENCB *)BN_GENCB_new();
      if (cb == (BN_GENCB *)0x0) goto LAB_00100920;
      evp_pkey_set_cb_translate(cb,param_1);
      iVar3 = piVar2[2];
      if (0 < iVar3) goto LAB_00100862;
LAB_0010080a:
      pDVar4 = DH_new();
      if (pDVar4 != (DH *)0x0) {
        iVar3 = DH_generate_parameters_ex(pDVar4,*piVar2,piVar2[1],cb);
        BN_GENCB_free(cb);
        if (iVar3 == 0) {
          iVar3 = 0;
          DH_free(pDVar4);
        }
        else {
          EVP_PKEY_assign(param_2,0x1c,pDVar4);
        }
        goto LAB_001007b8;
      }
    }
    BN_GENCB_free(cb);
  }
  else {
    iVar3 = 0x398;
    if (3 < piVar2[8]) {
      iVar3 = 0x1c;
    }
    key = (void *)DH_new_by_nid();
    if (key != (void *)0x0) {
      EVP_PKEY_assign(param_2,iVar3,key);
LAB_001007b3:
      iVar3 = 1;
      goto LAB_001007b8;
    }
  }
LAB_00100920:
  iVar3 = 0;
LAB_001007b8:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 pkey_dh_copy(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ASN1_OBJECT *pAVar4;
  long lVar5;
  
  puVar3 = (undefined8 *)CRYPTO_zalloc(0x58,"crypto/dh/dh_pmeth.c",0x3a);
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar3 + 0xc) = 0xffffffff;
    *puVar3 = 0x200000800;
    *(long *)(param_1 + 0x68) = (long)puVar3 + 0x24;
    *(undefined8 **)(param_1 + 0x98) = puVar3;
    *(undefined4 *)(param_1 + 0x70) = 2;
    puVar1 = *(undefined8 **)(param_2 + 0x98);
    *(undefined1 *)((long)puVar3 + 0x2c) = 1;
    uVar2 = puVar1[1];
    *puVar3 = *puVar1;
    puVar3[1] = uVar2;
    *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(puVar1 + 2);
    puVar3[3] = puVar1[3];
    *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(puVar1 + 4);
    *(undefined1 *)((long)puVar3 + 0x2c) = *(undefined1 *)((long)puVar1 + 0x2c);
    pAVar4 = OBJ_dup((ASN1_OBJECT *)puVar1[6]);
    puVar3[6] = pAVar4;
    if (pAVar4 != (ASN1_OBJECT *)0x0) {
      lVar5 = puVar1[8];
      puVar3[7] = puVar1[7];
      if (lVar5 != 0) {
        lVar5 = CRYPTO_memdup(lVar5,puVar1[9],"crypto/dh/dh_pmeth.c",0x6a);
        puVar3[8] = lVar5;
        if (lVar5 == 0) {
          return 0;
        }
        puVar3[9] = puVar1[9];
      }
      puVar3[10] = puVar1[10];
      return 1;
    }
  }
  return 0;
}



undefined1 * ossl_dh_pkey_method(void)

{
  return dh_pkey_meth;
}



undefined1 * ossl_dhx_pkey_method(void)

{
  return dhx_pkey_meth;
}


