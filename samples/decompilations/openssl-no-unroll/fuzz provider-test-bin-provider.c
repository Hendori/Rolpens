
void collect_EVP_MD(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = OPENSSL_sk_push(param_2,param_1);
  if (iVar1 < 1) {
    return;
  }
  EVP_MD_up_ref(param_1);
  return;
}



void cmp_EVP_MD(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char *__s2;
  char *__s1;
  
  uVar1 = EVP_MD_get0_provider(*param_2);
  __s2 = (char *)OSSL_PROVIDER_get0_name(uVar1);
  uVar1 = EVP_MD_get0_provider(*param_1);
  __s1 = (char *)OSSL_PROVIDER_get0_name(uVar1);
  strcmp(__s1,__s2);
  return;
}



void collect_EVP_KDF(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = OPENSSL_sk_push(param_2,param_1);
  if (iVar1 < 1) {
    return;
  }
  EVP_KDF_up_ref(param_1);
  return;
}



void cmp_EVP_KDF(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char *__s2;
  char *__s1;
  
  uVar1 = EVP_KDF_get0_provider(*param_2);
  __s2 = (char *)OSSL_PROVIDER_get0_name(uVar1);
  uVar1 = EVP_KDF_get0_provider(*param_1);
  __s1 = (char *)OSSL_PROVIDER_get0_name(uVar1);
  strcmp(__s1,__s2);
  return;
}



void collect_EVP_CIPHER(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = OPENSSL_sk_push(param_2,param_1);
  if (iVar1 < 1) {
    return;
  }
  EVP_CIPHER_up_ref(param_1);
  return;
}



void cmp_EVP_CIPHER(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char *__s2;
  char *__s1;
  
  uVar1 = EVP_CIPHER_get0_provider(*param_2);
  __s2 = (char *)OSSL_PROVIDER_get0_name(uVar1);
  uVar1 = EVP_CIPHER_get0_provider(*param_1);
  __s1 = (char *)OSSL_PROVIDER_get0_name(uVar1);
  strcmp(__s1,__s2);
  return;
}



void collect_EVP_KEM(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = OPENSSL_sk_push(param_2,param_1);
  if (iVar1 < 1) {
    return;
  }
  EVP_KEM_up_ref(param_1);
  return;
}



void cmp_EVP_KEM(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char *__s2;
  char *__s1;
  
  uVar1 = EVP_KEM_get0_provider(*param_2);
  __s2 = (char *)OSSL_PROVIDER_get0_name(uVar1);
  uVar1 = EVP_KEM_get0_provider(*param_1);
  __s1 = (char *)OSSL_PROVIDER_get0_name(uVar1);
  strcmp(__s1,__s2);
  return;
}



void collect_EVP_KEYEXCH(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = OPENSSL_sk_push(param_2,param_1);
  if (iVar1 < 1) {
    return;
  }
  EVP_KEYEXCH_up_ref(param_1);
  return;
}



void cmp_EVP_KEYEXCH(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char *__s2;
  char *__s1;
  
  uVar1 = EVP_KEYEXCH_get0_provider(*param_2);
  __s2 = (char *)OSSL_PROVIDER_get0_name(uVar1);
  uVar1 = EVP_KEYEXCH_get0_provider(*param_1);
  __s1 = (char *)OSSL_PROVIDER_get0_name(uVar1);
  strcmp(__s1,__s2);
  return;
}



void collect_EVP_RAND(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = OPENSSL_sk_push(param_2,param_1);
  if (iVar1 < 1) {
    return;
  }
  EVP_RAND_up_ref(param_1);
  return;
}



void cmp_EVP_RAND(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char *__s2;
  char *__s1;
  
  uVar1 = EVP_RAND_get0_provider(*param_2);
  __s2 = (char *)OSSL_PROVIDER_get0_name(uVar1);
  uVar1 = EVP_RAND_get0_provider(*param_1);
  __s1 = (char *)OSSL_PROVIDER_get0_name(uVar1);
  strcmp(__s1,__s2);
  return;
}



void collect_EVP_MAC(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = OPENSSL_sk_push(param_2,param_1);
  if (iVar1 < 1) {
    return;
  }
  EVP_MAC_up_ref(param_1);
  return;
}



void cmp_EVP_MAC(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char *__s2;
  char *__s1;
  
  uVar1 = EVP_MAC_get0_provider(*param_2);
  __s2 = (char *)OSSL_PROVIDER_get0_name(uVar1);
  uVar1 = EVP_MAC_get0_provider(*param_1);
  __s1 = (char *)OSSL_PROVIDER_get0_name(uVar1);
  strcmp(__s1,__s2);
  return;
}



void collect_EVP_KEYMGMT(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = OPENSSL_sk_push(param_2,param_1);
  if (iVar1 < 1) {
    return;
  }
  EVP_KEYMGMT_up_ref(param_1);
  return;
}



void cmp_EVP_KEYMGMT(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char *__s2;
  char *__s1;
  
  uVar1 = EVP_KEYMGMT_get0_provider(*param_2);
  __s2 = (char *)OSSL_PROVIDER_get0_name(uVar1);
  uVar1 = EVP_KEYMGMT_get0_provider(*param_1);
  __s1 = (char *)OSSL_PROVIDER_get0_name(uVar1);
  strcmp(__s1,__s2);
  return;
}



void collect_EVP_SIGNATURE(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = OPENSSL_sk_push(param_2,param_1);
  if (iVar1 < 1) {
    return;
  }
  EVP_SIGNATURE_up_ref(param_1);
  return;
}



void cmp_EVP_SIGNATURE(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char *__s2;
  char *__s1;
  
  uVar1 = EVP_SIGNATURE_get0_provider(*param_2);
  __s2 = (char *)OSSL_PROVIDER_get0_name(uVar1);
  uVar1 = EVP_SIGNATURE_get0_provider(*param_1);
  __s1 = (char *)OSSL_PROVIDER_get0_name(uVar1);
  strcmp(__s1,__s2);
  return;
}



void collect_EVP_ASYM_CIPHER(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = OPENSSL_sk_push(param_2,param_1);
  if (iVar1 < 1) {
    return;
  }
  EVP_ASYM_CIPHER_up_ref(param_1);
  return;
}



void cmp_EVP_ASYM_CIPHER(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char *__s2;
  char *__s1;
  
  uVar1 = EVP_ASYM_CIPHER_get0_provider(*param_2);
  __s2 = (char *)OSSL_PROVIDER_get0_name(uVar1);
  uVar1 = EVP_ASYM_CIPHER_get0_provider(*param_1);
  __s1 = (char *)OSSL_PROVIDER_get0_name(uVar1);
  strcmp(__s1,__s2);
  return;
}



void do_evp_rand_isra_0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined1 auStack_1028 [4104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = EVP_RAND_CTX_new(param_1,0);
  if (lVar2 != 0) {
    iVar1 = EVP_RAND_CTX_set_params(lVar2,param_2);
    if (0 < iVar1) {
      iVar1 = EVP_RAND_generate(lVar2,auStack_1028,0x1000,0,0,0,0);
      if (iVar1 != 0) {
        EVP_RAND_reseed(lVar2,0,0,0,0,0);
      }
    }
  }
  EVP_RAND_CTX_free(lVar2);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void do_evp_mac_isra_0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined1 local_1050 [8];
  char local_1048 [8];
  char acStack_1040 [8];
  undefined1 local_1038;
  undefined1 local_1028 [4104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_1038 = 0;
  local_1048 = (char  [8])_LC1._0_8_;
  acStack_1040 = (char  [8])_LC1._8_8_;
  lVar2 = EVP_MAC_CTX_new();
  if (lVar2 != 0) {
    iVar1 = EVP_MAC_init(lVar2,"mac_key",7,param_2);
    if (iVar1 != 0) {
      iVar1 = EVP_MAC_CTX_set_params(lVar2,param_2);
      if (0 < iVar1) {
        iVar1 = EVP_MAC_update(lVar2,local_1048,0x11);
        if (iVar1 != 0) {
          EVP_MAC_final(lVar2,local_1028,local_1050,0x1000);
        }
      }
    }
  }
  EVP_MAC_CTX_free(lVar2);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void do_evp_cipher_isra_0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  EVP_CIPHER_CTX *ctx;
  long in_FS_OFFSET;
  int local_450;
  int local_44c;
  uchar local_445 [5];
  undefined8 local_440;
  undefined8 local_438;
  undefined8 uStack_430;
  uchar local_428 [1032];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  builtin_memcpy(local_445,"text",5);
  local_440 = 0x807060504030201;
  local_438 = ram0x00101a70;
  uStack_430 = _UNK_00101a78;
  ctx = EVP_CIPHER_CTX_new();
  iVar1 = EVP_CIPHER_CTX_set_params(ctx,param_2);
  if (iVar1 != 0) {
    iVar1 = EVP_EncryptInit_ex2(ctx,param_1,&local_438,&local_440,0);
    if (iVar1 != 0) {
      iVar1 = EVP_EncryptUpdate(ctx,local_428,&local_450,local_445,4);
      if (iVar1 != 0) {
        iVar1 = EVP_EncryptFinal_ex(ctx,local_428 + local_450,&local_44c);
        if (iVar1 != 0) {
          local_450 = local_450 + local_44c;
        }
      }
    }
  }
  EVP_CIPHER_CTX_free(ctx);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



long * fuzz_params(long *param_1,long *param_2,ulong *param_3)

{
  char cVar1;
  byte bVar2;
  ulong uVar3;
  byte *pbVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long *plVar10;
  ulong *ptr;
  ulong *puVar11;
  double *pdVar12;
  byte *pbVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  undefined *puVar17;
  byte *pbVar18;
  long *plVar19;
  long lVar20;
  byte *pbVar21;
  byte *pbVar22;
  
  if (param_1 == (long *)0x0) {
    plVar16 = (long *)CRYPTO_zalloc(0x28,"fuzz/provider.c",0x111);
    return plVar16;
  }
  if (*param_1 == 0) {
    lVar20 = 1;
  }
  else {
    iVar9 = 2;
    plVar16 = param_1;
    do {
      plVar16 = plVar16 + 5;
      lVar20 = (long)iVar9;
      iVar9 = iVar9 + 1;
    } while (*plVar16 != 0);
  }
  plVar10 = (long *)CRYPTO_zalloc(lVar20 * 0x28,"fuzz/provider.c",0x111);
  lVar20 = *param_1;
  plVar16 = plVar10;
  do {
    if (lVar20 == 0) {
      return plVar10;
    }
    plVar19 = plVar16;
    if (*param_3 < 8) {
      ptr = (ulong *)CRYPTO_malloc(8,"fuzz/provider.c",0x121);
      *ptr = 0;
      switch((int)param_1[1]) {
      case 1:
        uVar14 = 0;
        goto switchD_00100876_caseD_1;
      case 2:
        uVar14 = 0;
        goto switchD_00100876_caseD_2;
      case 3:
switchD_00100a47_caseD_3:
        pdVar12 = (double *)CRYPTO_malloc(8,"fuzz/provider.c",0x154);
        *pdVar12 = 0.0;
        goto LAB_001009b8;
      case 4:
        goto switchD_00100a47_caseD_4;
      case 5:
        goto switchD_00100a47_caseD_5;
      case 6:
        goto switchD_00100a47_caseD_6;
      case 7:
        goto switchD_00100a47_caseD_7;
      }
    }
    else {
      ptr = (ulong *)CRYPTO_malloc(8,"fuzz/provider.c",0x83);
      uVar3 = *param_3;
      pbVar21 = (byte *)(uVar3 - 8);
      pbVar4 = (byte *)*param_2;
      uVar14 = (ulong)*pbVar4;
      pbVar22 = pbVar4 + 8;
      *param_2 = (long)pbVar22;
      *ptr = uVar14;
      *param_3 = (ulong)pbVar21;
      switch((int)param_1[1]) {
      case 1:
switchD_00100876_caseD_1:
        pcVar5 = (char *)*param_1;
        iVar9 = strcmp(pcVar5,"iter");
        if (iVar9 == 0) {
          puVar11 = (ulong *)CRYPTO_malloc(8,"fuzz/provider.c",0x128);
          *puVar11 = 1;
        }
        else {
          cVar1 = *pcVar5;
          if ((cVar1 == 'n') && (pcVar5[1] == '\0')) {
            puVar11 = (ulong *)CRYPTO_malloc(8,"fuzz/provider.c",299);
            *puVar11 = 1;
          }
          else if ((cVar1 == 'r') && (pcVar5[1] == '\0')) {
            puVar11 = (ulong *)CRYPTO_malloc(8,"fuzz/provider.c",0x12e);
            *puVar11 = 8;
          }
          else if ((cVar1 == 'p') && (pcVar5[1] == '\0')) {
            puVar11 = (ulong *)CRYPTO_malloc(8,"fuzz/provider.c",0x131);
            *puVar11 = 8;
          }
          else if ((uVar14 == 0) || (*param_3 < 8)) {
            puVar11 = (ulong *)CRYPTO_malloc(8,"fuzz/provider.c",0x134);
            *puVar11 = 0;
          }
          else {
            puVar11 = (ulong *)CRYPTO_malloc(8,"fuzz/provider.c",0x83);
            bVar2 = *(byte *)*param_2;
            *param_2 = (long)((byte *)*param_2 + 8);
            *puVar11 = (ulong)bVar2;
            *param_3 = *param_3 - 8;
          }
        }
        lVar15 = *param_1;
        lVar6 = param_1[1];
        lVar7 = param_1[3];
        plVar19 = plVar16 + 5;
        lVar20 = param_1[4];
        plVar16[2] = param_1[2];
        plVar16[3] = lVar7;
        *plVar16 = lVar15;
        plVar16[1] = lVar6;
        plVar16[4] = lVar20;
        plVar16[2] = (long)puVar11;
        break;
      case 2:
switchD_00100876_caseD_2:
        pcVar5 = (char *)*param_1;
        iVar9 = strcmp(pcVar5,"iter");
        if (iVar9 == 0) {
          puVar11 = (ulong *)CRYPTO_malloc(8,"fuzz/provider.c",0x13e);
          *puVar11 = 1;
        }
        else {
          cVar1 = *pcVar5;
          if ((cVar1 == 'n') && (pcVar5[1] == '\0')) {
            puVar11 = (ulong *)CRYPTO_malloc(8,"fuzz/provider.c",0x141);
            *puVar11 = 1;
          }
          else if ((cVar1 == 'r') && (pcVar5[1] == '\0')) {
            puVar11 = (ulong *)CRYPTO_malloc(8,"fuzz/provider.c",0x144);
            *puVar11 = 8;
          }
          else if ((cVar1 == 'p') && (pcVar5[1] == '\0')) {
            puVar11 = (ulong *)CRYPTO_malloc(8,"fuzz/provider.c",0x147);
            *puVar11 = 8;
          }
          else if ((uVar14 == 0) || (*param_3 < 8)) {
            puVar11 = (ulong *)CRYPTO_malloc(8,"fuzz/provider.c",0x14a);
            *puVar11 = 0;
          }
          else {
            puVar11 = (ulong *)CRYPTO_malloc(8,"fuzz/provider.c",0x71);
            bVar2 = *(byte *)*param_2;
            *param_2 = (long)((byte *)*param_2 + 8);
            *puVar11 = (ulong)bVar2;
            *param_3 = *param_3 - 8;
          }
        }
        lVar15 = *param_1;
        lVar6 = param_1[1];
        lVar7 = param_1[3];
        plVar19 = plVar16 + 5;
        lVar20 = param_1[4];
        plVar16[2] = param_1[2];
        plVar16[3] = lVar7;
        *plVar16 = lVar15;
        plVar16[1] = lVar6;
        plVar16[4] = lVar20;
        plVar16[2] = (long)puVar11;
        break;
      case 3:
        if ((uVar14 == 0) || (pbVar21 < (byte *)0x8)) goto switchD_00100a47_caseD_3;
        pdVar12 = (double *)CRYPTO_malloc(8,"fuzz/provider.c",0x95);
        bVar2 = *(byte *)*param_2;
        *param_2 = (long)((byte *)*param_2 + 8);
        *param_3 = *param_3 - 8;
        *pdVar12 = (double)bVar2;
LAB_001009b8:
        lVar15 = *param_1;
        lVar6 = param_1[1];
        lVar7 = param_1[3];
        plVar19 = plVar16 + 5;
        lVar20 = param_1[4];
        plVar16[2] = param_1[2];
        plVar16[3] = lVar7;
        plVar16[4] = lVar20;
        plVar16[2] = (long)pdVar12;
        *plVar16 = lVar15;
        plVar16[1] = lVar6;
        break;
      case 4:
        if (uVar14 == 0) {
switchD_00100a47_caseD_4:
          lVar20 = 0;
          puVar17 = &_LC3;
        }
        else {
          uVar14 = OPENSSL_strnlen();
          if (uVar14 == *param_3) goto switchD_00100a47_caseD_4;
          lVar20 = uVar14 + 1;
          puVar17 = (undefined *)*param_2;
          *param_3 = *param_3 - lVar20;
          *param_2 = (long)(puVar17 + lVar20);
          iVar9 = (int)lVar20;
          if (iVar9 < 0) {
            iVar9 = 0;
          }
          lVar20 = (long)iVar9;
        }
        lVar6 = *param_1;
        lVar7 = param_1[1];
        lVar15 = param_1[4];
        plVar16[2] = (long)puVar17;
        plVar19 = plVar16 + 5;
        plVar16[3] = lVar20;
        *plVar16 = lVar6;
        plVar16[1] = lVar7;
        plVar16[4] = lVar15;
        break;
      case 5:
        if (uVar14 != 0) {
          pbVar18 = pbVar22;
          if (pbVar21 != (byte *)0x0) {
            do {
              if (((*pbVar18 == 0xff) && (pbVar18 + (1 - (long)pbVar22) < pbVar21)) &&
                 (pbVar18[1] == 0xff)) {
                iVar9 = (int)(pbVar18 + 1) - (int)pbVar22;
                *param_3 = (long)pbVar21 - (long)iVar9;
                *param_2 = (long)(pbVar18 + 1);
                if (iVar9 < 0) {
                  iVar9 = 0;
                }
                lVar20 = (long)iVar9;
                goto LAB_00100ee9;
              }
              pbVar18 = pbVar18 + 1;
            } while (pbVar4 + uVar3 != pbVar18);
          }
        }
switchD_00100a47_caseD_5:
        lVar20 = 0;
        pbVar22 = &_LC3;
LAB_00100ee9:
        lVar6 = *param_1;
        lVar7 = param_1[1];
        lVar15 = param_1[4];
        plVar16[2] = (long)pbVar22;
        plVar19 = plVar16 + 5;
        plVar16[3] = lVar20;
        *plVar16 = lVar6;
        plVar16[1] = lVar7;
        plVar16[4] = lVar15;
        break;
      case 6:
        if (uVar14 == 0) {
switchD_00100a47_caseD_6:
          lVar15 = 0;
          lVar20 = 0;
        }
        else {
          if ((pbVar21 != (byte *)0x0) && (pbVar4[8] == 0xff)) {
            *param_2 = (long)(pbVar4 + 9);
            *param_3 = uVar3 - 9;
            goto switchD_00100a47_caseD_6;
          }
          uVar14 = OPENSSL_strnlen();
          if (uVar14 == *param_3) goto switchD_00100a47_caseD_6;
          lVar15 = uVar14 + 1;
          lVar20 = *param_2;
          *param_3 = *param_3 - lVar15;
          *param_2 = lVar20 + lVar15;
          iVar9 = (int)lVar15;
          if (iVar9 < 0) {
            iVar9 = 0;
          }
          lVar15 = (long)iVar9;
        }
        lVar7 = *param_1;
        lVar8 = param_1[1];
        lVar6 = param_1[4];
        plVar16[2] = lVar20;
        plVar19 = plVar16 + 5;
        plVar16[3] = lVar15;
        *plVar16 = lVar7;
        plVar16[1] = lVar8;
        plVar16[4] = lVar6;
        break;
      case 7:
        if (uVar14 == 0) {
switchD_00100a47_caseD_7:
          pbVar21 = (byte *)0x0;
LAB_00100a72:
          pbVar22 = (byte *)0x0;
        }
        else {
          pbVar18 = pbVar22;
          if (pbVar21 < (byte *)0x2) {
            if (pbVar21 != (byte *)0x0) {
              pbVar13 = (byte *)0x0;
              goto LAB_00100cd8;
            }
            goto LAB_00100a72;
          }
          pbVar13 = (byte *)0x0;
          if ((pbVar4[8] == 0xff) && (pbVar4[9] == 0xff)) {
            *param_2 = (long)(pbVar4 + 10);
            *param_3 = uVar3 - 10;
            goto switchD_00100a47_caseD_7;
          }
LAB_00100cd8:
          while( true ) {
            bVar2 = *pbVar18;
            while (pbVar13 = pbVar13 + 1, bVar2 != 0xff) {
              pbVar18 = pbVar18 + 1;
              if (pbVar21 <= pbVar13) goto switchD_00100a47_caseD_7;
              bVar2 = *pbVar18;
            }
            if (pbVar21 <= pbVar13) goto switchD_00100a47_caseD_7;
            if (pbVar18[1] == 0xff) break;
            pbVar18 = pbVar18 + 1;
          }
          iVar9 = (int)(pbVar18 + 1) - (int)pbVar22;
          *param_3 = (long)pbVar21 - (long)iVar9;
          *param_2 = (long)(pbVar18 + 1);
          if (iVar9 < 0) {
            iVar9 = 0;
          }
          pbVar21 = (byte *)(long)iVar9;
        }
        lVar15 = *param_1;
        lVar6 = param_1[1];
        lVar20 = param_1[4];
        plVar16[2] = (long)pbVar22;
        plVar19 = plVar16 + 5;
        plVar16[3] = (long)pbVar21;
        *plVar16 = lVar15;
        plVar16[1] = lVar6;
        plVar16[4] = lVar20;
      }
    }
    param_1 = param_1 + 5;
    CRYPTO_free(ptr);
    lVar20 = *param_1;
    plVar16 = plVar19;
  } while( true );
}



bool FuzzerInitialize(void)

{
  long lVar1;
  long lVar2;
  
  lVar2 = OSSL_LIB_CTX_new();
  libctx = lVar2;
  if (lVar2 != 0) {
    digests_collection = OPENSSL_sk_new(cmp_EVP_MD);
    EVP_MD_do_all_provided(lVar2,0x100000,digests_collection);
    lVar1 = libctx;
    kdf_collection = OPENSSL_sk_new(cmp_EVP_KDF);
    EVP_KDF_do_all_provided(lVar1,collect_EVP_KDF,kdf_collection);
    lVar1 = libctx;
    cipher_collection = OPENSSL_sk_new(cmp_EVP_CIPHER);
    EVP_CIPHER_do_all_provided(lVar1,collect_EVP_CIPHER,cipher_collection);
    lVar1 = libctx;
    kem_collection = OPENSSL_sk_new(cmp_EVP_KEM);
    EVP_KEM_do_all_provided(lVar1,collect_EVP_KEM,kem_collection);
    lVar1 = libctx;
    keyexch_collection = OPENSSL_sk_new(cmp_EVP_KEYEXCH);
    EVP_KEYEXCH_do_all_provided(lVar1,collect_EVP_KEYEXCH,keyexch_collection);
    lVar1 = libctx;
    rand_collection = OPENSSL_sk_new(cmp_EVP_RAND);
    EVP_RAND_do_all_provided(lVar1,collect_EVP_RAND,rand_collection);
    lVar1 = libctx;
    mac_collection = OPENSSL_sk_new(cmp_EVP_MAC);
    EVP_MAC_do_all_provided(lVar1,collect_EVP_MAC,mac_collection);
    lVar1 = libctx;
    keymgmt_collection = OPENSSL_sk_new(cmp_EVP_KEYMGMT);
    EVP_KEYMGMT_do_all_provided(lVar1,collect_EVP_KEYMGMT,keymgmt_collection);
    lVar1 = libctx;
    signature_collection = OPENSSL_sk_new(cmp_EVP_SIGNATURE);
    EVP_SIGNATURE_do_all_provided(lVar1,collect_EVP_SIGNATURE,signature_collection);
    lVar1 = libctx;
    asym_ciphers_collection = OPENSSL_sk_new(cmp_EVP_ASYM_CIPHER);
    EVP_ASYM_CIPHER_do_all_provided(lVar1,collect_EVP_ASYM_CIPHER,asym_ciphers_collection);
  }
  return lVar2 != 0;
}



void FuzzerCleanup(void)

{
  OPENSSL_sk_pop_free(digests_collection,&EVP_MD_free);
  OPENSSL_sk_pop_free(kdf_collection,&EVP_KDF_free);
  OPENSSL_sk_pop_free(cipher_collection,&EVP_CIPHER_free);
  OPENSSL_sk_pop_free(kem_collection,&EVP_KEM_free);
  OPENSSL_sk_pop_free(keyexch_collection,&EVP_KEYEXCH_free);
  OPENSSL_sk_pop_free(rand_collection,&EVP_RAND_free);
  OPENSSL_sk_pop_free(mac_collection,&EVP_MAC_free);
  OPENSSL_sk_pop_free(keymgmt_collection,&EVP_KEYMGMT_free);
  OPENSSL_sk_pop_free(signature_collection,&EVP_SIGNATURE_free);
  OPENSSL_sk_pop_free(asym_ciphers_collection,&EVP_ASYM_CIPHER_free);
  OSSL_LIB_CTX_free(libctx);
  return;
}



undefined8 FuzzerTestOneInput(byte *param_1,ulong param_2)

{
  ulong uVar1;
  byte *pbVar2;
  int iVar3;
  ulong *ptr;
  ulong *ptr_00;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  EVP_MD_CTX *ctx;
  long *plVar7;
  byte *pbVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  ulong local_a8;
  byte *local_a0 [2];
  uint local_8c;
  uchar local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a8 = param_2;
  if (param_2 < 8) {
    ptr_00 = (ulong *)0x0;
    ptr = (ulong *)0x0;
    uVar5 = 0;
    local_a0[0] = param_1;
    goto LAB_00101240;
  }
  local_a0[0] = param_1;
  ptr = (ulong *)CRYPTO_malloc(8,"fuzz/provider.c",0x71);
  pbVar2 = local_a0[0];
  *ptr = (ulong)*local_a0[0];
  local_a8 = param_2 - 8;
  if (local_a8 < 8) {
    ptr_00 = (ulong *)0x0;
    uVar5 = 0;
    local_a0[0] = local_a0[0] + 8;
    goto LAB_00101240;
  }
  pbVar8 = local_a0[0] + 0x10;
  param_2 = param_2 - 0x10;
  local_a0[0] = local_a0[0] + 8;
  ptr_00 = (ulong *)CRYPTO_malloc(8,"fuzz/provider.c",0x83);
  uVar9 = (ulong)pbVar2[8];
  uVar1 = *ptr;
  *ptr_00 = uVar9;
  local_a8 = param_2;
  local_a0[0] = pbVar8;
  switch(uVar1 % 10) {
  default:
    iVar3 = OPENSSL_sk_num(digests_collection);
    lVar4 = OPENSSL_sk_value(digests_collection,(long)uVar9 % (long)iVar3 & 0xffffffff);
    if (lVar4 != 0) {
      uVar5 = EVP_MD_settable_ctx_params(lVar4);
      plVar6 = (long *)fuzz_params(uVar5,local_a0,&local_a8);
      if (plVar6 != (long *)0x0) {
        ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
        if (ctx == (EVP_MD_CTX *)0x0) {
          EVP_MD_CTX_free(0);
        }
        else {
          iVar3 = EVP_MD_CTX_set_params(ctx,plVar6);
          if (((iVar3 != 0) && (iVar3 = EVP_DigestInit_ex2(ctx,lVar4,0), iVar3 != 0)) &&
             (iVar3 = EVP_DigestUpdate(ctx,&_LC7,4), iVar3 != 0)) {
            EVP_DigestFinal_ex(ctx,local_88,&local_8c);
          }
          EVP_MD_CTX_free(ctx);
        }
        lVar4 = *plVar6;
        plVar7 = plVar6;
        while (lVar4 != 0) {
          if (((int)plVar7[1] - 1U < 3) && ((void *)plVar7[2] != (void *)0x0)) {
            CRYPTO_free((void *)plVar7[2]);
          }
          plVar7 = plVar7 + 5;
          lVar4 = *plVar7;
        }
      }
LAB_001013d0:
      OSSL_PARAM_free(plVar6);
    }
    break;
  case 1:
    iVar3 = OPENSSL_sk_num(cipher_collection);
    lVar4 = OPENSSL_sk_value(cipher_collection,(long)uVar9 % (long)iVar3 & 0xffffffff);
    if (lVar4 != 0) {
      uVar5 = EVP_CIPHER_settable_ctx_params(lVar4);
      plVar6 = (long *)fuzz_params(uVar5,local_a0,&local_a8);
      if (plVar6 != (long *)0x0) {
        do_evp_cipher_isra_0(lVar4,plVar6);
        lVar4 = *plVar6;
        plVar7 = plVar6;
        while (lVar4 != 0) {
          if (((int)plVar7[1] - 1U < 3) && ((void *)plVar7[2] != (void *)0x0)) {
            CRYPTO_free((void *)plVar7[2]);
          }
          plVar7 = plVar7 + 5;
          lVar4 = *plVar7;
        }
      }
      goto LAB_001013d0;
    }
    break;
  case 2:
    iVar3 = OPENSSL_sk_num(kdf_collection);
    lVar4 = OPENSSL_sk_value(kdf_collection,(long)uVar9 % (long)iVar3 & 0xffffffff);
    if (lVar4 != 0) {
      uVar5 = EVP_KDF_settable_ctx_params(lVar4);
      plVar6 = (long *)fuzz_params(uVar5,local_a0,&local_a8);
      if (plVar6 != (long *)0x0) {
        lVar4 = EVP_KDF_CTX_new(lVar4);
        if (lVar4 == 0) {
          EVP_KDF_CTX_free(0);
        }
        else {
          iVar3 = EVP_KDF_CTX_set_params(lVar4,plVar6);
          if (0 < iVar3) {
            EVP_KDF_derive(lVar4,local_88,0x20,0);
          }
          EVP_KDF_CTX_free(lVar4);
        }
        lVar4 = *plVar6;
        plVar7 = plVar6;
        while (lVar4 != 0) {
          if (((int)plVar7[1] - 1U < 3) && ((void *)plVar7[2] != (void *)0x0)) {
            CRYPTO_free((void *)plVar7[2]);
          }
          plVar7 = plVar7 + 5;
          lVar4 = *plVar7;
        }
      }
      goto LAB_001013d0;
    }
    break;
  case 3:
    iVar3 = OPENSSL_sk_num(mac_collection);
    lVar4 = OPENSSL_sk_value(mac_collection,(long)uVar9 % (long)iVar3 & 0xffffffff);
    if (lVar4 != 0) {
      uVar5 = EVP_MAC_settable_ctx_params(lVar4);
      plVar6 = (long *)fuzz_params(uVar5,local_a0,&local_a8);
      if (plVar6 != (long *)0x0) {
        do_evp_mac_isra_0(lVar4,plVar6);
        lVar4 = *plVar6;
        plVar7 = plVar6;
        while (lVar4 != 0) {
          if (((int)plVar7[1] - 1U < 3) && ((void *)plVar7[2] != (void *)0x0)) {
            CRYPTO_free((void *)plVar7[2]);
          }
          plVar7 = plVar7 + 5;
          lVar4 = *plVar7;
        }
      }
      goto LAB_001013d0;
    }
    break;
  case 4:
    iVar3 = OPENSSL_sk_num(kem_collection);
    lVar4 = OPENSSL_sk_value(kem_collection,(long)uVar9 % (long)iVar3 & 0xffffffff);
    if (lVar4 != 0) {
      uVar5 = EVP_KEM_settable_ctx_params(lVar4);
      plVar6 = (long *)fuzz_params(uVar5,local_a0,&local_a8);
      if (plVar6 != (long *)0x0) {
        lVar4 = *plVar6;
        plVar7 = plVar6;
        while (lVar4 != 0) {
          if (((int)plVar7[1] - 1U < 3) && ((void *)plVar7[2] != (void *)0x0)) {
            CRYPTO_free((void *)plVar7[2]);
          }
          plVar7 = plVar7 + 5;
          lVar4 = *plVar7;
        }
      }
      goto LAB_001013d0;
    }
    break;
  case 5:
    iVar3 = OPENSSL_sk_num(rand_collection);
    lVar4 = OPENSSL_sk_value(rand_collection,(long)uVar9 % (long)iVar3 & 0xffffffff);
    if (lVar4 != 0) {
      uVar5 = EVP_RAND_settable_ctx_params(lVar4);
      plVar6 = (long *)fuzz_params(uVar5,local_a0,&local_a8);
      if (plVar6 != (long *)0x0) {
        do_evp_rand_isra_0(lVar4,plVar6);
        lVar4 = *plVar6;
        plVar7 = plVar6;
        while (lVar4 != 0) {
          if (((int)plVar7[1] - 1U < 3) && ((void *)plVar7[2] != (void *)0x0)) {
            CRYPTO_free((void *)plVar7[2]);
          }
          plVar7 = plVar7 + 5;
          lVar4 = *plVar7;
        }
      }
      goto LAB_001013d0;
    }
    break;
  case 6:
    iVar3 = OPENSSL_sk_num(asym_ciphers_collection);
    lVar4 = OPENSSL_sk_value(asym_ciphers_collection,(long)uVar9 % (long)iVar3 & 0xffffffff);
    if (lVar4 != 0) {
      uVar5 = EVP_ASYM_CIPHER_settable_ctx_params(lVar4);
      plVar6 = (long *)fuzz_params(uVar5,local_a0,&local_a8);
      if (plVar6 != (long *)0x0) {
        lVar4 = *plVar6;
        plVar7 = plVar6;
        while (lVar4 != 0) {
          if (((int)plVar7[1] - 1U < 3) && ((void *)plVar7[2] != (void *)0x0)) {
            CRYPTO_free((void *)plVar7[2]);
          }
          plVar7 = plVar7 + 5;
          lVar4 = *plVar7;
        }
      }
      goto LAB_001013d0;
    }
    break;
  case 7:
    iVar3 = OPENSSL_sk_num(signature_collection);
    lVar4 = OPENSSL_sk_value(signature_collection,(long)uVar9 % (long)iVar3 & 0xffffffff);
    if (lVar4 != 0) {
      uVar5 = EVP_SIGNATURE_settable_ctx_params(lVar4);
      plVar6 = (long *)fuzz_params(uVar5,local_a0,&local_a8);
      if (plVar6 != (long *)0x0) {
        lVar4 = *plVar6;
        plVar7 = plVar6;
        while (lVar4 != 0) {
          if (((int)plVar7[1] - 1U < 3) && ((void *)plVar7[2] != (void *)0x0)) {
            CRYPTO_free((void *)plVar7[2]);
          }
          plVar7 = plVar7 + 5;
          lVar4 = *plVar7;
        }
      }
      goto LAB_001013d0;
    }
    break;
  case 8:
    iVar3 = OPENSSL_sk_num(keyexch_collection);
    lVar4 = OPENSSL_sk_value(keyexch_collection,(long)uVar9 % (long)iVar3 & 0xffffffff);
    if (lVar4 != 0) {
      uVar5 = EVP_KEYEXCH_settable_ctx_params(lVar4);
      plVar6 = (long *)fuzz_params(uVar5,local_a0,&local_a8);
      if (plVar6 != (long *)0x0) {
        lVar4 = *plVar6;
        plVar7 = plVar6;
        while (lVar4 != 0) {
          if (((int)plVar7[1] - 1U < 3) && ((void *)plVar7[2] != (void *)0x0)) {
            CRYPTO_free((void *)plVar7[2]);
          }
          plVar7 = plVar7 + 5;
          lVar4 = *plVar7;
        }
      }
      goto LAB_001013d0;
    }
    break;
  case 9:
    break;
  }
  uVar5 = 1;
LAB_00101240:
  CRYPTO_free(ptr);
  CRYPTO_free(ptr_00);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


