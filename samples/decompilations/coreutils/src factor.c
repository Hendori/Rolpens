
/* WARNING: Unknown calling convention */

void factor_insert_multiplicity(factors *factors,uintmax_t prime,int m)

{
  byte bVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  uintmax_t *puVar5;
  ulong uVar6;
  uchar *puVar7;
  
  bVar1 = factors->nfactors;
  puVar7 = factors->e;
  puVar5 = factors->p;
  if (bVar1 != 0) {
    uVar2 = (ulong)(int)(bVar1 - 1);
    uVar4 = uVar2;
    do {
      if (factors->p[uVar4] <= prime) {
        iVar3 = (int)uVar4;
        uVar6 = uVar4 & 0xffffffff;
        if (factors->p[iVar3] == prime) {
          puVar7[iVar3] = puVar7[iVar3] + (uchar)m;
          return;
        }
        puVar5 = factors->p + (long)iVar3 + 1;
        puVar7 = puVar7 + (iVar3 + 1);
        if ((int)(bVar1 - 1) <= iVar3) goto LAB_00100099;
        break;
      }
      uVar4 = uVar4 - 1;
      uVar6 = uVar4 & 0xffffffff;
    } while ((int)uVar4 != -1);
    do {
      factors->p[uVar2 + 1] = factors->p[uVar2];
      factors->e[uVar2 + 1] = factors->e[uVar2];
      uVar2 = uVar2 - 1;
    } while ((int)uVar6 < (int)uVar2);
  }
LAB_00100099:
  *puVar5 = prime;
  *puVar7 = (uchar)m;
  factors->nfactors = bVar1 + 1;
  return;
}



/* WARNING: Unknown calling convention */

uintmax_t powm(uintmax_t b,uintmax_t e,uintmax_t n,uintmax_t ni,uintmax_t one)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulong uVar9;
  ulong uVar10;
  uintmax_t uVar11;
  
  uVar11 = b;
  if ((e & 1) == 0) goto LAB_00100120;
  do {
    while( true ) {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = b;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = b;
      uVar9 = SUB168(auVar1 * auVar5,8);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = SUB168(auVar1 * auVar5,0) * ni;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = n;
      uVar10 = SUB168(auVar2 * auVar6,8);
      b = uVar9 - uVar10;
      if (uVar9 < uVar10) {
        b = b + n;
      }
      e = e >> 1;
      one = uVar11;
      if ((e & 1) == 0) break;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar11;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = b;
      uVar9 = SUB168(auVar3 * auVar7,8);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = SUB168(auVar3 * auVar7,0) * ni;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = n;
      uVar10 = SUB168(auVar4 * auVar8,8);
      uVar11 = uVar9 - uVar10;
      if (uVar9 < uVar10) {
        uVar11 = uVar11 + n;
      }
    }
LAB_00100120:
    uVar11 = one;
  } while (e != 0);
  return one;
}



/* WARNING: Unknown calling convention */

_Bool millerrabin(uintmax_t n,uintmax_t ni,uintmax_t b,uintmax_t q,int k,uintmax_t one)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  bool bVar5;
  uintmax_t uVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  uintmax_t uVar10;
  
  uVar6 = powm(b,q,n,ni,one);
  uVar10 = n - one;
  bVar5 = one == uVar6 || uVar6 == uVar10;
  if ((one != uVar6 && uVar6 != uVar10) && (1 < k)) {
    iVar9 = 1;
    while( true ) {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar6;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar6;
      uVar7 = SUB168(auVar1 * auVar3,8);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = SUB168(auVar1 * auVar3,0) * ni;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = n;
      uVar8 = SUB168(auVar2 * auVar4,8);
      uVar6 = uVar7 - uVar8;
      if (uVar7 < uVar8) {
        uVar6 = uVar6 + n;
      }
      if (uVar10 == uVar6) break;
      if (one == uVar6) {
        return bVar5;
      }
      iVar9 = iVar9 + 1;
      if (k == iVar9) {
        return bVar5;
      }
    }
    bVar5 = true;
  }
  return bVar5;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void write_error(void)

{
  int iVar1;
  idx_t iVar2;
  int *piVar3;
  undefined8 uVar4;
  long lVar5;
  
  piVar3 = __errno_location();
  iVar1 = *piVar3;
  fflush_unlocked(_stdout);
  fpurge(_stdout);
  clearerr_unlocked(_stdout);
  uVar4 = dcgettext(0,"write error",5);
  error(1,iVar1,uVar4);
  iVar2 = lbuffered;
  lbuffered = 0;
  lVar5 = full_write(1,lbuf_buf,iVar2);
  if (lVar5 == iVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  write_error();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void lbuf_flush(void)

{
  idx_t iVar1;
  long lVar2;
  
  iVar1 = lbuffered;
  lbuffered = 0;
  lVar2 = full_write(1,lbuf_buf,iVar1);
  if (lVar2 == iVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  write_error();
}



/* WARNING: Unknown calling convention */

uintmax_t gcd_odd(uintmax_t a,uintmax_t b)

{
  ulong uVar1;
  byte bVar2;
  uintmax_t uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar3 = b;
  if ((b & 1) != 0) {
    uVar3 = a;
    a = b;
  }
  if (uVar3 == 0) {
    return a;
  }
  uVar5 = a >> 1;
  bVar2 = 0;
  for (uVar1 = uVar3; (uVar1 & 1) == 0; uVar1 = uVar1 >> 1 | 0x8000000000000000) {
    bVar2 = bVar2 + 1;
  }
  while( true ) {
    uVar1 = uVar3 >> (bVar2 & 0x3f);
    uVar4 = (uVar1 >> 1) - uVar5;
    if (uVar4 == 0) break;
    uVar1 = (long)uVar4 >> 0x3f;
    uVar5 = uVar5 + (uVar1 & uVar4);
    bVar2 = 0;
    uVar3 = (uVar4 ^ uVar1) - uVar1;
    for (uVar1 = uVar3; (uVar1 & 1) == 0; uVar1 = uVar1 >> 1 | 0x8000000000000000) {
      bVar2 = bVar2 + 1;
    }
  }
  return uVar1 | 1;
}



/* WARNING: Removing unreachable block (ram,0x001003d2) */
/* WARNING: Unknown calling convention */

uintmax_t mulredc2(uintmax_t *r1p,uintmax_t a1,uintmax_t a0,uintmax_t b1,uintmax_t b0,uintmax_t m1,
                  uintmax_t m0,uintmax_t mi)

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
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  
  auVar21._8_8_ = m1;
  auVar21._0_8_ = m0;
  if ((long)a1 < 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("(a1 >> (64 - 1)) == 0","src/factor.c",0x3d2,"mulredc2");
  }
  if (-1 < (long)b1) {
    if (-1 < (long)m1) {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = a0;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = b0;
      uVar24 = SUB168(auVar1 * auVar9,8);
      lVar22 = SUB168(auVar1 * auVar9,0);
      uVar26 = -mi * lVar22;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = a0;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = b1;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar26;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = m0;
      uVar25 = SUB168(auVar3 * auVar11,8);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar26;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = m1;
      uVar26 = (SUB168(auVar2 * auVar10,0) + 1) - (ulong)(lVar22 == 0);
      uVar23 = uVar26 + uVar25;
      auVar17._8_8_ =
           SUB168(auVar2 * auVar10,8) + (ulong)CARRY8(uVar26,uVar25) + (ulong)CARRY8(uVar23,uVar24);
      auVar17._0_8_ = uVar23 + uVar24;
      auVar17 = auVar4 * auVar12 + auVar17;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = auVar17._0_8_;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = auVar17._8_8_;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = a1;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = b0;
      auVar19 = auVar5 * auVar13 + auVar19;
      lVar22 = auVar19._0_8_;
      uVar25 = auVar19._8_8_;
      uVar26 = -mi * lVar22;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = a1;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = b1;
      auVar20 = auVar6 * auVar14 + auVar20;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar26;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = m0;
      uVar24 = SUB168(auVar7 * auVar15,8);
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar26;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = m1;
      uVar26 = (auVar20._0_8_ + 1) - (ulong)(lVar22 == 0);
      uVar23 = uVar26 + uVar24;
      auVar18._8_8_ = auVar20._8_8_ + (ulong)CARRY8(uVar26,uVar24) + (ulong)CARRY8(uVar23,uVar25);
      auVar18._0_8_ = uVar23 + uVar25;
      auVar18 = auVar8 * auVar16 + auVar18;
      if (auVar21 <= auVar18) {
        auVar18 = auVar18 - auVar21;
      }
      *r1p = auVar18._8_8_;
      return auVar18._0_8_;
    }
                    /* WARNING: Subroutine does not return */
    __assert_fail("(m1 >> (64 - 1)) == 0","src/factor.c",0x3d4,"mulredc2");
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("(b1 >> (64 - 1)) == 0","src/factor.c",0x3d3,"mulredc2");
}



/* WARNING: Unknown calling convention */

uuint powm2(uintmax_t *bp,uintmax_t *ep,uintmax_t *np,uintmax_t ni,uintmax_t *one)

{
  uintmax_t m0;
  uintmax_t m1;
  uintmax_t b0;
  uintmax_t uVar1;
  int iVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  uuint uVar4;
  uintmax_t local_70;
  uintmax_t local_68;
  uintmax_t r1m;
  long local_40;
  
  local_68 = *one;
  local_70 = one[1];
  b0 = *bp;
  m0 = *np;
  m1 = np[1];
  uVar3 = *ep;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = 0x40;
  uVar1 = bp[1];
  do {
    if ((uVar3 & 1) != 0) {
      local_68 = mulredc2(&r1m,local_70,local_68,uVar1,b0,m1,m0,ni);
      local_70 = r1m;
    }
    uVar3 = uVar3 >> 1;
    b0 = mulredc2(&r1m,uVar1,b0,uVar1,b0,m1,m0,ni);
    iVar2 = iVar2 + -1;
    uVar1 = r1m;
  } while (iVar2 != 0);
  for (uVar3 = ep[1]; uVar3 != 0; uVar3 = uVar3 >> 1) {
    r1m = uVar1;
    if ((uVar3 & 1) != 0) {
      local_68 = mulredc2(&r1m,local_70,local_68,uVar1,b0,m1,m0,ni);
      local_70 = r1m;
    }
    b0 = mulredc2(&r1m,uVar1,b0,uVar1,b0,m1,m0,ni);
    uVar1 = r1m;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    uVar4.uu[1] = local_70;
    uVar4.uu[0] = local_68;
    return (uuint)uVar4.uu;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

_Bool millerrabin2(uintmax_t *np,uintmax_t ni,uintmax_t *bp,uintmax_t *qp,int k,uintmax_t *one)

{
  ulong uVar1;
  uintmax_t uVar2;
  uintmax_t m1;
  ulong m0;
  uintmax_t auVar3 [2];
  uintmax_t uVar4;
  int iVar5;
  _Bool _Var6;
  uintmax_t uVar7;
  long in_FS_OFFSET;
  uuint uVar8;
  uintmax_t r1m;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = powm2(bp,qp,np,ni,one);
  uVar1 = *one;
  uVar2 = one[1];
  if (uVar8.uu != *(uintmax_t (*) [2])one) {
    m1 = np[1];
    m0 = *np;
    uVar7 = (m1 - uVar2) - (ulong)(m0 < uVar1);
    auVar3[1] = uVar7;
    auVar3[0] = m0 - uVar1;
    _Var6 = uVar8.uu == auVar3;
    if (!_Var6) {
      iVar5 = 1;
      if (1 < k) {
        do {
          uVar4 = mulredc2(&r1m,uVar8.uu[1],uVar8.uu[0],uVar8.uu[1],uVar8.uu[0],m1,m0,ni);
          uVar8.uu[1] = r1m;
          uVar8.uu[0] = uVar4;
          if ((r1m == uVar7) && (uVar4 == m0 - uVar1)) goto LAB_001006f1;
        } while (((r1m != uVar2) || (uVar1 != uVar4)) && (iVar5 = iVar5 + 1, k != iVar5));
      }
      goto LAB_001006c2;
    }
  }
LAB_001006f1:
  _Var6 = true;
LAB_001006c2:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return _Var6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

uuint mod2(uintmax_t a1,uintmax_t a0,uintmax_t d1,uintmax_t d0)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  byte bVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  uuint uVar9;
  
  if (d1 != 0) {
    if (a1 != 0) {
      lVar1 = 0x3f;
      if (d1 != 0) {
        for (; d1 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      lVar2 = 0x3f;
      if (a1 != 0) {
        for (; a1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar7 = ((uint)lVar1 ^ 0x3f) - ((uint)lVar2 ^ 0x3f);
      if (0 < iVar7) {
        bVar4 = (byte)iVar7;
        uVar3 = d0 << (bVar4 & 0x3f);
        uVar5 = d0 >> (0x40 - bVar4 & 0x3f) | d1 << (bVar4 & 0x3f);
        iVar6 = 0;
        do {
          if ((uVar5 < a1) || ((a1 == uVar5 && (uVar3 <= a0)))) {
            bVar8 = a0 < uVar3;
            a0 = a0 - uVar3;
            a1 = (a1 - uVar5) - (ulong)bVar8;
          }
          iVar6 = iVar6 + 1;
          uVar3 = uVar3 >> 1 | uVar5 << 0x3f;
          uVar5 = uVar5 >> 1;
        } while (iVar7 != iVar6);
      }
    }
    uVar9.uu[1] = a1;
    uVar9.uu[0] = a0;
    return (uuint)uVar9.uu;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("d1 != 0","src/factor.c",0x191,"mod2");
}



/* WARNING: Unknown calling convention */

_Bool mp_millerrabin(mpz_srcptr n,mpz_srcptr nm1,mpz_ptr x,mpz_ptr y,mpz_srcptr q,mp_bitcnt_t k)

{
  int iVar1;
  mp_bitcnt_t mVar2;
  
  mpz_powm(y,x,q,n);
  iVar1 = mpz_cmp_ui(y,1);
  if ((iVar1 != 0) && (iVar1 = mpz_cmp(y,nm1), iVar1 != 0)) {
    mVar2 = 1;
    if (1 < k) {
      do {
        mpz_powm_ui(y,y,2,n);
        iVar1 = mpz_cmp(y,nm1);
        if (iVar1 == 0) {
          return true;
        }
        iVar1 = mpz_cmp_ui(y,1);
      } while ((iVar1 != 0) && (mVar2 = mVar2 + 1, k != mVar2));
    }
    return false;
  }
  return true;
}



/* WARNING: Unknown calling convention */

void mpz_va_init(_func_void___mpz_struct_ptr *mpz_single_init,...)

{
  long lVar1;
  __mpz_struct *p_Var2;
  ulong uVar3;
  undefined8 in_RCX;
  undefined8 in_RDX;
  undefined8 in_RSI;
  undefined8 in_R8;
  undefined8 in_R9;
  long in_FS_OFFSET;
  va_list ap;
  undefined8 local_38 [4];
  undefined8 local_18;
  undefined8 local_10;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  ap[0].overflow_arg_area = &stack0x00000008;
  ap[0].gp_offset = 8;
  local_38[1] = in_RSI;
  local_38[2] = in_RDX;
  local_38[3] = in_RCX;
  local_18 = in_R8;
  local_10 = in_R9;
  while( true ) {
    uVar3 = (ulong)ap[0].gp_offset;
    if (ap[0].gp_offset < 0x30) {
      ap[0].gp_offset = ap[0].gp_offset + 8;
      p_Var2 = *(__mpz_struct **)((long)local_38 + uVar3);
    }
    else {
                    /* WARNING: Load size is inaccurate */
      p_Var2 = *ap[0].overflow_arg_area;
      ap[0].overflow_arg_area = (void *)((long)ap[0].overflow_arg_area + 8);
    }
    if (p_Var2 == (__mpz_struct *)0x0) break;
    (*mpz_single_init)(p_Var2);
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Unknown calling convention */

void mp_factor_insert(mp_factors *factors,__mpz_struct *prime)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong *puVar4;
  long lVar5;
  mpz_t *pa_Var6;
  mpz_t *local_58;
  long local_48;
  
  lVar1 = factors->nfactors;
  local_58 = factors->p;
  puVar4 = factors->e;
  lVar3 = lVar1 + -1;
  lVar5 = lVar3;
  if (lVar3 < 0) {
    local_48 = lVar3;
    if (lVar1 != factors->nalloc) {
      mpz_init(local_58 + lVar1);
      goto LAB_00100a02;
    }
LAB_00100a93:
    local_58 = (mpz_t *)xpalloc(local_58,&factors->nalloc,1,0xffffffffffffffff,0x10);
    puVar4 = (ulong *)xireallocarray(puVar4,factors->nalloc,8);
LAB_00100a5a:
    pa_Var6 = local_58 + lVar1;
    mpz_init(pa_Var6);
    if (lVar3 <= lVar5) goto LAB_00100a02;
  }
  else {
    pa_Var6 = local_58 + lVar3;
    do {
      iVar2 = mpz_cmp(pa_Var6,prime);
      if (iVar2 < 1) {
        iVar2 = mpz_cmp(local_58 + lVar5,prime);
        if (iVar2 == 0) {
          puVar4[lVar5] = puVar4[lVar5] + 1;
          return;
        }
        local_48 = lVar5;
        if (factors->nfactors == factors->nalloc) goto LAB_00100a93;
        goto LAB_00100a5a;
      }
      lVar5 = lVar5 + -1;
      pa_Var6 = pa_Var6 + -1;
    } while (lVar5 != -1);
    if (factors->nfactors == factors->nalloc) {
      local_48 = -1;
      goto LAB_00100a93;
    }
    pa_Var6 = local_58 + lVar1;
    mpz_init(pa_Var6);
    local_48 = -1;
  }
  do {
    mpz_set(pa_Var6,pa_Var6 + -1);
    puVar4[lVar3 + 1] = puVar4[lVar3];
    lVar3 = lVar3 + -1;
    pa_Var6 = pa_Var6 + -1;
  } while (lVar5 != lVar3);
LAB_00100a02:
  mpz_set(local_58 + local_48 + 1,prime);
  puVar4[local_48 + 1] = 1;
  factors->p = local_58;
  factors->e = puVar4;
  factors->nfactors = lVar1 + 1;
  return;
}



void factor_insert_large(factors *factors,uintmax_t p1,uintmax_t p0)

{
                    /* WARNING: Subroutine does not return */
  __assert_fail("hi (factors->plarge) == 0","src/factor.c",0x225,"factor_insert_large");
}



/* WARNING: Unknown calling convention */

uuint gcd2_odd(uintmax_t a1,uintmax_t a0,uintmax_t b1,uintmax_t b0)

{
  int iVar1;
  ulong b;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  uuint uVar5;
  uuint uVar6;
  
  b = a1;
  if (a0 != 0) {
    b = a0;
    a0 = a1;
  }
  iVar1 = 0;
  for (uVar3 = b; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x8000000000000000) {
    iVar1 = iVar1 + 1;
  }
  if (iVar1 != 0) {
    bVar2 = (byte)iVar1;
    b = b >> (bVar2 & 0x3f) | a0 << (0x40 - bVar2 & 0x3f);
    a0 = a0 >> (bVar2 & 0x3f);
  }
  if (a0 != 0 || b1 != 0) {
    do {
      while ((b1 < a0 || ((b0 < b && (b1 == a0))))) {
        uVar3 = b - b0;
        uVar4 = (a0 - b1) - (ulong)(b < b0);
        b = uVar3;
        a0 = uVar4;
        if (uVar3 == 0) {
          a0 = 0;
          b = uVar4;
        }
        iVar1 = 0;
        for (uVar3 = b; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x8000000000000000) {
          iVar1 = iVar1 + 1;
        }
        if (iVar1 != 0) {
          bVar2 = (byte)iVar1;
          b = b >> (bVar2 & 0x3f) | a0 << (-bVar2 & 0x3f);
          a0 = a0 >> (bVar2 & 0x3f);
        }
LAB_00100bb9:
        if (a0 == 0 && b1 == 0) goto LAB_00100c28;
      }
      if ((b1 <= a0) && ((b0 <= b || (b1 != a0)))) {
        uVar6.uu[1] = a0;
        uVar6.uu[0] = b;
        return (uuint)uVar6.uu;
      }
      uVar3 = b0 - b;
      uVar4 = (b1 - a0) - (ulong)(b0 < b);
      b0 = uVar3;
      b1 = uVar4;
      if (uVar3 == 0) {
        b1 = 0;
        b0 = uVar4;
      }
      iVar1 = 0;
      for (uVar3 = b0; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x8000000000000000) {
        iVar1 = iVar1 + 1;
      }
      if (iVar1 == 0) goto LAB_00100bb9;
      bVar2 = (byte)iVar1;
      uVar3 = b1 << (-bVar2 & 0x3f);
      b1 = b1 >> (bVar2 & 0x3f);
      b0 = b0 >> (bVar2 & 0x3f) | uVar3;
    } while (a0 != 0 || b1 != 0);
  }
LAB_00100c28:
  uVar5.uu[0] = gcd_odd(b0,b);
  uVar5.uu[1] = 0;
  return (uuint)uVar5.uu;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void lbuf_half_flush(void)

{
  idx_t iVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  
  pvVar2 = memrchr(lbuf_buf,10,0x1000);
  iVar1 = lbuffered;
  if (pvVar2 == (void *)0x0) {
    lVar4 = 0x1000;
    pcVar5 = lbuf_buf + 0x1000;
  }
  else {
    pcVar5 = (char *)((long)pvVar2 + 1);
    lVar4 = (long)pvVar2 + -0x103cdf;
  }
  lbuffered = 0;
  lVar3 = full_write(1,lbuf_buf,lVar4);
  if (lVar4 == lVar3) {
    lbuffered = iVar1 - lVar4;
    __memmove_chk(lbuf_buf,pcVar5,iVar1 - lVar4,0x2000);
    return;
  }
                    /* WARNING: Subroutine does not return */
  write_error();
}



void print_uuint(uuint t)

{
  _Bool *p_Var1;
  ulong uVar2;
  ulong uVar3;
  _Bool *p_Var4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  _Bool *p_Var9;
  char *pcVar10;
  ulong uVar11;
  _Bool *p_Var12;
  int iVar13;
  bool bVar14;
  
  uVar7 = t.uu[1];
  uVar11 = t.uu[0];
  if (uVar7 == 0) {
    p_Var4 = &dev_debug;
  }
  else {
    uVar2 = uVar11;
    p_Var4 = (_Bool *)(lbuf_buf + 0x1fed);
    while( true ) {
      iVar13 = 0x40;
      p_Var12 = p_Var4 + 0x13;
      uVar11 = 0;
      uVar8 = 0;
      uVar3 = 10000000000000000000;
      uVar5 = uVar7 + (ulong)(9999999999999999999 < uVar7) * 0x7538dcfb76180000;
      do {
        uVar8 = uVar8 >> 1 | uVar3 << 0x3f;
        uVar3 = uVar3 >> 1;
        uVar11 = uVar11 * 2;
        if ((uVar3 < uVar5) || ((uVar3 == uVar5 && (uVar8 <= uVar2)))) {
          uVar11 = uVar11 + 1;
          bVar14 = uVar2 < uVar8;
          uVar2 = uVar2 - uVar8;
          uVar5 = (uVar5 - uVar3) - (ulong)bVar14;
        }
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
      do {
        p_Var12 = p_Var12 + -1;
        *p_Var12 = (_Bool)((char)uVar2 + (char)(uVar2 / 10) * -10 + '0');
        uVar2 = uVar2 / 10;
      } while (p_Var12 != p_Var4);
      if (uVar7 < 10000000000000000000) break;
      uVar7 = 1;
      uVar2 = uVar11;
      p_Var4 = p_Var4 + -0x13;
    }
  }
  do {
    p_Var12 = p_Var4;
    p_Var4 = p_Var12 + -1;
    *p_Var4 = (_Bool)((char)uVar11 + (char)(uVar11 / 10) * -10 + '0');
    bVar14 = 9 < uVar11;
    uVar11 = uVar11 / 10;
  } while (bVar14);
  p_Var9 = p_Var4;
  pcVar10 = lbuf_buf + lbuffered;
  do {
    p_Var1 = p_Var9 + 1;
    *pcVar10 = *p_Var9;
    p_Var9 = p_Var1;
    pcVar10 = pcVar10 + 1;
  } while (p_Var1 < &dev_debug);
  lVar6 = (long)&dev_debug - (long)p_Var4;
  if (&dev_debug < p_Var12) {
    lVar6 = 1;
  }
  lbuffered = (idx_t)(lbuf_buf + lbuffered + lVar6 + -0x103ce0);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0010111f) */
/* WARNING: Unknown calling convention */

_Bool prime_p(uintmax_t n)

{
  ulong t0;
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int k;
  undefined1 auVar4 [16];
  _Bool _Var5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  uintmax_t uVar10;
  uchar *puVar11;
  ulong one;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  uintmax_t ni;
  factors *pfVar15;
  long in_FS_OFFSET;
  bool bVar16;
  factors factors;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (n < 2) {
LAB_001010f0:
    _Var5 = false;
  }
  else {
    if (0x17ded78 < n) {
      one = 0;
      k = 0;
      t0 = n - 1;
      for (uVar6 = t0; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x8000000000000000) {
        k = k + 1;
      }
      uVar12 = 0;
      uVar6 = t0 >> ((byte)k & 0x3f);
      uVar7 = (ulong)binvert_table[(uint)(n >> 1) & 0x7f];
      lVar9 = uVar7 * 2 - uVar7 * uVar7 * n;
      lVar9 = lVar9 * 2 - lVar9 * lVar9 * n;
      iVar14 = 0x40;
      ni = lVar9 * 2 - lVar9 * lVar9 * n;
      uVar7 = 1;
      uVar10 = n;
      do {
        uVar12 = uVar12 >> 1 | uVar10 << 0x3f;
        uVar10 = uVar10 >> 1;
        if ((uVar10 < uVar7) || ((uVar10 == uVar7 && (uVar12 <= one)))) {
          bVar16 = one < uVar12;
          one = one - uVar12;
          uVar7 = (uVar7 - uVar10) - (ulong)bVar16;
        }
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
      uVar10 = 0;
      if (one < n - one) {
        uVar10 = n;
      }
      uVar7 = uVar10 + (one * 2 - n);
      _Var5 = millerrabin(n,ni,uVar7,uVar6,k,one);
      if (!_Var5) goto LAB_001010f0;
      factors.nfactors = '\0';
      factors.plarge.uu[1] = 0;
      factor(0,t0,&factors);
      uVar8 = (uint)factors.nfactors;
      if (factors.nfactors != '\0') {
        uVar12 = 2;
        puVar11 = 
        "\x01\x02\x02\x04\x02\x04\x02\x04\x06\x02\x06\x04\x02\x04\x06\x06\x02\x06\x04\x02\x06\x04\x06\b\x04\x02\x04\x02\x04\x0e\x04\x06\x02\n\x02\x06\x06\x04\x06\x06\x02\n\x02\x04\x02\f\f\x04\x02\x04\x06\x02\n\x06\x06\x06\x02\x06\x04\x02\n\x0e\x04\x02\x04\x0e\x06\n\x02\x04\x06\b\x06\x06\x04\x06\b\x04\b\n\x02\n\x02\x06\x04\x06\b\x04\x02\x04\f\b\x04\b\x04\x06\f\x02\x12\x06\n\x06\x06\x02\x06\n\x06\x06\x02\x06\x06\x04\x02\f\n\x02\x04\x06\x06\x02\f\x04\x06\b\n\b\n\b\x06\x06\x04\b\x06\x04\b\x04\x0e\n\f\x02\n\x02\x04\x02\n\x0e\x04\x02\x04\x0e\x04\x02\x04\x14\x04\b\n\b\x04\x06\x06\x0e\x04\x06\x06\b\x06\f\x04\x06\x02\n\x02\x06\n\x02\n\x02\x06\x12\x04\x02\x04\x06\x06\b\x06\x06\x16\x02\n\b\n\x06\x06\b\f\x04\x06\x06\x02\x06\f\n\x12\x02\x04\x06\x02\x06\x04\x02\x04\f\x02\x06\"\x06\x06\b\x12\n\x0e\x04\x02\x04\x06\b\x04\x02\x06\f\n\x02\x04\x02\x04\x06\f\f\b\f\x06\x04\x06\b\x04\b\x04\x0e\x04\x06\x02\x04\x06\x02\x06\n\x14\x06\x04\x02\x18\x04\x02\n\f\x02\n\b\x06\x06\x06\x12\x06\x04\x02\f\n\f\b\x10\x0e\x06\x04\x02\x04\x02\n\f\x06\x06\x12\x02\x10\x02\x16\x06\b\x06\x04\x02\x04\b\x06\n\x02\n\x0e\n\x06\f\x02\x04\x02\n\f\x02\x10\x02\x06\x04\x02\n\b\x12\x18\x04\x06\b\x10\x02\x04\b\x10\x02\x04\b\x06\x06\x04\f\x02\x16\x06\x02\x06\x04\x06\x0e\x06\x04\x02\x06\x04\x06\f\x06\x06\x0e\x04\x06\f\b\x06\x04\x1a\x12\n\b\x04\x06\x02\x06\x16\f\x02\x10\b\x04\f\x0e\n\x02\x04\b\x06\x06\x04\x02\x04\x06\b\x04\x02\x06\n\x02\n\b\x04\x0e\n\f\x02\x06\x04\x02\x10\x0e\x04\x06\b\x06\x04\x12\b\n\x06\x06\b\n\f\x0e\x04\x06\x06\x02\x1c\x02\n\b\x04\x0e\x04\b\f\x06\f\x04\x06\x14\n\x02\x10\x1a\x04\x02\f\x06\x04\f\x06\b\x04\b\x16\x02\x04\x02\f\x1c\x02\x06\x06\x06\x04\x06\x02\f\x04\f\x02\n\x02\x10\x02\x10\x06\x14\x10\b\x04\x02\x04\x02\x16\b\f\x06\n\x02\x04\x06\x02\x06\n\x02\f\n\x02\n\x0e\x06\x04\x06\b\x06\x06\x10\f\x02\x04\x0e\x06\x04\b\n\b\x06\x06\x16\x06\x02\n\x0e\x04\x06\x12\x02\n\x0e\x04\x02\n\x0e\x04\b\x12\x04\x06\x02\x04\x06\x02\f\x04\x14\x16\f\x02\x04\x06\x06\x02\x06\x16\x02\x06\x10\x06\f\x02\x06\f\x10\x02\x04\x06\x0e\x04\x02\x12\x18\n\x06\x02\n\x02\n\x02\n\x06\x02\n\x02\n\x06\b\x1e\n\x02\n\b\x06\n\x12\x06\f\f\x02\x12\x06\x04\x06\x06\x12\x02\n\x0e\x06\x04\x02\x04\x18\x02\f\x06\x10\b\x06\x06\x12\x10\x02\x04\x06\x02\x06\x06\n\x06\f\f\x12\x02\x06\x04\x12\b\x18\x04\x02\x04\x06\x02\f\x04\x0e\x1e\n\x06\f\x0e\x06\n\f\x02\x04\x06\b\x06\n\x02\x04\x0e\x06\x06"
        ;
        pfVar15 = &factors;
LAB_00100ff6:
        do {
          uVar10 = powm(uVar7,t0 / pfVar15->p[0],n,ni,one);
          if ((factors *)(factors.plarge.uu + (uVar8 - 1)) == pfVar15) {
            if (uVar10 != one) break;
          }
          else {
            pfVar15 = (factors *)((pfVar15->plarge).uu + 1);
            if (uVar10 != one) goto LAB_00100ff6;
          }
          uVar12 = uVar12 + *puVar11;
          auVar2._8_8_ = 0;
          auVar2._0_8_ = one;
          auVar3._8_8_ = 0;
          auVar3._0_8_ = uVar12;
          auVar2 = auVar2 * auVar3;
          if (auVar2._8_8_ == 0) {
            uVar7 = auVar2._0_8_ % n;
          }
          else {
            if (n <= auVar2._8_8_) {
                    /* WARNING: Subroutine does not return */
              __assert_fail("__r1 < __d1","src/factor.c",0x4de,"prime_p");
            }
            iVar14 = 0x40;
            uVar13 = 0;
            uVar10 = n;
            do {
              uVar13 = uVar13 >> 1 | uVar10 << 0x3f;
              uVar10 = uVar10 >> 1;
              auVar4._8_8_ = uVar10;
              auVar4._0_8_ = uVar13;
              if (auVar4 <= auVar2) {
                auVar2 = auVar2 - auVar4;
              }
              uVar7 = auVar2._0_8_;
              iVar14 = iVar14 + -1;
            } while (iVar14 != 0);
          }
          _Var5 = millerrabin(n,ni,uVar7,uVar6,k,one);
          if (!_Var5) goto LAB_001010f0;
          puVar11 = puVar11 + 1;
          pfVar15 = &factors;
          if (puVar11 == "") {
                    /* WARNING: Subroutine does not return */
            __assert_fail("!\"Lucas prime test failure.  This should not happen\"","src/factor.c",
                          0x4e6,"prime_p");
          }
        } while( true );
      }
    }
    _Var5 = true;
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return _Var5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

void factor_using_pollard_rho(uintmax_t n,ulong a,factors *factors)

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
  _Bool _Var17;
  ulong uVar18;
  ulong uVar19;
  uintmax_t uVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  int iVar25;
  uintmax_t a_00;
  long lVar26;
  ulong uVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  ulong uVar31;
  bool bVar32;
  
  if (n < 2) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("__r1 < __d1","src/factor.c",0x5a9,"factor_using_pollard_rho");
  }
  uVar31 = 0;
  while( true ) {
    a_00 = 0;
    iVar25 = 0x40;
    uVar18 = 1;
    uVar21 = 0;
    uVar22 = n;
    do {
      uVar21 = uVar21 >> 1 | uVar22 << 0x3f;
      uVar22 = uVar22 >> 1;
      if ((uVar22 < uVar18) || ((uVar22 == uVar18 && (uVar21 <= a_00)))) {
        bVar32 = a_00 < uVar21;
        a_00 = a_00 - uVar21;
        uVar18 = (uVar18 - uVar22) - (ulong)bVar32;
      }
      iVar25 = iVar25 + -1;
    } while (iVar25 != 0);
    uVar22 = uVar31;
    if (a_00 < n - a_00) {
      uVar22 = n;
    }
    uVar22 = uVar22 + (a_00 * 2 - n);
    if (n <= a) break;
    lVar28 = 1;
    lVar30 = 1;
    uVar18 = uVar22;
    uVar21 = uVar22;
    while( true ) {
      uVar27 = (ulong)binvert_table[(uint)(n >> 1) & 0x7f];
      lVar23 = uVar27 * 2 - uVar27 * uVar27 * n;
      lVar23 = lVar23 * 2 - lVar23 * lVar23 * n;
      lVar26 = lVar23 * 2 - lVar23 * lVar23 * n;
      uVar27 = n - a;
      lVar23 = a - n;
      while( true ) {
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar21;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar21;
        uVar21 = SUB168(auVar1 * auVar9,8);
        auVar2._8_8_ = 0;
        auVar2._0_8_ = SUB168(auVar1 * auVar9,0) * lVar26;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = n;
        uVar24 = SUB168(auVar2 * auVar10,8);
        uVar19 = uVar21 - uVar24;
        if (uVar21 < uVar24) {
          uVar19 = uVar19 + n;
        }
        uVar21 = uVar31;
        if (uVar19 < uVar27) {
          uVar21 = n;
        }
        uVar21 = uVar21 + uVar19 + lVar23;
        uVar19 = uVar31;
        if (uVar22 < uVar21) {
          uVar19 = n;
        }
        auVar3._8_8_ = 0;
        auVar3._0_8_ = a_00;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar19 + (uVar22 - uVar21);
        uVar19 = SUB168(auVar3 * auVar11,8);
        auVar4._8_8_ = 0;
        auVar4._0_8_ = SUB168(auVar3 * auVar11,0) * lVar26;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = n;
        uVar24 = SUB168(auVar4 * auVar12,8);
        a_00 = uVar19 - uVar24;
        if (uVar19 < uVar24) {
          a_00 = a_00 + n;
        }
        uVar19 = uVar18;
        lVar29 = lVar28;
        if ((((uint)lVar30 & 0x1f) == 1) &&
           (uVar20 = gcd_odd(a_00,n), uVar19 = uVar21, lVar29 = lVar28, uVar20 != 1)) break;
        lVar30 = lVar30 + -1;
        uVar18 = uVar19;
        lVar28 = lVar29;
        if ((lVar30 == 0) && (uVar22 = uVar21, uVar18 = uVar21, lVar29 != 0)) {
          lVar30 = 0;
          do {
            auVar5._8_8_ = 0;
            auVar5._0_8_ = uVar18;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = uVar18;
            uVar18 = SUB168(auVar5 * auVar13,8);
            auVar6._8_8_ = 0;
            auVar6._0_8_ = SUB168(auVar5 * auVar13,0) * lVar26;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = n;
            uVar19 = SUB168(auVar6 * auVar14,8);
            uVar21 = uVar18 - uVar19;
            if (uVar18 < uVar19) {
              uVar21 = uVar21 + n;
            }
            uVar18 = uVar31;
            if (uVar21 < uVar27) {
              uVar18 = n;
            }
            lVar30 = lVar30 + 1;
            uVar18 = uVar18 + uVar21 + lVar23;
            uVar21 = uVar18;
            lVar28 = lVar29 * 2;
          } while (lVar29 != lVar30);
        }
      }
      do {
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar18;
        auVar15._8_8_ = 0;
        auVar15._0_8_ = uVar18;
        uVar18 = SUB168(auVar7 * auVar15,8);
        auVar8._8_8_ = 0;
        auVar8._0_8_ = SUB168(auVar7 * auVar15,0) * lVar26;
        auVar16._8_8_ = 0;
        auVar16._0_8_ = n;
        uVar24 = SUB168(auVar8 * auVar16,8);
        uVar19 = uVar18 - uVar24;
        if (uVar18 < uVar24) {
          uVar19 = uVar19 + n;
        }
        uVar18 = uVar31;
        if (uVar19 < uVar27) {
          uVar18 = n;
        }
        uVar18 = uVar18 + uVar19 + lVar23;
        uVar19 = uVar31;
        if (uVar22 < uVar18) {
          uVar19 = n;
        }
        uVar20 = gcd_odd(uVar19 + (uVar22 - uVar18),n);
      } while (uVar20 == 1);
      if (uVar20 == n) break;
      n = n / uVar20;
      _Var17 = prime_p(uVar20);
      if (_Var17) {
        factor_insert_multiplicity(factors,uVar20,1);
      }
      else {
        factor_using_pollard_rho(uVar20,a + 1,factors);
      }
      _Var17 = prime_p(n);
      if (_Var17) {
        factor_insert_multiplicity(factors,n,1);
        return;
      }
      uVar21 = uVar21 % n;
      uVar22 = uVar22 % n;
      uVar18 = uVar18 % n;
      if (n == 1) {
        return;
      }
      if (n <= a) goto LAB_0010149f;
    }
    a = a + 1;
  }
LAB_0010149f:
                    /* WARNING: Subroutine does not return */
  __assert_fail("a < n","src/factor.c",0x5af,"factor_using_pollard_rho");
}



/* WARNING: Unknown calling convention */

void factor(uintmax_t t1,uintmax_t t0,factors *factors)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  factors *pfVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iVar9;
  long lVar10;
  _Bool _Var11;
  factors *pfVar12;
  byte *pbVar13;
  long lVar14;
  uintmax_t p0;
  factors *pfVar15;
  int iVar16;
  primes_dtab *ppVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  uintmax_t uVar21;
  ulong uVar22;
  byte *pbVar23;
  ulong uVar24;
  byte *pbVar25;
  
  if ((t0 & 1) == 0) {
    if (t0 != 0) {
      iVar9 = 0;
      for (uVar22 = t0; (uVar22 & 1) == 0; uVar22 = uVar22 >> 1 | 0x8000000000000000) {
        iVar9 = iVar9 + 1;
      }
      bVar1 = (byte)iVar9;
      uVar22 = t1 << (0x40 - bVar1 & 0x3f);
      t1 = t1 >> (bVar1 & 0x3f);
      t0 = t0 >> (bVar1 & 0x3f) | uVar22;
      factor_insert_multiplicity(factors,2,iVar9);
      goto LAB_001015e0;
    }
    uVar20 = 0;
    iVar9 = 0;
    for (uVar22 = t1; (uVar22 & 1) == 0; uVar22 = uVar22 >> 1 | 0x8000000000000000) {
      iVar9 = iVar9 + 1;
    }
    uVar22 = 3;
    t0 = t1 >> ((byte)iVar9 & 0x3f);
    factor_insert_multiplicity(factors,2,iVar9 + 0x40);
    t1 = 0;
  }
  else {
LAB_001015e0:
    if ((factors *)t1 == (factors *)0x0) {
      uVar20 = 0;
      uVar22 = 3;
    }
    else {
      uVar22 = 3;
      ppVar17 = primes_dtab;
      uVar18 = 0;
      do {
        uVar21 = ppVar17->binv;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar21 * t0;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar22;
        pfVar12 = SUB168(auVar5 * auVar7,8);
        if (pfVar12 <= t1) {
          pfVar4 = (factors *)ppVar17->lim;
          uVar20 = uVar21 * t0;
          do {
            pfVar15 = (factors *)((t1 - (long)pfVar12) * uVar21);
            if (pfVar4 < pfVar15) break;
            factor_insert_multiplicity(factors,uVar22,1);
            auVar6._8_8_ = 0;
            auVar6._0_8_ = uVar20 * uVar21;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar22;
            pfVar12 = SUB168(auVar6 * auVar8,8);
            t0 = uVar20;
            uVar20 = uVar20 * uVar21;
            t1 = (uintmax_t)pfVar15;
          } while (pfVar12 <= pfVar15);
        }
        uVar20 = uVar18 + 1;
        ppVar17 = ppVar17 + 1;
        uVar22 = uVar22 + "\x01\x02\x02\x04\x02\x04\x02\x04\x06\x02\x06\x04\x02\x04\x06\x06\x02\x06\x04\x02\x06\x04\x06\b\x04\x02\x04\x02\x04\x0e\x04\x06\x02\n\x02\x06\x06\x04\x06\x06\x02\n\x02\x04\x02\f\f\x04\x02\x04\x06\x02\n\x06\x06\x06\x02\x06\x04\x02\n\x0e\x04\x02\x04\x0e\x06\n\x02\x04\x06\b\x06\x06\x04\x06\b\x04\b\n\x02\n\x02\x06\x04\x06\b\x04\x02\x04\f\b\x04\b\x04\x06\f\x02\x12\x06\n\x06\x06\x02\x06\n\x06\x06\x02\x06\x06\x04\x02\f\n\x02\x04\x06\x06\x02\f\x04\x06\b\n\b\n\b\x06\x06\x04\b\x06\x04\b\x04\x0e\n\f\x02\n\x02\x04\x02\n\x0e\x04\x02\x04\x0e\x04\x02\x04\x14\x04\b\n\b\x04\x06\x06\x0e\x04\x06\x06\b\x06\f\x04\x06\x02\n\x02\x06\n\x02\n\x02\x06\x12\x04\x02\x04\x06\x06\b\x06\x06\x16\x02\n\b\n\x06\x06\b\f\x04\x06\x06\x02\x06\f\n\x12\x02\x04\x06\x02\x06\x04\x02\x04\f\x02\x06\"\x06\x06\b\x12\n\x0e\x04\x02\x04\x06\b\x04\x02\x06\f\n\x02\x04\x02\x04\x06\f\f\b\f\x06\x04\x06\b\x04\b\x04\x0e\x04\x06\x02\x04\x06\x02\x06\n\x14\x06\x04\x02\x18\x04\x02\n\f\x02\n\b\x06\x06\x06\x12\x06\x04\x02\f\n\f\b\x10\x0e\x06\x04\x02\x04\x02\n\f\x06\x06\x12\x02\x10\x02\x16\x06\b\x06\x04\x02\x04\b\x06\n\x02\n\x0e\n\x06\f\x02\x04\x02\n\f\x02\x10\x02\x06\x04\x02\n\b\x12\x18\x04\x06\b\x10\x02\x04\b\x10\x02\x04\b\x06\x06\x04\f\x02\x16\x06\x02\x06\x04\x06\x0e\x06\x04\x02\x06\x04\x06\f\x06\x06\x0e\x04\x06\f\b\x06\x04\x1a\x12\n\b\x04\x06\x02\x06\x16\f\x02\x10\b\x04\f\x0e\n\x02\x04\b\x06\x06\x04\x02\x04\x06\b\x04\x02\x06\n\x02\n\b\x04\x0e\n\f\x02\x06\x04\x02\x10\x0e\x04\x06\b\x06\x04\x12\b\n\x06\x06\b\n\f\x0e\x04\x06\x06\x02\x1c\x02\n\b\x04\x0e\x04\b\f\x06\f\x04\x06\x14\n\x02\x10\x1a\x04\x02\f\x06\x04\f\x06\b\x04\b\x16\x02\x04\x02\f\x1c\x02\x06\x06\x06\x04\x06\x02\f\x04\f\x02\n\x02\x10\x02\x10\x06\x14\x10\b\x04\x02\x04\x02\x16\b\f\x06\n\x02\x04\x06\x02\x06\n\x02\f\n\x02\n\x0e\x06\x04\x06\b\x06\x06\x10\f\x02\x04\x0e\x06\x04\b\n\b\x06\x06\x16\x06\x02\n\x0e\x04\x06\x12\x02\n\x0e\x04\x02\n\x0e\x04\b\x12\x04\x06\x02\x04\x06\x02\f\x04\x14\x16\f\x02\x04\x06\x06\x02\x06\x16\x02\x06\x10\x06\f\x02\x06\f\x10\x02\x04\x06\x0e\x04\x02\x12\x18\n\x06\x02\n\x02\n\x02\n\x06\x02\n\x02\n\x06\b\x1e\n\x02\n\b\x06\n\x12\x06\f\f\x02\x12\x06\x04\x06\x06\x12\x02\n\x0e\x06\x04\x02\x04\x18\x02\f\x06\x10\b\x06\x06\x12\x10\x02\x04\x06\x02\x06\x06\n\x06\f\f\x12\x02\x06\x04\x12\b\x18\x04\x02\x04\x06\x02\f\x04\x0e\x1e\n\x06\f\x0e\x06\n\f\x02\x04\x06\b\x06\n\x02\x04\x0e\x06\x06"
                          [uVar18 + 1];
      } while (((factors *)t1 != (factors *)0x0) && (uVar18 = uVar20, uVar20 < 0x29c));
      if (uVar20 == 0x29c) goto LAB_00101b98;
    }
  }
  iVar9 = (int)uVar20;
  uVar19 = (ulong)(iVar9 + 1);
  ppVar17 = primes_dtab + uVar20;
  pbVar23 = "\x01\x02\x02\x04\x02\x04\x02\x04\x06\x02\x06\x04\x02\x04\x06\x06\x02\x06\x04\x02\x06\x04\x06\b\x04\x02\x04\x02\x04\x0e\x04\x06\x02\n\x02\x06\x06\x04\x06\x06\x02\n\x02\x04\x02\f\f\x04\x02\x04\x06\x02\n\x06\x06\x06\x02\x06\x04\x02\n\x0e\x04\x02\x04\x0e\x06\n\x02\x04\x06\b\x06\x06\x04\x06\b\x04\b\n\x02\n\x02\x06\x04\x06\b\x04\x02\x04\f\b\x04\b\x04\x06\f\x02\x12\x06\n\x06\x06\x02\x06\n\x06\x06\x02\x06\x06\x04\x02\f\n\x02\x04\x06\x06\x02\f\x04\x06\b\n\b\n\b\x06\x06\x04\b\x06\x04\b\x04\x0e\n\f\x02\n\x02\x04\x02\n\x0e\x04\x02\x04\x0e\x04\x02\x04\x14\x04\b\n\b\x04\x06\x06\x0e\x04\x06\x06\b\x06\f\x04\x06\x02\n\x02\x06\n\x02\n\x02\x06\x12\x04\x02\x04\x06\x06\b\x06\x06\x16\x02\n\b\n\x06\x06\b\f\x04\x06\x06\x02\x06\f\n\x12\x02\x04\x06\x02\x06\x04\x02\x04\f\x02\x06\"\x06\x06\b\x12\n\x0e\x04\x02\x04\x06\b\x04\x02\x06\f\n\x02\x04\x02\x04\x06\f\f\b\f\x06\x04\x06\b\x04\b\x04\x0e\x04\x06\x02\x04\x06\x02\x06\n\x14\x06\x04\x02\x18\x04\x02\n\f\x02\n\b\x06\x06\x06\x12\x06\x04\x02\f\n\f\b\x10\x0e\x06\x04\x02\x04\x02\n\f\x06\x06\x12\x02\x10\x02\x16\x06\b\x06\x04\x02\x04\b\x06\n\x02\n\x0e\n\x06\f\x02\x04\x02\n\f\x02\x10\x02\x06\x04\x02\n\b\x12\x18\x04\x06\b\x10\x02\x04\b\x10\x02\x04\b\x06\x06\x04\f\x02\x16\x06\x02\x06\x04\x06\x0e\x06\x04\x02\x06\x04\x06\f\x06\x06\x0e\x04\x06\f\b\x06\x04\x1a\x12\n\b\x04\x06\x02\x06\x16\f\x02\x10\b\x04\f\x0e\n\x02\x04\b\x06\x06\x04\x02\x04\x06\b\x04\x02\x06\n\x02\n\b\x04\x0e\n\f\x02\x06\x04\x02\x10\x0e\x04\x06\b\x06\x04\x12\b\n\x06\x06\b\n\f\x0e\x04\x06\x06\x02\x1c\x02\n\b\x04\x0e\x04\b\f\x06\f\x04\x06\x14\n\x02\x10\x1a\x04\x02\f\x06\x04\f\x06\b\x04\b\x16\x02\x04\x02\f\x1c\x02\x06\x06\x06\x04\x06\x02\f\x04\f\x02\n\x02\x10\x02\x10\x06\x14\x10\b\x04\x02\x04\x02\x16\b\f\x06\n\x02\x04\x06\x02\x06\n\x02\f\n\x02\n\x0e\x06\x04\x06\b\x06\x06\x10\f\x02\x04\x0e\x06\x04\b\n\b\x06\x06\x16\x06\x02\n\x0e\x04\x06\x12\x02\n\x0e\x04\x02\n\x0e\x04\b\x12\x04\x06\x02\x04\x06\x02\f\x04\x14\x16\f\x02\x04\x06\x06\x02\x06\x16\x02\x06\x10\x06\f\x02\x06\f\x10\x02\x04\x06\x0e\x04\x02\x12\x18\n\x06\x02\n\x02\n\x02\n\x06\x02\n\x02\n\x06\b\x1e\n\x02\n\b\x06\n\x12\x06\f\f\x02\x12\x06\x04\x06\x06\x12\x02\n\x0e\x06\x04\x02\x04\x18\x02\f\x06\x10\b\x06\x06\x12\x10\x02\x04\x06\x02\x06\x06\n\x06\f\f\x12\x02\x06\x04\x12\b\x18\x04\x02\x04\x06\x02\f\x04\x0e\x1e\n\x06\f\x0e\x06\n\f\x02\x04\x06\b\x06\n\x02\x04\x0e\x06\x06"
            + uVar19;
  uVar18 = uVar19;
  pbVar25 = primes_diff8 + uVar20;
  do {
    uVar21 = ppVar17->binv;
    uVar20 = ppVar17->lim;
    uVar24 = uVar21 * t0;
    iVar16 = (int)uVar18;
    if (uVar20 < uVar24) {
      uVar20 = ppVar17[1].binv * t0;
      if (uVar20 <= ppVar17[1].lim) goto LAB_00101848;
LAB_00101722:
      uVar20 = ppVar17[2].binv * t0;
      if (uVar20 <= ppVar17[2].lim) goto LAB_00101898;
LAB_00101734:
      uVar20 = ppVar17[3].binv * t0;
      if (uVar20 <= ppVar17[3].lim) goto LAB_00101900;
LAB_00101746:
      uVar20 = ppVar17[4].binv * t0;
      if (uVar20 <= ppVar17[4].lim) goto LAB_00101978;
LAB_00101758:
      uVar20 = ppVar17[5].binv * t0;
      if (uVar20 <= ppVar17[5].lim) goto LAB_00101a08;
LAB_0010176a:
      uVar20 = ppVar17[6].binv * t0;
      if (uVar20 <= ppVar17[6].lim) goto LAB_00101a80;
LAB_0010177c:
      uVar20 = ppVar17[7].binv * t0;
      if (uVar20 <= ppVar17[7].lim) goto LAB_00101b10;
    }
    else {
      do {
        t0 = uVar24;
        factor_insert_multiplicity(factors,uVar22,1);
        uVar24 = t0 * uVar21;
      } while (uVar24 <= uVar20);
      uVar20 = ppVar17[1].binv * t0;
      if (ppVar17[1].lim < uVar20) goto LAB_00101722;
LAB_00101848:
      bVar1 = *pbVar23;
      do {
        t0 = uVar20;
        factor_insert_multiplicity(factors,bVar1 + uVar22,1);
        uVar20 = ppVar17[1].binv * t0;
      } while (uVar20 <= ppVar17[1].lim);
      uVar20 = ppVar17[2].binv * t0;
      if (ppVar17[2].lim < uVar20) goto LAB_00101734;
LAB_00101898:
      bVar1 = pbVar23[(iVar9 + 2) - uVar19];
      bVar2 = *pbVar23;
      do {
        t0 = uVar20;
        factor_insert_multiplicity(factors,(ulong)bVar1 + bVar2 + uVar22,1);
        uVar20 = ppVar17[2].binv * t0;
      } while (uVar20 <= ppVar17[2].lim);
      uVar20 = ppVar17[3].binv * t0;
      if (ppVar17[3].lim < uVar20) goto LAB_00101746;
LAB_00101900:
      bVar1 = *pbVar23;
      bVar2 = pbVar23[(iVar9 + 2) - uVar19];
      bVar3 = pbVar23[(iVar9 + 3) - uVar19];
      do {
        t0 = uVar20;
        factor_insert_multiplicity(factors,bVar1 + uVar22 + (ulong)bVar2 + (ulong)bVar3,1);
        uVar20 = ppVar17[3].binv * t0;
      } while (uVar20 <= ppVar17[3].lim);
      uVar20 = ppVar17[4].binv * t0;
      if (ppVar17[4].lim < uVar20) goto LAB_00101758;
LAB_00101978:
      do {
        t0 = uVar20;
        pbVar13 = "\x01\x02\x02\x04\x02\x04\x02\x04\x06\x02\x06\x04\x02\x04\x06\x06\x02\x06\x04\x02\x06\x04\x06\b\x04\x02\x04\x02\x04\x0e\x04\x06\x02\n\x02\x06\x06\x04\x06\x06\x02\n\x02\x04\x02\f\f\x04\x02\x04\x06\x02\n\x06\x06\x06\x02\x06\x04\x02\n\x0e\x04\x02\x04\x0e\x06\n\x02\x04\x06\b\x06\x06\x04\x06\b\x04\b\n\x02\n\x02\x06\x04\x06\b\x04\x02\x04\f\b\x04\b\x04\x06\f\x02\x12\x06\n\x06\x06\x02\x06\n\x06\x06\x02\x06\x06\x04\x02\f\n\x02\x04\x06\x06\x02\f\x04\x06\b\n\b\n\b\x06\x06\x04\b\x06\x04\b\x04\x0e\n\f\x02\n\x02\x04\x02\n\x0e\x04\x02\x04\x0e\x04\x02\x04\x14\x04\b\n\b\x04\x06\x06\x0e\x04\x06\x06\b\x06\f\x04\x06\x02\n\x02\x06\n\x02\n\x02\x06\x12\x04\x02\x04\x06\x06\b\x06\x06\x16\x02\n\b\n\x06\x06\b\f\x04\x06\x06\x02\x06\f\n\x12\x02\x04\x06\x02\x06\x04\x02\x04\f\x02\x06\"\x06\x06\b\x12\n\x0e\x04\x02\x04\x06\b\x04\x02\x06\f\n\x02\x04\x02\x04\x06\f\f\b\f\x06\x04\x06\b\x04\b\x04\x0e\x04\x06\x02\x04\x06\x02\x06\n\x14\x06\x04\x02\x18\x04\x02\n\f\x02\n\b\x06\x06\x06\x12\x06\x04\x02\f\n\f\b\x10\x0e\x06\x04\x02\x04\x02\n\f\x06\x06\x12\x02\x10\x02\x16\x06\b\x06\x04\x02\x04\b\x06\n\x02\n\x0e\n\x06\f\x02\x04\x02\n\f\x02\x10\x02\x06\x04\x02\n\b\x12\x18\x04\x06\b\x10\x02\x04\b\x10\x02\x04\b\x06\x06\x04\f\x02\x16\x06\x02\x06\x04\x06\x0e\x06\x04\x02\x06\x04\x06\f\x06\x06\x0e\x04\x06\f\b\x06\x04\x1a\x12\n\b\x04\x06\x02\x06\x16\f\x02\x10\b\x04\f\x0e\n\x02\x04\b\x06\x06\x04\x02\x04\x06\b\x04\x02\x06\n\x02\n\b\x04\x0e\n\f\x02\x06\x04\x02\x10\x0e\x04\x06\b\x06\x04\x12\b\n\x06\x06\b\n\f\x0e\x04\x06\x06\x02\x1c\x02\n\b\x04\x0e\x04\b\f\x06\f\x04\x06\x14\n\x02\x10\x1a\x04\x02\f\x06\x04\f\x06\b\x04\b\x16\x02\x04\x02\f\x1c\x02\x06\x06\x06\x04\x06\x02\f\x04\f\x02\n\x02\x10\x02\x10\x06\x14\x10\b\x04\x02\x04\x02\x16\b\f\x06\n\x02\x04\x06\x02\x06\n\x02\f\n\x02\n\x0e\x06\x04\x06\b\x06\x06\x10\f\x02\x04\x0e\x06\x04\b\n\b\x06\x06\x16\x06\x02\n\x0e\x04\x06\x12\x02\n\x0e\x04\x02\n\x0e\x04\b\x12\x04\x06\x02\x04\x06\x02\f\x04\x14\x16\f\x02\x04\x06\x06\x02\x06\x16\x02\x06\x10\x06\f\x02\x06\f\x10\x02\x04\x06\x0e\x04\x02\x12\x18\n\x06\x02\n\x02\n\x02\n\x06\x02\n\x02\n\x06\b\x1e\n\x02\n\b\x06\n\x12\x06\f\f\x02\x12\x06\x04\x06\x06\x12\x02\n\x0e\x06\x04\x02\x04\x18\x02\f\x06\x10\b\x06\x06\x12\x10\x02\x04\x06\x02\x06\x06\n\x06\f\f\x12\x02\x06\x04\x12\b\x18\x04\x02\x04\x06\x02\f\x04\x0e\x1e\n\x06\f\x0e\x06\n\f\x02\x04\x06\b\x06\n\x02\x04\x0e\x06\x06"
                  + iVar16;
        uVar21 = uVar22;
        do {
          bVar1 = *pbVar13;
          pbVar13 = pbVar13 + 1;
          uVar21 = uVar21 + bVar1;
        } while (pbVar13 !=
                 "\x01\x02\x02\x04\x02\x04\x02\x04\x06\x02\x06\x04\x02\x04\x06\x06\x02\x06\x04\x02\x06\x04\x06\b\x04\x02\x04\x02\x04\x0e\x04\x06\x02\n\x02\x06\x06\x04\x06\x06\x02\n\x02\x04\x02\f\f\x04\x02\x04\x06\x02\n\x06\x06\x06\x02\x06\x04\x02\n\x0e\x04\x02\x04\x0e\x06\n\x02\x04\x06\b\x06\x06\x04\x06\b\x04\b\n\x02\n\x02\x06\x04\x06\b\x04\x02\x04\f\b\x04\b\x04\x06\f\x02\x12\x06\n\x06\x06\x02\x06\n\x06\x06\x02\x06\x06\x04\x02\f\n\x02\x04\x06\x06\x02\f\x04\x06\b\n\b\n\b\x06\x06\x04\b\x06\x04\b\x04\x0e\n\f\x02\n\x02\x04\x02\n\x0e\x04\x02\x04\x0e\x04\x02\x04\x14\x04\b\n\b\x04\x06\x06\x0e\x04\x06\x06\b\x06\f\x04\x06\x02\n\x02\x06\n\x02\n\x02\x06\x12\x04\x02\x04\x06\x06\b\x06\x06\x16\x02\n\b\n\x06\x06\b\f\x04\x06\x06\x02\x06\f\n\x12\x02\x04\x06\x02\x06\x04\x02\x04\f\x02\x06\"\x06\x06\b\x12\n\x0e\x04\x02\x04\x06\b\x04\x02\x06\f\n\x02\x04\x02\x04\x06\f\f\b\f\x06\x04\x06\b\x04\b\x04\x0e\x04\x06\x02\x04\x06\x02\x06\n\x14\x06\x04\x02\x18\x04\x02\n\f\x02\n\b\x06\x06\x06\x12\x06\x04\x02\f\n\f\b\x10\x0e\x06\x04\x02\x04\x02\n\f\x06\x06\x12\x02\x10\x02\x16\x06\b\x06\x04\x02\x04\b\x06\n\x02\n\x0e\n\x06\f\x02\x04\x02\n\f\x02\x10\x02\x06\x04\x02\n\b\x12\x18\x04\x06\b\x10\x02\x04\b\x10\x02\x04\b\x06\x06\x04\f\x02\x16\x06\x02\x06\x04\x06\x0e\x06\x04\x02\x06\x04\x06\f\x06\x06\x0e\x04\x06\f\b\x06\x04\x1a\x12\n\b\x04\x06\x02\x06\x16\f\x02\x10\b\x04\f\x0e\n\x02\x04\b\x06\x06\x04\x02\x04\x06\b\x04\x02\x06\n\x02\n\b\x04\x0e\n\f\x02\x06\x04\x02\x10\x0e\x04\x06\b\x06\x04\x12\b\n\x06\x06\b\n\f\x0e\x04\x06\x06\x02\x1c\x02\n\b\x04\x0e\x04\b\f\x06\f\x04\x06\x14\n\x02\x10\x1a\x04\x02\f\x06\x04\f\x06\b\x04\b\x16\x02\x04\x02\f\x1c\x02\x06\x06\x06\x04\x06\x02\f\x04\f\x02\n\x02\x10\x02\x10\x06\x14\x10\b\x04\x02\x04\x02\x16\b\f\x06\n\x02\x04\x06\x02\x06\n\x02\f\n\x02\n\x0e\x06\x04\x06\b\x06\x06\x10\f\x02\x04\x0e\x06\x04\b\n\b\x06\x06\x16\x06\x02\n\x0e\x04\x06\x12\x02\n\x0e\x04\x02\n\x0e\x04\b\x12\x04\x06\x02\x04\x06\x02\f\x04\x14\x16\f\x02\x04\x06\x06\x02\x06\x16\x02\x06\x10\x06\f\x02\x06\f\x10\x02\x04\x06\x0e\x04\x02\x12\x18\n\x06\x02\n\x02\n\x02\n\x06\x02\n\x02\n\x06\b\x1e\n\x02\n\b\x06\n\x12\x06\f\f\x02\x12\x06\x04\x06\x06\x12\x02\n\x0e\x06\x04\x02\x04\x18\x02\f\x06\x10\b\x06\x06\x12\x10\x02\x04\x06\x02\x06\x06\n\x06\f\f\x12\x02\x06\x04\x12\b\x18\x04\x02\x04\x06\x02\f\x04\x0e\x1e\n\x06\f\x0e\x06\n\f\x02\x04\x06\b\x06\n\x02\x04\x0e\x06\x06"
                 + (long)iVar16 + 4);
        factor_insert_multiplicity(factors,uVar21,1);
        uVar20 = ppVar17[4].binv * t0;
      } while (uVar20 <= ppVar17[4].lim);
      uVar20 = ppVar17[5].binv * t0;
      if (ppVar17[5].lim < uVar20) goto LAB_0010176a;
LAB_00101a08:
      do {
        t0 = uVar20;
        lVar14 = 0;
        uVar21 = uVar22;
        do {
          lVar10 = lVar14 + iVar16;
          lVar14 = lVar14 + 1;
          uVar21 = uVar21 + "\x01\x02\x02\x04\x02\x04\x02\x04\x06\x02\x06\x04\x02\x04\x06\x06\x02\x06\x04\x02\x06\x04\x06\b\x04\x02\x04\x02\x04\x0e\x04\x06\x02\n\x02\x06\x06\x04\x06\x06\x02\n\x02\x04\x02\f\f\x04\x02\x04\x06\x02\n\x06\x06\x06\x02\x06\x04\x02\n\x0e\x04\x02\x04\x0e\x06\n\x02\x04\x06\b\x06\x06\x04\x06\b\x04\b\n\x02\n\x02\x06\x04\x06\b\x04\x02\x04\f\b\x04\b\x04\x06\f\x02\x12\x06\n\x06\x06\x02\x06\n\x06\x06\x02\x06\x06\x04\x02\f\n\x02\x04\x06\x06\x02\f\x04\x06\b\n\b\n\b\x06\x06\x04\b\x06\x04\b\x04\x0e\n\f\x02\n\x02\x04\x02\n\x0e\x04\x02\x04\x0e\x04\x02\x04\x14\x04\b\n\b\x04\x06\x06\x0e\x04\x06\x06\b\x06\f\x04\x06\x02\n\x02\x06\n\x02\n\x02\x06\x12\x04\x02\x04\x06\x06\b\x06\x06\x16\x02\n\b\n\x06\x06\b\f\x04\x06\x06\x02\x06\f\n\x12\x02\x04\x06\x02\x06\x04\x02\x04\f\x02\x06\"\x06\x06\b\x12\n\x0e\x04\x02\x04\x06\b\x04\x02\x06\f\n\x02\x04\x02\x04\x06\f\f\b\f\x06\x04\x06\b\x04\b\x04\x0e\x04\x06\x02\x04\x06\x02\x06\n\x14\x06\x04\x02\x18\x04\x02\n\f\x02\n\b\x06\x06\x06\x12\x06\x04\x02\f\n\f\b\x10\x0e\x06\x04\x02\x04\x02\n\f\x06\x06\x12\x02\x10\x02\x16\x06\b\x06\x04\x02\x04\b\x06\n\x02\n\x0e\n\x06\f\x02\x04\x02\n\f\x02\x10\x02\x06\x04\x02\n\b\x12\x18\x04\x06\b\x10\x02\x04\b\x10\x02\x04\b\x06\x06\x04\f\x02\x16\x06\x02\x06\x04\x06\x0e\x06\x04\x02\x06\x04\x06\f\x06\x06\x0e\x04\x06\f\b\x06\x04\x1a\x12\n\b\x04\x06\x02\x06\x16\f\x02\x10\b\x04\f\x0e\n\x02\x04\b\x06\x06\x04\x02\x04\x06\b\x04\x02\x06\n\x02\n\b\x04\x0e\n\f\x02\x06\x04\x02\x10\x0e\x04\x06\b\x06\x04\x12\b\n\x06\x06\b\n\f\x0e\x04\x06\x06\x02\x1c\x02\n\b\x04\x0e\x04\b\f\x06\f\x04\x06\x14\n\x02\x10\x1a\x04\x02\f\x06\x04\f\x06\b\x04\b\x16\x02\x04\x02\f\x1c\x02\x06\x06\x06\x04\x06\x02\f\x04\f\x02\n\x02\x10\x02\x10\x06\x14\x10\b\x04\x02\x04\x02\x16\b\f\x06\n\x02\x04\x06\x02\x06\n\x02\f\n\x02\n\x0e\x06\x04\x06\b\x06\x06\x10\f\x02\x04\x0e\x06\x04\b\n\b\x06\x06\x16\x06\x02\n\x0e\x04\x06\x12\x02\n\x0e\x04\x02\n\x0e\x04\b\x12\x04\x06\x02\x04\x06\x02\f\x04\x14\x16\f\x02\x04\x06\x06\x02\x06\x16\x02\x06\x10\x06\f\x02\x06\f\x10\x02\x04\x06\x0e\x04\x02\x12\x18\n\x06\x02\n\x02\n\x02\n\x06\x02\n\x02\n\x06\b\x1e\n\x02\n\b\x06\n\x12\x06\f\f\x02\x12\x06\x04\x06\x06\x12\x02\n\x0e\x06\x04\x02\x04\x18\x02\f\x06\x10\b\x06\x06\x12\x10\x02\x04\x06\x02\x06\x06\n\x06\f\f\x12\x02\x06\x04\x12\b\x18\x04\x02\x04\x06\x02\f\x04\x0e\x1e\n\x06\f\x0e\x06\n\f\x02\x04\x06\b\x06\n\x02\x04\x0e\x06\x06"
                            [lVar10];
        } while (lVar14 != 5);
        factor_insert_multiplicity(factors,uVar21,1);
        uVar20 = ppVar17[5].binv * t0;
      } while (uVar20 <= ppVar17[5].lim);
      uVar20 = ppVar17[6].binv * t0;
      if (ppVar17[6].lim < uVar20) goto LAB_0010177c;
LAB_00101a80:
      do {
        t0 = uVar20;
        pbVar13 = "\x01\x02\x02\x04\x02\x04\x02\x04\x06\x02\x06\x04\x02\x04\x06\x06\x02\x06\x04\x02\x06\x04\x06\b\x04\x02\x04\x02\x04\x0e\x04\x06\x02\n\x02\x06\x06\x04\x06\x06\x02\n\x02\x04\x02\f\f\x04\x02\x04\x06\x02\n\x06\x06\x06\x02\x06\x04\x02\n\x0e\x04\x02\x04\x0e\x06\n\x02\x04\x06\b\x06\x06\x04\x06\b\x04\b\n\x02\n\x02\x06\x04\x06\b\x04\x02\x04\f\b\x04\b\x04\x06\f\x02\x12\x06\n\x06\x06\x02\x06\n\x06\x06\x02\x06\x06\x04\x02\f\n\x02\x04\x06\x06\x02\f\x04\x06\b\n\b\n\b\x06\x06\x04\b\x06\x04\b\x04\x0e\n\f\x02\n\x02\x04\x02\n\x0e\x04\x02\x04\x0e\x04\x02\x04\x14\x04\b\n\b\x04\x06\x06\x0e\x04\x06\x06\b\x06\f\x04\x06\x02\n\x02\x06\n\x02\n\x02\x06\x12\x04\x02\x04\x06\x06\b\x06\x06\x16\x02\n\b\n\x06\x06\b\f\x04\x06\x06\x02\x06\f\n\x12\x02\x04\x06\x02\x06\x04\x02\x04\f\x02\x06\"\x06\x06\b\x12\n\x0e\x04\x02\x04\x06\b\x04\x02\x06\f\n\x02\x04\x02\x04\x06\f\f\b\f\x06\x04\x06\b\x04\b\x04\x0e\x04\x06\x02\x04\x06\x02\x06\n\x14\x06\x04\x02\x18\x04\x02\n\f\x02\n\b\x06\x06\x06\x12\x06\x04\x02\f\n\f\b\x10\x0e\x06\x04\x02\x04\x02\n\f\x06\x06\x12\x02\x10\x02\x16\x06\b\x06\x04\x02\x04\b\x06\n\x02\n\x0e\n\x06\f\x02\x04\x02\n\f\x02\x10\x02\x06\x04\x02\n\b\x12\x18\x04\x06\b\x10\x02\x04\b\x10\x02\x04\b\x06\x06\x04\f\x02\x16\x06\x02\x06\x04\x06\x0e\x06\x04\x02\x06\x04\x06\f\x06\x06\x0e\x04\x06\f\b\x06\x04\x1a\x12\n\b\x04\x06\x02\x06\x16\f\x02\x10\b\x04\f\x0e\n\x02\x04\b\x06\x06\x04\x02\x04\x06\b\x04\x02\x06\n\x02\n\b\x04\x0e\n\f\x02\x06\x04\x02\x10\x0e\x04\x06\b\x06\x04\x12\b\n\x06\x06\b\n\f\x0e\x04\x06\x06\x02\x1c\x02\n\b\x04\x0e\x04\b\f\x06\f\x04\x06\x14\n\x02\x10\x1a\x04\x02\f\x06\x04\f\x06\b\x04\b\x16\x02\x04\x02\f\x1c\x02\x06\x06\x06\x04\x06\x02\f\x04\f\x02\n\x02\x10\x02\x10\x06\x14\x10\b\x04\x02\x04\x02\x16\b\f\x06\n\x02\x04\x06\x02\x06\n\x02\f\n\x02\n\x0e\x06\x04\x06\b\x06\x06\x10\f\x02\x04\x0e\x06\x04\b\n\b\x06\x06\x16\x06\x02\n\x0e\x04\x06\x12\x02\n\x0e\x04\x02\n\x0e\x04\b\x12\x04\x06\x02\x04\x06\x02\f\x04\x14\x16\f\x02\x04\x06\x06\x02\x06\x16\x02\x06\x10\x06\f\x02\x06\f\x10\x02\x04\x06\x0e\x04\x02\x12\x18\n\x06\x02\n\x02\n\x02\n\x06\x02\n\x02\n\x06\b\x1e\n\x02\n\b\x06\n\x12\x06\f\f\x02\x12\x06\x04\x06\x06\x12\x02\n\x0e\x06\x04\x02\x04\x18\x02\f\x06\x10\b\x06\x06\x12\x10\x02\x04\x06\x02\x06\x06\n\x06\f\f\x12\x02\x06\x04\x12\b\x18\x04\x02\x04\x06\x02\f\x04\x0e\x1e\n\x06\f\x0e\x06\n\f\x02\x04\x06\b\x06\n\x02\x04\x0e\x06\x06"
                  + iVar16;
        uVar21 = uVar22;
        do {
          bVar1 = *pbVar13;
          pbVar13 = pbVar13 + 1;
          uVar21 = uVar21 + bVar1;
        } while ("\x01\x02\x02\x04\x02\x04\x02\x04\x06\x02\x06\x04\x02\x04\x06\x06\x02\x06\x04\x02\x06\x04\x06\b\x04\x02\x04\x02\x04\x0e\x04\x06\x02\n\x02\x06\x06\x04\x06\x06\x02\n\x02\x04\x02\f\f\x04\x02\x04\x06\x02\n\x06\x06\x06\x02\x06\x04\x02\n\x0e\x04\x02\x04\x0e\x06\n\x02\x04\x06\b\x06\x06\x04\x06\b\x04\b\n\x02\n\x02\x06\x04\x06\b\x04\x02\x04\f\b\x04\b\x04\x06\f\x02\x12\x06\n\x06\x06\x02\x06\n\x06\x06\x02\x06\x06\x04\x02\f\n\x02\x04\x06\x06\x02\f\x04\x06\b\n\b\n\b\x06\x06\x04\b\x06\x04\b\x04\x0e\n\f\x02\n\x02\x04\x02\n\x0e\x04\x02\x04\x0e\x04\x02\x04\x14\x04\b\n\b\x04\x06\x06\x0e\x04\x06\x06\b\x06\f\x04\x06\x02\n\x02\x06\n\x02\n\x02\x06\x12\x04\x02\x04\x06\x06\b\x06\x06\x16\x02\n\b\n\x06\x06\b\f\x04\x06\x06\x02\x06\f\n\x12\x02\x04\x06\x02\x06\x04\x02\x04\f\x02\x06\"\x06\x06\b\x12\n\x0e\x04\x02\x04\x06\b\x04\x02\x06\f\n\x02\x04\x02\x04\x06\f\f\b\f\x06\x04\x06\b\x04\b\x04\x0e\x04\x06\x02\x04\x06\x02\x06\n\x14\x06\x04\x02\x18\x04\x02\n\f\x02\n\b\x06\x06\x06\x12\x06\x04\x02\f\n\f\b\x10\x0e\x06\x04\x02\x04\x02\n\f\x06\x06\x12\x02\x10\x02\x16\x06\b\x06\x04\x02\x04\b\x06\n\x02\n\x0e\n\x06\f\x02\x04\x02\n\f\x02\x10\x02\x06\x04\x02\n\b\x12\x18\x04\x06\b\x10\x02\x04\b\x10\x02\x04\b\x06\x06\x04\f\x02\x16\x06\x02\x06\x04\x06\x0e\x06\x04\x02\x06\x04\x06\f\x06\x06\x0e\x04\x06\f\b\x06\x04\x1a\x12\n\b\x04\x06\x02\x06\x16\f\x02\x10\b\x04\f\x0e\n\x02\x04\b\x06\x06\x04\x02\x04\x06\b\x04\x02\x06\n\x02\n\b\x04\x0e\n\f\x02\x06\x04\x02\x10\x0e\x04\x06\b\x06\x04\x12\b\n\x06\x06\b\n\f\x0e\x04\x06\x06\x02\x1c\x02\n\b\x04\x0e\x04\b\f\x06\f\x04\x06\x14\n\x02\x10\x1a\x04\x02\f\x06\x04\f\x06\b\x04\b\x16\x02\x04\x02\f\x1c\x02\x06\x06\x06\x04\x06\x02\f\x04\f\x02\n\x02\x10\x02\x10\x06\x14\x10\b\x04\x02\x04\x02\x16\b\f\x06\n\x02\x04\x06\x02\x06\n\x02\f\n\x02\n\x0e\x06\x04\x06\b\x06\x06\x10\f\x02\x04\x0e\x06\x04\b\n\b\x06\x06\x16\x06\x02\n\x0e\x04\x06\x12\x02\n\x0e\x04\x02\n\x0e\x04\b\x12\x04\x06\x02\x04\x06\x02\f\x04\x14\x16\f\x02\x04\x06\x06\x02\x06\x16\x02\x06\x10\x06\f\x02\x06\f\x10\x02\x04\x06\x0e\x04\x02\x12\x18\n\x06\x02\n\x02\n\x02\n\x06\x02\n\x02\n\x06\b\x1e\n\x02\n\b\x06\n\x12\x06\f\f\x02\x12\x06\x04\x06\x06\x12\x02\n\x0e\x06\x04\x02\x04\x18\x02\f\x06\x10\b\x06\x06\x12\x10\x02\x04\x06\x02\x06\x06\n\x06\f\f\x12\x02\x06\x04\x12\b\x18\x04\x02\x04\x06\x02\f\x04\x0e\x1e\n\x06\f\x0e\x06\n\f\x02\x04\x06\b\x06\n\x02\x04\x0e\x06\x06"
                 + (long)iVar16 + 6 != pbVar13);
        factor_insert_multiplicity(factors,uVar21,1);
        uVar20 = ppVar17[6].binv * t0;
      } while (uVar20 <= ppVar17[6].lim);
      uVar20 = ppVar17[7].binv * t0;
      if (uVar20 <= ppVar17[7].lim) {
LAB_00101b10:
        do {
          t0 = uVar20;
          pbVar13 = "\x01\x02\x02\x04\x02\x04\x02\x04\x06\x02\x06\x04\x02\x04\x06\x06\x02\x06\x04\x02\x06\x04\x06\b\x04\x02\x04\x02\x04\x0e\x04\x06\x02\n\x02\x06\x06\x04\x06\x06\x02\n\x02\x04\x02\f\f\x04\x02\x04\x06\x02\n\x06\x06\x06\x02\x06\x04\x02\n\x0e\x04\x02\x04\x0e\x06\n\x02\x04\x06\b\x06\x06\x04\x06\b\x04\b\n\x02\n\x02\x06\x04\x06\b\x04\x02\x04\f\b\x04\b\x04\x06\f\x02\x12\x06\n\x06\x06\x02\x06\n\x06\x06\x02\x06\x06\x04\x02\f\n\x02\x04\x06\x06\x02\f\x04\x06\b\n\b\n\b\x06\x06\x04\b\x06\x04\b\x04\x0e\n\f\x02\n\x02\x04\x02\n\x0e\x04\x02\x04\x0e\x04\x02\x04\x14\x04\b\n\b\x04\x06\x06\x0e\x04\x06\x06\b\x06\f\x04\x06\x02\n\x02\x06\n\x02\n\x02\x06\x12\x04\x02\x04\x06\x06\b\x06\x06\x16\x02\n\b\n\x06\x06\b\f\x04\x06\x06\x02\x06\f\n\x12\x02\x04\x06\x02\x06\x04\x02\x04\f\x02\x06\"\x06\x06\b\x12\n\x0e\x04\x02\x04\x06\b\x04\x02\x06\f\n\x02\x04\x02\x04\x06\f\f\b\f\x06\x04\x06\b\x04\b\x04\x0e\x04\x06\x02\x04\x06\x02\x06\n\x14\x06\x04\x02\x18\x04\x02\n\f\x02\n\b\x06\x06\x06\x12\x06\x04\x02\f\n\f\b\x10\x0e\x06\x04\x02\x04\x02\n\f\x06\x06\x12\x02\x10\x02\x16\x06\b\x06\x04\x02\x04\b\x06\n\x02\n\x0e\n\x06\f\x02\x04\x02\n\f\x02\x10\x02\x06\x04\x02\n\b\x12\x18\x04\x06\b\x10\x02\x04\b\x10\x02\x04\b\x06\x06\x04\f\x02\x16\x06\x02\x06\x04\x06\x0e\x06\x04\x02\x06\x04\x06\f\x06\x06\x0e\x04\x06\f\b\x06\x04\x1a\x12\n\b\x04\x06\x02\x06\x16\f\x02\x10\b\x04\f\x0e\n\x02\x04\b\x06\x06\x04\x02\x04\x06\b\x04\x02\x06\n\x02\n\b\x04\x0e\n\f\x02\x06\x04\x02\x10\x0e\x04\x06\b\x06\x04\x12\b\n\x06\x06\b\n\f\x0e\x04\x06\x06\x02\x1c\x02\n\b\x04\x0e\x04\b\f\x06\f\x04\x06\x14\n\x02\x10\x1a\x04\x02\f\x06\x04\f\x06\b\x04\b\x16\x02\x04\x02\f\x1c\x02\x06\x06\x06\x04\x06\x02\f\x04\f\x02\n\x02\x10\x02\x10\x06\x14\x10\b\x04\x02\x04\x02\x16\b\f\x06\n\x02\x04\x06\x02\x06\n\x02\f\n\x02\n\x0e\x06\x04\x06\b\x06\x06\x10\f\x02\x04\x0e\x06\x04\b\n\b\x06\x06\x16\x06\x02\n\x0e\x04\x06\x12\x02\n\x0e\x04\x02\n\x0e\x04\b\x12\x04\x06\x02\x04\x06\x02\f\x04\x14\x16\f\x02\x04\x06\x06\x02\x06\x16\x02\x06\x10\x06\f\x02\x06\f\x10\x02\x04\x06\x0e\x04\x02\x12\x18\n\x06\x02\n\x02\n\x02\n\x06\x02\n\x02\n\x06\b\x1e\n\x02\n\b\x06\n\x12\x06\f\f\x02\x12\x06\x04\x06\x06\x12\x02\n\x0e\x06\x04\x02\x04\x18\x02\f\x06\x10\b\x06\x06\x12\x10\x02\x04\x06\x02\x06\x06\n\x06\f\f\x12\x02\x06\x04\x12\b\x18\x04\x02\x04\x06\x02\f\x04\x0e\x1e\n\x06\f\x0e\x06\n\f\x02\x04\x06\b\x06\n\x02\x04\x0e\x06\x06"
                    + iVar16;
          uVar21 = uVar22;
          do {
            bVar1 = *pbVar13;
            pbVar13 = pbVar13 + 1;
            uVar21 = uVar21 + bVar1;
          } while ("\x01\x02\x02\x04\x02\x04\x02\x04\x06\x02\x06\x04\x02\x04\x06\x06\x02\x06\x04\x02\x06\x04\x06\b\x04\x02\x04\x02\x04\x0e\x04\x06\x02\n\x02\x06\x06\x04\x06\x06\x02\n\x02\x04\x02\f\f\x04\x02\x04\x06\x02\n\x06\x06\x06\x02\x06\x04\x02\n\x0e\x04\x02\x04\x0e\x06\n\x02\x04\x06\b\x06\x06\x04\x06\b\x04\b\n\x02\n\x02\x06\x04\x06\b\x04\x02\x04\f\b\x04\b\x04\x06\f\x02\x12\x06\n\x06\x06\x02\x06\n\x06\x06\x02\x06\x06\x04\x02\f\n\x02\x04\x06\x06\x02\f\x04\x06\b\n\b\n\b\x06\x06\x04\b\x06\x04\b\x04\x0e\n\f\x02\n\x02\x04\x02\n\x0e\x04\x02\x04\x0e\x04\x02\x04\x14\x04\b\n\b\x04\x06\x06\x0e\x04\x06\x06\b\x06\f\x04\x06\x02\n\x02\x06\n\x02\n\x02\x06\x12\x04\x02\x04\x06\x06\b\x06\x06\x16\x02\n\b\n\x06\x06\b\f\x04\x06\x06\x02\x06\f\n\x12\x02\x04\x06\x02\x06\x04\x02\x04\f\x02\x06\"\x06\x06\b\x12\n\x0e\x04\x02\x04\x06\b\x04\x02\x06\f\n\x02\x04\x02\x04\x06\f\f\b\f\x06\x04\x06\b\x04\b\x04\x0e\x04\x06\x02\x04\x06\x02\x06\n\x14\x06\x04\x02\x18\x04\x02\n\f\x02\n\b\x06\x06\x06\x12\x06\x04\x02\f\n\f\b\x10\x0e\x06\x04\x02\x04\x02\n\f\x06\x06\x12\x02\x10\x02\x16\x06\b\x06\x04\x02\x04\b\x06\n\x02\n\x0e\n\x06\f\x02\x04\x02\n\f\x02\x10\x02\x06\x04\x02\n\b\x12\x18\x04\x06\b\x10\x02\x04\b\x10\x02\x04\b\x06\x06\x04\f\x02\x16\x06\x02\x06\x04\x06\x0e\x06\x04\x02\x06\x04\x06\f\x06\x06\x0e\x04\x06\f\b\x06\x04\x1a\x12\n\b\x04\x06\x02\x06\x16\f\x02\x10\b\x04\f\x0e\n\x02\x04\b\x06\x06\x04\x02\x04\x06\b\x04\x02\x06\n\x02\n\b\x04\x0e\n\f\x02\x06\x04\x02\x10\x0e\x04\x06\b\x06\x04\x12\b\n\x06\x06\b\n\f\x0e\x04\x06\x06\x02\x1c\x02\n\b\x04\x0e\x04\b\f\x06\f\x04\x06\x14\n\x02\x10\x1a\x04\x02\f\x06\x04\f\x06\b\x04\b\x16\x02\x04\x02\f\x1c\x02\x06\x06\x06\x04\x06\x02\f\x04\f\x02\n\x02\x10\x02\x10\x06\x14\x10\b\x04\x02\x04\x02\x16\b\f\x06\n\x02\x04\x06\x02\x06\n\x02\f\n\x02\n\x0e\x06\x04\x06\b\x06\x06\x10\f\x02\x04\x0e\x06\x04\b\n\b\x06\x06\x16\x06\x02\n\x0e\x04\x06\x12\x02\n\x0e\x04\x02\n\x0e\x04\b\x12\x04\x06\x02\x04\x06\x02\f\x04\x14\x16\f\x02\x04\x06\x06\x02\x06\x16\x02\x06\x10\x06\f\x02\x06\f\x10\x02\x04\x06\x0e\x04\x02\x12\x18\n\x06\x02\n\x02\n\x02\n\x06\x02\n\x02\n\x06\b\x1e\n\x02\n\b\x06\n\x12\x06\f\f\x02\x12\x06\x04\x06\x06\x12\x02\n\x0e\x06\x04\x02\x04\x18\x02\f\x06\x10\b\x06\x06\x12\x10\x02\x04\x06\x02\x06\x06\n\x06\f\f\x12\x02\x06\x04\x12\b\x18\x04\x02\x04\x06\x02\f\x04\x0e\x1e\n\x06\f\x0e\x06\n\f\x02\x04\x06\b\x06\n\x02\x04\x0e\x06\x06"
                   + (long)iVar16 + 7 != pbVar13);
          factor_insert_multiplicity(factors,uVar21,1);
          uVar20 = ppVar17[7].binv * t0;
        } while (uVar20 <= ppVar17[7].lim);
      }
    }
    uVar22 = uVar22 + *pbVar25;
    if (t0 < uVar22 * uVar22) break;
    ppVar17 = ppVar17 + 8;
    pbVar23 = pbVar23 + 8;
    uVar18 = (ulong)(iVar16 + 8);
    pbVar13 = pbVar25 + -0x108f98;
    pbVar25 = pbVar25 + 8;
  } while ((long)pbVar13 < 0x29c);
LAB_00101b98:
  if ((factors *)t1 == (factors *)0x0) {
    if (1 < t0) {
      _Var11 = prime_p(t0);
      if (_Var11) {
        factor_insert_multiplicity(factors,t0,1);
        return;
      }
      factor_using_pollard_rho(t0,1,factors);
      return;
    }
  }
  else {
    uVar22 = t0;
    pfVar12 = (factors *)t1;
    _Var11 = prime2_p(t1,t0);
    if (!_Var11) {
      factor_using_pollard_rho2(t1,t0,1,factors);
      return;
    }
    if ((factors->plarge).uu[1] != 0) {
                    /* WARNING: Subroutine does not return */
      factor_insert_large(pfVar12,uVar22,p0);
    }
    (factors->plarge).uu[0] = t0;
    (factors->plarge).uu[1] = t1;
  }
  return;
}



/* WARNING: Unknown calling convention */

_Bool prime2_p(uintmax_t n1,uintmax_t n0)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  byte bVar5;
  uintmax_t uVar6;
  uintmax_t uVar7;
  uchar uVar8;
  _Bool _Var9;
  _Bool _Var10;
  ulong t1;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  uintmax_t uVar15;
  ulong t0;
  ulong uVar16;
  uintmax_t ni;
  uchar *puVar17;
  long in_FS_OFFSET;
  bool bVar18;
  uuint uVar19;
  uint uStack_1d4;
  int iStack_1a0;
  uintmax_t q [2];
  uintmax_t a_prim [2];
  uintmax_t one [2];
  uintmax_t na [2];
  uintmax_t e [2];
  factors factors;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  t1 = n1 - (n0 == 0);
  t0 = n0 - 1;
  if (t0 == 0) {
    q[1] = 0;
    iVar4 = 0;
    for (uVar16 = t1; (uVar16 & 1) == 0; uVar16 = uVar16 >> 1 | 0x8000000000000000) {
      iVar4 = iVar4 + 1;
    }
    iStack_1a0 = iVar4 + 0x40;
    q[0] = t1 >> ((byte)iVar4 & 0x3f);
  }
  else {
    iStack_1a0 = 0;
    for (uVar16 = t0; (uVar16 & 1) == 0; uVar16 = uVar16 >> 1 | 0x8000000000000000) {
      iStack_1a0 = iStack_1a0 + 1;
    }
    bVar5 = (byte)iStack_1a0;
    q[1] = t1 >> (bVar5 & 0x3f);
    q[0] = t1 << (0x40 - bVar5 & 0x3f) | t0 >> (bVar5 & 0x3f);
  }
  lVar13 = 0x3f;
  uVar16 = (ulong)binvert_table[(uint)(n0 >> 1) & 0x7f];
  lVar14 = uVar16 * 2 - uVar16 * uVar16 * n0;
  lVar14 = lVar14 * 2 - lVar14 * lVar14 * n0;
  ni = lVar14 * 2 - lVar14 * lVar14 * n0;
  bVar18 = n1 == 1;
  if (bVar18) {
    lVar13 = 0x7f;
  }
  one[0] = (uintmax_t)bVar18;
  one[1] = (uintmax_t)!bVar18;
  do {
    one[1] = one[1] << 1 | one[0] >> 0x3f;
    one[0] = one[0] * 2;
    if ((n1 < one[1]) || ((n1 == one[1] && (n0 <= one[0])))) {
      bVar18 = one[0] < n0;
      one[0] = one[0] - n0;
      one[1] = (one[1] - n1) - (ulong)bVar18;
    }
    bVar18 = lVar13 != 0;
    lVar13 = lVar13 + -1;
  } while (bVar18);
  a_prim[0] = one[0] * 2;
  a_prim[1] = one[1] * 2 + (ulong)CARRY8(one[0],one[0]);
  if ((n1 < a_prim[1]) || ((n1 == a_prim[1] && (n0 <= a_prim[0])))) {
    bVar18 = a_prim[0] < n0;
    a_prim[0] = a_prim[0] - n0;
    a_prim[1] = (a_prim[1] - n1) - (ulong)bVar18;
  }
  na[0] = n0;
  na[1] = n1;
  _Var9 = millerrabin2(na,ni,a_prim,q,iStack_1a0,one);
  if (!_Var9) {
LAB_001020be:
    if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return _Var9;
  }
  factors.nfactors = '\0';
  factors.plarge.uu[1] = 0;
  if ((t1 == 0) && (t0 < 2)) {
    uStack_1d4 = 0;
  }
  else {
    factor(t1,t0,&factors);
    uStack_1d4 = (uint)factors.nfactors;
  }
  uVar8 = factors.nfactors;
  uVar7 = factors.plarge.uu[1];
  uVar16 = 2;
  puVar17 = 
  "\x01\x02\x02\x04\x02\x04\x02\x04\x06\x02\x06\x04\x02\x04\x06\x06\x02\x06\x04\x02\x06\x04\x06\b\x04\x02\x04\x02\x04\x0e\x04\x06\x02\n\x02\x06\x06\x04\x06\x06\x02\n\x02\x04\x02\f\f\x04\x02\x04\x06\x02\n\x06\x06\x06\x02\x06\x04\x02\n\x0e\x04\x02\x04\x0e\x06\n\x02\x04\x06\b\x06\x06\x04\x06\b\x04\b\n\x02\n\x02\x06\x04\x06\b\x04\x02\x04\f\b\x04\b\x04\x06\f\x02\x12\x06\n\x06\x06\x02\x06\n\x06\x06\x02\x06\x06\x04\x02\f\n\x02\x04\x06\x06\x02\f\x04\x06\b\n\b\n\b\x06\x06\x04\b\x06\x04\b\x04\x0e\n\f\x02\n\x02\x04\x02\n\x0e\x04\x02\x04\x0e\x04\x02\x04\x14\x04\b\n\b\x04\x06\x06\x0e\x04\x06\x06\b\x06\f\x04\x06\x02\n\x02\x06\n\x02\n\x02\x06\x12\x04\x02\x04\x06\x06\b\x06\x06\x16\x02\n\b\n\x06\x06\b\f\x04\x06\x06\x02\x06\f\n\x12\x02\x04\x06\x02\x06\x04\x02\x04\f\x02\x06\"\x06\x06\b\x12\n\x0e\x04\x02\x04\x06\b\x04\x02\x06\f\n\x02\x04\x02\x04\x06\f\f\b\f\x06\x04\x06\b\x04\b\x04\x0e\x04\x06\x02\x04\x06\x02\x06\n\x14\x06\x04\x02\x18\x04\x02\n\f\x02\n\b\x06\x06\x06\x12\x06\x04\x02\f\n\f\b\x10\x0e\x06\x04\x02\x04\x02\n\f\x06\x06\x12\x02\x10\x02\x16\x06\b\x06\x04\x02\x04\b\x06\n\x02\n\x0e\n\x06\f\x02\x04\x02\n\f\x02\x10\x02\x06\x04\x02\n\b\x12\x18\x04\x06\b\x10\x02\x04\b\x10\x02\x04\b\x06\x06\x04\f\x02\x16\x06\x02\x06\x04\x06\x0e\x06\x04\x02\x06\x04\x06\f\x06\x06\x0e\x04\x06\f\b\x06\x04\x1a\x12\n\b\x04\x06\x02\x06\x16\f\x02\x10\b\x04\f\x0e\n\x02\x04\b\x06\x06\x04\x02\x04\x06\b\x04\x02\x06\n\x02\n\b\x04\x0e\n\f\x02\x06\x04\x02\x10\x0e\x04\x06\b\x06\x04\x12\b\n\x06\x06\b\n\f\x0e\x04\x06\x06\x02\x1c\x02\n\b\x04\x0e\x04\b\f\x06\f\x04\x06\x14\n\x02\x10\x1a\x04\x02\f\x06\x04\f\x06\b\x04\b\x16\x02\x04\x02\f\x1c\x02\x06\x06\x06\x04\x06\x02\f\x04\f\x02\n\x02\x10\x02\x10\x06\x14\x10\b\x04\x02\x04\x02\x16\b\f\x06\n\x02\x04\x06\x02\x06\n\x02\f\n\x02\n\x0e\x06\x04\x06\b\x06\x06\x10\f\x02\x04\x0e\x06\x04\b\n\b\x06\x06\x16\x06\x02\n\x0e\x04\x06\x12\x02\n\x0e\x04\x02\n\x0e\x04\b\x12\x04\x06\x02\x04\x06\x02\f\x04\x14\x16\f\x02\x04\x06\x06\x02\x06\x16\x02\x06\x10\x06\f\x02\x06\f\x10\x02\x04\x06\x0e\x04\x02\x12\x18\n\x06\x02\n\x02\n\x02\n\x06\x02\n\x02\n\x06\b\x1e\n\x02\n\b\x06\n\x12\x06\f\f\x02\x12\x06\x04\x06\x06\x12\x02\n\x0e\x06\x04\x02\x04\x18\x02\f\x06\x10\b\x06\x06\x12\x10\x02\x04\x06\x02\x06\x06\n\x06\f\f\x12\x02\x06\x04\x12\b\x18\x04\x02\x04\x06\x02\f\x04\x0e\x1e\n\x06\f\x0e\x06\n\f\x02\x04\x06\b\x06\n\x02\x04\x0e\x06\x06"
  ;
  do {
    if (uVar7 == 0) {
LAB_00101f9d:
      if (uVar8 == '\0') goto LAB_001020be;
LAB_00101fa8:
      uVar6 = one[0];
      lVar14 = 1;
      do {
        uVar11 = factors.plarge.uu[lVar14 + 1];
        while( true ) {
          e[0] = t0 >> 1 | t1 << 0x3f;
          e[1] = t1 >> 1;
          if (uVar11 != 2) {
            uVar12 = (ulong)binvert_table[(uint)(uVar11 >> 1) & 0x7f];
            lVar13 = uVar12 * 2 - uVar12 * uVar12 * uVar11;
            lVar13 = lVar13 * 2 - lVar13 * lVar13 * uVar11;
            lVar13 = lVar13 * 2 - lVar13 * lVar13 * uVar11;
            e[0] = t0 * lVar13;
            if (t1 < uVar11) {
              e[1] = 0;
            }
            else {
              auVar2._8_8_ = 0;
              auVar2._0_8_ = e[0];
              auVar3._8_8_ = 0;
              auVar3._0_8_ = uVar11;
              e[1] = (t1 - SUB168(auVar2 * auVar3,8)) * lVar13;
            }
          }
          uVar19 = powm2(a_prim,e,na,ni,one);
          uVar15 = uVar19.uu[1];
          if (uVar6 == uVar19.uu[0]) break;
          if ((int)uStack_1d4 <= (int)lVar14) goto LAB_001020be;
          uVar11 = factors.p[lVar14];
          lVar14 = lVar14 + 1;
        }
        if ((int)uStack_1d4 <= (int)lVar14) goto LAB_001020a8;
        lVar14 = lVar14 + 1;
      } while (one[1] != uVar15);
    }
    else {
      e[1] = 0;
      uVar11 = (ulong)binvert_table[(uint)(factors.plarge.uu[0] >> 1) & 0x7f];
      lVar14 = uVar11 * 2 - uVar11 * uVar11 * factors.plarge.uu[0];
      lVar14 = lVar14 * 2 - lVar14 * lVar14 * factors.plarge.uu[0];
      e[0] = t0 * (lVar14 * 2 - lVar14 * lVar14 * factors.plarge.uu[0]);
      uVar19 = powm2(a_prim,e,na,ni,one);
      uVar15 = uVar19.uu[1];
      if (one[0] != uVar19.uu[0]) goto LAB_00101f9d;
      if (uVar8 != '\0') {
        if (one[1] == uVar15) goto LAB_001021a0;
        goto LAB_00101fa8;
      }
LAB_001020a8:
      if (one[1] != uVar15) goto LAB_001020be;
    }
LAB_001021a0:
    uVar16 = uVar16 + *puVar17;
    a_prim[1] = 0;
    a_prim[0] = uVar16;
    if (uVar16 < n1) {
      a_prim[1] = uVar16;
      a_prim[0] = 0;
    }
    lVar14 = (-(ulong)(uVar16 < n1) & 0xffffffffffffffc0) + 0x7f;
    do {
      a_prim[1] = a_prim[1] << 1 | a_prim[0] >> 0x3f;
      a_prim[0] = a_prim[0] * 2;
      if ((n1 < a_prim[1]) || ((n1 == a_prim[1] && (n0 <= a_prim[0])))) {
        bVar18 = a_prim[0] < n0;
        a_prim[0] = a_prim[0] - n0;
        a_prim[1] = (a_prim[1] - n1) - (ulong)bVar18;
      }
      bVar18 = lVar14 != 0;
      lVar14 = lVar14 + -1;
    } while (bVar18);
    _Var10 = millerrabin2(na,ni,a_prim,q,iStack_1a0,one);
    if (!_Var10) {
      _Var9 = false;
      goto LAB_001020be;
    }
    puVar17 = puVar17 + 1;
    if (puVar17 == "") {
                    /* WARNING: Subroutine does not return */
      __assert_fail("!\"Lucas prime test failure.  This should not happen\"","src/factor.c",0x54b,
                    "prime2_p");
    }
  } while( true );
}



/* WARNING: Unknown calling convention */

void factor_using_pollard_rho2(uintmax_t n1,uintmax_t n0,ulong a,factors *factors)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uintmax_t auVar4 [2];
  uintmax_t auVar5 [2];
  uintmax_t auVar6 [2];
  uintmax_t auVar7 [2];
  uintmax_t auVar8 [2];
  uintmax_t auVar9 [2];
  undefined1 auVar10 [16];
  factors *n;
  _Bool _Var11;
  factors *pfVar12;
  ulong uVar13;
  uintmax_t uVar14;
  factors *a0;
  long lVar15;
  uintmax_t uVar16;
  factors *a1;
  uintmax_t extraout_RDX;
  uintmax_t extraout_RDX_00;
  long lVar17;
  factors *pfVar18;
  factors *p1;
  factors *factors_00;
  long in_FS_OFFSET;
  bool bVar19;
  uuint uVar20;
  uuint uVar21;
  uuint uVar22;
  factors *local_98;
  factors *local_90;
  uintmax_t local_78;
  ulong local_70;
  uintmax_t local_68;
  long local_60;
  uintmax_t r1m;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = a;
LAB_001022ce:
  local_98 = (factors *)(ulong)((factors *)0x1 < n1);
  lVar17 = (ulong)(-(uint)(n1 < (factors *)0x2) & 0x40) + 0x3f;
  local_90 = (factors *)(ulong)(n1 < (factors *)0x2);
  do {
    local_98 = (factors *)((long)local_98 << 1 | (ulong)local_90 >> 0x3f);
    local_90 = (factors *)((long)local_90 * 2);
    if ((n1 < local_98) || (((factors *)n1 == local_98 && (n0 <= local_90)))) {
      bVar19 = local_90 < n0;
      local_90 = (factors *)((long)local_90 - n0);
      local_98 = (factors *)((long)local_98 + (-(ulong)bVar19 - n1));
    }
    bVar19 = lVar17 != 0;
    lVar17 = lVar17 + -1;
  } while (bVar19);
  pfVar18 = (factors *)((long)local_90 * 2);
  pfVar12 = (factors *)((long)local_98 * 2 + (ulong)CARRY8((ulong)local_90,(ulong)local_90));
  if ((n1 < pfVar12) || (((factors *)n1 == pfVar12 && (n0 <= pfVar18)))) {
    bVar19 = pfVar18 < n0;
    pfVar18 = (factors *)((long)pfVar18 - n0);
    pfVar12 = (factors *)((long)pfVar12 + (-(ulong)bVar19 - n1));
  }
  uVar22.uu[1] = (uintmax_t)pfVar12;
  uVar22.uu[0] = (uintmax_t)pfVar18;
  if (((factors *)n0 != (factors *)0x1) || ((factors *)n1 != (factors *)0x0)) {
    lVar17 = 1;
    local_60 = 1;
    uVar20.uu = uVar22.uu;
    uVar21.uu = uVar22.uu;
LAB_00102390:
    auVar6[1] = n1;
    auVar6[0] = n0;
    uVar13 = (ulong)binvert_table[(uint)(n0 >> 1) & 0x7f];
    lVar15 = uVar13 * 2 - uVar13 * uVar13 * n0;
    lVar15 = lVar15 * 2 - lVar15 * lVar15 * n0;
    uVar16 = lVar15 * 2 - lVar15 * lVar15 * n0;
    lVar15 = local_60;
    do {
      local_60 = lVar15;
      local_68 = uVar21.uu[1];
      local_78 = uVar21.uu[0];
      uVar14 = mulredc2(&r1m,uVar20.uu[1],uVar20.uu[0],uVar20.uu[1],uVar20.uu[0],n1,n0,uVar16);
      pfVar18 = (factors *)(uVar14 + local_70);
      pfVar12 = (factors *)(r1m + CARRY8(uVar14,local_70));
      if ((n1 < pfVar12) || (((factors *)n1 == pfVar12 && (n0 <= pfVar18)))) {
        bVar19 = pfVar18 < n0;
        pfVar18 = (factors *)((long)pfVar18 - n0);
        pfVar12 = (factors *)((long)pfVar12 + (-(ulong)bVar19 - n1));
      }
      auVar10._8_8_ = pfVar12;
      auVar10._0_8_ = pfVar18;
      auVar10 = (undefined1  [16])uVar21.uu - auVar10;
      if (auVar10._8_8_ < 0) {
        auVar10 = auVar10 + (undefined1  [16])auVar6;
      }
      local_90 = (factors *)
                 mulredc2(&r1m,(uintmax_t)local_98,(uintmax_t)local_90,auVar10._8_8_,auVar10._0_8_,
                          n1,n0,uVar16);
      local_98 = (factors *)r1m;
      auVar5 = uVar22.uu;
      if (((uint)lVar17 & 0x1f) == 1) {
        if ((n0 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("b0 & 1","src/factor.c",0x1d1,__PRETTY_FUNCTION___4);
        }
        uVar20.uu = auVar6;
        if (local_90 != (factors *)0x0 || r1m != 0) {
          uVar20 = gcd2_odd(r1m,(uintmax_t)local_90,n1,n0);
        }
        if ((uVar20.uu[1] != 0) ||
           (auVar5[1] = (uintmax_t)pfVar12, auVar5[0] = (uintmax_t)pfVar18, uVar20.uu[0] != 1))
        goto LAB_0010260e;
      }
      auVar9[1] = (uintmax_t)pfVar12;
      auVar9[0] = (uintmax_t)pfVar18;
      auVar8[1] = (uintmax_t)pfVar12;
      auVar8[0] = (uintmax_t)pfVar18;
      auVar7[1] = (uintmax_t)pfVar12;
      auVar7[0] = (uintmax_t)pfVar18;
      uVar20.uu[1] = (uintmax_t)pfVar12;
      uVar20.uu[0] = (uintmax_t)pfVar18;
      auVar4[1] = (uintmax_t)pfVar12;
      auVar4[0] = (uintmax_t)pfVar18;
      lVar17 = lVar17 + -1;
      uVar22.uu = auVar5;
      lVar15 = local_60;
      if ((lVar17 == 0) &&
         (uVar22.uu = auVar4, uVar20.uu = auVar7, uVar21.uu = auVar9, local_60 != 0)) {
        lVar17 = 0;
        do {
          uVar14 = mulredc2(&r1m,(uintmax_t)pfVar12,(uintmax_t)pfVar18,(uintmax_t)pfVar12,
                            (uintmax_t)pfVar18,n1,n0,uVar16);
          pfVar18 = (factors *)(uVar14 + local_70);
          pfVar12 = (factors *)(r1m + CARRY8(uVar14,local_70));
          if ((n1 < pfVar12) || (((factors *)n1 == pfVar12 && (n0 <= pfVar18)))) {
            bVar19 = pfVar18 < n0;
            pfVar18 = (factors *)((long)pfVar18 - n0);
            pfVar12 = (factors *)((long)pfVar12 + (-(ulong)bVar19 - n1));
          }
          uVar22.uu[1] = (uintmax_t)pfVar12;
          uVar22.uu[0] = (uintmax_t)pfVar18;
          lVar17 = lVar17 + 1;
          lVar15 = local_60 * 2;
          uVar20.uu = uVar22.uu;
          uVar21.uu = auVar8;
        } while (local_60 != lVar17);
      }
    } while( true );
  }
LAB_0010288b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
  goto LAB_001028f9;
  while (n == (factors *)0x1) {
LAB_0010260e:
    uVar14 = mulredc2(&r1m,uVar22.uu[1],uVar22.uu[0],uVar22.uu[1],uVar22.uu[0],n1,n0,uVar16);
    a0 = (factors *)(uVar14 + local_70);
    a1 = (factors *)(r1m + CARRY8(uVar14,local_70));
    if ((n1 < a1) || (((factors *)n1 == a1 && (n0 <= a0)))) {
      bVar19 = a0 < n0;
      a0 = (factors *)((long)a0 - n0);
      a1 = (factors *)((long)a1 + (-(ulong)bVar19 - n1));
    }
    uVar22.uu[1] = (uintmax_t)a1;
    uVar22.uu[0] = (uintmax_t)a0;
    auVar10 = (undefined1  [16])uVar21.uu - (undefined1  [16])uVar22.uu;
    if (auVar10._8_8_ < 0) {
      auVar10 = auVar10 + (undefined1  [16])auVar6;
    }
    uVar20.uu = auVar6;
    if (auVar10._8_8_ != 0 || auVar10._0_8_ != 0) {
      uVar20 = gcd2_odd(auVar10._8_8_,auVar10._0_8_,n1,n0);
    }
    factors_00 = uVar20.uu[1];
    n = uVar20.uu[0];
    if (factors_00 != (factors *)0x0) {
      if (uVar20.uu == auVar6) {
        local_70 = local_70 + 1;
        goto LAB_001022ce;
      }
      bVar1 = binvert_table[(uint)((ulong)n >> 1) & 0x7f];
      p1 = n;
      _Var11 = prime2_p((uintmax_t)factors_00,(uintmax_t)n);
      if (_Var11) {
        uVar16 = extraout_RDX_00;
        if ((factors->plarge).uu[1] != 0) goto LAB_001028fe;
        *&(factors->plarge).uu = uVar20.uu;
      }
      else {
        factor_using_pollard_rho2((uintmax_t)factors_00,(uintmax_t)n,local_70 + 1,factors);
      }
      uVar13 = (ulong)bVar1;
      lVar17 = uVar13 * 2 - uVar13 * uVar13 * (long)n;
      lVar17 = lVar17 * 2 - lVar17 * lVar17 * (long)n;
      n0 = n0 * (lVar17 * 2 - lVar17 * lVar17 * (long)n);
      goto LAB_0010282f;
    }
  }
  uVar13 = (ulong)binvert_table[(uint)((ulong)n >> 1) & 0x7f];
  lVar15 = uVar13 * 2 - uVar13 * uVar13 * (long)n;
  lVar15 = lVar15 * 2 - lVar15 * lVar15 * (long)n;
  lVar15 = lVar15 * 2 - lVar15 * lVar15 * (long)n;
  n0 = n0 * lVar15;
  if (n1 < n) {
    n1 = 0;
  }
  else {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = n0;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = n;
    n1 = (n1 - SUB168(auVar2 * auVar3,8)) * lVar15;
  }
  _Var11 = prime_p((uintmax_t)n);
  if (_Var11) {
    factor_insert_multiplicity(factors,(uintmax_t)n,1);
  }
  else {
    factor_using_pollard_rho((uintmax_t)n,local_70 + 1,factors);
  }
  if ((factors *)n1 == (factors *)0x0) goto LAB_0010282f;
  p1 = (factors *)n0;
  factors_00 = (factors *)n1;
  _Var11 = prime2_p(n1,n0);
  if (_Var11) {
    uVar16 = extraout_RDX;
    if ((factors->plarge).uu[1] != 0) {
LAB_001028fe:
                    /* WARNING: Subroutine does not return */
      factor_insert_large(factors_00,(uintmax_t)p1,uVar16);
    }
    (factors->plarge).uu[0] = n0;
    (factors->plarge).uu[1] = n1;
    goto LAB_0010288b;
  }
  uVar20 = mod2((uintmax_t)pfVar12,(uintmax_t)pfVar18,n1,n0);
  uVar21 = mod2(local_68,local_78,n1,n0);
  uVar22 = mod2((uintmax_t)a1,(uintmax_t)a0,n1,n0);
  goto LAB_00102390;
LAB_0010282f:
  _Var11 = prime_p(n0);
  if (_Var11) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      factor_insert_multiplicity(factors,n0,1);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    factor_using_pollard_rho(n0,local_70,factors);
    return;
  }
LAB_001028f9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void lbuf_putnl(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = lbuffered + 1;
  lbuf_buf[lbuffered] = '\n';
  lbuffered = lVar1;
  if (line_buffered_0 < 0) {
    line_buffered_0 = isatty(1);
  }
  if (line_buffered_0 == 0) {
    if (0xfff < lVar1) {
      lbuf_half_flush();
      return;
    }
  }
  else {
    lbuffered = 0;
    lVar2 = full_write(1,lbuf_buf,lVar1);
    if (lVar1 != lVar2) {
                    /* WARNING: Subroutine does not return */
      write_error();
    }
  }
  return;
}



/* WARNING: Unknown calling convention */

void lbuf_putmpz(__mpz_struct *i)

{
  idx_t iVar1;
  long lVar2;
  long lVar3;
  void *__ptr;
  char *pcVar4;
  
  lVar2 = mpz_sizeinbase(i,10);
  iVar1 = lbuffered;
  if (lVar2 < 0x2000 - lbuffered) {
    pcVar4 = lbuf_buf + lbuffered;
    mpz_get_str(pcVar4,10,i);
    lbuffered = (idx_t)(pcVar4 + ((lVar2 + -0x103ce0) - (ulong)(pcVar4[lVar2 + -1] == '\0')));
    while (0xfff < lbuffered) {
      lbuf_half_flush();
    }
    return;
  }
  lbuffered = 0;
  lVar3 = full_write(1,lbuf_buf,iVar1);
  if (iVar1 == lVar3) {
    __ptr = (void *)ximalloc(lVar2 + 1);
    mpz_get_str(__ptr,10,i);
    lVar2 = lVar2 - (ulong)(*(char *)((long)__ptr + lVar2 + -1) == '\0');
    lVar3 = full_write(1,__ptr,lVar2);
    if (lVar3 == lVar2) {
      free(__ptr);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  write_error();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void mp_factor_using_pollard_rho(__mpz_struct *n,ulong a,mp_factors *factors)

{
  long lVar1;
  long lVar2;
  _Bool _Var3;
  int iVar4;
  long lVar5;
  long in_FS_OFFSET;
  long local_c0;
  mpz_t x;
  mpz_t z;
  mpz_t y;
  mpz_t P;
  mpz_t t;
  mpz_t t2;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (dev_debug) {
    __fprintf_chk(_stderr,2,"[pollard-rho (%lu)] ",a);
  }
  lVar5 = 1;
  mpz_va_init(mpz_init,t,t2,0);
  mpz_init_set_si(y,2);
  mpz_init_set_si(x,2);
  mpz_init_set_si(z,2);
  mpz_init_set_ui(P,1);
  local_c0 = 1;
LAB_00102c21:
  iVar4 = mpz_cmp_ui(n,1);
  lVar2 = lVar5;
  if (iVar4 != 0) {
LAB_00102c4a:
    lVar5 = lVar2;
    mpz_mul(t,x,x);
    mpz_mod(x,t,n);
    mpz_add_ui(x,x,a);
    mpz_sub(t,z,x);
    mpz_mul(t2,P,t);
    mpz_mod(P,t2,n);
    if (((uint)lVar5 & 0x1f) == 1) {
      mpz_gcd(t,P,n);
      iVar4 = mpz_cmp_ui(t,1);
      if (iVar4 != 0) goto LAB_00102d70;
      mpz_set(y,x);
    }
    lVar2 = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      lVar5 = lVar5 + -1;
      mpz_set(z,x);
      if (local_c0 != 0) {
        do {
          lVar5 = lVar5 + 1;
          mpz_mul(t,x,x);
          mpz_mod(x,t,n);
          mpz_add_ui(x,x,a);
        } while (local_c0 != lVar5);
      }
      mpz_set(y,x);
      lVar2 = local_c0;
      local_c0 = local_c0 * 2;
    }
    goto LAB_00102c4a;
  }
LAB_00102eb5:
  mpz_va_init(mpz_clear,P,t2,t,z,x,y);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00102d70:
  do {
    mpz_mul(t,y);
    mpz_mod(y,t,n);
    mpz_add_ui(y,y,a);
    mpz_sub(t,z,y);
    mpz_gcd(t,t,n);
    iVar4 = mpz_cmp_ui(t,1);
  } while (iVar4 == 0);
  mpz_divexact(n,n,t);
  iVar4 = mpz_cmp_ui(t,1);
  if ((iVar4 < 1) ||
     ((iVar4 = mpz_cmp_ui(t,0x17ded79), -1 < iVar4 && (_Var3 = mp_prime_p(t), !_Var3)))) {
    if (dev_debug != false) {
      fwrite("[composite factor--restarting pollard-rho] ",1,0x2b,_stderr);
    }
    mp_factor_using_pollard_rho(t,a + 1,factors);
  }
  else {
    mp_factor_insert(factors,t);
  }
  iVar4 = mpz_cmp_ui(n,1);
  if ((0 < iVar4) &&
     ((iVar4 = mpz_cmp_ui(n,0x17ded79), iVar4 < 0 || (_Var3 = mp_prime_p(n), _Var3)))) {
    mp_factor_insert(factors,n);
    goto LAB_00102eb5;
  }
  mpz_mod(x,x,n);
  mpz_mod(z,z,n);
  mpz_mod(y,y,n);
  goto LAB_00102c21;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void mp_factor(__mpz_struct *t,mp_factors *factors)

{
  long lVar1;
  _Bool _Var2;
  int iVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  mpz_t q;
  mpz_t pz;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  factors->p = (mpz_t *)0x0;
  factors->e = (ulong *)0x0;
  factors->nfactors = 0;
  factors->nalloc = 0;
  iVar3 = mpz_sgn();
  if (iVar3 == 0) {
LAB_00102f88:
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
LAB_001031ba:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  if (dev_debug != false) {
    fwrite("[trial division] ",1,0x11,_stderr);
  }
  mpz_init();
  lVar4 = mpz_scan1(t,0);
  mpz_fdiv_q_2exp(t,t,lVar4);
  if (lVar4 != 0) {
    do {
      mpz_init_set_ui(pz,2);
      mp_factor_insert(factors,pz);
      mpz_clear(pz);
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  lVar5 = 1;
  lVar4 = 3;
  do {
    iVar3 = mpz_divisible_ui_p(t,lVar4);
    while (iVar3 == 0) {
      lVar4 = lVar4 + (ulong)"\x01\x02\x02\x04\x02\x04\x02\x04\x06\x02\x06\x04\x02\x04\x06\x06\x02\x06\x04\x02\x06\x04\x06\b\x04\x02\x04\x02\x04\x0e\x04\x06\x02\n\x02\x06\x06\x04\x06\x06\x02\n\x02\x04\x02\f\f\x04\x02\x04\x06\x02\n\x06\x06\x06\x02\x06\x04\x02\n\x0e\x04\x02\x04\x0e\x06\n\x02\x04\x06\b\x06\x06\x04\x06\b\x04\b\n\x02\n\x02\x06\x04\x06\b\x04\x02\x04\f\b\x04\b\x04\x06\f\x02\x12\x06\n\x06\x06\x02\x06\n\x06\x06\x02\x06\x06\x04\x02\f\n\x02\x04\x06\x06\x02\f\x04\x06\b\n\b\n\b\x06\x06\x04\b\x06\x04\b\x04\x0e\n\f\x02\n\x02\x04\x02\n\x0e\x04\x02\x04\x0e\x04\x02\x04\x14\x04\b\n\b\x04\x06\x06\x0e\x04\x06\x06\b\x06\f\x04\x06\x02\n\x02\x06\n\x02\n\x02\x06\x12\x04\x02\x04\x06\x06\b\x06\x06\x16\x02\n\b\n\x06\x06\b\f\x04\x06\x06\x02\x06\f\n\x12\x02\x04\x06\x02\x06\x04\x02\x04\f\x02\x06\"\x06\x06\b\x12\n\x0e\x04\x02\x04\x06\b\x04\x02\x06\f\n\x02\x04\x02\x04\x06\f\f\b\f\x06\x04\x06\b\x04\b\x04\x0e\x04\x06\x02\x04\x06\x02\x06\n\x14\x06\x04\x02\x18\x04\x02\n\f\x02\n\b\x06\x06\x06\x12\x06\x04\x02\f\n\f\b\x10\x0e\x06\x04\x02\x04\x02\n\f\x06\x06\x12\x02\x10\x02\x16\x06\b\x06\x04\x02\x04\b\x06\n\x02\n\x0e\n\x06\f\x02\x04\x02\n\f\x02\x10\x02\x06\x04\x02\n\b\x12\x18\x04\x06\b\x10\x02\x04\b\x10\x02\x04\b\x06\x06\x04\f\x02\x16\x06\x02\x06\x04\x06\x0e\x06\x04\x02\x06\x04\x06\f\x06\x06\x0e\x04\x06\f\b\x06\x04\x1a\x12\n\b\x04\x06\x02\x06\x16\f\x02\x10\b\x04\f\x0e\n\x02\x04\b\x06\x06\x04\x02\x04\x06\b\x04\x02\x06\n\x02\n\b\x04\x0e\n\f\x02\x06\x04\x02\x10\x0e\x04\x06\b\x06\x04\x12\b\n\x06\x06\b\n\f\x0e\x04\x06\x06\x02\x1c\x02\n\b\x04\x0e\x04\b\f\x06\f\x04\x06\x14\n\x02\x10\x1a\x04\x02\f\x06\x04\f\x06\b\x04\b\x16\x02\x04\x02\f\x1c\x02\x06\x06\x06\x04\x06\x02\f\x04\f\x02\n\x02\x10\x02\x10\x06\x14\x10\b\x04\x02\x04\x02\x16\b\f\x06\n\x02\x04\x06\x02\x06\n\x02\f\n\x02\n\x0e\x06\x04\x06\b\x06\x06\x10\f\x02\x04\x0e\x06\x04\b\n\b\x06\x06\x16\x06\x02\n\x0e\x04\x06\x12\x02\n\x0e\x04\x02\n\x0e\x04\b\x12\x04\x06\x02\x04\x06\x02\f\x04\x14\x16\f\x02\x04\x06\x06\x02\x06\x16\x02\x06\x10\x06\f\x02\x06\f\x10\x02\x04\x06\x0e\x04\x02\x12\x18\n\x06\x02\n\x02\n\x02\n\x06\x02\n\x02\n\x06\b\x1e\n\x02\n\b\x06\n\x12\x06\f\f\x02\x12\x06\x04\x06\x06\x12\x02\n\x0e\x06\x04\x02\x04\x18\x02\f\x06\x10\b\x06\x06\x12\x10\x02\x04\x06\x02\x06\x06\n\x06\f\f\x12\x02\x06\x04\x12\b\x18\x04\x02\x04\x06\x02\f\x04\x0e\x1e\n\x06\f\x0e\x06\n\f\x02\x04\x06\b\x06\n\x02\x04\x0e\x06\x06"
                             [lVar5];
      iVar3 = mpz_cmp_ui(t,lVar4 * lVar4);
      if ((iVar3 < 0) || (lVar5 + 1 == 0x29d)) {
        mpz_clear(q);
        iVar3 = mpz_cmp_ui(t,1);
        if (iVar3 == 0) goto LAB_00102f88;
        if (dev_debug != false) {
          fwrite("[is number prime?] ",1,0x13,_stderr);
        }
        iVar3 = mpz_cmp_ui(t,1);
        if ((iVar3 < 1) ||
           ((iVar3 = mpz_cmp_ui(t,0x17ded79), -1 < iVar3 && (_Var2 = mp_prime_p(t), !_Var2)))) {
          if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
            mp_factor_using_pollard_rho(t,1,factors);
            return;
          }
        }
        else if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
          mp_factor_insert(factors,t);
          return;
        }
        goto LAB_001031ba;
      }
      iVar3 = mpz_divisible_ui_p(t,lVar4);
      lVar5 = lVar5 + 1;
    }
    mpz_tdiv_q_ui(t,t,lVar4);
    mpz_init_set_ui(pz,lVar4);
    mp_factor_insert(factors,pz);
    mpz_clear(pz);
  } while( true );
}



/* WARNING: Unknown calling convention */

_Bool mp_prime_p(__mpz_struct *n)

{
  long lVar1;
  _Bool _Var2;
  int iVar3;
  mp_bitcnt_t k;
  long lVar4;
  long lVar5;
  uchar *puVar6;
  long in_FS_OFFSET;
  _Bool local_a9;
  mp_factors factors;
  mpz_t q;
  mpz_t a;
  mpz_t nm1;
  mpz_t tmp;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  mpz_va_init(mpz_init,q,a,nm1,tmp,0);
  mpz_sub_ui(nm1,n,1);
  k = mpz_scan1(nm1,0);
  mpz_tdiv_q_2exp(q,nm1,k);
  mpz_set_ui(a,2);
  _Var2 = mp_millerrabin(n,nm1,a,tmp,q,k);
  local_a9 = _Var2;
  if (_Var2) {
    puVar6 = 
    "\x01\x02\x02\x04\x02\x04\x02\x04\x06\x02\x06\x04\x02\x04\x06\x06\x02\x06\x04\x02\x06\x04\x06\b\x04\x02\x04\x02\x04\x0e\x04\x06\x02\n\x02\x06\x06\x04\x06\x06\x02\n\x02\x04\x02\f\f\x04\x02\x04\x06\x02\n\x06\x06\x06\x02\x06\x04\x02\n\x0e\x04\x02\x04\x0e\x06\n\x02\x04\x06\b\x06\x06\x04\x06\b\x04\b\n\x02\n\x02\x06\x04\x06\b\x04\x02\x04\f\b\x04\b\x04\x06\f\x02\x12\x06\n\x06\x06\x02\x06\n\x06\x06\x02\x06\x06\x04\x02\f\n\x02\x04\x06\x06\x02\f\x04\x06\b\n\b\n\b\x06\x06\x04\b\x06\x04\b\x04\x0e\n\f\x02\n\x02\x04\x02\n\x0e\x04\x02\x04\x0e\x04\x02\x04\x14\x04\b\n\b\x04\x06\x06\x0e\x04\x06\x06\b\x06\f\x04\x06\x02\n\x02\x06\n\x02\n\x02\x06\x12\x04\x02\x04\x06\x06\b\x06\x06\x16\x02\n\b\n\x06\x06\b\f\x04\x06\x06\x02\x06\f\n\x12\x02\x04\x06\x02\x06\x04\x02\x04\f\x02\x06\"\x06\x06\b\x12\n\x0e\x04\x02\x04\x06\b\x04\x02\x06\f\n\x02\x04\x02\x04\x06\f\f\b\f\x06\x04\x06\b\x04\b\x04\x0e\x04\x06\x02\x04\x06\x02\x06\n\x14\x06\x04\x02\x18\x04\x02\n\f\x02\n\b\x06\x06\x06\x12\x06\x04\x02\f\n\f\b\x10\x0e\x06\x04\x02\x04\x02\n\f\x06\x06\x12\x02\x10\x02\x16\x06\b\x06\x04\x02\x04\b\x06\n\x02\n\x0e\n\x06\f\x02\x04\x02\n\f\x02\x10\x02\x06\x04\x02\n\b\x12\x18\x04\x06\b\x10\x02\x04\b\x10\x02\x04\b\x06\x06\x04\f\x02\x16\x06\x02\x06\x04\x06\x0e\x06\x04\x02\x06\x04\x06\f\x06\x06\x0e\x04\x06\f\b\x06\x04\x1a\x12\n\b\x04\x06\x02\x06\x16\f\x02\x10\b\x04\f\x0e\n\x02\x04\b\x06\x06\x04\x02\x04\x06\b\x04\x02\x06\n\x02\n\b\x04\x0e\n\f\x02\x06\x04\x02\x10\x0e\x04\x06\b\x06\x04\x12\b\n\x06\x06\b\n\f\x0e\x04\x06\x06\x02\x1c\x02\n\b\x04\x0e\x04\b\f\x06\f\x04\x06\x14\n\x02\x10\x1a\x04\x02\f\x06\x04\f\x06\b\x04\b\x16\x02\x04\x02\f\x1c\x02\x06\x06\x06\x04\x06\x02\f\x04\f\x02\n\x02\x10\x02\x10\x06\x14\x10\b\x04\x02\x04\x02\x16\b\f\x06\n\x02\x04\x06\x02\x06\n\x02\f\n\x02\n\x0e\x06\x04\x06\b\x06\x06\x10\f\x02\x04\x0e\x06\x04\b\n\b\x06\x06\x16\x06\x02\n\x0e\x04\x06\x12\x02\n\x0e\x04\x02\n\x0e\x04\b\x12\x04\x06\x02\x04\x06\x02\f\x04\x14\x16\f\x02\x04\x06\x06\x02\x06\x16\x02\x06\x10\x06\f\x02\x06\f\x10\x02\x04\x06\x0e\x04\x02\x12\x18\n\x06\x02\n\x02\n\x02\n\x06\x02\n\x02\n\x06\b\x1e\n\x02\n\b\x06\n\x12\x06\f\f\x02\x12\x06\x04\x06\x06\x12\x02\n\x0e\x06\x04\x02\x04\x18\x02\f\x06\x10\b\x06\x06\x12\x10\x02\x04\x06\x02\x06\x06\n\x06\f\f\x12\x02\x06\x04\x12\b\x18\x04\x02\x04\x06\x02\f\x04\x0e\x1e\n\x06\f\x0e\x06\n\f\x02\x04\x06\b\x06\n\x02\x04\x0e\x06\x06"
    ;
    mpz_set(tmp,nm1);
    mp_factor(tmp,&factors);
    while (local_a9 = _Var2, 0 < factors.nfactors) {
      lVar4 = 0;
      do {
        mpz_divexact(tmp,nm1,factors.p + lVar4);
        mpz_powm(tmp,a,tmp,n);
        iVar3 = mpz_cmp_ui(tmp,1);
        if (factors.nfactors <= lVar4 + 1) {
          if (iVar3 != 0) goto LAB_00103375;
          break;
        }
        lVar4 = lVar4 + 1;
      } while (iVar3 != 0);
      mpz_add_ui(a,a,*puVar6);
      local_a9 = mp_millerrabin(n,nm1,a,tmp,q,k);
      if (!local_a9) {
LAB_00103375:
        if (0 < factors.nfactors) {
          lVar4 = 0;
          do {
            lVar5 = lVar4 + 1;
            mpz_clear(factors.p + lVar4);
            lVar4 = lVar5;
          } while (lVar5 < factors.nfactors);
        }
        break;
      }
      puVar6 = puVar6 + 1;
      if (puVar6 == "") {
                    /* WARNING: Subroutine does not return */
        __assert_fail("!\"Lucas prime test failure.  This should not happen\"","src/factor.c",0x595,
                      "mp_prime_p");
      }
    }
    free(factors.p);
    free(factors.e);
  }
  mpz_va_init(mpz_clear,q,a,nm1,tmp,0);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_a9;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

_Bool print_factors(char *input)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  uuint t_00;
  _Bool _Var7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar12;
  byte *pbVar13;
  ulong uVar14;
  int iVar15;
  ulong t1;
  long lVar16;
  byte *pbVar17;
  factors *pfVar18;
  _Bool *p_Var19;
  _Bool *p_Var20;
  char *pcVar21;
  _Bool *p_Var22;
  _Bool *p_Var23;
  long lVar24;
  long in_FS_OFFSET;
  byte bVar25;
  uuint t_01;
  uuint t_02;
  int local_170;
  mp_factors factors;
  mpz_t t;
  ulong local_138 [29];
  byte local_4e;
  long local_40;
  
  bVar25 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = *input;
  while (cVar1 == ' ') {
    pcVar21 = input + 1;
    input = input + 1;
    cVar1 = *pcVar21;
  }
  bVar3 = true;
  pbVar17 = (byte *)(input + (cVar1 == '+'));
  pbVar13 = pbVar17;
  do {
    bVar2 = *pbVar13;
    pbVar13 = pbVar13 + 1;
    if (bVar2 == 0) {
      uVar14 = 0;
      t1 = 0;
      pbVar13 = pbVar17;
      if (!bVar3) goto LAB_001034e7;
      break;
    }
    bVar3 = false;
  } while (bVar2 - 0x30 < 10);
  uVar8 = quote();
  uVar9 = dcgettext(0,"%s is not a valid positive integer",5);
  error(0,0,uVar9,uVar8);
  _Var7 = false;
  goto LAB_001034a8;
  while( true ) {
    if (0x1999999999999999 < t1) break;
    uVar10 = uVar14 * 2;
    uVar4 = uVar14 * 10;
    uVar11 = (ulong)(byte)(bVar2 - 0x30);
    uVar6 = (uint)(uVar14 >> 0x20);
    uVar14 = uVar4 + uVar11;
    uVar5 = t1 * 10;
    uVar10 = (ulong)(int)(((uVar6 >> 0x1d) - ((int)uVar6 >> 0x1f)) + (uint)(uVar4 < uVar10) +
                         (uint)CARRY8(uVar4,uVar11));
    t1 = uVar5 + uVar10;
    if (CARRY8(uVar5,uVar10)) break;
LAB_001034e7:
    bVar2 = *pbVar13;
    pbVar13 = pbVar13 + 1;
    if (bVar2 == 0) {
      if (-1 < (long)t1) {
        if (dev_debug) {
          fwrite("[using single-precision arithmetic] ",1,0x24,_stderr);
        }
        t_01.uu[1] = t1;
        t_01.uu[0] = uVar14;
        print_uuint(t_01);
        local_4e = 0;
        t[0]._mp_d = (mp_limb_t *)0x0;
        lVar24 = lbuffered + 1;
        lbuf_buf[lbuffered] = ':';
        lbuffered = lVar24;
        if ((t1 != 0) || (1 < uVar14)) {
          factor(t1,uVar14,(factors *)t);
          if (local_4e != 0) {
            puVar12 = local_138;
            pfVar18 = (factors *)t;
            do {
              _Var7 = print_exponents;
              iVar15 = 0;
              if (pfVar18->e[0] != '\0') {
                do {
                  uVar14 = *puVar12;
                  lbuf_buf[lbuffered] = ' ';
                  t_02.uu[1] = 0;
                  t_02.uu[0] = uVar14;
                  lbuffered = lbuffered + 1;
                  print_uuint(t_02);
                  if (_Var7 != false) {
                    bVar2 = pfVar18->e[0];
                    if (1 < bVar2) {
                      lbuf_buf[lbuffered] = '^';
                      uVar14 = (ulong)bVar2;
                      p_Var22 = &dev_debug;
                      do {
                        p_Var23 = p_Var22;
                        p_Var22 = p_Var23 + -1;
                        *p_Var22 = (_Bool)((char)uVar14 + (char)(uVar14 / 10) * -10 + '0');
                        bVar3 = 9 < uVar14;
                        uVar14 = uVar14 / 10;
                      } while (bVar3);
                      p_Var20 = p_Var22;
                      pcVar21 = lbuf_buf + lbuffered + 1;
                      do {
                        p_Var19 = p_Var20 + (ulong)bVar25 * -2 + 1;
                        *pcVar21 = *p_Var20;
                        p_Var20 = p_Var19;
                        pcVar21 = pcVar21 + (ulong)bVar25 * -2 + 1;
                      } while (p_Var19 < &dev_debug);
                      lVar24 = (long)&dev_debug - (long)p_Var22;
                      if (&dev_debug < p_Var23) {
                        lVar24 = 1;
                      }
                      lbuffered = (idx_t)(lbuf_buf + lbuffered + 1 + lVar24 + -0x103ce0);
                    }
                    break;
                  }
                  iVar15 = iVar15 + 1;
                } while (iVar15 < (int)(uint)pfVar18->e[0]);
              }
              local_170 = (int)(factors *)t;
              pfVar18 = (factors *)((long)(pfVar18->plarge).uu + 1);
              puVar12 = puVar12 + 1;
            } while ((int)pfVar18 - local_170 < (int)(uint)local_4e);
          }
          if (t[0]._mp_d != (mp_limb_t *)0x0) {
            t_00.uu[1] = (uintmax_t)t[0]._mp_d;
            t_00.uu[0]._0_4_ = t[0]._mp_alloc;
            t_00.uu[0]._4_4_ = t[0]._mp_size;
            lbuf_buf[lbuffered] = ' ';
            lbuffered = lbuffered + 1;
            print_uuint(t_00);
          }
        }
        goto LAB_00103682;
      }
      break;
    }
  }
  if (dev_debug) {
    fwrite("[using arbitrary-precision arithmetic] ",1,0x27,_stderr);
  }
  mpz_init_set_str(t,pbVar17,10);
  lbuf_putmpz(t);
  lbuf_buf[lbuffered] = ':';
  lbuffered = lbuffered + 1;
  mp_factor(t,&factors);
  if (0 < factors.nfactors) {
    lVar24 = 0;
    puVar12 = factors.e;
    do {
      while( true ) {
        uVar14 = 0;
        if (puVar12[lVar24] == 0) break;
        do {
          lbuf_buf[lbuffered] = ' ';
          lbuffered = lbuffered + 1;
          lbuf_putmpz(factors.p[lVar24]);
          puVar12 = factors.e;
          if (print_exponents != false) {
            if (1 < factors.e[lVar24]) {
              lbuf_buf[lbuffered] = '^';
              uVar14 = factors.e[lVar24];
              p_Var22 = &dev_debug;
              do {
                p_Var23 = p_Var22;
                p_Var22 = p_Var23 + -1;
                *p_Var22 = (_Bool)((char)uVar14 + (char)(uVar14 / 10) * -10 + '0');
                bVar3 = 9 < uVar14;
                uVar14 = uVar14 / 10;
              } while (bVar3);
              p_Var20 = p_Var22;
              pcVar21 = lbuf_buf + lbuffered + 1;
              do {
                p_Var19 = p_Var20 + (ulong)bVar25 * -2 + 1;
                *pcVar21 = *p_Var20;
                p_Var20 = p_Var19;
                pcVar21 = pcVar21 + (ulong)bVar25 * -2 + 1;
              } while (p_Var19 < &dev_debug);
              lVar16 = (long)&dev_debug - (long)p_Var22;
              if (&dev_debug < p_Var23) {
                lVar16 = 1;
              }
              lbuffered = (idx_t)(lbuf_buf + lbuffered + 1 + lVar16 + -0x103ce0);
            }
            goto LAB_001035ca;
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 < factors.e[lVar24]);
        lVar24 = lVar24 + 1;
        if (factors.nfactors <= lVar24) goto LAB_0010363a;
      }
LAB_001035ca:
      lVar24 = lVar24 + 1;
    } while (lVar24 < factors.nfactors);
LAB_0010363a:
    if (0 < factors.nfactors) {
      lVar24 = 0;
      do {
        lVar16 = lVar24 + 1;
        mpz_clear(factors.p + lVar24);
        lVar24 = lVar16;
      } while (lVar16 < factors.nfactors);
    }
  }
  free(factors.p);
  free(factors.e);
  mpz_clear(t);
LAB_00103682:
  lbuf_putnl();
  _Var7 = true;
LAB_001034a8:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return _Var7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void usage(int status)

{
  FILE *pFVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  char *pcVar6;
  infomap *piVar7;
  infomap infomap [7];
  
  uVar5 = _program_name;
  piVar7 = infomap;
  if (status != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(_stderr,2,uVar3,uVar5);
    goto LAB_001039ba;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION] [NUMBER]...\n",5);
  __printf_chk(2,uVar3,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "Print the prime factors of each specified integer NUMBER.  If none\nare specified on the command line, read them from standard input.\n\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  fwrite_unlocked("  -h, --exponents   print repeated factors in form p^e unless e is 1\n",1,0x45,
                  _stdout);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pcVar4 = "[";
  infomap[0].program = "[";
  infomap[0].node = "test invocation";
  infomap[1].program = "coreutils";
  infomap[1].node = "Multi-call invocation";
  infomap[2].program = "sha224sum";
  infomap[2].node = "sha2 utilities";
  infomap[3].program = "sha256sum";
  infomap[3].node = "sha2 utilities";
  infomap[4].program = "sha384sum";
  infomap[4].node = "sha2 utilities";
  infomap[5].program = "sha512sum";
  infomap[5].node = "sha2 utilities";
  infomap[6].program = (char *)0x0;
  infomap[6].node = (char *)0x0;
  do {
    iVar2 = strcmp("factor",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)piVar7 + 0x10);
    piVar7 = (infomap *)((long)piVar7 + 0x10);
  } while (pcVar4 != (char *)0x0);
  pcVar4 = *(char **)((long)piVar7 + 8);
  if (pcVar4 == (char *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    pcVar4 = "factor";
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) goto LAB_00103b95;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","factor");
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) {
LAB_00103b95:
      iVar2 = strncmp(pcVar6,"en_",3);
      pFVar1 = _stdout;
      if (iVar2 != 0) {
        pcVar6 = (char *)dcgettext(0,
                                   "Report any translation bugs to <https://translationproject.org/team/>\n"
                                   ,5);
        fputs_unlocked(pcVar6,pFVar1);
      }
    }
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = "";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","factor");
    if (pcVar4 == "factor") {
      pcVar6 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,pcVar4,pcVar6);
LAB_001039ba:
                    /* WARNING: Subroutine does not return */
  exit(status);
}



/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int main(int argc,char **argv)

{
  long lVar1;
  _Bool _Var2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int *piVar7;
  long lVar8;
  _Bool _Var9;
  long in_FS_OFFSET;
  token_buffer tokenbuffer;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  while( true ) {
    while( true ) {
      iVar3 = getopt_long(argc,argv,&_LC49,long_options,0);
      if (iVar3 == -1) {
        atexit(lbuf_flush);
        lVar8 = (long)_optind;
        if (_optind < argc) {
          _Var9 = true;
          for (; (int)lVar8 < argc; lVar8 = lVar8 + 1) {
            _Var2 = print_factors(argv[lVar8]);
            if (_Var2) {
              _Var2 = _Var9;
            }
            _Var9 = _Var2;
          }
        }
        else {
          _Var9 = true;
          init_tokenbuffer(&tokenbuffer);
          while( true ) {
            lVar8 = readtoken(_stdin,&_LC50,3,&tokenbuffer);
            if (lVar8 == -1) break;
            _Var2 = print_factors(tokenbuffer.buffer);
            _Var9 = (_Bool)(_Var9 & _Var2);
          }
          if ((*_stdin & 0x20) != 0) {
            uVar4 = dcgettext(0,"error reading input",5);
            piVar7 = __errno_location();
            error(1,*piVar7,uVar4);
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          free(tokenbuffer.buffer);
        }
        if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
          return (int)(_Var9 ^ 1);
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      if (iVar3 != 0x68) break;
      print_exponents = true;
    }
    if (iVar3 < 0x69) break;
    if (iVar3 != 0x80) goto LAB_00106424;
    dev_debug = true;
  }
  if (iVar3 == -0x83) {
    uVar4 = proper_name_lite("Niels Moller",&_LC44);
    uVar5 = proper_name_lite("Torbjorn Granlund",&_LC46);
    uVar6 = proper_name_lite("Paul Rubin","Paul Rubin");
    version_etc(_stdout,"factor","GNU coreutils",_Version,uVar6,uVar5,uVar4,0);
                    /* WARNING: Subroutine does not return */
    exit(0);
  }
  if (iVar3 == -0x82) {
                    /* WARNING: Subroutine does not return */
    usage(0);
  }
LAB_00106424:
                    /* WARNING: Subroutine does not return */
  usage(1);
}


