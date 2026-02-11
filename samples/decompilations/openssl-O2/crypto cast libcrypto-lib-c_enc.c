
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
  uchar *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong *puVar7;
  uint uVar8;
  uint *puVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  uchar *puVar13;
  uint uVar14;
  long in_FS_OFFSET;
  ulong *local_80;
  ulong *local_68;
  uint local_48;
  uint local_44;
  long local_40;
  
  uVar10 = length - 8;
  uVar8 = *(uint *)iv;
  uVar6 = *(uint *)(iv + 4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
  uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
  if (enc == 0) {
    local_80 = (ulong *)out;
    if (7 < length) {
      lVar2 = (uVar10 >> 3) * 8 + 8;
      local_80 = (ulong *)(out + lVar2);
      puVar9 = (uint *)in;
      uVar5 = uVar8;
      uVar4 = uVar6;
      do {
        uVar8 = *puVar9;
        uVar6 = puVar9[1];
        puVar7 = (ulong *)((long)out + 8);
        puVar9 = puVar9 + 2;
        uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
        uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
        local_48 = uVar8;
        local_44 = uVar6;
        CAST_decrypt(&local_48,ks);
        uVar4 = local_44 ^ uVar4;
        uVar5 = local_48 ^ uVar5;
        *(ulong *)out =
             (((((((ulong)(uVar4 & 0xff) << 8 | (ulong)(uVar4 >> 8 & 0xff)) << 8 |
                 (ulong)(uVar4 >> 0x10 & 0xff)) << 8 | (ulong)(uVar4 >> 0x18)) << 8 |
               (ulong)(uVar5 & 0xff)) << 8 | (ulong)(uVar5 >> 8 & 0xff)) << 8 |
             (ulong)(uVar5 >> 0x10 & 0xff)) << 8 | (ulong)(uVar5 >> 0x18);
        out = (uchar *)puVar7;
        uVar5 = uVar8;
        uVar4 = uVar6;
      } while (puVar7 != local_80);
      in = in + lVar2;
      uVar10 = length + -0x10 + (uVar10 >> 3) * -8;
    }
    uVar5 = uVar8;
    uVar4 = uVar6;
    if (uVar10 != 0xfffffffffffffff8) {
      uVar5 = *(uint *)in;
      uVar4 = *(uint *)((long)in + 4);
      uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
      uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
      local_48 = uVar5;
      local_44 = uVar4;
      CAST_decrypt(&local_48,ks);
      uVar8 = uVar8 ^ local_48;
      uVar6 = uVar6 ^ local_44;
      puVar13 = (uchar *)((long)local_80 + uVar10 + 8);
      puVar3 = puVar13;
      switch(uVar10) {
      default:
        goto switchD_00100a08_default;
      case 0xfffffffffffffff9:
        goto switchD_00100a08_caseD_fffffff9;
      case 0xfffffffffffffffa:
        goto LAB_00100a41;
      case 0xfffffffffffffffb:
        goto switchD_00100a08_caseD_fffffffb;
      case 0xfffffffffffffffc:
        break;
      case 0xffffffffffffffff:
        puVar13 = puVar13 + -1;
        *puVar13 = (uchar)(uVar6 >> 8);
      case 0xfffffffffffffffe:
        puVar3 = puVar13 + -1;
        *puVar3 = (uchar)(uVar6 >> 0x10);
      case 0xfffffffffffffffd:
        puVar13 = puVar3 + -1;
        puVar3[-1] = (uchar)(uVar6 >> 0x18);
      }
      puVar13[-1] = (uchar)uVar8;
      puVar3 = puVar13 + -1;
switchD_00100a08_caseD_fffffffb:
      puVar13 = puVar3 + -1;
      puVar3[-1] = (uchar)(uVar8 >> 8);
LAB_00100a41:
      puVar3 = puVar13 + -1;
      puVar13[-1] = (uchar)(uVar8 >> 0x10);
switchD_00100a08_caseD_fffffff9:
      puVar3[-1] = (uchar)(uVar8 >> 0x18);
    }
switchD_00100a08_default:
    uVar8 = uVar5 >> 0x18;
    uVar12 = uVar5 >> 0x10;
    uVar11 = uVar4 >> 0x10;
    uVar10 = (ulong)(byte)(uVar5 >> 8);
    uVar6 = uVar4 >> 0x18;
    uVar14 = uVar4 >> 8 & 0xff;
    goto LAB_00100a84;
  }
  local_68 = (ulong *)out;
  if (-1 < (long)uVar10) {
    lVar2 = (uVar10 >> 3) * 8 + 8;
    local_68 = (ulong *)(out + lVar2);
    puVar9 = (uint *)in;
    local_44 = uVar6;
    local_48 = uVar8;
    do {
      uVar8 = *puVar9;
      uVar6 = puVar9[1];
      puVar7 = (ulong *)((long)out + 8);
      puVar9 = puVar9 + 2;
      local_48 = local_48 ^
                 (uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18);
      local_44 = (uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18) ^
                 local_44;
      CAST_encrypt(&local_48,ks);
      *(ulong *)out =
           (((((((ulong)(local_44 & 0xff) << 8 | (ulong)(local_44 >> 8 & 0xff)) << 8 |
               (ulong)(local_44 >> 0x10 & 0xff)) << 8 | (ulong)(local_44 >> 0x18)) << 8 |
             (ulong)(local_48 & 0xff)) << 8 | (ulong)(local_48 >> 8 & 0xff)) << 8 |
           (ulong)(local_48 >> 0x10 & 0xff)) << 8 | (ulong)(local_48 >> 0x18);
      out = (uchar *)puVar7;
    } while (local_68 != puVar7);
    in = in + lVar2;
    uVar10 = length + -0x10 + (uVar10 >> 3) * -8;
    uVar8 = local_48;
    uVar6 = local_44;
  }
  uVar5 = uVar8;
  uVar4 = uVar6;
  if (uVar10 == 0xfffffffffffffff8) goto switchD_00100a08_default;
  puVar3 = in + uVar10 + 8;
  switch(uVar10) {
  default:
    goto switchD_0010086c_default;
  case 0xfffffffffffffff9:
    uVar5 = 0;
    goto LAB_00100b50;
  case 0xfffffffffffffffa:
    uVar5 = 0;
    puVar13 = puVar3;
    goto LAB_00100b43;
  case 0xfffffffffffffffb:
    uVar5 = 0;
    goto LAB_00100b36;
  case 0xfffffffffffffffc:
    goto LAB_00100b2e;
  case 0xfffffffffffffffd:
    uVar5 = 0;
    goto LAB_00100b1f;
  case 0xfffffffffffffffe:
    uVar5 = 0;
    break;
  case 0xffffffffffffffff:
    pbVar1 = puVar3 + -1;
    puVar3 = puVar3 + -1;
    uVar5 = (uint)*pbVar1 << 8;
  }
  pbVar1 = puVar3 + -1;
  puVar3 = puVar3 + -1;
  uVar5 = (uint)*pbVar1 << 0x10 | uVar5;
LAB_00100b1f:
  uVar6 = uVar6 ^ ((uint)puVar3[-1] << 0x18 | uVar5);
  puVar3 = puVar3 + -1;
LAB_00100b2e:
  uVar5 = (uint)puVar3[-1];
  puVar3 = puVar3 + -1;
LAB_00100b36:
  uVar5 = (uint)puVar3[-1] << 8 | uVar5;
  puVar13 = puVar3 + -1;
LAB_00100b43:
  puVar3 = puVar13 + -1;
  uVar5 = (uint)puVar13[-1] << 0x10 | uVar5;
LAB_00100b50:
  uVar8 = uVar8 ^ ((uint)puVar3[-1] << 0x18 | uVar5);
switchD_0010086c_default:
  local_48 = uVar8;
  local_44 = uVar6;
  CAST_encrypt(&local_48,ks);
  uVar14 = local_44 >> 8;
  uVar10 = (ulong)(local_48 >> 8);
  uVar11 = local_44 >> 0x10;
  uVar6 = local_44 >> 0x18;
  uVar12 = local_48 >> 0x10;
  uVar8 = local_48 >> 0x18;
  *local_68 = (((((((ulong)(local_44 & 0xff) << 8 | (ulong)(uVar14 & 0xff)) << 8 |
                  (ulong)(uVar11 & 0xff)) << 8 | (ulong)uVar6) << 8 | (ulong)(local_48 & 0xff)) << 8
               | (ulong)(local_48 >> 8) & 0xff) << 8 | (ulong)(uVar12 & 0xff)) << 8 | (ulong)uVar8;
  uVar5 = local_48;
  uVar4 = local_44;
LAB_00100a84:
  *(ulong *)iv = (((((((ulong)(uVar4 & 0xff) << 8 | (ulong)(uVar14 & 0xff)) << 8 |
                     (ulong)(uVar11 & 0xff)) << 8 | (ulong)uVar6) << 8 | (ulong)(uVar5 & 0xff)) << 8
                  | uVar10 & 0xff) << 8 | (ulong)(uVar12 & 0xff)) << 8 | (ulong)uVar8;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


