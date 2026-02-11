
void DES_string_to_key(char *str,DES_cblock *key)

{
  byte bVar1;
  int iVar2;
  size_t sVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  DES_key_schedule DStack_b8;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *key = (DES_cblock)0x0;
  sVar3 = strlen(str);
  iVar2 = (int)sVar3;
  if (0 < iVar2) {
    uVar4 = 0;
    while( true ) {
      bVar1 = str[uVar4];
      if ((uVar4 & 8) == 0) {
        (*key)[(uint)uVar4 & 7] = (*key)[(uint)uVar4 & 7] ^ bVar1 * '\x02';
      }
      else {
        bVar1 = bVar1 << 4 | bVar1 >> 4;
        bVar1 = bVar1 * '\x04' & 0xcc | bVar1 >> 2 & 0x33;
        (*key)[~(uint)uVar4 & 7] =
             (*key)[~(uint)uVar4 & 7] ^ (bVar1 * '\x02' & 0xaa | bVar1 >> 1 & 0x55);
      }
      if (uVar4 == iVar2 - 1) break;
      uVar4 = uVar4 + 1;
    }
  }
  DES_set_odd_parity(key);
  DES_set_key_unchecked(key,&DStack_b8);
  DES_cbc_cksum((uchar *)str,key,(long)iVar2,&DStack_b8,key);
  OPENSSL_cleanse(&DStack_b8,0x80);
  DES_set_odd_parity(key);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void DES_string_to_2keys(char *str,DES_cblock *key1,DES_cblock *key2)

{
  int iVar1;
  size_t sVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  DES_key_schedule DStack_b8;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *key1 = (DES_cblock)0x0;
  *key2 = (DES_cblock)0x0;
  sVar2 = strlen(str);
  iVar1 = (int)sVar2;
  uVar5 = 0;
  if (0 < iVar1) {
    do {
      bVar3 = str[uVar5];
      if ((uVar5 & 0x10) == 0) {
        bVar3 = bVar3 * '\x02';
        uVar6 = (ulong)((uint)uVar5 & 7);
        if ((uVar5 & 8) == 0) goto LAB_00100173;
LAB_001001c3:
        (*key2)[uVar6] = (*key2)[uVar6] ^ bVar3;
      }
      else {
        bVar3 = bVar3 << 4 | bVar3 >> 4;
        uVar4 = (uint)bVar3 * 4 & 0xffffffcc | bVar3 >> 2 & 0x33;
        bVar3 = (char)uVar4 * '\x02' & 0xaaU | (byte)(uVar4 >> 1) & 0x55;
        uVar6 = (ulong)(~(uint)uVar5 & 7);
        if ((uVar5 & 8) != 0) goto LAB_001001c3;
LAB_00100173:
        (*key1)[uVar6] = (*key1)[uVar6] ^ bVar3;
      }
      if (iVar1 - 1 == uVar5) goto LAB_001001cf;
      uVar5 = uVar5 + 1;
    } while( true );
  }
LAB_00100270:
  *key2 = *key1;
LAB_001001d9:
  DES_set_odd_parity(key1);
  DES_set_odd_parity(key2);
  DES_set_key_unchecked(key1,&DStack_b8);
  DES_cbc_cksum((uchar *)str,key1,(long)iVar1,&DStack_b8,key1);
  DES_set_key_unchecked(key2,&DStack_b8);
  DES_cbc_cksum((uchar *)str,key2,(long)iVar1,&DStack_b8,key2);
  OPENSSL_cleanse(&DStack_b8,0x80);
  DES_set_odd_parity(key1);
  DES_set_odd_parity(key2);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_001001cf:
  if (8 < iVar1) goto LAB_001001d9;
  goto LAB_00100270;
}


