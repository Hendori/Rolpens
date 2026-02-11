
/* ResourceFormatLoaderJSON::handles_type(String const&) const */

void __thiscall
ResourceFormatLoaderJSON::handles_type(ResourceFormatLoaderJSON *this,String *param_1)

{
  String::operator==(param_1,"JSON");
  return;
}



/* ResourceFormatSaverJSON::recognize(Ref<Resource> const&) const */

void __thiscall ResourceFormatSaverJSON::recognize(ResourceFormatSaverJSON *this,Ref *param_1)

{
  long *plVar1;
  StringName *pSVar2;
  
  plVar1 = *(long **)param_1;
  if (plVar1[1] == 0) {
    pSVar2 = (StringName *)plVar1[0x23];
    if (pSVar2 == (StringName *)0x0) {
      pSVar2 = (StringName *)(**(code **)(*plVar1 + 0x40))(plVar1);
      StringName::operator==(pSVar2,"JSON");
      return;
    }
  }
  else {
    pSVar2 = (StringName *)(plVar1[1] + 0x20);
  }
  StringName::operator==(pSVar2,"JSON");
  return;
}



/* void call_with_validated_variant_args_retc_helper<__UnexistingClass, Variant>(__UnexistingClass*,
   Variant (__UnexistingClass::*)() const, Variant const**, Variant*, IndexSequence<>) [clone
   .isra.0] */

void call_with_validated_variant_args_retc_helper<__UnexistingClass,Variant>
               (long param_1,code *param_2,long param_3,Variant_conflict *param_4)

{
  long in_FS_OFFSET;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(code **)(param_2 + *(long *)(param_1 + param_3) + -1);
  }
  (*param_2)(local_38);
  Variant::operator=(param_4,(Variant_conflict *)local_38);
  if (Variant::needs_deinit[local_38[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HashSet<void const*, HashMapHasherDefault, HashMapComparatorDefault<void const*> >::erase(void
   const* const&) [clone .isra.0] */

void __thiscall
HashSet<void_const*,HashMapHasherDefault,HashMapComparatorDefault<void_const*>>::erase
          (HashSet<void_const*,HashMapHasherDefault,HashMapComparatorDefault<void_const*>> *this,
          void **param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  uint uVar30;
  ulong uVar31;
  uint uVar32;
  uint *puVar33;
  int iVar34;
  uint uVar35;
  long lVar36;
  ulong uVar37;
  uint *puVar38;
  ulong uVar39;
  uint *puVar40;
  ulong uVar41;
  ulong uVar42;
  uint uVar43;
  
  lVar5 = *(long *)this;
  if ((lVar5 != 0) && (*(int *)(this + 0x24) != 0)) {
    lVar6 = *(long *)(this + 0x18);
    uVar30 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x20) * 4);
    uVar41 = CONCAT44(0,uVar30);
    lVar7 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x20) * 8);
    uVar31 = (long)*param_1 * 0x3ffff - 1;
    uVar31 = (uVar31 ^ uVar31 >> 0x1f) * 0x15;
    uVar31 = (uVar31 ^ uVar31 >> 0xb) * 0x41;
    uVar31 = uVar31 >> 0x16 ^ uVar31;
    uVar39 = uVar31 & 0xffffffff;
    if ((int)uVar31 == 0) {
      uVar39 = 1;
    }
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar39 * lVar7;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar41;
    lVar36 = SUB168(auVar10 * auVar20,8);
    uVar43 = *(uint *)(lVar6 + lVar36 * 4);
    iVar34 = SUB164(auVar10 * auVar20,8);
    if (uVar43 != 0) {
      uVar32 = 0;
      do {
        if ((uint)uVar39 == uVar43) {
          lVar8 = *(long *)(this + 8);
          uVar43 = *(uint *)(lVar8 + lVar36 * 4);
          uVar31 = (ulong)uVar43;
          if (*param_1 == *(void **)(lVar5 + uVar31 * 8)) {
            lVar9 = *(long *)(this + 0x10);
            uVar32 = *(uint *)(lVar9 + uVar31 * 4);
            uVar39 = (ulong)uVar32;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = (ulong)(uVar32 + 1) * lVar7;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar41;
            lVar36 = SUB168(auVar14 * auVar24,8) * 4;
            uVar35 = SUB164(auVar14 * auVar24,8);
            uVar42 = (ulong)uVar35;
            puVar38 = (uint *)(lVar6 + lVar36);
            if ((*puVar38 == 0) ||
               (auVar15._8_8_ = 0, auVar15._0_8_ = (ulong)*puVar38 * lVar7, auVar25._8_8_ = 0,
               auVar25._0_8_ = uVar41, auVar16._8_8_ = 0,
               auVar16._0_8_ = (ulong)((uVar35 + uVar30) - SUB164(auVar15 * auVar25,8)) * lVar7,
               auVar26._8_8_ = 0, auVar26._0_8_ = uVar41, SUB164(auVar16 * auVar26,8) == 0)) {
              uVar42 = (ulong)uVar32;
            }
            else {
              while( true ) {
                puVar33 = (uint *)(lVar36 + lVar8);
                puVar3 = (uint *)(lVar8 + uVar39 * 4);
                puVar40 = (uint *)(uVar39 * 4 + lVar6);
                puVar1 = (undefined4 *)(lVar9 + (ulong)*puVar33 * 4);
                puVar2 = (undefined4 *)(lVar9 + (ulong)*puVar3 * 4);
                uVar4 = *puVar2;
                *puVar2 = *puVar1;
                *puVar1 = uVar4;
                uVar32 = *puVar38;
                *puVar38 = *puVar40;
                *puVar40 = uVar32;
                uVar32 = *puVar33;
                *puVar33 = *puVar3;
                *puVar3 = uVar32;
                auVar19._8_8_ = 0;
                auVar19._0_8_ = (ulong)((int)uVar42 + 1) * lVar7;
                auVar29._8_8_ = 0;
                auVar29._0_8_ = uVar41;
                uVar37 = SUB168(auVar19 * auVar29,8);
                lVar36 = uVar37 * 4;
                puVar38 = (uint *)(lVar6 + lVar36);
                if ((*puVar38 == 0) ||
                   (auVar17._8_8_ = 0, auVar17._0_8_ = (ulong)*puVar38 * lVar7, auVar27._8_8_ = 0,
                   auVar27._0_8_ = uVar41, auVar18._8_8_ = 0,
                   auVar18._0_8_ =
                        (ulong)((SUB164(auVar19 * auVar29,8) + uVar30) - SUB164(auVar17 * auVar27,8)
                               ) * lVar7, auVar28._8_8_ = 0, auVar28._0_8_ = uVar41,
                   SUB164(auVar18 * auVar28,8) == 0)) break;
                uVar39 = uVar42;
                uVar42 = uVar37 & 0xffffffff;
              }
            }
            *(undefined4 *)(lVar6 + uVar42 * 4) = 0;
            uVar30 = *(int *)(this + 0x24) - 1;
            *(uint *)(this + 0x24) = uVar30;
            if (uVar30 <= uVar43) {
              return;
            }
            *(undefined8 *)(lVar5 + uVar31 * 8) = *(undefined8 *)(lVar5 + (ulong)uVar30 * 8);
            lVar5 = *(long *)(this + 0x10);
            *(undefined4 *)(lVar5 + uVar31 * 4) = *(undefined4 *)(lVar5 + (ulong)uVar30 * 4);
            *(uint *)(*(long *)(this + 8) +
                     (ulong)*(uint *)(lVar5 + (ulong)*(uint *)(this + 0x24) * 4) * 4) = uVar43;
            return;
          }
        }
        uVar32 = uVar32 + 1;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = (ulong)(iVar34 + 1) * lVar7;
        auVar21._8_8_ = 0;
        auVar21._0_8_ = uVar41;
        lVar36 = SUB168(auVar11 * auVar21,8);
        uVar43 = *(uint *)(lVar6 + lVar36 * 4);
        iVar34 = SUB164(auVar11 * auVar21,8);
      } while ((uVar43 != 0) &&
              (auVar12._8_8_ = 0, auVar12._0_8_ = (ulong)uVar43 * lVar7, auVar22._8_8_ = 0,
              auVar22._0_8_ = uVar41, auVar13._8_8_ = 0,
              auVar13._0_8_ = (ulong)((uVar30 + iVar34) - SUB164(auVar12 * auVar22,8)) * lVar7,
              auVar23._8_8_ = 0, auVar23._0_8_ = uVar41, uVar32 <= SUB164(auVar13 * auVar23,8)));
    }
  }
  return;
}



/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<unsigned_char>::_copy_on_write(CowData<unsigned_char> *this)

{
  long *plVar1;
  size_t __n;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  __n = *(size_t *)(*(long *)this + -8);
  uVar5 = 0x10;
  if (__n != 0) {
    uVar5 = __n - 1 | __n - 1 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 1;
    puVar4[1] = __n;
    memcpy(puVar4 + 2,*(void **)this,__n);
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
    }
    *(undefined8 **)this = puVar4 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* CowData<Vector3>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Vector3>::_copy_on_write(CowData<Vector3> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  size_t __n;
  ulong uVar5;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar5 = 0x10;
  __n = lVar2 * 0xc;
  if (__n != 0) {
    uVar5 = __n - 1 | __n - 1 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 1;
    puVar4[1] = lVar2;
    memcpy(puVar4 + 2,*(void **)this,__n);
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
    }
    *(undefined8 **)this = puVar4 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* CowData<Vector2>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Vector2>::_copy_on_write(CowData<Vector2> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  size_t __n;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar5 = 0x10;
  __n = lVar2 * 8;
  if (__n != 0) {
    uVar5 = __n - 1 | __n - 1 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 1;
    puVar4[1] = lVar2;
    memcpy(puVar4 + 2,*(void **)this,__n);
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
    }
    *(undefined8 **)this = puVar4 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* CowData<int>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<int>::_copy_on_write(CowData<int> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  size_t __n;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar5 = 0x10;
  __n = lVar2 * 4;
  if (__n != 0) {
    uVar5 = __n - 1 | __n - 1 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 1;
    puVar4[1] = lVar2;
    memcpy(puVar4 + 2,*(void **)this,__n);
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
    }
    *(undefined8 **)this = puVar4 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* CowData<long>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<long>::_copy_on_write(CowData<long> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  size_t __n;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar5 = 0x10;
  __n = lVar2 * 8;
  if (__n != 0) {
    uVar5 = __n - 1 | __n - 1 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 1;
    puVar4[1] = lVar2;
    memcpy(puVar4 + 2,*(void **)this,__n);
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
    }
    *(undefined8 **)this = puVar4 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* CowData<Color>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Color>::_copy_on_write(CowData<Color> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  size_t __n;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar5 = 0x10;
  __n = lVar2 * 0x10;
  if (__n != 0) {
    uVar5 = __n - 1 | __n - 1 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 1;
    puVar4[1] = lVar2;
    memcpy(puVar4 + 2,*(void **)this,__n);
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
    }
    *(undefined8 **)this = puVar4 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* CowData<double>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<double>::_copy_on_write(CowData<double> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  size_t __n;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar5 = 0x10;
  __n = lVar2 * 8;
  if (__n != 0) {
    uVar5 = __n - 1 | __n - 1 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 1;
    puVar4[1] = lVar2;
    memcpy(puVar4 + 2,*(void **)this,__n);
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
    }
    *(undefined8 **)this = puVar4 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* CowData<float>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<float>::_copy_on_write(CowData<float> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  size_t __n;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar5 = 0x10;
  __n = lVar2 * 4;
  if (__n != 0) {
    uVar5 = __n - 1 | __n - 1 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 1;
    puVar4[1] = lVar2;
    memcpy(puVar4 + 2,*(void **)this,__n);
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
    }
    *(undefined8 **)this = puVar4 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* CowData<Vector4>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Vector4>::_copy_on_write(CowData<Vector4> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  size_t __n;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar5 = 0x10;
  __n = lVar2 * 0x10;
  if (__n != 0) {
    uVar5 = __n - 1 | __n - 1 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 1;
    puVar4[1] = lVar2;
    memcpy(puVar4 + 2,*(void **)this,__n);
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
    }
    *(undefined8 **)this = puVar4 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



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



/* JSON::get_parsed_text() const */

void JSON::get_parsed_text(void)

{
  long in_RSI;
  CowData<char32_t> *in_RDI;
  
  *(undefined8 *)in_RDI = 0;
  if (*(long *)(in_RSI + 0x240) != 0) {
    CowData<char32_t>::_ref(in_RDI,(CowData *)(in_RSI + 0x240));
  }
  return;
}



/* ResourceFormatLoaderJSON::get_resource_type(String const&) const */

String * ResourceFormatLoaderJSON::get_resource_type(String *param_1)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  char cVar4;
  long in_FS_OFFSET;
  long local_40;
  undefined *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  String::get_extension();
  String::to_lower();
  puVar3 = local_38;
  if (local_38 != (undefined *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_38 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_38 = (undefined *)0x0;
      Memory::free_static((void *)((long)puVar3 + -0x10),false);
    }
  }
  cVar4 = String::operator==((String *)&local_40,"json");
  *(undefined8 *)param_1 = 0;
  if (cVar4 == '\0') {
    local_30 = 0;
    local_38 = &_LC2;
    String::parse_latin1((StrRange *)param_1);
  }
  else {
    local_30 = 4;
    local_38 = &_LC0;
    String::parse_latin1((StrRange *)param_1);
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceFormatLoaderJSON::get_recognized_extensions(List<String, DefaultAllocator>*) const */

void __thiscall
ResourceFormatLoaderJSON::get_recognized_extensions(ResourceFormatLoaderJSON *this,List *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  CowData<char32_t> *this_00;
  undefined1 (*pauVar4) [16];
  long in_FS_OFFSET;
  long local_40;
  undefined *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_38 = &_LC26;
  local_30 = 4;
  String::parse_latin1((StrRange *)&local_40);
  if (*(long *)param_1 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  this_00 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
  *(undefined1 (*) [16])this_00 = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x10) = (undefined1  [16])0x0;
  if (local_40 != 0) {
    CowData<char32_t>::_ref(this_00,(CowData *)&local_40);
  }
  lVar3 = local_40;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(this_00 + 8) = 0;
  *(long **)(this_00 + 0x18) = plVar1;
  *(long *)(this_00 + 0x10) = lVar2;
  if (lVar2 != 0) {
    *(CowData<char32_t> **)(lVar2 + 8) = this_00;
  }
  plVar1[1] = (long)this_00;
  if (*plVar1 == 0) {
    *plVar1 = (long)this_00;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceFormatSaverJSON::get_recognized_extensions(Ref<Resource> const&, List<String,
   DefaultAllocator>*) const */

void __thiscall
ResourceFormatSaverJSON::get_recognized_extensions
          (ResourceFormatSaverJSON *this,Ref *param_1,List *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  Object *pOVar5;
  CowData<char32_t> *this_00;
  undefined1 (*pauVar6) [16];
  long in_FS_OFFSET;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*(long *)param_1 != 0) &&
      (pOVar5 = (Object *)__dynamic_cast(*(long *)param_1,&Object::typeinfo,&JSON::typeinfo,0),
      pOVar5 != (Object *)0x0)) && (cVar4 = RefCounted::reference(), cVar4 != '\0')) {
    local_50 = 0;
    local_48 = &_LC26;
    local_40 = 4;
    String::parse_latin1((StrRange *)&local_50);
    if (*(long *)param_2 == 0) {
      pauVar6 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined1 (**) [16])param_2 = pauVar6;
      *(undefined4 *)pauVar6[1] = 0;
      *pauVar6 = (undefined1  [16])0x0;
    }
    this_00 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
    *(undefined1 (*) [16])this_00 = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this_00 + 0x10) = (undefined1  [16])0x0;
    if (local_50 != 0) {
      CowData<char32_t>::_ref(this_00,(CowData *)&local_50);
    }
    lVar3 = local_50;
    plVar1 = *(long **)param_2;
    lVar2 = plVar1[1];
    *(undefined8 *)(this_00 + 8) = 0;
    *(long **)(this_00 + 0x18) = plVar1;
    *(long *)(this_00 + 0x10) = lVar2;
    if (lVar2 != 0) {
      *(CowData<char32_t> **)(lVar2 + 8) = this_00;
    }
    plVar1[1] = (long)this_00;
    if (*plVar1 == 0) {
      *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
      *plVar1 = (long)this_00;
      if (local_50 != 0) goto LAB_001011b4;
LAB_001011bc:
      cVar4 = RefCounted::unreference();
    }
    else {
      *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
      if (local_50 == 0) goto LAB_001011bc;
LAB_001011b4:
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_001011bc;
      local_50 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      cVar4 = RefCounted::unreference();
    }
    if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar5), cVar4 != '\0')) {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(pOVar5,false);
        return;
      }
      goto LAB_0010128b;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010128b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<unsigned_char>::resize<false>(CowData<unsigned_char> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  lVar4 = *(long *)this;
  if (lVar4 == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
LAB_00101456:
    lVar7 = 0;
    lVar4 = 0;
  }
  else {
    lVar7 = *(long *)(lVar4 + -8);
    if (param_1 == lVar7) {
      return;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar4 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return;
      }
      lVar4 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
      return;
    }
    _copy_on_write(this);
    if (lVar7 == 0) goto LAB_00101456;
    uVar3 = lVar7 - 1U | lVar7 - 1U >> 1;
    uVar3 = uVar3 | uVar3 >> 2;
    uVar3 = uVar3 | uVar3 >> 4;
    uVar3 = uVar3 | uVar3 >> 8;
    uVar3 = uVar3 | uVar3 >> 0x10;
    lVar4 = (uVar3 | uVar3 >> 0x20) + 1;
  }
  uVar3 = param_1 - 1U | param_1 - 1U >> 1;
  uVar3 = uVar3 | uVar3 >> 2;
  uVar3 = uVar3 | uVar3 >> 4;
  uVar3 = uVar3 | uVar3 >> 8;
  uVar3 = uVar3 | uVar3 >> 0x10;
  uVar3 = uVar3 | uVar3 >> 0x20;
  if (param_1 <= lVar7) {
    puVar5 = *(undefined8 **)this;
    if (uVar3 + 1 == lVar4) {
      if (puVar5 == (undefined8 *)0x0) {
        _DAT_00000000 = 0;
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    else {
      puVar6 = (undefined8 *)Memory::realloc_static(puVar5 + -2,uVar3 + 0x11,false);
      if (puVar6 == (undefined8 *)0x0) {
LAB_001014b0:
        _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,
                         "Parameter \"mem_new\" is null.",0,0);
        return;
      }
      puVar5 = puVar6 + 2;
      *puVar6 = 1;
      *(undefined8 **)this = puVar5;
    }
    puVar5[-1] = param_1;
    return;
  }
  if (uVar3 + 1 == lVar4) {
    puVar5 = *(undefined8 **)this;
    if (puVar5 == (undefined8 *)0x0) {
      FUN_001124c8();
      return;
    }
  }
  else {
    if (lVar7 == 0) {
      puVar5 = (undefined8 *)Memory::alloc_static(uVar3 + 0x11,false);
      if (puVar5 == (undefined8 *)0x0) {
        _err_print_error("resize","./core/templates/cowdata.h",0x171,
                         "Parameter \"mem_new\" is null.",0,0);
        return;
      }
      *puVar5 = 1;
      puVar5[1] = 0;
    }
    else {
      puVar5 = (undefined8 *)
               Memory::realloc_static((void *)(*(long *)this + -0x10),uVar3 + 0x11,false);
      if (puVar5 == (undefined8 *)0x0) goto LAB_001014b0;
      *puVar5 = 1;
    }
    puVar5 = puVar5 + 2;
    *(undefined8 **)this = puVar5;
  }
  puVar5[-1] = param_1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<double>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<double>::resize<false>(CowData<double> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  char *pcVar7;
  undefined8 uVar8;
  CowData<double> *pCVar9;
  long lVar10;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  lVar3 = *(long *)this;
  pCVar9 = this;
  if (lVar3 == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
    lVar10 = 0;
    lVar3 = 0;
  }
  else {
    lVar10 = *(long *)(lVar3 + -8);
    if (param_1 == lVar10) {
      return;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar3 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return;
      }
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return;
    }
    _copy_on_write(this);
    lVar3 = lVar10 * 8;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 != 0) {
    uVar4 = param_1 * 8 - 1;
    uVar4 = uVar4 | uVar4 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    uVar4 = uVar4 | uVar4 >> 0x20;
    if (uVar4 != 0xffffffffffffffff) {
      if (param_1 <= lVar10) {
        puVar5 = *(undefined8 **)this;
        if (uVar4 + 1 == lVar3) {
          if (puVar5 == (undefined8 *)0x0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
        }
        else {
          puVar6 = (undefined8 *)Memory::realloc_static(puVar5 + -2,uVar4 + 0x11,false);
          if (puVar6 == (undefined8 *)0x0) {
LAB_00101780:
            _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,
                             "Parameter \"mem_new\" is null.",0,0);
            return;
          }
          puVar5 = puVar6 + 2;
          *puVar6 = 1;
          *(undefined8 **)this = puVar5;
        }
        puVar5[-1] = param_1;
        return;
      }
      if (uVar4 + 1 == lVar3) {
        puVar5 = *(undefined8 **)this;
        if (puVar5 == (undefined8 *)0x0) {
          resize<false>((long)pCVar9);
          return;
        }
      }
      else {
        if (lVar10 == 0) {
          puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
          if (puVar5 == (undefined8 *)0x0) {
            uVar8 = 0x171;
            pcVar7 = "Parameter \"mem_new\" is null.";
            goto LAB_00101762;
          }
          *puVar5 = 1;
          puVar5[1] = 0;
        }
        else {
          puVar5 = (undefined8 *)
                   Memory::realloc_static((void *)(*(long *)this + -0x10),uVar4 + 0x11,false);
          if (puVar5 == (undefined8 *)0x0) goto LAB_00101780;
          *puVar5 = 1;
        }
        puVar5 = puVar5 + 2;
        *(undefined8 **)this = puVar5;
      }
      puVar5[-1] = param_1;
      return;
    }
  }
  uVar8 = 0x16a;
  pcVar7 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
LAB_00101762:
  _err_print_error("resize","./core/templates/cowdata.h",uVar8,pcVar7,0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<long>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<long>::resize<false>(CowData<long> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  char *pcVar7;
  undefined8 uVar8;
  CowData<long> *pCVar9;
  long lVar10;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  lVar3 = *(long *)this;
  pCVar9 = this;
  if (lVar3 == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
    lVar10 = 0;
    lVar3 = 0;
  }
  else {
    lVar10 = *(long *)(lVar3 + -8);
    if (param_1 == lVar10) {
      return;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar3 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return;
      }
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return;
    }
    _copy_on_write(this);
    lVar3 = lVar10 * 8;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 != 0) {
    uVar4 = param_1 * 8 - 1;
    uVar4 = uVar4 | uVar4 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    uVar4 = uVar4 | uVar4 >> 0x20;
    if (uVar4 != 0xffffffffffffffff) {
      if (param_1 <= lVar10) {
        puVar5 = *(undefined8 **)this;
        if (uVar4 + 1 == lVar3) {
          if (puVar5 == (undefined8 *)0x0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
        }
        else {
          puVar6 = (undefined8 *)Memory::realloc_static(puVar5 + -2,uVar4 + 0x11,false);
          if (puVar6 == (undefined8 *)0x0) {
LAB_00101a30:
            _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,
                             "Parameter \"mem_new\" is null.",0,0);
            return;
          }
          puVar5 = puVar6 + 2;
          *puVar6 = 1;
          *(undefined8 **)this = puVar5;
        }
        puVar5[-1] = param_1;
        return;
      }
      if (uVar4 + 1 == lVar3) {
        puVar5 = *(undefined8 **)this;
        if (puVar5 == (undefined8 *)0x0) {
          resize<false>((long)pCVar9);
          return;
        }
      }
      else {
        if (lVar10 == 0) {
          puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
          if (puVar5 == (undefined8 *)0x0) {
            uVar8 = 0x171;
            pcVar7 = "Parameter \"mem_new\" is null.";
            goto LAB_00101a12;
          }
          *puVar5 = 1;
          puVar5[1] = 0;
        }
        else {
          puVar5 = (undefined8 *)
                   Memory::realloc_static((void *)(*(long *)this + -0x10),uVar4 + 0x11,false);
          if (puVar5 == (undefined8 *)0x0) goto LAB_00101a30;
          *puVar5 = 1;
        }
        puVar5 = puVar5 + 2;
        *(undefined8 **)this = puVar5;
      }
      puVar5[-1] = param_1;
      return;
    }
  }
  uVar8 = 0x16a;
  pcVar7 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
LAB_00101a12:
  _err_print_error("resize","./core/templates/cowdata.h",uVar8,pcVar7,0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<int>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<int>::resize<false>(CowData<int> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  char *pcVar7;
  undefined8 uVar8;
  CowData<int> *pCVar9;
  long lVar10;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  lVar3 = *(long *)this;
  pCVar9 = this;
  if (lVar3 == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
    lVar10 = 0;
    lVar3 = 0;
  }
  else {
    lVar10 = *(long *)(lVar3 + -8);
    if (param_1 == lVar10) {
      return;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar3 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return;
      }
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return;
    }
    _copy_on_write(this);
    lVar3 = lVar10 * 4;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 4 != 0) {
    uVar4 = param_1 * 4 - 1;
    uVar4 = uVar4 | uVar4 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    uVar4 = uVar4 | uVar4 >> 0x20;
    if (uVar4 != 0xffffffffffffffff) {
      if (param_1 <= lVar10) {
        puVar5 = *(undefined8 **)this;
        if (uVar4 + 1 == lVar3) {
          if (puVar5 == (undefined8 *)0x0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
        }
        else {
          puVar6 = (undefined8 *)Memory::realloc_static(puVar5 + -2,uVar4 + 0x11,false);
          if (puVar6 == (undefined8 *)0x0) {
LAB_00101ce0:
            _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,
                             "Parameter \"mem_new\" is null.",0,0);
            return;
          }
          puVar5 = puVar6 + 2;
          *puVar6 = 1;
          *(undefined8 **)this = puVar5;
        }
        puVar5[-1] = param_1;
        return;
      }
      if (uVar4 + 1 == lVar3) {
        puVar5 = *(undefined8 **)this;
        if (puVar5 == (undefined8 *)0x0) {
          resize<false>((long)pCVar9);
          return;
        }
      }
      else {
        if (lVar10 == 0) {
          puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
          if (puVar5 == (undefined8 *)0x0) {
            uVar8 = 0x171;
            pcVar7 = "Parameter \"mem_new\" is null.";
            goto LAB_00101cc2;
          }
          *puVar5 = 1;
          puVar5[1] = 0;
        }
        else {
          puVar5 = (undefined8 *)
                   Memory::realloc_static((void *)(*(long *)this + -0x10),uVar4 + 0x11,false);
          if (puVar5 == (undefined8 *)0x0) goto LAB_00101ce0;
          *puVar5 = 1;
        }
        puVar5 = puVar5 + 2;
        *(undefined8 **)this = puVar5;
      }
      puVar5[-1] = param_1;
      return;
    }
  }
  uVar8 = 0x16a;
  pcVar7 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
LAB_00101cc2:
  _err_print_error("resize","./core/templates/cowdata.h",uVar8,pcVar7,0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<float>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<float>::resize<false>(CowData<float> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  char *pcVar7;
  undefined8 uVar8;
  CowData<float> *pCVar9;
  long lVar10;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  lVar3 = *(long *)this;
  pCVar9 = this;
  if (lVar3 == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
    lVar10 = 0;
    lVar3 = 0;
  }
  else {
    lVar10 = *(long *)(lVar3 + -8);
    if (param_1 == lVar10) {
      return;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar3 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return;
      }
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return;
    }
    _copy_on_write(this);
    lVar3 = lVar10 * 4;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 4 != 0) {
    uVar4 = param_1 * 4 - 1;
    uVar4 = uVar4 | uVar4 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    uVar4 = uVar4 | uVar4 >> 0x20;
    if (uVar4 != 0xffffffffffffffff) {
      if (param_1 <= lVar10) {
        puVar5 = *(undefined8 **)this;
        if (uVar4 + 1 == lVar3) {
          if (puVar5 == (undefined8 *)0x0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
        }
        else {
          puVar6 = (undefined8 *)Memory::realloc_static(puVar5 + -2,uVar4 + 0x11,false);
          if (puVar6 == (undefined8 *)0x0) {
LAB_00101f90:
            _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,
                             "Parameter \"mem_new\" is null.",0,0);
            return;
          }
          puVar5 = puVar6 + 2;
          *puVar6 = 1;
          *(undefined8 **)this = puVar5;
        }
        puVar5[-1] = param_1;
        return;
      }
      if (uVar4 + 1 == lVar3) {
        puVar5 = *(undefined8 **)this;
        if (puVar5 == (undefined8 *)0x0) {
          resize<false>((long)pCVar9);
          return;
        }
      }
      else {
        if (lVar10 == 0) {
          puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
          if (puVar5 == (undefined8 *)0x0) {
            uVar8 = 0x171;
            pcVar7 = "Parameter \"mem_new\" is null.";
            goto LAB_00101f72;
          }
          *puVar5 = 1;
          puVar5[1] = 0;
        }
        else {
          puVar5 = (undefined8 *)
                   Memory::realloc_static((void *)(*(long *)this + -0x10),uVar4 + 0x11,false);
          if (puVar5 == (undefined8 *)0x0) goto LAB_00101f90;
          *puVar5 = 1;
        }
        puVar5 = puVar5 + 2;
        *(undefined8 **)this = puVar5;
      }
      puVar5[-1] = param_1;
      return;
    }
  }
  uVar8 = 0x16a;
  pcVar7 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
LAB_00101f72:
  _err_print_error("resize","./core/templates/cowdata.h",uVar8,pcVar7,0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<Vector2>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<Vector2>::resize<false>(CowData<Vector2> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  char *pcVar9;
  long lVar10;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  lVar3 = *(long *)this;
  if (lVar3 == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
    lVar10 = 0;
    lVar3 = 0;
  }
  else {
    lVar10 = *(long *)(lVar3 + -8);
    if (param_1 == lVar10) {
      return;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar3 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return;
      }
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return;
    }
    _copy_on_write(this);
    lVar3 = lVar10 * 8;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 != 0) {
    uVar4 = param_1 * 8 - 1;
    uVar4 = uVar4 | uVar4 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    uVar4 = uVar4 | uVar4 >> 0x20;
    if (uVar4 != 0xffffffffffffffff) {
      if (param_1 <= lVar10) {
        puVar8 = *(undefined8 **)this;
        if (uVar4 + 1 == lVar3) {
          if (puVar8 == (undefined8 *)0x0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
LAB_00102132:
          puVar8[-1] = param_1;
          return;
        }
        puVar5 = (undefined8 *)Memory::realloc_static(puVar8 + -2,uVar4 + 0x11,false);
        if (puVar5 != (undefined8 *)0x0) {
          puVar8 = puVar5 + 2;
          *puVar5 = 1;
          *(undefined8 **)this = puVar8;
          goto LAB_00102132;
        }
LAB_00102290:
        pcVar6 = "Parameter \"mem_new\" is null.";
        uVar7 = 0x1a9;
        pcVar9 = "_realloc";
        goto LAB_00102278;
      }
      if (uVar4 + 1 == lVar3) {
        puVar8 = *(undefined8 **)this;
        if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        lVar3 = puVar8[-1];
LAB_001021a1:
        if (param_1 <= lVar3) goto LAB_0010210d;
      }
      else {
        if (lVar10 != 0) {
          puVar5 = (undefined8 *)
                   Memory::realloc_static((void *)(*(long *)this + -0x10),uVar4 + 0x11,false);
          if (puVar5 == (undefined8 *)0x0) goto LAB_00102290;
          puVar8 = puVar5 + 2;
          *puVar5 = 1;
          *(undefined8 **)this = puVar8;
          lVar3 = puVar5[1];
          goto LAB_001021a1;
        }
        puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
        if (puVar5 == (undefined8 *)0x0) {
          pcVar6 = "Parameter \"mem_new\" is null.";
          uVar7 = 0x171;
          pcVar9 = "resize";
          goto LAB_00102278;
        }
        puVar8 = puVar5 + 2;
        *puVar5 = 1;
        puVar5[1] = 0;
        *(undefined8 **)this = puVar8;
        lVar3 = 0;
      }
      memset(puVar8 + lVar3,0,(param_1 - lVar3) * 8);
LAB_0010210d:
      puVar8[-1] = param_1;
      return;
    }
  }
  pcVar6 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
  uVar7 = 0x16a;
  pcVar9 = "resize";
LAB_00102278:
  _err_print_error(pcVar9,"./core/templates/cowdata.h",uVar7,pcVar6,0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<Vector3>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<Vector3>::resize<false>(CowData<Vector3> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined8 *puVar3;
  char *pcVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  char *pcVar9;
  long lVar10;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  lVar5 = *(long *)this;
  if (lVar5 == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
    lVar10 = 0;
    lVar5 = 0;
  }
  else {
    lVar10 = *(long *)(lVar5 + -8);
    if (param_1 == lVar10) {
      return;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar5 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return;
      }
      lVar5 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
      return;
    }
    _copy_on_write(this);
    lVar5 = lVar10 * 0xc;
    if (lVar5 != 0) {
      uVar6 = lVar5 - 1U | lVar5 - 1U >> 1;
      uVar6 = uVar6 | uVar6 >> 2;
      uVar6 = uVar6 | uVar6 >> 4;
      uVar6 = uVar6 | uVar6 >> 8;
      uVar6 = uVar6 | uVar6 >> 0x10;
      lVar5 = (uVar6 | uVar6 >> 0x20) + 1;
    }
  }
  if (param_1 * 0xc != 0) {
    uVar6 = param_1 * 0xc - 1;
    uVar6 = uVar6 | uVar6 >> 1;
    uVar6 = uVar6 | uVar6 >> 2;
    uVar6 = uVar6 | uVar6 >> 4;
    uVar6 = uVar6 | uVar6 >> 8;
    uVar6 = uVar6 | uVar6 >> 0x10;
    uVar6 = uVar6 | uVar6 >> 0x20;
    if (uVar6 != 0xffffffffffffffff) {
      if (param_1 <= lVar10) {
        puVar8 = *(undefined8 **)this;
        if (uVar6 + 1 == lVar5) {
          if (puVar8 == (undefined8 *)0x0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
LAB_00102452:
          puVar8[-1] = param_1;
          return;
        }
        puVar3 = (undefined8 *)Memory::realloc_static(puVar8 + -2,uVar6 + 0x11,false);
        if (puVar3 != (undefined8 *)0x0) {
          puVar8 = puVar3 + 2;
          *puVar3 = 1;
          *(undefined8 **)this = puVar8;
          goto LAB_00102452;
        }
LAB_001025b0:
        pcVar4 = "Parameter \"mem_new\" is null.";
        uVar7 = 0x1a9;
        pcVar9 = "_realloc";
        goto LAB_00102598;
      }
      if (uVar6 + 1 == lVar5) {
        puVar8 = *(undefined8 **)this;
        if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        lVar5 = puVar8[-1];
LAB_001024c1:
        if (param_1 <= lVar5) goto LAB_00102427;
      }
      else {
        if (lVar10 != 0) {
          puVar3 = (undefined8 *)
                   Memory::realloc_static((void *)(*(long *)this + -0x10),uVar6 + 0x11,false);
          if (puVar3 == (undefined8 *)0x0) goto LAB_001025b0;
          puVar8 = puVar3 + 2;
          *puVar3 = 1;
          *(undefined8 **)this = puVar8;
          lVar5 = puVar3[1];
          goto LAB_001024c1;
        }
        puVar3 = (undefined8 *)Memory::alloc_static(uVar6 + 0x11,false);
        if (puVar3 == (undefined8 *)0x0) {
          pcVar4 = "Parameter \"mem_new\" is null.";
          uVar7 = 0x171;
          pcVar9 = "resize";
          goto LAB_00102598;
        }
        puVar8 = puVar3 + 2;
        *puVar3 = 1;
        puVar3[1] = 0;
        *(undefined8 **)this = puVar8;
        lVar5 = 0;
      }
      memset((void *)((long)puVar8 + lVar5 * 0xc),0,(param_1 - lVar5) * 0xc);
LAB_00102427:
      puVar8[-1] = param_1;
      return;
    }
  }
  pcVar4 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
  uVar7 = 0x16a;
  pcVar9 = "resize";
LAB_00102598:
  _err_print_error(pcVar9,"./core/templates/cowdata.h",uVar7,pcVar4,0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<Vector4>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<Vector4>::resize<false>(CowData<Vector4> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined1 (*pauVar6) [16];
  undefined8 *puVar7;
  char *pcVar8;
  undefined1 (*pauVar9) [16];
  undefined8 uVar10;
  long lVar11;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  lVar3 = *(long *)this;
  if (lVar3 == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
    lVar11 = 0;
    lVar3 = 0;
  }
  else {
    lVar11 = *(long *)(lVar3 + -8);
    if (param_1 == lVar11) {
      return;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar3 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return;
      }
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return;
    }
    _copy_on_write(this);
    lVar3 = lVar11 * 0x10;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x10 != 0) {
    uVar4 = param_1 * 0x10 - 1;
    uVar4 = uVar4 | uVar4 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    uVar4 = uVar4 | uVar4 >> 0x20;
    if (uVar4 != 0xffffffffffffffff) {
      if (param_1 <= lVar11) {
        puVar7 = *(undefined8 **)this;
        if (uVar4 + 1 == lVar3) {
          if (puVar7 == (undefined8 *)0x0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
        }
        else {
          puVar5 = (undefined8 *)Memory::realloc_static(puVar7 + -2,uVar4 + 0x11,false);
          if (puVar5 == (undefined8 *)0x0) {
LAB_001028a8:
            _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,
                             "Parameter \"mem_new\" is null.",0,0);
            return;
          }
          puVar7 = puVar5 + 2;
          *puVar5 = 1;
          *(undefined8 **)this = puVar7;
        }
        puVar7[-1] = param_1;
        return;
      }
      if (uVar4 + 1 == lVar3) {
        puVar7 = *(undefined8 **)this;
        if (puVar7 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        lVar3 = puVar7[-1];
LAB_001027d1:
        if (param_1 <= lVar3) goto LAB_0010274c;
      }
      else {
        if (lVar11 != 0) {
          puVar5 = (undefined8 *)
                   Memory::realloc_static((void *)(*(long *)this + -0x10),uVar4 + 0x11,false);
          if (puVar5 == (undefined8 *)0x0) goto LAB_001028a8;
          puVar7 = puVar5 + 2;
          *puVar5 = 1;
          *(undefined8 **)this = puVar7;
          lVar3 = puVar5[1];
          goto LAB_001027d1;
        }
        puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
        if (puVar5 == (undefined8 *)0x0) {
          uVar10 = 0x171;
          pcVar8 = "Parameter \"mem_new\" is null.";
          goto LAB_0010288a;
        }
        puVar7 = puVar5 + 2;
        *puVar5 = 1;
        puVar5[1] = 0;
        *(undefined8 **)this = puVar7;
        lVar3 = 0;
      }
      pauVar6 = (undefined1 (*) [16])(puVar7 + lVar3 * 2);
      pauVar9 = pauVar6 + (param_1 - lVar3);
      do {
        *pauVar6 = (undefined1  [16])0x0;
        pauVar6 = pauVar6 + 1;
      } while (pauVar9 != pauVar6);
LAB_0010274c:
      puVar7[-1] = param_1;
      return;
    }
  }
  uVar10 = 0x16a;
  pcVar8 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
LAB_0010288a:
  _err_print_error("resize","./core/templates/cowdata.h",uVar10,pcVar8,0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<Color>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<Color>::resize<false>(CowData<Color> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  char *pcVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  lVar4 = *(long *)this;
  if (lVar4 == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
    lVar11 = 0;
    lVar4 = 0;
  }
  else {
    lVar11 = *(long *)(lVar4 + -8);
    if (param_1 == lVar11) {
      return;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar4 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return;
      }
      lVar4 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
      return;
    }
    _copy_on_write(this);
    lVar4 = lVar11 * 0x10;
    if (lVar4 != 0) {
      uVar5 = lVar4 - 1U | lVar4 - 1U >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      lVar4 = (uVar5 | uVar5 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x10 != 0) {
    uVar5 = param_1 * 0x10 - 1;
    uVar5 = uVar5 | uVar5 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = uVar5 | uVar5 >> 0x20;
    if (uVar5 != 0xffffffffffffffff) {
      if (param_1 <= lVar11) {
        puVar7 = *(undefined8 **)this;
        if (uVar5 + 1 == lVar4) {
          if (puVar7 == (undefined8 *)0x0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
        }
        else {
          puVar6 = (undefined8 *)Memory::realloc_static(puVar7 + -2,uVar5 + 0x11,false);
          if (puVar6 == (undefined8 *)0x0) {
LAB_00102b98:
            _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,
                             "Parameter \"mem_new\" is null.",0,0);
            return;
          }
          puVar7 = puVar6 + 2;
          *puVar6 = 1;
          *(undefined8 **)this = puVar7;
        }
        puVar7[-1] = param_1;
        return;
      }
      if (uVar5 + 1 == lVar4) {
        puVar7 = *(undefined8 **)this;
        if (puVar7 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        lVar4 = puVar7[-1];
LAB_00102ac1:
        if (param_1 <= lVar4) goto LAB_00102a3c;
      }
      else {
        if (lVar11 != 0) {
          puVar6 = (undefined8 *)
                   Memory::realloc_static((void *)(*(long *)this + -0x10),uVar5 + 0x11,false);
          if (puVar6 == (undefined8 *)0x0) goto LAB_00102b98;
          puVar7 = puVar6 + 2;
          *puVar6 = 1;
          *(undefined8 **)this = puVar7;
          lVar4 = puVar6[1];
          goto LAB_00102ac1;
        }
        puVar6 = (undefined8 *)Memory::alloc_static(uVar5 + 0x11,false);
        if (puVar6 == (undefined8 *)0x0) {
          uVar10 = 0x171;
          pcVar8 = "Parameter \"mem_new\" is null.";
          goto LAB_00102b7a;
        }
        puVar7 = puVar6 + 2;
        *puVar6 = 1;
        puVar6[1] = 0;
        *(undefined8 **)this = puVar7;
        lVar4 = 0;
      }
      uVar3 = _UNK_001203b8;
      uVar10 = __LC44;
      puVar6 = puVar7 + lVar4 * 2;
      puVar9 = puVar6 + (param_1 - lVar4) * 2;
      do {
        *puVar6 = uVar10;
        puVar6[1] = uVar3;
        puVar6 = puVar6 + 2;
      } while (puVar9 != puVar6);
LAB_00102a3c:
      puVar7[-1] = param_1;
      return;
    }
  }
  uVar10 = 0x16a;
  pcVar8 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
LAB_00102b7a:
  _err_print_error("resize","./core/templates/cowdata.h",uVar10,pcVar8,0,0);
  return;
}



/* JSON::set_data(Variant const&) */

void __thiscall JSON::set_data(JSON *this,Variant_conflict *param_1)

{
  long *plVar1;
  long lVar2;
  
  ::Variant::operator=((Variant_conflict *)(this + 0x248),param_1);
  lVar2 = *(long *)(this + 0x240);
  if ((lVar2 != 0) && (*(long *)(lVar2 + -8) != 0)) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x240);
      *(undefined8 *)(this + 0x240) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
    *(undefined8 *)(this + 0x240) = 0;
  }
  return;
}



/* JSON::_make_indent(String const&, int) */

String * JSON::_make_indent(String *param_1,int param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  String::repeat((int)param_1);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JSON::_get_token(char32_t const*, int&, int, JSON::Token&, int&, String&) */

undefined4
JSON::_get_token(wchar32 *param_1,int *param_2,int param_3,Token *param_4,int *param_5,
                String *param_6)

{
  long *plVar1;
  int iVar2;
  wchar32 wVar3;
  long lVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  wchar32 *pwVar8;
  wchar32 wVar9;
  uint uVar10;
  long in_FS_OFFSET;
  double dVar11;
  long local_70;
  wchar32 *local_68;
  undefined8 local_60;
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 < 1) {
    local_60 = 0x1b;
    local_68 = L"Unknown error getting token";
    String::parse_latin1((StrRange *)param_6);
LAB_00103542:
    uVar6 = 0x2b;
  }
  else {
    while( true ) {
      iVar2 = *param_2;
      wVar9 = param_1[iVar2];
      if (wVar9 == L':') break;
      if (0x3a < (uint)wVar9) {
        if (wVar9 == L'{') {
          *(undefined4 *)param_4 = 0;
          *param_2 = iVar2 + 1;
          goto LAB_001031d8;
        }
        if ((uint)wVar9 < 0x7c) {
          if (wVar9 == L'[') {
            *(undefined4 *)param_4 = 2;
            *param_2 = iVar2 + 1;
            goto LAB_001031d8;
          }
          if (wVar9 == L']') {
            *(undefined4 *)param_4 = 3;
            *param_2 = iVar2 + 1;
            goto LAB_001031d8;
          }
        }
        else if (wVar9 == L'}') {
          *(undefined4 *)param_4 = 1;
          *param_2 = iVar2 + 1;
          goto LAB_001031d8;
        }
LAB_00103650:
        if ((uint)((wVar9 & 0xffffffdfU) - 0x41U) < 0x1a) {
          local_68 = (wchar32 *)0x0;
          do {
            String::operator+=((String *)&local_68,wVar9);
            iVar2 = *param_2;
            *param_2 = iVar2 + 1;
            wVar9 = param_1[iVar2 + 1];
          } while ((uint)((wVar9 & 0xffffffdfU) - 0x41U) < 0x1a);
          *(undefined4 *)param_4 = 4;
          ::Variant::Variant((Variant_conflict *)local_58,(String *)&local_68);
          ::Variant::operator=((Variant_conflict *)(param_4 + 8),(Variant_conflict *)local_58);
          if (::Variant::needs_deinit[local_58[0]] != '\0') {
            ::Variant::_clear_internal();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          goto LAB_001031d8;
        }
LAB_001036e4:
        String::parse_latin1(param_6,"Unexpected character");
        goto LAB_00103542;
      }
      if (wVar9 == L'\"') {
        local_70 = 0;
        iVar5 = iVar2 + 1;
        *param_2 = iVar5;
        wVar9 = param_1[(long)iVar2 + 1];
        if (wVar9 == L'\0') goto LAB_001034c8;
        goto LAB_00103269;
      }
      if (0x22 < (uint)wVar9) {
        if (wVar9 == L',') {
          *(undefined4 *)param_4 = 8;
          *param_2 = iVar2 + 1;
        }
        else {
          if ((wVar9 != L'-') && (9 < (uint)(wVar9 + L'\xffffffd0'))) goto LAB_001036e4;
          dVar11 = (double)String::to_float(param_1 + iVar2,&local_68);
          *param_2 = *param_2 + (int)((long)local_68 - (long)(param_1 + *param_2) >> 2);
          *(undefined4 *)param_4 = 6;
          ::Variant::Variant((Variant_conflict *)local_58,dVar11);
          ::Variant::operator=((Variant_conflict *)(param_4 + 8),(Variant_conflict *)local_58);
          if (::Variant::needs_deinit[local_58[0]] != '\0') {
            ::Variant::_clear_internal();
          }
        }
        goto LAB_001031d8;
      }
      if (wVar9 == L'\0') {
        *(undefined4 *)param_4 = 9;
        goto LAB_001031d8;
      }
      if (wVar9 == L'\n') {
        *param_5 = *param_5 + 1;
        *param_2 = *param_2 + 1;
      }
      else {
        if (wVar9 == L'!') goto LAB_00103650;
        *param_2 = iVar2 + 1;
      }
    }
    *(undefined4 *)param_4 = 7;
    *param_2 = iVar2 + 1;
LAB_001031d8:
    uVar6 = 0;
  }
  goto LAB_001031da;
LAB_001034f0:
  local_60 = 0x20;
  local_68 = L"Malformed hex constant in string";
  String::parse_latin1((StrRange *)param_6);
  goto LAB_00103372;
LAB_00103269:
  do {
    if (wVar9 == L'\"') {
      *param_2 = iVar5 + 1;
      *(undefined4 *)param_4 = 5;
      ::Variant::Variant((Variant_conflict *)local_58,(String *)&local_70);
      if (::Variant::needs_deinit[*(int *)(param_4 + 8)] != '\0') {
        ::Variant::_clear_internal();
      }
      *(int *)(param_4 + 8) = local_58[0];
      uVar6 = 0;
      *(undefined8 *)(param_4 + 0x10) = local_50;
      *(undefined8 *)(param_4 + 0x18) = uStack_48;
      goto LAB_00103377;
    }
    if (wVar9 == L'\\') {
      iVar2 = iVar5 + 1;
      *param_2 = iVar2;
      pwVar8 = param_1 + iVar2;
      wVar9 = *pwVar8;
      if (wVar9 == L'\0') break;
      if ((uint)wVar9 < 0x5d) {
        if (((uint)wVar9 < 0x22) ||
           ((0x400000000002001U >> ((ulong)(uint)(wVar9 + L'\xffffffde') & 0x3f) & 1) == 0))
        goto switchD_001032ad_caseD_63;
      }
      else {
        switch(wVar9) {
        case L'b':
          wVar9 = L'\b';
          break;
        default:
switchD_001032ad_caseD_63:
          local_60 = 0x17;
          local_68 = L"Invalid escape sequence";
          String::parse_latin1((StrRange *)param_6);
          goto LAB_00103372;
        case L'f':
          wVar9 = L'\f';
          break;
        case L'n':
          wVar9 = L'\n';
          break;
        case L'r':
          wVar9 = L'\r';
          break;
        case L't':
          wVar9 = L'\t';
          break;
        case L'u':
          wVar9 = L'\0';
          do {
            wVar3 = pwVar8[1];
            if (wVar3 == L'\0') goto LAB_001034c8;
            uVar10 = wVar3 + L'\xffffffd0';
            if ((0x36 < uVar10) || ((0x7e0000007e03ffU >> ((ulong)uVar10 & 0x3f) & 1) == 0))
            goto LAB_001034f0;
            if (9 < uVar10) {
              uVar10 = wVar3 + L'\xffffffa9';
              if (5 < (uint)(wVar3 + L'\xffffff9f')) {
                uVar10 = wVar3 + L'\xffffffc9';
              }
            }
            pwVar8 = pwVar8 + 1;
            wVar9 = wVar9 << 4 | uVar10;
          } while (pwVar8 != param_1 + (long)iVar2 + 4);
          *param_2 = iVar5 + 5;
          if ((wVar9 & 0xfffffc00U) == 0xd800) {
            if ((param_1[(long)iVar2 + 5] == L'\\') &&
               (pwVar8 = param_1 + (long)iVar2 + 6, *pwVar8 == L'u')) {
              uVar10 = 0;
              *param_2 = iVar5 + 7;
              do {
                wVar3 = pwVar8[1];
                if (wVar3 == L'\0') {
                  String::parse_latin1(param_6,"Unterminated string");
                  goto LAB_00103372;
                }
                uVar7 = wVar3 + L'\xffffffd0';
                if ((0x36 < uVar7) || ((0x7e0000007e03ffU >> ((ulong)uVar7 & 0x3f) & 1) == 0))
                goto LAB_001034f0;
                if ((9 < uVar7) &&
                   (uVar7 = wVar3 + L'\xffffffc9', (uint)(wVar3 + L'\xffffff9f') < 6)) {
                  uVar7 = wVar3 + L'\xffffffa9';
                }
                pwVar8 = pwVar8 + 1;
                uVar10 = uVar10 << 4 | uVar7;
              } while (pwVar8 != param_1 + (long)iVar2 + 10);
              if ((uVar10 & 0xfffffc00) == 0xdc00) {
                *param_2 = iVar5 + 0xb;
                wVar9 = uVar10 + 0xfca02400 + wVar9 * 0x400;
                break;
              }
            }
            String::parse_latin1
                      (param_6,"Invalid UTF-16 sequence in string, unpaired lead surrogate");
            goto LAB_00103372;
          }
          if ((wVar9 & 0xfffffc00U) == 0xdc00) {
            String::parse_latin1
                      (param_6,"Invalid UTF-16 sequence in string, unpaired trail surrogate");
            goto LAB_00103372;
          }
        }
      }
    }
    else {
      if (wVar9 == L'\n') {
        *param_5 = *param_5 + 1;
      }
      wVar9 = param_1[*param_2];
    }
    String::operator+=((String *)&local_70,wVar9);
    iVar5 = *param_2 + 1;
    *param_2 = iVar5;
    wVar9 = param_1[iVar5];
  } while (wVar9 != L'\0');
LAB_001034c8:
  local_60 = 0x13;
  local_68 = L"Unterminated string";
  String::parse_latin1((StrRange *)param_6);
LAB_00103372:
  uVar6 = 0x2b;
LAB_00103377:
  lVar4 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
LAB_001031da:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JSON::_stringify(Variant const&, String const&, int, bool, HashSet<void const*,
   HashMapHasherDefault, HashMapComparatorDefault<void const*> >&, bool) */

Variant_conflict *
JSON::_stringify(Variant_conflict *param_1,String *param_2,int param_3,bool param_4,HashSet *param_5
                ,bool param_6)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  Variant_conflict *pVVar5;
  undefined7 in_register_00000009;
  undefined4 in_register_00000014;
  long in_FS_OFFSET;
  long local_b0;
  long local_a8 [4];
  long local_88;
  long local_80;
  long local_78 [2];
  undefined *local_68;
  undefined8 local_60;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((int)CONCAT71(in_register_00000009,param_4) < 0x401) {
    local_68 = &_LC95;
    local_b0 = 0;
    local_60 = 1;
    String::parse_latin1((StrRange *)&local_b0);
    local_a8[0] = 0;
    local_68 = &_LC2;
    local_60 = 0;
    String::parse_latin1((StrRange *)local_a8);
    if ((*(long *)CONCAT44(in_register_00000014,param_3) == 0) ||
       (*(uint *)(*(long *)CONCAT44(in_register_00000014,param_3) + -8) < 2)) {
      uVar2 = *(uint *)param_2;
    }
    else {
      String::operator+=((String *)&local_b0," ");
      String::operator+=((String *)local_a8,"\n");
      uVar2 = *(uint *)param_2;
    }
    if (uVar2 < 0x23) {
                    /* WARNING: Could not recover jumptable at 0x00104021. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pVVar5 = (Variant_conflict *)
               (*(code *)(&DAT_0011a870 + *(int *)(&DAT_0011a870 + (ulong)*(uint *)param_2 * 4)))();
      return pVVar5;
    }
    local_78[0] = 0;
    local_68 = &_LC110;
    local_60 = 1;
    String::parse_latin1((StrRange *)local_78);
    ::Variant::operator_cast_to_String((Variant_conflict *)&local_88);
    String::json_escape();
    operator+((char *)&local_68,(String *)&_LC110);
    String::operator+((String *)param_1,(String *)&local_68);
    puVar4 = local_68;
    if (local_68 != (undefined *)0x0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = (undefined *)0x0;
        Memory::free_static(puVar4 + -0x10,false);
      }
    }
    lVar3 = local_80;
    if (local_80 != 0) {
      LOCK();
      plVar1 = (long *)(local_80 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_80 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    lVar3 = local_88;
    if (local_88 != 0) {
      LOCK();
      plVar1 = (long *)(local_88 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_88 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    lVar3 = local_78[0];
    if (local_78[0] != 0) {
      LOCK();
      plVar1 = (long *)(local_78[0] + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_78[0] = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    lVar3 = local_a8[0];
    if (local_a8[0] != 0) {
      LOCK();
      plVar1 = (long *)(local_a8[0] + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_a8[0] = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    lVar3 = local_b0;
    if (local_b0 != 0) {
      LOCK();
      plVar1 = (long *)(local_b0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_b0 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
  }
  else {
    _err_print_error("_stringify","core/io/json.cpp",0x37,
                     "Condition \"p_cur_indent > Variant::MAX_RECURSION_DEPTH\" is true. Returning: \"...\""
                     ,"JSON structure is too deep. Bailing.",0,0);
    local_68 = &_LC94;
    *(undefined8 *)param_1 = 0;
    local_60 = 3;
    String::parse_latin1((StrRange *)param_1);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* JSON::stringify(Variant const&, String const&, bool, bool) */

Variant_conflict *
JSON::stringify(Variant_conflict *param_1,String *param_2,bool param_3,bool param_4)

{
  Object *pOVar1;
  undefined8 uVar2;
  char cVar3;
  undefined7 in_register_00000011;
  long in_FS_OFFSET;
  Object *local_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = (Object *)0x0;
  Ref<JSON>::instantiate<>((Ref<JSON> *)&local_68);
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  local_38 = 2;
  _stringify((Variant_conflict *)&local_60,param_2,(int)CONCAT71(in_register_00000011,param_3),false
             ,(HashSet *)(ulong)param_4,SUB81(local_58,0));
  uVar2 = local_58._0_8_;
  *(undefined8 *)param_1 = local_60;
  if ((void *)local_58._0_8_ != (void *)0x0) {
    if (local_38._4_4_ != 0) {
      if (*(uint *)(hash_table_size_primes + (local_38 & 0xffffffff) * 4) != 0) {
        memset((void *)local_48._8_8_,0,
               (ulong)*(uint *)(hash_table_size_primes + (local_38 & 0xffffffff) * 4) << 2);
      }
      local_38 = local_38 & 0xffffffff;
    }
    Memory::free_static((void *)uVar2,false);
    Memory::free_static((void *)local_48._0_8_,false);
    Memory::free_static((void *)local_58._8_8_,false);
    Memory::free_static((void *)local_48._8_8_,false);
  }
  pOVar1 = local_68;
  if (local_68 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(pOVar1);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceFormatSaverJSON::save(Ref<Resource> const&, String const&, unsigned int) */

int ResourceFormatSaverJSON::save(Ref *param_1,String *param_2,uint param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  Object *pOVar4;
  long lVar5;
  undefined4 in_register_00000014;
  long lVar6;
  long *plVar7;
  long in_FS_OFFSET;
  bool bVar8;
  int local_7c;
  long local_78;
  Object *local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*(long *)param_2 == 0) ||
      (pOVar4 = (Object *)__dynamic_cast(*(long *)param_2,&Object::typeinfo,&JSON::typeinfo),
      pOVar4 == (Object *)0x0)) || (cVar2 = RefCounted::reference(), cVar2 == '\0')) {
    local_7c = 0x1f;
    _err_print_error(&_LC120,"core/io/json.cpp",0x67f,
                     "Condition \"json.is_null()\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    goto LAB_0010532e;
  }
  plVar7 = (long *)(*(long *)(pOVar4 + 0x240) + -0x10);
  if (*(long *)(pOVar4 + 0x240) == 0) {
LAB_0010572e:
    lVar6 = 0;
LAB_001053a7:
    local_60 = 0;
    local_58 = "\t";
    local_50 = 1;
    String::parse_latin1((StrRange *)&local_60);
    ::Variant::Variant((Variant_conflict *)local_48,(Variant_conflict *)(pOVar4 + 0x248));
    JSON::stringify((Variant_conflict *)&local_78,(String *)local_48,SUB81((StrRange *)&local_60,0),
                    false);
    if (::Variant::needs_deinit[local_48[0]] != '\0') {
      ::Variant::_clear_internal();
    }
    lVar5 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar7 = (long *)(local_60 + -0x10);
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    plVar7 = (long *)(lVar6 + -0x10);
    if (lVar6 != 0) goto LAB_00105438;
  }
  else {
    do {
      lVar6 = *plVar7;
      if (lVar6 == 0) goto LAB_0010572e;
      LOCK();
      lVar5 = *plVar7;
      bVar8 = lVar6 == lVar5;
      if (bVar8) {
        *plVar7 = lVar6 + 1;
        lVar5 = lVar6;
      }
      UNLOCK();
    } while (!bVar8);
    if ((lVar5 == -1) || (lVar6 = *(long *)(pOVar4 + 0x240), lVar6 == 0)) goto LAB_0010572e;
    if (*(uint *)(lVar6 + -8) < 2) goto LAB_001053a7;
    local_78 = 0;
    plVar7 = (long *)(lVar6 + -0x10);
    do {
      lVar6 = *plVar7;
      if (lVar6 == 0) goto LAB_00105438;
      LOCK();
      lVar5 = *plVar7;
      bVar8 = lVar6 == lVar5;
      if (bVar8) {
        *plVar7 = lVar6 + 1;
        lVar5 = lVar6;
      }
      UNLOCK();
    } while (!bVar8);
    if (lVar5 != -1) {
      local_78 = *(long *)(pOVar4 + 0x240);
    }
LAB_00105438:
    LOCK();
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      Memory::free_static(plVar7,false);
    }
  }
  FileAccess::open((String *)&local_70,param_3,(Error *)0x2);
  if (local_7c == 0) {
    (**(code **)(*(long *)local_70 + 0x2a8))();
    iVar3 = (**(code **)(*(long *)local_70 + 0x250))();
    if ((iVar3 != 0) && (iVar3 = (**(code **)(*(long *)local_70 + 0x250))(), iVar3 != 0x12)) {
      local_7c = 0x14;
    }
  }
  else {
    local_60 = 0;
    lVar6 = *(long *)CONCAT44(in_register_00000014,param_3);
    plVar7 = (long *)(lVar6 + -0x10);
    if (lVar6 != 0) {
      do {
        lVar6 = *plVar7;
        if (lVar6 == 0) goto LAB_00105608;
        LOCK();
        lVar5 = *plVar7;
        bVar8 = lVar6 == lVar5;
        if (bVar8) {
          *plVar7 = lVar6 + 1;
          lVar5 = lVar6;
        }
        UNLOCK();
      } while (!bVar8);
      if (lVar5 != -1) {
        local_60 = *(long *)CONCAT44(in_register_00000014,param_3);
      }
    }
LAB_00105608:
    local_68 = 0;
    local_50 = 0x16;
    local_58 = "Cannot save json \'%s\'.";
    String::parse_latin1((StrRange *)&local_68);
    vformat<String>(&local_58,(StrRange *)&local_68,&local_60);
    _err_print_error(&_LC120,"core/io/json.cpp",0x686,"Condition \"err\" is true. Returning: err",
                     &local_58,0,0);
    pcVar1 = local_58;
    if (local_58 != (char *)0x0) {
      LOCK();
      plVar7 = (long *)(local_58 + -0x10);
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
        local_58 = (char *)0x0;
        Memory::free_static(pcVar1 + -0x10,false);
      }
    }
    lVar6 = local_68;
    if (local_68 != 0) {
      LOCK();
      plVar7 = (long *)(local_68 + -0x10);
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
        local_68 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    lVar6 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar7 = (long *)(local_60 + -0x10);
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  if (((local_70 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
     (cVar2 = predelete_handler(local_70), cVar2 != '\0')) {
    (**(code **)(*(long *)local_70 + 0x140))(local_70);
    Memory::free_static(local_70,false);
  }
  lVar6 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar7 = (long *)(local_78 + -0x10);
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar6 + -0x10),false);
    }
  }
  cVar2 = RefCounted::unreference();
  if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar4), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
    Memory::free_static(pOVar4,false);
  }
LAB_0010532e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_7c;
}



/* JSON::_parse_value(Variant&, JSON::Token&, char32_t const*, int&, int, int&, int, String&) */

int JSON::_parse_value(Variant_conflict *param_1,Token *param_2,wchar32 *param_3,int *param_4,
                      int param_5,int *param_6,int param_7,String *param_8)

{
  long *plVar1;
  uint uVar2;
  char *pcVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  long in_FS_OFFSET;
  long local_80;
  long local_78;
  long local_70;
  char *local_68;
  size_t local_60;
  undefined4 local_58 [2];
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0x400 < param_7) {
    local_60 = 0x1a;
    local_68 = "JSON structure is too deep";
    String::parse_latin1((StrRange *)param_8);
    iVar6 = 6;
    goto LAB_001057a3;
  }
  uVar2 = *(uint *)param_2;
  if (uVar2 == 4) {
    ::Variant::operator_cast_to_String((Variant_conflict *)&local_80);
    cVar5 = String::operator==((String *)&local_80,"true");
    if (cVar5 == '\0') {
      cVar5 = String::operator==((String *)&local_80,"false");
      if (cVar5 == '\0') {
        cVar5 = String::operator==((String *)&local_80,"null");
        if (cVar5 == '\0') {
          local_70 = 0;
          if (local_80 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_80);
          }
          local_78 = 0;
          local_60 = 0x2d;
          local_68 = "Expected \'true\', \'false\', or \'null\', got \'%s\'";
          String::parse_latin1((StrRange *)&local_78);
          vformat<String>((CowData<char32_t> *)&local_68,(StrRange *)&local_78,
                          (CowData<char32_t> *)&local_70);
          pcVar3 = local_68;
          if (*(char **)param_8 != local_68) {
            CowData<char32_t>::_unref((CowData<char32_t> *)param_8);
            *(char **)param_8 = pcVar3;
            local_68 = (char *)0x0;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
          goto LAB_00105970;
        }
        local_50 = (undefined1  [16])0x0;
        if (::Variant::needs_deinit[*(int *)param_1] != '\0') {
          ::Variant::_clear_internal();
        }
        *(undefined4 *)param_1 = 0;
        *(undefined8 *)(param_1 + 8) = local_50._0_8_;
        *(undefined8 *)(param_1 + 0x10) = local_50._8_8_;
      }
      else {
        ::Variant::Variant((Variant_conflict *)local_58,false);
        if (::Variant::needs_deinit[*(int *)param_1] != '\0') {
          ::Variant::_clear_internal();
        }
        *(undefined4 *)param_1 = local_58[0];
        *(undefined8 *)(param_1 + 8) = local_50._0_8_;
        *(undefined8 *)(param_1 + 0x10) = local_50._8_8_;
      }
    }
    else {
      ::Variant::Variant((Variant_conflict *)local_58,true);
      if (::Variant::needs_deinit[*(int *)param_1] != '\0') {
        ::Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_58[0];
      *(undefined8 *)(param_1 + 8) = local_50._0_8_;
      *(undefined8 *)(param_1 + 0x10) = local_50._8_8_;
    }
    lVar4 = local_80;
    if (local_80 != 0) {
      LOCK();
      plVar1 = (long *)(local_80 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_80 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
  }
  else if (uVar2 < 5) {
    if (uVar2 == 0) {
      Dictionary::Dictionary((Dictionary *)&local_68);
      iVar6 = _parse_object((Dictionary *)&local_68,param_3,param_4,param_5,param_6,param_7 + 1,
                            param_8);
      if (iVar6 != 0) {
        Dictionary::~Dictionary((Dictionary *)&local_68);
        goto LAB_001057a3;
      }
      ::Variant::Variant((Variant_conflict *)local_58,(Dictionary *)&local_68);
      if (::Variant::needs_deinit[*(int *)param_1] != '\0') {
        ::Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_58[0];
      *(undefined8 *)(param_1 + 8) = local_50._0_8_;
      *(undefined8 *)(param_1 + 0x10) = local_50._8_8_;
      Dictionary::~Dictionary((Dictionary *)&local_68);
    }
    else {
      if (uVar2 != 2) goto LAB_00105870;
      Array::Array((Array *)&local_68);
      iVar6 = _parse_array((Array *)&local_68,param_3,param_4,param_5,param_6,param_7 + 1,param_8);
      if (iVar6 != 0) {
        Array::~Array((Array *)&local_68);
        goto LAB_001057a3;
      }
      ::Variant::Variant((Variant_conflict *)local_58,(Array *)&local_68);
      if (::Variant::needs_deinit[*(int *)param_1] != '\0') {
        ::Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_58[0];
      *(undefined8 *)(param_1 + 8) = local_50._0_8_;
      *(undefined8 *)(param_1 + 0x10) = local_50._8_8_;
      Array::~Array((Array *)&local_68);
    }
  }
  else {
    if (1 < uVar2 - 5) {
LAB_00105870:
      local_78 = 0;
      pcVar3 = *(char **)(tk_name + (long)(int)uVar2 * 8);
      local_60 = 0;
      if (pcVar3 != (char *)0x0) {
        local_60 = strlen(pcVar3);
      }
      local_68 = pcVar3;
      String::parse_latin1((StrRange *)&local_78);
      local_68 = "Expected value, got \'%s\'";
      local_70 = 0;
      local_60 = 0x18;
      String::parse_latin1((StrRange *)&local_70);
      vformat<String>(&local_68,(StrRange *)&local_70,(StrRange *)&local_78);
      pcVar3 = *(char **)param_8;
      if (pcVar3 == local_68) {
        if (pcVar3 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(pcVar3 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static(local_68 + -0x10,false);
          }
        }
      }
      else {
        if (pcVar3 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(pcVar3 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar4 = *(long *)param_8;
            *(undefined8 *)param_8 = 0;
            Memory::free_static((void *)(lVar4 + -0x10),false);
          }
        }
        *(char **)param_8 = local_68;
      }
      lVar4 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar1 = (long *)(local_70 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      lVar4 = local_78;
      if (local_78 != 0) {
        LOCK();
        plVar1 = (long *)(local_78 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_78 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
LAB_00105970:
      iVar6 = 0x2b;
      goto LAB_001057a3;
    }
    ::Variant::operator=(param_1,(Variant_conflict *)(param_2 + 8));
  }
  iVar6 = 0;
LAB_001057a3:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar6;
}



/* JSON::_parse_array(Array&, char32_t const*, int&, int, int&, int, String&) */

ulong JSON::_parse_array(Array *param_1,wchar32 *param_2,int *param_3,int param_4,int *param_5,
                        int param_6,String *param_7)

{
  bool bVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  int local_88 [2];
  undefined1 local_80 [16];
  int local_68 [2];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (undefined1  [16])0x0;
  local_60 = 0;
  if (*param_3 < param_4) {
    bVar1 = false;
    do {
      uVar2 = _get_token(param_2,param_3,param_4,(Token *)local_68,param_5,param_7);
      if (((int)uVar2 != 0) || (local_68[0] == 3)) goto LAB_00105db6;
      if (bVar1) {
        if (local_68[0] != 8) break;
        bVar1 = false;
      }
      else {
        local_80 = (undefined1  [16])0x0;
        local_88[0] = 0;
        local_88[1] = 0;
        uVar2 = _parse_value((Variant_conflict *)local_88,(Token *)local_68,param_2,param_3,param_4,
                             param_5,param_6,param_7);
        if ((int)uVar2 != 0) {
          if (::Variant::needs_deinit[local_88[0]] != '\0') {
            ::Variant::_clear_internal();
            uVar2 = uVar2 & 0xffffffff;
          }
          goto LAB_00105db6;
        }
        Array::push_back((Variant_conflict *)param_1);
        if (::Variant::needs_deinit[local_88[0]] != '\0') {
          ::Variant::_clear_internal();
        }
        bVar1 = true;
      }
    } while (*param_3 < param_4);
  }
  String::parse_latin1((StrRange *)param_7);
  uVar2 = 0x2b;
LAB_00105db6:
  if (::Variant::needs_deinit[(int)local_60] != '\0') {
    ::Variant::_clear_internal();
    uVar2 = uVar2 & 0xffffffff;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* JSON::_parse_object(Dictionary&, char32_t const*, int&, int, int&, int, String&) */

int JSON::_parse_object(Dictionary *param_1,wchar32 *param_2,int *param_3,int param_4,int *param_5,
                       int param_6,String *param_7)

{
  long *plVar1;
  bool bVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  Variant_conflict *this;
  long in_FS_OFFSET;
  char *local_c0;
  char *local_b8;
  undefined8 local_b0;
  int local_a8 [2];
  undefined1 local_a0 [16];
  int local_88 [8];
  int local_68 [2];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (undefined1  [16])0x0;
  local_c0 = (char *)0x0;
  local_60 = 0;
  if (*param_3 < param_4) {
    bVar2 = false;
    do {
      while( true ) {
        iVar5 = _get_token(param_2,param_3,param_4,(Token *)local_68,param_5,param_7);
        if ((iVar5 != 0) || (local_68[0] == 1)) goto LAB_00106190;
        if (bVar2) break;
        if (local_68[0] != 5) {
          local_b0 = 0xc;
          local_b8 = "Expected key";
          String::parse_latin1((StrRange *)param_7);
          goto LAB_00106183;
        }
        ::Variant::operator_cast_to_String((Variant_conflict *)&local_b8);
        pcVar4 = local_b8;
        pcVar3 = local_c0;
        if (local_c0 == local_b8) {
          if (local_c0 != (char *)0x0) {
            LOCK();
            plVar1 = (long *)(local_c0 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_b8 = (char *)0x0;
              Memory::free_static(pcVar4 + -0x10,false);
            }
          }
        }
        else {
          if (local_c0 != (char *)0x0) {
            LOCK();
            plVar1 = (long *)(local_c0 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_c0 = (char *)0x0;
              Memory::free_static(pcVar3 + -0x10,false);
            }
          }
          local_c0 = local_b8;
        }
        iVar5 = _get_token(param_2,param_3,param_4,(Token *)local_68,param_5,param_7);
        if (iVar5 != 0) goto LAB_00106190;
        if (local_68[0] != 7) {
          local_b8 = "Expected \':\'";
          goto LAB_00106107;
        }
        if (param_4 <= *param_3) goto LAB_00106100;
        iVar5 = _get_token(param_2,param_3,param_4,(Token *)local_68,param_5,param_7);
        if (iVar5 != 0) goto LAB_00106190;
        local_a0 = (undefined1  [16])0x0;
        local_a8[0] = 0;
        local_a8[1] = 0;
        iVar5 = _parse_value((Variant_conflict *)local_a8,(Token *)local_68,param_2,param_3,param_4,
                             param_5,param_6,param_7);
        if (iVar5 != 0) {
          if (::Variant::needs_deinit[local_a8[0]] != '\0') {
            ::Variant::_clear_internal();
          }
          goto LAB_00106190;
        }
        ::Variant::Variant((Variant_conflict *)local_88,(String *)&local_c0);
        this = (Variant_conflict *)Dictionary::operator[]((Variant_conflict *)param_1);
        ::Variant::operator=(this,(Variant_conflict *)local_a8);
        if (::Variant::needs_deinit[local_88[0]] != '\0') {
          ::Variant::_clear_internal();
        }
        if (::Variant::needs_deinit[local_a8[0]] != '\0') {
          ::Variant::_clear_internal();
        }
        bVar2 = true;
        if (param_4 <= *param_3) goto LAB_00106100;
      }
      if (local_68[0] != 8) {
        local_b0 = 0x13;
        local_b8 = "Expected \'}\' or \',\'";
        String::parse_latin1((StrRange *)param_7);
        goto LAB_00106183;
      }
      bVar2 = false;
    } while (*param_3 < param_4);
  }
LAB_00106100:
  local_b8 = "Expected \'}\'";
LAB_00106107:
  local_b0 = 0xc;
  String::parse_latin1((StrRange *)param_7);
LAB_00106183:
  iVar5 = 0x2b;
LAB_00106190:
  if (::Variant::needs_deinit[(int)local_60] != '\0') {
    ::Variant::_clear_internal();
  }
  pcVar3 = local_c0;
  if (local_c0 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_c0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c0 = (char *)0x0;
      Memory::free_static(pcVar3 + -0x10,false);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar5;
}



/* JSON::_parse_string(String const&, Variant&, String&, int&) */

int JSON::_parse_string(String *param_1,Variant_conflict *param_2,String *param_3,int *param_4)

{
  wchar32 *pwVar1;
  int iVar2;
  int iVar3;
  long in_FS_OFFSET;
  int local_9c;
  char *local_98;
  undefined8 local_90;
  undefined1 local_80 [16];
  int local_68 [2];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  pwVar1 = *(wchar32 **)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_9c = 0;
  if (pwVar1 == (wchar32 *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (int)*(undefined8 *)(pwVar1 + -2) + -1 + (uint)((int)*(undefined8 *)(pwVar1 + -2) == 0);
  }
  *param_4 = 0;
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  iVar2 = _get_token(pwVar1,&local_9c,iVar3,(Token *)local_68,param_4,param_3);
  if (iVar2 == 0) {
    iVar2 = _parse_value(param_2,(Token *)local_68,pwVar1,&local_9c,iVar3,param_4,0,param_3);
    if ((iVar2 == 0) && (local_9c < iVar3)) {
      iVar3 = _get_token(pwVar1,&local_9c,iVar3,(Token *)local_68,param_4,param_3);
      if ((iVar3 != 0) || (local_68[0] != 9)) {
        local_90 = 0xe;
        local_98 = "Expected \'EOF\'";
        String::parse_latin1((StrRange *)param_3);
        local_80 = (undefined1  [16])0x0;
        if (::Variant::needs_deinit[*(int *)param_2] != '\0') {
          ::Variant::_clear_internal();
        }
        iVar2 = 0x2b;
        *(undefined4 *)param_2 = 0;
        *(undefined8 *)(param_2 + 8) = local_80._0_8_;
        *(undefined8 *)(param_2 + 0x10) = local_80._8_8_;
      }
    }
  }
  if (::Variant::needs_deinit[(int)local_60] != '\0') {
    ::Variant::_clear_internal();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JSON::parse(String const&, bool) */

ulong __thiscall JSON::parse(JSON *this,String *param_1,bool param_2)

{
  ulong uVar1;
  
  uVar1 = _parse_string(param_1,(Variant_conflict *)(this + 0x248),(String *)(this + 0x260),
                        (int *)(this + 0x268));
  if ((int)uVar1 == 0) {
    *(undefined4 *)(this + 0x268) = 0;
  }
  if ((param_2) && (*(long *)(this + 0x240) != *(long *)param_1)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x240),(CowData *)param_1);
    return uVar1 & 0xffffffff;
  }
  return uVar1;
}



/* JSON::parse_string(String const&) */

JSON * __thiscall JSON::parse_string(JSON *this,String *param_1)

{
  long *plVar1;
  Variant_conflict *pVVar2;
  undefined4 uVar3;
  long lVar4;
  char *pcVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  Object *pOVar9;
  long in_FS_OFFSET;
  bool bVar10;
  Object *local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = (Object *)0x0;
  Ref<JSON>::instantiate<>((Ref<JSON> *)&local_60);
  pOVar9 = local_60;
  pVVar2 = (Variant_conflict *)(local_60 + 0x248);
  iVar7 = _parse_string(param_1,pVVar2,(String *)(local_60 + 0x260),(int *)(local_60 + 0x268));
  if (iVar7 == 0) {
    *(undefined4 *)(pOVar9 + 0x268) = 0;
    ::Variant::Variant((Variant_conflict *)this,pVVar2);
  }
  else {
    local_58 = 0;
    plVar1 = (long *)(*(long *)(pOVar9 + 0x260) + -0x10);
    if (*(long *)(pOVar9 + 0x260) != 0) {
      do {
        lVar4 = *plVar1;
        if (lVar4 == 0) goto LAB_00106608;
        LOCK();
        lVar8 = *plVar1;
        bVar10 = lVar4 == lVar8;
        if (bVar10) {
          *plVar1 = lVar4 + 1;
          lVar8 = lVar4;
        }
        UNLOCK();
      } while (!bVar10);
      if (lVar8 != -1) {
        local_58 = *(long *)(pOVar9 + 0x260);
      }
    }
LAB_00106608:
    uVar3 = *(undefined4 *)(pOVar9 + 0x268);
    local_50 = 0;
    local_40 = 0x27;
    local_48 = "Parse JSON failed. Error at line %d: %s";
    String::parse_latin1((StrRange *)&local_50);
    vformat<int,String>(&local_48,(StrRange *)&local_50,uVar3,&local_58);
    _err_print_error(_LC136,"core/io/json.cpp",0x246,
                     "Condition \"error != Error::OK\" is true. Returning: Variant()",&local_48,0);
    pcVar5 = local_48;
    if (local_48 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = (char *)0x0;
        Memory::free_static(pcVar5 + -0x10,false);
      }
    }
    lVar4 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    lVar4 = local_58;
    if (local_58 != 0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    *(undefined4 *)this = 0;
    *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
    pOVar9 = local_60;
    if (local_60 == (Object *)0x0) goto LAB_001066dd;
  }
  cVar6 = RefCounted::unreference();
  if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar9), cVar6 != '\0')) {
    (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
    Memory::free_static(pOVar9,false);
  }
LAB_001066dd:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* ResourceFormatLoaderJSON::load(String const&, String const&, Error*, bool, float*,
   ResourceFormatLoader::CacheMode) */

long * ResourceFormatLoaderJSON::load
                 (long *param_1,undefined8 param_2,String *param_3,undefined8 param_4,int *param_5)

{
  long *plVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  Object *pOVar7;
  long in_FS_OFFSET;
  bool bVar8;
  Object *local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_5 != (int *)0x0) {
    *param_5 = 0xc;
  }
  cVar3 = FileAccess::exists(param_3);
  if (cVar3 == '\0') {
    *param_5 = 7;
    *param_1 = 0;
    goto LAB_00106817;
  }
  local_a0 = (Object *)0x0;
  Ref<JSON>::instantiate<>((Ref<JSON> *)&local_a0);
  pOVar7 = local_a0;
  lVar5 = Engine::get_singleton();
  cVar3 = *(char *)(lVar5 + 0xc0);
  FileAccess::get_file_as_string((String *)&local_58,param_3);
  iVar4 = JSON::_parse_string((String *)&local_58,(Variant_conflict *)(pOVar7 + 0x248),
                              (String *)(pOVar7 + 0x260),(int *)(pOVar7 + 0x268));
  pcVar2 = local_58;
  if (iVar4 == 0) {
    *(undefined4 *)(pOVar7 + 0x268) = 0;
    if (cVar3 == '\0') {
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_58 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
        goto LAB_001068df;
      }
      if (param_5 == (int *)0x0) {
        *param_1 = 0;
      }
      else {
        *param_5 = 0;
        *param_1 = 0;
      }
    }
    else {
      if (*(char **)(pOVar7 + 0x240) == local_58) {
        if (local_58 == (char *)0x0) goto LAB_001068df;
LAB_00106d06:
        pcVar2 = local_58;
        LOCK();
        plVar1 = (long *)(local_58 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      else {
LAB_00106ced:
        CowData<char32_t>::_ref((CowData<char32_t> *)(pOVar7 + 0x240),(CowData *)&local_58);
        if (local_58 != (char *)0x0) goto LAB_00106d06;
      }
      if (iVar4 != 0) goto LAB_00106997;
LAB_001068df:
      if (param_5 != (int *)0x0) {
        *param_5 = 0;
      }
      *param_1 = 0;
      pOVar7 = local_a0;
      if (local_a0 == (Object *)0x0) goto LAB_00106817;
    }
    lVar5 = __dynamic_cast(pOVar7,&Object::typeinfo,&Resource::typeinfo,0);
    if (lVar5 != 0) {
      *param_1 = lVar5;
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *param_1 = 0;
      }
    }
  }
  else {
    if (cVar3 == '\0') {
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_58 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
    }
    else {
      if (*(char **)(pOVar7 + 0x240) != local_58) goto LAB_00106ced;
      if (local_58 != (char *)0x0) goto LAB_00106d06;
    }
LAB_00106997:
    local_60 = 0;
    plVar1 = (long *)(*(long *)(pOVar7 + 0x260) + -0x10);
    if (*(long *)(pOVar7 + 0x260) != 0) {
      do {
        lVar5 = *plVar1;
        if (lVar5 == 0) goto LAB_001069d5;
        LOCK();
        lVar6 = *plVar1;
        bVar8 = lVar5 == lVar6;
        if (bVar8) {
          *plVar1 = lVar5 + 1;
          lVar6 = lVar5;
        }
        UNLOCK();
      } while (!bVar8);
      if (lVar6 != -1) {
        local_60 = *(long *)(pOVar7 + 0x260);
      }
    }
LAB_001069d5:
    local_68 = 0;
    local_58 = ": ";
    local_50 = 2;
    String::parse_latin1((StrRange *)&local_68);
    itos((long)&local_78);
    local_58 = "\', on line ";
    local_88 = 0;
    local_50 = 0xb;
    String::parse_latin1((StrRange *)&local_88);
    operator+((char *)&local_90,(String *)"Error parsing JSON file at \'");
    String::operator+((String *)&local_80,(String *)&local_90);
    String::operator+((String *)&local_70,(String *)&local_80);
    String::operator+((String *)&local_58,(String *)&local_70);
    String::operator+((String *)&local_98,(String *)&local_58);
    pcVar2 = local_58;
    if (local_58 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = (char *)0x0;
        Memory::free_static(pcVar2 + -0x10,false);
      }
    }
    lVar5 = local_70;
    if (local_70 != 0) {
      LOCK();
      plVar1 = (long *)(local_70 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    lVar5 = local_80;
    if (local_80 != 0) {
      LOCK();
      plVar1 = (long *)(local_80 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_80 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    lVar5 = local_90;
    if (local_90 != 0) {
      LOCK();
      plVar1 = (long *)(local_90 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_90 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    lVar5 = local_88;
    if (local_88 != 0) {
      LOCK();
      plVar1 = (long *)(local_88 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_88 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    lVar5 = local_78;
    if (local_78 != 0) {
      LOCK();
      plVar1 = (long *)(local_78 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_78 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    lVar5 = local_68;
    if (local_68 != 0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    lVar5 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    lVar5 = Engine::get_singleton();
    if (*(char *)(lVar5 + 0xc0) != '\0') {
      _err_print_error(&_LC140,"core/io/json.cpp",0x65c,(String *)&local_98,0,1);
      lVar5 = local_98;
      if (local_98 != 0) {
        LOCK();
        plVar1 = (long *)(local_98 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_98 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
      goto LAB_001068df;
    }
    if (param_5 != (int *)0x0) {
      *param_5 = iVar4;
    }
    _err_print_error(&_LC140,"core/io/json.cpp",0x661,(String *)&local_98,0,0);
    lVar5 = local_98;
    *param_1 = 0;
    if (local_98 != 0) {
      LOCK();
      plVar1 = (long *)(local_98 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_98 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    pOVar7 = local_a0;
    if (local_a0 == (Object *)0x0) goto LAB_00106817;
  }
  cVar3 = RefCounted::unreference();
  if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar7), cVar3 != '\0')) {
    (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
    Memory::free_static(pOVar7,false);
  }
LAB_00106817:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* JSON::_bind_methods() */

void JSON::_bind_methods(void)

{
  Variant_conflict *pVVar1;
  long *plVar2;
  char cVar3;
  long lVar4;
  code *pcVar5;
  MethodBind *pMVar6;
  uint uVar7;
  long *plVar8;
  long lVar9;
  Variant_conflict *pVVar10;
  long in_FS_OFFSET;
  long local_1d8;
  long local_1d0;
  long local_1c8;
  long local_1c0;
  long local_1b8;
  long local_1b0;
  undefined *local_1a8;
  undefined8 local_1a0;
  undefined *local_198;
  long local_190;
  long *local_188;
  int local_180;
  long local_178;
  undefined4 local_170;
  char *local_168;
  char *pcStack_160;
  undefined8 local_158;
  char *local_148;
  char *pcStack_140;
  undefined8 local_138;
  undefined *local_128;
  char *pcStack_120;
  undefined8 local_118;
  undefined *local_108;
  char *pcStack_100;
  char *local_f8;
  char *pcStack_f0;
  undefined8 local_e8;
  Variant_conflict *local_d8;
  Variant_conflict *pVStack_d0;
  Variant_conflict *local_c8;
  char **ppcStack_c0;
  Variant_conflict **local_a8;
  undefined1 auStack_a0 [16];
  undefined8 local_90;
  undefined1 local_88 [16];
  Variant_conflict local_78 [24];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant_conflict local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_e8 = 0;
  local_108 = PTR__LC146_001203d8;
  pcStack_100 = "indent";
  local_d8 = (Variant_conflict *)&local_108;
  local_f8 = "sort_keys";
  pcStack_f0 = "full_precision";
  pVStack_d0 = (Variant_conflict *)&pcStack_100;
  local_c8 = (Variant_conflict *)&local_f8;
  ppcStack_c0 = &pcStack_f0;
  D_METHODP((char *)&local_198,(char ***)"stringify",(uint)&local_d8);
  StringName::StringName((StringName *)&local_1a8,"JSON",false);
  ::Variant::Variant((Variant_conflict *)&local_a8,"");
  pVVar10 = local_48;
  ::Variant::Variant((Variant_conflict *)&local_90,true);
  ::Variant::Variant(local_78,false);
  local_58 = (undefined1  [16])0x0;
  local_60 = 0;
  local_d8 = (Variant_conflict *)&local_a8;
  pVStack_d0 = (Variant_conflict *)&local_90;
  local_c8 = local_78;
  pMVar6 = (MethodBind *)operator_new(0x60,"");
  MethodBind::MethodBind(pMVar6);
  *(undefined ***)pMVar6 = &PTR__gen_argument_type_0011fdd8;
  *(code **)(pMVar6 + 0x58) = stringify;
  MethodBind::_generate_argument_types((int)pMVar6);
  *(undefined4 *)(pMVar6 + 0x34) = 4;
  MethodBind::_set_static(SUB81(pMVar6,0));
  MethodBind::_set_returns(SUB81(pMVar6,0));
  StringName::operator=((StringName *)(pMVar6 + 0x18),(StringName *)&local_1a8);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_198,&local_d8,3);
  do {
    pVVar1 = pVVar10 + -0x18;
    pVVar10 = pVVar10 + -0x18;
    if (::Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      ::Variant::_clear_internal();
    }
  } while (pVVar10 != (Variant_conflict *)&local_a8);
  if ((StringName::configured != '\0') && (local_1a8 != (undefined *)0x0)) {
    StringName::unref();
  }
  plVar2 = local_188;
  if (local_188 != (long *)0x0) {
    LOCK();
    plVar8 = local_188 + -2;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      if (local_188 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      lVar4 = local_188[-1];
      lVar9 = 0;
      local_188 = (long *)0x0;
      plVar8 = plVar2;
      if (lVar4 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar8 != 0)) {
            StringName::unref();
          }
          lVar9 = lVar9 + 1;
          plVar8 = plVar8 + 1;
        } while (lVar4 != lVar9);
      }
      Memory::free_static(plVar2 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_198 != (undefined *)0x0)) {
    StringName::unref();
  }
  pVStack_d0 = (Variant_conflict *)0x0;
  local_d8 = (Variant_conflict *)0x1115a6;
  uVar7 = (uint)(Variant_conflict *)&local_a8;
  local_a8 = &local_d8;
  D_METHODP((char *)&local_198,(char ***)_LC136,uVar7);
  StringName::StringName((StringName *)&local_1a8,"JSON",false);
  auStack_a0 = (undefined1  [16])0x0;
  local_a8 = (Variant_conflict **)0x0;
  pMVar6 = (MethodBind *)operator_new(0x60,"");
  MethodBind::MethodBind(pMVar6);
  *(undefined ***)pMVar6 = &PTR__gen_argument_type_0011fe38;
  *(code **)(pMVar6 + 0x58) = parse_string;
  MethodBind::_generate_argument_types((int)pMVar6);
  *(undefined4 *)(pMVar6 + 0x34) = 1;
  MethodBind::_set_static(SUB81(pMVar6,0));
  MethodBind::_set_returns(SUB81(pMVar6,0));
  StringName::operator=((StringName *)(pMVar6 + 0x18),(StringName *)&local_1a8);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_198,(Variant_conflict **)0x0,0);
  if (::Variant::needs_deinit[(int)local_a8] != '\0') {
    ::Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_1a8 != (undefined *)0x0)) {
    StringName::unref();
  }
  plVar2 = local_188;
  if (local_188 != (long *)0x0) {
    LOCK();
    plVar8 = local_188 + -2;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      if (local_188 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      lVar4 = local_188[-1];
      lVar9 = 0;
      local_188 = (long *)0x0;
      plVar8 = plVar2;
      if (lVar4 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar8 != 0)) {
            StringName::unref();
          }
          lVar9 = lVar9 + 1;
          plVar8 = plVar8 + 1;
        } while (lVar4 != lVar9);
      }
      Memory::free_static(plVar2 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_198 != (undefined *)0x0)) {
    StringName::unref();
  }
  local_138 = 0;
  auStack_a0._0_8_ = &pcStack_140;
  local_148 = "json_text";
  pcStack_140 = "keep_text";
  local_a8 = (Variant_conflict **)&local_148;
  D_METHODP((char *)&local_198,(char ***)"parse",uVar7);
  ::Variant::Variant((Variant_conflict *)&local_a8,false);
  local_88 = (undefined1  [16])0x0;
  local_90 = 0;
  local_d8 = (Variant_conflict *)&local_a8;
  pMVar6 = create_method_bind<JSON,Error,String_const&,bool>(parse);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_198,&local_d8,1);
  if (::Variant::needs_deinit[(int)local_90] == '\0') {
    cVar3 = ::Variant::needs_deinit[(int)local_a8];
  }
  else {
    ::Variant::_clear_internal();
    cVar3 = ::Variant::needs_deinit[(int)local_a8];
  }
  if (cVar3 != '\0') {
    ::Variant::_clear_internal();
  }
  plVar2 = local_188;
  if (local_188 != (long *)0x0) {
    LOCK();
    plVar8 = local_188 + -2;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      if (local_188 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      lVar4 = local_188[-1];
      lVar9 = 0;
      local_188 = (long *)0x0;
      plVar8 = plVar2;
      if (lVar4 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar8 != 0)) {
            StringName::unref();
          }
          lVar9 = lVar9 + 1;
          plVar8 = plVar8 + 1;
        } while (lVar4 != lVar9);
      }
      Memory::free_static(plVar2 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_198 != (undefined *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_198,(char ***)"get_data",0);
  auStack_a0 = (undefined1  [16])0x0;
  local_a8 = (Variant_conflict **)0x0;
  pMVar6 = create_method_bind<JSON,Variant>(get_data);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_198,(Variant_conflict **)0x0,0);
  if (::Variant::needs_deinit[(int)local_a8] != '\0') {
    ::Variant::_clear_internal();
  }
  plVar2 = local_188;
  if (local_188 != (long *)0x0) {
    LOCK();
    plVar8 = local_188 + -2;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      if (local_188 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      lVar4 = local_188[-1];
      lVar9 = 0;
      local_188 = (long *)0x0;
      plVar8 = plVar2;
      if (lVar4 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar8 != 0)) {
            StringName::unref();
          }
          lVar9 = lVar9 + 1;
          plVar8 = plVar8 + 1;
        } while (lVar4 != lVar9);
      }
      Memory::free_static(plVar2 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_198 != (undefined *)0x0)) {
    StringName::unref();
  }
  local_d8 = (Variant_conflict *)&_LC146;
  pVStack_d0 = (Variant_conflict *)0x0;
  local_a8 = &local_d8;
  D_METHODP((char *)&local_198,(char ***)"set_data",uVar7);
  auStack_a0 = (undefined1  [16])0x0;
  local_a8 = (Variant_conflict **)0x0;
  pMVar6 = create_method_bind<JSON,Variant_const&>(set_data);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_198,(Variant_conflict **)0x0,0);
  if (::Variant::needs_deinit[(int)local_a8] != '\0') {
    ::Variant::_clear_internal();
  }
  plVar2 = local_188;
  if (local_188 != (long *)0x0) {
    LOCK();
    plVar8 = local_188 + -2;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      if (local_188 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      lVar4 = local_188[-1];
      lVar9 = 0;
      local_188 = (long *)0x0;
      plVar8 = plVar2;
      if (lVar4 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar8 != 0)) {
            StringName::unref();
          }
          lVar9 = lVar9 + 1;
          plVar8 = plVar8 + 1;
        } while (lVar4 != lVar9);
      }
      Memory::free_static(plVar2 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_198 != (undefined *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_198,(char ***)"get_parsed_text",0);
  auStack_a0 = (undefined1  [16])0x0;
  local_a8 = (Variant_conflict **)0x0;
  pMVar6 = create_method_bind<JSON,String>(get_parsed_text);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_198,(Variant_conflict **)0x0,0);
  if (::Variant::needs_deinit[(int)local_a8] != '\0') {
    ::Variant::_clear_internal();
  }
  plVar2 = local_188;
  if (local_188 != (long *)0x0) {
    LOCK();
    plVar8 = local_188 + -2;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      if (local_188 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      lVar4 = local_188[-1];
      lVar9 = 0;
      local_188 = (long *)0x0;
      plVar8 = plVar2;
      if (lVar4 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar8 != 0)) {
            StringName::unref();
          }
          lVar9 = lVar9 + 1;
          plVar8 = plVar8 + 1;
        } while (lVar4 != lVar9);
      }
      Memory::free_static(plVar2 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_198 != (undefined *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_198,(char ***)"get_error_line",0);
  auStack_a0 = (undefined1  [16])0x0;
  local_a8 = (Variant_conflict **)0x0;
  pMVar6 = create_method_bind<JSON,int>(get_error_line);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_198,(Variant_conflict **)0x0,0);
  if (::Variant::needs_deinit[(int)local_a8] != '\0') {
    ::Variant::_clear_internal();
  }
  plVar2 = local_188;
  if (local_188 != (long *)0x0) {
    LOCK();
    plVar8 = local_188 + -2;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      if (local_188 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      lVar4 = local_188[-1];
      lVar9 = 0;
      local_188 = (long *)0x0;
      plVar8 = plVar2;
      if (lVar4 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar8 != 0)) {
            StringName::unref();
          }
          lVar9 = lVar9 + 1;
          plVar8 = plVar8 + 1;
        } while (lVar4 != lVar9);
      }
      Memory::free_static(plVar2 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_198 != (undefined *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_198,(char ***)"get_error_message",0);
  auStack_a0 = (undefined1  [16])0x0;
  local_a8 = (Variant_conflict **)0x0;
  pMVar6 = create_method_bind<JSON,String>(get_error_message);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_198,(Variant_conflict **)0x0,0);
  if (::Variant::needs_deinit[(int)local_a8] != '\0') {
    ::Variant::_clear_internal();
  }
  plVar2 = local_188;
  if (local_188 != (long *)0x0) {
    LOCK();
    plVar8 = local_188 + -2;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      if (local_188 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      lVar4 = local_188[-1];
      lVar9 = 0;
      local_188 = (long *)0x0;
      plVar8 = plVar2;
      if (lVar4 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar8 != 0)) {
            StringName::unref();
          }
          lVar9 = lVar9 + 1;
          plVar8 = plVar8 + 1;
        } while (lVar4 != lVar9);
      }
      Memory::free_static(plVar2 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_198 != (undefined *)0x0)) {
    StringName::unref();
  }
  local_158 = 0;
  auStack_a0._0_8_ = &pcStack_160;
  local_168 = "variant";
  pcStack_160 = "full_objects";
  local_a8 = (Variant_conflict **)&local_168;
  D_METHODP((char *)&local_198,(char ***)"from_native",uVar7);
  StringName::StringName((StringName *)&local_1a8,"JSON",false);
  ::Variant::Variant((Variant_conflict *)&local_a8,false);
  local_88 = (undefined1  [16])0x0;
  local_90 = 0;
  local_d8 = (Variant_conflict *)&local_a8;
  pMVar6 = (MethodBind *)operator_new(0x60,"");
  MethodBind::MethodBind(pMVar6);
  *(undefined ***)pMVar6 = &PTR__gen_argument_type_00120078;
  *(code **)(pMVar6 + 0x58) = from_native;
  MethodBind::_generate_argument_types((int)pMVar6);
  *(undefined4 *)(pMVar6 + 0x34) = 2;
  MethodBind::_set_static(SUB81(pMVar6,0));
  MethodBind::_set_returns(SUB81(pMVar6,0));
  StringName::operator=((StringName *)(pMVar6 + 0x18),(StringName *)&local_1a8);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_198,&local_d8,1);
  if (::Variant::needs_deinit[(int)local_90] == '\0') {
    cVar3 = ::Variant::needs_deinit[(int)local_a8];
  }
  else {
    ::Variant::_clear_internal();
    cVar3 = ::Variant::needs_deinit[(int)local_a8];
  }
  if (cVar3 != '\0') {
    ::Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_1a8 != (undefined *)0x0)) {
    StringName::unref();
  }
  plVar2 = local_188;
  if (local_188 != (long *)0x0) {
    LOCK();
    plVar8 = local_188 + -2;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      if (local_188 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      lVar4 = local_188[-1];
      lVar9 = 0;
      local_188 = (long *)0x0;
      plVar8 = plVar2;
      if (lVar4 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar8 != 0)) {
            StringName::unref();
          }
          lVar9 = lVar9 + 1;
          plVar8 = plVar8 + 1;
        } while (lVar4 != lVar9);
      }
      Memory::free_static(plVar2 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_198 != (undefined *)0x0)) {
    StringName::unref();
  }
  local_118 = 0;
  auStack_a0._0_8_ = &pcStack_120;
  local_128 = &_LC26;
  pcStack_120 = "allow_objects";
  local_a8 = (Variant_conflict **)&local_128;
  D_METHODP((char *)&local_198,(char ***)"to_native",uVar7);
  StringName::StringName((StringName *)&local_1a8,"JSON",false);
  ::Variant::Variant((Variant_conflict *)&local_a8,false);
  local_88 = (undefined1  [16])0x0;
  local_90 = 0;
  local_d8 = (Variant_conflict *)&local_a8;
  pMVar6 = (MethodBind *)operator_new(0x60,"");
  MethodBind::MethodBind(pMVar6);
  *(undefined ***)pMVar6 = &PTR__gen_argument_type_00120078;
  *(code **)(pMVar6 + 0x58) = to_native;
  MethodBind::_generate_argument_types((int)pMVar6);
  *(undefined4 *)(pMVar6 + 0x34) = 2;
  MethodBind::_set_static(SUB81(pMVar6,0));
  MethodBind::_set_returns(SUB81(pMVar6,0));
  StringName::operator=((StringName *)(pMVar6 + 0x18),(StringName *)&local_1a8);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_198,&local_d8,1);
  if (::Variant::needs_deinit[(int)local_90] == '\0') {
    cVar3 = ::Variant::needs_deinit[(int)local_a8];
  }
  else {
    ::Variant::_clear_internal();
    cVar3 = ::Variant::needs_deinit[(int)local_a8];
  }
  if (cVar3 != '\0') {
    ::Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_1a8 != (undefined *)0x0)) {
    StringName::unref();
  }
  plVar2 = local_188;
  if (local_188 != (long *)0x0) {
    LOCK();
    plVar8 = local_188 + -2;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      if (local_188 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      lVar4 = local_188[-1];
      lVar9 = 0;
      local_188 = (long *)0x0;
      plVar8 = plVar2;
      if (lVar4 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar8 != 0)) {
            StringName::unref();
          }
          lVar9 = lVar9 + 1;
          plVar8 = plVar8 + 1;
        } while (lVar4 != lVar9);
      }
      Memory::free_static(plVar2 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_198 != (undefined *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_1b0,true);
  _scs_create((char *)&local_1b8,true);
  local_198 = &_LC2;
  local_1c0 = 0;
  local_1c8 = 0;
  local_190 = 0;
  String::parse_latin1((StrRange *)&local_1c8);
  local_1d0 = 0;
  local_198 = &_LC146;
  local_190 = 4;
  String::parse_latin1((StrRange *)&local_1d0);
  local_198 = (undefined *)((ulong)local_198 & 0xffffffff00000000);
  local_190 = 0;
  if (local_1d0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_190,(CowData *)&local_1d0);
  }
  local_188 = (long *)0x0;
  local_180 = 0;
  local_178 = 0;
  if (local_1c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_178,(CowData *)&local_1c8);
    local_170 = 0x20006;
    if (local_180 == 0x11) {
      StringName::StringName((StringName *)&local_1a8,(String *)&local_178,false);
      if (local_188 == (long *)local_1a8) {
        if ((StringName::configured != '\0') && (local_1a8 != (undefined *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_188 = (long *)local_1a8;
      }
      goto LAB_00108055;
    }
  }
  local_170 = 0x20006;
  StringName::operator=((StringName *)&local_188,(StringName *)&local_1c0);
LAB_00108055:
  local_1d8 = 0;
  local_1a8 = &_LC0;
  local_1a0 = 4;
  String::parse_latin1((StrRange *)&local_1d8);
  StringName::StringName((StringName *)&local_1a8,(String *)&local_1d8,false);
  ClassDB::add_property
            ((StringName *)&local_1a8,(PropertyInfo *)&local_198,(StringName *)&local_1b8,
             (StringName *)&local_1b0,-1);
  if ((StringName::configured != '\0') && (local_1a8 != (undefined *)0x0)) {
    StringName::unref();
  }
  lVar4 = local_1d8;
  if (local_1d8 != 0) {
    LOCK();
    plVar2 = (long *)(local_1d8 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_1d8 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  lVar4 = local_178;
  if (local_178 != 0) {
    LOCK();
    plVar2 = (long *)(local_178 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_178 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_188 != (long *)0x0)) {
    StringName::unref();
  }
  lVar4 = local_190;
  if (local_190 != 0) {
    LOCK();
    plVar2 = (long *)(local_190 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_190 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  lVar4 = local_1d0;
  if (local_1d0 != 0) {
    LOCK();
    plVar2 = (long *)(local_1d0 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_1d0 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  lVar4 = local_1c8;
  if (local_1c8 != 0) {
    LOCK();
    plVar2 = (long *)(local_1c8 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_1c8 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  if ((((StringName::configured != '\0') &&
       ((local_1c0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_1b8 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_1b0 != 0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JSON::_from_native(Variant const&, bool, int) */

Variant_conflict * JSON::_from_native(Variant_conflict *param_1,bool param_2,int param_3)

{
  long *plVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  char cVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  float *pfVar9;
  List *pLVar10;
  long lVar11;
  Object *pOVar12;
  Variant_conflict *pVVar13;
  int in_ECX;
  char *pcVar14;
  undefined8 uVar15;
  undefined7 in_register_00000031;
  String *pSVar16;
  Variant_conflict *this;
  int iVar17;
  long lVar18;
  long in_FS_OFFSET;
  float fVar19;
  undefined8 in_XMM1_Qa;
  undefined1 auVar20 [16];
  undefined1 auVar21 [12];
  Dictionary *local_158;
  Array *local_150;
  CowData<char32_t> *local_148;
  ulong *local_138;
  Variant_conflict local_118 [8];
  Array local_110 [8];
  long *local_108;
  undefined8 local_100;
  char *local_f8;
  undefined8 local_f0;
  long *local_e8;
  long local_e0;
  Object *local_d8;
  undefined8 local_c8;
  undefined1 local_c0 [8];
  undefined8 uStack_b8;
  ulong local_a8;
  undefined1 local_a0 [16];
  float local_88;
  float local_84;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  long local_40;
  
  pVVar13 = (Variant_conflict *)CONCAT71(in_register_00000031,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  bVar7 = SUB41(param_3,0);
  switch(*(undefined4 *)pVVar13) {
  case 0:
  case 1:
    ::Variant::Variant(param_1,pVVar13);
    break;
  case 2:
    ::Variant::operator_cast_to_String((Variant_conflict *)&local_f8);
    pSVar16 = (String *)&_LC162;
    goto LAB_00108692;
  case 3:
    ::Variant::operator_cast_to_String((Variant_conflict *)&local_f8);
    pSVar16 = (String *)&_LC163;
    goto LAB_00108692;
  case 4:
    ::Variant::operator_cast_to_String((Variant_conflict *)&local_f8);
    pSVar16 = (String *)&_LC164;
    goto LAB_00108692;
  case 5:
    in_XMM1_Qa = ::Variant::operator_cast_to_Vector2(pVVar13);
    Array::Array((Array *)&local_100);
    ::Variant::Variant((Variant_conflict *)&local_88,(float)in_XMM1_Qa);
    Array::push_back((Variant_conflict *)&local_100);
    cVar5 = ::Variant::needs_deinit[(int)local_88];
    goto joined_r0x00109c3d;
  case 6:
    uVar15 = ::Variant::operator_cast_to_Vector2i(pVVar13);
    Array::Array((Array *)&local_100);
    ::Variant::Variant((Variant_conflict *)&local_88,(int)uVar15);
    Array::push_back((Variant_conflict *)&local_100);
    cVar5 = ::Variant::needs_deinit[(int)local_88];
    goto joined_r0x0010a8a3;
  case 7:
    uVar15 = ::Variant::operator_cast_to_Rect2(pVVar13);
    goto LAB_00109b98;
  case 8:
    auVar20 = ::Variant::operator_cast_to_Rect2i(pVVar13);
    uVar15 = auVar20._8_8_;
    Array::Array((Array *)&local_100);
    ::Variant::Variant((Variant_conflict *)&local_88,auVar20._0_4_);
    Array::push_back((Variant_conflict *)&local_100);
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    ::Variant::Variant((Variant_conflict *)&local_88,auVar20._4_4_);
    Array::push_back((Variant_conflict *)&local_100);
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    ::Variant::Variant((Variant_conflict *)&local_88,auVar20._8_4_);
    Array::push_back((Variant_conflict *)&local_100);
    cVar5 = ::Variant::needs_deinit[(int)local_88];
joined_r0x0010a8a3:
    if (cVar5 != '\0') {
      ::Variant::_clear_internal();
    }
    ::Variant::Variant((Variant_conflict *)&local_88,(int)((ulong)uVar15 >> 0x20));
    goto LAB_001092a8;
  case 9:
    local_c8 = ::Variant::operator_cast_to_Vector3(pVVar13);
    local_c0._0_4_ = (int)in_XMM1_Qa;
    Array::Array((Array *)&local_100);
    ::Variant::Variant((Variant_conflict *)&local_88,(float)local_c8);
    Array::push_back((Variant_conflict *)&local_100);
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    ::Variant::Variant((Variant_conflict *)&local_88,local_c8._4_4_);
    Array::push_back((Variant_conflict *)&local_100);
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    ::Variant::Variant((Variant_conflict *)&local_88,(float)local_c0._0_4_);
    goto LAB_0010a708;
  case 10:
    auVar21 = ::Variant::operator_cast_to_Vector3i(pVVar13);
    local_c8 = auVar21._0_8_;
    local_c0._0_4_ = auVar21._8_4_;
    Array::Array((Array *)&local_100);
    ::Variant::Variant((Variant_conflict *)&local_88,(int)(float)local_c8);
    Array::push_back((Variant_conflict *)&local_100);
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    ::Variant::Variant((Variant_conflict *)&local_88,(int)local_c8._4_4_);
    Array::push_back((Variant_conflict *)&local_100);
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    ::Variant::Variant((Variant_conflict *)&local_88,local_c0._0_4_);
    goto LAB_001092a8;
  case 0xb:
    ::Variant::operator_cast_to_Transform2D((Variant_conflict *)&local_c8);
    Array::Array((Array *)&local_100);
    ::Variant::Variant((Variant_conflict *)&local_88,(float)local_c8);
    Array::push_back((Variant_conflict *)&local_100);
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    ::Variant::Variant((Variant_conflict *)&local_88,local_c8._4_4_);
    Array::push_back((Variant_conflict *)&local_100);
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    ::Variant::Variant((Variant_conflict *)&local_88,(float)local_c0._0_4_);
    Array::push_back((Variant_conflict *)&local_100);
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    ::Variant::Variant((Variant_conflict *)&local_88,(float)local_c0._4_4_);
    Array::push_back((Variant_conflict *)&local_100);
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    ::Variant::Variant((Variant_conflict *)&local_88,(float)uStack_b8);
    Array::push_back((Variant_conflict *)&local_100);
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    ::Variant::Variant((Variant_conflict *)&local_88,uStack_b8._4_4_);
    Array::push_back((Variant_conflict *)&local_100);
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    Dictionary::Dictionary((Dictionary *)&local_f8);
    ::Variant::get_type_name((String *)&local_e8,*(undefined4 *)pVVar13);
    ::Variant::Variant((Variant_conflict *)&local_88,(String *)&local_e8);
    ::Variant::Variant((Variant_conflict *)&local_a8,"type");
    pVVar13 = (Variant_conflict *)Dictionary::operator[]((Variant_conflict *)&local_f8);
    if (pVVar13 != (Variant_conflict *)&local_88) {
      if (::Variant::needs_deinit[*(int *)pVVar13] != '\0') {
        ::Variant::_clear_internal();
      }
      *(undefined4 *)pVVar13 = 0;
      *(float *)pVVar13 = local_88;
      *(ulong *)(pVVar13 + 8) = CONCAT44(fStack_7c,local_80);
      *(ulong *)(pVVar13 + 0x10) = CONCAT44(fStack_74,fStack_78);
      local_88 = 0.0;
    }
    goto LAB_0010932c;
  case 0xc:
    uVar15 = ::Variant::operator_cast_to_Vector4(pVVar13);
    goto LAB_00109b98;
  case 0xd:
    auVar20 = ::Variant::operator_cast_to_Vector4i(pVVar13);
    Array::Array((Array *)&local_100);
    ::Variant::Variant((Variant_conflict *)&local_88,auVar20._0_4_);
    Array::push_back((Variant_conflict *)&local_100);
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    ::Variant::Variant((Variant_conflict *)&local_88,auVar20._4_4_);
    Array::push_back((Variant_conflict *)&local_100);
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    ::Variant::Variant((Variant_conflict *)&local_88,auVar20._8_4_);
    Array::push_back((Variant_conflict *)&local_100);
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    ::Variant::Variant((Variant_conflict *)&local_88,auVar20._12_4_);
LAB_0010a708:
    Array::push_back((Variant_conflict *)&local_100);
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    Dictionary::Dictionary((Dictionary *)&local_f8);
    ::Variant::get_type_name((String *)&local_e8,*(undefined4 *)pVVar13);
    ::Variant::Variant((Variant_conflict *)&local_88,(String *)&local_e8);
    ::Variant::Variant((Variant_conflict *)&local_a8,"type");
    pVVar13 = (Variant_conflict *)Dictionary::operator[]((Variant_conflict *)&local_f8);
    if (pVVar13 != (Variant_conflict *)&local_88) {
      if (::Variant::needs_deinit[*(int *)pVVar13] != '\0') {
        ::Variant::_clear_internal();
      }
      *(int *)pVVar13 = 0;
      *(float *)pVVar13 = local_88;
      *(ulong *)(pVVar13 + 8) = CONCAT44(fStack_7c,local_80);
      *(ulong *)(pVVar13 + 0x10) = CONCAT44(fStack_74,fStack_78);
      local_88 = 0.0;
    }
LAB_00109a40:
    local_148 = (CowData<char32_t> *)&local_e8;
    local_158 = (Dictionary *)&local_f8;
    if (::Variant::needs_deinit[(int)local_a8] != '\0') {
      ::Variant::_clear_internal();
    }
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    CowData<char32_t>::_unref(local_148);
    ::Variant::Variant((Variant_conflict *)&local_88,(Array *)&local_100);
    ::Variant::Variant((Variant_conflict *)&local_a8,"args");
    pVVar13 = (Variant_conflict *)Dictionary::operator[]((Variant_conflict *)local_158);
    if (pVVar13 != (Variant_conflict *)&local_88) {
      if (::Variant::needs_deinit[*(int *)pVVar13] != '\0') {
        ::Variant::_clear_internal();
      }
      *(int *)pVVar13 = 0;
      *(float *)pVVar13 = local_88;
      *(ulong *)(pVVar13 + 8) = CONCAT44(fStack_7c,local_80);
      *(ulong *)(pVVar13 + 0x10) = CONCAT44(fStack_74,fStack_78);
      local_88 = 0.0;
    }
    goto LAB_0010938e;
  case 0xe:
    local_c8 = ::Variant::operator_cast_to_Plane(pVVar13);
    local_c0 = (undefined1  [8])in_XMM1_Qa;
    Array::Array((Array *)&local_100);
    ::Variant::Variant((Variant_conflict *)&local_88,(float)local_c8);
    Array::push_back((Variant_conflict *)&local_100);
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    ::Variant::Variant((Variant_conflict *)&local_88,local_c8._4_4_);
    Array::push_back((Variant_conflict *)&local_100);
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    ::Variant::Variant((Variant_conflict *)&local_88,(float)local_c0._0_4_);
    Array::push_back((Variant_conflict *)&local_100);
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    ::Variant::Variant((Variant_conflict *)&local_88,(float)local_c0._4_4_);
    Array::push_back((Variant_conflict *)&local_100);
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    Dictionary::Dictionary((Dictionary *)&local_f8);
    ::Variant::get_type_name((String *)&local_e8,*(undefined4 *)pVVar13);
    ::Variant::Variant((Variant_conflict *)&local_88,(String *)&local_e8);
    ::Variant::Variant((Variant_conflict *)&local_a8,"type");
    pVVar13 = (Variant_conflict *)Dictionary::operator[]((Variant_conflict *)&local_f8);
    ::Variant::operator=(pVVar13,(Variant_conflict *)&local_88);
    goto LAB_00109a40;
  case 0xf:
    ::Variant::operator_cast_to_Quaternion((Variant_conflict *)&local_c8);
    Array::Array((Array *)&local_100);
    ::Variant::Variant((Variant_conflict *)&local_88,(float)local_c8);
    Array::push_back((Variant_conflict *)&local_100);
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    ::Variant::Variant((Variant_conflict *)&local_88,local_c8._4_4_);
    Array::push_back((Variant_conflict *)&local_100);
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    ::Variant::Variant((Variant_conflict *)&local_88,(float)local_c0._0_4_);
    Array::push_back((Variant_conflict *)&local_100);
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    fVar19 = (float)local_c0._4_4_;
    goto LAB_001092a0;
  case 0x10:
    ::Variant::operator_cast_to_AABB((Variant_conflict *)&local_c8);
    Array::Array((Array *)&local_100);
    ::Variant::Variant((Variant_conflict *)&local_88,(float)local_c8);
    Array::push_back((Variant_conflict *)&local_100);
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    ::Variant::Variant((Variant_conflict *)&local_88,local_c8._4_4_);
    Array::push_back((Variant_conflict *)&local_100);
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    ::Variant::Variant((Variant_conflict *)&local_88,(float)local_c0._0_4_);
    Array::push_back((Variant_conflict *)&local_100);
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    ::Variant::Variant((Variant_conflict *)&local_88,(float)local_c0._4_4_);
    Array::push_back((Variant_conflict *)&local_100);
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    ::Variant::Variant((Variant_conflict *)&local_88,(float)uStack_b8);
    Array::push_back((Variant_conflict *)&local_100);
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    fVar19 = uStack_b8._4_4_;
    goto LAB_001092a0;
  case 0x11:
    ::Variant::operator_cast_to_Basis((Variant_conflict *)&local_88);
    Array::Array((Array *)&local_100);
    ::Variant::Variant((Variant_conflict *)&local_a8,local_88);
    Array::push_back((Variant_conflict *)&local_100);
    if (::Variant::needs_deinit[(int)local_a8] != '\0') {
      ::Variant::_clear_internal();
    }
    ::Variant::Variant((Variant_conflict *)&local_a8,fStack_7c);
    Array::push_back((Variant_conflict *)&local_100);
    if (::Variant::needs_deinit[(int)local_a8] != '\0') {
      ::Variant::_clear_internal();
    }
    ::Variant::Variant((Variant_conflict *)&local_a8,local_70);
    Array::push_back((Variant_conflict *)&local_100);
    if (::Variant::needs_deinit[(int)local_a8] != '\0') {
      ::Variant::_clear_internal();
    }
    ::Variant::Variant((Variant_conflict *)&local_a8,local_84);
    Array::push_back((Variant_conflict *)&local_100);
    if (::Variant::needs_deinit[(int)local_a8] != '\0') {
      ::Variant::_clear_internal();
    }
    ::Variant::Variant((Variant_conflict *)&local_a8,fStack_78);
    Array::push_back((Variant_conflict *)&local_100);
    if (::Variant::needs_deinit[(int)local_a8] != '\0') {
      ::Variant::_clear_internal();
    }
    ::Variant::Variant((Variant_conflict *)&local_a8,local_6c);
    Array::push_back((Variant_conflict *)&local_100);
    if (::Variant::needs_deinit[(int)local_a8] != '\0') {
      ::Variant::_clear_internal();
    }
    ::Variant::Variant((Variant_conflict *)&local_a8,local_80);
    Array::push_back((Variant_conflict *)&local_100);
    if (::Variant::needs_deinit[(int)local_a8] != '\0') {
      ::Variant::_clear_internal();
    }
    ::Variant::Variant((Variant_conflict *)&local_a8,fStack_74);
    Array::push_back((Variant_conflict *)&local_100);
    if (::Variant::needs_deinit[(int)local_a8] != '\0') {
      ::Variant::_clear_internal();
    }
    ::Variant::Variant((Variant_conflict *)&local_a8,local_68);
    Array::push_back((Variant_conflict *)&local_100);
    if (::Variant::needs_deinit[(int)local_a8] != '\0') {
      ::Variant::_clear_internal();
    }
    Dictionary::Dictionary((Dictionary *)&local_f8);
    ::Variant::get_type_name((String *)&local_e8,*(undefined4 *)pVVar13);
    ::Variant::Variant((Variant_conflict *)&local_a8,(String *)&local_e8);
    ::Variant::Variant((Variant_conflict *)&local_c8,"type");
    pVVar13 = (Variant_conflict *)Dictionary::operator[]((Variant_conflict *)&local_f8);
    if (pVVar13 != (Variant_conflict *)&local_a8) {
      if (::Variant::needs_deinit[*(int *)pVVar13] != '\0') {
        ::Variant::_clear_internal();
      }
      *(undefined4 *)pVVar13 = 0;
      *(int *)pVVar13 = (int)local_a8;
      *(undefined8 *)(pVVar13 + 8) = local_a0._0_8_;
      *(undefined8 *)(pVVar13 + 0x10) = local_a0._8_8_;
      local_a8 = local_a8 & 0xffffffff00000000;
    }
    if (::Variant::needs_deinit[(int)(float)local_c8] != '\0') {
      ::Variant::_clear_internal();
    }
    if (::Variant::needs_deinit[(int)local_a8] != '\0') {
      ::Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
    ::Variant::Variant((Variant_conflict *)&local_a8,(Array *)&local_100);
    ::Variant::Variant((Variant_conflict *)&local_c8,"args");
    pVVar13 = (Variant_conflict *)Dictionary::operator[]((Variant_conflict *)&local_f8);
    if (pVVar13 != (Variant_conflict *)&local_a8) {
      if (::Variant::needs_deinit[*(int *)pVVar13] != '\0') {
        ::Variant::_clear_internal();
      }
      *(undefined4 *)pVVar13 = 0;
      *(int *)pVVar13 = (int)local_a8;
      *(undefined8 *)(pVVar13 + 8) = local_a0._0_8_;
      *(undefined8 *)(pVVar13 + 0x10) = local_a0._8_8_;
      local_a8 = local_a8 & 0xffffffff00000000;
    }
    goto LAB_00109122;
  case 0x12:
    ::Variant::operator_cast_to_Transform3D((Variant_conflict *)&local_88);
    Array::Array((Array *)&local_100);
    ::Variant::Variant((Variant_conflict *)&local_a8,local_88);
    Array::push_back((Variant_conflict *)&local_100);
    if (::Variant::needs_deinit[(int)local_a8] != '\0') {
      ::Variant::_clear_internal();
    }
    ::Variant::Variant((Variant_conflict *)&local_a8,fStack_7c);
    Array::push_back((Variant_conflict *)&local_100);
    if (::Variant::needs_deinit[(int)local_a8] != '\0') {
      ::Variant::_clear_internal();
    }
    ::Variant::Variant((Variant_conflict *)&local_a8,local_70);
    Array::push_back((Variant_conflict *)&local_100);
    if (::Variant::needs_deinit[(int)local_a8] != '\0') {
      ::Variant::_clear_internal();
    }
    ::Variant::Variant((Variant_conflict *)&local_a8,local_84);
    Array::push_back((Variant_conflict *)&local_100);
    if (::Variant::needs_deinit[(int)local_a8] != '\0') {
      ::Variant::_clear_internal();
    }
    ::Variant::Variant((Variant_conflict *)&local_a8,fStack_78);
    Array::push_back((Variant_conflict *)&local_100);
    if (::Variant::needs_deinit[(int)local_a8] != '\0') {
      ::Variant::_clear_internal();
    }
    ::Variant::Variant((Variant_conflict *)&local_a8,local_6c);
    Array::push_back((Variant_conflict *)&local_100);
    if (::Variant::needs_deinit[(int)local_a8] != '\0') {
      ::Variant::_clear_internal();
    }
    ::Variant::Variant((Variant_conflict *)&local_a8,local_80);
    Array::push_back((Variant_conflict *)&local_100);
    if (::Variant::needs_deinit[(int)local_a8] != '\0') {
      ::Variant::_clear_internal();
    }
    ::Variant::Variant((Variant_conflict *)&local_a8,fStack_74);
    Array::push_back((Variant_conflict *)&local_100);
    if (::Variant::needs_deinit[(int)local_a8] != '\0') {
      ::Variant::_clear_internal();
    }
    ::Variant::Variant((Variant_conflict *)&local_a8,local_68);
    Array::push_back((Variant_conflict *)&local_100);
    if (::Variant::needs_deinit[(int)local_a8] != '\0') {
      ::Variant::_clear_internal();
    }
    ::Variant::Variant((Variant_conflict *)&local_a8,local_64);
    Array::push_back((Variant_conflict *)&local_100);
    if (::Variant::needs_deinit[(int)local_a8] != '\0') {
      ::Variant::_clear_internal();
    }
    ::Variant::Variant((Variant_conflict *)&local_a8,local_60);
    Array::push_back((Variant_conflict *)&local_100);
    if (::Variant::needs_deinit[(int)local_a8] != '\0') {
      ::Variant::_clear_internal();
    }
    ::Variant::Variant((Variant_conflict *)&local_a8,local_5c);
    Array::push_back((Variant_conflict *)&local_100);
    if (::Variant::needs_deinit[(int)local_a8] != '\0') {
      ::Variant::_clear_internal();
    }
    Dictionary::Dictionary((Dictionary *)&local_f8);
    ::Variant::get_type_name((String *)&local_e8,*(undefined4 *)pVVar13);
    ::Variant::Variant((Variant_conflict *)&local_a8,(String *)&local_e8);
    ::Variant::Variant((Variant_conflict *)&local_c8,"type");
    pVVar13 = (Variant_conflict *)Dictionary::operator[]((Variant_conflict *)&local_f8);
    ::Variant::operator=(pVVar13,(Variant_conflict *)&local_a8);
    if (::Variant::needs_deinit[(int)(float)local_c8] != '\0') {
      ::Variant::_clear_internal();
    }
    if (::Variant::needs_deinit[(int)local_a8] != '\0') {
      ::Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
    ::Variant::Variant((Variant_conflict *)&local_a8,(Array *)&local_100);
    ::Variant::Variant((Variant_conflict *)&local_c8,"args");
    pVVar13 = (Variant_conflict *)Dictionary::operator[]((Variant_conflict *)&local_f8);
    ::Variant::operator=(pVVar13,(Variant_conflict *)&local_a8);
LAB_00109122:
    if (::Variant::needs_deinit[(int)(float)local_c8] != '\0') {
      ::Variant::_clear_internal();
    }
    if (::Variant::needs_deinit[(int)local_a8] != '\0') {
      ::Variant::_clear_internal();
    }
    goto LAB_00109150;
  case 0x13:
    ::Variant::operator_cast_to_Projection((Variant_conflict *)&local_88);
    Array::Array((Array *)&local_100);
    ::Variant::Variant((Variant_conflict *)&local_a8,local_88);
    Array::push_back((Variant_conflict *)&local_100);
    if (::Variant::needs_deinit[(int)local_a8] != '\0') {
      ::Variant::_clear_internal();
    }
    ::Variant::Variant((Variant_conflict *)&local_a8,local_84);
    Array::push_back((Variant_conflict *)&local_100);
    if (::Variant::needs_deinit[(int)local_a8] != '\0') {
      ::Variant::_clear_internal();
    }
    ::Variant::Variant((Variant_conflict *)&local_a8,local_80);
    Array::push_back((Variant_conflict *)&local_100);
    if (::Variant::needs_deinit[(int)local_a8] != '\0') {
      ::Variant::_clear_internal();
    }
    ::Variant::Variant((Variant_conflict *)&local_a8,fStack_7c);
    Array::push_back((Variant_conflict *)&local_100);
    if (::Variant::needs_deinit[(int)local_a8] != '\0') {
      ::Variant::_clear_internal();
    }
    ::Variant::Variant((Variant_conflict *)&local_a8,fStack_78);
    Array::push_back((Variant_conflict *)&local_100);
    if (::Variant::needs_deinit[(int)local_a8] != '\0') {
      ::Variant::_clear_internal();
    }
    ::Variant::Variant((Variant_conflict *)&local_a8,fStack_74);
    Array::push_back((Variant_conflict *)&local_100);
    if (::Variant::needs_deinit[(int)local_a8] != '\0') {
      ::Variant::_clear_internal();
    }
    ::Variant::Variant((Variant_conflict *)&local_a8,local_70);
    Array::push_back((Variant_conflict *)&local_100);
    if (::Variant::needs_deinit[(int)local_a8] != '\0') {
      ::Variant::_clear_internal();
    }
    ::Variant::Variant((Variant_conflict *)&local_a8,local_6c);
    Array::push_back((Variant_conflict *)&local_100);
    if (::Variant::needs_deinit[(int)local_a8] != '\0') {
      ::Variant::_clear_internal();
    }
    ::Variant::Variant((Variant_conflict *)&local_a8,local_68);
    Array::push_back((Variant_conflict *)&local_100);
    if (::Variant::needs_deinit[(int)local_a8] != '\0') {
      ::Variant::_clear_internal();
    }
    ::Variant::Variant((Variant_conflict *)&local_a8,local_64);
    Array::push_back((Variant_conflict *)&local_100);
    if (::Variant::needs_deinit[(int)local_a8] != '\0') {
      ::Variant::_clear_internal();
    }
    ::Variant::Variant((Variant_conflict *)&local_a8,local_60);
    Array::push_back((Variant_conflict *)&local_100);
    if (::Variant::needs_deinit[(int)local_a8] != '\0') {
      ::Variant::_clear_internal();
    }
    ::Variant::Variant((Variant_conflict *)&local_a8,local_5c);
    Array::push_back((Variant_conflict *)&local_100);
    if (::Variant::needs_deinit[(int)local_a8] != '\0') {
      ::Variant::_clear_internal();
    }
    ::Variant::Variant((Variant_conflict *)&local_a8,local_58);
    Array::push_back((Variant_conflict *)&local_100);
    if (::Variant::needs_deinit[(int)local_a8] != '\0') {
      ::Variant::_clear_internal();
    }
    ::Variant::Variant((Variant_conflict *)&local_a8,local_54);
    Array::push_back((Variant_conflict *)&local_100);
    if (::Variant::needs_deinit[(int)local_a8] != '\0') {
      ::Variant::_clear_internal();
    }
    ::Variant::Variant((Variant_conflict *)&local_a8,local_50);
    Array::push_back((Variant_conflict *)&local_100);
    if (::Variant::needs_deinit[(int)local_a8] != '\0') {
      ::Variant::_clear_internal();
    }
    ::Variant::Variant((Variant_conflict *)&local_a8,local_4c);
    Array::push_back((Variant_conflict *)&local_100);
    if (::Variant::needs_deinit[(int)local_a8] != '\0') {
      ::Variant::_clear_internal();
    }
    Dictionary::Dictionary((Dictionary *)&local_f8);
    ::Variant::get_type_name((String *)&local_e8,*(undefined4 *)pVVar13);
    ::Variant::Variant((Variant_conflict *)&local_a8,(String *)&local_e8);
    ::Variant::Variant((Variant_conflict *)&local_c8,"type");
    pVVar13 = (Variant_conflict *)Dictionary::operator[]((Variant_conflict *)&local_f8);
    if (pVVar13 != (Variant_conflict *)&local_a8) {
      if (::Variant::needs_deinit[*(int *)pVVar13] != '\0') {
        ::Variant::_clear_internal();
      }
      *(undefined4 *)pVVar13 = 0;
      *(int *)pVVar13 = (int)local_a8;
      *(undefined8 *)(pVVar13 + 8) = local_a0._0_8_;
      *(undefined8 *)(pVVar13 + 0x10) = local_a0._8_8_;
      local_a8 = local_a8 & 0xffffffff00000000;
    }
    if (::Variant::needs_deinit[(int)(float)local_c8] != '\0') {
      ::Variant::_clear_internal();
    }
    if (::Variant::needs_deinit[(int)local_a8] != '\0') {
      ::Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
    ::Variant::Variant((Variant_conflict *)&local_a8,(Array *)&local_100);
    ::Variant::Variant((Variant_conflict *)&local_c8,"args");
    pVVar13 = (Variant_conflict *)Dictionary::operator[]((Variant_conflict *)&local_f8);
    ::Variant::operator=(pVVar13,(Variant_conflict *)&local_a8);
    if (::Variant::needs_deinit[(int)(float)local_c8] != '\0') {
      ::Variant::_clear_internal();
    }
    if (::Variant::needs_deinit[(int)local_a8] != '\0') {
      ::Variant::_clear_internal();
    }
    ::Variant::Variant(param_1,(Dictionary *)&local_f8);
    Dictionary::~Dictionary((Dictionary *)&local_f8);
    Array::~Array((Array *)&local_100);
    Projection::~Projection((Projection *)&local_88);
    break;
  case 0x14:
    uVar15 = ::Variant::operator_cast_to_Color(pVVar13);
LAB_00109b98:
    Array::Array((Array *)&local_100);
    ::Variant::Variant((Variant_conflict *)&local_88,(float)uVar15);
    Array::push_back((Variant_conflict *)&local_100);
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    ::Variant::Variant((Variant_conflict *)&local_88,(float)((ulong)uVar15 >> 0x20));
    Array::push_back((Variant_conflict *)&local_100);
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    ::Variant::Variant((Variant_conflict *)&local_88,(float)in_XMM1_Qa);
    Array::push_back((Variant_conflict *)&local_100);
    cVar5 = ::Variant::needs_deinit[(int)local_88];
joined_r0x00109c3d:
    fVar19 = (float)((ulong)in_XMM1_Qa >> 0x20);
    if (cVar5 != '\0') {
      ::Variant::_clear_internal();
    }
LAB_001092a0:
    ::Variant::Variant((Variant_conflict *)&local_88,fVar19);
LAB_001092a8:
    Array::push_back((Variant_conflict *)&local_100);
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    Dictionary::Dictionary((Dictionary *)&local_f8);
    ::Variant::get_type_name((String *)&local_e8,*(undefined4 *)pVVar13);
    ::Variant::Variant((Variant_conflict *)&local_88,(String *)&local_e8);
    ::Variant::Variant((Variant_conflict *)&local_a8,"type");
    pVVar13 = (Variant_conflict *)Dictionary::operator[]((Variant_conflict *)&local_f8);
    ::Variant::operator=(pVVar13,(Variant_conflict *)&local_88);
LAB_0010932c:
    local_148 = (CowData<char32_t> *)&local_e8;
    local_158 = (Dictionary *)&local_f8;
    if (::Variant::needs_deinit[(int)local_a8] != '\0') {
      ::Variant::_clear_internal();
    }
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    CowData<char32_t>::_unref(local_148);
    ::Variant::Variant((Variant_conflict *)&local_88,(Array *)&local_100);
    ::Variant::Variant((Variant_conflict *)&local_a8,"args");
    pVVar13 = (Variant_conflict *)Dictionary::operator[]((Variant_conflict *)local_158);
    ::Variant::operator=(pVVar13,(Variant_conflict *)&local_88);
LAB_0010938e:
    if (::Variant::needs_deinit[(int)local_a8] != '\0') {
      ::Variant::_clear_internal();
    }
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
LAB_00109150:
    local_158 = (Dictionary *)&local_f8;
    ::Variant::Variant(param_1,local_158);
    Dictionary::~Dictionary(local_158);
    Array::~Array((Array *)&local_100);
    break;
  case 0x15:
    ::Variant::operator_cast_to_String((Variant_conflict *)&local_f8);
    pSVar16 = (String *)&_LC165;
    goto LAB_00108692;
  case 0x16:
    ::Variant::operator_cast_to_String((Variant_conflict *)&local_f8);
    pSVar16 = (String *)&_LC166;
LAB_00108692:
    operator+((char *)&local_e8,pSVar16);
    ::Variant::Variant(param_1,(String *)&local_e8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
    break;
  case 0x17:
  case 0x19:
  case 0x1a:
    Dictionary::Dictionary((Dictionary *)&local_f8);
    ::Variant::get_type_name((String *)&local_e8,*(undefined4 *)pVVar13);
    ::Variant::Variant((Variant_conflict *)&local_88,(String *)&local_e8);
    ::Variant::Variant((Variant_conflict *)&local_a8,"type");
    pVVar13 = (Variant_conflict *)Dictionary::operator[]((Variant_conflict *)&local_f8);
    ::Variant::operator=(pVVar13,(Variant_conflict *)&local_88);
    if (::Variant::needs_deinit[(int)local_a8] != '\0') {
      ::Variant::_clear_internal();
    }
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
    ::Variant::Variant(param_1,(Dictionary *)&local_f8);
    Dictionary::~Dictionary((Dictionary *)&local_f8);
    break;
  case 0x18:
    if (bVar7 == false) {
      uVar15 = 0x362;
      pcVar14 = "Condition \"!p_full_objects\" is true. Returning: Variant()";
LAB_0010b5d3:
      _err_print_error("_from_native","core/io/json.cpp",uVar15,pcVar14,0,0);
    }
    else {
      if (0x400 < in_ECX) {
        _err_print_error("_from_native","core/io/json.cpp",0x364,
                         "Condition \"p_depth > Variant::MAX_RECURSION_DEPTH\" is true. Returning: Variant()"
                         ,"Variant is too deep. Bailing.",0,0);
        goto LAB_0010b04a;
      }
      pLVar10 = (List *)::Variant::get_validated_object();
      if (pLVar10 != (List *)0x0) {
        (**(code **)(*(long *)pLVar10 + 0x48))((String *)&local_f8,pLVar10);
        StringName::StringName((StringName *)&local_e8,(String *)&local_f8,false);
        cVar5 = ClassDB::can_instantiate((StringName *)&local_e8);
        if ((StringName::configured != '\0') && (local_e8 != (long *)0x0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
        if (cVar5 != '\0') {
          local_108 = (long *)0x0;
          Object::get_property_list
                    (pLVar10,SUB81((List<PropertyInfo,DefaultAllocator> *)&local_108,0));
          Array::Array((Array *)&local_100);
          if ((local_108 != (long *)0x0) && (lVar18 = *local_108, lVar18 != 0)) {
            do {
              if ((*(byte *)(lVar18 + 0x28) & 2) != 0) {
                pSVar16 = (String *)(lVar18 + 8);
                local_a8 = 0;
                local_a0 = (undefined1  [16])0x0;
                cVar5 = operator==(pSVar16,(StringName *)(CoreStringNames::singleton + 0x10));
                if (cVar5 == '\0') {
                  StringName::StringName((StringName *)&local_e8,pSVar16,false);
                  Object::get((StringName *)&local_88,(bool *)pLVar10);
                  if (::Variant::needs_deinit[(int)local_a8] != '\0') {
                    ::Variant::_clear_internal();
                  }
                  local_a0._4_4_ = fStack_7c;
                  local_a0._0_4_ = local_80;
                  local_a0._12_4_ = fStack_74;
                  local_a0._8_4_ = fStack_78;
                  local_a8 = CONCAT44(local_a8._4_4_,local_88);
                  if ((StringName::configured != '\0') && (local_e8 != (long *)0x0)) {
                    StringName::unref();
                  }
                }
                else {
                  (**(code **)(*(long *)pLVar10 + 0x98))((Variant_conflict *)&local_88,pLVar10);
                  lVar11 = ::Variant::get_validated_object();
                  if ((lVar11 == 0) ||
                     (pOVar12 = (Object *)
                                __dynamic_cast(lVar11,&Object::typeinfo,&Script::typeinfo,0),
                     pOVar12 == (Object *)0x0)) {
                    if (::Variant::needs_deinit[(int)local_88] != '\0') {
                      ::Variant::_clear_internal();
                    }
                  }
                  else {
                    cVar5 = RefCounted::reference();
                    if (cVar5 == '\0') {
                      if (::Variant::needs_deinit[(int)local_88] != '\0') {
                        ::Variant::_clear_internal();
                      }
                    }
                    else {
                      if (::Variant::needs_deinit[(int)local_88] != '\0') {
                        ::Variant::_clear_internal();
                      }
                      Resource::get_path();
                      if (((local_e8 == (long *)0x0) || (*(uint *)(local_e8 + -1) < 2)) ||
                         (cVar5 = String::begins_with((char *)&local_e8), cVar5 == '\0')) {
                        _err_print_error("_from_native","core/io/json.cpp",0x37b,
                                         "Condition \"path.is_empty() || !path.begins_with(\"res://\")\" is true. Returning: Variant()"
                                         ,"Failed to encode a path to a custom script.",0,0);
                        *(undefined4 *)param_1 = 0;
                        *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
                        cVar5 = RefCounted::unreference();
                        if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar12), cVar5 != '\0'))
                        {
                          (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
                          Memory::free_static(pOVar12,false);
                        }
                        if (::Variant::needs_deinit[(int)local_a8] != '\0') {
                          ::Variant::_clear_internal();
                        }
                        goto LAB_0010b407;
                      }
                      ::Variant::Variant((Variant_conflict *)&local_88,(String *)&local_e8);
                      if (::Variant::needs_deinit[(int)local_a8] != '\0') {
                        ::Variant::_clear_internal();
                      }
                      local_a0._4_4_ = fStack_7c;
                      local_a0._0_4_ = local_80;
                      local_a0._12_4_ = fStack_74;
                      local_a0._8_4_ = fStack_78;
                      local_a8 = CONCAT44(local_a8._4_4_,local_88);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
                      cVar5 = RefCounted::unreference();
                      if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar12), cVar5 != '\0')) {
                        (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
                        Memory::free_static(pOVar12,false);
                      }
                    }
                  }
                }
                local_138 = &local_a8;
                ::Variant::Variant((Variant_conflict *)&local_88,pSVar16);
                Array::push_back((Variant_conflict *)&local_100);
                if (::Variant::needs_deinit[(int)local_88] != '\0') {
                  ::Variant::_clear_internal();
                }
                _from_native((Variant_conflict *)&local_88,SUB81(local_138,0),1);
                Array::push_back((Variant_conflict *)&local_100);
                if (::Variant::needs_deinit[(int)local_88] != '\0') {
                  ::Variant::_clear_internal();
                }
                if (::Variant::needs_deinit[(int)local_a8] != '\0') {
                  ::Variant::_clear_internal();
                }
              }
              lVar18 = *(long *)(lVar18 + 0x30);
            } while (lVar18 != 0);
          }
          Dictionary::Dictionary((Dictionary *)&local_f8);
          (**(code **)(*(long *)pLVar10 + 0x48))((StringName *)&local_e8,pLVar10);
          ::Variant::Variant((Variant_conflict *)&local_88,(String *)&local_e8);
          ::Variant::Variant((Variant_conflict *)&local_a8,"type");
          pVVar13 = (Variant_conflict *)Dictionary::operator[]((Variant_conflict *)&local_f8);
          ::Variant::operator=(pVVar13,(Variant_conflict *)&local_88);
          if (::Variant::needs_deinit[(int)local_a8] != '\0') {
            ::Variant::_clear_internal();
          }
          if (::Variant::needs_deinit[(int)local_88] != '\0') {
            ::Variant::_clear_internal();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
          ::Variant::Variant((Variant_conflict *)&local_88,(Array *)&local_100);
          ::Variant::Variant((Variant_conflict *)&local_a8,"props");
          pVVar13 = (Variant_conflict *)Dictionary::operator[]((Variant_conflict *)&local_f8);
          ::Variant::operator=(pVVar13,(Variant_conflict *)&local_88);
          if (::Variant::needs_deinit[(int)local_a8] != '\0') {
            ::Variant::_clear_internal();
          }
          if (::Variant::needs_deinit[(int)local_88] != '\0') {
            ::Variant::_clear_internal();
          }
          ::Variant::Variant(param_1,(Dictionary *)&local_f8);
          Dictionary::~Dictionary((Dictionary *)&local_f8);
LAB_0010b407:
          Array::~Array((Array *)&local_100);
          List<PropertyInfo,DefaultAllocator>::~List
                    ((List<PropertyInfo,DefaultAllocator> *)&local_108);
          break;
        }
        uVar15 = 0x36b;
        pcVar14 = 
        "Condition \"!ClassDB::can_instantiate(obj->get_class())\" is true. Returning: Variant()";
        goto LAB_0010b5d3;
      }
    }
    *(undefined4 *)param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
    break;
  case 0x1b:
    this = (Variant_conflict *)&local_a8;
    ::Variant::operator_cast_to_Dictionary(local_118);
    Array::Array(local_110);
    Dictionary::Dictionary((Dictionary *)&local_108);
    ::Variant::get_type_name((String *)&local_e8,*(undefined4 *)pVVar13);
    ::Variant::Variant((Variant_conflict *)&local_88,(String *)&local_e8);
    ::Variant::Variant(this,"type");
    pVVar13 = (Variant_conflict *)Dictionary::operator[]((Variant_conflict *)&local_108);
    ::Variant::operator=(pVVar13,(Variant_conflict *)&local_88);
    if (::Variant::needs_deinit[(int)local_a8] != '\0') {
      ::Variant::_clear_internal();
    }
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
    Dictionary::get_key_type();
    local_100 = 0;
    local_f8 = "key_type";
    local_f0 = 8;
    String::parse_latin1((StrRange *)&local_100);
    cVar5 = _encode_container_type
                      ((Dictionary *)&local_108,(String *)&local_100,(ContainerType *)&local_e8,
                       bVar7);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
    if (((local_d8 != (Object *)0x0) &&
        (cVar6 = RefCounted::unreference(), pOVar12 = local_d8, cVar6 != '\0')) &&
       (cVar6 = predelete_handler(local_d8), cVar6 != '\0')) {
      (**(code **)(*(long *)pOVar12 + 0x140))();
      Memory::free_static(pOVar12,false);
    }
    if ((StringName::configured != '\0') && (local_e0 != 0)) {
      StringName::unref();
    }
    if (cVar5 == '\0') {
LAB_00108ab2:
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
    }
    else {
      Dictionary::get_value_type();
      local_f8 = (char *)0x0;
      String::parse_latin1((String *)&local_f8,"value_type");
      cVar5 = _encode_container_type
                        ((Dictionary *)&local_108,(String *)&local_f8,(ContainerType *)&local_e8,
                         bVar7);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
      if (((local_d8 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
         (cVar6 = predelete_handler(local_d8), cVar6 != '\0')) {
        (**(code **)(*(long *)local_d8 + 0x140))();
        Memory::free_static(local_d8,false);
      }
      if ((StringName::configured != '\0') && (local_e0 != 0)) {
        StringName::unref();
      }
      if (cVar5 == '\0') goto LAB_00108ab2;
      ::Variant::Variant((Variant_conflict *)&local_88,local_110);
      ::Variant::Variant(this,"args");
      pVVar13 = (Variant_conflict *)Dictionary::operator[]((Variant_conflict *)&local_108);
      ::Variant::operator=(pVVar13,(Variant_conflict *)&local_88);
      if (::Variant::needs_deinit[(int)local_a8] != '\0') {
        ::Variant::_clear_internal();
        pVVar13 = this;
      }
      if (::Variant::needs_deinit[(int)local_88] != '\0') {
        pVVar13 = (Variant_conflict *)&local_88;
        ::Variant::_clear_internal();
      }
      if (in_ECX < 0x401) {
        local_e8 = (long *)0x0;
        Dictionary::get_key_list((List *)local_118);
        if (local_e8 != (long *)0x0) {
          for (lVar18 = *local_e8; lVar18 != 0; lVar18 = *(long *)(lVar18 + 0x18)) {
            _from_native((Variant_conflict *)&local_88,SUB81(lVar18,0),param_3 & 0xffU);
            Array::push_back((Variant_conflict *)local_110);
            if (::Variant::needs_deinit[(int)local_88] != '\0') {
              ::Variant::_clear_internal();
            }
            bVar7 = (bool)Dictionary::operator[](local_118);
            _from_native((Variant_conflict *)&local_88,bVar7,param_3 & 0xffU);
            Array::push_back((Variant_conflict *)local_110);
            if (::Variant::needs_deinit[(int)local_88] != '\0') {
              ::Variant::_clear_internal();
            }
          }
        }
        ::Variant::Variant(param_1,(Dictionary *)&local_108);
        List<Variant,DefaultAllocator>::~List((List<Variant,DefaultAllocator> *)&local_e8);
      }
      else {
        _err_print_error("_from_native","core/io/json.cpp",0x39b,
                         "Condition \"p_depth > Variant::MAX_RECURSION_DEPTH\" is true. Returning: ret"
                         ,"Variant is too deep. Bailing.",0,0,pVVar13);
        ::Variant::Variant(param_1,(Dictionary *)&local_108);
      }
    }
    Dictionary::~Dictionary((Dictionary *)&local_108);
    Array::~Array(local_110);
    Dictionary::~Dictionary((Dictionary *)local_118);
    break;
  case 0x1c:
    ::Variant::operator_cast_to_Array(local_118);
    local_c8 = 0;
    _local_c0 = (undefined1  [16])0x0;
    Array::Array(local_110);
    cVar5 = Array::is_typed();
    if (cVar5 == '\0') {
      ::Variant::Variant((Variant_conflict *)&local_88,local_110);
      ::Variant::operator=((Variant_conflict *)&local_c8,(Variant_conflict *)&local_88);
      if (::Variant::needs_deinit[(int)local_88] != '\0') {
        ::Variant::_clear_internal();
      }
LAB_0010b524:
      iVar17 = 0;
      if (in_ECX < 0x401) {
        iVar8 = Array::size();
        if (0 < iVar8) {
          do {
            bVar7 = (bool)Array::operator[]((int)local_118);
            _from_native((Variant_conflict *)&local_88,bVar7,param_3 & 0xff);
            Array::push_back((Variant_conflict *)local_110);
            if (::Variant::needs_deinit[(int)local_88] != '\0') {
              ::Variant::_clear_internal();
            }
            iVar17 = iVar17 + 1;
            iVar8 = Array::size();
          } while (iVar17 < iVar8);
        }
        uVar4 = (float)local_c8;
        local_c8 = local_c8 & 0xffffffff00000000;
        *(undefined4 *)param_1 = uVar4;
        *(undefined1 (*) [8])(param_1 + 8) = local_c0;
        *(undefined8 *)(param_1 + 0x10) = uStack_b8;
      }
      else {
        _err_print_error("_from_native","core/io/json.cpp",0x3ba,
                         "Condition \"p_depth > Variant::MAX_RECURSION_DEPTH\" is true. Returning: ret"
                         ,"Variant is too deep. Bailing.",0,0);
        uVar4 = (float)local_c8;
        local_c8 = local_c8 & 0xffffffff00000000;
        *(undefined4 *)param_1 = uVar4;
        *(undefined1 (*) [8])(param_1 + 8) = local_c0;
        *(undefined8 *)(param_1 + 0x10) = uStack_b8;
      }
    }
    else {
      Dictionary::Dictionary((Dictionary *)&local_108);
      ::Variant::get_type_name((String *)&local_e8,*(undefined4 *)pVVar13);
      ::Variant::Variant((Variant_conflict *)&local_88,(String *)&local_e8);
      ::Variant::Variant((Variant_conflict *)&local_a8,"type");
      pVVar13 = (Variant_conflict *)Dictionary::operator[]((Variant_conflict *)&local_108);
      ::Variant::operator=(pVVar13,(Variant_conflict *)&local_88);
      if (::Variant::needs_deinit[(int)local_a8] != '\0') {
        ::Variant::_clear_internal();
      }
      if (::Variant::needs_deinit[(int)local_88] != '\0') {
        ::Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      Array::get_element_type();
      local_f8 = "elem_type";
      local_100 = 0;
      local_f0 = 9;
      String::parse_latin1((StrRange *)&local_100);
      cVar5 = _encode_container_type
                        ((Dictionary *)&local_108,(String *)&local_100,(ContainerType *)&local_e8,
                         bVar7);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
      if (((local_d8 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
         (cVar6 = predelete_handler(local_d8), cVar6 != '\0')) {
        (**(code **)(*(long *)local_d8 + 0x140))(local_d8);
        Memory::free_static(local_d8,false);
      }
      if ((StringName::configured != '\0') && (local_e0 != 0)) {
        StringName::unref();
      }
      if (cVar5 != '\0') {
        ::Variant::Variant((Variant_conflict *)&local_88,local_110);
        ::Variant::Variant((Variant_conflict *)&local_a8,"args");
        pVVar13 = (Variant_conflict *)Dictionary::operator[]((Variant_conflict *)&local_108);
        ::Variant::operator=(pVVar13,(Variant_conflict *)&local_88);
        if (::Variant::needs_deinit[(int)local_a8] != '\0') {
          ::Variant::_clear_internal();
        }
        if (::Variant::needs_deinit[(int)local_88] != '\0') {
          ::Variant::_clear_internal();
        }
        ::Variant::Variant((Variant_conflict *)&local_88,(Dictionary *)&local_108);
        ::Variant::operator=((Variant_conflict *)&local_c8,(Variant_conflict *)&local_88);
        if (::Variant::needs_deinit[(int)local_88] != '\0') {
          ::Variant::_clear_internal();
        }
        Dictionary::~Dictionary((Dictionary *)&local_108);
        goto LAB_0010b524;
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      Dictionary::~Dictionary((Dictionary *)&local_108);
    }
    Array::~Array(local_110);
    if (::Variant::needs_deinit[(int)(float)local_c8] != '\0') {
      ::Variant::_clear_internal();
    }
    Array::~Array((Array *)local_118);
    break;
  case 0x1d:
    ::Variant::operator_cast_to_Vector((Variant_conflict *)&local_e8);
    Array::Array((Array *)&local_108);
    for (lVar18 = 0; (local_e0 != 0 && (lVar18 < *(long *)(local_e0 + -8))); lVar18 = lVar18 + 1) {
      ::Variant::Variant((Variant_conflict *)&local_88,*(uchar *)(local_e0 + lVar18));
      Array::push_back((Variant_conflict *)&local_108);
      if (::Variant::needs_deinit[(int)local_88] != '\0') {
        ::Variant::_clear_internal();
      }
    }
    goto LAB_0010ad50;
  case 0x1e:
    ::Variant::operator_cast_to_Vector((Variant_conflict *)&local_e8);
    Array::Array((Array *)&local_108);
    for (lVar18 = 0; (local_e0 != 0 && (lVar18 < *(long *)(local_e0 + -8))); lVar18 = lVar18 + 1) {
      ::Variant::Variant((Variant_conflict *)&local_88,*(int *)(local_e0 + lVar18 * 4));
      Array::push_back((Variant_conflict *)&local_108);
      if (::Variant::needs_deinit[(int)local_88] != '\0') {
        ::Variant::_clear_internal();
      }
    }
    goto LAB_0010ad50;
  case 0x1f:
    ::Variant::operator_cast_to_Vector((Variant_conflict *)&local_e8);
    Array::Array((Array *)&local_108);
    for (lVar18 = 0; (local_e0 != 0 && (lVar18 < *(long *)(local_e0 + -8))); lVar18 = lVar18 + 1) {
      ::Variant::Variant((Variant_conflict *)&local_88,*(long *)(local_e0 + lVar18 * 8));
      Array::push_back((Variant_conflict *)&local_108);
      if (::Variant::needs_deinit[(int)local_88] != '\0') {
        ::Variant::_clear_internal();
      }
    }
    goto LAB_0010ad50;
  case 0x20:
    ::Variant::operator_cast_to_Vector((Variant_conflict *)&local_e8);
    Array::Array((Array *)&local_108);
    for (lVar18 = 0; (local_e0 != 0 && (lVar18 < *(long *)(local_e0 + -8))); lVar18 = lVar18 + 1) {
      ::Variant::Variant((Variant_conflict *)&local_88,*(float *)(local_e0 + lVar18 * 4));
      Array::push_back((Variant_conflict *)&local_108);
      if (::Variant::needs_deinit[(int)local_88] != '\0') {
        ::Variant::_clear_internal();
      }
    }
    Dictionary::Dictionary((Dictionary *)&local_100);
    ::Variant::get_type_name((String *)&local_f8,*(undefined4 *)pVVar13);
    ::Variant::Variant((Variant_conflict *)&local_88,(String *)&local_f8);
    ::Variant::Variant((Variant_conflict *)&local_a8,"type");
    pVVar13 = (Variant_conflict *)Dictionary::operator[]((Variant_conflict *)&local_100);
    if (pVVar13 != (Variant_conflict *)&local_88) {
      if (::Variant::needs_deinit[*(int *)pVVar13] != '\0') {
        ::Variant::_clear_internal();
      }
      *(undefined4 *)pVVar13 = 0;
      *(float *)pVVar13 = local_88;
      *(ulong *)(pVVar13 + 8) = CONCAT44(fStack_7c,local_80);
      *(ulong *)(pVVar13 + 0x10) = CONCAT44(fStack_74,fStack_78);
      local_88 = 0.0;
    }
    goto LAB_0010adae;
  case 0x21:
    ::Variant::operator_cast_to_Vector((Variant_conflict *)&local_e8);
    Array::Array((Array *)&local_108);
    for (lVar18 = 0; (local_e0 != 0 && (lVar18 < *(long *)(local_e0 + -8))); lVar18 = lVar18 + 1) {
      ::Variant::Variant((Variant_conflict *)&local_88,*(double *)(local_e0 + lVar18 * 8));
      Array::push_back((Variant_conflict *)&local_108);
      if (::Variant::needs_deinit[(int)local_88] != '\0') {
        ::Variant::_clear_internal();
      }
    }
    Dictionary::Dictionary((Dictionary *)&local_100);
    ::Variant::get_type_name((String *)&local_f8,*(undefined4 *)pVVar13);
    ::Variant::Variant((Variant_conflict *)&local_88,(String *)&local_f8);
    ::Variant::Variant((Variant_conflict *)&local_a8,"type");
    pVVar13 = (Variant_conflict *)Dictionary::operator[]((Variant_conflict *)&local_100);
    ::Variant::operator=(pVVar13,(Variant_conflict *)&local_88);
    if (::Variant::needs_deinit[(int)local_a8] != '\0') {
      ::Variant::_clear_internal();
    }
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
    ::Variant::Variant((Variant_conflict *)&local_88,(Array *)&local_108);
    ::Variant::Variant((Variant_conflict *)&local_a8,"args");
    pVVar13 = (Variant_conflict *)Dictionary::operator[]((Variant_conflict *)&local_100);
    if (pVVar13 != (Variant_conflict *)&local_88) {
      if (::Variant::needs_deinit[*(int *)pVVar13] != '\0') {
        ::Variant::_clear_internal();
      }
      *(undefined4 *)pVVar13 = 0;
      *(float *)pVVar13 = local_88;
      *(ulong *)(pVVar13 + 8) = CONCAT44(fStack_7c,local_80);
      *(ulong *)(pVVar13 + 0x10) = CONCAT44(fStack_74,fStack_78);
      local_88 = 0.0;
    }
    goto LAB_0010ae10;
  case 0x22:
    ::Variant::operator_cast_to_Vector((Variant_conflict *)&local_e8);
    Array::Array((Array *)&local_108);
    for (lVar18 = 0; (local_e0 != 0 && (lVar18 < *(long *)(local_e0 + -8))); lVar18 = lVar18 + 1) {
      ::Variant::Variant((Variant_conflict *)&local_88,(String *)(local_e0 + lVar18 * 8));
      Array::push_back((Variant_conflict *)&local_108);
      if (::Variant::needs_deinit[(int)local_88] != '\0') {
        ::Variant::_clear_internal();
      }
    }
    Dictionary::Dictionary((Dictionary *)&local_100);
    ::Variant::get_type_name((String *)&local_f8,*(undefined4 *)pVVar13);
    ::Variant::Variant((Variant_conflict *)&local_88,(String *)&local_f8);
    ::Variant::Variant((Variant_conflict *)&local_a8,"type");
    pVVar13 = (Variant_conflict *)Dictionary::operator[]((Variant_conflict *)&local_100);
    ::Variant::operator=(pVVar13,(Variant_conflict *)&local_88);
    if (::Variant::needs_deinit[(int)local_a8] != '\0') {
      ::Variant::_clear_internal();
    }
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
    ::Variant::Variant((Variant_conflict *)&local_88,(Array *)&local_108);
    ::Variant::Variant((Variant_conflict *)&local_a8,"args");
    pVVar13 = (Variant_conflict *)Dictionary::operator[]((Variant_conflict *)&local_100);
    if (pVVar13 != (Variant_conflict *)&local_88) {
      if (::Variant::needs_deinit[*(int *)pVVar13] != '\0') {
        ::Variant::_clear_internal();
      }
      *(undefined4 *)pVVar13 = 0;
      *(float *)pVVar13 = local_88;
      *(ulong *)(pVVar13 + 8) = CONCAT44(fStack_7c,local_80);
      *(ulong *)(pVVar13 + 0x10) = CONCAT44(fStack_74,fStack_78);
      local_88 = 0.0;
    }
    if (::Variant::needs_deinit[(int)local_a8] != '\0') {
      ::Variant::_clear_internal();
    }
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    ::Variant::Variant(param_1,(Dictionary *)&local_100);
    Dictionary::~Dictionary((Dictionary *)&local_100);
    Array::~Array((Array *)&local_108);
    CowData<String>::_unref((CowData<String> *)&local_e0);
    break;
  case 0x23:
    ::Variant::operator_cast_to_Vector((Variant_conflict *)&local_e8);
    Array::Array((Array *)&local_108);
    for (lVar18 = 0; (local_e0 != 0 && (lVar18 < *(long *)(local_e0 + -8))); lVar18 = lVar18 + 1) {
      pfVar9 = (float *)(local_e0 + lVar18 * 8);
      fVar19 = pfVar9[1];
      ::Variant::Variant((Variant_conflict *)&local_88,*pfVar9);
      Array::push_back((Variant_conflict *)&local_108);
      if (::Variant::needs_deinit[(int)local_88] != '\0') {
        ::Variant::_clear_internal();
      }
      ::Variant::Variant((Variant_conflict *)&local_88,fVar19);
      Array::push_back((Variant_conflict *)&local_108);
      if (::Variant::needs_deinit[(int)local_88] != '\0') {
        ::Variant::_clear_internal();
      }
    }
    goto LAB_0010ad50;
  case 0x24:
    ::Variant::operator_cast_to_Vector((Variant_conflict *)&local_e8);
    Array::Array((Array *)&local_108);
    for (lVar18 = 0; (local_e0 != 0 && (lVar18 < *(long *)(local_e0 + -8))); lVar18 = lVar18 + 1) {
      pfVar9 = (float *)(local_e0 + lVar18 * 0xc);
      fVar19 = pfVar9[2];
      fVar2 = pfVar9[1];
      ::Variant::Variant((Variant_conflict *)&local_88,*pfVar9);
      Array::push_back((Variant_conflict *)&local_108);
      if (::Variant::needs_deinit[(int)local_88] != '\0') {
        ::Variant::_clear_internal();
      }
      ::Variant::Variant((Variant_conflict *)&local_88,fVar2);
      Array::push_back((Variant_conflict *)&local_108);
      if (::Variant::needs_deinit[(int)local_88] != '\0') {
        ::Variant::_clear_internal();
      }
      ::Variant::Variant((Variant_conflict *)&local_88,fVar19);
      Array::push_back((Variant_conflict *)&local_108);
      if (::Variant::needs_deinit[(int)local_88] != '\0') {
        ::Variant::_clear_internal();
      }
    }
    goto LAB_0010ad50;
  case 0x25:
    ::Variant::operator_cast_to_Vector((Variant_conflict *)&local_e8);
    Array::Array((Array *)&local_108);
    for (lVar18 = 0; (local_e0 != 0 && (lVar18 < *(long *)(local_e0 + -8))); lVar18 = lVar18 + 1) {
      pfVar9 = (float *)(local_e0 + lVar18 * 0x10);
      fVar19 = pfVar9[2];
      fVar2 = pfVar9[3];
      fVar3 = pfVar9[1];
      ::Variant::Variant((Variant_conflict *)&local_88,*pfVar9);
      Array::push_back((Variant_conflict *)&local_108);
      if (::Variant::needs_deinit[(int)local_88] != '\0') {
        ::Variant::_clear_internal();
      }
      ::Variant::Variant((Variant_conflict *)&local_88,fVar3);
      Array::push_back((Variant_conflict *)&local_108);
      if (::Variant::needs_deinit[(int)local_88] != '\0') {
        ::Variant::_clear_internal();
      }
      ::Variant::Variant((Variant_conflict *)&local_88,fVar19);
      Array::push_back((Variant_conflict *)&local_108);
      if (::Variant::needs_deinit[(int)local_88] != '\0') {
        ::Variant::_clear_internal();
      }
      ::Variant::Variant((Variant_conflict *)&local_88,fVar2);
      Array::push_back((Variant_conflict *)&local_108);
      if (::Variant::needs_deinit[(int)local_88] != '\0') {
        ::Variant::_clear_internal();
      }
    }
    goto LAB_0010ad50;
  case 0x26:
    ::Variant::operator_cast_to_Vector((Variant_conflict *)&local_e8);
    Array::Array((Array *)&local_108);
    for (lVar18 = 0; (local_e0 != 0 && (lVar18 < *(long *)(local_e0 + -8))); lVar18 = lVar18 + 1) {
      pfVar9 = (float *)(local_e0 + lVar18 * 0x10);
      fVar19 = pfVar9[2];
      fVar2 = pfVar9[3];
      fVar3 = pfVar9[1];
      ::Variant::Variant((Variant_conflict *)&local_88,*pfVar9);
      Array::push_back((Variant_conflict *)&local_108);
      if (::Variant::needs_deinit[(int)local_88] != '\0') {
        ::Variant::_clear_internal();
      }
      ::Variant::Variant((Variant_conflict *)&local_88,fVar3);
      Array::push_back((Variant_conflict *)&local_108);
      if (::Variant::needs_deinit[(int)local_88] != '\0') {
        ::Variant::_clear_internal();
      }
      ::Variant::Variant((Variant_conflict *)&local_88,fVar19);
      Array::push_back((Variant_conflict *)&local_108);
      if (::Variant::needs_deinit[(int)local_88] != '\0') {
        ::Variant::_clear_internal();
      }
      ::Variant::Variant((Variant_conflict *)&local_88,fVar2);
      Array::push_back((Variant_conflict *)&local_108);
      if (::Variant::needs_deinit[(int)local_88] != '\0') {
        ::Variant::_clear_internal();
      }
    }
LAB_0010ad50:
    Dictionary::Dictionary((Dictionary *)&local_100);
    ::Variant::get_type_name((String *)&local_f8,*(undefined4 *)pVVar13);
    ::Variant::Variant((Variant_conflict *)&local_88,(String *)&local_f8);
    ::Variant::Variant((Variant_conflict *)&local_a8,"type");
    pVVar13 = (Variant_conflict *)Dictionary::operator[]((Variant_conflict *)&local_100);
    ::Variant::operator=(pVVar13,(Variant_conflict *)&local_88);
LAB_0010adae:
    local_150 = (Array *)&local_108;
    local_158 = (Dictionary *)&local_f8;
    if (::Variant::needs_deinit[(int)local_a8] != '\0') {
      ::Variant::_clear_internal();
    }
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_158);
    ::Variant::Variant((Variant_conflict *)&local_88,local_150);
    ::Variant::Variant((Variant_conflict *)&local_a8,"args");
    pVVar13 = (Variant_conflict *)Dictionary::operator[]((Variant_conflict *)&local_100);
    ::Variant::operator=(pVVar13,(Variant_conflict *)&local_88);
LAB_0010ae10:
    local_150 = (Array *)&local_108;
    if (::Variant::needs_deinit[(int)local_a8] != '\0') {
      ::Variant::_clear_internal();
    }
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    ::Variant::Variant(param_1,(Dictionary *)&local_100);
    Dictionary::~Dictionary((Dictionary *)&local_100);
    Array::~Array(local_150);
    lVar18 = local_e0;
    if (local_e0 != 0) {
      LOCK();
      plVar1 = (long *)(local_e0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_e0 = 0;
        Memory::free_static((void *)(lVar18 + -0x10),false);
      }
    }
    break;
  default:
    ::Variant::get_type_name((CowData<char32_t> *)&local_100);
    local_e8 = (long *)0x11167b;
    local_f8 = (char *)0x0;
    local_e0 = 0x1c;
    String::parse_latin1((StrRange *)&local_f8);
    vformat<String>((CowData<char32_t> *)&local_e8,(StrRange *)&local_f8,
                    (CowData<char32_t> *)&local_100);
    _err_print_error("_from_native","core/io/json.cpp",0x43c,
                     "Method/function failed. Returning: Variant()",(CowData<char32_t> *)&local_e8,0
                     ,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
LAB_0010b04a:
    *(undefined4 *)param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* CowData<String>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<String>::_copy_on_write(CowData<String> *this)

{
  CowData *pCVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  CowData<char32_t> *this_00;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar7 = 0x10;
  if (lVar2 * 8 != 0) {
    uVar7 = lVar2 * 8 - 1;
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar5 != (undefined8 *)0x0) {
    lVar6 = 0;
    *puVar5 = 1;
    puVar5[1] = lVar2;
    this_00 = (CowData<char32_t> *)(puVar5 + 2);
    if (lVar2 != 0) {
      do {
        lVar3 = *(long *)this;
        *(undefined8 *)this_00 = 0;
        pCVar1 = (CowData *)(lVar3 + lVar6 * 8);
        if (*(long *)pCVar1 != 0) {
          CowData<char32_t>::_ref(this_00,pCVar1);
        }
        lVar6 = lVar6 + 1;
        this_00 = this_00 + 8;
      } while (lVar2 != lVar6);
    }
    _unref(this);
    *(CowData<char32_t> **)this = (CowData<char32_t> *)(puVar5 + 2);
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* Error CowData<String>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<String>::resize<false>(CowData<String> *this,long param_1)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  char *pcVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  if (*(long *)this == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
    lVar12 = 0;
    lVar9 = 0;
  }
  else {
    lVar12 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar12) {
      return;
    }
    if (param_1 == 0) {
      _unref(this);
      return;
    }
    _copy_on_write(this);
    lVar9 = lVar12 * 8;
    if (lVar9 != 0) {
      uVar10 = lVar9 - 1U | lVar9 - 1U >> 1;
      uVar10 = uVar10 | uVar10 >> 2;
      uVar10 = uVar10 | uVar10 >> 4;
      uVar10 = uVar10 | uVar10 >> 8;
      uVar10 = uVar10 | uVar10 >> 0x10;
      lVar9 = (uVar10 | uVar10 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 != 0) {
    uVar10 = param_1 * 8 - 1;
    uVar10 = uVar10 | uVar10 >> 1;
    uVar10 = uVar10 | uVar10 >> 2;
    uVar10 = uVar10 | uVar10 >> 4;
    uVar10 = uVar10 | uVar10 >> 8;
    uVar10 = uVar10 | uVar10 >> 0x10;
    uVar10 = uVar10 | uVar10 >> 0x20;
    if (uVar10 != 0xffffffffffffffff) {
      if (param_1 <= lVar12) {
        puVar7 = *(undefined8 **)this;
        uVar11 = param_1;
        while( true ) {
          if (puVar7 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          if ((ulong)puVar7[-1] <= uVar11) break;
          while( true ) {
            plVar2 = puVar7 + uVar11;
            if (*plVar2 != 0) break;
            uVar11 = uVar11 + 1;
            if ((ulong)puVar7[-1] <= uVar11) goto LAB_0010c549;
          }
          LOCK();
          plVar1 = (long *)(*plVar2 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar12 = *plVar2;
            *plVar2 = 0;
            Memory::free_static((void *)(lVar12 + -0x10),false);
          }
          puVar7 = *(undefined8 **)this;
          uVar11 = uVar11 + 1;
        }
LAB_0010c549:
        if (uVar10 + 1 == lVar9) {
LAB_0010c552:
          puVar7[-1] = param_1;
          return;
        }
        puVar4 = (undefined8 *)Memory::realloc_static(puVar7 + -2,uVar10 + 0x11,false);
        if (puVar4 != (undefined8 *)0x0) {
          puVar7 = puVar4 + 2;
          *puVar4 = 1;
          *(undefined8 **)this = puVar7;
          goto LAB_0010c552;
        }
LAB_0010c6eb:
        pcVar5 = "Parameter \"mem_new\" is null.";
        uVar6 = 0x1a9;
        pcVar8 = "_realloc";
        goto LAB_0010c6d8;
      }
      if (uVar10 + 1 == lVar9) {
        puVar7 = *(undefined8 **)this;
        if (puVar7 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        lVar12 = puVar7[-1];
LAB_0010c630:
        if (param_1 <= lVar12) goto LAB_0010c5d4;
      }
      else {
        if (lVar12 != 0) {
          puVar4 = (undefined8 *)
                   Memory::realloc_static((void *)(*(long *)this + -0x10),uVar10 + 0x11,false);
          if (puVar4 == (undefined8 *)0x0) goto LAB_0010c6eb;
          puVar7 = puVar4 + 2;
          *puVar4 = 1;
          *(undefined8 **)this = puVar7;
          lVar12 = puVar4[1];
          goto LAB_0010c630;
        }
        puVar4 = (undefined8 *)Memory::alloc_static(uVar10 + 0x11,false);
        if (puVar4 == (undefined8 *)0x0) {
          pcVar5 = "Parameter \"mem_new\" is null.";
          uVar6 = 0x171;
          pcVar8 = "resize";
          goto LAB_0010c6d8;
        }
        puVar7 = puVar4 + 2;
        *puVar4 = 1;
        puVar4[1] = 0;
        *(undefined8 **)this = puVar7;
        lVar12 = 0;
      }
      memset(puVar7 + lVar12,0,(param_1 - lVar12) * 8);
LAB_0010c5d4:
      puVar7[-1] = param_1;
      return;
    }
  }
  pcVar5 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
  uVar6 = 0x16a;
  pcVar8 = "resize";
LAB_0010c6d8:
  _err_print_error(pcVar8,"./core/templates/cowdata.h",uVar6,pcVar5,0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JSON::_to_native(Variant const&, bool, int) */

JSON * __thiscall JSON::_to_native(JSON *this,Variant_conflict *param_1,bool param_2,int param_3)

{
  undefined8 *puVar1;
  CowData<char32_t> *this_00;
  code *pcVar2;
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
  undefined1 auVar14 [16];
  char cVar15;
  uchar uVar16;
  int iVar17;
  undefined4 uVar18;
  uint uVar19;
  Variant_conflict *pVVar20;
  JSON *pJVar21;
  long lVar22;
  ulong uVar23;
  Variant_conflict *pVVar24;
  long lVar25;
  Object *pOVar26;
  Object *pOVar27;
  undefined8 uVar28;
  char *pcVar29;
  int iVar30;
  long lVar31;
  undefined8 in_R10;
  int iVar32;
  long in_FS_OFFSET;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  double dVar37;
  uint local_170;
  Variant_conflict local_138 [8];
  Variant_conflict local_130 [8];
  long local_128;
  long local_120;
  Object *local_118;
  undefined8 local_110;
  ulong local_108;
  undefined1 local_100 [24];
  undefined8 local_e8;
  undefined1 local_e0 [24];
  undefined8 local_c8;
  undefined1 local_c0 [16];
  int local_a8 [8];
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  undefined8 uStack_64;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar19 = *(uint *)param_1;
  if (uVar19 != 0x1b) {
    if (uVar19 < 0x1c) {
      if (uVar19 < 2) {
        ::Variant::Variant((Variant_conflict *)this,param_1);
        goto LAB_0010c77f;
      }
      if (uVar19 == 4) {
        ::Variant::operator_cast_to_String((Variant_conflict *)&local_110);
        cVar15 = String::begins_with((char *)&local_110);
        iVar17 = (int)(Variant_conflict *)&local_110;
        if (cVar15 == '\0') {
          cVar15 = String::begins_with((char *)&local_110);
          if (cVar15 == '\0') {
            cVar15 = String::begins_with((char *)&local_110);
            if (cVar15 == '\0') {
              cVar15 = String::begins_with((char *)&local_110);
              if (cVar15 == '\0') {
                cVar15 = String::begins_with((char *)&local_110);
                if (cVar15 == '\0') {
                  _err_print_error("_to_native","core/io/json.cpp",0x47a,
                                   "Method/function failed. Returning: Variant()",
                                   "Invalid string, the type prefix is not recognized.",0,0);
                  *(undefined4 *)this = 0;
                  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
                }
                else {
                  String::substr((int)(CowData<char32_t> *)&local_108,iVar17);
                  NodePath::NodePath((NodePath *)&local_e8,(String *)&local_108);
                  ::Variant::Variant((Variant_conflict *)this,(NodePath *)&local_e8);
                  NodePath::~NodePath((NodePath *)&local_e8);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
                }
              }
              else {
                String::substr((int)(CowData<char32_t> *)&local_108,iVar17);
                StringName::StringName((StringName *)&local_e8,(String *)&local_108,false);
                ::Variant::Variant((Variant_conflict *)this,(StringName *)&local_e8);
                if ((StringName::configured != '\0') && ((Object *)local_e8 != (Object *)0x0)) {
                  StringName::unref();
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
              }
            }
            else {
              String::substr((int)(CowData<char32_t> *)&local_e8,iVar17);
              ::Variant::Variant((Variant_conflict *)this,(String *)&local_e8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
            }
          }
          else {
            String::substr((int)(CowData<char32_t> *)&local_e8,iVar17);
            dVar37 = (double)String::to_float();
            ::Variant::Variant((Variant_conflict *)this,dVar37);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
          }
        }
        else {
          String::substr((int)(CowData<char32_t> *)&local_e8,iVar17);
          lVar22 = String::to_int();
          ::Variant::Variant((Variant_conflict *)this,lVar22);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
        goto LAB_0010c77f;
      }
    }
    else if (uVar19 == 0x1c) {
      if (param_3 < 0x401) {
        iVar30 = 0;
        ::Variant::operator_cast_to_Array((Variant_conflict *)&local_108);
        Array::Array((Array *)&local_e8);
        Array::size();
        iVar32 = (int)(Array *)&local_e8;
        Array::resize(iVar32);
        iVar17 = Array::size();
        if (0 < iVar17) {
          do {
            pVVar20 = (Variant_conflict *)Array::operator[]((int)(Variant_conflict *)&local_108);
            _to_native((JSON *)&local_88,pVVar20,param_2,param_3 + 1);
            pJVar21 = (JSON *)Array::operator[](iVar32);
            if (pJVar21 == (JSON *)&local_88) {
              if (::Variant::needs_deinit[(int)local_88] != '\0') {
                ::Variant::_clear_internal();
              }
            }
            else {
              if (::Variant::needs_deinit[*(int *)pJVar21] != '\0') {
                ::Variant::_clear_internal();
              }
              *(undefined4 *)pJVar21 = 0;
              *(float *)pJVar21 = local_88;
              *(ulong *)(pJVar21 + 8) = CONCAT44(fStack_7c,fStack_80);
              *(ulong *)(pJVar21 + 0x10) = CONCAT44(fStack_74,fStack_78);
            }
            iVar30 = iVar30 + 1;
            iVar17 = Array::size();
          } while (iVar30 < iVar17);
        }
        ::Variant::Variant((Variant_conflict *)this,(Array *)&local_e8);
        Array::~Array((Array *)&local_e8);
        Array::~Array((Array *)&local_108);
      }
      else {
        _err_print_error("_to_native","core/io/json.cpp",0x62b,
                         "Condition \"p_depth > Variant::MAX_RECURSION_DEPTH\" is true. Returning: Array()"
                         ,"Variant is too deep. Bailing.",0,0);
        Array::Array((Array *)&local_e8);
        ::Variant::Variant((Variant_conflict *)this,(Array *)&local_e8);
        Array::~Array((Array *)&local_e8);
      }
      goto LAB_0010c77f;
    }
    ::Variant::get_type_name((CowData<char32_t> *)&local_110,uVar19);
    local_e8 = "Variant type \"%s\" is not JSON-compliant.";
    local_108 = 0;
    local_e0._0_8_ = 0x28;
    String::parse_latin1((StrRange *)&local_108);
    vformat<String>((CowData<char32_t> *)&local_e8,(StrRange *)&local_108,
                    (CowData<char32_t> *)&local_110);
    _err_print_error("_to_native","core/io/json.cpp",0x63d,
                     "Method/function failed. Returning: Variant()",(CowData<char32_t> *)&local_e8,0
                     ,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
    *(undefined4 *)this = 0;
    *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
    goto LAB_0010c77f;
  }
  ::Variant::operator_cast_to_Dictionary(local_138);
  ::Variant::Variant((Variant_conflict *)&local_88,"type");
  cVar15 = Dictionary::has(local_138);
  if (::Variant::needs_deinit[(int)local_88] != '\0') {
    ::Variant::_clear_internal();
  }
  if (cVar15 == '\0') {
    uVar28 = 0x480;
    pcVar29 = "Condition \"!dict.has(\"type\")\" is true. Returning: Variant()";
    goto LAB_0010cd52;
  }
  ::Variant::Variant((Variant_conflict *)&local_88,"type");
  Dictionary::operator[](local_138);
  ::Variant::operator_cast_to_String((Variant_conflict *)&local_e8);
  uVar18 = ::Variant::get_type_by_name((String *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if (::Variant::needs_deinit[(int)local_88] != '\0') {
    ::Variant::_clear_internal();
  }
  iVar17 = (int)(Variant_conflict *)&local_e8;
  switch(uVar18) {
  case 0:
  case 1:
    ::Variant::Variant((Variant_conflict *)local_a8,"type");
    pVVar20 = (Variant_conflict *)Dictionary::operator[](local_138);
    ::Variant::Variant((Variant_conflict *)&local_88,pVVar20);
    local_108 = 0;
    String::parse_latin1
              ((String *)&local_108,"Unexpected \"%s\": Variant type \"%s\" is JSON-compliant.");
    vformat<char_const*,Variant>
              ((Variant_conflict *)&local_e8,(String *)&local_108,&_LC167,
               (Variant_conflict *)&local_88);
    uVar28 = 0x493;
    goto LAB_0010ccaf;
  case 2:
  case 3:
  case 4:
  case 0x15:
  case 0x16:
    ::Variant::Variant((Variant_conflict *)local_a8,"type");
    pVVar20 = (Variant_conflict *)Dictionary::operator[](local_138);
    ::Variant::Variant((Variant_conflict *)&local_88,pVVar20);
    local_108 = 0;
    String::parse_latin1
              ((String *)&local_108,
               "Unexpected \"%s\": Variant type \"%s\" must be represented as a string.");
    vformat<char_const*,Variant>
              ((Variant_conflict *)&local_e8,(String *)&local_108,&_LC167,
               (Variant_conflict *)&local_88);
    uVar28 = 0x49b;
LAB_0010ccaf:
    _err_print_error("_to_native","core/io/json.cpp",uVar28,
                     "Method/function failed. Returning: Variant()",(Variant_conflict *)&local_e8,0,
                     0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    if (::Variant::needs_deinit[local_a8[0]] != '\0') {
      ::Variant::_clear_internal();
    }
    *(undefined4 *)this = 0;
    *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
    goto LAB_0010cd20;
  case 5:
    ::Variant::Variant((Variant_conflict *)&local_88,"args");
    cVar15 = Dictionary::has(local_138);
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    if (cVar15 == '\0') {
      uVar28 = 0x4a9;
      pcVar29 = "Condition \"!dict.has(\"args\")\" is true. Returning: Variant()";
      break;
    }
    ::Variant::Variant((Variant_conflict *)&local_88,"args");
    Dictionary::operator[](local_138);
    ::Variant::operator_cast_to_Array((Variant_conflict *)&local_e8);
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    iVar30 = Array::size();
    if (iVar30 == 2) {
      local_88 = 0.0;
      fStack_84 = 0.0;
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      local_88 = ::Variant::operator_cast_to_float(pVVar20);
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      fStack_84 = ::Variant::operator_cast_to_float(pVVar20);
      ::Variant::Variant((Variant_conflict *)this,(Variant_conflict *)&local_88);
    }
    else {
      uVar28 = 0x4a9;
      pcVar29 = "Condition \"args.size() != (2)\" is true. Returning: Variant()";
LAB_0011030a:
      _err_print_error("_to_native","core/io/json.cpp",uVar28,pcVar29,0,0);
      *(undefined4 *)this = 0;
      *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
    }
LAB_0010d6b0:
    Array::~Array((Array *)&local_e8);
    goto LAB_0010cd20;
  case 6:
    ::Variant::Variant((Variant_conflict *)&local_88,"args");
    cVar15 = Dictionary::has(local_138);
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    if (cVar15 != '\0') {
      ::Variant::Variant((Variant_conflict *)&local_88,"args");
      Dictionary::operator[](local_138);
      ::Variant::operator_cast_to_Array((Variant_conflict *)&local_e8);
      if (::Variant::needs_deinit[(int)local_88] != '\0') {
        ::Variant::_clear_internal();
      }
      iVar30 = Array::size();
      if (iVar30 != 2) {
        uVar28 = 0x4b2;
        pcVar29 = "Condition \"args.size() != (2)\" is true. Returning: Variant()";
        goto LAB_0011030a;
      }
      local_88 = 0.0;
      fStack_84 = 0.0;
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      local_88 = (float)::Variant::operator_cast_to_int(pVVar20);
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      fStack_84 = (float)::Variant::operator_cast_to_int(pVVar20);
      ::Variant::Variant((Variant_conflict *)this,(Variant_conflict *)&local_88);
      goto LAB_0010d6b0;
    }
    uVar28 = 0x4b2;
    pcVar29 = "Condition \"!dict.has(\"args\")\" is true. Returning: Variant()";
    break;
  case 7:
    ::Variant::Variant((Variant_conflict *)&local_88,"args");
    cVar15 = Dictionary::has(local_138);
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    if (cVar15 != '\0') {
      ::Variant::Variant((Variant_conflict *)&local_88,"args");
      Dictionary::operator[](local_138);
      ::Variant::operator_cast_to_Array((Variant_conflict *)&local_e8);
      if (::Variant::needs_deinit[(int)local_88] != '\0') {
        ::Variant::_clear_internal();
      }
      iVar30 = Array::size();
      if (iVar30 != 4) {
        uVar28 = 0x4bb;
        pcVar29 = "Condition \"args.size() != (4)\" is true. Returning: Variant()";
        goto LAB_0011030a;
      }
      local_88 = 0.0;
      fStack_84 = 0.0;
      fStack_80 = 0.0;
      fStack_7c = 0.0;
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      fVar33 = ::Variant::operator_cast_to_float(pVVar20);
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      local_88 = ::Variant::operator_cast_to_float(pVVar20);
      fStack_84 = fVar33;
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      fVar33 = ::Variant::operator_cast_to_float(pVVar20);
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      fStack_80 = ::Variant::operator_cast_to_float(pVVar20);
      fStack_7c = fVar33;
      ::Variant::Variant((Variant_conflict *)this,(Variant_conflict *)&local_88);
      goto LAB_0010d6b0;
    }
    uVar28 = 0x4bb;
    pcVar29 = "Condition \"!dict.has(\"args\")\" is true. Returning: Variant()";
    break;
  case 8:
    ::Variant::Variant((Variant_conflict *)&local_88,"args");
    cVar15 = Dictionary::has(local_138);
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    if (cVar15 != '\0') {
      ::Variant::Variant((Variant_conflict *)&local_88,"args");
      Dictionary::operator[](local_138);
      ::Variant::operator_cast_to_Array((Variant_conflict *)&local_e8);
      if (::Variant::needs_deinit[(int)local_88] != '\0') {
        ::Variant::_clear_internal();
      }
      iVar30 = Array::size();
      if (iVar30 != 4) {
        uVar28 = 0x4c4;
        pcVar29 = "Condition \"args.size() != (4)\" is true. Returning: Variant()";
        goto LAB_0011030a;
      }
      local_88 = 0.0;
      fStack_84 = 0.0;
      fStack_80 = 0.0;
      fStack_7c = 0.0;
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      fVar33 = (float)::Variant::operator_cast_to_int(pVVar20);
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      local_88 = (float)::Variant::operator_cast_to_int(pVVar20);
      fStack_84 = fVar33;
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      fVar33 = (float)::Variant::operator_cast_to_int(pVVar20);
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      fStack_80 = (float)::Variant::operator_cast_to_int(pVVar20);
      fStack_7c = fVar33;
      ::Variant::Variant((Variant_conflict *)this,(Variant_conflict *)&local_88);
      goto LAB_0010d6b0;
    }
    uVar28 = 0x4c4;
    pcVar29 = "Condition \"!dict.has(\"args\")\" is true. Returning: Variant()";
    break;
  case 9:
    ::Variant::Variant((Variant_conflict *)&local_88,"args");
    cVar15 = Dictionary::has(local_138);
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    if (cVar15 != '\0') {
      ::Variant::Variant((Variant_conflict *)&local_88,"args");
      Dictionary::operator[](local_138);
      ::Variant::operator_cast_to_Array((Variant_conflict *)&local_e8);
      if (::Variant::needs_deinit[(int)local_88] != '\0') {
        ::Variant::_clear_internal();
      }
      iVar30 = Array::size();
      if (iVar30 != 3) {
        uVar28 = 0x4cd;
        pcVar29 = "Condition \"args.size() != (3)\" is true. Returning: Variant()";
        goto LAB_0011030a;
      }
      fStack_80 = 0.0;
      local_88 = 0.0;
      fStack_84 = 0.0;
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      local_88 = ::Variant::operator_cast_to_float(pVVar20);
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      fStack_84 = ::Variant::operator_cast_to_float(pVVar20);
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      fStack_80 = ::Variant::operator_cast_to_float(pVVar20);
      ::Variant::Variant((Variant_conflict *)this,(Variant_conflict *)&local_88);
      goto LAB_0010d6b0;
    }
    uVar28 = 0x4cd;
    pcVar29 = "Condition \"!dict.has(\"args\")\" is true. Returning: Variant()";
    break;
  case 10:
    ::Variant::Variant((Variant_conflict *)&local_88,"args");
    cVar15 = Dictionary::has(local_138);
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    if (cVar15 != '\0') {
      ::Variant::Variant((Variant_conflict *)&local_88,"args");
      Dictionary::operator[](local_138);
      ::Variant::operator_cast_to_Array((Variant_conflict *)&local_e8);
      if (::Variant::needs_deinit[(int)local_88] != '\0') {
        ::Variant::_clear_internal();
      }
      iVar30 = Array::size();
      if (iVar30 != 3) {
        uVar28 = 0x4d7;
        pcVar29 = "Condition \"args.size() != (3)\" is true. Returning: Variant()";
        goto LAB_0011030a;
      }
      fStack_80 = 0.0;
      local_88 = 0.0;
      fStack_84 = 0.0;
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      local_88 = (float)::Variant::operator_cast_to_int(pVVar20);
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      fStack_84 = (float)::Variant::operator_cast_to_int(pVVar20);
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      fStack_80 = (float)::Variant::operator_cast_to_int(pVVar20);
      ::Variant::Variant((Variant_conflict *)this,(Variant_conflict *)&local_88);
      goto LAB_0010d6b0;
    }
    uVar28 = 0x4d7;
    pcVar29 = "Condition \"!dict.has(\"args\")\" is true. Returning: Variant()";
    break;
  case 0xb:
    ::Variant::Variant((Variant_conflict *)&local_88,"args");
    cVar15 = Dictionary::has(local_138);
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    if (cVar15 != '\0') {
      ::Variant::Variant((Variant_conflict *)&local_88,"args");
      Dictionary::operator[](local_138);
      ::Variant::operator_cast_to_Array((Variant_conflict *)&local_e8);
      if (::Variant::needs_deinit[(int)local_88] != '\0') {
        ::Variant::_clear_internal();
      }
      iVar30 = Array::size();
      if (iVar30 != 6) {
        uVar28 = 0x4e1;
        pcVar29 = "Condition \"args.size() != (6)\" is true. Returning: Variant()";
        goto LAB_0011030a;
      }
      local_88 = 1.0;
      fStack_84 = 0.0;
      fStack_80 = 0.0;
      fStack_7c = 1.0;
      fStack_78 = 0.0;
      fStack_74 = 0.0;
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      fVar33 = ::Variant::operator_cast_to_float(pVVar20);
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      local_88 = ::Variant::operator_cast_to_float(pVVar20);
      fStack_84 = fVar33;
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      fVar33 = ::Variant::operator_cast_to_float(pVVar20);
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      fStack_80 = ::Variant::operator_cast_to_float(pVVar20);
      fStack_7c = fVar33;
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      fVar33 = ::Variant::operator_cast_to_float(pVVar20);
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      fStack_78 = ::Variant::operator_cast_to_float(pVVar20);
      fStack_74 = fVar33;
      ::Variant::Variant((Variant_conflict *)this,(Variant_conflict *)&local_88);
      goto LAB_0010d6b0;
    }
    uVar28 = 0x4e1;
    pcVar29 = "Condition \"!dict.has(\"args\")\" is true. Returning: Variant()";
    break;
  case 0xc:
    ::Variant::Variant((Variant_conflict *)&local_88,"args");
    cVar15 = Dictionary::has(local_138);
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    if (cVar15 != '\0') {
      ::Variant::Variant((Variant_conflict *)&local_88,"args");
      Dictionary::operator[](local_138);
      ::Variant::operator_cast_to_Array((Variant_conflict *)&local_e8);
      if (::Variant::needs_deinit[(int)local_88] != '\0') {
        ::Variant::_clear_internal();
      }
      iVar30 = Array::size();
      if (iVar30 != 4) {
        uVar28 = 0x4eb;
        pcVar29 = "Condition \"args.size() != (4)\" is true. Returning: Variant()";
        goto LAB_0011030a;
      }
      local_88 = 0.0;
      fStack_84 = 0.0;
      fStack_80 = 0.0;
      fStack_7c = 0.0;
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      local_88 = ::Variant::operator_cast_to_float(pVVar20);
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      fStack_84 = ::Variant::operator_cast_to_float(pVVar20);
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      fStack_80 = ::Variant::operator_cast_to_float(pVVar20);
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      fStack_7c = ::Variant::operator_cast_to_float(pVVar20);
      ::Variant::Variant((Variant_conflict *)this,(Variant_conflict *)&local_88);
      goto LAB_0010d6b0;
    }
    uVar28 = 0x4eb;
    pcVar29 = "Condition \"!dict.has(\"args\")\" is true. Returning: Variant()";
    break;
  case 0xd:
    ::Variant::Variant((Variant_conflict *)&local_88,"args");
    cVar15 = Dictionary::has(local_138);
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    if (cVar15 != '\0') {
      ::Variant::Variant((Variant_conflict *)&local_88,"args");
      Dictionary::operator[](local_138);
      ::Variant::operator_cast_to_Array((Variant_conflict *)&local_e8);
      if (::Variant::needs_deinit[(int)local_88] != '\0') {
        ::Variant::_clear_internal();
      }
      iVar30 = Array::size();
      if (iVar30 != 4) {
        uVar28 = 0x4f6;
        pcVar29 = "Condition \"args.size() != (4)\" is true. Returning: Variant()";
        goto LAB_0011030a;
      }
      local_88 = 0.0;
      fStack_84 = 0.0;
      fStack_80 = 0.0;
      fStack_7c = 0.0;
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      local_88 = (float)::Variant::operator_cast_to_int(pVVar20);
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      fStack_84 = (float)::Variant::operator_cast_to_int(pVVar20);
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      fStack_80 = (float)::Variant::operator_cast_to_int(pVVar20);
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      fStack_7c = (float)::Variant::operator_cast_to_int(pVVar20);
      ::Variant::Variant((Variant_conflict *)this,(Variant_conflict *)&local_88);
      goto LAB_0010d6b0;
    }
    uVar28 = 0x4f6;
    pcVar29 = "Condition \"!dict.has(\"args\")\" is true. Returning: Variant()";
    break;
  case 0xe:
    ::Variant::Variant((Variant_conflict *)&local_88,"args");
    cVar15 = Dictionary::has(local_138);
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    if (cVar15 != '\0') {
      ::Variant::Variant((Variant_conflict *)&local_88,"args");
      Dictionary::operator[](local_138);
      ::Variant::operator_cast_to_Array((Variant_conflict *)&local_e8);
      if (::Variant::needs_deinit[(int)local_88] != '\0') {
        ::Variant::_clear_internal();
      }
      iVar30 = Array::size();
      if (iVar30 != 4) {
        uVar28 = 0x501;
        pcVar29 = "Condition \"args.size() != (4)\" is true. Returning: Variant()";
        goto LAB_0011030a;
      }
      local_88 = 0.0;
      fStack_84 = 0.0;
      fStack_80 = 0.0;
      fStack_7c = 0.0;
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      fVar33 = ::Variant::operator_cast_to_float(pVVar20);
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      fVar34 = ::Variant::operator_cast_to_float(pVVar20);
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      local_88 = ::Variant::operator_cast_to_float(pVVar20);
      fStack_84 = fVar34;
      fStack_80 = fVar33;
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      fStack_7c = ::Variant::operator_cast_to_float(pVVar20);
      ::Variant::Variant((Variant_conflict *)this,(Variant_conflict *)&local_88);
      goto LAB_0010d6b0;
    }
    uVar28 = 0x501;
    pcVar29 = "Condition \"!dict.has(\"args\")\" is true. Returning: Variant()";
    break;
  case 0xf:
    ::Variant::Variant((Variant_conflict *)&local_88,"args");
    cVar15 = Dictionary::has(local_138);
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    if (cVar15 != '\0') {
      ::Variant::Variant((Variant_conflict *)&local_88,"args");
      Dictionary::operator[](local_138);
      ::Variant::operator_cast_to_Array((Variant_conflict *)&local_e8);
      if (::Variant::needs_deinit[(int)local_88] != '\0') {
        ::Variant::_clear_internal();
      }
      iVar30 = Array::size();
      if (iVar30 != 4) {
        uVar28 = 0x50a;
        pcVar29 = "Condition \"args.size() != (4)\" is true. Returning: Variant()";
        goto LAB_0011030a;
      }
      local_88 = (float)__LC44;
      fStack_84 = (float)((ulong)__LC44 >> 0x20);
      fStack_80 = (float)_UNK_001203b8;
      fStack_7c = (float)((ulong)_UNK_001203b8 >> 0x20);
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      local_88 = ::Variant::operator_cast_to_float(pVVar20);
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      fStack_84 = ::Variant::operator_cast_to_float(pVVar20);
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      fStack_80 = ::Variant::operator_cast_to_float(pVVar20);
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      fStack_7c = ::Variant::operator_cast_to_float(pVVar20);
      ::Variant::Variant((Variant_conflict *)this,(Variant_conflict *)&local_88);
      goto LAB_0010d6b0;
    }
    uVar28 = 0x50a;
    pcVar29 = "Condition \"!dict.has(\"args\")\" is true. Returning: Variant()";
    break;
  case 0x10:
    ::Variant::Variant((Variant_conflict *)&local_88,"args");
    cVar15 = Dictionary::has(local_138);
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    if (cVar15 != '\0') {
      ::Variant::Variant((Variant_conflict *)&local_88,"args");
      Dictionary::operator[](local_138);
      ::Variant::operator_cast_to_Array((Variant_conflict *)&local_e8);
      if (::Variant::needs_deinit[(int)local_88] != '\0') {
        ::Variant::_clear_internal();
      }
      iVar30 = Array::size();
      if (iVar30 != 6) {
        uVar28 = 0x515;
        pcVar29 = "Condition \"args.size() != (6)\" is true. Returning: Variant()";
        goto LAB_0011030a;
      }
      local_88 = 0.0;
      fStack_84 = 0.0;
      fStack_80 = 0.0;
      fStack_7c = 0.0;
      fStack_78 = 0.0;
      fStack_74 = 0.0;
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      fVar33 = ::Variant::operator_cast_to_float(pVVar20);
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      fVar34 = ::Variant::operator_cast_to_float(pVVar20);
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      local_88 = ::Variant::operator_cast_to_float(pVVar20);
      fStack_84 = fVar34;
      fStack_80 = fVar33;
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      fVar33 = ::Variant::operator_cast_to_float(pVVar20);
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      fVar34 = ::Variant::operator_cast_to_float(pVVar20);
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      fStack_7c = ::Variant::operator_cast_to_float(pVVar20);
      fStack_78 = fVar34;
      fStack_74 = fVar33;
      ::Variant::Variant((Variant_conflict *)this,(Variant_conflict *)&local_88);
      goto LAB_0010d6b0;
    }
    uVar28 = 0x515;
    pcVar29 = "Condition \"!dict.has(\"args\")\" is true. Returning: Variant()";
    break;
  case 0x11:
    ::Variant::Variant((Variant_conflict *)&local_88,"args");
    cVar15 = Dictionary::has(local_138);
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    if (cVar15 != '\0') {
      ::Variant::Variant((Variant_conflict *)&local_88,"args");
      Dictionary::operator[](local_138);
      ::Variant::operator_cast_to_Array((Variant_conflict *)&local_e8);
      if (::Variant::needs_deinit[(int)local_88] != '\0') {
        ::Variant::_clear_internal();
      }
      iVar30 = Array::size();
      if (iVar30 != 9) {
        uVar28 = 0x51e;
        pcVar29 = "Condition \"args.size() != (9)\" is true. Returning: Variant()";
        goto LAB_0011030a;
      }
      local_68 = 1.0;
      local_88 = (float)_LC197;
      fStack_84 = 0.0;
      fStack_80 = 0.0;
      fStack_7c = 0.0;
      fStack_78 = (float)_LC197;
      fStack_74 = 0.0;
      fStack_70 = 0.0;
      fStack_6c = 0.0;
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      fVar33 = ::Variant::operator_cast_to_float(pVVar20);
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      fVar34 = ::Variant::operator_cast_to_float(pVVar20);
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      local_88 = ::Variant::operator_cast_to_float(pVVar20);
      fStack_7c = fVar34;
      fStack_70 = fVar33;
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      fVar33 = ::Variant::operator_cast_to_float(pVVar20);
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      fVar34 = ::Variant::operator_cast_to_float(pVVar20);
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      fStack_84 = ::Variant::operator_cast_to_float(pVVar20);
      fStack_78 = fVar34;
      fStack_6c = fVar33;
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      fVar33 = ::Variant::operator_cast_to_float(pVVar20);
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      fVar34 = ::Variant::operator_cast_to_float(pVVar20);
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      fStack_80 = ::Variant::operator_cast_to_float(pVVar20);
      fStack_74 = fVar34;
      local_68 = fVar33;
      ::Variant::Variant((Variant_conflict *)this,(Variant_conflict *)&local_88);
      goto LAB_0010d6b0;
    }
    uVar28 = 0x51e;
    pcVar29 = "Condition \"!dict.has(\"args\")\" is true. Returning: Variant()";
    break;
  case 0x12:
    ::Variant::Variant((Variant_conflict *)&local_88,"args");
    cVar15 = Dictionary::has(local_138);
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    if (cVar15 != '\0') {
      ::Variant::Variant((Variant_conflict *)&local_88,"args");
      Dictionary::operator[](local_138);
      ::Variant::operator_cast_to_Array((Variant_conflict *)&local_e8);
      if (::Variant::needs_deinit[(int)local_88] != '\0') {
        ::Variant::_clear_internal();
      }
      iVar30 = Array::size();
      if (iVar30 != 0xc) {
        uVar28 = 0x528;
        pcVar29 = "Condition \"args.size() != (12)\" is true. Returning: Variant()";
        goto LAB_0011030a;
      }
      local_68 = 1.0;
      local_88 = (float)_LC197;
      fStack_84 = 0.0;
      fStack_80 = 0.0;
      fStack_7c = 0.0;
      fStack_78 = (float)_LC197;
      fStack_74 = 0.0;
      fStack_70 = 0.0;
      fStack_6c = 0.0;
      uStack_64 = 0;
      fStack_5c = 0.0;
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      fVar33 = ::Variant::operator_cast_to_float(pVVar20);
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      fVar34 = ::Variant::operator_cast_to_float(pVVar20);
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      local_88 = ::Variant::operator_cast_to_float(pVVar20);
      fStack_7c = fVar34;
      fStack_70 = fVar33;
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      fVar33 = ::Variant::operator_cast_to_float(pVVar20);
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      fVar34 = ::Variant::operator_cast_to_float(pVVar20);
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      fStack_84 = ::Variant::operator_cast_to_float(pVVar20);
      fStack_78 = fVar34;
      fStack_6c = fVar33;
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      fVar33 = ::Variant::operator_cast_to_float(pVVar20);
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      fVar34 = ::Variant::operator_cast_to_float(pVVar20);
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      fStack_80 = ::Variant::operator_cast_to_float(pVVar20);
      fStack_74 = fVar34;
      local_68 = fVar33;
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      fVar33 = ::Variant::operator_cast_to_float(pVVar20);
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      fVar34 = ::Variant::operator_cast_to_float(pVVar20);
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      fVar35 = ::Variant::operator_cast_to_float(pVVar20);
      uStack_64 = CONCAT44(fVar34,fVar35);
      fStack_5c = fVar33;
      ::Variant::Variant((Variant_conflict *)this,(Variant_conflict *)&local_88);
      goto LAB_0010d6b0;
    }
    uVar28 = 0x528;
    pcVar29 = "Condition \"!dict.has(\"args\")\" is true. Returning: Variant()";
    break;
  case 0x13:
    ::Variant::Variant((Variant_conflict *)&local_88,"args");
    cVar15 = Dictionary::has(local_138);
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    if (cVar15 != '\0') {
      ::Variant::Variant((Variant_conflict *)&local_88,"args");
      Dictionary::operator[](local_138);
      ::Variant::operator_cast_to_Array((Variant_conflict *)&local_e8);
      if (::Variant::needs_deinit[(int)local_88] != '\0') {
        ::Variant::_clear_internal();
      }
      iVar30 = Array::size();
      if (iVar30 != 0x10) {
        uVar28 = 0x533;
        pcVar29 = "Condition \"args.size() != (16)\" is true. Returning: Variant()";
        goto LAB_0011030a;
      }
      Projection::Projection((Projection *)&local_88);
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      fVar33 = ::Variant::operator_cast_to_float(pVVar20);
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      fVar34 = ::Variant::operator_cast_to_float(pVVar20);
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      fVar35 = ::Variant::operator_cast_to_float(pVVar20);
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      local_88 = ::Variant::operator_cast_to_float(pVVar20);
      fStack_84 = fVar35;
      fStack_80 = fVar34;
      fStack_7c = fVar33;
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      fVar33 = ::Variant::operator_cast_to_float(pVVar20);
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      fVar34 = ::Variant::operator_cast_to_float(pVVar20);
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      fVar35 = ::Variant::operator_cast_to_float(pVVar20);
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      fStack_78 = ::Variant::operator_cast_to_float(pVVar20);
      fStack_74 = fVar35;
      fStack_70 = fVar34;
      fStack_6c = fVar33;
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      fVar33 = ::Variant::operator_cast_to_float(pVVar20);
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      fVar34 = ::Variant::operator_cast_to_float(pVVar20);
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      fVar35 = ::Variant::operator_cast_to_float(pVVar20);
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      local_68 = ::Variant::operator_cast_to_float(pVVar20);
      uStack_64 = CONCAT44(fVar34,fVar35);
      fStack_5c = fVar33;
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      fVar33 = ::Variant::operator_cast_to_float(pVVar20);
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      fVar34 = ::Variant::operator_cast_to_float(pVVar20);
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      fVar35 = ::Variant::operator_cast_to_float(pVVar20);
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      local_58 = ::Variant::operator_cast_to_float(pVVar20);
      fStack_54 = fVar35;
      fStack_50 = fVar34;
      fStack_4c = fVar33;
      ::Variant::Variant((Variant_conflict *)this,(Projection *)&local_88);
      Projection::~Projection((Projection *)&local_88);
      goto LAB_0010d6b0;
    }
    uVar28 = 0x533;
    pcVar29 = "Condition \"!dict.has(\"args\")\" is true. Returning: Variant()";
    break;
  case 0x14:
    ::Variant::Variant((Variant_conflict *)&local_88,"args");
    cVar15 = Dictionary::has(local_138);
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    if (cVar15 != '\0') {
      ::Variant::Variant((Variant_conflict *)&local_88,"args");
      Dictionary::operator[](local_138);
      ::Variant::operator_cast_to_Array((Variant_conflict *)&local_e8);
      if (::Variant::needs_deinit[(int)local_88] != '\0') {
        ::Variant::_clear_internal();
      }
      iVar30 = Array::size();
      if (iVar30 != 4) {
        uVar28 = 0x53e;
        pcVar29 = "Condition \"args.size() != (4)\" is true. Returning: Variant()";
        goto LAB_0011030a;
      }
      local_88 = (float)__LC44;
      fStack_84 = (float)((ulong)__LC44 >> 0x20);
      fStack_80 = (float)_UNK_001203b8;
      fStack_7c = (float)((ulong)_UNK_001203b8 >> 0x20);
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      local_88 = ::Variant::operator_cast_to_float(pVVar20);
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      fStack_84 = ::Variant::operator_cast_to_float(pVVar20);
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      fStack_80 = ::Variant::operator_cast_to_float(pVVar20);
      pVVar20 = (Variant_conflict *)Array::operator[](iVar17);
      fStack_7c = ::Variant::operator_cast_to_float(pVVar20);
      ::Variant::Variant((Variant_conflict *)this,(Variant_conflict *)&local_88);
      goto LAB_0010d6b0;
    }
    uVar28 = 0x53e;
    pcVar29 = "Condition \"!dict.has(\"args\")\" is true. Returning: Variant()";
    break;
  case 0x17:
    local_e8 = (char *)0x0;
    ::Variant::Variant((Variant_conflict *)this,(RID *)&local_e8);
    goto LAB_0010cd20;
  default:
    ::Variant::Variant((Variant_conflict *)&local_88,"type");
    Dictionary::operator[](local_138);
    ::Variant::operator_cast_to_StringName((Variant_conflict *)&local_e8);
    cVar15 = ClassDB::class_exists((StringName *)&local_e8);
    if ((StringName::configured != '\0') && ((Object *)local_e8 != (Object *)0x0)) {
      StringName::unref();
    }
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    if (cVar15 == '\0') {
      ::Variant::Variant((Variant_conflict *)local_a8,"type");
      pVVar20 = (Variant_conflict *)Dictionary::operator[](local_138);
      ::Variant::Variant((Variant_conflict *)&local_88,pVVar20);
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"Invalid type \"%s\".");
      vformat<Variant>((Variant_conflict *)&local_e8,(String *)&local_108,
                       (Variant_conflict *)&local_88);
      uVar28 = 0x627;
      goto LAB_0010ccaf;
    }
    if (!param_2) {
      uVar28 = 0x5fa;
      pcVar29 = "Condition \"!p_allow_objects\" is true. Returning: Variant()";
      break;
    }
    if (0x400 < param_3) {
      _err_print_error("_to_native","core/io/json.cpp",0x5fc,
                       "Condition \"p_depth > Variant::MAX_RECURSION_DEPTH\" is true. Returning: Variant()"
                       ,"Variant is too deep. Bailing.",0,0,in_R10);
      *(undefined4 *)this = 0;
      *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
      goto LAB_0010cd20;
    }
    ::Variant::Variant((Variant_conflict *)&local_88,"props");
    cVar15 = Dictionary::has(local_138);
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    if (cVar15 == '\0') {
      uVar28 = 0x5fe;
      pcVar29 = "Condition \"!dict.has(\"props\")\" is true. Returning: Variant()";
      break;
    }
    ::Variant::Variant((Variant_conflict *)&local_88,"props");
    Dictionary::operator[](local_138);
    ::Variant::operator_cast_to_Array(local_130);
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    uVar19 = Array::size();
    if ((uVar19 & 1) == 0) {
      ::Variant::Variant((Variant_conflict *)&local_88,"type");
      Dictionary::operator[](local_138);
      ::Variant::operator_cast_to_StringName((Variant_conflict *)&local_e8);
      cVar15 = ClassDB::can_instantiate((StringName *)&local_e8);
      if ((StringName::configured != '\0') && ((Object *)local_e8 != (Object *)0x0)) {
        StringName::unref();
      }
      if (::Variant::needs_deinit[(int)local_88] != '\0') {
        ::Variant::_clear_internal();
      }
      if (cVar15 == '\0') {
        uVar28 = 0x602;
        pcVar29 = 
        "Condition \"!ClassDB::can_instantiate(dict[\"type\"])\" is true. Returning: Variant()";
        goto LAB_00110bba;
      }
      ::Variant::Variant((Variant_conflict *)&local_88,"type");
      Dictionary::operator[](local_138);
      ::Variant::operator_cast_to_StringName((Variant_conflict *)&local_e8);
      pOVar26 = (Object *)ClassDB::instantiate((StringName *)&local_e8);
      if ((StringName::configured != '\0') && ((Object *)local_e8 != (Object *)0x0)) {
        StringName::unref();
      }
      if (::Variant::needs_deinit[(int)local_88] != '\0') {
        ::Variant::_clear_internal();
      }
      if (pOVar26 == (Object *)0x0) {
        uVar28 = 0x605;
        pcVar29 = "Parameter \"obj\" is null.";
        goto LAB_00110bba;
      }
      local_c0 = (undefined1  [16])0x0;
      local_c8 = 0;
      pOVar27 = (Object *)__dynamic_cast(pOVar26,&Object::typeinfo,&RefCounted::typeinfo,0);
      if (pOVar27 == (Object *)0x0) {
        ::Variant::Variant((Variant_conflict *)&local_88,pOVar26);
        ::Variant::operator=((Variant_conflict *)&local_c8,(Variant_conflict *)&local_88);
        if (::Variant::needs_deinit[(int)local_88] != '\0') {
          ::Variant::_clear_internal();
        }
      }
      else {
        cVar15 = RefCounted::init_ref();
        if (cVar15 == '\0') {
          ::Variant::Variant((Variant_conflict *)&local_88,(Object *)0x0);
          ::Variant::operator=((Variant_conflict *)&local_c8,(Variant_conflict *)&local_88);
          if (::Variant::needs_deinit[(int)local_88] != '\0') {
            pOVar27 = (Object *)0x0;
            goto LAB_00110127;
          }
        }
        else {
          ::Variant::Variant((Variant_conflict *)&local_88,pOVar27);
          ::Variant::operator=((Variant_conflict *)&local_c8,(Variant_conflict *)&local_88);
          if (::Variant::needs_deinit[(int)local_88] != '\0') {
LAB_00110127:
            ::Variant::_clear_internal();
            if (pOVar27 == (Object *)0x0) goto LAB_0010f8cd;
          }
          cVar15 = RefCounted::unreference();
          if ((cVar15 != '\0') && (cVar15 = predelete_handler(pOVar27), cVar15 != '\0')) {
            (**(code **)(*(long *)pOVar27 + 0x140))(pOVar27);
            Memory::free_static(pOVar27,false);
          }
        }
      }
LAB_0010f8cd:
      for (iVar17 = 0; iVar30 = Array::size(), iVar17 < iVar30 / 2; iVar17 = iVar17 + 1) {
        iVar30 = (int)local_130;
        Array::operator[](iVar30);
        ::Variant::operator_cast_to_StringName((Variant_conflict *)&local_128);
        pVVar20 = (Variant_conflict *)Array::operator[](iVar30);
        _to_native((JSON *)local_a8,pVVar20,true,param_3 + 1);
        if ((local_128 == *(long *)(CoreStringNames::singleton + 0x10)) && (local_a8[0] != 0)) {
          ::Variant::operator_cast_to_String((Variant_conflict *)&local_120);
          if ((local_120 == 0) ||
             ((*(uint *)(local_120 + -8) < 2 ||
              (cVar15 = String::begins_with((char *)&local_120), cVar15 == '\0')))) {
LAB_0010f9ed:
            local_108 = 0;
            if (local_120 != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_108,(CowData *)&local_120);
            }
            local_110 = 0;
            String::parse_latin1((String *)&local_110,"Invalid script path \"%s\".");
            uVar28 = vformat<String>((Variant_conflict *)&local_e8,(String *)&local_110,
                                     (CowData<char32_t> *)&local_108);
            _err_print_error("_to_native","core/io/json.cpp",0x617,
                             "Condition \"path.is_empty() || !path.begins_with(\"res://\") || !ResourceLoader::exists(path, \"Script\")\" is true. Returning: Variant()"
                             ,(Variant_conflict *)&local_e8,0,0,uVar28);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
            *(undefined4 *)this = 0;
            *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
          }
          else {
            local_e8 = (char *)0x0;
            String::parse_latin1((String *)&local_e8,"Script");
            cVar15 = ResourceLoader::exists((String *)&local_120,(String *)&local_e8);
            if (cVar15 == '\0') {
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
              goto LAB_0010f9ed;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
            local_108 = 0;
            String::parse_latin1((String *)&local_108,"Script");
            ResourceLoader::load
                      ((Variant_conflict *)&local_e8,(Variant_conflict *)&local_120,
                       (String *)&local_108,1,0);
            local_118 = (Object *)0x0;
            if ((Object *)local_e8 != (Object *)0x0) {
              pOVar27 = (Object *)__dynamic_cast(local_e8,&Object::typeinfo,&Script::typeinfo,0);
              if (pOVar27 != (Object *)0x0) {
                local_118 = pOVar27;
                cVar15 = RefCounted::reference();
                if (cVar15 == '\0') {
                  local_118 = (Object *)0x0;
                }
                if ((Object *)local_e8 == (Object *)0x0) goto LAB_0010fdf8;
              }
              cVar15 = RefCounted::unreference();
              pOVar27 = (Object *)local_e8;
              if ((cVar15 != '\0') &&
                 (cVar15 = predelete_handler((Object *)local_e8), cVar15 != '\0')) {
                (**(code **)(*(long *)pOVar27 + 0x140))();
                Memory::free_static(pOVar27,false);
              }
            }
LAB_0010fdf8:
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
            if (local_118 != (Object *)0x0) {
              pcVar2 = *(code **)(*(long *)pOVar26 + 0x90);
              ::Variant::Variant((Variant_conflict *)&local_88,local_118);
              (*pcVar2)(pOVar26,(Variant_conflict *)&local_88);
              if (::Variant::needs_deinit[(int)local_88] != '\0') {
                ::Variant::_clear_internal();
              }
              Ref<Script>::unref((Ref<Script> *)&local_118);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
              goto LAB_0010f902;
            }
            local_108 = 0;
            if (local_120 != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_108,(CowData *)&local_120);
            }
            local_110 = 0;
            String::parse_latin1((String *)&local_110,"Can\'t load script at path \"%s\".");
            vformat<String>((Variant_conflict *)&local_e8,(String *)&local_110,(String *)&local_108)
            ;
            _err_print_error("_to_native","core/io/json.cpp",0x61c,
                             "Condition \"script.is_null()\" is true. Returning: Variant()",
                             (Variant_conflict *)&local_e8,0,0,in_R10);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
            *(undefined4 *)this = 0;
            *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
            Ref<Script>::unref((Ref<Script> *)&local_118);
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
          if (::Variant::needs_deinit[local_a8[0]] != '\0') {
            ::Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (local_128 != 0)) {
            StringName::unref();
          }
          if (::Variant::needs_deinit[(int)local_c8] != '\0') {
            ::Variant::_clear_internal();
          }
          goto LAB_0010faf1;
        }
        Object::set((StringName *)pOVar26,(Variant_conflict *)&local_128,(bool *)local_a8);
LAB_0010f902:
        if (::Variant::needs_deinit[local_a8[0]] != '\0') {
          ::Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_128 != 0)) {
          StringName::unref();
        }
      }
      *(int *)this = (int)local_c8;
      *(undefined8 *)(this + 8) = local_c0._0_8_;
      *(undefined8 *)(this + 0x10) = local_c0._8_8_;
    }
    else {
      uVar28 = 0x600;
      pcVar29 = "Condition \"props.size() % 2 != 0\" is true. Returning: Variant()";
LAB_00110bba:
      _err_print_error("_to_native","core/io/json.cpp",uVar28,pcVar29,0);
      *(undefined4 *)this = 0;
      *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
    }
LAB_0010faf1:
    Array::~Array((Array *)local_130);
    goto LAB_0010cd20;
  case 0x19:
    local_e8 = (char *)0x0;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = local_e0._8_8_;
    local_e0._0_16_ = auVar8 << 0x40;
    ::Variant::Variant((Variant_conflict *)this,(Callable *)&local_e8);
    Callable::~Callable((Callable *)&local_e8);
    goto LAB_0010cd20;
  case 0x1a:
    local_e8 = (char *)0x0;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = local_e0._8_8_;
    local_e0._0_16_ = auVar7 << 0x40;
    ::Variant::Variant((Variant_conflict *)this,(Signal *)&local_e8);
    if ((StringName::configured != '\0') && ((Object *)local_e8 != (Object *)0x0)) {
      StringName::unref();
    }
    goto LAB_0010cd20;
  case 0x1b:
    ::Variant::Variant((Variant_conflict *)&local_88,"args");
    cVar15 = Dictionary::has(local_138);
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    if (cVar15 == '\0') {
      uVar28 = 0x54e;
      pcVar29 = "Condition \"!dict.has(\"args\")\" is true. Returning: Variant()";
      break;
    }
    pVVar20 = (Variant_conflict *)&local_118;
    ::Variant::Variant((Variant_conflict *)&local_88,"args");
    Dictionary::operator[](local_138);
    ::Variant::operator_cast_to_Array(pVVar20);
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    uVar19 = Array::size();
    local_170 = uVar19 & 1;
    if ((uVar19 & 1) == 0) {
      local_108 = local_108 & 0xffffffff00000000;
      local_100._0_16_ = (undefined1  [16])0x0;
      local_e8 = (char *)0x0;
      String::parse_latin1((String *)&local_e8,"key_type");
      cVar15 = _decode_container_type
                         ((Dictionary *)local_138,(String *)&local_e8,(ContainerType *)&local_108,
                          param_2);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      if (cVar15 == '\0') {
        *(undefined4 *)this = 0;
        *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
      }
      else {
        local_e0._0_16_ = (undefined1  [16])0x0;
        local_e8 = (char *)((ulong)local_e8 & 0xffffffff00000000);
        local_110 = 0;
        String::parse_latin1((String *)&local_110,"value_type");
        cVar15 = _decode_container_type
                           ((Dictionary *)local_138,(String *)&local_110,(ContainerType *)&local_e8,
                            param_2);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
        if (cVar15 == '\0') {
          *(undefined4 *)this = 0;
          *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
        }
        else {
          Dictionary::Dictionary((Dictionary *)&local_110);
          if ((int)local_108 != 0 || (int)local_e8 != 0) {
            Dictionary::set_typed((ContainerType *)&local_110,(ContainerType *)&local_108);
          }
          if (param_3 < 0x401) {
            for (; iVar17 = Array::size(), (int)local_170 < iVar17 / 2; local_170 = local_170 + 1) {
              pVVar24 = (Variant_conflict *)Array::operator[]((int)pVVar20);
              _to_native((JSON *)&local_88,pVVar24,param_2,param_3 + 1);
              pVVar24 = (Variant_conflict *)Array::operator[]((int)pVVar20);
              _to_native((JSON *)local_a8,pVVar24,param_2,param_3 + 1);
              pVVar24 = (Variant_conflict *)Dictionary::operator[]((Variant_conflict *)&local_110);
              ::Variant::operator=(pVVar24,(Variant_conflict *)&local_88);
              if (::Variant::needs_deinit[local_a8[0]] != '\0') {
                ::Variant::_clear_internal();
              }
              if (::Variant::needs_deinit[(int)local_88] != '\0') {
                ::Variant::_clear_internal();
              }
            }
            ::Variant::Variant((Variant_conflict *)this,(Dictionary *)&local_110);
          }
          else {
            _err_print_error("_to_native","core/io/json.cpp",0x560,
                             "Condition \"p_depth > Variant::MAX_RECURSION_DEPTH\" is true. Returning: ret"
                             ,"Variant is too deep. Bailing.",0,0,param_3);
            ::Variant::Variant((Variant_conflict *)this,(Dictionary *)&local_110);
          }
          Dictionary::~Dictionary((Dictionary *)&local_110);
        }
        ContainerType::~ContainerType((ContainerType *)&local_e8);
      }
      if ((local_100._8_8_ != 0) && (cVar15 = RefCounted::unreference(), cVar15 != '\0')) {
        uVar28 = local_100._8_8_;
        cVar15 = predelete_handler((Object *)local_100._8_8_);
        if (cVar15 != '\0') {
          (**(code **)(*(long *)uVar28 + 0x140))(uVar28);
          Memory::free_static((void *)uVar28,false);
        }
      }
      if ((StringName::configured != '\0') && (local_100._0_8_ != 0)) {
        StringName::unref();
      }
    }
    else {
      uVar28 = 0x54e;
      pcVar29 = "Condition \"args.size() % (2) != 0\" is true. Returning: Variant()";
LAB_00110378:
      _err_print_error("_to_native","core/io/json.cpp",uVar28,pcVar29,0,0);
      *(undefined4 *)this = 0;
      *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
    }
LAB_0010e8e0:
    Array::~Array((Array *)pVVar20);
    goto LAB_0010cd20;
  case 0x1c:
    ::Variant::Variant((Variant_conflict *)&local_88,"args");
    cVar15 = Dictionary::has(local_138);
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    if (cVar15 == '\0') {
      uVar28 = 0x56a;
      pcVar29 = "Condition \"!dict.has(\"args\")\" is true. Returning: Variant()";
      break;
    }
    ::Variant::Variant((Variant_conflict *)&local_88,"args");
    Dictionary::operator[](local_138);
    ::Variant::operator_cast_to_Array((Variant_conflict *)&local_110);
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    local_e8 = (char *)((ulong)local_e8._4_4_ << 0x20);
    local_e0._0_16_ = (undefined1  [16])0x0;
    local_108 = 0;
    String::parse_latin1((String *)&local_108,"elem_type");
    cVar15 = _decode_container_type
                       ((Dictionary *)local_138,(String *)&local_108,(ContainerType *)&local_e8,
                        param_2);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
    if (cVar15 == '\0') {
      *(undefined4 *)this = 0;
      *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
    }
    else {
      Array::Array((Array *)&local_108);
      if ((int)local_e8 != 0) {
        Array::set_typed((ContainerType *)&local_108);
      }
      if (param_3 < 0x401) {
        iVar32 = 0;
        Array::size();
        iVar30 = (int)(String *)&local_108;
        Array::resize(iVar30);
        iVar17 = Array::size();
        if (0 < iVar17) {
          do {
            pVVar20 = (Variant_conflict *)Array::operator[]((int)(Variant_conflict *)&local_110);
            _to_native((JSON *)&local_88,pVVar20,param_2,param_3 + 1);
            pVVar20 = (Variant_conflict *)Array::operator[](iVar30);
            ::Variant::operator=(pVVar20,(Variant_conflict *)&local_88);
            if (::Variant::needs_deinit[(int)local_88] != '\0') {
              ::Variant::_clear_internal();
            }
            iVar32 = iVar32 + 1;
            iVar17 = Array::size();
          } while (iVar32 < iVar17);
        }
        ::Variant::Variant((Variant_conflict *)this,(Array *)&local_108);
      }
      else {
        _err_print_error("_to_native","core/io/json.cpp",0x577,
                         "Condition \"p_depth > Variant::MAX_RECURSION_DEPTH\" is true. Returning: ret"
                         ,"Variant is too deep. Bailing.",0,0,(Variant_conflict *)&local_e8);
        ::Variant::Variant((Variant_conflict *)this,(Array *)&local_108);
      }
      Array::~Array((Array *)&local_108);
    }
    if ((local_e0._8_8_ != 0) && (cVar15 = RefCounted::unreference(), cVar15 != '\0')) {
      uVar28 = local_e0._8_8_;
      cVar15 = predelete_handler((Object *)local_e0._8_8_);
      if (cVar15 != '\0') {
        (**(code **)(*(long *)uVar28 + 0x140))(uVar28);
        Memory::free_static((void *)uVar28,false);
      }
    }
    if ((StringName::configured != '\0') && (local_e0._0_8_ != 0)) {
      StringName::unref();
    }
LAB_0010e777:
    Array::~Array((Array *)&local_110);
    goto LAB_0010cd20;
  case 0x1d:
    ::Variant::Variant((Variant_conflict *)&local_88,"args");
    cVar15 = Dictionary::has(local_138);
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    if (cVar15 == '\0') {
      uVar28 = 0x582;
      pcVar29 = "Condition \"!dict.has(\"args\")\" is true. Returning: Variant()";
      break;
    }
    ::Variant::Variant((Variant_conflict *)&local_88,"args");
    Dictionary::operator[](local_138);
    ::Variant::operator_cast_to_Array((Variant_conflict *)&local_108);
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    auVar14._8_8_ = 0;
    auVar14._0_8_ = local_e0._8_8_;
    local_e0._0_16_ = auVar14 << 0x40;
    iVar17 = Array::size();
    CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)local_e0,(long)iVar17);
    for (lVar22 = 0; (local_e0._0_8_ != 0 && (lVar22 < *(long *)(local_e0._0_8_ + -8)));
        lVar22 = lVar22 + 1) {
      pVVar20 = (Variant_conflict *)Array::operator[]((int)(Variant_conflict *)&local_108);
      uVar16 = ::Variant::operator_cast_to_unsigned_char(pVVar20);
      if (local_e0._0_8_ == 0) goto LAB_0010d538;
      lVar31 = *(long *)(local_e0._0_8_ + -8);
      if (lVar31 <= lVar22) goto LAB_0010d559;
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)local_e0);
      *(uchar *)(local_e0._0_8_ + lVar22) = uVar16;
    }
    ::Variant::Variant((Variant_conflict *)this,(Vector *)&local_e8);
    CowData<unsigned_char>::_unref((CowData<unsigned_char> *)local_e0);
    Array::~Array((Array *)&local_108);
    goto LAB_0010cd20;
  case 0x1e:
    ::Variant::Variant((Variant_conflict *)&local_88,"args");
    cVar15 = Dictionary::has(local_138);
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    if (cVar15 == '\0') {
      uVar28 = 0x58d;
      pcVar29 = "Condition \"!dict.has(\"args\")\" is true. Returning: Variant()";
      break;
    }
    ::Variant::Variant((Variant_conflict *)&local_88,"args");
    Dictionary::operator[](local_138);
    ::Variant::operator_cast_to_Array((Variant_conflict *)&local_108);
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    auVar13._8_8_ = 0;
    auVar13._0_8_ = local_e0._8_8_;
    local_e0._0_16_ = auVar13 << 0x40;
    iVar17 = Array::size();
    CowData<int>::resize<false>((CowData<int> *)local_e0,(long)iVar17);
    for (lVar22 = 0; (local_e0._0_8_ != 0 && (lVar22 < *(long *)(local_e0._0_8_ + -8)));
        lVar22 = lVar22 + 1) {
      pVVar20 = (Variant_conflict *)Array::operator[]((int)(Variant_conflict *)&local_108);
      iVar17 = ::Variant::operator_cast_to_int(pVVar20);
      if (local_e0._0_8_ == 0) goto LAB_0010d538;
      lVar31 = *(long *)(local_e0._0_8_ + -8);
      if (lVar31 <= lVar22) goto LAB_0010d559;
      CowData<int>::_copy_on_write((CowData<int> *)local_e0);
      *(int *)(local_e0._0_8_ + lVar22 * 4) = iVar17;
    }
    ::Variant::Variant((Variant_conflict *)this,(Vector *)&local_e8);
    CowData<int>::_unref((CowData<int> *)local_e0);
    Array::~Array((Array *)&local_108);
    goto LAB_0010cd20;
  case 0x1f:
    ::Variant::Variant((Variant_conflict *)&local_88,"args");
    cVar15 = Dictionary::has(local_138);
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    if (cVar15 == '\0') {
      uVar28 = 0x598;
      pcVar29 = "Condition \"!dict.has(\"args\")\" is true. Returning: Variant()";
      break;
    }
    ::Variant::Variant((Variant_conflict *)&local_88,"args");
    Dictionary::operator[](local_138);
    ::Variant::operator_cast_to_Array((Variant_conflict *)&local_108);
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    auVar12._8_8_ = 0;
    auVar12._0_8_ = local_e0._8_8_;
    local_e0._0_16_ = auVar12 << 0x40;
    iVar17 = Array::size();
    CowData<long>::resize<false>((CowData<long> *)local_e0,(long)iVar17);
    for (lVar22 = 0; (local_e0._0_8_ != 0 && (lVar22 < *(long *)(local_e0._0_8_ + -8)));
        lVar22 = lVar22 + 1) {
      pVVar20 = (Variant_conflict *)Array::operator[]((int)(Variant_conflict *)&local_108);
      lVar25 = ::Variant::operator_cast_to_long(pVVar20);
      if (local_e0._0_8_ == 0) goto LAB_0010d538;
      lVar31 = *(long *)(local_e0._0_8_ + -8);
      if (lVar31 <= lVar22) goto LAB_0010d559;
      CowData<long>::_copy_on_write((CowData<long> *)local_e0);
      *(long *)(local_e0._0_8_ + lVar22 * 8) = lVar25;
    }
    ::Variant::Variant((Variant_conflict *)this,(Vector *)&local_e8);
    CowData<long>::_unref((CowData<long> *)local_e0);
    Array::~Array((Array *)&local_108);
    goto LAB_0010cd20;
  case 0x20:
    ::Variant::Variant((Variant_conflict *)&local_88,"args");
    cVar15 = Dictionary::has(local_138);
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    if (cVar15 == '\0') {
      uVar28 = 0x5a3;
      pcVar29 = "Condition \"!dict.has(\"args\")\" is true. Returning: Variant()";
      break;
    }
    ::Variant::Variant((Variant_conflict *)&local_88,"args");
    Dictionary::operator[](local_138);
    ::Variant::operator_cast_to_Array((Variant_conflict *)&local_108);
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    auVar11._8_8_ = 0;
    auVar11._0_8_ = local_e0._8_8_;
    local_e0._0_16_ = auVar11 << 0x40;
    iVar17 = Array::size();
    CowData<float>::resize<false>((CowData<float> *)local_e0,(long)iVar17);
    for (lVar22 = 0; (local_e0._0_8_ != 0 && (lVar22 < *(long *)(local_e0._0_8_ + -8)));
        lVar22 = lVar22 + 1) {
      pVVar20 = (Variant_conflict *)Array::operator[]((int)(Variant_conflict *)&local_108);
      fVar33 = ::Variant::operator_cast_to_float(pVVar20);
      if (local_e0._0_8_ == 0) goto LAB_0010d538;
      lVar31 = *(long *)(local_e0._0_8_ + -8);
      if (lVar31 <= lVar22) goto LAB_0010d559;
      CowData<float>::_copy_on_write((CowData<float> *)local_e0);
      *(float *)(local_e0._0_8_ + lVar22 * 4) = fVar33;
    }
    ::Variant::Variant((Variant_conflict *)this,(Vector *)&local_e8);
    CowData<float>::_unref((CowData<float> *)local_e0);
    Array::~Array((Array *)&local_108);
    goto LAB_0010cd20;
  case 0x21:
    ::Variant::Variant((Variant_conflict *)&local_88,"args");
    cVar15 = Dictionary::has(local_138);
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    if (cVar15 == '\0') {
      uVar28 = 0x5ae;
      pcVar29 = "Condition \"!dict.has(\"args\")\" is true. Returning: Variant()";
      break;
    }
    ::Variant::Variant((Variant_conflict *)&local_88,"args");
    Dictionary::operator[](local_138);
    ::Variant::operator_cast_to_Array((Variant_conflict *)&local_108);
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    auVar10._8_8_ = 0;
    auVar10._0_8_ = local_e0._8_8_;
    local_e0._0_16_ = auVar10 << 0x40;
    iVar17 = Array::size();
    CowData<double>::resize<false>((CowData<double> *)local_e0,(long)iVar17);
    for (lVar22 = 0; (local_e0._0_8_ != 0 && (lVar22 < *(long *)(local_e0._0_8_ + -8)));
        lVar22 = lVar22 + 1) {
      pVVar20 = (Variant_conflict *)Array::operator[]((int)(Variant_conflict *)&local_108);
      dVar37 = ::Variant::operator_cast_to_double(pVVar20);
      if (local_e0._0_8_ == 0) goto LAB_0010d538;
      lVar31 = *(long *)(local_e0._0_8_ + -8);
      if (lVar31 <= lVar22) goto LAB_0010d559;
      CowData<double>::_copy_on_write((CowData<double> *)local_e0);
      *(double *)(local_e0._0_8_ + lVar22 * 8) = dVar37;
    }
    ::Variant::Variant((Variant_conflict *)this,(Vector *)&local_e8);
    CowData<double>::_unref((CowData<double> *)local_e0);
    Array::~Array((Array *)&local_108);
    goto LAB_0010cd20;
  case 0x22:
    ::Variant::Variant((Variant_conflict *)&local_88,"args");
    cVar15 = Dictionary::has(local_138);
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    if (cVar15 != '\0') {
      ::Variant::Variant((Variant_conflict *)&local_88,"args");
      Dictionary::operator[](local_138);
      ::Variant::operator_cast_to_Array((Variant_conflict *)&local_110);
      if (::Variant::needs_deinit[(int)local_88] != '\0') {
        ::Variant::_clear_internal();
      }
      auVar9._8_8_ = 0;
      auVar9._0_8_ = local_e0._8_8_;
      local_e0._0_16_ = auVar9 << 0x40;
      iVar17 = Array::size();
      CowData<String>::resize<false>((CowData<String> *)local_e0,(long)iVar17);
      for (lVar22 = 0; (local_e0._0_8_ != 0 && (lVar22 < *(long *)(local_e0._0_8_ + -8)));
          lVar22 = lVar22 + 1) {
        Array::operator[]((int)(Variant_conflict *)&local_110);
        ::Variant::operator_cast_to_String((Variant_conflict *)&local_108);
        if (local_e0._0_8_ == 0) goto LAB_0010d026;
        lVar31 = *(long *)(local_e0._0_8_ + -8);
        if (lVar31 <= lVar22) goto LAB_0010d559;
        CowData<String>::_copy_on_write((CowData<String> *)local_e0);
        this_00 = (CowData<char32_t> *)(local_e0._0_8_ + lVar22 * 8);
        if (*(ulong *)this_00 != local_108) {
          CowData<char32_t>::_unref(this_00);
          *(ulong *)this_00 = local_108;
          local_108 = 0;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
      }
      ::Variant::Variant((Variant_conflict *)this,(Vector *)&local_e8);
      CowData<String>::_unref((CowData<String> *)local_e0);
      goto LAB_0010e777;
    }
    uVar28 = 0x5b9;
    pcVar29 = "Condition \"!dict.has(\"args\")\" is true. Returning: Variant()";
    break;
  case 0x23:
    ::Variant::Variant((Variant_conflict *)&local_88,"args");
    cVar15 = Dictionary::has(local_138);
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    if (cVar15 != '\0') {
      pVVar20 = (Variant_conflict *)&local_108;
      ::Variant::Variant((Variant_conflict *)&local_88,"args");
      Dictionary::operator[](local_138);
      ::Variant::operator_cast_to_Array(pVVar20);
      if (::Variant::needs_deinit[(int)local_88] != '\0') {
        ::Variant::_clear_internal();
      }
      uVar23 = Array::size();
      if ((uVar23 & 1) != 0) {
        uVar28 = 0x5c4;
        pcVar29 = "Condition \"args.size() % (2) != 0\" is true. Returning: Variant()";
        goto LAB_00110378;
      }
      auVar6._8_8_ = 0;
      auVar6._0_8_ = local_e0._8_8_;
      local_e0._0_16_ = auVar6 << 0x40;
      uVar23 = Array::size();
      CowData<Vector2>::resize<false>
                ((CowData<Vector2> *)local_e0,
                 (long)((int)(((uint)(uVar23 >> 0x1f) & 1) + (int)uVar23) >> 1));
      for (lVar22 = 0; (local_e0._0_8_ != 0 && (lVar22 < *(long *)(local_e0._0_8_ + -8)));
          lVar22 = lVar22 + 1) {
        pVVar24 = (Variant_conflict *)Array::operator[]((int)pVVar20);
        fVar33 = ::Variant::operator_cast_to_float(pVVar24);
        pVVar24 = (Variant_conflict *)Array::operator[]((int)pVVar20);
        fVar34 = ::Variant::operator_cast_to_float(pVVar24);
        if (local_e0._0_8_ == 0) goto LAB_0010d538;
        lVar31 = *(long *)(local_e0._0_8_ + -8);
        if (lVar31 <= lVar22) goto LAB_0010d559;
        CowData<Vector2>::_copy_on_write((CowData<Vector2> *)local_e0);
        *(ulong *)(local_e0._0_8_ + lVar22 * 8) = CONCAT44(fVar33,fVar34);
      }
      ::Variant::Variant((Variant_conflict *)this,(Vector *)&local_e8);
      CowData<Vector2>::_unref((CowData<Vector2> *)local_e0);
      goto LAB_0010e8e0;
    }
    uVar28 = 0x5c4;
    pcVar29 = "Condition \"!dict.has(\"args\")\" is true. Returning: Variant()";
    break;
  case 0x24:
    ::Variant::Variant((Variant_conflict *)&local_88,"args");
    cVar15 = Dictionary::has(local_138);
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    if (cVar15 != '\0') {
      pVVar20 = (Variant_conflict *)&local_108;
      ::Variant::Variant((Variant_conflict *)&local_88,"args");
      Dictionary::operator[](local_138);
      ::Variant::operator_cast_to_Array(pVVar20);
      if (::Variant::needs_deinit[(int)local_88] != '\0') {
        ::Variant::_clear_internal();
      }
      iVar17 = Array::size();
      if (0x55555554 < iVar17 * -0x55555555 + 0x2aaaaaaaU) {
        uVar28 = 0x5cf;
        pcVar29 = "Condition \"args.size() % (3) != 0\" is true. Returning: Variant()";
        goto LAB_00110378;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = local_e0._8_8_;
      local_e0._0_16_ = auVar5 << 0x40;
      iVar17 = Array::size();
      CowData<Vector3>::resize<false>((CowData<Vector3> *)local_e0,(long)(iVar17 / 3));
      for (lVar22 = 0; (local_e0._0_8_ != 0 && (lVar22 < *(long *)(local_e0._0_8_ + -8)));
          lVar22 = lVar22 + 1) {
        iVar17 = (int)pVVar20;
        pVVar24 = (Variant_conflict *)Array::operator[](iVar17);
        fVar33 = ::Variant::operator_cast_to_float(pVVar24);
        pVVar24 = (Variant_conflict *)Array::operator[](iVar17);
        fVar34 = ::Variant::operator_cast_to_float(pVVar24);
        pVVar24 = (Variant_conflict *)Array::operator[](iVar17);
        fVar35 = ::Variant::operator_cast_to_float(pVVar24);
        if (local_e0._0_8_ == 0) goto LAB_0010d026;
        lVar31 = *(long *)(local_e0._0_8_ + -8);
        if (lVar31 <= lVar22) goto LAB_0010d559;
        CowData<Vector3>::_copy_on_write((CowData<Vector3> *)local_e0);
        puVar1 = (undefined8 *)(local_e0._0_8_ + lVar22 * 0xc);
        *(float *)(puVar1 + 1) = fVar33;
        *puVar1 = CONCAT44(fVar34,fVar35);
      }
      ::Variant::Variant((Variant_conflict *)this,(Vector *)&local_e8);
      CowData<Vector3>::_unref((CowData<Vector3> *)local_e0);
      goto LAB_0010e8e0;
    }
    uVar28 = 0x5cf;
    pcVar29 = "Condition \"!dict.has(\"args\")\" is true. Returning: Variant()";
    break;
  case 0x25:
    ::Variant::Variant((Variant_conflict *)&local_88,"args");
    cVar15 = Dictionary::has(local_138);
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    if (cVar15 != '\0') {
      pVVar20 = (Variant_conflict *)&local_108;
      ::Variant::Variant((Variant_conflict *)&local_88,"args");
      Dictionary::operator[](local_138);
      ::Variant::operator_cast_to_Array(pVVar20);
      if (::Variant::needs_deinit[(int)local_88] != '\0') {
        ::Variant::_clear_internal();
      }
      uVar23 = Array::size();
      if ((uVar23 & 3) != 0) {
        uVar28 = 0x5da;
        pcVar29 = "Condition \"args.size() % (4) != 0\" is true. Returning: Variant()";
        goto LAB_00110378;
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_e0._8_8_;
      local_e0._0_16_ = auVar4 << 0x40;
      iVar30 = Array::size();
      iVar17 = iVar30 + 3;
      if (-1 < iVar30) {
        iVar17 = iVar30;
      }
      CowData<Color>::resize<false>((CowData<Color> *)local_e0,(long)(iVar17 >> 2));
      for (lVar22 = 0; (local_e0._0_8_ != 0 && (lVar22 < *(long *)(local_e0._0_8_ + -8)));
          lVar22 = lVar22 + 1) {
        iVar17 = (int)pVVar20;
        pVVar24 = (Variant_conflict *)Array::operator[](iVar17);
        fVar33 = ::Variant::operator_cast_to_float(pVVar24);
        pVVar24 = (Variant_conflict *)Array::operator[](iVar17);
        fVar34 = ::Variant::operator_cast_to_float(pVVar24);
        pVVar24 = (Variant_conflict *)Array::operator[](iVar17);
        fVar35 = ::Variant::operator_cast_to_float(pVVar24);
        pVVar24 = (Variant_conflict *)Array::operator[](iVar17);
        fVar36 = ::Variant::operator_cast_to_float(pVVar24);
        if (local_e0._0_8_ == 0) goto LAB_0010d026;
        lVar31 = *(long *)(local_e0._0_8_ + -8);
        if (lVar31 <= lVar22) goto LAB_0010d559;
        CowData<Color>::_copy_on_write((CowData<Color> *)local_e0);
        puVar1 = (undefined8 *)(local_e0._0_8_ + lVar22 * 0x10);
        *puVar1 = CONCAT44(fVar35,fVar36);
        puVar1[1] = CONCAT44(fVar33,fVar34);
      }
      ::Variant::Variant((Variant_conflict *)this,(Vector *)&local_e8);
      CowData<Color>::_unref((CowData<Color> *)local_e0);
      goto LAB_0010e8e0;
    }
    uVar28 = 0x5da;
    pcVar29 = "Condition \"!dict.has(\"args\")\" is true. Returning: Variant()";
    break;
  case 0x26:
    ::Variant::Variant((Variant_conflict *)&local_88,"args");
    cVar15 = Dictionary::has(local_138);
    if (::Variant::needs_deinit[(int)local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    if (cVar15 != '\0') {
      pVVar20 = (Variant_conflict *)&local_108;
      ::Variant::Variant((Variant_conflict *)&local_88,"args");
      Dictionary::operator[](local_138);
      ::Variant::operator_cast_to_Array(pVVar20);
      if (::Variant::needs_deinit[(int)local_88] != '\0') {
        ::Variant::_clear_internal();
      }
      uVar23 = Array::size();
      if ((uVar23 & 3) != 0) {
        uVar28 = 0x5e5;
        pcVar29 = "Condition \"args.size() % (4) != 0\" is true. Returning: Variant()";
        goto LAB_00110378;
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_e0._8_8_;
      local_e0._0_16_ = auVar3 << 0x40;
      iVar30 = Array::size();
      iVar17 = iVar30 + 3;
      if (-1 < iVar30) {
        iVar17 = iVar30;
      }
      CowData<Vector4>::resize<false>((CowData<Vector4> *)local_e0,(long)(iVar17 >> 2));
      for (lVar22 = 0; (local_e0._0_8_ != 0 && (lVar22 < *(long *)(local_e0._0_8_ + -8)));
          lVar22 = lVar22 + 1) {
        iVar17 = (int)pVVar20;
        pVVar24 = (Variant_conflict *)Array::operator[](iVar17);
        fVar33 = ::Variant::operator_cast_to_float(pVVar24);
        pVVar24 = (Variant_conflict *)Array::operator[](iVar17);
        fVar34 = ::Variant::operator_cast_to_float(pVVar24);
        pVVar24 = (Variant_conflict *)Array::operator[](iVar17);
        fVar35 = ::Variant::operator_cast_to_float(pVVar24);
        pVVar24 = (Variant_conflict *)Array::operator[](iVar17);
        fVar36 = ::Variant::operator_cast_to_float(pVVar24);
        if (local_e0._0_8_ == 0) goto LAB_0010d026;
        lVar31 = *(long *)(local_e0._0_8_ + -8);
        if (lVar31 <= lVar22) goto LAB_0010d559;
        CowData<Vector4>::_copy_on_write((CowData<Vector4> *)local_e0);
        puVar1 = (undefined8 *)(local_e0._0_8_ + lVar22 * 0x10);
        *puVar1 = CONCAT44(fVar35,fVar36);
        puVar1[1] = CONCAT44(fVar33,fVar34);
      }
      ::Variant::Variant((Variant_conflict *)this,(Vector *)&local_e8);
      CowData<Vector4>::_unref((CowData<Vector4> *)local_e0);
      goto LAB_0010e8e0;
    }
    uVar28 = 0x5e5;
    pcVar29 = "Condition \"!dict.has(\"args\")\" is true. Returning: Variant()";
  }
LAB_0010cd52:
  _err_print_error("_to_native","core/io/json.cpp",uVar28,pcVar29,0,0);
  *(undefined4 *)this = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
LAB_0010cd20:
  Dictionary::~Dictionary((Dictionary *)local_138);
LAB_0010c77f:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0010d026:
  lVar31 = 0;
  goto LAB_0010d559;
LAB_0010d538:
  lVar31 = 0;
LAB_0010d559:
  _err_print_index_error
            ("operator[]","./core/templates/vector.h",0x38,lVar22,lVar31,"p_index",
             "((Vector<T> *)(this))->_cowdata.size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* DefaultAllocator::alloc(unsigned long) */

void DefaultAllocator::alloc(ulong param_1)

{
  Memory::alloc_static(param_1,false);
  return;
}



/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
  if ((configured != '\0') && (*(long *)this != 0)) {
    StringName::unref();
    return;
  }
  return;
}



/* Object::get_save_class() const */

void Object::get_save_class(void)

{
  long lVar1;
  long *in_RSI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*in_RSI + 0x48))();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind::is_valid() const */

undefined8 MethodBind::is_valid(void)

{
  return 1;
}



/* MethodBind::is_vararg() const */

undefined8 MethodBind::is_vararg(void)

{
  return 0;
}



/* RefCounted::is_class_ptr(void*) const */

uint __thiscall RefCounted::is_class_ptr(RefCounted *this,void *param_1)

{
  return (uint)CONCAT71(0x1201,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1201,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
}



/* RefCounted::_getv(StringName const&, Variant&) const */

undefined8 RefCounted::_getv(StringName *param_1,Variant_conflict *param_2)

{
  return 0;
}



/* RefCounted::_setv(StringName const&, Variant const&) */

undefined8 RefCounted::_setv(StringName *param_1,Variant_conflict *param_2)

{
  return 0;
}



/* RefCounted::_validate_propertyv(PropertyInfo&) const */

void RefCounted::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* RefCounted::_property_can_revertv(StringName const&) const */

undefined8 RefCounted::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* RefCounted::_property_get_revertv(StringName const&, Variant&) const */

undefined8 RefCounted::_property_get_revertv(StringName *param_1,Variant_conflict *param_2)

{
  return 0;
}



/* RefCounted::_notificationv(int, bool) */

void RefCounted::_notificationv(int param_1,bool param_2)

{
  return;
}



/* Resource::set_last_modified_time(unsigned long) */

void __thiscall Resource::set_last_modified_time(Resource *this,ulong param_1)

{
  *(ulong *)(this + 0x198) = param_1;
  return;
}



/* Resource::set_import_last_modified_time(unsigned long) */

void __thiscall Resource::set_import_last_modified_time(Resource *this,ulong param_1)

{
  *(ulong *)(this + 0x1a0) = param_1;
  return;
}



/* ResourceFormatLoader::is_class_ptr(void*) const */

uint __thiscall ResourceFormatLoader::is_class_ptr(ResourceFormatLoader *this,void *param_1)

{
  return (uint)CONCAT71(0x1201,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1201,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1201,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* ResourceFormatLoader::_getv(StringName const&, Variant&) const */

undefined8 ResourceFormatLoader::_getv(StringName *param_1,Variant_conflict *param_2)

{
  return 0;
}



/* ResourceFormatLoader::_setv(StringName const&, Variant const&) */

undefined8 ResourceFormatLoader::_setv(StringName *param_1,Variant_conflict *param_2)

{
  return 0;
}



/* ResourceFormatLoader::_validate_propertyv(PropertyInfo&) const */

void ResourceFormatLoader::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* ResourceFormatLoader::_property_can_revertv(StringName const&) const */

undefined8 ResourceFormatLoader::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* ResourceFormatLoader::_property_get_revertv(StringName const&, Variant&) const */

undefined8
ResourceFormatLoader::_property_get_revertv(StringName *param_1,Variant_conflict *param_2)

{
  return 0;
}



/* ResourceFormatLoader::_notificationv(int, bool) */

void ResourceFormatLoader::_notificationv(int param_1,bool param_2)

{
  return;
}



/* ResourceFormatLoader::is_import_valid(String const&) const */

undefined8 ResourceFormatLoader::is_import_valid(String *param_1)

{
  return 1;
}



/* ResourceFormatLoader::is_imported(String const&) const */

undefined8 ResourceFormatLoader::is_imported(String *param_1)

{
  return 0;
}



/* ResourceFormatLoader::get_import_order(String const&) const */

undefined8 ResourceFormatLoader::get_import_order(String *param_1)

{
  return 0;
}



/* ResourceFormatSaver::is_class_ptr(void*) const */

uint __thiscall ResourceFormatSaver::is_class_ptr(ResourceFormatSaver *this,void *param_1)

{
  return (uint)CONCAT71(0x1201,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1201,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1201,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* ResourceFormatSaver::_getv(StringName const&, Variant&) const */

undefined8 ResourceFormatSaver::_getv(StringName *param_1,Variant_conflict *param_2)

{
  return 0;
}



/* ResourceFormatSaver::_setv(StringName const&, Variant const&) */

undefined8 ResourceFormatSaver::_setv(StringName *param_1,Variant_conflict *param_2)

{
  return 0;
}



/* ResourceFormatSaver::_validate_propertyv(PropertyInfo&) const */

void ResourceFormatSaver::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* ResourceFormatSaver::_property_can_revertv(StringName const&) const */

undefined8 ResourceFormatSaver::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* ResourceFormatSaver::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ResourceFormatSaver::_property_get_revertv(StringName *param_1,Variant_conflict *param_2)

{
  return 0;
}



/* ResourceFormatSaver::_notificationv(int, bool) */

void ResourceFormatSaver::_notificationv(int param_1,bool param_2)

{
  return;
}



/* JSON::is_class_ptr(void*) const */

uint __thiscall JSON::is_class_ptr(JSON *this,void *param_1)

{
  return (uint)CONCAT71(0x1201,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1201,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1201,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1201,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* JSON::_getv(StringName const&, Variant&) const */

undefined8 JSON::_getv(StringName *param_1,Variant_conflict *param_2)

{
  return 0;
}



/* JSON::_setv(StringName const&, Variant const&) */

undefined8 JSON::_setv(StringName *param_1,Variant_conflict *param_2)

{
  return 0;
}



/* JSON::_validate_propertyv(PropertyInfo&) const */

void JSON::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* JSON::_property_can_revertv(StringName const&) const */

undefined8 JSON::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* JSON::_property_get_revertv(StringName const&, Variant&) const */

undefined8 JSON::_property_get_revertv(StringName *param_1,Variant_conflict *param_2)

{
  return 0;
}



/* JSON::_notificationv(int, bool) */

void JSON::_notificationv(int param_1,bool param_2)

{
  return;
}



/* JSON::from_native(Variant const&, bool) */

JSON * __thiscall JSON::from_native(JSON *this,Variant_conflict *param_1,bool param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  _from_native((Variant_conflict *)this,SUB81(param_1,0),(uint)param_2);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JSON::to_native(Variant const&, bool) */

JSON * __thiscall JSON::to_native(JSON *this,Variant_conflict *param_1,bool param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  _to_native(this,param_1,param_2,0);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JSON::get_data() const */

void JSON::get_data(void)

{
  long in_RSI;
  Variant_conflict *in_RDI;
  
  ::Variant::Variant(in_RDI,(Variant_conflict *)(in_RSI + 0x248));
  return;
}



/* JSON::get_error_line() const */

undefined4 __thiscall JSON::get_error_line(JSON *this)

{
  return *(undefined4 *)(this + 0x268);
}



/* JSON::get_error_message() const */

void JSON::get_error_message(void)

{
  long in_RSI;
  CowData<char32_t> *in_RDI;
  
  *(undefined8 *)in_RDI = 0;
  if (*(long *)(in_RSI + 0x260) != 0) {
    CowData<char32_t>::_ref(in_RDI,(CowData *)(in_RSI + 0x260));
  }
  return;
}



/* ResourceFormatLoaderJSON::get_resource_uid(String const&) const */

undefined8 ResourceFormatLoaderJSON::get_resource_uid(String *param_1)

{
  return 0xffffffffffffffff;
}



/* ResourceFormatLoaderJSON::has_custom_uid_support() const */

undefined8 ResourceFormatLoaderJSON::has_custom_uid_support(void)

{
  return 1;
}



/* MethodBindTRS<Variant, Variant const&, bool>::_gen_argument_type(int) const */

bool __thiscall
MethodBindTRS<Variant,Variant_const&,bool>::_gen_argument_type
          (MethodBindTRS<Variant,Variant_const&,bool> *this,int param_1)

{
  return param_1 == 1;
}



/* MethodBindTRS<Variant, Variant const&, bool>::get_argument_meta(int) const */

undefined8 MethodBindTRS<Variant,Variant_const&,bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<int>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<int>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<int>::get_argument_meta(int) const */

uint __thiscall MethodBindTRC<int>::get_argument_meta(MethodBindTRC<int> *this,int param_1)

{
  return param_1 >> 0x1f & 3;
}



/* MethodBindTRC<String>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<String>::_gen_argument_type(int param_1)

{
  return 4;
}



/* MethodBindTRC<String>::get_argument_meta(int) const */

undefined8 MethodBindTRC<String>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Variant const&>::_gen_argument_type(int) const */

undefined8 MethodBindT<Variant_const&>::_gen_argument_type(int param_1)

{
  return 0;
}



/* MethodBindT<Variant const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Variant_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<Variant>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Variant>::_gen_argument_type(int param_1)

{
  return 0;
}



/* MethodBindTRC<Variant>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Variant>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<Error, String const&, bool>::_gen_argument_type(int) const */

char __thiscall
MethodBindTR<Error,String_const&,bool>::_gen_argument_type
          (MethodBindTR<Error,String_const&,bool> *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\x02';
  if ((uint)param_1 < 2) {
    cVar1 = (-(param_1 == 0) & 3U) + 1;
  }
  return cVar1;
}



/* MethodBindTR<Error, String const&, bool>::get_argument_meta(int) const */

undefined8 MethodBindTR<Error,String_const&,bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRS<Variant, String const&>::_gen_argument_type(int) const */

long __thiscall
MethodBindTRS<Variant,String_const&>::_gen_argument_type
          (MethodBindTRS<Variant,String_const&> *this,int param_1)

{
  return (ulong)(param_1 == 0) << 2;
}



/* MethodBindTRS<Variant, String const&>::get_argument_meta(int) const */

undefined8 MethodBindTRS<Variant,String_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRS<String, Variant const&, String const&, bool, bool>::_gen_argument_type(int) const
    */

bool __thiscall
MethodBindTRS<String,Variant_const&,String_const&,bool,bool>::_gen_argument_type
          (MethodBindTRS<String,Variant_const&,String_const&,bool,bool> *this,int param_1)

{
  if ((param_1 != 1) && ((uint)param_1 < 4)) {
    return param_1 - 2U < 2;
  }
  return (bool)4;
}



/* MethodBindTRS<String, Variant const&, String const&, bool, bool>::get_argument_meta(int) const */

undefined8
MethodBindTRS<String,Variant_const&,String_const&,bool,bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRS<String, Variant const&, String const&, bool, bool>::~MethodBindTRS() */

void __thiscall
MethodBindTRS<String,Variant_const&,String_const&,bool,bool>::~MethodBindTRS
          (MethodBindTRS<String,Variant_const&,String_const&,bool,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011fdd8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRS<String, Variant const&, String const&, bool, bool>::~MethodBindTRS() */

void __thiscall
MethodBindTRS<String,Variant_const&,String_const&,bool,bool>::~MethodBindTRS
          (MethodBindTRS<String,Variant_const&,String_const&,bool,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011fdd8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x60);
  return;
}



/* MethodBindTRS<Variant, String const&>::~MethodBindTRS() */

void __thiscall
MethodBindTRS<Variant,String_const&>::~MethodBindTRS(MethodBindTRS<Variant,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011fe38;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRS<Variant, String const&>::~MethodBindTRS() */

void __thiscall
MethodBindTRS<Variant,String_const&>::~MethodBindTRS(MethodBindTRS<Variant,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011fe38;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x60);
  return;
}



/* MethodBindTR<Error, String const&, bool>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,String_const&,bool>::~MethodBindTR(MethodBindTR<Error,String_const&,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011fe98;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Error, String const&, bool>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,String_const&,bool>::~MethodBindTR(MethodBindTR<Error,String_const&,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011fe98;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Variant>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Variant>::~MethodBindTRC(MethodBindTRC<Variant> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011fef8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Variant>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Variant>::~MethodBindTRC(MethodBindTRC<Variant> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011fef8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Variant const&>::~MethodBindT() */

void __thiscall MethodBindT<Variant_const&>::~MethodBindT(MethodBindT<Variant_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011ff58;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Variant const&>::~MethodBindT() */

void __thiscall MethodBindT<Variant_const&>::~MethodBindT(MethodBindT<Variant_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011ff58;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00120018;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00120018;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011ffb8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011ffb8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRS<Variant, Variant const&, bool>::~MethodBindTRS() */

void __thiscall
MethodBindTRS<Variant,Variant_const&,bool>::~MethodBindTRS
          (MethodBindTRS<Variant,Variant_const&,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00120078;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRS<Variant, Variant const&, bool>::~MethodBindTRS() */

void __thiscall
MethodBindTRS<Variant,Variant_const&,bool>::~MethodBindTRS
          (MethodBindTRS<Variant,Variant_const&,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00120078;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x60);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0011f730;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0011f730;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* MethodBindTRS<Variant, String const&>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRS<Variant,String_const&>::ptrcall
          (MethodBindTRS<Variant,String_const&> *this,Object *param_1,void **param_2,void *param_3)

{
  long in_FS_OFFSET;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(this + 0x58))(local_38,*param_2,param_2,0);
  ::Variant::operator=((Variant_conflict *)param_3,(Variant_conflict *)local_38);
  if (::Variant::needs_deinit[local_38[0]] != '\0') {
    ::Variant::_clear_internal();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRS<Variant, String const&>::validated_call(Object*, Variant const**, Variant*) const
    */

void __thiscall
MethodBindTRS<Variant,String_const&>::validated_call
          (MethodBindTRS<Variant,String_const&> *this,Object *param_1,Variant_conflict **param_2,
          Variant_conflict *param_3)

{
  long in_FS_OFFSET;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(this + 0x58))(local_38,*param_2 + 8,param_2,0);
  ::Variant::operator=(param_3,(Variant_conflict *)local_38);
  if (::Variant::needs_deinit[local_38[0]] != '\0') {
    ::Variant::_clear_internal();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRS<Variant, Variant const&, bool>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRS<Variant,Variant_const&,bool>::ptrcall
          (MethodBindTRS<Variant,Variant_const&,bool> *this,Object *param_1,void **param_2,
          void *param_3)

{
  long in_FS_OFFSET;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
                    /* WARNING: Load size is inaccurate */
  (**(code **)(this + 0x58))(local_38,*param_2,*param_2[1] != '\0');
  ::Variant::operator=((Variant_conflict *)param_3,(Variant_conflict *)local_38);
  if (::Variant::needs_deinit[local_38[0]] != '\0') {
    ::Variant::_clear_internal();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRS<Variant, Variant const&, bool>::validated_call(Object*, Variant const**, Variant*)
   const */

void __thiscall
MethodBindTRS<Variant,Variant_const&,bool>::validated_call
          (MethodBindTRS<Variant,Variant_const&,bool> *this,Object *param_1,
          Variant_conflict **param_2,Variant_conflict *param_3)

{
  long in_FS_OFFSET;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(this + 0x58))(local_38,*param_2,param_2[1][8]);
  ::Variant::operator=(param_3,(Variant_conflict *)local_38);
  if (::Variant::needs_deinit[local_38[0]] != '\0') {
    ::Variant::_clear_internal();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Resource::get_base_extension() const */

Resource * __thiscall Resource::get_base_extension(Resource *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)this = 0;
  String::parse_latin1((StrRange *)this);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceFormatLoader::get_import_group_file(String const&) const */

String * ResourceFormatLoader::get_import_group_file(String *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)param_1 = 0;
  String::parse_latin1((StrRange *)param_1);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceFormatSaverJSON::~ResourceFormatSaverJSON() */

void __thiscall ResourceFormatSaverJSON::~ResourceFormatSaverJSON(ResourceFormatSaverJSON *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined **)this = &__dso_handle;
  if (bVar1) {
    if (*(long *)(this + 0x1e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00111d61;
    }
    if (*(long *)(this + 0x1c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00111d61;
    }
    if (*(long *)(this + 0x1b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00111d61;
    }
    if (*(long *)(this + 0x198) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00111d61;
    }
    if (*(long *)(this + 0x180) != 0) {
      StringName::unref();
    }
  }
LAB_00111d61:
  *(undefined ***)this = &PTR__initialize_classv_0011f730;
  Object::~Object((Object *)this);
  return;
}



/* ResourceFormatSaverJSON::~ResourceFormatSaverJSON() */

void __thiscall ResourceFormatSaverJSON::~ResourceFormatSaverJSON(ResourceFormatSaverJSON *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined **)this = &__dso_handle;
  if (bVar1) {
    if (*(long *)(this + 0x1e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00111e31;
    }
    if (*(long *)(this + 0x1c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00111e31;
    }
    if (*(long *)(this + 0x1b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00111e31;
    }
    if (*(long *)(this + 0x198) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00111e31;
    }
    if (*(long *)(this + 0x180) != 0) {
      StringName::unref();
    }
  }
LAB_00111e31:
  *(undefined ***)this = &PTR__initialize_classv_0011f730;
  Object::~Object((Object *)this);
  operator_delete(this,0x1f8);
  return;
}



/* ResourceFormatSaver::_get_class_namev() const */

undefined8 * ResourceFormatSaver::_get_class_namev(void)

{
  int iVar1;
  
  if ((_get_class_namev()::_class_name_static == '\0') &&
     (iVar1 = __cxa_guard_acquire(&_get_class_namev()::_class_name_static), iVar1 != 0)) {
    _get_class_namev()::_class_name_static = 0;
    __cxa_atexit(StringName::~StringName,&_get_class_namev()::_class_name_static,&__dso_handle);
    __cxa_guard_release(&_get_class_namev()::_class_name_static);
  }
  if (_get_class_namev()::_class_name_static != 0) {
    if (*(long *)(_get_class_namev()::_class_name_static + 8) != 0) {
LAB_00111ea3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00111ea3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ResourceFormatSaver");
      goto LAB_00111f0e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ResourceFormatSaver");
LAB_00111f0e:
  return &_get_class_namev()::_class_name_static;
}



/* JSON::_get_class_namev() const */

undefined8 * JSON::_get_class_namev(void)

{
  int iVar1;
  
  if ((_get_class_namev()::_class_name_static == '\0') &&
     (iVar1 = __cxa_guard_acquire(&_get_class_namev()::_class_name_static), iVar1 != 0)) {
    _get_class_namev()::_class_name_static = 0;
    __cxa_atexit(StringName::~StringName,&_get_class_namev()::_class_name_static,&__dso_handle);
    __cxa_guard_release(&_get_class_namev()::_class_name_static);
  }
  if (_get_class_namev()::_class_name_static != 0) {
    if (*(long *)(_get_class_namev()::_class_name_static + 8) != 0) {
LAB_00111f83:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00111f83;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"JSON");
      goto LAB_00111fee;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"JSON");
LAB_00111fee:
  return &_get_class_namev()::_class_name_static;
}



/* RefCounted::_get_class_namev() const */

undefined8 * RefCounted::_get_class_namev(void)

{
  int iVar1;
  
  if ((_get_class_namev()::_class_name_static == '\0') &&
     (iVar1 = __cxa_guard_acquire(&_get_class_namev()::_class_name_static), iVar1 != 0)) {
    _get_class_namev()::_class_name_static = 0;
    __cxa_atexit(StringName::~StringName,&_get_class_namev()::_class_name_static,&__dso_handle);
    __cxa_guard_release(&_get_class_namev()::_class_name_static);
  }
  if (_get_class_namev()::_class_name_static != 0) {
    if (*(long *)(_get_class_namev()::_class_name_static + 8) != 0) {
LAB_00112063:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00112063;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_001120ce;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_001120ce:
  return &_get_class_namev()::_class_name_static;
}



/* ResourceFormatLoader::_get_class_namev() const */

undefined8 * ResourceFormatLoader::_get_class_namev(void)

{
  int iVar1;
  
  if ((_get_class_namev()::_class_name_static == '\0') &&
     (iVar1 = __cxa_guard_acquire(&_get_class_namev()::_class_name_static), iVar1 != 0)) {
    _get_class_namev()::_class_name_static = 0;
    __cxa_atexit(StringName::~StringName,&_get_class_namev()::_class_name_static,&__dso_handle);
    __cxa_guard_release(&_get_class_namev()::_class_name_static);
  }
  if (_get_class_namev()::_class_name_static != 0) {
    if (*(long *)(_get_class_namev()::_class_name_static + 8) != 0) {
LAB_00112153:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00112153;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ResourceFormatLoader");
      goto LAB_001121be;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ResourceFormatLoader");
LAB_001121be:
  return &_get_class_namev()::_class_name_static;
}



/* MethodBindTRS<Variant, Variant const&, bool>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRS<Variant,Variant_const&,bool>::call
                   (Object *param_1,Variant_conflict **param_2,int param_3,CallError *param_4)

{
  Variant_conflict *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  undefined4 uVar7;
  long lVar8;
  int iVar9;
  uint in_R8D;
  undefined4 *in_R9;
  int iVar10;
  Variant_conflict *pVVar11;
  Variant_conflict *pVVar12;
  long in_FS_OFFSET;
  undefined4 local_68 [2];
  undefined8 local_60;
  undefined8 uStack_58;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  pVVar1 = param_2[0xb];
  *(undefined4 *)param_1 = 0;
  if (in_R8D < 3) {
    pVVar12 = param_2[5];
    iVar9 = 2 - in_R8D;
    if (pVVar12 == (Variant_conflict *)0x0) {
      if (iVar9 != 0) goto LAB_00112398;
      pVVar11 = *(Variant_conflict **)param_4;
LAB_001123ed:
      pVVar12 = *(Variant_conflict **)(param_4 + 8);
    }
    else {
      lVar2 = *(long *)(pVVar12 + -8);
      iVar10 = (int)lVar2;
      if (iVar10 < iVar9) {
LAB_00112398:
        uVar7 = 4;
        goto LAB_0011239d;
      }
      if (in_R8D == 0) {
        lVar8 = (long)(iVar10 + -2);
        if (lVar2 <= lVar8) goto LAB_00112408;
        pVVar11 = pVVar12 + lVar8 * 0x18;
      }
      else {
        pVVar11 = *(Variant_conflict **)param_4;
        if (in_R8D == 2) goto LAB_001123ed;
      }
      lVar8 = (long)(int)((iVar10 - iVar9) + (in_R8D ^ 1));
      if (lVar2 <= lVar8) {
LAB_00112408:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar12 = pVVar12 + lVar8 * 0x18;
    }
    *in_R9 = 0;
    cVar5 = ::Variant::can_convert_strict(*(undefined4 *)pVVar12,1);
    uVar4 = _LC10;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    bVar6 = ::Variant::operator_cast_to_bool(pVVar12);
    cVar5 = ::Variant::can_convert_strict(*(undefined4 *)pVVar11,0);
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = 0;
    }
    ::Variant::Variant((Variant_conflict *)local_48,pVVar11);
    (*(code *)pVVar1)(local_68,(Variant_conflict *)local_48,bVar6);
    if (::Variant::needs_deinit[*(int *)param_1] != '\0') {
      ::Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_68[0];
    *(undefined8 *)(param_1 + 8) = local_60;
    *(undefined8 *)(param_1 + 0x10) = uStack_58;
    if (::Variant::needs_deinit[local_48[0]] != '\0') {
      ::Variant::_clear_internal();
    }
  }
  else {
    uVar7 = 3;
LAB_0011239d:
    *in_R9 = uVar7;
    in_R9[2] = 2;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<unsigned_char>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Vector3>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector3>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Vector2>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector2>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<int>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<long>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<long>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Color>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Color>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<double>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<double>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<float>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<float>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Vector4>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector4>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<unsigned_char>::resize<false>(long param_1)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001124c8(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<double>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<double>::resize<false>(long param_1)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<long>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<long>::resize<false>(long param_1)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<int>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<int>::resize<false>(long param_1)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<float>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<float>::resize<false>(long param_1)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Error CowData<Vector2>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<Vector2>::resize<false>(long param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Error CowData<Vector3>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<Vector3>::resize<false>(long param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Error CowData<Vector4>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<Vector4>::resize<false>(long param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Error CowData<Color>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<Color>::resize<false>(long param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* JSON::_bind_methods() [clone .cold] */

void JSON::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<String>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Error CowData<String>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<String>::resize<false>(long param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* SortArray<List<Variant, DefaultAllocator>::Element*, List<Variant,
   DefaultAllocator>::AuxiliaryComparator<StringLikeVariantOrder>, true>::partitioner(long, long,
   List<Variant, DefaultAllocator>::Element*, List<Variant, DefaultAllocator>::Element**) const
   [clone .isra.0] */

long SortArray<List<Variant,DefaultAllocator>::Element*,List<Variant,DefaultAllocator>::AuxiliaryComparator<StringLikeVariantOrder>,true>
     ::partitioner(long param_1,long param_2,Element *param_3,Element **param_4)

{
  long *plVar1;
  int iVar2;
  Element *pEVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  long lVar7;
  Element **ppEVar8;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar6 = param_2;
  lVar7 = param_1;
  do {
    iVar2 = *(int *)param_4[lVar7];
    if (((iVar2 == 4) || (iVar2 == 0x15)) && ((*(int *)param_3 == 4 || (*(int *)param_3 == 0x15))))
    {
      ::Variant::operator_cast_to_String((Variant_conflict *)&local_50);
      ::Variant::operator_cast_to_String((Variant_conflict *)&local_48);
      cVar5 = String::operator<((String *)&local_48,(String *)&local_50);
      lVar4 = local_48;
      if (local_48 != 0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      lVar4 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar1 = (long *)(local_50 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
    }
    else {
      cVar5 = ::Variant::operator<((Variant_conflict *)param_4[lVar7],(Variant_conflict *)param_3);
    }
    if (cVar5 == '\0') {
LAB_001126fd:
      lVar6 = lVar6 + -1;
      ppEVar8 = param_4 + lVar6;
      while( true ) {
        if (((*(int *)param_3 == 4) || (*(int *)param_3 == 0x15)) &&
           ((iVar2 = *(int *)*ppEVar8, iVar2 == 4 || (iVar2 == 0x15)))) {
          ::Variant::operator_cast_to_String((Variant_conflict *)&local_50);
          ::Variant::operator_cast_to_String((Variant_conflict *)&local_48);
          cVar5 = String::operator<((String *)&local_48,(String *)&local_50);
          lVar4 = local_48;
          if (local_48 != 0) {
            LOCK();
            plVar1 = (long *)(local_48 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_48 = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar4 = local_50;
          if (local_50 != 0) {
            LOCK();
            plVar1 = (long *)(local_50 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_50 = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
        }
        else {
          cVar5 = ::Variant::operator<((Variant_conflict *)param_3,(Variant_conflict *)*ppEVar8);
        }
        if (cVar5 == '\0') goto joined_r0x00112865;
        if (lVar6 == param_1) break;
        lVar6 = lVar6 + -1;
        ppEVar8 = ppEVar8 + -1;
      }
      _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                       "bad comparison function; sorting will be broken",0,0);
joined_r0x00112865:
      if (lVar6 <= lVar7) {
        if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return lVar7;
      }
      pEVar3 = param_4[lVar7];
      param_4[lVar7] = *ppEVar8;
      *ppEVar8 = pEVar3;
    }
    else if (param_2 + -1 == lVar7) {
      _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                       "bad comparison function; sorting will be broken",0,0);
      goto LAB_001126fd;
    }
    lVar7 = lVar7 + 1;
  } while( true );
}



/* MethodBindTRS<String, Variant const&, String const&, bool, bool>::ptrcall(Object*, void const**,
   void*) const */

void __thiscall
MethodBindTRS<String,Variant_const&,String_const&,bool,bool>::ptrcall
          (MethodBindTRS<String,Variant_const&,String_const&,bool,bool> *this,Object *param_1,
          void **param_2,void *param_3)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
  (**(code **)(this + 0x58))(&local_28,*param_2,param_2[1],*param_2[2] != '\0',*param_2[3] != '\0');
                    /* WARNING: Load size is inaccurate */
  if (*param_3 != local_28) {
    CowData<char32_t>::_ref((CowData<char32_t> *)param_3,(CowData *)&local_28);
  }
  lVar2 = local_28;
  if (local_28 != 0) {
    LOCK();
    plVar1 = (long *)(local_28 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_28 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRS<String, Variant const&, String const&, bool, bool>::validated_call(Object*, Variant
   const**, Variant*) const */

void __thiscall
MethodBindTRS<String,Variant_const&,String_const&,bool,bool>::validated_call
          (MethodBindTRS<String,Variant_const&,String_const&,bool,bool> *this,Object *param_1,
          Variant_conflict **param_2,Variant_conflict *param_3)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(this + 0x58))(&local_28,*param_2,param_2[1] + 8,param_2[2][8],param_2[3][8]);
  if (*(long *)(param_3 + 8) != local_28) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(param_3 + 8),(CowData *)&local_28);
  }
  lVar2 = local_28;
  if (local_28 != 0) {
    LOCK();
    plVar1 = (long *)(local_28 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_28 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::get_class() const */

void RefCounted::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
  }
  else {
    lVar2 = *(long *)(*(long *)(in_RSI + 8) + 0x20);
    if (lVar2 == 0) {
      *(undefined8 *)in_RDI = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      *(undefined8 *)in_RDI = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar2 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
        }
      }
      else {
        strlen(__s);
        String::parse_latin1(in_RDI);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceFormatSaver::get_class() const */

void ResourceFormatSaver::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
  }
  else {
    lVar2 = *(long *)(*(long *)(in_RSI + 8) + 0x20);
    if (lVar2 == 0) {
      *(undefined8 *)in_RDI = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      *(undefined8 *)in_RDI = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar2 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
        }
      }
      else {
        strlen(__s);
        String::parse_latin1(in_RDI);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceFormatLoader::get_class() const */

void ResourceFormatLoader::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
  }
  else {
    lVar2 = *(long *)(*(long *)(in_RSI + 8) + 0x20);
    if (lVar2 == 0) {
      *(undefined8 *)in_RDI = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      *(undefined8 *)in_RDI = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar2 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
        }
      }
      else {
        strlen(__s);
        String::parse_latin1(in_RDI);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JSON::get_class() const */

void JSON::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
  }
  else {
    lVar2 = *(long *)(*(long *)(in_RSI + 8) + 0x20);
    if (lVar2 == 0) {
      *(undefined8 *)in_RDI = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      *(undefined8 *)in_RDI = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar2 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
        }
      }
      else {
        strlen(__s);
        String::parse_latin1(in_RDI);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JSON::~JSON() */

void __thiscall JSON::~JSON(JSON *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0011f890;
  if (*(long *)(this + 0x260) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x260) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x260);
      *(undefined8 *)(this + 0x260) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (::Variant::needs_deinit[*(int *)(this + 0x248)] != '\0') {
    ::Variant::_clear_internal();
  }
  if (*(long *)(this + 0x240) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x240) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x240);
      *(undefined8 *)(this + 0x240) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      Resource::~Resource((Resource *)this);
      return;
    }
  }
  Resource::~Resource((Resource *)this);
  return;
}



/* JSON::~JSON() */

void __thiscall JSON::~JSON(JSON *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0011f890;
  if (*(long *)(this + 0x260) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x260) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x260);
      *(undefined8 *)(this + 0x260) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (::Variant::needs_deinit[*(int *)(this + 0x248)] != '\0') {
    ::Variant::_clear_internal();
  }
  if (*(long *)(this + 0x240) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x240) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x240);
      *(undefined8 *)(this + 0x240) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x270);
  return;
}



/* MethodBindTRC<Variant>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Variant>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar1 = 0;
  puVar1[6] = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  puVar1[10] = 0x20006;
  *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
  local_28 = 0;
  StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_28);
  if ((StringName::configured != '\0') && (local_28 != 0)) {
    StringName::unref();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<String>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC2;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 4;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x0011315c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0011315c:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<int>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC2;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 2;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x001132dc;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x001132dc:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SortArray<List<Variant, DefaultAllocator>::Element*, List<Variant,
   DefaultAllocator>::AuxiliaryComparator<StringLikeVariantOrder>, true>::adjust_heap(long, long,
   long, List<Variant, DefaultAllocator>::Element*, List<Variant, DefaultAllocator>::Element**)
   const [clone .isra.0] */

void SortArray<List<Variant,DefaultAllocator>::Element*,List<Variant,DefaultAllocator>::AuxiliaryComparator<StringLikeVariantOrder>,true>
     ::adjust_heap(long param_1,long param_2,long param_3,Element *param_4,Element **param_5)

{
  long *plVar1;
  int iVar2;
  Variant_conflict *pVVar3;
  Variant_conflict *this;
  char cVar4;
  long lVar5;
  Element **ppEVar6;
  Element **ppEVar7;
  long lVar8;
  long lVar9;
  long in_FS_OFFSET;
  long local_80;
  long local_50;
  long local_48;
  long local_40;
  
  lVar8 = param_2 * 2 + 2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar8 < param_3) {
    local_80 = param_2;
    do {
      pVVar3 = (Variant_conflict *)param_5[lVar8 + -1 + param_1];
      this = (Variant_conflict *)param_5[param_1 + lVar8];
      iVar2 = *(int *)this;
      if (((iVar2 == 4) || (iVar2 == 0x15)) &&
         ((iVar2 = *(int *)pVVar3, iVar2 == 4 || (iVar2 == 0x15)))) {
        ::Variant::operator_cast_to_String((Variant_conflict *)&local_50);
        ::Variant::operator_cast_to_String((Variant_conflict *)&local_48);
        cVar4 = String::operator<((String *)&local_48,(String *)&local_50);
        lVar5 = local_48;
        if (local_48 != 0) {
          LOCK();
          plVar1 = (long *)(local_48 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_48 = 0;
            Memory::free_static((void *)(lVar5 + -0x10),false);
          }
        }
        lVar5 = local_50;
        if (local_50 != 0) {
          LOCK();
          plVar1 = (long *)(local_50 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_50 = 0;
            Memory::free_static((void *)(lVar5 + -0x10),false);
          }
        }
      }
      else {
        cVar4 = ::Variant::operator<(this,pVVar3);
      }
      lVar5 = lVar8 + -1;
      ppEVar7 = param_5 + lVar8 + -1 + param_1;
      lVar9 = lVar8;
      if (cVar4 == '\0') {
        lVar9 = lVar8 + 1;
        lVar5 = lVar8;
        ppEVar7 = param_5 + param_1 + lVar8;
      }
      lVar8 = lVar9 * 2;
      param_5[local_80 + param_1] = *ppEVar7;
      local_80 = lVar5;
    } while (lVar8 < param_3);
    ppEVar6 = ppEVar7;
    if (lVar8 == param_3) goto LAB_00113640;
  }
  else {
    ppEVar7 = param_5 + param_2 + param_1;
    if (lVar8 != param_3) goto LAB_001135f0;
LAB_00113640:
    lVar5 = lVar8 + -1;
    ppEVar6 = param_5 + param_1 + lVar5;
    *ppEVar7 = *ppEVar6;
  }
  lVar8 = (lVar5 + -1) - (lVar5 + -1 >> 0x3f);
  ppEVar7 = ppEVar6;
  if (param_2 < lVar5) {
    do {
      lVar9 = lVar8 >> 1;
      ppEVar6 = param_5 + param_1 + lVar9;
      iVar2 = *(int *)*ppEVar6;
      if (((iVar2 == 4) || (iVar2 == 0x15)) && ((*(int *)param_4 == 4 || (*(int *)param_4 == 0x15)))
         ) {
        ::Variant::operator_cast_to_String((Variant_conflict *)&local_48);
        ::Variant::operator_cast_to_String((Variant_conflict *)&local_50);
        cVar4 = String::operator<((String *)&local_50,(String *)&local_48);
        lVar8 = local_50;
        if (local_50 != 0) {
          LOCK();
          plVar1 = (long *)(local_50 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_50 = 0;
            Memory::free_static((void *)(lVar8 + -0x10),false);
          }
        }
        lVar8 = local_48;
        if (local_48 != 0) {
          LOCK();
          plVar1 = (long *)(local_48 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_48 = 0;
            Memory::free_static((void *)(lVar8 + -0x10),false);
          }
        }
      }
      else {
        cVar4 = ::Variant::operator<((Variant_conflict *)*ppEVar6,(Variant_conflict *)param_4);
      }
      ppEVar7 = param_5 + lVar5 + param_1;
      if (cVar4 == '\0') break;
      param_5[lVar5 + param_1] = *ppEVar6;
      lVar8 = (lVar9 + -1) - (lVar9 + -1 >> 0x3f);
      lVar5 = lVar9;
      ppEVar7 = ppEVar6;
    } while (param_2 < lVar9);
  }
LAB_001135f0:
  *ppEVar7 = param_4;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SortArray<List<Variant, DefaultAllocator>::Element*, List<Variant,
   DefaultAllocator>::AuxiliaryComparator<StringLikeVariantOrder>, true>::partial_sort(long, long,
   long, List<Variant, DefaultAllocator>::Element**) const [clone .isra.0] */

void SortArray<List<Variant,DefaultAllocator>::Element*,List<Variant,DefaultAllocator>::AuxiliaryComparator<StringLikeVariantOrder>,true>
     ::partial_sort(long param_1,long param_2,long param_3,Element **param_4)

{
  long *plVar1;
  int iVar2;
  Variant_conflict *pVVar3;
  Element *pEVar4;
  bool bVar5;
  long lVar6;
  char cVar7;
  Element **ppEVar8;
  long lVar9;
  long lVar10;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  
  lVar10 = param_3 - param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar10 < 2) {
    if (param_2 <= param_3) goto LAB_001137c3;
LAB_001136f9:
    lVar9 = param_3;
    do {
      while( true ) {
        pVVar3 = (Variant_conflict *)param_4[param_1];
        iVar2 = *(int *)param_4[lVar9];
        if (((iVar2 == 4) || (iVar2 == 0x15)) &&
           ((iVar2 = *(int *)pVVar3, iVar2 == 4 || (iVar2 == 0x15)))) {
          ::Variant::operator_cast_to_String((Variant_conflict *)&local_50);
          ::Variant::operator_cast_to_String((Variant_conflict *)&local_48);
          cVar7 = String::operator<((String *)&local_48,(String *)&local_50);
          lVar6 = local_48;
          if (local_48 != 0) {
            LOCK();
            plVar1 = (long *)(local_48 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_48 = 0;
              Memory::free_static((void *)(lVar6 + -0x10),false);
            }
          }
          lVar6 = local_50;
          if (local_50 != 0) {
            LOCK();
            plVar1 = (long *)(local_50 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_50 = 0;
              Memory::free_static((void *)(lVar6 + -0x10),false);
            }
          }
        }
        else {
          cVar7 = ::Variant::operator<((Variant_conflict *)param_4[lVar9],pVVar3);
        }
        if (cVar7 == '\0') break;
        pEVar4 = param_4[lVar9];
        param_4[lVar9] = param_4[param_1];
        lVar9 = lVar9 + 1;
        adjust_heap(param_1,0,lVar10,pEVar4,param_4);
        if (lVar9 == param_2) goto LAB_0011377b;
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 != param_2);
LAB_0011377b:
    if (lVar10 < 2) goto LAB_001137c3;
  }
  else {
    for (lVar9 = lVar10 + -2 >> 1;
        adjust_heap(param_1,lVar9,lVar10,param_4[param_1 + lVar9],param_4), lVar9 != 0;
        lVar9 = lVar9 + -1) {
    }
    if (param_3 < param_2) goto LAB_001136f9;
  }
  ppEVar8 = param_4 + param_1;
  lVar10 = (param_3 + -1) - param_1;
  do {
    pEVar4 = ppEVar8[lVar10];
    ppEVar8[lVar10] = *ppEVar8;
    adjust_heap(param_1,0,lVar10,pEVar4,param_4);
    bVar5 = 1 < lVar10;
    lVar10 = lVar10 + -1;
  } while (bVar5);
LAB_001137c3:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTRS<String, Variant const&, String const&, bool, bool>::call(Object*, Variant const**,
   int, Callable::CallError&) const */

Object * MethodBindTRS<String,Variant_const&,String_const&,bool,bool>::call
                   (Object *param_1,Variant_conflict **param_2,int param_3,CallError *param_4)

{
  long *plVar1;
  Variant_conflict *pVVar2;
  Variant_conflict *pVVar3;
  code *pcVar4;
  undefined8 uVar5;
  char cVar6;
  bool bVar7;
  bool bVar8;
  undefined4 uVar9;
  long lVar10;
  uint uVar11;
  int iVar12;
  Variant_conflict *pVVar13;
  uint in_R8D;
  undefined4 *in_R9;
  long lVar14;
  long in_FS_OFFSET;
  long local_b8;
  long local_b0;
  undefined4 local_a8 [2];
  undefined8 local_a0;
  undefined8 uStack_98;
  int local_88 [8];
  Variant_conflict *local_68 [5];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  pVVar2 = param_2[0xb];
  *(undefined4 *)param_1 = 0;
  if (in_R8D < 5) {
    pVVar3 = param_2[5];
    if (pVVar3 == (Variant_conflict *)0x0) {
      iVar12 = 0;
      lVar14 = 0;
    }
    else {
      lVar14 = *(long *)(pVVar3 + -8);
      iVar12 = (int)lVar14;
    }
    if ((int)(4 - in_R8D) <= iVar12) {
      lVar10 = 0;
      do {
        if ((int)lVar10 < (int)in_R8D) {
          pVVar13 = *(Variant_conflict **)(param_4 + lVar10 * 8);
        }
        else {
          uVar11 = iVar12 + -4 + (int)lVar10;
          if (lVar14 <= (int)uVar11) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar11,lVar14,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          pVVar13 = pVVar3 + (ulong)uVar11 * 0x18;
        }
        local_68[lVar10] = pVVar13;
        lVar10 = lVar10 + 1;
      } while (lVar10 != 4);
      *in_R9 = 0;
      cVar6 = ::Variant::can_convert_strict(*(undefined4 *)local_68[3],1);
      uVar5 = _LC27;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar5;
      }
      bVar7 = ::Variant::operator_cast_to_bool(local_68[3]);
      cVar6 = ::Variant::can_convert_strict(*(undefined4 *)local_68[2],1);
      uVar5 = _LC28;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar5;
      }
      bVar8 = ::Variant::operator_cast_to_bool(local_68[2]);
      cVar6 = ::Variant::can_convert_strict(*(undefined4 *)local_68[1],4);
      uVar5 = _LC29;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar5;
      }
      ::Variant::operator_cast_to_String((Variant_conflict *)&local_b0);
      cVar6 = ::Variant::can_convert_strict(*(undefined4 *)local_68[0],0);
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = 0;
      }
      ::Variant::Variant((Variant_conflict *)local_88,local_68[0]);
      (*(code *)pVVar2)((String *)&local_b8,(Variant_conflict *)local_88,
                        (Variant_conflict *)&local_b0,bVar8,bVar7);
      ::Variant::Variant((Variant_conflict *)local_a8,(String *)&local_b8);
      if (::Variant::needs_deinit[*(int *)param_1] != '\0') {
        ::Variant::_clear_internal();
      }
      lVar14 = local_b8;
      *(undefined4 *)param_1 = local_a8[0];
      *(undefined8 *)(param_1 + 8) = local_a0;
      *(undefined8 *)(param_1 + 0x10) = uStack_98;
      if (local_b8 != 0) {
        LOCK();
        plVar1 = (long *)(local_b8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_b8 = 0;
          Memory::free_static((void *)(lVar14 + -0x10),false);
        }
      }
      if (::Variant::needs_deinit[local_88[0]] != '\0') {
        ::Variant::_clear_internal();
      }
      lVar14 = local_b0;
      if (local_b0 != 0) {
        LOCK();
        plVar1 = (long *)(local_b0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_b0 = 0;
          Memory::free_static((void *)(lVar14 + -0x10),false);
        }
      }
      goto LAB_00113adf;
    }
    uVar9 = 4;
  }
  else {
    uVar9 = 3;
  }
  *in_R9 = uVar9;
  in_R9[2] = 4;
LAB_00113adf:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::_initialize_classv() */

void RefCounted::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_48 = 0;
    local_38 = "Object";
    local_30 = 6;
    String::parse_latin1((StrRange *)&local_48);
    StringName::StringName((StringName *)&local_40,(String *)&local_48,false);
    local_38 = "RefCounted";
    local_50 = 0;
    local_30 = 10;
    String::parse_latin1((StrRange *)&local_50);
    StringName::StringName((StringName *)&local_38,(String *)&local_50,false);
    ClassDB::_add_class2((StringName *)&local_38,(StringName *)&local_40);
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
    lVar2 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_40 != 0)) {
      StringName::unref();
    }
    lVar2 = local_48;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
      RefCounted::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::is_class(String const&) const */

undefined8 __thiscall RefCounted::is_class(RefCounted *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  undefined8 uVar7;
  long lVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar4 = *(long *)(lVar2 + 0x20);
    if (lVar4 == 0) {
      local_60 = 0;
    }
    else {
      pcVar3 = *(char **)(lVar4 + 8);
      local_60 = 0;
      if (pcVar3 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
        if (*(long *)(lVar4 + 0x10) != 0) {
          do {
            lVar5 = *plVar1;
            if (lVar5 == 0) goto LAB_00113e1f;
            LOCK();
            lVar8 = *plVar1;
            bVar9 = lVar5 == lVar8;
            if (bVar9) {
              *plVar1 = lVar5 + 1;
              lVar8 = lVar5;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar8 != -1) {
            local_60 = *(long *)(lVar4 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_00113e1f:
    cVar6 = String::operator==(param_1,(String *)&local_60);
    lVar4 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_00113ed3;
  }
  cVar6 = String::operator==(param_1,"RefCounted");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
          if (*(long *)(lVar4 + 0x10) != 0) {
            do {
              lVar5 = *plVar1;
              if (lVar5 == 0) goto LAB_00113f83;
              LOCK();
              lVar8 = *plVar1;
              bVar9 = lVar5 == lVar8;
              if (bVar9) {
                *plVar1 = lVar5 + 1;
                lVar8 = lVar5;
              }
              UNLOCK();
            } while (!bVar9);
            if (lVar8 != -1) {
              local_60 = *(long *)(lVar4 + 0x10);
            }
          }
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
LAB_00113f83:
      cVar6 = String::operator==(param_1,(String *)&local_60);
      lVar4 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      if (cVar6 != '\0') goto LAB_00113ed3;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_00113ed3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceFormatSaver::is_class(String const&) const */

undefined8 __thiscall ResourceFormatSaver::is_class(ResourceFormatSaver *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  bool bVar8;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar3 = *(long *)(lVar2 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      __s = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (__s == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar3 + 0x10) + -0x10);
        if (*(long *)(lVar3 + 0x10) != 0) {
          do {
            lVar4 = *plVar1;
            if (lVar4 == 0) goto LAB_001140af;
            LOCK();
            lVar6 = *plVar1;
            bVar8 = lVar4 == lVar6;
            if (bVar8) {
              *plVar1 = lVar4 + 1;
              lVar6 = lVar4;
            }
            UNLOCK();
          } while (!bVar8);
          if (lVar6 != -1) {
            local_60 = *(long *)(lVar3 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_001140af:
    cVar5 = String::operator==(param_1,(String *)&local_60);
    lVar3 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    if (cVar5 != '\0') goto LAB_00114163;
  }
  cVar5 = String::operator==(param_1,"ResourceFormatSaver");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00114163:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceFormatLoader::is_class(String const&) const */

undefined8 __thiscall ResourceFormatLoader::is_class(ResourceFormatLoader *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  bool bVar8;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar3 = *(long *)(lVar2 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      __s = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (__s == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar3 + 0x10) + -0x10);
        if (*(long *)(lVar3 + 0x10) != 0) {
          do {
            lVar4 = *plVar1;
            if (lVar4 == 0) goto LAB_0011422f;
            LOCK();
            lVar6 = *plVar1;
            bVar8 = lVar4 == lVar6;
            if (bVar8) {
              *plVar1 = lVar4 + 1;
              lVar6 = lVar4;
            }
            UNLOCK();
          } while (!bVar8);
          if (lVar6 != -1) {
            local_60 = *(long *)(lVar3 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0011422f:
    cVar5 = String::operator==(param_1,(String *)&local_60);
    lVar3 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    if (cVar5 != '\0') goto LAB_001142e3;
  }
  cVar5 = String::operator==(param_1,"ResourceFormatLoader");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_001142e3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JSON::is_class(String const&) const */

undefined8 __thiscall JSON::is_class(JSON *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  undefined8 uVar7;
  long lVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar4 = *(long *)(lVar2 + 0x20);
    if (lVar4 == 0) {
      local_60 = 0;
    }
    else {
      pcVar3 = *(char **)(lVar4 + 8);
      local_60 = 0;
      if (pcVar3 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
        if (*(long *)(lVar4 + 0x10) != 0) {
          do {
            lVar5 = *plVar1;
            if (lVar5 == 0) goto LAB_001143bf;
            LOCK();
            lVar8 = *plVar1;
            bVar9 = lVar5 == lVar8;
            if (bVar9) {
              *plVar1 = lVar5 + 1;
              lVar8 = lVar5;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar8 != -1) {
            local_60 = *(long *)(lVar4 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_001143bf:
    cVar6 = String::operator==(param_1,(String *)&local_60);
    lVar4 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_00114473;
  }
  cVar6 = String::operator==(param_1,"JSON");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
          if (*(long *)(lVar4 + 0x10) != 0) {
            do {
              lVar5 = *plVar1;
              if (lVar5 == 0) goto LAB_00114533;
              LOCK();
              lVar8 = *plVar1;
              bVar9 = lVar5 == lVar8;
              if (bVar9) {
                *plVar1 = lVar5 + 1;
                lVar8 = lVar5;
              }
              UNLOCK();
            } while (!bVar9);
            if (lVar8 != -1) {
              local_60 = *(long *)(lVar4 + 0x10);
            }
          }
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
LAB_00114533:
      cVar6 = String::operator==(param_1,(String *)&local_60);
      lVar4 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      if (cVar6 != '\0') goto LAB_00114473;
    }
    cVar6 = String::operator==(param_1,"Resource");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar7;
      }
      goto LAB_001145dc;
    }
  }
LAB_00114473:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001145dc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void RefCounted::_get_property_listv(List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  undefined7 in_register_00000031;
  List *pLVar6;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  pLVar6 = (List *)CONCAT71(in_register_00000031,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = 0;
  local_90 = 0;
  local_78 = "RefCounted";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "RefCounted";
  local_98 = 0;
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00114758:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00114758;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00114776;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00114776:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])pLVar6 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)pLVar6;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"RefCounted",false);
  ClassDB::get_property_list((StringName *)&local_78,pLVar6,true,(Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceFormatLoader::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
ResourceFormatLoader::_get_property_listv(ResourceFormatLoader *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "ResourceFormatLoader";
  local_70 = 0x14;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ResourceFormatLoader";
  local_98 = 0;
  local_70 = 0x14;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00114b58:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00114b58;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00114b75;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00114b75:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"ResourceFormatLoader",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceFormatSaver::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
ResourceFormatSaver::_get_property_listv(ResourceFormatSaver *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "ResourceFormatSaver";
  local_70 = 0x13;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ResourceFormatSaver";
  local_98 = 0;
  local_70 = 0x13;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00114fa8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00114fa8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00114fc5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00114fc5:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"ResourceFormatSaver",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceFormatSaver::_initialize_classv() */

void ResourceFormatSaver::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized != '\0') goto LAB_001161bb;
  if (RefCounted::initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_68 = 0;
    local_50 = 6;
    local_58 = "Object";
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "RefCounted";
    local_70 = 0;
    local_50 = 10;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
    lVar2 = local_70;
    if (local_70 != 0) {
      LOCK();
      plVar1 = (long *)(local_70 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    lVar2 = local_68;
    if (local_68 == 0) {
LAB_001162ca:
      if ((code *)PTR__bind_methods_00125010 != RefCounted::_bind_methods) {
LAB_001162da:
        RefCounted::_bind_methods();
      }
    }
    else {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_001162ca;
      local_68 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      if ((code *)PTR__bind_methods_00125010 != RefCounted::_bind_methods) goto LAB_001162da;
    }
    RefCounted::initialize_class()::initialized = '\x01';
  }
  local_58 = "RefCounted";
  local_68 = 0;
  local_50 = 10;
  String::parse_latin1((StrRange *)&local_68);
  StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
  local_58 = "ResourceFormatSaver";
  local_70 = 0;
  local_50 = 0x13;
  String::parse_latin1((StrRange *)&local_70);
  StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
  ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  lVar2 = local_68;
  if (local_68 != 0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((code *)PTR__bind_methods_00125008 != RefCounted::_bind_methods) {
    ResourceFormatSaver::_bind_methods();
  }
  initialize_class()::initialized = '\x01';
LAB_001161bb:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ResourceFormatLoader::_initialize_classv() */

void ResourceFormatLoader::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized != '\0') goto LAB_001164bb;
  if (RefCounted::initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_68 = 0;
    local_50 = 6;
    local_58 = "Object";
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "RefCounted";
    local_70 = 0;
    local_50 = 10;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
    lVar2 = local_70;
    if (local_70 != 0) {
      LOCK();
      plVar1 = (long *)(local_70 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    lVar2 = local_68;
    if (local_68 == 0) {
LAB_001165ca:
      if ((code *)PTR__bind_methods_00125010 != RefCounted::_bind_methods) {
LAB_001165da:
        RefCounted::_bind_methods();
      }
    }
    else {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_001165ca;
      local_68 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      if ((code *)PTR__bind_methods_00125010 != RefCounted::_bind_methods) goto LAB_001165da;
    }
    RefCounted::initialize_class()::initialized = '\x01';
  }
  local_58 = "RefCounted";
  local_68 = 0;
  local_50 = 10;
  String::parse_latin1((StrRange *)&local_68);
  StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
  local_58 = "ResourceFormatLoader";
  local_70 = 0;
  local_50 = 0x14;
  String::parse_latin1((StrRange *)&local_70);
  StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
  ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  lVar2 = local_68;
  if (local_68 != 0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((code *)PTR__bind_methods_00125018 != RefCounted::_bind_methods) {
    ResourceFormatLoader::_bind_methods();
  }
  initialize_class()::initialized = '\x01';
LAB_001164bb:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTRS<Variant, String const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRS<Variant,String_const&>::call
                   (Object *param_1,Variant_conflict **param_2,int param_3,CallError *param_4)

{
  long *plVar1;
  Variant_conflict *pVVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  char cVar6;
  undefined4 uVar7;
  long lVar8;
  uint in_R8D;
  undefined4 *in_R9;
  Variant_conflict *pVVar9;
  long in_FS_OFFSET;
  long local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  pVVar2 = param_2[0xb];
  *(undefined4 *)param_1 = 0;
  if (in_R8D < 2) {
    pVVar9 = param_2[5];
    if (pVVar9 == (Variant_conflict *)0x0) {
      if (in_R8D != 1) goto LAB_00116808;
LAB_00116780:
      pVVar9 = *(Variant_conflict **)param_4;
    }
    else {
      lVar3 = *(long *)(pVVar9 + -8);
      if ((int)lVar3 < (int)(in_R8D ^ 1)) {
LAB_00116808:
        uVar7 = 4;
        goto LAB_00116795;
      }
      if (in_R8D == 1) goto LAB_00116780;
      lVar8 = (long)((int)lVar3 + -1);
      if (lVar3 <= lVar8) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar3,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      pVVar9 = pVVar9 + lVar8 * 0x18;
    }
    *in_R9 = 0;
    cVar6 = ::Variant::can_convert_strict(*(undefined4 *)pVVar9,4);
    uVar5 = _LC46;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar5;
    }
    ::Variant::operator_cast_to_String((Variant_conflict *)&local_50);
    (*(code *)pVVar2)(local_48);
    if (::Variant::needs_deinit[*(int *)param_1] != '\0') {
      ::Variant::_clear_internal();
    }
    lVar3 = local_50;
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
  }
  else {
    uVar7 = 3;
LAB_00116795:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* SortArray<List<Variant, DefaultAllocator>::Element*, List<Variant,
   DefaultAllocator>::AuxiliaryComparator<StringLikeVariantOrder>, true>::median_of_3(List<Variant,
   DefaultAllocator>::Element* const&, List<Variant, DefaultAllocator>::Element* const&,
   List<Variant, DefaultAllocator>::Element* const&) const [clone .isra.0] */

Element **
SortArray<List<Variant,DefaultAllocator>::Element*,List<Variant,DefaultAllocator>::AuxiliaryComparator<StringLikeVariantOrder>,true>
::median_of_3(Element **param_1,Element **param_2,Element **param_3)

{
  long *plVar1;
  int iVar2;
  Variant_conflict *pVVar3;
  long lVar4;
  char cVar5;
  Element **ppEVar6;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = *(int *)*param_1;
  if (((iVar2 == 4) || (iVar2 == 0x15)) &&
     ((iVar2 = *(int *)*param_2, iVar2 == 4 || (iVar2 == 0x15)))) {
    ::Variant::operator_cast_to_String((Variant_conflict *)&local_50);
    ::Variant::operator_cast_to_String((Variant_conflict *)&local_48);
    cVar5 = String::operator<((String *)&local_48,(String *)&local_50);
    lVar4 = local_48;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    lVar4 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
  }
  else {
    cVar5 = ::Variant::operator<((Variant_conflict *)*param_1,(Variant_conflict *)*param_2);
  }
  pVVar3 = (Variant_conflict *)*param_3;
  if (cVar5 == '\0') {
    iVar2 = *(int *)*param_1;
    if (((iVar2 == 4) || (iVar2 == 0x15)) && ((*(int *)pVVar3 == 4 || (*(int *)pVVar3 == 0x15)))) {
      ::Variant::operator_cast_to_String((Variant_conflict *)&local_50);
      ::Variant::operator_cast_to_String((Variant_conflict *)&local_48);
      cVar5 = String::operator<((String *)&local_48,(String *)&local_50);
      lVar4 = local_48;
      if (local_48 != 0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      lVar4 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar1 = (long *)(local_50 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
    }
    else {
      cVar5 = ::Variant::operator<((Variant_conflict *)*param_1,pVVar3);
    }
    ppEVar6 = param_1;
    if (cVar5 != '\0') goto LAB_0011690f;
    iVar2 = *(int *)*param_2;
    if (((iVar2 == 4) || (iVar2 == 0x15)) &&
       ((iVar2 = *(int *)*param_3, iVar2 == 4 || (iVar2 == 0x15)))) {
      ::Variant::operator_cast_to_String((Variant_conflict *)&local_50);
      ::Variant::operator_cast_to_String((Variant_conflict *)&local_48);
      cVar5 = String::operator<((String *)&local_48,(String *)&local_50);
      lVar4 = local_48;
      if (local_48 != 0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      lVar4 = local_50;
      ppEVar6 = param_2;
      if (local_50 != 0) {
        LOCK();
        plVar1 = (long *)(local_50 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
    }
    else {
      cVar5 = ::Variant::operator<((Variant_conflict *)*param_2,(Variant_conflict *)*param_3);
      ppEVar6 = param_2;
    }
  }
  else {
    iVar2 = *(int *)*param_2;
    if (((iVar2 == 4) || (iVar2 == 0x15)) && ((*(int *)pVVar3 == 4 || (*(int *)pVVar3 == 0x15)))) {
      ::Variant::operator_cast_to_String((Variant_conflict *)&local_50);
      ::Variant::operator_cast_to_String((Variant_conflict *)&local_48);
      cVar5 = String::operator<((String *)&local_48,(String *)&local_50);
      lVar4 = local_48;
      if (local_48 != 0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      lVar4 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar1 = (long *)(local_50 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
    }
    else {
      cVar5 = ::Variant::operator<((Variant_conflict *)*param_2,pVVar3);
    }
    ppEVar6 = param_2;
    if (cVar5 != '\0') goto LAB_0011690f;
    iVar2 = *(int *)*param_1;
    if (((iVar2 == 4) || (iVar2 == 0x15)) &&
       ((iVar2 = *(int *)*param_3, iVar2 == 4 || (iVar2 == 0x15)))) {
      ::Variant::operator_cast_to_String((Variant_conflict *)&local_50);
      ::Variant::operator_cast_to_String((Variant_conflict *)&local_48);
      cVar5 = String::operator<((String *)&local_48,(String *)&local_50);
      lVar4 = local_48;
      if (local_48 != 0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      lVar4 = local_50;
      ppEVar6 = param_1;
      if (local_50 != 0) {
        LOCK();
        plVar1 = (long *)(local_50 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
    }
    else {
      cVar5 = ::Variant::operator<((Variant_conflict *)*param_1,(Variant_conflict *)*param_3);
      ppEVar6 = param_1;
    }
  }
  if (cVar5 != '\0') {
    ppEVar6 = param_3;
  }
LAB_0011690f:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return ppEVar6;
}



/* SortArray<List<Variant, DefaultAllocator>::Element*, List<Variant,
   DefaultAllocator>::AuxiliaryComparator<StringLikeVariantOrder>, true>::introsort(long, long,
   List<Variant, DefaultAllocator>::Element**, long) const [clone .isra.0] */

void SortArray<List<Variant,DefaultAllocator>::Element*,List<Variant,DefaultAllocator>::AuxiliaryComparator<StringLikeVariantOrder>,true>
     ::introsort(long param_1,long param_2,Element **param_3,long param_4)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long local_118;
  long local_110;
  long local_108;
  long local_f8;
  
  lVar1 = param_2 - param_1;
  if (lVar1 < 0x11) {
    return;
  }
  if (param_4 == 0) {
LAB_001175e3:
    partial_sort(param_1,param_2,param_2,param_3);
    return;
  }
  lVar11 = param_2 * 8;
  lVar3 = param_2;
LAB_00116d33:
  param_4 = param_4 + -1;
  puVar2 = (undefined8 *)
           median_of_3(param_3 + param_1,param_3 + (lVar1 >> 1) + param_1,
                       (Element **)((long)param_3 + lVar11 + -8));
  param_2 = partitioner(param_1,lVar3,(Element *)*puVar2,param_3);
  lVar1 = lVar3 - param_2;
  if (0x10 < lVar1) {
    if (param_4 != 0) {
      lVar11 = param_4;
      lVar4 = lVar3;
LAB_00116dbc:
      do {
        lVar11 = lVar11 + -1;
        puVar2 = (undefined8 *)
                 median_of_3(param_3 + param_2,param_3 + (lVar1 >> 1) + param_2,param_3 + lVar4 + -1
                            );
        lVar3 = partitioner(param_2,lVar4,(Element *)*puVar2,param_3);
        lVar1 = lVar4 - lVar3;
        if (0x10 < lVar1) {
          if (lVar11 != 0) {
            local_118 = lVar4;
            lVar15 = lVar11;
LAB_00116e54:
            lVar15 = lVar15 + -1;
            puVar2 = (undefined8 *)
                     median_of_3(param_3 + lVar3,param_3 + (lVar1 >> 1) + lVar3,
                                 param_3 + local_118 + -1);
            lVar4 = partitioner(lVar3,local_118,(Element *)*puVar2,param_3);
            lVar1 = local_118 - lVar4;
            if (0x10 < lVar1) goto code_r0x00116ea0;
LAB_00117336:
            lVar1 = lVar4 - lVar3;
            if (0x10 < lVar1) goto LAB_00117346;
            goto LAB_001174e3;
          }
LAB_00117558:
          partial_sort(lVar3,lVar4,lVar4,param_3);
        }
LAB_0011746f:
        lVar1 = lVar3 - param_2;
        if (lVar1 < 0x11) goto joined_r0x00117521;
        lVar4 = lVar3;
        if (lVar11 == 0) break;
      } while( true );
    }
    partial_sort(param_2,lVar3,lVar3,param_3);
  }
  lVar1 = param_2 - param_1;
  if (lVar1 < 0x11) {
    return;
  }
  if (param_4 != 0) goto LAB_001175bc;
  goto LAB_001175e3;
code_r0x00116ea0:
  if (lVar15 != 0) {
    lVar13 = lVar15;
    lVar6 = local_118;
LAB_00116edc:
    do {
      lVar13 = lVar13 + -1;
      puVar2 = (undefined8 *)
               median_of_3(param_3 + lVar4,param_3 + (lVar1 >> 1) + lVar4,param_3 + lVar6 + -1);
      lVar5 = partitioner(lVar4,lVar6,(Element *)*puVar2,param_3);
      lVar1 = lVar6 - lVar5;
      if (0x10 < lVar1) {
        if (lVar13 != 0) {
          lVar7 = lVar6;
          local_f8 = lVar13;
LAB_00116f62:
          do {
            local_f8 = local_f8 + -1;
            puVar2 = (undefined8 *)
                     median_of_3(param_3 + lVar5,param_3 + (lVar1 >> 1) + lVar5,param_3 + lVar7 + -1
                                );
            lVar6 = partitioner(lVar5,lVar7,(Element *)*puVar2,param_3);
            lVar1 = lVar7 - lVar6;
            if (0x10 < lVar1) {
              if (local_f8 != 0) {
                lVar8 = lVar7;
                local_110 = local_f8;
LAB_00116fe3:
                do {
                  local_110 = local_110 + -1;
                  puVar2 = (undefined8 *)
                           median_of_3(param_3 + lVar6,param_3 + (lVar1 >> 1) + lVar6,
                                       param_3 + lVar8 + -1);
                  lVar7 = partitioner(lVar6,lVar8,(Element *)*puVar2,param_3);
                  lVar1 = lVar8 - lVar7;
                  if (0x10 < lVar1) {
                    if (local_110 != 0) {
                      lVar9 = lVar8;
                      local_118 = local_110;
LAB_00117061:
                      do {
                        local_118 = local_118 + -1;
                        puVar2 = (undefined8 *)
                                 median_of_3(param_3 + lVar7,param_3 + (lVar1 >> 1) + lVar7,
                                             param_3 + lVar9 + -1);
                        lVar8 = partitioner(lVar7,lVar9,(Element *)*puVar2,param_3);
                        lVar1 = lVar9 - lVar8;
                        if (0x10 < lVar1) {
                          if (local_118 != 0) {
                            lVar10 = lVar9;
                            local_108 = local_118;
LAB_001170d7:
                            do {
                              local_108 = local_108 + -1;
                              puVar2 = (undefined8 *)
                                       median_of_3(param_3 + lVar8,param_3 + (lVar1 >> 1) + lVar8,
                                                   param_3 + lVar10 + -1);
                              lVar9 = partitioner(lVar8,lVar10,(Element *)*puVar2,param_3);
                              lVar1 = lVar10 - lVar9;
                              if (0x10 < lVar1) {
                                if (local_108 != 0) {
                                  lVar12 = local_108;
                                  lVar14 = lVar10;
                                  do {
                                    lVar12 = lVar12 + -1;
                                    puVar2 = (undefined8 *)
                                             median_of_3(param_3 + lVar9,
                                                         param_3 + (lVar1 >> 1) + lVar9,
                                                         param_3 + lVar14 + -1);
                                    lVar10 = partitioner(lVar9,lVar14,(Element *)*puVar2,param_3);
                                    introsort(lVar10,lVar14,param_3,lVar12);
                                    lVar1 = lVar10 - lVar9;
                                    if (lVar1 < 0x11) {
                                      lVar1 = lVar9 - lVar8;
                                      lVar10 = lVar9;
                                      if (lVar1 < 0x11) goto LAB_0011726c;
                                      goto LAB_001170d7;
                                    }
                                    lVar14 = lVar10;
                                  } while (lVar12 != 0);
                                }
                                partial_sort(lVar9,lVar10,lVar10,param_3);
                              }
                              lVar1 = lVar9 - lVar8;
                              if (lVar1 < 0x11) {
                                lVar1 = lVar8 - lVar7;
                                lVar9 = lVar8;
                                if (lVar1 < 0x11) goto joined_r0x00117380;
                                goto LAB_00117061;
                              }
                              lVar10 = lVar9;
                            } while (local_108 != 0);
                          }
                          partial_sort(lVar8,lVar9,lVar9,param_3);
                        }
LAB_0011726c:
                        lVar1 = lVar8 - lVar7;
                        if (lVar1 < 0x11) {
                          lVar1 = lVar7 - lVar6;
                          lVar8 = lVar7;
                          if (lVar1 < 0x11) goto joined_r0x001172fb;
                          goto LAB_00116fe3;
                        }
                        lVar9 = lVar8;
                      } while (local_118 != 0);
                    }
                    partial_sort(lVar7,lVar8,lVar8,param_3);
                  }
joined_r0x00117380:
                  lVar1 = lVar7 - lVar6;
                  if (lVar1 < 0x11) {
                    lVar1 = lVar6 - lVar5;
                    lVar7 = lVar6;
                    if (lVar1 < 0x11) goto joined_r0x001173c0;
                    goto LAB_00116f62;
                  }
                  lVar8 = lVar7;
                } while (local_110 != 0);
              }
              partial_sort(lVar6,lVar7,lVar7,param_3);
            }
joined_r0x001172fb:
            lVar1 = lVar6 - lVar5;
            if (lVar1 < 0x11) {
              lVar1 = lVar5 - lVar4;
              lVar6 = lVar5;
              if (lVar1 < 0x11) goto LAB_00117336;
              goto LAB_00116edc;
            }
            lVar7 = lVar6;
          } while (local_f8 != 0);
        }
        partial_sort(lVar5,lVar6,lVar6,param_3);
      }
joined_r0x001173c0:
      lVar1 = lVar5 - lVar4;
      if (lVar1 < 0x11) {
        lVar1 = lVar4 - lVar3;
        local_118 = lVar4;
        if (lVar1 < 0x11) goto LAB_0011746f;
        goto LAB_00116e54;
      }
      lVar6 = lVar5;
      local_118 = lVar5;
    } while (lVar13 != 0);
  }
  partial_sort(lVar4,local_118,local_118,param_3);
  lVar1 = lVar4 - lVar3;
  if (lVar1 < 0x11) {
LAB_001174e3:
    lVar1 = lVar3 - param_2;
    lVar4 = lVar3;
    if (0x10 < lVar1) goto LAB_00116dbc;
    goto joined_r0x00117521;
  }
LAB_00117346:
  local_118 = lVar4;
  if (lVar15 == 0) goto LAB_00117558;
  goto LAB_00116e54;
joined_r0x00117521:
  lVar1 = param_2 - param_1;
  if (lVar1 < 0x11) {
    return;
  }
LAB_001175bc:
  lVar11 = param_2 * 8;
  lVar3 = param_2;
  goto LAB_00116d33;
}



/* String::parse_latin1(char const*) */

void __thiscall String::parse_latin1(String *this,char *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (char *)0x0) {
    strlen(param_1);
  }
  String::parse_latin1((StrRange *)this);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Variant::TEMPNAMEPLACEHOLDERVALUE(Variant&&) */

void __thiscall Variant::operator=(Variant_conflict *this,Variant_conflict *param_1)

{
  undefined8 uVar1;
  
  if (this != param_1) {
    if (needs_deinit[*(int *)this] != '\0') {
      ::Variant::_clear_internal();
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)this = *(undefined4 *)param_1;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(this + 0x10) = uVar1;
    *(undefined4 *)param_1 = 0;
    return;
  }
  return;
}



/* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Resource::_get_property_listv(Resource *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Resource";
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Resource";
  local_98 = 0;
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00117858:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00117858;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00117875;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00117875:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Resource",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JSON::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall JSON::_get_property_listv(JSON *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Resource::_get_property_listv((Resource *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = &_LC0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC0;
  local_98 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (undefined *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00117ca8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00117ca8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00117cc5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00117cc5:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"JSON",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Resource::_get_property_listv((Resource *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceFormatLoader::~ResourceFormatLoader() */

void __thiscall ResourceFormatLoader::~ResourceFormatLoader(ResourceFormatLoader *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = memmove;
  if (bVar1) {
    if (*(long *)(this + 0x270) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00118103;
    }
    if (*(long *)(this + 600) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00118103;
    }
    if (*(long *)(this + 0x240) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00118103;
    }
    if (*(long *)(this + 0x228) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00118103;
    }
    if (*(long *)(this + 0x210) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00118103;
    }
    if (*(long *)(this + 0x1f8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00118103;
    }
    if (*(long *)(this + 0x1e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00118103;
    }
    if (*(long *)(this + 0x1c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00118103;
    }
    if (*(long *)(this + 0x1b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00118103;
    }
    if (*(long *)(this + 0x198) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00118103;
    }
    if (*(long *)(this + 0x180) != 0) {
      StringName::unref();
    }
  }
LAB_00118103:
  *(undefined ***)this = &PTR__initialize_classv_0011f730;
  Object::~Object((Object *)this);
  return;
}



/* ResourceFormatLoaderJSON::~ResourceFormatLoaderJSON() */

void __thiscall ResourceFormatLoaderJSON::~ResourceFormatLoaderJSON(ResourceFormatLoaderJSON *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0011fa68;
  ResourceFormatLoader::~ResourceFormatLoader((ResourceFormatLoader *)this);
  return;
}



/* ResourceFormatLoaderJSON::~ResourceFormatLoaderJSON() */

void __thiscall ResourceFormatLoaderJSON::~ResourceFormatLoaderJSON(ResourceFormatLoaderJSON *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0011fa68;
  ResourceFormatLoader::~ResourceFormatLoader((ResourceFormatLoader *)this);
  operator_delete(this,0x288);
  return;
}



/* ResourceFormatLoader::~ResourceFormatLoader() */

void __thiscall ResourceFormatLoader::~ResourceFormatLoader(ResourceFormatLoader *this)

{
  ~ResourceFormatLoader(this);
  operator_delete(this,0x288);
  return;
}



/* ContainerType::~ContainerType() */

void __thiscall ContainerType::~ContainerType(ContainerType *this)

{
  Object *pOVar1;
  char cVar2;
  
  if (*(long *)(this + 0x10) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x10);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if ((StringName::configured != '\0') && (*(long *)(this + 8) != 0)) {
    StringName::unref();
    return;
  }
  return;
}



/* List<PropertyInfo, DefaultAllocator>::~List() */

void __thiscall
List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this)

{
  long *plVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)this;
  if (plVar5 == (long *)0x0) {
    return;
  }
  do {
    pvVar2 = (void *)*plVar5;
    if (pvVar2 == (void *)0x0) {
      if ((int)plVar5[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(long **)((long)pvVar2 + 0x40) == plVar5) {
      lVar4 = *(long *)((long)pvVar2 + 0x30);
      lVar3 = *(long *)((long)pvVar2 + 0x38);
      *plVar5 = lVar4;
      if (pvVar2 == (void *)plVar5[1]) {
        plVar5[1] = lVar3;
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x30) = lVar4;
        lVar4 = *(long *)((long)pvVar2 + 0x30);
      }
      if (lVar4 != 0) {
        *(long *)(lVar4 + 0x38) = lVar3;
      }
      if (*(long *)((long)pvVar2 + 0x20) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)((long)pvVar2 + 0x20) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar4 = *(long *)((long)pvVar2 + 0x20);
          *(undefined8 *)((long)pvVar2 + 0x20) = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (*(long *)((long)pvVar2 + 0x10) != 0)) {
        StringName::unref();
      }
      if (*(long *)((long)pvVar2 + 8) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)((long)pvVar2 + 8) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar4 = *(long *)((long)pvVar2 + 8);
          *(undefined8 *)((long)pvVar2 + 8) = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      Memory::free_static(pvVar2,false);
      *(int *)(plVar5 + 2) = (int)plVar5[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar5 = *(long **)this;
  } while ((int)plVar5[2] != 0);
  Memory::free_static(plVar5,false);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<void const*, HashMapHasherDefault, HashMapComparatorDefault<void const*> >::insert(void
   const* const&) */

undefined1  [16]
HashSet<void_const*,HashMapHasherDefault,HashMapComparatorDefault<void_const*>>::insert
          (void **param_1)

{
  long lVar1;
  void *pvVar2;
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
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  ulong uVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  int iVar35;
  long *in_RDX;
  long lVar36;
  ulong uVar37;
  uint uVar38;
  void *pvVar39;
  long *in_RSI;
  undefined4 uVar40;
  ulong uVar41;
  ulong uVar42;
  uint *puVar43;
  uint uVar44;
  undefined1 auVar45 [16];
  ulong uStack_98;
  long local_68;
  
  uVar29 = *(uint *)(in_RSI + 4);
  pvVar39 = (void *)*in_RSI;
  uVar28 = *(uint *)(hash_table_size_primes + (ulong)uVar29 * 4);
  if (pvVar39 == (void *)0x0) {
    uVar31 = (ulong)uVar28 * 4;
    lVar32 = Memory::alloc_static(uVar31,false);
    in_RSI[3] = lVar32;
    lVar32 = Memory::alloc_static((ulong)uVar28 * 8,false);
    *in_RSI = lVar32;
    lVar32 = Memory::alloc_static(uVar31,false);
    in_RSI[2] = lVar32;
    lVar32 = Memory::alloc_static(uVar31,false);
    in_RSI[1] = lVar32;
    if (uVar28 != 0) {
      memset((void *)in_RSI[3],0,uVar31);
    }
    lVar32 = *in_RDX;
    uVar44 = *(uint *)((long)in_RSI + 0x24);
    pvVar39 = (void *)*in_RSI;
    uVar29 = *(uint *)(in_RSI + 4);
    if (pvVar39 != (void *)0x0) goto LAB_00118531;
  }
  else {
    lVar32 = *in_RDX;
    uVar44 = *(uint *)((long)in_RSI + 0x24);
LAB_00118531:
    if (uVar44 != 0) {
      uVar37 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)uVar29 * 4));
      lVar1 = *(long *)(hash_table_size_primes_inv + (ulong)uVar29 * 8);
      uVar31 = lVar32 * 0x3ffff - 1;
      uVar31 = (uVar31 ^ uVar31 >> 0x1f) * 0x15;
      uVar31 = (uVar31 ^ uVar31 >> 0xb) * 0x41;
      uVar27 = (uint)(uVar31 >> 0x16) ^ (uint)uVar31;
      uVar38 = 1;
      if (uVar27 != 0) {
        uVar38 = uVar27;
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar38 * lVar1;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar37;
      lVar36 = SUB168(auVar3 * auVar15,8);
      iVar35 = SUB164(auVar3 * auVar15,8);
      uVar27 = *(uint *)(in_RSI[3] + lVar36 * 4);
      uVar31 = (ulong)uVar27;
      if (uVar27 != 0) {
        uVar27 = 0;
        do {
          if (uVar38 == (uint)uVar31) {
            uVar30 = *(uint *)(in_RSI[1] + lVar36 * 4);
            uStack_98 = (ulong)uVar30;
            if (*(long *)((long)pvVar39 + uStack_98 * 8) == lVar32) goto LAB_001189d9;
          }
          uVar27 = uVar27 + 1;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (ulong)(iVar35 + 1) * lVar1;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar37;
          lVar36 = SUB168(auVar4 * auVar16,8);
          uVar30 = *(uint *)(in_RSI[3] + lVar36 * 4);
          uVar31 = (ulong)uVar30;
          iVar35 = SUB164(auVar4 * auVar16,8);
        } while ((uVar30 != 0) &&
                (auVar5._8_8_ = 0, auVar5._0_8_ = uVar31 * lVar1, auVar17._8_8_ = 0,
                auVar17._0_8_ = uVar37, auVar6._8_8_ = 0,
                auVar6._0_8_ = (ulong)((*(uint *)(hash_table_size_primes + (ulong)uVar29 * 4) +
                                       iVar35) - SUB164(auVar5 * auVar17,8)) * lVar1,
                auVar18._8_8_ = 0, auVar18._0_8_ = uVar37, uVar27 <= SUB164(auVar6 * auVar18,8)));
      }
    }
  }
  if ((float)uVar28 * __LC58 < (float)(uVar44 + 1)) {
    if (uVar29 == 0x1c) {
      uStack_98 = 0;
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0);
      uVar30 = 0xffffffff;
      uVar44 = *(uint *)((long)in_RSI + 0x24);
      pvVar39 = (void *)*in_RSI;
      goto LAB_001189d9;
    }
    uVar31 = (ulong)(uVar29 + 1);
    if (uVar29 + 1 < 2) {
      uVar31 = 2;
    }
    uVar28 = *(uint *)(hash_table_size_primes + uVar31 * 4);
    *(int *)(in_RSI + 4) = (int)uVar31;
    pvVar39 = (void *)in_RSI[3];
    uVar31 = (ulong)uVar28 * 4;
    pvVar2 = (void *)in_RSI[2];
    lVar32 = Memory::alloc_static(uVar31,false);
    in_RSI[3] = lVar32;
    lVar32 = Memory::realloc_static((void *)*in_RSI,(ulong)uVar28 * 8,false);
    *in_RSI = lVar32;
    lVar32 = Memory::alloc_static(uVar31,false);
    in_RSI[2] = lVar32;
    lVar32 = Memory::realloc_static((void *)in_RSI[1],uVar31,false);
    in_RSI[1] = lVar32;
    if (uVar28 != 0) {
      memset((void *)in_RSI[3],0,uVar31);
    }
    if (*(int *)((long)in_RSI + 0x24) != 0) {
      uVar31 = 0;
      lVar1 = in_RSI[3];
      lVar36 = in_RSI[2];
      do {
        uVar41 = uVar31 & 0xffffffff;
        uVar40 = (undefined4)uVar31;
        uVar38 = 0;
        uVar28 = *(uint *)((long)pvVar39 + (ulong)*(uint *)((long)pvVar2 + uVar31 * 4) * 4);
        uVar37 = (ulong)uVar28;
        lVar33 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
        uVar29 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
        uVar42 = CONCAT44(0,uVar29);
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar37 * lVar33;
        auVar19._8_8_ = 0;
        auVar19._0_8_ = uVar42;
        lVar34 = SUB168(auVar7 * auVar19,8) * 4;
        iVar35 = SUB164(auVar7 * auVar19,8);
        puVar43 = (uint *)(lVar1 + lVar34);
        uVar44 = *puVar43;
        if (uVar44 == 0) {
          lVar33 = uVar31 * 4;
        }
        else {
          do {
            auVar8._8_8_ = 0;
            auVar8._0_8_ = (ulong)uVar44 * lVar33;
            auVar20._8_8_ = 0;
            auVar20._0_8_ = uVar42;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)((uVar29 + iVar35) - SUB164(auVar8 * auVar20,8)) * lVar33;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar42;
            uVar28 = SUB164(auVar9 * auVar21,8);
            if (uVar28 < uVar38) {
              *(int *)(lVar36 + uVar41 * 4) = iVar35;
              uVar44 = *puVar43;
              *puVar43 = (uint)uVar37;
              uVar38 = *(uint *)(lVar34 + lVar32);
              uVar37 = (ulong)uVar44;
              *(uint *)(lVar34 + lVar32) = (uint)uVar41;
              uVar41 = (ulong)uVar38;
              uVar38 = uVar28;
            }
            uVar40 = (undefined4)uVar41;
            uVar28 = (uint)uVar37;
            uVar38 = uVar38 + 1;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)(iVar35 + 1) * lVar33;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar42;
            lVar34 = SUB168(auVar10 * auVar22,8) * 4;
            iVar35 = SUB164(auVar10 * auVar22,8);
            puVar43 = (uint *)(lVar1 + lVar34);
            uVar44 = *puVar43;
          } while (uVar44 != 0);
          lVar33 = uVar41 << 2;
        }
        *puVar43 = uVar28;
        uVar31 = uVar31 + 1;
        *(int *)(lVar36 + lVar33) = iVar35;
        *(undefined4 *)(lVar32 + lVar34) = uVar40;
      } while ((uint)uVar31 < *(uint *)((long)in_RSI + 0x24));
    }
    Memory::free_static(pvVar39,false);
    Memory::free_static(pvVar2,false);
    uVar29 = *(uint *)(in_RSI + 4);
    uVar44 = *(uint *)((long)in_RSI + 0x24);
    pvVar39 = (void *)*in_RSI;
    lVar32 = *in_RDX;
  }
  uVar37 = (ulong)uVar44;
  *(long *)((long)pvVar39 + uVar37 * 8) = lVar32;
  uVar31 = lVar32 * 0x3ffff - 1;
  uVar31 = (uVar31 ^ uVar31 >> 0x1f) * 0x15;
  uVar31 = (uVar31 ^ uVar31 >> 0xb) * 0x41;
  uVar31 = uVar31 >> 0x16 ^ uVar31;
  uVar42 = uVar31 & 0xffffffff;
  if ((int)uVar31 == 0) {
    uVar42 = 1;
  }
  uVar28 = *(uint *)(hash_table_size_primes + (ulong)uVar29 * 4);
  uVar31 = CONCAT44(0,uVar28);
  uVar38 = (uint)uVar42;
  lVar1 = *(long *)(hash_table_size_primes_inv + (ulong)uVar29 * 8);
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar42 * lVar1;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar31;
  uStack_98 = SUB168(auVar11 * auVar23,8);
  lVar36 = in_RSI[3];
  lVar32 = uStack_98 * 4;
  iVar35 = SUB164(auVar11 * auVar23,8);
  puVar43 = (uint *)(lVar36 + lVar32);
  uVar29 = *puVar43;
  if (uVar29 == 0) {
    local_68 = in_RSI[2];
    lVar34 = in_RSI[1];
  }
  else {
    uVar27 = 0;
    local_68 = in_RSI[2];
    lVar34 = in_RSI[1];
    uVar41 = uVar37;
    do {
      auVar12._8_8_ = 0;
      auVar12._0_8_ = (ulong)uVar29 * lVar1;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar31;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = (ulong)((uVar28 + iVar35) - SUB164(auVar12 * auVar24,8)) * lVar1;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar31;
      uVar29 = SUB164(auVar13 * auVar25,8);
      if (uVar29 < uVar27) {
        *(int *)(local_68 + uVar37 * 4) = iVar35;
        uVar44 = *puVar43;
        *puVar43 = (uint)uVar42;
        uVar38 = *(uint *)(lVar32 + lVar34);
        uVar42 = (ulong)uVar44;
        *(uint *)(lVar32 + lVar34) = (uint)uVar41;
        uVar37 = (ulong)uVar38;
        uVar41 = uVar37;
        uVar27 = uVar29;
      }
      uVar44 = (uint)uVar41;
      uVar38 = (uint)uVar42;
      uVar27 = uVar27 + 1;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = (ulong)(iVar35 + 1) * lVar1;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar31;
      uStack_98 = SUB168(auVar14 * auVar26,8);
      lVar32 = uStack_98 * 4;
      iVar35 = SUB164(auVar14 * auVar26,8);
      puVar43 = (uint *)(lVar36 + lVar32);
      uVar29 = *puVar43;
    } while (uVar29 != 0);
  }
  *puVar43 = uVar38;
  *(int *)(local_68 + uVar37 * 4) = iVar35;
  *(uint *)(lVar34 + lVar32) = uVar44;
  uVar30 = *(uint *)((long)in_RSI + 0x24);
  pvVar39 = (void *)*in_RSI;
  uVar44 = uVar30 + 1;
  *(uint *)((long)in_RSI + 0x24) = uVar44;
LAB_001189d9:
  *(uint *)((long)param_1 + 0xc) = uVar30;
  *param_1 = pvVar39;
  *(uint *)(param_1 + 1) = uVar44;
  auVar45._8_8_ = uStack_98;
  auVar45._0_8_ = param_1;
  return auVar45;
}



/* List<Variant, DefaultAllocator>::~List() */

void __thiscall List<Variant,DefaultAllocator>::~List(List<Variant,DefaultAllocator> *this)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)this;
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  do {
    piVar1 = (int *)*puVar2;
    if (piVar1 == (int *)0x0) {
      if (*(int *)(puVar2 + 2) != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(undefined8 **)(piVar1 + 10) == puVar2) {
      *puVar2 = *(undefined8 *)(piVar1 + 6);
      if (piVar1 == (int *)puVar2[1]) {
        puVar2[1] = *(undefined8 *)(piVar1 + 8);
      }
      if (*(long *)(piVar1 + 8) != 0) {
        *(undefined8 *)(*(long *)(piVar1 + 8) + 0x18) = *(undefined8 *)(piVar1 + 6);
      }
      if (*(long *)(piVar1 + 6) != 0) {
        *(undefined8 *)(*(long *)(piVar1 + 6) + 0x20) = *(undefined8 *)(piVar1 + 8);
      }
      if (::Variant::needs_deinit[*piVar1] != '\0') {
        ::Variant::_clear_internal();
      }
      Memory::free_static(piVar1,false);
      *(int *)(puVar2 + 2) = *(int *)(puVar2 + 2) + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    puVar2 = *(undefined8 **)this;
  } while (*(int *)(puVar2 + 2) != 0);
  Memory::free_static(puVar2,false);
  return;
}



/* void List<Variant, DefaultAllocator>::sort_custom<StringLikeVariantOrder>() */

void __thiscall
List<Variant,DefaultAllocator>::sort_custom<StringLikeVariantOrder>
          (List<Variant,DefaultAllocator> *this)

{
  long *plVar1;
  size_t __n;
  int iVar2;
  int iVar3;
  Variant_conflict *pVVar4;
  char cVar5;
  Element *pEVar6;
  Element **__src;
  undefined8 *puVar7;
  Element *pEVar8;
  Element **ppEVar9;
  Element *pEVar10;
  long lVar11;
  Variant_conflict *pVVar12;
  Element **ppEVar13;
  long lVar14;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)this == 0) || (iVar2 = *(int *)(*(long *)this + 0x10), iVar2 < 2)) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    pEVar6 = (Element *)(long)iVar2;
    __src = (Element **)Memory::alloc_static((long)pEVar6 * 8,true);
    if (__src == (Element **)0x0) {
      _err_print_error("memnew_arr_template","./core/os/memory.h",0xb6,"Parameter \"mem\" is null.",
                       0,0);
    }
    else {
      __src[-1] = pEVar6;
    }
    if (*(long **)this != (long *)0x0) {
      ppEVar9 = __src;
      for (pEVar10 = (Element *)**(long **)this; pEVar10 != (Element *)0x0;
          pEVar10 = *(Element **)(pEVar10 + 0x18)) {
        *ppEVar9 = pEVar10;
        ppEVar9 = ppEVar9 + 1;
      }
    }
    lVar14 = 0;
    pEVar10 = pEVar6;
    do {
      pEVar10 = (Element *)((long)pEVar10 >> 1);
      lVar14 = lVar14 + 1;
    } while (pEVar10 != (Element *)0x1);
    lVar14 = lVar14 * 2;
    pEVar10 = pEVar6;
    if ((long)pEVar6 < 0x11) {
      pEVar10 = (Element *)0x1;
      pEVar8 = *__src;
      do {
        while( true ) {
          pVVar12 = (Variant_conflict *)__src[(long)pEVar10];
          if ((*(int *)pVVar12 == 4) || (*(int *)pVVar12 == 0x15)) {
            if ((*(int *)pEVar8 == 4) || (*(int *)pEVar8 == 0x15)) {
              ::Variant::operator_cast_to_String((Variant_conflict *)&local_48);
              ::Variant::operator_cast_to_String((Variant_conflict *)&local_50);
              cVar5 = String::operator<((String *)&local_50,(String *)&local_48);
              lVar14 = local_50;
              if (local_50 != 0) {
                LOCK();
                plVar1 = (long *)(local_50 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_50 = 0;
                  Memory::free_static((void *)(lVar14 + -0x10),false);
                }
              }
              lVar14 = local_48;
              if (local_48 != 0) {
                LOCK();
                plVar1 = (long *)(local_48 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_48 = 0;
                  Memory::free_static((void *)(lVar14 + -0x10),false);
                }
              }
            }
            else {
              cVar5 = ::Variant::operator<(pVVar12,(Variant_conflict *)pEVar8);
            }
          }
          else {
            cVar5 = ::Variant::operator<(pVVar12,(Variant_conflict *)pEVar8);
          }
          if (cVar5 == '\0') break;
          __n = (long)pEVar10 * 8;
          pEVar10 = pEVar10 + 1;
          memmove(__src + 1,__src,__n);
          *__src = (Element *)pVVar12;
          pEVar8 = (Element *)pVVar12;
          if (pEVar6 == pEVar10) goto LAB_001191dc;
        }
        ppEVar9 = __src + (long)pEVar10;
        while( true ) {
          if (((*(int *)pVVar12 == 4) || (*(int *)pVVar12 == 0x15)) &&
             ((iVar3 = *(int *)ppEVar9[-1], iVar3 == 4 || (iVar3 == 0x15)))) {
            ::Variant::operator_cast_to_String((Variant_conflict *)&local_48);
            ::Variant::operator_cast_to_String((Variant_conflict *)&local_50);
            cVar5 = String::operator<((String *)&local_50,(String *)&local_48);
            lVar14 = local_50;
            if (local_50 != 0) {
              LOCK();
              plVar1 = (long *)(local_50 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_50 = 0;
                Memory::free_static((void *)(lVar14 + -0x10),false);
              }
            }
            lVar14 = local_48;
            if (local_48 != 0) {
              LOCK();
              plVar1 = (long *)(local_48 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_48 = 0;
                Memory::free_static((void *)(lVar14 + -0x10),false);
              }
            }
          }
          else {
            cVar5 = ::Variant::operator<(pVVar12,(Variant_conflict *)ppEVar9[-1]);
          }
          if (cVar5 == '\0') goto LAB_001194fa;
          if (__src + 1 == ppEVar9) break;
          *ppEVar9 = ppEVar9[-1];
          ppEVar9 = ppEVar9 + -1;
        }
        _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                         "bad comparison function; sorting will be broken",0,0);
LAB_001194fa:
        pEVar10 = pEVar10 + 1;
        *ppEVar9 = (Element *)pVVar12;
        pVVar12 = (Variant_conflict *)*__src;
        pEVar8 = (Element *)pVVar12;
      } while (pEVar6 != pEVar10);
    }
    else {
      do {
        lVar14 = lVar14 + -1;
        puVar7 = (undefined8 *)
                 SortArray<List<Variant,DefaultAllocator>::Element*,List<Variant,DefaultAllocator>::AuxiliaryComparator<StringLikeVariantOrder>,true>
                 ::median_of_3(__src,__src + ((long)pEVar10 >> 1),__src + (long)(pEVar10 + -1));
        pEVar8 = (Element *)
                 SortArray<List<Variant,DefaultAllocator>::Element*,List<Variant,DefaultAllocator>::AuxiliaryComparator<StringLikeVariantOrder>,true>
                 ::partitioner(0,(long)pEVar10,(Element *)*puVar7,__src);
        SortArray<List<Variant,DefaultAllocator>::Element*,List<Variant,DefaultAllocator>::AuxiliaryComparator<StringLikeVariantOrder>,true>
        ::introsort((long)pEVar8,(long)pEVar10,__src,lVar14);
        if ((long)pEVar8 < 0x11) goto LAB_00118ddc;
        pEVar10 = pEVar8;
      } while (lVar14 != 0);
      SortArray<List<Variant,DefaultAllocator>::Element*,List<Variant,DefaultAllocator>::AuxiliaryComparator<StringLikeVariantOrder>,true>
      ::partial_sort(0,(long)pEVar8,(long)pEVar8,__src);
LAB_00118ddc:
      lVar14 = 1;
      do {
        while( true ) {
          lVar11 = lVar14;
          pVVar12 = (Variant_conflict *)__src[lVar11];
          pVVar4 = (Variant_conflict *)*__src;
          if ((*(int *)pVVar12 == 4) || (*(int *)pVVar12 == 0x15)) {
            if ((*(int *)pVVar4 == 4) || (*(int *)pVVar4 == 0x15)) {
              ::Variant::operator_cast_to_String((Variant_conflict *)&local_48);
              ::Variant::operator_cast_to_String((Variant_conflict *)&local_50);
              cVar5 = String::operator<((String *)&local_50,(String *)&local_48);
              lVar14 = local_50;
              if (local_50 != 0) {
                LOCK();
                plVar1 = (long *)(local_50 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_50 = 0;
                  Memory::free_static((void *)(lVar14 + -0x10),false);
                }
              }
              lVar14 = local_48;
              if (local_48 != 0) {
                LOCK();
                plVar1 = (long *)(local_48 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_48 = 0;
                  Memory::free_static((void *)(lVar14 + -0x10),false);
                }
              }
            }
            else {
              cVar5 = ::Variant::operator<(pVVar12,pVVar4);
            }
          }
          else {
            cVar5 = ::Variant::operator<(pVVar12,pVVar4);
          }
          if (cVar5 == '\0') break;
          memmove(__src + 1,__src,lVar11 * 8);
          *__src = (Element *)pVVar12;
          lVar14 = lVar11 + 1;
          if (lVar11 + 1 == 0x10) goto LAB_00118f61;
        }
        ppEVar9 = __src + lVar11;
        while( true ) {
          if (((*(int *)pVVar12 == 4) || (*(int *)pVVar12 == 0x15)) &&
             ((iVar3 = *(int *)ppEVar9[-1], iVar3 == 4 || (iVar3 == 0x15)))) {
            ::Variant::operator_cast_to_String((Variant_conflict *)&local_48);
            ::Variant::operator_cast_to_String((Variant_conflict *)&local_50);
            cVar5 = String::operator<((String *)&local_50,(String *)&local_48);
            lVar14 = local_50;
            if (local_50 != 0) {
              LOCK();
              plVar1 = (long *)(local_50 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_50 = 0;
                Memory::free_static((void *)(lVar14 + -0x10),false);
              }
            }
            lVar14 = local_48;
            if (local_48 != 0) {
              LOCK();
              plVar1 = (long *)(local_48 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_48 = 0;
                Memory::free_static((void *)(lVar14 + -0x10),false);
              }
            }
          }
          else {
            cVar5 = ::Variant::operator<(pVVar12,(Variant_conflict *)ppEVar9[-1]);
          }
          if (cVar5 == '\0') {
            *ppEVar9 = (Element *)pVVar12;
            goto LAB_00118f53;
          }
          ppEVar13 = ppEVar9 + -1;
          if (__src == ppEVar13) break;
          *ppEVar9 = *ppEVar13;
          ppEVar9 = ppEVar13;
        }
        _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                         "bad comparison function; sorting will be broken",0,0);
        *ppEVar9 = (Element *)pVVar12;
LAB_00118f53:
        lVar14 = lVar11 + 1;
      } while (lVar11 + 1 != 0x10);
LAB_00118f61:
      pEVar10 = (Element *)(lVar11 + 1);
      do {
        pVVar12 = (Variant_conflict *)__src[(long)pEVar10];
        ppEVar9 = __src + (long)pEVar10;
        pEVar8 = pEVar10;
        while( true ) {
          pEVar8 = pEVar8 + -1;
          if (((*(int *)pVVar12 == 4) || (*(int *)pVVar12 == 0x15)) &&
             ((iVar3 = *(int *)ppEVar9[-1], iVar3 == 4 || (iVar3 == 0x15)))) {
            ::Variant::operator_cast_to_String((Variant_conflict *)&local_48);
            ::Variant::operator_cast_to_String((Variant_conflict *)&local_50);
            cVar5 = String::operator<((String *)&local_50,(String *)&local_48);
            lVar14 = local_50;
            if (local_50 != 0) {
              LOCK();
              plVar1 = (long *)(local_50 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_50 = 0;
                Memory::free_static((void *)(lVar14 + -0x10),false);
              }
            }
            lVar14 = local_48;
            if (local_48 != 0) {
              LOCK();
              plVar1 = (long *)(local_48 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_48 = 0;
                Memory::free_static((void *)(lVar14 + -0x10),false);
              }
            }
          }
          else {
            cVar5 = ::Variant::operator<(pVVar12,(Variant_conflict *)ppEVar9[-1]);
          }
          if (cVar5 == '\0') goto LAB_001191b8;
          if (pEVar8 == (Element *)0x0) break;
          *ppEVar9 = ppEVar9[-1];
          ppEVar9 = ppEVar9 + -1;
        }
        _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                         "bad comparison function; sorting will be broken",0,0);
LAB_001191b8:
        *ppEVar9 = (Element *)pVVar12;
        pEVar10 = pEVar10 + 1;
      } while (pEVar6 != pEVar10);
      pVVar12 = (Variant_conflict *)*__src;
    }
LAB_001191dc:
    puVar7 = *(undefined8 **)this;
    *puVar7 = pVVar12;
    *(undefined8 *)(pVVar12 + 0x20) = 0;
    *(Element **)(*__src + 0x18) = __src[1];
    pEVar10 = __src[(long)(pEVar6 + -1)];
    puVar7[1] = pEVar10;
    *(Element **)(pEVar10 + 0x20) = __src[(long)(pEVar6 + -2)];
    *(undefined8 *)(__src[(long)(pEVar6 + -1)] + 0x18) = 0;
    if (iVar2 != 2) {
      ppEVar9 = __src;
      do {
        ppEVar13 = ppEVar9 + 1;
        *(Element **)(ppEVar9[1] + 0x20) = *ppEVar9;
        *(Element **)(*ppEVar13 + 0x18) = ppEVar9[2];
        ppEVar9 = ppEVar13;
      } while (ppEVar13 != __src + (iVar2 - 2));
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static(__src,true);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x001196b8) */
/* WARNING: Removing unreachable block (ram,0x001197e8) */
/* WARNING: Removing unreachable block (ram,0x001199b0) */
/* WARNING: Removing unreachable block (ram,0x001197f4) */
/* WARNING: Removing unreachable block (ram,0x001197fe) */
/* WARNING: Removing unreachable block (ram,0x00119990) */
/* WARNING: Removing unreachable block (ram,0x0011980a) */
/* WARNING: Removing unreachable block (ram,0x00119814) */
/* WARNING: Removing unreachable block (ram,0x00119970) */
/* WARNING: Removing unreachable block (ram,0x00119820) */
/* WARNING: Removing unreachable block (ram,0x0011982a) */
/* WARNING: Removing unreachable block (ram,0x00119950) */
/* WARNING: Removing unreachable block (ram,0x00119836) */
/* WARNING: Removing unreachable block (ram,0x00119840) */
/* WARNING: Removing unreachable block (ram,0x00119930) */
/* WARNING: Removing unreachable block (ram,0x0011984c) */
/* WARNING: Removing unreachable block (ram,0x00119856) */
/* WARNING: Removing unreachable block (ram,0x00119910) */
/* WARNING: Removing unreachable block (ram,0x00119862) */
/* WARNING: Removing unreachable block (ram,0x0011986c) */
/* WARNING: Removing unreachable block (ram,0x001198f0) */
/* WARNING: Removing unreachable block (ram,0x00119874) */
/* WARNING: Removing unreachable block (ram,0x0011988a) */
/* WARNING: Removing unreachable block (ram,0x00119896) */
/* String vformat<String>(String const&, String const) */

undefined8 * vformat<String>(undefined8 *param_1,bool *param_2,String *param_3)

{
  char cVar1;
  Variant_conflict *this;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c8 [8];
  undefined8 local_c0 [9];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant_conflict *)local_78,param_3);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c8);
  iVar2 = (int)local_c8;
  Array::resize(iVar2);
  this = (Variant_conflict *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant_conflict *)local_78);
  String::sprintf((Array *)local_c0,param_2);
  *param_1 = local_c0[0];
  Array::~Array(local_c8);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* void Ref<JSON>::instantiate<>() */

void __thiscall Ref<JSON>::instantiate<>(Ref<JSON> *this)

{
  char cVar1;
  Resource *this_00;
  long lVar2;
  Resource *pRVar3;
  Object *pOVar4;
  Object *pOVar5;
  byte bVar6;
  
  bVar6 = 0;
  this_00 = (Resource *)operator_new(0x270,"");
  pRVar3 = this_00;
  for (lVar2 = 0x4e; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined8 *)pRVar3 = 0;
    pRVar3 = pRVar3 + (ulong)bVar6 * -0x10 + 8;
  }
  Resource::Resource(this_00);
  *(undefined ***)this_00 = &PTR__initialize_classv_0011f890;
  *(undefined8 *)(this_00 + 0x240) = 0;
  *(undefined4 *)(this_00 + 0x248) = 0;
  *(undefined8 *)(this_00 + 0x260) = 0;
  *(undefined4 *)(this_00 + 0x268) = 0;
  *(undefined1 (*) [16])(this_00 + 0x250) = (undefined1  [16])0x0;
  postinitialize_handler((Object *)this_00);
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    pOVar5 = *(Object **)this;
    if (pOVar5 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
    cVar1 = RefCounted::unreference();
    if (cVar1 == '\0') {
      return;
    }
    this_00 = (Resource *)0x0;
    cVar1 = predelete_handler(pOVar5);
    if (cVar1 == '\0') {
      return;
    }
  }
  else {
    pOVar5 = *(Object **)this;
    pOVar4 = pOVar5;
    if (this_00 == (Resource *)pOVar5) goto LAB_00119ad5;
    *(Resource **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar4 = (Object *)this_00;
    if (((pOVar5 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar5), cVar1 == '\0')) goto LAB_00119ad5;
  }
  (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
  Memory::free_static(pOVar5,false);
  pOVar4 = (Object *)this_00;
  if (this_00 == (Resource *)0x0) {
    return;
  }
LAB_00119ad5:
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar4), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
    Memory::free_static(pOVar4,false);
    return;
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x00119cb0) */
/* WARNING: Removing unreachable block (ram,0x00119de0) */
/* WARNING: Removing unreachable block (ram,0x00119f59) */
/* WARNING: Removing unreachable block (ram,0x00119dec) */
/* WARNING: Removing unreachable block (ram,0x00119df6) */
/* WARNING: Removing unreachable block (ram,0x00119f3b) */
/* WARNING: Removing unreachable block (ram,0x00119e02) */
/* WARNING: Removing unreachable block (ram,0x00119e0c) */
/* WARNING: Removing unreachable block (ram,0x00119f1d) */
/* WARNING: Removing unreachable block (ram,0x00119e18) */
/* WARNING: Removing unreachable block (ram,0x00119e22) */
/* WARNING: Removing unreachable block (ram,0x00119eff) */
/* WARNING: Removing unreachable block (ram,0x00119e2e) */
/* WARNING: Removing unreachable block (ram,0x00119e38) */
/* WARNING: Removing unreachable block (ram,0x00119ee1) */
/* WARNING: Removing unreachable block (ram,0x00119e44) */
/* WARNING: Removing unreachable block (ram,0x00119e4e) */
/* WARNING: Removing unreachable block (ram,0x00119ec3) */
/* WARNING: Removing unreachable block (ram,0x00119e56) */
/* WARNING: Removing unreachable block (ram,0x00119e60) */
/* WARNING: Removing unreachable block (ram,0x00119ea8) */
/* WARNING: Removing unreachable block (ram,0x00119e68) */
/* WARNING: Removing unreachable block (ram,0x00119e7e) */
/* WARNING: Removing unreachable block (ram,0x00119e8a) */
/* String vformat<int, String>(String const&, int const, String const) */

undefined8 * vformat<int,String>(undefined8 *param_1,bool *param_2,int param_3,String *param_4)

{
  Variant_conflict *pVVar1;
  Variant_conflict *pVVar2;
  int iVar3;
  long in_FS_OFFSET;
  Array local_d8 [8];
  undefined8 local_d0 [9];
  Variant_conflict local_88 [24];
  Variant_conflict local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_88,param_3);
  Variant::Variant(local_70,param_4);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_d8);
  iVar3 = (int)local_d8;
  Array::resize(iVar3);
  pVVar2 = (Variant_conflict *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant_conflict *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((Array *)local_d0,param_2);
  *param_1 = local_d0[0];
  pVVar2 = (Variant_conflict *)local_40;
  Array::~Array(local_d8);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_88);
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x0011a0d0) */
/* WARNING: Removing unreachable block (ram,0x0011a200) */
/* WARNING: Removing unreachable block (ram,0x0011a379) */
/* WARNING: Removing unreachable block (ram,0x0011a20c) */
/* WARNING: Removing unreachable block (ram,0x0011a216) */
/* WARNING: Removing unreachable block (ram,0x0011a35b) */
/* WARNING: Removing unreachable block (ram,0x0011a222) */
/* WARNING: Removing unreachable block (ram,0x0011a22c) */
/* WARNING: Removing unreachable block (ram,0x0011a33d) */
/* WARNING: Removing unreachable block (ram,0x0011a238) */
/* WARNING: Removing unreachable block (ram,0x0011a242) */
/* WARNING: Removing unreachable block (ram,0x0011a31f) */
/* WARNING: Removing unreachable block (ram,0x0011a24e) */
/* WARNING: Removing unreachable block (ram,0x0011a258) */
/* WARNING: Removing unreachable block (ram,0x0011a301) */
/* WARNING: Removing unreachable block (ram,0x0011a264) */
/* WARNING: Removing unreachable block (ram,0x0011a26e) */
/* WARNING: Removing unreachable block (ram,0x0011a2e3) */
/* WARNING: Removing unreachable block (ram,0x0011a276) */
/* WARNING: Removing unreachable block (ram,0x0011a280) */
/* WARNING: Removing unreachable block (ram,0x0011a2c8) */
/* WARNING: Removing unreachable block (ram,0x0011a288) */
/* WARNING: Removing unreachable block (ram,0x0011a29e) */
/* WARNING: Removing unreachable block (ram,0x0011a2aa) */
/* String vformat<char const*, Variant>(String const&, char const* const, Variant const) */

undefined8 *
vformat<char_const*,Variant>
          (undefined8 *param_1,bool *param_2,char *param_3,Variant_conflict *param_4)

{
  Variant_conflict *pVVar1;
  Variant_conflict *pVVar2;
  int iVar3;
  long in_FS_OFFSET;
  Array local_d8 [8];
  undefined8 local_d0 [9];
  Variant_conflict local_88 [24];
  Variant_conflict local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_88,param_3);
  Variant::Variant(local_70,param_4);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_d8);
  iVar3 = (int)local_d8;
  Array::resize(iVar3);
  pVVar2 = (Variant_conflict *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant_conflict *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((Array *)local_d0,param_2);
  *param_1 = local_d0[0];
  pVVar2 = (Variant_conflict *)local_40;
  Array::~Array(local_d8);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_88);
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x0011a4b8) */
/* WARNING: Removing unreachable block (ram,0x0011a5e8) */
/* WARNING: Removing unreachable block (ram,0x0011a7b0) */
/* WARNING: Removing unreachable block (ram,0x0011a5f4) */
/* WARNING: Removing unreachable block (ram,0x0011a5fe) */
/* WARNING: Removing unreachable block (ram,0x0011a790) */
/* WARNING: Removing unreachable block (ram,0x0011a60a) */
/* WARNING: Removing unreachable block (ram,0x0011a614) */
/* WARNING: Removing unreachable block (ram,0x0011a770) */
/* WARNING: Removing unreachable block (ram,0x0011a620) */
/* WARNING: Removing unreachable block (ram,0x0011a62a) */
/* WARNING: Removing unreachable block (ram,0x0011a750) */
/* WARNING: Removing unreachable block (ram,0x0011a636) */
/* WARNING: Removing unreachable block (ram,0x0011a640) */
/* WARNING: Removing unreachable block (ram,0x0011a730) */
/* WARNING: Removing unreachable block (ram,0x0011a64c) */
/* WARNING: Removing unreachable block (ram,0x0011a656) */
/* WARNING: Removing unreachable block (ram,0x0011a710) */
/* WARNING: Removing unreachable block (ram,0x0011a662) */
/* WARNING: Removing unreachable block (ram,0x0011a66c) */
/* WARNING: Removing unreachable block (ram,0x0011a6f0) */
/* WARNING: Removing unreachable block (ram,0x0011a674) */
/* WARNING: Removing unreachable block (ram,0x0011a68a) */
/* WARNING: Removing unreachable block (ram,0x0011a696) */
/* String vformat<Variant>(String const&, Variant const) */

undefined8 * vformat<Variant>(undefined8 *param_1,bool *param_2,Variant_conflict *param_3)

{
  char cVar1;
  Variant_conflict *this;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c8 [8];
  undefined8 local_c0 [9];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant_conflict *)local_78,param_3);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c8);
  iVar2 = (int)local_c8;
  Array::resize(iVar2);
  this = (Variant_conflict *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant_conflict *)local_78);
  String::sprintf((Array *)local_c0,param_2);
  *param_1 = local_c0[0];
  Array::~Array(local_c8);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* CowData<char32_t>::_unref() */

void __thiscall CowData<char32_t>::_unref(CowData<char32_t> *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 != 0) {
    *(undefined8 *)this = 0;
    return;
  }
  lVar2 = *(long *)this;
  *(undefined8 *)this = 0;
  Memory::free_static((void *)(lVar2 + -0x10),false);
  return;
}



/* Ref<Script>::unref() */

void __thiscall Ref<Script>::unref(Ref<Script> *this)

{
  Object *pOVar1;
  char cVar2;
  
  if (*(long *)this != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)this;
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        *(undefined8 *)this = 0;
        return;
      }
    }
  }
  *(undefined8 *)this = 0;
  return;
}



/* MethodBind* create_method_bind<JSON, Error, String const&, bool>(Error (JSON::*)(String const&,
   bool)) */

MethodBind * create_method_bind<JSON,Error,String_const&,bool>(_func_Error_String_ptr_bool *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  undefined *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Error_String_ptr_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011fe98;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = &_LC0;
  local_30 = 4;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (undefined *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<JSON, Variant>(Variant (JSON::*)() const) */

MethodBind * create_method_bind<JSON,Variant>(_func_Variant_conflict *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  undefined *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Variant_conflict **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011fef8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = &_LC0;
  local_30 = 4;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (undefined *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<JSON, Variant const&>(void (JSON::*)(Variant const&)) */

MethodBind * create_method_bind<JSON,Variant_const&>(_func_void_Variant_ptr *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  undefined *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_Variant_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011ff58;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = &_LC0;
  local_30 = 4;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (undefined *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<JSON, String>(String (JSON::*)() const) */

MethodBind * create_method_bind<JSON,String>(_func_String *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  undefined *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_String **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011ffb8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = &_LC0;
  local_30 = 4;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (undefined *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<JSON, int>(int (JSON::*)() const) */

MethodBind * create_method_bind<JSON,int>(_func_int *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  undefined *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00120018;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = &_LC0;
  local_30 = 4;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (undefined *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JSON::_initialize_classv() */

void JSON::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (Resource::initialize_class()::initialized == '\0') {
      if (RefCounted::initialize_class()::initialized == '\0') {
        Object::initialize_class();
        local_68 = 0;
        local_50 = 6;
        local_58 = "Object";
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "RefCounted";
        local_70 = 0;
        local_50 = 10;
        String::parse_latin1((StrRange *)&local_70);
        StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
        if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
          StringName::unref();
        }
        lVar2 = local_70;
        if (local_70 != 0) {
          LOCK();
          plVar1 = (long *)(local_70 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_70 = 0;
            Memory::free_static((void *)(lVar2 + -0x10),false);
          }
        }
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        lVar2 = local_68;
        if (local_68 != 0) {
          LOCK();
          plVar1 = (long *)(local_68 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_68 = 0;
            Memory::free_static((void *)(lVar2 + -0x10),false);
          }
        }
        if ((code *)PTR__bind_methods_00125010 != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_58 = "RefCounted";
      local_68 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "Resource";
      local_70 = 0;
      local_50 = 8;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      lVar2 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar1 = (long *)(local_70 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      lVar2 = local_68;
      if (local_68 != 0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((code *)PTR__bind_methods_00125020 != RefCounted::_bind_methods) {
        Resource::_bind_methods();
      }
      Resource::initialize_class()::initialized = '\x01';
    }
    local_58 = "Resource";
    local_68 = 0;
    local_50 = 8;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "JSON";
    local_70 = 0;
    local_50 = 4;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != (undefined *)0x0)) {
      StringName::unref();
    }
    lVar2 = local_70;
    if (local_70 != 0) {
      LOCK();
      plVar1 = (long *)(local_70 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    lVar2 = local_68;
    if (local_68 != 0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<Vector3>::_unref() */

void __thiscall CowData<Vector3>::_unref(CowData<Vector3> *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 != 0) {
    *(undefined8 *)this = 0;
    return;
  }
  lVar2 = *(long *)this;
  *(undefined8 *)this = 0;
  Memory::free_static((void *)(lVar2 + -0x10),false);
  return;
}



/* CowData<Vector2>::_unref() */

void __thiscall CowData<Vector2>::_unref(CowData<Vector2> *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 != 0) {
    *(undefined8 *)this = 0;
    return;
  }
  lVar2 = *(long *)this;
  *(undefined8 *)this = 0;
  Memory::free_static((void *)(lVar2 + -0x10),false);
  return;
}



/* CowData<int>::_unref() */

void __thiscall CowData<int>::_unref(CowData<int> *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 != 0) {
    *(undefined8 *)this = 0;
    return;
  }
  lVar2 = *(long *)this;
  *(undefined8 *)this = 0;
  Memory::free_static((void *)(lVar2 + -0x10),false);
  return;
}



/* CowData<unsigned char>::_unref() */

void __thiscall CowData<unsigned_char>::_unref(CowData<unsigned_char> *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 != 0) {
    *(undefined8 *)this = 0;
    return;
  }
  lVar2 = *(long *)this;
  *(undefined8 *)this = 0;
  Memory::free_static((void *)(lVar2 + -0x10),false);
  return;
}



/* CowData<long>::_unref() */

void __thiscall CowData<long>::_unref(CowData<long> *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 != 0) {
    *(undefined8 *)this = 0;
    return;
  }
  lVar2 = *(long *)this;
  *(undefined8 *)this = 0;
  Memory::free_static((void *)(lVar2 + -0x10),false);
  return;
}



/* CowData<float>::_unref() */

void __thiscall CowData<float>::_unref(CowData<float> *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 != 0) {
    *(undefined8 *)this = 0;
    return;
  }
  lVar2 = *(long *)this;
  *(undefined8 *)this = 0;
  Memory::free_static((void *)(lVar2 + -0x10),false);
  return;
}



/* CowData<double>::_unref() */

void __thiscall CowData<double>::_unref(CowData<double> *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 != 0) {
    *(undefined8 *)this = 0;
    return;
  }
  lVar2 = *(long *)this;
  *(undefined8 *)this = 0;
  Memory::free_static((void *)(lVar2 + -0x10),false);
  return;
}



/* CowData<String>::_unref() */

void __thiscall CowData<String>::_unref(CowData<String> *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    plVar1 = *(long **)this;
    if (plVar1 != (long *)0x0) {
      lVar3 = plVar1[-1];
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        plVar6 = plVar1;
        do {
          if (*plVar6 != 0) {
            LOCK();
            plVar2 = (long *)(*plVar6 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = *plVar6;
              *plVar6 = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 1;
        } while (lVar3 != lVar7);
      }
      Memory::free_static(plVar1 + -2,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* CowData<Color>::_unref() */

void __thiscall CowData<Color>::_unref(CowData<Color> *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 != 0) {
    *(undefined8 *)this = 0;
    return;
  }
  lVar2 = *(long *)this;
  *(undefined8 *)this = 0;
  Memory::free_static((void *)(lVar2 + -0x10),false);
  return;
}



/* CowData<Vector4>::_unref() */

void __thiscall CowData<Vector4>::_unref(CowData<Vector4> *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 != 0) {
    *(undefined8 *)this = 0;
    return;
  }
  lVar2 = *(long *)this;
  *(undefined8 *)this = 0;
  Memory::free_static((void *)(lVar2 + -0x10),false);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0011b8c8) */
/* WARNING: Removing unreachable block (ram,0x0011b9f8) */
/* WARNING: Removing unreachable block (ram,0x0011bbc0) */
/* WARNING: Removing unreachable block (ram,0x0011ba04) */
/* WARNING: Removing unreachable block (ram,0x0011ba0e) */
/* WARNING: Removing unreachable block (ram,0x0011bba0) */
/* WARNING: Removing unreachable block (ram,0x0011ba1a) */
/* WARNING: Removing unreachable block (ram,0x0011ba24) */
/* WARNING: Removing unreachable block (ram,0x0011bb80) */
/* WARNING: Removing unreachable block (ram,0x0011ba30) */
/* WARNING: Removing unreachable block (ram,0x0011ba3a) */
/* WARNING: Removing unreachable block (ram,0x0011bb60) */
/* WARNING: Removing unreachable block (ram,0x0011ba46) */
/* WARNING: Removing unreachable block (ram,0x0011ba50) */
/* WARNING: Removing unreachable block (ram,0x0011bb40) */
/* WARNING: Removing unreachable block (ram,0x0011ba5c) */
/* WARNING: Removing unreachable block (ram,0x0011ba66) */
/* WARNING: Removing unreachable block (ram,0x0011bb20) */
/* WARNING: Removing unreachable block (ram,0x0011ba72) */
/* WARNING: Removing unreachable block (ram,0x0011ba7c) */
/* WARNING: Removing unreachable block (ram,0x0011bb00) */
/* WARNING: Removing unreachable block (ram,0x0011ba84) */
/* WARNING: Removing unreachable block (ram,0x0011ba9a) */
/* WARNING: Removing unreachable block (ram,0x0011baa6) */
/* String vformat<StringName>(String const&, StringName const) */

undefined8 * vformat<StringName>(undefined8 *param_1,bool *param_2,StringName *param_3)

{
  char cVar1;
  Variant_conflict *this;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c8 [8];
  undefined8 local_c0 [9];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant_conflict *)local_78,param_3);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c8);
  iVar2 = (int)local_c8;
  Array::resize(iVar2);
  this = (Variant_conflict *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant_conflict *)local_78);
  String::sprintf((Array *)local_c0,param_2);
  *param_1 = local_c0[0];
  Array::~Array(local_c8);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTRC<int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<int>::call
                   (Object *param_1,Variant_conflict **param_2,int param_3,CallError *param_4)

{
  Variant_conflict *pVVar1;
  long lVar2;
  char *pcVar3;
  int iVar4;
  long *plVar6;
  undefined4 in_register_00000014;
  long *plVar7;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant_conflict *pVVar5;
  
  plVar7 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar7 != (long *)0x0) && (plVar7[1] != 0)) && (*(char *)(plVar7[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar7[1] == 0) {
      plVar6 = (long *)plVar7[0x23];
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)(**(code **)(*plVar7 + 0x40))(plVar7);
      }
    }
    else {
      plVar6 = (long *)(plVar7[1] + 0x20);
    }
    if (local_58 == (char *)*plVar6) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC220,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar7 = (long *)(local_58 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar7 = (long *)(local_60 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011bd90;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar5 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant_conflict *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar5 & 1) != 0) {
        pVVar5 = *(Variant_conflict **)(pVVar5 + *(long *)((long)plVar7 + (long)pVVar1) + -1);
      }
      iVar4 = (*(code *)pVVar5)();
      ::Variant::Variant((Variant_conflict *)local_48,iVar4);
      if (::Variant::needs_deinit[*(int *)param_1] != '\0') {
        ::Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
    }
    else {
      *in_R9 = 4;
      in_R9[2] = 0;
    }
  }
  else {
    *in_R9 = 3;
    in_R9[2] = 0;
  }
LAB_0011bd90:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<int>::validated_call
          (MethodBindTRC<int> *this,Object *param_1,Variant_conflict **param_2,
          Variant_conflict *param_3)

{
  long lVar1;
  char *pcVar2;
  int iVar3;
  long *plVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar4;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011c084;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60));
  *(long *)(param_3 + 8) = (long)iVar3;
LAB_0011c084:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<int>::ptrcall(MethodBindTRC<int> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  int iVar3;
  long *plVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar4;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011c283;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60));
  *(long *)param_3 = (long)iVar3;
LAB_0011c283:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<String>::call
                   (Object *param_1,Variant_conflict **param_2,int param_3,CallError *param_4)

{
  Variant_conflict *pVVar1;
  long lVar2;
  char *pcVar3;
  Variant_conflict *pVVar4;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar6 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar6 != (long *)0x0) && (plVar6[1] != 0)) && (*(char *)(plVar6[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar6[1] == 0) {
      plVar5 = (long *)plVar6[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6);
      }
    }
    else {
      plVar5 = (long *)(plVar6[1] + 0x20);
    }
    if (local_58 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC220,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar6 = (long *)(local_58 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar6 = (long *)(local_60 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011c540;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar4 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant_conflict *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar4 & 1) != 0) {
        pVVar4 = *(Variant_conflict **)(pVVar4 + *(long *)((long)plVar6 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar4)((String *)&local_58);
      ::Variant::Variant((Variant_conflict *)local_48,(String *)&local_58);
      if (::Variant::needs_deinit[*(int *)param_1] != '\0') {
        ::Variant::_clear_internal();
      }
      pcVar3 = local_58;
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar6 = (long *)(local_58 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
    }
    else {
      *in_R9 = 4;
      in_R9[2] = 0;
    }
  }
  else {
    *in_R9 = 3;
    in_R9[2] = 0;
  }
LAB_0011c540:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<String>::validated_call
          (MethodBindTRC<String> *this,Object *param_1,Variant_conflict **param_2,
          Variant_conflict *param_3)

{
  Variant_conflict **ppVVar1;
  long lVar2;
  Variant_conflict **ppVVar3;
  code *pcVar4;
  long *plVar5;
  Variant_conflict **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  Variant_conflict **local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Variant_conflict **)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (Variant_conflict **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant_conflict **)0x11bbe8;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      ppVVar3 = local_48;
      if (local_48 != (Variant_conflict **)0x0) {
        LOCK();
        ppVVar1 = local_48 + -2;
        *ppVVar1 = *ppVVar1 + -1;
        UNLOCK();
        if (*ppVVar1 == (Variant_conflict *)0x0) {
          local_48 = (Variant_conflict **)0x0;
          Memory::free_static(ppVVar3 + -2,false);
        }
      }
      lVar2 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011c7f1;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant_conflict **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    param_2 = *(Variant_conflict ***)(param_1 + *(long *)(this + 0x60));
    pcVar4 = *(code **)(pcVar4 + (long)param_2 + -1);
  }
  (*pcVar4)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (*(Variant_conflict ***)(param_3 + 8) != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(param_3 + 8),(CowData *)&local_48);
  }
  ppVVar3 = local_48;
  if (local_48 != (Variant_conflict **)0x0) {
    LOCK();
    ppVVar1 = local_48 + -2;
    *ppVVar1 = *ppVVar1 + -1;
    UNLOCK();
    if (*ppVVar1 == (Variant_conflict *)0x0) {
      local_48 = (Variant_conflict **)0x0;
      Memory::free_static(ppVVar3 + -2,false);
    }
  }
LAB_0011c7f1:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<String>::ptrcall
          (MethodBindTRC<String> *this,Object *param_1,void **param_2,void *param_3)

{
  void **ppvVar1;
  long lVar2;
  void **ppvVar3;
  code *pcVar4;
  long *plVar5;
  void **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  void **local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (void **)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (void **)0x11bbe8;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      ppvVar3 = local_48;
      if (local_48 != (void **)0x0) {
        LOCK();
        ppvVar1 = local_48 + -2;
        *ppvVar1 = (void *)((long)*ppvVar1 + -1);
        UNLOCK();
        if (*ppvVar1 == (void *)0x0) {
          local_48 = (void **)0x0;
          Memory::free_static(ppvVar3 + -2,false);
        }
      }
      lVar2 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011ca1e;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar4 = *(code **)(pcVar4 + (long)param_2 + -1);
  }
  (*pcVar4)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
                    /* WARNING: Load size is inaccurate */
  if (*param_3 != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)param_3,(CowData *)&local_48);
  }
  ppvVar3 = local_48;
  if (local_48 != (void **)0x0) {
    LOCK();
    ppvVar1 = local_48 + -2;
    *ppvVar1 = (void *)((long)*ppvVar1 + -1);
    UNLOCK();
    if (*ppvVar1 == (void *)0x0) {
      local_48 = (void **)0x0;
      Memory::free_static(ppvVar3 + -2,false);
    }
  }
LAB_0011ca1e:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Variant const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Variant_const&>::validated_call
               (Object *param_1,Variant_conflict **param_2,Variant_conflict *param_3)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  code *UNRECOVERED_JUMPTABLE;
  Variant_conflict *pVVar4;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant_conflict **)0x0) && (param_2[1] != (Variant_conflict *)0x0)) &&
     (param_2[1][0x2e] != (Variant_conflict)0x0)) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant_conflict *)0x0) {
      pVVar4 = param_2[0x23];
      if (pVVar4 == (Variant_conflict *)0x0) {
        pVVar4 = (Variant_conflict *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar4 = param_2[1] + 0x20;
    }
    if (local_38 == *(char **)pVVar4) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      pcVar3 = local_38;
      if (local_38 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_38 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_38 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar1 = (long *)(local_40 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011cdd5;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011cc15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(undefined8 *)param_3);
    return;
  }
LAB_0011cdd5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Variant const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Variant_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar3;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar3 = (long *)param_2[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar3 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_38 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      pcVar2 = local_38;
      if (local_38 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_38 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_38 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar3 = (long *)(local_40 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011cff5;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011ce35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_0011cff5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Variant>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Variant>::call
                   (Object *param_1,Variant_conflict **param_2,int param_3,CallError *param_4)

{
  Variant_conflict *pVVar1;
  long lVar2;
  char *pcVar3;
  Variant_conflict *pVVar4;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar6 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar6 != (long *)0x0) && (plVar6[1] != 0)) && (*(char *)(plVar6[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar6[1] == 0) {
      plVar5 = (long *)plVar6[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6);
      }
    }
    else {
      plVar5 = (long *)(plVar6[1] + 0x20);
    }
    if (local_58 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC220,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar6 = (long *)(local_58 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar6 = (long *)(local_60 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011d0b0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar4 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant_conflict *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar4 & 1) != 0) {
        pVVar4 = *(Variant_conflict **)(pVVar4 + *(long *)((long)plVar6 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar4)(local_48);
      if (::Variant::needs_deinit[*(int *)param_1] != '\0') {
        ::Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
    }
    else {
      *in_R9 = 4;
      in_R9[2] = 0;
    }
  }
  else {
    *in_R9 = 3;
    in_R9[2] = 0;
  }
LAB_0011d0b0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Variant>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Variant>::validated_call
          (MethodBindTRC<Variant> *this,Object *param_1,Variant_conflict **param_2,
          Variant_conflict *param_3)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_38 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      pcVar2 = local_38;
      if (local_38 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_38 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_38 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar3 = (long *)(local_40 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011d4c9;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    call_with_validated_variant_args_retc_helper<__UnexistingClass,Variant>
              (param_1,*(undefined8 *)(this + 0x58),*(undefined8 *)(this + 0x60),param_3);
    return;
  }
LAB_0011d4c9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Variant>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Variant>::ptrcall
          (MethodBindTRC<Variant> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_38 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      pcVar2 = local_38;
      if (local_38 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_38 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_38 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar3 = (long *)(local_40 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011d6c9;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    call_with_validated_variant_args_retc_helper<__UnexistingClass,Variant>
              (param_1,*(undefined8 *)(this + 0x58),*(undefined8 *)(this + 0x60),param_3);
    return;
  }
LAB_0011d6c9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, String const&, bool>::validated_call(Object*, Variant const**, Variant*)
   const */

void __thiscall
MethodBindTR<Error,String_const&,bool>::validated_call
          (MethodBindTR<Error,String_const&,bool> *this,Object *param_1,Variant_conflict **param_2,
          Variant_conflict *param_3)

{
  long lVar1;
  char *pcVar2;
  uint uVar3;
  code *pcVar4;
  long *plVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011d725;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60),*param_2 + 8,param_2[1][8]);
  *(ulong *)(param_3 + 8) = (ulong)uVar3;
LAB_0011d725:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, String const&, bool>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Error,String_const&,bool>::ptrcall
          (MethodBindTR<Error,String_const&,bool> *this,Object *param_1,void **param_2,void *param_3
          )

{
  long lVar1;
  char *pcVar2;
  uint uVar3;
  code *pcVar4;
  long *plVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011d955;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  uVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60),*param_2,*param_2[1] != '\0');
  *(ulong *)param_3 = (ulong)uVar3;
LAB_0011d955:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Variant const&>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<Variant_const&>::call
                   (Object *param_1,Variant_conflict **param_2,int param_3,CallError *param_4)

{
  Variant_conflict *pVVar1;
  long lVar2;
  code *pcVar3;
  char *pcVar4;
  char cVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  undefined4 in_register_00000014;
  long *plVar9;
  uint in_R8D;
  undefined4 *in_R9;
  Variant_conflict *pVVar10;
  Variant_conflict *pVVar11;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
    }
    if (local_58 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC220,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_58,0);
      pcVar4 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar9 = (long *)(local_58 + -0x10);
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (*plVar9 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar4 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar9 = (long *)(local_60 + -0x10);
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (*plVar9 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011dcd8;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar11 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar10 = param_2[5];
    if (pVVar10 == (Variant_conflict *)0x0) {
      if (in_R8D != 1) goto LAB_0011dd30;
LAB_0011dd20:
      pVVar10 = *(Variant_conflict **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0011dd30:
        uVar6 = 4;
        goto LAB_0011dccd;
      }
      if (in_R8D == 1) goto LAB_0011dd20;
      lVar8 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar8) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar10 = pVVar10 + lVar8 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar11 & 1) != 0) {
      pVVar11 = *(Variant_conflict **)(pVVar11 + *(long *)((long)plVar9 + (long)pVVar1) + -1);
    }
    cVar5 = ::Variant::can_convert_strict(*(undefined4 *)pVVar10,0);
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = 0;
    }
    ::Variant::Variant((Variant_conflict *)local_48,pVVar10);
    (*(code *)pVVar11)((Variant_conflict *)((long)plVar9 + (long)pVVar1),
                       (Variant_conflict *)local_48);
    if (::Variant::needs_deinit[local_48[0]] != '\0') {
      ::Variant::_clear_internal();
    }
  }
  else {
    uVar6 = 3;
LAB_0011dccd:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_0011dcd8:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTR<Error, String const&, bool>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTR<Error,String_const&,bool>::call
                   (Object *param_1,Variant_conflict **param_2,int param_3,CallError *param_4)

{
  Variant_conflict *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  undefined4 uVar9;
  long *plVar10;
  long lVar11;
  Variant_conflict *pVVar12;
  undefined4 in_register_00000014;
  long *plVar13;
  Variant_conflict *pVVar14;
  int iVar15;
  uint in_R8D;
  undefined4 *in_R9;
  Variant_conflict *pVVar16;
  long in_FS_OFFSET;
  long local_78;
  long local_70;
  char *local_68;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar13 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar13 != (long *)0x0) && (plVar13[1] != 0)) && (*(char *)(plVar13[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar13[1] == 0) {
      plVar10 = (long *)plVar13[0x23];
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)(**(code **)(*plVar13 + 0x40))(plVar13);
      }
    }
    else {
      plVar10 = (long *)(plVar13[1] + 0x20);
    }
    if (local_68 == (char *)*plVar10) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC220,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0);
      pcVar5 = local_68;
      if (local_68 != (char *)0x0) {
        LOCK();
        plVar13 = (long *)(local_68 + -0x10);
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (*plVar13 == 0) {
          local_68 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      lVar2 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar13 = (long *)(local_70 + -0x10);
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (*plVar13 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0011e100;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar16 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 3) {
    pVVar12 = param_2[5];
    iVar8 = 2 - in_R8D;
    if (pVVar12 == (Variant_conflict *)0x0) {
      if (iVar8 != 0) goto LAB_0011e148;
      pVVar14 = *(Variant_conflict **)param_4;
LAB_0011e15d:
      pVVar12 = *(Variant_conflict **)(param_4 + 8);
    }
    else {
      lVar2 = *(long *)(pVVar12 + -8);
      iVar15 = (int)lVar2;
      if (iVar15 < iVar8) {
LAB_0011e148:
        uVar9 = 4;
        goto LAB_0011e135;
      }
      if (in_R8D == 0) {
        lVar11 = (long)(iVar15 + -2);
        if (lVar2 <= lVar11) goto LAB_0011e220;
        pVVar14 = pVVar12 + lVar11 * 0x18;
      }
      else {
        pVVar14 = *(Variant_conflict **)param_4;
        if (in_R8D == 2) goto LAB_0011e15d;
      }
      lVar11 = (long)(int)((in_R8D ^ 1) + (iVar15 - iVar8));
      if (lVar2 <= lVar11) {
LAB_0011e220:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar11,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar12 = pVVar12 + lVar11 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar16 & 1) != 0) {
      pVVar16 = *(Variant_conflict **)(pVVar16 + *(long *)((long)plVar13 + (long)pVVar1) + -1);
    }
    cVar6 = ::Variant::can_convert_strict(*(undefined4 *)pVVar12,1);
    uVar4 = _LC10;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    bVar7 = ::Variant::operator_cast_to_bool(pVVar12);
    cVar6 = ::Variant::can_convert_strict(*(undefined4 *)pVVar14,4);
    uVar4 = _LC46;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    ::Variant::operator_cast_to_String((Variant_conflict *)&local_68);
    iVar8 = (*(code *)pVVar16)((Variant_conflict *)((long)plVar13 + (long)pVVar1),
                               (Variant_conflict *)&local_68,bVar7);
    ::Variant::Variant((Variant_conflict *)local_58,iVar8);
    if (::Variant::needs_deinit[*(int *)param_1] != '\0') {
      ::Variant::_clear_internal();
    }
    pcVar5 = local_68;
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    if (local_68 != (char *)0x0) {
      LOCK();
      plVar13 = (long *)(local_68 + -0x10);
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (*plVar13 == 0) {
        local_68 = (char *)0x0;
        Memory::free_static(pcVar5 + -0x10,false);
      }
    }
  }
  else {
    uVar9 = 3;
LAB_0011e135:
    *in_R9 = uVar9;
    in_R9[2] = 2;
  }
LAB_0011e100:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<Variant const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<Variant_const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  long in_FS_OFFSET;
  long local_70;
  undefined8 local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar7 = *param_2;
  if (iVar7 == param_1) {
    local_70 = 0;
    local_68 = 0;
    local_40 = 0x20006;
    local_50 = 0;
    local_48 = 0;
    local_60 = (undefined1  [16])0x0;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_70);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    *(undefined4 *)param_3 = (undefined4)local_68;
    lVar2 = *(long *)(param_3 + 8);
    if (lVar2 != local_60._0_8_) {
      if (lVar2 != 0) {
        LOCK();
        plVar1 = (long *)(lVar2 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar2 = *(long *)(param_3 + 8);
          *(undefined8 *)(param_3 + 8) = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      *(undefined8 *)(param_3 + 8) = local_60._0_8_;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_60._8_8_;
      local_60 = auVar4 << 0x40;
    }
    if (*(long *)(param_3 + 0x10) != local_60._8_8_) {
      StringName::unref();
      uVar5 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8 *)(param_3 + 0x10) = uVar5;
    }
    lVar6 = local_48;
    *(undefined4 *)(param_3 + 0x18) = (undefined4)local_50;
    lVar2 = *(long *)(param_3 + 0x20);
    if (lVar2 == local_48) {
      *(undefined4 *)(param_3 + 0x28) = local_40;
      if (lVar2 != 0) {
        LOCK();
        plVar1 = (long *)(lVar2 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
    }
    else {
      if (lVar2 != 0) {
        LOCK();
        plVar1 = (long *)(lVar2 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar2 = *(long *)(param_3 + 0x20);
          *(undefined8 *)(param_3 + 0x20) = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      *(long *)(param_3 + 0x20) = local_48;
      *(undefined4 *)(param_3 + 0x28) = local_40;
    }
    if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
      StringName::unref();
    }
    uVar5 = local_60._0_8_;
    if (local_60._0_8_ != 0) {
      LOCK();
      plVar1 = (long *)(local_60._0_8_ + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        auVar3._8_8_ = 0;
        auVar3._0_8_ = local_60._8_8_;
        local_60 = auVar3 << 0x40;
        Memory::free_static((void *)(uVar5 + -0x10),false);
      }
    }
    iVar7 = *param_2;
  }
  *param_2 = iVar7 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<Variant const&>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<Variant_const&>::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  long in_FS_OFFSET;
  int local_14;
  long local_10;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  local_14 = 0;
  call_get_argument_type_info_helper<Variant_const&>(in_EDX,&local_14,pPVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<bool>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<bool>(int param_1,int *param_2,PropertyInfo *param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  long in_FS_OFFSET;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar8 = *param_2;
  if (iVar8 != param_1) goto LAB_0011e685;
  local_78 = 0;
  local_68 = &_LC2;
  local_80 = 0;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_60._8_8_;
  local_60 = auVar3 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_68 = (undefined *)CONCAT44(local_68._4_4_,1);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_0011e778:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0011e778;
    StringName::StringName((StringName *)&local_70,(String *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  lVar2 = local_80;
  if (local_80 != 0) {
    LOCK();
    plVar1 = (long *)(local_80 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_80 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)param_3 = local_68._0_4_;
  lVar2 = *(long *)(param_3 + 8);
  if (lVar2 != local_60._0_8_) {
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(param_3 + 8);
        *(undefined8 *)(param_3 + 8) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(undefined8 *)(param_3 + 8) = local_60._0_8_;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = local_60._8_8_;
    local_60 = auVar5 << 0x40;
  }
  if (*(long *)(param_3 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar6 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar6;
  }
  lVar7 = local_48;
  *(int *)(param_3 + 0x18) = local_50;
  lVar2 = *(long *)(param_3 + 0x20);
  if (lVar2 == local_48) {
    *(undefined4 *)(param_3 + 0x28) = local_40;
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
  }
  else {
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(param_3 + 0x20);
        *(undefined8 *)(param_3 + 0x20) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(long *)(param_3 + 0x20) = local_48;
    *(undefined4 *)(param_3 + 0x28) = local_40;
  }
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  uVar6 = local_60._0_8_;
  if (local_60._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_60._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_60._8_8_;
      local_60 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar6 + -0x10),false);
    }
  }
  iVar8 = *param_2;
LAB_0011e685:
  *param_2 = iVar8 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTRS<Variant, Variant const&, bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRS<Variant,Variant_const&,bool>::_gen_argument_type_info(int param_1)

{
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  int local_6c;
  long local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 2) {
    local_60 = (undefined1  [16])0x0;
    local_68 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_6c = 0;
    call_get_argument_type_info_helper<Variant_const&>(in_EDX,&local_6c,(PropertyInfo *)&local_68);
    call_get_argument_type_info_helper<bool>(in_EDX,&local_6c,(PropertyInfo *)&local_68);
    *puVar1 = (undefined4)local_68;
    *(undefined8 *)(puVar1 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar1 + 4) = local_60._8_8_;
    puVar1[6] = (undefined4)local_50;
    *(undefined8 *)(puVar1 + 8) = local_48;
    puVar1[10] = local_40;
  }
  else {
    *puVar1 = 0;
    puVar1[6] = 0;
    *(undefined8 *)(puVar1 + 8) = 0;
    puVar1[10] = 0x20006;
    *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
    local_68 = 0;
    StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_68);
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<String const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<String_const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  long in_FS_OFFSET;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar8 = *param_2;
  if (iVar8 != param_1) goto LAB_0011eaa5;
  local_78 = 0;
  local_68 = &_LC2;
  local_80 = 0;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_60._8_8_;
  local_60 = auVar3 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_68 = (undefined *)CONCAT44(local_68._4_4_,4);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_0011eb98:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0011eb98;
    StringName::StringName((StringName *)&local_70,(String *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  lVar2 = local_80;
  if (local_80 != 0) {
    LOCK();
    plVar1 = (long *)(local_80 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_80 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)param_3 = local_68._0_4_;
  lVar2 = *(long *)(param_3 + 8);
  if (lVar2 != local_60._0_8_) {
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(param_3 + 8);
        *(undefined8 *)(param_3 + 8) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(undefined8 *)(param_3 + 8) = local_60._0_8_;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = local_60._8_8_;
    local_60 = auVar5 << 0x40;
  }
  if (*(long *)(param_3 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar6 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar6;
  }
  lVar7 = local_48;
  *(int *)(param_3 + 0x18) = local_50;
  lVar2 = *(long *)(param_3 + 0x20);
  if (lVar2 == local_48) {
    *(undefined4 *)(param_3 + 0x28) = local_40;
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
  }
  else {
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(param_3 + 0x20);
        *(undefined8 *)(param_3 + 0x20) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(long *)(param_3 + 0x20) = local_48;
    *(undefined4 *)(param_3 + 0x28) = local_40;
  }
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  uVar6 = local_60._0_8_;
  if (local_60._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_60._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_60._8_8_;
      local_60 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar6 + -0x10),false);
    }
  }
  iVar8 = *param_2;
LAB_0011eaa5:
  *param_2 = iVar8 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTRS<String, Variant const&, String const&, bool, bool>::_gen_argument_type_info(int)
   const */

undefined4 *
MethodBindTRS<String,Variant_const&,String_const&,bool,bool>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  long lVar3;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 4) {
    local_60 = (undefined1  [16])0x0;
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    call_get_argument_type_info_helper<Variant_const&>
              (in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    call_get_argument_type_info_helper<String_const&>
              (in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    call_get_argument_type_info_helper<bool>(in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    call_get_argument_type_info_helper<bool>(in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar4 + 4) = local_60._8_8_;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    goto LAB_0011ee35;
  }
  local_70 = 0;
  local_68 = &_LC2;
  local_78 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  *puVar4 = 4;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_0011ef47:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
    lVar3 = local_78;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_0011ef47;
    StringName::StringName((StringName *)&local_68,(String *)(puVar4 + 8),false);
    if (*(undefined **)(puVar4 + 4) == local_68) {
      lVar3 = local_78;
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
        lVar3 = local_78;
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar4 + 4) = local_68;
      lVar3 = local_78;
    }
  }
  local_78 = lVar3;
  if (lVar3 != 0) {
    LOCK();
    plVar1 = (long *)(lVar3 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_0011ee35:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRS<Variant, String const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRS<Variant,String_const&>::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  int local_5c;
  long local_58;
  undefined1 local_50 [16];
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  long local_20;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  if (in_EDX == 0) {
    local_40 = 0;
    local_38 = 0;
    local_30 = 6;
    local_5c = 0;
    local_50 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<String_const&>(0,&local_5c,(PropertyInfo *)&local_58);
    *puVar1 = (undefined4)local_58;
    *(undefined8 *)(puVar1 + 2) = local_50._0_8_;
    *(undefined8 *)(puVar1 + 4) = local_50._8_8_;
    puVar1[6] = (undefined4)local_40;
    *(undefined8 *)(puVar1 + 8) = local_38;
    puVar1[10] = local_30;
  }
  else {
    *puVar1 = 0;
    puVar1[6] = 0;
    *(undefined8 *)(puVar1 + 8) = 0;
    puVar1[10] = 0x20006;
    *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
    StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_58);
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, String const&, bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<Error,String_const&,bool>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  code *pcVar2;
  char *pcVar3;
  long lVar4;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_90;
  long local_88;
  long local_80;
  int local_78 [2];
  long local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  local_60._8_8_ = local_60._0_8_;
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 2) {
    local_60 = (undefined1  [16])0x0;
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_78[0] = 0;
    call_get_argument_type_info_helper<String_const&>(in_EDX,local_78,(PropertyInfo *)&local_68);
    call_get_argument_type_info_helper<bool>(in_EDX,local_78,(PropertyInfo *)&local_68);
    *puVar5 = local_68._0_4_;
    *(undefined8 *)(puVar5 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar5 + 4) = local_60._8_8_;
    puVar5[6] = (undefined4)local_50;
    *(undefined8 *)(puVar5 + 8) = local_48;
    puVar5[10] = local_40;
  }
  else {
    local_90 = 0;
    local_68 = "Error";
    local_60._0_8_ = 5;
    String::parse_latin1((StrRange *)&local_90);
    String::split((char *)local_78,SUB81((StrRange *)&local_90,0),0x11f0ab);
    if ((local_70 == 0) || (*(long *)(local_70 + -8) < 3)) {
      local_80 = 0;
      local_68 = ".";
      local_60._0_8_ = 1;
      String::parse_latin1((StrRange *)&local_80);
      String::join((Vector *)&local_88);
      lVar6 = local_80;
    }
    else {
      local_80 = 0;
      local_60._0_8_ = 1;
      local_68 = ".";
      String::parse_latin1((StrRange *)&local_80);
      if (local_70 == 0) {
        lVar4 = -2;
        lVar6 = 0;
LAB_0011f3da:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar4,lVar6,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar6 = *(long *)(local_70 + -8);
      lVar4 = lVar6 + -2;
      if (lVar4 < 0) goto LAB_0011f3da;
      String::operator+((String *)&local_68,(String *)(local_70 + lVar4 * 8));
      String::operator+((String *)&local_88,(String *)&local_68);
      pcVar3 = local_68;
      lVar6 = local_80;
      if (local_68 != (undefined *)0x0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = (undefined *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
          lVar6 = local_80;
        }
      }
    }
    local_80 = lVar6;
    if (lVar6 != 0) {
      LOCK();
      plVar1 = (long *)(lVar6 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_80 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    CowData<String>::_unref((CowData<String> *)&local_70);
    StringName::StringName((StringName *)&local_68,(String *)&local_88,false);
    *puVar5 = 2;
    puVar5[6] = 0;
    *(undefined8 *)(puVar5 + 8) = 0;
    puVar5[10] = 0x10006;
    *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
    StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
    if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
      StringName::unref();
    }
    lVar6 = local_88;
    if (local_88 != 0) {
      LOCK();
      plVar1 = (long *)(local_88 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_88 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    lVar6 = local_90;
    if (local_90 != 0) {
      LOCK();
      plVar1 = (long *)(local_90 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_90 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* WARNING: Control flow encountered bad instruction data */
/* List<Variant, DefaultAllocator>::~List() */

void __thiscall List<Variant,DefaultAllocator>::~List(List<Variant,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<PropertyInfo, DefaultAllocator>::~List() */

void __thiscall
List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ContainerType::~ContainerType() */

void __thiscall ContainerType::~ContainerType(ContainerType *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ResourceFormatLoaderJSON::~ResourceFormatLoaderJSON() */

void __thiscall ResourceFormatLoaderJSON::~ResourceFormatLoaderJSON(ResourceFormatLoaderJSON *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ResourceFormatLoader::~ResourceFormatLoader() */

void __thiscall ResourceFormatLoader::~ResourceFormatLoader(ResourceFormatLoader *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JSON::~JSON() */

void __thiscall JSON::~JSON(JSON *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ResourceFormatSaverJSON::~ResourceFormatSaverJSON() */

void __thiscall ResourceFormatSaverJSON::~ResourceFormatSaverJSON(ResourceFormatSaverJSON *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRS<Variant, Variant const&, bool>::~MethodBindTRS() */

void __thiscall
MethodBindTRS<Variant,Variant_const&,bool>::~MethodBindTRS
          (MethodBindTRS<Variant,Variant_const&,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Variant const&>::~MethodBindT() */

void __thiscall MethodBindT<Variant_const&>::~MethodBindT(MethodBindT<Variant_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Variant>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Variant>::~MethodBindTRC(MethodBindTRC<Variant> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Error, String const&, bool>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,String_const&,bool>::~MethodBindTR(MethodBindTR<Error,String_const&,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRS<Variant, String const&>::~MethodBindTRS() */

void __thiscall
MethodBindTRS<Variant,String_const&>::~MethodBindTRS(MethodBindTRS<Variant,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRS<String, Variant const&, String const&, bool, bool>::~MethodBindTRS() */

void __thiscall
MethodBindTRS<String,Variant_const&,String_const&,bool,bool>::~MethodBindTRS
          (MethodBindTRS<String,Variant_const&,String_const&,bool,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


