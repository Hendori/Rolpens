
/* graphite2::Segment::newSlot() [clone .part.0] */

Slot * __thiscall graphite2::Segment::newSlot(Segment *this)

{
  byte bVar1;
  Slot *__ptr;
  short *__ptr_00;
  undefined8 *puVar2;
  Slot *pSVar3;
  void *pvVar4;
  size_t __nmemb;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  short *psVar8;
  
  if ((ulong)(*(long *)(this + 0xb8) << 6) < *(ulong *)(this + 0xb0)) {
    return (Slot *)0x0;
  }
  __nmemb = *(size_t *)(this + 0xa8);
  bVar1 = *(byte *)(*(long *)(this + 0x90) + 0x32);
  __ptr = (Slot *)calloc(__nmemb,0x80);
  __ptr_00 = (short *)calloc(__nmemb * bVar1,2);
  if ((__ptr_00 == (short *)0x0) || (__ptr == (Slot *)0x0)) {
    free(__ptr);
    free(__ptr_00);
    return (Slot *)0x0;
  }
  if (__nmemb != 0) {
    uVar7 = 0;
    pSVar3 = __ptr;
    psVar8 = __ptr_00;
    do {
      uVar7 = uVar7 + 1;
      graphite2::Slot::Slot(pSVar3,psVar8);
      __nmemb = *(size_t *)(this + 0xa8);
      psVar8 = psVar8 + bVar1;
      *(Slot **)pSVar3 = pSVar3 + 0x80;
      pSVar3 = pSVar3 + 0x80;
    } while (uVar7 < __nmemb);
  }
  *(undefined8 *)(__ptr + __nmemb * 0x80 + -0x80) = 0;
  puVar5 = *(undefined8 **)(this + 0x10);
  *(undefined8 *)__ptr = 0;
  if (puVar5 == *(undefined8 **)(this + 0x18)) {
    lVar6 = (long)puVar5 - (long)*(void **)(this + 8);
    uVar7 = (lVar6 >> 3) + 1;
    if (uVar7 <= (ulong)(lVar6 >> 3)) goto LAB_0010010b;
    if (uVar7 >> 0x3d != 0) goto graphite2_Segment_newSlot;
    pvVar4 = realloc(*(void **)(this + 8),uVar7 * 8);
    *(void **)(this + 8) = pvVar4;
    if (pvVar4 == (void *)0x0) goto graphite2_Segment_newSlot;
    puVar5 = (undefined8 *)((long)pvVar4 + lVar6);
    puVar2 = (undefined8 *)((long)pvVar4 + lVar6 + 8);
    *(undefined8 **)(this + 0x18) = puVar2;
  }
  else {
LAB_0010010b:
    puVar2 = puVar5 + 1;
  }
  *(undefined8 **)(this + 0x10) = puVar2;
  *puVar5 = __ptr;
  puVar5 = *(undefined8 **)(this + 0x28);
  if (puVar5 == *(undefined8 **)(this + 0x30)) {
    lVar6 = (long)puVar5 - (long)*(void **)(this + 0x20);
    uVar7 = (lVar6 >> 3) + 1;
    if ((ulong)(lVar6 >> 3) < uVar7) {
      if (uVar7 >> 0x3d != 0) {
graphite2_Segment_newSlot:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      pvVar4 = realloc(*(void **)(this + 0x20),uVar7 * 8);
      *(void **)(this + 0x20) = pvVar4;
      if (pvVar4 == (void *)0x0) goto graphite2_Segment_newSlot;
      puVar5 = (undefined8 *)((long)pvVar4 + lVar6);
      puVar2 = (undefined8 *)((long)pvVar4 + lVar6 + 8);
      *(undefined8 **)(this + 0x30) = puVar2;
      goto LAB_0010012d;
    }
  }
  puVar2 = puVar5 + 1;
LAB_0010012d:
  *(undefined8 **)(this + 0x28) = puVar2;
  *puVar5 = __ptr_00;
  pSVar3 = (Slot *)0x0;
  if (1 < *(ulong *)(this + 0xa8)) {
    pSVar3 = __ptr + 0x80;
  }
  *(Slot **)(this + 0x68) = pSVar3;
  return __ptr;
}



/* graphite2::Segment::~Segment() */

void __thiscall graphite2::Segment::~Segment(Segment *this)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *__dest;
  
  puVar2 = *(undefined8 **)(this + 8);
  if (puVar2 != *(undefined8 **)(this + 0x10)) {
    do {
      pvVar1 = (void *)*puVar2;
      puVar2 = puVar2 + 1;
      free(pvVar1);
    } while (*(undefined8 **)(this + 0x10) != puVar2);
  }
  puVar2 = *(undefined8 **)(this + 0x20);
  if (puVar2 != *(undefined8 **)(this + 0x28)) {
    do {
      pvVar1 = (void *)*puVar2;
      puVar2 = puVar2 + 1;
      free(pvVar1);
    } while (*(undefined8 **)(this + 0x28) != puVar2);
  }
  puVar2 = *(undefined8 **)(this + 0x38);
  if (*(undefined8 **)(this + 0x40) != puVar2) {
    do {
      pvVar1 = (void *)*puVar2;
      puVar2 = puVar2 + 1;
      free(pvVar1);
    } while (*(undefined8 **)(this + 0x40) != puVar2);
  }
  if (*(void **)(this + 0x78) != (void *)0x0) {
    free(*(void **)(this + 0x78));
  }
  free(*(void **)(this + 0x80));
  puVar2 = *(undefined8 **)(this + 0x58);
  __dest = *(undefined8 **)(this + 0x50);
  puVar3 = __dest;
  if (puVar2 != __dest) {
    do {
      puVar4 = puVar3 + 4;
      free((void *)*puVar3);
      puVar3 = puVar4;
    } while (puVar2 != puVar4);
    if (puVar2 != *(undefined8 **)(this + 0x58)) {
      memmove(__dest,puVar2,(long)*(undefined8 **)(this + 0x58) - (long)puVar2);
    }
    __dest = *(undefined8 **)(this + 0x50);
  }
  free(__dest);
  free(*(void **)(this + 0x38));
  free(*(void **)(this + 0x20));
  free(*(void **)(this + 8));
  return;
}



/* graphite2::Segment::appendSlot(int, int, int, int, unsigned long) */

void __thiscall
graphite2::Segment::appendSlot
          (Segment *this,int param_1,int param_2,int param_3,int param_4,ulong param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 uVar3;
  byte bVar4;
  long lVar5;
  Slot *pSVar6;
  ushort uVar7;
  int *piVar8;
  
  pSVar6 = *(Slot **)(this + 0x68);
  if (pSVar6 == (Slot *)0x0) {
    pSVar6 = (Slot *)newSlot(this);
    if (pSVar6 == (Slot *)0x0) {
      return;
    }
  }
  else {
    *(undefined8 *)(this + 0x68) = *(undefined8 *)pSVar6;
    *(undefined8 *)pSVar6 = 0;
  }
  piVar8 = (int *)((long)param_1 * 0x20 + *(long *)(this + 0x78));
  *(char *)(piVar8 + 6) = (char)param_4;
  lVar5 = *(long *)(this + 0x88);
  *(ulong *)(piVar8 + 4) = param_5;
  lVar5 = *(long *)(lVar5 + 0x78);
  *piVar8 = param_2;
  if ((ushort)param_3 < *(ushort *)(lVar5 + 0x28)) {
    lVar5 = graphite2::GlyphCache::glyph((ushort)lVar5);
    piVar8 = (int *)((long)param_1 * 0x20 + *(long *)(this + 0x78));
    if (lVar5 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = graphite2::sparse::operator[]((short)lVar5 + 0x18);
    }
  }
  else {
    uVar3 = 0;
    lVar5 = 0;
  }
  *(undefined1 *)((long)piVar8 + 0x19) = uVar3;
  graphite2::Slot::child(pSVar6);
  graphite2::Slot::setGlyph((Segment *)pSVar6,(ushort)this,(GlyphFace *)(ulong)(param_3 & 0xffff));
  puVar1 = *(undefined8 **)(this + 0xa0);
  *(int *)(pSVar6 + 0x1c) = param_1;
  *(ulong *)(pSVar6 + 0x14) = CONCAT44(param_1,param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = pSVar6;
  }
  lVar2 = *(long *)(this + 0x98);
  *(undefined8 **)(pSVar6 + 8) = puVar1;
  *(Slot **)(this + 0xa0) = pSVar6;
  if (lVar2 == 0) {
    *(Slot **)(this + 0x98) = pSVar6;
  }
  if ((lVar5 != 0) && (*(char *)(*(long *)(this + 0x90) + 0x35) != '\0')) {
    uVar7 = (short)lVar5 + 0x18;
    bVar4 = graphite2::sparse::operator[](uVar7);
    if (0x10 < *(byte *)(*(long *)(this + 0x90) + 0x28)) {
      graphite2::sparse::operator[](uVar7);
    }
    this[0xc6] = (Segment)((byte)this[0xc6] & bVar4);
    return;
  }
  return;
}



/* graphite2::Segment::newSlot() */

void __thiscall graphite2::Segment::newSlot(Segment *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(this + 0x68);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(this + 0x68) = *puVar1;
    *puVar1 = 0;
    return;
  }
  newSlot(this);
  return;
}



/* graphite2::Segment::freeSlot(graphite2::Slot*) */

void __thiscall graphite2::Segment::freeSlot(Segment *this,Slot *param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  byte bVar5;
  
  bVar5 = 0;
  if (param_1 == (Slot *)0x0) {
    return;
  }
  if (*(Slot **)(this + 0xa0) == param_1) {
    *(undefined8 *)(this + 0xa0) = *(undefined8 *)(param_1 + 8);
  }
  if (*(Slot **)(this + 0x98) == param_1) {
    *(undefined8 *)(this + 0x98) = *(undefined8 *)param_1;
  }
  if (*(Slot **)(param_1 + 0x28) != (Slot *)0x0) {
    graphite2::Slot::removeChild(*(Slot **)(param_1 + 0x28));
  }
  lVar1 = *(long *)(param_1 + 0x30);
  do {
    if (lVar1 == 0) {
LAB_0010057e:
      graphite2::Slot::Slot(param_1,*(short **)(param_1 + 0x70));
      puVar4 = *(undefined8 **)(param_1 + 0x70);
      uVar3 = (ulong)*(byte *)(*(long *)(this + 0x90) + 0x32) * 2;
      uVar2 = (uint)uVar3;
      if (uVar2 < 8) {
        if ((uVar3 & 4) == 0) {
          if ((uVar2 != 0) && (*(undefined1 *)puVar4 = 0, (uVar3 & 2) != 0)) {
            *(undefined2 *)((long)puVar4 + (uVar3 - 2)) = 0;
          }
        }
        else {
          *(undefined4 *)puVar4 = 0;
          *(undefined4 *)((long)puVar4 + (uVar3 - 4)) = 0;
        }
      }
      else {
        *puVar4 = 0;
        *(undefined8 *)((long)puVar4 + (uVar3 - 8)) = 0;
        uVar3 = (ulong)(uVar2 + ((int)puVar4 -
                                (int)(undefined8 *)((ulong)(puVar4 + 1) & 0xfffffffffffffff8)) >> 3)
        ;
        puVar4 = (undefined8 *)((ulong)(puVar4 + 1) & 0xfffffffffffffff8);
        for (; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar4 = 0;
          puVar4 = puVar4 + (ulong)bVar5 * -2 + 1;
        }
      }
      *(undefined8 *)param_1 = *(undefined8 *)(this + 0x68);
      *(Slot **)(this + 0x68) = param_1;
      return;
    }
    if (param_1 != *(Slot **)(lVar1 + 0x28)) {
      *(undefined8 *)(param_1 + 0x30) = 0;
      goto LAB_0010057e;
    }
    *(undefined8 *)(lVar1 + 0x28) = 0;
    graphite2::Slot::removeChild(param_1);
    lVar1 = *(long *)(param_1 + 0x30);
  } while( true );
}



/* graphite2::Segment::Segment(unsigned long, graphite2::Face const*, unsigned int, int) */

void __thiscall
graphite2::Segment::Segment(Segment *this,ulong param_1,Face *param_2,uint param_3,int param_4)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  Slot *pSVar6;
  long lVar7;
  undefined8 *puVar8;
  size_t __size;
  bool bVar9;
  
  *(undefined8 *)this = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x38) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x48) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x58) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x68) = (undefined1  [16])0x0;
  __size = param_1 << 5;
  if (0x3ffffffffffffff < param_1) {
    __size = 0xffffffffffffffff;
  }
  puVar4 = (undefined8 *)malloc(__size);
  uVar3 = _LC1;
  lVar7 = param_1 - 1;
  puVar8 = puVar4;
  if (-1 < lVar7) {
    do {
      *puVar8 = uVar3;
      *(undefined4 *)(puVar8 + 1) = 0xffffffff;
      puVar8[2] = 0;
      *(undefined1 *)(puVar8 + 3) = 0;
      *(undefined1 *)((long)puVar8 + 0x19) = 0;
      *(undefined1 *)((long)puVar8 + 0x1a) = 0;
      bVar9 = lVar7 != 0;
      lVar7 = lVar7 + -1;
      puVar8 = puVar8 + 4;
    } while (bVar9);
  }
  *(undefined8 **)(this + 0x78) = puVar4;
  *(undefined8 *)(this + 0x80) = 0;
  *(Face **)(this + 0x88) = param_2;
  lVar7 = graphite2::Face::chooseSilf((uint)param_2);
  pSVar6 = *(Slot **)(this + 0x68);
  *(undefined8 *)(this + 0x98) = 0;
  *(ulong *)(this + 0xa8) = param_1 + 10;
  bVar1 = *(byte *)(lVar7 + 0x2e);
  *(long *)(this + 0x90) = lVar7;
  cVar2 = *(char *)(lVar7 + 0x35);
  *(ulong *)(this + 0xb0) = param_1;
  *(undefined8 *)(this + 0xa0) = 0;
  *(ulong *)(this + 0xb8) = param_1;
  *(undefined4 *)(this + 0xc0) = 0;
  this[0xc4] = SUB41(param_4,0);
  this[0xc5] = (Segment)(bVar1 >> 4 & 2);
  this[0xc6] = (Segment)-(cVar2 != '\0');
  if (pSVar6 == (Slot *)0x0) {
    pSVar6 = (Slot *)newSlot(this);
  }
  else {
    uVar3 = *(undefined8 *)pSVar6;
    *(undefined8 *)pSVar6 = 0;
    *(undefined8 *)(this + 0x68) = uVar3;
  }
  freeSlot(this,pSVar6);
  uVar5 = param_1 >> 1 | param_1;
  uVar5 = uVar5 | uVar5 >> 2;
  uVar5 = uVar5 | uVar5 >> 4;
  uVar5 = uVar5 | uVar5 >> 8;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  *(ulong *)(this + 0xa8) = ((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  return;
}



/* graphite2::Segment::newJustify() */

void __thiscall graphite2::Segment::newJustify(Segment *this)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  void *pvVar4;
  long lVar5;
  undefined8 *puVar6;
  void *pvVar7;
  long lVar8;
  
  puVar2 = *(undefined8 **)(this + 0x70);
  if (puVar2 != (undefined8 *)0x0) goto LAB_00100884;
  lVar8 = *(long *)(this + 0xa8);
  uVar3 = (ulong)*(byte *)(*(long *)(this + 0x90) + 0x29);
  if (uVar3 == 0) {
    uVar3 = 1;
  }
  lVar1 = uVar3 * 10 + 0xe;
  pvVar4 = calloc(lVar8 * lVar1,1);
  if (pvVar4 == (void *)0x0) {
    return;
  }
  lVar5 = lVar8 + -2;
  if (-1 < lVar5) {
    pvVar7 = (void *)((long)pvVar4 + (lVar8 + -1) * lVar1);
    do {
      lVar5 = lVar5 + -1;
      *(void **)((long)pvVar7 - lVar1) = pvVar7;
      pvVar7 = (void *)((long)pvVar7 - lVar1);
    } while (lVar5 != -1);
  }
  *(void **)(this + 0x70) = pvVar4;
  puVar2 = *(undefined8 **)(this + 0x40);
  if (puVar2 == *(undefined8 **)(this + 0x48)) {
    lVar8 = (long)puVar2 - (long)*(void **)(this + 0x38);
    uVar3 = (lVar8 >> 3) + 1;
    if (uVar3 <= (ulong)(lVar8 >> 3)) goto LAB_00100925;
    if (uVar3 >> 0x3d != 0) {
graphite2_Segment_newJustify:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pvVar4 = realloc(*(void **)(this + 0x38),uVar3 * 8);
    *(void **)(this + 0x38) = pvVar4;
    if (pvVar4 == (void *)0x0) goto graphite2_Segment_newJustify;
    puVar6 = (undefined8 *)((long)pvVar4 + lVar8 + 8);
    puVar2 = (undefined8 *)((long)pvVar4 + lVar8);
    pvVar4 = *(void **)(this + 0x70);
    *(undefined8 **)(this + 0x48) = puVar6;
  }
  else {
LAB_00100925:
    puVar6 = puVar2 + 1;
  }
  *(undefined8 **)(this + 0x40) = puVar6;
  *puVar2 = pvVar4;
  puVar2 = *(undefined8 **)(this + 0x70);
LAB_00100884:
  *(undefined8 *)(this + 0x70) = *puVar2;
  *puVar2 = 0;
  return;
}



/* graphite2::Segment::freeJustify(graphite2::SlotJustify*) */

void __thiscall graphite2::Segment::freeJustify(Segment *this,SlotJustify *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  lVar3 = 10;
  bVar1 = *(byte *)(*(long *)(this + 0x90) + 0x29);
  if (bVar1 != 0) {
    lVar3 = (long)(int)((uint)bVar1 + (uint)bVar1 * 4) * 2;
  }
  uVar2 = *(undefined8 *)(this + 0x70);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)param_1 = uVar2;
  *(undefined8 *)(param_1 + lVar3) = 0;
  puVar5 = (undefined8 *)((ulong)(param_1 + 0x10) & 0xfffffffffffffff8);
  for (uVar4 = (ulong)((uint)((int)lVar3 +
                             (((int)param_1 + 8) -
                             (int)(undefined8 *)((ulong)(param_1 + 0x10) & 0xfffffffffffffff8))) >>
                      3); uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(SlotJustify **)(this + 0x70) = param_1;
  return;
}



/* graphite2::Segment::reverseSlots() */

void __thiscall graphite2::Segment::reverseSlots(Segment *this)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *local_40;
  
  this[0xc4] = (Segment)((byte)this[0xc4] ^ 0x40);
  plVar6 = *(long **)(this + 0x98);
  if (plVar6 != *(long **)(this + 0xa0)) {
    for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
      cVar1 = *(char *)((long)plVar6 + 0x6e);
      if (cVar1 == -1) {
        if (*(ushort *)(*(long *)(*(long *)(this + 0x88) + 0x78) + 0x28) <= *(ushort *)(plVar6 + 2))
        {
          *(undefined1 *)((long)plVar6 + 0x6e) = 0;
          cVar1 = '\0';
          goto LAB_00100ab8;
        }
        lVar2 = graphite2::GlyphCache::glyph((ushort)*(long *)(*(long *)(this + 0x88) + 0x78));
        if (lVar2 != 0) {
          cVar1 = graphite2::sparse::operator[]((short)lVar2 + 0x18);
          *(char *)((long)plVar6 + 0x6e) = cVar1;
          goto LAB_00100a40;
        }
        local_40 = (undefined8 *)plVar6[1];
        *(undefined1 *)((long)plVar6 + 0x6e) = 0;
        cVar1 = '\0';
LAB_00100ac8:
        plVar8 = (long *)0x0;
        plVar5 = plVar6;
        goto LAB_00100afc;
      }
LAB_00100a40:
      if (cVar1 != '\x10') {
        cVar1 = *(char *)((long)plVar6 + 0x6e);
LAB_00100ab8:
        local_40 = (undefined8 *)plVar6[1];
        goto LAB_00100ac8;
      }
    }
  }
  return;
LAB_00100afc:
  if (cVar1 == -1) {
    if ((*(ushort *)(plVar5 + 2) < *(ushort *)(*(long *)(*(long *)(this + 0x88) + 0x78) + 0x28)) &&
       (lVar2 = graphite2::GlyphCache::glyph((ushort)*(long *)(*(long *)(this + 0x88) + 0x78)),
       lVar2 != 0)) {
      cVar1 = graphite2::sparse::operator[]((short)lVar2 + 0x18);
      plVar3 = (long *)*plVar5;
      *(char *)((long)plVar5 + 0x6e) = cVar1;
      goto joined_r0x00100ada;
    }
    *(undefined1 *)((long)plVar5 + 0x6e) = 0;
    plVar3 = (long *)*plVar5;
LAB_00100adc:
    if (plVar8 != (long *)0x0) {
      plVar8[1] = (long)plVar5;
    }
    *plVar5 = (long)plVar8;
    plVar8 = plVar5;
  }
  else {
    plVar3 = (long *)*plVar5;
joined_r0x00100ada:
    if (cVar1 != '\x10') goto LAB_00100adc;
    for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      cVar1 = *(char *)((long)plVar3 + 0x6e);
      if (cVar1 == -1) {
        if ((*(ushort *)(plVar3 + 2) < *(ushort *)(*(long *)(*(long *)(this + 0x88) + 0x78) + 0x28))
           && (lVar2 = graphite2::GlyphCache::glyph
                                 ((ushort)*(long *)(*(long *)(this + 0x88) + 0x78)), lVar2 != 0)) {
          cVar1 = graphite2::sparse::operator[]((short)lVar2 + 0x18);
          *(char *)((long)plVar3 + 0x6e) = cVar1;
          goto LAB_00100b60;
        }
        *(undefined1 *)((long)plVar3 + 0x6e) = 0;
LAB_00100c04:
        plVar4 = (long *)plVar3[1];
        goto LAB_00100c08;
      }
LAB_00100b60:
      if (cVar1 != '\x10') goto LAB_00100c04;
    }
    plVar4 = *(long **)(this + 0xa0);
LAB_00100c08:
    lVar2 = *plVar8;
    plVar7 = plVar4;
    if (lVar2 != 0) {
      *(long **)(lVar2 + 8) = plVar4;
      plVar7 = plVar6;
    }
    plVar3 = (long *)*plVar4;
    *plVar4 = lVar2;
    plVar5[1] = (long)plVar8;
    *plVar8 = (long)plVar5;
    plVar6 = plVar7;
  }
  if (plVar3 == (long *)0x0) {
    plVar8[1] = (long)local_40;
    if (local_40 == (undefined8 *)0x0) {
      *(long **)(this + 0x98) = plVar8;
    }
    else {
      *local_40 = plVar8;
    }
    *(long **)(this + 0xa0) = plVar6;
    return;
  }
  cVar1 = *(char *)((long)plVar3 + 0x6e);
  plVar5 = plVar3;
  goto LAB_00100afc;
}



/* graphite2::Segment::linkClusters(graphite2::Slot*, graphite2::Slot*) */

void __thiscall graphite2::Segment::linkClusters(Segment *this,Slot *param_1,Slot *param_2)

{
  Slot *pSVar1;
  Slot *pSVar2;
  
  pSVar1 = *(Slot **)param_2;
  if (param_1 != pSVar1) {
    do {
      if (*(long *)(param_1 + 0x28) == 0) {
        pSVar2 = param_1;
        if (((byte)this[0xc4] & 1) == 0) {
          for (; pSVar1 != param_1; param_1 = *(Slot **)param_1) {
            if (*(long *)(param_1 + 0x28) == 0) {
              graphite2::Slot::sibling(pSVar2);
              pSVar2 = param_1;
            }
          }
          return;
        }
        do {
          if (pSVar1 == param_1) {
            return;
          }
          while (*(long *)(param_1 + 0x28) == 0) {
            graphite2::Slot::sibling(param_1);
            param_1 = *(Slot **)param_1;
            if (param_1 == pSVar1) {
              return;
            }
          }
          param_1 = *(Slot **)param_1;
        } while( true );
      }
      param_1 = *(Slot **)param_1;
    } while (param_1 != pSVar1);
  }
  return;
}



/* graphite2::Segment::positionSlots(graphite2::Font const*, graphite2::Slot*, graphite2::Slot*,
   bool, bool) */

undefined8 __thiscall
graphite2::Segment::positionSlots
          (Segment *this,Font *param_1,Slot *param_2,Slot *param_3,bool param_4,bool param_5)

{
  Slot *pSVar1;
  Slot *pSVar2;
  bool bVar3;
  long in_FS_OFFSET;
  undefined4 local_64;
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_64 = 0;
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  bVar3 = (bool)(((char)this[0xc4] >> 6 ^ (byte)this[0xc4]) & 1);
  pSVar2 = param_2;
  if (param_4 != bVar3) {
    reverseSlots(this);
    pSVar2 = param_3;
    param_3 = param_2;
  }
  if (pSVar2 == (Slot *)0x0) {
    pSVar2 = *(Slot **)(this + 0x98);
    if (param_3 == (Slot *)0x0) goto LAB_00100ecc;
LAB_00100ed3:
    if ((pSVar2 == (Slot *)0x0) || (param_3 == (Slot *)0x0)) goto LAB_00100ee1;
  }
  else if (param_3 == (Slot *)0x0) {
LAB_00100ecc:
    param_3 = *(Slot **)(this + 0xa0);
    goto LAB_00100ed3;
  }
  if (param_4) {
    pSVar2 = *(Slot **)(pSVar2 + 8);
    if (pSVar2 != param_3) {
      do {
        if (*(long *)((Segment *)param_3 + 0x28) == 0) {
          local_64 = (undefined4)local_60;
          local_60 = graphite2::Slot::finalise
                               ((Segment *)param_3,(Font *)this,(Position *)param_1,
                                (Rect *)&local_60,(uchar)local_58,(float *)0x0,SUB81(&local_64,0),
                                true,(uint)param_5);
          param_3 = *(Slot **)((Segment *)param_3 + 8);
        }
        else {
          param_3 = *(Slot **)((Segment *)param_3 + 8);
        }
      } while ((param_3 != (Slot *)0x0) && (pSVar2 != param_3));
    }
  }
  else {
    pSVar1 = *(Slot **)param_3;
    if (pSVar1 != pSVar2) {
      do {
        if (*(long *)((Segment *)pSVar2 + 0x28) == 0) {
          local_64 = (undefined4)local_60;
          local_60 = graphite2::Slot::finalise
                               ((Segment *)pSVar2,(Font *)this,(Position *)param_1,(Rect *)&local_60
                                ,(uchar)local_58,(float *)0x0,SUB81(&local_64,0),false,(uint)param_5
                               );
        }
        pSVar2 = *(Slot **)pSVar2;
      } while ((pSVar2 != (Slot *)0x0) && (pSVar1 != pSVar2));
    }
  }
  if (param_4 != bVar3) {
    reverseSlots(this);
  }
LAB_00100ee1:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_60;
}



/* graphite2::Segment::associateChars(int, unsigned long) */

void __thiscall graphite2::Segment::associateChars(Segment *this,int param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  
  uVar5 = _LC6;
  lVar2 = *(long *)(this + 0x78);
  lVar7 = (long)param_1 * 0x20 + lVar2;
  lVar10 = ((long)param_1 + param_2) * 0x20 + lVar2;
  if (lVar7 != lVar10) {
    lVar8 = lVar7;
    if (((int)lVar10 - (int)lVar7 & 0x20U) != 0) {
      *(undefined8 *)(lVar7 + 4) = _LC6;
      lVar8 = lVar7 + 0x20;
      if (lVar10 == lVar7 + 0x20) goto LAB_00100f71;
    }
    do {
      *(undefined8 *)(lVar8 + 4) = uVar5;
      lVar7 = lVar8 + 0x40;
      *(undefined8 *)(lVar8 + 0x24) = uVar5;
      lVar8 = lVar7;
    } while (lVar10 != lVar7);
  }
LAB_00100f71:
  plVar9 = *(long **)(this + 0x98);
  iVar13 = 0;
  plVar12 = plVar9;
  if (plVar9 != (long *)0x0) {
    do {
      uVar15 = *(uint *)(plVar12 + 3);
      uVar11 = (ulong)uVar15;
      if ((-1 < (int)uVar15) && (iVar1 = *(int *)((long)plVar12 + 0x1c), (int)uVar15 <= iVar1)) {
        uVar3 = *(ulong *)(this + 0xb8);
        lVar7 = uVar11 * 0x20 + lVar2;
        do {
          if (uVar3 <= uVar11) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          if ((iVar13 < *(int *)(lVar7 + 4)) || (*(int *)(lVar7 + 4) == -1)) {
            *(int *)(lVar7 + 4) = iVar13;
          }
          if (*(int *)(lVar7 + 8) < iVar13) {
            *(int *)(lVar7 + 8) = iVar13;
          }
          uVar11 = uVar11 + 1;
          lVar7 = lVar7 + 0x20;
        } while ((int)uVar11 <= iVar1);
      }
      *(int *)(plVar12 + 4) = iVar13;
      plVar12 = (long *)*plVar12;
      iVar13 = iVar13 + 1;
    } while (plVar12 != (long *)0x0);
    uVar15 = param_1 + (int)param_2;
LAB_00101000:
    do {
      uVar14 = *(uint *)((long)plVar9 + 0x1c);
      if ((int)(uVar14 + 1) < (int)uVar15) {
        uVar11 = *(ulong *)(this + 0xb8);
        uVar6 = uVar14 + 1;
        do {
          uVar14 = uVar6;
          if (uVar11 <= uVar14) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          lVar7 = (ulong)uVar14 * 0x20 + lVar2;
          if (-1 < *(int *)(lVar7 + 8)) {
            uVar14 = uVar14 - 1;
            break;
          }
          *(int *)(lVar7 + 8) = (int)plVar9[4];
          uVar6 = uVar14 + 1;
        } while (uVar15 != uVar14 + 1);
      }
      *(uint *)((long)plVar9 + 0x1c) = uVar14;
      uVar14 = *(uint *)(plVar9 + 3);
      if (param_1 <= (int)(uVar14 - 1)) {
        uVar11 = *(ulong *)(this + 0xb8);
        uVar6 = uVar14 - 1;
        do {
          uVar14 = uVar6;
          if (uVar11 <= uVar14) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          lVar7 = (ulong)uVar14 * 0x20 + lVar2;
          if (-1 < *(int *)(lVar7 + 4)) {
            *(uint *)(plVar9 + 3) = uVar14 + 1;
            plVar9 = (long *)*plVar9;
            if (plVar9 == (long *)0x0) {
              return;
            }
            goto LAB_00101000;
          }
          *(int *)(lVar7 + 4) = (int)plVar9[4];
          uVar6 = uVar14 - 1;
        } while (param_1 <= (int)(uVar14 - 1));
      }
      *(uint *)(plVar9 + 3) = uVar14;
      plVar9 = (long *)*plVar9;
    } while (plVar9 != (long *)0x0);
  }
  return;
}



/* graphite2::Segment::doMirror(unsigned short) */

void graphite2::Segment::doMirror(ushort param_1)

{
  short sVar1;
  ushort uVar2;
  long lVar3;
  Segment *pSVar4;
  undefined6 in_register_0000003a;
  long lVar5;
  
  lVar5 = CONCAT62(in_register_0000003a,param_1);
  pSVar4 = *(Segment **)(lVar5 + 0x98);
  do {
    if (pSVar4 == (Segment *)0x0) {
      return;
    }
    while ((((lVar3 = *(long *)(*(long *)(lVar5 + 0x88) + 0x78),
             *(ushort *)(lVar3 + 0x28) <= *(ushort *)(pSVar4 + 0x10) ||
             (lVar3 = graphite2::GlyphCache::glyph((ushort)lVar3), lVar3 == 0)) ||
            (uVar2 = graphite2::sparse::operator[]((short)lVar3 + 0x18), uVar2 == 0)) ||
           ((((*(byte *)(lVar5 + 0xc4) & 4) != 0 &&
             (lVar3 = *(long *)(*(long *)(lVar5 + 0x88) + 0x78),
             *(ushort *)(pSVar4 + 0x10) < *(ushort *)(lVar3 + 0x28))) &&
            ((lVar3 = graphite2::GlyphCache::glyph((ushort)lVar3), lVar3 != 0 &&
             (sVar1 = graphite2::sparse::operator[]((short)lVar3 + 0x18), sVar1 != 0))))))) {
      pSVar4 = *(Segment **)pSVar4;
      if (pSVar4 == (Segment *)0x0) {
        return;
      }
    }
    graphite2::Slot::setGlyph(pSVar4,param_1,(GlyphFace *)(ulong)uVar2);
    pSVar4 = *(Segment **)pSVar4;
  } while( true );
}



/* graphite2::Segment::initCollisions() */

undefined8 __thiscall graphite2::Segment::initCollisions(Segment *this)

{
  void *pvVar1;
  Slot *pSVar2;
  SlotCollision *this_00;
  size_t __nmemb;
  
  __nmemb = *(size_t *)(this + 0xb0);
  pvVar1 = calloc(__nmemb,0x44);
  *(void **)(this + 0x80) = pvVar1;
  if (pvVar1 != (void *)0x0) {
    pSVar2 = *(Slot **)(this + 0x98);
    if (pSVar2 == (Slot *)0x0) {
      return 1;
    }
    while (*(uint *)(pSVar2 + 0x20) < __nmemb) {
      this_00 = *(SlotCollision **)(this + 0x80);
      if (this_00 != (SlotCollision *)0x0) {
        this_00 = this_00 + (ulong)*(uint *)(pSVar2 + 0x20) * 0x44;
      }
      graphite2::SlotCollision::SlotCollision(this_00,this,pSVar2);
      pSVar2 = *(Slot **)pSVar2;
      if (pSVar2 == (Slot *)0x0) {
        return 1;
      }
      __nmemb = *(size_t *)(this + 0xb0);
    }
  }
  return 0;
}



/* graphite2::Segment::read_text(graphite2::Face const*, graphite2::FeatureVal const*, gr_encform,
   void const*, unsigned long) */

undefined8 __thiscall
graphite2::Segment::read_text
          (Segment *this,long param_1,FeatureVal *param_2,int param_4,ushort *param_5,long param_6)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *pcVar4;
  ushort uVar5;
  ushort *puVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  
  if (*(long *)(this + 0x78) != 0) {
    if (param_4 == 2) {
      Vector<graphite2::FeatureVal>::push_back
                ((Vector<graphite2::FeatureVal> *)(this + 0x50),param_2);
      lVar1 = *(long *)(this + 0x58);
      lVar2 = *(long *)(this + 0x50);
      lVar9 = 0;
      plVar3 = *(long **)(param_1 + 0x80);
      puVar6 = param_5;
      if (param_6 != 0) {
        do {
          uVar5 = *puVar6;
          uVar7 = (uint)uVar5;
          iVar8 = (int)lVar9;
          lVar10 = 2;
          if (uVar5 - 0xd800 < 0x800) {
            if ((uVar5 < 0xdc00) && (puVar6[1] - 0xdc00 < 0x400)) {
              lVar10 = 4;
              uVar7 = puVar6[1] + 0xfca02400 + (uint)uVar5 * 0x400;
            }
            else {
              lVar10 = 2;
              uVar7 = 0xfffd;
            }
          }
          pcVar4 = *(code **)(*plVar3 + 0x10);
          if ((pcVar4 == Cmap::operator[]) || (uVar5 = (*pcVar4)(plVar3), uVar5 == 0)) {
            uVar5 = graphite2::Face::findPseudo((uint)param_1);
          }
          lVar9 = lVar9 + 1;
          appendSlot(this,iVar8,uVar7,(uint)uVar5,(int)(lVar1 - lVar2 >> 5) + -1,
                     (long)puVar6 - (long)param_5 >> 1);
          puVar6 = (ushort *)((long)puVar6 + lVar10);
        } while (param_6 != lVar9);
      }
    }
    else if (param_4 == 4) {
      Vector<graphite2::FeatureVal>::push_back
                ((Vector<graphite2::FeatureVal> *)(this + 0x50),param_2);
      lVar1 = *(long *)(this + 0x58);
      lVar2 = *(long *)(this + 0x50);
      lVar9 = 0;
      plVar3 = *(long **)(param_1 + 0x80);
      if (param_6 != 0) {
        do {
          uVar7 = *(uint *)(param_5 + lVar9 * 2);
          iVar8 = (int)lVar9;
          lVar10 = lVar9 * 4;
          if (0x10ffff < uVar7) {
            uVar7 = 0xfffd;
          }
          pcVar4 = *(code **)(*plVar3 + 0x10);
          if ((pcVar4 == Cmap::operator[]) || (uVar5 = (*pcVar4)(plVar3), uVar5 == 0)) {
            uVar5 = graphite2::Face::findPseudo((uint)param_1);
          }
          lVar9 = lVar9 + 1;
          appendSlot(this,iVar8,uVar7,(uint)uVar5,(int)(lVar1 - lVar2 >> 5) + -1,lVar10 >> 2);
        } while (param_6 != lVar9);
      }
    }
    else if (param_4 == 1) {
      Vector<graphite2::FeatureVal>::push_back
                ((Vector<graphite2::FeatureVal> *)(this + 0x50),param_2);
      process_utf_data<graphite2::_utf_iterator<unsigned_char_const>>
                (this,param_1,(int)(*(long *)(this + 0x58) - *(long *)(this + 0x50) >> 5) + -1,
                 param_5,1,param_6);
    }
    return 1;
  }
  return 0;
}



/* graphite2::Cmap::operator[](unsigned int) const */

undefined8 graphite2::Cmap::operator[](uint param_1)

{
  return 0;
}



/* graphite2::Segment::newSlot() [clone .part.0] [clone .cold] */

void graphite2::Segment::newSlot(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* graphite2::Segment::newJustify() [clone .cold] */

void graphite2::Segment::newJustify(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* graphite2::Segment::associateChars(int, unsigned long) [clone .cold] */

void graphite2::Segment::associateChars(int param_1,ulong param_2)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* graphite2::Vector<graphite2::FeatureVal>::push_back(graphite2::FeatureVal const&) */

void __thiscall
graphite2::Vector<graphite2::FeatureVal>::push_back
          (Vector<graphite2::FeatureVal> *this,FeatureVal *param_1)

{
  size_t __size;
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  void *pvVar4;
  long lVar5;
  undefined1 (*pauVar6) [16];
  long lVar7;
  
  pauVar6 = *(undefined1 (**) [16])(this + 8);
  if (pauVar6 == *(undefined1 (**) [16])(this + 0x10)) {
    lVar7 = (long)pauVar6 - (long)*(void **)this;
    uVar2 = (lVar7 >> 5) + 1;
    if (uVar2 <= (ulong)(lVar7 >> 5)) goto LAB_00101532;
    if (uVar2 >> 0x3b != 0) goto LAB_00101648;
    pvVar4 = realloc(*(void **)this,uVar2 * 0x20);
    *(void **)this = pvVar4;
    if (pvVar4 == (void *)0x0) goto LAB_00101648;
    pauVar6 = (undefined1 (*) [16])((long)pvVar4 + lVar7);
    lVar7 = (long)pvVar4 + lVar7 + 0x20;
    *(long *)(this + 8) = lVar7;
    *(long *)(this + 0x10) = lVar7;
  }
  else {
LAB_00101532:
    *(undefined1 (**) [16])(this + 8) = pauVar6 + 2;
    if (pauVar6 == (undefined1 (*) [16])0x0) {
      return;
    }
  }
  lVar7 = *(long *)(param_1 + 8);
  lVar1 = *(long *)param_1;
  *(undefined8 *)pauVar6[1] = 0;
  *pauVar6 = (undefined1  [16])0x0;
  uVar2 = (lVar7 - lVar1 >> 2) + 7;
  uVar3 = uVar2 & 0xfffffffffffffff8;
  if (uVar3 == 0) {
    pvVar4 = (void *)0x0;
LAB_00101602:
    lVar5 = 0;
    *(long *)(*pauVar6 + 8) = (lVar7 - lVar1) + (long)pvVar4;
    if (lVar7 != lVar1) {
      do {
        *(undefined4 *)((long)pvVar4 + lVar5) = *(undefined4 *)(lVar1 + lVar5);
        lVar5 = lVar5 + 4;
      } while (lVar5 != lVar7 - lVar1);
    }
    *(undefined8 *)(pauVar6[1] + 8) = *(undefined8 *)(param_1 + 0x18);
    return;
  }
  __size = uVar3 * 4;
  if (uVar2 >> 0x3e == 0) {
    pvVar4 = malloc(__size);
    *(void **)*pauVar6 = pvVar4;
    if (pvVar4 != (void *)0x0) {
      *(void **)pauVar6[1] = (void *)(__size + (long)pvVar4);
      goto LAB_00101602;
    }
  }
LAB_00101648:
                    /* WARNING: Subroutine does not return */
  abort();
}



/* void process_utf_data<graphite2::_utf_iterator<unsigned char const> >(graphite2::Segment&,
   graphite2::Face const&, int, graphite2::_utf_iterator<unsigned char const>, unsigned long) */

void process_utf_data<graphite2::_utf_iterator<unsigned_char_const>>
               (Segment *param_1,long param_2,int param_3,byte *param_4,undefined8 param_5,
               long param_6)

{
  long *plVar1;
  code *pcVar2;
  bool bVar3;
  ushort uVar4;
  uint uVar5;
  byte *pbVar6;
  byte bVar7;
  byte *pbVar8;
  byte bVar9;
  uint uVar10;
  byte bVar11;
  int iVar13;
  long lVar14;
  uint uVar12;
  
  plVar1 = *(long **)(param_2 + 0x80);
  if (param_6 != 0) {
    lVar14 = 0;
    pbVar6 = param_4;
    do {
      iVar13 = (int)lVar14;
      bVar7 = *(byte *)((long)&graphite2::_utf_codec<8>::sz_lut + (ulong)(*pbVar6 >> 4));
      bVar9 = *pbVar6 & (&graphite2::_utf_codec<8>::mask_lut)[(char)bVar7];
      uVar5 = (uint)bVar9;
      uVar10 = (uint)bVar9;
      if (bVar7 == 3) {
        uVar12 = 1;
        bVar3 = false;
        pbVar8 = pbVar6;
LAB_001017cb:
        if (pbVar8[1] >> 6 == 2) {
          bVar11 = (char)uVar12 + 1;
          uVar5 = pbVar8[1] & 0x3f | uVar10 << 6;
          bVar3 = (bool)(uVar5 < 0x20 | bVar3);
          uVar5 = pbVar8[2] & 0x3f | uVar5 << 6;
          if (pbVar8[2] >> 6 == 2) {
            bVar11 = (char)uVar12 + 2;
            bVar3 = (bool)(bVar3 | uVar5 < 0x80);
          }
          if (bVar7 == bVar11) {
LAB_001016cf:
            if ((uVar5 < 0x110000) && (!bVar3)) {
              bVar7 = -bVar11;
              if (bVar11 != 0) {
                bVar7 = bVar11;
              }
              pbVar8 = pbVar6 + bVar7;
              goto LAB_00101700;
            }
          }
LAB_00101830:
          bVar7 = -bVar11;
          if (bVar11 != 0) {
            bVar7 = bVar11;
          }
          pbVar8 = pbVar6 + bVar7;
        }
        else {
          pbVar8 = pbVar6 + uVar12;
        }
LAB_001017ab:
        uVar5 = 0xfffd;
      }
      else {
        if ('\x03' < (char)bVar7) {
          pbVar8 = pbVar6 + 1;
          if (bVar7 == 4) {
            bVar11 = pbVar6[1] >> 6;
            uVar12 = (uint)bVar11;
            if (bVar11 == 2) {
              uVar10 = (uint)bVar9 << 6 | pbVar6[1] & 0x3f;
              bVar3 = uVar10 < 0x10;
              goto LAB_001017cb;
            }
          }
          goto LAB_001017ab;
        }
        if (bVar7 == 0) {
          pbVar8 = pbVar6 + 1;
          uVar5 = 0xfffd;
        }
        else {
          if (bVar7 == 2) {
            if (pbVar6[1] >> 6 == 2) {
              bVar11 = 2;
              uVar5 = (uint)bVar9 << 6 | pbVar6[1] & 0x3f;
              bVar3 = uVar5 < 0x80;
              goto LAB_001016cf;
            }
            bVar11 = 1;
            goto LAB_00101830;
          }
          pbVar8 = pbVar6 + 1;
          if (bVar7 != 1) goto LAB_001017ab;
        }
      }
LAB_00101700:
      pcVar2 = *(code **)(*plVar1 + 0x10);
      if ((pcVar2 == graphite2::Cmap::operator[]) || (uVar4 = (*pcVar2)(plVar1), uVar4 == 0)) {
        uVar4 = graphite2::Face::findPseudo((uint)param_2);
      }
      lVar14 = lVar14 + 1;
      graphite2::Segment::appendSlot
                (param_1,iVar13,uVar5,(uint)uVar4,param_3,(long)pbVar6 - (long)param_4);
      pbVar6 = pbVar8;
    } while (param_6 != lVar14);
  }
  return;
}


