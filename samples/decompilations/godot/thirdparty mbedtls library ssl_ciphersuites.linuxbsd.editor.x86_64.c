
undefined4 * mbedtls_ssl_list_ciphersuites(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined1 *puVar5;
  
  if (supported_init == 0) {
    piVar4 = &supported_ciphersuites;
    puVar5 = ciphersuite_preference;
    iVar2 = 0x1303;
    do {
      iVar1 = 0x1302;
      puVar3 = &ciphersuite_definitions;
      do {
        if (iVar2 == iVar1) {
          *piVar4 = iVar2;
          piVar4 = piVar4 + 1;
          break;
        }
        iVar1 = puVar3[6];
        puVar3 = puVar3 + 6;
      } while (iVar1 != 0);
      puVar5 = (undefined1 *)((long)puVar5 + 4);
      iVar2 = *(int *)puVar5;
    } while ((piVar4 < &DAT_001004e8) && (iVar2 != 0));
    *piVar4 = 0;
    supported_init = 1;
  }
  return &supported_ciphersuites;
}



undefined4 * mbedtls_ssl_ciphersuite_from_string(char *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_1 != (char *)0x0) {
    puVar3 = &ciphersuite_definitions;
    do {
      iVar2 = strcmp(*(char **)(puVar3 + 2),param_1);
      if (iVar2 == 0) {
        return puVar3;
      }
      piVar1 = puVar3 + 6;
      puVar3 = puVar3 + 6;
    } while (*piVar1 != 0);
  }
  return (undefined4 *)0x0;
}



undefined4 * mbedtls_ssl_ciphersuite_from_id(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = &ciphersuite_definitions;
  iVar2 = 0x1302;
  do {
    if (param_1 == iVar2) {
      return puVar1;
    }
    iVar2 = puVar1[6];
    puVar1 = puVar1 + 6;
  } while (iVar2 != 0);
  return (undefined4 *)0x0;
}



char * mbedtls_ssl_get_ciphersuite_name(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = &ciphersuite_definitions;
  iVar2 = 0x1302;
  do {
    if (param_1 == iVar2) {
      return *(char **)(puVar1 + 2);
    }
    iVar2 = puVar1[6];
    puVar1 = puVar1 + 6;
  } while (iVar2 != 0);
  return "unknown";
}



undefined4 mbedtls_ssl_get_ciphersuite_id(char *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_1 == (char *)0x0) {
    return 0;
  }
  puVar3 = &ciphersuite_definitions;
  do {
    iVar2 = strcmp(*(char **)(puVar3 + 2),param_1);
    if (iVar2 == 0) {
      return *puVar3;
    }
    piVar1 = puVar3 + 6;
    puVar3 = puVar3 + 6;
  } while (*piVar1 != 0);
  return 0;
}



long mbedtls_ssl_ciphersuite_get_cipher_key_bitlen(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = mbedtls_cipher_info_from_type(*(undefined1 *)(param_1 + 0x10));
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = (ulong)(*(byte *)(lVar1 + 9) & 0xf) << 6;
  }
  return lVar2;
}



ulong mbedtls_ssl_get_ciphersuite_sig_pk_alg(long param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x12);
  if (bVar1 == 7) {
    return 1;
  }
  if (bVar1 < 8) {
    if (3 < bVar1) {
      return (ulong)(bVar1 == 4) << 2;
    }
    return (ulong)(bVar1 != 0);
  }
  return (ulong)((uint)((byte)(bVar1 - 9) < 2) * 2);
}



ulong mbedtls_ssl_get_ciphersuite_sig_alg(long param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x12);
  if (3 < bVar1) {
    return (ulong)(bVar1 == 4) << 2;
  }
  return (ulong)(1 < bVar1);
}



bool mbedtls_ssl_ciphersuite_uses_ec(long param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x12);
  if (bVar1 < 5) {
    return 2 < bVar1;
  }
  return (byte)(bVar1 - 8) < 4;
}



bool mbedtls_ssl_ciphersuite_uses_psk(long param_1)

{
  return *(byte *)(param_1 + 0x12) - 5 < 4;
}


