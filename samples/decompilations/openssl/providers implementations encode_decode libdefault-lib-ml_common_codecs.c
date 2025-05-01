
int pref_cmp(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_2 + 8);
  if ((0 < iVar1) && (0 < iVar2)) {
    return iVar1 - iVar2;
  }
  return iVar2 - iVar1;
}



long * ossl_ml_common_pkcs8_fmt_order
                 (undefined8 param_1,long param_2,undefined8 param_3,char *param_4)

{
  char *__s;
  int iVar1;
  long *ptr;
  size_t sVar2;
  long *plVar3;
  int iVar4;
  
  ptr = (long *)CRYPTO_zalloc(0x70,"providers/implementations/encode_decode/ml_common_codecs.c",0x2d
                             );
  if (ptr == (long *)0x0) {
LAB_0010031b:
    ptr = (long *)0x0;
  }
  else {
    *ptr = param_2;
    *(undefined4 *)(ptr + 1) = 0;
    ptr[2] = param_2 + 0x58;
    ptr[4] = param_2 + 0xb0;
    ptr[6] = param_2 + 0x108;
    ptr[8] = param_2 + 0x160;
    *(undefined4 *)(ptr + 3) = 0;
    *(undefined4 *)(ptr + 5) = 0;
    *(undefined4 *)(ptr + 7) = 0;
    *(undefined4 *)(ptr + 9) = 0;
    ptr[10] = param_2 + 0x1b8;
    *(undefined4 *)(ptr + 0xb) = 0;
    if (param_4 != (char *)0x0) {
      iVar4 = 0;
      do {
        do {
          sVar2 = strspn(param_4,"\t ,");
          __s = param_4 + sVar2;
          if (*__s == '\0') {
            if (iVar4 == 0) {
              CRYPTO_free(ptr);
              ERR_new();
              ERR_set_debug("providers/implementations/encode_decode/ml_common_codecs.c",0x52,
                            "ossl_ml_common_pkcs8_fmt_order");
              ERR_set_error(0x39,0xf5,"no %s private key %s formats are enabled",param_1,param_3);
              goto LAB_0010031b;
            }
            goto LAB_001001bf;
          }
          sVar2 = strcspn(__s,"\t ,");
          param_4 = __s + sVar2;
        } while ((((0 < (int)ptr[1]) ||
                  (iVar1 = OPENSSL_strncasecmp(*(undefined8 *)*ptr,__s,sVar2), plVar3 = ptr,
                  iVar1 != 0)) &&
                 ((0 < (int)ptr[3] ||
                  (iVar1 = OPENSSL_strncasecmp(*(undefined8 *)ptr[2],__s,sVar2), plVar3 = ptr + 2,
                  iVar1 != 0)))) &&
                ((((0 < (int)ptr[5] ||
                   (iVar1 = OPENSSL_strncasecmp(*(undefined8 *)ptr[4],__s,sVar2), plVar3 = ptr + 4,
                   iVar1 != 0)) &&
                  ((0 < (int)ptr[7] ||
                   (iVar1 = OPENSSL_strncasecmp(*(undefined8 *)ptr[6],__s,sVar2), plVar3 = ptr + 6,
                   iVar1 != 0)))) &&
                 (((0 < (int)ptr[9] ||
                   (iVar1 = OPENSSL_strncasecmp(*(undefined8 *)ptr[8],__s,sVar2), plVar3 = ptr + 8,
                   iVar1 != 0)) &&
                  ((0 < (int)ptr[0xb] ||
                   (iVar1 = OPENSSL_strncasecmp(*(undefined8 *)ptr[10],__s,sVar2), plVar3 = ptr + 10
                   , iVar1 != 0))))))));
        iVar4 = iVar4 + 1;
        *(int *)(plVar3 + 1) = iVar4;
      } while (iVar4 != 6);
LAB_001001bf:
      qsort(ptr,6,0x10,pref_cmp);
      ptr[(long)iVar4 * 2] = 0;
    }
  }
  return ptr;
}


