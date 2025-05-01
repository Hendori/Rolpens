
/* WARNING: Unknown calling convention */

void * xnrealloc(void *p,size_t n,size_t s)

{
  void *pvVar1;
  
  pvVar1 = (void *)rpl_reallocarray();
  if (pvVar1 != (void *)0x0) {
    return pvVar1;
  }
                    /* WARNING: Subroutine does not return */
  xalloc_die();
}



/* WARNING: Unknown calling convention */

void * xmalloc(size_t s)

{
  void *pvVar1;
  
  pvVar1 = malloc(s);
  if (pvVar1 != (void *)0x0) {
    return pvVar1;
  }
                    /* WARNING: Subroutine does not return */
  xalloc_die();
}



/* WARNING: Unknown calling convention */

void * ximalloc(idx_t s)

{
  void *pvVar1;
  
  pvVar1 = malloc(s);
  if (pvVar1 != (void *)0x0) {
    return pvVar1;
  }
                    /* WARNING: Subroutine does not return */
  xalloc_die();
}



/* WARNING: Unknown calling convention */

char * xcharalloc(size_t n)

{
  char *pcVar1;
  
  pcVar1 = (char *)malloc(n);
  if (pcVar1 != (char *)0x0) {
    return pcVar1;
  }
                    /* WARNING: Subroutine does not return */
  xalloc_die();
}



/* WARNING: Unknown calling convention */

void * xrealloc(void *p,size_t s)

{
  void *pvVar1;
  
  if (s == 0) {
    s = 1;
  }
  pvVar1 = realloc(p,s);
  if (pvVar1 != (void *)0x0) {
    return pvVar1;
  }
                    /* WARNING: Subroutine does not return */
  xalloc_die();
}



/* WARNING: Unknown calling convention */

void * xirealloc(void *p,idx_t s)

{
  void *pvVar1;
  
  if (s == 0) {
    s = 1;
  }
  pvVar1 = realloc(p,s);
  if (pvVar1 != (void *)0x0) {
    return pvVar1;
  }
                    /* WARNING: Subroutine does not return */
  xalloc_die();
}



/* WARNING: Unknown calling convention */

void * xreallocarray(void *p,size_t n,size_t s)

{
  void *pvVar1;
  
  pvVar1 = (void *)rpl_reallocarray();
  if (pvVar1 != (void *)0x0) {
    return pvVar1;
  }
                    /* WARNING: Subroutine does not return */
  xalloc_die();
}



/* WARNING: Unknown calling convention */

void * xireallocarray(void *p,idx_t n,idx_t s)

{
  void *pvVar1;
  
  pvVar1 = (void *)rpl_reallocarray();
  if (pvVar1 != (void *)0x0) {
    return pvVar1;
  }
                    /* WARNING: Subroutine does not return */
  xalloc_die();
}



/* WARNING: Unknown calling convention */

void * xnmalloc(size_t n,size_t s)

{
  void *pvVar1;
  
  pvVar1 = (void *)rpl_reallocarray(0,n,s);
  if (pvVar1 != (void *)0x0) {
    return pvVar1;
  }
                    /* WARNING: Subroutine does not return */
  xalloc_die();
}



/* WARNING: Unknown calling convention */

void * xinmalloc(idx_t n,idx_t s)

{
  void *pvVar1;
  
  pvVar1 = (void *)rpl_reallocarray(0,n,s);
  if (pvVar1 != (void *)0x0) {
    return pvVar1;
  }
                    /* WARNING: Subroutine does not return */
  xalloc_die();
}



/* WARNING: Unknown calling convention */

void * x2realloc(void *p,size_t *ps)

{
  ulong uVar1;
  void *pvVar2;
  ulong uVar3;
  bool bVar4;
  
  uVar3 = *ps;
  if (p == (void *)0x0) {
    if (uVar3 == 0) {
      uVar3 = 0x80;
    }
  }
  else {
    uVar1 = (uVar3 >> 1) + 1;
    bVar4 = CARRY8(uVar3,uVar1);
    uVar3 = uVar3 + uVar1;
    if (bVar4) goto LAB_001001d6;
  }
  pvVar2 = (void *)rpl_reallocarray(p,uVar3,1);
  if (pvVar2 != (void *)0x0) {
    *ps = uVar3;
    return pvVar2;
  }
LAB_001001d6:
                    /* WARNING: Subroutine does not return */
  xalloc_die();
}



/* WARNING: Unknown calling convention */

void * x2nrealloc(void *p,size_t *pn,size_t s)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  void *pvVar3;
  ulong uVar4;
  bool bVar5;
  
  uVar4 = *pn;
  if (p == (void *)0x0) {
    if (uVar4 == 0) {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = s;
      uVar4 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x80)) / auVar1,0) + (ulong)(0x80 < s);
    }
  }
  else {
    uVar2 = (uVar4 >> 1) + 1;
    bVar5 = CARRY8(uVar4,uVar2);
    uVar4 = uVar4 + uVar2;
    if (bVar5) goto LAB_00100249;
  }
  pvVar3 = (void *)rpl_reallocarray(p,uVar4,s);
  if (pvVar3 != (void *)0x0) {
    *pn = uVar4;
    return pvVar3;
  }
LAB_00100249:
                    /* WARNING: Subroutine does not return */
  xalloc_die();
}



/* WARNING: Unknown calling convention */

void * xpalloc(void *pa,idx_t *pn,idx_t n_incr_min,ptrdiff_t n_max,idx_t s)

{
  long lVar1;
  ptrdiff_t pVar2;
  size_t sVar3;
  void *pvVar4;
  long lVar5;
  size_t __size;
  long lVar6;
  
  lVar1 = *pn;
  lVar5 = (lVar1 >> 1) + lVar1;
  if (SCARRY8(lVar1 >> 1,lVar1)) {
    lVar5 = 0x7fffffffffffffff;
  }
  pVar2 = n_max;
  if (lVar5 <= n_max) {
    pVar2 = lVar5;
  }
  if (-1 < n_max) {
    lVar5 = pVar2;
  }
  sVar3 = lVar5 * s;
  if (SEXT816((long)sVar3) == SEXT816(lVar5) * SEXT816(s)) {
    if (0x7f < (long)sVar3) goto joined_r0x00100309;
    lVar6 = 0x80;
  }
  else {
    lVar6 = 0x7fffffffffffffff;
  }
  lVar5 = lVar6 / s;
  sVar3 = lVar6 - lVar6 % s;
joined_r0x00100309:
  if (pa == (void *)0x0) {
    *pn = 0;
  }
  if ((n_incr_min <= lVar5 - lVar1) ||
     ((lVar5 = lVar1 + n_incr_min, !SCARRY8(lVar1,n_incr_min) &&
      (((n_max < 0 || (lVar5 <= n_max)) &&
       (sVar3 = lVar5 * s, SEXT816((long)sVar3) == SEXT816(lVar5) * SEXT816(s))))))) {
    __size = 1;
    if (sVar3 != 0) {
      __size = sVar3;
    }
    pvVar4 = realloc(pa,__size);
    if (pvVar4 != (void *)0x0) {
      *pn = lVar5;
      return pvVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  xalloc_die();
}



/* WARNING: Unknown calling convention */

void * xzalloc(size_t s)

{
  void *pvVar1;
  
  pvVar1 = calloc(s,1);
  if (pvVar1 != (void *)0x0) {
    return pvVar1;
  }
                    /* WARNING: Subroutine does not return */
  xalloc_die();
}



/* WARNING: Unknown calling convention */

void * xizalloc(idx_t s)

{
  void *pvVar1;
  
  pvVar1 = calloc(s,1);
  if (pvVar1 != (void *)0x0) {
    return pvVar1;
  }
                    /* WARNING: Subroutine does not return */
  xalloc_die();
}



/* WARNING: Unknown calling convention */

void * xcalloc(size_t n,size_t s)

{
  void *pvVar1;
  
  pvVar1 = calloc(n,s);
  if (pvVar1 != (void *)0x0) {
    return pvVar1;
  }
                    /* WARNING: Subroutine does not return */
  xalloc_die();
}



/* WARNING: Unknown calling convention */

void * xicalloc(idx_t n,idx_t s)

{
  void *pvVar1;
  
  pvVar1 = calloc(n,s);
  if (pvVar1 != (void *)0x0) {
    return pvVar1;
  }
                    /* WARNING: Subroutine does not return */
  xalloc_die();
}



/* WARNING: Unknown calling convention */

void * xmemdup(void *p,size_t s)

{
  void *pvVar1;
  
  pvVar1 = malloc(s);
  if (pvVar1 != (void *)0x0) {
    pvVar1 = (void *)__memcpy_chk(pvVar1,p,s,s);
    return pvVar1;
  }
                    /* WARNING: Subroutine does not return */
  xalloc_die();
}



/* WARNING: Unknown calling convention */

void * ximemdup(void *p,idx_t s)

{
  void *pvVar1;
  
  pvVar1 = malloc(s);
  if (pvVar1 != (void *)0x0) {
    pvVar1 = (void *)__memcpy_chk(pvVar1,p,s,s);
    return pvVar1;
  }
                    /* WARNING: Subroutine does not return */
  xalloc_die();
}



/* WARNING: Unknown calling convention */

char * ximemdup0(void *p,idx_t s)

{
  void *pvVar1;
  char *pcVar2;
  
  pvVar1 = malloc(s + 1U);
  if (pvVar1 != (void *)0x0) {
    *(undefined1 *)((long)pvVar1 + s) = 0;
    pcVar2 = (char *)__memcpy_chk(pvVar1,p,s,s + 1U);
    return pcVar2;
  }
                    /* WARNING: Subroutine does not return */
  xalloc_die();
}



/* WARNING: Unknown calling convention */

char * xstrdup(char *string)

{
  size_t sVar1;
  void *pvVar2;
  char *pcVar3;
  
  sVar1 = strlen(string);
  sVar1 = sVar1 + 1;
  pvVar2 = malloc(sVar1);
  if (pvVar2 != (void *)0x0) {
    pcVar3 = (char *)__memcpy_chk(pvVar2,string,sVar1,sVar1);
    return pcVar3;
  }
                    /* WARNING: Subroutine does not return */
  xalloc_die();
}


