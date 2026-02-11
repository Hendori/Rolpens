
undefined8 ecp_mod_p521(long *param_1)

{
  ulong *puVar1;
  ushort uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long in_FS_OFFSET;
  undefined8 *local_88;
  undefined2 local_80;
  ushort local_7e;
  undefined8 local_78 [11];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = 0;
  if (8 < *(ushort *)((long)param_1 + 10)) {
    local_7e = *(ushort *)((long)param_1 + 10) - 8;
    local_80 = 1;
    if (10 < local_7e) {
      local_7e = 10;
    }
    local_88 = local_78;
    puVar6 = (undefined8 *)(*param_1 + 0x40);
    puVar7 = local_88;
    for (uVar5 = (ulong)local_7e; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    uVar4 = mbedtls_mpi_shift_r(&local_88);
    if ((int)uVar4 == 0) {
      lVar3 = *param_1;
      uVar2 = *(ushort *)((long)param_1 + 10);
      puVar1 = (ulong *)(lVar3 + 0x40);
      *puVar1 = *puVar1 & 0x1ff;
      if (9 < uVar2) {
        memset((void *)(lVar3 + 0x48),0,(ulong)uVar2 * 8 - 0x48);
      }
      uVar4 = mbedtls_mpi_add_abs(param_1,param_1,&local_88);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
ecp_mod_koblitz(long *param_1,undefined8 param_2,ulong param_3,long param_4,long param_5,
               ulong param_6)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ushort uVar9;
  ulong uVar10;
  uint uVar11;
  long in_FS_OFFSET;
  undefined1 *local_98;
  undefined2 local_90;
  short local_8e;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  uVar8 = (ulong)*(ushort *)((long)param_1 + 10);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar7 = 0;
  if (param_3 <= uVar8) {
    uVar5 = (int)param_4 - (int)param_3;
    uVar3 = param_3 + param_4;
    uVar6 = uVar5 + *(ushort *)((long)param_1 + 10);
    local_8e = (short)uVar6;
    uVar10 = (ulong)(uVar6 & 0xffff);
    if (uVar3 < uVar10) {
      local_8e = (short)param_3 + (short)param_4;
      uVar10 = uVar3;
    }
    local_80 = 0x10001;
    local_90 = 1;
    lVar1 = (param_3 - param_4) * 8;
    lVar4 = *param_1;
    local_78 = (undefined1  [16])0x0;
    local_68 = (undefined1  [16])0x0;
    local_58 = (undefined1  [16])0x0;
    uVar6 = (uint)(uVar10 << 3);
    if (7 < uVar6) {
      uVar10 = 0;
      do {
        uVar11 = (int)uVar10 + 8;
        *(undefined8 *)(local_78 + uVar10) = *(undefined8 *)(lVar1 + lVar4 + uVar10);
        uVar10 = (ulong)uVar11;
      } while (uVar11 < uVar6);
    }
    local_98 = local_78;
    local_88 = param_2;
    if (param_5 == 0) {
      local_8e = local_8e + 1;
    }
    else {
      uVar7 = mbedtls_mpi_shift_r(&local_98,0x20);
      if ((int)uVar7 != 0) goto LAB_001001f1;
      uVar8 = (ulong)*(ushort *)((long)param_1 + 10);
      local_8e = local_8e + local_80._2_2_;
    }
    if (param_6 != 0) {
      puVar2 = (ulong *)(*param_1 + -8 + param_3 * 8);
      *puVar2 = *puVar2 & param_6;
    }
    if (param_3 < uVar8) {
      memset((void *)(*param_1 + param_3 * 8),0,(uVar8 - param_3) * 8);
    }
    uVar7 = mbedtls_mpi_mul_mpi(&local_98,&local_98,&local_88);
    if (((int)uVar7 == 0) &&
       (uVar7 = mbedtls_mpi_add_abs(param_1,param_1,&local_98), (int)uVar7 == 0)) {
      uVar9 = *(ushort *)((long)param_1 + 10);
      uVar5 = (uVar5 & 0xffff) + (uint)uVar9;
      local_8e = (short)uVar5;
      uVar8 = (ulong)uVar5 & 0xffff;
      if (uVar3 < uVar8) {
        local_8e = (short)param_3 + (short)param_4;
        uVar8 = uVar3;
      }
      uVar5 = (int)uVar8 * 8;
      local_78 = (undefined1  [16])0x0;
      lVar4 = *param_1;
      local_68 = (undefined1  [16])0x0;
      local_58 = (undefined1  [16])0x0;
      if (7 < uVar5) {
        uVar6 = 0;
        do {
          uVar8 = (ulong)uVar6;
          uVar6 = uVar6 + 8;
          *(undefined8 *)(local_78 + uVar8) = *(undefined8 *)(lVar1 + lVar4 + uVar8);
        } while (uVar6 < uVar5);
      }
      if (param_5 != 0) {
        uVar7 = mbedtls_mpi_shift_r(&local_98,0x20);
        if ((int)uVar7 != 0) goto LAB_001001f1;
        uVar9 = *(ushort *)((long)param_1 + 10);
      }
      local_8e = local_8e + local_80._2_2_;
      if (param_6 != 0) {
        puVar2 = (ulong *)(*param_1 + -8 + param_3 * 8);
        *puVar2 = *puVar2 & param_6;
      }
      if (param_3 < uVar9) {
        memset((void *)(*param_1 + param_3 * 8),0,(uVar9 - param_3) * 8);
      }
      uVar7 = mbedtls_mpi_mul_mpi(&local_98,&local_98,&local_88);
      if ((int)uVar7 == 0) {
        uVar7 = mbedtls_mpi_add_abs(param_1,param_1,&local_98);
      }
    }
  }
LAB_001001f1:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ecp_mod_p256k1(undefined8 param_1)

{
  ecp_mod_koblitz(param_1,&Rp_2,4,0,0,0);
  return;
}



void ecp_mod_p224k1(undefined8 param_1)

{
  ecp_mod_koblitz(param_1,&Rp_1,4,1,0x20,0xffffffff);
  return;
}



void ecp_mod_p192k1(undefined8 param_1)

{
  ecp_mod_koblitz(param_1,&Rp_0,3,0,0,0);
  return;
}



undefined8 ecp_mod_p448(long *param_1)

{
  ushort uVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  undefined1 *local_c8;
  undefined2 uStack_c0;
  ushort uStack_be;
  undefined4 uStack_bc;
  undefined8 *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  long local_20;
  
  uVar1 = *(ushort *)((long)param_1 + 10);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = 0;
  if (7 < uVar1) {
    uStack_be = uVar1 - 7;
    uStack_c0 = 1;
    if (uStack_be < 8) {
      local_c8 = local_68;
      lVar2 = *param_1;
      uVar3 = 0;
      local_68 = (undefined1  [16])0x0;
      local_58 = (undefined1  [16])0x0;
      local_48 = (undefined1  [16])0x0;
      local_38 = (undefined1  [16])0x0;
      do {
        uVar5 = (ulong)uVar3;
        uVar3 = uVar3 + 8;
        *(undefined8 *)(local_c8 + uVar5) = *(undefined8 *)(lVar2 + 0x38 + uVar5);
      } while (uVar3 < (uint)uStack_be * 8);
      *(undefined8 *)(lVar2 + 0x38) = 0;
      uVar3 = (uint)uVar1 * 8 - 0x38;
      uVar5 = lVar2 + 0x40U & 0xfffffffffffffff8;
      *(undefined8 *)(lVar2 + 0x30 + (ulong)uVar3) = 0;
      uVar3 = uVar3 + ((int)(lVar2 + 0x38) - (int)uVar5) & 0xfffffff8;
      if (7 < uVar3) {
        uVar6 = 0;
        do {
          uVar7 = (ulong)uVar6;
          uVar6 = uVar6 + 8;
          *(undefined8 *)(uVar5 + uVar7) = 0;
        } while (uVar6 < uVar3);
      }
      uVar4 = mbedtls_mpi_add_mpi(param_1,param_1,&local_c8);
      if ((int)uVar4 == 0) {
        uStack_b0 = CONCAT44(uStack_bc,CONCAT22(uStack_be,uStack_c0));
        local_b8 = &local_a8;
        local_a8 = local_68._0_8_;
        uStack_a0 = local_68._8_8_;
        local_78 = local_38._0_8_;
        local_98 = local_58._0_8_;
        uStack_90 = local_58._8_8_;
        local_88 = local_48._0_8_;
        uStack_80 = local_48._8_8_;
        uVar4 = mbedtls_mpi_shift_r(&local_b8,0xe0);
        if (((int)uVar4 == 0) &&
           (uVar4 = mbedtls_mpi_add_mpi(param_1,param_1,&local_b8), (int)uVar4 == 0)) {
          local_58._8_8_ = local_58._8_8_ & 0xffffffff;
          if (4 < uStack_be) {
            memset(local_48,0,(ulong)uStack_be * 8 - 0x20);
          }
          uVar4 = mbedtls_mpi_add_mpi(&local_c8,&local_c8,&local_b8);
          if ((int)uVar4 == 0) {
            uStack_be = 8;
            uVar4 = mbedtls_mpi_shift_l(&local_c8,0xe0);
            if ((int)uVar4 == 0) {
              uVar4 = mbedtls_mpi_add_mpi(param_1,param_1,&local_c8);
            }
          }
        }
      }
    }
    else {
      uVar4 = 0xffffb080;
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



undefined8 ecp_mod_p255(long *param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  undefined8 local_38 [5];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (4 < *(ushort *)((long)param_1 + 10)) {
    uVar4 = (ulong)*(ushort *)((long)param_1 + 10) - 4;
    if (4 < uVar4) {
      uVar3 = 0xffffb080;
      goto LAB_001006f9;
    }
    lVar1 = *param_1;
    uVar7 = 0;
    do {
      uVar2 = (int)uVar7 + 8;
      *(undefined8 *)((long)local_38 + uVar7) = *(undefined8 *)(lVar1 + 0x20 + uVar7);
      uVar7 = (ulong)uVar2;
    } while (uVar2 < (uint)((int)uVar4 * 8));
    *(undefined8 *)(lVar1 + 0x20) = 0;
    *(undefined8 *)(lVar1 + 0x18 + (uVar4 * 8 & 0xffffffff)) = 0;
    uVar7 = lVar1 + 0x28U & 0xfffffffffffffff8;
    uVar2 = (int)(uVar4 * 8) + ((int)(lVar1 + 0x20) - (int)uVar7) & 0xfffffff8;
    if (7 < uVar2) {
      uVar5 = 0;
      do {
        uVar6 = (ulong)uVar5;
        uVar5 = uVar5 + 8;
        *(undefined8 *)(uVar7 + uVar6) = 0;
      } while (uVar5 < uVar2);
    }
    mbedtls_mpi_core_mla(*param_1,5,local_38,uVar4,0x26);
  }
  uVar3 = 0;
LAB_001006f9:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int ecp_mod_p384(undefined8 *param_1)

{
  ushort uVar1;
  ulong *puVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  byte bVar7;
  ulong uVar8;
  ulong *puVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  char cVar18;
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
  char cVar31;
  
  iVar4 = mbedtls_mpi_grow(param_1,0xd);
  if (iVar4 == 0) {
    puVar2 = (ulong *)*param_1;
    uVar3 = *puVar2;
    uVar8 = puVar2[6];
    uVar22 = (uint)uVar8;
    uVar19 = (uint)uVar3 + uVar22;
    uVar11 = (uint)puVar2[10];
    uVar5 = (uint)(puVar2[10] >> 0x20);
    uVar20 = uVar19 + uVar5;
    uVar21 = uVar20 + uVar11;
    uVar23 = (uint)(puVar2[0xb] >> 0x20);
    bVar7 = (CARRY4((uint)uVar3,uVar22) + CARRY4(uVar19,uVar5) + CARRY4(uVar20,uVar11)) -
            (uVar21 < uVar23);
    uVar19 = (uint)(uVar3 >> 0x20);
    if (bVar7 == 0xff) {
      cVar31 = -(uVar3 >> 0x20 == 0);
      uVar19 = uVar19 - 1;
    }
    else {
      cVar31 = CARRY4((uint)bVar7,uVar19);
      uVar19 = bVar7 + uVar19;
    }
    uVar30 = (uint)puVar2[0xb];
    uVar16 = (uint)(uVar8 >> 0x20);
    uVar20 = uVar19 + uVar16 + uVar30;
    uVar12 = uVar20 + uVar23;
    uVar26 = uVar12 - uVar22;
    bVar7 = ((cVar31 + CARRY4(uVar19,uVar16) + CARRY4(uVar19 + uVar16,uVar30) +
             CARRY4(uVar20,uVar23)) - (uVar12 < uVar22)) - (uVar26 < uVar11);
    uVar19 = (uint)puVar2[1];
    *puVar2 = CONCAT44(uVar26 - uVar11,uVar21 - uVar23);
    if ((char)bVar7 < '\0') {
      uVar20 = (uint)(char)bVar7;
      cVar31 = -(uVar19 < -uVar20);
    }
    else {
      uVar20 = (uint)bVar7;
      cVar31 = CARRY4(uVar19,uVar20);
    }
    uVar17 = (uint)puVar2[7];
    uVar21 = uVar19 + uVar20 + uVar17;
    uVar12 = uVar21 + uVar23;
    uVar26 = uVar12 - uVar16;
    bVar7 = ((cVar31 + CARRY4(uVar19 + uVar20,uVar17) + CARRY4(uVar21,uVar23)) - (uVar12 < uVar16))
            - (uVar26 < uVar5);
    uVar19 = (uint)(puVar2[1] >> 0x20);
    if ((char)bVar7 < '\0') {
      uVar20 = (uint)(char)bVar7;
      cVar31 = -(uVar19 < -uVar20);
    }
    else {
      uVar20 = (uint)bVar7;
      cVar31 = CARRY4(uVar20,uVar19);
    }
    uVar21 = (uint)(puVar2[7] >> 0x20);
    uVar12 = uVar20 + uVar19 + uVar21;
    uVar13 = uVar12 + uVar22;
    uVar14 = uVar13 + uVar11;
    uVar15 = uVar14 + uVar5;
    uVar28 = uVar15 - uVar17;
    uVar24 = uVar28 - uVar30;
    bVar7 = (((cVar31 + CARRY4(uVar20 + uVar19,uVar21) + CARRY4(uVar12,uVar22) +
               CARRY4(uVar13,uVar11) + CARRY4(uVar14,uVar5)) - (uVar15 < uVar17)) -
            (uVar28 < uVar30)) - (uVar24 < uVar23);
    puVar2[1] = CONCAT44(uVar24 - uVar23,uVar26 - uVar5);
    uVar19 = (uint)puVar2[2];
    if ((char)bVar7 < '\0') {
      uVar20 = (uint)(char)bVar7;
      cVar31 = -(uVar19 < -uVar20);
    }
    else {
      uVar20 = (uint)bVar7;
      cVar31 = CARRY4(uVar19,uVar20);
    }
    uVar14 = uVar19 + uVar20 + uVar5;
    uVar15 = uVar14 + uVar5;
    uVar27 = (uint)puVar2[8];
    uVar24 = uVar15 + uVar27;
    uVar28 = uVar24 + uVar16;
    uVar12 = uVar22 + uVar28;
    uVar26 = uVar12 + uVar11;
    uVar13 = uVar26 + uVar30;
    uVar29 = uVar13 - uVar21;
    uVar25 = uVar29 - uVar23;
    bVar7 = (((cVar31 + CARRY4(uVar19 + uVar20,uVar5) + CARRY4(uVar14,uVar5) + CARRY4(uVar15,uVar27)
               + CARRY4(uVar24,uVar16) + CARRY4(uVar22,uVar28) + CARRY4(uVar12,uVar11) +
              CARRY4(uVar26,uVar30)) - (uVar13 < uVar21)) - (uVar29 < uVar23)) - (uVar25 < uVar23);
    uVar19 = (uint)(puVar2[2] >> 0x20);
    if ((char)bVar7 < '\0') {
      uVar22 = (uint)(char)bVar7;
      cVar31 = -(uVar19 < -uVar22);
    }
    else {
      uVar22 = (uint)bVar7;
      cVar31 = CARRY4(uVar22,uVar19);
    }
    uVar20 = uVar22 + uVar19 + uVar30;
    uVar12 = uVar20 + uVar30;
    uVar24 = (uint)(puVar2[8] >> 0x20);
    uVar26 = uVar12 + uVar24;
    uVar13 = uVar26 + uVar17;
    uVar28 = uVar16 + uVar13;
    uVar14 = uVar28 + uVar5;
    uVar15 = uVar14 + uVar23;
    bVar7 = (cVar31 + CARRY4(uVar22 + uVar19,uVar30) + CARRY4(uVar20,uVar30) + CARRY4(uVar12,uVar24)
             + CARRY4(uVar26,uVar17) + CARRY4(uVar16,uVar13) + CARRY4(uVar28,uVar5) +
            CARRY4(uVar14,uVar23)) - (uVar15 < uVar27);
    puVar2[2] = CONCAT44(uVar15 - uVar27,uVar25 - uVar23);
    uVar19 = (uint)puVar2[3];
    if ((char)bVar7 < '\0') {
      uVar22 = (uint)(char)bVar7;
      cVar31 = -(uVar19 < -uVar22);
    }
    else {
      uVar22 = (uint)bVar7;
      cVar31 = CARRY4(uVar19,uVar22);
    }
    uVar12 = uVar19 + uVar22 + uVar23;
    uVar16 = uVar12 + uVar23;
    uVar20 = (uint)puVar2[9];
    uVar26 = uVar16 + uVar20;
    uVar13 = uVar26 + uVar21;
    uVar15 = uVar17 + uVar13;
    uVar14 = uVar15 + uVar30;
    bVar7 = (cVar31 + CARRY4(uVar19 + uVar22,uVar23) + CARRY4(uVar12,uVar23) + CARRY4(uVar16,uVar20)
             + CARRY4(uVar26,uVar21) + CARRY4(uVar17,uVar13) + CARRY4(uVar15,uVar30)) -
            (uVar14 < uVar24);
    uVar19 = (uint)(puVar2[3] >> 0x20);
    if ((char)bVar7 < '\0') {
      uVar22 = (uint)(char)bVar7;
      cVar31 = -(uVar19 < -uVar22);
    }
    else {
      uVar22 = (uint)bVar7;
      cVar31 = CARRY4(uVar19,uVar22);
    }
    uVar13 = (uint)(puVar2[9] >> 0x20);
    uVar16 = uVar19 + uVar22 + uVar13;
    uVar26 = uVar16 + uVar27;
    uVar12 = uVar21 + uVar26;
    uVar17 = uVar12 + uVar23;
    bVar7 = (cVar31 + CARRY4(uVar19 + uVar22,uVar13) + CARRY4(uVar16,uVar27) + CARRY4(uVar21,uVar26)
            + CARRY4(uVar12,uVar23)) - (uVar17 < uVar20);
    puVar2[3] = CONCAT44(uVar17 - uVar20,uVar14 - uVar24);
    uVar19 = (uint)puVar2[4];
    if ((char)bVar7 < '\0') {
      uVar22 = (uint)(char)bVar7;
      cVar31 = -(uVar19 < -uVar22);
    }
    else {
      uVar22 = (uint)bVar7;
      cVar31 = CARRY4(uVar19,uVar22);
    }
    uVar21 = uVar19 + uVar22 + uVar11;
    uVar12 = uVar21 + uVar24;
    uVar16 = uVar12 + uVar27;
    bVar7 = (cVar31 + CARRY4(uVar19 + uVar22,uVar11) + CARRY4(uVar21,uVar24) + CARRY4(uVar12,uVar27)
            ) - (uVar16 < uVar13);
    uVar19 = (uint)(puVar2[4] >> 0x20);
    if ((char)bVar7 < '\0') {
      uVar22 = (uint)(char)bVar7;
      cVar31 = -(uVar19 < -uVar22);
    }
    else {
      uVar22 = (uint)bVar7;
      cVar31 = CARRY4(uVar19,uVar22);
    }
    uVar21 = uVar19 + uVar22 + uVar5;
    uVar12 = uVar21 + uVar20;
    uVar26 = uVar12 + uVar24;
    bVar7 = (cVar31 + CARRY4(uVar19 + uVar22,uVar5) + CARRY4(uVar21,uVar20) + CARRY4(uVar12,uVar24))
            - (uVar26 < uVar11);
    puVar2[4] = CONCAT44(uVar26 - uVar11,uVar16 - uVar13);
    uVar19 = (uint)puVar2[5];
    if ((char)bVar7 < '\0') {
      uVar22 = (uint)(char)bVar7;
      cVar31 = -(uVar19 < -uVar22);
    }
    else {
      uVar22 = (uint)bVar7;
      cVar31 = CARRY4(uVar19,uVar22);
    }
    uVar21 = uVar30 + uVar19 + uVar22;
    uVar12 = uVar21 + uVar13;
    uVar16 = uVar12 + uVar20;
    bVar7 = (cVar31 + CARRY4(uVar30,uVar19 + uVar22) + CARRY4(uVar21,uVar13) + CARRY4(uVar12,uVar20)
            ) - (uVar16 < uVar5);
    uVar19 = (uint)(puVar2[5] >> 0x20);
    if ((char)bVar7 < '\0') {
      uVar22 = (uint)(char)bVar7;
      cVar31 = -(uVar19 < -uVar22);
    }
    else {
      uVar22 = (uint)bVar7;
      cVar31 = CARRY4(uVar19,uVar22);
    }
    uVar20 = uVar23 + uVar19 + uVar22;
    uVar21 = uVar11 + uVar20;
    uVar12 = uVar13 + uVar21;
    cVar18 = (cVar31 + CARRY4(uVar23,uVar19 + uVar22) + CARRY4(uVar11,uVar20) +
             CARRY4(uVar13,uVar21)) - (uVar12 < uVar30);
    puVar2[5] = CONCAT44(uVar12 - uVar30,uVar16 - uVar5);
    cVar31 = '\0';
    if (-1 < cVar18) {
      cVar31 = cVar18;
    }
    uVar1 = *(ushort *)((long)param_1 + 10);
    puVar2[6] = uVar8 & 0xffffffff00000000 | (long)cVar31;
    uVar8 = 0xd;
    uVar3 = (ulong)uVar1 * 2;
    if (0xd < (uint)uVar1 * 2) {
      do {
        while (uVar6 = uVar8 >> 1, (uVar8 & 1) != 0) {
          uVar8 = uVar8 + 1;
          puVar2[uVar6] = (ulong)(uint)puVar2[uVar6];
          if (uVar8 == uVar3) goto LAB_00100c5c;
        }
        uVar8 = uVar8 + 1;
        puVar2[uVar6] = puVar2[uVar6] & 0xffffffff00000000;
      } while (uVar8 != uVar3);
    }
LAB_00100c5c:
    if (cVar18 < '\0') {
      *puVar2 = ~*puVar2;
      puVar9 = puVar2 + 1;
      do {
        *puVar9 = ~*puVar9;
        puVar9[1] = ~puVar9[1];
        puVar9 = puVar9 + 2;
      } while (puVar9 != puVar2 + 7);
      lVar10 = 0;
      do {
        uVar3 = puVar2[lVar10];
        puVar2[lVar10] = uVar3 + 1;
        lVar10 = lVar10 + 1;
        if (uVar3 + 1 != 0) break;
      } while (lVar10 != 7);
      *(undefined2 *)(param_1 + 1) = 0xffff;
      puVar2[6] = puVar2[6] + (long)-(int)cVar18;
    }
  }
  return iVar4;
}



void ecp_mod_p224(long *param_1)

{
  ulong *puVar1;
  ushort uVar2;
  uint *puVar3;
  long lVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  char cVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  bool bVar21;
  char cVar22;
  
  iVar5 = mbedtls_mpi_grow(param_1,8);
  if (iVar5 == 0) {
    puVar3 = (uint *)*param_1;
    uVar16 = (uint)*(undefined8 *)puVar3;
    uVar7 = (uint)((ulong)*(undefined8 *)(puVar3 + 6) >> 0x20);
    uVar15 = uVar16 - uVar7;
    uVar19 = (uint)((ulong)*(undefined8 *)(puVar3 + 10) >> 0x20);
    cVar22 = '\0';
    cVar12 = -((uVar16 < uVar7) + (uVar15 < uVar19));
    uVar14 = (uint)((ulong)*(undefined8 *)puVar3 >> 0x20);
    uVar16 = uVar14;
    if (cVar12 != '\0') {
      uVar16 = (int)cVar12 + uVar14;
      cVar22 = -(uVar14 < (uint)-(int)cVar12);
    }
    uVar14 = (uint)*(undefined8 *)(puVar3 + 8);
    uVar13 = (uint)*(undefined8 *)(puVar3 + 0xc);
    cVar12 = (cVar22 - (uVar16 < uVar14)) - (uVar16 - uVar14 < uVar13);
    cVar22 = '\0';
    *(ulong *)puVar3 = CONCAT44((uVar16 - uVar14) - uVar13,uVar15 - uVar19);
    uVar16 = (uint)*(undefined8 *)(puVar3 + 2);
    if (cVar12 != '\0') {
      bVar21 = uVar16 < (uint)-(int)cVar12;
      uVar16 = (int)cVar12 + uVar16;
      cVar22 = -bVar21;
    }
    uVar20 = (uint)((ulong)*(undefined8 *)(puVar3 + 8) >> 0x20);
    uVar17 = (uint)((ulong)*(undefined8 *)(puVar3 + 0xc) >> 0x20);
    cVar12 = (cVar22 - (uVar16 < uVar20)) - (uVar16 - uVar20 < uVar17);
    uVar15 = (uint)((ulong)*(undefined8 *)(puVar3 + 2) >> 0x20);
    cVar22 = '\0';
    if (cVar12 != '\0') {
      cVar22 = -(uVar15 < (uint)-(int)cVar12);
      uVar15 = (int)cVar12 + uVar15;
    }
    uVar18 = (uint)*(undefined8 *)(puVar3 + 10);
    uVar10 = (uVar7 - uVar18) + uVar15;
    bVar6 = cVar22 + ((uVar10 < uVar7) - (uVar15 < uVar18)) + CARRY4(uVar19,uVar10);
    *(ulong *)(puVar3 + 2) = CONCAT44(uVar19 + uVar10,(uVar16 - uVar20) - uVar17);
    uVar16 = (uint)*(undefined8 *)(puVar3 + 4);
    if ((char)bVar6 < '\0') {
      uVar15 = (uint)(char)bVar6;
      cVar22 = -(uVar16 < -uVar15);
    }
    else {
      uVar15 = (uint)bVar6;
      cVar22 = CARRY4(uVar16,uVar15);
    }
    uVar7 = (uVar14 - uVar19) + uVar16 + uVar15;
    bVar6 = ((uVar7 < uVar14) - (uVar16 + uVar15 < uVar19)) + cVar22 + CARRY4(uVar13,uVar7);
    uVar16 = (uint)((ulong)*(undefined8 *)(puVar3 + 4) >> 0x20);
    if ((char)bVar6 < '\0') {
      uVar14 = (uint)(char)bVar6;
      cVar22 = -(uVar16 < -uVar14);
    }
    else {
      uVar14 = (uint)bVar6;
      cVar22 = CARRY4(uVar16,uVar14);
    }
    uVar15 = (uVar20 - uVar13) + uVar16 + uVar14;
    bVar6 = ((uVar15 < uVar20) - (uVar16 + uVar14 < uVar13)) + cVar22 + CARRY4(uVar17,uVar15);
    uVar16 = (uint)*(undefined8 *)(puVar3 + 6);
    *(ulong *)(puVar3 + 4) = CONCAT44(uVar17 + uVar15,uVar13 + uVar7);
    if ((char)bVar6 < '\0') {
      uVar14 = (uint)(char)bVar6;
      cVar22 = -(uVar16 < -uVar14);
    }
    else {
      uVar14 = (uint)bVar6;
      cVar22 = CARRY4(uVar16,uVar14);
    }
    uVar15 = (uVar18 - uVar17) + uVar16 + uVar14;
    cVar22 = ((uVar15 < uVar18) - (uVar16 + uVar14 < uVar17)) + cVar22;
    cVar12 = '\0';
    if (-1 < cVar22) {
      cVar12 = cVar22;
    }
    uVar11 = 8;
    *(long *)(puVar3 + 6) = (long)CONCAT14(cVar12,uVar15);
    uVar2 = *(ushort *)((long)param_1 + 10);
    if (4 < uVar2) {
      do {
        puVar1 = (ulong *)(puVar3 + (uVar11 & 0xfffffffffffffffe));
        uVar8 = *puVar1 & 0xffffffff00000000;
        if ((uVar11 & 1) != 0) {
          uVar8 = (ulong)(uint)*puVar1;
        }
        uVar11 = uVar11 + 1;
        *puVar1 = uVar8;
      } while ((ulong)uVar2 * 2 != uVar11);
    }
    if (cVar22 < '\0') {
      lVar9 = 0;
      *puVar3 = *puVar3 ^ 0xffffffff;
      puVar3[1] = puVar3[1] ^ 0xffffffff;
      puVar3[2] = puVar3[2] ^ 0xffffffff;
      puVar3[3] = puVar3[3] ^ 0xffffffff;
      puVar3[4] = puVar3[4] ^ 0xffffffff;
      puVar3[5] = puVar3[5] ^ 0xffffffff;
      puVar3[6] = puVar3[6] ^ 0xffffffff;
      puVar3[7] = puVar3[7] ^ 0xffffffff;
      do {
        lVar4 = *(long *)(puVar3 + lVar9 * 2);
        *(long *)(puVar3 + lVar9 * 2) = lVar4 + 1;
        lVar9 = lVar9 + 1;
        if (lVar4 + 1 != 0) break;
      } while (lVar9 != 4);
      *(undefined2 *)(param_1 + 1) = 0xffff;
      *(ulong *)(puVar3 + 6) = *(long *)(puVar3 + 6) + ((ulong)(uint)-(int)cVar22 << 0x20);
      return;
    }
  }
  return;
}



int ecp_mod_p192(long *param_1)

{
  ushort uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  iVar6 = mbedtls_mpi_grow(param_1,6);
  if (iVar6 == 0) {
    puVar2 = (ulong *)*param_1;
    uVar1 = *(ushort *)((long)param_1 + 10);
    uVar3 = puVar2[3];
    uVar4 = puVar2[5];
    uVar7 = (ulong)CARRY8(uVar3,*puVar2) + (ulong)CARRY8(uVar3 + *puVar2,uVar4);
    *puVar2 = uVar3 + *puVar2 + uVar4;
    uVar5 = puVar2[4];
    uVar11 = puVar2[1];
    uVar8 = uVar7 + puVar2[1];
    uVar9 = uVar8 + uVar3;
    uVar10 = uVar9 + uVar5;
    puVar2[1] = uVar10 + uVar4;
    uVar11 = (ulong)CARRY8(uVar9,uVar5) + (ulong)CARRY8(uVar7,uVar11) + (ulong)CARRY8(uVar8,uVar3) +
             (ulong)CARRY8(uVar10,uVar4);
    uVar3 = puVar2[2];
    uVar7 = uVar11 + puVar2[2];
    uVar8 = uVar7 + uVar5;
    puVar2[2] = uVar8 + uVar4;
    puVar2[3] = (ulong)CARRY8(uVar11,uVar3) + (ulong)CARRY8(uVar7,uVar5) +
                (ulong)CARRY8(uVar8,uVar4);
    if (puVar2 + 4 < puVar2 + uVar1) {
      memset(puVar2 + 4,0,
             ((long)(puVar2 + uVar1) + (-0x21 - (long)puVar2) & 0xfffffffffffffff8U) + 8);
      return 0;
    }
  }
  return iVar6;
}



int ecp_mod_p256(undefined8 *param_1)

{
  ushort uVar1;
  ulong *puVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  byte bVar8;
  ulong uVar9;
  ulong *puVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  char cVar15;
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
  char cVar29;
  
  iVar4 = mbedtls_mpi_grow(param_1,9);
  if (iVar4 == 0) {
    puVar2 = (ulong *)*param_1;
    uVar3 = puVar2[4];
    uVar28 = (uint)uVar3;
    uVar5 = uVar28 + (int)*puVar2;
    uVar26 = (uint)(uVar3 >> 0x20);
    uVar6 = uVar5 + uVar26;
    uVar14 = (uint)puVar2[7];
    uVar12 = (uint)(puVar2[5] >> 0x20);
    uVar25 = uVar6 - uVar12;
    uVar27 = (uint)puVar2[6];
    uVar13 = uVar25 - uVar27;
    uVar18 = (uint)(puVar2[6] >> 0x20);
    uVar22 = uVar13 - uVar18;
    bVar8 = ((((CARRY4(uVar5,uVar26) + CARRY4(uVar28,(uint)*puVar2)) - (uVar6 < uVar12)) -
             (uVar25 < uVar27)) - (uVar13 < uVar18)) - (uVar22 < uVar14);
    uVar5 = (uint)(*puVar2 >> 0x20);
    if ((char)bVar8 < '\0') {
      uVar6 = (uint)(char)bVar8;
      cVar29 = -(uVar5 < -uVar6);
    }
    else {
      uVar6 = (uint)bVar8;
      cVar29 = CARRY4(uVar5,uVar6);
    }
    uVar16 = uVar5 + uVar6 + uVar26;
    uVar19 = (uint)puVar2[5];
    uVar17 = uVar16 + uVar19;
    uVar13 = uVar17 - uVar27;
    uVar25 = (uint)(puVar2[7] >> 0x20);
    uVar23 = uVar13 - uVar18;
    uVar21 = uVar23 - uVar14;
    bVar8 = ((((cVar29 + CARRY4(uVar5 + uVar6,uVar26) + CARRY4(uVar16,uVar19)) - (uVar17 < uVar27))
             - (uVar13 < uVar18)) - (uVar23 < uVar14)) - (uVar21 < uVar25);
    *puVar2 = CONCAT44(uVar21 - uVar25,uVar22 - uVar14);
    uVar5 = (uint)puVar2[1];
    if ((char)bVar8 < '\0') {
      uVar6 = (uint)(char)bVar8;
      cVar29 = -(uVar5 < -uVar6);
    }
    else {
      uVar6 = (uint)bVar8;
      cVar29 = CARRY4(uVar5,uVar6);
    }
    uVar13 = uVar5 + uVar6 + uVar19;
    uVar22 = uVar13 + uVar12;
    uVar17 = uVar22 - uVar18;
    uVar16 = uVar17 - uVar14;
    bVar8 = (((cVar29 + CARRY4(uVar5 + uVar6,uVar19) + CARRY4(uVar13,uVar12)) - (uVar22 < uVar18)) -
            (uVar17 < uVar14)) - (uVar16 < uVar25);
    uVar5 = (uint)(puVar2[1] >> 0x20);
    if ((char)bVar8 < '\0') {
      uVar6 = (uint)(char)bVar8;
      cVar29 = -(uVar5 < -uVar6);
    }
    else {
      uVar6 = (uint)bVar8;
      cVar29 = CARRY4(uVar6,uVar5);
    }
    uVar13 = uVar6 + uVar5 + uVar12;
    uVar22 = uVar13 + uVar12;
    uVar17 = uVar22 + uVar27;
    uVar21 = uVar17 + uVar27;
    uVar23 = uVar21 + uVar18;
    uVar24 = uVar23 - uVar25;
    uVar20 = uVar24 - uVar28;
    bVar8 = (((cVar29 + CARRY4(uVar6 + uVar5,uVar12) + CARRY4(uVar13,uVar12) + CARRY4(uVar22,uVar27)
               + CARRY4(uVar17,uVar27) + CARRY4(uVar21,uVar18)) - (uVar23 < uVar25)) -
            (uVar24 < uVar28)) - (uVar20 < uVar26);
    puVar2[1] = CONCAT44(uVar20 - uVar26,uVar16 - uVar25);
    uVar5 = (uint)puVar2[2];
    if ((char)bVar8 < '\0') {
      uVar6 = (uint)(char)bVar8;
      cVar29 = -(uVar5 < -uVar6);
    }
    else {
      uVar6 = (uint)bVar8;
      cVar29 = CARRY4(uVar5,uVar6);
    }
    uVar13 = uVar5 + uVar6 + uVar27;
    uVar22 = uVar13 + uVar27;
    uVar16 = uVar22 + uVar18;
    uVar17 = uVar16 + uVar18;
    uVar21 = uVar17 + uVar14;
    uVar23 = uVar21 - uVar26;
    bVar8 = ((cVar29 + CARRY4(uVar5 + uVar6,uVar27) + CARRY4(uVar13,uVar27) + CARRY4(uVar22,uVar18)
              + CARRY4(uVar16,uVar18) + CARRY4(uVar17,uVar14)) - (uVar21 < uVar26)) -
            (uVar23 < uVar19);
    uVar5 = (uint)(puVar2[2] >> 0x20);
    if ((char)bVar8 < '\0') {
      uVar6 = (uint)(char)bVar8;
      cVar29 = -(uVar5 < -uVar6);
    }
    else {
      uVar6 = (uint)bVar8;
      cVar29 = CARRY4(uVar5,uVar6);
    }
    uVar13 = uVar5 + uVar6 + uVar18;
    uVar22 = uVar13 + uVar18;
    uVar16 = uVar22 + uVar14;
    uVar17 = uVar16 + uVar14;
    uVar21 = uVar17 + uVar25;
    uVar20 = uVar21 - uVar19;
    bVar8 = ((cVar29 + CARRY4(uVar5 + uVar6,uVar18) + CARRY4(uVar13,uVar18) + CARRY4(uVar22,uVar14)
              + CARRY4(uVar16,uVar14) + CARRY4(uVar17,uVar25)) - (uVar21 < uVar19)) -
            (uVar20 < uVar12);
    puVar2[2] = CONCAT44(uVar20 - uVar12,uVar23 - uVar19);
    uVar5 = (uint)puVar2[3];
    if ((char)bVar8 < '\0') {
      uVar6 = (uint)(char)bVar8;
      cVar29 = -(uVar5 < -uVar6);
    }
    else {
      uVar6 = (uint)bVar8;
      cVar29 = CARRY4(uVar5,uVar6);
    }
    uVar13 = uVar5 + uVar6 + uVar14;
    uVar22 = uVar13 + uVar14;
    uVar16 = uVar22 + uVar25;
    uVar17 = uVar16 + uVar25;
    uVar21 = uVar17 + uVar14;
    uVar23 = uVar18 + uVar21;
    uVar20 = uVar23 - uVar28;
    bVar8 = ((cVar29 + CARRY4(uVar5 + uVar6,uVar14) + CARRY4(uVar13,uVar14) + CARRY4(uVar22,uVar25)
              + CARRY4(uVar16,uVar25) + CARRY4(uVar17,uVar14) + CARRY4(uVar18,uVar21)) -
            (uVar23 < uVar28)) - (uVar20 < uVar26);
    uVar5 = (uint)(puVar2[3] >> 0x20);
    if ((char)bVar8 < '\0') {
      uVar6 = (uint)(char)bVar8;
      cVar29 = -(uVar5 < -uVar6);
    }
    else {
      uVar6 = (uint)bVar8;
      cVar29 = CARRY4(uVar5,uVar6);
    }
    uVar22 = uVar5 + uVar6 + uVar25;
    uVar16 = uVar22 + uVar25;
    uVar13 = uVar25 + uVar16;
    uVar17 = uVar28 + uVar13;
    uVar14 = uVar17 - uVar19;
    uVar23 = uVar14 - uVar12;
    uVar21 = uVar23 - uVar27;
    cVar15 = ((((CARRY4(uVar28,uVar13) +
                cVar29 + CARRY4(uVar5 + uVar6,uVar25) + CARRY4(uVar22,uVar25) +
                CARRY4(uVar25,uVar16)) - (uVar17 < uVar19)) - (uVar14 < uVar12)) - (uVar23 < uVar27)
             ) - (uVar21 < uVar18);
    cVar29 = '\0';
    if (-1 < cVar15) {
      cVar29 = cVar15;
    }
    puVar2[3] = CONCAT44(uVar21 - uVar18,uVar20 - uVar26);
    uVar1 = *(ushort *)((long)param_1 + 10);
    puVar2[4] = uVar3 & 0xffffffff00000000 | (long)cVar29;
    uVar9 = 9;
    uVar3 = (ulong)uVar1 * 2;
    if (9 < (uint)uVar1 * 2) {
      do {
        while (uVar7 = uVar9 >> 1, (uVar9 & 1) != 0) {
          uVar9 = uVar9 + 1;
          puVar2[uVar7] = (ulong)(uint)puVar2[uVar7];
          if (uVar9 == uVar3) goto LAB_001016ac;
        }
        uVar9 = uVar9 + 1;
        puVar2[uVar7] = puVar2[uVar7] & 0xffffffff00000000;
      } while (uVar9 != uVar3);
    }
LAB_001016ac:
    if (cVar15 < '\0') {
      *puVar2 = ~*puVar2;
      puVar10 = puVar2 + 1;
      do {
        *puVar10 = ~*puVar10;
        puVar10[1] = ~puVar10[1];
        puVar10 = puVar10 + 2;
      } while (puVar10 != puVar2 + 5);
      lVar11 = 0;
      do {
        uVar3 = puVar2[lVar11];
        puVar2[lVar11] = uVar3 + 1;
        lVar11 = lVar11 + 1;
        if (uVar3 + 1 != 0) break;
      } while (lVar11 != 5);
      *(undefined2 *)(param_1 + 1) = 0xffff;
      puVar2[4] = puVar2[4] + (long)-(int)cVar15;
    }
  }
  return iVar4;
}



int mbedtls_ecp_group_load(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  int local_3c;
  undefined1 local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  mbedtls_ecp_group_free();
  mbedtls_ecp_group_init(param_1);
  *param_1 = param_2;
  switch(param_2) {
  default:
    *param_1 = 0;
    local_3c = -0x4e80;
    goto LAB_00101952;
  case 1:
    param_1[4] = 0x30001;
    *(code **)(param_1 + 0x24) = ecp_mod_p192;
    *(undefined1 **)(param_1 + 2) = secp192r1_p;
    *(undefined1 **)(param_1 + 10) = secp192r1_b;
    *(undefined1 **)(param_1 + 0x1a) = secp192r1_n;
    *(undefined1 **)(param_1 + 0xe) = secp192r1_gx;
    *(undefined1 **)(param_1 + 0x12) = secp192r1_gy;
    param_1[0xc] = 0x30001;
    param_1[0x1c] = 0x30001;
    param_1[0x10] = 0x30001;
    param_1[0x14] = 0x30001;
    param_1[0x18] = 0x10001;
    *(undefined8 **)(param_1 + 0x16) = &mpi_one;
    uVar2 = mbedtls_mpi_bitlen(param_1 + 2);
    *(undefined8 *)(param_1 + 0x1e) = uVar2;
    uVar2 = mbedtls_mpi_bitlen(param_1 + 0x1a);
    param_1[0x22] = 1;
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    *(undefined1 **)(param_1 + 0x2c) = secp192r1_T;
    *(undefined8 *)(param_1 + 0x2e) = 0;
    break;
  case 2:
    param_1[4] = 0x40001;
    *(code **)(param_1 + 0x24) = ecp_mod_p224;
    *(undefined1 **)(param_1 + 2) = secp224r1_p;
    *(undefined1 **)(param_1 + 10) = secp224r1_b;
    *(undefined1 **)(param_1 + 0x1a) = secp224r1_n;
    *(undefined1 **)(param_1 + 0xe) = secp224r1_gx;
    *(undefined1 **)(param_1 + 0x12) = secp224r1_gy;
    param_1[0xc] = 0x40001;
    param_1[0x1c] = 0x40001;
    param_1[0x10] = 0x40001;
    param_1[0x14] = 0x40001;
    param_1[0x18] = 0x10001;
    *(undefined8 **)(param_1 + 0x16) = &mpi_one;
    uVar2 = mbedtls_mpi_bitlen(param_1 + 2);
    *(undefined8 *)(param_1 + 0x1e) = uVar2;
    uVar2 = mbedtls_mpi_bitlen(param_1 + 0x1a);
    param_1[0x22] = 1;
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    *(undefined1 **)(param_1 + 0x2c) = secp224r1_T;
    *(undefined8 *)(param_1 + 0x2e) = 0;
    break;
  case 3:
    param_1[4] = 0x40001;
    *(code **)(param_1 + 0x24) = ecp_mod_p256;
    *(undefined1 **)(param_1 + 2) = secp256r1_p;
    *(undefined1 **)(param_1 + 10) = secp256r1_b;
    *(undefined1 **)(param_1 + 0x1a) = secp256r1_n;
    *(undefined1 **)(param_1 + 0xe) = secp256r1_gx;
    *(undefined1 **)(param_1 + 0x12) = secp256r1_gy;
    param_1[0xc] = 0x40001;
    param_1[0x1c] = 0x40001;
    param_1[0x10] = 0x40001;
    param_1[0x14] = 0x40001;
    param_1[0x18] = 0x10001;
    *(undefined8 **)(param_1 + 0x16) = &mpi_one;
    uVar2 = mbedtls_mpi_bitlen(param_1 + 2);
    *(undefined8 *)(param_1 + 0x1e) = uVar2;
    uVar2 = mbedtls_mpi_bitlen(param_1 + 0x1a);
    param_1[0x22] = 1;
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    *(undefined1 **)(param_1 + 0x2c) = secp256r1_T;
    *(undefined8 *)(param_1 + 0x2e) = 0;
    break;
  case 4:
    param_1[4] = 0x60001;
    *(code **)(param_1 + 0x24) = ecp_mod_p384;
    *(undefined1 **)(param_1 + 2) = secp384r1_p;
    *(undefined1 **)(param_1 + 10) = secp384r1_b;
    *(undefined1 **)(param_1 + 0x1a) = secp384r1_n;
    *(undefined1 **)(param_1 + 0xe) = secp384r1_gx;
    *(undefined1 **)(param_1 + 0x12) = secp384r1_gy;
    param_1[0xc] = 0x60001;
    param_1[0x1c] = 0x60001;
    param_1[0x10] = 0x60001;
    param_1[0x14] = 0x60001;
    param_1[0x18] = 0x10001;
    *(undefined8 **)(param_1 + 0x16) = &mpi_one;
    uVar2 = mbedtls_mpi_bitlen(param_1 + 2);
    *(undefined8 *)(param_1 + 0x1e) = uVar2;
    uVar2 = mbedtls_mpi_bitlen(param_1 + 0x1a);
    param_1[0x22] = 1;
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    *(undefined1 **)(param_1 + 0x2c) = secp384r1_T;
    *(undefined8 *)(param_1 + 0x2e) = 0;
    break;
  case 5:
    param_1[4] = 0x90001;
    *(undefined8 *)(param_1 + 0x24) = 0x100000;
    *(undefined1 **)(param_1 + 2) = secp521r1_p;
    *(undefined1 **)(param_1 + 10) = secp521r1_b;
    *(undefined1 **)(param_1 + 0x1a) = secp521r1_n;
    *(undefined1 **)(param_1 + 0xe) = secp521r1_gx;
    *(undefined1 **)(param_1 + 0x12) = secp521r1_gy;
    param_1[0xc] = 0x90001;
    param_1[0x1c] = 0x90001;
    param_1[0x10] = 0x90001;
    param_1[0x14] = 0x90001;
    param_1[0x18] = 0x10001;
    *(undefined8 **)(param_1 + 0x16) = &mpi_one;
    uVar2 = mbedtls_mpi_bitlen(param_1 + 2);
    *(undefined8 *)(param_1 + 0x1e) = uVar2;
    uVar2 = mbedtls_mpi_bitlen(param_1 + 0x1a);
    param_1[0x22] = 1;
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    *(undefined1 **)(param_1 + 0x2c) = secp521r1_T;
    *(undefined8 *)(param_1 + 0x2e) = 0;
    break;
  case 6:
    param_1[4] = 0x40001;
    *(undefined1 **)(param_1 + 2) = brainpoolP256r1_p;
    *(undefined1 **)(param_1 + 6) = brainpoolP256r1_a;
    *(undefined1 **)(param_1 + 10) = brainpoolP256r1_b;
    *(undefined1 **)(param_1 + 0x1a) = brainpoolP256r1_n;
    *(undefined1 **)(param_1 + 0xe) = brainpoolP256r1_gx;
    *(undefined1 **)(param_1 + 0x12) = brainpoolP256r1_gy;
    param_1[8] = 0x40001;
    param_1[0xc] = 0x40001;
    param_1[0x1c] = 0x40001;
    param_1[0x10] = 0x40001;
    param_1[0x14] = 0x40001;
    param_1[0x18] = 0x10001;
    *(undefined8 **)(param_1 + 0x16) = &mpi_one;
    uVar2 = mbedtls_mpi_bitlen(param_1 + 2);
    *(undefined8 *)(param_1 + 0x1e) = uVar2;
    uVar2 = mbedtls_mpi_bitlen(param_1 + 0x1a);
    param_1[0x22] = 1;
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    *(undefined1 **)(param_1 + 0x2c) = brainpoolP256r1_T;
    *(undefined8 *)(param_1 + 0x2e) = 0;
    break;
  case 7:
    param_1[4] = 0x60001;
    *(undefined1 **)(param_1 + 2) = brainpoolP384r1_p;
    *(undefined1 **)(param_1 + 6) = brainpoolP384r1_a;
    *(undefined1 **)(param_1 + 10) = brainpoolP384r1_b;
    *(undefined1 **)(param_1 + 0x1a) = brainpoolP384r1_n;
    *(undefined1 **)(param_1 + 0xe) = brainpoolP384r1_gx;
    *(undefined1 **)(param_1 + 0x12) = brainpoolP384r1_gy;
    param_1[8] = 0x60001;
    param_1[0xc] = 0x60001;
    param_1[0x1c] = 0x60001;
    param_1[0x10] = 0x60001;
    param_1[0x14] = 0x60001;
    param_1[0x18] = 0x10001;
    *(undefined8 **)(param_1 + 0x16) = &mpi_one;
    uVar2 = mbedtls_mpi_bitlen(param_1 + 2);
    *(undefined8 *)(param_1 + 0x1e) = uVar2;
    uVar2 = mbedtls_mpi_bitlen(param_1 + 0x1a);
    param_1[0x22] = 1;
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    *(undefined1 **)(param_1 + 0x2c) = brainpoolP384r1_T;
    *(undefined8 *)(param_1 + 0x2e) = 0;
    break;
  case 8:
    param_1[4] = 0x80001;
    *(undefined1 **)(param_1 + 2) = brainpoolP512r1_p;
    *(undefined1 **)(param_1 + 6) = brainpoolP512r1_a;
    *(undefined1 **)(param_1 + 10) = brainpoolP512r1_b;
    *(undefined1 **)(param_1 + 0x1a) = brainpoolP512r1_n;
    *(undefined1 **)(param_1 + 0xe) = brainpoolP512r1_gx;
    *(undefined1 **)(param_1 + 0x12) = brainpoolP512r1_gy;
    param_1[8] = 0x80001;
    param_1[0xc] = 0x80001;
    param_1[0x1c] = 0x80001;
    param_1[0x10] = 0x80001;
    param_1[0x14] = 0x80001;
    param_1[0x18] = 0x10001;
    *(undefined8 **)(param_1 + 0x16) = &mpi_one;
    uVar2 = mbedtls_mpi_bitlen(param_1 + 2);
    *(undefined8 *)(param_1 + 0x1e) = uVar2;
    uVar2 = mbedtls_mpi_bitlen(param_1 + 0x1a);
    param_1[0x22] = 1;
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    *(undefined1 **)(param_1 + 0x2c) = brainpoolP512r1_T;
    *(undefined8 *)(param_1 + 0x2e) = 0;
    break;
  case 9:
    *(code **)(param_1 + 0x24) = ecp_mod_p255;
    local_3c = mbedtls_mpi_lset(param_1 + 6,0x1db42);
    if (local_3c == 0) {
      puVar1 = param_1 + 2;
      local_3c = mbedtls_mpi_lset(puVar1,1);
      if (((local_3c == 0) && (local_3c = mbedtls_mpi_shift_l(puVar1,0xff), local_3c == 0)) &&
         (local_3c = mbedtls_mpi_sub_int(puVar1,puVar1,0x13), local_3c == 0)) {
        uVar2 = mbedtls_mpi_bitlen(puVar1);
        *(undefined8 *)(param_1 + 0x1e) = uVar2;
        local_3c = mbedtls_mpi_read_binary(param_1 + 0x1a,curve25519_part_of_n,0x10);
        if (((local_3c == 0) &&
            (local_3c = mbedtls_mpi_set_bit(param_1 + 0x1a,0xfc,1), local_3c == 0)) &&
           ((local_3c = mbedtls_mpi_lset(param_1 + 0xe,9), local_3c == 0 &&
            (local_3c = mbedtls_mpi_lset(param_1 + 0x16,1), local_3c == 0)))) {
          mbedtls_mpi_free(param_1 + 0x12);
          *(undefined8 *)(param_1 + 0x20) = 0xfe;
          break;
        }
      }
    }
    goto LAB_00101871;
  case 10:
    param_1[4] = 0x30001;
    *(code **)(param_1 + 0x24) = ecp_mod_p192k1;
    *(undefined1 **)(param_1 + 2) = secp192k1_p;
    *(undefined8 **)(param_1 + 6) = &secp192k1_a;
    *(undefined8 **)(param_1 + 10) = &secp192k1_b;
    *(undefined1 **)(param_1 + 0x1a) = secp192k1_n;
    *(undefined1 **)(param_1 + 0xe) = secp192k1_gx;
    *(undefined1 **)(param_1 + 0x12) = secp192k1_gy;
    param_1[8] = 0x10001;
    param_1[0xc] = 0x10001;
    param_1[0x1c] = 0x30001;
    param_1[0x10] = 0x30001;
    param_1[0x14] = 0x30001;
    param_1[0x18] = 0x10001;
    *(undefined8 **)(param_1 + 0x16) = &mpi_one;
    uVar2 = mbedtls_mpi_bitlen(param_1 + 2);
    *(undefined8 *)(param_1 + 0x1e) = uVar2;
    uVar2 = mbedtls_mpi_bitlen(param_1 + 0x1a);
    param_1[0x22] = 1;
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    *(undefined1 **)(param_1 + 0x2c) = secp192k1_T;
    *(undefined8 *)(param_1 + 0x2e) = 0;
    break;
  case 0xb:
    param_1[4] = 0x40001;
    *(code **)(param_1 + 0x24) = ecp_mod_p224k1;
    *(undefined1 **)(param_1 + 2) = secp224k1_p;
    *(undefined8 **)(param_1 + 6) = &secp224k1_a;
    *(undefined8 **)(param_1 + 10) = &secp224k1_b;
    *(undefined1 **)(param_1 + 0x1a) = secp224k1_n;
    *(undefined1 **)(param_1 + 0xe) = secp224k1_gx;
    *(undefined1 **)(param_1 + 0x12) = secp224k1_gy;
    param_1[8] = 0x10001;
    param_1[0xc] = 0x10001;
    param_1[0x1c] = 0x40001;
    param_1[0x10] = 0x40001;
    param_1[0x14] = 0x40001;
    param_1[0x18] = 0x10001;
    *(undefined8 **)(param_1 + 0x16) = &mpi_one;
    uVar2 = mbedtls_mpi_bitlen(param_1 + 2);
    *(undefined8 *)(param_1 + 0x1e) = uVar2;
    uVar2 = mbedtls_mpi_bitlen(param_1 + 0x1a);
    param_1[0x22] = 1;
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    *(undefined1 **)(param_1 + 0x2c) = secp224k1_T;
    *(undefined8 *)(param_1 + 0x2e) = 0;
    break;
  case 0xc:
    param_1[4] = 0x40001;
    *(code **)(param_1 + 0x24) = ecp_mod_p256k1;
    *(undefined1 **)(param_1 + 2) = secp256k1_p;
    *(undefined8 **)(param_1 + 6) = &secp256k1_a;
    *(undefined8 **)(param_1 + 10) = &secp256k1_b;
    *(undefined1 **)(param_1 + 0x1a) = secp256k1_n;
    *(undefined1 **)(param_1 + 0xe) = secp256k1_gx;
    *(undefined1 **)(param_1 + 0x12) = secp256k1_gy;
    param_1[8] = 0x10001;
    param_1[0xc] = 0x10001;
    param_1[0x1c] = 0x40001;
    param_1[0x10] = 0x40001;
    param_1[0x14] = 0x40001;
    param_1[0x18] = 0x10001;
    *(undefined8 **)(param_1 + 0x16) = &mpi_one;
    uVar2 = mbedtls_mpi_bitlen(param_1 + 2);
    *(undefined8 *)(param_1 + 0x1e) = uVar2;
    uVar2 = mbedtls_mpi_bitlen(param_1 + 0x1a);
    param_1[0x22] = 1;
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    *(undefined1 **)(param_1 + 0x2c) = secp256k1_T;
    *(undefined8 *)(param_1 + 0x2e) = 0;
    break;
  case 0xd:
    *(code **)(param_1 + 0x24) = ecp_mod_p448;
    mbedtls_mpi_init(local_38);
    local_3c = mbedtls_mpi_lset(param_1 + 6,0x98aa);
    if (local_3c == 0) {
      puVar1 = param_1 + 2;
      local_3c = mbedtls_mpi_lset(puVar1,1);
      if ((((local_3c == 0) && (local_3c = mbedtls_mpi_shift_l(puVar1,0xe0), local_3c == 0)) &&
          (local_3c = mbedtls_mpi_sub_int(puVar1,puVar1,1), local_3c == 0)) &&
         ((local_3c = mbedtls_mpi_shift_l(puVar1,0xe0), local_3c == 0 &&
          (local_3c = mbedtls_mpi_sub_int(puVar1,puVar1,1), local_3c == 0)))) {
        uVar2 = mbedtls_mpi_bitlen(puVar1);
        *(undefined8 *)(param_1 + 0x1e) = uVar2;
        local_3c = mbedtls_mpi_lset(param_1 + 0xe,5);
        if ((local_3c == 0) && (local_3c = mbedtls_mpi_lset(param_1 + 0x16,1), local_3c == 0)) {
          puVar1 = param_1 + 0x1a;
          mbedtls_mpi_free(param_1 + 0x12);
          local_3c = mbedtls_mpi_set_bit(puVar1,0x1be,1);
          if (((local_3c == 0) &&
              (local_3c = mbedtls_mpi_read_binary(local_38,curve448_part_of_n,0x1c), local_3c == 0))
             && (local_3c = mbedtls_mpi_sub_mpi(puVar1,puVar1,local_38), local_3c == 0)) {
            *(undefined8 *)(param_1 + 0x20) = 0x1bf;
            mbedtls_mpi_free(local_38);
            goto LAB_00101952;
          }
        }
      }
    }
    mbedtls_mpi_free(local_38);
LAB_00101871:
    mbedtls_ecp_group_free(param_1);
    goto LAB_00101952;
  }
  local_3c = 0;
LAB_00101952:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_3c;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


