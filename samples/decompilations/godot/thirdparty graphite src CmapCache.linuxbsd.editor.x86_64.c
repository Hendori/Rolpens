
/* graphite2::CachedCmap::operator bool() const */

bool __thiscall graphite2::CachedCmap::operator_cast_to_bool(CachedCmap *this)

{
  return *(long *)(this + 0x10) != 0;
}



/* graphite2::DirectCmap::operator bool() const */

bool __thiscall graphite2::DirectCmap::operator_cast_to_bool(DirectCmap *this)

{
  bool bVar1;
  
  bVar1 = false;
  if (*(long *)(this + 0x10) != 0) {
    bVar1 = *(long *)(this + 0x30) != 0;
  }
  return bVar1;
}



/* graphite2::CachedCmap::~CachedCmap() */

void __thiscall graphite2::CachedCmap::~CachedCmap(CachedCmap *this)

{
  undefined8 *puVar1;
  CachedCmap CVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(this + 0x10);
  if (lVar3 != 0) {
    CVar2 = this[8];
    lVar4 = 0;
    while( true ) {
      puVar1 = (undefined8 *)(lVar3 + lVar4);
      lVar4 = lVar4 + 8;
      free((void *)*puVar1);
      if ((ulong)(-(uint)(CVar2 == (CachedCmap)0x0) & 0x1000) * 8 + 0x800 == lVar4) break;
      lVar3 = *(long *)(this + 0x10);
    }
    free(*(void **)(this + 0x10));
    return;
  }
  return;
}



/* graphite2::DirectCmap::operator[](unsigned int) const */

undefined8 __thiscall graphite2::DirectCmap::operator[](DirectCmap *this,uint param_1)

{
  undefined8 uVar1;
  
  if (param_1 < 0x10000) {
    uVar1 = graphite2::TtfUtil::CmapSubtable4Lookup(*(void **)(this + 0x30),param_1,0);
    return uVar1;
  }
  if (*(void **)(this + 0x28) != (void *)0x0) {
    uVar1 = graphite2::TtfUtil::CmapSubtable12Lookup(*(void **)(this + 0x28),param_1,0);
    return uVar1;
  }
  return 0;
}



/* graphite2::CachedCmap::operator[](unsigned int) const */

undefined2 __thiscall graphite2::CachedCmap::operator[](CachedCmap *this,uint param_1)

{
  long lVar1;
  undefined2 uVar2;
  
  if (this[8] == (CachedCmap)0x0) {
    if (0x10ffff < param_1) {
      return 0;
    }
  }
  else if (0xffff < param_1) {
    return 0;
  }
  lVar1 = *(long *)(*(long *)(this + 0x10) + (ulong)(param_1 >> 8) * 8);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = *(undefined2 *)(lVar1 + (ulong)(byte)param_1 * 2);
  }
  return uVar2;
}



/* graphite2::CachedCmap::~CachedCmap() */

void __thiscall graphite2::CachedCmap::~CachedCmap(CachedCmap *this)

{
  undefined8 *puVar1;
  CachedCmap CVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(this + 0x10);
  if (lVar3 != 0) {
    CVar2 = this[8];
    lVar4 = 0;
    while( true ) {
      puVar1 = (undefined8 *)(lVar3 + lVar4);
      lVar4 = lVar4 + 8;
      free((void *)*puVar1);
      if ((ulong)(-(uint)(CVar2 == (CachedCmap)0x0) & 0x1000) * 8 + 0x800 == lVar4) break;
      lVar3 = *(long *)(this + 0x10);
    }
    free(*(void **)(this + 0x10));
  }
  free(this);
  return;
}



/* bmp_subtable(graphite2::Face::Table const&) */

void * bmp_subtable(Table *param_1)

{
  ulong uVar1;
  void *pvVar2;
  char cVar3;
  void *pvVar4;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  if (uVar1 == 0) {
    return (void *)0x0;
  }
  pvVar2 = *(void **)(param_1 + 8);
  pvVar4 = (void *)graphite2::TtfUtil::FindCmapSubtable(pvVar2,3,1,uVar1);
  cVar3 = graphite2::TtfUtil::CheckCmapSubtable4(pvVar4,(void *)((long)pvVar2 + uVar1));
  if (cVar3 == '\0') {
    pvVar2 = *(void **)(param_1 + 8);
    uVar1 = *(ulong *)(param_1 + 0x10);
    pvVar4 = (void *)graphite2::TtfUtil::FindCmapSubtable(pvVar2,0,3,uVar1);
    cVar3 = graphite2::TtfUtil::CheckCmapSubtable4(pvVar4,(void *)((long)pvVar2 + uVar1));
    if (cVar3 == '\0') {
      pvVar2 = *(void **)(param_1 + 8);
      uVar1 = *(ulong *)(param_1 + 0x10);
      pvVar4 = (void *)graphite2::TtfUtil::FindCmapSubtable(pvVar2,0,2,uVar1);
      cVar3 = graphite2::TtfUtil::CheckCmapSubtable4(pvVar4,(void *)((long)pvVar2 + uVar1));
      if (cVar3 == '\0') {
        pvVar2 = *(void **)(param_1 + 8);
        uVar1 = *(ulong *)(param_1 + 0x10);
        pvVar4 = (void *)graphite2::TtfUtil::FindCmapSubtable(pvVar2,0,1,uVar1);
        cVar3 = graphite2::TtfUtil::CheckCmapSubtable4(pvVar4,(void *)((long)pvVar2 + uVar1));
        if (cVar3 == '\0') {
          pvVar2 = *(void **)(param_1 + 8);
          uVar1 = *(ulong *)(param_1 + 0x10);
          pvVar4 = (void *)graphite2::TtfUtil::FindCmapSubtable(pvVar2,0,0,uVar1);
          cVar3 = graphite2::TtfUtil::CheckCmapSubtable4(pvVar4,(void *)((long)pvVar2 + uVar1));
          if (cVar3 == '\0') {
            return (void *)0x0;
          }
        }
      }
    }
  }
  return pvVar4;
}



/* smp_subtable(graphite2::Face::Table const&) */

void * smp_subtable(Table *param_1)

{
  ulong uVar1;
  void *pvVar2;
  char cVar3;
  void *pvVar4;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  if (uVar1 == 0) {
    return (void *)0x0;
  }
  pvVar2 = *(void **)(param_1 + 8);
  pvVar4 = (void *)graphite2::TtfUtil::FindCmapSubtable(pvVar2,3,10,uVar1);
  cVar3 = graphite2::TtfUtil::CheckCmapSubtable12(pvVar4,(void *)((long)pvVar2 + uVar1));
  if (cVar3 == '\0') {
    pvVar2 = *(void **)(param_1 + 8);
    uVar1 = *(ulong *)(param_1 + 0x10);
    pvVar4 = (void *)graphite2::TtfUtil::FindCmapSubtable(pvVar2,0,4,uVar1);
    cVar3 = graphite2::TtfUtil::CheckCmapSubtable12(pvVar4,(void *)((long)pvVar2 + uVar1));
    if (cVar3 == '\0') {
      return (void *)0x0;
    }
  }
  return pvVar4;
}



/* graphite2::DirectCmap::DirectCmap(graphite2::Face const&) */

void __thiscall graphite2::DirectCmap::DirectCmap(DirectCmap *this,Face *param_1)

{
  Table *pTVar1;
  undefined8 uVar2;
  
  pTVar1 = (Table *)(this + 8);
  *(undefined ***)this = &PTR__DirectCmap_00100778;
  graphite2::Face::Table::Table(pTVar1,param_1,0x636d6170,0xffffffff);
  uVar2 = smp_subtable(pTVar1);
  *(undefined8 *)(this + 0x28) = uVar2;
  uVar2 = bmp_subtable(pTVar1);
  *(undefined8 *)(this + 0x30) = uVar2;
  return;
}



/* graphite2::CachedCmap::CachedCmap(graphite2::Face const&) */

void __thiscall graphite2::CachedCmap::CachedCmap(CachedCmap *this,Face *param_1)

{
  bool bVar1;
  void *pvVar2;
  void *pvVar3;
  ushort **ppuVar4;
  long in_FS_OFFSET;
  Table aTStack_58 [8];
  long local_50;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  this[8] = (CachedCmap)0x1;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR__CachedCmap_00100748;
  graphite2::Face::Table::Table(aTStack_58,param_1,0x636d6170,0xffffffff);
  if (local_50 == 0) goto LAB_0010041d;
  pvVar2 = (void *)bmp_subtable(aTStack_58);
  pvVar3 = (void *)smp_subtable(aTStack_58);
  this[8] = (CachedCmap)(pvVar3 == (void *)0x0);
  if (pvVar3 == (void *)0x0) {
    ppuVar4 = (ushort **)calloc(0x100,8);
    *(ushort ***)(this + 0x10) = ppuVar4;
  }
  else {
    ppuVar4 = (ushort **)calloc(0x1100,8);
    *(ushort ***)(this + 0x10) = ppuVar4;
    if (ppuVar4 == (ushort **)0x0) goto LAB_0010041d;
    bVar1 = cache_subtable<&graphite2::TtfUtil::CmapSubtable12NextCodepoint,&graphite2::TtfUtil::CmapSubtable12Lookup>
                      (ppuVar4,pvVar3,0x10ffff);
    if (!bVar1) goto LAB_0010041d;
    ppuVar4 = *(ushort ***)(this + 0x10);
  }
  if ((pvVar2 != (void *)0x0) && (ppuVar4 != (ushort **)0x0)) {
    cache_subtable<&graphite2::TtfUtil::CmapSubtable4NextCodepoint,&graphite2::TtfUtil::CmapSubtable4Lookup>
              (ppuVar4,pvVar2,0xffff);
  }
LAB_0010041d:
  graphite2::Face::Table::release();
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* graphite2::DirectCmap::~DirectCmap() */

void __thiscall graphite2::DirectCmap::~DirectCmap(DirectCmap *this)

{
  *(undefined ***)this = &PTR__DirectCmap_00100778;
  graphite2::Face::Table::release();
  return;
}



/* graphite2::DirectCmap::~DirectCmap() */

void __thiscall graphite2::DirectCmap::~DirectCmap(DirectCmap *this)

{
  *(undefined ***)this = &PTR__DirectCmap_00100778;
  graphite2::Face::Table::release();
  free(this);
  return;
}



/* bool cache_subtable<&graphite2::TtfUtil::CmapSubtable12NextCodepoint,
   &graphite2::TtfUtil::CmapSubtable12Lookup>(unsigned short**, void const*, unsigned int) */

bool cache_subtable<&graphite2::TtfUtil::CmapSubtable12NextCodepoint,&graphite2::TtfUtil::CmapSubtable12Lookup>
               (ushort **param_1,void *param_2,uint param_3)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  ushort *puVar4;
  uint uVar5;
  long in_FS_OFFSET;
  bool bVar6;
  int local_44;
  long local_40;
  
  uVar5 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = 0;
  uVar3 = graphite2::TtfUtil::CmapSubtable12NextCodepoint(param_2,0,&local_44);
  do {
    if (param_3 <= uVar3) {
      bVar6 = true;
LAB_00100575:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return bVar6;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar4 = param_1[uVar3 >> 8];
    if (puVar4 == (ushort *)0x0) {
      puVar4 = (ushort *)calloc(0x100,2);
      param_1[uVar3 >> 8] = puVar4;
      if (puVar4 == (ushort *)0x0) {
        bVar6 = false;
        goto LAB_00100575;
      }
    }
    uVar2 = graphite2::TtfUtil::CmapSubtable12Lookup(param_2,uVar3,local_44);
    bVar6 = uVar3 <= uVar5;
    puVar4[(ulong)uVar3 & 0xff] = uVar2;
    uVar1 = uVar5 + 1;
    uVar5 = uVar3;
    if (bVar6) {
      uVar5 = uVar1;
    }
    uVar3 = graphite2::TtfUtil::CmapSubtable12NextCodepoint(param_2,uVar5,&local_44);
  } while( true );
}



/* bool cache_subtable<&graphite2::TtfUtil::CmapSubtable4NextCodepoint,
   &graphite2::TtfUtil::CmapSubtable4Lookup>(unsigned short**, void const*, unsigned int) */

bool cache_subtable<&graphite2::TtfUtil::CmapSubtable4NextCodepoint,&graphite2::TtfUtil::CmapSubtable4Lookup>
               (ushort **param_1,void *param_2,uint param_3)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  ushort *puVar4;
  uint uVar5;
  long in_FS_OFFSET;
  bool bVar6;
  int local_44;
  long local_40;
  
  uVar5 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = 0;
  uVar3 = graphite2::TtfUtil::CmapSubtable4NextCodepoint(param_2,0,&local_44);
  do {
    if (param_3 <= uVar3) {
      bVar6 = true;
LAB_00100665:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return bVar6;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar4 = param_1[uVar3 >> 8];
    if (puVar4 == (ushort *)0x0) {
      puVar4 = (ushort *)calloc(0x100,2);
      param_1[uVar3 >> 8] = puVar4;
      if (puVar4 == (ushort *)0x0) {
        bVar6 = false;
        goto LAB_00100665;
      }
    }
    uVar2 = graphite2::TtfUtil::CmapSubtable4Lookup(param_2,uVar3,local_44);
    bVar6 = uVar3 <= uVar5;
    puVar4[(ulong)uVar3 & 0xff] = uVar2;
    uVar1 = uVar5 + 1;
    uVar5 = uVar3;
    if (bVar6) {
      uVar5 = uVar1;
    }
    uVar3 = graphite2::TtfUtil::CmapSubtable4NextCodepoint(param_2,uVar5,&local_44);
  } while( true );
}



/* WARNING: Control flow encountered bad instruction data */
/* graphite2::DirectCmap::~DirectCmap() */

void __thiscall graphite2::DirectCmap::~DirectCmap(DirectCmap *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


