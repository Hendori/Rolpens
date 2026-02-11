
ulong proctab_hasher(long param_1,ulong param_2)

{
  return (ulong)(long)*(int *)(param_1 + 8) % param_2;
}



undefined4 proctab_comparator(long param_1,long param_2)

{
  return CONCAT31((int3)((uint)*(int *)(param_2 + 8) >> 8),
                  *(int *)(param_1 + 8) == *(int *)(param_2 + 8));
}



byte default_key_compare(long param_1)

{
  if (((*(long *)(param_1 + 0x20) == 0) && (*(long *)(param_1 + 0x28) == 0)) &&
     (*(char *)(param_1 + 0x30) == '\0')) {
    if (*(char *)(param_1 + 0x31) != '\0') {
      return 0;
    }
    if ((((*(ulong *)(param_1 + 0x30) & 0xffff00ff0000) == 0) && (*(char *)(param_1 + 0x36) == '\0')
        ) && (*(char *)(param_1 + 0x38) == '\0')) {
      return *(byte *)(param_1 + 0x33) ^ 1;
    }
  }
  return 0;
}



void key_to_opts(long param_1,undefined1 *param_2)

{
  if (*(short *)(param_1 + 0x30) != 0) {
    *param_2 = 0x62;
    param_2 = param_2 + 1;
  }
  if (*(undefined1 **)(param_1 + 0x20) == &nondictionary) {
    *param_2 = 100;
    param_2 = param_2 + 1;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    *param_2 = 0x66;
    param_2 = param_2 + 1;
  }
  if (*(char *)(param_1 + 0x34) != '\0') {
    *param_2 = 0x67;
    param_2 = param_2 + 1;
  }
  if (*(char *)(param_1 + 0x35) != '\0') {
    *param_2 = 0x68;
    param_2 = param_2 + 1;
  }
  if (*(undefined1 **)(param_1 + 0x20) == &nonprinting) {
    *param_2 = 0x69;
    param_2 = param_2 + 1;
  }
  if (*(char *)(param_1 + 0x36) != '\0') {
    *param_2 = 0x4d;
    param_2 = param_2 + 1;
  }
  if (*(char *)(param_1 + 0x32) != '\0') {
    *param_2 = 0x6e;
    param_2 = param_2 + 1;
  }
  if (*(char *)(param_1 + 0x33) != '\0') {
    *param_2 = 0x52;
    param_2 = param_2 + 1;
  }
  if (*(char *)(param_1 + 0x37) != '\0') {
    *param_2 = 0x72;
    param_2 = param_2 + 1;
  }
  if (*(char *)(param_1 + 0x38) != '\0') {
    *param_2 = 0x56;
    param_2 = param_2 + 1;
  }
  *param_2 = 0;
  return;
}



char * set_ordering(char *param_1,long param_2,int param_3)

{
  char cVar1;
  
  cVar1 = *param_1;
  if (cVar1 != '\0') {
    if (param_3 == 2) {
      do {
        switch(cVar1) {
        case 'M':
          *(undefined1 *)(param_2 + 0x36) = 1;
          break;
        default:
          goto switchD_00100161_caseD_4e;
        case 'R':
          *(undefined1 *)(param_2 + 0x33) = 1;
          break;
        case 'V':
          *(undefined1 *)(param_2 + 0x38) = 1;
          break;
        case 'b':
          *(undefined2 *)(param_2 + 0x30) = 0x101;
          break;
        case 'd':
          *(undefined1 **)(param_2 + 0x20) = &nondictionary;
          break;
        case 'f':
          *(undefined1 **)(param_2 + 0x28) = &fold_toupper;
          break;
        case 'g':
          *(undefined1 *)(param_2 + 0x34) = 1;
          break;
        case 'h':
          *(undefined1 *)(param_2 + 0x35) = 1;
          break;
        case 'i':
          if (*(long *)(param_2 + 0x20) == 0) {
            *(undefined1 **)(param_2 + 0x20) = &nonprinting;
          }
          break;
        case 'n':
          *(undefined1 *)(param_2 + 0x32) = 1;
          break;
        case 'r':
          *(undefined1 *)(param_2 + 0x37) = 1;
        }
        cVar1 = param_1[1];
        param_1 = param_1 + 1;
      } while (cVar1 != '\0');
    }
    else {
      do {
        switch(cVar1) {
        case 'M':
          *(undefined1 *)(param_2 + 0x36) = 1;
          break;
        default:
          goto switchD_00100161_caseD_4e;
        case 'R':
          *(undefined1 *)(param_2 + 0x33) = 1;
          break;
        case 'V':
          *(undefined1 *)(param_2 + 0x38) = 1;
          break;
        case 'b':
          if (param_3 == 0) {
            *(undefined1 *)(param_2 + 0x30) = 1;
          }
          else {
            *(undefined1 *)(param_2 + 0x31) = 1;
          }
          break;
        case 'd':
          *(undefined1 **)(param_2 + 0x20) = &nondictionary;
          break;
        case 'f':
          *(undefined1 **)(param_2 + 0x28) = &fold_toupper;
          break;
        case 'g':
          *(undefined1 *)(param_2 + 0x34) = 1;
          break;
        case 'h':
          *(undefined1 *)(param_2 + 0x35) = 1;
          break;
        case 'i':
          if (*(long *)(param_2 + 0x20) == 0) {
            *(undefined1 **)(param_2 + 0x20) = &nonprinting;
          }
          break;
        case 'n':
          *(undefined1 *)(param_2 + 0x32) = 1;
          break;
        case 'r':
          *(undefined1 *)(param_2 + 0x37) = 1;
        }
        cVar1 = param_1[1];
        param_1 = param_1 + 1;
      } while (cVar1 != '\0');
    }
  }
switchD_00100161_caseD_4e:
  return param_1;
}



void struct_month_cmp(undefined8 *param_1,undefined8 *param_2)

{
  strcmp((char *)*param_1,(char *)*param_2);
  return;
}



void sighandler(int param_1)

{
  long *plVar1;
  
  plVar1 = temphead;
  if (temphead != (long *)0x0) {
    do {
      unlink((char *)((long)plVar1 + 0xd));
      plVar1 = (long *)*plVar1;
    } while (plVar1 != (long *)0x0);
  }
  temphead = (long *)0x0;
  signal(param_1,(__sighandler_t)0x0);
  raise(param_1);
  return;
}



undefined1 (*) [16] key_init(undefined1 (*param_1) [16])

{
  *(undefined8 *)param_1[4] = 0;
  param_1[1] = (undefined1  [16])0x0;
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0xffffffffffffffff;
  param_1[2] = (undefined1  [16])0x0;
  param_1[3] = (undefined1  [16])0x0;
  return param_1;
}



void add_temp_dir(undefined8 param_1)

{
  if (temp_dir_count == temp_dir_alloc) {
    temp_dirs = xpalloc(temp_dirs,&temp_dir_alloc,1,0xffffffffffffffff,8);
  }
  *(undefined8 *)(temp_dirs + temp_dir_count * 8) = param_1;
  temp_dir_count = temp_dir_count + 1;
  return;
}



void incompatible_options(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = dcgettext(0,"options \'-%s\' are incompatible",5);
                    /* WARNING: Subroutine does not return */
  error(2,0,uVar1,param_1);
}



void badfieldspec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = quote();
  uVar2 = dcgettext(0,param_2,5);
  uVar3 = dcgettext(0,"%s: invalid field specification %s",5);
                    /* WARNING: Subroutine does not return */
  error(2,0,uVar3,uVar2,uVar1);
}



void sort_die(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  int *piVar2;
  
  if (param_2 == 0) {
    param_2 = dcgettext(0,"standard output",5);
  }
  uVar1 = quotearg_n_style_colon(0,3,param_2);
  piVar2 = __errno_location();
                    /* WARNING: Subroutine does not return */
  error(2,*piVar2,"%s: %s",param_1,uVar1);
}



void link_failure(void)

{
  undefined8 uVar1;
  
  uVar1 = dlerror();
                    /* WARNING: Subroutine does not return */
  error(2,0,&_LC4,uVar1);
}



void initbuf(undefined8 *param_1,char *param_2,char *param_3)

{
  void *pvVar1;
  int *piVar2;
  undefined8 uVar3;
  size_t __n;
  char *__src;
  char *__dest;
  
  __src = param_2;
  do {
    param_3 = (char *)(((ulong)param_3 & 0xffffffffffffffe0) + 0x20);
    __dest = param_3;
    pvVar1 = malloc((size_t)param_3);
    *param_1 = pvVar1;
    if (pvVar1 != (void *)0x0) {
      param_1[5] = param_2;
      param_1[3] = param_3;
      param_1[4] = 0;
      *(undefined1 *)(param_1 + 6) = 0;
      *(undefined1 (*) [16])(param_1 + 1) = (undefined1  [16])0x0;
      return;
    }
    param_3 = (char *)((ulong)param_3 >> 1);
  } while (param_2 + 1 < param_3);
  xalloc_die();
  piVar2 = __errno_location();
  *piVar2 = 0;
  strxfrm(__dest,__src,__n);
  if (*piVar2 == 0) {
    return;
  }
  uVar3 = dcgettext(0,"string transformation failed",5);
                    /* WARNING: Subroutine does not return */
  error(0,*piVar2,uVar3);
}



void xstrxfrm(char *param_1,char *param_2,size_t param_3)

{
  int *piVar1;
  undefined8 uVar2;
  
  piVar1 = __errno_location();
  *piVar1 = 0;
  strxfrm(param_1,param_2,param_3);
  if (*piVar1 == 0) {
    return;
  }
  uVar2 = dcgettext(0,"string transformation failed",5);
                    /* WARNING: Subroutine does not return */
  error(0,*piVar1,uVar2);
}



void async_safe_die(int param_1,char *param_2)

{
  size_t sVar1;
  char *__s;
  long in_FS_OFFSET;
  undefined1 local_2c [12];
  undefined8 local_20;
  
  local_20 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  sVar1 = strlen(param_2);
  write(2,param_2,sVar1);
  if (param_1 != 0) {
    __s = (char *)inttostr(param_1,local_2c);
    write(2,": errno ",8);
    sVar1 = strlen(__s);
    write(2,__s,sVar1);
  }
  write(2,&_LC9,1);
                    /* WARNING: Subroutine does not return */
  _exit(2);
}



long * init_node(long *param_1,long *param_2,long param_3,ulong param_4,long param_5,char param_6)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  while( true ) {
    plVar4 = param_2;
    lVar6 = param_3 + param_5 * -0x20;
    if (param_6 == '\0') {
      uVar2 = (ulong)param_1[6] >> 1;
      lVar5 = param_1[6] - uVar2;
      param_3 = param_3 + param_5 * -0x20 + uVar2 * -0x20;
      plVar3 = param_1 + 3;
    }
    else {
      uVar2 = (ulong)param_1[5] >> 1;
      lVar5 = param_1[5] - uVar2;
      param_3 = lVar6 + uVar2 * -0x20;
      plVar3 = param_1 + 2;
    }
    plVar4[7] = (long)param_1;
    lVar1 = param_1[10];
    plVar4[6] = lVar5;
    plVar4[4] = (long)plVar3;
    plVar3 = plVar4 + 0x10;
    plVar4[5] = uVar2;
    *(int *)(plVar4 + 10) = (int)lVar1 + 1;
    *(undefined1 *)((long)plVar4 + 0x54) = 0;
    *plVar4 = lVar6;
    plVar4[1] = param_3;
    plVar4[2] = lVar6;
    plVar4[3] = param_3;
    pthread_mutex_init((pthread_mutex_t *)(plVar4 + 0xb),(pthread_mutexattr_t *)0x0);
    if (param_4 < 2) break;
    plVar4[8] = (long)plVar3;
    uVar2 = param_4 >> 1;
    param_4 = param_4 - uVar2;
    param_2 = (long *)init_node(plVar4,plVar3,lVar6,uVar2,param_5);
    plVar4[9] = (long)param_2;
    param_6 = '\0';
    param_1 = plVar4;
  }
  *(undefined1 (*) [16])(plVar4 + 8) = (undefined1  [16])0x0;
  return plVar3;
}



bool compare_nodes(long param_1,long param_2)

{
  if (*(uint *)(param_1 + 0x50) != *(uint *)(param_2 + 0x50)) {
    return *(uint *)(param_1 + 0x50) < *(uint *)(param_2 + 0x50);
  }
  return (ulong)(*(long *)(param_1 + 0x30) + *(long *)(param_1 + 0x28)) <
         (ulong)(*(long *)(param_2 + 0x30) + *(long *)(param_2 + 0x28));
}



undefined8 * create_temp_file(int *param_1,char param_2)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  char *__s;
  int iVar4;
  int iVar5;
  size_t sVar6;
  undefined8 *__ptr;
  int *piVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long in_FS_OFFSET;
  __sigset_t local_c0;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  __s = *(char **)(temp_dirs + temp_dir_index_2 * 8);
  sVar6 = strlen(__s);
  uVar11 = sVar6 + 0x20 & 0xfffffffffffffff8;
  __ptr = (undefined8 *)xmalloc(uVar11);
  uVar1 = uVar11 - 0xd;
  lVar2 = (long)__ptr + 0xd;
  __memcpy_chk(lVar2,__s,sVar6,uVar1);
  if (uVar11 < uVar1) {
    uVar11 = uVar1;
  }
  uVar10 = (sVar6 + uVar11) - uVar1;
  if (uVar10 < uVar11) {
    uVar10 = uVar11;
  }
  __memcpy_chk(lVar2 + sVar6,"/sortXXXXXX",0xc,uVar10 + (uVar1 - (sVar6 + uVar11)));
  *__ptr = 0;
  temp_dir_index_2 = temp_dir_index_2 + 1;
  if (temp_dir_index_2 == temp_dir_count) {
    temp_dir_index_2 = 0;
  }
  iVar4 = pthread_sigmask(0,(__sigset_t *)caught_signals,&local_c0);
  iVar5 = mkostemp_safer(lVar2,0x80000);
  if (iVar5 < 0) {
    piVar7 = __errno_location();
    iVar3 = *piVar7;
    if (iVar4 == 0) {
      pthread_sigmask(2,&local_c0,(__sigset_t *)0x0);
      *piVar7 = iVar3;
    }
    if ((iVar3 != 0x18) || (param_2 != '\x01')) {
      uVar8 = quotearg_style(4,__s);
      uVar9 = dcgettext(0,"cannot create temporary file in %s",5);
                    /* WARNING: Subroutine does not return */
      error(2,*piVar7,uVar9,uVar8);
    }
    puVar12 = (undefined8 *)0x0;
    free(__ptr);
  }
  else {
    puVar12 = __ptr;
    *(undefined8 **)temptail = __ptr;
    temptail = (undefined *)puVar12;
    puVar12 = __ptr;
    if (iVar4 == 0) {
      piVar7 = __errno_location();
      iVar4 = *piVar7;
      pthread_sigmask(2,&local_c0,(__sigset_t *)0x0);
      *piVar7 = iVar4;
    }
  }
  *param_1 = iVar5;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 parse_field_count(undefined8 param_1,undefined8 *param_2,long param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = xstrtoumax(param_1,&local_30,10,&local_28,&_LC11);
  switch(uVar1) {
  case 0:
  case 2:
    *param_2 = local_28;
    break;
  case 1:
  case 3:
    *param_2 = 0xffffffffffffffff;
    break;
  case 4:
    if (param_3 != 0) {
      uVar2 = quote(param_1);
      uVar3 = dcgettext(0,param_3,5);
      uVar4 = dcgettext(0,"%s: invalid count at start of %s",5);
                    /* WARNING: Subroutine does not return */
      error(2,0,uVar4,uVar3,uVar2);
    }
    local_30 = 0;
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_30;
}



void xfopen_part_0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = dcgettext(0,"open failed",5);
                    /* WARNING: Subroutine does not return */
  sort_die(uVar1,param_1);
}



void xfclose(FILE *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = fileno(param_1);
  if (iVar2 == 0) {
    clearerr_unlocked(param_1);
    return;
  }
  if (iVar2 == 1) {
    iVar2 = fflush_unlocked(param_1);
    if (iVar2 != 0) {
      pcVar3 = "fflush failed";
LAB_00100ba8:
      uVar1 = dcgettext(0,pcVar3,5);
                    /* WARNING: Subroutine does not return */
      sort_die(uVar1,param_2);
    }
  }
  else {
    iVar2 = rpl_fclose(param_1);
    if (iVar2 != 0) {
      pcVar3 = "close failed";
      goto LAB_00100ba8;
    }
  }
  return;
}



void move_fd_part_0(int param_1,int param_2)

{
  dup2(param_1,param_2);
  close(param_1);
  return;
}



__pid_t reap_constprop_1(void)

{
  __pid_t _Var1;
  long lVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  uint local_3c;
  undefined1 local_38 [8];
  __pid_t local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  _Var1 = waitpid(-1,(int *)&local_3c,1);
  if (_Var1 < 0) {
    uVar4 = quotearg_style(4,compress_program);
    uVar5 = dcgettext(0,"waiting for %s [-d]",5);
    piVar3 = __errno_location();
                    /* WARNING: Subroutine does not return */
    error(2,*piVar3,uVar5,uVar4);
  }
  if (_Var1 != 0) {
    local_30 = _Var1;
    lVar2 = hash_remove(proctab,local_38);
    if (lVar2 != 0) {
      *(undefined1 *)(lVar2 + 0xc) = 2;
      if ((local_3c & 0xff7f) != 0) {
        uVar4 = quotearg_style(4,compress_program);
        uVar5 = dcgettext(0,"%s [-d] terminated abnormally",5);
                    /* WARNING: Subroutine does not return */
        error(2,0,uVar5,uVar4);
      }
      nprocs = nprocs + -1;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return _Var1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void reap_constprop_0_isra_0(void)

{
  __pid_t _Var1;
  long lVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  uint local_3c;
  undefined1 local_38 [8];
  __pid_t local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  _Var1 = waitpid(-1,(int *)&local_3c,0);
  if (_Var1 < 0) {
    uVar4 = quotearg_style(4,compress_program);
    uVar5 = dcgettext(0,"waiting for %s [-d]",5);
    piVar3 = __errno_location();
                    /* WARNING: Subroutine does not return */
    error(2,*piVar3,uVar5,uVar4);
  }
  if (_Var1 != 0) {
    local_30 = _Var1;
    lVar2 = hash_remove(proctab,local_38);
    if (lVar2 != 0) {
      *(undefined1 *)(lVar2 + 0xc) = 2;
      if ((local_3c & 0xff7f) != 0) {
        uVar4 = quotearg_style(4,compress_program);
        uVar5 = dcgettext(0,"%s [-d] terminated abnormally",5);
                    /* WARNING: Subroutine does not return */
        error(2,0,uVar5,uVar4);
      }
      nprocs = nprocs + -1;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong compare_part_0_isra_0(void *param_1,long param_2,void *param_3,long param_4)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = param_4 - 1;
  uVar4 = param_2 - 1;
  if (uVar4 == 0) {
    uVar3 = (ulong)-(uint)(uVar1 != 0);
  }
  else {
    uVar3 = 1;
    if (uVar1 != 0) {
      if (hard_LC_COLLATE == '\0') {
        uVar3 = uVar1;
        if (uVar4 <= uVar1) {
          uVar3 = uVar4;
        }
        uVar2 = memcmp(param_1,param_3,uVar3);
        uVar3 = (ulong)uVar2;
        if (uVar2 == 0) {
          uVar3 = (ulong)((uint)(uVar1 < uVar4) - (uint)(uVar4 < uVar1));
        }
      }
      else {
        uVar3 = xmemcoll0();
      }
    }
  }
  if (reverse != '\0') {
    uVar3 = (ulong)(((uint)(uVar3 >> 0x1f) & 1) - (uint)(0 < (int)uVar3));
  }
  return uVar3;
}



byte * limfield_isra_0(byte *param_1,long param_2,long param_3)

{
  long lVar1;
  byte *pbVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  
  lVar1 = *(long *)(param_3 + 0x18);
  pbVar2 = param_1 + param_2 + -1;
  lVar3 = *(long *)(param_3 + 0x10);
  if (lVar1 == 0) {
    if (tab == 0x80) {
      if (pbVar2 <= param_1) {
        return param_1;
      }
      lVar4 = lVar3;
      if (lVar3 == -1) {
        return param_1;
      }
LAB_00100f78:
      while (param_1 < pbVar2) {
        while ((&blanks)[*param_1] != '\0') {
          param_1 = param_1 + 1;
          if (pbVar2 == param_1) goto LAB_00100f50;
        }
        if (pbVar2 <= param_1) break;
        while ((&blanks)[*param_1] == '\0') {
          param_1 = param_1 + 1;
          if (pbVar2 == param_1) goto LAB_00100ec8;
        }
        if ((pbVar2 <= param_1) || (bVar5 = lVar4 == 0, lVar4 = lVar4 + -1, bVar5)) break;
      }
    }
    else {
      if (pbVar2 <= param_1) {
        return param_1;
      }
      if (lVar3 == -1) {
        return param_1;
      }
      while (param_1 < pbVar2) {
LAB_00100f19:
        while ((char)*param_1 != tab) {
          param_1 = param_1 + 1;
          if (pbVar2 == param_1) {
LAB_00100f50:
            if (lVar1 == 0) {
              return pbVar2;
            }
            if (pbVar2 <= param_1 + lVar1) {
              return pbVar2;
            }
            return param_1 + lVar1;
          }
        }
        if (pbVar2 <= param_1) break;
        if (lVar1 == 0 && lVar3 == 0) {
          return param_1;
        }
        param_1 = param_1 + 1;
        if ((pbVar2 <= param_1) || (bVar5 = lVar3 == 0, lVar3 = lVar3 + -1, bVar5)) break;
      }
    }
LAB_00100ec8:
    if (lVar1 == 0) {
      return param_1;
    }
    if ((*(char *)(param_3 + 0x31) == '\0') || (pbVar2 <= param_1)) goto LAB_00100ed7;
  }
  else {
    if (tab == 0x80) {
      if (pbVar2 <= param_1) goto LAB_00100ed7;
      lVar4 = lVar3 + -1;
      if (lVar3 == 0) goto LAB_0010101b;
      goto LAB_00100f78;
    }
    if (pbVar2 <= param_1) goto LAB_00100ed7;
    if (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      if (param_1 < pbVar2) goto LAB_00100f19;
      goto LAB_00100ec8;
    }
LAB_0010101b:
    if (*(char *)(param_3 + 0x31) == '\0') goto LAB_00100ed7;
  }
  do {
    if ((&blanks)[*param_1] == '\0') break;
    param_1 = param_1 + 1;
  } while (pbVar2 != param_1);
LAB_00100ed7:
  if (param_1 + lVar1 < pbVar2) {
    pbVar2 = param_1 + lVar1;
  }
  return pbVar2;
}



byte * begfield_isra_0(byte *param_1,long param_2,long *param_3)

{
  long lVar1;
  bool bVar2;
  byte *pbVar3;
  
  pbVar3 = param_1 + param_2 + -1;
  lVar1 = *param_3;
  if (tab == 0x80) {
    if (param_1 < pbVar3) {
      do {
        bVar2 = lVar1 == 0;
        lVar1 = lVar1 + -1;
        if (bVar2) goto LAB_00101088;
        while ((&blanks)[*param_1] != '\0') {
          param_1 = param_1 + 1;
          if (pbVar3 == param_1) goto LAB_001010b2;
        }
        if (pbVar3 <= param_1) goto LAB_00101120;
        while ((&blanks)[*param_1] == '\0') {
          param_1 = param_1 + 1;
          if (pbVar3 == param_1) goto LAB_00101120;
        }
      } while (param_1 < pbVar3);
    }
  }
  else if (param_1 < pbVar3) {
    do {
      bVar2 = lVar1 == 0;
      lVar1 = lVar1 + -1;
      if (bVar2) goto LAB_00101088;
      while (tab != (char)*param_1) {
        param_1 = param_1 + 1;
        if (pbVar3 == param_1) goto LAB_001010b2;
      }
      if (pbVar3 <= param_1) goto LAB_00101120;
      param_1 = param_1 + 1;
    } while (param_1 < pbVar3);
  }
  goto LAB_001010b2;
LAB_00101088:
  if ((char)param_3[6] == '\0') goto LAB_001010b2;
  goto LAB_001010a9;
LAB_00101120:
  if (((char)param_3[6] == '\0') || (pbVar3 <= param_1)) goto LAB_001010b2;
LAB_001010a9:
  do {
    if ((&blanks)[*param_1] == '\0') break;
    param_1 = param_1 + 1;
  } while (pbVar3 != param_1);
LAB_001010b2:
  if (param_1 + param_3[1] < pbVar3) {
    pbVar3 = param_1 + param_3[1];
  }
  return pbVar3;
}



undefined8 fillbuf(long *param_1,FILE *param_2,undefined8 param_3)

{
  long lVar1;
  byte bVar2;
  long *plVar3;
  byte *pbVar4;
  ulong uVar5;
  size_t sVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  long lVar9;
  ulong uVar10;
  byte *pbVar11;
  size_t sVar12;
  byte *__ptr;
  byte *pbVar13;
  long lVar14;
  byte *pbVar15;
  byte *pbVar16;
  long in_FS_OFFSET;
  byte *local_80;
  ulong local_48;
  long local_40;
  
  plVar3 = keylist;
  bVar2 = eolchar;
  lVar14 = merge_buffer_size;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = param_1[5];
  if ((char)param_1[6] == '\0') {
    sVar12 = param_1[1];
    sVar6 = param_1[4];
    if (sVar12 == sVar6) {
      lVar9 = param_1[2];
    }
    else {
      memmove((void *)*param_1,(void *)(*param_1 + (sVar12 - sVar6)),sVar6);
      lVar9 = 0;
      sVar12 = param_1[4];
      param_1[2] = 0;
      param_1[1] = sVar12;
    }
    pbVar11 = (byte *)*param_1;
    uVar10 = lVar14 - 0x22;
    lVar14 = param_1[3];
    do {
      __ptr = pbVar11 + sVar12;
      pbVar15 = pbVar11 + lVar9 * -0x20 + lVar14;
      pbVar13 = pbVar11 + ((lVar14 - lVar1 * lVar9) - (long)__ptr);
      if (lVar9 != 0) {
        pbVar11 = (byte *)(*(long *)(pbVar15 + 8) + *(long *)pbVar15);
      }
      do {
        if (pbVar13 <= (byte *)(lVar1 + 1)) break;
        uVar5 = (ulong)(pbVar13 + -1) / (ulong)(lVar1 + 1);
        sVar6 = fread_unlocked(__ptr,1,uVar5,param_2);
        local_80 = __ptr + sVar6;
        pbVar13 = pbVar13 + -sVar6;
        if (uVar5 != sVar6) {
          if ((param_2->_flags & 0x20U) != 0) {
            uVar7 = dcgettext(0,"read failed",5);
                    /* WARNING: Subroutine does not return */
            sort_die(uVar7,param_3);
          }
          if ((param_2->_flags & 0x10U) != 0) {
            *(undefined1 *)(param_1 + 6) = 1;
            if ((byte *)*param_1 == local_80) goto LAB_0010130d;
            if ((pbVar11 != local_80) && (local_80[-1] != bVar2)) {
              *local_80 = bVar2;
              local_80 = local_80 + 1;
            }
          }
        }
        pbVar16 = pbVar15;
        pbVar4 = pbVar11;
        while (pbVar11 = pbVar4, pbVar15 = pbVar16,
              puVar8 = (undefined1 *)memchr(__ptr,(int)(char)bVar2,(long)local_80 - (long)__ptr),
              puVar8 != (undefined1 *)0x0) {
          __ptr = puVar8 + 1;
          pbVar16 = pbVar15 + -0x20;
          *puVar8 = 0;
          *(byte **)pbVar16 = pbVar11;
          uVar5 = (long)__ptr - (long)pbVar11;
          *(ulong *)(pbVar15 + -0x18) = uVar5;
          if (uVar10 < uVar5) {
            uVar10 = uVar5;
          }
          pbVar13 = pbVar13 + -lVar1;
          pbVar4 = __ptr;
          if (plVar3 != (long *)0x0) {
            if (plVar3[2] != -1) {
              puVar8 = (undefined1 *)limfield_isra_0(pbVar11,uVar5,plVar3);
            }
            lVar14 = *plVar3;
            *(undefined1 **)(pbVar15 + -8) = puVar8;
            if (lVar14 == -1) {
              if ((char)plVar3[6] != '\0') {
                while ((&blanks)[*pbVar11] != '\0') {
                  pbVar11 = pbVar11 + 1;
                }
              }
              *(byte **)(pbVar15 + -0x10) = pbVar11;
              pbVar4 = __ptr;
            }
            else {
              uVar7 = begfield_isra_0(pbVar11,uVar5,plVar3);
              *(undefined8 *)(pbVar15 + -0x10) = uVar7;
              pbVar4 = __ptr;
            }
          }
        }
        __ptr = local_80;
      } while ((char)param_1[6] == '\0');
      lVar14 = *param_1;
      param_1[1] = (long)__ptr - lVar14;
      lVar9 = (lVar14 + param_1[3]) - (long)pbVar15 >> 5;
      param_1[2] = lVar9;
      if (lVar9 != 0) goto LAB_00101479;
      local_48 = (ulong)param_1[3] >> 5;
      pbVar11 = (byte *)xpalloc(lVar14,&local_48,1,0xffffffffffffffff,0x20);
      lVar14 = local_48 << 5;
      *param_1 = (long)pbVar11;
      sVar12 = param_1[1];
      param_1[3] = lVar14;
      lVar9 = param_1[2];
    } while( true );
  }
LAB_0010130d:
  uVar7 = 0;
LAB_0010130f:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00101479:
  merge_buffer_size = uVar10 + 0x22;
  uVar7 = 1;
  param_1[4] = (long)__ptr - (long)pbVar11;
  goto LAB_0010130f;
}



void wait_proc(int param_1)

{
  __pid_t _Var1;
  long lVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  uint local_3c;
  undefined1 local_38 [8];
  __pid_t local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = param_1;
  lVar2 = hash_remove(proctab,local_38);
  if (lVar2 != 0) {
    *(undefined1 *)(lVar2 + 0xc) = 2;
    _Var1 = -1;
    if (param_1 != 0) {
      _Var1 = param_1;
    }
    _Var1 = waitpid(_Var1,(int *)&local_3c,(uint)(param_1 == 0));
    if (_Var1 < 0) {
      uVar4 = quotearg_style(4,compress_program);
      uVar5 = dcgettext(0,"waiting for %s [-d]",5);
      piVar3 = __errno_location();
                    /* WARNING: Subroutine does not return */
      error(2,*piVar3,uVar5,uVar4);
    }
    if (_Var1 != 0) {
      if (param_1 < 1) {
        local_30 = _Var1;
        lVar2 = hash_remove(proctab,local_38);
        if (lVar2 == 0) goto LAB_00101531;
        *(undefined1 *)(lVar2 + 0xc) = 2;
      }
      if ((local_3c & 0xff7f) != 0) {
        uVar4 = quotearg_style(4,compress_program);
        uVar5 = dcgettext(0,"%s [-d] terminated abnormally",5);
                    /* WARNING: Subroutine does not return */
        error(2,0,uVar5,uVar4);
      }
      nprocs = nprocs + -1;
    }
  }
LAB_00101531:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



__pid_t pipe_fork(int *param_1,long param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  __pid_t _Var4;
  int *piVar5;
  long in_FS_OFFSET;
  bool bVar6;
  double local_e0;
  __sigset_t local_c0;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = rpl_pipe2(param_1,0x80000);
  if (iVar2 < 0) {
    _Var4 = -1;
  }
  else {
    if (nmerge + 1U < nprocs) {
      reap_constprop_0_isra_0();
      do {
        if ((int)nprocs < 1) break;
        iVar2 = reap_constprop_1();
      } while (iVar2 != 0);
    }
    param_2 = param_2 + -1;
    local_e0 = _LC19;
    do {
      iVar3 = pthread_sigmask(0,(__sigset_t *)caught_signals,&local_c0);
      uVar1 = temphead;
      temphead = 0;
      _Var4 = fork();
      piVar5 = __errno_location();
      iVar2 = *piVar5;
      if (_Var4 == 0) {
        if (iVar3 != 0) {
LAB_001016c0:
          _Var4 = 0;
          close(0);
          close(1);
          goto LAB_001016d4;
        }
LAB_00101780:
        pthread_sigmask(2,&local_c0,(__sigset_t *)0x0);
        *piVar5 = iVar2;
        if (iVar2 == 0xb) goto LAB_0010171b;
LAB_001017a6:
        if (-1 < _Var4) goto LAB_001017ab;
        break;
      }
      temphead = uVar1;
      if (iVar3 == 0) goto LAB_00101780;
      *piVar5 = iVar2;
      if (iVar2 != 0xb) goto LAB_001017a6;
LAB_0010171b:
      if (-1 < _Var4) {
LAB_001017ab:
        if (_Var4 == 0) goto LAB_001016c0;
        nprocs = nprocs + 1;
        goto LAB_001016d4;
      }
      xnanosleep(local_e0);
      local_e0 = local_e0 + local_e0;
      do {
        if ((int)nprocs < 1) break;
        iVar2 = reap_constprop_1();
      } while (iVar2 != 0);
      bVar6 = param_2 != 0;
      param_2 = param_2 + -1;
    } while (bVar6);
    iVar2 = *piVar5;
    close(*param_1);
    close(param_1[1]);
    *piVar5 = iVar2;
  }
LAB_001016d4:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return _Var4;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_line(undefined8 *param_1,_IO_FILE *param_2,long param_3)

{
  char cVar1;
  byte bVar2;
  size_t __n;
  char *pcVar3;
  undefined1 auVar4 [14];
  undefined1 auVar5 [14];
  undefined1 auVar6 [15];
  undefined1 auVar7 [15];
  undefined1 auVar8 [15];
  undefined1 auVar9 [15];
  undefined1 auVar10 [15];
  undefined1 auVar11 [13];
  undefined1 auVar12 [13];
  uint5 uVar13;
  undefined1 auVar14 [13];
  undefined1 auVar15 [14];
  undefined1 auVar16 [15];
  undefined1 auVar17 [13];
  undefined1 auVar18 [13];
  undefined1 auVar19 [13];
  undefined1 auVar20 [14];
  undefined1 auVar21 [15];
  undefined1 auVar22 [15];
  undefined1 auVar23 [13];
  undefined1 auVar24 [15];
  undefined1 auVar25 [15];
  undefined1 auVar26 [15];
  undefined1 auVar27 [15];
  uint7 uVar28;
  undefined1 auVar29 [15];
  undefined1 auVar30 [15];
  byte *pbVar31;
  byte *pbVar32;
  byte *pbVar33;
  byte *pbVar34;
  byte *pbVar35;
  byte *pbVar36;
  byte *pbVar37;
  byte *pbVar38;
  byte *pbVar39;
  byte *pbVar40;
  byte *pbVar41;
  byte *pbVar42;
  byte *pbVar43;
  byte *pbVar44;
  undefined1 auVar45 [15];
  unkuint9 Var46;
  undefined1 auVar47 [11];
  undefined1 auVar48 [13];
  undefined1 auVar49 [13];
  undefined1 auVar50 [14];
  undefined1 auVar51 [15];
  undefined1 auVar52 [11];
  undefined1 auVar53 [13];
  undefined1 auVar54 [13];
  undefined1 auVar55 [14];
  undefined1 auVar56 [15];
  undefined1 auVar57 [15];
  undefined1 auVar58 [15];
  undefined1 auVar59 [15];
  uint6 uVar60;
  byte bVar61;
  int iVar62;
  uint uVar63;
  size_t sVar64;
  byte *pbVar65;
  byte *pbVar66;
  byte *pbVar67;
  byte *pbVar68;
  byte *pbVar69;
  undefined8 uVar70;
  ulong uVar71;
  ulong uVar72;
  ulong uVar73;
  long *plVar74;
  long lVar75;
  long in_FS_OFFSET;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  long lVar78;
  long lVar79;
  long lVar80;
  byte *local_48;
  long local_40;
  
  pbVar65 = (byte *)*param_1;
  __n = param_1[1];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pbVar66 = pbVar65 + __n;
  if ((param_3 != 0) || (plVar74 = keylist, debug == '\0')) {
    pbVar66[-1] = eolchar;
    sVar64 = fwrite_unlocked(pbVar65,1,__n,param_2);
    if (__n != sVar64) {
      uVar70 = dcgettext(0,"write failed",5);
                    /* WARNING: Subroutine does not return */
      sort_die(uVar70,param_3);
    }
    pbVar66[-1] = 0;
LAB_00101860:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
joined_r0x00101897:
  do {
    keylist = plVar74;
    if (pbVar66 <= pbVar65) {
      pbVar65 = (byte *)*param_1;
      lVar75 = param_1[1];
      pbVar66 = pbVar65 + lVar75 + -1;
      if (plVar74 == (long *)0x0) goto LAB_00101d56;
      lVar78 = *plVar74;
      lVar79 = plVar74[2];
      pbVar68 = pbVar65;
      if (lVar78 == -1) goto LAB_001020aa;
LAB_001018d0:
      pbVar65 = (byte *)begfield_isra_0(pbVar68,lVar75,plVar74);
      if (lVar79 == -1) goto LAB_00101916;
LAB_001018f1:
      pbVar66 = (byte *)limfield_isra_0(pbVar68,lVar75,plVar74);
      if (pbVar66 <= pbVar65) {
        pbVar66 = pbVar65;
      }
LAB_00101909:
      if (((char)plVar74[6] == '\0') || (lVar78 != -1)) {
LAB_00101916:
        if ((*(char *)((long)plVar74 + 0x36) != '\0') || ((plVar74[6] & 0xffff00ff0000U) != 0))
        goto LAB_00101931;
      }
      else {
LAB_00101931:
        bVar61 = *pbVar66;
        *pbVar66 = 0;
        cVar1 = (&blanks)[*pbVar65];
        while (cVar1 != '\0') {
          pbVar67 = pbVar65 + 1;
          pbVar65 = pbVar65 + 1;
          cVar1 = (&blanks)[*pbVar67];
        }
        local_48 = pbVar66;
        if (pbVar65 <= pbVar66) {
          if (*(char *)((long)plVar74 + 0x36) == '\0') {
            if (*(char *)((long)plVar74 + 0x34) == '\0') {
              if ((plVar74[6] & 0xff0000ff0000U) != 0) {
                pbVar67 = pbVar65;
                if (pbVar65 < pbVar66) {
                  pbVar67 = pbVar65 + (*pbVar65 == 0x2d);
                }
                if ((int)(char)*pbVar67 - 0x30U < 10) {
                  pbVar69 = pbVar67 + 1;
                  do {
                    for (; local_48 = pbVar69, thousands_sep == (char)pbVar67[1];
                        pbVar67 = pbVar67 + 2) {
                      if (9 < (int)(char)pbVar67[2] - 0x30U) {
                        local_48 = pbVar67 + 1;
                        goto LAB_001019f5;
                      }
                      pbVar69 = pbVar67 + 3;
                    }
                    pbVar67 = local_48;
                    pbVar69 = local_48 + 1;
                  } while ((int)(char)*local_48 - 0x30U < 10);
                  if (decimal_point == *local_48) {
                    pbVar69 = local_48 + 2;
                    bVar2 = local_48[1];
                    local_48 = local_48 + 1;
                    goto joined_r0x0010225d;
                  }
                }
                else {
                  local_48 = pbVar65;
                  if ((*pbVar67 != decimal_point) ||
                     (pbVar69 = pbVar67 + 2, 9 < (int)(char)pbVar67[1] - 0x30U)) goto LAB_00101a0d;
                  do {
                    bVar2 = *pbVar69;
                    local_48 = pbVar69;
                    pbVar69 = pbVar69 + 1;
joined_r0x0010225d:
                  } while ((int)(char)bVar2 - 0x30U < 10);
                }
LAB_001019f5:
                if (*(char *)((long)plVar74 + 0x35) != '\0') {
                  local_48 = local_48 + (unit_order[*local_48] != '\0');
                }
              }
            }
            else {
              local_48 = pbVar65;
              strtold((char *)pbVar65,(char **)&local_48);
            }
          }
          else {
            cVar1 = (&blanks)[*pbVar65];
            pbVar67 = pbVar65;
            while (cVar1 != '\0') {
              pbVar69 = pbVar67 + 1;
              pbVar67 = pbVar67 + 1;
              cVar1 = (&blanks)[*pbVar69];
            }
            uVar71 = 0;
            uVar73 = 0xc;
            do {
              uVar72 = uVar71 + uVar73 >> 1;
              pbVar69 = (&monthtab)[uVar72 * 2];
              bVar2 = *pbVar69;
              local_48 = pbVar67;
              while( true ) {
                if (bVar2 == 0) goto LAB_00101a0d;
                if ((byte)(&fold_toupper)[*local_48] < bVar2) goto LAB_001021a9;
                if (bVar2 < (byte)(&fold_toupper)[*local_48]) break;
                bVar2 = pbVar69[1];
                pbVar69 = pbVar69 + 1;
                local_48 = local_48 + 1;
              }
              uVar71 = uVar72 + 1;
              uVar72 = uVar73;
LAB_001021a9:
              uVar73 = uVar72;
              local_48 = pbVar65;
            } while (uVar71 < uVar72);
          }
        }
LAB_00101a0d:
        *pbVar66 = bVar61;
        pbVar66 = local_48;
      }
      uVar71 = (long)pbVar65 - (long)pbVar68;
      iVar62 = mbsnwidth(pbVar68,uVar71,0);
      lVar75 = (long)iVar62;
      if (pbVar68 < pbVar65) {
        pbVar67 = pbVar68;
        if (0xe < uVar71 - 1) {
          lVar78 = 0;
          lVar79 = 0;
          pbVar67 = pbVar68 + (uVar71 & 0xfffffffffffffff0);
          do {
            bVar61 = *pbVar68;
            pbVar69 = pbVar68 + 1;
            pbVar31 = pbVar68 + 2;
            pbVar32 = pbVar68 + 3;
            pbVar33 = pbVar68 + 4;
            pbVar34 = pbVar68 + 5;
            pbVar35 = pbVar68 + 6;
            pbVar36 = pbVar68 + 7;
            pbVar37 = pbVar68 + 8;
            pbVar38 = pbVar68 + 9;
            pbVar39 = pbVar68 + 10;
            pbVar40 = pbVar68 + 0xb;
            pbVar41 = pbVar68 + 0xc;
            pbVar42 = pbVar68 + 0xd;
            pbVar43 = pbVar68 + 0xe;
            pbVar44 = pbVar68 + 0xf;
            pbVar68 = pbVar68 + 0x10;
            auVar76[0] = -(bVar61 == _LC21);
            auVar76[1] = -(*pbVar69 == UNK_0010cc51);
            auVar76[2] = -(*pbVar31 == UNK_0010cc52);
            auVar76[3] = -(*pbVar32 == UNK_0010cc53);
            auVar76[4] = -(*pbVar33 == UNK_0010cc54);
            auVar76[5] = -(*pbVar34 == UNK_0010cc55);
            auVar76[6] = -(*pbVar35 == UNK_0010cc56);
            auVar76[7] = -(*pbVar36 == UNK_0010cc57);
            auVar76[8] = -(*pbVar37 == UNK_0010cc58);
            auVar76[9] = -(*pbVar38 == UNK_0010cc59);
            auVar76[10] = -(*pbVar39 == UNK_0010cc5a);
            auVar76[0xb] = -(*pbVar40 == UNK_0010cc5b);
            auVar76[0xc] = -(*pbVar41 == UNK_0010cc5c);
            auVar76[0xd] = -(*pbVar42 == UNK_0010cc5d);
            auVar76[0xe] = -(*pbVar43 == UNK_0010cc5e);
            auVar76[0xf] = -(*pbVar44 == UNK_0010cc5f);
            auVar76 = auVar76 & __LC22;
            uVar63 = CONCAT13(0,CONCAT12(auVar76[9],(ushort)auVar76[8]));
            auVar6[0xd] = 0;
            auVar6._0_13_ = auVar76._0_13_;
            auVar6[0xe] = auVar76[7];
            auVar8[0xc] = auVar76[6];
            auVar8._0_12_ = auVar76._0_12_;
            auVar8._13_2_ = auVar6._13_2_;
            auVar10[0xb] = 0;
            auVar10._0_11_ = auVar76._0_11_;
            auVar10._12_3_ = auVar8._12_3_;
            auVar21[10] = auVar76[5];
            auVar21._0_10_ = auVar76._0_10_;
            auVar21._11_4_ = auVar10._11_4_;
            auVar24[9] = 0;
            auVar24._0_9_ = auVar76._0_9_;
            auVar24._10_5_ = auVar21._10_5_;
            auVar26[8] = auVar76[4];
            auVar26._0_8_ = auVar76._0_8_;
            auVar26._9_6_ = auVar24._9_6_;
            uVar28 = auVar26._8_7_;
            auVar45._7_8_ = 0;
            auVar45._0_7_ = uVar28;
            Var46 = CONCAT81(SUB158(auVar45 << 0x40,7),auVar76[3]);
            auVar56._9_6_ = 0;
            auVar56._0_9_ = Var46;
            auVar47._1_10_ = SUB1510(auVar56 << 0x30,5);
            auVar47[0] = auVar76[2];
            auVar57._11_4_ = 0;
            auVar57._0_11_ = auVar47;
            auVar48._1_12_ = SUB1512(auVar57 << 0x20,3);
            auVar48[0] = auVar76[1];
            auVar29[1] = 0;
            auVar29[0] = auVar76[0];
            auVar29._2_13_ = auVar48;
            auVar11[0xc] = auVar76[0xb];
            auVar11._0_12_ = ZEXT112(auVar76[0xc]) << 0x40;
            auVar12._10_3_ = auVar11._10_3_;
            auVar12._0_10_ = (unkuint10)auVar76[10] << 0x40;
            uVar13 = auVar12._8_5_;
            auVar49._5_8_ = 0;
            auVar49._0_5_ = uVar13;
            auVar14[4] = auVar76[9];
            auVar14._0_4_ = uVar63;
            auVar14[5] = 0;
            auVar14._6_7_ = SUB137(auVar49 << 0x40,6);
            auVar4._10_2_ = 0;
            auVar4._0_10_ = auVar29._0_10_;
            auVar4._12_2_ = (short)Var46;
            uVar60 = CONCAT42(auVar4._10_4_,auVar47._0_2_);
            auVar50._6_8_ = 0;
            auVar50._0_6_ = uVar60;
            auVar15._4_2_ = auVar48._0_2_;
            auVar15._0_4_ = auVar29._0_4_;
            auVar15._6_8_ = SUB148(auVar50 << 0x40,6);
            lVar78 = lVar78 + (ulong)auVar76[0xe] +
                     (ulong)(auVar29._0_4_ & 0xffff) + ((ulong)uVar60 & 0xffffffff) +
                     ((ulong)CONCAT24(auVar21._10_2_,(uint)auVar26._8_2_) & 0xffffffff) +
                     ((ulong)(uVar28 >> 0x20) & 0xffff) +
                     ((ulong)uVar13 & 0xffffffff) + (ulong)(uVar63 & 0xffff) +
                     ((ulong)CONCAT14(auVar76[0xd],(uint)auVar76[0xc]) & 0xffffffff);
            lVar79 = lVar79 + (ulong)auVar76[0xf] +
                     (ulong)auVar15._4_4_ + (ulong)(auVar4._10_4_ >> 0x10) +
                     (ulong)auVar21._10_2_ + (ulong)(uVar28 >> 0x30) +
                     (ulong)(uVar13 >> 0x20) + (ulong)auVar14._4_4_ + (ulong)auVar76[0xd];
          } while (pbVar67 != pbVar68);
          lVar75 = lVar75 + lVar78 + lVar79;
          if (uVar71 == (uVar71 & 0xfffffffffffffff0)) goto LAB_00101d70;
        }
        lVar75 = lVar75 + (ulong)(*pbVar67 == 9);
        if (((((((pbVar67 + 1 < pbVar65) &&
                (lVar75 = lVar75 + (ulong)(pbVar67[1] == 9), pbVar67 + 2 < pbVar65)) &&
               (lVar75 = lVar75 + (ulong)(pbVar67[2] == 9), pbVar67 + 3 < pbVar65)) &&
              ((lVar75 = lVar75 + (ulong)(pbVar67[3] == 9), pbVar67 + 4 < pbVar65 &&
               (lVar75 = lVar75 + (ulong)(pbVar67[4] == 9), pbVar67 + 5 < pbVar65)))) &&
             (lVar75 = lVar75 + (ulong)(pbVar67[5] == 9), pbVar67 + 6 < pbVar65)) &&
            (((lVar75 = lVar75 + (ulong)(pbVar67[6] == 9), pbVar67 + 7 < pbVar65 &&
              (lVar75 = lVar75 + (ulong)(pbVar67[7] == 9), pbVar67 + 8 < pbVar65)) &&
             ((lVar75 = lVar75 + (ulong)(pbVar67[8] == 9), pbVar67 + 9 < pbVar65 &&
              (((lVar75 = lVar75 + (ulong)(pbVar67[9] == 9), pbVar67 + 10 < pbVar65 &&
                (lVar75 = lVar75 + (ulong)(pbVar67[10] == 9), pbVar67 + 0xb < pbVar65)) &&
               (lVar75 = lVar75 + (ulong)(pbVar67[0xb] == 9), pbVar67 + 0xc < pbVar65)))))))) &&
           ((lVar75 = lVar75 + (ulong)(pbVar67[0xc] == 9), pbVar67 + 0xd < pbVar65 &&
            (lVar75 = lVar75 + (ulong)(pbVar67[0xd] == 9), pbVar67 + 0xe < pbVar65)))) {
          lVar75 = lVar75 + (ulong)(pbVar67[0xe] == 9);
        }
      }
LAB_00101d70:
      do {
        uVar71 = (long)pbVar66 - (long)pbVar65;
        iVar62 = mbsnwidth(pbVar65,uVar71,0);
        lVar78 = (long)iVar62;
        if (pbVar65 < pbVar66) {
          pbVar68 = pbVar65;
          if (0xe < uVar71 - 1) {
            lVar79 = 0;
            lVar80 = 0;
            pbVar68 = pbVar65 + (uVar71 & 0xfffffffffffffff0);
            do {
              bVar61 = *pbVar65;
              pbVar67 = pbVar65 + 1;
              pbVar69 = pbVar65 + 2;
              pbVar31 = pbVar65 + 3;
              pbVar32 = pbVar65 + 4;
              pbVar33 = pbVar65 + 5;
              pbVar34 = pbVar65 + 6;
              pbVar35 = pbVar65 + 7;
              pbVar36 = pbVar65 + 8;
              pbVar37 = pbVar65 + 9;
              pbVar38 = pbVar65 + 10;
              pbVar39 = pbVar65 + 0xb;
              pbVar40 = pbVar65 + 0xc;
              pbVar41 = pbVar65 + 0xd;
              pbVar42 = pbVar65 + 0xe;
              pbVar43 = pbVar65 + 0xf;
              pbVar65 = pbVar65 + 0x10;
              auVar77[0] = -(bVar61 == _LC21);
              auVar77[1] = -(*pbVar67 == UNK_0010cc51);
              auVar77[2] = -(*pbVar69 == UNK_0010cc52);
              auVar77[3] = -(*pbVar31 == UNK_0010cc53);
              auVar77[4] = -(*pbVar32 == UNK_0010cc54);
              auVar77[5] = -(*pbVar33 == UNK_0010cc55);
              auVar77[6] = -(*pbVar34 == UNK_0010cc56);
              auVar77[7] = -(*pbVar35 == UNK_0010cc57);
              auVar77[8] = -(*pbVar36 == UNK_0010cc58);
              auVar77[9] = -(*pbVar37 == UNK_0010cc59);
              auVar77[10] = -(*pbVar38 == UNK_0010cc5a);
              auVar77[0xb] = -(*pbVar39 == UNK_0010cc5b);
              auVar77[0xc] = -(*pbVar40 == UNK_0010cc5c);
              auVar77[0xd] = -(*pbVar41 == UNK_0010cc5d);
              auVar77[0xe] = -(*pbVar42 == UNK_0010cc5e);
              auVar77[0xf] = -(*pbVar43 == UNK_0010cc5f);
              auVar77 = auVar77 & __LC22;
              uVar63 = CONCAT13(0,CONCAT12(auVar77[9],(ushort)auVar77[8]));
              auVar7[0xd] = 0;
              auVar7._0_13_ = auVar77._0_13_;
              auVar7[0xe] = auVar77[7];
              auVar9[0xc] = auVar77[6];
              auVar9._0_12_ = auVar77._0_12_;
              auVar9._13_2_ = auVar7._13_2_;
              auVar16[0xb] = 0;
              auVar16._0_11_ = auVar77._0_11_;
              auVar16._12_3_ = auVar9._12_3_;
              auVar22[10] = auVar77[5];
              auVar22._0_10_ = auVar77._0_10_;
              auVar22._11_4_ = auVar16._11_4_;
              auVar25[9] = 0;
              auVar25._0_9_ = auVar77._0_9_;
              auVar25._10_5_ = auVar22._10_5_;
              auVar27[8] = auVar77[4];
              auVar27._0_8_ = auVar77._0_8_;
              auVar27._9_6_ = auVar25._9_6_;
              uVar28 = auVar27._8_7_;
              auVar51._7_8_ = 0;
              auVar51._0_7_ = uVar28;
              Var46 = CONCAT81(SUB158(auVar51 << 0x40,7),auVar77[3]);
              auVar58._9_6_ = 0;
              auVar58._0_9_ = Var46;
              auVar52._1_10_ = SUB1510(auVar58 << 0x30,5);
              auVar52[0] = auVar77[2];
              auVar59._11_4_ = 0;
              auVar59._0_11_ = auVar52;
              auVar53._1_12_ = SUB1512(auVar59 << 0x20,3);
              auVar53[0] = auVar77[1];
              auVar30[1] = 0;
              auVar30[0] = auVar77[0];
              auVar30._2_13_ = auVar53;
              auVar17[0xc] = auVar77[0xb];
              auVar17._0_12_ = ZEXT112(auVar77[0xc]) << 0x40;
              auVar18._10_3_ = auVar17._10_3_;
              auVar18._0_10_ = (unkuint10)auVar77[10] << 0x40;
              uVar13 = auVar18._8_5_;
              auVar54._5_8_ = 0;
              auVar54._0_5_ = uVar13;
              auVar19[4] = auVar77[9];
              auVar19._0_4_ = uVar63;
              auVar19[5] = 0;
              auVar19._6_7_ = SUB137(auVar54 << 0x40,6);
              auVar23._4_9_ = auVar19._4_9_;
              auVar23._0_4_ = uVar63 & 0xffff;
              auVar5._10_2_ = 0;
              auVar5._0_10_ = auVar30._0_10_;
              auVar5._12_2_ = (short)Var46;
              uVar60 = CONCAT42(auVar5._10_4_,auVar52._0_2_);
              auVar55._6_8_ = 0;
              auVar55._0_6_ = uVar60;
              auVar20._4_2_ = auVar53._0_2_;
              auVar20._0_4_ = auVar30._0_4_;
              auVar20._6_8_ = SUB148(auVar55 << 0x40,6);
              lVar79 = lVar79 + (ulong)auVar77[0xe] +
                       (ulong)(auVar30._0_4_ & 0xffff) + ((ulong)uVar60 & 0xffffffff) +
                       ((ulong)CONCAT24(auVar22._10_2_,(uint)auVar27._8_2_) & 0xffffffff) +
                       ((ulong)(uVar28 >> 0x20) & 0xffff) +
                       (auVar23._0_8_ & 0xffffffff) + ((ulong)uVar13 & 0xffffffff) +
                       ((ulong)CONCAT14(auVar77[0xd],(uint)auVar77[0xc]) & 0xffffffff);
              lVar80 = lVar80 + (ulong)auVar77[0xf] +
                       (ulong)auVar20._4_4_ + (ulong)(auVar5._10_4_ >> 0x10) +
                       (ulong)auVar22._10_2_ + (ulong)(uVar28 >> 0x30) +
                       (ulong)auVar19._4_4_ + (ulong)(uVar13 >> 0x20) + (ulong)auVar77[0xd];
            } while (pbVar68 != pbVar65);
            lVar78 = lVar78 + lVar79 + lVar80;
            if (uVar71 == (uVar71 & 0xfffffffffffffff0)) goto joined_r0x00101ff7;
          }
          lVar78 = lVar78 + (ulong)(*pbVar68 == 9);
          if ((((((pbVar68 + 1 < pbVar66) &&
                 (lVar78 = lVar78 + (ulong)(pbVar68[1] == 9), pbVar68 + 2 < pbVar66)) &&
                ((lVar78 = lVar78 + (ulong)(pbVar68[2] == 9), pbVar68 + 3 < pbVar66 &&
                 (((lVar78 = lVar78 + (ulong)(pbVar68[3] == 9), pbVar68 + 4 < pbVar66 &&
                   (lVar78 = lVar78 + (ulong)(pbVar68[4] == 9), pbVar68 + 5 < pbVar66)) &&
                  (lVar78 = lVar78 + (ulong)(pbVar68[5] == 9), pbVar68 + 6 < pbVar66)))))) &&
               ((lVar78 = lVar78 + (ulong)(pbVar68[6] == 9), pbVar68 + 7 < pbVar66 &&
                (lVar78 = lVar78 + (ulong)(pbVar68[7] == 9), pbVar68 + 8 < pbVar66)))) &&
              (lVar78 = lVar78 + (ulong)(pbVar68[8] == 9), pbVar68 + 9 < pbVar66)) &&
             (((lVar78 = lVar78 + (ulong)(pbVar68[9] == 9), pbVar68 + 10 < pbVar66 &&
               (lVar78 = lVar78 + (ulong)(pbVar68[10] == 9), pbVar68 + 0xb < pbVar66)) &&
              ((lVar78 = lVar78 + (ulong)(pbVar68[0xb] == 9), pbVar68 + 0xc < pbVar66 &&
               ((lVar78 = lVar78 + (ulong)(pbVar68[0xc] == 9), pbVar68 + 0xd < pbVar66 &&
                (lVar78 = lVar78 + (ulong)(pbVar68[0xd] == 9), pbVar68 + 0xe < pbVar66)))))))) {
            lVar78 = lVar78 + (ulong)(pbVar68[0xe] == 9);
          }
        }
joined_r0x00101ff7:
        while (lVar75 != 0) {
          lVar75 = lVar75 + -1;
          pcVar3 = _stdout->_IO_write_ptr;
          if (pcVar3 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = pcVar3 + 1;
            *pcVar3 = ' ';
          }
          else {
            __overflow(_stdout,0x20);
          }
        }
        if (lVar78 == 0) {
          uVar70 = dcgettext(0,"^ no match for key\n",5);
          __printf_chk(2,uVar70);
        }
        else {
          do {
            pcVar3 = _stdout->_IO_write_ptr;
            if (pcVar3 < _stdout->_IO_write_end) {
              _stdout->_IO_write_ptr = pcVar3 + 1;
              *pcVar3 = '_';
            }
            else {
              __overflow(_stdout,0x5f);
            }
            lVar78 = lVar78 + -1;
          } while (lVar78 != 0);
          pcVar3 = _stdout->_IO_write_ptr;
          if (pcVar3 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = pcVar3 + 1;
            *pcVar3 = '\n';
          }
          else {
            __overflow(_stdout,10);
          }
        }
        if (plVar74 == (long *)0x0) goto LAB_00101860;
        plVar74 = (long *)plVar74[8];
        if (plVar74 != (long *)0x0) goto code_r0x0010208c;
        if ((unique != '\0') || (stable != '\0')) goto LAB_00101860;
        pbVar65 = (byte *)*param_1;
        pbVar66 = pbVar65 + param_1[1] + -1;
LAB_00101d56:
        plVar74 = (long *)0x0;
        iVar62 = mbsnwidth(pbVar65,0,0);
        lVar75 = (long)iVar62;
      } while( true );
    }
    bVar61 = *pbVar65;
    uVar63 = (uint)bVar61;
    pbVar65 = pbVar65 + 1;
    if (bVar61 == 9) {
      pbVar68 = (byte *)param_2->_IO_write_ptr;
      uVar63 = 0x3e;
      bVar61 = 0x3e;
      if (pbVar68 < param_2->_IO_write_end) {
LAB_00101cc2:
        param_2->_IO_write_ptr = (char *)(pbVar68 + 1);
        *pbVar68 = bVar61;
        plVar74 = keylist;
        goto joined_r0x00101897;
      }
    }
    else {
      if (pbVar66 == pbVar65) {
        uVar63 = 10;
        bVar61 = 10;
      }
      pbVar68 = (byte *)param_2->_IO_write_ptr;
      if (pbVar68 < param_2->_IO_write_end) goto LAB_00101cc2;
    }
    iVar62 = __overflow(param_2,uVar63);
    plVar74 = keylist;
    if (iVar62 == -1) {
      uVar70 = dcgettext(0,"write failed",5);
                    /* WARNING: Subroutine does not return */
      sort_die(uVar70,0);
    }
  } while( true );
code_r0x0010208c:
  pbVar68 = (byte *)*param_1;
  lVar75 = param_1[1];
  lVar78 = *plVar74;
  lVar79 = plVar74[2];
  pbVar66 = pbVar68 + lVar75 + -1;
  pbVar65 = pbVar68;
  if (lVar78 != -1) goto LAB_001018d0;
LAB_001020aa:
  pbVar68 = pbVar65;
  if (lVar79 != -1) goto LAB_001018f1;
  goto LAB_00101909;
}



void exit_cleanup(void)

{
  undefined8 *puVar1;
  int iVar2;
  long in_FS_OFFSET;
  __sigset_t local_a0;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (temphead != (undefined8 *)0x0) {
    iVar2 = pthread_sigmask(0,(__sigset_t *)caught_signals,&local_a0);
    for (puVar1 = temphead; puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
      unlink((char *)((long)puVar1 + 0xd));
    }
    temphead = (undefined8 *)0x0;
    if (iVar2 == 0) {
      pthread_sigmask(2,&local_a0,(__sigset_t *)0x0);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    close_stdout();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void zaptemp(char *param_1)

{
  char *pcVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long *__ptr;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long in_FS_OFFSET;
  __sigset_t local_c0;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar1 = (char *)((long)temphead + 0xd);
  plVar4 = (long *)&temphead;
  __ptr = temphead;
  while (param_1 != pcVar1) {
    pcVar1 = (char *)(*__ptr + 0xd);
    plVar4 = __ptr;
    __ptr = (long *)*__ptr;
  }
  if (*(char *)((long)__ptr + 0xc) == '\x01') {
    wait_proc();
  }
  lVar3 = *__ptr;
  iVar5 = pthread_sigmask(0,(__sigset_t *)caught_signals,&local_c0);
  iVar6 = unlink(param_1);
  piVar7 = __errno_location();
  iVar2 = *piVar7;
  *plVar4 = lVar3;
  if (iVar5 == 0) {
    pthread_sigmask(2,&local_c0,(__sigset_t *)0x0);
  }
  if (iVar6 != 0) {
    uVar8 = quotearg_n_style_colon(0,3,param_1);
    uVar9 = dcgettext(0,"warning: cannot remove: %s",5);
                    /* WARNING: Subroutine does not return */
    error(0,iVar2,uVar9,uVar8);
  }
  if (lVar3 == 0) {
    temptail = (undefined *)plVar4;
  }
  free(__ptr);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FILE * stream_open(char *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  FILE *pFVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*param_2 == 'r') {
    if ((*param_1 == '-') && (param_1[1] == '\0')) {
      have_read_stdin = 1;
      pFVar3 = _stdin;
    }
    else {
      pFVar3 = (FILE *)0x0;
      iVar1 = open(param_1,0x80000);
      if (-1 < iVar1) {
        pFVar3 = fdopen(iVar1,param_2);
      }
    }
    fadvise(pFVar3,2);
    return pFVar3;
  }
  if (*param_2 != 'w') {
                    /* WARNING: Subroutine does not return */
    __assert_fail("!\"unexpected mode passed to stream_open\"","src/sort.c",0x3d6,"stream_open");
  }
  if (param_1 == (char *)0x0) {
    return _stdout;
  }
  iVar1 = ftruncate(1,0);
  if (iVar1 == 0) {
    return _stdout;
  }
  piVar4 = __errno_location();
  iVar1 = *piVar4;
  if (outstat_errno_4 == 0) {
    iVar2 = fstat(1,(stat *)&outstat_3);
    if (iVar2 != 0) {
      outstat_errno_4 = *piVar4;
      goto LAB_00102565;
    }
    outstat_errno_4 = -1;
  }
  else {
LAB_00102565:
    if (-1 < outstat_errno_4) goto LAB_0010257f;
  }
  if ((DAT_00106d38 & 0xf000) != 0x8000) {
    return _stdout;
  }
LAB_0010257f:
  uVar5 = quotearg_n_style_colon(0,3,param_1);
  uVar6 = dcgettext(0,"%s: error truncating",5);
                    /* WARNING: Subroutine does not return */
  error(2,iVar1,uVar6,uVar5);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 stream_open_constprop_0(long param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_1 == 0) {
    return _stdout;
  }
  iVar1 = ftruncate(1,0);
  if (iVar1 == 0) {
    return _stdout;
  }
  piVar3 = __errno_location();
  iVar1 = *piVar3;
  if (outstat_errno_4 == 0) {
    iVar2 = fstat(1,(stat *)&outstat_3);
    if (iVar2 != 0) {
      outstat_errno_4 = *piVar3;
      goto LAB_00102675;
    }
    outstat_errno_4 = -1;
  }
  else {
LAB_00102675:
    if (-1 < outstat_errno_4) goto LAB_0010268b;
  }
  if ((DAT_00106d38 & 0xf000) != 0x8000) {
    return _stdout;
  }
LAB_0010268b:
  uVar4 = quotearg_n_style_colon(0,3,param_1);
  uVar5 = dcgettext(0,"%s: error truncating",5);
                    /* WARNING: Subroutine does not return */
  error(2,iVar1,uVar5,uVar4);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long open_input_files(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  char *__file;
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  FILE *pFVar5;
  long lVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  long in_FS_OFFSET;
  int local_48;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar3 = (undefined8 *)xnmalloc(param_2);
  *param_3 = puVar3;
  if (param_2 == 0) {
LAB_00102958:
    lVar10 = 0;
  }
  else {
    lVar10 = 0;
    puVar11 = puVar3;
    do {
      lVar4 = param_1[1];
      if ((lVar4 != 0) && (*(char *)(lVar4 + 0xc) != '\0')) {
        if (*(char *)(lVar4 + 0xc) == '\x01') {
          wait_proc(*(undefined4 *)(lVar4 + 8));
        }
        iVar1 = open((char *)(lVar4 + 0xd),0);
        if (iVar1 < 0) {
LAB_00102796:
          puVar3[lVar10] = 0;
        }
        else {
          iVar2 = pipe_fork(&local_48,9);
          lVar6 = proctab;
          if (iVar2 != -1) {
            if (iVar2 == 0) {
              close(local_48);
              if (iVar1 != 0) {
                move_fd_part_0(iVar1,0);
              }
              if (local_44 != 1) {
                move_fd_part_0(local_44,1);
              }
              execlp(compress_program,compress_program,&_LC30,0);
              piVar7 = __errno_location();
              async_safe_die(*piVar7,"couldn\'t execute compress program (with -d)");
              goto LAB_001029b7;
            }
            *(int *)(lVar4 + 8) = iVar2;
            if ((lVar6 != 0) ||
               (lVar6 = hash_initialize(0x2f,0,0x100000,proctab_comparator,0), proctab = lVar6,
               lVar6 != 0)) {
              *(undefined1 *)(lVar4 + 0xc) = 1;
              lVar4 = hash_insert(lVar6,lVar4);
              if (lVar4 != 0) {
                close(iVar1);
                close(local_44);
                pFVar5 = fdopen(local_48,"r");
                if (pFVar5 != (FILE *)0x0) {
                  *puVar11 = pFVar5;
                  goto LAB_001027fa;
                }
                piVar7 = __errno_location();
                iVar1 = *piVar7;
                close(local_48);
                *piVar7 = iVar1;
                *puVar11 = 0;
                break;
              }
            }
            xalloc_die();
            goto LAB_00102958;
          }
          piVar7 = __errno_location();
          if (*piVar7 != 0x18) {
            uVar8 = quotearg_style(4,compress_program);
            uVar9 = dcgettext(0,"couldn\'t create process for %s -d",5);
                    /* WARNING: Subroutine does not return */
            error(2,*piVar7,uVar9,uVar8);
          }
          close(iVar1);
          *piVar7 = 0x18;
          puVar3[lVar10] = 0;
        }
        break;
      }
      __file = (char *)*param_1;
      if ((*__file == '-') && (__file[1] == '\0')) {
        have_read_stdin = 1;
        pFVar5 = _stdin;
      }
      else {
        iVar1 = open(__file,0x80000);
        if (iVar1 < 0) {
          fadvise(0,2);
          goto LAB_00102796;
        }
        pFVar5 = fdopen(iVar1,"r");
      }
      fadvise(pFVar5);
      *puVar11 = pFVar5;
      if (pFVar5 == (FILE *)0x0) break;
LAB_001027fa:
      lVar10 = lVar10 + 1;
      param_1 = param_1 + 2;
      puVar11 = puVar11 + 1;
    } while (param_2 != lVar10);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar10;
  }
LAB_001029b7:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



long maybe_create_temp_constprop_0(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  FILE *pFVar3;
  long lVar4;
  undefined8 uVar5;
  int *piVar6;
  int __fd;
  long in_FS_OFFSET;
  bool bVar7;
  int local_2c;
  int local_28;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = create_temp_file(&local_2c,0);
  __fd = local_2c;
  if (lVar2 != 0) {
    bVar7 = compress_program != (char *)0x0;
    *(undefined1 *)(lVar2 + 0xc) = 0;
    if (bVar7) {
      iVar1 = pipe_fork(&local_28,4);
      *(int *)(lVar2 + 8) = iVar1;
      if (iVar1 < 1) {
        if (iVar1 == 0) {
          close(local_24);
          if (__fd != 1) {
            move_fd_part_0(__fd,1);
          }
          if (local_28 != 0) {
            move_fd_part_0(local_28,0);
          }
          execlp(compress_program,compress_program,0);
          piVar6 = __errno_location();
          async_safe_die(*piVar6,"couldn\'t execute compress program");
          goto LAB_00102b9e;
        }
      }
      else {
        close(__fd);
        close(local_28);
        local_2c = local_24;
        if (proctab == 0) goto LAB_00102b00;
        while( true ) {
          lVar4 = proctab;
          *(undefined1 *)(lVar2 + 0xc) = 1;
          lVar4 = hash_insert(lVar4,lVar2);
          __fd = local_24;
          if (lVar4 != 0) break;
          do {
            xalloc_die();
LAB_00102b00:
            proctab = hash_initialize(0x2f,0,0x100000,proctab_comparator,0);
          } while (proctab == 0);
        }
      }
    }
    pFVar3 = fdopen(__fd,"w");
    *param_1 = pFVar3;
    if (pFVar3 == (FILE *)0x0) {
      uVar5 = dcgettext(0,"couldn\'t create temporary file",5);
                    /* WARNING: Subroutine does not return */
      sort_die(uVar5,lVar2 + 0xd);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar2;
  }
LAB_00102b9e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int keycompare(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  undefined8 uVar5;
  byte bVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  long lVar11;
  ulong uVar12;
  size_t sVar13;
  int iVar14;
  ulong uVar15;
  byte *__nptr;
  byte bVar16;
  char cVar17;
  int iVar18;
  byte *pbVar19;
  int iVar20;
  ulong uVar21;
  byte *pbVar22;
  long *plVar23;
  long in_FS_OFFSET;
  longdouble in_ST0;
  longdouble lVar24;
  longdouble lVar25;
  longdouble lVar26;
  longdouble in_ST1;
  longdouble lVar27;
  longdouble in_ST2;
  longdouble lVar28;
  longdouble in_ST3;
  longdouble lVar29;
  longdouble in_ST4;
  longdouble lVar30;
  longdouble in_ST5;
  longdouble in_ST6;
  longdouble in_ST7;
  byte *local_2148;
  byte *local_2128;
  ulong local_2118;
  ulong local_2110;
  byte *local_2108;
  byte *local_2100;
  int local_20f4;
  byte *local_20c8;
  byte *local_20c0;
  undefined1 local_20b8 [16];
  undefined1 local_20a8 [16];
  char local_2098 [92];
  undefined8 local_203c;
  undefined4 uStack_2034;
  undefined4 uStack_2030;
  undefined4 uStack_202c;
  undefined4 uStack_2028;
  undefined8 uStack_2024;
  undefined8 local_201c;
  char cStack_2014;
  char cStack_2013;
  char cStack_2012;
  char acStack_2011 [137];
  byte local_1f88;
  byte abStack_1f87 [3999];
  byte local_fe8 [4008];
  long local_40;
  
  pbVar9 = (byte *)param_1[2];
  pbVar8 = (byte *)param_2[3];
  pbVar10 = (byte *)param_2[2];
  pbVar7 = (byte *)param_1[3];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar23 = keylist;
LAB_00102c20:
  lVar11 = plVar23[5];
  lVar4 = plVar23[4];
  if (pbVar7 <= pbVar9) {
    pbVar7 = pbVar9;
  }
  if (pbVar8 <= pbVar10) {
    pbVar8 = pbVar10;
  }
  local_2118 = (long)pbVar7 - (long)pbVar9;
  local_2110 = (long)pbVar8 - (long)pbVar10;
  if (((hard_LC_COLLATE == '\0') && ((plVar23[6] & 0xffffffffff0000U) == 0)) &&
     ((char)plVar23[7] == '\0')) {
    if (lVar4 != 0) {
      if (lVar11 == 0) {
        do {
          if ((pbVar7 <= pbVar9) || (*(char *)(lVar4 + (ulong)*pbVar9) == '\0')) {
            if (pbVar8 <= pbVar10) goto LAB_00104030;
            while (*(char *)(lVar4 + (ulong)(uint)*pbVar10) != '\0') {
              pbVar10 = pbVar10 + 1;
              if (pbVar8 == pbVar10) goto LAB_00104030;
            }
            if (pbVar7 <= pbVar9) goto LAB_00104030;
            iVar14 = (uint)*pbVar9 - (uint)*pbVar10;
            if (iVar14 != 0) goto LAB_00102fb0;
            pbVar10 = pbVar10 + 1;
          }
          pbVar9 = pbVar9 + 1;
        } while( true );
      }
      do {
        if ((pbVar7 <= pbVar9) || (*(char *)(lVar4 + (ulong)*pbVar9) == '\0')) {
          if (pbVar8 <= pbVar10) goto LAB_00103d28;
          while (*(char *)(lVar4 + (ulong)*pbVar10) != '\0') {
            pbVar10 = pbVar10 + 1;
            if (pbVar8 == pbVar10) goto LAB_00103d28;
          }
          if (pbVar7 <= pbVar9) goto LAB_00103d28;
          iVar14 = (uint)*(byte *)(lVar11 + (ulong)*pbVar9) -
                   (uint)*(byte *)(lVar11 + (ulong)*pbVar10);
          if (iVar14 != 0) goto LAB_00102fb0;
          pbVar10 = pbVar10 + 1;
        }
        pbVar9 = pbVar9 + 1;
      } while( true );
    }
    uVar15 = local_2110;
    if (local_2118 <= local_2110) {
      uVar15 = local_2118;
    }
    if (uVar15 != 0) {
      sVar13 = 0;
      if (lVar11 == 0) {
        iVar14 = memcmp(pbVar9,pbVar10,uVar15);
        if (iVar14 != 0) goto LAB_00102fb0;
      }
      else {
        do {
          iVar14 = (uint)*(byte *)(lVar11 + (ulong)pbVar9[sVar13]) -
                   (uint)*(byte *)(lVar11 + (ulong)pbVar10[sVar13]);
          if (iVar14 != 0) goto LAB_00102fb0;
          sVar13 = sVar13 + 1;
        } while (uVar15 != sVar13);
      }
    }
    iVar14 = (uint)(local_2110 < local_2118) - (uint)(local_2118 < local_2110);
    goto LAB_00102d69;
  }
  bVar1 = *pbVar7;
  local_2148 = (byte *)0x0;
  bVar2 = *pbVar8;
  __nptr = pbVar9;
  pbVar22 = pbVar10;
  lVar24 = in_ST0;
  lVar25 = in_ST1;
  lVar26 = in_ST2;
  lVar27 = in_ST3;
  lVar28 = in_ST4;
  lVar29 = in_ST5;
  lVar30 = in_ST6;
  if (lVar4 == 0 && lVar11 == 0) goto LAB_00102c86;
  __nptr = &local_1f88;
  if (local_2118 + 2 + local_2110 < 0xfa1) {
    pbVar8 = abStack_1f87 + local_2118;
    if (local_2118 == 0) goto LAB_001033df;
LAB_00103098:
    pbVar22 = pbVar8;
    lVar24 = in_ST0;
    lVar25 = in_ST1;
    lVar26 = in_ST2;
    lVar27 = in_ST3;
    lVar28 = in_ST4;
    lVar29 = in_ST5;
    lVar30 = in_ST6;
    if (lVar4 == 0) {
      uVar15 = 0;
      if (lVar11 != 0) {
        do {
          __nptr[uVar15] = *(byte *)(lVar11 + (ulong)pbVar9[uVar15]);
          uVar15 = uVar15 + 1;
        } while (local_2118 != uVar15);
        pbVar7 = __nptr + local_2118;
        if (local_2110 == 0) goto LAB_00102c86;
        goto LAB_00103434;
      }
      if (local_2118 - 1 < 7) {
        uVar15 = 0;
LAB_00103b00:
        do {
          __nptr[uVar15] = pbVar9[uVar15];
          uVar15 = uVar15 + 1;
        } while (local_2118 != uVar15);
      }
      else {
        uVar15 = 0;
        if ((ulong)((long)__nptr - (long)(pbVar9 + 1)) < 0xf) goto LAB_00103b00;
        if (local_2118 - 1 < 0xf) {
          uVar21 = 0;
          uVar15 = local_2118;
LAB_00103d8b:
          *(undefined8 *)(__nptr + uVar21) = *(undefined8 *)(pbVar9 + uVar21);
          uVar21 = uVar21 + (uVar15 & 0xfffffffffffffff8);
          if ((uVar15 & 7) != 0) {
LAB_00103da7:
            __nptr[uVar21] = pbVar9[uVar21];
            if ((((uVar21 + 1 < local_2118) &&
                 (__nptr[uVar21 + 1] = pbVar9[uVar21 + 1], uVar21 + 2 < local_2118)) &&
                ((__nptr[uVar21 + 2] = pbVar9[uVar21 + 2], uVar21 + 3 < local_2118 &&
                 ((__nptr[uVar21 + 3] = pbVar9[uVar21 + 3], uVar21 + 4 < local_2118 &&
                  (__nptr[uVar21 + 4] = pbVar9[uVar21 + 4], uVar21 + 5 < local_2118)))))) &&
               (__nptr[uVar21 + 5] = pbVar9[uVar21 + 5], uVar21 + 6 < local_2118)) {
              __nptr[uVar21 + 6] = pbVar9[uVar21 + 6];
            }
          }
        }
        else {
          uVar15 = 0;
          uVar21 = local_2118 & 0xfffffffffffffff0;
          do {
            uVar5 = *(undefined8 *)(pbVar9 + uVar15 + 8);
            *(undefined8 *)(__nptr + uVar15) = *(undefined8 *)(pbVar9 + uVar15);
            *(undefined8 *)(__nptr + uVar15 + 8) = uVar5;
            uVar15 = uVar15 + 0x10;
          } while (uVar21 != uVar15);
          if (local_2118 != uVar21) {
            uVar15 = local_2118 - uVar21;
            if (6 < (local_2118 - uVar21) - 1) goto LAB_00103d8b;
            goto LAB_00103da7;
          }
        }
      }
      pbVar7 = __nptr + local_2118;
      if (local_2110 == 0) goto LAB_00102c86;
LAB_00103b55:
      pbVar22 = pbVar8;
      if (local_2110 - 1 < 7) {
        uVar15 = 0;
      }
      else {
        uVar15 = 0;
        if (0xe < (ulong)((long)pbVar8 - (long)(pbVar10 + 1))) {
          if (local_2110 - 1 < 0xf) {
            uVar21 = 0;
            uVar15 = local_2110;
LAB_00103e8d:
            *(undefined8 *)(pbVar8 + uVar21) = *(undefined8 *)(pbVar10 + uVar21);
            uVar21 = uVar21 + (uVar15 & 0xfffffffffffffff8);
            if ((uVar15 & 7) == 0) goto LAB_0010310a;
          }
          else {
            uVar15 = 0;
            uVar21 = local_2110 & 0xfffffffffffffff0;
            do {
              uVar5 = *(undefined8 *)(pbVar10 + uVar15 + 8);
              *(undefined8 *)(pbVar8 + uVar15) = *(undefined8 *)(pbVar10 + uVar15);
              *(undefined8 *)(pbVar8 + uVar15 + 8) = uVar5;
              uVar15 = uVar15 + 0x10;
            } while (uVar21 != uVar15);
            if (local_2110 == uVar21) goto LAB_0010310a;
            uVar15 = local_2110 - uVar21;
            if (6 < (local_2110 - uVar21) - 1) goto LAB_00103e8d;
          }
          pbVar8[uVar21] = pbVar10[uVar21];
          if (((((uVar21 + 1 < local_2110) &&
                (pbVar8[uVar21 + 1] = pbVar10[uVar21 + 1], uVar21 + 2 < local_2110)) &&
               (pbVar8[uVar21 + 2] = pbVar10[uVar21 + 2], uVar21 + 3 < local_2110)) &&
              ((pbVar8[uVar21 + 3] = pbVar10[uVar21 + 3], uVar21 + 4 < local_2110 &&
               (pbVar8[uVar21 + 4] = pbVar10[uVar21 + 4], uVar21 + 5 < local_2110)))) &&
             (pbVar8[uVar21 + 5] = pbVar10[uVar21 + 5], uVar21 + 6 < local_2110)) {
            pbVar8[uVar21 + 6] = pbVar10[uVar21 + 6];
          }
          goto LAB_0010310a;
        }
      }
      do {
        pbVar8[uVar15] = pbVar10[uVar15];
        uVar15 = uVar15 + 1;
      } while (local_2110 != uVar15);
    }
    else {
      pbVar7 = pbVar9 + local_2118;
      local_2118 = 0;
      if (lVar11 == 0) {
        do {
          if (*(char *)(lVar4 + (ulong)*pbVar9) == '\0') {
            __nptr[local_2118] = *pbVar9;
            local_2118 = local_2118 + 1;
          }
          pbVar9 = pbVar9 + 1;
        } while (pbVar7 != pbVar9);
        pbVar7 = __nptr + local_2118;
        if (local_2110 == 0) goto LAB_00102c86;
        goto LAB_00103149;
      }
      do {
        if (*(char *)(lVar4 + (ulong)*pbVar9) == '\0') {
          __nptr[local_2118] = *(byte *)(lVar11 + (ulong)*pbVar9);
          local_2118 = local_2118 + 1;
        }
        pbVar9 = pbVar9 + 1;
      } while (pbVar7 != pbVar9);
      pbVar7 = __nptr + local_2118;
      if (local_2110 == 0) goto LAB_00102c86;
LAB_001030de:
      pbVar9 = pbVar10 + local_2110;
      local_2110 = 0;
      do {
        if (*(char *)(lVar4 + (ulong)*pbVar10) == '\0') {
          pbVar8[local_2110] = *(byte *)(lVar11 + (ulong)*pbVar10);
          local_2110 = local_2110 + 1;
        }
        pbVar10 = pbVar10 + 1;
        pbVar22 = pbVar8;
      } while (pbVar9 != pbVar10);
    }
LAB_0010310a:
    pbVar8 = pbVar22 + local_2110;
    lVar24 = in_ST0;
    lVar25 = in_ST1;
    lVar26 = in_ST2;
    lVar27 = in_ST3;
    lVar28 = in_ST4;
    lVar29 = in_ST5;
    lVar30 = in_ST6;
  }
  else {
    __nptr = (byte *)xmalloc();
    pbVar8 = __nptr + local_2118 + 1;
    local_2148 = __nptr;
    if (local_2118 != 0) goto LAB_00103098;
LAB_001033df:
    pbVar7 = __nptr;
    pbVar22 = pbVar8;
    lVar24 = in_ST0;
    lVar25 = in_ST1;
    lVar26 = in_ST2;
    lVar27 = in_ST3;
    lVar28 = in_ST4;
    lVar29 = in_ST5;
    lVar30 = in_ST6;
    if (local_2110 != 0) {
      if (lVar4 == 0) {
LAB_00103434:
        uVar15 = 0;
        pbVar8 = pbVar22;
        if (lVar11 == 0) goto LAB_00103b55;
        do {
          pbVar22[uVar15] = *(byte *)(lVar11 + (ulong)pbVar10[uVar15]);
          uVar15 = uVar15 + 1;
        } while (local_2110 != uVar15);
        pbVar8 = pbVar22 + local_2110;
        lVar24 = in_ST0;
        lVar25 = in_ST1;
        lVar26 = in_ST2;
        lVar27 = in_ST3;
        lVar28 = in_ST4;
        lVar29 = in_ST5;
        lVar30 = in_ST6;
      }
      else {
        if (lVar11 != 0) goto LAB_001030de;
LAB_00103149:
        pbVar8 = pbVar10 + local_2110;
        local_2110 = 0;
        do {
          if (*(char *)(lVar4 + (ulong)*pbVar10) == '\0') {
            pbVar22[local_2110] = *pbVar10;
            local_2110 = local_2110 + 1;
          }
          pbVar10 = pbVar10 + 1;
        } while (pbVar8 != pbVar10);
        pbVar8 = pbVar22 + local_2110;
        lVar24 = in_ST0;
        lVar25 = in_ST1;
        lVar26 = in_ST2;
        lVar27 = in_ST3;
        lVar28 = in_ST4;
        lVar29 = in_ST5;
        lVar30 = in_ST6;
      }
    }
  }
LAB_00102c86:
  *pbVar7 = 0;
  *pbVar8 = 0;
  if (*(char *)((long)plVar23 + 0x32) != '\0') {
    while ((&blanks)[*__nptr] != '\0') {
      __nptr = __nptr + 1;
    }
    cVar17 = (&blanks)[*pbVar22];
    while (cVar17 != '\0') {
      pbVar9 = pbVar22 + 1;
      pbVar22 = pbVar22 + 1;
      cVar17 = (&blanks)[*pbVar9];
    }
LAB_00102d10:
    iVar14 = strnumcmp(__nptr,pbVar22,(int)(char)decimal_point,thousands_sep);
    in_ST0 = lVar24;
    in_ST1 = lVar25;
    in_ST2 = lVar26;
    in_ST3 = lVar27;
    in_ST4 = lVar28;
    in_ST5 = lVar29;
    in_ST6 = lVar30;
LAB_00102d50:
    *pbVar7 = bVar1;
    *pbVar8 = bVar2;
    free(local_2148);
    goto LAB_00102d69;
  }
  if (*(char *)((long)plVar23 + 0x34) != '\0') {
    strtold((char *)__nptr,(char **)&local_20c8);
    strtold((char *)pbVar22,(char **)&local_20c0);
    in_ST0 = lVar26;
    in_ST1 = lVar27;
    in_ST2 = lVar28;
    in_ST3 = lVar29;
    in_ST4 = lVar30;
    in_ST5 = in_ST7;
    in_ST6 = in_ST7;
    if (__nptr == local_20c8) {
      iVar14 = -(uint)(local_20c0 != pbVar22);
    }
    else if (pbVar22 == local_20c0) {
LAB_00103216:
      iVar14 = 1;
    }
    else if (lVar24 < lVar25) {
LAB_001040ba:
      iVar14 = -1;
    }
    else {
      iVar14 = 1;
      if ((lVar24 <= lVar25) && (iVar14 = 0, lVar24 != lVar25)) {
        if (!NAN(lVar25)) goto LAB_001040ba;
        if (!NAN(lVar24)) goto LAB_00103216;
        __snprintf_chk(local_2098,0x87,2,0x10e,&_LC36,pbVar7,SUB108(lVar24,0),
                       (short)((unkuint10)lVar24 >> 0x40));
        lVar24 = in_ST6;
        __snprintf_chk(acStack_2011,0x87,2,0x87,&_LC36);
        iVar14 = strcmp(local_2098,acStack_2011);
        in_ST0 = lVar26;
        in_ST1 = lVar27;
        in_ST2 = lVar28;
        in_ST3 = lVar29;
        in_ST4 = lVar30;
        in_ST5 = in_ST7;
        in_ST7 = lVar24;
      }
    }
    goto LAB_00102d50;
  }
  if (*(char *)((long)plVar23 + 0x35) == '\0') {
    in_ST0 = lVar24;
    in_ST1 = lVar25;
    in_ST2 = lVar26;
    in_ST3 = lVar27;
    in_ST4 = lVar28;
    in_ST5 = lVar29;
    in_ST6 = lVar30;
    if (*(char *)((long)plVar23 + 0x36) == '\0') {
      if (*(char *)((long)plVar23 + 0x33) == '\0') {
        if ((char)plVar23[7] == '\0') {
          if (local_2118 == 0) {
            iVar14 = -(uint)(local_2110 != 0);
          }
          else {
            if (local_2110 == 0) {
              *pbVar7 = bVar1;
              *pbVar22 = bVar2;
              free(local_2148);
              iVar14 = 1;
              goto LAB_00102fb0;
            }
            iVar14 = xmemcoll0(__nptr,local_2118 + 1,pbVar22,local_2110 + 1);
            in_ST0 = lVar24;
            in_ST1 = lVar25;
            in_ST2 = lVar26;
            in_ST3 = lVar27;
            in_ST4 = lVar28;
            in_ST5 = lVar29;
            in_ST6 = lVar30;
          }
        }
        else {
          iVar14 = filenvercmp(__nptr,local_2118,pbVar22);
          in_ST0 = lVar24;
          in_ST1 = lVar25;
          in_ST2 = lVar26;
          in_ST3 = lVar27;
          in_ST4 = lVar28;
          in_ST5 = lVar29;
          in_ST6 = lVar30;
        }
      }
      else {
        acStack_2011[0x15] = random_md5_state[0x40];
        acStack_2011[0x16] = random_md5_state[0x41];
        acStack_2011[0x17] = random_md5_state[0x42];
        acStack_2011[0x18] = random_md5_state[0x43];
        acStack_2011[0x19] = random_md5_state[0x44];
        acStack_2011[0x1a] = random_md5_state[0x45];
        acStack_2011[0x1b] = random_md5_state[0x46];
        acStack_2011[0x1c] = random_md5_state[0x47];
        acStack_2011[0x1d] = random_md5_state[0x48];
        acStack_2011[0x1e] = random_md5_state[0x49];
        acStack_2011[0x1f] = random_md5_state[0x4a];
        acStack_2011[0x20] = random_md5_state[0x4b];
        acStack_2011[0x21] = random_md5_state[0x4c];
        acStack_2011[0x22] = random_md5_state[0x4d];
        acStack_2011[0x23] = random_md5_state[0x4e];
        acStack_2011[0x24] = random_md5_state[0x4f];
        acStack_2011[0x25] = random_md5_state[0x50];
        acStack_2011[0x26] = random_md5_state[0x51];
        acStack_2011[0x27] = random_md5_state[0x52];
        acStack_2011[0x28] = random_md5_state[0x53];
        acStack_2011[0x29] = random_md5_state[0x54];
        acStack_2011[0x2a] = random_md5_state[0x55];
        acStack_2011[0x2b] = random_md5_state[0x56];
        acStack_2011[0x2c] = random_md5_state[0x57];
        acStack_2011[0x2d] = random_md5_state[0x58];
        acStack_2011[0x2e] = random_md5_state[0x59];
        acStack_2011[0x2f] = random_md5_state[0x5a];
        acStack_2011[0x30] = random_md5_state[0x5b];
        local_203c = random_md5_state._0_8_;
        uStack_2034 = (undefined4)random_md5_state._8_8_;
        uStack_2030 = SUB84(random_md5_state._8_8_,4);
        local_2098[0x40] = random_md5_state[0x40];
        local_2098[0x41] = random_md5_state[0x41];
        local_2098[0x42] = random_md5_state[0x42];
        local_2098[0x43] = random_md5_state[0x43];
        local_2098[0x44] = random_md5_state[0x44];
        local_2098[0x45] = random_md5_state[0x45];
        local_2098[0x46] = random_md5_state[0x46];
        local_2098[0x47] = random_md5_state[0x47];
        local_2098[0x48] = random_md5_state[0x48];
        local_2098[0x49] = random_md5_state[0x49];
        local_2098[0x4a] = random_md5_state[0x4a];
        local_2098[0x4b] = random_md5_state[0x4b];
        uStack_202c = (undefined4)random_md5_state._16_8_;
        uStack_2028 = SUB84(random_md5_state._16_8_,4);
        uStack_2024 = random_md5_state._24_8_;
        local_201c = random_md5_state._32_8_;
        cStack_2014 = random_md5_state[0x28];
        cStack_2013 = random_md5_state[0x29];
        cStack_2012 = random_md5_state[0x2a];
        acStack_2011[0] = random_md5_state[0x2b];
        acStack_2011[1] = random_md5_state[0x2c];
        acStack_2011[2] = random_md5_state[0x2d];
        acStack_2011[3] = random_md5_state[0x2e];
        acStack_2011[4] = random_md5_state[0x2f];
        acStack_2011[5] = random_md5_state[0x30];
        acStack_2011[6] = random_md5_state[0x31];
        acStack_2011[7] = random_md5_state[0x32];
        acStack_2011[8] = random_md5_state[0x33];
        acStack_2011[9] = random_md5_state[0x34];
        acStack_2011[10] = random_md5_state[0x35];
        acStack_2011[0xb] = random_md5_state[0x36];
        acStack_2011[0xc] = random_md5_state[0x37];
        acStack_2011[0xd] = random_md5_state[0x38];
        acStack_2011[0xe] = random_md5_state[0x39];
        acStack_2011[0xf] = random_md5_state[0x3a];
        acStack_2011[0x10] = random_md5_state[0x3b];
        acStack_2011[0x11] = random_md5_state[0x3c];
        acStack_2011[0x12] = random_md5_state[0x3d];
        acStack_2011[0x13] = random_md5_state[0x3e];
        acStack_2011[0x14] = random_md5_state[0x3f];
        local_2098[0] = random_md5_state[0];
        local_2098[1] = random_md5_state[1];
        local_2098[2] = random_md5_state[2];
        local_2098[3] = random_md5_state[3];
        local_2098[4] = random_md5_state[4];
        local_2098[5] = random_md5_state[5];
        local_2098[6] = random_md5_state[6];
        local_2098[7] = random_md5_state[7];
        local_2098[8] = random_md5_state[8];
        local_2098[9] = random_md5_state[9];
        local_2098[10] = random_md5_state[10];
        local_2098[0xb] = random_md5_state[0xb];
        local_2098[0xc] = random_md5_state[0xc];
        local_2098[0xd] = random_md5_state[0xd];
        local_2098[0xe] = random_md5_state[0xe];
        local_2098[0xf] = random_md5_state[0xf];
        local_2098[0x10] = random_md5_state[0x10];
        local_2098[0x11] = random_md5_state[0x11];
        local_2098[0x12] = random_md5_state[0x12];
        local_2098[0x13] = random_md5_state[0x13];
        local_2098[0x14] = random_md5_state[0x14];
        local_2098[0x15] = random_md5_state[0x15];
        local_2098[0x16] = random_md5_state[0x16];
        local_2098[0x17] = random_md5_state[0x17];
        local_2098[0x18] = random_md5_state[0x18];
        local_2098[0x19] = random_md5_state[0x19];
        local_2098[0x1a] = random_md5_state[0x1a];
        local_2098[0x1b] = random_md5_state[0x1b];
        local_2098[0x1c] = random_md5_state[0x1c];
        local_2098[0x1d] = random_md5_state[0x1d];
        local_2098[0x1e] = random_md5_state[0x1e];
        local_2098[0x1f] = random_md5_state[0x1f];
        local_2098[0x20] = random_md5_state[0x20];
        local_2098[0x21] = random_md5_state[0x21];
        local_2098[0x22] = random_md5_state[0x22];
        local_2098[0x23] = random_md5_state[0x23];
        local_2098[0x24] = random_md5_state[0x24];
        local_2098[0x25] = random_md5_state[0x25];
        local_2098[0x26] = random_md5_state[0x26];
        local_2098[0x27] = random_md5_state[0x27];
        local_2098[0x28] = random_md5_state[0x28];
        local_2098[0x29] = random_md5_state[0x29];
        local_2098[0x2a] = random_md5_state[0x2a];
        local_2098[0x2b] = random_md5_state[0x2b];
        local_2098[0x2c] = random_md5_state[0x2c];
        local_2098[0x2d] = random_md5_state[0x2d];
        local_2098[0x2e] = random_md5_state[0x2e];
        local_2098[0x2f] = random_md5_state[0x2f];
        local_2098[0x30] = random_md5_state[0x30];
        local_2098[0x31] = random_md5_state[0x31];
        local_2098[0x32] = random_md5_state[0x32];
        local_2098[0x33] = random_md5_state[0x33];
        local_2098[0x34] = random_md5_state[0x34];
        local_2098[0x35] = random_md5_state[0x35];
        local_2098[0x36] = random_md5_state[0x36];
        local_2098[0x37] = random_md5_state[0x37];
        local_2098[0x38] = random_md5_state[0x38];
        local_2098[0x39] = random_md5_state[0x39];
        local_2098[0x3a] = random_md5_state[0x3a];
        local_2098[0x3b] = random_md5_state[0x3b];
        local_2098[0x3c] = random_md5_state[0x3c];
        local_2098[0x3d] = random_md5_state[0x3d];
        local_2098[0x3e] = random_md5_state[0x3e];
        local_2098[0x3f] = random_md5_state[0x3f];
        local_2098[0x4c] = random_md5_state[0x4c];
        local_2098[0x4d] = random_md5_state[0x4d];
        local_2098[0x4e] = random_md5_state[0x4e];
        local_2098[0x4f] = random_md5_state[0x4f];
        local_2098[0x50] = random_md5_state[0x50];
        local_2098[0x51] = random_md5_state[0x51];
        local_2098[0x52] = random_md5_state[0x52];
        local_2098[0x53] = random_md5_state[0x53];
        local_2098[0x54] = random_md5_state[0x54];
        local_2098[0x55] = random_md5_state[0x55];
        local_2098[0x56] = random_md5_state[0x56];
        local_2098[0x57] = random_md5_state[0x57];
        local_2098[0x58] = random_md5_state[0x58];
        local_2098[0x59] = random_md5_state[0x59];
        local_2098[0x5a] = random_md5_state[0x5a];
        local_2098[0x5b] = random_md5_state[0x5b];
        if (hard_LC_COLLATE == '\0') {
          (*ptr_MD5_Update)(local_2098,__nptr,local_2118);
          (*ptr_MD5_Final)(local_20b8,local_2098);
          (*ptr_MD5_Update)(&local_203c,pbVar22,local_2110);
          (*ptr_MD5_Final)(local_20a8,&local_203c);
          local_20f4 = memcmp(local_20b8,local_20a8,0x10);
          local_2108 = (byte *)0x0;
          local_2128 = __nptr;
          local_2100 = pbVar22;
joined_r0x00103c9b:
          iVar14 = local_20f4;
          if (iVar14 == 0) {
            uVar15 = local_2110;
            if (local_2118 <= local_2110) {
              uVar15 = local_2118;
            }
            iVar14 = memcmp(local_2128,local_2100,uVar15);
            if (iVar14 == 0) {
              iVar14 = (uint)(local_2110 < local_2118) - (uint)(local_2118 < local_2110);
            }
          }
        }
        else {
          uVar21 = 4000;
          uVar15 = (local_2110 + local_2118) * 3 + 2;
          local_20f4 = 0;
          local_2108 = (byte *)0x0;
          local_2128 = local_fe8;
LAB_00103718:
          if (uVar21 < uVar15) {
            uVar21 = uVar21 * 3 >> 1;
            if (uVar21 <= uVar15) {
              uVar21 = uVar15;
            }
            free(local_2108);
            local_2108 = (byte *)malloc(uVar21);
            local_2128 = local_2108;
            if (local_2108 == (byte *)0x0) {
              uVar21 = 4000;
              local_2128 = local_fe8;
            }
          }
          if (__nptr < pbVar7) {
            lVar11 = xstrxfrm(local_2128,__nptr,uVar21);
            local_2118 = lVar11 + 1;
            if (pbVar22 < pbVar8) {
              if (uVar21 < local_2118) {
                lVar11 = xstrxfrm(0,pbVar22,0);
                local_2110 = lVar11 + 1;
                uVar12 = local_2110 + local_2118;
                goto LAB_00103a57;
              }
              local_2100 = local_2128 + local_2118;
              lVar11 = xstrxfrm(local_2100,pbVar22,uVar21 - local_2118);
              local_2110 = lVar11 + 1;
              uVar12 = local_2118 + local_2110;
              if (uVar21 < uVar12) goto LAB_00103766;
            }
            else {
              if (uVar21 < local_2118) {
                local_2110 = 0;
                uVar12 = local_2118;
LAB_00103a57:
                if (uVar12 < 0x5555555555555555) goto LAB_00103775;
                free(local_2108);
                local_2128 = (byte *)xmalloc(uVar12);
                goto LAB_00103a81;
              }
              local_2110 = 0;
LAB_00103aa6:
              local_2100 = local_2128 + local_2118;
            }
LAB_0010393d:
            sVar13 = strlen((char *)__nptr);
            __nptr = __nptr + sVar13 + 1;
            if (pbVar22 < pbVar8) goto LAB_0010394f;
LAB_0010395c:
            if ((pbVar7 <= __nptr) && (pbVar8 <= pbVar22)) goto LAB_001037c7;
            (*ptr_MD5_Update)(local_2098,local_2128,local_2118);
            (*ptr_MD5_Update)(&local_203c,local_2100,local_2110);
            if (local_20f4 == 0) {
              uVar12 = local_2118;
              if (local_2110 <= local_2118) {
                uVar12 = local_2110;
              }
              local_20f4 = memcmp(local_2128,local_2100,uVar12);
              if (local_20f4 == 0) {
                local_20f4 = (uint)(local_2110 < local_2118) - (uint)(local_2118 < local_2110);
              }
            }
            goto LAB_00103718;
          }
          if (pbVar22 < pbVar8) {
            lVar11 = xstrxfrm(local_2128,pbVar22,uVar21);
            uVar12 = lVar11 + 1;
            local_2110 = uVar12;
            if (uVar21 < uVar12) {
              local_2118 = 0;
LAB_00103766:
              if (uVar12 < 0x5555555555555555) {
LAB_00103775:
                uVar12 = uVar12 * 3 >> 1;
              }
              free(local_2108);
              local_2108 = (byte *)xmalloc(uVar12);
              local_2128 = local_2108;
              if (__nptr < pbVar7) {
LAB_00103a81:
                strxfrm((char *)local_2128,(char *)__nptr,local_2118);
                local_2108 = local_2128;
                uVar21 = uVar12;
                if (pbVar8 <= pbVar22) goto LAB_00103aa6;
              }
              else if (pbVar8 <= pbVar22) {
                local_2100 = local_2108 + local_2118;
                goto LAB_001037c7;
              }
              local_2100 = local_2128 + local_2118;
              strxfrm((char *)local_2100,(char *)pbVar22,local_2110);
              local_2108 = local_2128;
              uVar21 = uVar12;
              if (__nptr < pbVar7) goto LAB_0010393d;
            }
            else {
              local_2100 = local_2128;
              local_2118 = 0;
            }
            if (pbVar8 <= pbVar22) goto LAB_001037c7;
LAB_0010394f:
            sVar13 = strlen((char *)pbVar22);
            pbVar22 = pbVar22 + sVar13 + 1;
            goto LAB_0010395c;
          }
          local_2110 = 0;
          local_2118 = 0;
          local_2100 = local_2128;
LAB_001037c7:
          (*ptr_MD5_Update)(local_2098,local_2128,local_2118);
          (*ptr_MD5_Final)(local_20b8,local_2098);
          (*ptr_MD5_Update)(&local_203c,local_2100,local_2110);
          (*ptr_MD5_Final)(local_20a8,&local_203c);
          iVar14 = memcmp(local_20b8,local_20a8,0x10);
          if (iVar14 == 0) goto joined_r0x00103c9b;
        }
        free(local_2108);
        in_ST0 = lVar24;
        in_ST1 = lVar25;
        in_ST2 = lVar26;
        in_ST3 = lVar27;
        in_ST4 = lVar28;
        in_ST5 = lVar29;
        in_ST6 = lVar30;
      }
    }
    else {
      cVar17 = (&blanks)[*__nptr];
      while (cVar17 != '\0') {
        pbVar9 = __nptr + 1;
        __nptr = __nptr + 1;
        cVar17 = (&blanks)[*pbVar9];
      }
      uVar15 = 0;
      uVar21 = 0xc;
      do {
        uVar12 = uVar15 + uVar21 >> 1;
        bVar6 = *(&monthtab)[uVar12 * 2];
        if (bVar6 == 0) {
LAB_00103500:
          iVar14 = *(int *)(&DAT_0010c728 + uVar12 * 0x10);
          goto LAB_0010351c;
        }
        lVar11 = 0;
        while (bVar6 <= (byte)(&fold_toupper)[__nptr[lVar11]]) {
          if (bVar6 < (byte)(&fold_toupper)[__nptr[lVar11]]) {
            uVar15 = uVar12 + 1;
            uVar12 = uVar21;
            break;
          }
          lVar11 = lVar11 + 1;
          bVar6 = (&monthtab)[uVar12 * 2][lVar11];
          if (bVar6 == 0) goto LAB_00103500;
        }
        uVar21 = uVar12;
      } while (uVar15 < uVar12);
      iVar14 = 0;
LAB_0010351c:
      while ((&blanks)[*pbVar22] != '\0') {
        pbVar22 = pbVar22 + 1;
      }
      uVar15 = 0;
      uVar21 = 0xc;
      do {
        uVar12 = uVar15 + uVar21 >> 1;
        bVar6 = *(&monthtab)[uVar12 * 2];
        if (bVar6 == 0) {
LAB_00103590:
          iVar14 = iVar14 - *(int *)(&DAT_0010c728 + uVar12 * 0x10);
          break;
        }
        lVar11 = 0;
        while (bVar6 <= (byte)(&fold_toupper)[pbVar22[lVar11]]) {
          if (bVar6 < (byte)(&fold_toupper)[pbVar22[lVar11]]) {
            uVar15 = uVar12 + 1;
            uVar12 = uVar21;
            break;
          }
          lVar11 = lVar11 + 1;
          bVar6 = (&monthtab)[uVar12 * 2][lVar11];
          if (bVar6 == 0) goto LAB_00103590;
        }
        uVar21 = uVar12;
      } while (uVar15 < uVar12);
    }
    goto LAB_00102d50;
  }
  while (bVar6 = *__nptr, (&blanks)[bVar6] != '\0') {
    __nptr = __nptr + 1;
  }
  bVar3 = *pbVar22;
  cVar17 = (&blanks)[bVar3];
  while (cVar17 != '\0') {
    bVar3 = pbVar22[1];
    pbVar22 = pbVar22 + 1;
    cVar17 = (&blanks)[bVar3];
  }
  pbVar9 = __nptr + (bVar6 == 0x2d);
  bVar16 = *pbVar9;
  pbVar10 = pbVar9 + 1;
  if ((int)(char)bVar16 - 0x30U < 10) {
    iVar14 = 0;
    if ('\0' < (char)bVar16) {
      iVar14 = (int)(char)bVar16;
    }
    pbVar19 = pbVar9;
    if ((char)pbVar9[1] == thousands_sep) goto LAB_00102ea0;
    while( true ) {
      pbVar9 = pbVar10;
      bVar16 = *pbVar9;
      iVar20 = (int)(char)bVar16;
      pbVar10 = pbVar9 + 1;
      if (9 < iVar20 - 0x30U) break;
      while( true ) {
        if ((char)iVar14 < (char)iVar20) {
          iVar14 = iVar20;
        }
        pbVar19 = pbVar9;
        if ((char)pbVar9[1] != thousands_sep) break;
LAB_00102ea0:
        cVar17 = (char)iVar14;
        iVar20 = (int)(char)pbVar19[2];
        if (9 < iVar20 - 0x30U) {
          pbVar9 = pbVar19 + 1;
          goto LAB_00102eb7;
        }
        pbVar9 = pbVar19 + 2;
        pbVar10 = pbVar19 + 3;
      }
    }
  }
  else {
    iVar14 = 0;
  }
  cVar17 = (char)iVar14;
  if (bVar16 == decimal_point) {
    pbVar9 = pbVar10;
    bVar16 = *pbVar10;
    while ((int)(char)bVar16 - 0x30U < 10) {
      pbVar9 = pbVar9 + 1;
      if ((char)iVar14 < (char)bVar16) {
        iVar14 = (int)(char)bVar16;
      }
      cVar17 = (char)iVar14;
      bVar16 = *pbVar9;
    }
  }
LAB_00102eb7:
  iVar14 = 0;
  if ('0' < cVar17) {
    iVar14 = (int)(char)unit_order[*pbVar9];
    if (bVar6 == 0x2d) {
      iVar14 = -(int)(char)unit_order[*pbVar9];
    }
  }
  pbVar9 = pbVar22 + (bVar3 == 0x2d);
  bVar6 = *pbVar9;
  pbVar10 = pbVar9 + 1;
  if ((int)(char)bVar6 - 0x30U < 10) {
    iVar20 = 0;
    if ('\0' < (char)bVar6) {
      iVar20 = (int)(char)bVar6;
    }
    pbVar19 = pbVar9;
    if (thousands_sep == (char)pbVar9[1]) goto LAB_00102f48;
    while( true ) {
      pbVar9 = pbVar10;
      bVar6 = *pbVar9;
      iVar18 = (int)(char)bVar6;
      pbVar10 = pbVar9 + 1;
      if (9 < iVar18 - 0x30U) break;
      while( true ) {
        if ((char)iVar20 < (char)iVar18) {
          iVar20 = iVar18;
        }
        pbVar19 = pbVar9;
        if (thousands_sep != (char)pbVar9[1]) break;
LAB_00102f48:
        cVar17 = (char)iVar20;
        iVar18 = (int)(char)pbVar19[2];
        if (9 < iVar18 - 0x30U) {
          pbVar9 = pbVar19 + 1;
          goto LAB_00102f5f;
        }
        pbVar9 = pbVar19 + 2;
        pbVar10 = pbVar19 + 3;
      }
    }
  }
  else {
    iVar20 = 0;
  }
  cVar17 = (char)iVar20;
  if (decimal_point == bVar6) {
    pbVar9 = pbVar10;
    bVar6 = *pbVar10;
    while ((int)(char)bVar6 - 0x30U < 10) {
      pbVar9 = pbVar9 + 1;
      if ((char)iVar20 < (char)bVar6) {
        iVar20 = (int)(char)bVar6;
      }
      cVar17 = (char)iVar20;
      bVar6 = *pbVar9;
    }
  }
LAB_00102f5f:
  if ('0' < cVar17) {
    iVar20 = -(int)(char)unit_order[*pbVar9];
    if (bVar3 == 0x2d) {
      iVar20 = (int)(char)unit_order[*pbVar9];
    }
    iVar14 = iVar14 + iVar20;
  }
  if (iVar14 == 0) goto LAB_00102d10;
  *pbVar7 = bVar1;
  *pbVar8 = bVar2;
  free(local_2148);
  goto LAB_00102fb0;
LAB_00104030:
  iVar14 = (uint)(pbVar9 < pbVar7) - (uint)(pbVar10 < pbVar8);
  goto LAB_00102d69;
LAB_00103d28:
  iVar14 = (uint)(pbVar9 < pbVar7) - (uint)(pbVar10 < pbVar8);
LAB_00102d69:
  if (iVar14 != 0) {
LAB_00102fb0:
    if (*(char *)((long)plVar23 + 0x37) != '\0') {
      iVar14 = -(uint)(0 < iVar14) - (iVar14 >> 0x1f);
    }
LAB_00102fbb:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return iVar14;
  }
  plVar23 = (long *)plVar23[8];
  if (plVar23 == (long *)0x0) goto LAB_00102fbb;
  pbVar9 = (byte *)*param_1;
  if (plVar23[2] == -1) {
    pbVar7 = pbVar9 + param_1[1] + -1;
    pbVar10 = (byte *)*param_2;
    pbVar8 = pbVar10 + param_2[1] + -1;
  }
  else {
    pbVar7 = (byte *)limfield_isra_0(pbVar9,param_1[1],plVar23);
    pbVar10 = (byte *)*param_2;
    pbVar8 = (byte *)limfield_isra_0(pbVar10,param_2[1],plVar23);
  }
  if (*plVar23 == -1) {
    if ((char)plVar23[6] != '\0') {
      if (pbVar9 < pbVar7) {
        do {
          if ((&blanks)[*pbVar9] == '\0') break;
          pbVar9 = pbVar9 + 1;
        } while (pbVar7 != pbVar9);
      }
      if (pbVar10 < pbVar8) {
        do {
          if ((&blanks)[*pbVar10] == '\0') break;
          pbVar10 = pbVar10 + 1;
        } while (pbVar8 != pbVar10);
      }
    }
  }
  else {
    pbVar9 = (byte *)begfield_isra_0(pbVar9,param_1[1],plVar23);
    pbVar10 = (byte *)begfield_isra_0(pbVar10,param_2[1],plVar23);
  }
  goto LAB_00102c20;
}



ulong compare(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (keylist != 0) {
    uVar2 = keycompare();
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    if (unique != '\0') {
      return uVar2;
    }
    if (stable != '\0') {
      return uVar2;
    }
  }
  uVar2 = param_2[1] - 1;
  uVar4 = param_1[1] - 1;
  if (uVar4 == 0) {
    uVar3 = (ulong)-(uint)(uVar2 != 0);
  }
  else {
    uVar3 = 1;
    if (uVar2 != 0) {
      if (hard_LC_COLLATE == '\0') {
        uVar3 = uVar2;
        if (uVar4 <= uVar2) {
          uVar3 = uVar4;
        }
        uVar1 = memcmp((void *)*param_1,(void *)*param_2,uVar3);
        uVar3 = (ulong)uVar1;
        if (uVar1 == 0) {
          uVar3 = (ulong)((uint)(uVar2 < uVar4) - (uint)(uVar4 < uVar2));
        }
      }
      else {
        uVar3 = xmemcoll0((void *)*param_1,param_1[1],(void *)*param_2);
      }
    }
  }
  if (reverse != '\0') {
    uVar3 = (ulong)(((uint)(uVar3 >> 0x1f) & 1) - (uint)(0 < (int)uVar3));
  }
  return uVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void mergefps(long param_1,ulong param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
             void *param_6)

{
  size_t sVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  char cVar14;
  int iVar15;
  void *__ptr;
  void *__ptr_00;
  void *__ptr_01;
  ulong *__ptr_02;
  void *pvVar16;
  ulong *puVar17;
  ulong *puVar18;
  long *plVar19;
  long lVar20;
  undefined8 *puVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  long in_FS_OFFSET;
  long *local_d8;
  void **local_a0;
  ulong local_98;
  ulong local_78;
  void *local_68;
  size_t local_60;
  long local_58;
  long lStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  __ptr = (void *)xnmalloc(param_3,0x38);
  __ptr_00 = (void *)xnmalloc(param_3,8);
  __ptr_01 = (void *)xnmalloc(param_3,8);
  __ptr_02 = (ulong *)xnmalloc(param_3,8);
  lVar13 = keylist;
  local_68 = (void *)0x0;
  if (param_3 == 0) {
LAB_0010447c:
    xfclose(param_4,param_5);
    free(param_6);
    free(__ptr);
    free(__ptr_02);
    free(__ptr_01);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      free(__ptr_00);
      return;
    }
LAB_00104bd5:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  lVar22 = 0;
  uVar24 = 0;
  local_78 = param_2;
  while( true ) {
    while( true ) {
      uVar25 = sort_size / param_3;
      if (sort_size / param_3 < merge_buffer_size) {
        uVar25 = merge_buffer_size;
      }
      plVar19 = (long *)((long)__ptr + (lVar22 - uVar24) * 8);
      while( true ) {
        sVar1 = (uVar25 & 0xffffffffffffffe0) + 0x20;
        pvVar16 = malloc(sVar1);
        *plVar19 = (long)pvVar16;
        if (pvVar16 != (void *)0x0) break;
        uVar25 = sVar1 >> 1;
        if (sVar1 < 0x43) {
          xalloc_die();
          goto LAB_00104bd5;
        }
      }
      plVar19[3] = sVar1;
      lVar20 = _UNK_0010cc88;
      lVar4 = __LC38;
      *(undefined1 *)(plVar19 + 6) = 0;
      puVar21 = (undefined8 *)(param_1 + uVar24 * 0x10);
      uVar3 = *puVar21;
      plVar19[4] = lVar4;
      plVar19[5] = lVar20;
      puVar2 = (undefined8 *)((long)param_6 + lVar22);
      *(undefined1 (*) [16])(plVar19 + 1) = (undefined1  [16])0x0;
      cVar14 = fillbuf(plVar19,*puVar2,uVar3);
      if (cVar14 == '\0') break;
      lVar4 = plVar19[3];
      uVar24 = uVar24 + 1;
      lVar20 = *plVar19;
      *(long *)((long)__ptr_00 + lVar22) = lVar4 + lVar20 + -0x20;
      *(long *)((long)__ptr_01 + lVar22) = lVar4 + lVar20 + plVar19[2] * -0x20;
      if (param_3 <= uVar24) goto LAB_001044ed;
      lVar22 = uVar24 * 8;
    }
    xfclose(*puVar2,*puVar21);
    if (uVar24 < local_78) {
      local_78 = local_78 - 1;
      zaptemp(*puVar21);
    }
    free((void *)*plVar19);
    uVar25 = param_3 - 1;
    if (uVar25 <= uVar24) break;
    lVar4 = param_3 * 8 + -8;
    if ((puVar2 < (undefined8 *)(param_3 * 0x10 + param_1)) &&
       (lVar20 = lVar22, puVar21 < (undefined8 *)((long)param_6 + lVar4))) {
      do {
        puVar2 = (undefined8 *)(param_1 + 0x10 + lVar20 * 2);
        uVar7 = puVar2[1];
        uVar3 = *(undefined8 *)((long)param_6 + lVar20 + 8);
        puVar21 = (undefined8 *)(param_1 + lVar20 * 2);
        *puVar21 = *puVar2;
        puVar21[1] = uVar7;
        *(undefined8 *)((long)param_6 + lVar20) = uVar3;
        lVar20 = lVar20 + 8;
        param_3 = uVar25;
      } while (lVar20 != lVar4);
    }
    else {
      memmove(puVar21,(void *)(param_1 + 0x10 + uVar24 * 0x10),(uVar25 - uVar24) * 0x10);
      memmove(puVar2,(void *)((long)param_6 + lVar22 + 8),(uVar25 - uVar24) * 8);
      param_3 = uVar25;
    }
  }
  param_3 = uVar25;
  if (uVar25 == 0) goto LAB_0010447c;
LAB_001044ed:
  lVar4 = _UNK_0010cc98;
  lVar22 = __LC39;
  if (param_3 == 1) {
    *__ptr_02 = 0;
  }
  else {
    puVar18 = __ptr_02;
    uVar24 = __LC37;
    uVar25 = _UNK_0010cc78;
    do {
      puVar17 = puVar18 + 2;
      *puVar18 = uVar24;
      puVar18[1] = uVar25;
      puVar18 = puVar17;
      uVar24 = uVar24 + lVar22;
      uVar25 = uVar25 + lVar4;
    } while (__ptr_02 + (param_3 & 0xfffffffffffffffe) != puVar17);
    if ((param_3 & 1) != 0) {
      __ptr_02[param_3 & 0xfffffffffffffffe] = param_3 & 0xfffffffffffffffe;
    }
    uVar24 = 1;
    do {
      while( true ) {
        puVar18 = __ptr_02 + uVar24;
        uVar25 = *puVar18;
        uVar23 = __ptr_02[uVar24 - 1];
        iVar15 = compare(*(undefined8 *)((long)__ptr_00 + uVar23 * 8),
                         *(undefined8 *)((long)__ptr_00 + uVar25 * 8));
        if (iVar15 < 1) break;
        __ptr_02[uVar24 - 1] = uVar25;
        uVar24 = 1;
        *puVar18 = uVar23;
      }
      uVar24 = uVar24 + 1;
    } while (uVar24 < param_3);
  }
  local_98 = 0;
  local_a0 = (void **)0x0;
LAB_001045e0:
  while( true ) {
    uVar24 = *__ptr_02;
    lVar22 = uVar24 * 8;
    puVar18 = (ulong *)((long)__ptr_00 + lVar22);
    plVar19 = (long *)*puVar18;
    if (unique == '\0') break;
    if (local_a0 != (void **)0x0) {
      iVar15 = compare(local_a0,plVar19);
      if (iVar15 == 0) goto LAB_00104628;
      write_line(&local_68,param_4,param_5);
    }
    uVar25 = plVar19[1];
    if (local_98 < uVar25) {
      do {
        uVar23 = uVar25;
        if (local_98 == 0) break;
        local_98 = local_98 * 2;
        uVar23 = local_98;
      } while (local_98 < uVar25);
      free(local_68);
      local_68 = (void *)xmalloc(uVar23);
      uVar25 = plVar19[1];
      local_98 = uVar23;
    }
    local_60 = uVar25;
    pvVar16 = memcpy(local_68,(void *)*plVar19,uVar25);
    if (lVar13 != 0) {
      local_58 = (long)pvVar16 + (plVar19[2] - *plVar19);
      lStack_50 = (long)pvVar16 + (plVar19[3] - *plVar19);
    }
    local_a0 = &local_68;
    if (plVar19 <= *(long **)((long)__ptr_01 + lVar22)) goto LAB_0010463a;
LAB_0010485e:
    plVar19 = plVar19 + -4;
    *puVar18 = (ulong)plVar19;
LAB_001046b6:
    uVar26 = 1;
    uVar25 = 1;
    uVar23 = param_3;
    if (param_3 != 1) {
      do {
        uVar6 = __ptr_02[uVar26];
        puVar21 = *(undefined8 **)((long)__ptr_00 + uVar6 * 8);
        if (keylist == 0) {
LAB_00104743:
          iVar15 = compare_part_0_isra_0(*plVar19,plVar19[1],*puVar21,puVar21[1]);
          if (iVar15 < 0) goto LAB_00104768;
          if (iVar15 == 0) goto LAB_001047b0;
LAB_001046e6:
          uVar25 = uVar26 + 1;
          uVar6 = uVar25 + uVar23;
          if (uVar23 <= uVar25) goto LAB_00104774;
        }
        else {
          iVar15 = keycompare(plVar19,puVar21);
          if (iVar15 == 0) {
            if ((unique == '\0') && (stable == '\0')) goto LAB_00104743;
LAB_001047b0:
            if (uVar6 <= uVar24) goto LAB_001046e6;
          }
          else if (-1 < iVar15) goto LAB_001046e6;
LAB_00104768:
          uVar6 = uVar25 + uVar26;
          uVar23 = uVar26;
          if (uVar26 <= uVar25) goto LAB_00104774;
        }
        uVar26 = uVar6 >> 1;
        plVar19 = (long *)*puVar18;
      } while( true );
    }
  }
  write_line(plVar19,param_4,param_5);
LAB_00104628:
  if (*(long **)((long)__ptr_01 + lVar22) < plVar19) goto LAB_0010485e;
LAB_0010463a:
  puVar21 = (undefined8 *)(uVar24 * 0x10 + param_1);
  local_d8 = (long *)((long)__ptr + uVar24 * 0x38);
  cVar14 = fillbuf(local_d8,*(undefined8 *)((long)param_6 + lVar22),*puVar21);
  if (cVar14 != '\0') {
    lVar4 = local_d8[3];
    lVar20 = *local_d8;
    lVar5 = local_d8[2];
    plVar19 = (long *)((lVar4 + lVar20) - 0x20);
    *puVar18 = (ulong)plVar19;
    *(long *)((long)__ptr_01 + lVar22) = lVar4 + lVar20 + lVar5 * -0x20;
    goto LAB_001046b6;
  }
  puVar18 = __ptr_02 + 1;
  if (param_3 == 1) {
    xfclose(*(undefined8 *)((long)param_6 + lVar22),*puVar21);
    if (local_78 <= uVar24) {
      free((void *)*local_d8);
LAB_00104447:
      if ((unique != '\0') && (local_a0 != (void **)0x0)) {
        write_line(&local_68,param_4,param_5);
        free(local_68);
      }
      goto LAB_0010447c;
    }
    uVar25 = 0;
LAB_00104a97:
    local_78 = local_78 - 1;
    zaptemp(*puVar21);
  }
  else {
    do {
      if (uVar24 < *puVar18) {
        *puVar18 = *puVar18 - 1;
        uVar24 = *__ptr_02;
      }
      puVar18 = puVar18 + 1;
    } while (__ptr_02 + param_3 != puVar18);
    lVar22 = uVar24 * 8;
    uVar25 = param_3 - 1;
    puVar21 = (undefined8 *)(uVar24 * 0x10 + param_1);
    local_d8 = (long *)((long)__ptr + uVar24 * 0x38);
    xfclose(*(undefined8 *)((long)param_6 + uVar24 * 8),*puVar21);
    if (uVar24 < local_78) goto LAB_00104a97;
  }
  free((void *)*local_d8);
  if (uVar24 < uVar25) {
    pvVar16 = (void *)(param_1 + uVar24 * 0x10);
    if (((void *)((long)param_6 + lVar22) < (void *)(param_1 + -0x10 + param_3 * 0x10)) &&
       (pvVar16 < (void *)((long)param_6 + param_3 * 8))) {
      puVar21 = (undefined8 *)((long)__ptr + (lVar22 - uVar24) * 8);
      do {
        puVar2 = (undefined8 *)(param_1 + 0x10 + lVar22 * 2);
        uVar7 = *puVar2;
        uVar8 = puVar2[1];
        uVar9 = puVar21[7];
        uVar10 = puVar21[8];
        uVar11 = puVar21[9];
        uVar12 = puVar21[10];
        *(undefined8 *)((long)param_6 + lVar22) = *(undefined8 *)((long)param_6 + lVar22 + 8);
        uVar3 = puVar21[0xd];
        puVar2 = (undefined8 *)(param_1 + lVar22 * 2);
        *puVar2 = uVar7;
        puVar2[1] = uVar8;
        uVar7 = puVar21[0xb];
        uVar8 = puVar21[0xc];
        puVar21[6] = uVar3;
        uVar3 = *(undefined8 *)((long)__ptr_00 + lVar22 + 8);
        *puVar21 = uVar9;
        puVar21[1] = uVar10;
        *(undefined8 *)((long)__ptr_00 + lVar22) = uVar3;
        uVar3 = *(undefined8 *)((long)__ptr_01 + lVar22 + 8);
        puVar21[2] = uVar11;
        puVar21[3] = uVar12;
        *(undefined8 *)((long)__ptr_01 + lVar22) = uVar3;
        lVar22 = lVar22 + 8;
        puVar21[4] = uVar7;
        puVar21[5] = uVar8;
        puVar21 = puVar21 + 7;
      } while (lVar22 != param_3 * 8 + -8);
    }
    else {
      lVar4 = lVar22 + 8;
      lVar20 = (param_3 - uVar24) + -1;
      sVar1 = lVar20 * 8;
      memmove((void *)((long)param_6 + lVar22),(void *)((long)param_6 + lVar4),sVar1);
      memmove(pvVar16,(void *)(param_1 + 0x10 + uVar24 * 0x10),lVar20 * 0x10);
      lVar20 = (lVar22 - uVar24) * 8;
      memmove((void *)(lVar20 + (long)__ptr),(void *)((long)__ptr + lVar20 + 0x38),
              (param_3 - uVar24) * 0x38 - 0x38);
      memmove((void *)((long)__ptr_00 + lVar22),(void *)((long)__ptr_00 + lVar4),sVar1);
      memmove((void *)((long)__ptr_01 + lVar22),(void *)((long)__ptr_01 + lVar4),sVar1);
    }
  }
  else if (uVar25 == 0) goto LAB_00104447;
  memmove(__ptr_02,__ptr_02 + 1,uVar25 * 8);
  param_3 = uVar25;
  goto LAB_001045e0;
LAB_00104774:
  lVar22 = uVar25 - 1;
  puVar18 = __ptr_02;
  if (lVar22 != 0) {
    memmove(__ptr_02,__ptr_02 + 1,lVar22 * 8);
    puVar18 = __ptr_02 + lVar22;
  }
  *puVar18 = uVar24;
  goto LAB_001045e0;
}



void merge(long *param_1,stat *param_2,stat *param_3,char *param_4)

{
  ulong uVar1;
  long *plVar2;
  byte *__s2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  FILE *pFVar7;
  stat *psVar8;
  long lVar9;
  stat *psVar10;
  undefined8 uVar11;
  int *piVar12;
  __ino_t _Var13;
  long lVar14;
  stat *psVar15;
  __dev_t _Var16;
  long *plVar17;
  ulong uVar18;
  long in_FS_OFFSET;
  bool bVar19;
  stat *local_128;
  stat *local_120;
  stat *local_118;
  int local_e8;
  undefined4 uStack_e4;
  long local_e0;
  stat local_d8;
  long local_40;
  
  psVar8 = (stat *)(ulong)nmerge;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_128 = param_3;
  local_120 = param_2;
  if (psVar8 < param_3) {
    do {
      local_120 = param_2;
      if (local_128 < psVar8) break;
      lVar14 = 0;
      uVar1 = 0;
      do {
        uVar18 = uVar1;
        lVar6 = maybe_create_temp_constprop_0(&local_e8);
        psVar15 = (stat *)(ulong)nmerge;
        uVar11 = CONCAT44(uStack_e4,local_e8);
        psVar8 = param_2;
        if (psVar15 <= param_2) {
          psVar8 = psVar15;
        }
        plVar17 = param_1 + lVar14 * 2;
        local_118 = (stat *)open_input_files(plVar17,psVar15,&local_e0);
        if ((local_118 < psVar15) && (local_118 < (stat *)0x2)) {
          _Var16 = plVar17[(long)local_118 * 2];
          goto LAB_00105411;
        }
        mergefps(plVar17,psVar8,local_118,uVar11,lVar6 + 0xd,local_e0);
        uVar1 = uVar18 + 1;
        psVar8 = local_118;
        if (param_2 <= local_118) {
          psVar8 = param_2;
        }
        lVar14 = (long)local_118->__unused + lVar14 + -0x78;
        psVar15 = (stat *)((long)local_128 - lVar14);
        param_2 = (stat *)((long)param_2 - (long)psVar8);
        param_1[uVar18 * 2 + 1] = lVar6;
        psVar8 = (stat *)(ulong)nmerge;
        param_1[uVar18 * 2] = lVar6 + 0xd;
      } while (psVar8 <= psVar15);
      plVar17 = param_1 + lVar14 * 2;
      if ((stat *)((long)psVar8 - uVar1 % (ulong)psVar8) < psVar15) {
        psVar15 = (stat *)((long)psVar15 + ((uVar1 % (ulong)psVar8 + 1) - (long)psVar8));
        lVar6 = maybe_create_temp_constprop_0(&local_e8);
        uVar11 = CONCAT44(uStack_e4,local_e8);
        local_118 = param_2;
        if (psVar15 <= param_2) {
          local_118 = psVar15;
        }
        psVar10 = (stat *)open_input_files(plVar17,psVar15,&local_e0);
        if ((psVar10 < psVar15) && (psVar10 < (stat *)0x2)) {
          _Var16 = plVar17[(long)psVar10 * 2];
          goto LAB_00105411;
        }
        mergefps(plVar17,local_118,psVar10,uVar11,lVar6 + 0xd,local_e0);
        param_1[uVar18 * 2 + 2] = lVar6 + 0xd;
        psVar8 = (stat *)(ulong)nmerge;
        plVar2 = param_1 + 4;
        (param_1 + uVar18 * 2 + 2)[1] = lVar6;
        lVar14 = lVar14 + (long)psVar10;
        psVar15 = (stat *)((long)local_128 - lVar14);
        if (param_2 <= psVar10) {
          psVar10 = param_2;
        }
        plVar17 = param_1 + lVar14 * 2;
        lVar14 = (uVar18 + 2) - lVar14;
        param_2 = (stat *)((long)param_2 + ((uVar18 + 2) - (long)psVar10));
      }
      else {
        param_2 = (stat *)((long)param_2->__unused + (uVar18 - 0x77));
        plVar2 = param_1 + 2;
        lVar14 = uVar1 - lVar14;
      }
      local_128 = (stat *)((long)local_128->__unused + lVar14 + -0x78);
      memmove(plVar2 + uVar18 * 2,plVar17,(long)psVar15 << 4);
      local_120 = param_2;
    } while (psVar8 < local_128);
  }
  if (local_120 < local_128) {
    if (param_4 == (char *)0x0) {
      _Var13 = 0;
      psVar8 = (stat *)(param_1 + (long)local_120 * 2);
      local_118 = (stat *)(param_1 + (long)local_128 * 2);
      goto LAB_001052e0;
    }
    _Var13 = 0;
    psVar8 = (stat *)(param_1 + (long)local_120 * 2);
    local_118 = &local_d8;
    do {
      while( true ) {
        __s2 = (byte *)psVar8->st_dev;
        uVar3 = *__s2 - 0x2d;
        if (uVar3 == 0) {
          uVar3 = (uint)__s2[1];
        }
        iVar4 = strcmp(param_4,(char *)__s2);
        if ((iVar4 != 0) || (uVar3 == 0)) break;
LAB_00104de1:
        if (_Var13 == 0) {
          _Var13 = maybe_create_temp_constprop_0(&local_e8);
          uVar11 = CONCAT44(uStack_e4,local_e8);
          _Var16 = _Var13 + 0xd;
          lVar14 = open_input_files(psVar8,1,&local_e0);
          if (lVar14 == 0) goto LAB_0010542f;
          mergefps(psVar8,0,lVar14,uVar11,_Var16,local_e0);
        }
        else {
          _Var16 = _Var13 + 0xd;
        }
        psVar8->st_dev = _Var16;
        psVar8->st_ino = _Var13;
LAB_00104df6:
        psVar8 = (stat *)&psVar8->st_nlink;
        if (psVar8 == (stat *)(param_1 + (long)local_128 * 2)) goto LAB_00104e63;
      }
      if (outstat_errno_4 == 0) {
        iVar4 = fstat(1,(stat *)&outstat_3);
        if (iVar4 != 0) {
          piVar12 = __errno_location();
          outstat_errno_4 = *piVar12;
          goto LAB_00104e37;
        }
        outstat_errno_4 = -1;
      }
      else {
LAB_00104e37:
        if (-1 < outstat_errno_4) break;
      }
      if (uVar3 == 0) {
        iVar4 = fstat(0,local_118);
        if (iVar4 == 0) goto LAB_00104dc4;
        goto LAB_00104df6;
      }
      iVar4 = stat((char *)psVar8->st_dev,local_118);
      if (iVar4 == 0) {
LAB_00104dc4:
        if (CONCAT44(local_d8.st_dev._4_4_,(int)local_d8.st_dev) == outstat_3 &&
            local_d8.st_ino == DAT_00106d28) goto LAB_00104de1;
        goto LAB_00104df6;
      }
      psVar8 = (stat *)&psVar8->st_nlink;
    } while (psVar8 != (stat *)(param_1 + (long)local_128 * 2));
  }
LAB_00104e63:
  psVar15 = local_120;
  do {
    psVar8 = (stat *)open_input_files(param_1,local_128,&local_e0);
    if (local_128 == psVar8) {
      lVar14 = stream_open_constprop_0(param_4);
      if (lVar14 != 0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          mergefps(param_1,psVar15,local_128,lVar14,param_4,local_e0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      piVar12 = __errno_location();
      if ((*piVar12 != 0x18) || (local_128 < (stat *)0x3)) {
        uVar11 = dcgettext(0,"open failed",5);
                    /* WARNING: Subroutine does not return */
        sort_die(uVar11,param_4);
      }
    }
    else if (psVar8 < (stat *)0x3) {
      _Var16 = param_1[(long)psVar8 * 2];
      goto LAB_00105411;
    }
    lVar14 = local_e0;
    psVar8 = (stat *)((long)psVar8[-1].__unused + 0x17);
    psVar10 = (stat *)(param_1 + (long)psVar8 * 2);
    while( true ) {
      xfclose(*(undefined8 *)(lVar14 + (long)psVar8 * 8),psVar10->st_dev);
      lVar6 = create_temp_file(&local_e8,(stat *)0x2 < psVar8);
      iVar4 = local_e8;
      if (lVar6 != 0) break;
LAB_00104ff8:
      psVar10 = (stat *)(psVar10[-1].__unused + 1);
      psVar8 = (stat *)((long)psVar8[-1].__unused + 0x17);
    }
    bVar19 = compress_program != (char *)0x0;
    *(undefined1 *)(lVar6 + 0xc) = 0;
    if (bVar19) {
      local_120 = (stat *)CONCAT44(local_120._4_4_,local_e8);
      iVar5 = pipe_fork(&local_d8);
      *(int *)(lVar6 + 8) = iVar5;
      if (iVar5 < 1) {
        if (iVar5 == 0) break;
      }
      else {
        close(iVar4);
        close((int)local_d8.st_dev);
        iVar4 = local_d8.st_dev._4_4_;
        local_e8 = local_d8.st_dev._4_4_;
        if (proctab == 0) {
          local_120 = (stat *)CONCAT44(local_120._4_4_,local_d8.st_dev._4_4_);
          proctab = hash_initialize(0x2f,0,0x100000,proctab_comparator,0);
          if (proctab != 0) goto LAB_00104fcf;
LAB_00104fee:
          xalloc_die();
          goto LAB_00104ff8;
        }
LAB_00104fcf:
        lVar9 = proctab;
        *(undefined1 *)(lVar6 + 0xc) = 1;
        local_120 = (stat *)CONCAT44(local_120._4_4_,iVar4);
        lVar9 = hash_insert(lVar9,lVar6);
        if (lVar9 == 0) goto LAB_00104fee;
      }
    }
    pFVar7 = fdopen(iVar4,"w");
    if (pFVar7 == (FILE *)0x0) {
      uVar11 = dcgettext(0,"couldn\'t create temporary file",5,0);
                    /* WARNING: Subroutine does not return */
      sort_die(uVar11,lVar6 + 0xd);
    }
    local_118 = (stat *)(lVar6 + 0xd);
    local_120 = psVar8;
    if (psVar15 <= psVar8) {
      local_120 = psVar15;
    }
    mergefps(param_1,local_120,psVar8,pFVar7,local_118,lVar14);
    param_1[1] = lVar6;
    *param_1 = (long)local_118;
    memmove(param_1 + 2,psVar10,((long)local_128 - (long)psVar8) * 0x10);
    local_128 = (stat *)(((long)local_128 - (long)psVar8) + 1);
    psVar15 = (stat *)((long)psVar15 + (1 - (long)local_120));
  } while( true );
  local_128 = (stat *)CONCAT44(local_128._4_4_,iVar4);
  close(local_d8.st_dev._4_4_);
  if (iVar4 != 1) {
    dup2(iVar4,1);
    close(iVar4);
  }
  iVar4 = (int)local_d8.st_dev;
  if ((int)local_d8.st_dev != 0) {
    dup2((int)local_d8.st_dev,0);
    close(iVar4);
  }
  execlp(compress_program,compress_program,0);
  piVar12 = __errno_location();
  async_safe_die(*piVar12,"couldn\'t execute compress program");
  while( true ) {
    _Var13 = maybe_create_temp_constprop_0(&local_e8);
    uVar11 = CONCAT44(uStack_e4,local_e8);
    _Var16 = _Var13 + 0xd;
    lVar14 = open_input_files(psVar10,1,&local_e0);
    if (lVar14 == 0) break;
    mergefps(psVar10,0,lVar14,uVar11,_Var16,local_e0);
    psVar8 = psVar10;
    do {
      psVar8->st_dev = _Var16;
      psVar8->st_ino = _Var13;
      do {
        psVar8 = (stat *)&psVar8->st_nlink;
        if (local_118 == psVar8) goto LAB_00104e63;
LAB_001052e0:
        uVar3 = *(byte *)psVar8->st_dev - 0x2d;
        if (uVar3 == 0) {
          uVar3 = (uint)((byte *)psVar8->st_dev)[1];
        }
        if (outstat_errno_4 == 0) {
          iVar4 = fstat(1,(stat *)&outstat_3);
          if (iVar4 != 0) {
            piVar12 = __errno_location();
            outstat_errno_4 = *piVar12;
            goto LAB_001052ff;
          }
          outstat_errno_4 = -1;
        }
        else {
LAB_001052ff:
          if (-1 < outstat_errno_4) goto LAB_00104e63;
        }
        if (uVar3 == 0) {
          iVar4 = fstat(0,&local_d8);
        }
        else {
          iVar4 = stat((char *)psVar8->st_dev,&local_d8);
        }
      } while ((iVar4 != 0) ||
              (DAT_00106d28 != local_d8.st_ino ||
               outstat_3 != CONCAT44(local_d8.st_dev._4_4_,(int)local_d8.st_dev)));
      _Var16 = _Var13 + 0xd;
      psVar10 = psVar8;
    } while (_Var13 != 0);
  }
LAB_0010542f:
  _Var16 = psVar8->st_dev;
LAB_00105411:
  uVar11 = dcgettext(0,"open failed",5);
                    /* WARNING: Subroutine does not return */
  sort_die(uVar11,_Var16);
}



void sequential_sort(undefined8 *param_1,ulong param_2,undefined8 *param_3,char param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  uint uVar11;
  int iVar12;
  ulong __n;
  undefined8 *puVar13;
  long lVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  ulong local_50;
  undefined8 *puVar14;
  
  if (param_2 == 2) {
    iVar12 = compare(param_1 + -4,param_1 + -8);
    if (param_4 == '\0') {
      if (0 < iVar12) {
        uVar2 = param_1[-4];
        uVar3 = param_1[-3];
        uVar4 = param_1[-2];
        uVar5 = param_1[-1];
        uVar6 = param_1[-8];
        uVar7 = param_1[-7];
        uVar8 = param_1[-6];
        uVar9 = param_1[-5];
        param_3[-4] = uVar2;
        param_3[-3] = uVar3;
        param_3[-2] = uVar4;
        param_3[-1] = uVar5;
        param_1[-4] = uVar6;
        param_1[-3] = uVar7;
        param_1[-2] = uVar8;
        param_1[-1] = uVar9;
        param_1[-8] = uVar2;
        param_1[-7] = uVar3;
        param_1[-6] = uVar4;
        param_1[-5] = uVar5;
      }
    }
    else {
      puVar18 = param_1 + (long)(int)((0 < iVar12) - 2) * 4;
      param_1 = param_1 + (long)(int)~(uint)(0 < iVar12) * 4;
      uVar2 = param_1[1];
      uVar3 = param_1[2];
      uVar4 = param_1[3];
      param_3[-4] = *param_1;
      param_3[-3] = uVar2;
      uVar2 = *puVar18;
      uVar5 = puVar18[1];
      param_3[-2] = uVar3;
      param_3[-1] = uVar4;
      uVar3 = puVar18[2];
      uVar4 = puVar18[3];
      param_3[-8] = uVar2;
      param_3[-7] = uVar5;
      param_3[-6] = uVar3;
      param_3[-5] = uVar4;
    }
    return;
  }
  local_50 = param_2 >> 1;
  lVar15 = param_2 - local_50;
  puVar18 = param_1 + local_50 * -4;
  if (param_4 == '\0') {
    sequential_sort(puVar18,lVar15,param_3,0);
    puVar13 = param_1;
    if (param_2 < 4) {
      uVar2 = param_1[-3];
      uVar3 = param_1[-2];
      uVar4 = param_1[-1];
      param_3[-4] = param_1[-4];
      param_3[-3] = uVar2;
      param_3[-2] = uVar3;
      param_3[-1] = uVar4;
      param_1 = param_3;
    }
    else {
      sequential_sort(param_1,local_50,param_3,1);
      param_1 = param_3;
    }
  }
  else {
    puVar10 = param_3 + local_50 * -4;
    sequential_sort(puVar18,lVar15,puVar10,1);
    puVar13 = param_3;
    puVar18 = puVar10;
    if (3 < param_2) {
      sequential_sort(param_1,local_50,param_3,0);
    }
  }
  puVar10 = param_1 + -4;
  puVar19 = puVar18 + -4;
  do {
    while (puVar17 = puVar10, puVar14 = puVar13 + -4, keylist != 0) {
      uVar11 = keycompare(puVar17,puVar19);
      if (uVar11 != 0) goto LAB_001054e5;
      if ((unique == '\0') && (stable == '\0')) break;
LAB_00105580:
      local_50 = local_50 - 1;
      uVar2 = param_1[-3];
      uVar3 = param_1[-2];
      uVar4 = param_1[-1];
      *puVar14 = param_1[-4];
      puVar13[-3] = uVar2;
      puVar13[-2] = uVar3;
      puVar13[-1] = uVar4;
      if (local_50 == 0) {
        return;
      }
      puVar10 = puVar17 + -4;
      param_1 = puVar17;
      puVar13 = puVar14;
    }
    uVar1 = puVar18[-3] - 1;
    uVar16 = param_1[-3] - 1;
    if (uVar16 == 0) {
      if (reverse == '\0') goto LAB_00105580;
      uVar11 = (uint)(uVar1 != 0);
LAB_001054e5:
      if ((int)uVar11 < 1) goto LAB_00105580;
    }
    else {
      if (uVar1 != 0) {
        if (hard_LC_COLLATE == '\0') {
          __n = uVar1;
          if (uVar16 <= uVar1) {
            __n = uVar16;
          }
          uVar11 = memcmp((void *)param_1[-4],(void *)puVar18[-4],__n);
          if (uVar11 == 0) {
            uVar11 = (uint)(uVar1 < uVar16) - (uint)(uVar16 < uVar1);
          }
        }
        else {
          uVar11 = xmemcoll0((void *)param_1[-4],param_1[-3],(void *)puVar18[-4],puVar18[-3]);
        }
        if (reverse != '\0') {
          uVar11 = -(uint)(0 < (int)uVar11) - ((int)uVar11 >> 0x1f);
        }
        goto LAB_001054e5;
      }
      if (reverse != '\0') goto LAB_00105580;
    }
    uVar2 = puVar18[-3];
    *puVar14 = puVar18[-4];
    puVar13[-3] = uVar2;
    uVar2 = puVar18[-1];
    puVar13[-2] = puVar18[-2];
    puVar13[-1] = uVar2;
    lVar15 = lVar15 + -1;
    if (lVar15 == 0) {
      memmove(puVar14 + (1 - local_50) * 4 + -4,param_1 + (1 - local_50) * 4 + -4,local_50 << 5);
      return;
    }
    puVar10 = puVar17;
    puVar18 = puVar19;
    puVar19 = puVar19 + -4;
    puVar13 = puVar14;
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void merge_loop(undefined8 *param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  pthread_cond_t *__cond;
  pthread_mutex_t *__mutex;
  pthread_mutex_t *__mutex_00;
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long lVar18;
  char cVar19;
  bool bVar20;
  long local_78;
  
  __cond = (pthread_cond_t *)(param_1 + 6);
  __mutex = (pthread_mutex_t *)(param_1 + 1);
LAB_001057d8:
  pthread_mutex_lock(__mutex);
  while (plVar5 = (long *)heap_remove_top(*param_1), plVar5 == (long *)0x0) {
    pthread_cond_wait(__cond,__mutex);
  }
  pthread_mutex_unlock(__mutex);
  __mutex_00 = (pthread_mutex_t *)(plVar5 + 0xb);
  pthread_mutex_lock(__mutex_00);
  iVar4 = (int)plVar5[10];
  *(undefined1 *)((long)plVar5 + 0x54) = 0;
  if (iVar4 == 0) {
    pthread_mutex_unlock(__mutex_00);
    pthread_mutex_lock(__mutex);
    heap_insert(*param_1,plVar5);
    *(undefined1 *)((long)plVar5 + 0x54) = 1;
    pthread_cond_signal(__cond);
    pthread_mutex_unlock(__mutex);
    return;
  }
  puVar1 = (undefined8 *)*plVar5;
  puVar17 = (undefined8 *)plVar5[1];
  puVar15 = (undefined8 *)plVar5[2];
  lVar6 = (param_2 >> ((char)iVar4 * '\x02' + 2U & 0x3f)) + 1;
  puVar11 = puVar1;
  puVar13 = puVar17;
  if (iVar4 != 1) {
    puVar14 = (undefined8 *)plVar5[4];
    puVar10 = (undefined8 *)*puVar14;
    lVar8 = lVar6;
    puVar9 = puVar10;
    if (puVar1 == puVar15) {
      local_78 = plVar5[5];
      lVar8 = plVar5[6];
      if (lVar8 == 0) {
        lVar18 = 0;
        cVar19 = '\0';
      }
      else {
        cVar19 = '\0';
        lVar18 = 0;
        if (local_78 == 0) goto LAB_001059c0;
      }
    }
    else {
LAB_001058c1:
      do {
        puVar10 = puVar9 + -4;
        if ((undefined8 *)plVar5[3] == puVar13) {
          puVar14 = (undefined8 *)plVar5[4];
          cVar19 = *(char *)((long)plVar5 + 0x54);
          lVar6 = lVar8;
LAB_00105bf8:
          lVar18 = (long)puVar17 - (long)puVar13 >> 5;
          local_78 = plVar5[5];
          lVar8 = plVar5[6];
          if (lVar8 != lVar18) goto LAB_001059b2;
          puVar10 = puVar9;
          if ((puVar11 == puVar15) || (lVar7 = lVar6 + -1, lVar6 == 0)) goto LAB_00105c68;
          goto LAB_00105c42;
        }
        lVar6 = lVar8 + -1;
        if (lVar8 == 0) {
          puVar14 = (undefined8 *)plVar5[4];
          cVar19 = *(char *)((long)plVar5 + 0x54);
          lVar6 = -1;
          goto LAB_00105bf8;
        }
        lVar8 = lVar6;
        if (keylist == 0) {
LAB_0010590e:
          iVar4 = compare_part_0_isra_0(puVar11[-4],puVar11[-3],puVar13[-4],puVar13[-3]);
LAB_00105925:
          puVar11 = (undefined8 *)*plVar5;
          puVar14 = (undefined8 *)plVar5[1];
          if (0 < iVar4) {
            uVar2 = puVar14[-4];
            uVar3 = puVar14[-3];
            puVar15 = (undefined8 *)plVar5[2];
            puVar13 = puVar14 + -4;
            plVar5[1] = (long)puVar13;
            *puVar10 = uVar2;
            puVar9[-3] = uVar3;
            uVar2 = puVar14[-1];
            puVar9[-2] = puVar14[-2];
            puVar9[-1] = uVar2;
            puVar9 = puVar10;
            if (puVar15 == puVar11) break;
            goto LAB_001058c1;
          }
        }
        else {
          iVar4 = keycompare(puVar11 + -4,puVar13 + -4);
          if (iVar4 != 0) goto LAB_00105925;
          if ((unique == '\0') && (stable == '\0')) goto LAB_0010590e;
          puVar11 = (undefined8 *)*plVar5;
          puVar14 = (undefined8 *)plVar5[1];
        }
        uVar2 = puVar11[-4];
        uVar3 = puVar11[-3];
        puVar15 = (undefined8 *)plVar5[2];
        puVar16 = puVar11 + -4;
        *plVar5 = (long)puVar16;
        *puVar10 = uVar2;
        puVar9[-3] = uVar3;
        uVar2 = puVar11[-1];
        puVar9[-2] = puVar11[-2];
        puVar9[-1] = uVar2;
        puVar9 = puVar10;
        puVar13 = puVar14;
        puVar11 = puVar16;
      } while (puVar15 != puVar16);
      local_78 = plVar5[5];
      lVar8 = plVar5[6];
      puVar14 = (undefined8 *)plVar5[4];
      lVar18 = (long)puVar17 - (long)puVar13 >> 5;
      cVar19 = *(char *)((long)plVar5 + 0x54);
      puVar9 = puVar10;
      if (lVar8 != lVar18) {
LAB_001059b2:
        puVar10 = puVar9;
        if ((long)puVar1 - (long)puVar11 >> 5 == local_78) {
LAB_001059c0:
          puVar15 = (undefined8 *)plVar5[3];
          if ((puVar15 != puVar13) && (lVar7 = lVar6 + -1, lVar6 != 0)) {
            do {
              puVar16 = puVar13 + -4;
              uVar2 = puVar13[-3];
              puVar9 = puVar10 + -4;
              *puVar9 = *puVar16;
              puVar10[-3] = uVar2;
              uVar2 = puVar13[-1];
              puVar10[-2] = puVar13[-2];
              puVar10[-1] = uVar2;
              puVar10 = puVar9;
              puVar13 = puVar16;
              if (puVar16 == puVar15) {
                plVar5[1] = (long)puVar15;
                lVar18 = (long)puVar17 - (long)puVar15 >> 5;
                goto LAB_00105c68;
              }
              lVar7 = lVar7 + -1;
            } while (lVar7 != -1);
            plVar5[1] = (long)puVar16;
            lVar18 = (long)puVar17 - (long)puVar16 >> 5;
          }
        }
      }
    }
    goto LAB_00105c68;
  }
  lVar8 = lVar6;
  if (puVar1 != puVar15) {
    do {
      lVar6 = lVar8;
      if ((undefined8 *)plVar5[3] == puVar13) {
LAB_00105e58:
        lVar8 = plVar5[6];
        lVar7 = (long)puVar17 - (long)puVar13 >> 5;
        if (lVar7 != lVar8) goto LAB_00105f94;
        if ((undefined8 *)plVar5[2] == puVar11) goto LAB_001061c8;
        if (lVar6 != 0) goto LAB_00105eb6;
        cVar19 = *(char *)((long)plVar5 + 0x54);
        lVar18 = plVar5[5] - ((long)puVar1 - (long)puVar11 >> 5);
        lVar8 = 0;
        goto LAB_00105c80;
      }
      lVar6 = lVar8 + -1;
      if (lVar8 == 0) {
        lVar6 = -1;
        goto LAB_00105e58;
      }
      if (keylist == 0) {
LAB_00105b25:
        iVar4 = compare_part_0_isra_0(puVar11[-4],puVar11[-3],puVar13[-4],puVar13[-3]);
LAB_00105b3c:
        cVar19 = unique;
        if (0 < iVar4) {
          lVar18 = plVar5[1];
          lVar8 = lVar18 + -0x20;
          plVar5[1] = lVar8;
          if (cVar19 != '\0') {
            if ((saved_line != 0) && (iVar4 = compare(lVar8,&saved_line), iVar4 == 0))
            goto LAB_00105ac3;
            saved_line = *(long *)(lVar18 + -0x20);
            uRam0000000000107308 = *(undefined8 *)(lVar18 + -0x18);
            _DAT_00107310 = *(undefined8 *)(lVar18 + -0x10);
            uRam0000000000107318 = *(undefined8 *)(lVar18 + -8);
          }
          goto LAB_00105ab5;
        }
        lVar18 = *plVar5;
        lVar8 = lVar18 + -0x20;
        *plVar5 = lVar8;
        if (cVar19 == '\0') goto LAB_00105ab5;
LAB_00105b5f:
        if ((saved_line == 0) || (iVar4 = compare(lVar8,&saved_line), iVar4 != 0)) {
          saved_line = *(long *)(lVar18 + -0x20);
          uRam0000000000107308 = *(undefined8 *)(lVar18 + -0x18);
          _DAT_00107310 = *(undefined8 *)(lVar18 + -0x10);
          uRam0000000000107318 = *(undefined8 *)(lVar18 + -8);
          goto LAB_00105ab5;
        }
      }
      else {
        iVar4 = keycompare(puVar11 + -4,puVar13 + -4);
        if (iVar4 != 0) goto LAB_00105b3c;
        if (unique != '\0') {
          lVar18 = *plVar5;
          lVar8 = lVar18 + -0x20;
          *plVar5 = lVar8;
          goto LAB_00105b5f;
        }
        if (stable == '\0') goto LAB_00105b25;
        lVar8 = *plVar5 + -0x20;
        *plVar5 = lVar8;
LAB_00105ab5:
        write_line(lVar8,param_3,param_4);
      }
LAB_00105ac3:
      puVar11 = (undefined8 *)*plVar5;
      puVar13 = (undefined8 *)plVar5[1];
      lVar8 = lVar6;
    } while (puVar11 != (undefined8 *)plVar5[2]);
    lVar8 = plVar5[6];
    lVar7 = (long)puVar17 - (long)puVar13 >> 5;
    if (lVar7 != lVar8) {
LAB_00105f94:
      lVar18 = plVar5[5];
      local_78 = (long)puVar1 - (long)puVar11 >> 5;
      goto LAB_00105fa7;
    }
LAB_001061c8:
    cVar19 = *(char *)((long)plVar5 + 0x54);
    lVar18 = plVar5[5] - ((long)puVar1 - (long)puVar11 >> 5);
    lVar8 = 0;
    goto LAB_00105c80;
  }
  lVar18 = plVar5[5];
  lVar8 = plVar5[6];
  lVar7 = 0;
  local_78 = 0;
  if (lVar8 != 0) {
LAB_00105fa7:
    if (local_78 == lVar18) {
      if ((puVar13 == (undefined8 *)plVar5[3]) || (lVar6 == 0)) {
        cVar19 = *(char *)((long)plVar5 + 0x54);
        lVar18 = local_78 - ((long)puVar1 - (long)puVar11 >> 5);
        lVar8 = lVar8 - lVar7;
        goto LAB_00105c80;
      }
      do {
        lVar6 = lVar6 + -1;
        puVar15 = puVar13 + -4;
        bVar20 = unique == '\0';
        plVar5[1] = (long)puVar15;
        if (bVar20) {
LAB_001060da:
          write_line(puVar15,param_3,param_4);
        }
        else if ((saved_line == 0) || (iVar4 = compare(puVar15,&saved_line), iVar4 != 0)) {
          saved_line = puVar13[-4];
          uRam0000000000107308 = puVar13[-3];
          _DAT_00107310 = puVar13[-2];
          uRam0000000000107318 = puVar13[-1];
          goto LAB_001060da;
        }
        puVar13 = (undefined8 *)plVar5[1];
      } while ((puVar13 != (undefined8 *)plVar5[3]) && (lVar6 != 0));
      cVar19 = *(char *)((long)plVar5 + 0x54);
      puVar11 = (undefined8 *)*plVar5;
      goto LAB_00105f33;
    }
    cVar19 = *(char *)((long)plVar5 + 0x54);
    lVar8 = lVar8 - lVar7;
    lVar18 = lVar18 - ((long)puVar1 - (long)puVar11 >> 5);
    goto LAB_00105c80;
  }
  bVar20 = (undefined8 *)plVar5[3] != puVar17;
  goto LAB_00105e20;
  while (lVar7 = lVar7 + -1, puVar9 = puVar10, lVar7 != -1) {
LAB_00105c42:
    puVar17 = puVar11 + -4;
    uVar2 = puVar11[-3];
    puVar10 = puVar9 + -4;
    *puVar10 = *puVar17;
    puVar9[-3] = uVar2;
    uVar2 = puVar11[-1];
    puVar9[-2] = puVar11[-2];
    puVar9[-1] = uVar2;
    puVar11 = puVar17;
    if (puVar17 == puVar15) {
      *plVar5 = (long)puVar15;
      goto LAB_00105c68;
    }
  }
  *plVar5 = (long)puVar17;
LAB_00105c68:
  *puVar14 = puVar10;
  lVar8 = lVar8 - lVar18;
  lVar18 = local_78 - ((long)puVar1 - (long)puVar11 >> 5);
LAB_00105c80:
  plVar5[5] = lVar18;
  plVar5[6] = lVar8;
  if (cVar19 == '\0') {
    bVar20 = (undefined8 *)plVar5[3] != puVar13;
    if ((undefined8 *)plVar5[2] == puVar11) {
LAB_00105e20:
      if ((lVar18 == 0) && (bVar20)) {
LAB_00105cab:
        pthread_mutex_lock(__mutex);
        heap_insert(*param_1,plVar5);
        *(undefined1 *)((long)plVar5 + 0x54) = 1;
        pthread_cond_signal(__cond);
        pthread_mutex_unlock(__mutex);
      }
    }
    else if ((lVar8 == 0) || (bVar20)) goto LAB_00105cab;
  }
  if (*(uint *)(plVar5 + 10) < 2) {
    if (plVar5[6] + plVar5[5] == 0) {
      lVar6 = plVar5[7];
      pthread_mutex_lock(__mutex);
      heap_insert(*param_1,lVar6);
      *(undefined1 *)(lVar6 + 0x54) = 1;
      pthread_cond_signal(__cond);
      pthread_mutex_unlock(__mutex);
    }
    goto LAB_00105ce8;
  }
  pthread_mutex_lock((pthread_mutex_t *)(plVar5[7] + 0x58));
  plVar12 = (long *)plVar5[7];
  if (*(char *)((long)plVar12 + 0x54) == '\0') {
    if (*plVar12 == plVar12[2]) {
      if (plVar12[1] != plVar12[3]) {
        lVar6 = plVar12[5];
        goto joined_r0x00106127;
      }
    }
    else {
      if (plVar12[1] == plVar12[3]) {
        lVar6 = plVar12[6];
joined_r0x00106127:
        if (lVar6 != 0) goto LAB_00105d63;
      }
      pthread_mutex_lock(__mutex);
      heap_insert(*param_1,plVar12);
      *(undefined1 *)((long)plVar12 + 0x54) = 1;
      pthread_cond_signal(__cond);
      pthread_mutex_unlock(__mutex);
      plVar12 = (long *)plVar5[7];
    }
  }
LAB_00105d63:
  pthread_mutex_unlock((pthread_mutex_t *)(plVar12 + 0xb));
LAB_00105ce8:
  pthread_mutex_unlock(__mutex_00);
  goto LAB_001057d8;
  while ((puVar11 = (undefined8 *)*plVar5, puVar11 != (undefined8 *)plVar5[2] && (lVar6 != 0))) {
LAB_00105eb6:
    lVar6 = lVar6 + -1;
    puVar13 = puVar11 + -4;
    bVar20 = unique == '\0';
    *plVar5 = (long)puVar13;
    if (bVar20) {
LAB_00105f01:
      write_line(puVar13,param_3,param_4);
    }
    else if ((saved_line == 0) || (iVar4 = compare(puVar13,&saved_line), iVar4 != 0)) {
      saved_line = puVar11[-4];
      uRam0000000000107308 = puVar11[-3];
      _DAT_00107310 = puVar11[-2];
      uRam0000000000107318 = puVar11[-1];
      goto LAB_00105f01;
    }
  }
  cVar19 = *(char *)((long)plVar5 + 0x54);
  puVar13 = (undefined8 *)plVar5[1];
LAB_00105f33:
  lVar18 = plVar5[5] - ((long)puVar1 - (long)puVar11 >> 5);
  lVar8 = plVar5[6] - ((long)puVar17 - (long)puVar13 >> 5);
  goto LAB_00105c80;
}



void sortlines(long param_1,ulong param_2,long param_3,long *param_4,undefined8 *param_5,
              undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  pthread_t local_80;
  long local_78;
  ulong local_70;
  long local_68;
  long local_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  uVar4 = param_2 >> 1;
  uVar3 = param_4[5];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = param_4[6];
  local_60 = param_4[8];
  local_48 = param_7;
  local_78 = param_1;
  local_70 = uVar4;
  local_68 = param_3;
  local_58 = param_5;
  local_50 = param_6;
  if ((0x1ffff < uVar3 + uVar2) && (1 < param_2)) {
    iVar1 = pthread_create(&local_80,(pthread_attr_t *)0x0,sortlines_thread,&local_78);
    if (iVar1 == 0) {
      sortlines(param_1 + param_4[5] * -0x20,param_2 - uVar4,param_3,param_4[9],param_5,param_6,
                param_7);
      pthread_join(local_80,(void **)0x0);
      goto LAB_001063a3;
    }
    uVar3 = param_4[5];
    uVar2 = param_4[6];
  }
  lVar6 = param_1 + param_3 * -0x20;
  lVar5 = param_1 + uVar3 * -0x20;
  if (1 < uVar2) {
    sequential_sort(lVar5,uVar2,lVar6 + (uVar3 >> 1) * -0x20,0);
  }
  if (1 < uVar3) {
    sequential_sort(param_1,uVar3,lVar6,0);
  }
  *param_4 = param_1;
  param_4[1] = lVar5;
  param_4[2] = lVar5;
  param_4[3] = param_1 + uVar3 * -0x20 + uVar2 * -0x20;
  pthread_mutex_lock((pthread_mutex_t *)(param_5 + 1));
  heap_insert(*param_5,param_4);
  *(undefined1 *)((long)param_4 + 0x54) = 1;
  pthread_cond_signal((pthread_cond_t *)(param_5 + 6));
  pthread_mutex_unlock((pthread_mutex_t *)(param_5 + 1));
  merge_loop(param_5,param_3,param_6,param_7);
LAB_001063a3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 sortlines_thread(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long in_FS_OFFSET;
  pthread_t local_80;
  long local_78;
  ulong local_70;
  long lStack_68;
  long local_60;
  undefined8 *puStack_58;
  long local_50;
  long lStack_48;
  long local_40;
  
  uVar1 = param_1[1];
  lVar2 = param_1[2];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = param_1[6];
  plVar4 = (long *)param_1[3];
  puVar5 = (undefined8 *)param_1[4];
  lVar6 = param_1[5];
  lVar7 = *param_1;
  uVar13 = uVar1 >> 1;
  uVar10 = plVar4[5];
  local_60 = plVar4[8];
  uVar9 = plVar4[6];
  local_78 = lVar7;
  local_70 = uVar13;
  lStack_68 = lVar2;
  puStack_58 = puVar5;
  local_50 = lVar6;
  lStack_48 = lVar3;
  if ((0x1ffff < uVar10 + uVar9) && (1 < uVar1)) {
    iVar8 = pthread_create(&local_80,(pthread_attr_t *)0x0,sortlines_thread,&local_78);
    if (iVar8 == 0) {
      sortlines(lVar7 + plVar4[5] * -0x20,uVar1 - uVar13,lVar2,plVar4[9],puVar5,lVar6,lVar3);
      pthread_join(local_80,(void **)0x0);
      goto LAB_001065eb;
    }
    uVar10 = plVar4[5];
    uVar9 = plVar4[6];
  }
  lVar12 = lVar7 + lVar2 * -0x20;
  lVar11 = lVar7 + uVar10 * -0x20;
  if (1 < uVar9) {
    sequential_sort(lVar11,uVar9,lVar12 + (uVar10 >> 1) * -0x20,0);
  }
  if (1 < uVar10) {
    sequential_sort(lVar7,uVar10,lVar12,0);
  }
  *plVar4 = lVar7;
  plVar4[1] = lVar11;
  plVar4[2] = lVar11;
  plVar4[3] = lVar7 + uVar10 * -0x20 + uVar9 * -0x20;
  pthread_mutex_lock((pthread_mutex_t *)(puVar5 + 1));
  heap_insert(*puVar5,plVar4);
  *(undefined1 *)((long)plVar4 + 0x54) = 1;
  pthread_cond_signal((pthread_cond_t *)(puVar5 + 6));
  pthread_mutex_unlock((pthread_mutex_t *)(puVar5 + 1));
  merge_loop(puVar5,lVar2,lVar6,lVar3);
LAB_001065eb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void usage(int param_1)

{
  FILE *pFVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long in_FS_OFFSET;
  undefined *local_a8;
  char *pcStack_a0;
  char *local_98 [4];
  char *local_78;
  char *pcStack_70;
  char *local_68;
  char *pcStack_60;
  char *local_58;
  char *pcStack_50;
  undefined1 local_48 [16];
  undefined8 local_30;
  
  uVar5 = _program_name;
  ppuVar6 = &local_a8;
  local_30 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(_stderr,2,uVar3,uVar5);
    goto LAB_001066fa;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... [FILE]...\n  or:  %s [OPTION]... --files0-from=F\n",5);
  __printf_chk(2,uVar3,uVar5,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"Write sorted concatenation of all FILE(s) to standard output.\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"\nWith no FILE, or when FILE is -, read standard input.\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"Ordering options:\n\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -b, --ignore-leading-blanks  ignore leading blanks\n  -d, --dictionary-order      consider only blanks and alphanumeric characters\n  -f, --ignore-case           fold lower case to upper case characters\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -g, --general-numeric-sort  compare according to general numerical value\n  -i, --ignore-nonprinting    consider only printable characters\n  -M, --month-sort            compare (unknown) < \'JAN\' < ... < \'DEC\'\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -h, --human-numeric-sort    compare human readable numbers (e.g., 2K 1G)\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -n, --numeric-sort          compare according to string numerical value;\n                                see full documentation for supported strings\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -R, --random-sort           shuffle, but group identical keys.  See shuf(1)\n      --random-source=FILE    get random bytes from FILE\n  -r, --reverse               reverse the result of comparisons\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --sort=WORD             sort according to WORD:\n                                general-numeric -g, human-numeric -h, month -M,\n                                numeric -n, random -R, version -V\n  -V, --version-sort          natural sort of (version) numbers within text\n\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"Other options:\n\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --batch-size=NMERGE   merge at most NMERGE inputs at once;\n                            for more use temp files\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -c, --check, --check=diagnose-first  check for sorted input; do not sort\n  -C, --check=quiet, --check=silent  like -c, but do not report first bad line\n      --compress-program=PROG  compress temporaries with PROG;\n                              decompress them with PROG -d\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --debug               annotate the part of the line used to sort,\n                              and warn about questionable usage to stderr\n      --files0-from=F       read input from the files specified by\n                            NUL-terminated names in file F;\n                            If F is - then read names from standard input\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -k, --key=KEYDEF          sort via a key; KEYDEF gives location and type\n  -m, --merge               merge already sorted files; do not sort\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -o, --output=FILE         write result to FILE instead of standard output\n  -s, --stable              stabilize sort by disabling last-resort comparison\n  -S, --buffer-size=SIZE    use SIZE for main memory buffer\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  uVar5 = dcgettext(0,
                    "  -t, --field-separator=SEP  use SEP instead of non-blank to blank transition\n  -T, --temporary-directory=DIR  use DIR for temporaries, not $TMPDIR or %s;\n                              multiple options specify multiple directories\n      --parallel=N          change the number of sorts run concurrently to N\n  -u, --unique              output only the first of lines with equal keys;\n                              with -c, check for strict ordering\n"
                    ,5);
  __printf_chk(2,uVar5,&_LC64);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"  -z, --zero-terminated     line delimiter is NUL, not newline\n",5)
  ;
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nKEYDEF is F[.C][OPTS][,F[.C][OPTS]] for start and stop position, where F is a\nfield number and C a character position in the field; both are origin 1, and\nthe stop position defaults to the line\'s end.  If neither -t nor -b is in\neffect, characters in a field are counted from the beginning of the preceding\nwhitespace.  OPTS is one or more single-letter ordering options [bdfgiMhnRrV],\nwhich override global ordering options for that key.  If no key is given, use\nthe entire line as the key.  Use --debug to diagnose incorrect key usage.\n\nSIZE may be followed by the following multiplicative suffixes:\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "% 1% of memory, b 1, K 1024 (default), and so on for M, G, T, P, E, Z, Y, R, Q.\n\n*** WARNING ***\nThe locale specified by the environment affects sort order.\nSet LC_ALL=C to get the traditional sort order that uses\nnative byte values.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pcVar4 = "[";
  local_a8 = &_LC41;
  pcStack_a0 = "test invocation";
  local_98[0] = "coreutils";
  local_98[1] = "Multi-call invocation";
  local_98[2] = "sha224sum";
  local_98[3] = "sha2 utilities";
  local_78 = "sha256sum";
  pcStack_70 = "sha2 utilities";
  local_68 = "sha384sum";
  pcStack_60 = "sha2 utilities";
  local_58 = "sha512sum";
  pcStack_50 = "sha2 utilities";
  local_48 = (undefined1  [16])0x0;
  do {
    iVar2 = strcmp("sort",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)ppuVar6 + 0x10);
    ppuVar6 = (undefined **)((long)ppuVar6 + 0x10);
  } while (pcVar4 != (char *)0x0);
  puVar7 = *(undefined **)((long)ppuVar6 + 8);
  if (puVar7 == (undefined *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    puVar7 = &_LC42;
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) goto LAB_00106b7d;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC42);
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
LAB_00106b7d:
      iVar2 = strncmp(pcVar4,"en_",3);
      pFVar1 = _stdout;
      if (iVar2 != 0) {
        pcVar4 = (char *)dcgettext(0,
                                   "Report any translation bugs to <https://translationproject.org/team/>\n"
                                   ,5);
        fputs_unlocked(pcVar4,pFVar1);
      }
    }
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar4 = "";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC42);
    if (puVar7 == &_LC42) {
      pcVar4 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,puVar7,pcVar4);
LAB_001066fa:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "__rlimit_resource": Some values do not have unique names */

undefined8 main(uint param_1,FILE *param_2)

{
  byte *pbVar1;
  byte bVar2;
  ushort uVar3;
  pthread_mutex_t *__mutex;
  long lVar4;
  rlim_t rVar5;
  long *plVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  char *pcVar12;
  char *pcVar13;
  lconv *plVar14;
  ushort **ppuVar15;
  __int32_t **pp_Var16;
  byte *__s;
  size_t sVar17;
  undefined *puVar18;
  code *pcVar19;
  long lVar20;
  undefined1 (*__ptr) [16];
  ulong uVar21;
  void *pvVar22;
  FILE *pFVar23;
  char *pcVar24;
  undefined8 uVar25;
  long *plVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  byte bVar29;
  undefined1 *puVar30;
  ulong uVar31;
  long *plVar32;
  long lVar33;
  long extraout_RDX;
  ulong __n;
  undefined **ppuVar34;
  undefined8 *puVar35;
  ushort **ppuVar36;
  char *pcVar37;
  FILE *pFVar38;
  FILE *pFVar39;
  rlimit *__rlimits;
  int *piVar40;
  undefined8 uVar41;
  undefined1 *puVar42;
  long in_FS_OFFSET;
  bool bVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double extraout_XMM1_Qa;
  undefined1 auVar47 [16];
  long *local_450;
  int *local_448;
  long local_440;
  rlimit *local_438;
  FILE *local_428;
  FILE *local_420;
  undefined8 local_418;
  FILE *local_410;
  FILE **local_3f0;
  FILE *local_3e0;
  long local_3d8;
  ushort **local_3d0;
  FILE *local_3c8;
  long local_3c0;
  undefined *local_3b8;
  rlimit local_398;
  long local_388;
  long lStack_380;
  undefined1 local_378 [80];
  undefined8 local_328 [4];
  undefined8 local_308;
  undefined8 uStack_300;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  char local_2f0;
  FILE *local_2d8;
  long local_2d0;
  ulong local_2c8;
  long local_2c0;
  long local_2b8;
  char local_2a8;
  rlimit local_288 [18];
  _union_1457 local_168;
  pthread_mutex_t local_160;
  pthread_cond_t pStack_138;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined8 local_78;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar12 = getenv("POSIXLY_CORRECT");
  iVar9 = posix2_version();
  local_440 = CONCAT71(local_440._1_7_,0x2b8 < iVar9 - 0x30db0U);
  set_program_name(*(long *)param_2);
  pcVar13 = setlocale(6,"");
  bindtextdomain("coreutils");
  textdomain("coreutils");
  _exit_failure = 2;
  hard_LC_COLLATE = hard_locale(3);
  cVar7 = hard_locale(2);
  hard_LC_TIME = cVar7;
  plVar14 = localeconv();
  decimal_point = *plVar14->decimal_point;
  if ((decimal_point == '\0') || (plVar14->decimal_point[1] != '\0')) {
    decimal_point = '.';
  }
  cVar8 = *plVar14->thousands_sep;
  thousands_sep = (int)cVar8;
  if (cVar8 != '\0') {
    if (plVar14->thousands_sep[1] == '\0') goto LAB_00109696;
    thousands_sep_ignored = 1;
  }
  thousands_sep = 0x80;
LAB_00109696:
  have_read_stdin = '\0';
  ppuVar15 = __ctype_b_loc();
  pp_Var16 = __ctype_toupper_loc();
  lVar33 = 0;
  pFVar38 = (FILE *)&nonprinting;
  do {
    while( true ) {
      uVar3 = (*ppuVar15)[lVar33];
      bVar2 = (byte)(uVar3 >> 8);
      if (lVar33 != 10) break;
      DAT_0010720a = 1;
      lVar33 = 0xb;
      DAT_0010700a = 0;
      DAT_0010710a = (bVar2 >> 6 ^ 1) & 1;
      DAT_00106f0a = (undefined1)(*pp_Var16)[10];
    }
    bVar43 = (uVar3 & 1) == 0;
    if (bVar43) {
      bVar29 = ((byte)(uVar3 >> 3) ^ 1) & 1;
    }
    else {
      bVar29 = 0;
    }
    (&blanks)[lVar33] = !bVar43;
    (&nondictionary)[lVar33] = bVar29;
    (&nonprinting)[lVar33] = (bVar2 >> 6 ^ 1) & 1;
    (&fold_toupper)[lVar33] = (char)(*pp_Var16)[lVar33];
    lVar33 = lVar33 + 1;
  } while (lVar33 != 0x100);
  if (cVar7 != '\0') {
    ppuVar34 = &monthtab;
    lVar33 = 1;
    do {
      __s = (byte *)rpl_nl_langinfo((int)lVar33 + 0x2000d);
      sVar17 = strlen((char *)__s);
      puVar18 = (undefined *)xmalloc(sVar17 + 1);
      *(int *)(ppuVar34 + 1) = (int)lVar33;
      *ppuVar34 = puVar18;
      if (sVar17 != 0) {
        pFVar38 = (FILE *)*ppuVar15;
        pbVar1 = __s + sVar17;
        sVar17 = 0;
        do {
          if ((*(ushort *)((long)&pFVar38->_flags + (ulong)*__s * 2) & 1) == 0) {
            puVar18[sVar17] = (&fold_toupper)[*__s];
            sVar17 = sVar17 + 1;
          }
          __s = __s + 1;
        } while (__s != pbVar1);
      }
      lVar33 = lVar33 + 1;
      puVar18[sVar17] = 0;
      ppuVar34 = ppuVar34 + 2;
    } while (lVar33 != 0xd);
    qsort(&monthtab,0xc,0x10,struct_month_cmp);
  }
  piVar40 = &sig_8;
  sigemptyset((sigset_t *)caught_signals);
  local_448 = &sig_8;
  do {
    iVar9 = *piVar40;
    sigaction(iVar9,(sigaction *)0x0,(sigaction *)&local_168);
    if (local_168.sa_handler != (__sighandler_t)0x1) {
      sigaddset((sigset_t *)caught_signals,iVar9);
    }
    piVar40 = piVar40 + 1;
  } while (piVar40 != (int *)&DAT_0010770c);
  local_e0 = 0;
  uVar31 = (ulong)param_1;
  local_168.sa_handler = sighandler;
  local_160.__align = caught_signals._0_8_;
  local_160._8_8_ = caught_signals._8_8_;
  local_160._16_8_ = caught_signals._16_8_;
  local_160.__data.__list.__prev = (__pthread_internal_list *)caught_signals._24_8_;
  local_160.__data.__list.__next = (__pthread_internal_list *)caught_signals._32_8_;
  pStack_138.__align = caught_signals._40_8_;
  puVar42 = (undefined1 *)(ulong)(pcVar12 != (char *)0x0);
  pStack_138.__data.__total_seq = caught_signals._48_8_;
  pStack_138.__data.__wakeup_seq = caught_signals._56_8_;
  pStack_138.__data.__woken_seq = caught_signals._64_8_;
  pStack_138.__data.__mutex = (void *)caught_signals._72_8_;
  pStack_138._40_8_ = caught_signals._80_8_;
  uStack_108 = caught_signals._88_8_;
  local_100 = caught_signals._96_8_;
  uStack_f8 = caught_signals._104_8_;
  local_f0 = caught_signals._112_8_;
  uStack_e8 = caught_signals._120_8_;
  do {
    while( true ) {
      iVar9 = *local_448;
      iVar10 = sigismember((sigset_t *)caught_signals,iVar9);
      if (iVar10 == 0) break;
      local_448 = local_448 + 1;
      sigaction(iVar9,(sigaction *)&local_168,(sigaction *)0x0);
      if (local_448 == (int *)&DAT_0010770c) goto LAB_00109962;
    }
    local_448 = local_448 + 1;
  } while (local_448 != (int *)&DAT_0010770c);
LAB_00109962:
  uVar41 = (longlong)(ushort **)0x0;
  ppuVar36 = (ushort **)0x0;
  signal(0x11,(__sighandler_t)0x0);
  atexit(exit_cleanup);
  key_init(local_328,8);
  local_328[0] = 0xffffffffffffffff;
  local_418 = (FILE *)CONCAT44(local_418._4_4_,param_1);
  local_450 = (long *)xnmalloc();
  bVar43 = false;
  __rlimits = (rlimit *)(ulong)param_1;
  local_438 = &local_398;
  local_3e0 = (FILE *)0x0;
  local_428 = (FILE *)0x0;
  local_3c8 = (FILE *)0x0;
  local_420 = (FILE *)0x0;
  cVar7 = '\0';
  iVar9 = tab;
  local_410 = param_2;
LAB_00109a76:
  do {
    tab = iVar9;
    local_398.rlim_cur = CONCAT44(local_398.rlim_cur._4_4_,0xffffffff);
    if ((int)ppuVar36 != -1) {
      if ((ushort **)uVar41 == (ushort **)0x0) goto LAB_00109b08;
      if ((char)puVar42 == '\0') goto LAB_00109b08;
      if (((byte)local_440 == 1) && (cVar7 == '\0')) {
        if (param_1 == _optind) {
          if (local_428 == (FILE *)0x0) {
            cVar7 = '\0';
            goto LAB_00109c41;
          }
LAB_0010b538:
          uVar28 = quotearg_style(4,*local_450);
          uVar27 = dcgettext(0,"extra operand %s",5);
                    /* WARNING: Subroutine does not return */
          error(0,0,uVar27,uVar28);
        }
        lVar33 = (long)(int)_optind;
        pcVar37 = *(char **)(&param_2->_flags + lVar33 * 2);
        if ((*pcVar37 == '-') && (pcVar37[1] == 'o')) {
          uVar11 = _optind;
          if (pcVar37[2] == '\0') goto LAB_0010a02e;
          goto LAB_00109b08;
        }
      }
    }
LAB_00109a50:
    if ((int)param_1 <= (int)_optind) {
LAB_0010bf08:
      if (local_428 != (FILE *)0x0) {
        if ((ushort **)uVar41 != (ushort **)0x0) goto LAB_0010b538;
        lVar33 = stream_open(local_428,&_LC32);
        if (lVar33 == 0) {
          xfopen_part_0(local_428);
          goto LAB_0010c068;
        }
        puVar42 = (undefined1 *)local_288;
        readtokens0_init(puVar42);
        cVar8 = readtokens0(lVar33,puVar42);
        if (cVar8 == '\0') {
          uVar28 = quotearg_style(4,local_428);
          pcVar12 = "cannot read file names from %s";
          goto LAB_0010be3c;
        }
        xfclose(lVar33);
        ppuVar36 = (ushort **)CONCAT44(local_288[0].rlim_cur._4_4_,(int)local_288[0].rlim_cur);
        if (ppuVar36 == (ushort **)0x0) {
          uVar28 = quotearg_style(4,local_428);
          pcVar12 = "no input from %s";
          goto LAB_0010be3c;
        }
        free(local_450);
        local_450 = (long *)local_288[0].rlim_max;
        uVar41 = (longlong)(ushort **)0x0;
        do {
          pcVar37 = *(char **)(local_288[0].rlim_max + uVar41 * 8);
          if ((*pcVar37 == '-') && (pcVar37[1] == '\0')) {
            uVar28 = quotearg_style(4);
            pcVar12 = "when reading file names from stdin, no file name of %s allowed";
            goto LAB_0010be3c;
          }
          uVar41 = uVar41 + 1;
          if (*pcVar37 == '\0') {
            uVar28 = quotearg_n_style_colon(0,3,local_428);
            uVar27 = dcgettext(0,"%s:%lu: invalid zero-length file name",5);
                    /* WARNING: Subroutine does not return */
            error(2,0,uVar27,uVar28,uVar41);
          }
        } while (ppuVar36 != (ushort **)uVar41);
      }
LAB_00109c41:
      pcVar37 = keylist;
      if (keylist != (char *)0x0) {
        puVar42 = (undefined1 *)0x0;
        pcVar24 = keylist;
        do {
          uVar11 = (uint)(byte)pcVar24[0x33];
          if ((((((*(long *)(pcVar24 + 0x20) == 0) && (*(long *)(pcVar24 + 0x28) == 0)) &&
                (pcVar24[0x30] == '\0')) &&
               ((pcVar24[0x31] == '\0' && ((*(ulong *)(pcVar24 + 0x30) & 0xffff00ff0000) == 0)))) &&
              (pcVar24[0x36] == '\0')) &&
             (((pcVar24[0x38] == '\0' && (pcVar24[0x33] == 0)) && (pcVar24[0x37] == '\0')))) {
            *(undefined8 *)(pcVar24 + 0x20) = local_308;
            *(undefined8 *)(pcVar24 + 0x28) = uStack_300;
            pcVar24[0x38] = local_2f0;
            uVar11 = local_2f8 >> 0x18;
            *(ulong *)(pcVar24 + 0x30) = CONCAT44(uStack_2f4,local_2f8);
            pcVar24 = *(char **)(pcVar24 + 0x40);
          }
          else {
            pcVar24 = *(char **)(pcVar24 + 0x40);
          }
          puVar42 = (undefined1 *)(ulong)((uint)puVar42 | uVar11);
        } while (pcVar24 != (char *)0x0);
        local_438 = (rlimit *)0x0;
        goto LAB_00109cf0;
      }
      cVar8 = default_key_compare(local_328);
      if (cVar8 == '\0') {
        lVar33 = xmemdup();
        plVar32 = (long *)&keylist;
        for (pcVar37 = keylist; pcVar37 != (char *)0x0; pcVar37 = *(char **)(pcVar37 + 0x40)) {
          plVar32 = (long *)(pcVar37 + 0x40);
        }
        puVar42 = (undefined1 *)(ulong)local_2f8._3_1_;
        *plVar32 = lVar33;
        pcVar37 = keylist;
        *(undefined8 *)(lVar33 + 0x40) = 0;
        local_438 = (rlimit *)0x1;
        for (; pcVar37 != (char *)0x0; pcVar37 = *(char **)(pcVar37 + 0x40)) {
LAB_00109cf0:
          if (1 < (uint)(byte)pcVar37[0x32] + (uint)(byte)pcVar37[0x34] + (uint)(byte)pcVar37[0x35]
                  + (uint)(byte)pcVar37[0x36] +
                  (uint)(byte)(pcVar37[0x38] | pcVar37[0x33] | *(long *)(pcVar37 + 0x20) != 0))
          goto LAB_0010c690;
        }
        if (debug == '\0') {
          uStack_2f4._3_1_ = (undefined1)((uint)uStack_2f4 >> 0x18);
          reverse = uStack_2f4._3_1_;
          if ((char)puVar42 != '\0') {
            lVar33 = randread_new(local_420,0x10);
            if (lVar33 == 0) {
              if (local_420 == (FILE *)0x0) {
                local_420 = (FILE *)0x109110;
              }
              pcVar12 = "open failed";
              goto LAB_0010c164;
            }
            ppuVar36 = (ushort **)&local_78;
            randread(lVar33,ppuVar36,0x10);
            iVar9 = randread_free(lVar33);
            if (iVar9 == 0) {
              lVar33 = dlopen("libcrypto.so.3",0x101);
              if ((((lVar33 != 0) &&
                   (pcVar19 = (code *)dlsym(lVar33,"MD5_Init"), pcVar19 != (code *)0x0)) &&
                  (ptr_MD5_Init = pcVar19, pcVar19 = (code *)dlsym(lVar33,"MD5_Update"),
                  pcVar19 != (code *)0x0)) &&
                 (ptr_MD5_Update = pcVar19, lVar33 = dlsym(lVar33,"MD5_Final"), lVar33 != 0)) {
                puVar42 = random_md5_state;
                ptr_MD5_Final = lVar33;
                (*ptr_MD5_Init)(random_md5_state);
                (*ptr_MD5_Update)(random_md5_state,ppuVar36,0x10);
                goto LAB_00109fbb;
              }
              link_failure();
            }
            pcVar12 = "close failed";
LAB_0010c164:
            uVar28 = dcgettext(0,pcVar12,5);
                    /* WARNING: Subroutine does not return */
            sort_die(uVar28,local_420);
          }
          goto LAB_00109fbb;
        }
LAB_00109d3b:
        if (cVar7 == '\0' && local_3e0 == (FILE *)0x0) {
          if ((pcVar13 != (char *)0x0) && (pcVar12 = setlocale(3,""), pcVar12 != (char *)0x0)) {
            if (hard_LC_COLLATE != '\0') {
              pcVar12 = setlocale(3,(char *)0x0);
              uVar28 = quote(pcVar12);
              uVar27 = dcgettext(0,"text ordering performed using %s sorting rules",5);
                    /* WARNING: Subroutine does not return */
              error(0,0,uVar27,uVar28);
            }
            uVar28 = dcgettext(0,"text ordering performed using simple byte comparison",5);
                    /* WARNING: Subroutine does not return */
            error(0,0,&_LC4,uVar28);
          }
          uVar28 = dcgettext(0,"failed to set locale",5);
                    /* WARNING: Subroutine does not return */
          error(0,0,&_LC4,uVar28);
        }
LAB_0010c66d:
        if (cVar7 == '\0') {
          cVar7 = 'o';
        }
        pcVar37 = opts_7;
        opts_7[0] = cVar7;
        incompatible_options();
LAB_0010c690:
        pcVar37[0x37] = '\0';
        puVar42 = (undefined1 *)&local_78;
        pcVar37[0x30] = '\0';
        pcVar37[0x31] = '\0';
        key_to_opts();
        incompatible_options(puVar42);
LAB_0010c6b2:
        uVar28 = quotearg_style(4,local_450[1]);
        uVar27 = dcgettext(0,"extra operand %s not allowed with -%c",5);
                    /* WARNING: Subroutine does not return */
        error(2,0,uVar27,uVar28,(int)cVar7);
      }
      if (debug != '\0') goto LAB_00109d3b;
      reverse = uStack_2f4._3_1_;
LAB_00109fbb:
      if (temp_dir_count == 0) {
        pcVar37 = getenv("TMPDIR");
        if (pcVar37 == (char *)0x0) {
          pcVar37 = "/tmp";
        }
        add_temp_dir(pcVar37);
      }
      if ((ushort **)uVar41 == (ushort **)0x0) {
        param_2 = (FILE *)&_LC147;
        uVar41 = (longlong)(ushort **)0x1;
        free(local_450);
        local_450 = (long *)xmalloc(8);
        *local_450 = (long)&_LC147;
      }
      pFVar23 = sort_size;
      if ((sort_size != (FILE *)0x0) &&
         (pFVar23 = (FILE *)((ulong)nmerge * 0x22), (FILE *)((ulong)nmerge * 0x22) < sort_size)) {
        pFVar23 = sort_size;
      }
      sort_size = pFVar23;
      if (cVar7 == '\0') {
        plVar32 = local_450;
        local_3d0 = (ushort **)0x0;
        goto LAB_0010a562;
      }
      if ((ushort **)uVar41 != (ushort **)0x1) goto LAB_0010c6b2;
      if (local_3e0 == (FILE *)0x0) {
        lVar33 = *local_450;
        lVar20 = stream_open(lVar33,&_LC32);
        pcVar12 = keylist;
        if (lVar20 == 0) {
          xfopen_part_0(lVar33);
LAB_0010bd72:
          pcVar12 = "incompatible tabs";
LAB_0010bd7e:
          uVar28 = dcgettext(0,pcVar12,5);
                    /* WARNING: Subroutine does not return */
          error(2,0,uVar28);
        }
        uVar11 = (uint)unique;
        pFVar38 = merge_buffer_size;
        if (merge_buffer_size <= sort_size) {
          pFVar38 = sort_size;
        }
        uVar31 = 0;
        initbuf(&local_2d8,0x20,pFVar38);
        local_398.rlim_cur = 0;
        local_438 = (rlimit *)0x0;
        break;
      }
      opts_6._0_1_ = cVar7;
      uVar11 = incompatible_options(&opts_6);
      uVar41 = (longlong)(ushort **)0x0;
      lVar33 = extraout_RDX;
LAB_0010a02e:
      uVar11 = uVar11 + 1;
      if (uVar11 == param_1) goto LAB_00109a5f;
LAB_00109b08:
      puVar30 = long_options;
      uVar11 = getopt_long(param_1,param_2,short_options,long_options,local_438);
      rVar5 = local_398.rlim_cur;
      pFVar23 = _optarg;
      ppuVar36 = (ushort **)(ulong)uVar11;
      if (uVar11 == 0xffffffff) goto LAB_00109a50;
      if (0x87 < (int)uVar11) goto switchD_00109b5f_caseD_2;
      if ((int)uVar11 < 1) {
        if (uVar11 == 0xffffff7d) {
          uVar28 = proper_name_lite("Paul Eggert","Paul Eggert");
          uVar27 = proper_name_lite("Mike Haertel","Mike Haertel");
          version_etc(_stdout,&_LC42,"GNU coreutils",_Version,uVar27,uVar28,0,puVar30);
                    /* WARNING: Subroutine does not return */
          exit(0);
        }
        goto LAB_0010bec7;
      }
      iVar10 = (int)local_398.rlim_cur;
      iVar9 = tab;
      switch(uVar11) {
      case 1:
        if ((char)_optarg->_flags == '+') {
          uVar11 = local_418._4_4_;
          if (_optind == param_1) {
            local_418 = (FILE *)((ulong)local_418._4_4_ << 0x20);
          }
          else {
            local_418 = (FILE *)((ulong)local_418._4_4_ << 0x20);
            if (**(char **)(&param_2->_flags + (long)(int)_optind * 2) == '-') {
              local_418 = (FILE *)CONCAT44(uVar11,(uint)((int)(*(char **)(&param_2->_flags +
                                                                         (long)(int)_optind * 2))[1]
                                                         - 0x30U < 10));
            }
          }
          bVar2 = (byte)local_440 | pcVar12 == (char *)0x0 & (byte)local_418;
          local_440 = CONCAT71(local_440._1_7_,bVar2);
          if (bVar2 != 0) {
            auVar47 = key_init(local_378);
            local_410 = auVar47._0_8_;
            pcVar37 = (char *)parse_field_count(auVar47._8_8_ + 1,local_410,0);
            if (pcVar37 != (char *)0x0) {
              if (*pcVar37 == '.') {
                pcVar37 = (char *)parse_field_count(pcVar37 + 1,&local_410->_IO_read_ptr,0);
                if (*(long *)local_410 == 0) goto LAB_0010a800;
LAB_0010a80e:
                if (pcVar37 == (char *)0x0) goto LAB_0010a416;
              }
              else if (*(long *)local_410 == 0) {
LAB_0010a800:
                if (local_410->_IO_read_ptr == (char *)0x0) {
                  *(long *)local_410 = -1;
                }
                goto LAB_0010a80e;
              }
              pcVar37 = (char *)set_ordering(pcVar37,local_410,0);
              if (*pcVar37 != '\0') goto LAB_0010a416;
              if ((int)local_418 != 0) {
                lVar33 = (long)(int)_optind;
                _optind = _optind + 1;
                local_418 = *(FILE **)(&param_2->_flags + lVar33 * 2);
                pcVar37 = (char *)parse_field_count((undefined1 *)((long)&local_418->_flags + 1),
                                                    &local_410->_IO_read_end,
                                                    "invalid number after \'-\'");
                if (*pcVar37 == '.') {
                  pcVar37 = (char *)parse_field_count(pcVar37 + 1,&local_410->_IO_read_base,
                                                      "invalid number after \'.\'");
                }
                if ((local_410->_IO_read_base == (char *)0x0) &&
                   (local_410->_IO_read_end != (char *)0x0)) {
                  local_410->_IO_read_end = local_410->_IO_read_end + -1;
                }
                pcVar37 = (char *)set_ordering(pcVar37,local_410,1);
                if (*pcVar37 != '\0') {
                  badfieldspec(local_418,"stray character in field spec");
                  goto LAB_0010c66d;
                }
              }
              *(undefined1 *)((long)&local_410->_IO_buf_base + 1) = 1;
              lVar33 = xmemdup(local_410);
              plVar32 = (long *)&keylist;
              for (pcVar37 = keylist; pcVar37 != (char *)0x0; pcVar37 = *(char **)(pcVar37 + 0x40))
              {
                plVar32 = (long *)(pcVar37 + 0x40);
              }
              goto LAB_0010a4cf;
            }
            if (*(long *)local_410 == 0) goto LAB_0010a800;
          }
        }
LAB_0010a416:
        local_450[uVar41] = (long)_optarg;
        uVar41 = uVar41 + 1;
        iVar9 = tab;
        break;
      default:
        goto switchD_00109b5f_caseD_2;
      case 0x4d:
      case 0x52:
      case 0x56:
      case 0x62:
      case 100:
      case 0x66:
      case 0x67:
      case 0x68:
      case 0x69:
      case 0x6e:
      case 0x72:
        goto switchD_00109b5f_caseD_4d;
      case 0x53:
        iVar9 = xstrtoumax(_optarg,local_288,10,&local_2d8,"EgGkKmMPQRtTYZ");
        if (iVar9 != 0) goto LAB_0010a737;
        if (9 < (int)*(char *)(CONCAT44(local_288[0].rlim_cur._4_4_,(int)local_288[0].rlim_cur) + -1
                              ) - 0x30U) goto LAB_0010a4a5;
        if (local_2d8 < (FILE *)0x40000000000000) {
          local_2d8 = (FILE *)((long)local_2d8 << 10);
          goto LAB_0010a4a5;
        }
        goto LAB_0010a828;
      case 0x54:
        add_temp_dir(_optarg);
        iVar9 = tab;
        break;
      case 0x6b:
        local_418 = (FILE *)key_init(local_378);
        pcVar37 = (char *)parse_field_count(_optarg,local_418);
        lVar33 = *(long *)local_418;
        *(long *)local_418 = lVar33 + -1;
        if (lVar33 == 0) {
LAB_0010bea8:
          badfieldspec(_optarg,"field number is zero");
          goto LAB_0010bebb;
        }
        if (*pcVar37 == '.') {
          pcVar37 = (char *)parse_field_count(pcVar37 + 1,&local_418->_IO_read_ptr,
                                              "invalid number after \'.\'");
          pcVar24 = local_418->_IO_read_ptr;
          local_418->_IO_read_ptr = pcVar24 + -1;
          if (pcVar24 != (char *)0x0) goto LAB_0010a38b;
          pcVar37 = (char *)badfieldspec(_optarg,"character offset is zero");
LAB_0010b4dd:
          pcVar24 = (char *)parse_field_count(pcVar37 + 1,&local_418->_IO_read_end,
                                              "invalid number after \',\'");
          pcVar37 = local_418->_IO_read_end;
          local_418->_IO_read_end = pcVar37 + -1;
          if (pcVar37 == (char *)0x0) goto LAB_0010bea8;
          if (*pcVar24 == '.') {
            pcVar24 = (char *)parse_field_count(pcVar24 + 1,&local_418->_IO_read_base,
                                                "invalid number after \'.\'");
          }
          pcVar37 = (char *)set_ordering(pcVar24,local_418,1);
        }
        else {
LAB_0010a38b:
          if ((*(long *)local_418 == 0) && (local_418->_IO_read_ptr == (char *)0x0)) {
            *(long *)local_418 = -1;
          }
          pcVar37 = (char *)set_ordering(pcVar37,local_418,0);
          pcVar24 = _UNK_0010cca8;
          if (*pcVar37 == ',') goto LAB_0010b4dd;
          local_418->_IO_read_end = __LC97;
          local_418->_IO_read_base = pcVar24;
        }
        if (*pcVar37 != '\0') goto LAB_0010bef5;
        lVar33 = xmemdup(local_418);
        plVar32 = (long *)&keylist;
        for (pcVar37 = keylist; pcVar37 != (char *)0x0; pcVar37 = *(char **)(pcVar37 + 0x40)) {
          plVar32 = (long *)(pcVar37 + 0x40);
        }
LAB_0010a4cf:
        *plVar32 = lVar33;
        *(undefined8 *)(lVar33 + 0x40) = 0;
        iVar9 = tab;
        break;
      case 0x6d:
        goto switchD_00109b5f_caseD_6d;
      case 0x6f:
        if (local_3e0 != (FILE *)0x0) {
          local_418 = _optarg;
          iVar9 = strcmp((char *)local_3e0,(char *)_optarg);
          if (iVar9 != 0) {
            pcVar12 = "multiple output files specified";
            goto LAB_0010bd7e;
          }
        }
        local_3e0 = pFVar23;
        iVar9 = tab;
        break;
      case 0x73:
        stable = 1;
        break;
      case 0x74:
        cVar8 = (char)_optarg->_flags;
        iVar9 = (int)cVar8;
        if (cVar8 == '\0') {
          pcVar12 = "empty tab";
          goto LAB_0010bd7e;
        }
        if (*(char *)((long)&_optarg->_flags + 1) != '\0') {
          local_418 = _optarg;
          iVar9 = strcmp((char *)_optarg,"\\0");
          if (iVar9 != 0) {
            uVar28 = quote(pFVar23);
            pcVar12 = "multi-character tab %s";
LAB_0010be3c:
            uVar27 = dcgettext(0,pcVar12,5);
                    /* WARNING: Subroutine does not return */
            error(2,0,uVar27,uVar28);
          }
          iVar9 = 0;
        }
        if ((tab != 0x80) && (tab != iVar9)) goto LAB_0010bd72;
        break;
      case 0x75:
        unique = 1;
        break;
      case 0x79:
        if (*(FILE **)((long)param_2 + (long)(int)_optind * 8 + -8) == _optarg) {
          while (cVar8 = (char)pFVar23->_flags, (int)cVar8 - 0x30U < 10) {
            pFVar23 = (FILE *)((long)&pFVar23->_flags + 1);
          }
          _optind = (_optind - 1) + (uint)(cVar8 == '\0');
        }
        break;
      case 0x7a:
        eolchar = 0;
        break;
      case 0x80:
        ppuVar36 = (ushort **)0x63;
        if (_optarg != (FILE *)0x0) {
          pFVar38 = (FILE *)&DAT_00107484;
          lVar33 = __xargmatch_internal
                             ("--check",_optarg,&check_args,&check_types,1,_argmatch_die,1);
          ppuVar36 = (ushort **)(ulong)(uint)(int)*(char *)((long)&check_types + lVar33);
        }
      case 0x43:
      case 99:
        if ((cVar7 == '\0') || ((int)cVar7 == (int)ppuVar36)) {
          cVar7 = (char)ppuVar36;
          iVar9 = tab;
          break;
        }
LAB_0010bebb:
        uVar11 = incompatible_options(&_LC92);
LAB_0010bec7:
        if (uVar11 != 0xffffff7e) {
switchD_00109b5f_caseD_2:
          usage(2);
          dVar44 = extraout_XMM1_Qa;
          goto LAB_0010b5ab;
        }
        iVar10 = usage(0);
LAB_0010bed9:
        param_2 = (FILE *)((ulong)local_410 & 0xffffffff);
        xstrtol_fatal(iVar10,(ulong)local_410 & 0xffffffff,0xffffff87,long_options,pFVar38);
LAB_0010bef5:
        badfieldspec(_optarg,"stray character in field spec");
        goto LAB_0010bf08;
      case 0x81:
        if (compress_program != (FILE *)0x0) {
          local_418 = _optarg;
          iVar9 = strcmp((char *)compress_program,(char *)_optarg);
          if (iVar9 != 0) {
            pcVar12 = "multiple compress programs specified";
            goto LAB_0010bd7e;
          }
        }
        compress_program = pFVar23;
        iVar9 = tab;
        break;
      case 0x82:
        debug = '\x01';
        break;
      case 0x83:
        local_428 = _optarg;
        break;
      case 0x84:
        local_418 = _optarg;
        local_410 = (FILE *)(local_398.rlim_cur & 0xffffffff);
        uVar11 = xstrtoumax(_optarg,0,10,&local_2d8,&_LC11);
        iVar9 = getrlimit(RLIMIT_NOFILE,local_288);
        pFVar38 = (FILE *)0x11;
        if (iVar9 == 0) {
          pFVar38 = (FILE *)(ulong)((int)local_288[0].rlim_cur - 3);
        }
        if (uVar11 == 0) {
          nmerge = (uint)local_2d8;
          if (local_2d8 < (FILE *)0x100000000) {
            if (nmerge < 2) {
              uVar27 = quote(pFVar23);
              uVar28 = *(undefined8 *)(long_options + (long)iVar10 * 0x20);
              uVar25 = dcgettext(0,"invalid --%s argument %s",5);
                    /* WARNING: Subroutine does not return */
              error(0,0,uVar25,uVar28,uVar27);
            }
            iVar9 = tab;
            if (nmerge <= (uint)pFVar38) break;
          }
LAB_0010a17c:
          uVar27 = quote(pFVar23);
          uVar28 = *(undefined8 *)(long_options + (long)iVar10 * 0x20);
          uVar25 = dcgettext(0,"--%s argument %s too large",5);
                    /* WARNING: Subroutine does not return */
          error(0,0,uVar25,uVar28,uVar27);
        }
        param_2 = (FILE *)(ulong)uVar11;
        if (uVar11 == 1) goto LAB_0010a17c;
        iVar9 = xstrtol_fatal(uVar11,rVar5 & 0xffffffff,0xffffff84,long_options,pFVar23);
LAB_0010a737:
        if (((iVar9 == 2) &&
            (pcVar37 = (char *)CONCAT44(local_288[0].rlim_cur._4_4_,(int)local_288[0].rlim_cur),
            (int)pcVar37[-1] - 0x30U < 10)) && (pcVar37[1] == '\0')) {
          if (*pcVar37 == '%') {
            dVar44 = (double)physmem_total();
            dVar44 = ((double)local_2d8 * dVar44) / __LC107;
            if (dVar44 < _LC108) {
              if (dVar44 < _LC109) {
                local_2d8 = (FILE *)(long)dVar44;
              }
              else {
                local_2d8 = (FILE *)((long)(dVar44 - _LC109) ^ 0x8000000000000000);
              }
              goto LAB_0010a4a5;
            }
          }
          else if (*pcVar37 == 'b') {
LAB_0010a4a5:
            local_410 = (FILE *)(rVar5 & 0xffffffff);
            local_418 = pFVar23;
            iVar9 = tab;
            if ((sort_size <= local_2d8) &&
               (sort_size = (FILE *)((ulong)nmerge * 0x22), sort_size < local_2d8)) {
              sort_size = local_2d8;
            }
            break;
          }
        }
LAB_0010a828:
        local_410 = (FILE *)(rVar5 & 0xffffffff);
        local_418 = pFVar23;
        xstrtol_fatal();
        param_2 = pFVar23;
switchD_00109b5f_caseD_6d:
        bVar43 = true;
        iVar9 = tab;
        break;
      case 0x85:
        if ((local_420 != (FILE *)0x0) &&
           (iVar9 = strcmp((char *)local_420,(char *)_optarg), iVar9 != 0)) {
          pcVar12 = "multiple random sources specified";
          goto LAB_0010bd7e;
        }
        local_420 = pFVar23;
        iVar9 = tab;
        break;
      case 0x86:
        pFVar38 = _argmatch_die;
        lVar33 = __xargmatch_internal
                           ("--sort",_optarg,sort_args,&sort_types,1,_argmatch_die,1,uVar31);
        ppuVar36 = (ushort **)(ulong)(uint)(int)*(char *)((long)&sort_types + lVar33);
switchD_00109b5f_caseD_4d:
        local_78._0_1_ = SUB81(ppuVar36,0);
        local_78._1_1_ = 0;
        set_ordering(&local_78,local_328,2);
        iVar9 = tab;
        break;
      case 0x87:
        local_410 = (FILE *)(local_398.rlim_cur & 0xffffffff);
        local_418 = _optarg;
        pFVar38 = _optarg;
        iVar10 = xstrtoumax(_optarg,0,10,local_288,&_LC11);
        iVar9 = tab;
        if (iVar10 == 1) {
          local_3c8 = (FILE *)0xffffffffffffffff;
        }
        else {
          pFVar38 = pFVar23;
          if (iVar10 != 0) goto LAB_0010bed9;
          local_3c8 = (FILE *)CONCAT44(local_288[0].rlim_cur._4_4_,(int)local_288[0].rlim_cur);
          if (local_3c8 == (FILE *)0x0) {
            pcVar12 = "number in parallel must be nonzero";
            goto LAB_0010bd7e;
          }
        }
      }
      goto LAB_00109a76;
    }
    lVar33 = (long)(int)_optind;
    uVar11 = _optind + 1;
LAB_00109a5f:
    _optind = uVar11;
    local_450[uVar41] = *(long *)(&param_2->_flags + lVar33 * 2);
    uVar41 = uVar41 + 1;
    iVar9 = tab;
  } while( true );
LAB_0010af00:
  cVar8 = fillbuf(&local_2d8,lVar20,lVar33);
  uVar21 = local_2c8;
  if (cVar8 == '\0') {
    uVar11 = 1;
LAB_0010b023:
    xfclose(lVar20,lVar33);
    free(local_2d8);
    free((void *)local_398.rlim_cur);
                    /* WARNING: Subroutine does not return */
    exit(uVar11 ^ 1);
  }
  plVar32 = (long *)((long)&local_2d8->_flags + local_2c0);
  lVar4 = local_2c8 * -4;
  if ((uVar31 != 0) &&
     (iVar9 = compare(&local_398,plVar32 + -4), plVar26 = plVar32, (int)(uVar11 ^ 1) <= iVar9)) {
LAB_0010b016:
    if (cVar7 == 'c') {
      uVar27 = umaxtostr(((long)plVar32 - (long)(plVar26 + -4) >> 5) + (long)local_438,&local_78);
      uVar28 = _program_name;
      uVar25 = dcgettext(0,"%s: %s:%s: disorder: ",5);
      __fprintf_chk(_stderr,2,uVar25,uVar28,lVar33,uVar27);
      uVar28 = dcgettext(0,"standard error",5);
      write_line(plVar26 + -4,_stderr,uVar28);
    }
    uVar11 = 0;
    goto LAB_0010b023;
  }
  plVar6 = plVar32 + -4;
  while (plVar26 = plVar6, plVar32 + lVar4 < plVar26) {
    iVar9 = compare(plVar26,plVar26 + -4);
    plVar6 = plVar26 + -4;
    if ((int)(uVar11 ^ 1) <= iVar9) goto LAB_0010b016;
  }
  __n = plVar26[1];
  local_438 = (rlimit *)((long)local_438 + uVar21);
  uVar21 = uVar31;
  if (uVar31 < __n) {
    do {
      uVar21 = uVar21 * 2;
      uVar31 = __n;
      if (uVar21 == 0) break;
      uVar31 = uVar21;
    } while (uVar21 < __n);
    free((void *)local_398.rlim_cur);
    local_398.rlim_cur = xmalloc(uVar31);
    __n = plVar26[1];
  }
  pvVar22 = memcpy((void *)local_398.rlim_cur,(void *)*plVar26,__n);
  local_398.rlim_max = plVar26[1];
  if (pcVar12 != (char *)0x0) {
    local_388 = (plVar26[2] - *plVar26) + (long)pvVar22;
    lStack_380 = (plVar26[3] - *plVar26) + (long)pvVar22;
  }
  goto LAB_0010af00;
LAB_0010b5ab:
  do {
    pFVar38 = (FILE *)(long)dVar44;
LAB_0010b2e3:
    do {
      size_bound_0 = (FILE *)((ulong)nmerge * 0x22);
      if ((FILE *)((ulong)nmerge * 0x22) < pFVar38) {
        size_bound_0 = pFVar38;
      }
LAB_0010b112:
      do {
        uVar31 = (long)puVar42 * uVar41 + 1;
        pFVar38 = size_bound_0;
        if ((ushort **)uVar41 != (ushort **)(uVar31 / (ulong)puVar42)) goto LAB_0010b3c7;
        if ((ulong)((long)size_bound_0 - (long)param_2) <= uVar31) goto LAB_0010b3c7;
        ppuVar36 = (ushort **)((long)ppuVar36 + 1);
        param_2 = (FILE *)((long)&param_2->_flags + uVar31);
        pFVar38 = param_2;
        if (ppuVar15 == ppuVar36) goto LAB_0010b3c7;
        pcVar12 = (char *)local_450[(long)ppuVar36];
        if ((*pcVar12 == '-') && (pcVar12[1] == '\0')) {
          iVar9 = fstat(0,(stat *)&local_168);
        }
        else {
          iVar9 = stat(pcVar12,(stat *)&local_168);
        }
        if (iVar9 != 0) {
          local_450 = local_450 + (long)ppuVar36;
LAB_0010b18b:
          pcVar12 = "stat failed";
          lVar33 = *local_450;
          goto LAB_0010a587;
        }
        while( true ) {
          if (((local_160.__data.__kind & 0xd000U) == 0x8000) && (0 < pStack_138.__align)) {
            uVar41 = pStack_138.__align;
            pFVar38 = sort_size;
            if (size_bound_0 != (FILE *)0x0) goto LAB_0010b112;
            goto joined_r0x0010b10c;
          }
          pFVar38 = sort_size;
          if (sort_size == (FILE *)0x0) break;
LAB_0010b3c7:
          initbuf(&local_2d8,local_3c0,pFVar38);
          do {
            local_3f0 = &local_2d8;
            local_2a8 = '\0';
            local_3d0 = (ushort **)((long)local_3d0 + -1);
            while (cVar8 = fillbuf(local_3f0,local_428,local_438), cVar7 = local_2a8,
                  lVar33 = local_2c0, uVar31 = local_2c8, pFVar38 = local_2d8, cVar8 != '\0') {
              if (local_2a8 == '\0') {
LAB_0010ab4d:
                saved_line = 0;
                local_440 = local_440 + 1;
                cVar7 = '\0';
                lVar20 = maybe_create_temp_constprop_0(&local_398);
                pFVar23 = (FILE *)(lVar20 + 0xd);
              }
              else {
                if (local_3d0 != (ushort **)0x0) {
                  if ((local_2c0 - local_2d0) - local_3c0 * local_2c8 <= local_3c0 + 1U)
                  goto LAB_0010ab4d;
                  local_2b8 = local_2d0;
                  xfclose(local_428,local_438);
                  goto LAB_0010ae6c;
                }
                saved_line = 0;
                if (local_440 != 0 || local_2b8 != 0) goto LAB_0010ab4d;
                xfclose(local_428);
                uVar21 = stream_open_constprop_0(local_3e0);
                if (uVar21 == 0) {
                  xfopen_part_0(local_3e0);
                  goto LAB_0010c0d0;
                }
                local_440 = 0;
                pFVar23 = local_3e0;
                uVar31 = local_2c8;
                local_398.rlim_cur = uVar21;
              }
              rVar5 = local_398.rlim_cur;
              puVar18 = (undefined *)((long)&pFVar38->_flags + lVar33);
              if (uVar31 < 2) {
                if (unique != 0) {
                  if ((saved_line != 0) &&
                     (iVar9 = compare(puVar18 + -0x20,&saved_line), iVar9 == 0)) goto LAB_0010acab;
                  saved_line = *(long *)(puVar18 + -0x20);
                  uRam0000000000107308 = *(undefined8 *)(puVar18 + -0x18);
                  _DAT_00107310 = *(undefined8 *)(puVar18 + -0x10);
                  uRam0000000000107318 = *(undefined8 *)(puVar18 + -8);
                }
                write_line(puVar18 + -0x20,rVar5,pFVar23);
              }
              else {
                local_168.sa_handler = (__sighandler_t)heap_alloc(compare_nodes);
                pthread_mutex_init(&local_160,(pthread_mutexattr_t *)0x0);
                pthread_cond_init(&pStack_138,(pthread_condattr_t *)0x0);
                __ptr = (undefined1 (*) [16])xmalloc(local_3d8);
                *__ptr = (undefined1  [16])0x0;
                __ptr[1] = (undefined1  [16])0x0;
                *(undefined8 *)__ptr[2] = 0;
                *(undefined8 *)(__ptr[3] + 8) = 0;
                *(undefined4 *)__ptr[5] = 0;
                __ptr[5][4] = 0;
                *(ulong *)(__ptr[2] + 8) = uVar31;
                *(ulong *)__ptr[3] = uVar31;
                pthread_mutex_init((pthread_mutex_t *)(__ptr[5] + 8),(pthread_mutexattr_t *)0x0);
                init_node(__ptr,__ptr + 8,puVar18,local_420,uVar31,0);
                sortlines(puVar18,local_420,uVar31,__ptr + 8,&local_168,rVar5,pFVar23);
                __mutex = (pthread_mutex_t *)(__ptr[5] + 8);
                for (pFVar39 = local_418; pFVar39 != (FILE *)0x0;
                    pFVar39 = (FILE *)(pFVar39[-1]._unused2 + 0x13)) {
                  pthread_mutex_destroy(__mutex);
                  __mutex = (pthread_mutex_t *)((long)__mutex + 0x80);
                }
                free(__ptr);
                heap_free(local_168.sa_handler);
                pthread_cond_destroy(&pStack_138);
                pthread_mutex_destroy(&local_160);
              }
LAB_0010acab:
              xfclose(rVar5,pFVar23);
              if (cVar7 != '\0') {
                free(pFVar38);
                goto joined_r0x0010acd0;
              }
            }
            xfclose(local_428,local_438);
            if (local_3d0 == (ushort **)0x0) goto LAB_0010bb34;
LAB_0010ae6c:
            local_450 = local_450 + 1;
LAB_0010aa40:
            local_438 = (rlimit *)*local_450;
            local_428 = (FILE *)stream_open(local_438,local_3b8);
            if (local_428 == (FILE *)0x0) {
LAB_0010c0d0:
              xfopen_part_0(local_438);
              goto LAB_0010c0da;
            }
            local_3c0 = 0x30;
            if ((FILE *)0x1 < local_3c8) {
              lVar33 = 1;
              pFVar38 = (FILE *)0x1;
              do {
                pFVar38 = (FILE *)((long)pFVar38 * 2);
                lVar33 = lVar33 + 1;
              } while (pFVar38 < local_420);
              local_3c0 = lVar33 * 0x20;
            }
          } while (local_2c0 != 0);
          puVar42 = (undefined1 *)(local_3c0 + 1);
          param_2 = (FILE *)(local_3c0 + 2);
          iVar9 = fileno(local_428);
          iVar9 = fstat(iVar9,(stat *)&local_168);
          if (iVar9 != 0) goto LAB_0010b18b;
          __rlimits = &local_398;
          ppuVar36 = (ushort **)0x0;
          ppuVar15 = local_3d0;
        }
        pFVar38 = size_bound_0;
        uVar41 = (longlong)(ushort **)0x20000;
joined_r0x0010b10c:
        size_bound_0 = pFVar38;
      } while (size_bound_0 != (FILE *)0x0);
      iVar9 = getrlimit(RLIMIT_DATA,__rlimits);
      uVar31 = 0xffffffffffffffff;
      if (iVar9 == 0) {
        uVar31 = local_398.rlim_cur;
      }
      iVar9 = getrlimit(RLIMIT_AS,__rlimits);
      if ((iVar9 == 0) && (local_398.rlim_cur < uVar31)) {
        uVar31 = local_398.rlim_cur;
      }
      pFVar38 = (FILE *)(uVar31 >> 1);
      iVar9 = getrlimit(__RLIMIT_RSS,__rlimits);
      if ((iVar9 == 0) && (pFVar23 = (FILE *)((local_398.rlim_cur >> 4) * 0xf), pFVar23 < pFVar38))
      {
        pFVar38 = pFVar23;
      }
      dVar44 = (double)physmem_available();
      dVar45 = (double)physmem_total();
      dVar46 = dVar45 * __LC154;
      if (dVar44 <= _LC153 * dVar45) {
        dVar44 = _LC153 * dVar45;
      }
      if (dVar46 < (double)(long)pFVar38) {
        if (dVar46 < _LC109) {
          pFVar38 = (FILE *)(long)dVar46;
        }
        else {
          pFVar38 = (FILE *)((long)(dVar46 - _LC109) ^ 0x8000000000000000);
        }
      }
    } while ((double)pFVar38 <= dVar44);
  } while (dVar44 < _LC109);
  pFVar38 = (FILE *)((long)(dVar44 - _LC109) ^ 0x8000000000000000);
  goto LAB_0010b2e3;
LAB_0010bb34:
  free(local_2d8);
  puVar35 = temphead;
  plVar26 = (long *)xnmalloc(local_440,0x10);
  plVar32 = plVar26;
  while (puVar35 != (undefined8 *)0x0) {
    plVar32[1] = (long)puVar35;
    lVar33 = (long)puVar35 + 0xd;
    puVar35 = (undefined8 *)*puVar35;
    *plVar32 = lVar33;
    plVar32 = plVar32 + 2;
  }
  merge(plVar26,local_440,local_440,local_3e0);
  free(plVar26);
joined_r0x0010acd0:
  while (0 < nprocs) {
    reap_constprop_0_isra_0();
  }
  goto LAB_0010ace7;
  while( true ) {
    local_3d0 = (ushort **)((long)ppuVar15 + 1);
    plVar32 = plVar32 + 1;
    if ((ushort **)uVar41 == local_3d0) break;
LAB_0010a562:
    ppuVar15 = local_3d0;
    pcVar12 = (char *)*plVar32;
    if (((*pcVar12 != '-') || (pcVar12[1] != '\0')) && (iVar9 = euidaccess(pcVar12,4), iVar9 != 0))
    {
      lVar33 = *plVar32;
      pcVar12 = "cannot read";
LAB_0010a587:
      uVar28 = dcgettext(0,pcVar12,5);
                    /* WARNING: Subroutine does not return */
      sort_die(uVar28,lVar33);
    }
  }
  if (local_3e0 != (FILE *)0x0) {
    iVar9 = open((char *)local_3e0,0x80041,0x1b6);
    if (iVar9 < 0) {
LAB_0010c0da:
      uVar28 = dcgettext(0,"open failed",5);
                    /* WARNING: Subroutine does not return */
      sort_die(uVar28,local_3e0);
    }
    if (iVar9 != 1) {
      move_fd_part_0(iVar9,1);
    }
  }
  if (!bVar43) {
    if (local_3c8 == (FILE *)0x0) {
      pFVar38 = (FILE *)num_processors();
      local_3c8 = (FILE *)0x8;
      if (pFVar38 < (FILE *)0x9) {
        local_3c8 = pFVar38;
      }
    }
    local_420 = (FILE *)0xffffffffffffff;
    if (local_3c8 < (FILE *)0x100000000000000) {
      local_420 = local_3c8;
    }
    local_2c0 = 0;
    local_418 = (FILE *)((long)local_420 * 2);
    local_3d8 = (long)local_420 << 8;
    local_440 = 0;
    local_3b8 = &_LC32;
    goto LAB_0010aa40;
  }
  lVar33 = xcalloc(local_3d0,0x10);
  ppuVar36 = (ushort **)0x0;
  do {
    *(long *)(lVar33 + (long)ppuVar36 * 0x10) = local_450[(long)ppuVar36];
    bVar43 = ppuVar15 != ppuVar36;
    ppuVar36 = (ushort **)((long)ppuVar36 + 1);
  } while (bVar43);
  merge(lVar33,0,local_3d0,local_3e0);
LAB_0010ace7:
  if ((have_read_stdin != '\0') && (iVar9 = rpl_fclose(_stdin), iVar9 == -1)) {
    uVar28 = dcgettext(0,"close failed",5);
                    /* WARNING: Subroutine does not return */
    sort_die(uVar28,&_LC147);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
LAB_0010c068:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


