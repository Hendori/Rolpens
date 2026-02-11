
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void PKCS12_PBE_add(void)

{
  return;
}



int PKCS12_PBE_keyivgen_ex
              (EVP_CIPHER_CTX *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
              EVP_CIPHER *param_5,undefined8 param_6,int param_7,undefined8 param_8,
              undefined8 param_9)

{
  uchar *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  PBEPARAM *a;
  long lVar5;
  uchar *iv;
  long in_FS_OFFSET;
  undefined4 local_a8;
  uchar local_98 [16];
  uchar local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_5 != (EVP_CIPHER *)0x0) {
    uVar4 = PBEPARAM_it();
    a = (PBEPARAM *)ASN1_TYPE_unpack_sequence(uVar4,param_4);
    if (a == (PBEPARAM *)0x0) {
      ERR_new();
      iVar3 = 0;
      ERR_set_debug("crypto/pkcs12/p12_crpt.c",0x29,"PKCS12_PBE_keyivgen_ex");
      ERR_set_error(0x23,0x65,0);
      goto LAB_00100195;
    }
    local_a8 = 1;
    if (a->iter != (ASN1_INTEGER *)0x0) {
      lVar5 = ASN1_INTEGER_get(a->iter);
      local_a8 = (undefined4)lVar5;
    }
    puVar1 = a->salt->data;
    iVar3 = a->salt->length;
    uVar4 = EVP_CIPHER_get_key_length(param_5);
    iVar2 = PKCS12_key_gen_utf8_ex
                      (param_2,param_3,puVar1,iVar3,1,local_a8,uVar4,local_88,param_6,param_8,
                       param_9);
    if (iVar2 != 0) {
      iVar2 = EVP_CIPHER_get_iv_length(param_5);
      if (iVar2 < 1) {
        iv = (uchar *)0x0;
      }
      else {
        uVar4 = EVP_CIPHER_get_iv_length(param_5);
        iv = local_98;
        iVar3 = PKCS12_key_gen_utf8_ex
                          (param_2,param_3,puVar1,iVar3,2,local_a8,uVar4,iv,param_6,param_8,param_9)
        ;
        if (iVar3 == 0) {
          ERR_new();
          ERR_set_debug("crypto/pkcs12/p12_crpt.c",0x40,"PKCS12_PBE_keyivgen_ex");
          uVar4 = 0x6a;
          goto LAB_001001e4;
        }
      }
      PBEPARAM_free(a);
      iVar3 = EVP_CipherInit_ex(param_1,param_5,(ENGINE *)0x0,local_88,iv,param_7);
      OPENSSL_cleanse(local_88,0x40);
      OPENSSL_cleanse(local_98,0x10);
      goto LAB_00100195;
    }
    ERR_new();
    ERR_set_debug("crypto/pkcs12/p12_crpt.c",0x37,"PKCS12_PBE_keyivgen_ex");
    uVar4 = 0x6b;
LAB_001001e4:
    ERR_set_error(0x23,uVar4,0);
    PBEPARAM_free(a);
  }
  iVar3 = 0;
LAB_00100195:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int PKCS12_PBE_keyivgen(EVP_CIPHER_CTX *ctx,char *pass,int passlen,ASN1_TYPE *param,
                       EVP_CIPHER *cipher,EVP_MD *md_type,int en_de)

{
  int iVar1;
  
  iVar1 = PKCS12_PBE_keyivgen_ex();
  return iVar1;
}


