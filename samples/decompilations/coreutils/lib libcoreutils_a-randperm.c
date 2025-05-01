
/* WARNING: Unknown calling convention */

size_t sparse_hash_(void *x,size_t table_size)

{
                    /* WARNING: Load size is inaccurate */
  return *x % table_size;
}



/* WARNING: Unknown calling convention */

_Bool sparse_cmp_(void *x,void *y)

{
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
  return *x == *y;
}



/* WARNING: Unknown calling convention */

size_t randperm_bound(size_t h,size_t n)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulong uVar4;
  
  uVar4 = 1;
  if (n != 0) {
    lVar1 = 0x3f;
    if (n != 0) {
      for (; n >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    uVar4 = (ulong)((int)lVar1 + 2);
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = h;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar4;
  auVar2 = auVar2 * auVar3;
  if (auVar2._8_8_ == 0) {
    return (auVar2._0_8_ >> 3) + (ulong)((auVar2 & (undefined1  [16])0x7) != (undefined1  [16])0x0);
  }
  return 0xffffffffffffffff;
}



/* WARNING: Unknown calling convention */

size_t * randperm_new(randint_source *r,size_t h,size_t n)

{
  size_t sVar1;
  ulong uVar2;
  bool bVar3;
  size_t *psVar4;
  size_t sVar5;
  long lVar6;
  ulong *puVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long in_FS_OFFSET;
  ulong local_68 [3];
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (h == 0) {
    psVar4 = (size_t *)0x0;
  }
  else if (h == 1) {
    psVar4 = (size_t *)xmalloc(8);
    sVar5 = randint_genmax(r,n - 1);
    *psVar4 = sVar5;
  }
  else {
    if (n < 0x20000) {
      psVar4 = (size_t *)xnmalloc(n,8);
      if (n != 0) goto LAB_00100117;
LAB_00100165:
      bVar3 = false;
      lVar9 = 0;
    }
    else {
      if (n / h < 0x20) {
        psVar4 = (size_t *)xnmalloc(n,8,n % h);
LAB_00100117:
        *psVar4 = 0;
        sVar5 = 1;
        if (1 < n) {
          if (((int)n - 1U & 1) != 0) {
            psVar4[1] = 1;
            sVar5 = 2;
            if (n < 3) goto LAB_00100165;
          }
          do {
            psVar4[sVar5] = sVar5;
            sVar1 = sVar5 + 1;
            sVar5 = sVar5 + 2;
            psVar4[sVar1] = sVar1;
          } while (sVar5 < n);
        }
        goto LAB_00100165;
      }
      lVar9 = hash_initialize(h * 2,0,0x100000,sparse_cmp_,&free);
      if (lVar9 == 0) {
LAB_0010038e:
        xalloc_die();
        goto LAB_00100393;
      }
      psVar4 = (size_t *)xnmalloc(h,8);
      bVar3 = true;
    }
    uVar10 = 0;
    do {
      while( true ) {
        lVar6 = randint_genmax(r,(n - 1) - uVar10);
        uVar11 = lVar6 + uVar10;
        if (!bVar3) break;
        local_50 = 0;
        local_68[2] = uVar10;
        puVar7 = (ulong *)hash_remove(lVar9,local_68 + 2);
        local_68[1] = 0;
        local_68[0] = uVar11;
        puVar8 = (ulong *)hash_remove(lVar9,local_68);
        if (puVar7 == (ulong *)0x0) {
          puVar7 = (ulong *)xmalloc(0x10);
          *puVar7 = uVar10;
          puVar7[1] = uVar10;
        }
        if (puVar8 == (ulong *)0x0) {
          puVar8 = (ulong *)xmalloc(0x10);
          *puVar8 = uVar11;
          puVar8[1] = uVar11;
        }
        else {
          uVar11 = puVar8[1];
        }
        uVar2 = puVar7[1];
        puVar7[1] = uVar11;
        puVar8[1] = uVar2;
        lVar6 = hash_insert(lVar9,puVar7);
        if ((lVar6 == 0) || (lVar6 = hash_insert(lVar9,puVar8), lVar6 == 0)) goto LAB_0010038e;
        psVar4[uVar10] = puVar7[1];
        uVar10 = uVar10 + 1;
        if (h <= uVar10) goto LAB_00100266;
      }
      sVar5 = psVar4[uVar10];
      psVar4[uVar10] = psVar4[uVar11];
      uVar10 = uVar10 + 1;
      psVar4[uVar11] = sVar5;
    } while (uVar10 < h);
LAB_00100266:
    if (!bVar3) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        psVar4 = (size_t *)xreallocarray(psVar4,h,8);
        return psVar4;
      }
      goto LAB_00100393;
    }
    hash_free(lVar9);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return psVar4;
  }
LAB_00100393:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


