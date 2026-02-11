
void tdes_wrap_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,0x10002,0x12,0xc0,0x40,0);
  return;
}



void tdes_wrap_newctx(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = ossl_prov_cipher_hw_tdes_wrap_cbc();
  ossl_tdes_newctx(param_1,0x10002,0xc0,0x40,0,0x12,uVar1);
  return;
}



undefined8
tdes_wrap_cipher(long param_1,uchar *param_2,long *param_3,ulong param_4,uchar *param_5,
                ulong param_6)

{
  size_t sVar1;
  uchar *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  uchar *puVar6;
  long in_FS_OFFSET;
  uchar local_68 [8];
  uchar local_60 [8];
  undefined8 local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *param_3 = 0;
  iVar3 = ossl_prov_is_running();
  if (iVar3 != 0) {
    if (param_4 < param_6) {
      ERR_new();
      ERR_set_debug("providers/implementations/ciphers/cipher_tdes_wrap.c",0x8a,"tdes_wrap_cipher");
      ERR_set_error(0x39,0x6a,0);
    }
    else if ((param_6 < 0x40000000) && ((param_6 & 7) == 0)) {
      if ((*(byte *)(param_1 + 0x6c) & 2) == 0) {
        if (0x17 < param_6) {
          if (param_2 == (uchar *)0x0) {
            iVar3 = (int)param_6 + -0x10;
            goto LAB_001001b4;
          }
          puVar2 = (uchar *)(param_1 + 0x20);
          *(undefined8 *)(param_1 + 0x20) = 0x521e8792ca2dd4a;
          (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,local_68,param_5,8);
          if (param_2 == param_5) {
            param_5 = param_2 + -8;
            memmove(param_2,param_2 + 8,param_6 - 8);
            puVar6 = param_2;
          }
          else {
            puVar6 = param_5 + 8;
          }
          sVar1 = param_6 - 0x10;
          (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,param_2,puVar6);
          (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,local_60,param_5 + (param_6 - 8),8);
          BUF_reverse(local_68,(uchar *)0x0,8);
          BUF_reverse(param_2,(uchar *)0x0,sVar1);
          BUF_reverse(puVar2,local_60,8);
          (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,param_2,param_2,sVar1);
          (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,local_68,local_68,8);
          lVar4 = ossl_sha1(param_2,sVar1,local_58);
          if (lVar4 != 0) {
            iVar3 = CRYPTO_memcmp(local_58,local_68,8);
            if (iVar3 == 0) {
              iVar3 = (int)param_6 + -0x10;
              OPENSSL_cleanse(local_68,8);
              OPENSSL_cleanse(local_58,0x14);
              OPENSSL_cleanse(local_60,8);
              OPENSSL_cleanse(puVar2,0x10);
              goto LAB_001001b4;
            }
          }
          OPENSSL_cleanse(local_68,8);
          OPENSSL_cleanse(local_58,0x14);
          OPENSSL_cleanse(local_60,8);
          OPENSSL_cleanse(puVar2,0x10);
          OPENSSL_cleanse(param_2,sVar1);
        }
      }
      else {
        sVar1 = param_6 + 0x10;
        if (param_2 == (uchar *)0x0) {
LAB_001001b1:
          iVar3 = (int)sVar1;
LAB_001001b4:
          uVar5 = 1;
          *param_3 = (long)iVar3;
          goto LAB_001001fa;
        }
        puVar2 = param_2 + 8;
        memmove(puVar2,param_5,param_6);
        lVar4 = ossl_sha1(param_5,param_6);
        if (lVar4 != 0) {
          *(undefined8 *)(param_2 + param_6 + 8) = local_58[0];
          OPENSSL_cleanse(local_58,0x14);
          iVar3 = RAND_bytes_ex(*(undefined8 *)(param_1 + 0xb8),param_1 + 0x20,8,0);
          if (0 < iVar3) {
            *(undefined8 *)param_2 = *(undefined8 *)(param_1 + 0x20);
            (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,puVar2,puVar2,param_6 + 8);
            BUF_reverse(param_2,(uchar *)0x0,sVar1);
            *(undefined8 *)(param_1 + 0x20) = 0x521e8792ca2dd4a;
            (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,param_2,param_2,sVar1);
            goto LAB_001001b1;
          }
        }
      }
    }
  }
  uVar5 = 0;
LAB_001001fa:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
tdes_wrap_update(undefined8 param_1,undefined8 param_2,undefined8 *param_3,ulong param_4,
                undefined8 param_5,ulong param_6)

{
  int iVar1;
  
  *param_3 = 0;
  if (param_6 == 0) {
    return 1;
  }
  if (param_4 < param_6) {
    ERR_new();
    ERR_set_debug("providers/implementations/ciphers/cipher_tdes_wrap.c",0x9e,"tdes_wrap_update");
    ERR_set_error(0x39,0x6a,0);
  }
  else {
    iVar1 = tdes_wrap_cipher();
    if (iVar1 != 0) {
      return 1;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/ciphers/cipher_tdes_wrap.c",0xa3,"tdes_wrap_update");
    ERR_set_error(0x39,0x66,0);
  }
  return 0;
}


