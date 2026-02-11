
void DES_set_odd_parity(DES_cblock *key)

{
  uchar *puVar1;
  uchar *puVar2;
  
  puVar1 = *key;
  do {
    puVar2 = puVar1 + 1;
    *puVar1 = odd_parity[*puVar1];
    puVar1 = puVar2;
  } while ((DES_cblock *)puVar2 != key + 1);
  return;
}



int DES_check_key_parity(const_DES_cblock *key)

{
  uchar *puVar1;
  byte bVar2;
  uint uVar3;
  
  puVar1 = key[1];
  uVar3 = 0xffffffff;
  do {
    bVar2 = (*key)[0];
    key = (const_DES_cblock *)((long)key + 1);
    bVar2 = bVar2 >> 4 ^ bVar2;
    bVar2 = bVar2 >> 2 ^ bVar2;
    uVar3 = uVar3 & (~(uint)(byte)(bVar2 >> 1 ^ bVar2) & 1) - 1;
  } while ((const_DES_cblock *)puVar1 != key);
  return uVar3 & 1;
}



int DES_is_weak_key(const_DES_cblock *key)

{
  uint uVar1;
  uint uVar2;
  undefined1 *a;
  undefined1 *puVar3;
  
  uVar2 = 0;
  a = weak_keys;
  do {
    puVar3 = a + 8;
    uVar1 = CRYPTO_memcmp(a,key,8);
    uVar2 = uVar2 | (int)(uVar1 - 1 & ~uVar1) >> 0x1f;
    a = puVar3;
  } while (puVar3 != odd_parity);
  return uVar2 & 1;
}



void DES_set_key_unchecked(const_DES_cblock *key,DES_key_schedule *schedule)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  
  piVar4 = &shifts2_0;
  uVar2 = (*(uint *)(*key + 4) >> 4 ^ *(uint *)*key) & 0xf0f0f0f;
  uVar1 = *(uint *)*key ^ uVar2;
  uVar3 = uVar2 << 4 ^ *(uint *)(*key + 4);
  uVar2 = (uVar1 << 0x12 ^ uVar1) & 0xcccc0000;
  uVar2 = uVar2 >> 0x12 ^ uVar1 ^ uVar2;
  uVar1 = (uVar3 << 0x12 ^ uVar3) & 0xcccc0000;
  uVar3 = uVar3 ^ uVar1 ^ uVar1 >> 0x12;
  uVar1 = (uVar3 >> 1 ^ uVar2) & 0x55555555;
  uVar2 = uVar2 ^ uVar1;
  uVar3 = uVar1 * 2 ^ uVar3;
  uVar1 = (uVar2 >> 8 ^ uVar3) & 0xff00ff;
  uVar3 = uVar3 ^ uVar1;
  uVar2 = uVar1 << 8 ^ uVar2;
  uVar1 = (uVar3 >> 1 ^ uVar2) & 0x55555555;
  uVar2 = uVar2 ^ uVar1;
  uVar3 = uVar1 * 2 ^ uVar3;
  uVar1 = uVar2 & 0xfffffff;
  uVar2 = (uVar3 & 0xff) << 0x10 | uVar2 >> 4 & 0xf000000 | uVar3 & 0xff00 | uVar3 >> 0x10 & 0xff;
  do {
    if (*piVar4 == 0) {
      uVar5 = uVar1 >> 1 | uVar1 << 0x1b;
      uVar3 = uVar2 >> 1 | uVar2 << 0x1b;
    }
    else {
      uVar5 = uVar1 >> 2 | uVar1 << 0x1a;
      uVar3 = uVar2 >> 2 | uVar2 << 0x1a;
    }
    uVar1 = uVar5 & 0xfffffff;
    uVar2 = uVar3 & 0xfffffff;
    uVar5 = *(uint *)(des_skb + (ulong)(uVar1 >> 6 & 3 | uVar1 >> 7 & 0x3c) * 4 + 0x100) |
            *(uint *)(des_skb + (ulong)(uVar1 >> 0xd & 0xf | uVar1 >> 0xe & 0x30) * 4 + 0x200) |
            *(uint *)(des_skb + (ulong)(uVar5 & 0x3f) * 4) |
            *(uint *)(des_skb +
                     (ulong)(uVar1 >> 0x14 & 1 | uVar1 >> 0x15 & 6 | uVar1 >> 0x16 & 0x38) * 4 +
                     0x300);
    piVar4 = piVar4 + 1;
    uVar3 = *(uint *)(des_skb + (ulong)(uVar2 >> 0xf & 0x3f) * 4 + 0x600) |
            *(uint *)(des_skb + (ulong)(uVar3 & 0x3f) * 4 + 0x400) |
            *(uint *)(des_skb + (ulong)(uVar2 >> 7 & 3 | uVar2 >> 8 & 0x3c) * 4 + 0x500) |
            *(uint *)(des_skb + (ulong)(uVar2 >> 0x15 & 0xf | uVar2 >> 0x16 & 0x30) * 4 + 0x700);
    *(uint *)schedule = (uVar3 << 0x10) >> 0x1e | (uVar5 & 0xffff | uVar3 << 0x10) << 2;
    *(uint *)((long)schedule + 4) = uVar3 >> 0x1a | (uVar3 & 0xffff0000 | uVar5 >> 0x10) << 6;
    schedule = (DES_key_schedule *)((long)schedule + 8);
  } while (piVar4 != (int *)des_skb);
  return;
}



int DES_set_key(const_DES_cblock *key,DES_key_schedule *schedule)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DES_check_key_parity(key);
  iVar2 = DES_is_weak_key(key);
  iVar1 = -(uint)(iVar1 == 0);
  if (iVar2 != 0) {
    iVar1 = -2;
  }
  DES_set_key_unchecked(key,schedule);
  return iVar1;
}



int DES_set_key_checked(const_DES_cblock *key,DES_key_schedule *schedule)

{
  int iVar1;
  
  iVar1 = DES_check_key_parity(key);
  if (iVar1 == 0) {
    iVar1 = -1;
  }
  else {
    iVar1 = DES_is_weak_key(key);
    if (iVar1 == 0) {
      DES_set_key_unchecked(key,schedule);
      iVar1 = 0;
    }
    else {
      iVar1 = -2;
    }
  }
  return iVar1;
}



int DES_key_sched(const_DES_cblock *key,DES_key_schedule *schedule)

{
  int iVar1;
  
  iVar1 = DES_set_key(key,schedule);
  return iVar1;
}


