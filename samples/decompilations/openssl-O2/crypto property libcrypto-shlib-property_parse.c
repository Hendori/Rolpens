
ulong pd_compare(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)(*(int *)*param_2 < *(int *)*param_1);
  if (*(int *)*param_1 < *(int *)*param_2) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



void pd_free(void *param_1)

{
  CRYPTO_free(param_1);
  return;
}



int * stack_to_property_list(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int *ptr;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  iVar1 = OPENSSL_sk_num(param_2);
  if (iVar1 < 1) {
    ptr = (int *)CRYPTO_malloc(0x20,"crypto/property/property_parse.c",0x140);
    if (ptr == (int *)0x0) {
      return (int *)0x0;
    }
    OPENSSL_sk_sort(param_2);
    *(byte *)(ptr + 1) = *(byte *)(ptr + 1) & 0xfe;
  }
  else {
    ptr = (int *)CRYPTO_malloc((iVar1 + -1) * 0x18 + 0x20,"crypto/property/property_parse.c",0x140);
    if (ptr == (int *)0x0) {
      return (int *)0x0;
    }
    piVar5 = ptr + 2;
    iVar6 = 0;
    iVar4 = 0;
    OPENSSL_sk_sort(param_2);
    *(byte *)(ptr + 1) = *(byte *)(ptr + 1) & 0xfe;
    do {
      puVar2 = (undefined8 *)OPENSSL_sk_value(param_2,iVar6);
      uVar3 = puVar2[1];
      *(undefined8 *)piVar5 = *puVar2;
      *(undefined8 *)(piVar5 + 2) = uVar3;
      *(undefined8 *)(piVar5 + 4) = puVar2[2];
      *(byte *)(ptr + 1) =
           *(byte *)(ptr + 1) & 0xfe |
           (*(byte *)(ptr + (long)iVar6 * 6 + 5) | *(byte *)(ptr + 1)) & 1;
      if ((iVar6 != 0) && (*piVar5 == iVar4)) {
        CRYPTO_free(ptr);
        ERR_new();
        ERR_set_debug("crypto/property/property_parse.c",0x14d,"stack_to_property_list");
        uVar3 = ossl_property_name_str(param_1,iVar4);
        ERR_set_error(0x37,0x6c,"Duplicated name `%s\'",uVar3);
        return (int *)0x0;
      }
      iVar6 = iVar6 + 1;
      iVar4 = *piVar5;
      piVar5 = piVar5 + 6;
    } while (iVar6 != iVar1);
  }
  *ptr = iVar1;
  return ptr;
}



uint parse_string(undefined8 param_1,undefined8 *param_2,char param_3,long param_4,
                 undefined4 param_5)

{
  char *pcVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  char *pcVar7;
  long in_FS_OFFSET;
  char local_418 [1000];
  long local_30;
  
  pcVar7 = (char *)*param_2;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cVar2 = *pcVar7;
  if (cVar2 != '\0') {
    uVar5 = 0;
    uVar6 = 0;
    do {
      while( true ) {
        if (cVar2 == param_3) {
          local_418[uVar6] = '\0';
          if (uVar5 == 0) {
            uVar3 = ossl_property_value(param_1,local_418,param_5);
            *(undefined4 *)(param_4 + 0x10) = uVar3;
          }
          else {
            ERR_new();
            ERR_set_debug("crypto/property/property_parse.c",0xd7,"parse_string");
            ERR_set_error(0x37,0x6d,"HERE-->%s",*param_2);
          }
          do {
            pcVar1 = pcVar7 + 1;
            pcVar7 = pcVar7 + 1;
            iVar4 = ossl_ctype_check((int)*pcVar1,8);
          } while (iVar4 != 0);
          *param_2 = pcVar7;
          *(undefined4 *)(param_4 + 4) = 0;
          uVar5 = uVar5 ^ 1;
          goto LAB_001002b7;
        }
        if (uVar6 < 999) break;
        cVar2 = pcVar7[1];
        pcVar7 = pcVar7 + 1;
        uVar5 = 1;
        if (cVar2 == '\0') goto LAB_00100231;
      }
      pcVar7 = pcVar7 + 1;
      local_418[uVar6] = cVar2;
      uVar6 = uVar6 + 1;
      cVar2 = *pcVar7;
    } while (cVar2 != '\0');
  }
LAB_00100231:
  ERR_new();
  ERR_set_debug("crypto/property/property_parse.c",0xd1,"parse_string");
  ERR_set_error(0x37,0x6a,"HERE-->%c%s",(int)param_3,*param_2);
  uVar5 = 0;
LAB_001002b7:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool parse_unquoted(undefined8 param_1,undefined8 *param_2,long param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  char *pcVar5;
  long in_FS_OFFSET;
  bool bVar6;
  undefined1 local_428 [1000];
  long local_40;
  
  pcVar5 = (char *)*param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*pcVar5 != '\0') && (*pcVar5 != ',')) {
    bVar6 = false;
    uVar3 = 0;
    while( true ) {
      iVar2 = ossl_ctype_check((int)*pcVar5,0x100);
      iVar4 = (int)*pcVar5;
      if (iVar2 == 0) break;
      iVar2 = ossl_ctype_check(iVar4,8);
      iVar4 = (int)*pcVar5;
      if ((iVar2 != 0) || (*pcVar5 == ',')) break;
      if (uVar3 < 999) {
        uVar1 = ossl_tolower();
        local_428[uVar3] = uVar1;
        uVar3 = uVar3 + 1;
      }
      else {
        bVar6 = true;
      }
      pcVar5 = pcVar5 + 1;
    }
    iVar2 = ossl_ctype_check(iVar4,8);
    if ((iVar2 != 0) || ((*pcVar5 == '\0' || (*pcVar5 == ',')))) {
      local_428[uVar3] = 0;
      if (bVar6) {
        ERR_new();
        bVar6 = false;
        ERR_set_debug("crypto/property/property_parse.c",0xf8,"parse_unquoted");
        ERR_set_error(0x37,0x6d,"HERE-->%s",*param_2);
      }
      else {
        iVar2 = ossl_property_value(param_1,local_428,param_4);
        bVar6 = iVar2 != 0;
        *(int *)(param_3 + 0x10) = iVar2;
      }
      while( true ) {
        iVar2 = ossl_ctype_check((int)*pcVar5,8);
        if (iVar2 == 0) break;
        pcVar5 = pcVar5 + 1;
      }
      *param_2 = pcVar5;
      *(undefined4 *)(param_3 + 4) = 0;
      goto LAB_00100482;
    }
    ERR_new();
    ERR_set_debug("crypto/property/property_parse.c",0xf2,"parse_unquoted");
    ERR_set_error(0x37,0x65,"HERE-->%s",pcVar5);
  }
  bVar6 = false;
LAB_00100482:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 parse_name_constprop_0(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  char *pcVar7;
  char *pcVar8;
  long in_FS_OFFSET;
  undefined1 local_a8 [104];
  long local_40;
  
  uVar6 = 0;
  bVar1 = false;
  uVar5 = 0;
  pcVar8 = (char *)*param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    iVar3 = ossl_ctype_check((int)*pcVar8,3);
    if (iVar3 == 0) {
      ERR_new();
      ERR_set_debug("crypto/property/property_parse.c",0x43,"parse_name");
      ERR_set_error(0x37,0x67,"HERE-->%s",*param_2);
      uVar6 = 0;
LAB_00100657:
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return uVar6;
    }
    do {
      pcVar7 = pcVar8;
      if (uVar5 < 99) {
        uVar2 = ossl_tolower((int)*pcVar7);
        local_a8[uVar5] = uVar2;
        uVar5 = uVar5 + 1;
      }
      else {
        bVar1 = true;
      }
      pcVar8 = pcVar7 + 1;
    } while ((pcVar7[1] == '_') || (iVar3 = ossl_ctype_check((int)pcVar7[1],7), iVar3 != 0));
    if (*pcVar8 != '.') {
      local_a8[uVar5] = 0;
      if (bVar1) {
        ERR_new();
        ERR_set_debug("crypto/property/property_parse.c",0x58,"parse_name");
        ERR_set_error(0x37,100,"HERE-->%s",*param_2);
        uVar6 = 0;
      }
      else {
        while (iVar3 = ossl_ctype_check((int)*pcVar8,8), iVar3 != 0) {
          pcVar8 = pcVar8 + 1;
        }
        *param_2 = pcVar8;
        uVar4 = ossl_property_name(param_1,local_a8,uVar6);
        *param_3 = uVar4;
        uVar6 = 1;
      }
      goto LAB_00100657;
    }
    if (uVar5 < 99) {
      local_a8[uVar5] = 0x2e;
      uVar5 = uVar5 + 1;
    }
    else {
      bVar1 = true;
    }
    pcVar8 = pcVar7 + 2;
    uVar6 = 1;
  } while( true );
}



undefined8 parse_number(undefined8 *param_1,long param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  
  lVar4 = 0;
  pcVar6 = (char *)*param_1;
  do {
    iVar3 = ossl_isdigit((int)*pcVar6);
    if (iVar3 == 0) {
      ERR_new();
      uVar5 = 0x67;
      goto LAB_0010074b;
    }
    cVar2 = *pcVar6;
    if ((long)((0x7fffffffffffffffU - (long)(cVar2 + -0x30)) / 10) < lVar4) {
      ERR_new();
      ERR_set_debug("crypto/property/property_parse.c",0x6d,"parse_number");
      ERR_set_error(0x37,0x6c,"Property %s overflows",*param_1);
      return 0;
    }
    pcVar1 = pcVar6 + 1;
    pcVar6 = pcVar6 + 1;
    lVar4 = (long)(cVar2 + -0x30) + lVar4 * 10;
    iVar3 = ossl_isdigit((int)*pcVar1);
  } while (iVar3 != 0);
  iVar3 = ossl_ctype_check((int)*pcVar6,8);
  if (((iVar3 != 0) || (*pcVar6 == '\0')) || (*pcVar6 == ',')) {
    while (iVar3 = ossl_ctype_check((int)*pcVar6,8), iVar3 != 0) {
      pcVar6 = pcVar6 + 1;
    }
    *param_1 = pcVar6;
    *(undefined4 *)(param_2 + 4) = 1;
    *(long *)(param_2 + 0x10) = lVar4;
    return 1;
  }
  ERR_new();
  uVar5 = 0x74;
LAB_0010074b:
  ERR_set_debug("crypto/property/property_parse.c",uVar5,"parse_number");
  ERR_set_error(0x37,0x69,"HERE-->%s",*param_1);
  return 0;
}



undefined8 parse_value(undefined8 param_1,long *param_2,long param_3,undefined4 param_4)

{
  char *pcVar1;
  char cVar2;
  undefined8 uVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  long lVar7;
  long in_FS_OFFSET;
  char *local_48;
  long local_40;
  
  pcVar5 = (char *)*param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar6 = (int)*pcVar5;
  local_48 = pcVar5;
  switch(iVar6 - 0x22U & 0xff) {
  case 0:
  case 5:
    local_48 = pcVar5 + 1;
    uVar3 = parse_string(param_1,&local_48,(int)*pcVar5,param_3,param_4);
    break;
  default:
    goto switchD_0010088c_caseD_1;
  case 9:
    local_48 = pcVar5 + 1;
    uVar3 = parse_number(&local_48,param_3);
    break;
  case 0xb:
    local_48 = pcVar5 + 1;
    uVar3 = parse_number(&local_48,param_3);
    *(long *)(param_3 + 0x10) = -*(long *)(param_3 + 0x10);
    break;
  case 0xe:
    if (pcVar5[1] == 'x') {
      pcVar5 = pcVar5 + 2;
      lVar7 = 0;
      pcVar4 = pcVar5;
      local_48 = pcVar5;
      do {
        iVar6 = ossl_isdigit((int)*pcVar4);
        if (iVar6 == 0) {
          iVar6 = ossl_ctype_check((int)*pcVar4,0x10);
          if (iVar6 == 0) {
            ERR_new();
            ERR_set_debug("crypto/property/property_parse.c",0x8a,"parse_hex");
            ERR_set_error(0x37,0x66,&_LC5,pcVar5);
            goto LAB_001008d2;
          }
          iVar6 = ossl_tolower((int)*pcVar4);
          iVar6 = iVar6 + -0x57;
        }
        else {
          iVar6 = *pcVar4 + -0x30;
        }
        if (0x7fffffffffffffff - (long)iVar6 >> 4 < lVar7) {
          ERR_new();
          pcVar4 = "parse_hex";
          uVar3 = 0x90;
          goto LAB_00100b41;
        }
        pcVar1 = pcVar4 + 1;
        pcVar4 = pcVar4 + 1;
        lVar7 = lVar7 * 0x10 + (long)iVar6;
        iVar6 = ossl_ctype_check((int)*pcVar1,0x10);
      } while (iVar6 != 0);
      iVar6 = ossl_ctype_check((int)*pcVar4,8);
      if (((iVar6 != 0) || (*pcVar4 == ',')) || (*pcVar4 == '\0')) {
        while (iVar6 = ossl_ctype_check((int)*pcVar4,8), iVar6 != 0) {
          pcVar4 = pcVar4 + 1;
        }
        goto LAB_00100b15;
      }
      ERR_new();
      ERR_set_debug("crypto/property/property_parse.c",0x99,"parse_hex");
      ERR_set_error(0x37,0x66,"HERE-->%s",pcVar5);
      goto LAB_001008d2;
    }
    iVar6 = ossl_isdigit();
    if (iVar6 != 0) {
      pcVar5 = pcVar5 + 1;
      lVar7 = 0;
      pcVar4 = pcVar5;
      local_48 = pcVar5;
LAB_00100a80:
      if ((1 < (byte)(*pcVar4 - 0x38U)) && (iVar6 = ossl_isdigit(), iVar6 != 0)) {
        cVar2 = *pcVar4;
        if (lVar7 <= 0x7fffffffffffffff - (long)(cVar2 + -0x30) >> 3) goto code_r0x00100ab6;
        ERR_new();
        pcVar4 = "parse_oct";
        uVar3 = 0xaf;
LAB_00100b41:
        ERR_set_debug("crypto/property/property_parse.c",uVar3,pcVar4);
        ERR_set_error(0x37,0x6c,"Property %s overflows",pcVar5);
        goto LAB_001008d2;
      }
      ERR_new();
      uVar3 = 0xaa;
      goto LAB_00100bc9;
    }
    iVar6 = (int)*pcVar5;
switchD_0010088c_caseD_1:
    iVar6 = ossl_isdigit(iVar6);
    if (iVar6 != 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar3 = parse_number(param_2,param_3);
        return uVar3;
      }
      goto LAB_00100c9b;
    }
    iVar6 = ossl_ctype_check((int)*pcVar5,3);
    if (iVar6 != 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar3 = parse_unquoted(param_1,param_2,param_3,param_4);
        return uVar3;
      }
      goto LAB_00100c9b;
    }
    goto LAB_001008d2;
  }
  pcVar4 = local_48;
  if ((int)uVar3 == 0) {
LAB_001008d2:
    uVar3 = 0;
  }
  else {
LAB_00100925:
    *param_2 = (long)pcVar4;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
LAB_00100c9b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x00100ab6:
  pcVar1 = pcVar4 + 1;
  pcVar4 = pcVar4 + 1;
  lVar7 = (long)(cVar2 + -0x30) + lVar7 * 8;
  iVar6 = ossl_isdigit((int)*pcVar1);
  if ((iVar6 == 0) || ((byte)(*pcVar4 - 0x38U) < 2)) goto LAB_00100ad5;
  goto LAB_00100a80;
LAB_00100ad5:
  iVar6 = ossl_ctype_check((int)*pcVar4,8);
  if ((iVar6 == 0) && ((*pcVar4 != '\0' && (*pcVar4 != ',')))) {
    ERR_new();
    uVar3 = 0xb7;
LAB_00100bc9:
    ERR_set_debug("crypto/property/property_parse.c",uVar3,"parse_oct");
    ERR_set_error(0x37,0x68,"HERE-->%s",pcVar5);
    goto LAB_001008d2;
  }
  while (iVar6 = ossl_ctype_check((int)*pcVar4,8), iVar6 != 0) {
    pcVar4 = pcVar4 + 1;
  }
LAB_00100b15:
  *(undefined4 *)(param_3 + 4) = 1;
  uVar3 = 1;
  *(long *)(param_3 + 0x10) = lVar7;
  goto LAB_00100925;
}



void put_str(char *param_1,long *param_2,ulong *param_3,long *param_4)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  int iVar4;
  size_t sVar5;
  long lVar6;
  size_t sVar7;
  char cVar8;
  void *__dest;
  char *pcVar9;
  
  sVar5 = strlen(param_1);
  lVar6 = sVar5 + *param_4;
  *param_4 = lVar6;
  if (sVar5 == 0) {
    if (*param_3 != 0) {
      return;
    }
LAB_00100dff:
    *param_4 = lVar6;
    return;
  }
  cVar8 = '\0';
  pcVar9 = param_1;
  do {
    iVar4 = ossl_ctype_check((int)*pcVar9,7);
    if (((iVar4 == 0) && (cVar3 = *pcVar9, cVar3 != '_')) && (cVar3 != '.')) {
      if (cVar8 == '\0') {
        cVar8 = '\'';
      }
      if (cVar3 == '\'') {
        cVar8 = '\"';
      }
    }
    pcVar9 = pcVar9 + 1;
  } while (pcVar9 != param_1 + sVar5);
  uVar1 = *param_3;
  if (uVar1 == 0) {
    lVar6 = *param_4 + (ulong)(cVar8 != '\0') * 2;
    goto LAB_00100dff;
  }
  sVar7 = sVar5;
  if (cVar8 == '\0') {
    if (uVar1 < sVar5 + 1) {
      if (uVar1 - 1 == 0) goto LAB_00100e21;
      __dest = (void *)*param_2;
      sVar7 = uVar1 - 1;
    }
    else {
      __dest = (void *)*param_2;
    }
LAB_00100d4b:
    memcpy(__dest,param_1,sVar7);
    *param_2 = *param_2 + sVar7;
    *param_3 = *param_3 - sVar7;
    if (cVar8 != '\0') goto LAB_00100dd9;
  }
  else {
    cVar3 = '\0';
    if (uVar1 != 1) {
      cVar3 = cVar8;
    }
    *(char *)*param_2 = cVar3;
    __dest = (void *)(*param_2 + 1);
    *param_2 = (long)__dest;
    *param_4 = *param_4 + 1;
    uVar2 = *param_3;
    uVar1 = uVar2 - 1;
    *param_3 = uVar1;
    if ((sVar5 + 2 <= uVar1) || (sVar7 = uVar2 - 2, sVar7 != 0)) goto LAB_00100d4b;
LAB_00100dd9:
    if (*param_3 == 0) {
      *param_4 = *param_4 + 1;
    }
    else {
      if (*param_3 == 1) {
        cVar8 = '\0';
      }
      *(char *)*param_2 = cVar8;
      *param_2 = *param_2 + 1;
      *param_4 = *param_4 + 1;
      *param_3 = *param_3 - 1;
    }
  }
  if (sVar5 <= sVar7) {
    return;
  }
  if (*param_3 != 1) {
    return;
  }
LAB_00100e21:
  *(undefined1 *)*param_2 = 0;
  *param_2 = *param_2 + 1;
  *param_3 = *param_3 - 1;
  return;
}



undefined8 ossl_parse_property(undefined8 param_1,char *param_2)

{
  int iVar1;
  long lVar2;
  int *ptr;
  undefined8 uVar3;
  char *pcVar4;
  long in_FS_OFFSET;
  char *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = param_2;
  if ((param_2 == (char *)0x0) || (lVar2 = OPENSSL_sk_new(0x100000), lVar2 == 0)) {
    uVar3 = 0;
  }
  else {
    while (iVar1 = ossl_ctype_check((int)*param_2,8), iVar1 != 0) {
      param_2 = param_2 + 1;
    }
    local_48 = param_2;
    if (*param_2 == '\0') {
LAB_00100fad:
      ptr = (int *)0x0;
      uVar3 = stack_to_property_list(param_1,lVar2);
    }
    else {
      while (local_48 = param_2,
            ptr = (int *)CRYPTO_malloc(0x18,"crypto/property/property_parse.c",0x169),
            ptr != (int *)0x0) {
        *(byte *)(ptr + 3) = *(byte *)(ptr + 3) & 0xfe;
        ptr[4] = 0;
        ptr[5] = 0;
        iVar1 = parse_name_constprop_0(param_1,&local_48,ptr);
        if (iVar1 == 0) break;
        ptr[2] = 0;
        if (*ptr == 0) {
          ERR_new();
          ERR_set_debug("crypto/property/property_parse.c",0x172,"ossl_parse_property");
          ERR_set_error(0x37,0x6c,"Unknown name HERE-->%s",param_2);
          uVar3 = 0;
          goto LAB_00100fba;
        }
        pcVar4 = local_48;
        if (*local_48 == '=') {
          do {
            pcVar4 = pcVar4 + 1;
            iVar1 = ossl_ctype_check((int)*pcVar4,8);
          } while (iVar1 != 0);
          local_48 = pcVar4;
          iVar1 = parse_value(param_1,&local_48,ptr,1);
          if (iVar1 == 0) {
            ERR_new();
            ERR_set_debug("crypto/property/property_parse.c",0x178,"ossl_parse_property");
            ERR_set_error(0x37,0x6b,"HERE-->%s",param_2);
            break;
          }
        }
        else {
          ptr[1] = 0;
          ptr[4] = 1;
        }
        iVar1 = OPENSSL_sk_push(lVar2,ptr);
        pcVar4 = local_48;
        if (iVar1 == 0) break;
        param_2 = local_48;
        if (*local_48 != ',') {
          if (*local_48 == '\0') goto LAB_00100fad;
          ERR_new();
          ptr = (int *)0x0;
          ERR_set_debug("crypto/property/property_parse.c",0x188,"ossl_parse_property");
          ERR_set_error(0x37,0x6e,"HERE-->%s",pcVar4);
          uVar3 = 0;
          goto LAB_00100fba;
        }
        do {
          pcVar4 = param_2 + 1;
          param_2 = param_2 + 1;
          iVar1 = ossl_ctype_check((int)*pcVar4,8);
        } while (iVar1 != 0);
      }
      uVar3 = 0;
    }
LAB_00100fba:
    CRYPTO_free(ptr);
    OPENSSL_sk_pop_free(lVar2,pd_free);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



undefined8 ossl_parse_query(undefined8 param_1,char *param_2,undefined4 param_3)

{
  char *pcVar1;
  int iVar2;
  long lVar3;
  void *ptr;
  undefined8 uVar4;
  byte bVar5;
  char *pcVar6;
  char *local_40 [2];
  
  if ((param_2 == (char *)0x0) ||
     (local_40[0] = param_2, lVar3 = OPENSSL_sk_new(0x100000), lVar3 == 0)) {
    return 0;
  }
  while (iVar2 = ossl_ctype_check((int)*param_2,8), iVar2 != 0) {
    param_2 = param_2 + 1;
  }
  pcVar6 = param_2;
  local_40[0] = param_2;
  if (*param_2 == '\0') {
LAB_001012ab:
    ptr = (void *)0x0;
    uVar4 = stack_to_property_list(param_1,lVar3);
  }
  else {
    while (local_40[0] = pcVar6, ptr = CRYPTO_malloc(0x18,"crypto/property/property_parse.c",0x1a2),
          ptr != (void *)0x0) {
      *(undefined8 *)((long)ptr + 0x10) = 0;
      pcVar6 = local_40[0];
      if (*local_40[0] == '-') {
        do {
          pcVar1 = pcVar6 + 1;
          pcVar6 = pcVar6 + 1;
          iVar2 = ossl_ctype_check((int)*pcVar1,8);
        } while (iVar2 != 0);
        *(byte *)((long)ptr + 0xc) = *(byte *)((long)ptr + 0xc) & 0xfe;
        *(undefined4 *)((long)ptr + 8) = 2;
        local_40[0] = pcVar6;
        iVar2 = parse_name_constprop_0(param_1,local_40,ptr);
        if (iVar2 == 0) break;
      }
      else {
        if (*local_40[0] == '?') {
          do {
            pcVar1 = pcVar6 + 1;
            pcVar6 = pcVar6 + 1;
            iVar2 = ossl_ctype_check((int)*pcVar1,8);
          } while (iVar2 != 0);
          bVar5 = 1;
          local_40[0] = pcVar6;
        }
        else {
          bVar5 = 0;
        }
        *(byte *)((long)ptr + 0xc) = *(byte *)((long)ptr + 0xc) & 0xfe | bVar5;
        iVar2 = parse_name_constprop_0(param_1,local_40,ptr);
        if (iVar2 == 0) break;
        pcVar6 = local_40[0];
        if (*local_40[0] == '=') {
          do {
            pcVar1 = pcVar6 + 1;
            pcVar6 = pcVar6 + 1;
            iVar2 = ossl_ctype_check((int)*pcVar1,8);
          } while (iVar2 != 0);
        }
        else {
          pcVar6 = local_40[0] + 2;
          iVar2 = OPENSSL_strncasecmp(local_40[0],&_LC7,2);
          if (iVar2 != 0) {
            *(undefined8 *)((long)ptr + 4) = 0;
            *(undefined4 *)((long)ptr + 0x10) = 1;
            goto LAB_00101280;
          }
          while (iVar2 = ossl_ctype_check((int)*pcVar6,8), iVar2 != 0) {
            pcVar6 = pcVar6 + 1;
          }
          iVar2 = 1;
        }
        *(int *)((long)ptr + 8) = iVar2;
        local_40[0] = pcVar6;
        iVar2 = parse_value(param_1,local_40,ptr,param_3);
        if (iVar2 == 0) {
          *(undefined4 *)((long)ptr + 4) = 2;
        }
      }
LAB_00101280:
      iVar2 = OPENSSL_sk_push(lVar3,ptr);
      pcVar6 = local_40[0];
      if (iVar2 == 0) break;
      if (*local_40[0] != ',') {
        if (*local_40[0] == '\0') goto LAB_001012ab;
        ERR_new();
        ERR_set_debug("crypto/property/property_parse.c",0x1c7,"ossl_parse_query");
        ptr = (void *)0x0;
        ERR_set_error(0x37,0x6e,"HERE-->%s",pcVar6);
        uVar4 = 0;
        goto LAB_001012b8;
      }
      do {
        pcVar1 = pcVar6 + 1;
        pcVar6 = pcVar6 + 1;
        iVar2 = ossl_ctype_check((int)*pcVar1,8);
      } while (iVar2 != 0);
    }
    uVar4 = 0;
  }
LAB_001012b8:
  CRYPTO_free(ptr);
  OPENSSL_sk_pop_free(lVar3,pd_free);
  return uVar4;
}



int ossl_property_match_count(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar3 = *param_1;
  if (iVar3 < 1) {
    return 0;
  }
  iVar9 = 0;
  iVar7 = 0;
  iVar8 = 0;
  do {
    while( true ) {
      piVar1 = param_1 + (long)iVar7 * 6 + 2;
      iVar4 = piVar1[2];
      if (iVar4 != 2) break;
LAB_001014a2:
      iVar7 = iVar7 + 1;
      if (iVar3 <= iVar7) {
        return iVar9;
      }
    }
    if (*param_2 <= iVar8) {
LAB_001014d7:
      if (piVar1[1] == 2) {
        if (iVar4 == 1) goto LAB_001014e4;
      }
      else if (piVar1[1] == 0) {
        if (iVar4 == 0) {
          if (piVar1[4] == 2) {
LAB_001014e4:
            iVar9 = iVar9 + 1;
            goto LAB_001014a2;
          }
        }
        else {
          if (iVar4 != 1) goto LAB_001014e4;
          if (piVar1[4] != 2) {
            iVar9 = iVar9 + 1;
            goto LAB_001014a2;
          }
        }
      }
      if ((*(byte *)(piVar1 + 3) & 1) == 0) {
        return -1;
      }
      goto LAB_001014a2;
    }
    piVar2 = param_2 + (long)iVar8 * 6 + 2;
    iVar5 = *piVar2;
    iVar6 = *piVar1;
    if (iVar6 == iVar5 || iVar6 < iVar5) {
      if (iVar6 != iVar5) goto LAB_001014d7;
      if ((piVar2[1] == piVar1[1]) && (*(long *)(piVar1 + 4) == *(long *)(piVar2 + 4))) {
        if (iVar4 == 0) goto LAB_0010155e;
LAB_001014ff:
        if ((*(byte *)(piVar1 + 3) & 1) == 0) {
          return -1;
        }
      }
      else {
        if (iVar4 != 1) goto LAB_001014ff;
LAB_0010155e:
        iVar9 = iVar9 + 1;
      }
      iVar7 = iVar7 + 1;
    }
    iVar8 = iVar8 + 1;
    if (iVar3 <= iVar7) {
      return iVar9;
    }
  } while( true );
}



void ossl_property_free(void *param_1)

{
  CRYPTO_free(param_1);
  return;
}



int * ossl_property_merge(int *param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int *piVar7;
  long lVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  iVar12 = 0x20;
  if (*param_2 + *param_1 != 0) {
    iVar12 = (*param_2 + *param_1 + -1) * 0x18 + 0x20;
  }
  piVar7 = (int *)CRYPTO_malloc(iVar12,"crypto/property/property_parse.c",0x224);
  if (piVar7 == (int *)0x0) {
    return (int *)0x0;
  }
  *(byte *)(piVar7 + 1) = *(byte *)(piVar7 + 1) & 0xfe;
  iVar12 = *param_1;
  iVar14 = 0;
  iVar2 = *param_2;
  iVar11 = 0;
  iVar13 = 0;
  piVar9 = piVar7 + 2;
  do {
    if (iVar13 < iVar12) {
      lVar8 = (long)iVar13;
      if (iVar11 < iVar2) {
        piVar10 = param_2 + (long)iVar11 * 6 + 2;
        iVar3 = *piVar10;
        iVar4 = param_1[lVar8 * 6 + 2];
        if (iVar4 != iVar3 && iVar3 <= iVar4) {
          iVar11 = iVar11 + 1;
          goto LAB_00101617;
        }
        iVar11 = iVar11 + (uint)(iVar4 == iVar3);
      }
      iVar13 = iVar13 + 1;
      piVar10 = param_1 + lVar8 * 6 + 2;
    }
    else {
      if (iVar2 <= iVar11) {
        *piVar7 = iVar14;
        return piVar7;
      }
      lVar8 = (long)iVar11;
      iVar11 = iVar11 + 1;
      piVar10 = param_2 + lVar8 * 6 + 2;
    }
LAB_00101617:
    uVar5 = *(undefined8 *)(piVar10 + 4);
    uVar6 = *(undefined8 *)(piVar10 + 2);
    iVar14 = iVar14 + 1;
    bVar1 = *(byte *)(piVar10 + 3);
    *(undefined8 *)piVar9 = *(undefined8 *)piVar10;
    *(undefined8 *)(piVar9 + 2) = uVar6;
    *(undefined8 *)(piVar9 + 4) = uVar5;
    *(byte *)(piVar7 + 1) = *(byte *)(piVar7 + 1) & 0xfe | (bVar1 | *(byte *)(piVar7 + 1)) & 1;
    piVar9 = piVar9 + 6;
  } while( true );
}



bool ossl_property_parse_init(undefined8 param_1)

{
  int iVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &predefined_names_0;
  do {
    iVar1 = ossl_property_name(param_1,*ppuVar2,1);
    if (iVar1 == 0) {
      return false;
    }
    ppuVar2 = ppuVar2 + 1;
  } while ((NoteGnuProperty_4 *)ppuVar2 != &NoteGnuProperty_4_00101dd0);
  iVar1 = ossl_property_value(param_1,&_LC8,1);
  if (iVar1 != 1) {
    return false;
  }
  iVar1 = ossl_property_value(param_1,&_LC9,1);
  return iVar1 == 2;
}



long ossl_property_list_to_string(undefined8 param_1,int *param_2,byte *param_3,ulong param_4)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  byte *pbVar4;
  byte bVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  int *piVar11;
  long in_FS_OFFSET;
  ulong local_58;
  byte *local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  local_58 = param_4;
  local_50 = param_3;
  if (param_2 == (int *)0x0) {
    if (param_4 != 0) {
      *param_3 = 0;
    }
    lVar6 = 1;
  }
  else {
    iVar8 = *param_2;
    if ((iVar8 == 0) || (piVar11 = param_2 + (long)(iVar8 + -1) * 6 + 2, iVar8 < 1)) {
      lVar6 = 1;
    }
    else {
      lVar6 = 0;
      iVar8 = 0;
LAB_001017a8:
      do {
        iVar9 = *piVar11;
        if (iVar9 == 0) goto LAB_0010188d;
        if (lVar6 == 0) {
          bVar5 = *(byte *)(piVar11 + 3);
joined_r0x001018f8:
          if ((bVar5 & 1) == 0) {
            bVar5 = bVar5 & 1;
            if (piVar11[2] == 2) {
              local_48 = local_48 + 1;
              if (local_58 == 0) {
                iVar9 = *piVar11;
              }
              else {
                if (local_58 != 1) {
                  bVar5 = 0x2d;
                }
                local_58 = local_58 - 1;
                *local_50 = bVar5;
                iVar9 = *piVar11;
                local_50 = local_50 + 1;
              }
            }
            else {
              iVar9 = *piVar11;
            }
          }
          else if (local_58 == 0) {
            iVar9 = *piVar11;
LAB_00101b63:
            local_48 = local_48 + 1;
          }
          else {
            bVar5 = 0;
            if (local_58 != 1) {
              bVar5 = 0x3f;
            }
            local_48 = local_48 + 1;
            local_58 = local_58 - 1;
            *local_50 = bVar5;
            iVar9 = *piVar11;
            local_50 = local_50 + 1;
          }
        }
        else {
          local_48 = lVar6 + 1;
          if (local_58 != 0) {
            bVar5 = 0;
            if (local_58 != 1) {
              bVar5 = 0x2c;
            }
            local_58 = local_58 - 1;
            *local_50 = bVar5;
            bVar5 = *(byte *)(piVar11 + 3);
            local_50 = local_50 + 1;
            goto joined_r0x001018f8;
          }
          if ((*(byte *)(piVar11 + 3) & 1) != 0) goto LAB_00101b63;
          if (piVar11[2] == 2) {
            local_48 = lVar6 + 2;
          }
        }
        lVar6 = ossl_property_name_str(param_1,iVar9);
        if (lVar6 == 0) {
LAB_001019a6:
          lVar6 = 0;
          goto LAB_001019a8;
        }
        put_str(lVar6,&local_50,&local_58,&local_48);
        if (piVar11[2] == 0) {
          if (local_58 != 0) {
LAB_00101963:
            bVar5 = 0;
            if (local_58 != 1) {
              bVar5 = 0x3d;
            }
            local_58 = local_58 - 1;
            *local_50 = bVar5;
            local_50 = local_50 + 1;
          }
        }
        else {
          lVar6 = local_48;
          if (piVar11[2] != 1) goto LAB_0010188d;
          local_48 = local_48 + 1;
          if (local_58 != 0) {
            if (local_58 != 1) {
              *local_50 = 0x21;
              local_50 = local_50 + 1;
              local_58 = local_58 - 1;
              goto LAB_00101963;
            }
            *local_50 = 0;
            local_50 = local_50 + 1;
            local_58 = 0;
          }
        }
        pbVar4 = local_50;
        uVar3 = local_58;
        local_48 = local_48 + 1;
        if (piVar11[1] == 0) {
          lVar6 = ossl_property_value_str(param_1,piVar11[4]);
          if (lVar6 == 0) goto LAB_001019a6;
          put_str(lVar6,&local_50,&local_58,&local_48);
          lVar6 = local_48;
        }
        else {
          if (piVar11[1] != 1) goto LAB_001019a6;
          uVar1 = *(ulong *)(piVar11 + 4);
          uVar10 = 1;
          uVar7 = uVar1;
          if ((long)uVar1 < 0) {
            uVar7 = -uVar1;
            uVar10 = 2;
          }
          if (9 < (long)uVar7) {
            do {
              uVar10 = uVar10 + 1;
              bVar2 = 99 < (long)uVar7;
              uVar7 = uVar7 / 10;
            } while (bVar2);
          }
          lVar6 = local_48 + uVar10;
          local_48 = lVar6;
          if (local_58 != 0) {
            BIO_snprintf((char *)local_50,local_58,"%lld",uVar1);
            if (uVar3 < uVar10) {
              local_50 = pbVar4 + uVar3;
              iVar8 = iVar8 + 1;
              piVar11 = piVar11 + -6;
              local_58 = 0;
              if (*param_2 <= iVar8) break;
            }
            else {
              local_50 = pbVar4 + uVar10;
              local_58 = uVar3 - uVar10;
              iVar8 = iVar8 + 1;
              piVar11 = piVar11 + -6;
              if (*param_2 <= iVar8) break;
            }
            goto LAB_001017a8;
          }
        }
LAB_0010188d:
        iVar8 = iVar8 + 1;
        piVar11 = piVar11 + -6;
      } while (iVar8 < *param_2);
      lVar6 = lVar6 + 1;
    }
    if (local_58 != 0) {
      *local_50 = 0;
    }
  }
LAB_001019a8:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


