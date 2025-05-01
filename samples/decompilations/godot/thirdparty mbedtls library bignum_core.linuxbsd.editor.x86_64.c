
uint mbedtls_mpi_core_clz(ulong param_1)

{
  long lVar1;
  
  lVar1 = 0x3f;
  if (param_1 != 0) {
    for (; param_1 >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  return (uint)lVar1 ^ 0x3f;
}



ulong mbedtls_mpi_core_bitlen(long param_1,int param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  if (param_2 + -1 < 0) {
    return 0;
  }
  lVar3 = (long)(param_2 + -1);
  do {
    uVar1 = *(ulong *)(param_1 + lVar3 * 8);
    if (uVar1 != 0) {
      lVar2 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      return (lVar3 + 1) * 0x40 - (ulong)((uint)lVar2 ^ 0x3f);
    }
    lVar3 = lVar3 + -1;
  } while ((int)lVar3 != -1);
  return uVar1;
}



void mbedtls_mpi_core_bigendian_to_host(ulong *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  
  if ((param_2 != 0) && (puVar3 = param_1 + param_2 + -1, param_1 <= puVar3)) {
    do {
      uVar1 = *param_1;
      uVar2 = *puVar3;
      puVar5 = param_1 + 1;
      puVar4 = puVar3 + -1;
      *param_1 = uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 |
                 (uVar2 & 0xff0000000000) >> 0x18 | (uVar2 & 0xff00000000) >> 8 |
                 (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 | (uVar2 & 0xff00) << 0x28 |
                 uVar2 << 0x38;
      *puVar3 = uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 |
                (uVar1 & 0xff0000000000) >> 0x18 | (uVar1 & 0xff00000000) >> 8 |
                (uVar1 & 0xff000000) << 8 | (uVar1 & 0xff0000) << 0x18 | (uVar1 & 0xff00) << 0x28 |
                uVar1 << 0x38;
      puVar3 = puVar4;
      param_1 = puVar5;
    } while (puVar5 <= puVar4);
  }
  return;
}



ulong mbedtls_mpi_core_uint_le_mpi(ulong param_1,ulong *param_2,ulong param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar2 = *param_2 ^ param_1;
  uVar4 = 0;
  if (1 < param_3) {
    uVar3 = 1;
    do {
      puVar1 = param_2 + uVar3;
      uVar3 = uVar3 + 1;
      uVar4 = uVar4 | (long)(-*puVar1 | *puVar1) >> 0x3f;
    } while (param_3 != uVar3);
  }
  return ~((long)(*param_2 - param_1 & ~uVar2 | param_1 & uVar2) >> 0x3f) | uVar4;
}



ulong mbedtls_mpi_core_lt_ct(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar2 = 0;
  uVar4 = uVar2;
  if (param_3 != 0) {
    do {
      uVar3 = *(ulong *)(param_1 + -8 + param_3 * 8);
      uVar1 = *(ulong *)(param_2 + -8 + param_3 * 8);
      uVar4 = uVar4 | (long)(uVar1 - uVar3 & ~(uVar1 ^ uVar3) | uVar3 & (uVar1 ^ uVar3)) >> 0x3f;
      uVar3 = (long)(uVar3 - uVar1 & ~(uVar3 ^ uVar1) | uVar1 & (uVar3 ^ uVar1)) >> 0x3f;
      uVar2 = uVar2 | ~uVar4 & uVar3;
      param_3 = param_3 + -1;
      uVar4 = uVar4 | uVar3;
    } while (param_3 != 0);
  }
  return uVar2;
}



void mbedtls_mpi_core_cond_assign(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  
  if ((param_1 != param_2) && (param_3 != 0)) {
    lVar1 = 0;
    do {
      *(ulong *)(param_1 + lVar1 * 8) =
           *(ulong *)(param_1 + lVar1 * 8) & ~param_4 | *(ulong *)(param_2 + lVar1 * 8) & param_4;
      lVar1 = lVar1 + 1;
    } while (param_3 != lVar1);
  }
  return;
}



void mbedtls_mpi_core_cond_swap(long param_1,long param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  
  if ((param_1 != param_2) && (param_3 != 0)) {
    lVar2 = 0;
    do {
      uVar1 = *(ulong *)(param_1 + lVar2 * 8);
      *(ulong *)(param_1 + lVar2 * 8) = uVar1 & ~param_4 | *(ulong *)(param_2 + lVar2 * 8) & param_4
      ;
      *(ulong *)(param_2 + lVar2 * 8) = *(ulong *)(param_2 + lVar2 * 8) & ~param_4 | uVar1 & param_4
      ;
      lVar2 = lVar2 + 1;
    } while (param_3 != lVar2);
  }
  return;
}



undefined8 mbedtls_mpi_core_read_le(void *param_1,ulong param_2,long param_3,ulong param_4)

{
  ulong *puVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if (param_2 < (ulong)((param_4 & 7) != 0) + (param_4 >> 3)) {
    uVar5 = 0xfffffff8;
  }
  else {
    if (param_1 != (void *)0x0) {
      pvVar2 = memset(param_1,0,param_2 * 8);
      if (param_4 != 0) {
        uVar3 = 0;
        do {
          uVar4 = uVar3 + 1;
          puVar1 = (ulong *)((long)pvVar2 + (uVar3 & 0xfffffffffffffff8));
          *puVar1 = *puVar1 | (ulong)*(byte *)(param_3 + uVar3) << ((char)uVar3 * '\b' & 0x38U);
          uVar3 = uVar4;
        } while (param_4 != uVar4);
      }
    }
    uVar5 = 0;
  }
  return uVar5;
}



undefined8 mbedtls_mpi_core_read_be(ulong *param_1,ulong param_2,void *param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  undefined8 uVar5;
  ulong *puVar6;
  
  if (param_2 < (ulong)((param_4 & 7) != 0) + (param_4 >> 3)) {
    uVar5 = 0xfffffff8;
  }
  else {
    if (param_2 != 0) {
      memset(param_1,0,param_2 * 8);
      if (param_4 != 0) {
        memcpy((void *)((param_2 * 8 - param_4) + (long)param_1),param_3,param_4);
      }
      puVar3 = param_1 + (param_2 - 1);
      if (param_1 <= puVar3) {
        do {
          uVar1 = *param_1;
          uVar2 = *puVar3;
          puVar6 = param_1 + 1;
          puVar4 = puVar3 + -1;
          *param_1 = uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 |
                     (uVar2 & 0xff0000000000) >> 0x18 | (uVar2 & 0xff00000000) >> 8 |
                     (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 |
                     (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38;
          *puVar3 = uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 |
                    (uVar1 & 0xff0000000000) >> 0x18 | (uVar1 & 0xff00000000) >> 8 |
                    (uVar1 & 0xff000000) << 8 | (uVar1 & 0xff0000) << 0x18 |
                    (uVar1 & 0xff00) << 0x28 | uVar1 << 0x38;
          puVar3 = puVar4;
          param_1 = puVar6;
        } while (puVar6 <= puVar4);
      }
    }
    uVar5 = 0;
  }
  return uVar5;
}



undefined8 mbedtls_mpi_core_write_le(long param_1,long param_2,long param_3,ulong param_4)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = param_2 * 8;
  if (uVar4 < param_4) {
    uVar2 = uVar4;
    if (uVar4 == 0) goto LAB_00100450;
  }
  else {
    if (param_4 < uVar4) {
      cVar1 = (char)(*(ulong *)(param_1 + (param_4 & 0xfffffffffffffff8)) >>
                    (sbyte)(((uint)param_4 & 7) << 3));
      uVar2 = param_4;
      while( true ) {
        if (cVar1 != '\0') {
          return 0xfffffff8;
        }
        uVar2 = uVar2 + 1;
        if (uVar4 == uVar2) break;
        cVar1 = (char)(*(ulong *)(param_1 + (uVar2 & 0xfffffffffffffff8)) >>
                      (sbyte)(((uint)uVar2 & 7) << 3));
      }
    }
    uVar2 = param_4;
    if (param_4 == 0) {
      return 0;
    }
  }
  uVar3 = 0;
  do {
    *(char *)(param_3 + uVar3) =
         (char)(*(ulong *)(param_1 + (uVar3 & 0xfffffffffffffff8)) >>
               (sbyte)(((uint)uVar3 & 7) << 3));
    uVar3 = uVar3 + 1;
  } while (uVar3 < uVar2);
  if (param_4 <= uVar4) {
    return 0;
  }
LAB_00100450:
  memset((void *)(param_3 + uVar4),0,param_4 + param_2 * -8);
  return 0;
}



undefined8 mbedtls_mpi_core_write_be(long param_1,long param_2,void *param_3,ulong param_4)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  size_t __n;
  void *pvVar5;
  
  uVar3 = param_2 * 8;
  if (uVar3 < param_4) {
    __n = param_4 + param_2 * -8;
    pvVar5 = (void *)((long)param_3 + __n);
    memset(param_3,0,__n);
    param_4 = uVar3;
  }
  else {
    pvVar5 = param_3;
    if (param_4 < uVar3) {
      cVar1 = (char)(*(ulong *)(param_1 + (param_4 & 0xfffffffffffffff8)) >>
                    (sbyte)(((uint)param_4 & 7) << 3));
      uVar2 = param_4;
      while( true ) {
        if (cVar1 != '\0') {
          return 0xfffffff8;
        }
        uVar2 = uVar2 + 1;
        if (uVar3 - uVar2 == 0) break;
        cVar1 = (char)(*(ulong *)(param_1 + (uVar2 & 0xfffffffffffffff8)) >>
                      (sbyte)(((uint)uVar2 & 7) << 3));
      }
    }
  }
  uVar3 = 0;
  puVar4 = (undefined1 *)((long)pvVar5 + (param_4 - 1));
  if (param_4 != 0) {
    do {
      uVar2 = uVar3 + 1;
      *puVar4 = (char)(*(ulong *)(param_1 + (uVar3 & 0xfffffffffffffff8)) >>
                      (sbyte)(((uint)uVar3 & 7) << 3));
      uVar3 = uVar2;
      puVar4 = puVar4 + -1;
    } while (param_4 != uVar2);
  }
  return 0;
}



void mbedtls_mpi_core_shift_r(ulong *param_1,ulong param_2,ulong param_3)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  size_t __n;
  ulong *puVar5;
  bool bVar6;
  
  uVar2 = param_3 >> 6;
  bVar1 = (byte)param_3 & 0x3f;
  if ((param_2 < uVar2) || ((uVar2 == param_2 && ((param_3 & 0x3f) != 0)))) {
    memset(param_1,0,param_2 * 8);
    return;
  }
  if (param_3 < 0x40) {
    if ((param_3 & 0x3f) == 0) {
      return;
    }
    if (param_2 == 0) {
      return;
    }
    goto LAB_0010061c;
  }
  uVar4 = param_2 - uVar2;
  if (uVar2 == param_2) {
    uVar4 = 0;
LAB_001005f2:
    __n = (param_2 - uVar4) * 8;
    if (param_2 < uVar4 + 1) {
      __n = 8;
    }
    memset(param_1 + uVar4,0,__n);
  }
  else {
    uVar3 = 0;
    do {
      param_1[uVar3] = param_1[uVar2 + uVar3];
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
    if (uVar4 == 0) {
      uVar4 = 1;
    }
    if (uVar4 < param_2) goto LAB_001005f2;
  }
  if ((param_3 & 0x3f) == 0) {
    return;
  }
LAB_0010061c:
  puVar5 = param_1 + (param_2 - 1);
  uVar2 = 0;
  do {
    uVar4 = *puVar5;
    *puVar5 = uVar4 >> bVar1 | uVar2;
    bVar6 = puVar5 != param_1;
    puVar5 = puVar5 + -1;
    uVar2 = uVar4 << (0x40 - bVar1 & 0x3f);
  } while (bVar6);
  return;
}



void mbedtls_mpi_core_shift_l(void *param_1,ulong param_2,ulong param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  
  bVar1 = (byte)param_3 & 0x3f;
  uVar7 = param_3 >> 6;
  if (0x3f < param_3) {
    if (uVar7 < param_2) {
      puVar2 = (undefined8 *)((long)param_1 + param_2 * 8 + -8);
      do {
        puVar3 = puVar2 + -1;
        *puVar2 = puVar2[-uVar7];
        puVar2 = puVar3;
        uVar4 = uVar7;
      } while ((undefined8 *)((long)param_1 + uVar7 * 8 + -8) != puVar3);
    }
    else {
      uVar4 = param_2;
      if (param_2 == 0) {
        return;
      }
    }
    param_1 = memset(param_1,0,uVar4 << 3);
  }
  if (((param_3 & 0x3f) != 0) && (uVar7 < param_2)) {
    puVar5 = (ulong *)((long)param_1 + uVar7 * 8);
    uVar7 = 0;
    do {
      uVar4 = *puVar5;
      puVar6 = puVar5 + 1;
      *puVar5 = uVar4 << bVar1 | uVar7;
      puVar5 = puVar6;
      uVar7 = uVar4 >> (0x40 - bVar1 & 0x3f);
    } while (puVar6 != (ulong *)((long)param_1 + param_2 * 8));
  }
  return;
}



ulong mbedtls_mpi_core_add(long param_1,long param_2,long param_3,long param_4)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    uVar5 = 0;
    do {
      puVar1 = (ulong *)(param_2 + lVar6 * 8);
      uVar2 = *puVar1;
      uVar4 = uVar5 + *puVar1;
      puVar1 = (ulong *)(param_3 + lVar6 * 8);
      uVar3 = *puVar1;
      *(ulong *)(param_1 + lVar6 * 8) = uVar4 + *puVar1;
      uVar5 = (ulong)CARRY8(uVar5,uVar2) + (ulong)CARRY8(uVar4,uVar3);
      lVar6 = lVar6 + 1;
    } while (param_4 != lVar6);
    return uVar5;
  }
  return 0;
}



ulong mbedtls_mpi_core_add_if(long param_1,long param_2,long param_3,uint param_4)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  if (param_3 != 0) {
    lVar5 = 0;
    uVar4 = 0;
    do {
      uVar6 = *(ulong *)(param_2 + lVar5 * 8) & (long)(-(ulong)param_4 | (ulong)param_4) >> 0x3f;
      puVar1 = (ulong *)(param_1 + lVar5 * 8);
      uVar2 = *puVar1;
      uVar3 = uVar4 + *puVar1;
      *(ulong *)(param_1 + lVar5 * 8) = uVar6 + uVar3;
      uVar4 = (ulong)CARRY8(uVar4,uVar2) + (ulong)CARRY8(uVar6,uVar3);
      lVar5 = lVar5 + 1;
    } while (param_3 != lVar5);
    return uVar4;
  }
  return 0;
}



ulong mbedtls_mpi_core_sub(long param_1,long param_2,long param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  if (param_4 != 0) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      uVar1 = *(ulong *)(param_2 + lVar4 * 8);
      uVar2 = *(ulong *)(param_3 + lVar4 * 8);
      uVar3 = uVar1 - uVar5;
      uVar5 = (ulong)(uVar1 < uVar5) + (ulong)(uVar3 < uVar2);
      *(ulong *)(param_1 + lVar4 * 8) = uVar3 - uVar2;
      lVar4 = lVar4 + 1;
    } while (param_4 != lVar4);
    return uVar5;
  }
  return 0;
}



ulong mbedtls_mpi_core_mla(ulong *param_1,ulong param_2,ulong *param_3,ulong param_4,ulong param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong *puVar31;
  long lVar32;
  ulong uVar33;
  
  if (param_2 <= param_4) {
    param_4 = param_2;
  }
  lVar32 = param_2 - param_4;
  uVar29 = param_4 >> 3;
  uVar33 = (ulong)((uint)param_4 & 7);
  uVar30 = uVar29;
  if (uVar29 != 0) {
    uVar30 = 0;
    do {
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar30;
      uVar29 = uVar29 - 1;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = *param_3;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = param_5;
      auVar19 = auVar1 * auVar10 + auVar19;
      uVar28 = auVar19._0_8_;
      uVar30 = *param_1;
      *param_1 = *param_1 + uVar28;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = auVar19._8_8_ + (ulong)CARRY8(uVar30,uVar28);
      puVar31 = param_1 + 1;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = param_3[1];
      auVar11._8_8_ = 0;
      auVar11._0_8_ = param_5;
      auVar20 = auVar2 * auVar11 + auVar20;
      uVar28 = auVar20._0_8_;
      uVar30 = *puVar31;
      *puVar31 = *puVar31 + uVar28;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = auVar20._8_8_ + (ulong)CARRY8(uVar30,uVar28);
      puVar31 = param_1 + 2;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = param_3[2];
      auVar12._8_8_ = 0;
      auVar12._0_8_ = param_5;
      auVar21 = auVar3 * auVar12 + auVar21;
      uVar28 = auVar21._0_8_;
      uVar30 = *puVar31;
      *puVar31 = *puVar31 + uVar28;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = auVar21._8_8_ + (ulong)CARRY8(uVar30,uVar28);
      puVar31 = param_1 + 3;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = param_3[3];
      auVar13._8_8_ = 0;
      auVar13._0_8_ = param_5;
      auVar22 = auVar4 * auVar13 + auVar22;
      uVar28 = auVar22._0_8_;
      uVar30 = *puVar31;
      *puVar31 = *puVar31 + uVar28;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = auVar22._8_8_ + (ulong)CARRY8(uVar30,uVar28);
      puVar31 = param_1 + 4;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = param_3[4];
      auVar14._8_8_ = 0;
      auVar14._0_8_ = param_5;
      auVar23 = auVar5 * auVar14 + auVar23;
      uVar28 = auVar23._0_8_;
      uVar30 = *puVar31;
      *puVar31 = *puVar31 + uVar28;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = auVar23._8_8_ + (ulong)CARRY8(uVar30,uVar28);
      puVar31 = param_1 + 5;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = param_3[5];
      auVar15._8_8_ = 0;
      auVar15._0_8_ = param_5;
      auVar24 = auVar6 * auVar15 + auVar24;
      uVar28 = auVar24._0_8_;
      uVar30 = *puVar31;
      *puVar31 = *puVar31 + uVar28;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = auVar24._8_8_ + (ulong)CARRY8(uVar30,uVar28);
      puVar31 = param_1 + 6;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = param_3[6];
      auVar16._8_8_ = 0;
      auVar16._0_8_ = param_5;
      auVar25 = auVar7 * auVar16 + auVar25;
      uVar28 = auVar25._0_8_;
      uVar30 = *puVar31;
      *puVar31 = *puVar31 + uVar28;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = auVar25._8_8_ + (ulong)CARRY8(uVar30,uVar28);
      puVar31 = param_1 + 7;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = param_3[7];
      auVar17._8_8_ = 0;
      auVar17._0_8_ = param_5;
      param_3 = param_3 + 8;
      auVar26 = auVar8 * auVar17 + auVar26;
      uVar28 = auVar26._0_8_;
      uVar30 = *puVar31;
      *puVar31 = *puVar31 + uVar28;
      uVar30 = auVar26._8_8_ + (ulong)CARRY8(uVar30,uVar28);
      param_1 = param_1 + 8;
    } while (uVar29 != 0);
  }
  for (; uVar33 != 0; uVar33 = uVar33 - 1) {
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar30;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = *param_3;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = param_5;
    param_3 = param_3 + 1;
    auVar27 = auVar9 * auVar18 + auVar27;
    uVar30 = auVar27._0_8_;
    uVar29 = *param_1;
    *param_1 = *param_1 + uVar30;
    param_1 = param_1 + 1;
    uVar30 = auVar27._8_8_ + (ulong)CARRY8(uVar29,uVar30);
  }
  for (; lVar32 != 0; lVar32 = lVar32 + -1) {
    uVar29 = *param_1;
    *param_1 = *param_1 + uVar30;
    param_1 = param_1 + 1;
    uVar30 = (ulong)CARRY8(uVar29,uVar30);
  }
  return uVar30;
}



void mbedtls_mpi_core_mul(void *param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  
  pvVar2 = memset(param_1,0,(param_3 + param_5) * 8);
  if (param_5 != 0) {
    lVar3 = 0;
    do {
      lVar1 = lVar3 * 8;
      lVar3 = lVar3 + 1;
      mbedtls_mpi_core_mla(pvVar2,param_3 + 1,param_2,param_3,*(undefined8 *)(param_4 + lVar1));
      pvVar2 = (void *)((long)pvVar2 + 8);
    } while (param_5 != lVar3);
  }
  return;
}



long mbedtls_mpi_core_montmul_init(long *param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = 4;
  lVar2 = (ulong)((int)lVar1 * 2 + 4U & 8) + lVar1;
  do {
    lVar2 = lVar2 * (2 - lVar1 * lVar2);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return -lVar2;
}



void mbedtls_mpi_core_montmul
               (long param_1,long param_2,long *param_3,undefined8 param_4,long param_5,long param_6
               ,long param_7,void *param_8)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong *puVar9;
  bool bVar10;
  
  puVar2 = (ulong *)memset(param_8,0,param_6 * 0x10 + 8);
  if (param_6 == 0) {
    uVar5 = *puVar2;
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    puVar9 = puVar2;
    do {
      lVar7 = lVar8;
      lVar8 = *(long *)(param_2 + lVar7 * 8);
      lVar4 = *param_3;
      uVar5 = *puVar9;
      mbedtls_mpi_core_mla(puVar9,param_6 + 2,param_3,param_4,lVar8);
      mbedtls_mpi_core_mla(puVar9,param_6 + 2,param_5,param_6,(lVar4 * lVar8 + uVar5) * param_7);
      lVar8 = lVar7 + 1;
      puVar9 = puVar9 + 1;
    } while (param_6 != lVar7 + 1);
    lVar8 = param_6 * 8;
    uVar6 = 0;
    puVar2 = puVar2 + param_6;
    uVar5 = puVar2[param_6];
    lVar4 = 0;
    do {
      uVar1 = *(ulong *)(param_5 + lVar4 * 8);
      uVar3 = puVar2[lVar4] - uVar6;
      uVar6 = (ulong)(puVar2[lVar4] < uVar6) + (ulong)(uVar3 < uVar1);
      *(ulong *)(param_1 + lVar4 * 8) = uVar3 - uVar1;
      bVar10 = lVar7 != lVar4;
      lVar4 = lVar4 + 1;
    } while (bVar10);
    uVar5 = uVar5 ^ uVar6;
  }
  mbedtls_ct_memcpy_if((long)(-uVar5 | uVar5) >> 0x3f,param_1,puVar2,0,lVar8);
  return;
}



void mbedtls_mpi_core_exp_mod_optionally_safe
               (void *param_1,void *param_2,long *param_3,long param_4,long param_5,ulong param_6,
               int param_7,undefined8 param_8,undefined8 *param_9)

{
  undefined8 *__dest;
  undefined8 *puVar1;
  size_t __n;
  ulong uVar2;
  long lVar3;
  void *pvVar4;
  ulong uVar5;
  sbyte sVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  void *pvVar11;
  ulong uVar12;
  ulong uVar13;
  long local_58;
  ulong local_50;
  
  if (param_7 == 0x2a2a2a2a) {
    iVar7 = (int)param_6 + -1;
    if (-1 < iVar7) {
      lVar8 = (long)iVar7;
LAB_00100fc7:
      uVar12 = *(ulong *)(param_5 + lVar8 * 8);
      if (uVar12 == 0) goto LAB_00100fbe;
      lVar3 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uVar12 = (lVar8 + 1) * 0x40 - (ulong)((uint)lVar3 ^ 0x3f);
      uVar2 = uVar12 & 0xffffffffffffffc0;
      param_6 = uVar12 >> 6;
      uVar12 = (ulong)((uint)uVar12 & 0x3f);
      goto LAB_00100c81;
    }
    uVar12 = 1;
    param_6 = 0;
  }
  else {
    uVar12 = 0;
    uVar2 = param_6 << 6;
LAB_00100c81:
    if (0x4f < uVar2) {
      local_50 = 8;
      sVar6 = 3;
      local_58 = 3;
      goto LAB_00100ca2;
    }
  }
  goto LAB_00100c8b;
LAB_00100fbe:
  lVar8 = lVar8 + -1;
  if ((int)lVar8 == -1) goto LAB_00100ff9;
  goto LAB_00100fc7;
LAB_00100ff9:
  uVar12 = 1;
  param_6 = 0;
LAB_00100c8b:
  local_50 = 2;
  sVar6 = 1;
  local_58 = 1;
LAB_00100ca2:
  __n = param_4 * 8;
  iVar7 = 4;
  __dest = param_9 + (param_4 << sVar6);
  puVar1 = __dest + param_4;
  lVar8 = *param_3;
  lVar3 = (ulong)((int)lVar8 * 2 + 4U & 8) + lVar8;
  do {
    lVar3 = lVar3 * (2 - lVar3 * lVar8);
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  lVar3 = -lVar3;
  memset(param_9,0,__n);
  *param_9 = 1;
  mbedtls_mpi_core_montmul(param_9,param_9,param_8,param_4,param_3,param_4,lVar3,puVar1);
  pvVar4 = memcpy(param_9 + param_4,param_2,__n);
  if (local_50 != 2) {
    lVar8 = 6;
    pvVar11 = pvVar4;
    do {
      mbedtls_mpi_core_montmul
                ((void *)((long)pvVar11 + __n),pvVar11,pvVar4,param_4,param_3,param_4,lVar3,puVar1);
      lVar8 = lVar8 + -1;
      pvVar11 = (void *)((long)pvVar11 + __n);
    } while (lVar8 != 0);
  }
  uVar2 = 0;
  memcpy(param_1,param_9,__n);
  lVar8 = 0;
LAB_00100df8:
  do {
    mbedtls_mpi_core_montmul(param_1,param_1,param_1,param_4,param_3,param_4,lVar3,puVar1);
    lVar8 = lVar8 + 1;
    if (uVar12 != 0) goto LAB_00100f20;
    param_6 = param_6 - 1;
    uVar12 = 0x3f;
    uVar13 = *(ulong *)(param_5 + param_6 * 8);
    uVar2 = uVar13 >> 0x3f | uVar2 * 2;
  } while (local_58 != lVar8);
  goto LAB_00100e62;
LAB_00100f20:
  uVar12 = uVar12 - 1;
  uVar13 = *(ulong *)(param_5 + param_6 * 8);
  uVar2 = (ulong)((uint)(uVar13 >> ((byte)uVar12 & 0x3f)) & 1) | uVar2 * 2;
  if ((local_58 == lVar8) || ((uVar12 == 0 && (param_6 == 0)))) {
LAB_00100e62:
    uVar10 = 0;
    puVar9 = param_9;
    if (param_7 == 0x2a2a2a2a) {
      memcpy(__dest,(undefined8 *)(uVar2 * __n + (long)param_9),__n);
    }
    else {
      do {
        uVar5 = (long)(-(uVar10 ^ uVar2) | uVar10 ^ uVar2) >> 0x3f;
        if ((__dest != puVar9) && (param_4 != 0)) {
          lVar8 = 0;
          do {
            __dest[lVar8] = __dest[lVar8] & uVar5 | puVar9[lVar8] & ~uVar5;
            lVar8 = lVar8 + 1;
          } while (param_4 != lVar8);
        }
        uVar10 = uVar10 + 1;
        puVar9 = puVar9 + param_4;
      } while (uVar10 != local_50);
    }
    mbedtls_mpi_core_montmul(param_1,param_1,__dest,param_4,param_3,param_4,lVar3,puVar1,uVar13);
    if ((uVar12 == 0) && (param_6 == 0)) {
      return;
    }
    uVar2 = 0;
    lVar8 = 0;
  }
  goto LAB_00100df8;
}



void mbedtls_mpi_core_get_mont_r2_unsafe(undefined8 param_1,long param_2)

{
  int iVar1;
  
  iVar1 = mbedtls_mpi_lset(param_1,1);
  if (iVar1 == 0) {
    iVar1 = mbedtls_mpi_shift_l(param_1,(long)(int)((uint)*(ushort *)(param_2 + 10) * 2) << 6);
    if (iVar1 == 0) {
      iVar1 = mbedtls_mpi_mod_mpi(param_1,param_1,param_2);
      if (iVar1 == 0) {
        mbedtls_mpi_shrink(param_1,*(undefined2 *)(param_2 + 10));
        return;
      }
    }
  }
  return;
}



undefined8
mbedtls_mpi_core_fill_random
          (ulong *param_1,ulong param_2,ulong param_3,code *param_4,undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  size_t __n;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  
  uVar6 = (ulong)((param_3 & 7) != 0) + (param_3 >> 3);
  __n = uVar6 * 8 - param_3;
  if (param_2 < uVar6) {
    uVar2 = 0xfffffffc;
  }
  else {
    memset(param_1,0,__n);
    memset(param_1 + uVar6,0,(param_2 - uVar6) * 8);
    uVar2 = (*param_4)(param_5,(long)param_1 + __n,param_3);
    if ((((int)uVar2 == 0) && (uVar6 != 0)) && (puVar3 = param_1 + (uVar6 - 1), param_1 <= puVar3))
    {
      do {
        uVar6 = *param_1;
        uVar1 = *puVar3;
        puVar5 = param_1 + 1;
        puVar4 = puVar3 + -1;
        *param_1 = uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 |
                   (uVar1 & 0xff0000000000) >> 0x18 | (uVar1 & 0xff00000000) >> 8 |
                   (uVar1 & 0xff000000) << 8 | (uVar1 & 0xff0000) << 0x18 | (uVar1 & 0xff00) << 0x28
                   | uVar1 << 0x38;
        *puVar3 = uVar6 >> 0x38 | (uVar6 & 0xff000000000000) >> 0x28 |
                  (uVar6 & 0xff0000000000) >> 0x18 | (uVar6 & 0xff00000000) >> 8 |
                  (uVar6 & 0xff000000) << 8 | (uVar6 & 0xff0000) << 0x18 | (uVar6 & 0xff00) << 0x28
                  | uVar6 << 0x38;
        puVar3 = puVar4;
        param_1 = puVar5;
      } while (puVar5 <= puVar4);
    }
  }
  return uVar2;
}



int mbedtls_mpi_core_random
              (undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long local_50;
  
  iVar2 = (int)param_4 + -1;
  if (-1 < iVar2) {
    lVar4 = (long)iVar2;
LAB_001011c5:
    uVar5 = *(ulong *)(param_3 + lVar4 * 8);
    if (uVar5 == 0) goto LAB_001011b8;
    lVar1 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    local_50 = (lVar4 + 1) * 0x40 - (ulong)((uint)lVar1 ^ 0x3f);
    uVar5 = local_50 + 7;
    uVar8 = uVar5 >> 3;
    if (0x27 < uVar5) {
      iVar2 = 0x1e;
      goto LAB_00101205;
    }
    goto LAB_0010129e;
  }
  local_50 = 0;
  uVar8 = 0;
  uVar5 = 0;
LAB_0010129e:
  iVar2 = 0xfa;
LAB_00101205:
  while( true ) {
    iVar3 = mbedtls_mpi_core_fill_random(param_1,param_4,uVar8,param_5,param_6);
    if (iVar3 != 0) {
      return iVar3;
    }
    mbedtls_mpi_core_shift_r(param_1,param_4,(uVar5 & 0xfffffffffffffff8) - local_50);
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) break;
    uVar6 = mbedtls_mpi_core_uint_le_mpi(param_2,param_1,param_4);
    uVar7 = mbedtls_mpi_core_lt_ct(param_1,param_3);
    if ((uVar6 & uVar7) != 0) {
      return 0;
    }
  }
  return -0xe;
LAB_001011b8:
  lVar4 = lVar4 + -1;
  if ((int)lVar4 == -1) goto LAB_00101290;
  goto LAB_001011c5;
LAB_00101290:
  local_50 = 0;
  uVar5 = 0;
  uVar8 = 0;
  goto LAB_0010129e;
}



long mbedtls_mpi_core_exp_mod_working_limbs(long param_1,long param_2)

{
  return param_1 * ((-(ulong)((ulong)(param_2 << 6) < 0x50) & 0xfffffffffffffffa) + 0xb) + 1;
}



void mbedtls_mpi_core_exp_mod(void)

{
  mbedtls_mpi_core_exp_mod_optionally_safe();
  return;
}



void mbedtls_mpi_core_exp_mod_unsafe(void)

{
  mbedtls_mpi_core_exp_mod_optionally_safe();
  return;
}



void mbedtls_mpi_core_sub_int(long param_1,long param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      uVar1 = *(ulong *)(param_2 + lVar2 * 8);
      *(ulong *)(param_1 + lVar2 * 8) = uVar1 - param_3;
      lVar2 = lVar2 + 1;
      param_3 = (ulong)(uVar1 < param_3);
    } while (param_4 != lVar2);
  }
  return;
}



long mbedtls_mpi_core_check_zero_ct(ulong *param_1,ulong param_2)

{
  ulong *puVar1;
  ulong uVar2;
  
  if (param_2 != 0) {
    puVar1 = param_1 + param_2;
    param_2 = 0;
    do {
      uVar2 = *param_1;
      param_1 = param_1 + 1;
      param_2 = param_2 | uVar2;
    } while (param_1 != puVar1);
  }
  return (long)(-param_2 | param_2) >> 0x3f;
}



void mbedtls_mpi_core_to_mont_rep
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  mbedtls_mpi_core_montmul(param_1,param_2,param_6,param_4,param_3,param_4,param_5,param_7);
  return;
}



void mbedtls_mpi_core_from_mont_rep
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = 1;
  mbedtls_mpi_core_montmul(param_1,param_2,&local_18,1,param_3,param_4,param_5);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1,param_2,param_6);
}


