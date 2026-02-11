
long sh_find_my_buddy(long param_1,byte param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  
  uVar5 = DAT_00101218 >> (param_2 & 0x3f);
  uVar1 = (ulong)(param_1 - DAT_00101210) / uVar5 + (1L << (param_2 & 0x3f));
  uVar2 = uVar1 >> 3;
  uVar1 = uVar1 ^ 1;
  lVar3 = 0;
  uVar4 = (uint)uVar1 & 7;
  if (((*(byte *)(DAT_00101238 + uVar2) >> uVar4 & 1) != 0) &&
     ((*(byte *)(DAT_00101240 + uVar2) >> uVar4 & 1) == 0)) {
    lVar3 = (~(-1L << (param_2 & 0x3f)) & uVar1) * uVar5 + DAT_00101210;
  }
  return lVar3;
}



void sh_setbit(long param_1,int param_2,long param_3)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  ulong uVar4;
  
  if ((param_2 < 0) || (DAT_00101228 <= param_2)) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: list >= 0 && list < sh.freelist_size","crypto/mem_sec.c",0x182);
  }
  uVar4 = DAT_00101218 >> ((byte)param_2 & 0x3f);
  if ((uVar4 - 1 & param_1 - DAT_00101210) != 0) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: ((ptr - sh.arena) & ((sh.arena_size >> list) - 1)) == 0",
                "crypto/mem_sec.c",0x183);
  }
  uVar4 = (1L << ((byte)param_2 & 0x3f)) + (ulong)(param_1 - DAT_00101210) / uVar4;
  if ((uVar4 != 0) && (uVar4 < DAT_00101248)) {
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
  
  puVar2 = DAT_00101210;
  if ((param_1 < DAT_00101220) || (DAT_00101220 + DAT_00101228 <= param_1)) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: WITHIN_FREELIST(list)","crypto/mem_sec.c",0x18e);
  }
  if ((DAT_00101210 <= param_2) &&
     (puVar3 = (ulong *)(DAT_00101218 + (long)DAT_00101210), param_2 < puVar3)) {
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
  
  if ((param_2 < 0) || (DAT_00101228 <= param_2)) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: list >= 0 && list < sh.freelist_size","crypto/mem_sec.c",0x176);
  }
  uVar4 = DAT_00101218 >> ((byte)param_2 & 0x3f);
  if ((uVar4 - 1 & param_1 - DAT_00101210) != 0) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: ((ptr - sh.arena) & ((sh.arena_size >> list) - 1)) == 0",
                "crypto/mem_sec.c",0x177);
  }
  uVar4 = (1L << ((byte)param_2 & 0x3f)) + (ulong)(param_1 - DAT_00101210) / uVar4;
  if ((uVar4 != 0) && (uVar4 < DAT_00101248)) {
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
  
  if ((param_2 < 0) || (DAT_00101228 <= param_2)) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: list >= 0 && list < sh.freelist_size","crypto/mem_sec.c",0x16b);
  }
  uVar1 = DAT_00101218 >> ((byte)param_2 & 0x3f);
  if ((uVar1 - 1 & param_1 - DAT_00101210) != 0) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: ((ptr - sh.arena) & ((sh.arena_size >> list) - 1)) == 0",
                "crypto/mem_sec.c",0x16c);
  }
  uVar1 = (1L << ((byte)param_2 & 0x3f)) + (ulong)(param_1 - DAT_00101210) / uVar1;
  if ((uVar1 != 0) && (uVar1 < DAT_00101248)) {
    return (uint)*(byte *)(param_3 + (uVar1 >> 3)) & (uint)(1L << ((byte)uVar1 & 7));
  }
                    /* WARNING: Subroutine does not return */
  OPENSSL_die("assertion failed: bit > 0 && bit < sh.bittable_size","crypto/mem_sec.c",0x16e);
}



void sh_remove_from_list(long *param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    *(long *)(lVar1 + 8) = param_1[1];
  }
  *(long *)param_1[1] = lVar1;
  if (*param_1 != 0) {
    uVar2 = *(ulong *)(*param_1 + 8);
    if ((DAT_00101220 <= uVar2) && (uVar2 < DAT_00101220 + DAT_00101228 * 8)) {
      return;
    }
    if ((uVar2 < DAT_00101210) || (DAT_00101210 + DAT_00101218 <= uVar2)) {
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: WITHIN_FREELIST(temp2->p_next) || WITHIN_ARENA(temp2->p_next)",
                  "crypto/mem_sec.c",0x1aa);
    }
  }
  return;
}



long sh_getlist(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = (param_1 + DAT_00101218) - DAT_00101210;
  lVar2 = DAT_00101228 + -1;
  uVar1 = uVar3 / DAT_00101230;
  if (DAT_00101230 <= uVar3) {
    uVar3 = uVar1 >> 3;
    while ((*(byte *)(DAT_00101238 + uVar3) >> ((uint)uVar1 & 7) & 1) == 0) {
      if ((uVar1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        OPENSSL_die("assertion failed: (bit & 1) == 0","crypto/mem_sec.c",0x160);
      }
      lVar2 = lVar2 + -1;
      if (uVar1 >> 1 == 0) {
        return lVar2;
      }
      uVar3 = uVar1 >> 4;
      uVar1 = uVar1 >> 1;
    }
  }
  return lVar2;
}



ulong sh_actual_size(ulong param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = DAT_00101218;
  if (DAT_00101210 <= param_1) {
    if (param_1 < DAT_00101210 + DAT_00101218) {
      uVar2 = sh_getlist();
      iVar3 = sh_testbit(param_1,uVar2,DAT_00101238);
      if (iVar3 != 0) {
        return uVar1 >> ((byte)uVar2 & 0x3f);
      }
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: sh_testbit(ptr, list, sh.bittable)","crypto/mem_sec.c",0x2ea);
    }
  }
                    /* WARNING: Subroutine does not return */
  OPENSSL_die("assertion failed: WITHIN_ARENA(ptr)","crypto/mem_sec.c",0x2e6);
}



void sh_free(undefined1 (*param_1) [16])

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  undefined1 (*pauVar4) [16];
  undefined1 (*pauVar5) [16];
  ulong uVar6;
  
  if (param_1 == (undefined1 (*) [16])0x0) {
    return;
  }
  if ((param_1 < DAT_00101210) || ((undefined1 (*) [16])(*DAT_00101210 + DAT_00101218) <= param_1))
  {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: WITHIN_ARENA(ptr)","crypto/mem_sec.c",0x2c0);
  }
  uVar3 = sh_getlist();
  iVar2 = sh_testbit(param_1,uVar3 & 0xffffffff,DAT_00101238);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: sh_testbit(ptr, list, sh.bittable)","crypto/mem_sec.c",0x2c5);
  }
  sh_clearbit(param_1,uVar3 & 0xffffffff,DAT_00101240);
  sh_add_to_list(DAT_00101220 + uVar3 * 8,param_1);
  while( true ) {
    uVar6 = uVar3 & 0xffffffff;
    pauVar5 = (undefined1 (*) [16])sh_find_my_buddy(param_1,uVar3 & 0xffffffff);
    if (pauVar5 == (undefined1 (*) [16])0x0) {
      return;
    }
    pauVar4 = (undefined1 (*) [16])sh_find_my_buddy(pauVar5,uVar6);
    if (param_1 != pauVar4) {
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: ptr == sh_find_my_buddy(buddy, list)","crypto/mem_sec.c",0x2cb)
      ;
    }
    iVar2 = sh_testbit(param_1,uVar6,DAT_00101240);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: !sh_testbit(ptr, list, sh.bitmalloc)","crypto/mem_sec.c",0x2cd)
      ;
    }
    sh_clearbit(param_1,uVar6,DAT_00101238);
    sh_remove_from_list(param_1);
    iVar2 = sh_testbit(param_1,uVar6,DAT_00101240);
    if (iVar2 != 0) break;
    uVar3 = uVar3 - 1;
    sh_clearbit(pauVar5,uVar6,DAT_00101238);
    sh_remove_from_list(pauVar5);
    pauVar4 = pauVar5;
    if (pauVar5 <= param_1) {
      pauVar4 = param_1;
    }
    if (pauVar5 < param_1) {
      param_1 = pauVar5;
    }
    *pauVar4 = (undefined1  [16])0x0;
    iVar2 = sh_testbit(param_1,uVar3 & 0xffffffff,DAT_00101240);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: !sh_testbit(ptr, list, sh.bitmalloc)","crypto/mem_sec.c",0x2db)
      ;
    }
    sh_setbit(param_1,uVar3 & 0xffffffff,DAT_00101238);
    puVar1 = (undefined8 *)(DAT_00101220 + uVar3 * 8);
    sh_add_to_list(puVar1,param_1);
    if (param_1 != (undefined1 (*) [16])*puVar1) {
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: sh.freelist[list] == ptr","crypto/mem_sec.c",0x2de);
    }
  }
                    /* WARNING: Subroutine does not return */
  OPENSSL_die("assertion failed: !sh_testbit(ptr, list, sh.bitmalloc)","crypto/mem_sec.c",0x2d0);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sh_done(void)

{
  CRYPTO_free(DAT_00101220);
  CRYPTO_free(DAT_00101238);
  CRYPTO_free(DAT_00101240);
  if ((sh != (void *)0xffffffffffffffff) && (DAT_00101208 != 0)) {
    munmap(sh,DAT_00101208);
  }
  _sh = (undefined1  [16])0x0;
  _DAT_00101210 = (undefined1  [16])0x0;
  _DAT_00101220 = (undefined1  [16])0x0;
  _DAT_00101230 = (undefined1  [16])0x0;
  _DAT_00101240 = (undefined1  [16])0x0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int CRYPTO_secure_malloc_init(ulong param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  int iVar5;
  long lVar6;
  size_t __len;
  int *piVar7;
  
  if ((secure_mem_initialized == 0) &&
     (sec_malloc_lock = CRYPTO_THREAD_lock_new(), sec_malloc_lock != 0)) {
    _sh = (undefined1  [16])0x0;
    _DAT_00101210 = (undefined1  [16])0x0;
    _DAT_00101220 = (undefined1  [16])0x0;
    _DAT_00101230 = (undefined1  [16])0x0;
    _DAT_00101240 = (undefined1  [16])0x0;
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
    auVar2._8_8_ = 0;
    auVar2._0_8_ = param_1;
    _DAT_00101210 = auVar2 << 0x40;
    DAT_00101238 = 0;
    DAT_00101230 = param_2;
    uVar1 = (param_1 / param_2) * 2;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar1;
    _DAT_00101240 = auVar3 << 0x40;
    if (uVar1 >> 3 != 0) {
      lVar6 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      DAT_00101228 = (long)(int)lVar6;
      DAT_00101220 = 0;
      DAT_00101220 = CRYPTO_zalloc(DAT_00101228 << 3,"crypto/mem_sec.c",0x1e3);
      if (DAT_00101220 == 0) {
                    /* WARNING: Subroutine does not return */
        OPENSSL_die("assertion failed: sh.freelist != NULL","crypto/mem_sec.c",0x1e4);
      }
      lVar6 = CRYPTO_zalloc(DAT_00101248 >> 3,"crypto/mem_sec.c",0x1e8);
      DAT_00101238 = lVar6;
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        OPENSSL_die("assertion failed: sh.bittable != NULL","crypto/mem_sec.c",0x1e9);
      }
      lVar6 = CRYPTO_zalloc(DAT_00101248 >> 3,"crypto/mem_sec.c",0x1ed);
      DAT_00101240 = lVar6;
      if (lVar6 == 0) {
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
      DAT_00101208 = DAT_00101218 + lVar6;
      sh = mmap((void *)0x0,DAT_00101218 + lVar6,3,0x22,-1,0);
      if (sh != (void *)0xffffffffffffffff) {
        DAT_00101210 = (void *)((long)sh + __len);
        sh_setbit((void *)((long)sh + __len),0,DAT_00101238);
        sh_add_to_list(DAT_00101220,DAT_00101210);
        iVar4 = mprotect(sh,__len,0);
        iVar5 = mprotect((void *)((lVar6 + -1 + DAT_00101218 & -__len) + (long)sh),__len,0);
        iVar4 = 1 - (iVar4 >> 0x1f);
        if (iVar5 < 0) {
          iVar4 = 2;
        }
        lVar6 = syscall(0x145,DAT_00101210,DAT_00101218,1);
        if ((lVar6 < 0) &&
           ((piVar7 = __errno_location(), *piVar7 != 0x26 ||
            (iVar5 = mlock(DAT_00101210,DAT_00101218), iVar5 < 0)))) {
          iVar4 = 2;
        }
        iVar5 = madvise(DAT_00101210,DAT_00101218,0x10);
        secure_mem_initialized = 1;
        if (iVar5 < 0) {
          iVar4 = 2;
        }
        return iVar4;
      }
    }
    sh_done();
    CRYPTO_THREAD_lock_free(sec_malloc_lock);
    sec_malloc_lock = 0;
  }
  return 0;
}



undefined8 CRYPTO_secure_malloc_done(void)

{
  if (secure_mem_used != 0) {
    return 0;
  }
  sh_done();
  secure_mem_initialized = 0;
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
  ulong uVar1;
  int iVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  long lVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  bool bVar11;
  
  if (secure_mem_initialized == 0) {
    pauVar4 = (undefined1 (*) [16])CRYPTO_malloc((int)param_1,param_2,param_3);
    return pauVar4;
  }
  iVar2 = CRYPTO_THREAD_write_lock(sec_malloc_lock);
  if (iVar2 == 0) {
    uVar6 = 0x8000f;
  }
  else {
    uVar7 = DAT_00101230;
    uVar1 = DAT_00101228;
    if (param_1 <= DAT_00101218) {
      for (; uVar1 = uVar1 - 1, uVar7 < param_1; uVar7 = uVar7 * 2) {
      }
      uVar7 = uVar1;
      if (-1 < (long)uVar1) {
        do {
          lVar3 = DAT_00101220;
          if (*(long *)(DAT_00101220 + uVar7 * 8) != 0) {
            while( true ) {
              if (uVar7 == uVar1) {
                pauVar4 = *(undefined1 (**) [16])(lVar3 + uVar7 * 8);
                iVar2 = sh_testbit(pauVar4,uVar7 & 0xffffffff,DAT_00101238);
                if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                  OPENSSL_die("assertion failed: sh_testbit(chunk, list, sh.bittable)",
                              "crypto/mem_sec.c",0x2ad);
                }
                sh_setbit(pauVar4,uVar7 & 0xffffffff,DAT_00101240);
                sh_remove_from_list(pauVar4);
                if ((DAT_00101210 <= pauVar4) &&
                   (pauVar4 < (undefined1 (*) [16])(*DAT_00101210 + DAT_00101218))) {
                  *pauVar4 = (undefined1  [16])0x0;
                  lVar3 = sh_actual_size(pauVar4);
                  secure_mem_used = secure_mem_used + lVar3;
                  CRYPTO_THREAD_unlock(sec_malloc_lock);
                  return pauVar4;
                }
                    /* WARNING: Subroutine does not return */
                OPENSSL_die("assertion failed: WITHIN_ARENA(chunk)","crypto/mem_sec.c",0x2b1);
              }
              lVar5 = *(long *)(lVar3 + uVar7 * 8);
              lVar9 = uVar7 * 8;
              iVar2 = sh_testbit(lVar5,uVar7 & 0xffffffff,DAT_00101240);
              if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
                OPENSSL_die("assertion failed: !sh_testbit(temp, slist, sh.bitmalloc)",
                            "crypto/mem_sec.c",0x293);
              }
              sh_clearbit(lVar5,uVar7 & 0xffffffff,DAT_00101238);
              sh_remove_from_list(lVar5);
              if (lVar5 == *(long *)(DAT_00101220 + uVar7 * 8)) {
                    /* WARNING: Subroutine does not return */
                OPENSSL_die("assertion failed: temp != sh.freelist[slist]","crypto/mem_sec.c",0x296)
                ;
              }
              uVar7 = uVar7 + 1;
              iVar2 = sh_testbit(lVar5,uVar7 & 0xffffffff,DAT_00101240);
              if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
                OPENSSL_die("assertion failed: !sh_testbit(temp, slist, sh.bitmalloc)",
                            "crypto/mem_sec.c",0x29c);
              }
              lVar9 = lVar9 + 8;
              sh_setbit(lVar5,uVar7 & 0xffffffff,DAT_00101238);
              plVar10 = (long *)(DAT_00101220 + lVar9);
              sh_add_to_list(plVar10,lVar5);
              if (lVar5 != *plVar10) {
                    /* WARNING: Subroutine does not return */
                OPENSSL_die("assertion failed: sh.freelist[slist] == temp","crypto/mem_sec.c",0x29f)
                ;
              }
              lVar5 = lVar5 + (DAT_00101218 >> ((byte)uVar7 & 0x3f));
              iVar2 = sh_testbit(lVar5,uVar7 & 0xffffffff,DAT_00101240);
              if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
                OPENSSL_die("assertion failed: !sh_testbit(temp, slist, sh.bitmalloc)",
                            "crypto/mem_sec.c",0x2a3);
              }
              sh_setbit(lVar5,uVar7 & 0xffffffff,DAT_00101238);
              lVar3 = DAT_00101220;
              plVar10 = (long *)(lVar9 + DAT_00101220);
              sh_add_to_list(plVar10,lVar5);
              if (lVar5 != *plVar10) break;
              lVar8 = lVar5 - (DAT_00101218 >> ((byte)uVar7 & 0x3f));
              lVar9 = sh_find_my_buddy(lVar5,uVar7 & 0xffffffff);
              if (lVar8 != lVar9) {
                    /* WARNING: Subroutine does not return */
                OPENSSL_die("assertion failed: temp-(sh.arena_size >> slist) == sh_find_my_buddy(temp, slist)"
                            ,"crypto/mem_sec.c",0x2a8);
              }
            }
                    /* WARNING: Subroutine does not return */
            OPENSSL_die("assertion failed: sh.freelist[slist] == temp","crypto/mem_sec.c",0x2a6);
          }
          bVar11 = uVar7 != 0;
          uVar7 = uVar7 - 1;
        } while (bVar11);
      }
    }
    uVar6 = 0x6f;
    CRYPTO_THREAD_unlock(sec_malloc_lock);
  }
  if ((param_2 != (char *)0x0) || (param_3 != 0)) {
    ERR_new();
    ERR_set_debug(param_2,param_3,0);
    ERR_set_error(0xf,uVar6,0);
  }
  return (undefined1 (*) [16])0x0;
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
    if (DAT_00101210 <= param_1) {
      uVar1 = (uint)(param_1 < DAT_00101210 + DAT_00101218);
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


