
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void sm3_init_ctx(sm3_ctx *ctx)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = _UNK_00102f68;
  uVar1 = __LC0;
  ctx->total[0] = 0;
  ctx->total[1] = 0;
  ctx->buflen = 0;
  *(undefined8 *)ctx->state = uVar1;
  *(undefined8 *)(ctx->state + 2) = uVar2;
  uVar1 = _UNK_00102f78;
  *(undefined8 *)(ctx->state + 4) = __LC1;
  *(undefined8 *)(ctx->state + 6) = uVar1;
  return;
}



/* WARNING: Unknown calling convention */

void * sm3_read_ctx(sm3_ctx *ctx,void *resbuf)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    uVar1 = *(uint *)((long)ctx->state + lVar2);
    *(uint *)((long)resbuf + lVar2) =
         uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0x20);
  return resbuf;
}



/* WARNING: Unknown calling convention */

void sm3_process_block(void *buffer,size_t len,sm3_ctx *ctx)

{
  uint32_t uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  void *pvVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  long in_FS_OFFSET;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  void *local_a8;
  uint32_t x [16];
  
  local_c8 = ctx->state[0];
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  local_c4 = ctx->state[1];
  local_c0 = ctx->state[2];
  local_b4 = ctx->state[3];
  local_b0 = ctx->state[4];
  pvVar9 = (void *)((long)buffer + (len & 0xfffffffffffffffc));
  local_bc = ctx->state[5];
  local_b8 = ctx->state[6];
  local_ac = ctx->state[7];
  uVar6 = ctx->total[0];
  uVar1 = ctx->total[1];
  ctx->total[0] = (uint)len + ctx->total[0];
  ctx->total[1] = (int)(len >> 0x20) + uVar1 + (uint)CARRY4((uint)len,uVar6);
  local_a8 = buffer;
  if (buffer < pvVar9) {
    do {
      lVar3 = 0;
      do {
        uVar6 = *(uint *)((long)local_a8 + lVar3);
        *(uint *)((long)x + lVar3) =
             uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
        lVar3 = lVar3 + 4;
      } while (lVar3 != 0x40);
      uVar10 = local_c8 << 0xc | local_c8 >> 0x14;
      uVar6 = uVar10 + 0x79cc4519 + local_b0;
      uVar4 = uVar6 * 0x80 | uVar6 >> 0x19;
      uVar11 = (uVar10 ^ uVar4) + (x[4] ^ x[0]) + local_b4 + (local_c8 ^ local_c4 ^ local_c0);
      uVar5 = local_c4 << 9 | local_c4 >> 0x17;
      uVar7 = local_bc >> 0xd | local_bc << 0x13;
      local_a8 = (void *)((long)local_a8 + 0x40);
      uVar4 = uVar4 + (local_bc ^ local_b0 ^ local_b8) + local_ac + x[0];
      uVar13 = uVar11 * 0x1000 | uVar11 >> 0x14;
      uVar4 = uVar4 ^ (uVar4 * 0x200 | uVar4 >> 0x17) ^ (uVar4 >> 0xf | uVar4 * 0x20000);
      uVar6 = uVar13 + 0xf3988a32 + uVar4;
      uVar10 = uVar6 * 0x80 | uVar6 >> 0x19;
      uVar14 = (uVar13 ^ uVar10) + (x[5] ^ x[1]) + local_c0 + (local_c8 ^ uVar5 ^ uVar11);
      uVar24 = local_c8 << 9 | local_c8 >> 0x17;
      uVar10 = uVar10 + (local_b0 ^ uVar7 ^ uVar4) + x[1] + local_b8;
      uVar13 = local_b0 >> 0xd | local_b0 << 0x13;
      uVar10 = uVar10 ^ (uVar10 * 0x200 | uVar10 >> 0x17) ^ (uVar10 >> 0xf | uVar10 * 0x20000);
      uVar8 = uVar14 * 0x1000 | uVar14 >> 0x14;
      uVar6 = uVar8 + 0xe7311465 + uVar10;
      uVar12 = uVar11 * 0x200 | uVar11 >> 0x17;
      uVar17 = uVar6 * 0x80 | uVar6 >> 0x19;
      uVar21 = (uVar8 ^ uVar17) + (x[2] ^ x[6]) + uVar5 + (uVar11 ^ uVar24 ^ uVar14);
      uVar8 = uVar4 >> 0xd | uVar4 << 0x13;
      uVar17 = uVar7 + x[2] + (uVar4 ^ uVar13 ^ uVar10) + uVar17;
      uVar17 = uVar17 ^ (uVar17 * 0x200 | uVar17 >> 0x17) ^ (uVar17 >> 0xf | uVar17 * 0x20000);
      uVar4 = uVar21 * 0x1000 | uVar21 >> 0x14;
      uVar6 = uVar4 + 0xce6228cb + uVar17;
      uVar5 = uVar6 * 0x80 | uVar6 >> 0x19;
      uVar15 = uVar14 * 0x200 | uVar14 >> 0x17;
      uVar24 = (uVar4 ^ uVar5) + (x[3] ^ x[7]) + uVar24 + (uVar14 ^ uVar12 ^ uVar21);
      uVar4 = uVar10 >> 0xd | uVar10 << 0x13;
      uVar5 = uVar13 + x[3] + (uVar10 ^ uVar8 ^ uVar17) + uVar5;
      uVar5 = uVar5 ^ (uVar5 * 0x200 | uVar5 >> 0x17) ^ (uVar5 >> 0xf | uVar5 * 0x20000);
      uVar10 = uVar24 * 0x1000 | uVar24 >> 0x14;
      uVar6 = uVar10 + 0x9cc45197 + uVar5;
      uVar22 = uVar21 * 0x200 | uVar21 >> 0x17;
      uVar14 = uVar6 * 0x80 | uVar6 >> 0x19;
      uVar11 = uVar17 >> 0xd | uVar17 << 0x13;
      uVar7 = (uVar10 ^ uVar14) + (x[4] ^ x[8]) + uVar12 + (uVar21 ^ uVar15 ^ uVar24);
      uVar14 = (uVar17 ^ uVar4 ^ uVar5) + uVar8 + x[4] + uVar14;
      uVar14 = uVar14 ^ (uVar14 * 0x200 | uVar14 >> 0x17) ^ (uVar14 >> 0xf | uVar14 * 0x20000);
      uVar10 = uVar7 * 0x1000 | uVar7 >> 0x14;
      uVar6 = uVar10 + 0x3988a32f + uVar14;
      uVar21 = uVar24 * 0x200 | uVar24 >> 0x17;
      uVar8 = uVar6 * 0x80 | uVar6 >> 0x19;
      uVar13 = uVar5 >> 0xd | uVar5 << 0x13;
      uVar12 = (uVar10 ^ uVar8) + (x[5] ^ x[9]) + uVar15 + (uVar24 ^ uVar22 ^ uVar7);
      uVar8 = (uVar5 ^ uVar11 ^ uVar14) + uVar4 + x[5] + uVar8;
      uVar8 = uVar8 ^ (uVar8 * 0x200 | uVar8 >> 0x17) ^ (uVar8 >> 0xf | uVar8 * 0x20000);
      uVar4 = uVar12 * 0x1000 | uVar12 >> 0x14;
      uVar6 = uVar4 + 0x7311465e + uVar8;
      uVar10 = uVar6 * 0x80 | uVar6 >> 0x19;
      uVar15 = (uVar4 ^ uVar10) + (x[6] ^ x[10]) + uVar22 + (uVar7 ^ uVar21 ^ uVar12);
      uVar4 = uVar7 * 0x200 | uVar7 >> 0x17;
      uVar7 = uVar14 >> 0xd | uVar14 << 0x13;
      uVar10 = (uVar14 ^ uVar13 ^ uVar8) + uVar11 + x[6] + uVar10;
      uVar10 = uVar10 ^ (uVar10 * 0x200 | uVar10 >> 0x17) ^ (uVar10 >> 0xf | uVar10 * 0x20000);
      uVar5 = uVar15 * 0x1000 | uVar15 >> 0x14;
      uVar6 = uVar5 + 0xe6228cbc + uVar10;
      uVar14 = uVar12 * 0x200 | uVar12 >> 0x17;
      uVar17 = uVar6 * 0x80 | uVar6 >> 0x19;
      uVar24 = (uVar5 ^ uVar17) + (x[7] ^ x[0xb]) + uVar21 + (uVar12 ^ uVar4 ^ uVar15);
      uVar5 = uVar8 >> 0xd | uVar8 << 0x13;
      uVar17 = (uVar8 ^ uVar7 ^ uVar10) + uVar13 + x[7] + uVar17;
      uVar17 = uVar17 ^ (uVar17 * 0x200 | uVar17 >> 0x17) ^ (uVar17 >> 0xf | uVar17 * 0x20000);
      uVar8 = uVar24 * 0x1000 | uVar24 >> 0x14;
      uVar6 = uVar8 + 0xcc451979 + uVar17;
      uVar12 = uVar15 * 0x200 | uVar15 >> 0x17;
      uVar13 = uVar6 * 0x80 | uVar6 >> 0x19;
      uVar15 = (uVar8 ^ uVar13) + (x[8] ^ x[0xc]) + uVar4 + (uVar15 ^ uVar14 ^ uVar24);
      uVar4 = uVar10 >> 0xd | uVar10 << 0x13;
      uVar13 = (uVar10 ^ uVar5 ^ uVar17) + uVar7 + x[8] + uVar13;
      uVar13 = uVar13 ^ (uVar13 * 0x200 | uVar13 >> 0x17) ^ (uVar13 >> 0xf | uVar13 * 0x20000);
      uVar10 = uVar15 * 0x1000 | uVar15 >> 0x14;
      uVar6 = uVar10 + 0x988a32f3 + uVar13;
      uVar11 = uVar6 * 0x80 | uVar6 >> 0x19;
      uVar7 = (uVar10 ^ uVar11) + (x[9] ^ x[0xd]) + uVar14 + (uVar24 ^ uVar12 ^ uVar15);
      uVar14 = uVar24 * 0x200 | uVar24 >> 0x17;
      uVar11 = (uVar17 ^ uVar4 ^ uVar13) + uVar5 + x[9] + uVar11;
      uVar17 = uVar17 >> 0xd | uVar17 << 0x13;
      uVar11 = uVar11 ^ (uVar11 * 0x200 | uVar11 >> 0x17) ^ (uVar11 >> 0xf | uVar11 * 0x20000);
      uVar10 = uVar7 * 0x1000 | uVar7 >> 0x14;
      uVar6 = uVar10 + 0x311465e7 + uVar11;
      uVar24 = uVar15 * 0x200 | uVar15 >> 0x17;
      uVar8 = uVar6 * 0x80 | uVar6 >> 0x19;
      uVar5 = uVar13 >> 0xd | uVar13 << 0x13;
      uVar12 = (uVar10 ^ uVar8) + (x[10] ^ x[0xe]) + uVar12 + (uVar15 ^ uVar14 ^ uVar7);
      uVar8 = (uVar13 ^ uVar17 ^ uVar11) + uVar4 + x[10] + uVar8;
      uVar8 = uVar8 ^ (uVar8 * 0x200 | uVar8 >> 0x17) ^ (uVar8 >> 0xf | uVar8 * 0x20000);
      uVar13 = uVar12 * 0x1000 | uVar12 >> 0x14;
      uVar6 = uVar13 + 0x6228cbce + uVar8;
      uVar10 = uVar6 * 0x80 | uVar6 >> 0x19;
      uVar4 = uVar7 * 0x200 | uVar7 >> 0x17;
      uVar15 = (uVar13 ^ uVar10) + (x[0xb] ^ x[0xf]) + uVar14 + (uVar7 ^ uVar24 ^ uVar12);
      uVar14 = uVar11 >> 0xd | uVar11 << 0x13;
      uVar10 = (uVar11 ^ uVar5 ^ uVar8) + uVar17 + x[0xb] + uVar10;
      uVar10 = uVar10 ^ (uVar10 * 0x200 | uVar10 >> 0x17) ^ (uVar10 >> 0xf | uVar10 * 0x20000);
      uVar7 = uVar15 * 0x1000 | uVar15 >> 0x14;
      uVar6 = uVar7 + 0xc451979c + uVar10;
      uVar13 = uVar6 * 0x80 | uVar6 >> 0x19;
      uVar6 = x[0] ^ x[7] ^ (x[0xd] << 0xf | x[0xd] >> 0x11);
      uVar34 = (uVar6 << 0xf | uVar6 >> 0x11) ^ (x[3] << 7 | x[3] >> 0x19) ^ x[10] ^ uVar6 ^
               (uVar6 >> 9 | uVar6 << 0x17);
      uVar11 = uVar12 * 0x200 | uVar12 >> 0x17;
      uVar24 = (uVar7 ^ uVar13) + (x[0xc] ^ uVar34) + uVar24 + (uVar12 ^ uVar4 ^ uVar15);
      uVar7 = uVar8 >> 0xd | uVar8 << 0x13;
      uVar13 = uVar5 + x[0xc] + (uVar8 ^ uVar14 ^ uVar10) + uVar13;
      uVar5 = uVar24 * 0x1000 | uVar24 >> 0x14;
      uVar13 = uVar13 ^ (uVar13 * 0x200 | uVar13 >> 0x17) ^ (uVar13 >> 0xf | uVar13 * 0x20000);
      uVar6 = uVar5 + 0x88a32f39 + uVar13;
      uVar17 = uVar6 * 0x80 | uVar6 >> 0x19;
      uVar6 = x[8] ^ x[1] ^ (x[0xe] << 0xf | x[0xe] >> 0x11);
      uVar27 = (uVar6 << 0xf | uVar6 >> 0x11) ^ (x[4] << 7 | x[4] >> 0x19) ^ x[0xb] ^ uVar6 ^
               (uVar6 >> 9 | uVar6 << 0x17);
      uVar12 = (uVar5 ^ uVar17) + (x[0xd] ^ uVar27) + uVar4 + (uVar15 ^ uVar11 ^ uVar24);
      uVar4 = uVar10 >> 0xd | uVar10 << 0x13;
      uVar5 = uVar15 * 0x200 | uVar15 >> 0x17;
      uVar17 = uVar14 + x[0xd] + (uVar10 ^ uVar7 ^ uVar13) + uVar17;
      uVar17 = uVar17 ^ (uVar17 * 0x200 | uVar17 >> 0x17) ^ (uVar17 >> 0xf | uVar17 * 0x20000);
      uVar10 = uVar12 * 0x1000 | uVar12 >> 0x14;
      uVar6 = uVar10 + 0x11465e73 + uVar17;
      uVar14 = uVar6 * 0x80 | uVar6 >> 0x19;
      uVar6 = x[2] ^ x[9] ^ (x[0xf] << 0xf | x[0xf] >> 0x11);
      uVar31 = (uVar6 << 0xf | uVar6 >> 0x11) ^ (x[5] << 7 | x[5] >> 0x19) ^ x[0xc] ^ uVar6 ^
               (uVar6 >> 9 | uVar6 << 0x17);
      uVar8 = (uVar10 ^ uVar14) + (x[0xe] ^ uVar31) + uVar11 + (uVar24 ^ uVar5 ^ uVar12);
      uVar11 = uVar24 * 0x200 | uVar24 >> 0x17;
      uVar14 = (uVar13 ^ uVar4 ^ uVar17) + uVar7 + x[0xe] + uVar14;
      uVar13 = uVar13 >> 0xd | uVar13 << 0x13;
      uVar14 = uVar14 ^ (uVar14 * 0x200 | uVar14 >> 0x17) ^ (uVar14 >> 0xf | uVar14 * 0x20000);
      uVar7 = uVar8 * 0x1000 | uVar8 >> 0x14;
      uVar6 = uVar7 + 0x228cbce6 + uVar14;
      uVar10 = uVar6 * 0x80 | uVar6 >> 0x19;
      uVar6 = x[3] ^ x[10] ^ (uVar34 << 0xf | uVar34 >> 0x11);
      uVar25 = (uVar6 << 0xf | uVar6 >> 0x11) ^ (x[6] << 7 | x[6] >> 0x19) ^ x[0xd] ^ uVar6 ^
               (uVar6 >> 9 | uVar6 << 0x17);
      uVar5 = (uVar7 ^ uVar10) + (uVar25 ^ x[0xf]) + uVar5 + (uVar12 ^ uVar11 ^ uVar8);
      uVar12 = uVar12 * 0x200 | uVar12 >> 0x17;
      uVar10 = (uVar17 ^ uVar13 ^ uVar14) + uVar4 + x[0xf] + uVar10;
      uVar7 = uVar17 >> 0xd | uVar17 << 0x13;
      uVar10 = uVar10 ^ (uVar10 * 0x200 | uVar10 >> 0x17) ^ (uVar10 >> 0xf | uVar10 * 0x20000);
      uVar4 = uVar5 * 0x1000 | uVar5 >> 0x14;
      uVar6 = uVar4 + 0x9d8a7a87 + uVar10;
      uVar17 = x[4] ^ x[0xb] ^ (uVar27 << 0xf | uVar27 >> 0x11);
      uVar6 = uVar6 * 0x80 | uVar6 >> 0x19;
      uVar32 = (uVar17 << 0xf | uVar17 >> 0x11) ^ (x[7] << 7 | x[7] >> 0x19) ^ x[0xe] ^ uVar17 ^
               (uVar17 >> 9 | uVar17 << 0x17);
      uVar24 = (uVar4 ^ uVar6) +
               (uVar32 ^ uVar34) + uVar11 + (uVar8 & uVar12 | (uVar8 | uVar12) & uVar5);
      uVar17 = uVar14 >> 0xd | uVar14 << 0x13;
      uVar4 = ((uVar14 ^ uVar7) & uVar10 ^ uVar7) + uVar13 + uVar34 + uVar6;
      uVar13 = uVar8 * 0x200 | uVar8 >> 0x17;
      uVar4 = uVar4 ^ (uVar4 * 0x200 | uVar4 >> 0x17) ^ (uVar4 >> 0xf | uVar4 * 0x20000);
      uVar8 = uVar24 * 0x1000 | uVar24 >> 0x14;
      uVar6 = uVar8 + 0x3b14f50f + uVar4;
      uVar11 = x[5] ^ x[0xc] ^ (uVar31 << 0xf | uVar31 >> 0x11);
      uVar6 = uVar6 * 0x80 | uVar6 >> 0x19;
      uVar26 = (uVar11 << 0xf | uVar11 >> 0x11) ^ (x[8] << 7 | x[8] >> 0x19) ^ x[0xf] ^ uVar11 ^
               (uVar11 >> 9 | uVar11 << 0x17);
      uVar14 = (uVar8 ^ uVar6) +
               (uVar26 ^ uVar27) + uVar12 + (uVar5 & uVar13 | (uVar5 | uVar13) & uVar24);
      uVar12 = uVar10 >> 0xd | uVar10 << 0x13;
      uVar8 = uVar5 * 0x200 | uVar5 >> 0x17;
      uVar10 = ((uVar10 ^ uVar17) & uVar4 ^ uVar17) + uVar7 + uVar27 + uVar6;
      uVar5 = uVar14 * 0x1000 | uVar14 >> 0x14;
      uVar10 = uVar10 ^ (uVar10 * 0x200 | uVar10 >> 0x17) ^ (uVar10 >> 0xf | uVar10 * 0x20000);
      uVar6 = uVar5 + 0x7629ea1e + uVar10;
      uVar11 = uVar6 * 0x80 | uVar6 >> 0x19;
      uVar6 = x[6] ^ x[0xd] ^ (uVar25 << 0xf | uVar25 >> 0x11);
      uVar15 = (uVar6 >> 9 | uVar6 << 0x17) ^
               (uVar6 << 0xf | uVar6 >> 0x11) ^ (x[9] << 7 | x[9] >> 0x19) ^ uVar34 ^ uVar6;
      uVar7 = (uVar5 ^ uVar11) +
              (uVar31 ^ uVar15) + uVar13 + (uVar24 & uVar8 | (uVar24 | uVar8) & uVar14);
      uVar13 = uVar4 >> 0xd | uVar4 << 0x13;
      uVar28 = uVar24 * 0x200 | uVar24 >> 0x17;
      uVar4 = ((uVar4 ^ uVar12) & uVar10 ^ uVar12) + uVar17 + uVar31 + uVar11;
      uVar4 = uVar4 ^ (uVar4 * 0x200 | uVar4 >> 0x17) ^ (uVar4 >> 0xf | uVar4 * 0x20000);
      uVar5 = uVar7 * 0x1000 | uVar7 >> 0x14;
      uVar6 = uVar5 + 0xec53d43c + uVar4;
      uVar17 = uVar6 * 0x80 | uVar6 >> 0x19;
      uVar6 = x[7] ^ x[0xe] ^ (uVar32 << 0xf | uVar32 >> 0x11);
      uVar24 = (uVar6 >> 9 | uVar6 << 0x17) ^
               (uVar6 << 0xf | uVar6 >> 0x11) ^ (x[10] << 7 | x[10] >> 0x19) ^ uVar27 ^ uVar6;
      uVar22 = (uVar5 ^ uVar17) +
               (uVar25 ^ uVar24) + uVar8 + (uVar14 & uVar28 | (uVar14 | uVar28) & uVar7);
      uVar11 = uVar10 >> 0xd | uVar10 << 0x13;
      uVar23 = uVar14 * 0x200 | uVar14 >> 0x17;
      uVar5 = ((uVar10 ^ uVar13) & uVar4 ^ uVar13) + uVar12 + uVar25 + uVar17;
      uVar5 = uVar5 ^ (uVar5 * 0x200 | uVar5 >> 0x17) ^ (uVar5 >> 0xf | uVar5 * 0x20000);
      uVar10 = uVar22 * 0x1000 | uVar22 >> 0x14;
      uVar6 = uVar10 + 0xd8a7a879 + uVar5;
      uVar17 = uVar6 * 0x80 | uVar6 >> 0x19;
      uVar6 = x[8] ^ x[0xf] ^ (uVar26 << 0xf | uVar26 >> 0x11);
      uVar21 = (uVar6 >> 9 | uVar6 << 0x17) ^
               (uVar6 << 0xf | uVar6 >> 0x11) ^ (x[0xb] << 7 | x[0xb] >> 0x19) ^ uVar31 ^ uVar6;
      uVar12 = (uVar10 ^ uVar17) +
               (uVar32 ^ uVar21) + uVar28 + (uVar7 & uVar23 | (uVar7 | uVar23) & uVar22);
      uVar8 = uVar7 * 0x200 | uVar7 >> 0x17;
      uVar7 = uVar4 >> 0xd | uVar4 << 0x13;
      uVar10 = ((uVar4 ^ uVar11) & uVar5 ^ uVar11) + uVar13 + uVar32 + uVar17;
      uVar10 = uVar10 ^ (uVar10 * 0x200 | uVar10 >> 0x17) ^ (uVar10 >> 0xf | uVar10 * 0x20000);
      uVar4 = uVar12 * 0x1000 | uVar12 >> 0x14;
      uVar6 = uVar4 + 0xb14f50f3 + uVar10;
      uVar28 = uVar6 * 0x80 | uVar6 >> 0x19;
      uVar6 = uVar34 ^ x[9] ^ (uVar15 << 0xf | uVar15 >> 0x11);
      uVar14 = (uVar6 >> 9 | uVar6 << 0x17) ^
               (uVar6 << 0xf | uVar6 >> 0x11) ^ (x[0xc] << 7 | x[0xc] >> 0x19) ^ uVar25 ^ uVar6;
      uVar17 = (uVar4 ^ uVar28) +
               (uVar26 ^ uVar14) + uVar23 + (uVar22 & uVar8 | (uVar22 | uVar8) & uVar12);
      uVar13 = uVar5 >> 0xd | uVar5 << 0x13;
      uVar29 = uVar22 * 0x200 | uVar22 >> 0x17;
      uVar4 = ((uVar5 ^ uVar7) & uVar10 ^ uVar7) + uVar11 + uVar26 + uVar28;
      uVar4 = uVar4 ^ (uVar4 * 0x200 | uVar4 >> 0x17) ^ (uVar4 >> 0xf | uVar4 * 0x20000);
      uVar5 = uVar17 * 0x1000 | uVar17 >> 0x14;
      uVar6 = uVar5 + 0x629ea1e7 + uVar4;
      uVar23 = uVar6 * 0x80 | uVar6 >> 0x19;
      uVar6 = uVar27 ^ x[10] ^ (uVar24 << 0xf | uVar24 >> 0x11);
      uVar22 = (uVar6 >> 9 | uVar6 << 0x17) ^
               (uVar6 << 0xf | uVar6 >> 0x11) ^ (x[0xd] << 7 | x[0xd] >> 0x19) ^ uVar32 ^ uVar6;
      uVar11 = uVar12 * 0x200 | uVar12 >> 0x17;
      uVar18 = (uVar5 ^ uVar23) +
               (uVar15 ^ uVar22) + uVar8 + (uVar12 & uVar29 | (uVar12 | uVar29) & uVar17);
      uVar12 = uVar10 >> 0xd | uVar10 << 0x13;
      uVar5 = ((uVar10 ^ uVar13) & uVar4 ^ uVar13) + uVar7 + uVar15 + uVar23;
      uVar5 = uVar5 ^ (uVar5 * 0x200 | uVar5 >> 0x17) ^ (uVar5 >> 0xf | uVar5 * 0x20000);
      uVar10 = uVar18 * 0x1000 | uVar18 >> 0x14;
      uVar6 = uVar10 + 0xc53d43ce + uVar5;
      uVar8 = uVar6 * 0x80 | uVar6 >> 0x19;
      uVar6 = uVar31 ^ x[0xb] ^ (uVar21 << 0xf | uVar21 >> 0x11);
      uVar23 = (uVar6 >> 9 | uVar6 << 0x17) ^
               (uVar6 << 0xf | uVar6 >> 0x11) ^ (x[0xe] << 7 | x[0xe] >> 0x19) ^ uVar26 ^ uVar6;
      uVar7 = uVar17 * 0x200 | uVar17 >> 0x17;
      uVar29 = (uVar10 ^ uVar8) +
               (uVar24 ^ uVar23) + uVar29 + (uVar17 & uVar11 | (uVar17 | uVar11) & uVar18);
      uVar17 = uVar4 >> 0xd | uVar4 << 0x13;
      uVar10 = ((uVar4 ^ uVar12) & uVar5 ^ uVar12) + uVar13 + uVar24 + uVar8;
      uVar10 = uVar10 ^ (uVar10 * 0x200 | uVar10 >> 0x17) ^ (uVar10 >> 0xf | uVar10 * 0x20000);
      uVar13 = uVar29 * 0x1000 | uVar29 >> 0x14;
      uVar6 = uVar13 + 0x8a7a879d + uVar10;
      uVar4 = uVar25 ^ x[0xc] ^ (uVar14 << 0xf | uVar14 >> 0x11);
      uVar6 = uVar6 * 0x80 | uVar6 >> 0x19;
      uVar28 = (uVar4 >> 9 | uVar4 << 0x17) ^
               (uVar4 << 0xf | uVar4 >> 0x11) ^ (x[0xf] << 7 | x[0xf] >> 0x19) ^ uVar15 ^ uVar4;
      uVar8 = uVar5 >> 0xd | uVar5 << 0x13;
      uVar11 = (uVar13 ^ uVar6) +
               (uVar21 ^ uVar28) + uVar11 + (uVar18 & uVar7 | (uVar18 | uVar7) & uVar29);
      uVar30 = uVar18 * 0x200 | uVar18 >> 0x17;
      uVar4 = ((uVar5 ^ uVar17) & uVar10 ^ uVar17) + uVar12 + uVar21 + uVar6;
      uVar4 = uVar4 ^ (uVar4 * 0x200 | uVar4 >> 0x17) ^ (uVar4 >> 0xf | uVar4 * 0x20000);
      uVar13 = uVar11 * 0x1000 | uVar11 >> 0x14;
      uVar6 = uVar13 + 0x14f50f3b + uVar4;
      uVar5 = uVar6 * 0x80 | uVar6 >> 0x19;
      uVar6 = uVar32 ^ x[0xd] ^ (uVar22 << 0xf | uVar22 >> 0x11);
      uVar18 = (uVar6 >> 9 | uVar6 << 0x17) ^
               (uVar6 << 0xf | uVar6 >> 0x11) ^ (uVar34 << 7 | uVar34 >> 0x19) ^ uVar24 ^ uVar6;
      uVar16 = uVar29 * 0x200 | uVar29 >> 0x17;
      uVar19 = (uVar13 ^ uVar5) +
               (uVar14 ^ uVar18) + uVar7 + (uVar29 & uVar30 | (uVar29 | uVar30) & uVar11);
      uVar5 = ((uVar10 ^ uVar8) & uVar4 ^ uVar8) + uVar17 + uVar14 + uVar5;
      uVar7 = uVar10 >> 0xd | uVar10 << 0x13;
      uVar5 = uVar5 ^ (uVar5 * 0x200 | uVar5 >> 0x17) ^ (uVar5 >> 0xf | uVar5 * 0x20000);
      uVar10 = uVar19 * 0x1000 | uVar19 >> 0x14;
      uVar6 = uVar10 + 0x29ea1e76 + uVar5;
      uVar17 = uVar6 * 0x80 | uVar6 >> 0x19;
      uVar6 = uVar26 ^ x[0xe] ^ (uVar23 << 0xf | uVar23 >> 0x11);
      uVar29 = (uVar6 >> 9 | uVar6 << 0x17) ^
               (uVar6 << 0xf | uVar6 >> 0x11) ^ (uVar27 << 7 | uVar27 >> 0x19) ^ uVar21 ^ uVar6;
      uVar12 = uVar11 * 0x200 | uVar11 >> 0x17;
      uVar13 = uVar4 >> 0xd | uVar4 << 0x13;
      uVar30 = (uVar10 ^ uVar17) +
               (uVar22 ^ uVar29) + uVar30 + (uVar11 & uVar16 | (uVar11 | uVar16) & uVar19);
      uVar10 = ((uVar4 ^ uVar7) & uVar5 ^ uVar7) + uVar8 + uVar22 + uVar17;
      uVar10 = uVar10 ^ (uVar10 * 0x200 | uVar10 >> 0x17) ^ (uVar10 >> 0xf | uVar10 * 0x20000);
      uVar8 = uVar30 * 0x1000 | uVar30 >> 0x14;
      uVar4 = uVar15 ^ x[0xf] ^ (uVar28 << 0xf | uVar28 >> 0x11);
      uVar6 = uVar8 + 0x53d43cec + uVar10;
      uVar6 = uVar6 * 0x80 | uVar6 >> 0x19;
      uVar33 = (uVar4 << 0xf | uVar4 >> 0x11) ^ (uVar31 << 7 | uVar31 >> 0x19) ^ uVar14 ^ uVar4 ^
               (uVar4 >> 9 | uVar4 << 0x17);
      uVar20 = uVar19 * 0x200 | uVar19 >> 0x17;
      uVar11 = (uVar8 ^ uVar6) +
               (uVar23 ^ uVar33) + uVar16 + (uVar19 & uVar12 | (uVar19 | uVar12) & uVar30);
      uVar8 = uVar5 >> 0xd | uVar5 << 0x13;
      uVar17 = ((uVar5 ^ uVar13) & uVar10 ^ uVar13) + uVar7 + uVar23 + uVar6;
      uVar4 = uVar11 * 0x1000 | uVar11 >> 0x14;
      uVar17 = uVar17 ^ (uVar17 * 0x200 | uVar17 >> 0x17) ^ (uVar17 >> 0xf | uVar17 * 0x20000);
      uVar6 = uVar4 + 0xa7a879d8 + uVar17;
      uVar5 = uVar34 ^ uVar24 ^ (uVar18 << 0xf | uVar18 >> 0x11);
      uVar6 = uVar6 * 0x80 | uVar6 >> 0x19;
      uVar7 = (uVar5 >> 9 | uVar5 << 0x17) ^
              (uVar5 << 0xf | uVar5 >> 0x11) ^ (uVar25 << 7 | uVar25 >> 0x19) ^ uVar22 ^ uVar5;
      uVar19 = uVar30 * 0x200 | uVar30 >> 0x17;
      uVar12 = (uVar4 ^ uVar6) +
               (uVar28 ^ uVar7) + uVar12 + (uVar30 & uVar20 | (uVar30 | uVar20) & uVar11);
      uVar4 = uVar10 >> 0xd | uVar10 << 0x13;
      uVar5 = uVar27 ^ uVar21 ^ (uVar29 << 0xf | uVar29 >> 0x11);
      uVar10 = ((uVar10 ^ uVar8) & uVar17 ^ uVar8) + uVar13 + uVar28 + uVar6;
      uVar35 = (uVar5 >> 9 | uVar5 << 0x17) ^
               (uVar5 << 0xf | uVar5 >> 0x11) ^ (uVar32 << 7 | uVar32 >> 0x19) ^ uVar23 ^ uVar5;
      uVar10 = uVar10 ^ (uVar10 * 0x200 | uVar10 >> 0x17) ^ (uVar10 >> 0xf | uVar10 * 0x20000);
      uVar13 = uVar12 * 0x1000 | uVar12 >> 0x14;
      uVar6 = uVar13 + 0x4f50f3b1 + uVar10;
      uVar6 = uVar6 * 0x80 | uVar6 >> 0x19;
      uVar30 = uVar11 * 0x200 | uVar11 >> 0x17;
      uVar16 = uVar17 >> 0xd | uVar17 << 0x13;
      uVar11 = (uVar13 ^ uVar6) +
               (uVar18 ^ uVar35) + uVar20 + (uVar11 & uVar19 | (uVar11 | uVar19) & uVar12);
      uVar5 = ((uVar17 ^ uVar4) & uVar10 ^ uVar4) + uVar8 + uVar18 + uVar6;
      uVar5 = uVar5 ^ (uVar5 * 0x200 | uVar5 >> 0x17) ^ (uVar5 >> 0xf | uVar5 * 0x20000);
      uVar8 = uVar11 * 0x1000 | uVar11 >> 0x14;
      uVar6 = uVar8 + 0x9ea1e762 + uVar5;
      uVar20 = uVar6 * 0x80 | uVar6 >> 0x19;
      uVar6 = uVar31 ^ uVar14 ^ (uVar33 << 0xf | uVar33 >> 0x11);
      uVar31 = (uVar6 >> 9 | uVar6 << 0x17) ^
               (uVar6 << 0xf | uVar6 >> 0x11) ^ (uVar26 << 7 | uVar26 >> 0x19) ^ uVar28 ^ uVar6;
      uVar27 = uVar12 * 0x200 | uVar12 >> 0x17;
      uVar13 = uVar10 >> 0xd | uVar10 << 0x13;
      uVar17 = (uVar8 ^ uVar20) +
               (uVar29 ^ uVar31) + uVar19 + (uVar12 & uVar30 | (uVar12 | uVar30) & uVar11);
      uVar10 = ((uVar10 ^ uVar16) & uVar5 ^ uVar16) + uVar4 + uVar29 + uVar20;
      uVar10 = uVar10 ^ (uVar10 * 0x200 | uVar10 >> 0x17) ^ (uVar10 >> 0xf | uVar10 * 0x20000);
      uVar4 = uVar17 * 0x1000 | uVar17 >> 0x14;
      uVar6 = uVar4 + 0x3d43cec5 + uVar10;
      uVar19 = uVar6 * 0x80 | uVar6 >> 0x19;
      uVar6 = uVar25 ^ uVar22 ^ (uVar7 << 0xf | uVar7 >> 0x11);
      uVar20 = (uVar6 >> 9 | uVar6 << 0x17) ^
               (uVar6 << 0xf | uVar6 >> 0x11) ^ (uVar15 << 7 | uVar15 >> 0x19) ^ uVar18 ^ uVar6;
      uVar12 = uVar11 * 0x200 | uVar11 >> 0x17;
      uVar8 = uVar5 >> 0xd | uVar5 << 0x13;
      uVar25 = (uVar4 ^ uVar19) +
               (uVar20 ^ uVar33) + uVar30 + (uVar11 & uVar27 | (uVar11 | uVar27) & uVar17);
      uVar5 = ((uVar5 ^ uVar13) & uVar10 ^ uVar13) + uVar16 + uVar33 + uVar19;
      uVar5 = uVar5 ^ (uVar5 * 0x200 | uVar5 >> 0x17) ^ (uVar5 >> 0xf | uVar5 * 0x20000);
      uVar4 = uVar25 * 0x1000 | uVar25 >> 0x14;
      uVar6 = uVar4 + 0x7a879d8a + uVar5;
      uVar16 = uVar6 * 0x80 | uVar6 >> 0x19;
      uVar6 = uVar32 ^ uVar23 ^ (uVar35 << 0xf | uVar35 >> 0x11);
      uVar30 = (uVar6 >> 9 | uVar6 << 0x17) ^
               (uVar6 << 0xf | uVar6 >> 0x11) ^ (uVar24 << 7 | uVar24 >> 0x19) ^ uVar29 ^ uVar6;
      uVar11 = uVar17 * 0x200 | uVar17 >> 0x17;
      uVar17 = (uVar4 ^ uVar16) +
               (uVar7 ^ uVar30) + uVar27 + (uVar17 & uVar12 | (uVar17 | uVar12) & uVar25);
      uVar4 = uVar10 >> 0xd | uVar10 << 0x13;
      uVar10 = ((uVar10 ^ uVar8) & uVar5 ^ uVar8) + uVar13 + uVar7 + uVar16;
      uVar10 = uVar10 ^ (uVar10 * 0x200 | uVar10 >> 0x17) ^ (uVar10 >> 0xf | uVar10 * 0x20000);
      uVar13 = uVar17 * 0x1000 | uVar17 >> 0x14;
      uVar6 = uVar13 + 0xf50f3b14 + uVar10;
      uVar32 = uVar6 * 0x80 | uVar6 >> 0x19;
      uVar6 = uVar26 ^ uVar28 ^ (uVar31 << 0xf | uVar31 >> 0x11);
      uVar19 = (uVar6 >> 9 | uVar6 << 0x17) ^
               (uVar6 << 0xf | uVar6 >> 0x11) ^ (uVar21 << 7 | uVar21 >> 0x19) ^ uVar33 ^ uVar6;
      uVar27 = uVar25 * 0x200 | uVar25 >> 0x17;
      uVar16 = uVar5 >> 0xd | uVar5 << 0x13;
      uVar26 = (uVar13 ^ uVar32) +
               (uVar19 ^ uVar35) + uVar12 + (uVar25 & uVar11 | (uVar25 | uVar11) & uVar17);
      uVar5 = ((uVar5 ^ uVar4) & uVar10 ^ uVar4) + uVar8 + uVar35 + uVar32;
      uVar5 = uVar5 ^ (uVar5 * 0x200 | uVar5 >> 0x17) ^ (uVar5 >> 0xf | uVar5 * 0x20000);
      uVar13 = uVar26 * 0x1000 | uVar26 >> 0x14;
      uVar6 = uVar13 + 0xea1e7629 + uVar5;
      uVar8 = uVar6 * 0x80 | uVar6 >> 0x19;
      uVar6 = uVar15 ^ uVar18 ^ (uVar20 << 0xf | uVar20 >> 0x11);
      uVar12 = (uVar6 >> 9 | uVar6 << 0x17) ^
               (uVar6 << 0xf | uVar6 >> 0x11) ^ (uVar14 << 7 | uVar14 >> 0x19) ^ uVar7 ^ uVar6;
      uVar25 = uVar17 * 0x200 | uVar17 >> 0x17;
      uVar11 = (uVar13 ^ uVar8) +
               (uVar31 ^ uVar12) + uVar11 + (uVar17 & uVar27 | (uVar17 | uVar27) & uVar26);
      uVar13 = uVar10 >> 0xd | uVar10 << 0x13;
      uVar10 = ((uVar10 ^ uVar16) & uVar5 ^ uVar16) + uVar4 + uVar31 + uVar8;
      uVar10 = uVar10 ^ (uVar10 * 0x200 | uVar10 >> 0x17) ^ (uVar10 >> 0xf | uVar10 * 0x20000);
      uVar4 = uVar11 * 0x1000 | uVar11 >> 0x14;
      uVar6 = uVar4 + 0xd43cec53 + uVar10;
      uVar34 = uVar6 * 0x80 | uVar6 >> 0x19;
      uVar6 = uVar24 ^ uVar29 ^ (uVar30 << 0xf | uVar30 >> 0x11);
      uVar15 = (uVar6 >> 9 | uVar6 << 0x17) ^
               (uVar6 << 0xf | uVar6 >> 0x11) ^ (uVar22 << 7 | uVar22 >> 0x19) ^ uVar35 ^ uVar6;
      uVar32 = uVar26 * 0x200 | uVar26 >> 0x17;
      uVar8 = uVar5 >> 0xd | uVar5 << 0x13;
      uVar17 = (uVar4 ^ uVar34) +
               (uVar20 ^ uVar15) + uVar27 + (uVar26 & uVar25 | (uVar26 | uVar25) & uVar11);
      uVar5 = ((uVar5 ^ uVar13) & uVar10 ^ uVar13) + uVar16 + uVar20 + uVar34;
      uVar5 = uVar5 ^ (uVar5 * 0x200 | uVar5 >> 0x17) ^ (uVar5 >> 0xf | uVar5 * 0x20000);
      uVar16 = uVar17 * 0x1000 | uVar17 >> 0x14;
      uVar6 = uVar16 + 0xa879d8a7 + uVar5;
      uVar27 = uVar6 * 0x80 | uVar6 >> 0x19;
      uVar6 = uVar21 ^ uVar33 ^ (uVar19 << 0xf | uVar19 >> 0x11);
      uVar21 = (uVar6 >> 9 | uVar6 << 0x17) ^
               (uVar6 << 0xf | uVar6 >> 0x11) ^ (uVar23 << 7 | uVar23 >> 0x19) ^ uVar31 ^ uVar6;
      uVar24 = uVar11 * 0x200 | uVar11 >> 0x17;
      uVar4 = uVar10 >> 0xd | uVar10 << 0x13;
      uVar25 = (uVar16 ^ uVar27) +
               (uVar30 ^ uVar21) + uVar25 + (uVar11 & uVar32 | (uVar11 | uVar32) & uVar17);
      uVar10 = ((uVar10 ^ uVar8) & uVar5 ^ uVar8) + uVar13 + uVar30 + uVar27;
      uVar10 = uVar10 ^ (uVar10 * 0x200 | uVar10 >> 0x17) ^ (uVar10 >> 0xf | uVar10 * 0x20000);
      uVar13 = uVar25 * 0x1000 | uVar25 >> 0x14;
      uVar6 = uVar13 + 0x50f3b14f + uVar10;
      uVar27 = uVar6 * 0x80 | uVar6 >> 0x19;
      uVar6 = uVar14 ^ uVar7 ^ (uVar12 << 0xf | uVar12 >> 0x11);
      uVar16 = (uVar6 >> 9 | uVar6 << 0x17) ^
               (uVar6 << 0xf | uVar6 >> 0x11) ^ (uVar28 << 7 | uVar28 >> 0x19) ^ uVar20 ^ uVar6;
      uVar11 = uVar17 * 0x200 | uVar17 >> 0x17;
      uVar14 = (uVar13 ^ uVar27) +
               (uVar19 ^ uVar16) + uVar32 + (uVar17 & uVar24 | (uVar17 | uVar24) & uVar25);
      uVar17 = uVar5 >> 0xd | uVar5 << 0x13;
      uVar5 = ((uVar5 ^ uVar4) & uVar10 ^ uVar4) + uVar8 + uVar19 + uVar27;
      uVar5 = uVar5 ^ (uVar5 * 0x200 | uVar5 >> 0x17) ^ (uVar5 >> 0xf | uVar5 * 0x20000);
      uVar13 = uVar14 * 0x1000 | uVar14 >> 0x14;
      uVar6 = uVar13 + 0xa1e7629e + uVar5;
      uVar8 = uVar6 * 0x80 | uVar6 >> 0x19;
      uVar6 = uVar22 ^ uVar35 ^ (uVar15 << 0xf | uVar15 >> 0x11);
      uVar36 = (uVar6 >> 9 | uVar6 << 0x17) ^
               (uVar6 << 0xf | uVar6 >> 0x11) ^ (uVar18 << 7 | uVar18 >> 0x19) ^ uVar30 ^ uVar6;
      uVar27 = uVar25 * 0x200 | uVar25 >> 0x17;
      uVar24 = (uVar13 ^ uVar8) +
               (uVar12 ^ uVar36) + uVar24 + (uVar25 & uVar11 | (uVar25 | uVar11) & uVar14);
      uVar13 = uVar10 >> 0xd | uVar10 << 0x13;
      uVar10 = ((uVar10 ^ uVar17) & uVar5 ^ uVar17) + uVar4 + uVar12 + uVar8;
      uVar10 = uVar10 ^ (uVar10 * 0x200 | uVar10 >> 0x17) ^ (uVar10 >> 0xf | uVar10 * 0x20000);
      uVar4 = uVar24 * 0x1000 | uVar24 >> 0x14;
      uVar6 = uVar4 + 0x43cec53d + uVar10;
      uVar26 = uVar6 * 0x80 | uVar6 >> 0x19;
      uVar6 = uVar23 ^ uVar31 ^ (uVar21 << 0xf | uVar21 >> 0x11);
      uVar22 = (uVar6 >> 9 | uVar6 << 0x17) ^
               (uVar6 << 0xf | uVar6 >> 0x11) ^ (uVar29 << 7 | uVar29 >> 0x19) ^ uVar19 ^ uVar6;
      uVar25 = uVar14 * 0x200 | uVar14 >> 0x17;
      uVar11 = (uVar4 ^ uVar26) +
               (uVar15 ^ uVar22) + uVar11 + (uVar14 & uVar27 | (uVar14 | uVar27) & uVar24);
      uVar8 = uVar5 >> 0xd | uVar5 << 0x13;
      uVar5 = ((uVar5 ^ uVar13) & uVar10 ^ uVar13) + uVar17 + uVar15 + uVar26;
      uVar5 = uVar5 ^ (uVar5 * 0x200 | uVar5 >> 0x17) ^ (uVar5 >> 0xf | uVar5 * 0x20000);
      uVar4 = uVar11 * 0x1000 | uVar11 >> 0x14;
      uVar6 = uVar4 + 0x879d8a7a + uVar5;
      uVar14 = uVar6 * 0x80 | uVar6 >> 0x19;
      uVar6 = uVar28 ^ uVar20 ^ (uVar16 << 0xf | uVar16 >> 0x11);
      uVar23 = (uVar6 >> 9 | uVar6 << 0x17) ^
               (uVar6 << 0xf | uVar6 >> 0x11) ^ (uVar33 << 7 | uVar33 >> 0x19) ^ uVar12 ^ uVar6;
      uVar26 = uVar24 * 0x200 | uVar24 >> 0x17;
      uVar17 = (uVar4 ^ uVar14) +
               (uVar21 ^ uVar23) + uVar27 + (uVar24 & uVar25 | (uVar24 | uVar25) & uVar11);
      uVar4 = uVar10 >> 0xd | uVar10 << 0x13;
      uVar10 = ((uVar10 ^ uVar8) & uVar5 ^ uVar8) + uVar13 + uVar21 + uVar14;
      uVar10 = uVar10 ^ (uVar10 * 0x200 | uVar10 >> 0x17) ^ (uVar10 >> 0xf | uVar10 * 0x20000);
      uVar13 = uVar17 * 0x1000 | uVar17 >> 0x14;
      uVar6 = uVar13 + 0xf3b14f5 + uVar10;
      uVar32 = uVar6 * 0x80 | uVar6 >> 0x19;
      uVar6 = uVar18 ^ uVar30 ^ (uVar36 << 0xf | uVar36 >> 0x11);
      uVar28 = (uVar6 >> 9 | uVar6 << 0x17) ^
               (uVar6 << 0xf | uVar6 >> 0x11) ^ (uVar7 << 7 | uVar7 >> 0x19) ^ uVar15 ^ uVar6;
      uVar24 = uVar11 * 0x200 | uVar11 >> 0x17;
      uVar27 = (uVar13 ^ uVar32) +
               (uVar16 ^ uVar28) + uVar25 + (uVar11 & uVar26 | (uVar11 | uVar26) & uVar17);
      uVar14 = uVar5 >> 0xd | uVar5 << 0x13;
      uVar5 = ((uVar5 ^ uVar4) & uVar10 ^ uVar4) + uVar8 + uVar16 + uVar32;
      uVar5 = uVar5 ^ (uVar5 * 0x200 | uVar5 >> 0x17) ^ (uVar5 >> 0xf | uVar5 * 0x20000);
      uVar13 = uVar27 * 0x1000 | uVar27 >> 0x14;
      uVar6 = uVar13 + 0x1e7629ea + uVar5;
      uVar8 = uVar6 * 0x80 | uVar6 >> 0x19;
      uVar6 = uVar29 ^ uVar19 ^ (uVar22 << 0xf | uVar22 >> 0x11);
      uVar18 = (uVar6 >> 9 | uVar6 << 0x17) ^
               (uVar6 << 0xf | uVar6 >> 0x11) ^ (uVar35 << 7 | uVar35 >> 0x19) ^ uVar21 ^ uVar6;
      uVar11 = uVar17 * 0x200 | uVar17 >> 0x17;
      uVar25 = (uVar13 ^ uVar8) +
               (uVar36 ^ uVar18) + uVar26 + (uVar17 & uVar24 | (uVar17 | uVar24) & uVar27);
      uVar13 = uVar10 >> 0xd | uVar10 << 0x13;
      uVar17 = uVar33 ^ uVar12 ^ (uVar23 << 0xf | uVar23 >> 0x11);
      uVar10 = ((uVar10 ^ uVar14) & uVar5 ^ uVar14) + uVar4 + uVar36 + uVar8;
      uVar10 = uVar10 ^ (uVar10 * 0x200 | uVar10 >> 0x17) ^ (uVar10 >> 0xf | uVar10 * 0x20000);
      uVar4 = uVar25 * 0x1000 | uVar25 >> 0x14;
      uVar6 = uVar4 + 0x3cec53d4 + uVar10;
      uVar6 = uVar6 * 0x80 | uVar6 >> 0x19;
      uVar34 = (uVar17 >> 9 | uVar17 << 0x17) ^
               (uVar17 << 0xf | uVar17 >> 0x11) ^ (uVar31 << 7 | uVar31 >> 0x19) ^ uVar16 ^ uVar17;
      uVar26 = uVar27 * 0x200 | uVar27 >> 0x17;
      uVar8 = uVar5 >> 0xd | uVar5 << 0x13;
      uVar17 = (uVar4 ^ uVar6) +
               (uVar22 ^ uVar34) + uVar24 + (uVar27 & uVar11 | (uVar27 | uVar11) & uVar25);
      uVar5 = ((uVar5 ^ uVar13) & uVar10 ^ uVar13) + uVar14 + uVar22 + uVar6;
      uVar5 = uVar5 ^ (uVar5 * 0x200 | uVar5 >> 0x17) ^ (uVar5 >> 0xf | uVar5 * 0x20000);
      uVar4 = uVar17 * 0x1000 | uVar17 >> 0x14;
      uVar6 = uVar4 + 0x79d8a7a8 + uVar5;
      uVar14 = uVar6 * 0x80 | uVar6 >> 0x19;
      uVar6 = uVar7 ^ uVar15 ^ (uVar28 << 0xf | uVar28 >> 0x11);
      uVar29 = (uVar6 >> 9 | uVar6 << 0x17) ^
               (uVar6 << 0xf | uVar6 >> 0x11) ^ (uVar20 << 7 | uVar20 >> 0x19) ^ uVar36 ^ uVar6;
      uVar27 = uVar25 * 0x200 | uVar25 >> 0x17;
      uVar25 = (uVar4 ^ uVar14) +
               (uVar23 ^ uVar29) + uVar11 + (uVar25 & uVar26 | (uVar25 | uVar26) & uVar17);
      uVar4 = uVar10 >> 0xd | uVar10 << 0x13;
      uVar10 = ((uVar10 ^ uVar8) & uVar5 ^ uVar8) + uVar13 + uVar23 + uVar14;
      uVar10 = uVar10 ^ (uVar10 * 0x200 | uVar10 >> 0x17) ^ (uVar10 >> 0xf | uVar10 * 0x20000);
      uVar13 = uVar25 * 0x1000 | uVar25 >> 0x14;
      uVar6 = uVar13 + 0xf3b14f50 + uVar10;
      uVar6 = uVar6 * 0x80 | uVar6 >> 0x19;
      uVar7 = uVar35 ^ uVar21 ^ (uVar18 << 0xf | uVar18 >> 0x11);
      uVar7 = (uVar7 >> 9 | uVar7 << 0x17) ^
              (uVar7 << 0xf | uVar7 >> 0x11) ^ (uVar30 << 7 | uVar30 >> 0x19) ^ uVar22 ^ uVar7;
      uVar14 = uVar17 * 0x200 | uVar17 >> 0x17;
      uVar11 = uVar5 >> 0xd | uVar5 << 0x13;
      uVar24 = (uVar13 ^ uVar6) +
               (uVar28 ^ uVar7) + uVar26 + (uVar17 & uVar27 | (uVar17 | uVar27) & uVar25);
      uVar13 = ((uVar5 ^ uVar4) & uVar10 ^ uVar4) + uVar8 + uVar28 + uVar6;
      uVar13 = uVar13 ^ (uVar13 * 0x200 | uVar13 >> 0x17) ^ (uVar13 >> 0xf | uVar13 * 0x20000);
      uVar8 = uVar24 * 0x1000 | uVar24 >> 0x14;
      uVar6 = uVar8 + 0xe7629ea1 + uVar13;
      uVar32 = uVar6 * 0x80 | uVar6 >> 0x19;
      uVar6 = uVar31 ^ uVar16 ^ (uVar34 << 0xf | uVar34 >> 0x11);
      uVar31 = (uVar6 >> 9 | uVar6 << 0x17) ^
               (uVar6 << 0xf | uVar6 >> 0x11) ^ (uVar19 << 7 | uVar19 >> 0x19) ^ uVar23 ^ uVar6;
      uVar26 = uVar25 * 0x200 | uVar25 >> 0x17;
      uVar5 = uVar10 >> 0xd | uVar10 << 0x13;
      uVar17 = (uVar8 ^ uVar32) +
               (uVar18 ^ uVar31) + uVar27 + (uVar25 & uVar14 | (uVar25 | uVar14) & uVar24);
      uVar4 = ((uVar10 ^ uVar11) & uVar13 ^ uVar11) + uVar4 + uVar18 + uVar32;
      uVar4 = uVar4 ^ (uVar4 * 0x200 | uVar4 >> 0x17) ^ (uVar4 >> 0xf | uVar4 * 0x20000);
      uVar8 = uVar17 * 0x1000 | uVar17 >> 0x14;
      uVar6 = uVar8 + 0xcec53d43 + uVar4;
      uVar10 = uVar6 * 0x80 | uVar6 >> 0x19;
      uVar6 = uVar20 ^ uVar36 ^ (uVar29 << 0xf | uVar29 >> 0x11);
      uVar25 = (uVar6 >> 9 | uVar6 << 0x17) ^
               (uVar6 << 0xf | uVar6 >> 0x11) ^ (uVar12 << 7 | uVar12 >> 0x19) ^ uVar28 ^ uVar6;
      uVar20 = uVar24 * 0x200 | uVar24 >> 0x17;
      uVar6 = (uVar8 ^ uVar10) +
              (uVar25 ^ uVar34) + uVar14 + (uVar24 & uVar26 | (uVar24 | uVar26) & uVar17);
      uVar8 = uVar13 >> 0xd | uVar13 << 0x13;
      uVar14 = ((uVar13 ^ uVar5) & uVar4 ^ uVar5) + uVar11 + uVar34 + uVar10;
      uVar14 = uVar14 ^ (uVar14 * 0x200 | uVar14 >> 0x17) ^ (uVar14 >> 0xf | uVar14 * 0x20000);
      uVar13 = uVar6 * 0x1000 | uVar6 >> 0x14;
      uVar10 = uVar13 + 0x9d8a7a87 + uVar14;
      uVar10 = uVar10 * 0x80 | uVar10 >> 0x19;
      uVar11 = uVar30 ^ uVar22 ^ (uVar7 << 0xf | uVar7 >> 0x11);
      x[4] = (uVar11 >> 9 | uVar11 << 0x17) ^
             (uVar11 << 0xf | uVar11 >> 0x11) ^ (uVar15 << 7 | uVar15 >> 0x19) ^ uVar18 ^ uVar11;
      uVar11 = uVar17 * 0x200 | uVar17 >> 0x17;
      uVar27 = (uVar13 ^ uVar10) +
               (uVar29 ^ x[4]) + uVar26 + (uVar17 & uVar20 | (uVar17 | uVar20) & uVar6);
      uVar17 = uVar19 ^ uVar23 ^ (uVar31 << 0xf | uVar31 >> 0x11);
      uVar13 = uVar4 >> 0xd | uVar4 << 0x13;
      uVar4 = ((uVar4 ^ uVar8) & uVar14 ^ uVar8) + uVar5 + uVar29 + uVar10;
      x[5] = (uVar17 >> 9 | uVar17 << 0x17) ^
             (uVar17 << 0xf | uVar17 >> 0x11) ^ (uVar21 << 7 | uVar21 >> 0x19) ^ uVar34 ^ uVar17;
      uVar4 = uVar4 ^ (uVar4 * 0x200 | uVar4 >> 0x17) ^ (uVar4 >> 0xf | uVar4 * 0x20000);
      uVar5 = uVar27 * 0x1000 | uVar27 >> 0x14;
      uVar10 = uVar5 + 0x3b14f50f + uVar4;
      uVar10 = uVar10 * 0x80 | uVar10 >> 0x19;
      uVar24 = uVar14 >> 0xd | uVar14 << 0x13;
      uVar30 = (uVar5 ^ uVar10) +
               (uVar7 ^ x[5]) + uVar20 + (uVar6 & uVar11 | (uVar6 | uVar11) & uVar27);
      uVar8 = ((uVar14 ^ uVar13) & uVar4 ^ uVar13) + uVar8 + uVar7 + uVar10;
      uVar17 = uVar6 * 0x200 | uVar6 >> 0x17;
      uVar8 = uVar8 ^ (uVar8 * 0x200 | uVar8 >> 0x17) ^ (uVar8 >> 0xf | uVar8 * 0x20000);
      uVar5 = uVar30 * 0x1000 | uVar30 >> 0x14;
      uVar6 = uVar5 + 0x7629ea1e + uVar8;
      uVar6 = uVar6 * 0x80 | uVar6 >> 0x19;
      uVar10 = uVar12 ^ uVar28 ^ (uVar25 << 0xf | uVar25 >> 0x11);
      x[6] = (uVar10 >> 9 | uVar10 << 0x17) ^
             (uVar10 << 0xf | uVar10 >> 0x11) ^ (uVar16 << 7 | uVar16 >> 0x19) ^ uVar29 ^ uVar10;
      uVar19 = uVar27 * 0x200 | uVar27 >> 0x17;
      uVar14 = (uVar5 ^ uVar6) +
               (uVar31 ^ x[6]) + uVar11 + (uVar27 & uVar17 | (uVar27 | uVar17) & uVar30);
      uVar5 = uVar4 >> 0xd | uVar4 << 0x13;
      uVar10 = ((uVar4 ^ uVar24) & uVar8 ^ uVar24) + uVar13 + uVar31 + uVar6;
      uVar10 = uVar10 ^ (uVar10 * 0x200 | uVar10 >> 0x17) ^ (uVar10 >> 0xf | uVar10 * 0x20000);
      uVar4 = uVar14 * 0x1000 | uVar14 >> 0x14;
      uVar6 = uVar4 + 0xec53d43c + uVar10;
      uVar6 = uVar6 * 0x80 | uVar6 >> 0x19;
      uVar13 = uVar15 ^ uVar18 ^ (x[4] << 0xf | x[4] >> 0x11);
      x[7] = (uVar13 >> 9 | uVar13 << 0x17) ^
             (uVar13 << 0xf | uVar13 >> 0x11) ^ (uVar36 << 7 | uVar36 >> 0x19) ^ uVar7 ^ uVar13;
      uVar15 = uVar30 * 0x200 | uVar30 >> 0x17;
      uVar17 = (uVar4 ^ uVar6) +
               (uVar25 ^ x[7]) + uVar17 + (uVar30 & uVar19 | (uVar30 | uVar19) & uVar14);
      uVar13 = uVar8 >> 0xd | uVar8 << 0x13;
      uVar11 = ((uVar8 ^ uVar5) & uVar10 ^ uVar5) + uVar24 + uVar25 + uVar6;
      uVar11 = uVar11 ^ (uVar11 * 0x200 | uVar11 >> 0x17) ^ (uVar11 >> 0xf | uVar11 * 0x20000);
      uVar4 = uVar17 * 0x1000 | uVar17 >> 0x14;
      uVar6 = uVar4 + 0xd8a7a879 + uVar11;
      uVar6 = uVar6 * 0x80 | uVar6 >> 0x19;
      uVar8 = uVar21 ^ uVar34 ^ (x[5] << 0xf | x[5] >> 0x11);
      x[8] = (uVar8 >> 9 | uVar8 << 0x17) ^
             (uVar8 << 0xf | uVar8 >> 0x11) ^ (uVar22 << 7 | uVar22 >> 0x19) ^ uVar31 ^ uVar8;
      uVar12 = uVar14 * 0x200 | uVar14 >> 0x17;
      uVar24 = (uVar4 ^ uVar6) +
               (x[4] ^ x[8]) + uVar19 + (uVar14 & uVar15 | (uVar14 | uVar15) & uVar17);
      uVar4 = uVar10 >> 0xd | uVar10 << 0x13;
      uVar10 = ((uVar10 ^ uVar13) & uVar11 ^ uVar13) + uVar5 + x[4] + uVar6;
      uVar10 = uVar10 ^ (uVar10 * 0x200 | uVar10 >> 0x17) ^ (uVar10 >> 0xf | uVar10 * 0x20000);
      uVar5 = uVar24 * 0x1000 | uVar24 >> 0x14;
      uVar6 = uVar5 + 0xb14f50f3 + uVar10;
      uVar6 = uVar6 * 0x80 | uVar6 >> 0x19;
      uVar8 = uVar16 ^ uVar29 ^ (x[6] << 0xf | x[6] >> 0x11);
      x[9] = (uVar8 >> 9 | uVar8 << 0x17) ^
             (uVar8 << 0xf | uVar8 >> 0x11) ^ (uVar23 << 7 | uVar23 >> 0x19) ^ uVar25 ^ uVar8;
      uVar8 = uVar17 * 0x200 | uVar17 >> 0x17;
      uVar14 = (uVar5 ^ uVar6) +
               (x[5] ^ x[9]) + uVar15 + (uVar17 & uVar12 | (uVar17 | uVar12) & uVar24);
      uVar17 = uVar11 >> 0xd | uVar11 << 0x13;
      uVar5 = ((uVar11 ^ uVar4) & uVar10 ^ uVar4) + uVar13 + x[5] + uVar6;
      uVar5 = uVar5 ^ (uVar5 * 0x200 | uVar5 >> 0x17) ^ (uVar5 >> 0xf | uVar5 * 0x20000);
      uVar11 = uVar14 * 0x1000 | uVar14 >> 0x14;
      uVar6 = uVar11 + 0x629ea1e7 + uVar5;
      uVar21 = uVar6 * 0x80 | uVar6 >> 0x19;
      uVar6 = uVar36 ^ uVar7 ^ (x[7] << 0xf | x[7] >> 0x11);
      x[10] = (uVar6 >> 9 | uVar6 << 0x17) ^
              (uVar6 << 0xf | uVar6 >> 0x11) ^ (uVar28 << 7 | uVar28 >> 0x19) ^ x[4] ^ uVar6;
      uVar15 = uVar24 * 0x200 | uVar24 >> 0x17;
      uVar13 = uVar10 >> 0xd | uVar10 << 0x13;
      uVar12 = (uVar11 ^ uVar21) +
               (x[6] ^ x[10]) + uVar12 + (uVar24 & uVar8 | (uVar24 | uVar8) & uVar14);
      uVar10 = ((uVar10 ^ uVar17) & uVar5 ^ uVar17) + uVar4 + x[6] + uVar21;
      uVar10 = uVar10 ^ (uVar10 * 0x200 | uVar10 >> 0x17) ^ (uVar10 >> 0xf | uVar10 * 0x20000);
      uVar11 = uVar12 * 0x1000 | uVar12 >> 0x14;
      uVar6 = uVar11 + 0xc53d43ce + uVar10;
      uVar6 = uVar6 * 0x80 | uVar6 >> 0x19;
      uVar4 = uVar22 ^ uVar31 ^ (x[8] << 0xf | x[8] >> 0x11);
      x[0xb] = (uVar4 >> 9 | uVar4 << 0x17) ^
               (uVar4 << 0xf | uVar4 >> 0x11) ^ (uVar18 << 7 | uVar18 >> 0x19) ^ x[5] ^ uVar4;
      uVar22 = uVar14 * 0x200 | uVar14 >> 0x17;
      uVar14 = (uVar11 ^ uVar6) +
               (x[0xb] ^ x[7]) + uVar8 + (uVar14 & uVar15 | (uVar14 | uVar15) & uVar12);
      uVar8 = uVar5 >> 0xd | uVar5 << 0x13;
      uVar11 = ((uVar5 ^ uVar13) & uVar10 ^ uVar13) + uVar17 + x[7] + uVar6;
      uVar11 = uVar11 ^ (uVar11 * 0x200 | uVar11 >> 0x17) ^ (uVar11 >> 0xf | uVar11 * 0x20000);
      uVar5 = uVar14 * 0x1000 | uVar14 >> 0x14;
      uVar6 = uVar5 + 0x8a7a879d + uVar11;
      uVar6 = uVar6 * 0x80 | uVar6 >> 0x19;
      uVar4 = uVar23 ^ uVar25 ^ (x[9] << 0xf | x[9] >> 0x11);
      x[0xc] = (uVar4 >> 9 | uVar4 << 0x17) ^
               (uVar4 << 0xf | uVar4 >> 0x11) ^ (uVar34 << 7 | uVar34 >> 0x19) ^ x[6] ^ uVar4;
      uVar24 = uVar12 * 0x200 | uVar12 >> 0x17;
      uVar4 = uVar10 >> 0xd | uVar10 << 0x13;
      uVar21 = (uVar5 ^ uVar6) +
               (x[8] ^ x[0xc]) + uVar15 + (uVar12 & uVar22 | (uVar12 | uVar22) & uVar14);
      uVar10 = ((uVar10 ^ uVar8) & uVar11 ^ uVar8) + uVar13 + x[8] + uVar6;
      uVar10 = uVar10 ^ (uVar10 * 0x200 | uVar10 >> 0x17) ^ (uVar10 >> 0xf | uVar10 * 0x20000);
      uVar13 = uVar21 * 0x1000 | uVar21 >> 0x14;
      uVar6 = uVar13 + 0x14f50f3b + uVar10;
      uVar5 = uVar6 * 0x80 | uVar6 >> 0x19;
      uVar6 = uVar28 ^ x[4] ^ (x[10] << 0xf | x[10] >> 0x11);
      x[0xd] = (uVar6 >> 9 | uVar6 << 0x17) ^
               (uVar6 << 0xf | uVar6 >> 0x11) ^ (uVar29 << 7 | uVar29 >> 0x19) ^ x[7] ^ uVar6;
      uVar15 = uVar14 * 0x200 | uVar14 >> 0x17;
      uVar12 = uVar11 >> 0xd | uVar11 << 0x13;
      uVar17 = (uVar13 ^ uVar5) +
               (x[9] ^ x[0xd]) + uVar22 + (uVar14 & uVar24 | (uVar14 | uVar24) & uVar21);
      uVar11 = ((uVar11 ^ uVar4) & uVar10 ^ uVar4) + uVar8 + x[9] + uVar5;
      uVar11 = uVar11 ^ (uVar11 * 0x200 | uVar11 >> 0x17) ^ (uVar11 >> 0xf | uVar11 * 0x20000);
      uVar5 = uVar17 * 0x1000 | uVar17 >> 0x14;
      uVar6 = uVar5 + 0x29ea1e76 + uVar11;
      uVar8 = uVar6 * 0x80 | uVar6 >> 0x19;
      uVar6 = uVar18 ^ x[5] ^ (x[0xb] << 0xf | x[0xb] >> 0x11);
      x[0xe] = (uVar6 >> 9 | uVar6 << 0x17) ^
               (uVar6 << 0xf | uVar6 >> 0x11) ^ (uVar7 << 7 | uVar7 >> 0x19) ^ x[8] ^ uVar6;
      uVar22 = uVar21 * 0x200 | uVar21 >> 0x17;
      uVar13 = uVar10 >> 0xd | uVar10 << 0x13;
      uVar5 = (uVar5 ^ uVar8) +
              (x[10] ^ x[0xe]) + uVar24 + (uVar21 & uVar15 | (uVar21 | uVar15) & uVar17);
      uVar24 = ((uVar10 ^ uVar12) & uVar11 ^ uVar12) + uVar4 + x[10] + uVar8;
      uVar24 = uVar24 ^ (uVar24 * 0x200 | uVar24 >> 0x17) ^ (uVar24 >> 0xf | uVar24 * 0x20000);
      uVar10 = uVar5 * 0x1000 | uVar5 >> 0x14;
      uVar6 = uVar10 + 0x53d43cec + uVar24;
      uVar4 = uVar6 * 0x80 | uVar6 >> 0x19;
      uVar6 = x[6] ^ uVar34 ^ (x[0xc] << 0xf | x[0xc] >> 0x11);
      x[0xf] = (uVar6 >> 9 | uVar6 << 0x17) ^
               (uVar6 << 0xf | uVar6 >> 0x11) ^ (uVar31 << 7 | uVar31 >> 0x19) ^ x[9] ^ uVar6;
      uVar8 = uVar17 * 0x200 | uVar17 >> 0x17;
      uVar14 = uVar11 >> 0xd | uVar11 << 0x13;
      uVar15 = (uVar10 ^ uVar4) +
               (x[0xb] ^ x[0xf]) + uVar15 + (uVar17 & uVar22 | (uVar17 | uVar22) & uVar5);
      uVar17 = ((uVar11 ^ uVar13) & uVar24 ^ uVar13) + uVar12 + x[0xb] + uVar4;
      uVar17 = uVar17 ^ (uVar17 * 0x200 | uVar17 >> 0x17) ^ (uVar17 >> 0xf | uVar17 * 0x20000);
      uVar10 = uVar15 * 0x1000 | uVar15 >> 0x14;
      uVar6 = uVar10 + 0xa7a879d8 + uVar17;
      uVar21 = uVar6 * 0x80 | uVar6 >> 0x19;
      uVar6 = uVar29 ^ x[7] ^ (x[0xd] << 0xf | x[0xd] >> 0x11);
      x[0] = (uVar6 >> 9 | uVar6 << 0x17) ^
             (uVar6 << 0xf | uVar6 >> 0x11) ^ (uVar25 << 7 | uVar25 >> 0x19) ^ x[10] ^ uVar6;
      uVar4 = uVar5 * 0x200 | uVar5 >> 0x17;
      uVar11 = uVar24 >> 0xd | uVar24 << 0x13;
      uVar12 = (uVar10 ^ uVar21) +
               (x[0xc] ^ x[0]) + uVar22 + (uVar5 & uVar8 | (uVar5 | uVar8) & uVar15);
      uVar5 = ((uVar24 ^ uVar14) & uVar17 ^ uVar14) + uVar13 + x[0xc] + uVar21;
      uVar5 = uVar5 ^ (uVar5 * 0x200 | uVar5 >> 0x17) ^ (uVar5 >> 0xf | uVar5 * 0x20000);
      uVar10 = uVar12 * 0x1000 | uVar12 >> 0x14;
      uVar6 = uVar10 + 0x4f50f3b1 + uVar5;
      uVar13 = uVar6 * 0x80 | uVar6 >> 0x19;
      uVar6 = uVar7 ^ x[8] ^ (x[0xe] << 0xf | x[0xe] >> 0x11);
      uVar24 = uVar15 * 0x200 | uVar15 >> 0x17;
      x[1] = (uVar6 >> 9 | uVar6 << 0x17) ^
             (uVar6 << 0xf | uVar6 >> 0x11) ^ (x[4] << 7 | x[4] >> 0x19) ^ x[0xb] ^ uVar6;
      uVar6 = (uVar10 ^ uVar13) +
              (x[1] ^ x[0xd]) + uVar8 + (uVar15 & uVar4 | (uVar15 | uVar4) & uVar12);
      uVar7 = uVar17 >> 0xd | uVar17 << 0x13;
      uVar13 = ((uVar17 ^ uVar11) & uVar5 ^ uVar11) + uVar14 + x[0xd] + uVar13;
      uVar13 = uVar13 ^ (uVar13 * 0x200 | uVar13 >> 0x17) ^ (uVar13 >> 0xf | uVar13 * 0x20000);
      uVar17 = uVar6 * 0x1000 | uVar6 >> 0x14;
      uVar10 = uVar17 + 0x9ea1e762 + uVar13;
      uVar15 = uVar10 * 0x80 | uVar10 >> 0x19;
      uVar10 = uVar31 ^ x[9] ^ (x[0xf] << 0xf | x[0xf] >> 0x11);
      x[2] = (uVar10 >> 9 | uVar10 << 0x17) ^
             (uVar10 << 0xf | uVar10 >> 0x11) ^ (x[5] << 7 | x[5] >> 0x19) ^ x[0xc] ^ uVar10;
      uVar14 = uVar12 * 0x200 | uVar12 >> 0x17;
      uVar8 = uVar5 >> 0xd | uVar5 << 0x13;
      uVar12 = (uVar17 ^ uVar15) +
               (x[2] ^ x[0xe]) + uVar4 + (uVar12 & uVar24 | (uVar12 | uVar24) & uVar6);
      uVar4 = (x[0] << 0xf | x[0] >> 0x11) ^ uVar25 ^ x[10];
      uVar10 = ((uVar5 ^ uVar7) & uVar13 ^ uVar7) + x[0xe] + uVar11 + uVar15;
      uVar10 = (uVar10 * 0x200 | uVar10 >> 0x17) ^ (uVar10 >> 0xf | uVar10 * 0x20000) ^ uVar10;
      uVar5 = uVar12 * 0x1000 | uVar12 >> 0x14;
      uVar17 = uVar5 + 0x3d43cec5 + uVar10;
      uVar17 = uVar17 * 0x80 | uVar17 >> 0x19;
      local_c4 = local_c4 ^ uVar12;
      x[3] = (uVar4 >> 9 | uVar4 << 0x17) ^
             (uVar4 << 0xf | uVar4 >> 0x11) ^ (x[6] << 7 | x[6] >> 0x19) ^ x[0xd] ^ uVar4;
      local_c8 = local_c8 ^
                 (uVar5 ^ uVar17) +
                 (x[3] ^ x[0xf]) + uVar24 + (uVar6 & uVar14 | (uVar6 | uVar14) & uVar12);
      ctx->state[0] = local_c8;
      uVar4 = ((uVar13 ^ uVar8) & uVar10 ^ uVar8) + x[0xf] + uVar7 + uVar17;
      ctx->state[1] = local_c4;
      local_c0 = local_c0 ^ (uVar6 * 0x200 | uVar6 >> 0x17);
      local_b4 = local_b4 ^ uVar14;
      ctx->state[2] = local_c0;
      local_b8 = local_b8 ^ (uVar13 >> 0xd | uVar13 << 0x13);
      local_bc = local_bc ^ uVar10;
      ctx->state[3] = local_b4;
      local_b0 = local_b0 ^ uVar4 ^ (uVar4 * 0x200 | uVar4 >> 0x17) ^
                 (uVar4 >> 0xf | uVar4 * 0x20000);
      local_ac = local_ac ^ uVar8;
      *(ulong *)(ctx->state + 4) = CONCAT44(local_bc,local_b0);
      *(ulong *)(ctx->state + 6) = CONCAT44(local_ac,local_b8);
    } while (local_a8 < pvVar9);
  }
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

void sm3_conclude_ctx(sm3_ctx *ctx)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint32_t uVar5;
  
  uVar1 = ctx->buflen;
  uVar5 = ctx->total[1];
  uVar3 = ctx->total[0] + (int)uVar1;
  ctx->total[0] = uVar3;
  if (uVar3 < uVar1) {
    uVar5 = uVar5 + 1;
    ctx->total[1] = uVar5;
  }
  uVar4 = uVar3 * 8;
  uVar2 = uVar5 << 3;
  ctx->buffer[(-(ulong)(uVar1 < 0x38) & 0xfffffffffffffff0) + 0x1e] =
       uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
       (uVar3 >> 0x1d | uVar2) << 0x18;
  ctx->buffer[(-(ulong)(uVar1 < 0x38) & 0xfffffffffffffff0) + 0x1f] =
       uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar3 * 0x8000000;
  memcpy((void *)((long)ctx->buffer + uVar1),fillbuf,
         ((-(ulong)(uVar1 < 0x38) & 0xffffffffffffffc0) + 0x78) - uVar1);
  sm3_process_block(ctx->buffer,(-(ulong)(uVar1 < 0x38) & 0xffffffffffffffc0) + 0x80,ctx);
  return;
}



/* WARNING: Unknown calling convention */

void * sm3_finish_ctx(sm3_ctx *ctx,void *resbuf)

{
  uint uVar1;
  long lVar2;
  
  sm3_conclude_ctx(ctx);
  lVar2 = 0;
  do {
    uVar1 = *(uint *)((long)ctx->state + lVar2);
    *(uint *)((long)resbuf + lVar2) =
         uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0x20);
  return resbuf;
}



/* WARNING: Unknown calling convention */

void sm3_process_bytes(void *buffer,size_t len,sm3_ctx *ctx)

{
  uint32_t *puVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  size_t sVar9;
  undefined8 *puVar10;
  uint32_t *puVar11;
  ulong uVar12;
  
  sVar9 = ctx->buflen;
  if (sVar9 != 0) {
    puVar11 = ctx->buffer;
    uVar12 = 0x80 - sVar9;
    if (len < 0x80 - sVar9) {
      uVar12 = len;
    }
    memcpy((void *)((long)puVar11 + sVar9),buffer,uVar12);
    uVar4 = ctx->buflen + uVar12;
    ctx->buflen = uVar4;
    if (0x40 < uVar4) {
      sm3_process_block(puVar11,uVar4 & 0xffffffffffffffc0,ctx);
      uVar3 = (uint)uVar4 & 0x3f;
      uVar5 = (ulong)uVar3;
      ctx->buflen = uVar5;
      puVar1 = (uint32_t *)((long)puVar11 + (sVar9 + uVar12 & 0xffffffffffffffc0));
      if (uVar3 < 8) {
        if ((uVar4 & 4) == 0) {
          if (((uVar4 & 0x3f) != 0) && (*(char *)ctx->buffer = (char)*puVar1, (uVar4 & 2) != 0)) {
            *(undefined2 *)((long)ctx->buffer + (uVar5 - 2)) =
                 *(undefined2 *)((uVar5 - 2) + (long)puVar1);
          }
        }
        else {
          ctx->buffer[0] = *puVar1;
          *(undefined4 *)((long)ctx->buffer + (uVar5 - 4)) =
               *(undefined4 *)((uVar5 - 4) + (long)puVar1);
        }
      }
      else {
        uVar4 = (ulong)(ctx->buffer + 2) & 0xfffffffffffffff8;
        *(undefined8 *)ctx->buffer = *(undefined8 *)puVar1;
        *(undefined8 *)((long)ctx->total + uVar5 + 8) = *(undefined8 *)((uVar5 - 8) + (long)puVar1);
        lVar7 = (long)puVar11 - uVar4;
        uVar3 = uVar3 + (int)lVar7 & 0xfffffff8;
        if (7 < uVar3) {
          uVar6 = 0;
          do {
            uVar5 = (ulong)uVar6;
            uVar6 = uVar6 + 8;
            *(undefined8 *)(uVar4 + uVar5) = *(undefined8 *)((long)puVar1 + (uVar5 - lVar7));
          } while (uVar6 < uVar3);
        }
      }
    }
    buffer = (void *)((long)buffer + uVar12);
    len = len - uVar12;
  }
  puVar10 = (undefined8 *)buffer;
  if (0x3f < len) {
    if (((ulong)buffer & 3) != 0) {
      if (len != 0x40) {
        uVar12 = len - 0x41 >> 6;
        do {
          uVar2 = puVar10[1];
          puVar8 = puVar10 + 8;
          *(undefined8 *)ctx->buffer = *puVar10;
          *(undefined8 *)(ctx->buffer + 2) = uVar2;
          uVar2 = puVar10[3];
          *(undefined8 *)(ctx->buffer + 4) = puVar10[2];
          *(undefined8 *)(ctx->buffer + 6) = uVar2;
          uVar2 = puVar10[5];
          *(undefined8 *)(ctx->buffer + 8) = puVar10[4];
          *(undefined8 *)(ctx->buffer + 10) = uVar2;
          uVar2 = puVar10[7];
          *(undefined8 *)(ctx->buffer + 0xc) = puVar10[6];
          *(undefined8 *)(ctx->buffer + 0xe) = uVar2;
          sm3_process_block(ctx->buffer,0x40,ctx);
          puVar10 = puVar8;
        } while (puVar8 != (undefined8 *)((long)buffer + (uVar12 + 1) * 8 * 8));
        len = (len - 0x40) + uVar12 * -0x40;
        puVar10 = (undefined8 *)((long)buffer + (uVar12 + 1) * 8 * 8);
      }
      goto LAB_00102c38;
    }
    puVar10 = (undefined8 *)((long)buffer + (len & 0xffffffffffffffc0));
    sm3_process_block(buffer,len & 0xffffffffffffffc0,ctx);
    len = (ulong)((uint)len & 0x3f);
  }
  if (len == 0) {
    return;
  }
LAB_00102c38:
  puVar11 = ctx->buffer;
  sVar9 = ctx->buflen;
  uVar3 = (uint)len;
  uVar12 = len & 0xffffffff;
  puVar8 = (undefined8 *)((long)puVar11 + sVar9);
  if (uVar3 < 8) {
    if ((len & 4) == 0) {
      if ((uVar3 != 0) && (*(undefined1 *)puVar8 = *(undefined1 *)puVar10, (len & 2) != 0)) {
        *(undefined2 *)((long)puVar8 + (uVar12 - 2)) = *(undefined2 *)((long)puVar10 + (uVar12 - 2))
        ;
      }
    }
    else {
      *(undefined4 *)puVar8 = *(undefined4 *)puVar10;
      *(undefined4 *)((long)puVar8 + (uVar12 - 4)) = *(undefined4 *)((long)puVar10 + (uVar12 - 4));
    }
  }
  else {
    *puVar8 = *puVar10;
    *(undefined8 *)((long)puVar8 + ((len & 0xffffffff) - 8)) =
         *(undefined8 *)((long)puVar10 + ((len & 0xffffffff) - 8));
    lVar7 = (long)puVar8 - ((ulong)(puVar8 + 1) & 0xfffffffffffffff8);
    uVar3 = uVar3 + (int)lVar7 & 0xfffffff8;
    if (7 < uVar3) {
      uVar12 = 0;
      do {
        uVar6 = (int)uVar12 + 8;
        *(undefined8 *)(((ulong)(puVar8 + 1) & 0xfffffffffffffff8) + uVar12) =
             *(undefined8 *)((long)puVar10 + (uVar12 - lVar7));
        uVar12 = (ulong)uVar6;
      } while (uVar6 < uVar3);
    }
  }
  sVar9 = sVar9 + len;
  if (0x3f < sVar9) {
    sVar9 = sVar9 - 0x40;
    sm3_process_block(puVar11,0x40,ctx);
    memcpy(puVar11,ctx->buffer + 0x10,sVar9);
  }
  ctx->buflen = sVar9;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void * sm3_buffer(char *buffer,size_t len,void *resblock)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  sm3_ctx ctx;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  ctx.total[0] = 0;
  ctx.total[1] = 0;
  ctx.state._0_8_ = __LC0;
  ctx.state._8_8_ = _UNK_00102f68;
  ctx.buflen = 0;
  ctx.state._16_8_ = __LC1;
  ctx.state._24_8_ = _UNK_00102f78;
  sm3_process_bytes(buffer,len,&ctx);
  sm3_conclude_ctx(&ctx);
  lVar3 = 0;
  do {
    uVar1 = *(uint *)((long)ctx.state + lVar3);
    *(uint *)((long)resblock + lVar3) =
         uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    lVar3 = lVar3 + 4;
  } while (lVar3 != 0x20);
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return resblock;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


