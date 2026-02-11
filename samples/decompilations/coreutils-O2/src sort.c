
ulong proctab_hasher(long param_1,ulong param_2)

{
  return (ulong)(long)*(int *)(param_1 + 8) % param_2;
}



undefined4 proctab_comparator(long param_1,long param_2)

{
  return CONCAT31((int3)((uint)*(int *)(param_2 + 8) >> 8),
                  *(int *)(param_1 + 8) == *(int *)(param_2 + 8));
}



int traverse_raw_number(long *param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  char *pcVar7;
  
  pcVar7 = (char *)*param_1;
  cVar6 = *pcVar7;
  iVar4 = (int)cVar6;
  pcVar3 = pcVar7 + 1;
  if (iVar4 - 0x30U < 10) {
    iVar5 = 0;
    do {
      if ((char)iVar5 < (char)iVar4) {
        iVar5 = iVar4;
      }
      pcVar1 = pcVar7 + 1;
      pcVar2 = pcVar3;
      if (thousands_sep == *pcVar1) {
        pcVar2 = pcVar7 + 2;
      }
      cVar6 = *pcVar2;
      iVar4 = (int)cVar6;
      pcVar3 = pcVar2 + 1;
      pcVar7 = pcVar2;
    } while (iVar4 - 0x30U < 10);
    if (thousands_sep != *pcVar1) goto LAB_001000a2;
  }
  else {
    iVar5 = 0;
LAB_001000a2:
    pcVar2 = pcVar3;
    if (decimal_point == cVar6) {
      iVar4 = (int)*pcVar3;
      if (iVar4 - 0x30U < 10) {
        do {
          pcVar3 = pcVar3 + 1;
          if ((char)iVar5 < (char)iVar4) {
            iVar5 = iVar4;
          }
          iVar4 = (int)*pcVar3;
        } while (iVar4 - 0x30U < 10);
        *param_1 = (long)pcVar3;
        return iVar5;
      }
      goto LAB_00100085;
    }
  }
  pcVar3 = pcVar2 + -1;
LAB_00100085:
  *param_1 = (long)pcVar3;
  return iVar5;
}



undefined4 getmonth(byte *param_1,undefined8 *param_2)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  cVar1 = (&blanks)[*param_1];
  while (cVar1 != '\0') {
    pbVar4 = param_1 + 1;
    param_1 = param_1 + 1;
    cVar1 = (&blanks)[*pbVar4];
  }
  uVar7 = 0;
  uVar6 = 0xc;
  do {
    uVar5 = uVar7 + uVar6 >> 1;
    pbVar4 = (&monthtab)[uVar5 * 2];
    bVar2 = *pbVar4;
    pbVar3 = param_1;
    while( true ) {
      if (bVar2 == 0) {
        if (param_2 != (undefined8 *)0x0) {
          *param_2 = pbVar3;
        }
        return *(undefined4 *)(&DAT_0010ac48 + uVar5 * 0x10);
      }
      if ((byte)(&fold_toupper)[*pbVar3] < bVar2) goto LAB_00100175;
      if (bVar2 < (byte)(&fold_toupper)[*pbVar3]) break;
      bVar2 = pbVar4[1];
      pbVar4 = pbVar4 + 1;
      pbVar3 = pbVar3 + 1;
    }
    uVar7 = uVar5 + 1;
    uVar5 = uVar6;
LAB_00100175:
    uVar6 = uVar5;
    if (uVar5 <= uVar7) {
      return 0;
    }
  } while( true );
}



byte default_key_compare(long param_1)

{
  if ((*(long *)(param_1 + 0x20) == 0) && (*(long *)(param_1 + 0x28) == 0)) {
    if (*(char *)(param_1 + 0x30) != '\0') {
      return 0;
    }
    if ((*(char *)(param_1 + 0x31) == '\0') && ((*(ulong *)(param_1 + 0x30) & 0xffff00ff0000) == 0))
    {
      if (*(char *)(param_1 + 0x36) != '\0') {
        return 0;
      }
      if (*(char *)(param_1 + 0x38) == '\0') {
        return *(byte *)(param_1 + 0x33) ^ 1;
      }
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



void set_ordering(char *param_1,long param_2,uint param_3)

{
  char *pcVar1;
  char cVar2;
  
  cVar2 = *param_1;
  while (cVar2 != '\0') {
    switch(cVar2) {
    case 'M':
      *(undefined1 *)(param_2 + 0x36) = 1;
      break;
    default:
      goto switchD_001002da_caseD_4e;
    case 'R':
      *(undefined1 *)(param_2 + 0x33) = 1;
      break;
    case 'V':
      *(undefined1 *)(param_2 + 0x38) = 1;
      break;
    case 'b':
      if (((param_3 & 0xfffffffd) != 0) || (*(undefined1 *)(param_2 + 0x30) = 1, param_3 == 2)) {
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
    pcVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    cVar2 = *pcVar1;
  }
switchD_001002da_caseD_4e:
  return;
}



void struct_month_cmp(undefined8 *param_1,undefined8 *param_2)

{
  strcmp((char *)*param_1,(char *)*param_2);
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



void insertkey(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  lVar2 = xmemdup(param_1,0x48);
  plVar3 = &keylist;
  lVar1 = keylist;
  if (keylist != 0) {
    do {
      lVar4 = lVar1;
      lVar1 = *(long *)(lVar4 + 0x40);
    } while (lVar1 != 0);
    plVar3 = (long *)(lVar4 + 0x40);
  }
  *plVar3 = lVar2;
  *(undefined8 *)(lVar2 + 0x40) = 0;
  return;
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
  uVar1 = xstrtoumax(param_1,&local_30,10,&local_28,&_LC2);
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
LAB_001006c8:
      uVar1 = dcgettext(0,pcVar3,5);
                    /* WARNING: Subroutine does not return */
      sort_die(uVar1,param_2);
    }
  }
  else {
    iVar2 = rpl_fclose(param_1);
    if (iVar2 != 0) {
      pcVar3 = "close failed";
      goto LAB_001006c8;
    }
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
    iVar2 = fstat(1,(stat *)outstat_3);
    if (iVar2 != 0) {
      outstat_errno_4 = *piVar4;
      goto LAB_001007b5;
    }
    outstat_errno_4 = -1;
  }
  else {
LAB_001007b5:
    if (-1 < outstat_errno_4) goto LAB_001007cf;
  }
  if ((outstat_3._24_4_ & 0xf000) != 0x8000) {
    return _stdout;
  }
LAB_001007cf:
  uVar5 = quotearg_n_style_colon(0,3,param_1);
  uVar6 = dcgettext(0,"%s: error truncating",5);
                    /* WARNING: Subroutine does not return */
  error(2,iVar1,uVar6,uVar5);
}



void link_failure(void)

{
  undefined8 uVar1;
  
  uVar1 = dlerror();
                    /* WARNING: Subroutine does not return */
  error(2,0,&_LC11,uVar1);
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



__pid_t reap(int param_1)

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
      if (lVar2 == 0) goto LAB_00100a12;
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
LAB_00100a12:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return _Var1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
  write(2,&_LC18,1);
                    /* WARNING: Subroutine does not return */
  _exit(2);
}



long * register_proc(long *param_1,undefined8 param_2,undefined8 param_3,code *param_4,long param_5,
                    undefined8 param_6)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long extraout_RDX;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if (proctab == (long *)0x0) {
    param_5 = 0;
    param_4 = proctab_comparator;
    plVar4 = (long *)0x0;
    plVar3 = (long *)hash_initialize(0x2f,0,0x100000);
    proctab = plVar3;
    if (plVar3 == (long *)0x0) goto LAB_00100bd4;
  }
  plVar3 = proctab;
  *(undefined1 *)((long)param_1 + 0xc) = 1;
  plVar2 = (long *)hash_insert();
  plVar4 = param_1;
  if (plVar2 != (long *)0x0) {
    return plVar2;
  }
LAB_00100bd4:
  xalloc_die();
  lVar8 = extraout_RDX;
  while( true ) {
    plVar2 = plVar4;
    lVar7 = lVar8 + param_5 * -0x20;
    if ((char)param_6 == '\0') {
      uVar5 = (ulong)plVar3[6] >> 1;
      lVar6 = plVar3[6] - uVar5;
      lVar8 = lVar8 + param_5 * -0x20 + uVar5 * -0x20;
      plVar4 = plVar3 + 3;
    }
    else {
      uVar5 = (ulong)plVar3[5] >> 1;
      lVar6 = plVar3[5] - uVar5;
      lVar8 = lVar7 + uVar5 * -0x20;
      plVar4 = plVar3 + 2;
    }
    plVar2[7] = (long)plVar3;
    lVar1 = plVar3[10];
    plVar2[6] = lVar6;
    plVar2[4] = (long)plVar4;
    plVar3 = plVar2 + 0x10;
    plVar2[5] = uVar5;
    *(int *)(plVar2 + 10) = (int)lVar1 + 1;
    *(undefined1 *)((long)plVar2 + 0x54) = 0;
    *plVar2 = lVar7;
    plVar2[1] = lVar8;
    plVar2[2] = lVar7;
    plVar2[3] = lVar8;
    pthread_mutex_init((pthread_mutex_t *)(plVar2 + 0xb),(pthread_mutexattr_t *)0x0);
    if (param_4 < (code *)0x2) break;
    plVar2[8] = (long)plVar3;
    uVar5 = (ulong)param_4 >> 1;
    param_4 = param_4 + -uVar5;
    plVar4 = (long *)init_node(plVar2,plVar3,lVar7,uVar5,param_5);
    plVar2[9] = (long)plVar4;
    param_6 = 0;
    plVar3 = plVar2;
  }
  *(undefined1 (*) [16])(plVar2 + 8) = (undefined1  [16])0x0;
  return plVar3;
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



void xfopen_part_0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = dcgettext(0,"open failed",5);
                    /* WARNING: Subroutine does not return */
  sort_die(uVar1,param_1);
}



void move_fd_part_0(int param_1,int param_2)

{
  dup2(param_1,param_2);
  close(param_1);
  return;
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
LAB_00100e98:
      while (param_1 < pbVar2) {
        while ((&blanks)[*param_1] != '\0') {
          param_1 = param_1 + 1;
          if (pbVar2 == param_1) goto LAB_00100e70;
        }
        if (pbVar2 <= param_1) break;
        while ((&blanks)[*param_1] == '\0') {
          param_1 = param_1 + 1;
          if (pbVar2 == param_1) goto LAB_00100de8;
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
LAB_00100e39:
        while ((char)*param_1 != tab) {
          param_1 = param_1 + 1;
          if (pbVar2 == param_1) {
LAB_00100e70:
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
LAB_00100de8:
    if (lVar1 == 0) {
      return param_1;
    }
    if ((*(char *)(param_3 + 0x31) == '\0') || (pbVar2 <= param_1)) goto LAB_00100df7;
  }
  else {
    if (tab == 0x80) {
      if (pbVar2 <= param_1) goto LAB_00100df7;
      lVar4 = lVar3 + -1;
      if (lVar3 == 0) goto LAB_00100f3b;
      goto LAB_00100e98;
    }
    if (pbVar2 <= param_1) goto LAB_00100df7;
    if (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      if (param_1 < pbVar2) goto LAB_00100e39;
      goto LAB_00100de8;
    }
LAB_00100f3b:
    if (*(char *)(param_3 + 0x31) == '\0') goto LAB_00100df7;
  }
  do {
    if ((&blanks)[*param_1] == '\0') break;
    param_1 = param_1 + 1;
  } while (pbVar2 != param_1);
LAB_00100df7:
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
        if (bVar2) goto LAB_00100fa8;
        while ((&blanks)[*param_1] != '\0') {
          param_1 = param_1 + 1;
          if (pbVar3 == param_1) goto LAB_00100fd2;
        }
        if (pbVar3 <= param_1) goto LAB_00101040;
        while ((&blanks)[*param_1] == '\0') {
          param_1 = param_1 + 1;
          if (pbVar3 == param_1) goto LAB_00101040;
        }
      } while (param_1 < pbVar3);
    }
  }
  else if (param_1 < pbVar3) {
    do {
      bVar2 = lVar1 == 0;
      lVar1 = lVar1 + -1;
      if (bVar2) goto LAB_00100fa8;
      while (tab != (char)*param_1) {
        param_1 = param_1 + 1;
        if (pbVar3 == param_1) goto LAB_00100fd2;
      }
      if (pbVar3 <= param_1) goto LAB_00101040;
      param_1 = param_1 + 1;
    } while (param_1 < pbVar3);
  }
  goto LAB_00100fd2;
LAB_00100fa8:
  if ((char)param_3[6] == '\0') goto LAB_00100fd2;
  goto LAB_00100fc9;
LAB_00101040:
  if (((char)param_3[6] == '\0') || (pbVar3 <= param_1)) goto LAB_00100fd2;
LAB_00100fc9:
  do {
    if ((&blanks)[*param_1] == '\0') break;
    param_1 = param_1 + 1;
  } while (pbVar3 != param_1);
LAB_00100fd2:
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
            if ((byte *)*param_1 == local_80) goto LAB_0010122d;
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
      if (lVar9 != 0) goto LAB_0010139b;
      local_48 = (ulong)param_1[3] >> 5;
      pbVar11 = (byte *)xpalloc(lVar14,&local_48,1,0xffffffffffffffff,0x20);
      lVar14 = local_48 << 5;
      *param_1 = (long)pbVar11;
      sVar12 = param_1[1];
      param_1[3] = lVar14;
      lVar9 = param_1[2];
    } while( true );
  }
LAB_0010122d:
  uVar7 = 0;
LAB_0010122f:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0010139b:
  merge_buffer_size = uVar10 + 0x22;
  uVar7 = 1;
  param_1[4] = (long)__ptr - (long)pbVar11;
  goto LAB_0010122f;
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_line(undefined8 *param_1,_IO_FILE *param_2,long param_3)

{
  size_t __n;
  char *pcVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  size_t sVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined8 uVar9;
  long lVar10;
  byte *pbVar11;
  byte *pbVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long in_FS_OFFSET;
  byte *local_50;
  byte *local_48;
  long local_40;
  
  pbVar7 = (byte *)*param_1;
  __n = param_1[1];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pbVar8 = pbVar7 + __n;
  if ((param_3 != 0) || (plVar14 = keylist, debug == '\0')) {
    pbVar8[-1] = eolchar;
    sVar6 = fwrite_unlocked(pbVar7,1,__n,param_2);
    if (__n != sVar6) {
      uVar9 = dcgettext(0,"write failed",5);
                    /* WARNING: Subroutine does not return */
      sort_die(uVar9,param_3);
    }
    pbVar8[-1] = 0;
LAB_001014a0:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
joined_r0x001014d7:
  do {
    keylist = plVar14;
    if (pbVar8 <= pbVar7) {
      pbVar7 = (byte *)*param_1;
      lVar15 = param_1[1];
      pbVar8 = pbVar7 + lVar15 + -1;
      if (plVar14 == (long *)0x0) goto LAB_00101717;
      lVar13 = *plVar14;
      lVar10 = plVar14[2];
      pbVar11 = pbVar7;
      if (lVar13 == -1) goto LAB_0010181d;
LAB_00101510:
      pbVar7 = (byte *)begfield_isra_0(pbVar11,lVar15,plVar14);
      if (lVar10 == -1) goto LAB_00101557;
      do {
        pbVar8 = (byte *)limfield_isra_0(pbVar11,lVar15,plVar14);
        if (pbVar8 <= pbVar7) {
          pbVar8 = pbVar7;
        }
        do {
          if (((char)plVar14[6] == '\0') || (lVar13 != -1)) {
LAB_00101557:
            if ((*(char *)((long)plVar14 + 0x36) != '\0') || ((plVar14[6] & 0xffff00ff0000U) != 0))
            goto LAB_00101574;
          }
          else {
LAB_00101574:
            bVar3 = *pbVar8;
            *pbVar8 = 0;
            cVar2 = (&blanks)[*pbVar7];
            while (cVar2 != '\0') {
              pbVar12 = pbVar7 + 1;
              pbVar7 = pbVar7 + 1;
              cVar2 = (&blanks)[*pbVar12];
            }
            local_50 = pbVar8;
            if (pbVar7 <= pbVar8) {
              if (*(char *)((long)plVar14 + 0x36) == '\0') {
                if (*(char *)((long)plVar14 + 0x34) == '\0') {
                  if ((plVar14[6] & 0xff0000ff0000U) != 0) {
                    local_48 = pbVar7;
                    if (pbVar7 < pbVar8) {
                      local_48 = pbVar7 + (*pbVar7 == 0x2d);
                    }
                    local_50 = pbVar7;
                    cVar2 = traverse_raw_number(&local_48);
                    if (('/' < cVar2) &&
                       (local_50 = local_48, *(char *)((long)plVar14 + 0x35) != '\0')) {
                      local_50 = local_48 + (unit_order[*local_48] != '\0');
                    }
                  }
                }
                else {
                  local_50 = pbVar7;
                  strtold((char *)pbVar7,(char **)&local_50);
                }
              }
              else {
                local_50 = pbVar7;
                getmonth(pbVar7,&local_50);
              }
            }
            *pbVar8 = bVar3;
            pbVar8 = local_50;
          }
          iVar4 = mbsnwidth(pbVar11,(long)pbVar7 - (long)pbVar11,0);
          lVar15 = (long)iVar4;
          if (pbVar11 < pbVar7) {
            do {
              pbVar12 = pbVar11 + 1;
              lVar15 = lVar15 + (ulong)(*pbVar11 == 9);
              pbVar11 = pbVar12;
            } while (pbVar7 != pbVar12);
          }
          while( true ) {
            iVar4 = mbsnwidth(pbVar7,(long)pbVar8 - (long)pbVar7,0);
            lVar13 = (long)iVar4;
            if (pbVar7 < pbVar8) {
              do {
                pbVar11 = pbVar7 + 1;
                lVar13 = lVar13 + (ulong)(*pbVar7 == 9);
                pbVar7 = pbVar11;
              } while (pbVar8 != pbVar11);
            }
            while (lVar15 != 0) {
              lVar15 = lVar15 + -1;
              pcVar1 = _stdout->_IO_write_ptr;
              if (pcVar1 < _stdout->_IO_write_end) {
                _stdout->_IO_write_ptr = pcVar1 + 1;
                *pcVar1 = ' ';
              }
              else {
                __overflow(_stdout,0x20);
              }
            }
            if (lVar13 == 0) {
              uVar9 = dcgettext(0,"^ no match for key\n",5);
              __printf_chk(2,uVar9);
            }
            else {
              do {
                pcVar1 = _stdout->_IO_write_ptr;
                if (pcVar1 < _stdout->_IO_write_end) {
                  _stdout->_IO_write_ptr = pcVar1 + 1;
                  *pcVar1 = '_';
                }
                else {
                  __overflow(_stdout,0x5f);
                }
                lVar13 = lVar13 + -1;
              } while (lVar13 != 0);
              pcVar1 = _stdout->_IO_write_ptr;
              if (pcVar1 < _stdout->_IO_write_end) {
                _stdout->_IO_write_ptr = pcVar1 + 1;
                *pcVar1 = '\n';
              }
              else {
                __overflow(_stdout,10);
              }
            }
            if (plVar14 == (long *)0x0) goto LAB_001014a0;
            plVar14 = (long *)plVar14[8];
            if (plVar14 != (long *)0x0) break;
            if ((unique != '\0') || (stable != '\0')) goto LAB_001014a0;
            pbVar7 = (byte *)*param_1;
            pbVar8 = pbVar7 + param_1[1] + -1;
LAB_00101717:
            plVar14 = (long *)0x0;
            iVar4 = mbsnwidth(pbVar7,0,0);
            lVar15 = (long)iVar4;
          }
          pbVar11 = (byte *)*param_1;
          lVar15 = param_1[1];
          lVar13 = *plVar14;
          lVar10 = plVar14[2];
          pbVar8 = pbVar11 + lVar15 + -1;
          pbVar7 = pbVar11;
          if (lVar13 != -1) goto LAB_00101510;
LAB_0010181d:
          pbVar11 = pbVar7;
        } while (lVar10 == -1);
      } while( true );
    }
    bVar3 = *pbVar7;
    uVar5 = (uint)bVar3;
    pbVar7 = pbVar7 + 1;
    if (bVar3 == 9) {
      pbVar11 = (byte *)param_2->_IO_write_ptr;
      uVar5 = 0x3e;
      bVar3 = 0x3e;
      if (pbVar11 < param_2->_IO_write_end) {
LAB_0010167a:
        param_2->_IO_write_ptr = (char *)(pbVar11 + 1);
        *pbVar11 = bVar3;
        plVar14 = keylist;
        goto joined_r0x001014d7;
      }
    }
    else {
      if (pbVar8 == pbVar7) {
        uVar5 = 10;
        bVar3 = 10;
      }
      pbVar11 = (byte *)param_2->_IO_write_ptr;
      if (pbVar11 < param_2->_IO_write_end) goto LAB_0010167a;
    }
    iVar4 = __overflow(param_2,uVar5);
    plVar14 = keylist;
    if (iVar4 == -1) {
      uVar9 = dcgettext(0,"write failed",5);
                    /* WARNING: Subroutine does not return */
      sort_die(uVar9,0);
    }
  } while( true );
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
      reap();
      do {
        if ((int)nprocs < 1) break;
        iVar2 = reap();
      } while (iVar2 != 0);
    }
    param_2 = param_2 + -1;
    local_e0 = _LC24;
    do {
      iVar3 = pthread_sigmask(0,(__sigset_t *)caught_signals,&local_c0);
      uVar1 = temphead;
      temphead = 0;
      _Var4 = fork();
      piVar5 = __errno_location();
      iVar2 = *piVar5;
      if (_Var4 != 0) {
        temphead = uVar1;
        if (iVar3 == 0) goto LAB_00101a88;
        *piVar5 = iVar2;
        if (_Var4 < 0) goto LAB_00101a1a;
        goto LAB_00101ab0;
      }
      if (iVar3 != 0) {
LAB_001019c0:
        _Var4 = 0;
        close(0);
        close(1);
        goto LAB_001019d4;
      }
LAB_00101a88:
      pthread_sigmask(2,&local_c0,(__sigset_t *)0x0);
      *piVar5 = iVar2;
      if (-1 < _Var4) {
LAB_00101ab0:
        if (_Var4 == 0) goto LAB_001019c0;
        nprocs = nprocs + 1;
        goto LAB_001019d4;
      }
LAB_00101a1a:
      if (iVar2 != 0xb) {
        if (-1 < _Var4) goto LAB_00101ab0;
        break;
      }
      xnanosleep(local_e0);
      local_e0 = local_e0 + local_e0;
      do {
        if ((int)nprocs < 1) break;
        iVar2 = reap();
      } while (iVar2 != 0);
      bVar6 = param_2 != 0;
      param_2 = param_2 + -1;
    } while (bVar6);
    iVar2 = *piVar5;
    close(*param_1);
    close(param_1[1]);
    *piVar5 = iVar2;
  }
LAB_001019d4:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return _Var4;
}



long open_input_files(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  FILE *pFVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int *piVar11;
  long lVar12;
  long in_FS_OFFSET;
  int local_58;
  int local_54;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar4 = (long *)xnmalloc(param_2);
  *param_3 = plVar4;
  if (param_2 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = 0;
    plVar7 = plVar4;
    do {
      lVar5 = param_1[1];
      if ((lVar5 == 0) || (*(char *)(lVar5 + 0xc) == '\0')) {
        lVar5 = stream_open(*param_1);
        *plVar7 = lVar5;
        if (lVar5 == 0) break;
      }
      else {
        if (*(char *)(lVar5 + 0xc) == '\x01') {
          uVar1 = *(undefined4 *)(lVar5 + 8);
          local_50 = uVar1;
          lVar8 = hash_remove(proctab);
          if (lVar8 != 0) {
            *(undefined1 *)(lVar8 + 0xc) = 2;
            reap(uVar1);
          }
        }
        iVar2 = open((char *)(lVar5 + 0xd),0);
        if (iVar2 < 0) {
          plVar4[lVar12] = 0;
          break;
        }
        iVar3 = pipe_fork(&local_58,9);
        if (iVar3 == -1) {
          plVar7 = (long *)__errno_location();
          if ((int)*plVar7 != 0x18) {
LAB_00101d30:
            uVar9 = quotearg_style(4,compress_program);
            uVar10 = dcgettext(0,"couldn\'t create process for %s -d",5);
                    /* WARNING: Subroutine does not return */
            error(2,(int)*plVar7,uVar10,uVar9);
          }
          close(iVar2);
          *(undefined4 *)plVar7 = 0x18;
          plVar4[lVar12] = 0;
          break;
        }
        if (iVar3 == 0) {
          close(local_58);
          if (iVar2 != 0) {
            move_fd_part_0(iVar2,0);
          }
          if (local_54 != 1) {
            move_fd_part_0(local_54,1);
          }
          execlp(compress_program,compress_program,&_LC26,0);
          piVar11 = __errno_location();
          async_safe_die(*piVar11,"couldn\'t execute compress program (with -d)");
          goto LAB_00101d30;
        }
        *(int *)(lVar5 + 8) = iVar3;
        register_proc(lVar5);
        close(iVar2);
        close(local_54);
        pFVar6 = fdopen(local_58,"r");
        if (pFVar6 == (FILE *)0x0) {
          piVar11 = __errno_location();
          iVar2 = *piVar11;
          close(local_58);
          *piVar11 = iVar2;
          *plVar7 = 0;
          break;
        }
        *plVar7 = (long)pFVar6;
      }
      lVar12 = lVar12 + 1;
      param_1 = param_1 + 2;
      plVar7 = plVar7 + 1;
    } while (param_2 != lVar12);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 * maybe_create_temp(undefined8 *param_1,char param_2)

{
  ulong uVar1;
  long lVar2;
  char *__s;
  int iVar3;
  int iVar4;
  size_t sVar5;
  undefined8 *__ptr;
  int *piVar6;
  FILE *pFVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long in_FS_OFFSET;
  bool bVar13;
  int local_c8;
  int local_c4;
  __sigset_t local_c0;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  __s = *(char **)(temp_dirs + temp_dir_index_2 * 8);
  sVar5 = strlen(__s);
  uVar12 = sVar5 + 0x20 & 0xfffffffffffffff8;
  __ptr = (undefined8 *)xmalloc(uVar12);
  uVar1 = uVar12 - 0xd;
  lVar2 = (long)__ptr + 0xd;
  __memcpy_chk(lVar2,__s,sVar5,uVar1);
  if (uVar12 < uVar1) {
    uVar12 = uVar1;
  }
  uVar10 = (sVar5 + uVar12) - uVar1;
  if (uVar10 < uVar12) {
    uVar10 = uVar12;
  }
  __memcpy_chk(lVar2 + sVar5,"/sortXXXXXX",0xc,uVar10 + (uVar1 - (sVar5 + uVar12)));
  *__ptr = 0;
  temp_dir_index_2 = temp_dir_index_2 + 1;
  if (temp_dir_index_2 == temp_dir_count) {
    temp_dir_index_2 = 0;
  }
  iVar3 = pthread_sigmask(0,(__sigset_t *)caught_signals,&local_c0);
  local_c8 = CONCAT31(local_c8._1_3_,iVar3 == 0);
  iVar3 = mkostemp_safer(lVar2,0x80000);
  if (iVar3 < 0) {
    piVar6 = __errno_location();
    iVar3 = *piVar6;
    if ((char)local_c8 != '\0') {
      pthread_sigmask(2,&local_c0,(__sigset_t *)0x0);
      *piVar6 = iVar3;
    }
    if ((param_2 != '\x01') || (iVar3 != 0x18)) {
      uVar8 = quotearg_style(4,__s);
      uVar9 = dcgettext(0,"cannot create temporary file in %s",5);
                    /* WARNING: Subroutine does not return */
      error(2,*piVar6,uVar9,uVar8);
    }
    puVar11 = (undefined8 *)0x0;
    free(__ptr);
  }
  else {
    puVar11 = __ptr;
    *(undefined8 **)temptail = __ptr;
    temptail = (undefined *)puVar11;
    piVar6 = __errno_location();
    if ((char)local_c8 != '\0') {
      iVar4 = *piVar6;
      pthread_sigmask(2,&local_c0,(__sigset_t *)0x0);
      *piVar6 = iVar4;
    }
    bVar13 = compress_program != (char *)0x0;
    *(undefined1 *)((long)__ptr + 0xc) = 0;
    if (bVar13) {
      iVar4 = pipe_fork(&local_c8,4);
      *(int *)(__ptr + 1) = iVar4;
      if (iVar4 < 1) {
        if (iVar4 == 0) {
          close(local_c4);
          if (iVar3 != 1) {
            move_fd_part_0(iVar3,1);
          }
          if (local_c8 != 0) {
            move_fd_part_0(local_c8,0);
          }
          execlp(compress_program,compress_program,0);
          async_safe_die(*piVar6,"couldn\'t execute compress program");
          goto LAB_00102030;
        }
      }
      else {
        close(iVar3);
        close(local_c8);
        register_proc(__ptr);
        iVar3 = local_c4;
      }
    }
    pFVar7 = fdopen(iVar3,"w");
    *param_1 = pFVar7;
    puVar11 = __ptr;
    if (pFVar7 == (FILE *)0x0) {
      uVar8 = dcgettext(0,"couldn\'t create temporary file",5);
                    /* WARNING: Subroutine does not return */
      sort_die(uVar8,lVar2);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar11;
  }
LAB_00102030:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
  long *plVar2;
  long *__ptr;
  int iVar3;
  int iVar4;
  int *piVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  char local_c8 [8];
  __sigset_t local_c0;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar1 = (char *)((long)temphead + 0xd);
  plVar2 = (long *)&temphead;
  __ptr = temphead;
  while (param_1 != pcVar1) {
    pcVar1 = (char *)(*__ptr + 0xd);
    plVar2 = __ptr;
    __ptr = (long *)*__ptr;
  }
  if (*(char *)((long)__ptr + 0xc) == '\x01') {
    local_c0.__val[0]._0_4_ = (undefined4)__ptr[1];
    lVar6 = hash_remove(proctab,local_c8);
    if (lVar6 != 0) {
      *(undefined1 *)(lVar6 + 0xc) = 2;
      reap();
    }
  }
  lVar6 = *__ptr;
  iVar3 = pthread_sigmask(0,(__sigset_t *)caught_signals,&local_c0);
  local_c8[0] = iVar3 == 0;
  iVar4 = unlink(param_1);
  piVar5 = __errno_location();
  iVar3 = *piVar5;
  *plVar2 = lVar6;
  if (local_c8[0] != '\0') {
    pthread_sigmask(2,&local_c0,(__sigset_t *)0x0);
  }
  if (iVar4 != 0) {
    uVar7 = quotearg_n_style_colon(0,3,param_1);
    uVar8 = dcgettext(0,"warning: cannot remove: %s",5);
                    /* WARNING: Subroutine does not return */
    error(0,iVar3,uVar8,uVar7);
  }
  if (lVar6 == 0) {
    temptail = (undefined *)plVar2;
  }
  free(__ptr);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



ulong keycompare(long *param_1,long *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *__s2;
  long lVar13;
  ulong uVar14;
  char *pcVar15;
  size_t sVar16;
  byte *__nptr;
  ulong uVar17;
  byte bVar18;
  byte *__nptr_00;
  long *plVar19;
  ulong uVar20;
  long in_FS_OFFSET;
  longdouble in_ST0;
  longdouble lVar21;
  longdouble lVar22;
  longdouble in_ST1;
  longdouble in_ST2;
  longdouble in_ST3;
  longdouble in_ST4;
  longdouble in_ST5;
  longdouble in_ST6;
  longdouble in_ST7;
  byte *local_2150;
  undefined1 local_2138 [24];
  ulong local_2120;
  ulong local_2118;
  char *local_2110;
  byte *local_2108;
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
  char local_fe8 [4008];
  long local_40;
  
  pbVar11 = (byte *)param_2[3];
  pbVar12 = (byte *)param_1[2];
  __s2 = (byte *)param_2[2];
  pbVar10 = (byte *)param_1[3];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar19 = keylist;
LAB_00102340:
  lVar13 = plVar19[5];
  lVar4 = plVar19[4];
  if (pbVar10 <= pbVar12) {
    pbVar10 = pbVar12;
  }
  if (pbVar11 <= __s2) {
    pbVar11 = __s2;
  }
  local_2120 = (long)pbVar10 - (long)pbVar12;
  local_2118 = (long)pbVar11 - (long)__s2;
  if (((hard_LC_COLLATE == '\0') && ((plVar19[6] & 0xffffffffff0000U) == 0)) &&
     ((char)plVar19[7] == '\0')) {
    if (lVar4 != 0) {
      if (lVar13 == 0) {
        do {
          if ((pbVar10 <= pbVar12) || (*(char *)(lVar4 + (ulong)*pbVar12) == '\0')) {
            if (pbVar11 <= __s2) goto LAB_00103230;
            while (*(char *)(lVar4 + (ulong)*__s2) != '\0') {
              __s2 = __s2 + 1;
              if (pbVar11 == __s2) goto LAB_00103230;
            }
            if (pbVar10 <= pbVar12) goto LAB_00103230;
            uVar9 = (uint)*pbVar12 - (uint)*__s2;
            uVar17 = (ulong)uVar9;
            if (uVar9 != 0) goto LAB_00102645;
            __s2 = __s2 + 1;
          }
          pbVar12 = pbVar12 + 1;
        } while( true );
      }
      do {
        if ((pbVar10 <= pbVar12) || (*(char *)(lVar4 + (ulong)*pbVar12) == '\0')) {
          if (pbVar11 <= __s2) goto LAB_001030d0;
          while (*(char *)(lVar4 + (ulong)*__s2) != '\0') {
            __s2 = __s2 + 1;
            if (pbVar11 == __s2) goto LAB_001030d0;
          }
          if (pbVar10 <= pbVar12) goto LAB_001030d0;
          uVar9 = (uint)*(byte *)(lVar13 + (ulong)*pbVar12) - (uint)*(byte *)(lVar13 + (ulong)*__s2)
          ;
          uVar17 = (ulong)uVar9;
          if (uVar9 != 0) goto LAB_00102645;
          __s2 = __s2 + 1;
        }
        pbVar12 = pbVar12 + 1;
      } while( true );
    }
    uVar20 = local_2118;
    if (local_2120 <= local_2118) {
      uVar20 = local_2120;
    }
    if (uVar20 != 0) {
      sVar16 = 0;
      if (lVar13 == 0) {
        uVar9 = memcmp(pbVar12,__s2,uVar20);
        uVar17 = (ulong)uVar9;
        if (uVar9 != 0) goto LAB_00102645;
      }
      else {
        do {
          uVar9 = (uint)*(byte *)(lVar13 + (ulong)pbVar12[sVar16]) -
                  (uint)*(byte *)(lVar13 + (ulong)__s2[sVar16]);
          uVar17 = (ulong)uVar9;
          if (uVar9 != 0) goto LAB_00102645;
          sVar16 = sVar16 + 1;
        } while (uVar20 != sVar16);
      }
    }
    uVar17 = (ulong)((uint)(local_2118 < local_2120) - (uint)(local_2120 < local_2118));
    goto LAB_00102495;
  }
  local_2150 = (byte *)0x0;
  bVar1 = *pbVar10;
  bVar2 = *pbVar11;
  __nptr = pbVar12;
  __nptr_00 = __s2;
  lVar21 = in_ST0;
  lVar22 = in_ST1;
  if (lVar4 != 0 || lVar13 != 0) {
    __nptr = &local_1f88;
    if (local_2120 + 2 + local_2118 < 0xfa1) {
      __nptr_00 = abStack_1f87 + local_2120;
    }
    else {
      local_2138._0_8_ = lVar13;
      __nptr = (byte *)xmalloc();
      __nptr_00 = __nptr + local_2120 + 1;
      local_2150 = __nptr;
      lVar21 = in_ST0;
      lVar22 = in_ST1;
    }
    pbVar10 = __nptr;
    if (local_2120 != 0) {
      pbVar10 = pbVar12 + local_2120;
      local_2120 = 0;
      do {
        uVar17 = (ulong)*pbVar12;
        if (lVar4 != 0) {
          cVar5 = *(char *)(lVar4 + (ulong)*pbVar12);
          while (cVar5 != '\0') {
            pbVar12 = pbVar12 + 1;
            if (pbVar12 == pbVar10) goto LAB_00102798;
            uVar17 = (ulong)*pbVar12;
            cVar5 = *(char *)(lVar4 + (ulong)*pbVar12);
          }
        }
        if (lVar13 != 0) {
          uVar17 = (ulong)*(byte *)(lVar13 + uVar17);
        }
        pbVar12 = pbVar12 + 1;
        __nptr[local_2120] = (byte)uVar17;
        local_2120 = local_2120 + 1;
      } while (pbVar10 != pbVar12);
LAB_00102798:
      pbVar10 = __nptr + local_2120;
    }
    pbVar11 = __nptr_00;
    if (local_2118 != 0) {
      pbVar11 = __s2 + local_2118;
      local_2118 = 0;
      do {
        uVar17 = (ulong)*__s2;
        if (lVar4 != 0) {
          cVar5 = *(char *)(lVar4 + (ulong)*__s2);
          while (cVar5 != '\0') {
            __s2 = __s2 + 1;
            if (__s2 == pbVar11) goto LAB_00102808;
            uVar17 = (ulong)*__s2;
            cVar5 = *(char *)(lVar4 + (ulong)*__s2);
          }
        }
        if (lVar13 != 0) {
          uVar17 = (ulong)*(byte *)(lVar13 + uVar17);
        }
        __s2 = __s2 + 1;
        __nptr_00[local_2118] = (byte)uVar17;
        local_2118 = local_2118 + 1;
      } while (pbVar11 != __s2);
LAB_00102808:
      pbVar11 = __nptr_00 + local_2118;
    }
  }
  *pbVar10 = 0;
  *pbVar11 = 0;
  in_ST0 = lVar21;
  in_ST1 = lVar22;
  if (*(char *)((long)plVar19 + 0x32) != '\0') {
    while ((&blanks)[*__nptr] != '\0') {
      __nptr = __nptr + 1;
    }
    cVar5 = (&blanks)[*__nptr_00];
    while (cVar5 != '\0') {
      pbVar12 = __nptr_00 + 1;
      __nptr_00 = __nptr_00 + 1;
      cVar5 = (&blanks)[*pbVar12];
    }
LAB_00102430:
    local_2138._0_8_ = pbVar11;
    uVar9 = strnumcmp(__nptr,__nptr_00,(int)decimal_point,thousands_sep);
LAB_00102470:
    local_2138._0_4_ = uVar9;
    *pbVar10 = bVar1;
    *pbVar11 = bVar2;
    free(local_2150);
    uVar17 = (ulong)uVar9;
    goto LAB_00102495;
  }
  if (*(char *)((long)plVar19 + 0x34) != '\0') {
    in_ST0 = in_ST2;
    in_ST1 = in_ST3;
    in_ST2 = in_ST4;
    in_ST3 = in_ST5;
    in_ST4 = in_ST6;
    in_ST5 = in_ST7;
    strtold((char *)__nptr,(char **)&local_20c8);
    strtold((char *)__nptr_00,(char **)&local_20c0);
    in_ST6 = in_ST5;
    in_ST7 = in_ST5;
    if (__nptr == local_20c8) {
      uVar9 = -(uint)(local_20c0 != __nptr_00);
      local_2138._0_10_ = lVar21;
    }
    else if (__nptr_00 == local_20c0) {
LAB_001028b6:
      uVar9 = 1;
      local_2138._0_10_ = lVar21;
    }
    else if (lVar21 < lVar22) {
LAB_001032b1:
      uVar9 = 0xffffffff;
      local_2138._0_10_ = lVar21;
    }
    else {
      uVar9 = 1;
      local_2138._0_10_ = lVar21;
      if ((lVar21 <= lVar22) && (uVar9 = 0, lVar21 != lVar22)) {
        if (!NAN(lVar22)) goto LAB_001032b1;
        if (!NAN(lVar21)) goto LAB_001028b6;
        __snprintf_chk(local_2098,0x87,2,0x10e,&_LC34,pbVar11,SUB108(lVar21,0),
                       (short)((unkuint10)lVar21 >> 0x40));
        in_ST7 = in_ST6;
        __snprintf_chk(acStack_2011,0x87,2,0x87,&_LC34);
        uVar9 = strcmp(local_2098,acStack_2011);
        local_2138._0_10_ = lVar22;
      }
    }
    goto LAB_00102470;
  }
  if (*(char *)((long)plVar19 + 0x35) == '\0') {
    if (*(char *)((long)plVar19 + 0x36) == '\0') {
      if (*(char *)((long)plVar19 + 0x33) == '\0') {
        if ((char)plVar19[7] == '\0') {
          if (local_2120 == 0) {
            uVar9 = -(uint)(local_2118 != 0);
          }
          else {
            if (local_2118 == 0) {
              *pbVar10 = bVar1;
              *__nptr_00 = bVar2;
              free(local_2150);
              uVar17 = 1;
              goto LAB_00102645;
            }
            local_2138._0_8_ = pbVar11;
            uVar9 = xmemcoll0(__nptr,local_2120 + 1,__nptr_00,local_2118 + 1);
            in_ST0 = lVar21;
            in_ST1 = lVar22;
          }
        }
        else {
          local_2138._0_8_ = pbVar11;
          uVar9 = filenvercmp(__nptr,local_2120,__nptr_00);
          in_ST0 = lVar21;
          in_ST1 = lVar22;
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
          (*ptr_MD5_Update)(local_2098,__nptr,local_2120);
          (*ptr_MD5_Final)(local_20b8,local_2098);
          (*ptr_MD5_Update)(&local_203c,__nptr_00,local_2118);
          local_2138._0_8_ = local_20a8;
          (*ptr_MD5_Final)(local_20a8,&local_203c);
          uVar8 = memcmp(local_20b8,local_20a8,0x10);
          local_2110 = (char *)0x0;
          local_2108 = __nptr_00;
joined_r0x0010303e:
          uVar9 = uVar8;
          if (uVar9 == 0) {
            uVar17 = local_2118;
            if (local_2120 <= local_2118) {
              uVar17 = local_2120;
            }
            local_2138._8_2_ = (undefined2)((unkuint10)local_2138._0_10_ >> 0x40);
            local_2138._0_8_ = pbVar11;
            uVar9 = memcmp(__nptr,local_2108,uVar17);
            if (uVar9 == 0) {
              uVar9 = (uint)(local_2118 < local_2120) - (uint)(local_2120 < local_2118);
            }
          }
        }
        else {
          uVar8 = 0;
          uVar17 = (local_2118 + local_2120) * 3 + 2;
          local_2110 = (char *)0x0;
          local_2138._0_8_ = local_fe8;
          uVar20 = 4000;
LAB_00102b20:
          if (uVar20 < uVar17) {
            uVar20 = uVar20 * 3 >> 1;
            if (uVar20 <= uVar17) {
              uVar20 = uVar17;
            }
            free(local_2110);
            local_2110 = (char *)malloc(uVar20);
            pcVar15 = local_2110;
            if (local_2110 == (char *)0x0) {
              uVar20 = 4000;
              pcVar15 = local_fe8;
            }
            local_2138._0_8_ = pcVar15;
          }
          if (__nptr < pbVar10) {
            lVar13 = xstrxfrm(local_2138._0_8_,__nptr,uVar20);
            local_2120 = lVar13 + 1;
            if (__nptr_00 < pbVar11) {
              if (uVar20 < local_2120) {
                lVar13 = xstrxfrm(0,__nptr_00,0);
                local_2118 = lVar13 + 1;
                uVar14 = local_2120 + local_2118;
                goto LAB_00102e8c;
              }
              local_2108 = (byte *)(local_2138._0_8_ + local_2120);
              lVar13 = xstrxfrm(local_2108,__nptr_00,uVar20 - local_2120);
              local_2118 = lVar13 + 1;
              uVar14 = local_2120 + local_2118;
              if (uVar20 < uVar14) goto LAB_00102b70;
            }
            else {
              if (uVar20 < local_2120) {
                local_2118 = 0;
                uVar14 = local_2120;
LAB_00102e8c:
                if (uVar14 < 0x5555555555555555) goto LAB_00102b7f;
                free(local_2110);
                local_2138._0_8_ = xmalloc(uVar14);
                goto LAB_00102eb6;
              }
              local_2118 = 0;
LAB_00102edb:
              local_2108 = (byte *)(local_2138._0_8_ + local_2120);
            }
LAB_00102d65:
            sVar16 = strlen((char *)__nptr);
            __nptr = __nptr + sVar16 + 1;
            if (__nptr_00 < pbVar11) goto LAB_00102d77;
LAB_00102d84:
            if ((pbVar10 <= __nptr) && (pbVar11 <= __nptr_00)) goto LAB_00102bdc;
            (*ptr_MD5_Update)(local_2098,local_2138._0_8_,local_2120);
            (*ptr_MD5_Update)(&local_203c,local_2108,local_2118);
            if (uVar8 == 0) {
              uVar14 = local_2118;
              if (local_2120 <= local_2118) {
                uVar14 = local_2120;
              }
              uVar8 = memcmp((void *)local_2138._0_8_,local_2108,uVar14);
              if (uVar8 == 0) {
                uVar8 = (uint)(local_2118 < local_2120) - (uint)(local_2120 < local_2118);
              }
            }
            goto LAB_00102b20;
          }
          if (__nptr_00 < pbVar11) {
            lVar13 = xstrxfrm(local_2138._0_8_,__nptr_00,uVar20);
            uVar14 = lVar13 + 1;
            local_2118 = uVar14;
            if (uVar20 < uVar14) {
              local_2120 = 0;
LAB_00102b70:
              if (uVar14 < 0x5555555555555555) {
LAB_00102b7f:
                uVar14 = uVar14 * 3 >> 1;
              }
              free(local_2110);
              local_2110 = (char *)xmalloc(uVar14);
              local_2138._0_8_ = local_2110;
              if (__nptr < pbVar10) {
LAB_00102eb6:
                strxfrm((char *)local_2138._0_8_,(char *)__nptr,local_2120);
                local_2110 = (char *)local_2138._0_8_;
                uVar20 = uVar14;
                if (pbVar11 <= __nptr_00) goto LAB_00102edb;
              }
              else if (pbVar11 <= __nptr_00) {
                local_2108 = (byte *)(local_2110 + local_2120);
                goto LAB_00102bdc;
              }
              local_2108 = (byte *)(local_2138._0_8_ + local_2120);
              strxfrm((char *)local_2108,(char *)__nptr_00,local_2118);
              local_2110 = (char *)local_2138._0_8_;
              uVar20 = uVar14;
              if (__nptr < pbVar10) goto LAB_00102d65;
            }
            else {
              local_2108 = (byte *)local_2138._0_8_;
              local_2120 = 0;
            }
            if (pbVar11 <= __nptr_00) goto LAB_00102bdc;
LAB_00102d77:
            sVar16 = strlen((char *)__nptr_00);
            __nptr_00 = __nptr_00 + sVar16 + 1;
            goto LAB_00102d84;
          }
          local_2118 = 0;
          local_2120 = 0;
          local_2108 = (byte *)local_2138._0_8_;
LAB_00102bdc:
          (*ptr_MD5_Update)(local_2098,local_2138._0_8_,local_2120);
          (*ptr_MD5_Final)(local_20b8,local_2098);
          (*ptr_MD5_Update)(&local_203c,local_2108,local_2118);
          (*ptr_MD5_Final)(local_20a8,&local_203c);
          uVar9 = memcmp(local_20b8,local_20a8,0x10);
          __nptr = (byte *)local_2138._0_8_;
          if (uVar9 == 0) goto joined_r0x0010303e;
        }
        local_2138._0_4_ = uVar9;
        free(local_2110);
        in_ST0 = lVar21;
        in_ST1 = lVar22;
      }
    }
    else {
      local_2138._0_8_ = pbVar11;
      iVar6 = getmonth(__nptr,0);
      iVar7 = getmonth(__nptr_00,0);
      uVar9 = iVar6 - iVar7;
      in_ST0 = lVar21;
      in_ST1 = lVar22;
    }
    goto LAB_00102470;
  }
  while (bVar3 = *__nptr, (&blanks)[bVar3] != '\0') {
    __nptr = __nptr + 1;
  }
  bVar18 = *__nptr_00;
  cVar5 = (&blanks)[bVar18];
  while (cVar5 != '\0') {
    bVar18 = __nptr_00[1];
    __nptr_00 = __nptr_00 + 1;
    cVar5 = (&blanks)[bVar18];
  }
  local_2138._0_8_ = &local_20c0;
  local_20c0 = __nptr + (bVar3 == 0x2d);
  cVar5 = traverse_raw_number();
  uVar9 = 0;
  if ('0' < cVar5) {
    uVar9 = (int)(char)unit_order[*local_20c0];
    if (bVar3 == 0x2d) {
      uVar9 = -(int)(char)unit_order[*local_20c0];
    }
  }
  local_2138._0_4_ = uVar9;
  local_20c0 = __nptr_00 + (bVar18 == 0x2d);
  cVar5 = traverse_raw_number(&local_20c0);
  if ('0' < cVar5) {
    iVar6 = -(int)(char)unit_order[*local_20c0];
    if (bVar18 == 0x2d) {
      iVar6 = (int)(char)unit_order[*local_20c0];
    }
    uVar9 = uVar9 + iVar6;
  }
  in_ST0 = lVar21;
  in_ST1 = lVar22;
  if (uVar9 == 0) goto LAB_00102430;
  *pbVar10 = bVar1;
  *pbVar11 = bVar2;
  free(local_2150);
  uVar17 = (ulong)uVar9;
  goto LAB_00102645;
LAB_00103230:
  uVar17 = (ulong)((uint)(pbVar12 < pbVar10) - (uint)(__s2 < pbVar11));
  goto LAB_00102495;
LAB_001030d0:
  uVar17 = (ulong)((uint)(pbVar12 < pbVar10) - (uint)(__s2 < pbVar11));
LAB_00102495:
  if ((int)uVar17 != 0) {
LAB_00102645:
    if (*(char *)((long)plVar19 + 0x37) != '\0') {
      uVar17 = (ulong)((int)(uVar17 >> 0x1f) - (uint)(0 < (int)uVar17));
    }
LAB_00102650:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return uVar17;
  }
  plVar19 = (long *)plVar19[8];
  if (plVar19 == (long *)0x0) goto LAB_00102650;
  if (plVar19[2] == -1) {
    pbVar10 = (byte *)(*param_1 + -1 + param_1[1]);
    pbVar11 = (byte *)(*param_2 + -1 + param_2[1]);
  }
  else {
    pbVar10 = (byte *)limfield_isra_0(*param_1,param_1[1],plVar19);
    pbVar11 = (byte *)limfield_isra_0(*param_2,param_2[1],plVar19);
  }
  if (*plVar19 == -1) {
    pbVar12 = (byte *)*param_1;
    __s2 = (byte *)*param_2;
    if ((char)plVar19[6] != '\0') {
      if (pbVar12 < pbVar10) {
        do {
          if ((&blanks)[*pbVar12] == '\0') break;
          pbVar12 = pbVar12 + 1;
        } while (pbVar10 != pbVar12);
      }
      if (__s2 < pbVar11) {
        do {
          if ((&blanks)[*__s2] == '\0') break;
          __s2 = __s2 + 1;
        } while (pbVar11 != __s2);
      }
    }
  }
  else {
    pbVar12 = (byte *)begfield_isra_0(*param_1,param_1[1],plVar19);
    __s2 = (byte *)begfield_isra_0(*param_2,param_2[1],plVar19);
  }
  goto LAB_00102340;
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



void sequential_sort(undefined8 *param_1,ulong param_2,undefined8 *param_3,char param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long local_40;
  
  if (param_2 == 2) {
    iVar10 = compare(param_1 + -4,param_1 + -8);
    if (param_4 == '\0') {
      if (0 < iVar10) {
        uVar1 = param_1[-4];
        uVar2 = param_1[-3];
        uVar3 = param_1[-2];
        uVar4 = param_1[-1];
        uVar5 = param_1[-8];
        uVar6 = param_1[-7];
        uVar7 = param_1[-6];
        uVar8 = param_1[-5];
        param_3[-4] = uVar1;
        param_3[-3] = uVar2;
        param_3[-2] = uVar3;
        param_3[-1] = uVar4;
        param_1[-4] = uVar5;
        param_1[-3] = uVar6;
        param_1[-2] = uVar7;
        param_1[-1] = uVar8;
        param_1[-8] = uVar1;
        param_1[-7] = uVar2;
        param_1[-6] = uVar3;
        param_1[-5] = uVar4;
      }
    }
    else {
      puVar16 = param_1 + (long)(int)((0 < iVar10) - 2) * 4;
      param_1 = param_1 + (long)(int)~(uint)(0 < iVar10) * 4;
      uVar1 = param_1[1];
      uVar2 = param_1[2];
      uVar3 = param_1[3];
      param_3[-4] = *param_1;
      param_3[-3] = uVar1;
      uVar1 = *puVar16;
      uVar4 = puVar16[1];
      param_3[-2] = uVar2;
      param_3[-1] = uVar3;
      uVar2 = puVar16[2];
      uVar3 = puVar16[3];
      param_3[-8] = uVar1;
      param_3[-7] = uVar4;
      param_3[-6] = uVar2;
      param_3[-5] = uVar3;
    }
  }
  else {
    uVar14 = param_2 >> 1;
    local_40 = param_2 - uVar14;
    puVar16 = param_1 + uVar14 * -4;
    if (param_4 == '\0') {
      sequential_sort(puVar16,local_40,param_3,0);
      puVar11 = param_1;
      if (param_2 < 4) {
        uVar1 = param_1[-3];
        uVar2 = param_1[-2];
        uVar3 = param_1[-1];
        param_3[-4] = param_1[-4];
        param_3[-3] = uVar1;
        param_3[-2] = uVar2;
        param_3[-1] = uVar3;
        param_1 = param_3;
      }
      else {
        sequential_sort(param_1,uVar14,param_3,1);
        param_1 = param_3;
      }
    }
    else {
      puVar15 = param_3 + uVar14 * -4;
      sequential_sort(puVar16,local_40,puVar15,1);
      puVar11 = param_3;
      puVar16 = puVar15;
      if (3 < param_2) {
        sequential_sort(param_1,uVar14,param_3,0);
      }
    }
    puVar15 = puVar16 + -4;
    puVar9 = param_1 + -4;
    while( true ) {
      while( true ) {
        puVar13 = puVar9;
        puVar12 = puVar15;
        puVar15 = puVar11 + -4;
        iVar10 = compare(puVar13,puVar12);
        if (iVar10 < 1) break;
        uVar1 = puVar16[-3];
        local_40 = local_40 + -1;
        *puVar15 = puVar16[-4];
        puVar11[-3] = uVar1;
        uVar1 = puVar16[-1];
        puVar11[-2] = puVar16[-2];
        puVar11[-1] = uVar1;
        if (local_40 == 0) {
          memmove(puVar15 + (1 - uVar14) * 4 + -4,param_1 + (1 - uVar14) * 4 + -4,uVar14 << 5);
          return;
        }
        puVar11 = puVar15;
        puVar15 = puVar12 + -4;
        puVar9 = puVar13;
        puVar16 = puVar12;
      }
      uVar1 = param_1[-3];
      uVar2 = param_1[-2];
      uVar3 = param_1[-1];
      *puVar15 = param_1[-4];
      puVar11[-3] = uVar1;
      puVar11[-2] = uVar2;
      puVar11[-1] = uVar3;
      if (uVar14 == 1) break;
      uVar14 = uVar14 - 1;
      puVar11 = puVar15;
      puVar15 = puVar12;
      puVar9 = puVar13 + -4;
      param_1 = puVar13;
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_unique(long *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  if (unique != '\0') {
    if (saved_line != 0) {
      iVar1 = compare(param_1,&saved_line);
      if (iVar1 == 0) {
        return;
      }
    }
    saved_line = *param_1;
    lRam0000000000105ce8 = param_1[1];
    _DAT_00105cf0 = param_1[2];
    lRam0000000000105cf8 = param_1[3];
  }
  write_line(param_1,param_2,param_3);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void mergefps(long param_1,ulong param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
             void *param_6)

{
  size_t sVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  char cVar16;
  int iVar17;
  void *__ptr;
  void *__ptr_00;
  void *__ptr_01;
  ulong *__ptr_02;
  void *pvVar18;
  ulong *puVar19;
  undefined8 *puVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  long in_FS_OFFSET;
  bool bVar29;
  ulong local_e8;
  long *local_e0;
  void **local_a8;
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
  lVar15 = keylist;
  local_68 = (void *)0x0;
  if (param_3 == 0) goto LAB_00103939;
  lVar21 = 0;
  uVar26 = 0;
  local_e8 = param_3;
  local_78 = param_2;
  while( true ) {
    while( true ) {
      uVar23 = sort_size / local_e8;
      if (sort_size / local_e8 < merge_buffer_size) {
        uVar23 = merge_buffer_size;
      }
      plVar2 = (long *)((long)__ptr + (lVar21 - uVar26) * 8);
      while( true ) {
        sVar1 = (uVar23 & 0xffffffffffffffe0) + 0x20;
        pvVar18 = malloc(sVar1);
        *plVar2 = (long)pvVar18;
        if (pvVar18 != (void *)0x0) break;
        uVar23 = sVar1 >> 1;
        if (sVar1 < 0x43) {
          xalloc_die();
          goto LAB_00104025;
        }
      }
      plVar2[3] = sVar1;
      lVar25 = _UNK_0010b178;
      lVar5 = __LC35;
      *(undefined1 *)(plVar2 + 6) = 0;
      puVar20 = (undefined8 *)(param_1 + uVar26 * 0x10);
      uVar4 = *puVar20;
      plVar2[4] = lVar5;
      plVar2[5] = lVar25;
      puVar3 = (undefined8 *)((long)param_6 + lVar21);
      *(undefined1 (*) [16])(plVar2 + 1) = (undefined1  [16])0x0;
      cVar16 = fillbuf(plVar2,*puVar3,uVar4);
      if (cVar16 == '\0') break;
      lVar5 = plVar2[3];
      uVar26 = uVar26 + 1;
      lVar25 = *plVar2;
      *(long *)((long)__ptr_00 + lVar21) = lVar5 + lVar25 + -0x20;
      *(long *)((long)__ptr_01 + lVar21) = lVar5 + lVar25 + plVar2[2] * -0x20;
      if (local_e8 <= uVar26) goto LAB_001039a5;
      lVar21 = uVar26 * 8;
    }
    xfclose(*puVar3,*puVar20);
    if (uVar26 < local_78) {
      local_78 = local_78 - 1;
      zaptemp(*puVar20);
    }
    free((void *)*plVar2);
    uVar23 = local_e8 - 1;
    if (uVar23 <= uVar26) break;
    lVar5 = local_e8 * 8 + -8;
    if ((puVar3 < (undefined8 *)(local_e8 * 0x10 + param_1)) &&
       (lVar25 = lVar21, puVar20 < (undefined8 *)((long)param_6 + lVar5))) {
      do {
        puVar3 = (undefined8 *)(param_1 + 0x10 + lVar25 * 2);
        uVar7 = puVar3[1];
        uVar4 = *(undefined8 *)((long)param_6 + lVar25 + 8);
        puVar20 = (undefined8 *)(param_1 + lVar25 * 2);
        *puVar20 = *puVar3;
        puVar20[1] = uVar7;
        *(undefined8 *)((long)param_6 + lVar25) = uVar4;
        lVar25 = lVar25 + 8;
        local_e8 = uVar23;
      } while (lVar5 != lVar25);
    }
    else {
      memmove(puVar20,(void *)(param_1 + 0x10 + uVar26 * 0x10),(uVar23 - uVar26) * 0x10);
      memmove(puVar3,(void *)((long)param_6 + lVar21 + 8),(uVar23 - uVar26) * 8);
      local_e8 = uVar23;
    }
  }
  local_e8 = uVar23;
  if (uVar23 == 0) goto LAB_00103939;
LAB_001039a5:
  uVar26 = 0;
  if ((local_e8 & 1) == 0) {
LAB_001039e0:
    do {
      __ptr_02[uVar26] = uVar26;
      uVar23 = uVar26 + 1;
      uVar26 = uVar26 + 2;
      __ptr_02[uVar23] = uVar23;
    } while (local_e8 != uVar26);
  }
  else {
    uVar26 = 1;
    *__ptr_02 = 0;
    if (local_e8 != 1) goto LAB_001039e0;
  }
  if (uVar26 != 1) {
    uVar23 = 1;
    do {
      while( true ) {
        puVar19 = __ptr_02 + uVar23;
        uVar27 = *puVar19;
        uVar22 = __ptr_02[uVar23 - 1];
        iVar17 = compare(*(undefined8 *)((long)__ptr_00 + uVar22 * 8),
                         *(undefined8 *)((long)__ptr_00 + uVar27 * 8));
        if (iVar17 < 1) break;
        __ptr_02[uVar23 - 1] = uVar27;
        uVar23 = 1;
        *puVar19 = uVar22;
      }
      uVar23 = uVar23 + 1;
    } while (uVar23 < uVar26);
  }
  local_98 = 0;
  local_a8 = (void **)0x0;
LAB_00103a88:
  while( true ) {
    uVar23 = *__ptr_02;
    lVar21 = uVar23 * 8;
    puVar19 = (ulong *)((long)__ptr_00 + lVar21);
    plVar2 = (long *)*puVar19;
    if (unique == '\0') break;
    if (local_a8 != (void **)0x0) {
      iVar17 = compare(local_a8,plVar2);
      if (iVar17 == 0) goto LAB_00103ace;
      write_line(&local_68,param_4,param_5);
    }
    uVar27 = plVar2[1];
    if (local_98 < uVar27) {
      do {
        uVar22 = uVar27;
        if (local_98 == 0) break;
        local_98 = local_98 * 2;
        uVar22 = local_98;
      } while (local_98 < uVar27);
      free(local_68);
      local_68 = (void *)xmalloc(uVar22);
      uVar27 = plVar2[1];
      local_98 = uVar22;
    }
    local_60 = uVar27;
    pvVar18 = memcpy(local_68,(void *)*plVar2,uVar27);
    if (lVar15 != 0) {
      local_58 = (long)pvVar18 + (plVar2[2] - *plVar2);
      lStack_50 = (long)pvVar18 + (plVar2[3] - *plVar2);
    }
    local_a8 = &local_68;
    if (plVar2 <= *(long **)((long)__ptr_01 + lVar21)) goto LAB_00103ae0;
LAB_00103cb3:
    *puVar19 = (ulong)(plVar2 + -4);
LAB_00103b5f:
    if (uVar26 != 1) {
      uVar22 = *puVar19;
      uVar27 = 1;
      uVar24 = uVar26;
      uVar28 = 1;
      do {
        while( true ) {
          uVar6 = __ptr_02[uVar28];
          iVar17 = compare(uVar22,*(undefined8 *)((long)__ptr_00 + uVar6 * 8));
          if ((-1 < iVar17) && ((uVar6 <= uVar23 || (iVar17 != 0)))) break;
          bVar29 = uVar28 <= uVar27;
          uVar24 = uVar28;
          uVar28 = uVar27 + uVar28 >> 1;
          if (bVar29) goto LAB_00103be0;
        }
        uVar27 = uVar28 + 1;
        uVar28 = uVar27 + uVar24 >> 1;
      } while (uVar27 < uVar24);
LAB_00103be0:
      lVar21 = uVar27 - 1;
      puVar19 = __ptr_02;
      if (lVar21 != 0) {
        memmove(__ptr_02,__ptr_02 + 1,lVar21 * 8);
        puVar19 = __ptr_02 + lVar21;
      }
      *puVar19 = uVar23;
    }
  }
  write_line(plVar2,param_4,param_5);
LAB_00103ace:
  if (*(long **)((long)__ptr_01 + lVar21) < plVar2) goto LAB_00103cb3;
LAB_00103ae0:
  puVar20 = (undefined8 *)(uVar23 * 0x10 + param_1);
  local_e0 = (long *)((long)__ptr + uVar23 * 0x38);
  cVar16 = fillbuf(local_e0,*(undefined8 *)((long)param_6 + lVar21),*puVar20);
  if (cVar16 != '\0') {
    lVar5 = local_e0[3];
    lVar25 = *local_e0;
    *puVar19 = (lVar5 + lVar25) - 0x20;
    *(long *)((long)__ptr_01 + lVar21) = lVar5 + lVar25 + local_e0[2] * -0x20;
    goto LAB_00103b5f;
  }
  puVar19 = __ptr_02 + 1;
  if (uVar26 == 1) {
    xfclose(*(undefined8 *)((long)param_6 + lVar21),*puVar20);
    if (local_78 <= uVar23) {
      free((void *)*local_e0);
LAB_00103904:
      if ((local_a8 != (void **)0x0) && (unique != '\0')) {
        write_line(&local_68,param_4,param_5);
        free(local_68);
      }
LAB_00103939:
      xfclose(param_4,param_5);
      free(param_6);
      free(__ptr);
      free(__ptr_02);
      free(__ptr_01);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        free(__ptr_00);
        return;
      }
LAB_00104025:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    uVar27 = 0;
LAB_00103ef0:
    local_78 = local_78 - 1;
    zaptemp(*puVar20);
  }
  else {
    do {
      if (uVar23 < *puVar19) {
        *puVar19 = *puVar19 - 1;
        uVar23 = *__ptr_02;
      }
      puVar19 = puVar19 + 1;
    } while (__ptr_02 + uVar26 != puVar19);
    lVar21 = uVar23 * 8;
    uVar27 = uVar26 - 1;
    puVar20 = (undefined8 *)(uVar23 * 0x10 + param_1);
    local_e0 = (long *)((long)__ptr + uVar23 * 0x38);
    xfclose(*(undefined8 *)((long)param_6 + uVar23 * 8),*puVar20);
    if (uVar23 < local_78) goto LAB_00103ef0;
  }
  free((void *)*local_e0);
  if (uVar23 < uVar27) {
    pvVar18 = (void *)(param_1 + uVar23 * 0x10);
    if (((void *)((long)param_6 + lVar21) < (void *)(param_1 + -0x10 + uVar26 * 0x10)) &&
       (pvVar18 < (void *)((long)param_6 + uVar26 * 8))) {
      puVar20 = (undefined8 *)((long)__ptr + (lVar21 - uVar23) * 8);
      do {
        puVar3 = (undefined8 *)(param_1 + 0x10 + lVar21 * 2);
        uVar7 = *puVar3;
        uVar8 = puVar3[1];
        uVar9 = puVar20[7];
        uVar10 = puVar20[8];
        uVar11 = puVar20[9];
        uVar12 = puVar20[10];
        *(undefined8 *)((long)param_6 + lVar21) = *(undefined8 *)((long)param_6 + lVar21 + 8);
        uVar4 = puVar20[0xd];
        uVar13 = puVar20[0xb];
        uVar14 = puVar20[0xc];
        puVar3 = (undefined8 *)(param_1 + lVar21 * 2);
        *puVar3 = uVar7;
        puVar3[1] = uVar8;
        puVar20[6] = uVar4;
        uVar4 = *(undefined8 *)((long)__ptr_00 + lVar21 + 8);
        *puVar20 = uVar9;
        puVar20[1] = uVar10;
        *(undefined8 *)((long)__ptr_00 + lVar21) = uVar4;
        uVar4 = *(undefined8 *)((long)__ptr_01 + lVar21 + 8);
        puVar20[2] = uVar11;
        puVar20[3] = uVar12;
        *(undefined8 *)((long)__ptr_01 + lVar21) = uVar4;
        lVar21 = lVar21 + 8;
        puVar20[4] = uVar13;
        puVar20[5] = uVar14;
        puVar20 = puVar20 + 7;
      } while (uVar26 * 8 + -8 != lVar21);
    }
    else {
      lVar5 = lVar21 + 8;
      sVar1 = (uVar27 - uVar23) * 8;
      memmove((void *)((long)param_6 + lVar21),(void *)((long)param_6 + lVar5),sVar1);
      memmove(pvVar18,(void *)(param_1 + 0x10 + uVar23 * 0x10),(uVar27 - uVar23) * 0x10);
      lVar25 = (lVar21 - uVar23) * 8;
      memmove((void *)(lVar25 + (long)__ptr),(void *)((long)__ptr + lVar25 + 0x38),
              (uVar26 - uVar23) * 0x38 - 0x38);
      memmove((void *)((long)__ptr_00 + lVar21),(void *)((long)__ptr_00 + lVar5),sVar1);
      memmove((void *)((long)__ptr_01 + lVar21),(void *)((long)__ptr_01 + lVar5),sVar1);
    }
  }
  else if (uVar27 == 0) goto LAB_00103904;
  memmove(__ptr_02,__ptr_02 + 1,uVar27 * 8);
  uVar26 = uVar27;
  goto LAB_00103a88;
}



ulong mergefiles(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,undefined8 param_5
                )

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = open_input_files(param_1,param_3,&local_48);
  if ((uVar2 < param_3) && (uVar2 < 2)) {
    uVar1 = *(undefined8 *)(param_1 + uVar2 * 0x10);
    uVar3 = dcgettext(0,"open failed",5);
                    /* WARNING: Subroutine does not return */
    sort_die(uVar3,uVar1);
  }
  mergefps(param_1,param_2,uVar2,param_4,param_5,local_48);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void merge(long *param_1,ulong param_2,ulong param_3,char *param_4)

{
  byte *__s2;
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long *__src;
  long in_FS_OFFSET;
  ulong local_128;
  ulong local_120;
  long local_e8;
  undefined8 local_e0;
  stat local_d8;
  long local_40;
  
  uVar5 = (ulong)nmerge;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_128 = param_3;
  if (uVar5 < param_3) {
    do {
      if (local_128 < uVar5) break;
      lVar11 = 0;
      uVar4 = 0;
      do {
        uVar12 = uVar4;
        lVar3 = maybe_create_temp(&local_e0,0);
        uVar4 = (ulong)nmerge;
        uVar5 = param_2;
        if (uVar4 <= param_2) {
          uVar5 = uVar4;
        }
        uVar4 = mergefiles(param_1 + lVar11 * 2,uVar5,uVar4,local_e0,lVar3 + 0xd);
        uVar5 = (ulong)nmerge;
        uVar8 = param_2;
        if (uVar4 <= param_2) {
          uVar8 = uVar4;
        }
        lVar11 = lVar11 + uVar4;
        uVar4 = uVar12 + 1;
        uVar10 = local_128 - lVar11;
        param_1[uVar12 * 2] = lVar3 + 0xd;
        param_1[uVar12 * 2 + 1] = lVar3;
        param_2 = param_2 - uVar8;
      } while (uVar5 <= uVar10);
      plVar9 = param_1 + uVar12 * 2 + 2;
      __src = param_1 + lVar11 * 2;
      if (uVar5 - uVar4 % uVar5 < uVar10) {
        uVar5 = uVar4 % uVar5 + 1 + (uVar10 - uVar5);
        lVar3 = maybe_create_temp(&local_e0,0);
        uVar4 = param_2;
        if (uVar5 <= param_2) {
          uVar4 = uVar5;
        }
        uVar4 = mergefiles(__src,uVar4,uVar5,local_e0);
        lVar11 = lVar11 + uVar4;
        plVar9[1] = lVar3;
        *plVar9 = lVar3 + 0xd;
        plVar9 = param_1 + uVar12 * 2 + 4;
        __src = param_1 + lVar11 * 2;
        uVar10 = local_128 - lVar11;
        uVar5 = (ulong)nmerge;
        if (param_2 < uVar4) {
          uVar4 = param_2;
        }
        local_128 = (uVar12 + 2 + local_128) - lVar11;
        param_2 = (uVar12 + 2 + param_2) - uVar4;
      }
      else {
        param_2 = param_2 + uVar4;
        local_128 = (uVar4 + local_128) - lVar11;
      }
      memmove(plVar9,__src,uVar10 << 4);
    } while (uVar5 < local_128);
  }
  if (param_2 < local_128) {
    lVar11 = 0;
    plVar9 = param_1 + param_2 * 2;
    do {
      while( true ) {
        __s2 = (byte *)*plVar9;
        uVar1 = *__s2 - 0x2d;
        if (uVar1 == 0) {
          uVar1 = (uint)__s2[1];
        }
        if (((param_4 == (char *)0x0) || (iVar2 = strcmp(param_4,(char *)__s2), iVar2 != 0)) ||
           (uVar1 == 0)) break;
LAB_0010428b:
        if (lVar11 == 0) {
          lVar11 = maybe_create_temp(&local_e0,0);
          lVar3 = lVar11 + 0xd;
          mergefiles(plVar9,0,1,local_e0,lVar3);
        }
        else {
          lVar3 = lVar11 + 0xd;
        }
        *plVar9 = lVar3;
        plVar9[1] = lVar11;
LAB_001042a0:
        plVar9 = plVar9 + 2;
        if (param_1 + local_128 * 2 == plVar9) goto LAB_00104310;
      }
      if (outstat_errno_4 == 0) {
        iVar2 = fstat(1,(stat *)outstat_3);
        if (iVar2 != 0) {
          piVar6 = __errno_location();
          outstat_errno_4 = *piVar6;
          goto LAB_001042e1;
        }
        outstat_errno_4 = -1;
      }
      else {
LAB_001042e1:
        if (-1 < outstat_errno_4) break;
      }
      if (uVar1 == 0) {
        iVar2 = fstat(0,&local_d8);
        if (iVar2 == 0) goto LAB_0010426e;
        goto LAB_001042a0;
      }
      iVar2 = stat((char *)*plVar9,&local_d8);
      if (iVar2 == 0) {
LAB_0010426e:
        if (local_d8.st_dev == outstat_3._0_8_ && local_d8.st_ino == outstat_3._8_8_)
        goto LAB_0010428b;
        goto LAB_001042a0;
      }
      plVar9 = plVar9 + 2;
    } while (param_1 + local_128 * 2 != plVar9);
  }
LAB_00104310:
  local_120 = param_2;
  do {
    uVar5 = open_input_files(param_1,local_128,&local_e8);
    if (local_128 == uVar5) {
      lVar11 = stream_open(param_4,&_LC31);
      if (lVar11 != 0) {
        if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        mergefps(param_1,local_120,local_128,lVar11,param_4,local_e8);
        return;
      }
      piVar6 = __errno_location();
      if ((*piVar6 != 0x18) || (local_128 < 3)) {
        uVar7 = dcgettext(0,"open failed",5);
                    /* WARNING: Subroutine does not return */
        sort_die(uVar7,param_4);
      }
    }
    else if (uVar5 < 3) {
      lVar11 = param_1[uVar5 * 2];
      uVar7 = dcgettext(0,"open failed",5);
                    /* WARNING: Subroutine does not return */
      sort_die(uVar7,lVar11);
    }
    lVar11 = local_e8;
    uVar5 = uVar5 - 1;
    plVar9 = param_1 + uVar5 * 2;
    while( true ) {
      xfclose(*(undefined8 *)(lVar11 + uVar5 * 8),*plVar9);
      lVar3 = maybe_create_temp(&local_e0,2 < uVar5);
      if (lVar3 != 0) break;
      uVar5 = uVar5 - 1;
      plVar9 = plVar9 + -2;
    }
    uVar4 = local_120;
    if (uVar5 < local_120) {
      uVar4 = uVar5;
    }
    local_120 = (local_120 + 1) - uVar4;
    mergefps(param_1,uVar4,uVar5,local_e0,lVar3 + 0xd,lVar11);
    *param_1 = lVar3 + 0xd;
    param_1[1] = lVar3;
    memmove(param_1 + 2,plVar9,(local_128 - uVar5) * 0x10);
    local_128 = (local_128 - uVar5) + 1;
  } while( true );
}



void sortlines(long param_1,ulong param_2,ulong param_3,long *param_4,undefined8 *param_5,
              undefined8 param_6,undefined8 param_7)

{
  pthread_mutex_t *__mutex;
  pthread_cond_t *__cond;
  pthread_mutex_t *__mutex_00;
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 *puVar19;
  long *plVar20;
  ulong uVar21;
  long in_FS_OFFSET;
  bool bVar22;
  long local_c8;
  long local_b8;
  long local_b0;
  pthread_t local_80;
  long local_78;
  ulong local_70;
  ulong local_68;
  long local_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  uVar14 = param_2 >> 1;
  uVar21 = param_4[5];
  uVar18 = param_4[6];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = param_4[8];
  local_48 = param_7;
  local_78 = param_1;
  local_70 = uVar14;
  local_68 = param_3;
  local_58 = param_5;
  local_50 = param_6;
  if ((0x1ffff < uVar21 + uVar18) && (1 < param_2)) {
    iVar5 = pthread_create(&local_80,(pthread_attr_t *)0x0,sortlines_thread,&local_78);
    if (iVar5 == 0) {
      sortlines(param_1 + param_4[5] * -0x20,param_2 - uVar14,param_3,param_4[9],param_5,param_6,
                param_7);
      pthread_join(local_80,(void **)0x0);
      goto LAB_00104e1f;
    }
    uVar21 = param_4[5];
    uVar18 = param_4[6];
  }
  lVar6 = param_1 + param_3 * -0x20;
  lVar15 = param_1 + uVar21 * -0x20;
  if (1 < uVar18) {
    sequential_sort(lVar15,uVar18,lVar6 + (uVar21 >> 1) * -0x20,0);
  }
  if (1 < uVar21) {
    sequential_sort(param_1,uVar21,lVar6,0);
  }
  *param_4 = param_1;
  __mutex = (pthread_mutex_t *)(param_5 + 1);
  param_4[1] = lVar15;
  __cond = (pthread_cond_t *)(param_5 + 6);
  param_4[2] = lVar15;
  param_4[3] = param_1 + uVar21 * -0x20 + uVar18 * -0x20;
  pthread_mutex_lock(__mutex);
  heap_insert(*param_5,param_4);
  *(undefined1 *)((long)param_4 + 0x54) = 1;
  pthread_cond_signal(__cond);
  pthread_mutex_unlock(__mutex);
LAB_00104770:
  pthread_mutex_lock(__mutex);
  while (plVar7 = (long *)heap_remove_top(*param_5), plVar7 == (long *)0x0) {
    pthread_cond_wait(__cond,__mutex);
  }
  pthread_mutex_unlock(__mutex);
  __mutex_00 = (pthread_mutex_t *)(plVar7 + 0xb);
  pthread_mutex_lock(__mutex_00);
  iVar5 = (int)plVar7[10];
  *(undefined1 *)((long)plVar7 + 0x54) = 0;
  if (iVar5 != 0) {
    puVar2 = (undefined8 *)*plVar7;
    puVar13 = (undefined8 *)plVar7[1];
    puVar16 = (undefined8 *)plVar7[2];
    lVar6 = (param_3 >> ((char)iVar5 * '\x02' + 2U & 0x3f)) + 1;
    puVar8 = puVar13;
    puVar11 = puVar2;
    if (iVar5 != 1) {
      puVar17 = (undefined8 *)plVar7[4];
      puVar19 = (undefined8 *)*puVar17;
      puVar10 = puVar2;
      puVar12 = puVar19;
      if (puVar2 == puVar16) {
        local_b8 = plVar7[6];
        local_c8 = plVar7[5];
        if (local_b8 == 0) {
          cVar1 = '\0';
          lVar15 = 0;
        }
        else {
          lVar15 = 0;
          cVar1 = '\0';
          if (local_c8 == 0) goto LAB_00104905;
        }
      }
      else {
LAB_0010484d:
        do {
          if ((undefined8 *)plVar7[3] == puVar8) {
            puVar17 = (undefined8 *)plVar7[4];
            cVar1 = *(char *)((long)plVar7 + 0x54);
            puVar11 = (undefined8 *)*plVar7;
LAB_00104ac0:
            lVar15 = (long)puVar13 - (long)puVar8 >> 5;
            local_b8 = plVar7[6];
            local_c8 = plVar7[5];
            if (local_b8 != lVar15) goto LAB_001048f5;
            puVar19 = puVar12;
            if ((puVar16 == puVar11) || (lVar9 = lVar6 + -1, lVar6 == 0)) goto LAB_00104b28;
            goto LAB_00104b02;
          }
          lVar15 = lVar6 + -1;
          if (lVar6 == 0) {
            cVar1 = *(char *)((long)plVar7 + 0x54);
            puVar17 = (undefined8 *)plVar7[4];
            lVar6 = -1;
            puVar11 = (undefined8 *)*plVar7;
            goto LAB_00104ac0;
          }
          puVar19 = puVar12 + -4;
          iVar5 = compare(puVar10 + -4,puVar8 + -4);
          lVar6 = lVar15;
          if (0 < iVar5) {
            lVar15 = plVar7[1];
            puVar16 = (undefined8 *)plVar7[2];
            uVar3 = *(undefined8 *)(lVar15 + -0x20);
            uVar4 = *(undefined8 *)(lVar15 + -0x18);
            puVar8 = (undefined8 *)(lVar15 + -0x20);
            plVar7[1] = (long)puVar8;
            *puVar19 = uVar3;
            puVar12[-3] = uVar4;
            uVar3 = *(undefined8 *)(lVar15 + -8);
            puVar11 = (undefined8 *)*plVar7;
            puVar12[-2] = *(undefined8 *)(lVar15 + -0x10);
            puVar12[-1] = uVar3;
            puVar10 = puVar11;
            puVar12 = puVar19;
            if (puVar16 == puVar11) break;
            goto LAB_0010484d;
          }
          lVar15 = *plVar7;
          puVar16 = (undefined8 *)plVar7[2];
          uVar3 = *(undefined8 *)(lVar15 + -0x20);
          uVar4 = *(undefined8 *)(lVar15 + -0x18);
          puVar11 = (undefined8 *)(lVar15 + -0x20);
          *plVar7 = (long)puVar11;
          *puVar19 = uVar3;
          puVar12[-3] = uVar4;
          uVar3 = *(undefined8 *)(lVar15 + -8);
          puVar8 = (undefined8 *)plVar7[1];
          puVar12[-2] = *(undefined8 *)(lVar15 + -0x10);
          puVar12[-1] = uVar3;
          puVar10 = puVar11;
          puVar12 = puVar19;
        } while (puVar16 != puVar11);
        puVar17 = (undefined8 *)plVar7[4];
        lVar15 = (long)puVar13 - (long)puVar8 >> 5;
        cVar1 = *(char *)((long)plVar7 + 0x54);
        local_c8 = plVar7[5];
        local_b8 = plVar7[6];
        puVar12 = puVar19;
        puVar10 = puVar11;
        if (local_b8 != lVar15) {
LAB_001048f5:
          local_b0 = (long)puVar2 - (long)puVar10 >> 5;
          puVar19 = puVar12;
          if (local_c8 == local_b0) {
LAB_00104905:
            puVar16 = (undefined8 *)plVar7[3];
            if ((puVar16 != puVar8) && (lVar9 = lVar6 + -1, lVar6 != 0)) {
              do {
                puVar10 = puVar8 + -4;
                uVar3 = puVar8[-3];
                puVar12 = puVar19 + -4;
                *puVar12 = *puVar10;
                puVar19[-3] = uVar3;
                uVar3 = puVar8[-1];
                puVar19[-2] = puVar8[-2];
                puVar19[-1] = uVar3;
                puVar8 = puVar10;
                puVar19 = puVar12;
                if (puVar16 == puVar10) break;
                lVar9 = lVar9 + -1;
              } while (lVar9 != -1);
              plVar7[1] = (long)puVar10;
              lVar15 = (long)puVar13 - (long)puVar10 >> 5;
            }
          }
        }
      }
      goto LAB_00104b28;
    }
    lVar15 = lVar6;
    if (puVar2 != puVar16) {
LAB_001049ca:
      do {
        lVar6 = lVar15;
        if ((undefined8 *)plVar7[3] == puVar8) {
LAB_00104d05:
          if ((long)puVar13 - (long)puVar8 >> 5 != plVar7[6]) goto LAB_00104a43;
          if (puVar11 == (undefined8 *)plVar7[2]) goto LAB_0010500f;
          if (lVar6 != 0) goto LAB_00104d5e;
          cVar1 = *(char *)((long)plVar7 + 0x54);
          local_c8 = plVar7[5] - ((long)puVar2 - (long)puVar11 >> 5);
          local_b8 = 0;
          goto LAB_00104b42;
        }
        lVar6 = lVar15 + -1;
        if (lVar15 == 0) {
          lVar6 = -1;
          goto LAB_00104d05;
        }
        iVar5 = compare(puVar11 + -4,puVar8 + -4);
        lVar15 = lVar6;
        if (0 < iVar5) {
          lVar9 = plVar7[1];
          plVar7[1] = lVar9 + -0x20;
          write_unique(lVar9 + -0x20,param_6,param_7);
          puVar8 = (undefined8 *)plVar7[1];
          puVar11 = (undefined8 *)*plVar7;
          if (puVar11 == (undefined8 *)plVar7[2]) break;
          goto LAB_001049ca;
        }
        lVar9 = *plVar7;
        *plVar7 = lVar9 + -0x20;
        write_unique(lVar9 + -0x20,param_6,param_7);
        puVar8 = (undefined8 *)plVar7[1];
        puVar11 = (undefined8 *)*plVar7;
      } while (puVar11 != (undefined8 *)plVar7[2]);
      if ((long)puVar13 - (long)puVar8 >> 5 != plVar7[6]) {
LAB_00104a43:
        local_c8 = plVar7[5];
        lVar15 = (long)puVar2 - (long)puVar11 >> 5;
        goto LAB_00104a51;
      }
LAB_0010500f:
      cVar1 = *(char *)((long)plVar7 + 0x54);
      local_c8 = plVar7[5] - ((long)puVar2 - (long)puVar11 >> 5);
      local_b8 = 0;
      goto LAB_00104b42;
    }
    local_c8 = plVar7[5];
    lVar15 = 0;
    if (plVar7[6] != 0) {
LAB_00104a51:
      if (lVar15 == local_c8) {
        if ((puVar8 == (undefined8 *)plVar7[3]) || (lVar6 == 0)) {
          cVar1 = *(char *)((long)plVar7 + 0x54);
          local_c8 = lVar15 - ((long)puVar2 - (long)puVar11 >> 5);
          local_b8 = plVar7[6] - ((long)puVar13 - (long)puVar8 >> 5);
          goto LAB_00104b42;
        }
        do {
          lVar6 = lVar6 + -1;
          plVar7[1] = (long)(puVar8 + -4);
          write_unique(puVar8 + -4,param_6,param_7);
          puVar8 = (undefined8 *)plVar7[1];
          if (puVar8 == (undefined8 *)plVar7[3]) break;
        } while (lVar6 != 0);
        cVar1 = *(char *)((long)plVar7 + 0x54);
        puVar11 = (undefined8 *)*plVar7;
        goto LAB_00104d97;
      }
      cVar1 = *(char *)((long)plVar7 + 0x54);
      goto LAB_00104da2;
    }
    bVar22 = (undefined8 *)plVar7[3] != puVar13;
    goto LAB_00104cd8;
  }
  pthread_mutex_unlock(__mutex_00);
  pthread_mutex_lock(__mutex);
  heap_insert(*param_5,plVar7);
  *(undefined1 *)((long)plVar7 + 0x54) = 1;
  pthread_cond_signal(__cond);
  pthread_mutex_unlock(__mutex);
LAB_00104e1f:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
  while (lVar9 = lVar9 + -1, puVar12 = puVar19, lVar9 != -1) {
LAB_00104b02:
    puVar13 = puVar11 + -4;
    uVar3 = puVar11[-3];
    puVar19 = puVar12 + -4;
    *puVar19 = *puVar13;
    puVar12[-3] = uVar3;
    uVar3 = puVar11[-1];
    puVar12[-2] = puVar11[-2];
    puVar12[-1] = uVar3;
    puVar11 = puVar13;
    if (puVar13 == puVar16) {
      *plVar7 = (long)puVar16;
      goto LAB_00104b28;
    }
  }
  *plVar7 = (long)puVar13;
LAB_00104b28:
  *puVar17 = puVar19;
  local_c8 = local_c8 - ((long)puVar2 - (long)puVar11 >> 5);
  local_b8 = local_b8 - lVar15;
LAB_00104b42:
  plVar7[5] = local_c8;
  plVar7[6] = local_b8;
  if (cVar1 == '\0') {
    bVar22 = (undefined8 *)plVar7[3] != puVar8;
    if ((undefined8 *)plVar7[2] == puVar11) {
LAB_00104cd8:
      if ((local_c8 == 0) && (bVar22)) {
LAB_00104b6d:
        pthread_mutex_lock(__mutex);
        heap_insert(*param_5,plVar7);
        *(undefined1 *)((long)plVar7 + 0x54) = 1;
        pthread_cond_signal(__cond);
        pthread_mutex_unlock(__mutex);
      }
    }
    else if ((local_b8 == 0) || (bVar22)) goto LAB_00104b6d;
  }
  if (*(uint *)(plVar7 + 10) < 2) {
    if (plVar7[6] + plVar7[5] == 0) {
      lVar6 = plVar7[7];
      pthread_mutex_lock(__mutex);
      heap_insert(*param_5,lVar6);
      *(undefined1 *)(lVar6 + 0x54) = 1;
      pthread_cond_signal(__cond);
      pthread_mutex_unlock(__mutex);
    }
    goto LAB_00104ba8;
  }
  pthread_mutex_lock((pthread_mutex_t *)(plVar7[7] + 0x58));
  plVar20 = (long *)plVar7[7];
  if (*(char *)((long)plVar20 + 0x54) == '\0') {
    if (*plVar20 == plVar20[2]) {
      if (plVar20[1] != plVar20[3]) {
        lVar6 = plVar20[5];
        goto joined_r0x00104f08;
      }
    }
    else {
      if (plVar20[1] == plVar20[3]) {
        lVar6 = plVar20[6];
joined_r0x00104f08:
        if (lVar6 != 0) goto LAB_00104c23;
      }
      pthread_mutex_lock(__mutex);
      heap_insert(*param_5,plVar20);
      *(undefined1 *)((long)plVar20 + 0x54) = 1;
      pthread_cond_signal(__cond);
      pthread_mutex_unlock(__mutex);
      plVar20 = (long *)plVar7[7];
    }
  }
LAB_00104c23:
  pthread_mutex_unlock((pthread_mutex_t *)(plVar20 + 0xb));
LAB_00104ba8:
  pthread_mutex_unlock(__mutex_00);
  goto LAB_00104770;
  while (lVar6 != 0) {
LAB_00104d5e:
    lVar6 = lVar6 + -1;
    *plVar7 = (long)(puVar11 + -4);
    write_unique(puVar11 + -4,param_6,param_7);
    puVar11 = (undefined8 *)*plVar7;
    if (puVar11 == (undefined8 *)plVar7[2]) break;
  }
  cVar1 = *(char *)((long)plVar7 + 0x54);
  puVar8 = (undefined8 *)plVar7[1];
LAB_00104d97:
  local_c8 = plVar7[5];
LAB_00104da2:
  local_c8 = local_c8 - ((long)puVar2 - (long)puVar11 >> 5);
  local_b8 = plVar7[6] - ((long)puVar13 - (long)puVar8 >> 5);
  goto LAB_00104b42;
}



undefined8 sortlines_thread(undefined8 *param_1)

{
  sortlines(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6]);
  return 0;
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
    goto LAB_001050da;
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
  __printf_chk(2,uVar5,&_LC60);
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
  local_a8 = &_LC37;
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
    puVar7 = &_LC38;
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) goto LAB_0010555d;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC38);
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
LAB_0010555d:
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
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC38);
    if (puVar7 == &_LC38) {
      pcVar4 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,puVar7,pcVar4);
LAB_001050da:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "__rlimit_resource": Some values do not have unique names */

undefined8 main(uint param_1,pthread_mutex_t *param_2)

{
  byte *pbVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined4 uVar14;
  __pthread_internal_list *p_Var15;
  long *plVar16;
  char cVar17;
  char cVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  char *pcVar22;
  char *pcVar23;
  lconv *plVar24;
  undefined1 *puVar25;
  __int32_t **pp_Var26;
  byte *pbVar27;
  size_t sVar28;
  undefined *puVar29;
  code *pcVar30;
  undefined8 __ptr;
  pthread_mutex_t *__ptr_00;
  pthread_mutex_t *ppVar31;
  void *pvVar32;
  pthread_mutex_t *ppVar33;
  undefined8 uVar34;
  long *plVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  byte bVar38;
  undefined1 *puVar39;
  char *pcVar40;
  ulong uVar41;
  long lVar42;
  undefined8 extraout_RDX;
  long extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined *extraout_RDX_04;
  ulong __n;
  undefined8 extraout_RDX_05;
  ulong extraout_RDX_06;
  undefined8 extraout_RDX_07;
  ulong uVar43;
  byte bVar44;
  int *piVar45;
  ulong *puVar46;
  long *plVar47;
  undefined8 *puVar48;
  pthread_mutex_t *ppVar49;
  char *pcVar50;
  pthread_mutex_t *ppVar51;
  uint uVar52;
  pthread_mutex_t *ppVar53;
  undefined **ppuVar54;
  long in_FS_OFFSET;
  bool bVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  double extraout_XMM1_Qa;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  long local_438;
  ulong local_430;
  pthread_mutex_t *local_428;
  pthread_mutex_t *local_418;
  pthread_mutex_t *local_410;
  undefined8 local_408;
  pthread_mutex_t **local_3f8;
  pthread_mutex_t *local_3e0;
  pthread_mutex_t *local_3d0;
  ulong local_3c8;
  pthread_mutex_t *local_3c0;
  long local_3b8;
  undefined *local_3a8;
  undefined1 local_398 [112];
  undefined8 local_328 [4];
  undefined8 local_308;
  undefined8 uStack_300;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  char local_2f0;
  pthread_mutex_t *local_2d8;
  long local_2d0;
  ulong local_2c8;
  pthread_mutex_t *local_2c0;
  long local_2b8;
  byte local_2a8;
  pthread_mutex_t local_288 [7];
  _union_1457 local_168;
  pthread_mutex_t local_160;
  pthread_cond_t pStack_138;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  pthread_mutex_t local_78;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar22 = getenv("POSIXLY_CORRECT");
  local_438 = CONCAT71(local_438._1_7_,pcVar22 != (char *)0x0);
  iVar19 = posix2_version();
  local_430 = (ulong)(0x2b8 < iVar19 - 0x30db0U);
  set_program_name(param_2->__align);
  pcVar23 = setlocale(6,"");
  bindtextdomain("coreutils");
  textdomain("coreutils");
  _exit_failure = 2;
  hard_LC_COLLATE = hard_locale(3);
  cVar17 = hard_locale(2);
  hard_LC_TIME = cVar17;
  plVar24 = localeconv();
  decimal_point = *plVar24->decimal_point;
  if ((decimal_point == '\0') || (plVar24->decimal_point[1] != '\0')) {
    decimal_point = '.';
  }
  cVar18 = *plVar24->thousands_sep;
  thousands_sep = (int)cVar18;
  if (cVar18 != '\0') {
    if (plVar24->thousands_sep[1] == '\0') goto LAB_00107fd6;
    thousands_sep_ignored = 1;
  }
  thousands_sep = 0x80;
LAB_00107fd6:
  have_read_stdin = '\0';
  puVar25 = (undefined1 *)__ctype_b_loc();
  pp_Var26 = __ctype_toupper_loc();
  lVar42 = 0;
  ppVar51 = (pthread_mutex_t *)&nonprinting;
  do {
    while( true ) {
      uVar2 = *(ushort *)(*(long *)puVar25 + lVar42 * 2);
      bVar44 = (byte)(uVar2 >> 8);
      if (lVar42 != 10) break;
      DAT_00105bea = 1;
      lVar42 = 0xb;
      DAT_001059ea = 0;
      DAT_00105aea = (bVar44 >> 6 ^ 1) & 1;
      DAT_001058ea = (undefined1)(*pp_Var26)[10];
    }
    bVar55 = (uVar2 & 1) == 0;
    if (bVar55) {
      bVar38 = ((byte)(uVar2 >> 3) ^ 1) & 1;
    }
    else {
      bVar38 = 0;
    }
    (&blanks)[lVar42] = !bVar55;
    (&nondictionary)[lVar42] = bVar38;
    (&nonprinting)[lVar42] = (bVar44 >> 6 ^ 1) & 1;
    (&fold_toupper)[lVar42] = (char)(*pp_Var26)[lVar42];
    lVar42 = lVar42 + 1;
  } while (lVar42 != 0x100);
  if (cVar17 != '\0') {
    ppuVar54 = &monthtab;
    lVar42 = 1;
    do {
      pbVar27 = (byte *)rpl_nl_langinfo((int)lVar42 + 0x2000d);
      sVar28 = strlen((char *)pbVar27);
      puVar29 = (undefined *)xmalloc(sVar28 + 1);
      *(int *)(ppuVar54 + 1) = (int)lVar42;
      *ppuVar54 = puVar29;
      if (sVar28 != 0) {
        ppVar51 = *(pthread_mutex_t **)puVar25;
        pbVar1 = pbVar27 + sVar28;
        sVar28 = 0;
        do {
          if ((*(byte *)((long)ppVar51 + (ulong)*pbVar27 * 2) & 1) == 0) {
            puVar29[sVar28] = (&fold_toupper)[*pbVar27];
            sVar28 = sVar28 + 1;
          }
          pbVar27 = pbVar27 + 1;
        } while (pbVar27 != pbVar1);
      }
      lVar42 = lVar42 + 1;
      puVar29[sVar28] = 0;
      ppuVar54 = ppuVar54 + 2;
    } while (lVar42 != 0xd);
    qsort(&monthtab,0xc,0x10,struct_month_cmp);
  }
  sigemptyset((sigset_t *)caught_signals);
  piVar45 = &sig_8;
  do {
    iVar19 = *piVar45;
    sigaction(iVar19,(sigaction *)0x0,(sigaction *)&local_168);
    if (local_168.sa_handler != (__sighandler_t)0x1) {
      sigaddset((sigset_t *)caught_signals,iVar19);
    }
    piVar45 = piVar45 + 1;
  } while (piVar45 != (int *)&DAT_0010604c);
  piVar45 = &sig_8;
  local_168.sa_handler = sighandler;
  local_160.__align = caught_signals._0_8_;
  local_160._8_8_ = caught_signals._8_8_;
  local_160._16_8_ = caught_signals._16_8_;
  local_160.__data.__list.__prev = (__pthread_internal_list *)caught_signals._24_8_;
  local_160.__data.__list.__next = (__pthread_internal_list *)caught_signals._32_8_;
  pStack_138.__align = caught_signals._40_8_;
  local_e0 = 0;
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
      iVar19 = *piVar45;
      iVar20 = sigismember((sigset_t *)caught_signals,iVar19);
      if (iVar20 == 0) break;
      piVar45 = piVar45 + 1;
      sigaction(iVar19,(sigaction *)&local_168,(sigaction *)0x0);
      if (piVar45 == (int *)&DAT_0010604c) goto LAB_001082aa;
    }
    piVar45 = piVar45 + 1;
  } while (piVar45 != (int *)&DAT_0010604c);
LAB_001082aa:
  signal(0x11,(__sighandler_t)0x0);
  ppVar53 = (pthread_mutex_t *)0x0;
  atexit(exit_cleanup);
  key_init(local_328,8);
  local_328[0] = 0xffffffffffffffff;
  local_408 = (pthread_mutex_t *)CONCAT44(local_408._4_4_,param_1);
  auVar59 = xnmalloc();
  uVar41 = 0;
  bVar55 = false;
  ppVar49 = (pthread_mutex_t *)0x0;
  __ptr_00 = (pthread_mutex_t *)(ulong)param_1;
  local_428 = (pthread_mutex_t *)local_398;
  local_3e0 = (pthread_mutex_t *)0x0;
  local_418 = (pthread_mutex_t *)0x0;
  local_3c0 = (pthread_mutex_t *)0x0;
  local_410 = (pthread_mutex_t *)0x0;
  iVar19 = tab;
LAB_001083b1:
  do {
    tab = iVar19;
    __ptr = auVar59._0_8_;
    local_398._0_4_ = 0xffffffff;
    if ((int)uVar41 != -1) {
      if (ppVar53 == (pthread_mutex_t *)0x0) goto LAB_00108448;
      if (pcVar22 == (char *)0x0) goto LAB_00108448;
      if (((byte)local_430 == '\x01') && ((char)ppVar49 == '\0')) {
        if ((int)__ptr_00 == _optind) {
          if (local_418 == (pthread_mutex_t *)0x0) {
            param_2 = (pthread_mutex_t *)0x0;
            goto LAB_0010857e;
          }
LAB_0010a11c:
          uVar36 = quotearg_style(4,*(ulong *)__ptr);
          uVar37 = dcgettext(0,"extra operand %s",5);
                    /* WARNING: Subroutine does not return */
          error(0,0,uVar37,uVar36);
        }
        lVar42 = (long)_optind;
        auVar60._8_8_ = lVar42;
        auVar60._0_8_ = __ptr;
        auVar59._8_8_ = lVar42;
        auVar59._0_8_ = __ptr;
        pcVar50 = *(char **)((long)param_2 + lVar42 * 8);
        if ((*pcVar50 == '-') && (auVar59 = auVar60, pcVar50[1] == 'o')) {
          iVar19 = _optind;
          if (pcVar50[2] == '\0') goto LAB_00108a13;
          goto LAB_00108448;
        }
      }
    }
LAB_00108390:
    __ptr = auVar59._0_8_;
    ppVar33 = ppVar51;
    if ((int)__ptr_00 <= _optind) {
LAB_0010a6f3:
      __ptr = auVar59._0_8_;
      param_2 = (pthread_mutex_t *)((ulong)ppVar49 & 0xffffffff);
      ppVar51 = ppVar33;
      if (local_418 != (pthread_mutex_t *)0x0) {
        if (ppVar53 == (pthread_mutex_t *)0x0) {
          lVar42 = stream_open(local_418,&_LC28,auVar59._8_8_);
          if (lVar42 != 0) {
            __ptr_00 = local_288;
            readtokens0_init(__ptr_00);
            cVar17 = readtokens0(lVar42,__ptr_00);
            if (cVar17 == '\0') {
              uVar36 = quotearg_style(4,local_418);
              pcVar22 = "cannot read file names from %s";
              goto LAB_0010a7ba;
            }
            xfclose(lVar42);
            ppVar49 = (pthread_mutex_t *)
                      CONCAT44(local_288[0].__data.__count,local_288[0].__data.__lock);
            if (ppVar49 == (pthread_mutex_t *)0x0) {
              uVar36 = quotearg_style(4,local_418);
              pcVar22 = "no input from %s";
              goto LAB_0010a7ba;
            }
            free((void *)__ptr);
            ppVar53 = (pthread_mutex_t *)0x0;
            do {
              pcVar50 = *(char **)(local_288[0]._8_8_ + (long)ppVar53 * 8);
              if ((*pcVar50 == '-') && (pcVar50[1] == '\0')) {
                uVar36 = quotearg_style(4);
                pcVar22 = "when reading file names from stdin, no file name of %s allowed";
                goto LAB_0010a7ba;
              }
              ppVar53 = (pthread_mutex_t *)((long)&(ppVar53->__data).__lock + 1);
              if (*pcVar50 == '\0') {
                uVar36 = quotearg_n_style_colon(0,3,local_418);
                uVar37 = dcgettext(0,"%s:%lu: invalid zero-length file name",5);
                    /* WARNING: Subroutine does not return */
                error(2,0,uVar37,uVar36,ppVar53);
              }
              ppVar51 = ppVar33;
              __ptr = local_288[0]._8_8_;
            } while (ppVar49 != ppVar53);
            goto LAB_0010857e;
          }
          iVar20 = xfopen_part_0(local_418);
LAB_0010a85b:
          xstrtol_fatal(iVar20,(ulong)local_3d0 & 0xffffffff,0xffffff87,long_options,ppVar33);
          goto LAB_0010a879;
        }
        goto LAB_0010a11c;
      }
LAB_0010857e:
      cVar17 = (char)param_2;
      if (keylist != (char *)0x0) {
        __ptr_00 = (pthread_mutex_t *)0x0;
        pcVar40 = keylist;
        pcVar50 = keylist;
        do {
          while( true ) {
            cVar18 = default_key_compare(pcVar40);
            if ((cVar18 != '\0') && (pcVar40[0x37] == '\0')) break;
            pbVar27 = (byte *)(pcVar40 + 0x33);
            pcVar40 = *(char **)(pcVar40 + 0x40);
            __ptr_00 = (pthread_mutex_t *)(ulong)((uint)__ptr_00 | (uint)*pbVar27);
            if (pcVar40 == (char *)0x0) goto LAB_001085fa;
          }
          *(undefined8 *)(pcVar40 + 0x20) = local_308;
          *(undefined8 *)(pcVar40 + 0x28) = uStack_300;
          pcVar40[0x38] = local_2f0;
          *(ulong *)(pcVar40 + 0x30) = CONCAT44(uStack_2f4,local_2f8);
          pcVar40 = *(char **)(pcVar40 + 0x40);
          __ptr_00 = (pthread_mutex_t *)(ulong)((uint)__ptr_00 | local_2f8 >> 0x18);
        } while (pcVar40 != (char *)0x0);
LAB_001085fa:
        local_430 = 0;
        do {
          if (1 < (uint)(byte)pcVar50[0x32] + (uint)(byte)pcVar50[0x34] + (uint)(byte)pcVar50[0x35]
                  + (uint)(byte)pcVar50[0x36] +
                  (uint)(byte)(pcVar50[0x38] | pcVar50[0x33] | *(long *)(pcVar50 + 0x20) != 0))
          goto LAB_0010a6c5;
          pcVar50 = *(char **)(pcVar50 + 0x40);
joined_r0x00109e9f:
        } while (pcVar50 != (char *)0x0);
        if (debug == '\0') {
          uStack_2f4._3_1_ = (undefined1)((uint)uStack_2f4 >> 0x18);
          reverse = uStack_2f4._3_1_;
          if ((char)__ptr_00 != '\0') {
            lVar42 = randread_new(local_410,0x10);
            if (lVar42 == 0) {
              if (local_410 == (pthread_mutex_t *)0x0) {
                local_410 = (pthread_mutex_t *)0x107a50;
              }
              pcVar22 = "open failed";
              goto LAB_0010a635;
            }
            ppVar49 = &local_78;
            randread(lVar42,ppVar49,0x10);
            iVar19 = randread_free(lVar42);
            if (iVar19 == 0) {
              lVar42 = dlopen("libcrypto.so.3",0x101);
              if ((((lVar42 != 0) &&
                   (pcVar30 = (code *)dlsym(lVar42,"MD5_Init"), pcVar30 != (code *)0x0)) &&
                  (ptr_MD5_Init = pcVar30, pcVar30 = (code *)dlsym(lVar42,"MD5_Update"),
                  pcVar30 != (code *)0x0)) &&
                 (ptr_MD5_Update = pcVar30, lVar42 = dlsym(lVar42,"MD5_Final"), lVar42 != 0)) {
                puVar25 = random_md5_state;
                ptr_MD5_Final = lVar42;
                (*ptr_MD5_Init)(random_md5_state);
                (*ptr_MD5_Update)(random_md5_state,ppVar49,0x10);
                goto LAB_001089a8;
              }
              link_failure();
            }
            pcVar22 = "close failed";
LAB_0010a635:
            uVar36 = dcgettext(0,pcVar22,5);
                    /* WARNING: Subroutine does not return */
            sort_die(uVar36,local_410);
          }
          goto LAB_001089a8;
        }
LAB_00108653:
        local_408 = (pthread_mutex_t *)
                    CONCAT71(local_408._1_7_,cVar17 != '\0' || local_3e0 != (pthread_mutex_t *)0x0);
        if (cVar17 == '\0' && local_3e0 == (pthread_mutex_t *)0x0) {
          if ((pcVar23 != (char *)0x0) && (pcVar22 = setlocale(3,""), pcVar22 != (char *)0x0)) {
            if (hard_LC_COLLATE != '\0') {
              pcVar22 = setlocale(3,(char *)0x0);
              uVar36 = quote(pcVar22);
              uVar37 = dcgettext(0,"text ordering performed using %s sorting rules",5);
                    /* WARNING: Subroutine does not return */
              error(0,0,uVar37,uVar36);
            }
            uVar36 = dcgettext(0,"text ordering performed using simple byte comparison",5);
                    /* WARNING: Subroutine does not return */
            error(0,0,&_LC11,uVar36);
          }
          uVar36 = dcgettext(0,"failed to set locale",5);
                    /* WARNING: Subroutine does not return */
          error(0,0,&_LC11,uVar36);
        }
        if (cVar17 == '\0') {
          param_2 = (pthread_mutex_t *)0x6f;
        }
        pcVar50 = opts_7;
        opts_7[0] = (char)param_2;
        incompatible_options();
LAB_0010a6c5:
        pcVar50[0x37] = '\0';
        ppVar33 = &local_78;
        pcVar50[0x30] = '\0';
        pcVar50[0x31] = '\0';
        key_to_opts();
        incompatible_options(ppVar33);
        goto LAB_0010a6e7;
      }
      cVar18 = default_key_compare(local_328);
      if (cVar18 == '\0') {
        insertkey();
        local_430 = 1;
        __ptr_00 = (pthread_mutex_t *)(ulong)local_2f8._3_1_;
        pcVar50 = keylist;
        goto joined_r0x00109e9f;
      }
      if (debug != '\0') {
        local_430 = 0;
        __ptr_00 = (pthread_mutex_t *)0x0;
        goto LAB_00108653;
      }
      reverse = uStack_2f4._3_1_;
LAB_001089a8:
      if (temp_dir_count == 0) {
        pcVar50 = getenv("TMPDIR");
        if (pcVar50 == (char *)0x0) {
          pcVar50 = "/tmp";
        }
        add_temp_dir(pcVar50);
      }
      if (ppVar53 == (pthread_mutex_t *)0x0) {
        ppVar53 = (pthread_mutex_t *)0x1;
        free((void *)__ptr);
        __ptr = xmalloc(8);
        *(undefined **)__ptr = &_LC143;
      }
      ppVar33 = sort_size;
      if ((sort_size != (pthread_mutex_t *)0x0) &&
         (ppVar33 = (pthread_mutex_t *)((ulong)nmerge * 0x22),
         (pthread_mutex_t *)((ulong)nmerge * 0x22) < sort_size)) {
        ppVar33 = sort_size;
      }
      sort_size = ppVar33;
      if (cVar17 == '\0') {
        puVar46 = (ulong *)__ptr;
        local_3d0 = (pthread_mutex_t *)0x0;
        do {
          ppVar49 = local_3d0;
          pcVar22 = (char *)*puVar46;
          if (((*pcVar22 != '-') || (pcVar22[1] != '\0')) &&
             (iVar19 = euidaccess(pcVar22,4), iVar19 != 0)) {
            uVar41 = *puVar46;
            pcVar22 = "cannot read";
LAB_00108f97:
            uVar36 = dcgettext(0,pcVar22,5);
                    /* WARNING: Subroutine does not return */
            sort_die(uVar36,uVar41);
          }
          local_3d0 = (pthread_mutex_t *)(ppVar49->__size + 1);
          puVar46 = puVar46 + 1;
        } while (ppVar53 != local_3d0);
        if (local_3e0 != (pthread_mutex_t *)0x0) {
          iVar19 = open(local_3e0->__size,0x80041,0x1b6);
          if (iVar19 < 0) {
LAB_0010ab49:
            uVar36 = dcgettext(0,"open failed",5);
                    /* WARNING: Subroutine does not return */
            sort_die(uVar36,local_3e0);
          }
          if (iVar19 != 1) {
            move_fd_part_0(iVar19,1);
          }
        }
        if (!bVar55) {
          if (local_3c0 == (pthread_mutex_t *)0x0) {
            ppVar51 = (pthread_mutex_t *)num_processors();
            local_3c0 = (pthread_mutex_t *)0x8;
            if (ppVar51 < (pthread_mutex_t *)0x9) {
              local_3c0 = ppVar51;
            }
          }
          local_418 = (pthread_mutex_t *)0xffffffffffffff;
          if (local_3c0 < (pthread_mutex_t *)0x100000000000000) {
            local_418 = local_3c0;
          }
          local_2c0 = (pthread_mutex_t *)0x0;
          param_2 = (pthread_mutex_t *)((long)local_418 * 2);
          local_3c8 = (long)local_418 << 8;
          local_438 = 0;
          local_3a8 = &_LC28;
          local_410 = param_2;
          goto LAB_001095bb;
        }
        lVar42 = xcalloc(local_3d0,0x10);
        ppVar51 = (pthread_mutex_t *)0x0;
        do {
          *(ulong *)(lVar42 + (long)ppVar51 * 0x10) = *(ulong *)(__ptr + ppVar51 * 8);
          bVar55 = ppVar49 != ppVar51;
          ppVar51 = (pthread_mutex_t *)((long)&(ppVar51->__data).__lock + 1);
        } while (bVar55);
        merge(lVar42,0,local_3d0,local_3e0);
        goto LAB_0010985c;
      }
      if (ppVar53 != (pthread_mutex_t *)0x1) {
        uVar36 = quotearg_style(4,*(ulong *)(__ptr + 8));
        uVar37 = dcgettext(0,"extra operand %s not allowed with -%c",5);
                    /* WARNING: Subroutine does not return */
        error(2,0,uVar37,uVar36,(int)cVar17);
      }
      ppVar53 = (pthread_mutex_t *)0x0;
      if (local_3e0 == (pthread_mutex_t *)0x0) {
        local_430 = *(ulong *)__ptr;
        local_428 = (pthread_mutex_t *)stream_open(local_430,&_LC28);
        pcVar22 = keylist;
        if (local_428 == (pthread_mutex_t *)0x0) goto LAB_0010a4df;
        uVar21 = (uint)unique;
        ppVar51 = merge_buffer_size;
        if (merge_buffer_size <= sort_size) {
          ppVar51 = sort_size;
        }
        uVar41 = 0;
        initbuf(&local_2d8,0x20,ppVar51);
        local_398._0_8_ = (void *)0x0;
        local_418 = (pthread_mutex_t *)0x0;
        break;
      }
      opts_6._0_1_ = cVar17;
      iVar19 = incompatible_options(&opts_6);
      lVar42 = extraout_RDX_00;
LAB_00108a13:
      iVar19 = iVar19 + 1;
      if (iVar19 == (int)__ptr_00) goto LAB_0010839f;
LAB_00108448:
      puVar39 = long_options;
      auVar60 = getopt_long((ulong)__ptr_00 & 0xffffffff,param_2,short_options);
      uVar36 = local_398._0_8_;
      ppVar33 = _optarg;
      auVar11._8_8_ = _optarg;
      auVar11._0_8_ = __ptr;
      auVar9._8_8_ = _optarg;
      auVar9._0_8_ = __ptr;
      auVar7._8_8_ = _optarg;
      auVar7._0_8_ = __ptr;
      auVar4._8_8_ = _optarg;
      auVar4._0_8_ = __ptr;
      puVar29 = auVar60._8_8_;
      auVar59._8_8_ = puVar29;
      auVar59._0_8_ = __ptr;
      auVar10._8_8_ = puVar29;
      auVar10._0_8_ = __ptr;
      auVar8._8_8_ = puVar29;
      auVar8._0_8_ = __ptr;
      auVar6._8_8_ = puVar29;
      auVar6._0_8_ = __ptr;
      auVar5._8_8_ = puVar29;
      auVar5._0_8_ = __ptr;
      uVar43 = auVar60._0_8_;
      uVar21 = auVar60._0_4_;
      uVar41 = uVar43 & 0xffffffff;
      if (uVar21 == 0xffffffff) goto LAB_00108390;
      if (0x87 < (int)uVar21) goto switchD_001084a0_caseD_2;
      if ((int)uVar21 < 1) {
        if (uVar21 != 0xffffff7d) goto LAB_0010a4fc;
        uVar36 = proper_name_lite("Paul Eggert","Paul Eggert");
        uVar37 = proper_name_lite("Mike Haertel","Mike Haertel");
        version_etc(_stdout,&_LC38,"GNU coreutils",_Version,uVar37,uVar36,0,uVar37);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (0x87 < uVar21) goto switchD_001084a0_caseD_2;
      uVar14 = local_398._0_4_;
      uVar52 = local_408._4_4_;
      iVar19 = tab;
      switch(uVar43 & 0xffffffff) {
      case 1:
        goto switchD_001084a0_caseD_1;
      default:
        goto switchD_001084a0_caseD_2;
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
        goto switchD_001084a0_caseD_4d;
      case 0x53:
        local_3d0 = (pthread_mutex_t *)CONCAT44(local_3d0._4_4_,local_398._0_4_);
        iVar19 = xstrtoumax(_optarg,local_288,10,&local_2d8,"EgGkKmMPQRtTYZ");
        uVar41 = uVar43 & 0xffffffff;
        if (iVar19 != 0) goto LAB_0010912f;
        uVar21 = (int)*(char *)(CONCAT44(local_288[0].__data.__count,local_288[0].__data.__lock) +
                               -1) - 0x30;
        uVar43 = (ulong)uVar21;
        if (9 < uVar21) goto LAB_00108ea6;
        uVar43 = 0x3fffffffffffff;
        if (local_2d8 < (pthread_mutex_t *)0x40000000000000) {
          local_2d8 = (pthread_mutex_t *)((long)local_2d8 << 10);
          goto LAB_00108ea6;
        }
        goto LAB_00109243;
      case 0x54:
        local_408 = (pthread_mutex_t *)CONCAT44(local_408._4_4_,uVar21);
        add_temp_dir(_optarg);
        auVar59._8_8_ = extraout_RDX_03;
        uVar41 = uVar43 & 0xffffffff;
        iVar19 = tab;
        goto LAB_001083b1;
      case 0x6b:
        ppVar33 = (pthread_mutex_t *)
                  key_init((__pthread_internal_list **)
                           ((long)&(((pthread_mutex_t *)local_398)->__data).__list + 8),
                           &DAT_00105dcc,"invalid number at field start");
        pcVar50 = (char *)parse_field_count(_optarg,ppVar33);
        lVar42 = ppVar33->__align;
        ppVar33->__align = lVar42 + -1;
        if (lVar42 == 0) {
LAB_0010a879:
          badfieldspec(_optarg,"field number is zero");
          goto LAB_0010a88c;
        }
        if (*pcVar50 == '.') {
          pcVar50 = (char *)parse_field_count(pcVar50 + 1,&(ppVar33->__data).__owner,
                                              "invalid number after \'.\'");
          lVar42 = *(long *)&(ppVar33->__data).__owner;
          *(long *)&(ppVar33->__data).__owner = lVar42 + -1;
          if (lVar42 == 0) {
            badfieldspec(_optarg,"character offset is zero");
            goto LAB_0010a11c;
          }
        }
        if ((ppVar33->__align == 0) &&
           (lVar42._0_4_ = *(int *)((long)ppVar33 + 8),
           lVar42._4_4_ = *(uint *)((long)ppVar33 + 0xc), lVar42 == 0)) {
          ppVar33->__align = -1;
        }
        pcVar50 = (char *)set_ordering(pcVar50,ppVar33,0);
        p_Var15 = _UNK_0010b188;
        if (*pcVar50 == ',') {
          pcVar50 = (char *)parse_field_count(pcVar50 + 1,&(ppVar33->__data).__kind,
                                              "invalid number after \',\'");
          lVar42 = *(long *)&(ppVar33->__data).__kind;
          *(long *)&(ppVar33->__data).__kind = lVar42 + -1;
          if (lVar42 == 0) goto LAB_0010a879;
          if (*pcVar50 == '.') {
            pcVar50 = (char *)parse_field_count(pcVar50 + 1,&(ppVar33->__data).__list,
                                                "invalid number after \'.\'");
          }
          pcVar50 = (char *)set_ordering(pcVar50,ppVar33,1);
        }
        else {
          uVar14 = _UNK_0010b184;
          *(undefined4 *)((long)ppVar33 + 0x10) = __LC93;
          *(undefined4 *)((long)ppVar33 + 0x14) = uVar14;
          (ppVar33->__data).__list.__prev = p_Var15;
        }
        local_408 = ppVar33;
        if (*pcVar50 != '\0') goto LAB_0010a4e9;
        local_408._4_4_ = (uint)((ulong)ppVar33 >> 0x20);
        local_408 = (pthread_mutex_t *)CONCAT44(local_408._4_4_,uVar21);
        insertkey(ppVar33);
        auVar59._8_8_ = extraout_RDX_02;
        uVar41 = (ulong)uVar21;
        iVar19 = tab;
        goto LAB_001083b1;
      case 0x6d:
        goto switchD_001084a0_caseD_6d;
      case 0x6f:
        if (local_3e0 != (pthread_mutex_t *)0x0) {
          local_408 = _optarg;
          iVar19 = strcmp(local_3e0->__size,_optarg->__size);
          if (iVar19 != 0) {
            pcVar22 = "multiple output files specified";
            goto LAB_0010a5fe;
          }
        }
        uVar41 = uVar43 & 0xffffffff;
        local_3e0 = ppVar33;
        iVar19 = tab;
        auVar59 = auVar11;
        goto LAB_001083b1;
      case 0x73:
        stable = 1;
        goto LAB_001083b1;
      case 0x74:
        iVar19 = (int)_optarg->__size[0];
        if (_optarg->__size[0] == '\0') {
LAB_0010a88c:
          pcVar22 = "empty tab";
LAB_0010a5fe:
          uVar36 = dcgettext(0,pcVar22,5);
                    /* WARNING: Subroutine does not return */
          error(2,0,uVar36);
        }
        if (_optarg->__size[1] != '\0') {
          local_408 = _optarg;
          iVar19 = strcmp(_optarg->__size,"\\0");
          if (iVar19 != 0) {
            uVar36 = quote(ppVar33);
            pcVar22 = "multi-character tab %s";
LAB_0010a7ba:
            uVar37 = dcgettext(0,pcVar22,5);
                    /* WARNING: Subroutine does not return */
            error(2,0,uVar37,uVar36);
          }
          iVar19 = 0;
        }
        uVar41 = uVar43 & 0xffffffff;
        auVar12._8_4_ = tab;
        auVar12._0_8_ = __ptr;
        auVar12._12_4_ = 0;
        auVar59._8_4_ = tab;
        auVar59._12_4_ = 0;
        if ((tab != 0x80) && (auVar59 = auVar12, tab != iVar19)) {
          pcVar22 = "incompatible tabs";
          goto LAB_0010a5fe;
        }
        goto LAB_001083b1;
      case 0x75:
        unique = 1;
        auVar59 = auVar10;
        goto LAB_001083b1;
      case 0x79:
        auVar59 = auVar9;
        if (*(pthread_mutex_t **)((long)param_2 + (long)_optind * 8 + -8) == _optarg) {
          while( true ) {
            auVar59._8_8_ = ppVar33;
            if (9 < (int)ppVar33->__size[0] - 0x30U) break;
            ppVar33 = (pthread_mutex_t *)((long)&(ppVar33->__data).__lock + 1);
          }
          _optind = _optind + -1 + (uint)(ppVar33->__size[0] == '\0');
        }
        goto LAB_001083b1;
      case 0x7a:
        eolchar = 0;
        auVar59 = auVar8;
        goto LAB_001083b1;
      case 0x80:
        uVar41 = 99;
        if (_optarg != (pthread_mutex_t *)0x0) {
          ppVar51 = _argmatch_die;
          puVar29 = &DAT_00105dcc + *(int *)(&DAT_00105dcc + (uVar43 & 0xffffffff) * 4);
          lVar42 = __xargmatch_internal
                             ("--check",_optarg,&check_args,&check_types,1,_argmatch_die,1);
          uVar41 = (ulong)(uint)(int)*(char *)((long)&check_types + lVar42);
        }
      case 0x43:
      case 99:
        auVar59._8_8_ = puVar29;
        if (((char)ppVar49 == '\0') || ((int)ppVar49 == (int)uVar41)) {
          ppVar49 = (pthread_mutex_t *)(ulong)(uint)(int)(char)uVar41;
          iVar19 = tab;
          goto LAB_001083b1;
        }
LAB_0010a6e7:
        incompatible_options(&_LC88);
        auVar59._8_8_ = extraout_RDX_07;
        auVar59._0_8_ = __ptr;
        ppVar33 = ppVar51;
        goto LAB_0010a6f3;
      case 0x81:
        if (compress_program != (pthread_mutex_t *)0x0) {
          local_408 = _optarg;
          iVar19 = strcmp(compress_program->__size,_optarg->__size);
          if (iVar19 != 0) {
            pcVar22 = "multiple compress programs specified";
            goto LAB_0010a5fe;
          }
        }
        uVar41 = uVar43 & 0xffffffff;
        compress_program = ppVar33;
        iVar19 = tab;
        auVar59 = auVar7;
        goto LAB_001083b1;
      case 0x82:
        debug = '\x01';
        auVar59 = auVar6;
        goto LAB_001083b1;
      case 0x83:
        local_418 = _optarg;
        auVar59 = auVar5;
        goto LAB_001083b1;
      case 0x84:
        local_3c8 = uVar43 & 0xffffffff;
        local_408 = _optarg;
        uVar21 = xstrtoumax(_optarg,0,10,&local_2d8,&_LC2);
        local_3d0 = (pthread_mutex_t *)CONCAT44(local_3d0._4_4_,uVar21);
        iVar19 = getrlimit(RLIMIT_NOFILE,(rlimit *)&local_288[0].__data);
        uVar41 = uVar43 & 0xffffffff;
        ppVar51 = (pthread_mutex_t *)0x11;
        if (iVar19 == 0) {
          ppVar51 = (pthread_mutex_t *)(ulong)(local_288[0].__data.__lock - 3);
        }
        if (uVar21 == 0) {
          auVar59._8_8_ = 0xffffffff;
          nmerge = (uint)local_2d8;
          if (local_2d8 < (pthread_mutex_t *)0x100000000) {
            if (nmerge < 2) {
              uVar37 = quote(ppVar33);
              uVar36 = *(undefined8 *)(long_options + (long)(int)uVar14 * 0x20);
              uVar34 = dcgettext(0,"invalid --%s argument %s",5);
                    /* WARNING: Subroutine does not return */
              error(0,0,uVar34,uVar36,uVar37);
            }
            iVar19 = tab;
            if (nmerge <= (uint)ppVar51) goto LAB_001083b1;
          }
LAB_00108b7c:
          uVar37 = quote(ppVar33);
          uVar36 = *(undefined8 *)(long_options + (long)(int)uVar14 * 0x20);
          uVar34 = dcgettext(0,"--%s argument %s too large",5);
                    /* WARNING: Subroutine does not return */
          error(0,0,uVar34,uVar36,uVar37);
        }
        __ptr_00 = (pthread_mutex_t *)(ulong)uVar21;
        if (uVar21 == 1) goto LAB_00108b7c;
        iVar19 = xstrtol_fatal(__ptr_00,uVar36 & 0xffffffff,0xffffff84,long_options,ppVar33);
LAB_0010912f:
        if (iVar19 == 2) {
          pcVar50 = (char *)CONCAT44(local_288[0].__data.__count,local_288[0].__data.__lock);
          uVar43 = (ulong)((int)pcVar50[-1] - 0x30U);
          if (((int)pcVar50[-1] - 0x30U < 10) && (pcVar50[1] == '\0')) {
            if (*pcVar50 == '%') {
              dVar56 = (double)physmem_total();
              uVar41 = uVar41 & 0xffffffff;
              uVar43 = extraout_RDX_06;
              if ((long)local_2d8 < 0) {
                uVar43 = (ulong)local_2d8 >> 1 | (ulong)((uint)local_2d8 & 1);
              }
              dVar56 = ((double)local_2d8 * dVar56) / __LC103;
              if (dVar56 < _LC104) {
                if (dVar56 < _LC105) {
                  local_2d8 = (pthread_mutex_t *)(long)dVar56;
                }
                else {
                  local_2d8 = (pthread_mutex_t *)((long)(dVar56 - _LC105) ^ 0x8000000000000000);
                }
                goto LAB_00108ea6;
              }
            }
            else if (*pcVar50 == 'b') {
LAB_00108ea6:
              auVar13._8_8_ = local_2d8;
              auVar13._0_8_ = __ptr;
              auVar59._8_8_ = uVar43;
              local_408 = ppVar33;
              iVar19 = tab;
              if (sort_size <= local_2d8) {
                sort_size = (pthread_mutex_t *)((ulong)nmerge * 0x22);
                auVar59._8_8_ = sort_size;
                if (sort_size < local_2d8) {
                  sort_size = local_2d8;
                  auVar59 = auVar13;
                }
              }
              goto LAB_001083b1;
            }
          }
        }
LAB_00109243:
        local_408 = ppVar33;
        xstrtol_fatal();
        puVar29 = extraout_RDX_04;
        __ptr_00 = ppVar33;
switchD_001084a0_caseD_6d:
        auVar59._8_8_ = puVar29;
        bVar55 = true;
        iVar19 = tab;
        goto LAB_001083b1;
      case 0x85:
        if (local_410 != (pthread_mutex_t *)0x0) {
          local_408 = (pthread_mutex_t *)CONCAT44(local_408._4_4_,uVar21);
          iVar19 = strcmp(local_410->__size,_optarg->__size);
          if (iVar19 != 0) {
            pcVar22 = "multiple random sources specified";
            goto LAB_0010a5fe;
          }
        }
        uVar41 = uVar43 & 0xffffffff;
        local_410 = ppVar33;
        iVar19 = tab;
        auVar59 = auVar4;
        goto LAB_001083b1;
      case 0x86:
        ppVar51 = _argmatch_die;
        lVar42 = __xargmatch_internal
                           ("--sort",_optarg,sort_args,&sort_types,1,_argmatch_die,1,puVar39);
        uVar41 = (ulong)(uint)(int)*(char *)((long)&sort_types + lVar42);
switchD_001084a0_caseD_4d:
        local_78.__size[0] = (char)uVar41;
        local_78.__size[1] = '\0';
        set_ordering(&local_78,local_328,2);
        auVar59._8_8_ = extraout_RDX;
        iVar19 = tab;
        goto LAB_001083b1;
      case 0x87:
        local_3d0 = (pthread_mutex_t *)CONCAT44(local_3d0._4_4_,local_398._0_4_);
        local_408 = _optarg;
        ppVar51 = _optarg;
        iVar20 = xstrtoumax(_optarg,0,10,local_288,&_LC2);
        auVar59._8_8_ = extraout_RDX_01;
        auVar3._8_8_ = extraout_RDX_01;
        auVar3._0_8_ = __ptr;
        uVar41 = uVar43 & 0xffffffff;
        iVar19 = tab;
        if (iVar20 == 1) {
          local_3c0 = (pthread_mutex_t *)0xffffffffffffffff;
        }
        else {
          if (iVar20 != 0) goto LAB_0010a85b;
          local_3c0 = (pthread_mutex_t *)
                      CONCAT44(local_288[0].__data.__count,local_288[0].__data.__lock);
          ppVar51 = ppVar33;
          auVar59 = auVar3;
          if (local_3c0 == (pthread_mutex_t *)0x0) {
            pcVar22 = "number in parallel must be nonzero";
            goto LAB_0010a5fe;
          }
        }
        goto LAB_001083b1;
      }
    }
    lVar42 = (long)_optind;
    iVar19 = _optind + 1;
LAB_0010839f:
    auVar59._8_8_ = lVar42;
    auVar59._0_8_ = __ptr;
    _optind = iVar19;
    *(ulong *)(__ptr + ppVar53 * 8) = *(ulong *)((long)param_2 + lVar42 * 8);
    ppVar53 = (pthread_mutex_t *)(ppVar53->__size + 1);
    iVar19 = tab;
  } while( true );
LAB_001099fd:
  cVar18 = fillbuf(&local_2d8,local_428,local_430);
  uVar43 = local_2c8;
  if (cVar18 == '\0') {
    bVar44 = 1;
LAB_00109b4f:
    xfclose(local_428,local_430);
    free(local_2d8);
    free((void *)local_398._0_8_);
                    /* WARNING: Subroutine does not return */
    exit((uint)(bVar44 ^ 1));
  }
  plVar47 = (long *)(local_2c0->__size + (long)local_2d8->__size);
  lVar42 = local_2c8 * -4;
  if ((uVar41 != 0) &&
     (iVar19 = compare((pthread_mutex_t *)local_398,plVar47 + -4), plVar35 = plVar47,
     (int)(uVar21 ^ 1) <= iVar19)) {
LAB_00109b44:
    if (cVar17 == 'c') {
      uVar37 = umaxtostr(((long)plVar47 - (long)(plVar35 + -4) >> 5) + (long)local_418,&local_78);
      uVar36 = _program_name;
      uVar34 = dcgettext(0,"%s: %s:%s: disorder: ",5);
      __fprintf_chk(_stderr,2,uVar34,uVar36,local_430,uVar37);
      uVar36 = dcgettext(0,"standard error",5);
      write_line(plVar35 + -4,_stderr,uVar36);
    }
    bVar44 = 0;
    goto LAB_00109b4f;
  }
  plVar16 = plVar47 + -4;
  while (plVar35 = plVar16, plVar47 + lVar42 < plVar35) {
    iVar19 = compare(plVar35,plVar35 + -4);
    plVar16 = plVar35 + -4;
    if ((int)(uVar21 ^ 1) <= iVar19) goto LAB_00109b44;
  }
  __n = plVar35[1];
  local_418 = (pthread_mutex_t *)((long)local_418 + uVar43);
  uVar43 = uVar41;
  if (uVar41 < __n) {
    do {
      uVar43 = uVar43 * 2;
      uVar41 = __n;
      if (uVar43 == 0) break;
      uVar41 = uVar43;
    } while (uVar43 < __n);
    free((void *)local_398._0_8_);
    local_398._0_8_ = xmalloc(uVar41);
    __n = plVar35[1];
  }
  pvVar32 = memcpy((void *)local_398._0_8_,(void *)*plVar35,__n);
  local_398._8_8_ = plVar35[1];
  if (pcVar22 != (char *)0x0) {
    local_398._16_8_ = (plVar35[2] - *plVar35) + (long)pvVar32;
    local_398._24_8_ = (plVar35[3] - *plVar35) + (long)pvVar32;
  }
  goto LAB_001099fd;
switchD_001084a0_caseD_2:
  usage(2);
  dVar56 = extraout_XMM1_Qa;
  do {
    ppVar51 = (pthread_mutex_t *)(long)dVar56;
LAB_00109dd9:
    do {
      size_bound_0 = (pthread_mutex_t *)((ulong)nmerge * 0x22);
      if ((pthread_mutex_t *)((ulong)nmerge * 0x22) < ppVar51) {
        size_bound_0 = ppVar51;
      }
LAB_00109c11:
      do {
        uVar41 = (long)__ptr_00 * (long)puVar25 + 1;
        bVar55 = (pthread_mutex_t *)puVar25 != (pthread_mutex_t *)(uVar41 / (ulong)__ptr_00);
        puVar25 = (undefined1 *)size_bound_0;
        if (bVar55) goto LAB_00109f17;
        if ((ulong)((long)size_bound_0 - (long)ppVar53) <= uVar41) goto LAB_00109f17;
        ppVar49 = (pthread_mutex_t *)((long)&(ppVar49->__data).__lock + 1);
        ppVar53 = (pthread_mutex_t *)((long)ppVar53 + uVar41);
        puVar25 = (undefined1 *)ppVar53;
        if (param_2 == ppVar49) goto LAB_00109f17;
        pcVar22 = *(char **)(__ptr + ppVar49 * 8);
        if ((*pcVar22 == '-') && (pcVar22[1] == '\0')) {
          iVar19 = fstat(0,(stat *)&local_168);
        }
        else {
          iVar19 = stat(pcVar22,(stat *)&local_168);
        }
        if (iVar19 != 0) {
          __ptr = __ptr + ppVar49 * 8;
LAB_00109c7b:
          uVar41 = *(ulong *)__ptr;
          pcVar22 = "stat failed";
          goto LAB_00108f97;
        }
        while( true ) {
          if (((local_160.__data.__kind & 0xd000U) == 0x8000) && (0 < pStack_138.__align)) {
            puVar25 = (undefined1 *)pStack_138.__align;
            ppVar51 = sort_size;
            if (size_bound_0 != (pthread_mutex_t *)0x0) goto LAB_00109c11;
            goto joined_r0x00109c0b;
          }
          puVar25 = (undefined1 *)sort_size;
          if (sort_size == (pthread_mutex_t *)0x0) break;
LAB_00109f17:
          initbuf(&local_2d8,local_3b8,puVar25);
          do {
            local_3f8 = &local_2d8;
            local_3d0 = (pthread_mutex_t *)((long)local_3d0 + -1);
            local_2a8 = 0;
            while (cVar17 = fillbuf(local_3f8,local_428,local_430), ppVar33 = local_2c0,
                  uVar41 = local_2c8, ppVar51 = local_2d8, cVar17 != '\0') {
              ppVar53 = (pthread_mutex_t *)(ulong)local_2a8;
              if (local_2a8 == 0) {
LAB_001096c7:
                saved_line = 0;
                local_438 = local_438 + 1;
                ppVar53 = (pthread_mutex_t *)0x0;
                lVar42 = maybe_create_temp((pthread_mutex_t *)local_398,0);
                ppVar49 = (pthread_mutex_t *)(lVar42 + 0xd);
              }
              else {
                if (local_3d0 != (pthread_mutex_t *)0x0) {
                  if (local_2c0->__size + (-(local_3b8 * local_2c8) - local_2d0) <=
                      (char *)(local_3b8 + 1U)) goto LAB_001096c7;
                  local_2b8 = local_2d0;
                  xfclose(local_428,local_430);
                  param_2 = ppVar33;
                  goto LAB_00109b33;
                }
                saved_line = 0;
                if (local_438 != 0 || local_2b8 != 0) goto LAB_001096c7;
                xfclose(local_428,local_430);
                ppVar31 = (pthread_mutex_t *)stream_open(local_3e0);
                if (ppVar31 == (pthread_mutex_t *)0x0) goto LAB_0010ab49;
                local_438 = 0;
                ppVar49 = local_3e0;
                uVar41 = local_2c8;
                local_398._0_8_ = ppVar31;
              }
              puVar25 = (undefined1 *)local_398._0_8_;
              param_2 = (pthread_mutex_t *)(ppVar33->__size + (long)ppVar51->__size);
              if (uVar41 < 2) {
                write_unique((undefined1 (*) [16])((long)param_2 + -0x20),local_398._0_8_,ppVar49);
              }
              else {
                local_168.sa_handler = (__sighandler_t)heap_alloc(compare_nodes);
                local_408 = &local_160;
                pthread_mutex_init(local_408,(pthread_mutexattr_t *)0x0);
                pthread_cond_init(&pStack_138,(pthread_condattr_t *)0x0);
                __ptr_00 = (pthread_mutex_t *)xmalloc(local_3c8);
                *(undefined1 (*) [16])__ptr_00 = (undefined1  [16])0x0;
                *(int *)((long)__ptr_00 + 0x10) = 0;
                *(int *)((long)__ptr_00 + 0x14) = 0;
                ((__pthread_list_t *)((long)__ptr_00 + 0x18))->__prev =
                     (__pthread_internal_list *)0x0;
                (__ptr_00->__data).__list.__next = (__pthread_internal_list *)0x0;
                *(undefined8 *)((long)__ptr_00 + 0x38) = 0;
                __ptr_00[2].__data.__lock = 0;
                *(undefined1 *)((long)__ptr_00 + 0x54) = 0;
                __ptr_00[1].__align = uVar41;
                *(ulong *)*(undefined1 (*) [16])((long)__ptr_00 + 0x30) = uVar41;
                pthread_mutex_init((pthread_mutex_t *)((long)__ptr_00 + 0x58),
                                   (pthread_mutexattr_t *)0x0);
                init_node(__ptr_00,(undefined1 (*) [16])((long)__ptr_00 + 0x80),param_2,local_418,
                          uVar41,0);
                sortlines(param_2,local_418,uVar41,(undefined1 (*) [16])((long)__ptr_00 + 0x80),
                          &local_168,puVar25,ppVar49);
                param_2 = (pthread_mutex_t *)((long)__ptr_00 + 0x58);
                for (ppVar51 = local_410; ppVar51 != (pthread_mutex_t *)0x0;
                    ppVar51 = (pthread_mutex_t *)((long)ppVar51 + -1)) {
                  pthread_mutex_destroy(param_2);
                  param_2 = (pthread_mutex_t *)((long)param_2 + 0x80);
                }
                free(__ptr_00);
                heap_free(local_168.sa_handler);
                pthread_cond_destroy(&pStack_138);
                pthread_mutex_destroy(local_408);
              }
              xfclose(puVar25,ppVar49);
              if ((char)ppVar53 != '\0') {
                free(local_2d8);
                goto joined_r0x00109843;
              }
            }
            xfclose(local_428,local_430);
            if (local_3d0 == (pthread_mutex_t *)0x0) goto LAB_0010a2a5;
LAB_00109b33:
            __ptr = __ptr + 8;
LAB_001095bb:
            local_430 = *(ulong *)__ptr;
            local_428 = (pthread_mutex_t *)stream_open(local_430,local_3a8);
            if (local_428 == (pthread_mutex_t *)0x0) goto LAB_0010a4df;
            local_3b8 = 0x30;
            if ((pthread_mutex_t *)0x1 < local_3c0) {
              lVar42 = 1;
              ppVar51 = (pthread_mutex_t *)0x1;
              do {
                ppVar51 = (pthread_mutex_t *)((long)ppVar51 * 2);
                lVar42 = lVar42 + 1;
              } while (ppVar51 < local_418);
              local_3b8 = lVar42 * 0x20;
            }
          } while (local_2c0 != (pthread_mutex_t *)0x0);
          __ptr_00 = (pthread_mutex_t *)(local_3b8 + 1);
          ppVar53 = (pthread_mutex_t *)(local_3b8 + 2);
          iVar19 = fileno((FILE *)&local_428->__data);
          iVar19 = fstat(iVar19,(stat *)&local_168);
          if (iVar19 != 0) goto LAB_00109c7b;
          local_408 = (pthread_mutex_t *)local_398;
          ppVar49 = (pthread_mutex_t *)0x0;
          param_2 = local_3d0;
        }
        ppVar51 = size_bound_0;
        puVar25 = (undefined1 *)(pthread_mutex_t *)0x20000;
joined_r0x00109c0b:
        size_bound_0 = ppVar51;
      } while (size_bound_0 != (pthread_mutex_t *)0x0);
      iVar19 = getrlimit(RLIMIT_DATA,(rlimit *)&local_408->__data);
      ppVar51 = (pthread_mutex_t *)0xffffffffffffffff;
      if (iVar19 == 0) {
        ppVar51 = (pthread_mutex_t *)local_398._0_8_;
      }
      iVar19 = getrlimit(RLIMIT_AS,(rlimit *)&local_408->__data);
      if ((iVar19 == 0) && ((ulong)local_398._0_8_ < ppVar51)) {
        ppVar51 = (pthread_mutex_t *)local_398._0_8_;
      }
      ppVar51 = (pthread_mutex_t *)((ulong)ppVar51 >> 1);
      iVar19 = getrlimit(__RLIMIT_RSS,(rlimit *)&local_408->__data);
      if ((iVar19 == 0) &&
         (ppVar33 = (pthread_mutex_t *)(((ulong)local_398._0_8_ >> 4) * 0xf), ppVar33 < ppVar51)) {
        ppVar51 = ppVar33;
      }
      dVar56 = (double)physmem_available();
      dVar57 = (double)physmem_total();
      dVar58 = dVar57 * __LC150;
      if (dVar56 <= _LC149 * dVar57) {
        dVar56 = _LC149 * dVar57;
      }
      if (dVar58 < (double)(long)ppVar51) {
        if (dVar58 < _LC105) {
          ppVar51 = (pthread_mutex_t *)(long)dVar58;
        }
        else {
          ppVar51 = (pthread_mutex_t *)((long)(dVar58 - _LC105) ^ 0x8000000000000000);
        }
      }
    } while ((double)ppVar51 <= dVar56);
  } while (dVar56 < _LC105);
  ppVar51 = (pthread_mutex_t *)((long)(dVar56 - _LC105) ^ 0x8000000000000000);
  goto LAB_00109dd9;
LAB_0010a4df:
  xfopen_part_0(local_430);
LAB_0010a4e9:
  uVar21 = badfieldspec(_optarg,"stray character in field spec");
LAB_0010a4fc:
  if (uVar21 == 0xffffff7e) {
    usage(0);
    key_to_opts(local_438,&local_78);
    sVar28 = strlen(local_78.__size);
    uVar36 = dcngettext(0,"option \'-%s\' is ignored","options \'-%s\' are ignored",sVar28,5);
                    /* WARNING: Subroutine does not return */
    error(0,0,uVar36,&local_78);
  }
  goto switchD_001084a0_caseD_2;
switchD_001084a0_caseD_1:
  if (_optarg->__size[0] == '+') {
    if (_optind == (int)__ptr_00) {
      local_408 = (pthread_mutex_t *)((ulong)local_408._4_4_ << 0x20);
    }
    else {
      pcVar50 = *(char **)((long)param_2 + (long)_optind * 8);
      ppVar51 = (pthread_mutex_t *)0x0;
      local_408 = (pthread_mutex_t *)((ulong)local_408._4_4_ << 0x20);
      if (*pcVar50 == '-') {
        local_408 = (pthread_mutex_t *)CONCAT44(uVar52,(uint)((int)pcVar50[1] - 0x30U < 10));
      }
    }
    bVar44 = (byte)local_430 | pcVar22 == (char *)0x0 & (byte)local_408;
    local_430 = (ulong)bVar44;
    if (bVar44 != 0) {
      local_3d0 = (pthread_mutex_t *)CONCAT44(local_3d0._4_4_,uVar21);
      auVar59 = key_init((__pthread_internal_list **)
                         ((long)&(((pthread_mutex_t *)local_398)->__data).__list + 8));
      plVar47 = auVar59._0_8_;
      pcVar50 = (char *)parse_field_count(auVar59._8_8_ + 1,plVar47,0);
      uVar41 = uVar43 & 0xffffffff;
      if (pcVar50 == (char *)0x0) {
        if (*plVar47 == 0) goto LAB_0010921b;
      }
      else {
        if (*pcVar50 == '.') {
          pcVar50 = (char *)parse_field_count(pcVar50 + 1,plVar47 + 1,0);
          if (*plVar47 == 0) goto LAB_0010921b;
LAB_00109229:
          uVar41 = uVar43 & 0xffffffff;
          if (pcVar50 == (char *)0x0) goto LAB_00108ee0;
        }
        else if (*plVar47 == 0) {
LAB_0010921b:
          if (plVar47[1] == 0) {
            *plVar47 = -1;
          }
          goto LAB_00109229;
        }
        uVar41 = uVar43 & 0xffffffff;
        pcVar50 = (char *)set_ordering(pcVar50,plVar47,0);
        uVar21 = (uint)uVar41;
        if (*pcVar50 == '\0') {
          uVar52 = uVar21;
          if ((int)local_408 != 0) {
            lVar42 = (long)_optind;
            local_3d0 = (pthread_mutex_t *)CONCAT44(local_3d0._4_4_,uVar21);
            _optind = _optind + 1;
            local_408 = *(pthread_mutex_t **)((long)param_2 + lVar42 * 8);
            ppVar33 = (pthread_mutex_t *)
                      parse_field_count((undefined1 *)((long)&(local_408->__data).__lock + 1),
                                        plVar47 + 2,"invalid number after \'-\'");
            plVar35 = plVar47;
            if (ppVar33->__size[0] == '.') goto LAB_0010a57a;
            while( true ) {
              if ((plVar47[3] == 0) && (plVar47[2] != 0)) {
                plVar47[2] = plVar47[2] + -1;
              }
              uVar52 = uVar21;
              pcVar50 = (char *)set_ordering(ppVar33,plVar47,1);
              if (*pcVar50 == '\0') break;
              plVar35 = plVar47;
              ppVar33 = local_408;
              badfieldspec(local_408,"stray character in field spec");
              __ptr_00 = local_408;
LAB_0010a57a:
              ppVar33 = (pthread_mutex_t *)
                        parse_field_count((undefined1 *)((long)&(ppVar33->__data).__lock + 1),
                                          plVar35 + 3,"invalid number after \'.\'");
            }
          }
          *(undefined1 *)((long)plVar47 + 0x39) = 1;
          local_408 = (pthread_mutex_t *)CONCAT44(local_408._4_4_,uVar52);
          insertkey(plVar47);
          auVar59._8_8_ = extraout_RDX_05;
          uVar41 = (ulong)uVar52;
          iVar19 = tab;
          goto LAB_001083b1;
        }
      }
    }
  }
LAB_00108ee0:
  auVar59._8_8_ = _optarg;
  *(pthread_mutex_t **)(__ptr + ppVar53 * 8) = _optarg;
  ppVar53 = (pthread_mutex_t *)(ppVar53->__size + 1);
  iVar19 = tab;
  goto LAB_001083b1;
LAB_0010a2a5:
  free(local_2d8);
  puVar48 = temphead;
  plVar35 = (long *)xnmalloc(local_438,0x10);
  plVar47 = plVar35;
  while (puVar48 != (undefined8 *)0x0) {
    plVar47[1] = (long)puVar48;
    lVar42 = (long)puVar48 + 0xd;
    puVar48 = (undefined8 *)*puVar48;
    *plVar47 = lVar42;
    plVar47 = plVar47 + 2;
  }
  merge(plVar35,local_438,local_438,local_3e0);
  free(plVar35);
joined_r0x00109843:
  while (0 < nprocs) {
    reap(0xffffffff);
  }
LAB_0010985c:
  if ((have_read_stdin != '\0') && (iVar19 = rpl_fclose(_stdin), iVar19 == -1)) {
    uVar36 = dcgettext(0,"close failed",5);
                    /* WARNING: Subroutine does not return */
    sort_die(uVar36,&_LC143);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


