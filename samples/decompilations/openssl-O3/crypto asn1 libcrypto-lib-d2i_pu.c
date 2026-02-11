
EVP_PKEY * d2i_PublicKey(int type,EVP_PKEY **a,uchar **pp,long length)

{
  int iVar1;
  RSA *pRVar2;
  EC_KEY *pEVar3;
  EVP_PKEY *pkey;
  DSA *pDVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  EVP_PKEY *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (EVP_PKEY *)0x0;
  if ((a == (EVP_PKEY **)0x0) || (pkey = *a, pkey == (EVP_PKEY *)0x0)) {
    pkey = EVP_PKEY_new();
    if (pkey == (EVP_PKEY *)0x0) {
      ERR_new();
      pkey = (EVP_PKEY *)0x0;
      ERR_set_debug("crypto/asn1/d2i_pu.c",0x24,"d2i_PublicKey");
      ERR_set_error(0xd,0x80006,0);
      goto LAB_001000d7;
    }
LAB_00100063:
    iVar1 = EVP_PKEY_get_id(pkey);
    if (((iVar1 == type) && (local_38 == (EVP_PKEY *)0x0)) ||
       (iVar1 = EVP_PKEY_set_type(pkey,type), iVar1 != 0)) {
      iVar1 = EVP_PKEY_get_base_id();
      if (iVar1 == 0x74) {
        pDVar4 = d2i_DSAPublicKey((DSA **)&(pkey->pkey).rsa,pp,length);
        if (pDVar4 == (DSA *)0x0) {
          ERR_new();
          uVar5 = 0x43;
LAB_00100211:
          ERR_set_debug("crypto/asn1/d2i_pu.c",uVar5,"d2i_PublicKey");
          ERR_set_error(0xd,0x8000d,0);
          goto LAB_001001c0;
        }
      }
      else if (iVar1 == 0x198) {
        if (local_38 != (EVP_PKEY *)0x0) {
          pkey->pkey = local_38->pkey;
          (local_38->pkey).ptr = (char *)0x0;
        }
        pEVar3 = o2i_ECPublicKey((EC_KEY **)&(pkey->pkey).rsa,pp,length);
        if (pEVar3 == (EC_KEY *)0x0) {
          ERR_new();
          uVar5 = 0x50;
          goto LAB_00100211;
        }
      }
      else {
        if (iVar1 != 6) {
          ERR_new();
          ERR_set_debug("crypto/asn1/d2i_pu.c",0x56,"d2i_PublicKey");
          ERR_set_error(0xd,0xa3,0);
          goto LAB_001001c0;
        }
        pRVar2 = d2i_RSAPublicKey((RSA **)0x0,pp,length);
        (pkey->pkey).rsa = pRVar2;
        if (pRVar2 == (RSA *)0x0) {
          ERR_new();
          uVar5 = 0x3c;
          goto LAB_00100211;
        }
      }
      if (a != (EVP_PKEY **)0x0) {
        *a = pkey;
      }
      EVP_PKEY_free(local_38);
      goto LAB_001000d7;
    }
    ERR_new();
    ERR_set_debug("crypto/asn1/d2i_pu.c",0x35,"d2i_PublicKey");
    ERR_set_error(0xd,0x80006,0);
LAB_001001c0:
    if (a != (EVP_PKEY **)0x0) goto LAB_001001c5;
LAB_001001cb:
    EVP_PKEY_free(pkey);
  }
  else {
    if (((*(long *)&pkey[1].save_parameters == 0) ||
        (iVar1 = EVP_PKEY_get_base_id(pkey), iVar1 != 0x198)) ||
       (iVar1 = evp_pkey_copy_downgraded(&local_38,pkey), iVar1 != 0)) goto LAB_00100063;
LAB_001001c5:
    if (pkey != *a) goto LAB_001001cb;
  }
  pkey = (EVP_PKEY *)0x0;
  EVP_PKEY_free(local_38);
LAB_001000d7:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pkey;
}


