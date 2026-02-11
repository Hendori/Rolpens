
void sm3_copyctx(undefined8 *param_1,undefined8 *param_2)

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
  uVar1 = *(undefined8 *)((long)param_2 + 100);
  *(undefined8 *)((long)param_1 + 0x5c) = *(undefined8 *)((long)param_2 + 0x5c);
  *(undefined8 *)((long)param_1 + 100) = uVar1;
  return;
}



ulong sm3_internal_init(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = ossl_prov_is_running();
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  iVar1 = ossl_sm3_init(param_1);
  return (ulong)(iVar1 != 0);
}



void sm3_get_params(undefined8 param_1)

{
  ossl_digest_default_get_params(param_1,0x40,0x20,0);
  return;
}



undefined8 * sm3_dupctx(undefined8 *param_1)

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
    puVar14 = (undefined8 *)CRYPTO_malloc(0x6c,"providers/implementations/digests/sm3_prov.c",0x10);
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
      uVar1 = *(undefined8 *)((long)param_1 + 0x5c);
      uVar12 = *(undefined8 *)((long)param_1 + 100);
      puVar14[2] = uVar2;
      puVar14[3] = uVar3;
      puVar14[10] = uVar10;
      puVar14[0xb] = uVar11;
      puVar14[4] = uVar4;
      puVar14[5] = uVar5;
      puVar14[6] = uVar6;
      puVar14[7] = uVar7;
      puVar14[8] = uVar8;
      puVar14[9] = uVar9;
      *(undefined8 *)((long)puVar14 + 0x5c) = uVar1;
      *(undefined8 *)((long)puVar14 + 100) = uVar12;
    }
  }
  return puVar14;
}



void sm3_freectx(undefined8 param_1)

{
  CRYPTO_clear_free(param_1,0x6c,"providers/implementations/digests/sm3_prov.c",0x10);
  return;
}



undefined8
sm3_internal_final(undefined8 param_1,undefined8 param_2,undefined8 *param_3,ulong param_4)

{
  int iVar1;
  
  iVar1 = ossl_prov_is_running();
  if (((0x1f < param_4) && (iVar1 != 0)) && (iVar1 = ossl_sm3_final(param_2,param_1), iVar1 != 0)) {
    *param_3 = 0x20;
    return 1;
  }
  return 0;
}



undefined8 sm3_newctx(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    uVar2 = CRYPTO_zalloc(0x6c,"providers/implementations/digests/sm3_prov.c",0x10);
    return uVar2;
  }
  return 0;
}


