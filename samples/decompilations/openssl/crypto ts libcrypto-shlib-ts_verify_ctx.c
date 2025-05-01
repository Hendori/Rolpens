
void TS_VERIFY_CTX_new(void)

{
  CRYPTO_zalloc(0x50,0x1003dc,0x11);
  return;
}



void TS_VERIFY_CTX_init(undefined1 (*param_1) [16])

{
  uint uVar1;
  char *pcVar2;
  
  if (param_1 != (undefined1 (*) [16])0x0) {
    *param_1 = (undefined1  [16])0x0;
    param_1[1] = (undefined1  [16])0x0;
    param_1[2] = (undefined1  [16])0x0;
    param_1[3] = (undefined1  [16])0x0;
    param_1[4] = (undefined1  [16])0x0;
    return;
  }
  uVar1 = 0x1003dc;
  pcVar2 = "assertion failed: ctx != NULL";
  OPENSSL_die("assertion failed: ctx != NULL",0x1003dc,0x18);
  *(uint *)pcVar2 = *(uint *)pcVar2 | uVar1;
  return;
}



void TS_VERIFY_CTX_add_flags(uint *param_1,uint param_2)

{
  *param_1 = *param_1 | param_2;
  return;
}



undefined4 TS_VERIFY_CTX_set_flags(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return param_2;
}



undefined8 TS_VERIFY_CTX_set_data(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x38) = param_2;
  return param_2;
}



undefined8 TS_VERIFY_CTX_set0_data(long param_1,undefined8 param_2)

{
  BIO_free_all(*(BIO **)(param_1 + 0x38));
  *(undefined8 *)(param_1 + 0x38) = param_2;
  return 1;
}



undefined8 TS_VERIFY_CTX_set_store(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  return param_2;
}



undefined8 TS_VERIFY_CTX_set0_store(long param_1,undefined8 param_2)

{
  X509_STORE_free(*(X509_STORE **)(param_1 + 8));
  *(undefined8 *)(param_1 + 8) = param_2;
  return 1;
}



undefined8 TS_VERIFY_CTX_set_certs(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return param_2;
}



undefined8 TS_VERIFY_CTX_set0_certs(long param_1,undefined8 param_2)

{
  OSSL_STACK_OF_X509_free(*(undefined8 *)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return 1;
}



undefined8 TS_VERIFY_CTX_set_imprint(long param_1,undefined8 param_2,undefined4 param_3)

{
  CRYPTO_free(*(void **)(param_1 + 0x28));
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(undefined4 *)(param_1 + 0x30) = param_3;
  return param_2;
}



undefined8 TS_VERIFY_CTX_set0_imprint(long param_1,undefined8 param_2,undefined4 param_3)

{
  CRYPTO_free(*(void **)(param_1 + 0x28));
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(undefined4 *)(param_1 + 0x30) = param_3;
  return 1;
}



void TS_VERIFY_CTX_cleanup(long param_1)

{
  if (param_1 != 0) {
    X509_STORE_free(*(X509_STORE **)(param_1 + 8));
    OSSL_STACK_OF_X509_free(*(undefined8 *)(param_1 + 0x10));
    ASN1_OBJECT_free(*(ASN1_OBJECT **)(param_1 + 0x18));
    X509_ALGOR_free(*(X509_ALGOR **)(param_1 + 0x20));
    CRYPTO_free(*(void **)(param_1 + 0x28));
    BIO_free_all(*(BIO **)(param_1 + 0x38));
    ASN1_INTEGER_free(*(ASN1_INTEGER **)(param_1 + 0x40));
    GENERAL_NAME_free(*(GENERAL_NAME **)(param_1 + 0x48));
    TS_VERIFY_CTX_init(param_1);
    return;
  }
  return;
}



void TS_VERIFY_CTX_free(void *param_1)

{
  if (param_1 != (void *)0x0) {
    TS_VERIFY_CTX_cleanup();
    CRYPTO_free(param_1);
    return;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00100477) overlaps instruction at (ram,0x00100476)
    */

uint * TS_REQ_to_TS_VERIFY_CTX(long param_1,uint *param_2,undefined8 param_3,undefined8 param_4)

{
  byte *pbVar1;
  byte bVar2;
  undefined8 *puVar3;
  ASN1_STRING *x;
  char cVar4;
  uint uVar5;
  ASN1_OBJECT *pAVar6;
  X509_ALGOR *pXVar7;
  void *pvVar8;
  ASN1_INTEGER *pAVar9;
  uint *puVar10;
  char *pcVar11;
  char cVar12;
  undefined7 uVar13;
  byte bVar14;
  long lVar15;
  int *unaff_RBX;
  char *pcVar16;
  bool bVar17;
  undefined1 auVar18 [16];
  
  uVar13 = (undefined7)((ulong)param_4 >> 8);
  cVar12 = (char)param_4;
  bVar17 = false;
  if (param_1 == 0) {
    pcVar16 = "assertion failed: req != NULL";
    auVar18 = OPENSSL_die("assertion failed: req != NULL",0x1003dc,0x92);
    lVar15 = auVar18._8_8_;
    pcVar11 = auVar18._0_8_;
    if (!bVar17) {
      out(*(undefined4 *)(ulong)*(uint *)(lVar15 + 0x79),auVar18._8_2_);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    cVar4 = auVar18[0];
    *pcVar11 = *pcVar11 + cVar4;
    bVar14 = auVar18[8];
    *(char *)((long)pcVar11 * 2) = *(char *)((long)pcVar11 * 2) + bVar14;
    *pcVar11 = *pcVar11 + cVar4;
    *pcVar11 = *pcVar11 + cVar4;
    *pcVar11 = *pcVar11 + cVar4;
    *(int *)(lVar15 + 0x52) = *(int *)(lVar15 + 0x52) + (int)pcVar16;
    *(char *)CONCAT71(uVar13,cVar12) = *(char *)CONCAT71(uVar13,cVar12) + cVar4;
    if (-1 < *(char *)CONCAT71(uVar13,cVar12)) {
      *unaff_RBX = *unaff_RBX + (int)unaff_RBX;
      pcVar11 = (char *)((ulong)pcVar11 | 7);
      pcVar11[0x10000001] = pcVar11[0x10000001] | bVar14;
      *pcVar11 = *pcVar11 + (char)pcVar11;
      *(char *)((long)pcVar11 * 2) = *(char *)((long)pcVar11 * 2) + (char)unaff_RBX;
      *pcVar11 = *pcVar11 + (char)pcVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pcVar11[0x1afffffb] = pcVar11[0x1afffffb] + cVar12;
    *pcVar11 = *pcVar11 + cVar4;
    *pcVar11 = *pcVar11 + cVar4;
    *pcVar11 = *pcVar11 + cVar4;
    *pcVar11 = *pcVar11 + bVar14;
    *pcVar11 = *pcVar11 + cVar4;
    *pcVar11 = *pcVar11 + auVar18[9];
    *pcVar11 = *pcVar11 + cVar4;
    pcVar16 = (char *)((long)unaff_RBX + (long)pcVar16 * 8 + 0x3affff);
    *pcVar16 = *pcVar16 + bVar14;
    *pcVar11 = *pcVar11 + cVar4;
    pbVar1 = (byte *)(lVar15 + 0xe);
    bVar2 = *pbVar1;
    *pbVar1 = *pbVar1 + auVar18[1];
    *pcVar11 = *pcVar11 + bVar14 + CARRY1(bVar2,auVar18[1]);
    *pcVar11 = *pcVar11 + cVar4;
    *(char *)((long)pcVar11 * 2) = *(char *)((long)pcVar11 * 2) + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_2 == (uint *)0x0) {
    puVar10 = (uint *)TS_VERIFY_CTX_new();
    if (puVar10 == (uint *)0x0) {
      return (uint *)0x0;
    }
  }
  else {
    TS_VERIFY_CTX_cleanup(param_2);
    puVar10 = param_2;
  }
  pAVar6 = *(ASN1_OBJECT **)(param_1 + 0x10);
  *puVar10 = 0x6e;
  if (pAVar6 == (ASN1_OBJECT *)0x0) {
    *puVar10 = 0x6a;
  }
  else {
    pAVar6 = OBJ_dup(pAVar6);
    *(ASN1_OBJECT **)(puVar10 + 6) = pAVar6;
    if (pAVar6 == (ASN1_OBJECT *)0x0) goto LAB_00100370;
  }
  puVar3 = *(undefined8 **)(param_1 + 8);
  pXVar7 = X509_ALGOR_dup((X509_ALGOR *)*puVar3);
  *(X509_ALGOR **)(puVar10 + 8) = pXVar7;
  if (pXVar7 != (X509_ALGOR *)0x0) {
    x = (ASN1_STRING *)puVar3[1];
    uVar5 = ASN1_STRING_length(x);
    puVar10[0xc] = uVar5;
    if (uVar5 != 0) {
      pvVar8 = CRYPTO_malloc(uVar5,"crypto/ts/ts_verify_ctx.c",0xa8);
      *(void **)(puVar10 + 10) = pvVar8;
      if (pvVar8 != (void *)0x0) {
        uVar5 = puVar10[0xc];
        pvVar8 = (void *)ASN1_STRING_get0_data(x);
        memcpy(*(void **)(puVar10 + 10),pvVar8,(ulong)uVar5);
        if (*(ASN1_INTEGER **)(param_1 + 0x18) == (ASN1_INTEGER *)0x0) {
          *puVar10 = *puVar10 & 0xffffffdf;
          return puVar10;
        }
        pAVar9 = ASN1_INTEGER_dup(*(ASN1_INTEGER **)(param_1 + 0x18));
        *(ASN1_INTEGER **)(puVar10 + 0x10) = pAVar9;
        if (pAVar9 != (ASN1_INTEGER *)0x0) {
          return puVar10;
        }
      }
    }
  }
LAB_00100370:
  if (param_2 == (uint *)0x0) {
    TS_VERIFY_CTX_free(puVar10);
  }
  else {
    TS_VERIFY_CTX_cleanup(param_2);
  }
  return (uint *)0x0;
}


