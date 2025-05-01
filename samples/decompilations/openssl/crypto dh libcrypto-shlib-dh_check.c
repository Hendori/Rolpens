
undefined8 DH_check_params(long param_1,uint *param_2)

{
  int iVar1;
  BN_CTX *ctx;
  BIGNUM *a;
  BIGNUM *pBVar2;
  undefined8 uVar3;
  
  *param_2 = 0;
  ctx = (BN_CTX *)BN_CTX_new_ex(*(undefined8 *)(param_1 + 0xb0));
  if (ctx != (BN_CTX *)0x0) {
    BN_CTX_start(ctx);
    a = BN_CTX_get(ctx);
    if (a != (BIGNUM *)0x0) {
      iVar1 = BN_is_odd(*(undefined8 *)(param_1 + 8));
      if (iVar1 == 0) {
        *param_2 = *param_2 | 1;
      }
      iVar1 = BN_is_negative(*(undefined8 *)(param_1 + 0x18));
      if (((iVar1 != 0) || (iVar1 = BN_is_zero(*(undefined8 *)(param_1 + 0x18)), iVar1 != 0)) ||
         (iVar1 = BN_is_one(*(undefined8 *)(param_1 + 0x18)), iVar1 != 0)) {
        *param_2 = *param_2 | 8;
      }
      pBVar2 = BN_copy(a,*(BIGNUM **)(param_1 + 8));
      if ((pBVar2 != (BIGNUM *)0x0) && (iVar1 = BN_sub_word(a,1), iVar1 != 0)) {
        iVar1 = BN_cmp(*(BIGNUM **)(param_1 + 0x18),a);
        if (-1 < iVar1) {
          *param_2 = *param_2 | 8;
        }
        iVar1 = BN_num_bits(*(BIGNUM **)(param_1 + 8));
        if (iVar1 < 0x200) {
          *param_2 = *param_2 | 0x80;
        }
        iVar1 = BN_num_bits(*(BIGNUM **)(param_1 + 8));
        if (10000 < iVar1) {
          *param_2 = *param_2 | 0x100;
        }
        uVar3 = 1;
        goto LAB_00100095;
      }
    }
  }
  uVar3 = 0;
LAB_00100095:
  BN_CTX_end(ctx);
  BN_CTX_free(ctx);
  return uVar3;
}



/* WARNING: Type propagation algorithm not settling */

ulong DH_check_params_ex(undefined8 param_1)

{
  ulong uVar1;
  long in_FS_OFFSET;
  uint local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  uVar1 = DH_check_params(param_1,&local_14);
  if ((int)uVar1 != 0) {
    if ((local_14 & 1) != 0) {
      ERR_new();
      ERR_set_debug("crypto/dh/dh_check.c",0x24,"DH_check_params_ex");
      ERR_set_error(5,0x75,0);
    }
    if ((local_14 & 8) != 0) {
      ERR_new();
      ERR_set_debug("crypto/dh/dh_check.c",0x26,"DH_check_params_ex");
      ERR_set_error(5,0x78,0);
    }
    if ((local_14 & 0x80) != 0) {
      ERR_new();
      ERR_set_debug("crypto/dh/dh_check.c",0x28,"DH_check_params_ex");
      ERR_set_error(5,0x7e,0);
    }
    if ((local_14 & 0x100) != 0) {
      ERR_new();
      ERR_set_debug("crypto/dh/dh_check.c",0x2a,"DH_check_params_ex");
      ERR_set_error(5,0x67,0);
    }
    uVar1 = (ulong)(local_14 == 0);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}



int DH_check(DH *dh,int *codes)

{
  int iVar1;
  int iVar2;
  BN_CTX *ctx;
  BIGNUM *r;
  BIGNUM *rem;
  BIGNUM *pBVar3;
  
  iVar1 = DH_get_nid();
  *codes = 0;
  if (iVar1 != 0) {
    return 1;
  }
  iVar2 = BN_num_bits(dh->p);
  iVar1 = 0;
  if (0x8000 < iVar2) {
    ERR_new();
    ERR_set_debug("crypto/dh/dh_check.c",0x9d,"DH_check");
    ERR_set_error(5,0x67,0);
    *codes = 0x101;
    return 0;
  }
  iVar2 = DH_check_params(dh,codes);
  if (iVar2 == 0) {
    return 0;
  }
  ctx = (BN_CTX *)BN_CTX_new_ex(dh[1].pub_key);
  if (ctx == (BN_CTX *)0x0) goto LAB_001003a0;
  BN_CTX_start(ctx);
  r = BN_CTX_get(ctx);
  rem = BN_CTX_get(ctx);
  if (rem == (BIGNUM *)0x0) goto LAB_001003a0;
  pBVar3 = dh->p;
  if (dh->g != (BIGNUM *)0x0) {
    iVar2 = BN_ucmp(pBVar3,dh->g);
    if (iVar2 < 1) {
      *codes = *codes | 0x20;
      pBVar3 = dh->p;
    }
    else {
      pBVar3 = BN_value_one();
      iVar2 = BN_cmp((BIGNUM *)dh->length,pBVar3);
      if ((iVar2 < 1) || (iVar2 = BN_cmp((BIGNUM *)dh->length,dh->p), -1 < iVar2)) {
LAB_00100415:
        *codes = *codes | 8;
      }
      else {
        iVar2 = BN_mod_exp(r,(BIGNUM *)dh->length,dh->g,dh->p,ctx);
        if (iVar2 == 0) goto LAB_001003a0;
        iVar2 = BN_is_one(r);
        if (iVar2 == 0) goto LAB_00100415;
      }
      iVar2 = BN_check_prime(dh->g,ctx,0);
      if (iVar2 < 0) goto LAB_001003a0;
      if (iVar2 == 0) {
        *codes = *codes | 0x10;
      }
      iVar2 = BN_div(r,rem,dh->p,dh->g,ctx);
      if (iVar2 == 0) goto LAB_001003a0;
      iVar2 = BN_is_one(rem);
      if (iVar2 == 0) {
        *codes = *codes | 0x20;
      }
      if ((dh->pub_key != (BIGNUM *)0x0) && (iVar2 = BN_cmp(dh->pub_key,r), iVar2 != 0)) {
        *codes = *codes | 0x40;
      }
      pBVar3 = dh->p;
    }
  }
  iVar2 = BN_check_prime(pBVar3,ctx,0);
  if (iVar2 < 0) goto LAB_001003a0;
  if (iVar2 == 0) {
    *codes = *codes | 1;
  }
  else if (dh->g == (BIGNUM *)0x0) {
    iVar2 = BN_rshift1(r,dh->p);
    if (iVar2 == 0) goto LAB_001003a0;
    iVar2 = BN_check_prime(r,ctx,0);
    if (iVar2 < 0) goto LAB_001003a0;
    if (iVar2 == 0) {
      *codes = *codes | 2;
    }
  }
  iVar1 = 1;
LAB_001003a0:
  BN_CTX_end(ctx);
  BN_CTX_free(ctx);
  return iVar1;
}



/* WARNING: Type propagation algorithm not settling */

uint DH_check_ex(DH *param_1)

{
  uint uVar1;
  long in_FS_OFFSET;
  uint local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  uVar1 = DH_check(param_1,(int *)&local_14);
  if (uVar1 != 0) {
    if ((local_14 & 8) != 0) {
      ERR_new();
      ERR_set_debug("crypto/dh/dh_check.c",0x77,"DH_check_ex");
      ERR_set_error(5,0x78,0);
    }
    if ((local_14 & 0x10) != 0) {
      ERR_new();
      ERR_set_debug("crypto/dh/dh_check.c",0x79,"DH_check_ex");
      ERR_set_error(5,0x77,0);
    }
    if ((local_14 & 0x20) != 0) {
      ERR_new();
      ERR_set_debug("crypto/dh/dh_check.c",0x7b,"DH_check_ex");
      ERR_set_error(5,0x74,0);
    }
    if ((local_14 & 0x40) != 0) {
      ERR_new();
      ERR_set_debug("crypto/dh/dh_check.c",0x7d,"DH_check_ex");
      ERR_set_error(5,0x73,0);
    }
    if ((local_14 & 4) != 0) {
      ERR_new();
      ERR_set_debug("crypto/dh/dh_check.c",0x7f,"DH_check_ex");
      ERR_set_error(5,0x79,0);
    }
    if ((local_14 & 1) != 0) {
      ERR_new();
      ERR_set_debug("crypto/dh/dh_check.c",0x81,"DH_check_ex");
      ERR_set_error(5,0x75,0);
    }
    if ((local_14 & 2) != 0) {
      ERR_new();
      ERR_set_debug("crypto/dh/dh_check.c",0x83,"DH_check_ex");
      ERR_set_error(5,0x76,0);
    }
    if ((local_14 & 0x80) != 0) {
      ERR_new();
      ERR_set_debug("crypto/dh/dh_check.c",0x85,"DH_check_ex");
      ERR_set_error(5,0x7e,0);
    }
    if ((local_14 & 0x100) != 0) {
      ERR_new();
      ERR_set_debug("crypto/dh/dh_check.c",0x87,"DH_check_ex");
      ERR_set_error(5,0x67,0);
    }
    uVar1 = (uint)(local_14 == 0);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}



int DH_check_pub_key(DH *dh,BIGNUM *pub_key,int *codes)

{
  int iVar1;
  
  iVar1 = BN_num_bits(dh->p);
  if (0x8000 < iVar1) {
    ERR_new();
    ERR_set_debug("crypto/dh/dh_check.c",0xfe,"DH_check_pub_key");
    ERR_set_error(5,0x67,0);
    *codes = 0x104;
    return 0;
  }
  if (dh->g != (BIGNUM *)0x0) {
    iVar1 = BN_ucmp(dh->p,dh->g);
    if (iVar1 < 0) {
      *codes = *codes | 0x24;
      return 1;
    }
  }
  iVar1 = ossl_ffc_validate_public_key(&dh->p,pub_key,codes);
  return iVar1;
}



uint DH_check_pub_key_ex(DH *param_1,BIGNUM *param_2)

{
  uint uVar1;
  long in_FS_OFFSET;
  uint local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  uVar1 = DH_check_pub_key(param_1,param_2,(int *)&local_14);
  if (uVar1 != 0) {
    if ((local_14 & 1) != 0) {
      ERR_new();
      ERR_set_debug("crypto/dh/dh_check.c",0xee,"DH_check_pub_key_ex");
      ERR_set_error(5,0x7c,0);
    }
    if ((local_14 & 2) != 0) {
      ERR_new();
      ERR_set_debug("crypto/dh/dh_check.c",0xf0,"DH_check_pub_key_ex");
      ERR_set_error(5,0x7b,0);
    }
    if ((local_14 & 4) != 0) {
      ERR_new();
      ERR_set_debug("crypto/dh/dh_check.c",0xf2,"DH_check_pub_key_ex");
      ERR_set_error(5,0x7a,0);
    }
    uVar1 = (uint)(local_14 == 0);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}



ulong ossl_dh_check_pub_key_partial(long param_1,undefined8 param_2,int *param_3)

{
  ulong uVar1;
  
  uVar1 = ossl_ffc_validate_public_key_partial(param_1 + 8);
  if ((int)uVar1 != 0) {
    uVar1 = (ulong)(*param_3 == 0);
  }
  return uVar1;
}



bool ossl_dh_check_priv_key(long param_1,BIGNUM *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  BIGNUM *r;
  BIGNUM *a;
  BIGNUM *pBVar3;
  bool bVar4;
  
  *param_3 = 0;
  r = BN_new();
  if (r == (BIGNUM *)0x0) {
    return false;
  }
  pBVar3 = *(BIGNUM **)(param_1 + 0x10);
  if (pBVar3 == (BIGNUM *)0x0) {
    if (*(BIGNUM **)(param_1 + 8) != (BIGNUM *)0x0) {
      iVar1 = *(int *)(param_1 + 0x68);
      if (iVar1 != 0) {
        iVar2 = BN_num_bits(param_2);
        bVar4 = iVar2 == iVar1;
        goto LAB_00100a55;
      }
      iVar1 = BN_num_bits(*(BIGNUM **)(param_1 + 8));
      iVar2 = BN_num_bits(param_2);
      if (iVar2 < iVar1) {
        iVar1 = BN_num_bits(param_2);
        bVar4 = 1 < iVar1;
        goto LAB_00100a55;
      }
    }
LAB_00100a93:
    bVar4 = false;
  }
  else {
    iVar1 = DH_get_nid(param_1);
    if ((iVar1 != 0) && (iVar1 = *(int *)(param_1 + 0x68), iVar1 != 0)) {
      a = BN_value_one();
      iVar1 = BN_lshift(r,a,iVar1);
      if (iVar1 == 0) goto LAB_00100a93;
      iVar1 = BN_cmp(r,*(BIGNUM **)(param_1 + 0x10));
      if (iVar1 < 0) {
        pBVar3 = r;
      }
    }
    iVar1 = ossl_ffc_validate_private_key(pBVar3,param_2,param_3);
    bVar4 = iVar1 != 0;
  }
LAB_00100a55:
  BN_free(r);
  return bVar4;
}



uint ossl_dh_check_pairwise(long param_1)

{
  uint uVar1;
  int iVar2;
  BN_CTX *c;
  BIGNUM *a;
  
  if (*(long *)(param_1 + 8) == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x78) == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    c = (BN_CTX *)BN_CTX_new_ex(*(undefined8 *)(param_1 + 0xb0));
    if ((c == (BN_CTX *)0x0) || (a = BN_new(), a == (BIGNUM *)0x0)) {
      a = (BIGNUM *)0x0;
      uVar1 = 0;
    }
    else {
      uVar1 = ossl_dh_generate_public_key(c,param_1,*(undefined8 *)(param_1 + 0x78),a);
      if (uVar1 != 0) {
        iVar2 = BN_cmp(a,*(BIGNUM **)(param_1 + 0x70));
        uVar1 = (uint)(iVar2 == 0);
      }
    }
    BN_free(a);
    BN_CTX_free(c);
    return uVar1;
  }
  return 0;
}


