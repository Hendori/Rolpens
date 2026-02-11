
void xnrealloc(void)

{
  long lVar1;
  
  lVar1 = rpl_reallocarray();
  if (lVar1 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  xalloc_die();
}



void xmalloc(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if (pvVar1 != (void *)0x0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  xalloc_die();
}



void ximalloc(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if (pvVar1 != (void *)0x0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  xalloc_die();
}



void xcharalloc(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if (pvVar1 != (void *)0x0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  xalloc_die();
}



void xrealloc(void *param_1,size_t param_2)

{
  void *pvVar1;
  
  if (param_2 == 0) {
    param_2 = 1;
  }
  pvVar1 = realloc(param_1,param_2);
  if (pvVar1 != (void *)0x0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  xalloc_die();
}



void xirealloc(void *param_1,size_t param_2)

{
  void *pvVar1;
  
  if (param_2 == 0) {
    param_2 = 1;
  }
  pvVar1 = realloc(param_1,param_2);
  if (pvVar1 != (void *)0x0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  xalloc_die();
}



void xreallocarray(void)

{
  long lVar1;
  
  lVar1 = rpl_reallocarray();
  if (lVar1 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  xalloc_die();
}



void xireallocarray(void)

{
  long lVar1;
  
  lVar1 = rpl_reallocarray();
  if (lVar1 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  xalloc_die();
}



void xnmalloc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = rpl_reallocarray(0,param_1,param_2);
  if (lVar1 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  xalloc_die();
}



void xinmalloc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = rpl_reallocarray(0,param_1,param_2);
  if (lVar1 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  xalloc_die();
}



void x2realloc(long param_1,ulong *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  bool bVar4;
  
  uVar3 = *param_2;
  if (param_1 == 0) {
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
  lVar2 = rpl_reallocarray(param_1,uVar3,1);
  if (lVar2 != 0) {
    *param_2 = uVar3;
    return;
  }
LAB_001001d6:
                    /* WARNING: Subroutine does not return */
  xalloc_die();
}



void x2nrealloc(long param_1,ulong *param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  bool bVar5;
  
  uVar4 = *param_2;
  if (param_1 == 0) {
    if (uVar4 == 0) {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = param_3;
      uVar4 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x80)) / auVar1,0) + (ulong)(0x80 < param_3);
    }
  }
  else {
    uVar2 = (uVar4 >> 1) + 1;
    bVar5 = CARRY8(uVar4,uVar2);
    uVar4 = uVar4 + uVar2;
    if (bVar5) goto LAB_00100249;
  }
  lVar3 = rpl_reallocarray(param_1,uVar4,param_3);
  if (lVar3 != 0) {
    *param_2 = uVar4;
    return;
  }
LAB_00100249:
                    /* WARNING: Subroutine does not return */
  xalloc_die();
}



void xpalloc(void *param_1,long *param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  size_t sVar2;
  void *pvVar3;
  long lVar4;
  size_t __size;
  long lVar5;
  
  lVar1 = *param_2;
  lVar4 = (lVar1 >> 1) + lVar1;
  if (SCARRY8(lVar1 >> 1,lVar1)) {
    lVar4 = 0x7fffffffffffffff;
  }
  lVar5 = param_4;
  if (lVar4 <= param_4) {
    lVar5 = lVar4;
  }
  if (-1 < param_4) {
    lVar4 = lVar5;
  }
  sVar2 = lVar4 * param_5;
  if (SEXT816((long)sVar2) == SEXT816(lVar4) * SEXT816(param_5)) {
    if (0x7f < (long)sVar2) goto joined_r0x00100309;
    lVar5 = 0x80;
  }
  else {
    lVar5 = 0x7fffffffffffffff;
  }
  lVar4 = lVar5 / param_5;
  sVar2 = lVar5 - lVar5 % param_5;
joined_r0x00100309:
  if (param_1 == (void *)0x0) {
    *param_2 = 0;
  }
  if ((param_3 <= lVar4 - lVar1) ||
     ((lVar4 = lVar1 + param_3, !SCARRY8(lVar1,param_3) &&
      (((param_4 < 0 || (lVar4 <= param_4)) &&
       (sVar2 = lVar4 * param_5, SEXT816((long)sVar2) == SEXT816(lVar4) * SEXT816(param_5))))))) {
    __size = 1;
    if (sVar2 != 0) {
      __size = sVar2;
    }
    pvVar3 = realloc(param_1,__size);
    if (pvVar3 != (void *)0x0) {
      *param_2 = lVar4;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  xalloc_die();
}



void xzalloc(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = calloc(param_1,1);
  if (pvVar1 != (void *)0x0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  xalloc_die();
}



void xizalloc(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = calloc(param_1,1);
  if (pvVar1 != (void *)0x0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  xalloc_die();
}



void xcalloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
  pvVar1 = calloc(param_1,param_2);
  if (pvVar1 != (void *)0x0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  xalloc_die();
}



void xicalloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
  pvVar1 = calloc(param_1,param_2);
  if (pvVar1 != (void *)0x0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  xalloc_die();
}



void xmemdup(undefined8 param_1,size_t param_2)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_2);
  if (pvVar1 != (void *)0x0) {
    __memcpy_chk(pvVar1,param_1,param_2,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  xalloc_die();
}



void ximemdup(undefined8 param_1,size_t param_2)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_2);
  if (pvVar1 != (void *)0x0) {
    __memcpy_chk(pvVar1,param_1,param_2,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  xalloc_die();
}



void ximemdup0(undefined8 param_1,long param_2)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_2 + 1U);
  if (pvVar1 != (void *)0x0) {
    *(undefined1 *)((long)pvVar1 + param_2) = 0;
    __memcpy_chk(pvVar1,param_1,param_2,param_2 + 1U);
    return;
  }
                    /* WARNING: Subroutine does not return */
  xalloc_die();
}



void xstrdup(char *param_1)

{
  size_t sVar1;
  void *pvVar2;
  
  sVar1 = strlen(param_1);
  sVar1 = sVar1 + 1;
  pvVar2 = malloc(sVar1);
  if (pvVar2 != (void *)0x0) {
    __memcpy_chk(pvVar2,param_1,sVar1,sVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  xalloc_die();
}


