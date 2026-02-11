
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
      goto LAB_00100133;
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
LAB_00100133:
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
LAB_001002aa:
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
      goto LAB_001002aa;
    }
    plVar3 = *(long **)(param_1 + 0x10);
  }
  free(plVar3);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return param_2;
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
      if (lVar4 != 0) goto LAB_0010039c;
    }
    else {
LAB_0010039c:
      local_b8[0] = *(undefined8 *)(param_1 + 0x70);
      lVar3 = hash_lookup(lVar4,local_b8);
      if (lVar3 != 0) {
        local_a8.f_type = *(long *)(lVar3 + 8);
        goto LAB_001003f7;
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
      goto LAB_001003f7;
    }
  }
  local_a8.f_type = 0;
LAB_001003f7:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_a8.f_type;
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
      goto LAB_0010056c;
    }
    iVar2 = i_ring_push(param_1 + 0x60,*(undefined4 *)(param_1 + 0x2c));
    if (iVar2 < 0) {
      *(undefined4 *)(param_1 + 0x2c) = 0xffffff9c;
    }
    else {
      close(iVar2);
      *(undefined4 *)(param_1 + 0x2c) = 0xffffff9c;
    }
  }
  bVar3 = false;
LAB_0010056c:
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
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  long in_FS_OFFSET;
  char local_d9;
  stat local_d8;
  long local_40;
  
  uVar7 = *(uint *)(param_1 + 0x48);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = param_3;
  if ((((param_4 == (char *)0x0) || (*param_4 != '.')) || (param_4[1] != '.')) ||
     (param_4[2] != '\0')) {
    if ((uVar7 & 4) == 0) {
      if (param_3 < 0) {
        local_d9 = '\0';
LAB_0010089c:
        uVar1 = *(undefined4 *)(param_1 + 0x2c);
        uVar6 = (uVar7 & 0x10) << 0xd | 0x90900;
        if ((uVar7 & 0x200) == 0) {
LAB_001006f6:
          iVar4 = open_safer(param_4,uVar6);
        }
        else {
LAB_00100809:
          iVar4 = openat_safer(uVar1,param_4,uVar6);
        }
        if (iVar4 < 0) {
          iVar2 = -1;
          goto LAB_00100682;
        }
        uVar7 = *(uint *)(param_1 + 0x48);
      }
      else {
        local_d9 = '\0';
      }
      iVar2 = param_3;
      if (((uVar7 & 2) != 0) ||
         (((param_4 != (char *)0x0 && (*param_4 == '.')) &&
          ((param_4[1] == '.' && (param_4[2] == '\0')))))) goto LAB_00100720;
LAB_00100663:
      if ((uVar7 & 0x200) != 0) {
        iVar2 = *(int *)(param_1 + 0x2c);
        if ((iVar2 == iVar4) && (iVar2 != -100)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (local_d9 == '\0') {
          iVar2 = i_ring_push(param_1 + 0x60);
          if (-1 < iVar2) {
            close(iVar2);
          }
        }
        else if (((uVar7 & 4) == 0) && (-1 < iVar2)) {
          close(iVar2);
        }
        *(int *)(param_1 + 0x2c) = iVar4;
        iVar2 = 0;
        goto LAB_00100682;
      }
      iVar2 = fchdir(iVar4);
      goto joined_r0x00100783;
    }
  }
  else if ((uVar7 & 4) == 0) {
    if (param_3 < 0) {
      if ((uVar7 & 0x200) == 0) {
        local_d9 = '\x01';
        uVar6 = (uVar7 & 0x10) << 0xd | 0x90900;
        goto LAB_001006f6;
      }
      local_d9 = i_ring_empty(param_1 + 0x60);
      if (local_d9 != '\0') {
        uVar1 = *(undefined4 *)(param_1 + 0x2c);
        uVar6 = (uVar7 & 0x10) << 0xd | 0x90900;
        goto LAB_00100809;
      }
      iVar2 = i_ring_pop(param_1 + 0x60);
      uVar7 = *(uint *)(param_1 + 0x48);
      if (iVar2 < 0) {
        local_d9 = '\x01';
        goto LAB_0010089c;
      }
      local_d9 = '\x01';
      param_3 = iVar2;
      iVar4 = iVar2;
      if ((uVar7 & 2) == 0) goto LAB_00100663;
    }
    else {
      local_d9 = '\x01';
      iVar2 = param_3;
    }
LAB_00100720:
    iVar3 = fstat(iVar4,&local_d8);
    param_3 = iVar2;
    if (iVar3 == 0) {
      if ((*(__dev_t *)(param_2 + 0x70) == local_d8.st_dev) &&
         (*(__ino_t *)(param_2 + 0x78) == local_d8.st_ino)) {
        uVar7 = *(uint *)(param_1 + 0x48);
        goto LAB_00100663;
      }
      piVar5 = __errno_location();
      *piVar5 = 2;
    }
    iVar2 = -1;
joined_r0x00100783:
    if (param_3 < 0) {
      piVar5 = __errno_location();
      iVar3 = *piVar5;
      close(iVar4);
      *piVar5 = iVar3;
    }
    goto LAB_00100682;
  }
  if (((uVar7 & 0x200) == 0) || (param_3 < 0)) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    close(param_3);
  }
LAB_00100682:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



void * fts_build(long *param_1,int param_2)

{
  void *pvVar1;
  byte bVar2;
  undefined8 *puVar3;
  DIR *pDVar4;
  void *__ptr;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  char cVar9;
  undefined2 uVar10;
  int iVar11;
  int *piVar12;
  dirent *pdVar13;
  size_t sVar14;
  void *pvVar15;
  void *pvVar16;
  long lVar17;
  undefined8 *__ptr_00;
  undefined8 *puVar18;
  long lVar19;
  ulong uVar20;
  undefined4 uVar21;
  uint uVar22;
  size_t __size;
  DIR *__dirp;
  ulong uVar23;
  ulong uVar24;
  long in_FS_OFFSET;
  bool bVar25;
  bool bVar26;
  void *local_98;
  void *local_90;
  ulong local_80;
  long local_70;
  ulong local_68;
  undefined1 *local_60;
  int local_44;
  long local_40;
  
  puVar3 = (undefined8 *)*param_1;
  pDVar4 = (DIR *)puVar3[3];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (pDVar4 == (DIR *)0x0) {
    uVar22 = *(uint *)(param_1 + 9);
    uVar24 = (ulong)(uVar22 & 0x10);
    if (((uVar22 & 0x10) != 0) && (uVar24 = 0x20000, (uVar22 & 1) != 0)) {
      uVar24 = (ulong)(puVar3[0xb] != 0) << 0x11;
    }
    uVar21 = 0xffffff9c;
    if ((uVar22 & 0x204) == 0x200) {
      uVar21 = *(undefined4 *)((long)param_1 + 0x2c);
    }
    lVar19 = opendirat(uVar21,puVar3[6],uVar24,&local_44);
    puVar3[3] = lVar19;
    if (lVar19 != 0) {
      if (*(short *)(puVar3 + 0xd) == 0xb) {
        iVar11 = fstat(local_44,(stat *)(puVar3 + 0xe));
        if (iVar11 != 0) {
LAB_0010153b:
          piVar12 = __errno_location();
          iVar11 = *piVar12;
          closedir((DIR *)puVar3[3]);
          puVar3[3] = 0;
          if (param_2 == 3) {
            *(int *)(puVar3 + 8) = iVar11;
            *(undefined2 *)(puVar3 + 0xd) = 10;
            *piVar12 = iVar11;
          }
          else {
            *piVar12 = iVar11;
          }
          goto LAB_00100ef2;
        }
        *(undefined2 *)(puVar3 + 0xd) = 1;
      }
      else if ((*(byte *)((long)param_1 + 0x49) & 1) != 0) {
        leave_dir(param_1,puVar3);
        iVar11 = fstat(local_44,(stat *)(puVar3 + 0xe));
        if (iVar11 != 0) goto LAB_0010153b;
        if ((*(uint *)(param_1 + 9) & 0x102) == 0) {
          cVar9 = cycle_check(param_1[0xb],(stat *)(puVar3 + 0xe));
          if (cVar9 != '\0') {
            *puVar3 = puVar3;
            *(undefined2 *)(puVar3 + 0xd) = 2;
          }
        }
        else {
          __ptr_00 = (undefined8 *)malloc(0x18);
          if (__ptr_00 == (undefined8 *)0x0) {
LAB_0010161c:
            piVar12 = __errno_location();
            iVar11 = *piVar12;
            closedir((DIR *)puVar3[3]);
            puVar3[3] = 0;
            *piVar12 = iVar11;
            goto LAB_00100ef2;
          }
          uVar6 = puVar3[0xe];
          uVar7 = puVar3[0xf];
          __ptr_00[2] = puVar3;
          lVar19 = param_1[0xb];
          *__ptr_00 = uVar6;
          __ptr_00[1] = uVar7;
          puVar18 = (undefined8 *)hash_insert(lVar19,__ptr_00);
          if (__ptr_00 != puVar18) {
            free(__ptr_00);
            if (puVar18 == (undefined8 *)0x0) goto LAB_0010161c;
            uVar6 = puVar18[2];
            *(undefined2 *)(puVar3 + 0xd) = 2;
            *puVar3 = uVar6;
          }
        }
      }
      if (param_1[8] == 0) {
        local_68 = 100000;
      }
      else {
        local_68 = 0xffffffffffffffff;
      }
      if (param_2 == 2) {
LAB_00101088:
        uVar22 = *(uint *)(param_1 + 9);
      }
      else {
        if ((((*(uint *)(param_1 + 9) & 0x38) == 0x18) && (puVar3[0x10] == 2)) &&
           (lVar19 = filesystem_type(puVar3,local_44), lVar19 != 0x9fa0)) {
          if (lVar19 < 0x9fa1) {
            if ((lVar19 == 0) || (lVar19 == 0x6969)) goto LAB_00100ff8;
          }
          else if ((lVar19 == 0x5346414f) || (lVar19 == 0xff534d42)) goto LAB_00100ff8;
          if (param_2 != 3) goto LAB_00101088;
          bVar26 = false;
        }
        else {
LAB_00100ff8:
          bVar26 = param_2 == 3;
        }
        if ((*(byte *)((long)param_1 + 0x49) & 2) != 0) {
          local_44 = rpl_fcntl(local_44,0x406,3);
        }
        if ((-1 < local_44) && (iVar11 = fts_safe_changedir(param_1,puVar3,local_44,0), iVar11 == 0)
           ) goto LAB_00101299;
        if (bVar26) {
          piVar12 = __errno_location();
          *(int *)(puVar3 + 8) = *piVar12;
        }
        *(ushort *)((long)puVar3 + 0x6a) = *(ushort *)((long)puVar3 + 0x6a) | 1;
        closedir((DIR *)puVar3[3]);
        uVar22 = *(uint *)(param_1 + 9);
        puVar3[3] = 0;
        if (((uVar22 & 0x200) != 0) && (-1 < local_44)) {
          close(local_44);
          uVar22 = *(uint *)(param_1 + 9);
        }
        puVar3[3] = 0;
      }
      bVar26 = false;
      goto LAB_00100982;
    }
    if (param_2 == 3) {
      *(undefined2 *)(puVar3 + 0xd) = 4;
      piVar12 = __errno_location();
      *(int *)(puVar3 + 8) = *piVar12;
    }
  }
  else {
    local_44 = dirfd(pDVar4);
    if (local_44 < 0) {
      piVar12 = __errno_location();
      iVar11 = *piVar12;
      closedir((DIR *)puVar3[3]);
      puVar3[3] = 0;
      if (param_2 == 3) {
        *(int *)(puVar3 + 8) = iVar11;
        *(undefined2 *)(puVar3 + 0xd) = 4;
      }
    }
    else {
      if (param_1[8] == 0) {
        local_68 = 100000;
LAB_00101299:
        bVar26 = true;
        uVar22 = *(uint *)(param_1 + 9);
      }
      else {
        local_68 = 0xffffffffffffffff;
        uVar22 = *(uint *)(param_1 + 9);
        bVar26 = true;
      }
LAB_00100982:
      uVar24 = puVar3[9];
      uVar20 = uVar24 - 1;
      uVar23 = uVar24;
      if (*(char *)(puVar3[7] + -1 + uVar24) != '/') {
        uVar23 = uVar24 + 1;
        uVar20 = uVar24;
      }
      if ((uVar22 & 4) != 0) {
        lVar19 = param_1[4];
        *(undefined1 *)(uVar20 + lVar19) = 0x2f;
        local_60 = (undefined1 *)(uVar20 + lVar19) + 1;
        __dirp = (DIR *)puVar3[3];
        local_80 = param_1[6] - uVar23;
        local_70 = puVar3[0xb];
        if (__dirp != (DIR *)0x0) goto LAB_001009dc;
        bVar25 = false;
        local_90 = (void *)0x0;
        uVar24 = 0;
LAB_001010ba:
        bVar26 = (bool)(pDVar4 == (DIR *)0x0 & bVar26);
        if ((*(byte *)(param_1 + 9) & 4) == 0) {
LAB_0010111f:
          if (bVar26) goto LAB_00101123;
LAB_00101159:
          if (uVar24 == 0) {
LAB_0010115e:
            if (((param_2 == 3) && (*(short *)(puVar3 + 0xd) != 4)) &&
               (*(short *)(puVar3 + 0xd) != 7)) {
              *(undefined2 *)(puVar3 + 0xd) = 6;
            }
            piVar12 = __errno_location();
            iVar11 = *piVar12;
            while (local_90 != (void *)0x0) {
              pvVar15 = *(void **)((long)local_90 + 0x10);
              if (*(DIR **)((long)local_90 + 0x18) == (DIR *)0x0) {
                free(local_90);
                local_90 = pvVar15;
              }
              else {
                closedir(*(DIR **)((long)local_90 + 0x18));
                free(local_90);
                local_90 = pvVar15;
              }
            }
            goto LAB_001011af;
          }
        }
        else {
          if (param_1[6] == uVar23) {
            local_60[-1] = 0;
            goto LAB_0010111f;
          }
          if (uVar24 == 0) {
            local_60[-1] = 0;
            if (!bVar26) goto LAB_0010115e;
            goto LAB_0010112f;
          }
          *local_60 = 0;
          if (bVar26) goto LAB_00101123;
        }
LAB_001010e5:
        if (bVar25) {
          param_1[8] = (long)fts_compare_ino;
          local_90 = (void *)fts_sort(param_1,local_90,uVar24);
          param_1[8] = 0;
        }
        else if ((param_1[8] != 0) && (uVar24 != 1)) {
          local_90 = (void *)fts_sort(param_1,local_90,uVar24);
        }
        goto LAB_00100ef8;
      }
      __dirp = (DIR *)puVar3[3];
      local_80 = param_1[6] - uVar23;
      local_70 = puVar3[0xb];
      if (__dirp != (DIR *)0x0) {
        local_60 = (undefined1 *)0x0;
LAB_001009dc:
        local_70 = local_70 + 1;
        uVar24 = 0;
        piVar12 = __errno_location();
        bVar25 = false;
        bVar8 = false;
        local_98 = (void *)0x0;
        local_90 = (void *)0x0;
        do {
          *piVar12 = 0;
          pdVar13 = readdir(__dirp);
          if (pdVar13 == (dirent *)0x0) {
            if (*piVar12 != 0) {
              *(int *)(puVar3 + 8) = *piVar12;
              *(ushort *)(puVar3 + 0xd) =
                   (-(ushort)(pDVar4 == (DIR *)0x0 && uVar24 == 0) & 0xfffd) + 7;
            }
            closedir((DIR *)puVar3[3]);
            puVar3[3] = 0;
LAB_001010af:
            if (bVar8) goto LAB_00100cf8;
            goto LAB_001010ba;
          }
          if ((((*(byte *)(param_1 + 9) & 0x20) == 0) && (pdVar13->d_name[0] == '.')) &&
             ((pdVar13->d_name[1] == '\0' || (*(short *)(pdVar13->d_name + 1) == 0x2e))))
          goto LAB_00100b0b;
          sVar14 = strlen(pdVar13->d_name);
          uVar20 = sVar14 + 0x108 & 0xfffffffffffffff8;
          pvVar15 = malloc(uVar20);
          if (pvVar15 == (void *)0x0) {
            iVar11 = *piVar12;
LAB_00100e68:
            free(pvVar15);
            while (local_90 != (void *)0x0) {
              pvVar15 = *(void **)((long)local_90 + 0x10);
              if (*(DIR **)((long)local_90 + 0x18) == (DIR *)0x0) {
                free(local_90);
                local_90 = pvVar15;
              }
              else {
                closedir(*(DIR **)((long)local_90 + 0x18));
                free(local_90);
                local_90 = pvVar15;
              }
            }
            pDVar4 = (DIR *)puVar3[3];
            *piVar12 = iVar11;
            closedir(pDVar4);
            puVar3[3] = 0;
            *(undefined2 *)(puVar3 + 0xd) = 7;
            *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 0x2000;
            *piVar12 = iVar11;
            goto LAB_00100ef2;
          }
          pvVar1 = (void *)((long)pvVar15 + 0x100);
          __memcpy_chk(pvVar1,pdVar13->d_name,sVar14,uVar20 - 0x100);
          uVar21 = _LC3;
          __ptr = (void *)param_1[4];
          *(undefined1 *)((long)pvVar15 + sVar14 + 0x100) = 0;
          *(size_t *)((long)pvVar15 + 0x60) = sVar14;
          *(undefined4 *)((long)pvVar15 + 0x6a) = uVar21;
          *(long **)((long)pvVar15 + 0x50) = param_1;
          *(void **)((long)pvVar15 + 0x38) = __ptr;
          *(undefined4 *)((long)pvVar15 + 0x40) = 0;
          *(undefined8 *)((long)pvVar15 + 0x18) = 0;
          *(undefined8 *)((long)pvVar15 + 0x20) = 0;
          *(undefined8 *)((long)pvVar15 + 0x28) = 0;
          if (local_80 <= sVar14) {
            __size = uVar23 + 0x101 + param_1[6] + sVar14;
            if (__size < (ulong)param_1[6]) {
              iVar11 = 0x24;
              free(__ptr);
              param_1[4] = 0;
              *piVar12 = 0x24;
            }
            else {
              param_1[6] = __size;
              if (__size == 0) {
                __size = 1;
              }
              pvVar16 = realloc(__ptr,__size);
              if (pvVar16 != (void *)0x0) {
                param_1[4] = (long)pvVar16;
                if ((pvVar16 != __ptr) && (bVar8 = true, (*(byte *)(param_1 + 9) & 4) != 0)) {
                  local_60 = (undefined1 *)((long)pvVar16 + uVar23);
                }
                local_80 = param_1[6] - uVar23;
                goto LAB_00100a40;
              }
              free((void *)param_1[4]);
              param_1[4] = 0;
              iVar11 = *piVar12;
            }
            goto LAB_00100e68;
          }
LAB_00100a40:
          if (CARRY8(uVar23,sVar14)) {
            free(pvVar15);
            iVar11 = *piVar12;
            while (local_90 != (void *)0x0) {
              pvVar15 = *(void **)((long)local_90 + 0x10);
              if (*(DIR **)((long)local_90 + 0x18) == (DIR *)0x0) {
                free(local_90);
                local_90 = pvVar15;
              }
              else {
                closedir(*(DIR **)((long)local_90 + 0x18));
                free(local_90);
                local_90 = pvVar15;
              }
            }
            pDVar4 = (DIR *)puVar3[3];
            *piVar12 = iVar11;
            closedir(pDVar4);
            puVar3[3] = 0;
            *(undefined2 *)(puVar3 + 0xd) = 7;
            *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 0x2000;
            *piVar12 = 0x24;
            goto LAB_00100ef2;
          }
          *(ulong *)((long)pvVar15 + 0x48) = uVar23 + sVar14;
          uVar22 = *(uint *)(param_1 + 9);
          *(long *)((long)pvVar15 + 0x58) = local_70;
          *(long *)((long)pvVar15 + 8) = *param_1;
          *(__ino_t *)((long)pvVar15 + 0x78) = pdVar13->d_ino;
          if ((uVar22 & 4) == 0) {
            *(void **)((long)pvVar15 + 0x30) = pvVar1;
          }
          else {
            *(undefined8 *)((long)pvVar15 + 0x30) = *(undefined8 *)((long)pvVar15 + 0x38);
            memmove(local_60,pvVar1,*(long *)((long)pvVar15 + 0x60) + 1);
            uVar22 = *(uint *)(param_1 + 9);
          }
          if ((param_1[8] == 0) || ((uVar22 & 0x400) != 0)) {
            bVar2 = pdVar13->d_type;
            lVar19 = 2;
            if (((uVar22 & 8) != 0) && ((bVar2 & 0xfb) != 0)) {
              lVar19 = 2 - (ulong)(uVar22 >> 4 & 1 | (uint)(bVar2 != 10));
            }
            uVar21 = 0;
            *(undefined2 *)((long)pvVar15 + 0x68) = 0xb;
            if (bVar2 - 1 < 0xc) {
              uVar21 = *(undefined4 *)(CSWTCH_49 + (ulong)(bVar2 - 1) * 4);
            }
            *(undefined4 *)((long)pvVar15 + 0x88) = uVar21;
            *(long *)((long)pvVar15 + 0xa0) = lVar19;
          }
          else {
            uVar10 = fts_stat(param_1,pvVar15,0);
            *(undefined2 *)((long)pvVar15 + 0x68) = uVar10;
          }
          *(undefined8 *)((long)pvVar15 + 0x10) = 0;
          pvVar1 = pvVar15;
          if (local_90 != (void *)0x0) {
            *(void **)((long)local_98 + 0x10) = pvVar15;
            pvVar1 = local_90;
          }
          local_90 = pvVar1;
          local_98 = pvVar15;
          if (uVar24 == 10000) {
            uVar24 = 0x2711;
            if (param_1[8] != 0) goto LAB_00100b0b;
            lVar19 = filesystem_type(puVar3,local_44);
            if ((lVar19 == 0x1021994) || (lVar19 == 0xff534d42)) {
              bVar25 = false;
              goto LAB_00100b0b;
            }
            bVar25 = lVar19 != 0x6969;
            __dirp = (DIR *)puVar3[3];
          }
          else {
            uVar24 = uVar24 + 1;
            if (local_68 <= uVar24) goto LAB_001010af;
LAB_00100b0b:
            __dirp = (DIR *)puVar3[3];
          }
        } while (__dirp != (DIR *)0x0);
        if (bVar8) {
LAB_00100cf8:
          lVar19 = param_1[4];
          for (lVar17 = param_1[1]; lVar17 != 0; lVar17 = *(long *)(lVar17 + 0x10)) {
            while (lVar17 + 0x100 == *(long *)(lVar17 + 0x30)) {
              *(long *)(lVar17 + 0x38) = lVar19;
              lVar17 = *(long *)(lVar17 + 0x10);
              if (lVar17 == 0) goto LAB_00100d34;
            }
            lVar5 = *(long *)(lVar17 + 0x38);
            *(long *)(lVar17 + 0x38) = lVar19;
            *(long *)(lVar17 + 0x30) = (*(long *)(lVar17 + 0x30) - lVar5) + lVar19;
          }
LAB_00100d34:
          lVar17 = *(long *)((long)local_90 + 0x58);
          pvVar15 = local_90;
          while (-1 < lVar17) {
            while( true ) {
              if ((long)pvVar15 + 0x100 != *(long *)((long)pvVar15 + 0x30)) {
                *(long *)((long)pvVar15 + 0x30) =
                     (*(long *)((long)pvVar15 + 0x30) - *(long *)((long)pvVar15 + 0x38)) + lVar19;
              }
              pvVar1 = *(void **)((long)pvVar15 + 0x10);
              *(long *)((long)pvVar15 + 0x38) = lVar19;
              if (pvVar1 != (void *)0x0) break;
              pvVar15 = *(void **)((long)pvVar15 + 8);
              if (*(long *)((long)pvVar15 + 0x58) < 0) goto LAB_001010ba;
            }
            pvVar15 = pvVar1;
            lVar17 = *(long *)((long)pvVar1 + 0x58);
          }
        }
        goto LAB_001010ba;
      }
      local_90 = (void *)0x0;
      if ((pDVar4 != (DIR *)0x0) || (!bVar26)) goto LAB_0010115e;
      bVar25 = false;
      uVar24 = 0;
LAB_00101123:
      if ((param_2 != 1) && (uVar24 != 0)) goto LAB_001010e5;
LAB_0010112f:
      if (puVar3[0xb] == 0) {
        iVar11 = restore_initial_cwd(param_1);
      }
      else {
        iVar11 = fts_safe_changedir(param_1,puVar3[1],0xffffffff,&_LC4);
      }
      if (iVar11 == 0) goto LAB_00101159;
      *(undefined2 *)(puVar3 + 0xd) = 7;
      *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 0x2000;
      piVar12 = __errno_location();
      iVar11 = *piVar12;
      while (pvVar15 = local_90, local_90 != (void *)0x0) {
        while( true ) {
          local_90 = *(void **)((long)pvVar15 + 0x10);
          if (*(DIR **)((long)pvVar15 + 0x18) != (DIR *)0x0) break;
          free(pvVar15);
          pvVar15 = local_90;
          if (local_90 == (void *)0x0) goto LAB_001011af;
        }
        closedir(*(DIR **)((long)pvVar15 + 0x18));
        free(pvVar15);
      }
LAB_001011af:
      *piVar12 = iVar11;
    }
  }
LAB_00100ef2:
  local_90 = (void *)0x0;
LAB_00100ef8:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_90;
}



undefined8 * rpl_fts_open(long *param_1,uint param_2,long param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  undefined8 *__ptr;
  size_t sVar6;
  void *pvVar7;
  void *__ptr_00;
  void *pvVar8;
  undefined8 uVar9;
  int *piVar10;
  void *pvVar11;
  long lVar12;
  size_t __size;
  ulong uVar13;
  char *pcVar14;
  long *plVar15;
  byte local_42;
  void *local_40;
  
  if (((0xfff < param_2) || ((~param_2 & 0x204) == 0)) || ((param_2 & 0x12) == 0)) {
    piVar10 = __errno_location();
    *piVar10 = 0x16;
    return (undefined8 *)0x0;
  }
  __ptr = (undefined8 *)calloc(1,0x80);
  if (__ptr == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *(undefined4 *)((long)__ptr + 0x2c) = 0xffffff9c;
  pcVar14 = (char *)*param_1;
  __ptr[8] = param_3;
  uVar4 = param_2 & 0xfffffdff | 4;
  if ((param_2 & 2) == 0) {
    uVar4 = param_2;
  }
  *(uint *)(__ptr + 9) = uVar4;
  if (pcVar14 == (char *)0x0) {
    uVar13 = 0x1000;
  }
  else {
    uVar13 = 0;
    plVar15 = param_1;
    do {
      sVar6 = strlen(pcVar14);
      if (uVar13 < sVar6) {
        uVar13 = sVar6;
      }
      pcVar14 = (char *)plVar15[1];
      plVar15 = plVar15 + 1;
    } while (pcVar14 != (char *)0x0);
    uVar13 = uVar13 + 1;
    if (uVar13 < 0x1000) {
      uVar13 = 0x1000;
    }
  }
  uVar13 = uVar13 + 0x100 + __ptr[6];
  if (uVar13 < (ulong)__ptr[6]) {
    free((void *)__ptr[4]);
    piVar10 = __errno_location();
    *piVar10 = 0x24;
    goto LAB_00101b8f;
  }
  __ptr[6] = uVar13;
  if (uVar13 == 0) {
    uVar13 = 1;
  }
  pvVar7 = realloc((void *)__ptr[4],uVar13);
  if (pvVar7 != (void *)0x0) {
    __ptr[4] = pvVar7;
    pcVar14 = (char *)*param_1;
    if (pcVar14 == (char *)0x0) {
      __ptr_00 = (void *)0x0;
      pvVar7 = (void *)0x0;
    }
    else {
      __ptr_00 = malloc(0x108);
      if (__ptr_00 == (void *)0x0) goto LAB_00101b86;
      *(undefined1 *)((long)__ptr_00 + 0x100) = 0;
      *(undefined8 *)((long)__ptr_00 + 0x60) = 0;
      *(undefined8 **)((long)__ptr_00 + 0x50) = __ptr;
      *(void **)((long)__ptr_00 + 0x38) = pvVar7;
      *(undefined4 *)((long)__ptr_00 + 0x40) = 0;
      *(undefined8 *)((long)__ptr_00 + 0x18) = 0;
      uVar2 = _LC3;
      *(undefined8 *)((long)__ptr_00 + 0x20) = 0;
      *(undefined4 *)((long)__ptr_00 + 0x6a) = uVar2;
      *(undefined8 *)((long)__ptr_00 + 0x28) = 0;
      *(undefined8 *)((long)__ptr_00 + 0x58) = 0xffffffffffffffff;
      local_42 = 1;
      if (param_3 != 0) {
        local_42 = (byte)(*(uint *)(__ptr + 9) >> 10) & 1;
      }
      local_40 = (void *)0x0;
      uVar13 = 0;
      pvVar11 = (void *)0x0;
      do {
        sVar6 = strlen(pcVar14);
        if ((sVar6 < 3) || ((((byte)(param_2 >> 0xb) ^ 1) & 1) == 0)) {
          __size = sVar6 + 0x108 & 0xfffffffffffffff8;
        }
        else if (pcVar14[sVar6 - 1] == '/') {
          do {
            if (pcVar14[sVar6 - 2] != '/') goto LAB_00101a67;
            sVar6 = sVar6 - 1;
          } while (sVar6 != 1);
          __size = 0x108;
        }
        else {
LAB_00101a67:
          __size = sVar6 + 0x108 & 0xfffffffffffffff8;
        }
        pvVar8 = malloc(__size);
        pvVar7 = pvVar11;
        if (pvVar8 == (void *)0x0) goto LAB_00101b25;
        uVar9 = __memcpy_chk((long)pvVar8 + 0x100,pcVar14,sVar6,__size - 0x100);
        *(undefined1 *)((long)pvVar8 + sVar6 + 0x100) = 0;
        uVar1 = __ptr[4];
        *(size_t *)((long)pvVar8 + 0x60) = sVar6;
        *(undefined8 **)((long)pvVar8 + 0x50) = __ptr;
        *(undefined8 *)((long)pvVar8 + 0x38) = uVar1;
        uVar2 = _LC3;
        *(undefined4 *)((long)pvVar8 + 0x40) = 0;
        *(undefined4 *)((long)pvVar8 + 0x6a) = uVar2;
        *(undefined8 *)((long)pvVar8 + 0x18) = 0;
        *(undefined8 *)((long)pvVar8 + 0x20) = 0;
        *(undefined8 *)((long)pvVar8 + 0x28) = 0;
        *(undefined8 *)((long)pvVar8 + 0x58) = 0;
        *(void **)((long)pvVar8 + 8) = __ptr_00;
        *(undefined8 *)((long)pvVar8 + 0x30) = uVar9;
        pvVar7 = pvVar8;
        if ((pvVar11 == (void *)0x0) || (local_42 == 0)) {
          uVar3 = fts_stat(__ptr,pvVar8,0);
          *(undefined2 *)((long)pvVar8 + 0x68) = uVar3;
          if (param_3 != 0) goto LAB_00101a20;
          *(undefined8 *)((long)pvVar8 + 0x10) = 0;
          if (pvVar11 != (void *)0x0) goto LAB_00101ae8;
        }
        else {
          *(undefined8 *)((long)pvVar8 + 0xa0) = 2;
          *(undefined2 *)((long)pvVar8 + 0x68) = 0xb;
          if (param_3 == 0) {
            *(undefined8 *)((long)pvVar8 + 0x10) = 0;
LAB_00101ae8:
            *(void **)((long)local_40 + 0x10) = pvVar8;
            pvVar7 = pvVar11;
          }
          else {
LAB_00101a20:
            *(void **)((long)pvVar8 + 0x10) = pvVar11;
            pvVar8 = local_40;
          }
        }
        local_40 = pvVar8;
        uVar13 = uVar13 + 1;
        pcVar14 = (char *)param_1[uVar13];
        pvVar11 = pvVar7;
      } while (pcVar14 != (char *)0x0);
      if ((param_3 != 0) && (1 < uVar13)) {
        pvVar7 = (void *)fts_sort(__ptr,pvVar7,uVar13);
      }
    }
    pvVar11 = malloc(0x108);
    if (pvVar11 == (void *)0x0) {
      *__ptr = 0;
    }
    else {
      uVar1 = __ptr[4];
      *(undefined1 *)((long)pvVar11 + 0x100) = 0;
      *(undefined8 *)((long)pvVar11 + 0x60) = 0;
      *(undefined8 *)((long)pvVar11 + 0x38) = uVar1;
      *(undefined8 **)((long)pvVar11 + 0x50) = __ptr;
      *(undefined4 *)((long)pvVar11 + 0x40) = 0;
      *(undefined8 *)((long)pvVar11 + 0x18) = 0;
      *(undefined2 *)((long)pvVar11 + 0x6c) = 3;
      *(undefined8 *)((long)pvVar11 + 0x20) = 0;
      *(undefined8 *)((long)pvVar11 + 0x28) = 0;
      *__ptr = pvVar11;
      *(void **)((long)pvVar11 + 0x10) = pvVar7;
      *(undefined4 *)((long)pvVar11 + 0x68) = 9;
      *(undefined8 *)((long)pvVar11 + 0x58) = 1;
      if ((*(uint *)(__ptr + 9) & 0x102) == 0) {
        pvVar11 = malloc(0x20);
        __ptr[0xb] = pvVar11;
        if (pvVar11 != (void *)0x0) {
          cycle_check_init(pvVar11);
LAB_00101c44:
          if ((*(uint *)(__ptr + 9) & 0x204) == 0) {
            iVar5 = open_safer(&_LC6,(*(uint *)(__ptr + 9) & 0x10) << 0xd | 0x90900);
            *(int *)(__ptr + 5) = iVar5;
            if (iVar5 < 0) {
              *(uint *)(__ptr + 9) = *(uint *)(__ptr + 9) | 4;
            }
          }
          i_ring_init(__ptr + 0xc,0xffffffff);
          return __ptr;
        }
      }
      else {
        lVar12 = hash_initialize(0x1f,0,AD_hash,0x100000,free);
        __ptr[0xb] = lVar12;
        if (lVar12 != 0) goto LAB_00101c44;
      }
    }
LAB_00101b25:
    piVar10 = __errno_location();
    iVar5 = *piVar10;
    while (pvVar7 != (void *)0x0) {
      pvVar11 = *(void **)((long)pvVar7 + 0x10);
      if (*(DIR **)((long)pvVar7 + 0x18) == (DIR *)0x0) {
        free(pvVar7);
        pvVar7 = pvVar11;
      }
      else {
        closedir(*(DIR **)((long)pvVar7 + 0x18));
        free(pvVar7);
        pvVar7 = pvVar11;
      }
    }
    *piVar10 = iVar5;
    free(__ptr_00);
  }
LAB_00101b86:
  free((void *)__ptr[4]);
LAB_00101b8f:
  free(__ptr);
  return (undefined8 *)0x0;
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
      if (*(DIR **)((long)pvVar7 + 0x18) == (DIR *)0x0) {
        free(pvVar7);
      }
      else {
        closedir(*(DIR **)((long)pvVar7 + 0x18));
        free(pvVar7);
      }
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
        if (iVar5 == 0) goto LAB_00101e2c;
        piVar6 = __errno_location();
      }
      else {
        piVar6 = __errno_location();
        iVar5 = *piVar6;
        iVar4 = close((int)param_1[5]);
        if ((iVar5 != 0) || (iVar4 == 0)) goto LAB_00101e2f;
      }
      iVar5 = *piVar6;
      goto LAB_00101e2f;
    }
  }
  else if ((-1 < *(int *)((long)param_1 + 0x2c)) &&
          (iVar5 = close(*(int *)((long)param_1 + 0x2c)), iVar5 != 0)) {
    piVar6 = __errno_location();
    iVar5 = *piVar6;
    goto LAB_00101e2f;
  }
LAB_00101e2c:
  iVar5 = 0;
LAB_00101e2f:
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



undefined8 * rpl_fts_read(long *param_1)

{
  char *__s;
  short sVar1;
  void *pvVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  undefined2 uVar7;
  short sVar8;
  int __fd;
  int iVar9;
  uint uVar10;
  int *piVar11;
  char *pcVar12;
  size_t sVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  void *pvVar17;
  undefined8 *puVar18;
  
  puVar18 = (undefined8 *)*param_1;
  if (puVar18 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  uVar10 = *(uint *)(param_1 + 9);
  if ((uVar10 & 0x2000) != 0) {
    return (undefined8 *)0x0;
  }
  sVar8 = *(short *)((long)puVar18 + 0x6c);
  *(undefined2 *)((long)puVar18 + 0x6c) = 3;
  if (sVar8 == 1) {
    uVar7 = fts_stat(param_1,puVar18,0);
    *(undefined2 *)(puVar18 + 0xd) = uVar7;
    return puVar18;
  }
  sVar1 = *(short *)(puVar18 + 0xd);
  if (sVar8 == 2) {
    if (1 < (ushort)(sVar1 - 0xcU)) {
      if (sVar1 != 1) goto LAB_00101fe5;
LAB_001020af:
      if (((uVar10 & 0x40) != 0) && (puVar18[0xe] != param_1[3])) {
LAB_0010213a:
        if ((*(byte *)((long)puVar18 + 0x6a) & 2) != 0) {
          close(*(int *)((long)puVar18 + 0x44));
        }
        pvVar17 = (void *)param_1[1];
        if (pvVar17 != (void *)0x0) {
          piVar11 = __errno_location();
          iVar9 = *piVar11;
          do {
            pvVar2 = *(void **)((long)pvVar17 + 0x10);
            if (*(DIR **)((long)pvVar17 + 0x18) == (DIR *)0x0) {
              free(pvVar17);
            }
            else {
              closedir(*(DIR **)((long)pvVar17 + 0x18));
              free(pvVar17);
            }
            pvVar17 = pvVar2;
          } while (pvVar2 != (void *)0x0);
          *piVar11 = iVar9;
          param_1[1] = 0;
        }
        *(undefined2 *)(puVar18 + 0xd) = 6;
        leave_dir(param_1,puVar18);
        return puVar18;
      }
      pvVar17 = (void *)param_1[1];
      if (pvVar17 == (void *)0x0) {
LAB_00102474:
        puVar15 = (undefined8 *)fts_build(param_1,3);
        param_1[1] = (long)puVar15;
        if (puVar15 == (undefined8 *)0x0) {
          if ((*(byte *)((long)param_1 + 0x49) & 0x20) != 0) {
            return (undefined8 *)0x0;
          }
          if ((*(int *)(puVar18 + 8) != 0) && (*(short *)(puVar18 + 0xd) != 4)) {
            *(undefined2 *)(puVar18 + 0xd) = 7;
          }
          leave_dir(param_1,puVar18);
          return puVar18;
        }
      }
      else {
        if ((uVar10 & 0x1000) != 0) {
          *(uint *)(param_1 + 9) = uVar10 & 0xffffefff;
          piVar11 = __errno_location();
          iVar9 = *piVar11;
          do {
            pvVar2 = *(void **)((long)pvVar17 + 0x10);
            if (*(DIR **)((long)pvVar17 + 0x18) == (DIR *)0x0) {
              free(pvVar17);
            }
            else {
              closedir(*(DIR **)((long)pvVar17 + 0x18));
              free(pvVar17);
            }
            pvVar17 = pvVar2;
          } while (pvVar2 != (void *)0x0);
          *piVar11 = iVar9;
          param_1[1] = 0;
          goto LAB_00102474;
        }
        iVar9 = fts_safe_changedir(param_1,puVar18,0xffffffff,puVar18[6]);
        if (iVar9 == 0) {
          puVar15 = (undefined8 *)param_1[1];
        }
        else {
          piVar11 = __errno_location();
          iVar9 = *piVar11;
          *(ushort *)((long)puVar18 + 0x6a) = *(ushort *)((long)puVar18 + 0x6a) | 1;
          *(int *)(puVar18 + 8) = iVar9;
          puVar15 = (undefined8 *)param_1[1];
          for (puVar18 = puVar15; puVar18 != (undefined8 *)0x0; puVar18 = (undefined8 *)puVar18[2])
          {
            puVar18[6] = *(undefined8 *)(puVar18[1] + 0x30);
          }
        }
      }
      param_1[1] = 0;
      goto LAB_001022ba;
    }
    sVar8 = fts_stat(param_1,puVar18,1);
    *(short *)(puVar18 + 0xd) = sVar8;
    if (sVar8 == 1) {
      uVar10 = *(uint *)(param_1 + 9);
      if ((uVar10 & 4) != 0) {
        *param_1 = (long)puVar18;
        goto LAB_00102311;
      }
      if ((uVar10 & 0x200) == 0) {
        iVar9 = open_safer(&_LC6,(uVar10 & 0x10) << 0xd | 0x90900);
      }
      else {
        iVar9 = openat_safer(*(undefined4 *)((long)param_1 + 0x2c),&_LC6);
      }
      *(int *)((long)puVar18 + 0x44) = iVar9;
      if (iVar9 < 0) {
        piVar11 = __errno_location();
        iVar9 = *piVar11;
        *(undefined2 *)(puVar18 + 0xd) = 7;
        *(int *)(puVar18 + 8) = iVar9;
        *param_1 = (long)puVar18;
        return puVar18;
      }
      *(ushort *)((long)puVar18 + 0x6a) = *(ushort *)((long)puVar18 + 0x6a) | 2;
      sVar8 = *(short *)(puVar18 + 0xd);
      goto LAB_001022f6;
    }
    *param_1 = (long)puVar18;
    if (sVar8 != 0xb) {
      return puVar18;
    }
LAB_001023b8:
    if (puVar18[0x14] != 2) {
      if (puVar18[0x14] != 1) {
                    /* WARNING: Subroutine does not return */
        rpl_fts_read_cold();
      }
      return puVar18;
    }
    sVar8 = fts_stat(param_1,puVar18,0);
    *(short *)(puVar18 + 0xd) = sVar8;
  }
  else {
    if (sVar1 == 1) {
      if (sVar8 == 4) goto LAB_0010213a;
      goto LAB_001020af;
    }
LAB_00101fe5:
    do {
      puVar15 = (undefined8 *)puVar18[2];
      if (puVar15 == (undefined8 *)0x0) {
        puVar15 = (undefined8 *)puVar18[1];
        if (puVar15[3] != 0) {
          lVar14 = puVar15[9];
          *param_1 = (long)puVar15;
          *(undefined1 *)(param_1[4] + lVar14) = 0;
          puVar15 = (undefined8 *)fts_build(param_1,3);
          if (puVar15 != (undefined8 *)0x0) {
            free(puVar18);
            goto LAB_001022ba;
          }
          if ((*(byte *)((long)param_1 + 0x49) & 0x20) != 0) {
            return (undefined8 *)0x0;
          }
          puVar15 = (undefined8 *)puVar18[1];
        }
        *param_1 = (long)puVar15;
        free(puVar18);
        if (puVar15[0xb] == -1) {
          free(puVar15);
          piVar11 = __errno_location();
          *piVar11 = 0;
          *param_1 = 0;
          return (undefined8 *)0x0;
        }
        if (*(short *)(puVar15 + 0xd) == 0xb) {
code_r0x001029eb:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined1 *)(param_1[4] + puVar15[9]) = 0;
        if (puVar15[0xb] == 0) {
          iVar9 = restore_initial_cwd(param_1);
        }
        else {
          if ((*(ushort *)((long)puVar15 + 0x6a) & 2) != 0) {
            iVar9 = *(int *)((long)puVar15 + 0x44);
            if ((*(uint *)(param_1 + 9) & 4) == 0) {
              if ((*(uint *)(param_1 + 9) & 0x200) == 0) {
                iVar9 = fchdir(iVar9);
                if (iVar9 != 0) {
                  piVar11 = __errno_location();
                  *(int *)(puVar15 + 8) = *piVar11;
                  *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 0x2000;
                }
                iVar9 = *(int *)((long)puVar15 + 0x44);
              }
              else {
                if ((*(int *)((long)param_1 + 0x2c) == iVar9) &&
                   (*(int *)((long)param_1 + 0x2c) != -100)) goto code_r0x001029eb;
                __fd = i_ring_push(param_1 + 0xc);
                if (-1 < __fd) {
                  close(__fd);
                }
                *(int *)((long)param_1 + 0x2c) = iVar9;
                iVar9 = *(int *)((long)puVar15 + 0x44);
              }
            }
            close(iVar9);
            goto LAB_0010249b;
          }
          if ((*(ushort *)((long)puVar15 + 0x6a) & 1) != 0) goto LAB_0010249b;
          iVar9 = fts_safe_changedir(param_1,puVar15[1],0xffffffff,&_LC4);
        }
        if (iVar9 != 0) {
          piVar11 = __errno_location();
          *(int *)(puVar15 + 8) = *piVar11;
          *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 0x2000;
        }
LAB_0010249b:
        if (*(short *)(puVar15 + 0xd) != 2) {
          if (*(int *)(puVar15 + 8) == 0) {
            *(undefined2 *)(puVar15 + 0xd) = 6;
            leave_dir(param_1,puVar15);
          }
          else {
            *(undefined2 *)(puVar15 + 0xd) = 7;
          }
        }
        if ((*(byte *)((long)param_1 + 0x49) & 0x20) != 0) {
          return (undefined8 *)0x0;
        }
        return puVar15;
      }
      *param_1 = (long)puVar15;
      free(puVar18);
      puVar18 = puVar15;
      if (puVar15[0xb] == 0) {
        iVar9 = restore_initial_cwd(param_1);
        if (iVar9 != 0) {
          *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 0x2000;
          return (undefined8 *)0x0;
        }
        if ((*(uint *)(param_1 + 9) & 0x102) == 0) {
          free((void *)param_1[0xb]);
        }
        else if ((void *)param_1[0xb] != (void *)0x0) {
          hash_free();
        }
        pvVar17 = (void *)param_1[4];
        __s = (char *)(puVar15 + 0x20);
        puVar15[9] = puVar15[0xc];
        memmove(pvVar17,__s,puVar15[0xc] + 1);
        pcVar12 = strrchr(__s,0x2f);
        if ((pcVar12 != (char *)0x0) &&
           ((__s != pcVar12 || (*(char *)((long)puVar15 + 0x101) != '\0')))) {
          sVar13 = strlen(pcVar12 + 1);
          memmove(__s,pcVar12 + 1,sVar13 + 1);
          puVar15[0xc] = sVar13;
        }
        lVar14 = param_1[4];
        puVar15[6] = lVar14;
        puVar15[7] = lVar14;
        if ((*(uint *)(param_1 + 9) & 0x102) == 0) {
          pvVar17 = malloc(0x20);
          param_1[0xb] = (long)pvVar17;
          if (pvVar17 != (void *)0x0) {
            cycle_check_init(pvVar17);
            sVar8 = *(short *)(puVar15 + 0xd);
            goto LAB_001022f6;
          }
        }
        else {
          lVar14 = hash_initialize(0x1f,0,AD_hash,0x100000,free);
          param_1[0xb] = lVar14;
          if (lVar14 != 0) goto LAB_001022f2;
          if ((*(uint *)(param_1 + 9) & 0x102) != 0) {
            return (undefined8 *)0x0;
          }
        }
        free((void *)param_1[0xb]);
        return (undefined8 *)0x0;
      }
    } while (*(short *)((long)puVar15 + 0x6c) == 4);
    if (*(short *)((long)puVar15 + 0x6c) == 2) {
      sVar8 = fts_stat(param_1,puVar15,1);
      *(short *)(puVar15 + 0xd) = sVar8;
      if ((sVar8 == 1) && (uVar10 = *(uint *)(param_1 + 9), (uVar10 & 4) == 0)) {
        if ((uVar10 & 0x200) == 0) {
          iVar9 = open_safer(&_LC6,(uVar10 & 0x10) << 0xd | 0x90900);
        }
        else {
          iVar9 = openat_safer(*(undefined4 *)((long)param_1 + 0x2c),&_LC6);
        }
        *(int *)((long)puVar15 + 0x44) = iVar9;
        if (iVar9 < 0) {
          piVar11 = __errno_location();
          iVar9 = *piVar11;
          *(undefined2 *)(puVar15 + 0xd) = 7;
          *(int *)(puVar15 + 8) = iVar9;
        }
        else {
          *(ushort *)((long)puVar15 + 0x6a) = *(ushort *)((long)puVar15 + 0x6a) | 2;
        }
      }
      *(undefined2 *)((long)puVar15 + 0x6c) = 3;
    }
LAB_001022ba:
    lVar14 = *(long *)(puVar15[1] + 0x48);
    if (*(char *)(*(long *)(puVar15[1] + 0x38) + -1 + lVar14) == '/') {
      lVar14 = lVar14 + -1;
    }
    lVar3 = param_1[4];
    *(undefined1 *)(lVar14 + lVar3) = 0x2f;
    memmove((undefined1 *)(lVar14 + lVar3) + 1,puVar15 + 0x20,puVar15[0xc] + 1);
LAB_001022f2:
    sVar8 = *(short *)(puVar15 + 0xd);
    puVar18 = puVar15;
LAB_001022f6:
    *param_1 = (long)puVar18;
    if (sVar8 == 0xb) goto LAB_001023b8;
  }
  if (sVar8 != 1) {
    return puVar18;
  }
  uVar10 = *(uint *)(param_1 + 9);
LAB_00102311:
  if (puVar18[0xb] == 0) {
    param_1[3] = puVar18[0xe];
  }
  if ((uVar10 & 0x102) == 0) {
    cVar6 = cycle_check(param_1[0xb],puVar18 + 0xe);
    if (cVar6 != '\0') {
      *puVar18 = puVar18;
      *(undefined2 *)(puVar18 + 0xd) = 2;
      return puVar18;
    }
    return puVar18;
  }
  puVar15 = (undefined8 *)malloc(0x18);
  if (puVar15 != (undefined8 *)0x0) {
    uVar4 = puVar18[0xe];
    uVar5 = puVar18[0xf];
    lVar14 = param_1[0xb];
    puVar15[2] = puVar18;
    *puVar15 = uVar4;
    puVar15[1] = uVar5;
    puVar16 = (undefined8 *)hash_insert(lVar14,puVar15);
    if (puVar15 == puVar16) {
      return puVar18;
    }
    free(puVar15);
    if (puVar16 != (undefined8 *)0x0) {
      uVar4 = puVar16[2];
      *(undefined2 *)(puVar18 + 0xd) = 2;
      *puVar18 = uVar4;
      return puVar18;
    }
  }
  return (undefined8 *)0x0;
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
        if ((void *)param_1[1] != (void *)0x0) {
          do {
            pvVar2 = *(void **)((long)__ptr + 0x10);
            if (*(DIR **)((long)__ptr + 0x18) == (DIR *)0x0) {
              free(__ptr);
            }
            else {
              closedir(*(DIR **)((long)__ptr + 0x18));
              free(__ptr);
            }
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
            if ((__fd == *(int *)((long)param_1 + 0x2c)) && (*(int *)((long)param_1 + 0x2c) != -100)
               ) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            iVar3 = i_ring_push(param_1 + 0xc);
            if (-1 < iVar3) {
              close(iVar3);
            }
            *(int *)((long)param_1 + 0x2c) = __fd;
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

void leave_dir_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void fts_safe_changedir_cold(void)

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



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rpl_fts_children_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


