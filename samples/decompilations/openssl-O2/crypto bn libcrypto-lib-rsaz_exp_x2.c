
void from_words52(ulong *param_1,int param_2,ulong *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined1 *puVar4;
  uint uVar6;
  ulong uVar7;
  ulong *puVar3;
  undefined1 *puVar5;
  
  uVar6 = param_2 + 0x3f >> 6;
  puVar3 = param_3;
  if ((int)uVar6 < 1) {
LAB_001000d0:
    if (param_2 != 0) {
      param_2 = param_2 + 7;
      uVar7 = *puVar3;
      puVar1 = param_1;
      if (0 < param_2 >> 3) {
LAB_001000e2:
        puVar3 = puVar1;
        do {
          puVar2 = (ulong *)((long)puVar3 + 1);
          *(char *)puVar3 = (char)uVar7;
          uVar7 = uVar7 >> 8;
          puVar3 = puVar2;
        } while ((ulong *)((ulong)(uint)(param_2 >> 3) + (long)puVar1) != puVar2);
        return;
      }
    }
  }
  else {
    puVar1 = (ulong *)memset(param_1,0,(ulong)uVar6 << 3);
    if (param_2 < 0x68) {
      if (param_2 < 0x35) {
        param_2 = param_2 + 7;
        uVar7 = *param_3;
        goto LAB_001000e2;
      }
    }
    else {
      do {
        uVar7 = *param_3;
        param_2 = param_2 + -0x68;
        param_1 = (ulong *)((long)puVar1 + 0xd);
        puVar3 = param_3 + 2;
        *puVar1 = uVar7;
        *(ulong *)((long)puVar1 + 6) = param_3[1] << 4 | uVar7 >> 0x30;
        puVar1 = param_1;
        param_3 = puVar3;
      } while (0x67 < param_2);
      if (param_2 < 0x35) goto LAB_001000d0;
    }
    uVar7 = *param_3;
    puVar3 = puVar1;
    do {
      puVar2 = (ulong *)((long)puVar3 + 1);
      *(char *)puVar3 = (char)uVar7;
      uVar7 = uVar7 >> 8;
      puVar3 = puVar2;
    } while ((ulong *)((long)puVar1 + 7) != puVar2);
    uVar7 = param_3[1] << 4 | *param_3 >> 0x30;
    puVar5 = (undefined1 *)((long)puVar1 + 6);
    do {
      puVar4 = puVar5 + 1;
      *puVar5 = (char)uVar7;
      uVar7 = uVar7 >> 8;
      puVar5 = puVar4;
    } while (puVar4 != (undefined1 *)((long)puVar1 + (ulong)((param_2 + -0x2d >> 3) + 6)));
  }
  return;
}



void to_words52(ulong *param_1,int param_2,ulong *param_3,int param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong *puVar4;
  ulong *puVar5;
  bool bVar6;
  
  puVar4 = param_3;
  puVar5 = param_1;
  if (0x67 < param_4) {
    do {
      param_4 = param_4 + -0x68;
      param_3 = (ulong *)((long)puVar4 + 0xd);
      param_2 = param_2 + -2;
      param_1 = puVar5 + 2;
      *puVar5 = *puVar4 & 0xfffffffffffff;
      puVar5[1] = *(ulong *)((long)puVar4 + 6) >> 4 & 0xfffffffffffff;
      puVar4 = param_3;
      puVar5 = param_1;
    } while (0x67 < param_4);
  }
  if (param_4 < 0x35) {
    if (0 < param_4) {
      lVar3 = (long)(param_4 + 7 >> 3);
      uVar2 = 0;
      do {
        lVar1 = lVar3 + -1;
        lVar3 = lVar3 + -1;
        uVar2 = uVar2 * 0x100 + (ulong)*(byte *)((long)param_3 + lVar1);
      } while ((int)lVar3 != 0);
      *param_1 = uVar2;
      memset(param_1 + 1,0,(long)(param_2 + -1) << 3);
      return;
    }
  }
  else {
    uVar2 = 0;
    puVar4 = (ulong *)((long)param_3 + 6);
    do {
      uVar2 = uVar2 * 0x100 + (ulong)(byte)*puVar4;
      bVar6 = param_3 != puVar4;
      puVar4 = (ulong *)((long)puVar4 + -1);
    } while (bVar6);
    *param_1 = uVar2 & 0xfffffffffffff;
    lVar3 = (long)(param_4 + -0x2d >> 3);
    uVar2 = 0;
    do {
      lVar1 = lVar3 + 5;
      lVar3 = lVar3 + -1;
      uVar2 = uVar2 * 0x100 + (ulong)*(byte *)((long)param_3 + lVar1);
    } while ((int)lVar3 != 0);
    param_2 = param_2 + -2;
    param_1[1] = uVar2 >> 4;
    param_1 = param_1 + 2;
  }
  memset(param_1,0,(long)param_2 << 3);
  return;
}



undefined8
ossl_rsaz_mod_exp_avx512_x2
          (ulong *param_1,undefined8 param_2,undefined8 *param_3,ulong *param_4,undefined8 param_5,
          undefined8 param_6,ulong *param_7,undefined8 param_8,undefined8 *param_9,ulong *param_10,
          undefined8 param_11,undefined8 param_12,uint param_13)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  uint num;
  code *pcVar5;
  code *pcVar6;
  uint uVar7;
  byte bVar8;
  int iVar9;
  ulong *rp;
  void *ptr;
  long lVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  long lVar21;
  int iVar22;
  long lVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  long in_FS_OFFSET;
  byte bVar27;
  int local_100;
  int local_98;
  int local_78;
  int local_74;
  undefined1 local_58 [16];
  long local_40;
  
  bVar27 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (undefined1  [16])0x0;
  iVar9 = ossl_rsaz_avx512ifma_eligible();
  if (((param_13 & 0xfffffdff) == 0x400) || (param_13 == 0x800)) {
    iVar25 = ((int)param_13 >> 9) * 2;
    uVar26 = (param_13 + 0x35) / 0x34;
    iVar22 = (int)(uVar26 * 0x40 + 0xff) >> 8;
    pcVar5 = *(code **)(ossl_rsaz_amm52_x1 + (long)(int)((iVar25 + -3) - (uint)(iVar9 == 0)) * 8);
    num = iVar22 * 0xe0 + 0x40;
    rp = (ulong *)CRYPTO_malloc(num,"crypto/bn/rsaz_exp_x2.c",0xef);
    if (rp != (ulong *)0x0) {
      iVar22 = iVar22 << 2;
      lVar11 = ((ulong)rp & 0xffffffffffffffc0) + 0x40;
      iVar9 = (uVar26 * 0x34 - param_13) * 4;
      lVar21 = (long)iVar22 * 8;
      uVar26 = (param_13 + 0x35) / 0x34;
      lVar1 = lVar11 + lVar21 + lVar21;
      lVar23 = lVar1 + lVar21;
      lVar2 = lVar23 + lVar21;
      lVar3 = lVar2 + lVar21;
      puVar4 = (undefined8 *)(lVar3 + lVar21);
      to_words52(lVar11,iVar22,param_2,param_13);
      to_words52(lVar11 + lVar21,iVar22,param_8,param_13);
      to_words52(lVar1,iVar22,param_4,param_13);
      to_words52(lVar23,iVar22,param_10,param_13);
      to_words52(lVar2,iVar22,param_5,param_13);
      to_words52(lVar3,iVar22,param_11,param_13);
      *puVar4 = 0;
      puVar4[(long)(int)uVar26 + -1] = 0;
      puVar20 = puVar4 + 1;
      for (uVar12 = (ulong)(uVar26 * 8 - 8 >> 3); uVar12 != 0; uVar12 = uVar12 - 1) {
        *puVar20 = 0;
        puVar20 = puVar20 + (ulong)bVar27 * -2 + 1;
      }
      iVar9 = (iVar9 / 0x34) * 0xc + iVar9;
      iVar22 = iVar9 + 0x3f;
      if (-1 < iVar9) {
        iVar22 = iVar9;
      }
      puVar4[iVar22 >> 6] = puVar4[iVar22 >> 6] | 1L << ((byte)iVar9 & 0x3f);
      (*pcVar5)(lVar2,lVar2,lVar2,lVar1,param_6);
      (*pcVar5)(lVar2,lVar2,puVar4,lVar1,param_6);
      (*pcVar5)(lVar3,lVar3,lVar3,lVar23,param_12);
      (*pcVar5)(lVar3,lVar3,puVar4,lVar23,param_12);
      local_58._8_8_ = param_12;
      local_58._0_8_ = param_6;
      iVar9 = ossl_rsaz_avx512ifma_eligible();
      if (param_13 == 0x600) {
        local_98 = 0x45d0;
        uVar17 = 0x45d0;
        lVar23 = 0x800;
        iVar24 = 0x40;
        local_100 = 0x19;
        iVar22 = 0x20;
        local_74 = 0x32;
        local_78 = 0x18;
LAB_001005ed:
        lVar21 = (long)(int)((iVar25 + -3) - (uint)(iVar9 == 0));
        pcVar5 = *(code **)(ossl_rsaz_amm52_x2 + lVar21 * 8);
        pcVar6 = *(code **)(ossl_extract_multiplier_win5 + lVar21 * 8);
        ptr = (void *)CRYPTO_zalloc(uVar17,"crypto/bn/rsaz_exp_x2.c",0x1a0);
        if (ptr == (void *)0x0) goto LAB_001009c0;
        lVar21 = ((ulong)ptr & 0xffffffffffffffc0) + 0x40;
        lVar10 = (long)iVar24;
        puVar4 = (undefined8 *)(lVar21 + lVar10 * 8);
        *puVar4 = 1;
        puVar18 = puVar4 + lVar10;
        puVar20 = puVar18 + lVar23;
        puVar4[iVar22] = 1;
        (*pcVar5)(puVar18,puVar4,lVar2,lVar1,local_58);
        (*pcVar5)(puVar18 + lVar10,lVar11,lVar2,lVar1,local_58);
        iVar9 = iVar22 * 2;
        iVar25 = 0xf;
        puVar15 = puVar18 + iVar22 * 4;
        puVar19 = puVar18 + iVar22 * 4 + (long)iVar22 * -2;
        do {
          (*pcVar5)(puVar15,puVar19,puVar19,lVar1,local_58);
          (*pcVar5)(puVar15 + iVar9,puVar15,puVar18 + lVar10,lVar1,local_58);
          iVar25 = iVar25 + -1;
          puVar15 = puVar15 + iVar9 + iVar9;
          puVar19 = puVar19 + iVar9;
        } while (iVar25 != 0);
        lVar11 = (long)local_78;
        *puVar20 = *param_3;
        puVar20[lVar11 + -1] = param_3[lVar11 + -1];
        puVar15 = param_3 + 1;
        puVar19 = puVar20 + 1;
        for (uVar12 = (ulong)(local_78 * 8 - 8U >> 3); uVar12 != 0; uVar12 = uVar12 - 1) {
          *puVar19 = *puVar15;
          puVar15 = puVar15 + (ulong)bVar27 * -2 + 1;
          puVar19 = puVar19 + (ulong)bVar27 * -2 + 1;
        }
        puVar20[(long)local_100 + -1] = 0;
        puVar19 = puVar20 + local_100;
        *puVar19 = *param_9;
        puVar19[lVar11 + -1] = param_9[lVar11 + -1];
        lVar11 = (long)puVar19 - (long)(puVar19 + 1);
        puVar15 = (undefined8 *)((long)param_9 - lVar11);
        puVar19 = puVar19 + 1;
        for (uVar12 = (ulong)((uint)(local_78 * 8 + (int)lVar11) >> 3); uVar12 != 0;
            uVar12 = uVar12 - 1) {
          *puVar19 = *puVar15;
          puVar15 = puVar15 + (ulong)bVar27 * -2 + 1;
          puVar19 = puVar19 + (ulong)bVar27 * -2 + 1;
        }
        puVar20[(long)local_74 + -1] = 0;
        iVar9 = ((int)param_13 / 5) * 5;
        uVar26 = iVar9 - 5;
        (*pcVar6)(lVar21,puVar18,(ulong)puVar20[iVar9 >> 6] >> ((byte)iVar9 & 0x3f),
                  (ulong)puVar20[(iVar9 >> 6) + local_100] >> ((byte)iVar9 & 0x3f));
        do {
          while( true ) {
            iVar9 = (int)uVar26 >> 6;
            uVar13 = (uint)((ulong)puVar20[iVar9] >> ((byte)uVar26 & 0x3f));
            uVar7 = (uint)((ulong)puVar20[iVar9 + local_100] >> ((byte)uVar26 & 0x3f));
            if ((uVar26 & 0x3f) < 0x3c) break;
            bVar8 = -(char)(uVar26 & 0x3f);
            (*pcVar6)(puVar4,puVar18,
                      ((uint)(puVar20[(long)iVar9 + 1] << (bVar8 & 0x3f)) ^ uVar13) & 0x1f,
                      ((uint)(puVar20[iVar9 + 1 + local_100] << (bVar8 & 0x3f)) ^ uVar7) & 0x1f);
            (*pcVar5)(lVar21,lVar21,lVar21,lVar1,local_58);
            (*pcVar5)(lVar21,lVar21,lVar21,lVar1,local_58);
            (*pcVar5)(lVar21,lVar21,lVar21,lVar1,local_58);
            (*pcVar5)(lVar21,lVar21,lVar21,lVar1,local_58);
            (*pcVar5)(lVar21,lVar21,lVar21,lVar1,local_58);
            (*pcVar5)(lVar21,lVar21,puVar4,lVar1,local_58);
            uVar26 = uVar26 - 5;
          }
          (*pcVar6)(puVar4,puVar18,uVar13 & 0x1f,uVar7 & 0x1f);
          (*pcVar5)(lVar21,lVar21,lVar21,lVar1,local_58);
          (*pcVar5)(lVar21,lVar21,lVar21,lVar1,local_58);
          (*pcVar5)(lVar21,lVar21,lVar21,lVar1,local_58);
          (*pcVar5)(lVar21,lVar21,lVar21,lVar1,local_58);
          (*pcVar5)(lVar21,lVar21,lVar21,lVar1,local_58);
          (*pcVar5)(lVar21,lVar21,puVar4,lVar1,local_58);
          uVar26 = uVar26 - 5;
        } while (-1 < (int)uVar26);
        puVar4[lVar10 + -1] = 0;
        puVar20 = puVar4 + 1;
        for (uVar12 = (ulong)((int)(lVar10 * 8) - 8U >> 3); uVar12 != 0; uVar12 = uVar12 - 1) {
          *puVar20 = 0;
          puVar20 = puVar20 + (ulong)bVar27 * -2 + 1;
        }
        *puVar4 = 1;
        puVar4[iVar22] = 1;
        (*pcVar5)(lVar2,lVar21,puVar4,lVar1,local_58);
        OPENSSL_cleanse(ptr,(long)local_98);
        uVar16 = (ulong)(long)(int)param_13 >> 6;
        CRYPTO_free(ptr);
        from_words52(param_1,param_13,lVar2);
        from_words52(param_7,param_13,lVar3);
        uVar12 = bn_sub_words(rp,param_1,param_4,(int)uVar16);
        uVar14 = 0;
        do {
          param_1[uVar14] = param_1[uVar14] & -uVar12 | rp[uVar14] & uVar12 - 1;
          uVar14 = uVar14 + 1;
        } while (uVar16 != uVar14);
        uVar12 = bn_sub_words(rp,param_7,param_10,(int)uVar16);
        uVar14 = 0;
        do {
          param_7[uVar14] = param_7[uVar14] & -uVar12 | rp[uVar14] & uVar12 - 1;
          uVar14 = uVar14 + 1;
        } while (uVar16 != uVar14);
        uVar17 = 1;
      }
      else {
        if (param_13 == 0x800) {
          local_98 = 0x5750;
          uVar17 = 0x5750;
          lVar23 = 0xa00;
          iVar24 = 0x50;
          local_100 = 0x21;
          iVar22 = 0x28;
          local_74 = 0x42;
          local_78 = 0x20;
          goto LAB_001005ed;
        }
        if (param_13 == 0x400) {
          local_98 = 0x2bd0;
          uVar17 = 0x2bd0;
          lVar23 = 0x500;
          iVar24 = 0x28;
          local_100 = 0x11;
          iVar22 = 0x14;
          local_74 = 0x22;
          local_78 = 0x10;
          goto LAB_001005ed;
        }
LAB_001009c0:
        uVar17 = 0;
      }
      OPENSSL_cleanse(rp,(ulong)num);
      CRYPTO_free(rp);
      goto LAB_001002dc;
    }
  }
  uVar17 = 0;
LAB_001002dc:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar17;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


