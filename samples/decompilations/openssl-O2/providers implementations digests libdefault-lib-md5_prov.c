
void md5_copyctx(undefined8 *param_1,undefined8 *param_2)

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
  uVar1 = *(undefined8 *)((long)param_2 + 0x54);
  *(undefined8 *)((long)param_1 + 0x4c) = *(undefined8 *)((long)param_2 + 0x4c);
  *(undefined8 *)((long)param_1 + 0x54) = uVar1;
  return;
}



ulong md5_internal_init(MD5_CTX *param_1)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = ossl_prov_is_running();
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  iVar1 = MD5_Init(param_1);
  return (ulong)(iVar1 != 0);
}



void md5_get_params(undefined8 param_1)

{
  ossl_digest_default_get_params(param_1,0x40,0x10,0);
  return;
}



undefined8 * md5_dupctx(undefined8 *param_1)

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
    puVar13 = (undefined8 *)CRYPTO_malloc(0x5c,"providers/implementations/digests/md5_prov.c",0x16);
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
      uVar10 = *(undefined8 *)((long)param_1 + 0x4c);
      uVar11 = *(undefined8 *)((long)param_1 + 0x54);
      *puVar13 = *param_1;
      puVar13[1] = uVar1;
      puVar13[2] = uVar2;
      puVar13[3] = uVar3;
      puVar13[8] = uVar8;
      puVar13[9] = uVar9;
      puVar13[4] = uVar4;
      puVar13[5] = uVar5;
      puVar13[6] = uVar6;
      puVar13[7] = uVar7;
      *(undefined8 *)((long)puVar13 + 0x4c) = uVar10;
      *(undefined8 *)((long)puVar13 + 0x54) = uVar11;
    }
  }
  return puVar13;
}



void md5_freectx(undefined8 param_1)

{
  CRYPTO_clear_free(param_1,0x5c,"providers/implementations/digests/md5_prov.c",0x16);
  return;
}



undefined8 md5_internal_final(MD5_CTX *param_1,uchar *param_2,undefined8 *param_3,ulong param_4)

{
  int iVar1;
  
  iVar1 = ossl_prov_is_running();
  if (((0xf < param_4) && (iVar1 != 0)) && (iVar1 = MD5_Final(param_2,param_1), iVar1 != 0)) {
    *param_3 = 0x10;
    return 1;
  }
  return 0;
}



undefined8 md5_newctx(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    uVar2 = CRYPTO_zalloc(0x5c,"providers/implementations/digests/md5_prov.c",0x16);
    return uVar2;
  }
  return 0;
}


