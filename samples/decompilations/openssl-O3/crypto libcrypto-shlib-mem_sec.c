
void sh_setbit(long param_1,int param_2,long param_3)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  ulong uVar4;
  
  if ((param_2 < 0) || (DAT_001014a8 <= param_2)) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: list >= 0 && list < sh.freelist_size","crypto/mem_sec.c",0x182);
  }
  uVar4 = DAT_00101498 >> ((byte)param_2 & 0x3f);
  if ((uVar4 - 1 & param_1 - DAT_00101490) != 0) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: ((ptr - sh.arena) & ((sh.arena_size >> list) - 1)) == 0",
                "crypto/mem_sec.c",0x183);
  }
  uVar4 = (1L << ((byte)param_2 & 0x3f)) + (ulong)(param_1 - DAT_00101490) / uVar4;
  if ((uVar4 != 0) && (uVar4 < DAT_001014c8)) {
    uVar3 = (uint)uVar4 & 7;
    pbVar2 = (byte *)((uVar4 >> 3) + param_3);
    bVar1 = *pbVar2;
    if ((bVar1 >> (ulong)uVar3 & 1) == 0) {
      *pbVar2 = bVar1 | (byte)(1L << (sbyte)uVar3);
      return;
    }
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: !TESTBIT(table, bit)","crypto/mem_sec.c",0x186);
  }
                    /* WARNING: Subroutine does not return */
  OPENSSL_die("assertion failed: bit > 0 && bit < sh.bittable_size","crypto/mem_sec.c",0x185);
}



void sh_add_to_list(undefined8 *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  
  puVar2 = DAT_00101490;
  if ((param_1 < DAT_001014a0) || (DAT_001014a0 + DAT_001014a8 <= param_1)) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: WITHIN_FREELIST(list)","crypto/mem_sec.c",0x18e);
  }
  if ((DAT_00101490 <= param_2) &&
     (puVar3 = (ulong *)(DAT_00101498 + (long)DAT_00101490), param_2 < puVar3)) {
    puVar1 = (ulong *)*param_1;
    *param_2 = (ulong)puVar1;
    if (puVar1 == (ulong *)0x0) {
      param_2[1] = (ulong)param_1;
      *param_1 = param_2;
      return;
    }
    if ((puVar1 < puVar3) && (puVar2 <= puVar1)) {
      param_2[1] = (ulong)param_1;
      if ((undefined8 *)puVar1[1] == param_1) {
        puVar1[1] = (ulong)param_2;
        *param_1 = param_2;
        return;
      }
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: (char **)temp->next->p_next == list","crypto/mem_sec.c",0x197);
    }
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: temp->next == NULL || WITHIN_ARENA(temp->next)",
                "crypto/mem_sec.c",0x193);
  }
                    /* WARNING: Subroutine does not return */
  OPENSSL_die("assertion failed: WITHIN_ARENA(ptr)","crypto/mem_sec.c",399);
}



void sh_clearbit(long param_1,int param_2,long param_3)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  ulong uVar4;
  
  if ((param_2 < 0) || (DAT_001014a8 <= param_2)) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: list >= 0 && list < sh.freelist_size","crypto/mem_sec.c",0x176);
  }
  uVar4 = DAT_00101498 >> ((byte)param_2 & 0x3f);
  if ((uVar4 - 1 & param_1 - DAT_00101490) != 0) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: ((ptr - sh.arena) & ((sh.arena_size >> list) - 1)) == 0",
                "crypto/mem_sec.c",0x177);
  }
  uVar4 = (1L << ((byte)param_2 & 0x3f)) + (ulong)(param_1 - DAT_00101490) / uVar4;
  if ((uVar4 != 0) && (uVar4 < DAT_001014c8)) {
    uVar3 = (uint)uVar4 & 7;
    pbVar2 = (byte *)((uVar4 >> 3) + param_3);
    bVar1 = *pbVar2;
    if ((bVar1 >> (ulong)uVar3 & 1) != 0) {
      *pbVar2 = ~(byte)(1L << (sbyte)uVar3) & bVar1;
      return;
    }
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: TESTBIT(table, bit)","crypto/mem_sec.c",0x17a);
  }
                    /* WARNING: Subroutine does not return */
  OPENSSL_die("assertion failed: bit > 0 && bit < sh.bittable_size","crypto/mem_sec.c",0x179);
}



uint sh_testbit(long param_1,int param_2,long param_3)

{
  ulong uVar1;
  
  if ((param_2 < 0) || (DAT_001014a8 <= param_2)) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: list >= 0 && list < sh.freelist_size","crypto/mem_sec.c",0x16b);
  }
  uVar1 = DAT_00101498 >> ((byte)param_2 & 0x3f);
  if ((uVar1 - 1 & param_1 - DAT_00101490) != 0) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: ((ptr - sh.arena) & ((sh.arena_size >> list) - 1)) == 0",
                "crypto/mem_sec.c",0x16c);
  }
  uVar1 = (1L << ((byte)param_2 & 0x3f)) + (ulong)(param_1 - DAT_00101490) / uVar1;
  if ((uVar1 != 0) && (uVar1 < DAT_001014c8)) {
    return (uint)*(byte *)(param_3 + (uVar1 >> 3)) & (uint)(1L << ((byte)uVar1 & 7));
  }
                    /* WARNING: Subroutine does not return */
  OPENSSL_die("assertion failed: bit > 0 && bit < sh.bittable_size","crypto/mem_sec.c",0x16e);
}



ulong sh_actual_size(ulong param_1)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 uVar5;
  long lVar6;
  
  uVar1 = DAT_00101498;
  if ((param_1 < DAT_00101490) || (DAT_00101490 + DAT_00101498 <= param_1)) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: WITHIN_ARENA(ptr)","crypto/mem_sec.c",0x2e6);
  }
  uVar4 = (param_1 + DAT_00101498) - DAT_00101490;
  lVar6 = DAT_001014a8 + -1;
  uVar5 = (undefined4)lVar6;
  uVar3 = uVar4 / DAT_001014b0;
  if (DAT_001014b0 <= uVar4) {
    uVar4 = uVar3 >> 3;
    while( true ) {
      uVar5 = (undefined4)lVar6;
      if ((*(byte *)(DAT_001014b8 + uVar4) >> ((uint)uVar3 & 7) & 1) != 0) break;
      if ((uVar3 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        OPENSSL_die("assertion failed: (bit & 1) == 0","crypto/mem_sec.c",0x160);
      }
      lVar6 = lVar6 + -1;
      uVar5 = (undefined4)lVar6;
      if (uVar3 >> 1 == 0) break;
      uVar4 = uVar3 >> 4;
      uVar3 = uVar3 >> 1;
    }
  }
  iVar2 = sh_testbit(param_1,uVar5,DAT_001014b8);
  if (iVar2 != 0) {
    return uVar1 >> ((byte)uVar5 & 0x3f);
  }
                    /* WARNING: Subroutine does not return */
  OPENSSL_die("assertion failed: sh_testbit(ptr, list, sh.bittable)","crypto/mem_sec.c",0x2ea);
}



void sh_free(undefined1 (*param_1) [16])

{
  long lVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 (*pauVar6) [16];
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined1 (*pauVar14) [16];
  
  if (param_1 == (undefined1 (*) [16])0x0) {
    return;
  }
  if ((param_1 < DAT_00101490) || ((undefined1 (*) [16])(*DAT_00101490 + DAT_00101498) <= param_1))
  {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: WITHIN_ARENA(ptr)","crypto/mem_sec.c",0x2c0);
  }
  uVar8 = (long)param_1 + (DAT_00101498 - (long)DAT_00101490);
  uVar9 = DAT_001014a8 - 1;
  uVar4 = uVar8 / DAT_001014b0;
  if (DAT_001014b0 <= uVar8) {
    uVar8 = uVar4 >> 3;
    while ((*(byte *)(DAT_001014b8 + uVar8) >> ((uint)uVar4 & 7) & 1) == 0) {
      if ((uVar4 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        OPENSSL_die("assertion failed: (bit & 1) == 0","crypto/mem_sec.c",0x160);
      }
      uVar9 = uVar9 - 1;
      if (uVar4 >> 1 == 0) break;
      uVar8 = uVar4 >> 4;
      uVar4 = uVar4 >> 1;
    }
  }
  iVar3 = sh_testbit(param_1,uVar9 & 0xffffffff,DAT_001014b8);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: sh_testbit(ptr, list, sh.bittable)","crypto/mem_sec.c",0x2c5);
  }
  sh_clearbit(param_1,uVar9 & 0xffffffff,DAT_001014c0);
  sh_add_to_list(*DAT_001014a0 + uVar9 * 8,param_1);
  while( true ) {
    lVar1 = DAT_001014b8;
    bVar2 = (byte)uVar9;
    uVar13 = uVar9 & 0xffffffff;
    lVar12 = 1L << (bVar2 & 0x3f);
    uVar10 = DAT_00101498 >> (bVar2 & 0x3f);
    uVar4 = (ulong)((long)param_1 - (long)DAT_00101490) / uVar10 + lVar12;
    uVar8 = uVar4 >> 3;
    uVar4 = uVar4 ^ 1;
    uVar7 = (uint)uVar4 & 7;
    if (((*(byte *)(DAT_001014b8 + uVar8) >> uVar7 & 1) == 0) ||
       ((*(byte *)(DAT_001014c0 + uVar8) >> uVar7 & 1) != 0)) {
      return;
    }
    uVar8 = ~(-1L << (bVar2 & 0x3f));
    uVar4 = (uVar4 & uVar8) * uVar10;
    pauVar14 = (undefined1 (*) [16])(*DAT_00101490 + uVar4);
    if (pauVar14 == (undefined1 (*) [16])0x0) {
      return;
    }
    uVar4 = uVar4 / uVar10 + lVar12;
    uVar5 = uVar4 >> 3;
    uVar4 = uVar4 ^ 1;
    uVar11 = (ulong)((uint)uVar4 & 7);
    if ((((*(byte *)(DAT_001014b8 + uVar5) >> uVar11 & 1) == 0) ||
        ((*(byte *)(DAT_001014c0 + uVar5) >> uVar11 & 1) != 0)) ||
       (param_1 != (undefined1 (*) [16])(*DAT_00101490 + (uVar4 & uVar8) * uVar10))) {
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: ptr == sh_find_my_buddy(buddy, list)","crypto/mem_sec.c",0x2cb)
      ;
    }
    iVar3 = sh_testbit(param_1,uVar13,DAT_001014c0);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: !sh_testbit(ptr, list, sh.bitmalloc)","crypto/mem_sec.c",0x2cd)
      ;
    }
    sh_clearbit(param_1,uVar13,lVar1);
    lVar1 = *(long *)*param_1;
    if (lVar1 != 0) {
      *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(*param_1 + 8);
    }
    **(long **)(*param_1 + 8) = lVar1;
    if (((*(long *)*param_1 != 0) &&
        ((pauVar6 = *(undefined1 (**) [16])(*(long *)*param_1 + 8), pauVar6 < DAT_001014a0 ||
         ((undefined1 (*) [16])(*DAT_001014a0 + DAT_001014a8 * 8) <= pauVar6)))) &&
       ((pauVar6 < DAT_00101490 || ((undefined1 (*) [16])(*DAT_00101490 + DAT_00101498) <= pauVar6))
       )) break;
    iVar3 = sh_testbit(param_1,uVar13,DAT_001014c0);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: !sh_testbit(ptr, list, sh.bitmalloc)","crypto/mem_sec.c",0x2d0)
      ;
    }
    sh_clearbit(pauVar14,uVar13,DAT_001014b8);
    lVar1 = *(long *)*pauVar14;
    if (lVar1 != 0) {
      *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(*pauVar14 + 8);
    }
    **(long **)(*pauVar14 + 8) = lVar1;
    if (((*(long *)*pauVar14 != 0) &&
        ((pauVar6 = *(undefined1 (**) [16])(*(long *)*pauVar14 + 8), pauVar6 < DAT_001014a0 ||
         ((undefined1 (*) [16])(*DAT_001014a0 + DAT_001014a8 * 8) <= pauVar6)))) &&
       ((pauVar6 < DAT_00101490 || ((undefined1 (*) [16])(*DAT_00101490 + DAT_00101498) <= pauVar6))
       )) break;
    uVar4 = uVar9 - 1;
    pauVar6 = pauVar14;
    if (pauVar14 <= param_1) {
      pauVar6 = param_1;
    }
    if (pauVar14 < param_1) {
      param_1 = pauVar14;
    }
    *pauVar6 = (undefined1  [16])0x0;
    iVar3 = sh_testbit(param_1,uVar4 & 0xffffffff,DAT_001014c0);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: !sh_testbit(ptr, list, sh.bitmalloc)","crypto/mem_sec.c",0x2db)
      ;
    }
    sh_setbit(param_1,uVar4 & 0xffffffff,DAT_001014b8);
    lVar1 = uVar9 * 8;
    pauVar14 = DAT_001014a0 + -1;
    sh_add_to_list(*pauVar14 + lVar1 + 8,param_1);
    uVar9 = uVar4;
    if (param_1 != *(undefined1 (**) [16])(*pauVar14 + lVar1 + 8)) {
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: sh.freelist[list] == ptr","crypto/mem_sec.c",0x2de);
    }
  }
                    /* WARNING: Subroutine does not return */
  OPENSSL_die("assertion failed: WITHIN_FREELIST(temp2->p_next) || WITHIN_ARENA(temp2->p_next)",
              "crypto/mem_sec.c",0x1aa);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int CRYPTO_secure_malloc_init(ulong param_1,ulong param_2)

{
  undefined8 uVar1;
  void *pvVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  size_t __len;
  long lVar6;
  int *piVar7;
  
  if ((secure_mem_initialized == 0) &&
     (sec_malloc_lock = CRYPTO_THREAD_lock_new(), sec_malloc_lock != 0)) {
    sh = (void *)0x0;
    DAT_00101488 = 0;
    _DAT_00101490 = (undefined1  [16])0x0;
    _DAT_001014a0 = (undefined1  [16])0x0;
    _DAT_001014b0 = (undefined1  [16])0x0;
    _DAT_001014c0 = (undefined1  [16])0x0;
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: size > 0","crypto/mem_sec.c",0x1bc);
    }
    if ((param_1 - 1 & param_1) != 0) {
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: (size & (size - 1)) == 0","crypto/mem_sec.c",0x1bd);
    }
    if (param_2 < 0x11) {
      param_2 = 0x10;
    }
    else if ((param_2 - 1 & param_2) != 0) {
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: (minsize & (minsize - 1)) == 0","crypto/mem_sec.c",0x1d2);
    }
    DAT_00101490 = (void *)0x0;
    uVar1 = DAT_00101490;
    DAT_00101490 = (void *)0x0;
    DAT_001014b8 = (void *)0x0;
    pvVar2 = DAT_001014b8;
    DAT_001014b8 = (void *)0x0;
    DAT_001014c8 = (param_1 / param_2) * 2;
    DAT_001014c0 = (void *)0x0;
    pvVar3 = DAT_001014c0;
    DAT_001014c0 = (void *)0x0;
    DAT_00101498 = param_1;
    DAT_001014b0 = param_2;
    if (DAT_001014c8 >> 3 == 0) {
      DAT_001014a0 = (void *)0x0;
      DAT_001014c0 = pvVar3;
      DAT_00101490 = (void *)uVar1;
      DAT_001014b8 = pvVar2;
    }
    else {
      lVar6 = 0x3f;
      if (DAT_001014c8 != 0) {
        for (; DAT_001014c8 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      DAT_001014a8 = (long)(int)lVar6;
      DAT_001014a0 = (void *)0x0;
      DAT_001014a0 = (void *)CRYPTO_zalloc(DAT_001014a8 << 3,"crypto/mem_sec.c",0x1e3);
      if (DAT_001014a0 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        OPENSSL_die("assertion failed: sh.freelist != NULL","crypto/mem_sec.c",0x1e4);
      }
      DAT_001014b8 = (void *)CRYPTO_zalloc(DAT_001014c8 >> 3,"crypto/mem_sec.c",0x1e8);
      if (DAT_001014b8 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        OPENSSL_die("assertion failed: sh.bittable != NULL","crypto/mem_sec.c",0x1e9);
      }
      DAT_001014c0 = (void *)CRYPTO_zalloc(DAT_001014c8 >> 3,"crypto/mem_sec.c",0x1ed);
      if (DAT_001014c0 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        OPENSSL_die("assertion failed: sh.bitmalloc != NULL","crypto/mem_sec.c",0x1ee);
      }
      __len = sysconf(0x1e);
      if ((long)__len < 1) {
        lVar6 = 0x2000;
        __len = 0x1000;
      }
      else {
        lVar6 = __len * 2;
      }
      DAT_00101488 = DAT_00101498 + lVar6;
      sh = mmap((void *)0x0,DAT_00101488,3,0x22,-1,0);
      if (sh != (void *)0xffffffffffffffff) {
        DAT_00101490 = (void *)((long)sh + __len);
        sh_setbit(DAT_00101490,0,DAT_001014b8);
        sh_add_to_list(DAT_001014a0,DAT_00101490);
        iVar4 = mprotect(sh,__len,0);
        iVar5 = mprotect((void *)((lVar6 + -1 + DAT_00101498 & -__len) + (long)sh),__len,0);
        iVar4 = 1 - (iVar4 >> 0x1f);
        if (iVar5 < 0) {
          iVar4 = 2;
        }
        lVar6 = syscall(0x145,DAT_00101490,DAT_00101498,1);
        if ((lVar6 < 0) &&
           ((piVar7 = __errno_location(), *piVar7 != 0x26 ||
            (iVar5 = mlock(DAT_00101490,DAT_00101498), iVar5 < 0)))) {
          iVar4 = 2;
        }
        iVar5 = madvise(DAT_00101490,DAT_00101498,0x10);
        secure_mem_initialized = 1;
        if (iVar5 < 0) {
          iVar4 = 2;
        }
        return iVar4;
      }
    }
    CRYPTO_free(DAT_001014a0);
    CRYPTO_free(DAT_001014b8);
    CRYPTO_free(DAT_001014c0);
    if ((sh != (void *)0xffffffffffffffff) && (DAT_00101488 != 0)) {
      munmap(sh,DAT_00101488);
    }
    _sh = (undefined1  [16])0x0;
    _DAT_00101490 = (undefined1  [16])0x0;
    _DAT_001014a0 = (undefined1  [16])0x0;
    _DAT_001014b0 = (undefined1  [16])0x0;
    _DAT_001014c0 = (undefined1  [16])0x0;
    CRYPTO_THREAD_lock_free(sec_malloc_lock);
    sec_malloc_lock = 0;
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 CRYPTO_secure_malloc_done(void)

{
  if (secure_mem_used != 0) {
    return 0;
  }
  CRYPTO_free(DAT_001014a0);
  CRYPTO_free(DAT_001014b8);
  CRYPTO_free(DAT_001014c0);
  if ((sh != (void *)0xffffffffffffffff) && (DAT_00101488 != 0)) {
    munmap(sh,DAT_00101488);
  }
  secure_mem_initialized = 0;
  _sh = (undefined1  [16])0x0;
  _DAT_00101490 = (undefined1  [16])0x0;
  _DAT_001014a0 = (undefined1  [16])0x0;
  _DAT_001014b0 = (undefined1  [16])0x0;
  _DAT_001014c0 = (undefined1  [16])0x0;
  CRYPTO_THREAD_lock_free(sec_malloc_lock);
  sec_malloc_lock = 0;
  return 1;
}



undefined4 CRYPTO_secure_malloc_initialized(void)

{
  return secure_mem_initialized;
}



undefined1 (*) [16] CRYPTO_secure_malloc(ulong param_1,char *param_2,int param_3)

{
  long *plVar1;
  undefined1 (*pauVar2) [16];
  byte bVar3;
  ulong uVar4;
  undefined1 *puVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 (*pauVar9) [16];
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  bool bVar16;
  
  if (secure_mem_initialized == 0) {
    pauVar9 = (undefined1 (*) [16])CRYPTO_malloc((int)param_1,param_2,param_3);
    return pauVar9;
  }
  iVar6 = CRYPTO_THREAD_write_lock(sec_malloc_lock);
  if (iVar6 == 0) {
    uVar14 = 0x8000f;
  }
  else {
    uVar15 = DAT_001014b0;
    uVar4 = DAT_001014a8;
    if (param_1 <= DAT_00101498) {
      for (; uVar4 = uVar4 - 1, uVar15 < param_1; uVar15 = uVar15 * 2) {
      }
      uVar15 = uVar4;
      if (-1 < (long)uVar4) {
        do {
          pauVar9 = DAT_001014a0;
          if (*(long *)(*DAT_001014a0 + uVar15 * 8) != 0) goto LAB_00100e20;
          bVar16 = uVar15 != 0;
          uVar15 = uVar15 - 1;
        } while (bVar16);
      }
    }
    uVar14 = 0x6f;
    CRYPTO_THREAD_unlock(sec_malloc_lock);
  }
  if ((param_2 != (char *)0x0) || (param_3 != 0)) {
    ERR_new();
    ERR_set_debug(param_2,param_3,0);
    ERR_set_error(0xf,uVar14,0);
  }
  return (undefined1 (*) [16])0x0;
LAB_00100e20:
  if (uVar15 == uVar4) {
    pauVar9 = *(undefined1 (**) [16])(*pauVar9 + uVar15 * 8);
    iVar6 = sh_testbit(pauVar9,uVar15 & 0xffffffff,DAT_001014b8);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: sh_testbit(chunk, list, sh.bittable)","crypto/mem_sec.c",0x2ad)
      ;
    }
    sh_setbit(pauVar9,uVar15 & 0xffffffff,DAT_001014c0);
    lVar12 = *(long *)*pauVar9;
    if (lVar12 != 0) {
      *(undefined8 *)(lVar12 + 8) = *(undefined8 *)(*pauVar9 + 8);
    }
    **(long **)(*pauVar9 + 8) = lVar12;
    if (((*(long *)*pauVar9 == 0) ||
        ((pauVar2 = *(undefined1 (**) [16])(*(long *)*pauVar9 + 8), DAT_001014a0 <= pauVar2 &&
         (pauVar2 < (undefined1 (*) [16])(*DAT_001014a0 + DAT_001014a8 * 8))))) ||
       ((DAT_00101490 <= pauVar2 && (pauVar2 < (undefined1 (*) [16])(*DAT_00101490 + DAT_00101498)))
       )) {
      if ((DAT_00101490 <= pauVar9) &&
         (pauVar9 < (undefined1 (*) [16])(*DAT_00101490 + DAT_00101498))) {
        *pauVar9 = (undefined1  [16])0x0;
        lVar12 = sh_actual_size(pauVar9);
        secure_mem_used = secure_mem_used + lVar12;
        CRYPTO_THREAD_unlock(sec_malloc_lock);
        return pauVar9;
      }
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: WITHIN_ARENA(chunk)","crypto/mem_sec.c",0x2b1);
    }
LAB_0010117c:
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: WITHIN_FREELIST(temp2->p_next) || WITHIN_ARENA(temp2->p_next)",
                "crypto/mem_sec.c",0x1aa);
  }
  plVar1 = *(long **)(*pauVar9 + uVar15 * 8);
  lVar12 = uVar15 * 8;
  iVar6 = sh_testbit(plVar1,uVar15 & 0xffffffff,DAT_001014c0);
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: !sh_testbit(temp, slist, sh.bitmalloc)","crypto/mem_sec.c",0x293)
    ;
  }
  sh_clearbit(plVar1,uVar15 & 0xffffffff,DAT_001014b8);
  lVar11 = *plVar1;
  if (lVar11 != 0) {
    *(long *)(lVar11 + 8) = plVar1[1];
  }
  *(long *)plVar1[1] = lVar11;
  if (((*plVar1 != 0) &&
      ((pauVar9 = *(undefined1 (**) [16])(*plVar1 + 8), pauVar9 < DAT_001014a0 ||
       ((undefined1 (*) [16])(*DAT_001014a0 + DAT_001014a8 * 8) <= pauVar9)))) &&
     ((pauVar9 < DAT_00101490 || ((undefined1 (*) [16])(*DAT_00101490 + DAT_00101498) <= pauVar9))))
  goto LAB_0010117c;
  if (plVar1 == *(long **)(*DAT_001014a0 + lVar12)) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: temp != sh.freelist[slist]","crypto/mem_sec.c",0x296);
  }
  uVar15 = uVar15 + 1;
  iVar6 = sh_testbit(plVar1,uVar15 & 0xffffffff,DAT_001014c0);
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: !sh_testbit(temp, slist, sh.bitmalloc)","crypto/mem_sec.c",0x29c)
    ;
  }
  lVar12 = lVar12 + 8;
  sh_setbit(plVar1,uVar15 & 0xffffffff,DAT_001014b8);
  puVar5 = *DAT_001014a0;
  sh_add_to_list(puVar5 + lVar12,plVar1);
  if (plVar1 != *(long **)(puVar5 + lVar12)) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: sh.freelist[slist] == temp","crypto/mem_sec.c",0x29f);
  }
  bVar3 = (byte)uVar15;
  lVar11 = (long)plVar1 + (DAT_00101498 >> (bVar3 & 0x3f));
  iVar6 = sh_testbit(lVar11,uVar15 & 0xffffffff,DAT_001014c0);
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: !sh_testbit(temp, slist, sh.bitmalloc)","crypto/mem_sec.c",0x2a3)
    ;
  }
  sh_setbit(lVar11,uVar15 & 0xffffffff,DAT_001014b8);
  pauVar9 = DAT_001014a0;
  puVar5 = *DAT_001014a0;
  sh_add_to_list(puVar5 + lVar12,lVar11);
  if (lVar11 != *(long *)(puVar5 + lVar12)) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: sh.freelist[slist] == temp","crypto/mem_sec.c",0x2a6);
  }
  uVar13 = DAT_00101498 >> (bVar3 & 0x3f);
  uVar7 = (ulong)(lVar11 - (long)DAT_00101490) / uVar13 + (1L << (bVar3 & 0x3f));
  uVar8 = uVar7 >> 3;
  uVar7 = uVar7 ^ 1;
  uVar10 = (ulong)((uint)uVar7 & 7);
  if ((((*(byte *)(DAT_001014b8 + uVar8) >> uVar10 & 1) == 0) ||
      ((*(byte *)(DAT_001014c0 + uVar8) >> uVar10 & 1) != 0)) ||
     ((undefined1 *)(lVar11 - uVar13) != *DAT_00101490 + (~(-1L << (bVar3 & 0x3f)) & uVar7) * uVar13
     )) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: temp-(sh.arena_size >> slist) == sh_find_my_buddy(temp, slist)",
                "crypto/mem_sec.c",0x2a8);
  }
  goto LAB_00100e20;
}



void CRYPTO_secure_zalloc(void)

{
  if (secure_mem_initialized == 0) {
    CRYPTO_zalloc();
    return;
  }
  CRYPTO_secure_malloc();
  return;
}



uint CRYPTO_secure_allocated(ulong param_1)

{
  uint uVar1;
  
  uVar1 = secure_mem_initialized;
  if (secure_mem_initialized != 0) {
    uVar1 = 0;
    if (DAT_00101490 <= param_1) {
      uVar1 = (uint)(param_1 < DAT_00101490 + DAT_00101498);
    }
  }
  return uVar1;
}



void CRYPTO_secure_free(void *param_1)

{
  int iVar1;
  size_t len;
  
  if (param_1 == (void *)0x0) {
    return;
  }
  iVar1 = CRYPTO_secure_allocated();
  if (iVar1 != 0) {
    iVar1 = CRYPTO_THREAD_write_lock(sec_malloc_lock);
    if (iVar1 != 0) {
      len = sh_actual_size(param_1);
      OPENSSL_cleanse(param_1,len);
      secure_mem_used = secure_mem_used - len;
      sh_free(param_1);
      CRYPTO_THREAD_unlock(sec_malloc_lock);
      return;
    }
    return;
  }
  CRYPTO_free(param_1);
  return;
}



void CRYPTO_secure_clear_free(void *param_1,size_t param_2)

{
  int iVar1;
  size_t len;
  
  if (param_1 == (void *)0x0) {
    return;
  }
  iVar1 = CRYPTO_secure_allocated();
  if (iVar1 != 0) {
    iVar1 = CRYPTO_THREAD_write_lock(sec_malloc_lock);
    if (iVar1 != 0) {
      len = sh_actual_size(param_1);
      OPENSSL_cleanse(param_1,len);
      secure_mem_used = secure_mem_used - len;
      sh_free(param_1);
      CRYPTO_THREAD_unlock(sec_malloc_lock);
      return;
    }
    return;
  }
  OPENSSL_cleanse(param_1,param_2);
  CRYPTO_free(param_1);
  return;
}



undefined8 CRYPTO_secure_used(void)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = CRYPTO_THREAD_read_lock(sec_malloc_lock);
  uVar1 = secure_mem_used;
  uVar3 = 0;
  if (iVar2 != 0) {
    CRYPTO_THREAD_unlock(sec_malloc_lock);
    uVar3 = uVar1;
  }
  return uVar3;
}



undefined8 CRYPTO_secure_actual_size(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  iVar1 = CRYPTO_THREAD_write_lock(sec_malloc_lock);
  if (iVar1 != 0) {
    uVar2 = sh_actual_size(param_1);
    CRYPTO_THREAD_unlock(sec_malloc_lock);
  }
  return uVar2;
}


