
pitem * pitem_new(uchar *prio64be,void *data)

{
  undefined8 uVar1;
  pitem *ppVar2;
  
  ppVar2 = (pitem *)CRYPTO_malloc(0x18,"ssl/pqueue.c",0x14);
  if (ppVar2 != (pitem *)0x0) {
    uVar1 = *(undefined8 *)prio64be;
    ppVar2->data = data;
    ppVar2->next = (_pitem *)0x0;
    *(undefined8 *)ppVar2->priority = uVar1;
  }
  return ppVar2;
}



void pitem_free(pitem *item)

{
  CRYPTO_free(item);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

pqueue pqueue_new(void)

{
  pqueue p_Var1;
  
  p_Var1 = (pqueue)CRYPTO_zalloc(0x10,"ssl/pqueue.c",0x26);
  return p_Var1;
}



void pqueue_free(pqueue pq)

{
  CRYPTO_free(pq);
  return;
}



pitem * pqueue_insert(pqueue pq,pitem *item)

{
  _pitem *p_Var1;
  int iVar2;
  _pitem *__s1;
  _pitem *p_Var3;
  
  p_Var1 = *(_pitem **)pq;
  p_Var3 = (_pitem *)0x0;
  if (*(_pitem **)pq == (_pitem *)0x0) {
LAB_00100120:
    *(pitem **)pq = item;
  }
  else {
    do {
      __s1 = p_Var1;
      iVar2 = memcmp(__s1,item,8);
      if (0 < iVar2) {
        item->next = __s1;
        if (p_Var3 != (_pitem *)0x0) {
          p_Var3->next = item;
          return item;
        }
        goto LAB_00100120;
      }
      if (iVar2 == 0) {
        return (pitem *)0x0;
      }
      p_Var1 = __s1->next;
      p_Var3 = __s1;
    } while (__s1->next != (_pitem *)0x0);
    item->next = (_pitem *)0x0;
    __s1->next = item;
  }
  return item;
}



pitem * pqueue_peek(pqueue pq)

{
  return *(pitem **)pq;
}



pitem * pqueue_pop(pqueue pq)

{
  pitem *ppVar1;
  
  ppVar1 = *(pitem **)pq;
  if (ppVar1 != (pitem *)0x0) {
    *(_pitem **)pq = ppVar1->next;
  }
  return ppVar1;
}



pitem * pqueue_find(pqueue pq,uchar *prio64be)

{
  pitem *ppVar1;
  pitem *ppVar2;
  
  ppVar1 = *(pitem **)pq;
  if (*(pitem **)pq == (pitem *)0x0) {
    ppVar2 = (pitem *)0x0;
  }
  else {
    do {
      ppVar2 = ppVar1;
      if (ppVar2->next == (_pitem *)0x0) {
        if (*(long *)ppVar2->priority == *(long *)prio64be) {
          return ppVar2;
        }
        return (pitem *)0x0;
      }
      ppVar1 = ppVar2->next;
    } while (*(long *)ppVar2->priority != *(long *)prio64be);
  }
  return ppVar2;
}



pitem * pqueue_iterator(pqueue pq)

{
  pitem *ppVar1;
  
  ppVar1 = pqueue_peek(pq);
  return ppVar1;
}



pitem * pqueue_next(piterator *iter)

{
  pitem *ppVar1;
  
  if (iter == (piterator *)0x0) {
    ppVar1 = (pitem *)0x0;
  }
  else {
    ppVar1 = *iter;
    if (ppVar1 != (pitem *)0x0) {
      *iter = ppVar1->next;
      return ppVar1;
    }
  }
  return ppVar1;
}



int pqueue_size(pqueue pq)

{
  long lVar1;
  int iVar2;
  
  iVar2 = 0;
  for (lVar1 = *(long *)pq; lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x10)) {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}


