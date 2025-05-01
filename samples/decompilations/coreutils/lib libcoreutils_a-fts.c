
/* WARNING: Unknown calling convention */

_Bool AD_compare(void *x,void *y)

{
  if (*(long *)((long)x + 8) != *(long *)((long)y + 8)) {
    return false;
  }
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
  return *x == *y;
}



/* WARNING: Unknown calling convention */

size_t AD_hash(void *x,size_t table_size)

{
  return *(ulong *)((long)x + 8) % table_size;
}



/* WARNING: Unknown calling convention */

size_t dev_type_hash(void *x,size_t table_size)

{
                    /* WARNING: Load size is inaccurate */
  return *x % table_size;
}



/* WARNING: Unknown calling convention */

_Bool dev_type_compare(void *x,void *y)

{
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
  return *x == *y;
}



/* WARNING: Unknown calling convention */

int fts_compare_ino(_ftsent **a,_ftsent **b)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = (*a)->fts_statp[0].st_ino;
  uVar2 = (*b)->fts_statp[0].st_ino;
  return (uint)(uVar2 < uVar1) - (uint)(uVar1 < uVar2);
}



/* WARNING: Unknown calling convention */

_Bool fts_palloc(FTS *sp,size_t more)

{
  char *pcVar1;
  int *piVar2;
  size_t __size;
  
  __size = more + 0x100 + sp->fts_pathlen;
  if (CARRY8(more + 0x100,sp->fts_pathlen)) {
    free(sp->fts_path);
    sp->fts_path = (char *)0x0;
    piVar2 = __errno_location();
    *piVar2 = 0x24;
  }
  else {
    sp->fts_pathlen = __size;
    if (__size == 0) {
      __size = 1;
    }
    pcVar1 = (char *)realloc(sp->fts_path,__size);
    if (pcVar1 != (char *)0x0) {
      sp->fts_path = pcVar1;
      return true;
    }
    free(sp->fts_path);
    sp->fts_path = (char *)0x0;
  }
  return false;
}



/* WARNING: Unknown calling convention */

ushort fts_stat(FTS *sp,FTSENT *p,_Bool follow)

{
  stat *__buf;
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  ulong uVar5;
  undefined8 *puVar6;
  byte bVar7;
  
  bVar7 = 0;
  __buf = p->fts_statp;
  if (((sp->fts_options & 2U) != 0) ||
     ((((sp->fts_options & 1U) != 0 && (p->fts_level == 0)) || (follow)))) {
    iVar2 = fstatat(sp->fts_cwd_fd,p->fts_accpath,(stat *)__buf,0);
    if (iVar2 < 0) {
      piVar4 = __errno_location();
      iVar2 = *piVar4;
      if (iVar2 == 2) {
        iVar2 = fstatat(sp->fts_cwd_fd,p->fts_accpath,(stat *)__buf,0x100);
        if (-1 < iVar2) {
          *piVar4 = 0;
          return 0xd;
        }
        iVar2 = *piVar4;
      }
LAB_001001a3:
      p->fts_errno = iVar2;
      puVar6 = (undefined8 *)((ulong)&p->fts_statp[0].st_ino & 0xfffffffffffffff8);
      p->fts_statp[0].st_dev = 0;
      p->fts_statp[0].__glibc_reserved[2] = 0;
      uVar5 = (ulong)(((int)__buf - (int)puVar6) + 0x90U >> 3);
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar6 = 0;
        puVar6 = puVar6 + (ulong)bVar7 * -2 + 1;
      }
      return 10;
    }
  }
  else {
    iVar2 = fstatat(sp->fts_cwd_fd,p->fts_accpath,(stat *)__buf,0x100);
    if (iVar2 < 0) {
      piVar4 = __errno_location();
      iVar2 = *piVar4;
      goto LAB_001001a3;
    }
  }
  uVar3 = p->fts_statp[0].st_mode & 0xf000;
  if (uVar3 == 0x4000) {
    uVar1 = 1;
    if ((*(char *)&p[1].fts_cycle == '.') &&
       ((*(char *)((long)&p[1].fts_cycle + 1) == '\0' ||
        (((ulong)p[1].fts_cycle & 0xffff00) == 0x2e00)))) {
      uVar1 = (-(ushort)(p->fts_level == 0) & 0xfffc) + 5;
    }
  }
  else if (uVar3 == 0xa000) {
    uVar1 = 0xc;
  }
  else {
    uVar1 = (ushort)(uVar3 == 0x8000) * 5 + 3;
  }
  return uVar1;
}



/* WARNING: Unknown calling convention */

FTSENT * fts_sort(FTS *sp,FTSENT *head,size_t nitems)

{
  ulong uVar1;
  _ftsent **pp_Var2;
  _func_int__ftsent_ptr_ptr__ftsent_ptr_ptr *__compar;
  _ftsent *p_Var3;
  _ftsent **pp_Var4;
  FTSENT *pFVar5;
  long lVar6;
  _ftsent **pp_Var7;
  FTSENT *pFVar8;
  size_t __size;
  
  __compar = sp->fts_compar;
  pp_Var4 = sp->fts_array;
  if (nitems <= sp->fts_nitems) {
LAB_0010031a:
    pp_Var7 = pp_Var4;
    if (head != (FTSENT *)0x0) {
      do {
        *pp_Var7 = head;
        head = head->fts_link;
        pp_Var7 = pp_Var7 + 1;
      } while (head != (_ftsent *)0x0);
    }
    qsort(pp_Var4,nitems,8,(__compar_fn_t)__compar);
    pp_Var4 = sp->fts_array;
    pFVar8 = *pp_Var4;
    pFVar5 = pFVar8;
    lVar6 = nitems - 1;
    pp_Var7 = pp_Var4;
    if (lVar6 != 0) {
      do {
        p_Var3 = *pp_Var7;
        pp_Var2 = pp_Var7 + 1;
        pp_Var7 = pp_Var7 + 1;
        p_Var3->fts_link = *pp_Var2;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      pFVar8 = pp_Var4[nitems - 1];
    }
    pFVar8->fts_link = (_ftsent *)0x0;
    return pFVar5;
  }
  uVar1 = nitems + 0x28;
  sp->fts_nitems = uVar1;
  if (uVar1 >> 0x3d == 0) {
    __size = uVar1 * 8;
    if (__size == 0) {
      __size = 1;
    }
    pp_Var4 = (_ftsent **)realloc(pp_Var4,__size);
    if (pp_Var4 != (_ftsent **)0x0) {
      sp->fts_array = pp_Var4;
      goto LAB_0010031a;
    }
    pp_Var4 = sp->fts_array;
  }
  free(pp_Var4);
  sp->fts_array = (_ftsent **)0x0;
  sp->fts_nitems = 0;
  return head;
}



/* WARNING: Unknown calling convention */

FTSENT * fts_alloc(FTS *sp,char *name,size_t namelen)

{
  char *pcVar1;
  FTSENT *pFVar2;
  ulong __size;
  
  __size = namelen + 0x108 & 0xfffffffffffffff8;
  pFVar2 = (FTSENT *)malloc(__size);
  if (pFVar2 != (FTSENT *)0x0) {
    __memcpy_chk(pFVar2 + 1,name,namelen,__size - 0x100);
    pcVar1 = sp->fts_path;
    *(undefined1 *)((long)pFVar2[1].fts_statp + (namelen - 0x70)) = 0;
    pFVar2->fts_namelen = namelen;
    pFVar2->fts_fts = sp;
    pFVar2->fts_path = pcVar1;
    pFVar2->fts_errno = 0;
    pFVar2->fts_dirp = (DIR *)0x0;
    pFVar2->fts_flags = 0;
    pFVar2->fts_instr = 3;
    pFVar2->fts_number = 0;
    pFVar2->fts_pointer = (void *)0x0;
  }
  return pFVar2;
}



/* WARNING: Unknown calling convention */

_Bool setup_dir(FTS *fts)

{
  hash_table *phVar1;
  
  if ((fts->fts_options & 0x102U) != 0) {
    phVar1 = (hash_table *)hash_initialize(0x1f,0,AD_hash,0x100000,free);
    (fts->fts_cycle).ht = phVar1;
    return phVar1 != (hash_table *)0x0;
  }
  phVar1 = (hash_table *)malloc(0x20);
  (fts->fts_cycle).ht = phVar1;
  if (phVar1 != (hash_table *)0x0) {
    cycle_check_init(phVar1);
    return true;
  }
  return false;
}



/* WARNING: Unknown calling convention */

fsword filesystem_type(FTSENT *p,int fd)

{
  FTS *pFVar1;
  long lVar2;
  __dev_t _Var3;
  __fsword_t _Var4;
  int iVar5;
  long lVar6;
  hash_table *phVar7;
  __dev_t *__ptr;
  __dev_t *p_Var8;
  long in_FS_OFFSET;
  dev_type tmp;
  statfs fs_buf;
  
  pFVar1 = p->fts_fts;
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  phVar7 = pFVar1->fts_leaf_optimization_works_ht;
  if ((pFVar1->fts_options & 0x200) != 0) {
    if (phVar7 == (hash_table *)0x0) {
      phVar7 = (hash_table *)hash_initialize(0xd,0,dev_type_hash,dev_type_compare,free);
      pFVar1->fts_leaf_optimization_works_ht = phVar7;
      if (phVar7 != (hash_table *)0x0) goto LAB_0010050c;
    }
    else {
LAB_0010050c:
      tmp.st_dev = p->fts_statp[0].st_dev;
      lVar6 = hash_lookup(phVar7,&tmp);
      if (lVar6 != 0) {
        fs_buf.f_type = *(fsword *)(lVar6 + 8);
        goto LAB_00100567;
      }
    }
    if ((-1 < fd) && (iVar5 = fstatfs(fd,(statfs *)&fs_buf), _Var4 = fs_buf.f_type, iVar5 == 0)) {
      if ((phVar7 != (hash_table *)0x0) &&
         (__ptr = (__dev_t *)malloc(0x10), __ptr != (__dev_t *)0x0)) {
        _Var3 = p->fts_statp[0].st_dev;
        __ptr[1] = _Var4;
        *__ptr = _Var3;
        p_Var8 = (__dev_t *)hash_insert(phVar7,__ptr);
        if (p_Var8 == (__dev_t *)0x0) {
          free(__ptr);
        }
        else if (__ptr != p_Var8) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
      }
      goto LAB_00100567;
    }
  }
  fs_buf.f_type = 0;
LAB_00100567:
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return fs_buf.f_type;
}



/* WARNING: Unknown calling convention */

_Bool enter_dir(FTS *fts,FTSENT *ent)

{
  hash_table *phVar1;
  _ftsent *p_Var2;
  __dev_t _Var3;
  __dev_t _Var4;
  char cVar5;
  __dev_t *__ptr;
  __dev_t *p_Var6;
  
  if ((fts->fts_options & 0x102U) == 0) {
    cVar5 = cycle_check((fts->fts_cycle).ht,ent->fts_statp);
    if (cVar5 != '\0') {
      ent->fts_cycle = ent;
      ent->fts_info = 2;
    }
  }
  else {
    __ptr = (__dev_t *)malloc(0x18);
    if (__ptr == (__dev_t *)0x0) {
      return false;
    }
    _Var3 = ent->fts_statp[0].st_dev;
    _Var4 = ent->fts_statp[0].st_ino;
    phVar1 = (fts->fts_cycle).ht;
    __ptr[2] = (__dev_t)ent;
    *__ptr = _Var3;
    __ptr[1] = _Var4;
    p_Var6 = (__dev_t *)hash_insert(phVar1,__ptr);
    if (__ptr != p_Var6) {
      free(__ptr);
      if (p_Var6 == (__dev_t *)0x0) {
        return false;
      }
      p_Var2 = (_ftsent *)p_Var6[2];
      ent->fts_info = 2;
      ent->fts_cycle = p_Var2;
    }
  }
  return true;
}



/* WARNING: Unknown calling convention */

void cwd_advance_fd(FTS *sp,int fd,_Bool chdir_down_one)

{
  int iVar1;
  
  iVar1 = sp->fts_cwd_fd;
  if ((iVar1 == fd) && (iVar1 != -100)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (chdir_down_one) {
    iVar1 = i_ring_push(&sp->fts_fd_ring);
    if (-1 < iVar1) {
      close(iVar1);
      sp->fts_cwd_fd = fd;
      return;
    }
  }
  else if (((sp->fts_options & 4) == 0) && (-1 < iVar1)) {
    close(iVar1);
    sp->fts_cwd_fd = fd;
    return;
  }
  sp->fts_cwd_fd = fd;
  return;
}



/* WARNING: Unknown calling convention */

void leave_dir(FTS *fts,FTSENT *ent)

{
  long lVar1;
  _ftsent *p_Var2;
  cycle_check_state *pcVar3;
  __dev_t _Var4;
  void *__ptr;
  long in_FS_OFFSET;
  Active_dir obj;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((fts->fts_options & 0x102U) == 0) {
    p_Var2 = ent->fts_parent;
    if ((p_Var2 != (_ftsent *)0x0) && (-1 < p_Var2->fts_level)) {
      pcVar3 = (fts->fts_cycle).state;
      if (pcVar3->chdir_counter == 0) goto leave_dir_cold;
      if ((pcVar3->dev_ino).st_dev == ent->fts_statp[0].st_dev &&
          (pcVar3->dev_ino).st_ino == ent->fts_statp[0].st_ino) {
        _Var4 = p_Var2->fts_statp[0].st_dev;
        (pcVar3->dev_ino).st_ino = p_Var2->fts_statp[0].st_ino;
        (pcVar3->dev_ino).st_dev = _Var4;
      }
    }
  }
  else {
    obj.dev = ent->fts_statp[0].st_dev;
    obj.ino = ent->fts_statp[0].st_ino;
    __ptr = (void *)hash_remove((fts->fts_cycle).ht,&obj);
    if (__ptr == (void *)0x0) {
leave_dir_cold:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    free(__ptr);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

int restore_initial_cwd(FTS *sp)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  if ((sp->fts_options & 4U) == 0) {
    if ((sp->fts_options & 0x200U) == 0) {
      iVar2 = fchdir(sp->fts_rfd);
      uVar3 = (uint)(iVar2 != 0);
      goto LAB_001007e2;
    }
    cwd_advance_fd(sp,-100,true);
  }
  uVar3 = 0;
LAB_001007e2:
  while( true ) {
    cVar1 = i_ring_empty(&sp->fts_fd_ring);
    if (cVar1 != '\0') break;
    iVar2 = i_ring_pop(&sp->fts_fd_ring);
    if (-1 < iVar2) {
      close(iVar2);
    }
  }
  return uVar3;
}



/* WARNING: Unknown calling convention */

int fts_safe_changedir(FTS *sp,FTSENT *p,int fd,char *dir)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  long in_FS_OFFSET;
  stat sb;
  
  uVar7 = sp->fts_options;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = fd;
  if ((((dir == (char *)0x0) || (*dir != '.')) || (dir[1] != '.')) || (dir[2] != '\0')) {
    if ((uVar7 & 4) == 0) {
      if (fd < 0) {
        bVar2 = 0;
LAB_00100ae6:
        iVar4 = sp->fts_cwd_fd;
        uVar8 = (uVar7 & 0x10) << 0xd | 0x90900;
        if ((uVar7 & 0x200) == 0) {
LAB_001009a7:
          iVar4 = open_safer(dir,uVar8);
        }
        else {
LAB_00100a90:
          iVar4 = openat_safer(iVar4,dir,uVar8);
        }
        if (iVar4 < 0) {
          iVar3 = -1;
          goto LAB_00100939;
        }
        uVar7 = sp->fts_options;
      }
      else {
        bVar2 = 0;
      }
      iVar5 = fd;
      if (((uVar7 & 2) != 0) ||
         (((bVar9 = bVar2, dir != (char *)0x0 && (*dir == '.')) &&
          ((dir[1] == '.' && (dir[2] == '\0')))))) goto LAB_001008e6;
joined_r0x00100a25:
      if ((uVar7 & 0x200) != 0) {
        iVar3 = 0;
        cwd_advance_fd(sp,iVar4,(_Bool)(bVar9 ^ 1));
        goto LAB_00100939;
      }
      iVar3 = fchdir(iVar4);
      goto joined_r0x001009fb;
    }
  }
  else if ((uVar7 & 4) == 0) {
    if (fd < 0) {
      if ((uVar7 & 0x200) == 0) {
        bVar2 = 1;
        uVar8 = (uVar7 & 0x10) << 0xd | 0x90900;
        goto LAB_001009a7;
      }
      bVar2 = i_ring_empty(&sp->fts_fd_ring);
      if (bVar2 != 0) {
        iVar4 = sp->fts_cwd_fd;
        uVar8 = (uVar7 & 0x10) << 0xd | 0x90900;
        goto LAB_00100a90;
      }
      iVar5 = i_ring_pop(&sp->fts_fd_ring);
      uVar7 = sp->fts_options;
      if (iVar5 < 0) {
        bVar2 = 1;
        goto LAB_00100ae6;
      }
      bVar2 = 1;
      bVar9 = 1;
      iVar4 = iVar5;
      if ((uVar7 & 2) == 0) goto joined_r0x00100a25;
    }
    else {
      bVar2 = 1;
      iVar5 = fd;
    }
LAB_001008e6:
    iVar3 = fstat(iVar4,(stat *)&sb);
    if (iVar3 == 0) {
      if ((p->fts_statp[0].st_dev == sb.st_dev) && (p->fts_statp[0].st_ino == sb.st_ino)) {
        uVar7 = sp->fts_options;
        bVar9 = bVar2;
        goto joined_r0x00100a25;
      }
      piVar6 = __errno_location();
      *piVar6 = 2;
    }
    iVar3 = -1;
joined_r0x001009fb:
    if (iVar5 < 0) {
      piVar6 = __errno_location();
      iVar5 = *piVar6;
      close(iVar4);
      *piVar6 = iVar5;
    }
    goto LAB_00100939;
  }
  if (((uVar7 & 0x200) == 0) || (fd < 0)) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0;
    close(fd);
  }
LAB_00100939:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}



/* WARNING: Unknown calling convention */

FTSENT * fts_build(FTS *sp,int type)

{
  byte bVar1;
  int iVar2;
  FTSENT *ent;
  DIR *pDVar3;
  long lVar4;
  size_t sVar5;
  char *pcVar6;
  long lVar7;
  FTSENT *pFVar8;
  _Bool _Var9;
  ushort uVar10;
  int iVar11;
  ulong uVar12;
  int *piVar13;
  dirent *pdVar14;
  size_t namelen;
  FTSENT *pFVar15;
  fsword fVar16;
  _ftsent *p_Var17;
  DIR *pDVar18;
  uint uVar19;
  __mode_t _Var20;
  __off_t _Var21;
  ulong nitems;
  size_t sVar22;
  long in_FS_OFFSET;
  bool bVar23;
  bool bVar24;
  FTSENT *local_a0;
  FTSENT *local_90;
  long local_78;
  ulong local_70;
  size_t local_68;
  char *local_60;
  _Bool local_4b;
  int dir_fd;
  
  ent = sp->fts_cur;
  pDVar3 = (DIR *)ent->fts_dirp;
  lVar4 = *(long *)(in_FS_OFFSET + 0x28);
  if (pDVar3 == (DIR *)0x0) {
    uVar19 = sp->fts_options;
    uVar12 = (ulong)(uVar19 & 0x10);
    if (((uVar19 & 0x10) != 0) && (uVar12 = 0x20000, (uVar19 & 1) != 0)) {
      uVar12 = (ulong)(ent->fts_level != 0) << 0x11;
    }
    iVar11 = -100;
    if ((uVar19 & 0x204) == 0x200) {
      iVar11 = sp->fts_cwd_fd;
    }
    pDVar18 = (DIR *)opendirat(iVar11,ent->fts_accpath,uVar12);
    ent->fts_dirp = pDVar18;
    if (pDVar18 != (DIR *)0x0) {
      if (ent->fts_info == 0xb) {
        iVar11 = fstat(dir_fd,(stat *)ent->fts_statp);
        if (iVar11 != 0) {
LAB_001015b7:
          piVar13 = __errno_location();
          iVar11 = *piVar13;
          closedir((DIR *)ent->fts_dirp);
          ent->fts_dirp = (DIR *)0x0;
          if (type == 3) {
            ent->fts_errno = iVar11;
            ent->fts_info = 10;
            *piVar13 = iVar11;
          }
          else {
LAB_00101411:
            *piVar13 = iVar11;
          }
          goto LAB_00101164;
        }
        ent->fts_info = 1;
      }
      else if ((sp->fts_options & 0x100) != 0) {
        leave_dir(sp,ent);
        iVar11 = fstat(dir_fd,(stat *)ent->fts_statp);
        if (iVar11 != 0) goto LAB_001015b7;
        _Var9 = enter_dir(sp,ent);
        if (!_Var9) {
          piVar13 = __errno_location();
          iVar11 = *piVar13;
          closedir((DIR *)ent->fts_dirp);
          ent->fts_dirp = (DIR *)0x0;
          goto LAB_00101411;
        }
      }
      if (sp->fts_compar == (_func_int__ftsent_ptr_ptr__ftsent_ptr_ptr *)0x0) {
        local_70 = 100000;
      }
      else {
        local_70 = 0xffffffffffffffff;
      }
      if (type == 2) {
LAB_001011b8:
        uVar19 = sp->fts_options;
      }
      else {
        if ((((sp->fts_options & 0x38U) == 0x18) && (ent->fts_statp[0].st_nlink == 2)) &&
           (fVar16 = filesystem_type(ent,dir_fd), fVar16 != 0x9fa0)) {
          if (fVar16 < 0x9fa1) {
            if ((fVar16 == 0) || (fVar16 == 0x6969)) goto LAB_00101050;
          }
          else if ((fVar16 == 0x5346414f) || (fVar16 == 0xff534d42)) goto LAB_00101050;
          if (type != 3) goto LAB_001011b8;
          bVar23 = false;
          bVar24 = true;
        }
        else {
LAB_00101050:
          bVar24 = type == 3;
          bVar23 = true;
        }
        if ((sp->fts_options & 0x200) != 0) {
          dir_fd = rpl_fcntl(dir_fd,0x406,3);
        }
        if ((-1 < dir_fd) && (iVar11 = fts_safe_changedir(sp,ent,dir_fd,(char *)0x0), iVar11 == 0))
        goto LAB_00101379;
        if ((bVar24) && (bVar23)) {
          piVar13 = __errno_location();
          ent->fts_errno = *piVar13;
        }
        ent->fts_flags = ent->fts_flags | 1;
        closedir((DIR *)ent->fts_dirp);
        uVar19 = sp->fts_options;
        ent->fts_dirp = (DIR *)0x0;
        if (((uVar19 & 0x200) != 0) && (-1 < dir_fd)) {
          close(dir_fd);
          uVar19 = sp->fts_options;
        }
        ent->fts_dirp = (DIR *)0x0;
      }
      bVar24 = false;
      goto LAB_00100ba1;
    }
    if (type == 3) {
      ent->fts_info = 4;
      piVar13 = __errno_location();
      ent->fts_errno = *piVar13;
    }
  }
  else {
    dir_fd = dirfd(pDVar3);
    if (dir_fd < 0) {
      piVar13 = __errno_location();
      iVar11 = *piVar13;
      closedir((DIR *)ent->fts_dirp);
      ent->fts_dirp = (DIR *)0x0;
      if (type == 3) {
        ent->fts_errno = iVar11;
        ent->fts_info = 4;
      }
    }
    else {
      if (sp->fts_compar == (_func_int__ftsent_ptr_ptr__ftsent_ptr_ptr *)0x0) {
        local_70 = 100000;
LAB_00101379:
        bVar24 = true;
        uVar19 = sp->fts_options;
      }
      else {
        local_70 = 0xffffffffffffffff;
        uVar19 = sp->fts_options;
        bVar24 = true;
      }
LAB_00100ba1:
      sVar5 = ent->fts_pathlen;
      sVar22 = sVar5;
      local_68 = sVar5 - 1;
      if (ent->fts_path[sVar5 - 1] != '/') {
        sVar22 = sVar5 + 1;
        local_68 = sVar5;
      }
      if ((uVar19 & 4) != 0) {
        pcVar6 = sp->fts_path;
        pcVar6[local_68] = '/';
        local_60 = pcVar6 + local_68 + 1;
        pDVar18 = ent->fts_dirp;
        uVar12 = sp->fts_pathlen - sVar22;
        local_78 = ent->fts_level;
        if (pDVar18 != (DIR *)0x0) goto LAB_00100c05;
        bVar23 = false;
        local_90 = (FTSENT *)0x0;
        nitems = 0;
LAB_001011e2:
        bVar24 = (bool)(pDVar3 == (DIR *)0x0 & bVar24);
        if ((sp->fts_options & 4) == 0) {
LAB_0010124a:
          if (bVar24) goto LAB_0010124e;
LAB_00101284:
          if (nitems == 0) {
LAB_00101289:
            if (((type == 3) && (ent->fts_info != 4)) && (ent->fts_info != 7)) {
              ent->fts_info = 6;
            }
            piVar13 = __errno_location();
            iVar11 = *piVar13;
            while (local_90 != (FTSENT *)0x0) {
              p_Var17 = local_90->fts_link;
              if ((DIR *)local_90->fts_dirp != (DIR *)0x0) {
                closedir((DIR *)local_90->fts_dirp);
              }
              free(local_90);
              local_90 = p_Var17;
            }
            goto LAB_001012ca;
          }
        }
        else {
          if (sp->fts_pathlen == sVar22) {
            local_60[-1] = '\0';
            goto LAB_0010124a;
          }
          if (nitems == 0) {
            local_60[-1] = '\0';
            if (!bVar24) goto LAB_00101289;
            goto LAB_0010125a;
          }
          *local_60 = '\0';
          if (bVar24) goto LAB_0010124e;
        }
LAB_00101210:
        if (bVar23) {
          sp->fts_compar = fts_compare_ino;
          local_90 = fts_sort(sp,local_90,nitems);
          sp->fts_compar = (_func_int__ftsent_ptr_ptr__ftsent_ptr_ptr *)0x0;
        }
        else if ((sp->fts_compar != (_func_int__ftsent_ptr_ptr__ftsent_ptr_ptr *)0x0) &&
                (nitems != 1)) {
          local_90 = fts_sort(sp,local_90,nitems);
        }
        goto LAB_00101170;
      }
      pDVar18 = ent->fts_dirp;
      uVar12 = sp->fts_pathlen - sVar22;
      local_78 = ent->fts_level;
      if (pDVar18 != (DIR *)0x0) {
        local_60 = (char *)0x0;
LAB_00100c05:
        local_78 = local_78 + 1;
        nitems = 0;
        piVar13 = __errno_location();
        bVar23 = false;
        local_4b = false;
        local_a0 = (FTSENT *)0x0;
        local_90 = (FTSENT *)0x0;
        do {
          *piVar13 = 0;
          pdVar14 = readdir((DIR *)pDVar18);
          if (pdVar14 == (dirent *)0x0) {
            if (*piVar13 != 0) {
              ent->fts_errno = *piVar13;
              ent->fts_info = (-(ushort)(pDVar3 == (DIR *)0x0 && nitems == 0) & 0xfffd) + 7;
            }
            closedir((DIR *)ent->fts_dirp);
            ent->fts_dirp = (DIR *)0x0;
LAB_001011d7:
            if (local_4b == false) goto LAB_001011e2;
            goto LAB_00100e08;
          }
          if ((((sp->fts_options & 0x20) == 0) && (pdVar14->d_name[0] == '.')) &&
             ((pdVar14->d_name[1] == '\0' || (*(short *)(pdVar14->d_name + 1) == 0x2e))))
          goto LAB_00100c67;
          namelen = strlen(pdVar14->d_name);
          pFVar15 = fts_alloc(sp,pdVar14->d_name,namelen);
          if (pFVar15 == (FTSENT *)0x0) {
LAB_001010d0:
            iVar11 = *piVar13;
            free(pFVar15);
            iVar2 = *piVar13;
            while (local_90 != (FTSENT *)0x0) {
              p_Var17 = local_90->fts_link;
              if ((DIR *)local_90->fts_dirp != (DIR *)0x0) {
                closedir((DIR *)local_90->fts_dirp);
              }
              free(local_90);
              local_90 = p_Var17;
            }
            pDVar3 = (DIR *)ent->fts_dirp;
            *piVar13 = iVar2;
            closedir(pDVar3);
            ent->fts_dirp = (DIR *)0x0;
            ent->fts_info = 7;
            sp->fts_options = sp->fts_options | 0x2000;
            *piVar13 = iVar11;
            goto LAB_00101164;
          }
          if (uVar12 <= namelen) {
            pcVar6 = sp->fts_path;
            _Var9 = fts_palloc(sp,local_68 + 2 + namelen);
            if (!_Var9) goto LAB_001010d0;
            if ((sp->fts_path != pcVar6) && (local_4b = _Var9, (sp->fts_options & 4) != 0)) {
              local_60 = sp->fts_path + sVar22;
            }
            uVar12 = sp->fts_pathlen - sVar22;
          }
          if (CARRY8(sVar22,namelen)) {
            free(pFVar15);
            iVar11 = *piVar13;
            while (local_90 != (FTSENT *)0x0) {
              p_Var17 = local_90->fts_link;
              if ((DIR *)local_90->fts_dirp != (DIR *)0x0) {
                closedir((DIR *)local_90->fts_dirp);
              }
              free(local_90);
              local_90 = p_Var17;
            }
            pDVar3 = (DIR *)ent->fts_dirp;
            *piVar13 = iVar11;
            closedir(pDVar3);
            ent->fts_dirp = (DIR *)0x0;
            ent->fts_info = 7;
            sp->fts_options = sp->fts_options | 0x2000;
            *piVar13 = 0x24;
            goto LAB_00101164;
          }
          pFVar15->fts_level = local_78;
          p_Var17 = sp->fts_cur;
          pFVar15->fts_pathlen = sVar22 + namelen;
          uVar19 = sp->fts_options;
          pFVar15->fts_parent = p_Var17;
          pFVar15->fts_statp[0].st_ino = pdVar14->d_ino;
          if ((uVar19 & 4) == 0) {
            pFVar15->fts_accpath = (char *)(pFVar15 + 1);
          }
          else {
            pFVar15->fts_accpath = pFVar15->fts_path;
            memmove(local_60,pFVar15 + 1,pFVar15->fts_namelen + 1);
            uVar19 = sp->fts_options;
          }
          if ((sp->fts_compar == (_func_int__ftsent_ptr_ptr__ftsent_ptr_ptr *)0x0) ||
             ((uVar19 & 0x400) != 0)) {
            bVar1 = pdVar14->d_type;
            _Var21 = 2;
            if (((uVar19 & 8) != 0) && ((bVar1 & 0xfb) != 0)) {
              _Var21 = 2 - (ulong)(uVar19 >> 4 & 1 | (uint)(bVar1 != 10));
            }
            _Var20 = 0;
            pFVar15->fts_info = 0xb;
            if (bVar1 - 1 < 0xc) {
              _Var20 = *(__mode_t *)(CSWTCH_49 + (ulong)(bVar1 - 1) * 4);
            }
            pFVar15->fts_statp[0].st_mode = _Var20;
            pFVar15->fts_statp[0].st_size = _Var21;
          }
          else {
            uVar10 = fts_stat(sp,pFVar15,false);
            pFVar15->fts_info = uVar10;
          }
          pFVar15->fts_link = (_ftsent *)0x0;
          pFVar8 = pFVar15;
          if (local_90 != (FTSENT *)0x0) {
            local_a0->fts_link = pFVar15;
            pFVar8 = local_90;
          }
          local_90 = pFVar8;
          local_a0 = pFVar15;
          if (nitems == 10000) {
            nitems = 0x2711;
            if (sp->fts_compar != (_func_int__ftsent_ptr_ptr__ftsent_ptr_ptr *)0x0)
            goto LAB_00100c67;
            fVar16 = filesystem_type(ent,dir_fd);
            if ((fVar16 == 0x1021994) || (fVar16 == 0xff534d42)) {
              bVar23 = false;
              goto LAB_00100c67;
            }
            bVar23 = fVar16 != 0x6969;
            pDVar18 = ent->fts_dirp;
          }
          else {
            nitems = nitems + 1;
            if (local_70 <= nitems) goto LAB_001011d7;
LAB_00100c67:
            pDVar18 = ent->fts_dirp;
          }
        } while (pDVar18 != (DIR *)0x0);
        if (local_4b != false) {
LAB_00100e08:
          pcVar6 = sp->fts_path;
          for (p_Var17 = sp->fts_child; p_Var17 != (_ftsent *)0x0; p_Var17 = p_Var17->fts_link) {
            if ((_ftsent *)p_Var17->fts_accpath != p_Var17 + 1) {
              p_Var17->fts_accpath = pcVar6 + ((long)p_Var17->fts_accpath - (long)p_Var17->fts_path)
              ;
            }
            p_Var17->fts_path = pcVar6;
          }
          lVar7 = local_90->fts_level;
          pFVar15 = local_90;
          while (-1 < lVar7) {
            if (pFVar15 + 1 != (FTSENT *)pFVar15->fts_accpath) {
              pFVar15->fts_accpath = pcVar6 + ((long)pFVar15->fts_accpath - (long)pFVar15->fts_path)
              ;
            }
            p_Var17 = pFVar15->fts_link;
            pFVar15->fts_path = pcVar6;
            if (p_Var17 == (_ftsent *)0x0) {
              p_Var17 = pFVar15->fts_parent;
            }
            pFVar15 = p_Var17;
            lVar7 = p_Var17->fts_level;
          }
        }
        goto LAB_001011e2;
      }
      local_90 = (FTSENT *)0x0;
      if ((pDVar3 != (DIR *)0x0) || (!bVar24)) goto LAB_00101289;
      bVar23 = false;
      nitems = 0;
LAB_0010124e:
      if ((type != 1) && (nitems != 0)) goto LAB_00101210;
LAB_0010125a:
      if (ent->fts_level == 0) {
        iVar11 = restore_initial_cwd(sp);
      }
      else {
        iVar11 = fts_safe_changedir(sp,ent->fts_parent,-1,"..");
      }
      if (iVar11 == 0) goto LAB_00101284;
      ent->fts_info = 7;
      sp->fts_options = sp->fts_options | 0x2000;
      piVar13 = __errno_location();
      iVar11 = *piVar13;
      while (local_90 != (FTSENT *)0x0) {
        p_Var17 = local_90->fts_link;
        if ((DIR *)local_90->fts_dirp != (DIR *)0x0) {
          closedir((DIR *)local_90->fts_dirp);
        }
        free(local_90);
        local_90 = p_Var17;
      }
LAB_001012ca:
      *piVar13 = iVar11;
    }
  }
LAB_00101164:
  local_90 = (FTSENT *)0x0;
LAB_00101170:
  if (lVar4 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_90;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

FTS * rpl_fts_open(char **argv,int options,_func_int_FTSENT_ptr_ptr_FTSENT_ptr_ptr *compar)

{
  _ftsent *p_Var1;
  long lVar2;
  _Bool _Var3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  FTS *sp;
  size_t sVar7;
  FTSENT *pFVar8;
  FTSENT *pFVar9;
  int *piVar10;
  ulong uVar11;
  char *pcVar12;
  long lVar13;
  char **ppcVar14;
  FTSENT *local_50;
  _Bool local_42;
  FTSENT *local_40;
  
  if (((0xfff < (uint)options) || ((~options & 0x204U) == 0)) || ((options & 0x12U) == 0)) {
    piVar10 = __errno_location();
    *piVar10 = 0x16;
    return (FTS *)0x0;
  }
  sp = (FTS *)calloc(1,0x80);
  if (sp == (FTS *)0x0) {
    return (FTS *)0x0;
  }
  pcVar12 = *argv;
  sp->fts_compar = (_func_int__ftsent_ptr_ptr__ftsent_ptr_ptr *)compar;
  sp->fts_cwd_fd = -100;
  uVar5 = options & 0xfffffdffU | 4;
  if ((options & 2U) == 0) {
    uVar5 = options;
  }
  sp->fts_options = uVar5;
  if (pcVar12 == (char *)0x0) {
    uVar11 = 0x1000;
  }
  else {
    uVar11 = 0;
    ppcVar14 = argv;
    do {
      sVar7 = strlen(pcVar12);
      if (uVar11 < sVar7) {
        uVar11 = sVar7;
      }
      pcVar12 = ppcVar14[1];
      ppcVar14 = ppcVar14 + 1;
    } while (pcVar12 != (char *)0x0);
    uVar11 = uVar11 + 1;
    if (uVar11 < 0x1000) {
      uVar11 = 0x1000;
    }
  }
  local_42 = fts_palloc(sp,uVar11);
  if (!local_42) goto LAB_00101aea;
  pcVar12 = *argv;
  if (pcVar12 == (char *)0x0) {
    pFVar9 = fts_alloc(sp,"",0);
    sp->fts_cur = pFVar9;
    if (pFVar9 == (FTSENT *)0x0) {
      piVar10 = __errno_location();
      iVar6 = *piVar10;
      local_50 = (FTSENT *)0x0;
    }
    else {
      pFVar9->fts_link = (_ftsent *)0x0;
      pFVar9->fts_info = 9;
      pFVar9->fts_level = 1;
      _Var3 = setup_dir(sp);
      if (_Var3) goto LAB_00101a33;
      piVar10 = __errno_location();
      local_50 = (FTSENT *)0x0;
      iVar6 = *piVar10;
    }
LAB_00101ad3:
    *piVar10 = iVar6;
    free(local_50);
  }
  else {
    local_50 = fts_alloc(sp,"",0);
    if (local_50 != (FTSENT *)0x0) {
      local_50->fts_level = -1;
      if (compar != (_func_int_FTSENT_ptr_ptr_FTSENT_ptr_ptr *)0x0) {
        local_42 = (_Bool)((byte)((uint)sp->fts_options >> 10) & 1);
      }
      local_40 = (FTSENT *)0x0;
      pFVar9 = (FTSENT *)0x0;
      lVar2 = 0;
LAB_0010192e:
      do {
        lVar13 = lVar2;
        sVar7 = strlen(pcVar12);
        if (((2 < sVar7) && ((((byte)((uint)options >> 0xb) ^ 1) & 1) != 0)) &&
           (pcVar12[sVar7 - 1] == '/')) {
          do {
            if (pcVar12[sVar7 - 2] != '/') break;
            sVar7 = sVar7 - 1;
          } while (sVar7 != 1);
        }
        pFVar8 = fts_alloc(sp,pcVar12,sVar7);
        if (pFVar8 == (FTSENT *)0x0) goto LAB_00101aa0;
        pFVar8->fts_level = 0;
        pFVar8->fts_parent = local_50;
        pFVar8->fts_accpath = (char *)(pFVar8 + 1);
        if ((pFVar9 == (FTSENT *)0x0) || (local_42 == false)) {
          uVar4 = fts_stat(sp,pFVar8,false);
          pFVar8->fts_info = uVar4;
          if (compar == (_func_int_FTSENT_ptr_ptr_FTSENT_ptr_ptr *)0x0) {
            pFVar8->fts_link = (_ftsent *)0x0;
            if (pFVar9 != (FTSENT *)0x0) goto LAB_00101a60;
            pcVar12 = argv[lVar13 + 1];
            pFVar9 = pFVar8;
            lVar2 = lVar13 + 1;
            local_40 = pFVar8;
            if (pcVar12 == (char *)0x0) break;
            goto LAB_0010192e;
          }
LAB_00101915:
          pFVar8->fts_link = pFVar9;
          pFVar9 = pFVar8;
        }
        else {
          pFVar8->fts_statp[0].st_size = 2;
          pFVar8->fts_info = 0xb;
          if (compar != (_func_int_FTSENT_ptr_ptr_FTSENT_ptr_ptr *)0x0) goto LAB_00101915;
          pFVar8->fts_link = (_ftsent *)0x0;
LAB_00101a60:
          local_40->fts_link = pFVar8;
          local_40 = pFVar8;
        }
        pcVar12 = argv[lVar13 + 1];
        lVar2 = lVar13 + 1;
      } while (pcVar12 != (char *)0x0);
      if ((compar == (_func_int_FTSENT_ptr_ptr_FTSENT_ptr_ptr *)0x0) || (lVar13 + 1U < 2)) {
        pFVar8 = fts_alloc(sp,"",0);
        sp->fts_cur = pFVar8;
        if (pFVar8 != (FTSENT *)0x0) goto LAB_00101a12;
        piVar10 = __errno_location();
        iVar6 = *piVar10;
      }
      else {
        pFVar9 = fts_sort(sp,pFVar9,lVar13 + 1U);
        pFVar8 = fts_alloc(sp,"",0);
        sp->fts_cur = pFVar8;
        if (pFVar8 != (FTSENT *)0x0) {
LAB_00101a12:
          pFVar8->fts_link = pFVar9;
          pFVar8->fts_info = 9;
          pFVar8->fts_level = 1;
          _Var3 = setup_dir(sp);
          if (_Var3) {
LAB_00101a33:
            if ((sp->fts_options & 0x204U) == 0) {
              iVar6 = open_safer(&_LC6,(sp->fts_options & 0x10U) << 0xd | 0x90900);
              sp->fts_rfd = iVar6;
              if (iVar6 < 0) {
                sp->fts_options = sp->fts_options | 4;
              }
            }
            i_ring_init(&sp->fts_fd_ring,0xffffffff);
            return sp;
          }
        }
LAB_00101aa0:
        piVar10 = __errno_location();
        iVar6 = *piVar10;
        if (pFVar9 == (FTSENT *)0x0) goto LAB_00101ad3;
      }
      do {
        p_Var1 = pFVar9->fts_link;
        if ((DIR *)pFVar9->fts_dirp != (DIR *)0x0) {
          closedir((DIR *)pFVar9->fts_dirp);
        }
        free(pFVar9);
        pFVar9 = p_Var1;
      } while (p_Var1 != (_ftsent *)0x0);
      goto LAB_00101ad3;
    }
  }
  free(sp->fts_path);
LAB_00101aea:
  free(sp);
  return (FTS *)0x0;
}



/* WARNING: Unknown calling convention */

int rpl_fts_close(FTS *sp)

{
  _ftsent *p_Var1;
  long lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  _ftsent *p_Var7;
  
  p_Var7 = sp->fts_cur;
  if (p_Var7 != (_ftsent *)0x0) {
    lVar2 = p_Var7->fts_level;
    while (-1 < lVar2) {
      p_Var1 = p_Var7->fts_link;
      if (p_Var1 == (_ftsent *)0x0) {
        p_Var1 = p_Var7->fts_parent;
        free(p_Var7);
        lVar2 = p_Var1->fts_level;
        p_Var7 = p_Var1;
      }
      else {
        free(p_Var7);
        lVar2 = p_Var1->fts_level;
        p_Var7 = p_Var1;
      }
    }
    free(p_Var7);
  }
  p_Var7 = sp->fts_child;
  if (p_Var7 != (_ftsent *)0x0) {
    piVar6 = __errno_location();
    iVar5 = *piVar6;
    do {
      p_Var1 = p_Var7->fts_link;
      if ((DIR *)p_Var7->fts_dirp != (DIR *)0x0) {
        closedir((DIR *)p_Var7->fts_dirp);
      }
      free(p_Var7);
      p_Var7 = p_Var1;
    } while (p_Var1 != (_ftsent *)0x0);
    *piVar6 = iVar5;
  }
  free(sp->fts_array);
  free(sp->fts_path);
  if ((sp->fts_options & 0x200U) == 0) {
    if ((sp->fts_options & 4U) == 0) {
      iVar5 = fchdir(sp->fts_rfd);
      if (iVar5 == 0) {
        iVar5 = close(sp->fts_rfd);
        if (iVar5 == 0) goto LAB_00101cb0;
        piVar6 = __errno_location();
      }
      else {
        piVar6 = __errno_location();
        iVar5 = *piVar6;
        iVar4 = close(sp->fts_rfd);
        if ((iVar5 != 0) || (iVar4 == 0)) goto LAB_00101cb3;
      }
      iVar5 = *piVar6;
      goto LAB_00101cb3;
    }
  }
  else if ((-1 < sp->fts_cwd_fd) && (iVar5 = close(sp->fts_cwd_fd), iVar5 != 0)) {
    piVar6 = __errno_location();
    iVar5 = *piVar6;
    goto LAB_00101cb3;
  }
LAB_00101cb0:
  iVar5 = 0;
LAB_00101cb3:
  while (cVar3 = i_ring_empty(&sp->fts_fd_ring), cVar3 == '\0') {
    iVar4 = i_ring_pop(&sp->fts_fd_ring);
    if (-1 < iVar4) {
      close(iVar4);
    }
  }
  if (sp->fts_leaf_optimization_works_ht != (hash_table *)0x0) {
    hash_free();
  }
  if ((sp->fts_options & 0x102U) == 0) {
    free((sp->fts_cycle).ht);
  }
  else if ((sp->fts_cycle).ht != (hash_table *)0x0) {
    hash_free();
  }
  free(sp);
  if (iVar5 != 0) {
    piVar6 = __errno_location();
    *piVar6 = iVar5;
    iVar5 = -1;
  }
  return iVar5;
}



/* WARNING: Unknown calling convention */

FTSENT * rpl_fts_read(FTS *sp)

{
  ushort uVar1;
  uint uVar2;
  _ftsent *p_Var3;
  char *pcVar4;
  long lVar5;
  _Bool _Var6;
  ushort uVar7;
  int iVar8;
  int *piVar9;
  FTSENT *pFVar10;
  size_t sVar11;
  FTSENT *p;
  _ftsent *p_Var12;
  FTSENT *pFVar13;
  size_t sVar14;
  
  pFVar13 = sp->fts_cur;
  if (pFVar13 == (FTSENT *)0x0) {
    return (FTSENT *)0x0;
  }
  uVar2 = sp->fts_options;
  if ((uVar2 & 0x2000) != 0) {
    return (FTSENT *)0x0;
  }
  uVar7 = pFVar13->fts_instr;
  pFVar13->fts_instr = 3;
  if (uVar7 == 1) {
    uVar7 = fts_stat(sp,pFVar13,false);
    pFVar13->fts_info = uVar7;
    return pFVar13;
  }
  uVar1 = pFVar13->fts_info;
  if (uVar7 == 2) {
    if (1 < (ushort)(uVar1 - 0xc)) {
      if (uVar1 == 1) goto LAB_00101f1f;
      goto LAB_00101e65;
    }
    uVar7 = fts_stat(sp,pFVar13,true);
    pFVar13->fts_info = uVar7;
    if (uVar7 == 1) {
      uVar2 = sp->fts_options;
      if ((uVar2 & 4) != 0) {
        sp->fts_cur = pFVar13;
        goto LAB_0010215a;
      }
      if ((uVar2 & 0x200) == 0) {
        iVar8 = open_safer(&_LC6,(uVar2 & 0x10) << 0xd | 0x90900);
      }
      else {
        iVar8 = openat_safer(sp->fts_cwd_fd,&_LC6);
      }
      pFVar13->fts_symfd = iVar8;
      if (iVar8 < 0) {
        piVar9 = __errno_location();
        iVar8 = *piVar9;
        pFVar13->fts_info = 7;
        pFVar13->fts_errno = iVar8;
        sp->fts_cur = pFVar13;
        return pFVar13;
      }
      pFVar13->fts_flags = pFVar13->fts_flags | 2;
      uVar7 = pFVar13->fts_info;
      goto LAB_00102146;
    }
    sp->fts_cur = pFVar13;
    if (uVar7 != 0xb) {
      return pFVar13;
    }
LAB_001021b0:
    lVar5 = pFVar13->fts_statp[0].st_size;
    if (lVar5 != 2) {
      if (lVar5 != 1) {
                    /* WARNING: Subroutine does not return */
        rpl_fts_read_cold();
      }
      return pFVar13;
    }
    uVar7 = fts_stat(sp,pFVar13,false);
    pFVar13->fts_info = uVar7;
  }
  else {
    if (uVar1 == 1) {
      if (uVar7 == 4) goto LAB_00101faa;
LAB_00101f1f:
      if (((uVar2 & 0x40) != 0) && (pFVar13->fts_statp[0].st_dev != sp->fts_dev)) {
LAB_00101faa:
        if ((pFVar13->fts_flags & 2) != 0) {
          close(pFVar13->fts_symfd);
        }
        p_Var12 = sp->fts_child;
        if (p_Var12 != (_ftsent *)0x0) {
          piVar9 = __errno_location();
          iVar8 = *piVar9;
          do {
            p_Var3 = p_Var12->fts_link;
            if ((DIR *)p_Var12->fts_dirp != (DIR *)0x0) {
              closedir((DIR *)p_Var12->fts_dirp);
            }
            free(p_Var12);
            p_Var12 = p_Var3;
          } while (p_Var3 != (_ftsent *)0x0);
          *piVar9 = iVar8;
          sp->fts_child = (_ftsent *)0x0;
        }
        pFVar13->fts_info = 6;
        leave_dir(sp,pFVar13);
        return pFVar13;
      }
      p_Var12 = sp->fts_child;
      if (p_Var12 == (_ftsent *)0x0) {
LAB_00102226:
        p = fts_build(sp,3);
        sp->fts_child = p;
        if (p == (FTSENT *)0x0) {
          if ((sp->fts_options & 0x2000) != 0) {
            return (FTSENT *)0x0;
          }
          if ((pFVar13->fts_errno != 0) && (pFVar13->fts_info != 4)) {
            pFVar13->fts_info = 7;
          }
          leave_dir(sp,pFVar13);
          return pFVar13;
        }
      }
      else {
        if ((uVar2 & 0x1000) != 0) {
          sp->fts_options = uVar2 & 0xffffefff;
          piVar9 = __errno_location();
          iVar8 = *piVar9;
          do {
            p_Var3 = p_Var12->fts_link;
            if ((DIR *)p_Var12->fts_dirp != (DIR *)0x0) {
              closedir((DIR *)p_Var12->fts_dirp);
            }
            free(p_Var12);
            p_Var12 = p_Var3;
          } while (p_Var3 != (_ftsent *)0x0);
          *piVar9 = iVar8;
          sp->fts_child = (_ftsent *)0x0;
          goto LAB_00102226;
        }
        iVar8 = fts_safe_changedir(sp,pFVar13,-1,pFVar13->fts_accpath);
        if (iVar8 == 0) {
          p = sp->fts_child;
        }
        else {
          piVar9 = __errno_location();
          iVar8 = *piVar9;
          pFVar13->fts_flags = pFVar13->fts_flags | 1;
          pFVar13->fts_errno = iVar8;
          p = sp->fts_child;
          for (p_Var12 = p; p_Var12 != (FTSENT *)0x0; p_Var12 = p_Var12->fts_link) {
            p_Var12->fts_accpath = p_Var12->fts_parent->fts_accpath;
          }
        }
      }
      sp->fts_child = (_ftsent *)0x0;
    }
    else {
LAB_00101e65:
      do {
        p = pFVar13->fts_link;
        if (p == (FTSENT *)0x0) {
          p_Var12 = pFVar13->fts_parent;
          if (p_Var12->fts_dirp != (DIR *)0x0) {
            sVar14 = p_Var12->fts_pathlen;
            sp->fts_cur = p_Var12;
            sp->fts_path[sVar14] = '\0';
            p = fts_build(sp,3);
            if (p != (FTSENT *)0x0) {
              free(pFVar13);
              goto LAB_0010210a;
            }
            if ((sp->fts_options & 0x2000) != 0) {
              return (FTSENT *)0x0;
            }
            p_Var12 = pFVar13->fts_parent;
          }
          sp->fts_cur = p_Var12;
          free(pFVar13);
          if (p_Var12->fts_level == -1) {
            free(p_Var12);
            piVar9 = __errno_location();
            *piVar9 = 0;
            sp->fts_cur = (_ftsent *)0x0;
            return (FTSENT *)0x0;
          }
          if (p_Var12->fts_info == 0xb) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          sp->fts_path[p_Var12->fts_pathlen] = '\0';
          if (p_Var12->fts_level == 0) {
            iVar8 = restore_initial_cwd(sp);
          }
          else {
            if ((p_Var12->fts_flags & 2) != 0) {
              iVar8 = p_Var12->fts_symfd;
              if ((sp->fts_options & 4U) == 0) {
                if ((sp->fts_options & 0x200U) == 0) {
                  iVar8 = fchdir(iVar8);
                  if (iVar8 != 0) {
                    piVar9 = __errno_location();
                    p_Var12->fts_errno = *piVar9;
                    sp->fts_options = sp->fts_options | 0x2000;
                  }
                  iVar8 = p_Var12->fts_symfd;
                }
                else {
                  cwd_advance_fd(sp,iVar8,true);
                  iVar8 = p_Var12->fts_symfd;
                }
              }
              close(iVar8);
              goto LAB_00101ece;
            }
            if ((p_Var12->fts_flags & 1) != 0) goto LAB_00101ece;
            iVar8 = fts_safe_changedir(sp,p_Var12->fts_parent,-1,"..");
          }
          if (iVar8 != 0) {
            piVar9 = __errno_location();
            p_Var12->fts_errno = *piVar9;
            sp->fts_options = sp->fts_options | 0x2000;
          }
LAB_00101ece:
          if (p_Var12->fts_info != 2) {
            if (p_Var12->fts_errno == 0) {
              p_Var12->fts_info = 6;
              leave_dir(sp,p_Var12);
            }
            else {
              p_Var12->fts_info = 7;
            }
          }
          if ((sp->fts_options & 0x2000) != 0) {
            return (FTSENT *)0x0;
          }
          return p_Var12;
        }
        sp->fts_cur = p;
        free(pFVar13);
        if (p->fts_level == 0) {
          iVar8 = restore_initial_cwd(sp);
          if (iVar8 != 0) {
            sp->fts_options = sp->fts_options | 0x2000;
            return (FTSENT *)0x0;
          }
          if ((sp->fts_options & 0x102U) == 0) {
            free((sp->fts_cycle).ht);
          }
          else if ((sp->fts_cycle).ht != (hash_table *)0x0) {
            hash_free();
          }
          pcVar4 = sp->fts_path;
          pFVar13 = p + 1;
          p->fts_pathlen = p->fts_namelen;
          memmove(pcVar4,pFVar13,p->fts_namelen + 1);
          pFVar10 = (FTSENT *)strrchr((char *)pFVar13,0x2f);
          if ((pFVar10 != (FTSENT *)0x0) &&
             ((pFVar13 != pFVar10 || (*(char *)((long)&p[1].fts_cycle + 1) != '\0')))) {
            pcVar4 = (char *)((long)&pFVar10->fts_cycle + 1);
            sVar11 = strlen(pcVar4);
            memmove(pFVar13,pcVar4,sVar11 + 1);
            p->fts_namelen = sVar11;
          }
          pcVar4 = sp->fts_path;
          p->fts_accpath = pcVar4;
          p->fts_path = pcVar4;
          _Var6 = setup_dir(sp);
          if (!_Var6) {
            if ((sp->fts_options & 0x102U) == 0) {
              free((sp->fts_cycle).ht);
              return (FTSENT *)0x0;
            }
            if ((sp->fts_cycle).ht == (hash_table *)0x0) {
              return (FTSENT *)0x0;
            }
            hash_free();
            return (FTSENT *)0x0;
          }
          goto LAB_00102142;
        }
        pFVar13 = p;
      } while (p->fts_instr == 4);
      if (p->fts_instr == 2) {
        uVar7 = fts_stat(sp,p,true);
        p->fts_info = uVar7;
        if ((uVar7 == 1) && (uVar2 = sp->fts_options, (uVar2 & 4) == 0)) {
          if ((uVar2 & 0x200) == 0) {
            iVar8 = open_safer(&_LC6,(uVar2 & 0x10) << 0xd | 0x90900);
          }
          else {
            iVar8 = openat_safer(sp->fts_cwd_fd,&_LC6);
          }
          p->fts_symfd = iVar8;
          if (iVar8 < 0) {
            piVar9 = __errno_location();
            iVar8 = *piVar9;
            p->fts_info = 7;
            p->fts_errno = iVar8;
          }
          else {
            p->fts_flags = p->fts_flags | 2;
          }
        }
        p->fts_instr = 3;
      }
    }
LAB_0010210a:
    sVar14 = p->fts_parent->fts_pathlen;
    if (p->fts_parent->fts_path[sVar14 - 1] == '/') {
      sVar14 = sVar14 - 1;
    }
    pcVar4 = sp->fts_path;
    pcVar4[sVar14] = '/';
    memmove(pcVar4 + sVar14 + 1,p + 1,p->fts_namelen + 1);
LAB_00102142:
    uVar7 = p->fts_info;
    pFVar13 = p;
LAB_00102146:
    sp->fts_cur = pFVar13;
    if (uVar7 == 0xb) goto LAB_001021b0;
  }
  if (uVar7 != 1) {
    return pFVar13;
  }
LAB_0010215a:
  if (pFVar13->fts_level == 0) {
    sp->fts_dev = pFVar13->fts_statp[0].st_dev;
  }
  _Var6 = enter_dir(sp,pFVar13);
  if (!_Var6) {
    return (FTSENT *)0x0;
  }
  return pFVar13;
}



/* WARNING: Unknown calling convention */

int rpl_fts_set(FTS *sp,FTSENT *p,int instr)

{
  int *piVar1;
  
  if ((uint)instr < 5) {
    p->fts_instr = (ushort)instr;
    return 0;
  }
  piVar1 = __errno_location();
  *piVar1 = 0x16;
  return 1;
}



/* WARNING: Unknown calling convention */

FTSENT * rpl_fts_children(FTS *sp,int instr)

{
  uint uVar1;
  _ftsent *p_Var2;
  _ftsent *p_Var3;
  int fd;
  int iVar4;
  int *piVar5;
  FTSENT *pFVar6;
  _ftsent *__ptr;
  
  piVar5 = __errno_location();
  if ((instr & 0xffffefffU) == 0) {
    p_Var2 = sp->fts_cur;
    *piVar5 = 0;
    if ((sp->fts_options & 0x2000) == 0) {
      if (p_Var2->fts_info == 9) {
        return p_Var2->fts_link;
      }
      if (p_Var2->fts_info == 1) {
        __ptr = sp->fts_child;
        if (__ptr != (_ftsent *)0x0) {
          do {
            p_Var3 = __ptr->fts_link;
            if ((DIR *)__ptr->fts_dirp != (DIR *)0x0) {
              closedir((DIR *)__ptr->fts_dirp);
            }
            free(__ptr);
            __ptr = p_Var3;
          } while (p_Var3 != (_ftsent *)0x0);
          *piVar5 = 0;
        }
        iVar4 = 1;
        if (instr == 0x1000) {
          sp->fts_options = sp->fts_options | 0x1000;
          iVar4 = 2;
        }
        if (((p_Var2->fts_level == 0) && (*p_Var2->fts_accpath != '/')) &&
           (uVar1 = sp->fts_options, (uVar1 & 4) == 0)) {
          if ((uVar1 & 0x200) == 0) {
            fd = open_safer(&_LC6,(uVar1 & 0x10) << 0xd | 0x90900);
          }
          else {
            fd = openat_safer(sp->fts_cwd_fd,&_LC6);
          }
          if (fd < 0) {
            sp->fts_child = (_ftsent *)0x0;
            return (FTSENT *)0x0;
          }
          pFVar6 = fts_build(sp,iVar4);
          sp->fts_child = pFVar6;
          if ((sp->fts_options & 0x200) == 0) {
            iVar4 = fchdir(fd);
            if (iVar4 != 0) {
              iVar4 = *piVar5;
              close(fd);
              *piVar5 = iVar4;
              return (FTSENT *)0x0;
            }
            close(fd);
          }
          else {
            cwd_advance_fd(sp,fd,true);
          }
          pFVar6 = sp->fts_child;
        }
        else {
          pFVar6 = fts_build(sp,iVar4);
          sp->fts_child = pFVar6;
        }
        return pFVar6;
      }
    }
  }
  else {
    *piVar5 = 0x16;
  }
  return (FTSENT *)0x0;
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


