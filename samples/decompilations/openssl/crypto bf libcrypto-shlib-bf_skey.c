
void BF_set_key(BF_KEY *key,int len,uchar *data)

{
  uchar uVar1;
  uint *puVar2;
  int iVar3;
  long lVar4;
  uchar *puVar5;
  ulong uVar6;
  uchar *puVar7;
  uchar *puVar8;
  uchar *puVar9;
  BF_KEY *pBVar10;
  undefined8 *puVar11;
  BF_KEY *pBVar12;
  undefined8 *puVar13;
  uchar *puVar14;
  long in_FS_OFFSET;
  undefined8 local_38;
  long local_30;
  
  pBVar10 = (BF_KEY *)key->S;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)key->P = bf_init;
  *(undefined8 *)(key->S + 0x3fe) = DAT_001011a0;
  puVar13 = (undefined8 *)((ulong)(key->P + 2) & 0xfffffffffffffff8);
  lVar4 = (long)key - (long)puVar13;
  puVar11 = (undefined8 *)((long)&bf_init - lVar4);
  for (uVar6 = (ulong)((int)lVar4 + 0x1048U >> 3); uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar13 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar13 = puVar13 + 1;
  }
  iVar3 = 0x48;
  if (len < 0x49) {
    iVar3 = len;
  }
  puVar14 = data + iVar3;
  puVar5 = data;
  pBVar12 = key;
  do {
    uVar1 = *puVar5;
    puVar7 = puVar5 + 1;
    if (puVar14 <= puVar5 + 1) {
      puVar7 = data;
    }
    puVar9 = puVar7 + 1;
    if (puVar14 <= puVar7 + 1) {
      puVar9 = data;
    }
    puVar8 = puVar9 + 1;
    if (puVar14 <= puVar9 + 1) {
      puVar8 = data;
    }
    puVar5 = puVar8 + 1;
    if (puVar14 <= puVar8 + 1) {
      puVar5 = data;
    }
    pBVar12->P[0] = pBVar12->P[0] ^ CONCAT31(CONCAT21(CONCAT11(uVar1,*puVar7),*puVar9),*puVar8);
    pBVar12 = (BF_KEY *)(pBVar12->P + 1);
  } while (pBVar10 != pBVar12);
  local_38 = 0;
  pBVar12 = key;
  do {
    puVar2 = pBVar12->P;
    BF_encrypt((uint *)&local_38,key);
    *(undefined8 *)pBVar12->P = local_38;
    pBVar12 = (BF_KEY *)(puVar2 + 2);
  } while (pBVar10 != (BF_KEY *)(puVar2 + 2));
  do {
    puVar2 = pBVar10->P;
    BF_encrypt((uint *)&local_38,key);
    *(undefined8 *)pBVar10->P = local_38;
    pBVar10 = (BF_KEY *)(puVar2 + 2);
  } while (key + 1 != (BF_KEY *)(puVar2 + 2));
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


