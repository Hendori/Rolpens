
/* WARNING: Unknown calling convention */

size_t proctab_hasher(void *entry,size_t tabsize)

{
  return (ulong)(long)*(int *)((long)entry + 8) % tabsize;
}



/* WARNING: Unknown calling convention */

_Bool proctab_comparator(void *e1,void *e2)

{
  return *(int *)((long)e1 + 8) == *(int *)((long)e2 + 8);
}



/* WARNING: Unknown calling convention */

char traverse_raw_number(char **number)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  char *pcVar8;
  
  pcVar8 = *number;
  cVar7 = *pcVar8;
  iVar5 = (int)cVar7;
  pcVar3 = pcVar8 + 1;
  if (iVar5 - 0x30U < 10) {
    iVar6 = 0;
    do {
      if ((char)iVar6 < (char)iVar5) {
        iVar6 = iVar5;
      }
      cVar4 = (char)iVar6;
      pcVar1 = pcVar8 + 1;
      pcVar2 = pcVar3;
      if (thousands_sep == *pcVar1) {
        pcVar2 = pcVar8 + 2;
      }
      cVar7 = *pcVar2;
      iVar5 = (int)cVar7;
      pcVar3 = pcVar2 + 1;
      pcVar8 = pcVar2;
    } while (iVar5 - 0x30U < 10);
    if (thousands_sep != *pcVar1) goto LAB_001000a2;
  }
  else {
    iVar6 = 0;
LAB_001000a2:
    cVar4 = (char)iVar6;
    pcVar2 = pcVar3;
    if (decimal_point == cVar7) {
      iVar5 = (int)*pcVar3;
      if (iVar5 - 0x30U < 10) {
        do {
          pcVar3 = pcVar3 + 1;
          if ((char)iVar6 < (char)iVar5) {
            iVar6 = iVar5;
          }
          iVar5 = (int)*pcVar3;
        } while (iVar5 - 0x30U < 10);
        *number = pcVar3;
        return (char)iVar6;
      }
      goto LAB_00100085;
    }
  }
  pcVar3 = pcVar2 + -1;
LAB_00100085:
  *number = pcVar3;
  return cVar4;
}



/* WARNING: Unknown calling convention */

int getmonth(char *month,char **ea)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  cVar1 = blanks[(byte)*month];
  while (cVar1 != '\0') {
    pbVar4 = (byte *)month + 1;
    month = (char *)((byte *)month + 1);
    cVar1 = blanks[*pbVar4];
  }
  uVar7 = 0;
  uVar6 = 0xc;
  do {
    uVar5 = uVar7 + uVar6 >> 1;
    pbVar4 = (byte *)monthtab[uVar5].name;
    bVar2 = *pbVar4;
    pbVar3 = (byte *)month;
    while( true ) {
      if (bVar2 == 0) {
        if (ea != (char **)0x0) {
          *ea = (char *)pbVar3;
        }
        return monthtab[uVar5].val;
      }
      if ((byte)fold_toupper[*pbVar3] < bVar2) goto LAB_00100175;
      if (bVar2 < (byte)fold_toupper[*pbVar3]) break;
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



/* WARNING: Unknown calling convention */

_Bool default_key_compare(keyfield *key)

{
  ulong uVar1;
  
  if ((key->ignore == (_Bool *)0x0) && (key->translate == (char *)0x0)) {
    if (key->skipsblanks != false) {
      return false;
    }
    if ((key->skipeblanks == false) &&
       (uVar1._0_1_ = key->skipsblanks, uVar1._1_1_ = key->skipeblanks, uVar1._2_1_ = key->numeric,
       uVar1._3_1_ = key->random, uVar1._4_1_ = key->general_numeric,
       uVar1._5_1_ = key->human_numeric, uVar1._6_1_ = key->month, uVar1._7_1_ = key->reverse,
       (uVar1 & 0xffff00ff0000) == 0)) {
      if (key->month != false) {
        return false;
      }
      if (key->version == false) {
        return (_Bool)(key->random ^ 1);
      }
    }
  }
  return false;
}



/* WARNING: Unknown calling convention */

void key_to_opts(keyfield *key,char *opts)

{
  short sVar1;
  
  sVar1._0_1_ = key->skipsblanks;
  sVar1._1_1_ = key->skipeblanks;
  if (sVar1 != 0) {
    *opts = 'b';
    opts = opts + 1;
  }
  if (key->ignore == nondictionary) {
    *opts = 'd';
    opts = opts + 1;
  }
  if (key->translate != (char *)0x0) {
    *opts = 'f';
    opts = opts + 1;
  }
  if (key->general_numeric != false) {
    *opts = 'g';
    opts = opts + 1;
  }
  if (key->human_numeric != false) {
    *opts = 'h';
    opts = opts + 1;
  }
  if (key->ignore == nonprinting) {
    *opts = 'i';
    opts = opts + 1;
  }
  if (key->month != false) {
    *opts = 'M';
    opts = opts + 1;
  }
  if (key->numeric != false) {
    *opts = 'n';
    opts = opts + 1;
  }
  if (key->random != false) {
    *opts = 'R';
    opts = opts + 1;
  }
  if (key->reverse != false) {
    *opts = 'r';
    opts = opts + 1;
  }
  if (key->version != false) {
    *opts = 'V';
    opts = opts + 1;
  }
  *opts = '\0';
  return;
}



/* WARNING: Unknown calling convention */

char * set_ordering(char *s,keyfield *key,blanktype blanktype)

{
  char *pcVar1;
  char cVar2;
  
  cVar2 = *s;
  while (cVar2 != '\0') {
    switch(cVar2) {
    case 'M':
      key->month = true;
      break;
    default:
      goto switchD_001002da_caseD_4e;
    case 'R':
      key->random = true;
      break;
    case 'V':
      key->version = true;
      break;
    case 'b':
      if (((blanktype & ~bl_both) != bl_start) || (key->skipsblanks = true, blanktype == bl_both)) {
        key->skipeblanks = true;
      }
      break;
    case 'd':
      key->ignore = nondictionary;
      break;
    case 'f':
      key->translate = fold_toupper;
      break;
    case 'g':
      key->general_numeric = true;
      break;
    case 'h':
      key->human_numeric = true;
      break;
    case 'i':
      if (key->ignore == (_Bool *)0x0) {
        key->ignore = nonprinting;
      }
      break;
    case 'n':
      key->numeric = true;
      break;
    case 'r':
      key->reverse = true;
    }
    pcVar1 = s + 1;
    s = s + 1;
    cVar2 = *pcVar1;
  }
switchD_001002da_caseD_4e:
  return s;
}



/* WARNING: Unknown calling convention */

int struct_month_cmp(void *m1,void *m2)

{
  int iVar1;
  
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
  iVar1 = strcmp(*m1,*m2);
  return iVar1;
}



/* WARNING: Unknown calling convention */

keyfield * key_init(keyfield *key)

{
  key->next = (keyfield *)0x0;
  key->eword = 0;
  key->echar = 0;
  key->sword = 0;
  key->schar = 0;
  key->eword = 0xffffffffffffffff;
  key->ignore = (_Bool *)0x0;
  key->translate = (char *)0x0;
  key->skipsblanks = false;
  key->skipeblanks = false;
  key->numeric = false;
  key->random = false;
  key->general_numeric = false;
  key->human_numeric = false;
  key->month = false;
  key->reverse = false;
  key->version = false;
  key->traditional_used = false;
  *(undefined6 *)&key->field_0x3a = 0;
  return key;
}



/* WARNING: Unknown calling convention */

void insertkey(keyfield *key_arg)

{
  keyfield *pkVar1;
  keyfield *pkVar2;
  keyfield **ppkVar3;
  keyfield *pkVar4;
  
  pkVar2 = (keyfield *)xmemdup(key_arg,0x48);
  ppkVar3 = &keylist;
  pkVar1 = keylist;
  if (keylist != (keyfield *)0x0) {
    do {
      pkVar4 = pkVar1;
      pkVar1 = pkVar4->next;
    } while (pkVar1 != (keyfield *)0x0);
    ppkVar3 = &pkVar4->next;
  }
  *ppkVar3 = pkVar2;
  pkVar2->next = (keyfield *)0x0;
  return;
}



/* WARNING: Unknown calling convention */

void add_temp_dir(char *dir)

{
  if (temp_dir_count == temp_dir_alloc) {
    temp_dirs = (char **)xpalloc(temp_dirs,&temp_dir_alloc,1,0xffffffffffffffff,8);
  }
  temp_dirs[temp_dir_count] = dir;
  temp_dir_count = temp_dir_count + 1;
  return;
}



/* WARNING: Unknown calling convention */

void incompatible_options(char *opts)

{
  undefined8 uVar1;
  
  uVar1 = dcgettext(0,"options \'-%s\' are incompatible",5);
                    /* WARNING: Subroutine does not return */
  error(2,0,uVar1,opts);
}



/* WARNING: Unknown calling convention */

void badfieldspec(char *spec,char *msgid)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = quote();
  uVar2 = dcgettext(0,msgid,5);
  uVar3 = dcgettext(0,"%s: invalid field specification %s",5);
                    /* WARNING: Subroutine does not return */
  error(2,0,uVar3,uVar2,uVar1);
}



/* WARNING: Unknown calling convention */

char * parse_field_count(char *string,size_t *val,char *msgid)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  char *suffix;
  uintmax_t n;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = xstrtoumax(string,&suffix,10,&n,&_LC2);
  switch(uVar1) {
  case 0:
  case 2:
    *val = n;
    break;
  case 1:
  case 3:
    *val = 0xffffffffffffffff;
    break;
  case 4:
    if (msgid != (char *)0x0) {
      uVar2 = quote(string);
      uVar3 = dcgettext(0,msgid,5);
      uVar4 = dcgettext(0,"%s: invalid count at start of %s",5);
                    /* WARNING: Subroutine does not return */
      error(2,0,uVar4,uVar3,uVar2);
    }
    suffix = (char *)0x0;
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return suffix;
}



/* WARNING: Unknown calling convention */

void sort_die(char *message,char *file)

{
  undefined8 uVar1;
  int *piVar2;
  
  if (file == (char *)0x0) {
    file = (char *)dcgettext(0,"standard output",5);
  }
  uVar1 = quotearg_n_style_colon(0,3,file);
  piVar2 = __errno_location();
                    /* WARNING: Subroutine does not return */
  error(2,*piVar2,"%s: %s",message,uVar1);
}



/* WARNING: Unknown calling convention */

void xfclose(FILE *fp,char *file)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = fileno((FILE *)fp);
  if (iVar1 == 0) {
    clearerr_unlocked((FILE *)fp);
    return;
  }
  if (iVar1 == 1) {
    iVar1 = fflush_unlocked((FILE *)fp);
    if (iVar1 != 0) {
      pcVar2 = "fflush failed";
LAB_001006c8:
      pcVar2 = (char *)dcgettext(0,pcVar2,5);
                    /* WARNING: Subroutine does not return */
      sort_die(pcVar2,file);
    }
  }
  else {
    iVar1 = rpl_fclose(fp);
    if (iVar1 != 0) {
      pcVar2 = "close failed";
      goto LAB_001006c8;
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

FILE * stream_open(char *file,char *how)

{
  int iVar1;
  int iVar2;
  FILE *pFVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*how == 'r') {
    if ((*file == '-') && (file[1] == '\0')) {
      have_read_stdin = true;
      pFVar3 = _stdin;
    }
    else {
      pFVar3 = (FILE *)0x0;
      iVar1 = open(file,0x80000);
      if (-1 < iVar1) {
        pFVar3 = fdopen(iVar1,how);
      }
    }
    fadvise(pFVar3,2);
    return (FILE *)pFVar3;
  }
  if (*how != 'w') {
                    /* WARNING: Subroutine does not return */
    __assert_fail("!\"unexpected mode passed to stream_open\"","src/sort.c",0x3d6,"stream_open");
  }
  if (file == (char *)0x0) {
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
  uVar5 = quotearg_n_style_colon(0,3,file);
  uVar6 = dcgettext(0,"%s: error truncating",5);
                    /* WARNING: Subroutine does not return */
  error(2,iVar1,uVar6,uVar5);
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void link_failure(void)

{
  undefined8 uVar1;
  
  uVar1 = dlerror();
                    /* WARNING: Subroutine does not return */
  error(2,0,&_LC11,uVar1);
}



/* WARNING: Unknown calling convention */

void initbuf(buffer *buf,size_t line_bytes,size_t alloc)

{
  char *pcVar1;
  int *piVar2;
  undefined8 uVar3;
  size_t __n;
  char *__size;
  char *__src;
  char *__dest;
  
  __src = (char *)line_bytes;
  do {
    __size = (char *)((alloc & 0xffffffffffffffe0) + 0x20);
    __dest = __size;
    pcVar1 = (char *)malloc((size_t)__size);
    buf->buf = pcVar1;
    if (pcVar1 != (char *)0x0) {
      buf->line_bytes = line_bytes;
      buf->alloc = (idx_t)__size;
      buf->left = 0;
      buf->eof = false;
      buf->used = 0;
      buf->nlines = 0;
      return;
    }
    alloc = (ulong)__size >> 1;
  } while (line_bytes + 1 < alloc);
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



/* WARNING: Unknown calling convention */

size_t xstrxfrm(char *dest,char *src,size_t destsize)

{
  int *piVar1;
  size_t sVar2;
  undefined8 uVar3;
  
  piVar1 = __errno_location();
  *piVar1 = 0;
  sVar2 = strxfrm(dest,src,destsize);
  if (*piVar1 == 0) {
    return sVar2;
  }
  uVar3 = dcgettext(0,"string transformation failed",5);
                    /* WARNING: Subroutine does not return */
  error(0,*piVar1,uVar3);
}



/* WARNING: Unknown calling convention */

pid_t reap(pid_t pid)

{
  long lVar1;
  __pid_t _Var2;
  long lVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  int status;
  tempnode test;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  _Var2 = -1;
  if (pid != 0) {
    _Var2 = pid;
  }
  _Var2 = waitpid(_Var2,&status,(uint)(pid == 0));
  if (_Var2 < 0) {
    uVar5 = quotearg_style(4,compress_program);
    uVar6 = dcgettext(0,"waiting for %s [-d]",5);
    piVar4 = __errno_location();
                    /* WARNING: Subroutine does not return */
    error(2,*piVar4,uVar6,uVar5);
  }
  if (_Var2 != 0) {
    if (pid < 1) {
      test.pid = _Var2;
      lVar3 = hash_remove(proctab,&test);
      if (lVar3 == 0) goto LAB_00100a12;
      *(undefined1 *)(lVar3 + 0xc) = 2;
    }
    if ((status & 0xff7fU) != 0) {
      uVar5 = quotearg_style(4,compress_program);
      uVar6 = dcgettext(0,"%s [-d] terminated abnormally",5);
                    /* WARNING: Subroutine does not return */
      error(2,0,uVar6,uVar5);
    }
    nprocs = nprocs + -1;
  }
LAB_00100a12:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return _Var2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

void async_safe_die(int errnum,char *errstr)

{
  size_t sVar1;
  char *__s;
  char errbuf [12];
  
  sVar1 = strlen(errstr);
  write(2,errstr,sVar1);
  if (errnum != 0) {
    __s = (char *)inttostr(errnum,errbuf);
    write(2,": errno ",8);
    sVar1 = strlen(__s);
    write(2,__s,sVar1);
  }
  write(2,&_LC18,1);
                    /* WARNING: Subroutine does not return */
  _exit(2);
}



/* WARNING: Unknown calling convention */

void register_proc(tempnode *temp)

{
  uint uVar1;
  long lVar2;
  merge_node *pmVar3;
  merge_node *pmVar4;
  code *in_RCX;
  ulong uVar5;
  line *extraout_RDX;
  line *plVar6;
  line **pplVar7;
  merge_node *parent;
  size_t sVar8;
  size_t in_R8;
  undefined8 in_R9;
  line *dest;
  
  if (proctab == (Hash_table *)0x0) {
    in_R8 = 0;
    in_RCX = proctab_comparator;
    pmVar4 = (merge_node *)0x0;
    pmVar3 = (merge_node *)hash_initialize(0x2f,0,0x100000);
    proctab = (Hash_table *)pmVar3;
    if (pmVar3 == (merge_node *)0x0) goto LAB_00100bd4;
  }
  pmVar3 = (merge_node *)proctab;
  temp->state = '\x01';
  lVar2 = hash_insert();
  pmVar4 = (merge_node *)temp;
  if (lVar2 != 0) {
    return;
  }
LAB_00100bd4:
  xalloc_die();
  plVar6 = extraout_RDX;
  while( true ) {
    parent = pmVar4;
    dest = plVar6 + -in_R8;
    if ((char)in_R9 == '\0') {
      uVar5 = pmVar3->nhi >> 1;
      sVar8 = pmVar3->nhi - uVar5;
      plVar6 = plVar6 + (-uVar5 - in_R8);
      pplVar7 = &pmVar3->end_hi;
    }
    else {
      uVar5 = pmVar3->nlo >> 1;
      sVar8 = pmVar3->nlo - uVar5;
      plVar6 = dest + -uVar5;
      pplVar7 = &pmVar3->end_lo;
    }
    parent->parent = pmVar3;
    uVar1 = pmVar3->level;
    parent->nhi = sVar8;
    parent->dest = pplVar7;
    parent->nlo = uVar5;
    parent->level = uVar1 + 1;
    parent->queued = false;
    parent->lo = dest;
    parent->hi = plVar6;
    parent->end_lo = dest;
    parent->end_hi = plVar6;
    pthread_mutex_init((pthread_mutex_t *)&parent->lock,(pthread_mutexattr_t *)0x0);
    if (in_RCX < (code *)0x2) break;
    parent->lo_child = parent + 1;
    uVar5 = (ulong)in_RCX >> 1;
    in_RCX = in_RCX + -uVar5;
    pmVar4 = init_node(parent,parent + 1,dest,uVar5,in_R8,true);
    parent->hi_child = pmVar4;
    in_R9 = 0;
    pmVar3 = parent;
  }
  parent->lo_child = (merge_node *)0x0;
  parent->hi_child = (merge_node *)0x0;
  return;
}



/* WARNING: Unknown calling convention */

merge_node *
init_node(merge_node *parent,merge_node *node_pool,line *dest,size_t nthreads,size_t total_lines,
         _Bool is_lo_child)

{
  merge_node *node_pool_00;
  uint uVar1;
  ulong uVar2;
  line **pplVar3;
  merge_node *parent_00;
  size_t sVar4;
  line *dest_00;
  
  while( true ) {
    parent_00 = node_pool;
    dest_00 = dest + -total_lines;
    if (is_lo_child == false) {
      uVar2 = parent->nhi >> 1;
      sVar4 = parent->nhi - uVar2;
      dest = dest + (-uVar2 - total_lines);
      pplVar3 = &parent->end_hi;
    }
    else {
      uVar2 = parent->nlo >> 1;
      sVar4 = parent->nlo - uVar2;
      dest = dest_00 + -uVar2;
      pplVar3 = &parent->end_lo;
    }
    parent_00->parent = parent;
    uVar1 = parent->level;
    parent_00->nhi = sVar4;
    parent_00->dest = pplVar3;
    node_pool_00 = parent_00 + 1;
    parent_00->nlo = uVar2;
    parent_00->level = uVar1 + 1;
    parent_00->queued = false;
    parent_00->lo = dest_00;
    parent_00->hi = dest;
    parent_00->end_lo = dest_00;
    parent_00->end_hi = dest;
    pthread_mutex_init((pthread_mutex_t *)&parent_00->lock,(pthread_mutexattr_t *)0x0);
    if (nthreads < 2) break;
    parent_00->lo_child = node_pool_00;
    uVar2 = nthreads >> 1;
    nthreads = nthreads - uVar2;
    node_pool = init_node(parent_00,node_pool_00,dest_00,uVar2,total_lines,true);
    parent_00->hi_child = node_pool;
    is_lo_child = false;
    parent = parent_00;
  }
  parent_00->lo_child = (merge_node *)0x0;
  parent_00->hi_child = (merge_node *)0x0;
  return node_pool_00;
}



/* WARNING: Unknown calling convention */

int compare_nodes(void *a,void *b)

{
  if (*(uint *)((long)a + 0x50) != *(uint *)((long)b + 0x50)) {
    return (int)(*(uint *)((long)a + 0x50) < *(uint *)((long)b + 0x50));
  }
  return (int)((ulong)(*(long *)((long)a + 0x30) + *(long *)((long)a + 0x28)) <
              (ulong)(*(long *)((long)b + 0x30) + *(long *)((long)b + 0x28)));
}



FILE * xfopen(char *file,char *how)

{
  char *message;
  
  message = (char *)dcgettext(0,"open failed",5);
                    /* WARNING: Subroutine does not return */
  sort_die(message,file);
}



/* WARNING: Unknown calling convention */

void move_fd(int oldfd,int newfd)

{
  dup2(oldfd,newfd);
  close(oldfd);
  return;
}



char * limfield(line *line,keyfield *key)

{
  long lVar1;
  line *plVar2;
  long in_RDX;
  long lVar3;
  long lVar4;
  line *plVar5;
  bool bVar6;
  
  lVar1 = *(long *)(in_RDX + 0x18);
  plVar2 = (line *)((undefined1 *)((long)&line[-1].keylim + 7) + (long)key);
  lVar3 = *(long *)(in_RDX + 0x10);
  if (lVar1 == 0) {
    if (tab == 0x80) {
      if (plVar2 <= line) {
        return (char *)line;
      }
      lVar4 = lVar3;
      if (lVar3 == -1) {
        return (char *)line;
      }
LAB_00100e98:
      while (line < plVar2) {
        while (blanks[*(byte *)&line->text] != false) {
          line = (line *)((long)&line->text + 1);
          if (plVar2 == line) goto LAB_00100e70;
        }
        if (plVar2 <= line) break;
        while (blanks[*(byte *)&line->text] == false) {
          line = (line *)((long)&line->text + 1);
          if (plVar2 == line) goto LAB_00100de8;
        }
        if ((plVar2 <= line) || (bVar6 = lVar4 == 0, lVar4 = lVar4 + -1, bVar6)) break;
      }
    }
    else {
      if (plVar2 <= line) {
        return (char *)line;
      }
      if (lVar3 == -1) {
        return (char *)line;
      }
      while (line < plVar2) {
LAB_00100e39:
        while (*(char *)&line->text != tab) {
          line = (line *)((long)&line->text + 1);
          if (plVar2 == line) {
LAB_00100e70:
            if (lVar1 == 0) {
              return (char *)plVar2;
            }
            plVar5 = (line *)((long)&line->text + lVar1);
            if (plVar2 <= plVar5) {
              return (char *)plVar2;
            }
            return (char *)plVar5;
          }
        }
        if (plVar2 <= line) break;
        if (lVar1 == 0 && lVar3 == 0) {
          return (char *)line;
        }
        line = (line *)((long)&line->text + 1);
        if ((plVar2 <= line) || (bVar6 = lVar3 == 0, lVar3 = lVar3 + -1, bVar6)) break;
      }
    }
LAB_00100de8:
    if (lVar1 == 0) {
      return (char *)line;
    }
    if ((*(char *)(in_RDX + 0x31) == '\0') || (plVar2 <= line)) goto LAB_00100df7;
  }
  else {
    if (tab == 0x80) {
      if (plVar2 <= line) goto LAB_00100df7;
      lVar4 = lVar3 + -1;
      if (lVar3 == 0) goto LAB_00100f3b;
      goto LAB_00100e98;
    }
    if (plVar2 <= line) goto LAB_00100df7;
    if (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      if (line < plVar2) goto LAB_00100e39;
      goto LAB_00100de8;
    }
LAB_00100f3b:
    if (*(char *)(in_RDX + 0x31) == '\0') goto LAB_00100df7;
  }
  do {
    if (blanks[*(byte *)&line->text] == false) break;
    line = (line *)((long)&line->text + 1);
  } while (plVar2 != line);
LAB_00100df7:
  plVar5 = (line *)((long)&line->text + lVar1);
  if (plVar5 < plVar2) {
    plVar2 = plVar5;
  }
  return (char *)plVar2;
}



char * begfield(line *line,keyfield *key)

{
  line *plVar1;
  long lVar2;
  bool bVar3;
  line *plVar4;
  long *in_RDX;
  
  plVar4 = (line *)((undefined1 *)((long)&line[-1].keylim + 7) + (long)key);
  lVar2 = *in_RDX;
  if (tab == 0x80) {
    if (line < plVar4) {
      do {
        bVar3 = lVar2 == 0;
        lVar2 = lVar2 + -1;
        if (bVar3) goto LAB_00100fa8;
        while (blanks[*(byte *)&line->text] != false) {
          line = (line *)((long)&line->text + 1);
          if (plVar4 == line) goto LAB_00100fd2;
        }
        if (plVar4 <= line) goto LAB_00101040;
        while (blanks[*(byte *)&line->text] == false) {
          line = (line *)((long)&line->text + 1);
          if (plVar4 == line) goto LAB_00101040;
        }
      } while (line < plVar4);
    }
  }
  else if (line < plVar4) {
    do {
      bVar3 = lVar2 == 0;
      lVar2 = lVar2 + -1;
      if (bVar3) goto LAB_00100fa8;
      while (tab != *(char *)&line->text) {
        line = (line *)((long)&line->text + 1);
        if (plVar4 == line) goto LAB_00100fd2;
      }
      if (plVar4 <= line) goto LAB_00101040;
      line = (line *)((long)&line->text + 1);
    } while (line < plVar4);
  }
  goto LAB_00100fd2;
LAB_00100fa8:
  if ((char)in_RDX[6] == '\0') goto LAB_00100fd2;
  goto LAB_00100fc9;
LAB_00101040:
  if (((char)in_RDX[6] == '\0') || (plVar4 <= line)) goto LAB_00100fd2;
LAB_00100fc9:
  do {
    if (blanks[*(byte *)&line->text] == false) break;
    line = (line *)((long)&line->text + 1);
  } while (plVar4 != line);
LAB_00100fd2:
  plVar1 = (line *)((long)&line->text + in_RDX[1]);
  if (plVar1 < plVar4) {
    plVar4 = plVar1;
  }
  return (char *)plVar4;
}



/* WARNING: Unknown calling convention */

_Bool fillbuf(buffer *buf,FILE *fp,char *file)

{
  size_t sVar1;
  size_t sVar2;
  char cVar3;
  keyfield *pkVar4;
  line *plVar5;
  _Bool _Var6;
  ulong __n;
  size_t sVar7;
  char *pcVar8;
  size_t sVar9;
  keyfield *pkVar10;
  line *line;
  size_t sVar11;
  keyfield *key;
  line *__ptr;
  char *pcVar12;
  idx_t iVar13;
  long *plVar14;
  long *plVar15;
  long in_FS_OFFSET;
  line *local_80;
  idx_t line_alloc;
  long local_40;
  
  pkVar4 = keylist;
  cVar3 = eolchar;
  sVar2 = merge_buffer_size;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  sVar1 = buf->line_bytes;
  if (buf->eof == false) {
    sVar11 = buf->used;
    sVar7 = buf->left;
    if (sVar11 == sVar7) {
      sVar9 = buf->nlines;
    }
    else {
      memmove(buf->buf,buf->buf + (sVar11 - sVar7),sVar7);
      sVar9 = 0;
      sVar11 = buf->left;
      buf->nlines = 0;
      buf->used = sVar11;
    }
    line = (line *)buf->buf;
    pkVar10 = (keyfield *)(sVar2 - 0x22);
    iVar13 = buf->alloc;
    do {
      __ptr = (line *)((long)&line->text + sVar11);
      plVar15 = (long *)((long)&line[-sVar9].text + iVar13);
      pcVar12 = (char *)((long)line + ((iVar13 - sVar1 * sVar9) - (long)__ptr));
      if (sVar9 != 0) {
        line = (line *)(plVar15[1] + *plVar15);
      }
      do {
        if (pcVar12 <= (char *)(sVar1 + 1)) break;
        __n = (ulong)(pcVar12 + -1) / (ulong)(sVar1 + 1);
        sVar7 = fread_unlocked(__ptr,1,__n,(FILE *)fp);
        local_80 = (line *)((long)&__ptr->text + sVar7);
        pcVar12 = pcVar12 + -sVar7;
        if (__n != sVar7) {
          if ((fp->_flags & 0x20U) != 0) {
            pcVar12 = (char *)dcgettext(0,"read failed",5);
                    /* WARNING: Subroutine does not return */
            sort_die(pcVar12,file);
          }
          if ((fp->_flags & 0x10U) != 0) {
            buf->eof = true;
            if ((line *)buf->buf == local_80) goto LAB_0010122d;
            if ((line != local_80) && (*(char *)((long)&local_80[-1].keylim + 7) != cVar3)) {
              *(char *)&local_80->text = cVar3;
              local_80 = (line *)((long)&local_80->text + 1);
            }
          }
        }
        plVar14 = plVar15;
        plVar5 = line;
        while (line = plVar5, plVar15 = plVar14,
              pcVar8 = (char *)memchr(__ptr,(int)cVar3,(long)local_80 - (long)__ptr),
              pcVar8 != (char *)0x0) {
          __ptr = (line *)(pcVar8 + 1);
          plVar14 = plVar15 + -4;
          *pcVar8 = '\0';
          *plVar14 = (long)line;
          key = (keyfield *)((long)__ptr - (long)line);
          plVar15[-3] = (long)key;
          if (pkVar10 < key) {
            pkVar10 = key;
          }
          pcVar12 = pcVar12 + -sVar1;
          plVar5 = __ptr;
          if (pkVar4 != (keyfield *)0x0) {
            if (pkVar4->eword != 0xffffffffffffffff) {
              pcVar8 = limfield(line,key);
            }
            sVar2 = pkVar4->sword;
            plVar15[-1] = (long)pcVar8;
            if (sVar2 == 0xffffffffffffffff) {
              if (pkVar4->skipsblanks != false) {
                while (blanks[*(byte *)&line->text] != false) {
                  line = (line *)((long)&line->text + 1);
                }
              }
              plVar15[-2] = (long)line;
              plVar5 = __ptr;
            }
            else {
              pcVar8 = begfield(line,key);
              plVar15[-2] = (long)pcVar8;
              plVar5 = __ptr;
            }
          }
        }
        __ptr = local_80;
      } while (buf->eof == false);
      pcVar12 = buf->buf;
      buf->used = (long)__ptr - (long)pcVar12;
      buf->nlines = (long)(pcVar12 + (buf->alloc - (long)plVar15)) >> 5;
      if ((long)(pcVar12 + (buf->alloc - (long)plVar15)) >> 5 != 0) goto LAB_0010139b;
      line_alloc = (ulong)buf->alloc >> 5;
      line = (line *)xpalloc(pcVar12,&line_alloc,1,0xffffffffffffffff,0x20);
      iVar13 = line_alloc << 5;
      buf->buf = (char *)line;
      sVar11 = buf->used;
      buf->alloc = iVar13;
      sVar9 = buf->nlines;
    } while( true );
  }
LAB_0010122d:
  _Var6 = false;
LAB_0010122f:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return _Var6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0010139b:
  merge_buffer_size = (long)&pkVar10->ignore + 2;
  _Var6 = true;
  buf->left = (long)__ptr - (long)line;
  goto LAB_0010122f;
}



/* WARNING: Unknown calling convention */

void sighandler(int sig)

{
  tempnode **pptVar1;
  tempnode *ptVar2;
  
  ptVar2 = temphead;
  if (temphead != (tempnode *)0x0) {
    do {
      unlink(&ptVar2->field_0xd);
      pptVar1 = &ptVar2->next;
      ptVar2 = *pptVar1;
    } while (*pptVar1 != (tempnode *)0x0);
  }
  temphead = (tempnode *)0x0;
  signal(sig,(__sighandler_t)0x0);
  raise(sig);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void write_line(line *line,FILE *fp,char *output_file)

{
  byte *pbVar1;
  char cVar2;
  size_t __n;
  ulong uVar3;
  ulong uVar4;
  char **ppcVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  size_t sVar10;
  line *month;
  line *plVar11;
  undefined8 uVar12;
  char *pcVar13;
  size_t sVar14;
  byte *pbVar15;
  byte *__ptr;
  line *plVar16;
  line *plVar17;
  long lVar18;
  keyfield *key;
  keyfield *pkVar19;
  size_t sVar20;
  long lVar21;
  long in_FS_OFFSET;
  char *tighter_lim;
  char *p;
  long local_40;
  
  __ptr = (byte *)line->text;
  __n = line->length;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pbVar1 = __ptr + __n;
  if ((output_file != (char *)0x0) || (pkVar19 = keylist, !debug)) {
    pbVar1[-1] = eolchar;
    sVar10 = fwrite_unlocked(__ptr,1,__n,(FILE *)fp);
    if (__n != sVar10) {
      pcVar13 = (char *)dcgettext(0,"write failed",5);
                    /* WARNING: Subroutine does not return */
      sort_die(pcVar13,output_file);
    }
    pbVar1[-1] = 0;
LAB_001014a0:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
joined_r0x001014d7:
  do {
    keylist = pkVar19;
    if (pbVar1 <= __ptr) {
      month = (line *)line->text;
      key = (keyfield *)line->length;
      plVar11 = (line *)((undefined1 *)((long)&month[-1].keylim + 7) + (long)key);
      if (pkVar19 == (keyfield *)0x0) goto LAB_00101717;
      sVar20 = pkVar19->sword;
      sVar14 = pkVar19->eword;
      plVar16 = month;
      if (sVar20 == 0xffffffffffffffff) goto LAB_0010181d;
LAB_00101510:
      month = (line *)begfield(plVar16,key);
      if (sVar14 == 0xffffffffffffffff) goto LAB_00101557;
      do {
        plVar11 = (line *)limfield(plVar16,key);
        if (plVar11 <= month) {
          plVar11 = month;
        }
        do {
          if ((pkVar19->skipsblanks == false) || (sVar20 != 0xffffffffffffffff)) {
LAB_00101557:
            if ((pkVar19->month != false) ||
               (uVar3._0_1_ = pkVar19->skipsblanks, uVar3._1_1_ = pkVar19->skipeblanks,
               uVar3._2_1_ = pkVar19->numeric, uVar3._3_1_ = pkVar19->random,
               uVar3._4_1_ = pkVar19->general_numeric, uVar3._5_1_ = pkVar19->human_numeric,
               uVar3._6_1_ = pkVar19->month, uVar3._7_1_ = pkVar19->reverse,
               (uVar3 & 0xffff00ff0000) != 0)) goto LAB_00101574;
          }
          else {
LAB_00101574:
            cVar2 = *(char *)&plVar11->text;
            *(char *)&plVar11->text = '\0';
            cVar6 = blanks[*(byte *)&month->text];
            while (cVar6 != '\0') {
              ppcVar5 = &month->text;
              month = (line *)((long)&month->text + 1);
              cVar6 = blanks[*(byte *)((long)ppcVar5 + 1)];
            }
            tighter_lim = (char *)plVar11;
            if (month <= plVar11) {
              if (pkVar19->month == false) {
                if (pkVar19->general_numeric == false) {
                  uVar4._0_1_ = pkVar19->skipsblanks;
                  uVar4._1_1_ = pkVar19->skipeblanks;
                  uVar4._2_1_ = pkVar19->numeric;
                  uVar4._3_1_ = pkVar19->random;
                  uVar4._4_1_ = pkVar19->general_numeric;
                  uVar4._5_1_ = pkVar19->human_numeric;
                  uVar4._6_1_ = pkVar19->month;
                  uVar4._7_1_ = pkVar19->reverse;
                  if ((uVar4 & 0xff0000ff0000) != 0) {
                    p = (char *)month;
                    if (month < plVar11) {
                      p = (char *)((long)&month->text + (ulong)(*(char *)&month->text == '-'));
                    }
                    tighter_lim = (char *)month;
                    cVar6 = traverse_raw_number(&p);
                    if (('/' < cVar6) && (tighter_lim = p, pkVar19->human_numeric != false)) {
                      tighter_lim = p + (""[(byte)*p] != '\0');
                    }
                  }
                }
                else {
                  tighter_lim = (char *)month;
                  strtold((char *)month,&tighter_lim);
                }
              }
              else {
                tighter_lim = (char *)month;
                getmonth((char *)month,&tighter_lim);
              }
            }
            *(char *)&plVar11->text = cVar2;
            plVar11 = (line *)tighter_lim;
          }
          iVar8 = mbsnwidth(plVar16,(long)month - (long)plVar16,0);
          lVar21 = (long)iVar8;
          if (plVar16 < month) {
            do {
              plVar17 = (line *)((long)&plVar16->text + 1);
              lVar21 = lVar21 + (ulong)(*(char *)&plVar16->text == '\t');
              plVar16 = plVar17;
            } while (month != plVar17);
          }
          while( true ) {
            iVar8 = mbsnwidth(month,(long)plVar11 - (long)month,0);
            lVar18 = (long)iVar8;
            if (month < plVar11) {
              do {
                plVar16 = (line *)((long)&month->text + 1);
                lVar18 = lVar18 + (ulong)(*(char *)&month->text == '\t');
                month = plVar16;
              } while (plVar11 != plVar16);
            }
            while (lVar21 != 0) {
              lVar21 = lVar21 + -1;
              pcVar13 = _stdout->_IO_write_ptr;
              if (pcVar13 < _stdout->_IO_write_end) {
                _stdout->_IO_write_ptr = pcVar13 + 1;
                *pcVar13 = ' ';
              }
              else {
                __overflow(_stdout,0x20);
              }
            }
            if (lVar18 == 0) {
              uVar12 = dcgettext(0,"^ no match for key\n",5);
              __printf_chk(2,uVar12);
            }
            else {
              do {
                pcVar13 = _stdout->_IO_write_ptr;
                if (pcVar13 < _stdout->_IO_write_end) {
                  _stdout->_IO_write_ptr = pcVar13 + 1;
                  *pcVar13 = '_';
                }
                else {
                  __overflow(_stdout,0x5f);
                }
                lVar18 = lVar18 + -1;
              } while (lVar18 != 0);
              pcVar13 = _stdout->_IO_write_ptr;
              if (pcVar13 < _stdout->_IO_write_end) {
                _stdout->_IO_write_ptr = pcVar13 + 1;
                *pcVar13 = '\n';
              }
              else {
                __overflow(_stdout,10);
              }
            }
            if (pkVar19 == (keyfield *)0x0) goto LAB_001014a0;
            pkVar19 = pkVar19->next;
            if (pkVar19 != (keyfield *)0x0) break;
            if ((unique != false) || (stable != false)) goto LAB_001014a0;
            month = (line *)line->text;
            plVar11 = (line *)((long)month + (line->length - 1));
LAB_00101717:
            pkVar19 = (keyfield *)0x0;
            iVar8 = mbsnwidth(month,0,0);
            lVar21 = (long)iVar8;
          }
          plVar16 = (line *)line->text;
          key = (keyfield *)line->length;
          sVar20 = pkVar19->sword;
          sVar14 = pkVar19->eword;
          plVar11 = (line *)((undefined1 *)((long)&plVar16[-1].keylim + 7) + (long)key);
          month = plVar16;
          if (sVar20 != 0xffffffffffffffff) goto LAB_00101510;
LAB_0010181d:
          plVar16 = month;
        } while (sVar14 == 0xffffffffffffffff);
      } while( true );
    }
    bVar7 = *__ptr;
    uVar9 = (uint)bVar7;
    __ptr = __ptr + 1;
    if (bVar7 == 9) {
      pbVar15 = (byte *)fp->_IO_write_ptr;
      uVar9 = 0x3e;
      bVar7 = 0x3e;
      if (pbVar15 < fp->_IO_write_end) {
LAB_0010167a:
        fp->_IO_write_ptr = (char *)(pbVar15 + 1);
        *pbVar15 = bVar7;
        pkVar19 = keylist;
        goto joined_r0x001014d7;
      }
    }
    else {
      if (pbVar1 == __ptr) {
        uVar9 = 10;
        bVar7 = 10;
      }
      pbVar15 = (byte *)fp->_IO_write_ptr;
      if (pbVar15 < fp->_IO_write_end) goto LAB_0010167a;
    }
    iVar8 = __overflow((_IO_FILE *)fp,uVar9);
    pkVar19 = keylist;
    if (iVar8 == -1) {
      pcVar13 = (char *)dcgettext(0,"write failed",5);
                    /* WARNING: Subroutine does not return */
      sort_die(pcVar13,(char *)0x0);
    }
  } while( true );
}



/* WARNING: Unknown calling convention */

pid_t pipe_fork(int *pipefds,size_t tries)

{
  long lVar1;
  tempnode *ptVar2;
  int iVar3;
  __pid_t _Var4;
  pid_t pVar5;
  int *piVar6;
  long lVar7;
  long in_FS_OFFSET;
  bool bVar8;
  double local_e0;
  cs_status cs;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = rpl_pipe2(pipefds,0x80000);
  if (iVar3 < 0) {
    _Var4 = -1;
  }
  else {
    if (nmerge + 1 < (uint)nprocs) {
      reap(-1);
      do {
        if (nprocs < 1) break;
        pVar5 = reap(0);
      } while (pVar5 != 0);
    }
    lVar7 = tries - 1;
    local_e0 = _LC24;
    do {
      iVar3 = pthread_sigmask(0,(__sigset_t *)&caught_signals,(__sigset_t *)&cs.sigs);
      ptVar2 = temphead;
      temphead = (tempnode *)0x0;
      cs.valid = iVar3 == 0;
      _Var4 = fork();
      piVar6 = __errno_location();
      iVar3 = *piVar6;
      if (_Var4 != 0) {
        temphead = ptVar2;
        if (cs.valid != false) goto LAB_00101a88;
        *piVar6 = iVar3;
        if (_Var4 < 0) goto LAB_00101a1a;
        goto LAB_00101ab0;
      }
      if (cs.valid == false) {
LAB_001019c0:
        _Var4 = 0;
        close(0);
        close(1);
        goto LAB_001019d4;
      }
LAB_00101a88:
      pthread_sigmask(2,(__sigset_t *)&cs.sigs,(__sigset_t *)0x0);
      *piVar6 = iVar3;
      if (-1 < _Var4) {
LAB_00101ab0:
        if (_Var4 == 0) goto LAB_001019c0;
        nprocs = nprocs + 1;
        goto LAB_001019d4;
      }
LAB_00101a1a:
      if (iVar3 != 0xb) {
        if (-1 < _Var4) goto LAB_00101ab0;
        break;
      }
      xnanosleep(local_e0);
      local_e0 = local_e0 + local_e0;
      do {
        if (nprocs < 1) break;
        pVar5 = reap(0);
      } while (pVar5 != 0);
      bVar8 = lVar7 != 0;
      lVar7 = lVar7 + -1;
    } while (bVar8);
    iVar3 = *piVar6;
    close(*pipefds);
    close(pipefds[1]);
    *piVar6 = iVar3;
  }
LAB_001019d4:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return _Var4;
}



/* WARNING: Unknown calling convention */

size_t open_input_files(sortfile *files,size_t nfiles,FILE ***pfps)

{
  long lVar1;
  tempnode *temp;
  int iVar2;
  pid_t pVar3;
  FILE **ppFVar4;
  FILE *pFVar5;
  FILE *pFVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int *piVar10;
  size_t sVar11;
  FILE **ppFVar12;
  long in_FS_OFFSET;
  int pipefds [2];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  ppFVar4 = (FILE **)xnmalloc(nfiles);
  *pfps = ppFVar4;
  if (nfiles == 0) {
    sVar11 = 0;
  }
  else {
    sVar11 = 0;
    ppFVar12 = ppFVar4;
    do {
      temp = files->temp;
      if ((temp == (tempnode *)0x0) || (temp->state == '\0')) {
        pFVar5 = stream_open(files->name,"r");
        *ppFVar12 = pFVar5;
        if (pFVar5 == (FILE *)0x0) break;
      }
      else {
        if (temp->state == '\x01') {
          pVar3 = temp->pid;
          lVar7 = hash_remove(proctab);
          if (lVar7 != 0) {
            *(undefined1 *)(lVar7 + 0xc) = 2;
            reap(pVar3);
          }
        }
        iVar2 = open(&temp->field_0xd,0);
        if (iVar2 < 0) {
          ppFVar4[sVar11] = (FILE *)0x0;
          break;
        }
        pVar3 = pipe_fork(pipefds,9);
        if (pVar3 == -1) {
          piVar10 = __errno_location();
          if (*piVar10 != 0x18) {
            uVar8 = quotearg_style(4,compress_program);
            uVar9 = dcgettext(0,"couldn\'t create process for %s -d",5);
                    /* WARNING: Subroutine does not return */
            error(2,*piVar10,uVar9,uVar8);
          }
          close(iVar2);
          *piVar10 = 0x18;
          ppFVar4[sVar11] = (FILE *)0x0;
          break;
        }
        if (pVar3 == 0) {
          close(pipefds[0]);
          if (iVar2 != 0) {
            move_fd(iVar2,0);
          }
          if (pipefds[1] != 1) {
            move_fd(pipefds[1],1);
          }
          execlp(compress_program,compress_program,&_LC26,0);
          piVar10 = __errno_location();
                    /* WARNING: Subroutine does not return */
          async_safe_die(*piVar10,"couldn\'t execute compress program (with -d)");
        }
        temp->pid = pVar3;
        register_proc(temp);
        close(iVar2);
        close(pipefds[1]);
        pFVar6 = fdopen(pipefds[0],"r");
        if (pFVar6 == (FILE *)0x0) {
          piVar10 = __errno_location();
          iVar2 = *piVar10;
          close(pipefds[0]);
          *piVar10 = iVar2;
          *ppFVar12 = (FILE *)0x0;
          break;
        }
        *ppFVar12 = (FILE *)pFVar6;
      }
      sVar11 = sVar11 + 1;
      files = files + 1;
      ppFVar12 = ppFVar12 + 1;
    } while (nfiles != sVar11);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return sVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

tempnode * maybe_create_temp(FILE **pfp,_Bool survive_fd_exhaustion)

{
  ulong uVar1;
  undefined1 *file;
  int iVar2;
  int iVar3;
  pid_t pVar4;
  size_t sVar5;
  tempnode *temp;
  int *piVar6;
  FILE *pFVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  tempnode *ptVar12;
  ulong uVar13;
  long in_FS_OFFSET;
  bool bVar14;
  int pipefds [2];
  __sigset_t local_c0;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar8 = temp_dirs[temp_dir_index_2];
  sVar5 = strlen(pcVar8);
  uVar13 = sVar5 + 0x20 & 0xfffffffffffffff8;
  temp = (tempnode *)xmalloc(uVar13);
  uVar1 = uVar13 - 0xd;
  file = &temp->field_0xd;
  __memcpy_chk(file,pcVar8,sVar5,uVar1);
  if (uVar13 < uVar1) {
    uVar13 = uVar1;
  }
  uVar11 = (sVar5 + uVar13) - uVar1;
  if (uVar11 < uVar13) {
    uVar11 = uVar13;
  }
  __memcpy_chk(file + sVar5,"/sortXXXXXX",0xc,uVar11 + (uVar1 - (sVar5 + uVar13)));
  temp->next = (tempnode *)0x0;
  temp_dir_index_2 = temp_dir_index_2 + 1;
  if (temp_dir_index_2 == temp_dir_count) {
    temp_dir_index_2 = 0;
  }
  iVar3 = pthread_sigmask(0,(__sigset_t *)&caught_signals,&local_c0);
  pipefds[0] = CONCAT31(pipefds[0]._1_3_,iVar3 == 0);
  iVar3 = mkostemp_safer(file,0x80000);
  if (iVar3 < 0) {
    piVar6 = __errno_location();
    iVar3 = *piVar6;
    if ((char)pipefds[0] != '\0') {
      pthread_sigmask(2,&local_c0,(__sigset_t *)0x0);
      *piVar6 = iVar3;
    }
    if ((!survive_fd_exhaustion) || (iVar3 != 0x18)) {
      uVar9 = quotearg_style(4,pcVar8);
      uVar10 = dcgettext(0,"cannot create temporary file in %s",5);
                    /* WARNING: Subroutine does not return */
      error(2,*piVar6,uVar10,uVar9);
    }
    ptVar12 = (tempnode *)0x0;
    free(temp);
  }
  else {
    ptVar12 = temp;
    *temptail = temp;
    temptail = &ptVar12->next;
    piVar6 = __errno_location();
    if ((char)pipefds[0] != '\0') {
      iVar2 = *piVar6;
      pthread_sigmask(2,&local_c0,(__sigset_t *)0x0);
      *piVar6 = iVar2;
    }
    bVar14 = compress_program != (char *)0x0;
    temp->state = '\0';
    if (bVar14) {
      pVar4 = pipe_fork(pipefds,4);
      temp->pid = pVar4;
      if (pVar4 < 1) {
        if (pVar4 == 0) {
          close(pipefds[1]);
          if (iVar3 != 1) {
            move_fd(iVar3,1);
          }
          if (pipefds[0] != 0) {
            move_fd(pipefds[0],0);
          }
          execlp(compress_program,compress_program,0);
                    /* WARNING: Subroutine does not return */
          async_safe_die(*piVar6,"couldn\'t execute compress program");
        }
      }
      else {
        close(iVar3);
        close(pipefds[0]);
        register_proc(temp);
        iVar3 = pipefds[1];
      }
    }
    pFVar7 = fdopen(iVar3,"w");
    *pfp = (FILE *)pFVar7;
    ptVar12 = temp;
    if (pFVar7 == (FILE *)0x0) {
      pcVar8 = (char *)dcgettext(0,"couldn\'t create temporary file",5);
                    /* WARNING: Subroutine does not return */
      sort_die(pcVar8,file);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return ptVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit_cleanup(void)

{
  long lVar1;
  tempnode *ptVar2;
  int iVar3;
  long in_FS_OFFSET;
  cs_status cs;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (temphead != (tempnode *)0x0) {
    iVar3 = pthread_sigmask(0,(__sigset_t *)&caught_signals,(__sigset_t *)&cs.sigs);
    cs.valid = iVar3 == 0;
    for (ptVar2 = temphead; ptVar2 != (tempnode *)0x0; ptVar2 = ptVar2->next) {
      unlink(&ptVar2->field_0xd);
    }
    temphead = (tempnode *)0x0;
    if (cs.valid != false) {
      pthread_sigmask(2,(__sigset_t *)&cs.sigs,(__sigset_t *)0x0);
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    close_stdout();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

void zaptemp(char *name)

{
  char *pcVar1;
  pid_t pid;
  long lVar2;
  tempnode *ptVar3;
  tempnode *ptVar4;
  tempnode *__ptr;
  int iVar5;
  int iVar6;
  int *piVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long in_FS_OFFSET;
  cs_status cs;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar1 = &temphead->field_0xd;
  ptVar4 = (tempnode *)&temphead;
  __ptr = temphead;
  while (name != pcVar1) {
    pcVar1 = &__ptr->next->field_0xd;
    ptVar4 = __ptr;
    __ptr = __ptr->next;
  }
  if (__ptr->state == '\x01') {
    pid = __ptr->pid;
    cs.sigs.__val[0]._0_4_ = pid;
    lVar8 = hash_remove(proctab,&cs);
    if (lVar8 != 0) {
      *(undefined1 *)(lVar8 + 0xc) = 2;
      reap(pid);
    }
  }
  ptVar3 = __ptr->next;
  iVar5 = pthread_sigmask(0,(__sigset_t *)&caught_signals,(__sigset_t *)&cs.sigs);
  cs.valid = iVar5 == 0;
  iVar6 = unlink(name);
  piVar7 = __errno_location();
  iVar5 = *piVar7;
  ptVar4->next = ptVar3;
  if (cs.valid != false) {
    pthread_sigmask(2,(__sigset_t *)&cs.sigs,(__sigset_t *)0x0);
  }
  if (iVar6 != 0) {
    uVar9 = quotearg_n_style_colon(0,3,name);
    uVar10 = dcgettext(0,"warning: cannot remove: %s",5);
                    /* WARNING: Subroutine does not return */
    error(0,iVar5,uVar10,uVar9);
  }
  if (ptVar3 == (tempnode *)0x0) {
    temptail = &ptVar4->next;
  }
  free(__ptr);
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Unknown calling convention */

int keycompare(line *a,line *b)

{
  MD5_CTX *pMVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  _Bool *p_Var6;
  char cVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *__s2;
  size_t sVar14;
  ulong uVar15;
  char *pcVar16;
  size_t sVar17;
  int iVar18;
  byte *__nptr;
  ulong uVar19;
  byte bVar20;
  byte *__nptr_00;
  keyfield *pkVar21;
  ulong uVar22;
  long in_FS_OFFSET;
  longdouble in_ST0;
  longdouble lVar23;
  longdouble lVar24;
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
  char *ea;
  char *p;
  uint32_t dig [2] [4];
  char buf [2] [135];
  char stackbuf [4000];
  char stackbuf_1 [4000];
  
  pbVar12 = (byte *)b->keylim;
  pbVar13 = (byte *)a->keybeg;
  __s2 = (byte *)b->keybeg;
  pbVar11 = (byte *)a->keylim;
  lVar5 = *(long *)(in_FS_OFFSET + 0x28);
  pkVar21 = keylist;
LAB_00102340:
  pcVar16 = pkVar21->translate;
  p_Var6 = pkVar21->ignore;
  if (pbVar11 <= pbVar13) {
    pbVar11 = pbVar13;
  }
  if (pbVar12 <= __s2) {
    pbVar12 = __s2;
  }
  local_2120 = (long)pbVar11 - (long)pbVar13;
  local_2118 = (long)pbVar12 - (long)__s2;
  if (((hard_LC_COLLATE == false) &&
      (uVar19._0_1_ = pkVar21->skipsblanks, uVar19._1_1_ = pkVar21->skipeblanks,
      uVar19._2_1_ = pkVar21->numeric, uVar19._3_1_ = pkVar21->random,
      uVar19._4_1_ = pkVar21->general_numeric, uVar19._5_1_ = pkVar21->human_numeric,
      uVar19._6_1_ = pkVar21->month, uVar19._7_1_ = pkVar21->reverse,
      (uVar19 & 0xffffffffff0000) == 0)) && (pkVar21->version == false)) {
    if (p_Var6 != (_Bool *)0x0) {
      if (pcVar16 == (char *)0x0) {
        do {
          if ((pbVar11 <= pbVar13) || (p_Var6[*pbVar13] == false)) {
            if (pbVar12 <= __s2) goto LAB_00103230;
            while (p_Var6[*__s2] != false) {
              __s2 = __s2 + 1;
              if (pbVar12 == __s2) goto LAB_00103230;
            }
            if (pbVar11 <= pbVar13) goto LAB_00103230;
            uVar10 = (uint)*pbVar13 - (uint)*__s2;
            uVar19 = (ulong)uVar10;
            if (uVar10 != 0) goto LAB_00102645;
            __s2 = __s2 + 1;
          }
          pbVar13 = pbVar13 + 1;
        } while( true );
      }
      do {
        if ((pbVar11 <= pbVar13) || (p_Var6[*pbVar13] == false)) {
          if (pbVar12 <= __s2) goto LAB_001030d0;
          while (p_Var6[*__s2] != false) {
            __s2 = __s2 + 1;
            if (pbVar12 == __s2) goto LAB_001030d0;
          }
          if (pbVar11 <= pbVar13) goto LAB_001030d0;
          uVar19 = (ulong)((uint)(byte)pcVar16[*pbVar13] - (uint)(byte)pcVar16[*__s2]);
          if ((uint)(byte)pcVar16[*pbVar13] - (uint)(byte)pcVar16[*__s2] != 0) goto LAB_00102645;
          __s2 = __s2 + 1;
        }
        pbVar13 = pbVar13 + 1;
      } while( true );
    }
    uVar22 = local_2118;
    if (local_2120 <= local_2118) {
      uVar22 = local_2120;
    }
    if (uVar22 != 0) {
      sVar17 = 0;
      if (pcVar16 == (char *)0x0) {
        uVar10 = memcmp(pbVar13,__s2,uVar22);
        uVar19 = (ulong)uVar10;
        if (uVar10 != 0) goto LAB_00102645;
      }
      else {
        do {
          uVar19 = (ulong)((uint)(byte)pcVar16[pbVar13[sVar17]] - (uint)(byte)pcVar16[__s2[sVar17]])
          ;
          if ((uint)(byte)pcVar16[pbVar13[sVar17]] - (uint)(byte)pcVar16[__s2[sVar17]] != 0)
          goto LAB_00102645;
          sVar17 = sVar17 + 1;
        } while (uVar22 != sVar17);
      }
    }
    uVar19 = (ulong)((uint)(local_2118 < local_2120) - (uint)(local_2120 < local_2118));
    goto LAB_00102495;
  }
  local_2150 = (byte *)0x0;
  bVar2 = *pbVar11;
  bVar3 = *pbVar12;
  __nptr = pbVar13;
  __nptr_00 = __s2;
  lVar23 = in_ST0;
  lVar24 = in_ST1;
  if (p_Var6 != (_Bool *)0x0 || pcVar16 != (char *)0x0) {
    __nptr = (byte *)stackbuf;
    if (local_2120 + 2 + local_2118 < 0xfa1) {
      __nptr_00 = (byte *)(stackbuf + local_2120 + 1);
    }
    else {
      local_2138._0_8_ = pcVar16;
      __nptr = (byte *)xmalloc();
      __nptr_00 = __nptr + local_2120 + 1;
      local_2150 = __nptr;
      lVar23 = in_ST0;
      lVar24 = in_ST1;
    }
    pbVar11 = __nptr;
    if (local_2120 != 0) {
      pbVar11 = pbVar13 + local_2120;
      local_2120 = 0;
      do {
        uVar19 = (ulong)*pbVar13;
        if (p_Var6 != (_Bool *)0x0) {
          cVar7 = p_Var6[*pbVar13];
          while (cVar7 != '\0') {
            pbVar13 = pbVar13 + 1;
            if (pbVar13 == pbVar11) goto LAB_00102798;
            uVar19 = (ulong)*pbVar13;
            cVar7 = p_Var6[*pbVar13];
          }
        }
        if (pcVar16 != (char *)0x0) {
          uVar19 = (ulong)(byte)pcVar16[uVar19];
        }
        pbVar13 = pbVar13 + 1;
        __nptr[local_2120] = (byte)uVar19;
        local_2120 = local_2120 + 1;
      } while (pbVar11 != pbVar13);
LAB_00102798:
      pbVar11 = __nptr + local_2120;
    }
    pbVar12 = __nptr_00;
    if (local_2118 != 0) {
      pbVar12 = __s2 + local_2118;
      local_2118 = 0;
      do {
        uVar19 = (ulong)*__s2;
        if (p_Var6 != (_Bool *)0x0) {
          cVar7 = p_Var6[*__s2];
          while (cVar7 != '\0') {
            __s2 = __s2 + 1;
            if (__s2 == pbVar12) goto LAB_00102808;
            uVar19 = (ulong)*__s2;
            cVar7 = p_Var6[*__s2];
          }
        }
        if (pcVar16 != (char *)0x0) {
          uVar19 = (ulong)(byte)pcVar16[uVar19];
        }
        __s2 = __s2 + 1;
        __nptr_00[local_2118] = (byte)uVar19;
        local_2118 = local_2118 + 1;
      } while (pbVar12 != __s2);
LAB_00102808:
      pbVar12 = __nptr_00 + local_2118;
    }
  }
  *pbVar11 = 0;
  *pbVar12 = 0;
  in_ST0 = lVar23;
  in_ST1 = lVar24;
  if (pkVar21->numeric != false) {
    while (blanks[*__nptr] != false) {
      __nptr = __nptr + 1;
    }
    cVar7 = blanks[*__nptr_00];
    while (cVar7 != '\0') {
      pbVar13 = __nptr_00 + 1;
      __nptr_00 = __nptr_00 + 1;
      cVar7 = blanks[*pbVar13];
    }
LAB_00102430:
    local_2138._0_8_ = pbVar12;
    uVar10 = strnumcmp(__nptr,__nptr_00,(int)decimal_point,thousands_sep);
LAB_00102470:
    local_2138._0_4_ = uVar10;
    *pbVar11 = bVar2;
    *pbVar12 = bVar3;
    free(local_2150);
    uVar19 = (ulong)uVar10;
    goto LAB_00102495;
  }
  if (pkVar21->general_numeric != false) {
    in_ST0 = in_ST2;
    in_ST1 = in_ST3;
    in_ST2 = in_ST4;
    in_ST3 = in_ST5;
    in_ST4 = in_ST6;
    in_ST5 = in_ST7;
    strtold((char *)__nptr,&ea);
    strtold((char *)__nptr_00,&p);
    in_ST6 = in_ST5;
    in_ST7 = in_ST5;
    if (__nptr == (byte *)ea) {
      uVar10 = -(uint)((byte *)p != __nptr_00);
      local_2138._0_10_ = lVar23;
    }
    else if (__nptr_00 == (byte *)p) {
LAB_001028b6:
      uVar10 = 1;
      local_2138._0_10_ = lVar23;
    }
    else if (lVar23 < lVar24) {
LAB_001032b1:
      uVar10 = 0xffffffff;
      local_2138._0_10_ = lVar23;
    }
    else {
      uVar10 = 1;
      local_2138._0_10_ = lVar23;
      if ((lVar23 <= lVar24) && (uVar10 = 0, lVar23 != lVar24)) {
        if (!NAN(lVar24)) goto LAB_001032b1;
        if (!NAN(lVar23)) goto LAB_001028b6;
        __snprintf_chk(buf,0x87,2,0x10e,&_LC34,pbVar12,SUB108(lVar23,0),
                       (short)((unkuint10)lVar23 >> 0x40));
        in_ST7 = in_ST6;
        __snprintf_chk(buf + 1,0x87,2,0x87,&_LC34);
        uVar10 = strcmp(buf[0],buf[1]);
        local_2138._0_10_ = lVar24;
      }
    }
    goto LAB_00102470;
  }
  if (pkVar21->human_numeric == false) {
    if (pkVar21->month == false) {
      if (pkVar21->random == false) {
        if (pkVar21->version == false) {
          if (local_2120 == 0) {
            uVar10 = -(uint)(local_2118 != 0);
          }
          else {
            if (local_2118 == 0) {
              *pbVar11 = bVar2;
              *__nptr_00 = bVar3;
              free(local_2150);
              uVar19 = 1;
              goto LAB_00102645;
            }
            local_2138._0_8_ = pbVar12;
            uVar10 = xmemcoll0(__nptr,local_2120 + 1,__nptr_00,local_2118 + 1);
            in_ST0 = lVar23;
            in_ST1 = lVar24;
          }
        }
        else {
          local_2138._0_8_ = pbVar12;
          uVar10 = filenvercmp(__nptr,local_2120,__nptr_00);
          in_ST0 = lVar23;
          in_ST1 = lVar24;
        }
      }
      else {
        buf[1]._21_8_ = random_md5_state.CTX.data._40_8_;
        buf[1][0x1d] = (undefined1)random_md5_state.CTX.data[0xc];
        buf[1][0x1e] = random_md5_state.CTX.data[0xc]._1_1_;
        buf[1][0x1f] = random_md5_state.CTX.data[0xc]._2_1_;
        buf[1][0x20] = random_md5_state.CTX.data[0xc]._3_1_;
        buf[1][0x21] = (undefined1)random_md5_state.CTX.data[0xd];
        buf[1][0x22] = random_md5_state.CTX.data[0xd]._1_1_;
        buf[1][0x23] = random_md5_state.CTX.data[0xd]._2_1_;
        buf[1][0x24] = random_md5_state.CTX.data[0xd]._3_1_;
        buf[1][0x25] = (undefined1)random_md5_state.CTX.data[0xe];
        buf[1][0x26] = random_md5_state.CTX.data[0xe]._1_1_;
        buf[1][0x27] = random_md5_state.CTX.data[0xe]._2_1_;
        buf[1][0x28] = random_md5_state.CTX.data[0xe]._3_1_;
        buf[1]._41_8_ = random_md5_state.CTX._84_8_;
        buf[0]._92_8_ = random_md5_state.CTX._0_8_;
        buf[0]._100_4_ = (undefined4)random_md5_state.CTX._8_8_;
        buf[0]._104_4_ = SUB84(random_md5_state.CTX._8_8_,4);
        buf[0]._64_8_ = random_md5_state.CTX.data._40_8_;
        buf[0][0x48] = (undefined1)random_md5_state.CTX.data[0xc];
        buf[0][0x49] = random_md5_state.CTX.data[0xc]._1_1_;
        buf[0][0x4a] = random_md5_state.CTX.data[0xc]._2_1_;
        buf[0][0x4b] = random_md5_state.CTX.data[0xc]._3_1_;
        buf[0]._108_4_ = (undefined4)random_md5_state.CTX._16_8_;
        buf[0]._112_4_ = SUB84(random_md5_state.CTX._16_8_,4);
        buf[0]._116_8_ = random_md5_state.CTX.data._0_8_;
        buf[0]._124_8_ = random_md5_state.CTX.data._8_8_;
        buf._132_8_ = random_md5_state.CTX.data._16_8_;
        buf[1]._5_8_ = random_md5_state.CTX.data._24_8_;
        buf[1]._13_8_ = random_md5_state.CTX.data._32_8_;
        buf[0]._0_8_ = random_md5_state.CTX._0_8_;
        buf[0]._8_8_ = random_md5_state.CTX._8_8_;
        buf[0]._16_8_ = random_md5_state.CTX._16_8_;
        buf[0]._24_8_ = random_md5_state.CTX.data._0_8_;
        buf[0]._32_8_ = random_md5_state.CTX.data._8_8_;
        buf[0]._40_8_ = random_md5_state.CTX.data._16_8_;
        buf[0]._48_8_ = random_md5_state.CTX.data._24_8_;
        buf[0]._56_8_ = random_md5_state.CTX.data._32_8_;
        buf[0][0x4c] = (undefined1)random_md5_state.CTX.data[0xd];
        buf[0][0x4d] = random_md5_state.CTX.data[0xd]._1_1_;
        buf[0][0x4e] = random_md5_state.CTX.data[0xd]._2_1_;
        buf[0][0x4f] = random_md5_state.CTX.data[0xd]._3_1_;
        buf[0][0x50] = (undefined1)random_md5_state.CTX.data[0xe];
        buf[0][0x51] = random_md5_state.CTX.data[0xe]._1_1_;
        buf[0][0x52] = random_md5_state.CTX.data[0xe]._2_1_;
        buf[0][0x53] = random_md5_state.CTX.data[0xe]._3_1_;
        buf[0]._84_8_ = random_md5_state.CTX._84_8_;
        if (hard_LC_COLLATE == false) {
          (*ptr_MD5_Update)((MD5_CTX *)buf,__nptr,local_2120);
          (*ptr_MD5_Final)((uchar *)dig,(MD5_CTX *)buf);
          (*ptr_MD5_Update)((MD5_CTX *)(buf[0] + 0x5c),__nptr_00,local_2118);
          local_2138._0_8_ = dig + 1;
          (*ptr_MD5_Final)((uchar *)local_2138._0_8_,(MD5_CTX *)(buf[0] + 0x5c));
          uVar9 = memcmp(dig,(void *)local_2138._0_8_,0x10);
          local_2110 = (char *)0x0;
          local_2108 = __nptr_00;
joined_r0x0010303e:
          uVar10 = uVar9;
          if (uVar10 == 0) {
            uVar19 = local_2118;
            if (local_2120 <= local_2118) {
              uVar19 = local_2120;
            }
            local_2138._8_2_ = (undefined2)((unkuint10)local_2138._0_10_ >> 0x40);
            local_2138._0_8_ = pbVar12;
            uVar10 = memcmp(__nptr,local_2108,uVar19);
            if (uVar10 == 0) {
              uVar10 = (uint)(local_2118 < local_2120) - (uint)(local_2120 < local_2118);
            }
          }
        }
        else {
          uVar9 = 0;
          uVar19 = (local_2118 + local_2120) * 3 + 2;
          local_2110 = (char *)0x0;
          local_2138._0_8_ = stackbuf_1;
          pMVar1 = (MD5_CTX *)(buf[0] + 0x5c);
          uVar22 = 4000;
LAB_00102b20:
          if (uVar22 < uVar19) {
            uVar22 = uVar22 * 3 >> 1;
            if (uVar22 <= uVar19) {
              uVar22 = uVar19;
            }
            free(local_2110);
            local_2110 = (char *)malloc(uVar22);
            pcVar16 = local_2110;
            if (local_2110 == (char *)0x0) {
              uVar22 = 4000;
              pcVar16 = stackbuf_1;
            }
            local_2138._0_8_ = pcVar16;
          }
          if (__nptr < pbVar11) {
            sVar14 = xstrxfrm((char *)local_2138._0_8_,(char *)__nptr,uVar22);
            local_2120 = sVar14 + 1;
            if (__nptr_00 < pbVar12) {
              if (uVar22 < local_2120) {
                sVar14 = xstrxfrm((char *)0x0,(char *)__nptr_00,0);
                local_2118 = sVar14 + 1;
                uVar15 = local_2120 + local_2118;
                goto LAB_00102e8c;
              }
              local_2108 = (byte *)(local_2138._0_8_ + local_2120);
              sVar14 = xstrxfrm((char *)local_2108,(char *)__nptr_00,uVar22 - local_2120);
              local_2118 = sVar14 + 1;
              uVar15 = local_2120 + local_2118;
              if (uVar22 < uVar15) goto LAB_00102b70;
            }
            else {
              if (uVar22 < local_2120) {
                local_2118 = 0;
                uVar15 = local_2120;
LAB_00102e8c:
                if (uVar15 < 0x5555555555555555) goto LAB_00102b7f;
                free(local_2110);
                local_2138._0_8_ = xmalloc(uVar15);
                goto LAB_00102eb6;
              }
              local_2118 = 0;
LAB_00102edb:
              local_2108 = (byte *)(local_2138._0_8_ + local_2120);
            }
LAB_00102d65:
            sVar17 = strlen((char *)__nptr);
            __nptr = __nptr + sVar17 + 1;
            if (__nptr_00 < pbVar12) goto LAB_00102d77;
LAB_00102d84:
            if ((pbVar11 <= __nptr) && (pbVar12 <= __nptr_00)) goto LAB_00102bdc;
            (*ptr_MD5_Update)((MD5_CTX *)buf,(void *)local_2138._0_8_,local_2120);
            (*ptr_MD5_Update)(pMVar1,local_2108,local_2118);
            if (uVar9 == 0) {
              uVar15 = local_2118;
              if (local_2120 <= local_2118) {
                uVar15 = local_2120;
              }
              uVar9 = memcmp((void *)local_2138._0_8_,local_2108,uVar15);
              if (uVar9 == 0) {
                uVar9 = (uint)(local_2118 < local_2120) - (uint)(local_2120 < local_2118);
              }
            }
            goto LAB_00102b20;
          }
          if (__nptr_00 < pbVar12) {
            sVar14 = xstrxfrm((char *)local_2138._0_8_,(char *)__nptr_00,uVar22);
            uVar15 = sVar14 + 1;
            local_2118 = uVar15;
            if (uVar22 < uVar15) {
              local_2120 = 0;
LAB_00102b70:
              if (uVar15 < 0x5555555555555555) {
LAB_00102b7f:
                uVar15 = uVar15 * 3 >> 1;
              }
              free(local_2110);
              local_2110 = (char *)xmalloc(uVar15);
              local_2138._0_8_ = local_2110;
              if (__nptr < pbVar11) {
LAB_00102eb6:
                strxfrm((char *)local_2138._0_8_,(char *)__nptr,local_2120);
                local_2110 = (char *)local_2138._0_8_;
                uVar22 = uVar15;
                if (pbVar12 <= __nptr_00) goto LAB_00102edb;
              }
              else if (pbVar12 <= __nptr_00) {
                local_2108 = (byte *)(local_2110 + local_2120);
                goto LAB_00102bdc;
              }
              local_2108 = (byte *)(local_2138._0_8_ + local_2120);
              strxfrm((char *)local_2108,(char *)__nptr_00,local_2118);
              local_2110 = (char *)local_2138._0_8_;
              uVar22 = uVar15;
              if (__nptr < pbVar11) goto LAB_00102d65;
            }
            else {
              local_2108 = (byte *)local_2138._0_8_;
              local_2120 = 0;
            }
            if (pbVar12 <= __nptr_00) goto LAB_00102bdc;
LAB_00102d77:
            sVar17 = strlen((char *)__nptr_00);
            __nptr_00 = __nptr_00 + sVar17 + 1;
            goto LAB_00102d84;
          }
          local_2118 = 0;
          local_2120 = 0;
          local_2108 = (byte *)local_2138._0_8_;
LAB_00102bdc:
          (*ptr_MD5_Update)((MD5_CTX *)buf,(void *)local_2138._0_8_,local_2120);
          (*ptr_MD5_Final)((uchar *)dig,(MD5_CTX *)buf);
          (*ptr_MD5_Update)(pMVar1,local_2108,local_2118);
          (*ptr_MD5_Final)((uchar *)(dig + 1),pMVar1);
          uVar10 = memcmp(dig,dig + 1,0x10);
          __nptr = (byte *)local_2138._0_8_;
          if (uVar10 == 0) goto joined_r0x0010303e;
        }
        local_2138._0_4_ = uVar10;
        free(local_2110);
        in_ST0 = lVar23;
        in_ST1 = lVar24;
      }
    }
    else {
      local_2138._0_8_ = pbVar12;
      iVar18 = getmonth((char *)__nptr,(char **)0x0);
      iVar8 = getmonth((char *)__nptr_00,(char **)0x0);
      uVar10 = iVar18 - iVar8;
      in_ST0 = lVar23;
      in_ST1 = lVar24;
    }
    goto LAB_00102470;
  }
  while (bVar4 = *__nptr, blanks[bVar4] != false) {
    __nptr = __nptr + 1;
  }
  bVar20 = *__nptr_00;
  cVar7 = blanks[bVar20];
  while (cVar7 != '\0') {
    bVar20 = __nptr_00[1];
    __nptr_00 = __nptr_00 + 1;
    cVar7 = blanks[bVar20];
  }
  local_2138._0_8_ = &p;
  p = (char *)(__nptr + (bVar4 == 0x2d));
  cVar7 = traverse_raw_number(&p);
  uVar10 = 0;
  if ('0' < cVar7) {
    uVar10 = (int)""[(byte)*p];
    if (bVar4 == 0x2d) {
      uVar10 = -(int)""[(byte)*p];
    }
  }
  local_2138._0_4_ = uVar10;
  p = (char *)(__nptr_00 + (bVar20 == 0x2d));
  cVar7 = traverse_raw_number(&p);
  if ('0' < cVar7) {
    iVar18 = -(int)""[(byte)*p];
    if (bVar20 == 0x2d) {
      iVar18 = (int)""[(byte)*p];
    }
    uVar10 = uVar10 + iVar18;
  }
  in_ST0 = lVar23;
  in_ST1 = lVar24;
  if (uVar10 == 0) goto LAB_00102430;
  *pbVar11 = bVar2;
  *pbVar12 = bVar3;
  free(local_2150);
  uVar19 = (ulong)uVar10;
  goto LAB_00102645;
LAB_00103230:
  uVar19 = (ulong)((uint)(pbVar13 < pbVar11) - (uint)(__s2 < pbVar12));
  goto LAB_00102495;
LAB_001030d0:
  uVar19 = (ulong)((uint)(pbVar13 < pbVar11) - (uint)(__s2 < pbVar12));
LAB_00102495:
  if ((int)uVar19 != 0) {
LAB_00102645:
    iVar18 = (int)uVar19;
    if (pkVar21->reverse != false) {
      iVar18 = (int)(uVar19 >> 0x1f) - (uint)(0 < iVar18);
    }
LAB_00102650:
    if (lVar5 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return iVar18;
  }
  pkVar21 = pkVar21->next;
  iVar18 = 0;
  if (pkVar21 == (keyfield *)0x0) goto LAB_00102650;
  if (pkVar21->eword == 0xffffffffffffffff) {
    pbVar11 = (byte *)(a->text + (a->length - 1));
    pbVar12 = (byte *)(b->text + (b->length - 1));
  }
  else {
    pbVar11 = (byte *)limfield((line *)a->text,(keyfield *)a->length);
    pbVar12 = (byte *)limfield((line *)b->text,(keyfield *)b->length);
  }
  if (pkVar21->sword == 0xffffffffffffffff) {
    pbVar13 = (byte *)a->text;
    __s2 = (byte *)b->text;
    if (pkVar21->skipsblanks != false) {
      if (pbVar13 < pbVar11) {
        do {
          if (blanks[*pbVar13] == false) break;
          pbVar13 = pbVar13 + 1;
        } while (pbVar11 != pbVar13);
      }
      if (__s2 < pbVar12) {
        do {
          if (blanks[*__s2] == false) break;
          __s2 = __s2 + 1;
        } while (pbVar12 != __s2);
      }
    }
  }
  else {
    pbVar13 = (byte *)begfield((line *)a->text,(keyfield *)a->length);
    __s2 = (byte *)begfield((line *)b->text,(keyfield *)b->length);
  }
  goto LAB_00102340;
}



/* WARNING: Unknown calling convention */

int compare(line *a,line *b)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (keylist != (keyfield *)0x0) {
    iVar2 = keycompare(a,b);
    if (iVar2 != 0) {
      return iVar2;
    }
    if (unique != false) {
      return 0;
    }
    if (stable != false) {
      return 0;
    }
  }
  uVar1 = b->length - 1;
  uVar5 = a->length - 1;
  if (uVar5 == 0) {
    uVar4 = (ulong)-(uint)(uVar1 != 0);
  }
  else {
    uVar4 = 1;
    if (uVar1 != 0) {
      if (hard_LC_COLLATE == false) {
        uVar4 = uVar1;
        if (uVar5 <= uVar1) {
          uVar4 = uVar5;
        }
        uVar3 = memcmp(a->text,b->text,uVar4);
        uVar4 = (ulong)uVar3;
        if (uVar3 == 0) {
          uVar4 = (ulong)((uint)(uVar1 < uVar5) - (uint)(uVar5 < uVar1));
        }
      }
      else {
        uVar4 = xmemcoll0(a->text,a->length,b->text);
      }
    }
  }
  iVar2 = (int)uVar4;
  if (reverse != false) {
    iVar2 = ((uint)(uVar4 >> 0x1f) & 1) - (uint)(0 < iVar2);
  }
  return iVar2;
}



/* WARNING: Unknown calling convention */

void sequential_sort(line *lines,size_t nlines,line *temp,_Bool to_temp)

{
  size_t sVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  size_t sVar6;
  char *pcVar7;
  char *pcVar8;
  line *plVar9;
  int iVar10;
  line *plVar11;
  line *b;
  line *a;
  ulong nlines_00;
  line *plVar12;
  line *plVar13;
  size_t local_40;
  
  if (nlines == 2) {
    iVar10 = compare(lines + -1,lines + -2);
    if (to_temp) {
      plVar13 = lines + (int)((0 < iVar10) - 2);
      plVar11 = lines + (int)~(uint)(0 < iVar10);
      sVar1 = plVar11->length;
      pcVar2 = plVar11->keybeg;
      pcVar3 = plVar11->keylim;
      temp[-1].text = plVar11->text;
      temp[-1].length = sVar1;
      pcVar4 = plVar13->text;
      sVar1 = plVar13->length;
      temp[-1].keybeg = pcVar2;
      temp[-1].keylim = pcVar3;
      pcVar2 = plVar13->keybeg;
      pcVar3 = plVar13->keylim;
      temp[-2].text = pcVar4;
      temp[-2].length = sVar1;
      temp[-2].keybeg = pcVar2;
      temp[-2].keylim = pcVar3;
    }
    else if (0 < iVar10) {
      pcVar2 = lines[-1].text;
      sVar1 = lines[-1].length;
      pcVar3 = lines[-1].keybeg;
      pcVar4 = lines[-1].keylim;
      pcVar5 = lines[-2].text;
      sVar6 = lines[-2].length;
      pcVar7 = lines[-2].keybeg;
      pcVar8 = lines[-2].keylim;
      temp[-1].text = pcVar2;
      temp[-1].length = sVar1;
      temp[-1].keybeg = pcVar3;
      temp[-1].keylim = pcVar4;
      lines[-1].text = pcVar5;
      lines[-1].length = sVar6;
      lines[-1].keybeg = pcVar7;
      lines[-1].keylim = pcVar8;
      lines[-2].text = pcVar2;
      lines[-2].length = sVar1;
      lines[-2].keybeg = pcVar3;
      lines[-2].keylim = pcVar4;
    }
  }
  else {
    nlines_00 = nlines >> 1;
    local_40 = nlines - nlines_00;
    plVar13 = lines + -nlines_00;
    if (to_temp) {
      plVar12 = temp + -nlines_00;
      sequential_sort(plVar13,local_40,plVar12,true);
      plVar11 = temp;
      plVar13 = plVar12;
      if (3 < nlines) {
        sequential_sort(lines,nlines_00,temp,false);
      }
    }
    else {
      sequential_sort(plVar13,local_40,temp,false);
      plVar11 = lines;
      if (nlines < 4) {
        sVar1 = lines[-1].length;
        pcVar2 = lines[-1].keybeg;
        pcVar3 = lines[-1].keylim;
        temp[-1].text = lines[-1].text;
        temp[-1].length = sVar1;
        temp[-1].keybeg = pcVar2;
        temp[-1].keylim = pcVar3;
        lines = temp;
      }
      else {
        sequential_sort(lines,nlines_00,temp,true);
        lines = temp;
      }
    }
    plVar12 = plVar13 + -1;
    plVar9 = lines + -1;
    while( true ) {
      while( true ) {
        a = plVar9;
        b = plVar12;
        plVar12 = plVar11 + -1;
        iVar10 = compare(a,b);
        if (iVar10 < 1) break;
        sVar1 = plVar13[-1].length;
        local_40 = local_40 - 1;
        plVar12->text = plVar13[-1].text;
        plVar11[-1].length = sVar1;
        pcVar2 = plVar13[-1].keylim;
        plVar11[-1].keybeg = plVar13[-1].keybeg;
        plVar11[-1].keylim = pcVar2;
        if (local_40 == 0) {
          memmove(plVar12 + -nlines_00,lines + -nlines_00,nlines_00 << 5);
          return;
        }
        plVar11 = plVar12;
        plVar12 = b + -1;
        plVar9 = a;
        plVar13 = b;
      }
      sVar1 = lines[-1].length;
      pcVar2 = lines[-1].keybeg;
      pcVar3 = lines[-1].keylim;
      plVar12->text = lines[-1].text;
      plVar11[-1].length = sVar1;
      plVar11[-1].keybeg = pcVar2;
      plVar11[-1].keylim = pcVar3;
      if (nlines_00 == 1) break;
      nlines_00 = nlines_00 - 1;
      plVar11 = plVar12;
      plVar12 = b;
      plVar9 = a + -1;
      lines = a;
    }
  }
  return;
}



/* WARNING: Unknown calling convention */

void write_unique(line *line,FILE *tfp,char *temp_output)

{
  int iVar1;
  
  if (unique) {
    if (saved_line.text != (char *)0x0) {
      iVar1 = compare(line,&saved_line);
      if (iVar1 == 0) {
        return;
      }
    }
    saved_line.text = line->text;
    saved_line.length = line->length;
    saved_line.keybeg = line->keybeg;
    saved_line.keylim = line->keylim;
  }
  write_line(line,tfp,temp_output);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void mergefps(sortfile *files,size_t ntemps,size_t nfiles,FILE *ofp,char *output_file,FILE **fps)

{
  size_t sVar1;
  buffer *buf;
  sortfile *__dest;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  line *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  keyfield *pkVar17;
  size_t sVar18;
  size_t sVar19;
  _Bool _Var20;
  int iVar21;
  void *__ptr;
  void *__ptr_00;
  void *__ptr_01;
  ulong *__ptr_02;
  char *pcVar22;
  void *pvVar23;
  ulong *puVar24;
  sortfile *psVar25;
  long lVar26;
  ulong uVar27;
  undefined8 *puVar28;
  ulong uVar29;
  long lVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  long in_FS_OFFSET;
  bool bVar34;
  ulong local_e8;
  buffer *local_e0;
  line *local_a8;
  ulong local_98;
  ulong local_78;
  line saved;
  
  lVar4 = *(long *)(in_FS_OFFSET + 0x28);
  __ptr = (void *)xnmalloc(nfiles,0x38);
  __ptr_00 = (void *)xnmalloc(nfiles,8);
  __ptr_01 = (void *)xnmalloc(nfiles,8);
  __ptr_02 = (ulong *)xnmalloc(nfiles,8);
  pkVar17 = keylist;
  saved.text = (char *)0x0;
  if (nfiles == 0) goto LAB_00103939;
  lVar26 = 0;
  uVar31 = 0;
  local_e8 = nfiles;
  local_78 = ntemps;
  while( true ) {
    while( true ) {
      uVar29 = sort_size / local_e8;
      if (sort_size / local_e8 < merge_buffer_size) {
        uVar29 = merge_buffer_size;
      }
      buf = (buffer *)((long)__ptr + (lVar26 - uVar31) * 8);
      while( true ) {
        sVar1 = (uVar29 & 0xffffffffffffffe0) + 0x20;
        pcVar22 = (char *)malloc(sVar1);
        buf->buf = pcVar22;
        if (pcVar22 != (char *)0x0) break;
        uVar29 = sVar1 >> 1;
        if (sVar1 < 0x43) {
          xalloc_die();
          goto LAB_00104025;
        }
      }
      buf->alloc = sVar1;
      sVar19 = _UNK_0010b178;
      sVar18 = __LC35;
      buf->eof = false;
      psVar25 = files + uVar31;
      pcVar22 = psVar25->name;
      buf->left = sVar18;
      buf->line_bytes = sVar19;
      __dest = (sortfile *)((long)fps + lVar26);
      buf->used = 0;
      buf->nlines = 0;
      _Var20 = fillbuf(buf,(FILE *)__dest->name,pcVar22);
      if (!_Var20) break;
      lVar5 = buf->alloc;
      uVar31 = uVar31 + 1;
      pcVar22 = buf->buf;
      *(char **)((long)__ptr_00 + lVar26) = pcVar22 + lVar5 + -0x20;
      *(char **)((long)__ptr_01 + lVar26) = pcVar22 + buf->nlines * -0x20 + lVar5;
      if (local_e8 <= uVar31) goto LAB_001039a5;
      lVar26 = uVar31 * 8;
    }
    xfclose((FILE *)__dest->name,psVar25->name);
    if (uVar31 < local_78) {
      local_78 = local_78 - 1;
      zaptemp(psVar25->name);
    }
    free(buf->buf);
    uVar29 = local_e8 - 1;
    if (uVar29 <= uVar31) break;
    lVar5 = local_e8 * 8;
    if ((__dest < files + local_e8) &&
       (lVar30 = lVar26, psVar25 < (sortfile *)(fps + (local_e8 - 1)))) {
      do {
        puVar2 = (undefined8 *)((long)&files[1].name + lVar30 * 2);
        uVar9 = puVar2[1];
        uVar8 = *(undefined8 *)((long)fps + lVar30 + 8);
        puVar28 = (undefined8 *)((long)&files->name + lVar30 * 2);
        *puVar28 = *puVar2;
        puVar28[1] = uVar9;
        *(undefined8 *)((long)fps + lVar30) = uVar8;
        lVar30 = lVar30 + 8;
        local_e8 = uVar29;
      } while (lVar5 + -8 != lVar30);
    }
    else {
      memmove(psVar25,files + uVar31 + 1,(uVar29 - uVar31) * 0x10);
      memmove(__dest,(void *)((long)fps + lVar26 + 8),(uVar29 - uVar31) * 8);
      local_e8 = uVar29;
    }
  }
  local_e8 = uVar29;
  if (uVar29 == 0) goto LAB_00103939;
LAB_001039a5:
  uVar31 = 0;
  if ((local_e8 & 1) == 0) {
LAB_001039e0:
    do {
      __ptr_02[uVar31] = uVar31;
      uVar29 = uVar31 + 1;
      uVar31 = uVar31 + 2;
      __ptr_02[uVar29] = uVar29;
    } while (local_e8 != uVar31);
  }
  else {
    uVar31 = 1;
    *__ptr_02 = 0;
    if (local_e8 != 1) goto LAB_001039e0;
  }
  if (uVar31 != 1) {
    uVar29 = 1;
    do {
      while( true ) {
        puVar24 = __ptr_02 + uVar29;
        uVar32 = *puVar24;
        uVar27 = __ptr_02[uVar29 - 1];
        iVar21 = compare(*(line **)((long)__ptr_00 + uVar27 * 8),
                         *(line **)((long)__ptr_00 + uVar32 * 8));
        if (iVar21 < 1) break;
        __ptr_02[uVar29 - 1] = uVar32;
        uVar29 = 1;
        *puVar24 = uVar27;
      }
      uVar29 = uVar29 + 1;
    } while (uVar29 < uVar31);
  }
  local_98 = 0;
  local_a8 = (line *)0x0;
LAB_00103a88:
  while( true ) {
    uVar29 = *__ptr_02;
    lVar26 = uVar29 * 8;
    plVar3 = (long *)((long)__ptr_00 + lVar26);
    plVar6 = (line *)*plVar3;
    if (unique == false) break;
    if (local_a8 != (line *)0x0) {
      iVar21 = compare(local_a8,plVar6);
      if (iVar21 == 0) goto LAB_00103ace;
      write_line(&saved,ofp,output_file);
    }
    uVar32 = plVar6->length;
    if (local_98 < uVar32) {
      do {
        uVar27 = uVar32;
        if (local_98 == 0) break;
        local_98 = local_98 * 2;
        uVar27 = local_98;
      } while (local_98 < uVar32);
      free(saved.text);
      saved.text = (char *)xmalloc(uVar27);
      uVar32 = plVar6->length;
      local_98 = uVar27;
    }
    saved.length = uVar32;
    pvVar23 = memcpy(saved.text,plVar6->text,uVar32);
    if (pkVar17 != (keyfield *)0x0) {
      saved.keybeg = (char *)((long)pvVar23 + ((long)plVar6->keybeg - (long)plVar6->text));
      saved.keylim = (char *)((long)pvVar23 + ((long)plVar6->keylim - (long)plVar6->text));
    }
    local_a8 = &saved;
    if (plVar6 <= *(line **)((long)__ptr_01 + lVar26)) goto LAB_00103ae0;
LAB_00103cb3:
    *plVar3 = (long)(plVar6 + -1);
LAB_00103b5f:
    if (uVar31 != 1) {
      plVar6 = (line *)*plVar3;
      uVar32 = 1;
      uVar27 = uVar31;
      uVar33 = 1;
      do {
        while( true ) {
          uVar7 = __ptr_02[uVar33];
          iVar21 = compare(plVar6,*(line **)((long)__ptr_00 + uVar7 * 8));
          if ((-1 < iVar21) && ((uVar7 <= uVar29 || (iVar21 != 0)))) break;
          bVar34 = uVar33 <= uVar32;
          uVar27 = uVar33;
          uVar33 = uVar32 + uVar33 >> 1;
          if (bVar34) goto LAB_00103be0;
        }
        uVar32 = uVar33 + 1;
        uVar33 = uVar32 + uVar27 >> 1;
      } while (uVar32 < uVar27);
LAB_00103be0:
      lVar26 = uVar32 - 1;
      puVar24 = __ptr_02;
      if (lVar26 != 0) {
        memmove(__ptr_02,__ptr_02 + 1,lVar26 * 8);
        puVar24 = __ptr_02 + lVar26;
      }
      *puVar24 = uVar29;
    }
  }
  write_line(plVar6,ofp,output_file);
LAB_00103ace:
  if (*(line **)((long)__ptr_01 + lVar26) < plVar6) goto LAB_00103cb3;
LAB_00103ae0:
  psVar25 = files + uVar29;
  local_e0 = (buffer *)((long)__ptr + uVar29 * 0x38);
  _Var20 = fillbuf(local_e0,fps[uVar29],psVar25->name);
  if (_Var20) {
    lVar5 = local_e0->alloc;
    pcVar22 = local_e0->buf;
    *plVar3 = (long)(pcVar22 + lVar5 + -0x20);
    *(char **)((long)__ptr_01 + lVar26) = pcVar22 + local_e0->nlines * -0x20 + lVar5;
    goto LAB_00103b5f;
  }
  puVar24 = __ptr_02 + 1;
  if (uVar31 == 1) {
    xfclose(fps[uVar29],psVar25->name);
    if (local_78 <= uVar29) {
      free(local_e0->buf);
LAB_00103904:
      if ((local_a8 != (line *)0x0) && (unique != false)) {
        write_line(&saved,ofp,output_file);
        free(saved.text);
      }
LAB_00103939:
      xfclose(ofp,output_file);
      free(fps);
      free(__ptr);
      free(__ptr_02);
      free(__ptr_01);
      if (lVar4 == *(long *)(in_FS_OFFSET + 0x28)) {
        free(__ptr_00);
        return;
      }
LAB_00104025:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    uVar32 = 0;
LAB_00103ef0:
    local_78 = local_78 - 1;
    zaptemp(psVar25->name);
  }
  else {
    do {
      if (uVar29 < *puVar24) {
        *puVar24 = *puVar24 - 1;
        uVar29 = *__ptr_02;
      }
      puVar24 = puVar24 + 1;
    } while (__ptr_02 + uVar31 != puVar24);
    lVar26 = uVar29 * 8;
    uVar32 = uVar31 - 1;
    psVar25 = files + uVar29;
    local_e0 = (buffer *)((long)__ptr + uVar29 * 0x38);
    xfclose(fps[uVar29],psVar25->name);
    if (uVar29 < local_78) goto LAB_00103ef0;
  }
  free(local_e0->buf);
  if (uVar29 < uVar32) {
    if (((sortfile *)((long)fps + lVar26) < files + (uVar31 - 1)) &&
       (files + uVar29 < (sortfile *)(fps + uVar31))) {
      puVar28 = (undefined8 *)((long)__ptr + (lVar26 - uVar29) * 8);
      do {
        puVar2 = (undefined8 *)((long)&files[1].name + lVar26 * 2);
        uVar9 = *puVar2;
        uVar10 = puVar2[1];
        uVar11 = puVar28[7];
        uVar12 = puVar28[8];
        uVar13 = puVar28[9];
        uVar14 = puVar28[10];
        *(undefined8 *)((long)fps + lVar26) = *(undefined8 *)((long)fps + lVar26 + 8);
        uVar8 = puVar28[0xd];
        uVar15 = puVar28[0xb];
        uVar16 = puVar28[0xc];
        puVar2 = (undefined8 *)((long)&files->name + lVar26 * 2);
        *puVar2 = uVar9;
        puVar2[1] = uVar10;
        puVar28[6] = uVar8;
        uVar8 = *(undefined8 *)((long)__ptr_00 + lVar26 + 8);
        *puVar28 = uVar11;
        puVar28[1] = uVar12;
        *(undefined8 *)((long)__ptr_00 + lVar26) = uVar8;
        uVar8 = *(undefined8 *)((long)__ptr_01 + lVar26 + 8);
        puVar28[2] = uVar13;
        puVar28[3] = uVar14;
        *(undefined8 *)((long)__ptr_01 + lVar26) = uVar8;
        lVar26 = lVar26 + 8;
        puVar28[4] = uVar15;
        puVar28[5] = uVar16;
        puVar28 = puVar28 + 7;
      } while (uVar31 * 8 + -8 != lVar26);
    }
    else {
      lVar5 = lVar26 + 8;
      sVar1 = (uVar32 - uVar29) * 8;
      memmove((sortfile *)((long)fps + lVar26),(void *)((long)fps + lVar5),sVar1);
      memmove(files + uVar29,files + uVar29 + 1,(uVar32 - uVar29) * 0x10);
      lVar30 = (lVar26 - uVar29) * 8;
      memmove((void *)(lVar30 + (long)__ptr),(void *)((long)__ptr + lVar30 + 0x38),
              (uVar31 - uVar29) * 0x38 - 0x38);
      memmove((void *)((long)__ptr_00 + lVar26),(void *)((long)__ptr_00 + lVar5),sVar1);
      memmove((void *)((long)__ptr_01 + lVar26),(void *)((long)__ptr_01 + lVar5),sVar1);
    }
  }
  else if (uVar32 == 0) goto LAB_00103904;
  memmove(__ptr_02,__ptr_02 + 1,uVar32 * 8);
  uVar31 = uVar32;
  goto LAB_00103a88;
}



/* WARNING: Unknown calling convention */

size_t mergefiles(sortfile *files,size_t ntemps,size_t nfiles,FILE *ofp,char *output_file)

{
  char *file;
  size_t nfiles_00;
  char *message;
  long in_FS_OFFSET;
  FILE **fps;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  nfiles_00 = open_input_files(files,nfiles,&fps);
  if ((nfiles_00 < nfiles) && (nfiles_00 < 2)) {
    file = files[nfiles_00].name;
    message = (char *)dcgettext(0,"open failed",5);
                    /* WARNING: Subroutine does not return */
    sort_die(message,file);
  }
  mergefps(files,ntemps,nfiles_00,ofp,output_file,fps);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return nfiles_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

void merge(sortfile *files,size_t ntemps,size_t nfiles,char *output_file)

{
  long lVar1;
  byte *__s2;
  FILE **fps_00;
  uint uVar2;
  int iVar3;
  tempnode *ptVar4;
  size_t sVar5;
  FILE *ofp;
  int *piVar6;
  char *pcVar7;
  char *message;
  ulong uVar8;
  sortfile *psVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  sortfile *files_00;
  long in_FS_OFFSET;
  ulong local_128;
  ulong local_120;
  FILE **fps;
  FILE *tfp;
  stat instat;
  
  uVar12 = (ulong)nmerge;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  local_128 = nfiles;
  if (uVar12 < nfiles) {
    do {
      if (local_128 < uVar12) break;
      lVar11 = 0;
      uVar14 = 0;
      do {
        uVar13 = uVar14;
        ptVar4 = maybe_create_temp(&tfp,false);
        uVar14 = (ulong)nmerge;
        uVar12 = ntemps;
        if (uVar14 <= ntemps) {
          uVar12 = uVar14;
        }
        sVar5 = mergefiles(files + lVar11,uVar12,uVar14,tfp,&ptVar4->field_0xd);
        uVar12 = (ulong)nmerge;
        uVar8 = ntemps;
        if (sVar5 <= ntemps) {
          uVar8 = sVar5;
        }
        lVar11 = lVar11 + sVar5;
        uVar14 = uVar13 + 1;
        uVar10 = local_128 - lVar11;
        files[uVar13].name = &ptVar4->field_0xd;
        files[uVar13].temp = ptVar4;
        ntemps = ntemps - uVar8;
      } while (uVar12 <= uVar10);
      psVar9 = files + uVar13 + 1;
      files_00 = files + lVar11;
      if (uVar12 - uVar14 % uVar12 < uVar10) {
        uVar12 = uVar14 % uVar12 + 1 + (uVar10 - uVar12);
        ptVar4 = maybe_create_temp(&tfp,false);
        uVar14 = ntemps;
        if (uVar12 <= ntemps) {
          uVar14 = uVar12;
        }
        sVar5 = mergefiles(files_00,uVar14,uVar12,tfp,&ptVar4->field_0xd);
        lVar11 = lVar11 + sVar5;
        psVar9->temp = ptVar4;
        psVar9->name = &ptVar4->field_0xd;
        psVar9 = files + uVar13 + 2;
        files_00 = files + lVar11;
        uVar10 = local_128 - lVar11;
        uVar12 = (ulong)nmerge;
        if (ntemps < sVar5) {
          sVar5 = ntemps;
        }
        local_128 = (uVar13 + 2 + local_128) - lVar11;
        ntemps = (uVar13 + 2 + ntemps) - sVar5;
      }
      else {
        ntemps = ntemps + uVar14;
        local_128 = (uVar14 + local_128) - lVar11;
      }
      memmove(psVar9,files_00,uVar10 << 4);
    } while (uVar12 < local_128);
  }
  if (ntemps < local_128) {
    ptVar4 = (tempnode *)0x0;
    psVar9 = files + ntemps;
    do {
      while( true ) {
        __s2 = (byte *)psVar9->name;
        uVar2 = *__s2 - 0x2d;
        if (uVar2 == 0) {
          uVar2 = (uint)__s2[1];
        }
        if (((output_file == (char *)0x0) || (iVar3 = strcmp(output_file,(char *)__s2), iVar3 != 0))
           || (uVar2 == 0)) break;
LAB_0010428b:
        if (ptVar4 == (tempnode *)0x0) {
          ptVar4 = maybe_create_temp(&tfp,false);
          pcVar7 = &ptVar4->field_0xd;
          mergefiles(psVar9,0,1,tfp,pcVar7);
        }
        else {
          pcVar7 = &ptVar4->field_0xd;
        }
        psVar9->name = pcVar7;
        psVar9->temp = ptVar4;
LAB_001042a0:
        psVar9 = psVar9 + 1;
        if (files + local_128 == psVar9) goto LAB_00104310;
      }
      if (outstat_errno_4 == 0) {
        iVar3 = fstat(1,(stat *)outstat_3);
        if (iVar3 != 0) {
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
      if (uVar2 == 0) {
        iVar3 = fstat(0,(stat *)&instat);
        if (iVar3 == 0) goto LAB_0010426e;
        goto LAB_001042a0;
      }
      iVar3 = stat(psVar9->name,(stat *)&instat);
      if (iVar3 == 0) {
LAB_0010426e:
        if (instat.st_dev == outstat_3._0_8_ && instat.st_ino == outstat_3._8_8_) goto LAB_0010428b;
        goto LAB_001042a0;
      }
      psVar9 = psVar9 + 1;
    } while (files + local_128 != psVar9);
  }
LAB_00104310:
  local_120 = ntemps;
  do {
    sVar5 = open_input_files(files,local_128,&fps);
    if (local_128 == sVar5) {
      ofp = stream_open(output_file,"w");
      if (ofp != (FILE *)0x0) {
        if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        mergefps(files,local_120,local_128,ofp,output_file,fps);
        return;
      }
      piVar6 = __errno_location();
      if ((*piVar6 != 0x18) || (local_128 < 3)) {
        pcVar7 = (char *)dcgettext(0,"open failed",5);
                    /* WARNING: Subroutine does not return */
        sort_die(pcVar7,output_file);
      }
    }
    else if (sVar5 < 3) {
      pcVar7 = files[sVar5].name;
      message = (char *)dcgettext(0,"open failed",5);
                    /* WARNING: Subroutine does not return */
      sort_die(message,pcVar7);
    }
    fps_00 = fps;
    uVar12 = sVar5 - 1;
    psVar9 = files + uVar12;
    while( true ) {
      xfclose(fps_00[uVar12],psVar9->name);
      ptVar4 = maybe_create_temp(&tfp,2 < uVar12);
      if (ptVar4 != (tempnode *)0x0) break;
      uVar12 = uVar12 - 1;
      psVar9 = psVar9 + -1;
    }
    uVar14 = local_120;
    if (uVar12 < local_120) {
      uVar14 = uVar12;
    }
    local_120 = (local_120 + 1) - uVar14;
    mergefps(files,uVar14,uVar12,tfp,&ptVar4->field_0xd,fps_00);
    files->name = &ptVar4->field_0xd;
    files->temp = ptVar4;
    memmove(files + 1,psVar9,(local_128 - uVar12) * 0x10);
    local_128 = (local_128 - uVar12) + 1;
  } while( true );
}



/* WARNING: Unknown calling convention */

void sortlines(line *lines,size_t nthreads,size_t total_lines,merge_node *node,
              merge_node_queue *queue,FILE *tfp,char *temp_output)

{
  pthread_mutex_t *__mutex;
  pthread_cond_t *__cond;
  pthread_mutex_t *__mutex_00;
  char cVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  line *lines_00;
  undefined8 *puVar17;
  undefined8 *puVar18;
  size_t nlines;
  undefined8 *puVar19;
  long *plVar20;
  size_t nlines_00;
  long in_FS_OFFSET;
  bool bVar21;
  long local_c8;
  long local_b8;
  long local_b0;
  pthread_t thread;
  thread_args args;
  
  uVar16 = nthreads >> 1;
  nlines_00 = node->nlo;
  nlines = node->nhi;
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  args.node = node->lo_child;
  args.output_temp = temp_output;
  args.lines = lines;
  args.nthreads = uVar16;
  args.total_lines = total_lines;
  args.queue = queue;
  args.tfp = tfp;
  if ((0x1ffff < nlines_00 + nlines) && (1 < nthreads)) {
    iVar6 = pthread_create(&thread,(pthread_attr_t *)0x0,sortlines_thread,&args);
    if (iVar6 == 0) {
      sortlines(lines + -node->nlo,nthreads - uVar16,total_lines,node->hi_child,queue,tfp,
                temp_output);
      pthread_join(thread,(void **)0x0);
      goto LAB_00104e1f;
    }
    nlines_00 = node->nlo;
    nlines = node->nhi;
  }
  lines_00 = lines + -nlines_00;
  if (1 < nlines) {
    sequential_sort(lines_00,nlines,lines + -total_lines + -(nlines_00 >> 1),false);
  }
  if (1 < nlines_00) {
    sequential_sort(lines,nlines_00,lines + -total_lines,false);
  }
  node->lo = lines;
  __mutex = &queue->mutex;
  node->hi = lines_00;
  __cond = &queue->cond;
  node->end_lo = lines_00;
  node->end_hi = lines + (-nlines - nlines_00);
  pthread_mutex_lock((pthread_mutex_t *)__mutex);
  heap_insert(queue->priority_queue,node);
  node->queued = true;
  pthread_cond_signal((pthread_cond_t *)__cond);
  pthread_mutex_unlock((pthread_mutex_t *)__mutex);
LAB_00104770:
  pthread_mutex_lock((pthread_mutex_t *)__mutex);
  while (plVar7 = (long *)heap_remove_top(queue->priority_queue), plVar7 == (long *)0x0) {
    pthread_cond_wait((pthread_cond_t *)__cond,(pthread_mutex_t *)__mutex);
  }
  pthread_mutex_unlock((pthread_mutex_t *)__mutex);
  __mutex_00 = (pthread_mutex_t *)(plVar7 + 0xb);
  pthread_mutex_lock(__mutex_00);
  iVar6 = (int)plVar7[10];
  *(undefined1 *)((long)plVar7 + 0x54) = 0;
  if (iVar6 != 0) {
    puVar3 = (undefined8 *)*plVar7;
    puVar15 = (undefined8 *)plVar7[1];
    puVar17 = (undefined8 *)plVar7[2];
    lVar9 = (total_lines >> ((char)iVar6 * '\x02' + 2U & 0x3f)) + 1;
    puVar8 = puVar15;
    puVar13 = puVar3;
    if (iVar6 != 1) {
      puVar18 = (undefined8 *)plVar7[4];
      puVar19 = (undefined8 *)*puVar18;
      puVar12 = puVar3;
      puVar14 = puVar19;
      if (puVar3 == puVar17) {
        local_b8 = plVar7[6];
        local_c8 = plVar7[5];
        if (local_b8 == 0) {
          cVar1 = '\0';
          lVar10 = 0;
        }
        else {
          lVar10 = 0;
          cVar1 = '\0';
          if (local_c8 == 0) goto LAB_00104905;
        }
      }
      else {
LAB_0010484d:
        do {
          if ((undefined8 *)plVar7[3] == puVar8) {
            puVar18 = (undefined8 *)plVar7[4];
            cVar1 = *(char *)((long)plVar7 + 0x54);
            puVar13 = (undefined8 *)*plVar7;
LAB_00104ac0:
            lVar10 = (long)puVar15 - (long)puVar8 >> 5;
            local_b8 = plVar7[6];
            local_c8 = plVar7[5];
            if (local_b8 != lVar10) goto LAB_001048f5;
            puVar19 = puVar14;
            if ((puVar17 == puVar13) || (lVar11 = lVar9 + -1, lVar9 == 0)) goto LAB_00104b28;
            goto LAB_00104b02;
          }
          lVar10 = lVar9 + -1;
          if (lVar9 == 0) {
            cVar1 = *(char *)((long)plVar7 + 0x54);
            puVar18 = (undefined8 *)plVar7[4];
            lVar9 = -1;
            puVar13 = (undefined8 *)*plVar7;
            goto LAB_00104ac0;
          }
          puVar19 = puVar14 + -4;
          iVar6 = compare((line *)(puVar12 + -4),(line *)(puVar8 + -4));
          lVar9 = lVar10;
          if (0 < iVar6) {
            lVar10 = plVar7[1];
            puVar17 = (undefined8 *)plVar7[2];
            uVar4 = *(undefined8 *)(lVar10 + -0x20);
            uVar5 = *(undefined8 *)(lVar10 + -0x18);
            puVar8 = (undefined8 *)(lVar10 + -0x20);
            plVar7[1] = (long)puVar8;
            *puVar19 = uVar4;
            puVar14[-3] = uVar5;
            uVar4 = *(undefined8 *)(lVar10 + -8);
            puVar13 = (undefined8 *)*plVar7;
            puVar14[-2] = *(undefined8 *)(lVar10 + -0x10);
            puVar14[-1] = uVar4;
            puVar12 = puVar13;
            puVar14 = puVar19;
            if (puVar17 == puVar13) break;
            goto LAB_0010484d;
          }
          lVar10 = *plVar7;
          puVar17 = (undefined8 *)plVar7[2];
          uVar4 = *(undefined8 *)(lVar10 + -0x20);
          uVar5 = *(undefined8 *)(lVar10 + -0x18);
          puVar13 = (undefined8 *)(lVar10 + -0x20);
          *plVar7 = (long)puVar13;
          *puVar19 = uVar4;
          puVar14[-3] = uVar5;
          uVar4 = *(undefined8 *)(lVar10 + -8);
          puVar8 = (undefined8 *)plVar7[1];
          puVar14[-2] = *(undefined8 *)(lVar10 + -0x10);
          puVar14[-1] = uVar4;
          puVar12 = puVar13;
          puVar14 = puVar19;
        } while (puVar17 != puVar13);
        puVar18 = (undefined8 *)plVar7[4];
        lVar10 = (long)puVar15 - (long)puVar8 >> 5;
        cVar1 = *(char *)((long)plVar7 + 0x54);
        local_c8 = plVar7[5];
        local_b8 = plVar7[6];
        puVar14 = puVar19;
        puVar12 = puVar13;
        if (local_b8 != lVar10) {
LAB_001048f5:
          local_b0 = (long)puVar3 - (long)puVar12 >> 5;
          puVar19 = puVar14;
          if (local_c8 == local_b0) {
LAB_00104905:
            puVar17 = (undefined8 *)plVar7[3];
            if ((puVar17 != puVar8) && (lVar11 = lVar9 + -1, lVar9 != 0)) {
              do {
                puVar12 = puVar8 + -4;
                uVar4 = puVar8[-3];
                puVar14 = puVar19 + -4;
                *puVar14 = *puVar12;
                puVar19[-3] = uVar4;
                uVar4 = puVar8[-1];
                puVar19[-2] = puVar8[-2];
                puVar19[-1] = uVar4;
                puVar8 = puVar12;
                puVar19 = puVar14;
                if (puVar17 == puVar12) break;
                lVar11 = lVar11 + -1;
              } while (lVar11 != -1);
              plVar7[1] = (long)puVar12;
              lVar10 = (long)puVar15 - (long)puVar12 >> 5;
            }
          }
        }
      }
      goto LAB_00104b28;
    }
    lVar10 = lVar9;
    if (puVar3 != puVar17) {
LAB_001049ca:
      do {
        lVar9 = lVar10;
        if ((undefined8 *)plVar7[3] == puVar8) {
LAB_00104d05:
          if ((long)puVar15 - (long)puVar8 >> 5 != plVar7[6]) goto LAB_00104a43;
          if (puVar13 == (undefined8 *)plVar7[2]) goto LAB_0010500f;
          if (lVar9 != 0) goto LAB_00104d5e;
          cVar1 = *(char *)((long)plVar7 + 0x54);
          local_c8 = plVar7[5] - ((long)puVar3 - (long)puVar13 >> 5);
          local_b8 = 0;
          goto LAB_00104b42;
        }
        lVar9 = lVar10 + -1;
        if (lVar10 == 0) {
          lVar9 = -1;
          goto LAB_00104d05;
        }
        iVar6 = compare((line *)(puVar13 + -4),(line *)(puVar8 + -4));
        lVar10 = lVar9;
        if (0 < iVar6) {
          lVar11 = plVar7[1];
          plVar7[1] = lVar11 + -0x20;
          write_unique((line *)(lVar11 + -0x20),tfp,temp_output);
          puVar8 = (undefined8 *)plVar7[1];
          puVar13 = (undefined8 *)*plVar7;
          if (puVar13 == (undefined8 *)plVar7[2]) break;
          goto LAB_001049ca;
        }
        lVar11 = *plVar7;
        *plVar7 = lVar11 + -0x20;
        write_unique((line *)(lVar11 + -0x20),tfp,temp_output);
        puVar8 = (undefined8 *)plVar7[1];
        puVar13 = (undefined8 *)*plVar7;
      } while (puVar13 != (undefined8 *)plVar7[2]);
      if ((long)puVar15 - (long)puVar8 >> 5 != plVar7[6]) {
LAB_00104a43:
        local_c8 = plVar7[5];
        lVar10 = (long)puVar3 - (long)puVar13 >> 5;
        goto LAB_00104a51;
      }
LAB_0010500f:
      cVar1 = *(char *)((long)plVar7 + 0x54);
      local_c8 = plVar7[5] - ((long)puVar3 - (long)puVar13 >> 5);
      local_b8 = 0;
      goto LAB_00104b42;
    }
    local_c8 = plVar7[5];
    lVar10 = 0;
    if (plVar7[6] != 0) {
LAB_00104a51:
      if (lVar10 == local_c8) {
        if ((puVar8 == (undefined8 *)plVar7[3]) || (lVar9 == 0)) {
          cVar1 = *(char *)((long)plVar7 + 0x54);
          local_c8 = lVar10 - ((long)puVar3 - (long)puVar13 >> 5);
          local_b8 = plVar7[6] - ((long)puVar15 - (long)puVar8 >> 5);
          goto LAB_00104b42;
        }
        do {
          lVar9 = lVar9 + -1;
          plVar7[1] = (long)(puVar8 + -4);
          write_unique((line *)(puVar8 + -4),tfp,temp_output);
          puVar8 = (undefined8 *)plVar7[1];
          if (puVar8 == (undefined8 *)plVar7[3]) break;
        } while (lVar9 != 0);
        cVar1 = *(char *)((long)plVar7 + 0x54);
        puVar13 = (undefined8 *)*plVar7;
        goto LAB_00104d97;
      }
      cVar1 = *(char *)((long)plVar7 + 0x54);
      goto LAB_00104da2;
    }
    bVar21 = (undefined8 *)plVar7[3] != puVar15;
    goto LAB_00104cd8;
  }
  pthread_mutex_unlock(__mutex_00);
  pthread_mutex_lock((pthread_mutex_t *)__mutex);
  heap_insert(queue->priority_queue,plVar7);
  *(undefined1 *)((long)plVar7 + 0x54) = 1;
  pthread_cond_signal((pthread_cond_t *)__cond);
  pthread_mutex_unlock((pthread_mutex_t *)__mutex);
LAB_00104e1f:
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
  while (lVar11 = lVar11 + -1, puVar14 = puVar19, lVar11 != -1) {
LAB_00104b02:
    puVar15 = puVar13 + -4;
    uVar4 = puVar13[-3];
    puVar19 = puVar14 + -4;
    *puVar19 = *puVar15;
    puVar14[-3] = uVar4;
    uVar4 = puVar13[-1];
    puVar14[-2] = puVar13[-2];
    puVar14[-1] = uVar4;
    puVar13 = puVar15;
    if (puVar15 == puVar17) {
      *plVar7 = (long)puVar17;
      goto LAB_00104b28;
    }
  }
  *plVar7 = (long)puVar15;
LAB_00104b28:
  *puVar18 = puVar19;
  local_c8 = local_c8 - ((long)puVar3 - (long)puVar13 >> 5);
  local_b8 = local_b8 - lVar10;
LAB_00104b42:
  plVar7[5] = local_c8;
  plVar7[6] = local_b8;
  if (cVar1 == '\0') {
    bVar21 = (undefined8 *)plVar7[3] != puVar8;
    if ((undefined8 *)plVar7[2] == puVar13) {
LAB_00104cd8:
      if ((local_c8 == 0) && (bVar21)) {
LAB_00104b6d:
        pthread_mutex_lock((pthread_mutex_t *)__mutex);
        heap_insert(queue->priority_queue,plVar7);
        *(undefined1 *)((long)plVar7 + 0x54) = 1;
        pthread_cond_signal((pthread_cond_t *)__cond);
        pthread_mutex_unlock((pthread_mutex_t *)__mutex);
      }
    }
    else if ((local_b8 == 0) || (bVar21)) goto LAB_00104b6d;
  }
  if (*(uint *)(plVar7 + 10) < 2) {
    if (plVar7[6] + plVar7[5] == 0) {
      lVar9 = plVar7[7];
      pthread_mutex_lock((pthread_mutex_t *)__mutex);
      heap_insert(queue->priority_queue,lVar9);
      *(undefined1 *)(lVar9 + 0x54) = 1;
      pthread_cond_signal((pthread_cond_t *)__cond);
      pthread_mutex_unlock((pthread_mutex_t *)__mutex);
    }
    goto LAB_00104ba8;
  }
  pthread_mutex_lock((pthread_mutex_t *)(plVar7[7] + 0x58));
  plVar20 = (long *)plVar7[7];
  if (*(char *)((long)plVar20 + 0x54) == '\0') {
    if (*plVar20 == plVar20[2]) {
      if (plVar20[1] != plVar20[3]) {
        lVar9 = plVar20[5];
        goto joined_r0x00104f08;
      }
    }
    else {
      if (plVar20[1] == plVar20[3]) {
        lVar9 = plVar20[6];
joined_r0x00104f08:
        if (lVar9 != 0) goto LAB_00104c23;
      }
      pthread_mutex_lock((pthread_mutex_t *)__mutex);
      heap_insert(queue->priority_queue,plVar20);
      *(undefined1 *)((long)plVar20 + 0x54) = 1;
      pthread_cond_signal((pthread_cond_t *)__cond);
      pthread_mutex_unlock((pthread_mutex_t *)__mutex);
      plVar20 = (long *)plVar7[7];
    }
  }
LAB_00104c23:
  pthread_mutex_unlock((pthread_mutex_t *)(plVar20 + 0xb));
LAB_00104ba8:
  pthread_mutex_unlock(__mutex_00);
  goto LAB_00104770;
  while (lVar9 != 0) {
LAB_00104d5e:
    lVar9 = lVar9 + -1;
    *plVar7 = (long)(puVar13 + -4);
    write_unique((line *)(puVar13 + -4),tfp,temp_output);
    puVar13 = (undefined8 *)*plVar7;
    if (puVar13 == (undefined8 *)plVar7[2]) break;
  }
  cVar1 = *(char *)((long)plVar7 + 0x54);
  puVar8 = (undefined8 *)plVar7[1];
LAB_00104d97:
  local_c8 = plVar7[5];
LAB_00104da2:
  local_c8 = local_c8 - ((long)puVar3 - (long)puVar13 >> 5);
  local_b8 = plVar7[6] - ((long)puVar15 - (long)puVar8 >> 5);
  goto LAB_00104b42;
}



/* WARNING: Unknown calling convention */

void * sortlines_thread(void *data)

{
                    /* WARNING: Load size is inaccurate */
  sortlines(*data,*(size_t *)((long)data + 8),*(size_t *)((long)data + 0x10),
            *(merge_node **)((long)data + 0x18),*(merge_node_queue **)((long)data + 0x20),
            *(FILE **)((long)data + 0x28),*(char **)((long)data + 0x30));
  return (void *)0x0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void usage(int status)

{
  FILE *pFVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  infomap *piVar6;
  undefined *puVar7;
  infomap infomap [7];
  
  uVar5 = _program_name;
  piVar6 = infomap;
  if (status != 0) {
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
  infomap[0].program = "[";
  infomap[0].node = "test invocation";
  infomap[1].program = "coreutils";
  infomap[1].node = "Multi-call invocation";
  infomap[2].program = "sha224sum";
  infomap[2].node = "sha2 utilities";
  infomap[3].program = "sha256sum";
  infomap[3].node = "sha2 utilities";
  infomap[4].program = "sha384sum";
  infomap[4].node = "sha2 utilities";
  infomap[5].program = "sha512sum";
  infomap[5].node = "sha2 utilities";
  infomap[6].program = (char *)0x0;
  infomap[6].node = (char *)0x0;
  do {
    iVar2 = strcmp("sort",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)piVar6 + 0x10);
    piVar6 = (infomap *)((long)piVar6 + 0x10);
  } while (pcVar4 != (char *)0x0);
  puVar7 = *(undefined **)((long)piVar6 + 8);
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
  exit(status);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */
/* WARNING: Enum "__rlimit_resource": Some values do not have unique names */

int main(int argc,char **argv)

{
  _Bool *p_Var1;
  undefined1 *puVar2;
  byte *pbVar3;
  pthread_cond_t *__cond;
  char cVar4;
  ushort uVar5;
  long lVar6;
  bool bVar7;
  pthread_mutex_t *__mutex;
  uintmax_t uVar8;
  line *plVar9;
  char cVar10;
  _Bool _Var11;
  int iVar12;
  int iVar13;
  int extraout_EAX;
  uint extraout_EAX_00;
  char *pcVar14;
  char *pcVar15;
  lconv *plVar16;
  ushort **ppuVar17;
  __int32_t **pp_Var18;
  byte *__s;
  size_t sVar19;
  char *pcVar20;
  char **__ptr;
  ulong uVar21;
  keyfield *pkVar22;
  _func_int_MD5_CTX_ptr *p_Var23;
  _func_int_MD5_CTX_ptr_void_ptr_size_t *p_Var24;
  _func_int_uchar_ptr_MD5_CTX_ptr *p_Var25;
  FILE *__stream;
  tempnode *ptVar26;
  merge_node *parent;
  void *pvVar27;
  ulong uVar28;
  sortfile *psVar29;
  undefined8 uVar30;
  sortfile *files;
  ulong uVar31;
  Tokens *s;
  FILE *pFVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  option *poVar35;
  ulong uVar36;
  keyfield *pkVar37;
  char *opts;
  long lVar38;
  long extraout_RDX;
  Tokens *pTVar39;
  char *msgid;
  long extraout_RDX_00;
  byte bVar40;
  int *piVar41;
  char **ppcVar42;
  line *plVar43;
  Tokens *pTVar44;
  char *pcVar45;
  _Bool *p_Var46;
  char *pcVar47;
  size_t sVar48;
  size_t sVar49;
  uint uVar50;
  month *pmVar51;
  line *a;
  long in_FS_OFFSET;
  bool bVar52;
  bool bVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  size_t local_438;
  char *local_430;
  Tokens *local_418;
  Tokens *local_410;
  buffer *local_3f8;
  Tokens *local_3e0;
  char *local_3d0;
  ulong local_3c0;
  size_t local_3b8;
  char *local_3a8;
  int oi;
  undefined4 uStack_394;
  size_t local_390;
  char *local_388;
  char *pcStack_380;
  keyfield key_buf;
  keyfield gkey;
  uintmax_t n;
  size_t local_2d0;
  ulong local_2c8;
  long local_2c0;
  size_t local_2b8;
  _Bool local_2a8;
  Tokens tok;
  sigaction act;
  char tmp [21];
  char obuf [46];
  char str [2];
  
  lVar6 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar14 = getenv("POSIXLY_CORRECT");
  iVar12 = posix2_version();
  bVar53 = 0x2b8 < iVar12 - 0x30db0U;
  set_program_name(*argv);
  pcVar15 = setlocale(6,"");
  bindtextdomain("coreutils");
  textdomain("coreutils");
  _exit_failure = 2;
  hard_LC_COLLATE = (_Bool)hard_locale(3);
  cVar10 = hard_locale(2);
  hard_LC_TIME = (_Bool)cVar10;
  plVar16 = localeconv();
  decimal_point = *plVar16->decimal_point;
  if ((decimal_point == '\0') || (plVar16->decimal_point[1] != '\0')) {
    decimal_point = '.';
  }
  cVar4 = *plVar16->thousands_sep;
  thousands_sep = (int)cVar4;
  if (cVar4 != '\0') {
    if (plVar16->thousands_sep[1] == '\0') goto LAB_00107fd6;
    thousands_sep_ignored = true;
  }
  thousands_sep = 0x80;
LAB_00107fd6:
  have_read_stdin = false;
  ppuVar17 = __ctype_b_loc();
  pp_Var18 = __ctype_toupper_loc();
  lVar38 = 0;
  p_Var46 = nonprinting;
  do {
    while( true ) {
      uVar5 = (*ppuVar17)[lVar38];
      bVar40 = (byte)(uVar5 >> 8);
      if (lVar38 != 10) break;
      blanks[10] = true;
      lVar38 = 0xb;
      nondictionary[10] = false;
      nonprinting[10] = (_Bool)((bVar40 >> 6 ^ 1) & 1);
      fold_toupper[10] = (char)(*pp_Var18)[10];
    }
    bVar52 = (uVar5 & 1) == 0;
    if (bVar52) {
      _Var11 = (_Bool)(((byte)(uVar5 >> 3) ^ 1) & 1);
    }
    else {
      _Var11 = false;
    }
    blanks[lVar38] = !bVar52;
    nondictionary[lVar38] = _Var11;
    nonprinting[lVar38] = (_Bool)((bVar40 >> 6 ^ 1) & 1);
    fold_toupper[lVar38] = (char)(*pp_Var18)[lVar38];
    lVar38 = lVar38 + 1;
  } while (lVar38 != 0x100);
  if (cVar10 != '\0') {
    pmVar51 = monthtab;
    lVar38 = 1;
    do {
      __s = (byte *)rpl_nl_langinfo((int)lVar38 + 0x2000d);
      sVar19 = strlen((char *)__s);
      pcVar20 = (char *)xmalloc(sVar19 + 1);
      pmVar51->val = (int)lVar38;
      pmVar51->name = pcVar20;
      if (sVar19 != 0) {
        p_Var46 = (_Bool *)*ppuVar17;
        pbVar3 = __s + sVar19;
        sVar19 = 0;
        do {
          if ((*(ushort *)((long)&((Tokens *)p_Var46)->n_tok + (ulong)*__s * 2) & 1) == 0) {
            pcVar20[sVar19] = fold_toupper[*__s];
            sVar19 = sVar19 + 1;
          }
          __s = __s + 1;
        } while (__s != pbVar3);
      }
      lVar38 = lVar38 + 1;
      pcVar20[sVar19] = '\0';
      pmVar51 = pmVar51 + 1;
    } while (lVar38 != 0xd);
    qsort(monthtab,0xc,0x10,struct_month_cmp);
  }
  sigemptyset((sigset_t *)&caught_signals);
  piVar41 = main::lexical_block_23::sig;
  do {
    iVar12 = *piVar41;
    sigaction(iVar12,(sigaction *)0x0,(sigaction *)&act);
    if (act.__sigaction_handler.sa_handler != (__sighandler_t)0x1) {
      sigaddset((sigset_t *)&caught_signals,iVar12);
    }
    piVar41 = piVar41 + 1;
  } while (piVar41 != (int *)&DAT_0010604c);
  piVar41 = main::lexical_block_23::sig;
  act.__sigaction_handler.sa_handler = sighandler;
  act.sa_mask.__val[0] = caught_signals.__val[0];
  act.sa_mask.__val[1] = caught_signals.__val[1];
  act.sa_mask.__val[2] = caught_signals.__val[2];
  act.sa_mask.__val[3] = caught_signals.__val[3];
  act.sa_mask.__val[4] = caught_signals.__val[4];
  act.sa_mask.__val[5] = caught_signals.__val[5];
  act.sa_flags = 0;
  act.sa_mask.__val[6] = caught_signals.__val[6];
  act.sa_mask.__val[7] = caught_signals.__val[7];
  act.sa_mask.__val[8] = caught_signals.__val[8];
  act.sa_mask.__val[9] = caught_signals.__val[9];
  act.sa_mask.__val[10] = caught_signals.__val[10];
  act.sa_mask.__val[0xb] = caught_signals.__val[0xb];
  act.sa_mask.__val[0xc] = caught_signals.__val[0xc];
  act.sa_mask.__val[0xd] = caught_signals.__val[0xd];
  act.sa_mask.__val[0xe] = caught_signals.__val[0xe];
  act.sa_mask.__val[0xf] = caught_signals.__val[0xf];
  do {
    while( true ) {
      iVar12 = *piVar41;
      iVar13 = sigismember((sigset_t *)&caught_signals,iVar12);
      if (iVar13 == 0) break;
      piVar41 = piVar41 + 1;
      sigaction(iVar12,(sigaction *)&act,(sigaction *)0x0);
      if (piVar41 == (int *)&DAT_0010604c) goto LAB_001082aa;
    }
    piVar41 = piVar41 + 1;
  } while (piVar41 != (int *)&DAT_0010604c);
LAB_001082aa:
  signal(0x11,(__sighandler_t)0x0);
  pcVar47 = (char *)0x0;
  atexit(exit_cleanup);
  key_init(&gkey);
  gkey.sword = 0xffffffffffffffff;
  __ptr = (char **)xnmalloc();
  uVar31 = 0;
  bVar52 = false;
  pcVar20 = (char *)0x0;
  pTVar44 = (Tokens *)(ulong)(uint)argc;
  local_3e0 = (Tokens *)0x0;
  local_418 = (Tokens *)0x0;
  local_3c0 = 0;
  local_410 = (Tokens *)0x0;
  iVar12 = tab;
LAB_001083b1:
  tab = iVar12;
  _oi = (FILE *)CONCAT44(uStack_394,0xffffffff);
  if ((int)uVar31 != -1) {
    if (pcVar47 == (char *)0x0) goto LAB_00108448;
    if (pcVar14 == (char *)0x0) goto LAB_00108448;
    if ((bVar53) && ((char)pcVar20 == '\0')) {
      if ((int)pTVar44 == _optind) {
        if (local_418 == (Tokens *)0x0) {
          argv = (char **)0x0;
          goto LAB_0010857e;
        }
LAB_0010a11c:
        uVar33 = quotearg_style(4,*__ptr);
        uVar34 = dcgettext(0,"extra operand %s",5);
                    /* WARNING: Subroutine does not return */
        error(0,0,uVar34,uVar33);
      }
      lVar38 = (long)_optind;
      pcVar45 = argv[lVar38];
      if ((*pcVar45 == '-') && (pcVar45[1] == 'o')) {
        iVar12 = _optind;
        if (pcVar45[2] == '\0') goto LAB_00108a13;
        goto LAB_00108448;
      }
    }
  }
LAB_00108390:
  pTVar39 = (Tokens *)p_Var46;
  if (_optind < (int)pTVar44) goto code_r0x00108399;
LAB_0010a6f3:
  argv = (char **)((ulong)pcVar20 & 0xffffffff);
  p_Var46 = (_Bool *)pTVar39;
  if (local_418 != (Tokens *)0x0) {
    if (pcVar47 == (char *)0x0) {
      pcVar20 = "r";
      pFVar32 = stream_open((char *)local_418,"r");
      if (pFVar32 != (FILE *)0x0) {
        pTVar44 = &tok;
        readtokens0_init(pTVar44);
        cVar10 = readtokens0(pFVar32,pTVar44);
        if (cVar10 == '\0') {
          uVar33 = quotearg_style(4);
          pcVar14 = "cannot read file names from %s";
          goto LAB_0010a7ba;
        }
        xfclose(pFVar32,(char *)local_418);
        pcVar20 = (char *)CONCAT44(tok.n_tok._4_4_,(int)tok.n_tok);
        if (pcVar20 == (char *)0x0) {
          uVar33 = quotearg_style(4,local_418);
          pcVar14 = "no input from %s";
          goto LAB_0010a7ba;
        }
        free(__ptr);
        pcVar47 = (char *)0x0;
        do {
          pcVar45 = tok.tok[(long)pcVar47];
          if ((*pcVar45 == '-') && (pcVar45[1] == '\0')) {
            uVar33 = quotearg_style(4);
            pcVar14 = "when reading file names from stdin, no file name of %s allowed";
            goto LAB_0010a7ba;
          }
          pcVar47 = pcVar47 + 1;
          if (*pcVar45 == '\0') {
            uVar33 = quotearg_n_style_colon(0,3,local_418);
            uVar34 = dcgettext(0,"%s:%lu: invalid zero-length file name",5);
                    /* WARNING: Subroutine does not return */
            error(2,0,uVar34,uVar33,pcVar47);
          }
          p_Var46 = (_Bool *)pTVar39;
          __ptr = tok.tok;
        } while (pcVar20 != pcVar47);
        goto LAB_0010857e;
      }
      pFVar32 = xfopen((char *)local_418,pcVar20);
      iVar13 = (int)pFVar32;
LAB_0010a85b:
      xstrtol_fatal(iVar13,(ulong)local_3d0 & 0xffffffff,0xffffff87,long_options,pTVar39);
      goto LAB_0010a879;
    }
    goto LAB_0010a11c;
  }
LAB_0010857e:
  cVar10 = (char)argv;
  if (keylist != (keyfield *)0x0) {
    pTVar44 = (Tokens *)0x0;
    pkVar22 = keylist;
    pcVar45 = (char *)keylist;
    do {
      while( true ) {
        _Var11 = default_key_compare(pkVar22);
        if ((_Var11) && (pkVar22->reverse == false)) break;
        p_Var1 = &pkVar22->random;
        pkVar22 = pkVar22->next;
        pTVar44 = (Tokens *)(ulong)((uint)pTVar44 | (uint)*p_Var1);
        if (pkVar22 == (keyfield *)0x0) goto LAB_001085fa;
      }
      pkVar22->ignore = gkey.ignore;
      pkVar22->translate = gkey.translate;
      uVar33 = CONCAT44(gkey._52_4_,gkey._48_4_);
      pkVar22->version = gkey.version;
      pkVar22->skipsblanks = (_Bool)(char)uVar33;
      pkVar22->skipeblanks = (_Bool)(char)((ulong)uVar33 >> 8);
      pkVar22->numeric = (_Bool)(char)((ulong)uVar33 >> 0x10);
      pkVar22->random = (_Bool)(char)((ulong)uVar33 >> 0x18);
      pkVar22->general_numeric = (_Bool)(char)((ulong)uVar33 >> 0x20);
      pkVar22->human_numeric = (_Bool)(char)((ulong)uVar33 >> 0x28);
      pkVar22->month = (_Bool)(char)((ulong)uVar33 >> 0x30);
      pkVar22->reverse = (_Bool)(char)((ulong)uVar33 >> 0x38);
      pkVar22 = pkVar22->next;
      pTVar44 = (Tokens *)(ulong)((uint)pTVar44 | (uint)gkey._48_4_ >> 0x18);
    } while (pkVar22 != (keyfield *)0x0);
LAB_001085fa:
    bVar53 = false;
    do {
      if (1 < (uint)((keyfield *)pcVar45)->numeric + (uint)((keyfield *)pcVar45)->general_numeric +
              (uint)((keyfield *)pcVar45)->human_numeric + (uint)((keyfield *)pcVar45)->month +
              (uint)(byte)(((keyfield *)pcVar45)->version | ((keyfield *)pcVar45)->random |
                          ((keyfield *)pcVar45)->ignore != (_Bool *)0x0)) goto LAB_0010a6c5;
      pcVar45 = (char *)((keyfield *)pcVar45)->next;
joined_r0x00109e9f:
    } while ((keyfield *)pcVar45 != (keyfield *)0x0);
    if (debug == false) {
      reverse = gkey.reverse;
      if ((char)pTVar44 != '\0') {
        lVar38 = randread_new(local_410,0x10);
        if (lVar38 == 0) {
          if (local_410 == (Tokens *)0x0) {
            local_410 = (Tokens *)0x107a50;
          }
          pcVar14 = "open failed";
          goto LAB_0010a635;
        }
        pcVar20 = str;
        randread(lVar38,pcVar20,0x10);
        iVar12 = randread_free(lVar38);
        if (iVar12 == 0) {
          lVar38 = dlopen("libcrypto.so.3",0x101);
          if ((((lVar38 != 0) &&
               (p_Var23 = (_func_int_MD5_CTX_ptr *)dlsym(lVar38,"MD5_Init"),
               p_Var23 != (_func_int_MD5_CTX_ptr *)0x0)) &&
              (ptr_MD5_Init = p_Var23,
              p_Var24 = (_func_int_MD5_CTX_ptr_void_ptr_size_t *)dlsym(lVar38,"MD5_Update"),
              p_Var24 != (_func_int_MD5_CTX_ptr_void_ptr_size_t *)0x0)) &&
             (ptr_MD5_Update = p_Var24,
             p_Var25 = (_func_int_uchar_ptr_MD5_CTX_ptr *)dlsym(lVar38,"MD5_Final"),
             p_Var25 != (_func_int_uchar_ptr_MD5_CTX_ptr *)0x0)) {
            ptr_MD5_Final = p_Var25;
            (*ptr_MD5_Init)(&random_md5_state.CTX);
            (*ptr_MD5_Update)(&random_md5_state.CTX,pcVar20,0x10);
            goto LAB_001089a8;
          }
          link_failure();
        }
        pcVar14 = "close failed";
LAB_0010a635:
        pcVar14 = (char *)dcgettext(0,pcVar14,5);
                    /* WARNING: Subroutine does not return */
        sort_die(pcVar14,(char *)local_410);
      }
      goto LAB_001089a8;
    }
LAB_00108653:
    if (cVar10 == '\0' && local_3e0 == (Tokens *)0x0) {
      if ((pcVar15 != (char *)0x0) && (pcVar14 = setlocale(3,""), pcVar14 != (char *)0x0)) {
        if (hard_LC_COLLATE == false) {
          uVar33 = dcgettext(0,"text ordering performed using simple byte comparison",5);
                    /* WARNING: Subroutine does not return */
          error(0,0,&_LC11,uVar33);
        }
        pcVar14 = setlocale(3,(char *)0x0);
        uVar33 = quote(pcVar14);
        uVar34 = dcgettext(0,"text ordering performed using %s sorting rules",5);
                    /* WARNING: Subroutine does not return */
        error(0,0,uVar34,uVar33);
      }
      uVar33 = dcgettext(0,"failed to set locale",5);
                    /* WARNING: Subroutine does not return */
      error(0,0,&_LC11,uVar33);
    }
    if (cVar10 == '\0') {
      argv = (char **)0x6f;
    }
    pcVar45 = main::lexical_block_26::opts;
    main::lexical_block_26::opts[0] = (char)argv;
    incompatible_options(main::lexical_block_26::opts);
LAB_0010a6c5:
    ((keyfield *)pcVar45)->reverse = false;
    opts = str;
    ((keyfield *)pcVar45)->skipsblanks = false;
    ((keyfield *)pcVar45)->skipeblanks = false;
    key_to_opts((keyfield *)pcVar45,opts);
    incompatible_options(opts);
    goto LAB_0010a6e7;
  }
  pkVar22 = &gkey;
  _Var11 = default_key_compare(&gkey);
  if (!_Var11) {
    insertkey(pkVar22);
    bVar53 = true;
    pTVar44 = (Tokens *)(ulong)gkey.random;
    pcVar45 = (char *)keylist;
    goto joined_r0x00109e9f;
  }
  if (debug != false) {
    bVar53 = false;
    pTVar44 = (Tokens *)0x0;
    goto LAB_00108653;
  }
  reverse = gkey.reverse;
LAB_001089a8:
  if (temp_dir_count == 0) {
    pcVar45 = getenv("TMPDIR");
    if (pcVar45 == (char *)0x0) {
      pcVar45 = "/tmp";
    }
    add_temp_dir(pcVar45);
  }
  if (pcVar47 == (char *)0x0) {
    pcVar47 = (char *)0x1;
    free(__ptr);
    __ptr = (char **)xmalloc(8);
    *__ptr = "-";
  }
  sVar48 = sort_size;
  if ((sort_size != 0) && (sVar48 = (ulong)nmerge * 0x22, (ulong)nmerge * 0x22 < sort_size)) {
    sVar48 = sort_size;
  }
  sort_size = sVar48;
  if (cVar10 == '\0') {
    ppcVar42 = __ptr;
    local_3d0 = (char *)0x0;
    goto LAB_00108f72;
  }
  if (pcVar47 != (char *)0x1) {
    uVar33 = quotearg_style(4,__ptr[1]);
    uVar34 = dcgettext(0,"extra operand %s not allowed with -%c",5);
                    /* WARNING: Subroutine does not return */
    error(2,0,uVar34,uVar33,(int)cVar10);
  }
  if (local_3e0 == (Tokens *)0x0) {
    local_430 = *__ptr;
    pcVar14 = "r";
    pFVar32 = stream_open(local_430,"r");
    pkVar22 = keylist;
    if (pFVar32 == (FILE *)0x0) goto LAB_0010a4df;
    uVar50 = (uint)unique;
    sVar48 = merge_buffer_size;
    if (merge_buffer_size <= sort_size) {
      sVar48 = sort_size;
    }
    uVar31 = 0;
    initbuf((buffer *)&n,0x20,sVar48);
    _oi = (FILE *)0x0;
    local_418 = (Tokens *)0x0;
    goto LAB_001099fd;
  }
  main::lexical_block_28::opts_1[0] = cVar10;
  incompatible_options(main::lexical_block_28::opts_1);
  pcVar47 = (char *)0x0;
  lVar38 = extraout_RDX;
  iVar12 = extraout_EAX;
LAB_00108a13:
  iVar12 = iVar12 + 1;
  if (iVar12 == (int)pTVar44) goto LAB_0010839f;
LAB_00108448:
  poVar35 = long_options;
  uVar21 = getopt_long((ulong)pTVar44 & 0xffffffff,argv,"-bcCdfghik:mMno:rRsS:t:T:uVy:z");
  pFVar32 = _oi;
  pTVar39 = _optarg;
  uVar50 = (uint)uVar21;
  uVar31 = uVar21 & 0xffffffff;
  if (uVar50 == 0xffffffff) goto LAB_00108390;
  if (0x87 < (int)uVar50) goto switchD_001084a0_caseD_2;
  if ((int)uVar50 < 1) {
    if (uVar50 == 0xffffff7d) {
      uVar33 = proper_name_lite("Paul Eggert","Paul Eggert");
      uVar34 = proper_name_lite("Mike Haertel","Mike Haertel");
      version_etc(_stdout,&_LC38,"GNU coreutils",_Version,uVar34,uVar33,0,uVar34);
                    /* WARNING: Subroutine does not return */
      exit(0);
    }
    goto LAB_0010a4fc;
  }
  if (0x87 < uVar50) goto switchD_001084a0_caseD_2;
  iVar13 = oi;
  iVar12 = tab;
  switch(uVar21 & 0xffffffff) {
  case 1:
    goto switchD_001084a0_caseD_1;
  default:
    goto switchD_001084a0_caseD_2;
  case 0x43:
  case 99:
    goto switchD_001084a0_caseD_43;
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
    local_3d0 = (char *)((ulong)_oi & 0xffffffff);
    iVar12 = xstrtoumax(_optarg,&tok,10,&n,"EgGkKmMPQRtTYZ");
    uVar31 = uVar21 & 0xffffffff;
    if (iVar12 != 0) goto LAB_0010912f;
    if (9 < (int)*(char *)(CONCAT44(tok.n_tok._4_4_,(int)tok.n_tok) + -1) - 0x30U)
    goto LAB_00108ea6;
    if (n < 0x40000000000000) {
      n = n << 10;
      goto LAB_00108ea6;
    }
    goto LAB_00109243;
  case 0x54:
    add_temp_dir((char *)_optarg);
    uVar31 = uVar21 & 0xffffffff;
    iVar12 = tab;
    goto LAB_001083b1;
  case 0x6b:
    pkVar22 = key_init(&key_buf);
    pcVar45 = parse_field_count((char *)_optarg,&pkVar22->sword,msgid);
    sVar48 = pkVar22->sword;
    pkVar22->sword = sVar48 - 1;
    if (sVar48 == 0) {
LAB_0010a879:
      badfieldspec((char *)_optarg,"field number is zero");
      goto LAB_0010a88c;
    }
    if (*pcVar45 == '.') {
      pcVar45 = parse_field_count(pcVar45 + 1,&pkVar22->schar,"invalid number after \'.\'");
      sVar48 = pkVar22->schar;
      pkVar22->schar = sVar48 - 1;
      if (sVar48 == 0) {
        badfieldspec((char *)_optarg,"character offset is zero");
        goto LAB_0010a11c;
      }
    }
    if ((pkVar22->sword == 0) && (pkVar22->schar == 0)) {
      pkVar22->sword = 0xffffffffffffffff;
    }
    pcVar45 = set_ordering(pcVar45,pkVar22,bl_start);
    sVar48 = _UNK_0010b188;
    if (*pcVar45 == ',') {
      pcVar45 = parse_field_count(pcVar45 + 1,&pkVar22->eword,"invalid number after \',\'");
      sVar48 = pkVar22->eword;
      pkVar22->eword = sVar48 - 1;
      if (sVar48 == 0) goto LAB_0010a879;
      if (*pcVar45 == '.') {
        pcVar45 = parse_field_count(pcVar45 + 1,&pkVar22->echar,"invalid number after \'.\'");
      }
      pcVar45 = set_ordering(pcVar45,pkVar22,bl_end);
    }
    else {
      pkVar22->eword = __LC93;
      pkVar22->echar = sVar48;
    }
    if (*pcVar45 != '\0') goto LAB_0010a4e9;
    insertkey(pkVar22);
    uVar31 = (ulong)uVar50;
    iVar12 = tab;
    goto LAB_001083b1;
  case 0x6d:
    goto switchD_001084a0_caseD_6d;
  case 0x6f:
    if ((local_3e0 == (Tokens *)0x0) ||
       (iVar12 = strcmp((char *)local_3e0,(char *)_optarg), iVar12 == 0)) {
      uVar31 = uVar21 & 0xffffffff;
      local_3e0 = pTVar39;
      iVar12 = tab;
      goto LAB_001083b1;
    }
    pcVar14 = "multiple output files specified";
LAB_0010a5fe:
    uVar33 = dcgettext(0,pcVar14,5);
                    /* WARNING: Subroutine does not return */
    error(2,0,uVar33);
  case 0x73:
    stable = true;
    goto LAB_001083b1;
  case 0x74:
    cVar10 = (char)_optarg->n_tok;
    iVar12 = (int)cVar10;
    if (cVar10 != '\0') {
      if (*(char *)((long)&_optarg->n_tok + 1) != '\0') {
        iVar12 = strcmp((char *)_optarg,"\\0");
        if (iVar12 != 0) {
          uVar33 = quote(pTVar39);
          pcVar14 = "multi-character tab %s";
LAB_0010a7ba:
          uVar34 = dcgettext(0,pcVar14,5);
                    /* WARNING: Subroutine does not return */
          error(2,0,uVar34,uVar33);
        }
        iVar12 = 0;
      }
      uVar31 = uVar21 & 0xffffffff;
      if ((tab != 0x80) && (tab != iVar12)) {
        pcVar14 = "incompatible tabs";
        goto LAB_0010a5fe;
      }
      goto LAB_001083b1;
    }
LAB_0010a88c:
    pcVar14 = "empty tab";
    goto LAB_0010a5fe;
  case 0x75:
    unique = true;
    goto LAB_001083b1;
  case 0x79:
    if ((Tokens *)argv[(long)_optind + -1] == _optarg) {
      while (cVar10 = (char)pTVar39->n_tok, (int)cVar10 - 0x30U < 10) {
        pTVar39 = (Tokens *)((long)&pTVar39->n_tok + 1);
      }
      _optind = _optind + -1 + (uint)(cVar10 == '\0');
    }
    goto LAB_001083b1;
  case 0x7a:
    eolchar = '\0';
    goto LAB_001083b1;
  case 0x80:
    uVar31 = 99;
    if (_optarg != (Tokens *)0x0) {
      p_Var46 = (_Bool *)_argmatch_die;
      lVar38 = __xargmatch_internal
                         ("--check",_optarg,check_args,"CCc",1,_argmatch_die,1,
                          &DAT_00105dcc + *(int *)(&DAT_00105dcc + (uVar21 & 0xffffffff) * 4));
      uVar31 = (ulong)(uint)(int)"CCc"[lVar38];
    }
switchD_001084a0_caseD_43:
    if (((char)pcVar20 != '\0') && ((int)pcVar20 != (int)uVar31)) goto LAB_0010a6e7;
    pcVar20 = (char *)(ulong)(uint)(int)(char)uVar31;
    iVar12 = tab;
    goto LAB_001083b1;
  case 0x81:
    if ((compress_program == (char *)0x0) ||
       (iVar12 = strcmp(compress_program,(char *)_optarg), iVar12 == 0)) {
      uVar31 = uVar21 & 0xffffffff;
      compress_program = (char *)pTVar39;
      iVar12 = tab;
      goto LAB_001083b1;
    }
    pcVar14 = "multiple compress programs specified";
    goto LAB_0010a5fe;
  case 0x82:
    debug = true;
    goto LAB_001083b1;
  case 0x83:
    local_418 = _optarg;
    goto LAB_001083b1;
  case 0x84:
    uVar50 = xstrtoumax(_optarg,0,10,&n,&_LC2);
    local_3d0 = (char *)(ulong)uVar50;
    iVar12 = getrlimit(RLIMIT_NOFILE,(rlimit *)&tok);
    uVar31 = uVar21 & 0xffffffff;
    p_Var46 = (_Bool *)0x11;
    if (iVar12 == 0) {
      p_Var46 = (_Bool *)(ulong)((int)tok.n_tok - 3);
    }
    if (uVar50 == 0) {
      nmerge = (uint)n;
      if (n < 0x100000000) {
        if (nmerge < 2) {
          uVar33 = quote(pTVar39);
          pcVar14 = long_options[iVar13].name;
          uVar34 = dcgettext(0,"invalid --%s argument %s",5);
                    /* WARNING: Subroutine does not return */
          error(0,0,uVar34,pcVar14,uVar33);
        }
        iVar12 = tab;
        if (nmerge <= (uint)p_Var46) goto LAB_001083b1;
      }
LAB_00108b7c:
      uVar33 = quote(pTVar39);
      pcVar14 = long_options[iVar13].name;
      uVar34 = dcgettext(0,"--%s argument %s too large",5);
                    /* WARNING: Subroutine does not return */
      error(0,0,uVar34,pcVar14,uVar33);
    }
    pTVar44 = (Tokens *)(ulong)uVar50;
    if (uVar50 == 1) goto LAB_00108b7c;
    iVar12 = xstrtol_fatal(pTVar44,(ulong)pFVar32 & 0xffffffff,0xffffff84,long_options,pTVar39);
LAB_0010912f:
    if (((iVar12 == 2) &&
        (pcVar45 = (char *)CONCAT44(tok.n_tok._4_4_,(int)tok.n_tok), (int)pcVar45[-1] - 0x30U < 10))
       && (pcVar45[1] == '\0')) {
      if (*pcVar45 == '%') {
        dVar54 = (double)physmem_total();
        uVar31 = uVar31 & 0xffffffff;
        dVar54 = ((double)n * dVar54) / __LC103;
        if (dVar54 < _LC104) {
          if (dVar54 < _LC105) {
            n = (uintmax_t)dVar54;
          }
          else {
            n = (long)(dVar54 - _LC105) ^ 0x8000000000000000;
          }
          goto LAB_00108ea6;
        }
      }
      else if (*pcVar45 == 'b') {
LAB_00108ea6:
        iVar12 = tab;
        if ((sort_size <= n) && (sort_size = (ulong)nmerge * 0x22, sort_size < n)) {
          sort_size = n;
        }
        goto LAB_001083b1;
      }
    }
LAB_00109243:
    xstrtol_fatal();
    pTVar44 = pTVar39;
switchD_001084a0_caseD_6d:
    bVar52 = true;
    iVar12 = tab;
    goto LAB_001083b1;
  case 0x85:
    if ((local_410 == (Tokens *)0x0) ||
       (iVar12 = strcmp((char *)local_410,(char *)_optarg), iVar12 == 0)) {
      uVar31 = uVar21 & 0xffffffff;
      local_410 = pTVar39;
      iVar12 = tab;
      goto LAB_001083b1;
    }
    pcVar14 = "multiple random sources specified";
    goto LAB_0010a5fe;
  case 0x86:
    p_Var46 = (_Bool *)_argmatch_die;
    lVar38 = __xargmatch_internal("--sort",_optarg,sort_args,"ghMnRV",1,_argmatch_die,1,poVar35);
    uVar31 = (ulong)(uint)(int)"ghMnRV"[lVar38];
switchD_001084a0_caseD_4d:
    str[0] = (char)uVar31;
    str[1] = '\0';
    set_ordering(str,&gkey,bl_both);
    iVar12 = tab;
    goto LAB_001083b1;
  case 0x87:
    local_3d0 = (char *)((ulong)_oi & 0xffffffff);
    p_Var46 = (_Bool *)_optarg;
    iVar13 = xstrtoumax(_optarg,0,10,&tok,&_LC2);
    uVar31 = uVar21 & 0xffffffff;
    iVar12 = tab;
    if (iVar13 == 1) {
      local_3c0 = 0xffffffffffffffff;
    }
    else {
      if (iVar13 != 0) goto LAB_0010a85b;
      local_3c0 = CONCAT44(tok.n_tok._4_4_,(int)tok.n_tok);
      p_Var46 = (_Bool *)pTVar39;
      if (local_3c0 == 0) {
        pcVar14 = "number in parallel must be nonzero";
        goto LAB_0010a5fe;
      }
    }
    goto LAB_001083b1;
  }
code_r0x00108399:
  lVar38 = (long)_optind;
  iVar12 = _optind + 1;
LAB_0010839f:
  _optind = iVar12;
  __ptr[(long)pcVar47] = argv[lVar38];
  pcVar47 = pcVar47 + 1;
  iVar12 = tab;
  goto LAB_001083b1;
LAB_00109f17:
  initbuf((buffer *)&n,local_3b8,sVar49);
LAB_00109616:
  local_3f8 = (buffer *)&n;
  local_3d0 = local_3d0 + -1;
  local_2a8 = false;
  while (_Var11 = fillbuf(local_3f8,(FILE *)__stream,local_430), cVar10 = local_2a8,
        lVar38 = local_2c0, uVar21 = local_2c8, uVar8 = n, _Var11) {
    if (local_2a8 == false) {
LAB_001096c7:
      saved_line.text = (char *)0x0;
      local_438 = local_438 + 1;
      cVar10 = '\0';
      ptVar26 = maybe_create_temp((FILE **)&oi,false);
      pTVar44 = (Tokens *)&ptVar26->field_0xd;
    }
    else {
      if (local_3d0 != (char *)0x0) {
        if ((local_2c0 - local_2d0) - local_3b8 * local_2c8 <= local_3b8 + 1) goto LAB_001096c7;
        local_2b8 = local_2d0;
        xfclose((FILE *)__stream,local_430);
        goto LAB_00109b33;
      }
      saved_line.text = (char *)0x0;
      if (local_438 != 0 || local_2b8 != 0) goto LAB_001096c7;
      xfclose((FILE *)__stream,local_430);
      pFVar32 = stream_open((char *)local_3e0,"w");
      if (pFVar32 == (FILE *)0x0) goto LAB_0010ab49;
      local_438 = 0;
      pTVar44 = local_3e0;
      uVar21 = local_2c8;
      _oi = pFVar32;
    }
    pFVar32 = _oi;
    plVar43 = (line *)(lVar38 + uVar8);
    if (uVar21 < 2) {
      write_unique(plVar43 + -1,_oi,(char *)pTVar44);
    }
    else {
      act.__sigaction_handler.sa_handler = (__sighandler_t)heap_alloc(compare_nodes);
      pthread_mutex_init((pthread_mutex_t *)&act.sa_mask,(pthread_mutexattr_t *)0x0);
      __cond = (pthread_cond_t *)(act.sa_mask.__val + 5);
      pthread_cond_init(__cond,(pthread_condattr_t *)0x0);
      parent = (merge_node *)xmalloc(uVar31 << 8);
      parent->lo = (line *)0x0;
      parent->hi = (line *)0x0;
      parent->end_lo = (line *)0x0;
      parent->end_hi = (line *)0x0;
      parent->dest = (line **)0x0;
      parent->parent = (merge_node *)0x0;
      parent->level = 0;
      parent->queued = false;
      parent->nlo = uVar21;
      parent->nhi = uVar21;
      pthread_mutex_init((pthread_mutex_t *)&parent->lock,(pthread_mutexattr_t *)0x0);
      init_node(parent,parent + 1,plVar43,uVar31,uVar21,false);
      sortlines(plVar43,uVar31,uVar21,parent + 1,(merge_node_queue *)&act,pFVar32,(char *)pTVar44);
      __mutex = (pthread_mutex_t *)&parent->lock;
      for (lVar38 = uVar31 * 2; lVar38 != 0; lVar38 = lVar38 + -1) {
        pthread_mutex_destroy(__mutex);
        __mutex = (pthread_mutex_t *)((long)__mutex + 0x80);
      }
      free(parent);
      heap_free(act.__sigaction_handler.sa_handler);
      pthread_cond_destroy(__cond);
      pthread_mutex_destroy((pthread_mutex_t *)&act.sa_mask);
    }
    xfclose(pFVar32,(char *)pTVar44);
    if (cVar10 != '\0') {
      free((void *)n);
      goto joined_r0x00109843;
    }
  }
  xfclose((FILE *)__stream,local_430);
  if (local_3d0 == (char *)0x0) goto LAB_0010a2a5;
LAB_00109b33:
  __ptr = __ptr + 1;
  goto LAB_001095bb;
LAB_0010a2a5:
  free((void *)n);
  ptVar26 = temphead;
  files = (sortfile *)xnmalloc(local_438,0x10);
  psVar29 = files;
  while (ptVar26 != (tempnode *)0x0) {
    psVar29->temp = ptVar26;
    puVar2 = &ptVar26->field_0xd;
    ptVar26 = ptVar26->next;
    psVar29->name = puVar2;
    psVar29 = psVar29 + 1;
  }
  merge(files,local_438,local_438,(char *)local_3e0);
  free(files);
joined_r0x00109843:
  while (0 < nprocs) {
    reap(-1);
  }
  goto LAB_0010985c;
LAB_001099fd:
  _Var11 = fillbuf((buffer *)&n,pFVar32,local_430);
  uVar21 = local_2c8;
  if (!_Var11) {
    bVar40 = 1;
LAB_00109b4f:
    xfclose(pFVar32,local_430);
    free((void *)n);
    free(_oi);
                    /* WARNING: Subroutine does not return */
    exit((uint)(bVar40 ^ 1));
  }
  plVar43 = (line *)(local_2c0 + n);
  lVar6 = -local_2c8;
  if ((uVar31 != 0) &&
     (iVar12 = compare((line *)&oi,plVar43 + -1), a = plVar43, (int)(uVar50 ^ 1) <= iVar12)) {
LAB_00109b44:
    if (cVar10 == 'c') {
      uVar34 = umaxtostr(((long)plVar43 - (long)(a + -1) >> 5) + (long)local_418,str);
      uVar33 = _program_name;
      uVar30 = dcgettext(0,"%s: %s:%s: disorder: ",5);
      __fprintf_chk(_stderr,2,uVar30,uVar33,local_430,uVar34);
      pcVar14 = (char *)dcgettext(0,"standard error",5);
      write_line(a + -1,_stderr,pcVar14);
    }
    bVar40 = 0;
    goto LAB_00109b4f;
  }
  plVar9 = plVar43 + -1;
  while (a = plVar9, plVar43 + lVar6 < a) {
    iVar12 = compare(a,a + -1);
    plVar9 = a + -1;
    if ((int)(uVar50 ^ 1) <= iVar12) goto LAB_00109b44;
  }
  uVar36 = a->length;
  local_418 = (Tokens *)((long)local_418 + uVar21);
  uVar21 = uVar31;
  if (uVar31 < uVar36) {
    do {
      uVar21 = uVar21 * 2;
      uVar31 = uVar36;
      if (uVar21 == 0) break;
      uVar31 = uVar21;
    } while (uVar21 < uVar36);
    free(_oi);
    _oi = (FILE *)xmalloc(uVar31);
    uVar36 = a->length;
  }
  pvVar27 = memcpy(_oi,a->text,uVar36);
  local_390 = a->length;
  if (pkVar22 != (keyfield *)0x0) {
    local_388 = (char *)(((long)a->keybeg - (long)a->text) + (long)pvVar27);
    pcStack_380 = (char *)(((long)a->keylim - (long)a->text) + (long)pvVar27);
  }
  goto LAB_001099fd;
LAB_0010a6e7:
  incompatible_options("cC");
  pTVar39 = (Tokens *)p_Var46;
  goto LAB_0010a6f3;
switchD_001084a0_caseD_1:
  if ((char)_optarg->n_tok == '+') {
    if (_optind == (int)pTVar44) {
      bVar7 = false;
    }
    else {
      p_Var46 = (_Bool *)0x0;
      bVar7 = false;
      if (*argv[_optind] == '-') {
        bVar7 = (int)argv[_optind][1] - 0x30U < 10;
      }
    }
    bVar53 = (bool)(bVar53 | pcVar14 == (char *)0x0 & bVar7);
    if (bVar53) {
      local_3d0 = (char *)(uVar21 & 0xffffffff);
      pkVar22 = key_init(&key_buf);
      pcVar45 = parse_field_count((char *)(extraout_RDX_00 + 1),&pkVar22->sword,(char *)0x0);
      uVar31 = uVar21 & 0xffffffff;
      if (pcVar45 == (char *)0x0) {
        if (pkVar22->sword == 0) goto LAB_0010921b;
      }
      else {
        if (*pcVar45 == '.') {
          pcVar45 = parse_field_count(pcVar45 + 1,&pkVar22->schar,(char *)0x0);
          if (pkVar22->sword == 0) goto LAB_0010921b;
LAB_00109229:
          uVar31 = uVar21 & 0xffffffff;
          if (pcVar45 == (char *)0x0) goto LAB_00108ee0;
        }
        else if (pkVar22->sword == 0) {
LAB_0010921b:
          if (pkVar22->schar == 0) {
            pkVar22->sword = 0xffffffffffffffff;
          }
          goto LAB_00109229;
        }
        uVar31 = uVar21 & 0xffffffff;
        pcVar45 = set_ordering(pcVar45,pkVar22,bl_start);
        if (*pcVar45 == '\0') {
          uVar50 = (uint)uVar31;
          if (bVar7) {
            lVar38 = (long)_optind;
            local_3d0 = (char *)(uVar31 & 0xffffffff);
            _optind = _optind + 1;
            pTVar39 = (Tokens *)argv[lVar38];
            s = (Tokens *)
                parse_field_count((char *)((long)&pTVar39->n_tok + 1),&pkVar22->eword,
                                  "invalid number after \'-\'");
            pkVar37 = pkVar22;
            if ((char)s->n_tok == '.') goto LAB_0010a57a;
            while( true ) {
              if ((pkVar22->echar == 0) && (pkVar22->eword != 0)) {
                pkVar22->eword = pkVar22->eword - 1;
              }
              uVar50 = (uint)uVar31;
              pcVar45 = set_ordering((char *)s,pkVar22,bl_end);
              if (*pcVar45 == '\0') break;
              pkVar37 = pkVar22;
              s = pTVar39;
              badfieldspec((char *)pTVar39,"stray character in field spec");
              pTVar44 = pTVar39;
LAB_0010a57a:
              s = (Tokens *)
                  parse_field_count((char *)((long)&s->n_tok + 1),&pkVar37->echar,
                                    "invalid number after \'.\'");
            }
          }
          pkVar22->traditional_used = true;
          insertkey(pkVar22);
          uVar31 = (ulong)uVar50;
          iVar12 = tab;
          goto LAB_001083b1;
        }
      }
    }
  }
LAB_00108ee0:
  __ptr[(long)pcVar47] = (char *)_optarg;
  pcVar47 = pcVar47 + 1;
  iVar12 = tab;
  goto LAB_001083b1;
  while( true ) {
    local_3d0 = pcVar15 + 1;
    ppcVar42 = ppcVar42 + 1;
    if (pcVar47 == local_3d0) break;
LAB_00108f72:
    pcVar15 = local_3d0;
    pcVar14 = *ppcVar42;
    if (((*pcVar14 != '-') || (pcVar14[1] != '\0')) && (iVar12 = euidaccess(pcVar14,4), iVar12 != 0)
       ) {
      pcVar14 = *ppcVar42;
      pcVar15 = "cannot read";
      goto LAB_00108f97;
    }
  }
  if (local_3e0 != (Tokens *)0x0) {
    iVar12 = open((char *)local_3e0,0x80041,0x1b6);
    if (iVar12 < 0) {
LAB_0010ab49:
      pcVar14 = (char *)dcgettext(0,"open failed",5);
                    /* WARNING: Subroutine does not return */
      sort_die(pcVar14,(char *)local_3e0);
    }
    if (iVar12 != 1) {
      move_fd(iVar12,1);
    }
  }
  if (!bVar52) {
    if (local_3c0 == 0) {
      uVar31 = num_processors();
      local_3c0 = 8;
      if (uVar31 < 9) {
        local_3c0 = uVar31;
      }
    }
    uVar31 = 0xffffffffffffff;
    if (local_3c0 < 0x100000000000000) {
      uVar31 = local_3c0;
    }
    local_2c0 = 0;
    local_438 = 0;
    local_3a8 = "r";
LAB_001095bb:
    local_430 = *__ptr;
    pcVar14 = local_3a8;
    __stream = (FILE *)stream_open(local_430,"r");
    if (__stream == (FILE *)0x0) {
LAB_0010a4df:
      xfopen(local_430,pcVar14);
LAB_0010a4e9:
      badfieldspec((char *)_optarg,"stray character in field spec");
      uVar50 = extraout_EAX_00;
LAB_0010a4fc:
      if (uVar50 == 0xffffff7e) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
switchD_001084a0_caseD_2:
                    /* WARNING: Subroutine does not return */
      usage(2);
    }
    local_3b8 = 0x30;
    if (1 < local_3c0) {
      lVar38 = 1;
      uVar21 = 1;
      do {
        uVar21 = uVar21 * 2;
        lVar38 = lVar38 + 1;
      } while (uVar21 < uVar31);
      local_3b8 = lVar38 * 0x20;
    }
    if (local_2c0 == 0) {
      sVar48 = local_3b8 + 2;
      iVar12 = fileno(__stream);
      iVar12 = fstat(iVar12,(stat *)&act);
      if (iVar12 == 0) {
        pcVar14 = (char *)0x0;
        do {
          if ((((uint)act.sa_mask.__val[2] & 0xd000) == 0x8000) && (0 < (long)act.sa_mask.__val[5]))
          {
            uVar21 = act.sa_mask.__val[5];
            sVar49 = sort_size;
            if (size_bound_0 == 0) goto joined_r0x00109cae;
          }
          else {
            sVar49 = sort_size;
            if (sort_size != 0) goto LAB_00109f17;
            uVar21 = 0x20000;
            sVar49 = size_bound_0;
joined_r0x00109cae:
            size_bound_0 = sVar49;
            if (size_bound_0 == 0) {
              iVar12 = getrlimit(RLIMIT_DATA,(rlimit *)&oi);
              pFVar32 = (FILE *)0xffffffffffffffff;
              if (iVar12 == 0) {
                pFVar32 = _oi;
              }
              iVar12 = getrlimit(RLIMIT_AS,(rlimit *)&oi);
              if ((iVar12 == 0) && (_oi < pFVar32)) {
                pFVar32 = _oi;
              }
              uVar36 = (ulong)pFVar32 >> 1;
              iVar12 = getrlimit(__RLIMIT_RSS,(rlimit *)&oi);
              if ((iVar12 == 0) && (uVar28 = ((ulong)_oi >> 4) * 0xf, uVar28 < uVar36)) {
                uVar36 = uVar28;
              }
              dVar54 = (double)physmem_available();
              dVar55 = (double)physmem_total();
              dVar56 = dVar55 * __LC150;
              if (dVar54 <= _LC149 * dVar55) {
                dVar54 = _LC149 * dVar55;
              }
              if (dVar56 < (double)(long)uVar36) {
                if (dVar56 < _LC105) {
                  uVar36 = (ulong)dVar56;
                }
                else {
                  uVar36 = (long)(dVar56 - _LC105) ^ 0x8000000000000000;
                }
              }
              if (dVar54 < (double)uVar36) {
                if (dVar54 < _LC105) {
                  uVar36 = (ulong)dVar54;
                }
                else {
                  uVar36 = (long)(dVar54 - _LC105) ^ 0x8000000000000000;
                }
              }
              size_bound_0 = (ulong)nmerge * 0x22;
              if ((ulong)nmerge * 0x22 < uVar36) {
                size_bound_0 = uVar36;
              }
            }
          }
          uVar36 = (local_3b8 + 1) * uVar21 + 1;
          sVar49 = size_bound_0;
          if ((uVar21 != uVar36 / (local_3b8 + 1)) || (size_bound_0 - sVar48 <= uVar36))
          goto LAB_00109f17;
          pcVar14 = pcVar14 + 1;
          sVar48 = sVar48 + uVar36;
          sVar49 = sVar48;
          if (local_3d0 == pcVar14) goto LAB_00109f17;
          pcVar15 = __ptr[(long)pcVar14];
          if ((*pcVar15 == '-') && (pcVar15[1] == '\0')) {
            iVar12 = fstat(0,(stat *)&act);
          }
          else {
            iVar12 = stat(pcVar15,(stat *)&act);
          }
          if (iVar12 != 0) {
            __ptr = __ptr + (long)pcVar14;
            break;
          }
        } while( true );
      }
      pcVar14 = *__ptr;
      pcVar15 = "stat failed";
LAB_00108f97:
      pcVar15 = (char *)dcgettext(0,pcVar15,5);
                    /* WARNING: Subroutine does not return */
      sort_die(pcVar15,pcVar14);
    }
    goto LAB_00109616;
  }
  psVar29 = (sortfile *)xcalloc(local_3d0);
  pcVar14 = (char *)0x0;
  do {
    psVar29[(long)pcVar14].name = __ptr[(long)pcVar14];
    bVar53 = pcVar15 != pcVar14;
    pcVar14 = pcVar14 + 1;
  } while (bVar53);
  merge(psVar29,0,(size_t)local_3d0,(char *)local_3e0);
LAB_0010985c:
  if ((have_read_stdin != false) && (iVar12 = rpl_fclose(_stdin), iVar12 == -1)) {
    pcVar14 = (char *)dcgettext(0,"close failed",5);
                    /* WARNING: Subroutine does not return */
    sort_die(pcVar14,"-");
  }
  if (lVar6 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}


