
char * CRYPTO_strdup(char *str,char *file,int line)

{
  size_t sVar1;
  char *__dest;
  
  if (str != (char *)0x0) {
    sVar1 = strlen(str);
    __dest = (char *)CRYPTO_malloc((int)sVar1 + 1,file,line);
    if (__dest != (char *)0x0) {
      __dest = strcpy(__dest,str);
    }
    return __dest;
  }
  return (char *)0x0;
}



void * CRYPTO_memdup(void *param_1,ulong param_2,char *param_3,int param_4)

{
  void *pvVar1;
  
  if (param_1 == (void *)0x0) {
    return (void *)0x0;
  }
  if (param_2 < 0x7fffffff) {
    pvVar1 = CRYPTO_malloc((int)param_2,param_3,param_4);
    if (pvVar1 != (void *)0x0) {
      pvVar1 = memcpy(pvVar1,param_1,param_2);
      return pvVar1;
    }
  }
  return (void *)0x0;
}



long OPENSSL_strnlen(char *param_1,long param_2)

{
  char *pcVar1;
  
  pcVar1 = param_1;
  if (param_2 == 0) {
    return 0;
  }
  do {
    if (*pcVar1 == '\0') {
      return (long)pcVar1 - (long)param_1;
    }
    pcVar1 = pcVar1 + 1;
  } while (param_1 + param_2 != pcVar1);
  return (long)(param_1 + param_2) - (long)param_1;
}



void * CRYPTO_strndup(void *param_1,undefined8 param_2,char *param_3,int param_4)

{
  size_t __n;
  void *__dest;
  
  if (param_1 != (void *)0x0) {
    __n = OPENSSL_strnlen();
    __dest = CRYPTO_malloc((int)__n + 1,param_3,param_4);
    if (__dest != (void *)0x0) {
      __dest = memcpy(__dest,param_1,__n);
      *(undefined1 *)((long)__dest + __n) = 0;
    }
    return __dest;
  }
  return (void *)0x0;
}



long OPENSSL_strlcpy(char *param_1,char *param_2,ulong param_3)

{
  ulong uVar1;
  char cVar2;
  char *pcVar3;
  size_t sVar4;
  
  if (param_3 < 2) {
    if (param_3 == 0) goto LAB_001001ae;
    param_3 = 0;
  }
  else {
    uVar1 = param_3 - 1;
    param_3 = 0;
    pcVar3 = param_1;
    do {
      cVar2 = *param_2;
      param_1 = pcVar3;
      if (cVar2 == '\0') break;
      param_3 = param_3 + 1;
      param_1 = pcVar3 + 1;
      param_2 = param_2 + 1;
      *pcVar3 = cVar2;
      pcVar3 = param_1;
    } while (param_3 != uVar1);
  }
  *param_1 = '\0';
LAB_001001ae:
  sVar4 = strlen(param_2);
  return sVar4 + param_3;
}



long OPENSSL_strlcat(char *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = 0;
  if (param_3 != 0) {
    do {
      if (*param_1 == '\0') {
        lVar1 = OPENSSL_strlcpy(param_1,param_2,param_3 - lVar2);
        return lVar1 + lVar2;
      }
      lVar2 = lVar2 + 1;
      param_1 = param_1 + 1;
    } while (param_3 != lVar2);
  }
  lVar2 = OPENSSL_strlcpy(param_1,param_2,0);
  return lVar2 + param_3;
}



bool OPENSSL_strtoul(char *param_1,char **param_2,int param_3,ulong *param_4)

{
  char **__endptr;
  int *piVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  bool bVar3;
  char *pcStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  __endptr = &pcStack_48;
  if (param_2 != (char **)0x0) {
    __endptr = param_2;
  }
  piVar1 = __errno_location();
  *piVar1 = 0;
  *__endptr = param_1;
  if (((param_1 != (char *)0x0) && (param_4 != (ulong *)0x0)) && (*param_1 != '-')) {
    uVar2 = strtoul(param_1,__endptr,param_3);
    *param_4 = uVar2;
    if ((*piVar1 == 0) && ((param_2 != (char **)0x0 || (**__endptr == '\0')))) {
      bVar3 = param_1 != *__endptr;
      goto LAB_001002b2;
    }
  }
  bVar3 = false;
LAB_001002b2:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int OPENSSL_hexchar2int(char param_1)

{
  int iVar1;
  
  iVar1 = -1;
  if ((byte)(param_1 - 0x30U) < 0x37) {
    iVar1 = (int)(char)CSWTCH_29[(byte)(param_1 - 0x30U)];
  }
  return iVar1;
}



undefined8 hexstr2buf_sep(byte *param_1,ulong param_2,ulong *param_3,byte *param_4,char param_5)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  ulong uVar5;
  byte *pbVar6;
  
  uVar5 = 0;
  while (pbVar4 = param_4, bVar1 = *pbVar4, bVar1 != 0) {
    while( true ) {
      param_4 = pbVar4 + 1;
      if ((uint)bVar1 == (int)param_5) break;
      pbVar6 = pbVar4 + 1;
      pbVar4 = pbVar4 + 2;
      if (*pbVar6 == 0) {
        ERR_new();
        ERR_set_debug("crypto/o_str.c",0xdd,"hexstr2buf_sep");
        ERR_set_error(0xf,0x67,0);
        return 0;
      }
      uVar2 = OPENSSL_hexchar2int();
      uVar3 = OPENSSL_hexchar2int((uint)bVar1);
      if ((int)(uVar2 | uVar3) < 0) {
        ERR_new();
        ERR_set_debug("crypto/o_str.c",0xe3,"hexstr2buf_sep");
        ERR_set_error(0xf,0x66,0);
        return 0;
      }
      uVar5 = uVar5 + 1;
      pbVar6 = param_1;
      if (param_1 != (byte *)0x0) {
        if (param_2 < uVar5) {
          ERR_new();
          ERR_set_debug("crypto/o_str.c",0xe9,"hexstr2buf_sep");
          ERR_set_error(0xf,0x74,0);
          return 0;
        }
        pbVar6 = param_1 + 1;
        *param_1 = (byte)(uVar3 << 4) | (byte)uVar2;
      }
      bVar1 = *pbVar4;
      param_1 = pbVar6;
      if (bVar1 == 0) goto LAB_00100399;
    }
  }
LAB_00100399:
  if (param_3 != (ulong *)0x0) {
    *param_3 = uVar5;
  }
  return 1;
}



void OPENSSL_hexstr2buf_ex(void)

{
  hexstr2buf_sep();
  return;
}



void * ossl_hexstr2buf_sep(char *param_1,undefined8 *param_2,char param_3)

{
  int iVar1;
  size_t sVar2;
  ulong uVar3;
  void *ptr;
  long in_FS_OFFSET;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  sVar2 = strlen(param_1);
  if (sVar2 < 2) {
    ERR_new();
    ERR_set_debug("crypto/o_str.c",0x106,"ossl_hexstr2buf_sep");
    ERR_set_error(0xf,0x79,0);
  }
  else {
    uVar3 = sVar2 >> 1;
    ptr = CRYPTO_malloc((int)uVar3,"crypto/o_str.c",0x10a);
    if (ptr != (void *)0x0) {
      if (param_2 == (undefined8 *)0x0) {
        local_48 = 0;
        iVar1 = hexstr2buf_sep(ptr,uVar3,&local_48,param_1,(int)param_3);
        if (iVar1 != 0) goto LAB_00100538;
      }
      else {
        *param_2 = 0;
        local_48 = 0;
        iVar1 = hexstr2buf_sep(ptr,uVar3,&local_48,param_1,(int)param_3);
        if (iVar1 != 0) {
          *param_2 = local_48;
          goto LAB_00100538;
        }
      }
      CRYPTO_free(ptr);
    }
  }
  ptr = (void *)0x0;
LAB_00100538:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return ptr;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void OPENSSL_hexstr2buf(undefined8 param_1,undefined8 param_2)

{
  ossl_hexstr2buf_sep(param_1,param_2,0x3a);
  return;
}



bool openssl_strerror_r(void)

{
  int iVar1;
  
  iVar1 = __xpg_strerror_r();
  return iVar1 == 0;
}



int OPENSSL_strcasecmp(char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  do {
    iVar2 = ossl_tolower((int)*param_1);
    iVar3 = ossl_tolower((int)*param_2);
    if (iVar2 - iVar3 != 0) {
      return iVar2 - iVar3;
    }
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  return 0;
}



int OPENSSL_strncasecmp(char *param_1,char *param_2,long param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  if (param_3 != 0) {
    pcVar4 = param_1;
    do {
      iVar1 = ossl_tolower((int)*pcVar4);
      iVar2 = ossl_tolower((int)*param_2);
      if (iVar1 - iVar2 != 0) {
        return iVar1 - iVar2;
      }
      pcVar3 = pcVar4 + 1;
    } while ((*pcVar4 != '\0') &&
            (pcVar4 = pcVar3, param_2 = param_2 + 1, param_1 + param_3 != pcVar3));
  }
  return 0;
}



undefined8 ossl_to_hex(char *param_1,uint param_2)

{
  *param_1 = "0123456789ABCDEF"[(byte)((byte)param_2 >> 4)];
  param_1[1] = "0123456789ABCDEF"[param_2 & 0xf];
  return 2;
}



undefined8
buf2hexstr_sep(char *param_1,ulong param_2,ulong *param_3,undefined1 *param_4,long param_5,
              char param_6)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  
  if (param_6 == '\0') {
    uVar3 = param_5 * 2 + 1;
  }
  else {
    uVar3 = param_5 * 3;
  }
  if (uVar3 == 0) {
    uVar3 = 1;
  }
  if (param_3 != (ulong *)0x0) {
    *param_3 = uVar3;
  }
  if (param_1 != (char *)0x0) {
    if (param_2 < uVar3) {
      ERR_new();
      ERR_set_debug("crypto/o_str.c",0x12e,"buf2hexstr_sep");
      ERR_set_error(0xf,0x74,0);
      return 0;
    }
    if (param_5 != 0) {
      puVar1 = param_4 + param_5;
      pcVar5 = param_1;
      if (param_6 == '\0') {
        do {
          uVar2 = *param_4;
          param_4 = param_4 + 1;
          lVar4 = ossl_to_hex(param_1,uVar2);
          param_1 = param_1 + lVar4;
        } while (param_4 != puVar1);
      }
      else {
        do {
          uVar2 = *param_4;
          param_4 = param_4 + 1;
          lVar4 = ossl_to_hex(pcVar5,uVar2);
          param_1 = pcVar5 + lVar4;
          *param_1 = param_6;
          pcVar5 = param_1 + 1;
        } while (param_4 != puVar1);
      }
    }
    *param_1 = '\0';
  }
  return 1;
}



void OPENSSL_buf2hexstr_ex(void)

{
  buf2hexstr_sep();
  return;
}



void * ossl_buf2hexstr_sep(undefined8 param_1,long param_2,char param_3)

{
  int iVar1;
  void *pvVar2;
  long lVar3;
  
  if (param_2 == 0) {
    pvVar2 = (void *)CRYPTO_zalloc(1,"crypto/o_str.c",0x14f);
    return pvVar2;
  }
  if (param_3 == '\0') {
    lVar3 = param_2 * 2 + 1;
  }
  else {
    lVar3 = param_2 * 3;
  }
  pvVar2 = CRYPTO_malloc((int)lVar3,"crypto/o_str.c",0x152);
  if (pvVar2 != (void *)0x0) {
    iVar1 = buf2hexstr_sep(pvVar2,lVar3,0,param_1,param_2,(int)param_3);
    if (iVar1 != 0) {
      return pvVar2;
    }
    CRYPTO_free(pvVar2);
  }
  return (void *)0x0;
}



void OPENSSL_buf2hexstr(undefined8 param_1,undefined8 param_2)

{
  ossl_buf2hexstr_sep(param_1,param_2,0x3a);
  return;
}


