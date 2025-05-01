
void ossl_sha3_reset(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  *param_1 = 0;
  param_1[0x18] = 0;
  puVar2 = (undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8);
  for (uVar1 = (ulong)(((int)param_1 -
                       (int)(undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8)) + 200U >> 3);
      uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  return;
}



undefined8 ossl_sha3_init(long param_1,undefined1 param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = (800 - param_3) * 2;
  if (0x547 < uVar1) {
    return 0;
  }
  ossl_sha3_reset();
  *(undefined1 *)(param_1 + 0x188) = param_2;
  *(ulong *)(param_1 + 0x170) = uVar1 >> 3;
  *(ulong *)(param_1 + 0x178) = param_3 >> 3;
  return 1;
}



void ossl_keccak_init(long param_1,undefined1 param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  
  iVar1 = ossl_sha3_init(param_1,param_2);
  if (iVar1 != 0) {
    *(ulong *)(param_1 + 0x178) = param_4 >> 3;
  }
  return;
}



undefined8 ossl_sha3_update(long param_1,void *param_2,size_t param_3)

{
  ulong uVar1;
  long lVar2;
  size_t sVar3;
  void *pvVar4;
  ulong uVar5;
  
  uVar1 = *(ulong *)(param_1 + 0x170);
  if (param_3 == 0) {
    return 1;
  }
  if (*(int *)(param_1 + 0x1a8) - 2U < 2) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x180);
  if (lVar2 == 0) {
    pvVar4 = param_2;
    if (param_3 < uVar1) goto LAB_0010014c;
LAB_00100208:
    sVar3 = SHA3_absorb(param_1,pvVar4,param_3,uVar1);
    uVar5 = param_3;
    param_3 = sVar3;
  }
  else {
    uVar5 = uVar1 - lVar2;
    if (param_3 < uVar5) {
      memcpy((void *)(param_1 + 200 + lVar2),param_2,param_3);
      *(long *)(param_1 + 0x180) = *(long *)(param_1 + 0x180) + param_3;
      return 1;
    }
    pvVar4 = (void *)((long)param_2 + uVar5);
    memcpy((void *)(param_1 + 200 + lVar2),param_2,uVar5);
    param_3 = (lVar2 + param_3) - uVar1;
    SHA3_absorb(param_1,param_1 + 200,uVar1,uVar1);
    *(undefined8 *)(param_1 + 0x180) = 0;
    uVar5 = param_3;
    if (uVar1 <= param_3) goto LAB_00100208;
  }
  if (param_3 == 0) {
    return 1;
  }
  param_2 = (void *)((long)pvVar4 + (uVar5 - param_3));
LAB_0010014c:
  memcpy((void *)(param_1 + 200),param_2,param_3);
  *(size_t *)(param_1 + 0x180) = param_3;
  return 1;
}



bool ossl_sha3_final(long param_1,undefined8 param_2,long param_3)

{
  byte *pbVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  if (param_3 != 0) {
    bVar4 = 1 < *(int *)(param_1 + 0x1a8) - 2U;
    if (bVar4) {
      lVar2 = *(long *)(param_1 + 0x170);
      lVar3 = *(long *)(param_1 + 0x180);
      memset((void *)(param_1 + 200 + lVar3),0,lVar2 - lVar3);
      *(undefined1 *)(param_1 + 200 + lVar3) = *(undefined1 *)(param_1 + 0x188);
      pbVar1 = (byte *)(param_1 + 199 + lVar2);
      *pbVar1 = *pbVar1 | 0x80;
      SHA3_absorb(param_1,param_1 + 200,lVar2,lVar2);
      *(undefined4 *)(param_1 + 0x1a8) = 2;
      SHA3_squeeze(param_1,param_2,param_3,lVar2,0);
    }
    return bVar4;
  }
  return true;
}



undefined8 ossl_sha3_squeeze(long param_1,void *param_2,ulong param_3)

{
  byte *pbVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong __n;
  
  uVar2 = *(ulong *)(param_1 + 0x170);
  uVar3 = *(ulong *)(param_1 + 0x180);
  if (param_3 != 0) {
    if (*(int *)(param_1 + 0x1a8) == 2) {
      return 0;
    }
    if (*(int *)(param_1 + 0x1a8) == 3) {
      if (uVar3 == 0) {
        uVar5 = 1;
      }
      else {
        __n = param_3;
        if (uVar3 <= param_3) {
          __n = uVar3;
        }
        memcpy(param_2,(void *)(param_1 + 200 + (uVar2 - uVar3)),__n);
        *(long *)(param_1 + 0x180) = *(long *)(param_1 + 0x180) - __n;
        param_3 = param_3 - __n;
        if (param_3 == 0) {
          return 1;
        }
        param_2 = (void *)((long)param_2 + __n);
        uVar5 = 1;
      }
    }
    else {
      memset((void *)(param_1 + 200 + uVar3),0,uVar2 - uVar3);
      *(undefined1 *)(param_1 + 200 + uVar3) = *(undefined1 *)(param_1 + 0x188);
      pbVar1 = (byte *)(param_1 + 199 + uVar2);
      *pbVar1 = *pbVar1 | 0x80;
      SHA3_absorb(param_1,param_1 + 200,uVar2,uVar2);
      uVar5 = 0;
      *(undefined4 *)(param_1 + 0x1a8) = 3;
      *(undefined8 *)(param_1 + 0x180) = 0;
    }
    if (uVar2 <= param_3) {
      uVar3 = param_3 / uVar2;
      param_3 = param_3 % uVar2;
      lVar4 = uVar3 * uVar2;
      SHA3_squeeze(param_1,param_2,lVar4,uVar2,uVar5);
      if (param_3 == 0) {
        return 1;
      }
      param_2 = (void *)((long)param_2 + lVar4);
      uVar5 = 1;
    }
    SHA3_squeeze(param_1,(void *)(param_1 + 200),uVar2,uVar2,uVar5);
    memcpy(param_2,(void *)(param_1 + 200),param_3);
    *(ulong *)(param_1 + 0x180) = uVar2 - param_3;
  }
  return 1;
}


