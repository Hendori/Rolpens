
int WHIRLPOOL_Init(WHIRLPOOL_CTX *c)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  (c->H).q[0] = 0.0;
  c->bitlen[3] = 0;
  puVar2 = (undefined8 *)((ulong)((long)&c->H + 8U) & 0xfffffffffffffff8);
  uVar1 = (ulong)(((int)c - (int)puVar2) + 0xa8U >> 3);
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return 1;
}



void WHIRLPOOL_BitUpdate(WHIRLPOOL_CTX *c,void *inp,size_t bits)

{
  byte *pbVar1;
  size_t *psVar2;
  byte *pbVar3;
  byte bVar4;
  WHIRLPOOL_CTX *pWVar5;
  sbyte sVar6;
  sbyte sVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  
  iVar9 = (int)bits;
  uVar8 = -iVar9;
  uVar12 = c->bitoff;
  uVar13 = (ulong)uVar12;
  uVar14 = uVar12 & 7;
  psVar2 = c->bitlen;
  uVar10 = *psVar2;
  *psVar2 = *psVar2 + bits;
  if (CARRY8(uVar10,bits)) {
    pWVar5 = (WHIRLPOOL_CTX *)(c->bitlen + 1);
    do {
      (pWVar5->H).q[0] = (double)((long)(pWVar5->H).q[0] + 1);
      if ((pWVar5->H).q[0] != 0.0) break;
      pWVar5 = (WHIRLPOOL_CTX *)((long)&pWVar5->H + 8);
    } while (c + 1 != pWVar5);
    if (((uVar8 | uVar12) & 7) != 0) goto LAB_00100094;
  }
  else {
    if (((uVar8 | uVar12) & 7) != 0) {
      if (bits == 0) {
        return;
      }
LAB_00100094:
                    /* WARNING: Load size is inaccurate */
      bVar4 = *inp;
      uVar10 = (ulong)(uVar12 >> 3);
      sVar6 = (sbyte)uVar14;
      if (uVar14 != (uVar8 & 7)) {
        sVar7 = (sbyte)(uVar8 & 7);
        uVar8 = (uint)bVar4 << sVar7;
        if (8 < bits) {
          pbVar3 = (byte *)((long)inp + (bits - 9 >> 3) + 1);
          do {
            pbVar1 = (byte *)((long)inp + 1);
            inp = (void *)((long)inp + 1);
            uVar12 = (int)uVar13 + 8;
            uVar13 = (ulong)uVar12;
            uVar8 = (int)(uint)*pbVar1 >> (8U - sVar7 & 0x1f) | uVar8;
            if (uVar14 == 0) {
              c->data[uVar10] = (uchar)uVar8;
              if (0x1ff < uVar12) {
                uVar13 = (ulong)(uVar12 & 0x1ff);
                whirlpool_block(c,c->data,1);
              }
            }
            else {
              uVar11 = (ulong)((int)uVar10 + 1);
              c->data[uVar10] = c->data[uVar10] | (byte)((int)(uVar8 & 0xff) >> sVar6);
              if (0x1ff < uVar12) {
                uVar13 = (ulong)(uVar12 & 0x1ff);
                whirlpool_block(c,c->data,1);
                uVar11 = 0;
              }
              c->data[uVar11] = (uchar)((uVar8 & 0xff) << (8U - sVar6 & 0x1f));
            }
            uVar12 = (uint)uVar13;
            c->bitoff = uVar12;
                    /* WARNING: Load size is inaccurate */
            uVar10 = uVar13 >> 3;
            uVar8 = (uint)*inp << sVar7;
          } while ((byte *)inp != pbVar3);
        }
        uVar12 = (iVar9 - (iVar9 - 1U & 0xfffffff8)) + uVar12;
        if (uVar14 == 0) {
          c->data[uVar10] = (uchar)uVar8;
          if (uVar12 == 0x200) {
            whirlpool_block(c,c->data,1);
            c->bitoff = 0;
            return;
          }
        }
        else {
          uVar13 = (ulong)((int)uVar10 + 1);
          c->data[uVar10] = c->data[uVar10] | (byte)((int)(uVar8 & 0xff) >> sVar6);
          if (uVar12 == 0x200) {
            uVar12 = 0;
            whirlpool_block(c,c->data,1);
            uVar13 = 0;
          }
          c->data[uVar13] = (uchar)((uVar8 & 0xff) << (8U - sVar6 & 0x1f));
        }
        c->bitoff = uVar12;
        return;
      }
      inp = (void *)((long)inp + 1);
      c->data[uVar10] = c->data[uVar10] | bVar4 & (byte)(0xff >> sVar6);
      uVar12 = uVar12 + (8 - uVar14);
      bits = bits - (8 - uVar14);
      if (uVar12 == 0x200) {
        uVar12 = 0;
        whirlpool_block(c,c->data,1);
      }
      uVar13 = (ulong)uVar12;
      c->bitoff = uVar12;
    }
    if (bits == 0) {
      return;
    }
  }
  iVar9 = (int)uVar13;
  if (iVar9 != 0) {
    uVar12 = 0x200 - iVar9;
    uVar13 = uVar13 >> 3;
    if (bits < uVar12) goto LAB_0010026a;
    bits = bits - uVar12;
    memcpy(c->data + uVar13,inp,(ulong)(uVar12 >> 3));
    whirlpool_block(c,c->data,1);
    c->bitoff = 0;
    inp = (void *)((long)inp + (ulong)(uVar12 >> 3));
    if (bits == 0) {
      return;
    }
  }
  if (bits < 0x200) {
    iVar9 = 0;
    uVar13 = 0;
  }
  else {
    iVar9 = 0;
    whirlpool_block(c,inp,bits >> 9);
    uVar13 = 0;
    inp = (void *)((long)inp + (bits >> 3 & 0x1fffffffffffffc0));
    uVar10 = bits & 0x1ff;
    bits = (size_t)((uint)bits & 0x1ff);
    if (uVar10 == 0) {
      return;
    }
  }
LAB_0010026a:
  memcpy(c->data + uVar13,inp,bits >> 3);
  c->bitoff = iVar9 + (int)bits;
  return;
}



int WHIRLPOOL_Update(WHIRLPOOL_CTX *c,void *inp,size_t bytes)

{
  ulong uVar1;
  void *inp_00;
  void *pvVar2;
  undefined8 local_48;
  
  local_48 = inp;
  if (bytes >> 0x3c != 0) {
    uVar1 = bytes + 0xf000000000000000;
    inp_00 = inp;
    do {
      pvVar2 = (void *)((long)inp_00 + 0x1000000000000000);
      WHIRLPOOL_BitUpdate(c,inp_00,0x8000000000000000);
      inp_00 = pvVar2;
    } while (pvVar2 != (void *)(((uVar1 >> 0x3c) + 1 << 0x3c) + (long)inp));
    bytes = bytes & 0xfffffffffffffff;
    local_48 = (void *)((long)inp + (uVar1 & 0xf000000000000000) + 0x1000000000000000);
  }
  if (bytes != 0) {
    WHIRLPOOL_BitUpdate(c,local_48,bytes * 8);
  }
  return 1;
}



int WHIRLPOOL_Final(uchar *md,WHIRLPOOL_CTX *c)

{
  uchar *puVar1;
  double dVar2;
  uint uVar3;
  uchar *puVar4;
  uint uVar5;
  uchar *puVar6;
  byte bVar7;
  ulong uVar8;
  
  bVar7 = 0x80;
  uVar3 = c->bitoff >> 3;
  uVar5 = c->bitoff & 7;
  if (uVar5 != 0) {
    bVar7 = (byte)(0x80 >> (sbyte)uVar5) | c->data[uVar3];
  }
  uVar5 = uVar3 + 1;
  c->data[uVar3] = bVar7;
  if (uVar5 < 0x21) {
    if (uVar5 == 0x20) goto LAB_00100539;
    uVar5 = 0x20 - uVar5;
    uVar8 = (ulong)uVar5;
    puVar6 = c->data + ((ulong)(uVar3 + 0x41) - 0x40);
    if (uVar5 < 8) {
      if ((uVar5 & 4) == 0) {
        if ((uVar5 != 0) && (*puVar6 = '\0', (uVar5 & 2) != 0)) {
          (puVar6 + (uVar8 - 2))[0] = '\0';
          (puVar6 + (uVar8 - 2))[1] = '\0';
        }
      }
      else {
        puVar6[0] = '\0';
        puVar6[1] = '\0';
        puVar6[2] = '\0';
        puVar6[3] = '\0';
        puVar6 = puVar6 + (uVar8 - 4);
        puVar6[0] = '\0';
        puVar6[1] = '\0';
        puVar6[2] = '\0';
        puVar6[3] = '\0';
      }
      goto LAB_00100539;
    }
  }
  else {
    if (uVar5 < 0x40) {
      uVar5 = 0x40 - uVar5;
      puVar6 = c->data + ((ulong)(uVar3 + 0x41) - 0x40);
      if (uVar5 < 8) {
        if ((uVar5 & 4) == 0) {
          if ((uVar5 != 0) && (*puVar6 = '\0', (uVar5 & 2) != 0)) {
            (puVar6 + ((ulong)uVar5 - 2))[0] = '\0';
            (puVar6 + ((ulong)uVar5 - 2))[1] = '\0';
          }
        }
        else {
          puVar6[0] = '\0';
          puVar6[1] = '\0';
          puVar6[2] = '\0';
          puVar6[3] = '\0';
          puVar6 = puVar6 + ((ulong)uVar5 - 4);
          puVar6[0] = '\0';
          puVar6[1] = '\0';
          puVar6[2] = '\0';
          puVar6[3] = '\0';
        }
      }
      else {
        puVar6[0] = '\0';
        puVar6[1] = '\0';
        puVar6[2] = '\0';
        puVar6[3] = '\0';
        puVar6[4] = '\0';
        puVar6[5] = '\0';
        puVar6[6] = '\0';
        puVar6[7] = '\0';
        puVar1 = puVar6 + ((ulong)uVar5 - 8);
        puVar1[0] = '\0';
        puVar1[1] = '\0';
        puVar1[2] = '\0';
        puVar1[3] = '\0';
        puVar1[4] = '\0';
        puVar1[5] = '\0';
        puVar1[6] = '\0';
        puVar1[7] = '\0';
        uVar3 = uVar5 + ((int)puVar6 - (int)((ulong)(puVar6 + 8) & 0xfffffffffffffff8)) & 0xfffffff8
        ;
        if (7 < uVar3) {
          uVar5 = 0;
          do {
            uVar8 = (ulong)uVar5;
            uVar5 = uVar5 + 8;
            *(undefined8 *)(((ulong)(puVar6 + 8) & 0xfffffffffffffff8) + uVar8) = 0;
          } while (uVar5 < uVar3);
        }
      }
    }
    puVar6 = c->data;
    whirlpool_block(c,puVar6,1);
    uVar8 = 0x20;
  }
  puVar6[0] = '\0';
  puVar6[1] = '\0';
  puVar6[2] = '\0';
  puVar6[3] = '\0';
  puVar6[4] = '\0';
  puVar6[5] = '\0';
  puVar6[6] = '\0';
  puVar6[7] = '\0';
  puVar1 = puVar6 + (uVar8 - 8);
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  puVar1[4] = '\0';
  puVar1[5] = '\0';
  puVar1[6] = '\0';
  puVar1[7] = '\0';
  uVar3 = (int)uVar8 + ((int)puVar6 - (int)((ulong)(puVar6 + 8) & 0xfffffffffffffff8)) & 0xfffffff8;
  if (7 < uVar3) {
    uVar5 = 0;
    do {
      uVar8 = (ulong)uVar5;
      uVar5 = uVar5 + 8;
      *(undefined8 *)(((ulong)(puVar6 + 8) & 0xfffffffffffffff8) + uVar8) = 0;
    } while (uVar5 < uVar3);
  }
LAB_00100539:
  puVar6 = c->data + 0x37;
  do {
    uVar8 = *(ulong *)((0xff - (long)puVar6) + (long)c * 2);
    puVar1 = puVar6 + 8;
    do {
      puVar4 = puVar1;
      *puVar4 = (uchar)uVar8;
      uVar8 = uVar8 >> 8;
      puVar1 = puVar4 + -1;
    } while (puVar4 + -1 != puVar6);
    puVar6 = puVar4 + -9;
  } while (c->data + 0x17 != puVar6);
  whirlpool_block(c,c->data,1);
  if (md != (uchar *)0x0) {
    dVar2 = (c->H).q[1];
    *(double *)md = (c->H).q[0];
    *(double *)(md + 8) = dVar2;
    dVar2 = (c->H).q[3];
    *(double *)(md + 0x10) = (c->H).q[2];
    *(double *)(md + 0x18) = dVar2;
    dVar2 = (c->H).q[5];
    *(double *)(md + 0x20) = (c->H).q[4];
    *(double *)(md + 0x28) = dVar2;
    dVar2 = (c->H).q[7];
    *(double *)(md + 0x30) = (c->H).q[6];
    *(double *)(md + 0x38) = dVar2;
    OPENSSL_cleanse(c,0xa8);
  }
  return (uint)(md != (uchar *)0x0);
}



uchar * WHIRLPOOL(void *inp,size_t bytes,uchar *md)

{
  undefined1 *md_00;
  long in_FS_OFFSET;
  WHIRLPOOL_CTX WStack_d8;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  md_00 = m_0;
  if (md != (uchar *)0x0) {
    md_00 = md;
  }
  WHIRLPOOL_Init(&WStack_d8);
  WHIRLPOOL_Update(&WStack_d8,inp,bytes);
  WHIRLPOOL_Final(md_00,&WStack_d8);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return md_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


