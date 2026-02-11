
int MD5_Update(MD5_CTX *c,void *data,size_t len)

{
  uint *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  
  if (len == 0) {
    return 1;
  }
  uVar9 = (uint)len;
  uVar2 = c->Nl;
  c->Nl = uVar9 * 8 + c->Nl;
  uVar3 = (ulong)c->num;
  c->Nh = c->Nh + (uint)CARRY4(uVar9 * 8,uVar2) + (int)(len >> 0x1d);
  if (uVar3 == 0) {
    if (len < 0x40) goto LAB_00100058;
LAB_00100107:
    ossl_md5_block_asm_data_order(c,data,len >> 6);
    data = (void *)((long)data + (len & 0xffffffffffffffc0));
    len = len - (len & 0xffffffffffffffc0);
  }
  else {
    puVar1 = c->data;
    if ((len + uVar3 | len) < 0x40) {
      memcpy((void *)((long)puVar1 + uVar3),data,len);
      c->num = c->num + uVar9;
      return 1;
    }
    lVar5 = -uVar3;
    uVar8 = lVar5 + 0x40;
    puVar4 = (undefined8 *)(uVar3 + (long)puVar1);
    if (uVar8 < 8) {
      if ((uVar8 & 4) == 0) {
                    /* WARNING: Load size is inaccurate */
        if ((uVar8 != 0) && (*(undefined1 *)puVar4 = *data, (uVar8 & 2) != 0)) {
          *(undefined2 *)((long)puVar4 + lVar5 + 0x3e) = *(undefined2 *)((long)data + lVar5 + 0x3e);
        }
      }
      else {
                    /* WARNING: Load size is inaccurate */
        *(undefined4 *)puVar4 = *data;
        *(undefined4 *)((long)puVar4 + lVar5 + 0x3c) = *(undefined4 *)((long)data + lVar5 + 0x3c);
      }
    }
    else {
                    /* WARNING: Load size is inaccurate */
      *puVar4 = *data;
      *(undefined8 *)((long)puVar4 + lVar5 + 0x38) = *(undefined8 *)((long)data + lVar5 + 0x38);
      lVar5 = (long)puVar4 - ((ulong)(puVar4 + 1) & 0xfffffffffffffff8);
      uVar6 = lVar5 + uVar8 & 0xfffffffffffffff8;
      if (7 < uVar6) {
        uVar7 = 0;
        do {
          *(undefined8 *)(((ulong)(puVar4 + 1) & 0xfffffffffffffff8) + uVar7) =
               *(undefined8 *)((long)data + (uVar7 - lVar5));
          uVar7 = uVar7 + 8;
        } while (uVar7 < uVar6);
      }
    }
    data = (void *)((long)data + uVar8);
    ossl_md5_block_asm_data_order(c,puVar1,1);
    len = (len + uVar3) - 0x40;
    c->num = 0;
    c->data[0] = 0;
    c->data[1] = 0;
    c->data[2] = 0;
    c->data[3] = 0;
    c->data[4] = 0;
    c->data[5] = 0;
    c->data[6] = 0;
    c->data[7] = 0;
    c->data[8] = 0;
    c->data[9] = 0;
    c->data[10] = 0;
    c->data[0xb] = 0;
    c->data[0xc] = 0;
    c->data[0xd] = 0;
    c->data[0xe] = 0;
    c->data[0xf] = 0;
    if (0x3f < len) goto LAB_00100107;
  }
  if (len == 0) {
    return 1;
  }
  uVar9 = (uint)len;
LAB_00100058:
  c->num = uVar9;
  memcpy(c->data,data,len);
  return 1;
}



void MD5_Transform(MD5_CTX *c,uchar *b)

{
  ossl_md5_block_asm_data_order(c,b,1);
  return;
}



int MD5_Final(uchar *md,MD5_CTX *c)

{
  uint *ptr;
  uint uVar1;
  ulong uVar2;
  uint *puVar3;
  uint uVar4;
  ulong uVar5;
  
  ptr = c->data;
  uVar4 = c->num;
  *(undefined1 *)((long)c->data + (ulong)uVar4) = 0x80;
  uVar2 = (ulong)uVar4 + 1;
  if (uVar2 < 0x39) {
    uVar5 = 0x38 - uVar2;
    puVar3 = (uint *)(uVar2 + (long)ptr);
  }
  else {
    if (uVar2 != 0x40) {
      uVar5 = 0;
      do {
        *(undefined1 *)((long)ptr + uVar5 + uVar2) = 0;
        uVar5 = uVar5 + 1;
      } while (uVar5 < 0x40 - uVar2);
    }
    ossl_md5_block_asm_data_order(c,ptr,1);
    uVar5 = 0x38;
    puVar3 = ptr;
  }
  uVar4 = (uint)uVar5;
  if (uVar4 < 8) {
    if ((uVar5 & 4) == 0) {
      if ((uVar4 != 0) && (*(undefined1 *)puVar3 = 0, (uVar5 & 2) != 0)) {
        *(undefined2 *)((long)puVar3 + ((uVar5 & 0xffffffff) - 2)) = 0;
      }
    }
    else {
      *puVar3 = 0;
      *(undefined4 *)((long)puVar3 + ((uVar5 & 0xffffffff) - 4)) = 0;
    }
  }
  else {
    puVar3[0] = 0;
    puVar3[1] = 0;
    *(undefined8 *)((long)puVar3 + ((uVar5 & 0xffffffff) - 8)) = 0;
    uVar4 = uVar4 + ((int)puVar3 - (int)((ulong)(puVar3 + 2) & 0xfffffffffffffff8)) & 0xfffffff8;
    if (7 < uVar4) {
      uVar1 = 0;
      do {
        uVar2 = (ulong)uVar1;
        uVar1 = uVar1 + 8;
        *(undefined8 *)(((ulong)(puVar3 + 2) & 0xfffffffffffffff8) + uVar2) = 0;
      } while (uVar1 < uVar4);
    }
  }
  uVar4 = c->Nh;
  c->data[0xe] = c->Nl;
  c->data[0xf] = uVar4;
  ossl_md5_block_asm_data_order(c,ptr,1);
  c->num = 0;
  OPENSSL_cleanse(ptr,0x40);
  *(uint *)md = c->A;
  *(uint *)(md + 4) = c->B;
  *(uint *)(md + 8) = c->C;
  *(uint *)(md + 0xc) = c->D;
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int MD5_Init(MD5_CTX *c)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  c->data[10] = 0;
  c->data[0xb] = 0;
  c->data[0xc] = 0;
  c->data[0xd] = 0;
  c->Nl = 0;
  c->Nh = 0;
  c->data[0] = 0;
  c->data[1] = 0;
  c->data[2] = 0;
  c->data[3] = 0;
  c->data[4] = 0;
  c->data[5] = 0;
  c->data[6] = 0;
  c->data[7] = 0;
  c->data[8] = 0;
  c->data[9] = 0;
  *(undefined1 (*) [16])(c->data + 0xd) = (undefined1  [16])0x0;
  uVar2 = _UNK_00100388;
  uVar1 = _UNK_00100384;
  c->A = __LC0;
  uVar3 = _UNK_00100388;
  c->B = uVar1;
  _UNK_00100388 = (undefined4)uVar2;
  _UNK_0010038c = SUB84(uVar2,4);
  uVar1 = _UNK_0010038c;
  c->C = _UNK_00100388;
  _UNK_00100388 = uVar3;
  c->D = uVar1;
  return 1;
}


