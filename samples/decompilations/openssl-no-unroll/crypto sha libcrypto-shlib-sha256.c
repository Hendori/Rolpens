
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int SHA224_Init(SHA256_CTX *c)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined1 (*) [16])(c->data + 0xe) = (undefined1  [16])0x0;
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
  c->data[10] = 0;
  uVar2 = _UNK_00100578;
  uVar1 = __LC0;
  c->data[0xb] = 0;
  c->data[0xc] = 0;
  c->data[0xd] = 0;
  c->md_len = 0x1c;
  *(undefined8 *)c->h = uVar1;
  *(undefined8 *)(c->h + 2) = uVar2;
  uVar1 = _UNK_00100588;
  *(undefined8 *)(c->h + 4) = __LC1;
  *(undefined8 *)(c->h + 6) = uVar1;
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int SHA256_Init(SHA256_CTX *c)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined1 (*) [16])(c->data + 0xe) = (undefined1  [16])0x0;
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
  c->data[10] = 0;
  uVar2 = _UNK_00100598;
  uVar1 = __LC3;
  c->data[0xb] = 0;
  c->data[0xc] = 0;
  c->data[0xd] = 0;
  c->md_len = 0x20;
  *(undefined8 *)c->h = uVar1;
  *(undefined8 *)(c->h + 2) = uVar2;
  uVar1 = _UNK_001005a8;
  *(undefined8 *)(c->h + 4) = __LC4;
  *(undefined8 *)(c->h + 6) = uVar1;
  return 1;
}



undefined8 ossl_sha256_192_init(SHA256_CTX *param_1)

{
  SHA256_Init(param_1);
  param_1->md_len = 0x18;
  return 1;
}



int SHA256_Update(SHA256_CTX *c,void *data,size_t len)

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
    if (len < 0x40) goto LAB_001000f8;
LAB_001001a7:
    sha256_block_data_order(c,data,len >> 6);
    data = (void *)((long)data + (len & 0xffffffffffffffc0));
    len = len - (len & 0xffffffffffffffc0);
  }
  else {
    puVar1 = c->data;
    if ((len | len + uVar3) < 0x40) {
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
    sha256_block_data_order(c,puVar1,1);
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
    if (0x3f < len) goto LAB_001001a7;
  }
  if (len == 0) {
    return 1;
  }
  uVar9 = (uint)len;
LAB_001000f8:
  c->num = uVar9;
  memcpy(c->data,data,len);
  return 1;
}



int SHA224_Update(SHA256_CTX *c,void *data,size_t len)

{
  int iVar1;
  
  iVar1 = SHA256_Update(c,data,len);
  return iVar1;
}



void SHA256_Transform(SHA256_CTX *c,uchar *data)

{
  sha256_block_data_order(c,data,1);
  return;
}



int SHA256_Final(uchar *md,SHA256_CTX *c)

{
  uint *ptr;
  uint uVar1;
  ulong uVar2;
  uint *puVar3;
  ulong uVar4;
  uint uVar5;
  
  ptr = c->data;
  uVar5 = c->num;
  *(undefined1 *)((long)c->data + (ulong)uVar5) = 0x80;
  uVar2 = (ulong)uVar5 + 1;
  if (uVar2 < 0x39) {
    uVar4 = 0x38 - uVar2;
    puVar3 = (uint *)(uVar2 + (long)ptr);
  }
  else {
    if (uVar2 != 0x40) {
      uVar4 = 0;
      do {
        *(undefined1 *)((long)ptr + uVar4 + uVar2) = 0;
        uVar4 = uVar4 + 1;
      } while (uVar4 < 0x40 - uVar2);
    }
    sha256_block_data_order(c,ptr,1);
    uVar4 = 0x38;
    puVar3 = ptr;
  }
  uVar5 = (uint)uVar4;
  if (uVar5 < 8) {
    if ((uVar4 & 4) == 0) {
      if ((uVar5 != 0) && (*(undefined1 *)puVar3 = 0, (uVar4 & 2) != 0)) {
        *(undefined2 *)((long)puVar3 + ((uVar4 & 0xffffffff) - 2)) = 0;
      }
    }
    else {
      *puVar3 = 0;
      *(undefined4 *)((long)puVar3 + ((uVar4 & 0xffffffff) - 4)) = 0;
    }
  }
  else {
    puVar3[0] = 0;
    puVar3[1] = 0;
    *(undefined8 *)((long)puVar3 + ((uVar4 & 0xffffffff) - 8)) = 0;
    uVar5 = uVar5 + ((int)puVar3 - (int)((ulong)(puVar3 + 2) & 0xfffffffffffffff8)) & 0xfffffff8;
    if (7 < uVar5) {
      uVar1 = 0;
      do {
        uVar2 = (ulong)uVar1;
        uVar1 = uVar1 + 8;
        *(undefined8 *)(((ulong)(puVar3 + 2) & 0xfffffffffffffff8) + uVar2) = 0;
      } while (uVar1 < uVar5);
    }
  }
  uVar2._0_4_ = c->Nl;
  uVar2._4_4_ = c->Nh;
  *(ulong *)(c->data + 0xe) =
       uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 | (uVar2 & 0xff0000000000) >> 0x18 |
       (uVar2 & 0xff00000000) >> 8 | (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 |
       (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38;
  sha256_block_data_order(c,ptr,1);
  c->num = 0;
  OPENSSL_cleanse(ptr,0x40);
  uVar5 = c->md_len;
  if (uVar5 == 0x1c) {
    uVar5 = c->h[0];
    *(uint *)md = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
    uVar5 = c->h[1];
    *(uint *)(md + 4) =
         uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
    uVar5 = c->h[2];
    *(uint *)(md + 8) =
         uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
    uVar5 = c->h[3];
    *(uint *)(md + 0xc) =
         uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
    uVar5 = c->h[4];
    *(uint *)(md + 0x10) =
         uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
    uVar5 = c->h[5];
    *(uint *)(md + 0x14) =
         uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
    uVar5 = c->h[6];
    *(uint *)(md + 0x18) =
         uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
  }
  else if (uVar5 == 0x20) {
    uVar5 = c->h[0];
    *(uint *)md = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
    uVar5 = c->h[1];
    *(uint *)(md + 4) =
         uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
    uVar5 = c->h[2];
    *(uint *)(md + 8) =
         uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
    uVar5 = c->h[3];
    *(uint *)(md + 0xc) =
         uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
    uVar5 = c->h[4];
    *(uint *)(md + 0x10) =
         uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
    uVar5 = c->h[5];
    *(uint *)(md + 0x14) =
         uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
    uVar5 = c->h[6];
    *(uint *)(md + 0x18) =
         uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
    uVar5 = c->h[7];
    *(uint *)(md + 0x1c) =
         uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
  }
  else if (uVar5 == 0x18) {
    uVar5 = c->h[0];
    *(uint *)md = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
    uVar5 = c->h[1];
    *(uint *)(md + 4) =
         uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
    uVar5 = c->h[2];
    *(uint *)(md + 8) =
         uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
    uVar5 = c->h[3];
    *(uint *)(md + 0xc) =
         uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
    uVar5 = c->h[4];
    *(uint *)(md + 0x10) =
         uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
    uVar5 = c->h[5];
    *(uint *)(md + 0x14) =
         uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
  }
  else {
    if (0x20 < uVar5) {
      return 0;
    }
    if (uVar5 >> 2 != 0) {
      uVar5 = c->h[0];
      *(uint *)md = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
      if (7 < c->md_len) {
        uVar5 = c->h[1];
        *(uint *)(md + 4) =
             uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
        if (0xb < c->md_len) {
          uVar5 = c->h[2];
          *(uint *)(md + 8) =
               uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
          if (0xf < c->md_len) {
            uVar5 = c->h[3];
            *(uint *)(md + 0xc) =
                 uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
            if (0x13 < c->md_len) {
              uVar5 = c->h[4];
              *(uint *)(md + 0x10) =
                   uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
              if (0x17 < c->md_len) {
                uVar5 = c->h[5];
                *(uint *)(md + 0x14) =
                     uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18
                ;
                if (0x1b < c->md_len) {
                  uVar5 = c->h[6];
                  *(uint *)(md + 0x18) =
                       uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                       uVar5 << 0x18;
                  if (0x1f < c->md_len) {
                    uVar5 = c->h[7];
                    *(uint *)(md + 0x1c) =
                         uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                         uVar5 << 0x18;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 1;
}



int SHA224_Final(uchar *md,SHA256_CTX *c)

{
  int iVar1;
  
  iVar1 = SHA256_Final(md,c);
  return iVar1;
}


