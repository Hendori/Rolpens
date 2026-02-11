
undefined1 * ossl_rsa_digestinfo_encoding(int param_1,undefined8 *param_2)

{
  if (param_1 == 0x2a3) {
    *param_2 = 0x13;
    return digestinfo_sha224_der;
  }
  if (param_1 < 0x2a4) {
    if (param_1 == 0x101) {
      *param_2 = 0x12;
      return digestinfo_md4_der;
    }
    if (param_1 < 0x102) {
      if (param_1 == 0x5f) {
        *param_2 = 0xe;
        return digestinfo_mdc2_der;
      }
      if (param_1 < 0x60) {
        if (param_1 == 4) {
          *param_2 = 0x12;
          return digestinfo_md5_der;
        }
        if (param_1 == 0x40) {
          *param_2 = 0xf;
          return digestinfo_sha1_der;
        }
      }
      else if (param_1 == 0x75) {
        *param_2 = 0xf;
        return digestinfo_ripemd160_der;
      }
    }
    else {
      if (param_1 == 0x2a1) {
        *param_2 = 0x13;
        return digestinfo_sha384_der;
      }
      if (param_1 == 0x2a2) {
        *param_2 = 0x13;
        return digestinfo_sha512_der;
      }
      if (param_1 == 0x2a0) {
        *param_2 = 0x13;
        return digestinfo_sha256_der;
      }
    }
  }
  else {
    switch(param_1) {
    case 0x446:
      *param_2 = 0x13;
      return digestinfo_sha512_224_der;
    case 0x447:
      *param_2 = 0x13;
      return digestinfo_sha512_256_der;
    case 0x448:
      *param_2 = 0x13;
      return digestinfo_sha3_224_der;
    case 0x449:
      *param_2 = 0x13;
      return digestinfo_sha3_256_der;
    case 0x44a:
      *param_2 = 0x13;
      return digestinfo_sha3_384_der;
    case 1099:
      *param_2 = 0x13;
      return digestinfo_sha3_512_der;
    case 0x477:
      *param_2 = 0x12;
      return digestinfo_sm3_der;
    }
  }
  return (undefined1 *)0x0;
}



undefined8
encode_pkcs1_constprop_0(undefined8 *param_1,long *param_2,int param_3,void *param_4,size_t param_5)

{
  void *__src;
  void *__dest;
  undefined8 uVar1;
  long lVar2;
  long in_FS_OFFSET;
  size_t local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == 0) {
    ERR_new();
    ERR_set_debug("crypto/rsa/rsa_sign.c",0x10a,"encode_pkcs1");
    ERR_set_error(4,0x75,0);
  }
  else {
    __src = (void *)ossl_rsa_digestinfo_encoding(param_3,&local_48);
    if (__src == (void *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/rsa/rsa_sign.c",0x10f,"encode_pkcs1");
      ERR_set_error(4,0x74,0);
      uVar1 = 0;
      goto LAB_0010024b;
    }
    lVar2 = local_48 + param_5;
    __dest = CRYPTO_malloc((int)lVar2,"crypto/rsa/rsa_sign.c",0x114);
    if (__dest != (void *)0x0) {
      memcpy(__dest,__src,local_48);
      memcpy((void *)((long)__dest + local_48),param_4,param_5);
      *param_1 = __dest;
      uVar1 = 1;
      *param_2 = lVar2;
      goto LAB_0010024b;
    }
  }
  uVar1 = 0;
LAB_0010024b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int RSA_sign(int type,uchar *m,uint m_length,uchar *sigret,uint *siglen,RSA *rsa)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long in_FS_OFFSET;
  long local_50;
  uchar *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_48 = (uchar *)0x0;
  if (*(code **)(rsa->engine + 0x58) != (code *)0x0) {
    iVar1 = (**(code **)(rsa->engine + 0x58))();
    uVar2 = (uint)(0 < iVar1);
    goto LAB_00100347;
  }
  if (type == 0x72) {
    if (m_length != 0x24) {
      ERR_new();
      uVar2 = 0;
      ERR_set_debug("crypto/rsa/rsa_sign.c",0x134,"RSA_sign");
      ERR_set_error(4,0x83,0);
      goto LAB_00100347;
    }
    local_50 = 0x24;
    lVar3 = 0x24;
    uVar2 = RSA_size(rsa);
    if (0x2e < uVar2) goto LAB_001003a6;
LAB_00100435:
    ERR_new();
    uVar2 = 0;
    ERR_set_debug("crypto/rsa/rsa_sign.c",0x140,"RSA_sign");
    ERR_set_error(4,0x70,0);
  }
  else {
    iVar1 = encode_pkcs1_constprop_0(&local_48,&local_50,type,m,m_length);
    m = local_48;
    lVar3 = local_50;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      iVar1 = RSA_size(rsa);
      if ((ulong)(long)iVar1 < lVar3 + 0xbU) goto LAB_00100435;
LAB_001003a6:
      uVar2 = RSA_private_encrypt((int)lVar3,m,sigret,rsa,1);
      if ((int)uVar2 < 1) {
        uVar2 = 0;
      }
      else {
        *siglen = uVar2;
        uVar2 = 1;
      }
    }
  }
  CRYPTO_clear_free(local_48,lVar3,"crypto/rsa/rsa_sign.c",0x14c);
LAB_00100347:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int ossl_rsa_verify(int param_1,long *param_2,uint param_3,long *param_4,size_t *param_5,
                   uchar *param_6,long param_7,RSA *param_8)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long *to;
  ulong __n;
  undefined8 uVar6;
  ulong uVar7;
  void *pvVar8;
  ulong __n_00;
  long in_FS_OFFSET;
  long *local_78;
  ulong local_50;
  void *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_48 = (void *)0x0;
  iVar5 = RSA_size(param_8);
  if (iVar5 != param_7) {
    ERR_new();
    iVar5 = 0;
    ERR_set_debug("crypto/rsa/rsa_sign.c",0x162,"ossl_rsa_verify");
    ERR_set_error(4,0x77,0);
    goto LAB_00100577;
  }
  to = (long *)CRYPTO_malloc((int)param_7,"crypto/rsa/rsa_sign.c",0x167);
  if ((to == (long *)0x0) ||
     (iVar5 = RSA_public_decrypt((int)param_7,param_6,(uchar *)to,param_8,1), iVar5 < 1)) {
LAB_00100760:
    pvVar8 = (void *)0x0;
    uVar7 = 0;
    iVar5 = 0;
  }
  else {
    __n_00 = (ulong)iVar5;
    if (param_1 == 0x72) {
      if (__n_00 != 0x24) {
        ERR_new();
        uVar6 = 0x179;
LAB_00100890:
        ERR_set_debug("crypto/rsa/rsa_sign.c",uVar6,"ossl_rsa_verify");
        ERR_set_error(4,0x68,0);
        goto LAB_00100760;
      }
      if (param_4 == (long *)0x0) {
        if (param_3 != 0x24) {
          ERR_new();
          uVar6 = 0x182;
LAB_001009a9:
          ERR_set_debug("crypto/rsa/rsa_sign.c",uVar6,"ossl_rsa_verify");
          ERR_set_error(4,0x83,0);
          goto LAB_00100760;
        }
        if (((*to != *param_2 || to[1] != param_2[1]) ||
            (to[2] != param_2[2] || to[3] != param_2[3])) || ((int)to[4] != (int)param_2[4])) {
          ERR_new();
          uVar6 = 0x187;
          goto LAB_00100890;
        }
      }
      else {
        lVar1 = *to;
        lVar2 = to[1];
        lVar3 = to[2];
        lVar4 = to[3];
        *(int *)(param_4 + 4) = (int)to[4];
        *param_4 = lVar1;
        param_4[1] = lVar2;
        param_4[2] = lVar3;
        param_4[3] = lVar4;
        *param_5 = 0x24;
      }
LAB_00100818:
      pvVar8 = (void *)0x0;
      uVar7 = 0;
      iVar5 = 1;
    }
    else {
      if ((param_1 == 0x5f) && (__n_00 == 0x12)) {
        if (((char)*to == '\x04') && (*(char *)((long)to + 1) == '\x10')) {
          if (param_4 == (long *)0x0) {
            if (param_3 != 0x10) {
              ERR_new();
              uVar6 = 0x196;
              goto LAB_001009a9;
            }
            if (*param_2 != *(long *)((long)to + 2) || param_2[1] != *(long *)((long)to + 10)) {
              ERR_new();
              uVar6 = 0x19b;
              goto LAB_00100890;
            }
          }
          else {
            lVar1 = *(long *)((long)to + 10);
            *param_4 = *(long *)((long)to + 2);
            param_4[1] = lVar1;
            *param_5 = 0x10;
          }
          goto LAB_00100818;
        }
        __n = 0x10;
        uVar7 = 0x10;
        if (param_4 == (long *)0x0) goto LAB_00100930;
LAB_00100628:
        local_78 = (long *)((long)to + (__n_00 - uVar7));
      }
      else {
        if (param_4 != (long *)0x0) {
          if (param_1 == 0x2a3) {
switchD_00100850_caseD_448:
            __n = 0x1c;
            uVar7 = 0x1c;
          }
          else if (param_1 < 0x2a4) {
            if (param_1 == 0x2a0) {
switchD_00100850_caseD_447:
              __n = 0x20;
              uVar7 = 0x20;
            }
            else if (param_1 < 0x2a1) {
              if (param_1 == 0x5f) {
LAB_001009ef:
                __n = 0x10;
                uVar7 = 0x10;
              }
              else if (param_1 < 0x60) {
                if (param_1 == 4) goto LAB_001009ef;
                __n = 0x14;
                uVar7 = 0x14;
                if (param_1 != 0x40) goto LAB_00100760;
              }
              else {
                __n = 0x14;
                uVar7 = 0x14;
                if (param_1 != 0x75) {
                  if (param_1 != 0x101) goto LAB_00100760;
                  goto LAB_001009ef;
                }
              }
            }
            else {
              __n = 0x40;
              if (param_1 == 0x2a1) {
                __n = 0x30;
              }
              uVar7 = 0x40;
              if (param_1 == 0x2a1) {
                uVar7 = 0x30;
              }
            }
          }
          else {
            if (5 < param_1 - 0x446U) goto LAB_00100760;
            switch(param_1) {
            case 0x447:
            case 0x449:
              goto switchD_00100850_caseD_447;
            default:
              goto switchD_00100850_caseD_448;
            case 0x44a:
              __n = 0x30;
              uVar7 = 0x30;
              break;
            case 1099:
              __n = 0x40;
              uVar7 = 0x40;
            }
          }
          if (__n_00 < uVar7) {
            ERR_new();
            ERR_set_debug("crypto/rsa/rsa_sign.c",0x1ae,"ossl_rsa_verify");
            ERR_set_error(4,0x8f,0);
            goto LAB_00100760;
          }
          goto LAB_00100628;
        }
LAB_00100930:
        __n = (ulong)param_3;
        local_78 = param_2;
      }
      iVar5 = encode_pkcs1_constprop_0(&local_48,&local_50,param_1,local_78,__n);
      pvVar8 = local_48;
      uVar7 = local_50;
      if (iVar5 != 0) {
        if ((local_50 == __n_00) && (iVar5 = memcmp(local_48,to,__n_00), iVar5 == 0)) {
          if (param_4 != (long *)0x0) {
            memcpy(param_4,local_78,__n);
            *param_5 = __n;
          }
          iVar5 = 1;
          uVar7 = __n_00;
        }
        else {
          iVar5 = 0;
          ERR_new();
          ERR_set_debug("crypto/rsa/rsa_sign.c",0x1ba,"ossl_rsa_verify");
          ERR_set_error(4,0x68,0);
        }
      }
    }
  }
  CRYPTO_clear_free(pvVar8,uVar7,"crypto/rsa/rsa_sign.c",0x1c8);
  CRYPTO_clear_free(to,param_7,"crypto/rsa/rsa_sign.c",0x1c9);
LAB_00100577:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar5;
}



int RSA_verify(int type,uchar *m,uint m_length,uchar *sigbuf,uint siglen,RSA *rsa)

{
  int iVar1;
  
  if (*(code **)(rsa->engine + 0x60) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100a91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (**(code **)(rsa->engine + 0x60))();
    return iVar1;
  }
  iVar1 = ossl_rsa_verify();
  return iVar1;
}


