
int BN_nist_mod_224(BIGNUM *r,BIGNUM *a,BIGNUM *p,BN_CTX *ctx)

{
  ulong *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  BIGNUM *pBVar6;
  ulong *puVar7;
  uint uVar8;
  ulong *rp;
  ulong uVar9;
  byte bVar10;
  long in_FS_OFFSET;
  ulong auStack_90 [5];
  ulong local_68;
  ulong uStack_60;
  undefined1 local_58 [16];
  long local_40;
  
  iVar3 = a->top;
  puVar1 = a->d;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = BN_is_negative(a);
  if ((iVar2 != 0) || (iVar2 = BN_ucmp(a,(BIGNUM *)ossl_bignum_nist_p_224_sqr_3), -1 < iVar2)) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      iVar3 = BN_nnmod(r,a,(BIGNUM *)ossl_bignum_nist_p_224,ctx);
      return iVar3;
    }
    goto LAB_001003e4;
  }
  iVar2 = BN_ucmp((BIGNUM *)ossl_bignum_nist_p_224,a);
  if (iVar2 == 0) {
    BN_zero_ex(r);
LAB_001002f3:
    uVar4 = 1;
  }
  else {
    if (iVar2 < 1) {
      rp = puVar1;
      if (a != r) {
        lVar5 = bn_wexpand(r,4);
        uVar4 = 0;
        if (lVar5 == 0) goto LAB_001002f8;
        rp = r->d;
        lVar5 = 0;
        do {
          *(undefined8 *)((long)rp + lVar5) = *(undefined8 *)((long)puVar1 + lVar5);
          lVar5 = lVar5 + 8;
        } while (lVar5 != 0x20);
      }
      iVar2 = iVar3 + -3;
      if (iVar3 < 4) {
        iVar2 = 0;
LAB_00100116:
        uVar4 = (4 - iVar2) * 8;
        *(undefined8 *)((long)auStack_90 + (ulong)uVar4 + (long)iVar2 * 8) = 0;
        if (7 < uVar4 - 1) {
          uVar9 = 0;
          do {
            uVar8 = (int)uVar9 + 8;
            *(undefined8 *)((long)auStack_90 + uVar9 + (long)iVar2 * 8 + 8) = 0;
            uVar9 = (ulong)uVar8;
          } while (uVar8 < uVar4 - 8);
        }
      }
      else {
        lVar5 = 0;
        do {
          auStack_90[lVar5 + 1] = puVar1[lVar5 + 3];
          lVar5 = lVar5 + 1;
        } while ((int)lVar5 < iVar2);
        if (iVar2 != 4) goto LAB_00100116;
      }
      puVar1 = auStack_90 + 1;
      local_68 = 0;
      rp[3] = rp[3] & 0xffffffff;
      auStack_90[0] = auStack_90[2] >> 0x20 | auStack_90[3] << 0x20;
      uVar9 = auStack_90[4] << 0x20 | auStack_90[3] >> 0x20;
      uStack_60 = (auStack_90[1] >> 0x20) << 0x20;
      local_58._8_8_ = auStack_90[3] & 0xffffffff;
      local_58._0_8_ = (auStack_90[2] >> 0x20) << 0x20 | auStack_90[2] & 0xffffffff;
      bn_add_words(rp,rp,&local_68,4);
      uStack_60 = (auStack_90[3] >> 0x20) << 0x20;
      local_68 = 0;
      local_58._8_8_ = 0;
      local_58._0_8_ = auStack_90[4];
      bn_add_words(rp,rp,&local_68,4);
      local_58._8_8_ = auStack_90[4] >> 0x20;
      local_58._0_8_ = uVar9;
      uStack_60 = auStack_90[0];
      local_68 = auStack_90[1] >> 0x20 | auStack_90[2] << 0x20;
      bn_sub_words(rp,rp,&local_68,4);
      local_58 = (undefined1  [16])0x0;
      local_68 = uVar9;
      uStack_60 = auStack_90[4] >> 0x20;
      bn_sub_words(rp,rp,&local_68,4);
      uVar4 = *(uint *)((long)rp + 0x1c);
      if ((int)uVar4 < 1) {
        if ((uVar4 == 0) ||
           (uVar9 = bn_add_words(rp,rp,(ulong *)(_nist_p_224 + (long)(int)~uVar4 * 0x20),4),
           (int)uVar9 != 0)) {
          bVar10 = 0;
          goto LAB_001002a8;
        }
        bn_add_words(puVar1,rp,(ulong *)_nist_p_224,4);
LAB_001002c8:
        puVar7 = puVar1;
      }
      else {
        bn_sub_words(rp,rp,(ulong *)(_nist_p_224 + (long)(int)(uVar4 - 1) * 0x20),4);
        bVar10 = (byte)*(undefined4 *)((long)rp + 0x1c) & 1;
LAB_001002a8:
        uVar9 = bn_sub_words(puVar1,rp,(ulong *)_nist_p_224,4);
        if ((uVar9 == 0) || (puVar7 = rp, bVar10 != 0)) goto LAB_001002c8;
      }
      lVar5 = 0;
      do {
        *(undefined8 *)((long)rp + lVar5) = *(undefined8 *)((long)puVar7 + lVar5);
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0x20);
      r->top = 4;
      bn_correct_top(r);
      goto LAB_001002f3;
    }
    if (a == r) goto LAB_001002f3;
    pBVar6 = BN_copy(r,a);
    uVar4 = (uint)(pBVar6 != (BIGNUM *)0x0);
  }
LAB_001002f8:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
LAB_001003e4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int BN_nist_mod_521(BIGNUM *r,BIGNUM *a,BIGNUM *p,BN_CTX *ctx)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  BIGNUM *pBVar7;
  ulong *rp;
  uint uVar8;
  long in_FS_OFFSET;
  byte bVar9;
  undefined *puStack_90;
  ulong local_88 [9];
  long local_40;
  
  bVar9 = 0;
  iVar2 = a->top;
  puVar5 = a->d;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_90 = (undefined *)0x10042a;
  iVar1 = BN_is_negative(a);
  if (iVar1 == 0) {
    puStack_90 = (undefined *)0x10043f;
    iVar1 = BN_ucmp(a,(BIGNUM *)ossl_bignum_nist_p_521_sqr_0);
    if (iVar1 < 0) {
      puStack_90 = (undefined *)0x10048f;
      iVar1 = BN_ucmp((BIGNUM *)ossl_bignum_nist_p_521,a);
      if (iVar1 == 0) {
        puStack_90 = (undefined *)0x100638;
        BN_zero_ex(r);
LAB_001005db:
        uVar8 = 1;
      }
      else {
        if (iVar1 < 1) {
          rp = puVar5;
          if (a != r) {
            puStack_90 = (undefined *)0x1004b3;
            lVar3 = bn_wexpand(r,9);
            uVar8 = 0;
            if (lVar3 == 0) goto LAB_001005e0;
            rp = r->d;
            lVar3 = 0;
            do {
              *(undefined8 *)((long)rp + lVar3) = *(undefined8 *)((long)puVar5 + lVar3);
              lVar3 = lVar3 + 8;
            } while (lVar3 != 0x48);
          }
          iVar1 = iVar2 + -8;
          if (iVar2 < 9) {
            iVar1 = 0;
LAB_00100507:
            uVar4 = (ulong)(9 - iVar1) << 3;
            *(undefined8 *)((long)local_88 + (uVar4 & 0xffffffff) + (long)iVar1 * 8 + -8) = 0;
            puVar5 = local_88 + iVar1;
            for (uVar4 = (ulong)((int)uVar4 - 1U >> 3); uVar4 != 0; uVar4 = uVar4 - 1) {
              *puVar5 = 0;
              puVar5 = puVar5 + (ulong)bVar9 * -2 + 1;
            }
          }
          else {
            lVar3 = 0;
            do {
              local_88[lVar3] = puVar5[lVar3 + 8];
              lVar3 = lVar3 + 1;
            } while ((int)lVar3 < iVar1);
            if (iVar1 != 9) goto LAB_00100507;
          }
          puVar5 = local_88;
          do {
            local_88[8] = puVar5[1];
            puVar6 = puVar5 + 1;
            *puVar5 = local_88[8] << 0x37 | local_88[0] >> 9;
            puVar5 = puVar6;
            local_88[0] = local_88[8];
          } while (puVar6 != local_88 + 8);
          local_88[8] = local_88[8] >> 9;
          rp[8] = rp[8] & 0x1ff;
          puStack_90 = (undefined *)0x10058e;
          bn_add_words(rp,rp,local_88,9);
          puStack_90 = (undefined *)0x1005a5;
          uVar4 = bn_sub_words(local_88,rp,(ulong *)_nist_p_521,9);
          puVar5 = local_88;
          if (uVar4 != 0) {
            puVar5 = rp;
          }
          lVar3 = 0;
          do {
            *(undefined8 *)((long)rp + lVar3) = *(undefined8 *)((long)puVar5 + lVar3);
            lVar3 = lVar3 + 8;
          } while (lVar3 != 0x48);
          r->top = 9;
          puStack_90 = (undefined *)0x1005db;
          bn_correct_top(r);
          goto LAB_001005db;
        }
        if (a == r) goto LAB_001005db;
        puStack_90 = (undefined *)0x10061a;
        pBVar7 = BN_copy(r,a);
        uVar8 = (uint)(pBVar7 != (BIGNUM *)0x0);
      }
LAB_001005e0:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar8;
      }
      goto LAB_0010064a;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    iVar2 = BN_nnmod(r,a,(BIGNUM *)ossl_bignum_nist_p_521,ctx);
    return iVar2;
  }
LAB_0010064a:
                    /* WARNING: Subroutine does not return */
  puStack_90 = &UNK_0010064f;
  __stack_chk_fail();
}



int BN_nist_mod_192(BIGNUM *r,BIGNUM *a,BIGNUM *p,BN_CTX *ctx)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  uint *puVar5;
  ulong uVar6;
  ulong *puVar7;
  BIGNUM *pBVar8;
  uint uVar9;
  ulong *rp;
  uint uVar10;
  ulong uVar11;
  long in_FS_OFFSET;
  bool bVar12;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  ulong local_58 [3];
  long local_40;
  
  puVar5 = &local_78;
  iVar2 = a->top;
  puVar7 = a->d;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = BN_is_negative(a);
  if ((iVar1 != 0) || (iVar1 = BN_ucmp(a,(BIGNUM *)ossl_bignum_nist_p_192_sqr_4), -1 < iVar1)) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      iVar2 = BN_nnmod(r,a,(BIGNUM *)ossl_bignum_nist_p_192,ctx);
      return iVar2;
    }
    goto LAB_00100921;
  }
  iVar1 = BN_ucmp((BIGNUM *)ossl_bignum_nist_p_192,a);
  if (iVar1 == 0) {
    BN_zero_ex(r);
LAB_00100883:
    uVar10 = 1;
  }
  else {
    if (iVar1 < 1) {
      rp = puVar7;
      if (a != r) {
        lVar4 = bn_wexpand(r,3);
        uVar10 = 0;
        if (lVar4 == 0) goto LAB_00100888;
        rp = r->d;
        *rp = *puVar7;
        rp[1] = puVar7[1];
        rp[2] = puVar7[2];
      }
      uVar10 = 0;
      if (iVar2 < 4) {
LAB_0010075e:
        uVar3 = (3 - uVar10) * 8;
        *(undefined8 *)((long)puVar5 + (ulong)uVar3 + (long)(int)uVar10 * 8 + -8) = 0;
        if (7 < uVar3 - 1) {
          uVar6 = 0;
          do {
            uVar9 = (int)uVar6 + 8;
            *(undefined8 *)((long)puVar5 + uVar6 + (long)(int)uVar10 * 8) = 0;
            uVar6 = (ulong)uVar9;
          } while (uVar9 < uVar3 - 8);
        }
      }
      else {
        uVar10 = iVar2 - 3;
        puVar5 = (uint *)memcpy(&local_78,puVar7 + 3,(ulong)uVar10 << 3);
        if (uVar10 != 3) goto LAB_0010075e;
      }
      uVar11 = (ulong)local_68;
      uVar6 = (ulong)local_64;
      lVar4 = (ulong)(uint)*rp + (ulong)local_78 + uVar11;
      *(int *)rp = (int)lVar4;
      lVar4 = (ulong)*(uint *)((long)rp + 4) + (lVar4 >> 0x20) + (ulong)local_74 + uVar6;
      *(int *)((long)rp + 4) = (int)lVar4;
      lVar4 = (ulong)local_78 + (lVar4 >> 0x20) + (ulong)(uint)rp[1] + (ulong)local_70 + uVar11;
      *(int *)(rp + 1) = (int)lVar4;
      lVar4 = (ulong)local_74 + (lVar4 >> 0x20) + (ulong)*(uint *)((long)rp + 0xc) + (ulong)local_6c
              + uVar6;
      *(int *)((long)rp + 0xc) = (int)lVar4;
      lVar4 = uVar11 + (ulong)local_70 + (lVar4 >> 0x20) + (ulong)(uint)rp[2];
      *(int *)(rp + 2) = (int)lVar4;
      lVar4 = uVar6 + (ulong)local_6c + (ulong)*(uint *)((long)rp + 0x14) + (lVar4 >> 0x20);
      *(int *)((long)rp + 0x14) = (int)lVar4;
      if (lVar4 >> 0x20 == 0) {
        bVar12 = false;
      }
      else {
        uVar6 = bn_sub_words(rp,rp,(ulong *)(_nist_p_192 +
                                            (long)((int)((ulong)lVar4 >> 0x20) + -1) * 0x18),3);
        bVar12 = (int)uVar6 == 0;
      }
      uVar6 = bn_sub_words(local_58,rp,(ulong *)_nist_p_192,3);
      if ((uVar6 == 0) || (puVar7 = rp, bVar12)) {
        puVar7 = local_58;
      }
      *rp = *puVar7;
      rp[1] = puVar7[1];
      rp[2] = puVar7[2];
      r->top = 3;
      bn_correct_top(r);
      goto LAB_00100883;
    }
    if (a == r) goto LAB_00100883;
    pBVar8 = BN_copy(r,a);
    uVar10 = (uint)(pBVar8 != (BIGNUM *)0x0);
  }
LAB_00100888:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar10;
  }
LAB_00100921:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int BN_nist_mod_256(BIGNUM *r,BIGNUM *a,BIGNUM *p,BN_CTX *ctx)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  uint *puVar5;
  ulong uVar6;
  BIGNUM *pBVar7;
  ulong uVar8;
  ulong *puVar9;
  uint uVar10;
  ulong uVar11;
  ulong *rp;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long in_FS_OFFSET;
  bool bVar18;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  ulong local_68 [5];
  long local_40;
  
  puVar5 = &local_88;
  iVar2 = a->top;
  puVar9 = a->d;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = BN_is_negative(a);
  if ((iVar1 != 0) || (iVar1 = BN_ucmp(a,(BIGNUM *)ossl_bignum_nist_p_256_sqr_2), -1 < iVar1)) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      iVar2 = BN_nnmod(r,a,(BIGNUM *)ossl_bignum_nist_p_256,ctx);
      return iVar2;
    }
    goto LAB_00100ce7;
  }
  iVar1 = BN_ucmp((BIGNUM *)ossl_bignum_nist_p_256,a);
  if (iVar1 == 0) {
    BN_zero_ex(r);
LAB_00100c0b:
    uVar12 = 1;
  }
  else {
    if (iVar1 < 1) {
      rp = puVar9;
      if (a != r) {
        lVar4 = bn_wexpand(r,4);
        uVar12 = 0;
        if (lVar4 == 0) goto LAB_00100c10;
        rp = r->d;
        lVar4 = 0;
        do {
          *(undefined8 *)((long)rp + lVar4) = *(undefined8 *)((long)puVar9 + lVar4);
          lVar4 = lVar4 + 8;
        } while (lVar4 != 0x20);
      }
      uVar12 = 0;
      if (iVar2 < 5) {
LAB_00100a42:
        uVar3 = (4 - uVar12) * 8;
        *(undefined8 *)((long)puVar5 + (ulong)uVar3 + (long)(int)uVar12 * 8 + -8) = 0;
        if (7 < uVar3 - 1) {
          uVar6 = 0;
          do {
            uVar10 = (int)uVar6 + 8;
            *(undefined8 *)((long)puVar5 + uVar6 + (long)(int)uVar12 * 8) = 0;
            uVar6 = (ulong)uVar10;
          } while (uVar10 < uVar3 - 8);
        }
      }
      else {
        uVar12 = iVar2 - 4;
        puVar5 = (uint *)memcpy(&local_88,puVar9 + 4,(ulong)uVar12 << 3);
        if (uVar12 != 4) goto LAB_00100a42;
      }
      uVar6 = (ulong)local_88;
      uVar17 = (ulong)local_84;
      uVar14 = (ulong)local_7c;
      uVar13 = (ulong)local_78;
      uVar8 = (ulong)local_74;
      uVar11 = (ulong)local_70;
      uVar16 = (ulong)local_6c;
      lVar4 = (((((uint)*rp + uVar6 + uVar17) - uVar14) - uVar13) - uVar8) - uVar11;
      *(int *)rp = (int)lVar4;
      uVar15 = (ulong)local_80;
      lVar4 = (((((ulong)*(uint *)((long)rp + 4) + (lVar4 >> 0x20) + uVar17 + uVar15) - uVar13) -
               uVar8) - uVar11) - uVar16;
      *(int *)((long)rp + 4) = (int)lVar4;
      lVar4 = ((((lVar4 >> 0x20) + (ulong)(uint)rp[1] + uVar15 + uVar14) - uVar8) - uVar11) - uVar16
      ;
      *(int *)(rp + 1) = (int)lVar4;
      lVar4 = ((((lVar4 >> 0x20) + (ulong)*(uint *)((long)rp + 0xc) + uVar14 * 2 + uVar13 * 2 +
                uVar8) - uVar16) - uVar6) - uVar17;
      *(int *)((long)rp + 0xc) = (int)lVar4;
      lVar4 = (((lVar4 >> 0x20) + (ulong)(uint)rp[2] + uVar13 * 2 + uVar8 * 2 + uVar11) - uVar17) -
              uVar15;
      *(int *)(rp + 2) = (int)lVar4;
      lVar4 = (((lVar4 >> 0x20) + (ulong)*(uint *)((long)rp + 0x14) + uVar8 * 2 + uVar11 * 2 +
               uVar16) - uVar15) - uVar14;
      *(int *)((long)rp + 0x14) = (int)lVar4;
      lVar4 = (((lVar4 >> 0x20) + (ulong)(uint)rp[3] + uVar11 * 3 + uVar16 * 2 + uVar8) - uVar6) -
              uVar17;
      *(int *)(rp + 3) = (int)lVar4;
      lVar4 = ((((uVar6 + (lVar4 >> 0x20) + (ulong)*(uint *)((long)rp + 0x1c) + uVar16 * 3) - uVar15
                ) - uVar14) - uVar13) - uVar8;
      *(int *)((long)rp + 0x1c) = (int)lVar4;
      uVar12 = (uint)((ulong)lVar4 >> 0x20);
      if (lVar4 >> 0x20 < 1) {
        if ((lVar4 >> 0x20 == 0) ||
           (uVar6 = bn_add_words(rp,rp,(ulong *)(_nist_p_256 + (long)(int)~uVar12 * 0x20),4),
           (int)uVar6 != 0)) {
          bVar18 = false;
          goto LAB_00100bb8;
        }
        bn_add_words(local_68,rp,(ulong *)_nist_p_256,4);
LAB_00100bdd:
        puVar9 = local_68;
      }
      else {
        uVar6 = bn_sub_words(rp,rp,(ulong *)(_nist_p_256 + (long)(int)(uVar12 - 1) * 0x20),4);
        bVar18 = (int)uVar6 == 0;
LAB_00100bb8:
        uVar6 = bn_sub_words(local_68,rp,(ulong *)_nist_p_256,4);
        if ((uVar6 == 0) || (puVar9 = rp, bVar18)) goto LAB_00100bdd;
      }
      lVar4 = 0;
      do {
        *(undefined8 *)((long)rp + lVar4) = *(undefined8 *)((long)puVar9 + lVar4);
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0x20);
      r->top = 4;
      bn_correct_top(r);
      goto LAB_00100c0b;
    }
    if (a == r) goto LAB_00100c0b;
    pBVar7 = BN_copy(r,a);
    uVar12 = (uint)(pBVar7 != (BIGNUM *)0x0);
  }
LAB_00100c10:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar12;
  }
LAB_00100ce7:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int BN_nist_mod_384(BIGNUM *r,BIGNUM *a,BIGNUM *p,BN_CTX *ctx)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  uint *puVar5;
  ulong uVar6;
  BIGNUM *pBVar7;
  ulong uVar8;
  ulong *puVar9;
  uint uVar10;
  ulong uVar11;
  ulong *rp;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long in_FS_OFFSET;
  bool bVar19;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  ulong local_78 [7];
  long local_40;
  
  puVar5 = &local_a8;
  iVar2 = a->top;
  puVar9 = a->d;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = BN_is_negative(a);
  if ((iVar1 != 0) || (iVar1 = BN_ucmp(a,(BIGNUM *)ossl_bignum_nist_p_384_sqr_1), -1 < iVar1)) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      iVar2 = BN_nnmod(r,a,(BIGNUM *)ossl_bignum_nist_p_384,ctx);
      return iVar2;
    }
    goto LAB_00101113;
  }
  iVar1 = BN_ucmp((BIGNUM *)ossl_bignum_nist_p_384,a);
  if (iVar1 == 0) {
    BN_zero_ex(r);
LAB_0010103b:
    uVar12 = 1;
  }
  else {
    if (iVar1 < 1) {
      rp = puVar9;
      if (a != r) {
        lVar4 = bn_wexpand(r,6);
        uVar12 = 0;
        if (lVar4 == 0) goto LAB_00101040;
        rp = r->d;
        lVar4 = 0;
        do {
          *(undefined8 *)((long)rp + lVar4) = *(undefined8 *)((long)puVar9 + lVar4);
          lVar4 = lVar4 + 8;
        } while (lVar4 != 0x30);
      }
      uVar12 = 0;
      if (iVar2 < 7) {
LAB_00100e03:
        uVar3 = (6 - uVar12) * 8;
        *(undefined8 *)((long)puVar5 + (ulong)uVar3 + (long)(int)uVar12 * 8 + -8) = 0;
        if (7 < uVar3 - 1) {
          uVar6 = 0;
          do {
            uVar10 = (int)uVar6 + 8;
            *(undefined8 *)((long)puVar5 + uVar6 + (long)(int)uVar12 * 8) = 0;
            uVar6 = (ulong)uVar10;
          } while (uVar10 < uVar3 - 8);
        }
      }
      else {
        uVar12 = iVar2 - 6;
        puVar5 = (uint *)memcpy(&local_a8,puVar9 + 6,(ulong)uVar12 << 3);
        if (uVar12 != 6) goto LAB_00100e03;
      }
      uVar6 = (ulong)local_a8;
      uVar18 = (ulong)local_84;
      uVar16 = (ulong)local_88;
      uVar15 = (ulong)local_7c;
      uVar17 = (ulong)local_80;
      uVar11 = (ulong)local_a0;
      lVar4 = ((uint)*rp + uVar6 + uVar18 + uVar16) - uVar15;
      *(int *)rp = (int)lVar4;
      uVar8 = (ulong)local_a4;
      lVar4 = (((ulong)*(uint *)((long)rp + 4) + (lVar4 >> 0x20) + uVar8 + uVar17 + uVar15) - uVar6)
              - uVar16;
      *(int *)((long)rp + 4) = (int)lVar4;
      lVar4 = (((lVar4 >> 0x20) + (ulong)(uint)rp[1] + uVar11 + uVar15) - uVar8) - uVar18;
      *(int *)(rp + 1) = (int)lVar4;
      uVar14 = (ulong)local_9c;
      lVar4 = ((((ulong)*(uint *)((long)rp + 0xc) + (lVar4 >> 0x20) + uVar14 + uVar6 + uVar16 +
                uVar18) - uVar11) - uVar17) - uVar15;
      *(int *)((long)rp + 0xc) = (int)lVar4;
      uVar13 = (ulong)local_98;
      lVar4 = (((lVar4 >> 0x20) + (ulong)(uint)rp[2] + uVar18 * 2 + uVar13 + uVar8 + uVar6 + uVar16
               + uVar17) - uVar14) + uVar15 * -2;
      *(int *)(rp + 2) = (int)lVar4;
      uVar6 = (ulong)local_94;
      lVar4 = (uVar8 + (lVar4 >> 0x20) + (ulong)*(uint *)((long)rp + 0x14) + uVar17 * 2 + uVar6 +
                       uVar11 + uVar18 + uVar15) - uVar13;
      *(int *)((long)rp + 0x14) = (int)lVar4;
      uVar8 = (ulong)local_90;
      lVar4 = (uVar11 + (ulong)(uint)rp[3] + (lVar4 >> 0x20) + uVar15 * 2 + uVar8 + uVar14 + uVar17)
              - uVar6;
      *(int *)(rp + 3) = (int)lVar4;
      uVar11 = (ulong)local_8c;
      lVar4 = (uVar14 + (lVar4 >> 0x20) + (ulong)*(uint *)((long)rp + 0x1c) + uVar11 + uVar13 +
              uVar15) - uVar8;
      *(int *)((long)rp + 0x1c) = (int)lVar4;
      lVar4 = (uVar13 + (lVar4 >> 0x20) + (ulong)(uint)rp[4] + uVar16 + uVar6) - uVar11;
      *(int *)(rp + 4) = (int)lVar4;
      lVar4 = (uVar6 + (ulong)*(uint *)((long)rp + 0x24) + (lVar4 >> 0x20) + uVar18 + uVar8) -
              uVar16;
      *(int *)((long)rp + 0x24) = (int)lVar4;
      lVar4 = (uVar8 + (lVar4 >> 0x20) + (ulong)(uint)rp[5] + uVar17 + uVar11) - uVar18;
      *(int *)(rp + 5) = (int)lVar4;
      lVar4 = (uVar11 + uVar16 + uVar15 + (ulong)*(uint *)((long)rp + 0x2c) + (lVar4 >> 0x20)) -
              uVar17;
      *(int *)((long)rp + 0x2c) = (int)lVar4;
      iVar2 = (int)((ulong)lVar4 >> 0x20);
      if (lVar4 >> 0x20 < 1) {
        if ((lVar4 >> 0x20 == 0) ||
           (uVar6 = bn_add_words(rp,rp,(ulong *)(_nist_p_384 + (iVar2 + 1U & 0x30)),6),
           (int)uVar6 != 0)) {
          bVar19 = false;
          goto LAB_00100fe8;
        }
        bn_add_words(local_78,rp,(ulong *)_nist_p_384,6);
LAB_0010100d:
        puVar9 = local_78;
      }
      else {
        uVar6 = bn_sub_words(rp,rp,(ulong *)(_nist_p_384 + (long)(iVar2 + -1) * 0x30),6);
        bVar19 = (int)uVar6 == 0;
LAB_00100fe8:
        uVar6 = bn_sub_words(local_78,rp,(ulong *)_nist_p_384,6);
        if ((uVar6 == 0) || (puVar9 = rp, bVar19)) goto LAB_0010100d;
      }
      lVar4 = 0;
      do {
        *(undefined8 *)((long)rp + lVar4) = *(undefined8 *)((long)puVar9 + lVar4);
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0x30);
      r->top = 6;
      bn_correct_top(r);
      goto LAB_0010103b;
    }
    if (a == r) goto LAB_0010103b;
    pBVar7 = BN_copy(r,a);
    uVar12 = (uint)(pBVar7 != (BIGNUM *)0x0);
  }
LAB_00101040:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar12;
  }
LAB_00101113:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

BIGNUM * BN_get0_nist_prime_192(void)

{
  return (BIGNUM *)ossl_bignum_nist_p_192;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

BIGNUM * BN_get0_nist_prime_224(void)

{
  return (BIGNUM *)ossl_bignum_nist_p_224;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

BIGNUM * BN_get0_nist_prime_256(void)

{
  return (BIGNUM *)ossl_bignum_nist_p_256;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

BIGNUM * BN_get0_nist_prime_384(void)

{
  return (BIGNUM *)ossl_bignum_nist_p_384;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

BIGNUM * BN_get0_nist_prime_521(void)

{
  return (BIGNUM *)ossl_bignum_nist_p_521;
}



code * BN_nist_mod_func(BIGNUM *param_1)

{
  int iVar1;
  
  iVar1 = BN_ucmp((BIGNUM *)ossl_bignum_nist_p_192,param_1);
  if (iVar1 == 0) {
    return BN_nist_mod_192;
  }
  iVar1 = BN_ucmp((BIGNUM *)ossl_bignum_nist_p_224,param_1);
  if (iVar1 == 0) {
    return BN_nist_mod_224;
  }
  iVar1 = BN_ucmp((BIGNUM *)ossl_bignum_nist_p_256,param_1);
  if (iVar1 == 0) {
    return BN_nist_mod_256;
  }
  iVar1 = BN_ucmp((BIGNUM *)ossl_bignum_nist_p_384,param_1);
  if (iVar1 != 0) {
    iVar1 = BN_ucmp((BIGNUM *)ossl_bignum_nist_p_521,param_1);
    if (iVar1 == 0) {
      return BN_nist_mod_521;
    }
    return (code *)0x0;
  }
  return BN_nist_mod_384;
}


