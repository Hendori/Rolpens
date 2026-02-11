
undefined8 AD_compare(long *param_1,long *param_2)

{
  if (param_1[1] != param_2[1]) {
    return 0;
  }
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}



ulong AD_hash(long param_1,ulong param_2)

{
  return *(ulong *)(param_1 + 8) % param_2;
}



ulong dev_type_hash(ulong *param_1,ulong param_2)

{
  return *param_1 % param_2;
}



undefined8 dev_type_compare(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}



int fts_compare_ino(long *param_1,long *param_2)

{
  return (uint)(*(ulong *)(*param_2 + 0x78) < *(ulong *)(*param_1 + 0x78)) -
         (uint)(*(ulong *)(*param_1 + 0x78) < *(ulong *)(*param_2 + 0x78));
}



undefined8 fts_palloc(long param_1,long param_2)

{
  void *pvVar1;
  int *piVar2;
  size_t __size;
  
  __size = param_2 + 0x100U + *(ulong *)(param_1 + 0x30);
  if (CARRY8(param_2 + 0x100U,*(ulong *)(param_1 + 0x30))) {
    free(*(void **)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
    piVar2 = __errno_location();
    *piVar2 = 0x24;
  }
  else {
    *(size_t *)(param_1 + 0x30) = __size;
    if (__size == 0) {
      __size = 1;
    }
    pvVar1 = realloc(*(void **)(param_1 + 0x20),__size);
    if (pvVar1 != (void *)0x0) {
      *(void **)(param_1 + 0x20) = pvVar1;
      return 1;
    }
    free(*(void **)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return 0;
}



int fts_stat(long param_1,long param_2,char param_3)

{
  stat *__buf;
  int iVar1;
  uint uVar2;
  int *piVar3;
  ulong uVar4;
  undefined8 *puVar5;
  byte bVar6;
  
  bVar6 = 0;
  __buf = (stat *)(param_2 + 0x70);
  if (((*(uint *)(param_1 + 0x48) & 2) == 0) &&
     ((((*(uint *)(param_1 + 0x48) & 1) == 0 || (*(long *)(param_2 + 0x58) != 0)) &&
      (param_3 == '\0')))) {
    iVar1 = fstatat(*(int *)(param_1 + 0x2c),*(char **)(param_2 + 0x30),__buf,0x100);
    if (iVar1 < 0) {
      piVar3 = __errno_location();
      iVar1 = *piVar3;
      goto LAB_001001a3;
    }
  }
  else {
    iVar1 = fstatat(*(int *)(param_1 + 0x2c),*(char **)(param_2 + 0x30),__buf,0);
    if (iVar1 < 0) {
      piVar3 = __errno_location();
      iVar1 = *piVar3;
      if (iVar1 == 2) {
        iVar1 = fstatat(*(int *)(param_1 + 0x2c),*(char **)(param_2 + 0x30),__buf,0x100);
        if (-1 < iVar1) {
          *piVar3 = 0;
          return 0xd;
        }
        iVar1 = *piVar3;
      }
LAB_001001a3:
      *(int *)(param_2 + 0x40) = iVar1;
      puVar5 = (undefined8 *)(param_2 + 0x78U & 0xfffffffffffffff8);
      *(undefined8 *)(param_2 + 0x70) = 0;
      *(undefined8 *)(param_2 + 0xf8) = 0;
      uVar4 = (ulong)(((int)__buf - (int)puVar5) + 0x90U >> 3);
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar5 = 0;
        puVar5 = puVar5 + (ulong)bVar6 * -2 + 1;
      }
      return 10;
    }
  }
  uVar2 = *(uint *)(param_2 + 0x88) & 0xf000;
  if (uVar2 == 0x4000) {
    iVar1 = 1;
    if ((*(char *)(param_2 + 0x100) == '.') &&
       ((*(char *)(param_2 + 0x101) == '\0' || ((*(uint *)(param_2 + 0x100) & 0xffff00) == 0x2e00)))
       ) {
      iVar1 = (-(uint)(*(long *)(param_2 + 0x58) == 0) & 0xfffffffc) + 5;
    }
  }
  else if (uVar2 == 0xa000) {
    iVar1 = 0xc;
  }
  else {
    iVar1 = (uint)(uVar2 == 0x8000) * 5 + 3;
  }
  return iVar1;
}



long fts_sort(long param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  long *plVar2;
  __compar_fn_t __compar;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  size_t __size;
  
  __compar = *(__compar_fn_t *)(param_1 + 0x40);
  plVar3 = *(long **)(param_1 + 0x10);
  if (param_3 <= *(ulong *)(param_1 + 0x38)) {
LAB_0010031a:
    plVar6 = plVar3;
    if (param_2 != 0) {
      do {
        *plVar6 = param_2;
        param_2 = *(long *)(param_2 + 0x10);
        plVar6 = plVar6 + 1;
      } while (param_2 != 0);
    }
    qsort(plVar3,param_3,8,__compar);
    plVar3 = *(long **)(param_1 + 0x10);
    lVar7 = *plVar3;
    lVar4 = lVar7;
    lVar5 = param_3 - 1;
    plVar6 = plVar3;
    if (lVar5 != 0) {
      do {
        lVar7 = *plVar6;
        plVar2 = plVar6 + 1;
        plVar6 = plVar6 + 1;
        *(long *)(lVar7 + 0x10) = *plVar2;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      lVar7 = plVar3[param_3 - 1];
    }
    *(undefined8 *)(lVar7 + 0x10) = 0;
    return lVar4;
  }
  uVar1 = param_3 + 0x28;
  *(ulong *)(param_1 + 0x38) = uVar1;
  if (uVar1 >> 0x3d == 0) {
    __size = uVar1 * 8;
    if (__size == 0) {
      __size = 1;
    }
    plVar3 = (long *)realloc(plVar3,__size);
    if (plVar3 != (long *)0x0) {
      *(long **)(param_1 + 0x10) = plVar3;
      goto LAB_0010031a;
    }
    plVar3 = *(long **)(param_1 + 0x10);
  }
  free(plVar3);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return param_2;
}



void * fts_alloc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  ulong __size;
  
  __size = param_3 + 0x108U & 0xfffffffffffffff8;
  pvVar2 = malloc(__size);
  if (pvVar2 != (void *)0x0) {
    __memcpy_chk((long)pvVar2 + 0x100,param_2,param_3,__size - 0x100);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(undefined1 *)((long)pvVar2 + param_3 + 0x100) = 0;
    *(long *)((long)pvVar2 + 0x60) = param_3;
    *(long *)((long)pvVar2 + 0x50) = param_1;
    *(undefined8 *)((long)pvVar2 + 0x38) = uVar1;
    *(undefined4 *)((long)pvVar2 + 0x40) = 0;
    *(undefined8 *)((long)pvVar2 + 0x18) = 0;
    *(undefined4 *)((long)pvVar2 + 0x6a) = 0x30000;
    *(undefined8 *)((long)pvVar2 + 0x20) = 0;
    *(undefined8 *)((long)pvVar2 + 0x28) = 0;
  }
  return pvVar2;
}



bool setup_dir(long param_1)

{
  long lVar1;
  void *pvVar2;
  
  if ((*(uint *)(param_1 + 0x48) & 0x102) != 0) {
    lVar1 = hash_initialize(0x1f,0,AD_hash,0x100000,free);
    *(long *)(param_1 + 0x58) = lVar1;
    return lVar1 != 0;
  }
  pvVar2 = malloc(0x20);
  *(void **)(param_1 + 0x58) = pvVar2;
  if (pvVar2 != (void *)0x0) {
    cycle_check_init(pvVar2);
    return true;
  }
  return false;
}



long filesystem_type(long param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *__ptr;
  undefined8 *puVar5;
  long in_FS_OFFSET;
  undefined8 local_b8 [2];
  statfs local_a8;
  long local_30;
  
  lVar3 = *(long *)(param_1 + 0x50);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = *(long *)(lVar3 + 0x50);
  if ((*(byte *)(lVar3 + 0x49) & 2) != 0) {
    if (lVar4 == 0) {
      lVar4 = hash_initialize(0xd,0,dev_type_hash,dev_type_compare,free);
      *(long *)(lVar3 + 0x50) = lVar4;
      if (lVar4 != 0) goto LAB_0010050c;
    }
    else {
LAB_0010050c:
      local_b8[0] = *(undefined8 *)(param_1 + 0x70);
      lVar3 = hash_lookup(lVar4,local_b8);
      if (lVar3 != 0) {
        local_a8.f_type = *(long *)(lVar3 + 8);
        goto LAB_00100567;
      }
    }
    if ((-1 < param_2) && (iVar2 = fstatfs(param_2,&local_a8), lVar3 = local_a8.f_type, iVar2 == 0))
    {
      if ((lVar4 != 0) && (__ptr = (undefined8 *)malloc(0x10), __ptr != (undefined8 *)0x0)) {
        uVar1 = *(undefined8 *)(param_1 + 0x70);
        __ptr[1] = lVar3;
        *__ptr = uVar1;
        puVar5 = (undefined8 *)hash_insert(lVar4,__ptr);
        if (puVar5 == (undefined8 *)0x0) {
          free(__ptr);
        }
        else if (__ptr != puVar5) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
      }
      goto LAB_00100567;
    }
  }
  local_a8.f_type = 0;
LAB_00100567:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_a8.f_type;
}



undefined8 enter_dir(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 *__ptr;
  undefined8 *puVar5;
  
  if ((*(uint *)(param_1 + 0x48) & 0x102) == 0) {
    cVar4 = cycle_check(*(undefined8 *)(param_1 + 0x58),param_2 + 0xe);
    if (cVar4 != '\0') {
      *param_2 = param_2;
      *(undefined2 *)(param_2 + 0xd) = 2;
    }
  }
  else {
    __ptr = (undefined8 *)malloc(0x18);
    if (__ptr == (undefined8 *)0x0) {
      return 0;
    }
    uVar2 = param_2[0xe];
    uVar3 = param_2[0xf];
    uVar1 = *(undefined8 *)(param_1 + 0x58);
    __ptr[2] = param_2;
    *__ptr = uVar2;
    __ptr[1] = uVar3;
    puVar5 = (undefined8 *)hash_insert(uVar1,__ptr);
    if (__ptr != puVar5) {
      free(__ptr);
      if (puVar5 == (undefined8 *)0x0) {
        return 0;
      }
      uVar1 = puVar5[2];
      *(undefined2 *)(param_2 + 0xd) = 2;
      *param_2 = uVar1;
    }
  }
  return 1;
}



void cwd_advance_fd(long param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if ((iVar1 == param_2) && (iVar1 != -100)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (param_3 == '\0') {
    if (((*(byte *)(param_1 + 0x48) & 4) == 0) && (-1 < iVar1)) {
      close(iVar1);
      *(int *)(param_1 + 0x2c) = param_2;
      return;
    }
  }
  else {
    iVar1 = i_ring_push(param_1 + 0x60);
    if (-1 < iVar1) {
      close(iVar1);
      *(int *)(param_1 + 0x2c) = param_2;
      return;
    }
  }
  *(int *)(param_1 + 0x2c) = param_2;
  return;
}



void leave_dir(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  void *__ptr;
  long in_FS_OFFSET;
  undefined8 local_28;
  undefined8 uStack_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(uint *)(param_1 + 0x48) & 0x102) == 0) {
    lVar1 = *(long *)(param_2 + 8);
    if ((lVar1 != 0) && (-1 < *(long *)(lVar1 + 0x58))) {
      plVar2 = *(long **)(param_1 + 0x58);
      if (plVar2[2] == 0) goto leave_dir_cold;
      if (plVar2[1] == *(long *)(param_2 + 0x70) && *plVar2 == *(long *)(param_2 + 0x78)) {
        lVar3 = *(long *)(lVar1 + 0x70);
        *plVar2 = *(long *)(lVar1 + 0x78);
        plVar2[1] = lVar3;
      }
    }
  }
  else {
    local_28 = *(undefined8 *)(param_2 + 0x70);
    uStack_20 = *(undefined8 *)(param_2 + 0x78);
    __ptr = (void *)hash_remove(*(undefined8 *)(param_1 + 0x58),&local_28);
    if (__ptr == (void *)0x0) {
leave_dir_cold:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    free(__ptr);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool restore_initial_cwd(long param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  if ((*(uint *)(param_1 + 0x48) & 4) == 0) {
    if ((*(uint *)(param_1 + 0x48) & 0x200) == 0) {
      iVar2 = fchdir(*(int *)(param_1 + 0x28));
      bVar3 = iVar2 != 0;
      goto LAB_001007e2;
    }
    cwd_advance_fd(param_1,0xffffff9c,1);
  }
  bVar3 = false;
LAB_001007e2:
  while( true ) {
    cVar1 = i_ring_empty(param_1 + 0x60);
    if (cVar1 != '\0') break;
    iVar2 = i_ring_pop(param_1 + 0x60);
    if (-1 < iVar2) {
      close(iVar2);
    }
  }
  return bVar3;
}



int fts_safe_changedir(long param_1,long param_2,int param_3,char *param_4)

{
  undefined4 uVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  long in_FS_OFFSET;
  stat local_d8;
  long local_40;
  
  uVar8 = *(uint *)(param_1 + 0x48);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = param_3;
  if ((((param_4 == (char *)0x0) || (*param_4 != '.')) || (param_4[1] != '.')) ||
     (param_4[2] != '\0')) {
    if ((uVar8 & 4) == 0) {
      if (param_3 < 0) {
        bVar3 = 0;
LAB_00100ae6:
        uVar1 = *(undefined4 *)(param_1 + 0x2c);
        uVar9 = (uVar8 & 0x10) << 0xd | 0x90900;
        if ((uVar8 & 0x200) == 0) {
LAB_001009a7:
          iVar5 = open_safer(param_4,uVar9);
        }
        else {
LAB_00100a90:
          iVar5 = openat_safer(uVar1,param_4,uVar9);
        }
        if (iVar5 < 0) {
          iVar4 = -1;
          goto LAB_00100939;
        }
        uVar8 = *(uint *)(param_1 + 0x48);
      }
      else {
        bVar3 = 0;
      }
      iVar6 = param_3;
      bVar2 = bVar3;
      if (((uVar8 & 2) != 0) ||
         (((param_4 != (char *)0x0 && (*param_4 == '.')) &&
          ((param_4[1] == '.' && (param_4[2] == '\0')))))) goto LAB_001008e6;
joined_r0x00100a25:
      if ((uVar8 & 0x200) != 0) {
        iVar4 = 0;
        cwd_advance_fd(param_1,iVar5,bVar3 ^ 1);
        goto LAB_00100939;
      }
      iVar4 = fchdir(iVar5);
      goto joined_r0x001009fb;
    }
  }
  else if ((uVar8 & 4) == 0) {
    if (param_3 < 0) {
      if ((uVar8 & 0x200) == 0) {
        bVar3 = 1;
        uVar9 = (uVar8 & 0x10) << 0xd | 0x90900;
        goto LAB_001009a7;
      }
      bVar3 = i_ring_empty(param_1 + 0x60);
      if (bVar3 != 0) {
        uVar1 = *(undefined4 *)(param_1 + 0x2c);
        uVar9 = (uVar8 & 0x10) << 0xd | 0x90900;
        goto LAB_00100a90;
      }
      iVar6 = i_ring_pop(param_1 + 0x60);
      uVar8 = *(uint *)(param_1 + 0x48);
      if (iVar6 < 0) {
        bVar3 = 1;
        goto LAB_00100ae6;
      }
      bVar3 = 1;
      iVar5 = iVar6;
      bVar2 = 1;
      if ((uVar8 & 2) == 0) goto joined_r0x00100a25;
    }
    else {
      iVar6 = param_3;
      bVar2 = 1;
    }
LAB_001008e6:
    bVar3 = bVar2;
    iVar4 = fstat(iVar5,&local_d8);
    if (iVar4 == 0) {
      if ((*(__dev_t *)(param_2 + 0x70) == local_d8.st_dev) &&
         (*(__ino_t *)(param_2 + 0x78) == local_d8.st_ino)) {
        uVar8 = *(uint *)(param_1 + 0x48);
        goto joined_r0x00100a25;
      }
      piVar7 = __errno_location();
      *piVar7 = 2;
    }
    iVar4 = -1;
joined_r0x001009fb:
    if (iVar6 < 0) {
      piVar7 = __errno_location();
      iVar6 = *piVar7;
      close(iVar5);
      *piVar7 = iVar6;
    }
    goto LAB_00100939;
  }
  if (((uVar8 & 0x200) == 0) || (param_3 < 0)) {
    iVar4 = 0;
  }
  else {
    iVar4 = 0;
    close(param_3);
  }
LAB_00100939:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4;
}



void * fts_build(long *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  DIR *pDVar4;
  long lVar5;
  char cVar6;
  undefined2 uVar7;
  int iVar8;
  ulong uVar9;
  int *piVar10;
  dirent *pdVar11;
  size_t sVar12;
  void *pvVar13;
  void *pvVar14;
  uint uVar15;
  undefined4 uVar16;
  long lVar17;
  DIR *__dirp;
  ulong uVar18;
  ulong uVar19;
  long in_FS_OFFSET;
  bool bVar20;
  bool bVar21;
  void *local_a0;
  void *local_90;
  long local_78;
  ulong local_70;
  ulong local_68;
  undefined1 *local_60;
  char local_4b;
  int local_44;
  long local_40;
  
  lVar3 = *param_1;
  pDVar4 = *(DIR **)(lVar3 + 0x18);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (pDVar4 == (DIR *)0x0) {
    uVar15 = *(uint *)(param_1 + 9);
    uVar9 = (ulong)(uVar15 & 0x10);
    if (((uVar15 & 0x10) != 0) && (uVar9 = 0x20000, (uVar15 & 1) != 0)) {
      uVar9 = (ulong)(*(long *)(lVar3 + 0x58) != 0) << 0x11;
    }
    uVar16 = 0xffffff9c;
    if ((uVar15 & 0x204) == 0x200) {
      uVar16 = *(undefined4 *)((long)param_1 + 0x2c);
    }
    lVar17 = opendirat(uVar16,*(undefined8 *)(lVar3 + 0x30),uVar9,&local_44);
    *(long *)(lVar3 + 0x18) = lVar17;
    if (lVar17 != 0) {
      if (*(short *)(lVar3 + 0x68) == 0xb) {
        iVar8 = fstat(local_44,(stat *)(lVar3 + 0x70));
        if (iVar8 != 0) {
LAB_001015b7:
          piVar10 = __errno_location();
          iVar8 = *piVar10;
          closedir(*(DIR **)(lVar3 + 0x18));
          *(undefined8 *)(lVar3 + 0x18) = 0;
          if (param_2 == 3) {
            *(int *)(lVar3 + 0x40) = iVar8;
            *(undefined2 *)(lVar3 + 0x68) = 10;
            *piVar10 = iVar8;
          }
          else {
LAB_00101411:
            *piVar10 = iVar8;
          }
          goto LAB_00101164;
        }
        *(undefined2 *)(lVar3 + 0x68) = 1;
      }
      else if ((*(byte *)((long)param_1 + 0x49) & 1) != 0) {
        leave_dir(param_1,lVar3);
        iVar8 = fstat(local_44,(stat *)(lVar3 + 0x70));
        if (iVar8 != 0) goto LAB_001015b7;
        cVar6 = enter_dir(param_1,lVar3);
        if (cVar6 == '\0') {
          piVar10 = __errno_location();
          iVar8 = *piVar10;
          closedir(*(DIR **)(lVar3 + 0x18));
          *(undefined8 *)(lVar3 + 0x18) = 0;
          goto LAB_00101411;
        }
      }
      if (param_1[8] == 0) {
        local_70 = 100000;
      }
      else {
        local_70 = 0xffffffffffffffff;
      }
      if (param_2 == 2) {
LAB_001011b8:
        uVar15 = *(uint *)(param_1 + 9);
      }
      else {
        if ((((*(uint *)(param_1 + 9) & 0x38) == 0x18) && (*(long *)(lVar3 + 0x80) == 2)) &&
           (lVar17 = filesystem_type(lVar3,local_44), lVar17 != 0x9fa0)) {
          if (lVar17 < 0x9fa1) {
            if ((lVar17 == 0) || (lVar17 == 0x6969)) goto LAB_00101050;
          }
          else if ((lVar17 == 0x5346414f) || (lVar17 == 0xff534d42)) goto LAB_00101050;
          if (param_2 != 3) goto LAB_001011b8;
          bVar20 = false;
          bVar21 = true;
        }
        else {
LAB_00101050:
          bVar21 = param_2 == 3;
          bVar20 = true;
        }
        if ((*(byte *)((long)param_1 + 0x49) & 2) != 0) {
          local_44 = rpl_fcntl(local_44,0x406,3);
        }
        if ((-1 < local_44) && (iVar8 = fts_safe_changedir(param_1,lVar3,local_44,0), iVar8 == 0))
        goto LAB_00101379;
        if ((bVar21) && (bVar20)) {
          piVar10 = __errno_location();
          *(int *)(lVar3 + 0x40) = *piVar10;
        }
        *(ushort *)(lVar3 + 0x6a) = *(ushort *)(lVar3 + 0x6a) | 1;
        closedir(*(DIR **)(lVar3 + 0x18));
        uVar15 = *(uint *)(param_1 + 9);
        *(undefined8 *)(lVar3 + 0x18) = 0;
        if (((uVar15 & 0x200) != 0) && (-1 < local_44)) {
          close(local_44);
          uVar15 = *(uint *)(param_1 + 9);
        }
        *(undefined8 *)(lVar3 + 0x18) = 0;
      }
      bVar21 = false;
      goto LAB_00100ba1;
    }
    if (param_2 == 3) {
      *(undefined2 *)(lVar3 + 0x68) = 4;
      piVar10 = __errno_location();
      *(int *)(lVar3 + 0x40) = *piVar10;
    }
  }
  else {
    local_44 = dirfd(pDVar4);
    if (local_44 < 0) {
      piVar10 = __errno_location();
      iVar8 = *piVar10;
      closedir(*(DIR **)(lVar3 + 0x18));
      *(undefined8 *)(lVar3 + 0x18) = 0;
      if (param_2 == 3) {
        *(int *)(lVar3 + 0x40) = iVar8;
        *(undefined2 *)(lVar3 + 0x68) = 4;
      }
    }
    else {
      if (param_1[8] == 0) {
        local_70 = 100000;
LAB_00101379:
        bVar21 = true;
        uVar15 = *(uint *)(param_1 + 9);
      }
      else {
        local_70 = 0xffffffffffffffff;
        uVar15 = *(uint *)(param_1 + 9);
        bVar21 = true;
      }
LAB_00100ba1:
      uVar9 = *(ulong *)(lVar3 + 0x48);
      uVar19 = uVar9;
      local_68 = uVar9 - 1;
      if (*(char *)(*(long *)(lVar3 + 0x38) + -1 + uVar9) != '/') {
        uVar19 = uVar9 + 1;
        local_68 = uVar9;
      }
      if ((uVar15 & 4) != 0) {
        lVar17 = param_1[4];
        *(undefined1 *)(local_68 + lVar17) = 0x2f;
        local_60 = (undefined1 *)(local_68 + lVar17) + 1;
        __dirp = *(DIR **)(lVar3 + 0x18);
        uVar9 = param_1[6] - uVar19;
        local_78 = *(long *)(lVar3 + 0x58);
        if (__dirp != (DIR *)0x0) goto LAB_00100c05;
        bVar20 = false;
        local_90 = (void *)0x0;
        uVar18 = 0;
LAB_001011e2:
        bVar21 = (bool)(pDVar4 == (DIR *)0x0 & bVar21);
        if ((*(byte *)(param_1 + 9) & 4) == 0) {
LAB_0010124a:
          if (bVar21) goto LAB_0010124e;
LAB_00101284:
          if (uVar18 == 0) {
LAB_00101289:
            if (((param_2 == 3) && (*(short *)(lVar3 + 0x68) != 4)) &&
               (*(short *)(lVar3 + 0x68) != 7)) {
              *(undefined2 *)(lVar3 + 0x68) = 6;
            }
            piVar10 = __errno_location();
            iVar8 = *piVar10;
            while (local_90 != (void *)0x0) {
              pvVar13 = *(void **)((long)local_90 + 0x10);
              if (*(DIR **)((long)local_90 + 0x18) != (DIR *)0x0) {
                closedir(*(DIR **)((long)local_90 + 0x18));
              }
              free(local_90);
              local_90 = pvVar13;
            }
            goto LAB_001012ca;
          }
        }
        else {
          if (param_1[6] == uVar19) {
            local_60[-1] = 0;
            goto LAB_0010124a;
          }
          if (uVar18 == 0) {
            local_60[-1] = 0;
            if (!bVar21) goto LAB_00101289;
            goto LAB_0010125a;
          }
          *local_60 = 0;
          if (bVar21) goto LAB_0010124e;
        }
LAB_00101210:
        if (bVar20) {
          param_1[8] = (long)fts_compare_ino;
          local_90 = (void *)fts_sort(param_1,local_90,uVar18);
          param_1[8] = 0;
        }
        else if ((param_1[8] != 0) && (uVar18 != 1)) {
          local_90 = (void *)fts_sort(param_1,local_90,uVar18);
        }
        goto LAB_00101170;
      }
      __dirp = *(DIR **)(lVar3 + 0x18);
      uVar9 = param_1[6] - uVar19;
      local_78 = *(long *)(lVar3 + 0x58);
      if (__dirp != (DIR *)0x0) {
        local_60 = (undefined1 *)0x0;
LAB_00100c05:
        local_78 = local_78 + 1;
        uVar18 = 0;
        piVar10 = __errno_location();
        bVar20 = false;
        local_4b = '\0';
        local_a0 = (void *)0x0;
        local_90 = (void *)0x0;
        do {
          *piVar10 = 0;
          pdVar11 = readdir(__dirp);
          if (pdVar11 == (dirent *)0x0) {
            if (*piVar10 != 0) {
              *(int *)(lVar3 + 0x40) = *piVar10;
              *(ushort *)(lVar3 + 0x68) =
                   (-(ushort)(pDVar4 == (DIR *)0x0 && uVar18 == 0) & 0xfffd) + 7;
            }
            closedir(*(DIR **)(lVar3 + 0x18));
            *(undefined8 *)(lVar3 + 0x18) = 0;
LAB_001011d7:
            if (local_4b == '\0') goto LAB_001011e2;
            goto LAB_00100e08;
          }
          if ((((*(byte *)(param_1 + 9) & 0x20) == 0) && (pdVar11->d_name[0] == '.')) &&
             ((pdVar11->d_name[1] == '\0' || (*(short *)(pdVar11->d_name + 1) == 0x2e))))
          goto LAB_00100c67;
          sVar12 = strlen(pdVar11->d_name);
          pvVar13 = (void *)fts_alloc(param_1,pdVar11->d_name,sVar12);
          if (pvVar13 == (void *)0x0) {
LAB_001010d0:
            iVar8 = *piVar10;
            free(pvVar13);
            iVar2 = *piVar10;
            while (local_90 != (void *)0x0) {
              pvVar13 = *(void **)((long)local_90 + 0x10);
              if (*(DIR **)((long)local_90 + 0x18) != (DIR *)0x0) {
                closedir(*(DIR **)((long)local_90 + 0x18));
              }
              free(local_90);
              local_90 = pvVar13;
            }
            pDVar4 = *(DIR **)(lVar3 + 0x18);
            *piVar10 = iVar2;
            closedir(pDVar4);
            *(undefined8 *)(lVar3 + 0x18) = 0;
            *(undefined2 *)(lVar3 + 0x68) = 7;
            *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 0x2000;
            *piVar10 = iVar8;
            goto LAB_00101164;
          }
          if (uVar9 <= sVar12) {
            lVar17 = param_1[4];
            cVar6 = fts_palloc(param_1,local_68 + 2 + sVar12);
            if (cVar6 == '\0') goto LAB_001010d0;
            if ((param_1[4] != lVar17) && (local_4b = cVar6, (*(byte *)(param_1 + 9) & 4) != 0)) {
              local_60 = (undefined1 *)(uVar19 + param_1[4]);
            }
            uVar9 = param_1[6] - uVar19;
          }
          if (CARRY8(uVar19,sVar12)) {
            free(pvVar13);
            iVar8 = *piVar10;
            while (local_90 != (void *)0x0) {
              pvVar13 = *(void **)((long)local_90 + 0x10);
              if (*(DIR **)((long)local_90 + 0x18) != (DIR *)0x0) {
                closedir(*(DIR **)((long)local_90 + 0x18));
              }
              free(local_90);
              local_90 = pvVar13;
            }
            pDVar4 = *(DIR **)(lVar3 + 0x18);
            *piVar10 = iVar8;
            closedir(pDVar4);
            *(undefined8 *)(lVar3 + 0x18) = 0;
            *(undefined2 *)(lVar3 + 0x68) = 7;
            *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 0x2000;
            *piVar10 = 0x24;
            goto LAB_00101164;
          }
          *(long *)((long)pvVar13 + 0x58) = local_78;
          lVar17 = *param_1;
          *(ulong *)((long)pvVar13 + 0x48) = uVar19 + sVar12;
          uVar15 = *(uint *)(param_1 + 9);
          *(long *)((long)pvVar13 + 8) = lVar17;
          *(__ino_t *)((long)pvVar13 + 0x78) = pdVar11->d_ino;
          if ((uVar15 & 4) == 0) {
            *(long *)((long)pvVar13 + 0x30) = (long)pvVar13 + 0x100;
          }
          else {
            *(undefined8 *)((long)pvVar13 + 0x30) = *(undefined8 *)((long)pvVar13 + 0x38);
            memmove(local_60,(void *)((long)pvVar13 + 0x100),*(long *)((long)pvVar13 + 0x60) + 1);
            uVar15 = *(uint *)(param_1 + 9);
          }
          if ((param_1[8] == 0) || ((uVar15 & 0x400) != 0)) {
            bVar1 = pdVar11->d_type;
            lVar17 = 2;
            if (((uVar15 & 8) != 0) && ((bVar1 & 0xfb) != 0)) {
              lVar17 = 2 - (ulong)(uVar15 >> 4 & 1 | (uint)(bVar1 != 10));
            }
            uVar16 = 0;
            *(undefined2 *)((long)pvVar13 + 0x68) = 0xb;
            if (bVar1 - 1 < 0xc) {
              uVar16 = *(undefined4 *)(CSWTCH_49 + (ulong)(bVar1 - 1) * 4);
            }
            *(undefined4 *)((long)pvVar13 + 0x88) = uVar16;
            *(long *)((long)pvVar13 + 0xa0) = lVar17;
          }
          else {
            uVar7 = fts_stat(param_1,pvVar13,0);
            *(undefined2 *)((long)pvVar13 + 0x68) = uVar7;
          }
          *(undefined8 *)((long)pvVar13 + 0x10) = 0;
          pvVar14 = pvVar13;
          if (local_90 != (void *)0x0) {
            *(void **)((long)local_a0 + 0x10) = pvVar13;
            pvVar14 = local_90;
          }
          local_90 = pvVar14;
          local_a0 = pvVar13;
          if (uVar18 == 10000) {
            uVar18 = 0x2711;
            if (param_1[8] != 0) goto LAB_00100c67;
            lVar17 = filesystem_type(lVar3,local_44);
            if ((lVar17 == 0x1021994) || (lVar17 == 0xff534d42)) {
              bVar20 = false;
              goto LAB_00100c67;
            }
            bVar20 = lVar17 != 0x6969;
            __dirp = *(DIR **)(lVar3 + 0x18);
          }
          else {
            uVar18 = uVar18 + 1;
            if (local_70 <= uVar18) goto LAB_001011d7;
LAB_00100c67:
            __dirp = *(DIR **)(lVar3 + 0x18);
          }
        } while (__dirp != (DIR *)0x0);
        if (local_4b != '\0') {
LAB_00100e08:
          lVar5 = param_1[4];
          for (lVar17 = param_1[1]; lVar17 != 0; lVar17 = *(long *)(lVar17 + 0x10)) {
            if (*(long *)(lVar17 + 0x30) != lVar17 + 0x100) {
              *(long *)(lVar17 + 0x30) =
                   (*(long *)(lVar17 + 0x30) - *(long *)(lVar17 + 0x38)) + lVar5;
            }
            *(long *)(lVar17 + 0x38) = lVar5;
          }
          lVar17 = *(long *)((long)local_90 + 0x58);
          pvVar13 = local_90;
          while (-1 < lVar17) {
            if ((long)pvVar13 + 0x100 != *(long *)((long)pvVar13 + 0x30)) {
              *(long *)((long)pvVar13 + 0x30) =
                   (*(long *)((long)pvVar13 + 0x30) - *(long *)((long)pvVar13 + 0x38)) + lVar5;
            }
            pvVar14 = *(void **)((long)pvVar13 + 0x10);
            *(long *)((long)pvVar13 + 0x38) = lVar5;
            if (pvVar14 == (void *)0x0) {
              pvVar14 = *(void **)((long)pvVar13 + 8);
            }
            pvVar13 = pvVar14;
            lVar17 = *(long *)((long)pvVar14 + 0x58);
          }
        }
        goto LAB_001011e2;
      }
      local_90 = (void *)0x0;
      if ((pDVar4 != (DIR *)0x0) || (!bVar21)) goto LAB_00101289;
      bVar20 = false;
      uVar18 = 0;
LAB_0010124e:
      if ((param_2 != 1) && (uVar18 != 0)) goto LAB_00101210;
LAB_0010125a:
      if (*(long *)(lVar3 + 0x58) == 0) {
        iVar8 = restore_initial_cwd(param_1);
      }
      else {
        iVar8 = fts_safe_changedir(param_1,*(undefined8 *)(lVar3 + 8),0xffffffff,&_LC4);
      }
      if (iVar8 == 0) goto LAB_00101284;
      *(undefined2 *)(lVar3 + 0x68) = 7;
      *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 0x2000;
      piVar10 = __errno_location();
      iVar8 = *piVar10;
      while (local_90 != (void *)0x0) {
        pvVar13 = *(void **)((long)local_90 + 0x10);
        if (*(DIR **)((long)local_90 + 0x18) != (DIR *)0x0) {
          closedir(*(DIR **)((long)local_90 + 0x18));
        }
        free(local_90);
        local_90 = pvVar13;
      }
LAB_001012ca:
      *piVar10 = iVar8;
    }
  }
LAB_00101164:
  local_90 = (void *)0x0;
LAB_00101170:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_90;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



long * rpl_fts_open(long *param_1,uint param_2,long param_3)

{
  char cVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  long *__ptr;
  size_t sVar5;
  void *pvVar6;
  void *__ptr_00;
  long lVar7;
  int *piVar8;
  ulong uVar9;
  char *pcVar10;
  long lVar11;
  long *plVar12;
  void *local_50;
  byte local_42;
  void *local_40;
  
  if (((0xfff < param_2) || ((~param_2 & 0x204) == 0)) || ((param_2 & 0x12) == 0)) {
    piVar8 = __errno_location();
    *piVar8 = 0x16;
    return (long *)0x0;
  }
  __ptr = (long *)calloc(1,0x80);
  if (__ptr == (long *)0x0) {
    return (long *)0x0;
  }
  pcVar10 = (char *)*param_1;
  __ptr[8] = param_3;
  *(undefined4 *)((long)__ptr + 0x2c) = 0xffffff9c;
  uVar3 = param_2 & 0xfffffdff | 4;
  if ((param_2 & 2) == 0) {
    uVar3 = param_2;
  }
  *(uint *)(__ptr + 9) = uVar3;
  if (pcVar10 == (char *)0x0) {
    uVar9 = 0x1000;
  }
  else {
    uVar9 = 0;
    plVar12 = param_1;
    do {
      sVar5 = strlen(pcVar10);
      if (uVar9 < sVar5) {
        uVar9 = sVar5;
      }
      pcVar10 = (char *)plVar12[1];
      plVar12 = plVar12 + 1;
    } while (pcVar10 != (char *)0x0);
    uVar9 = uVar9 + 1;
    if (uVar9 < 0x1000) {
      uVar9 = 0x1000;
    }
  }
  local_42 = fts_palloc(__ptr,uVar9);
  if (local_42 == 0) goto LAB_00101aea;
  pcVar10 = (char *)*param_1;
  if (pcVar10 == (char *)0x0) {
    lVar7 = fts_alloc(__ptr,&_LC5,0);
    *__ptr = lVar7;
    if (lVar7 == 0) {
      piVar8 = __errno_location();
      iVar4 = *piVar8;
      local_50 = (void *)0x0;
    }
    else {
      *(undefined8 *)(lVar7 + 0x10) = 0;
      *(undefined2 *)(lVar7 + 0x68) = 9;
      *(undefined8 *)(lVar7 + 0x58) = 1;
      cVar1 = setup_dir(__ptr);
      if (cVar1 != '\0') goto LAB_00101a33;
      piVar8 = __errno_location();
      local_50 = (void *)0x0;
      iVar4 = *piVar8;
    }
LAB_00101ad3:
    *piVar8 = iVar4;
    free(local_50);
  }
  else {
    local_50 = (void *)fts_alloc(__ptr,&_LC5,0);
    if (local_50 != (void *)0x0) {
      *(undefined8 *)((long)local_50 + 0x58) = 0xffffffffffffffff;
      if (param_3 != 0) {
        local_42 = (byte)(*(uint *)(__ptr + 9) >> 10) & 1;
      }
      local_40 = (void *)0x0;
      __ptr_00 = (void *)0x0;
      lVar7 = 0;
LAB_0010192e:
      do {
        lVar11 = lVar7;
        sVar5 = strlen(pcVar10);
        if (((2 < sVar5) && ((((byte)(param_2 >> 0xb) ^ 1) & 1) != 0)) &&
           (pcVar10[sVar5 - 1] == '/')) {
          do {
            if (pcVar10[sVar5 - 2] != '/') break;
            sVar5 = sVar5 - 1;
          } while (sVar5 != 1);
        }
        pvVar6 = (void *)fts_alloc(__ptr,pcVar10);
        if (pvVar6 == (void *)0x0) goto LAB_00101aa0;
        *(undefined8 *)((long)pvVar6 + 0x58) = 0;
        *(void **)((long)pvVar6 + 8) = local_50;
        *(long *)((long)pvVar6 + 0x30) = (long)pvVar6 + 0x100;
        if ((__ptr_00 == (void *)0x0) || (local_42 == 0)) {
          uVar2 = fts_stat(__ptr,pvVar6,0);
          *(undefined2 *)((long)pvVar6 + 0x68) = uVar2;
          if (param_3 == 0) {
            *(undefined8 *)((long)pvVar6 + 0x10) = 0;
            if (__ptr_00 != (void *)0x0) goto LAB_00101a60;
            pcVar10 = (char *)param_1[lVar11 + 1];
            __ptr_00 = pvVar6;
            lVar7 = lVar11 + 1;
            local_40 = pvVar6;
            if (pcVar10 == (char *)0x0) break;
            goto LAB_0010192e;
          }
LAB_00101915:
          *(void **)((long)pvVar6 + 0x10) = __ptr_00;
          __ptr_00 = pvVar6;
        }
        else {
          *(undefined8 *)((long)pvVar6 + 0xa0) = 2;
          *(undefined2 *)((long)pvVar6 + 0x68) = 0xb;
          if (param_3 != 0) goto LAB_00101915;
          *(undefined8 *)((long)pvVar6 + 0x10) = 0;
LAB_00101a60:
          *(void **)((long)local_40 + 0x10) = pvVar6;
          local_40 = pvVar6;
        }
        pcVar10 = (char *)param_1[lVar11 + 1];
        lVar7 = lVar11 + 1;
      } while (pcVar10 != (char *)0x0);
      if ((param_3 == 0) || (lVar11 + 1U < 2)) {
        lVar7 = fts_alloc(__ptr,&_LC5,0);
        *__ptr = lVar7;
        if (lVar7 != 0) goto LAB_00101a12;
        piVar8 = __errno_location();
        iVar4 = *piVar8;
      }
      else {
        __ptr_00 = (void *)fts_sort(__ptr,__ptr_00,lVar11 + 1U);
        lVar7 = fts_alloc(__ptr,&_LC5,0);
        *__ptr = lVar7;
        if (lVar7 != 0) {
LAB_00101a12:
          *(void **)(lVar7 + 0x10) = __ptr_00;
          *(undefined2 *)(lVar7 + 0x68) = 9;
          *(undefined8 *)(lVar7 + 0x58) = 1;
          cVar1 = setup_dir(__ptr);
          if (cVar1 != '\0') {
LAB_00101a33:
            if ((*(uint *)(__ptr + 9) & 0x204) == 0) {
              iVar4 = open_safer(&_LC6,(*(uint *)(__ptr + 9) & 0x10) << 0xd | 0x90900);
              *(int *)(__ptr + 5) = iVar4;
              if (iVar4 < 0) {
                *(uint *)(__ptr + 9) = *(uint *)(__ptr + 9) | 4;
              }
            }
            i_ring_init(__ptr + 0xc,0xffffffff);
            return __ptr;
          }
        }
LAB_00101aa0:
        piVar8 = __errno_location();
        iVar4 = *piVar8;
        if (__ptr_00 == (void *)0x0) goto LAB_00101ad3;
      }
      do {
        pvVar6 = *(void **)((long)__ptr_00 + 0x10);
        if (*(DIR **)((long)__ptr_00 + 0x18) != (DIR *)0x0) {
          closedir(*(DIR **)((long)__ptr_00 + 0x18));
        }
        free(__ptr_00);
        __ptr_00 = pvVar6;
      } while (pvVar6 != (void *)0x0);
      goto LAB_00101ad3;
    }
  }
  free((void *)__ptr[4]);
LAB_00101aea:
  free(__ptr);
  return (long *)0x0;
}



int rpl_fts_close(long *param_1)

{
  void *pvVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  void *pvVar7;
  
  pvVar7 = (void *)*param_1;
  if (pvVar7 != (void *)0x0) {
    lVar2 = *(long *)((long)pvVar7 + 0x58);
    while (-1 < lVar2) {
      pvVar1 = *(void **)((long)pvVar7 + 0x10);
      if (pvVar1 == (void *)0x0) {
        pvVar1 = *(void **)((long)pvVar7 + 8);
        free(pvVar7);
        lVar2 = *(long *)((long)pvVar1 + 0x58);
        pvVar7 = pvVar1;
      }
      else {
        free(pvVar7);
        lVar2 = *(long *)((long)pvVar1 + 0x58);
        pvVar7 = pvVar1;
      }
    }
    free(pvVar7);
  }
  pvVar7 = (void *)param_1[1];
  if (pvVar7 != (void *)0x0) {
    piVar6 = __errno_location();
    iVar5 = *piVar6;
    do {
      pvVar1 = *(void **)((long)pvVar7 + 0x10);
      if (*(DIR **)((long)pvVar7 + 0x18) != (DIR *)0x0) {
        closedir(*(DIR **)((long)pvVar7 + 0x18));
      }
      free(pvVar7);
      pvVar7 = pvVar1;
    } while (pvVar1 != (void *)0x0);
    *piVar6 = iVar5;
  }
  free((void *)param_1[2]);
  free((void *)param_1[4]);
  if ((*(uint *)(param_1 + 9) & 0x200) == 0) {
    if ((*(uint *)(param_1 + 9) & 4) == 0) {
      iVar5 = fchdir((int)param_1[5]);
      if (iVar5 == 0) {
        iVar5 = close((int)param_1[5]);
        if (iVar5 == 0) goto LAB_00101cb0;
        piVar6 = __errno_location();
      }
      else {
        piVar6 = __errno_location();
        iVar5 = *piVar6;
        iVar4 = close((int)param_1[5]);
        if ((iVar5 != 0) || (iVar4 == 0)) goto LAB_00101cb3;
      }
      iVar5 = *piVar6;
      goto LAB_00101cb3;
    }
  }
  else if ((-1 < *(int *)((long)param_1 + 0x2c)) &&
          (iVar5 = close(*(int *)((long)param_1 + 0x2c)), iVar5 != 0)) {
    piVar6 = __errno_location();
    iVar5 = *piVar6;
    goto LAB_00101cb3;
  }
LAB_00101cb0:
  iVar5 = 0;
LAB_00101cb3:
  while (cVar3 = i_ring_empty(param_1 + 0xc), cVar3 == '\0') {
    iVar4 = i_ring_pop(param_1 + 0xc);
    if (-1 < iVar4) {
      close(iVar4);
    }
  }
  if (param_1[10] != 0) {
    hash_free();
  }
  if ((*(uint *)(param_1 + 9) & 0x102) == 0) {
    free((void *)param_1[0xb]);
  }
  else if ((void *)param_1[0xb] != (void *)0x0) {
    hash_free();
  }
  free(param_1);
  if (iVar5 != 0) {
    piVar6 = __errno_location();
    *piVar6 = iVar5;
    iVar5 = -1;
  }
  return iVar5;
}



/* WARNING: Type propagation algorithm not settling */

void * rpl_fts_read(long *param_1)

{
  char *__s;
  short sVar1;
  uint uVar2;
  void *pvVar3;
  long lVar4;
  char cVar5;
  byte bVar6;
  undefined2 uVar7;
  short sVar8;
  int iVar9;
  int *piVar10;
  char *pcVar11;
  size_t sVar12;
  void *pvVar13;
  void *pvVar14;
  long lVar15;
  
  pvVar14 = (void *)*param_1;
  if (pvVar14 == (void *)0x0) {
    return (void *)0x0;
  }
  uVar2 = *(uint *)(param_1 + 9);
  if ((uVar2 & 0x2000) != 0) {
    return (void *)0x0;
  }
  sVar8 = *(short *)((long)pvVar14 + 0x6c);
  *(undefined2 *)((long)pvVar14 + 0x6c) = 3;
  if (sVar8 == 1) {
    uVar7 = fts_stat(param_1,pvVar14,0);
    *(undefined2 *)((long)pvVar14 + 0x68) = uVar7;
    return pvVar14;
  }
  sVar1 = *(short *)((long)pvVar14 + 0x68);
  if (sVar8 == 2) {
    if (1 < (ushort)(sVar1 - 0xcU)) {
      if (sVar1 == 1) goto LAB_00101f1f;
      goto LAB_00101e65;
    }
    sVar8 = fts_stat(param_1,pvVar14,1);
    *(short *)((long)pvVar14 + 0x68) = sVar8;
    if (sVar8 == 1) {
      uVar2 = *(uint *)(param_1 + 9);
      if ((uVar2 & 4) != 0) {
        *param_1 = (long)pvVar14;
        goto LAB_0010215a;
      }
      if ((uVar2 & 0x200) == 0) {
        iVar9 = open_safer(&_LC6,(uVar2 & 0x10) << 0xd | 0x90900);
      }
      else {
        iVar9 = openat_safer(*(undefined4 *)((long)param_1 + 0x2c),&_LC6);
      }
      *(int *)((long)pvVar14 + 0x44) = iVar9;
      if (iVar9 < 0) {
        piVar10 = __errno_location();
        iVar9 = *piVar10;
        *(undefined2 *)((long)pvVar14 + 0x68) = 7;
        *(int *)((long)pvVar14 + 0x40) = iVar9;
        *param_1 = (long)pvVar14;
        return pvVar14;
      }
      *(ushort *)((long)pvVar14 + 0x6a) = *(ushort *)((long)pvVar14 + 0x6a) | 2;
      sVar8 = *(short *)((long)pvVar14 + 0x68);
      goto LAB_00102146;
    }
    *param_1 = (long)pvVar14;
    if (sVar8 != 0xb) {
      return pvVar14;
    }
LAB_001021b0:
    if (*(long *)((long)pvVar14 + 0xa0) != 2) {
      if (*(long *)((long)pvVar14 + 0xa0) != 1) {
                    /* WARNING: Subroutine does not return */
        rpl_fts_read_cold();
      }
      return pvVar14;
    }
    sVar8 = fts_stat(param_1,pvVar14,0);
    *(short *)((long)pvVar14 + 0x68) = sVar8;
  }
  else {
    if (sVar1 == 1) {
      if (sVar8 == 4) goto LAB_00101faa;
LAB_00101f1f:
      if (((uVar2 & 0x40) != 0) && (*(long *)((long)pvVar14 + 0x70) != param_1[3])) {
LAB_00101faa:
        if ((*(byte *)((long)pvVar14 + 0x6a) & 2) != 0) {
          close(*(int *)((long)pvVar14 + 0x44));
        }
        pvVar13 = (void *)param_1[1];
        if (pvVar13 != (void *)0x0) {
          piVar10 = __errno_location();
          iVar9 = *piVar10;
          do {
            pvVar3 = *(void **)((long)pvVar13 + 0x10);
            if (*(DIR **)((long)pvVar13 + 0x18) != (DIR *)0x0) {
              closedir(*(DIR **)((long)pvVar13 + 0x18));
            }
            free(pvVar13);
            pvVar13 = pvVar3;
          } while (pvVar3 != (void *)0x0);
          *piVar10 = iVar9;
          param_1[1] = 0;
        }
        *(undefined2 *)((long)pvVar14 + 0x68) = 6;
        leave_dir(param_1,pvVar14);
        return pvVar14;
      }
      pvVar13 = (void *)param_1[1];
      if (pvVar13 == (void *)0x0) {
LAB_00102226:
        pvVar13 = (void *)fts_build(param_1,3);
        param_1[1] = (long)pvVar13;
        if (pvVar13 == (void *)0x0) {
          if ((*(byte *)((long)param_1 + 0x49) & 0x20) != 0) {
            return (void *)0x0;
          }
          if ((*(int *)((long)pvVar14 + 0x40) != 0) && (*(short *)((long)pvVar14 + 0x68) != 4)) {
            *(undefined2 *)((long)pvVar14 + 0x68) = 7;
          }
          leave_dir(param_1,pvVar14);
          return pvVar14;
        }
      }
      else {
        if ((uVar2 & 0x1000) != 0) {
          *(uint *)(param_1 + 9) = uVar2 & 0xffffefff;
          piVar10 = __errno_location();
          iVar9 = *piVar10;
          do {
            pvVar3 = *(void **)((long)pvVar13 + 0x10);
            if (*(DIR **)((long)pvVar13 + 0x18) != (DIR *)0x0) {
              closedir(*(DIR **)((long)pvVar13 + 0x18));
            }
            free(pvVar13);
            pvVar13 = pvVar3;
          } while (pvVar3 != (void *)0x0);
          *piVar10 = iVar9;
          param_1[1] = 0;
          goto LAB_00102226;
        }
        iVar9 = fts_safe_changedir(param_1,pvVar14,0xffffffff,*(undefined8 *)((long)pvVar14 + 0x30))
        ;
        if (iVar9 == 0) {
          pvVar13 = (void *)param_1[1];
        }
        else {
          piVar10 = __errno_location();
          iVar9 = *piVar10;
          *(ushort *)((long)pvVar14 + 0x6a) = *(ushort *)((long)pvVar14 + 0x6a) | 1;
          *(int *)((long)pvVar14 + 0x40) = iVar9;
          pvVar13 = (void *)param_1[1];
          for (pvVar14 = pvVar13; pvVar14 != (void *)0x0; pvVar14 = *(void **)((long)pvVar14 + 0x10)
              ) {
            *(undefined8 *)((long)pvVar14 + 0x30) =
                 *(undefined8 *)(*(long *)((long)pvVar14 + 8) + 0x30);
          }
        }
      }
      param_1[1] = 0;
    }
    else {
LAB_00101e65:
      do {
        pvVar13 = *(void **)((long)pvVar14 + 0x10);
        if (pvVar13 == (void *)0x0) {
          pvVar13 = *(void **)((long)pvVar14 + 8);
          if (*(long *)((long)pvVar13 + 0x18) != 0) {
            lVar15 = *(long *)((long)pvVar13 + 0x48);
            *param_1 = (long)pvVar13;
            *(undefined1 *)(param_1[4] + lVar15) = 0;
            pvVar13 = (void *)fts_build(param_1,3);
            if (pvVar13 != (void *)0x0) {
              free(pvVar14);
              goto LAB_0010210a;
            }
            if ((*(byte *)((long)param_1 + 0x49) & 0x20) != 0) {
              return (void *)0x0;
            }
            pvVar13 = *(void **)((long)pvVar14 + 8);
          }
          *param_1 = (long)pvVar13;
          free(pvVar14);
          if (*(long *)((long)pvVar13 + 0x58) == -1) {
            free(pvVar13);
            piVar10 = __errno_location();
            *piVar10 = 0;
            *param_1 = 0;
            return (void *)0x0;
          }
          if (*(short *)((long)pvVar13 + 0x68) == 0xb) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined1 *)(param_1[4] + *(long *)((long)pvVar13 + 0x48)) = 0;
          if (*(long *)((long)pvVar13 + 0x58) == 0) {
            iVar9 = restore_initial_cwd(param_1);
joined_r0x001022f2:
            if (iVar9 != 0) {
              piVar10 = __errno_location();
              *(int *)((long)pvVar13 + 0x40) = *piVar10;
              *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 0x2000;
            }
          }
          else if ((*(ushort *)((long)pvVar13 + 0x6a) & 2) == 0) {
            if ((*(ushort *)((long)pvVar13 + 0x6a) & 1) == 0) {
              iVar9 = fts_safe_changedir(param_1,*(undefined8 *)((long)pvVar13 + 8),0xffffffff,&_LC4
                                        );
              goto joined_r0x001022f2;
            }
          }
          else {
            iVar9 = *(int *)((long)pvVar13 + 0x44);
            if ((*(uint *)(param_1 + 9) & 4) == 0) {
              if ((*(uint *)(param_1 + 9) & 0x200) == 0) {
                iVar9 = fchdir(iVar9);
                if (iVar9 != 0) {
                  piVar10 = __errno_location();
                  *(int *)((long)pvVar13 + 0x40) = *piVar10;
                  *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 0x2000;
                }
                iVar9 = *(int *)((long)pvVar13 + 0x44);
              }
              else {
                cwd_advance_fd(param_1,iVar9,1);
                iVar9 = *(int *)((long)pvVar13 + 0x44);
              }
            }
            close(iVar9);
          }
          if (*(short *)((long)pvVar13 + 0x68) != 2) {
            if (*(int *)((long)pvVar13 + 0x40) == 0) {
              *(undefined2 *)((long)pvVar13 + 0x68) = 6;
              leave_dir(param_1,pvVar13);
            }
            else {
              *(undefined2 *)((long)pvVar13 + 0x68) = 7;
            }
          }
          bVar6 = *(byte *)((long)param_1 + 0x49) & 0x20;
          pvVar14 = pvVar13;
          goto joined_r0x00101ef8;
        }
        *param_1 = (long)pvVar13;
        free(pvVar14);
        if (*(long *)((long)pvVar13 + 0x58) == 0) {
          iVar9 = restore_initial_cwd(param_1);
          if (iVar9 != 0) {
            *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 0x2000;
            return (void *)0x0;
          }
          if ((*(uint *)(param_1 + 9) & 0x102) == 0) {
            free((void *)param_1[0xb]);
          }
          else if ((void *)param_1[0xb] != (void *)0x0) {
            hash_free();
          }
          pvVar14 = (void *)param_1[4];
          __s = (char *)((long)pvVar13 + 0x100);
          *(long *)((long)pvVar13 + 0x48) = *(long *)((long)pvVar13 + 0x60);
          memmove(pvVar14,__s,*(long *)((long)pvVar13 + 0x60) + 1);
          pcVar11 = strrchr(__s,0x2f);
          if ((pcVar11 != (char *)0x0) &&
             ((__s != pcVar11 || (*(char *)((long)pvVar13 + 0x101) != '\0')))) {
            sVar12 = strlen(pcVar11 + 1);
            memmove(__s,pcVar11 + 1,sVar12 + 1);
            *(size_t *)((long)pvVar13 + 0x60) = sVar12;
          }
          lVar15 = param_1[4];
          *(long *)((long)pvVar13 + 0x30) = lVar15;
          *(long *)((long)pvVar13 + 0x38) = lVar15;
          cVar5 = setup_dir(param_1);
          if (cVar5 == '\0') {
            if ((*(uint *)(param_1 + 9) & 0x102) == 0) {
              free((void *)param_1[0xb]);
              return (void *)0x0;
            }
            if ((void *)param_1[0xb] == (void *)0x0) {
              return (void *)0x0;
            }
            hash_free();
            return (void *)0x0;
          }
          goto LAB_00102142;
        }
        pvVar14 = pvVar13;
      } while (*(short *)((long)pvVar13 + 0x6c) == 4);
      if (*(short *)((long)pvVar13 + 0x6c) == 2) {
        sVar8 = fts_stat(param_1,pvVar13,1);
        *(short *)((long)pvVar13 + 0x68) = sVar8;
        if ((sVar8 == 1) && (uVar2 = *(uint *)(param_1 + 9), (uVar2 & 4) == 0)) {
          if ((uVar2 & 0x200) == 0) {
            iVar9 = open_safer(&_LC6,(uVar2 & 0x10) << 0xd | 0x90900);
          }
          else {
            iVar9 = openat_safer(*(undefined4 *)((long)param_1 + 0x2c),&_LC6);
          }
          *(int *)((long)pvVar13 + 0x44) = iVar9;
          if (iVar9 < 0) {
            piVar10 = __errno_location();
            iVar9 = *piVar10;
            *(undefined2 *)((long)pvVar13 + 0x68) = 7;
            *(int *)((long)pvVar13 + 0x40) = iVar9;
          }
          else {
            *(ushort *)((long)pvVar13 + 0x6a) = *(ushort *)((long)pvVar13 + 0x6a) | 2;
          }
        }
        *(undefined2 *)((long)pvVar13 + 0x6c) = 3;
      }
    }
LAB_0010210a:
    lVar15 = *(long *)(*(long *)((long)pvVar13 + 8) + 0x48);
    if (*(char *)(*(long *)(*(long *)((long)pvVar13 + 8) + 0x38) + -1 + lVar15) == '/') {
      lVar15 = lVar15 + -1;
    }
    lVar4 = param_1[4];
    *(undefined1 *)(lVar15 + lVar4) = 0x2f;
    memmove((undefined1 *)(lVar15 + lVar4) + 1,(void *)((long)pvVar13 + 0x100),
            *(long *)((long)pvVar13 + 0x60) + 1);
LAB_00102142:
    sVar8 = *(short *)((long)pvVar13 + 0x68);
    pvVar14 = pvVar13;
LAB_00102146:
    *param_1 = (long)pvVar14;
    if (sVar8 == 0xb) goto LAB_001021b0;
  }
  if (sVar8 != 1) {
    return pvVar14;
  }
LAB_0010215a:
  if (*(long *)((long)pvVar14 + 0x58) == 0) {
    param_1[3] = *(long *)((long)pvVar14 + 0x70);
  }
  bVar6 = enter_dir(param_1,pvVar14);
joined_r0x00101ef8:
  if (bVar6 != 0) {
    return (void *)0x0;
  }
  return pvVar14;
}



undefined8 rpl_fts_set(undefined8 param_1,long param_2,uint param_3)

{
  int *piVar1;
  
  if (param_3 < 5) {
    *(short *)(param_2 + 0x6c) = (short)param_3;
    return 0;
  }
  piVar1 = __errno_location();
  *piVar1 = 0x16;
  return 1;
}



long rpl_fts_children(long *param_1,uint param_2)

{
  uint uVar1;
  void *pvVar2;
  int __fd;
  int iVar3;
  int *piVar4;
  long lVar5;
  void *__ptr;
  undefined8 uVar6;
  
  piVar4 = __errno_location();
  if ((param_2 & 0xffffefff) == 0) {
    lVar5 = *param_1;
    *piVar4 = 0;
    if ((*(byte *)((long)param_1 + 0x49) & 0x20) == 0) {
      if (*(short *)(lVar5 + 0x68) == 9) {
        return *(long *)(lVar5 + 0x10);
      }
      if (*(short *)(lVar5 + 0x68) == 1) {
        __ptr = (void *)param_1[1];
        if (__ptr != (void *)0x0) {
          do {
            pvVar2 = *(void **)((long)__ptr + 0x10);
            if (*(DIR **)((long)__ptr + 0x18) != (DIR *)0x0) {
              closedir(*(DIR **)((long)__ptr + 0x18));
            }
            free(__ptr);
            __ptr = pvVar2;
          } while (pvVar2 != (void *)0x0);
          *piVar4 = 0;
        }
        uVar6 = 1;
        if (param_2 == 0x1000) {
          *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 0x1000;
          uVar6 = 2;
        }
        if (((*(long *)(lVar5 + 0x58) == 0) && (**(char **)(lVar5 + 0x30) != '/')) &&
           (uVar1 = *(uint *)(param_1 + 9), (uVar1 & 4) == 0)) {
          if ((uVar1 & 0x200) == 0) {
            __fd = open_safer(&_LC6,(uVar1 & 0x10) << 0xd | 0x90900);
          }
          else {
            __fd = openat_safer(*(undefined4 *)((long)param_1 + 0x2c),&_LC6);
          }
          if (__fd < 0) {
            param_1[1] = 0;
            return 0;
          }
          lVar5 = fts_build(param_1,uVar6);
          param_1[1] = lVar5;
          if ((*(byte *)((long)param_1 + 0x49) & 2) == 0) {
            iVar3 = fchdir(__fd);
            if (iVar3 != 0) {
              iVar3 = *piVar4;
              close(__fd);
              *piVar4 = iVar3;
              return 0;
            }
            close(__fd);
          }
          else {
            cwd_advance_fd(param_1,__fd,1);
          }
          lVar5 = param_1[1];
        }
        else {
          lVar5 = fts_build(param_1,uVar6);
          param_1[1] = lVar5;
        }
        return lVar5;
      }
    }
  }
  else {
    *piVar4 = 0x16;
  }
  return 0;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void filesystem_type_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void cwd_advance_fd_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void leave_dir_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rpl_fts_read_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


