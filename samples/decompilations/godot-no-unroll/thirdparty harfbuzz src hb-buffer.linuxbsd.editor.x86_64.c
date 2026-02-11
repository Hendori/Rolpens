
bool hb_segment_properties_equal(long *param_1,long *param_2)

{
  if (((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) {
    return param_1[3] == param_2[3];
  }
  return false;
}



int hb_segment_properties_hash(int *param_1)

{
  return (*param_1 * 0x1f + param_1[1]) * 0x1f + param_1[2];
}



void hb_segment_properties_overlay(int *param_1,int *param_2)

{
  int iVar1;
  
  if ((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) {
    iVar1 = *param_1;
    if (iVar1 == 0) {
      iVar1 = *param_2;
      *param_1 = iVar1;
    }
    if (iVar1 == *param_2) {
      iVar1 = param_1[1];
      if (iVar1 == 0) {
        iVar1 = param_2[1];
        param_1[1] = iVar1;
      }
      if ((param_2[1] == iVar1) && (*(long *)(param_1 + 2) == 0)) {
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
        return;
      }
    }
  }
  return;
}



/* hb_buffer_t::enlarge(unsigned int) */

hb_buffer_t __thiscall hb_buffer_t::enlarge(hb_buffer_t *this,uint param_1)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  void *pvVar4;
  uint uVar5;
  ulong __size;
  
  if (this[0x58] == (hb_buffer_t)0x0) {
    return (hb_buffer_t)0x0;
  }
  if (*(uint *)(this + 0xc4) < param_1) {
    this[0x58] = (hb_buffer_t)0x0;
  }
  else {
    uVar5 = *(uint *)(this + 0x68);
    lVar1 = *(long *)(this + 0x78);
    lVar2 = *(long *)(this + 0x70);
    if (param_1 < 0xccccccd) {
      for (; uVar5 <= param_1; uVar5 = (uVar5 >> 1) + 0x20 + uVar5) {
      }
      if ((int)((ulong)uVar5 * 0x14 >> 0x20) == 0) {
        __size = (ulong)uVar5 * 0x14 & 0xffffffff;
        pvVar3 = realloc(*(void **)(this + 0x80),__size);
        pvVar4 = realloc(*(void **)(this + 0x70),__size);
        if ((pvVar3 != (void *)0x0) && (pvVar4 != (void *)0x0)) {
          *(void **)(this + 0x80) = pvVar3;
          if (lVar1 == lVar2) {
            pvVar3 = pvVar4;
          }
          *(void **)(this + 0x70) = pvVar4;
          *(void **)(this + 0x78) = pvVar3;
          if (this[0x58] == (hb_buffer_t)0x0) {
            return (hb_buffer_t)0x0;
          }
          *(uint *)(this + 0x68) = uVar5;
          return this[0x58];
        }
        this[0x58] = (hb_buffer_t)0x0;
        if (pvVar3 != (void *)0x0) {
          *(void **)(this + 0x80) = pvVar3;
        }
        if (pvVar4 == (void *)0x0) {
          if (lVar1 == lVar2) {
            pvVar4 = *(void **)(this + 0x70);
            goto LAB_001001d2;
          }
        }
        else {
          *(void **)(this + 0x70) = pvVar4;
          if (lVar1 == lVar2) {
LAB_001001d2:
            *(void **)(this + 0x78) = pvVar4;
            return (hb_buffer_t)0x0;
          }
        }
      }
      else {
        this[0x58] = (hb_buffer_t)0x0;
        if (lVar1 == lVar2) {
          *(long *)(this + 0x78) = lVar1;
          return (hb_buffer_t)0x0;
        }
      }
    }
    else {
      this[0x58] = (hb_buffer_t)0x0;
      if (lVar1 == lVar2) {
        return (hb_buffer_t)0x0;
      }
    }
    *(undefined8 *)(this + 0x78) = *(undefined8 *)(this + 0x80);
  }
  return (hb_buffer_t)0x0;
}



/* hb_buffer_t::make_room_for(unsigned int, unsigned int) */

undefined8 __thiscall hb_buffer_t::make_room_for(hb_buffer_t *this,uint param_1,uint param_2)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar2 = param_2 + *(int *)(this + 100);
  if (uVar2 != 0) {
    if ((*(uint *)(this + 0x68) <= uVar2) && (uVar1 = enlarge(this,uVar2), (char)uVar1 == '\0')) {
      return uVar1;
    }
    if ((*(void **)(this + 0x78) == *(void **)(this + 0x70)) &&
       (uVar2 = *(uint *)(this + 100), *(int *)(this + 0x5c) + param_1 < param_2 + uVar2)) {
      *(void **)(this + 0x78) = *(void **)(this + 0x80);
      if ((ulong)uVar2 * 5 != 0) {
        memcpy(*(void **)(this + 0x80),*(void **)(this + 0x70),(ulong)uVar2 * 0x14);
      }
    }
  }
  return 1;
}



/* hb_buffer_t::shift_forward(unsigned int) */

undefined8 __thiscall hb_buffer_t::shift_forward(hb_buffer_t *this,uint param_1)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = *(int *)(this + 0x60);
  uVar5 = iVar1 + param_1;
  if ((uVar5 != 0) && (*(uint *)(this + 0x68) <= uVar5)) {
    uVar2 = enlarge(this,uVar5);
    if ((char)uVar2 == '\0') {
      return uVar2;
    }
    iVar1 = *(int *)(this + 0x60);
  }
  uVar5 = *(uint *)(this + 0x5c);
  memmove((void *)(*(long *)(this + 0x70) + ((ulong)param_1 + (ulong)uVar5) * 0x14),
          (void *)(*(long *)(this + 0x70) + (ulong)uVar5 * 0x14),(ulong)(iVar1 - uVar5) * 0x14);
  uVar5 = *(uint *)(this + 0x60);
  uVar3 = *(int *)(this + 0x5c) + param_1;
  if (uVar5 < uVar3) {
    uVar4 = (uVar3 - uVar5) * 0x14;
    if (uVar4 != 0) {
      memset((void *)(*(long *)(this + 0x70) + (ulong)uVar5 * 0x14),0,(ulong)uVar4);
      uVar5 = *(uint *)(this + 0x60);
      uVar3 = *(int *)(this + 0x5c) + param_1;
    }
  }
  *(uint *)(this + 0x5c) = uVar3;
  *(uint *)(this + 0x60) = uVar5 + param_1;
  return 1;
}



/* hb_buffer_t::get_scratch_buffer(unsigned int*) */

undefined8 __thiscall hb_buffer_t::get_scratch_buffer(hb_buffer_t *this,uint *param_1)

{
  *(undefined4 *)(this + 100) = 0;
  *(undefined2 *)(this + 0x5a) = 0;
  *(undefined8 *)(this + 0x78) = *(undefined8 *)(this + 0x70);
  *param_1 = (uint)((ulong)*(uint *)(this + 0x68) * 5 >> 1);
  return *(undefined8 *)(this + 0x80);
}



/* hb_buffer_t::similar(hb_buffer_t const&) */

void __thiscall hb_buffer_t::similar(hb_buffer_t *this,hb_buffer_t *param_1)

{
  undefined8 uVar1;
  
  hb_unicode_funcs_destroy(*(undefined8 *)(this + 0x10));
  uVar1 = hb_unicode_funcs_reference(*(undefined8 *)(param_1 + 0x10));
  *(undefined8 *)(this + 0x10) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x20) = uVar1;
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  return;
}



/* hb_buffer_t::clear() */

void __thiscall hb_buffer_t::clear(hb_buffer_t *this)

{
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined1 (*) [16])(this + 0x40) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x78) = *(undefined8 *)(this + 0x70);
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 1;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined2 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xbc) = 1;
  *(undefined1 (*) [16])(this + 0x88) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x98) = (undefined1  [16])0x0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* hb_buffer_t::reset() */

void __thiscall hb_buffer_t::reset(hb_buffer_t *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  hb_unicode_funcs_destroy(*(undefined8 *)(this + 0x10));
  uVar2 = hb_unicode_funcs_get_default();
  uVar3 = hb_unicode_funcs_reference(uVar2);
  uVar1 = _UNK_00104358;
  uVar2 = __LC3;
  *(undefined8 *)(this + 0x10) = uVar3;
  uVar3 = _LC4;
  *(undefined8 *)(this + 0x18) = uVar2;
  *(undefined8 *)(this + 0x20) = uVar1;
  *(undefined8 *)(this + 0x28) = uVar3;
  clear(this);
  return;
}



/* hb_buffer_t::enter() */

void __thiscall hb_buffer_t::enter(hb_buffer_t *this)

{
  uint uVar1;
  uint uVar2;
  
  this[0x59] = (hb_buffer_t)0x0;
  *(undefined2 *)(this + 0xb8) = 0;
  uVar1 = *(uint *)(this + 0x60);
  *(undefined4 *)(this + 0xc0) = 0;
  uVar2 = uVar1 << 6;
  if (uVar1 >> 0x1a == 0) {
    if (uVar2 < 0x4000) {
      uVar2 = 0x4000;
    }
    *(uint *)(this + 0xc4) = uVar2;
  }
  uVar2 = uVar1 << 10;
  if (uVar1 >> 0x16 == 0) {
    if (uVar2 < 0x4000) {
      uVar2 = 0x4000;
    }
    *(uint *)(this + 200) = uVar2;
  }
  return;
}



/* hb_buffer_t::leave() */

void __thiscall hb_buffer_t::leave(hb_buffer_t *this)

{
  *(undefined8 *)(this + 0xc4) = 0x1fffffff3fffffff;
  *(undefined2 *)(this + 0xb8) = 0;
  return;
}



/* hb_buffer_t::add(unsigned int, unsigned int) */

void __thiscall hb_buffer_t::add(hb_buffer_t *this,uint param_1,uint param_2)

{
  uint *puVar1;
  char cVar2;
  ulong uVar3;
  uint uVar4;
  
  uVar3 = (ulong)*(uint *)(this + 0x60);
  uVar4 = *(uint *)(this + 0x60) + 1;
  if (uVar4 == 0) {
    uVar3 = 0xffffffff;
  }
  else if (*(uint *)(this + 0x68) <= uVar4) {
    cVar2 = enlarge(this,uVar4);
    if (cVar2 == '\0') {
      return;
    }
    uVar3 = (ulong)*(uint *)(this + 0x60);
  }
  puVar1 = (uint *)(*(long *)(this + 0x70) + uVar3 * 0x14);
  *(undefined1 (*) [16])(puVar1 + 1) = (undefined1  [16])0x0;
  *puVar1 = param_1;
  puVar1[2] = param_2;
  *(int *)(this + 0x60) = *(int *)(this + 0x60) + 1;
  return;
}



/* hb_buffer_t::add_info(hb_glyph_info_t const&) */

void __thiscall hb_buffer_t::add_info(hb_buffer_t *this,hb_glyph_info_t *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar4 = (ulong)*(uint *)(this + 0x60);
  uVar5 = *(uint *)(this + 0x60) + 1;
  if (uVar5 == 0) {
    uVar4 = 0xffffffff;
  }
  else if (*(uint *)(this + 0x68) <= uVar5) {
    cVar3 = enlarge(this,uVar5);
    if (cVar3 == '\0') {
      return;
    }
    uVar4 = (ulong)*(uint *)(this + 0x60);
  }
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = (undefined8 *)(*(long *)(this + 0x70) + uVar4 * 0x14);
  *puVar1 = *(undefined8 *)param_1;
  puVar1[1] = uVar2;
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
  *(int *)(this + 0x60) = *(int *)(this + 0x60) + 1;
  return;
}



/* hb_buffer_t::clear_output() */

void __thiscall hb_buffer_t::clear_output(hb_buffer_t *this)

{
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined2 *)(this + 0x5a) = 1;
  *(undefined4 *)(this + 100) = 0;
  *(undefined8 *)(this + 0x78) = *(undefined8 *)(this + 0x70);
  return;
}



/* hb_buffer_t::clear_positions() */

void __thiscall hb_buffer_t::clear_positions(hb_buffer_t *this)

{
  *(undefined4 *)(this + 100) = 0;
  *(undefined2 *)(this + 0x5a) = 0x100;
  *(undefined8 *)(this + 0x78) = *(undefined8 *)(this + 0x70);
  if (*(int *)(this + 0x60) * 0x14 != 0) {
    memset(*(void **)(this + 0x80),0,(ulong)(uint)(*(int *)(this + 0x60) * 0x14));
    return;
  }
  return;
}



/* hb_buffer_t::sync() */

hb_buffer_t __thiscall hb_buffer_t::sync(hb_buffer_t *this)

{
  char cVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  hb_buffer_t hVar8;
  
  hVar8 = this[0x58];
  lVar2 = *(long *)(this + 0x70);
  if (hVar8 != (hb_buffer_t)0x0) {
    iVar4 = *(int *)(this + 0x60);
    lVar3 = *(long *)(this + 0x78);
    if (this[0x5a] == (hb_buffer_t)0x0) {
      iVar7 = *(int *)(this + 100);
      lVar5 = lVar2;
    }
    else {
      uVar6 = iVar4 - *(int *)(this + 0x5c);
      if ((lVar3 != lVar2) || (iVar7 = *(int *)(this + 100), *(int *)(this + 0x5c) != iVar7)) {
        cVar1 = make_room_for(this,uVar6,uVar6);
        if (cVar1 == '\0') {
          lVar2 = *(long *)(this + 0x70);
          hVar8 = (hb_buffer_t)0x0;
          goto LAB_00100686;
        }
        memmove((void *)(*(long *)(this + 0x78) + (ulong)*(uint *)(this + 100) * 0x14),
                (void *)(*(long *)(this + 0x70) + (ulong)*(uint *)(this + 0x5c) * 0x14),
                (ulong)uVar6 * 0x14);
        iVar7 = *(int *)(this + 100);
        lVar3 = *(long *)(this + 0x78);
        lVar2 = *(long *)(this + 0x70);
        iVar4 = *(int *)(this + 0x5c) + uVar6;
      }
      iVar7 = uVar6 + iVar7;
      *(int *)(this + 100) = iVar7;
      lVar5 = lVar2;
    }
    lVar2 = lVar3;
    *(int *)(this + 0x5c) = iVar4;
    if (lVar2 != lVar5) {
      *(long *)(this + 0x80) = lVar5;
      *(long *)(this + 0x70) = lVar2;
    }
    *(int *)(this + 0x60) = iVar7;
  }
LAB_00100686:
  *(long *)(this + 0x78) = lVar2;
  this[0x5a] = (hb_buffer_t)0x0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  return hVar8;
}



/* hb_buffer_t::sync_so_far() */

int __thiscall hb_buffer_t::sync_so_far(hb_buffer_t *this)

{
  hb_buffer_t hVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  
  hVar1 = this[0x5a];
  iVar2 = *(int *)(this + 100);
  iVar5 = *(int *)(this + 0x5c);
  cVar3 = sync(this);
  iVar4 = 0;
  if (cVar3 != '\0') {
    iVar4 = iVar2 - iVar5;
    iVar5 = iVar2;
  }
  *(int *)(this + 0x5c) = iVar5;
  if (hVar1 != (hb_buffer_t)0x0) {
    this[0x5a] = (hb_buffer_t)0x1;
    *(int *)(this + 100) = iVar5;
  }
  return iVar4;
}



/* hb_buffer_t::move_to(unsigned int) */

undefined8 __thiscall hb_buffer_t::move_to(hb_buffer_t *this,uint param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  
  uVar5 = (ulong)param_1;
  if (this[0x5a] == (hb_buffer_t)0x0) {
    *(uint *)(this + 0x5c) = param_1;
  }
  else {
    if (this[0x58] == (hb_buffer_t)0x0) {
      return 0;
    }
    uVar4 = *(uint *)(this + 100);
    if (uVar4 < param_1) {
      uVar4 = param_1 - uVar4;
      cVar1 = make_room_for(this,uVar4,uVar4);
      if (cVar1 == '\0') {
        return 0;
      }
      memmove((void *)(*(long *)(this + 0x78) + (ulong)*(uint *)(this + 100) * 0x14),
              (void *)(*(long *)(this + 0x70) + (ulong)*(uint *)(this + 0x5c) * 0x14),
              (ulong)uVar4 * 0x14);
      *(uint *)(this + 0x5c) = *(int *)(this + 0x5c) + uVar4;
      *(uint *)(this + 100) = *(int *)(this + 100) + uVar4;
    }
    else if (param_1 < uVar4) {
      uVar2 = *(uint *)(this + 0x5c);
      uVar6 = uVar4 - param_1;
      if (uVar2 < uVar6) {
        cVar1 = shift_forward(this,uVar6 - uVar2);
        if (cVar1 == '\0') {
          return 0;
        }
        uVar2 = *(uint *)(this + 0x5c);
        iVar3 = param_1 - uVar4;
        uVar5 = (ulong)(uint)(iVar3 + *(int *)(this + 100));
      }
      else {
        iVar3 = param_1 - uVar4;
      }
      *(int *)(this + 100) = (int)uVar5;
      *(uint *)(this + 0x5c) = uVar2 + iVar3;
      memmove((void *)(*(long *)(this + 0x70) + (ulong)(uVar2 + iVar3) * 0x14),
              (void *)(*(long *)(this + 0x78) + uVar5 * 0x14),(ulong)uVar6 * 0x14);
      return 1;
    }
  }
  return 1;
}



/* hb_buffer_t::set_masks(unsigned int, unsigned int, unsigned int, unsigned int) */

void __thiscall
hb_buffer_t::set_masks(hb_buffer_t *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  uint *puVar2;
  
  if ((param_2 != 0) && (*(uint *)(this + 0x60) != 0)) {
    puVar2 = (uint *)(*(long *)(this + 0x70) + 4);
    puVar1 = puVar2 + (ulong)*(uint *)(this + 0x60) * 5;
    do {
      if ((puVar2[1] < param_4) && (param_3 <= puVar2[1])) {
        *puVar2 = (*puVar2 ^ param_1) & param_2 ^ *puVar2;
      }
      puVar2 = puVar2 + 5;
    } while (puVar2 != puVar1);
  }
  return;
}



/* hb_buffer_t::merge_clusters_impl(unsigned int, unsigned int) */

void __thiscall hb_buffer_t::merge_clusters_impl(hb_buffer_t *this,uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  uint *puVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  
  uVar9 = (ulong)param_2;
  if (*(int *)(this + 0x1c) == 2) {
    _set_glyph_flags(this,3,param_1,param_2,true,false);
    return;
  }
  uVar10 = param_1 + 1;
  lVar3 = *(long *)(this + 0x70);
  uVar12 = *(uint *)(lVar3 + 8 + (ulong)param_1 * 0x14);
  uVar11 = uVar12;
  if (uVar10 < param_2) {
    lVar5 = lVar3 + (ulong)uVar10 * 0x14;
    do {
      if (*(uint *)(lVar5 + 8) < uVar11) {
        uVar11 = *(uint *)(lVar5 + 8);
      }
      lVar5 = lVar5 + 0x14;
    } while (lVar5 != lVar3 + 0x14 + ((ulong)uVar10 + (ulong)((param_2 - 2) - param_1)) * 0x14);
    uVar10 = *(uint *)(lVar3 + 8 + (ulong)(param_2 - 1) * 0x14);
    if ((uVar10 != uVar11) && (uVar13 = *(uint *)(this + 0x60), param_2 < uVar13))
    goto LAB_0010096a;
  }
  else {
    uVar10 = *(uint *)(lVar3 + 8 + (ulong)(param_2 - 1) * 0x14);
    if ((uVar12 == uVar10) || (uVar13 = *(uint *)(this + 0x60), uVar13 <= param_2))
    goto LAB_00100a20;
LAB_0010096a:
    puVar8 = (uint *)(lVar3 + 8 + uVar9 * 0x14);
    do {
      param_2 = (uint)uVar9;
      uVar1 = *puVar8;
      if (uVar1 != uVar10) break;
      param_2 = param_2 + 1;
      uVar9 = (ulong)param_2;
      puVar8 = puVar8 + 5;
      uVar10 = uVar1;
    } while (param_2 != uVar13);
  }
  bVar14 = uVar12 != uVar11;
  uVar12 = uVar11;
  if (bVar14) {
    piVar6 = (int *)(lVar3 + 8 + (ulong)param_1 * 0x14);
    uVar10 = param_1;
    do {
      param_1 = uVar10;
      if (param_1 <= *(uint *)(this + 0x5c)) {
        if (param_1 == *(uint *)(this + 0x5c)) {
          lVar5 = lVar3 + (ulong)param_1 * 0x14;
          uVar10 = *(uint *)(lVar5 + 8);
          if ((uVar10 != uVar11) && (*(int *)(this + 100) != 0)) {
            lVar4 = *(long *)(this + 0x78);
            lVar7 = lVar4 + (ulong)(*(int *)(this + 100) - 1) * 0x14;
            goto LAB_00100a1b;
          }
        }
        break;
      }
      iVar2 = *piVar6;
      piVar6 = piVar6 + -5;
      uVar10 = param_1 - 1;
    } while (*(int *)(lVar3 + 8 + (ulong)(param_1 - 1) * 0x14) == iVar2);
  }
LAB_00100a20:
  if (param_1 < param_2) {
    puVar8 = (uint *)(lVar3 + 4 + (ulong)param_1 * 0x14);
    do {
      if (uVar12 != puVar8[1]) {
        *puVar8 = *puVar8 & 0xfffffff8;
      }
      puVar8[1] = uVar12;
      puVar8 = puVar8 + 5;
    } while ((uint *)(lVar3 + 0x18 + ((ulong)((param_2 - 1) - param_1) + (ulong)param_1) * 0x14) !=
             puVar8);
  }
  return;
LAB_00100a1b:
  if (*(uint *)(lVar7 + 8) != uVar10) goto LAB_00100a20;
  if (uVar10 != uVar11) {
    *(uint *)(lVar7 + 4) = *(uint *)(lVar7 + 4) & 0xfffffff8;
  }
  *(uint *)(lVar7 + 8) = uVar11;
  if (lVar4 == lVar7) goto LAB_00100a20;
  uVar10 = *(uint *)(lVar5 + 8);
  lVar7 = lVar7 + -0x14;
  goto LAB_00100a1b;
}



/* hb_buffer_t::merge_out_clusters(unsigned int, unsigned int) */

void __thiscall hb_buffer_t::merge_out_clusters(hb_buffer_t *this,uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  uint *puVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar8 = (ulong)param_2;
  if (*(int *)(this + 0x1c) == 2) {
    return;
  }
  if (param_2 - param_1 < 2) {
    return;
  }
  lVar3 = *(long *)(this + 0x78);
  uVar10 = param_1 + 1;
  uVar9 = *(uint *)(lVar3 + 8 + (ulong)param_1 * 0x14);
  if (uVar10 < param_2) {
    lVar4 = lVar3 + (ulong)uVar10 * 0x14;
    do {
      if (*(uint *)(lVar4 + 8) < uVar9) {
        uVar9 = *(uint *)(lVar4 + 8);
      }
      lVar4 = lVar4 + 0x14;
    } while (lVar4 != lVar3 + 0x14 + ((ulong)uVar10 + (ulong)((param_2 - param_1) - 2)) * 0x14);
  }
  piVar5 = (int *)(lVar3 + 8 + (ulong)param_1 * 0x14);
  do {
    uVar10 = param_1;
    if (uVar10 == 0) break;
    iVar1 = *piVar5;
    piVar5 = piVar5 + -5;
    param_1 = uVar10 - 1;
  } while (*(int *)(lVar3 + 8 + (ulong)(uVar10 - 1) * 0x14) == iVar1);
  uVar2 = *(uint *)(this + 100);
  if (param_2 < uVar2) {
    piVar5 = (int *)(lVar3 + 8 + uVar8 * 0x14);
    do {
      param_2 = (uint)uVar8;
      if (*(int *)(lVar3 + 8 + (ulong)(param_2 - 1) * 0x14) != *piVar5) goto LAB_00100b6d;
      uVar8 = (ulong)(param_2 + 1);
      piVar5 = piVar5 + 5;
    } while (uVar2 != param_2 + 1);
  }
  else {
LAB_00100b6d:
    if (uVar2 != param_2) goto LAB_00100b72;
  }
  uVar7 = *(uint *)(this + 0x5c);
  param_2 = uVar2;
  if (uVar7 < *(uint *)(this + 0x60)) {
    puVar6 = (uint *)(*(long *)(this + 0x70) + 4 + (ulong)uVar7 * 0x14);
    do {
      if (puVar6[1] != *(uint *)(lVar3 + (ulong)(uVar2 - 1) * 0x14 + 8)) break;
      if (uVar9 != puVar6[1]) {
        *puVar6 = *puVar6 & 0xfffffff8;
      }
      puVar6[1] = uVar9;
      uVar7 = uVar7 + 1;
      puVar6 = puVar6 + 5;
    } while (uVar7 < *(uint *)(this + 0x60));
  }
LAB_00100b72:
  if (param_2 <= uVar10) {
    return;
  }
  puVar6 = (uint *)(lVar3 + 4 + (ulong)uVar10 * 0x14);
  do {
    if (uVar9 != puVar6[1]) {
      *puVar6 = *puVar6 & 0xfffffff8;
    }
    puVar6[1] = uVar9;
    puVar6 = puVar6 + 5;
  } while ((uint *)(lVar3 + 0x18 + ((ulong)((param_2 - uVar10) - 1) + (ulong)uVar10) * 0x14) !=
           puVar6);
  return;
}



/* hb_buffer_t::delete_glyph() */

void __thiscall hb_buffer_t::delete_glyph(hb_buffer_t *this)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  bool bVar8;
  
  uVar2 = *(uint *)(this + 0x5c);
  lVar1 = *(long *)(this + 0x70) + (ulong)uVar2 * 0x14;
  uVar5 = uVar2 + 1;
  uVar3 = *(uint *)(lVar1 + 8);
  if (uVar5 < *(uint *)(this + 0x60)) {
    if (*(uint *)(*(long *)(this + 0x70) + 8 + (ulong)uVar5 * 0x14) == uVar3) goto LAB_00100ca0;
    iVar6 = *(int *)(this + 100);
    if (iVar6 == 0) {
      merge_clusters_impl(this,uVar2,uVar2 + 2);
      uVar5 = *(int *)(this + 0x5c) + 1;
      goto LAB_00100ca0;
    }
  }
  else {
    iVar6 = *(int *)(this + 100);
    if (iVar6 == 0) {
      *(uint *)(this + 0x5c) = uVar5;
      return;
    }
  }
  lVar4 = *(long *)(this + 0x78);
  lVar7 = lVar4 + (ulong)(iVar6 - 1) * 0x14;
  uVar2 = *(uint *)(lVar7 + 8);
  if ((uVar2 != uVar3) && (uVar3 < uVar2)) {
    uVar5 = *(uint *)(lVar1 + 4);
    do {
      if (uVar2 != *(uint *)(lVar7 + 8)) break;
      *(ulong *)(lVar7 + 4) = CONCAT44(uVar3,*(uint *)(lVar7 + 4) & 0xfffffff8 | uVar5 & 7);
      bVar8 = lVar7 != lVar4;
      lVar7 = lVar7 + -0x14;
    } while (bVar8);
    uVar5 = *(int *)(this + 0x5c) + 1;
  }
LAB_00100ca0:
  *(uint *)(this + 0x5c) = uVar5;
  return;
}



/* hb_buffer_t::delete_glyphs_inplace(bool (*)(hb_glyph_info_t const*)) */

void __thiscall
hb_buffer_t::delete_glyphs_inplace(hb_buffer_t *this,_func_bool_hb_glyph_info_t_ptr *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  bool bVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  
  uVar4 = *(uint *)(this + 0x60);
  if (uVar4 == 0) {
LAB_00100e40:
    uVar13 = 0;
LAB_00100e43:
    *(uint *)(this + 0x60) = uVar13;
    return;
  }
  lVar9 = *(long *)(this + 0x70);
  lVar11 = 0;
  uVar14 = 0;
  uVar12 = 0;
  do {
    uVar3 = uVar12 + 1;
    bVar8 = (*param_1)((hb_glyph_info_t *)(lVar9 + lVar11));
    uVar13 = (uint)uVar14;
    if (bVar8) {
      lVar9 = *(long *)(this + 0x70);
      uVar5 = *(uint *)(lVar9 + lVar11 + 8);
      if (uVar4 <= uVar3) {
        if (uVar13 == 0) goto LAB_00100e40;
        uVar10 = (ulong)(uVar13 - 1);
        uVar12 = *(uint *)(lVar9 + 8 + (ulong)(uVar13 - 1) * 0x14);
        if (uVar5 < uVar12) {
LAB_00100dd7:
          uVar13 = *(uint *)(lVar9 + lVar11 + 4);
          lVar2 = lVar9 + uVar10 * 0x14;
          uVar6 = *(uint *)(lVar2 + 8);
          while (uVar6 == uVar12) {
            *(ulong *)(lVar2 + 4) = CONCAT44(uVar5,*(uint *)(lVar2 + 4) & 0xfffffff8 | uVar13 & 7);
            if (lVar9 == lVar2) break;
            uVar6 = *(uint *)(lVar2 + -0xc);
            lVar2 = lVar2 + -0x14;
          }
          goto LAB_00100dac;
        }
        goto LAB_00100e43;
      }
      if (*(uint *)(lVar9 + 0x1c + lVar11) != uVar5) {
        if (uVar13 == 0) {
          merge_clusters_impl(this,uVar12,uVar12 + 2);
          lVar9 = *(long *)(this + 0x70);
        }
        else {
          uVar10 = (ulong)(uVar13 - 1);
          uVar12 = *(uint *)(lVar9 + 8 + uVar10 * 0x14);
          if (uVar5 < uVar12) goto LAB_00100dd7;
        }
      }
    }
    else {
      if (uVar13 != uVar12) {
        lVar9 = *(long *)(this + 0x70);
        uVar7 = ((undefined8 *)(lVar9 + lVar11))[1];
        puVar1 = (undefined8 *)(lVar9 + uVar14 * 0x14);
        *puVar1 = *(undefined8 *)(lVar9 + lVar11);
        puVar1[1] = uVar7;
        *(undefined4 *)(lVar9 + 0x10 + uVar14 * 0x14) = *(undefined4 *)(lVar9 + 0x10 + lVar11);
        lVar9 = *(long *)(this + 0x80);
        uVar7 = ((undefined8 *)(lVar9 + lVar11))[1];
        puVar1 = (undefined8 *)(lVar9 + uVar14 * 0x14);
        *puVar1 = *(undefined8 *)(lVar9 + lVar11);
        puVar1[1] = uVar7;
        *(undefined4 *)(lVar9 + 0x10 + uVar14 * 0x14) = *(undefined4 *)(lVar9 + 0x10 + lVar11);
      }
      uVar14 = (ulong)(uVar13 + 1);
LAB_00100dac:
      uVar13 = (uint)uVar14;
      if (uVar4 == uVar3) goto LAB_00100e43;
      lVar9 = *(long *)(this + 0x70);
    }
    lVar11 = lVar11 + 0x14;
    uVar12 = uVar3;
  } while( true );
}



/* hb_buffer_t::guess_segment_properties() */

void __thiscall hb_buffer_t::guess_segment_properties(hb_buffer_t *this)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((*(int *)(this + 0x3c) == 0) && (*(int *)(this + 0x60) != 0)) {
    lVar4 = 0;
    do {
      lVar1 = *(long *)(this + 0x10);
      iVar2 = (**(code **)(lVar1 + 0x38))
                        (lVar1,*(undefined4 *)(*(long *)(this + 0x70) + lVar4 * 0x14),
                         *(undefined8 *)(lVar1 + 0x78));
      if ((iVar2 != 0x5a797979 && iVar2 != 0x5a696e68) && (iVar2 != 0x5a7a7a7a)) {
        *(int *)(this + 0x3c) = iVar2;
        break;
      }
      lVar4 = lVar4 + 1;
    } while ((uint)lVar4 < *(uint *)(this + 0x60));
  }
  if (*(int *)(this + 0x38) == 0) {
    iVar2 = hb_script_get_horizontal_direction(*(undefined4 *)(this + 0x3c));
    if (iVar2 == 0) {
      iVar2 = 4;
    }
    lVar4 = *(long *)(this + 0x40);
    *(int *)(this + 0x38) = iVar2;
  }
  else {
    lVar4 = *(long *)(this + 0x40);
  }
  if (lVar4 == 0) {
    uVar3 = hb_language_get_default();
    *(undefined8 *)(this + 0x40) = uVar3;
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

hb_buffer_t * hb_buffer_create(void)

{
  undefined8 uVar1;
  hb_buffer_t *this;
  undefined8 uVar2;
  undefined8 uVar3;
  hb_buffer_t *phVar4;
  
  this = (hb_buffer_t *)calloc(1,0xf0);
  phVar4 = (hb_buffer_t *)_hb_Null_hb_buffer_t;
  if (this != (hb_buffer_t *)0x0) {
    *(undefined4 *)this = 1;
    *(undefined4 *)(this + 4) = 1;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0xc4) = 0x1fffffff3fffffff;
    hb_unicode_funcs_destroy(*(undefined8 *)(this + 0x10));
    uVar2 = hb_unicode_funcs_get_default();
    uVar3 = hb_unicode_funcs_reference(uVar2);
    uVar1 = _UNK_00104358;
    uVar2 = __LC3;
    *(undefined8 *)(this + 0x10) = uVar3;
    uVar3 = _LC4;
    *(undefined8 *)(this + 0x18) = uVar2;
    *(undefined8 *)(this + 0x20) = uVar1;
    *(undefined8 *)(this + 0x28) = uVar3;
    hb_buffer_t::clear(this);
    phVar4 = this;
  }
  return phVar4;
}



long hb_buffer_create_similar(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = hb_buffer_create();
  hb_unicode_funcs_destroy(*(undefined8 *)(lVar1 + 0x10));
  uVar2 = hb_unicode_funcs_reference(*(undefined8 *)(param_1 + 0x10));
  *(undefined8 *)(lVar1 + 0x10) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(param_1 + 0x28);
  return lVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void hb_buffer_reset(hb_buffer_t *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(int *)(param_1 + 4) != 0) {
    hb_unicode_funcs_destroy(*(undefined8 *)(param_1 + 0x10));
    uVar2 = hb_unicode_funcs_get_default();
    uVar3 = hb_unicode_funcs_reference(uVar2);
    uVar1 = _UNK_00104358;
    uVar2 = __LC3;
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    uVar3 = _LC4;
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    *(undefined8 *)(param_1 + 0x20) = uVar1;
    *(undefined8 *)(param_1 + 0x28) = uVar3;
    hb_buffer_t::clear(param_1);
    return;
  }
  return;
}



undefined1 * hb_buffer_get_empty(void)

{
  return _hb_Null_hb_buffer_t;
}



int * hb_buffer_reference(int *param_1)

{
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    LOCK();
    *param_1 = *param_1 + 1;
    UNLOCK();
  }
  return param_1;
}



void hb_buffer_destroy(int *param_1)

{
  long lVar1;
  int iVar2;
  pthread_mutex_t *__mutex;
  code *pcVar3;
  undefined8 uVar4;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  if (*param_1 != 0) {
    LOCK();
    *param_1 = *param_1 + -1;
    UNLOCK();
    if (*param_1 == 0) {
      *param_1 = -0xdead;
      __mutex = *(pthread_mutex_t **)(param_1 + 2);
      if (__mutex != (pthread_mutex_t *)0x0) {
        if (*(int *)((long)__mutex + 0x2c) != 0) {
          do {
            pthread_mutex_lock(__mutex);
            iVar2 = *(int *)((long)__mutex + 0x2c);
            while( true ) {
              if (iVar2 == 0) {
                if (__mutex[1].__data.__lock != 0) {
                  free(*(void **)((long)__mutex + 0x30));
                }
                __mutex[1].__align = 0;
                *(undefined8 *)((long)__mutex + 0x30) = 0;
                pthread_mutex_unlock(__mutex);
                goto LAB_00101190;
              }
              lVar1 = *(long *)((long)__mutex + 0x30) + (ulong)(iVar2 - 1U) * 0x18;
              pcVar3 = *(code **)(lVar1 + 0x10);
              uVar4 = *(undefined8 *)(lVar1 + 8);
              *(uint *)((long)__mutex + 0x2c) = iVar2 - 1U;
              pthread_mutex_unlock(__mutex);
              if (pcVar3 == (code *)0x0) break;
              (*pcVar3)(uVar4);
              pthread_mutex_lock(__mutex);
              iVar2 = *(int *)((long)__mutex + 0x2c);
            }
          } while( true );
        }
        if (__mutex[1].__data.__lock != 0) {
          free(*(void **)((long)__mutex + 0x30));
        }
        __mutex[1].__align = 0;
        *(undefined8 *)((long)__mutex + 0x30) = 0;
LAB_00101190:
        pthread_mutex_destroy(__mutex);
        free(__mutex);
        param_1[2] = 0;
        param_1[3] = 0;
      }
      hb_unicode_funcs_destroy(*(undefined8 *)(param_1 + 4));
      free(*(void **)(param_1 + 0x1c));
      free(*(void **)(param_1 + 0x20));
      if (*(code **)(param_1 + 0x38) != (code *)0x0) {
        (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x36));
      }
      free(param_1);
      return;
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool hb_buffer_set_user_data(int *param_1,long param_2,long param_3,long param_4,int param_5)

{
  uint uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  uint uVar5;
  pthread_mutex_t *__mutex;
  long *plVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    return false;
  }
  plVar6 = (long *)(param_1 + 2);
  while (__mutex = (pthread_mutex_t *)*plVar6, __mutex == (pthread_mutex_t *)0x0) {
    __mutex = (pthread_mutex_t *)calloc(1,0x38);
    if (__mutex == (pthread_mutex_t *)0x0) {
      return false;
    }
    pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
    __mutex[1].__align = 0;
    *(undefined8 *)((long)__mutex + 0x30) = 0;
    LOCK();
    lVar2 = *plVar6;
    if (lVar2 == 0) {
      *plVar6 = (long)__mutex;
    }
    UNLOCK();
    if (lVar2 == 0) break;
    if (*(int *)((long)__mutex + 0x2c) == 0) {
      if (__mutex[1].__data.__lock != 0) {
        free(*(void **)((long)__mutex + 0x30));
      }
      __mutex[1].__align = 0;
      *(undefined8 *)((long)__mutex + 0x30) = 0;
    }
    else {
      while( true ) {
        pthread_mutex_lock(__mutex);
        if (*(int *)((long)__mutex + 0x2c) == 0) break;
        uVar8 = *(int *)((long)__mutex + 0x2c) - 1;
        lVar2 = *(long *)((long)__mutex + 0x30) + (ulong)uVar8 * 0x18;
        uVar11 = *(undefined8 *)(lVar2 + 8);
        pcVar3 = *(code **)(lVar2 + 0x10);
        *(uint *)((long)__mutex + 0x2c) = uVar8;
        pthread_mutex_unlock(__mutex);
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)(uVar11);
        }
      }
      if (__mutex[1].__data.__lock != 0) {
        free(*(void **)((long)__mutex + 0x30));
      }
      __mutex[1].__align = 0;
      *(undefined8 *)((long)__mutex + 0x30) = 0;
      pthread_mutex_unlock(__mutex);
    }
    pthread_mutex_destroy(__mutex);
    free(__mutex);
  }
  if (param_2 == 0) {
    return false;
  }
  if ((param_5 != 0) && (param_3 == 0 && param_4 == 0)) {
    pthread_mutex_lock(__mutex);
    uVar8 = *(uint *)((long)__mutex + 0x2c);
    plVar6 = *(long **)((long)__mutex + 0x30);
    if (uVar8 != 0) {
      uVar5 = 0;
      plVar10 = plVar6;
      do {
        if (param_2 == *plVar10) {
          plVar10 = plVar6 + (ulong)uVar5 * 3;
          if (plVar10 != (long *)0x0) {
            lVar2 = plVar10[1];
            pcVar3 = (code *)plVar10[2];
            plVar6 = plVar6 + (ulong)(uVar8 - 1) * 3;
            lVar4 = plVar6[1];
            *plVar10 = *plVar6;
            plVar10[1] = lVar4;
            plVar10[2] = plVar6[2];
            *(uint *)((long)__mutex + 0x2c) = uVar8 - 1;
            pthread_mutex_unlock(__mutex);
            if (pcVar3 == (code *)0x0) {
              return true;
            }
            (*pcVar3)(lVar2);
            return true;
          }
          break;
        }
        uVar5 = uVar5 + 1;
        plVar10 = plVar10 + 3;
      } while (uVar8 != uVar5);
    }
    pthread_mutex_unlock(__mutex);
    return true;
  }
  pthread_mutex_lock(__mutex);
  uVar8 = *(uint *)((long)__mutex + 0x2c);
  uVar7 = (ulong)uVar8;
  plVar6 = *(long **)((long)__mutex + 0x30);
  if (uVar8 == 0) {
    uVar5 = 1;
    if (__mutex[1].__data.__lock < 1) {
      if (__mutex[1].__data.__lock != 0) goto LAB_00101518;
      uVar9 = 8;
LAB_001014ac:
      plVar6 = (long *)realloc(plVar6,uVar9 * 0x18);
      if (plVar6 == (long *)0x0) {
        if ((uint)__mutex[1].__data.__lock < (uint)uVar9) {
          __mutex[1].__data.__lock = ~__mutex[1].__data.__lock;
          goto LAB_00101518;
        }
        uVar7 = (ulong)*(uint *)((long)__mutex + 0x2c);
        plVar6 = *(long **)((long)__mutex + 0x30);
        uVar5 = *(uint *)((long)__mutex + 0x2c) + 1;
      }
      else {
        uVar5 = *(uint *)((long)__mutex + 0x2c);
        uVar7 = (ulong)uVar5;
        *(long **)((long)__mutex + 0x30) = plVar6;
        __mutex[1].__data.__lock = (uint)uVar9;
        uVar5 = uVar5 + 1;
      }
    }
  }
  else {
    uVar5 = 0;
    plVar10 = plVar6;
    do {
      if (param_2 == *plVar10) {
        plVar10 = plVar6 + (ulong)uVar5 * 3;
        if (plVar10 != (long *)0x0) {
          if (param_5 == 0) {
            plVar10 = (long *)0x0;
            pthread_mutex_unlock(__mutex);
          }
          else {
            lVar2 = plVar10[1];
            pcVar3 = (code *)plVar10[2];
            *plVar10 = param_2;
            plVar10[1] = param_3;
            plVar10[2] = param_4;
            pthread_mutex_unlock(__mutex);
            if (pcVar3 != (code *)0x0) {
              (*pcVar3)(lVar2);
            }
          }
          goto LAB_001012c5;
        }
        break;
      }
      uVar5 = uVar5 + 1;
      plVar10 = plVar10 + 3;
    } while (uVar8 != uVar5);
    uVar1 = __mutex[1].__data.__lock;
    uVar5 = uVar8 + 1;
    if ((int)uVar1 <= (int)uVar8) {
      if (-1 < (int)uVar1) {
        uVar9 = (ulong)uVar1;
        if (uVar5 <= uVar1) goto LAB_00101473;
        do {
          uVar8 = (int)(uVar9 >> 1) + 8 + (int)uVar9;
          uVar9 = (ulong)uVar8;
        } while (uVar8 < uVar5);
        if (uVar8 < 0xaaaaaab) goto LAB_001014ac;
        __mutex[1].__data.__lock = ~uVar1;
      }
LAB_00101518:
      uVar11 = __hb_CrapPool;
      ___vsnprintf_chk = _strlen;
      plVar10 = (long *)&_hb_CrapPool;
      __hb_CrapPool = __hb_NullPool;
      _strlen = uVar11;
      goto LAB_0010148a;
    }
  }
LAB_00101473:
  *(uint *)((long)__mutex + 0x2c) = uVar5;
  plVar10 = plVar6 + uVar7 * 3;
  *plVar10 = param_2;
  plVar10[1] = param_3;
  plVar10[2] = param_4;
LAB_0010148a:
  pthread_mutex_unlock(__mutex);
LAB_001012c5:
  return -1 < __mutex[1].__data.__lock && plVar10 != (long *)0x0;
}



long hb_buffer_get_user_data(int *param_1,long param_2)

{
  pthread_mutex_t *__mutex;
  long lVar1;
  uint uVar2;
  long *plVar3;
  
  if (((param_1 != (int *)0x0) && (*param_1 != 0)) &&
     (__mutex = *(pthread_mutex_t **)(param_1 + 2), __mutex != (pthread_mutex_t *)0x0)) {
    pthread_mutex_lock(__mutex);
    if (*(uint *)((long)__mutex + 0x2c) != 0) {
      uVar2 = 0;
      plVar3 = *(long **)((long)__mutex + 0x30);
      do {
        if (param_2 == *plVar3) {
          plVar3 = *(long **)((long)__mutex + 0x30) + (ulong)uVar2 * 3;
          if (plVar3 != (long *)0x0) {
            lVar1 = plVar3[1];
            pthread_mutex_unlock(__mutex);
            return lVar1;
          }
          break;
        }
        uVar2 = uVar2 + 1;
        plVar3 = plVar3 + 3;
      } while (*(uint *)((long)__mutex + 0x2c) != uVar2);
    }
    pthread_mutex_unlock(__mutex);
  }
  return 0;
}



void hb_buffer_set_content_type(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x30) = param_2;
  return;
}



undefined4 hb_buffer_get_content_type(long param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}



void hb_buffer_set_unicode_funcs(long param_1,long param_2)

{
  if (*(int *)(param_1 + 4) != 0) {
    if (param_2 == 0) {
      param_2 = hb_unicode_funcs_get_default();
    }
    hb_unicode_funcs_reference(param_2);
    hb_unicode_funcs_destroy(*(undefined8 *)(param_1 + 0x10));
    *(long *)(param_1 + 0x10) = param_2;
    return;
  }
  return;
}



undefined8 hb_buffer_get_unicode_funcs(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



void hb_buffer_set_direction(long param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0x38) = param_2;
  }
  return;
}



undefined4 hb_buffer_get_direction(long param_1)

{
  return *(undefined4 *)(param_1 + 0x38);
}



void hb_buffer_set_script(long param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0x3c) = param_2;
  }
  return;
}



undefined4 hb_buffer_get_script(long param_1)

{
  return *(undefined4 *)(param_1 + 0x3c);
}



void hb_buffer_set_language(long param_1,undefined8 param_2)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined8 *)(param_1 + 0x40) = param_2;
  }
  return;
}



undefined8 hb_buffer_get_language(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



void hb_buffer_set_segment_properties(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    uVar1 = param_2[1];
    *(undefined8 *)(param_1 + 0x38) = *param_2;
    *(undefined8 *)(param_1 + 0x40) = uVar1;
    uVar1 = param_2[3];
    *(undefined8 *)(param_1 + 0x48) = param_2[2];
    *(undefined8 *)(param_1 + 0x50) = uVar1;
  }
  return;
}



void hb_buffer_get_segment_properties(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *param_2 = *(undefined8 *)(param_1 + 0x38);
  param_2[1] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  param_2[2] = *(undefined8 *)(param_1 + 0x48);
  param_2[3] = uVar1;
  return;
}



void hb_buffer_set_flags(long param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0x18) = param_2;
  }
  return;
}



undefined4 hb_buffer_get_flags(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



void hb_buffer_set_cluster_level(long param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0x1c) = param_2;
  }
  return;
}



undefined4 hb_buffer_get_cluster_level(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}



void hb_buffer_set_replacement_codepoint(long param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0x20) = param_2;
  }
  return;
}



undefined4 hb_buffer_get_replacement_codepoint(long param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



void hb_buffer_set_invisible_glyph(long param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0x24) = param_2;
  }
  return;
}



undefined4 hb_buffer_get_invisible_glyph(long param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}



void hb_buffer_set_not_found_glyph(long param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0x28) = param_2;
  }
  return;
}



undefined4 hb_buffer_get_not_found_glyph(long param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}



void hb_buffer_set_not_found_variation_selector_glyph(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  return;
}



undefined4 hb_buffer_get_not_found_variation_selector_glyph(long param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}



void hb_buffer_set_random_state(long param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xbc) = param_2;
  }
  return;
}



undefined4 hb_buffer_get_random_state(long param_1)

{
  return *(undefined4 *)(param_1 + 0xbc);
}



void hb_buffer_clear_contents(hb_buffer_t *param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    hb_buffer_t::clear(param_1);
    return;
  }
  return;
}



undefined1 hb_buffer_pre_allocate(hb_buffer_t *param_1,uint param_2)

{
  undefined1 uVar1;
  
  if ((param_2 != 0) && (*(uint *)(param_1 + 0x68) <= param_2)) {
    uVar1 = hb_buffer_t::enlarge(param_1,param_2);
    return uVar1;
  }
  return 1;
}



undefined1 hb_buffer_allocation_successful(long param_1)

{
  return *(undefined1 *)(param_1 + 0x58);
}



void hb_buffer_add(hb_buffer_t *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  char cVar2;
  ulong uVar3;
  uint uVar4;
  
  uVar3 = (ulong)*(uint *)(param_1 + 0x60);
  uVar4 = *(uint *)(param_1 + 0x60) + 1;
  if (uVar4 == 0) {
    uVar3 = 0xffffffff;
  }
  else if (*(uint *)(param_1 + 0x68) <= uVar4) {
    cVar2 = hb_buffer_t::enlarge(param_1,uVar4);
    if (cVar2 == '\0') goto LAB_00101937;
    uVar3 = (ulong)*(uint *)(param_1 + 0x60);
  }
  puVar1 = (undefined4 *)(*(long *)(param_1 + 0x70) + uVar3 * 0x14);
  *(undefined1 (*) [16])(puVar1 + 1) = (undefined1  [16])0x0;
  *puVar1 = param_2;
  puVar1[2] = param_3;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
LAB_00101937:
  *(undefined4 *)(param_1 + 0xb4) = 0;
  return;
}



bool hb_buffer_set_length(hb_buffer_t *param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 4) == 0) {
    return param_2 == 0;
  }
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0xb0) = 0;
  }
  else {
    if ((*(uint *)(param_1 + 0x68) <= param_2) &&
       (cVar1 = hb_buffer_t::enlarge(param_1,param_2), cVar1 == '\0')) {
      return false;
    }
    uVar3 = *(uint *)(param_1 + 0x60);
    if (uVar3 < param_2) {
      uVar2 = (param_2 - uVar3) * 0x14;
      if (uVar2 != 0) {
        memset((void *)(*(long *)(param_1 + 0x70) + (ulong)uVar3 * 0x14),0,(ulong)uVar2);
      }
      if (param_1[0x5b] != (hb_buffer_t)0x0) {
        uVar3 = (param_2 - *(uint *)(param_1 + 0x60)) * 0x14;
        if (uVar3 != 0) {
          memset((void *)(*(long *)(param_1 + 0x80) + (ulong)*(uint *)(param_1 + 0x60) * 0x14),0,
                 (ulong)uVar3);
        }
      }
    }
    *(uint *)(param_1 + 0x60) = param_2;
  }
  *(undefined4 *)(param_1 + 0xb4) = 0;
  return true;
}



undefined4 hb_buffer_get_length(long param_1)

{
  return *(undefined4 *)(param_1 + 0x60);
}



undefined8 hb_buffer_get_glyph_infos(long param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x60);
  }
  return *(undefined8 *)(param_1 + 0x70);
}



undefined8 hb_buffer_get_glyph_positions(hb_buffer_t *param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x60);
  }
  if (param_1[0x5b] == (hb_buffer_t)0x0) {
    if (*(int *)(param_1 + 0xe8) != 0) {
      return 0;
    }
    hb_buffer_t::clear_positions(param_1);
  }
  return *(undefined8 *)(param_1 + 0x80);
}



undefined1 hb_buffer_has_positions(long param_1)

{
  return *(undefined1 *)(param_1 + 0x5b);
}



uint hb_glyph_info_get_glyph_flags(long param_1)

{
  return *(uint *)(param_1 + 4) & 7;
}



void hb_buffer_reverse(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int iVar8;
  uint uVar9;
  undefined8 *puVar11;
  long in_FS_OFFSET;
  ulong uVar10;
  
  uVar1 = *(uint *)(param_1 + 0x60);
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  if (1 < uVar1) {
    uVar10 = (ulong)(uVar1 - 1);
    puVar7 = *(undefined8 **)(param_1 + 0x70);
    puVar11 = (undefined8 *)((long)*(undefined8 **)(param_1 + 0x70) + uVar10 * 0x14);
    do {
      uVar4 = puVar7[1];
      uVar2 = *(undefined4 *)(puVar11 + 2);
      uVar5 = *puVar11;
      uVar6 = puVar11[1];
      *puVar11 = *puVar7;
      puVar11[1] = uVar4;
      *(undefined4 *)(puVar11 + 2) = *(undefined4 *)(puVar7 + 2);
      iVar8 = (int)uVar10;
      uVar9 = iVar8 - 1;
      uVar10 = (ulong)uVar9;
      *(undefined4 *)(puVar7 + 2) = uVar2;
      *puVar7 = uVar5;
      puVar7[1] = uVar6;
      puVar7 = (undefined8 *)((long)puVar7 + 0x14);
      puVar11 = (undefined8 *)((long)puVar11 + -0x14);
    } while (uVar1 - iVar8 < uVar9);
    if (*(char *)(param_1 + 0x5b) != '\0') {
      if (*(uint *)(param_1 + 0x60) < uVar1) {
        uVar1 = *(uint *)(param_1 + 0x60);
      }
      if (1 < uVar1) {
        uVar9 = 0;
        puVar7 = *(undefined8 **)(param_1 + 0x80);
        puVar11 = (undefined8 *)((long)*(undefined8 **)(param_1 + 0x80) + (ulong)(uVar1 - 1) * 0x14)
        ;
        do {
          uVar4 = puVar7[1];
          uVar2 = *(undefined4 *)(puVar11 + 2);
          uVar9 = uVar9 + 1;
          uVar5 = *puVar11;
          uVar6 = puVar11[1];
          *puVar11 = *puVar7;
          puVar11[1] = uVar4;
          *(undefined4 *)(puVar11 + 2) = *(undefined4 *)(puVar7 + 2);
          *(undefined4 *)(puVar7 + 2) = uVar2;
          *puVar7 = uVar5;
          puVar7[1] = uVar6;
          puVar7 = (undefined8 *)((long)puVar7 + 0x14);
          puVar11 = (undefined8 *)((long)puVar11 + -0x14);
        } while (uVar9 < (uVar1 - 1) - uVar9);
      }
    }
  }
  if (lVar3 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void hb_buffer_reverse_range(long param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  undefined8 *puVar12;
  uint uVar13;
  ulong uVar14;
  long in_FS_OFFSET;
  
  uVar9 = (ulong)param_2;
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = *(uint *)(param_1 + 0x60);
  uVar14 = (ulong)uVar6;
  if (param_2 <= uVar6) {
    uVar14 = (ulong)param_2;
  }
  if (param_3 <= uVar6) {
    uVar6 = param_3;
  }
  uVar7 = (uint)uVar14;
  if ((uVar7 + 2 <= uVar6) && (uVar10 = uVar6 - 1, uVar7 < uVar10)) {
    puVar8 = (undefined8 *)(*(long *)(param_1 + 0x70) + uVar14 * 0x14);
    puVar12 = (undefined8 *)(*(long *)(param_1 + 0x70) + (ulong)uVar10 * 0x14);
    do {
      uVar3 = puVar8[1];
      uVar1 = *(undefined4 *)(puVar12 + 2);
      uVar4 = *puVar12;
      uVar5 = puVar12[1];
      *puVar12 = *puVar8;
      puVar12[1] = uVar3;
      *(undefined4 *)(puVar12 + 2) = *(undefined4 *)(puVar8 + 2);
      uVar11 = uVar10 - 1;
      *(undefined4 *)(puVar8 + 2) = uVar1;
      uVar13 = (uVar6 + uVar7) - uVar10;
      *puVar8 = uVar4;
      puVar8[1] = uVar5;
      puVar8 = (undefined8 *)((long)puVar8 + 0x14);
      puVar12 = (undefined8 *)((long)puVar12 + -0x14);
      uVar10 = uVar11;
    } while (uVar13 < uVar11);
  }
  if (*(char *)(param_1 + 0x5b) != '\0') {
    uVar6 = *(uint *)(param_1 + 0x60);
    if (uVar6 < param_2) {
      uVar9 = (ulong)uVar6;
    }
    if (uVar6 < param_3) {
      param_3 = uVar6;
    }
    uVar6 = (uint)uVar9;
    if ((uVar6 + 2 <= param_3) && (uVar6 < param_3 - 1)) {
      puVar8 = (undefined8 *)(*(long *)(param_1 + 0x80) + (ulong)(param_3 - 1) * 0x14);
      puVar12 = (undefined8 *)(*(long *)(param_1 + 0x80) + uVar9 * 0x14);
      do {
        uVar3 = puVar12[1];
        uVar1 = *(undefined4 *)(puVar8 + 2);
        uVar7 = (int)uVar9 + 1;
        uVar9 = (ulong)uVar7;
        uVar4 = *puVar8;
        uVar5 = puVar8[1];
        *puVar8 = *puVar12;
        puVar8[1] = uVar3;
        *(undefined4 *)(puVar8 + 2) = *(undefined4 *)(puVar12 + 2);
        *(undefined4 *)(puVar12 + 2) = uVar1;
        *puVar12 = uVar4;
        puVar12[1] = uVar5;
        puVar8 = (undefined8 *)((long)puVar8 + -0x14);
        puVar12 = (undefined8 *)((long)puVar12 + 0x14);
      } while (uVar7 < ((param_3 - 1) + uVar6) - uVar7);
    }
  }
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void hb_buffer_reverse_clusters(long param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  uint uVar19;
  long in_FS_OFFSET;
  
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = *(uint *)(param_1 + 0x60);
  if ((uVar8 == 0) || (uVar8 == 1)) goto LAB_00101fa1;
  puVar11 = *(undefined8 **)(param_1 + 0x70);
  lVar18 = 0x14;
  uVar19 = 0;
  uVar13 = 0;
  uVar17 = 1;
  do {
    if (*(int *)((long)puVar11 + lVar18 + -0xc) == *(int *)((long)puVar11 + lVar18 + 8)) {
      uVar8 = *(uint *)(param_1 + 0x60);
    }
    else {
      if (uVar13 <= uVar8) {
        uVar8 = uVar13;
      }
      if ((uVar8 + 2 <= uVar17) && (uVar15 = uVar19, uVar8 < uVar19)) {
        do {
          uVar16 = (ulong)uVar15;
          uVar9 = (ulong)uVar8;
          uVar8 = uVar8 + 1;
          uVar15 = uVar15 - 1;
          puVar10 = (undefined8 *)((long)puVar11 + uVar9 * 0x14);
          puVar1 = (undefined8 *)((long)puVar11 + uVar16 * 0x14);
          uVar5 = puVar10[1];
          uVar6 = *puVar1;
          uVar7 = puVar1[1];
          uVar2 = *(undefined4 *)(puVar1 + 2);
          *puVar1 = *puVar10;
          puVar1[1] = uVar5;
          *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(puVar10 + 2);
          *(undefined4 *)(puVar10 + 2) = uVar2;
          *puVar10 = uVar6;
          puVar10[1] = uVar7;
        } while (uVar8 < uVar15);
      }
      uVar8 = *(uint *)(param_1 + 0x60);
      if (*(char *)(param_1 + 0x5b) != '\0') {
        if (uVar8 < uVar13) {
          uVar13 = uVar8;
        }
        uVar15 = uVar8;
        if (uVar17 <= uVar8) {
          uVar15 = uVar17;
        }
        if ((uVar13 + 2 <= uVar15) && (uVar12 = uVar15 - 1, uVar13 < uVar12)) {
          puVar11 = (undefined8 *)(*(long *)(param_1 + 0x80) + (ulong)uVar13 * 0x14);
          puVar10 = (undefined8 *)(*(long *)(param_1 + 0x80) + (ulong)uVar12 * 0x14);
          do {
            uVar5 = puVar11[1];
            uVar2 = *(undefined4 *)(puVar10 + 2);
            uVar6 = *puVar10;
            uVar7 = puVar10[1];
            *puVar10 = *puVar11;
            puVar10[1] = uVar5;
            *(undefined4 *)(puVar10 + 2) = *(undefined4 *)(puVar11 + 2);
            uVar8 = uVar12 - 1;
            *(undefined4 *)(puVar11 + 2) = uVar2;
            uVar14 = (uVar15 + uVar13) - uVar12;
            *puVar11 = uVar6;
            puVar11[1] = uVar7;
            puVar11 = (undefined8 *)((long)puVar11 + 0x14);
            puVar10 = (undefined8 *)((long)puVar10 + -0x14);
            uVar12 = uVar8;
          } while (uVar14 < uVar8);
          uVar8 = *(uint *)(param_1 + 0x60);
        }
      }
      puVar11 = *(undefined8 **)(param_1 + 0x70);
      uVar13 = uVar17;
    }
    uVar17 = uVar17 + 1;
    uVar19 = uVar19 + 1;
    lVar18 = lVar18 + 0x14;
  } while (uVar17 < uVar8);
  uVar19 = uVar8;
  if (uVar13 <= uVar8) {
    uVar19 = uVar13;
  }
  uVar9 = (ulong)uVar19;
  uVar15 = uVar8;
  if (uVar17 <= uVar8) {
    uVar15 = uVar17;
  }
  if (uVar19 + 2 <= uVar15) {
    if (uVar19 < uVar15 - 1) {
      puVar10 = (undefined8 *)((long)puVar11 + uVar9 * 0x14);
      puVar11 = (undefined8 *)((long)puVar11 + (ulong)(uVar15 - 1) * 0x14);
      do {
        uVar5 = puVar10[1];
        uVar2 = *(undefined4 *)(puVar11 + 2);
        uVar8 = (int)uVar9 + 1;
        uVar9 = (ulong)uVar8;
        uVar6 = *puVar11;
        uVar7 = puVar11[1];
        *puVar11 = *puVar10;
        puVar11[1] = uVar5;
        *(undefined4 *)(puVar11 + 2) = *(undefined4 *)(puVar10 + 2);
        *(undefined4 *)(puVar10 + 2) = uVar2;
        *puVar10 = uVar6;
        puVar10[1] = uVar7;
        puVar10 = (undefined8 *)((long)puVar10 + 0x14);
        puVar11 = (undefined8 *)((long)puVar11 + -0x14);
      } while (uVar8 < ((uVar15 - 1) + uVar19) - uVar8);
      uVar8 = *(uint *)(param_1 + 0x60);
      if (*(char *)(param_1 + 0x5b) != '\0') {
        lVar18 = *(long *)(param_1 + 0x80);
        uVar19 = uVar13;
        if (uVar8 < uVar13) {
          uVar19 = uVar8;
        }
        uVar15 = uVar17;
        if (uVar8 < uVar17) {
          uVar15 = uVar8;
        }
        if (uVar19 + 2 <= uVar15) goto LAB_0010204a;
      }
    }
    else {
      if (*(char *)(param_1 + 0x5b) == '\0') goto LAB_00101f4a;
      lVar18 = *(long *)(param_1 + 0x80);
LAB_0010204a:
      if (uVar19 < uVar15 - 1) {
        iVar4 = uVar19 - 1;
        puVar11 = (undefined8 *)(lVar18 + (ulong)uVar19 * 0x14);
        puVar10 = (undefined8 *)(lVar18 + (ulong)(uVar15 - 1) * 0x14);
        do {
          uVar5 = puVar11[1];
          uVar2 = *(undefined4 *)(puVar10 + 2);
          uVar19 = uVar19 + 1;
          uVar6 = *puVar10;
          uVar7 = puVar10[1];
          *puVar10 = *puVar11;
          puVar10[1] = uVar5;
          *(undefined4 *)(puVar10 + 2) = *(undefined4 *)(puVar11 + 2);
          *(undefined4 *)(puVar11 + 2) = uVar2;
          *puVar11 = uVar6;
          puVar11[1] = uVar7;
          puVar11 = (undefined8 *)((long)puVar11 + 0x14);
          puVar10 = (undefined8 *)((long)puVar10 + -0x14);
        } while (uVar19 < (iVar4 + uVar15) - uVar19);
        uVar8 = *(uint *)(param_1 + 0x60);
      }
    }
    puVar11 = *(undefined8 **)(param_1 + 0x70);
  }
LAB_00101f4a:
  if (1 < uVar8) {
    uVar13 = 0;
    puVar10 = (undefined8 *)((long)puVar11 + (ulong)(uVar8 - 1) * 0x14);
    do {
      uVar5 = puVar11[1];
      uVar2 = *(undefined4 *)(puVar10 + 2);
      uVar13 = uVar13 + 1;
      uVar6 = *puVar10;
      uVar7 = puVar10[1];
      *puVar10 = *puVar11;
      puVar10[1] = uVar5;
      *(undefined4 *)(puVar10 + 2) = *(undefined4 *)(puVar11 + 2);
      *(undefined4 *)(puVar11 + 2) = uVar2;
      *puVar11 = uVar6;
      puVar11[1] = uVar7;
      puVar10 = (undefined8 *)((long)puVar10 + -0x14);
      puVar11 = (undefined8 *)((long)puVar11 + 0x14);
    } while (uVar13 < (uVar8 - 1) - uVar13);
    if (*(char *)(param_1 + 0x5b) != '\0') {
      uVar13 = *(uint *)(param_1 + 0x60);
      if (uVar8 <= *(uint *)(param_1 + 0x60)) {
        uVar13 = uVar8;
      }
      if (1 < uVar13) {
        uVar8 = 0;
        puVar11 = *(undefined8 **)(param_1 + 0x80);
        puVar10 = (undefined8 *)
                  ((long)*(undefined8 **)(param_1 + 0x80) + (ulong)(uVar13 - 1) * 0x14);
        do {
          uVar5 = puVar11[1];
          uVar2 = *(undefined4 *)(puVar10 + 2);
          uVar8 = uVar8 + 1;
          uVar6 = *puVar10;
          uVar7 = puVar10[1];
          *puVar10 = *puVar11;
          puVar10[1] = uVar5;
          *(undefined4 *)(puVar10 + 2) = *(undefined4 *)(puVar11 + 2);
          *(undefined4 *)(puVar11 + 2) = uVar2;
          *puVar11 = uVar6;
          puVar11[1] = uVar7;
          puVar11 = (undefined8 *)((long)puVar11 + 0x14);
          puVar10 = (undefined8 *)((long)puVar10 + -0x14);
        } while (uVar8 < (uVar13 - 1) - uVar8);
      }
    }
  }
LAB_00101fa1:
  if (lVar3 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void __thiscall hb_buffer_t::hb_buffer_guess_segment_properties(hb_buffer_t *this)

{
  guess_segment_properties(this);
  return;
}



void hb_buffer_add_utf8(hb_buffer_t *param_1,byte *param_2,int param_3,uint param_4,uint param_5)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  size_t sVar6;
  byte *pbVar7;
  int iVar8;
  long lVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  byte *pbVar13;
  byte *pbVar14;
  int iVar15;
  
  uVar2 = *(uint *)(param_1 + 0x20);
  if (*(int *)(param_1 + 4) != 0) {
    if (param_3 == -1) {
      sVar6 = strlen((char *)param_2);
      param_3 = (int)sVar6;
    }
    if (param_5 == 0xffffffff) {
      param_5 = param_3 - param_4;
    }
    if (param_5 < 0x10000000) {
      iVar8 = *(int *)(param_1 + 0x60);
      uVar12 = (int)((ulong)(long)(int)param_5 >> 2) + iVar8;
      if ((uVar12 != 0) && (*(uint *)(param_1 + 0x68) <= uVar12)) {
        cVar4 = hb_buffer_t::enlarge(param_1,uVar12);
        if (cVar4 == '\0') {
          return;
        }
        iVar8 = *(int *)(param_1 + 0x60);
      }
      pbVar10 = param_2 + param_4;
      if (((param_4 != 0) && (iVar8 == 0)) &&
         (*(undefined4 *)(param_1 + 0xb0) = 0, param_2 < pbVar10)) {
        lVar9 = 1;
        pbVar14 = pbVar10;
        do {
          pbVar11 = pbVar14 + -1;
          pbVar13 = pbVar11;
          uVar12 = uVar2;
          if (param_2 < pbVar11) {
            do {
              pbVar7 = pbVar13;
              bVar1 = *pbVar7;
              if ((bVar1 & 0xc0) != 0x80) {
                pbVar13 = pbVar7 + 1;
                goto joined_r0x001025ff;
              }
              if (3 < (long)pbVar14 - (long)pbVar7) {
                pbVar13 = pbVar7 + 1;
                uVar5 = (uint)bVar1;
                goto LAB_0010255f;
              }
              pbVar13 = pbVar7 + -1;
            } while (param_2 != pbVar7 + -1);
            bVar1 = pbVar7[-1];
            pbVar13 = pbVar7;
            pbVar7 = param_2;
joined_r0x001025ff:
            uVar5 = (uint)bVar1;
            uVar3 = uVar5;
            if ((char)bVar1 < '\0') goto LAB_00102605;
joined_r0x00102524:
            if (pbVar13 == pbVar14) {
              pbVar11 = pbVar7;
              uVar12 = uVar3;
            }
          }
          else {
            uVar5 = (uint)pbVar14[-1];
            pbVar7 = pbVar11;
            pbVar13 = pbVar14;
            if (-1 < (char)pbVar14[-1]) {
              *(int *)(param_1 + 0xb0) = (int)lVar9;
              *(uint *)(param_1 + lVar9 * 4 + 0x84) = uVar5;
              break;
            }
LAB_00102605:
            if (0x1d < uVar5 - 0xc2) {
LAB_0010255f:
              if (uVar5 - 0xe0 < 0x10) {
                uVar3 = uVar2;
                if ((((1 < (long)pbVar14 - (long)pbVar13) && (pbVar7[1] - 0x80 < 0x40)) &&
                    (pbVar7[2] - 0x80 < 0x40)) &&
                   ((uVar5 = (uVar5 & 0xf) << 0xc | pbVar7[2] - 0x80 | (pbVar7[1] - 0x80) * 0x40,
                    0x7ff < uVar5 && (0x7ff < uVar5 - 0xd800)))) {
                  pbVar13 = pbVar7 + 3;
                  uVar3 = uVar5;
                }
              }
              else {
                uVar3 = uVar2;
                if ((((uVar5 - 0xf0 < 5) && (2 < (long)pbVar14 - (long)pbVar13)) &&
                    ((pbVar7[1] - 0x80 < 0x40 &&
                     ((pbVar7[2] - 0x80 < 0x40 && (pbVar7[3] - 0x80 < 0x40)))))) &&
                   (uVar5 = (uVar5 & 7) << 0x12 | pbVar7[3] - 0x80 | (pbVar7[1] - 0x80) * 0x1000 |
                            (pbVar7[2] - 0x80) * 0x40, uVar5 - 0x10000 < 0x100000)) {
                  pbVar13 = pbVar7 + 4;
                  uVar3 = uVar5;
                }
              }
              goto joined_r0x00102524;
            }
            uVar3 = uVar2;
            if (pbVar14 <= pbVar13) goto joined_r0x00102524;
            if (pbVar7[1] - 0x80 < 0x40) {
              pbVar13 = pbVar7 + 2;
              uVar3 = (uVar5 & 0x1f) << 6 | pbVar7[1] - 0x80;
              goto joined_r0x00102524;
            }
          }
          *(int *)(param_1 + 0xb0) = (int)lVar9;
          *(uint *)(param_1 + lVar9 * 4 + 0x84) = uVar12;
          lVar9 = lVar9 + 1;
          if ((pbVar11 <= param_2) || (pbVar14 = pbVar11, lVar9 == 6)) break;
        } while( true );
      }
      pbVar14 = pbVar10 + (int)param_5;
      while (pbVar11 = pbVar10, pbVar10 < pbVar14) {
        while( true ) {
          uVar5 = (uint)*pbVar11;
          pbVar10 = pbVar11 + 1;
          iVar8 = (int)pbVar11;
          iVar15 = (int)param_2;
          uVar12 = uVar5;
          if (uVar5 < 0x80) break;
          if (uVar5 - 0xc2 < 0x1e) {
            if (pbVar14 <= pbVar10) {
              hb_buffer_t::add(param_1,uVar2,iVar8 - iVar15);
              goto LAB_00102260;
            }
            if (pbVar11[1] - 0x80 < 0x40) {
              pbVar10 = pbVar11 + 2;
              uVar12 = (uVar5 & 0x1f) << 6 | pbVar11[1] - 0x80;
              break;
            }
            hb_buffer_t::add(param_1,uVar2,iVar8 - iVar15);
            pbVar11 = pbVar10;
          }
          else {
            uVar12 = uVar2;
            if (0xf < uVar5 - 0xe0) {
              if ((((uVar5 - 0xf0 < 5) && (2 < (long)pbVar14 - (long)pbVar10)) &&
                  (pbVar11[1] - 0x80 < 0x40)) &&
                 (((pbVar11[2] - 0x80 < 0x40 && (pbVar11[3] - 0x80 < 0x40)) &&
                  (uVar5 = (uVar5 & 7) << 0x12 | (pbVar11[1] - 0x80) * 0x1000 | pbVar11[3] - 0x80 |
                           (pbVar11[2] - 0x80) * 0x40, uVar5 - 0x10000 < 0x100000)))) {
                pbVar10 = pbVar11 + 4;
                uVar12 = uVar5;
              }
              break;
            }
            if ((((long)pbVar14 - (long)pbVar10 < 2) || (0x3f < pbVar11[1] - 0x80)) ||
               ((0x3f < pbVar11[2] - 0x80 ||
                ((uVar5 = (uVar5 & 0xf) << 0xc | (pbVar11[1] - 0x80) * 0x40 | pbVar11[2] - 0x80,
                 uVar5 < 0x800 || (uVar5 - 0xd800 < 0x800)))))) break;
            pbVar10 = pbVar11 + 3;
            hb_buffer_t::add(param_1,uVar5,iVar8 - iVar15);
            pbVar11 = pbVar10;
            if (pbVar14 <= pbVar10) goto LAB_00102260;
          }
        }
        hb_buffer_t::add(param_1,uVar12,iVar8 - iVar15);
      }
LAB_00102260:
      param_2 = param_2 + param_3;
      lVar9 = 1;
      *(undefined4 *)(param_1 + 0xb4) = 0;
      if (pbVar10 < param_2) {
        for (; iVar8 = (int)lVar9, lVar9 != 6; lVar9 = lVar9 + 1) {
          uVar5 = (uint)*pbVar10;
          pbVar14 = pbVar10 + 1;
          uVar12 = uVar5;
          if (uVar5 < 0x80) {
LAB_001022a7:
            *(int *)(param_1 + 0xb4) = iVar8;
            *(uint *)(param_1 + lVar9 * 4 + 0x98) = uVar12;
            pbVar10 = pbVar14;
            if (param_2 <= pbVar14) break;
          }
          else {
            if (0x1d < uVar5 - 0xc2) {
              uVar12 = uVar2;
              if (uVar5 - 0xe0 < 0x10) {
                if (((1 < (long)param_2 - (long)pbVar14) && (pbVar10[1] - 0x80 < 0x40)) &&
                   ((pbVar10[2] - 0x80 < 0x40 &&
                    ((uVar5 = (uVar5 & 0xf) << 0xc | (pbVar10[1] - 0x80) * 0x40 | pbVar10[2] - 0x80,
                     0x7ff < uVar5 && (0x7ff < uVar5 - 0xd800)))))) {
                  pbVar14 = pbVar10 + 3;
                  uVar12 = uVar5;
                }
              }
              else if (((((uVar5 - 0xf0 < 5) && (2 < (long)param_2 - (long)pbVar14)) &&
                        (pbVar10[1] - 0x80 < 0x40)) &&
                       ((pbVar10[2] - 0x80 < 0x40 && (pbVar10[3] - 0x80 < 0x40)))) &&
                      (uVar5 = (uVar5 & 7) << 0x12 | (pbVar10[1] - 0x80) * 0x1000 |
                               pbVar10[3] - 0x80 | (pbVar10[2] - 0x80) * 0x40,
                      uVar5 - 0x10000 < 0x100000)) {
                pbVar14 = pbVar10 + 4;
                uVar12 = uVar5;
              }
              goto LAB_001022a7;
            }
            if (param_2 <= pbVar14) {
              *(int *)(param_1 + 0xb4) = iVar8;
              *(uint *)(param_1 + (ulong)(iVar8 - 1) * 4 + 0x9c) = uVar2;
              break;
            }
            if (pbVar10[1] - 0x80 < 0x40) {
              pbVar14 = pbVar10 + 2;
              uVar12 = (uVar5 & 0x1f) << 6 | pbVar10[1] - 0x80;
              goto LAB_001022a7;
            }
            *(int *)(param_1 + 0xb4) = iVar8;
            *(uint *)(param_1 + lVar9 * 4 + 0x98) = uVar2;
            pbVar10 = pbVar14;
          }
        }
      }
      *(undefined4 *)(param_1 + 0x30) = 1;
    }
  }
  return;
}



void hb_buffer_add_utf16(hb_buffer_t *param_1,ushort *param_2,int param_3,uint param_4,uint param_5)

{
  ushort uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  ushort *puVar6;
  ushort *puVar7;
  uint uVar8;
  ushort *puVar9;
  
  uVar2 = *(uint *)(param_1 + 0x20);
  if (*(int *)(param_1 + 4) != 0) {
    if (param_3 == -1) {
      param_3 = 0;
      uVar1 = *param_2;
      puVar9 = param_2 + 1;
      while (uVar1 != 0) {
        param_3 = param_3 + 1;
        uVar1 = *puVar9;
        puVar9 = puVar9 + 1;
      }
    }
    if (param_5 == 0xffffffff) {
      param_5 = param_3 - param_4;
    }
    if (param_5 < 0x10000000) {
      iVar4 = *(int *)(param_1 + 0x60);
      uVar8 = (int)((ulong)((long)(int)param_5 * 2) >> 2) + iVar4;
      if ((uVar8 != 0) && (*(uint *)(param_1 + 0x68) <= uVar8)) {
        cVar3 = hb_buffer_t::enlarge(param_1,uVar8);
        if (cVar3 == '\0') {
          return;
        }
        iVar4 = *(int *)(param_1 + 0x60);
      }
      puVar9 = param_2 + param_4;
      if (((param_4 != 0) && (iVar4 == 0)) &&
         (*(undefined4 *)(param_1 + 0xb0) = 0, param_2 < puVar9)) {
        lVar5 = 1;
        puVar6 = puVar9;
        do {
          uVar1 = puVar6[-1];
          puVar7 = puVar6 + -1;
          uVar8 = (uint)uVar1;
          if (((uVar1 - 0xd800 < 0x800) && (uVar8 = uVar2, 0xdbff < uVar1)) && (param_2 < puVar7)) {
            if (puVar6[-2] - 0xd800 < 0x400) {
              puVar7 = puVar6 + -2;
              uVar8 = uVar1 + 0xfca02400 + (uint)puVar6[-2] * 0x400;
              goto LAB_00102950;
            }
            *(int *)(param_1 + 0xb0) = (int)lVar5;
            *(uint *)(param_1 + lVar5 * 4 + 0x84) = uVar2;
            puVar6 = puVar7;
          }
          else {
LAB_00102950:
            *(int *)(param_1 + 0xb0) = (int)lVar5;
            *(uint *)(param_1 + lVar5 * 4 + 0x84) = uVar8;
            puVar6 = puVar7;
            if (puVar7 <= param_2) break;
          }
          lVar5 = lVar5 + 1;
        } while (lVar5 != 6);
      }
      puVar6 = puVar9 + (int)param_5;
      while (puVar7 = puVar9, puVar9 < puVar6) {
        while( true ) {
          uVar1 = *puVar7;
          puVar9 = puVar7 + 1;
          uVar8 = (uint)uVar1;
          if (((0x7ff < uVar1 - 0xd800) || (uVar8 = uVar2, 0xdbff < uVar1)) || (puVar6 <= puVar9))
          goto LAB_001027fb;
          if (puVar7[1] - 0xdc00 < 0x400) break;
          hb_buffer_t::add(param_1,uVar2,(uint)((long)puVar7 - (long)param_2 >> 1));
          puVar7 = puVar9;
        }
        puVar9 = puVar7 + 2;
        uVar8 = puVar7[1] + 0xfca02400 + (uint)uVar1 * 0x400;
LAB_001027fb:
        hb_buffer_t::add(param_1,uVar8,(uint)((long)puVar7 - (long)param_2 >> 1));
      }
      lVar5 = 1;
      *(undefined4 *)(param_1 + 0xb4) = 0;
      param_2 = param_2 + param_3;
      if (puVar9 < param_2) {
        do {
          uVar1 = *puVar9;
          puVar6 = puVar9 + 1;
          uVar8 = (uint)uVar1;
          if (((uVar1 - 0xd800 < 0x800) && (uVar8 = uVar2, uVar1 < 0xdc00)) && (puVar6 < param_2)) {
            if (puVar9[1] - 0xdc00 < 0x400) {
              puVar6 = puVar9 + 2;
              uVar8 = puVar9[1] + 0xfca02400 + (uint)uVar1 * 0x400;
              goto LAB_00102830;
            }
            *(int *)(param_1 + 0xb4) = (int)lVar5;
            *(uint *)(param_1 + lVar5 * 4 + 0x98) = uVar2;
          }
          else {
LAB_00102830:
            *(int *)(param_1 + 0xb4) = (int)lVar5;
            *(uint *)(param_1 + lVar5 * 4 + 0x98) = uVar8;
            if (param_2 <= puVar6) break;
          }
          lVar5 = lVar5 + 1;
          puVar9 = puVar6;
        } while (lVar5 != 6);
      }
      *(undefined4 *)(param_1 + 0x30) = 1;
    }
  }
  return;
}



void hb_buffer_add_utf32(hb_buffer_t *param_1,uint *param_2,int param_3,uint param_4,uint param_5)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  int local_40;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  if (*(int *)(param_1 + 4) != 0) {
    local_40 = param_3;
    if (param_3 == -1) {
      puVar5 = param_2 + 1;
      if (*param_2 == 0) {
        local_40 = 0;
      }
      else {
        local_40 = 0;
        do {
          uVar8 = *puVar5;
          puVar5 = puVar5 + 1;
          local_40 = local_40 + 1;
        } while (uVar8 != 0);
      }
    }
    if (param_5 == 0xffffffff) {
      param_5 = local_40 - param_4;
    }
    if (param_5 < 0x10000000) {
      iVar3 = *(int *)(param_1 + 0x60);
      uVar8 = param_5 + iVar3;
      if ((uVar8 != 0) && (*(uint *)(param_1 + 0x68) <= uVar8)) {
        cVar2 = hb_buffer_t::enlarge(param_1,uVar8);
        if (cVar2 == '\0') {
          return;
        }
        iVar3 = *(int *)(param_1 + 0x60);
      }
      puVar5 = param_2 + param_4;
      if (((param_4 != 0) && (iVar3 == 0)) &&
         (*(undefined4 *)(param_1 + 0xb0) = 0, param_2 < puVar5)) {
        lVar4 = 1;
        puVar6 = puVar5;
        do {
          uVar8 = puVar6[-1];
          puVar6 = puVar6 + -1;
          if ((0x101fff < uVar8 - 0xe000) && (0xd7ff < uVar8)) {
            uVar8 = uVar1;
          }
          *(int *)(param_1 + 0xb0) = (int)lVar4;
          *(uint *)(param_1 + lVar4 * 4 + 0x84) = uVar8;
          lVar4 = lVar4 + 1;
        } while ((param_2 < puVar6) && (lVar4 != 6));
      }
      puVar6 = puVar5;
      if (puVar5 < puVar5 + (int)param_5) {
        do {
          uVar8 = *puVar6;
          puVar7 = puVar6 + 1;
          if ((0x101fff < uVar8 - 0xe000) && (0xd7ff < uVar8)) {
            uVar8 = uVar1;
          }
          hb_buffer_t::add(param_1,uVar8,(uint)((long)puVar6 - (long)param_2 >> 2));
          puVar6 = puVar7;
        } while (puVar7 < puVar5 + (int)param_5);
        puVar5 = puVar5 + (int)param_5;
      }
      *(undefined4 *)(param_1 + 0xb4) = 0;
      if (puVar5 < param_2 + local_40) {
        lVar4 = 1;
        do {
          uVar8 = puVar5[lVar4 + -1];
          if ((0x101fff < uVar8 - 0xe000) && (0xd7ff < uVar8)) {
            uVar8 = uVar1;
          }
          *(int *)(param_1 + 0xb4) = (int)lVar4;
          *(uint *)(param_1 + lVar4 * 4 + 0x98) = uVar8;
          lVar4 = lVar4 + 1;
        } while ((((ulong)((long)(param_2 + local_40) + (-1 - (long)puVar5)) >> 2) + 2 != lVar4) &&
                (lVar4 != 6));
      }
      *(undefined4 *)(param_1 + 0x30) = 1;
    }
  }
  return;
}



void hb_buffer_add_latin1(hb_buffer_t *param_1,byte *param_2,int param_3,uint param_4,uint param_5)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  size_t sVar4;
  long lVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  ulong uVar10;
  byte *pbVar11;
  
  if (*(int *)(param_1 + 4) == 0) {
    return;
  }
  uVar10 = (ulong)(int)param_5;
  if (param_3 == -1) {
    if (*param_2 == 0) {
      param_3 = 0;
    }
    else {
      sVar4 = strlen((char *)(param_2 + 1));
      param_3 = (int)sVar4 + 1;
    }
  }
  if (param_5 == 0xffffffff) {
    param_5 = param_3 - param_4;
    uVar10 = (ulong)(int)param_5;
  }
  if (param_5 < 0x10000000) {
    iVar3 = *(int *)(param_1 + 0x60);
    uVar9 = (int)(uVar10 >> 2) + iVar3;
    if ((uVar9 != 0) && (*(uint *)(param_1 + 0x68) <= uVar9)) {
      cVar2 = hb_buffer_t::enlarge(param_1,uVar9);
      if (cVar2 == '\0') {
        return;
      }
      iVar3 = *(int *)(param_1 + 0x60);
    }
    pbVar7 = param_2 + param_4;
    if (((param_4 != 0) && (iVar3 == 0)) && (*(undefined4 *)(param_1 + 0xb0) = 0, param_2 < pbVar7))
    {
      lVar5 = 1;
      pbVar6 = pbVar7;
      do {
        bVar1 = pbVar6[-1];
        pbVar6 = pbVar6 + -1;
        *(int *)(param_1 + 0xb0) = (int)lVar5;
        *(uint *)(param_1 + lVar5 * 4 + 0x84) = (uint)bVar1;
        lVar5 = lVar5 + 1;
        if (param_2 == pbVar6) break;
      } while (lVar5 != 6);
    }
    pbVar11 = pbVar7 + uVar10;
    pbVar6 = pbVar7;
    if (pbVar7 < pbVar11) {
      do {
        pbVar8 = pbVar7 + 1;
        hb_buffer_t::add(param_1,(uint)*pbVar7,(int)pbVar7 - (int)param_2);
        pbVar7 = pbVar8;
        pbVar6 = pbVar11;
      } while (pbVar11 != pbVar8);
    }
    *(undefined4 *)(param_1 + 0xb4) = 0;
    if (pbVar6 < param_2 + param_3) {
      pbVar7 = (byte *)0x1;
      do {
        bVar1 = pbVar6[(long)(pbVar7 + -1)];
        *(int *)(param_1 + 0xb4) = (int)pbVar7;
        *(uint *)(param_1 + (long)pbVar7 * 4 + 0x98) = (uint)bVar1;
        pbVar7 = pbVar7 + 1;
        if (pbVar7 == param_2 + param_3 + (1 - (long)pbVar6)) break;
      } while (pbVar7 != (byte *)0x6);
    }
    *(undefined4 *)(param_1 + 0x30) = 1;
  }
  return;
}



void hb_buffer_add_codepoints
               (hb_buffer_t *param_1,uint *param_2,int param_3,uint param_4,uint param_5)

{
  char cVar1;
  int iVar2;
  long lVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  
  if (*(int *)(param_1 + 4) == 0) {
    return;
  }
  if (param_3 == -1) {
    param_3 = 0;
    uVar5 = *param_2;
    puVar6 = param_2 + 1;
    while (uVar5 != 0) {
      param_3 = param_3 + 1;
      uVar5 = *puVar6;
      puVar6 = puVar6 + 1;
    }
  }
  if (param_5 == 0xffffffff) {
    param_5 = param_3 - param_4;
  }
  if (param_5 < 0x10000000) {
    iVar2 = *(int *)(param_1 + 0x60);
    uVar5 = param_5 + iVar2;
    if ((uVar5 != 0) && (*(uint *)(param_1 + 0x68) <= uVar5)) {
      cVar1 = hb_buffer_t::enlarge(param_1,uVar5);
      if (cVar1 == '\0') {
        return;
      }
      iVar2 = *(int *)(param_1 + 0x60);
    }
    puVar6 = param_2 + param_4;
    if (((param_4 != 0) && (iVar2 == 0)) && (*(undefined4 *)(param_1 + 0xb0) = 0, param_2 < puVar6))
    {
      lVar3 = 1;
      puVar4 = puVar6;
      do {
        uVar5 = puVar4[-1];
        puVar4 = puVar4 + -1;
        *(int *)(param_1 + 0xb0) = (int)lVar3;
        *(uint *)(param_1 + lVar3 * 4 + 0x84) = uVar5;
        lVar3 = lVar3 + 1;
        if (puVar4 <= param_2) break;
      } while (lVar3 != 6);
    }
    puVar4 = puVar6;
    if (puVar6 < puVar6 + (int)param_5) {
      do {
        puVar7 = puVar4 + 1;
        hb_buffer_t::add(param_1,*puVar4,(uint)((long)puVar4 - (long)param_2 >> 2));
        puVar4 = puVar7;
      } while (puVar7 < puVar6 + (int)param_5);
      puVar6 = puVar6 + (int)param_5;
    }
    *(undefined4 *)(param_1 + 0xb4) = 0;
    if (puVar6 < param_2 + param_3) {
      lVar3 = 1;
      do {
        uVar5 = puVar6[lVar3 + -1];
        *(int *)(param_1 + 0xb4) = (int)lVar3;
        *(uint *)(param_1 + lVar3 * 4 + 0x98) = uVar5;
        lVar3 = lVar3 + 1;
        if (((ulong)((long)(param_2 + param_3) + (-1 - (long)puVar6)) >> 2) + 2 == lVar3) break;
      } while (lVar3 != 6);
    }
    *(undefined4 *)(param_1 + 0x30) = 1;
  }
  return;
}



void hb_buffer_append(hb_buffer_t *param_1,long param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  hb_buffer_t *phVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  uVar6 = *(uint *)(param_2 + 0x60);
  if (param_4 <= *(uint *)(param_2 + 0x60)) {
    uVar6 = param_4;
  }
  if (param_3 < uVar6) {
    uVar5 = *(uint *)(param_1 + 0x60);
    uVar10 = uVar6 - param_3;
    uVar8 = (uint)CARRY4(uVar5,uVar10);
    if (CARRY4(uVar5,uVar10)) {
      param_1[0x58] = (hb_buffer_t)0x0;
    }
    else {
      hb_buffer_set_length(param_1,uVar5 + uVar10);
      if (param_1[0x58] != (hb_buffer_t)0x0) {
        if (uVar5 == 0) {
          *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
        }
        if ((param_1[0x5b] == (hb_buffer_t)0x0) && (*(char *)(param_2 + 0x5b) != '\0')) {
          hb_buffer_t::clear_positions(param_1);
        }
        hb_segment_properties_overlay(param_1 + 0x38,param_2 + 0x38);
        memcpy((void *)((ulong)uVar5 * 0x14 + *(long *)(param_1 + 0x70)),
               (void *)(*(long *)(param_2 + 0x70) + (ulong)param_3 * 0x14),(ulong)uVar10 * 0x14);
        if (param_1[0x5b] != (hb_buffer_t)0x0) {
          memcpy((void *)(*(long *)(param_1 + 0x80) + (ulong)uVar5 * 0x14),
                 (void *)(*(long *)(param_2 + 0x80) + (ulong)param_3 * 0x14),(ulong)uVar10 * 0x14);
        }
        if (*(int *)(param_2 + 0x30) == 1) {
          if ((uVar5 == 0) && (param_3 + *(int *)(param_2 + 0xb0) != 0)) {
            *(undefined4 *)(param_1 + 0xb0) = 0;
            if (param_3 != 0) {
              lVar2 = *(long *)(param_2 + 0x70);
              lVar3 = (ulong)(param_3 - 1) * 0x14;
              iVar9 = 0;
              phVar7 = param_1 + 0x88;
              do {
                uVar1 = *(undefined4 *)(lVar2 + lVar3);
                iVar9 = iVar9 + 1;
                lVar3 = lVar3 + -0x14;
                *(int *)(param_1 + 0xb0) = iVar9;
                *(undefined4 *)phVar7 = uVar1;
                if (lVar3 == -0x14) break;
                phVar7 = phVar7 + 4;
              } while (iVar9 != 5);
            }
            if (*(int *)(param_2 + 0xb0) != 0) {
              uVar4 = (ulong)*(uint *)(param_1 + 0xb0);
              lVar2 = uVar4 * 4;
              lVar3 = 0;
              do {
                if (4 < (uint)uVar4) break;
                uVar1 = *(undefined4 *)(param_2 + 0x88 + lVar3 * 4);
                uVar5 = (uint)uVar4 + 1;
                uVar4 = (ulong)uVar5;
                *(uint *)(param_1 + 0xb0) = uVar5;
                *(undefined4 *)(param_1 + lVar3 * 4 + lVar2 + 0x88) = uVar1;
                lVar3 = lVar3 + 1;
              } while ((uint)lVar3 < *(uint *)(param_2 + 0xb0));
            }
          }
          *(undefined4 *)(param_1 + 0xb4) = 0;
          uVar5 = *(uint *)(param_2 + 0x60);
          if (uVar6 < uVar5) {
            lVar2 = *(long *)(param_2 + 0x70);
            lVar3 = (ulong)uVar6 * 0x14;
            phVar7 = param_1 + 0x9c;
            do {
              uVar1 = *(undefined4 *)(lVar2 + lVar3);
              uVar8 = uVar8 + 1;
              lVar3 = lVar3 + 0x14;
              *(uint *)(param_1 + 0xb4) = uVar8;
              *(undefined4 *)phVar7 = uVar1;
              if (uVar8 == uVar5 - uVar6) break;
              phVar7 = phVar7 + 4;
            } while (uVar8 != 5);
          }
          if (*(int *)(param_2 + 0xb4) != 0) {
            uVar4 = (ulong)*(uint *)(param_1 + 0xb4);
            lVar2 = uVar4 * 4;
            lVar3 = 0;
            do {
              if (4 < (uint)uVar4) {
                return;
              }
              uVar1 = *(undefined4 *)(param_2 + 0x9c + lVar3 * 4);
              uVar6 = (uint)uVar4 + 1;
              uVar4 = (ulong)uVar6;
              *(uint *)(param_1 + 0xb4) = uVar6;
              *(undefined4 *)(param_1 + lVar3 * 4 + lVar2 + 0x9c) = uVar1;
              lVar3 = lVar3 + 1;
            } while ((uint)lVar3 < *(uint *)(param_2 + 0xb4));
          }
        }
      }
    }
  }
  return;
}



void hb_buffer_normalize_glyphs(long param_1)

{
  int *piVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  int *piVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  size_t sVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  long lVar21;
  int *piVar22;
  uint uVar23;
  long in_FS_OFFSET;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  ulong uVar20;
  
  uVar3 = *(uint *)(param_1 + 0x60);
  lVar6 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = *(uint *)(param_1 + 0x38);
  if (uVar3 == 0) {
LAB_00103308:
    if (lVar6 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  lVar13 = *(long *)(param_1 + 0x70);
  uVar17 = 0;
  piVar9 = (int *)(lVar13 + 8);
  do {
    uVar17 = uVar17 + 1;
    if (uVar3 == uVar17) break;
    iVar26 = *piVar9;
    piVar9 = piVar9 + 5;
  } while (iVar26 == *piVar9);
  uVar18 = 0;
  lVar14 = *(long *)(param_1 + 0x80);
  if (uVar17 == 0) goto LAB_001035e1;
LAB_00103370:
  uVar8 = uVar17 - 1;
  uVar10 = (ulong)uVar18;
  iVar26 = 0;
  iVar27 = 0;
  puVar15 = (undefined8 *)(lVar14 + uVar10 * 0x14);
  puVar12 = (undefined8 *)(lVar14 + 0x14 + ((uVar8 - uVar18) + uVar10) * 0x14);
  puVar11 = puVar15;
  do {
    uVar2 = *puVar11;
    puVar11 = (undefined8 *)((long)puVar11 + 0x14);
    iVar26 = iVar26 + (int)uVar2;
    iVar27 = iVar27 + (int)((ulong)uVar2 >> 0x20);
  } while (puVar11 != puVar12);
  iVar24 = 0;
  iVar25 = 0;
  do {
    puVar11 = (undefined8 *)((long)puVar15 + 0x14);
    puVar15[1] = CONCAT44((int)((ulong)puVar15[1] >> 0x20) + iVar25,(int)puVar15[1] + iVar24);
    uVar2 = *puVar15;
    *puVar15 = 0;
    iVar24 = iVar24 + (int)uVar2;
    iVar25 = iVar25 + (int)((ulong)uVar2 >> 0x20);
    puVar15 = puVar11;
    uVar23 = uVar17;
  } while (puVar11 != puVar12);
  do {
    lVar21 = uVar10 * 0x14;
    uVar17 = uVar8 - uVar18;
    puVar15 = (undefined8 *)(lVar14 + lVar21);
    if ((uVar4 & 0xfffffffd) == 5) {
      piVar9 = (int *)(lVar13 + lVar21);
      piVar1 = (int *)(lVar14 + (ulong)uVar8 * 0x14);
      *piVar1 = iVar26;
      piVar1[1] = iVar27;
      if (1 < uVar17) {
        uVar10 = 1;
        puVar12 = puVar15;
        piVar1 = piVar9;
        do {
          piVar22 = piVar1 + 5;
          uVar18 = (uint)uVar10;
          do {
            uVar8 = (uint)uVar10;
            uVar19 = uVar8 - 1;
            uVar20 = (ulong)uVar19;
            if (*piVar22 <= piVar9[uVar20 * 5]) {
              if (uVar18 == uVar8) goto LAB_00103725;
              break;
            }
            uVar10 = uVar20;
            uVar8 = uVar19;
          } while (uVar19 != 0);
          iVar26 = piVar1[9];
          uVar2 = *(undefined8 *)piVar22;
          uVar7 = *(undefined8 *)(piVar1 + 7);
          piVar1 = piVar9 + uVar10 * 5;
          sVar16 = (ulong)(uVar18 - uVar8) * 0x14;
          memmove(piVar9 + (ulong)(uVar8 + 1) * 5,piVar1,sVar16);
          *(undefined8 *)piVar1 = uVar2;
          *(undefined8 *)(piVar1 + 2) = uVar7;
          piVar1[4] = iVar26;
          if (puVar15 != (undefined8 *)0x0) {
            uVar2 = *(undefined8 *)((long)puVar12 + 0x14);
            uVar7 = *(undefined8 *)((long)puVar12 + 0x1c);
            uVar5 = *(undefined4 *)((long)puVar12 + 0x24);
            puVar11 = (undefined8 *)(uVar10 * 0x14 + (long)puVar15);
            memmove((void *)((long)puVar15 + (ulong)(uVar8 + 1) * 0x14),puVar11,sVar16);
            *(undefined4 *)(puVar11 + 2) = uVar5;
            *puVar11 = uVar2;
            puVar11[1] = uVar7;
          }
LAB_00103725:
          uVar10 = (ulong)(uVar18 + 1);
          puVar12 = (undefined8 *)((long)puVar12 + 0x14);
          piVar1 = piVar22;
        } while (uVar18 + 1 != uVar17);
      }
    }
    else {
      *puVar15 = CONCAT44((int)((ulong)*puVar15 >> 0x20) + iVar27,(int)*puVar15 + iVar26);
      if (uVar18 + 1 < uVar23) {
        puVar15 = (undefined8 *)(lVar14 + 0x1c + lVar21);
        do {
          puVar12 = (undefined8 *)((long)puVar15 + 0x14);
          *puVar15 = CONCAT44((int)((ulong)*puVar15 >> 0x20) - iVar27,(int)*puVar15 - iVar26);
          puVar15 = puVar12;
        } while (puVar12 !=
                 (undefined8 *)(lVar14 + 0x30 + (((uVar23 - 2) - uVar18) + uVar10) * 0x14));
      }
      puVar15 = (undefined8 *)(lVar14 + lVar21 + 0x14);
      piVar9 = (int *)(lVar13 + lVar21 + 0x14);
      if (1 < uVar17) {
        uVar10 = 1;
        piVar1 = piVar9;
        puVar12 = puVar15;
        do {
          piVar22 = piVar1 + 5;
          uVar18 = (uint)uVar10;
          do {
            uVar8 = (uint)uVar10;
            uVar19 = uVar8 - 1;
            uVar20 = (ulong)uVar19;
            if (*piVar22 <= piVar9[uVar20 * 5]) {
              if (uVar18 == uVar8) goto LAB_0010355e;
              break;
            }
            uVar10 = uVar20;
            uVar8 = uVar19;
          } while (uVar19 != 0);
          iVar26 = piVar1[9];
          uVar2 = *(undefined8 *)piVar22;
          uVar7 = *(undefined8 *)(piVar1 + 7);
          piVar1 = piVar9 + uVar10 * 5;
          puVar11 = (undefined8 *)(uVar10 * 0x14 + (long)puVar15);
          sVar16 = (ulong)(uVar18 - uVar8) * 0x14;
          memmove(piVar9 + (ulong)(uVar8 + 1) * 5,piVar1,sVar16);
          piVar1[4] = iVar26;
          *(undefined8 *)piVar1 = uVar2;
          *(undefined8 *)(piVar1 + 2) = uVar7;
          uVar2 = *(undefined8 *)((long)puVar12 + 0x14);
          uVar7 = *(undefined8 *)((long)puVar12 + 0x1c);
          uVar5 = *(undefined4 *)((long)puVar12 + 0x24);
          memmove((void *)((long)puVar15 + (ulong)(uVar8 + 1) * 0x14),puVar11,sVar16);
          *(undefined4 *)(puVar11 + 2) = uVar5;
          *puVar11 = uVar2;
          puVar11[1] = uVar7;
LAB_0010355e:
          uVar10 = (ulong)(uVar18 + 1);
          piVar1 = piVar22;
          puVar12 = (undefined8 *)((long)puVar12 + 0x14);
        } while (uVar18 + 1 != uVar17);
      }
    }
    lVar13 = (ulong)(uVar23 + 1) * 0x14;
    uVar17 = uVar23;
    do {
      uVar10 = (ulong)uVar17;
      uVar17 = uVar17 + 1;
      if (*(uint *)(param_1 + 0x60) <= uVar17) break;
      piVar9 = (int *)(*(long *)(param_1 + 0x70) + 8 + lVar13);
      lVar13 = lVar13 + 0x14;
    } while (*(int *)(*(long *)(param_1 + 0x70) + 8 + uVar10 * 0x14) == *piVar9);
    if (uVar3 <= uVar23) goto LAB_00103308;
    lVar13 = *(long *)(param_1 + 0x70);
    lVar14 = *(long *)(param_1 + 0x80);
    uVar18 = uVar23;
    if (uVar23 < uVar17) goto LAB_00103370;
LAB_001035e1:
    iVar26 = 0;
    iVar27 = 0;
    uVar10 = (ulong)uVar18;
    uVar8 = uVar17 - 1;
    uVar23 = uVar17;
  } while( true );
}



/* hb_buffer_t::sort(unsigned int, unsigned int, int (*)(hb_glyph_info_t const*, hb_glyph_info_t
   const*)) */

void __thiscall
hb_buffer_t::sort(hb_buffer_t *this,uint param_1,uint param_2,
                 _func_int_hb_glyph_info_t_ptr_hb_glyph_info_t_ptr *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  long in_FS_OFFSET;
  
  lVar4 = *(long *)(in_FS_OFFSET + 0x28);
  uVar10 = param_1 + 1;
  if (uVar10 < param_2) {
    lVar13 = (ulong)uVar10 * 0x14;
    uVar9 = uVar10;
    uVar8 = uVar10;
LAB_001037e8:
    do {
      uVar12 = uVar9;
      if (param_1 < uVar12) {
        iVar11 = (*param_3)((hb_glyph_info_t *)(*(long *)(this + 0x70) + (ulong)(uVar12 - 1) * 0x14)
                            ,(hb_glyph_info_t *)(*(long *)(this + 0x70) + lVar13));
        uVar9 = uVar12 - 1;
        if (0 < iVar11) goto LAB_001037e8;
      }
      uVar9 = uVar8 + 1;
      if (uVar12 != uVar8) {
        if (1 < uVar9 - uVar12) {
          merge_clusters_impl(this,uVar12,uVar9);
        }
        lVar5 = *(long *)(this + 0x70);
        uVar3 = *(undefined4 *)(lVar5 + 0x10 + lVar13);
        uVar6 = *(undefined8 *)(lVar5 + lVar13);
        uVar7 = ((undefined8 *)(lVar5 + lVar13))[1];
        lVar2 = (ulong)uVar12 * 0x14;
        memmove((void *)(lVar5 + (ulong)(uVar12 + 1) * 0x14),(void *)(lVar5 + lVar2),
                (ulong)(uVar8 - uVar12) * 0x14);
        lVar5 = *(long *)(this + 0x70);
        puVar1 = (undefined8 *)(lVar5 + (ulong)uVar12 * 0x14);
        *puVar1 = uVar6;
        puVar1[1] = uVar7;
        *(undefined4 *)(lVar5 + 0x10 + lVar2) = uVar3;
      }
      lVar13 = lVar13 + 0x14;
      uVar8 = uVar9;
    } while (lVar13 != ((ulong)uVar10 + 1 + (ulong)((param_2 - 2) - param_1)) * 0x14);
  }
  if (lVar4 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



ulong hb_buffer_diff(long param_1,long param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  uVar2 = *(uint *)(param_2 + 0x60);
  uVar3 = (ulong)uVar2;
  if ((*(int *)(param_1 + 0x30) == *(int *)(param_2 + 0x30)) || (*(uint *)(param_1 + 0x60) == 0)) {
    if (*(uint *)(param_1 + 0x60) == uVar2) {
      uVar4 = uVar3;
      if (uVar2 != 0) {
        piVar6 = *(int **)(param_1 + 0x70);
        piVar5 = *(int **)(param_2 + 0x70);
        uVar4 = 0;
        piVar7 = piVar6 + uVar3 * 5;
        do {
          uVar2 = (uint)uVar4;
          iVar1 = *piVar5;
          if (*piVar6 != iVar1) {
            uVar2 = uVar2 | 0x10;
          }
          if (piVar6[2] != piVar5[2]) {
            uVar2 = uVar2 | 0x20;
          }
          if (((piVar6[1] ^ piVar5[1]) & 7U) != 0) {
            uVar2 = uVar2 | 0x40;
          }
          uVar4 = (ulong)uVar2;
          if (param_3 != -1) {
            if (param_3 == iVar1) {
              uVar2 = uVar2 | 8;
            }
            uVar4 = (ulong)uVar2;
            if (iVar1 == 0) {
              uVar4 = (ulong)(uVar2 | 4);
            }
          }
          piVar6 = piVar6 + 5;
          piVar5 = piVar5 + 5;
        } while (piVar7 != piVar6);
        if (*(int *)(param_1 + 0x30) == 2) {
          piVar6 = *(int **)(param_1 + 0x80);
          piVar5 = *(int **)(param_2 + 0x80);
          piVar7 = piVar6 + uVar3 * 5;
          do {
            uVar2 = *piVar6 - *piVar5;
            if ((int)uVar2 < 1) {
              uVar2 = -uVar2;
            }
            if (param_4 < uVar2) {
LAB_00103a17:
              return uVar4 | 0x80;
            }
            uVar2 = piVar6[1] - piVar5[1];
            if ((int)uVar2 < 1) {
              uVar2 = -uVar2;
            }
            if (param_4 < uVar2) goto LAB_00103a17;
            uVar2 = piVar6[2] - piVar5[2];
            if ((int)uVar2 < 1) {
              uVar2 = -uVar2;
            }
            if (param_4 < uVar2) goto LAB_00103a17;
            uVar2 = piVar6[3] - piVar5[3];
            if ((int)uVar2 < 1) {
              uVar2 = -uVar2;
            }
            if (param_4 < uVar2) goto LAB_00103a17;
            piVar6 = piVar6 + 5;
            piVar5 = piVar5 + 5;
          } while (piVar6 != piVar7);
        }
      }
    }
    else {
      piVar7 = *(int **)(param_2 + 0x70);
      if (uVar2 != 0) {
        piVar6 = piVar7 + uVar3 * 5;
        if (param_3 == -1) {
          do {
            piVar7 = piVar7 + 5;
          } while (piVar6 != piVar7);
          uVar3 = 2;
        }
        else {
          uVar2 = 0;
          do {
            if (*piVar7 == param_3) {
              uVar2 = uVar2 | 8;
            }
            if (*piVar7 == 0) {
              uVar2 = uVar2 | 4;
            }
            piVar7 = piVar7 + 5;
          } while (piVar6 != piVar7);
          uVar3 = (ulong)(uVar2 | 2);
        }
        return uVar3;
      }
      uVar4 = 2;
    }
  }
  else {
    uVar4 = (ulong)((uVar2 == 0) + 1);
  }
  return uVar4;
}



void hb_buffer_set_message_func
               (long param_1,long param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  if (*(int *)(param_1 + 4) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00103b32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (*(code **)(param_1 + 0xe0) != (code *)0x0) {
      (**(code **)(param_1 + 0xe0))(*(undefined8 *)(param_1 + 0xd8));
    }
    if (param_2 == 0) {
      *(undefined8 *)(param_1 + 0xd0) = 0;
      *(undefined8 *)(param_1 + 0xd8) = 0;
      *(undefined8 *)(param_1 + 0xe0) = 0;
      return;
    }
    *(long *)(param_1 + 0xd0) = param_2;
    *(undefined8 *)(param_1 + 0xd8) = param_3;
    *(code **)(param_1 + 0xe0) = UNRECOVERED_JUMPTABLE;
  }
  return;
}



/* hb_buffer_t::message_impl(hb_font_t*, char const*, __va_list_tag*) */

bool __thiscall
hb_buffer_t::message_impl(hb_buffer_t *this,hb_font_t *param_1,char *param_2,__va_list_tag *param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined1 auStack_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(int *)(this + 0xe8) = *(int *)(this + 0xe8) + 1;
  __vsnprintf_chk(auStack_88,100,2,100,param_2,param_3);
  iVar1 = (**(code **)(this + 0xd0))(this,param_1,auStack_88,*(undefined8 *)(this + 0xd8));
  *(int *)(this + 0xe8) = *(int *)(this + 0xe8) + -1;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* hb_buffer_t::_set_glyph_flags(unsigned int, unsigned int, unsigned int, bool, bool) */

void __thiscall
hb_buffer_t::_set_glyph_flags
          (hb_buffer_t *this,uint param_1,uint param_2,uint param_3,bool param_4,bool param_5)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint *puVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  long in_FS_OFFSET;
  long local_50;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(uint *)(this + 0x60) < param_3) {
    param_3 = *(uint *)(this + 0x60);
  }
  if ((param_5) || (!param_4)) {
    *(uint *)(this + 0xc0) = *(uint *)(this + 0xc0) | 0x20;
    if ((param_5) && (this[0x5a] != (hb_buffer_t)0x0)) {
      uVar5 = *(uint *)(this + 100);
      if (!param_4) {
        if (param_2 < uVar5) {
          puVar4 = (uint *)(*(long *)(this + 0x78) + 4 + (ulong)param_2 * 0x14);
          do {
            *puVar4 = *puVar4 | param_1;
            param_2 = param_2 + 1;
            puVar4 = puVar4 + 5;
          } while (param_2 < *(uint *)(this + 100));
        }
        uVar5 = *(uint *)(this + 0x5c);
        if (uVar5 < param_3) {
          lVar3 = *(long *)(this + 0x70);
          puVar4 = (uint *)(lVar3 + 4 + (ulong)uVar5 * 0x14);
          do {
            *puVar4 = *puVar4 | param_1;
            puVar4 = puVar4 + 5;
          } while ((uint *)(lVar3 + 0x18 + ((ulong)((param_3 - uVar5) - 1) + (ulong)uVar5) * 0x14)
                   != puVar4);
        }
        goto LAB_00103ca0;
      }
      iVar1 = *(int *)(this + 0x1c);
      uVar11 = *(uint *)(this + 0x5c);
      lVar3 = *(long *)(this + 0x70);
      lVar8 = *(long *)(this + 0x78);
      if (uVar11 == param_3) {
        local_44 = 0xffffffff;
        if (param_2 == uVar5) goto LAB_00103ca0;
        if (iVar1 == 2) goto LAB_0010403e;
LAB_00103df5:
        lVar10 = lVar8 + (ulong)(uVar5 - 1) * 0x14;
        uVar6 = (ulong)param_2;
        uVar7 = *(uint *)(lVar10 + 8);
        lVar12 = lVar8 + uVar6 * 0x14;
        uVar13 = *(uint *)(lVar12 + 8);
        if (uVar7 < uVar13) {
          uVar13 = uVar7;
          lVar12 = lVar10;
        }
        puVar4 = (uint *)(lVar12 + 8);
        if (local_44 <= uVar13) {
          puVar4 = &local_44;
        }
        uVar7 = *puVar4;
        if (param_2 == uVar5) {
LAB_001040d5:
          if (param_3 == uVar11) goto LAB_00103ca0;
LAB_001040de:
          uVar9 = (ulong)(param_3 - 1);
          uVar6 = (ulong)uVar11;
          goto LAB_001040e5;
        }
        local_50 = uVar6 * 0x14;
        lVar12 = (ulong)(uVar5 - 1) * 0x14;
        uVar13 = *(uint *)(lVar8 + 8 + local_50);
        lVar10 = lVar8 + lVar12;
        uVar2 = *(uint *)(lVar10 + 8);
        if (uVar7 == uVar13) {
LAB_00103f9d:
          if (param_2 < uVar5) {
            do {
              if (*(uint *)(lVar10 + 8) == uVar7) break;
              *(uint *)(this + 0xc0) = *(uint *)(this + 0xc0) | 0x20;
              *(uint *)(lVar10 + 4) = *(uint *)(lVar10 + 4) | param_1;
              lVar10 = lVar10 + -0x14;
            } while (lVar10 != lVar8 + -0x14 + lVar12 + (ulong)((uVar5 - param_2) - 1) * -0x14);
LAB_00103eb9:
            uVar11 = *(uint *)(this + 0x5c);
          }
        }
        else {
          if (uVar7 != uVar2) goto LAB_00104092;
          if (uVar7 == uVar13) goto LAB_00103f9d;
          if (param_2 < uVar5) {
            puVar4 = (uint *)(lVar8 + 4 + local_50);
            do {
              if (puVar4[1] == uVar2) break;
              *(uint *)(this + 0xc0) = *(uint *)(this + 0xc0) | 0x20;
              *puVar4 = *puVar4 | param_1;
              puVar4 = puVar4 + 5;
            } while (puVar4 != (uint *)(lVar8 + 0x18 + (((uVar5 - param_2) - 1) + uVar6) * 0x14));
            goto LAB_00103eb9;
          }
        }
        if (uVar11 == param_3) goto LAB_00103ca0;
        uVar9 = (ulong)(param_3 - 1);
        uVar6 = (ulong)uVar11;
        uVar5 = *(uint *)(lVar3 + 8 + uVar6 * 0x14);
        uVar13 = *(uint *)(lVar3 + 8 + uVar9 * 0x14);
LAB_00103ee3:
        if (uVar5 != uVar7) {
          if (uVar13 != uVar7) goto LAB_00104106;
          if (uVar5 != uVar7) {
            if (uVar11 < param_3) {
              puVar4 = (uint *)(lVar3 + 4 + uVar6 * 0x14);
              do {
                if (puVar4[1] == uVar13) break;
                *(uint *)(this + 0xc0) = *(uint *)(this + 0xc0) | 0x20;
                *puVar4 = *puVar4 | param_1;
                puVar4 = puVar4 + 5;
              } while (puVar4 != (uint *)(lVar3 + 0x18 + (((int)uVar9 - uVar11) + uVar6) * 0x14));
            }
            goto LAB_00103ca0;
          }
        }
        if (uVar11 < param_3) {
          lVar8 = lVar3 + uVar9 * 0x14;
          do {
            if (*(uint *)(lVar8 + 8) == uVar7) break;
            *(uint *)(this + 0xc0) = *(uint *)(this + 0xc0) | 0x20;
            *(uint *)(lVar8 + 4) = *(uint *)(lVar8 + 4) | param_1;
            lVar8 = lVar8 + -0x14;
          } while (lVar8 != lVar3 + -0x14 + uVar9 * 0x14 + (ulong)((int)uVar9 - uVar11) * -0x14);
        }
      }
      else {
        if (iVar1 == 2) {
          if (uVar11 < param_3) {
            puVar4 = (uint *)(lVar3 + 8 + (ulong)uVar11 * 0x14);
            local_44 = 0xffffffff;
            do {
              if (*puVar4 < local_44) {
                local_44 = *puVar4;
              }
              puVar4 = puVar4 + 5;
            } while (puVar4 != (uint *)(lVar3 + 0x1c +
                                       ((ulong)((param_3 - uVar11) - 1) + (ulong)uVar11) * 0x14));
          }
          else {
            local_44 = 0xffffffff;
          }
          uVar7 = local_44;
          if (param_2 != uVar5) {
LAB_0010403e:
            uVar6 = (ulong)param_2;
            uVar7 = local_44;
            if (param_2 < uVar5) {
              puVar4 = (uint *)(lVar8 + 8 + uVar6 * 0x14);
              do {
                if (*puVar4 < uVar7) {
                  uVar7 = *puVar4;
                }
                puVar4 = puVar4 + 5;
              } while (puVar4 != (uint *)(lVar8 + 0x1c + (((uVar5 - param_2) - 1) + uVar6) * 0x14));
              if (param_2 == uVar5) goto LAB_001040d5;
            }
            local_50 = uVar6 * 0x14;
LAB_00104092:
            if (param_2 < uVar5) {
              puVar4 = (uint *)(lVar8 + 4 + local_50);
              do {
                if (puVar4[1] != uVar7) {
                  *(uint *)(this + 0xc0) = *(uint *)(this + 0xc0) | 0x20;
                  *puVar4 = *puVar4 | param_1;
                }
                puVar4 = puVar4 + 5;
              } while (puVar4 != (uint *)(lVar8 + 0x18 +
                                         ((ulong)((uVar5 - param_2) - 1) + (ulong)param_2) * 0x14));
              uVar11 = *(uint *)(this + 0x5c);
            }
            goto LAB_001040d5;
          }
          goto LAB_001040de;
        }
        uVar9 = (ulong)(param_3 - 1);
        uVar6 = (ulong)uVar11;
        uVar7 = *(uint *)(lVar3 + 8 + uVar9 * 0x14);
        uVar13 = *(uint *)(lVar3 + 8 + uVar6 * 0x14);
        if (uVar13 < uVar7) {
          uVar7 = uVar13;
        }
        local_44 = uVar7;
        if (param_2 != uVar5) goto LAB_00103df5;
LAB_001040e5:
        uVar5 = *(uint *)(lVar3 + 8 + uVar6 * 0x14);
        uVar13 = *(uint *)(lVar3 + 8 + uVar9 * 0x14);
        if (iVar1 != 2) goto LAB_00103ee3;
LAB_00104106:
        if (uVar11 < param_3) {
          puVar4 = (uint *)(lVar3 + 4 + uVar6 * 0x14);
          do {
            if (puVar4[1] != uVar7) {
              *(uint *)(this + 0xc0) = *(uint *)(this + 0xc0) | 0x20;
              *puVar4 = *puVar4 | param_1;
            }
            puVar4 = puVar4 + 5;
          } while ((uint *)(lVar3 + 0x18 + (((int)uVar9 - uVar11) + uVar6) * 0x14) != puVar4);
        }
      }
      goto LAB_00103ca0;
    }
    if (!param_4) {
      if (param_2 < param_3) {
        lVar3 = *(long *)(this + 0x70);
        puVar4 = (uint *)(lVar3 + 4 + (ulong)param_2 * 0x14);
        do {
          *puVar4 = *puVar4 | param_1;
          puVar4 = puVar4 + 5;
        } while (puVar4 != (uint *)(lVar3 + 0x18 +
                                   ((ulong)((param_3 - param_2) - 1) + (ulong)param_2) * 0x14));
      }
      goto LAB_00103ca0;
    }
  }
  else {
    if (param_3 - param_2 < 2) goto LAB_00103ca0;
    *(uint *)(this + 0xc0) = *(uint *)(this + 0xc0) | 0x20;
  }
  lVar3 = *(long *)(this + 0x70);
  if (param_2 != param_3) {
    if (*(int *)(this + 0x1c) == 2) {
      if (param_2 < param_3) {
        uVar6 = (ulong)param_2;
        puVar4 = (uint *)(lVar3 + 8 + uVar6 * 0x14);
        uVar5 = 0xffffffff;
        do {
          if (*puVar4 < uVar5) {
            uVar5 = *puVar4;
          }
          puVar4 = puVar4 + 5;
        } while ((uint *)(lVar3 + 0x1c + (((param_3 - param_2) - 1) + uVar6) * 0x14) != puVar4);
        puVar4 = (uint *)(lVar3 + 4 + uVar6 * 0x14);
        do {
          if (uVar5 != puVar4[1]) {
            *(uint *)(this + 0xc0) = *(uint *)(this + 0xc0) | 0x20;
            *puVar4 = *puVar4 | param_1;
          }
          puVar4 = puVar4 + 5;
        } while (puVar4 != (uint *)(lVar3 + 0x18 + (((param_3 - param_2) - 1) + uVar6) * 0x14));
      }
    }
    else {
      lVar12 = (ulong)(param_3 - 1) * 0x14;
      lVar10 = (ulong)param_2 * 0x14;
      lVar8 = lVar3 + lVar12;
      uVar5 = *(uint *)(lVar3 + 8 + lVar10);
      uVar11 = *(uint *)(lVar8 + 8);
      if (uVar11 < uVar5) {
        if (param_2 < param_3) {
          puVar4 = (uint *)(lVar3 + 4 + lVar10);
          do {
            if (puVar4[1] == uVar11) break;
            *(uint *)(this + 0xc0) = *(uint *)(this + 0xc0) | 0x20;
            *puVar4 = *puVar4 | param_1;
            puVar4 = puVar4 + 5;
          } while ((uint *)(lVar3 + 0x18 +
                           ((ulong)((param_3 - param_2) - 1) + (ulong)param_2) * 0x14) != puVar4);
        }
      }
      else if (param_2 < param_3) {
        do {
          if (*(uint *)(lVar8 + 8) == uVar5) break;
          *(uint *)(this + 0xc0) = *(uint *)(this + 0xc0) | 0x20;
          *(uint *)(lVar8 + 4) = *(uint *)(lVar8 + 4) | param_1;
          lVar8 = lVar8 + -0x14;
        } while (lVar3 + -0x14 + lVar12 + (ulong)((param_3 - param_2) - 1) * -0x14 != lVar8);
      }
    }
  }
LAB_00103ca0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


