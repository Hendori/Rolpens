
int BN_nist_mod_224(BIGNUM *r,BIGNUM *a,BIGNUM *p,BN_CTX *ctx)

{
  ulong *puVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  BIGNUM *pBVar7;
  ulong uVar8;
  ulong *puVar9;
  uint uVar10;
  uint uVar11;
  ulong *rp;
  ulong uVar12;
  byte bVar13;
  ulong uVar14;
  long in_FS_OFFSET;
  ulong uVar15;
  ulong uVar16;
  ulong auStack_90 [5];
  ulong local_68;
  ulong uStack_60;
  undefined1 local_58 [16];
  long local_40;
  
  iVar4 = a->top;
  puVar1 = a->d;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = BN_is_negative(a);
  if ((iVar3 != 0) || (iVar3 = BN_ucmp(a,(BIGNUM *)ossl_bignum_nist_p_224_sqr_3), -1 < iVar3)) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      iVar4 = BN_nnmod(r,a,(BIGNUM *)ossl_bignum_nist_p_224,ctx);
      return iVar4;
    }
    goto LAB_001004b8;
  }
  iVar3 = BN_ucmp((BIGNUM *)ossl_bignum_nist_p_224,a);
  if (iVar3 == 0) {
    BN_zero_ex(r);
LAB_00100361:
    uVar11 = 1;
  }
  else {
    if (iVar3 < 1) {
      rp = puVar1;
      if (a != r) {
        lVar6 = bn_wexpand(r,4);
        uVar11 = 0;
        if (lVar6 == 0) goto LAB_00100366;
        rp = r->d;
        if (rp == puVar1 + 1) {
          *rp = *puVar1;
          rp[1] = puVar1[1];
          rp[2] = puVar1[2];
          rp[3] = puVar1[3];
        }
        else {
          uVar8 = puVar1[1];
          *rp = *puVar1;
          rp[1] = uVar8;
          uVar8 = puVar1[3];
          rp[2] = puVar1[2];
          rp[3] = uVar8;
        }
      }
      uVar11 = iVar4 - 3;
      if (iVar4 < 4) {
        uVar11 = 0;
LAB_0010017d:
        uVar5 = (4 - uVar11) * 8;
        *(undefined8 *)((long)auStack_90 + (ulong)uVar5 + (long)(int)uVar11 * 8) = 0;
        if (7 < uVar5 - 1) {
          uVar8 = 0;
          do {
            uVar10 = (int)uVar8 + 8;
            *(undefined8 *)((long)auStack_90 + uVar8 + (long)(int)uVar11 * 8 + 8) = 0;
            uVar8 = (ulong)uVar10;
          } while (uVar10 < uVar5 - 8);
        }
      }
      else {
        if (iVar4 - 4U < 3) {
          auStack_90[1] = puVar1[3];
          if (uVar11 != 1) {
            auStack_90[2] = puVar1[4];
            if (uVar11 == 3) goto LAB_0010015b;
            uVar11 = 2;
          }
          goto LAB_0010017d;
        }
        if (auStack_90 + 1 == puVar1 + 4) {
          auStack_90[1] = puVar1[3];
          auStack_90[2] = puVar1[4];
LAB_0010015b:
          auStack_90[3] = puVar1[5];
          if (uVar11 == 3) goto LAB_0010017d;
          auStack_90[4] = puVar1[6];
        }
        else {
          auStack_90[1] = puVar1[3];
          auStack_90[2] = puVar1[4];
          auStack_90[3] = puVar1[5];
          auStack_90[4] = puVar1[6];
          if ((uVar11 & 1) != 0) {
            auStack_90[(long)(int)(uVar11 & 0xfffffffe) + 1] = puVar1[7];
          }
        }
        if (uVar11 != 4) goto LAB_0010017d;
      }
      uVar2 = auStack_90[4];
      puVar1 = auStack_90 + 1;
      local_68 = 0;
      uVar16 = auStack_90[2] << 0x20;
      uVar15 = auStack_90[1] >> 0x20;
      uVar8 = auStack_90[3] >> 0x20;
      uVar12 = auStack_90[4] << 0x20 | uVar8;
      auStack_90[0] = auStack_90[2] >> 0x20 | auStack_90[3] << 0x20;
      rp[3] = rp[3] & 0xffffffff;
      uVar14 = auStack_90[4] >> 0x20;
      uStack_60 = uVar15 << 0x20;
      local_58._8_8_ = auStack_90[3] & 0xffffffff;
      local_58._0_8_ = (auStack_90[2] >> 0x20) << 0x20 | auStack_90[2] & 0xffffffff;
      bn_add_words(rp,rp,&local_68,4);
      uStack_60 = uVar8 << 0x20;
      local_68 = 0;
      local_58._8_8_ = 0;
      local_58._0_8_ = uVar2;
      bn_add_words(rp,rp,&local_68,4);
      local_58._8_8_ = uVar14;
      local_58._0_8_ = uVar12;
      uStack_60 = auStack_90[0];
      local_68 = uVar15 | uVar16;
      bn_sub_words(rp,rp,&local_68,4);
      local_58 = (undefined1  [16])0x0;
      local_68 = uVar12;
      uStack_60 = uVar14;
      bn_sub_words(rp,rp,&local_68,4);
      uVar11 = *(uint *)((long)rp + 0x1c);
      if ((int)uVar11 < 1) {
        if ((uVar11 == 0) ||
           (uVar8 = bn_add_words(rp,rp,(ulong *)(_nist_p_224 + (long)(int)~uVar11 * 0x20),4),
           (int)uVar8 != 0)) {
          bVar13 = 0;
          goto LAB_00100310;
        }
        bn_add_words(puVar1,rp,(ulong *)_nist_p_224,4);
LAB_00100330:
        puVar9 = puVar1;
      }
      else {
        bn_sub_words(rp,rp,(ulong *)(_nist_p_224 + (long)(int)(uVar11 - 1) * 0x20),4);
        bVar13 = (byte)*(undefined4 *)((long)rp + 0x1c) & 1;
LAB_00100310:
        uVar8 = bn_sub_words(puVar1,rp,(ulong *)_nist_p_224,4);
        if ((uVar8 == 0) || (puVar9 = rp, bVar13 != 0)) goto LAB_00100330;
      }
      if (rp == puVar9 + 1) {
        uVar8 = *puVar9;
        puVar9[1] = uVar8;
        puVar9[2] = uVar8;
        puVar9[3] = uVar8;
        puVar9[4] = uVar8;
      }
      else {
        uVar8 = puVar9[1];
        *rp = *puVar9;
        rp[1] = uVar8;
        uVar8 = puVar9[3];
        rp[2] = puVar9[2];
        rp[3] = uVar8;
      }
      r->top = 4;
      bn_correct_top(r);
      goto LAB_00100361;
    }
    if (a == r) goto LAB_00100361;
    pBVar7 = BN_copy(r,a);
    uVar11 = (uint)(pBVar7 != (BIGNUM *)0x0);
  }
LAB_00100366:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar11;
  }
LAB_001004b8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int BN_nist_mod_521(BIGNUM *r,BIGNUM *a,BIGNUM *p,BN_CTX *ctx)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong *puVar4;
  BIGNUM *pBVar5;
  ulong uVar6;
  uint uVar7;
  ulong *rp;
  long in_FS_OFFSET;
  byte bVar8;
  ulong uVar9;
  ulong auStack_90 [4];
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong local_50;
  ulong uStack_48;
  long local_40;
  
  bVar8 = 0;
  iVar2 = a->top;
  puVar4 = a->d;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  auStack_90[0] = 0x10051a;
  iVar1 = BN_is_negative(a);
  if (iVar1 == 0) {
    auStack_90[0] = 0x10052f;
    iVar1 = BN_ucmp(a,(BIGNUM *)ossl_bignum_nist_p_521_sqr_0);
    if (iVar1 < 0) {
      auStack_90[0] = 0x10057f;
      iVar1 = BN_ucmp((BIGNUM *)ossl_bignum_nist_p_521,a);
      if (iVar1 == 0) {
        auStack_90[0] = 0x100838;
        BN_zero_ex(r);
LAB_001007d3:
        uVar7 = 1;
      }
      else {
        if (iVar1 < 1) {
          rp = puVar4;
          if (a != r) {
            auStack_90[0] = 0x1005a3;
            lVar3 = bn_wexpand(r,9);
            uVar7 = 0;
            if (lVar3 == 0) goto LAB_001007d8;
            rp = r->d;
            if (rp == puVar4 + 1) {
              *rp = *puVar4;
              rp[1] = puVar4[1];
              rp[2] = puVar4[2];
              rp[3] = puVar4[3];
              rp[4] = puVar4[4];
              rp[5] = puVar4[5];
              rp[6] = puVar4[6];
              rp[7] = puVar4[7];
              uVar6 = puVar4[8];
            }
            else {
              uVar6 = puVar4[1];
              *rp = *puVar4;
              rp[1] = uVar6;
              uVar6 = puVar4[3];
              rp[2] = puVar4[2];
              rp[3] = uVar6;
              uVar6 = puVar4[5];
              rp[4] = puVar4[4];
              rp[5] = uVar6;
              uVar6 = puVar4[7];
              rp[6] = puVar4[6];
              rp[7] = uVar6;
              uVar6 = puVar4[8];
            }
            rp[8] = uVar6;
          }
          uVar7 = iVar2 - 8;
          if (iVar2 < 9) {
            uVar7 = 0;
LAB_00100695:
            uVar6 = (ulong)(9 - uVar7) << 3;
            *(undefined8 *)((long)auStack_90 + (uVar6 & 0xffffffff) + (long)(int)uVar7 * 8) = 0;
            puVar4 = auStack_90 + (long)(int)uVar7 + 1;
            for (uVar6 = (ulong)((int)uVar6 - 1U >> 3); uVar6 != 0; uVar6 = uVar6 - 1) {
              *puVar4 = 0;
              puVar4 = puVar4 + (ulong)bVar8 * -2 + 1;
            }
          }
          else {
            if (iVar2 - 9U < 3) {
              auStack_90[1] = puVar4[8];
              if (uVar7 != 1) {
                auStack_90[2] = puVar4[9];
                if (uVar7 == 3) goto LAB_00100629;
                uVar7 = 2;
              }
              goto LAB_00100695;
            }
            if (auStack_90 + 1 == puVar4 + 9) {
              auStack_90[1] = puVar4[8];
              auStack_90[2] = puVar4[9];
LAB_00100629:
              auStack_90[3] = puVar4[10];
              if ((((uVar7 == 3) || (uStack_70 = puVar4[0xb], uVar7 == 4)) ||
                  (uStack_68 = puVar4[0xc], uVar7 == 5)) ||
                 (((uStack_60 = puVar4[0xd], uVar7 == 6 || (uStack_58 = puVar4[0xe], uVar7 == 7)) ||
                  (local_50 = puVar4[0xf], uVar7 == 8)))) goto LAB_00100695;
              uStack_48 = puVar4[0x10];
            }
            else {
              auStack_90[1] = puVar4[8];
              auStack_90[2] = puVar4[9];
              auStack_90[3] = puVar4[10];
              uStack_70 = puVar4[0xb];
              if (uVar7 >> 1 != 2) {
                uStack_68 = puVar4[0xc];
                uStack_60 = puVar4[0xd];
                if (uVar7 >> 1 != 3) {
                  uStack_58 = puVar4[0xe];
                  local_50 = puVar4[0xf];
                }
              }
              if ((uVar7 & 1) != 0) {
                auStack_90[(long)(int)(uVar7 & 0xfffffffe) + 1] =
                     puVar4[(ulong)(uVar7 & 0xfffffffe) + 8];
              }
            }
            if (uVar7 != 9) goto LAB_00100695;
          }
          uVar6 = uStack_70 << 0x37;
          uStack_70 = uStack_70 >> 9 | uStack_68 << 0x37;
          uVar9 = uStack_48 << 0x37;
          uStack_48 = uStack_48 >> 9;
          uStack_68 = uStack_68 >> 9 | uStack_60 << 0x37;
          uStack_60 = uStack_60 >> 9 | uStack_58 << 0x37;
          rp[8] = rp[8] & 0x1ff;
          uStack_58 = uStack_58 >> 9 | local_50 << 0x37;
          local_50 = local_50 >> 9 | uVar9;
          auStack_90[1] = auStack_90[1] >> 9 | auStack_90[2] << 0x37;
          auStack_90[2] = auStack_90[2] >> 9 | auStack_90[3] << 0x37;
          auStack_90[0] = 0x100769;
          auStack_90[3] = auStack_90[3] >> 9 | uVar6;
          bn_add_words(rp,rp,auStack_90 + 1,9);
          auStack_90[0] = 0x100780;
          uVar6 = bn_sub_words(auStack_90 + 1,rp,(ulong *)_nist_p_521,9);
          puVar4 = auStack_90 + 1;
          if (uVar6 != 0) {
            puVar4 = rp;
          }
          if (rp == puVar4 + 1) {
            uVar6 = *puVar4;
            puVar4[1] = uVar6;
            puVar4[2] = uVar6;
            puVar4[3] = uVar6;
            puVar4[4] = uVar6;
            puVar4[5] = uVar6;
            puVar4[6] = uVar6;
            puVar4[7] = uVar6;
            puVar4[8] = uVar6;
            puVar4[9] = uVar6;
          }
          else {
            uVar6 = puVar4[1];
            *rp = *puVar4;
            rp[1] = uVar6;
            uVar6 = puVar4[3];
            rp[2] = puVar4[2];
            rp[3] = uVar6;
            uVar6 = puVar4[5];
            rp[4] = puVar4[4];
            rp[5] = uVar6;
            uVar6 = puVar4[7];
            rp[6] = puVar4[6];
            rp[7] = uVar6;
            rp[8] = puVar4[8];
          }
          r->top = 9;
          auStack_90[0] = 0x1007d3;
          bn_correct_top(r);
          goto LAB_001007d3;
        }
        if (a == r) goto LAB_001007d3;
        auStack_90[0] = 0x100812;
        pBVar5 = BN_copy(r,a);
        uVar7 = (uint)(pBVar5 != (BIGNUM *)0x0);
      }
LAB_001007d8:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar7;
      }
      goto LAB_00100945;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    iVar2 = BN_nnmod(r,a,(BIGNUM *)ossl_bignum_nist_p_521,ctx);
    return iVar2;
  }
LAB_00100945:
                    /* WARNING: Subroutine does not return */
  auStack_90[0] = 0x10094a;
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
    goto LAB_00100c41;
  }
  iVar1 = BN_ucmp((BIGNUM *)ossl_bignum_nist_p_192,a);
  if (iVar1 == 0) {
    BN_zero_ex(r);
LAB_00100ba3:
    uVar10 = 1;
  }
  else {
    if (iVar1 < 1) {
      rp = puVar7;
      if (a != r) {
        lVar4 = bn_wexpand(r,3);
        uVar10 = 0;
        if (lVar4 == 0) goto LAB_00100ba8;
        rp = r->d;
        *rp = *puVar7;
        rp[1] = puVar7[1];
        rp[2] = puVar7[2];
      }
      uVar10 = 0;
      if (iVar2 < 4) {
LAB_00100a7e:
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
        if (uVar10 != 3) goto LAB_00100a7e;
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
      goto LAB_00100ba3;
    }
    if (a == r) goto LAB_00100ba3;
    pBVar8 = BN_copy(r,a);
    uVar10 = (uint)(pBVar8 != (BIGNUM *)0x0);
  }
LAB_00100ba8:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar10;
  }
LAB_00100c41:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int BN_nist_mod_256(BIGNUM *r,BIGNUM *a,BIGNUM *p,BN_CTX *ctx)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  BIGNUM *pBVar5;
  uint *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
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
  
  puVar6 = &local_88;
  iVar2 = a->top;
  puVar8 = a->d;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = BN_is_negative(a);
  if ((iVar1 != 0) || (iVar1 = BN_ucmp(a,(BIGNUM *)ossl_bignum_nist_p_256_sqr_2), -1 < iVar1)) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      iVar2 = BN_nnmod(r,a,(BIGNUM *)ossl_bignum_nist_p_256,ctx);
      return iVar2;
    }
    goto LAB_00101058;
  }
  iVar1 = BN_ucmp((BIGNUM *)ossl_bignum_nist_p_256,a);
  if (iVar1 == 0) {
    BN_zero_ex(r);
LAB_00100f66:
    uVar12 = 1;
  }
  else {
    if (iVar1 < 1) {
      rp = puVar8;
      if (a != r) {
        lVar4 = bn_wexpand(r,4);
        uVar12 = 0;
        if (lVar4 == 0) goto LAB_00100f6b;
        rp = r->d;
        if (rp == puVar8 + 1) {
          *rp = *puVar8;
          rp[1] = puVar8[1];
          rp[2] = puVar8[2];
          rp[3] = puVar8[3];
        }
        else {
          uVar7 = puVar8[1];
          *rp = *puVar8;
          rp[1] = uVar7;
          uVar7 = puVar8[3];
          rp[2] = puVar8[2];
          rp[3] = uVar7;
        }
      }
      uVar12 = 0;
      if (iVar2 < 5) {
LAB_00100d93:
        uVar3 = (4 - uVar12) * 8;
        *(undefined8 *)((long)puVar6 + (ulong)uVar3 + (long)(int)uVar12 * 8 + -8) = 0;
        if (7 < uVar3 - 1) {
          uVar7 = 0;
          do {
            uVar10 = (int)uVar7 + 8;
            *(undefined8 *)((long)puVar6 + uVar7 + (long)(int)uVar12 * 8) = 0;
            uVar7 = (ulong)uVar10;
          } while (uVar10 < uVar3 - 8);
        }
      }
      else {
        uVar12 = iVar2 - 4;
        puVar6 = (uint *)memcpy(&local_88,puVar8 + 4,(ulong)uVar12 << 3);
        if (uVar12 != 4) goto LAB_00100d93;
      }
      uVar7 = (ulong)local_88;
      uVar17 = (ulong)local_84;
      uVar14 = (ulong)local_7c;
      uVar13 = (ulong)local_78;
      uVar9 = (ulong)local_74;
      uVar11 = (ulong)local_70;
      uVar16 = (ulong)local_6c;
      lVar4 = (((((uint)*rp + uVar7 + uVar17) - uVar14) - uVar13) - uVar9) - uVar11;
      *(int *)rp = (int)lVar4;
      uVar15 = (ulong)local_80;
      lVar4 = (((((ulong)*(uint *)((long)rp + 4) + (lVar4 >> 0x20) + uVar17 + uVar15) - uVar13) -
               uVar9) - uVar11) - uVar16;
      *(int *)((long)rp + 4) = (int)lVar4;
      lVar4 = ((((lVar4 >> 0x20) + (ulong)(uint)rp[1] + uVar15 + uVar14) - uVar9) - uVar11) - uVar16
      ;
      *(int *)(rp + 1) = (int)lVar4;
      lVar4 = ((((lVar4 >> 0x20) + (ulong)*(uint *)((long)rp + 0xc) + uVar14 * 2 + uVar13 * 2 +
                uVar9) - uVar16) - uVar7) - uVar17;
      *(int *)((long)rp + 0xc) = (int)lVar4;
      lVar4 = (((lVar4 >> 0x20) + (ulong)(uint)rp[2] + uVar13 * 2 + uVar9 * 2 + uVar11) - uVar17) -
              uVar15;
      *(int *)(rp + 2) = (int)lVar4;
      lVar4 = (((lVar4 >> 0x20) + (ulong)*(uint *)((long)rp + 0x14) + uVar9 * 2 + uVar11 * 2 +
               uVar16) - uVar15) - uVar14;
      *(int *)((long)rp + 0x14) = (int)lVar4;
      lVar4 = (((lVar4 >> 0x20) + (ulong)(uint)rp[3] + uVar11 * 3 + uVar16 * 2 + uVar9) - uVar7) -
              uVar17;
      *(int *)(rp + 3) = (int)lVar4;
      lVar4 = ((((uVar7 + (lVar4 >> 0x20) + (ulong)*(uint *)((long)rp + 0x1c) + uVar16 * 3) - uVar15
                ) - uVar14) - uVar13) - uVar9;
      *(int *)((long)rp + 0x1c) = (int)lVar4;
      uVar12 = (uint)((ulong)lVar4 >> 0x20);
      if (lVar4 >> 0x20 < 1) {
        if ((lVar4 >> 0x20 == 0) ||
           (uVar7 = bn_add_words(rp,rp,(ulong *)(_nist_p_256 + (long)(int)~uVar12 * 0x20),4),
           (int)uVar7 != 0)) {
          bVar18 = false;
          goto LAB_00100f10;
        }
        bn_add_words(local_68,rp,(ulong *)_nist_p_256,4);
LAB_00100f35:
        puVar8 = local_68;
      }
      else {
        uVar7 = bn_sub_words(rp,rp,(ulong *)(_nist_p_256 + (long)(int)(uVar12 - 1) * 0x20),4);
        bVar18 = (int)uVar7 == 0;
LAB_00100f10:
        uVar7 = bn_sub_words(local_68,rp,(ulong *)_nist_p_256,4);
        if ((uVar7 == 0) || (puVar8 = rp, bVar18)) goto LAB_00100f35;
      }
      if (rp == puVar8 + 1) {
        uVar7 = *puVar8;
        puVar8[1] = uVar7;
        puVar8[2] = uVar7;
        puVar8[3] = uVar7;
        puVar8[4] = uVar7;
      }
      else {
        uVar7 = puVar8[1];
        *rp = *puVar8;
        rp[1] = uVar7;
        uVar7 = puVar8[3];
        rp[2] = puVar8[2];
        rp[3] = uVar7;
      }
      r->top = 4;
      bn_correct_top(r);
      goto LAB_00100f66;
    }
    if (a == r) goto LAB_00100f66;
    pBVar5 = BN_copy(r,a);
    uVar12 = (uint)(pBVar5 != (BIGNUM *)0x0);
  }
LAB_00100f6b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar12;
  }
LAB_00101058:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int BN_nist_mod_384(BIGNUM *r,BIGNUM *a,BIGNUM *p,BN_CTX *ctx)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  BIGNUM *pBVar5;
  uint *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
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
  
  puVar6 = &local_a8;
  iVar2 = a->top;
  puVar8 = a->d;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = BN_is_negative(a);
  if ((iVar1 != 0) || (iVar1 = BN_ucmp(a,(BIGNUM *)ossl_bignum_nist_p_384_sqr_1), -1 < iVar1)) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      iVar2 = BN_nnmod(r,a,(BIGNUM *)ossl_bignum_nist_p_384,ctx);
      return iVar2;
    }
    goto LAB_00101500;
  }
  iVar1 = BN_ucmp((BIGNUM *)ossl_bignum_nist_p_384,a);
  if (iVar1 == 0) {
    BN_zero_ex(r);
LAB_001013ef:
    uVar12 = 1;
  }
  else {
    if (iVar1 < 1) {
      rp = puVar8;
      if (a != r) {
        lVar4 = bn_wexpand(r,6);
        uVar12 = 0;
        if (lVar4 == 0) goto LAB_001013f4;
        rp = r->d;
        if (rp == puVar8 + 1) {
          *rp = *puVar8;
          rp[1] = puVar8[1];
          rp[2] = puVar8[2];
          rp[3] = puVar8[3];
          rp[4] = puVar8[4];
          rp[5] = puVar8[5];
        }
        else {
          uVar7 = puVar8[1];
          *rp = *puVar8;
          rp[1] = uVar7;
          uVar7 = puVar8[3];
          rp[2] = puVar8[2];
          rp[3] = uVar7;
          uVar7 = puVar8[5];
          rp[4] = puVar8[4];
          rp[5] = uVar7;
        }
      }
      uVar12 = 0;
      if (iVar2 < 7) {
LAB_001011ab:
        uVar3 = (6 - uVar12) * 8;
        *(undefined8 *)((long)puVar6 + (ulong)uVar3 + (long)(int)uVar12 * 8 + -8) = 0;
        if (7 < uVar3 - 1) {
          uVar7 = 0;
          do {
            uVar10 = (int)uVar7 + 8;
            *(undefined8 *)((long)puVar6 + uVar7 + (long)(int)uVar12 * 8) = 0;
            uVar7 = (ulong)uVar10;
          } while (uVar10 < uVar3 - 8);
        }
      }
      else {
        uVar12 = iVar2 - 6;
        puVar6 = (uint *)memcpy(&local_a8,puVar8 + 6,(ulong)uVar12 << 3);
        if (uVar12 != 6) goto LAB_001011ab;
      }
      uVar7 = (ulong)local_a8;
      uVar18 = (ulong)local_84;
      uVar16 = (ulong)local_88;
      uVar15 = (ulong)local_7c;
      uVar17 = (ulong)local_80;
      uVar11 = (ulong)local_a0;
      lVar4 = ((uint)*rp + uVar7 + uVar18 + uVar16) - uVar15;
      *(int *)rp = (int)lVar4;
      uVar9 = (ulong)local_a4;
      lVar4 = (((ulong)*(uint *)((long)rp + 4) + (lVar4 >> 0x20) + uVar9 + uVar17 + uVar15) - uVar7)
              - uVar16;
      *(int *)((long)rp + 4) = (int)lVar4;
      lVar4 = (((lVar4 >> 0x20) + (ulong)(uint)rp[1] + uVar11 + uVar15) - uVar9) - uVar18;
      *(int *)(rp + 1) = (int)lVar4;
      uVar14 = (ulong)local_9c;
      lVar4 = ((((ulong)*(uint *)((long)rp + 0xc) + (lVar4 >> 0x20) + uVar14 + uVar7 + uVar16 +
                uVar18) - uVar11) - uVar17) - uVar15;
      *(int *)((long)rp + 0xc) = (int)lVar4;
      uVar13 = (ulong)local_98;
      lVar4 = (((lVar4 >> 0x20) + (ulong)(uint)rp[2] + uVar18 * 2 + uVar13 + uVar9 + uVar7 + uVar16
               + uVar17) - uVar14) + uVar15 * -2;
      *(int *)(rp + 2) = (int)lVar4;
      uVar7 = (ulong)local_94;
      lVar4 = (uVar9 + (lVar4 >> 0x20) + (ulong)*(uint *)((long)rp + 0x14) + uVar17 * 2 + uVar7 +
                       uVar11 + uVar18 + uVar15) - uVar13;
      *(int *)((long)rp + 0x14) = (int)lVar4;
      uVar9 = (ulong)local_90;
      lVar4 = (uVar11 + (ulong)(uint)rp[3] + (lVar4 >> 0x20) + uVar15 * 2 + uVar9 + uVar14 + uVar17)
              - uVar7;
      *(int *)(rp + 3) = (int)lVar4;
      uVar11 = (ulong)local_8c;
      lVar4 = (uVar14 + (lVar4 >> 0x20) + (ulong)*(uint *)((long)rp + 0x1c) + uVar11 + uVar13 +
              uVar15) - uVar9;
      *(int *)((long)rp + 0x1c) = (int)lVar4;
      lVar4 = (uVar13 + (lVar4 >> 0x20) + (ulong)(uint)rp[4] + uVar16 + uVar7) - uVar11;
      *(int *)(rp + 4) = (int)lVar4;
      lVar4 = (uVar7 + (ulong)*(uint *)((long)rp + 0x24) + (lVar4 >> 0x20) + uVar18 + uVar9) -
              uVar16;
      *(int *)((long)rp + 0x24) = (int)lVar4;
      lVar4 = (uVar9 + (lVar4 >> 0x20) + (ulong)(uint)rp[5] + uVar17 + uVar11) - uVar18;
      *(int *)(rp + 5) = (int)lVar4;
      lVar4 = (uVar11 + uVar16 + uVar15 + (ulong)*(uint *)((long)rp + 0x2c) + (lVar4 >> 0x20)) -
              uVar17;
      *(int *)((long)rp + 0x2c) = (int)lVar4;
      iVar2 = (int)((ulong)lVar4 >> 0x20);
      if (lVar4 >> 0x20 < 1) {
        if ((lVar4 >> 0x20 == 0) ||
           (uVar7 = bn_add_words(rp,rp,(ulong *)(_nist_p_384 + (iVar2 + 1U & 0x30)),6),
           (int)uVar7 != 0)) {
          bVar19 = false;
          goto LAB_00101390;
        }
        bn_add_words(local_78,rp,(ulong *)_nist_p_384,6);
LAB_001013b5:
        puVar8 = local_78;
      }
      else {
        uVar7 = bn_sub_words(rp,rp,(ulong *)(_nist_p_384 + (long)(iVar2 + -1) * 0x30),6);
        bVar19 = (int)uVar7 == 0;
LAB_00101390:
        uVar7 = bn_sub_words(local_78,rp,(ulong *)_nist_p_384,6);
        if ((uVar7 == 0) || (puVar8 = rp, bVar19)) goto LAB_001013b5;
      }
      if (rp == puVar8 + 1) {
        uVar7 = *puVar8;
        puVar8[1] = uVar7;
        puVar8[2] = uVar7;
        puVar8[3] = uVar7;
        puVar8[4] = uVar7;
        puVar8[5] = uVar7;
        puVar8[6] = uVar7;
      }
      else {
        uVar7 = puVar8[1];
        *rp = *puVar8;
        rp[1] = uVar7;
        uVar7 = puVar8[3];
        rp[2] = puVar8[2];
        rp[3] = uVar7;
        uVar7 = puVar8[5];
        rp[4] = puVar8[4];
        rp[5] = uVar7;
      }
      r->top = 6;
      bn_correct_top(r);
      goto LAB_001013ef;
    }
    if (a == r) goto LAB_001013ef;
    pBVar5 = BN_copy(r,a);
    uVar12 = (uint)(pBVar5 != (BIGNUM *)0x0);
  }
LAB_001013f4:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar12;
  }
LAB_00101500:
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


