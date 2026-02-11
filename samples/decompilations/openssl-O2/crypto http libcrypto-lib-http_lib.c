
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
  byte *pbVar2;
  int iVar3;
  char *pcVar4;
  byte *pbVar5;
  size_t sVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  long lVar10;
  char *pcVar11;
  undefined8 uVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  long in_FS_OFFSET;
  byte *local_c0;
  char *local_a8;
  byte *local_a0;
  char *local_90;
  char *local_80;
  byte *local_50;
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
    pcVar4 = strstr(param_1,"://");
    pcVar11 = param_1;
    local_90 = param_1;
    if (pcVar4 == (char *)0x0) {
LAB_00100279:
      local_80 = strchr(local_90,0x40);
      if (local_80 == (char *)0x0) {
        local_a8 = local_90;
        local_80 = local_90;
      }
      else {
        local_a8 = local_80 + 1;
      }
      if (*local_a8 == '[') {
        pcVar4 = strchr(local_a8 + 1,0x5d);
        pbVar5 = (byte *)(pcVar4 + 1);
        if (pcVar4 == (char *)0x0) goto LAB_001003a3;
      }
      else {
        pbVar5 = (byte *)strchr(local_a8,0x3a);
        if ((((pbVar5 == (byte *)0x0) &&
             (pbVar5 = (byte *)strchr(local_a8,0x2f), pbVar5 == (byte *)0x0)) &&
            (pbVar5 = (byte *)strchr(local_a8,0x3f), pbVar5 == (byte *)0x0)) &&
           (pbVar5 = (byte *)strchr(local_a8,0x23), pbVar5 == (byte *)0x0)) {
          sVar6 = strlen(local_a8);
          pbVar5 = (byte *)(local_a8 + sVar6);
        }
      }
      local_c0 = &_LC2;
      local_a0 = pbVar5;
      if (*pbVar5 == 0x3a) {
        local_c0 = pbVar5 + 1;
        local_a0 = local_c0;
      }
      iVar3 = __isoc99_sscanf(local_c0,&_LC5,&local_44);
      if ((iVar3 < 1) || (0xffff < local_44)) {
        ERR_new();
        ERR_set_debug("crypto/http/http_lib.c",0x81,"OSSL_parse_url");
        ERR_set_error(0x3d,0x7b,&_LC6,local_c0);
        goto LAB_001003cc;
      }
      bVar1 = *local_c0;
      pbVar13 = local_c0;
      while ((byte)(bVar1 - 0x30) < 10) {
        pbVar8 = pbVar13 + 1;
        pbVar13 = pbVar13 + 1;
        bVar1 = *pbVar8;
      }
      if (local_a0 == local_c0) {
        local_a0 = pbVar13;
      }
      if ((0x3f < *local_a0) || ((0x8000800800000001U >> ((ulong)*local_a0 & 0x3f) & 1) == 0)) {
        ERR_new();
        ERR_set_debug("crypto/http/http_lib.c",0x8c,"OSSL_parse_url");
        ERR_set_error(0x3d,0x7d,0);
        goto LAB_001003a3;
      }
      sVar6 = strlen((char *)local_a0);
      pbVar7 = local_a0 + sVar6;
      pbVar8 = (byte *)strchr((char *)local_a0,0x3f);
      pbVar14 = local_a0;
      if ((pbVar8 == (byte *)0x0) || (pbVar14 = pbVar8, param_8 == (long *)0x0)) {
        pbVar9 = (byte *)strchr((char *)pbVar14,0x23);
        pbVar14 = pbVar7;
        pbVar8 = pbVar7;
        pbVar2 = pbVar9;
      }
      else {
        pbVar9 = (byte *)strchr((char *)pbVar8,0x23);
        pbVar14 = pbVar8 + 1;
        pbVar2 = pbVar8;
      }
      pbVar15 = pbVar7;
      local_50 = pbVar7;
      if (pbVar9 != (byte *)0x0) {
        pbVar8 = pbVar2;
        pbVar15 = pbVar9;
        local_50 = pbVar9 + 1;
      }
      if (param_2 != (long *)0x0) {
        lVar10 = CRYPTO_strndup(param_1,(long)pcVar11 - (long)param_1,"crypto/http/http_lib.c",0x2a)
        ;
        *param_2 = lVar10;
        if (lVar10 != 0) goto LAB_00100697;
        goto LAB_001003d1;
      }
LAB_00100697:
      if (param_4 != (long *)0x0) {
        lVar10 = CRYPTO_strndup(local_a8,(long)pbVar5 - (long)local_a8,"crypto/http/http_lib.c");
        *param_4 = lVar10;
        if (lVar10 != 0) goto LAB_001006e3;
        if (param_2 != (long *)0x0) goto LAB_001003d1;
        if (param_3 != (long *)0x0) {
          CRYPTO_free((void *)*param_3);
          *param_3 = 0;
        }
        goto LAB_0010040d;
      }
LAB_001006e3:
      if (param_5 == (long *)0x0) {
LAB_00100726:
        if (param_3 == (long *)0x0) {
LAB_0010076b:
          if (param_8 != (long *)0x0) {
            lVar10 = CRYPTO_strndup(pbVar14,(long)pbVar15 - (long)pbVar14,"crypto/http/http_lib.c",
                                    0x2a);
            *param_8 = lVar10;
            if (lVar10 == 0) goto LAB_001003cc;
          }
          if (param_9 != (long *)0x0) {
            lVar10 = CRYPTO_strndup(local_50,(long)pbVar7 - (long)local_50,"crypto/http/http_lib.c",
                                    0x2a);
            *param_9 = lVar10;
            if (lVar10 == 0) goto LAB_001003cc;
          }
          if (param_6 != (uint *)0x0) {
            *param_6 = local_44;
          }
          if (*local_a0 == 0x2f) {
            if (param_7 != (long *)0x0) {
              lVar10 = CRYPTO_strndup(local_a0,(long)pbVar8 - (long)local_a0,
                                      "crypto/http/http_lib.c",0x2a);
              *param_7 = lVar10;
              if (lVar10 == 0) goto LAB_001003cc;
            }
          }
          else if (param_7 != (long *)0x0) {
            pcVar11 = (char *)CRYPTO_malloc((int)(pbVar8 + (2 - (long)local_a0)),
                                            "crypto/http/http_lib.c",0xb3);
            *param_7 = (long)pcVar11;
            if (pcVar11 == (char *)0x0) goto LAB_001003cc;
            BIO_snprintf(pcVar11,(size_t)(pbVar8 + (2 - (long)local_a0)),"/%s",local_a0);
          }
          uVar12 = 1;
          goto LAB_001004a2;
        }
        lVar10 = CRYPTO_strndup(local_90,(long)local_80 - (long)local_90,"crypto/http/http_lib.c",
                                0x2a);
        *param_3 = lVar10;
        if (lVar10 != 0) goto LAB_0010076b;
        if (param_2 != (long *)0x0) {
          CRYPTO_free((void *)*param_2);
          *param_2 = 0;
        }
        goto LAB_001003ef;
      }
      lVar10 = CRYPTO_strndup(local_c0,(long)pbVar13 - (long)local_c0,"crypto/http/http_lib.c",0x2a)
      ;
      *param_5 = lVar10;
      if (lVar10 != 0) goto LAB_00100726;
      if (param_2 != (long *)0x0) goto LAB_001003d1;
      if (param_3 != (long *)0x0) goto LAB_001003ef;
      if (param_4 != (long *)0x0) {
        CRYPTO_free((void *)*param_4);
        *param_4 = 0;
      }
LAB_00100429:
      CRYPTO_free((void *)*param_5);
      *param_5 = 0;
    }
    else {
      if (param_1 != pcVar4) {
        local_90 = pcVar4 + 3;
        pcVar11 = pcVar4;
        goto LAB_00100279;
      }
LAB_001003a3:
      ERR_new();
      ERR_set_debug("crypto/http/http_lib.c",0xba,"OSSL_parse_url");
      ERR_set_error(0x3d,0x65,0);
LAB_001003cc:
      if (param_2 != (long *)0x0) {
LAB_001003d1:
        CRYPTO_free((void *)*param_2);
        *param_2 = 0;
      }
      if (param_3 != (long *)0x0) {
LAB_001003ef:
        CRYPTO_free((void *)*param_3);
        *param_3 = 0;
      }
      if (param_4 != (long *)0x0) {
LAB_0010040d:
        CRYPTO_free((void *)*param_4);
        *param_4 = 0;
      }
      if (param_5 != (long *)0x0) goto LAB_00100429;
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
  uVar12 = 0;
LAB_001004a2:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar12;
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
        goto LAB_00100b56;
      }
LAB_00100c99:
      if (param_5 == (undefined8 *)0x0) {
        CRYPTO_free(local_48);
      }
      else {
        *param_5 = local_48;
      }
      goto LAB_00100ca1;
    }
    if ((*pcVar2 == '\0') || (iVar1 = strcmp(pcVar2,"http"), iVar1 == 0)) {
      CRYPTO_free(pcVar2);
      if ((*local_48 != '0') || (local_48[1] != '\0')) goto LAB_00100c99;
      CRYPTO_free(local_48);
      local_48 = "80";
LAB_00100b56:
      iVar1 = __isoc99_sscanf(local_48,&_LC12,&local_54);
      if (iVar1 == 1) {
        if (param_6 != (undefined4 *)0x0) {
          *param_6 = local_54;
        }
        if (param_5 != (undefined8 *)0x0) {
          pcVar2 = CRYPTO_strdup(local_48,"crypto/http/http_lib.c",0xed);
          *param_5 = pcVar2;
          if (pcVar2 == (char *)0x0) goto LAB_00100bb0;
        }
LAB_00100ca1:
        uVar3 = 1;
        goto LAB_00100ca6;
      }
    }
    else {
      ERR_new();
      ERR_set_debug("crypto/http/http_lib.c",0xdd,"OSSL_HTTP_parse_url");
      ERR_set_error(0x3d,0x7c,0);
      CRYPTO_free(local_50);
      CRYPTO_free(local_48);
    }
LAB_00100bb0:
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
LAB_00100ca6:
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
      if (param_1 != (char *)0x0) goto LAB_00100d86;
    }
    else {
      param_1 = (char *)ossl_safe_getenv("https_proxy");
      if (param_1 != (char *)0x0) goto LAB_00100d86;
      pcVar2 = "HTTPS_PROXY";
    }
    param_1 = (char *)ossl_safe_getenv(pcVar2);
    if (param_1 == (char *)0x0) {
      return (char *)0x0;
    }
  }
LAB_00100d86:
  if ((*param_1 != '\0') && (iVar1 = use_proxy(param_2,param_3), iVar1 != 0)) {
    return param_1;
  }
  return (char *)0x0;
}


