
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void mpq_canonical_sign(__mpq_struct *r)

{
  __fprintf_chk(_stderr,2,&_LC1,"mpq: Fraction with zero denominator.");
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention */

void mpq_helper_canonicalize(__mpq_struct *r,__mpz_struct *num,__mpz_struct *den)

{
  __mpz_struct *p_Var1;
  int iVar2;
  long lVar3;
  __mpq_struct *r_00;
  long in_FS_OFFSET;
  mpz_t g;
  
  r_00 = (__mpq_struct *)g;
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  if (num->_mp_size == 0) {
    mpz_set_ui(r,0);
    if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
      mpz_set_ui(&r->_mp_den,1);
      return;
    }
  }
  else {
    mpz_init(g);
    mpz_gcd(g,num,den);
    mpz_tdiv_q(r,num,g);
    p_Var1 = &r->_mp_den;
    mpz_tdiv_q(p_Var1,den,g);
    mpz_clear();
    iVar2 = (r->_mp_den)._mp_size;
    if (iVar2 < 1) {
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        mpq_canonical_sign(r_00);
      }
      mpz_neg(p_Var1,p_Var1);
      mpz_neg(r,r);
    }
    if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

void mpq_init(__mpq_struct *x)

{
  mpz_init();
  mpz_init_set_ui(&x->_mp_den,1);
  return;
}



/* WARNING: Unknown calling convention */

void mpq_clear(__mpq_struct *x)

{
  mpz_clear();
  mpz_clear(&x->_mp_den);
  return;
}



/* WARNING: Unknown calling convention */

void mpq_canonicalize(__mpq_struct *r)

{
  mpq_helper_canonicalize(r,&r->_mp_num,&r->_mp_den);
  return;
}



/* WARNING: Unknown calling convention */

void mpq_swap(__mpq_struct *a,__mpq_struct *b)

{
  mpz_swap();
  mpz_swap(&a->_mp_den,&b->_mp_den);
  return;
}



/* WARNING: Unknown calling convention */

void mpz_set_q(__mpz_struct *r,__mpq_struct *q)

{
  mpz_tdiv_q(r,q,&q->_mp_den);
  return;
}



/* WARNING: Unknown calling convention */

void mpq_set(__mpq_struct *r,__mpq_struct *q)

{
  mpz_set();
  mpz_set(&r->_mp_den,&q->_mp_den);
  return;
}



/* WARNING: Unknown calling convention */

void mpq_set_ui(__mpq_struct *r,ulong n,ulong d)

{
  mpz_set_ui();
  mpz_set_ui(&r->_mp_den,d);
  return;
}



/* WARNING: Unknown calling convention */

void mpq_set_si(__mpq_struct *r,long n,ulong d)

{
  mpz_set_si();
  mpz_set_ui(&r->_mp_den,d);
  return;
}



/* WARNING: Unknown calling convention */

void mpq_set_z(__mpq_struct *r,__mpz_struct *n)

{
  mpz_set_ui(&r->_mp_den,1);
  mpz_set(r,n);
  return;
}



/* WARNING: Unknown calling convention */

void mpq_set_num(__mpq_struct *r,__mpz_struct *z)

{
  mpz_set();
  return;
}



/* WARNING: Unknown calling convention */

void mpq_set_den(__mpq_struct *r,__mpz_struct *z)

{
  mpz_set(&r->_mp_den);
  return;
}



/* WARNING: Unknown calling convention */

void mpq_get_num(__mpz_struct *r,__mpq_struct *q)

{
  mpz_set();
  return;
}



/* WARNING: Unknown calling convention */

void mpq_get_den(__mpz_struct *r,__mpq_struct *q)

{
  mpz_set(r,&q->_mp_den);
  return;
}



/* WARNING: Unknown calling convention */

int mpq_cmp(__mpq_struct *a,__mpq_struct *b)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  mpz_t t1;
  mpz_t t2;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  mpz_init(t1);
  mpz_init(t2);
  mpz_mul(t1,a,&b->_mp_den);
  mpz_mul(t2,b,&a->_mp_den);
  iVar2 = mpz_cmp(t1,t2);
  mpz_clear(t1);
  mpz_clear(t2);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

int mpq_cmp_z(__mpq_struct *a,__mpz_struct *b)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  mpz_t t;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  mpz_init(t);
  mpz_mul(t,b,&a->_mp_den);
  iVar2 = mpz_cmp(a,t);
  mpz_clear(t);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

int mpq_equal(__mpq_struct *a,__mpq_struct *b)

{
  int iVar1;
  
  iVar1 = mpz_cmp();
  if (iVar1 != 0) {
    return 0;
  }
  iVar1 = mpz_cmp(&a->_mp_den,&b->_mp_den);
  return (int)(iVar1 == 0);
}



/* WARNING: Unknown calling convention */

int mpq_cmp_ui(__mpq_struct *q,ulong n,ulong d)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  mp_limb_t nl;
  mp_limb_t dl;
  mpq_t t;
  
  t[0]._mp_num._mp_d = &nl;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (d == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("d != 0","lib/mini-mpq.c",0x100,"mpq_cmp_ui");
  }
  t[0]._mp_num._mp_size = (int)(n != 0);
  t[0]._mp_den._mp_d = &dl;
  t[0]._mp_num._mp_alloc = 0;
  t[0]._mp_den._0_8_ = _LC4;
  nl = n;
  dl = d;
  iVar2 = mpq_cmp(q,t);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

int mpq_cmp_si(__mpq_struct *q,long n,ulong d)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  mp_limb_t nl;
  mp_limb_t dl;
  mpq_t t;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (d == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("d != 0","lib/mini-mpq.c",0x113,"mpq_cmp_si");
  }
  if (n < 0) {
    nl = -n;
    t[0]._mp_num._0_8_ = _LC5;
    t[0]._mp_den._mp_d = &dl;
    t[0]._mp_den._0_8_ = _LC4;
    dl = d;
    t[0]._mp_num._mp_d = &nl;
    iVar2 = mpq_cmp(q,t);
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      return iVar2;
    }
  }
  else if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    iVar2 = mpq_cmp_ui(q,n,d);
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

int mpq_sgn(__mpq_struct *a)

{
  int iVar1;
  
  iVar1 = mpz_sgn();
  return iVar1;
}



/* WARNING: Unknown calling convention */

void mpq_abs(__mpq_struct *r,__mpq_struct *q)

{
  mpz_abs();
  mpz_set(&r->_mp_den,&q->_mp_den);
  return;
}



/* WARNING: Unknown calling convention */

void mpq_neg(__mpq_struct *r,__mpq_struct *q)

{
  mpz_neg();
  mpz_set(&r->_mp_den,&q->_mp_den);
  return;
}



/* WARNING: Unknown calling convention */

void mpq_add(__mpq_struct *r,__mpq_struct *a,__mpq_struct *b)

{
  __mpz_struct *p_Var1;
  __mpz_struct *p_Var2;
  long lVar3;
  int iVar4;
  long in_FS_OFFSET;
  mpz_t t;
  mpz_t x;
  mpz_t y;
  
  p_Var1 = &a->_mp_den;
  p_Var2 = &b->_mp_den;
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  mpz_init(t);
  mpz_gcd(t,p_Var1,p_Var2);
  iVar4 = mpz_cmp_ui(t,1);
  if (iVar4 == 0) {
    mpz_mul(t,a,p_Var2);
    mpz_addmul(t,b,p_Var1);
    mpz_mul(&r->_mp_den,p_Var1,p_Var2);
    mpz_swap(r,t);
  }
  else {
    mpz_init(x);
    mpz_init(y);
    mpz_tdiv_q(x,p_Var2,t);
    mpz_tdiv_q(y,p_Var1,t);
    mpz_mul(x,a,x);
    mpz_addmul(x,b,y);
    mpz_gcd(t,x,t);
    mpz_tdiv_q(r,x,t);
    mpz_tdiv_q(x,p_Var2,t);
    mpz_mul(&r->_mp_den,x,y);
    mpz_clear(x);
    mpz_clear(y);
  }
  mpz_clear(t);
  if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

void mpq_sub(__mpq_struct *r,__mpq_struct *a,__mpq_struct *b)

{
  long lVar1;
  long in_FS_OFFSET;
  mpq_t t;
  
  t[0]._mp_den._mp_size = (b->_mp_den)._mp_size;
  t[0]._mp_den._mp_d = (b->_mp_den)._mp_d;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  t[0]._mp_num._mp_d = (b->_mp_num)._mp_d;
  t[0]._mp_num._mp_alloc = 0;
  t[0]._mp_den._mp_alloc = 0;
  t[0]._mp_num._mp_size = -(b->_mp_num)._mp_size;
  mpq_add(r,a,t);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

void mpq_mul(__mpq_struct *r,__mpq_struct *a,__mpq_struct *b)

{
  long lVar1;
  __mpq_struct *p_Var2;
  long in_FS_OFFSET;
  mpq_t t;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  mpz_init(t);
  mpz_init(&t[0]._mp_den);
  p_Var2 = b;
  if (a != b) {
    mpq_helper_canonicalize(t,&a->_mp_num,&b->_mp_den);
    mpq_helper_canonicalize(r,&b->_mp_num,&a->_mp_den);
    b = r;
    p_Var2 = t;
  }
  mpz_mul(r,b,p_Var2);
  mpz_mul(&r->_mp_den,&b->_mp_den,&p_Var2->_mp_den);
  mpz_clear(t);
  mpz_clear(&t[0]._mp_den);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

void mpq_div(__mpq_struct *r,__mpq_struct *a,__mpq_struct *b)

{
  long lVar1;
  long in_FS_OFFSET;
  mpq_t t;
  
  t[0]._mp_den._mp_d = (b->_mp_num)._mp_d;
  t[0]._mp_num._mp_size = (b->_mp_den)._mp_size;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  t[0]._mp_den._mp_size = (b->_mp_num)._mp_size;
  t[0]._mp_num._mp_d = (b->_mp_den)._mp_d;
  t[0]._mp_num._mp_alloc = 0;
  t[0]._mp_den._mp_alloc = 0;
  mpq_mul(r,a,t);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

void mpq_div_2exp(__mpq_struct *r,__mpq_struct *q,mp_bitcnt_t e)

{
  ulong uVar1;
  
  uVar1 = mpz_scan1(q,0);
  if (e <= uVar1) {
    uVar1 = e;
  }
  mpz_mul_2exp(&r->_mp_den,&q->_mp_den,e - uVar1);
  mpz_tdiv_q_2exp(r,q,uVar1);
  return;
}



/* WARNING: Unknown calling convention */

void mpq_mul_2exp(__mpq_struct *r,__mpq_struct *q,mp_bitcnt_t e)

{
  ulong uVar1;
  
  uVar1 = mpz_scan1(&q->_mp_den,0);
  if (e <= uVar1) {
    uVar1 = e;
  }
  mpz_mul_2exp(r,q,e - uVar1);
  mpz_tdiv_q_2exp(&r->_mp_den,&q->_mp_den,uVar1);
  return;
}



/* WARNING: Unknown calling convention */

void mpq_inv(__mpq_struct *r,__mpq_struct *q)

{
  __mpz_struct *p_Var1;
  int iVar2;
  __mpq_struct *r_00;
  
  p_Var1 = &r->_mp_den;
  mpz_set();
  mpz_set(p_Var1,&q->_mp_den);
  r_00 = (__mpq_struct *)p_Var1;
  mpz_swap(p_Var1,r);
  iVar2 = (r->_mp_den)._mp_size;
  if (0 < iVar2) {
    return;
  }
  if (iVar2 != 0) {
    mpz_neg(p_Var1,p_Var1);
    mpz_neg(r,r);
    return;
  }
                    /* WARNING: Subroutine does not return */
  mpq_canonical_sign(r_00);
}



/* WARNING: Unknown calling convention */

void mpq_set_d(__mpq_struct *r,double x)

{
  __mpz_struct *p_Var1;
  ulong uVar2;
  ulong uVar3;
  
  p_Var1 = &r->_mp_den;
  mpz_set_ui(p_Var1,1);
  if ((x * _LC6 != x) && (!NAN(x))) {
    uVar3 = 0;
    if (x != x + _LC6) {
      do {
        x = x * _LC7;
        uVar3 = uVar3 + 0x40;
      } while (x + _LC6 != x);
    }
    mpz_set_d(r);
    uVar2 = mpz_scan1(r,0);
    if (uVar3 < uVar2) {
      uVar2 = uVar3;
    }
    mpz_mul_2exp(p_Var1,p_Var1,uVar3 - uVar2);
    mpz_tdiv_q_2exp(r,r,uVar2);
    return;
  }
  (r->_mp_num)._mp_size = 0;
  return;
}



/* WARNING: Unknown calling convention */

double mpq_get_d(__mpq_struct *u)

{
  __mpz_struct *p_Var1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  double dVar6;
  mpz_t z;
  
  p_Var1 = &u->_mp_den;
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = mpz_sizeinbase(u,2);
  lVar4 = mpz_sizeinbase(p_Var1,2);
  if ((lVar4 == 1) || (lVar4 + 0x40U < uVar3)) {
    mpz_init(z);
    mpz_mul_2exp(z,u,0);
    mpz_tdiv_q(z,z,p_Var1);
    dVar6 = (double)mpz_get_d(z);
    mpz_clear(z);
  }
  else {
    uVar5 = (lVar4 + 0x40U) - uVar3 >> 6;
    mpz_init(z);
    uVar3 = uVar5 + 1;
    mpz_mul_2exp(z,u,uVar3 * 0x40);
    mpz_tdiv_q(z,z,p_Var1);
    dVar6 = (double)mpz_get_d(z);
    mpz_clear(z);
    if ((uVar3 & 1) == 0) goto LAB_00100c88;
    while (uVar3 = uVar5, dVar6 = dVar6 * _LC8, uVar3 != 0) {
LAB_00100c88:
      dVar6 = dVar6 * _LC8 * _LC8;
      if (uVar3 == 2) break;
      dVar6 = dVar6 * _LC8;
      uVar5 = uVar3 - 4;
    }
  }
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return dVar6;
}



/* WARNING: Unknown calling convention */

char * mpq_get_str(char *sp,int base,__mpq_struct *q)

{
  size_t sVar1;
  int iVar2;
  char *__s;
  size_t sVar3;
  long lVar4;
  char *__s_00;
  size_t sVar5;
  __mpz_struct *p_Var6;
  undefined4 in_register_00000034;
  long in_FS_OFFSET;
  _func_void_ptr_void_ptr_size_t_size_t *gmp_reallocate_func;
  _func_void_void_ptr_size_t *gmp_free_func;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  __s = (char *)mpz_get_str(sp,CONCAT44(in_register_00000034,base));
  if (__s != (char *)0x0) {
    p_Var6 = &q->_mp_den;
    iVar2 = mpz_cmp_ui(p_Var6,1);
    if (iVar2 != 0) {
      sVar3 = strlen(__s);
      sVar1 = sVar3 + 1;
      if (sp == (char *)0x0) {
        __s_00 = (char *)mpz_get_str(0,base,p_Var6);
        if (__s_00 == (char *)0x0) goto LAB_00100dd0;
        mp_get_memory_functions(0,&gmp_reallocate_func,&gmp_free_func);
        sVar5 = strlen(__s_00);
        sVar5 = sVar5 + 1;
        __s = (char *)(*gmp_reallocate_func)(__s,sVar1,sVar1 + sVar5);
        memcpy(__s + sVar1,__s_00,sVar5);
        (*gmp_free_func)(__s_00,sVar5);
      }
      else {
        lVar4 = mpz_get_str(sp + sVar1,base,p_Var6);
        if (lVar4 == 0) {
LAB_00100dd0:
                    /* WARNING: Subroutine does not return */
          __assert_fail("rden != NULL","lib/mini-mpq.c",0x1ec,"mpq_get_str");
        }
      }
      __s[sVar3] = '/';
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return __s;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

size_t mpq_out_str(FILE *stream,int base,__mpq_struct *x)

{
  char *__s;
  size_t __n;
  size_t sVar1;
  long in_FS_OFFSET;
  _func_void_void_ptr_size_t *gmp_free_func;
  long local_30;
  
  sVar1 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  __s = mpq_get_str((char *)0x0,base,x);
  if (__s != (char *)0x0) {
    __n = strlen(__s);
    sVar1 = fwrite(__s,1,__n,(FILE *)stream);
    mp_get_memory_functions(0,0,&gmp_free_func);
    (*gmp_free_func)(__s,__n + 1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return sVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

int mpq_set_str(__mpq_struct *r,char *sp,int base)

{
  int iVar1;
  char *pcVar2;
  void *__dest;
  size_t __n;
  long in_FS_OFFSET;
  _func_void_ptr_size_t *gmp_allocate_func;
  _func_void_void_ptr_size_t *gmp_free_func;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar2 = strchr(sp,0x2f);
  if (pcVar2 == (char *)0x0) {
    mpz_set_ui(&r->_mp_den,1);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      iVar1 = mpz_set_str(r,sp,base);
      return iVar1;
    }
  }
  else {
    mp_get_memory_functions(&gmp_allocate_func,0,&gmp_free_func);
    __n = (long)pcVar2 - (long)sp;
    __dest = (*gmp_allocate_func)(__n + 1);
    memcpy(__dest,sp,__n);
    *(undefined1 *)((long)__dest + __n) = 0;
    iVar1 = mpz_set_str(r,__dest,base);
    (*gmp_free_func)(__dest,__n + 1);
    if (iVar1 == 0) {
      iVar1 = mpz_set_str(&r->_mp_den,pcVar2 + 1,base);
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return iVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


