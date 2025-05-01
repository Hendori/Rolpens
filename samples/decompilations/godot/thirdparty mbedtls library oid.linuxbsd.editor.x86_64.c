
undefined8 oid_subidentifier_encode_into(long *param_1,long param_2,uint param_3)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  
  uVar1 = 0;
  uVar2 = param_3;
  do {
    uVar3 = uVar1;
    uVar1 = uVar3 + 1;
    uVar2 = uVar2 >> 7;
  } while (uVar2 != 0);
  if (uVar1 <= (ulong)(param_2 - *param_1)) {
    *(byte *)(*param_1 + uVar3) = (byte)param_3 & 0x7f;
    if (1 < uVar1) {
      uVar3 = 2;
      uVar2 = param_3 >> 7;
      do {
        lVar4 = uVar1 - uVar3;
        uVar3 = uVar3 + 1;
        *(byte *)(*param_1 + lVar4) = (byte)uVar2 | 0x80;
        uVar2 = uVar2 >> 7;
      } while (uVar3 <= uVar1);
    }
    *param_1 = *param_1 + uVar1;
    return 0;
  }
  return 0xfffffff5;
}



int mbedtls_oid_get_attr_short_name(long param_1,undefined8 *param_2)

{
  size_t __n;
  int iVar1;
  undefined1 *puVar2;
  undefined *__s1;
  
  if (param_1 == 0) {
    return -0x2e;
  }
  puVar2 = oid_x520_attr_type;
  __n = *(size_t *)(param_1 + 8);
  __s1 = &_LC0;
  do {
    if (*(size_t *)(puVar2 + 8) == __n) {
      iVar1 = memcmp(__s1,*(void **)(param_1 + 0x10),__n);
      if (iVar1 == 0) {
        *param_2 = *(undefined8 *)(puVar2 + 0x20);
        return iVar1;
      }
    }
    __s1 = *(undefined **)(puVar2 + 0x28);
    puVar2 = puVar2 + 0x28;
  } while (__s1 != (undefined *)0x0);
  return -0x2e;
}



int mbedtls_oid_get_x509_ext_type(long param_1,undefined4 *param_2)

{
  size_t __n;
  int iVar1;
  undefined1 *puVar2;
  undefined *__s1;
  
  if (param_1 == 0) {
    return -0x2e;
  }
  puVar2 = oid_x509_ext;
  __n = *(size_t *)(param_1 + 8);
  __s1 = &_LC1;
  do {
    if (*(size_t *)(puVar2 + 8) == __n) {
      iVar1 = memcmp(__s1,*(void **)(param_1 + 0x10),__n);
      if (iVar1 == 0) {
        *param_2 = *(undefined4 *)(puVar2 + 0x20);
        return iVar1;
      }
    }
    __s1 = *(undefined **)(puVar2 + 0x28);
    puVar2 = puVar2 + 0x28;
  } while (__s1 != (undefined *)0x0);
  return -0x2e;
}



int mbedtls_oid_get_extended_key_usage(long param_1,undefined8 *param_2)

{
  size_t __n;
  int iVar1;
  undefined1 *puVar2;
  undefined *__s1;
  
  if (param_1 == 0) {
    return -0x2e;
  }
  puVar2 = oid_ext_key_usage;
  __n = *(size_t *)(param_1 + 8);
  __s1 = &_LC2;
  do {
    if (*(size_t *)(puVar2 + 8) == __n) {
      iVar1 = memcmp(__s1,*(void **)(param_1 + 0x10),__n);
      if (iVar1 == 0) {
        *param_2 = *(undefined8 *)(puVar2 + 0x18);
        return iVar1;
      }
    }
    __s1 = *(undefined **)(puVar2 + 0x20);
    puVar2 = puVar2 + 0x20;
  } while (__s1 != (undefined *)0x0);
  return -0x2e;
}



undefined8 mbedtls_oid_get_certificate_policies(long param_1,undefined8 *param_2)

{
  if (((param_1 != 0) && (*(long *)(param_1 + 8) == 4)) && (**(int **)(param_1 + 0x10) == 0x201d55))
  {
    *param_2 = "Any Policy";
    return 0;
  }
  return 0xffffffd2;
}



int mbedtls_oid_get_sig_alg_desc(long param_1,undefined8 *param_2)

{
  size_t __n;
  int iVar1;
  undefined1 *puVar2;
  undefined *__s1;
  
  if (param_1 == 0) {
    return -0x2e;
  }
  puVar2 = oid_sig_alg;
  __n = *(size_t *)(param_1 + 8);
  __s1 = &_LC4;
  do {
    if (*(size_t *)(puVar2 + 8) == __n) {
      iVar1 = memcmp(__s1,*(void **)(param_1 + 0x10),__n);
      if (iVar1 == 0) {
        *param_2 = *(undefined8 *)(puVar2 + 0x18);
        return iVar1;
      }
    }
    __s1 = *(undefined **)(puVar2 + 0x28);
    puVar2 = puVar2 + 0x28;
  } while (__s1 != (undefined *)0x0);
  return -0x2e;
}



int mbedtls_oid_get_sig_alg(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  size_t __n;
  int iVar1;
  undefined1 *puVar2;
  undefined *__s1;
  
  if (param_1 == 0) {
    return -0x2e;
  }
  puVar2 = oid_sig_alg;
  __n = *(size_t *)(param_1 + 8);
  __s1 = &_LC4;
  do {
    if (*(size_t *)(puVar2 + 8) == __n) {
      iVar1 = memcmp(__s1,*(void **)(param_1 + 0x10),__n);
      if (iVar1 == 0) {
        *param_2 = *(undefined4 *)(puVar2 + 0x20);
        *param_3 = *(undefined4 *)(puVar2 + 0x24);
        return iVar1;
      }
    }
    __s1 = *(undefined **)(puVar2 + 0x28);
    puVar2 = puVar2 + 0x28;
  } while (__s1 != (undefined *)0x0);
  return -0x2e;
}



undefined8
mbedtls_oid_get_oid_by_sig_alg(int param_1,int param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  
  puVar2 = oid_sig_alg;
  puVar3 = &_LC4;
  while ((*(int *)(puVar2 + 0x24) != param_1 || (*(int *)(puVar2 + 0x20) != param_2))) {
    puVar3 = *(undefined **)(puVar2 + 0x28);
    puVar2 = puVar2 + 0x28;
    if (puVar3 == (undefined *)0x0) {
      return 0xffffffd2;
    }
  }
  uVar1 = *(undefined8 *)(puVar2 + 8);
  *param_3 = puVar3;
  *param_4 = uVar1;
  return 0;
}



int mbedtls_oid_get_pk_alg(long param_1,undefined4 *param_2)

{
  size_t __n;
  int iVar1;
  undefined1 *puVar2;
  undefined *__s1;
  
  if (param_1 == 0) {
    return -0x2e;
  }
  puVar2 = oid_pk_alg;
  __n = *(size_t *)(param_1 + 8);
  __s1 = &_LC5;
  do {
    if (*(size_t *)(puVar2 + 8) == __n) {
      iVar1 = memcmp(__s1,*(void **)(param_1 + 0x10),__n);
      if (iVar1 == 0) {
        *param_2 = *(undefined4 *)(puVar2 + 0x20);
        return iVar1;
      }
    }
    __s1 = *(undefined **)(puVar2 + 0x28);
    puVar2 = puVar2 + 0x28;
  } while (__s1 != (undefined *)0x0);
  return -0x2e;
}



undefined8 mbedtls_oid_get_oid_by_pk_alg(int param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  
  puVar2 = oid_pk_alg;
  puVar3 = &_LC5;
  do {
    if (*(int *)(puVar2 + 0x20) == param_1) {
      uVar1 = *(undefined8 *)(puVar2 + 8);
      *param_2 = puVar3;
      *param_3 = uVar1;
      return 0;
    }
    puVar3 = *(undefined **)(puVar2 + 0x28);
    puVar2 = puVar2 + 0x28;
  } while (puVar3 != (undefined *)0x0);
  return 0xffffffd2;
}



int mbedtls_oid_get_ec_grp(long param_1,undefined4 *param_2)

{
  size_t __n;
  int iVar1;
  undefined1 *puVar2;
  undefined *__s1;
  
  if (param_1 == 0) {
    return -0x2e;
  }
  puVar2 = oid_ecp_grp;
  __n = *(size_t *)(param_1 + 8);
  __s1 = &_LC6;
  do {
    if (*(size_t *)(puVar2 + 8) == __n) {
      iVar1 = memcmp(__s1,*(void **)(param_1 + 0x10),__n);
      if (iVar1 == 0) {
        *param_2 = *(undefined4 *)(puVar2 + 0x20);
        return iVar1;
      }
    }
    __s1 = *(undefined **)(puVar2 + 0x28);
    puVar2 = puVar2 + 0x28;
  } while (__s1 != (undefined *)0x0);
  return -0x2e;
}



undefined8 mbedtls_oid_get_oid_by_ec_grp(int param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  
  puVar2 = oid_ecp_grp;
  puVar3 = &_LC6;
  do {
    if (*(int *)(puVar2 + 0x20) == param_1) {
      uVar1 = *(undefined8 *)(puVar2 + 8);
      *param_2 = puVar3;
      *param_3 = uVar1;
      return 0;
    }
    puVar3 = *(undefined **)(puVar2 + 0x28);
    puVar2 = puVar2 + 0x28;
  } while (puVar3 != (undefined *)0x0);
  return 0xffffffd2;
}



int mbedtls_oid_get_ec_grp_algid(long param_1,undefined4 *param_2)

{
  size_t __n;
  int iVar1;
  undefined1 *puVar2;
  undefined *__s1;
  
  if (param_1 == 0) {
    return -0x2e;
  }
  puVar2 = oid_ecp_grp_algid;
  __n = *(size_t *)(param_1 + 8);
  __s1 = &_LC7;
  do {
    if (*(size_t *)(puVar2 + 8) == __n) {
      iVar1 = memcmp(__s1,*(void **)(param_1 + 0x10),__n);
      if (iVar1 == 0) {
        *param_2 = *(undefined4 *)(puVar2 + 0x20);
        return iVar1;
      }
    }
    __s1 = *(undefined **)(puVar2 + 0x28);
    puVar2 = puVar2 + 0x28;
  } while (__s1 != (undefined *)0x0);
  return -0x2e;
}



undefined8 mbedtls_oid_get_oid_by_ec_grp_algid(int param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  
  puVar2 = oid_ecp_grp_algid;
  puVar3 = &_LC7;
  do {
    if (*(int *)(puVar2 + 0x20) == param_1) {
      uVar1 = *(undefined8 *)(puVar2 + 8);
      *param_2 = puVar3;
      *param_3 = uVar1;
      return 0;
    }
    puVar3 = *(undefined **)(puVar2 + 0x28);
    puVar2 = puVar2 + 0x28;
  } while (puVar3 != (undefined *)0x0);
  return 0xffffffd2;
}



int mbedtls_oid_get_cipher_alg(long param_1,undefined4 *param_2)

{
  size_t __n;
  int iVar1;
  undefined1 *puVar2;
  undefined *__s1;
  
  if (param_1 == 0) {
    return -0x2e;
  }
  puVar2 = oid_cipher_alg;
  __n = *(size_t *)(param_1 + 8);
  __s1 = &_LC8;
  do {
    if (*(size_t *)(puVar2 + 8) == __n) {
      iVar1 = memcmp(__s1,*(void **)(param_1 + 0x10),__n);
      if (iVar1 == 0) {
        *param_2 = *(undefined4 *)(puVar2 + 0x20);
        return iVar1;
      }
    }
    __s1 = *(undefined **)(puVar2 + 0x28);
    puVar2 = puVar2 + 0x28;
  } while (__s1 != (undefined *)0x0);
  return -0x2e;
}



int mbedtls_oid_get_md_alg(long param_1,undefined4 *param_2)

{
  size_t __n;
  int iVar1;
  undefined1 *puVar2;
  undefined *__s1;
  
  if (param_1 == 0) {
    return -0x2e;
  }
  puVar2 = oid_md_alg;
  __n = *(size_t *)(param_1 + 8);
  __s1 = &_LC9;
  do {
    if (*(size_t *)(puVar2 + 8) == __n) {
      iVar1 = memcmp(__s1,*(void **)(param_1 + 0x10),__n);
      if (iVar1 == 0) {
        *param_2 = *(undefined4 *)(puVar2 + 0x20);
        return iVar1;
      }
    }
    __s1 = *(undefined **)(puVar2 + 0x28);
    puVar2 = puVar2 + 0x28;
  } while (__s1 != (undefined *)0x0);
  return -0x2e;
}



undefined8 mbedtls_oid_get_oid_by_md(int param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  
  puVar2 = oid_md_alg;
  puVar3 = &_LC9;
  do {
    if (*(int *)(puVar2 + 0x20) == param_1) {
      uVar1 = *(undefined8 *)(puVar2 + 8);
      *param_2 = puVar3;
      *param_3 = uVar1;
      return 0;
    }
    puVar3 = *(undefined **)(puVar2 + 0x28);
    puVar2 = puVar2 + 0x28;
  } while (puVar3 != (undefined *)0x0);
  return 0xffffffd2;
}



int mbedtls_oid_get_md_hmac(long param_1,undefined4 *param_2)

{
  size_t __n;
  int iVar1;
  undefined1 *puVar2;
  undefined *__s1;
  
  if (param_1 == 0) {
    return -0x2e;
  }
  puVar2 = oid_md_hmac;
  __n = *(size_t *)(param_1 + 8);
  __s1 = &_LC10;
  do {
    if (*(size_t *)(puVar2 + 8) == __n) {
      iVar1 = memcmp(__s1,*(void **)(param_1 + 0x10),__n);
      if (iVar1 == 0) {
        *param_2 = *(undefined4 *)(puVar2 + 0x20);
        return iVar1;
      }
    }
    __s1 = *(undefined **)(puVar2 + 0x28);
    puVar2 = puVar2 + 0x28;
  } while (__s1 != (undefined *)0x0);
  return -0x2e;
}



int mbedtls_oid_get_pkcs12_pbe_alg(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  size_t __n;
  int iVar1;
  undefined1 *puVar2;
  undefined *__s1;
  
  if (param_1 == 0) {
    return -0x2e;
  }
  puVar2 = oid_pkcs12_pbe_alg;
  __n = *(size_t *)(param_1 + 8);
  __s1 = &_LC11;
  do {
    if (*(size_t *)(puVar2 + 8) == __n) {
      iVar1 = memcmp(__s1,*(void **)(param_1 + 0x10),__n);
      if (iVar1 == 0) {
        *param_2 = *(undefined4 *)(puVar2 + 0x20);
        *param_3 = *(undefined4 *)(puVar2 + 0x24);
        return iVar1;
      }
    }
    __s1 = *(undefined **)(puVar2 + 0x28);
    puVar2 = puVar2 + 0x28;
  } while (__s1 != (undefined *)0x0);
  return -0x2e;
}



int mbedtls_oid_get_numeric_string(long param_1,ulong param_2,long param_3)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  
  if (0x7fffffff < param_2) {
    return -100;
  }
  if (*(long *)(param_3 + 8) == 0) {
    return -0x60;
  }
  lVar5 = *(long *)(param_3 + 0x10);
  uVar6 = 0;
  uVar7 = 0;
  uVar8 = param_2;
  while( true ) {
    bVar1 = *(byte *)(lVar5 + uVar6);
    if (uVar7 == 0) goto LAB_0010095e;
    uVar7 = uVar7 << 7 | bVar1 & 0x7f;
    if (-1 < (char)bVar1) break;
LAB_00100998:
    uVar6 = uVar6 + 1;
    if (*(ulong *)(param_3 + 8) <= uVar6) {
      if (uVar7 != 0) {
        return -0x60;
      }
LAB_001009fc:
      return (int)param_2 - (int)uVar8;
    }
    if (0x1ffffff < uVar7) {
      return -0x68;
    }
  }
  if (param_2 != uVar8) goto LAB_001009c0;
  do {
    uVar7 = uVar7 - 0x50;
    uVar2 = 0x32;
    while( true ) {
      iVar3 = __snprintf_chk(param_1,uVar8,2,0xffffffffffffffff,"%c.%u",uVar2,uVar7);
      while( true ) {
        if ((iVar3 < 2) || (uVar4 = (ulong)iVar3, uVar8 <= uVar4)) {
          return -0xb;
        }
        uVar8 = uVar8 - uVar4;
        param_1 = param_1 + uVar4;
        uVar6 = uVar6 + 1;
        if (*(ulong *)(param_3 + 8) <= uVar6) goto LAB_001009fc;
        lVar5 = *(long *)(param_3 + 0x10);
        bVar1 = *(byte *)(lVar5 + uVar6);
LAB_0010095e:
        if (bVar1 == 0x80) {
          return -0x68;
        }
        uVar7 = bVar1 & 0x7f;
        if ((char)bVar1 < '\0') goto LAB_00100998;
        if (param_2 == uVar8) break;
LAB_001009c0:
        iVar3 = __snprintf_chk(param_1,uVar8,2,0xffffffffffffffff,&_LC13);
      }
      if (0x4f < uVar7) break;
      uVar2 = 0x30;
      if (0x27 < uVar7) {
        uVar7 = uVar7 - 0x28;
        uVar2 = 0x31;
      }
    }
  } while( true );
}



int mbedtls_oid_from_numeric_string(undefined4 *param_1,char *param_2,long param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  void *__ptr;
  void *pvVar5;
  uint uVar6;
  uint uVar7;
  size_t sVar8;
  int iVar9;
  void **ppvVar10;
  char *pcVar11;
  char *pcVar12;
  long in_FS_OFFSET;
  void *local_48;
  long local_40;
  
  pcVar1 = param_2 + param_3;
  ppvVar10 = &local_48;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = 0;
  pcVar11 = param_2;
  if (param_3 != 0) {
    do {
      pcVar12 = pcVar11 + 1;
      lVar4 = lVar4 + (ulong)(*pcVar11 == '.');
      pcVar11 = pcVar12;
    } while (pcVar12 != pcVar1);
    if (lVar4 - 1U < 0x7f) {
      sVar8 = lVar4 * 5;
      __ptr = calloc(sVar8,1);
      *(void **)(param_1 + 4) = __ptr;
      if (__ptr == (void *)0x0) {
        iVar3 = -0x6a;
        goto LAB_00100c4e;
      }
      uVar6 = 0;
      iVar9 = -0x68;
      local_48 = __ptr;
      if (param_2 < pcVar12) {
        do {
          cVar2 = *param_2;
          if (9 < (byte)(cVar2 - 0x30U)) {
            iVar3 = -0x68;
            if (((2 < uVar6 || iVar9 != 0) || (pcVar1 <= param_2)) || (*param_2 != '.'))
            goto LAB_00100c36;
            param_2 = param_2 + 1;
            uVar7 = 0;
            iVar9 = -0x68;
            if (pcVar1 <= param_2) goto LAB_00100c36;
            goto LAB_00100b52;
          }
          if (0x19999999 < uVar6) break;
          param_2 = param_2 + 1;
          iVar9 = 0;
          uVar6 = cVar2 + -0x30 + uVar6 * 10;
        } while (pcVar1 != param_2);
      }
      goto LAB_00100c30;
    }
  }
  iVar3 = -0x68;
  goto LAB_00100c4e;
code_r0x00100c01:
  if (param_2 < pcVar1) {
    if (cVar2 != '.') {
LAB_00100c80:
      __ptr = *(void **)(param_1 + 4);
      iVar3 = -0x68;
      goto LAB_00100c36;
    }
    param_2 = param_2 + 1;
  }
  goto LAB_00100ba0;
  while( true ) {
    if (0x19999999 < uVar7) goto LAB_00100c30;
    param_2 = param_2 + 1;
    iVar9 = 0;
    uVar7 = cVar2 + -0x30 + uVar7 * 10;
    if (pcVar1 == param_2) break;
LAB_00100b52:
    cVar2 = *param_2;
    if (9 < (byte)(cVar2 - 0x30U)) {
      if (iVar9 != 0) goto LAB_00100c30;
      if (uVar6 == 2) {
        if (pcVar1 <= param_2) goto LAB_00100c1e;
        if (*param_2 != '.') goto LAB_00100c30;
        param_2 = param_2 + 1;
        goto LAB_00100c1e;
      }
      if (0x27 < uVar7) goto LAB_00100c30;
      if (pcVar1 <= param_2) goto LAB_00100c96;
      if (cVar2 != '.') goto LAB_00100c30;
      param_2 = param_2 + 1;
      iVar3 = uVar6 * 0x28;
      goto LAB_00100b93;
    }
  }
  if (uVar6 == 2) {
LAB_00100c1e:
    iVar3 = 0x50;
    if (uVar7 < 0xffffffb0) {
LAB_00100b93:
      uVar7 = uVar7 + iVar3;
LAB_00100ba0:
      iVar3 = oid_subidentifier_encode_into(ppvVar10,(void *)((long)__ptr + sVar8),uVar7);
      if (iVar3 == 0) {
        if (param_2 < pcVar1) {
          uVar7 = 0;
          iVar3 = -0x68;
          while( true ) {
            cVar2 = *param_2;
            if (9 < (byte)(cVar2 - 0x30U)) break;
            if (0x19999999 < uVar7) goto LAB_00100c80;
            param_2 = param_2 + 1;
            uVar7 = cVar2 + -0x30 + uVar7 * 10;
            if (pcVar1 == param_2) goto LAB_00100ba0;
            iVar3 = 0;
          }
          if (iVar3 == 0) goto code_r0x00100c01;
          goto LAB_00100c80;
        }
        goto LAB_00100cb5;
      }
      goto LAB_00100caf;
    }
LAB_00100c30:
    iVar3 = -0x68;
  }
  else {
    if (0x27 < uVar7) goto LAB_00100c30;
LAB_00100c96:
    iVar3 = oid_subidentifier_encode_into
                      (&local_48,(void *)((long)__ptr + sVar8),uVar7 + uVar6 * 0x28);
    if (iVar3 == 0) {
LAB_00100cb5:
      __ptr = *(void **)(param_1 + 4);
      sVar8 = (long)local_48 - (long)__ptr;
      pvVar5 = calloc(sVar8,1);
      if (pvVar5 != (void *)0x0) {
        __memcpy_chk(pvVar5,__ptr,sVar8,sVar8);
        iVar3 = 0;
        free(__ptr);
        *(void **)(param_1 + 4) = pvVar5;
        *(size_t *)(param_1 + 2) = sVar8;
        *param_1 = 6;
        goto LAB_00100c4e;
      }
      iVar3 = -0x6a;
    }
    else {
LAB_00100caf:
      __ptr = *(void **)(param_1 + 4);
    }
  }
LAB_00100c36:
  free(__ptr);
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
LAB_00100c4e:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}


