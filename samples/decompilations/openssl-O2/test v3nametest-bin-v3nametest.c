
undefined8 test_GENERAL_NAME_cmp(void)

{
  int iVar1;
  undefined8 *ptr;
  undefined8 *ptr_00;
  GENERAL_NAME *pGVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  long in_FS_OFFSET;
  undefined8 *local_50;
  uchar *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ptr = (undefined8 *)CRYPTO_malloc(0xd8,"test/v3nametest.c",0x296);
  ptr_00 = (undefined8 *)CRYPTO_malloc(0xd8,"test/v3nametest.c",0x298);
  iVar1 = test_ptr("test/v3nametest.c",0x29c,"namesa",ptr);
  if ((iVar1 == 0) || (iVar1 = test_ptr("test/v3nametest.c",0x29c,"namesb",ptr_00), iVar1 == 0)) {
LAB_00100072:
    uVar7 = 0;
  }
  else {
    puVar8 = gennames;
    puVar3 = ptr;
    puVar5 = ptr_00;
    do {
      local_48 = puVar8;
      pGVar2 = d2i_GENERAL_NAME((GENERAL_NAME **)0x0,&local_48,*(long *)(puVar8 + 0x18));
      lVar4 = *(long *)(puVar8 + 0x18);
      *puVar3 = pGVar2;
      local_48 = puVar8;
      pGVar2 = d2i_GENERAL_NAME((GENERAL_NAME **)0x0,&local_48,lVar4);
      uVar7 = *puVar3;
      *puVar5 = pGVar2;
      iVar1 = test_ptr("test/v3nametest.c",0x2a9,"namesa[i]",uVar7);
      if ((iVar1 == 0) ||
         (iVar1 = test_ptr("test/v3nametest.c",0x2a9,"namesb[i]",*puVar5), iVar1 == 0))
      goto LAB_00100072;
      puVar8 = puVar8 + 0x20;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    } while (puVar8 != "test/v3nametest.c");
    lVar4 = 0;
    local_50 = ptr;
    do {
      lVar6 = 0;
      do {
        if (lVar4 == lVar6) {
          iVar1 = GENERAL_NAME_cmp((GENERAL_NAME *)*local_50,(GENERAL_NAME *)ptr_00[lVar6]);
          iVar1 = test_int_eq("test/v3nametest.c",0x2b1,"GENERAL_NAME_cmp(namesa[i], namesb[j])",
                              &_LC5,iVar1);
        }
        else {
          iVar1 = GENERAL_NAME_cmp((GENERAL_NAME *)*local_50,(GENERAL_NAME *)ptr_00[lVar6]);
          iVar1 = test_int_ne("test/v3nametest.c",0x2b4,"GENERAL_NAME_cmp(namesa[i], namesb[j])",
                              &_LC5,iVar1,0);
        }
        if (iVar1 == 0) goto LAB_00100072;
        lVar6 = lVar6 + 1;
      } while (lVar6 != 0x1b);
      lVar4 = lVar4 + 1;
      local_50 = local_50 + 1;
    } while (lVar4 != 0x1b);
    uVar7 = 1;
  }
  lVar4 = 0;
  if (ptr != (undefined8 *)0x0) goto LAB_00100091;
  if (ptr_00 == (undefined8 *)0x0) {
    do {
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0x1b);
  }
  else {
    do {
      puVar3 = ptr_00 + lVar4;
      lVar4 = lVar4 + 1;
      GENERAL_NAME_free((GENERAL_NAME *)*puVar3);
      if (lVar4 == 0x1b) goto LAB_001000b7;
      if (ptr == (undefined8 *)0x0) goto LAB_0010026f;
LAB_00100091:
      GENERAL_NAME_free((GENERAL_NAME *)ptr[lVar4]);
    } while (ptr_00 != (undefined8 *)0x0);
    while (lVar4 = lVar4 + 1, lVar4 != 0x1b) {
      GENERAL_NAME_free((GENERAL_NAME *)ptr[lVar4]);
    }
  }
LAB_001000b7:
  CRYPTO_free(ptr);
  CRYPTO_free(ptr_00);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0010026f:
  do {
    puVar3 = ptr_00 + lVar4;
    lVar4 = lVar4 + 1;
    GENERAL_NAME_free((GENERAL_NAME *)*puVar3);
  } while (lVar4 != 0x1b);
  goto LAB_001000b7;
}



uint set_altname(X509 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  void *data;
  uint uVar2;
  int iVar3;
  GENERAL_NAMES *a;
  ASN1_IA5STRING *str;
  GENERAL_NAME *a_00;
  long in_FS_OFFSET;
  uint local_88;
  int *local_80;
  int local_68 [2];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = (int *)&stack0x00000008;
  local_88 = 8;
  local_60 = param_2;
  local_58 = param_3;
  local_50 = param_4;
  local_48 = param_5;
  local_40 = param_6;
  a = (GENERAL_NAMES *)OPENSSL_sk_new_null();
  if (a == (GENERAL_NAMES *)0x0) {
LAB_00100415:
    str = (ASN1_IA5STRING *)0x0;
    a_00 = (GENERAL_NAME *)0x0;
    uVar2 = 0;
  }
  else {
    do {
      if (local_88 < 0x30) {
        uVar2 = local_88 + 8;
        iVar3 = *(int *)((long)local_68 + (ulong)local_88);
        if (iVar3 == 0) goto LAB_00100460;
        if (0x2f < uVar2) goto LAB_001003f8;
        local_88 = local_88 + 0x10;
        data = *(void **)((long)local_68 + (ulong)uVar2);
        a_00 = GENERAL_NAME_new();
      }
      else {
        iVar3 = *local_80;
        local_80 = local_80 + 2;
        uVar2 = local_88;
        if (iVar3 == 0) {
LAB_00100460:
          iVar3 = X509_add1_ext_i2d(param_1,0x55,a,0,0);
          str = (ASN1_IA5STRING *)0x0;
          a_00 = (GENERAL_NAME *)0x0;
          uVar2 = (uint)(iVar3 != 0);
          goto LAB_0010041c;
        }
LAB_001003f8:
        local_88 = uVar2;
        data = *(void **)local_80;
        a_00 = GENERAL_NAME_new();
        local_80 = local_80 + 2;
      }
      if (a_00 == (GENERAL_NAME *)0x0) goto LAB_00100415;
      str = ASN1_IA5STRING_new();
      if (str == (ASN1_IA5STRING *)0x0) {
        uVar2 = 0;
        goto LAB_0010041c;
      }
      uVar2 = ASN1_STRING_set(str,data,-1);
      if (uVar2 == 0) goto LAB_0010041c;
      if (1 < iVar3 - 1U) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      GENERAL_NAME_set0_value(a_00,iVar3,str);
      iVar3 = OPENSSL_sk_push(a,a_00);
    } while (iVar3 != 0);
    str = (ASN1_IA5STRING *)0x0;
    uVar2 = 0;
  }
LAB_0010041c:
  ASN1_IA5STRING_free(str);
  GENERAL_NAME_free(a_00);
  GENERAL_NAMES_free(a);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void set_altname_email(undefined8 param_1,undefined8 param_2)

{
  set_altname(param_1,1,param_2,0);
  return;
}



void set_altname_dns(undefined8 param_1,undefined8 param_2)

{
  set_altname(param_1,2,param_2,0);
  return;
}



bool set_cn(X509 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
           undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  int iVar2;
  X509_NAME *name;
  uint uVar3;
  int *piVar4;
  long in_FS_OFFSET;
  bool bVar5;
  uint local_68;
  int *local_60;
  int local_48 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = (int *)&stack0x00000008;
  local_68 = 8;
  local_40 = param_2;
  local_38 = param_3;
  local_30 = param_4;
  local_28 = param_5;
  local_20 = param_6;
  name = X509_NAME_new();
  if (name != (X509_NAME *)0x0) {
    do {
      if (local_68 < 0x30) {
        uVar3 = local_68 + 8;
        iVar2 = *(int *)((long)local_48 + (ulong)local_68);
        if (iVar2 == 0) goto LAB_001005f8;
        if (0x2f < uVar3) goto LAB_001005be;
        local_68 = local_68 + 0x10;
        piVar4 = (int *)((long)local_48 + (ulong)uVar3);
      }
      else {
        iVar2 = *local_60;
        local_60 = local_60 + 2;
        uVar3 = local_68;
        if (iVar2 == 0) {
LAB_001005f8:
          iVar2 = X509_set_subject_name(param_1,name);
          bVar5 = iVar2 != 0;
          goto LAB_001005d2;
        }
LAB_001005be:
        local_68 = uVar3;
        piVar4 = local_60;
        local_60 = local_60 + 2;
      }
      iVar2 = X509_NAME_add_entry_by_NID(name,iVar2,0x1001,*(uchar **)piVar4,-1,-1,1);
    } while (iVar2 != 0);
  }
  bVar5 = false;
LAB_001005d2:
  X509_NAME_free(name);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar5;
}



void set_email_and_cn(undefined8 param_1,undefined8 param_2)

{
  set_cn(param_1,0x30,param_2,0xd,"www.example.org",0);
  return;
}



void set_email3(undefined8 param_1,undefined8 param_2)

{
  set_cn(param_1,0x30,param_2,0x30,"dummy@example.com",0);
  return;
}



void set_email2(undefined8 param_1,undefined8 param_2)

{
  set_cn(param_1,0x30,"dummy@example.com",0x30,param_2,0);
  return;
}



void set_email1(undefined8 param_1,undefined8 param_2)

{
  set_cn(param_1,0x30,param_2,0);
  return;
}



void set_cn_and_email(undefined8 param_1,undefined8 param_2)

{
  set_cn(param_1,0xd,param_2,0x30,"dummy@example.com",0);
  return;
}



void set_cn3(undefined8 param_1,undefined8 param_2)

{
  set_cn(param_1,0xd,param_2,0xd,"dummy value",0);
  return;
}



void set_cn2(undefined8 param_1,undefined8 param_2)

{
  set_cn(param_1,0xd,"dummy value",0xd,param_2,0);
  return;
}



void set_cn1(undefined8 param_1,undefined8 param_2)

{
  set_cn(param_1,0xd,param_2,0);
  return;
}



undefined8
check_message(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long in_FS_OFFSET;
  char acStack_428 [1032];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 == -1) {
LAB_00100809:
    uVar3 = 1;
  }
  else {
    pcVar2 = "does not match";
    if (param_4 != 0) {
      pcVar2 = "matches";
    }
    puVar4 = exceptions;
    BIO_snprintf(acStack_428,0x400,"%s: %s: [%s] %s [%s]",*(undefined8 *)(param_1 + 8),param_2,
                 param_3,pcVar2,param_5);
    pcVar2 = "set CN: host: [*.example.com] matches [a.example.com]";
    do {
      iVar1 = strcmp(acStack_428,pcVar2);
      if (iVar1 == 0) goto LAB_00100809;
      pcVar2 = *(char **)(puVar4 + 8);
      puVar4 = puVar4 + 8;
    } while (pcVar2 != (char *)0x0);
    test_error("test/v3nametest.c",0x114,&_LC15,acStack_428);
    uVar3 = 0;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint call_run_cert(int param_1)

{
  long lVar1;
  undefined8 *puVar2;
  char *__s;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  size_t sVar7;
  void *__dest;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  X509 *local_68;
  
  lVar1 = (long)param_1 * 0x18;
  puVar2 = (undefined8 *)(name_fns + lVar1);
  ppuVar13 = &names;
  uVar10 = 0;
  test_info("test/v3nametest.c",0x15e,&_LC15,*(undefined8 *)(name_fns + lVar1 + 8));
  do {
    local_68 = X509_new();
    iVar4 = test_ptr("test/v3nametest.c",0xff,"crt = X509_new()",local_68);
    if (iVar4 == 0) {
      local_68 = (X509 *)0x0;
    }
    else {
      iVar4 = X509_set_version(local_68,2);
      iVar4 = test_true("test/v3nametest.c",0x101,"X509_set_version(crt, X509_VERSION_3)",iVar4 != 0
                       );
      if (iVar4 == 0) {
        X509_free(local_68);
        local_68 = (X509 *)0x0;
      }
    }
    iVar4 = test_ptr("test/v3nametest.c",0x160,"crt = make_cert()",local_68);
    if (iVar4 == 0) {
LAB_0010093b:
      uVar10 = 1;
    }
    else {
      iVar4 = (*(code *)*puVar2)(local_68,*ppuVar13);
      iVar4 = test_true("test/v3nametest.c",0x161,"pfn->fn(crt, *pname)",iVar4 != 0);
      if (iVar4 == 0) goto LAB_0010093b;
      __s = *ppuVar13;
      bVar3 = false;
      ppuVar11 = &names;
      puVar12 = &_LC16;
      do {
        iVar4 = OPENSSL_strcasecmp(__s,puVar12);
        sVar7 = strlen(*ppuVar11);
        __dest = CRYPTO_malloc((int)(sVar7 + 1),"test/v3nametest.c",0x121);
        iVar5 = test_ptr("test/v3nametest.c",0x124,&_LC21,__dest);
        if (iVar5 == 0) goto LAB_0010093b;
        memcpy(__dest,*ppuVar11,sVar7 + 1);
        iVar5 = X509_check_host(local_68,__dest,sVar7,0,0);
        iVar6 = test_int_ge("test/v3nametest.c",0x129,
                            "ret = X509_check_host(crt, name, namelen, 0, NULL)",&_LC5,iVar5,0);
        if (iVar6 == 0) {
          iVar5 = -1;
          bVar3 = true;
        }
        else if (*(int *)(name_fns + lVar1 + 0x10) == 0) {
          iVar5 = ((iVar5 == 1) - 1) + (uint)(iVar5 == 1);
        }
        else if ((iVar5 == 1) && (iVar4 != 0)) {
          iVar5 = 1;
        }
        else {
          iVar5 = -(uint)(iVar5 != 0 || iVar4 != 0);
        }
        iVar5 = check_message(puVar2,&_LC23,__s,iVar5,*ppuVar11);
        iVar5 = test_true("test/v3nametest.c",0x133,
                          "check_message(fn, \"host\", nameincert, match, *pname)",iVar5 != 0);
        if (iVar5 == 0) {
          bVar3 = true;
        }
        iVar5 = X509_check_host(local_68,__dest,sVar7,2,0);
        iVar6 = test_int_ge("test/v3nametest.c",0x137,
                            "ret = X509_check_host(crt, name, namelen, X509_CHECK_FLAG_NO_WILDCARDS, NULL)"
                            ,&_LC5,iVar5,0);
        if (iVar6 == 0) {
          iVar5 = -1;
          bVar3 = true;
        }
        else if (*(int *)(name_fns + lVar1 + 0x10) == 0) {
          iVar5 = ((iVar5 == 1) - 1) + (uint)(iVar5 == 1);
        }
        else if ((iVar5 == 1) && (iVar4 != 0)) {
          iVar5 = 1;
        }
        else {
          iVar5 = -(uint)(iVar5 != 0 || iVar4 != 0);
        }
        iVar5 = check_message(puVar2,"host-no-wildcards",__s,iVar5,*ppuVar11);
        iVar5 = test_true("test/v3nametest.c",0x142,
                          "check_message(fn, \"host-no-wildcards\", nameincert, match, *pname)",
                          iVar5 != 0);
        if (iVar5 == 0) {
          bVar3 = true;
        }
        iVar5 = X509_check_email(local_68,__dest,sVar7,0);
        if (*(int *)(name_fns + lVar1 + 0x14) == 0) {
          uVar9 = -(uint)(iVar5 == 0) | 1;
        }
        else if ((iVar5 == 0) || (uVar9 = 1, iVar4 == 0)) {
          if (iVar5 == 0 && iVar4 == 0) {
            pcVar8 = strchr(__s,0x40);
            uVar9 = -(uint)(pcVar8 == (char *)0x0);
          }
          else {
            uVar9 = 0xffffffff;
          }
        }
        iVar4 = check_message(puVar2,"email",__s,uVar9);
        iVar4 = test_true("test/v3nametest.c",0x14f,
                          "check_message(fn, \"email\", nameincert, match, *pname)",iVar4 != 0);
        if (iVar4 == 0) {
          bVar3 = true;
        }
        ppuVar11 = ppuVar11 + 1;
        CRYPTO_free(__dest);
        puVar12 = *ppuVar11;
      } while (puVar12 != (undefined *)0x0);
      if (bVar3) goto LAB_0010093b;
    }
    ppuVar13 = ppuVar13 + 1;
    X509_free(local_68);
    if (*ppuVar13 == (undefined *)0x0) {
      return uVar10 ^ 1;
    }
  } while( true );
}



undefined8 setup_tests(void)

{
  add_all_tests("call_run_cert",call_run_cert,10,1);
  add_test("test_GENERAL_NAME_cmp",0x100000);
  return 1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void set_altname_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


