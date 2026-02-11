
undefined1 * sha1_settable_ctx_params(void)

{
  return known_sha1_settable_ctx_params;
}



void sha1_copyctx(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  uVar1 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  uVar1 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  uVar1 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar1;
  return;
}



void sha224_copyctx(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  uVar1 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  uVar1 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  uVar1 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar1;
  uVar1 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar1;
  return;
}



void sha384_copyctx(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  uVar1 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  uVar1 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  uVar1 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar1;
  uVar1 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar1;
  uVar1 = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar1;
  uVar1 = param_2[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar1;
  uVar1 = param_2[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar1;
  uVar1 = param_2[0x15];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = uVar1;
  uVar1 = param_2[0x17];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = uVar1;
  uVar1 = param_2[0x19];
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = uVar1;
  param_1[0x1a] = param_2[0x1a];
  return;
}



undefined8 sha1_set_ctx_params(long param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_2 != (long *)0x0) && (*param_2 != 0)) {
    lVar1 = OSSL_PARAM_locate_const(param_2,"ssl3-ms");
    if ((lVar1 != 0) && (*(int *)(lVar1 + 8) == 5)) {
      uVar2 = ossl_sha1_ctrl(param_1,0x1d,*(undefined4 *)(lVar1 + 0x18),
                             *(undefined8 *)(lVar1 + 0x10));
      return uVar2;
    }
  }
  return 1;
}



bool sha1_internal_init(SHA_CTX *param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    iVar1 = SHA1_Init(param_1);
    if (iVar1 != 0) {
      iVar1 = sha1_set_ctx_params(param_1,param_2);
      return iVar1 != 0;
    }
  }
  return false;
}



void sha1_get_params(undefined8 param_1)

{
  ossl_digest_default_get_params(param_1,0x40,0x14,2);
  return;
}



void sha224_get_params(undefined8 param_1)

{
  ossl_digest_default_get_params(param_1,0x40,0x1c,2);
  return;
}



void sha256_get_params(undefined8 param_1)

{
  ossl_digest_default_get_params(param_1,0x40,0x20,2);
  return;
}



void sha256_192_get_params(undefined8 param_1)

{
  ossl_digest_default_get_params(param_1,0x40,0x18,2);
  return;
}



void sha384_get_params(undefined8 param_1)

{
  ossl_digest_default_get_params(param_1,0x80,0x30,2);
  return;
}



void sha512_get_params(undefined8 param_1)

{
  ossl_digest_default_get_params(param_1,0x80,0x40,2);
  return;
}



void sha512_224_get_params(undefined8 param_1)

{
  ossl_digest_default_get_params(param_1,0x80,0x1c,2);
  return;
}



void sha512_256_get_params(undefined8 param_1)

{
  ossl_digest_default_get_params(param_1,0x80,0x20,2);
  return;
}



undefined8 * sha1_dupctx(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  undefined8 *puVar13;
  
  iVar12 = ossl_prov_is_running();
  puVar13 = (undefined8 *)0x0;
  if (iVar12 != 0) {
    puVar13 = (undefined8 *)CRYPTO_malloc(0x60,"providers/implementations/digests/sha2_prov.c",0x3c)
    ;
    if (puVar13 != (undefined8 *)0x0) {
      uVar1 = param_1[1];
      uVar2 = param_1[2];
      uVar3 = param_1[3];
      uVar4 = param_1[4];
      uVar5 = param_1[5];
      uVar6 = param_1[6];
      uVar7 = param_1[7];
      uVar8 = param_1[8];
      uVar9 = param_1[9];
      uVar10 = param_1[10];
      uVar11 = param_1[0xb];
      *puVar13 = *param_1;
      puVar13[1] = uVar1;
      puVar13[2] = uVar2;
      puVar13[3] = uVar3;
      puVar13[4] = uVar4;
      puVar13[5] = uVar5;
      puVar13[6] = uVar6;
      puVar13[7] = uVar7;
      puVar13[8] = uVar8;
      puVar13[9] = uVar9;
      puVar13[10] = uVar10;
      puVar13[0xb] = uVar11;
    }
  }
  return puVar13;
}



undefined8 * sha224_dupctx(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int iVar13;
  undefined8 *puVar14;
  
  iVar13 = ossl_prov_is_running();
  puVar14 = (undefined8 *)0x0;
  if (iVar13 != 0) {
    puVar14 = (undefined8 *)CRYPTO_malloc(0x70,"providers/implementations/digests/sha2_prov.c",0x42)
    ;
    if (puVar14 != (undefined8 *)0x0) {
      uVar1 = param_1[1];
      uVar2 = param_1[2];
      uVar3 = param_1[3];
      uVar4 = param_1[4];
      uVar5 = param_1[5];
      uVar6 = param_1[6];
      uVar7 = param_1[7];
      uVar8 = param_1[8];
      uVar9 = param_1[9];
      uVar10 = param_1[10];
      uVar11 = param_1[0xb];
      *puVar14 = *param_1;
      puVar14[1] = uVar1;
      uVar1 = param_1[0xc];
      uVar12 = param_1[0xd];
      puVar14[2] = uVar2;
      puVar14[3] = uVar3;
      puVar14[4] = uVar4;
      puVar14[5] = uVar5;
      puVar14[6] = uVar6;
      puVar14[7] = uVar7;
      puVar14[8] = uVar8;
      puVar14[9] = uVar9;
      puVar14[10] = uVar10;
      puVar14[0xb] = uVar11;
      puVar14[0xc] = uVar1;
      puVar14[0xd] = uVar12;
    }
  }
  return puVar14;
}



undefined8 * sha256_dupctx(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int iVar13;
  undefined8 *puVar14;
  
  iVar13 = ossl_prov_is_running();
  puVar14 = (undefined8 *)0x0;
  if (iVar13 != 0) {
    puVar14 = (undefined8 *)CRYPTO_malloc(0x70,"providers/implementations/digests/sha2_prov.c",0x47)
    ;
    if (puVar14 != (undefined8 *)0x0) {
      uVar1 = param_1[1];
      uVar2 = param_1[2];
      uVar3 = param_1[3];
      uVar4 = param_1[4];
      uVar5 = param_1[5];
      uVar6 = param_1[6];
      uVar7 = param_1[7];
      uVar8 = param_1[8];
      uVar9 = param_1[9];
      uVar10 = param_1[10];
      uVar11 = param_1[0xb];
      *puVar14 = *param_1;
      puVar14[1] = uVar1;
      uVar1 = param_1[0xc];
      uVar12 = param_1[0xd];
      puVar14[2] = uVar2;
      puVar14[3] = uVar3;
      puVar14[4] = uVar4;
      puVar14[5] = uVar5;
      puVar14[6] = uVar6;
      puVar14[7] = uVar7;
      puVar14[8] = uVar8;
      puVar14[9] = uVar9;
      puVar14[10] = uVar10;
      puVar14[0xb] = uVar11;
      puVar14[0xc] = uVar1;
      puVar14[0xd] = uVar12;
    }
  }
  return puVar14;
}



undefined8 * sha256_192_dupctx(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int iVar13;
  undefined8 *puVar14;
  
  iVar13 = ossl_prov_is_running();
  puVar14 = (undefined8 *)0x0;
  if (iVar13 != 0) {
    puVar14 = (undefined8 *)CRYPTO_malloc(0x70,"providers/implementations/digests/sha2_prov.c",0x4c)
    ;
    if (puVar14 != (undefined8 *)0x0) {
      uVar1 = param_1[1];
      uVar2 = param_1[2];
      uVar3 = param_1[3];
      uVar4 = param_1[4];
      uVar5 = param_1[5];
      uVar6 = param_1[6];
      uVar7 = param_1[7];
      uVar8 = param_1[8];
      uVar9 = param_1[9];
      uVar10 = param_1[10];
      uVar11 = param_1[0xb];
      *puVar14 = *param_1;
      puVar14[1] = uVar1;
      uVar1 = param_1[0xc];
      uVar12 = param_1[0xd];
      puVar14[2] = uVar2;
      puVar14[3] = uVar3;
      puVar14[4] = uVar4;
      puVar14[5] = uVar5;
      puVar14[6] = uVar6;
      puVar14[7] = uVar7;
      puVar14[8] = uVar8;
      puVar14[9] = uVar9;
      puVar14[10] = uVar10;
      puVar14[0xb] = uVar11;
      puVar14[0xc] = uVar1;
      puVar14[0xd] = uVar12;
    }
  }
  return puVar14;
}



undefined8 * sha384_dupctx(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  int iVar18;
  undefined8 *puVar19;
  
  iVar18 = ossl_prov_is_running();
  puVar19 = (undefined8 *)0x0;
  if (iVar18 != 0) {
    puVar19 = (undefined8 *)CRYPTO_malloc(0xd8,"providers/implementations/digests/sha2_prov.c",0x51)
    ;
    if (puVar19 != (undefined8 *)0x0) {
      uVar2 = param_1[1];
      uVar3 = param_1[2];
      uVar4 = param_1[3];
      uVar5 = param_1[4];
      uVar6 = param_1[5];
      uVar7 = param_1[6];
      uVar8 = param_1[7];
      uVar9 = param_1[8];
      uVar10 = param_1[9];
      uVar1 = param_1[0x1a];
      *puVar19 = *param_1;
      puVar19[1] = uVar2;
      uVar2 = param_1[10];
      uVar11 = param_1[0xb];
      uVar12 = param_1[0xc];
      uVar13 = param_1[0xd];
      puVar19[2] = uVar3;
      puVar19[3] = uVar4;
      uVar3 = param_1[0xe];
      uVar4 = param_1[0xf];
      uVar14 = param_1[0x10];
      uVar15 = param_1[0x11];
      puVar19[4] = uVar5;
      puVar19[5] = uVar6;
      uVar5 = param_1[0x12];
      uVar6 = param_1[0x13];
      uVar16 = param_1[0x14];
      uVar17 = param_1[0x15];
      puVar19[6] = uVar7;
      puVar19[7] = uVar8;
      puVar19[8] = uVar9;
      puVar19[9] = uVar10;
      uVar7 = param_1[0x16];
      uVar8 = param_1[0x17];
      uVar9 = param_1[0x18];
      uVar10 = param_1[0x19];
      puVar19[0x1a] = uVar1;
      puVar19[10] = uVar2;
      puVar19[0xb] = uVar11;
      puVar19[0xc] = uVar12;
      puVar19[0xd] = uVar13;
      puVar19[0xe] = uVar3;
      puVar19[0xf] = uVar4;
      puVar19[0x10] = uVar14;
      puVar19[0x11] = uVar15;
      puVar19[0x12] = uVar5;
      puVar19[0x13] = uVar6;
      puVar19[0x14] = uVar16;
      puVar19[0x15] = uVar17;
      puVar19[0x16] = uVar7;
      puVar19[0x17] = uVar8;
      puVar19[0x18] = uVar9;
      puVar19[0x19] = uVar10;
    }
  }
  return puVar19;
}



undefined8 * sha512_dupctx(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  int iVar18;
  undefined8 *puVar19;
  
  iVar18 = ossl_prov_is_running();
  puVar19 = (undefined8 *)0x0;
  if (iVar18 != 0) {
    puVar19 = (undefined8 *)CRYPTO_malloc(0xd8,"providers/implementations/digests/sha2_prov.c",0x56)
    ;
    if (puVar19 != (undefined8 *)0x0) {
      uVar2 = param_1[1];
      uVar3 = param_1[2];
      uVar4 = param_1[3];
      uVar5 = param_1[4];
      uVar6 = param_1[5];
      uVar7 = param_1[6];
      uVar8 = param_1[7];
      uVar9 = param_1[8];
      uVar10 = param_1[9];
      uVar1 = param_1[0x1a];
      *puVar19 = *param_1;
      puVar19[1] = uVar2;
      uVar2 = param_1[10];
      uVar11 = param_1[0xb];
      uVar12 = param_1[0xc];
      uVar13 = param_1[0xd];
      puVar19[2] = uVar3;
      puVar19[3] = uVar4;
      uVar3 = param_1[0xe];
      uVar4 = param_1[0xf];
      uVar14 = param_1[0x10];
      uVar15 = param_1[0x11];
      puVar19[4] = uVar5;
      puVar19[5] = uVar6;
      uVar5 = param_1[0x12];
      uVar6 = param_1[0x13];
      uVar16 = param_1[0x14];
      uVar17 = param_1[0x15];
      puVar19[6] = uVar7;
      puVar19[7] = uVar8;
      puVar19[8] = uVar9;
      puVar19[9] = uVar10;
      uVar7 = param_1[0x16];
      uVar8 = param_1[0x17];
      uVar9 = param_1[0x18];
      uVar10 = param_1[0x19];
      puVar19[0x1a] = uVar1;
      puVar19[10] = uVar2;
      puVar19[0xb] = uVar11;
      puVar19[0xc] = uVar12;
      puVar19[0xd] = uVar13;
      puVar19[0xe] = uVar3;
      puVar19[0xf] = uVar4;
      puVar19[0x10] = uVar14;
      puVar19[0x11] = uVar15;
      puVar19[0x12] = uVar5;
      puVar19[0x13] = uVar6;
      puVar19[0x14] = uVar16;
      puVar19[0x15] = uVar17;
      puVar19[0x16] = uVar7;
      puVar19[0x17] = uVar8;
      puVar19[0x18] = uVar9;
      puVar19[0x19] = uVar10;
    }
  }
  return puVar19;
}



undefined8 * sha512_224_dupctx(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  int iVar18;
  undefined8 *puVar19;
  
  iVar18 = ossl_prov_is_running();
  puVar19 = (undefined8 *)0x0;
  if (iVar18 != 0) {
    puVar19 = (undefined8 *)CRYPTO_malloc(0xd8,"providers/implementations/digests/sha2_prov.c",0x5b)
    ;
    if (puVar19 != (undefined8 *)0x0) {
      uVar2 = param_1[1];
      uVar3 = param_1[2];
      uVar4 = param_1[3];
      uVar5 = param_1[4];
      uVar6 = param_1[5];
      uVar7 = param_1[6];
      uVar8 = param_1[7];
      uVar9 = param_1[8];
      uVar10 = param_1[9];
      uVar1 = param_1[0x1a];
      *puVar19 = *param_1;
      puVar19[1] = uVar2;
      uVar2 = param_1[10];
      uVar11 = param_1[0xb];
      uVar12 = param_1[0xc];
      uVar13 = param_1[0xd];
      puVar19[2] = uVar3;
      puVar19[3] = uVar4;
      uVar3 = param_1[0xe];
      uVar4 = param_1[0xf];
      uVar14 = param_1[0x10];
      uVar15 = param_1[0x11];
      puVar19[4] = uVar5;
      puVar19[5] = uVar6;
      uVar5 = param_1[0x12];
      uVar6 = param_1[0x13];
      uVar16 = param_1[0x14];
      uVar17 = param_1[0x15];
      puVar19[6] = uVar7;
      puVar19[7] = uVar8;
      puVar19[8] = uVar9;
      puVar19[9] = uVar10;
      uVar7 = param_1[0x16];
      uVar8 = param_1[0x17];
      uVar9 = param_1[0x18];
      uVar10 = param_1[0x19];
      puVar19[0x1a] = uVar1;
      puVar19[10] = uVar2;
      puVar19[0xb] = uVar11;
      puVar19[0xc] = uVar12;
      puVar19[0xd] = uVar13;
      puVar19[0xe] = uVar3;
      puVar19[0xf] = uVar4;
      puVar19[0x10] = uVar14;
      puVar19[0x11] = uVar15;
      puVar19[0x12] = uVar5;
      puVar19[0x13] = uVar6;
      puVar19[0x14] = uVar16;
      puVar19[0x15] = uVar17;
      puVar19[0x16] = uVar7;
      puVar19[0x17] = uVar8;
      puVar19[0x18] = uVar9;
      puVar19[0x19] = uVar10;
    }
  }
  return puVar19;
}



undefined8 * sha512_256_dupctx(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  int iVar18;
  undefined8 *puVar19;
  
  iVar18 = ossl_prov_is_running();
  puVar19 = (undefined8 *)0x0;
  if (iVar18 != 0) {
    puVar19 = (undefined8 *)CRYPTO_malloc(0xd8,"providers/implementations/digests/sha2_prov.c",0x60)
    ;
    if (puVar19 != (undefined8 *)0x0) {
      uVar2 = param_1[1];
      uVar3 = param_1[2];
      uVar4 = param_1[3];
      uVar5 = param_1[4];
      uVar6 = param_1[5];
      uVar7 = param_1[6];
      uVar8 = param_1[7];
      uVar9 = param_1[8];
      uVar10 = param_1[9];
      uVar1 = param_1[0x1a];
      *puVar19 = *param_1;
      puVar19[1] = uVar2;
      uVar2 = param_1[10];
      uVar11 = param_1[0xb];
      uVar12 = param_1[0xc];
      uVar13 = param_1[0xd];
      puVar19[2] = uVar3;
      puVar19[3] = uVar4;
      uVar3 = param_1[0xe];
      uVar4 = param_1[0xf];
      uVar14 = param_1[0x10];
      uVar15 = param_1[0x11];
      puVar19[4] = uVar5;
      puVar19[5] = uVar6;
      uVar5 = param_1[0x12];
      uVar6 = param_1[0x13];
      uVar16 = param_1[0x14];
      uVar17 = param_1[0x15];
      puVar19[6] = uVar7;
      puVar19[7] = uVar8;
      puVar19[8] = uVar9;
      puVar19[9] = uVar10;
      uVar7 = param_1[0x16];
      uVar8 = param_1[0x17];
      uVar9 = param_1[0x18];
      uVar10 = param_1[0x19];
      puVar19[0x1a] = uVar1;
      puVar19[10] = uVar2;
      puVar19[0xb] = uVar11;
      puVar19[0xc] = uVar12;
      puVar19[0xd] = uVar13;
      puVar19[0xe] = uVar3;
      puVar19[0xf] = uVar4;
      puVar19[0x10] = uVar14;
      puVar19[0x11] = uVar15;
      puVar19[0x12] = uVar5;
      puVar19[0x13] = uVar6;
      puVar19[0x14] = uVar16;
      puVar19[0x15] = uVar17;
      puVar19[0x16] = uVar7;
      puVar19[0x17] = uVar8;
      puVar19[0x18] = uVar9;
      puVar19[0x19] = uVar10;
    }
  }
  return puVar19;
}



void sha1_freectx(undefined8 param_1)

{
  CRYPTO_clear_free(param_1,0x60,"providers/implementations/digests/sha2_prov.c",0x3c);
  return;
}



void sha224_freectx(undefined8 param_1)

{
  CRYPTO_clear_free(param_1,0x70,"providers/implementations/digests/sha2_prov.c",0x42);
  return;
}



void sha256_freectx(undefined8 param_1)

{
  CRYPTO_clear_free(param_1,0x70,"providers/implementations/digests/sha2_prov.c",0x47);
  return;
}



void sha256_192_freectx(undefined8 param_1)

{
  CRYPTO_clear_free(param_1,0x70,"providers/implementations/digests/sha2_prov.c",0x4c);
  return;
}



void sha384_freectx(undefined8 param_1)

{
  CRYPTO_clear_free(param_1,0xd8,"providers/implementations/digests/sha2_prov.c",0x51);
  return;
}



void sha512_freectx(undefined8 param_1)

{
  CRYPTO_clear_free(param_1,0xd8,"providers/implementations/digests/sha2_prov.c",0x56);
  return;
}



void sha512_224_freectx(undefined8 param_1)

{
  CRYPTO_clear_free(param_1,0xd8,"providers/implementations/digests/sha2_prov.c",0x5b);
  return;
}



void sha512_256_freectx(undefined8 param_1)

{
  CRYPTO_clear_free(param_1,0xd8,"providers/implementations/digests/sha2_prov.c",0x60);
  return;
}



undefined8 sha1_internal_final(SHA_CTX *param_1,uchar *param_2,undefined8 *param_3,ulong param_4)

{
  int iVar1;
  
  iVar1 = ossl_prov_is_running();
  if (((0x13 < param_4) && (iVar1 != 0)) && (iVar1 = SHA1_Final(param_2,param_1), iVar1 != 0)) {
    *param_3 = 0x14;
    return 1;
  }
  return 0;
}



undefined8 sha1_newctx(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    uVar2 = CRYPTO_zalloc(0x60,"providers/implementations/digests/sha2_prov.c",0x3c);
    return uVar2;
  }
  return 0;
}



undefined8 sha224_newctx(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    uVar2 = CRYPTO_zalloc(0x70,"providers/implementations/digests/sha2_prov.c",0x42);
    return uVar2;
  }
  return 0;
}



undefined8 sha256_newctx(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    uVar2 = CRYPTO_zalloc(0x70,"providers/implementations/digests/sha2_prov.c",0x47);
    return uVar2;
  }
  return 0;
}



undefined8 sha256_192_newctx(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    uVar2 = CRYPTO_zalloc(0x70,"providers/implementations/digests/sha2_prov.c",0x4c);
    return uVar2;
  }
  return 0;
}



undefined8 sha384_newctx(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    uVar2 = CRYPTO_zalloc(0xd8,"providers/implementations/digests/sha2_prov.c",0x51);
    return uVar2;
  }
  return 0;
}



undefined8 sha512_newctx(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    uVar2 = CRYPTO_zalloc(0xd8,"providers/implementations/digests/sha2_prov.c",0x56);
    return uVar2;
  }
  return 0;
}



undefined8 sha512_224_newctx(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    uVar2 = CRYPTO_zalloc(0xd8,"providers/implementations/digests/sha2_prov.c",0x5b);
    return uVar2;
  }
  return 0;
}



undefined8 sha512_256_newctx(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    uVar2 = CRYPTO_zalloc(0xd8,"providers/implementations/digests/sha2_prov.c",0x60);
    return uVar2;
  }
  return 0;
}



ulong sha224_internal_init(SHA256_CTX *param_1)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = ossl_prov_is_running();
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  iVar1 = SHA224_Init(param_1);
  return (ulong)(iVar1 != 0);
}



undefined8
sha224_internal_final(SHA256_CTX *param_1,uchar *param_2,undefined8 *param_3,ulong param_4)

{
  int iVar1;
  
  iVar1 = ossl_prov_is_running();
  if (((0x1b < param_4) && (iVar1 != 0)) && (iVar1 = SHA224_Final(param_2,param_1), iVar1 != 0)) {
    *param_3 = 0x1c;
    return 1;
  }
  return 0;
}



ulong sha256_internal_init(SHA256_CTX *param_1)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = ossl_prov_is_running();
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  iVar1 = SHA256_Init(param_1);
  return (ulong)(iVar1 != 0);
}



undefined8
sha256_internal_final(SHA256_CTX *param_1,uchar *param_2,undefined8 *param_3,ulong param_4)

{
  int iVar1;
  
  iVar1 = ossl_prov_is_running();
  if (((0x1f < param_4) && (iVar1 != 0)) && (iVar1 = SHA256_Final(param_2,param_1), iVar1 != 0)) {
    *param_3 = 0x20;
    return 1;
  }
  return 0;
}



undefined8
sha256_192_internal_final(SHA256_CTX *param_1,uchar *param_2,undefined8 *param_3,ulong param_4)

{
  int iVar1;
  
  iVar1 = ossl_prov_is_running();
  if (((0x17 < param_4) && (iVar1 != 0)) && (iVar1 = SHA256_Final(param_2,param_1), iVar1 != 0)) {
    *param_3 = 0x18;
    return 1;
  }
  return 0;
}



ulong sha256_192_internal_init(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = ossl_prov_is_running();
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  iVar1 = ossl_sha256_192_init(param_1);
  return (ulong)(iVar1 != 0);
}



ulong sha384_internal_init(SHA512_CTX *param_1)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = ossl_prov_is_running();
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  iVar1 = SHA384_Init(param_1);
  return (ulong)(iVar1 != 0);
}



undefined8
sha384_internal_final(SHA512_CTX *param_1,uchar *param_2,undefined8 *param_3,ulong param_4)

{
  int iVar1;
  
  iVar1 = ossl_prov_is_running();
  if (((0x2f < param_4) && (iVar1 != 0)) && (iVar1 = SHA384_Final(param_2,param_1), iVar1 != 0)) {
    *param_3 = 0x30;
    return 1;
  }
  return 0;
}



ulong sha512_internal_init(SHA512_CTX *param_1)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = ossl_prov_is_running();
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  iVar1 = SHA512_Init(param_1);
  return (ulong)(iVar1 != 0);
}



undefined8
sha512_internal_final(SHA512_CTX *param_1,uchar *param_2,undefined8 *param_3,ulong param_4)

{
  int iVar1;
  
  iVar1 = ossl_prov_is_running();
  if (((0x3f < param_4) && (iVar1 != 0)) && (iVar1 = SHA512_Final(param_2,param_1), iVar1 != 0)) {
    *param_3 = 0x40;
    return 1;
  }
  return 0;
}



undefined8
sha512_224_internal_final(SHA512_CTX *param_1,uchar *param_2,undefined8 *param_3,ulong param_4)

{
  int iVar1;
  
  iVar1 = ossl_prov_is_running();
  if (((0x1b < param_4) && (iVar1 != 0)) && (iVar1 = SHA512_Final(param_2,param_1), iVar1 != 0)) {
    *param_3 = 0x1c;
    return 1;
  }
  return 0;
}



undefined8
sha512_256_internal_final(SHA512_CTX *param_1,uchar *param_2,undefined8 *param_3,ulong param_4)

{
  int iVar1;
  
  iVar1 = ossl_prov_is_running();
  if (((0x1f < param_4) && (iVar1 != 0)) && (iVar1 = SHA512_Final(param_2,param_1), iVar1 != 0)) {
    *param_3 = 0x20;
    return 1;
  }
  return 0;
}



ulong sha512_224_internal_init(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = ossl_prov_is_running();
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  iVar1 = sha512_224_init(param_1);
  return (ulong)(iVar1 != 0);
}



ulong sha512_256_internal_init(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = ossl_prov_is_running();
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  iVar1 = sha512_256_init(param_1);
  return (ulong)(iVar1 != 0);
}



void sha256_192_copyctx(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  uVar1 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  uVar1 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  uVar1 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar1;
  uVar1 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar1;
  return;
}



void sha256_copyctx(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  uVar1 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  uVar1 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  uVar1 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar1;
  uVar1 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar1;
  return;
}



void sha512_256_copyctx(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  uVar1 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  uVar1 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  uVar1 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar1;
  uVar1 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar1;
  uVar1 = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar1;
  uVar1 = param_2[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar1;
  uVar1 = param_2[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar1;
  uVar1 = param_2[0x15];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = uVar1;
  uVar1 = param_2[0x17];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = uVar1;
  uVar1 = param_2[0x19];
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = uVar1;
  param_1[0x1a] = param_2[0x1a];
  return;
}



void sha512_copyctx(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  uVar1 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  uVar1 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  uVar1 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar1;
  uVar1 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar1;
  uVar1 = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar1;
  uVar1 = param_2[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar1;
  uVar1 = param_2[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar1;
  uVar1 = param_2[0x15];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = uVar1;
  uVar1 = param_2[0x17];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = uVar1;
  uVar1 = param_2[0x19];
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = uVar1;
  param_1[0x1a] = param_2[0x1a];
  return;
}



void sha512_224_copyctx(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  uVar1 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  uVar1 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  uVar1 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar1;
  uVar1 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar1;
  uVar1 = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar1;
  uVar1 = param_2[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar1;
  uVar1 = param_2[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar1;
  uVar1 = param_2[0x15];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = uVar1;
  uVar1 = param_2[0x17];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = uVar1;
  uVar1 = param_2[0x19];
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = uVar1;
  param_1[0x1a] = param_2[0x1a];
  return;
}


