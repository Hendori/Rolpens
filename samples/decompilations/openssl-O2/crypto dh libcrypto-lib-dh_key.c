
undefined8 dh_init(long param_1)

{
  *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | 1;
  *(long *)(param_1 + 200) = *(long *)(param_1 + 200) + 1;
  return 1;
}



undefined4 ossl_dh_compute_key(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  BN_CTX *ctx;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *pBVar4;
  BN_MONT_CTX *pBVar5;
  long lVar6;
  
  iVar1 = BN_num_bits(*(BIGNUM **)(param_3 + 8));
  if (iVar1 < 0x2711) {
    if ((*(BIGNUM **)(param_3 + 0x10) == (BIGNUM *)0x0) ||
       (iVar1 = BN_num_bits(*(BIGNUM **)(param_3 + 0x10)), iVar1 < 0x2711)) {
      iVar1 = BN_num_bits(*(BIGNUM **)(param_3 + 8));
      if (iVar1 < 0x200) {
        ERR_new();
        ERR_set_debug("crypto/dh/dh_key.c",0x3b,"ossl_dh_compute_key");
        ERR_set_error(5,0x7e,0);
        return 0;
      }
      ctx = (BN_CTX *)BN_CTX_new_ex(*(undefined8 *)(param_3 + 0xb0));
      if (ctx != (BN_CTX *)0x0) {
        BN_CTX_start(ctx);
        a = BN_CTX_get(ctx);
        a_00 = BN_CTX_get(ctx);
        if (a_00 != (BIGNUM *)0x0) {
          lVar6 = *(long *)(param_3 + 0x78);
          if (lVar6 == 0) {
            ERR_new();
            ERR_set_debug("crypto/dh/dh_key.c",0x49,"ossl_dh_compute_key");
            ERR_set_error(5,100,0);
          }
          else {
            pBVar4 = *(BIGNUM **)(param_3 + 8);
            if ((*(byte *)(param_3 + 0x80) & 1) != 0) {
              pBVar5 = BN_MONT_CTX_set_locked
                                 ((BN_MONT_CTX **)(param_3 + 0x88),
                                  (int)*(undefined8 *)(param_3 + 0xc0),pBVar4,ctx);
              BN_set_flags(*(undefined8 *)(param_3 + 0x78),4);
              if (pBVar5 == (BN_MONT_CTX *)0x0) goto LAB_001002e0;
              lVar6 = *(long *)(param_3 + 0x78);
              pBVar4 = *(BIGNUM **)(param_3 + 8);
            }
            iVar1 = (**(code **)(*(long *)(param_3 + 0xb8) + 0x18))
                              (param_3,a_00,param_2,lVar6,pBVar4,ctx);
            if (iVar1 == 0) {
              ERR_new();
              ERR_set_debug("crypto/dh/dh_key.c",0x58,"ossl_dh_compute_key");
              ERR_set_error(5,0x80003,0);
            }
            else {
              pBVar4 = BN_copy(a,*(BIGNUM **)(param_3 + 8));
              if ((pBVar4 != (BIGNUM *)0x0) && (iVar1 = BN_sub_word(a,1), iVar1 != 0)) {
                pBVar4 = BN_value_one();
                iVar1 = BN_cmp(a_00,pBVar4);
                if ((0 < iVar1) && (iVar1 = BN_cmp(a_00,a), iVar1 != 0)) {
                  iVar2 = BN_num_bits(*(BIGNUM **)(param_3 + 8));
                  iVar1 = iVar2 + 0xe;
                  if (-1 < iVar2 + 7) {
                    iVar1 = iVar2 + 7;
                  }
                  uVar3 = BN_bn2binpad(a_00,param_1,iVar1 >> 3);
                  goto LAB_00100180;
                }
              }
              ERR_new();
              ERR_set_debug("crypto/dh/dh_key.c",0x61,"ossl_dh_compute_key");
              ERR_set_error(5,0x80,0);
            }
          }
        }
LAB_001002e0:
        uVar3 = 0xffffffff;
        goto LAB_00100180;
      }
    }
    else {
      ERR_new();
      ERR_set_debug("crypto/dh/dh_key.c",0x36,"ossl_dh_compute_key");
      ERR_set_error(5,0x82,0);
    }
  }
  else {
    ERR_new();
    ERR_set_debug("crypto/dh/dh_key.c",0x30,"ossl_dh_compute_key");
    ERR_set_error(5,0x67,0);
  }
  uVar3 = 0xffffffff;
  a_00 = (BIGNUM *)0x0;
  ctx = (BN_CTX *)0x0;
LAB_00100180:
  BN_clear(a_00);
  BN_CTX_end(ctx);
  BN_CTX_free(ctx);
  return uVar3;
}



undefined8 dh_finish(long param_1)

{
  BN_MONT_CTX_free(*(BN_MONT_CTX **)(param_1 + 0x88));
  return 1;
}



void dh_bn_mod_exp(undefined8 param_1,BIGNUM *param_2,BIGNUM *param_3,BIGNUM *param_4,
                  BIGNUM *param_5,BN_CTX *param_6,BN_MONT_CTX *param_7)

{
  BN_mod_exp_mont(param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



int DH_compute_key(uchar *key,BIGNUM *pub_key,DH *dh)

{
  uchar uVar1;
  int iVar2;
  uchar *puVar3;
  size_t local_28;
  ulong local_20;
  
  local_28 = 0;
  local_20 = 1;
  iVar2 = (**(code **)&(dh[1].priv_key)->neg)();
  if (0 < iVar2) {
    puVar3 = key;
    do {
      uVar1 = *puVar3;
      puVar3 = puVar3 + 1;
      local_20 = uVar1 == '\0' & local_20;
      local_28 = local_28 + local_20;
    } while (key + iVar2 != puVar3);
    iVar2 = iVar2 - (int)local_28;
    memmove(key,key + local_28,(long)iVar2);
    memset(key + iVar2,0,local_28);
  }
  return iVar2;
}



int DH_compute_key_padded(uchar *key,BIGNUM *pub_key,DH *dh)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (**(code **)&(dh[1].priv_key)->neg)();
  iVar3 = iVar1;
  if (0 < iVar1) {
    iVar2 = BN_num_bits(dh->p);
    iVar3 = iVar2 + 0xe;
    if (-1 < iVar2 + 7) {
      iVar3 = iVar2 + 7;
    }
    iVar3 = iVar3 >> 3;
    iVar2 = iVar3 - iVar1;
    if (0 < iVar2) {
      memmove(key + iVar2,key,(long)iVar1);
      memset(key,0,(long)iVar2);
    }
  }
  return iVar3;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DH_METHOD * DH_OpenSSL(void)

{
  return (DH_METHOD *)dh_ossl;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DH_METHOD * DH_get_default_method(void)

{
  return (DH_METHOD *)default_DH_method;
}



void DH_set_default_method(DH_METHOD *meth)

{
  default_DH_method = (undefined *)meth;
  return;
}



int DH_generate_key(DH *dh)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0010050b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)&(dh[1].priv_key)->top)();
  return iVar1;
}



bool ossl_dh_generate_public_key(BN_CTX *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  BIGNUM *a;
  BN_MONT_CTX *pBVar2;
  bool bVar3;
  
  a = BN_new();
  if (a == (BIGNUM *)0x0) {
    return false;
  }
  if ((*(byte *)(param_2 + 0x80) & 1) == 0) {
    pBVar2 = (BN_MONT_CTX *)0x0;
  }
  else {
    pBVar2 = BN_MONT_CTX_set_locked
                       ((BN_MONT_CTX **)(param_2 + 0x88),(int)*(undefined8 *)(param_2 + 0xc0),
                        *(BIGNUM **)(param_2 + 8),param_1);
    if (pBVar2 == (BN_MONT_CTX *)0x0) {
      bVar3 = false;
      goto LAB_00100588;
    }
  }
  BN_with_flags(a,param_3,4);
  iVar1 = (**(code **)(*(long *)(param_2 + 0xb8) + 0x18))
                    (param_2,param_4,*(undefined8 *)(param_2 + 0x18),a,*(undefined8 *)(param_2 + 8),
                     param_1,pBVar2);
  bVar3 = iVar1 != 0;
LAB_00100588:
  BN_clear_free(a);
  return bVar3;
}



undefined8 generate_key(long param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  BN_CTX *c;
  BIGNUM *a;
  BIGNUM *a_00;
  undefined8 uVar4;
  BIGNUM *a_01;
  
  iVar2 = BN_num_bits(*(BIGNUM **)(param_1 + 8));
  if (10000 < iVar2) {
    ERR_new();
    ERR_set_debug("crypto/dh/dh_key.c",0x114,"generate_key");
    ERR_set_error(5,0x67,0);
    return 0;
  }
  if ((*(BIGNUM **)(param_1 + 0x10) != (BIGNUM *)0x0) &&
     (iVar2 = BN_num_bits(*(BIGNUM **)(param_1 + 0x10)), 10000 < iVar2)) {
    ERR_new();
    ERR_set_debug("crypto/dh/dh_key.c",0x11a,"generate_key");
    ERR_set_error(5,0x82,0);
    return 0;
  }
  iVar2 = BN_num_bits(*(BIGNUM **)(param_1 + 8));
  if (iVar2 < 0x200) {
    ERR_new();
    ERR_set_debug("crypto/dh/dh_key.c",0x11f,"generate_key");
    ERR_set_error(5,0x7e,0);
    return 0;
  }
  c = (BN_CTX *)BN_CTX_new_ex(*(undefined8 *)(param_1 + 0xb0));
  if (c == (BN_CTX *)0x0) {
LAB_001006d0:
    a = (BIGNUM *)0x0;
    a_00 = (BIGNUM *)0x0;
  }
  else {
    a = *(BIGNUM **)(param_1 + 0x78);
    if (a == (BIGNUM *)0x0) {
      a = (BIGNUM *)BN_secure_new();
      if (a == (BIGNUM *)0x0) goto LAB_001006d0;
      a_00 = *(BIGNUM **)(param_1 + 0x70);
      if ((a_00 != (BIGNUM *)0x0) || (a_00 = BN_new(), a_00 != (BIGNUM *)0x0)) {
        iVar2 = DH_get_nid(param_1);
        if (iVar2 == 0) {
          if (*(long *)(param_1 + 0x10) == 0) {
            iVar2 = *(int *)(param_1 + 0x68);
            a_01 = *(BIGNUM **)(param_1 + 8);
            if (iVar2 == 0) {
LAB_001008a1:
              iVar2 = BN_num_bits(a_01);
              iVar2 = iVar2 + -1;
            }
            else {
              iVar3 = BN_num_bits(a_01);
              if (iVar3 <= iVar2) goto LAB_001006d6;
              iVar2 = *(int *)(param_1 + 0x68);
              if (iVar2 == 0) {
                a_01 = *(BIGNUM **)(param_1 + 8);
                goto LAB_001008a1;
              }
            }
            iVar2 = BN_priv_rand_ex(a,iVar2,0,0,0,c);
            if (iVar2 != 0) {
              iVar2 = BN_is_word(*(undefined8 *)(param_1 + 0x18),2);
              if ((iVar2 == 0) || (iVar2 = BN_is_bit_set(*(BIGNUM **)(param_1 + 8),2), iVar2 != 0))
              goto LAB_00100664;
              iVar2 = BN_clear_bit(a,0);
              goto joined_r0x00100827;
            }
          }
          else {
            iVar2 = ossl_ffc_params_simple_validate(*(undefined8 *)(param_1 + 0xb0),param_1 + 8,1,0)
            ;
            if (iVar2 != 0) {
              iVar2 = BN_num_bits(*(BIGNUM **)(param_1 + 0x10));
              iVar2 = ossl_ffc_generate_private_key(c,param_1 + 8,iVar2,0x50,a);
              goto joined_r0x00100827;
            }
          }
        }
        else {
          iVar2 = BN_num_bits(*(BIGNUM **)(param_1 + 8));
          uVar1 = ossl_ifc_ffc_compute_security_bits(iVar2);
          if ((*(BIGNUM **)(param_1 + 0x10) != (BIGNUM *)0x0) &&
             (iVar2 = *(int *)(param_1 + 0x68), iVar3 = BN_num_bits(*(BIGNUM **)(param_1 + 0x10)),
             iVar2 <= iVar3)) {
            iVar2 = ossl_ffc_generate_private_key
                              (c,param_1 + 8,*(undefined4 *)(param_1 + 0x68),uVar1,a);
joined_r0x00100827:
            if (iVar2 != 0) goto LAB_00100664;
          }
        }
      }
    }
    else {
      a_00 = *(BIGNUM **)(param_1 + 0x70);
      if ((a_00 == (BIGNUM *)0x0) && (a_00 = BN_new(), a_00 == (BIGNUM *)0x0)) goto LAB_001006d6;
LAB_00100664:
      iVar2 = ossl_dh_generate_public_key(c,param_1,a,a_00);
      if (iVar2 != 0) {
        *(long *)(param_1 + 200) = *(long *)(param_1 + 200) + 1;
        *(BIGNUM **)(param_1 + 0x70) = a_00;
        *(BIGNUM **)(param_1 + 0x78) = a;
        uVar4 = 1;
        goto LAB_00100727;
      }
    }
  }
LAB_001006d6:
  ERR_new();
  ERR_set_debug("crypto/dh/dh_key.c",0x17a,"generate_key");
  ERR_set_error(5,0x80003,0);
  if (*(BIGNUM **)(param_1 + 0x70) != a_00) {
    BN_free(a_00);
  }
  if (*(BIGNUM **)(param_1 + 0x78) != a) {
    BN_free(a);
  }
  uVar4 = 0;
LAB_00100727:
  BN_CTX_free(c);
  return uVar4;
}



undefined8 ossl_dh_buf2key(undefined8 param_1,uchar *param_2,int param_3)

{
  int iVar1;
  BIGNUM *a;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined1 local_2c [4];
  BIGNUM *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  a = BN_bin2bn(param_2,param_3,(BIGNUM *)0x0);
  if (a == (BIGNUM *)0x0) {
LAB_00100a00:
    uVar2 = 0x6a;
  }
  else {
    DH_get0_pqg(param_1,&local_28,0,0);
    if ((local_28 == (BIGNUM *)0x0) || (iVar1 = BN_num_bits(local_28), iVar1 + 0xeU < 0xf)) {
      uVar2 = 0x6b;
    }
    else {
      uVar2 = 0x66;
      iVar1 = ossl_dh_check_pub_key_partial(param_1,a,local_2c);
      if (iVar1 != 0) {
        uVar2 = DH_set0_key(param_1,a,0);
        if ((int)uVar2 == 1) goto LAB_00100a4e;
        goto LAB_00100a00;
      }
    }
  }
  ERR_new();
  ERR_set_debug("crypto/dh/dh_key.c",0x19b,"ossl_dh_buf2key");
  ERR_set_error(5,uVar2,0);
  BN_free(a);
  uVar2 = 0;
LAB_00100a4e:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



ulong ossl_dh_key2buf(undefined8 param_1,long *param_2,ulong param_3,int param_4)

{
  int iVar1;
  int iVar2;
  void *ptr;
  ulong uVar3;
  long in_FS_OFFSET;
  BIGNUM *local_50;
  BIGNUM *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  DH_get0_pqg(param_1,&local_48,0,0);
  DH_get0_key(param_1,&local_50,0);
  if ((local_48 == (BIGNUM *)0x0) || (local_50 == (BIGNUM *)0x0)) {
LAB_00100ae2:
    ERR_new();
    ERR_set_debug("crypto/dh/dh_key.c",0x1ad,"ossl_dh_key2buf");
    ERR_set_error(5,0x66,0);
  }
  else {
    iVar1 = BN_num_bits(local_48);
    iVar2 = iVar1 + 7;
    if (iVar1 + 7 < 0) {
      iVar2 = iVar1 + 0xe;
    }
    iVar2 = iVar2 >> 3;
    if (iVar2 == 0) goto LAB_00100ae2;
    iVar1 = BN_num_bits(local_50);
    if (iVar1 + 0xeU < 0xf) goto LAB_00100ae2;
    uVar3 = (ulong)iVar2;
    if (param_2 == (long *)0x0) goto LAB_00100b18;
    if (param_4 == 0) {
      ptr = (void *)*param_2;
      if (ptr == (void *)0x0) goto LAB_00100b18;
      if (uVar3 <= param_3) {
        iVar2 = BN_bn2binpad(local_50,ptr,iVar2);
        if (iVar2 < 0) goto LAB_00100c19;
LAB_00100b8b:
        *param_2 = (long)ptr;
        goto LAB_00100b18;
      }
      ERR_new();
      ERR_set_debug("crypto/dh/dh_key.c",0x1b5,"ossl_dh_key2buf");
      ERR_set_error(5,0x81,0);
    }
    else {
      ptr = CRYPTO_malloc(iVar2,"crypto/dh/dh_key.c",0x1b7);
      if (ptr != (void *)0x0) {
        iVar2 = BN_bn2binpad(local_50,ptr,iVar2);
        if (-1 < iVar2) goto LAB_00100b8b;
        CRYPTO_free(ptr);
LAB_00100c19:
        ERR_new();
        ERR_set_debug("crypto/dh/dh_key.c",0x1c4,"ossl_dh_key2buf");
        ERR_set_error(5,0x6a,0);
      }
    }
  }
  uVar3 = 0;
LAB_00100b18:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


