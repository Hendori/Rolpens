
/* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
    else {
      *(undefined8 *)this = 0;
    }
  }
  plVar1 = (long *)(*(long *)param_1 + -0x10);
  if (*(long *)param_1 != 0) {
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) {
        return;
      }
      LOCK();
      lVar3 = *plVar1;
      bVar4 = lVar2 == lVar3;
      if (bVar4) {
        *plVar1 = lVar2 + 1;
        lVar3 = lVar2;
      }
      UNLOCK();
    } while (!bVar4);
    if (lVar3 != -1) {
      *(undefined8 *)this = *(undefined8 *)param_1;
    }
  }
  return;
}



/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int> >::_hash(int const&) const
    */

uint __thiscall
AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::_hash
          (AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>> *this,int *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = ((uint)*param_1 >> 0x10 ^ *param_1) * -0x7a143595;
  uVar2 = (uVar1 ^ uVar1 >> 0xd) * -0x3d4d51cb;
  uVar1 = uVar2 ^ uVar2 >> 0x10;
  if (uVar2 == uVar2 >> 0x10) {
    uVar1 = 1;
  }
  return uVar1;
}



/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int>
   >::_get_resize_count(unsigned int) */

uint AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::_get_resize_count
               (uint param_1)

{
  return param_1 + 1 >> 2 ^ param_1;
}



/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int>
   >::_get_probe_length(unsigned int, unsigned int, unsigned int) */

uint AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::_get_probe_length
               (uint param_1,uint param_2,uint param_3)

{
  return (param_3 + 1 + param_1) - (param_2 & param_3) & param_3;
}



/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int> >::_lookup_pos(int const&,
   unsigned int&, unsigned int&) const */

undefined8 __thiscall
AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::_lookup_pos
          (AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>> *this,int *param_1,
          uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  lVar3 = *(long *)this;
  if (lVar3 != 0) {
    uVar1 = *param_1;
    uVar2 = *(uint *)(this + 0x10);
    uVar5 = (uVar1 >> 0x10 ^ uVar1) * -0x7a143595;
    uVar6 = (uVar5 ^ uVar5 >> 0xd) * -0x3d4d51cb;
    uVar5 = uVar6 ^ uVar6 >> 0x10;
    if (uVar6 == uVar6 >> 0x10) {
      uVar5 = 1;
    }
    uVar6 = uVar2 & uVar5;
    uVar4 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar6 * 8);
    if ((uVar5 == (uint)uVar4) &&
       (uVar8 = (uint)(uVar4 >> 0x20), *(uint *)(lVar3 + (uVar4 >> 0x20) * 8) == uVar1)) {
LAB_00100199:
      *param_2 = uVar8;
      *param_3 = uVar6;
      return 1;
    }
    if (uVar4 != 0) {
      uVar7 = 1;
      while( true ) {
        uVar6 = uVar6 + 1 & uVar2;
        uVar4 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar6 * 8);
        if ((uVar5 == (uint)uVar4) &&
           (uVar8 = (uint)(uVar4 >> 0x20), *(uint *)(lVar3 + (uVar4 >> 0x20) * 8) == uVar1))
        goto LAB_00100199;
        if ((uVar4 == 0) || ((((uVar2 + 1) - ((uint)uVar4 & uVar2)) + uVar6 & uVar2) < uVar7))
        break;
        uVar7 = uVar7 + 1;
      }
    }
  }
  return 0;
}



/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int>
   >::_lookup_pos_with_hash(int const&, unsigned int&, unsigned int&, unsigned int) const */

undefined8 __thiscall
AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::_lookup_pos_with_hash
          (AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>> *this,int *param_1,
          uint *param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  lVar2 = *(long *)this;
  if (lVar2 != 0) {
    uVar1 = *(uint *)(this + 0x10);
    uVar4 = uVar1 & param_4;
    uVar3 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar4 * 8);
    if ((param_4 == (uint)uVar3) &&
       (uVar6 = (uint)(uVar3 >> 0x20), *(int *)(lVar2 + (uVar3 >> 0x20) * 8) == *param_1)) {
LAB_0010026c:
      *param_2 = uVar6;
      *param_3 = uVar4;
      return 1;
    }
    if (uVar3 != 0) {
      uVar5 = 1;
      while( true ) {
        uVar4 = uVar4 + 1 & uVar1;
        uVar3 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar4 * 8);
        if (((uint)uVar3 == param_4) &&
           (uVar6 = (uint)(uVar3 >> 0x20), *(int *)(lVar2 + (uVar3 >> 0x20) * 8) == *param_1))
        goto LAB_0010026c;
        if ((uVar3 == 0) || ((((uVar1 + 1) - ((uint)uVar3 & uVar1)) + uVar4 & uVar1) < uVar5))
        break;
        uVar5 = uVar5 + 1;
      }
    }
  }
  return 0;
}



/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int>
   >::_insert_with_hash(unsigned int, unsigned int) */

void __thiscall
AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::_insert_with_hash
          (AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>> *this,uint param_1,
          uint param_2)

{
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  
  uVar3 = *(uint *)(this + 0x10);
  lVar4 = *(long *)(this + 8);
  plVar1 = (long *)(lVar4 + (ulong)(uVar3 & param_1) * 8);
  if (*plVar1 == 0) {
    *plVar1 = CONCAT44(param_2,param_1);
    return;
  }
  uVar9 = 1;
  uVar7 = (uVar3 & param_1) + 1 & uVar3;
  puVar2 = (uint *)(lVar4 + (ulong)uVar7 * 8);
  lVar5 = *(long *)puVar2;
  uVar6 = CONCAT44(param_2,param_1);
  while (lVar5 != 0) {
    uVar8 = (uVar7 + uVar3 + 1) - (*puVar2 & uVar3) & uVar3;
    uVar10 = uVar6;
    if (uVar8 < uVar9) {
      uVar10 = *(undefined8 *)puVar2;
      *(undefined8 *)puVar2 = uVar6;
      uVar9 = uVar8;
    }
    uVar9 = uVar9 + 1;
    uVar7 = uVar7 + 1 & uVar3;
    puVar2 = (uint *)(lVar4 + (ulong)uVar7 * 8);
    uVar6 = uVar10;
    lVar5 = *(long *)puVar2;
  }
  *(undefined8 *)puVar2 = uVar6;
  return;
}



/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int>
   >::_resize_and_rehash(unsigned int) */

void __thiscall
AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::_resize_and_rehash
          (AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>> *this,uint param_1)

{
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  long *plVar14;
  ulong __n;
  
  uVar3 = *(uint *)(this + 0x10);
  plVar4 = *(long **)(this + 8);
  uVar8 = 4;
  if (3 < param_1) {
    uVar8 = param_1;
  }
  uVar8 = uVar8 - 1 | uVar8 - 1 >> 1;
  uVar8 = uVar8 | uVar8 >> 2;
  uVar8 = uVar8 | uVar8 >> 4;
  uVar8 = uVar8 | uVar8 >> 8;
  uVar8 = uVar8 | uVar8 >> 0x10;
  *(uint *)(this + 0x10) = uVar8;
  __n = (ulong)(uVar8 + 1) << 3;
  uVar10 = Memory::alloc_static(__n,false);
  *(undefined8 *)(this + 8) = uVar10;
  uVar10 = Memory::realloc_static
                     (*(void **)this,
                      (ulong)((*(uint *)(this + 0x10) + 1 >> 2 ^ *(uint *)(this + 0x10)) + 1) << 3,
                      false);
  *(undefined8 *)this = uVar10;
  memset(*(void **)(this + 8),0,__n);
  if ((*(int *)(this + 0x14) != 0) && (uVar3 != 0xffffffff)) {
    plVar14 = plVar4;
    do {
      while (lVar5 = *plVar14, lVar5 == 0) {
LAB_001003f8:
        plVar14 = plVar14 + 1;
        if (plVar14 == plVar4 + (ulong)uVar3 + 1) goto LAB_0010042c;
      }
      uVar8 = *(uint *)(this + 0x10);
      lVar6 = *(long *)(this + 8);
      uVar9 = uVar8 & (uint)lVar5;
      plVar1 = (long *)(lVar6 + (ulong)uVar9 * 8);
      if (*plVar1 != 0) {
        uVar12 = 1;
        uVar9 = uVar9 + 1 & uVar8;
        puVar2 = (uint *)(lVar6 + (ulong)uVar9 * 8);
        lVar7 = *(long *)puVar2;
        while (lVar7 != 0) {
          uVar11 = (uVar9 + uVar8 + 1) - (*puVar2 & uVar8) & uVar8;
          lVar13 = lVar5;
          if (uVar11 < uVar12) {
            lVar13 = *(long *)puVar2;
            *(long *)puVar2 = lVar5;
            uVar12 = uVar11;
          }
          uVar12 = uVar12 + 1;
          uVar9 = uVar9 + 1 & uVar8;
          puVar2 = (uint *)(lVar6 + (ulong)uVar9 * 8);
          lVar5 = lVar13;
          lVar7 = *(long *)puVar2;
        }
        *(long *)puVar2 = lVar5;
        goto LAB_001003f8;
      }
      plVar14 = plVar14 + 1;
      *plVar1 = lVar5;
    } while (plVar14 != plVar4 + (ulong)uVar3 + 1);
  }
LAB_0010042c:
  Memory::free_static(plVar4,false);
  return;
}



/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int> >::_insert_element(int
   const&, int const&, unsigned int) */

uint __thiscall
AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::_insert_element
          (AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>> *this,int *param_1,
          int *param_2,uint param_3)

{
  int *piVar1;
  long *plVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulong __n;
  undefined8 uVar12;
  
  if (*(long *)this == 0) {
    __n = (ulong)(*(int *)(this + 0x10) + 1) << 3;
    uVar7 = Memory::alloc_static(__n,false);
    *(undefined8 *)(this + 8) = uVar7;
    uVar7 = Memory::alloc_static
                      ((ulong)((*(uint *)(this + 0x10) + 1 >> 2 ^ *(uint *)(this + 0x10)) + 1) << 3,
                       false);
    *(undefined8 *)this = uVar7;
    memset(*(void **)(this + 8),0,__n);
  }
  uVar10 = *(uint *)(this + 0x10);
  uVar11 = *(uint *)(this + 0x14);
  if ((uVar10 + 1 >> 2 ^ uVar10) < uVar11) {
    _resize_and_rehash(this,uVar10 * 2);
    uVar11 = *(uint *)(this + 0x14);
    uVar10 = *(uint *)(this + 0x10);
  }
  lVar4 = *(long *)(this + 8);
  piVar1 = (int *)(*(long *)this + (ulong)uVar11 * 8);
  *piVar1 = *param_1;
  piVar1[1] = *param_2;
  plVar2 = (long *)(lVar4 + (ulong)(param_3 & uVar10) * 8);
  if (*plVar2 == 0) {
    *plVar2 = CONCAT44(uVar11,param_3);
  }
  else {
    uVar9 = 1;
    uVar6 = (param_3 & uVar10) + 1 & uVar10;
    puVar3 = (uint *)(lVar4 + (ulong)uVar6 * 8);
    lVar5 = *(long *)puVar3;
    uVar7 = CONCAT44(uVar11,param_3);
    while (lVar5 != 0) {
      uVar8 = (uVar6 + uVar10 + 1) - (*puVar3 & uVar10) & uVar10;
      uVar12 = uVar7;
      if (uVar8 < uVar9) {
        uVar12 = *(undefined8 *)puVar3;
        *(undefined8 *)puVar3 = uVar7;
        uVar9 = uVar8;
      }
      uVar9 = uVar9 + 1;
      uVar6 = uVar6 + 1 & uVar10;
      puVar3 = (uint *)(lVar4 + (ulong)uVar6 * 8);
      uVar7 = uVar12;
      lVar5 = *(long *)puVar3;
    }
    *(undefined8 *)puVar3 = uVar7;
  }
  *(uint *)(this + 0x14) = uVar11 + 1;
  return uVar11;
}



/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int>
   >::_init_from(AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int> > const&) */

void __thiscall
AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::_init_from
          (AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>> *this,
          AHashMap *param_1)

{
  undefined8 uVar1;
  void *__dest;
  ulong __n;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x10) = uVar1;
  if ((int)((ulong)uVar1 >> 0x20) == 0) {
    return;
  }
  __n = (ulong)((int)uVar1 + 1) << 3;
  uVar1 = Memory::alloc_static(__n,false);
  *(undefined8 *)(this + 8) = uVar1;
  __dest = (void *)Memory::alloc_static
                             ((ulong)((*(uint *)(this + 0x10) + 1 >> 2 ^ *(uint *)(this + 0x10)) + 1
                                     ) << 3,false);
  *(void **)this = __dest;
  memcpy(__dest,*(void **)param_1,(ulong)*(uint *)(this + 0x14) << 3);
  memcpy(*(void **)(this + 8),*(void **)(param_1 + 8),__n);
  return;
}



/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int> >::get_capacity() const */

int __thiscall
AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::get_capacity
          (AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>> *this)

{
  return *(int *)(this + 0x10) + 1;
}



/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int> >::size() const */

undefined4 __thiscall
AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::size
          (AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>> *this)

{
  return *(undefined4 *)(this + 0x14);
}



/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int> >::is_empty() const */

undefined4 __thiscall
AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::is_empty
          (AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>> *this)

{
  return CONCAT31((int3)((uint)*(int *)(this + 0x14) >> 8),*(int *)(this + 0x14) == 0);
}



/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int> >::clear() */

void __thiscall
AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::clear
          (AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>> *this)

{
  if (*(long *)this == 0) {
    return;
  }
  if (*(int *)(this + 0x14) == 0) {
    return;
  }
  memset(*(void **)(this + 8),0,(ulong)(*(int *)(this + 0x10) + 1) << 3);
  *(undefined4 *)(this + 0x14) = 0;
  return;
}



/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int> >::get(int const&) */

uint * __thiscall
AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::get
          (AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>> *this,int *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  code *pcVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  
  lVar3 = *(long *)this;
  if (lVar3 != 0) {
    uVar1 = *param_1;
    uVar2 = *(uint *)(this + 0x10);
    uVar6 = (uVar1 >> 0x10 ^ uVar1) * -0x7a143595;
    uVar6 = (uVar6 ^ uVar6 >> 0xd) * -0x3d4d51cb;
    uVar9 = uVar6 ^ uVar6 >> 0x10;
    if (uVar6 == uVar6 >> 0x10) {
      uVar9 = 1;
    }
    uVar6 = uVar2 & uVar9;
    uVar4 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar6 * 8);
    if ((uVar9 == (uint)uVar4) && (puVar7 = (uint *)(lVar3 + (uVar4 >> 0x20) * 8), *puVar7 == uVar1)
       ) {
LAB_0010082a:
      return puVar7 + 1;
    }
    if (uVar4 != 0) {
      uVar8 = 1;
      while( true ) {
        uVar6 = uVar6 + 1 & uVar2;
        uVar4 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar6 * 8);
        if (((uint)uVar4 == uVar9) &&
           (puVar7 = (uint *)(lVar3 + (uVar4 >> 0x20) * 8), *puVar7 == uVar1)) goto LAB_0010082a;
        if ((uVar4 == 0) || ((((uVar2 + 1) - ((uint)uVar4 & uVar2)) + uVar6 & uVar2) < uVar8))
        break;
        uVar8 = uVar8 + 1;
      }
    }
  }
  _err_print_error(&_LC3,"core/templates/a_hash_map.h",0x138,"FATAL: Condition \"!exists\" is true."
                   ,"AHashMap key not found.",0,0);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}



/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int> >::get(int const&) const
    */

uint * __thiscall
AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::get
          (AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>> *this,int *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  code *pcVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  
  lVar3 = *(long *)this;
  if (lVar3 != 0) {
    uVar1 = *param_1;
    uVar2 = *(uint *)(this + 0x10);
    uVar6 = (uVar1 >> 0x10 ^ uVar1) * -0x7a143595;
    uVar6 = (uVar6 ^ uVar6 >> 0xd) * -0x3d4d51cb;
    uVar9 = uVar6 ^ uVar6 >> 0x10;
    if (uVar6 == uVar6 >> 0x10) {
      uVar9 = 1;
    }
    uVar6 = uVar2 & uVar9;
    uVar4 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar6 * 8);
    if ((uVar9 == (uint)uVar4) && (puVar7 = (uint *)(lVar3 + (uVar4 >> 0x20) * 8), *puVar7 == uVar1)
       ) {
LAB_0010094a:
      return puVar7 + 1;
    }
    if (uVar4 != 0) {
      uVar8 = 1;
      while( true ) {
        uVar6 = uVar6 + 1 & uVar2;
        uVar4 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar6 * 8);
        if (((uint)uVar4 == uVar9) &&
           (puVar7 = (uint *)(lVar3 + (uVar4 >> 0x20) * 8), *puVar7 == uVar1)) goto LAB_0010094a;
        if ((uVar4 == 0) || ((((uVar2 + 1) - ((uint)uVar4 & uVar2)) + uVar6 & uVar2) < uVar8))
        break;
        uVar8 = uVar8 + 1;
      }
    }
  }
  _err_print_error(&_LC3,"core/templates/a_hash_map.h",0x140,"FATAL: Condition \"!exists\" is true."
                   ,"AHashMap key not found.",0,0);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}



/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int> >::getptr(int const&)
   const */

uint * __thiscall
AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::getptr
          (AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>> *this,int *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  
  lVar3 = *(long *)this;
  if (lVar3 == 0) {
    return (uint *)0x0;
  }
  uVar1 = *param_1;
  uVar2 = *(uint *)(this + 0x10);
  uVar5 = (uVar1 >> 0x10 ^ uVar1) * -0x7a143595;
  uVar5 = (uVar5 ^ uVar5 >> 0xd) * -0x3d4d51cb;
  uVar8 = uVar5 ^ uVar5 >> 0x10;
  if (uVar5 == uVar5 >> 0x10) {
    uVar8 = 1;
  }
  uVar5 = uVar2 & uVar8;
  uVar4 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar5 * 8);
  if ((uVar8 == (uint)uVar4) && (puVar6 = (uint *)(lVar3 + (uVar4 >> 0x20) * 8), *puVar6 == uVar1))
  {
LAB_00100a6a:
    return puVar6 + 1;
  }
  if (uVar4 != 0) {
    uVar7 = 1;
    while( true ) {
      uVar5 = uVar5 + 1 & uVar2;
      uVar4 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar5 * 8);
      if (((uint)uVar4 == uVar8) &&
         (puVar6 = (uint *)(lVar3 + (uVar4 >> 0x20) * 8), *puVar6 == uVar1)) goto LAB_00100a6a;
      if ((uVar4 == 0) || ((((uVar2 + 1) - ((uint)uVar4 & uVar2)) + uVar5 & uVar2) < uVar7)) break;
      uVar7 = uVar7 + 1;
    }
  }
  return (uint *)0x0;
}



/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int> >::getptr(int const&) */

uint * __thiscall
AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::getptr
          (AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>> *this,int *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  
  lVar3 = *(long *)this;
  if (lVar3 == 0) {
    return (uint *)0x0;
  }
  uVar1 = *param_1;
  uVar2 = *(uint *)(this + 0x10);
  uVar5 = (uVar1 >> 0x10 ^ uVar1) * -0x7a143595;
  uVar5 = (uVar5 ^ uVar5 >> 0xd) * -0x3d4d51cb;
  uVar8 = uVar5 ^ uVar5 >> 0x10;
  if (uVar5 == uVar5 >> 0x10) {
    uVar8 = 1;
  }
  uVar5 = uVar2 & uVar8;
  uVar4 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar5 * 8);
  if ((uVar8 == (uint)uVar4) && (puVar6 = (uint *)(lVar3 + (uVar4 >> 0x20) * 8), *puVar6 == uVar1))
  {
LAB_00100b5a:
    return puVar6 + 1;
  }
  if (uVar4 != 0) {
    uVar7 = 1;
    while( true ) {
      uVar5 = uVar5 + 1 & uVar2;
      uVar4 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar5 * 8);
      if (((uint)uVar4 == uVar8) &&
         (puVar6 = (uint *)(lVar3 + (uVar4 >> 0x20) * 8), *puVar6 == uVar1)) goto LAB_00100b5a;
      if ((uVar4 == 0) || ((((uVar2 + 1) - ((uint)uVar4 & uVar2)) + uVar5 & uVar2) < uVar7)) break;
      uVar7 = uVar7 + 1;
    }
  }
  return (uint *)0x0;
}



/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int> >::has(int const&) const
    */

undefined8 __thiscall
AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::has
          (AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>> *this,int *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  lVar3 = *(long *)this;
  if (lVar3 != 0) {
    uVar1 = *param_1;
    uVar2 = *(uint *)(this + 0x10);
    uVar5 = (uVar1 >> 0x10 ^ uVar1) * -0x7a143595;
    uVar6 = (uVar5 ^ uVar5 >> 0xd) * -0x3d4d51cb;
    uVar5 = uVar6 ^ uVar6 >> 0x10;
    if (uVar6 == uVar6 >> 0x10) {
      uVar5 = 1;
    }
    uVar6 = uVar2 & uVar5;
    uVar4 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar6 * 8);
    if ((uVar5 == (uint)uVar4) && (*(uint *)(lVar3 + (uVar4 >> 0x20) * 8) == uVar1)) {
      return 1;
    }
    if (uVar4 != 0) {
      uVar7 = 1;
      while( true ) {
        uVar6 = uVar6 + 1 & uVar2;
        uVar4 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar6 * 8);
        if ((uVar5 == (uint)uVar4) && (*(uint *)(lVar3 + (uVar4 >> 0x20) * 8) == uVar1)) {
          return 1;
        }
        if ((uVar4 == 0) || ((((uVar2 + 1) - ((uint)uVar4 & uVar2)) + uVar6 & uVar2) < uVar7))
        break;
        uVar7 = uVar7 + 1;
      }
      return 0;
    }
  }
  return 0;
}



/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int> >::erase(int const&) */

undefined8 __thiscall
AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::erase
          (AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>> *this,int *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  ulong *puVar16;
  ulong uVar17;
  ulong uVar18;
  
  lVar3 = *(long *)this;
  if (lVar3 == 0) {
    return 0;
  }
  uVar10 = *param_1;
  uVar8 = (uVar10 >> 0x10 ^ uVar10) * -0x7a143595;
  uVar9 = (uVar8 ^ uVar8 >> 0xd) * -0x3d4d51cb;
  uVar8 = *(uint *)(this + 0x10);
  uVar11 = uVar9 ^ uVar9 >> 0x10;
  if (uVar9 == uVar9 >> 0x10) {
    uVar11 = 1;
  }
  lVar4 = *(long *)(this + 8);
  uVar9 = uVar8 & uVar11;
  uVar18 = (ulong)uVar9;
  puVar16 = (ulong *)(lVar4 + uVar18 * 8);
  uVar5 = *puVar16;
  if (uVar11 == (uint)uVar5) {
    puVar12 = (uint *)(lVar3 + (uVar5 >> 0x20) * 8);
    uVar13 = (uint)(uVar5 >> 0x20);
    if (*puVar12 == uVar10) {
LAB_00100d4a:
      uVar10 = uVar9 + 1 & uVar8;
      puVar15 = (uint *)(lVar4 + (ulong)uVar10 * 8);
      if ((*puVar15 != 0) &&
         (uVar5 = (ulong)uVar10, ((uVar10 + uVar8 + 1) - (*puVar15 & uVar8) & uVar8) != 0)) {
        do {
          uVar17 = uVar5;
          puVar1 = (undefined8 *)(lVar4 + uVar18 * 8);
          uVar6 = *(undefined8 *)puVar15;
          *(undefined8 *)puVar15 = *puVar1;
          *puVar1 = uVar6;
          uVar10 = (int)uVar17 + 1U & uVar8;
          puVar15 = (uint *)(lVar4 + (ulong)uVar10 * 8);
          if (*puVar15 == 0) break;
          uVar5 = (ulong)uVar10;
          uVar18 = uVar17;
        } while (((uVar10 + uVar8 + 1) - (*puVar15 & uVar8) & uVar8) != 0);
        puVar16 = (ulong *)(lVar4 + uVar17 * 8);
      }
      iVar2 = *(int *)(this + 0x14);
      *puVar16 = 0;
      uVar10 = iVar2 - 1;
      *(uint *)(this + 0x14) = uVar10;
      if (uVar13 < uVar10) {
        *(undefined8 *)puVar12 = *(undefined8 *)(lVar3 + (ulong)uVar10 * 8);
        lVar3 = *(long *)this;
        if (lVar3 == 0) {
          puVar16 = *(ulong **)(this + 8);
        }
        else {
          uVar10 = *(uint *)(lVar3 + (ulong)*(uint *)(this + 0x14) * 8);
          uVar8 = *(uint *)(this + 0x10);
          puVar7 = *(ulong **)(this + 8);
          uVar11 = (uVar10 >> 0x10 ^ uVar10) * -0x7a143595;
          uVar9 = (uVar11 ^ uVar11 >> 0xd) * -0x3d4d51cb;
          uVar11 = uVar9 ^ uVar9 >> 0x10;
          if (uVar9 == uVar9 >> 0x10) {
            uVar11 = 1;
          }
          uVar9 = uVar11 & uVar8;
          puVar16 = puVar7 + uVar9;
          uVar5 = *puVar16;
          if (((uVar11 != (uint)uVar5) || (*(uint *)(lVar3 + (uVar5 >> 0x20) * 8) != uVar10)) &&
             (puVar16 = puVar7, uVar5 != 0)) {
            uVar14 = 1;
            while( true ) {
              uVar9 = uVar9 + 1 & uVar8;
              puVar16 = puVar7 + uVar9;
              uVar5 = *puVar16;
              if (((uVar11 == (uint)uVar5) && (*(uint *)(lVar3 + (uVar5 >> 0x20) * 8) == uVar10)) ||
                 ((puVar16 = puVar7, uVar5 == 0 ||
                  ((((uVar8 + 1) - ((uint)uVar5 & uVar8)) + uVar9 & uVar8) < uVar14)))) break;
              uVar14 = uVar14 + 1;
            }
          }
        }
        *(uint *)((long)puVar16 + 4) = uVar13;
      }
      return 1;
    }
  }
  if (uVar5 != 0) {
    uVar14 = 1;
    while( true ) {
      uVar9 = uVar9 + 1 & uVar8;
      uVar18 = (ulong)uVar9;
      puVar16 = (ulong *)(lVar4 + uVar18 * 8);
      uVar5 = *puVar16;
      if ((uint)uVar5 == uVar11) {
        uVar13 = (uint)(uVar5 >> 0x20);
        puVar12 = (uint *)(lVar3 + (uVar5 >> 0x20) * 8);
        if (*puVar12 == uVar10) goto LAB_00100d4a;
      }
      if ((uVar5 == 0) || ((((uVar8 + 1) - ((uint)uVar5 & uVar8)) + uVar9 & uVar8) < uVar14)) break;
      uVar14 = uVar14 + 1;
    }
  }
  return 0;
}



/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int> >::replace_key(int const&,
   int const&) */

undefined8 __thiscall
AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::replace_key
          (AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>> *this,int *param_1,
          int *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  ulong *puVar15;
  undefined8 uVar16;
  undefined4 local_50;
  
  uVar2 = *param_1;
  uVar7 = *param_2;
  if (uVar2 == uVar7) {
LAB_00101263:
    uVar8 = 1;
  }
  else {
    lVar3 = *(long *)this;
    if (lVar3 != 0) {
      uVar14 = *(uint *)(this + 0x10);
      lVar4 = *(long *)(this + 8);
      uVar5 = (uVar7 >> 0x10 ^ uVar7) * -0x7a143595;
      uVar6 = (uVar5 ^ uVar5 >> 0xd) * -0x3d4d51cb;
      uVar5 = uVar6 ^ uVar6 >> 0x10;
      if (uVar6 == uVar6 >> 0x10) {
        uVar5 = 1;
      }
      uVar6 = uVar14 & uVar5;
      uVar10 = *(ulong *)(lVar4 + (ulong)uVar6 * 8);
      if ((uVar5 == (uint)uVar10) && (uVar7 == *(uint *)(lVar3 + (uVar10 >> 0x20) * 8))) {
LAB_00101094:
        _err_print_error("replace_key","core/templates/a_hash_map.h",0x18a,
                         "Condition \"_lookup_pos(p_new_key, element_pos, pos)\" is true. Returning: false"
                         ,0,0);
        return 0;
      }
      if (uVar10 != 0) {
        uVar13 = 1;
        while( true ) {
          uVar6 = uVar6 + 1 & uVar14;
          uVar10 = *(ulong *)(lVar4 + (ulong)uVar6 * 8);
          if (((uint)uVar10 == uVar5) && (uVar7 == *(uint *)(lVar3 + (uVar10 >> 0x20) * 8)))
          goto LAB_00101094;
          if ((uVar10 == 0) ||
             ((((uVar14 + 1) - ((uint)uVar10 & uVar14)) + uVar6 & uVar14) < uVar13)) break;
          uVar13 = uVar13 + 1;
        }
      }
      uVar5 = (uVar2 >> 0x10 ^ uVar2) * -0x7a143595;
      uVar6 = (uVar5 ^ uVar5 >> 0xd) * -0x3d4d51cb;
      uVar5 = uVar6 ^ uVar6 >> 0x10;
      if (uVar6 == uVar6 >> 0x10) {
        uVar5 = 1;
      }
      uVar6 = uVar14 & uVar5;
      uVar9 = (ulong)uVar6;
      puVar15 = (ulong *)(lVar4 + uVar9 * 8);
      uVar10 = *puVar15;
      if (uVar5 == (uint)uVar10) {
        uVar11 = uVar10 >> 0x20;
        puVar12 = (uint *)(lVar3 + uVar11 * 8);
        local_50 = (undefined4)(uVar10 >> 0x20);
        if (uVar2 == *puVar12) {
LAB_001011a0:
          *puVar12 = uVar7;
          uVar2 = *(uint *)(this + 0x10);
          uVar7 = uVar6 + 1 & uVar2;
          puVar12 = (uint *)(lVar4 + (ulong)uVar7 * 8);
          if ((*puVar12 != 0) && (((uVar7 + uVar2 + 1) - (*puVar12 & uVar2) & uVar2) != 0)) {
            do {
              uVar10 = (ulong)uVar7;
              puVar1 = (undefined8 *)(lVar4 + uVar9 * 8);
              uVar8 = *(undefined8 *)puVar12;
              *(undefined8 *)puVar12 = *puVar1;
              *puVar1 = uVar8;
              uVar7 = uVar7 + 1 & uVar2;
              puVar12 = (uint *)(lVar4 + (ulong)uVar7 * 8);
              if (*puVar12 == 0) break;
              uVar9 = uVar10;
            } while (((uVar7 + uVar2 + 1) - (*puVar12 & uVar2) & uVar2) != 0);
            puVar15 = (ulong *)(lVar4 + uVar10 * 8);
          }
          *puVar15 = 0;
          uVar7 = ((uint)*param_2 >> 0x10 ^ *param_2) * -0x7a143595;
          uVar7 = (uVar7 ^ uVar7 >> 0xd) * -0x3d4d51cb;
          uVar10 = (ulong)(uVar7 ^ uVar7 >> 0x10);
          if (uVar7 == uVar7 >> 0x10) {
            uVar10 = 1;
          }
          uVar7 = uVar2 & (uint)uVar10;
          puVar15 = (ulong *)(lVar4 + (ulong)uVar7 * 8);
          if (*puVar15 == 0) {
            *puVar15 = uVar11 << 0x20 | uVar10;
          }
          else {
            uVar7 = uVar7 + 1 & uVar2;
            uVar14 = 1;
            puVar12 = (uint *)(lVar4 + (ulong)uVar7 * 8);
            lVar3 = *(long *)puVar12;
            uVar8 = CONCAT44(local_50,(uint)uVar10);
            while (lVar3 != 0) {
              uVar5 = (uVar2 + 1 + uVar7) - (*puVar12 & uVar2) & uVar2;
              uVar16 = uVar8;
              if (uVar5 < uVar14) {
                uVar16 = *(undefined8 *)puVar12;
                *(undefined8 *)puVar12 = uVar8;
                uVar14 = uVar5;
              }
              uVar14 = uVar14 + 1;
              uVar7 = uVar7 + 1 & uVar2;
              puVar12 = (uint *)(lVar4 + (ulong)uVar7 * 8);
              uVar8 = uVar16;
              lVar3 = *(long *)puVar12;
            }
            *(undefined8 *)puVar12 = uVar8;
          }
          goto LAB_00101263;
        }
      }
      if (uVar10 != 0) {
        uVar13 = 1;
        while( true ) {
          uVar6 = uVar6 + 1 & uVar14;
          uVar9 = (ulong)uVar6;
          puVar15 = (ulong *)(lVar4 + uVar9 * 8);
          uVar10 = *puVar15;
          if ((uint)uVar10 == uVar5) {
            uVar11 = uVar10 >> 0x20;
            local_50 = (undefined4)(uVar10 >> 0x20);
            puVar12 = (uint *)(lVar3 + uVar11 * 8);
            if (uVar2 == *puVar12) goto LAB_001011a0;
          }
          if ((uVar10 == 0) ||
             ((((uVar14 + 1) - ((uint)uVar10 & uVar14)) + uVar6 & uVar14) < uVar13)) break;
          uVar13 = uVar13 + 1;
        }
      }
    }
    _err_print_error("replace_key","core/templates/a_hash_map.h",0x18b,
                     "Condition \"!_lookup_pos(p_old_key, element_pos, pos)\" is true. Returning: false"
                     ,0,0);
    uVar8 = 0;
  }
  return uVar8;
}



/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int> >::reserve(unsigned int)
    */

void __thiscall
AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::reserve
          (AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>> *this,uint param_1)

{
  uint uVar1;
  
  if (param_1 < *(int *)(this + 0x10) + 1U) {
    _err_print_error("reserve","core/templates/a_hash_map.h",0x1a2,
                     "Condition \"p_new_capacity < get_capacity()\" is true.",
                     "It is impossible to reserve less capacity than is currently available.",0,0);
    return;
  }
  if (*(long *)this != 0) {
    _resize_and_rehash(this,param_1);
    return;
  }
  uVar1 = 4;
  if (3 < param_1) {
    uVar1 = param_1;
  }
  uVar1 = uVar1 - 1 | uVar1 - 1 >> 1;
  uVar1 = uVar1 | uVar1 >> 2;
  uVar1 = uVar1 | uVar1 >> 4;
  uVar1 = uVar1 | uVar1 >> 8;
  *(uint *)(this + 0x10) = uVar1 | uVar1 >> 0x10;
  return;
}



/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int> >::begin() */

void AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::begin(void)

{
  long lVar1;
  long *in_RSI;
  long *in_RDI;
  
  lVar1 = *in_RSI;
  in_RDI[2] = lVar1 + (ulong)*(uint *)((long)in_RSI + 0x14) * 8;
  *in_RDI = lVar1;
  in_RDI[1] = lVar1;
  return;
}



/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int> >::end() */

void AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::end(void)

{
  long lVar1;
  long lVar2;
  long *in_RSI;
  long *in_RDI;
  
  lVar2 = *in_RSI;
  lVar1 = lVar2 + (ulong)*(uint *)((long)in_RSI + 0x14) * 8;
  in_RDI[2] = lVar1;
  *in_RDI = lVar1;
  in_RDI[1] = lVar2;
  return;
}



/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int> >::last() */

void AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::last(void)

{
  long lVar1;
  long lVar2;
  long *in_RSI;
  undefined1 (*in_RDI) [16];
  
  if (*(uint *)((long)in_RSI + 0x14) != 0) {
    lVar1 = *in_RSI;
    lVar2 = (ulong)*(uint *)((long)in_RSI + 0x14) * 8;
    *(long *)in_RDI[1] = lVar1 + lVar2;
    *(long *)*in_RDI = lVar1 + -8 + lVar2;
    *(long *)(*in_RDI + 8) = lVar1;
    return;
  }
  *(undefined8 *)in_RDI[1] = 0;
  *in_RDI = (undefined1  [16])0x0;
  return;
}



/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int> >::find(int const&) */

int * AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::find(int *param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  uint *in_RDX;
  long *in_RSI;
  uint uVar8;
  uint *puVar9;
  
  lVar4 = *in_RSI;
  if (lVar4 != 0) {
    uVar2 = *in_RDX;
    uVar3 = *(uint *)(in_RSI + 2);
    uVar6 = (uVar2 >> 0x10 ^ uVar2) * -0x7a143595;
    uVar7 = (uVar6 ^ uVar6 >> 0xd) * -0x3d4d51cb;
    uVar6 = uVar7 ^ uVar7 >> 0x10;
    if (uVar7 == uVar7 >> 0x10) {
      uVar6 = 1;
    }
    uVar7 = uVar6 & uVar3;
    uVar5 = *(ulong *)(in_RSI[1] + (ulong)uVar7 * 8);
    if ((uVar6 == (uint)uVar5) && (puVar9 = (uint *)(lVar4 + (uVar5 >> 0x20) * 8), *puVar9 == uVar2)
       ) {
LAB_001015f9:
      uVar2 = *(uint *)((long)in_RSI + 0x14);
      *(uint **)param_1 = puVar9;
      *(long *)(param_1 + 2) = lVar4;
      *(ulong *)(param_1 + 4) = lVar4 + (ulong)uVar2 * 8;
      return param_1;
    }
    if (uVar5 != 0) {
      uVar8 = 1;
      while( true ) {
        uVar7 = uVar7 + 1 & uVar3;
        uVar5 = *(ulong *)(in_RSI[1] + (ulong)uVar7 * 8);
        if ((uVar6 == (uint)uVar5) &&
           (puVar9 = (uint *)(lVar4 + (uVar5 >> 0x20) * 8), *puVar9 == uVar2)) goto LAB_001015f9;
        if ((uVar5 == 0) || ((((uVar3 + 1) - ((uint)uVar5 & uVar3)) + uVar7 & uVar3) < uVar8))
        break;
        uVar8 = uVar8 + 1;
      }
    }
  }
  lVar1 = lVar4 + (ulong)*(uint *)((long)in_RSI + 0x14) * 8;
  *(long *)(param_1 + 4) = lVar1;
  *(long *)param_1 = lVar1;
  *(long *)(param_1 + 2) = lVar4;
  return param_1;
}



/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int> >::remove(AHashMap<int,
   int, HashMapHasherDefault, HashMapComparatorDefault<int> >::Iterator const&) */

void __thiscall
AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::remove
          (AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>> *this,
          Iterator *param_1)

{
  if (*(int **)(param_1 + 0x10) != *(int **)param_1) {
    erase(this,*(int **)param_1);
    return;
  }
  return;
}



/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int> >::begin() const */

void AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::begin(void)

{
  long lVar1;
  long *in_RSI;
  long *in_RDI;
  
  lVar1 = *in_RSI;
  in_RDI[2] = lVar1 + (ulong)*(uint *)((long)in_RSI + 0x14) * 8;
  *in_RDI = lVar1;
  in_RDI[1] = lVar1;
  return;
}



/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int> >::end() const */

void AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::end(void)

{
  long lVar1;
  long lVar2;
  long *in_RSI;
  long *in_RDI;
  
  lVar2 = *in_RSI;
  lVar1 = lVar2 + (ulong)*(uint *)((long)in_RSI + 0x14) * 8;
  in_RDI[2] = lVar1;
  *in_RDI = lVar1;
  in_RDI[1] = lVar2;
  return;
}



/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int> >::last() const */

void AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::last(void)

{
  long lVar1;
  long lVar2;
  long *in_RSI;
  undefined1 (*in_RDI) [16];
  
  if (*(uint *)((long)in_RSI + 0x14) != 0) {
    lVar1 = *in_RSI;
    lVar2 = (ulong)*(uint *)((long)in_RSI + 0x14) * 8;
    *(long *)in_RDI[1] = lVar1 + lVar2;
    *(long *)*in_RDI = lVar1 + -8 + lVar2;
    *(long *)(*in_RDI + 8) = lVar1;
    return;
  }
  *(undefined8 *)in_RDI[1] = 0;
  *in_RDI = (undefined1  [16])0x0;
  return;
}



/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int> >::find(int const&) const
    */

int * AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::find(int *param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  uint *in_RDX;
  long *in_RSI;
  uint uVar8;
  uint *puVar9;
  
  lVar4 = *in_RSI;
  if (lVar4 != 0) {
    uVar2 = *in_RDX;
    uVar3 = *(uint *)(in_RSI + 2);
    uVar6 = (uVar2 >> 0x10 ^ uVar2) * -0x7a143595;
    uVar7 = (uVar6 ^ uVar6 >> 0xd) * -0x3d4d51cb;
    uVar6 = uVar7 ^ uVar7 >> 0x10;
    if (uVar7 == uVar7 >> 0x10) {
      uVar6 = 1;
    }
    uVar7 = uVar6 & uVar3;
    uVar5 = *(ulong *)(in_RSI[1] + (ulong)uVar7 * 8);
    if ((uVar6 == (uint)uVar5) && (puVar9 = (uint *)(lVar4 + (uVar5 >> 0x20) * 8), *puVar9 == uVar2)
       ) {
LAB_001017f9:
      uVar2 = *(uint *)((long)in_RSI + 0x14);
      *(uint **)param_1 = puVar9;
      *(long *)(param_1 + 2) = lVar4;
      *(ulong *)(param_1 + 4) = lVar4 + (ulong)uVar2 * 8;
      return param_1;
    }
    if (uVar5 != 0) {
      uVar8 = 1;
      while( true ) {
        uVar7 = uVar7 + 1 & uVar3;
        uVar5 = *(ulong *)(in_RSI[1] + (ulong)uVar7 * 8);
        if ((uVar6 == (uint)uVar5) &&
           (puVar9 = (uint *)(lVar4 + (uVar5 >> 0x20) * 8), *puVar9 == uVar2)) goto LAB_001017f9;
        if ((uVar5 == 0) || ((((uVar3 + 1) - ((uint)uVar5 & uVar3)) + uVar7 & uVar3) < uVar8))
        break;
        uVar8 = uVar8 + 1;
      }
    }
  }
  lVar1 = lVar4 + (ulong)*(uint *)((long)in_RSI + 0x14) * 8;
  *(long *)(param_1 + 4) = lVar1;
  *(long *)param_1 = lVar1;
  *(long *)(param_1 + 2) = lVar4;
  return param_1;
}



/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int> >::operator[](int const&)
   const */

uint * __thiscall
AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::operator[]
          (AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>> *this,int *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  code *pcVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  
  lVar3 = *(long *)this;
  if (lVar3 != 0) {
    uVar1 = *param_1;
    uVar2 = *(uint *)(this + 0x10);
    uVar6 = (uVar1 >> 0x10 ^ uVar1) * -0x7a143595;
    uVar6 = (uVar6 ^ uVar6 >> 0xd) * -0x3d4d51cb;
    uVar9 = uVar6 ^ uVar6 >> 0x10;
    if (uVar6 == uVar6 >> 0x10) {
      uVar9 = 1;
    }
    uVar6 = uVar2 & uVar9;
    uVar4 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar6 * 8);
    if ((uVar9 == (uint)uVar4) && (puVar7 = (uint *)(lVar3 + (uVar4 >> 0x20) * 8), *puVar7 == uVar1)
       ) {
LAB_0010193a:
      return puVar7 + 1;
    }
    if (uVar4 != 0) {
      uVar8 = 1;
      while( true ) {
        uVar6 = uVar6 + 1 & uVar2;
        uVar4 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar6 * 8);
        if (((uint)uVar4 == uVar9) &&
           (puVar7 = (uint *)(lVar3 + (uVar4 >> 0x20) * 8), *puVar7 == uVar1)) goto LAB_0010193a;
        if ((uVar4 == 0) || ((((uVar2 + 1) - ((uint)uVar4 & uVar2)) + uVar6 & uVar2) < uVar8))
        break;
        uVar8 = uVar8 + 1;
      }
    }
  }
  _err_print_error("operator[]","core/templates/a_hash_map.h",0x24e,
                   "FATAL: Condition \"!exists\" is true.",0,0);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}



/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int> >::operator[](int const&)
    */

uint * __thiscall
AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::operator[]
          (AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>> *this,int *param_1)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  long in_FS_OFFSET;
  int local_34;
  long local_30;
  
  uVar5 = *param_1;
  lVar1 = *(long *)this;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uVar5 >> 0x10 ^ uVar5) * -0x7a143595;
  uVar4 = (uVar3 ^ uVar3 >> 0xd) * -0x3d4d51cb;
  uVar3 = uVar4 ^ uVar4 >> 0x10;
  if (uVar4 == uVar4 >> 0x10) {
    uVar3 = 1;
  }
  if (lVar1 != 0) {
    uVar4 = *(uint *)(this + 0x10);
    uVar7 = uVar4 & uVar3;
    uVar2 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar7 * 8);
    if ((uVar3 == (uint)uVar2) && (puVar6 = (uint *)(lVar1 + (uVar2 >> 0x20) * 8), *puVar6 == uVar5)
       ) {
LAB_00101a6c:
      puVar6 = puVar6 + 1;
      goto LAB_00101a70;
    }
    if (uVar2 != 0) {
      uVar8 = 1;
      while( true ) {
        uVar7 = uVar7 + 1 & uVar4;
        uVar2 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar7 * 8);
        if (((uint)uVar2 == uVar3) &&
           (puVar6 = (uint *)(lVar1 + (uVar2 >> 0x20) * 8), *puVar6 == uVar5)) goto LAB_00101a6c;
        if ((uVar2 == 0) || ((((uVar4 + 1) - ((uint)uVar2 & uVar4)) + uVar7 & uVar4) < uVar8))
        break;
        uVar8 = uVar8 + 1;
      }
    }
  }
  local_34 = 0;
  uVar5 = _insert_element(this,param_1,&local_34,uVar3);
  puVar6 = (uint *)(*(long *)this + 4 + (ulong)uVar5 * 8);
LAB_00101a70:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar6;
}



/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int> >::insert(int const&, int
   const&) */

int * AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::insert
                (int *param_1,int *param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *in_RCX;
  uint *in_RDX;
  uint uVar6;
  long lVar7;
  uint *puVar8;
  
  uVar5 = *in_RDX;
  lVar7 = *(long *)param_2;
  uVar2 = (uVar5 >> 0x10 ^ uVar5) * -0x7a143595;
  uVar3 = (uVar2 ^ uVar2 >> 0xd) * -0x3d4d51cb;
  uVar2 = uVar3 ^ uVar3 >> 0x10;
  if (uVar3 == uVar3 >> 0x10) {
    uVar2 = 1;
  }
  if (lVar7 != 0) {
    uVar3 = param_2[4];
    uVar4 = uVar3 & uVar2;
    uVar1 = *(ulong *)(*(long *)(param_2 + 2) + (ulong)uVar4 * 8);
    if ((uVar2 == (uint)uVar1) && (puVar8 = (uint *)(lVar7 + (uVar1 >> 0x20) * 8), *puVar8 == uVar5)
       ) {
LAB_00101bab:
      puVar8[1] = *in_RCX;
      goto LAB_00101bb3;
    }
    if (uVar1 != 0) {
      uVar6 = 1;
      while( true ) {
        uVar4 = uVar4 + 1 & uVar3;
        uVar1 = *(ulong *)(*(long *)(param_2 + 2) + (ulong)uVar4 * 8);
        if (((uint)uVar1 == uVar2) &&
           (puVar8 = (uint *)(lVar7 + (uVar1 >> 0x20) * 8), *puVar8 == uVar5)) goto LAB_00101bab;
        if ((uVar1 == 0) || ((((uVar3 + 1) - ((uint)uVar1 & uVar3)) + uVar4 & uVar3) < uVar6))
        break;
        uVar6 = uVar6 + 1;
      }
    }
  }
  uVar5 = _insert_element((AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>> *)
                          param_2,(int *)in_RDX,(int *)in_RCX,uVar2);
  lVar7 = *(long *)param_2;
  puVar8 = (uint *)(lVar7 + (ulong)uVar5 * 8);
LAB_00101bb3:
  uVar5 = param_2[5];
  *(uint **)param_1 = puVar8;
  *(long *)(param_1 + 2) = lVar7;
  *(ulong *)(param_1 + 4) = lVar7 + (ulong)uVar5 * 8;
  return param_1;
}



/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int> >::insert_new(int const&,
   int const&) */

int * AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::insert_new
                (int *param_1,int *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int *in_RCX;
  uint *in_RDX;
  
  uVar2 = (*in_RDX >> 0x10 ^ *in_RDX) * -0x7a143595;
  uVar2 = (uVar2 ^ uVar2 >> 0xd) * -0x3d4d51cb;
  uVar3 = uVar2 ^ uVar2 >> 0x10;
  if (uVar2 == uVar2 >> 0x10) {
    uVar3 = 1;
  }
  uVar2 = _insert_element((AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>> *)
                          param_2,(int *)in_RDX,in_RCX,uVar3);
  lVar1 = *(long *)param_2;
  *(ulong *)(param_1 + 4) = lVar1 + (ulong)(uint)param_2[5] * 8;
  *(ulong *)param_1 = lVar1 + (ulong)uVar2 * 8;
  *(long *)(param_1 + 2) = lVar1;
  return param_1;
}



/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int> >::get_elements_ptr() */

undefined8 __thiscall
AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::get_elements_ptr
          (AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>> *this)

{
  return *(undefined8 *)this;
}



/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int> >::get_index(int const&)
    */

ulong __thiscall
AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::get_index
          (AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>> *this,int *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  
  lVar3 = *(long *)this;
  if (lVar3 == 0) {
    return 0xffffffff;
  }
  uVar1 = *param_1;
  uVar2 = *(uint *)(this + 0x10);
  uVar5 = (uVar1 >> 0x10 ^ uVar1) * -0x7a143595;
  uVar5 = (uVar5 ^ uVar5 >> 0xd) * -0x3d4d51cb;
  uVar8 = uVar5 ^ uVar5 >> 0x10;
  if (uVar5 == uVar5 >> 0x10) {
    uVar8 = 1;
  }
  uVar5 = uVar2 & uVar8;
  uVar4 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar5 * 8);
  if ((uVar8 != (uint)uVar4) || (uVar6 = uVar4 >> 0x20, *(uint *)(lVar3 + uVar6 * 8) != uVar1)) {
    if (uVar4 != 0) {
      uVar7 = 1;
      while( true ) {
        uVar5 = uVar5 + 1 & uVar2;
        uVar4 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar5 * 8);
        if (((uint)uVar4 == uVar8) && (*(uint *)(lVar3 + (uVar4 >> 0x20) * 8) == uVar1)) {
          return uVar4 >> 0x20;
        }
        if ((uVar4 == 0) || ((((uVar2 + 1) - ((uint)uVar4 & uVar2)) + uVar5 & uVar2) < uVar7))
        break;
        uVar7 = uVar7 + 1;
      }
    }
    uVar6 = 0xffffffff;
  }
  return uVar6;
}



/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int> >::get_by_index(unsigned
   int) */

long __thiscall
AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::get_by_index
          (AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>> *this,uint param_1)

{
  code *pcVar1;
  
  if (param_1 < *(uint *)(this + 0x14)) {
    return *(long *)this + (ulong)param_1 * 8;
  }
  _err_print_index_error
            ("get_by_index","core/templates/a_hash_map.h",0x28b,(ulong)param_1,
             (ulong)*(uint *)(this + 0x14),"p_index","num_elements","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int> >::erase_by_index(unsigned
   int) */

undefined8 __thiscall
AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::erase_by_index
          (AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>> *this,uint param_1)

{
  undefined8 uVar1;
  
  if (*(uint *)(this + 0x14) <= param_1) {
    return 0;
  }
  uVar1 = erase(this,(int *)(*(long *)this + (ulong)param_1 * 8));
  return uVar1;
}



/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int> >::AHashMap(AHashMap<int,
   int, HashMapHasherDefault, HashMapComparatorDefault<int> > const&) */

void __thiscall
AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::AHashMap
          (AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>> *this,
          AHashMap *param_1)

{
  void *__src;
  undefined8 uVar1;
  void *__dest;
  ulong __n;
  
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x10) = uVar1;
  if ((int)((ulong)uVar1 >> 0x20) == 0) {
    return;
  }
  __n = (ulong)((int)uVar1 + 1) << 3;
  uVar1 = Memory::alloc_static(__n,false);
  *(undefined8 *)(this + 8) = uVar1;
  __dest = (void *)Memory::alloc_static
                             ((ulong)((*(uint *)(this + 0x10) + 1 >> 2 ^ *(uint *)(this + 0x10)) + 1
                                     ) << 3,false);
  __src = *(void **)param_1;
  *(void **)this = __dest;
  memcpy(__dest,__src,(ulong)*(uint *)(this + 0x14) << 3);
  memcpy(*(void **)(this + 8),*(void **)(param_1 + 8),__n);
  return;
}



/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int> >::AHashMap(HashMap<int,
   int, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, int> > > const&) */

ulong __thiscall
AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::AHashMap
          (AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>> *this,
          HashMap *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uStack_28;
  
  uVar2 = *(uint *)(param_1 + 0x2c);
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  if (uVar2 == 0) {
    uStack_28 = 0;
    _err_print_error("reserve","core/templates/a_hash_map.h",0x1a2,
                     "Condition \"p_new_capacity < get_capacity()\" is true.",
                     "It is impossible to reserve less capacity than is currently available.",0);
  }
  else {
    if (uVar2 < 4) {
      uVar2 = 4;
    }
    uVar2 = uVar2 - 1 | uVar2 - 1 >> 1;
    uVar2 = uVar2 | uVar2 >> 2;
    uVar2 = uVar2 | uVar2 >> 4;
    uVar2 = uVar2 | uVar2 >> 8;
    uVar2 = uVar2 | uVar2 >> 0x10;
    uStack_28 = (ulong)uVar2;
    *(uint *)(this + 0x10) = uVar2;
  }
  for (puVar1 = *(undefined8 **)(param_1 + 0x18); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)*puVar1) {
    uVar2 = (*(uint *)(puVar1 + 2) >> 0x10 ^ *(uint *)(puVar1 + 2)) * -0x7a143595;
    uVar2 = (uVar2 ^ uVar2 >> 0xd) * -0x3d4d51cb;
    uVar3 = uVar2 ^ uVar2 >> 0x10;
    if (uVar2 == uVar2 >> 0x10) {
      uVar3 = 1;
    }
    uStack_28 = _insert_element(this,(int *)(puVar1 + 2),(int *)((long)puVar1 + 0x14),uVar3);
  }
  return uStack_28;
}



/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int>
   >::TEMPNAMEPLACEHOLDERVALUE(AHashMap<int, int, HashMapHasherDefault,
   HashMapComparatorDefault<int> > const&) */

void __thiscall
AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::operator=
          (AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>> *this,
          AHashMap *param_1)

{
  undefined8 uVar1;
  void *__dest;
  ulong __n;
  
  if (this == (AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>> *)param_1) {
    return;
  }
  if (*(void **)this != (void *)0x0) {
    Memory::free_static(*(void **)this,false);
    Memory::free_static(*(void **)(this + 8),false);
    *(undefined8 *)this = 0;
  }
  *(undefined8 *)(this + 0x10) = 0xf;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x10) = uVar1;
  if ((int)((ulong)uVar1 >> 0x20) == 0) {
    return;
  }
  __n = (ulong)((int)uVar1 + 1) << 3;
  uVar1 = Memory::alloc_static(__n,false);
  *(undefined8 *)(this + 8) = uVar1;
  __dest = (void *)Memory::alloc_static
                             ((ulong)((*(uint *)(this + 0x10) + 1 >> 2 ^ *(uint *)(this + 0x10)) + 1
                                     ) << 3,false);
  *(void **)this = __dest;
  memcpy(__dest,*(void **)param_1,(ulong)*(uint *)(this + 0x14) << 3);
  memcpy(*(void **)(this + 8),*(void **)(param_1 + 8),__n);
  return;
}



/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int>
   >::TEMPNAMEPLACEHOLDERVALUE(HashMap<int, int, HashMapHasherDefault,
   HashMapComparatorDefault<int>, DefaultTypedAllocator<HashMapElement<int, int> > > const&) */

void __thiscall
AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::operator=
          (AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>> *this,
          HashMap *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(void **)this != (void *)0x0) {
    Memory::free_static(*(void **)this,false);
    Memory::free_static(*(void **)(this + 8),false);
    *(undefined8 *)this = 0;
  }
  *(undefined8 *)(this + 0x10) = 0xf;
  uVar2 = *(uint *)(param_1 + 0x2c);
  if (0x10 < uVar2) {
    if (*(long *)this == 0) {
      uVar2 = uVar2 - 1 | uVar2 - 1 >> 1;
      uVar2 = uVar2 | uVar2 >> 2;
      uVar2 = uVar2 | uVar2 >> 4;
      uVar2 = uVar2 | uVar2 >> 8;
      *(uint *)(this + 0x10) = uVar2 | uVar2 >> 0x10;
    }
    else {
      _resize_and_rehash(this,uVar2);
    }
  }
  for (puVar1 = *(undefined8 **)(param_1 + 0x18); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)*puVar1) {
    uVar2 = (*(uint *)(puVar1 + 2) >> 0x10 ^ *(uint *)(puVar1 + 2)) * -0x7a143595;
    uVar2 = (uVar2 ^ uVar2 >> 0xd) * -0x3d4d51cb;
    uVar3 = uVar2 ^ uVar2 >> 0x10;
    if (uVar2 == uVar2 >> 0x10) {
      uVar3 = 1;
    }
    _insert_element(this,(int *)(puVar1 + 2),(int *)((long)puVar1 + 0x14),uVar3);
  }
  return;
}



/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int> >::AHashMap(unsigned int)
    */

void __thiscall
AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::AHashMap
          (AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>> *this,uint param_1)

{
  uint uVar1;
  
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  if (param_1 < 4) {
    param_1 = 4;
  }
  uVar1 = param_1 - 1 >> 1 | param_1 - 1;
  uVar1 = uVar1 | uVar1 >> 2;
  uVar1 = uVar1 | uVar1 >> 4;
  uVar1 = uVar1 | uVar1 >> 8;
  *(uint *)(this + 0x10) = uVar1 | uVar1 >> 0x10;
  return;
}



/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int> >::AHashMap() */

void __thiscall
AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::AHashMap
          (AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>> *this)

{
  *(undefined8 *)(this + 0x10) = 0xf;
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  return;
}



/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int>
   >::AHashMap(std::initializer_list<KeyValue<int, int> >) */

ulong AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::AHashMap
                (AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>> *param_1,
                uint *param_2,long param_3)

{
  uint *puVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  ulong uStack_48;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined1 (*) [16])param_1 = (undefined1  [16])0x0;
  uVar4 = (uint)param_3;
  if (uVar4 == 0) {
    uStack_48 = 0;
    _err_print_error("reserve","core/templates/a_hash_map.h",0x1a2,
                     "Condition \"p_new_capacity < get_capacity()\" is true.",
                     "It is impossible to reserve less capacity than is currently available.",0);
  }
  else {
    uVar5 = 4;
    if (3 < uVar4) {
      uVar5 = uVar4;
    }
    uVar4 = uVar5 - 1 | uVar5 - 1 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    uStack_48 = (ulong)uVar4;
    *(uint *)(param_1 + 0x10) = uVar4;
  }
  puVar1 = param_2 + param_3 * 2;
  if (param_2 != puVar1) {
    do {
      uVar4 = *param_2;
      lVar2 = *(long *)param_1;
      uVar5 = (uVar4 >> 0x10 ^ uVar4) * -0x7a143595;
      uVar5 = (uVar5 ^ uVar5 >> 0xd) * -0x3d4d51cb;
      uVar8 = uVar5 ^ uVar5 >> 0x10;
      if (uVar5 == uVar5 >> 0x10) {
        uVar8 = 1;
      }
      if (lVar2 == 0) {
LAB_00102360:
        uStack_48 = _insert_element(param_1,(int *)param_2,(int *)(param_2 + 1),uVar8);
      }
      else {
        uVar5 = *(uint *)(param_1 + 0x10);
        uVar6 = uVar5 & uVar8;
        uVar3 = *(ulong *)(*(long *)(param_1 + 8) + (ulong)uVar6 * 8);
        if ((uVar8 != (uint)uVar3) ||
           (puVar9 = (uint *)(lVar2 + (uVar3 >> 0x20) * 8), *puVar9 != uVar4)) {
          if (uVar3 != 0) {
            uVar7 = 1;
            while( true ) {
              uVar6 = uVar6 + 1 & uVar5;
              uVar3 = *(ulong *)(*(long *)(param_1 + 8) + (ulong)uVar6 * 8);
              if (((uint)uVar3 == uVar8) &&
                 (puVar9 = (uint *)(lVar2 + (uVar3 >> 0x20) * 8), *puVar9 == uVar4))
              goto LAB_0010233b;
              if ((uVar3 == 0) || ((((uVar5 + 1) - ((uint)uVar3 & uVar5)) + uVar6 & uVar5) < uVar7))
              break;
              uVar7 = uVar7 + 1;
            }
          }
          goto LAB_00102360;
        }
LAB_0010233b:
        uStack_48 = (ulong)param_2[1];
        puVar9[1] = param_2[1];
      }
      param_2 = param_2 + 2;
    } while (puVar1 != param_2);
  }
  return uStack_48;
}



/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int> >::reset() */

void __thiscall
AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::reset
          (AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>> *this)

{
  if (*(void **)this != (void *)0x0) {
    Memory::free_static(*(void **)this,false);
    Memory::free_static(*(void **)(this + 8),false);
    *(undefined8 *)this = 0;
  }
  *(undefined8 *)(this + 0x10) = 0xf;
  return;
}



/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int> >::~AHashMap() */

void __thiscall
AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::~AHashMap
          (AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>> *this)

{
  if (*(void **)this != (void *)0x0) {
    Memory::free_static(*(void **)this,false);
    Memory::free_static(*(void **)(this + 8),false);
    return;
  }
  return;
}



/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int>
   >::ConstIterator::TEMPNAMEPLACEHOLDERVALUE() const */

undefined8 __thiscall
AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::ConstIterator::operator*
          (ConstIterator *this)

{
  return *(undefined8 *)this;
}



/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int>
   >::ConstIterator::TEMPNAMEPLACEHOLDERVALUE() const */

undefined8 __thiscall
AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::ConstIterator::operator->
          (ConstIterator *this)

{
  return *(undefined8 *)this;
}



/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int>
   >::ConstIterator::TEMPNAMEPLACEHOLDERVALUE() */

ConstIterator * __thiscall
AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::ConstIterator::operator++
          (ConstIterator *this)

{
  *(long *)this = *(long *)this + 8;
  return this;
}



/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int>
   >::ConstIterator::TEMPNAMEPLACEHOLDERVALUE() */

ConstIterator * __thiscall
AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::ConstIterator::operator--
          (ConstIterator *this)

{
  long lVar1;
  
  lVar1 = *(long *)this;
  *(ulong *)this = lVar1 - 8U;
  if (lVar1 - 8U < *(ulong *)(this + 8)) {
    *(undefined8 *)this = *(undefined8 *)(this + 0x10);
  }
  return this;
}



/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int>
   >::ConstIterator::TEMPNAMEPLACEHOLDERVALUE(AHashMap<int, int, HashMapHasherDefault,
   HashMapComparatorDefault<int> >::ConstIterator const&) const */

undefined8 __thiscall
AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::ConstIterator::operator==
          (ConstIterator *this,ConstIterator *param_1)

{
  return CONCAT71((int7)((ulong)*(long *)param_1 >> 8),*(long *)this == *(long *)param_1);
}



/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int>
   >::ConstIterator::TEMPNAMEPLACEHOLDERVALUE(AHashMap<int, int, HashMapHasherDefault,
   HashMapComparatorDefault<int> >::ConstIterator const&) const */

undefined8 __thiscall
AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::ConstIterator::operator!=
          (ConstIterator *this,ConstIterator *param_1)

{
  return CONCAT71((int7)((ulong)*(long *)param_1 >> 8),*(long *)this != *(long *)param_1);
}



/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int> >::ConstIterator::operator
   bool() const */

bool __thiscall AHashMap::ConstIterator::operator_cast_to_bool(ConstIterator *this)

{
  return *(long *)this != *(long *)(this + 0x10);
}



/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int>
   >::ConstIterator::ConstIterator(KeyValue<int, int>*, KeyValue<int, int>*, KeyValue<int, int>*) */

void __thiscall
AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::ConstIterator::ConstIterator
          (ConstIterator *this,KeyValue *param_1,KeyValue *param_2,KeyValue *param_3)

{
  *(KeyValue **)this = param_1;
  *(KeyValue **)(this + 8) = param_2;
  *(KeyValue **)(this + 0x10) = param_3;
  return;
}



/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int>
   >::ConstIterator::ConstIterator() */

void __thiscall
AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::ConstIterator::ConstIterator
          (ConstIterator *this)

{
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  return;
}



/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int>
   >::ConstIterator::ConstIterator(AHashMap<int, int, HashMapHasherDefault,
   HashMapComparatorDefault<int> >::ConstIterator const&) */

void __thiscall
AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::ConstIterator::ConstIterator
          (ConstIterator *this,ConstIterator *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = uVar2;
  *(undefined8 *)(this + 0x10) = uVar1;
  return;
}



/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int>
   >::ConstIterator::TEMPNAMEPLACEHOLDERVALUE(AHashMap<int, int, HashMapHasherDefault,
   HashMapComparatorDefault<int> >::ConstIterator const&) */

void __thiscall
AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::ConstIterator::operator=
          (ConstIterator *this,ConstIterator *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = uVar1;
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  return;
}



/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int>
   >::Iterator::TEMPNAMEPLACEHOLDERVALUE() const */

undefined8 __thiscall
AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::Iterator::operator*
          (Iterator *this)

{
  return *(undefined8 *)this;
}



/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int>
   >::Iterator::TEMPNAMEPLACEHOLDERVALUE() const */

undefined8 __thiscall
AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::Iterator::operator->
          (Iterator *this)

{
  return *(undefined8 *)this;
}



/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int>
   >::Iterator::TEMPNAMEPLACEHOLDERVALUE() */

Iterator * __thiscall
AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::Iterator::operator++
          (Iterator *this)

{
  *(long *)this = *(long *)this + 8;
  return this;
}



/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int>
   >::Iterator::TEMPNAMEPLACEHOLDERVALUE() */

Iterator * __thiscall
AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::Iterator::operator--
          (Iterator *this)

{
  long lVar1;
  
  lVar1 = *(long *)this;
  *(ulong *)this = lVar1 - 8U;
  if (lVar1 - 8U < *(ulong *)(this + 8)) {
    *(undefined8 *)this = *(undefined8 *)(this + 0x10);
  }
  return this;
}



/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int>
   >::Iterator::TEMPNAMEPLACEHOLDERVALUE(AHashMap<int, int, HashMapHasherDefault,
   HashMapComparatorDefault<int> >::Iterator const&) const */

undefined8 __thiscall
AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::Iterator::operator==
          (Iterator *this,Iterator *param_1)

{
  return CONCAT71((int7)((ulong)*(long *)param_1 >> 8),*(long *)this == *(long *)param_1);
}



/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int>
   >::Iterator::TEMPNAMEPLACEHOLDERVALUE(AHashMap<int, int, HashMapHasherDefault,
   HashMapComparatorDefault<int> >::Iterator const&) const */

undefined8 __thiscall
AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::Iterator::operator!=
          (Iterator *this,Iterator *param_1)

{
  return CONCAT71((int7)((ulong)*(long *)param_1 >> 8),*(long *)this != *(long *)param_1);
}



/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int> >::Iterator::operator
   bool() const */

bool __thiscall AHashMap::Iterator::operator_cast_to_bool(Iterator *this)

{
  return *(long *)this != *(long *)(this + 0x10);
}



/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int>
   >::Iterator::Iterator(KeyValue<int, int>*, KeyValue<int, int>*, KeyValue<int, int>*) */

void __thiscall
AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::Iterator::Iterator
          (Iterator *this,KeyValue *param_1,KeyValue *param_2,KeyValue *param_3)

{
  *(KeyValue **)this = param_1;
  *(KeyValue **)(this + 8) = param_2;
  *(KeyValue **)(this + 0x10) = param_3;
  return;
}



/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int> >::Iterator::Iterator() */

void __thiscall
AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::Iterator::Iterator
          (Iterator *this)

{
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  return;
}



/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int>
   >::Iterator::Iterator(AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int>
   >::Iterator const&) */

void __thiscall
AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::Iterator::Iterator
          (Iterator *this,Iterator *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = uVar2;
  *(undefined8 *)(this + 0x10) = uVar1;
  return;
}



/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int>
   >::Iterator::TEMPNAMEPLACEHOLDERVALUE(AHashMap<int, int, HashMapHasherDefault,
   HashMapComparatorDefault<int> >::Iterator const&) */

void __thiscall
AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::Iterator::operator=
          (Iterator *this,Iterator *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = uVar1;
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  return;
}



/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int> >::Iterator::operator
   AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int> >::ConstIterator() const
    */

Iterator * __thiscall AHashMap::Iterator::operator_cast_to_ConstIterator(Iterator *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *in_RSI;
  
  uVar1 = *in_RSI;
  uVar2 = in_RSI[1];
  *(undefined8 *)(this + 0x10) = in_RSI[2];
  *(undefined8 *)this = uVar1;
  *(undefined8 *)(this + 8) = uVar2;
  return this;
}



/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String> >::_hash(String
   const&) const */

int AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::_hash
              (String *param_1)

{
  int iVar1;
  
  iVar1 = String::hash();
  if (iVar1 == 0) {
    iVar1 = 1;
  }
  return iVar1;
}



/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String>
   >::_get_resize_count(unsigned int) */

uint AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::_get_resize_count
               (uint param_1)

{
  return param_1 + 1 >> 2 ^ param_1;
}



/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String>
   >::_get_probe_length(unsigned int, unsigned int, unsigned int) */

uint AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::_get_probe_length
               (uint param_1,uint param_2,uint param_3)

{
  return (param_3 + 1 + param_1) - (param_2 & param_3) & param_3;
}



/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String>
   >::_lookup_pos(String const&, unsigned int&, unsigned int&) const */

undefined8 __thiscall
AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::_lookup_pos
          (AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>> *this,
          String *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  ulong uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint local_4c;
  
  if (*(long *)this != 0) {
    uVar4 = String::hash();
    uVar5 = 1;
    if (uVar4 != 0) {
      uVar5 = uVar4;
    }
    if (*(long *)this != 0) {
      uVar4 = *(uint *)(this + 0x10) & uVar5;
      uVar2 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar4 * 8);
      if (uVar5 == (uint)uVar2) {
        local_4c = (uint)(uVar2 >> 0x20);
        cVar3 = String::operator==((String *)(*(long *)this + (uVar2 >> 0x20) * 0x10),param_1);
        if (cVar3 != '\0') {
LAB_001027a2:
          *param_2 = local_4c;
          *param_3 = uVar4;
          return 1;
        }
      }
      if (uVar2 != 0) {
        uVar6 = 1;
        uVar4 = uVar4 + 1 & *(uint *)(this + 0x10);
        while( true ) {
          uVar2 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar4 * 8);
          if ((uint)uVar2 == uVar5) {
            local_4c = (uint)(uVar2 >> 0x20);
            cVar3 = String::operator==((String *)((uVar2 >> 0x20) * 0x10 + *(long *)this),param_1);
            if (cVar3 != '\0') goto LAB_001027a2;
          }
          if ((uVar2 == 0) ||
             (uVar1 = *(uint *)(this + 0x10),
             (((uVar1 + 1) - ((uint)uVar2 & uVar1)) + uVar4 & uVar1) < uVar6)) break;
          uVar6 = uVar6 + 1;
          uVar4 = uVar4 + 1 & uVar1;
        }
      }
    }
  }
  return 0;
}



/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String>
   >::_lookup_pos_with_hash(String const&, unsigned int&, unsigned int&, unsigned int) const */

undefined8 __thiscall
AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::_lookup_pos_with_hash
          (AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>> *this,
          String *param_1,uint *param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  ulong uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint local_4c;
  
  if (*(long *)this != 0) {
    uVar5 = *(uint *)(this + 0x10) & param_4;
    uVar2 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar5 * 8);
    if (param_4 == (uint)uVar2) {
      local_4c = (uint)(uVar2 >> 0x20);
      cVar3 = String::operator==((String *)(*(long *)this + (uVar2 >> 0x20) * 0x10),param_1);
      if (cVar3 != '\0') {
LAB_00102888:
        *param_2 = local_4c;
        *param_3 = uVar5;
        return 1;
      }
    }
    if (uVar2 != 0) {
      uVar4 = 1;
      uVar5 = uVar5 + 1 & *(uint *)(this + 0x10);
      while( true ) {
        uVar2 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar5 * 8);
        if ((uint)uVar2 == param_4) {
          local_4c = (uint)(uVar2 >> 0x20);
          cVar3 = String::operator==((String *)((uVar2 >> 0x20) * 0x10 + *(long *)this),param_1);
          if (cVar3 != '\0') goto LAB_00102888;
        }
        if ((uVar2 == 0) ||
           (uVar1 = *(uint *)(this + 0x10),
           (((uVar1 + 1) - ((uint)uVar2 & uVar1)) + uVar5 & uVar1) < uVar4)) break;
        uVar4 = uVar4 + 1;
        uVar5 = uVar5 + 1 & uVar1;
      }
    }
  }
  return 0;
}



/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String>
   >::_insert_with_hash(unsigned int, unsigned int) */

void __thiscall
AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::_insert_with_hash
          (AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>> *this,
          uint param_1,uint param_2)

{
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  
  uVar3 = *(uint *)(this + 0x10);
  lVar4 = *(long *)(this + 8);
  plVar1 = (long *)(lVar4 + (ulong)(uVar3 & param_1) * 8);
  if (*plVar1 == 0) {
    *plVar1 = CONCAT44(param_2,param_1);
    return;
  }
  uVar9 = 1;
  uVar7 = (uVar3 & param_1) + 1 & uVar3;
  puVar2 = (uint *)(lVar4 + (ulong)uVar7 * 8);
  lVar5 = *(long *)puVar2;
  uVar6 = CONCAT44(param_2,param_1);
  while (lVar5 != 0) {
    uVar8 = (uVar7 + uVar3 + 1) - (*puVar2 & uVar3) & uVar3;
    uVar10 = uVar6;
    if (uVar8 < uVar9) {
      uVar10 = *(undefined8 *)puVar2;
      *(undefined8 *)puVar2 = uVar6;
      uVar9 = uVar8;
    }
    uVar9 = uVar9 + 1;
    uVar7 = uVar7 + 1 & uVar3;
    puVar2 = (uint *)(lVar4 + (ulong)uVar7 * 8);
    uVar6 = uVar10;
    lVar5 = *(long *)puVar2;
  }
  *(undefined8 *)puVar2 = uVar6;
  return;
}



/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String>
   >::_resize_and_rehash(unsigned int) */

void __thiscall
AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::_resize_and_rehash
          (AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>> *this,
          uint param_1)

{
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  long *plVar14;
  ulong __n;
  
  uVar3 = *(uint *)(this + 0x10);
  plVar4 = *(long **)(this + 8);
  uVar8 = 4;
  if (3 < param_1) {
    uVar8 = param_1;
  }
  uVar8 = uVar8 - 1 | uVar8 - 1 >> 1;
  uVar8 = uVar8 | uVar8 >> 2;
  uVar8 = uVar8 | uVar8 >> 4;
  uVar8 = uVar8 | uVar8 >> 8;
  uVar8 = uVar8 | uVar8 >> 0x10;
  *(uint *)(this + 0x10) = uVar8;
  __n = (ulong)(uVar8 + 1) << 3;
  uVar10 = Memory::alloc_static(__n,false);
  *(undefined8 *)(this + 8) = uVar10;
  uVar10 = Memory::realloc_static
                     (*(void **)this,
                      (ulong)((*(uint *)(this + 0x10) + 1 >> 2 ^ *(uint *)(this + 0x10)) + 1) << 4,
                      false);
  *(undefined8 *)this = uVar10;
  memset(*(void **)(this + 8),0,__n);
  if ((*(int *)(this + 0x14) != 0) && (uVar3 != 0xffffffff)) {
    plVar14 = plVar4;
    do {
      while (lVar5 = *plVar14, lVar5 == 0) {
LAB_00102a38:
        plVar14 = plVar14 + 1;
        if (plVar14 == plVar4 + (ulong)uVar3 + 1) goto LAB_00102a6c;
      }
      uVar8 = *(uint *)(this + 0x10);
      lVar6 = *(long *)(this + 8);
      uVar9 = uVar8 & (uint)lVar5;
      plVar1 = (long *)(lVar6 + (ulong)uVar9 * 8);
      if (*plVar1 != 0) {
        uVar12 = 1;
        uVar9 = uVar9 + 1 & uVar8;
        puVar2 = (uint *)(lVar6 + (ulong)uVar9 * 8);
        lVar7 = *(long *)puVar2;
        while (lVar7 != 0) {
          uVar11 = (uVar9 + uVar8 + 1) - (*puVar2 & uVar8) & uVar8;
          lVar13 = lVar5;
          if (uVar11 < uVar12) {
            lVar13 = *(long *)puVar2;
            *(long *)puVar2 = lVar5;
            uVar12 = uVar11;
          }
          uVar12 = uVar12 + 1;
          uVar9 = uVar9 + 1 & uVar8;
          puVar2 = (uint *)(lVar6 + (ulong)uVar9 * 8);
          lVar5 = lVar13;
          lVar7 = *(long *)puVar2;
        }
        *(long *)puVar2 = lVar5;
        goto LAB_00102a38;
      }
      plVar14 = plVar14 + 1;
      *plVar1 = lVar5;
    } while (plVar14 != plVar4 + (ulong)uVar3 + 1);
  }
LAB_00102a6c:
  Memory::free_static(plVar4,false);
  return;
}



/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String>
   >::_insert_element(String const&, int const&, unsigned int) */

ulong __thiscall
AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::_insert_element
          (AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>> *this,
          String *param_1,int *param_2,uint param_3)

{
  ulong *puVar1;
  uint *puVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  CowData<char32_t> *this_00;
  ulong uVar10;
  undefined8 uVar11;
  
  if (*(long *)this == 0) {
    uVar10 = (ulong)(*(int *)(this + 0x10) + 1) << 3;
    uVar7 = Memory::alloc_static(uVar10,false);
    *(undefined8 *)(this + 8) = uVar7;
    uVar7 = Memory::alloc_static
                      ((ulong)((*(uint *)(this + 0x10) + 1 >> 2 ^ *(uint *)(this + 0x10)) + 1) << 4,
                       false);
    *(undefined8 *)this = uVar7;
    memset(*(void **)(this + 8),0,uVar10);
  }
  uVar3 = *(uint *)(this + 0x10);
  uVar6 = *(uint *)(this + 0x14);
  if ((uVar3 + 1 >> 2 ^ uVar3) < uVar6) {
    _resize_and_rehash(this,uVar3 * 2);
    uVar6 = *(uint *)(this + 0x14);
  }
  uVar10 = (ulong)uVar6;
  this_00 = (CowData<char32_t> *)(uVar10 * 0x10 + *(long *)this);
  *(undefined8 *)this_00 = 0;
  if (*(long *)param_1 != 0) {
    CowData<char32_t>::_ref(this_00,(CowData *)param_1);
    uVar10 = (ulong)*(uint *)(this + 0x14);
  }
  uVar3 = *(uint *)(this + 0x10);
  lVar4 = *(long *)(this + 8);
  *(int *)(this_00 + 8) = *param_2;
  puVar1 = (ulong *)(lVar4 + (ulong)(param_3 & uVar3) * 8);
  if (*puVar1 == 0) {
    *puVar1 = (ulong)param_3 | uVar10 << 0x20;
  }
  else {
    uVar9 = 1;
    uVar6 = (param_3 & uVar3) + 1 & uVar3;
    puVar2 = (uint *)(lVar4 + (ulong)uVar6 * 8);
    lVar5 = *(long *)puVar2;
    uVar7 = CONCAT44((int)uVar10,param_3);
    while (lVar5 != 0) {
      uVar8 = (uVar6 + uVar3 + 1) - (*puVar2 & uVar3) & uVar3;
      uVar11 = uVar7;
      if (uVar8 < uVar9) {
        uVar11 = *(undefined8 *)puVar2;
        *(undefined8 *)puVar2 = uVar7;
        uVar9 = uVar8;
      }
      uVar9 = uVar9 + 1;
      uVar6 = uVar6 + 1 & uVar3;
      puVar2 = (uint *)(lVar4 + (ulong)uVar6 * 8);
      uVar7 = uVar11;
      lVar5 = *(long *)puVar2;
    }
    *(undefined8 *)puVar2 = uVar7;
  }
  *(int *)(this + 0x14) = (int)uVar10 + 1;
  return uVar10;
}



/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String>
   >::_init_from(AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String> >
   const&) */

void __thiscall
AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::_init_from
          (AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>> *this,
          AHashMap *param_1)

{
  undefined8 uVar1;
  long lVar2;
  CowData *pCVar3;
  CowData<char32_t> *this_00;
  ulong __n;
  long lVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x10) = uVar1;
  if ((int)((ulong)uVar1 >> 0x20) == 0) {
    return;
  }
  __n = (ulong)((int)uVar1 + 1) << 3;
  uVar1 = Memory::alloc_static(__n,false);
  *(undefined8 *)(this + 8) = uVar1;
  lVar2 = Memory::alloc_static
                    ((ulong)((*(uint *)(this + 0x10) + 1 >> 2 ^ *(uint *)(this + 0x10)) + 1) << 4,
                     false);
  *(long *)this = lVar2;
  if (*(int *)(this + 0x14) != 0) {
    lVar4 = 0;
    while( true ) {
      this_00 = (CowData<char32_t> *)(lVar2 + lVar4 * 0x10);
      pCVar3 = (CowData *)(lVar4 * 0x10 + *(long *)param_1);
      *(undefined8 *)this_00 = 0;
      if (*(long *)pCVar3 != 0) {
        CowData<char32_t>::_ref(this_00,pCVar3);
      }
      lVar4 = lVar4 + 1;
      *(undefined4 *)(this_00 + 8) = *(undefined4 *)(pCVar3 + 8);
      if (*(uint *)(this + 0x14) <= (uint)lVar4) break;
      lVar2 = *(long *)this;
    }
  }
  memcpy(*(void **)(this + 8),*(void **)(param_1 + 8),__n);
  return;
}



/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String> >::get_capacity()
   const */

int __thiscall
AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::get_capacity
          (AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>> *this)

{
  return *(int *)(this + 0x10) + 1;
}



/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String> >::size() const */

undefined4 __thiscall
AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::size
          (AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>> *this)

{
  return *(undefined4 *)(this + 0x14);
}



/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String> >::is_empty() const
    */

undefined4 __thiscall
AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::is_empty
          (AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>> *this)

{
  return CONCAT31((int3)((uint)*(int *)(this + 0x14) >> 8),*(int *)(this + 0x14) == 0);
}



/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String> >::clear() */

void __thiscall
AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::clear
          (AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>> *this)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  if (*(long *)this == 0) {
    return;
  }
  if (*(int *)(this + 0x14) == 0) {
    return;
  }
  memset(*(void **)(this + 8),0,(ulong)(*(int *)(this + 0x10) + 1) << 3);
  if (*(int *)(this + 0x14) != 0) {
    lVar4 = 0;
    do {
      plVar3 = (long *)(lVar4 * 0x10 + *(long *)this);
      if (*plVar3 != 0) {
        LOCK();
        plVar1 = (long *)(*plVar3 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar2 = *plVar3;
          *plVar3 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      lVar4 = lVar4 + 1;
    } while ((uint)lVar4 < *(uint *)(this + 0x14));
  }
  *(undefined4 *)(this + 0x14) = 0;
  return;
}



/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String> >::get(String
   const&) */

long __thiscall
AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::get
          (AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>> *this,
          String *param_1)

{
  uint uVar1;
  ulong uVar2;
  code *pcVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  
  if (*(long *)this != 0) {
    uVar5 = String::hash();
    uVar6 = 1;
    if (uVar5 != 0) {
      uVar6 = uVar5;
    }
    if (*(long *)this != 0) {
      uVar5 = *(uint *)(this + 0x10);
      uVar2 = *(ulong *)(*(long *)(this + 8) + (ulong)(uVar5 & uVar6) * 8);
      if (uVar6 == (uint)uVar2) {
        lVar7 = (uVar2 >> 0x20) * 0x10;
        cVar4 = String::operator==((String *)(*(long *)this + lVar7),param_1);
        if (cVar4 != '\0') {
LAB_00102efb:
          return lVar7 + *(long *)this + 8;
        }
      }
      if (uVar2 != 0) {
        uVar8 = 1;
        uVar5 = (uVar5 & uVar6) + 1 & *(uint *)(this + 0x10);
        while( true ) {
          uVar2 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar5 * 8);
          if ((uint)uVar2 == uVar6) {
            lVar7 = (uVar2 >> 0x20) * 0x10;
            cVar4 = String::operator==((String *)(lVar7 + *(long *)this),param_1);
            if (cVar4 != '\0') goto LAB_00102efb;
          }
          if ((uVar2 == 0) ||
             (uVar1 = *(uint *)(this + 0x10),
             (((uVar1 + 1) - ((uint)uVar2 & uVar1)) + uVar5 & uVar1) < uVar8)) break;
          uVar8 = uVar8 + 1;
          uVar5 = uVar5 + 1 & uVar1;
        }
      }
    }
  }
  _err_print_error(&_LC3,"core/templates/a_hash_map.h",0x138,"FATAL: Condition \"!exists\" is true."
                   ,"AHashMap key not found.",0,0);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String> >::get(String
   const&) const */

long __thiscall
AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::get
          (AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>> *this,
          String *param_1)

{
  uint uVar1;
  ulong uVar2;
  code *pcVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  
  if (*(long *)this != 0) {
    uVar5 = String::hash();
    uVar6 = 1;
    if (uVar5 != 0) {
      uVar6 = uVar5;
    }
    if (*(long *)this != 0) {
      uVar5 = *(uint *)(this + 0x10);
      uVar2 = *(ulong *)(*(long *)(this + 8) + (ulong)(uVar5 & uVar6) * 8);
      if (uVar6 == (uint)uVar2) {
        lVar7 = (uVar2 >> 0x20) * 0x10;
        cVar4 = String::operator==((String *)(*(long *)this + lVar7),param_1);
        if (cVar4 != '\0') {
LAB_0010305b:
          return lVar7 + *(long *)this + 8;
        }
      }
      if (uVar2 != 0) {
        uVar8 = 1;
        uVar5 = (uVar5 & uVar6) + 1 & *(uint *)(this + 0x10);
        while( true ) {
          uVar2 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar5 * 8);
          if ((uint)uVar2 == uVar6) {
            lVar7 = (uVar2 >> 0x20) * 0x10;
            cVar4 = String::operator==((String *)(lVar7 + *(long *)this),param_1);
            if (cVar4 != '\0') goto LAB_0010305b;
          }
          if ((uVar2 == 0) ||
             (uVar1 = *(uint *)(this + 0x10),
             (((uVar1 + 1) - ((uint)uVar2 & uVar1)) + uVar5 & uVar1) < uVar8)) break;
          uVar8 = uVar8 + 1;
          uVar5 = uVar5 + 1 & uVar1;
        }
      }
    }
  }
  _err_print_error(&_LC3,"core/templates/a_hash_map.h",0x140,"FATAL: Condition \"!exists\" is true."
                   ,"AHashMap key not found.",0,0);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String> >::getptr(String
   const&) const */

long __thiscall
AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::getptr
          (AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>> *this,
          String *param_1)

{
  uint uVar1;
  ulong uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  
  if (*(long *)this == 0) {
    return 0;
  }
  uVar4 = String::hash();
  uVar5 = 1;
  if (uVar4 != 0) {
    uVar5 = uVar4;
  }
  if (*(long *)this != 0) {
    uVar4 = *(uint *)(this + 0x10);
    uVar2 = *(ulong *)(*(long *)(this + 8) + (ulong)(uVar4 & uVar5) * 8);
    if (uVar5 == (uint)uVar2) {
      lVar6 = (uVar2 >> 0x20) * 0x10;
      cVar3 = String::operator==((String *)(*(long *)this + lVar6),param_1);
      if (cVar3 != '\0') {
LAB_001031bb:
        return lVar6 + *(long *)this + 8;
      }
    }
    if (uVar2 != 0) {
      uVar7 = 1;
      uVar4 = (uVar4 & uVar5) + 1 & *(uint *)(this + 0x10);
      while( true ) {
        uVar2 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar4 * 8);
        if (uVar5 == (uint)uVar2) {
          lVar6 = (uVar2 >> 0x20) * 0x10;
          cVar3 = String::operator==((String *)(lVar6 + *(long *)this),param_1);
          if (cVar3 != '\0') goto LAB_001031bb;
        }
        if ((uVar2 == 0) ||
           (uVar1 = *(uint *)(this + 0x10),
           (((uVar1 + 1) - ((uint)uVar2 & uVar1)) + uVar4 & uVar1) < uVar7)) break;
        uVar7 = uVar7 + 1;
        uVar4 = uVar4 + 1 & uVar1;
      }
    }
  }
  return 0;
}



/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String> >::getptr(String
   const&) */

long __thiscall
AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::getptr
          (AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>> *this,
          String *param_1)

{
  uint uVar1;
  ulong uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  
  if (*(long *)this == 0) {
    return 0;
  }
  uVar4 = String::hash();
  uVar5 = 1;
  if (uVar4 != 0) {
    uVar5 = uVar4;
  }
  if (*(long *)this != 0) {
    uVar4 = *(uint *)(this + 0x10);
    uVar2 = *(ulong *)(*(long *)(this + 8) + (ulong)(uVar4 & uVar5) * 8);
    if (uVar5 == (uint)uVar2) {
      lVar6 = (uVar2 >> 0x20) * 0x10;
      cVar3 = String::operator==((String *)(*(long *)this + lVar6),param_1);
      if (cVar3 != '\0') {
LAB_0010330b:
        return lVar6 + *(long *)this + 8;
      }
    }
    if (uVar2 != 0) {
      uVar7 = 1;
      uVar4 = (uVar4 & uVar5) + 1 & *(uint *)(this + 0x10);
      while( true ) {
        uVar2 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar4 * 8);
        if (uVar5 == (uint)uVar2) {
          lVar6 = (uVar2 >> 0x20) * 0x10;
          cVar3 = String::operator==((String *)(lVar6 + *(long *)this),param_1);
          if (cVar3 != '\0') goto LAB_0010330b;
        }
        if ((uVar2 == 0) ||
           (uVar1 = *(uint *)(this + 0x10),
           (((uVar1 + 1) - ((uint)uVar2 & uVar1)) + uVar4 & uVar1) < uVar7)) break;
        uVar7 = uVar7 + 1;
        uVar4 = uVar4 + 1 & uVar1;
      }
    }
  }
  return 0;
}



/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String> >::has(String
   const&) const */

undefined8 __thiscall
AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::has
          (AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>> *this,
          String *param_1)

{
  uint uVar1;
  ulong uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (*(long *)this == 0) {
    return 0;
  }
  uVar4 = String::hash();
  uVar5 = 1;
  if (uVar4 != 0) {
    uVar5 = uVar4;
  }
  if (*(long *)this != 0) {
    uVar4 = *(uint *)(this + 0x10);
    uVar2 = *(ulong *)(*(long *)(this + 8) + (ulong)(uVar4 & uVar5) * 8);
    if ((uVar5 == (uint)uVar2) &&
       (cVar3 = String::operator==((String *)(*(long *)this + (uVar2 >> 0x20) * 0x10),param_1),
       cVar3 != '\0')) {
      return 1;
    }
    if (uVar2 != 0) {
      uVar6 = 1;
      uVar4 = (uVar4 & uVar5) + 1 & *(uint *)(this + 0x10);
      while( true ) {
        uVar2 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar4 * 8);
        if (((uint)uVar2 == uVar5) &&
           (cVar3 = String::operator==((String *)((uVar2 >> 0x20) * 0x10 + *(long *)this),param_1),
           cVar3 != '\0')) {
          return 1;
        }
        if ((uVar2 == 0) ||
           (uVar1 = *(uint *)(this + 0x10),
           (((uVar1 + 1) - ((uint)uVar2 & uVar1)) + uVar4 & uVar1) < uVar6)) break;
        uVar6 = uVar6 + 1;
        uVar4 = uVar4 + 1 & uVar1;
      }
    }
  }
  return 0;
}



/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String> >::erase(String
   const&) */

undefined8 __thiscall
AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::erase
          (AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>> *this,
          String *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  String *pSVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  uint uVar18;
  uint local_3c;
  
  if (*(long *)this == 0) {
    return 0;
  }
  uVar9 = String::hash();
  uVar10 = 1;
  if (uVar9 != 0) {
    uVar10 = uVar9;
  }
  if (*(long *)this == 0) {
    return 0;
  }
  uVar9 = *(uint *)(this + 0x10) & uVar10;
  uVar17 = (ulong)uVar9;
  uVar5 = *(ulong *)(*(long *)(this + 8) + uVar17 * 8);
  if (uVar10 != (uint)uVar5) {
LAB_00103513:
    if (uVar5 != 0) {
      uVar18 = 1;
      uVar9 = uVar9 + 1 & *(uint *)(this + 0x10);
      while( true ) {
        uVar17 = (ulong)uVar9;
        uVar5 = *(ulong *)(*(long *)(this + 8) + uVar17 * 8);
        if (uVar10 == (uint)uVar5) {
          local_3c = (uint)(uVar5 >> 0x20);
          lVar16 = (uVar5 >> 0x20) * 0x10;
          cVar8 = String::operator==((String *)(*(long *)this + lVar16),param_1);
          if (cVar8 != '\0') goto LAB_001035ba;
        }
        if ((uVar5 == 0) ||
           (uVar4 = *(uint *)(this + 0x10),
           (((uVar4 + 1) - ((uint)uVar5 & uVar4)) + uVar9 & uVar4) < uVar18)) break;
        uVar18 = uVar18 + 1;
        uVar9 = uVar9 + 1 & uVar4;
      }
    }
    return 0;
  }
  local_3c = (uint)(uVar5 >> 0x20);
  lVar16 = (uVar5 >> 0x20) * 0x10;
  cVar8 = String::operator==((String *)(*(long *)this + lVar16),param_1);
  if (cVar8 == '\0') goto LAB_00103513;
LAB_001035ba:
  lVar14 = uVar17 * 8;
  uVar10 = *(uint *)(this + 0x10);
  lVar6 = *(long *)(this + 8);
  uVar9 = uVar9 + 1 & uVar10;
  puVar11 = (uint *)(lVar6 + (ulong)uVar9 * 8);
  if ((*puVar11 != 0) &&
     (uVar5 = (ulong)uVar9, ((uVar9 + uVar10 + 1) - (*puVar11 & uVar10) & uVar10) != 0)) {
    do {
      uVar15 = uVar5;
      puVar2 = (undefined8 *)(lVar6 + uVar17 * 8);
      uVar7 = *(undefined8 *)puVar11;
      *(undefined8 *)puVar11 = *puVar2;
      *puVar2 = uVar7;
      uVar9 = (int)uVar15 + 1U & uVar10;
      puVar11 = (uint *)(lVar6 + (ulong)uVar9 * 8);
      if (*puVar11 == 0) break;
      uVar5 = (ulong)uVar9;
      uVar17 = uVar15;
    } while (((uVar9 + uVar10 + 1) - (*puVar11 & uVar10) & uVar10) != 0);
    lVar14 = uVar15 * 8;
  }
  lVar13 = *(long *)this;
  *(undefined8 *)(lVar6 + lVar14) = 0;
  plVar12 = (long *)(lVar13 + lVar16);
  if (*plVar12 != 0) {
    LOCK();
    plVar1 = (long *)(*plVar12 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar14 = *plVar12;
      *plVar12 = 0;
      Memory::free_static((void *)(lVar14 + -0x10),false);
    }
    lVar13 = *(long *)this;
    plVar12 = (long *)(lVar13 + lVar16);
  }
  uVar10 = *(int *)(this + 0x14) - 1;
  *(uint *)(this + 0x14) = uVar10;
  if (uVar10 <= local_3c) {
    return 1;
  }
  plVar1 = (long *)(lVar13 + (ulong)uVar10 * 0x10);
  lVar16 = plVar1[1];
  *plVar12 = *plVar1;
  plVar12[1] = lVar16;
  pSVar3 = (String *)(*(long *)this + (ulong)*(uint *)(this + 0x14) * 0x10);
  if (*(long *)this != 0) {
    uVar9 = String::hash();
    uVar10 = 1;
    if (uVar9 != 0) {
      uVar10 = uVar9;
    }
    if (*(long *)this != 0) {
      lVar16 = *(long *)(this + 8);
      uVar9 = *(uint *)(this + 0x10) & uVar10;
      uVar5 = *(ulong *)(lVar16 + (ulong)uVar9 * 8);
      if (uVar10 == (uint)uVar5) {
        cVar8 = String::operator==((String *)(*(long *)this + (uVar5 >> 0x20) * 0x10),pSVar3);
        if (cVar8 != '\0') {
          lVar16 = *(long *)(this + 8) + (ulong)uVar9 * 8;
          goto LAB_001037a0;
        }
        lVar16 = *(long *)(this + 8);
      }
      if (uVar5 != 0) {
        uVar18 = 1;
        uVar9 = uVar9 + 1 & *(uint *)(this + 0x10);
        do {
          uVar5 = *(ulong *)(lVar16 + (ulong)uVar9 * 8);
          if ((uint)uVar5 == uVar10) {
            cVar8 = String::operator==((String *)((uVar5 >> 0x20) * 0x10 + *(long *)this),pSVar3);
            if (cVar8 != '\0') {
              lVar16 = *(long *)(this + 8) + (ulong)uVar9 * 8;
              break;
            }
            lVar16 = *(long *)(this + 8);
          }
          if ((uVar5 == 0) ||
             (uVar4 = *(uint *)(this + 0x10),
             (((uVar4 + 1) - ((uint)uVar5 & uVar4)) + uVar9 & uVar4) < uVar18)) break;
          uVar18 = uVar18 + 1;
          uVar9 = uVar9 + 1 & uVar4;
        } while( true );
      }
      goto LAB_001037a0;
    }
  }
  lVar16 = *(long *)(this + 8);
LAB_001037a0:
  *(uint *)(lVar16 + 4) = local_3c;
  return 1;
}



/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String>
   >::replace_key(String const&, String const&) */

uint __thiscall
AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::replace_key
          (AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>> *this,
          String *param_1,String *param_2)

{
  undefined8 *puVar1;
  ulong *puVar2;
  uint uVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  ulong local_58;
  undefined4 local_48;
  
  uVar6 = String::operator==(param_1,param_2);
  if ((char)uVar6 == '\0') {
    if (*(long *)this != 0) {
      uVar7 = String::hash();
      uVar10 = 1;
      if (uVar7 != 0) {
        uVar10 = uVar7;
      }
      if (*(long *)this != 0) {
        uVar7 = *(uint *)(this + 0x10);
        uVar9 = *(ulong *)(*(long *)(this + 8) + (ulong)(uVar7 & uVar10) * 8);
        if ((uVar10 == (uint)uVar9) &&
           (cVar5 = String::operator==((String *)(*(long *)this + (uVar9 >> 0x20) * 0x10),param_2),
           cVar5 != '\0')) {
LAB_0010395d:
          _err_print_error("replace_key","core/templates/a_hash_map.h",0x18a,
                           "Condition \"_lookup_pos(p_new_key, element_pos, pos)\" is true. Returning: false"
                           ,0,0);
          return uVar6;
        }
        if (uVar9 != 0) {
          uVar12 = 1;
          uVar7 = (uVar7 & uVar10) + 1 & *(uint *)(this + 0x10);
          while( true ) {
            uVar9 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar7 * 8);
            if (((uint)uVar9 == uVar10) &&
               (cVar5 = String::operator==((String *)((uVar9 >> 0x20) * 0x10 + *(long *)this),
                                           param_2), cVar5 != '\0')) {
              uVar6 = uVar6 & 0xff;
              goto LAB_0010395d;
            }
            if ((uVar9 == 0) ||
               (uVar3 = *(uint *)(this + 0x10),
               (((uVar3 + 1) - ((uint)uVar9 & uVar3)) + uVar7 & uVar3) < uVar12)) break;
            uVar12 = uVar12 + 1;
            uVar7 = uVar7 + 1 & uVar3;
          }
          uVar6 = uVar6 & 0xff;
        }
        if (*(long *)this != 0) {
          uVar7 = String::hash();
          uVar10 = 1;
          if (uVar7 != 0) {
            uVar10 = uVar7;
          }
          if (*(long *)this != 0) {
            uVar7 = *(uint *)(this + 0x10) & uVar10;
            uVar13 = (ulong)uVar7;
            uVar9 = *(ulong *)(*(long *)(this + 8) + uVar13 * 8);
            if (uVar10 == (uint)uVar9) {
              local_58 = uVar9 >> 0x20;
              local_48 = (undefined4)(uVar9 >> 0x20);
              lVar14 = local_58 * 0x10;
              cVar5 = String::operator==((String *)(*(long *)this + lVar14),param_1);
              if (cVar5 != '\0') {
LAB_00103abe:
                lVar15 = uVar13 * 8;
                if (*(long *)(*(long *)this + lVar14) != *(long *)param_2) {
                  CowData<char32_t>::_ref
                            ((CowData<char32_t> *)(*(long *)this + lVar14),(CowData *)param_2);
                }
                uVar6 = *(uint *)(this + 0x10);
                lVar14 = *(long *)(this + 8);
                uVar10 = uVar7 + 1 & uVar6;
                puVar8 = (uint *)(lVar14 + (ulong)uVar10 * 8);
                if ((*puVar8 != 0) &&
                   (uVar9 = (ulong)uVar10, ((uVar10 + uVar6 + 1) - (*puVar8 & uVar6) & uVar6) != 0))
                {
                  do {
                    uVar11 = uVar9;
                    puVar1 = (undefined8 *)(lVar14 + uVar13 * 8);
                    uVar4 = *(undefined8 *)puVar8;
                    *(undefined8 *)puVar8 = *puVar1;
                    *puVar1 = uVar4;
                    uVar10 = (int)uVar11 + 1U & uVar6;
                    puVar8 = (uint *)(lVar14 + (ulong)uVar10 * 8);
                    if (*puVar8 == 0) break;
                    uVar9 = (ulong)uVar10;
                    uVar13 = uVar11;
                  } while (((uVar10 + uVar6 + 1) - (*puVar8 & uVar6) & uVar6) != 0);
                  lVar15 = uVar11 * 8;
                }
                *(undefined8 *)(lVar14 + lVar15) = 0;
                uVar10 = String::hash();
                uVar6 = *(uint *)(this + 0x10);
                lVar14 = *(long *)(this + 8);
                if (uVar10 == 0) {
                  uVar10 = 1;
                }
                puVar2 = (ulong *)(lVar14 + (ulong)(uVar6 & uVar10) * 8);
                if (*puVar2 == 0) {
                  *puVar2 = (ulong)uVar10 | local_58 << 0x20;
                }
                else {
                  uVar9 = (ulong)((uVar6 & uVar10) + 1 & uVar6);
                  uVar7 = 1;
                  puVar8 = (uint *)(lVar14 + uVar9 * 8);
                  lVar15 = *(long *)puVar8;
                  uVar4 = CONCAT44(local_48,uVar10);
                  while (lVar15 != 0) {
                    uVar10 = ((int)uVar9 + uVar6 + 1) - (*puVar8 & uVar6) & uVar6;
                    uVar16 = uVar4;
                    if (uVar10 < uVar7) {
                      uVar16 = *(undefined8 *)puVar8;
                      *(undefined8 *)puVar8 = uVar4;
                      uVar7 = uVar10;
                    }
                    uVar7 = uVar7 + 1;
                    uVar9 = (ulong)((int)uVar9 + 1U & uVar6);
                    puVar8 = (uint *)(lVar14 + uVar9 * 8);
                    uVar4 = uVar16;
                    lVar15 = *(long *)puVar8;
                  }
                  *(undefined8 *)puVar8 = uVar4;
                }
                goto LAB_0010386a;
              }
            }
            if (uVar9 != 0) {
              uVar7 = uVar7 + 1 & *(uint *)(this + 0x10);
              uVar12 = 1;
              while( true ) {
                uVar13 = (ulong)uVar7;
                uVar9 = *(ulong *)(*(long *)(this + 8) + uVar13 * 8);
                if ((uint)uVar9 == uVar10) {
                  local_58 = uVar9 >> 0x20;
                  local_48 = (undefined4)(uVar9 >> 0x20);
                  lVar14 = local_58 * 0x10;
                  cVar5 = String::operator==((String *)(*(long *)this + lVar14),param_1);
                  if (cVar5 != '\0') goto LAB_00103abe;
                }
                if ((uVar9 == 0) ||
                   (uVar3 = *(uint *)(this + 0x10),
                   (((uVar3 + 1) - ((uint)uVar9 & uVar3)) + uVar7 & uVar3) < uVar12)) break;
                uVar12 = uVar12 + 1;
                uVar7 = uVar7 + 1 & uVar3;
              }
              uVar6 = uVar6 & 0xff;
            }
          }
        }
      }
    }
    _err_print_error("replace_key","core/templates/a_hash_map.h",0x18b,
                     "Condition \"!_lookup_pos(p_old_key, element_pos, pos)\" is true. Returning: false"
                     ,0,0);
  }
  else {
LAB_0010386a:
    uVar6 = 1;
  }
  return uVar6;
}



/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String> >::reserve(unsigned
   int) */

void __thiscall
AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::reserve
          (AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>> *this,
          uint param_1)

{
  uint uVar1;
  
  if (param_1 < *(int *)(this + 0x10) + 1U) {
    _err_print_error("reserve","core/templates/a_hash_map.h",0x1a2,
                     "Condition \"p_new_capacity < get_capacity()\" is true.",
                     "It is impossible to reserve less capacity than is currently available.",0,0);
    return;
  }
  if (*(long *)this != 0) {
    _resize_and_rehash(this,param_1);
    return;
  }
  uVar1 = 4;
  if (3 < param_1) {
    uVar1 = param_1;
  }
  uVar1 = uVar1 - 1 | uVar1 - 1 >> 1;
  uVar1 = uVar1 | uVar1 >> 2;
  uVar1 = uVar1 | uVar1 >> 4;
  uVar1 = uVar1 | uVar1 >> 8;
  *(uint *)(this + 0x10) = uVar1 | uVar1 >> 0x10;
  return;
}



/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String> >::begin() */

void AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::begin(void)

{
  long lVar1;
  long *in_RSI;
  long *in_RDI;
  
  lVar1 = *in_RSI;
  in_RDI[2] = (ulong)*(uint *)((long)in_RSI + 0x14) * 0x10 + lVar1;
  *in_RDI = lVar1;
  in_RDI[1] = lVar1;
  return;
}



/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String> >::end() */

void AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::end(void)

{
  long lVar1;
  long lVar2;
  long *in_RSI;
  long *in_RDI;
  
  lVar1 = *in_RSI;
  lVar2 = (ulong)*(uint *)((long)in_RSI + 0x14) * 0x10 + lVar1;
  in_RDI[2] = lVar2;
  *in_RDI = lVar2;
  in_RDI[1] = lVar1;
  return;
}



/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String> >::last() */

void AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::last(void)

{
  long lVar1;
  long lVar2;
  long *in_RSI;
  undefined1 (*in_RDI) [16];
  
  if (*(uint *)((long)in_RSI + 0x14) != 0) {
    lVar1 = *in_RSI;
    lVar2 = (ulong)*(uint *)((long)in_RSI + 0x14) * 0x10;
    *(long *)in_RDI[1] = lVar1 + lVar2;
    *(long *)*in_RDI = lVar1 + -0x10 + lVar2;
    *(long *)(*in_RDI + 8) = lVar1;
    return;
  }
  *(undefined8 *)in_RDI[1] = 0;
  *in_RDI = (undefined1  [16])0x0;
  return;
}



/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String> >::find(String
   const&) */

String * AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::find
                   (String *param_1)

{
  uint uVar1;
  ulong uVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  String *in_RDX;
  long lVar7;
  long *in_RSI;
  uint uVar8;
  
  if (*in_RSI != 0) {
    uVar4 = String::hash();
    lVar5 = *in_RSI;
    uVar6 = 1;
    if (uVar4 != 0) {
      uVar6 = uVar4;
    }
    if (lVar5 != 0) {
      uVar4 = *(uint *)(in_RSI + 2);
      uVar2 = *(ulong *)(in_RSI[1] + (ulong)(uVar4 & uVar6) * 8);
      if (uVar6 == (uint)uVar2) {
        lVar7 = (uVar2 >> 0x20) * 0x10;
        cVar3 = String::operator==((String *)(lVar5 + lVar7),in_RDX);
        if (cVar3 != '\0') {
LAB_00103f30:
          lVar5 = *in_RSI;
          *(ulong *)(param_1 + 0x10) = (ulong)*(uint *)((long)in_RSI + 0x14) * 0x10 + lVar5;
          *(long *)param_1 = lVar5 + lVar7;
          *(long *)(param_1 + 8) = lVar5;
          return param_1;
        }
        lVar5 = *in_RSI;
      }
      if (uVar2 != 0) {
        uVar8 = 1;
        uVar4 = (uVar4 & uVar6) + 1 & *(uint *)(in_RSI + 2);
        while( true ) {
          uVar2 = *(ulong *)(in_RSI[1] + (ulong)uVar4 * 8);
          if (uVar6 == (uint)uVar2) {
            lVar7 = (uVar2 >> 0x20) * 0x10;
            cVar3 = String::operator==((String *)(lVar5 + lVar7),in_RDX);
            if (cVar3 != '\0') goto LAB_00103f30;
            lVar5 = *in_RSI;
          }
          if ((uVar2 == 0) ||
             (uVar1 = *(uint *)(in_RSI + 2),
             (((uVar1 + 1) - ((uint)uVar2 & uVar1)) + uVar4 & uVar1) < uVar8)) break;
          uVar8 = uVar8 + 1;
          uVar4 = uVar4 + 1 & uVar1;
        }
      }
      goto LAB_00103f08;
    }
  }
  lVar5 = 0;
LAB_00103f08:
  uVar6 = *(uint *)((long)in_RSI + 0x14);
  *(long *)(param_1 + 8) = lVar5;
  lVar5 = (ulong)uVar6 * 0x10 + lVar5;
  *(long *)param_1 = lVar5;
  *(long *)(param_1 + 0x10) = lVar5;
  return param_1;
}



/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String>
   >::remove(AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String>
   >::Iterator const&) */

void __thiscall
AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::remove
          (AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>> *this,
          Iterator *param_1)

{
  if (*(String **)(param_1 + 0x10) != *(String **)param_1) {
    erase(this,*(String **)param_1);
    return;
  }
  return;
}



/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String> >::begin() const */

void AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::begin(void)

{
  long lVar1;
  long *in_RSI;
  long *in_RDI;
  
  lVar1 = *in_RSI;
  in_RDI[2] = (ulong)*(uint *)((long)in_RSI + 0x14) * 0x10 + lVar1;
  *in_RDI = lVar1;
  in_RDI[1] = lVar1;
  return;
}



/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String> >::end() const */

void AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::end(void)

{
  long lVar1;
  long lVar2;
  long *in_RSI;
  long *in_RDI;
  
  lVar1 = *in_RSI;
  lVar2 = (ulong)*(uint *)((long)in_RSI + 0x14) * 0x10 + lVar1;
  in_RDI[2] = lVar2;
  *in_RDI = lVar2;
  in_RDI[1] = lVar1;
  return;
}



/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String> >::last() const */

void AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::last(void)

{
  long lVar1;
  long lVar2;
  long *in_RSI;
  undefined1 (*in_RDI) [16];
  
  if (*(uint *)((long)in_RSI + 0x14) != 0) {
    lVar1 = *in_RSI;
    lVar2 = (ulong)*(uint *)((long)in_RSI + 0x14) * 0x10;
    *(long *)in_RDI[1] = lVar1 + lVar2;
    *(long *)*in_RDI = lVar1 + -0x10 + lVar2;
    *(long *)(*in_RDI + 8) = lVar1;
    return;
  }
  *(undefined8 *)in_RDI[1] = 0;
  *in_RDI = (undefined1  [16])0x0;
  return;
}



/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String> >::find(String
   const&) const */

String * AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::find
                   (String *param_1)

{
  uint uVar1;
  ulong uVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  String *in_RDX;
  long lVar7;
  long *in_RSI;
  uint uVar8;
  
  if (*in_RSI != 0) {
    uVar4 = String::hash();
    lVar5 = *in_RSI;
    uVar6 = 1;
    if (uVar4 != 0) {
      uVar6 = uVar4;
    }
    if (lVar5 != 0) {
      uVar4 = *(uint *)(in_RSI + 2);
      uVar2 = *(ulong *)(in_RSI[1] + (ulong)(uVar4 & uVar6) * 8);
      if (uVar6 == (uint)uVar2) {
        lVar7 = (uVar2 >> 0x20) * 0x10;
        cVar3 = String::operator==((String *)(lVar5 + lVar7),in_RDX);
        if (cVar3 != '\0') {
LAB_00104190:
          lVar5 = *in_RSI;
          *(ulong *)(param_1 + 0x10) = (ulong)*(uint *)((long)in_RSI + 0x14) * 0x10 + lVar5;
          *(long *)param_1 = lVar5 + lVar7;
          *(long *)(param_1 + 8) = lVar5;
          return param_1;
        }
        lVar5 = *in_RSI;
      }
      if (uVar2 != 0) {
        uVar8 = 1;
        uVar4 = (uVar4 & uVar6) + 1 & *(uint *)(in_RSI + 2);
        while( true ) {
          uVar2 = *(ulong *)(in_RSI[1] + (ulong)uVar4 * 8);
          if (uVar6 == (uint)uVar2) {
            lVar7 = (uVar2 >> 0x20) * 0x10;
            cVar3 = String::operator==((String *)(lVar5 + lVar7),in_RDX);
            if (cVar3 != '\0') goto LAB_00104190;
            lVar5 = *in_RSI;
          }
          if ((uVar2 == 0) ||
             (uVar1 = *(uint *)(in_RSI + 2),
             (((uVar1 + 1) - ((uint)uVar2 & uVar1)) + uVar4 & uVar1) < uVar8)) break;
          uVar8 = uVar8 + 1;
          uVar4 = uVar4 + 1 & uVar1;
        }
      }
      goto LAB_00104168;
    }
  }
  lVar5 = 0;
LAB_00104168:
  uVar6 = *(uint *)((long)in_RSI + 0x14);
  *(long *)(param_1 + 8) = lVar5;
  lVar5 = (ulong)uVar6 * 0x10 + lVar5;
  *(long *)param_1 = lVar5;
  *(long *)(param_1 + 0x10) = lVar5;
  return param_1;
}



/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String> >::operator[](String
   const&) const */

long __thiscall
AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::operator[]
          (AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>> *this,
          String *param_1)

{
  uint uVar1;
  ulong uVar2;
  code *pcVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  
  if (*(long *)this != 0) {
    uVar5 = String::hash();
    uVar6 = 1;
    if (uVar5 != 0) {
      uVar6 = uVar5;
    }
    if (*(long *)this != 0) {
      uVar5 = *(uint *)(this + 0x10);
      uVar2 = *(ulong *)(*(long *)(this + 8) + (ulong)(uVar5 & uVar6) * 8);
      if (uVar6 == (uint)uVar2) {
        lVar7 = (uVar2 >> 0x20) * 0x10;
        cVar4 = String::operator==((String *)(*(long *)this + lVar7),param_1);
        if (cVar4 != '\0') {
LAB_001042db:
          return lVar7 + *(long *)this + 8;
        }
      }
      if (uVar2 != 0) {
        uVar8 = 1;
        uVar5 = (uVar5 & uVar6) + 1 & *(uint *)(this + 0x10);
        while( true ) {
          uVar2 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar5 * 8);
          if ((uint)uVar2 == uVar6) {
            lVar7 = (uVar2 >> 0x20) * 0x10;
            cVar4 = String::operator==((String *)(lVar7 + *(long *)this),param_1);
            if (cVar4 != '\0') goto LAB_001042db;
          }
          if ((uVar2 == 0) ||
             (uVar1 = *(uint *)(this + 0x10),
             (((uVar1 + 1) - ((uint)uVar2 & uVar1)) + uVar5 & uVar1) < uVar8)) break;
          uVar8 = uVar8 + 1;
          uVar5 = uVar5 + 1 & uVar1;
        }
      }
    }
  }
  _err_print_error("operator[]","core/templates/a_hash_map.h",0x24e,
                   "FATAL: Condition \"!exists\" is true.",0,0);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String> >::operator[](String
   const&) */

long __thiscall
AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::operator[]
          (AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>> *this,
          String *param_1)

{
  uint uVar1;
  ulong uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = String::hash();
  uVar5 = 1;
  if (uVar4 != 0) {
    uVar5 = uVar4;
  }
  if (*(long *)this != 0) {
    uVar4 = *(uint *)(this + 0x10);
    uVar2 = *(ulong *)(*(long *)(this + 8) + (ulong)(uVar4 & uVar5) * 8);
    if (uVar5 == (uint)uVar2) {
      lVar6 = (uVar2 >> 0x20) * 0x10;
      cVar3 = String::operator==((String *)(*(long *)this + lVar6),param_1);
      if (cVar3 != '\0') {
LAB_00104437:
        lVar6 = lVar6 + *(long *)this;
        goto LAB_0010443f;
      }
    }
    if (uVar2 != 0) {
      uVar7 = 1;
      uVar4 = (uVar4 & uVar5) + 1 & *(uint *)(this + 0x10);
      while( true ) {
        uVar2 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar4 * 8);
        if ((uint)uVar2 == uVar5) {
          lVar6 = (uVar2 >> 0x20) * 0x10;
          cVar3 = String::operator==((String *)(lVar6 + *(long *)this),param_1);
          if (cVar3 != '\0') goto LAB_00104437;
        }
        if ((uVar2 == 0) ||
           (uVar1 = *(uint *)(this + 0x10),
           (((uVar1 + 1) - ((uint)uVar2 & uVar1)) + uVar4 & uVar1) < uVar7)) break;
        uVar7 = uVar7 + 1;
        uVar4 = uVar4 + 1 & uVar1;
      }
    }
  }
  local_44 = 0;
  uVar5 = _insert_element(this,param_1,&local_44,uVar5);
  lVar6 = (ulong)uVar5 * 0x10 + *(long *)this;
LAB_0010443f:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar6 + 8;
}



/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String> >::insert(String
   const&, int const&) */

String * AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert
                   (String *param_1,int *param_2)

{
  uint uVar1;
  ulong uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int *in_RCX;
  String *in_RDX;
  long lVar6;
  long lVar7;
  uint uVar8;
  
  uVar4 = String::hash();
  uVar5 = 1;
  if (uVar4 != 0) {
    uVar5 = uVar4;
  }
  if (*(long *)param_2 != 0) {
    uVar4 = param_2[4];
    uVar2 = *(ulong *)(*(long *)(param_2 + 2) + (ulong)(uVar4 & uVar5) * 8);
    if (uVar5 == (uint)uVar2) {
      lVar7 = (uVar2 >> 0x20) * 0x10;
      cVar3 = String::operator==((String *)(*(long *)param_2 + lVar7),in_RDX);
      if (cVar3 != '\0') {
LAB_001045b4:
        lVar6 = *(long *)param_2;
        lVar7 = lVar6 + lVar7;
        *(int *)(lVar7 + 8) = *in_RCX;
        goto LAB_001045c6;
      }
    }
    if (uVar2 != 0) {
      uVar8 = 1;
      uVar4 = (uVar4 & uVar5) + 1 & param_2[4];
      while( true ) {
        uVar2 = *(ulong *)(*(long *)(param_2 + 2) + (ulong)uVar4 * 8);
        if ((uint)uVar2 == uVar5) {
          lVar7 = (uVar2 >> 0x20) * 0x10;
          cVar3 = String::operator==((String *)(*(long *)param_2 + lVar7),in_RDX);
          if (cVar3 != '\0') goto LAB_001045b4;
        }
        if ((uVar2 == 0) ||
           (uVar1 = param_2[4], (((uVar1 + 1) - ((uint)uVar2 & uVar1)) + uVar4 & uVar1) < uVar8))
        break;
        uVar8 = uVar8 + 1;
        uVar4 = uVar4 + 1 & uVar1;
      }
    }
  }
  uVar5 = _insert_element((AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>
                           *)param_2,in_RDX,in_RCX,uVar5);
  lVar6 = *(long *)param_2;
  lVar7 = (ulong)uVar5 * 0x10 + lVar6;
LAB_001045c6:
  uVar5 = param_2[5];
  *(long *)param_1 = lVar7;
  *(long *)(param_1 + 8) = lVar6;
  *(ulong *)(param_1 + 0x10) = (ulong)uVar5 * 0x10 + lVar6;
  return param_1;
}



/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String> >::insert_new(String
   const&, int const&) */

String * AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert_new
                   (String *param_1,int *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int *in_RCX;
  String *in_RDX;
  
  uVar2 = String::hash();
  uVar3 = 1;
  if (uVar2 != 0) {
    uVar3 = uVar2;
  }
  uVar3 = _insert_element((AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>
                           *)param_2,in_RDX,in_RCX,uVar3);
  lVar1 = *(long *)param_2;
  *(ulong *)(param_1 + 0x10) = (ulong)(uint)param_2[5] * 0x10 + lVar1;
  *(ulong *)param_1 = (ulong)uVar3 * 0x10 + lVar1;
  *(long *)(param_1 + 8) = lVar1;
  return param_1;
}



/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String>
   >::get_elements_ptr() */

undefined8 __thiscall
AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::get_elements_ptr
          (AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>> *this)

{
  return *(undefined8 *)this;
}



/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String> >::get_index(String
   const&) */

undefined4 __thiscall
AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::get_index
          (AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>> *this,
          String *param_1)

{
  uint uVar1;
  ulong uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (*(long *)this == 0) {
    return 0xffffffff;
  }
  uVar4 = String::hash();
  uVar5 = 1;
  if (uVar4 != 0) {
    uVar5 = uVar4;
  }
  if (*(long *)this != 0) {
    uVar4 = *(uint *)(this + 0x10);
    uVar2 = *(ulong *)(*(long *)(this + 8) + (ulong)(uVar4 & uVar5) * 8);
    if (uVar5 == (uint)uVar2) {
      cVar3 = String::operator==((String *)(*(long *)this + (uVar2 >> 0x20) * 0x10),param_1);
      if (cVar3 != '\0') {
        return (int)(uVar2 >> 0x20);
      }
    }
    if (uVar2 != 0) {
      uVar6 = 1;
      uVar4 = (uVar4 & uVar5) + 1 & *(uint *)(this + 0x10);
      while( true ) {
        uVar2 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar4 * 8);
        if (uVar5 == (uint)uVar2) {
          cVar3 = String::operator==((String *)((uVar2 >> 0x20) * 0x10 + *(long *)this),param_1);
          if (cVar3 != '\0') {
            return (int)(uVar2 >> 0x20);
          }
        }
        if ((uVar2 == 0) ||
           (uVar1 = *(uint *)(this + 0x10),
           (((uVar1 + 1) - ((uint)uVar2 & uVar1)) + uVar4 & uVar1) < uVar6)) break;
        uVar6 = uVar6 + 1;
        uVar4 = uVar4 + 1 & uVar1;
      }
    }
  }
  return 0xffffffff;
}



/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String>
   >::get_by_index(unsigned int) */

long __thiscall
AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::get_by_index
          (AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>> *this,
          uint param_1)

{
  code *pcVar1;
  
  if (param_1 < *(uint *)(this + 0x14)) {
    return (ulong)param_1 * 0x10 + *(long *)this;
  }
  _err_print_index_error
            ("get_by_index","core/templates/a_hash_map.h",0x28b,(ulong)param_1,
             (ulong)*(uint *)(this + 0x14),"p_index","num_elements","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String>
   >::erase_by_index(unsigned int) */

undefined8 __thiscall
AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::erase_by_index
          (AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>> *this,
          uint param_1)

{
  undefined8 uVar1;
  
  if (*(uint *)(this + 0x14) <= param_1) {
    return 0;
  }
  uVar1 = erase(this,(String *)((ulong)param_1 * 0x10 + *(long *)this));
  return uVar1;
}



/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String>
   >::AHashMap(AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String> >
   const&) */

void __thiscall
AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::AHashMap
          (AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>> *this,
          AHashMap *param_1)

{
  undefined8 uVar1;
  long lVar2;
  CowData *pCVar3;
  CowData<char32_t> *this_00;
  ulong __n;
  long lVar4;
  
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x10) = uVar1;
  if ((int)((ulong)uVar1 >> 0x20) == 0) {
    return;
  }
  __n = (ulong)((int)uVar1 + 1) << 3;
  uVar1 = Memory::alloc_static(__n,false);
  *(undefined8 *)(this + 8) = uVar1;
  lVar2 = Memory::alloc_static
                    ((ulong)((*(uint *)(this + 0x10) + 1 >> 2 ^ *(uint *)(this + 0x10)) + 1) << 4,
                     false);
  *(long *)this = lVar2;
  if (*(int *)(this + 0x14) != 0) {
    lVar4 = 0;
    while( true ) {
      this_00 = (CowData<char32_t> *)(lVar2 + lVar4 * 0x10);
      pCVar3 = (CowData *)(lVar4 * 0x10 + *(long *)param_1);
      *(undefined8 *)this_00 = 0;
      if (*(long *)pCVar3 != 0) {
        CowData<char32_t>::_ref(this_00,pCVar3);
      }
      lVar4 = lVar4 + 1;
      *(undefined4 *)(this_00 + 8) = *(undefined4 *)(pCVar3 + 8);
      if (*(uint *)(this + 0x14) <= (uint)lVar4) break;
      lVar2 = *(long *)this;
    }
  }
  memcpy(*(void **)(this + 8),*(void **)(param_1 + 8),__n);
  return;
}



/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String>
   >::AHashMap(HashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, int> > > const&) */

ulong __thiscall
AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::AHashMap
          (AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>> *this,
          HashMap *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uStack_28;
  
  uVar2 = *(uint *)(param_1 + 0x2c);
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  if (uVar2 == 0) {
    uStack_28 = 0;
    _err_print_error("reserve","core/templates/a_hash_map.h",0x1a2,
                     "Condition \"p_new_capacity < get_capacity()\" is true.",
                     "It is impossible to reserve less capacity than is currently available.",0);
  }
  else {
    if (uVar2 < 4) {
      uVar2 = 4;
    }
    uVar2 = uVar2 - 1 | uVar2 - 1 >> 1;
    uVar2 = uVar2 | uVar2 >> 2;
    uVar2 = uVar2 | uVar2 >> 4;
    uVar2 = uVar2 | uVar2 >> 8;
    uVar2 = uVar2 | uVar2 >> 0x10;
    uStack_28 = (ulong)uVar2;
    *(uint *)(this + 0x10) = uVar2;
  }
  for (puVar1 = *(undefined8 **)(param_1 + 0x18); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)*puVar1) {
    uVar3 = String::hash();
    uVar2 = 1;
    if (uVar3 != 0) {
      uVar2 = uVar3;
    }
    uStack_28 = _insert_element(this,(String *)(puVar1 + 2),(int *)(puVar1 + 3),uVar2);
  }
  return uStack_28;
}



/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String>
   >::TEMPNAMEPLACEHOLDERVALUE(AHashMap<String, int, HashMapHasherDefault,
   HashMapComparatorDefault<String> > const&) */

void __thiscall
AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::operator=
          (AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>> *this,
          AHashMap *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  CowData *pCVar5;
  void *pvVar6;
  CowData<char32_t> *this_00;
  ulong __n;
  long lVar7;
  
  if (this == (AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>> *)param_1)
  {
    return;
  }
  pvVar6 = *(void **)this;
  if (pvVar6 != (void *)0x0) {
    if (*(int *)(this + 0x14) != 0) {
      lVar4 = 0;
      do {
        plVar2 = (long *)(lVar4 * 0x10 + (long)pvVar6);
        if (*plVar2 != 0) {
          LOCK();
          plVar1 = (long *)(*plVar2 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar7 = *plVar2;
            *plVar2 = 0;
            Memory::free_static((void *)(lVar7 + -0x10),false);
          }
          pvVar6 = *(void **)this;
        }
        lVar4 = lVar4 + 1;
      } while ((uint)lVar4 < *(uint *)(this + 0x14));
    }
    Memory::free_static(pvVar6,false);
    Memory::free_static(*(void **)(this + 8),false);
    *(undefined8 *)this = 0;
  }
  *(undefined8 *)(this + 0x10) = 0xf;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x10) = uVar3;
  if ((int)((ulong)uVar3 >> 0x20) == 0) {
    return;
  }
  __n = (ulong)((int)uVar3 + 1) << 3;
  uVar3 = Memory::alloc_static(__n,false);
  *(undefined8 *)(this + 8) = uVar3;
  lVar4 = Memory::alloc_static
                    ((ulong)((*(uint *)(this + 0x10) + 1 >> 2 ^ *(uint *)(this + 0x10)) + 1) << 4,
                     false);
  *(long *)this = lVar4;
  if (*(int *)(this + 0x14) != 0) {
    lVar7 = 0;
    while( true ) {
      this_00 = (CowData<char32_t> *)(lVar4 + lVar7 * 0x10);
      pCVar5 = (CowData *)(lVar7 * 0x10 + *(long *)param_1);
      *(undefined8 *)this_00 = 0;
      if (*(long *)pCVar5 != 0) {
        CowData<char32_t>::_ref(this_00,pCVar5);
      }
      lVar7 = lVar7 + 1;
      *(undefined4 *)(this_00 + 8) = *(undefined4 *)(pCVar5 + 8);
      if (*(uint *)(this + 0x14) <= (uint)lVar7) break;
      lVar4 = *(long *)this;
    }
  }
  memcpy(*(void **)(this + 8),*(void **)(param_1 + 8),__n);
  return;
}



/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String>
   >::TEMPNAMEPLACEHOLDERVALUE(HashMap<String, int, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String, int> > > const&)
    */

void __thiscall
AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::operator=
          (AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>> *this,
          HashMap *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  void *pvVar8;
  
  pvVar8 = *(void **)this;
  if (pvVar8 != (void *)0x0) {
    if (*(int *)(this + 0x14) != 0) {
      lVar7 = 0;
      do {
        plVar6 = (long *)(lVar7 * 0x10 + (long)pvVar8);
        if (*plVar6 != 0) {
          LOCK();
          plVar1 = (long *)(*plVar6 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar2 = *plVar6;
            *plVar6 = 0;
            Memory::free_static((void *)(lVar2 + -0x10),false);
          }
          pvVar8 = *(void **)this;
        }
        lVar7 = lVar7 + 1;
      } while ((uint)lVar7 < *(uint *)(this + 0x14));
    }
    Memory::free_static(pvVar8,false);
    Memory::free_static(*(void **)(this + 8),false);
    *(undefined8 *)this = 0;
  }
  *(undefined8 *)(this + 0x10) = 0xf;
  uVar5 = *(uint *)(param_1 + 0x2c);
  if (0x10 < uVar5) {
    if (*(long *)this == 0) {
      uVar5 = uVar5 - 1 | uVar5 - 1 >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      *(uint *)(this + 0x10) = uVar5 | uVar5 >> 0x10;
    }
    else {
      _resize_and_rehash(this,uVar5);
    }
  }
  for (puVar3 = *(undefined8 **)(param_1 + 0x18); puVar3 != (undefined8 *)0x0;
      puVar3 = (undefined8 *)*puVar3) {
    uVar4 = String::hash();
    uVar5 = 1;
    if (uVar4 != 0) {
      uVar5 = uVar4;
    }
    _insert_element(this,(String *)(puVar3 + 2),(int *)(puVar3 + 3),uVar5);
  }
  return;
}



/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String> >::AHashMap(unsigned
   int) */

void __thiscall
AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::AHashMap
          (AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>> *this,
          uint param_1)

{
  uint uVar1;
  
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  if (param_1 < 4) {
    param_1 = 4;
  }
  uVar1 = param_1 - 1 >> 1 | param_1 - 1;
  uVar1 = uVar1 | uVar1 >> 2;
  uVar1 = uVar1 | uVar1 >> 4;
  uVar1 = uVar1 | uVar1 >> 8;
  *(uint *)(this + 0x10) = uVar1 | uVar1 >> 0x10;
  return;
}



/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String> >::AHashMap() */

void __thiscall
AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::AHashMap
          (AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>> *this)

{
  *(undefined8 *)(this + 0x10) = 0xf;
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  return;
}



/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String>
   >::AHashMap(std::initializer_list<KeyValue<String, int> >) */

void AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::AHashMap
               (AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>> *param_1,
               String *param_2,long param_3)

{
  String *pSVar1;
  uint uVar2;
  ulong uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined1 (*) [16])param_1 = (undefined1  [16])0x0;
  uVar5 = (uint)param_3;
  if (uVar5 == 0) {
    _err_print_error("reserve","core/templates/a_hash_map.h",0x1a2,
                     "Condition \"p_new_capacity < get_capacity()\" is true.",
                     "It is impossible to reserve less capacity than is currently available.",0,0);
  }
  else {
    uVar6 = 4;
    if (3 < uVar5) {
      uVar6 = uVar5;
    }
    uVar5 = uVar6 - 1 | uVar6 - 1 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    *(uint *)(param_1 + 0x10) = uVar5 | uVar5 >> 0x10;
  }
  pSVar1 = param_2 + param_3 * 0x10;
  if (param_2 != pSVar1) {
    do {
      uVar6 = String::hash();
      uVar5 = 1;
      if (uVar6 != 0) {
        uVar5 = uVar6;
      }
      if (*(long *)param_1 == 0) {
LAB_00104ed0:
        _insert_element(param_1,param_2,(int *)(param_2 + 8),uVar5);
      }
      else {
        uVar6 = *(uint *)(param_1 + 0x10);
        uVar3 = *(ulong *)(*(long *)(param_1 + 8) + (ulong)(uVar6 & uVar5) * 8);
        if (uVar5 != (uint)uVar3) {
LAB_00104e1a:
          if (uVar3 != 0) {
            uVar8 = 1;
            uVar6 = (uVar6 & uVar5) + 1 & *(uint *)(param_1 + 0x10);
            while( true ) {
              uVar3 = *(ulong *)(*(long *)(param_1 + 8) + (ulong)uVar6 * 8);
              if (uVar5 == (uint)uVar3) {
                lVar7 = (uVar3 >> 0x20) * 0x10;
                cVar4 = String::operator==((String *)(*(long *)param_1 + lVar7),param_2);
                if (cVar4 != '\0') goto LAB_00104ea5;
              }
              if ((uVar3 == 0) ||
                 (uVar2 = *(uint *)(param_1 + 0x10),
                 (((uVar2 + 1) - ((uint)uVar3 & uVar2)) + uVar6 & uVar2) < uVar8)) break;
              uVar8 = uVar8 + 1;
              uVar6 = uVar6 + 1 & uVar2;
            }
          }
          goto LAB_00104ed0;
        }
        lVar7 = (uVar3 >> 0x20) * 0x10;
        cVar4 = String::operator==((String *)(*(long *)param_1 + lVar7),param_2);
        if (cVar4 == '\0') goto LAB_00104e1a;
LAB_00104ea5:
        *(undefined4 *)(*(long *)param_1 + 8 + lVar7) = *(undefined4 *)(param_2 + 8);
      }
      param_2 = param_2 + 0x10;
    } while (pSVar1 != param_2);
  }
  return;
}



/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String> >::reset() */

void __thiscall
AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::reset
          (AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>> *this)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  void *pvVar5;
  
  pvVar5 = *(void **)this;
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x14) != 0) {
      lVar4 = 0;
      do {
        plVar3 = (long *)(lVar4 * 0x10 + (long)pvVar5);
        if (*plVar3 != 0) {
          LOCK();
          plVar1 = (long *)(*plVar3 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar2 = *plVar3;
            *plVar3 = 0;
            Memory::free_static((void *)(lVar2 + -0x10),false);
          }
          pvVar5 = *(void **)this;
        }
        lVar4 = lVar4 + 1;
      } while ((uint)lVar4 < *(uint *)(this + 0x14));
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 8),false);
    *(undefined8 *)this = 0;
  }
  *(undefined8 *)(this + 0x10) = 0xf;
  return;
}



/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String> >::~AHashMap() */

void __thiscall
AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::~AHashMap
          (AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>> *this)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  void *pvVar5;
  
  pvVar5 = *(void **)this;
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x14) != 0) {
      lVar4 = 0;
      do {
        plVar3 = (long *)(lVar4 * 0x10 + (long)pvVar5);
        if (*plVar3 != 0) {
          LOCK();
          plVar1 = (long *)(*plVar3 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar2 = *plVar3;
            *plVar3 = 0;
            Memory::free_static((void *)(lVar2 + -0x10),false);
          }
          pvVar5 = *(void **)this;
        }
        lVar4 = lVar4 + 1;
      } while ((uint)lVar4 < *(uint *)(this + 0x14));
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 8),false);
    return;
  }
  return;
}



/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String>
   >::ConstIterator::TEMPNAMEPLACEHOLDERVALUE() const */

undefined8 __thiscall
AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::ConstIterator::operator*
          (ConstIterator *this)

{
  return *(undefined8 *)this;
}



/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String>
   >::ConstIterator::TEMPNAMEPLACEHOLDERVALUE() const */

undefined8 __thiscall
AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::ConstIterator::
operator->(ConstIterator *this)

{
  return *(undefined8 *)this;
}



/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String>
   >::ConstIterator::TEMPNAMEPLACEHOLDERVALUE() */

ConstIterator * __thiscall
AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::ConstIterator::
operator++(ConstIterator *this)

{
  *(long *)this = *(long *)this + 0x10;
  return this;
}



/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String>
   >::ConstIterator::TEMPNAMEPLACEHOLDERVALUE() */

ConstIterator * __thiscall
AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::ConstIterator::
operator--(ConstIterator *this)

{
  long lVar1;
  
  lVar1 = *(long *)this;
  *(ulong *)this = lVar1 - 0x10U;
  if (lVar1 - 0x10U < *(ulong *)(this + 8)) {
    *(undefined8 *)this = *(undefined8 *)(this + 0x10);
  }
  return this;
}



/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String>
   >::ConstIterator::TEMPNAMEPLACEHOLDERVALUE(AHashMap<String, int, HashMapHasherDefault,
   HashMapComparatorDefault<String> >::ConstIterator const&) const */

undefined8 __thiscall
AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::ConstIterator::
operator==(ConstIterator *this,ConstIterator *param_1)

{
  return CONCAT71((int7)((ulong)*(long *)param_1 >> 8),*(long *)this == *(long *)param_1);
}



/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String>
   >::ConstIterator::TEMPNAMEPLACEHOLDERVALUE(AHashMap<String, int, HashMapHasherDefault,
   HashMapComparatorDefault<String> >::ConstIterator const&) const */

undefined8 __thiscall
AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::ConstIterator::
operator!=(ConstIterator *this,ConstIterator *param_1)

{
  return CONCAT71((int7)((ulong)*(long *)param_1 >> 8),*(long *)this != *(long *)param_1);
}



/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String>
   >::ConstIterator::operator bool() const */

bool __thiscall AHashMap::ConstIterator::operator_cast_to_bool(ConstIterator *this)

{
  return *(long *)this != *(long *)(this + 0x10);
}



/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String>
   >::ConstIterator::ConstIterator(KeyValue<String, int>*, KeyValue<String, int>*, KeyValue<String,
   int>*) */

void __thiscall
AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::ConstIterator::
ConstIterator(ConstIterator *this,KeyValue *param_1,KeyValue *param_2,KeyValue *param_3)

{
  *(KeyValue **)this = param_1;
  *(KeyValue **)(this + 8) = param_2;
  *(KeyValue **)(this + 0x10) = param_3;
  return;
}



/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String>
   >::ConstIterator::ConstIterator() */

void __thiscall
AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::ConstIterator::
ConstIterator(ConstIterator *this)

{
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  return;
}



/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String>
   >::ConstIterator::ConstIterator(AHashMap<String, int, HashMapHasherDefault,
   HashMapComparatorDefault<String> >::ConstIterator const&) */

void __thiscall
AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::ConstIterator::
ConstIterator(ConstIterator *this,ConstIterator *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = uVar2;
  *(undefined8 *)(this + 0x10) = uVar1;
  return;
}



/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String>
   >::ConstIterator::TEMPNAMEPLACEHOLDERVALUE(AHashMap<String, int, HashMapHasherDefault,
   HashMapComparatorDefault<String> >::ConstIterator const&) */

void __thiscall
AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::ConstIterator::operator=
          (ConstIterator *this,ConstIterator *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = uVar1;
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  return;
}



/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String>
   >::Iterator::TEMPNAMEPLACEHOLDERVALUE() const */

undefined8 __thiscall
AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::Iterator::operator*
          (Iterator *this)

{
  return *(undefined8 *)this;
}



/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String>
   >::Iterator::TEMPNAMEPLACEHOLDERVALUE() const */

undefined8 __thiscall
AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::Iterator::operator->
          (Iterator *this)

{
  return *(undefined8 *)this;
}



/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String>
   >::Iterator::TEMPNAMEPLACEHOLDERVALUE() */

Iterator * __thiscall
AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::Iterator::operator++
          (Iterator *this)

{
  *(long *)this = *(long *)this + 0x10;
  return this;
}



/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String>
   >::Iterator::TEMPNAMEPLACEHOLDERVALUE() */

Iterator * __thiscall
AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::Iterator::operator--
          (Iterator *this)

{
  long lVar1;
  
  lVar1 = *(long *)this;
  *(ulong *)this = lVar1 - 0x10U;
  if (lVar1 - 0x10U < *(ulong *)(this + 8)) {
    *(undefined8 *)this = *(undefined8 *)(this + 0x10);
  }
  return this;
}



/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String>
   >::Iterator::TEMPNAMEPLACEHOLDERVALUE(AHashMap<String, int, HashMapHasherDefault,
   HashMapComparatorDefault<String> >::Iterator const&) const */

undefined8 __thiscall
AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::Iterator::operator==
          (Iterator *this,Iterator *param_1)

{
  return CONCAT71((int7)((ulong)*(long *)param_1 >> 8),*(long *)this == *(long *)param_1);
}



/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String>
   >::Iterator::TEMPNAMEPLACEHOLDERVALUE(AHashMap<String, int, HashMapHasherDefault,
   HashMapComparatorDefault<String> >::Iterator const&) const */

undefined8 __thiscall
AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::Iterator::operator!=
          (Iterator *this,Iterator *param_1)

{
  return CONCAT71((int7)((ulong)*(long *)param_1 >> 8),*(long *)this != *(long *)param_1);
}



/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String>
   >::Iterator::operator bool() const */

bool __thiscall AHashMap::Iterator::operator_cast_to_bool(Iterator *this)

{
  return *(long *)this != *(long *)(this + 0x10);
}



/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String>
   >::Iterator::Iterator(KeyValue<String, int>*, KeyValue<String, int>*, KeyValue<String, int>*) */

void __thiscall
AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::Iterator::Iterator
          (Iterator *this,KeyValue *param_1,KeyValue *param_2,KeyValue *param_3)

{
  *(KeyValue **)this = param_1;
  *(KeyValue **)(this + 8) = param_2;
  *(KeyValue **)(this + 0x10) = param_3;
  return;
}



/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String>
   >::Iterator::Iterator() */

void __thiscall
AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::Iterator::Iterator
          (Iterator *this)

{
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  return;
}



/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String>
   >::Iterator::Iterator(AHashMap<String, int, HashMapHasherDefault,
   HashMapComparatorDefault<String> >::Iterator const&) */

void __thiscall
AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::Iterator::Iterator
          (Iterator *this,Iterator *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = uVar2;
  *(undefined8 *)(this + 0x10) = uVar1;
  return;
}



/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String>
   >::Iterator::TEMPNAMEPLACEHOLDERVALUE(AHashMap<String, int, HashMapHasherDefault,
   HashMapComparatorDefault<String> >::Iterator const&) */

void __thiscall
AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::Iterator::operator=
          (Iterator *this,Iterator *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = uVar1;
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  return;
}



/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String>
   >::Iterator::operator AHashMap<String, int, HashMapHasherDefault,
   HashMapComparatorDefault<String> >::ConstIterator() const */

Iterator * __thiscall AHashMap::Iterator::operator_cast_to_ConstIterator(Iterator *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *in_RSI;
  
  uVar1 = *in_RSI;
  uVar2 = in_RSI[1];
  *(undefined8 *)(this + 0x10) = in_RSI[2];
  *(undefined8 *)this = uVar1;
  *(undefined8 *)(this + 8) = uVar2;
  return this;
}



/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::_hash(StringName const&) const */

int __thiscall
AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::_hash
          (AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
           *this,StringName *param_1)

{
  int iVar1;
  
  if (*(long *)param_1 != 0) {
    iVar1 = *(int *)(*(long *)param_1 + 0x20);
    if (iVar1 == 0) {
      iVar1 = 1;
    }
    return iVar1;
  }
  iVar1 = StringName::get_empty_hash();
  if (iVar1 == 0) {
    iVar1 = 1;
  }
  return iVar1;
}



/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::_get_resize_count(unsigned int) */

uint AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
     _get_resize_count(uint param_1)

{
  return param_1 + 1 >> 2 ^ param_1;
}



/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::_get_probe_length(unsigned int, unsigned int, unsigned int) */

uint AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
     _get_probe_length(uint param_1,uint param_2,uint param_3)

{
  return (param_3 + 1 + param_1) - (param_2 & param_3) & param_3;
}



/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::_lookup_pos(StringName const&, unsigned int&, unsigned int&) const */

undefined8 __thiscall
AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
_lookup_pos(AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
            *this,StringName *param_1,uint *param_2,uint *param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  
  lVar6 = *(long *)this;
  if (lVar6 == 0) {
    return 0;
  }
  if (*(long *)param_1 == 0) {
    uVar3 = StringName::get_empty_hash();
    lVar6 = *(long *)this;
    if (lVar6 == 0) {
      return 0;
    }
    uVar5 = 1;
    if (uVar3 != 0) {
      uVar5 = uVar3;
    }
  }
  else {
    uVar5 = *(uint *)(*(long *)param_1 + 0x20);
    if (uVar5 == 0) {
      uVar5 = 1;
    }
  }
  uVar3 = *(uint *)(this + 0x10);
  uVar2 = uVar3 & uVar5;
  uVar1 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar2 * 8);
  if ((uVar5 == (uint)uVar1) &&
     (uVar7 = (uint)(uVar1 >> 0x20), *(long *)(lVar6 + (uVar1 >> 0x20) * 0x10) == *(long *)param_1))
  {
LAB_00105380:
    *param_2 = uVar7;
    *param_3 = uVar2;
    return 1;
  }
  if (uVar1 != 0) {
    uVar4 = 1;
    while( true ) {
      uVar2 = uVar2 + 1 & uVar3;
      uVar1 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar2 * 8);
      if (((uint)uVar1 == uVar5) &&
         (uVar7 = (uint)(uVar1 >> 0x20),
         *(long *)(lVar6 + (uVar1 >> 0x20) * 0x10) == *(long *)param_1)) goto LAB_00105380;
      if ((uVar1 == 0) || ((((uVar3 + 1) - ((uint)uVar1 & uVar3)) + uVar2 & uVar3) < uVar4)) break;
      uVar4 = uVar4 + 1;
    }
  }
  return 0;
}



/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::_lookup_pos_with_hash(StringName const&, unsigned int&, unsigned int&, unsigned int) const */

undefined8 __thiscall
AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
_lookup_pos_with_hash
          (AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
           *this,StringName *param_1,uint *param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  lVar2 = *(long *)this;
  if (lVar2 != 0) {
    uVar1 = *(uint *)(this + 0x10);
    uVar4 = uVar1 & param_4;
    uVar3 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar4 * 8);
    if ((param_4 == (uint)uVar3) &&
       (uVar6 = (uint)(uVar3 >> 0x20), *(long *)(lVar2 + (uVar3 >> 0x20) * 0x10) == *(long *)param_1
       )) {
LAB_00105490:
      *param_2 = uVar6;
      *param_3 = uVar4;
      return 1;
    }
    if (uVar3 != 0) {
      uVar5 = 1;
      while( true ) {
        uVar4 = uVar4 + 1 & uVar1;
        uVar3 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar4 * 8);
        if (((uint)uVar3 == param_4) &&
           (uVar6 = (uint)(uVar3 >> 0x20),
           *(long *)(lVar2 + (uVar3 >> 0x20) * 0x10) == *(long *)param_1)) goto LAB_00105490;
        if ((uVar3 == 0) || ((((uVar1 + 1) - ((uint)uVar3 & uVar1)) + uVar4 & uVar1) < uVar5))
        break;
        uVar5 = uVar5 + 1;
      }
    }
  }
  return 0;
}



/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::_insert_with_hash(unsigned int, unsigned int) */

void __thiscall
AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
_insert_with_hash(AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
                  *this,uint param_1,uint param_2)

{
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  
  uVar3 = *(uint *)(this + 0x10);
  lVar4 = *(long *)(this + 8);
  plVar1 = (long *)(lVar4 + (ulong)(uVar3 & param_1) * 8);
  if (*plVar1 == 0) {
    *plVar1 = CONCAT44(param_2,param_1);
    return;
  }
  uVar9 = 1;
  uVar7 = (uVar3 & param_1) + 1 & uVar3;
  puVar2 = (uint *)(lVar4 + (ulong)uVar7 * 8);
  lVar5 = *(long *)puVar2;
  uVar6 = CONCAT44(param_2,param_1);
  while (lVar5 != 0) {
    uVar8 = (uVar7 + uVar3 + 1) - (*puVar2 & uVar3) & uVar3;
    uVar10 = uVar6;
    if (uVar8 < uVar9) {
      uVar10 = *(undefined8 *)puVar2;
      *(undefined8 *)puVar2 = uVar6;
      uVar9 = uVar8;
    }
    uVar9 = uVar9 + 1;
    uVar7 = uVar7 + 1 & uVar3;
    puVar2 = (uint *)(lVar4 + (ulong)uVar7 * 8);
    uVar6 = uVar10;
    lVar5 = *(long *)puVar2;
  }
  *(undefined8 *)puVar2 = uVar6;
  return;
}



/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::_resize_and_rehash(unsigned int) */

void __thiscall
AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
_resize_and_rehash(AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
                   *this,uint param_1)

{
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  long *plVar14;
  ulong __n;
  
  uVar3 = *(uint *)(this + 0x10);
  plVar4 = *(long **)(this + 8);
  uVar8 = 4;
  if (3 < param_1) {
    uVar8 = param_1;
  }
  uVar8 = uVar8 - 1 | uVar8 - 1 >> 1;
  uVar8 = uVar8 | uVar8 >> 2;
  uVar8 = uVar8 | uVar8 >> 4;
  uVar8 = uVar8 | uVar8 >> 8;
  uVar8 = uVar8 | uVar8 >> 0x10;
  *(uint *)(this + 0x10) = uVar8;
  __n = (ulong)(uVar8 + 1) << 3;
  uVar10 = Memory::alloc_static(__n,false);
  *(undefined8 *)(this + 8) = uVar10;
  uVar10 = Memory::realloc_static
                     (*(void **)this,
                      (ulong)((*(uint *)(this + 0x10) + 1 >> 2 ^ *(uint *)(this + 0x10)) + 1) << 4,
                      false);
  *(undefined8 *)this = uVar10;
  memset(*(void **)(this + 8),0,__n);
  if ((*(int *)(this + 0x14) != 0) && (uVar3 != 0xffffffff)) {
    plVar14 = plVar4;
    do {
      while (lVar5 = *plVar14, lVar5 == 0) {
LAB_00105618:
        plVar14 = plVar14 + 1;
        if (plVar14 == plVar4 + (ulong)uVar3 + 1) goto LAB_0010564c;
      }
      uVar8 = *(uint *)(this + 0x10);
      lVar6 = *(long *)(this + 8);
      uVar9 = uVar8 & (uint)lVar5;
      plVar1 = (long *)(lVar6 + (ulong)uVar9 * 8);
      if (*plVar1 != 0) {
        uVar12 = 1;
        uVar9 = uVar9 + 1 & uVar8;
        puVar2 = (uint *)(lVar6 + (ulong)uVar9 * 8);
        lVar7 = *(long *)puVar2;
        while (lVar7 != 0) {
          uVar11 = (uVar9 + uVar8 + 1) - (*puVar2 & uVar8) & uVar8;
          lVar13 = lVar5;
          if (uVar11 < uVar12) {
            lVar13 = *(long *)puVar2;
            *(long *)puVar2 = lVar5;
            uVar12 = uVar11;
          }
          uVar12 = uVar12 + 1;
          uVar9 = uVar9 + 1 & uVar8;
          puVar2 = (uint *)(lVar6 + (ulong)uVar9 * 8);
          lVar5 = lVar13;
          lVar7 = *(long *)puVar2;
        }
        *(long *)puVar2 = lVar5;
        goto LAB_00105618;
      }
      plVar14 = plVar14 + 1;
      *plVar1 = lVar5;
    } while (plVar14 != plVar4 + (ulong)uVar3 + 1);
  }
LAB_0010564c:
  Memory::free_static(plVar4,false);
  return;
}



/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::_insert_element(StringName const&, StringName const&, unsigned int) */

int __thiscall
AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
_insert_element(AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
                *this,StringName *param_1,StringName *param_2,uint param_3)

{
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  undefined8 uVar8;
  uint uVar9;
  StringName *this_00;
  ulong __n;
  uint uVar10;
  undefined8 uVar11;
  
  if (*(long *)this == 0) {
    __n = (ulong)(*(int *)(this + 0x10) + 1) << 3;
    uVar8 = Memory::alloc_static(__n,false);
    *(undefined8 *)(this + 8) = uVar8;
    uVar8 = Memory::alloc_static
                      ((ulong)((*(uint *)(this + 0x10) + 1 >> 2 ^ *(uint *)(this + 0x10)) + 1) << 4,
                       false);
    *(undefined8 *)this = uVar8;
    memset(*(void **)(this + 8),0,__n);
  }
  uVar3 = *(uint *)(this + 0x10);
  uVar7 = *(uint *)(this + 0x14);
  if ((uVar3 + 1 >> 2 ^ uVar3) < uVar7) {
    _resize_and_rehash(this,uVar3 * 2);
    uVar7 = *(uint *)(this + 0x14);
  }
  this_00 = (StringName *)((ulong)uVar7 * 0x10 + *(long *)this);
  StringName::StringName(this_00,param_1);
  StringName::StringName(this_00 + 8,param_2);
  uVar3 = *(uint *)(this + 0x10);
  lVar5 = *(long *)(this + 8);
  iVar4 = *(int *)(this + 0x14);
  plVar1 = (long *)(lVar5 + (ulong)(param_3 & uVar3) * 8);
  if (*plVar1 == 0) {
    *plVar1 = CONCAT44(iVar4,param_3);
  }
  else {
    uVar10 = 1;
    uVar7 = (param_3 & uVar3) + 1 & uVar3;
    puVar2 = (uint *)(lVar5 + (ulong)uVar7 * 8);
    lVar6 = *(long *)puVar2;
    uVar8 = CONCAT44(iVar4,param_3);
    while (lVar6 != 0) {
      uVar9 = (uVar7 + uVar3 + 1) - (*puVar2 & uVar3) & uVar3;
      uVar11 = uVar8;
      if (uVar9 < uVar10) {
        uVar11 = *(undefined8 *)puVar2;
        *(undefined8 *)puVar2 = uVar8;
        uVar10 = uVar9;
      }
      uVar10 = uVar10 + 1;
      uVar7 = uVar7 + 1 & uVar3;
      puVar2 = (uint *)(lVar5 + (ulong)uVar7 * 8);
      uVar8 = uVar11;
      lVar6 = *(long *)puVar2;
    }
    *(undefined8 *)puVar2 = uVar8;
  }
  *(int *)(this + 0x14) = iVar4 + 1;
  return iVar4;
}



/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::_init_from(AHashMap<StringName, StringName, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> > const&) */

void __thiscall
AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
_init_from(AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
           *this,AHashMap *param_1)

{
  undefined8 uVar1;
  long lVar2;
  StringName *pSVar3;
  StringName *this_00;
  ulong __n;
  long lVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x10) = uVar1;
  if ((int)((ulong)uVar1 >> 0x20) == 0) {
    return;
  }
  __n = (ulong)((int)uVar1 + 1) << 3;
  uVar1 = Memory::alloc_static(__n,false);
  *(undefined8 *)(this + 8) = uVar1;
  lVar2 = Memory::alloc_static
                    ((ulong)((*(uint *)(this + 0x10) + 1 >> 2 ^ *(uint *)(this + 0x10)) + 1) << 4,
                     false);
  *(long *)this = lVar2;
  if (*(int *)(this + 0x14) != 0) {
    lVar4 = 0;
    while( true ) {
      this_00 = (StringName *)(lVar2 + lVar4 * 0x10);
      pSVar3 = (StringName *)(lVar4 * 0x10 + *(long *)param_1);
      StringName::StringName(this_00,pSVar3);
      StringName::StringName(this_00 + 8,pSVar3 + 8);
      if (*(uint *)(this + 0x14) <= (uint)(lVar4 + 1)) break;
      lVar2 = *(long *)this;
      lVar4 = lVar4 + 1;
    }
  }
  memcpy(*(void **)(this + 8),*(void **)(param_1 + 8),__n);
  return;
}



/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::get_capacity() const */

int __thiscall
AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
get_capacity(AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
             *this)

{
  return *(int *)(this + 0x10) + 1;
}



/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::size() const */

undefined4 __thiscall
AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::size
          (AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
           *this)

{
  return *(undefined4 *)(this + 0x14);
}



/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::is_empty() const */

undefined4 __thiscall
AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::is_empty
          (AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
           *this)

{
  return CONCAT31((int3)((uint)*(int *)(this + 0x14) >> 8),*(int *)(this + 0x14) == 0);
}



/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::clear() */

void __thiscall
AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::clear
          (AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
           *this)

{
  long lVar1;
  long *plVar2;
  
  if (*(long *)this == 0) {
    return;
  }
  if (*(int *)(this + 0x14) == 0) {
    return;
  }
  lVar1 = 0;
  memset(*(void **)(this + 8),0,(ulong)(*(int *)(this + 0x10) + 1) << 3);
  if (*(int *)(this + 0x14) != 0) {
    do {
      plVar2 = (long *)(*(long *)this + lVar1 * 0x10);
      if (StringName::configured != '\0') {
        if (*plVar2 != 0) {
          StringName::unref();
          plVar2 = (long *)(*(long *)this + lVar1 * 0x10);
          if (StringName::configured == '\0') goto LAB_001059d0;
        }
        if (plVar2[1] != 0) {
          StringName::unref();
        }
      }
LAB_001059d0:
      lVar1 = lVar1 + 1;
    } while ((uint)lVar1 < *(uint *)(this + 0x14));
  }
  *(undefined4 *)(this + 0x14) = 0;
  return;
}



/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::get(StringName const&) */

long * __thiscall
AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::get
          (AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
           *this,StringName *param_1)

{
  ulong uVar1;
  code *pcVar2;
  uint uVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  
  lVar6 = *(long *)this;
  if (lVar6 != 0) {
    if (*(long *)param_1 == 0) {
      uVar3 = StringName::get_empty_hash();
      lVar6 = *(long *)this;
      if (lVar6 == 0) goto LAB_00105ad0;
      uVar8 = 1;
      if (uVar3 != 0) {
        uVar8 = uVar3;
      }
    }
    else {
      uVar8 = *(uint *)(*(long *)param_1 + 0x20);
      if (uVar8 == 0) {
        uVar8 = 1;
      }
    }
    uVar3 = *(uint *)(this + 0x10);
    uVar5 = uVar3 & uVar8;
    uVar1 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar5 * 8);
    if ((uVar8 == (uint)uVar1) &&
       (plVar4 = (long *)((uVar1 >> 0x20) * 0x10 + lVar6), *plVar4 == *(long *)param_1)) {
LAB_00105aa2:
      return plVar4 + 1;
    }
    if (uVar1 != 0) {
      uVar7 = 1;
      while( true ) {
        uVar5 = uVar5 + 1 & uVar3;
        uVar1 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar5 * 8);
        if (((uint)uVar1 == uVar8) &&
           (plVar4 = (long *)((uVar1 >> 0x20) * 0x10 + lVar6), *plVar4 == *(long *)param_1))
        goto LAB_00105aa2;
        if ((uVar1 == 0) || ((((uVar3 + 1) - ((uint)uVar1 & uVar3)) + uVar5 & uVar3) < uVar7))
        break;
        uVar7 = uVar7 + 1;
      }
    }
  }
LAB_00105ad0:
  _err_print_error(&_LC3,"core/templates/a_hash_map.h",0x138,"FATAL: Condition \"!exists\" is true."
                   ,"AHashMap key not found.",0,0);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::get(StringName const&) const */

long * __thiscall
AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::get
          (AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
           *this,StringName *param_1)

{
  ulong uVar1;
  code *pcVar2;
  uint uVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  
  lVar6 = *(long *)this;
  if (lVar6 != 0) {
    if (*(long *)param_1 == 0) {
      uVar3 = StringName::get_empty_hash();
      lVar6 = *(long *)this;
      if (lVar6 == 0) goto LAB_00105c10;
      uVar8 = 1;
      if (uVar3 != 0) {
        uVar8 = uVar3;
      }
    }
    else {
      uVar8 = *(uint *)(*(long *)param_1 + 0x20);
      if (uVar8 == 0) {
        uVar8 = 1;
      }
    }
    uVar3 = *(uint *)(this + 0x10);
    uVar5 = uVar3 & uVar8;
    uVar1 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar5 * 8);
    if ((uVar8 == (uint)uVar1) &&
       (plVar4 = (long *)((uVar1 >> 0x20) * 0x10 + lVar6), *plVar4 == *(long *)param_1)) {
LAB_00105be2:
      return plVar4 + 1;
    }
    if (uVar1 != 0) {
      uVar7 = 1;
      while( true ) {
        uVar5 = uVar5 + 1 & uVar3;
        uVar1 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar5 * 8);
        if (((uint)uVar1 == uVar8) &&
           (plVar4 = (long *)((uVar1 >> 0x20) * 0x10 + lVar6), *plVar4 == *(long *)param_1))
        goto LAB_00105be2;
        if ((uVar1 == 0) || ((((uVar3 + 1) - ((uint)uVar1 & uVar3)) + uVar5 & uVar3) < uVar7))
        break;
        uVar7 = uVar7 + 1;
      }
    }
  }
LAB_00105c10:
  _err_print_error(&_LC3,"core/templates/a_hash_map.h",0x140,"FATAL: Condition \"!exists\" is true."
                   ,"AHashMap key not found.",0,0);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::getptr(StringName const&) const */

long * __thiscall
AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::getptr
          (AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
           *this,StringName *param_1)

{
  ulong uVar1;
  uint uVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  
  lVar5 = *(long *)this;
  if (lVar5 != 0) {
    if (*(long *)param_1 == 0) {
      uVar2 = StringName::get_empty_hash();
      lVar5 = *(long *)this;
      if (lVar5 == 0) {
        return (long *)0x0;
      }
      uVar7 = 1;
      if (uVar2 != 0) {
        uVar7 = uVar2;
      }
    }
    else {
      uVar7 = *(uint *)(*(long *)param_1 + 0x20);
      if (uVar7 == 0) {
        uVar7 = 1;
      }
    }
    uVar2 = *(uint *)(this + 0x10);
    uVar4 = uVar2 & uVar7;
    uVar1 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar4 * 8);
    if ((uVar7 == (uint)uVar1) &&
       (plVar3 = (long *)((uVar1 >> 0x20) * 0x10 + lVar5), *plVar3 == *(long *)param_1)) {
LAB_00105d22:
      return plVar3 + 1;
    }
    if (uVar1 != 0) {
      uVar6 = 1;
      while( true ) {
        uVar4 = uVar4 + 1 & uVar2;
        uVar1 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar4 * 8);
        if (((uint)uVar1 == uVar7) &&
           (plVar3 = (long *)((uVar1 >> 0x20) * 0x10 + lVar5), *plVar3 == *(long *)param_1))
        goto LAB_00105d22;
        if ((uVar1 == 0) || ((((uVar2 + 1) - ((uint)uVar1 & uVar2)) + uVar4 & uVar2) < uVar6))
        break;
        uVar6 = uVar6 + 1;
      }
    }
  }
  return (long *)0x0;
}



/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::getptr(StringName const&) */

long * __thiscall
AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::getptr
          (AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
           *this,StringName *param_1)

{
  ulong uVar1;
  uint uVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  
  lVar5 = *(long *)this;
  if (lVar5 != 0) {
    if (*(long *)param_1 == 0) {
      uVar2 = StringName::get_empty_hash();
      lVar5 = *(long *)this;
      if (lVar5 == 0) {
        return (long *)0x0;
      }
      uVar7 = 1;
      if (uVar2 != 0) {
        uVar7 = uVar2;
      }
    }
    else {
      uVar7 = *(uint *)(*(long *)param_1 + 0x20);
      if (uVar7 == 0) {
        uVar7 = 1;
      }
    }
    uVar2 = *(uint *)(this + 0x10);
    uVar4 = uVar2 & uVar7;
    uVar1 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar4 * 8);
    if ((uVar7 == (uint)uVar1) &&
       (plVar3 = (long *)((uVar1 >> 0x20) * 0x10 + lVar5), *plVar3 == *(long *)param_1)) {
LAB_00105e32:
      return plVar3 + 1;
    }
    if (uVar1 != 0) {
      uVar6 = 1;
      while( true ) {
        uVar4 = uVar4 + 1 & uVar2;
        uVar1 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar4 * 8);
        if (((uint)uVar1 == uVar7) &&
           (plVar3 = (long *)((uVar1 >> 0x20) * 0x10 + lVar5), *plVar3 == *(long *)param_1))
        goto LAB_00105e32;
        if ((uVar1 == 0) || ((((uVar2 + 1) - ((uint)uVar1 & uVar2)) + uVar4 & uVar2) < uVar6))
        break;
        uVar6 = uVar6 + 1;
      }
    }
  }
  return (long *)0x0;
}



/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::has(StringName const&) const */

undefined8 __thiscall
AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::has
          (AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
           *this,StringName *param_1)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  
  lVar6 = *(long *)this;
  if (lVar6 == 0) {
    return 0;
  }
  if (*(long *)param_1 == 0) {
    uVar3 = StringName::get_empty_hash();
    lVar6 = *(long *)this;
    if (lVar6 == 0) {
      return 0;
    }
    uVar5 = 1;
    if (uVar3 != 0) {
      uVar5 = uVar3;
    }
  }
  else {
    uVar5 = *(uint *)(*(long *)param_1 + 0x20);
    if (uVar5 == 0) {
      uVar5 = 1;
    }
  }
  uVar3 = *(uint *)(this + 0x10);
  uVar2 = uVar5 & uVar3;
  uVar1 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar2 * 8);
  if ((uVar5 == (uint)uVar1) && (*(long *)(lVar6 + (uVar1 >> 0x20) * 0x10) == *(long *)param_1)) {
    return 1;
  }
  if (uVar1 != 0) {
    uVar4 = 1;
    while( true ) {
      uVar2 = uVar2 + 1 & uVar3;
      uVar1 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar2 * 8);
      if ((uVar5 == (uint)uVar1) && (*(long *)(lVar6 + (uVar1 >> 0x20) * 0x10) == *(long *)param_1))
      {
        return 1;
      }
      if ((uVar1 == 0) || ((((uVar3 + 1) - ((uint)uVar1 & uVar3)) + uVar2 & uVar3) < uVar4)) break;
      uVar4 = uVar4 + 1;
    }
  }
  return 0;
}



/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::erase(StringName const&) */

undefined8 __thiscall
AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::erase
          (AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
           *this,StringName *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  long *plVar14;
  uint uVar15;
  uint *puVar16;
  ulong *puVar17;
  long lVar18;
  bool bVar19;
  
  lVar18 = *(long *)this;
  if (lVar18 == 0) {
    return 0;
  }
  if (*(long *)param_1 == 0) {
    uVar9 = StringName::get_empty_hash();
    lVar18 = *(long *)this;
    if (lVar18 == 0) {
      return 0;
    }
    uVar8 = 1;
    if (uVar9 != 0) {
      uVar8 = uVar9;
    }
  }
  else {
    uVar8 = *(uint *)(*(long *)param_1 + 0x20);
    if (uVar8 == 0) {
      uVar8 = 1;
    }
  }
  uVar9 = *(uint *)(this + 0x10);
  lVar3 = *(long *)(this + 8);
  uVar7 = uVar9 & uVar8;
  uVar10 = (ulong)uVar7;
  puVar17 = (ulong *)(lVar3 + uVar10 * 8);
  uVar4 = *puVar17;
  if (uVar8 != (uint)uVar4) {
LAB_00105ffe:
    if (uVar4 != 0) {
      uVar15 = 1;
      while( true ) {
        uVar7 = uVar7 + 1 & uVar9;
        uVar10 = (ulong)uVar7;
        puVar17 = (ulong *)(lVar3 + uVar10 * 8);
        uVar4 = *puVar17;
        if ((uint)uVar4 == uVar8) {
          uVar12 = (uint)(uVar4 >> 0x20);
          lVar13 = (uVar4 >> 0x20) * 0x10;
          plVar14 = (long *)(lVar18 + lVar13);
          if (*plVar14 == *(long *)param_1) goto LAB_0010607b;
        }
        if ((uVar4 == 0) || ((((uVar9 + 1) - ((uint)uVar4 & uVar9)) + uVar7 & uVar9) < uVar15))
        break;
        uVar15 = uVar15 + 1;
      }
    }
    return 0;
  }
  uVar12 = (uint)(uVar4 >> 0x20);
  lVar13 = (uVar4 >> 0x20) * 0x10;
  plVar14 = (long *)(lVar18 + lVar13);
  if (*plVar14 != *(long *)param_1) goto LAB_00105ffe;
LAB_0010607b:
  uVar8 = uVar7 + 1 & uVar9;
  puVar16 = (uint *)(lVar3 + (ulong)uVar8 * 8);
  if ((*puVar16 != 0) &&
     (uVar4 = (ulong)uVar8, ((uVar9 + 1 + uVar8) - (*puVar16 & uVar9) & uVar9) != 0)) {
    do {
      uVar11 = uVar4;
      puVar1 = (undefined8 *)(lVar3 + uVar10 * 8);
      uVar5 = *(undefined8 *)puVar16;
      *(undefined8 *)puVar16 = *puVar1;
      *puVar1 = uVar5;
      uVar8 = (int)uVar11 + 1U & uVar9;
      puVar16 = (uint *)(lVar3 + (ulong)uVar8 * 8);
      if (*puVar16 == 0) break;
      uVar4 = (ulong)uVar8;
      uVar10 = uVar11;
    } while (((uVar9 + 1 + uVar8) - (*puVar16 & uVar9) & uVar9) != 0);
    puVar17 = (ulong *)(lVar3 + uVar11 * 8);
  }
  bVar19 = StringName::configured != '\0';
  *puVar17 = 0;
  if (bVar19) {
    if (*plVar14 != 0) {
      StringName::unref();
      lVar18 = *(long *)this;
      if (StringName::configured == '\0') goto LAB_0010611a;
    }
    if (*(long *)(lVar18 + lVar13 + 8) != 0) {
      StringName::unref();
    }
  }
LAB_0010611a:
  uVar9 = *(int *)(this + 0x14) - 1;
  *(uint *)(this + 0x14) = uVar9;
  if (uVar9 <= uVar12) {
    return 1;
  }
  puVar1 = (undefined8 *)(*(long *)this + (ulong)uVar9 * 0x10);
  uVar5 = puVar1[1];
  puVar2 = (undefined8 *)(*(long *)this + lVar13);
  *puVar2 = *puVar1;
  puVar2[1] = uVar5;
  lVar18 = *(long *)this;
  plVar14 = (long *)((ulong)*(uint *)(this + 0x14) * 0x10 + lVar18);
  if (lVar18 == 0) {
LAB_001062b7:
    puVar17 = *(ulong **)(this + 8);
  }
  else {
    if (*plVar14 == 0) {
      uVar9 = StringName::get_empty_hash();
      lVar18 = *(long *)this;
      if (lVar18 == 0) goto LAB_001062b7;
      uVar8 = 1;
      if (uVar9 != 0) {
        uVar8 = uVar9;
      }
    }
    else {
      uVar8 = *(uint *)(*plVar14 + 0x20);
      if (uVar8 == 0) {
        uVar8 = 1;
      }
    }
    uVar9 = *(uint *)(this + 0x10);
    puVar6 = *(ulong **)(this + 8);
    uVar7 = uVar9 & uVar8;
    puVar17 = puVar6 + uVar7;
    uVar4 = *puVar17;
    if (((uVar8 != (uint)uVar4) || (*(long *)(lVar18 + (uVar4 >> 0x20) * 0x10) != *plVar14)) &&
       (puVar17 = puVar6, uVar4 != 0)) {
      uVar15 = 1;
      while( true ) {
        uVar7 = uVar7 + 1 & uVar9;
        puVar17 = puVar6 + uVar7;
        uVar4 = *puVar17;
        if ((((uint)uVar4 == uVar8) && (*(long *)(lVar18 + (uVar4 >> 0x20) * 0x10) == *plVar14)) ||
           ((puVar17 = puVar6, uVar4 == 0 ||
            ((((uVar9 + 1) - ((uint)uVar4 & uVar9)) + uVar7 & uVar9) < uVar15)))) break;
        uVar15 = uVar15 + 1;
      }
    }
  }
  *(uint *)((long)puVar17 + 4) = uVar12;
  return 1;
}



/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::replace_key(StringName const&, StringName const&) */

undefined8 __thiscall
AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
replace_key(AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
            *this,StringName *param_1,StringName *param_2)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  uint *puVar11;
  uint uVar12;
  StringName *this_00;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined4 local_54;
  ulong local_50;
  
  lVar14 = *(long *)param_2;
  if (lVar14 == *(long *)param_1) {
    return 1;
  }
  lVar13 = *(long *)this;
  if (lVar13 != 0) {
    if (lVar14 == 0) {
      uVar5 = StringName::get_empty_hash();
      lVar13 = *(long *)this;
      if (lVar13 == 0) goto LAB_001065d0;
      uVar8 = 1;
      if (uVar5 != 0) {
        uVar8 = uVar5;
      }
    }
    else {
      uVar8 = *(uint *)(lVar14 + 0x20);
      if (*(uint *)(lVar14 + 0x20) == 0) {
        uVar8 = 1;
      }
    }
    uVar5 = *(uint *)(this + 0x10);
    lVar14 = *(long *)(this + 8);
    uVar7 = uVar5 & uVar8;
    uVar6 = *(ulong *)(lVar14 + (ulong)uVar7 * 8);
    if ((uVar8 == (uint)uVar6) && (*(long *)(lVar13 + (uVar6 >> 0x20) * 0x10) == *(long *)param_2))
    {
LAB_00106386:
      _err_print_error("replace_key","core/templates/a_hash_map.h",0x18a,
                       "Condition \"_lookup_pos(p_new_key, element_pos, pos)\" is true. Returning: false"
                       ,0,0);
      return 0;
    }
    if (uVar6 != 0) {
      uVar12 = 1;
      while( true ) {
        uVar7 = uVar7 + 1 & uVar5;
        uVar6 = *(ulong *)(lVar14 + (ulong)uVar7 * 8);
        if (((uint)uVar6 == uVar8) &&
           (*(long *)(lVar13 + (uVar6 >> 0x20) * 0x10) == *(long *)param_2)) goto LAB_00106386;
        if ((uVar6 == 0) || ((((uVar5 + 1) - ((uint)uVar6 & uVar5)) + uVar7 & uVar5) < uVar12))
        break;
        uVar12 = uVar12 + 1;
      }
    }
    if (*(long *)param_1 == 0) {
      uVar5 = StringName::get_empty_hash();
      lVar13 = *(long *)this;
      if (lVar13 == 0) goto LAB_001065d0;
      lVar14 = *(long *)(this + 8);
      uVar8 = 1;
      if (uVar5 != 0) {
        uVar8 = uVar5;
      }
      uVar5 = *(uint *)(this + 0x10);
    }
    else {
      uVar8 = *(uint *)(*(long *)param_1 + 0x20);
      if (uVar8 == 0) {
        uVar8 = 1;
      }
    }
    uVar7 = uVar8 & uVar5;
    uVar10 = (ulong)uVar7;
    uVar6 = *(ulong *)(lVar14 + uVar10 * 8);
    if (uVar8 == (uint)uVar6) {
      local_50 = uVar6 >> 0x20;
      local_54 = (undefined4)(uVar6 >> 0x20);
      this_00 = (StringName *)(local_50 * 0x10 + lVar13);
      if (*(long *)this_00 == *(long *)param_1) {
LAB_00106485:
        lVar14 = uVar10 * 8;
        StringName::operator=(this_00,param_2);
        uVar5 = *(uint *)(this + 0x10);
        lVar13 = *(long *)(this + 8);
        uVar8 = uVar7 + 1 & uVar5;
        puVar11 = (uint *)(lVar13 + (ulong)uVar8 * 8);
        if ((*puVar11 != 0) &&
           (uVar6 = (ulong)uVar8, ((uVar8 + uVar5 + 1) - (*puVar11 & uVar5) & uVar5) != 0)) {
          do {
            uVar9 = uVar6;
            puVar1 = (undefined8 *)(lVar13 + uVar10 * 8);
            uVar3 = *(undefined8 *)puVar11;
            *(undefined8 *)puVar11 = *puVar1;
            *puVar1 = uVar3;
            uVar8 = (int)uVar9 + 1U & uVar5;
            puVar11 = (uint *)(lVar13 + (ulong)uVar8 * 8);
            if (*puVar11 == 0) break;
            uVar6 = (ulong)uVar8;
            uVar10 = uVar9;
          } while (((uVar8 + uVar5 + 1) - (*puVar11 & uVar5) & uVar5) != 0);
          lVar14 = uVar9 * 8;
        }
        lVar4 = *(long *)param_2;
        *(undefined8 *)(lVar13 + lVar14) = 0;
        if (lVar4 == 0) {
          uVar8 = StringName::get_empty_hash();
          uVar5 = *(uint *)(this + 0x10);
          lVar13 = *(long *)(this + 8);
        }
        else {
          uVar8 = *(uint *)(lVar4 + 0x20);
        }
        if (uVar8 == 0) {
          uVar8 = 1;
        }
        puVar2 = (ulong *)(lVar13 + (ulong)(uVar8 & uVar5) * 8);
        if (*puVar2 == 0) {
          *puVar2 = (ulong)uVar8 | local_50 << 0x20;
        }
        else {
          uVar6 = (ulong)((uVar8 & uVar5) + 1 & uVar5);
          uVar7 = 1;
          puVar11 = (uint *)(lVar13 + uVar6 * 8);
          lVar14 = *(long *)puVar11;
          uVar3 = CONCAT44(local_54,uVar8);
          while (lVar14 != 0) {
            uVar8 = ((int)uVar6 + uVar5 + 1) - (*puVar11 & uVar5) & uVar5;
            uVar15 = uVar3;
            if (uVar8 < uVar7) {
              uVar15 = *(undefined8 *)puVar11;
              *(undefined8 *)puVar11 = uVar3;
              uVar7 = uVar8;
            }
            uVar7 = uVar7 + 1;
            uVar6 = (ulong)((int)uVar6 + 1U & uVar5);
            puVar11 = (uint *)(lVar13 + uVar6 * 8);
            uVar3 = uVar15;
            lVar14 = *(long *)puVar11;
          }
          *(undefined8 *)puVar11 = uVar3;
        }
        return 1;
      }
    }
    if (uVar6 != 0) {
      uVar12 = 1;
      while( true ) {
        uVar7 = uVar7 + 1 & uVar5;
        uVar10 = (ulong)uVar7;
        uVar6 = *(ulong *)(lVar14 + uVar10 * 8);
        if (uVar8 == (uint)uVar6) {
          local_50 = uVar6 >> 0x20;
          local_54 = (undefined4)(uVar6 >> 0x20);
          this_00 = (StringName *)(local_50 * 0x10 + lVar13);
          if (*(long *)this_00 == *(long *)param_1) goto LAB_00106485;
        }
        if ((uVar6 == 0) || ((((uVar5 + 1) - ((uint)uVar6 & uVar5)) + uVar7 & uVar5) < uVar12))
        break;
        uVar12 = uVar12 + 1;
      }
    }
  }
LAB_001065d0:
  _err_print_error("replace_key","core/templates/a_hash_map.h",0x18b,
                   "Condition \"!_lookup_pos(p_old_key, element_pos, pos)\" is true. Returning: false"
                   ,0,0);
  return 0;
}



/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::reserve(unsigned int) */

void __thiscall
AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::reserve
          (AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
           *this,uint param_1)

{
  uint uVar1;
  
  if (param_1 < *(int *)(this + 0x10) + 1U) {
    _err_print_error("reserve","core/templates/a_hash_map.h",0x1a2,
                     "Condition \"p_new_capacity < get_capacity()\" is true.",
                     "It is impossible to reserve less capacity than is currently available.",0,0);
    return;
  }
  if (*(long *)this != 0) {
    _resize_and_rehash(this,param_1);
    return;
  }
  uVar1 = 4;
  if (3 < param_1) {
    uVar1 = param_1;
  }
  uVar1 = uVar1 - 1 | uVar1 - 1 >> 1;
  uVar1 = uVar1 | uVar1 >> 2;
  uVar1 = uVar1 | uVar1 >> 4;
  uVar1 = uVar1 | uVar1 >> 8;
  *(uint *)(this + 0x10) = uVar1 | uVar1 >> 0x10;
  return;
}



/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::begin() */

void AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
     begin(void)

{
  long lVar1;
  long *in_RSI;
  long *in_RDI;
  
  lVar1 = *in_RSI;
  in_RDI[2] = (ulong)*(uint *)((long)in_RSI + 0x14) * 0x10 + lVar1;
  *in_RDI = lVar1;
  in_RDI[1] = lVar1;
  return;
}



/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::end() */

void AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::end
               (void)

{
  long lVar1;
  long lVar2;
  long *in_RSI;
  long *in_RDI;
  
  lVar1 = *in_RSI;
  lVar2 = (ulong)*(uint *)((long)in_RSI + 0x14) * 0x10 + lVar1;
  in_RDI[2] = lVar2;
  *in_RDI = lVar2;
  in_RDI[1] = lVar1;
  return;
}



/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::last() */

void AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::last
               (void)

{
  long lVar1;
  long lVar2;
  long *in_RSI;
  undefined1 (*in_RDI) [16];
  
  if (*(uint *)((long)in_RSI + 0x14) != 0) {
    lVar1 = *in_RSI;
    lVar2 = (ulong)*(uint *)((long)in_RSI + 0x14) * 0x10;
    *(long *)in_RDI[1] = lVar1 + lVar2;
    *(long *)*in_RDI = lVar1 + -0x10 + lVar2;
    *(long *)(*in_RDI + 8) = lVar1;
    return;
  }
  *(undefined8 *)in_RDI[1] = 0;
  *in_RDI = (undefined1  [16])0x0;
  return;
}



/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::find(StringName const&) */

StringName *
AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::find
          (StringName *param_1)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long *in_RDX;
  long *in_RSI;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  
  lVar4 = *in_RSI;
  if (lVar4 == 0) {
LAB_001068fe:
    lVar4 = 0;
  }
  else {
    if (*in_RDX == 0) {
      uVar3 = StringName::get_empty_hash();
      lVar4 = *in_RSI;
      if (lVar4 == 0) goto LAB_001068fe;
      uVar6 = 1;
      if (uVar3 != 0) {
        uVar6 = uVar3;
      }
    }
    else {
      uVar6 = *(uint *)(*in_RDX + 0x20);
      if (uVar6 == 0) {
        uVar6 = 1;
      }
    }
    uVar3 = *(uint *)(in_RSI + 2);
    uVar2 = uVar3 & uVar6;
    uVar1 = *(ulong *)(in_RSI[1] + (ulong)uVar2 * 8);
    if ((uVar6 == (uint)uVar1) &&
       (plVar7 = (long *)((uVar1 >> 0x20) * 0x10 + lVar4), *plVar7 == *in_RDX)) {
LAB_001068c9:
      uVar3 = *(uint *)((long)in_RSI + 0x14);
      *(long **)param_1 = plVar7;
      *(long *)(param_1 + 8) = lVar4;
      *(ulong *)(param_1 + 0x10) = (ulong)uVar3 * 0x10 + lVar4;
      return param_1;
    }
    if (uVar1 != 0) {
      uVar5 = 1;
      while( true ) {
        uVar2 = uVar2 + 1 & uVar3;
        uVar1 = *(ulong *)(in_RSI[1] + (ulong)uVar2 * 8);
        if (((uint)uVar1 == uVar6) &&
           (plVar7 = (long *)((uVar1 >> 0x20) * 0x10 + lVar4), *plVar7 == *in_RDX))
        goto LAB_001068c9;
        if ((uVar1 == 0) || ((((uVar3 + 1) - ((uint)uVar1 & uVar3)) + uVar2 & uVar3) < uVar5))
        break;
        uVar5 = uVar5 + 1;
      }
    }
  }
  uVar3 = *(uint *)((long)in_RSI + 0x14);
  *(long *)(param_1 + 8) = lVar4;
  lVar4 = (ulong)uVar3 * 0x10 + lVar4;
  *(long *)param_1 = lVar4;
  *(long *)(param_1 + 0x10) = lVar4;
  return param_1;
}



/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::remove(AHashMap<StringName, StringName, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> >::Iterator const&) */

void __thiscall
AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::remove
          (AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
           *this,Iterator *param_1)

{
  if (*(StringName **)(param_1 + 0x10) != *(StringName **)param_1) {
    erase(this,*(StringName **)param_1);
    return;
  }
  return;
}



/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::begin() const */

void AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
     begin(void)

{
  long lVar1;
  long *in_RSI;
  long *in_RDI;
  
  lVar1 = *in_RSI;
  in_RDI[2] = (ulong)*(uint *)((long)in_RSI + 0x14) * 0x10 + lVar1;
  *in_RDI = lVar1;
  in_RDI[1] = lVar1;
  return;
}



/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::end() const */

void AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::end
               (void)

{
  long lVar1;
  long lVar2;
  long *in_RSI;
  long *in_RDI;
  
  lVar1 = *in_RSI;
  lVar2 = (ulong)*(uint *)((long)in_RSI + 0x14) * 0x10 + lVar1;
  in_RDI[2] = lVar2;
  *in_RDI = lVar2;
  in_RDI[1] = lVar1;
  return;
}



/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::last() const */

void AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::last
               (void)

{
  long lVar1;
  long lVar2;
  long *in_RSI;
  undefined1 (*in_RDI) [16];
  
  if (*(uint *)((long)in_RSI + 0x14) != 0) {
    lVar1 = *in_RSI;
    lVar2 = (ulong)*(uint *)((long)in_RSI + 0x14) * 0x10;
    *(long *)in_RDI[1] = lVar1 + lVar2;
    *(long *)*in_RDI = lVar1 + -0x10 + lVar2;
    *(long *)(*in_RDI + 8) = lVar1;
    return;
  }
  *(undefined8 *)in_RDI[1] = 0;
  *in_RDI = (undefined1  [16])0x0;
  return;
}



/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::find(StringName const&) const */

StringName *
AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::find
          (StringName *param_1)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long *in_RDX;
  long *in_RSI;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  
  lVar4 = *in_RSI;
  if (lVar4 == 0) {
LAB_00106b2e:
    lVar4 = 0;
  }
  else {
    if (*in_RDX == 0) {
      uVar3 = StringName::get_empty_hash();
      lVar4 = *in_RSI;
      if (lVar4 == 0) goto LAB_00106b2e;
      uVar6 = 1;
      if (uVar3 != 0) {
        uVar6 = uVar3;
      }
    }
    else {
      uVar6 = *(uint *)(*in_RDX + 0x20);
      if (uVar6 == 0) {
        uVar6 = 1;
      }
    }
    uVar3 = *(uint *)(in_RSI + 2);
    uVar2 = uVar3 & uVar6;
    uVar1 = *(ulong *)(in_RSI[1] + (ulong)uVar2 * 8);
    if ((uVar6 == (uint)uVar1) &&
       (plVar7 = (long *)((uVar1 >> 0x20) * 0x10 + lVar4), *plVar7 == *in_RDX)) {
LAB_00106af9:
      uVar3 = *(uint *)((long)in_RSI + 0x14);
      *(long **)param_1 = plVar7;
      *(long *)(param_1 + 8) = lVar4;
      *(ulong *)(param_1 + 0x10) = (ulong)uVar3 * 0x10 + lVar4;
      return param_1;
    }
    if (uVar1 != 0) {
      uVar5 = 1;
      while( true ) {
        uVar2 = uVar2 + 1 & uVar3;
        uVar1 = *(ulong *)(in_RSI[1] + (ulong)uVar2 * 8);
        if (((uint)uVar1 == uVar6) &&
           (plVar7 = (long *)((uVar1 >> 0x20) * 0x10 + lVar4), *plVar7 == *in_RDX))
        goto LAB_00106af9;
        if ((uVar1 == 0) || ((((uVar3 + 1) - ((uint)uVar1 & uVar3)) + uVar2 & uVar3) < uVar5))
        break;
        uVar5 = uVar5 + 1;
      }
    }
  }
  uVar3 = *(uint *)((long)in_RSI + 0x14);
  *(long *)(param_1 + 8) = lVar4;
  lVar4 = (ulong)uVar3 * 0x10 + lVar4;
  *(long *)param_1 = lVar4;
  *(long *)(param_1 + 0x10) = lVar4;
  return param_1;
}



/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::operator[](StringName const&) const */

long * __thiscall
AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
operator[](AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
           *this,StringName *param_1)

{
  ulong uVar1;
  code *pcVar2;
  uint uVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  
  lVar6 = *(long *)this;
  if (lVar6 != 0) {
    if (*(long *)param_1 == 0) {
      uVar3 = StringName::get_empty_hash();
      lVar6 = *(long *)this;
      if (lVar6 == 0) goto LAB_00106c80;
      uVar8 = 1;
      if (uVar3 != 0) {
        uVar8 = uVar3;
      }
    }
    else {
      uVar8 = *(uint *)(*(long *)param_1 + 0x20);
      if (uVar8 == 0) {
        uVar8 = 1;
      }
    }
    uVar3 = *(uint *)(this + 0x10);
    uVar5 = uVar3 & uVar8;
    uVar1 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar5 * 8);
    if ((uVar8 == (uint)uVar1) &&
       (plVar4 = (long *)((uVar1 >> 0x20) * 0x10 + lVar6), *plVar4 == *(long *)param_1)) {
LAB_00106c52:
      return plVar4 + 1;
    }
    if (uVar1 != 0) {
      uVar7 = 1;
      while( true ) {
        uVar5 = uVar5 + 1 & uVar3;
        uVar1 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar5 * 8);
        if (((uint)uVar1 == uVar8) &&
           (plVar4 = (long *)((uVar1 >> 0x20) * 0x10 + lVar6), *plVar4 == *(long *)param_1))
        goto LAB_00106c52;
        if ((uVar1 == 0) || ((((uVar3 + 1) - ((uint)uVar1 & uVar3)) + uVar5 & uVar3) < uVar7))
        break;
        uVar7 = uVar7 + 1;
      }
    }
  }
LAB_00106c80:
  _err_print_error("operator[]","core/templates/a_hash_map.h",0x24e,
                   "FATAL: Condition \"!exists\" is true.",0,0);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::operator[](StringName const&) */

long * __thiscall
AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
operator[](AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
           *this,StringName *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  long *plVar5;
  uint uVar6;
  uint uVar7;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)param_1 == 0) {
    uVar4 = StringName::get_empty_hash();
  }
  else {
    uVar4 = *(uint *)(*(long *)param_1 + 0x20);
  }
  lVar2 = *(long *)this;
  if (uVar4 == 0) {
    uVar4 = 1;
  }
  if (lVar2 != 0) {
    uVar1 = *(uint *)(this + 0x10);
    uVar6 = uVar4 & uVar1;
    uVar3 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar6 * 8);
    if ((uVar4 == (uint)uVar3) &&
       (plVar5 = (long *)((uVar3 >> 0x20) * 0x10 + lVar2), *plVar5 == *(long *)param_1))
    goto LAB_00106d98;
    if (uVar3 != 0) {
      uVar7 = 1;
      while( true ) {
        uVar6 = uVar6 + 1 & uVar1;
        uVar3 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar6 * 8);
        if ((uVar4 == (uint)uVar3) &&
           (plVar5 = (long *)((uVar3 >> 0x20) * 0x10 + lVar2), *plVar5 == *(long *)param_1))
        goto LAB_00106d98;
        if ((uVar3 == 0) || ((((uVar1 + 1) - ((uint)uVar3 & uVar1)) + uVar6 & uVar1) < uVar7))
        break;
        uVar7 = uVar7 + 1;
      }
    }
  }
  local_38 = 0;
  uVar4 = _insert_element(this,param_1,(StringName *)&local_38,uVar4);
  if ((StringName::configured != '\0') && (local_38 != 0)) {
    StringName::unref();
  }
  plVar5 = (long *)((ulong)uVar4 * 0x10 + *(long *)this);
LAB_00106d98:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return plVar5 + 1;
}



/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::insert(StringName const&, StringName const&) */

StringName *
AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
          (StringName *param_1,StringName *param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  StringName *in_RCX;
  StringName *in_RDX;
  long lVar6;
  uint uVar7;
  long *plVar8;
  
  if (*(long *)in_RDX == 0) {
    uVar5 = StringName::get_empty_hash();
  }
  else {
    uVar5 = *(uint *)(*(long *)in_RDX + 0x20);
  }
  lVar2 = *(long *)param_2;
  if (uVar5 == 0) {
    uVar5 = 1;
  }
  if (lVar2 != 0) {
    uVar1 = *(uint *)(param_2 + 0x10);
    uVar4 = uVar1 & uVar5;
    uVar3 = *(ulong *)(*(long *)(param_2 + 8) + (ulong)uVar4 * 8);
    if (uVar5 == (uint)uVar3) {
      lVar6 = (uVar3 >> 0x20) * 0x10;
      plVar8 = (long *)(lVar2 + lVar6);
      if (*plVar8 == *(long *)in_RDX) {
LAB_00106f15:
        StringName::operator=((StringName *)(plVar8 + 1),in_RCX);
        goto LAB_00106f23;
      }
    }
    if (uVar3 != 0) {
      uVar7 = 1;
      while( true ) {
        uVar4 = uVar4 + 1 & uVar1;
        uVar3 = *(ulong *)(*(long *)(param_2 + 8) + (ulong)uVar4 * 8);
        if ((uint)uVar3 == uVar5) {
          lVar6 = (uVar3 >> 0x20) * 0x10;
          plVar8 = (long *)(lVar2 + lVar6);
          if (*plVar8 == *(long *)in_RDX) goto LAB_00106f15;
        }
        if ((uVar3 == 0) || ((((uVar1 + 1) - ((uint)uVar3 & uVar1)) + uVar4 & uVar1) < uVar7))
        break;
        uVar7 = uVar7 + 1;
      }
    }
  }
  uVar5 = _insert_element((AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
                           *)param_2,in_RDX,in_RCX,uVar5);
  lVar6 = (ulong)uVar5 << 4;
LAB_00106f23:
  lVar2 = *(long *)param_2;
  *(ulong *)(param_1 + 0x10) = (ulong)*(uint *)(param_2 + 0x14) * 0x10 + lVar2;
  *(long *)param_1 = lVar2 + lVar6;
  *(long *)(param_1 + 8) = lVar2;
  return param_1;
}



/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::insert_new(StringName const&, StringName const&) */

StringName *
AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
insert_new(StringName *param_1,StringName *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  StringName *in_RCX;
  StringName *in_RDX;
  
  if (*(long *)in_RDX == 0) {
    uVar2 = StringName::get_empty_hash();
  }
  else {
    uVar2 = *(uint *)(*(long *)in_RDX + 0x20);
  }
  uVar3 = 1;
  if (uVar2 != 0) {
    uVar3 = uVar2;
  }
  uVar2 = _insert_element((AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
                           *)param_2,in_RDX,in_RCX,uVar3);
  lVar1 = *(long *)param_2;
  *(ulong *)(param_1 + 0x10) = (ulong)*(uint *)(param_2 + 0x14) * 0x10 + lVar1;
  *(ulong *)param_1 = (ulong)uVar2 * 0x10 + lVar1;
  *(long *)(param_1 + 8) = lVar1;
  return param_1;
}



/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::get_elements_ptr() */

undefined8 __thiscall
AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
get_elements_ptr(AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
                 *this)

{
  return *(undefined8 *)this;
}



/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::get_index(StringName const&) */

ulong __thiscall
AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::get_index
          (AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
           *this,StringName *param_1)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  
  lVar4 = *(long *)this;
  if (lVar4 != 0) {
    if (*(long *)param_1 == 0) {
      uVar2 = StringName::get_empty_hash();
      lVar4 = *(long *)this;
      if (lVar4 == 0) {
        return 0xffffffff;
      }
      uVar6 = 1;
      if (uVar2 != 0) {
        uVar6 = uVar2;
      }
    }
    else {
      uVar6 = *(uint *)(*(long *)param_1 + 0x20);
      if (uVar6 == 0) {
        uVar6 = 1;
      }
    }
    uVar2 = *(uint *)(this + 0x10);
    uVar3 = uVar2 & uVar6;
    uVar1 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar3 * 8);
    if ((uVar6 == (uint)uVar1) && (*(long *)(lVar4 + (uVar1 >> 0x20) * 0x10) == *(long *)param_1)) {
      return uVar1 >> 0x20;
    }
    if (uVar1 != 0) {
      uVar5 = 1;
      while( true ) {
        uVar3 = uVar3 + 1 & uVar2;
        uVar1 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar3 * 8);
        if (((uint)uVar1 == uVar6) &&
           (*(long *)(lVar4 + (uVar1 >> 0x20) * 0x10) == *(long *)param_1)) {
          return uVar1 >> 0x20;
        }
        if ((uVar1 == 0) || ((((uVar2 + 1) - ((uint)uVar1 & uVar2)) + uVar3 & uVar2) < uVar5))
        break;
        uVar5 = uVar5 + 1;
      }
    }
  }
  return 0xffffffff;
}



/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::get_by_index(unsigned int) */

long __thiscall
AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
get_by_index(AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
             *this,uint param_1)

{
  code *pcVar1;
  
  if (param_1 < *(uint *)(this + 0x14)) {
    return (ulong)param_1 * 0x10 + *(long *)this;
  }
  _err_print_index_error
            ("get_by_index","core/templates/a_hash_map.h",0x28b,(ulong)param_1,
             (ulong)*(uint *)(this + 0x14),"p_index","num_elements","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::erase_by_index(unsigned int) */

undefined8 __thiscall
AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
erase_by_index(AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
               *this,uint param_1)

{
  undefined8 uVar1;
  
  if (*(uint *)(this + 0x14) <= param_1) {
    return 0;
  }
  uVar1 = erase(this,(StringName *)((ulong)param_1 * 0x10 + *(long *)this));
  return uVar1;
}



/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::AHashMap(AHashMap<StringName, StringName, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> > const&) */

void __thiscall
AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::AHashMap
          (AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
           *this,AHashMap *param_1)

{
  undefined8 uVar1;
  long lVar2;
  StringName *pSVar3;
  StringName *this_00;
  ulong __n;
  long lVar4;
  
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x10) = uVar1;
  if ((int)((ulong)uVar1 >> 0x20) == 0) {
    return;
  }
  __n = (ulong)((int)uVar1 + 1) << 3;
  uVar1 = Memory::alloc_static(__n,false);
  *(undefined8 *)(this + 8) = uVar1;
  lVar2 = Memory::alloc_static
                    ((ulong)((*(uint *)(this + 0x10) + 1 >> 2 ^ *(uint *)(this + 0x10)) + 1) << 4,
                     false);
  *(long *)this = lVar2;
  if (*(int *)(this + 0x14) != 0) {
    lVar4 = 0;
    while( true ) {
      this_00 = (StringName *)(lVar2 + lVar4 * 0x10);
      pSVar3 = (StringName *)(lVar4 * 0x10 + *(long *)param_1);
      StringName::StringName(this_00,pSVar3);
      StringName::StringName(this_00 + 8,pSVar3 + 8);
      if (*(uint *)(this + 0x14) <= (uint)(lVar4 + 1)) break;
      lVar2 = *(long *)this;
      lVar4 = lVar4 + 1;
    }
  }
  memcpy(*(void **)(this + 8),*(void **)(param_1 + 8),__n);
  return;
}



/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::AHashMap(HashMap<StringName, StringName, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   StringName> > > const&) */

ulong __thiscall
AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::AHashMap
          (AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
           *this,HashMap *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uStack_28;
  
  uVar2 = *(uint *)(param_1 + 0x2c);
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  if (uVar2 == 0) {
    uStack_28 = 0;
    _err_print_error("reserve","core/templates/a_hash_map.h",0x1a2,
                     "Condition \"p_new_capacity < get_capacity()\" is true.",
                     "It is impossible to reserve less capacity than is currently available.",0);
  }
  else {
    if (uVar2 < 4) {
      uVar2 = 4;
    }
    uVar2 = uVar2 - 1 | uVar2 - 1 >> 1;
    uVar2 = uVar2 | uVar2 >> 2;
    uVar2 = uVar2 | uVar2 >> 4;
    uVar2 = uVar2 | uVar2 >> 8;
    uVar2 = uVar2 | uVar2 >> 0x10;
    uStack_28 = (ulong)uVar2;
    *(uint *)(this + 0x10) = uVar2;
  }
  for (puVar1 = *(undefined8 **)(param_1 + 0x18); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)*puVar1) {
    if (puVar1[2] == 0) {
      uVar2 = StringName::get_empty_hash();
    }
    else {
      uVar2 = *(uint *)(puVar1[2] + 0x20);
    }
    uVar3 = 1;
    if (uVar2 != 0) {
      uVar3 = uVar2;
    }
    uStack_28 = _insert_element(this,(StringName *)(puVar1 + 2),(StringName *)(puVar1 + 3),uVar3);
  }
  return uStack_28;
}



/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::TEMPNAMEPLACEHOLDERVALUE(AHashMap<StringName, StringName, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> > const&) */

void __thiscall
AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::operator=
          (AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
           *this,AHashMap *param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  long lVar3;
  StringName *pSVar4;
  long *plVar5;
  ulong __n;
  StringName *this_00;
  long lVar6;
  
  if (this == (AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
               *)param_1) {
    return;
  }
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    if (*(int *)(this + 0x14) != 0) {
      lVar3 = 0;
      do {
        plVar5 = (long *)((long)pvVar1 + lVar3 * 0x10);
        if (StringName::configured != '\0') {
          if (*plVar5 != 0) {
            StringName::unref();
            pvVar1 = *(void **)this;
            plVar5 = (long *)((long)pvVar1 + lVar3 * 0x10);
            if (StringName::configured == '\0') goto LAB_0010745a;
          }
          if (plVar5[1] != 0) {
            StringName::unref();
            pvVar1 = *(void **)this;
          }
        }
LAB_0010745a:
        lVar3 = lVar3 + 1;
      } while ((uint)lVar3 < *(uint *)(this + 0x14));
    }
    Memory::free_static(pvVar1,false);
    Memory::free_static(*(void **)(this + 8),false);
    *(undefined8 *)this = 0;
  }
  *(undefined8 *)(this + 0x10) = 0xf;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x10) = uVar2;
  if ((int)((ulong)uVar2 >> 0x20) == 0) {
    return;
  }
  __n = (ulong)((int)uVar2 + 1) << 3;
  uVar2 = Memory::alloc_static(__n,false);
  *(undefined8 *)(this + 8) = uVar2;
  lVar3 = Memory::alloc_static
                    ((ulong)((*(uint *)(this + 0x10) + 1 >> 2 ^ *(uint *)(this + 0x10)) + 1) << 4,
                     false);
  *(long *)this = lVar3;
  if (*(int *)(this + 0x14) != 0) {
    lVar6 = 0;
    while( true ) {
      this_00 = (StringName *)(lVar3 + lVar6 * 0x10);
      pSVar4 = (StringName *)(lVar6 * 0x10 + *(long *)param_1);
      StringName::StringName(this_00,pSVar4);
      StringName::StringName(this_00 + 8,pSVar4 + 8);
      if (*(uint *)(this + 0x14) <= (uint)(lVar6 + 1)) break;
      lVar3 = *(long *)this;
      lVar6 = lVar6 + 1;
    }
  }
  memcpy(*(void **)(this + 8),*(void **)(param_1 + 8),__n);
  return;
}



/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::TEMPNAMEPLACEHOLDERVALUE(HashMap<StringName, StringName, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   StringName> > > const&) */

void __thiscall
AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::operator=
          (AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
           *this,HashMap *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  
  pvVar3 = *(void **)this;
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x14) != 0) {
      lVar5 = 0;
      do {
        plVar6 = (long *)((long)pvVar3 + lVar5 * 0x10);
        if (StringName::configured != '\0') {
          if (*plVar6 != 0) {
            StringName::unref();
            pvVar3 = *(void **)this;
            plVar6 = (long *)((long)pvVar3 + lVar5 * 0x10);
            if (StringName::configured == '\0') goto LAB_001075cc;
          }
          if (plVar6[1] != 0) {
            StringName::unref();
            pvVar3 = *(void **)this;
          }
        }
LAB_001075cc:
        lVar5 = lVar5 + 1;
      } while ((uint)lVar5 < *(uint *)(this + 0x14));
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 8),false);
    *(undefined8 *)this = 0;
  }
  *(undefined8 *)(this + 0x10) = 0xf;
  uVar2 = *(uint *)(param_1 + 0x2c);
  if (0x10 < uVar2) {
    if (*(long *)this == 0) {
      uVar2 = uVar2 - 1 | uVar2 - 1 >> 1;
      uVar2 = uVar2 | uVar2 >> 2;
      uVar2 = uVar2 | uVar2 >> 4;
      uVar2 = uVar2 | uVar2 >> 8;
      *(uint *)(this + 0x10) = uVar2 | uVar2 >> 0x10;
    }
    else {
      _resize_and_rehash(this,uVar2);
    }
  }
  for (puVar1 = *(undefined8 **)(param_1 + 0x18); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)*puVar1) {
    if (puVar1[2] == 0) {
      uVar2 = StringName::get_empty_hash();
    }
    else {
      uVar2 = *(uint *)(puVar1[2] + 0x20);
    }
    uVar4 = 1;
    if (uVar2 != 0) {
      uVar4 = uVar2;
    }
    _insert_element(this,(StringName *)(puVar1 + 2),(StringName *)(puVar1 + 3),uVar4);
  }
  return;
}



/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::AHashMap(unsigned int) */

void __thiscall
AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::AHashMap
          (AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
           *this,uint param_1)

{
  uint uVar1;
  
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  if (param_1 < 4) {
    param_1 = 4;
  }
  uVar1 = param_1 - 1 >> 1 | param_1 - 1;
  uVar1 = uVar1 | uVar1 >> 2;
  uVar1 = uVar1 | uVar1 >> 4;
  uVar1 = uVar1 | uVar1 >> 8;
  *(uint *)(this + 0x10) = uVar1 | uVar1 >> 0x10;
  return;
}



/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::AHashMap() */

void __thiscall
AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::AHashMap
          (AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
           *this)

{
  *(undefined8 *)(this + 0x10) = 0xf;
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  return;
}



/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::AHashMap(std::initializer_list<KeyValue<StringName, StringName> >) */

ulong AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
      AHashMap(AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
               *param_1,StringName *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  StringName *pSVar6;
  uint uVar7;
  long *plVar8;
  ulong uStack_48;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined1 (*) [16])param_1 = (undefined1  [16])0x0;
  uVar4 = (uint)param_3;
  if (uVar4 == 0) {
    uStack_48 = 0;
    _err_print_error("reserve","core/templates/a_hash_map.h",0x1a2,
                     "Condition \"p_new_capacity < get_capacity()\" is true.",
                     "It is impossible to reserve less capacity than is currently available.",0);
  }
  else {
    uVar3 = 4;
    if (3 < uVar4) {
      uVar3 = uVar4;
    }
    uVar4 = uVar3 - 1 | uVar3 - 1 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    uStack_48 = (ulong)uVar4;
    *(uint *)(param_1 + 0x10) = uVar4;
  }
  pSVar6 = param_2 + param_3 * 0x10;
  if (param_2 != pSVar6) {
    do {
      if (*(long *)param_2 == 0) {
        uVar4 = StringName::get_empty_hash();
      }
      else {
        uVar4 = *(uint *)(*(long *)param_2 + 0x20);
      }
      lVar1 = *(long *)param_1;
      if (uVar4 == 0) {
        uVar4 = 1;
      }
      if (lVar1 == 0) {
LAB_00107870:
        uStack_48 = _insert_element(param_1,param_2,param_2 + 8,uVar4);
      }
      else {
        uVar3 = *(uint *)(param_1 + 0x10);
        uVar5 = uVar4 & uVar3;
        uVar2 = *(ulong *)(*(long *)(param_1 + 8) + (ulong)uVar5 * 8);
        if ((uVar4 != (uint)uVar2) ||
           (plVar8 = (long *)((uVar2 >> 0x20) * 0x10 + lVar1), *plVar8 != *(long *)param_2)) {
          if (uVar2 != 0) {
            uVar7 = 1;
            while( true ) {
              uVar5 = uVar5 + 1 & uVar3;
              uVar2 = *(ulong *)(*(long *)(param_1 + 8) + (ulong)uVar5 * 8);
              if ((uVar4 == (uint)uVar2) &&
                 (plVar8 = (long *)((uVar2 >> 0x20) * 0x10 + lVar1), *plVar8 == *(long *)param_2))
              goto LAB_00107843;
              if ((uVar2 == 0) || ((((uVar3 + 1) - ((uint)uVar2 & uVar3)) + uVar5 & uVar3) < uVar7))
              break;
              uVar7 = uVar7 + 1;
            }
          }
          goto LAB_00107870;
        }
LAB_00107843:
        uStack_48 = StringName::operator=((StringName *)(plVar8 + 1),param_2 + 8);
      }
      param_2 = param_2 + 0x10;
    } while (pSVar6 != param_2);
  }
  return uStack_48;
}



/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::reset() */

void __thiscall
AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::reset
          (AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
           *this)

{
  void *pvVar1;
  long lVar2;
  long *plVar3;
  
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    if (*(int *)(this + 0x14) != 0) {
      lVar2 = 0;
      do {
        plVar3 = (long *)((long)pvVar1 + lVar2 * 0x10);
        if (StringName::configured != '\0') {
          if (*plVar3 != 0) {
            StringName::unref();
            pvVar1 = *(void **)this;
            plVar3 = (long *)((long)pvVar1 + lVar2 * 0x10);
            if (StringName::configured == '\0') goto LAB_00107954;
          }
          if (plVar3[1] != 0) {
            StringName::unref();
            pvVar1 = *(void **)this;
          }
        }
LAB_00107954:
        lVar2 = lVar2 + 1;
      } while ((uint)lVar2 < *(uint *)(this + 0x14));
    }
    Memory::free_static(pvVar1,false);
    Memory::free_static(*(void **)(this + 8),false);
    *(undefined8 *)this = 0;
  }
  *(undefined8 *)(this + 0x10) = 0xf;
  return;
}



/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::~AHashMap() */

void __thiscall
AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::~AHashMap
          (AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
           *this)

{
  void *pvVar1;
  long lVar2;
  long *plVar3;
  
  pvVar1 = *(void **)this;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (*(int *)(this + 0x14) != 0) {
    lVar2 = 0;
    do {
      plVar3 = (long *)((long)pvVar1 + lVar2 * 0x10);
      if (StringName::configured != '\0') {
        if (*plVar3 != 0) {
          StringName::unref();
          pvVar1 = *(void **)this;
          plVar3 = (long *)((long)pvVar1 + lVar2 * 0x10);
          if (StringName::configured == '\0') goto LAB_001079f4;
        }
        if (plVar3[1] != 0) {
          StringName::unref();
          pvVar1 = *(void **)this;
        }
      }
LAB_001079f4:
      lVar2 = lVar2 + 1;
    } while ((uint)lVar2 < *(uint *)(this + 0x14));
  }
  Memory::free_static(pvVar1,false);
  Memory::free_static(*(void **)(this + 8),false);
  return;
}



/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::ConstIterator::TEMPNAMEPLACEHOLDERVALUE() const */

undefined8 __thiscall
AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
ConstIterator::operator*(ConstIterator *this)

{
  return *(undefined8 *)this;
}



/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::ConstIterator::TEMPNAMEPLACEHOLDERVALUE() const */

undefined8 __thiscall
AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
ConstIterator::operator->(ConstIterator *this)

{
  return *(undefined8 *)this;
}



/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::ConstIterator::TEMPNAMEPLACEHOLDERVALUE() */

ConstIterator * __thiscall
AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
ConstIterator::operator++(ConstIterator *this)

{
  *(long *)this = *(long *)this + 0x10;
  return this;
}



/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::ConstIterator::TEMPNAMEPLACEHOLDERVALUE() */

ConstIterator * __thiscall
AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
ConstIterator::operator--(ConstIterator *this)

{
  long lVar1;
  
  lVar1 = *(long *)this;
  *(ulong *)this = lVar1 - 0x10U;
  if (lVar1 - 0x10U < *(ulong *)(this + 8)) {
    *(undefined8 *)this = *(undefined8 *)(this + 0x10);
  }
  return this;
}



/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::ConstIterator::TEMPNAMEPLACEHOLDERVALUE(AHashMap<StringName, StringName, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> >::ConstIterator const&) const */

undefined8 __thiscall
AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
ConstIterator::operator==(ConstIterator *this,ConstIterator *param_1)

{
  return CONCAT71((int7)((ulong)*(long *)param_1 >> 8),*(long *)this == *(long *)param_1);
}



/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::ConstIterator::TEMPNAMEPLACEHOLDERVALUE(AHashMap<StringName, StringName, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> >::ConstIterator const&) const */

undefined8 __thiscall
AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
ConstIterator::operator!=(ConstIterator *this,ConstIterator *param_1)

{
  return CONCAT71((int7)((ulong)*(long *)param_1 >> 8),*(long *)this != *(long *)param_1);
}



/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::ConstIterator::operator bool() const */

bool __thiscall AHashMap::ConstIterator::operator_cast_to_bool(ConstIterator *this)

{
  return *(long *)this != *(long *)(this + 0x10);
}



/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::ConstIterator::ConstIterator(KeyValue<StringName, StringName>*, KeyValue<StringName,
   StringName>*, KeyValue<StringName, StringName>*) */

void __thiscall
AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
ConstIterator::ConstIterator
          (ConstIterator *this,KeyValue *param_1,KeyValue *param_2,KeyValue *param_3)

{
  *(KeyValue **)this = param_1;
  *(KeyValue **)(this + 8) = param_2;
  *(KeyValue **)(this + 0x10) = param_3;
  return;
}



/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::ConstIterator::ConstIterator() */

void __thiscall
AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
ConstIterator::ConstIterator(ConstIterator *this)

{
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  return;
}



/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::ConstIterator::ConstIterator(AHashMap<StringName, StringName, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> >::ConstIterator const&) */

void __thiscall
AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
ConstIterator::ConstIterator(ConstIterator *this,ConstIterator *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = uVar2;
  *(undefined8 *)(this + 0x10) = uVar1;
  return;
}



/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::ConstIterator::TEMPNAMEPLACEHOLDERVALUE(AHashMap<StringName, StringName, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> >::ConstIterator const&) */

void __thiscall
AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
ConstIterator::operator=(ConstIterator *this,ConstIterator *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = uVar1;
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  return;
}



/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::Iterator::TEMPNAMEPLACEHOLDERVALUE() const */

undefined8 __thiscall
AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::Iterator
::operator*(Iterator *this)

{
  return *(undefined8 *)this;
}



/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::Iterator::TEMPNAMEPLACEHOLDERVALUE() const */

undefined8 __thiscall
AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::Iterator
::operator->(Iterator *this)

{
  return *(undefined8 *)this;
}



/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::Iterator::TEMPNAMEPLACEHOLDERVALUE() */

Iterator * __thiscall
AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::Iterator
::operator++(Iterator *this)

{
  *(long *)this = *(long *)this + 0x10;
  return this;
}



/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::Iterator::TEMPNAMEPLACEHOLDERVALUE() */

Iterator * __thiscall
AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::Iterator
::operator--(Iterator *this)

{
  long lVar1;
  
  lVar1 = *(long *)this;
  *(ulong *)this = lVar1 - 0x10U;
  if (lVar1 - 0x10U < *(ulong *)(this + 8)) {
    *(undefined8 *)this = *(undefined8 *)(this + 0x10);
  }
  return this;
}



/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::Iterator::TEMPNAMEPLACEHOLDERVALUE(AHashMap<StringName, StringName, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> >::Iterator const&) const */

undefined8 __thiscall
AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::Iterator
::operator==(Iterator *this,Iterator *param_1)

{
  return CONCAT71((int7)((ulong)*(long *)param_1 >> 8),*(long *)this == *(long *)param_1);
}



/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::Iterator::TEMPNAMEPLACEHOLDERVALUE(AHashMap<StringName, StringName, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> >::Iterator const&) const */

undefined8 __thiscall
AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::Iterator
::operator!=(Iterator *this,Iterator *param_1)

{
  return CONCAT71((int7)((ulong)*(long *)param_1 >> 8),*(long *)this != *(long *)param_1);
}



/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::Iterator::operator bool() const */

bool __thiscall AHashMap::Iterator::operator_cast_to_bool(Iterator *this)

{
  return *(long *)this != *(long *)(this + 0x10);
}



/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::Iterator::Iterator(KeyValue<StringName, StringName>*, KeyValue<StringName, StringName>*,
   KeyValue<StringName, StringName>*) */

void __thiscall
AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::Iterator
::Iterator(Iterator *this,KeyValue *param_1,KeyValue *param_2,KeyValue *param_3)

{
  *(KeyValue **)this = param_1;
  *(KeyValue **)(this + 8) = param_2;
  *(KeyValue **)(this + 0x10) = param_3;
  return;
}



/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::Iterator::Iterator() */

void __thiscall
AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::Iterator
::Iterator(Iterator *this)

{
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  return;
}



/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::Iterator::Iterator(AHashMap<StringName, StringName, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> >::Iterator const&) */

void __thiscall
AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::Iterator
::Iterator(Iterator *this,Iterator *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = uVar2;
  *(undefined8 *)(this + 0x10) = uVar1;
  return;
}



/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::Iterator::TEMPNAMEPLACEHOLDERVALUE(AHashMap<StringName, StringName, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> >::Iterator const&) */

void __thiscall
AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::Iterator
::operator=(Iterator *this,Iterator *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = uVar1;
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  return;
}



/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::Iterator::operator AHashMap<StringName, StringName, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> >::ConstIterator() const */

Iterator * __thiscall AHashMap::Iterator::operator_cast_to_ConstIterator(Iterator *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *in_RSI;
  
  uVar1 = *in_RSI;
  uVar2 = in_RSI[1];
  *(undefined8 *)(this + 0x10) = in_RSI[2];
  *(undefined8 *)this = uVar1;
  *(undefined8 *)(this + 8) = uVar2;
  return this;
}



/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::_hash(StringName const&) const */

int __thiscall
AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::_hash
          (AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
           *this,StringName *param_1)

{
  int iVar1;
  
  if (*(long *)param_1 != 0) {
    iVar1 = *(int *)(*(long *)param_1 + 0x20);
    if (iVar1 == 0) {
      iVar1 = 1;
    }
    return iVar1;
  }
  iVar1 = StringName::get_empty_hash();
  if (iVar1 == 0) {
    iVar1 = 1;
  }
  return iVar1;
}



/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::_get_resize_count(unsigned int) */

uint AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
     _get_resize_count(uint param_1)

{
  return param_1 + 1 >> 2 ^ param_1;
}



/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::_get_probe_length(unsigned int, unsigned int, unsigned int) */

uint AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
     _get_probe_length(uint param_1,uint param_2,uint param_3)

{
  return (param_3 + 1 + param_1) - (param_2 & param_3) & param_3;
}



/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::_lookup_pos(StringName const&, unsigned int&, unsigned int&) const */

undefined8 __thiscall
AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::_lookup_pos
          (AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
           *this,StringName *param_1,uint *param_2,uint *param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  
  lVar6 = *(long *)this;
  if (lVar6 == 0) {
    return 0;
  }
  if (*(long *)param_1 == 0) {
    uVar3 = StringName::get_empty_hash();
    lVar6 = *(long *)this;
    if (lVar6 == 0) {
      return 0;
    }
    uVar5 = 1;
    if (uVar3 != 0) {
      uVar5 = uVar3;
    }
  }
  else {
    uVar5 = *(uint *)(*(long *)param_1 + 0x20);
    if (uVar5 == 0) {
      uVar5 = 1;
    }
  }
  uVar3 = *(uint *)(this + 0x10);
  uVar2 = uVar3 & uVar5;
  uVar1 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar2 * 8);
  if ((uVar5 == (uint)uVar1) &&
     (uVar7 = (uint)(uVar1 >> 0x20), *(long *)(lVar6 + (uVar1 >> 0x20) * 0x20) == *(long *)param_1))
  {
LAB_00107d50:
    *param_2 = uVar7;
    *param_3 = uVar2;
    return 1;
  }
  if (uVar1 != 0) {
    uVar4 = 1;
    while( true ) {
      uVar2 = uVar2 + 1 & uVar3;
      uVar1 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar2 * 8);
      if (((uint)uVar1 == uVar5) &&
         (uVar7 = (uint)(uVar1 >> 0x20),
         *(long *)(lVar6 + (uVar1 >> 0x20) * 0x20) == *(long *)param_1)) goto LAB_00107d50;
      if ((uVar1 == 0) || ((((uVar3 + 1) - ((uint)uVar1 & uVar3)) + uVar2 & uVar3) < uVar4)) break;
      uVar4 = uVar4 + 1;
    }
  }
  return 0;
}



/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::_lookup_pos_with_hash(StringName const&, unsigned int&, unsigned int&, unsigned int) const */

undefined8 __thiscall
AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
_lookup_pos_with_hash
          (AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
           *this,StringName *param_1,uint *param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  lVar2 = *(long *)this;
  if (lVar2 != 0) {
    uVar1 = *(uint *)(this + 0x10);
    uVar4 = uVar1 & param_4;
    uVar3 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar4 * 8);
    if ((param_4 == (uint)uVar3) &&
       (uVar6 = (uint)(uVar3 >> 0x20), *(long *)(lVar2 + (uVar3 >> 0x20) * 0x20) == *(long *)param_1
       )) {
LAB_00107e60:
      *param_2 = uVar6;
      *param_3 = uVar4;
      return 1;
    }
    if (uVar3 != 0) {
      uVar5 = 1;
      while( true ) {
        uVar4 = uVar4 + 1 & uVar1;
        uVar3 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar4 * 8);
        if (((uint)uVar3 == param_4) &&
           (uVar6 = (uint)(uVar3 >> 0x20),
           *(long *)(lVar2 + (uVar3 >> 0x20) * 0x20) == *(long *)param_1)) goto LAB_00107e60;
        if ((uVar3 == 0) || ((((uVar1 + 1) - ((uint)uVar3 & uVar1)) + uVar4 & uVar1) < uVar5))
        break;
        uVar5 = uVar5 + 1;
      }
    }
  }
  return 0;
}



/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::_insert_with_hash(unsigned int, unsigned int) */

void __thiscall
AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
_insert_with_hash(AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
                  *this,uint param_1,uint param_2)

{
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  
  uVar3 = *(uint *)(this + 0x10);
  lVar4 = *(long *)(this + 8);
  plVar1 = (long *)(lVar4 + (ulong)(uVar3 & param_1) * 8);
  if (*plVar1 == 0) {
    *plVar1 = CONCAT44(param_2,param_1);
    return;
  }
  uVar9 = 1;
  uVar7 = (uVar3 & param_1) + 1 & uVar3;
  puVar2 = (uint *)(lVar4 + (ulong)uVar7 * 8);
  lVar5 = *(long *)puVar2;
  uVar6 = CONCAT44(param_2,param_1);
  while (lVar5 != 0) {
    uVar8 = (uVar7 + uVar3 + 1) - (*puVar2 & uVar3) & uVar3;
    uVar10 = uVar6;
    if (uVar8 < uVar9) {
      uVar10 = *(undefined8 *)puVar2;
      *(undefined8 *)puVar2 = uVar6;
      uVar9 = uVar8;
    }
    uVar9 = uVar9 + 1;
    uVar7 = uVar7 + 1 & uVar3;
    puVar2 = (uint *)(lVar4 + (ulong)uVar7 * 8);
    uVar6 = uVar10;
    lVar5 = *(long *)puVar2;
  }
  *(undefined8 *)puVar2 = uVar6;
  return;
}



/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::_resize_and_rehash(unsigned int) */

void __thiscall
AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
_resize_and_rehash(AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
                   *this,uint param_1)

{
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  long *plVar14;
  ulong __n;
  
  uVar3 = *(uint *)(this + 0x10);
  plVar4 = *(long **)(this + 8);
  uVar8 = 4;
  if (3 < param_1) {
    uVar8 = param_1;
  }
  uVar8 = uVar8 - 1 | uVar8 - 1 >> 1;
  uVar8 = uVar8 | uVar8 >> 2;
  uVar8 = uVar8 | uVar8 >> 4;
  uVar8 = uVar8 | uVar8 >> 8;
  uVar8 = uVar8 | uVar8 >> 0x10;
  *(uint *)(this + 0x10) = uVar8;
  __n = (ulong)(uVar8 + 1) << 3;
  uVar10 = Memory::alloc_static(__n,false);
  *(undefined8 *)(this + 8) = uVar10;
  uVar10 = Memory::realloc_static
                     (*(void **)this,
                      (ulong)((*(uint *)(this + 0x10) + 1 >> 2 ^ *(uint *)(this + 0x10)) + 1) << 5,
                      false);
  *(undefined8 *)this = uVar10;
  memset(*(void **)(this + 8),0,__n);
  if ((*(int *)(this + 0x14) != 0) && (uVar3 != 0xffffffff)) {
    plVar14 = plVar4;
    do {
      while (lVar5 = *plVar14, lVar5 == 0) {
LAB_00107fe8:
        plVar14 = plVar14 + 1;
        if (plVar14 == plVar4 + (ulong)uVar3 + 1) goto LAB_0010801c;
      }
      uVar8 = *(uint *)(this + 0x10);
      lVar6 = *(long *)(this + 8);
      uVar9 = uVar8 & (uint)lVar5;
      plVar1 = (long *)(lVar6 + (ulong)uVar9 * 8);
      if (*plVar1 != 0) {
        uVar12 = 1;
        uVar9 = uVar9 + 1 & uVar8;
        puVar2 = (uint *)(lVar6 + (ulong)uVar9 * 8);
        lVar7 = *(long *)puVar2;
        while (lVar7 != 0) {
          uVar11 = (uVar9 + uVar8 + 1) - (*puVar2 & uVar8) & uVar8;
          lVar13 = lVar5;
          if (uVar11 < uVar12) {
            lVar13 = *(long *)puVar2;
            *(long *)puVar2 = lVar5;
            uVar12 = uVar11;
          }
          uVar12 = uVar12 + 1;
          uVar9 = uVar9 + 1 & uVar8;
          puVar2 = (uint *)(lVar6 + (ulong)uVar9 * 8);
          lVar5 = lVar13;
          lVar7 = *(long *)puVar2;
        }
        *(long *)puVar2 = lVar5;
        goto LAB_00107fe8;
      }
      plVar14 = plVar14 + 1;
      *plVar1 = lVar5;
    } while (plVar14 != plVar4 + (ulong)uVar3 + 1);
  }
LAB_0010801c:
  Memory::free_static(plVar4,false);
  return;
}



/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::_insert_element(StringName const&, Variant const&, unsigned int) */

int __thiscall
AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
_insert_element(AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
                *this,StringName *param_1,Variant *param_2,uint param_3)

{
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  undefined8 uVar8;
  uint uVar9;
  StringName *this_00;
  ulong __n;
  uint uVar10;
  undefined8 uVar11;
  
  if (*(long *)this == 0) {
    __n = (ulong)(*(int *)(this + 0x10) + 1) << 3;
    uVar8 = Memory::alloc_static(__n,false);
    *(undefined8 *)(this + 8) = uVar8;
    uVar8 = Memory::alloc_static
                      ((ulong)((*(uint *)(this + 0x10) + 1 >> 2 ^ *(uint *)(this + 0x10)) + 1) << 5,
                       false);
    *(undefined8 *)this = uVar8;
    memset(*(void **)(this + 8),0,__n);
  }
  uVar3 = *(uint *)(this + 0x10);
  uVar7 = *(uint *)(this + 0x14);
  if ((uVar3 + 1 >> 2 ^ uVar3) < uVar7) {
    _resize_and_rehash(this,uVar3 * 2);
    uVar7 = *(uint *)(this + 0x14);
  }
  this_00 = (StringName *)((ulong)uVar7 * 0x20 + *(long *)this);
  StringName::StringName(this_00,param_1);
  Variant::Variant((Variant *)(this_00 + 8),param_2);
  uVar3 = *(uint *)(this + 0x10);
  lVar5 = *(long *)(this + 8);
  iVar4 = *(int *)(this + 0x14);
  plVar1 = (long *)(lVar5 + (ulong)(param_3 & uVar3) * 8);
  if (*plVar1 == 0) {
    *plVar1 = CONCAT44(iVar4,param_3);
  }
  else {
    uVar10 = 1;
    uVar7 = (param_3 & uVar3) + 1 & uVar3;
    puVar2 = (uint *)(lVar5 + (ulong)uVar7 * 8);
    lVar6 = *(long *)puVar2;
    uVar8 = CONCAT44(iVar4,param_3);
    while (lVar6 != 0) {
      uVar9 = (uVar7 + uVar3 + 1) - (*puVar2 & uVar3) & uVar3;
      uVar11 = uVar8;
      if (uVar9 < uVar10) {
        uVar11 = *(undefined8 *)puVar2;
        *(undefined8 *)puVar2 = uVar8;
        uVar10 = uVar9;
      }
      uVar10 = uVar10 + 1;
      uVar7 = uVar7 + 1 & uVar3;
      puVar2 = (uint *)(lVar5 + (ulong)uVar7 * 8);
      uVar8 = uVar11;
      lVar6 = *(long *)puVar2;
    }
    *(undefined8 *)puVar2 = uVar8;
  }
  *(int *)(this + 0x14) = iVar4 + 1;
  return iVar4;
}



/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::_init_from(AHashMap<StringName, Variant, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> > const&) */

void __thiscall
AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::_init_from
          (AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
           *this,AHashMap *param_1)

{
  undefined8 uVar1;
  long lVar2;
  StringName *pSVar3;
  StringName *this_00;
  ulong __n;
  long lVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x10) = uVar1;
  if ((int)((ulong)uVar1 >> 0x20) == 0) {
    return;
  }
  __n = (ulong)((int)uVar1 + 1) << 3;
  uVar1 = Memory::alloc_static(__n,false);
  *(undefined8 *)(this + 8) = uVar1;
  lVar2 = Memory::alloc_static
                    ((ulong)((*(uint *)(this + 0x10) + 1 >> 2 ^ *(uint *)(this + 0x10)) + 1) << 5,
                     false);
  *(long *)this = lVar2;
  if (*(int *)(this + 0x14) != 0) {
    lVar4 = 0;
    while( true ) {
      this_00 = (StringName *)(lVar2 + lVar4 * 0x20);
      pSVar3 = (StringName *)(lVar4 * 0x20 + *(long *)param_1);
      StringName::StringName(this_00,pSVar3);
      Variant::Variant((Variant *)(this_00 + 8),(Variant *)(pSVar3 + 8));
      if (*(uint *)(this + 0x14) <= (uint)(lVar4 + 1)) break;
      lVar2 = *(long *)this;
      lVar4 = lVar4 + 1;
    }
  }
  memcpy(*(void **)(this + 8),*(void **)(param_1 + 8),__n);
  return;
}



/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::get_capacity() const */

int __thiscall
AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::get_capacity
          (AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
           *this)

{
  return *(int *)(this + 0x10) + 1;
}



/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::size() const */

undefined4 __thiscall
AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::size
          (AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
           *this)

{
  return *(undefined4 *)(this + 0x14);
}



/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::is_empty() const */

undefined4 __thiscall
AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::is_empty
          (AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
           *this)

{
  return CONCAT31((int3)((uint)*(int *)(this + 0x14) >> 8),*(int *)(this + 0x14) == 0);
}



/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::clear() */

void __thiscall
AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::clear
          (AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
           *this)

{
  long lVar1;
  long *plVar2;
  
  if (*(long *)this == 0) {
    return;
  }
  if (*(int *)(this + 0x14) == 0) {
    return;
  }
  lVar1 = 0;
  memset(*(void **)(this + 8),0,(ulong)(*(int *)(this + 0x10) + 1) << 3);
  if (*(int *)(this + 0x14) != 0) {
    do {
      plVar2 = (long *)(*(long *)this + lVar1 * 0x20);
      if ((StringName::configured != '\0') && (*plVar2 != 0)) {
        StringName::unref();
        plVar2 = (long *)(*(long *)this + lVar1 * 0x20);
      }
      if (Variant::needs_deinit[(int)plVar2[1]] != '\0') {
        Variant::_clear_internal();
      }
      lVar1 = lVar1 + 1;
    } while ((uint)lVar1 < *(uint *)(this + 0x14));
  }
  *(undefined4 *)(this + 0x14) = 0;
  return;
}



/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::get(StringName const&) */

long * __thiscall
AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::get
          (AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
           *this,StringName *param_1)

{
  ulong uVar1;
  code *pcVar2;
  uint uVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  
  lVar6 = *(long *)this;
  if (lVar6 != 0) {
    if (*(long *)param_1 == 0) {
      uVar3 = StringName::get_empty_hash();
      lVar6 = *(long *)this;
      if (lVar6 == 0) goto LAB_001084c0;
      uVar8 = 1;
      if (uVar3 != 0) {
        uVar8 = uVar3;
      }
    }
    else {
      uVar8 = *(uint *)(*(long *)param_1 + 0x20);
      if (uVar8 == 0) {
        uVar8 = 1;
      }
    }
    uVar3 = *(uint *)(this + 0x10);
    uVar5 = uVar3 & uVar8;
    uVar1 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar5 * 8);
    if ((uVar8 == (uint)uVar1) &&
       (plVar4 = (long *)((uVar1 >> 0x20) * 0x20 + lVar6), *plVar4 == *(long *)param_1)) {
LAB_00108492:
      return plVar4 + 1;
    }
    if (uVar1 != 0) {
      uVar7 = 1;
      while( true ) {
        uVar5 = uVar5 + 1 & uVar3;
        uVar1 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar5 * 8);
        if (((uint)uVar1 == uVar8) &&
           (plVar4 = (long *)((uVar1 >> 0x20) * 0x20 + lVar6), *plVar4 == *(long *)param_1))
        goto LAB_00108492;
        if ((uVar1 == 0) || ((((uVar3 + 1) - ((uint)uVar1 & uVar3)) + uVar5 & uVar3) < uVar7))
        break;
        uVar7 = uVar7 + 1;
      }
    }
  }
LAB_001084c0:
  _err_print_error(&_LC3,"core/templates/a_hash_map.h",0x138,"FATAL: Condition \"!exists\" is true."
                   ,"AHashMap key not found.",0,0);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::get(StringName const&) const */

long * __thiscall
AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::get
          (AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
           *this,StringName *param_1)

{
  ulong uVar1;
  code *pcVar2;
  uint uVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  
  lVar6 = *(long *)this;
  if (lVar6 != 0) {
    if (*(long *)param_1 == 0) {
      uVar3 = StringName::get_empty_hash();
      lVar6 = *(long *)this;
      if (lVar6 == 0) goto LAB_00108600;
      uVar8 = 1;
      if (uVar3 != 0) {
        uVar8 = uVar3;
      }
    }
    else {
      uVar8 = *(uint *)(*(long *)param_1 + 0x20);
      if (uVar8 == 0) {
        uVar8 = 1;
      }
    }
    uVar3 = *(uint *)(this + 0x10);
    uVar5 = uVar3 & uVar8;
    uVar1 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar5 * 8);
    if ((uVar8 == (uint)uVar1) &&
       (plVar4 = (long *)((uVar1 >> 0x20) * 0x20 + lVar6), *plVar4 == *(long *)param_1)) {
LAB_001085d2:
      return plVar4 + 1;
    }
    if (uVar1 != 0) {
      uVar7 = 1;
      while( true ) {
        uVar5 = uVar5 + 1 & uVar3;
        uVar1 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar5 * 8);
        if (((uint)uVar1 == uVar8) &&
           (plVar4 = (long *)((uVar1 >> 0x20) * 0x20 + lVar6), *plVar4 == *(long *)param_1))
        goto LAB_001085d2;
        if ((uVar1 == 0) || ((((uVar3 + 1) - ((uint)uVar1 & uVar3)) + uVar5 & uVar3) < uVar7))
        break;
        uVar7 = uVar7 + 1;
      }
    }
  }
LAB_00108600:
  _err_print_error(&_LC3,"core/templates/a_hash_map.h",0x140,"FATAL: Condition \"!exists\" is true."
                   ,"AHashMap key not found.",0,0);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::getptr(StringName const&) const */

long * __thiscall
AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::getptr
          (AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
           *this,StringName *param_1)

{
  ulong uVar1;
  uint uVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  
  lVar5 = *(long *)this;
  if (lVar5 != 0) {
    if (*(long *)param_1 == 0) {
      uVar2 = StringName::get_empty_hash();
      lVar5 = *(long *)this;
      if (lVar5 == 0) {
        return (long *)0x0;
      }
      uVar7 = 1;
      if (uVar2 != 0) {
        uVar7 = uVar2;
      }
    }
    else {
      uVar7 = *(uint *)(*(long *)param_1 + 0x20);
      if (uVar7 == 0) {
        uVar7 = 1;
      }
    }
    uVar2 = *(uint *)(this + 0x10);
    uVar4 = uVar2 & uVar7;
    uVar1 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar4 * 8);
    if ((uVar7 == (uint)uVar1) &&
       (plVar3 = (long *)((uVar1 >> 0x20) * 0x20 + lVar5), *plVar3 == *(long *)param_1)) {
LAB_00108712:
      return plVar3 + 1;
    }
    if (uVar1 != 0) {
      uVar6 = 1;
      while( true ) {
        uVar4 = uVar4 + 1 & uVar2;
        uVar1 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar4 * 8);
        if (((uint)uVar1 == uVar7) &&
           (plVar3 = (long *)((uVar1 >> 0x20) * 0x20 + lVar5), *plVar3 == *(long *)param_1))
        goto LAB_00108712;
        if ((uVar1 == 0) || ((((uVar2 + 1) - ((uint)uVar1 & uVar2)) + uVar4 & uVar2) < uVar6))
        break;
        uVar6 = uVar6 + 1;
      }
    }
  }
  return (long *)0x0;
}



/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::getptr(StringName const&) */

long * __thiscall
AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::getptr
          (AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
           *this,StringName *param_1)

{
  ulong uVar1;
  uint uVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  
  lVar5 = *(long *)this;
  if (lVar5 != 0) {
    if (*(long *)param_1 == 0) {
      uVar2 = StringName::get_empty_hash();
      lVar5 = *(long *)this;
      if (lVar5 == 0) {
        return (long *)0x0;
      }
      uVar7 = 1;
      if (uVar2 != 0) {
        uVar7 = uVar2;
      }
    }
    else {
      uVar7 = *(uint *)(*(long *)param_1 + 0x20);
      if (uVar7 == 0) {
        uVar7 = 1;
      }
    }
    uVar2 = *(uint *)(this + 0x10);
    uVar4 = uVar2 & uVar7;
    uVar1 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar4 * 8);
    if ((uVar7 == (uint)uVar1) &&
       (plVar3 = (long *)((uVar1 >> 0x20) * 0x20 + lVar5), *plVar3 == *(long *)param_1)) {
LAB_00108822:
      return plVar3 + 1;
    }
    if (uVar1 != 0) {
      uVar6 = 1;
      while( true ) {
        uVar4 = uVar4 + 1 & uVar2;
        uVar1 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar4 * 8);
        if (((uint)uVar1 == uVar7) &&
           (plVar3 = (long *)((uVar1 >> 0x20) * 0x20 + lVar5), *plVar3 == *(long *)param_1))
        goto LAB_00108822;
        if ((uVar1 == 0) || ((((uVar2 + 1) - ((uint)uVar1 & uVar2)) + uVar4 & uVar2) < uVar6))
        break;
        uVar6 = uVar6 + 1;
      }
    }
  }
  return (long *)0x0;
}



/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::has(StringName const&) const */

undefined8 __thiscall
AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::has
          (AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
           *this,StringName *param_1)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  
  lVar6 = *(long *)this;
  if (lVar6 == 0) {
    return 0;
  }
  if (*(long *)param_1 == 0) {
    uVar3 = StringName::get_empty_hash();
    lVar6 = *(long *)this;
    if (lVar6 == 0) {
      return 0;
    }
    uVar5 = 1;
    if (uVar3 != 0) {
      uVar5 = uVar3;
    }
  }
  else {
    uVar5 = *(uint *)(*(long *)param_1 + 0x20);
    if (uVar5 == 0) {
      uVar5 = 1;
    }
  }
  uVar3 = *(uint *)(this + 0x10);
  uVar2 = uVar5 & uVar3;
  uVar1 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar2 * 8);
  if ((uVar5 == (uint)uVar1) && (*(long *)(lVar6 + (uVar1 >> 0x20) * 0x20) == *(long *)param_1)) {
    return 1;
  }
  if (uVar1 != 0) {
    uVar4 = 1;
    while( true ) {
      uVar2 = uVar2 + 1 & uVar3;
      uVar1 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar2 * 8);
      if ((uVar5 == (uint)uVar1) && (*(long *)(lVar6 + (uVar1 >> 0x20) * 0x20) == *(long *)param_1))
      {
        return 1;
      }
      if ((uVar1 == 0) || ((((uVar3 + 1) - ((uint)uVar1 & uVar3)) + uVar2 & uVar3) < uVar4)) break;
      uVar4 = uVar4 + 1;
    }
  }
  return 0;
}



/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::erase(StringName const&) */

undefined8 __thiscall
AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::erase
          (AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
           *this,StringName *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  uint uVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  uint uVar15;
  uint *puVar16;
  ulong *puVar17;
  long lVar18;
  bool bVar19;
  
  lVar18 = *(long *)this;
  if (lVar18 == 0) {
    return 0;
  }
  if (*(long *)param_1 == 0) {
    uVar7 = StringName::get_empty_hash();
    lVar18 = *(long *)this;
    if (lVar18 == 0) {
      return 0;
    }
    uVar6 = 1;
    if (uVar7 != 0) {
      uVar6 = uVar7;
    }
  }
  else {
    uVar6 = *(uint *)(*(long *)param_1 + 0x20);
    if (uVar6 == 0) {
      uVar6 = 1;
    }
  }
  uVar7 = *(uint *)(this + 0x10);
  lVar1 = *(long *)(this + 8);
  uVar5 = uVar7 & uVar6;
  uVar8 = (ulong)uVar5;
  puVar17 = (ulong *)(lVar1 + uVar8 * 8);
  uVar2 = *puVar17;
  if (uVar6 != (uint)uVar2) {
LAB_001089ee:
    if (uVar2 != 0) {
      uVar15 = 1;
      while( true ) {
        uVar5 = uVar5 + 1 & uVar7;
        uVar8 = (ulong)uVar5;
        puVar17 = (ulong *)(lVar1 + uVar8 * 8);
        uVar2 = *puVar17;
        if ((uint)uVar2 == uVar6) {
          uVar11 = (uint)(uVar2 >> 0x20);
          lVar12 = (uVar2 >> 0x20) * 0x20;
          plVar14 = (long *)(lVar18 + lVar12);
          if (*plVar14 == *(long *)param_1) goto LAB_00108a6b;
        }
        if ((uVar2 == 0) || ((((uVar7 + 1) - ((uint)uVar2 & uVar7)) + uVar5 & uVar7) < uVar15))
        break;
        uVar15 = uVar15 + 1;
      }
    }
    return 0;
  }
  uVar11 = (uint)(uVar2 >> 0x20);
  lVar12 = (uVar2 >> 0x20) * 0x20;
  plVar14 = (long *)(lVar18 + lVar12);
  if (*plVar14 != *(long *)param_1) goto LAB_001089ee;
LAB_00108a6b:
  uVar6 = uVar5 + 1 & uVar7;
  puVar16 = (uint *)(lVar1 + (ulong)uVar6 * 8);
  if ((*puVar16 != 0) &&
     (uVar2 = (ulong)uVar6, ((uVar7 + 1 + uVar6) - (*puVar16 & uVar7) & uVar7) != 0)) {
    do {
      uVar9 = uVar2;
      puVar10 = (undefined8 *)(lVar1 + uVar8 * 8);
      uVar3 = *(undefined8 *)puVar16;
      *(undefined8 *)puVar16 = *puVar10;
      *puVar10 = uVar3;
      uVar6 = (int)uVar9 + 1U & uVar7;
      puVar16 = (uint *)(lVar1 + (ulong)uVar6 * 8);
      if (*puVar16 == 0) break;
      uVar2 = (ulong)uVar6;
      uVar8 = uVar9;
    } while (((uVar7 + 1 + uVar6) - (*puVar16 & uVar7) & uVar7) != 0);
    puVar17 = (ulong *)(lVar1 + uVar9 * 8);
  }
  bVar19 = StringName::configured != '\0';
  *puVar17 = 0;
  if ((bVar19) && (*plVar14 != 0)) {
    StringName::unref();
    lVar18 = *(long *)this;
  }
  if (Variant::needs_deinit[*(int *)(lVar18 + lVar12 + 8)] != '\0') {
    Variant::_clear_internal();
  }
  uVar7 = *(int *)(this + 0x14) - 1;
  *(uint *)(this + 0x14) = uVar7;
  if (uVar7 <= uVar11) {
    return 1;
  }
  puVar10 = (undefined8 *)((ulong)uVar7 * 0x20 + *(long *)this);
  puVar13 = (undefined8 *)(lVar12 + *(long *)this);
  uVar3 = puVar10[1];
  *puVar13 = *puVar10;
  puVar13[1] = uVar3;
  uVar3 = puVar10[3];
  puVar13[2] = puVar10[2];
  puVar13[3] = uVar3;
  lVar18 = *(long *)this;
  plVar14 = (long *)((ulong)*(uint *)(this + 0x14) * 0x20 + lVar18);
  if (lVar18 == 0) {
LAB_00108cbc:
    puVar17 = *(ulong **)(this + 8);
  }
  else {
    if (*plVar14 == 0) {
      uVar7 = StringName::get_empty_hash();
      lVar18 = *(long *)this;
      if (lVar18 == 0) goto LAB_00108cbc;
      uVar6 = 1;
      if (uVar7 != 0) {
        uVar6 = uVar7;
      }
    }
    else {
      uVar6 = *(uint *)(*plVar14 + 0x20);
      if (uVar6 == 0) {
        uVar6 = 1;
      }
    }
    uVar7 = *(uint *)(this + 0x10);
    puVar4 = *(ulong **)(this + 8);
    uVar5 = uVar7 & uVar6;
    puVar17 = puVar4 + uVar5;
    uVar2 = *puVar17;
    if (((uVar6 != (uint)uVar2) || (*(long *)(lVar18 + (uVar2 >> 0x20) * 0x20) != *plVar14)) &&
       (puVar17 = puVar4, uVar2 != 0)) {
      uVar15 = 1;
      while( true ) {
        uVar5 = uVar5 + 1 & uVar7;
        puVar17 = puVar4 + uVar5;
        uVar2 = *puVar17;
        if ((((uint)uVar2 == uVar6) && (*(long *)(lVar18 + (uVar2 >> 0x20) * 0x20) == *plVar14)) ||
           ((puVar17 = puVar4, uVar2 == 0 ||
            ((((uVar7 + 1) - ((uint)uVar2 & uVar7)) + uVar5 & uVar7) < uVar15)))) break;
        uVar15 = uVar15 + 1;
      }
    }
  }
  *(uint *)((long)puVar17 + 4) = uVar11;
  return 1;
}



/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::replace_key(StringName const&, StringName const&) */

undefined8 __thiscall
AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::replace_key
          (AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
           *this,StringName *param_1,StringName *param_2)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  uint *puVar11;
  uint uVar12;
  StringName *this_00;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined4 local_54;
  ulong local_50;
  
  lVar14 = *(long *)param_2;
  if (lVar14 == *(long *)param_1) {
    return 1;
  }
  lVar13 = *(long *)this;
  if (lVar13 != 0) {
    if (lVar14 == 0) {
      uVar5 = StringName::get_empty_hash();
      lVar13 = *(long *)this;
      if (lVar13 == 0) goto LAB_00108fe0;
      uVar8 = 1;
      if (uVar5 != 0) {
        uVar8 = uVar5;
      }
    }
    else {
      uVar8 = *(uint *)(lVar14 + 0x20);
      if (*(uint *)(lVar14 + 0x20) == 0) {
        uVar8 = 1;
      }
    }
    uVar5 = *(uint *)(this + 0x10);
    lVar14 = *(long *)(this + 8);
    uVar7 = uVar5 & uVar8;
    uVar6 = *(ulong *)(lVar14 + (ulong)uVar7 * 8);
    if ((uVar8 == (uint)uVar6) && (*(long *)(lVar13 + (uVar6 >> 0x20) * 0x20) == *(long *)param_2))
    {
LAB_00108d96:
      _err_print_error("replace_key","core/templates/a_hash_map.h",0x18a,
                       "Condition \"_lookup_pos(p_new_key, element_pos, pos)\" is true. Returning: false"
                       ,0,0);
      return 0;
    }
    if (uVar6 != 0) {
      uVar12 = 1;
      while( true ) {
        uVar7 = uVar7 + 1 & uVar5;
        uVar6 = *(ulong *)(lVar14 + (ulong)uVar7 * 8);
        if (((uint)uVar6 == uVar8) &&
           (*(long *)(lVar13 + (uVar6 >> 0x20) * 0x20) == *(long *)param_2)) goto LAB_00108d96;
        if ((uVar6 == 0) || ((((uVar5 + 1) - ((uint)uVar6 & uVar5)) + uVar7 & uVar5) < uVar12))
        break;
        uVar12 = uVar12 + 1;
      }
    }
    if (*(long *)param_1 == 0) {
      uVar5 = StringName::get_empty_hash();
      lVar13 = *(long *)this;
      if (lVar13 == 0) goto LAB_00108fe0;
      lVar14 = *(long *)(this + 8);
      uVar8 = 1;
      if (uVar5 != 0) {
        uVar8 = uVar5;
      }
      uVar5 = *(uint *)(this + 0x10);
    }
    else {
      uVar8 = *(uint *)(*(long *)param_1 + 0x20);
      if (uVar8 == 0) {
        uVar8 = 1;
      }
    }
    uVar7 = uVar8 & uVar5;
    uVar10 = (ulong)uVar7;
    uVar6 = *(ulong *)(lVar14 + uVar10 * 8);
    if (uVar8 == (uint)uVar6) {
      local_50 = uVar6 >> 0x20;
      local_54 = (undefined4)(uVar6 >> 0x20);
      this_00 = (StringName *)(local_50 * 0x20 + lVar13);
      if (*(long *)this_00 == *(long *)param_1) {
LAB_00108e95:
        lVar14 = uVar10 * 8;
        StringName::operator=(this_00,param_2);
        uVar5 = *(uint *)(this + 0x10);
        lVar13 = *(long *)(this + 8);
        uVar8 = uVar7 + 1 & uVar5;
        puVar11 = (uint *)(lVar13 + (ulong)uVar8 * 8);
        if ((*puVar11 != 0) &&
           (uVar6 = (ulong)uVar8, ((uVar8 + uVar5 + 1) - (*puVar11 & uVar5) & uVar5) != 0)) {
          do {
            uVar9 = uVar6;
            puVar1 = (undefined8 *)(lVar13 + uVar10 * 8);
            uVar3 = *(undefined8 *)puVar11;
            *(undefined8 *)puVar11 = *puVar1;
            *puVar1 = uVar3;
            uVar8 = (int)uVar9 + 1U & uVar5;
            puVar11 = (uint *)(lVar13 + (ulong)uVar8 * 8);
            if (*puVar11 == 0) break;
            uVar6 = (ulong)uVar8;
            uVar10 = uVar9;
          } while (((uVar8 + uVar5 + 1) - (*puVar11 & uVar5) & uVar5) != 0);
          lVar14 = uVar9 * 8;
        }
        lVar4 = *(long *)param_2;
        *(undefined8 *)(lVar13 + lVar14) = 0;
        if (lVar4 == 0) {
          uVar8 = StringName::get_empty_hash();
          uVar5 = *(uint *)(this + 0x10);
          lVar13 = *(long *)(this + 8);
        }
        else {
          uVar8 = *(uint *)(lVar4 + 0x20);
        }
        if (uVar8 == 0) {
          uVar8 = 1;
        }
        puVar2 = (ulong *)(lVar13 + (ulong)(uVar8 & uVar5) * 8);
        if (*puVar2 == 0) {
          *puVar2 = (ulong)uVar8 | local_50 << 0x20;
        }
        else {
          uVar6 = (ulong)((uVar8 & uVar5) + 1 & uVar5);
          uVar7 = 1;
          puVar11 = (uint *)(lVar13 + uVar6 * 8);
          lVar14 = *(long *)puVar11;
          uVar3 = CONCAT44(local_54,uVar8);
          while (lVar14 != 0) {
            uVar8 = ((int)uVar6 + uVar5 + 1) - (*puVar11 & uVar5) & uVar5;
            uVar15 = uVar3;
            if (uVar8 < uVar7) {
              uVar15 = *(undefined8 *)puVar11;
              *(undefined8 *)puVar11 = uVar3;
              uVar7 = uVar8;
            }
            uVar7 = uVar7 + 1;
            uVar6 = (ulong)((int)uVar6 + 1U & uVar5);
            puVar11 = (uint *)(lVar13 + uVar6 * 8);
            uVar3 = uVar15;
            lVar14 = *(long *)puVar11;
          }
          *(undefined8 *)puVar11 = uVar3;
        }
        return 1;
      }
    }
    if (uVar6 != 0) {
      uVar12 = 1;
      while( true ) {
        uVar7 = uVar7 + 1 & uVar5;
        uVar10 = (ulong)uVar7;
        uVar6 = *(ulong *)(lVar14 + uVar10 * 8);
        if (uVar8 == (uint)uVar6) {
          local_50 = uVar6 >> 0x20;
          local_54 = (undefined4)(uVar6 >> 0x20);
          this_00 = (StringName *)(local_50 * 0x20 + lVar13);
          if (*(long *)this_00 == *(long *)param_1) goto LAB_00108e95;
        }
        if ((uVar6 == 0) || ((((uVar5 + 1) - ((uint)uVar6 & uVar5)) + uVar7 & uVar5) < uVar12))
        break;
        uVar12 = uVar12 + 1;
      }
    }
  }
LAB_00108fe0:
  _err_print_error("replace_key","core/templates/a_hash_map.h",0x18b,
                   "Condition \"!_lookup_pos(p_old_key, element_pos, pos)\" is true. Returning: false"
                   ,0,0);
  return 0;
}



/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::reserve(unsigned int) */

void __thiscall
AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::reserve
          (AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
           *this,uint param_1)

{
  uint uVar1;
  
  if (param_1 < *(int *)(this + 0x10) + 1U) {
    _err_print_error("reserve","core/templates/a_hash_map.h",0x1a2,
                     "Condition \"p_new_capacity < get_capacity()\" is true.",
                     "It is impossible to reserve less capacity than is currently available.",0,0);
    return;
  }
  if (*(long *)this != 0) {
    _resize_and_rehash(this,param_1);
    return;
  }
  uVar1 = 4;
  if (3 < param_1) {
    uVar1 = param_1;
  }
  uVar1 = uVar1 - 1 | uVar1 - 1 >> 1;
  uVar1 = uVar1 | uVar1 >> 2;
  uVar1 = uVar1 | uVar1 >> 4;
  uVar1 = uVar1 | uVar1 >> 8;
  *(uint *)(this + 0x10) = uVar1 | uVar1 >> 0x10;
  return;
}



/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::begin() */

void AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::begin
               (void)

{
  long lVar1;
  long *in_RSI;
  long *in_RDI;
  
  lVar1 = *in_RSI;
  in_RDI[2] = (ulong)*(uint *)((long)in_RSI + 0x14) * 0x20 + lVar1;
  *in_RDI = lVar1;
  in_RDI[1] = lVar1;
  return;
}



/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName> >::end()
    */

void AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::end
               (void)

{
  long lVar1;
  long lVar2;
  long *in_RSI;
  long *in_RDI;
  
  lVar1 = *in_RSI;
  lVar2 = (ulong)*(uint *)((long)in_RSI + 0x14) * 0x20 + lVar1;
  in_RDI[2] = lVar2;
  *in_RDI = lVar2;
  in_RDI[1] = lVar1;
  return;
}



/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::last() */

void AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::last
               (void)

{
  long lVar1;
  long lVar2;
  long *in_RSI;
  undefined1 (*in_RDI) [16];
  
  if (*(uint *)((long)in_RSI + 0x14) != 0) {
    lVar1 = *in_RSI;
    lVar2 = (ulong)*(uint *)((long)in_RSI + 0x14) * 0x20;
    *(long *)in_RDI[1] = lVar1 + lVar2;
    *(long *)*in_RDI = lVar1 + -0x20 + lVar2;
    *(long *)(*in_RDI + 8) = lVar1;
    return;
  }
  *(undefined8 *)in_RDI[1] = 0;
  *in_RDI = (undefined1  [16])0x0;
  return;
}



/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::find(StringName const&) */

StringName *
AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::find
          (StringName *param_1)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long *in_RDX;
  long *in_RSI;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  
  lVar4 = *in_RSI;
  if (lVar4 == 0) {
LAB_0010930e:
    lVar4 = 0;
  }
  else {
    if (*in_RDX == 0) {
      uVar3 = StringName::get_empty_hash();
      lVar4 = *in_RSI;
      if (lVar4 == 0) goto LAB_0010930e;
      uVar6 = 1;
      if (uVar3 != 0) {
        uVar6 = uVar3;
      }
    }
    else {
      uVar6 = *(uint *)(*in_RDX + 0x20);
      if (uVar6 == 0) {
        uVar6 = 1;
      }
    }
    uVar3 = *(uint *)(in_RSI + 2);
    uVar2 = uVar3 & uVar6;
    uVar1 = *(ulong *)(in_RSI[1] + (ulong)uVar2 * 8);
    if ((uVar6 == (uint)uVar1) &&
       (plVar7 = (long *)((uVar1 >> 0x20) * 0x20 + lVar4), *plVar7 == *in_RDX)) {
LAB_001092d9:
      uVar3 = *(uint *)((long)in_RSI + 0x14);
      *(long **)param_1 = plVar7;
      *(long *)(param_1 + 8) = lVar4;
      *(ulong *)(param_1 + 0x10) = (ulong)uVar3 * 0x20 + lVar4;
      return param_1;
    }
    if (uVar1 != 0) {
      uVar5 = 1;
      while( true ) {
        uVar2 = uVar2 + 1 & uVar3;
        uVar1 = *(ulong *)(in_RSI[1] + (ulong)uVar2 * 8);
        if (((uint)uVar1 == uVar6) &&
           (plVar7 = (long *)((uVar1 >> 0x20) * 0x20 + lVar4), *plVar7 == *in_RDX))
        goto LAB_001092d9;
        if ((uVar1 == 0) || ((((uVar3 + 1) - ((uint)uVar1 & uVar3)) + uVar2 & uVar3) < uVar5))
        break;
        uVar5 = uVar5 + 1;
      }
    }
  }
  uVar3 = *(uint *)((long)in_RSI + 0x14);
  *(long *)(param_1 + 8) = lVar4;
  lVar4 = (ulong)uVar3 * 0x20 + lVar4;
  *(long *)param_1 = lVar4;
  *(long *)(param_1 + 0x10) = lVar4;
  return param_1;
}



/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::remove(AHashMap<StringName, Variant, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> >::Iterator const&) */

void __thiscall
AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::remove
          (AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
           *this,Iterator *param_1)

{
  if (*(StringName **)(param_1 + 0x10) != *(StringName **)param_1) {
    erase(this,*(StringName **)param_1);
    return;
  }
  return;
}



/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::begin() const */

void AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::begin
               (void)

{
  long lVar1;
  long *in_RSI;
  long *in_RDI;
  
  lVar1 = *in_RSI;
  in_RDI[2] = (ulong)*(uint *)((long)in_RSI + 0x14) * 0x20 + lVar1;
  *in_RDI = lVar1;
  in_RDI[1] = lVar1;
  return;
}



/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName> >::end()
   const */

void AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::end
               (void)

{
  long lVar1;
  long lVar2;
  long *in_RSI;
  long *in_RDI;
  
  lVar1 = *in_RSI;
  lVar2 = (ulong)*(uint *)((long)in_RSI + 0x14) * 0x20 + lVar1;
  in_RDI[2] = lVar2;
  *in_RDI = lVar2;
  in_RDI[1] = lVar1;
  return;
}



/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::last() const */

void AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::last
               (void)

{
  long lVar1;
  long lVar2;
  long *in_RSI;
  undefined1 (*in_RDI) [16];
  
  if (*(uint *)((long)in_RSI + 0x14) != 0) {
    lVar1 = *in_RSI;
    lVar2 = (ulong)*(uint *)((long)in_RSI + 0x14) * 0x20;
    *(long *)in_RDI[1] = lVar1 + lVar2;
    *(long *)*in_RDI = lVar1 + -0x20 + lVar2;
    *(long *)(*in_RDI + 8) = lVar1;
    return;
  }
  *(undefined8 *)in_RDI[1] = 0;
  *in_RDI = (undefined1  [16])0x0;
  return;
}



/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::find(StringName const&) const */

StringName *
AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::find
          (StringName *param_1)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long *in_RDX;
  long *in_RSI;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  
  lVar4 = *in_RSI;
  if (lVar4 == 0) {
LAB_0010953e:
    lVar4 = 0;
  }
  else {
    if (*in_RDX == 0) {
      uVar3 = StringName::get_empty_hash();
      lVar4 = *in_RSI;
      if (lVar4 == 0) goto LAB_0010953e;
      uVar6 = 1;
      if (uVar3 != 0) {
        uVar6 = uVar3;
      }
    }
    else {
      uVar6 = *(uint *)(*in_RDX + 0x20);
      if (uVar6 == 0) {
        uVar6 = 1;
      }
    }
    uVar3 = *(uint *)(in_RSI + 2);
    uVar2 = uVar3 & uVar6;
    uVar1 = *(ulong *)(in_RSI[1] + (ulong)uVar2 * 8);
    if ((uVar6 == (uint)uVar1) &&
       (plVar7 = (long *)((uVar1 >> 0x20) * 0x20 + lVar4), *plVar7 == *in_RDX)) {
LAB_00109509:
      uVar3 = *(uint *)((long)in_RSI + 0x14);
      *(long **)param_1 = plVar7;
      *(long *)(param_1 + 8) = lVar4;
      *(ulong *)(param_1 + 0x10) = (ulong)uVar3 * 0x20 + lVar4;
      return param_1;
    }
    if (uVar1 != 0) {
      uVar5 = 1;
      while( true ) {
        uVar2 = uVar2 + 1 & uVar3;
        uVar1 = *(ulong *)(in_RSI[1] + (ulong)uVar2 * 8);
        if (((uint)uVar1 == uVar6) &&
           (plVar7 = (long *)((uVar1 >> 0x20) * 0x20 + lVar4), *plVar7 == *in_RDX))
        goto LAB_00109509;
        if ((uVar1 == 0) || ((((uVar3 + 1) - ((uint)uVar1 & uVar3)) + uVar2 & uVar3) < uVar5))
        break;
        uVar5 = uVar5 + 1;
      }
    }
  }
  uVar3 = *(uint *)((long)in_RSI + 0x14);
  *(long *)(param_1 + 8) = lVar4;
  lVar4 = (ulong)uVar3 * 0x20 + lVar4;
  *(long *)param_1 = lVar4;
  *(long *)(param_1 + 0x10) = lVar4;
  return param_1;
}



/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::operator[](StringName const&) const */

long * __thiscall
AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::operator[]
          (AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
           *this,StringName *param_1)

{
  ulong uVar1;
  code *pcVar2;
  uint uVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  
  lVar6 = *(long *)this;
  if (lVar6 != 0) {
    if (*(long *)param_1 == 0) {
      uVar3 = StringName::get_empty_hash();
      lVar6 = *(long *)this;
      if (lVar6 == 0) goto LAB_00109690;
      uVar8 = 1;
      if (uVar3 != 0) {
        uVar8 = uVar3;
      }
    }
    else {
      uVar8 = *(uint *)(*(long *)param_1 + 0x20);
      if (uVar8 == 0) {
        uVar8 = 1;
      }
    }
    uVar3 = *(uint *)(this + 0x10);
    uVar5 = uVar3 & uVar8;
    uVar1 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar5 * 8);
    if ((uVar8 == (uint)uVar1) &&
       (plVar4 = (long *)((uVar1 >> 0x20) * 0x20 + lVar6), *plVar4 == *(long *)param_1)) {
LAB_00109662:
      return plVar4 + 1;
    }
    if (uVar1 != 0) {
      uVar7 = 1;
      while( true ) {
        uVar5 = uVar5 + 1 & uVar3;
        uVar1 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar5 * 8);
        if (((uint)uVar1 == uVar8) &&
           (plVar4 = (long *)((uVar1 >> 0x20) * 0x20 + lVar6), *plVar4 == *(long *)param_1))
        goto LAB_00109662;
        if ((uVar1 == 0) || ((((uVar3 + 1) - ((uint)uVar1 & uVar3)) + uVar5 & uVar3) < uVar7))
        break;
        uVar7 = uVar7 + 1;
      }
    }
  }
LAB_00109690:
  _err_print_error("operator[]","core/templates/a_hash_map.h",0x24e,
                   "FATAL: Condition \"!exists\" is true.",0,0);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::operator[](StringName const&) */

long * __thiscall
AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::operator[]
          (AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
           *this,StringName *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  long *plVar5;
  uint uVar6;
  uint uVar7;
  long in_FS_OFFSET;
  int local_48 [2];
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)param_1 == 0) {
    uVar4 = StringName::get_empty_hash();
  }
  else {
    uVar4 = *(uint *)(*(long *)param_1 + 0x20);
  }
  lVar2 = *(long *)this;
  if (uVar4 == 0) {
    uVar4 = 1;
  }
  if (lVar2 != 0) {
    uVar1 = *(uint *)(this + 0x10);
    uVar6 = uVar4 & uVar1;
    uVar3 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar6 * 8);
    if ((uVar4 == (uint)uVar3) &&
       (plVar5 = (long *)((uVar3 >> 0x20) * 0x20 + lVar2), *plVar5 == *(long *)param_1))
    goto LAB_001097a8;
    if (uVar3 != 0) {
      uVar7 = 1;
      while( true ) {
        uVar6 = uVar6 + 1 & uVar1;
        uVar3 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar6 * 8);
        if ((uVar4 == (uint)uVar3) &&
           (plVar5 = (long *)((uVar3 >> 0x20) * 0x20 + lVar2), *plVar5 == *(long *)param_1))
        goto LAB_001097a8;
        if ((uVar3 == 0) || ((((uVar1 + 1) - ((uint)uVar3 & uVar1)) + uVar6 & uVar1) < uVar7))
        break;
        uVar7 = uVar7 + 1;
      }
    }
  }
  local_40 = (undefined1  [16])0x0;
  local_48[0] = 0;
  local_48[1] = 0;
  uVar4 = _insert_element(this,param_1,(Variant *)local_48,uVar4);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  plVar5 = (long *)((ulong)uVar4 * 0x20 + *(long *)this);
LAB_001097a8:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return plVar5 + 1;
}



/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::insert(StringName const&, Variant const&) */

StringName *
AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
          (StringName *param_1,Variant *param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  Variant *in_RCX;
  StringName *in_RDX;
  uint uVar6;
  long lVar7;
  long *plVar8;
  
  if (*(long *)in_RDX == 0) {
    uVar5 = StringName::get_empty_hash();
  }
  else {
    uVar5 = *(uint *)(*(long *)in_RDX + 0x20);
  }
  lVar2 = *(long *)param_2;
  if (uVar5 == 0) {
    uVar5 = 1;
  }
  if (lVar2 != 0) {
    uVar1 = *(uint *)(param_2 + 0x10);
    uVar4 = uVar1 & uVar5;
    uVar3 = *(ulong *)(*(long *)(param_2 + 8) + (ulong)uVar4 * 8);
    if (uVar5 == (uint)uVar3) {
      lVar7 = (uVar3 >> 0x20) * 0x20;
      plVar8 = (long *)(lVar2 + lVar7);
      if (*plVar8 == *(long *)in_RDX) {
LAB_00109925:
        Variant::operator=((Variant *)(plVar8 + 1),in_RCX);
        goto LAB_00109933;
      }
    }
    if (uVar3 != 0) {
      uVar6 = 1;
      while( true ) {
        uVar4 = uVar4 + 1 & uVar1;
        uVar3 = *(ulong *)(*(long *)(param_2 + 8) + (ulong)uVar4 * 8);
        if ((uint)uVar3 == uVar5) {
          lVar7 = (uVar3 >> 0x20) * 0x20;
          plVar8 = (long *)(lVar2 + lVar7);
          if (*plVar8 == *(long *)in_RDX) goto LAB_00109925;
        }
        if ((uVar3 == 0) || ((((uVar1 + 1) - ((uint)uVar3 & uVar1)) + uVar4 & uVar1) < uVar6))
        break;
        uVar6 = uVar6 + 1;
      }
    }
  }
  uVar5 = _insert_element((AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
                           *)param_2,in_RDX,in_RCX,uVar5);
  lVar7 = (ulong)uVar5 << 5;
LAB_00109933:
  lVar2 = *(long *)param_2;
  *(ulong *)(param_1 + 0x10) = (ulong)*(uint *)(param_2 + 0x14) * 0x20 + lVar2;
  *(long *)param_1 = lVar2 + lVar7;
  *(long *)(param_1 + 8) = lVar2;
  return param_1;
}



/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::insert_new(StringName const&, Variant const&) */

StringName *
AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert_new
          (StringName *param_1,Variant *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  Variant *in_RCX;
  StringName *in_RDX;
  
  if (*(long *)in_RDX == 0) {
    uVar2 = StringName::get_empty_hash();
  }
  else {
    uVar2 = *(uint *)(*(long *)in_RDX + 0x20);
  }
  uVar3 = 1;
  if (uVar2 != 0) {
    uVar3 = uVar2;
  }
  uVar2 = _insert_element((AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
                           *)param_2,in_RDX,in_RCX,uVar3);
  lVar1 = *(long *)param_2;
  *(ulong *)(param_1 + 0x10) = (ulong)*(uint *)(param_2 + 0x14) * 0x20 + lVar1;
  *(ulong *)param_1 = (ulong)uVar2 * 0x20 + lVar1;
  *(long *)(param_1 + 8) = lVar1;
  return param_1;
}



/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::get_elements_ptr() */

undefined8 __thiscall
AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
get_elements_ptr(AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
                 *this)

{
  return *(undefined8 *)this;
}



/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::get_index(StringName const&) */

ulong __thiscall
AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::get_index
          (AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
           *this,StringName *param_1)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  
  lVar4 = *(long *)this;
  if (lVar4 != 0) {
    if (*(long *)param_1 == 0) {
      uVar2 = StringName::get_empty_hash();
      lVar4 = *(long *)this;
      if (lVar4 == 0) {
        return 0xffffffff;
      }
      uVar6 = 1;
      if (uVar2 != 0) {
        uVar6 = uVar2;
      }
    }
    else {
      uVar6 = *(uint *)(*(long *)param_1 + 0x20);
      if (uVar6 == 0) {
        uVar6 = 1;
      }
    }
    uVar2 = *(uint *)(this + 0x10);
    uVar3 = uVar2 & uVar6;
    uVar1 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar3 * 8);
    if ((uVar6 == (uint)uVar1) && (*(long *)(lVar4 + (uVar1 >> 0x20) * 0x20) == *(long *)param_1)) {
      return uVar1 >> 0x20;
    }
    if (uVar1 != 0) {
      uVar5 = 1;
      while( true ) {
        uVar3 = uVar3 + 1 & uVar2;
        uVar1 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar3 * 8);
        if (((uint)uVar1 == uVar6) &&
           (*(long *)(lVar4 + (uVar1 >> 0x20) * 0x20) == *(long *)param_1)) {
          return uVar1 >> 0x20;
        }
        if ((uVar1 == 0) || ((((uVar2 + 1) - ((uint)uVar1 & uVar2)) + uVar3 & uVar2) < uVar5))
        break;
        uVar5 = uVar5 + 1;
      }
    }
  }
  return 0xffffffff;
}



/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::get_by_index(unsigned int) */

long __thiscall
AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::get_by_index
          (AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
           *this,uint param_1)

{
  code *pcVar1;
  
  if (param_1 < *(uint *)(this + 0x14)) {
    return (ulong)param_1 * 0x20 + *(long *)this;
  }
  _err_print_index_error
            ("get_by_index","core/templates/a_hash_map.h",0x28b,(ulong)param_1,
             (ulong)*(uint *)(this + 0x14),"p_index","num_elements","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::erase_by_index(unsigned int) */

undefined8 __thiscall
AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
erase_by_index(AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
               *this,uint param_1)

{
  undefined8 uVar1;
  
  if (*(uint *)(this + 0x14) <= param_1) {
    return 0;
  }
  uVar1 = erase(this,(StringName *)((ulong)param_1 * 0x20 + *(long *)this));
  return uVar1;
}



/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::AHashMap(AHashMap<StringName, Variant, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> > const&) */

void __thiscall
AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::AHashMap
          (AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
           *this,AHashMap *param_1)

{
  undefined8 uVar1;
  long lVar2;
  StringName *pSVar3;
  StringName *this_00;
  ulong __n;
  long lVar4;
  
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x10) = uVar1;
  if ((int)((ulong)uVar1 >> 0x20) == 0) {
    return;
  }
  __n = (ulong)((int)uVar1 + 1) << 3;
  uVar1 = Memory::alloc_static(__n,false);
  *(undefined8 *)(this + 8) = uVar1;
  lVar2 = Memory::alloc_static
                    ((ulong)((*(uint *)(this + 0x10) + 1 >> 2 ^ *(uint *)(this + 0x10)) + 1) << 5,
                     false);
  *(long *)this = lVar2;
  if (*(int *)(this + 0x14) != 0) {
    lVar4 = 0;
    while( true ) {
      this_00 = (StringName *)(lVar2 + lVar4 * 0x20);
      pSVar3 = (StringName *)(lVar4 * 0x20 + *(long *)param_1);
      StringName::StringName(this_00,pSVar3);
      Variant::Variant((Variant *)(this_00 + 8),(Variant *)(pSVar3 + 8));
      if (*(uint *)(this + 0x14) <= (uint)(lVar4 + 1)) break;
      lVar2 = *(long *)this;
      lVar4 = lVar4 + 1;
    }
  }
  memcpy(*(void **)(this + 8),*(void **)(param_1 + 8),__n);
  return;
}



/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::AHashMap(HashMap<StringName, Variant, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName, Variant> >
   > const&) */

ulong __thiscall
AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::AHashMap
          (AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
           *this,HashMap *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uStack_28;
  
  uVar2 = *(uint *)(param_1 + 0x2c);
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  if (uVar2 == 0) {
    uStack_28 = 0;
    _err_print_error("reserve","core/templates/a_hash_map.h",0x1a2,
                     "Condition \"p_new_capacity < get_capacity()\" is true.",
                     "It is impossible to reserve less capacity than is currently available.",0);
  }
  else {
    if (uVar2 < 4) {
      uVar2 = 4;
    }
    uVar2 = uVar2 - 1 | uVar2 - 1 >> 1;
    uVar2 = uVar2 | uVar2 >> 2;
    uVar2 = uVar2 | uVar2 >> 4;
    uVar2 = uVar2 | uVar2 >> 8;
    uVar2 = uVar2 | uVar2 >> 0x10;
    uStack_28 = (ulong)uVar2;
    *(uint *)(this + 0x10) = uVar2;
  }
  for (puVar1 = *(undefined8 **)(param_1 + 0x18); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)*puVar1) {
    if (puVar1[2] == 0) {
      uVar2 = StringName::get_empty_hash();
    }
    else {
      uVar2 = *(uint *)(puVar1[2] + 0x20);
    }
    uVar3 = 1;
    if (uVar2 != 0) {
      uVar3 = uVar2;
    }
    uStack_28 = _insert_element(this,(StringName *)(puVar1 + 2),(Variant *)(puVar1 + 3),uVar3);
  }
  return uStack_28;
}



/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::TEMPNAMEPLACEHOLDERVALUE(AHashMap<StringName, Variant, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> > const&) */

void __thiscall
AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::operator=
          (AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
           *this,AHashMap *param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  long lVar3;
  StringName *pSVar4;
  long *plVar5;
  ulong __n;
  StringName *this_00;
  long lVar6;
  
  if (this == (AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
               *)param_1) {
    return;
  }
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    if (*(int *)(this + 0x14) != 0) {
      lVar3 = 0;
      do {
        plVar5 = (long *)((long)pvVar1 + lVar3 * 0x20);
        if ((StringName::configured != '\0') && (*plVar5 != 0)) {
          StringName::unref();
          pvVar1 = *(void **)this;
          plVar5 = (long *)((long)pvVar1 + lVar3 * 0x20);
        }
        if (Variant::needs_deinit[(int)plVar5[1]] != '\0') {
          Variant::_clear_internal();
          pvVar1 = *(void **)this;
        }
        lVar3 = lVar3 + 1;
      } while ((uint)lVar3 < *(uint *)(this + 0x14));
    }
    Memory::free_static(pvVar1,false);
    Memory::free_static(*(void **)(this + 8),false);
    *(undefined8 *)this = 0;
  }
  *(undefined8 *)(this + 0x10) = 0xf;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x10) = uVar2;
  if ((int)((ulong)uVar2 >> 0x20) == 0) {
    return;
  }
  __n = (ulong)((int)uVar2 + 1) << 3;
  uVar2 = Memory::alloc_static(__n,false);
  *(undefined8 *)(this + 8) = uVar2;
  lVar3 = Memory::alloc_static
                    ((ulong)((*(uint *)(this + 0x10) + 1 >> 2 ^ *(uint *)(this + 0x10)) + 1) << 5,
                     false);
  *(long *)this = lVar3;
  if (*(int *)(this + 0x14) != 0) {
    lVar6 = 0;
    while( true ) {
      this_00 = (StringName *)(lVar3 + lVar6 * 0x20);
      pSVar4 = (StringName *)(lVar6 * 0x20 + *(long *)param_1);
      StringName::StringName(this_00,pSVar4);
      Variant::Variant((Variant *)(this_00 + 8),(Variant *)(pSVar4 + 8));
      if (*(uint *)(this + 0x14) <= (uint)(lVar6 + 1)) break;
      lVar3 = *(long *)this;
      lVar6 = lVar6 + 1;
    }
  }
  memcpy(*(void **)(this + 8),*(void **)(param_1 + 8),__n);
  return;
}



/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::TEMPNAMEPLACEHOLDERVALUE(HashMap<StringName, Variant, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName, Variant> >
   > const&) */

void __thiscall
AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::operator=
          (AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
           *this,HashMap *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  
  pvVar3 = *(void **)this;
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x14) != 0) {
      lVar5 = 0;
      do {
        plVar6 = (long *)((long)pvVar3 + lVar5 * 0x20);
        if ((StringName::configured != '\0') && (*plVar6 != 0)) {
          StringName::unref();
          pvVar3 = *(void **)this;
          plVar6 = (long *)((long)pvVar3 + lVar5 * 0x20);
        }
        if (Variant::needs_deinit[(int)plVar6[1]] != '\0') {
          Variant::_clear_internal();
          pvVar3 = *(void **)this;
        }
        lVar5 = lVar5 + 1;
      } while ((uint)lVar5 < *(uint *)(this + 0x14));
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 8),false);
    *(undefined8 *)this = 0;
  }
  *(undefined8 *)(this + 0x10) = 0xf;
  uVar2 = *(uint *)(param_1 + 0x2c);
  if (0x10 < uVar2) {
    if (*(long *)this == 0) {
      uVar2 = uVar2 - 1 | uVar2 - 1 >> 1;
      uVar2 = uVar2 | uVar2 >> 2;
      uVar2 = uVar2 | uVar2 >> 4;
      uVar2 = uVar2 | uVar2 >> 8;
      *(uint *)(this + 0x10) = uVar2 | uVar2 >> 0x10;
    }
    else {
      _resize_and_rehash(this,uVar2);
    }
  }
  for (puVar1 = *(undefined8 **)(param_1 + 0x18); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)*puVar1) {
    if (puVar1[2] == 0) {
      uVar2 = StringName::get_empty_hash();
    }
    else {
      uVar2 = *(uint *)(puVar1[2] + 0x20);
    }
    uVar4 = 1;
    if (uVar2 != 0) {
      uVar4 = uVar2;
    }
    _insert_element(this,(StringName *)(puVar1 + 2),(Variant *)(puVar1 + 3),uVar4);
  }
  return;
}



/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::AHashMap(unsigned int) */

void __thiscall
AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::AHashMap
          (AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
           *this,uint param_1)

{
  uint uVar1;
  
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  if (param_1 < 4) {
    param_1 = 4;
  }
  uVar1 = param_1 - 1 >> 1 | param_1 - 1;
  uVar1 = uVar1 | uVar1 >> 2;
  uVar1 = uVar1 | uVar1 >> 4;
  uVar1 = uVar1 | uVar1 >> 8;
  *(uint *)(this + 0x10) = uVar1 | uVar1 >> 0x10;
  return;
}



/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::AHashMap() */

void __thiscall
AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::AHashMap
          (AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
           *this)

{
  *(undefined8 *)(this + 0x10) = 0xf;
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  return;
}



/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::AHashMap(std::initializer_list<KeyValue<StringName, Variant> >) */

ulong AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
      AHashMap(AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
               *param_1,StringName *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  StringName *pSVar6;
  uint uVar7;
  long *plVar8;
  ulong uStack_48;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined1 (*) [16])param_1 = (undefined1  [16])0x0;
  uVar4 = (uint)param_3;
  if (uVar4 == 0) {
    uStack_48 = 0;
    _err_print_error("reserve","core/templates/a_hash_map.h",0x1a2,
                     "Condition \"p_new_capacity < get_capacity()\" is true.",
                     "It is impossible to reserve less capacity than is currently available.",0);
  }
  else {
    uVar3 = 4;
    if (3 < uVar4) {
      uVar3 = uVar4;
    }
    uVar4 = uVar3 - 1 | uVar3 - 1 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    uStack_48 = (ulong)uVar4;
    *(uint *)(param_1 + 0x10) = uVar4;
  }
  pSVar6 = param_2 + param_3 * 0x20;
  if (param_2 != pSVar6) {
    do {
      if (*(long *)param_2 == 0) {
        uVar4 = StringName::get_empty_hash();
      }
      else {
        uVar4 = *(uint *)(*(long *)param_2 + 0x20);
      }
      lVar1 = *(long *)param_1;
      if (uVar4 == 0) {
        uVar4 = 1;
      }
      if (lVar1 == 0) {
LAB_0010a2b0:
        uStack_48 = _insert_element(param_1,param_2,(Variant *)(param_2 + 8),uVar4);
      }
      else {
        uVar3 = *(uint *)(param_1 + 0x10);
        uVar5 = uVar4 & uVar3;
        uVar2 = *(ulong *)(*(long *)(param_1 + 8) + (ulong)uVar5 * 8);
        if ((uVar4 != (uint)uVar2) ||
           (plVar8 = (long *)((uVar2 >> 0x20) * 0x20 + lVar1), *plVar8 != *(long *)param_2)) {
          if (uVar2 != 0) {
            uVar7 = 1;
            while( true ) {
              uVar5 = uVar5 + 1 & uVar3;
              uVar2 = *(ulong *)(*(long *)(param_1 + 8) + (ulong)uVar5 * 8);
              if ((uVar4 == (uint)uVar2) &&
                 (plVar8 = (long *)((uVar2 >> 0x20) * 0x20 + lVar1), *plVar8 == *(long *)param_2))
              goto LAB_0010a283;
              if ((uVar2 == 0) || ((((uVar3 + 1) - ((uint)uVar2 & uVar3)) + uVar5 & uVar3) < uVar7))
              break;
              uVar7 = uVar7 + 1;
            }
          }
          goto LAB_0010a2b0;
        }
LAB_0010a283:
        uStack_48 = Variant::operator=((Variant *)(plVar8 + 1),(Variant *)(param_2 + 8));
      }
      param_2 = param_2 + 0x20;
    } while (pSVar6 != param_2);
  }
  return uStack_48;
}



/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::reset() */

void __thiscall
AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::reset
          (AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
           *this)

{
  void *pvVar1;
  long lVar2;
  long *plVar3;
  
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    if (*(int *)(this + 0x14) != 0) {
      lVar2 = 0;
      do {
        plVar3 = (long *)((long)pvVar1 + lVar2 * 0x20);
        if ((StringName::configured != '\0') && (*plVar3 != 0)) {
          StringName::unref();
          pvVar1 = *(void **)this;
          plVar3 = (long *)((long)pvVar1 + lVar2 * 0x20);
        }
        if (Variant::needs_deinit[(int)plVar3[1]] != '\0') {
          Variant::_clear_internal();
          pvVar1 = *(void **)this;
        }
        lVar2 = lVar2 + 1;
      } while ((uint)lVar2 < *(uint *)(this + 0x14));
    }
    Memory::free_static(pvVar1,false);
    Memory::free_static(*(void **)(this + 8),false);
    *(undefined8 *)this = 0;
  }
  *(undefined8 *)(this + 0x10) = 0xf;
  return;
}



/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::~AHashMap() */

void __thiscall
AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::~AHashMap
          (AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
           *this)

{
  void *pvVar1;
  long lVar2;
  long *plVar3;
  
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    if (*(int *)(this + 0x14) != 0) {
      lVar2 = 0;
      do {
        plVar3 = (long *)((long)pvVar1 + lVar2 * 0x20);
        if ((StringName::configured != '\0') && (*plVar3 != 0)) {
          StringName::unref();
          pvVar1 = *(void **)this;
          plVar3 = (long *)((long)pvVar1 + lVar2 * 0x20);
        }
        if (Variant::needs_deinit[(int)plVar3[1]] != '\0') {
          Variant::_clear_internal();
          pvVar1 = *(void **)this;
        }
        lVar2 = lVar2 + 1;
      } while ((uint)lVar2 < *(uint *)(this + 0x14));
    }
    Memory::free_static(pvVar1,false);
    Memory::free_static(*(void **)(this + 8),false);
    return;
  }
  return;
}



/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::ConstIterator::TEMPNAMEPLACEHOLDERVALUE() const */

undefined8 __thiscall
AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
ConstIterator::operator*(ConstIterator *this)

{
  return *(undefined8 *)this;
}



/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::ConstIterator::TEMPNAMEPLACEHOLDERVALUE() const */

undefined8 __thiscall
AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
ConstIterator::operator->(ConstIterator *this)

{
  return *(undefined8 *)this;
}



/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::ConstIterator::TEMPNAMEPLACEHOLDERVALUE() */

ConstIterator * __thiscall
AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
ConstIterator::operator++(ConstIterator *this)

{
  *(long *)this = *(long *)this + 0x20;
  return this;
}



/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::ConstIterator::TEMPNAMEPLACEHOLDERVALUE() */

ConstIterator * __thiscall
AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
ConstIterator::operator--(ConstIterator *this)

{
  long lVar1;
  
  lVar1 = *(long *)this;
  *(ulong *)this = lVar1 - 0x20U;
  if (lVar1 - 0x20U < *(ulong *)(this + 8)) {
    *(undefined8 *)this = *(undefined8 *)(this + 0x10);
  }
  return this;
}



/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::ConstIterator::TEMPNAMEPLACEHOLDERVALUE(AHashMap<StringName, Variant, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> >::ConstIterator const&) const */

undefined8 __thiscall
AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
ConstIterator::operator==(ConstIterator *this,ConstIterator *param_1)

{
  return CONCAT71((int7)((ulong)*(long *)param_1 >> 8),*(long *)this == *(long *)param_1);
}



/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::ConstIterator::TEMPNAMEPLACEHOLDERVALUE(AHashMap<StringName, Variant, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> >::ConstIterator const&) const */

undefined8 __thiscall
AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
ConstIterator::operator!=(ConstIterator *this,ConstIterator *param_1)

{
  return CONCAT71((int7)((ulong)*(long *)param_1 >> 8),*(long *)this != *(long *)param_1);
}



/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::ConstIterator::operator bool() const */

bool __thiscall AHashMap::ConstIterator::operator_cast_to_bool(ConstIterator *this)

{
  return *(long *)this != *(long *)(this + 0x10);
}



/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::ConstIterator::ConstIterator(KeyValue<StringName, Variant>*, KeyValue<StringName, Variant>*,
   KeyValue<StringName, Variant>*) */

void __thiscall
AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
ConstIterator::ConstIterator
          (ConstIterator *this,KeyValue *param_1,KeyValue *param_2,KeyValue *param_3)

{
  *(KeyValue **)this = param_1;
  *(KeyValue **)(this + 8) = param_2;
  *(KeyValue **)(this + 0x10) = param_3;
  return;
}



/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::ConstIterator::ConstIterator() */

void __thiscall
AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
ConstIterator::ConstIterator(ConstIterator *this)

{
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  return;
}



/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::ConstIterator::ConstIterator(AHashMap<StringName, Variant, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> >::ConstIterator const&) */

void __thiscall
AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
ConstIterator::ConstIterator(ConstIterator *this,ConstIterator *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = uVar2;
  *(undefined8 *)(this + 0x10) = uVar1;
  return;
}



/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::ConstIterator::TEMPNAMEPLACEHOLDERVALUE(AHashMap<StringName, Variant, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> >::ConstIterator const&) */

void __thiscall
AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
ConstIterator::operator=(ConstIterator *this,ConstIterator *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = uVar1;
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  return;
}



/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::Iterator::TEMPNAMEPLACEHOLDERVALUE() const */

undefined8 __thiscall
AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::Iterator::
operator*(Iterator *this)

{
  return *(undefined8 *)this;
}



/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::Iterator::TEMPNAMEPLACEHOLDERVALUE() const */

undefined8 __thiscall
AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::Iterator::
operator->(Iterator *this)

{
  return *(undefined8 *)this;
}



/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::Iterator::TEMPNAMEPLACEHOLDERVALUE() */

Iterator * __thiscall
AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::Iterator::
operator++(Iterator *this)

{
  *(long *)this = *(long *)this + 0x20;
  return this;
}



/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::Iterator::TEMPNAMEPLACEHOLDERVALUE() */

Iterator * __thiscall
AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::Iterator::
operator--(Iterator *this)

{
  long lVar1;
  
  lVar1 = *(long *)this;
  *(ulong *)this = lVar1 - 0x20U;
  if (lVar1 - 0x20U < *(ulong *)(this + 8)) {
    *(undefined8 *)this = *(undefined8 *)(this + 0x10);
  }
  return this;
}



/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::Iterator::TEMPNAMEPLACEHOLDERVALUE(AHashMap<StringName, Variant, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> >::Iterator const&) const */

undefined8 __thiscall
AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::Iterator::
operator==(Iterator *this,Iterator *param_1)

{
  return CONCAT71((int7)((ulong)*(long *)param_1 >> 8),*(long *)this == *(long *)param_1);
}



/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::Iterator::TEMPNAMEPLACEHOLDERVALUE(AHashMap<StringName, Variant, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> >::Iterator const&) const */

undefined8 __thiscall
AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::Iterator::
operator!=(Iterator *this,Iterator *param_1)

{
  return CONCAT71((int7)((ulong)*(long *)param_1 >> 8),*(long *)this != *(long *)param_1);
}



/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::Iterator::operator bool() const */

bool __thiscall AHashMap::Iterator::operator_cast_to_bool(Iterator *this)

{
  return *(long *)this != *(long *)(this + 0x10);
}



/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::Iterator::Iterator(KeyValue<StringName, Variant>*, KeyValue<StringName, Variant>*,
   KeyValue<StringName, Variant>*) */

void __thiscall
AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::Iterator::
Iterator(Iterator *this,KeyValue *param_1,KeyValue *param_2,KeyValue *param_3)

{
  *(KeyValue **)this = param_1;
  *(KeyValue **)(this + 8) = param_2;
  *(KeyValue **)(this + 0x10) = param_3;
  return;
}



/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::Iterator::Iterator() */

void __thiscall
AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::Iterator::
Iterator(Iterator *this)

{
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  return;
}



/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::Iterator::Iterator(AHashMap<StringName, Variant, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> >::Iterator const&) */

void __thiscall
AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::Iterator::
Iterator(Iterator *this,Iterator *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = uVar2;
  *(undefined8 *)(this + 0x10) = uVar1;
  return;
}



/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::Iterator::TEMPNAMEPLACEHOLDERVALUE(AHashMap<StringName, Variant, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> >::Iterator const&) */

void __thiscall
AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::Iterator::
operator=(Iterator *this,Iterator *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = uVar1;
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  return;
}



/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::Iterator::operator AHashMap<StringName, Variant, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> >::ConstIterator() const */

Iterator * __thiscall AHashMap::Iterator::operator_cast_to_ConstIterator(Iterator *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *in_RSI;
  
  uVar1 = *in_RSI;
  uVar2 = in_RSI[1];
  *(undefined8 *)(this + 0x10) = in_RSI[2];
  *(undefined8 *)this = uVar1;
  *(undefined8 *)(this + 8) = uVar2;
  return this;
}



/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::_hash(StringName const&) const */

int __thiscall
AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::_hash
          (AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *this,
          StringName *param_1)

{
  int iVar1;
  
  if (*(long *)param_1 != 0) {
    iVar1 = *(int *)(*(long *)param_1 + 0x20);
    if (iVar1 == 0) {
      iVar1 = 1;
    }
    return iVar1;
  }
  iVar1 = StringName::get_empty_hash();
  if (iVar1 == 0) {
    iVar1 = 1;
  }
  return iVar1;
}



/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::_get_resize_count(unsigned int) */

uint AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
     _get_resize_count(uint param_1)

{
  return param_1 + 1 >> 2 ^ param_1;
}



/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::_get_probe_length(unsigned int, unsigned int, unsigned int) */

uint AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
     _get_probe_length(uint param_1,uint param_2,uint param_3)

{
  return (param_3 + 1 + param_1) - (param_2 & param_3) & param_3;
}



/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::_lookup_pos(StringName const&, unsigned int&, unsigned int&) const */

undefined8 __thiscall
AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::_lookup_pos
          (AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *this,
          StringName *param_1,uint *param_2,uint *param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  
  lVar6 = *(long *)this;
  if (lVar6 == 0) {
    return 0;
  }
  if (*(long *)param_1 == 0) {
    uVar3 = StringName::get_empty_hash();
    lVar6 = *(long *)this;
    if (lVar6 == 0) {
      return 0;
    }
    uVar5 = 1;
    if (uVar3 != 0) {
      uVar5 = uVar3;
    }
  }
  else {
    uVar5 = *(uint *)(*(long *)param_1 + 0x20);
    if (uVar5 == 0) {
      uVar5 = 1;
    }
  }
  uVar3 = *(uint *)(this + 0x10);
  uVar2 = uVar3 & uVar5;
  uVar1 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar2 * 8);
  if ((uVar5 == (uint)uVar1) &&
     (uVar7 = (uint)(uVar1 >> 0x20), *(long *)(lVar6 + (uVar1 >> 0x20) * 0x10) == *(long *)param_1))
  {
LAB_0010a7b0:
    *param_2 = uVar7;
    *param_3 = uVar2;
    return 1;
  }
  if (uVar1 != 0) {
    uVar4 = 1;
    while( true ) {
      uVar2 = uVar2 + 1 & uVar3;
      uVar1 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar2 * 8);
      if (((uint)uVar1 == uVar5) &&
         (uVar7 = (uint)(uVar1 >> 0x20),
         *(long *)(lVar6 + (uVar1 >> 0x20) * 0x10) == *(long *)param_1)) goto LAB_0010a7b0;
      if ((uVar1 == 0) || ((((uVar3 + 1) - ((uint)uVar1 & uVar3)) + uVar2 & uVar3) < uVar4)) break;
      uVar4 = uVar4 + 1;
    }
  }
  return 0;
}



/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::_lookup_pos_with_hash(StringName const&, unsigned int&, unsigned int&, unsigned int) const */

undefined8 __thiscall
AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
_lookup_pos_with_hash
          (AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *this,
          StringName *param_1,uint *param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  lVar2 = *(long *)this;
  if (lVar2 != 0) {
    uVar1 = *(uint *)(this + 0x10);
    uVar4 = uVar1 & param_4;
    uVar3 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar4 * 8);
    if ((param_4 == (uint)uVar3) &&
       (uVar6 = (uint)(uVar3 >> 0x20), *(long *)(lVar2 + (uVar3 >> 0x20) * 0x10) == *(long *)param_1
       )) {
LAB_0010a8c0:
      *param_2 = uVar6;
      *param_3 = uVar4;
      return 1;
    }
    if (uVar3 != 0) {
      uVar5 = 1;
      while( true ) {
        uVar4 = uVar4 + 1 & uVar1;
        uVar3 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar4 * 8);
        if (((uint)uVar3 == param_4) &&
           (uVar6 = (uint)(uVar3 >> 0x20),
           *(long *)(lVar2 + (uVar3 >> 0x20) * 0x10) == *(long *)param_1)) goto LAB_0010a8c0;
        if ((uVar3 == 0) || ((((uVar1 + 1) - ((uint)uVar3 & uVar1)) + uVar4 & uVar1) < uVar5))
        break;
        uVar5 = uVar5 + 1;
      }
    }
  }
  return 0;
}



/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::_insert_with_hash(unsigned int, unsigned int) */

void __thiscall
AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
_insert_with_hash(AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
                  *this,uint param_1,uint param_2)

{
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  
  uVar3 = *(uint *)(this + 0x10);
  lVar4 = *(long *)(this + 8);
  plVar1 = (long *)(lVar4 + (ulong)(uVar3 & param_1) * 8);
  if (*plVar1 == 0) {
    *plVar1 = CONCAT44(param_2,param_1);
    return;
  }
  uVar9 = 1;
  uVar7 = (uVar3 & param_1) + 1 & uVar3;
  puVar2 = (uint *)(lVar4 + (ulong)uVar7 * 8);
  lVar5 = *(long *)puVar2;
  uVar6 = CONCAT44(param_2,param_1);
  while (lVar5 != 0) {
    uVar8 = (uVar7 + uVar3 + 1) - (*puVar2 & uVar3) & uVar3;
    uVar10 = uVar6;
    if (uVar8 < uVar9) {
      uVar10 = *(undefined8 *)puVar2;
      *(undefined8 *)puVar2 = uVar6;
      uVar9 = uVar8;
    }
    uVar9 = uVar9 + 1;
    uVar7 = uVar7 + 1 & uVar3;
    puVar2 = (uint *)(lVar4 + (ulong)uVar7 * 8);
    uVar6 = uVar10;
    lVar5 = *(long *)puVar2;
  }
  *(undefined8 *)puVar2 = uVar6;
  return;
}



/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::_resize_and_rehash(unsigned int) */

void __thiscall
AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
_resize_and_rehash(AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
                   *this,uint param_1)

{
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  long *plVar14;
  ulong __n;
  
  uVar3 = *(uint *)(this + 0x10);
  plVar4 = *(long **)(this + 8);
  uVar8 = 4;
  if (3 < param_1) {
    uVar8 = param_1;
  }
  uVar8 = uVar8 - 1 | uVar8 - 1 >> 1;
  uVar8 = uVar8 | uVar8 >> 2;
  uVar8 = uVar8 | uVar8 >> 4;
  uVar8 = uVar8 | uVar8 >> 8;
  uVar8 = uVar8 | uVar8 >> 0x10;
  *(uint *)(this + 0x10) = uVar8;
  __n = (ulong)(uVar8 + 1) << 3;
  uVar10 = Memory::alloc_static(__n,false);
  *(undefined8 *)(this + 8) = uVar10;
  uVar10 = Memory::realloc_static
                     (*(void **)this,
                      (ulong)((*(uint *)(this + 0x10) + 1 >> 2 ^ *(uint *)(this + 0x10)) + 1) << 4,
                      false);
  *(undefined8 *)this = uVar10;
  memset(*(void **)(this + 8),0,__n);
  if ((*(int *)(this + 0x14) != 0) && (uVar3 != 0xffffffff)) {
    plVar14 = plVar4;
    do {
      while (lVar5 = *plVar14, lVar5 == 0) {
LAB_0010aa48:
        plVar14 = plVar14 + 1;
        if (plVar14 == plVar4 + (ulong)uVar3 + 1) goto LAB_0010aa7c;
      }
      uVar8 = *(uint *)(this + 0x10);
      lVar6 = *(long *)(this + 8);
      uVar9 = uVar8 & (uint)lVar5;
      plVar1 = (long *)(lVar6 + (ulong)uVar9 * 8);
      if (*plVar1 != 0) {
        uVar12 = 1;
        uVar9 = uVar9 + 1 & uVar8;
        puVar2 = (uint *)(lVar6 + (ulong)uVar9 * 8);
        lVar7 = *(long *)puVar2;
        while (lVar7 != 0) {
          uVar11 = (uVar9 + uVar8 + 1) - (*puVar2 & uVar8) & uVar8;
          lVar13 = lVar5;
          if (uVar11 < uVar12) {
            lVar13 = *(long *)puVar2;
            *(long *)puVar2 = lVar5;
            uVar12 = uVar11;
          }
          uVar12 = uVar12 + 1;
          uVar9 = uVar9 + 1 & uVar8;
          puVar2 = (uint *)(lVar6 + (ulong)uVar9 * 8);
          lVar5 = lVar13;
          lVar7 = *(long *)puVar2;
        }
        *(long *)puVar2 = lVar5;
        goto LAB_0010aa48;
      }
      plVar14 = plVar14 + 1;
      *plVar1 = lVar5;
    } while (plVar14 != plVar4 + (ulong)uVar3 + 1);
  }
LAB_0010aa7c:
  Memory::free_static(plVar4,false);
  return;
}



/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::_insert_element(StringName const&, int const&, unsigned int) */

int __thiscall
AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::_insert_element
          (AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *this,
          StringName *param_1,int *param_2,uint param_3)

{
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  undefined8 uVar8;
  uint uVar9;
  StringName *this_00;
  ulong __n;
  uint uVar10;
  undefined8 uVar11;
  
  if (*(long *)this == 0) {
    __n = (ulong)(*(int *)(this + 0x10) + 1) << 3;
    uVar8 = Memory::alloc_static(__n,false);
    *(undefined8 *)(this + 8) = uVar8;
    uVar8 = Memory::alloc_static
                      ((ulong)((*(uint *)(this + 0x10) + 1 >> 2 ^ *(uint *)(this + 0x10)) + 1) << 4,
                       false);
    *(undefined8 *)this = uVar8;
    memset(*(void **)(this + 8),0,__n);
  }
  uVar3 = *(uint *)(this + 0x10);
  uVar7 = *(uint *)(this + 0x14);
  if ((uVar3 + 1 >> 2 ^ uVar3) < uVar7) {
    _resize_and_rehash(this,uVar3 * 2);
    uVar7 = *(uint *)(this + 0x14);
  }
  this_00 = (StringName *)((ulong)uVar7 * 0x10 + *(long *)this);
  StringName::StringName(this_00,param_1);
  uVar3 = *(uint *)(this + 0x10);
  lVar5 = *(long *)(this + 8);
  iVar4 = *(int *)(this + 0x14);
  *(int *)(this_00 + 8) = *param_2;
  plVar1 = (long *)(lVar5 + (ulong)(param_3 & uVar3) * 8);
  if (*plVar1 == 0) {
    *plVar1 = CONCAT44(iVar4,param_3);
  }
  else {
    uVar10 = 1;
    uVar7 = (param_3 & uVar3) + 1 & uVar3;
    puVar2 = (uint *)(lVar5 + (ulong)uVar7 * 8);
    lVar6 = *(long *)puVar2;
    uVar8 = CONCAT44(iVar4,param_3);
    while (lVar6 != 0) {
      uVar9 = (uVar7 + uVar3 + 1) - (*puVar2 & uVar3) & uVar3;
      uVar11 = uVar8;
      if (uVar9 < uVar10) {
        uVar11 = *(undefined8 *)puVar2;
        *(undefined8 *)puVar2 = uVar8;
        uVar10 = uVar9;
      }
      uVar10 = uVar10 + 1;
      uVar7 = uVar7 + 1 & uVar3;
      puVar2 = (uint *)(lVar5 + (ulong)uVar7 * 8);
      uVar8 = uVar11;
      lVar6 = *(long *)puVar2;
    }
    *(undefined8 *)puVar2 = uVar8;
  }
  *(int *)(this + 0x14) = iVar4 + 1;
  return iVar4;
}



/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::_init_from(AHashMap<StringName, int, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> > const&) */

void __thiscall
AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::_init_from
          (AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *this,
          AHashMap *param_1)

{
  undefined8 uVar1;
  long lVar2;
  StringName *pSVar3;
  StringName *this_00;
  ulong __n;
  long lVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x10) = uVar1;
  if ((int)((ulong)uVar1 >> 0x20) == 0) {
    return;
  }
  __n = (ulong)((int)uVar1 + 1) << 3;
  uVar1 = Memory::alloc_static(__n,false);
  *(undefined8 *)(this + 8) = uVar1;
  lVar2 = Memory::alloc_static
                    ((ulong)((*(uint *)(this + 0x10) + 1 >> 2 ^ *(uint *)(this + 0x10)) + 1) << 4,
                     false);
  *(long *)this = lVar2;
  if (*(int *)(this + 0x14) != 0) {
    lVar4 = 0;
    while( true ) {
      this_00 = (StringName *)(lVar2 + lVar4 * 0x10);
      pSVar3 = (StringName *)(lVar4 * 0x10 + *(long *)param_1);
      StringName::StringName(this_00,pSVar3);
      *(undefined4 *)(this_00 + 8) = *(undefined4 *)(pSVar3 + 8);
      if (*(uint *)(this + 0x14) <= (uint)(lVar4 + 1)) break;
      lVar2 = *(long *)this;
      lVar4 = lVar4 + 1;
    }
  }
  memcpy(*(void **)(this + 8),*(void **)(param_1 + 8),__n);
  return;
}



/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::get_capacity() const */

int __thiscall
AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::get_capacity
          (AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *this)

{
  return *(int *)(this + 0x10) + 1;
}



/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName> >::size()
   const */

undefined4 __thiscall
AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::size
          (AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *this)

{
  return *(undefined4 *)(this + 0x14);
}



/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::is_empty() const */

undefined4 __thiscall
AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::is_empty
          (AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *this)

{
  return CONCAT31((int3)((uint)*(int *)(this + 0x14) >> 8),*(int *)(this + 0x14) == 0);
}



/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName> >::clear()
    */

void __thiscall
AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::clear
          (AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *this)

{
  long lVar1;
  
  if (*(long *)this == 0) {
    return;
  }
  if (*(int *)(this + 0x14) == 0) {
    return;
  }
  memset(*(void **)(this + 8),0,(ulong)(*(int *)(this + 0x10) + 1) << 3);
  if (*(int *)(this + 0x14) != 0) {
    lVar1 = 0;
    do {
      if ((StringName::configured != '\0') && (*(long *)(lVar1 * 0x10 + *(long *)this) != 0)) {
        StringName::unref();
      }
      lVar1 = lVar1 + 1;
    } while ((uint)lVar1 < *(uint *)(this + 0x14));
  }
  *(undefined4 *)(this + 0x14) = 0;
  return;
}



/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::get(StringName const&) */

long * __thiscall
AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::get
          (AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *this,
          StringName *param_1)

{
  ulong uVar1;
  code *pcVar2;
  uint uVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  
  lVar6 = *(long *)this;
  if (lVar6 != 0) {
    if (*(long *)param_1 == 0) {
      uVar3 = StringName::get_empty_hash();
      lVar6 = *(long *)this;
      if (lVar6 == 0) goto LAB_0010aee0;
      uVar8 = 1;
      if (uVar3 != 0) {
        uVar8 = uVar3;
      }
    }
    else {
      uVar8 = *(uint *)(*(long *)param_1 + 0x20);
      if (uVar8 == 0) {
        uVar8 = 1;
      }
    }
    uVar3 = *(uint *)(this + 0x10);
    uVar5 = uVar3 & uVar8;
    uVar1 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar5 * 8);
    if ((uVar8 == (uint)uVar1) &&
       (plVar4 = (long *)((uVar1 >> 0x20) * 0x10 + lVar6), *plVar4 == *(long *)param_1)) {
LAB_0010aeb2:
      return plVar4 + 1;
    }
    if (uVar1 != 0) {
      uVar7 = 1;
      while( true ) {
        uVar5 = uVar5 + 1 & uVar3;
        uVar1 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar5 * 8);
        if (((uint)uVar1 == uVar8) &&
           (plVar4 = (long *)((uVar1 >> 0x20) * 0x10 + lVar6), *plVar4 == *(long *)param_1))
        goto LAB_0010aeb2;
        if ((uVar1 == 0) || ((((uVar3 + 1) - ((uint)uVar1 & uVar3)) + uVar5 & uVar3) < uVar7))
        break;
        uVar7 = uVar7 + 1;
      }
    }
  }
LAB_0010aee0:
  _err_print_error(&_LC3,"core/templates/a_hash_map.h",0x138,"FATAL: Condition \"!exists\" is true."
                   ,"AHashMap key not found.",0,0);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::get(StringName const&) const */

long * __thiscall
AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::get
          (AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *this,
          StringName *param_1)

{
  ulong uVar1;
  code *pcVar2;
  uint uVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  
  lVar6 = *(long *)this;
  if (lVar6 != 0) {
    if (*(long *)param_1 == 0) {
      uVar3 = StringName::get_empty_hash();
      lVar6 = *(long *)this;
      if (lVar6 == 0) goto LAB_0010b020;
      uVar8 = 1;
      if (uVar3 != 0) {
        uVar8 = uVar3;
      }
    }
    else {
      uVar8 = *(uint *)(*(long *)param_1 + 0x20);
      if (uVar8 == 0) {
        uVar8 = 1;
      }
    }
    uVar3 = *(uint *)(this + 0x10);
    uVar5 = uVar3 & uVar8;
    uVar1 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar5 * 8);
    if ((uVar8 == (uint)uVar1) &&
       (plVar4 = (long *)((uVar1 >> 0x20) * 0x10 + lVar6), *plVar4 == *(long *)param_1)) {
LAB_0010aff2:
      return plVar4 + 1;
    }
    if (uVar1 != 0) {
      uVar7 = 1;
      while( true ) {
        uVar5 = uVar5 + 1 & uVar3;
        uVar1 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar5 * 8);
        if (((uint)uVar1 == uVar8) &&
           (plVar4 = (long *)((uVar1 >> 0x20) * 0x10 + lVar6), *plVar4 == *(long *)param_1))
        goto LAB_0010aff2;
        if ((uVar1 == 0) || ((((uVar3 + 1) - ((uint)uVar1 & uVar3)) + uVar5 & uVar3) < uVar7))
        break;
        uVar7 = uVar7 + 1;
      }
    }
  }
LAB_0010b020:
  _err_print_error(&_LC3,"core/templates/a_hash_map.h",0x140,"FATAL: Condition \"!exists\" is true."
                   ,"AHashMap key not found.",0,0);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::getptr(StringName const&) const */

long * __thiscall
AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::getptr
          (AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *this,
          StringName *param_1)

{
  ulong uVar1;
  uint uVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  
  lVar5 = *(long *)this;
  if (lVar5 != 0) {
    if (*(long *)param_1 == 0) {
      uVar2 = StringName::get_empty_hash();
      lVar5 = *(long *)this;
      if (lVar5 == 0) {
        return (long *)0x0;
      }
      uVar7 = 1;
      if (uVar2 != 0) {
        uVar7 = uVar2;
      }
    }
    else {
      uVar7 = *(uint *)(*(long *)param_1 + 0x20);
      if (uVar7 == 0) {
        uVar7 = 1;
      }
    }
    uVar2 = *(uint *)(this + 0x10);
    uVar4 = uVar2 & uVar7;
    uVar1 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar4 * 8);
    if ((uVar7 == (uint)uVar1) &&
       (plVar3 = (long *)((uVar1 >> 0x20) * 0x10 + lVar5), *plVar3 == *(long *)param_1)) {
LAB_0010b132:
      return plVar3 + 1;
    }
    if (uVar1 != 0) {
      uVar6 = 1;
      while( true ) {
        uVar4 = uVar4 + 1 & uVar2;
        uVar1 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar4 * 8);
        if (((uint)uVar1 == uVar7) &&
           (plVar3 = (long *)((uVar1 >> 0x20) * 0x10 + lVar5), *plVar3 == *(long *)param_1))
        goto LAB_0010b132;
        if ((uVar1 == 0) || ((((uVar2 + 1) - ((uint)uVar1 & uVar2)) + uVar4 & uVar2) < uVar6))
        break;
        uVar6 = uVar6 + 1;
      }
    }
  }
  return (long *)0x0;
}



/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::getptr(StringName const&) */

long * __thiscall
AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::getptr
          (AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *this,
          StringName *param_1)

{
  ulong uVar1;
  uint uVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  
  lVar5 = *(long *)this;
  if (lVar5 != 0) {
    if (*(long *)param_1 == 0) {
      uVar2 = StringName::get_empty_hash();
      lVar5 = *(long *)this;
      if (lVar5 == 0) {
        return (long *)0x0;
      }
      uVar7 = 1;
      if (uVar2 != 0) {
        uVar7 = uVar2;
      }
    }
    else {
      uVar7 = *(uint *)(*(long *)param_1 + 0x20);
      if (uVar7 == 0) {
        uVar7 = 1;
      }
    }
    uVar2 = *(uint *)(this + 0x10);
    uVar4 = uVar2 & uVar7;
    uVar1 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar4 * 8);
    if ((uVar7 == (uint)uVar1) &&
       (plVar3 = (long *)((uVar1 >> 0x20) * 0x10 + lVar5), *plVar3 == *(long *)param_1)) {
LAB_0010b242:
      return plVar3 + 1;
    }
    if (uVar1 != 0) {
      uVar6 = 1;
      while( true ) {
        uVar4 = uVar4 + 1 & uVar2;
        uVar1 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar4 * 8);
        if (((uint)uVar1 == uVar7) &&
           (plVar3 = (long *)((uVar1 >> 0x20) * 0x10 + lVar5), *plVar3 == *(long *)param_1))
        goto LAB_0010b242;
        if ((uVar1 == 0) || ((((uVar2 + 1) - ((uint)uVar1 & uVar2)) + uVar4 & uVar2) < uVar6))
        break;
        uVar6 = uVar6 + 1;
      }
    }
  }
  return (long *)0x0;
}



/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::has(StringName const&) const */

undefined8 __thiscall
AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::has
          (AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *this,
          StringName *param_1)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  
  lVar6 = *(long *)this;
  if (lVar6 == 0) {
    return 0;
  }
  if (*(long *)param_1 == 0) {
    uVar3 = StringName::get_empty_hash();
    lVar6 = *(long *)this;
    if (lVar6 == 0) {
      return 0;
    }
    uVar5 = 1;
    if (uVar3 != 0) {
      uVar5 = uVar3;
    }
  }
  else {
    uVar5 = *(uint *)(*(long *)param_1 + 0x20);
    if (uVar5 == 0) {
      uVar5 = 1;
    }
  }
  uVar3 = *(uint *)(this + 0x10);
  uVar2 = uVar5 & uVar3;
  uVar1 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar2 * 8);
  if ((uVar5 == (uint)uVar1) && (*(long *)(lVar6 + (uVar1 >> 0x20) * 0x10) == *(long *)param_1)) {
    return 1;
  }
  if (uVar1 != 0) {
    uVar4 = 1;
    while( true ) {
      uVar2 = uVar2 + 1 & uVar3;
      uVar1 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar2 * 8);
      if ((uVar5 == (uint)uVar1) && (*(long *)(lVar6 + (uVar1 >> 0x20) * 0x10) == *(long *)param_1))
      {
        return 1;
      }
      if ((uVar1 == 0) || ((((uVar3 + 1) - ((uint)uVar1 & uVar3)) + uVar2 & uVar3) < uVar4)) break;
      uVar4 = uVar4 + 1;
    }
  }
  return 0;
}



/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::erase(StringName const&) */

undefined8 __thiscall
AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::erase
          (AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *this,
          StringName *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  uint uVar13;
  uint *puVar14;
  ulong *puVar15;
  long lVar16;
  bool bVar17;
  uint local_44;
  
  lVar16 = *(long *)this;
  if (lVar16 == 0) {
    return 0;
  }
  if (*(long *)param_1 == 0) {
    uVar8 = StringName::get_empty_hash();
    lVar16 = *(long *)this;
    if (lVar16 == 0) {
      return 0;
    }
    uVar7 = 1;
    if (uVar8 != 0) {
      uVar7 = uVar8;
    }
  }
  else {
    uVar7 = *(uint *)(*(long *)param_1 + 0x20);
    if (uVar7 == 0) {
      uVar7 = 1;
    }
  }
  uVar8 = *(uint *)(this + 0x10);
  lVar2 = *(long *)(this + 8);
  uVar6 = uVar8 & uVar7;
  uVar9 = (ulong)uVar6;
  puVar15 = (ulong *)(lVar2 + uVar9 * 8);
  uVar3 = *puVar15;
  if (uVar7 != (uint)uVar3) {
LAB_0010b40e:
    if (uVar3 != 0) {
      uVar13 = 1;
      while( true ) {
        uVar6 = uVar6 + 1 & uVar8;
        uVar9 = (ulong)uVar6;
        puVar15 = (ulong *)(lVar2 + uVar9 * 8);
        uVar3 = *puVar15;
        if ((uint)uVar3 == uVar7) {
          local_44 = (uint)(uVar3 >> 0x20);
          lVar11 = (uVar3 >> 0x20) * 0x10;
          plVar12 = (long *)(lVar16 + lVar11);
          if (*plVar12 == *(long *)param_1) goto LAB_0010b487;
        }
        if ((uVar3 == 0) || ((((uVar8 + 1) - ((uint)uVar3 & uVar8)) + uVar6 & uVar8) < uVar13))
        break;
        uVar13 = uVar13 + 1;
      }
    }
    return 0;
  }
  local_44 = (uint)(uVar3 >> 0x20);
  lVar11 = (uVar3 >> 0x20) * 0x10;
  plVar12 = (long *)(lVar16 + lVar11);
  if (*plVar12 != *(long *)param_1) goto LAB_0010b40e;
LAB_0010b487:
  uVar7 = uVar6 + 1 & uVar8;
  puVar14 = (uint *)(lVar2 + (ulong)uVar7 * 8);
  if ((*puVar14 != 0) &&
     (uVar3 = (ulong)uVar7, ((uVar8 + 1 + uVar7) - (*puVar14 & uVar8) & uVar8) != 0)) {
    do {
      uVar10 = uVar3;
      puVar1 = (undefined8 *)(lVar2 + uVar9 * 8);
      uVar4 = *(undefined8 *)puVar14;
      *(undefined8 *)puVar14 = *puVar1;
      *puVar1 = uVar4;
      uVar7 = (int)uVar10 + 1U & uVar8;
      puVar14 = (uint *)(lVar2 + (ulong)uVar7 * 8);
      if (*puVar14 == 0) break;
      uVar3 = (ulong)uVar7;
      uVar9 = uVar10;
    } while (((uVar8 + 1 + uVar7) - (*puVar14 & uVar8) & uVar8) != 0);
    puVar15 = (ulong *)(lVar2 + uVar10 * 8);
  }
  bVar17 = StringName::configured != '\0';
  *puVar15 = 0;
  if ((bVar17) && (*plVar12 != 0)) {
    StringName::unref();
    lVar16 = *(long *)this;
  }
  uVar8 = *(int *)(this + 0x14) - 1;
  *(uint *)(this + 0x14) = uVar8;
  if (uVar8 <= local_44) {
    return 1;
  }
  puVar1 = (undefined8 *)(lVar16 + (ulong)uVar8 * 0x10);
  uVar4 = puVar1[1];
  *(undefined8 *)(lVar11 + lVar16) = *puVar1;
  ((undefined8 *)(lVar11 + lVar16))[1] = uVar4;
  lVar16 = *(long *)this;
  plVar12 = (long *)((ulong)*(uint *)(this + 0x14) * 0x10 + lVar16);
  if (lVar16 == 0) {
LAB_0010b69f:
    puVar15 = *(ulong **)(this + 8);
  }
  else {
    if (*plVar12 == 0) {
      uVar8 = StringName::get_empty_hash();
      lVar16 = *(long *)this;
      if (lVar16 == 0) goto LAB_0010b69f;
      uVar7 = 1;
      if (uVar8 != 0) {
        uVar7 = uVar8;
      }
    }
    else {
      uVar7 = *(uint *)(*plVar12 + 0x20);
      if (uVar7 == 0) {
        uVar7 = 1;
      }
    }
    uVar8 = *(uint *)(this + 0x10);
    puVar5 = *(ulong **)(this + 8);
    uVar6 = uVar7 & uVar8;
    puVar15 = puVar5 + uVar6;
    uVar3 = *puVar15;
    if (((uVar7 != (uint)uVar3) || (*(long *)(lVar16 + (uVar3 >> 0x20) * 0x10) != *plVar12)) &&
       (puVar15 = puVar5, uVar3 != 0)) {
      uVar13 = 1;
      while( true ) {
        uVar6 = uVar6 + 1 & uVar8;
        puVar15 = puVar5 + uVar6;
        uVar3 = *puVar15;
        if (((uVar7 == (uint)uVar3) && (*(long *)(lVar16 + (uVar3 >> 0x20) * 0x10) == *plVar12)) ||
           ((puVar15 = puVar5, uVar3 == 0 ||
            ((((uVar8 + 1) - ((uint)uVar3 & uVar8)) + uVar6 & uVar8) < uVar13)))) break;
        uVar13 = uVar13 + 1;
      }
    }
  }
  *(uint *)((long)puVar15 + 4) = local_44;
  return 1;
}



/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::replace_key(StringName const&, StringName const&) */

undefined8 __thiscall
AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::replace_key
          (AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *this,
          StringName *param_1,StringName *param_2)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  uint *puVar11;
  uint uVar12;
  StringName *this_00;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined4 local_54;
  ulong local_50;
  
  lVar14 = *(long *)param_2;
  if (lVar14 == *(long *)param_1) {
    return 1;
  }
  lVar13 = *(long *)this;
  if (lVar13 != 0) {
    if (lVar14 == 0) {
      uVar5 = StringName::get_empty_hash();
      lVar13 = *(long *)this;
      if (lVar13 == 0) goto LAB_0010b9c0;
      uVar8 = 1;
      if (uVar5 != 0) {
        uVar8 = uVar5;
      }
    }
    else {
      uVar8 = *(uint *)(lVar14 + 0x20);
      if (*(uint *)(lVar14 + 0x20) == 0) {
        uVar8 = 1;
      }
    }
    uVar5 = *(uint *)(this + 0x10);
    lVar14 = *(long *)(this + 8);
    uVar7 = uVar5 & uVar8;
    uVar6 = *(ulong *)(lVar14 + (ulong)uVar7 * 8);
    if ((uVar8 == (uint)uVar6) && (*(long *)(lVar13 + (uVar6 >> 0x20) * 0x10) == *(long *)param_2))
    {
LAB_0010b776:
      _err_print_error("replace_key","core/templates/a_hash_map.h",0x18a,
                       "Condition \"_lookup_pos(p_new_key, element_pos, pos)\" is true. Returning: false"
                       ,0,0);
      return 0;
    }
    if (uVar6 != 0) {
      uVar12 = 1;
      while( true ) {
        uVar7 = uVar7 + 1 & uVar5;
        uVar6 = *(ulong *)(lVar14 + (ulong)uVar7 * 8);
        if (((uint)uVar6 == uVar8) &&
           (*(long *)(lVar13 + (uVar6 >> 0x20) * 0x10) == *(long *)param_2)) goto LAB_0010b776;
        if ((uVar6 == 0) || ((((uVar5 + 1) - ((uint)uVar6 & uVar5)) + uVar7 & uVar5) < uVar12))
        break;
        uVar12 = uVar12 + 1;
      }
    }
    if (*(long *)param_1 == 0) {
      uVar5 = StringName::get_empty_hash();
      lVar13 = *(long *)this;
      if (lVar13 == 0) goto LAB_0010b9c0;
      lVar14 = *(long *)(this + 8);
      uVar8 = 1;
      if (uVar5 != 0) {
        uVar8 = uVar5;
      }
      uVar5 = *(uint *)(this + 0x10);
    }
    else {
      uVar8 = *(uint *)(*(long *)param_1 + 0x20);
      if (uVar8 == 0) {
        uVar8 = 1;
      }
    }
    uVar7 = uVar8 & uVar5;
    uVar10 = (ulong)uVar7;
    uVar6 = *(ulong *)(lVar14 + uVar10 * 8);
    if (uVar8 == (uint)uVar6) {
      local_50 = uVar6 >> 0x20;
      local_54 = (undefined4)(uVar6 >> 0x20);
      this_00 = (StringName *)(local_50 * 0x10 + lVar13);
      if (*(long *)this_00 == *(long *)param_1) {
LAB_0010b875:
        lVar14 = uVar10 * 8;
        StringName::operator=(this_00,param_2);
        uVar5 = *(uint *)(this + 0x10);
        lVar13 = *(long *)(this + 8);
        uVar8 = uVar7 + 1 & uVar5;
        puVar11 = (uint *)(lVar13 + (ulong)uVar8 * 8);
        if ((*puVar11 != 0) &&
           (uVar6 = (ulong)uVar8, ((uVar8 + uVar5 + 1) - (*puVar11 & uVar5) & uVar5) != 0)) {
          do {
            uVar9 = uVar6;
            puVar1 = (undefined8 *)(lVar13 + uVar10 * 8);
            uVar3 = *(undefined8 *)puVar11;
            *(undefined8 *)puVar11 = *puVar1;
            *puVar1 = uVar3;
            uVar8 = (int)uVar9 + 1U & uVar5;
            puVar11 = (uint *)(lVar13 + (ulong)uVar8 * 8);
            if (*puVar11 == 0) break;
            uVar6 = (ulong)uVar8;
            uVar10 = uVar9;
          } while (((uVar8 + uVar5 + 1) - (*puVar11 & uVar5) & uVar5) != 0);
          lVar14 = uVar9 * 8;
        }
        lVar4 = *(long *)param_2;
        *(undefined8 *)(lVar13 + lVar14) = 0;
        if (lVar4 == 0) {
          uVar8 = StringName::get_empty_hash();
          uVar5 = *(uint *)(this + 0x10);
          lVar13 = *(long *)(this + 8);
        }
        else {
          uVar8 = *(uint *)(lVar4 + 0x20);
        }
        if (uVar8 == 0) {
          uVar8 = 1;
        }
        puVar2 = (ulong *)(lVar13 + (ulong)(uVar8 & uVar5) * 8);
        if (*puVar2 == 0) {
          *puVar2 = (ulong)uVar8 | local_50 << 0x20;
        }
        else {
          uVar6 = (ulong)((uVar8 & uVar5) + 1 & uVar5);
          uVar7 = 1;
          puVar11 = (uint *)(lVar13 + uVar6 * 8);
          lVar14 = *(long *)puVar11;
          uVar3 = CONCAT44(local_54,uVar8);
          while (lVar14 != 0) {
            uVar8 = ((int)uVar6 + uVar5 + 1) - (*puVar11 & uVar5) & uVar5;
            uVar15 = uVar3;
            if (uVar8 < uVar7) {
              uVar15 = *(undefined8 *)puVar11;
              *(undefined8 *)puVar11 = uVar3;
              uVar7 = uVar8;
            }
            uVar7 = uVar7 + 1;
            uVar6 = (ulong)((int)uVar6 + 1U & uVar5);
            puVar11 = (uint *)(lVar13 + uVar6 * 8);
            uVar3 = uVar15;
            lVar14 = *(long *)puVar11;
          }
          *(undefined8 *)puVar11 = uVar3;
        }
        return 1;
      }
    }
    if (uVar6 != 0) {
      uVar12 = 1;
      while( true ) {
        uVar7 = uVar7 + 1 & uVar5;
        uVar10 = (ulong)uVar7;
        uVar6 = *(ulong *)(lVar14 + uVar10 * 8);
        if (uVar8 == (uint)uVar6) {
          local_50 = uVar6 >> 0x20;
          local_54 = (undefined4)(uVar6 >> 0x20);
          this_00 = (StringName *)(local_50 * 0x10 + lVar13);
          if (*(long *)this_00 == *(long *)param_1) goto LAB_0010b875;
        }
        if ((uVar6 == 0) || ((((uVar5 + 1) - ((uint)uVar6 & uVar5)) + uVar7 & uVar5) < uVar12))
        break;
        uVar12 = uVar12 + 1;
      }
    }
  }
LAB_0010b9c0:
  _err_print_error("replace_key","core/templates/a_hash_map.h",0x18b,
                   "Condition \"!_lookup_pos(p_old_key, element_pos, pos)\" is true. Returning: false"
                   ,0,0);
  return 0;
}



/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::reserve(unsigned int) */

void __thiscall
AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::reserve
          (AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *this,
          uint param_1)

{
  uint uVar1;
  
  if (param_1 < *(int *)(this + 0x10) + 1U) {
    _err_print_error("reserve","core/templates/a_hash_map.h",0x1a2,
                     "Condition \"p_new_capacity < get_capacity()\" is true.",
                     "It is impossible to reserve less capacity than is currently available.",0,0);
    return;
  }
  if (*(long *)this != 0) {
    _resize_and_rehash(this,param_1);
    return;
  }
  uVar1 = 4;
  if (3 < param_1) {
    uVar1 = param_1;
  }
  uVar1 = uVar1 - 1 | uVar1 - 1 >> 1;
  uVar1 = uVar1 | uVar1 >> 2;
  uVar1 = uVar1 | uVar1 >> 4;
  uVar1 = uVar1 | uVar1 >> 8;
  *(uint *)(this + 0x10) = uVar1 | uVar1 >> 0x10;
  return;
}



/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName> >::begin()
    */

void AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::begin(void)

{
  long lVar1;
  long *in_RSI;
  long *in_RDI;
  
  lVar1 = *in_RSI;
  in_RDI[2] = (ulong)*(uint *)((long)in_RSI + 0x14) * 0x10 + lVar1;
  *in_RDI = lVar1;
  in_RDI[1] = lVar1;
  return;
}



/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName> >::end() */

void AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::end(void)

{
  long lVar1;
  long lVar2;
  long *in_RSI;
  long *in_RDI;
  
  lVar1 = *in_RSI;
  lVar2 = (ulong)*(uint *)((long)in_RSI + 0x14) * 0x10 + lVar1;
  in_RDI[2] = lVar2;
  *in_RDI = lVar2;
  in_RDI[1] = lVar1;
  return;
}



/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName> >::last() */

void AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::last(void)

{
  long lVar1;
  long lVar2;
  long *in_RSI;
  undefined1 (*in_RDI) [16];
  
  if (*(uint *)((long)in_RSI + 0x14) != 0) {
    lVar1 = *in_RSI;
    lVar2 = (ulong)*(uint *)((long)in_RSI + 0x14) * 0x10;
    *(long *)in_RDI[1] = lVar1 + lVar2;
    *(long *)*in_RDI = lVar1 + -0x10 + lVar2;
    *(long *)(*in_RDI + 8) = lVar1;
    return;
  }
  *(undefined8 *)in_RDI[1] = 0;
  *in_RDI = (undefined1  [16])0x0;
  return;
}



/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::find(StringName const&) */

StringName *
AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::find
          (StringName *param_1)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long *in_RDX;
  long *in_RSI;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  
  lVar4 = *in_RSI;
  if (lVar4 == 0) {
LAB_0010bcee:
    lVar4 = 0;
  }
  else {
    if (*in_RDX == 0) {
      uVar3 = StringName::get_empty_hash();
      lVar4 = *in_RSI;
      if (lVar4 == 0) goto LAB_0010bcee;
      uVar6 = 1;
      if (uVar3 != 0) {
        uVar6 = uVar3;
      }
    }
    else {
      uVar6 = *(uint *)(*in_RDX + 0x20);
      if (uVar6 == 0) {
        uVar6 = 1;
      }
    }
    uVar3 = *(uint *)(in_RSI + 2);
    uVar2 = uVar3 & uVar6;
    uVar1 = *(ulong *)(in_RSI[1] + (ulong)uVar2 * 8);
    if ((uVar6 == (uint)uVar1) &&
       (plVar7 = (long *)((uVar1 >> 0x20) * 0x10 + lVar4), *plVar7 == *in_RDX)) {
LAB_0010bcb9:
      uVar3 = *(uint *)((long)in_RSI + 0x14);
      *(long **)param_1 = plVar7;
      *(long *)(param_1 + 8) = lVar4;
      *(ulong *)(param_1 + 0x10) = (ulong)uVar3 * 0x10 + lVar4;
      return param_1;
    }
    if (uVar1 != 0) {
      uVar5 = 1;
      while( true ) {
        uVar2 = uVar2 + 1 & uVar3;
        uVar1 = *(ulong *)(in_RSI[1] + (ulong)uVar2 * 8);
        if (((uint)uVar1 == uVar6) &&
           (plVar7 = (long *)((uVar1 >> 0x20) * 0x10 + lVar4), *plVar7 == *in_RDX))
        goto LAB_0010bcb9;
        if ((uVar1 == 0) || ((((uVar3 + 1) - ((uint)uVar1 & uVar3)) + uVar2 & uVar3) < uVar5))
        break;
        uVar5 = uVar5 + 1;
      }
    }
  }
  uVar3 = *(uint *)((long)in_RSI + 0x14);
  *(long *)(param_1 + 8) = lVar4;
  lVar4 = (ulong)uVar3 * 0x10 + lVar4;
  *(long *)param_1 = lVar4;
  *(long *)(param_1 + 0x10) = lVar4;
  return param_1;
}



/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::remove(AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::Iterator const&) */

void __thiscall
AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::remove
          (AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *this,
          Iterator *param_1)

{
  if (*(StringName **)(param_1 + 0x10) != *(StringName **)param_1) {
    erase(this,*(StringName **)param_1);
    return;
  }
  return;
}



/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName> >::begin()
   const */

void AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::begin(void)

{
  long lVar1;
  long *in_RSI;
  long *in_RDI;
  
  lVar1 = *in_RSI;
  in_RDI[2] = (ulong)*(uint *)((long)in_RSI + 0x14) * 0x10 + lVar1;
  *in_RDI = lVar1;
  in_RDI[1] = lVar1;
  return;
}



/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName> >::end()
   const */

void AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::end(void)

{
  long lVar1;
  long lVar2;
  long *in_RSI;
  long *in_RDI;
  
  lVar1 = *in_RSI;
  lVar2 = (ulong)*(uint *)((long)in_RSI + 0x14) * 0x10 + lVar1;
  in_RDI[2] = lVar2;
  *in_RDI = lVar2;
  in_RDI[1] = lVar1;
  return;
}



/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName> >::last()
   const */

void AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::last(void)

{
  long lVar1;
  long lVar2;
  long *in_RSI;
  undefined1 (*in_RDI) [16];
  
  if (*(uint *)((long)in_RSI + 0x14) != 0) {
    lVar1 = *in_RSI;
    lVar2 = (ulong)*(uint *)((long)in_RSI + 0x14) * 0x10;
    *(long *)in_RDI[1] = lVar1 + lVar2;
    *(long *)*in_RDI = lVar1 + -0x10 + lVar2;
    *(long *)(*in_RDI + 8) = lVar1;
    return;
  }
  *(undefined8 *)in_RDI[1] = 0;
  *in_RDI = (undefined1  [16])0x0;
  return;
}



/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::find(StringName const&) const */

StringName *
AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::find
          (StringName *param_1)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long *in_RDX;
  long *in_RSI;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  
  lVar4 = *in_RSI;
  if (lVar4 == 0) {
LAB_0010bf1e:
    lVar4 = 0;
  }
  else {
    if (*in_RDX == 0) {
      uVar3 = StringName::get_empty_hash();
      lVar4 = *in_RSI;
      if (lVar4 == 0) goto LAB_0010bf1e;
      uVar6 = 1;
      if (uVar3 != 0) {
        uVar6 = uVar3;
      }
    }
    else {
      uVar6 = *(uint *)(*in_RDX + 0x20);
      if (uVar6 == 0) {
        uVar6 = 1;
      }
    }
    uVar3 = *(uint *)(in_RSI + 2);
    uVar2 = uVar3 & uVar6;
    uVar1 = *(ulong *)(in_RSI[1] + (ulong)uVar2 * 8);
    if ((uVar6 == (uint)uVar1) &&
       (plVar7 = (long *)((uVar1 >> 0x20) * 0x10 + lVar4), *plVar7 == *in_RDX)) {
LAB_0010bee9:
      uVar3 = *(uint *)((long)in_RSI + 0x14);
      *(long **)param_1 = plVar7;
      *(long *)(param_1 + 8) = lVar4;
      *(ulong *)(param_1 + 0x10) = (ulong)uVar3 * 0x10 + lVar4;
      return param_1;
    }
    if (uVar1 != 0) {
      uVar5 = 1;
      while( true ) {
        uVar2 = uVar2 + 1 & uVar3;
        uVar1 = *(ulong *)(in_RSI[1] + (ulong)uVar2 * 8);
        if (((uint)uVar1 == uVar6) &&
           (plVar7 = (long *)((uVar1 >> 0x20) * 0x10 + lVar4), *plVar7 == *in_RDX))
        goto LAB_0010bee9;
        if ((uVar1 == 0) || ((((uVar3 + 1) - ((uint)uVar1 & uVar3)) + uVar2 & uVar3) < uVar5))
        break;
        uVar5 = uVar5 + 1;
      }
    }
  }
  uVar3 = *(uint *)((long)in_RSI + 0x14);
  *(long *)(param_1 + 8) = lVar4;
  lVar4 = (ulong)uVar3 * 0x10 + lVar4;
  *(long *)param_1 = lVar4;
  *(long *)(param_1 + 0x10) = lVar4;
  return param_1;
}



/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::operator[](StringName const&) const */

long * __thiscall
AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::operator[]
          (AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *this,
          StringName *param_1)

{
  ulong uVar1;
  code *pcVar2;
  uint uVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  
  lVar6 = *(long *)this;
  if (lVar6 != 0) {
    if (*(long *)param_1 == 0) {
      uVar3 = StringName::get_empty_hash();
      lVar6 = *(long *)this;
      if (lVar6 == 0) goto LAB_0010c070;
      uVar8 = 1;
      if (uVar3 != 0) {
        uVar8 = uVar3;
      }
    }
    else {
      uVar8 = *(uint *)(*(long *)param_1 + 0x20);
      if (uVar8 == 0) {
        uVar8 = 1;
      }
    }
    uVar3 = *(uint *)(this + 0x10);
    uVar5 = uVar3 & uVar8;
    uVar1 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar5 * 8);
    if ((uVar8 == (uint)uVar1) &&
       (plVar4 = (long *)((uVar1 >> 0x20) * 0x10 + lVar6), *plVar4 == *(long *)param_1)) {
LAB_0010c042:
      return plVar4 + 1;
    }
    if (uVar1 != 0) {
      uVar7 = 1;
      while( true ) {
        uVar5 = uVar5 + 1 & uVar3;
        uVar1 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar5 * 8);
        if (((uint)uVar1 == uVar8) &&
           (plVar4 = (long *)((uVar1 >> 0x20) * 0x10 + lVar6), *plVar4 == *(long *)param_1))
        goto LAB_0010c042;
        if ((uVar1 == 0) || ((((uVar3 + 1) - ((uint)uVar1 & uVar3)) + uVar5 & uVar3) < uVar7))
        break;
        uVar7 = uVar7 + 1;
      }
    }
  }
LAB_0010c070:
  _err_print_error("operator[]","core/templates/a_hash_map.h",0x24e,
                   "FATAL: Condition \"!exists\" is true.",0,0);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::operator[](StringName const&) */

long * __thiscall
AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::operator[]
          (AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *this,
          StringName *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  long *plVar5;
  uint uVar6;
  uint uVar7;
  long in_FS_OFFSET;
  int local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)param_1 == 0) {
    uVar4 = StringName::get_empty_hash();
  }
  else {
    uVar4 = *(uint *)(*(long *)param_1 + 0x20);
  }
  lVar2 = *(long *)this;
  if (uVar4 == 0) {
    uVar4 = 1;
  }
  if (lVar2 != 0) {
    uVar1 = *(uint *)(this + 0x10);
    uVar6 = uVar1 & uVar4;
    uVar3 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar6 * 8);
    if ((uVar4 == (uint)uVar3) &&
       (plVar5 = (long *)((uVar3 >> 0x20) * 0x10 + lVar2), *plVar5 == *(long *)param_1))
    goto LAB_0010c188;
    if (uVar3 != 0) {
      uVar7 = 1;
      while( true ) {
        uVar6 = uVar6 + 1 & uVar1;
        uVar3 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar6 * 8);
        if (((uint)uVar3 == uVar4) &&
           (plVar5 = (long *)((uVar3 >> 0x20) * 0x10 + lVar2), *plVar5 == *(long *)param_1))
        goto LAB_0010c188;
        if ((uVar3 == 0) || ((((uVar1 + 1) - ((uint)uVar3 & uVar1)) + uVar6 & uVar1) < uVar7))
        break;
        uVar7 = uVar7 + 1;
      }
    }
  }
  local_34 = 0;
  uVar4 = _insert_element(this,param_1,&local_34,uVar4);
  plVar5 = (long *)((ulong)uVar4 * 0x10 + *(long *)this);
LAB_0010c188:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return plVar5 + 1;
}



/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::insert(StringName const&, int const&) */

StringName *
AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
          (StringName *param_1,int *param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  int *in_RCX;
  StringName *in_RDX;
  uint uVar5;
  long lVar6;
  long *plVar7;
  
  if (*(long *)in_RDX == 0) {
    uVar4 = StringName::get_empty_hash();
  }
  else {
    uVar4 = *(uint *)(*(long *)in_RDX + 0x20);
  }
  lVar6 = *(long *)param_2;
  if (uVar4 == 0) {
    uVar4 = 1;
  }
  if (lVar6 != 0) {
    uVar1 = param_2[4];
    uVar3 = uVar1 & uVar4;
    uVar2 = *(ulong *)(*(long *)(param_2 + 2) + (ulong)uVar3 * 8);
    if ((uVar4 == (uint)uVar2) &&
       (plVar7 = (long *)((uVar2 >> 0x20) * 0x10 + lVar6), *plVar7 == *(long *)in_RDX)) {
LAB_0010c2e2:
      *(int *)(plVar7 + 1) = *in_RCX;
      goto LAB_0010c2ea;
    }
    if (uVar2 != 0) {
      uVar5 = 1;
      while( true ) {
        uVar3 = uVar3 + 1 & uVar1;
        uVar2 = *(ulong *)(*(long *)(param_2 + 2) + (ulong)uVar3 * 8);
        if (((uint)uVar2 == uVar4) &&
           (plVar7 = (long *)((uVar2 >> 0x20) * 0x10 + lVar6), *plVar7 == *(long *)in_RDX))
        goto LAB_0010c2e2;
        if ((uVar2 == 0) || ((((uVar1 + 1) - ((uint)uVar2 & uVar1)) + uVar3 & uVar1) < uVar5))
        break;
        uVar5 = uVar5 + 1;
      }
    }
  }
  uVar4 = _insert_element((AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
                           *)param_2,in_RDX,in_RCX,uVar4);
  lVar6 = *(long *)param_2;
  plVar7 = (long *)((ulong)uVar4 * 0x10 + lVar6);
LAB_0010c2ea:
  uVar4 = param_2[5];
  *(long **)param_1 = plVar7;
  *(long *)(param_1 + 8) = lVar6;
  *(ulong *)(param_1 + 0x10) = (ulong)uVar4 * 0x10 + lVar6;
  return param_1;
}



/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::insert_new(StringName const&, int const&) */

StringName *
AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert_new
          (StringName *param_1,int *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int *in_RCX;
  StringName *in_RDX;
  
  if (*(long *)in_RDX == 0) {
    uVar2 = StringName::get_empty_hash();
  }
  else {
    uVar2 = *(uint *)(*(long *)in_RDX + 0x20);
  }
  uVar3 = 1;
  if (uVar2 != 0) {
    uVar3 = uVar2;
  }
  uVar2 = _insert_element((AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
                           *)param_2,in_RDX,in_RCX,uVar3);
  lVar1 = *(long *)param_2;
  *(ulong *)(param_1 + 0x10) = (ulong)(uint)param_2[5] * 0x10 + lVar1;
  *(ulong *)param_1 = (ulong)uVar2 * 0x10 + lVar1;
  *(long *)(param_1 + 8) = lVar1;
  return param_1;
}



/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::get_elements_ptr() */

undefined8 __thiscall
AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::get_elements_ptr
          (AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *this)

{
  return *(undefined8 *)this;
}



/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::get_index(StringName const&) */

ulong __thiscall
AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::get_index
          (AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *this,
          StringName *param_1)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  
  lVar4 = *(long *)this;
  if (lVar4 != 0) {
    if (*(long *)param_1 == 0) {
      uVar2 = StringName::get_empty_hash();
      lVar4 = *(long *)this;
      if (lVar4 == 0) {
        return 0xffffffff;
      }
      uVar6 = 1;
      if (uVar2 != 0) {
        uVar6 = uVar2;
      }
    }
    else {
      uVar6 = *(uint *)(*(long *)param_1 + 0x20);
      if (uVar6 == 0) {
        uVar6 = 1;
      }
    }
    uVar2 = *(uint *)(this + 0x10);
    uVar3 = uVar2 & uVar6;
    uVar1 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar3 * 8);
    if ((uVar6 == (uint)uVar1) && (*(long *)(lVar4 + (uVar1 >> 0x20) * 0x10) == *(long *)param_1)) {
      return uVar1 >> 0x20;
    }
    if (uVar1 != 0) {
      uVar5 = 1;
      while( true ) {
        uVar3 = uVar3 + 1 & uVar2;
        uVar1 = *(ulong *)(*(long *)(this + 8) + (ulong)uVar3 * 8);
        if (((uint)uVar1 == uVar6) &&
           (*(long *)(lVar4 + (uVar1 >> 0x20) * 0x10) == *(long *)param_1)) {
          return uVar1 >> 0x20;
        }
        if ((uVar1 == 0) || ((((uVar2 + 1) - ((uint)uVar1 & uVar2)) + uVar3 & uVar2) < uVar5))
        break;
        uVar5 = uVar5 + 1;
      }
    }
  }
  return 0xffffffff;
}



/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::get_by_index(unsigned int) */

long __thiscall
AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::get_by_index
          (AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *this,
          uint param_1)

{
  code *pcVar1;
  
  if (param_1 < *(uint *)(this + 0x14)) {
    return (ulong)param_1 * 0x10 + *(long *)this;
  }
  _err_print_index_error
            ("get_by_index","core/templates/a_hash_map.h",0x28b,(ulong)param_1,
             (ulong)*(uint *)(this + 0x14),"p_index","num_elements","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::erase_by_index(unsigned int) */

undefined8 __thiscall
AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::erase_by_index
          (AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *this,
          uint param_1)

{
  undefined8 uVar1;
  
  if (*(uint *)(this + 0x14) <= param_1) {
    return 0;
  }
  uVar1 = erase(this,(StringName *)((ulong)param_1 * 0x10 + *(long *)this));
  return uVar1;
}



/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::AHashMap(AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   > const&) */

void __thiscall
AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::AHashMap
          (AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *this,
          AHashMap *param_1)

{
  undefined8 uVar1;
  long lVar2;
  StringName *pSVar3;
  StringName *this_00;
  ulong __n;
  long lVar4;
  
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x10) = uVar1;
  if ((int)((ulong)uVar1 >> 0x20) == 0) {
    return;
  }
  __n = (ulong)((int)uVar1 + 1) << 3;
  uVar1 = Memory::alloc_static(__n,false);
  *(undefined8 *)(this + 8) = uVar1;
  lVar2 = Memory::alloc_static
                    ((ulong)((*(uint *)(this + 0x10) + 1 >> 2 ^ *(uint *)(this + 0x10)) + 1) << 4,
                     false);
  *(long *)this = lVar2;
  if (*(int *)(this + 0x14) != 0) {
    lVar4 = 0;
    while( true ) {
      this_00 = (StringName *)(lVar2 + lVar4 * 0x10);
      pSVar3 = (StringName *)(lVar4 * 0x10 + *(long *)param_1);
      StringName::StringName(this_00,pSVar3);
      *(undefined4 *)(this_00 + 8) = *(undefined4 *)(pSVar3 + 8);
      if (*(uint *)(this + 0x14) <= (uint)(lVar4 + 1)) break;
      lVar2 = *(long *)this;
      lVar4 = lVar4 + 1;
    }
  }
  memcpy(*(void **)(this + 8),*(void **)(param_1 + 8),__n);
  return;
}



/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::AHashMap(HashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, int> > > const&) */

ulong __thiscall
AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::AHashMap
          (AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *this,
          HashMap *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uStack_28;
  
  uVar2 = *(uint *)(param_1 + 0x2c);
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  if (uVar2 == 0) {
    uStack_28 = 0;
    _err_print_error("reserve","core/templates/a_hash_map.h",0x1a2,
                     "Condition \"p_new_capacity < get_capacity()\" is true.",
                     "It is impossible to reserve less capacity than is currently available.",0);
  }
  else {
    if (uVar2 < 4) {
      uVar2 = 4;
    }
    uVar2 = uVar2 - 1 | uVar2 - 1 >> 1;
    uVar2 = uVar2 | uVar2 >> 2;
    uVar2 = uVar2 | uVar2 >> 4;
    uVar2 = uVar2 | uVar2 >> 8;
    uVar2 = uVar2 | uVar2 >> 0x10;
    uStack_28 = (ulong)uVar2;
    *(uint *)(this + 0x10) = uVar2;
  }
  for (puVar1 = *(undefined8 **)(param_1 + 0x18); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)*puVar1) {
    if (puVar1[2] == 0) {
      uVar2 = StringName::get_empty_hash();
    }
    else {
      uVar2 = *(uint *)(puVar1[2] + 0x20);
    }
    uVar3 = 1;
    if (uVar2 != 0) {
      uVar3 = uVar2;
    }
    uStack_28 = _insert_element(this,(StringName *)(puVar1 + 2),(int *)(puVar1 + 3),uVar3);
  }
  return uStack_28;
}



/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::TEMPNAMEPLACEHOLDERVALUE(AHashMap<StringName, int, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> > const&) */

void __thiscall
AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::operator=
          (AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *this,
          AHashMap *param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  long lVar3;
  StringName *pSVar4;
  StringName *this_00;
  ulong __n;
  long lVar5;
  
  if (this == (AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *)
              param_1) {
    return;
  }
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    if (*(int *)(this + 0x14) != 0) {
      lVar3 = 0;
      do {
        if ((StringName::configured != '\0') && (*(long *)(lVar3 * 0x10 + (long)pvVar1) != 0)) {
          StringName::unref();
          pvVar1 = *(void **)this;
        }
        lVar3 = lVar3 + 1;
      } while ((uint)lVar3 < *(uint *)(this + 0x14));
    }
    Memory::free_static(pvVar1,false);
    Memory::free_static(*(void **)(this + 8),false);
    *(undefined8 *)this = 0;
  }
  *(undefined8 *)(this + 0x10) = 0xf;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x10) = uVar2;
  if ((int)((ulong)uVar2 >> 0x20) == 0) {
    return;
  }
  __n = (ulong)((int)uVar2 + 1) << 3;
  uVar2 = Memory::alloc_static(__n,false);
  *(undefined8 *)(this + 8) = uVar2;
  lVar3 = Memory::alloc_static
                    ((ulong)((*(uint *)(this + 0x10) + 1 >> 2 ^ *(uint *)(this + 0x10)) + 1) << 4,
                     false);
  *(long *)this = lVar3;
  if (*(int *)(this + 0x14) != 0) {
    lVar5 = 0;
    while( true ) {
      this_00 = (StringName *)(lVar3 + lVar5 * 0x10);
      pSVar4 = (StringName *)(lVar5 * 0x10 + *(long *)param_1);
      StringName::StringName(this_00,pSVar4);
      *(undefined4 *)(this_00 + 8) = *(undefined4 *)(pSVar4 + 8);
      if (*(uint *)(this + 0x14) <= (uint)(lVar5 + 1)) break;
      lVar3 = *(long *)this;
      lVar5 = lVar5 + 1;
    }
  }
  memcpy(*(void **)(this + 8),*(void **)(param_1 + 8),__n);
  return;
}



/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::TEMPNAMEPLACEHOLDERVALUE(HashMap<StringName, int, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName, int> > >
   const&) */

void __thiscall
AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::operator=
          (AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *this,
          HashMap *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  long lVar5;
  
  pvVar3 = *(void **)this;
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x14) != 0) {
      lVar5 = 0;
      do {
        if ((StringName::configured != '\0') && (*(long *)(lVar5 * 0x10 + (long)pvVar3) != 0)) {
          StringName::unref();
          pvVar3 = *(void **)this;
        }
        lVar5 = lVar5 + 1;
      } while ((uint)lVar5 < *(uint *)(this + 0x14));
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 8),false);
    *(undefined8 *)this = 0;
  }
  *(undefined8 *)(this + 0x10) = 0xf;
  uVar2 = *(uint *)(param_1 + 0x2c);
  if (0x10 < uVar2) {
    if (*(long *)this == 0) {
      uVar2 = uVar2 - 1 | uVar2 - 1 >> 1;
      uVar2 = uVar2 | uVar2 >> 2;
      uVar2 = uVar2 | uVar2 >> 4;
      uVar2 = uVar2 | uVar2 >> 8;
      *(uint *)(this + 0x10) = uVar2 | uVar2 >> 0x10;
    }
    else {
      _resize_and_rehash(this,uVar2);
    }
  }
  for (puVar1 = *(undefined8 **)(param_1 + 0x18); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)*puVar1) {
    if (puVar1[2] == 0) {
      uVar2 = StringName::get_empty_hash();
    }
    else {
      uVar2 = *(uint *)(puVar1[2] + 0x20);
    }
    uVar4 = 1;
    if (uVar2 != 0) {
      uVar4 = uVar2;
    }
    _insert_element(this,(StringName *)(puVar1 + 2),(int *)(puVar1 + 3),uVar4);
  }
  return;
}



/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::AHashMap(unsigned int) */

void __thiscall
AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::AHashMap
          (AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *this,
          uint param_1)

{
  uint uVar1;
  
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  if (param_1 < 4) {
    param_1 = 4;
  }
  uVar1 = param_1 - 1 >> 1 | param_1 - 1;
  uVar1 = uVar1 | uVar1 >> 2;
  uVar1 = uVar1 | uVar1 >> 4;
  uVar1 = uVar1 | uVar1 >> 8;
  *(uint *)(this + 0x10) = uVar1 | uVar1 >> 0x10;
  return;
}



/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::AHashMap() */

void __thiscall
AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::AHashMap
          (AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *this)

{
  *(undefined8 *)(this + 0x10) = 0xf;
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  return;
}



/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::AHashMap(std::initializer_list<KeyValue<StringName, int> >) */

ulong AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::AHashMap
                (AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
                 *param_1,StringName *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  StringName *pSVar6;
  uint uVar7;
  long *plVar8;
  ulong uStack_38;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined1 (*) [16])param_1 = (undefined1  [16])0x0;
  uVar4 = (uint)param_3;
  if (uVar4 == 0) {
    uStack_38 = 0;
    _err_print_error("reserve","core/templates/a_hash_map.h",0x1a2,
                     "Condition \"p_new_capacity < get_capacity()\" is true.",
                     "It is impossible to reserve less capacity than is currently available.",0);
  }
  else {
    uVar3 = 4;
    if (3 < uVar4) {
      uVar3 = uVar4;
    }
    uVar4 = uVar3 - 1 | uVar3 - 1 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    uStack_38 = (ulong)uVar4;
    *(uint *)(param_1 + 0x10) = uVar4;
  }
  pSVar6 = param_2 + param_3 * 0x10;
  if (param_2 != pSVar6) {
    do {
      if (*(long *)param_2 == 0) {
        uVar4 = StringName::get_empty_hash();
      }
      else {
        uVar4 = *(uint *)(*(long *)param_2 + 0x20);
      }
      lVar1 = *(long *)param_1;
      if (uVar4 == 0) {
        uVar4 = 1;
      }
      if (lVar1 == 0) {
LAB_0010cba0:
        uStack_38 = _insert_element(param_1,param_2,(int *)(param_2 + 8),uVar4);
      }
      else {
        uVar3 = *(uint *)(param_1 + 0x10);
        uVar5 = uVar4 & uVar3;
        uVar2 = *(ulong *)(*(long *)(param_1 + 8) + (ulong)uVar5 * 8);
        if ((uVar4 != (uint)uVar2) ||
           (plVar8 = (long *)((uVar2 >> 0x20) * 0x10 + lVar1), *plVar8 != *(long *)param_2)) {
          if (uVar2 != 0) {
            uVar7 = 1;
            while( true ) {
              uVar5 = uVar5 + 1 & uVar3;
              uVar2 = *(ulong *)(*(long *)(param_1 + 8) + (ulong)uVar5 * 8);
              if ((uVar4 == (uint)uVar2) &&
                 (plVar8 = (long *)((uVar2 >> 0x20) * 0x10 + lVar1), *plVar8 == *(long *)param_2))
              goto LAB_0010cb81;
              if ((uVar2 == 0) || ((((uVar3 + 1) - ((uint)uVar2 & uVar3)) + uVar5 & uVar3) < uVar7))
              break;
              uVar7 = uVar7 + 1;
            }
          }
          goto LAB_0010cba0;
        }
LAB_0010cb81:
        uStack_38 = (ulong)*(uint *)(param_2 + 8);
        *(uint *)(plVar8 + 1) = *(uint *)(param_2 + 8);
      }
      param_2 = param_2 + 0x10;
    } while (pSVar6 != param_2);
  }
  return uStack_38;
}



/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName> >::reset()
    */

void __thiscall
AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::reset
          (AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *this)

{
  void *pvVar1;
  long lVar2;
  
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    if (*(int *)(this + 0x14) != 0) {
      lVar2 = 0;
      do {
        if ((StringName::configured != '\0') && (*(long *)(lVar2 * 0x10 + (long)pvVar1) != 0)) {
          StringName::unref();
          pvVar1 = *(void **)this;
        }
        lVar2 = lVar2 + 1;
      } while ((uint)lVar2 < *(uint *)(this + 0x14));
    }
    Memory::free_static(pvVar1,false);
    Memory::free_static(*(void **)(this + 8),false);
    *(undefined8 *)this = 0;
  }
  *(undefined8 *)(this + 0x10) = 0xf;
  return;
}



/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::~AHashMap() */

void __thiscall
AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::~AHashMap
          (AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *this)

{
  void *pvVar1;
  long lVar2;
  
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    if (*(int *)(this + 0x14) != 0) {
      lVar2 = 0;
      do {
        if ((StringName::configured != '\0') && (*(long *)(lVar2 * 0x10 + (long)pvVar1) != 0)) {
          StringName::unref();
          pvVar1 = *(void **)this;
        }
        lVar2 = lVar2 + 1;
      } while ((uint)lVar2 < *(uint *)(this + 0x14));
    }
    Memory::free_static(pvVar1,false);
    Memory::free_static(*(void **)(this + 8),false);
    return;
  }
  return;
}



/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::ConstIterator::TEMPNAMEPLACEHOLDERVALUE() const */

undefined8 __thiscall
AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::ConstIterator::
operator*(ConstIterator *this)

{
  return *(undefined8 *)this;
}



/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::ConstIterator::TEMPNAMEPLACEHOLDERVALUE() const */

undefined8 __thiscall
AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::ConstIterator::
operator->(ConstIterator *this)

{
  return *(undefined8 *)this;
}



/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::ConstIterator::TEMPNAMEPLACEHOLDERVALUE() */

ConstIterator * __thiscall
AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::ConstIterator::
operator++(ConstIterator *this)

{
  *(long *)this = *(long *)this + 0x10;
  return this;
}



/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::ConstIterator::TEMPNAMEPLACEHOLDERVALUE() */

ConstIterator * __thiscall
AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::ConstIterator::
operator--(ConstIterator *this)

{
  long lVar1;
  
  lVar1 = *(long *)this;
  *(ulong *)this = lVar1 - 0x10U;
  if (lVar1 - 0x10U < *(ulong *)(this + 8)) {
    *(undefined8 *)this = *(undefined8 *)(this + 0x10);
  }
  return this;
}



/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::ConstIterator::TEMPNAMEPLACEHOLDERVALUE(AHashMap<StringName, int, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> >::ConstIterator const&) const */

undefined8 __thiscall
AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::ConstIterator::
operator==(ConstIterator *this,ConstIterator *param_1)

{
  return CONCAT71((int7)((ulong)*(long *)param_1 >> 8),*(long *)this == *(long *)param_1);
}



/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::ConstIterator::TEMPNAMEPLACEHOLDERVALUE(AHashMap<StringName, int, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> >::ConstIterator const&) const */

undefined8 __thiscall
AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::ConstIterator::
operator!=(ConstIterator *this,ConstIterator *param_1)

{
  return CONCAT71((int7)((ulong)*(long *)param_1 >> 8),*(long *)this != *(long *)param_1);
}



/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::ConstIterator::operator bool() const */

bool __thiscall AHashMap::ConstIterator::operator_cast_to_bool(ConstIterator *this)

{
  return *(long *)this != *(long *)(this + 0x10);
}



/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::ConstIterator::ConstIterator(KeyValue<StringName, int>*, KeyValue<StringName, int>*,
   KeyValue<StringName, int>*) */

void __thiscall
AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::ConstIterator::
ConstIterator(ConstIterator *this,KeyValue *param_1,KeyValue *param_2,KeyValue *param_3)

{
  *(KeyValue **)this = param_1;
  *(KeyValue **)(this + 8) = param_2;
  *(KeyValue **)(this + 0x10) = param_3;
  return;
}



/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::ConstIterator::ConstIterator() */

void __thiscall
AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::ConstIterator::
ConstIterator(ConstIterator *this)

{
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  return;
}



/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::ConstIterator::ConstIterator(AHashMap<StringName, int, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> >::ConstIterator const&) */

void __thiscall
AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::ConstIterator::
ConstIterator(ConstIterator *this,ConstIterator *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = uVar2;
  *(undefined8 *)(this + 0x10) = uVar1;
  return;
}



/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::ConstIterator::TEMPNAMEPLACEHOLDERVALUE(AHashMap<StringName, int, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> >::ConstIterator const&) */

void __thiscall
AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::ConstIterator::
operator=(ConstIterator *this,ConstIterator *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = uVar1;
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  return;
}



/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::Iterator::TEMPNAMEPLACEHOLDERVALUE() const */

undefined8 __thiscall
AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::Iterator::
operator*(Iterator *this)

{
  return *(undefined8 *)this;
}



/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::Iterator::TEMPNAMEPLACEHOLDERVALUE() const */

undefined8 __thiscall
AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::Iterator::
operator->(Iterator *this)

{
  return *(undefined8 *)this;
}



/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::Iterator::TEMPNAMEPLACEHOLDERVALUE() */

Iterator * __thiscall
AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::Iterator::
operator++(Iterator *this)

{
  *(long *)this = *(long *)this + 0x10;
  return this;
}



/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::Iterator::TEMPNAMEPLACEHOLDERVALUE() */

Iterator * __thiscall
AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::Iterator::
operator--(Iterator *this)

{
  long lVar1;
  
  lVar1 = *(long *)this;
  *(ulong *)this = lVar1 - 0x10U;
  if (lVar1 - 0x10U < *(ulong *)(this + 8)) {
    *(undefined8 *)this = *(undefined8 *)(this + 0x10);
  }
  return this;
}



/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::Iterator::TEMPNAMEPLACEHOLDERVALUE(AHashMap<StringName, int, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> >::Iterator const&) const */

undefined8 __thiscall
AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::Iterator::
operator==(Iterator *this,Iterator *param_1)

{
  return CONCAT71((int7)((ulong)*(long *)param_1 >> 8),*(long *)this == *(long *)param_1);
}



/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::Iterator::TEMPNAMEPLACEHOLDERVALUE(AHashMap<StringName, int, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> >::Iterator const&) const */

undefined8 __thiscall
AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::Iterator::
operator!=(Iterator *this,Iterator *param_1)

{
  return CONCAT71((int7)((ulong)*(long *)param_1 >> 8),*(long *)this != *(long *)param_1);
}



/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::Iterator::operator bool() const */

bool __thiscall AHashMap::Iterator::operator_cast_to_bool(Iterator *this)

{
  return *(long *)this != *(long *)(this + 0x10);
}



/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::Iterator::Iterator(KeyValue<StringName, int>*, KeyValue<StringName, int>*,
   KeyValue<StringName, int>*) */

void __thiscall
AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::Iterator::
Iterator(Iterator *this,KeyValue *param_1,KeyValue *param_2,KeyValue *param_3)

{
  *(KeyValue **)this = param_1;
  *(KeyValue **)(this + 8) = param_2;
  *(KeyValue **)(this + 0x10) = param_3;
  return;
}



/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::Iterator::Iterator() */

void __thiscall
AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::Iterator::
Iterator(Iterator *this)

{
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  return;
}



/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::Iterator::Iterator(AHashMap<StringName, int, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> >::Iterator const&) */

void __thiscall
AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::Iterator::
Iterator(Iterator *this,Iterator *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = uVar2;
  *(undefined8 *)(this + 0x10) = uVar1;
  return;
}



/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::Iterator::TEMPNAMEPLACEHOLDERVALUE(AHashMap<StringName, int, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> >::Iterator const&) */

void __thiscall
AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::Iterator::
operator=(Iterator *this,Iterator *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = uVar1;
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  return;
}



/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::Iterator::operator AHashMap<StringName, int, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> >::ConstIterator() const */

Iterator * __thiscall AHashMap::Iterator::operator_cast_to_ConstIterator(Iterator *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *in_RSI;
  
  uVar1 = *in_RSI;
  uVar2 = in_RSI[1];
  *(undefined8 *)(this + 0x10) = in_RSI[2];
  *(undefined8 *)this = uVar1;
  *(undefined8 *)(this + 8) = uVar2;
  return this;
}



/* WARNING: Control flow encountered bad instruction data */
/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::~AHashMap() */

void __thiscall
AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::~AHashMap
          (AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::AHashMap(std::initializer_list<KeyValue<StringName, Variant> >) */

void AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
     AHashMap(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::AHashMap() */

void AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
     AHashMap(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::AHashMap(unsigned int) */

void AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
     AHashMap(uint param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::AHashMap(HashMap<StringName, Variant, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName, Variant> >
   > const&) */

void AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
     AHashMap(HashMap *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::AHashMap(AHashMap<StringName, Variant, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> > const&) */

void AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
     AHashMap(AHashMap *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::Iterator::Iterator(AHashMap<StringName, int, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> >::Iterator const&) */

void __thiscall
AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::Iterator::
Iterator(Iterator *this,Iterator *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::Iterator::Iterator(AHashMap<StringName, StringName, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> >::Iterator const&) */

void __thiscall
AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::Iterator
::Iterator(Iterator *this,Iterator *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::Iterator::Iterator() */

void __thiscall
AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::Iterator
::Iterator(Iterator *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::Iterator::Iterator(KeyValue<StringName, StringName>*, KeyValue<StringName, StringName>*,
   KeyValue<StringName, StringName>*) */

void __thiscall
AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::Iterator
::Iterator(Iterator *this,KeyValue *param_1,KeyValue *param_2,KeyValue *param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::Iterator::Iterator() */

void __thiscall
AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::Iterator::
Iterator(Iterator *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::ConstIterator::ConstIterator(AHashMap<StringName, StringName, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> >::ConstIterator const&) */

void __thiscall
AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
ConstIterator::ConstIterator(ConstIterator *this,ConstIterator *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::ConstIterator::ConstIterator() */

void __thiscall
AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
ConstIterator::ConstIterator(ConstIterator *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::ConstIterator::ConstIterator(KeyValue<StringName, StringName>*, KeyValue<StringName,
   StringName>*, KeyValue<StringName, StringName>*) */

void __thiscall
AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
ConstIterator::ConstIterator
          (ConstIterator *this,KeyValue *param_1,KeyValue *param_2,KeyValue *param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::Iterator::Iterator(KeyValue<StringName, int>*, KeyValue<StringName, int>*,
   KeyValue<StringName, int>*) */

void __thiscall
AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::Iterator::
Iterator(Iterator *this,KeyValue *param_1,KeyValue *param_2,KeyValue *param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::~AHashMap() */

void __thiscall
AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::~AHashMap
          (AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::AHashMap(std::initializer_list<KeyValue<StringName, StringName> >) */

void AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
     AHashMap(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::AHashMap() */

void AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
     AHashMap(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::AHashMap(unsigned int) */

void AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
     AHashMap(uint param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::AHashMap(HashMap<StringName, StringName, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   StringName> > > const&) */

void AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
     AHashMap(HashMap *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AHashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::AHashMap(AHashMap<StringName, StringName, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> > const&) */

void AHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
     AHashMap(AHashMap *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String>
   >::Iterator::Iterator(AHashMap<String, int, HashMapHasherDefault,
   HashMapComparatorDefault<String> >::Iterator const&) */

void __thiscall
AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::Iterator::Iterator
          (Iterator *this,Iterator *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String>
   >::Iterator::Iterator() */

void __thiscall
AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::Iterator::Iterator
          (Iterator *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String>
   >::Iterator::Iterator(KeyValue<String, int>*, KeyValue<String, int>*, KeyValue<String, int>*) */

void __thiscall
AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::Iterator::Iterator
          (Iterator *this,KeyValue *param_1,KeyValue *param_2,KeyValue *param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String>
   >::ConstIterator::ConstIterator(AHashMap<String, int, HashMapHasherDefault,
   HashMapComparatorDefault<String> >::ConstIterator const&) */

void __thiscall
AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::ConstIterator::
ConstIterator(ConstIterator *this,ConstIterator *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String>
   >::ConstIterator::ConstIterator() */

void __thiscall
AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::ConstIterator::
ConstIterator(ConstIterator *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String>
   >::ConstIterator::ConstIterator(KeyValue<String, int>*, KeyValue<String, int>*, KeyValue<String,
   int>*) */

void __thiscall
AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::ConstIterator::
ConstIterator(ConstIterator *this,KeyValue *param_1,KeyValue *param_2,KeyValue *param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String> >::~AHashMap() */

void __thiscall
AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::~AHashMap
          (AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String>
   >::AHashMap(std::initializer_list<KeyValue<String, int> >) */

void AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::AHashMap(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String> >::AHashMap() */

void AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::AHashMap(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String> >::AHashMap(unsigned
   int) */

void AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::AHashMap
               (uint param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String>
   >::AHashMap(HashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, int> > > const&) */

void AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::AHashMap
               (HashMap *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String>
   >::AHashMap(AHashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String> >
   const&) */

void AHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>>::AHashMap
               (AHashMap *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::ConstIterator::ConstIterator(AHashMap<StringName, int, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> >::ConstIterator const&) */

void __thiscall
AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::ConstIterator::
ConstIterator(ConstIterator *this,ConstIterator *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::ConstIterator::ConstIterator() */

void __thiscall
AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::ConstIterator::
ConstIterator(ConstIterator *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::ConstIterator::ConstIterator(KeyValue<StringName, int>*, KeyValue<StringName, int>*,
   KeyValue<StringName, int>*) */

void __thiscall
AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::ConstIterator::
ConstIterator(ConstIterator *this,KeyValue *param_1,KeyValue *param_2,KeyValue *param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int>
   >::Iterator::Iterator(AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int>
   >::Iterator const&) */

void __thiscall
AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::Iterator::Iterator
          (Iterator *this,Iterator *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int> >::Iterator::Iterator() */

void __thiscall
AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::Iterator::Iterator
          (Iterator *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int>
   >::Iterator::Iterator(KeyValue<int, int>*, KeyValue<int, int>*, KeyValue<int, int>*) */

void __thiscall
AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::Iterator::Iterator
          (Iterator *this,KeyValue *param_1,KeyValue *param_2,KeyValue *param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int>
   >::ConstIterator::ConstIterator(AHashMap<int, int, HashMapHasherDefault,
   HashMapComparatorDefault<int> >::ConstIterator const&) */

void __thiscall
AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::ConstIterator::ConstIterator
          (ConstIterator *this,ConstIterator *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int>
   >::ConstIterator::ConstIterator() */

void __thiscall
AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::ConstIterator::ConstIterator
          (ConstIterator *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int>
   >::ConstIterator::ConstIterator(KeyValue<int, int>*, KeyValue<int, int>*, KeyValue<int, int>*) */

void __thiscall
AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::ConstIterator::ConstIterator
          (ConstIterator *this,KeyValue *param_1,KeyValue *param_2,KeyValue *param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int> >::~AHashMap() */

void __thiscall
AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::~AHashMap
          (AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int>
   >::AHashMap(std::initializer_list<KeyValue<int, int> >) */

void AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::AHashMap(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int> >::AHashMap() */

void AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::AHashMap(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int> >::AHashMap(unsigned int)
    */

void AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::AHashMap(uint param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int> >::AHashMap(HashMap<int,
   int, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, int> > > const&) */

void AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::AHashMap
               (HashMap *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AHashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int> >::AHashMap(AHashMap<int,
   int, HashMapHasherDefault, HashMapComparatorDefault<int> > const&) */

void AHashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>>::AHashMap
               (AHashMap *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::~AHashMap() */

void __thiscall
AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::~AHashMap
          (AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::AHashMap(std::initializer_list<KeyValue<StringName, int> >) */

void AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::AHashMap
               (void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::AHashMap() */

void AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::AHashMap
               (void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::AHashMap(unsigned int) */

void AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::AHashMap
               (uint param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::AHashMap(HashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, int> > > const&) */

void AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::AHashMap
               (HashMap *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::AHashMap(AHashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   > const&) */

void AHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::AHashMap
               (AHashMap *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::Iterator::Iterator(AHashMap<StringName, Variant, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> >::Iterator const&) */

void __thiscall
AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::Iterator::
Iterator(Iterator *this,Iterator *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::Iterator::Iterator() */

void __thiscall
AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::Iterator::
Iterator(Iterator *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::Iterator::Iterator(KeyValue<StringName, Variant>*, KeyValue<StringName, Variant>*,
   KeyValue<StringName, Variant>*) */

void __thiscall
AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::Iterator::
Iterator(Iterator *this,KeyValue *param_1,KeyValue *param_2,KeyValue *param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::ConstIterator::ConstIterator(AHashMap<StringName, Variant, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> >::ConstIterator const&) */

void __thiscall
AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
ConstIterator::ConstIterator(ConstIterator *this,ConstIterator *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::ConstIterator::ConstIterator() */

void __thiscall
AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
ConstIterator::ConstIterator(ConstIterator *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AHashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::ConstIterator::ConstIterator(KeyValue<StringName, Variant>*, KeyValue<StringName, Variant>*,
   KeyValue<StringName, Variant>*) */

void __thiscall
AHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
ConstIterator::ConstIterator
          (ConstIterator *this,KeyValue *param_1,KeyValue *param_2,KeyValue *param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


