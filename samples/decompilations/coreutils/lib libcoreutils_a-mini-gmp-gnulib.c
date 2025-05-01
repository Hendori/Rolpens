
/* WARNING: Unknown calling convention */

uint mpn_base_power_of_two_p(uint b)

{
  uint uVar1;
  
  if (b < 0x21) {
    switch(b) {
    case 2:
      return 1;
    default:
      return 0;
    case 4:
      uVar1 = 2;
      break;
    case 8:
      return 3;
    case 0x10:
      return 4;
    case 0x20:
      return 5;
    }
  }
  else {
    uVar1 = 7;
    if ((b != 0x80) && (uVar1 = 8, b != 0x100)) {
      uVar1 = 0;
      if (b == 0x40) {
        uVar1 = 6;
      }
      return uVar1;
    }
  }
  return uVar1;
}



/* WARNING: Unknown calling convention */

mp_size_t mpn_set_str_bits(mp_ptr rp,uchar *sp,size_t sn,uint bits)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  ulong uVar4;
  long lVar5;
  bool bVar6;
  
  if (sn != 0) {
    lVar5 = 0;
    uVar2 = 0;
    uVar4 = 0;
    pbVar3 = sp + (sn - 1);
    do {
      uVar1 = uVar2 + bits;
      uVar4 = uVar4 | (ulong)*pbVar3 << ((byte)uVar2 & 0x3f);
      uVar2 = uVar1;
      if (0x3f < uVar1) {
        rp[lVar5] = uVar4;
        uVar2 = uVar1 - 0x40;
        lVar5 = lVar5 + 1;
        uVar4 = (ulong)(*pbVar3 >> ((char)bits - (char)uVar2 & 0x1fU));
      }
      bVar6 = sp != pbVar3;
      pbVar3 = pbVar3 + -1;
    } while (bVar6);
    if (uVar4 != 0) {
      rp[lVar5] = uVar4;
      return lVar5 + 1;
    }
    if (lVar5 < 1) {
      return lVar5;
    }
    do {
      if (rp[lVar5 + -1] != 0) {
        return lVar5;
      }
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return 0;
}



/* WARNING: Unknown calling convention */

void gmp_default_free(void *p,size_t unused_size)

{
  free(p);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void gmp_die(char *msg)

{
  __fprintf_chk(_stderr,2,&_LC0,msg);
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention */

void * gmp_default_realloc(void *old,size_t unused_old_size,size_t new_size)

{
  size_t __size;
  void *pvVar1;
  
  __size = 1;
  if (new_size != 0) {
    __size = new_size;
  }
  pvVar1 = realloc(old,__size);
  if (pvVar1 != (void *)0x0) {
    return pvVar1;
  }
                    /* WARNING: Subroutine does not return */
  gmp_die("gmp_default_realloc: Virtual memory exhausted.");
}



/* WARNING: Unknown calling convention */

mp_bitcnt_t mpn_common_scan(mp_limb_t limb,mp_size_t i,mp_srcptr up,mp_size_t un,mp_limb_t ux)

{
  mp_bitcnt_t mVar1;
  int iVar2;
  ulong uVar3;
  
  if (un < i) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("0 <= i && i <= un","lib/mini-gmp.c",0x2d5,"mpn_common_scan");
  }
  if (limb == 0) {
    i = i + 1;
    while( true ) {
      if (i == un) {
        mVar1 = 0xffffffffffffffff;
        if (ux != 0) {
          mVar1 = un << 6;
        }
        return mVar1;
      }
      if (up[i] != ux) break;
      i = i + 1;
    }
    limb = up[i] ^ ux;
  }
  iVar2 = 0;
  for (uVar3 = -limb & limb; uVar3 < 0x100000000000000; uVar3 = uVar3 << 8) {
    iVar2 = iVar2 + 8;
  }
  for (; -1 < (long)uVar3; uVar3 = uVar3 * 2) {
    iVar2 = iVar2 + 1;
  }
  return i * 0x40 + (ulong)(0x3f - iVar2);
}



/* WARNING: Unknown calling convention */

size_t mpn_limb_get_str(uchar *sp,mp_limb_t w,gmp_div_inverse *binv)

{
  byte bVar1;
  size_t sVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  bool bVar10;
  
  if (w == 0) {
    return 0;
  }
  sVar2 = 0;
  while( true ) {
    bVar1 = (byte)binv->shift;
    uVar8 = w >> (-bVar1 & 0x3f);
    uVar5 = w << (bVar1 & 0x3f);
    uVar3 = binv->di & 0xffffffff;
    uVar6 = binv->di >> 0x20;
    uVar9 = (uVar8 & 0xffffffff) * uVar3;
    uVar3 = uVar3 * (uVar8 >> 0x20);
    lVar4 = (uVar8 >> 0x20) * uVar6;
    uVar6 = (uVar9 >> 0x20) + uVar6 * (uVar8 & 0xffffffff) + uVar3;
    lVar7 = lVar4 + 0x100000000;
    if (uVar3 <= uVar6) {
      lVar7 = lVar4;
    }
    uVar9 = (uVar6 << 0x20) + (uVar9 & 0xffffffff);
    uVar3 = binv->d1;
    lVar7 = uVar8 + 1 + (uVar6 >> 0x20) + (ulong)CARRY8(uVar9,uVar5) + lVar7;
    uVar6 = uVar5 - uVar3 * lVar7;
    bVar10 = uVar9 + uVar5 < uVar6;
    w = lVar7 - (ulong)bVar10;
    uVar5 = 0;
    if (bVar10) {
      uVar5 = uVar3;
    }
    uVar5 = uVar5 + uVar6;
    if (uVar3 <= uVar5) {
      uVar5 = uVar5 - uVar3;
      w = w + 1;
    }
    if ((0xffffffffffffffffU >> (-bVar1 & 0x3f) & uVar5) != 0) break;
    sp[sVar2] = (uchar)(uVar5 >> (bVar1 & 0x3f));
    sVar2 = sVar2 + 1;
    if (w == 0) {
      return sVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("(r & (GMP_LIMB_MAX >> (GMP_LIMB_BITS - binv->shift))) == 0","lib/mini-gmp.c",0x4f4,
                "mpn_limb_get_str");
}



/* WARNING: Unknown calling convention */

void * gmp_default_alloc(size_t size)

{
  void *pvVar1;
  
  if (size == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("size > 0","lib/mini-gmp.c",300,"gmp_default_alloc");
  }
  pvVar1 = malloc(size);
  if (pvVar1 != (void *)0x0) {
    return pvVar1;
  }
                    /* WARNING: Subroutine does not return */
  gmp_die("gmp_default_alloc: Virtual memory exhausted.");
}



mp_bitcnt_t mpn_limb_size_in_base_2(mp_limb_t u)

{
                    /* WARNING: Subroutine does not return */
  __assert_fail("u > 0","lib/mini-gmp.c",0x4c3,"mpn_limb_size_in_base_2");
}



mp_ptr mpz_limbs_modify(__mpz_struct *x,mp_size_t n)

{
                    /* WARNING: Subroutine does not return */
  __assert_fail("n > 0","lib/mini-gmp.c",0x688,"mpz_limbs_modify");
}



void mpz_divexact(__mpz_struct *q,__mpz_struct *n,__mpz_struct *d)

{
                    /* WARNING: Subroutine does not return */
  __assert_fail("__cy == 0","lib/mini-gmp.c",0x9e1,"mpz_divexact");
}



/* WARNING: Unknown calling convention */

mp_ptr mpz_realloc(__mpz_struct *r,mp_size_t size)

{
  int iVar1;
  int iVar2;
  long lVar3;
  mp_ptr pmVar4;
  
  lVar3 = 1;
  if (0 < size) {
    lVar3 = size;
  }
  if (r->_mp_alloc == 0) {
    pmVar4 = (mp_ptr)(*gmp_allocate_func)(lVar3 * 8);
  }
  else {
    pmVar4 = (mp_ptr)(*gmp_reallocate_func)(r->_mp_d,(long)r->_mp_alloc << 3,lVar3 * 8);
  }
  iVar1 = r->_mp_size;
  r->_mp_d = pmVar4;
  r->_mp_alloc = (int)lVar3;
  iVar2 = -iVar1;
  if (-1 < iVar1) {
    iVar2 = iVar1;
  }
  if (lVar3 < iVar2) {
    r->_mp_size = 0;
  }
  return pmVar4;
}



/* WARNING: Unknown calling convention */

size_t mpn_get_str_bits(uchar *sp,uint bits,mp_srcptr up,mp_size_t un)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar1 = up[un + -1];
  if (uVar1 != 0) {
    uVar7 = 0;
    for (; uVar1 < 0x100000000000000; uVar1 = uVar1 << 8) {
      uVar7 = (ulong)((int)uVar7 + 8);
    }
    for (; -1 < (long)uVar1; uVar1 = uVar1 * 2) {
      uVar7 = (ulong)((int)uVar7 + 1);
    }
    uVar8 = (ulong)bits;
    uVar7 = ((un + -1) * 0x40 + 0x3f + uVar8) - uVar7;
    uVar1 = uVar7 / uVar8;
    if (uVar8 <= uVar7) {
      uVar6 = 0;
      lVar3 = 0;
      uVar7 = uVar1;
      do {
        uVar7 = uVar7 - 1;
        uVar5 = uVar6 + bits;
        bVar2 = (byte)(up[lVar3] >> ((byte)uVar6 & 0x3f));
        lVar4 = lVar3;
        uVar6 = uVar5;
        if ((0x3f < uVar5) && (lVar4 = lVar3 + 1, lVar4 < un)) {
          uVar6 = uVar5 - 0x40;
          bVar2 = (byte)(up[lVar3 + 1] << ((byte)bits - (char)uVar6 & 0x3f)) | bVar2;
        }
        sp[uVar7] = bVar2 & (char)(1 << ((byte)bits & 0x1f)) - 1U;
        lVar3 = lVar4;
      } while (uVar7 != 0);
    }
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  mpn_limb_size_in_base_2((ulong)bits);
}



/* WARNING: Unknown calling convention */

void mpz_abs_sub_bit(__mpz_struct *d,mp_bitcnt_t bit_index)

{
  int iVar1;
  mp_limb_t *pmVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  
  iVar1 = d->_mp_size;
  pmVar2 = d->_mp_d;
  iVar7 = -iVar1;
  if (0 < iVar1) {
    iVar7 = iVar1;
  }
  lVar8 = (long)iVar7;
  if (lVar8 <= (long)(bit_index >> 6)) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("limb_index < dn","lib/mini-gmp.c",0xed8,"mpz_abs_sub_bit");
  }
  puVar5 = pmVar2 + (bit_index >> 6);
  uVar4 = 1L << ((byte)bit_index & 0x3f);
  do {
    uVar9 = uVar4;
    uVar3 = *puVar5;
    puVar6 = puVar5 + 1;
    *puVar5 = uVar3 - uVar9;
    puVar5 = puVar6;
    uVar4 = (ulong)(uVar3 < uVar9);
  } while (pmVar2 + lVar8 != puVar6);
  if (uVar3 < uVar9) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("__cy == 0","lib/mini-gmp.c",0xeda,"mpz_abs_sub_bit");
  }
  do {
    if (pmVar2[lVar8 + -1] != 0) break;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  iVar7 = (int)lVar8;
  if (iVar1 < 0) {
    iVar7 = -(int)lVar8;
  }
  d->_mp_size = iVar7;
  return;
}



/* WARNING: Unknown calling convention */

void mpz_abs_add_bit(__mpz_struct *d,mp_bitcnt_t bit_index)

{
  int iVar1;
  mp_ptr pmVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  long size;
  
  iVar7 = d->_mp_size;
  iVar1 = -iVar7;
  if (0 < iVar7) {
    iVar1 = iVar7;
  }
  uVar6 = bit_index >> 6;
  uVar5 = 1L << ((byte)bit_index & 0x3f);
  lVar8 = (long)iVar1;
  if ((long)uVar6 < lVar8) {
    pmVar2 = d->_mp_d;
    puVar3 = pmVar2 + uVar6;
    do {
      uVar6 = uVar5 + *puVar3;
      puVar4 = puVar3 + 1;
      uVar5 = (ulong)CARRY8(uVar5,*puVar3);
      *puVar3 = uVar6;
      puVar3 = puVar4;
    } while (puVar4 != pmVar2 + lVar8);
    size = lVar8;
    if (uVar5 != 0) {
      size = lVar8 + 1;
      if (d->_mp_alloc <= iVar1) {
        pmVar2 = mpz_realloc(d,size);
        iVar7 = d->_mp_size;
      }
      pmVar2[lVar8] = 1;
    }
  }
  else {
    size = uVar6 + 1;
    if ((long)uVar6 < (long)d->_mp_alloc) {
      pmVar2 = d->_mp_d;
    }
    else {
      pmVar2 = mpz_realloc(d,size);
      iVar7 = d->_mp_size;
    }
    pmVar2[uVar6] = uVar5;
    if (lVar8 < (long)uVar6) {
      memset(pmVar2 + lVar8,0,(uVar6 - lVar8) * 8);
    }
  }
  iVar1 = -(int)size;
  if (-1 < iVar7) {
    iVar1 = (int)size;
  }
  d->_mp_size = iVar1;
  return;
}



/* WARNING: Unknown calling convention */

void mp_get_memory_functions
               (_func_void_ptr_size_t **alloc_func,
               _func_void_ptr_void_ptr_size_t_size_t **realloc_func,
               _func_void_void_ptr_size_t **free_func)

{
  if (alloc_func != (_func_void_ptr_size_t **)0x0) {
    *alloc_func = gmp_allocate_func;
  }
  if (realloc_func != (_func_void_ptr_void_ptr_size_t_size_t **)0x0) {
    *realloc_func = gmp_reallocate_func;
  }
  if (free_func != (_func_void_void_ptr_size_t **)0x0) {
    *free_func = gmp_free_func;
  }
  return;
}



/* WARNING: Unknown calling convention */

void mp_set_memory_functions
               (_func_void_ptr_size_t *alloc_func,
               _func_void_ptr_void_ptr_size_t_size_t *realloc_func,
               _func_void_void_ptr_size_t *free_func)

{
  if (alloc_func == (_func_void_ptr_size_t *)0x0) {
    alloc_func = gmp_default_alloc;
  }
  if (realloc_func == (_func_void_ptr_void_ptr_size_t_size_t *)0x0) {
    realloc_func = gmp_default_realloc;
  }
  if (free_func == (_func_void_void_ptr_size_t *)0x0) {
    free_func = gmp_default_free;
  }
  gmp_allocate_func = alloc_func;
  gmp_reallocate_func = realloc_func;
  gmp_free_func = free_func;
  return;
}



/* WARNING: Unknown calling convention */

void mpn_copyi(mp_ptr d,mp_srcptr s,mp_size_t n)

{
  long lVar1;
  
  if (0 < n) {
    lVar1 = 0;
    do {
      d[lVar1] = s[lVar1];
      lVar1 = lVar1 + 1;
    } while (n != lVar1);
  }
  return;
}



/* WARNING: Unknown calling convention */

void mpn_copyd(mp_ptr d,mp_srcptr s,mp_size_t n)

{
  long lVar1;
  bool bVar2;
  
  lVar1 = n + -1;
  if (-1 < lVar1) {
    do {
      d[lVar1] = s[lVar1];
      bVar2 = lVar1 != 0;
      lVar1 = lVar1 + -1;
    } while (bVar2);
  }
  return;
}



/* WARNING: Unknown calling convention */

int mpn_cmp(mp_srcptr ap,mp_srcptr bp,mp_size_t n)

{
  do {
    n = n + -1;
    if (n < 0) {
      return 0;
    }
  } while (ap[n] == bp[n]);
  return (-(uint)(bp[n] < ap[n]) & 2) - 1;
}



/* WARNING: Unknown calling convention */

int mpn_zero_p(mp_srcptr rp,mp_size_t n)

{
  if (0 < n) {
    do {
      if (rp[n + -1] != 0) break;
      n = n + -1;
    } while (n != 0);
  }
  return (int)(n == 0);
}



/* WARNING: Unknown calling convention */

void mpn_zero(mp_ptr rp,mp_size_t n)

{
  if (0 < n) {
    memset(rp,0,n * 8);
    return;
  }
  return;
}



/* WARNING: Unknown calling convention */

mp_limb_t mpn_add_1(mp_ptr rp,mp_srcptr ap,mp_size_t n,mp_limb_t b)

{
  ulong uVar1;
  long lVar2;
  
  if (0 < n) {
    lVar2 = 0;
    do {
      uVar1 = ap[lVar2];
      rp[lVar2] = b + ap[lVar2];
      lVar2 = lVar2 + 1;
      b = (mp_limb_t)CARRY8(b,uVar1);
    } while (n != lVar2);
    return b;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("n > 0","lib/mini-gmp.c",0x1c3,"mpn_add_1");
}



/* WARNING: Unknown calling convention */

mp_limb_t mpn_add_n(mp_ptr rp,mp_srcptr ap,mp_srcptr bp,mp_size_t n)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = 0;
  if (0 < n) {
    lVar5 = 0;
    do {
      uVar1 = ap[lVar5];
      uVar3 = uVar4 + ap[lVar5];
      uVar2 = bp[lVar5];
      rp[lVar5] = uVar3 + bp[lVar5];
      uVar4 = (ulong)CARRY8(uVar4,uVar1) + (ulong)CARRY8(uVar3,uVar2);
      lVar5 = lVar5 + 1;
    } while (n != lVar5);
    return uVar4;
  }
  return 0;
}



/* WARNING: Unknown calling convention */

mp_limb_t mpn_add(mp_ptr rp,mp_srcptr ap,mp_size_t an,mp_srcptr bp,mp_size_t bn)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  if (an < bn) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("an >= bn","lib/mini-gmp.c",0x1e9,"mpn_add");
  }
  uVar4 = 0;
  lVar5 = 0;
  if (0 < bn) {
    do {
      uVar1 = ap[lVar5];
      uVar3 = uVar4 + ap[lVar5];
      uVar2 = bp[lVar5];
      rp[lVar5] = uVar3 + bp[lVar5];
      uVar4 = (ulong)CARRY8(uVar4,uVar1) + (ulong)CARRY8(uVar3,uVar2);
      lVar5 = lVar5 + 1;
    } while (bn != lVar5);
  }
  if (bn < an) {
    lVar5 = bn * 8;
    do {
      uVar1 = *(ulong *)((long)ap + lVar5);
      *(ulong *)((long)rp + lVar5) = uVar4 + *(ulong *)((long)ap + lVar5);
      lVar5 = lVar5 + 8;
      uVar4 = (ulong)CARRY8(uVar4,uVar1);
    } while (lVar5 != an * 8);
    return uVar4;
  }
  return uVar4;
}



/* WARNING: Unknown calling convention */

mp_size_t mpz_abs_add(__mpz_struct *r,__mpz_struct *a,__mpz_struct *b)

{
  int iVar1;
  mp_limb_t mVar2;
  mp_limb_t *rp;
  int iVar3;
  long an;
  __mpz_struct *p_Var5;
  long bn;
  long lVar4;
  
  iVar1 = a->_mp_size;
  iVar3 = -iVar1;
  if (0 < iVar1) {
    iVar3 = iVar1;
  }
  iVar1 = b->_mp_size;
  bn = (long)iVar3;
  iVar3 = -iVar1;
  if (0 < iVar1) {
    iVar3 = iVar1;
  }
  lVar4 = (long)iVar3;
  an = lVar4;
  p_Var5 = b;
  if (lVar4 <= bn) {
    an = bn;
    p_Var5 = a;
    bn = lVar4;
    a = b;
  }
  if (an < r->_mp_alloc) {
    rp = r->_mp_d;
  }
  else {
    rp = mpz_realloc(r,an + 1);
  }
  mVar2 = mpn_add(rp,p_Var5->_mp_d,an,a->_mp_d,bn);
  rp[an] = mVar2;
  return mVar2 + an;
}



/* WARNING: Unknown calling convention */

mp_limb_t mpn_sub_1(mp_ptr rp,mp_srcptr ap,mp_size_t n,mp_limb_t b)

{
  ulong uVar1;
  long lVar2;
  
  if (0 < n) {
    lVar2 = 0;
    do {
      uVar1 = (ulong)(ap[lVar2] < b);
      rp[lVar2] = ap[lVar2] - b;
      lVar2 = lVar2 + 1;
      b = uVar1;
    } while (n != lVar2);
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("n > 0","lib/mini-gmp.c",0x1f6,"mpn_sub_1");
}



/* WARNING: Unknown calling convention */

mp_limb_t mpn_sub_n(mp_ptr rp,mp_srcptr ap,mp_srcptr bp,mp_size_t n)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = 0;
  if (0 < n) {
    lVar3 = 0;
    do {
      uVar1 = uVar2 + bp[lVar3];
      uVar2 = (ulong)CARRY8(uVar2,bp[lVar3]) + (ulong)(ap[lVar3] < uVar1);
      rp[lVar3] = ap[lVar3] - uVar1;
      lVar3 = lVar3 + 1;
    } while (n != lVar3);
    return uVar2;
  }
  return 0;
}



/* WARNING: Unknown calling convention */

mp_limb_t mpn_sub(mp_ptr rp,mp_srcptr ap,mp_size_t an,mp_srcptr bp,mp_size_t bn)

{
  ulong uVar1;
  mp_limb_t mVar2;
  long lVar3;
  
  if (an < bn) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("an >= bn","lib/mini-gmp.c",0x21d,"mpn_sub");
  }
  mVar2 = 0;
  lVar3 = 0;
  if (0 < bn) {
    do {
      uVar1 = mVar2 + bp[lVar3];
      mVar2 = (ulong)CARRY8(mVar2,bp[lVar3]) + (ulong)(ap[lVar3] < uVar1);
      rp[lVar3] = ap[lVar3] - uVar1;
      lVar3 = lVar3 + 1;
    } while (bn != lVar3);
  }
  if (bn < an) {
    lVar3 = bn * 8;
    do {
      uVar1 = (ulong)(*(ulong *)((long)ap + lVar3) < mVar2);
      *(ulong *)((long)rp + lVar3) = *(ulong *)((long)ap + lVar3) - mVar2;
      lVar3 = lVar3 + 8;
      mVar2 = uVar1;
    } while (lVar3 != an << 3);
    return uVar1;
  }
  return mVar2;
}



/* WARNING: Unknown calling convention */

mp_size_t mpz_abs_sub(__mpz_struct *r,__mpz_struct *a,__mpz_struct *b)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  mp_limb_t mVar5;
  long lVar6;
  mp_limb_t *pmVar8;
  long size;
  long bn;
  mp_limb_t *bp;
  mp_limb_t *ap;
  long lVar7;
  
  iVar1 = a->_mp_size;
  iVar2 = b->_mp_size;
  bp = b->_mp_d;
  ap = a->_mp_d;
  iVar3 = -iVar1;
  if (0 < iVar1) {
    iVar3 = iVar1;
  }
  iVar4 = -iVar2;
  if (0 < iVar2) {
    iVar4 = iVar2;
  }
  size = (long)iVar3;
  bn = (long)iVar4;
  lVar7 = size;
  if (size == bn) {
    do {
      lVar6 = lVar7 + -1;
      if (lVar7 == 0) {
        return 0;
      }
      lVar7 = lVar6;
    } while (ap[lVar6] == bp[lVar6]);
    if (bp[lVar6] < ap[lVar6]) goto LAB_00100d55;
  }
  else if (bn <= size) {
LAB_00100d55:
    if (r->_mp_alloc < iVar3) {
      pmVar8 = mpz_realloc(r,size);
      bp = b->_mp_d;
      ap = a->_mp_d;
    }
    else {
      pmVar8 = r->_mp_d;
    }
    mVar5 = mpn_sub(pmVar8,ap,size,bp,bn);
    if (mVar5 == 0) {
      if (iVar1 == 0) {
        return 0;
      }
      do {
        if (pmVar8[size + -1] != 0) {
          return size;
        }
        size = size + -1;
      } while (size != 0);
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    __assert_fail("__cy == 0","lib/mini-gmp.c",0x7de,"mpz_abs_sub");
  }
  if (r->_mp_alloc < iVar4) {
    pmVar8 = mpz_realloc(r,bn);
    ap = a->_mp_d;
    bp = b->_mp_d;
  }
  else {
    pmVar8 = r->_mp_d;
  }
  mVar5 = mpn_sub(pmVar8,bp,bn,ap,size);
  if (mVar5 == 0) {
    if (iVar2 != 0) {
      do {
        if (pmVar8[bn + -1] != 0) {
          return -bn;
        }
        bn = bn + -1;
      } while (bn != 0);
    }
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("__cy == 0","lib/mini-gmp.c",0x7e4,"mpz_abs_sub");
}



/* WARNING: Unknown calling convention */

mp_limb_t mpn_mul_1(mp_ptr rp,mp_srcptr up,mp_size_t n,mp_limb_t vl)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  if (0 < n) {
    lVar7 = 0;
    uVar6 = 0;
    do {
      uVar2 = up[lVar7] & 0xffffffff;
      uVar3 = up[lVar7] >> 0x20;
      uVar1 = uVar2 * (vl & 0xffffffff);
      uVar8 = uVar3 * (vl & 0xffffffff);
      lVar4 = uVar3 * (vl >> 0x20);
      uVar2 = uVar2 * (vl >> 0x20) + uVar8 + (uVar1 >> 0x20);
      lVar5 = lVar4 + 0x100000000;
      if (uVar8 <= uVar2) {
        lVar5 = lVar4;
      }
      uVar1 = (uVar1 & 0xffffffff) + uVar6 + (uVar2 << 0x20);
      rp[lVar7] = uVar1;
      lVar7 = lVar7 + 1;
      uVar6 = (ulong)(uVar1 < uVar6) + (uVar2 >> 0x20) + lVar5;
    } while (n != lVar7);
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("n >= 1","lib/mini-gmp.c",0x22a,"mpn_mul_1");
}



/* WARNING: Unknown calling convention */

mp_size_t mpn_set_str_other(mp_ptr rp,uchar *sp,size_t sn,mp_limb_t b,mpn_base_info *info)

{
  byte bVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  ulong uVar4;
  mp_limb_t mVar5;
  mp_ptr pmVar6;
  byte *pbVar7;
  ulong uVar8;
  ulong uVar9;
  mp_size_t n;
  
  if (sn == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("sn > 0","lib/mini-gmp.c",0x563,"mpn_set_str_other");
  }
  uVar2 = info->exp;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = sn - 1;
  uVar4 = (ulong)*sp;
  if (SUB168(auVar3 % ZEXT416(uVar2),0) == 0) {
    *rp = uVar4;
    uVar9 = 1;
    if (sn == 1) {
      return 1;
    }
  }
  else {
    uVar9 = (ulong)(SUB164(auVar3 % ZEXT416(uVar2),0) - 1);
    pbVar7 = sp + 1;
    do {
      bVar1 = *pbVar7;
      pbVar7 = pbVar7 + 1;
      uVar4 = uVar4 * b + (ulong)bVar1;
    } while (pbVar7 != sp + uVar9 + 2);
    uVar9 = uVar9 + 2;
    *rp = uVar4;
    if (sn <= uVar9) {
      n = 1;
      goto LAB_00101070;
    }
  }
  n = 1;
  uVar4 = uVar9;
  do {
    uVar8 = (ulong)sp[uVar4];
    uVar9 = uVar4 + 1;
    if (1 < uVar2) {
      pbVar7 = sp + uVar9;
      do {
        bVar1 = *pbVar7;
        pbVar7 = pbVar7 + 1;
        uVar8 = uVar8 * b + (ulong)bVar1;
      } while (pbVar7 != sp + uVar4 + (ulong)(uVar2 - 2) + 2);
      uVar9 = uVar4 + 2 + (ulong)(uVar2 - 2);
    }
    mVar5 = mpn_mul_1(rp,rp,n,info->bb);
    pmVar6 = rp;
    do {
      uVar4 = *pmVar6;
      *pmVar6 = uVar8 + *pmVar6;
      uVar8 = (ulong)CARRY8(uVar8,uVar4);
      pmVar6 = pmVar6 + 1;
    } while (rp + n != pmVar6);
    if (mVar5 + uVar8 != 0) {
      rp[n] = mVar5 + uVar8;
      n = n + 1;
    }
    uVar4 = uVar9;
  } while (uVar9 < sn);
LAB_00101070:
  if (sn == uVar9) {
    return n;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("j == sn","lib/mini-gmp.c",0x57b,"mpn_set_str_other");
}



/* WARNING: Unknown calling convention */

int mpz_set_str(__mpz_struct *r,char *sp,int base)

{
  byte bVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  byte bVar5;
  uint uVar6;
  int iVar7;
  ushort **ppuVar8;
  uchar *sp_00;
  mp_size_t mVar9;
  mp_limb_t *rp;
  mp_ptr rp_00;
  ulong b;
  int iVar10;
  size_t sn;
  byte *__s;
  ulong size;
  long in_FS_OFFSET;
  size_t local_68;
  mpn_base_info info;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  ppuVar8 = __ctype_b_loc();
  bVar1 = *sp;
  bVar5 = *(byte *)((long)*ppuVar8 + (ulong)bVar1 * 2 + 1);
  while ((bVar5 & 0x20) != 0) {
    bVar1 = sp[1];
    sp = sp + 1;
    bVar5 = *(byte *)((long)*ppuVar8 + (ulong)bVar1 * 2 + 1);
  }
  __s = (byte *)(sp + (bVar1 == 0x2d));
  bVar5 = *__s;
  if (base == 0) {
    base = 10;
    if (bVar5 == 0x30) {
      if ((__s[1] & 0xdf) == 0x58) {
        bVar5 = __s[2];
        base = 0x10;
        __s = __s + 2;
      }
      else {
        if ((__s[1] & 0xdf) != 0x42) {
          base = 8;
          local_68 = strlen((char *)__s);
          sp_00 = (uchar *)(*gmp_allocate_func)(local_68);
          iVar10 = 10;
          goto LAB_001011e2;
        }
        bVar5 = __s[2];
        base = 2;
        __s = __s + 2;
      }
    }
    if (bVar5 != 0) {
      local_68 = strlen((char *)__s);
      sp_00 = (uchar *)(*gmp_allocate_func)(local_68);
      iVar10 = 10;
LAB_001011e2:
      bVar5 = *__s;
      sn = 0;
      if (bVar5 != 0) {
        do {
          if ((*(byte *)((long)*ppuVar8 + (ulong)bVar5 * 2 + 1) & 0x20) == 0) {
            if ((byte)(bVar5 - 0x30) < 10) {
              uVar6 = (int)(char)bVar5 - 0x30;
            }
            else if ((byte)(bVar5 + 0x9f) < 0x1a) {
              uVar6 = (int)(char)bVar5 + iVar10 + -0x61;
            }
            else {
              if (0x19 < (byte)(bVar5 + 0xbf)) goto LAB_00101248;
              uVar6 = (int)(char)bVar5 - 0x37;
            }
            if ((uint)base <= uVar6) goto LAB_00101248;
            sp_00[sn] = (uchar)uVar6;
            sn = sn + 1;
          }
          bVar5 = __s[1];
          __s = __s + 1;
        } while (bVar5 != 0);
        if (sn != 0) {
          uVar6 = mpn_base_power_of_two_p(base);
          if (uVar6 == 0) {
            b = (ulong)base;
            info.exp = 1;
            info.bb = b;
            do {
              info.bb = info.bb * b;
              info.exp = info.exp + 1;
              auVar3._8_8_ = 0;
              auVar3._0_8_ = b;
              auVar4._8_8_ = 0;
              auVar4._0_8_ = info.bb;
            } while (SUB168(auVar3 * auVar4,8) == 0);
            size = ((sn - 1) + (ulong)info.exp) / (ulong)info.exp;
            if ((long)r->_mp_alloc < (long)size) {
              rp_00 = mpz_realloc(r,size);
            }
            else {
              rp_00 = r->_mp_d;
            }
            mVar9 = mpn_set_str_other(rp_00,sp_00,sn,b,&info);
            if (mVar9 < 1) {
                    /* WARNING: Subroutine does not return */
              __assert_fail("rn > 0","lib/mini-gmp.c",0x1164,"mpz_set_str");
            }
            mVar9 = mVar9 - (ulong)(rp_00[mVar9 + -1] == 0);
          }
          else {
            size = uVar6 * sn + 0x3f >> 6;
            if ((long)r->_mp_alloc < (long)size) {
              rp = mpz_realloc(r,size);
            }
            else {
              rp = r->_mp_d;
            }
            mVar9 = mpn_set_str_bits(rp,sp_00,sn,uVar6);
          }
          if ((long)size < mVar9) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("rn <= alloc","lib/mini-gmp.c",0x1167,"mpz_set_str");
          }
          (*gmp_free_func)(sp_00,local_68);
          iVar10 = (int)mVar9;
          if (bVar1 == 0x2d) {
            iVar10 = -(int)mVar9;
          }
          iVar7 = 0;
          goto LAB_0010125d;
        }
      }
LAB_00101248:
      (*gmp_free_func)(sp_00,local_68);
    }
  }
  else if (bVar5 != 0) {
    local_68 = strlen((char *)__s);
    sp_00 = (uchar *)(*gmp_allocate_func)(local_68);
    iVar10 = 10;
    if (0x24 < base) {
      iVar10 = 0x24;
    }
    goto LAB_001011e2;
  }
  iVar10 = 0;
  iVar7 = -1;
LAB_0010125d:
  r->_mp_size = iVar10;
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

mp_limb_t mpn_addmul_1(mp_ptr rp,mp_srcptr up,mp_size_t n,mp_limb_t vl)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  if (0 < n) {
    lVar7 = 0;
    uVar6 = 0;
    do {
      uVar2 = up[lVar7] & 0xffffffff;
      uVar3 = up[lVar7] >> 0x20;
      uVar1 = uVar2 * (vl & 0xffffffff);
      uVar8 = uVar3 * (vl & 0xffffffff);
      lVar4 = uVar3 * (vl >> 0x20);
      uVar2 = uVar2 * (vl >> 0x20) + uVar8 + (uVar1 >> 0x20);
      lVar5 = lVar4 + 0x100000000;
      if (uVar8 <= uVar2) {
        lVar5 = lVar4;
      }
      uVar3 = (uVar1 & 0xffffffff) + uVar6 + (uVar2 << 0x20);
      uVar1 = rp[lVar7];
      rp[lVar7] = uVar3 + rp[lVar7];
      lVar7 = lVar7 + 1;
      uVar6 = (ulong)(uVar3 < uVar6) + (uVar2 >> 0x20) + (ulong)CARRY8(uVar3,uVar1) + lVar5;
    } while (n != lVar7);
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("n >= 1","lib/mini-gmp.c",0x241,"mpn_addmul_1");
}



/* WARNING: Unknown calling convention */

mp_limb_t mpn_submul_1(mp_ptr rp,mp_srcptr up,mp_size_t n,mp_limb_t vl)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  if (0 < n) {
    lVar7 = 0;
    uVar6 = 0;
    do {
      uVar2 = up[lVar7] & 0xffffffff;
      uVar3 = up[lVar7] >> 0x20;
      uVar1 = uVar2 * (vl & 0xffffffff);
      uVar8 = uVar3 * (vl & 0xffffffff);
      lVar4 = uVar3 * (vl >> 0x20);
      uVar2 = uVar2 * (vl >> 0x20) + uVar8 + (uVar1 >> 0x20);
      lVar5 = lVar4 + 0x100000000;
      if (uVar8 <= uVar2) {
        lVar5 = lVar4;
      }
      uVar3 = (uVar1 & 0xffffffff) + uVar6 + (uVar2 << 0x20);
      uVar1 = rp[lVar7];
      rp[lVar7] = uVar1 - uVar3;
      lVar7 = lVar7 + 1;
      uVar6 = (ulong)(uVar3 < uVar6) + (uVar2 >> 0x20) + (ulong)(uVar1 < uVar3) + lVar5;
    } while (n != lVar7);
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("n >= 1","lib/mini-gmp.c",0x25b,"mpn_submul_1");
}



/* WARNING: Unknown calling convention */

mp_limb_t mpn_mul(mp_ptr rp,mp_srcptr up,mp_size_t un,mp_srcptr vp,mp_size_t vn)

{
  mp_limb_t *pmVar1;
  mp_limb_t mVar2;
  long lVar3;
  
  if (un < vn) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("un >= vn","lib/mini-gmp.c",0x273,"mpn_mul");
  }
  if (vn < 1) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("vn >= 1","lib/mini-gmp.c",0x274,"mpn_mul");
  }
  if ((up < rp + un + vn) && (rp < up + un)) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("!GMP_MPN_OVERLAP_P(rp, un + vn, up, un)","lib/mini-gmp.c",0x275,"mpn_mul");
  }
  if ((vp < rp + un + vn) && (rp < vp + vn)) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("!GMP_MPN_OVERLAP_P(rp, un + vn, vp, vn)","lib/mini-gmp.c",0x276,"mpn_mul");
  }
  mVar2 = mpn_mul_1(rp,up,un,*vp);
  rp[un] = mVar2;
  for (lVar3 = vn + -1; lVar3 != 0; lVar3 = lVar3 + -1) {
    rp = rp + 1;
    pmVar1 = vp + 1;
    vp = vp + 1;
    mVar2 = mpn_addmul_1(rp,up,un,*pmVar1);
    rp[un] = mVar2;
  }
  return mVar2;
}



/* WARNING: Unknown calling convention */

void mpn_mul_n(mp_ptr rp,mp_srcptr ap,mp_srcptr bp,mp_size_t n)

{
  mpn_mul(rp,ap,n,bp,n);
  return;
}



/* WARNING: Unknown calling convention */

void mpn_sqr(mp_ptr rp,mp_srcptr ap,mp_size_t n)

{
  mpn_mul(rp,ap,n,ap,n);
  return;
}



/* WARNING: Unknown calling convention */

mp_limb_t mpn_lshift(mp_ptr rp,mp_srcptr up,mp_size_t n,uint cnt)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (n < 1) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("n >= 1","lib/mini-gmp.c",0x29c,"mpn_lshift");
  }
  if (cnt == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("cnt >= 1","lib/mini-gmp.c",0x29d,"mpn_lshift");
  }
  if (0x3f < cnt) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("cnt < GMP_LIMB_BITS","lib/mini-gmp.c",0x29e,"mpn_lshift");
  }
  bVar2 = (byte)cnt;
  uVar4 = up[n + -1] >> (0x40 - bVar2 & 0x3f);
  uVar5 = up[n + -1] << (bVar2 & 0x3f);
  lVar3 = n + -1;
  if (lVar3 == 0) {
    rp[n + -1] = uVar5;
    return uVar4;
  }
  do {
    uVar1 = up[lVar3 + -1];
    rp[lVar3] = uVar1 >> (0x40 - bVar2 & 0x3f) | uVar5;
    uVar5 = uVar1 << (bVar2 & 0x3f);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  *rp = uVar5;
  return uVar4;
}



/* WARNING: Unknown calling convention */

mp_limb_t mpn_div_qr_1_preinv(mp_ptr qp,mp_srcptr np,mp_size_t nn,gmp_div_inverse *inv)

{
  uint cnt;
  mp_limb_t mVar1;
  long lVar2;
  mp_ptr rp;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  mp_limb_t mVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  mp_limb_t mVar10;
  mp_limb_t mVar11;
  ulong uVar12;
  mp_size_t mVar13;
  bool bVar14;
  
  cnt = inv->shift;
  if (cnt == 0) {
    mVar10 = inv->d1;
    mVar11 = inv->di;
    if (nn + -1 < 0) {
      mVar1 = 0;
      bVar3 = 0;
      goto LAB_001019ff;
    }
    mVar13 = 0;
    rp = (mp_ptr)0x0;
    mVar1 = 0;
LAB_00101912:
    lVar9 = nn + -1;
    do {
      uVar12 = (mVar1 & 0xffffffff) * (mVar11 & 0xffffffff);
      uVar7 = (mVar1 >> 0x20) * (mVar11 & 0xffffffff);
      lVar2 = (mVar1 >> 0x20) * (mVar11 >> 0x20);
      uVar4 = (uVar12 >> 0x20) + (mVar1 & 0xffffffff) * (mVar11 >> 0x20) + uVar7;
      lVar5 = lVar2 + 0x100000000;
      if (uVar7 <= uVar4) {
        lVar5 = lVar2;
      }
      uVar7 = np[lVar9];
      uVar8 = (uVar4 << 0x20) + (uVar12 & 0xffffffff);
      lVar5 = mVar1 + 1 + (uVar4 >> 0x20) + (ulong)CARRY8(uVar8,uVar7) + lVar5;
      uVar12 = uVar7 - lVar5 * mVar10;
      bVar14 = uVar8 + uVar7 < uVar12;
      mVar6 = lVar5 - (ulong)bVar14;
      uVar4 = 0;
      if (bVar14) {
        uVar4 = mVar10;
      }
      mVar1 = uVar4 + uVar12;
      if (mVar10 <= mVar1) {
        mVar1 = mVar1 - mVar10;
        mVar6 = mVar6 + 1;
      }
      if (qp != (mp_ptr)0x0) {
        qp[lVar9] = mVar6;
      }
      bVar14 = lVar9 != 0;
      lVar9 = lVar9 + -1;
    } while (bVar14);
  }
  else {
    mVar13 = 0;
    rp = qp;
    if (qp == (mp_ptr)0x0) {
      rp = (mp_ptr)(*gmp_allocate_func)(nn * 8);
      cnt = inv->shift;
      mVar13 = nn;
    }
    mVar1 = mpn_lshift(rp,np,nn,cnt);
    mVar10 = inv->d1;
    mVar11 = inv->di;
    np = rp;
    if (-1 < nn + -1) goto LAB_00101912;
  }
  if (mVar13 != 0) {
    (*gmp_free_func)(rp,mVar13 * 8);
  }
  bVar3 = (byte)inv->shift;
LAB_001019ff:
  return mVar1 >> (bVar3 & 0x3f);
}



/* WARNING: Unknown calling convention */

mp_limb_t mpn_rshift(mp_ptr rp,mp_srcptr up,mp_size_t n,uint cnt)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (n < 1) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("n >= 1","lib/mini-gmp.c",0x2ba,"mpn_rshift");
  }
  if (cnt != 0) {
    if (cnt < 0x40) {
      uVar1 = *up;
      bVar2 = (byte)cnt;
      uVar5 = uVar1 >> (bVar2 & 0x3f);
      if (n != 1) {
        lVar3 = 0;
        do {
          uVar4 = up[lVar3 + 1] << (0x40 - bVar2 & 0x3f) | uVar5;
          uVar5 = up[lVar3 + 1] >> (bVar2 & 0x3f);
          rp[lVar3] = uVar4;
          lVar3 = lVar3 + 1;
        } while (n + -1 != lVar3);
        rp = rp + n + -1;
      }
      *rp = uVar5;
      return uVar1 << (0x40 - bVar2 & 0x3f);
    }
                    /* WARNING: Subroutine does not return */
    __assert_fail("cnt < GMP_LIMB_BITS","lib/mini-gmp.c",700,"mpn_rshift");
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("cnt >= 1","lib/mini-gmp.c",699,"mpn_rshift");
}



/* WARNING: Unknown calling convention */

void mpn_div_qr_preinv(mp_ptr qp,mp_ptr np,mp_size_t nn,mp_srcptr dp,mp_size_t dn,
                      gmp_div_inverse *inv)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  mp_limb_t mVar4;
  long lVar5;
  mp_limb_t mVar6;
  ulong uVar7;
  mp_limb_t mVar8;
  mp_limb_t mVar9;
  ulong uVar10;
  mp_ptr pmVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  mp_ptr rp;
  bool bVar22;
  ulong local_68;
  
  if (dn < 1) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("dn > 0","lib/mini-gmp.c",0x462,"mpn_div_qr_preinv");
  }
  if (nn < dn) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("nn >= dn","lib/mini-gmp.c",0x463,"mpn_div_qr_preinv");
  }
  if (dn == 1) {
    mVar6 = mpn_div_qr_1_preinv(qp,np,nn,inv);
    *np = mVar6;
    return;
  }
  if (dn == 2) {
    if (nn == 1) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("nn >= 2","lib/mini-gmp.c",0x3fa,"mpn_div_qr_2_preinv");
    }
    uVar1 = inv->shift;
    mVar6 = 0;
    uVar10 = inv->d1;
    uVar14 = inv->d0;
    uVar12 = inv->di & 0xffffffff;
    uVar7 = inv->di >> 0x20;
    if (uVar1 != 0) {
      mVar6 = mpn_lshift(np,np,nn,uVar1);
    }
    mVar9 = np[nn + -1];
    uVar16 = nn - 2;
    do {
      uVar18 = (mVar6 & 0xffffffff) * uVar12;
      uVar19 = (mVar6 >> 0x20) * uVar12;
      lVar5 = (mVar6 >> 0x20) * uVar7;
      uVar17 = (uVar18 >> 0x20) + (mVar6 & 0xffffffff) * uVar7 + uVar19;
      lVar21 = lVar5 + 0x100000000;
      if (uVar19 <= uVar17) {
        lVar21 = lVar5;
      }
      uVar18 = (uVar17 << 0x20) + (uVar18 & 0xffffffff);
      uVar19 = (uVar17 >> 0x20) + mVar6 + (ulong)CARRY8(uVar18,mVar9) + lVar21;
      uVar17 = np[uVar16] - uVar14;
      uVar15 = (uVar19 & 0xffffffff) * (uVar14 & 0xffffffff);
      uVar20 = (uVar19 & 0xffffffff) * (uVar14 >> 0x20);
      lVar5 = (uVar14 >> 0x20) * (uVar19 >> 0x20);
      uVar13 = (uVar15 >> 0x20) + (uVar19 >> 0x20) * (uVar14 & 0xffffffff) + uVar20;
      lVar21 = lVar5 + 0x100000000;
      if (uVar20 <= uVar13) {
        lVar21 = lVar5;
      }
      uVar15 = (uVar15 & 0xffffffff) + (uVar13 << 0x20);
      uVar13 = (((((mVar9 - uVar10) - (ulong)(np[uVar16] < uVar14)) - uVar10 * uVar19) -
                (uVar13 >> 0x20)) - (ulong)(uVar17 < uVar15)) - lVar21;
      bVar22 = uVar18 + mVar9 <= uVar13;
      uVar17 = uVar17 - uVar15;
      mVar8 = (uVar19 + 1) - (ulong)bVar22;
      uVar18 = 0;
      if (bVar22) {
        uVar18 = uVar14;
      }
      mVar9 = uVar17 + uVar18;
      uVar19 = 0;
      if (bVar22) {
        uVar19 = uVar10;
      }
      mVar6 = (ulong)CARRY8(uVar17,uVar18) + uVar19 + uVar13;
      if ((uVar10 <= mVar6) && ((uVar10 < mVar6 || (uVar14 <= mVar9)))) {
        mVar8 = mVar8 + 1;
        bVar22 = mVar9 < uVar14;
        mVar9 = mVar9 - uVar14;
        mVar6 = (mVar6 - bVar22) - uVar10;
      }
      if (qp != (mp_ptr)0x0) {
        qp[uVar16] = mVar8;
      }
      bVar22 = uVar16 != 0;
      uVar16 = uVar16 - 1;
    } while (bVar22);
    if (uVar1 != 0) {
      bVar2 = (byte)uVar1;
      if ((uVar16 >> (0x40 - bVar2 & 0x3f) & mVar9) != 0) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("(r0 & (GMP_LIMB_MAX >> (GMP_LIMB_BITS - shift))) == 0","lib/mini-gmp.c",0x415
                      ,"mpn_div_qr_2_preinv");
      }
      mVar9 = mVar9 >> (bVar2 & 0x3f) | mVar6 << (0x40 - bVar2 & 0x3f);
      mVar6 = mVar6 >> (bVar2 & 0x3f);
    }
    np[1] = mVar6;
    *np = mVar9;
    return;
  }
  mVar6 = dp[dn + -1];
  if (inv->d1 != mVar6) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("inv->d1 == dp[dn-1]","lib/mini-gmp.c",0x46e,"mpn_div_qr_preinv");
  }
  mVar9 = dp[dn + -2];
  if (inv->d0 != mVar9) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("inv->d0 == dp[dn-2]","lib/mini-gmp.c",0x46f,"mpn_div_qr_preinv");
  }
  if (-1 < (long)inv->d1) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("(inv->d1 & GMP_LIMB_HIGHBIT) != 0","lib/mini-gmp.c",0x470,"mpn_div_qr_preinv");
  }
  uVar1 = inv->shift;
  if (uVar1 == 0) {
    local_68 = inv->di;
    uVar10 = 0;
  }
  else {
    uVar10 = mpn_lshift(np,np,nn,uVar1);
    mVar9 = dp[dn + -2];
    local_68 = inv->di;
    mVar6 = dp[dn + -1];
    if (-1 < (long)mVar6) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("(d1 & GMP_LIMB_HIGHBIT) != 0","lib/mini-gmp.c",0x430,"mpn_div_qr_pi1");
    }
  }
  lVar21 = nn - dn;
  pmVar11 = np + nn;
  do {
    uVar14 = pmVar11[-1];
    rp = pmVar11 + -dn;
    if ((uVar10 == mVar6) && (uVar14 == mVar9)) {
      mpn_submul_1(rp,dp,dn,0xffffffffffffffff);
      uVar10 = pmVar11[-1];
      mVar8 = 0xffffffffffffffff;
    }
    else {
      uVar16 = (uVar10 & 0xffffffff) * (local_68 & 0xffffffff);
      uVar12 = (local_68 & 0xffffffff) * (uVar10 >> 0x20);
      lVar3 = (uVar10 >> 0x20) * (local_68 >> 0x20);
      uVar7 = (uVar16 >> 0x20) + (uVar10 & 0xffffffff) * (local_68 >> 0x20) + uVar12;
      lVar5 = lVar3 + 0x100000000;
      if (uVar12 <= uVar7) {
        lVar5 = lVar3;
      }
      uVar12 = (uVar7 << 0x20) + (uVar16 & 0xffffffff);
      uVar16 = pmVar11[-2] - mVar9;
      uVar10 = (uVar7 >> 0x20) + uVar10 + (ulong)CARRY8(uVar12,uVar14) + lVar5;
      uVar18 = (mVar9 & 0xffffffff) * (uVar10 & 0xffffffff);
      uVar17 = (uVar10 & 0xffffffff) * (mVar9 >> 0x20);
      lVar3 = (mVar9 >> 0x20) * (uVar10 >> 0x20);
      uVar7 = (uVar18 >> 0x20) + (uVar10 >> 0x20) * (mVar9 & 0xffffffff) + uVar17;
      lVar5 = lVar3 + 0x100000000;
      if (uVar17 <= uVar7) {
        lVar5 = lVar3;
      }
      uVar17 = (uVar18 & 0xffffffff) + (uVar7 << 0x20);
      uVar7 = (((((uVar14 - mVar6) - (ulong)(pmVar11[-2] < mVar9)) - uVar10 * mVar6) -
               (uVar7 >> 0x20)) - (ulong)(uVar16 < uVar17)) - lVar5;
      bVar22 = uVar12 + uVar14 <= uVar7;
      uVar16 = uVar16 - uVar17;
      mVar8 = (uVar10 + 1) - (ulong)bVar22;
      uVar10 = 0;
      if (bVar22) {
        uVar10 = mVar9;
      }
      uVar12 = uVar16 + uVar10;
      uVar14 = 0;
      if (bVar22) {
        uVar14 = mVar6;
      }
      uVar10 = (ulong)CARRY8(uVar16,uVar10) + uVar14 + uVar7;
      if (mVar6 <= uVar10) {
        if ((uVar10 <= mVar6) && (uVar12 < mVar9)) {
          mVar4 = mpn_submul_1(rp,dp,dn + -2,mVar8);
          uVar10 = uVar10 - (uVar12 < mVar4);
          pmVar11[-2] = uVar12 - mVar4;
          goto LAB_00101c7e;
        }
        mVar8 = mVar8 + 1;
        bVar22 = uVar12 < mVar9;
        uVar12 = uVar12 - mVar9;
        uVar10 = (uVar10 - bVar22) - mVar6;
      }
      mVar4 = mpn_submul_1(rp,dp,dn + -2,mVar8);
      pmVar11[-2] = uVar12 - mVar4;
      if (uVar10 < (uVar12 < mVar4)) {
        uVar10 = 0;
        lVar5 = 0;
        do {
          uVar14 = rp[lVar5];
          uVar12 = uVar10 + rp[lVar5];
          uVar7 = dp[lVar5];
          rp[lVar5] = uVar12 + dp[lVar5];
          uVar10 = (ulong)CARRY8(uVar10,uVar14) + (ulong)CARRY8(uVar12,uVar7);
          lVar5 = lVar5 + 1;
        } while (lVar5 < dn + -1);
        uVar10 = (mVar6 - 1) + uVar10;
        mVar8 = mVar8 - 1;
      }
      else {
        uVar10 = uVar10 - (uVar12 < mVar4);
      }
    }
LAB_00101c7e:
    if (qp != (mp_ptr)0x0) {
      qp[lVar21] = mVar8;
    }
    lVar21 = lVar21 + -1;
    pmVar11 = pmVar11 + -1;
    if (lVar21 == -1) {
      np[dn + -1] = uVar10;
      if (uVar1 != 0) {
        mVar6 = mpn_rshift(np,np,dn,uVar1);
        if (mVar6 != 0) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("__cy == 0","lib/mini-gmp.c",0x47b,"mpn_div_qr_preinv");
        }
      }
      return;
    }
  } while( true );
}



/* WARNING: Unknown calling convention */

mp_bitcnt_t mpn_scan1(mp_srcptr ptr,mp_bitcnt_t bit)

{
  mp_bitcnt_t mVar1;
  ulong i;
  
  i = bit >> 6;
  mVar1 = mpn_common_scan(-1L << ((byte)bit & 0x3f) & ptr[i],i,ptr,i,0);
  return mVar1;
}



/* WARNING: Unknown calling convention */

mp_bitcnt_t mpn_scan0(mp_srcptr ptr,mp_bitcnt_t bit)

{
  mp_bitcnt_t mVar1;
  ulong i;
  
  i = bit >> 6;
  mVar1 = mpn_common_scan(~ptr[i] & -1L << ((byte)bit & 0x3f),i,ptr,i,0xffffffffffffffff);
  return mVar1;
}



/* WARNING: Unknown calling convention */

void mpn_com(mp_ptr rp,mp_srcptr up,mp_size_t n)

{
  long lVar1;
  
  if (0 < n) {
    lVar1 = 0;
    do {
      rp[lVar1] = ~up[lVar1];
      lVar1 = lVar1 + 1;
    } while (n != lVar1);
  }
  return;
}



/* WARNING: Unknown calling convention */

mp_limb_t mpn_neg(mp_ptr rp,mp_srcptr up,mp_size_t n)

{
  long lVar1;
  mp_limb_t mVar2;
  mp_limb_t mVar3;
  bool bVar4;
  
  mVar2 = *up;
  if (mVar2 == 0) {
    *rp = 0;
    bVar4 = n != 1;
    mVar3 = 0;
    n = n + -1;
    if (bVar4) {
      do {
        mVar2 = up[1];
        up = up + 1;
        rp = rp + 1;
        lVar1 = n + -1;
        if (mVar2 != 0) goto LAB_001023c4;
        *rp = 0;
        n = lVar1;
      } while (lVar1 != 0);
    }
  }
  else {
LAB_001023c4:
    lVar1 = 0;
    *rp = -mVar2;
    if (1 < n) {
      do {
        rp[lVar1 + 1] = ~up[lVar1 + 1];
        lVar1 = lVar1 + 1;
      } while (n + -1 != lVar1);
    }
    mVar3 = 1;
  }
  return mVar3;
}



/* WARNING: Unknown calling convention */

void mpz_div_r_2exp(__mpz_struct *r,__mpz_struct *u,mp_bitcnt_t bit_index,mpz_div_round_mode mode)

{
  uint uVar1;
  mp_limb_t *pmVar2;
  uint uVar3;
  mp_ptr rp;
  long lVar4;
  mp_limb_t mVar5;
  int iVar6;
  long lVar7;
  ulong n;
  ulong *puVar8;
  ulong size;
  ulong uVar9;
  
  uVar1 = u->_mp_size;
  lVar7 = (long)(int)uVar1;
  if ((lVar7 == 0) || (bit_index == 0)) {
    iVar6 = 0;
  }
  else {
    size = bit_index + 0x3f >> 6;
    if (size == 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("rn > 0","lib/mini-gmp.c",0x983,"mpz_div_r_2exp");
    }
    if ((long)r->_mp_alloc < (long)size) {
      rp = mpz_realloc(r,size);
    }
    else {
      rp = r->_mp_d;
    }
    uVar3 = -uVar1;
    if (0 < (int)uVar1) {
      uVar3 = uVar1;
    }
    uVar9 = 0xffffffffffffffff >> (-(char)bit_index & 0x3fU);
    n = (ulong)uVar3;
    if (size <= n) {
      pmVar2 = u->_mp_d;
      if ((u != r) && (size != 1)) {
        lVar4 = 0;
        do {
          rp[lVar4] = pmVar2[lVar4];
          lVar4 = lVar4 + 1;
        } while (size - 1 != lVar4);
      }
      puVar8 = rp + (size - 1);
      *puVar8 = pmVar2[size - 1] & uVar9;
      if (mode != 0 < lVar7) goto LAB_001024d6;
      mpn_neg(rp,rp,size);
      *puVar8 = *puVar8 & uVar9;
      lVar7 = -lVar7;
      goto LAB_001024d6;
    }
    if (mode == 0 < lVar7) {
      mVar5 = mpn_neg(rp,u->_mp_d,n);
      if (mVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("__cy == 0","lib/mini-gmp.c",0x993,"mpz_div_r_2exp");
      }
      lVar7 = -lVar7;
      if ((long)n < (long)(size - 1)) {
        memset(rp + n,0xff,((size - 1) - n) * 8);
        rp[size - 1] = uVar9;
        goto LAB_001024d6;
      }
      rp[size - 1] = uVar9;
      goto LAB_001024d6;
    }
    size = n;
    if (u == r) goto LAB_001024d6;
    pmVar2 = u->_mp_d;
    size = 0;
    do {
      uVar9 = size;
      rp[uVar9] = pmVar2[uVar9];
      size = uVar9 + 1;
    } while (n != size);
    mVar5 = rp[uVar9];
    while ((mVar5 == 0 && (size = size - 1, size != 0))) {
LAB_001024d6:
      mVar5 = rp[size - 1];
    }
    iVar6 = (int)size;
    if (lVar7 < 0) {
      iVar6 = -(int)size;
    }
  }
  r->_mp_size = iVar6;
  return;
}



/* WARNING: Unknown calling convention */

mp_limb_t mpn_invert_3by2(mp_limb_t u1,mp_limb_t u0)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  mp_limb_t mVar7;
  ulong uVar8;
  bool bVar9;
  
  uVar6 = ~u1 / (u1 >> 0x20);
  iVar1 = (int)uVar6;
  uVar6 = uVar6 & 0xffffffff;
  uVar5 = ~u1 - (u1 >> 0x20) * uVar6 << 0x20 | 0xffffffff;
  uVar2 = (u1 & 0xffffffff) * uVar6;
  if (uVar5 < uVar2) {
    uVar6 = (ulong)(iVar1 - 1);
    bVar9 = CARRY8(uVar5,u1);
    uVar5 = uVar5 + u1;
    if ((!bVar9) && (uVar5 < uVar2)) {
      uVar5 = uVar5 + u1;
      uVar6 = (ulong)(iVar1 - 2);
    }
  }
  uVar5 = uVar5 - uVar2;
  uVar3 = (uVar5 >> 0x20) * uVar6 + uVar5;
  uVar8 = uVar3 >> 0x20;
  uVar2 = uVar8 + 1;
  uVar5 = ((uVar5 << 0x20) + 0xffffffff) - u1 * uVar2;
  if (uVar3 << 0x20 <= uVar5) {
    uVar5 = uVar5 + u1;
    uVar2 = uVar8;
  }
  mVar7 = (uVar6 << 0x20) + uVar2;
  if (u1 <= uVar5) {
    mVar7 = mVar7 + 1;
    uVar5 = uVar5 - u1;
  }
  if (u0 != 0) {
    uVar6 = (u0 - 1) - uVar5;
    if (uVar5 < u0) {
      if (uVar6 < u1) {
        mVar7 = mVar7 - 1;
      }
      else {
        uVar6 = uVar6 - u1;
        mVar7 = mVar7 - 2;
      }
      uVar6 = uVar6 - u1;
    }
    uVar3 = (u0 & 0xffffffff) * (mVar7 & 0xffffffff);
    uVar5 = (mVar7 & 0xffffffff) * (u0 >> 0x20);
    lVar4 = (u0 >> 0x20) * (mVar7 >> 0x20);
    uVar2 = (mVar7 >> 0x20) * (u0 & 0xffffffff) + uVar5 + (uVar3 >> 0x20);
    if (uVar2 < uVar5) {
      lVar4 = lVar4 + 0x100000000;
    }
    uVar5 = lVar4 + (uVar2 >> 0x20);
    uVar8 = uVar6 + uVar5;
    if (CARRY8(uVar6,uVar5)) {
      mVar7 = (mVar7 - 1) -
              (ulong)(u0 < (uVar2 << 0x20) + (uVar3 & 0xffffffff) && u1 == uVar8 || u1 < uVar8);
    }
  }
  return mVar7;
}



/* WARNING: Unknown calling convention */

void mpn_div_qr_1_invert(gmp_div_inverse *inv,mp_limb_t d)

{
  ulong uVar1;
  uint uVar2;
  mp_limb_t mVar3;
  
  if (d != 0) {
    uVar2 = 0;
    uVar1 = d;
    if (d < 0x100000000000000) {
      do {
        uVar1 = uVar1 << 8;
        uVar2 = uVar2 + 8;
      } while (uVar1 < 0x100000000000000);
    }
    for (; -1 < (long)uVar1; uVar1 = uVar1 * 2) {
      uVar2 = uVar2 + 1;
    }
    inv->shift = uVar2;
    mVar3 = d << ((byte)uVar2 & 0x3f);
    inv->d1 = mVar3;
    mVar3 = mpn_invert_3by2(mVar3,0);
    inv->di = mVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("d > 0","lib/mini-gmp.c",0x38f,"mpn_div_qr_1_invert");
}



/* WARNING: Unknown calling convention */

size_t mpn_get_str_other(uchar *sp,int base,mpn_base_info *info,mp_ptr up,mp_size_t un)

{
  uchar uVar1;
  long lVar2;
  size_t sVar3;
  mp_limb_t w;
  uchar *puVar4;
  uchar *puVar5;
  uchar *puVar6;
  long lVar7;
  long lVar9;
  long in_FS_OFFSET;
  gmp_div_inverse binv;
  gmp_div_inverse bbinv;
  long lVar8;
  
  lVar7 = 0;
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  mpn_div_qr_1_invert(&binv,(long)base);
  puVar4 = sp;
  if (1 < un) {
    mpn_div_qr_1_invert(&bbinv,info->bb);
    lVar9 = 0;
    do {
      w = mpn_div_qr_1_preinv(up,up,un,&bbinv);
      un = un - (ulong)(up[un + -1] == 0);
      sVar3 = mpn_limb_get_str(sp + lVar9,w,&binv);
      lVar7 = lVar9 + sVar3;
      lVar8 = lVar7;
      if (sVar3 < info->exp) {
        do {
          lVar7 = lVar8 + 1;
          sp[lVar8] = '\0';
          lVar8 = lVar7;
        } while ((ulong)(lVar7 - lVar9) < (ulong)info->exp);
      }
      lVar9 = lVar7;
    } while (un != 1);
    puVar4 = sp + lVar7;
  }
  sVar3 = mpn_limb_get_str(puVar4,*up,&binv);
  sVar3 = sVar3 + lVar7;
  if (1 < sVar3) {
    puVar4 = sp + (sVar3 - 1);
    puVar5 = sp;
    do {
      uVar1 = *puVar5;
      puVar6 = puVar5 + 1;
      *puVar5 = *puVar4;
      *puVar4 = uVar1;
      puVar4 = puVar4 + -1;
      puVar5 = puVar6;
    } while (puVar6 != sp + (sVar3 - 2 >> 1) + 1);
  }
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return sVar3;
}



/* WARNING: Unknown calling convention */

void mpn_div_qr_invert(gmp_div_inverse *inv,mp_srcptr dp,mp_size_t dn)

{
  byte bVar1;
  ulong uVar2;
  mp_limb_t mVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  
  if (dn < 1) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("dn > 0","lib/mini-gmp.c",0x3ad,"mpn_div_qr_invert");
  }
  if (dn == 1) {
    mpn_div_qr_1_invert(inv,*dp);
    return;
  }
  if (dn == 2) {
    uVar5 = dp[1];
    uVar4 = *dp;
    if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("d1 > 0","lib/mini-gmp.c",0x39c,"mpn_div_qr_2_invert");
    }
    uVar6 = 0;
    uVar7 = 0;
    uVar2 = uVar5;
    if (uVar5 < 0x100000000000000) {
      do {
        uVar2 = uVar2 << 8;
        uVar6 = uVar6 + 8;
        uVar7 = uVar6;
      } while (uVar2 < 0x100000000000000);
      for (; -1 < (long)uVar2; uVar2 = uVar2 * 2) {
LAB_00102ab0:
        uVar7 = uVar7 + 1;
      }
      uVar6 = uVar7;
      if (uVar7 != 0) {
        bVar1 = (byte)uVar7;
        uVar2 = uVar4 >> (0x40 - bVar1 & 0x3f);
        uVar4 = uVar4 << (bVar1 & 0x3f);
        uVar5 = uVar5 << (bVar1 & 0x3f) | uVar2;
      }
    }
    else if (-1 < (long)uVar5) goto LAB_00102ab0;
    inv->shift = uVar6;
    inv->d1 = uVar5;
    inv->d0 = uVar4;
    mVar3 = mpn_invert_3by2(uVar5,uVar4);
    inv->di = mVar3;
    return;
  }
  uVar5 = dp[dn + -1];
  uVar4 = dp[dn + -2];
  if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("d1 > 0","lib/mini-gmp.c",0x3ba,"mpn_div_qr_invert");
  }
  uVar6 = 0;
  uVar7 = 0;
  uVar2 = uVar5;
  if (uVar5 < 0x100000000000000) {
    do {
      uVar2 = uVar2 << 8;
      uVar6 = uVar6 + 8;
      uVar7 = uVar6;
    } while (uVar2 < 0x100000000000000);
    for (; -1 < (long)uVar2; uVar2 = uVar2 * 2) {
LAB_00102a10:
      uVar7 = uVar7 + 1;
    }
    inv->shift = uVar7;
    if (uVar7 != 0) {
      bVar1 = (byte)uVar7;
      uVar5 = uVar5 << (bVar1 & 0x3f) | uVar4 >> (0x40 - bVar1 & 0x3f);
      uVar4 = uVar4 << (bVar1 & 0x3f) | dp[dn + -3] >> (0x40 - bVar1 & 0x3f);
    }
  }
  else {
    if (-1 < (long)uVar5) goto LAB_00102a10;
    inv->shift = 0;
  }
  inv->d1 = uVar5;
  inv->d0 = uVar4;
  mVar3 = mpn_invert_3by2(uVar5,uVar4);
  inv->di = mVar3;
  return;
}



/* WARNING: Unknown calling convention */

void mpn_div_qr(mp_ptr qp,mp_ptr np,mp_size_t nn,mp_srcptr dp,mp_size_t dn)

{
  long lVar1;
  mp_ptr rp;
  mp_limb_t mVar2;
  long in_FS_OFFSET;
  gmp_div_inverse inv;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (dn < 1) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("dn > 0","lib/mini-gmp.c",0x485,"mpn_div_qr");
  }
  if (nn < dn) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("nn >= dn","lib/mini-gmp.c",0x486,"mpn_div_qr");
  }
  mpn_div_qr_invert(&inv,dp,dn);
  if (dn < 3) {
LAB_00102c60:
    mpn_div_qr_preinv(qp,np,nn,dp,dn,&inv);
  }
  else {
    if (inv.shift == 0) goto LAB_00102c60;
    rp = (mp_ptr)(*gmp_allocate_func)(dn * 8);
    mVar2 = mpn_lshift(rp,dp,dn,inv.shift);
    if (mVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("__cy == 0","lib/mini-gmp.c",0x48c,"mpn_div_qr");
    }
    mpn_div_qr_preinv(qp,np,nn,rp,dn,&inv);
    if (rp != (mp_ptr)0x0) {
      if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00102c56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*gmp_free_func)(rp,dn * 8);
        return;
      }
      goto LAB_00102c98;
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00102c98:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

size_t mpn_get_str(uchar *sp,int base,mp_ptr up,mp_size_t un)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  uint bits;
  size_t sVar6;
  long lVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  mpn_base_info info;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (un < 1) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("un > 0","lib/mini-gmp.c",0x52d,"mpn_get_str");
  }
  if (up[un + -1] != 0) {
    bits = mpn_base_power_of_two_p(base);
    if (bits == 0) {
      uVar8 = (ulong)base;
      info.exp = 1;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar8;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar8;
      lVar7 = SUB168(auVar2 * auVar4,8);
      info.bb = uVar8;
      while (lVar7 == 0) {
        info.bb = info.bb * uVar8;
        info.exp = info.exp + 1;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uVar8;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = info.bb;
        lVar7 = SUB168(auVar3 * auVar5,8);
      }
      sVar6 = mpn_get_str_other(sp,base,&info,up,un);
      if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
        return sVar6;
      }
    }
    else if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      sVar6 = mpn_get_str_bits(sp,bits,up,un);
      return sVar6;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("up[un-1] > 0","lib/mini-gmp.c",0x52e,"mpn_get_str");
}



/* WARNING: Unknown calling convention */

mp_size_t mpn_set_str(mp_ptr rp,uchar *sp,size_t sn,int base)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  uint bits;
  mp_size_t mVar6;
  ulong b;
  long lVar7;
  uchar *sp_00;
  long in_FS_OFFSET;
  mpn_base_info info;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (sn == 0) {
    mVar6 = 0;
  }
  else {
    sp_00 = sp;
    bits = mpn_base_power_of_two_p(base);
    if (bits != 0) {
      if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
        mVar6 = mpn_set_str_bits(rp,sp,sn,bits);
        return mVar6;
      }
      goto LAB_00102ecc;
    }
    b = (ulong)base;
    info.exp = 1;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = b;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = b;
    lVar7 = SUB168(auVar2 * auVar4,8);
    info.bb = b;
    while (lVar7 == 0) {
      info.bb = info.bb * b;
      info.exp = info.exp + 1;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = b;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = info.bb;
      lVar7 = SUB168(auVar3 * auVar5,8);
    }
    mVar6 = mpn_set_str_other(rp,sp_00,sn,b,&info);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return mVar6;
  }
LAB_00102ecc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

void mpz_init(__mpz_struct *r)

{
  r->_mp_alloc = 0;
  r->_mp_size = 0;
  r->_mp_d = (mp_limb_t *)&dummy_limb_35;
  return;
}



/* WARNING: Unknown calling convention */

void mpz_init2(__mpz_struct *r,mp_bitcnt_t bits)

{
  long lVar1;
  mp_limb_t *pmVar2;
  
  r->_mp_size = 0;
  lVar1 = ((bits - 1) + (ulong)(bits == 0) >> 6) + 1;
  r->_mp_alloc = (int)lVar1;
  pmVar2 = (mp_limb_t *)(*gmp_allocate_func)(lVar1 * 8);
  r->_mp_d = pmVar2;
  return;
}



/* WARNING: Unknown calling convention */

void mpz_clear(__mpz_struct *r)

{
  if (r->_mp_alloc != 0) {
                    /* WARNING: Could not recover jumptable at 0x00102f53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*gmp_free_func)(r->_mp_d,(long)r->_mp_alloc << 3);
    return;
  }
  return;
}



/* WARNING: Unknown calling convention */

void mpz_set_si(__mpz_struct *r,long x)

{
  mp_ptr pmVar1;
  
  if (x < 0) {
    r->_mp_size = -1;
    if (r->_mp_alloc < 1) {
      pmVar1 = mpz_realloc(r,1);
    }
    else {
      pmVar1 = r->_mp_d;
    }
    x = -x;
  }
  else {
    if (x == 0) {
      r->_mp_size = 0;
      return;
    }
    r->_mp_size = 1;
    if (r->_mp_alloc < 1) {
      pmVar1 = mpz_realloc(r,1);
    }
    else {
      pmVar1 = r->_mp_d;
    }
  }
  *pmVar1 = x;
  return;
}



/* WARNING: Unknown calling convention */

void mpz_set_ui(__mpz_struct *r,ulong x)

{
  mp_ptr pmVar1;
  
  if (x == 0) {
    r->_mp_size = 0;
    return;
  }
  r->_mp_size = 1;
  if (0 < r->_mp_alloc) {
    *r->_mp_d = x;
    return;
  }
  pmVar1 = mpz_realloc(r,1);
  *pmVar1 = x;
  return;
}



/* WARNING: Unknown calling convention */

void mpz_set(__mpz_struct *r,__mpz_struct *x)

{
  mp_limb_t *pmVar1;
  int iVar2;
  mp_ptr pmVar3;
  long lVar4;
  long size;
  int iVar5;
  
  if (r != x) {
    iVar5 = x->_mp_size;
    iVar2 = -iVar5;
    if (0 < iVar5) {
      iVar2 = iVar5;
    }
    size = (long)iVar2;
    if (r->_mp_alloc < iVar2) {
      pmVar3 = mpz_realloc(r,size);
      iVar5 = x->_mp_size;
    }
    else {
      pmVar3 = r->_mp_d;
    }
    pmVar1 = x->_mp_d;
    lVar4 = 0;
    if (size != 0) {
      do {
        pmVar3[lVar4] = pmVar1[lVar4];
        lVar4 = lVar4 + 1;
      } while (size != lVar4);
    }
    r->_mp_size = iVar5;
    return;
  }
  return;
}



/* WARNING: Unknown calling convention */

void mpz_div_q_2exp(__mpz_struct *q,__mpz_struct *u,mp_bitcnt_t bit_index,mpz_div_round_mode mode)

{
  uint uVar1;
  long lVar2;
  mp_limb_t *pmVar3;
  uint uVar4;
  long lVar5;
  mp_ptr pmVar6;
  mp_size_t mVar7;
  ulong uVar8;
  mp_limb_t *rp;
  uint cnt;
  int iVar9;
  long size;
  ulong uVar10;
  long in_FS_OFFSET;
  bool bVar11;
  mpz_t bb;
  
  uVar1 = u->_mp_size;
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if (uVar1 == 0) {
    q->_mp_size = 0;
    goto LAB_001031d0;
  }
  uVar10 = bit_index >> 6;
  uVar4 = -uVar1;
  if (0 < (int)uVar1) {
    uVar4 = uVar1;
  }
  cnt = (uint)bit_index & 0x3f;
  size = uVar4 - uVar10;
  if (mode == 0 < (int)uVar1) {
    if (0 < size) {
      for (uVar8 = uVar10; uVar8 != 0; uVar8 = uVar8 - 1) {
        if (u->_mp_d[uVar8 - 1] != 0) {
          bVar11 = true;
          goto LAB_00103111;
        }
      }
      bVar11 = (~(-1L << (sbyte)cnt) & u->_mp_d[uVar10]) != 0;
      goto LAB_00103111;
    }
    q->_mp_size = 0;
LAB_00103151:
    bb[0]._mp_d = (mp_limb_t *)&dummy_limb_35;
    bb[0]._mp_alloc = (int)_LC35;
    bb[0]._mp_size = _LC35._4_4_;
    pmVar6 = mpz_realloc(bb,1);
    *pmVar6 = 1;
    if ((q->_mp_size ^ bb[0]._mp_size) < 0) {
      mVar7 = mpz_abs_sub(q,q,bb);
      iVar9 = (int)mVar7;
    }
    else {
      mVar7 = mpz_abs_add(q,q,bb);
      iVar9 = (int)mVar7;
    }
    if (q->_mp_size < 0) {
      iVar9 = -iVar9;
    }
    q->_mp_size = iVar9;
    if (bb[0]._mp_alloc != 0) {
      (*gmp_free_func)(bb[0]._mp_d,(long)bb[0]._mp_alloc * 8);
    }
  }
  else if (size < 1) {
    q->_mp_size = 0;
  }
  else {
    bVar11 = false;
LAB_00103111:
    if (q->_mp_alloc < size) {
      rp = mpz_realloc(q,size);
    }
    else {
      rp = q->_mp_d;
    }
    lVar5 = 0;
    pmVar3 = u->_mp_d;
    if ((bit_index & 0x3f) == 0) {
      do {
        rp[lVar5] = (pmVar3 + uVar10)[lVar5];
        lVar5 = lVar5 + 1;
      } while (lVar5 < size);
    }
    else {
      mpn_rshift(rp,pmVar3 + uVar10,size,cnt);
      size = size - (ulong)(rp[size + -1] == 0);
    }
    q->_mp_size = (int)size;
    if (bVar11) goto LAB_00103151;
  }
  if ((int)uVar1 < 0) {
    mpz_set(q,q);
    q->_mp_size = -q->_mp_size;
  }
LAB_001031d0:
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Unknown calling convention */

mp_bitcnt_t mpz_make_odd(__mpz_struct *r)

{
  mp_bitcnt_t bit_index;
  
  if (0 < r->_mp_size) {
    bit_index = mpn_common_scan(*r->_mp_d,0,r->_mp_d,0,0);
    mpz_div_q_2exp(r,r,bit_index,GMP_DIV_TRUNC);
    return bit_index;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("r->_mp_size > 0","lib/mini-gmp.c",0xae7,"mpz_make_odd");
}



/* WARNING: Unknown calling convention */

void mpz_init_set_si(__mpz_struct *r,long x)

{
  mp_ptr pmVar1;
  
  r->_mp_alloc = 0;
  r->_mp_size = 0;
  r->_mp_d = (mp_limb_t *)&dummy_limb_35;
  if (-1 < x) {
    if (x != 0) {
      r->_mp_size = 1;
      pmVar1 = mpz_realloc(r,1);
      *pmVar1 = x;
    }
    return;
  }
  r->_mp_size = -1;
  pmVar1 = mpz_realloc(r,1);
  *pmVar1 = -x;
  return;
}



/* WARNING: Unknown calling convention */

void mpz_init_set_ui(__mpz_struct *r,ulong x)

{
  mp_ptr pmVar1;
  
  r->_mp_alloc = 0;
  r->_mp_size = 0;
  r->_mp_d = (mp_limb_t *)&dummy_limb_35;
  if (x != 0) {
    r->_mp_size = 1;
    pmVar1 = mpz_realloc(r,1);
    *pmVar1 = x;
    return;
  }
  return;
}



/* WARNING: Unknown calling convention */

void mpz_init_set(__mpz_struct *r,__mpz_struct *x)

{
  r->_mp_alloc = 0;
  r->_mp_size = 0;
  r->_mp_d = (mp_limb_t *)&dummy_limb_35;
  mpz_set(r,x);
  return;
}



/* WARNING: Unknown calling convention */

int mpz_fits_slong_p(__mpz_struct *u)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = u->_mp_size;
  uVar2 = 0;
  if (iVar1 < 0) {
    if (iVar1 == -1) {
      uVar2 = (uint)(-(uint)(0x8000000000000000 < *u->_mp_d) -
                     ((int)~(uint)(*u->_mp_d >> 0x20) >> 0x1f) != -1);
    }
  }
  else if ((iVar1 < 2) && (uVar2 = 1, iVar1 != 0)) {
    return (int)((-1 - (int)((long)*u->_mp_d >> 0x3f)) + (uint)(0x7ffffffffffffffe < *u->_mp_d) != 1
                );
  }
  return uVar2;
}



/* WARNING: Unknown calling convention */

int mpz_fits_ulong_p(__mpz_struct *u)

{
  return (int)((uint)u->_mp_size < 2);
}



/* WARNING: Unknown calling convention */

int mpz_fits_sint_p(__mpz_struct *u)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = u->_mp_size;
  uVar2 = 0;
  if (iVar1 < 0) {
    if (iVar1 == -1) {
      uVar2 = (uint)((uint)(*u->_mp_d < 0x80000000) - (uint)(0x80000000 < *u->_mp_d) != -1);
    }
  }
  else if ((iVar1 < 2) && (uVar2 = 1, iVar1 != 0)) {
    return (int)((uint)(0x7fffffff < *u->_mp_d) - (uint)(*u->_mp_d < 0x7fffffff) != 1);
  }
  return uVar2;
}



/* WARNING: Unknown calling convention */

int mpz_fits_uint_p(__mpz_struct *u)

{
  int iVar1;
  
  iVar1 = 0;
  if (((uint)u->_mp_size < 2) && (iVar1 = 1, u->_mp_size != 0)) {
    return (int)(((*u->_mp_d >> 0x20 != 0) - 1) + (uint)(0xfffffffe < *u->_mp_d) != 1);
  }
  return iVar1;
}



/* WARNING: Unknown calling convention */

int mpz_fits_sshort_p(__mpz_struct *u)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = u->_mp_size;
  uVar2 = 0;
  if (iVar1 < 0) {
    if (iVar1 == -1) {
      uVar2 = (uint)((uint)(*u->_mp_d < 0x8000) - (uint)(0x8000 < *u->_mp_d) != -1);
    }
  }
  else if ((iVar1 < 2) && (uVar2 = 1, iVar1 != 0)) {
    return (int)((uint)(0x7fff < *u->_mp_d) - (uint)(*u->_mp_d < 0x7fff) != 1);
  }
  return uVar2;
}



/* WARNING: Unknown calling convention */

int mpz_fits_ushort_p(__mpz_struct *u)

{
  int iVar1;
  
  iVar1 = 0;
  if (((uint)u->_mp_size < 2) && (iVar1 = 1, u->_mp_size != 0)) {
    return (int)((uint)(0xffff < *u->_mp_d) - (uint)(*u->_mp_d < 0xffff) != 1);
  }
  return iVar1;
}



/* WARNING: Unknown calling convention */

long mpz_get_si(__mpz_struct *u)

{
  ulong uVar1;
  
  uVar1 = 0;
  if (u->_mp_size != 0) {
    if (-1 < u->_mp_size) {
      return *u->_mp_d & 0x7fffffffffffffff;
    }
    uVar1 = -*u->_mp_d | 0x8000000000000000;
  }
  return uVar1;
}



/* WARNING: Unknown calling convention */

ulong mpz_get_ui(__mpz_struct *u)

{
  ulong uVar1;
  
  uVar1 = 0;
  if (u->_mp_size != 0) {
    uVar1 = *u->_mp_d;
  }
  return uVar1;
}



/* WARNING: Unknown calling convention */

size_t mpz_size(__mpz_struct *u)

{
  int iVar1;
  int iVar2;
  
  iVar1 = u->_mp_size;
  iVar2 = -iVar1;
  if (0 < iVar1) {
    iVar2 = iVar1;
  }
  return (long)iVar2;
}



/* WARNING: Unknown calling convention */

mp_limb_t mpz_getlimbn(__mpz_struct *u,mp_size_t n)

{
  int iVar1;
  int iVar2;
  mp_limb_t mVar3;
  
  mVar3 = 0;
  if (-1 < n) {
    iVar1 = u->_mp_size;
    iVar2 = -iVar1;
    if (-1 < iVar1) {
      iVar2 = iVar1;
    }
    if (n < iVar2) {
      mVar3 = u->_mp_d[n];
    }
  }
  return mVar3;
}



/* WARNING: Unknown calling convention */

void mpz_realloc2(__mpz_struct *x,mp_bitcnt_t n)

{
  long lVar1;
  int iVar2;
  int iVar3;
  mp_limb_t *pmVar4;
  
  lVar1 = ((n - 1) + (ulong)(n == 0) >> 6) + 1;
  if (x->_mp_alloc == 0) {
    pmVar4 = (mp_limb_t *)(*gmp_allocate_func)(lVar1 * 8);
  }
  else {
    pmVar4 = (mp_limb_t *)(*gmp_reallocate_func)(x->_mp_d,(long)x->_mp_alloc << 3,lVar1 * 8);
  }
  iVar2 = x->_mp_size;
  x->_mp_d = pmVar4;
  x->_mp_alloc = (int)lVar1;
  iVar3 = -iVar2;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  if (lVar1 < iVar3) {
    x->_mp_size = 0;
  }
  return;
}



/* WARNING: Unknown calling convention */

mp_srcptr mpz_limbs_read(mpz_srcptr x)

{
  return x->_mp_d;
}



/* WARNING: Unknown calling convention */

mp_ptr mpz_limbs_modify(__mpz_struct *x,mp_size_t n)

{
  mp_ptr pmVar1;
  
  if (n < 1) {
                    /* WARNING: Subroutine does not return */
    mpz_limbs_modify(x,n);
  }
  if (n <= x->_mp_alloc) {
    return x->_mp_d;
  }
  pmVar1 = mpz_realloc(x,n);
  return pmVar1;
}



/* WARNING: Unknown calling convention */

mp_ptr mpz_limbs_write(__mpz_struct *x,mp_size_t n)

{
  mp_ptr pmVar1;
  
  if (n < 1) {
                    /* WARNING: Subroutine does not return */
    mpz_limbs_modify(x,n);
  }
  if (n <= x->_mp_alloc) {
    return x->_mp_d;
  }
  pmVar1 = mpz_realloc(x,n);
  return pmVar1;
}



/* WARNING: Unknown calling convention */

void mpz_limbs_finish(__mpz_struct *x,mp_size_t xs)

{
  int iVar1;
  long lVar2;
  
  lVar2 = -xs;
  if (0 < xs) {
    lVar2 = xs;
  }
  if (xs == 0) {
    iVar1 = 0;
  }
  else {
    do {
      if (x->_mp_d[lVar2 + -1] != 0) break;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    iVar1 = (int)lVar2;
    if (xs < 0) {
      iVar1 = -(int)lVar2;
    }
  }
  x->_mp_size = iVar1;
  return;
}



/* WARNING: Unknown calling convention */

mpz_srcptr mpz_roinit_n(__mpz_struct *x,mp_srcptr xp,mp_size_t xs)

{
  int iVar1;
  long lVar2;
  
  x->_mp_alloc = 0;
  x->_mp_d = xp;
  lVar2 = -xs;
  if (0 < xs) {
    lVar2 = xs;
  }
  if (xs == 0) {
    iVar1 = 0;
  }
  else {
    do {
      if (xp[lVar2 + -1] != 0) break;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    iVar1 = (int)lVar2;
    if (xs < 0) {
      iVar1 = -(int)lVar2;
    }
  }
  x->_mp_size = iVar1;
  return x;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void mpz_set_d(__mpz_struct *r,double x)

{
  double dVar1;
  double dVar2;
  double dVar3;
  mp_ptr pmVar4;
  long lVar5;
  ulong uVar6;
  mp_limb_t mVar7;
  int iVar8;
  long size;
  bool bVar9;
  double dVar10;
  double dVar11;
  
  if ((_LC37 * x == x) ||
     (dVar10 = (double)(((ulong)x ^ __LC39) & -(ulong)(x < 0.0) | ~-(ulong)(x < 0.0) & (ulong)x),
     dVar10 < _LC40)) {
    r->_mp_size = 0;
    return;
  }
  size = 1;
  for (; _LC41 <= dVar10; dVar10 = dVar10 * _LC42) {
    size = size + 1;
  }
  if (r->_mp_alloc < size) {
    pmVar4 = mpz_realloc(r,size);
  }
  else {
    pmVar4 = r->_mp_d;
  }
  dVar3 = _LC43;
  dVar2 = _LC41;
  dVar1 = _LC40;
  if (_LC43 <= dVar10) {
    uVar6 = (long)(dVar10 - _LC43) ^ 0x8000000000000000;
  }
  else {
    uVar6 = (ulong)dVar10;
  }
  dVar10 = dVar10 - (double)uVar6;
  if (_LC40 <= dVar10) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("x < 1.0","lib/mini-gmp.c",0x6d1,"mpz_set_d");
  }
  pmVar4[size + -1] = uVar6;
  lVar5 = size + -2;
  if (size != 1) {
    do {
      dVar10 = dVar10 * dVar2;
      if (dVar10 < dVar3) {
        mVar7 = (mp_limb_t)dVar10;
        if ((long)mVar7 < 0) goto LAB_001039fe;
LAB_001039ba:
        dVar11 = (double)(long)mVar7;
      }
      else {
        mVar7 = (long)(dVar10 - dVar3) ^ 0x8000000000000000;
        if (-1 < (long)mVar7) goto LAB_001039ba;
LAB_001039fe:
        dVar11 = (double)mVar7;
      }
      dVar10 = dVar10 - dVar11;
      if (dVar1 <= dVar10) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("x < 1.0","lib/mini-gmp.c",0x6d9,"mpz_set_d");
      }
      pmVar4[lVar5] = mVar7;
      bVar9 = lVar5 != 0;
      lVar5 = lVar5 + -1;
    } while (bVar9);
  }
  iVar8 = (int)size;
  if (x < 0.0) {
    iVar8 = -(int)size;
  }
  r->_mp_size = iVar8;
  return;
}



/* WARNING: Unknown calling convention */

void mpz_init_set_d(__mpz_struct *r,double x)

{
  r->_mp_alloc = 0;
  r->_mp_size = 0;
  r->_mp_d = (mp_limb_t *)&dummy_limb_35;
  mpz_set_d(r,x);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

double mpz_get_d(__mpz_struct *u)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  bool bVar8;
  double dVar9;
  
  iVar1 = u->_mp_size;
  if (iVar1 == 0) {
    return 0.0;
  }
  iVar2 = -iVar1;
  if (0 < iVar1) {
    iVar2 = iVar1;
  }
  iVar5 = 0;
  iVar6 = 0;
  uVar7 = u->_mp_d[iVar2 + -1];
  uVar3 = uVar7;
  if (uVar7 < 0x100000000000000) {
    do {
      uVar3 = uVar3 << 8;
      iVar5 = iVar5 + 8;
      iVar6 = iVar5;
    } while (uVar3 < 0x100000000000000);
    for (; -1 < (long)uVar3; uVar3 = uVar3 * 2) {
LAB_00103b90:
      iVar6 = iVar6 + 1;
    }
    iVar6 = iVar6 + -0xb;
    if (-1 < iVar6) goto code_r0x00103c74;
    uVar3 = -1L << (-(char)iVar6 & 0x3fU);
  }
  else {
    if (-1 < (long)uVar7) goto LAB_00103b90;
    uVar3 = 0xfffffffffffff800;
    iVar6 = -0xb;
  }
  uVar7 = uVar7 & uVar3;
code_r0x00103c74:
  dVar9 = (double)uVar7;
  lVar4 = (long)(iVar2 + -2);
  if (iVar2 + -2 != -1) {
    do {
      dVar9 = dVar9 * _LC41;
      if (0 < iVar6) {
        uVar7 = u->_mp_d[lVar4];
        iVar6 = iVar6 + -0x40;
        if (iVar6 < 0) {
          uVar7 = uVar7 & -1L << (-(char)iVar6 & 0x3fU);
        }
        dVar9 = dVar9 + (double)uVar7;
      }
      bVar8 = lVar4 != 0;
      lVar4 = lVar4 + -1;
    } while (bVar8);
  }
  if (iVar1 < 0) {
    dVar9 = (double)((ulong)dVar9 ^ __LC39);
  }
  return dVar9;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int mpz_cmpabs_d(__mpz_struct *x,double d)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  bool bVar5;
  
  uVar1 = x->_mp_size;
  if (d < 0.0) {
    d = (double)((ulong)d ^ __LC39);
  }
  if (uVar1 != 0) {
    if ((int)uVar1 < 1) {
      uVar1 = -uVar1;
    }
    if (uVar1 == 1) {
      if (_LC41 <= d) {
        return -1;
      }
      uVar4 = 0;
    }
    else {
      uVar3 = 1;
      do {
        uVar4 = uVar3;
        d = d * _LC42;
        uVar3 = uVar4 + 1;
      } while ((ulong)uVar1 != uVar4 + 1);
      if (_LC41 <= d) {
        return -1;
      }
    }
    do {
      if (d < _LC43) {
        uVar2 = (ulong)d;
        uVar3 = x->_mp_d[uVar4];
        if (uVar2 < uVar3) {
          return 1;
        }
      }
      else {
        uVar3 = x->_mp_d[uVar4];
        uVar2 = (long)(d - _LC43) ^ 0x8000000000000000;
        if (uVar2 < uVar3) {
          return 1;
        }
      }
      if (uVar3 < uVar2) {
        return -1;
      }
      d = (d - (double)uVar2) * _LC41;
      bVar5 = uVar4 != 0;
      uVar4 = uVar4 - 1;
    } while (bVar5);
  }
  return -(uint)(0.0 < d);
}



/* WARNING: Unknown calling convention */

int mpz_cmp_d(__mpz_struct *x,double d)

{
  int iVar1;
  
  if (x->_mp_size < 0) {
    if (d < 0.0) {
      iVar1 = mpz_cmpabs_d(x,d);
      return -iVar1;
    }
    return -1;
  }
  if (0.0 <= d) {
    iVar1 = mpz_cmpabs_d(x,d);
    return iVar1;
  }
  return 1;
}



/* WARNING: Unknown calling convention */

int mpz_sgn(__mpz_struct *u)

{
  return (uint)(0 < u->_mp_size) + (u->_mp_size >> 0x1f);
}



/* WARNING: Unknown calling convention */

int mpz_cmp_si(__mpz_struct *u,long v)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar3 = u->_mp_size;
  if (v < 0) {
    iVar1 = 1;
    if (((int)uVar3 < 0) && (iVar1 = -1, uVar3 == 0xffffffff)) {
      return (uint)(*u->_mp_d < (ulong)-v) - (uint)((ulong)-v < *u->_mp_d);
    }
  }
  else {
    if ((int)uVar3 < 0) {
      return -1;
    }
    iVar1 = 1;
    if ((int)uVar3 < 2) {
      uVar2 = 0;
      if (uVar3 != 0) {
        uVar2 = *u->_mp_d;
        uVar3 = (uint)((ulong)v < uVar2);
      }
      return uVar3 - (uVar2 < (ulong)v);
    }
  }
  return iVar1;
}



/* WARNING: Unknown calling convention */

int mpz_cmp_ui(__mpz_struct *u,ulong v)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar1 = u->_mp_size;
  if ((int)uVar1 < 0) {
    iVar2 = -1;
  }
  else {
    iVar2 = 1;
    if ((int)uVar1 < 2) {
      uVar3 = 0;
      if (uVar1 != 0) {
        uVar3 = *u->_mp_d;
        uVar1 = (uint)(v < uVar3);
      }
      return uVar1 - (uVar3 < v);
    }
  }
  return iVar2;
}



/* WARNING: Unknown calling convention */

int mpz_cmp(__mpz_struct *a,__mpz_struct *b)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  bool bVar5;
  
  lVar1 = (long)a->_mp_size;
  lVar3 = (long)b->_mp_size;
  if (lVar1 != lVar3) {
    return ((lVar3 <= lVar1) - 1) + (uint)(lVar3 <= lVar1);
  }
  if (lVar1 < 0) {
    lVar1 = -lVar1;
    do {
      bVar5 = lVar1 == 0;
      lVar1 = lVar1 + -1;
      if (bVar5) {
        return 0;
      }
      uVar4 = b->_mp_d[lVar1];
      uVar2 = a->_mp_d[lVar1];
    } while (uVar4 == uVar2);
  }
  else {
    do {
      bVar5 = lVar1 == 0;
      lVar1 = lVar1 + -1;
      if (bVar5) {
        return 0;
      }
      uVar4 = a->_mp_d[lVar1];
      uVar2 = b->_mp_d[lVar1];
    } while (uVar4 == uVar2);
  }
  return (-(uint)(uVar2 < uVar4) & 2) - 1;
}



/* WARNING: Unknown calling convention */

int mpz_cmpabs_ui(__mpz_struct *u,ulong v)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar1 = u->_mp_size;
  uVar2 = -uVar1;
  if (0 < (int)uVar1) {
    uVar2 = uVar1;
  }
  if (1 < (int)uVar2) {
    return 1;
  }
  uVar3 = 0;
  if (uVar1 != 0) {
    uVar3 = *u->_mp_d;
    uVar1 = (uint)(v < uVar3);
  }
  return uVar1 - (uVar3 < v);
}



/* WARNING: Unknown calling convention */

int mpz_cmpabs(__mpz_struct *u,__mpz_struct *v)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  
  iVar1 = v->_mp_size;
  iVar2 = u->_mp_size;
  iVar3 = -iVar1;
  if (0 < iVar1) {
    iVar3 = iVar1;
  }
  iVar1 = -iVar2;
  if (0 < iVar2) {
    iVar1 = iVar2;
  }
  lVar5 = (long)iVar3;
  lVar4 = (long)iVar1;
  if (lVar5 != lVar4) {
    return ((lVar5 <= lVar4) - 1) + (uint)(lVar5 <= lVar4);
  }
  do {
    bVar6 = lVar4 == 0;
    lVar4 = lVar4 + -1;
    if (bVar6) {
      return 0;
    }
  } while (u->_mp_d[lVar4] == v->_mp_d[lVar4]);
  return (-(uint)(v->_mp_d[lVar4] < u->_mp_d[lVar4]) & 2) - 1;
}



/* WARNING: Unknown calling convention */

void mpz_abs(__mpz_struct *r,__mpz_struct *u)

{
  int iVar1;
  int iVar2;
  
  mpz_set(r,u);
  iVar1 = r->_mp_size;
  iVar2 = -iVar1;
  if (0 < iVar1) {
    iVar2 = iVar1;
  }
  r->_mp_size = iVar2;
  return;
}



/* WARNING: Unknown calling convention */

void mpz_neg(__mpz_struct *r,__mpz_struct *u)

{
  mpz_set(r,u);
  r->_mp_size = -r->_mp_size;
  return;
}



/* WARNING: Unknown calling convention */

void mpz_swap(__mpz_struct *u,__mpz_struct *v)

{
  int iVar1;
  mp_limb_t *pmVar2;
  
  iVar1 = u->_mp_alloc;
  u->_mp_alloc = v->_mp_alloc;
  v->_mp_alloc = iVar1;
  pmVar2 = u->_mp_d;
  u->_mp_d = v->_mp_d;
  v->_mp_d = pmVar2;
  iVar1 = u->_mp_size;
  u->_mp_size = v->_mp_size;
  v->_mp_size = iVar1;
  return;
}



/* WARNING: Unknown calling convention */

void mpz_add_ui(__mpz_struct *r,__mpz_struct *a,ulong b)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  mp_ptr pmVar4;
  mp_size_t mVar5;
  int iVar6;
  long in_FS_OFFSET;
  mpz_t bb;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  bb[0]._mp_alloc = 0;
  bb[0]._mp_size = 0;
  bb[0]._mp_d = (mp_limb_t *)&dummy_limb_35;
  if (b == 0) {
    uVar3 = a->_mp_size;
    iVar2 = bb[0]._mp_alloc;
  }
  else {
    bb[0]._mp_alloc = 0;
    bb[0]._mp_size = 1;
    pmVar4 = mpz_realloc(bb,1);
    *pmVar4 = b;
    uVar3 = bb[0]._mp_size ^ a->_mp_size;
    iVar2 = bb[0]._mp_alloc;
  }
  bb[0]._mp_alloc = iVar2;
  if ((int)uVar3 < 0) {
    mVar5 = mpz_abs_sub(r,a,bb);
    iVar6 = (int)mVar5;
  }
  else {
    mVar5 = mpz_abs_add(r,a,bb);
    iVar6 = (int)mVar5;
  }
  if (a->_mp_size < 0) {
    iVar6 = -iVar6;
  }
  r->_mp_size = iVar6;
  if (iVar2 == 0) {
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010415f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*gmp_free_func)(bb[0]._mp_d,(long)iVar2 << 3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

void mpz_sub_ui(__mpz_struct *r,__mpz_struct *a,ulong b)

{
  long lVar1;
  mp_ptr pmVar2;
  mp_size_t mVar3;
  int iVar4;
  int iVar5;
  long in_FS_OFFSET;
  mpz_t bb;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  mpz_set(r,a);
  iVar4 = r->_mp_size;
  bb[0]._mp_alloc = 0;
  bb[0]._mp_size = 0;
  bb[0]._mp_d = (mp_limb_t *)&dummy_limb_35;
  r->_mp_size = -iVar4;
  if (b == 0) {
    if (0 < iVar4) goto LAB_00104292;
  }
  else {
    bb[0]._mp_alloc = 0;
    bb[0]._mp_size = 1;
    pmVar2 = mpz_realloc(bb,1);
    *pmVar2 = b;
    if ((r->_mp_size ^ bb[0]._mp_size) < 0) {
LAB_00104292:
      iVar5 = bb[0]._mp_alloc;
      mVar3 = mpz_abs_sub(r,r,bb);
      iVar4 = (int)mVar3;
      goto LAB_00104233;
    }
  }
  iVar5 = bb[0]._mp_alloc;
  mVar3 = mpz_abs_add(r,r,bb);
  iVar4 = (int)mVar3;
LAB_00104233:
  if (r->_mp_size < 0) {
    iVar4 = -iVar4;
  }
  r->_mp_size = iVar4;
  if (iVar5 != 0) {
    (*gmp_free_func)(bb[0]._mp_d,(long)iVar5 << 3);
  }
  mpz_set(r,r);
  r->_mp_size = -r->_mp_size;
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

int mpz_div_qr(__mpz_struct *q,__mpz_struct *r,__mpz_struct *n,__mpz_struct *d,
              mpz_div_round_mode mode)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  mp_limb_t *pmVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  mp_size_t rn;
  mp_size_t mVar12;
  mp_ptr pmVar13;
  int iVar14;
  ulong dn;
  ulong uVar15;
  long lVar16;
  ulong nn;
  long in_FS_OFFSET;
  mpz_t tq;
  mpz_t tr;
  
  uVar2 = n->_mp_size;
  uVar8 = d->_mp_size;
  lVar4 = *(long *)(in_FS_OFFSET + 0x28);
  if (uVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    gmp_die("mpz_div_qr: Divide by zero.");
  }
  if (uVar2 == 0) {
    if (q != (__mpz_struct *)0x0) {
      q->_mp_size = 0;
    }
    if (r != (__mpz_struct *)0x0) {
      r->_mp_size = 0;
    }
    iVar14 = 0;
    goto LAB_0010451d;
  }
  uVar9 = -uVar2;
  if (0 < (int)uVar2) {
    uVar9 = uVar2;
  }
  uVar6 = -uVar8;
  if (0 < (int)uVar8) {
    uVar6 = uVar8;
  }
  uVar8 = uVar2 ^ uVar8;
  nn = (ulong)uVar9;
  dn = (ulong)uVar6;
  if (nn < dn) {
    if ((mode == GMP_DIV_CEIL) && (-1 < (int)uVar8)) {
      if (r != (__mpz_struct *)0x0) {
        if ((int)uVar8 < 0) {
          mVar12 = mpz_abs_add(r,n,d);
          iVar14 = (int)mVar12;
        }
        else {
          mVar12 = mpz_abs_sub(r,n,d);
          iVar14 = (int)mVar12;
        }
        if (n->_mp_size < 0) {
          iVar14 = -iVar14;
        }
        r->_mp_size = iVar14;
      }
      if (q != (__mpz_struct *)0x0) {
        iVar14 = q->_mp_alloc;
        q->_mp_size = 1;
joined_r0x0010459f:
        if (iVar14 < 1) {
          pmVar13 = mpz_realloc(q,1);
        }
        else {
          pmVar13 = q->_mp_d;
        }
        *pmVar13 = 1;
      }
    }
    else if ((mode == GMP_DIV_FLOOR) && ((int)uVar8 < 0)) {
      if (r != (__mpz_struct *)0x0) {
        if ((int)uVar8 < 0) {
          mVar12 = mpz_abs_sub(r,n,d);
          iVar14 = (int)mVar12;
        }
        else {
          mVar12 = mpz_abs_add(r,n,d);
          iVar14 = (int)mVar12;
        }
        if (n->_mp_size < 0) {
          iVar14 = -iVar14;
        }
        r->_mp_size = iVar14;
      }
      if (q != (__mpz_struct *)0x0) {
        iVar14 = q->_mp_alloc;
        q->_mp_size = -1;
        goto joined_r0x0010459f;
      }
    }
    else {
      if (r != (__mpz_struct *)0x0) {
        mpz_set(r,n);
      }
      if (q != (__mpz_struct *)0x0) {
        q->_mp_size = 0;
      }
    }
    iVar14 = 1;
    goto LAB_0010451d;
  }
  tr[0]._mp_d = (mp_limb_t *)&dummy_limb_35;
  tr[0]._mp_alloc = 0;
  tr[0]._mp_size = 0;
  mpz_set(tr,n);
  pmVar5 = tr[0]._mp_d;
  if (q == (__mpz_struct *)0x0) {
    mpn_div_qr((mp_ptr)0x0,tr[0]._mp_d,nn,d->_mp_d,dn);
  }
  else {
    lVar16 = (nn - dn) + 1;
    uVar15 = (lVar16 * 0x40 - 1U >> 6) + 1;
    tq[0]._0_8_ = uVar15 & 0xffffffff;
    pmVar13 = (mp_ptr)(*gmp_allocate_func)(uVar15 * 8);
    tq[0]._mp_d = pmVar13;
    mpn_div_qr(pmVar13,pmVar5,nn,d->_mp_d,dn);
    if (pmVar13 != (mp_ptr)0x0) {
      iVar14 = (int)lVar16 - (uint)(pmVar13[nn - dn] == 0);
      if ((int)uVar8 < 0) {
        iVar14 = -iVar14;
      }
      tq[0]._mp_size = iVar14;
    }
  }
  do {
    if (pmVar5[dn - 1] != 0) {
      iVar14 = 1;
      bVar7 = true;
      goto LAB_0010448d;
    }
    dn = dn - 1;
  } while (dn != 0);
  iVar14 = 0;
  bVar7 = false;
LAB_0010448d:
  uVar9 = -(uint)dn;
  if (-1 < (int)uVar2) {
    uVar9 = (uint)dn;
  }
  tr[0]._mp_size = uVar9;
  iVar10 = tr[0]._mp_alloc;
  if ((mode == GMP_DIV_FLOOR) && ((int)uVar8 < 0)) {
    if (dn == 0) {
LAB_0010463b:
      if (q != (__mpz_struct *)0x0) goto LAB_00104640;
LAB_0010467e:
      iVar10 = tr[0]._mp_alloc;
      if (r != (__mpz_struct *)0x0) {
        iVar3 = tr[0]._mp_alloc;
        iVar11 = tr[0]._mp_size;
        goto LAB_00104693;
      }
    }
    else {
      if (q != (__mpz_struct *)0x0) {
        mpz_sub_ui(tq,tq,1);
        if (r != (__mpz_struct *)0x0) goto LAB_001044e0;
        goto LAB_00104640;
      }
      if (r != (__mpz_struct *)0x0) {
LAB_001044e0:
        uVar2 = d->_mp_size;
        goto joined_r0x0010471e;
      }
    }
  }
  else {
    if (((mode == GMP_DIV_CEIL & (byte)~(byte)((int)uVar8 >> 0x1f) >> 7) == 0) || (!bVar7))
    goto LAB_0010463b;
    if (q == (__mpz_struct *)0x0) {
      if (r == (__mpz_struct *)0x0) goto LAB_001046b5;
    }
    else {
      mpz_add_ui(tq,tq,1);
      if (r == (__mpz_struct *)0x0) goto LAB_00104640;
    }
    uVar2 = d->_mp_size;
joined_r0x0010471e:
    if ((int)(uVar9 ^ uVar2) < 0) {
      mVar12 = mpz_abs_add(tr,tr,d);
      iVar11 = (int)mVar12;
    }
    else {
      mVar12 = mpz_abs_sub(tr,tr,d);
      iVar11 = (int)mVar12;
    }
    if ((long)tr[0]._0_8_ < 0) {
      iVar11 = -iVar11;
    }
    tr[0]._mp_size = iVar11;
    iVar3 = tr[0]._mp_alloc;
    if (q != (__mpz_struct *)0x0) {
LAB_00104640:
      uVar1._0_4_ = q->_mp_alloc;
      uVar1._4_4_ = q->_mp_size;
      pmVar5 = q->_mp_d;
      q->_mp_alloc = tq[0]._mp_alloc;
      q->_mp_size = tq[0]._mp_size;
      q->_mp_d = tq[0]._mp_d;
      tq[0]._0_8_ = uVar1;
      tq[0]._mp_d = pmVar5;
      if ((int)uVar1 != 0) {
        (*gmp_free_func)(pmVar5,(long)(int)uVar1 * 8);
      }
      goto LAB_0010467e;
    }
LAB_00104693:
    pmVar5 = r->_mp_d;
    iVar10 = r->_mp_alloc;
    r->_mp_alloc = (int)CONCAT44(iVar11,iVar3);
    r->_mp_size = (int)(CONCAT44(iVar11,iVar3) >> 0x20);
    r->_mp_d = tr[0]._mp_d;
    tr[0]._mp_d = pmVar5;
  }
LAB_001046b5:
  if (iVar10 != 0) {
    (*gmp_free_func)(tr[0]._mp_d,(long)iVar10 * 8);
  }
LAB_0010451d:
  if (lVar4 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar14;
}



/* WARNING: Unknown calling convention */

ulong mpz_div_qr_ui(__mpz_struct *q,__mpz_struct *r,__mpz_struct *n,ulong d,mpz_div_round_mode mode)

{
  int iVar1;
  long lVar2;
  mp_limb_t *pmVar3;
  mp_ptr pmVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  mpz_t rr;
  mpz_t dd;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  rr[0]._mp_alloc = 0;
  rr[0]._mp_size = 0;
  rr[0]._mp_d = (mp_limb_t *)&dummy_limb_35;
  dd[0]._mp_alloc = 0;
  dd[0]._mp_size = 0;
  dd[0]._mp_d = (mp_limb_t *)&dummy_limb_35;
  if (d == 0) {
    mpz_div_qr(q,rr,n,dd,mode);
  }
  else {
    dd[0]._mp_alloc = 0;
    dd[0]._mp_size = 1;
    pmVar4 = mpz_realloc(dd,1);
    *pmVar4 = d;
    iVar1 = dd[0]._mp_alloc;
    mpz_div_qr(q,rr,n,dd,mode);
    if (iVar1 != 0) {
      (*gmp_free_func)(dd[0]._mp_d,(long)iVar1 << 3);
    }
  }
  uVar5 = 0;
  if (rr[0]._mp_size != 0) {
    uVar5 = *rr[0]._mp_d;
  }
  iVar1 = rr[0]._mp_alloc;
  if (r != (__mpz_struct *)0x0) {
    pmVar3 = r->_mp_d;
    iVar1 = r->_mp_alloc;
    r->_mp_alloc = rr[0]._mp_alloc;
    r->_mp_size = rr[0]._mp_size;
    r->_mp_d = rr[0]._mp_d;
    rr[0]._mp_d = pmVar3;
  }
  if (iVar1 != 0) {
    (*gmp_free_func)(rr[0]._mp_d,(long)iVar1 << 3);
  }
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

void mpz_ui_sub(__mpz_struct *r,ulong a,__mpz_struct *b)

{
  long lVar1;
  mp_ptr pmVar2;
  mp_size_t mVar3;
  int iVar4;
  int iVar5;
  long in_FS_OFFSET;
  mpz_t bb;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  mpz_set(r,b);
  iVar4 = r->_mp_size;
  bb[0]._mp_alloc = 0;
  bb[0]._mp_size = 0;
  bb[0]._mp_d = (mp_limb_t *)&dummy_limb_35;
  r->_mp_size = -iVar4;
  if (a == 0) {
    if (0 < iVar4) goto LAB_001049c2;
  }
  else {
    bb[0]._mp_alloc = 0;
    bb[0]._mp_size = 1;
    pmVar2 = mpz_realloc(bb,1);
    *pmVar2 = a;
    if ((r->_mp_size ^ bb[0]._mp_size) < 0) {
LAB_001049c2:
      iVar5 = bb[0]._mp_alloc;
      mVar3 = mpz_abs_sub(r,r,bb);
      iVar4 = (int)mVar3;
      goto LAB_00104972;
    }
  }
  iVar5 = bb[0]._mp_alloc;
  mVar3 = mpz_abs_add(r,r,bb);
  iVar4 = (int)mVar3;
LAB_00104972:
  if (r->_mp_size < 0) {
    iVar4 = -iVar4;
  }
  r->_mp_size = iVar4;
  if (iVar5 == 0) {
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001049a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*gmp_free_func)(bb[0]._mp_d,(long)iVar5 << 3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

void mpz_add(__mpz_struct *r,__mpz_struct *a,__mpz_struct *b)

{
  mp_size_t mVar1;
  int iVar2;
  
  if ((a->_mp_size ^ b->_mp_size) < 0) {
    mVar1 = mpz_abs_sub(r,a,b);
    iVar2 = (int)mVar1;
  }
  else {
    mVar1 = mpz_abs_add(r,a,b);
    iVar2 = (int)mVar1;
  }
  if (a->_mp_size < 0) {
    iVar2 = -iVar2;
  }
  r->_mp_size = iVar2;
  return;
}



/* WARNING: Unknown calling convention */

void mpz_sub(__mpz_struct *r,__mpz_struct *a,__mpz_struct *b)

{
  mp_size_t mVar1;
  int iVar2;
  
  if ((a->_mp_size ^ b->_mp_size) < 0) {
    mVar1 = mpz_abs_add(r,a,b);
    iVar2 = (int)mVar1;
  }
  else {
    mVar1 = mpz_abs_sub(r,a,b);
    iVar2 = (int)mVar1;
  }
  if (a->_mp_size < 0) {
    iVar2 = -iVar2;
  }
  r->_mp_size = iVar2;
  return;
}



/* WARNING: Unknown calling convention */

void mpz_mul(__mpz_struct *r,__mpz_struct *u,__mpz_struct *v)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  mp_limb_t *pmVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  mp_ptr rp;
  ulong vn;
  ulong un;
  long lVar9;
  
  uVar2 = u->_mp_size;
  uVar3 = v->_mp_size;
  if ((uVar2 == 0) || (uVar3 == 0)) {
    r->_mp_size = 0;
  }
  else {
    uVar6 = -uVar2;
    if (0 < (int)uVar2) {
      uVar6 = uVar2;
    }
    uVar7 = -uVar3;
    if (0 < (int)uVar3) {
      uVar7 = uVar3;
    }
    vn = (ulong)uVar6;
    un = (ulong)uVar7;
    lVar1 = vn + un;
    lVar9 = (lVar1 * 0x40 - 1U >> 6) + 1;
    rp = (mp_ptr)(*gmp_allocate_func)(lVar9 * 8);
    if (vn < un) {
      mpn_mul(rp,v->_mp_d,un,u->_mp_d,vn);
    }
    else {
      mpn_mul(rp,u->_mp_d,vn,v->_mp_d,un);
    }
    iVar8 = (int)lVar1 - (uint)(rp[lVar1 + -1] == 0);
    iVar4 = r->_mp_alloc;
    r->_mp_alloc = (int)lVar9;
    if ((int)(uVar2 ^ uVar3) < 0) {
      iVar8 = -iVar8;
    }
    pmVar5 = r->_mp_d;
    r->_mp_d = rp;
    r->_mp_size = iVar8;
    if (iVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00104b5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*gmp_free_func)(pmVar5,(long)iVar4 << 3);
      return;
    }
  }
  return;
}



/* WARNING: Unknown calling convention */

void mpz_mul_ui(__mpz_struct *r,__mpz_struct *u,ulong v)

{
  long lVar1;
  int iVar2;
  mp_ptr pmVar3;
  long in_FS_OFFSET;
  mpz_t vv;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  vv[0]._mp_alloc = 0;
  vv[0]._mp_size = 0;
  vv[0]._mp_d = (mp_limb_t *)&dummy_limb_35;
  if (v == 0) {
    mpz_mul(r,u,vv);
  }
  else {
    vv[0]._mp_alloc = 0;
    vv[0]._mp_size = 1;
    pmVar3 = mpz_realloc(vv,1);
    *pmVar3 = v;
    iVar2 = vv[0]._mp_alloc;
    mpz_mul(r,u,vv);
    if (iVar2 != 0) {
      if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00104c59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*gmp_free_func)(vv[0]._mp_d,(long)iVar2 << 3);
        return;
      }
      goto LAB_00104c5f;
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00104c5f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

void gmp_lucas_step_k_2k(__mpz_struct *V,__mpz_struct *Qk,__mpz_struct *n)

{
  long lVar1;
  mp_ptr pmVar2;
  mp_size_t mVar3;
  int iVar4;
  long in_FS_OFFSET;
  mpz_t t;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  mpz_div_qr((__mpz_struct *)0x0,Qk,Qk,n,(uint)n->_mp_size >> 0x1f);
  mpz_mul(V,V,V);
  t[0]._mp_d = (mp_limb_t *)&dummy_limb_35;
  t[0]._mp_alloc = (int)_LC35;
  t[0]._mp_size = _LC35._4_4_;
  pmVar2 = mpz_realloc(t,1);
  *pmVar2 = 2;
  mpz_mul(t,Qk,t);
  if ((V->_mp_size ^ t[0]._mp_size) < 0) {
    mVar3 = mpz_abs_add(V,V,t);
    iVar4 = (int)mVar3;
  }
  else {
    mVar3 = mpz_abs_sub(V,V,t);
    iVar4 = (int)mVar3;
  }
  if (V->_mp_size < 0) {
    iVar4 = -iVar4;
  }
  V->_mp_size = iVar4;
  if (t[0]._mp_alloc != 0) {
    (*gmp_free_func)(t[0]._mp_d,(long)t[0]._mp_alloc << 3);
  }
  mpz_div_qr((__mpz_struct *)0x0,V,V,n,GMP_DIV_TRUNC);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    mpz_mul(Qk,Qk,Qk);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

void mpz_mul_si(__mpz_struct *r,__mpz_struct *u,long v)

{
  long lVar1;
  int iVar2;
  mp_ptr pmVar3;
  long in_FS_OFFSET;
  mpz_t vv;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (v < 0) {
    vv[0]._mp_d = (mp_limb_t *)&dummy_limb_35;
    vv[0]._0_8_ = _LC35;
    pmVar3 = mpz_realloc(vv,1);
    *pmVar3 = -v;
    mpz_mul(r,u,vv);
    if (vv[0]._mp_alloc != 0) {
      (*gmp_free_func)(vv[0]._mp_d,(long)vv[0]._mp_alloc << 3);
    }
    mpz_set(r,r);
    r->_mp_size = -r->_mp_size;
  }
  else {
    vv[0]._mp_alloc = 0;
    vv[0]._mp_size = 0;
    vv[0]._mp_d = (mp_limb_t *)&dummy_limb_35;
    if (v == 0) {
      mpz_mul(r,u,vv);
    }
    else {
      vv[0]._mp_alloc = 0;
      vv[0]._mp_size = 1;
      pmVar3 = mpz_realloc(vv,1);
      *pmVar3 = v;
      iVar2 = vv[0]._mp_alloc;
      mpz_mul(r,u,vv);
      if (iVar2 != 0) {
        if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00104e20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*gmp_free_func)(vv[0]._mp_d,(long)iVar2 << 3);
          return;
        }
        goto LAB_00104ebd;
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00104ebd:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

void mpz_mul_2exp(__mpz_struct *r,__mpz_struct *u,mp_bitcnt_t bits)

{
  mp_srcptr up;
  int iVar1;
  int iVar2;
  mp_ptr __s;
  mp_limb_t mVar3;
  long n;
  long size;
  ulong uVar4;
  
  iVar2 = u->_mp_size;
  if (iVar2 != 0) {
    iVar1 = -iVar2;
    if (0 < iVar2) {
      iVar1 = iVar2;
    }
    uVar4 = bits >> 6;
    n = (long)iVar1;
    size = n + uVar4 + (ulong)((bits & 0x3f) != 0);
    if (r->_mp_alloc < size) {
      __s = mpz_realloc(r,size);
    }
    else {
      __s = r->_mp_d;
    }
    up = u->_mp_d;
    if ((bits & 0x3f) == 0) {
      do {
        n = n + -1;
        (__s + uVar4)[n] = up[n];
      } while (n != 0);
    }
    else {
      mVar3 = mpn_lshift(__s + uVar4,up,n,(uint)bits & 0x3f);
      __s[size + -1] = mVar3;
      size = size - (ulong)(mVar3 == 0);
    }
    if (uVar4 != 0) {
      memset(__s,0,uVar4 * 8);
    }
    iVar2 = -(int)size;
    if (-1 < u->_mp_size) {
      iVar2 = (int)size;
    }
  }
  r->_mp_size = iVar2;
  return;
}



/* WARNING: Unknown calling convention */

void mpz_addmul_ui(__mpz_struct *r,__mpz_struct *u,ulong v)

{
  long lVar1;
  mp_ptr pmVar2;
  mp_size_t mVar3;
  int iVar4;
  long in_FS_OFFSET;
  mpz_t t;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  t[0]._mp_alloc = 0;
  t[0]._mp_size = 0;
  t[0]._mp_d = (mp_limb_t *)&dummy_limb_35;
  if (v != 0) {
    t[0]._mp_alloc = 0;
    t[0]._mp_size = 1;
    pmVar2 = mpz_realloc(t,1);
    *pmVar2 = v;
  }
  mpz_mul(t,u,t);
  if ((r->_mp_size ^ t[0]._mp_size) < 0) {
    mVar3 = mpz_abs_sub(r,r,t);
    iVar4 = (int)mVar3;
  }
  else {
    mVar3 = mpz_abs_add(r,r,t);
    iVar4 = (int)mVar3;
  }
  if (r->_mp_size < 0) {
    iVar4 = -iVar4;
  }
  r->_mp_size = iVar4;
  if (t[0]._mp_alloc == 0) {
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00105089. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*gmp_free_func)(t[0]._mp_d,(long)t[0]._mp_alloc << 3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

void mpz_submul_ui(__mpz_struct *r,__mpz_struct *u,ulong v)

{
  long lVar1;
  mp_ptr pmVar2;
  mp_size_t mVar3;
  int iVar4;
  long in_FS_OFFSET;
  mpz_t t;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  t[0]._mp_alloc = 0;
  t[0]._mp_size = 0;
  t[0]._mp_d = (mp_limb_t *)&dummy_limb_35;
  if (v != 0) {
    t[0]._mp_alloc = 0;
    t[0]._mp_size = 1;
    pmVar2 = mpz_realloc(t,1);
    *pmVar2 = v;
  }
  mpz_mul(t,u,t);
  if ((r->_mp_size ^ t[0]._mp_size) < 0) {
    mVar3 = mpz_abs_add(r,r,t);
    iVar4 = (int)mVar3;
  }
  else {
    mVar3 = mpz_abs_sub(r,r,t);
    iVar4 = (int)mVar3;
  }
  if (r->_mp_size < 0) {
    iVar4 = -iVar4;
  }
  r->_mp_size = iVar4;
  if (t[0]._mp_alloc == 0) {
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00105179. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*gmp_free_func)(t[0]._mp_d,(long)t[0]._mp_alloc << 3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

void mpz_addmul(__mpz_struct *r,__mpz_struct *u,__mpz_struct *v)

{
  long lVar1;
  mp_size_t mVar2;
  int iVar3;
  long in_FS_OFFSET;
  mpz_t t;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  t[0]._mp_alloc = 0;
  t[0]._mp_size = 0;
  t[0]._mp_d = (mp_limb_t *)&dummy_limb_35;
  mpz_mul(t,u,v);
  if ((r->_mp_size ^ t[0]._mp_size) < 0) {
    mVar2 = mpz_abs_sub(r,r,t);
    iVar3 = (int)mVar2;
  }
  else {
    mVar2 = mpz_abs_add(r,r,t);
    iVar3 = (int)mVar2;
  }
  if (r->_mp_size < 0) {
    iVar3 = -iVar3;
  }
  r->_mp_size = iVar3;
  if (t[0]._mp_alloc == 0) {
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00105238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*gmp_free_func)(t[0]._mp_d,(long)t[0]._mp_alloc << 3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

void mpz_submul(__mpz_struct *r,__mpz_struct *u,__mpz_struct *v)

{
  long lVar1;
  mp_size_t mVar2;
  int iVar3;
  long in_FS_OFFSET;
  mpz_t t;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  t[0]._mp_alloc = 0;
  t[0]._mp_size = 0;
  t[0]._mp_d = (mp_limb_t *)&dummy_limb_35;
  mpz_mul(t,u,v);
  if ((r->_mp_size ^ t[0]._mp_size) < 0) {
    mVar2 = mpz_abs_add(r,r,t);
    iVar3 = (int)mVar2;
  }
  else {
    mVar2 = mpz_abs_sub(r,r,t);
    iVar3 = (int)mVar2;
  }
  if (r->_mp_size < 0) {
    iVar3 = -iVar3;
  }
  r->_mp_size = iVar3;
  if (t[0]._mp_alloc == 0) {
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001052f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*gmp_free_func)(t[0]._mp_d,(long)t[0]._mp_alloc << 3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

void mpz_cdiv_qr(__mpz_struct *q,__mpz_struct *r,__mpz_struct *n,__mpz_struct *d)

{
  mpz_div_qr(q,r,n,d,GMP_DIV_CEIL);
  return;
}



/* WARNING: Unknown calling convention */

void mpz_fdiv_qr(__mpz_struct *q,__mpz_struct *r,__mpz_struct *n,__mpz_struct *d)

{
  mpz_div_qr(q,r,n,d,GMP_DIV_FLOOR);
  return;
}



/* WARNING: Unknown calling convention */

void mpz_tdiv_qr(__mpz_struct *q,__mpz_struct *r,__mpz_struct *n,__mpz_struct *d)

{
  mpz_div_qr(q,r,n,d,GMP_DIV_TRUNC);
  return;
}



/* WARNING: Unknown calling convention */

void mpz_cdiv_q(__mpz_struct *q,__mpz_struct *n,__mpz_struct *d)

{
  mpz_div_qr(q,(__mpz_struct *)0x0,n,d,GMP_DIV_CEIL);
  return;
}



/* WARNING: Unknown calling convention */

void mpz_fdiv_q(__mpz_struct *q,__mpz_struct *n,__mpz_struct *d)

{
  mpz_div_qr(q,(__mpz_struct *)0x0,n,d,GMP_DIV_FLOOR);
  return;
}



/* WARNING: Unknown calling convention */

void mpz_tdiv_q(__mpz_struct *q,__mpz_struct *n,__mpz_struct *d)

{
  mpz_div_qr(q,(__mpz_struct *)0x0,n,d,GMP_DIV_TRUNC);
  return;
}



/* WARNING: Unknown calling convention */

void mpz_cdiv_r(__mpz_struct *r,__mpz_struct *n,__mpz_struct *d)

{
  mpz_div_qr((__mpz_struct *)0x0,r,n,d,GMP_DIV_CEIL);
  return;
}



/* WARNING: Unknown calling convention */

void mpz_fdiv_r(__mpz_struct *r,__mpz_struct *n,__mpz_struct *d)

{
  mpz_div_qr((__mpz_struct *)0x0,r,n,d,GMP_DIV_FLOOR);
  return;
}



/* WARNING: Unknown calling convention */

void mpz_tdiv_r(__mpz_struct *r,__mpz_struct *n,__mpz_struct *d)

{
  mpz_div_qr((__mpz_struct *)0x0,r,n,d,GMP_DIV_TRUNC);
  return;
}



/* WARNING: Unknown calling convention */

void mpz_mod(__mpz_struct *r,__mpz_struct *n,__mpz_struct *d)

{
  mpz_div_qr((__mpz_struct *)0x0,r,n,d,(uint)d->_mp_size >> 0x1f);
  return;
}



/* WARNING: Unknown calling convention */

void mpz_cdiv_q_2exp(__mpz_struct *r,__mpz_struct *u,mp_bitcnt_t cnt)

{
  mpz_div_q_2exp(r,u,cnt,GMP_DIV_CEIL);
  return;
}



/* WARNING: Unknown calling convention */

void mpz_fdiv_q_2exp(__mpz_struct *r,__mpz_struct *u,mp_bitcnt_t cnt)

{
  mpz_div_q_2exp(r,u,cnt,GMP_DIV_FLOOR);
  return;
}



/* WARNING: Unknown calling convention */

void mpz_tdiv_q_2exp(__mpz_struct *r,__mpz_struct *u,mp_bitcnt_t cnt)

{
  mpz_div_q_2exp(r,u,cnt,GMP_DIV_TRUNC);
  return;
}



/* WARNING: Unknown calling convention */

void mpz_cdiv_r_2exp(__mpz_struct *r,__mpz_struct *u,mp_bitcnt_t cnt)

{
  mpz_div_r_2exp(r,u,cnt,GMP_DIV_CEIL);
  return;
}



/* WARNING: Unknown calling convention */

void mpz_fdiv_r_2exp(__mpz_struct *r,__mpz_struct *u,mp_bitcnt_t cnt)

{
  mpz_div_r_2exp(r,u,cnt,GMP_DIV_FLOOR);
  return;
}



/* WARNING: Unknown calling convention */

void mpz_tdiv_r_2exp(__mpz_struct *r,__mpz_struct *u,mp_bitcnt_t cnt)

{
  mpz_div_r_2exp(r,u,cnt,GMP_DIV_TRUNC);
  return;
}



/* WARNING: Unknown calling convention */

void mpz_divexact(__mpz_struct *q,__mpz_struct *n,__mpz_struct *d)

{
  int iVar1;
  __mpz_struct *d_00;
  __mpz_struct *n_00;
  
  n_00 = (__mpz_struct *)0x0;
  iVar1 = mpz_div_qr(q,(__mpz_struct *)0x0,n,d,GMP_DIV_TRUNC);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  mpz_divexact(q,n_00,d_00);
}



/* WARNING: Unknown calling convention */

int mpz_divisible_p(__mpz_struct *n,__mpz_struct *d)

{
  int iVar1;
  
  iVar1 = mpz_div_qr((__mpz_struct *)0x0,(__mpz_struct *)0x0,n,d,GMP_DIV_TRUNC);
  return (int)(iVar1 == 0);
}



/* WARNING: Unknown calling convention */

int mpz_congruent_p(__mpz_struct *a,__mpz_struct *b,__mpz_struct *m)

{
  long lVar1;
  mp_size_t mVar2;
  int iVar3;
  uint uVar4;
  long in_FS_OFFSET;
  mpz_t t;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (0 < m->_mp_size == SUB41((uint)m->_mp_size >> 0x1f,0)) {
    iVar3 = mpz_cmp(a,b);
    uVar4 = (uint)(iVar3 == 0);
  }
  else {
    t[0]._mp_alloc = 0;
    t[0]._mp_size = 0;
    t[0]._mp_d = (mp_limb_t *)&dummy_limb_35;
    if ((a->_mp_size ^ b->_mp_size) < 0) {
      mVar2 = mpz_abs_add(t,a,b);
      iVar3 = (int)mVar2;
    }
    else {
      mVar2 = mpz_abs_sub(t,a,b);
      iVar3 = (int)mVar2;
    }
    if (a->_mp_size < 0) {
      iVar3 = -iVar3;
    }
    t[0]._mp_size = iVar3;
    iVar3 = mpz_div_qr((__mpz_struct *)0x0,(__mpz_struct *)0x0,t,m,GMP_DIV_TRUNC);
    uVar4 = (uint)(iVar3 == 0);
    if (t[0]._mp_alloc != 0) {
      (*gmp_free_func)(t[0]._mp_d,(long)t[0]._mp_alloc << 3);
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

ulong mpz_cdiv_qr_ui(__mpz_struct *q,__mpz_struct *r,__mpz_struct *n,ulong d)

{
  ulong uVar1;
  
  uVar1 = mpz_div_qr_ui(q,r,n,d,GMP_DIV_CEIL);
  return uVar1;
}



/* WARNING: Unknown calling convention */

ulong mpz_fdiv_qr_ui(__mpz_struct *q,__mpz_struct *r,__mpz_struct *n,ulong d)

{
  ulong uVar1;
  
  uVar1 = mpz_div_qr_ui(q,r,n,d,GMP_DIV_FLOOR);
  return uVar1;
}



/* WARNING: Unknown calling convention */

ulong mpz_tdiv_qr_ui(__mpz_struct *q,__mpz_struct *r,__mpz_struct *n,ulong d)

{
  ulong uVar1;
  
  uVar1 = mpz_div_qr_ui(q,r,n,d,GMP_DIV_TRUNC);
  return uVar1;
}



/* WARNING: Unknown calling convention */

ulong mpz_cdiv_q_ui(__mpz_struct *q,__mpz_struct *n,ulong d)

{
  ulong uVar1;
  
  uVar1 = mpz_div_qr_ui(q,(__mpz_struct *)0x0,n,d,GMP_DIV_CEIL);
  return uVar1;
}



/* WARNING: Unknown calling convention */

ulong mpz_fdiv_q_ui(__mpz_struct *q,__mpz_struct *n,ulong d)

{
  ulong uVar1;
  
  uVar1 = mpz_div_qr_ui(q,(__mpz_struct *)0x0,n,d,GMP_DIV_FLOOR);
  return uVar1;
}



/* WARNING: Unknown calling convention */

ulong mpz_tdiv_q_ui(__mpz_struct *q,__mpz_struct *n,ulong d)

{
  ulong uVar1;
  
  uVar1 = mpz_div_qr_ui(q,(__mpz_struct *)0x0,n,d,GMP_DIV_TRUNC);
  return uVar1;
}



/* WARNING: Unknown calling convention */

ulong mpz_cdiv_r_ui(__mpz_struct *r,__mpz_struct *n,ulong d)

{
  ulong uVar1;
  
  uVar1 = mpz_div_qr_ui((__mpz_struct *)0x0,r,n,d,GMP_DIV_CEIL);
  return uVar1;
}



/* WARNING: Unknown calling convention */

ulong mpz_fdiv_r_ui(__mpz_struct *r,__mpz_struct *n,ulong d)

{
  ulong uVar1;
  
  uVar1 = mpz_div_qr_ui((__mpz_struct *)0x0,r,n,d,GMP_DIV_FLOOR);
  return uVar1;
}



/* WARNING: Unknown calling convention */

ulong mpz_tdiv_r_ui(__mpz_struct *r,__mpz_struct *n,ulong d)

{
  ulong uVar1;
  
  uVar1 = mpz_div_qr_ui((__mpz_struct *)0x0,r,n,d,GMP_DIV_TRUNC);
  return uVar1;
}



/* WARNING: Unknown calling convention */

ulong mpz_cdiv_ui(__mpz_struct *n,ulong d)

{
  ulong uVar1;
  
  uVar1 = mpz_div_qr_ui((__mpz_struct *)0x0,(__mpz_struct *)0x0,n,d,GMP_DIV_CEIL);
  return uVar1;
}



/* WARNING: Unknown calling convention */

ulong mpz_fdiv_ui(__mpz_struct *n,ulong d)

{
  ulong uVar1;
  
  uVar1 = mpz_div_qr_ui((__mpz_struct *)0x0,(__mpz_struct *)0x0,n,d,GMP_DIV_FLOOR);
  return uVar1;
}



/* WARNING: Unknown calling convention */

ulong mpz_tdiv_ui(__mpz_struct *n,ulong d)

{
  ulong uVar1;
  
  uVar1 = mpz_div_qr_ui((__mpz_struct *)0x0,(__mpz_struct *)0x0,n,d,GMP_DIV_TRUNC);
  return uVar1;
}



void mpz_mod_ui(__mpz_struct *param_1,__mpz_struct *param_2,ulong param_3)

{
  mpz_div_qr_ui((__mpz_struct *)0x0,param_1,param_2,param_3,GMP_DIV_FLOOR);
  return;
}



/* WARNING: Unknown calling convention */

void mpz_divexact_ui(__mpz_struct *q,__mpz_struct *n,ulong d)

{
  ulong uVar1;
  
  uVar1 = mpz_div_qr_ui(q,(__mpz_struct *)0x0,n,d,GMP_DIV_TRUNC);
  if (uVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("__cy == 0","lib/mini-gmp.c",0xa5f,"mpz_divexact_ui");
}



/* WARNING: Unknown calling convention */

int mpz_divisible_ui_p(__mpz_struct *n,ulong d)

{
  ulong uVar1;
  
  uVar1 = mpz_div_qr_ui((__mpz_struct *)0x0,(__mpz_struct *)0x0,n,d,GMP_DIV_TRUNC);
  return (int)(uVar1 == 0);
}



/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention */

mp_size_t mpn_gcd(mp_ptr rp,mp_ptr up,mp_size_t un,mp_ptr vp,mp_size_t vn)

{
  ulong uVar1;
  mp_limb_t mVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  uint cnt;
  int iVar6;
  int iVar7;
  ulong uVar8;
  long n;
  ulong *rp_00;
  mp_ptr rp_01;
  char cVar9;
  ulong uVar10;
  long bn;
  
  if (un < vn) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("un >= vn","lib/mini-gmp.c",0xa98,"mpn_gcd");
  }
  if (vn < 1) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("vn > 0","lib/mini-gmp.c",0xa99,"mpn_gcd");
  }
  if ((vp < up + un) && (up < vp + vn)) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("!GMP_MPN_OVERLAP_P (up, un, vp, vn)","lib/mini-gmp.c",0xa9a,"mpn_gcd");
  }
  if (vp[vn + -1] == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("vp[vn-1] > 0","lib/mini-gmp.c",0xa9b,"mpn_gcd");
  }
  uVar1 = *vp;
  if ((((uint)*up | (uint)uVar1) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("(up[0] | vp[0]) & 1","lib/mini-gmp.c",0xa9c,"mpn_gcd");
  }
  lVar4 = vn;
  if (vn < un) {
    mpn_div_qr((mp_ptr)0x0,up,un,vp,vn);
    uVar1 = *vp;
  }
  while (up[lVar4 + -1] == 0) {
    lVar4 = lVar4 + -1;
    if (lVar4 == 0) {
      do {
        rp[lVar4] = vp[lVar4];
        lVar4 = lVar4 + 1;
      } while (vn != lVar4);
      return lVar4;
    }
  }
  n = lVar4;
  bn = lVar4;
  rp_00 = up;
  lVar3 = vn;
  if ((uVar1 & 1) == 0) {
    uVar1 = *up;
    n = vn;
    bn = vn;
    rp_00 = vp;
    vp = up;
    vn = lVar4;
    lVar3 = lVar4;
  }
  do {
    if ((lVar3 < 2) && (bn < 2)) {
      uVar8 = *rp_00;
      uVar10 = uVar8 | uVar1;
      if (uVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("(u | v) > 0","lib/mini-gmp.c",0xa6f,__PRETTY_FUNCTION___20);
      }
      if (uVar8 != 0) {
        if (uVar1 == 0) {
          *rp = uVar8;
          return 1;
        }
        cVar9 = '\0';
        for (uVar10 = -uVar10 & uVar10; uVar10 < 0x100000000000000; uVar10 = uVar10 << 8) {
          cVar9 = cVar9 + '\b';
        }
        for (; -1 < (long)uVar10; uVar10 = uVar10 * 2) {
          cVar9 = cVar9 + '\x01';
        }
        bVar5 = 0x3f - cVar9;
        uVar8 = uVar8 >> (bVar5 & 0x3f);
        uVar1 = uVar1 >> (bVar5 & 0x3f);
        uVar10 = uVar8;
        if ((uVar8 & 1) == 0) goto LAB_001059dd;
        while (uVar8 = uVar1, uVar1 = uVar10, (uVar8 & 1) == 0) {
LAB_001059dd:
          uVar10 = uVar1;
          uVar1 = uVar8 >> 1;
        }
        while (uVar1 != uVar8) {
          while (uVar8 < uVar1) {
            uVar1 = uVar1 - uVar8;
            do {
              uVar1 = uVar1 >> 1;
            } while ((uVar1 & 1) == 0);
            if (uVar1 == uVar8) goto LAB_00105a0c;
          }
          uVar8 = uVar8 - uVar1;
          do {
            uVar8 = uVar8 >> 1;
          } while ((uVar8 & 1) == 0);
        }
LAB_00105a0c:
        uVar1 = uVar8 << (bVar5 & 0x3f);
      }
      *rp = uVar1;
      return 1;
    }
    if ((uVar1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("vp[0] & 1","lib/mini-gmp.c",0xaae,"mpn_gcd");
    }
    for (; uVar1 = *rp_00, uVar1 == 0; rp_00 = rp_00 + 1) {
      n = n + -1;
    }
    uVar1 = -uVar1 & uVar1;
    iVar6 = 0;
    iVar7 = 0;
    lVar4 = vn;
    if (uVar1 < 0x100000000000000) {
      do {
        uVar1 = uVar1 << 8;
        iVar6 = iVar6 + 8;
        iVar7 = iVar6;
      } while (uVar1 < 0x100000000000000);
      for (; -1 < (long)uVar1; uVar1 = uVar1 * 2) {
LAB_001058f0:
        iVar7 = iVar7 + 1;
      }
      cnt = 0x3f - iVar7;
      if (0 < (int)cnt) goto LAB_00105a60;
      bn = n;
      if (vn <= n) goto LAB_00105910;
LAB_00105a93:
      n = lVar4;
      rp_01 = vp;
      vp = rp_00;
    }
    else {
      cnt = 0x3f;
      if (-1 < (long)uVar1) goto LAB_001058f0;
LAB_00105a60:
      mVar2 = mpn_rshift(rp_00,rp_00,n,cnt);
      if (mVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("__cy == 0","lib/mini-gmp.c",0xab8,"mpn_gcd");
      }
      n = n - (ulong)(rp_00[n + -1] == 0);
      bn = n;
      if (n < vn) goto LAB_00105a93;
LAB_00105910:
      lVar3 = n;
      rp_01 = rp_00;
      bn = vn;
      if (n == vn) {
        do {
          lVar3 = lVar3 + -1;
          if (lVar3 < 0) {
            if (n < 1) {
              return n;
            }
            lVar4 = 0;
            do {
              rp[lVar4] = rp_00[lVar4];
              lVar4 = lVar4 + 1;
            } while (n != lVar4);
            return n;
          }
        } while (rp_00[lVar3] == vp[lVar3]);
        lVar4 = n;
        if (rp_00[lVar3] <= vp[lVar3]) goto LAB_00105a93;
      }
    }
    mVar2 = mpn_sub(rp_01,rp_01,n,vp,bn);
    if (mVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("__cy == 0","lib/mini-gmp.c",0xaca,"mpn_gcd");
    }
    if (0 < n) {
      do {
        if (rp_01[n + -1] != 0) break;
        n = n + -1;
      } while (n != 0);
    }
    uVar1 = *vp;
    rp_00 = rp_01;
    vn = bn;
    lVar3 = n;
  } while( true );
}



/* WARNING: Unknown calling convention */

void mpz_gcd(__mpz_struct *g,__mpz_struct *u,__mpz_struct *v)

{
  long lVar1;
  int iVar2;
  mp_limb_t *pmVar3;
  int iVar4;
  int iVar5;
  mp_bitcnt_t mVar6;
  mp_bitcnt_t bits;
  mp_size_t mVar7;
  __mpz_struct *x;
  int iVar8;
  mp_limb_t *vp;
  long in_FS_OFFSET;
  mpz_t tu;
  mpz_t tv;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  x = v;
  if ((u->_mp_size == 0) || (x = u, v->_mp_size == 0)) {
    mpz_set(g,x);
    iVar4 = g->_mp_size;
    iVar5 = -iVar4;
    if (0 < iVar4) {
      iVar5 = iVar4;
    }
    g->_mp_size = iVar5;
  }
  else {
    tu[0]._mp_alloc = 0;
    tu[0]._mp_size = 0;
    tu[0]._mp_d = (mp_limb_t *)&dummy_limb_35;
    tv[0]._mp_d = (mp_limb_t *)&dummy_limb_35;
    tv[0]._mp_alloc = 0;
    tv[0]._mp_size = 0;
    mpz_set(tu,u);
    iVar4 = -tu[0]._mp_size;
    if (0 < tu[0]._mp_size) {
      iVar4 = tu[0]._mp_size;
    }
    tu[0]._mp_size = iVar4;
    mVar6 = mpz_make_odd(tu);
    mpz_set(tv,v);
    iVar4 = -tv[0]._mp_size;
    if (0 < tv[0]._mp_size) {
      iVar4 = tv[0]._mp_size;
    }
    tv[0]._mp_size = iVar4;
    bits = mpz_make_odd(tv);
    iVar4 = tu[0]._mp_alloc;
    if (mVar6 <= bits) {
      bits = mVar6;
    }
    vp = tv[0]._mp_d;
    iVar8 = tv[0]._mp_alloc;
    iVar2 = tu[0]._mp_size;
    iVar5 = tv[0]._mp_size;
    if (tu[0]._mp_size < tv[0]._mp_size) {
      tu[0]._mp_alloc = tv[0]._mp_alloc;
      vp = tu[0]._mp_d;
      iVar8 = iVar4;
      iVar2 = tv[0]._mp_size;
      iVar5 = tu[0]._mp_size;
      tu[0]._mp_d = tv[0]._mp_d;
    }
    pmVar3 = tu[0]._mp_d;
    iVar4 = tu[0]._mp_alloc;
    mVar7 = mpn_gcd(tu[0]._mp_d,tu[0]._mp_d,(long)iVar2,vp,(long)iVar5);
    tu[0]._mp_size = (int)mVar7;
    mpz_mul_2exp(g,tu,bits);
    if (iVar4 != 0) {
      (*gmp_free_func)(pmVar3,(long)iVar4 << 3);
    }
    if (iVar8 != 0) {
      if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00105dca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*gmp_free_func)(vp,(long)iVar8 << 3);
        return;
      }
      goto LAB_00105e37;
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00105e37:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

ulong mpz_gcd_ui(__mpz_struct *g,__mpz_struct *u,ulong v)

{
  int iVar1;
  long lVar2;
  mp_limb_t *pmVar3;
  mp_ptr pmVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  mpz_t t;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  t[0]._mp_alloc = 0;
  t[0]._mp_size = 0;
  t[0]._mp_d = (mp_limb_t *)&dummy_limb_35;
  if (v == 0) {
    mpz_gcd(t,u,t);
  }
  else {
    t[0]._mp_alloc = 0;
    t[0]._mp_size = 1;
    pmVar4 = mpz_realloc(t,1);
    *pmVar4 = v;
    mpz_gcd(t,u,t);
    if (t[0]._mp_size != 0) {
      uVar5 = *t[0]._mp_d;
      goto LAB_00105e8a;
    }
  }
  uVar5 = 0;
LAB_00105e8a:
  iVar1 = t[0]._mp_alloc;
  if (g != (__mpz_struct *)0x0) {
    pmVar3 = g->_mp_d;
    iVar1 = g->_mp_alloc;
    g->_mp_d = t[0]._mp_d;
    g->_mp_alloc = (int)CONCAT44(t[0]._mp_size,t[0]._mp_alloc);
    g->_mp_size = (int)(CONCAT44(t[0]._mp_size,t[0]._mp_alloc) >> 0x20);
    t[0]._mp_d = pmVar3;
  }
  if (iVar1 != 0) {
    (*gmp_free_func)(t[0]._mp_d,(long)iVar1 << 3);
  }
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

void mpz_lcm(__mpz_struct *r,__mpz_struct *u,__mpz_struct *v)

{
  int iVar1;
  long lVar2;
  int iVar3;
  __mpz_struct *d;
  __mpz_struct *n;
  __mpz_struct *q;
  long in_FS_OFFSET;
  mpz_t g;
  
  q = g;
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = u->_mp_size;
  if ((u->_mp_size != 0) && (iVar3 = v->_mp_size, v->_mp_size != 0)) {
    g[0]._mp_alloc = 0;
    g[0]._mp_size = 0;
    g[0]._mp_d = (mp_limb_t *)&dummy_limb_35;
    mpz_gcd(g,u,v);
    n = (__mpz_struct *)0x0;
    iVar3 = mpz_div_qr(g,(__mpz_struct *)0x0,u,g,GMP_DIV_TRUNC);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      mpz_divexact(q,n,d);
    }
    mpz_mul(r,g,v);
    if (g[0]._mp_alloc != 0) {
      (*gmp_free_func)(g[0]._mp_d,(long)g[0]._mp_alloc << 3);
    }
    mpz_set(r,r);
    iVar1 = r->_mp_size;
    iVar3 = -iVar1;
    if (0 < iVar1) {
      iVar3 = iVar1;
    }
  }
  r->_mp_size = iVar3;
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Unknown calling convention */

void mpz_lcm_ui(__mpz_struct *r,__mpz_struct *u,ulong v)

{
  int iVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  mp_ptr pmVar5;
  long in_FS_OFFSET;
  mpz_t vv;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = 0;
  if ((v != 0) && (iVar3 = u->_mp_size, u->_mp_size != 0)) {
    uVar4 = mpz_gcd_ui((__mpz_struct *)0x0,u,v);
    vv[0]._mp_alloc = 0;
    vv[0]._mp_size = 0;
    vv[0]._mp_d = (mp_limb_t *)&dummy_limb_35;
    if (v < uVar4) {
      mpz_mul(r,u,vv);
    }
    else {
      vv[0]._mp_alloc = 0;
      vv[0]._mp_size = 1;
      pmVar5 = mpz_realloc(vv,1);
      iVar3 = vv[0]._mp_alloc;
      *pmVar5 = v / uVar4;
      mpz_mul(r,u,vv);
      if (iVar3 != 0) {
        (*gmp_free_func)(vv[0]._mp_d,(long)iVar3 << 3);
      }
    }
    mpz_set(r,r);
    iVar1 = r->_mp_size;
    iVar3 = -iVar1;
    if (0 < iVar1) {
      iVar3 = iVar1;
    }
  }
  r->_mp_size = iVar3;
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Unknown calling convention */

void mpz_pow_ui(__mpz_struct *r,__mpz_struct *b,ulong e)

{
  long lVar1;
  mp_limb_t *pmVar2;
  mp_ptr pmVar3;
  ulong uVar4;
  int iVar5;
  long in_FS_OFFSET;
  mpz_t tr;
  
  iVar5 = 0x40;
  uVar4 = 0x8000000000000000;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  tr[0]._mp_d = (mp_limb_t *)&dummy_limb_35;
  tr[0]._0_8_ = _LC35;
  pmVar3 = mpz_realloc(tr,1);
  *pmVar3 = 1;
  do {
    while( true ) {
      mpz_mul(tr,tr,tr);
      if ((uVar4 & e) == 0) break;
      uVar4 = uVar4 >> 1;
      mpz_mul(tr,tr,b);
      iVar5 = iVar5 + -1;
      if (iVar5 == 0) goto LAB_001061d3;
    }
    uVar4 = uVar4 >> 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
LAB_001061d3:
  iVar5 = r->_mp_alloc;
  pmVar2 = r->_mp_d;
  r->_mp_d = tr[0]._mp_d;
  r->_mp_alloc = tr[0]._mp_alloc;
  r->_mp_size = tr[0]._mp_size;
  if (iVar5 == 0) {
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00106214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*gmp_free_func)(pmVar2,(long)iVar5 * 8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pmVar2);
}



/* WARNING: Unknown calling convention */

void mpz_ui_pow_ui(__mpz_struct *r,ulong blimb,ulong e)

{
  long lVar1;
  int iVar2;
  mp_ptr pmVar3;
  long in_FS_OFFSET;
  mpz_t b;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  b[0]._mp_alloc = 0;
  b[0]._mp_size = 0;
  b[0]._mp_d = (mp_limb_t *)&dummy_limb_35;
  if (blimb == 0) {
    mpz_pow_ui(r,b,e);
  }
  else {
    b[0]._mp_alloc = 0;
    b[0]._mp_size = 1;
    pmVar3 = mpz_realloc(b,1);
    *pmVar3 = blimb;
    iVar2 = b[0]._mp_alloc;
    mpz_pow_ui(r,b,e);
    if (iVar2 != 0) {
      if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001062f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*gmp_free_func)(b[0]._mp_d,(long)iVar2 << 3);
        return;
      }
      goto LAB_001062ff;
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001062ff:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

void mpz_mfac_uiui(__mpz_struct *x,ulong n,ulong m)

{
  ulong uVar1;
  long lVar2;
  mp_ptr pmVar3;
  mp_limb_t mVar4;
  long in_FS_OFFSET;
  mpz_t vv;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  mVar4 = n + (n == 0);
  if (mVar4 == 0) {
    x->_mp_size = 0;
  }
  else {
    x->_mp_size = 1;
    if (x->_mp_alloc < 1) {
      pmVar3 = mpz_realloc(x,1);
    }
    else {
      pmVar3 = x->_mp_d;
    }
    *pmVar3 = mVar4;
  }
  uVar1 = m + 1;
  if ((1 < uVar1) && (uVar1 < n)) {
    do {
      vv[0]._mp_alloc = 0;
      vv[0]._mp_size = 0;
      vv[0]._mp_d = (mp_limb_t *)&dummy_limb_35;
      n = n - m;
      if (n == 0) {
        mpz_mul(x,x,vv);
        break;
      }
      vv[0]._mp_alloc = 0;
      vv[0]._mp_size = 1;
      pmVar3 = mpz_realloc(vv,1);
      *pmVar3 = n;
      mpz_mul(x,x,vv);
      if (vv[0]._mp_alloc != 0) {
        (*gmp_free_func)(vv[0]._mp_d,(long)vv[0]._mp_alloc << 3);
      }
    } while (uVar1 < n);
  }
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Unknown calling convention */

void mpz_2fac_ui(__mpz_struct *x,ulong n)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  mp_ptr pmVar4;
  mp_limb_t mVar5;
  long in_FS_OFFSET;
  mpz_t vv;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  mVar5 = n + (n == 0);
  if (mVar5 == 0) {
    x->_mp_size = 0;
  }
  else {
    x->_mp_size = 1;
    if (x->_mp_alloc < 1) {
      pmVar4 = mpz_realloc(x,1);
    }
    else {
      pmVar4 = x->_mp_d;
    }
    *pmVar4 = mVar5;
  }
  uVar2 = _LC35;
  if (3 < n) {
    do {
      uVar3 = _LC35;
      _LC35._0_4_ = (int)uVar2;
      _LC35._4_4_ = SUB84(uVar2,4);
      vv[0]._mp_alloc = (int)_LC35;
      vv[0]._mp_size = _LC35._4_4_;
      n = n - 2;
      vv[0]._mp_d = (mp_limb_t *)&dummy_limb_35;
      _LC35 = uVar3;
      pmVar4 = mpz_realloc(vv,1);
      *pmVar4 = n;
      mpz_mul(x,x,vv);
      if (vv[0]._mp_alloc != 0) {
        (*gmp_free_func)(vv[0]._mp_d,(long)vv[0]._mp_alloc << 3);
      }
    } while (3 < n);
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Unknown calling convention */

void mpz_fac_ui(__mpz_struct *x,ulong n)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  mp_ptr pmVar4;
  mp_limb_t mVar5;
  long in_FS_OFFSET;
  mpz_t vv;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  mVar5 = n + (n == 0);
  if (mVar5 == 0) {
    x->_mp_size = 0;
  }
  else {
    x->_mp_size = 1;
    if (x->_mp_alloc < 1) {
      pmVar4 = mpz_realloc(x,1);
    }
    else {
      pmVar4 = x->_mp_d;
    }
    *pmVar4 = mVar5;
  }
  uVar2 = _LC35;
  if (2 < n) {
    do {
      uVar3 = _LC35;
      _LC35._0_4_ = (int)uVar2;
      _LC35._4_4_ = SUB84(uVar2,4);
      vv[0]._mp_alloc = (int)_LC35;
      vv[0]._mp_size = _LC35._4_4_;
      n = n - 1;
      vv[0]._mp_d = (mp_limb_t *)&dummy_limb_35;
      _LC35 = uVar3;
      pmVar4 = mpz_realloc(vv,1);
      *pmVar4 = n;
      mpz_mul(x,x,vv);
      if (vv[0]._mp_alloc != 0) {
        (*gmp_free_func)(vv[0]._mp_d,(long)vv[0]._mp_alloc << 3);
      }
    } while (n != 2);
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Unknown calling convention */

void mpz_bin_uiui(__mpz_struct *r,ulong n,ulong k)

{
  long lVar1;
  int iVar2;
  mp_ptr pmVar3;
  __mpz_struct *d;
  mp_limb_t mVar4;
  __mpz_struct *n_00;
  long in_FS_OFFSET;
  mp_limb_t local_70;
  mpz_t t;
  mpz_t vv;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (n < k) {
    r->_mp_size = 0;
    t[0]._mp_d = (mp_limb_t *)&dummy_limb_35;
    t[0]._mp_alloc = 0;
    t[0]._mp_size = 1;
    pmVar3 = mpz_realloc(t,1);
    *pmVar3 = 1;
    goto LAB_00106723;
  }
  r->_mp_size = 1;
  if (r->_mp_alloc < 1) {
    pmVar3 = mpz_realloc(r,1);
  }
  else {
    pmVar3 = r->_mp_d;
  }
  *pmVar3 = 1;
  t[0]._mp_d = (mp_limb_t *)&dummy_limb_35;
  t[0]._mp_alloc = 0;
  t[0]._mp_size = 0;
  if (n >> 1 < k) {
    local_70 = n - k;
    mVar4 = (local_70 == 0) + local_70;
    if (mVar4 != 0) goto LAB_001068f0;
    if (local_70 < 3) goto LAB_00106723;
    local_70 = 0xffffffffffffffff;
LAB_001067e1:
    mVar4 = local_70;
    do {
      mVar4 = mVar4 - 1;
      vv[0]._mp_d = (mp_limb_t *)&dummy_limb_35;
      vv[0]._mp_alloc = (int)_LC35;
      vv[0]._mp_size = _LC35._4_4_;
      pmVar3 = mpz_realloc(vv,1);
      *pmVar3 = mVar4;
      mpz_mul(t,t,vv);
      if (vv[0]._mp_alloc != 0) {
        (*gmp_free_func)(vv[0]._mp_d,(long)vv[0]._mp_alloc << 3);
      }
    } while (mVar4 != 2);
  }
  else {
    mVar4 = k + (k == 0);
    local_70 = k;
    if (mVar4 == 0) goto LAB_00106723;
LAB_001068f0:
    t[0]._mp_alloc = 0;
    t[0]._mp_size = 1;
    pmVar3 = mpz_realloc(t,1);
    *pmVar3 = mVar4;
    if (2 < local_70) goto LAB_001067e1;
  }
  if (local_70 != 0) {
    mVar4 = n - local_70;
    do {
      vv[0]._mp_alloc = 0;
      vv[0]._mp_size = 0;
      vv[0]._mp_d = (mp_limb_t *)&dummy_limb_35;
      if (n == 0) {
        mpz_mul(r,r,vv);
      }
      else {
        vv[0]._mp_alloc = 0;
        vv[0]._mp_size = 1;
        pmVar3 = mpz_realloc(vv,1);
        *pmVar3 = n;
        iVar2 = vv[0]._mp_alloc;
        mpz_mul(r,r,vv);
        if (iVar2 != 0) {
          (*gmp_free_func)(vv[0]._mp_d,(long)iVar2 << 3);
        }
      }
      n = n - 1;
    } while (n != mVar4);
  }
LAB_00106723:
  n_00 = (__mpz_struct *)0x0;
  iVar2 = mpz_div_qr(r,(__mpz_struct *)0x0,r,t,GMP_DIV_TRUNC);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    mpz_divexact(r,n_00,d);
  }
  if (t[0]._mp_alloc == 0) {
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00106779. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*gmp_free_func)(t[0]._mp_d,(long)t[0]._mp_alloc * 8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

int mpz_tstbit(__mpz_struct *d,mp_bitcnt_t bit_index)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  mp_limb_t mVar4;
  ulong uVar5;
  bool bVar6;
  
  uVar1 = d->_mp_size;
  uVar5 = bit_index >> 6;
  uVar3 = -uVar1;
  if (0 < (int)uVar1) {
    uVar3 = uVar1;
  }
  if (uVar3 <= uVar5) {
    return (uint)((int)uVar1 >> 0x1f) >> 0x1f;
  }
  uVar2 = d->_mp_d[uVar5];
  uVar3 = (uint)(uVar2 >> ((byte)bit_index & 0x3f)) & 1;
  if (-1 < (int)uVar1) {
    return uVar3;
  }
  if ((bit_index & 0x3f) == 0) goto LAB_0010699f;
  mVar4 = uVar2 << (0x40 - ((byte)bit_index & 0x3f) & 0x3f);
  while( true ) {
    if (mVar4 != 0) {
      return uVar3 ^ 1;
    }
LAB_0010699f:
    bVar6 = uVar5 == 0;
    uVar5 = uVar5 - 1;
    if (bVar6) break;
    mVar4 = d->_mp_d[uVar5];
  }
  return uVar3;
}



/* WARNING: Unknown calling convention */

void mpz_rootrem(__mpz_struct *x,__mpz_struct *r,__mpz_struct *y,ulong z)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  mp_limb_t *pmVar5;
  mp_size_t mVar6;
  long lVar7;
  mp_ptr pmVar8;
  int iVar9;
  ulong uVar10;
  undefined8 uVar11;
  mp_limb_t *pmVar12;
  ulong *puVar13;
  mp_bitcnt_t bit_index;
  uint uVar14;
  long in_FS_OFFSET;
  bool bVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  int local_a0;
  mpz_t t;
  mpz_t u;
  mpz_t v;
  mpz_t vv;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  iVar9 = y->_mp_size;
  if ((~z & (ulong)(long)iVar9 >> 0x3f) != 0) {
                    /* WARNING: Subroutine does not return */
    gmp_die("mpz_rootrem: Negative argument, with even root.");
  }
  if (z == 0) {
                    /* WARNING: Subroutine does not return */
    gmp_die("mpz_rootrem: Zeroth root.");
  }
  iVar3 = -iVar9;
  if (0 < iVar9) {
    iVar3 = iVar9;
  }
  if (iVar3 < 2) {
    if ((iVar9 != 0) && (puVar13 = y->_mp_d, (uint)(1 < *puVar13) - (uint)(*puVar13 == 0) == 1))
    goto LAB_00106a59;
    if (x != (__mpz_struct *)0x0) {
      mpz_set(x,y);
    }
    if (r != (__mpz_struct *)0x0) {
      r->_mp_size = 0;
    }
  }
  else {
    puVar13 = y->_mp_d;
LAB_00106a59:
    u[0]._mp_d = (mp_limb_t *)&dummy_limb_35;
    u[0]._mp_alloc = 0;
    u[0]._mp_size = 0;
    t[0]._mp_d = (mp_limb_t *)&dummy_limb_35;
    t[0]._mp_alloc = 0;
    t[0]._mp_size = 0;
    uVar4 = puVar13[(long)iVar3 + -1];
    if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      mpn_limb_size_in_base_2((mp_limb_t)x);
    }
    uVar10 = 0;
    for (; uVar4 < 0x100000000000000; uVar4 = uVar4 << 8) {
      uVar10 = (ulong)((int)uVar10 + 8);
    }
    for (; -1 < (long)uVar4; uVar4 = uVar4 * 2) {
      uVar10 = (ulong)((int)uVar10 + 1);
    }
    bit_index = (((long)(iVar3 + -1) * 0x40 + 0x3f) - uVar10) / z + 1;
    iVar3 = mpz_tstbit(t,bit_index);
    if (iVar3 == 0) {
      mpz_abs_add_bit(t,bit_index);
    }
    if (z == 2) {
      pmVar5 = u[0]._mp_d;
      uVar11 = u[0]._0_8_;
      pmVar12 = t[0]._mp_d;
      uVar14 = t[0]._mp_size;
      do {
        while( true ) {
          local_a0 = t[0]._mp_alloc;
          uVar17._4_4_ = uVar14;
          uVar17._0_4_ = t[0]._mp_alloc;
          t[0]._0_8_ = uVar11;
          t[0]._mp_d = pmVar5;
          u[0]._0_8_ = uVar17;
          u[0]._mp_d = pmVar12;
          mpz_div_qr(t,(__mpz_struct *)0x0,y,u,GMP_DIV_TRUNC);
          if ((int)(uVar14 ^ t[0]._mp_size) < 0) {
            mVar6 = mpz_abs_sub(t,t,u);
            iVar9 = (int)mVar6;
          }
          else {
            mVar6 = mpz_abs_add(t,t,u);
            iVar9 = (int)mVar6;
          }
          if ((long)t[0]._0_8_ < 0) {
            iVar9 = -iVar9;
          }
          t[0]._mp_size = iVar9;
          mpz_div_q_2exp(t,t,1,GMP_DIV_TRUNC);
          uVar2 = -uVar14;
          if (0 < (int)uVar14) {
            uVar2 = uVar14;
          }
          iVar9 = -t[0]._mp_size;
          if (0 < t[0]._mp_size) {
            iVar9 = t[0]._mp_size;
          }
          lVar7 = (long)iVar9;
          pmVar5 = pmVar12;
          uVar11 = uVar17;
          uVar14 = t[0]._mp_size;
          if ((int)uVar2 != lVar7) break;
          do {
            bVar15 = lVar7 == 0;
            lVar7 = lVar7 + -1;
            if (bVar15) goto LAB_00106c50;
            puVar13 = pmVar12 + lVar7;
          } while (t[0]._mp_d[lVar7] == *puVar13);
          pmVar12 = t[0]._mp_d;
          if (*puVar13 < t[0]._mp_d[lVar7]) goto LAB_00106c50;
        }
        pmVar12 = t[0]._mp_d;
      } while (lVar7 < (int)uVar2);
    }
    else {
      v[0]._mp_alloc = 0;
      v[0]._mp_size = 0;
      v[0]._mp_d = (mp_limb_t *)&dummy_limb_35;
      iVar3 = t[0]._mp_size;
      if (iVar9 < 0) {
        mpz_set(t,t);
        iVar3 = -t[0]._mp_size;
      }
      uVar4 = z - 1;
      pmVar5 = u[0]._mp_d;
      uVar11 = u[0]._0_8_;
      pmVar12 = t[0]._mp_d;
      do {
        while( true ) {
          local_a0 = t[0]._mp_alloc;
          uVar16._4_4_ = iVar3;
          uVar16._0_4_ = t[0]._mp_alloc;
          t[0]._0_8_ = uVar11;
          t[0]._mp_d = pmVar5;
          u[0]._0_8_ = uVar16;
          u[0]._mp_d = pmVar12;
          mpz_pow_ui(t,u,uVar4);
          mpz_div_qr(t,(__mpz_struct *)0x0,y,t,GMP_DIV_TRUNC);
          vv[0]._mp_alloc = 0;
          vv[0]._mp_size = 0;
          vv[0]._mp_d = (mp_limb_t *)&dummy_limb_35;
          if (uVar4 == 0) {
            mpz_mul(v,u,vv);
          }
          else {
            vv[0]._mp_alloc = 0;
            vv[0]._mp_size = 1;
            pmVar8 = mpz_realloc(vv,1);
            *pmVar8 = uVar4;
            iVar9 = vv[0]._mp_alloc;
            mpz_mul(v,u,vv);
            if (iVar9 != 0) {
              (*gmp_free_func)(vv[0]._mp_d,(long)iVar9 << 3);
            }
          }
          if ((t[0]._mp_size ^ v[0]._mp_size) < 0) {
            mVar6 = mpz_abs_sub(t,t,v);
            iVar9 = (int)mVar6;
          }
          else {
            mVar6 = mpz_abs_add(t,t,v);
            iVar9 = (int)mVar6;
          }
          if ((long)t[0]._0_8_ < 0) {
            iVar9 = -iVar9;
          }
          t[0]._mp_size = iVar9;
          mpz_div_qr_ui(t,(__mpz_struct *)0x0,t,z,GMP_DIV_TRUNC);
          iVar9 = -iVar3;
          if (0 < iVar3) {
            iVar9 = iVar3;
          }
          iVar3 = -t[0]._mp_size;
          if (0 < t[0]._mp_size) {
            iVar3 = t[0]._mp_size;
          }
          lVar7 = (long)iVar3;
          pmVar5 = pmVar12;
          uVar11 = uVar16;
          iVar3 = t[0]._mp_size;
          if (iVar9 != lVar7) break;
          do {
            bVar15 = lVar7 == 0;
            lVar7 = lVar7 + -1;
            if (bVar15) goto LAB_00106c2c;
            puVar13 = pmVar12 + lVar7;
          } while (t[0]._mp_d[lVar7] == *puVar13);
          pmVar12 = t[0]._mp_d;
          if (*puVar13 < t[0]._mp_d[lVar7]) goto LAB_00106c2c;
        }
        pmVar12 = t[0]._mp_d;
      } while (lVar7 < iVar9);
LAB_00106c2c:
      if (v[0]._mp_alloc != 0) {
        (*gmp_free_func)(v[0]._mp_d,(long)v[0]._mp_alloc * 8);
      }
    }
LAB_00106c50:
    if (r != (__mpz_struct *)0x0) {
      mpz_pow_ui(t,u,z);
      if ((y->_mp_size ^ t[0]._mp_size) < 0) {
        mVar6 = mpz_abs_add(r,y,t);
        iVar9 = (int)mVar6;
      }
      else {
        mVar6 = mpz_abs_sub(r,y,t);
        iVar9 = (int)mVar6;
      }
      if (y->_mp_size < 0) {
        iVar9 = -iVar9;
      }
      r->_mp_size = iVar9;
    }
    iVar9 = local_a0;
    if (x != (__mpz_struct *)0x0) {
      iVar9 = x->_mp_alloc;
      pmVar5 = x->_mp_d;
      u[0]._mp_alloc = iVar9;
      x->_mp_d = u[0]._mp_d;
      x->_mp_alloc = (int)CONCAT44(u[0]._mp_size,local_a0);
      x->_mp_size = (int)(CONCAT44(u[0]._mp_size,local_a0) >> 0x20);
      u[0]._mp_d = pmVar5;
    }
    if (iVar9 != 0) {
      (*gmp_free_func)(u[0]._mp_d,(long)iVar9 * 8);
    }
    if (t[0]._mp_alloc != 0) {
      if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00106d33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*gmp_free_func)(t[0]._mp_d,(long)t[0]._mp_alloc * 8);
        return;
      }
      goto LAB_00106fbd;
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00106fbd:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

int mpz_root(__mpz_struct *x,__mpz_struct *y,ulong z)

{
  long lVar1;
  long in_FS_OFFSET;
  bool bVar2;
  mpz_t r;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  r[0]._mp_alloc = 0;
  r[0]._mp_size = 0;
  r[0]._mp_d = (mp_limb_t *)&dummy_limb_35;
  mpz_rootrem(x,r,y,z);
  bVar2 = r[0]._mp_size == 0;
  if (r[0]._mp_alloc != 0) {
    (*gmp_free_func)(r[0]._mp_d,(long)r[0]._mp_alloc << 3);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (int)bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

void mpz_sqrtrem(__mpz_struct *s,__mpz_struct *r,__mpz_struct *u)

{
  mpz_rootrem(s,r,u,2);
  return;
}



/* WARNING: Unknown calling convention */

void mpz_sqrt(__mpz_struct *s,__mpz_struct *u)

{
  mpz_rootrem(s,(__mpz_struct *)0x0,u,2);
  return;
}



/* WARNING: Unknown calling convention */

mp_size_t mpn_sqrtrem(mp_ptr sp,mp_ptr rp,mp_srcptr p,mp_size_t n)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  bool bVar4;
  mpz_t s;
  mpz_t r;
  mpz_t u;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (n < 1) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("n > 0","lib/mini-gmp.c",0xd20,"mpn_sqrtrem");
  }
  if (p[n + -1] == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("p [n-1] != 0","lib/mini-gmp.c",0xd21,"mpn_sqrtrem");
  }
  u[0]._mp_size = (int)n;
  r[0]._mp_alloc = 0;
  r[0]._mp_size = 0;
  r[0]._mp_d = (mp_limb_t *)&dummy_limb_35;
  s[0]._mp_d = (mp_limb_t *)&dummy_limb_35;
  s[0]._mp_alloc = 0;
  s[0]._mp_size = 0;
  u[0]._mp_alloc = 0;
  u[0]._mp_d = p;
  mpz_rootrem(s,r,u,2);
  lVar2 = (long)s[0]._mp_size;
  if (lVar2 != n + 1 >> 1) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("s->_mp_size == (n+1)/2","lib/mini-gmp.c",0xd27,"mpn_sqrtrem");
  }
  do {
    lVar2 = lVar2 + -1;
    sp[lVar2] = s[0]._mp_d[lVar2];
  } while (lVar2 != 0);
  if (s[0]._mp_alloc != 0) {
    (*gmp_free_func)(s[0]._mp_d,(long)s[0]._mp_alloc * 8);
  }
  lVar2 = (long)r[0]._mp_size;
  if ((rp != (mp_ptr)0x0) && (lVar3 = lVar2 + -1, -1 < lVar3)) {
    do {
      rp[lVar3] = r[0]._mp_d[lVar3];
      bVar4 = lVar3 != 0;
      lVar3 = lVar3 + -1;
    } while (bVar4);
  }
  if (r[0]._mp_alloc != 0) {
    (*gmp_free_func)(r[0]._mp_d,(long)r[0]._mp_alloc * 8);
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar2;
}



/* WARNING: Unknown calling convention */

int mpn_perfect_square_p(mp_srcptr p,mp_size_t n)

{
  long lVar1;
  long in_FS_OFFSET;
  bool bVar2;
  mpz_t t;
  mpz_t r;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (n < 1) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("n > 0","lib/mini-gmp.c",0xd15,"mpn_perfect_square_p");
  }
  if (p[n + -1] != 0) {
    t[0]._mp_size = (int)n;
    r[0]._mp_d = (mp_limb_t *)&dummy_limb_35;
    t[0]._mp_alloc = 0;
    r[0]._mp_alloc = 0;
    r[0]._mp_size = 0;
    t[0]._mp_d = p;
    mpz_rootrem((__mpz_struct *)0x0,r,t,2);
    bVar2 = r[0]._mp_size == 0;
    if (r[0]._mp_alloc != 0) {
      (*gmp_free_func)(r[0]._mp_d,(long)r[0]._mp_alloc << 3);
    }
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      return (int)bVar2;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("p [n-1] != 0","lib/mini-gmp.c",0xd16,"mpn_perfect_square_p");
}



/* WARNING: Unknown calling convention */

int mpz_perfect_square_p(__mpz_struct *u)

{
  long lVar1;
  uint uVar2;
  long in_FS_OFFSET;
  mpz_t r;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (u->_mp_size < 1) {
    uVar2 = (uint)(u->_mp_size == 0);
  }
  else {
    r[0]._mp_d = (mp_limb_t *)&dummy_limb_35;
    r[0]._mp_alloc = 0;
    r[0]._mp_size = 0;
    mpz_rootrem((__mpz_struct *)0x0,r,u,2);
    uVar2 = (uint)(r[0]._mp_size == 0);
    if (r[0]._mp_alloc != 0) {
      (*gmp_free_func)(r[0]._mp_d,(long)r[0]._mp_alloc << 3);
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

void mpz_gcdext(__mpz_struct *g,__mpz_struct *s,__mpz_struct *t,__mpz_struct *u,__mpz_struct *v)

{
  undefined8 uVar1;
  long lVar2;
  mp_limb_t *pmVar3;
  undefined8 uVar4;
  mp_limb_t *pmVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  mp_ptr __mp_ptr_swap__tmp;
  mp_bitcnt_t mVar11;
  mp_bitcnt_t mVar12;
  mp_size_t mVar13;
  int iVar14;
  __mpz_struct *extraout_RDX;
  __mpz_struct *extraout_RDX_00;
  __mpz_struct *p_Var15;
  mp_bitcnt_t bits;
  int iVar16;
  mp_bitcnt_t bit_index;
  __mpz_struct *n;
  __mpz_struct *q;
  uint uVar17;
  int iVar18;
  int iVar19;
  mp_bitcnt_t bits_00;
  long lVar20;
  long in_FS_OFFSET;
  int extraout_XMM0_Da;
  undefined8 uVar21;
  undefined8 uVar22;
  long local_e0;
  __mpz_struct *local_d8;
  __mpz_struct *local_d0;
  __mpz_struct *local_c8;
  __mpz_struct *local_c0;
  mpz_t tu;
  mpz_t tv;
  mpz_t s0;
  mpz_t s1;
  mpz_t t0;
  mpz_t t1;
  
  iVar8 = u->_mp_size;
  iVar18 = v->_mp_size;
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if (iVar8 == 0) {
    mpz_set(g,v);
    iVar8 = g->_mp_size;
    iVar16 = -iVar8;
    if (0 < iVar8) {
      iVar16 = iVar8;
    }
    g->_mp_size = iVar16;
    if (s != (__mpz_struct *)0x0) {
      s->_mp_size = 0;
    }
    if (t != (__mpz_struct *)0x0) {
      if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
        mpz_set_si(t,(long)(int)((uint)(0 < iVar18) + (iVar18 >> 0x1f)));
        return;
      }
      goto LAB_00107ea7;
    }
  }
  else if (iVar18 == 0) {
    mpz_set(g,u);
    iVar18 = g->_mp_size;
    iVar16 = -iVar18;
    if (0 < iVar18) {
      iVar16 = iVar18;
    }
    g->_mp_size = iVar16;
    if (s != (__mpz_struct *)0x0) {
      mpz_set_si(s,(long)(int)((uint)(0 < iVar8) + (iVar8 >> 0x1f)));
    }
    if (t != (__mpz_struct *)0x0) {
      t->_mp_size = 0;
    }
  }
  else {
    tu[0]._mp_alloc = 0;
    tu[0]._mp_size = 0;
    tu[0]._mp_d = (mp_limb_t *)&dummy_limb_35;
    tv[0]._mp_d = (mp_limb_t *)&dummy_limb_35;
    s0[0]._mp_d = (mp_limb_t *)&dummy_limb_35;
    s1[0]._mp_d = (mp_limb_t *)&dummy_limb_35;
    t0[0]._mp_d = (mp_limb_t *)&dummy_limb_35;
    t1[0]._mp_d = (mp_limb_t *)&dummy_limb_35;
    tv[0]._mp_alloc = 0;
    tv[0]._mp_size = 0;
    s0[0]._mp_alloc = 0;
    s0[0]._mp_size = 0;
    s1[0]._mp_alloc = 0;
    s1[0]._mp_size = 0;
    t0[0]._mp_alloc = 0;
    t0[0]._mp_size = 0;
    t1[0]._mp_alloc = 0;
    t1[0]._mp_size = 0;
    mpz_set(tu,u);
    iVar8 = -tu[0]._mp_size;
    if (0 < tu[0]._mp_size) {
      iVar8 = tu[0]._mp_size;
    }
    tu[0]._mp_size = iVar8;
    mVar11 = mpz_make_odd(tu);
    mpz_set(tv,v);
    iVar8 = -tv[0]._mp_size;
    if (0 < tv[0]._mp_size) {
      iVar8 = tv[0]._mp_size;
    }
    tv[0]._mp_size = iVar8;
    mVar12 = mpz_make_odd(tv);
    pmVar3 = tv[0]._mp_d;
    uVar21 = tv[0]._0_8_;
    bits_00 = mVar12;
    if (mVar11 <= mVar12) {
      bits_00 = mVar11;
    }
    bVar6 = tu[0]._mp_size < tv[0]._mp_size;
    bits = mVar11 - bits_00;
    bit_index = mVar12 - bits_00;
    local_d8 = u;
    local_d0 = v;
    local_c8 = t;
    local_c0 = s;
    if (bVar6) {
      tv[0]._mp_d = tu[0]._mp_d;
      tv[0]._mp_alloc = tu[0]._mp_alloc;
      tv[0]._mp_size = tu[0]._mp_size;
      uVar22 = tv[0]._0_8_;
      tu[0]._mp_d = pmVar3;
      tv[0]._mp_alloc = (int)uVar21;
      tv[0]._mp_size = SUB84(uVar21,4);
      tu[0]._mp_alloc = tv[0]._mp_alloc;
      tu[0]._mp_size = tv[0]._mp_size;
      bits = mVar12 - bits_00;
      bit_index = mVar11 - bits_00;
      local_d8 = v;
      local_d0 = u;
      local_c8 = s;
      local_c0 = t;
      tv[0]._0_8_ = uVar22;
    }
    mpz_div_qr(t1,tu,tu,tv,GMP_DIV_TRUNC);
    mpz_mul_2exp(t1,t1,bits);
    p_Var15 = s1;
    iVar8 = mpz_tstbit(s1,bit_index);
    if (iVar8 == 0) {
      mpz_abs_add_bit(p_Var15,bit_index);
    }
    local_e0 = bits + bit_index;
    if (tu[0]._mp_size < 1) {
      mpz_abs_add_bit(t0,bits);
    }
    else {
      mVar11 = mpz_make_odd(tu);
      mpz_abs_add_bit(t0,bits + mVar11);
      local_e0 = local_e0 + mVar11;
      while (iVar8 = mpz_cmp(tu,tv), iVar8 != 0) {
        if (iVar8 < 0) {
          if ((tv[0]._mp_size ^ tu[0]._mp_size) < 0) {
            mVar13 = mpz_abs_add(tv,tv,tu);
            iVar8 = (int)mVar13;
          }
          else {
            mVar13 = mpz_abs_sub(tv,tv,tu);
            iVar8 = (int)mVar13;
          }
          if ((long)tv[0]._0_8_ < 0) {
            iVar8 = -iVar8;
          }
          tv[0]._mp_size = iVar8;
          if ((t0[0]._mp_size ^ t1[0]._mp_size) < 0) {
            mVar13 = mpz_abs_sub(t0,t0,t1);
            iVar8 = (int)mVar13;
          }
          else {
            mVar13 = mpz_abs_add(t0,t0,t1);
            iVar8 = (int)mVar13;
          }
          if ((long)t0[0]._0_8_ < 0) {
            iVar8 = -iVar8;
          }
          t0[0]._mp_size = iVar8;
          if ((s0[0]._mp_size ^ s1[0]._mp_size) < 0) {
            mVar13 = mpz_abs_sub(s0,s0,s1);
            iVar8 = (int)mVar13;
          }
          else {
            mVar13 = mpz_abs_add(s0,s0,s1);
            iVar8 = (int)mVar13;
          }
          if ((long)s0[0]._0_8_ < 0) {
            iVar8 = -iVar8;
          }
          s0[0]._mp_size = iVar8;
          mVar11 = mpz_make_odd(tv);
          mpz_mul_2exp(t1,t1,mVar11);
          mpz_mul_2exp(s1,s1,mVar11);
        }
        else {
          if ((tv[0]._mp_size ^ tu[0]._mp_size) < 0) {
            mVar13 = mpz_abs_add(tu,tu,tv);
            iVar8 = (int)mVar13;
          }
          else {
            mVar13 = mpz_abs_sub(tu,tu,tv);
            iVar8 = (int)mVar13;
          }
          uVar21 = t0[0]._0_8_;
          if ((long)tu[0]._0_8_ < 0) {
            iVar8 = -iVar8;
          }
          tu[0]._mp_size = iVar8;
          if ((t0[0]._mp_size ^ t1[0]._mp_size) < 0) {
            mVar13 = mpz_abs_sub(t1,t0,t1);
            iVar8 = (int)mVar13;
          }
          else {
            mVar13 = mpz_abs_add(t1,t0,t1);
            iVar8 = (int)mVar13;
          }
          uVar22 = s0[0]._0_8_;
          if ((long)uVar21 < 0) {
            iVar8 = -iVar8;
          }
          t1[0]._mp_size = iVar8;
          if ((s0[0]._mp_size ^ s1[0]._mp_size) < 0) {
            mVar13 = mpz_abs_sub(s1,s0,s1);
            iVar8 = (int)mVar13;
          }
          else {
            mVar13 = mpz_abs_add(s1,s0,s1);
            iVar8 = (int)mVar13;
          }
          if ((long)uVar22 < 0) {
            iVar8 = -iVar8;
          }
          s1[0]._mp_size = iVar8;
          mVar11 = mpz_make_odd(tu);
          mpz_mul_2exp(t0,t0,mVar11);
          mpz_mul_2exp(s0,s0,mVar11);
        }
        local_e0 = local_e0 + mVar11;
      }
    }
    mpz_mul_2exp(tv,tv,bits_00);
    mpz_set(s0,s0);
    n = (__mpz_struct *)0x0;
    uVar17 = -s0[0]._mp_size;
    s0[0]._mp_size = uVar17;
    q = s1;
    iVar8 = mpz_div_qr(s1,(__mpz_struct *)0x0,local_d0,tv,GMP_DIV_TRUNC);
    p_Var15 = extraout_RDX;
    if (iVar8 != 0) {
LAB_00107ea2:
                    /* WARNING: Subroutine does not return */
      mpz_divexact(q,n,p_Var15);
    }
    mpz_set(s1,s1);
    uVar7 = s1[0]._mp_size;
    if (s1[0]._mp_size < 1) {
      uVar7 = -s1[0]._mp_size;
    }
    n = (__mpz_struct *)0x0;
    s1[0]._mp_size = uVar7;
    q = t1;
    iVar8 = mpz_div_qr(t1,(__mpz_struct *)0x0,local_d8,tv,GMP_DIV_TRUNC);
    p_Var15 = extraout_RDX_00;
    if (iVar8 != 0) goto LAB_00107ea2;
    mpz_set(t1,t1);
    uVar9 = t1[0]._mp_size;
    if (t1[0]._mp_size < 1) {
      uVar9 = -t1[0]._mp_size;
    }
    t1[0]._mp_size = uVar9;
    lVar20 = local_e0 + -1;
    if (local_e0 != 0) {
      do {
        iVar8 = t0[0]._mp_size;
        if ((((uint)(uVar17 != 0) & (uint)*s0[0]._mp_d) != 0) ||
           (((uint)(t0[0]._mp_size != 0) & (uint)*t0[0]._mp_d) != 0)) {
          if ((int)(uVar17 ^ uVar7) < 0) {
            mVar13 = mpz_abs_add(s0,s0,s1);
            iVar18 = (int)mVar13;
          }
          else {
            mVar13 = mpz_abs_sub(s0,s0,s1);
            iVar18 = (int)mVar13;
          }
          if ((long)s0[0]._0_8_ < 0) {
            iVar18 = -iVar18;
          }
          s0[0]._mp_size = iVar18;
          if ((int)(iVar8 ^ uVar9) < 0) {
            mVar13 = mpz_abs_sub(t0,t0,t1);
            iVar8 = (int)mVar13;
          }
          else {
            mVar13 = mpz_abs_add(t0,t0,t1);
            iVar8 = (int)mVar13;
          }
          if ((long)t0[0]._0_8_ < 0) {
            iVar8 = -iVar8;
          }
          t0[0]._mp_size = iVar8;
          if ((((uint)(iVar8 != 0) & (uint)*t0[0]._mp_d) != 0) ||
             (((uint)(iVar18 != 0) & (uint)*s0[0]._mp_d) != 0)) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("mpz_even_p (t0) && mpz_even_p (s0)","lib/mini-gmp.c",0xbac,"mpz_gcdext");
          }
        }
        mpz_div_q_2exp(s0,s0,1,GMP_DIV_TRUNC);
        lVar20 = lVar20 + -1;
        mpz_div_q_2exp(t0,t0,1,GMP_DIV_TRUNC);
        uVar17 = s0[0]._mp_size;
      } while (lVar20 != -1);
    }
    if ((int)(uVar7 ^ uVar17) < 0) {
      mVar13 = mpz_abs_sub(s1,s0,s1);
      iVar8 = (int)mVar13;
    }
    else {
      mVar13 = mpz_abs_add(s1,s0,s1);
      iVar8 = (int)mVar13;
    }
    uVar21 = t0[0]._0_8_;
    iVar16 = t0[0]._mp_size;
    iVar18 = -iVar8;
    if (-1 < (int)uVar17) {
      iVar18 = iVar8;
    }
    s1[0]._mp_size = iVar18;
    if ((int)(uVar9 ^ t0[0]._mp_size) < 0) {
      mVar13 = mpz_abs_add(t1,t0,t1);
      iVar8 = (int)mVar13;
    }
    else {
      mVar13 = mpz_abs_sub(t1,t0,t1);
      iVar8 = (int)mVar13;
    }
    iVar14 = -iVar8;
    if (-1 < (long)uVar21) {
      iVar14 = iVar8;
    }
    t1[0]._mp_size = iVar14;
    iVar10 = mpz_cmpabs(s0,s1);
    iVar19 = t1[0]._mp_alloc;
    iVar8 = s1[0]._mp_alloc;
    if ((iVar10 < 1) &&
       ((iVar10 != 0 || (iVar10 = mpz_cmpabs(t0,t1), iVar19 = extraout_XMM0_Da, iVar10 < 1)))) {
      if (local_d8->_mp_size < 0) goto LAB_00107daf;
LAB_00107b39:
      iVar18 = local_d0->_mp_size;
    }
    else {
      pmVar5 = t1[0]._mp_d;
      pmVar3 = s0[0]._mp_d;
      uVar22._4_4_ = iVar18;
      uVar22._0_4_ = iVar8;
      uVar21._4_4_ = iVar14;
      uVar21._0_4_ = iVar19;
      s0[0]._mp_d = s1[0]._mp_d;
      s1[0]._mp_d = pmVar3;
      t1[0]._mp_d = t0[0]._mp_d;
      s1[0]._mp_size = uVar17;
      s1[0]._mp_alloc = s0[0]._mp_alloc;
      t0[0]._mp_d = pmVar5;
      t1[0]._mp_size = iVar16;
      t1[0]._mp_alloc = t0[0]._mp_alloc;
      iVar8 = s0[0]._mp_alloc;
      iVar19 = t0[0]._mp_alloc;
      s0[0]._0_8_ = uVar22;
      t0[0]._0_8_ = uVar21;
      if (-1 < local_d8->_mp_size) goto LAB_00107b39;
LAB_00107daf:
      mpz_set(s0,s0);
      s0[0]._mp_size = -s0[0]._mp_size;
      iVar18 = local_d0->_mp_size;
    }
    if (iVar18 < 0) {
      mpz_set(t0,t0);
      t0[0]._mp_size = -t0[0]._mp_size;
    }
    uVar21 = t0[0]._0_8_;
    uVar1._0_4_ = g->_mp_alloc;
    uVar1._4_4_ = g->_mp_size;
    pmVar3 = g->_mp_d;
    g->_mp_d = tv[0]._mp_d;
    g->_mp_alloc = tv[0]._mp_alloc;
    g->_mp_size = tv[0]._mp_size;
    iVar18 = s0[0]._mp_alloc;
    if (local_c0 != (__mpz_struct *)0x0) {
      uVar4._0_4_ = local_c0->_mp_alloc;
      uVar4._4_4_ = local_c0->_mp_size;
      pmVar5 = local_c0->_mp_d;
      iVar18 = local_c0->_mp_alloc;
      local_c0->_mp_d = s0[0]._mp_d;
      local_c0->_mp_alloc = s0[0]._mp_alloc;
      local_c0->_mp_size = s0[0]._mp_size;
      s0[0]._0_8_ = uVar4;
      s0[0]._mp_d = pmVar5;
    }
    iVar16 = t0[0]._mp_alloc;
    if (local_c8 != (__mpz_struct *)0x0) {
      iVar16 = local_c8->_mp_alloc;
      pmVar5 = local_c8->_mp_d;
      t0[0]._mp_alloc = iVar16;
      uVar22 = t0[0]._0_8_;
      local_c8->_mp_d = t0[0]._mp_d;
      t0[0]._mp_alloc = (int)uVar21;
      t0[0]._mp_size = SUB84(uVar21,4);
      local_c8->_mp_alloc = t0[0]._mp_alloc;
      local_c8->_mp_size = t0[0]._mp_size;
      t0[0]._0_8_ = uVar22;
      t0[0]._mp_d = pmVar5;
    }
    tv[0]._0_8_ = uVar1;
    tv[0]._mp_d = pmVar3;
    if (tu[0]._mp_alloc != 0) {
      (*gmp_free_func)(tu[0]._mp_d,(long)tu[0]._mp_alloc * 8);
    }
    if ((int)uVar1 != 0) {
      (*gmp_free_func)(pmVar3,(long)(int)uVar1 << 3);
    }
    if (iVar18 != 0) {
      (*gmp_free_func)(s0[0]._mp_d,(long)iVar18 << 3);
    }
    if (iVar8 != 0) {
      (*gmp_free_func)(s1[0]._mp_d,(long)iVar8 << 3);
    }
    if (iVar16 != 0) {
      (*gmp_free_func)(t0[0]._mp_d,(long)iVar16 << 3);
    }
    if (iVar19 != 0) {
      if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00107cb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*gmp_free_func)(t1[0]._mp_d,(long)iVar19 << 3);
        return;
      }
      goto LAB_00107ea7;
    }
  }
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00107ea7:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

int mpz_invert(__mpz_struct *r,__mpz_struct *u,__mpz_struct *m)

{
  long lVar1;
  mp_limb_t *pmVar2;
  int iVar3;
  mp_size_t rn;
  mp_size_t mVar4;
  int iVar5;
  long in_FS_OFFSET;
  mpz_t g;
  mpz_t tr;
  
  iVar5 = u->_mp_size;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (iVar5 == 0) goto LAB_00107f6c;
  iVar5 = m->_mp_size;
  iVar3 = -iVar5;
  if (0 < iVar5) {
    iVar3 = iVar5;
  }
  if (iVar3 < 2) {
    if (iVar5 == 0) goto LAB_00107f6c;
    if ((uint)(1 < *m->_mp_d) - (uint)(*m->_mp_d == 0) != 1) {
      iVar5 = 0;
      goto LAB_00107f6c;
    }
  }
  g[0]._mp_alloc = 0;
  g[0]._mp_size = 0;
  g[0]._mp_d = (mp_limb_t *)&dummy_limb_35;
  tr[0]._mp_alloc = 0;
  tr[0]._mp_size = 0;
  tr[0]._mp_d = (mp_limb_t *)&dummy_limb_35;
  mpz_gcdext(g,tr,(__mpz_struct *)0x0,u,m);
  if ((g[0]._mp_size == 1) && (1 < *g[0]._mp_d == (*g[0]._mp_d == 0))) {
    iVar5 = tr[0]._mp_size;
    if ((long)tr[0]._0_8_ < 0) {
      mVar4 = mpz_abs_sub(tr,tr,m);
      iVar5 = (int)mVar4;
      if ((long)tr[0]._0_8_ < 0) {
        iVar5 = -iVar5;
      }
    }
    pmVar2 = r->_mp_d;
    iVar3 = r->_mp_alloc;
    r->_mp_d = tr[0]._mp_d;
    r->_mp_alloc = (int)CONCAT44(iVar5,tr[0]._mp_alloc);
    r->_mp_size = (int)(CONCAT44(iVar5,tr[0]._mp_alloc) >> 0x20);
    iVar5 = 1;
    tr[0]._mp_d = pmVar2;
  }
  else {
    iVar5 = 0;
    iVar3 = tr[0]._mp_alloc;
  }
  if (g[0]._mp_alloc != 0) {
    (*gmp_free_func)(g[0]._mp_d,(long)g[0]._mp_alloc << 3);
  }
  if (iVar3 != 0) {
    (*gmp_free_func)(tr[0]._mp_d,(long)iVar3 << 3);
  }
LAB_00107f6c:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

void mpz_powm(__mpz_struct *r,__mpz_struct *b,__mpz_struct *e,__mpz_struct *m)

{
  long lVar1;
  ulong uVar2;
  mp_limb_t *pmVar3;
  int iVar4;
  uint cnt;
  int iVar5;
  long lVar6;
  mp_ptr pmVar7;
  mp_limb_t *pmVar8;
  long lVar9;
  mp_limb_t mVar10;
  ulong uVar11;
  int iVar12;
  long dn;
  long in_FS_OFFSET;
  bool bVar13;
  mp_srcptr local_c8;
  mp_ptr local_a0;
  gmp_div_inverse minv;
  mpz_t tr;
  mpz_t base;
  
  iVar12 = e->_mp_size;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = m->_mp_size;
  iVar4 = -iVar5;
  if (0 < iVar5) {
    iVar4 = iVar5;
  }
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    gmp_die("mpz_powm: Zero modulo.");
  }
  if (iVar12 == 0) {
    mVar10 = 1;
    if ((iVar4 == 1) &&
       (mVar10 = (mp_limb_t)(int)((uint)(1 < *m->_mp_d) - (uint)(*m->_mp_d == 0)), mVar10 == 0)) {
      r->_mp_size = 0;
    }
    else {
      r->_mp_size = 1;
      if (r->_mp_alloc < 1) {
        pmVar7 = mpz_realloc(r,1);
      }
      else {
        pmVar7 = r->_mp_d;
      }
      *pmVar7 = mVar10;
    }
  }
  else {
    local_c8 = m->_mp_d;
    dn = (long)iVar4;
    mpn_div_qr_invert(&minv,local_c8,dn);
    cnt = minv.shift;
    if (minv.shift == 0) {
      local_a0 = (mp_ptr)0x0;
      iVar5 = iVar12;
    }
    else {
      minv.shift = 0;
      local_a0 = (mp_ptr)(*gmp_allocate_func)(dn * 8);
      mVar10 = mpn_lshift(local_a0,local_c8,dn,cnt);
      if (mVar10 != 0) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("__cy == 0","lib/mini-gmp.c",0xc5b,"mpz_powm");
      }
      iVar5 = e->_mp_size;
      local_c8 = local_a0;
    }
    base[0]._mp_alloc = 0;
    base[0]._mp_size = 0;
    base[0]._mp_d = (mp_limb_t *)&dummy_limb_35;
    if (iVar5 < 0) {
      iVar5 = mpz_invert(base,b,m);
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        gmp_die("mpz_powm: Negative exponent and non-invertible base.");
      }
    }
    else {
      mpz_set(base,b);
      iVar5 = -base[0]._mp_size;
      if (0 < base[0]._mp_size) {
        iVar5 = base[0]._mp_size;
      }
      base[0]._mp_size = iVar5;
      lVar9 = (long)iVar5;
      if (dn <= lVar9) {
        mpn_div_qr_preinv((mp_ptr)0x0,base[0]._mp_d,lVar9,local_c8,dn,&minv);
        pmVar8 = base[0]._mp_d;
        lVar9 = dn;
        iVar5 = base[0]._mp_alloc;
        if (-1 < b->_mp_size) goto LAB_00108222;
LAB_0010849e:
        pmVar8 = base[0]._mp_d;
        if (iVar5 < iVar4) {
          pmVar8 = mpz_realloc(base,dn);
        }
        mVar10 = mpn_sub(pmVar8,local_c8,dn,pmVar8,lVar9);
        pmVar8 = base[0]._mp_d;
        lVar9 = dn;
        if (mVar10 == 0) goto LAB_00108222;
                    /* WARNING: Subroutine does not return */
        __assert_fail("__cy == 0","lib/mini-gmp.c",0xc78,"mpz_powm");
      }
      iVar5 = base[0]._mp_alloc;
      pmVar8 = base[0]._mp_d;
      if (b->_mp_size < 0) goto LAB_0010849e;
      for (; lVar9 != 0; lVar9 = lVar9 + -1) {
LAB_00108222:
        if (pmVar8[lVar9 + -1] != 0) goto LAB_0010822a;
      }
      lVar9 = 0;
LAB_0010822a:
      base[0]._mp_size = (int)lVar9;
    }
    tr[0]._mp_d = (mp_limb_t *)&dummy_limb_35;
    tr[0]._mp_alloc = (int)_LC35;
    tr[0]._mp_size = _LC35._4_4_;
    pmVar7 = mpz_realloc(tr,1);
    *pmVar7 = 1;
    iVar5 = -iVar12;
    if (0 < iVar12) {
      iVar5 = iVar12;
    }
    lVar9 = (long)(iVar5 + -1);
    do {
      iVar12 = 0x40;
      uVar11 = 0x8000000000000000;
      uVar2 = e->_mp_d[lVar9];
      do {
        while (mpz_mul(tr,tr,tr), (uVar11 & uVar2) != 0) {
          mpz_mul(tr,tr,base);
          if (tr[0]._mp_size <= iVar4) goto LAB_001082ca;
LAB_001082fe:
          pmVar8 = tr[0]._mp_d;
          mpn_div_qr_preinv((mp_ptr)0x0,tr[0]._mp_d,(long)tr[0]._mp_size,local_c8,dn,&minv);
          lVar6 = dn;
          do {
            if (pmVar8[lVar6 + -1] != 0) {
              tr[0]._mp_size = (int)lVar6;
              goto LAB_0010833e;
            }
            lVar6 = lVar6 + -1;
          } while (lVar6 != 0);
          tr[0]._mp_size = 0;
LAB_0010833e:
          uVar11 = uVar11 >> 1;
          iVar12 = iVar12 + -1;
          if (iVar12 == 0) goto LAB_00108350;
        }
        if (iVar4 < tr[0]._mp_size) goto LAB_001082fe;
LAB_001082ca:
        uVar11 = uVar11 >> 1;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
LAB_00108350:
      pmVar8 = tr[0]._mp_d;
      bVar13 = lVar9 != 0;
      lVar9 = lVar9 + -1;
    } while (bVar13);
    iVar12 = tr[0]._mp_size;
    if (iVar4 <= tr[0]._mp_size) {
      minv.shift = cnt;
      mpn_div_qr_preinv((mp_ptr)0x0,tr[0]._mp_d,(long)tr[0]._mp_size,local_c8,dn,&minv);
      lVar9 = dn;
      do {
        if (pmVar8[lVar9 + -1] != 0) {
          iVar12 = (int)lVar9;
          goto LAB_00108375;
        }
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      iVar12 = 0;
    }
LAB_00108375:
    if (local_a0 != (mp_ptr)0x0) {
      (*gmp_free_func)(local_a0,dn << 3);
    }
    iVar5 = r->_mp_alloc;
    pmVar3 = r->_mp_d;
    r->_mp_d = pmVar8;
    r->_mp_alloc = (int)CONCAT44(iVar12,tr[0]._mp_alloc);
    r->_mp_size = (int)(CONCAT44(iVar12,tr[0]._mp_alloc) >> 0x20);
    if (iVar5 != 0) {
      (*gmp_free_func)(pmVar3,(long)iVar5 * 8);
    }
    if (base[0]._mp_alloc != 0) {
      if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010840a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*gmp_free_func)(base[0]._mp_d,(long)base[0]._mp_alloc * 8);
        return;
      }
      goto LAB_00108527;
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00108527:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

void mpz_powm_ui(__mpz_struct *r,__mpz_struct *b,ulong elimb,__mpz_struct *m)

{
  long lVar1;
  int iVar2;
  mp_ptr pmVar3;
  long in_FS_OFFSET;
  mpz_t e;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  e[0]._mp_alloc = 0;
  e[0]._mp_size = 0;
  e[0]._mp_d = (mp_limb_t *)&dummy_limb_35;
  if (elimb == 0) {
    mpz_powm(r,b,e,m);
  }
  else {
    e[0]._mp_alloc = 0;
    e[0]._mp_size = 1;
    pmVar3 = mpz_realloc(e,1);
    *pmVar3 = elimb;
    iVar2 = e[0]._mp_alloc;
    mpz_powm(r,b,e,m);
    if (iVar2 != 0) {
      if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010863e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*gmp_free_func)(e[0]._mp_d,(long)iVar2 << 3);
        return;
      }
      goto LAB_00108644;
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00108644:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

int gmp_millerrabin(__mpz_struct *n,__mpz_struct *nm1,__mpz_struct *y,__mpz_struct *q,mp_bitcnt_t k)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  mp_ptr pmVar5;
  long in_FS_OFFSET;
  mpz_t e;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (k == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("k > 0","lib/mini-gmp.c",0xe0d,"gmp_millerrabin");
  }
  mpz_powm(y,y,q,n);
  if ((y->_mp_size != 1) || (1 < *y->_mp_d != (*y->_mp_d == 0))) {
    iVar4 = mpz_cmp(y,nm1);
    uVar2 = _LC35;
    if (iVar4 != 0) {
      do {
        uVar3 = _LC35;
        k = k - 1;
        if (k == 0) {
          iVar4 = 0;
          goto LAB_00108759;
        }
        e[0]._mp_d = (mp_limb_t *)&dummy_limb_35;
        _LC35._0_4_ = (int)uVar2;
        _LC35._4_4_ = SUB84(uVar2,4);
        e[0]._mp_alloc = (int)_LC35;
        e[0]._mp_size = _LC35._4_4_;
        _LC35 = uVar3;
        pmVar5 = mpz_realloc(e,1);
        *pmVar5 = 2;
        mpz_powm(y,y,e,n);
        if (e[0]._mp_alloc != 0) {
          (*gmp_free_func)(e[0]._mp_d,(long)e[0]._mp_alloc << 3);
        }
        iVar4 = mpz_cmp(y,nm1);
      } while (iVar4 != 0);
    }
  }
  iVar4 = 1;
LAB_00108759:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

int mpz_probab_prime_p(__mpz_struct *n,int reps)

{
  long lVar1;
  mp_srcptr up;
  uint uVar2;
  mp_limb_t *pmVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  mp_ptr pmVar8;
  mp_bitcnt_t bit_index;
  ulong uVar9;
  mp_bitcnt_t mVar10;
  mp_limb_t mVar11;
  mp_size_t mVar12;
  mp_limb_t *pmVar13;
  uint uVar14;
  ulong uVar15;
  mp_limb_t mVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  __mpz_struct *u;
  long lVar20;
  long in_FS_OFFSET;
  bool bVar21;
  int local_124;
  ulong local_108;
  uint local_ec;
  mpz_t nm1;
  mpz_t q;
  mpz_t y;
  mpz_t V;
  mpz_t n_1;
  mpz_t U;
  mpz_t t;
  
  uVar17 = *n->_mp_d;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  iVar6 = n->_mp_size;
  iVar7 = iVar6;
  if (iVar6 < 1) {
    iVar7 = -iVar6;
  }
  if (((uint)(iVar6 != 0) & (uint)uVar17) == 0) {
    if ((iVar7 < 2) && (iVar6 != 0)) {
      bVar21 = 2 < uVar17 == uVar17 < 2;
      local_ec = (uint)bVar21 + (uint)bVar21;
      goto LAB_00108a01;
    }
  }
  else {
    if ((iVar7 == 1) && ((uint)(0x40 < uVar17) - (uint)(uVar17 < 0x40) == -1)) {
      local_ec = (uint)(0xc96996dcL >> ((byte)(uVar17 >> 1) & 0x3f)) & 2;
      goto LAB_00108a01;
    }
    t[0]._mp_d = (mp_limb_t *)&dummy_limb_35;
    t[0]._0_8_ = _LC35;
    pmVar8 = mpz_realloc(t,1);
    *pmVar8 = 0xc0cfd797;
    mpz_gcd(t,n,t);
    if (t[0]._mp_size == 0) {
      if (t[0]._mp_alloc != 0) {
        (*gmp_free_func)(t[0]._mp_d,(long)t[0]._mp_alloc * 8);
      }
    }
    else {
      mVar16 = *t[0]._mp_d;
      if (t[0]._mp_alloc != 0) {
        (*gmp_free_func)(t[0]._mp_d,(long)t[0]._mp_alloc * 8);
      }
      if (mVar16 == 1) {
        iVar6 = n->_mp_size;
        iVar7 = -iVar6;
        if (0 < iVar6) {
          iVar7 = iVar6;
        }
        if ((iVar7 < 2) &&
           ((iVar6 == 0 || ((uint)(0x3c1 < *n->_mp_d) - (uint)(*n->_mp_d < 0x3c1) == -1)))) {
          local_ec = 2;
          goto LAB_00108a01;
        }
        nm1[0]._mp_alloc = 0;
        nm1[0]._mp_size = 0;
        nm1[0]._mp_d = (mp_limb_t *)&dummy_limb_35;
        q[0]._mp_alloc = 0;
        q[0]._mp_size = 0;
        q[0]._mp_d = (mp_limb_t *)&dummy_limb_35;
        mpz_set(nm1,n);
        pmVar3 = nm1[0]._mp_d;
        iVar6 = -nm1[0]._mp_size;
        if (0 < nm1[0]._mp_size) {
          iVar6 = nm1[0]._mp_size;
        }
        nm1[0]._mp_size = iVar6;
        mVar16 = *nm1[0]._mp_d;
        *nm1[0]._mp_d = mVar16 - 1;
        bit_index = mpn_common_scan(mVar16 - 1,0,nm1[0]._mp_d,0,0);
        mpz_div_q_2exp(q,nm1,bit_index,GMP_DIV_TRUNC);
        y[0]._mp_d = (mp_limb_t *)&dummy_limb_35;
        y[0]._mp_alloc = (int)_LC35;
        y[0]._mp_size = _LC35._4_4_;
        pmVar8 = mpz_realloc(y,1);
        *pmVar8 = 2;
        iVar6 = gmp_millerrabin(n,nm1,y,q,bit_index);
        if (iVar6 != 0) {
          uVar18 = n->_mp_size;
          up = n->_mp_d;
          n_1[0]._mp_alloc = 0;
          uVar2 = -uVar18;
          if (0 < (int)uVar18) {
            uVar2 = uVar18;
          }
          local_ec = (uint)(uVar18 != 0) & (uint)*up;
          n_1[0]._mp_size = uVar2;
          n_1[0]._mp_d = up;
          if (local_ec == 0) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("mpz_odd_p (n)","lib/mini-gmp.c",0xddf,"gmp_stronglucas");
          }
          t[0]._mp_d = (mp_limb_t *)&dummy_limb_35;
          t[0]._mp_alloc = 0;
          t[0]._mp_size = 0;
          mpz_rootrem(y,t,n_1,2);
          iVar6 = t[0]._mp_size;
          if (t[0]._mp_alloc != 0) {
            (*gmp_free_func)(t[0]._mp_d,(long)t[0]._mp_alloc * 8);
          }
          if (iVar6 != 0) {
            local_108 = 0xffffffffffffffff;
            if (y[0]._mp_size == 1) {
              local_108 = *y[0]._mp_d - 1;
            }
            uVar17 = 3;
LAB_00108bd8:
            if (uVar17 < local_108) {
              uVar17 = uVar17 + 2;
              uVar9 = mpz_div_qr_ui((__mpz_struct *)0x0,(__mpz_struct *)0x0,n_1,uVar17,GMP_DIV_TRUNC
                                   );
              if (uVar9 != 0) {
                iVar6 = 0;
                uVar19 = uVar17 >> 1;
                for (uVar15 = -uVar9 & uVar9; uVar15 < 0x100000000000000; uVar15 = uVar15 << 8) {
                  iVar6 = iVar6 + 8;
                }
                for (; -1 < (long)uVar15; uVar15 = uVar15 * 2) {
                  iVar6 = iVar6 + 1;
                }
                uVar9 = uVar9 >> 1;
                uVar14 = 0x3f - iVar6;
                uVar18 = 0;
                do {
                  uVar15 = uVar9 >> ((byte)uVar14 & 0x3f);
                  uVar18 = ((uint)(uVar19 >> 1) ^ (uint)uVar19) & uVar14 ^ uVar18;
                  if (uVar15 < uVar19) {
                    if (uVar15 == 0) goto LAB_00108ce0;
                    uVar9 = uVar19 - uVar15;
                    uVar18 = (uint)uVar19 & (uint)uVar15 ^ uVar18;
                    uVar19 = uVar15;
                  }
                  else {
                    uVar9 = uVar15 - uVar19;
                    if (uVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                      __assert_fail("a != 0","lib/mini-gmp.c",0xd81,"gmp_jacobi_coprime");
                    }
                  }
                  iVar6 = 0;
                  for (uVar15 = -uVar9 & uVar9; uVar15 < 0x100000000000000; uVar15 = uVar15 << 8) {
                    iVar6 = iVar6 + 8;
                  }
                  for (; -1 < (long)uVar15; uVar15 = uVar15 * 2) {
                    iVar6 = iVar6 + 1;
                  }
                  uVar14 = 0x40 - iVar6;
                } while( true );
              }
              goto LAB_00108989;
            }
            uVar18 = (uint)(0 < reps + -0x18);
            goto LAB_00109120;
          }
        }
LAB_00108989:
        local_ec = 0;
        goto LAB_0010898c;
      }
    }
  }
  local_ec = 0;
  goto LAB_00108a01;
LAB_00108ce0:
  if ((uVar18 & 1) != 0) goto code_r0x00108ceb;
  goto LAB_00108bd8;
code_r0x00108ceb:
  uVar9 = *up;
  V[0]._0_8_ = V[0]._0_8_ & 0xffffffff00000000;
  V[0]._mp_d = (mp_limb_t *)&dummy_limb_35;
  mVar10 = mpn_common_scan(~uVar9,0,up,(long)(int)uVar2,0xffffffffffffffff);
  mVar16 = -(uVar17 >> 2);
  if ((uVar17 & 2) != 0) {
    mVar16 = (uVar17 >> 2) + 1;
  }
  if (mVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("b0 > 0","lib/mini-gmp.c",0xda1,"gmp_lucas_mod");
  }
  if ((uVar2 == 1) && ((uint)(4 < uVar9) - (uint)(uVar9 < 4) != 1)) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("mpz_cmp_ui (n, 4) > 0","lib/mini-gmp.c",0xda4,"gmp_lucas_mod");
  }
  local_ec = (uint)uVar9 & 1;
  if ((uVar9 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("mpz_odd_p (n)","lib/mini-gmp.c",0xda5,"gmp_lucas_mod");
  }
  U[0]._mp_d = (mp_limb_t *)&dummy_limb_35;
  U[0]._mp_alloc = (int)_LC35;
  U[0]._mp_size = _LC35._4_4_;
  pmVar8 = mpz_realloc(U,1);
  V[0]._mp_size = 1;
  *pmVar8 = 1;
  pmVar8 = mpz_realloc(V,1);
  *pmVar8 = 1;
  u = y;
  mpz_set_si(y,mVar16);
  mVar11 = up[(long)(int)uVar2 + -1];
  if (mVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    mpn_limb_size_in_base_2((mp_limb_t)u);
  }
  uVar17 = 0;
  for (; mVar11 < 0x100000000000000; mVar11 = mVar11 << 8) {
    uVar17 = (ulong)((int)uVar17 + 8);
  }
  for (; -1 < (long)mVar11; mVar11 = mVar11 * 2) {
    uVar17 = (ulong)((int)uVar17 + 1);
  }
  mVar11 = mVar16 * -2;
  for (uVar17 = ((long)(int)(uVar2 - 1) * 0x40 + 0x3e) - uVar17; mVar10 <= uVar17;
      uVar17 = uVar17 - 1) {
    mpz_mul(U,U,V);
    gmp_lucas_step_k_2k(V,y,n_1);
    if ((uVar17 == mVar10) || (iVar6 = mpz_tstbit(n_1,uVar17), iVar6 != 0)) {
      if ((long)mVar16 < 0) {
        t[0]._mp_d = (mp_limb_t *)&dummy_limb_35;
        t[0]._mp_alloc = (int)_LC35;
        t[0]._mp_size = _LC35._4_4_;
        pmVar8 = mpz_realloc(t,1);
        *pmVar8 = -mVar16;
        mpz_mul(y,y,t);
        if (t[0]._mp_alloc != 0) {
          (*gmp_free_func)(t[0]._mp_d,(long)t[0]._mp_alloc * 8);
        }
        mpz_set(y,y);
        y[0]._mp_size = -y[0]._mp_size;
      }
      else {
        t[0]._mp_alloc = 0;
        t[0]._mp_size = 0;
        t[0]._mp_d = (mp_limb_t *)&dummy_limb_35;
        if (mVar16 == 0) {
          mpz_mul(y,y,t);
        }
        else {
          t[0]._mp_alloc = 0;
          t[0]._mp_size = 1;
          pmVar8 = mpz_realloc(t,1);
          iVar6 = t[0]._mp_alloc;
          *pmVar8 = mVar16;
          mpz_mul(y,y,t);
          if (iVar6 != 0) {
            (*gmp_free_func)(t[0]._mp_d,(long)iVar6 * 8);
          }
        }
      }
      pmVar13 = U[0]._mp_d;
      uVar4 = U[0]._0_8_;
      uVar18 = SUB84(V[0]._0_8_,4);
      uVar14 = SUB84(U[0]._0_8_,4);
      U[0]._mp_alloc = V[0]._mp_alloc;
      U[0]._mp_size = V[0]._mp_size;
      uVar5 = U[0]._0_8_;
      U[0]._mp_d = V[0]._mp_d;
      V[0]._mp_d = pmVar13;
      U[0]._mp_alloc = (int)uVar4;
      U[0]._mp_size = SUB84(uVar4,4);
      V[0]._mp_alloc = U[0]._mp_alloc;
      V[0]._mp_size = U[0]._mp_size;
      U[0]._0_8_ = uVar5;
      if ((int)(uVar18 ^ uVar14) < 0) {
        mVar12 = mpz_abs_sub(U,U,V);
        uVar18 = (uint)mVar12;
      }
      else {
        mVar12 = mpz_abs_add(U,U,V);
        uVar18 = (uint)mVar12;
      }
      if ((long)U[0]._0_8_ < 0) {
        uVar18 = -uVar18;
      }
      U[0]._mp_size = uVar18;
      if (((uint)(uVar18 != 0) & (uint)*U[0]._mp_d) != 0) {
        if ((int)(uVar18 ^ uVar2) < 0) {
          mVar12 = mpz_abs_sub(U,U,n_1);
          iVar6 = (int)mVar12;
        }
        else {
          mVar12 = mpz_abs_add(U,U,n_1);
          iVar6 = (int)mVar12;
        }
        if ((long)U[0]._0_8_ < 0) {
          iVar6 = -iVar6;
        }
        U[0]._mp_size = iVar6;
      }
      mpz_div_q_2exp(U,U,1,GMP_DIV_TRUNC);
      if ((long)mVar11 < 0) {
        t[0]._mp_d = (mp_limb_t *)&dummy_limb_35;
        t[0]._mp_alloc = (int)_LC35;
        t[0]._mp_size = _LC35._4_4_;
        pmVar8 = mpz_realloc(t,1);
        *pmVar8 = mVar16 * 2;
        mpz_mul(V,V,t);
        if (t[0]._mp_alloc != 0) {
          (*gmp_free_func)(t[0]._mp_d,(long)t[0]._mp_alloc * 8);
        }
        mpz_set(V,V);
        uVar18 = -V[0]._mp_size;
        V[0]._mp_size = uVar18;
      }
      else {
        t[0]._mp_alloc = 0;
        t[0]._mp_size = 0;
        t[0]._mp_d = (mp_limb_t *)&dummy_limb_35;
        if (mVar11 == 0) {
          mpz_mul(V,V,t);
        }
        else {
          t[0]._mp_alloc = 0;
          t[0]._mp_size = 1;
          pmVar8 = mpz_realloc(t,1);
          iVar6 = t[0]._mp_alloc;
          *pmVar8 = mVar11;
          mpz_mul(V,V,t);
          if (iVar6 != 0) {
            (*gmp_free_func)(t[0]._mp_d,(long)iVar6 * 8);
          }
        }
        uVar18 = V[0]._mp_size;
      }
      uVar4 = U[0]._0_8_;
      if ((int)(uVar18 ^ U[0]._mp_size) < 0) {
        mVar12 = mpz_abs_sub(V,U,V);
        iVar6 = (int)mVar12;
      }
      else {
        mVar12 = mpz_abs_add(V,U,V);
        iVar6 = (int)mVar12;
      }
      if ((long)uVar4 < 0) {
        iVar6 = -iVar6;
      }
      V[0]._mp_size = iVar6;
      mpz_div_qr((__mpz_struct *)0x0,V,V,n_1,GMP_DIV_TRUNC);
    }
    mpz_div_qr((__mpz_struct *)0x0,U,U,n_1,GMP_DIV_TRUNC);
  }
  iVar6 = U[0]._mp_size;
  if (U[0]._mp_alloc != 0) {
    (*gmp_free_func)(U[0]._mp_d,(long)U[0]._mp_alloc * 8);
  }
  if (iVar6 == 0) {
  }
  else {
    while (V[0]._mp_size != 0) {
      mVar10 = mVar10 - 1;
      if (mVar10 == 0) {
        if (V[0]._mp_alloc == 0) goto LAB_00108989;
        local_ec = 0;
        uVar18 = 0;
        iVar6 = V[0]._mp_alloc;
        goto LAB_0010944e;
      }
      gmp_lucas_step_k_2k(V,y,n_1);
    }
  }
  uVar18 = (uint)(0 < reps + -0x18);
  iVar6 = V[0]._mp_alloc;
  if (V[0]._mp_alloc != 0) {
LAB_0010944e:
    (*gmp_free_func)(V[0]._mp_d,(long)iVar6 * 8);
  }
LAB_00109120:
  local_124 = reps + -0x18;
  if (uVar18 != 0) {
    lVar20 = 0;
    do {
      iVar6 = (int)lVar20;
      y[0]._mp_size = 1;
      pmVar13 = y[0]._mp_d;
      if (y[0]._mp_alloc < 1) {
        pmVar13 = mpz_realloc(y,1);
      }
      *pmVar13 = (lVar20 + 1) * lVar20 + 0x29;
      iVar7 = mpz_cmp(y,nm1);
      if (-1 < iVar7) {
        local_ec = uVar18;
        if (iVar6 < 0x1e) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("j >= 30","lib/mini-gmp.c",0xe5c,"mpz_probab_prime_p");
        }
        break;
      }
      uVar18 = gmp_millerrabin(n,nm1,y,q,bit_index);
      lVar20 = lVar20 + 1;
      local_ec = uVar18;
    } while ((iVar6 + 1 < local_124 & uVar18) != 0);
  }
LAB_0010898c:
  if (nm1[0]._mp_alloc != 0) {
    (*gmp_free_func)(pmVar3,(long)nm1[0]._mp_alloc * 8);
  }
  if (q[0]._mp_alloc != 0) {
    (*gmp_free_func)(q[0]._mp_d,(long)q[0]._mp_alloc * 8);
  }
  if (y[0]._mp_alloc != 0) {
    (*gmp_free_func)(y[0]._mp_d,(long)y[0]._mp_alloc * 8);
  }
LAB_00108a01:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_ec;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

void mpz_setbit(__mpz_struct *d,mp_bitcnt_t bit_index)

{
  int iVar1;
  
  iVar1 = mpz_tstbit(d,bit_index);
  if (iVar1 != 0) {
    return;
  }
  if (-1 < d->_mp_size) {
    mpz_abs_add_bit(d,bit_index);
    return;
  }
  mpz_abs_sub_bit(d,bit_index);
  return;
}



/* WARNING: Unknown calling convention */

void mpz_clrbit(__mpz_struct *d,mp_bitcnt_t bit_index)

{
  int iVar1;
  
  iVar1 = mpz_tstbit(d,bit_index);
  if (iVar1 == 0) {
    return;
  }
  if (-1 < d->_mp_size) {
    mpz_abs_sub_bit(d,bit_index);
    return;
  }
  mpz_abs_add_bit(d,bit_index);
  return;
}



/* WARNING: Unknown calling convention */

void mpz_combit(__mpz_struct *d,mp_bitcnt_t bit_index)

{
  uint uVar1;
  
  uVar1 = mpz_tstbit(d,bit_index);
  if (uVar1 != (uint)d->_mp_size >> 0x1f) {
    mpz_abs_sub_bit(d,bit_index);
    return;
  }
  mpz_abs_add_bit(d,bit_index);
  return;
}



/* WARNING: Unknown calling convention */

void mpz_com(__mpz_struct *r,__mpz_struct *u)

{
  long lVar1;
  mp_ptr pmVar2;
  mp_size_t mVar3;
  int iVar4;
  long in_FS_OFFSET;
  mpz_t bb;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  bb[0]._mp_d = (mp_limb_t *)&dummy_limb_35;
  bb[0]._0_8_ = _LC35;
  pmVar2 = mpz_realloc(bb,1);
  *pmVar2 = 1;
  if ((u->_mp_size ^ bb[0]._mp_size) < 0) {
    mVar3 = mpz_abs_sub(r,u,bb);
    iVar4 = (int)mVar3;
  }
  else {
    mVar3 = mpz_abs_add(r,u,bb);
    iVar4 = (int)mVar3;
  }
  if (u->_mp_size < 0) {
    iVar4 = -iVar4;
  }
  r->_mp_size = iVar4;
  if (bb[0]._mp_alloc != 0) {
    (*gmp_free_func)(bb[0]._mp_d,(long)bb[0]._mp_alloc << 3);
  }
  mpz_set(r,r);
  r->_mp_size = -r->_mp_size;
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

void mpz_and(__mpz_struct *r,__mpz_struct *u,__mpz_struct *v)

{
  uint uVar1;
  uint uVar2;
  mp_limb_t *pmVar3;
  mp_limb_t *pmVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  mp_limb_t mVar8;
  ulong uVar9;
  mp_ptr pmVar10;
  long lVar11;
  __mpz_struct *p_Var12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  int iVar19;
  long lVar21;
  ulong uVar22;
  long lVar20;
  
  iVar5 = u->_mp_size;
  iVar19 = -iVar5;
  if (0 < iVar5) {
    iVar19 = iVar5;
  }
  iVar5 = v->_mp_size;
  lVar21 = (long)iVar19;
  iVar19 = -iVar5;
  if (0 < iVar5) {
    iVar19 = iVar5;
  }
  lVar20 = (long)iVar19;
  p_Var12 = v;
  lVar11 = lVar20;
  if (lVar20 <= lVar21) {
    p_Var12 = u;
    u = v;
    lVar11 = lVar21;
    lVar21 = lVar20;
  }
  if (lVar21 == 0) {
    iVar5 = 0;
    goto LAB_0010987d;
  }
  uVar1 = p_Var12->_mp_size;
  uVar2 = u->_mp_size;
  uVar22 = (long)(int)uVar1 >> 0x3f;
  uVar9 = (ulong)(uVar2 >> 0x1f);
  uVar14 = (ulong)(long)(int)uVar1 >> 0x3f;
  uVar13 = (ulong)((uVar1 & uVar2) >> 0x1f);
  uVar17 = -uVar13;
  uVar18 = -uVar9;
  if (uVar18 == 0) {
    lVar11 = lVar21;
  }
  if ((long)r->_mp_alloc < (long)(uVar13 + lVar11)) {
    pmVar10 = mpz_realloc(r,uVar13 + lVar11);
  }
  else {
    pmVar10 = r->_mp_d;
  }
  pmVar3 = u->_mp_d;
  pmVar4 = p_Var12->_mp_d;
  lVar20 = 0;
  do {
    uVar6 = pmVar4[lVar20] ^ uVar22;
    uVar7 = uVar6 + uVar14;
    uVar15 = pmVar3[lVar20] ^ uVar18;
    uVar16 = uVar15 + uVar9;
    uVar14 = (ulong)CARRY8(uVar6,uVar14);
    uVar9 = (ulong)CARRY8(uVar15,uVar9);
    uVar6 = uVar7 & uVar16 ^ uVar17;
    mVar8 = uVar6 + uVar13;
    uVar13 = (ulong)CARRY8(uVar6,uVar13);
    pmVar10[lVar20] = mVar8;
    lVar20 = lVar20 + 1;
  } while (lVar21 != lVar20);
  if (uVar9 != 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("vc == 0","lib/mini-gmp.c",0xf3d,"mpz_and");
  }
  if (lVar21 < lVar11) {
    do {
      uVar18 = pmVar4[lVar20] ^ uVar22;
      uVar9 = uVar18 + uVar14;
      if (-1 < (int)uVar2) {
        uVar9 = 0;
      }
      uVar14 = (ulong)CARRY8(uVar18,uVar14);
      mVar8 = (uVar9 ^ uVar17) + uVar13;
      uVar13 = (ulong)CARRY8(uVar9 ^ uVar17,uVar13);
      pmVar10[lVar20] = mVar8;
      lVar20 = lVar20 + 1;
    } while (lVar11 != lVar20);
    if (uVar13 != 0) goto LAB_00109867;
    do {
      if (pmVar10[lVar11 + -1] != 0) goto LAB_00109873;
      lVar11 = lVar11 + -1;
joined_r0x001098ec:
    } while (lVar11 != 0);
    lVar11 = 0;
  }
  else {
    if (uVar13 == 0) goto joined_r0x001098ec;
LAB_00109867:
    pmVar10[lVar11] = 1;
    lVar11 = lVar11 + 1;
  }
LAB_00109873:
  iVar5 = (int)lVar11;
  if (uVar17 != 0) {
    iVar5 = -(int)lVar11;
  }
LAB_0010987d:
  r->_mp_size = iVar5;
  return;
}



/* WARNING: Unknown calling convention */

void mpz_ior(__mpz_struct *r,__mpz_struct *u,__mpz_struct *v)

{
  uint uVar1;
  mp_limb_t *pmVar2;
  mp_limb_t *pmVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  mp_limb_t mVar7;
  mp_ptr pmVar8;
  __mpz_struct *x;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  int iVar18;
  ulong uVar20;
  long lVar19;
  
  iVar4 = u->_mp_size;
  iVar18 = -iVar4;
  if (0 < iVar4) {
    iVar18 = iVar4;
  }
  iVar4 = v->_mp_size;
  lVar13 = (long)iVar18;
  iVar18 = -iVar4;
  if (0 < iVar4) {
    iVar18 = iVar4;
  }
  lVar19 = (long)iVar18;
  x = v;
  lVar14 = lVar13;
  if (lVar19 <= lVar13) {
    x = u;
    lVar14 = lVar19;
    u = v;
    lVar19 = lVar13;
  }
  if (lVar14 == 0) {
    mpz_set(r,x);
    return;
  }
  uVar1 = x->_mp_size;
  uVar17 = (ulong)u->_mp_size;
  uVar20 = (long)(int)uVar1 >> 0x3f;
  uVar10 = (ulong)(long)(int)uVar1 >> 0x3f;
  uVar16 = uVar17 >> 0x3f;
  uVar9 = (ulong)((uVar1 | u->_mp_size) >> 0x1f);
  uVar15 = -uVar9;
  if ((long)uVar17 < 0) {
    lVar19 = lVar14;
  }
  if ((long)r->_mp_alloc < (long)(uVar9 + lVar19)) {
    pmVar8 = mpz_realloc(r,uVar9 + lVar19);
  }
  else {
    pmVar8 = r->_mp_d;
  }
  pmVar2 = u->_mp_d;
  pmVar3 = x->_mp_d;
  lVar13 = 0;
  do {
    uVar5 = pmVar3[lVar13] ^ uVar20;
    uVar6 = uVar5 + uVar10;
    uVar11 = pmVar2[lVar13] ^ (long)uVar17 >> 0x3f;
    uVar12 = uVar11 + uVar16;
    uVar10 = (ulong)CARRY8(uVar5,uVar10);
    uVar16 = (ulong)CARRY8(uVar11,uVar16);
    uVar5 = (uVar6 | uVar12) ^ uVar15;
    mVar7 = uVar5 + uVar9;
    uVar9 = (ulong)CARRY8(uVar5,uVar9);
    pmVar8[lVar13] = mVar7;
    lVar13 = lVar13 + 1;
  } while (lVar14 != lVar13);
  if (uVar16 != 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("vc == 0","lib/mini-gmp.c",0xf86,"mpz_ior");
  }
  if (lVar14 < lVar19) {
    do {
      uVar16 = pmVar3[lVar13] ^ uVar20;
      uVar5 = (uVar16 + uVar10 | (long)uVar17 >> 0x3f) ^ uVar15;
      uVar10 = (ulong)CARRY8(uVar16,uVar10);
      mVar7 = uVar5 + uVar9;
      uVar9 = (ulong)CARRY8(uVar5,uVar9);
      pmVar8[lVar13] = mVar7;
      lVar13 = lVar13 + 1;
    } while (lVar19 != lVar13);
    if (uVar9 != 0) {
LAB_00109ab8:
      pmVar8[lVar19] = 1;
      lVar19 = lVar19 + 1;
      goto LAB_00109ac4;
    }
  }
  else {
    if (uVar9 != 0) goto LAB_00109ab8;
    if (lVar19 == 0) {
      lVar19 = 0;
      goto LAB_00109ac4;
    }
  }
  do {
    if (pmVar8[lVar19 + -1] != 0) goto LAB_00109ac4;
    lVar19 = lVar19 + -1;
  } while (lVar19 != 0);
  lVar19 = 0;
LAB_00109ac4:
  iVar4 = (int)lVar19;
  if (uVar15 != 0) {
    iVar4 = -(int)lVar19;
  }
  r->_mp_size = iVar4;
  return;
}



/* WARNING: Unknown calling convention */

void mpz_xor(__mpz_struct *r,__mpz_struct *u,__mpz_struct *v)

{
  uint uVar1;
  uint uVar2;
  mp_limb_t *pmVar3;
  mp_limb_t *pmVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  mp_limb_t mVar8;
  long lVar9;
  mp_ptr pmVar10;
  __mpz_struct *x;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  int iVar18;
  long lVar20;
  long lVar19;
  
  iVar5 = u->_mp_size;
  iVar18 = -iVar5;
  if (0 < iVar5) {
    iVar18 = iVar5;
  }
  iVar5 = v->_mp_size;
  lVar20 = (long)iVar18;
  iVar18 = -iVar5;
  if (0 < iVar5) {
    iVar18 = iVar5;
  }
  lVar19 = (long)iVar18;
  x = v;
  lVar9 = lVar19;
  if (lVar19 <= lVar20) {
    x = u;
    u = v;
    lVar9 = lVar20;
    lVar20 = lVar19;
  }
  if (lVar20 == 0) {
    mpz_set(r,x);
    return;
  }
  uVar1 = x->_mp_size;
  uVar2 = u->_mp_size;
  uVar16 = (long)(int)uVar1 >> 0x3f;
  uVar12 = (ulong)(long)(int)uVar1 >> 0x3f;
  uVar17 = (ulong)(long)(int)uVar2 >> 0x3f;
  uVar11 = (ulong)((uVar1 ^ uVar2) >> 0x1f);
  uVar15 = -uVar11;
  if ((long)r->_mp_alloc < (long)(uVar11 + lVar9)) {
    pmVar10 = mpz_realloc(r,uVar11 + lVar9);
  }
  else {
    pmVar10 = r->_mp_d;
  }
  pmVar3 = u->_mp_d;
  pmVar4 = x->_mp_d;
  lVar19 = 0;
  do {
    uVar6 = pmVar4[lVar19] ^ uVar16;
    uVar7 = uVar6 + uVar12;
    uVar13 = pmVar3[lVar19] ^ (long)(int)uVar2 >> 0x3f;
    uVar14 = uVar13 + uVar17;
    uVar12 = (ulong)CARRY8(uVar6,uVar12);
    uVar17 = (ulong)CARRY8(uVar13,uVar17);
    uVar6 = uVar7 ^ uVar14 ^ uVar15;
    mVar8 = uVar6 + uVar11;
    uVar11 = (ulong)CARRY8(uVar6,uVar11);
    pmVar10[lVar19] = mVar8;
    lVar19 = lVar19 + 1;
  } while (lVar20 != lVar19);
  if (uVar17 != 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("vc == 0","lib/mini-gmp.c",0xfcb,"mpz_xor");
  }
  if (lVar20 < lVar9) {
    do {
      uVar17 = pmVar4[lVar19] ^ uVar16;
      uVar6 = uVar17 + uVar12 ^ uVar16;
      mVar8 = uVar6 + uVar11;
      uVar12 = (ulong)CARRY8(uVar17,uVar12);
      uVar11 = (ulong)CARRY8(uVar6,uVar11);
      pmVar10[lVar19] = mVar8;
      lVar19 = lVar19 + 1;
    } while (lVar9 != lVar19);
    if (uVar11 != 0) {
LAB_00109cf8:
      pmVar10[lVar9] = 1;
      lVar9 = lVar9 + 1;
      goto LAB_00109d04;
    }
  }
  else {
    if (uVar11 != 0) goto LAB_00109cf8;
    if (lVar9 == 0) {
      lVar9 = 0;
      goto LAB_00109d04;
    }
  }
  do {
    if (pmVar10[lVar9 + -1] != 0) goto LAB_00109d04;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  lVar9 = 0;
LAB_00109d04:
  iVar5 = (int)lVar9;
  if (uVar15 != 0) {
    iVar5 = -(int)lVar9;
  }
  r->_mp_size = iVar5;
  return;
}



/* WARNING: Unknown calling convention */

mp_bitcnt_t mpn_popcount(mp_srcptr p,mp_size_t n)

{
  ulong *puVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  mp_bitcnt_t mVar5;
  
  if (0 < n) {
    puVar1 = p + n;
    mVar5 = 0;
    do {
      uVar2 = *p;
      if (uVar2 != 0) {
        uVar4 = 0;
        do {
          uVar3 = (int)uVar2 - ((uint)(uVar2 >> 1) & 0x5555);
          uVar3 = (uVar3 >> 2 & 0x3333) + (uVar3 & 0x3333);
          uVar3 = uVar3 + (uVar3 >> 4);
          uVar4 = (ulong)((int)uVar4 + (uVar3 & 0xf) + (uVar3 >> 8 & 0xf));
          uVar2 = uVar2 >> 0x10;
        } while (uVar2 != 0);
        mVar5 = mVar5 + uVar4;
      }
      p = p + 1;
    } while (puVar1 != p);
    return mVar5;
  }
  return 0;
}



/* WARNING: Unknown calling convention */

mp_bitcnt_t mpz_popcount(__mpz_struct *u)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  ulong *puVar6;
  mp_bitcnt_t mVar7;
  
  lVar2 = (long)u->_mp_size;
  mVar7 = 0xffffffffffffffff;
  if (-1 < lVar2) {
    puVar6 = u->_mp_d;
    if (lVar2 == 0) {
      mVar7 = 0;
    }
    else {
      puVar1 = puVar6 + lVar2;
      mVar7 = 0;
      do {
        uVar3 = *puVar6;
        if (uVar3 != 0) {
          uVar5 = 0;
          do {
            uVar4 = (int)uVar3 - ((uint)(uVar3 >> 1) & 0x5555);
            uVar4 = (uVar4 >> 2 & 0x3333) + (uVar4 & 0x3333);
            uVar4 = uVar4 + (uVar4 >> 4);
            uVar5 = (ulong)((int)uVar5 + (uVar4 & 0xf) + (uVar4 >> 8 & 0xf));
            uVar3 = uVar3 >> 0x10;
          } while (uVar3 != 0);
          mVar7 = mVar7 + uVar5;
        }
        puVar6 = puVar6 + 1;
      } while (puVar1 != puVar6);
    }
  }
  return mVar7;
}



/* WARNING: Unknown calling convention */

mp_bitcnt_t mpz_hamdist(__mpz_struct *u,__mpz_struct *v)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  mp_limb_t *pmVar6;
  mp_limb_t *pmVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  mp_bitcnt_t mVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  
  lVar12 = (long)u->_mp_size;
  lVar14 = (long)v->_mp_size;
  if ((u->_mp_size ^ v->_mp_size) < 0) {
    return 0xffffffffffffffff;
  }
  uVar10 = lVar12 >> 0x3f;
  if (lVar12 < 0) {
    if (-1 < lVar14) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("vn < 0","lib/mini-gmp.c",0x101e,"mpz_hamdist");
    }
    pmVar7 = v->_mp_d;
    lVar5 = -lVar12;
    if (lVar14 < lVar12) {
      uVar3 = 1;
      uVar8 = 1;
      pmVar6 = pmVar7;
      pmVar7 = u->_mp_d;
      lVar13 = lVar5;
      lVar5 = -lVar14;
    }
    else {
      uVar3 = 1;
      uVar8 = 1;
      pmVar6 = u->_mp_d;
      lVar13 = -lVar14;
    }
  }
  else {
    pmVar6 = v->_mp_d;
    pmVar7 = u->_mp_d;
    lVar13 = lVar12;
    lVar5 = lVar14;
    if (lVar14 <= lVar12) {
      pmVar6 = u->_mp_d;
      pmVar7 = v->_mp_d;
      lVar13 = lVar14;
      lVar5 = lVar12;
    }
    if (lVar13 < 1) {
      mVar11 = 0;
      uVar8 = 0;
      lVar13 = 0;
      goto LAB_00109fd2;
    }
    uVar3 = 0;
    uVar8 = 0;
  }
  mVar11 = 0;
  lVar12 = 0;
  do {
    uVar1 = (pmVar6[lVar12] ^ uVar10) + uVar8;
    uVar8 = (ulong)CARRY8(pmVar6[lVar12] ^ uVar10,uVar8);
    uVar2 = (pmVar7[lVar12] ^ uVar10) + uVar3;
    uVar4 = uVar1 ^ uVar2;
    uVar3 = (ulong)CARRY8(pmVar7[lVar12] ^ uVar10,uVar3);
    if (uVar1 != uVar2) {
      uVar1 = 0;
      do {
        uVar15 = (int)uVar4 - ((uint)(uVar4 >> 1) & 0x5555);
        uVar15 = (uVar15 >> 2 & 0x3333) + (uVar15 & 0x3333);
        uVar15 = uVar15 + (uVar15 >> 4);
        uVar1 = (ulong)((int)uVar1 + (uVar15 & 0xf) + (uVar15 >> 8 & 0xf));
        uVar4 = uVar4 >> 0x10;
      } while (uVar4 != 0);
      mVar11 = mVar11 + uVar1;
    }
    lVar12 = lVar12 + 1;
  } while (lVar12 != lVar13);
  if (uVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("vc == 0","lib/mini-gmp.c",0x1033,"mpz_hamdist");
  }
LAB_00109fd2:
  if (lVar13 < lVar5) {
    puVar9 = pmVar6 + lVar13;
    do {
      uVar3 = (*puVar9 ^ uVar10) + uVar8;
      uVar1 = uVar10 ^ uVar3;
      uVar8 = (ulong)CARRY8(*puVar9 ^ uVar10,uVar8);
      if (uVar10 != uVar3) {
        uVar3 = 0;
        do {
          uVar15 = (int)uVar1 - ((uint)(uVar1 >> 1) & 0x5555);
          uVar15 = (uVar15 >> 2 & 0x3333) + (uVar15 & 0x3333);
          uVar15 = uVar15 + (uVar15 >> 4);
          uVar3 = (ulong)((int)uVar3 + (uVar15 & 0xf) + (uVar15 >> 8 & 0xf));
          uVar1 = uVar1 >> 0x10;
        } while (uVar1 != 0);
        mVar11 = mVar11 + uVar3;
      }
      puVar9 = puVar9 + 1;
    } while (pmVar6 + lVar5 != puVar9);
  }
  return mVar11;
}



/* WARNING: Unknown calling convention */

mp_bitcnt_t mpz_scan1(__mpz_struct *u,mp_bitcnt_t starting_bit)

{
  uint uVar1;
  mp_srcptr up;
  uint uVar2;
  mp_bitcnt_t mVar3;
  ulong uVar4;
  ulong i;
  ulong limb;
  bool bVar5;
  
  uVar1 = u->_mp_size;
  uVar2 = uVar1;
  if ((int)uVar1 < 1) {
    uVar2 = -uVar1;
  }
  i = starting_bit >> 6;
  if (uVar2 <= i) {
    mVar3 = 0xffffffffffffffff;
    if ((int)uVar1 < 0) {
      mVar3 = starting_bit;
    }
    return mVar3;
  }
  up = u->_mp_d;
  limb = up[i];
  mVar3 = starting_bit;
  if (starting_bit != 0) {
    mVar3 = 0;
    uVar4 = i;
    if ((int)uVar1 < 0) {
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        if (up[uVar4 - 1] != 0) {
          uVar4 = 0;
          goto LAB_0010a1a0;
        }
      }
      uVar4 = 1;
LAB_0010a1a0:
      bVar5 = uVar4 <= limb;
      limb = (uVar4 - limb) - 1;
      mVar3 = -(ulong)bVar5;
    }
    limb = limb & -1L << ((byte)starting_bit & 0x3f);
  }
  mVar3 = mpn_common_scan(limb,i,up,(ulong)uVar2,mVar3);
  return mVar3;
}



/* WARNING: Unknown calling convention */

mp_bitcnt_t mpz_scan0(__mpz_struct *u,mp_bitcnt_t starting_bit)

{
  uint uVar1;
  mp_srcptr up;
  uint uVar2;
  ulong uVar3;
  mp_bitcnt_t mVar4;
  long lVar5;
  ulong uVar6;
  ulong i;
  ulong uVar7;
  
  uVar1 = u->_mp_size;
  uVar6 = (ulong)(int)uVar1;
  uVar2 = -uVar1;
  if (0 < (int)uVar1) {
    uVar2 = uVar1;
  }
  i = starting_bit >> 6;
  if (uVar2 <= i) {
    mVar4 = 0xffffffffffffffff;
    if (-1 < (long)uVar6) {
      mVar4 = starting_bit;
    }
    return mVar4;
  }
  up = u->_mp_d;
  uVar7 = up[i] ^ (long)~uVar6 >> 0x3f;
  uVar3 = i;
  if ((long)uVar6 < 0) {
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      if (up[uVar3 - 1] != 0) {
        lVar5 = 0;
        goto LAB_0010a228;
      }
    }
    lVar5 = 1;
LAB_0010a228:
    uVar7 = uVar7 - lVar5;
  }
  mVar4 = mpn_common_scan(-1L << ((byte)starting_bit & 0x3f) & uVar7,i,up,(ulong)uVar2,
                          (long)~uVar6 >> 0x3f);
  return mVar4;
}



/* WARNING: Unknown calling convention */

size_t mpz_sizeinbase(__mpz_struct *u,int base)

{
  size_t sVar1;
  int iVar2;
  long lVar3;
  mp_limb_t *pmVar4;
  ulong uVar5;
  mp_ptr qp;
  long lVar6;
  ulong uVar7;
  size_t sVar8;
  int iVar9;
  long in_FS_OFFSET;
  gmp_div_inverse bi;
  long nn;
  
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  if (base < 2) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("base >= 2","lib/mini-gmp.c",0x108e,"mpz_sizeinbase");
  }
  if (base < 0x3f) {
    iVar2 = u->_mp_size;
    sVar8 = 1;
    if (iVar2 != 0) {
      pmVar4 = u->_mp_d;
      iVar9 = -iVar2;
      if (0 < iVar2) {
        iVar9 = iVar2;
      }
      nn = (long)iVar9;
      sVar1 = nn * 8;
      uVar5 = pmVar4[nn + -1];
      if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        mpn_limb_size_in_base_2((mp_limb_t)u);
      }
      uVar7 = 0;
      for (; uVar5 < 0x100000000000000; uVar5 = uVar5 << 8) {
        uVar7 = (ulong)((int)uVar7 + 8);
      }
      for (; -1 < (long)uVar5; uVar5 = uVar5 * 2) {
        uVar7 = (ulong)((int)uVar7 + 1);
      }
      sVar8 = nn * 0x40 - uVar7;
      switch(base) {
      default:
        qp = (mp_ptr)(*gmp_allocate_func)(sVar1);
        lVar6 = 0;
        do {
          qp[lVar6] = pmVar4[lVar6];
          lVar6 = lVar6 + 1;
        } while (lVar6 < nn);
        bi.shift = 0;
        uVar5 = (long)base;
        do {
          uVar5 = uVar5 << 8;
          bi.shift = bi.shift + 8;
        } while (uVar5 < 0x100000000000000);
        do {
          bi.shift = bi.shift + 1;
          uVar5 = uVar5 * 2;
        } while (-1 < (long)uVar5);
        bi.d1 = (long)base << ((byte)bi.shift & 0x3f);
        sVar8 = 0;
        bi.di = mpn_invert_3by2(bi.d1,0);
        do {
          mpn_div_qr_1_preinv(qp,qp,nn,&bi);
          sVar8 = sVar8 + 1;
          nn = nn - (ulong)(qp[nn + -1] == 0);
        } while (nn != 0);
        (*gmp_free_func)(qp,sVar1);
        break;
      case 2:
        break;
      case 4:
        sVar8 = sVar8 + 1 >> 1;
        break;
      case 8:
        sVar8 = (sVar8 + 2) / 3;
        break;
      case 0x10:
        sVar8 = sVar8 + 3 >> 2;
        break;
      case 0x20:
        sVar8 = (sVar8 + 4) / 5;
      }
    }
    if (lVar3 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return sVar8;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("base <= 62","lib/mini-gmp.c",0x108f,"mpz_sizeinbase");
}



/* WARNING: Unknown calling convention */

char * mpz_get_str(char *sp,int base,__mpz_struct *u)

{
  int iVar1;
  long lVar2;
  mp_limb_t *pmVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint bits;
  size_t sVar7;
  mp_ptr up;
  long lVar8;
  ulong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  size_t sVar12;
  int iVar13;
  uchar *sp_00;
  char *pcVar14;
  long in_FS_OFFSET;
  ulong local_78;
  mpn_base_info info;
  long un;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if (base < 2) {
    if (-2 < base) {
      pcVar14 = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
      base = 10;
      goto LAB_0010a50d;
    }
    bVar4 = -0x25 < base;
    base = -base;
    if (bVar4) goto LAB_0010a506;
LAB_0010a690:
    sp = (char *)0x0;
  }
  else {
    if (base < 0x25) {
      pcVar14 = "0123456789abcdefghijklmnopqrstuvwxyz";
    }
    else {
      if (0x3e < base) goto LAB_0010a690;
LAB_0010a506:
      pcVar14 = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    }
LAB_0010a50d:
    sVar12 = 0;
    sVar7 = mpz_sizeinbase(u,base);
    if (sp == (char *)0x0) {
      sVar12 = sVar7 + 2;
      sp = (char *)(*gmp_allocate_func)(sVar12);
    }
    iVar1 = u->_mp_size;
    if (iVar1 == 0) {
      *sp = '0';
      uVar9 = 1;
    }
    else {
      sp_00 = (uchar *)sp;
      if (iVar1 < 0) {
        *sp = '-';
        sp_00 = (uchar *)sp + 1;
      }
      local_78 = (ulong)(iVar1 < 0);
      iVar13 = -iVar1;
      if (0 < iVar1) {
        iVar13 = iVar1;
      }
      un = (long)iVar13;
      bits = mpn_base_power_of_two_p(base);
      if (bits == 0) {
        uVar9 = (ulong)base;
        info.exp = 1;
        info.bb = uVar9;
        do {
          info.bb = info.bb * uVar9;
          info.exp = info.exp + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = uVar9;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = info.bb;
        } while (SUB168(auVar5 * auVar6,8) == 0);
        up = (mp_ptr)(*gmp_allocate_func)(un * 8);
        pmVar3 = u->_mp_d;
        lVar8 = 0;
        do {
          up[lVar8] = pmVar3[lVar8];
          lVar8 = lVar8 + 1;
        } while (lVar8 < un);
        sVar7 = mpn_get_str_other(sp_00,base,&info,up,un);
        (*gmp_free_func)(up,un * 8);
      }
      else {
        sVar7 = mpn_get_str_bits(sp_00,bits,u->_mp_d,un);
      }
      uVar9 = sVar7 + local_78;
      pbVar10 = (uchar *)sp + local_78;
      if (local_78 < uVar9) {
        do {
          pbVar11 = pbVar10 + 1;
          *pbVar10 = pcVar14[*pbVar10];
          pbVar10 = pbVar11;
        } while ((uchar *)sp + uVar9 != pbVar11);
      }
    }
    ((uchar *)sp)[uVar9] = '\0';
    if ((sVar12 != 0) && (uVar9 + 1 != sVar12)) {
      if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010a684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pcVar14 = (char *)(*gmp_reallocate_func)(sp,sVar12,uVar9 + 1);
        return pcVar14;
      }
      goto LAB_0010a745;
    }
  }
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (char *)(uchar *)sp;
  }
LAB_0010a745:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

int mpz_set_str(__mpz_struct *r,char *sp,int base)

{
  int iVar1;
  
  if ((0x3c < base - 2U) && (base != 0)) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("base == 0 || (base >= 2 && base <= 62)","lib/mini-gmp.c",0x110f,"mpz_set_str");
  }
  iVar1 = mpz_set_str(r,sp,base);
  return iVar1;
}



/* WARNING: Unknown calling convention */

int mpz_init_set_str(__mpz_struct *r,char *sp,int base)

{
  int iVar1;
  
  r->_mp_alloc = 0;
  r->_mp_size = 0;
  r->_mp_d = (mp_limb_t *)&dummy_limb_35;
  if ((0x3c < base - 2U) && (base != 0)) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("base == 0 || (base >= 2 && base <= 62)","lib/mini-gmp.c",0x110f,"mpz_set_str");
  }
  iVar1 = mpz_set_str(r,sp,base);
  return iVar1;
}



/* WARNING: Unknown calling convention */

size_t mpz_out_str(FILE *stream,int base,__mpz_struct *x)

{
  char *__s;
  size_t __n;
  size_t sVar1;
  
  sVar1 = 0;
  __s = mpz_get_str((char *)0x0,base,x);
  if (__s != (char *)0x0) {
    __n = strlen(__s);
    sVar1 = fwrite(__s,1,__n,(FILE *)stream);
    (*gmp_free_func)(__s,__n + 1);
  }
  return sVar1;
}



/* WARNING: Unknown calling convention */

void mpz_import(__mpz_struct *r,size_t count,int order,size_t size,int endian,size_t nails,void *src
               )

{
  char cVar1;
  int iVar2;
  ulong size_00;
  long lVar3;
  mp_ptr pmVar4;
  byte *pbVar5;
  size_t sVar6;
  mp_limb_t mVar7;
  long lVar8;
  long lVar9;
  
  if (nails != 0) {
                    /* WARNING: Subroutine does not return */
    gmp_die("mpz_import: Nails not supported.");
  }
  if ((order + 1U & 0xfffffffd) != 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("order == 1 || order == -1","lib/mini-gmp.c",0x11a3,"mpz_import");
  }
  if (2 < endian + 1U) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("endian >= -1 && endian <= 1","lib/mini-gmp.c",0x11a4,"mpz_import");
  }
  if (endian == 0) {
    if (order == -1) {
      iVar2 = -1;
      lVar9 = 0;
    }
    else {
      iVar2 = -1;
      lVar9 = size * -2;
      src = (void *)((long)src + (count - 1) * size);
    }
  }
  else {
    lVar9 = size * 2;
    if (order == endian) {
      lVar9 = 0;
    }
    if (order == 1) {
      lVar9 = -lVar9;
      src = (void *)((long)src + (count - 1) * size);
    }
    if (endian == 1) {
      src = (void *)((long)src + (size - 1));
      iVar2 = 1;
    }
    else {
      iVar2 = -1;
    }
  }
  size_00 = size * count + 7 >> 3;
  if ((long)r->_mp_alloc < (long)size_00) {
    pmVar4 = mpz_realloc(r,size_00);
  }
  else {
    pmVar4 = r->_mp_d;
  }
  if (count != 0) {
    lVar3 = 0;
    mVar7 = 0;
    lVar8 = 0;
    do {
      sVar6 = 0;
      pbVar5 = (byte *)src;
      if (size != 0) {
        do {
          cVar1 = (char)lVar3;
          lVar3 = lVar3 + 1;
          mVar7 = mVar7 | (ulong)*pbVar5 << (cVar1 * '\b' & 0x3fU);
          if (lVar3 == 8) {
            pmVar4[lVar8] = mVar7;
            lVar3 = 0;
            lVar8 = lVar8 + 1;
            mVar7 = 0;
          }
          sVar6 = sVar6 + 1;
          pbVar5 = pbVar5 + -(long)iVar2;
        } while (size != sVar6);
        src = (void *)((long)src + size * -(long)iVar2);
      }
      src = (void *)((long)src + lVar9);
      count = count - 1;
    } while (count != 0);
    if ((lVar8 + 1) - (ulong)(lVar3 == 0) != size_00) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("i + (bytes > 0) == rn","lib/mini-gmp.c",0x11ca,"mpz_import");
    }
    if (mVar7 != 0) {
      pmVar4[lVar8] = mVar7;
      iVar2 = (int)lVar8 + 1;
      goto LAB_0010a96c;
    }
    if (lVar8 < 1) {
LAB_0010a9be:
      iVar2 = (int)lVar8;
      goto LAB_0010a96c;
    }
    do {
      if (pmVar4[lVar8 + -1] != 0) goto LAB_0010a9be;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  iVar2 = 0;
LAB_0010a96c:
  r->_mp_size = iVar2;
  return;
}



/* WARNING: Unknown calling convention */

void * mpz_export(void *r,size_t *countp,int order,size_t size,int endian,size_t nails,
                 __mpz_struct *u)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  size_t sVar6;
  undefined1 *puVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  undefined1 *puVar13;
  ulong uVar14;
  
  if (nails != 0) {
                    /* WARNING: Subroutine does not return */
    gmp_die("mpz_export: Nails not supported.");
  }
  if ((order + 1U & 0xfffffffd) != 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("order == 1 || order == -1","lib/mini-gmp.c",0x11dd,"mpz_export");
  }
  if (2 < endian + 1U) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("endian >= -1 && endian <= 1","lib/mini-gmp.c",0x11de,"mpz_export");
  }
  uVar2 = u->_mp_size;
  if (size == 0) {
    uVar4 = 0;
    if (uVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("size > 0 || u->_mp_size == 0","lib/mini-gmp.c",0x11df,"mpz_export");
    }
  }
  else {
    if (uVar2 != 0) {
      uVar3 = -uVar2;
      if (0 < (int)uVar2) {
        uVar3 = uVar2;
      }
      uVar14 = (ulong)uVar3;
      uVar4 = u->_mp_d[uVar14 - 1];
      lVar12 = 0;
      if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("limb != 0","lib/mini-gmp.c",0x11f3,"mpz_export");
      }
      do {
        lVar12 = lVar12 + 1;
        uVar4 = uVar4 >> 8;
      } while (uVar4 != 0);
      uVar1 = lVar12 + (size - 1) + -8 + uVar14 * 8;
      uVar5 = uVar1 / size;
      if (r == (void *)0x0) {
        r = (*gmp_allocate_func)(size * uVar5);
      }
      puVar13 = (undefined1 *)r;
      if (endian == 0) {
        if (order == -1) {
          iVar10 = -1;
          lVar12 = 0;
        }
        else {
          iVar10 = -1;
          lVar12 = size * -2;
          puVar13 = (undefined1 *)((long)r + (uVar5 - 1) * size);
        }
      }
      else {
        lVar12 = size * 2;
        if (order == endian) {
          lVar12 = 0;
        }
        if (order == 1) {
          lVar12 = -lVar12;
          puVar13 = (undefined1 *)((long)r + (uVar5 - 1) * size);
        }
        if (endian == 1) {
          puVar13 = puVar13 + (size - 1);
          iVar10 = 1;
        }
        else {
          iVar10 = -1;
        }
      }
      if (size <= uVar1) {
        lVar8 = 0;
        uVar9 = 0;
        uVar11 = 0;
        uVar4 = 0;
        do {
          sVar6 = 0;
          puVar7 = puVar13;
          do {
            if (lVar8 == 0) {
              lVar8 = 7;
              if ((long)uVar9 < (long)uVar14) {
                uVar4 = u->_mp_d[uVar9];
                uVar9 = uVar9 + 1;
              }
            }
            else {
              lVar8 = lVar8 + -1;
            }
            sVar6 = sVar6 + 1;
            *puVar7 = (char)uVar4;
            uVar4 = uVar4 >> 8;
            puVar7 = puVar7 + -(long)iVar10;
          } while (size != sVar6);
          uVar11 = uVar11 + 1;
          puVar13 = puVar13 + (lVar12 - (long)iVar10 * size);
        } while (uVar11 < uVar5);
        uVar4 = 1;
        if (size <= uVar1) {
          uVar4 = uVar5;
        }
        if (uVar9 == uVar14) {
          if (uVar4 != uVar5) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("k == count","lib/mini-gmp.c",0x1233,"mpz_export");
          }
          goto LAB_0010aae6;
        }
      }
                    /* WARNING: Subroutine does not return */
      __assert_fail("i == un","lib/mini-gmp.c",0x1232,"mpz_export");
    }
    uVar4 = 0;
  }
LAB_0010aae6:
  if (countp != (size_t *)0x0) {
    *countp = uVar4;
  }
  return (undefined1 *)r;
}


