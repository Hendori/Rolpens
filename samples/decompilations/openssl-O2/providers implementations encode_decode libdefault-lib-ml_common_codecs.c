
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
  long *plVar1;
  long lVar2;
  char *__s;
  int iVar3;
  size_t sVar4;
  long *plVar5;
  int iVar6;
  long *plVar7;
  long *local_50;
  
  local_50 = (long *)CRYPTO_zalloc(0x70,"providers/implementations/encode_decode/ml_common_codecs.c"
                                   ,0x2d);
  if (local_50 == (long *)0x0) {
LAB_001001c9:
    local_50 = (long *)0x0;
  }
  else {
    lVar2 = param_2 + 0x210;
    plVar5 = local_50;
    do {
      *plVar5 = param_2;
      param_2 = param_2 + 0x58;
      *(undefined4 *)(plVar5 + 1) = 0;
      plVar5 = plVar5 + 2;
    } while (param_2 != lVar2);
    if (param_4 != (char *)0x0) {
      iVar6 = 0;
LAB_001000b8:
      do {
        sVar4 = strspn(param_4,"\t ,");
        __s = param_4 + sVar4;
        if (*__s == '\0') {
          if (iVar6 == 0) {
            CRYPTO_free(local_50);
            ERR_new();
            ERR_set_debug("providers/implementations/encode_decode/ml_common_codecs.c",0x52,
                          "ossl_ml_common_pkcs8_fmt_order");
            ERR_set_error(0x39,0xf5,"no %s private key %s formats are enabled",param_1,param_3);
            goto LAB_001001c9;
          }
          break;
        }
        sVar4 = strcspn(__s,"\t ,");
        param_4 = __s + sVar4;
        plVar5 = local_50;
        if ((int)local_50[1] < 1) goto LAB_0010010c;
        do {
          do {
            plVar7 = plVar5 + 2;
            if (plVar7 == local_50 + 0xc) goto LAB_001000b8;
            plVar1 = plVar5 + 3;
            plVar5 = plVar7;
          } while (0 < (int)*plVar1);
LAB_0010010c:
          iVar3 = OPENSSL_strncasecmp(*(undefined8 *)*plVar5,__s,sVar4);
        } while (iVar3 != 0);
        iVar6 = iVar6 + 1;
        *(int *)(plVar5 + 1) = iVar6;
      } while (iVar6 != 6);
      qsort(local_50,6,0x10,pref_cmp);
      local_50[(long)iVar6 * 2] = 0;
    }
  }
  return local_50;
}


