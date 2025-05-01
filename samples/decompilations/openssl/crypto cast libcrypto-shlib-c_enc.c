
void CAST_encrypt(uint *data,CAST_KEY *key)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = key->data[0] + data[1];
  bVar1 = (byte)key->data[1] & 0x1f;
  uVar2 = uVar2 << bVar1 | uVar2 >> 0x20 - bVar1;
  uVar3 = ((*(uint *)(&CAST_S_table0 + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
           *(uint *)(&CAST_S_table1 + (ulong)(uVar2 & 0xff) * 4)) +
          *(int *)(&CAST_S_table3 + (ulong)(uVar2 >> 0x10 & 0xff) * 4)) -
          *(int *)(&CAST_S_table2 + (ulong)(uVar2 >> 0x18) * 4) ^ *data;
  uVar2 = key->data[2] ^ uVar3;
  bVar1 = (byte)key->data[3] & 0x1f;
  uVar2 = uVar2 << bVar1 | uVar2 >> 0x20 - bVar1;
  uVar4 = (*(int *)(&CAST_S_table0 + (ulong)(uVar2 >> 8 & 0xff) * 4) -
          *(int *)(&CAST_S_table1 + (ulong)(uVar2 & 0xff) * 4)) +
          *(int *)(&CAST_S_table2 + (ulong)(uVar2 >> 0x18) * 4) ^
          data[1] ^ *(uint *)(&CAST_S_table3 + (ulong)(uVar2 >> 0x10 & 0xff) * 4);
  uVar2 = key->data[4] - uVar4;
  bVar1 = (byte)key->data[5] & 0x1f;
  uVar2 = uVar2 << bVar1 | uVar2 >> 0x20 - bVar1;
  uVar3 = (*(int *)(&CAST_S_table1 + (ulong)(uVar2 & 0xff) * 4) +
           *(int *)(&CAST_S_table0 + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
          *(uint *)(&CAST_S_table2 + (ulong)(uVar2 >> 0x18) * 4)) -
          *(int *)(&CAST_S_table3 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^ uVar3;
  uVar2 = key->data[6] + uVar3;
  bVar1 = (byte)key->data[7] & 0x1f;
  uVar2 = uVar2 << bVar1 | uVar2 >> 0x20 - bVar1;
  uVar4 = ((*(uint *)(&CAST_S_table0 + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
           *(uint *)(&CAST_S_table1 + (ulong)(uVar2 & 0xff) * 4)) +
          *(int *)(&CAST_S_table3 + (ulong)(uVar2 >> 0x10 & 0xff) * 4)) -
          *(int *)(&CAST_S_table2 + (ulong)(uVar2 >> 0x18) * 4) ^ uVar4;
  uVar2 = key->data[8] ^ uVar4;
  bVar1 = (byte)key->data[9] & 0x1f;
  uVar2 = uVar2 << bVar1 | uVar2 >> 0x20 - bVar1;
  uVar5 = (*(int *)(&CAST_S_table0 + (ulong)(uVar2 >> 8 & 0xff) * 4) -
          *(int *)(&CAST_S_table1 + (ulong)(uVar2 & 0xff) * 4)) +
          *(int *)(&CAST_S_table2 + (ulong)(uVar2 >> 0x18) * 4) ^
          uVar3 ^ *(uint *)(&CAST_S_table3 + (ulong)(uVar2 >> 0x10 & 0xff) * 4);
  uVar2 = key->data[10] - uVar5;
  bVar1 = (byte)key->data[0xb] & 0x1f;
  uVar2 = uVar2 << bVar1 | uVar2 >> 0x20 - bVar1;
  uVar4 = (*(int *)(&CAST_S_table1 + (ulong)(uVar2 & 0xff) * 4) +
           *(int *)(&CAST_S_table0 + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
          *(uint *)(&CAST_S_table2 + (ulong)(uVar2 >> 0x18) * 4)) -
          *(int *)(&CAST_S_table3 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^ uVar4;
  uVar2 = key->data[0xc] + uVar4;
  bVar1 = (byte)key->data[0xd] & 0x1f;
  uVar2 = uVar2 << bVar1 | uVar2 >> 0x20 - bVar1;
  uVar5 = uVar5 ^ ((*(uint *)(&CAST_S_table0 + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
                   *(uint *)(&CAST_S_table1 + (ulong)(uVar2 & 0xff) * 4)) +
                  *(int *)(&CAST_S_table3 + (ulong)(uVar2 >> 0x10 & 0xff) * 4)) -
                  *(int *)(&CAST_S_table2 + (ulong)(uVar2 >> 0x18) * 4);
  uVar2 = key->data[0xe] ^ uVar5;
  bVar1 = (byte)key->data[0xf] & 0x1f;
  uVar2 = uVar2 << bVar1 | uVar2 >> 0x20 - bVar1;
  uVar3 = (*(int *)(&CAST_S_table0 + (ulong)(uVar2 >> 8 & 0xff) * 4) -
          *(int *)(&CAST_S_table1 + (ulong)(uVar2 & 0xff) * 4)) +
          *(int *)(&CAST_S_table2 + (ulong)(uVar2 >> 0x18) * 4) ^
          uVar4 ^ *(uint *)(&CAST_S_table3 + (ulong)(uVar2 >> 0x10 & 0xff) * 4);
  uVar2 = key->data[0x10] - uVar3;
  bVar1 = (byte)key->data[0x11] & 0x1f;
  uVar2 = uVar2 << bVar1 | uVar2 >> 0x20 - bVar1;
  uVar5 = (*(int *)(&CAST_S_table1 + (ulong)(uVar2 & 0xff) * 4) +
           *(int *)(&CAST_S_table0 + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
          *(uint *)(&CAST_S_table2 + (ulong)(uVar2 >> 0x18) * 4)) -
          *(int *)(&CAST_S_table3 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^ uVar5;
  uVar2 = key->data[0x12] + uVar5;
  bVar1 = (byte)key->data[0x13] & 0x1f;
  uVar2 = uVar2 << bVar1 | uVar2 >> 0x20 - bVar1;
  uVar3 = ((*(uint *)(&CAST_S_table0 + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
           *(uint *)(&CAST_S_table1 + (ulong)(uVar2 & 0xff) * 4)) +
          *(int *)(&CAST_S_table3 + (ulong)(uVar2 >> 0x10 & 0xff) * 4)) -
          *(int *)(&CAST_S_table2 + (ulong)(uVar2 >> 0x18) * 4) ^ uVar3;
  uVar2 = key->data[0x14] ^ uVar3;
  bVar1 = (byte)key->data[0x15] & 0x1f;
  uVar2 = uVar2 << bVar1 | uVar2 >> 0x20 - bVar1;
  uVar4 = (*(int *)(&CAST_S_table0 + (ulong)(uVar2 >> 8 & 0xff) * 4) -
          *(int *)(&CAST_S_table1 + (ulong)(uVar2 & 0xff) * 4)) +
          *(int *)(&CAST_S_table2 + (ulong)(uVar2 >> 0x18) * 4) ^
          uVar5 ^ *(uint *)(&CAST_S_table3 + (ulong)(uVar2 >> 0x10 & 0xff) * 4);
  uVar2 = key->data[0x16] - uVar4;
  bVar1 = (byte)key->data[0x17] & 0x1f;
  uVar2 = uVar2 << bVar1 | uVar2 >> 0x20 - bVar1;
  uVar3 = (*(int *)(&CAST_S_table1 + (ulong)(uVar2 & 0xff) * 4) +
           *(int *)(&CAST_S_table0 + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
          *(uint *)(&CAST_S_table2 + (ulong)(uVar2 >> 0x18) * 4)) -
          *(int *)(&CAST_S_table3 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^ uVar3;
  if (key->short_key == 0) {
    uVar2 = key->data[0x18] + uVar3;
    bVar1 = (byte)key->data[0x19] & 0x1f;
    uVar2 = uVar2 << bVar1 | uVar2 >> 0x20 - bVar1;
    uVar4 = ((*(uint *)(&CAST_S_table0 + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
             *(uint *)(&CAST_S_table1 + (ulong)(uVar2 & 0xff) * 4)) +
            *(int *)(&CAST_S_table3 + (ulong)(uVar2 >> 0x10 & 0xff) * 4)) -
            *(int *)(&CAST_S_table2 + (ulong)(uVar2 >> 0x18) * 4) ^ uVar4;
    uVar2 = key->data[0x1a] ^ uVar4;
    bVar1 = (byte)key->data[0x1b] & 0x1f;
    uVar2 = uVar2 << bVar1 | uVar2 >> 0x20 - bVar1;
    uVar3 = (*(int *)(&CAST_S_table0 + (ulong)(uVar2 >> 8 & 0xff) * 4) -
            *(int *)(&CAST_S_table1 + (ulong)(uVar2 & 0xff) * 4)) +
            *(int *)(&CAST_S_table2 + (ulong)(uVar2 >> 0x18) * 4) ^
            uVar3 ^ *(uint *)(&CAST_S_table3 + (ulong)(uVar2 >> 0x10 & 0xff) * 4);
    uVar2 = key->data[0x1c] - uVar3;
    bVar1 = (byte)key->data[0x1d] & 0x1f;
    uVar2 = uVar2 << bVar1 | uVar2 >> 0x20 - bVar1;
    uVar4 = (*(int *)(&CAST_S_table1 + (ulong)(uVar2 & 0xff) * 4) +
             *(int *)(&CAST_S_table0 + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
            *(uint *)(&CAST_S_table2 + (ulong)(uVar2 >> 0x18) * 4)) -
            *(int *)(&CAST_S_table3 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^ uVar4;
    uVar2 = key->data[0x1e] + uVar4;
    bVar1 = (byte)key->data[0x1f] & 0x1f;
    uVar2 = uVar2 << bVar1 | uVar2 >> 0x20 - bVar1;
    uVar3 = ((*(uint *)(&CAST_S_table0 + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
             *(uint *)(&CAST_S_table1 + (ulong)(uVar2 & 0xff) * 4)) +
            *(int *)(&CAST_S_table3 + (ulong)(uVar2 >> 0x10 & 0xff) * 4)) -
            *(int *)(&CAST_S_table2 + (ulong)(uVar2 >> 0x18) * 4) ^ uVar3;
  }
  data[1] = uVar4;
  *data = uVar3;
  return;
}



void CAST_decrypt(uint *data,CAST_KEY *key)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = *data;
  uVar2 = data[1];
  if (key->short_key == 0) {
    uVar4 = key->data[0x1e] + uVar2;
    bVar1 = (byte)key->data[0x1f] & 0x1f;
    uVar4 = uVar4 << bVar1 | uVar4 >> 0x20 - bVar1;
    uVar5 = uVar5 ^ ((*(uint *)(&CAST_S_table0 + (ulong)(uVar4 >> 8 & 0xff) * 4) ^
                     *(uint *)(&CAST_S_table1 + (ulong)(uVar4 & 0xff) * 4)) +
                    *(int *)(&CAST_S_table3 + (ulong)(uVar4 >> 0x10 & 0xff) * 4)) -
                    *(int *)(&CAST_S_table2 + (ulong)(uVar4 >> 0x18) * 4);
    uVar4 = key->data[0x1c] - uVar5;
    bVar1 = (byte)key->data[0x1d] & 0x1f;
    uVar4 = uVar4 << bVar1 | uVar4 >> 0x20 - bVar1;
    uVar2 = (*(int *)(&CAST_S_table1 + (ulong)(uVar4 & 0xff) * 4) +
             *(int *)(&CAST_S_table0 + (ulong)(uVar4 >> 8 & 0xff) * 4) ^
            *(uint *)(&CAST_S_table2 + (ulong)(uVar4 >> 0x18) * 4)) -
            *(int *)(&CAST_S_table3 + (ulong)(uVar4 >> 0x10 & 0xff) * 4) ^ uVar2;
    uVar4 = key->data[0x1a] ^ uVar2;
    bVar1 = (byte)key->data[0x1b] & 0x1f;
    uVar4 = uVar4 << bVar1 | uVar4 >> 0x20 - bVar1;
    uVar5 = (*(int *)(&CAST_S_table0 + (ulong)(uVar4 >> 8 & 0xff) * 4) -
            *(int *)(&CAST_S_table1 + (ulong)(uVar4 & 0xff) * 4)) +
            *(int *)(&CAST_S_table2 + (ulong)(uVar4 >> 0x18) * 4) ^
            uVar5 ^ *(uint *)(&CAST_S_table3 + (ulong)(uVar4 >> 0x10 & 0xff) * 4);
    uVar4 = key->data[0x18] + uVar5;
    bVar1 = (byte)key->data[0x19] & 0x1f;
    uVar4 = uVar4 << bVar1 | uVar4 >> 0x20 - bVar1;
    uVar2 = ((*(uint *)(&CAST_S_table0 + (ulong)(uVar4 >> 8 & 0xff) * 4) ^
             *(uint *)(&CAST_S_table1 + (ulong)(uVar4 & 0xff) * 4)) +
            *(int *)(&CAST_S_table3 + (ulong)(uVar4 >> 0x10 & 0xff) * 4)) -
            *(int *)(&CAST_S_table2 + (ulong)(uVar4 >> 0x18) * 4) ^ uVar2;
  }
  uVar4 = key->data[0x16] - uVar2;
  bVar1 = (byte)key->data[0x17] & 0x1f;
  uVar4 = uVar4 << bVar1 | uVar4 >> 0x20 - bVar1;
  uVar5 = (*(int *)(&CAST_S_table1 + (ulong)(uVar4 & 0xff) * 4) +
           *(int *)(&CAST_S_table0 + (ulong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&CAST_S_table2 + (ulong)(uVar4 >> 0x18) * 4)) -
          *(int *)(&CAST_S_table3 + (ulong)(uVar4 >> 0x10 & 0xff) * 4) ^ uVar5;
  uVar4 = key->data[0x14] ^ uVar5;
  bVar1 = (byte)key->data[0x15] & 0x1f;
  uVar4 = uVar4 << bVar1 | uVar4 >> 0x20 - bVar1;
  uVar2 = (*(int *)(&CAST_S_table0 + (ulong)(uVar4 >> 8 & 0xff) * 4) -
          *(int *)(&CAST_S_table1 + (ulong)(uVar4 & 0xff) * 4)) +
          *(int *)(&CAST_S_table2 + (ulong)(uVar4 >> 0x18) * 4) ^
          uVar2 ^ *(uint *)(&CAST_S_table3 + (ulong)(uVar4 >> 0x10 & 0xff) * 4);
  uVar4 = key->data[0x12] + uVar2;
  bVar1 = (byte)key->data[0x13] & 0x1f;
  uVar4 = uVar4 << bVar1 | uVar4 >> 0x20 - bVar1;
  uVar5 = ((*(uint *)(&CAST_S_table0 + (ulong)(uVar4 >> 8 & 0xff) * 4) ^
           *(uint *)(&CAST_S_table1 + (ulong)(uVar4 & 0xff) * 4)) +
          *(int *)(&CAST_S_table3 + (ulong)(uVar4 >> 0x10 & 0xff) * 4)) -
          *(int *)(&CAST_S_table2 + (ulong)(uVar4 >> 0x18) * 4) ^ uVar5;
  uVar4 = key->data[0x10] - uVar5;
  bVar1 = (byte)key->data[0x11] & 0x1f;
  uVar4 = uVar4 << bVar1 | uVar4 >> 0x20 - bVar1;
  uVar2 = (*(int *)(&CAST_S_table1 + (ulong)(uVar4 & 0xff) * 4) +
           *(int *)(&CAST_S_table0 + (ulong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&CAST_S_table2 + (ulong)(uVar4 >> 0x18) * 4)) -
          *(int *)(&CAST_S_table3 + (ulong)(uVar4 >> 0x10 & 0xff) * 4) ^ uVar2;
  uVar4 = key->data[0xe] ^ uVar2;
  bVar1 = (byte)key->data[0xf] & 0x1f;
  uVar4 = uVar4 << bVar1 | uVar4 >> 0x20 - bVar1;
  uVar4 = (*(int *)(&CAST_S_table0 + (ulong)(uVar4 >> 8 & 0xff) * 4) -
          *(int *)(&CAST_S_table1 + (ulong)(uVar4 & 0xff) * 4)) +
          *(int *)(&CAST_S_table2 + (ulong)(uVar4 >> 0x18) * 4) ^
          uVar5 ^ *(uint *)(&CAST_S_table3 + (ulong)(uVar4 >> 0x10 & 0xff) * 4);
  uVar5 = key->data[0xc] + uVar4;
  bVar1 = (byte)key->data[0xd] & 0x1f;
  uVar5 = uVar5 << bVar1 | uVar5 >> 0x20 - bVar1;
  uVar2 = ((*(uint *)(&CAST_S_table0 + (ulong)(uVar5 >> 8 & 0xff) * 4) ^
           *(uint *)(&CAST_S_table1 + (ulong)(uVar5 & 0xff) * 4)) +
          *(int *)(&CAST_S_table3 + (ulong)(uVar5 >> 0x10 & 0xff) * 4)) -
          *(int *)(&CAST_S_table2 + (ulong)(uVar5 >> 0x18) * 4) ^ uVar2;
  uVar5 = key->data[10] - uVar2;
  bVar1 = (byte)key->data[0xb] & 0x1f;
  uVar5 = uVar5 << bVar1 | uVar5 >> 0x20 - bVar1;
  uVar4 = (*(int *)(&CAST_S_table1 + (ulong)(uVar5 & 0xff) * 4) +
           *(int *)(&CAST_S_table0 + (ulong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&CAST_S_table2 + (ulong)(uVar5 >> 0x18) * 4)) -
          *(int *)(&CAST_S_table3 + (ulong)(uVar5 >> 0x10 & 0xff) * 4) ^ uVar4;
  uVar5 = key->data[8] ^ uVar4;
  bVar1 = (byte)key->data[9] & 0x1f;
  uVar5 = uVar5 << bVar1 | uVar5 >> 0x20 - bVar1;
  uVar3 = (*(int *)(&CAST_S_table0 + (ulong)(uVar5 >> 8 & 0xff) * 4) -
          *(int *)(&CAST_S_table1 + (ulong)(uVar5 & 0xff) * 4)) +
          *(int *)(&CAST_S_table2 + (ulong)(uVar5 >> 0x18) * 4) ^
          uVar2 ^ *(uint *)(&CAST_S_table3 + (ulong)(uVar5 >> 0x10 & 0xff) * 4);
  uVar5 = key->data[6] + uVar3;
  bVar1 = (byte)key->data[7] & 0x1f;
  uVar5 = uVar5 << bVar1 | uVar5 >> 0x20 - bVar1;
  uVar4 = ((*(uint *)(&CAST_S_table0 + (ulong)(uVar5 >> 8 & 0xff) * 4) ^
           *(uint *)(&CAST_S_table1 + (ulong)(uVar5 & 0xff) * 4)) +
          *(int *)(&CAST_S_table3 + (ulong)(uVar5 >> 0x10 & 0xff) * 4)) -
          *(int *)(&CAST_S_table2 + (ulong)(uVar5 >> 0x18) * 4) ^ uVar4;
  uVar5 = key->data[4] - uVar4;
  bVar1 = (byte)key->data[5] & 0x1f;
  uVar5 = uVar5 << bVar1 | uVar5 >> 0x20 - bVar1;
  uVar3 = (*(int *)(&CAST_S_table1 + (ulong)(uVar5 & 0xff) * 4) +
           *(int *)(&CAST_S_table0 + (ulong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&CAST_S_table2 + (ulong)(uVar5 >> 0x18) * 4)) -
          *(int *)(&CAST_S_table3 + (ulong)(uVar5 >> 0x10 & 0xff) * 4) ^ uVar3;
  uVar5 = key->data[2] ^ uVar3;
  bVar1 = (byte)key->data[3] & 0x1f;
  uVar2 = uVar5 << bVar1 | uVar5 >> 0x20 - bVar1;
  uVar5 = key->data[1];
  uVar4 = (*(int *)(&CAST_S_table0 + (ulong)(uVar2 >> 8 & 0xff) * 4) -
          *(int *)(&CAST_S_table1 + (ulong)(uVar2 & 0xff) * 4)) +
          *(int *)(&CAST_S_table2 + (ulong)(uVar2 >> 0x18) * 4) ^
          uVar4 ^ *(uint *)(&CAST_S_table3 + (ulong)(uVar2 >> 0x10 & 0xff) * 4);
  uVar2 = key->data[0];
  data[1] = uVar4;
  uVar2 = uVar2 + uVar4;
  bVar1 = (byte)uVar5 & 0x1f;
  uVar5 = uVar2 << bVar1 | uVar2 >> 0x20 - bVar1;
  *data = ((*(uint *)(&CAST_S_table0 + (ulong)(uVar5 >> 8 & 0xff) * 4) ^
           *(uint *)(&CAST_S_table1 + (ulong)(uVar5 & 0xff) * 4)) +
          *(int *)(&CAST_S_table3 + (ulong)(uVar5 >> 0x10 & 0xff) * 4)) -
          *(int *)(&CAST_S_table2 + (ulong)(uVar5 >> 0x18) * 4) ^ uVar3;
  return;
}



void CAST_cbc_encrypt(uchar *in,uchar *out,long length,CAST_KEY *ks,uchar *iv,int enc)

{
  byte *pbVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  uchar *puVar5;
  uint uVar6;
  uchar *puVar7;
  uint uVar8;
  uint uVar9;
  ulong *puVar10;
  uint uVar11;
  uint *puVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  long in_FS_OFFSET;
  ulong *local_88;
  ulong *local_68;
  uint local_48;
  uint local_44;
  long local_40;
  
  uVar4 = length - 8;
  uVar11 = *(uint *)iv;
  uVar9 = *(uint *)(iv + 4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar11 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
  if (enc == 0) {
    local_88 = (ulong *)out;
    if (7 < length) {
      lVar2 = (uVar4 >> 3) * 8 + 8;
      local_88 = (ulong *)(out + lVar2);
      puVar12 = (uint *)in;
      uVar8 = uVar11;
      uVar6 = uVar9;
      do {
        uVar11 = *puVar12;
        uVar9 = puVar12[1];
        puVar10 = (ulong *)((long)out + 8);
        puVar12 = puVar12 + 2;
        uVar11 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18
        ;
        uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
        local_48 = uVar11;
        local_44 = uVar9;
        CAST_decrypt(&local_48,ks);
        uVar6 = local_44 ^ uVar6;
        uVar8 = local_48 ^ uVar8;
        *(ulong *)out =
             (((((((ulong)(uVar6 & 0xff) << 8 | (ulong)(uVar6 >> 8 & 0xff)) << 8 |
                 (ulong)(uVar6 >> 0x10 & 0xff)) << 8 | (ulong)(uVar6 >> 0x18)) << 8 |
               (ulong)(uVar8 & 0xff)) << 8 | (ulong)(uVar8 >> 8 & 0xff)) << 8 |
             (ulong)(uVar8 >> 0x10 & 0xff)) << 8 | (ulong)(uVar8 >> 0x18);
        out = (uchar *)puVar10;
        uVar8 = uVar11;
        uVar6 = uVar9;
      } while (puVar10 != local_88);
      lVar13 = (uVar4 >> 3) * -8;
      lVar3 = length + -0x10;
      in = in + lVar2;
      length = lVar13 + uVar4;
      uVar4 = lVar3 + lVar13;
    }
    uVar8 = uVar11;
    uVar6 = uVar9;
    if (uVar4 == 0xfffffffffffffff8) {
LAB_00100a98:
      uVar11 = uVar8 >> 0x18;
      uVar14 = uVar8 >> 0x10;
      uVar15 = uVar6 >> 0x10;
      uVar4 = (ulong)(byte)(uVar8 >> 8);
      uVar9 = uVar6 >> 0x18;
      uVar16 = uVar6 >> 8 & 0xff;
      goto LAB_00100abc;
    }
    uVar8 = *(uint *)in;
    uVar6 = *(uint *)((long)in + 4);
    uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
    uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
    local_48 = uVar8;
    local_44 = uVar6;
    CAST_decrypt(&local_48,ks);
    uVar11 = uVar11 ^ local_48;
    uVar9 = uVar9 ^ local_44;
    puVar5 = (uchar *)((long)local_88 + uVar4 + 8);
    switch(length) {
    default:
switchD_00100a49_caseD_0:
      goto LAB_00100a98;
    case 1:
      goto switchD_00100a49_caseD_1;
    case 2:
      puVar7 = puVar5;
      goto LAB_00100a79;
    case 3:
      goto switchD_00100a49_caseD_3;
    case 4:
      break;
    case 7:
      puVar5[-1] = (uchar)(uVar9 >> 8);
      puVar5 = puVar5 + -1;
    case 6:
      puVar5 = puVar5 + -1;
      *puVar5 = (uchar)(uVar9 >> 0x10);
    case 5:
      puVar5[-1] = (uchar)(uVar9 >> 0x18);
      puVar5 = puVar5 + -1;
    }
    puVar5[-1] = (uchar)uVar11;
    puVar5 = puVar5 + -1;
switchD_00100a49_caseD_3:
    puVar5[-1] = (uchar)(uVar11 >> 8);
    puVar7 = puVar5 + -1;
LAB_00100a79:
    puVar5 = puVar7 + -1;
    puVar7[-1] = (uchar)(uVar11 >> 0x10);
switchD_00100a49_caseD_1:
    puVar5[-1] = (uchar)(uVar11 >> 0x18);
    goto switchD_00100a49_caseD_0;
  }
  local_68 = (ulong *)out;
  if (-1 < (long)uVar4) {
    lVar2 = (uVar4 >> 3) * 8 + 8;
    local_68 = (ulong *)(out + lVar2);
    puVar12 = (uint *)in;
    local_44 = uVar9;
    local_48 = uVar11;
    do {
      uVar11 = *puVar12;
      uVar9 = puVar12[1];
      puVar10 = (ulong *)((long)out + 8);
      puVar12 = puVar12 + 2;
      local_48 = local_48 ^
                 (uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                 uVar11 << 0x18);
      local_44 = (uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18) ^
                 local_44;
      CAST_encrypt(&local_48,ks);
      *(ulong *)out =
           (((((((ulong)(local_44 & 0xff) << 8 | (ulong)(local_44 >> 8 & 0xff)) << 8 |
               (ulong)(local_44 >> 0x10 & 0xff)) << 8 | (ulong)(local_44 >> 0x18)) << 8 |
             (ulong)(local_48 & 0xff)) << 8 | (ulong)(local_48 >> 8 & 0xff)) << 8 |
           (ulong)(local_48 >> 0x10 & 0xff)) << 8 | (ulong)(local_48 >> 0x18);
      out = (uchar *)puVar10;
    } while (puVar10 != local_68);
    lVar13 = (uVar4 >> 3) * -8;
    lVar3 = length + -0x10;
    in = in + lVar2;
    length = lVar13 + uVar4;
    uVar4 = lVar3 + lVar13;
    uVar11 = local_48;
    uVar9 = local_44;
  }
  uVar8 = uVar11;
  uVar6 = uVar9;
  if (uVar4 == 0xfffffffffffffff8) goto LAB_00100a98;
  puVar5 = in + uVar4 + 8;
  switch(length) {
  default:
    goto switchD_00100887_caseD_0;
  case 1:
    uVar8 = 0;
    goto LAB_00100b88;
  case 2:
    uVar8 = 0;
    puVar7 = puVar5;
    goto LAB_00100b7b;
  case 3:
    uVar8 = 0;
    goto LAB_00100b6e;
  case 4:
    goto LAB_00100b66;
  case 5:
    uVar8 = 0;
    goto LAB_00100b57;
  case 6:
    uVar8 = 0;
    break;
  case 7:
    pbVar1 = puVar5 + -1;
    puVar5 = puVar5 + -1;
    uVar8 = (uint)*pbVar1 << 8;
  }
  pbVar1 = puVar5 + -1;
  puVar5 = puVar5 + -1;
  uVar8 = (uint)*pbVar1 << 0x10 | uVar8;
LAB_00100b57:
  uVar9 = uVar9 ^ ((uint)puVar5[-1] << 0x18 | uVar8);
  puVar5 = puVar5 + -1;
LAB_00100b66:
  uVar8 = (uint)puVar5[-1];
  puVar5 = puVar5 + -1;
LAB_00100b6e:
  uVar8 = (uint)puVar5[-1] << 8 | uVar8;
  puVar7 = puVar5 + -1;
LAB_00100b7b:
  puVar5 = puVar7 + -1;
  uVar8 = (uint)puVar7[-1] << 0x10 | uVar8;
LAB_00100b88:
  uVar11 = uVar11 ^ ((uint)puVar5[-1] << 0x18 | uVar8);
switchD_00100887_caseD_0:
  local_48 = uVar11;
  local_44 = uVar9;
  CAST_encrypt(&local_48,ks);
  uVar16 = local_44 >> 8;
  uVar4 = (ulong)(local_48 >> 8);
  uVar15 = local_44 >> 0x10;
  uVar9 = local_44 >> 0x18;
  uVar14 = local_48 >> 0x10;
  uVar11 = local_48 >> 0x18;
  *local_68 = (((((((ulong)(local_44 & 0xff) << 8 | (ulong)(uVar16 & 0xff)) << 8 |
                  (ulong)(uVar15 & 0xff)) << 8 | (ulong)uVar9) << 8 | (ulong)(local_48 & 0xff)) << 8
               | (ulong)(local_48 >> 8) & 0xff) << 8 | (ulong)(uVar14 & 0xff)) << 8 | (ulong)uVar11;
  uVar8 = local_48;
  uVar6 = local_44;
LAB_00100abc:
  *(ulong *)iv = (((((((ulong)(uVar6 & 0xff) << 8 | (ulong)(uVar16 & 0xff)) << 8 |
                     (ulong)(uVar15 & 0xff)) << 8 | (ulong)uVar9) << 8 | (ulong)(uVar8 & 0xff)) << 8
                  | uVar4 & 0xff) << 8 | (ulong)(uVar14 & 0xff)) << 8 | (ulong)uVar11;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


