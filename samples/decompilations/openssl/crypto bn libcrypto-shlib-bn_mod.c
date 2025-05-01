
int BN_nnmod(BIGNUM *r,BIGNUM *m,BIGNUM *d,BN_CTX *ctx)

{
  int iVar1;
  code *pcVar2;
  
  if (r == d) {
    ERR_new();
    ERR_set_debug("crypto/bn/bn_mod.c",0x16,__func___2);
    ERR_set_error(3,0x80106,0);
  }
  else {
    iVar1 = BN_div((BIGNUM *)0x0,r,m,d,ctx);
    if (iVar1 != 0) {
      if (r->neg != 0) {
        if (d->neg == 0) {
          pcVar2 = BN_add;
        }
        else {
          pcVar2 = BN_sub;
        }
        iVar1 = (*pcVar2)(r,r,d);
        return iVar1;
      }
      return 1;
    }
  }
  return 0;
}



int BN_mod_add(BIGNUM *r,BIGNUM *a,BIGNUM *b,BIGNUM *m,BN_CTX *ctx)

{
  int iVar1;
  
  iVar1 = BN_add(r,a,b);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = BN_nnmod(r,r,m,ctx);
  return iVar1;
}



undefined8 bn_mod_add_fixed_top(undefined8 *param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  long lVar1;
  int num;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong *rp;
  long lVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long in_FS_OFFSET;
  ulong *local_f0;
  ulong local_c8 [17];
  long local_40;
  
  num = *(int *)(param_4 + 1);
  uVar17 = (ulong)num;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = bn_wexpand(param_1,uVar17);
  if (lVar4 == 0) {
LAB_00100310:
    uVar6 = 0;
  }
  else {
    local_f0 = local_c8;
    if (0x10 < uVar17) {
      local_f0 = (ulong *)CRYPTO_malloc(num * 8,"crypto/bn/bn_mod.c",0x42);
      if (local_f0 == (ulong *)0x0) goto LAB_00100310;
    }
    rp = (ulong *)*param_1;
    puVar9 = (ulong *)*param_4;
    puVar13 = (ulong *)*param_2;
    if ((ulong *)*param_2 == (ulong *)0x0) {
      puVar13 = local_f0;
    }
    puVar14 = (ulong *)*param_3;
    if ((ulong *)*param_3 == (ulong *)0x0) {
      puVar14 = local_f0;
    }
    if (uVar17 == 0) {
      bn_sub_words(rp,local_f0,puVar9,0);
    }
    else {
      lVar12 = (long)(int)param_2[1];
      lVar4 = param_3[1];
      iVar2 = *(int *)((long)param_3 + 0xc);
      iVar3 = *(int *)((long)param_2 + 0xc);
      uVar10 = 0;
      lVar5 = -lVar12;
      lVar7 = 0;
      lVar8 = 0;
      do {
        uVar15 = lVar5 >> 0x3f & puVar13[lVar8];
        uVar16 = uVar15 + uVar10;
        uVar11 = (lVar12 - (int)lVar4) + lVar5 >> 0x3f & puVar14[lVar7];
        local_f0[lVar12 + lVar5] = uVar11 + uVar16;
        uVar10 = (ulong)CARRY8(uVar15,uVar10) + (ulong)CARRY8(uVar11,uVar16);
        lVar8 = lVar8 - (((lVar12 + 1) - (long)iVar3) + lVar5 >> 0x3f);
        lVar1 = (lVar12 - iVar2) + 1 + lVar5;
        lVar5 = lVar5 + 1;
        lVar7 = lVar7 - (lVar1 >> 0x3f);
      } while (uVar17 - lVar12 != lVar5);
      uVar11 = bn_sub_words(rp,local_f0,puVar9,num);
      puVar9 = local_f0;
      do {
        puVar13 = puVar9 + 1;
        *rp = (*puVar9 ^ *rp) & uVar10 - uVar11 ^ *rp;
        *puVar9 = 0;
        rp = rp + 1;
        puVar9 = puVar13;
      } while (puVar13 != local_f0 + uVar17);
    }
    *(undefined4 *)(param_1 + 2) = 0;
    *(int *)(param_1 + 1) = num;
    if (local_f0 != local_c8) {
      CRYPTO_free(local_f0);
    }
    uVar6 = 1;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int BN_mod_add_quick(BIGNUM *r,BIGNUM *a,BIGNUM *b,BIGNUM *m)

{
  int iVar1;
  
  iVar1 = bn_mod_add_fixed_top();
  if (iVar1 == 0) {
    return iVar1;
  }
  bn_correct_top(r);
  return iVar1;
}



int BN_mod_sub(BIGNUM *r,BIGNUM *a,BIGNUM *b,BIGNUM *m,BN_CTX *ctx)

{
  int iVar1;
  
  iVar1 = BN_sub(r,a,b);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = BN_nnmod(r,r,m,ctx);
  return iVar1;
}



undefined8 bn_mod_sub_fixed_top(long *param_1,long *param_2,long *param_3,long *param_4)

{
  long lVar1;
  ulong *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  bool bVar21;
  
  lVar5 = param_4[1];
  lVar20 = (long)(int)lVar5;
  lVar6 = bn_wexpand(param_1,lVar20);
  if (lVar6 != 0) {
    lVar6 = *param_1;
    lVar12 = *param_2;
    if (*param_2 == 0) {
      lVar12 = lVar6;
    }
    lVar13 = *param_3;
    if (*param_3 == 0) {
      lVar13 = lVar6;
    }
    if (lVar20 != 0) {
      lVar18 = (long)(int)param_2[1];
      iVar3 = *(int *)((long)param_3 + 0xc);
      lVar15 = param_3[1];
      iVar4 = *(int *)((long)param_2 + 0xc);
      uVar19 = 0;
      lVar17 = 0;
      lVar7 = -lVar18;
      lVar16 = 0;
      do {
        uVar14 = lVar7 >> 0x3f & *(ulong *)(lVar12 + lVar16 * 8);
        uVar10 = (lVar18 - (int)lVar15) + lVar7 >> 0x3f & *(ulong *)(lVar13 + lVar17 * 8);
        *(ulong *)(lVar6 + lVar18 * 8 + lVar7 * 8) = (uVar14 - uVar19) - uVar10;
        if (uVar10 != uVar14) {
          uVar19 = (ulong)(uVar14 < uVar10);
        }
        lVar16 = lVar16 - (((lVar18 + 1) - (long)iVar4) + lVar7 >> 0x3f);
        lVar1 = (lVar18 - iVar3) + 1 + lVar7;
        lVar7 = lVar7 + 1;
        lVar17 = lVar17 - (lVar1 >> 0x3f);
      } while (lVar7 != lVar20 - lVar18);
      lVar12 = *param_4;
      uVar10 = 0;
      lVar13 = 0;
      do {
        lVar15 = lVar13;
        uVar8 = *(ulong *)(lVar12 + lVar15 * 8) & -uVar19;
        uVar9 = uVar8 + uVar10;
        puVar2 = (ulong *)(lVar6 + lVar15 * 8);
        uVar14 = *puVar2;
        *puVar2 = *puVar2 + uVar9;
        uVar10 = (ulong)CARRY8(uVar8,uVar10) + (ulong)CARRY8(uVar14,uVar9);
        lVar13 = lVar15 + 1;
      } while (lVar20 != lVar15 + 1);
      uVar14 = 0;
      lVar20 = 0;
      do {
        uVar9 = *(ulong *)(lVar12 + lVar20 * 8) & uVar10 - uVar19;
        uVar11 = uVar9 + uVar14;
        puVar2 = (ulong *)(lVar6 + lVar20 * 8);
        uVar8 = *puVar2;
        *puVar2 = *puVar2 + uVar11;
        uVar14 = (ulong)CARRY8(uVar9,uVar14) + (ulong)CARRY8(uVar8,uVar11);
        bVar21 = lVar15 != lVar20;
        lVar20 = lVar20 + 1;
      } while (bVar21);
    }
    *(undefined4 *)(param_1 + 2) = 0;
    *(int *)(param_1 + 1) = (int)lVar5;
    return 1;
  }
  return 0;
}



int BN_mod_sub_quick(BIGNUM *r,BIGNUM *a,BIGNUM *b,BIGNUM *m)

{
  int iVar1;
  
  if (r == m) {
    ERR_new();
    ERR_set_debug("crypto/bn/bn_mod.c",0xc2,"BN_mod_sub_quick");
    ERR_set_error(3,0x80106,0);
  }
  else {
    iVar1 = BN_sub(r,a,b);
    if (iVar1 != 0) {
      if (r->neg == 0) {
        return 1;
      }
      iVar1 = BN_add(r,r,m);
      return iVar1;
    }
  }
  return 0;
}



int BN_mod_mul(BIGNUM *r,BIGNUM *a,BIGNUM *b,BIGNUM *m,BN_CTX *ctx)

{
  int iVar1;
  BIGNUM *r_00;
  uint uVar2;
  
  BN_CTX_start(ctx);
  r_00 = BN_CTX_get(ctx);
  if (r_00 != (BIGNUM *)0x0) {
    if (a == b) {
      iVar1 = BN_sqr(r_00,a,ctx);
    }
    else {
      iVar1 = BN_mul(r_00,a,b,ctx);
    }
    if (iVar1 != 0) {
      iVar1 = BN_nnmod(r,r_00,m,ctx);
      uVar2 = (uint)(iVar1 != 0);
      goto LAB_0010067c;
    }
  }
  uVar2 = 0;
LAB_0010067c:
  BN_CTX_end(ctx);
  return uVar2;
}



int BN_mod_sqr(BIGNUM *r,BIGNUM *a,BIGNUM *m,BN_CTX *ctx)

{
  int iVar1;
  
  iVar1 = BN_sqr(r,a,ctx);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = BN_div((BIGNUM *)0x0,r,r,m,ctx);
  return iVar1;
}



int BN_mod_lshift1(BIGNUM *r,BIGNUM *a,BIGNUM *m,BN_CTX *ctx)

{
  int iVar1;
  
  iVar1 = BN_lshift1(r,a);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = BN_nnmod(r,r,m,ctx);
  return iVar1;
}



int BN_mod_lshift1_quick(BIGNUM *r,BIGNUM *a,BIGNUM *m)

{
  int iVar1;
  int iVar2;
  
  iVar1 = BN_lshift1(r,a);
  if (iVar1 != 0) {
    iVar2 = BN_cmp(r,m);
    iVar1 = 1;
    if (-1 < iVar2) {
      iVar1 = BN_sub(r,r,m);
      return iVar1;
    }
  }
  return iVar1;
}



int BN_mod_lshift_quick(BIGNUM *r,BIGNUM *a,int n,BIGNUM *m)

{
  int iVar1;
  int iVar2;
  BIGNUM *pBVar3;
  
  if ((r != a) && (pBVar3 = BN_copy(r,a), pBVar3 == (BIGNUM *)0x0)) {
    return 0;
  }
  do {
    if (n < 1) {
      return 1;
    }
    iVar1 = BN_num_bits(m);
    iVar2 = BN_num_bits(r);
    iVar1 = iVar1 - iVar2;
    if (iVar1 < 0) {
      ERR_new();
      ERR_set_debug("crypto/bn/bn_mod.c",0x133,"BN_mod_lshift_quick");
      ERR_set_error(3,0x6e,0);
      return 0;
    }
    if (n < iVar1) {
      iVar1 = n;
    }
    if (iVar1 == 0) {
      iVar1 = BN_lshift1(r,r);
      if (iVar1 == 0) {
        return 0;
      }
      n = n + -1;
    }
    else {
      iVar2 = BN_lshift(r,r,iVar1);
      if (iVar2 == 0) {
        return 0;
      }
      n = n - iVar1;
    }
    iVar1 = BN_cmp(r,m);
  } while ((iVar1 < 0) || (iVar1 = BN_sub(r,r,m), iVar1 != 0));
  return 0;
}



int BN_mod_lshift(BIGNUM *r,BIGNUM *a,int n,BIGNUM *m,BN_CTX *ctx)

{
  int iVar1;
  BIGNUM *a_00;
  
  iVar1 = BN_nnmod(r,a,m,ctx);
  if (iVar1 == 0) {
    return 0;
  }
  if (m->neg == 0) {
    a_00 = (BIGNUM *)0x0;
  }
  else {
    m = BN_dup(m);
    if (m == (BIGNUM *)0x0) {
      return 0;
    }
    m->neg = 0;
    a_00 = m;
  }
  iVar1 = BN_mod_lshift_quick(r,r,n,m);
  BN_free(a_00);
  return iVar1;
}


