
undefined8 use_proxy(char *param_1,char *param_2)

{
  ulong __n;
  char cVar1;
  int iVar2;
  size_t sVar3;
  char *pcVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  char acStack_438 [1032];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == (char *)0x0) {
LAB_001000ce:
    uVar5 = 0;
  }
  else {
    sVar3 = strlen(param_2);
    __n = sVar3 - 2;
    if (((__n < 0x401) && (*param_2 == '[')) && (param_2[sVar3 - 1] == ']')) {
      strncpy(acStack_438,param_2 + 1,__n);
      param_2 = acStack_438;
      sVar3 = __n;
    }
    if (((param_1 != (char *)0x0) ||
        (param_1 = (char *)ossl_safe_getenv("no_proxy"), param_1 != (char *)0x0)) ||
       (param_1 = (char *)ossl_safe_getenv("NO_PROXY"), param_1 != (char *)0x0)) {
      for (pcVar4 = strstr(param_1,param_2); pcVar4 != (char *)0x0;
          pcVar4 = strstr(pcVar4 + 1,param_2)) {
        if (((pcVar4 == param_1) || (iVar2 = ossl_ctype_check((int)pcVar4[-1],8), iVar2 != 0)) ||
           (pcVar4[-1] == ',')) {
          cVar1 = pcVar4[sVar3];
          if (((cVar1 == '\0') || (iVar2 = ossl_ctype_check((int)cVar1,8), iVar2 != 0)) ||
             (pcVar4[sVar3] == ',')) goto LAB_001000ce;
        }
      }
    }
    uVar5 = 1;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
OSSL_parse_url(char *param_1,long *param_2,long *param_3,long *param_4,long *param_5,uint *param_6,
              long *param_7,long *param_8,long *param_9)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  byte *pbVar4;
  size_t sVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  long lVar9;
  char *pcVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *__s;
  byte *pbVar13;
  long in_FS_OFFSET;
  byte *local_a8;
  char *local_a0;
  char *local_90;
  byte *local_88;
  char *local_80;
  byte *local_78;
  byte *local_68;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 != (long *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (long *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (long *)0x0) {
    *param_4 = 0;
  }
  if (param_5 != (long *)0x0) {
    *param_5 = 0;
  }
  if (param_6 != (uint *)0x0) {
    *param_6 = 0;
  }
  if (param_7 != (long *)0x0) {
    *param_7 = 0;
  }
  if (param_9 != (long *)0x0) {
    *param_9 = 0;
  }
  if (param_8 != (long *)0x0) {
    *param_8 = 0;
  }
  if (param_1 == (char *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/http/http_lib.c",0x4d,"OSSL_parse_url");
    ERR_set_error(0x3d,0xc0102,0);
  }
  else {
    pcVar3 = strstr(param_1,"://");
    pcVar10 = param_1;
    local_90 = param_1;
    if (pcVar3 == (char *)0x0) {
LAB_00100286:
      local_80 = strchr(local_90,0x40);
      if (local_80 == (char *)0x0) {
        local_a0 = local_90;
        local_80 = local_90;
      }
      else {
        local_a0 = local_80 + 1;
      }
      if (*local_a0 == '[') {
        pcVar3 = strchr(local_a0 + 1,0x5d);
        pbVar4 = (byte *)(pcVar3 + 1);
        if (pcVar3 == (char *)0x0) goto LAB_00100395;
      }
      else {
        pbVar4 = (byte *)strchr(local_a0,0x3a);
        if ((((pbVar4 == (byte *)0x0) &&
             (pbVar4 = (byte *)strchr(local_a0,0x2f), pbVar4 == (byte *)0x0)) &&
            (pbVar4 = (byte *)strchr(local_a0,0x3f), pbVar4 == (byte *)0x0)) &&
           (pbVar4 = (byte *)strchr(local_a0,0x23), pbVar4 == (byte *)0x0)) {
          sVar5 = strlen(local_a0);
          pbVar4 = (byte *)(local_a0 + sVar5);
        }
      }
      local_a8 = &_LC2;
      __s = pbVar4;
      if (*pbVar4 == 0x3a) {
        __s = pbVar4 + 1;
        local_a8 = __s;
      }
      iVar2 = __isoc99_sscanf(local_a8,&_LC5,&local_44);
      if ((iVar2 < 1) || (0xffff < local_44)) {
        ERR_new();
        ERR_set_debug("crypto/http/http_lib.c",0x81,"OSSL_parse_url");
        ERR_set_error(0x3d,0x7b,&_LC6,local_a8);
        goto LAB_001003bd;
      }
      bVar1 = *local_a8;
      pbVar13 = local_a8;
      while ((byte)(bVar1 - 0x30) < 10) {
        pbVar7 = pbVar13 + 1;
        pbVar13 = pbVar13 + 1;
        bVar1 = *pbVar7;
      }
      if (__s == local_a8) {
        __s = pbVar13;
      }
      if ((0x3f < *__s) || ((0x8000800800000001U >> ((ulong)*__s & 0x3f) & 1) == 0)) {
        ERR_new();
        ERR_set_debug("crypto/http/http_lib.c",0x8c,"OSSL_parse_url");
        ERR_set_error(0x3d,0x7d,0);
        goto LAB_00100395;
      }
      sVar5 = strlen((char *)__s);
      pbVar6 = __s + sVar5;
      pbVar7 = (byte *)strchr((char *)__s,0x3f);
      local_88 = __s;
      if ((pbVar7 == (byte *)0x0) || (local_88 = pbVar7, param_8 == (long *)0x0)) {
        pbVar7 = (byte *)strchr((char *)local_88,0x23);
        pbVar12 = pbVar6;
        local_88 = pbVar6;
        pbVar8 = pbVar7;
      }
      else {
        pbVar8 = (byte *)strchr((char *)pbVar7,0x23);
        pbVar12 = pbVar7 + 1;
      }
      local_78 = pbVar6;
      local_68 = pbVar6;
      if (pbVar8 != (byte *)0x0) {
        local_88 = pbVar7;
        local_78 = pbVar8;
        local_68 = pbVar8 + 1;
      }
      if (param_2 != (long *)0x0) {
        lVar9 = CRYPTO_strndup(param_1,(long)pcVar10 - (long)param_1,"crypto/http/http_lib.c",0x2a);
        *param_2 = lVar9;
        if (lVar9 != 0) goto LAB_00100674;
        goto LAB_001003c2;
      }
LAB_00100674:
      if (param_4 != (long *)0x0) {
        lVar9 = CRYPTO_strndup(local_a0,(long)pbVar4 - (long)local_a0,"crypto/http/http_lib.c");
        *param_4 = lVar9;
        if (lVar9 != 0) goto LAB_001006af;
        if (param_2 != (long *)0x0) goto LAB_001003c2;
        if (param_3 != (long *)0x0) {
          CRYPTO_free((void *)*param_3);
          *param_3 = 0;
        }
        goto LAB_001003fe;
      }
LAB_001006af:
      if (param_5 == (long *)0x0) {
LAB_001006e5:
        if (param_3 == (long *)0x0) {
LAB_00100718:
          if (param_8 != (long *)0x0) {
            lVar9 = CRYPTO_strndup(pbVar12,(long)local_78 - (long)pbVar12,"crypto/http/http_lib.c",
                                   0x2a);
            *param_8 = lVar9;
            if (lVar9 == 0) goto LAB_001003bd;
          }
          if (param_9 != (long *)0x0) {
            lVar9 = CRYPTO_strndup(local_68,(long)pbVar6 - (long)local_68,"crypto/http/http_lib.c",
                                   0x2a);
            *param_9 = lVar9;
            if (lVar9 == 0) goto LAB_001003bd;
          }
          if (param_6 != (uint *)0x0) {
            *param_6 = local_44;
          }
          if (*__s == 0x2f) {
            if (param_7 != (long *)0x0) {
              lVar9 = CRYPTO_strndup(__s,(long)local_88 - (long)__s,"crypto/http/http_lib.c",0x2a);
              *param_7 = lVar9;
              if (lVar9 == 0) goto LAB_001003bd;
            }
          }
          else if (param_7 != (long *)0x0) {
            pcVar10 = (char *)CRYPTO_malloc((int)(local_88 + (2 - (long)__s)),
                                            "crypto/http/http_lib.c",0xb3);
            *param_7 = (long)pcVar10;
            if (pcVar10 == (char *)0x0) goto LAB_001003bd;
            BIO_snprintf(pcVar10,(size_t)(local_88 + (2 - (long)__s)),"/%s",__s);
          }
          uVar11 = 1;
          goto LAB_00100499;
        }
        lVar9 = CRYPTO_strndup(local_90,(long)local_80 - (long)local_90,"crypto/http/http_lib.c",
                               0x2a);
        *param_3 = lVar9;
        if (lVar9 != 0) goto LAB_00100718;
        if (param_2 != (long *)0x0) {
          CRYPTO_free((void *)*param_2);
          *param_2 = 0;
        }
        goto LAB_001003e0;
      }
      lVar9 = CRYPTO_strndup(local_a8,(long)pbVar13 - (long)local_a8,"crypto/http/http_lib.c",0x2a);
      *param_5 = lVar9;
      if (lVar9 != 0) goto LAB_001006e5;
      if (param_2 != (long *)0x0) goto LAB_001003c2;
      if (param_3 != (long *)0x0) goto LAB_001003e0;
      if (param_4 != (long *)0x0) {
        CRYPTO_free((void *)*param_4);
        *param_4 = 0;
      }
LAB_0010041e:
      CRYPTO_free((void *)*param_5);
      *param_5 = 0;
    }
    else {
      if (param_1 != pcVar3) {
        local_90 = pcVar3 + 3;
        pcVar10 = pcVar3;
        goto LAB_00100286;
      }
LAB_00100395:
      ERR_new();
      ERR_set_debug("crypto/http/http_lib.c",0xba,"OSSL_parse_url");
      ERR_set_error(0x3d,0x65,0);
LAB_001003bd:
      if (param_2 != (long *)0x0) {
LAB_001003c2:
        CRYPTO_free((void *)*param_2);
        *param_2 = 0;
      }
      if (param_3 != (long *)0x0) {
LAB_001003e0:
        CRYPTO_free((void *)*param_3);
        *param_3 = 0;
      }
      if (param_4 != (long *)0x0) {
LAB_001003fe:
        CRYPTO_free((void *)*param_4);
        *param_4 = 0;
      }
      if (param_5 != (long *)0x0) goto LAB_0010041e;
    }
    if (param_7 != (long *)0x0) {
      CRYPTO_free((void *)*param_7);
      *param_7 = 0;
    }
    if (param_8 != (long *)0x0) {
      CRYPTO_free((void *)*param_8);
      *param_8 = 0;
    }
    if (param_9 != (long *)0x0) {
      CRYPTO_free((void *)*param_9);
      *param_9 = 0;
    }
  }
  uVar11 = 0;
LAB_00100499:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar11;
}



undefined8
OSSL_HTTP_parse_url(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4,
                   undefined8 *param_5,undefined4 *param_6,undefined8 *param_7,undefined8 *param_8,
                   undefined8 *param_9)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined4 local_54;
  char *local_50;
  char *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = 0;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  iVar1 = OSSL_parse_url(param_1,&local_50,param_3,param_4,&local_48,param_6,param_7,param_8,param_9
                        );
  pcVar2 = local_50;
  if (iVar1 != 0) {
    iVar1 = strcmp(local_50,"https");
    if (iVar1 == 0) {
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = 1;
      }
      CRYPTO_free(pcVar2);
      if ((*local_48 == '0') && (local_48[1] == '\0')) {
        CRYPTO_free(local_48);
        local_48 = "443";
        goto LAB_00100b16;
      }
LAB_00100c59:
      if (param_5 == (undefined8 *)0x0) {
        CRYPTO_free(local_48);
      }
      else {
        *param_5 = local_48;
      }
      goto LAB_00100c61;
    }
    if ((*pcVar2 == '\0') || (iVar1 = strcmp(pcVar2,"http"), iVar1 == 0)) {
      CRYPTO_free(pcVar2);
      if ((*local_48 != '0') || (local_48[1] != '\0')) goto LAB_00100c59;
      CRYPTO_free(local_48);
      local_48 = "80";
LAB_00100b16:
      iVar1 = __isoc99_sscanf(local_48,&_LC12,&local_54);
      if (iVar1 == 1) {
        if (param_6 != (undefined4 *)0x0) {
          *param_6 = local_54;
        }
        if (param_5 != (undefined8 *)0x0) {
          pcVar2 = CRYPTO_strdup(local_48,"crypto/http/http_lib.c",0xed);
          *param_5 = pcVar2;
          if (pcVar2 == (char *)0x0) goto LAB_00100b70;
        }
LAB_00100c61:
        uVar3 = 1;
        goto LAB_00100c66;
      }
    }
    else {
      ERR_new();
      ERR_set_debug("crypto/http/http_lib.c",0xdd,"OSSL_HTTP_parse_url");
      ERR_set_error(0x3d,0x7c,0);
      CRYPTO_free(local_50);
      CRYPTO_free(local_48);
    }
LAB_00100b70:
    if (param_3 != (undefined8 *)0x0) {
      CRYPTO_free((void *)*param_3);
      *param_3 = 0;
    }
    if (param_4 != (undefined8 *)0x0) {
      CRYPTO_free((void *)*param_4);
      *param_4 = 0;
    }
    if (param_7 != (undefined8 *)0x0) {
      CRYPTO_free((void *)*param_7);
      *param_7 = 0;
    }
    if (param_8 != (undefined8 *)0x0) {
      CRYPTO_free((void *)*param_8);
      *param_8 = 0;
    }
    if (param_9 != (undefined8 *)0x0) {
      CRYPTO_free((void *)*param_9);
      *param_9 = 0;
    }
  }
  uVar3 = 0;
LAB_00100c66:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



char * OSSL_HTTP_adapt_proxy(char *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  char *pcVar2;
  
  if (param_1 == (char *)0x0) {
    if (param_4 == 0) {
      param_1 = (char *)ossl_safe_getenv("http_proxy");
      pcVar2 = "HTTP_PROXY";
      if (param_1 != (char *)0x0) goto LAB_00100d46;
    }
    else {
      param_1 = (char *)ossl_safe_getenv("https_proxy");
      if (param_1 != (char *)0x0) goto LAB_00100d46;
      pcVar2 = "HTTPS_PROXY";
    }
    param_1 = (char *)ossl_safe_getenv(pcVar2);
    if (param_1 == (char *)0x0) {
      return (char *)0x0;
    }
  }
LAB_00100d46:
  if ((*param_1 != '\0') && (iVar1 = use_proxy(param_2,param_3), iVar1 != 0)) {
    return param_1;
  }
  return (char *)0x0;
}


