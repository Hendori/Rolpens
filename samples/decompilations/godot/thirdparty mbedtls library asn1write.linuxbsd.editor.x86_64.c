
int mbedtls_asn1_write_len(long *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  
  if (param_3 >> 0x20 == 0) {
    if (param_3 < 0x80) {
      lVar2 = *param_1;
      iVar3 = -0x6c;
      if (lVar2 != param_2 && -1 < lVar2 - param_2) {
        *param_1 = lVar2 + -1;
        *(char *)(lVar2 + -1) = (char)param_3;
        return 1;
      }
    }
    else {
      uVar1 = param_3;
      iVar3 = 1;
      do {
        iVar4 = iVar3;
        iVar3 = iVar4 + 1;
        uVar1 = uVar1 >> 8;
      } while (uVar1 != 0);
      lVar2 = *param_1;
      if ((long)iVar3 <= lVar2 - param_2) {
        do {
          *param_1 = lVar2 + -1;
          *(char *)(lVar2 + -1) = (char)param_3;
          param_3 = param_3 >> 8;
          lVar2 = *param_1;
        } while (param_3 != 0);
        *param_1 = lVar2 + -1;
        *(char *)(lVar2 + -1) = (char)iVar4 + -0x80;
        return iVar3;
      }
      iVar3 = -0x6c;
    }
  }
  else {
    iVar3 = -100;
  }
  return iVar3;
}



/* WARNING: Type propagation algorithm not settling */

ulong asn1_write_tagged_int(long *param_1,char *param_2,int param_3,char param_4)

{
  char *pcVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = 0;
  do {
    lVar3 = lVar4;
    pcVar1 = (char *)*param_1;
    if (pcVar1 == param_2 || (long)pcVar1 - (long)param_2 < 0) {
      return 0xffffff94;
    }
    lVar4 = lVar3 + 1;
    *param_1 = (long)(pcVar1 + -1);
    pcVar1[-1] = (char)param_3;
    param_3 = param_3 >> 8;
  } while (0 < param_3);
  pcVar1 = (char *)*param_1;
  if (*pcVar1 < '\0') {
    if (pcVar1 == param_2 || (long)pcVar1 - (long)param_2 < 0) {
      return 0xffffff94;
    }
    lVar4 = lVar3 + 2;
    *param_1 = (long)(pcVar1 + -1);
    pcVar1[-1] = '\0';
  }
  uVar2 = mbedtls_asn1_write_len(param_1,param_2,lVar4);
  if (-1 < (int)uVar2) {
    pcVar1 = (char *)*param_1;
    if (pcVar1 == param_2 || (long)pcVar1 - (long)param_2 < 0) {
      return 0xffffff94;
    }
    *param_1 = (long)(pcVar1 + -1);
    pcVar1[-1] = param_4;
    return (ulong)(uint)((int)uVar2 + (int)lVar4 + 1);
  }
  return uVar2;
}



undefined8 mbedtls_asn1_write_tag(long *param_1,long param_2,undefined1 param_3)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != param_2 && -1 < lVar1 - param_2) {
    *param_1 = lVar1 + -1;
    *(undefined1 *)(lVar1 + -1) = param_3;
    return 1;
  }
  return 0xffffff94;
}



ulong mbedtls_asn1_write_raw_buffer(ulong *param_1,ulong param_2,void *param_3,ulong param_4)

{
  ulong uVar1;
  
  uVar1 = *param_1;
  if (uVar1 < param_2) {
    return 0xffffff94;
  }
  if (param_4 <= uVar1 - param_2) {
    *param_1 = uVar1 - param_4;
    memcpy((void *)(uVar1 - param_4),param_3,param_4);
    return param_4 & 0xffffffff;
  }
  return 0xffffff94;
}



ulong mbedtls_asn1_write_mpi(long *param_1,char *param_2,long param_3)

{
  char *pcVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = mbedtls_mpi_size(param_3);
  pcVar1 = (char *)*param_1;
  uVar3 = 1;
  if (uVar2 != 0) {
    uVar3 = uVar2;
  }
  if ((param_2 <= pcVar1) && (uVar3 <= (ulong)((long)pcVar1 - (long)param_2))) {
    *param_1 = (long)pcVar1 - uVar3;
    uVar2 = mbedtls_mpi_write_binary(param_3);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    if ((*(short *)(param_3 + 8) == 1) && (pcVar1 = (char *)*param_1, *pcVar1 < '\0')) {
      if (pcVar1 == param_2 || (long)pcVar1 - (long)param_2 < 0) {
        return 0xffffff94;
      }
      uVar3 = uVar3 + 1;
      *param_1 = (long)(pcVar1 + -1);
      pcVar1[-1] = '\0';
    }
    uVar2 = mbedtls_asn1_write_len(param_1,param_2,uVar3);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    pcVar1 = (char *)*param_1;
    if (pcVar1 != param_2 && -1 < (long)pcVar1 - (long)param_2) {
      *param_1 = (long)(pcVar1 + -1);
      pcVar1[-1] = '\x02';
      return (ulong)(uint)((int)uVar2 + (int)uVar3 + 1);
    }
  }
  return 0xffffff94;
}



undefined8 mbedtls_asn1_write_null(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != param_2 && -1 < lVar1 - param_2) {
    *param_1 = lVar1 + -1;
    *(undefined1 *)(lVar1 + -1) = 0;
    lVar1 = *param_1;
    if (lVar1 != param_2 && -1 < lVar1 - param_2) {
      *param_1 = lVar1 + -1;
      *(undefined1 *)(lVar1 + -1) = 5;
      return 2;
    }
  }
  return 0xffffff94;
}



ulong mbedtls_asn1_write_oid(ulong *param_1,ulong param_2,void *param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  
  uVar2 = *param_1;
  if ((param_2 <= uVar2) && (param_4 <= uVar2 - param_2)) {
    *param_1 = uVar2 - param_4;
    memcpy((void *)(uVar2 - param_4),param_3,param_4);
    iVar3 = (int)param_4;
    if (iVar3 < 0) {
      return param_4 & 0xffffffff;
    }
    uVar2 = mbedtls_asn1_write_len(param_1,param_2,(long)iVar3);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    uVar1 = *param_1;
    if (uVar1 != param_2 && -1 < (long)(uVar1 - param_2)) {
      *param_1 = uVar1 - 1;
      *(undefined1 *)(uVar1 - 1) = 6;
      return (ulong)(uint)((int)uVar2 + iVar3 + 1);
    }
  }
  return 0xffffff94;
}



ulong mbedtls_asn1_write_algorithm_identifier
                (ulong *param_1,ulong param_2,void *param_3,ulong param_4,long param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  
  uVar2 = *param_1;
  if (param_5 == 0) {
    if (uVar2 == param_2 || (long)(uVar2 - param_2) < 0) {
      return 0xffffff94;
    }
    *param_1 = uVar2 - 1;
    *(undefined1 *)(uVar2 - 1) = 0;
    uVar2 = *param_1;
    if (uVar2 == param_2 || (long)(uVar2 - param_2) < 0) {
      return 0xffffff94;
    }
    param_5 = 2;
    *param_1 = uVar2 - 1;
    *(undefined1 *)(uVar2 - 1) = 5;
    uVar2 = *param_1;
  }
  if ((param_2 <= uVar2) && (param_4 <= uVar2 - param_2)) {
    *param_1 = uVar2 - param_4;
    memcpy((void *)(uVar2 - param_4),param_3,param_4);
    iVar4 = (int)param_4;
    if (iVar4 < 0) {
      return param_4 & 0xffffffff;
    }
    uVar2 = mbedtls_asn1_write_len(param_1,param_2,(long)iVar4);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    uVar3 = *param_1;
    if (uVar3 != param_2 && -1 < (long)(uVar3 - param_2)) {
      uVar2 = (long)iVar4 + 1 + (long)(int)uVar2;
      *param_1 = uVar3 - 1;
      *(undefined1 *)(uVar3 - 1) = 6;
      if ((int)uVar2 < 0) {
        return uVar2 & 0xffffffff;
      }
      uVar3 = mbedtls_asn1_write_len(param_1,param_2,param_5 + uVar2);
      if ((int)uVar3 < 0) {
        return uVar3;
      }
      uVar1 = *param_1;
      if (uVar1 != param_2 && -1 < (long)(uVar1 - param_2)) {
        *param_1 = uVar1 - 1;
        *(undefined1 *)(uVar1 - 1) = 0x30;
        return (ulong)(uint)((int)uVar3 + (int)(param_5 + uVar2) + 1);
      }
    }
  }
  return 0xffffff94;
}



ulong mbedtls_asn1_write_algorithm_identifier_ext
                (ulong *param_1,ulong param_2,void *param_3,ulong param_4,long param_5,int param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  
  uVar2 = *param_1;
  if (param_6 == 0) {
    param_5 = 0;
  }
  else if (param_5 == 0) {
    if (uVar2 == param_2 || (long)(uVar2 - param_2) < 0) {
      return 0xffffff94;
    }
    *param_1 = uVar2 - 1;
    *(undefined1 *)(uVar2 - 1) = 0;
    uVar2 = *param_1;
    if (uVar2 == param_2 || (long)(uVar2 - param_2) < 0) {
      return 0xffffff94;
    }
    param_5 = 2;
    *param_1 = uVar2 - 1;
    *(undefined1 *)(uVar2 - 1) = 5;
    uVar2 = *param_1;
  }
  if ((param_2 <= uVar2) && (param_4 <= uVar2 - param_2)) {
    *param_1 = uVar2 - param_4;
    memcpy((void *)(uVar2 - param_4),param_3,param_4);
    iVar4 = (int)param_4;
    if (iVar4 < 0) {
      return param_4 & 0xffffffff;
    }
    uVar2 = mbedtls_asn1_write_len(param_1,param_2,(long)iVar4);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    uVar3 = *param_1;
    if (uVar3 != param_2 && -1 < (long)(uVar3 - param_2)) {
      uVar2 = (long)iVar4 + 1 + (long)(int)uVar2;
      *param_1 = uVar3 - 1;
      *(undefined1 *)(uVar3 - 1) = 6;
      if ((int)uVar2 < 0) {
        return uVar2 & 0xffffffff;
      }
      uVar3 = mbedtls_asn1_write_len(param_1,param_2,param_5 + uVar2);
      if ((int)uVar3 < 0) {
        return uVar3;
      }
      uVar1 = *param_1;
      if (uVar1 != param_2 && -1 < (long)(uVar1 - param_2)) {
        *param_1 = uVar1 - 1;
        *(undefined1 *)(uVar1 - 1) = 0x30;
        return (ulong)(uint)((int)uVar3 + (int)(param_5 + uVar2) + 1);
      }
    }
  }
  return 0xffffff94;
}



undefined8 mbedtls_asn1_write_bool(long *param_1,long param_2,int param_3)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != param_2 && -1 < lVar1 - param_2) {
    *param_1 = lVar1 + -1;
    *(char *)(lVar1 + -1) = -(param_3 != 0);
    lVar1 = *param_1;
    if (lVar1 != param_2 && -1 < lVar1 - param_2) {
      *param_1 = lVar1 + -1;
      *(undefined1 *)(lVar1 + -1) = 1;
      lVar1 = *param_1;
      if (lVar1 != param_2 && -1 < lVar1 - param_2) {
        *param_1 = lVar1 + -1;
        *(undefined1 *)(lVar1 + -1) = 1;
        return 3;
      }
    }
  }
  return 0xffffff94;
}



void mbedtls_asn1_write_int(void)

{
  asn1_write_tagged_int();
  return;
}



void mbedtls_asn1_write_enum(void)

{
  asn1_write_tagged_int();
  return;
}



ulong mbedtls_asn1_write_tagged_string
                (ulong *param_1,ulong param_2,undefined1 param_3,void *param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  
  uVar2 = *param_1;
  if ((param_2 <= uVar2) && (param_5 <= uVar2 - param_2)) {
    *param_1 = uVar2 - param_5;
    memcpy((void *)(uVar2 - param_5),param_4,param_5);
    iVar3 = (int)param_5;
    if (iVar3 < 0) {
      return param_5 & 0xffffffff;
    }
    uVar2 = mbedtls_asn1_write_len(param_1,param_2,(long)iVar3);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    uVar1 = *param_1;
    if (uVar1 != param_2 && -1 < (long)(uVar1 - param_2)) {
      *param_1 = uVar1 - 1;
      *(undefined1 *)(uVar1 - 1) = param_3;
      return (ulong)(uint)((int)uVar2 + iVar3 + 1);
    }
  }
  return 0xffffff94;
}



ulong mbedtls_asn1_write_utf8_string(ulong *param_1,ulong param_2,void *param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  
  uVar2 = *param_1;
  if ((param_2 <= uVar2) && (param_4 <= uVar2 - param_2)) {
    *param_1 = uVar2 - param_4;
    memcpy((void *)(uVar2 - param_4),param_3,param_4);
    iVar3 = (int)param_4;
    if (iVar3 < 0) {
      return param_4 & 0xffffffff;
    }
    uVar2 = mbedtls_asn1_write_len(param_1,param_2,(long)iVar3);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    uVar1 = *param_1;
    if (uVar1 != param_2 && -1 < (long)(uVar1 - param_2)) {
      *param_1 = uVar1 - 1;
      *(undefined1 *)(uVar1 - 1) = 0xc;
      return (ulong)(uint)((int)uVar2 + iVar3 + 1);
    }
  }
  return 0xffffff94;
}



ulong mbedtls_asn1_write_printable_string(ulong *param_1,ulong param_2,void *param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  
  uVar2 = *param_1;
  if ((param_2 <= uVar2) && (param_4 <= uVar2 - param_2)) {
    *param_1 = uVar2 - param_4;
    memcpy((void *)(uVar2 - param_4),param_3,param_4);
    iVar3 = (int)param_4;
    if (iVar3 < 0) {
      return param_4 & 0xffffffff;
    }
    uVar2 = mbedtls_asn1_write_len(param_1,param_2,(long)iVar3);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    uVar1 = *param_1;
    if (uVar1 != param_2 && -1 < (long)(uVar1 - param_2)) {
      *param_1 = uVar1 - 1;
      *(undefined1 *)(uVar1 - 1) = 0x13;
      return (ulong)(uint)((int)uVar2 + iVar3 + 1);
    }
  }
  return 0xffffff94;
}



ulong mbedtls_asn1_write_ia5_string(ulong *param_1,ulong param_2,void *param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  
  uVar2 = *param_1;
  if ((param_2 <= uVar2) && (param_4 <= uVar2 - param_2)) {
    *param_1 = uVar2 - param_4;
    memcpy((void *)(uVar2 - param_4),param_3,param_4);
    iVar3 = (int)param_4;
    if (iVar3 < 0) {
      return param_4 & 0xffffffff;
    }
    uVar2 = mbedtls_asn1_write_len(param_1,param_2,(long)iVar3);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    uVar1 = *param_1;
    if (uVar1 != param_2 && -1 < (long)(uVar1 - param_2)) {
      *param_1 = uVar1 - 1;
      *(undefined1 *)(uVar1 - 1) = 0x16;
      return (ulong)(uint)((int)uVar2 + iVar3 + 1);
    }
  }
  return 0xffffff94;
}



ulong mbedtls_asn1_write_bitstring(ulong *param_1,ulong param_2,void *param_3,long param_4)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  void *__dest;
  ulong uVar4;
  byte bVar5;
  
  uVar3 = param_4 + 7;
  uVar2 = *param_1;
  uVar4 = uVar3 >> 3;
  bVar5 = ((byte)uVar3 & 0xf8) - (char)param_4;
  if ((param_2 <= uVar2) && (uVar4 + 1 <= uVar2 - param_2)) {
    if (7 < uVar3) {
      bVar1 = *(byte *)((long)param_3 + (uVar4 - 1));
      *param_1 = uVar2 - 1;
      *(byte *)(uVar2 - 1) = -(char)(1 << (bVar5 & 0x1f)) & bVar1;
      __dest = (void *)((1 - uVar4) + *param_1);
      *param_1 = (ulong)__dest;
      memcpy(__dest,param_3,uVar4 - 1);
      uVar2 = *param_1;
    }
    *param_1 = uVar2 - 1;
    *(byte *)(uVar2 - 1) = bVar5;
    uVar3 = mbedtls_asn1_write_len(param_1,param_2,uVar4 + 1);
    if ((int)uVar3 < 0) {
      return uVar3;
    }
    uVar2 = *param_1;
    if (uVar2 != param_2 && -1 < (long)(uVar2 - param_2)) {
      *param_1 = uVar2 - 1;
      *(undefined1 *)(uVar2 - 1) = 3;
      return (ulong)(uint)((int)uVar3 + (int)uVar4 + 2);
    }
  }
  return 0xffffff94;
}



void mbedtls_asn1_write_named_bitstring
               (undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  
  if (param_4 != 0) {
    pbVar3 = (byte *)(param_3 + -1 + (param_4 + 7 >> 3));
    uVar2 = (int)(uint)*pbVar3 >> (((byte)(param_4 + 7) & 0xf8) - (char)param_4 & 0x1f);
    bVar1 = (byte)uVar2;
    if ((uVar2 & 1) == 0) {
      do {
        bVar1 = bVar1 >> 1;
        param_4 = param_4 - 1;
        if (param_4 == 0) {
          mbedtls_asn1_write_bitstring(param_1,param_2,param_3,0);
          return;
        }
        if ((param_4 & 7) == 0) {
          bVar1 = pbVar3[-1];
          pbVar3 = pbVar3 + -1;
        }
      } while ((bVar1 & 1) == 0);
    }
  }
  mbedtls_asn1_write_bitstring(param_1,param_2,param_3,param_4);
  return;
}



ulong mbedtls_asn1_write_octet_string(ulong *param_1,ulong param_2,void *param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  
  uVar2 = *param_1;
  if ((param_2 <= uVar2) && (param_4 <= uVar2 - param_2)) {
    *param_1 = uVar2 - param_4;
    memcpy((void *)(uVar2 - param_4),param_3,param_4);
    iVar3 = (int)param_4;
    if (iVar3 < 0) {
      return param_4 & 0xffffffff;
    }
    uVar2 = mbedtls_asn1_write_len(param_1,param_2,(long)iVar3);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    uVar1 = *param_1;
    if (uVar1 != param_2 && -1 < (long)(uVar1 - param_2)) {
      *param_1 = uVar1 - 1;
      *(undefined1 *)(uVar1 - 1) = 4;
      return (ulong)(uint)((int)uVar2 + iVar3 + 1);
    }
  }
  return 0xffffff94;
}



void * mbedtls_asn1_store_named_data
                 (undefined8 *param_1,undefined8 param_2,size_t param_3,void *param_4,size_t param_5
                 )

{
  undefined8 uVar1;
  void *__ptr;
  void *pvVar2;
  void *pvVar3;
  
  __ptr = (void *)mbedtls_asn1_find_named_data(*param_1);
  if (__ptr == (void *)0x0) {
    __ptr = calloc(1,0x40);
    if (__ptr != (void *)0x0) {
      *(size_t *)((long)__ptr + 8) = param_3;
      pvVar2 = calloc(1,param_3);
      *(void **)((long)__ptr + 0x10) = pvVar2;
      if (pvVar2 != (void *)0x0) {
        pvVar2 = (void *)__memcpy_chk(pvVar2,param_2,param_3,param_3);
        *(size_t *)((long)__ptr + 0x20) = param_5;
        if (param_5 == 0) {
          uVar1 = *param_1;
          *param_1 = __ptr;
          *(undefined8 *)((long)__ptr + 0x30) = uVar1;
          return __ptr;
        }
        pvVar3 = calloc(1,param_5);
        *(void **)((long)__ptr + 0x28) = pvVar3;
        if (pvVar3 == (void *)0x0) {
          free(pvVar2);
          free(__ptr);
          return (void *)0x0;
        }
        uVar1 = *param_1;
        *param_1 = __ptr;
        *(undefined8 *)((long)__ptr + 0x30) = uVar1;
        goto LAB_00100b40;
      }
      free(__ptr);
    }
LAB_00100c57:
    __ptr = (void *)0x0;
  }
  else {
    if (param_5 == 0) {
      free(*(void **)((long)__ptr + 0x28));
      *(undefined8 *)((long)__ptr + 0x28) = 0;
      return __ptr;
    }
    if (*(size_t *)((long)__ptr + 0x20) != param_5) {
      pvVar2 = calloc(1,param_5);
      if (pvVar2 == (void *)0x0) goto LAB_00100c57;
      free(*(void **)((long)__ptr + 0x28));
      *(void **)((long)__ptr + 0x28) = pvVar2;
      *(size_t *)((long)__ptr + 0x20) = param_5;
    }
LAB_00100b40:
    if ((param_4 != (void *)0x0) && (param_5 != 0)) {
      memcpy(*(void **)((long)__ptr + 0x28),param_4,param_5);
    }
  }
  return __ptr;
}


