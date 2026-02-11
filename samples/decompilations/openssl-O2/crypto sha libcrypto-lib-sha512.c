
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 sha512_224_init(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = _LC4;
  uVar1 = _UNK_00100768;
  *param_1 = __LC0;
  param_1[1] = uVar1;
  uVar2 = _UNK_00100778;
  uVar1 = __LC1;
  param_1[0x1a] = uVar3;
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  uVar1 = _UNK_00100788;
  param_1[4] = __LC2;
  param_1[5] = uVar1;
  uVar1 = _UNK_00100798;
  param_1[6] = __LC3;
  param_1[7] = uVar1;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 sha512_256_init(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = _LC10;
  uVar1 = _UNK_001007a8;
  *param_1 = __LC6;
  param_1[1] = uVar1;
  uVar2 = _UNK_001007b8;
  uVar1 = __LC7;
  param_1[0x1a] = uVar3;
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  uVar1 = _UNK_001007c8;
  param_1[4] = __LC8;
  param_1[5] = uVar1;
  uVar1 = _UNK_001007d8;
  param_1[6] = __LC9;
  param_1[7] = uVar1;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int SHA384_Init(SHA512_CTX *c)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar3 = _LC15;
  uVar1 = _UNK_001007e8;
  c->h[0] = __LC11;
  c->h[1] = uVar1;
  uVar5 = _LC15;
  uVar2 = _UNK_001007f8;
  uVar1 = __LC12;
  _LC15._0_4_ = (undefined4)uVar3;
  _LC15._4_4_ = SUB84(uVar3,4);
  uVar4 = _LC15._4_4_;
  c->num = (undefined4)_LC15;
  _LC15 = uVar5;
  c->md_len = uVar4;
  c->h[2] = uVar1;
  c->h[3] = uVar2;
  uVar1 = _UNK_00100808;
  c->h[4] = __LC13;
  c->h[5] = uVar1;
  uVar1 = _UNK_00100818;
  c->h[6] = __LC14;
  c->h[7] = uVar1;
  c->Nl = 0;
  c->Nh = 0;
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int SHA512_Init(SHA512_CTX *c)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar3 = _LC20;
  uVar1 = _UNK_00100828;
  c->h[0] = __LC16;
  c->h[1] = uVar1;
  uVar5 = _LC20;
  uVar2 = _UNK_00100838;
  uVar1 = __LC17;
  _LC20._0_4_ = (undefined4)uVar3;
  _LC20._4_4_ = SUB84(uVar3,4);
  uVar4 = _LC20._4_4_;
  c->num = (undefined4)_LC20;
  _LC20 = uVar5;
  c->md_len = uVar4;
  c->h[2] = uVar1;
  c->h[3] = uVar2;
  uVar1 = _UNK_00100848;
  c->h[4] = __LC18;
  c->h[5] = uVar1;
  uVar1 = _UNK_00100858;
  c->h[6] = __LC19;
  c->h[7] = uVar1;
  c->Nl = 0;
  c->Nh = 0;
  return 1;
}



int SHA512_Final(uchar *md,SHA512_CTX *c)

{
  _union_314 *p_Var1;
  uchar *puVar2;
  ulonglong uVar3;
  ulong uVar4;
  _union_314 *p_Var5;
  long lVar6;
  uchar *puVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  byte bVar11;
  
  bVar11 = 0;
  p_Var1 = &c->u;
  uVar8 = c->num;
  *(undefined1 *)((long)c->h + (ulong)uVar8 + 0x50) = 0x80;
  uVar4 = (ulong)uVar8 + 1;
  if (uVar4 < 0x71) {
    uVar9 = 0x70 - uVar4;
    p_Var5 = (_union_314 *)(p_Var1->p + uVar4);
    goto LAB_00100180;
  }
  lVar6 = -uVar4;
  uVar9 = lVar6 + 0x80;
  puVar7 = p_Var1->p + uVar4;
  if (uVar9 < 8) {
    if ((uVar9 & 4) == 0) {
      if ((uVar9 != 0) && (*puVar7 = '\0', (uVar9 & 2) != 0)) {
        (puVar7 + lVar6 + 0x7e)[0] = '\0';
        (puVar7 + lVar6 + 0x7e)[1] = '\0';
      }
    }
    else {
      puVar7[0] = '\0';
      puVar7[1] = '\0';
      puVar7[2] = '\0';
      puVar7[3] = '\0';
      puVar7 = puVar7 + lVar6 + 0x7c;
      puVar7[0] = '\0';
      puVar7[1] = '\0';
      puVar7[2] = '\0';
      puVar7[3] = '\0';
    }
  }
  else {
    puVar7[0] = '\0';
    puVar7[1] = '\0';
    puVar7[2] = '\0';
    puVar7[3] = '\0';
    puVar7[4] = '\0';
    puVar7[5] = '\0';
    puVar7[6] = '\0';
    puVar7[7] = '\0';
    puVar2 = puVar7 + lVar6 + 0x78;
    puVar2[0] = '\0';
    puVar2[1] = '\0';
    puVar2[2] = '\0';
    puVar2[3] = '\0';
    puVar2[4] = '\0';
    puVar2[5] = '\0';
    puVar2[6] = '\0';
    puVar2[7] = '\0';
    puVar10 = (undefined8 *)((ulong)(puVar7 + 8) & 0xfffffffffffffff8);
    uVar4 = (ulong)(puVar7 + (uVar9 - (long)puVar10)) & 0xfffffffffffffff8;
    if (7 < uVar4) {
      *puVar10 = 0;
      uVar9 = 8;
      if (8 < uVar4) {
        if ((uVar4 - 1 >> 3 & 1) != 0) {
          uVar9 = 0x10;
          puVar10[1] = 0;
          if (uVar4 < 0x11) goto LAB_00100482;
        }
        do {
          *(undefined8 *)((long)puVar10 + uVar9) = 0;
          *(undefined8 *)((long)puVar10 + uVar9 + 8) = 0;
          uVar9 = uVar9 + 0x10;
        } while (uVar9 < uVar4);
      }
    }
  }
LAB_00100482:
  sha512_block_data_order(c,p_Var1,1);
  uVar9 = 0x70;
  p_Var5 = p_Var1;
LAB_00100180:
  uVar8 = (uint)uVar9;
  if (uVar8 < 8) {
    if ((uVar9 & 4) == 0) {
      if ((uVar8 != 0) && (p_Var5->p[0] = '\0', (uVar9 & 2) != 0)) {
        *(undefined2 *)((long)p_Var5 + ((uVar9 & 0xffffffff) - 2)) = 0;
      }
    }
    else {
      *(undefined4 *)p_Var5 = 0;
      *(undefined4 *)((long)p_Var5 + ((uVar9 & 0xffffffff) - 4)) = 0;
    }
  }
  else {
    p_Var5->d[0] = 0;
    *(undefined8 *)((long)p_Var5 + ((uVar9 & 0xffffffff) - 8)) = 0;
    puVar10 = (undefined8 *)((ulong)((long)p_Var5 + 8) & 0xfffffffffffffff8);
    uVar4 = (ulong)(uVar8 + ((int)p_Var5 - (int)puVar10) >> 3);
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar10 = 0;
      puVar10 = puVar10 + (ulong)bVar11 * -2 + 1;
    }
  }
  uVar4 = c->Nl;
  uVar9 = c->Nh;
  (c->u).d[0xe] =
       (((((((uVar9 & 0xff) << 8 | uVar9 >> 8 & 0xff) << 8 | uVar9 >> 0x10 & 0xff) << 8 |
          uVar9 >> 0x18 & 0xff) << 8 | uVar9 >> 0x20 & 0xff) << 8 | uVar9 >> 0x28 & 0xff) << 8 |
       uVar9 >> 0x30 & 0xff) << 8 | uVar9 >> 0x38;
  (c->u).d[0xf] =
       (((((((uVar4 & 0xff) << 8 | uVar4 >> 8 & 0xff) << 8 | uVar4 >> 0x10 & 0xff) << 8 |
          uVar4 >> 0x18 & 0xff) << 8 | uVar4 >> 0x20 & 0xff) << 8 | uVar4 >> 0x28 & 0xff) << 8 |
       uVar4 >> 0x30 & 0xff) << 8 | uVar4 >> 0x38;
  sha512_block_data_order(c,p_Var1,1);
  if (md == (uchar *)0x0) {
    return 0;
  }
  uVar8 = c->md_len;
  lVar6 = 0;
  if (uVar8 == 0x30) {
    do {
      uVar4 = c->h[lVar6];
      *(ulong *)(md + lVar6 * 8) =
           uVar4 >> 0x38 | (uVar4 & 0xff000000000000) >> 0x28 | (uVar4 & 0xff0000000000) >> 0x18 |
           (uVar4 & 0xff00000000) >> 8 | (uVar4 & 0xff000000) << 8 | (uVar4 & 0xff0000) << 0x18 |
           (uVar4 & 0xff00) << 0x28 | uVar4 << 0x38;
      lVar6 = lVar6 + 1;
    } while (lVar6 != 6);
  }
  else if (uVar8 < 0x31) {
    if (uVar8 == 0x1c) {
      do {
        uVar4 = c->h[lVar6];
        *(ulong *)(md + lVar6 * 8) =
             uVar4 >> 0x38 | (uVar4 & 0xff000000000000) >> 0x28 | (uVar4 & 0xff0000000000) >> 0x18 |
             (uVar4 & 0xff00000000) >> 8 | (uVar4 & 0xff000000) << 8 | (uVar4 & 0xff0000) << 0x18 |
             (uVar4 & 0xff00) << 0x28 | uVar4 << 0x38;
        lVar6 = lVar6 + 1;
      } while (lVar6 != 3);
      uVar3 = c->h[3];
      uVar8 = (uint)(uVar3 >> 0x20);
      *(uint *)(md + 0x18) =
           (((uVar8 & 0xff) << 8 | uVar8 >> 8 & 0xff) << 8 | (ushort)(uVar3 >> 0x30) & 0xff) << 8 |
           (uint)(byte)(uVar3 >> 0x38);
      return 1;
    }
    if (uVar8 != 0x20) {
      return 0;
    }
    do {
      uVar4 = c->h[lVar6];
      *(ulong *)(md + lVar6 * 8) =
           uVar4 >> 0x38 | (uVar4 & 0xff000000000000) >> 0x28 | (uVar4 & 0xff0000000000) >> 0x18 |
           (uVar4 & 0xff00000000) >> 8 | (uVar4 & 0xff000000) << 8 | (uVar4 & 0xff0000) << 0x18 |
           (uVar4 & 0xff00) << 0x28 | uVar4 << 0x38;
      lVar6 = lVar6 + 1;
    } while (lVar6 != 4);
  }
  else {
    if (uVar8 != 0x40) {
      return 0;
    }
    do {
      uVar4 = c->h[lVar6];
      *(ulong *)(md + lVar6 * 8) =
           uVar4 >> 0x38 | (uVar4 & 0xff000000000000) >> 0x28 | (uVar4 & 0xff0000000000) >> 0x18 |
           (uVar4 & 0xff00000000) >> 8 | (uVar4 & 0xff000000) << 8 | (uVar4 & 0xff0000) << 0x18 |
           (uVar4 & 0xff00) << 0x28 | uVar4 << 0x38;
      lVar6 = lVar6 + 1;
    } while (lVar6 != 8);
  }
  return 1;
}



int SHA384_Final(uchar *md,SHA512_CTX *c)

{
  int iVar1;
  
  iVar1 = SHA512_Final(md,c);
  return iVar1;
}



int SHA512_Update(SHA512_CTX *c,void *data,size_t len)

{
  _union_314 *p_Var1;
  uchar *__dest;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  byte bVar9;
  
  bVar9 = 0;
  if (len == 0) {
    return 1;
  }
  p_Var1 = &c->u;
  uVar2 = c->Nl;
  c->Nl = len * 8 + c->Nl;
  c->Nh = (len >> 0x3d) + c->Nh + (ulong)CARRY8(len * 8,uVar2);
  if (c->num == 0) {
    if (len < 0x80) goto LAB_001005f2;
LAB_001006b3:
    uVar2 = len >> 7;
    uVar6 = len & 0xffffffffffffff80;
    len = (size_t)((uint)len & 0x7f);
    sha512_block_data_order(c,data,uVar2);
    data = (void *)((long)data + uVar6);
  }
  else {
    uVar6 = (ulong)c->num;
    lVar3 = -uVar6;
    uVar2 = lVar3 + 0x80;
    __dest = p_Var1->p + uVar6;
    if (len < uVar2) {
      memcpy(__dest,data,len);
      c->num = c->num + (int)len;
      return 1;
    }
    if (uVar2 < 8) {
      if ((uVar2 & 4) == 0) {
                    /* WARNING: Load size is inaccurate */
        if ((uVar2 != 0) && (*__dest = *data, (uVar2 & 2) != 0)) {
          *(undefined2 *)(__dest + lVar3 + 0x7e) = *(undefined2 *)((long)data + lVar3 + 0x7e);
        }
      }
      else {
                    /* WARNING: Load size is inaccurate */
        *(undefined4 *)__dest = *data;
        *(undefined4 *)(__dest + lVar3 + 0x7c) = *(undefined4 *)((long)data + lVar3 + 0x7c);
      }
    }
    else {
                    /* WARNING: Load size is inaccurate */
      *(undefined8 *)__dest = *data;
      *(undefined8 *)(__dest + lVar3 + 0x78) = *(undefined8 *)((long)data + lVar3 + 0x78);
      lVar3 = (long)__dest - (long)((ulong)(__dest + 8) & 0xfffffffffffffff8);
      puVar7 = (undefined8 *)((long)data - lVar3);
      puVar8 = (undefined8 *)((ulong)(__dest + 8) & 0xfffffffffffffff8);
      for (uVar4 = lVar3 + uVar2 >> 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
    }
    len = (uVar6 - 0x80) + len;
    c->num = 0;
    data = (void *)((long)data + uVar2);
    sha512_block_data_order(c,p_Var1,1);
    if (0x7f < len) goto LAB_001006b3;
  }
  if (len == 0) {
    return 1;
  }
LAB_001005f2:
  uVar5 = (uint)len;
  uVar2 = len & 0xffffffff;
  if (uVar5 < 8) {
    if ((len & 4) == 0) {
                    /* WARNING: Load size is inaccurate */
      if ((uVar5 != 0) && ((c->u).p[0] = (uchar)*data, (len & 2) != 0)) {
        *(undefined2 *)((long)c->h + uVar2 + 0x4e) = *(undefined2 *)((long)data + (uVar2 - 2));
      }
    }
    else {
                    /* WARNING: Load size is inaccurate */
      *(int *)&c->u = (int)*data;
      *(undefined4 *)((long)c->h + uVar2 + 0x4c) = *(undefined4 *)((long)data + (uVar2 - 4));
    }
  }
  else {
                    /* WARNING: Load size is inaccurate */
    puVar8 = (undefined8 *)((ulong)((long)&c->u + 8U) & 0xfffffffffffffff8);
    (c->u).d[0] = *data;
    *(undefined8 *)((long)c->h + (len & 0xffffffff) + 0x48) =
         *(undefined8 *)((long)data + ((len & 0xffffffff) - 8));
    lVar3 = (long)p_Var1 - (long)puVar8;
    puVar7 = (undefined8 *)((long)data - lVar3);
    for (uVar2 = (ulong)(uVar5 + (int)lVar3 >> 3); uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + (ulong)bVar9 * -2 + 1;
      puVar8 = puVar8 + (ulong)bVar9 * -2 + 1;
    }
  }
  c->num = uVar5;
  return 1;
}



int SHA384_Update(SHA512_CTX *c,void *data,size_t len)

{
  int iVar1;
  
  iVar1 = SHA512_Update(c,data,len);
  return iVar1;
}



void SHA512_Transform(SHA512_CTX *c,uchar *data)

{
  sha512_block_data_order(c,data,1);
  return;
}


