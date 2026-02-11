
void sc_subx_constprop_0(long param_1,long param_2,long param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  lVar5 = 0;
  uVar3 = 0;
  lVar4 = 0;
  do {
    uVar1 = uVar3 + *(ulong *)(param_2 + lVar5);
    uVar3 = (lVar4 + (ulong)CARRY8(uVar3,*(ulong *)(param_2 + lVar5))) -
            (ulong)(uVar1 < *(ulong *)(param_3 + lVar5));
    *(ulong *)(param_1 + lVar5) = uVar1 - *(ulong *)(param_3 + lVar5);
    lVar5 = lVar5 + 8;
    lVar4 = (long)uVar3 >> 0x3f;
  } while (lVar5 != 0x38);
  lVar4 = 0;
  uVar1 = 0;
  do {
    uVar2 = uVar1 + *(ulong *)(param_1 + lVar4);
    uVar6 = *(ulong *)((long)&sc_p + lVar4) & param_4 + uVar3;
    uVar1 = (ulong)CARRY8(uVar1,*(ulong *)(param_1 + lVar4)) + (ulong)CARRY8(uVar2,uVar6);
    *(ulong *)(param_1 + lVar4) = uVar2 + uVar6;
    lVar4 = lVar4 + 8;
  } while (lVar4 != 0x38);
  return;
}



void sc_montmul(undefined8 param_1,ulong *param_2,ulong *param_3)

{
  ulong *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong *puVar15;
  long lVar16;
  long in_FS_OFFSET;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  uVar12 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = param_2 + 7;
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  do {
    uVar11 = *param_2;
    uVar14 = 0;
    puVar9 = (ulong *)local_88;
    puVar15 = param_3;
    do {
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar11;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = *puVar15;
      uVar7 = SUB168(auVar2 * auVar4,0);
      uVar8 = uVar7 + *puVar9;
      uVar13 = uVar14 + uVar8;
      uVar14 = SUB168(auVar2 * auVar4,8) + (ulong)CARRY8(uVar7,*puVar9) +
               (ulong)CARRY8(uVar14,uVar8);
      *puVar9 = uVar13;
      puVar9 = puVar9 + 1;
      puVar15 = puVar15 + 1;
    } while ((ulong *)(local_58 + 8) != puVar9);
    lVar16 = 0;
    uVar11 = 0;
    uVar7 = local_88._0_8_ * 0x3bd440fae918bc5;
    do {
      while( true ) {
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uVar7;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (&sc_p)[lVar16];
        uVar8 = SUB168(auVar3 * auVar5,0);
        puVar9 = (ulong *)((long)local_88 + lVar16 * 8);
        uVar13 = uVar8 + *puVar9;
        lVar10 = uVar11 + uVar13;
        uVar11 = SUB168(auVar3 * auVar5,8) + (ulong)CARRY8(uVar8,*puVar9) +
                 (ulong)CARRY8(uVar11,uVar13);
        if (lVar16 != 0) break;
        lVar16 = 1;
      }
      iVar6 = (int)lVar16;
      lVar16 = lVar16 + 1;
      *(long *)(local_88 + (ulong)(iVar6 - 1) * 8) = lVar10;
    } while (lVar16 != 7);
    lVar16 = uVar11 + uVar14 + uVar12;
    uVar12 = (ulong)CARRY8(uVar14,uVar12) + (ulong)CARRY8(uVar11,uVar14 + uVar12);
    local_58._0_8_ = lVar16;
    param_2 = param_2 + 1;
  } while (puVar1 != param_2);
  local_58._8_8_ = uVar14;
  sc_subx_constprop_0(param_1,local_88,&sc_p,uVar12);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ossl_curve448_scalar_mul(undefined8 param_1)

{
  sc_montmul();
  sc_montmul(param_1,param_1,sc_r2);
  return;
}



void ossl_curve448_scalar_sub(void)

{
  sc_subx_constprop_0();
  return;
}



void ossl_curve448_scalar_add(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  lVar1 = 0;
  uVar4 = 0;
  do {
    uVar2 = *(ulong *)(param_3 + lVar1) + *(ulong *)(param_2 + lVar1);
    lVar3 = uVar4 + uVar2;
    uVar4 = (ulong)CARRY8(*(ulong *)(param_3 + lVar1),*(ulong *)(param_2 + lVar1)) +
            (ulong)CARRY8(uVar4,uVar2);
    *(long *)(param_1 + lVar1) = lVar3;
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x38);
  sc_subx_constprop_0(param_1,param_1,&sc_p,uVar4);
  return;
}



uint ossl_curve448_scalar_decode(ulong *param_1,long param_2)

{
  byte *pbVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong *puVar8;
  
  uVar5 = 0;
  puVar8 = param_1;
  do {
    uVar7 = 0;
    uVar3 = 0;
    do {
      if (0x37 < uVar5) break;
      pbVar1 = (byte *)(param_2 + uVar5);
      cVar2 = (char)uVar3;
      uVar3 = uVar3 + 1;
      uVar5 = uVar5 + 1;
      uVar7 = uVar7 | (ulong)*pbVar1 << (cVar2 * '\b' & 0x3fU);
    } while (uVar3 < 8);
    *puVar8 = uVar7;
    puVar8 = puVar8 + 1;
    if (puVar8 == param_1 + 7) {
      lVar4 = 0;
      uVar5 = 0;
      lVar6 = 0;
      do {
        uVar5 = (lVar6 + (ulong)CARRY8(uVar5,*(ulong *)((long)param_1 + lVar4))) -
                (ulong)(uVar5 + *(ulong *)((long)param_1 + lVar4) < *(ulong *)((long)&sc_p + lVar4))
        ;
        lVar4 = lVar4 + 8;
        lVar6 = (long)uVar5 >> 0x3f;
      } while (lVar4 != 0x38);
      ossl_curve448_scalar_mul(param_1,param_1,ossl_curve448_scalar_one);
      return ~(uint)((long)((uVar5 & 0xffffffff) - 1) >> 0x3f);
    }
  } while( true );
}



void ossl_curve448_scalar_destroy(void *param_1)

{
  OPENSSL_cleanse(param_1,0x38);
  return;
}



void ossl_curve448_scalar_decode_long(ulong *param_1,long param_2,ulong param_3)

{
  long lVar1;
  byte *pbVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong uVar15;
  long in_FS_OFFSET;
  ulong local_b8 [7];
  ulong local_80;
  undefined1 local_78 [56];
  long local_40;
  
  uVar9 = ossl_curve448_scalar_zero._48_8_;
  uVar8 = ossl_curve448_scalar_zero._40_8_;
  uVar7 = ossl_curve448_scalar_zero._32_8_;
  uVar6 = ossl_curve448_scalar_zero._24_8_;
  uVar5 = ossl_curve448_scalar_zero._16_8_;
  uVar4 = ossl_curve448_scalar_zero._8_8_;
  puVar14 = local_b8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == 0) {
    *param_1 = ossl_curve448_scalar_zero._0_8_;
    param_1[1] = uVar4;
    param_1[6] = uVar9;
    param_1[2] = uVar5;
    param_1[3] = uVar6;
    param_1[4] = uVar7;
    param_1[5] = uVar8;
  }
  else {
    uVar15 = (param_3 / 0x38) * 0x38;
    uVar13 = param_3 % 0x38;
    if (param_3 == uVar15) {
      uVar15 = param_3 - 0x38;
      uVar13 = 0x38;
    }
    uVar11 = 0;
    do {
      lVar1 = uVar15 + uVar11;
      uVar12 = 0;
      uVar10 = 0;
      do {
        if (uVar13 <= uVar11) break;
        pbVar2 = (byte *)(lVar1 + param_2 + uVar10);
        cVar3 = (char)uVar10;
        uVar10 = uVar10 + 1;
        uVar11 = uVar11 + 1;
        uVar12 = uVar12 | (ulong)*pbVar2 << (cVar3 * '\b' & 0x3fU);
      } while (uVar10 < 8);
      *puVar14 = uVar12;
      puVar14 = puVar14 + 1;
    } while (&local_80 != puVar14);
    if (param_3 == 0x38) {
      ossl_curve448_scalar_mul(param_1,local_b8,ossl_curve448_scalar_one);
      ossl_curve448_scalar_destroy(local_b8);
    }
    else {
      while (uVar15 != 0) {
        uVar15 = uVar15 - 0x38;
        sc_montmul(local_b8,local_b8,sc_r2);
        ossl_curve448_scalar_decode(local_78,param_2 + uVar15);
        ossl_curve448_scalar_add(local_b8,local_b8,local_78);
      }
      param_1[6] = local_b8[6];
      *param_1 = local_b8[0];
      param_1[1] = local_b8[1];
      param_1[2] = local_b8[2];
      param_1[3] = local_b8[3];
      param_1[4] = local_b8[4];
      param_1[5] = local_b8[5];
      ossl_curve448_scalar_destroy(local_b8);
      ossl_curve448_scalar_destroy(local_78);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ossl_curve448_scalar_encode(long param_1,ulong *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar5 = 0;
  do {
    iVar2 = 0;
    uVar3 = uVar5;
    do {
      uVar4 = (ulong)uVar3;
      uVar3 = uVar3 + 1;
      bVar1 = (byte)iVar2;
      iVar2 = iVar2 + 8;
      *(char *)(param_1 + uVar4) = (char)(*param_2 >> (bVar1 & 0x3f));
    } while (iVar2 != 0x40);
    uVar5 = uVar5 + 8;
    param_2 = param_2 + 1;
  } while (uVar5 != 0x38);
  return;
}



void ossl_curve448_scalar_halve(ulong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  uVar1 = *param_2;
  lVar2 = 0;
  uVar8 = 0;
  do {
    uVar5 = *(ulong *)((long)&sc_p + lVar2) & -(ulong)((uint)uVar1 & 1);
    uVar6 = *(ulong *)((long)param_2 + lVar2) + uVar5;
    lVar7 = uVar8 + uVar6;
    uVar8 = (ulong)CARRY8(*(ulong *)((long)param_2 + lVar2),uVar5) + (ulong)CARRY8(uVar8,uVar6);
    *(long *)((long)param_1 + lVar2) = lVar7;
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0x38);
  puVar3 = param_1;
  do {
    puVar4 = puVar3 + 2;
    *puVar3 = puVar3[1] << 0x3f | *puVar3 >> 1;
    puVar3[1] = puVar3[2] << 0x3f | puVar3[1] >> 1;
    puVar3 = puVar4;
  } while (param_1 + 6 != puVar4);
  param_1[6] = param_1[6] >> 1 | uVar8 << 0x3f;
  return;
}


