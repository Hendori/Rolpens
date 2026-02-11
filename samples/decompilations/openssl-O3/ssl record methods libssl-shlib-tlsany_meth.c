
undefined8 tls_any_cipher(void)

{
  return 1;
}



undefined8 tls_any_set_protocol_version(long param_1,int param_2)

{
  undefined8 uVar1;
  
  if ((*(int *)(param_1 + 0x14) == param_2) || (uVar1 = 0, *(int *)(param_1 + 0x14) == 0x10000)) {
    *(int *)(param_1 + 0x14) = param_2;
    uVar1 = 1;
  }
  return uVar1;
}



undefined8 tls_any_prepare_for_encryption(void)

{
  return 1;
}



undefined8 dtls_any_set_protocol_version(long param_1,int param_2)

{
  undefined8 uVar1;
  
  if ((*(int *)(param_1 + 0x14) == param_2) || (uVar1 = 0, *(int *)(param_1 + 0x14) == 0x1ffff)) {
    *(int *)(param_1 + 0x14) = param_2;
    uVar1 = 1;
  }
  return uVar1;
}



undefined8 tls_validate_record_header(long param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  char *__s1;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar1 = *param_2;
  uVar2 = *(uint *)(param_1 + 0x14);
  if (uVar1 == 2) {
    if (uVar2 != 0x10000) {
      ERR_new();
      ERR_set_debug("ssl/record/methods/tlsany_meth.c",0x31,"tls_validate_record_header");
      ossl_rlayer_fatal(param_1,0x50,0xc0103,0);
      return 0;
    }
    uVar4 = *(ulong *)(param_2 + 2);
    if (uVar4 < 9) {
      ERR_new();
      ERR_set_debug("ssl/record/methods/tlsany_meth.c",0x35,"tls_validate_record_header");
      ossl_rlayer_fatal(param_1,0x32,0xa0,0);
      return 0;
    }
LAB_0010024c:
    uVar5 = 1;
    if (0x4000 < uVar4) {
      ERR_new();
      ERR_set_debug("ssl/record/methods/tlsany_meth.c",0x80,"tls_validate_record_header");
      ossl_rlayer_fatal(param_1,0x16,0x92,0);
      uVar5 = 0;
    }
  }
  else {
    if (uVar2 == 0x10000) {
      if ((int)uVar1 >> 8 == 3) goto LAB_00100248;
      if (*(int *)(param_1 + 0x10d4) != 0) {
        __s1 = *(char **)(param_1 + 0xff0);
        iVar3 = strncmp(__s1,"GET ",4);
        if (((((iVar3 == 0) || (iVar3 = strncmp(__s1,"POST ",5), iVar3 == 0)) ||
             (iVar3 = strncmp(__s1,"HEAD ",5), iVar3 == 0)) ||
            ((iVar3 = strncmp(__s1,"PATCH",5), iVar3 == 0 ||
             (iVar3 = strncmp(__s1,"OPTIO",5), iVar3 == 0)))) ||
           ((iVar3 = strncmp(__s1,"DELET",5), iVar3 == 0 ||
            ((iVar3 = strncmp(__s1,"TRACE",5), iVar3 == 0 ||
             (iVar3 = strncmp(__s1,"PUT ",4), iVar3 == 0)))))) {
          ERR_new();
          ERR_set_debug("ssl/record/methods/tlsany_meth.c",0x4b,"tls_validate_record_header");
          ossl_rlayer_fatal(param_1,0xffffffff,0x9c,0);
          return 0;
        }
        iVar3 = strncmp(__s1,"CONNE",5);
        if (iVar3 == 0) {
          ERR_new();
          ERR_set_debug("ssl/record/methods/tlsany_meth.c",0x4e,"tls_validate_record_header");
          ossl_rlayer_fatal(param_1,0xffffffff,0x9b,0);
          return 0;
        }
        ERR_new();
        uVar5 = 0x54;
LAB_00100389:
        ERR_set_debug("ssl/record/methods/tlsany_meth.c",uVar5,"tls_validate_record_header");
        ossl_rlayer_fatal(param_1,0xffffffff,0x10b,0);
        return 0;
      }
      ERR_new();
      uVar5 = 0x58;
    }
    else {
      if ((uVar1 == uVar2) || (uVar2 == 0x304)) {
LAB_00100248:
        uVar4 = *(ulong *)(param_2 + 2);
        goto LAB_0010024c;
      }
      if ((char)(uVar2 >> 8) == (char)(uVar1 >> 8)) {
        if (param_2[1] == 0x15) {
          ERR_new();
          uVar5 = 0x6e;
          goto LAB_00100389;
        }
        *(uint *)(param_1 + 0x14) = uVar1 & 0xffff;
      }
      ERR_new();
      uVar5 = 0x75;
    }
    ERR_set_debug("ssl/record/methods/tlsany_meth.c",uVar5,"tls_validate_record_header");
    ossl_rlayer_fatal(param_1,0x46,0x10b,0);
    uVar5 = 0;
  }
  return uVar5;
}



undefined8 tls_any_set_crypto_state(undefined8 param_1,int param_2)

{
  if (param_2 == 0) {
    return 1;
  }
  ERR_new();
  ERR_set_debug("ssl/record/methods/tlsany_meth.c",0x1c,"tls_any_set_crypto_state");
  ERR_set_error(0x14,0xc0103,0);
  return 0xfffffffe;
}


