
/* CowData<int>::_ref(CowData<int> const&) [clone .part.0] */

void __thiscall CowData<int>::_ref(CowData<int> *this,CowData *param_1)

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



/* NavMeshGenerator3D::get_singleton() */

undefined8 NavMeshGenerator3D::get_singleton(void)

{
  return singleton;
}



/* NavMeshGenerator3D::NavMeshGenerator3D() */

void __thiscall NavMeshGenerator3D::NavMeshGenerator3D(NavMeshGenerator3D *this)

{
  long in_FS_OFFSET;
  bool bVar1;
  long local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Object::Object((Object *)this);
  bVar1 = singleton == (NavMeshGenerator3D *)0x0;
  *(undefined ***)this = &PTR__initialize_classv_0010bac0;
  if (bVar1) {
    singleton = this;
    ProjectSettings::get_singleton();
    StringName::StringName
              ((StringName *)&local_50,"navigation/baking/thread_model/baking_use_multiple_threads",
               false);
    ProjectSettings::get_setting_with_override((StringName *)local_48);
    baking_use_multiple_threads = Variant::operator_cast_to_bool((Variant *)local_48);
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    ProjectSettings::get_singleton();
    StringName::StringName
              ((StringName *)&local_50,
               "navigation/baking/thread_model/baking_use_high_priority_threads",false);
    ProjectSettings::get_setting_with_override((StringName *)local_48);
    baking_use_high_priority_threads = Variant::operator_cast_to_bool((Variant *)local_48);
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    use_threads = baking_use_multiple_threads;
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    _err_print_error("NavMeshGenerator3D","modules/navigation/3d/nav_mesh_generator_3d.cpp",0x3b,
                     "Condition \"singleton != nullptr\" is true.",0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavMeshGenerator3D::is_baking(Ref<NavigationMesh>) */

undefined8 NavMeshGenerator3D::is_baking(long *param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  int iVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  undefined8 uVar17;
  
  iVar10 = pthread_mutex_lock((pthread_mutex_t *)baking_navmesh_mutex);
  if (iVar10 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar10);
  }
  uVar17 = 0;
  if ((baking_navmeshes != 0) && (DAT_00104fa4 != 0)) {
    uVar14 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)DAT_00104fa0 * 4));
    lVar1 = *(long *)(hash_table_size_primes_inv + (ulong)DAT_00104fa0 * 8);
    uVar11 = *param_1 * 0x3ffff - 1;
    uVar11 = (uVar11 ^ uVar11 >> 0x1f) * 0x15;
    uVar11 = (uVar11 ^ uVar11 >> 0xb) * 0x41;
    uVar11 = uVar11 >> 0x16 ^ uVar11;
    uVar16 = uVar11 & 0xffffffff;
    if ((int)uVar11 == 0) {
      uVar16 = 1;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar16 * lVar1;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar14;
    lVar12 = SUB168(auVar2 * auVar6,8);
    uVar13 = *(uint *)(DAT_00104f98 + lVar12 * 4);
    iVar10 = SUB164(auVar2 * auVar6,8);
    if (uVar13 != 0) {
      uVar15 = 0;
      do {
        if ((uVar13 == (uint)uVar16) &&
           (*param_1 ==
            *(long *)(baking_navmeshes + (ulong)*(uint *)(DAT_00104f88 + lVar12 * 4) * 8))) {
          uVar17 = 1;
          goto LAB_0010074d;
        }
        uVar15 = uVar15 + 1;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (ulong)(iVar10 + 1) * lVar1;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar14;
        lVar12 = SUB168(auVar3 * auVar7,8);
        uVar13 = *(uint *)(DAT_00104f98 + lVar12 * 4);
        iVar10 = SUB164(auVar3 * auVar7,8);
      } while ((uVar13 != 0) &&
              (auVar4._8_8_ = 0, auVar4._0_8_ = (ulong)uVar13 * lVar1, auVar8._8_8_ = 0,
              auVar8._0_8_ = uVar14, auVar5._8_8_ = 0,
              auVar5._0_8_ = (ulong)((*(uint *)(hash_table_size_primes + (ulong)DAT_00104fa0 * 4) +
                                     iVar10) - SUB164(auVar4 * auVar8,8)) * lVar1, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar14, uVar15 <= SUB164(auVar5 * auVar9,8)));
      uVar17 = 0;
    }
  }
LAB_0010074d:
  pthread_mutex_unlock((pthread_mutex_t *)baking_navmesh_mutex);
  return uVar17;
}



/* NavMeshGenerator3D::set_generator_parsers(LocalVector<NavMeshGeometryParser3D*, unsigned int,
   false, false>) */

void NavMeshGenerator3D::set_generator_parsers(uint *param_1)

{
  uint uVar1;
  long lVar2;
  code *pcVar3;
  void *pvVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  
  iVar6 = pthread_rwlock_wrlock((pthread_rwlock_t *)generator_parsers_rwlock);
  if (iVar6 == 0x23) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(0x23);
  }
  uVar1 = *param_1;
  uVar7 = uVar1;
  uVar5 = uVar1;
  if ((generator_parsers <= uVar1) && (uVar5 = generator_parsers, generator_parsers < uVar1)) {
    if (DAT_00104f24 < uVar1) {
      uVar7 = uVar1 - 1 | uVar1 - 1 >> 1;
      uVar7 = uVar7 | uVar7 >> 2;
      uVar7 = uVar7 | uVar7 >> 4;
      uVar7 = uVar7 | uVar7 >> 8;
      DAT_00104f24 = (uVar7 | uVar7 >> 0x10) + 1;
      DAT_00104f28 = (void *)Memory::realloc_static(DAT_00104f28,(ulong)DAT_00104f24 * 8,false);
      if (DAT_00104f28 == (void *)0x0) {
        _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
    }
    uVar7 = *param_1;
    uVar5 = uVar1;
  }
  generator_parsers = uVar5;
  pvVar4 = DAT_00104f28;
  if (uVar7 != 0) {
    lVar2 = *(long *)(param_1 + 2);
    lVar8 = 0;
    do {
      *(undefined8 *)((long)pvVar4 + lVar8) = *(undefined8 *)(lVar2 + lVar8);
      lVar8 = lVar8 + 8;
    } while (lVar8 != (ulong)uVar7 << 3);
  }
  pthread_rwlock_unlock((pthread_rwlock_t *)generator_parsers_rwlock);
  return;
}



/* NavMeshGenerator3D::generator_emit_callback(Callable const&) */

undefined4 NavMeshGenerator3D::generator_emit_callback(Callable *param_1)

{
  char cVar1;
  undefined4 uVar2;
  long in_FS_OFFSET;
  int local_38 [2];
  undefined1 local_30 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = Callable::is_valid();
  if (cVar1 == '\0') {
    _err_print_error("generator_emit_callback","modules/navigation/3d/nav_mesh_generator_3d.cpp",
                     0x22b,"Condition \"!p_callback.is_valid()\" is true. Returning: false",0,0);
    uVar2 = 0;
  }
  else {
    local_30 = (undefined1  [16])0x0;
    local_38[0] = 0;
    local_38[1] = 0;
    Callable::callp((Variant **)param_1,0,(Variant *)0x0,(CallError *)local_38);
    uVar2 = 1;
    if (Variant::needs_deinit[local_38[0]] != '\0') {
      Variant::_clear_internal();
      uVar2 = 1;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<NavigationMeshSourceGeometryData3D::ProjectedObstruction>::_copy_on_write() [clone
   .isra.0] */

void __thiscall
CowData<NavigationMeshSourceGeometryData3D::ProjectedObstruction>::_copy_on_write
          (CowData<NavigationMeshSourceGeometryData3D::ProjectedObstruction> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  bool bVar11;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar10 = 0x10;
  if (lVar2 * 0x20 != 0) {
    uVar10 = lVar2 * 0x20 - 1;
    uVar10 = uVar10 | uVar10 >> 1;
    uVar10 = uVar10 | uVar10 >> 2;
    uVar10 = uVar10 | uVar10 >> 4;
    uVar10 = uVar10 | uVar10 >> 8;
    uVar10 = uVar10 | uVar10 >> 0x10;
    uVar10 = (uVar10 | uVar10 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar10,false);
  if (puVar5 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  lVar9 = 0;
  *puVar5 = 1;
  puVar5[1] = lVar2;
  puVar7 = puVar5 + 2;
  if (lVar2 != 0) {
    do {
      lVar8 = lVar9 * 0x20 + *(long *)this;
      puVar7[1] = 0;
      plVar1 = (long *)(*(long *)(lVar8 + 8) + -0x10);
      if (*(long *)(lVar8 + 8) != 0) {
        do {
          lVar3 = *plVar1;
          if (lVar3 == 0) goto LAB_00100a80;
          LOCK();
          lVar6 = *plVar1;
          bVar11 = lVar3 == lVar6;
          if (bVar11) {
            *plVar1 = lVar3 + 1;
            lVar6 = lVar3;
          }
          UNLOCK();
        } while (!bVar11);
        if (lVar6 != -1) {
          puVar7[1] = *(undefined8 *)(lVar8 + 8);
        }
      }
LAB_00100a80:
      lVar9 = lVar9 + 1;
      puVar7[2] = *(undefined8 *)(lVar8 + 0x10);
      *(undefined1 *)(puVar7 + 3) = *(undefined1 *)(lVar8 + 0x18);
      puVar7 = puVar7 + 4;
    } while (lVar2 != lVar9);
  }
  _unref(this);
  *(undefined8 **)this = puVar5 + 2;
  return;
}



/* CowData<Vector<int> >::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Vector<int>>::_copy_on_write(CowData<Vector<int>> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  CowData<int> *this_00;
  long lVar6;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar5 = 0x10;
  if (lVar1 * 0x10 != 0) {
    uVar5 = lVar1 * 0x10 - 1;
    uVar5 = uVar5 | uVar5 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar3 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  this_00 = (CowData<int> *)(puVar3 + 3);
  lVar6 = 0;
  *puVar3 = 1;
  puVar3[1] = lVar1;
  if (lVar1 != 0) {
    do {
      lVar4 = lVar6 * 0x10 + *(long *)this;
      *(undefined8 *)this_00 = 0;
      if (*(long *)(lVar4 + 8) != 0) {
        CowData<int>::_ref(this_00,(CowData *)(lVar4 + 8));
      }
      lVar6 = lVar6 + 1;
      this_00 = this_00 + 0x10;
    } while (lVar1 != lVar6);
  }
  _unref(this);
  *(undefined8 **)this = puVar3 + 2;
  return;
}



/* Ref<NavigationMesh>::TEMPNAMEPLACEHOLDERVALUE(Ref<NavigationMesh> const&) [clone .isra.0] */

void __thiscall Ref<NavigationMesh>::operator=(Ref<NavigationMesh> *this,Ref *param_1)

{
  long *plVar1;
  Object *this_00;
  Object *pOVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  
  this_00 = *(Object **)this;
  if (this_00 != (Object *)param_1) {
    *(Ref **)this = param_1;
    if (param_1 != (Ref *)0x0) {
      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
        *(undefined8 *)this = 0;
      }
    }
    if (this_00 != (Object *)0x0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
        cVar4 = predelete_handler(this_00);
        if (cVar4 != '\0') {
          if (*(code **)(*(long *)this_00 + 0x140) == NavigationMesh::~NavigationMesh) {
            bVar5 = StringName::configured != '\0';
            *(undefined ***)this_00 = &PTR__initialize_classv_0010b8e8;
            if ((bVar5) && (*(long *)(this_00 + 0x2e8) != 0)) {
              StringName::unref();
            }
            if (*(long *)(this_00 + 0x298) != 0) {
              cVar4 = RefCounted::unreference();
              if (cVar4 != '\0') {
                pOVar2 = *(Object **)(this_00 + 0x298);
                cVar4 = predelete_handler(pOVar2);
                if (cVar4 != '\0') {
                  (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
                  Memory::free_static(pOVar2,false);
                }
              }
            }
            CowData<Vector<int>>::_unref((CowData<Vector<int>> *)(this_00 + 0x290));
            if (*(long *)(this_00 + 0x280) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)(this_00 + 0x280) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)(this_00 + 0x280);
                *(undefined8 *)(this_00 + 0x280) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            Resource::~Resource((Resource *)this_00);
          }
          else {
            (**(code **)(*(long *)this_00 + 0x140))(this_00);
          }
          Memory::free_static(this_00,false);
          return;
        }
      }
    }
  }
  return;
}



/* NavMeshGenerator3D::cleanup() */

void NavMeshGenerator3D::cleanup(void)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  Object *pOVar4;
  undefined8 *puVar5;
  Object *pOVar6;
  char cVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  bool bVar11;
  
  iVar8 = pthread_mutex_lock((pthread_mutex_t *)baking_navmesh_mutex);
  if ((iVar8 != 0) ||
     (iVar8 = pthread_mutex_lock((pthread_mutex_t *)generator_task_mutex), lVar10 = baking_navmeshes
     , iVar8 != 0)) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar8);
  }
  if ((baking_navmeshes != 0) && (DAT_00104fa4 != 0)) {
    if ((*(uint *)(hash_table_size_primes + (ulong)DAT_00104fa0 * 4) == 0) ||
       (memset(DAT_00104f98,0,(ulong)*(uint *)(hash_table_size_primes + (ulong)DAT_00104fa0 * 4) * 4
              ), DAT_00104fa4 != 0)) {
      lVar9 = 0;
      do {
        plVar2 = (long *)(lVar10 + lVar9 * 8);
        if ((*plVar2 == 0) || (cVar7 = RefCounted::unreference(), cVar7 == '\0')) {
LAB_00100e10:
          if (DAT_00104fa4 <= (int)lVar9 + 1U) break;
        }
        else {
          pOVar4 = (Object *)*plVar2;
          cVar7 = predelete_handler(pOVar4);
          if (cVar7 == '\0') goto LAB_00100e10;
          if (*(code **)(*(long *)pOVar4 + 0x140) == NavigationMesh::~NavigationMesh) {
            bVar11 = StringName::configured != '\0';
            *(undefined ***)pOVar4 = &PTR__initialize_classv_0010b8e8;
            if ((bVar11) && (*(long *)(pOVar4 + 0x2e8) != 0)) {
              StringName::unref();
            }
            if ((*(long *)(pOVar4 + 0x298) != 0) &&
               (cVar7 = RefCounted::unreference(), cVar7 != '\0')) {
              pOVar6 = *(Object **)(pOVar4 + 0x298);
              cVar7 = predelete_handler(pOVar6);
              if (cVar7 != '\0') {
                (**(code **)(*(long *)pOVar6 + 0x140))();
                Memory::free_static(pOVar6,false);
              }
            }
            CowData<Vector<int>>::_unref((CowData<Vector<int>> *)(pOVar4 + 0x290));
            if (*(long *)(pOVar4 + 0x280) != 0) {
              LOCK();
              plVar2 = (long *)(*(long *)(pOVar4 + 0x280) + -0x10);
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                lVar10 = *(long *)(pOVar4 + 0x280);
                *(undefined8 *)(pOVar4 + 0x280) = 0;
                Memory::free_static((void *)(lVar10 + -0x10),false);
              }
            }
            Resource::~Resource((Resource *)pOVar4);
          }
          else {
            (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
          }
          Memory::free_static(pOVar4,false);
          if (DAT_00104fa4 <= (int)lVar9 + 1U) break;
        }
        lVar9 = lVar9 + 1;
        lVar10 = baking_navmeshes;
      } while( true );
    }
    DAT_00104fa4 = 0;
  }
  for (puVar5 = (undefined8 *)generator_tasks._24_8_; puVar5 != (undefined8 *)0x0;
      puVar5 = (undefined8 *)*puVar5) {
    WorkerThreadPool::wait_for_task_completion(WorkerThreadPool::singleton);
    plVar2 = (long *)puVar5[3];
    Callable::~Callable((Callable *)(plVar2 + 2));
    if ((plVar2[1] != 0) && (cVar7 = RefCounted::unreference(), cVar7 != '\0')) {
      memdelete<NavigationMeshSourceGeometryData3D>((NavigationMeshSourceGeometryData3D *)plVar2[1])
      ;
    }
    if ((*plVar2 != 0) && (cVar7 = RefCounted::unreference(), cVar7 != '\0')) {
      pOVar4 = (Object *)*plVar2;
      cVar7 = predelete_handler(pOVar4);
      if (cVar7 != '\0') {
        if (*(code **)(*(long *)pOVar4 + 0x140) == NavigationMesh::~NavigationMesh) {
          bVar11 = StringName::configured != '\0';
          *(undefined ***)pOVar4 = &PTR__initialize_classv_0010b8e8;
          if ((bVar11) && (*(long *)(pOVar4 + 0x2e8) != 0)) {
            StringName::unref();
          }
          if ((*(long *)(pOVar4 + 0x298) != 0) && (cVar7 = RefCounted::unreference(), cVar7 != '\0')
             ) {
            pOVar6 = *(Object **)(pOVar4 + 0x298);
            cVar7 = predelete_handler(pOVar6);
            if (cVar7 != '\0') {
              (**(code **)(*(long *)pOVar6 + 0x140))();
              Memory::free_static(pOVar6,false);
            }
          }
          CowData<Vector<int>>::_unref((CowData<Vector<int>> *)(pOVar4 + 0x290));
          if (*(long *)(pOVar4 + 0x280) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(pOVar4 + 0x280) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar10 = *(long *)(pOVar4 + 0x280);
              *(undefined8 *)(pOVar4 + 0x280) = 0;
              Memory::free_static((void *)(lVar10 + -0x10),false);
            }
          }
          Resource::~Resource((Resource *)pOVar4);
        }
        else {
          (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        }
        Memory::free_static(pOVar4,false);
      }
    }
    Memory::free_static(plVar2,false);
  }
  if ((generator_tasks._8_8_ != 0) && (generator_tasks._44_4_ != 0)) {
    lVar10 = 0;
    uVar3 = *(uint *)(hash_table_size_primes + (ulong)(uint)generator_tasks._40_4_ * 4);
    if (uVar3 != 0) {
      do {
        if (*(int *)(generator_tasks._16_8_ + lVar10) != 0) {
          *(int *)(generator_tasks._16_8_ + lVar10) = 0;
          Memory::free_static(*(void **)(generator_tasks._8_8_ + lVar10 * 2),false);
          *(undefined8 *)(generator_tasks._8_8_ + lVar10 * 2) = 0;
        }
        lVar10 = lVar10 + 4;
      } while (lVar10 != (ulong)uVar3 << 2);
    }
    generator_tasks._44_4_ = 0;
    generator_tasks._24_16_ = (undefined1  [16])0x0;
  }
  iVar8 = pthread_rwlock_wrlock((pthread_rwlock_t *)generator_parsers_rwlock);
  if (iVar8 != 0x23) {
    if (generator_parsers != 0) {
      generator_parsers = 0;
    }
    pthread_rwlock_unlock((pthread_rwlock_t *)generator_parsers_rwlock);
    pthread_mutex_unlock((pthread_mutex_t *)generator_task_mutex);
    pthread_mutex_unlock((pthread_mutex_t *)baking_navmesh_mutex);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(0x23);
}



/* NavMeshGenerator3D::~NavMeshGenerator3D() */

void __thiscall NavMeshGenerator3D::~NavMeshGenerator3D(NavMeshGenerator3D *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010bac0;
  cleanup();
  Object::~Object((Object *)this);
  return;
}



/* NavMeshGenerator3D::~NavMeshGenerator3D() */

void __thiscall NavMeshGenerator3D::~NavMeshGenerator3D(NavMeshGenerator3D *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010bac0;
  cleanup();
  Object::~Object((Object *)this);
  operator_delete(this,0x178);
  return;
}



/* NavMeshGenerator3D::finish() */

void NavMeshGenerator3D::finish(void)

{
  cleanup();
  return;
}



/* NavMeshGenerator3D::generator_parse_geometry_node(Ref<NavigationMesh> const&,
   Ref<NavigationMeshSourceGeometryData3D>, Node*, bool) */

void NavMeshGenerator3D::generator_parse_geometry_node
               (long *param_1,long *param_2,Object *param_3,char param_4)

{
  Variant *pVVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  Object *pOVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  Variant *pVVar10;
  NavigationMeshSourceGeometryData3D *pNVar11;
  long *plVar12;
  Object *this;
  long in_FS_OFFSET;
  bool bVar13;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  int local_e8 [2];
  undefined1 local_e0 [16];
  Variant *local_c8;
  Variant *pVStack_c0;
  Variant *local_b8;
  Variant local_a8 [24];
  Variant local_90 [24];
  Variant local_78 [24];
  Variant local_60 [24];
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    iVar7 = pthread_rwlock_rdlock((pthread_rwlock_t *)generator_parsers_rwlock);
  } while (iVar7 == 0xb);
  if (iVar7 == 0x23) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(0x23);
  }
  plVar3 = DAT_00104f28 + generator_parsers;
  for (plVar12 = DAT_00104f28; plVar3 != plVar12; plVar12 = plVar12 + 1) {
    lVar4 = *plVar12;
    cVar6 = Callable::is_valid();
    if (cVar6 != '\0') {
      pNVar11 = (NavigationMeshSourceGeometryData3D *)*param_2;
      if ((pNVar11 != (NavigationMeshSourceGeometryData3D *)0x0) &&
         (cVar6 = RefCounted::reference(), cVar6 == '\0')) {
        pNVar11 = (NavigationMeshSourceGeometryData3D *)0x0;
      }
      this = (Object *)*param_1;
      if ((this != (Object *)0x0) && (cVar6 = RefCounted::reference(), cVar6 == '\0')) {
        this = (Object *)0x0;
      }
      Variant::Variant(local_a8,this);
      Variant::Variant(local_90,(Object *)pNVar11);
      Variant::Variant(local_78,param_3);
      Variant::Variant(local_60,0);
      pVVar10 = local_48;
      local_e8[0] = 0;
      local_f8 = 0;
      uStack_f4 = 0;
      uStack_f0 = 0;
      local_e0 = (undefined1  [16])0x0;
      local_c8 = local_a8;
      pVStack_c0 = local_90;
      local_b8 = local_78;
      Callable::callp((Variant **)(lVar4 + 8),(int)&local_c8,(Variant *)0x3,(CallError *)local_e8);
      do {
        pVVar1 = pVVar10 + -0x18;
        pVVar10 = pVVar10 + -0x18;
        if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
          Variant::_clear_internal();
        }
      } while (pVVar10 != local_a8);
      if (Variant::needs_deinit[local_e8[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (((this != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
         (cVar6 = predelete_handler(this), cVar6 != '\0')) {
        if (*(code **)(*(long *)this + 0x140) == NavigationMesh::~NavigationMesh) {
          bVar13 = StringName::configured != '\0';
          *(undefined ***)this = &PTR__initialize_classv_0010b8e8;
          if ((bVar13) && (*(long *)(this + 0x2e8) != 0)) {
            StringName::unref();
          }
          if ((*(long *)(this + 0x298) != 0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0'))
          {
            pOVar5 = *(Object **)(this + 0x298);
            cVar6 = predelete_handler(pOVar5);
            if (cVar6 != '\0') {
              (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
              Memory::free_static(pOVar5,false);
            }
          }
          CowData<Vector<int>>::_unref((CowData<Vector<int>> *)(this + 0x290));
          if (*(long *)(this + 0x280) != 0) {
            LOCK();
            plVar2 = (long *)(*(long *)(this + 0x280) + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = *(long *)(this + 0x280);
              *(undefined8 *)(this + 0x280) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          Resource::~Resource((Resource *)this);
        }
        else {
          (**(code **)(*(long *)this + 0x140))(this);
        }
        Memory::free_static(this,false);
      }
      if ((pNVar11 != (NavigationMeshSourceGeometryData3D *)0x0) &&
         (cVar6 = RefCounted::unreference(), cVar6 != '\0')) {
        memdelete<NavigationMeshSourceGeometryData3D>(pNVar11);
      }
    }
  }
  pthread_rwlock_unlock((pthread_rwlock_t *)generator_parsers_rwlock);
  if (param_4 != '\0') {
    for (iVar7 = 0; iVar8 = Node::get_child_count(SUB81(param_3,0)), iVar7 < iVar8;
        iVar7 = iVar7 + 1) {
      uVar9 = Node::get_child((int)param_3,SUB41(iVar7,0));
      pNVar11 = (NavigationMeshSourceGeometryData3D *)*param_2;
      if (pNVar11 == (NavigationMeshSourceGeometryData3D *)0x0) {
LAB_001014ea:
        uStack_f4 = 0;
        local_f8 = 0;
        generator_parse_geometry_node(param_1,&local_f8,uVar9,1);
      }
      else {
        local_f8 = SUB84(pNVar11,0);
        uStack_f4 = (undefined4)((ulong)pNVar11 >> 0x20);
        cVar6 = RefCounted::reference();
        if (cVar6 == '\0') goto LAB_001014ea;
        generator_parse_geometry_node(param_1,&local_f8,uVar9,1);
        cVar6 = RefCounted::unreference();
        if (cVar6 != '\0') {
          memdelete<NavigationMeshSourceGeometryData3D>(pNVar11);
        }
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavMeshGenerator3D::generator_parse_source_geometry_data(Ref<NavigationMesh> const&,
   Ref<NavigationMeshSourceGeometryData3D>, Node*) */

void NavMeshGenerator3D::generator_parse_source_geometry_data
               (undefined8 param_1,long *param_2,long param_3)

{
  StringName *pSVar1;
  NavigationMeshSourceGeometryData3D *pNVar2;
  undefined8 uVar3;
  void *pvVar4;
  long lVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long in_FS_OFFSET;
  undefined1 auVar11 [16];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 (*local_b8) [16];
  NavigationMeshSourceGeometryData3D *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  uint local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b8 = (undefined1 (*) [16])0x0;
  iVar7 = NavigationMesh::get_source_geometry_mode();
  if (iVar7 == 0) {
    local_b8 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined4 *)local_b8[1] = 0;
    *local_b8 = (undefined1  [16])0x0;
    plVar9 = (long *)operator_new(0x20,DefaultAllocator::alloc);
    plVar9[1] = 0;
    lVar8 = *(long *)(*local_b8 + 8);
    *plVar9 = param_3;
    plVar9[3] = (long)local_b8;
    plVar9[2] = lVar8;
    if (lVar8 != 0) {
      *(long **)(lVar8 + 8) = plVar9;
    }
    lVar8 = *(long *)*local_b8;
    *(long **)(*local_b8 + 8) = plVar9;
    if (lVar8 == 0) {
      *(long **)*local_b8 = plVar9;
    }
    *(int *)local_b8[1] = *(int *)local_b8[1] + 1;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_7c = 0;
    if (param_3 != 0) goto LAB_00101765;
  }
  else {
    pSVar1 = *(StringName **)(param_3 + 0x240);
    if (pSVar1 == (StringName *)0x0) {
      _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0,0
                      );
    }
    NavigationMesh::get_source_group_name();
    SceneTree::get_nodes_in_group(pSVar1,(List *)&local_b0);
    if ((StringName::configured != '\0') && (local_b0 != (NavigationMeshSourceGeometryData3D *)0x0))
    {
      StringName::unref();
    }
LAB_00101765:
    uStack_80 = 0;
    uStack_84 = 0;
    uStack_7c = 0;
    lVar8 = __dynamic_cast(param_3,&Object::typeinfo,&Node3D::typeinfo,0);
    if (lVar8 != 0) {
      Node3D::get_global_transform();
      Transform3D::affine_inverse();
      auVar11._8_8_ = uStack_90;
      auVar11._0_8_ = local_98;
      goto LAB_001017b1;
    }
  }
  auVar11 = ZEXT416(_LC39);
  local_a8._4_4_ = 0;
  uStack_a0._0_4_ = 0;
  uStack_a0._4_4_ = 0;
  local_a8._0_4_ = _LC39;
  local_88 = _LC39;
LAB_001017b1:
  NavigationMeshSourceGeometryData3D::clear();
  lVar8 = *param_2;
  local_d8 = auVar11._0_8_;
  uStack_d0 = auVar11._8_8_;
  *(undefined8 *)(lVar8 + 0x2c8) = local_a8;
  *(undefined8 *)(lVar8 + 0x2d0) = uStack_a0;
  *(undefined8 *)(lVar8 + 0x2d8) = local_d8;
  *(undefined8 *)(lVar8 + 0x2e0) = uStack_d0;
  *(ulong *)(lVar8 + 0x2e8) = CONCAT44(uStack_84,local_88);
  *(ulong *)(lVar8 + 0x2f0) = CONCAT44(uStack_7c,uStack_80);
  local_98 = local_d8;
  uStack_90 = uStack_d0;
  iVar7 = NavigationMesh::get_source_geometry_mode();
  if (local_b8 != (undefined1 (*) [16])0x0) {
    puVar10 = *(undefined8 **)*local_b8;
    if (puVar10 != (undefined8 *)0x0) {
      do {
        while( true ) {
          pNVar2 = (NavigationMeshSourceGeometryData3D *)*param_2;
          uVar3 = *puVar10;
          if ((pNVar2 != (NavigationMeshSourceGeometryData3D *)0x0) &&
             (local_b0 = pNVar2, cVar6 = RefCounted::reference(), cVar6 != '\0')) break;
          local_b0 = (NavigationMeshSourceGeometryData3D *)0x0;
          generator_parse_geometry_node(param_1,&local_b0,uVar3,iVar7 != 2);
LAB_00101852:
          puVar10 = (undefined8 *)puVar10[1];
          if (puVar10 == (undefined8 *)0x0) goto LAB_001018b5;
        }
        generator_parse_geometry_node(param_1,&local_b0,uVar3,iVar7 != 2);
        cVar6 = RefCounted::unreference();
        if (cVar6 == '\0') goto LAB_00101852;
        memdelete<NavigationMeshSourceGeometryData3D>(pNVar2);
        puVar10 = (undefined8 *)puVar10[1];
      } while (puVar10 != (undefined8 *)0x0);
    }
LAB_001018b5:
    if (local_b8 != (undefined1 (*) [16])0x0) {
      do {
        pvVar4 = *(void **)*local_b8;
        if (pvVar4 == (void *)0x0) {
          if (*(int *)local_b8[1] != 0) {
            _err_print_error("~List","./core/templates/list.h",0x316,
                             "Condition \"_data->size_cache\" is true.",0,0);
            goto LAB_0010191c;
          }
          break;
        }
        if (local_b8 == *(undefined1 (**) [16])((long)pvVar4 + 0x18)) {
          lVar8 = *(long *)((long)pvVar4 + 8);
          lVar5 = *(long *)((long)pvVar4 + 0x10);
          *(long *)*local_b8 = lVar8;
          if (pvVar4 == *(void **)(*local_b8 + 8)) {
            *(long *)(*local_b8 + 8) = lVar5;
          }
          if (lVar5 != 0) {
            *(long *)(lVar5 + 8) = lVar8;
            lVar8 = *(long *)((long)pvVar4 + 8);
          }
          if (lVar8 != 0) {
            *(long *)(lVar8 + 0x10) = lVar5;
          }
          Memory::free_static(pvVar4,false);
          *(int *)local_b8[1] = *(int *)local_b8[1] + -1;
        }
        else {
          _err_print_error("erase","./core/templates/list.h",0xe7,
                           "Condition \"p_I->data != this\" is true. Returning: false",0,0);
        }
      } while (*(int *)local_b8[1] != 0);
      Memory::free_static(local_b8,false);
    }
  }
LAB_0010191c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavMeshGenerator3D::parse_source_geometry_data(Ref<NavigationMesh>,
   Ref<NavigationMeshSourceGeometryData3D>, Node*, Callable const&) */

void NavMeshGenerator3D::parse_source_geometry_data
               (long *param_1,undefined8 *param_2,long param_3,Callable *param_4)

{
  NavigationMeshSourceGeometryData3D *pNVar1;
  char cVar2;
  char *pcVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  NavigationMeshSourceGeometryData3D *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
    Thread::caller_id();
  }
  if (*(long *)(in_FS_OFFSET + lRam0000000000101ae0) == 1) {
    if (*param_1 == 0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar4 = 0x85;
        pcVar3 = "Condition \"p_navigation_mesh.is_null()\" is true.";
        goto LAB_00101bf6;
      }
    }
    else if (param_3 == 0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar4 = 0x86;
        pcVar3 = "Parameter \"p_root_node\" is null.";
        goto LAB_00101bf6;
      }
    }
    else if ((*(byte *)(param_3 + 0x2fa) & 0x40) == 0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar4 = 0x87;
        pcVar3 = "Condition \"!p_root_node->is_inside_tree()\" is true.";
        goto LAB_00101bf6;
      }
    }
    else {
      pNVar1 = (NavigationMeshSourceGeometryData3D *)*param_2;
      if (pNVar1 == (NavigationMeshSourceGeometryData3D *)0x0) {
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar4 = 0x88;
          pcVar3 = "Condition \"p_source_geometry_data.is_null()\" is true.";
          goto LAB_00101bf6;
        }
      }
      else {
        local_38 = pNVar1;
        cVar2 = RefCounted::reference();
        if (cVar2 == '\0') {
          local_38 = (NavigationMeshSourceGeometryData3D *)0x0;
          generator_parse_source_geometry_data(param_1,&local_38,param_3);
          cVar2 = Callable::is_valid();
        }
        else {
          generator_parse_source_geometry_data(param_1,&local_38,param_3);
          cVar2 = RefCounted::unreference();
          if (cVar2 != '\0') {
            memdelete<NavigationMeshSourceGeometryData3D>(pNVar1);
          }
          cVar2 = Callable::is_valid();
        }
        if (cVar2 == '\0') {
          if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
            return;
          }
        }
        else if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          generator_emit_callback(param_4);
          return;
        }
      }
    }
  }
  else if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    uVar4 = 0x84;
    pcVar3 = "Condition \"!Thread::is_main_thread()\" is true.";
LAB_00101bf6:
    _err_print_error("parse_source_geometry_data","modules/navigation/3d/nav_mesh_generator_3d.cpp",
                     uVar4,pcVar3,0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HashSet<Ref<NavigationMesh>, HashMapHasherDefault, HashMapComparatorDefault<Ref<NavigationMesh> >
   >::erase(Ref<NavigationMesh> const&) [clone .isra.0] */

void __thiscall
HashSet<Ref<NavigationMesh>,HashMapHasherDefault,HashMapComparatorDefault<Ref<NavigationMesh>>>::
erase(HashSet<Ref<NavigationMesh>,HashMapHasherDefault,HashMapComparatorDefault<Ref<NavigationMesh>>>
      *this,Ref *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  Ref<NavigationMesh> *this_00;
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
  char cVar30;
  uint uVar31;
  ulong uVar32;
  uint uVar33;
  uint *puVar34;
  int iVar35;
  uint uVar36;
  long lVar37;
  ulong uVar38;
  uint *puVar39;
  long *plVar40;
  ulong uVar41;
  uint *puVar42;
  ulong uVar43;
  ulong uVar44;
  uint uVar45;
  
  lVar5 = *(long *)this;
  if ((lVar5 != 0) && (*(int *)(this + 0x24) != 0)) {
    lVar6 = *(long *)(this + 0x18);
    uVar31 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x20) * 4);
    uVar43 = CONCAT44(0,uVar31);
    lVar7 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x20) * 8);
    uVar32 = *(long *)param_1 * 0x3ffff - 1;
    uVar32 = (uVar32 ^ uVar32 >> 0x1f) * 0x15;
    uVar32 = (uVar32 ^ uVar32 >> 0xb) * 0x41;
    uVar32 = uVar32 >> 0x16 ^ uVar32;
    uVar41 = uVar32 & 0xffffffff;
    if ((int)uVar32 == 0) {
      uVar41 = 1;
    }
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar41 * lVar7;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar43;
    lVar37 = SUB168(auVar10 * auVar20,8);
    uVar45 = *(uint *)(lVar6 + lVar37 * 4);
    iVar35 = SUB164(auVar10 * auVar20,8);
    if (uVar45 != 0) {
      uVar33 = 0;
      do {
        if ((uint)uVar41 == uVar45) {
          lVar8 = *(long *)(this + 8);
          uVar45 = *(uint *)(lVar8 + lVar37 * 4);
          uVar32 = (ulong)uVar45;
          if (*(long *)param_1 == *(long *)(lVar5 + uVar32 * 8)) {
            lVar9 = *(long *)(this + 0x10);
            uVar33 = *(uint *)(lVar9 + uVar32 * 4);
            uVar41 = (ulong)uVar33;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = (ulong)(uVar33 + 1) * lVar7;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar43;
            lVar37 = SUB168(auVar14 * auVar24,8) * 4;
            uVar36 = SUB164(auVar14 * auVar24,8);
            uVar44 = (ulong)uVar36;
            puVar39 = (uint *)(lVar6 + lVar37);
            if ((*puVar39 == 0) ||
               (auVar15._8_8_ = 0, auVar15._0_8_ = (ulong)*puVar39 * lVar7, auVar25._8_8_ = 0,
               auVar25._0_8_ = uVar43, auVar16._8_8_ = 0,
               auVar16._0_8_ = (ulong)((uVar36 + uVar31) - SUB164(auVar15 * auVar25,8)) * lVar7,
               auVar26._8_8_ = 0, auVar26._0_8_ = uVar43, SUB164(auVar16 * auVar26,8) == 0)) {
              uVar44 = (ulong)uVar33;
            }
            else {
              while( true ) {
                puVar34 = (uint *)(lVar37 + lVar8);
                puVar3 = (uint *)(lVar8 + uVar41 * 4);
                puVar42 = (uint *)(uVar41 * 4 + lVar6);
                puVar1 = (undefined4 *)(lVar9 + (ulong)*puVar34 * 4);
                puVar2 = (undefined4 *)(lVar9 + (ulong)*puVar3 * 4);
                uVar4 = *puVar2;
                *puVar2 = *puVar1;
                *puVar1 = uVar4;
                uVar33 = *puVar39;
                *puVar39 = *puVar42;
                *puVar42 = uVar33;
                uVar33 = *puVar34;
                *puVar34 = *puVar3;
                *puVar3 = uVar33;
                auVar19._8_8_ = 0;
                auVar19._0_8_ = (ulong)((int)uVar44 + 1) * lVar7;
                auVar29._8_8_ = 0;
                auVar29._0_8_ = uVar43;
                uVar38 = SUB168(auVar19 * auVar29,8);
                lVar37 = uVar38 * 4;
                puVar39 = (uint *)(lVar6 + lVar37);
                if ((*puVar39 == 0) ||
                   (auVar17._8_8_ = 0, auVar17._0_8_ = (ulong)*puVar39 * lVar7, auVar27._8_8_ = 0,
                   auVar27._0_8_ = uVar43, auVar18._8_8_ = 0,
                   auVar18._0_8_ =
                        (ulong)((SUB164(auVar19 * auVar29,8) + uVar31) - SUB164(auVar17 * auVar27,8)
                               ) * lVar7, auVar28._8_8_ = 0, auVar28._0_8_ = uVar43,
                   SUB164(auVar18 * auVar28,8) == 0)) break;
                uVar41 = uVar44;
                uVar44 = uVar38 & 0xffffffff;
              }
            }
            *(undefined4 *)(lVar6 + uVar44 * 4) = 0;
            plVar40 = (long *)(lVar5 + uVar32 * 8);
            if ((*plVar40 != 0) && (cVar30 = RefCounted::unreference(), cVar30 != '\0')) {
              memdelete<NavigationMesh>((NavigationMesh *)*plVar40);
            }
            uVar31 = *(int *)(this + 0x24) - 1;
            *(uint *)(this + 0x24) = uVar31;
            if (uVar31 <= uVar45) {
              return;
            }
            lVar5 = *(long *)this;
            this_00 = (Ref<NavigationMesh> *)(lVar5 + uVar32 * 8);
            *(undefined8 *)this_00 = 0;
            Ref<NavigationMesh>::operator=(this_00,*(Ref **)(lVar5 + (ulong)uVar31 * 8));
            uVar41 = (ulong)*(uint *)(this + 0x24);
            plVar40 = (long *)(*(long *)this + uVar41 * 8);
            if (*plVar40 != 0) {
              cVar30 = RefCounted::unreference();
              if (cVar30 == '\0') {
                uVar41 = (ulong)*(uint *)(this + 0x24);
              }
              else {
                memdelete<NavigationMesh>((NavigationMesh *)*plVar40);
                uVar41 = (ulong)*(uint *)(this + 0x24);
              }
            }
            lVar5 = *(long *)(this + 0x10);
            *(undefined4 *)(lVar5 + uVar32 * 4) = *(undefined4 *)(lVar5 + uVar41 * 4);
            *(uint *)(*(long *)(this + 8) +
                     (ulong)*(uint *)(lVar5 + (ulong)*(uint *)(this + 0x24) * 4) * 4) = uVar45;
            return;
          }
        }
        uVar33 = uVar33 + 1;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = (ulong)(iVar35 + 1) * lVar7;
        auVar21._8_8_ = 0;
        auVar21._0_8_ = uVar43;
        lVar37 = SUB168(auVar11 * auVar21,8);
        uVar45 = *(uint *)(lVar6 + lVar37 * 4);
        iVar35 = SUB164(auVar11 * auVar21,8);
      } while ((uVar45 != 0) &&
              (auVar12._8_8_ = 0, auVar12._0_8_ = (ulong)uVar45 * lVar7, auVar22._8_8_ = 0,
              auVar22._0_8_ = uVar43, auVar13._8_8_ = 0,
              auVar13._0_8_ = (ulong)((uVar31 + iVar35) - SUB164(auVar12 * auVar22,8)) * lVar7,
              auVar23._8_8_ = 0, auVar23._0_8_ = uVar43, uVar33 <= SUB164(auVar13 * auVar23,8)));
    }
  }
  return;
}



/* NavMeshGenerator3D::sync() */

void NavMeshGenerator3D::sync(void)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
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
  code *pcVar25;
  long lVar26;
  char cVar27;
  int iVar28;
  ulong uVar29;
  long *plVar30;
  uint uVar31;
  ulong uVar32;
  uint uVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  long *plVar37;
  ulong uVar38;
  uint uVar39;
  uint uVar40;
  uint *puVar41;
  long *plVar42;
  long lVar43;
  
  if (generator_tasks._44_4_ == 0) {
    return;
  }
  iVar28 = pthread_mutex_lock((pthread_mutex_t *)baking_navmesh_mutex);
  if (iVar28 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar28);
  }
  iVar28 = pthread_mutex_lock((pthread_mutex_t *)generator_task_mutex);
  if (iVar28 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar28);
  }
  plVar30 = (long *)0x0;
  uVar40 = 0;
  uVar34 = 0;
  plVar42 = (long *)generator_tasks._24_8_;
  if (generator_tasks._24_8_ != 0) {
    do {
      while (cVar27 = WorkerThreadPool::is_task_completed(WorkerThreadPool::singleton),
            cVar27 == '\0') {
        plVar42 = (long *)*plVar42;
        if (plVar42 == (long *)0x0) goto LAB_00102126;
      }
      WorkerThreadPool::wait_for_task_completion(WorkerThreadPool::singleton);
      lVar43 = plVar42[2];
      uVar33 = (uint)uVar34;
      if (uVar33 == uVar40) {
        uVar40 = uVar33 * 2;
        if (uVar40 == 0) {
          uVar40 = 1;
        }
        plVar30 = (long *)Memory::realloc_static(plVar30,(ulong)uVar40 << 3,false);
        if (plVar30 == (long *)0x0) {
          _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                           "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar25 = (code *)invalidInstructionException();
          (*pcVar25)();
        }
      }
      plVar30[uVar34] = lVar43;
      plVar4 = (long *)plVar42[3];
      HashSet<Ref<NavigationMesh>,HashMapHasherDefault,HashMapComparatorDefault<Ref<NavigationMesh>>>
      ::erase((HashSet<Ref<NavigationMesh>,HashMapHasherDefault,HashMapComparatorDefault<Ref<NavigationMesh>>>
               *)&baking_navmeshes,(Ref *)plVar4);
      cVar27 = Callable::is_valid();
      if (cVar27 != '\0') {
        generator_emit_callback((Callable *)(plVar4 + 2));
      }
      Callable::~Callable((Callable *)(plVar4 + 2));
      if ((plVar4[1] != 0) && (cVar27 = RefCounted::unreference(), cVar27 != '\0')) {
        memdelete<NavigationMeshSourceGeometryData3D>
                  ((NavigationMeshSourceGeometryData3D *)plVar4[1]);
      }
      if ((*plVar4 != 0) && (cVar27 = RefCounted::unreference(), cVar27 != '\0')) {
        memdelete<NavigationMesh>((NavigationMesh *)*plVar4);
      }
      uVar34 = (ulong)(uVar33 + 1);
      Memory::free_static(plVar4,false);
      plVar42 = (long *)*plVar42;
    } while (plVar42 != (long *)0x0);
LAB_00102126:
    lVar43 = generator_tasks._8_8_;
    lVar26 = generator_tasks._16_8_;
    for (plVar42 = plVar30; generator_tasks._16_8_ = lVar26, plVar30 + uVar34 != plVar42;
        plVar42 = plVar42 + 1) {
      if ((lVar43 != 0) && (generator_tasks._44_4_ != 0)) {
        uVar40 = *(uint *)(hash_table_size_primes + (ulong)(uint)generator_tasks._40_4_ * 4);
        uVar38 = CONCAT44(0,uVar40);
        lVar5 = *(long *)(hash_table_size_primes_inv + (ulong)(uint)generator_tasks._40_4_ * 8);
        uVar29 = *plVar42 * 0x3ffff - 1;
        uVar29 = (uVar29 ^ uVar29 >> 0x1f) * 0x15;
        uVar29 = (uVar29 ^ uVar29 >> 0xb) * 0x41;
        uVar29 = uVar29 >> 0x16 ^ uVar29;
        uVar35 = uVar29 & 0xffffffff;
        if ((int)uVar29 == 0) {
          uVar35 = 1;
        }
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar35 * lVar5;
        auVar16._8_8_ = 0;
        auVar16._0_8_ = uVar38;
        uVar29 = SUB168(auVar7 * auVar16,8);
        uVar33 = *(uint *)(lVar26 + uVar29 * 4);
        uVar36 = (ulong)SUB164(auVar7 * auVar16,8);
        if (uVar33 != 0) {
          uVar39 = 0;
LAB_0010223c:
          auVar10._8_8_ = 0;
          auVar10._0_8_ = (ulong)((int)uVar36 + 1) * lVar5;
          auVar19._8_8_ = 0;
          auVar19._0_8_ = uVar38;
          uVar32 = SUB168(auVar10 * auVar19,8);
          uVar31 = SUB164(auVar10 * auVar19,8);
          if (((uint)uVar35 != uVar33) ||
             (*plVar42 != *(long *)(*(long *)(lVar43 + uVar29 * 8) + 0x10))) goto LAB_00102200;
          puVar41 = (uint *)(lVar26 + uVar32 * 4);
          uVar33 = *puVar41;
          if ((uVar33 != 0) &&
             (auVar11._8_8_ = 0, auVar11._0_8_ = (ulong)uVar33 * lVar5, auVar20._8_8_ = 0,
             auVar20._0_8_ = uVar38, auVar12._8_8_ = 0,
             auVar12._0_8_ = (ulong)((uVar31 + uVar40) - SUB164(auVar11 * auVar20,8)) * lVar5,
             auVar21._8_8_ = 0, auVar21._0_8_ = uVar38, uVar29 = (ulong)uVar31, uVar35 = uVar36,
             SUB164(auVar12 * auVar21,8) != 0)) {
            while( true ) {
              uVar36 = uVar29;
              puVar1 = (uint *)(lVar26 + uVar35 * 4);
              *puVar41 = *puVar1;
              puVar2 = (undefined8 *)(lVar43 + uVar32 * 8);
              *puVar1 = uVar33;
              puVar3 = (undefined8 *)(lVar43 + uVar35 * 8);
              uVar6 = *puVar2;
              *puVar2 = *puVar3;
              *puVar3 = uVar6;
              auVar15._8_8_ = 0;
              auVar15._0_8_ = (ulong)((int)uVar36 + 1) * lVar5;
              auVar24._8_8_ = 0;
              auVar24._0_8_ = uVar38;
              uVar32 = SUB168(auVar15 * auVar24,8);
              puVar41 = (uint *)(lVar26 + uVar32 * 4);
              uVar33 = *puVar41;
              if ((uVar33 == 0) ||
                 (auVar13._8_8_ = 0, auVar13._0_8_ = (ulong)uVar33 * lVar5, auVar22._8_8_ = 0,
                 auVar22._0_8_ = uVar38, auVar14._8_8_ = 0,
                 auVar14._0_8_ =
                      (ulong)((SUB164(auVar15 * auVar24,8) + uVar40) - SUB164(auVar13 * auVar22,8))
                      * lVar5, auVar23._8_8_ = 0, auVar23._0_8_ = uVar38,
                 SUB164(auVar14 * auVar23,8) == 0)) break;
              uVar29 = uVar32 & 0xffffffff;
              uVar35 = uVar36;
            }
          }
          plVar4 = (long *)(lVar43 + uVar36 * 8);
          *(undefined4 *)(lVar26 + uVar36 * 4) = 0;
          plVar37 = (long *)*plVar4;
          if ((long *)generator_tasks._24_8_ == plVar37) {
            generator_tasks._24_8_ = *plVar37;
            plVar37 = (long *)*plVar4;
          }
          if ((long *)generator_tasks._32_8_ == plVar37) {
            generator_tasks._32_8_ = plVar37[1];
            plVar37 = (long *)*plVar4;
          }
          if ((long *)plVar37[1] != (long *)0x0) {
            *(long *)plVar37[1] = *plVar37;
            plVar37 = (long *)*plVar4;
          }
          if (*plVar37 != 0) {
            *(long *)(*plVar37 + 8) = plVar37[1];
            plVar37 = (long *)*plVar4;
          }
          Memory::free_static(plVar37,false);
          lVar43 = generator_tasks._8_8_;
          *(undefined8 *)(generator_tasks._8_8_ + uVar36 * 8) = 0;
          generator_tasks._44_4_ = generator_tasks._44_4_ + -1;
        }
      }
LAB_0010237f:
      lVar26 = generator_tasks._16_8_;
    }
    if (plVar30 != (long *)0x0) {
      Memory::free_static(plVar30,false);
    }
  }
  pthread_mutex_unlock((pthread_mutex_t *)generator_task_mutex);
  pthread_mutex_unlock((pthread_mutex_t *)baking_navmesh_mutex);
  return;
LAB_00102200:
  uVar33 = *(uint *)(lVar26 + uVar32 * 4);
  uVar36 = uVar32 & 0xffffffff;
  uVar39 = uVar39 + 1;
  if ((uVar33 == 0) ||
     (auVar8._8_8_ = 0, auVar8._0_8_ = (ulong)uVar33 * lVar5, auVar17._8_8_ = 0,
     auVar17._0_8_ = uVar38, auVar9._8_8_ = 0,
     auVar9._0_8_ = (ulong)((uVar40 + uVar31) - SUB164(auVar8 * auVar17,8)) * lVar5,
     auVar18._8_8_ = 0, auVar18._0_8_ = uVar38, uVar29 = uVar32, SUB164(auVar9 * auVar18,8) < uVar39
     )) goto LAB_0010237f;
  goto LAB_0010223c;
}



/* NavMeshGenerator3D::generator_bake_from_source_geometry_data(Ref<NavigationMesh>,
   Ref<NavigationMeshSourceGeometryData3D> const&) */

void NavMeshGenerator3D::generator_bake_from_source_geometry_data(long *param_1,undefined8 *param_2)

{
  float *pfVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  float *pfVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
  char cVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  rcHeightfield *prVar22;
  undefined8 *puVar23;
  rcCompactHeightfield *prVar24;
  rcContourSet *prVar25;
  rcPolyMesh *prVar26;
  rcPolyMeshDetail *prVar27;
  undefined4 *puVar28;
  int *piVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  int iVar33;
  char *pcVar34;
  int *piVar35;
  ulong uVar36;
  undefined8 uVar37;
  ulong uVar38;
  long lVar39;
  size_t __n;
  long in_FS_OFFSET;
  bool bVar40;
  byte bVar41;
  ushort in_FPUStatusWord;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  char *pcVar46;
  int local_210;
  void *local_208;
  long local_1d0;
  Vector local_1c8 [8];
  float *local_1c0;
  Vector local_1b8 [8];
  int *local_1b0;
  long local_1a0;
  code *local_198;
  undefined2 local_190;
  Vector local_188 [8];
  long local_180 [2];
  long local_170 [2];
  undefined8 *local_160;
  char *local_158;
  undefined8 *local_150;
  char *local_148;
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  undefined8 local_120;
  float local_110;
  undefined8 local_10c;
  undefined8 local_100;
  undefined4 local_f8;
  float local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  undefined1 local_c8 [8];
  undefined4 local_c0;
  int local_a8;
  int local_a4 [2];
  int local_9c;
  float local_98;
  float local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  float local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  float local_64;
  int local_60;
  int local_5c;
  int local_58;
  float local_54;
  float local_50;
  long local_40;
  
  auVar15._8_4_ = local_c0;
  auVar15._0_8_ = local_c8;
  bVar41 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*param_1 == 0) || (_local_c8 = auVar15, (Vector *)*param_2 == (Vector *)0x0))
  goto LAB_001025a0;
  local_1c0 = (float *)0x0;
  local_1b0 = (int *)0x0;
  local_1a0 = 0;
  NavigationMeshSourceGeometryData3D::get_data((Vector *)*param_2,local_1c8,local_1b8);
  auVar14._8_4_ = local_c0;
  auVar14._0_8_ = local_c8;
  auVar13._8_4_ = local_c0;
  auVar13._0_8_ = local_c8;
  auVar12._8_4_ = local_c0;
  auVar12._0_8_ = local_c8;
  if ((local_1c0 != (float *)0x0) &&
     (((_local_c8 = auVar12, 2 < *(long *)(local_1c0 + -2) &&
       (_local_c8 = auVar13, local_1b0 != (int *)0x0)) &&
      (_local_c8 = auVar14, 2 < *(long *)(local_1b0 + -2))))) {
    local_1d0 = 0;
    local_198 = NavigationMesh::get_cell_size;
    local_190 = 0x101;
    local_148 = "";
    auVar8._8_8_ = 0;
    auVar8._0_8_ = local_140._8_8_;
    local_140 = auVar8 << 0x40;
    String::parse_latin1((StrRange *)&local_1d0);
    local_148 = "Setting up Configuration...";
    local_140._0_8_ = 0x1b;
    String::parse_latin1((StrRange *)&local_1d0);
    piVar29 = local_1b0;
    pfVar6 = local_1c0;
    if (local_1c0 == (float *)0x0) {
      local_208._0_4_ = 0;
    }
    else {
      local_208._0_4_ = (int)(*(long *)(local_1c0 + -2) / 3);
    }
    if (local_1b0 == (int *)0x0) {
      local_210 = 0;
    }
    else {
      local_210 = (int)(*(long *)(local_1b0 + -2) / 3);
    }
    rcCalcBounds(local_1c0,(int)local_208,&local_f4,&local_110);
    piVar35 = &local_a8;
    for (lVar32 = 0xb; lVar32 != 0; lVar32 = lVar32 + -1) {
      piVar35[0] = 0;
      piVar35[1] = 0;
      piVar35 = piVar35 + (ulong)bVar41 * -4 + 2;
    }
    *piVar35 = 0;
    local_98 = (float)NavigationMesh::get_cell_size();
    local_94 = (float)NavigationMesh::get_cell_height();
    fVar42 = (float)NavigationMesh::get_border_size();
    if (0.0 < fVar42) {
      fVar42 = (float)NavigationMesh::get_border_size();
      fVar42 = fVar42 / local_98;
      if ((float)((uint)fVar42 & _LC60) < _LC59) {
        fVar42 = (float)((uint)((float)(int)fVar42 +
                               (float)(-(uint)((float)(int)fVar42 < fVar42) & _LC39)) |
                        ~_LC60 & (uint)fVar42);
      }
      local_9c = (int)fVar42;
    }
    uVar3 = _LC60;
    fVar42 = _LC59;
    local_78 = (float)NavigationMesh::get_agent_max_slope();
    fVar43 = (float)NavigationMesh::get_agent_height();
    fVar43 = fVar43 / local_94;
    if ((float)((uint)fVar43 & uVar3) < fVar42) {
      fVar43 = (float)((uint)((float)(int)fVar43 +
                             (float)(-(uint)((float)(int)fVar43 < fVar43) & _LC39)) |
                      ~uVar3 & (uint)fVar43);
    }
    local_74 = (int)fVar43;
    fVar43 = (float)NavigationMesh::get_agent_max_climb();
    fVar43 = fVar43 / local_94;
    if ((float)((uint)fVar43 & uVar3) < fVar42) {
      fVar43 = (float)((uint)((float)(int)fVar43 -
                             (float)(-(uint)(fVar43 < (float)(int)fVar43) & _LC39)) |
                      ~uVar3 & (uint)fVar43);
    }
    local_70 = (int)fVar43;
    fVar43 = (float)NavigationMesh::get_agent_radius();
    fVar43 = fVar43 / local_98;
    if ((float)((uint)fVar43 & uVar3) < fVar42) {
      fVar43 = (float)((uint)((float)(int)fVar43 +
                             (float)(-(uint)((float)(int)fVar43 < fVar43) & _LC39)) |
                      ~uVar3 & (uint)fVar43);
    }
    local_6c = (int)fVar43;
    fVar42 = (float)NavigationMesh::get_edge_max_length();
    fVar43 = (float)NavigationMesh::get_cell_size();
    local_68 = (int)(fVar42 / fVar43);
    local_64 = (float)NavigationMesh::get_edge_max_error();
    fVar42 = (float)NavigationMesh::get_region_min_size();
    fVar43 = (float)NavigationMesh::get_region_min_size();
    local_60 = (int)(fVar43 * fVar42);
    fVar42 = (float)NavigationMesh::get_region_merge_size();
    fVar43 = (float)NavigationMesh::get_region_merge_size();
    local_5c = (int)(fVar43 * fVar42);
    fVar42 = (float)NavigationMesh::get_vertices_per_polygon();
    local_58 = (int)fVar42;
    fVar42 = (float)NavigationMesh::get_cell_size();
    fVar43 = (float)NavigationMesh::get_detail_sample_distance();
    local_54 = fVar43 * fVar42;
    if (fVar43 * fVar42 <= _LC55) {
      local_54 = _LC55;
    }
    fVar42 = (float)NavigationMesh::get_cell_height();
    local_50 = (float)NavigationMesh::get_detail_sample_max_error();
    local_50 = local_50 * fVar42;
    fVar42 = (float)NavigationMesh::get_border_size();
    if (0.0 < fVar42) {
      fVar43 = (float)NavigationMesh::get_cell_size();
      fVar44 = (float)NavigationMesh::get_border_size();
      fVar42 = fVar44;
      do {
        fVar42 = fVar42 - (fVar42 / fVar43) * fVar43;
      } while ((in_FPUStatusWord & 0x400) != 0);
      if (NAN(fVar42)) {
        fmodf(fVar44,fVar43);
      }
      else if (fVar42 == 0.0) goto LAB_001029dd;
      _err_print_error("generator_bake_from_source_geometry_data",
                       "modules/navigation/3d/nav_mesh_generator_3d.cpp",0x148,
                       "Property border_size is ceiled to cell_size voxel units and loses precision."
                       ,0,1);
    }
LAB_001029dd:
    fVar42 = (float)NavigationMesh::get_agent_height();
    fVar43 = (float)local_74 * local_94;
    if (fVar42 != fVar43) {
      fVar44 = _LC56;
      if (_LC56 <= ABS(fVar43) * _LC56) {
        fVar44 = ABS(fVar43) * _LC56;
      }
      if (fVar44 <= ABS(fVar43 - fVar42)) {
        _err_print_error("generator_bake_from_source_geometry_data",
                         "modules/navigation/3d/nav_mesh_generator_3d.cpp",0x14b,
                         "Property agent_height is ceiled to cell_height voxel units and loses precision."
                         ,0,1);
      }
    }
    fVar42 = (float)NavigationMesh::get_agent_max_climb();
    fVar43 = (float)local_70 * local_94;
    if (fVar42 != fVar43) {
      fVar44 = _LC56;
      if (_LC56 <= ABS(fVar43) * _LC56) {
        fVar44 = ABS(fVar43) * _LC56;
      }
      if (fVar44 <= ABS(fVar43 - fVar42)) {
        _err_print_error("generator_bake_from_source_geometry_data",
                         "modules/navigation/3d/nav_mesh_generator_3d.cpp",0x14e,
                         "Property agent_max_climb is floored to cell_height voxel units and loses precision."
                         ,0,1);
      }
    }
    fVar42 = (float)NavigationMesh::get_agent_radius();
    fVar43 = (float)local_6c * local_98;
    if (fVar42 != fVar43) {
      fVar44 = _LC56;
      if (_LC56 <= ABS(fVar43) * _LC56) {
        fVar44 = ABS(fVar43) * _LC56;
      }
      if (fVar44 <= ABS(fVar43 - fVar42)) {
        _err_print_error("generator_bake_from_source_geometry_data",
                         "modules/navigation/3d/nav_mesh_generator_3d.cpp",0x151,
                         "Property agent_radius is ceiled to cell_size voxel units and loses precision."
                         ,0,1);
      }
    }
    fVar42 = (float)NavigationMesh::get_edge_max_length();
    fVar43 = (float)local_68 * local_98;
    if (fVar42 != fVar43) {
      fVar44 = _LC56;
      if (_LC56 <= ABS(fVar43) * _LC56) {
        fVar44 = ABS(fVar43) * _LC56;
      }
      if (fVar44 <= ABS(fVar43 - fVar42)) {
        _err_print_error("generator_bake_from_source_geometry_data",
                         "modules/navigation/3d/nav_mesh_generator_3d.cpp",0x154,
                         "Property edge_max_length is rounded to cell_size voxel units and loses precision."
                         ,0,1);
      }
    }
    fVar42 = (float)NavigationMesh::get_region_min_size();
    fVar43 = (float)NavigationMesh::get_region_min_size();
    fVar44 = (float)local_60;
    if (fVar42 * fVar43 != fVar44) {
      fVar45 = _LC56;
      if (_LC56 <= ABS(fVar44) * _LC56) {
        fVar45 = ABS(fVar44) * _LC56;
      }
      if (fVar45 <= ABS(fVar44 - fVar42 * fVar43)) {
        _err_print_error("generator_bake_from_source_geometry_data",
                         "modules/navigation/3d/nav_mesh_generator_3d.cpp",0x157,
                         "Property region_min_size is converted to int and loses precision.",0,1);
      }
    }
    fVar42 = (float)NavigationMesh::get_region_merge_size();
    fVar43 = (float)NavigationMesh::get_region_merge_size();
    fVar44 = (float)local_5c;
    if (fVar42 * fVar43 != fVar44) {
      fVar45 = _LC56;
      if (_LC56 <= ABS(fVar44) * _LC56) {
        fVar45 = ABS(fVar44) * _LC56;
      }
      if (fVar45 <= ABS(fVar44 - fVar42 * fVar43)) {
        _err_print_error("generator_bake_from_source_geometry_data",
                         "modules/navigation/3d/nav_mesh_generator_3d.cpp",0x15a,
                         "Property region_merge_size is converted to int and loses precision.",0,1);
      }
    }
    fVar42 = (float)NavigationMesh::get_vertices_per_polygon();
    fVar43 = (float)local_58;
    if (fVar42 != fVar43) {
      fVar44 = _LC56;
      if (_LC56 <= ABS(fVar43) * _LC56) {
        fVar44 = ABS(fVar43) * _LC56;
      }
      if (fVar44 <= ABS(fVar43 - fVar42)) {
        _err_print_error("generator_bake_from_source_geometry_data",
                         "modules/navigation/3d/nav_mesh_generator_3d.cpp",0x15d,
                         "Property vertices_per_polygon is converted to int and loses precision.",0,
                         1);
      }
    }
    fVar42 = (float)NavigationMesh::get_cell_size();
    fVar43 = (float)NavigationMesh::get_detail_sample_distance();
    if (fVar43 * fVar42 < _LC55) {
      _err_print_error("generator_bake_from_source_geometry_data",
                       "modules/navigation/3d/nav_mesh_generator_3d.cpp",0x160,
                       "Property detail_sample_distance is clamped to 0.1 world units as the resulting value from multiplying with cell_size is too low."
                       ,0,1);
    }
    uStack_88 = CONCAT44(local_110,local_ec);
    local_80 = local_10c;
    local_90 = CONCAT44(local_f0,local_f4);
    NavigationMesh::get_filter_baking_aabb();
    auVar11._8_4_ = local_c0;
    auVar11._0_8_ = local_c8;
    auVar10._8_4_ = local_c0;
    auVar10._0_8_ = local_c8;
    if (((0.0 < local_dc) && (_local_c8 = auVar10, 0.0 < local_d8)) &&
       (_local_c8 = auVar11, 0.0 < local_d4)) {
      _local_c8 = NavigationMesh::get_filter_baking_aabb_offset();
      local_e0 = local_e0 + SUB124(_local_c8,8);
      local_90 = CONCAT44(local_e4 + (float)local_c8._4_4_,local_e8 + (float)local_c8._0_4_);
      uStack_88 = CONCAT44(local_dc + local_e8 + (float)local_c8._0_4_,local_e0);
      local_80 = CONCAT44(local_e0 + local_d4,local_e4 + (float)local_c8._4_4_ + local_d8);
    }
    local_140._0_8_ = 0x18;
    local_148 = "Calculating grid size...";
    String::parse_latin1((StrRange *)&local_1d0);
    rcCalcGridSize((float *)&local_90,(float *)((long)&uStack_88 + 4),local_98,&local_a8,local_a4);
    if (local_a8 * local_a4[0] < 0x1c9c381) {
LAB_00102e6f:
      local_140._0_8_ = 0x17;
      local_148 = "Creating heightfield...";
      String::parse_latin1((StrRange *)&local_1d0);
      prVar22 = (rcHeightfield *)rcAllocHeightfield();
      if (prVar22 == (rcHeightfield *)0x0) {
        _err_print_error("generator_bake_from_source_geometry_data",
                         "modules/navigation/3d/nav_mesh_generator_3d.cpp",0x186,
                         "Parameter \"hf\" is null.",0,0);
      }
      else {
        cVar16 = rcCreateHeightfield((rcContext *)&local_198,prVar22,local_a8,local_a4[0],
                                     (float *)&local_90,(float *)((long)&uStack_88 + 4),local_98,
                                     local_94);
        if (cVar16 == '\0') {
          _err_print_error("generator_bake_from_source_geometry_data",
                           "modules/navigation/3d/nav_mesh_generator_3d.cpp",0x187,
                           "Condition \"!rcCreateHeightfield(&ctx, *hf, cfg.width, cfg.height, cfg.bmin, cfg.bmax, cfg.cs, cfg.ch)\" is true."
                           ,0,0);
        }
        else {
          local_140._0_8_ = 0x1d;
          local_148 = "Marking walkable triangles...";
          String::parse_latin1((StrRange *)&local_1d0);
          __n = (size_t)local_210;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = local_140._8_8_;
          local_140 = auVar9 << 0x40;
          if ((long)__n < 0) {
            _err_print_error("resize","./core/templates/cowdata.h",0x157,
                             "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,
                             0);
          }
          else if (__n != 0) {
            CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)local_140);
            uVar36 = __n - 1 | __n - 1 >> 1;
            uVar36 = uVar36 | uVar36 >> 2;
            uVar36 = uVar36 | uVar36 >> 4;
            uVar36 = uVar36 | uVar36 >> 8;
            puVar23 = (undefined8 *)Memory::alloc_static((uVar36 | uVar36 >> 0x10) + 0x11,false);
            if (puVar23 == (undefined8 *)0x0) {
              _err_print_error("resize","./core/templates/cowdata.h",0x171,
                               "Parameter \"mem_new\" is null.",0,0);
              if (local_140._0_8_ == 0) goto LAB_00104081;
            }
            else {
              *puVar23 = 1;
              local_140._0_8_ = puVar23 + 2;
              puVar23[1] = __n;
            }
            CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)local_140);
            memset((void *)local_140._0_8_,0,__n);
            CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)local_140);
            uVar37 = local_140._0_8_;
            rcMarkWalkableTriangles
                      ((rcContext *)&local_198,local_78,pfVar6,(int)local_208,piVar29,local_210,
                       (uchar *)local_140._0_8_);
            cVar16 = rcRasterizeTriangles
                               ((rcContext *)&local_198,pfVar6,(int)local_208,piVar29,
                                (uchar *)uVar37,local_210,prVar22,local_70);
            if (cVar16 == '\0') {
              _err_print_error("generator_bake_from_source_geometry_data",
                               "modules/navigation/3d/nav_mesh_generator_3d.cpp",0x193,
                               "Condition \"!rcRasterizeTriangles(&ctx, verts, nverts, tris, tri_areas.ptr(), ntris, *hf, cfg.walkableClimb)\" is true."
                               ,0,0);
              if ((uchar *)uVar37 != (uchar *)0x0) {
                LOCK();
                plVar2 = (long *)(uVar37 + -0x10);
                *plVar2 = *plVar2 + -1;
                UNLOCK();
                if (*plVar2 == 0) {
                  Memory::free_static((void *)(local_140._0_8_ + -0x10),false);
                }
              }
            }
            else {
              if ((uchar *)uVar37 != (uchar *)0x0) {
                LOCK();
                plVar2 = (long *)(uVar37 + -0x10);
                *plVar2 = *plVar2 + -1;
                UNLOCK();
                if (*plVar2 == 0) {
                  Memory::free_static((void *)(local_140._0_8_ + -0x10),false);
                }
              }
              cVar16 = NavigationMesh::get_filter_low_hanging_obstacles();
              if (cVar16 != '\0') {
                rcFilterLowHangingWalkableObstacles((rcContext *)&local_198,local_70,prVar22);
              }
              cVar16 = NavigationMesh::get_filter_ledge_spans();
              if (cVar16 != '\0') {
                rcFilterLedgeSpans((rcContext *)&local_198,local_74,local_70,prVar22);
              }
              cVar16 = NavigationMesh::get_filter_walkable_low_height_spans();
              if (cVar16 != '\0') {
                rcFilterWalkableLowHeightSpans((rcContext *)&local_198,local_74,prVar22);
              }
              local_140._0_8_ = 0x23;
              local_148 = "Constructing compact heightfield...";
              String::parse_latin1((StrRange *)&local_1d0);
              prVar24 = (rcCompactHeightfield *)rcAllocCompactHeightfield();
              if (prVar24 == (rcCompactHeightfield *)0x0) {
                _err_print_error("generator_bake_from_source_geometry_data",
                                 "modules/navigation/3d/nav_mesh_generator_3d.cpp",0x1a4,
                                 "Parameter \"chf\" is null.",0,0);
              }
              else {
                cVar16 = rcBuildCompactHeightfield
                                   ((rcContext *)&local_198,local_74,local_70,prVar22,prVar24);
                if (cVar16 == '\0') {
                  _err_print_error("generator_bake_from_source_geometry_data",
                                   "modules/navigation/3d/nav_mesh_generator_3d.cpp",0x1a5,
                                   "Condition \"!rcBuildCompactHeightfield(&ctx, cfg.walkableHeight, cfg.walkableClimb, *hf, *chf)\" is true."
                                   ,0,0);
                }
                else {
                  rcFreeHeightField(prVar22);
                  if (local_1a0 != 0) {
                    CowData<NavigationMeshSourceGeometryData3D::ProjectedObstruction>::
                    _copy_on_write((CowData<NavigationMeshSourceGeometryData3D::ProjectedObstruction>
                                    *)&local_1a0);
                    lVar32 = local_1a0;
                    CowData<NavigationMeshSourceGeometryData3D::ProjectedObstruction>::
                    _copy_on_write((CowData<NavigationMeshSourceGeometryData3D::ProjectedObstruction>
                                    *)&local_1a0);
                    lVar39 = local_1a0;
                    if (local_1a0 != 0) {
                      lVar39 = local_1a0 + *(long *)(local_1a0 + -8) * 0x20;
                    }
                    for (; lVar32 != lVar39; lVar32 = lVar32 + 0x20) {
                      if (((*(char *)(lVar32 + 0x18) == '\0') &&
                          (pfVar6 = *(float **)(lVar32 + 8), pfVar6 != (float *)0x0)) &&
                         (*(long *)(pfVar6 + -2) * -0x5555555555555555 + 0x2aaaaaaaaaaaaaaaU <
                          0x5555555555555555)) {
                        rcMarkConvexPolyArea
                                  ((rcContext *)&local_198,pfVar6,(int)(*(long *)(pfVar6 + -2) / 3),
                                   *(float *)(lVar32 + 0x10),
                                   *(float *)(lVar32 + 0x14) + *(float *)(lVar32 + 0x10),'\0',
                                   prVar24);
                      }
                    }
                  }
                  local_140._0_8_ = 0x18;
                  local_148 = "Eroding walkable area...";
                  String::parse_latin1((StrRange *)&local_1d0);
                  cVar16 = rcErodeWalkableArea((rcContext *)&local_198,local_6c,prVar24);
                  if (cVar16 == '\0') {
                    _err_print_error("generator_bake_from_source_geometry_data",
                                     "modules/navigation/3d/nav_mesh_generator_3d.cpp",0x1bd,
                                     "Condition \"!rcErodeWalkableArea(&ctx, cfg.walkableRadius, *chf)\" is true."
                                     ,0,0);
                  }
                  else {
                    if (local_1a0 != 0) {
                      CowData<NavigationMeshSourceGeometryData3D::ProjectedObstruction>::
                      _copy_on_write((CowData<NavigationMeshSourceGeometryData3D::ProjectedObstruction>
                                      *)&local_1a0);
                      lVar32 = local_1a0;
                      CowData<NavigationMeshSourceGeometryData3D::ProjectedObstruction>::
                      _copy_on_write((CowData<NavigationMeshSourceGeometryData3D::ProjectedObstruction>
                                      *)&local_1a0);
                      lVar39 = local_1a0;
                      if (local_1a0 != 0) {
                        lVar39 = local_1a0 + *(long *)(local_1a0 + -8) * 0x20;
                      }
                      for (; lVar32 != lVar39; lVar32 = lVar32 + 0x20) {
                        if (((*(char *)(lVar32 + 0x18) != '\0') &&
                            (pfVar6 = *(float **)(lVar32 + 8), pfVar6 != (float *)0x0)) &&
                           (*(long *)(pfVar6 + -2) * -0x5555555555555555 + 0x2aaaaaaaaaaaaaaaU <
                            0x5555555555555555)) {
                          rcMarkConvexPolyArea
                                    ((rcContext *)&local_198,pfVar6,
                                     (int)(*(long *)(pfVar6 + -2) / 3),*(float *)(lVar32 + 0x10),
                                     *(float *)(lVar32 + 0x14) + *(float *)(lVar32 + 0x10),'\0',
                                     prVar24);
                        }
                      }
                    }
                    local_140._0_8_ = 0xf;
                    local_148 = "Partitioning...";
                    String::parse_latin1((StrRange *)&local_1d0);
                    iVar17 = NavigationMesh::get_sample_partition_type();
                    if (iVar17 == 0) {
                      cVar16 = rcBuildDistanceField((rcContext *)&local_198,prVar24);
                      if (cVar16 == '\0') {
                        _err_print_error("generator_bake_from_source_geometry_data",
                                         "modules/navigation/3d/nav_mesh_generator_3d.cpp",0x1d3,
                                         "Condition \"!rcBuildDistanceField(&ctx, *chf)\" is true.",
                                         0,0);
                      }
                      else {
                        cVar16 = rcBuildRegions((rcContext *)&local_198,prVar24,local_9c,local_60,
                                                local_5c);
                        if (cVar16 != '\0') goto LAB_001033b0;
                        _err_print_error("generator_bake_from_source_geometry_data",
                                         "modules/navigation/3d/nav_mesh_generator_3d.cpp",0x1d4,
                                         "Condition \"!rcBuildRegions(&ctx, *chf, cfg.borderSize, cfg.minRegionArea, cfg.mergeRegionArea)\" is true."
                                         ,0,0);
                      }
                    }
                    else {
                      iVar17 = NavigationMesh::get_sample_partition_type();
                      if (iVar17 == 1) {
                        cVar16 = rcBuildRegionsMonotone
                                           ((rcContext *)&local_198,prVar24,local_9c,local_60,
                                            local_5c);
                        if (cVar16 != '\0') goto LAB_001033b0;
                        _err_print_error("generator_bake_from_source_geometry_data",
                                         "modules/navigation/3d/nav_mesh_generator_3d.cpp",0x1d6,
                                         "Condition \"!rcBuildRegionsMonotone(&ctx, *chf, cfg.borderSize, cfg.minRegionArea, cfg.mergeRegionArea)\" is true."
                                         ,0,0);
                      }
                      else {
                        cVar16 = rcBuildLayerRegions((rcContext *)&local_198,prVar24,local_9c,
                                                     local_60);
                        if (cVar16 == '\0') {
                          _err_print_error("generator_bake_from_source_geometry_data",
                                           "modules/navigation/3d/nav_mesh_generator_3d.cpp",0x1d8,
                                           "Condition \"!rcBuildLayerRegions(&ctx, *chf, cfg.borderSize, cfg.minRegionArea)\" is true."
                                           ,0,0);
                        }
                        else {
LAB_001033b0:
                          local_140._0_8_ = 0x14;
                          local_148 = "Creating contours...";
                          String::parse_latin1((StrRange *)&local_1d0);
                          prVar25 = (rcContourSet *)rcAllocContourSet();
                          if (prVar25 == (rcContourSet *)0x0) {
                            _err_print_error("generator_bake_from_source_geometry_data",
                                             "modules/navigation/3d/nav_mesh_generator_3d.cpp",0x1df
                                             ,"Parameter \"cset\" is null.",0,0);
                          }
                          else {
                            cVar16 = rcBuildContours((rcContext *)&local_198,prVar24,local_64,
                                                     local_68,prVar25,1);
                            if (cVar16 == '\0') {
                              _err_print_error("generator_bake_from_source_geometry_data",
                                               "modules/navigation/3d/nav_mesh_generator_3d.cpp",
                                               0x1e0,
                                               "Condition \"!rcBuildContours(&ctx, *chf, cfg.maxSimplificationError, cfg.maxEdgeLen, *cset)\" is true."
                                               ,0,0);
                            }
                            else {
                              local_140._0_8_ = 0x14;
                              local_148 = "Creating polymesh...";
                              String::parse_latin1((StrRange *)&local_1d0);
                              prVar26 = (rcPolyMesh *)rcAllocPolyMesh();
                              if (prVar26 == (rcPolyMesh *)0x0) {
                                _err_print_error("generator_bake_from_source_geometry_data",
                                                 "modules/navigation/3d/nav_mesh_generator_3d.cpp",
                                                 0x1e5,"Parameter \"poly_mesh\" is null.",0,0);
                              }
                              else {
                                cVar16 = rcBuildPolyMesh((rcContext *)&local_198,prVar25,local_58,
                                                         prVar26);
                                if (cVar16 == '\0') {
                                  _err_print_error("generator_bake_from_source_geometry_data",
                                                   "modules/navigation/3d/nav_mesh_generator_3d.cpp"
                                                   ,0x1e6,
                                                  "Condition \"!rcBuildPolyMesh(&ctx, *cset, cfg.maxVertsPerPoly, *poly_mesh)\" is true."
                                                  ,0,0);
                                }
                                else {
                                  prVar27 = (rcPolyMeshDetail *)rcAllocPolyMeshDetail();
                                  if (prVar27 == (rcPolyMeshDetail *)0x0) {
                                    _err_print_error("generator_bake_from_source_geometry_data",
                                                                                                          
                                                  "modules/navigation/3d/nav_mesh_generator_3d.cpp",
                                                  0x1e9,"Parameter \"detail_mesh\" is null.",0,0);
                                  }
                                  else {
                                    cVar16 = rcBuildPolyMeshDetail
                                                       ((rcContext *)&local_198,prVar26,prVar24,
                                                        local_54,local_50,prVar27);
                                    if (cVar16 == '\0') {
                                      _err_print_error("generator_bake_from_source_geometry_data",
                                                                                                              
                                                  "modules/navigation/3d/nav_mesh_generator_3d.cpp",
                                                  0x1ea,
                                                  "Condition \"!rcBuildPolyMeshDetail(&ctx, *poly_mesh, *chf, cfg.detailSampleDist, cfg.detailSampleMaxError, *detail_mesh)\" is true."
                                                  ,0,0);
                                    }
                                    else {
                                      rcFreeCompactHeightfield(prVar24);
                                      rcFreeContourSet(prVar25);
                                      local_148 = "Converting to native navigation mesh...";
                                      local_140._0_8_ = 0x27;
                                      String::parse_latin1((StrRange *)&local_1d0);
                                      local_120 = 2;
                                      local_140 = (undefined1  [16])0x0;
                                      local_130 = (undefined1  [16])0x0;
                                      uVar3 = *(uint *)(prVar27 + 0x1c);
                                      local_180[0] = 0;
                                      local_170[0] = 0;
                                      if (uVar3 == 0) {
                                        local_208 = (void *)0x0;
                                      }
                                      else {
                                        uVar37 = 0;
                                        uVar18 = uVar3 - 1 >> 1 | uVar3 - 1;
                                        uVar18 = uVar18 | uVar18 >> 2;
                                        uVar18 = uVar18 | uVar18 >> 4;
                                        uVar18 = uVar18 | uVar18 >> 8;
                                        local_208 = (void *)Memory::realloc_static
                                                                      ((void *)0x0,
                                                                       (ulong)((uVar18 | uVar18 >> 
                                                  0x10) + 1) << 2,false);
                                        if (local_208 == (void *)0x0) {
                                          _err_print_error("resize",
                                                  "./core/templates/local_vector.h",0xa3,
                                                  "FATAL: Condition \"!data\" is true.",
                                                  "Out of memory",0,0,uVar37);
                                          _err_flush_stdout();
                    /* WARNING: Does not return */
                                          pcVar7 = (code *)invalidInstructionException();
                                          (*pcVar7)();
                                        }
                                        if (0 < *(int *)(prVar27 + 0x1c)) {
                                          uVar36 = 0;
                                          do {
                                            puVar23 = (undefined8 *)
                                                      (*(long *)(prVar27 + 8) + uVar36 * 0xc);
                                            local_f8 = *(undefined4 *)(puVar23 + 1);
                                            local_100 = *puVar23;
                                            local_158 = (char *)((ulong)local_158 &
                                                                0xffffffff00000000);
                                            cVar16 = 
                                                  HashMap<Vector3,int,HashMapHasherDefault,HashMapComparatorDefault<Vector3>,DefaultTypedAllocator<HashMapElement<Vector3,int>>>
                                                  ::_lookup_pos((
                                                  HashMap<Vector3,int,HashMapHasherDefault,HashMapComparatorDefault<Vector3>,DefaultTypedAllocator<HashMapElement<Vector3,int>>>
                                                  *)&local_148,(Vector3 *)&local_100,
                                                  (uint *)&local_158);
                                            if (cVar16 == '\0') {
                                              uVar5 = local_120._4_4_;
                                              if (uVar3 <= (uint)uVar36) {
LAB_00103b80:
                                                uVar38 = (ulong)(int)uVar3;
LAB_00103ba1:
                                                pcVar46 = "count";
                                                iVar17 = 0xb2;
                                                pcVar34 = "./core/templates/local_vector.h";
LAB_00103bad:
                                                _err_print_index_error
                                                          ("operator[]",pcVar34,iVar17,uVar36,uVar38
                                                           ,"p_index",pcVar46,"",false,true);
                                                _err_flush_stdout();
                    /* WARNING: Does not return */
                                                pcVar7 = (code *)invalidInstructionException();
                                                (*pcVar7)();
                                              }
                                              *(undefined4 *)((long)local_208 + uVar36 * 4) =
                                                   local_120._4_4_;
                                              puVar28 = (undefined4 *)
                                                                                                                
                                                  HashMap<Vector3,int,HashMapHasherDefault,HashMapComparatorDefault<Vector3>,DefaultTypedAllocator<HashMapElement<Vector3,int>>>
                                                  ::operator[]((
                                                  HashMap<Vector3,int,HashMapHasherDefault,HashMapComparatorDefault<Vector3>,DefaultTypedAllocator<HashMapElement<Vector3,int>>>
                                                  *)&local_148,(Vector3 *)&local_100);
                                              *puVar28 = uVar5;
                                              local_c8 = (undefined1  [8])local_100;
                                              local_c0 = local_f8;
                                              if (local_180[0] == 0) {
                                                lVar32 = 1;
                                              }
                                              else {
                                                lVar32 = *(long *)(local_180[0] + -8) + 1;
                                              }
                                              iVar17 = CowData<Vector3>::resize<false>
                                                                 ((CowData<Vector3> *)local_180,
                                                                  lVar32);
                                              if (iVar17 == 0) {
                                                if (local_180[0] == 0) {
                                                  lVar39 = -1;
                                                  lVar32 = 0;
                                                }
                                                else {
                                                  lVar32 = *(long *)(local_180[0] + -8);
                                                  lVar39 = lVar32 + -1;
                                                  if (-1 < lVar39) {
                                                    CowData<Vector3>::_copy_on_write
                                                              ((CowData<Vector3> *)local_180);
                                                    puVar23 = (undefined8 *)
                                                              (local_180[0] + lVar39 * 0xc);
                                                    *puVar23 = local_c8;
                                                    *(undefined4 *)(puVar23 + 1) = local_c0;
                                                    goto LAB_001035f3;
                                                  }
                                                }
                                                _err_print_index_error
                                                          ("set","./core/templates/cowdata.h",0xcf,
                                                           lVar39,lVar32,"p_index","size()","",false
                                                           ,false);
                                              }
                                              else {
                                                _err_print_error("push_back",
                                                                 "./core/templates/vector.h",0x142,
                                                                                                                                  
                                                  "Condition \"err\" is true. Returning: true",0,0);
                                              }
                                            }
                                            else {
                                              if (uVar3 <= (uint)uVar36) goto LAB_00103b80;
                                              *(undefined4 *)((long)local_208 + uVar36 * 4) =
                                                   *(undefined4 *)
                                                    (*(long *)(local_140._0_8_ +
                                                              ((ulong)local_158 & 0xffffffff) * 8) +
                                                    0x1c);
                                            }
LAB_001035f3:
                                            uVar36 = uVar36 + 1;
                                          } while ((int)uVar36 < *(int *)(prVar27 + 0x1c));
                                        }
                                      }
                                      if (0 < *(int *)(prVar27 + 0x18)) {
                                        lVar32 = 0;
                                        do {
                                          piVar29 = (int *)(lVar32 * 0x10 + *(long *)prVar27);
                                          iVar17 = *piVar29;
                                          iVar4 = piVar29[3];
                                          lVar39 = (ulong)(uint)(piVar29[2] * 4) +
                                                   *(long *)(prVar27 + 0x10);
                                          if (iVar4 != 0) {
                                            iVar33 = 0;
                                            do {
                                              local_160 = (undefined8 *)0x0;
                                              CowData<int>::_copy_on_write
                                                        ((CowData<int> *)&local_160);
                                              puVar23 = (undefined8 *)
                                                        Memory::alloc_static(0x20,false);
                                              if (puVar23 == (undefined8 *)0x0) {
                                                _err_print_error("resize",
                                                  "./core/templates/cowdata.h",0x171,
                                                  "Parameter \"mem_new\" is null.",0,0);
                                              }
                                              else {
                                                local_160 = puVar23 + 2;
                                                *puVar23 = 1;
                                                puVar23[1] = 3;
                                              }
                                              uVar19 = iVar33 * 4;
                                              uVar20 = (uint)*(byte *)(lVar39 + (ulong)uVar19) +
                                                       iVar17;
                                              uVar18 = (uint)*(byte *)(lVar39 + (ulong)(uVar19 + 2))
                                                       + iVar17;
                                              bVar41 = *(byte *)(lVar39 + (ulong)(uVar19 + 1));
                                              if (uVar3 <= uVar20) {
LAB_00104342:
                                                uVar36 = (ulong)uVar20;
                                                uVar38 = (ulong)uVar3;
                                                goto LAB_00103ba1;
                                              }
                                              uVar5 = *(undefined4 *)
                                                       ((long)local_208 + (ulong)uVar20 * 4);
                                              if (local_160 == (undefined8 *)0x0) {
                                                uVar38 = 0;
LAB_00104368:
                                                uVar36 = 0;
                                                iVar17 = 0x38;
                                                pcVar34 = "./core/templates/vector.h";
                                                pcVar46 = "((Vector<T> *)(this))->_cowdata.size()";
                                                goto LAB_00103bad;
                                              }
                                              uVar38 = local_160[-1];
                                              if ((long)uVar38 < 1) goto LAB_00104368;
                                              CowData<int>::_copy_on_write
                                                        ((CowData<int> *)&local_160);
                                              *(undefined4 *)local_160 = uVar5;
                                              uVar20 = uVar18;
                                              if (uVar3 <= uVar18) goto LAB_00104342;
                                              uVar38 = local_160[-1];
                                              uVar5 = *(undefined4 *)
                                                       ((long)local_208 + (ulong)uVar18 * 4);
                                              if ((long)uVar38 < 2) {
                                                uVar36 = 1;
                                                iVar17 = 0x38;
                                                pcVar34 = "./core/templates/vector.h";
                                                pcVar46 = "((Vector<T> *)(this))->_cowdata.size()";
                                                goto LAB_00103bad;
                                              }
                                              CowData<int>::_copy_on_write
                                                        ((CowData<int> *)&local_160);
                                              uVar18 = (uint)bVar41 + iVar17;
                                              *(undefined4 *)((long)local_160 + 4) = uVar5;
                                              if (uVar3 <= uVar18) {
                                                uVar36 = (ulong)uVar18;
                                                uVar38 = (ulong)uVar3;
                                                goto LAB_00103ba1;
                                              }
                                              uVar38 = local_160[-1];
                                              uVar5 = *(undefined4 *)
                                                       ((long)local_208 + (ulong)uVar18 * 4);
                                              if ((long)uVar38 < 3) {
                                                uVar36 = 2;
                                                iVar17 = 0x38;
                                                pcVar34 = "./core/templates/vector.h";
                                                pcVar46 = "((Vector<T> *)(this))->_cowdata.size()";
                                                goto LAB_00103bad;
                                              }
                                              CowData<int>::_copy_on_write
                                                        ((CowData<int> *)&local_160);
                                              *(undefined4 *)(local_160 + 1) = uVar5;
                                              plVar2 = local_160 + -2;
                                              local_150 = (undefined8 *)0x0;
                                              do {
                                                lVar31 = *plVar2;
                                                if (lVar31 == 0) goto LAB_00103dc1;
                                                LOCK();
                                                lVar30 = *plVar2;
                                                bVar40 = lVar31 == lVar30;
                                                if (bVar40) {
                                                  *plVar2 = lVar31 + 1;
                                                  lVar30 = lVar31;
                                                }
                                                UNLOCK();
                                              } while (!bVar40);
                                              if (lVar30 != -1) {
                                                local_150 = local_160;
                                              }
LAB_00103dc1:
                                              puVar23 = local_150;
                                              if (local_170[0] == 0) {
                                                lVar31 = 0;
                                              }
                                              else {
                                                lVar31 = *(long *)(local_170[0] + -8);
                                              }
                                              iVar21 = CowData<Vector<int>>::resize<false>
                                                                 ((CowData<Vector<int>> *)local_170,
                                                                  lVar31 + 1);
                                              if (iVar21 == 0) {
                                                if (local_170[0] == 0) {
                                                  lVar30 = -1;
                                                  lVar31 = 0;
                                                }
                                                else {
                                                  lVar31 = *(long *)(local_170[0] + -8);
                                                  lVar30 = lVar31 + -1;
                                                  if (-1 < lVar30) {
                                                    CowData<Vector<int>>::_copy_on_write
                                                              ((CowData<Vector<int>> *)local_170);
                                                    lVar31 = lVar30 * 0x10 + local_170[0];
                                                    if (puVar23 != *(undefined8 **)(lVar31 + 8)) {
                                                      CowData<int>::_ref((CowData<int> *)
                                                                         (lVar31 + 8),
                                                                         (CowData *)&local_150);
                                                    }
                                                    goto LAB_00103e45;
                                                  }
                                                }
                                                _err_print_index_error
                                                          ("set","./core/templates/cowdata.h",0xcf,
                                                           lVar30,lVar31,"p_index","size()","",false
                                                           ,false);
                                              }
                                              else {
                                                _err_print_error("push_back",
                                                                 "./core/templates/vector.h",0x142,
                                                                                                                                  
                                                  "Condition \"err\" is true. Returning: true",0,0);
                                              }
LAB_00103e45:
                                              if (puVar23 != (undefined8 *)0x0) {
                                                LOCK();
                                                plVar2 = puVar23 + -2;
                                                *plVar2 = *plVar2 + -1;
                                                UNLOCK();
                                                if (*plVar2 == 0) {
                                                  Memory::free_static(local_150 + -2,false);
                                                }
                                              }
                                              if (local_160 != (undefined8 *)0x0) {
                                                LOCK();
                                                plVar2 = local_160 + -2;
                                                *plVar2 = *plVar2 + -1;
                                                UNLOCK();
                                                if (*plVar2 == 0) {
                                                  Memory::free_static(local_160 + -2,false);
                                                }
                                              }
                                              iVar33 = iVar33 + 1;
                                            } while (iVar4 != iVar33);
                                          }
                                          lVar32 = lVar32 + 1;
                                        } while ((int)lVar32 < *(int *)(prVar27 + 0x18));
                                      }
                                      NavigationMesh::set_data((Vector *)*param_1,local_188);
                                      local_158 = "Cleanup...";
                                      local_150 = (undefined8 *)0xa;
                                      String::parse_latin1((StrRange *)&local_1d0);
                                      rcFreePolyMesh(prVar26);
                                      rcFreePolyMeshDetail(prVar27);
                                      local_158 = "Baking finished.";
                                      local_150 = (undefined8 *)0x10;
                                      String::parse_latin1((StrRange *)&local_1d0);
                                      if (local_208 != (void *)0x0) {
                                        Memory::free_static(local_208,false);
                                      }
                                      HashMap<Vector3,int,HashMapHasherDefault,HashMapComparatorDefault<Vector3>,DefaultTypedAllocator<HashMapElement<Vector3,int>>>
                                      ::~HashMap((HashMap<Vector3,int,HashMapHasherDefault,HashMapComparatorDefault<Vector3>,DefaultTypedAllocator<HashMapElement<Vector3,int>>>
                                                  *)&local_148);
                                      CowData<Vector<int>>::_unref
                                                ((CowData<Vector<int>> *)local_170);
                                      lVar32 = local_180[0];
                                      if (local_180[0] != 0) {
                                        LOCK();
                                        plVar2 = (long *)(local_180[0] + -0x10);
                                        *plVar2 = *plVar2 + -1;
                                        UNLOCK();
                                        if (*plVar2 == 0) {
                                          local_180[0] = 0;
                                          Memory::free_static((void *)(lVar32 + -0x10),false);
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            goto LAB_001037d1;
          }
LAB_00104081:
          _err_print_error("generator_bake_from_source_geometry_data",
                           "modules/navigation/3d/nav_mesh_generator_3d.cpp",0x18e,
                           "Condition \"tri_areas.is_empty()\" is true.",0,0);
        }
      }
    }
    else {
      ProjectSettings::get_singleton();
      StringName::StringName
                ((StringName *)&local_148,"navigation/baking/use_crash_prevention_checks",false);
      ProjectSettings::get_setting_with_override((StringName *)local_c8);
      bVar40 = Variant::operator_cast_to_bool((Variant *)local_c8);
      if (Variant::needs_deinit[(int)local_c8._0_4_] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
        StringName::unref();
      }
      if (!bVar40) goto LAB_00102e6f;
      _err_print_error("generator_bake_from_source_geometry_data",
                       "modules/navigation/3d/nav_mesh_generator_3d.cpp",0x17a,
                       "Method/function failed.",
                       "Baking interrupted.\nNavigationMesh baking process would likely crash the engine.\nSource geometry is suspiciously big for the current Cell Size and Cell Height in the NavMesh Resource bake settings.\nIf baking does not crash the engine or fail, the resulting NavigationMesh will create serious pathfinding performance issues.\nIt is advised to increase Cell Size and/or Cell Height in the NavMesh Resource bake settings or reduce the size / scale of the source geometry.\nIf you would like to try baking anyway, disable the \'navigation/baking/use_crash_prevention_checks\' project setting."
                       ,0,0);
    }
LAB_001037d1:
    lVar32 = local_1d0;
    if (local_1d0 != 0) {
      LOCK();
      plVar2 = (long *)(local_1d0 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_1d0 = 0;
        Memory::free_static((void *)(lVar32 + -0x10),false);
      }
    }
  }
  CowData<NavigationMeshSourceGeometryData3D::ProjectedObstruction>::_unref
            ((CowData<NavigationMeshSourceGeometryData3D::ProjectedObstruction> *)&local_1a0);
  piVar29 = local_1b0;
  pfVar6 = local_1c0;
  if (local_1b0 != (int *)0x0) {
    LOCK();
    plVar2 = (long *)(local_1b0 + -4);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_1b0 = (int *)0x0;
      Memory::free_static(piVar29 + -4,false);
      pfVar6 = local_1c0;
    }
  }
  local_1c0 = pfVar6;
  if (pfVar6 != (float *)0x0) {
    LOCK();
    pfVar1 = pfVar6 + -4;
    *(long *)pfVar1 = *(long *)pfVar1 + -1;
    UNLOCK();
    if (*(long *)pfVar1 == 0) {
      local_1c0 = (float *)0x0;
      Memory::free_static(pfVar6 + -4,false);
    }
  }
LAB_001025a0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavMeshGenerator3D::bake_from_source_geometry_data(Ref<NavigationMesh>,
   Ref<NavigationMeshSourceGeometryData3D>, Callable const&) */

void NavMeshGenerator3D::bake_from_source_geometry_data
               (long *param_1,long *param_2,Callable *param_3)

{
  NavigationMesh *pNVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  NavigationMesh *local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_1 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = 0x92;
      pcVar5 = "Condition \"p_navigation_mesh.is_null()\" is true.";
LAB_00104732:
      _err_print_error("bake_from_source_geometry_data",
                       "modules/navigation/3d/nav_mesh_generator_3d.cpp",uVar6,pcVar5,0,0);
      return;
    }
    goto LAB_0010477c;
  }
  if (*param_2 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = 0x93;
      pcVar5 = "Condition \"p_source_geometry_data.is_null()\" is true.";
      goto LAB_00104732;
    }
    goto LAB_0010477c;
  }
  cVar2 = NavigationMeshSourceGeometryData3D::has_data();
  if (cVar2 == '\0') {
    NavigationMesh::clear();
    cVar2 = Callable::is_valid();
joined_r0x0010468a:
    if (cVar2 != '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        generator_emit_callback(param_3);
        return;
      }
      goto LAB_0010477c;
    }
  }
  else {
    local_58[0] = (NavigationMesh *)0x0;
    Ref<NavigationMesh>::operator=((Ref<NavigationMesh> *)local_58,(Ref *)*param_1);
    cVar2 = is_baking(local_58);
    pNVar1 = local_58[0];
    if ((local_58[0] != (NavigationMesh *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')
       ) {
      memdelete<NavigationMesh>(pNVar1);
    }
    if (cVar2 == '\0') {
      iVar4 = pthread_mutex_lock((pthread_mutex_t *)baking_navmesh_mutex);
      if (iVar4 != 0) {
LAB_00104781:
                    /* WARNING: Subroutine does not return */
        std::__throw_system_error(iVar4);
      }
      HashSet<Ref<NavigationMesh>,HashMapHasherDefault,HashMapComparatorDefault<Ref<NavigationMesh>>>
      ::insert((Ref *)local_58);
      pthread_mutex_unlock((pthread_mutex_t *)baking_navmesh_mutex);
      local_58[0] = (NavigationMesh *)0x0;
      Ref<NavigationMesh>::operator=((Ref<NavigationMesh> *)local_58,(Ref *)*param_1);
      generator_bake_from_source_geometry_data(local_58,param_2);
      pNVar1 = local_58[0];
      if ((local_58[0] != (NavigationMesh *)0x0) &&
         (cVar2 = RefCounted::unreference(), cVar2 != '\0')) {
        memdelete<NavigationMesh>(pNVar1);
      }
      iVar4 = pthread_mutex_lock((pthread_mutex_t *)baking_navmesh_mutex);
      if (iVar4 != 0) goto LAB_00104781;
      HashSet<Ref<NavigationMesh>,HashMapHasherDefault,HashMapComparatorDefault<Ref<NavigationMesh>>>
      ::erase((HashSet<Ref<NavigationMesh>,HashMapHasherDefault,HashMapComparatorDefault<Ref<NavigationMesh>>>
               *)&baking_navmeshes,(Ref *)param_1);
      pthread_mutex_unlock((pthread_mutex_t *)baking_navmesh_mutex);
      cVar2 = Callable::is_valid();
      goto joined_r0x0010468a;
    }
    _err_print_error("bake_from_source_geometry_data",
                     "modules/navigation/3d/nav_mesh_generator_3d.cpp",0x9e,
                     "Method/function failed.",
                     "NavigationMesh is already baking. Wait for current bake to finish.",0,0);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010477c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavMeshGenerator3D::bake_from_source_geometry_data_async(Ref<NavigationMesh>,
   Ref<NavigationMeshSourceGeometryData3D>, Callable const&) */

void NavMeshGenerator3D::bake_from_source_geometry_data_async
               (long *param_1,long *param_2,Callable *param_3)

{
  NavigationMesh *pNVar1;
  long *plVar2;
  NavigationMeshSourceGeometryData3D *pNVar3;
  long lVar4;
  long lVar5;
  _func_void_void_ptr *p_Var6;
  NavigationMesh *pNVar7;
  char cVar8;
  char cVar9;
  int iVar10;
  Ref<NavigationMesh> *this;
  undefined8 uVar11;
  long lVar12;
  char *pcVar13;
  NavigationMeshSourceGeometryData3D *pNVar14;
  long in_FS_OFFSET;
  bool bVar15;
  NavigationMesh *local_60;
  NavigationMesh *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_1 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar11 = 0xb0;
      pcVar13 = "Condition \"p_navigation_mesh.is_null()\" is true.";
LAB_00104bd6:
      _err_print_error("bake_from_source_geometry_data_async",
                       "modules/navigation/3d/nav_mesh_generator_3d.cpp",uVar11,pcVar13,0,0);
      return;
    }
    goto LAB_00104cbd;
  }
  if (*param_2 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar11 = 0xb1;
      pcVar13 = "Condition \"p_source_geometry_data.is_null()\" is true.";
      goto LAB_00104bd6;
    }
    goto LAB_00104cbd;
  }
  cVar8 = NavigationMeshSourceGeometryData3D::has_data();
  if (cVar8 == '\0') {
    NavigationMesh::clear();
    cVar8 = Callable::is_valid();
    if (cVar8 != '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        generator_emit_callback(param_3);
        return;
      }
      goto LAB_00104cbd;
    }
  }
  else {
    local_58 = (NavigationMesh *)0x0;
    if (use_threads == '\0') {
      pNVar14 = (NavigationMeshSourceGeometryData3D *)*param_2;
      if ((pNVar14 == (NavigationMeshSourceGeometryData3D *)0x0) ||
         (local_58 = (NavigationMesh *)pNVar14, cVar8 = RefCounted::reference(), cVar8 == '\0')) {
        local_58 = (NavigationMesh *)0x0;
        pNVar14 = (NavigationMeshSourceGeometryData3D *)0x0;
      }
      local_60 = (NavigationMesh *)0x0;
      Ref<NavigationMesh>::operator=((Ref<NavigationMesh> *)&local_60,(Ref *)*param_1);
      bake_from_source_geometry_data((Ref<NavigationMesh> *)&local_60,&local_58,param_3);
      pNVar7 = local_60;
      if ((local_60 != (NavigationMesh *)0x0) && (cVar8 = RefCounted::unreference(), cVar8 != '\0'))
      {
        memdelete<NavigationMesh>(pNVar7);
      }
      if ((pNVar14 != (NavigationMeshSourceGeometryData3D *)0x0) &&
         (cVar8 = RefCounted::unreference(), cVar8 != '\0')) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          memdelete<NavigationMeshSourceGeometryData3D>(pNVar14);
          return;
        }
        goto LAB_00104cbd;
      }
    }
    else {
      Ref<NavigationMesh>::operator=((Ref<NavigationMesh> *)&local_58,(Ref *)*param_1);
      cVar8 = is_baking((Ref<NavigationMesh> *)&local_58);
      pNVar7 = local_58;
      if ((local_58 != (NavigationMesh *)0x0) && (cVar9 = RefCounted::unreference(), cVar9 != '\0'))
      {
        memdelete<NavigationMesh>(pNVar7);
      }
      if (cVar8 == '\0') {
        iVar10 = pthread_mutex_lock((pthread_mutex_t *)baking_navmesh_mutex);
        if (iVar10 != 0) {
LAB_00104cc2:
                    /* WARNING: Subroutine does not return */
          std::__throw_system_error(iVar10);
        }
        HashSet<Ref<NavigationMesh>,HashMapHasherDefault,HashMapComparatorDefault<Ref<NavigationMesh>>>
        ::insert((Ref<NavigationMesh> *)&local_58);
        pthread_mutex_unlock((pthread_mutex_t *)baking_navmesh_mutex);
        iVar10 = pthread_mutex_lock((pthread_mutex_t *)generator_task_mutex);
        if (iVar10 != 0) goto LAB_00104cc2;
        this = (Ref<NavigationMesh> *)operator_new(0x30,"");
        *(undefined8 *)(this + 0x10) = 0;
        *(undefined8 *)(this + 0x18) = 0;
        *(undefined8 *)(this + 0x20) = 0xffffffffffffffff;
        *(undefined4 *)(this + 0x28) = 0;
        *(undefined1 (*) [16])this = (undefined1  [16])0x0;
        Ref<NavigationMesh>::operator=(this,(Ref *)*param_1);
        pNVar14 = (NavigationMeshSourceGeometryData3D *)*param_2;
        pNVar3 = *(NavigationMeshSourceGeometryData3D **)(this + 8);
        if (pNVar14 != pNVar3) {
          *(NavigationMeshSourceGeometryData3D **)(this + 8) = pNVar14;
          if ((pNVar14 != (NavigationMeshSourceGeometryData3D *)0x0) &&
             (cVar8 = RefCounted::reference(), cVar8 == '\0')) {
            *(undefined8 *)(this + 8) = 0;
          }
          if ((pNVar3 != (NavigationMeshSourceGeometryData3D *)0x0) &&
             (cVar8 = RefCounted::unreference(), cVar8 != '\0')) {
            memdelete<NavigationMeshSourceGeometryData3D>(pNVar3);
          }
        }
        Callable::operator=((Callable *)(this + 0x10),param_3);
        *(undefined4 *)(this + 0x28) = 0;
        p_Var6 = WorkerThreadPool::singleton;
        if ((bake_from_source_geometry_data_async(Ref<NavigationMesh>,Ref<NavigationMeshSourceGeometryData3D>,Callable_const&)
             ::{lambda()#1}::operator()()::sname == '\0') &&
           (iVar10 = __cxa_guard_acquire(&bake_from_source_geometry_data_async(Ref<NavigationMesh>,Ref<NavigationMeshSourceGeometryData3D>,Callable_const&)
                                          ::{lambda()#1}::operator()()::sname), iVar10 != 0)) {
          _scs_create((char *)&bake_from_source_geometry_data_async(Ref<NavigationMesh>,Ref<NavigationMeshSourceGeometryData3D>,Callable_const&)
                               ::{lambda()#1}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &bake_from_source_geometry_data_async(Ref<NavigationMesh>,Ref<NavigationMeshSourceGeometryData3D>,Callable_const&)
                        ::{lambda()#1}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&bake_from_source_geometry_data_async(Ref<NavigationMesh>,Ref<NavigationMeshSourceGeometryData3D>,Callable_const&)
                               ::{lambda()#1}::operator()()::sname);
        }
        lVar5 = bake_from_source_geometry_data_async(Ref<NavigationMesh>,Ref<NavigationMeshSourceGeometryData3D>,Callable_const&)
                ::{lambda()#1}::operator()()::sname;
        if (bake_from_source_geometry_data_async(Ref<NavigationMesh>,Ref<NavigationMeshSourceGeometryData3D>,Callable_const&)
            ::{lambda()#1}::operator()()::sname == 0) {
LAB_00104b09:
          local_60 = (NavigationMesh *)0x0;
        }
        else {
          pNVar14 = *(NavigationMeshSourceGeometryData3D **)
                     (bake_from_source_geometry_data_async(Ref<NavigationMesh>,Ref<NavigationMeshSourceGeometryData3D>,Callable_const&)
                      ::{lambda()#1}::operator()()::sname + 8);
          local_60 = (NavigationMesh *)0x0;
          if (pNVar14 == (NavigationMeshSourceGeometryData3D *)0x0) {
            plVar2 = (long *)(*(long *)(bake_from_source_geometry_data_async(Ref<NavigationMesh>,Ref<NavigationMeshSourceGeometryData3D>,Callable_const&)
                                        ::{lambda()#1}::operator()()::sname + 0x10) + -0x10);
            if (*(long *)(bake_from_source_geometry_data_async(Ref<NavigationMesh>,Ref<NavigationMeshSourceGeometryData3D>,Callable_const&)
                          ::{lambda()#1}::operator()()::sname + 0x10) == 0) goto LAB_00104b09;
            do {
              lVar4 = *plVar2;
              if (lVar4 == 0) goto LAB_00104b09;
              LOCK();
              lVar12 = *plVar2;
              bVar15 = lVar4 == lVar12;
              if (bVar15) {
                *plVar2 = lVar4 + 1;
                lVar12 = lVar4;
              }
              UNLOCK();
            } while (!bVar15);
            if (lVar12 != -1) {
              local_60 = *(NavigationMesh **)(lVar5 + 0x10);
            }
          }
          else {
            local_50 = strlen((char *)pNVar14);
            local_58 = (NavigationMesh *)pNVar14;
            String::parse_latin1((StrRange *)&local_60);
          }
        }
        uVar11 = WorkerThreadPool::add_native_task
                           (p_Var6,generator_thread_bake,SUB81(this,0),
                            (String *)(ulong)baking_use_high_priority_threads);
        pNVar7 = local_60;
        *(undefined8 *)(this + 0x20) = uVar11;
        if (local_60 != (NavigationMesh *)0x0) {
          LOCK();
          pNVar1 = local_60 + -0x10;
          *(long *)pNVar1 = *(long *)pNVar1 + -1;
          UNLOCK();
          if (*(long *)pNVar1 == 0) {
            local_60 = (NavigationMesh *)0x0;
            Memory::free_static(pNVar7 + -0x10,false);
          }
        }
        HashMap<long,NavMeshGenerator3D::NavMeshGeneratorTask3D*,HashMapHasherDefault,HashMapComparatorDefault<long>,DefaultTypedAllocator<HashMapElement<long,NavMeshGenerator3D::NavMeshGeneratorTask3D*>>>
        ::insert((long *)&local_58,(NavMeshGeneratorTask3D **)generator_tasks,
                 (bool)(SUB81(this,0) + ' '));
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          pthread_mutex_unlock((pthread_mutex_t *)generator_task_mutex);
          return;
        }
        goto LAB_00104cbd;
      }
      _err_print_error("bake_from_source_geometry_data_async",
                       "modules/navigation/3d/nav_mesh_generator_3d.cpp",0xc1,
                       "Method/function failed.",
                       "NavigationMesh is already baking. Wait for current bake to finish.",0,0);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00104cbd:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavMeshGenerator3D::generator_thread_bake(void*) */

void NavMeshGenerator3D::generator_thread_bake(void *param_1)

{
  long *plVar1;
  Object *this;
  Object *pOVar2;
  long lVar3;
  char cVar4;
  long in_FS_OFFSET;
  bool bVar5;
  Object *local_28;
  long local_20;
  
                    /* WARNING: Load size is inaccurate */
  this = *param_1;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((this == (Object *)0x0) || (local_28 = this, cVar4 = RefCounted::reference(), cVar4 == '\0'))
  {
    local_28 = (Object *)0x0;
    generator_bake_from_source_geometry_data(&local_28,(long)param_1 + 8);
  }
  else {
    generator_bake_from_source_geometry_data(&local_28);
    cVar4 = RefCounted::unreference();
    if ((cVar4 != '\0') && (cVar4 = predelete_handler(this), cVar4 != '\0')) {
      if (*(code **)(*(long *)this + 0x140) == NavigationMesh::~NavigationMesh) {
        bVar5 = StringName::configured != '\0';
        *(undefined ***)this = &PTR__initialize_classv_0010b8e8;
        if ((bVar5) && (*(long *)(this + 0x2e8) != 0)) {
          StringName::unref();
        }
        if ((*(long *)(this + 0x298) != 0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) {
          pOVar2 = *(Object **)(this + 0x298);
          cVar4 = predelete_handler(pOVar2);
          if (cVar4 != '\0') {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            Memory::free_static(pOVar2,false);
          }
        }
        CowData<Vector<int>>::_unref((CowData<Vector<int>> *)(this + 0x290));
        if (*(long *)(this + 0x280) != 0) {
          LOCK();
          plVar1 = (long *)(*(long *)(this + 0x280) + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar3 = *(long *)(this + 0x280);
            *(undefined8 *)(this + 0x280) = 0;
            Memory::free_static((void *)(lVar3 + -0x10),false);
          }
        }
        Resource::~Resource((Resource *)this);
      }
      else {
        (**(code **)(*(long *)this + 0x140))(this);
      }
      Memory::free_static(this,false);
    }
  }
  *(undefined4 *)((long)param_1 + 0x28) = 1;
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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



/* Object::_setv(StringName const&, Variant const&) */

undefined8 Object::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Object::_getv(StringName const&, Variant&) const */

undefined8 Object::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Object::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void Object::_get_property_listv(List *param_1,bool param_2)

{
  return;
}



/* Object::_validate_propertyv(PropertyInfo&) const */

void Object::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* Object::_property_can_revertv(StringName const&) const */

undefined8 Object::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* Object::_property_get_revertv(StringName const&, Variant&) const */

undefined8 Object::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Object::_notificationv(int, bool) */

void Object::_notificationv(int param_1,bool param_2)

{
  return;
}



/* Object::_set(StringName const&, Variant const&) */

undefined8 Object::_set(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Object::_get(StringName const&, Variant&) const */

undefined8 Object::_get(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Object::_validate_property(PropertyInfo&) const */

void Object::_validate_property(PropertyInfo *param_1)

{
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



/* Object::is_class_ptr(void*) const */

undefined8 __thiscall Object::is_class_ptr(Object *this,void *param_1)

{
  return CONCAT71(0x10bc,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* NavigationMeshSourceGeometryData3D::is_class_ptr(void*) const */

uint __thiscall
NavigationMeshSourceGeometryData3D::is_class_ptr
          (NavigationMeshSourceGeometryData3D *this,void *param_1)

{
  return (uint)CONCAT71(0x10bc,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10bc,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10bc,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10bc,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* NavigationMeshSourceGeometryData3D::_validate_propertyv(PropertyInfo&) const */

void NavigationMeshSourceGeometryData3D::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* NavigationMeshSourceGeometryData3D::_property_can_revertv(StringName const&) const */

undefined8 NavigationMeshSourceGeometryData3D::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* NavigationMeshSourceGeometryData3D::_property_get_revertv(StringName const&, Variant&) const */

undefined8
NavigationMeshSourceGeometryData3D::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* NavigationMeshSourceGeometryData3D::_notificationv(int, bool) */

void NavigationMeshSourceGeometryData3D::_notificationv(int param_1,bool param_2)

{
  return;
}



/* NavigationMesh::is_class_ptr(void*) const */

uint __thiscall NavigationMesh::is_class_ptr(NavigationMesh *this,void *param_1)

{
  return (uint)CONCAT71(0x10bc,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10bc,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10bc,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10bc,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* NavigationMesh::_property_can_revertv(StringName const&) const */

undefined8 NavigationMesh::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* NavigationMesh::_property_get_revertv(StringName const&, Variant&) const */

undefined8 NavigationMesh::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* NavigationMesh::_notificationv(int, bool) */

void NavigationMesh::_notificationv(int param_1,bool param_2)

{
  return;
}



/* LocalVector<NavMeshGeometryParser3D*, unsigned int, false, false>::~LocalVector() */

void __thiscall
LocalVector<NavMeshGeometryParser3D*,unsigned_int,false,false>::~LocalVector
          (LocalVector<NavMeshGeometryParser3D*,unsigned_int,false,false> *this)

{
  if (*(void **)(this + 8) != (void *)0x0) {
    if (*(int *)this != 0) {
      *(undefined4 *)this = 0;
    }
    Memory::free_static(*(void **)(this + 8),false);
    return;
  }
  return;
}



/* NavigationMesh::_validate_propertyv(PropertyInfo&) const */

void NavigationMesh::_validate_propertyv(PropertyInfo *param_1)

{
  if ((code *)PTR__validate_property_0010f008 != Object::_validate_property) {
    NavigationMesh::_validate_property(param_1);
    return;
  }
  return;
}



/* NavigationMesh::_getv(StringName const&, Variant&) const */

undefined8 NavigationMesh::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__get_0010f010 != Object::_get) {
    uVar1 = NavigationMesh::_get(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* NavigationMesh::_setv(StringName const&, Variant const&) */

undefined8 NavigationMesh::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__set_0010f018 != Object::_set) {
    uVar1 = NavigationMesh::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* Object::_initialize_classv() */

void Object::_initialize_classv(void)

{
  Object::initialize_class();
  return;
}



/* NavigationMeshSourceGeometryData3D::_getv(StringName const&, Variant&) const */

undefined8 NavigationMeshSourceGeometryData3D::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__get_0010f020 != Object::_get) {
    uVar1 = NavigationMeshSourceGeometryData3D::_get(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* NavigationMeshSourceGeometryData3D::_setv(StringName const&, Variant const&) */

undefined8 NavigationMeshSourceGeometryData3D::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__set_0010f028 != Object::_set) {
    uVar1 = NavigationMeshSourceGeometryData3D::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* NavigationMeshSourceGeometryData3D::_get_class_namev() const */

undefined8 * NavigationMeshSourceGeometryData3D::_get_class_namev(void)

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
LAB_001053e3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001053e3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "NavigationMeshSourceGeometryData3D");
      goto LAB_0010544e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,
             "NavigationMeshSourceGeometryData3D");
LAB_0010544e:
  return &_get_class_namev()::_class_name_static;
}



/* HashMap<long, NavMeshGenerator3D::NavMeshGeneratorTask3D*, HashMapHasherDefault,
   HashMapComparatorDefault<long>, DefaultTypedAllocator<HashMapElement<long,
   NavMeshGenerator3D::NavMeshGeneratorTask3D*> > >::~HashMap() */

void __thiscall
HashMap<long,NavMeshGenerator3D::NavMeshGeneratorTask3D*,HashMapHasherDefault,HashMapComparatorDefault<long>,DefaultTypedAllocator<HashMapElement<long,NavMeshGenerator3D::NavMeshGeneratorTask3D*>>>
::~HashMap(HashMap<long,NavMeshGenerator3D::NavMeshGeneratorTask3D*,HashMapHasherDefault,HashMapComparatorDefault<long>,DefaultTypedAllocator<HashMapElement<long,NavMeshGenerator3D::NavMeshGeneratorTask3D*>>>
           *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  pvVar3 = *(void **)(this + 8);
  if (pvVar3 == (void *)0x0) {
    return;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (uVar1 == 0) {
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    }
    else {
      lVar2 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x10) + lVar2) != 0) {
          *(int *)(*(long *)(this + 0x10) + lVar2) = 0;
          Memory::free_static(*(void **)((long)pvVar3 + lVar2 * 2),false);
          pvVar3 = *(void **)(this + 8);
          *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
        }
        lVar2 = lVar2 + 4;
      } while (lVar2 != (ulong)uVar1 << 2);
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
      if (pvVar3 == (void *)0x0) {
        return;
      }
    }
  }
  Memory::free_static(pvVar3,false);
  Memory::free_static(*(void **)(this + 0x10),false);
  return;
}



/* Object::_get_class_namev() const */

undefined8 * Object::_get_class_namev(void)

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
LAB_00105583:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00105583;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"Object");
      goto LAB_001055ee;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"Object");
LAB_001055ee:
  return &_get_class_namev()::_class_name_static;
}



/* NavigationMesh::_get_class_namev() const */

undefined8 * NavigationMesh::_get_class_namev(void)

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
LAB_00105673:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00105673;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"NavigationMesh");
      goto LAB_001056de;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"NavigationMesh");
LAB_001056de:
  return &_get_class_namev()::_class_name_static;
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



/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<int>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<NavigationMeshSourceGeometryData3D::ProjectedObstruction>::_copy_on_write() [clone
   .isra.0] [clone .cold] */

void CowData<NavigationMeshSourceGeometryData3D::ProjectedObstruction>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Vector<int> >::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector<int>>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Object::is_class(String const&) const */

ulong Object::is_class(String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  String *in_RSI;
  long in_FS_OFFSET;
  bool bVar8;
  long local_50;
  char *local_48;
  size_t local_40;
  long local_30;
  
  lVar2 = *(long *)(param_1 + 8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    if (lVar2 == 0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = String::operator==(in_RSI,"Object");
        return uVar7;
      }
LAB_00105b8f:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar3 = *(long *)(lVar2 + 0x20);
    if (lVar3 == 0) {
      local_50 = 0;
    }
    else {
      __s = *(char **)(lVar3 + 8);
      local_50 = 0;
      if (__s == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar3 + 0x10) + -0x10);
        if (*(long *)(lVar3 + 0x10) != 0) {
          do {
            lVar4 = *plVar1;
            if (lVar4 == 0) goto LAB_00105aa3;
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
            local_50 = *(long *)(lVar3 + 0x10);
          }
        }
      }
      else {
        local_40 = strlen(__s);
        local_48 = __s;
        String::parse_latin1((StrRange *)&local_50);
      }
    }
LAB_00105aa3:
    uVar5 = String::operator==(in_RSI,(String *)&local_50);
    lVar3 = local_50;
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
    if ((char)uVar5 != '\0') {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return (ulong)uVar5;
      }
      goto LAB_00105b8f;
    }
    lVar2 = *(long *)(lVar2 + 8);
  } while( true );
}



/* Object::get_class() const */

void Object::get_class(void)

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



/* NavigationMeshSourceGeometryData3D::get_class() const */

void NavigationMeshSourceGeometryData3D::get_class(void)

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



/* NavigationMesh::get_class() const */

void NavigationMesh::get_class(void)

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



/* NavigationMesh::_initialize_classv() */

void NavigationMesh::_initialize_classv(void)

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
        if ((code *)PTR__bind_methods_0010f038 != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_68 = 0;
      local_58 = "RefCounted";
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
      Resource::_bind_methods();
      Resource::initialize_class()::initialized = '\x01';
    }
    local_58 = "Resource";
    local_68 = 0;
    local_50 = 8;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "NavigationMesh";
    local_70 = 0;
    local_50 = 0xe;
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
    if ((code *)PTR__bind_methods_0010f030 != Resource::_bind_methods) {
      NavigationMesh::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationMeshSourceGeometryData3D::_initialize_classv() */

void NavigationMeshSourceGeometryData3D::_initialize_classv(void)

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
        if ((code *)PTR__bind_methods_0010f038 != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_68 = 0;
      local_58 = "RefCounted";
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
      Resource::_bind_methods();
      Resource::initialize_class()::initialized = '\x01';
    }
    local_58 = "Resource";
    local_68 = 0;
    local_50 = 8;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "NavigationMeshSourceGeometryData3D";
    local_70 = 0;
    local_50 = 0x22;
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
    if ((code *)PTR__bind_methods_0010f040 != Resource::_bind_methods) {
      NavigationMeshSourceGeometryData3D::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
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
LAB_00106828:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00106828;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00106846;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00106846:
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



/* Resource::is_class(String const&) const */

undefined8 __thiscall Resource::is_class(Resource *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_00106b1f;
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
LAB_00106b1f:
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
    if (cVar6 != '\0') goto LAB_00106bd3;
  }
  cVar6 = String::operator==(param_1,"Resource");
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
              if (lVar5 == 0) goto LAB_00106cab;
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
LAB_00106cab:
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
      if (cVar6 != '\0') goto LAB_00106bd3;
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
                if (lVar5 == 0) goto LAB_00106d8b;
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
LAB_00106d8b:
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
        if (cVar6 != '\0') goto LAB_00106bd3;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = String::operator==(param_1,"Object");
        return uVar7;
      }
      goto LAB_00106e34;
    }
  }
LAB_00106bd3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00106e34:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationMesh::is_class(String const&) const */

undefined8 __thiscall NavigationMesh::is_class(NavigationMesh *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_00106eaf;
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
LAB_00106eaf:
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
    if (cVar5 != '\0') goto LAB_00106f63;
  }
  cVar5 = String::operator==(param_1,"NavigationMesh");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = Resource::is_class((Resource *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00106f63:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationMeshSourceGeometryData3D::is_class(String const&) const */

undefined8 __thiscall
NavigationMeshSourceGeometryData3D::is_class
          (NavigationMeshSourceGeometryData3D *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0010702f;
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
LAB_0010702f:
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
    if (cVar5 != '\0') goto LAB_001070e3;
  }
  cVar5 = String::operator==(param_1,"NavigationMeshSourceGeometryData3D");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = Resource::is_class((Resource *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_001070e3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
LAB_001072b8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001072b8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001072d5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001072d5:
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



/* NavigationMesh::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall NavigationMesh::_get_property_listv(NavigationMesh *this,List *param_1,bool param_2)

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
    Resource::_get_property_listv((Resource *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "NavigationMesh";
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "NavigationMesh";
  local_98 = 0;
  local_70 = 0xe;
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
LAB_00107708:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00107708;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00107725;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00107725:
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
  StringName::StringName((StringName *)&local_78,"NavigationMesh",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
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



/* NavigationMeshSourceGeometryData3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*,
   bool) const */

void __thiscall
NavigationMeshSourceGeometryData3D::_get_property_listv
          (NavigationMeshSourceGeometryData3D *this,List *param_1,bool param_2)

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
    Resource::_get_property_listv((Resource *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "NavigationMeshSourceGeometryData3D";
  local_70 = 0x22;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "NavigationMeshSourceGeometryData3D";
  local_98 = 0;
  local_70 = 0x22;
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
LAB_00107b58:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00107b58;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00107b75;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00107b75:
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
  StringName::StringName((StringName *)&local_78,"NavigationMeshSourceGeometryData3D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<long, NavMeshGenerator3D::NavMeshGeneratorTask3D*, HashMapHasherDefault,
   HashMapComparatorDefault<long>, DefaultTypedAllocator<HashMapElement<long,
   NavMeshGenerator3D::NavMeshGeneratorTask3D*> > >::insert(long const&,
   NavMeshGenerator3D::NavMeshGeneratorTask3D* const&, bool) */

void HashMap<long,NavMeshGenerator3D::NavMeshGeneratorTask3D*,HashMapHasherDefault,HashMapComparatorDefault<long>,DefaultTypedAllocator<HashMapElement<long,NavMeshGenerator3D::NavMeshGeneratorTask3D*>>>
     ::insert(long *param_1,NavMeshGeneratorTask3D **param_2,bool param_3)

{
  NavMeshGeneratorTask3D *pNVar1;
  NavMeshGeneratorTask3D *pNVar2;
  undefined8 uVar3;
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
  undefined1 auVar27 [16];
  NavMeshGeneratorTask3D *pNVar28;
  uint uVar29;
  uint uVar30;
  ulong uVar31;
  NavMeshGeneratorTask3D *pNVar32;
  NavMeshGeneratorTask3D *pNVar33;
  undefined8 *in_RCX;
  int iVar34;
  undefined7 in_register_00000011;
  long *plVar35;
  long lVar36;
  long lVar37;
  uint uVar38;
  long lVar39;
  undefined8 uVar40;
  ulong uVar41;
  uint uVar42;
  char in_R8B;
  uint uVar43;
  uint uVar44;
  ulong uVar45;
  NavMeshGeneratorTask3D *pNVar46;
  NavMeshGeneratorTask3D *local_80;
  
  plVar35 = (long *)CONCAT71(in_register_00000011,param_3);
  uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 5) * 4);
  local_80 = param_2[1];
  if (local_80 == (NavMeshGeneratorTask3D *)0x0) {
    uVar45 = (ulong)uVar38;
    uVar31 = uVar45 * 4;
    uVar41 = uVar45 * 8;
    pNVar33 = (NavMeshGeneratorTask3D *)Memory::alloc_static(uVar31,false);
    param_2[2] = pNVar33;
    local_80 = (NavMeshGeneratorTask3D *)Memory::alloc_static(uVar41,false);
    param_2[1] = local_80;
    if (uVar38 != 0) {
      pNVar33 = param_2[2];
      if ((pNVar33 < local_80 + uVar41) && (local_80 < pNVar33 + uVar31)) {
        uVar31 = 0;
        do {
          *(undefined4 *)(pNVar33 + uVar31 * 4) = 0;
          *(undefined8 *)(local_80 + uVar31 * 8) = 0;
          uVar31 = uVar31 + 1;
        } while (uVar45 != uVar31);
        goto LAB_00108ddb;
      }
      memset(pNVar33,0,uVar31);
      memset(local_80,0,uVar41);
      iVar34 = *(int *)((long)param_2 + 0x2c);
      lVar39 = *plVar35;
      goto LAB_00108de7;
    }
    iVar34 = *(int *)((long)param_2 + 0x2c);
    lVar39 = *plVar35;
    if (local_80 != (NavMeshGeneratorTask3D *)0x0) goto LAB_00108de7;
  }
  else {
LAB_00108ddb:
    iVar34 = *(int *)((long)param_2 + 0x2c);
    lVar39 = *plVar35;
LAB_00108de7:
    if (iVar34 != 0) {
      uVar41 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 5) * 4));
      lVar37 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 5) * 8);
      uVar31 = lVar39 * 0x3ffff - 1;
      uVar31 = (uVar31 ^ uVar31 >> 0x1f) * 0x15;
      uVar31 = (uVar31 ^ uVar31 >> 0xb) * 0x41;
      uVar31 = uVar31 >> 0x16 ^ uVar31;
      uVar45 = uVar31 & 0xffffffff;
      if ((int)uVar31 == 0) {
        uVar45 = 1;
      }
      uVar44 = 0;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar45 * lVar37;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar41;
      lVar36 = SUB168(auVar4 * auVar16,8);
      uVar42 = *(uint *)(param_2[2] + lVar36 * 4);
      uVar30 = SUB164(auVar4 * auVar16,8);
      if (uVar42 != 0) {
        do {
          if (((uint)uVar45 == uVar42) &&
             (*(long *)(*(long *)(local_80 + lVar36 * 8) + 0x10) == lVar39)) {
            pNVar33 = *(NavMeshGeneratorTask3D **)(local_80 + (ulong)uVar30 * 8);
            *(undefined8 *)(pNVar33 + 0x18) = *in_RCX;
            goto LAB_00109281;
          }
          uVar44 = uVar44 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)(uVar30 + 1) * lVar37;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar41;
          lVar36 = SUB168(auVar5 * auVar17,8);
          uVar42 = *(uint *)(param_2[2] + lVar36 * 4);
          uVar30 = SUB164(auVar5 * auVar17,8);
        } while ((uVar42 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar42 * lVar37, auVar18._8_8_ = 0,
                auVar18._0_8_ = uVar41, auVar7._8_8_ = 0,
                auVar7._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                                 (ulong)*(uint *)(param_2 + 5) * 4) + uVar30) -
                                      SUB164(auVar6 * auVar18,8)) * lVar37, auVar19._8_8_ = 0,
                auVar19._0_8_ = uVar41, uVar44 <= SUB164(auVar7 * auVar19,8)));
      }
    }
  }
  if ((float)uVar38 * __LC23 < (float)(iVar34 + 1)) {
    uVar38 = *(uint *)(param_2 + 5);
    if (uVar38 == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      pNVar33 = (NavMeshGeneratorTask3D *)0x0;
      goto LAB_00109281;
    }
    uVar31 = (ulong)(uVar38 + 1);
    *(undefined4 *)((long)param_2 + 0x2c) = 0;
    uVar42 = *(uint *)(hash_table_size_primes + (ulong)uVar38 * 4);
    if (uVar38 + 1 < 2) {
      uVar31 = 2;
    }
    uVar38 = *(uint *)(hash_table_size_primes + uVar31 * 4);
    uVar45 = (ulong)uVar38;
    *(int *)(param_2 + 5) = (int)uVar31;
    pNVar33 = param_2[2];
    uVar31 = uVar45 * 4;
    uVar41 = uVar45 * 8;
    pNVar32 = (NavMeshGeneratorTask3D *)Memory::alloc_static(uVar31,false);
    param_2[2] = pNVar32;
    pNVar32 = (NavMeshGeneratorTask3D *)Memory::alloc_static(uVar41,false);
    param_2[1] = pNVar32;
    if (uVar38 != 0) {
      pNVar1 = param_2[2];
      if ((pNVar1 < pNVar32 + uVar41) && (pNVar32 < pNVar1 + uVar31)) {
        uVar31 = 0;
        do {
          *(undefined4 *)(pNVar1 + uVar31 * 4) = 0;
          *(undefined8 *)(pNVar32 + uVar31 * 8) = 0;
          uVar31 = uVar31 + 1;
        } while (uVar45 != uVar31);
      }
      else {
        memset(pNVar1,0,uVar31);
        memset(pNVar32,0,uVar41);
      }
    }
    if (uVar42 != 0) {
      uVar31 = 0;
      do {
        uVar38 = *(uint *)(pNVar33 + uVar31 * 4);
        if (uVar38 != 0) {
          pNVar2 = param_2[2];
          uVar43 = 0;
          uVar30 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 5) * 4);
          uVar41 = CONCAT44(0,uVar30);
          lVar39 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 5) * 8);
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)uVar38 * lVar39;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = uVar41;
          lVar37 = SUB168(auVar8 * auVar20,8);
          pNVar1 = pNVar2 + lVar37 * 4;
          iVar34 = SUB164(auVar8 * auVar20,8);
          uVar44 = *(uint *)pNVar1;
          uVar3 = *(undefined8 *)(local_80 + uVar31 * 8);
          while (uVar44 != 0) {
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)uVar44 * lVar39;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar41;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)((uVar30 + iVar34) - SUB164(auVar9 * auVar21,8)) * lVar39;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar41;
            uVar29 = SUB164(auVar10 * auVar22,8);
            uVar40 = uVar3;
            if (uVar29 < uVar43) {
              *(uint *)pNVar1 = uVar38;
              uVar40 = *(undefined8 *)(pNVar32 + lVar37 * 8);
              *(undefined8 *)(pNVar32 + lVar37 * 8) = uVar3;
              uVar38 = uVar44;
              uVar43 = uVar29;
            }
            uVar43 = uVar43 + 1;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)(iVar34 + 1) * lVar39;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar41;
            lVar37 = SUB168(auVar11 * auVar23,8);
            pNVar1 = pNVar2 + lVar37 * 4;
            iVar34 = SUB164(auVar11 * auVar23,8);
            uVar3 = uVar40;
            uVar44 = *(uint *)pNVar1;
          }
          *(undefined8 *)(pNVar32 + lVar37 * 8) = uVar3;
          *(uint *)pNVar1 = uVar38;
          *(int *)((long)param_2 + 0x2c) = *(int *)((long)param_2 + 0x2c) + 1;
        }
        uVar31 = uVar31 + 1;
      } while (uVar31 != uVar42);
      Memory::free_static(local_80,false);
      Memory::free_static(pNVar33,false);
    }
  }
  lVar39 = *plVar35;
  uVar3 = *in_RCX;
  pNVar33 = (NavMeshGeneratorTask3D *)operator_new(0x20,"");
  *(long *)(pNVar33 + 0x10) = lVar39;
  *(undefined8 *)(pNVar33 + 0x18) = uVar3;
  *(undefined1 (*) [16])pNVar33 = (undefined1  [16])0x0;
  pNVar32 = param_2[4];
  if (pNVar32 == (NavMeshGeneratorTask3D *)0x0) {
    param_2[3] = pNVar33;
    param_2[4] = pNVar33;
  }
  else if (in_R8B == '\0') {
    *(NavMeshGeneratorTask3D **)pNVar32 = pNVar33;
    *(NavMeshGeneratorTask3D **)(pNVar33 + 8) = pNVar32;
    param_2[4] = pNVar33;
  }
  else {
    pNVar32 = param_2[3];
    *(NavMeshGeneratorTask3D **)(pNVar32 + 8) = pNVar33;
    *(NavMeshGeneratorTask3D **)pNVar33 = pNVar32;
    param_2[3] = pNVar33;
  }
  pNVar32 = param_2[2];
  uVar31 = *plVar35 * 0x3ffff - 1;
  uVar31 = (uVar31 ^ uVar31 >> 0x1f) * 0x15;
  uVar31 = (uVar31 ^ uVar31 >> 0xb) * 0x41;
  uVar31 = uVar31 >> 0x16 ^ uVar31;
  uVar41 = uVar31 & 0xffffffff;
  if ((int)uVar31 == 0) {
    uVar41 = 1;
  }
  uVar44 = 0;
  uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 5) * 4);
  uVar31 = CONCAT44(0,uVar38);
  uVar30 = (uint)uVar41;
  lVar39 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 5) * 8);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar41 * lVar39;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar31;
  lVar37 = SUB168(auVar12 * auVar24,8);
  pNVar2 = param_2[1];
  pNVar1 = pNVar32 + lVar37 * 4;
  iVar34 = SUB164(auVar12 * auVar24,8);
  uVar42 = *(uint *)pNVar1;
  pNVar28 = pNVar33;
  while (uVar42 != 0) {
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)uVar42 * lVar39;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar31;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)((uVar38 + iVar34) - SUB164(auVar13 * auVar25,8)) * lVar39;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar31;
    uVar30 = SUB164(auVar14 * auVar26,8);
    pNVar46 = pNVar28;
    if (uVar30 < uVar44) {
      *(uint *)pNVar1 = (uint)uVar41;
      uVar41 = (ulong)uVar42;
      pNVar1 = pNVar2 + lVar37 * 8;
      pNVar46 = *(NavMeshGeneratorTask3D **)pNVar1;
      *(NavMeshGeneratorTask3D **)pNVar1 = pNVar28;
      uVar44 = uVar30;
    }
    uVar30 = (uint)uVar41;
    uVar44 = uVar44 + 1;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)(iVar34 + 1) * lVar39;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar31;
    lVar37 = SUB168(auVar15 * auVar27,8);
    pNVar1 = pNVar32 + lVar37 * 4;
    iVar34 = SUB164(auVar15 * auVar27,8);
    pNVar28 = pNVar46;
    uVar42 = *(uint *)pNVar1;
  }
  *(NavMeshGeneratorTask3D **)(pNVar2 + lVar37 * 8) = pNVar28;
  *(uint *)pNVar1 = uVar30;
  *(int *)((long)param_2 + 0x2c) = *(int *)((long)param_2 + 0x2c) + 1;
LAB_00109281:
  *param_1 = (long)pNVar33;
  return;
}



/* HashMap<Vector3, int, HashMapHasherDefault, HashMapComparatorDefault<Vector3>,
   DefaultTypedAllocator<HashMapElement<Vector3, int> > >::~HashMap() */

void __thiscall
HashMap<Vector3,int,HashMapHasherDefault,HashMapComparatorDefault<Vector3>,DefaultTypedAllocator<HashMapElement<Vector3,int>>>
::~HashMap(HashMap<Vector3,int,HashMapHasherDefault,HashMapComparatorDefault<Vector3>,DefaultTypedAllocator<HashMapElement<Vector3,int>>>
           *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  pvVar3 = *(void **)(this + 8);
  if (pvVar3 == (void *)0x0) {
    return;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (uVar1 == 0) {
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    }
    else {
      lVar2 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x10) + lVar2) != 0) {
          *(int *)(*(long *)(this + 0x10) + lVar2) = 0;
          Memory::free_static(*(void **)((long)pvVar3 + lVar2 * 2),false);
          pvVar3 = *(void **)(this + 8);
          *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
        }
        lVar2 = lVar2 + 4;
      } while (lVar2 != (ulong)uVar1 << 2);
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
      if (pvVar3 == (void *)0x0) {
        return;
      }
    }
  }
  Memory::free_static(pvVar3,false);
  Memory::free_static(*(void **)(this + 0x10),false);
  return;
}



/* HashMap<Vector3, int, HashMapHasherDefault, HashMapComparatorDefault<Vector3>,
   DefaultTypedAllocator<HashMapElement<Vector3, int> > >::_lookup_pos(Vector3 const&, unsigned
   int&) const */

undefined8 __thiscall
HashMap<Vector3,int,HashMapHasherDefault,HashMapComparatorDefault<Vector3>,DefaultTypedAllocator<HashMapElement<Vector3,int>>>
::_lookup_pos(HashMap<Vector3,int,HashMapHasherDefault,HashMapComparatorDefault<Vector3>,DefaultTypedAllocator<HashMapElement<Vector3,int>>>
              *this,Vector3 *param_1,uint *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  
  if (*(long *)(this + 8) != 0) {
    if (*(int *)(this + 0x2c) == 0) {
      return 0;
    }
    fVar1 = *(float *)param_1;
    uVar4 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar13 = 0x3413905a;
    if ((fVar1 != 0.0) && (uVar13 = 0x22afa5cc, !NAN(fVar1))) {
      uVar13 = ((int)fVar1 * 0x16a88000 | (uint)((int)fVar1 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
               0x7f07c65;
      uVar13 = (uVar13 << 0xd | uVar13 >> 0x13) * 5 + 0xe6546b64;
    }
    fVar2 = *(float *)(param_1 + 4);
    if (fVar2 != 0.0) {
      if (NAN(fVar2)) {
        uVar13 = uVar13 ^ 0x2db3efa0;
      }
      else {
        uVar13 = uVar13 ^ ((int)fVar2 * 0x16a88000 | (uint)((int)fVar2 * -0x3361d2af) >> 0x11) *
                          0x1b873593;
      }
    }
    fVar3 = *(float *)(param_1 + 8);
    uVar13 = (uVar13 << 0xd | uVar13 >> 0x13) * 5 + 0xe6546b64;
    if (fVar3 != 0.0) {
      if (NAN(fVar3)) {
        uVar13 = uVar13 ^ 0x2db3efa0;
      }
      else {
        uVar13 = uVar13 ^ ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) *
                          0x1b873593;
      }
    }
    uVar13 = (uVar13 << 0xd | uVar13 >> 0x13) * 5 + 0xe6546b64;
    uVar13 = (uVar13 >> 0x10 ^ uVar13) * -0x7a143595;
    uVar13 = (uVar13 ^ uVar13 >> 0xd) * -0x3d4d51cb;
    uVar19 = uVar13 ^ uVar13 >> 0x10;
    if (uVar13 == uVar13 >> 0x10) {
      uVar19 = 1;
      uVar15 = uVar4;
    }
    else {
      uVar15 = uVar19 * uVar4;
    }
    uVar17 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4));
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar17;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar15;
    lVar16 = SUB168(auVar5 * auVar9,8);
    uVar13 = *(uint *)(*(long *)(this + 0x10) + lVar16 * 4);
    uVar14 = SUB164(auVar5 * auVar9,8);
    if (uVar13 != 0) {
      uVar18 = 0;
      do {
        if (uVar19 == uVar13) {
          lVar16 = *(long *)(*(long *)(this + 8) + lVar16 * 8);
          if ((((fVar1 == *(float *)(lVar16 + 0x10)) ||
               ((NAN(*(float *)(lVar16 + 0x10)) && (NAN(fVar1))))) &&
              ((fVar2 == *(float *)(lVar16 + 0x14) ||
               ((NAN(*(float *)(lVar16 + 0x14)) && (NAN(fVar2))))))) &&
             ((fVar3 == *(float *)(lVar16 + 0x18) ||
              ((NAN(fVar3) && (NAN(*(float *)(lVar16 + 0x18)))))))) {
            *param_2 = uVar14;
            return 1;
          }
        }
        uVar18 = uVar18 + 1;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = (uVar14 + 1) * uVar4;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = uVar17;
        lVar16 = SUB168(auVar6 * auVar10,8);
        uVar13 = *(uint *)(*(long *)(this + 0x10) + lVar16 * 4);
        uVar14 = SUB164(auVar6 * auVar10,8);
      } while ((uVar13 != 0) &&
              (auVar7._8_8_ = 0, auVar7._0_8_ = uVar13 * uVar4, auVar11._8_8_ = 0,
              auVar11._0_8_ = uVar17, auVar8._8_8_ = 0,
              auVar8._0_8_ = ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4)
                              + uVar14) - SUB164(auVar7 * auVar11,8)) * uVar4, auVar12._8_8_ = 0,
              auVar12._0_8_ = uVar17, uVar18 <= SUB164(auVar8 * auVar12,8)));
    }
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<Vector3, int, HashMapHasherDefault, HashMapComparatorDefault<Vector3>,
   DefaultTypedAllocator<HashMapElement<Vector3, int> > >::operator[](Vector3 const&) */

undefined1 * __thiscall
HashMap<Vector3,int,HashMapHasherDefault,HashMapComparatorDefault<Vector3>,DefaultTypedAllocator<HashMapElement<Vector3,int>>>
::operator[](HashMap<Vector3,int,HashMapHasherDefault,HashMapComparatorDefault<Vector3>,DefaultTypedAllocator<HashMapElement<Vector3,int>>>
             *this,Vector3 *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  float fVar3;
  uint uVar4;
  void *pvVar5;
  void *__s;
  long lVar6;
  long lVar7;
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
  undefined1 (*pauVar24) [16];
  char cVar25;
  uint uVar26;
  uint uVar27;
  ulong uVar28;
  undefined8 uVar29;
  void *__s_00;
  undefined1 (*pauVar30) [16];
  void *pvVar31;
  int iVar32;
  long lVar33;
  long lVar34;
  ulong uVar35;
  undefined8 uVar36;
  uint uVar37;
  uint uVar38;
  ulong uVar39;
  undefined1 (*pauVar40) [16];
  long in_FS_OFFSET;
  uint local_c8;
  uint local_70;
  uint local_6c [5];
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = 0;
  cVar25 = _lookup_pos(this,param_1,&local_70);
  if (cVar25 == '\0') {
    uVar26 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (*(long *)(this + 8) == 0) {
      uVar35 = (ulong)uVar26;
      uVar28 = uVar35 * 4;
      uVar39 = uVar35 * 8;
      uVar29 = Memory::alloc_static(uVar28,false);
      *(undefined8 *)(this + 0x10) = uVar29;
      pvVar31 = (void *)Memory::alloc_static(uVar39,false);
      *(void **)(this + 8) = pvVar31;
      if (uVar26 != 0) {
        pvVar5 = *(void **)(this + 0x10);
        if ((pvVar5 < (void *)((long)pvVar31 + uVar39)) &&
           (pvVar31 < (void *)((long)pvVar5 + uVar28))) {
          uVar28 = 0;
          do {
            *(undefined4 *)((long)pvVar5 + uVar28 * 4) = 0;
            *(undefined8 *)((long)pvVar31 + uVar28 * 8) = 0;
            uVar28 = uVar28 + 1;
          } while (uVar35 != uVar28);
        }
        else {
          memset(pvVar5,0,uVar28);
          memset(pvVar31,0,uVar39);
        }
      }
    }
    local_6c[0] = 0;
    cVar25 = _lookup_pos(this,param_1,local_6c);
    if (cVar25 == '\0') {
      if ((float)uVar26 * __LC23 < (float)(*(int *)(this + 0x2c) + 1)) {
        uVar26 = *(uint *)(this + 0x28);
        if (uVar26 == 0x1c) {
          pauVar30 = (undefined1 (*) [16])0x0;
          _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                           "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                           ,"Hash table maximum capacity reached, aborting insertion.",0,0);
          goto LAB_00109c07;
        }
        uVar28 = (ulong)(uVar26 + 1);
        *(undefined4 *)(this + 0x2c) = 0;
        uVar27 = *(uint *)(hash_table_size_primes + (ulong)uVar26 * 4);
        if (uVar26 + 1 < 2) {
          uVar28 = 2;
        }
        uVar26 = *(uint *)(hash_table_size_primes + uVar28 * 4);
        uVar35 = (ulong)uVar26;
        *(int *)(this + 0x28) = (int)uVar28;
        pvVar31 = *(void **)(this + 8);
        uVar28 = uVar35 * 4;
        uVar39 = uVar35 * 8;
        pvVar5 = *(void **)(this + 0x10);
        uVar29 = Memory::alloc_static(uVar28,false);
        *(undefined8 *)(this + 0x10) = uVar29;
        __s_00 = (void *)Memory::alloc_static(uVar39,false);
        *(void **)(this + 8) = __s_00;
        if (uVar26 != 0) {
          __s = *(void **)(this + 0x10);
          if ((__s < (void *)((long)__s_00 + uVar39)) && (__s_00 < (void *)((long)__s + uVar28))) {
            uVar28 = 0;
            do {
              *(undefined4 *)((long)__s + uVar28 * 4) = 0;
              *(undefined8 *)((long)__s_00 + uVar28 * 8) = 0;
              uVar28 = uVar28 + 1;
            } while (uVar35 != uVar28);
          }
          else {
            memset(__s,0,uVar28);
            memset(__s_00,0,uVar39);
          }
        }
        if (uVar27 != 0) {
          uVar28 = 0;
          do {
            uVar26 = *(uint *)((long)pvVar5 + uVar28 * 4);
            if (uVar26 != 0) {
              lVar6 = *(long *)(this + 0x10);
              uVar37 = 0;
              uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
              uVar39 = CONCAT44(0,uVar4);
              lVar7 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
              auVar8._8_8_ = 0;
              auVar8._0_8_ = (ulong)uVar26 * lVar7;
              auVar16._8_8_ = 0;
              auVar16._0_8_ = uVar39;
              lVar33 = SUB168(auVar8 * auVar16,8);
              puVar1 = (uint *)(lVar6 + lVar33 * 4);
              iVar32 = SUB164(auVar8 * auVar16,8);
              uVar38 = *puVar1;
              uVar29 = *(undefined8 *)((long)pvVar31 + uVar28 * 8);
              while (uVar38 != 0) {
                auVar9._8_8_ = 0;
                auVar9._0_8_ = (ulong)uVar38 * lVar7;
                auVar17._8_8_ = 0;
                auVar17._0_8_ = uVar39;
                auVar10._8_8_ = 0;
                auVar10._0_8_ = (ulong)((uVar4 + iVar32) - SUB164(auVar9 * auVar17,8)) * lVar7;
                auVar18._8_8_ = 0;
                auVar18._0_8_ = uVar39;
                local_c8 = SUB164(auVar10 * auVar18,8);
                uVar36 = uVar29;
                if (local_c8 < uVar37) {
                  *puVar1 = uVar26;
                  puVar2 = (undefined8 *)((long)__s_00 + lVar33 * 8);
                  uVar36 = *puVar2;
                  *puVar2 = uVar29;
                  uVar26 = uVar38;
                  uVar37 = local_c8;
                }
                uVar37 = uVar37 + 1;
                auVar11._8_8_ = 0;
                auVar11._0_8_ = (ulong)(iVar32 + 1) * lVar7;
                auVar19._8_8_ = 0;
                auVar19._0_8_ = uVar39;
                lVar33 = SUB168(auVar11 * auVar19,8);
                puVar1 = (uint *)(lVar6 + lVar33 * 4);
                iVar32 = SUB164(auVar11 * auVar19,8);
                uVar29 = uVar36;
                uVar38 = *puVar1;
              }
              *(undefined8 *)((long)__s_00 + lVar33 * 8) = uVar29;
              *puVar1 = uVar26;
              *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
            }
            uVar28 = uVar28 + 1;
          } while (uVar28 != uVar27);
          Memory::free_static(pvVar31,false);
          Memory::free_static(pvVar5,false);
        }
      }
      local_58 = *(undefined8 *)param_1;
      local_50 = *(undefined4 *)(param_1 + 8);
      pauVar30 = (undefined1 (*) [16])operator_new(0x20,"");
      *pauVar30 = (undefined1  [16])0x0;
      *(undefined4 *)(pauVar30[1] + 0xc) = 0;
      *(undefined8 *)pauVar30[1] = local_58;
      *(undefined4 *)(pauVar30[1] + 8) = local_50;
      puVar2 = *(undefined8 **)(this + 0x20);
      if (puVar2 == (undefined8 *)0x0) {
        *(undefined1 (**) [16])(this + 0x18) = pauVar30;
      }
      else {
        *puVar2 = pauVar30;
        *(undefined8 **)(*pauVar30 + 8) = puVar2;
      }
      fVar3 = *(float *)param_1;
      *(undefined1 (**) [16])(this + 0x20) = pauVar30;
      uVar26 = 0x3413905a;
      if ((fVar3 != 0.0) && (uVar26 = 0x22afa5cc, !NAN(fVar3))) {
        uVar26 = ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
                 0x7f07c65;
        uVar26 = (uVar26 << 0xd | uVar26 >> 0x13) * 5 + 0xe6546b64;
      }
      fVar3 = *(float *)(param_1 + 4);
      if (fVar3 != 0.0) {
        if (NAN(fVar3)) {
          uVar26 = uVar26 ^ 0x2db3efa0;
        }
        else {
          uVar26 = uVar26 ^ ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) *
                            0x1b873593;
        }
      }
      fVar3 = *(float *)(param_1 + 8);
      uVar26 = (uVar26 << 0xd | uVar26 >> 0x13) * 5 + 0xe6546b64;
      if (fVar3 != 0.0) {
        if (NAN(fVar3)) {
          uVar26 = uVar26 ^ 0x2db3efa0;
        }
        else {
          uVar26 = uVar26 ^ ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) *
                            0x1b873593;
        }
      }
      uVar26 = (uVar26 << 0xd | uVar26 >> 0x13) * 5 + 0xe6546b64;
      uVar26 = (uVar26 >> 0x10 ^ uVar26) * -0x7a143595;
      uVar27 = (uVar26 ^ uVar26 >> 0xd) * -0x3d4d51cb;
      uVar26 = uVar27 ^ uVar27 >> 0x10;
      if (uVar27 == uVar27 >> 0x10) {
        uVar28 = 1;
        uVar26 = 1;
      }
      else {
        uVar28 = (ulong)uVar26;
      }
      uVar38 = 0;
      lVar6 = *(long *)(this + 0x10);
      lVar7 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar27 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      uVar39 = CONCAT44(0,uVar27);
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar28 * lVar7;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar39;
      lVar34 = SUB168(auVar12 * auVar20,8);
      lVar33 = *(long *)(this + 8);
      puVar1 = (uint *)(lVar6 + lVar34 * 4);
      iVar32 = SUB164(auVar12 * auVar20,8);
      uVar4 = *puVar1;
      pauVar24 = pauVar30;
      while (uVar4 != 0) {
        auVar13._8_8_ = 0;
        auVar13._0_8_ = (ulong)uVar4 * lVar7;
        auVar21._8_8_ = 0;
        auVar21._0_8_ = uVar39;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = (ulong)((uVar27 + iVar32) - SUB164(auVar13 * auVar21,8)) * lVar7;
        auVar22._8_8_ = 0;
        auVar22._0_8_ = uVar39;
        local_c8 = SUB164(auVar14 * auVar22,8);
        pauVar40 = pauVar24;
        if (local_c8 < uVar38) {
          *puVar1 = uVar26;
          puVar2 = (undefined8 *)(lVar33 + lVar34 * 8);
          pauVar40 = (undefined1 (*) [16])*puVar2;
          *puVar2 = pauVar24;
          uVar26 = uVar4;
          uVar38 = local_c8;
        }
        uVar38 = uVar38 + 1;
        auVar15._8_8_ = 0;
        auVar15._0_8_ = (ulong)(iVar32 + 1) * lVar7;
        auVar23._8_8_ = 0;
        auVar23._0_8_ = uVar39;
        lVar34 = SUB168(auVar15 * auVar23,8);
        puVar1 = (uint *)(lVar6 + lVar34 * 4);
        iVar32 = SUB164(auVar15 * auVar23,8);
        pauVar24 = pauVar40;
        uVar4 = *puVar1;
      }
      *(undefined1 (**) [16])(lVar33 + lVar34 * 8) = pauVar24;
      *puVar1 = uVar26;
      *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
    }
    else {
      pauVar30 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)local_6c[0] * 8);
      *(undefined4 *)(pauVar30[1] + 0xc) = 0;
    }
  }
  else {
    pauVar30 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)local_70 * 8);
  }
LAB_00109c07:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pauVar30[1] + 0xc;
}



/* CowData<Vector3>::_realloc(long) */

undefined8 __thiscall CowData<Vector3>::_realloc(CowData<Vector3> *this,long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           Memory::realloc_static((void *)(*(long *)this + -0x10),param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,"Parameter \"mem_new\" is null.",0,
                   0);
  return 6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<Vector3>::resize<false>(long) */

undefined8 __thiscall CowData<Vector3>::resize<false>(CowData<Vector3> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  lVar3 = *(long *)this;
  if (lVar3 == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar8 = 0;
    lVar3 = 0;
  }
  else {
    lVar8 = *(long *)(lVar3 + -8);
    if (param_1 == lVar8) {
      return 0;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar3 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return 0;
      }
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return 0;
    }
    _copy_on_write(this);
    lVar3 = lVar8 * 0xc;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 0xc == 0) {
LAB_0010a180:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 0xc - 1;
  uVar4 = uVar4 >> 1 | uVar4;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar7 = uVar4 + 1;
  if (lVar7 == 0) goto LAB_0010a180;
  if (param_1 <= lVar8) {
    if ((lVar7 != lVar3) && (uVar6 = _realloc(this,lVar7), (int)uVar6 != 0)) {
      return uVar6;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
    _DAT_00000000 = 0;
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (lVar7 == lVar3) {
LAB_0010a0ec:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar9[-1];
    if (param_1 <= lVar3) goto LAB_0010a07b;
  }
  else {
    if (lVar8 != 0) {
      uVar6 = _realloc(this,lVar7);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      goto LAB_0010a0ec;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar9 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar9;
    lVar3 = 0;
  }
  memset((void *)((long)puVar9 + lVar3 * 0xc),0,(param_1 - lVar3) * 0xc);
LAB_0010a07b:
  puVar9[-1] = param_1;
  return 0;
}



/* CowData<int>::_realloc(long) */

undefined8 __thiscall CowData<int>::_realloc(CowData<int> *this,long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           Memory::realloc_static((void *)(*(long *)this + -0x10),param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,"Parameter \"mem_new\" is null.",0,
                   0);
  return 6;
}



/* CowData<NavigationMeshSourceGeometryData3D::ProjectedObstruction>::_unref() */

void __thiscall
CowData<NavigationMeshSourceGeometryData3D::ProjectedObstruction>::_unref
          (CowData<NavigationMeshSourceGeometryData3D::ProjectedObstruction> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    lVar2 = *(long *)this;
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar2 + -8);
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        lVar6 = lVar2;
        do {
          if (*(long *)(lVar6 + 8) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 8) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar6 + 8);
              *(undefined8 *)(lVar6 + 8) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 0x20;
        } while (lVar3 != lVar7);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* NavigationMeshSourceGeometryData3D::~NavigationMeshSourceGeometryData3D() */

void __thiscall
NavigationMeshSourceGeometryData3D::~NavigationMeshSourceGeometryData3D
          (NavigationMeshSourceGeometryData3D *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0010b710;
  NavigationMeshSourceGeometryData3D::clear();
  CowData<NavigationMeshSourceGeometryData3D::ProjectedObstruction>::_unref
            ((CowData<NavigationMeshSourceGeometryData3D::ProjectedObstruction> *)(this + 0x2c0));
  if (*(long *)(this + 0x290) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x290) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x290);
      *(undefined8 *)(this + 0x290) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x280) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x280) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x280);
      *(undefined8 *)(this + 0x280) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      Resource::~Resource((Resource *)this);
      return;
    }
  }
  Resource::~Resource((Resource *)this);
  return;
}



/* NavigationMeshSourceGeometryData3D::~NavigationMeshSourceGeometryData3D() */

void __thiscall
NavigationMeshSourceGeometryData3D::~NavigationMeshSourceGeometryData3D
          (NavigationMeshSourceGeometryData3D *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0010b710;
  NavigationMeshSourceGeometryData3D::clear();
  CowData<NavigationMeshSourceGeometryData3D::ProjectedObstruction>::_unref
            ((CowData<NavigationMeshSourceGeometryData3D::ProjectedObstruction> *)(this + 0x2c0));
  if (*(long *)(this + 0x290) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x290) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x290);
      *(undefined8 *)(this + 0x290) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x280) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x280) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x280);
      *(undefined8 *)(this + 0x280) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x2f8);
  return;
}



/* CowData<Vector<int> >::_unref() */

void __thiscall CowData<Vector<int>>::_unref(CowData<Vector<int>> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    lVar2 = *(long *)this;
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar2 + -8);
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        lVar6 = lVar2;
        do {
          if (*(long *)(lVar6 + 8) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 8) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar6 + 8);
              *(undefined8 *)(lVar6 + 8) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 0x10;
        } while (lVar3 != lVar7);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* NavigationMesh::~NavigationMesh() */

void __thiscall NavigationMesh::~NavigationMesh(NavigationMesh *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  bool bVar5;
  
  bVar5 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_0010b8e8;
  if ((bVar5) && (*(long *)(this + 0x2e8) != 0)) {
    StringName::unref();
  }
  if (*(long *)(this + 0x298) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x298);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  CowData<Vector<int>>::_unref((CowData<Vector<int>> *)(this + 0x290));
  if (*(long *)(this + 0x280) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x280) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x280);
      *(undefined8 *)(this + 0x280) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      Resource::~Resource((Resource *)this);
      return;
    }
  }
  Resource::~Resource((Resource *)this);
  return;
}



/* NavigationMesh::~NavigationMesh() */

void __thiscall NavigationMesh::~NavigationMesh(NavigationMesh *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  bool bVar5;
  
  bVar5 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_0010b8e8;
  if ((bVar5) && (*(long *)(this + 0x2e8) != 0)) {
    StringName::unref();
  }
  if (*(long *)(this + 0x298) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x298);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  CowData<Vector<int>>::_unref((CowData<Vector<int>> *)(this + 0x290));
  if (*(long *)(this + 0x280) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x280) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x280);
      *(undefined8 *)(this + 0x280) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x318);
  return;
}



/* HashSet<Ref<NavigationMesh>, HashMapHasherDefault, HashMapComparatorDefault<Ref<NavigationMesh> >
   >::~HashSet() */

void __thiscall
HashSet<Ref<NavigationMesh>,HashMapHasherDefault,HashMapComparatorDefault<Ref<NavigationMesh>>>::
~HashSet(HashSet<Ref<NavigationMesh>,HashMapHasherDefault,HashMapComparatorDefault<Ref<NavigationMesh>>>
         *this)

{
  long *plVar1;
  Object *this_00;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  long lVar5;
  void *pvVar6;
  bool bVar7;
  
  pvVar6 = *(void **)this;
  if (pvVar6 == (void *)0x0) {
    return;
  }
  if ((*(int *)(this + 0x24) != 0) &&
     ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x20) * 4) == 0 ||
      (memset(*(void **)(this + 0x18),0,
              (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x20) * 4) << 2),
      *(int *)(this + 0x24) != 0)))) {
    lVar5 = 0;
    do {
      plVar1 = (long *)((long)pvVar6 + lVar5 * 8);
      if (*plVar1 != 0) {
        cVar4 = RefCounted::unreference();
        if (cVar4 != '\0') {
          this_00 = (Object *)*plVar1;
          cVar4 = predelete_handler(this_00);
          if (cVar4 != '\0') {
            if (*(code **)(*(long *)this_00 + 0x140) == NavigationMesh::~NavigationMesh) {
              bVar7 = StringName::configured != '\0';
              *(undefined ***)this_00 = &PTR__initialize_classv_0010b8e8;
              if ((bVar7) && (*(long *)(this_00 + 0x2e8) != 0)) {
                StringName::unref();
              }
              if ((*(long *)(this_00 + 0x298) != 0) &&
                 (cVar4 = RefCounted::unreference(), cVar4 != '\0')) {
                pOVar3 = *(Object **)(this_00 + 0x298);
                cVar4 = predelete_handler(pOVar3);
                if (cVar4 != '\0') {
                  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
                  Memory::free_static(pOVar3,false);
                }
              }
              CowData<Vector<int>>::_unref((CowData<Vector<int>> *)(this_00 + 0x290));
              if (*(long *)(this_00 + 0x280) != 0) {
                LOCK();
                plVar1 = (long *)(*(long *)(this_00 + 0x280) + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  lVar2 = *(long *)(this_00 + 0x280);
                  *(undefined8 *)(this_00 + 0x280) = 0;
                  Memory::free_static((void *)(lVar2 + -0x10),false);
                }
              }
              Resource::~Resource((Resource *)this_00);
            }
            else {
              (**(code **)(*(long *)this_00 + 0x140))(this_00);
            }
            Memory::free_static(this_00,false);
          }
        }
        pvVar6 = *(void **)this;
      }
      lVar5 = lVar5 + 1;
    } while ((uint)lVar5 < *(uint *)(this + 0x24));
    *(undefined4 *)(this + 0x24) = 0;
    if (pvVar6 == (void *)0x0) {
      return;
    }
  }
  Memory::free_static(pvVar6,false);
  Memory::free_static(*(void **)(this + 0x10),false);
  Memory::free_static(*(void **)(this + 8),false);
  Memory::free_static(*(void **)(this + 0x18),false);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<Ref<NavigationMesh>, HashMapHasherDefault, HashMapComparatorDefault<Ref<NavigationMesh> >
   >::insert(Ref<NavigationMesh> const&) */

undefined1  [16]
HashSet<Ref<NavigationMesh>,HashMapHasherDefault,HashMapComparatorDefault<Ref<NavigationMesh>>>::
insert(Ref *param_1)

{
  Ref<NavigationMesh> *this;
  long lVar1;
  void *pvVar2;
  void *pvVar3;
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
  undefined1 auVar27 [16];
  uint uVar28;
  ulong uVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  int iVar33;
  long *in_RDX;
  long lVar34;
  ulong uVar35;
  uint uVar36;
  long *in_RSI;
  uint uVar37;
  uint uVar38;
  uint *puVar39;
  undefined4 uVar40;
  ulong uVar41;
  ulong uVar42;
  uint uVar43;
  undefined1 auVar44 [16];
  ulong uStack_98;
  
  lVar30 = *in_RSI;
  uVar28 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  if (lVar30 == 0) {
    uVar29 = (ulong)uVar28 * 4;
    lVar30 = Memory::alloc_static(uVar29,false);
    in_RSI[3] = lVar30;
    lVar30 = Memory::alloc_static((ulong)uVar28 * 8,false);
    *in_RSI = lVar30;
    lVar30 = Memory::alloc_static(uVar29,false);
    in_RSI[2] = lVar30;
    lVar30 = Memory::alloc_static(uVar29,false);
    in_RSI[1] = lVar30;
    if (uVar28 != 0) {
      memset((void *)in_RSI[3],0,uVar29);
    }
    lVar32 = *in_RDX;
    uVar36 = *(uint *)((long)in_RSI + 0x24);
    lVar30 = *in_RSI;
    if (lVar30 != 0) goto LAB_0010a99f;
  }
  else {
    lVar32 = *in_RDX;
    uVar36 = *(uint *)((long)in_RSI + 0x24);
LAB_0010a99f:
    if (uVar36 != 0) {
      uVar35 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4));
      lVar1 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
      uVar29 = lVar32 * 0x3ffff - 1;
      uVar29 = (uVar29 ^ uVar29 >> 0x1f) * 0x15;
      uVar29 = (uVar29 ^ uVar29 >> 0xb) * 0x41;
      uVar29 = uVar29 >> 0x16 ^ uVar29;
      uVar41 = uVar29 & 0xffffffff;
      if ((int)uVar29 == 0) {
        uVar41 = 1;
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar41 * lVar1;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar35;
      lVar34 = SUB168(auVar4 * auVar16,8);
      uVar38 = *(uint *)(in_RSI[3] + lVar34 * 4);
      uVar29 = (ulong)uVar38;
      iVar33 = SUB164(auVar4 * auVar16,8);
      if (uVar38 != 0) {
        uVar38 = 0;
        do {
          if ((int)uVar41 == (int)uVar29) {
            uVar43 = *(uint *)(in_RSI[1] + lVar34 * 4);
            uStack_98 = (ulong)uVar43;
            if (*(long *)(lVar30 + uStack_98 * 8) == lVar32) goto LAB_0010aab6;
          }
          uVar38 = uVar38 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)(iVar33 + 1) * lVar1;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar35;
          lVar34 = SUB168(auVar5 * auVar17,8);
          uVar43 = *(uint *)(in_RSI[3] + lVar34 * 4);
          uVar29 = (ulong)uVar43;
          iVar33 = SUB164(auVar5 * auVar17,8);
        } while ((uVar43 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = uVar29 * lVar1, auVar18._8_8_ = 0,
                auVar18._0_8_ = uVar35, auVar7._8_8_ = 0,
                auVar7._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                                 (ulong)*(uint *)(in_RSI + 4) * 4) + iVar33) -
                                      SUB164(auVar6 * auVar18,8)) * lVar1, auVar19._8_8_ = 0,
                auVar19._0_8_ = uVar35, uVar38 <= SUB164(auVar7 * auVar19,8)));
      }
    }
  }
  if ((float)uVar28 * __LC23 < (float)(uVar36 + 1)) {
    if ((int)in_RSI[4] == 0x1c) {
      uStack_98 = 0;
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0);
      uVar36 = *(uint *)((long)in_RSI + 0x24);
      lVar30 = *in_RSI;
      uVar43 = 0xffffffff;
      goto LAB_0010aab6;
    }
    uVar28 = (int)in_RSI[4] + 1;
    uVar29 = (ulong)uVar28;
    if (uVar28 < 2) {
      uVar29 = 2;
    }
    uVar28 = *(uint *)(hash_table_size_primes + uVar29 * 4);
    *(int *)(in_RSI + 4) = (int)uVar29;
    pvVar2 = (void *)in_RSI[3];
    uVar29 = (ulong)uVar28 * 4;
    pvVar3 = (void *)in_RSI[2];
    lVar30 = Memory::alloc_static(uVar29,false);
    in_RSI[3] = lVar30;
    lVar30 = Memory::realloc_static((void *)*in_RSI,(ulong)uVar28 * 8,false);
    *in_RSI = lVar30;
    lVar30 = Memory::alloc_static(uVar29,false);
    in_RSI[2] = lVar30;
    lVar30 = Memory::realloc_static((void *)in_RSI[1],uVar29,false);
    in_RSI[1] = lVar30;
    if (uVar28 != 0) {
      memset((void *)in_RSI[3],0,uVar29);
    }
    if (*(int *)((long)in_RSI + 0x24) != 0) {
      uVar29 = 0;
      lVar32 = in_RSI[3];
      lVar1 = in_RSI[2];
      do {
        uVar42 = uVar29 & 0xffffffff;
        uVar40 = (undefined4)uVar29;
        uVar43 = 0;
        uVar28 = *(uint *)((long)pvVar2 + (ulong)*(uint *)((long)pvVar3 + uVar29 * 4) * 4);
        uVar35 = (ulong)uVar28;
        uVar36 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
        uVar41 = CONCAT44(0,uVar36);
        lVar31 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar35 * lVar31;
        auVar20._8_8_ = 0;
        auVar20._0_8_ = uVar41;
        lVar34 = SUB168(auVar8 * auVar20,8) * 4;
        iVar33 = SUB164(auVar8 * auVar20,8);
        puVar39 = (uint *)(lVar32 + lVar34);
        uVar38 = *puVar39;
        if (uVar38 == 0) {
          lVar31 = uVar29 * 4;
        }
        else {
          do {
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)uVar38 * lVar31;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar41;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)((uVar36 + iVar33) - SUB164(auVar9 * auVar21,8)) * lVar31;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar41;
            uVar28 = SUB164(auVar10 * auVar22,8);
            if (uVar28 < uVar43) {
              *(int *)(lVar1 + uVar42 * 4) = iVar33;
              uVar38 = *puVar39;
              *puVar39 = (uint)uVar35;
              uVar43 = *(uint *)(lVar34 + lVar30);
              uVar35 = (ulong)uVar38;
              *(uint *)(lVar34 + lVar30) = (uint)uVar42;
              uVar42 = (ulong)uVar43;
              uVar43 = uVar28;
            }
            uVar40 = (undefined4)uVar42;
            uVar28 = (uint)uVar35;
            uVar43 = uVar43 + 1;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)(iVar33 + 1) * lVar31;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar41;
            lVar34 = SUB168(auVar11 * auVar23,8) * 4;
            iVar33 = SUB164(auVar11 * auVar23,8);
            puVar39 = (uint *)(lVar32 + lVar34);
            uVar38 = *puVar39;
          } while (uVar38 != 0);
          lVar31 = uVar42 << 2;
        }
        *puVar39 = uVar28;
        uVar29 = uVar29 + 1;
        *(int *)(lVar1 + lVar31) = iVar33;
        *(undefined4 *)(lVar30 + lVar34) = uVar40;
      } while ((uint)uVar29 < *(uint *)((long)in_RSI + 0x24));
    }
    Memory::free_static(pvVar2,false);
    Memory::free_static(pvVar3,false);
    uVar36 = *(uint *)((long)in_RSI + 0x24);
    lVar30 = *in_RSI;
  }
  lVar32 = *in_RDX;
  this = (Ref<NavigationMesh> *)(lVar30 + (ulong)uVar36 * 8);
  *(undefined8 *)this = 0;
  uVar29 = lVar32 * 0x3ffff - 1;
  uVar29 = (uVar29 ^ uVar29 >> 0x1f) * 0x15;
  uVar29 = (uVar29 ^ uVar29 >> 0xb) * 0x41;
  uVar29 = uVar29 >> 0x16 ^ uVar29;
  uVar35 = uVar29 & 0xffffffff;
  if ((int)uVar29 == 0) {
    uVar35 = 1;
  }
  Ref<NavigationMesh>::operator=(this,(Ref *)*in_RDX);
  uVar43 = (uint)uVar35;
  lVar32 = in_RSI[3];
  uVar28 = *(uint *)((long)in_RSI + 0x24);
  uVar36 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  uVar29 = CONCAT44(0,uVar36);
  lVar1 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar35 * lVar1;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar29;
  uStack_98 = SUB168(auVar12 * auVar24,8);
  lVar30 = uStack_98 * 4;
  iVar33 = SUB164(auVar12 * auVar24,8);
  puVar39 = (uint *)(lVar32 + lVar30);
  uVar38 = *puVar39;
  if (uVar38 == 0) {
    lVar34 = in_RSI[2];
    lVar31 = in_RSI[1];
  }
  else {
    uVar37 = 0;
    lVar34 = in_RSI[2];
    lVar31 = in_RSI[1];
    do {
      auVar13._8_8_ = 0;
      auVar13._0_8_ = (ulong)uVar38 * lVar1;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar29;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = (ulong)((uVar36 + iVar33) - SUB164(auVar13 * auVar25,8)) * lVar1;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar29;
      uVar38 = SUB164(auVar14 * auVar26,8);
      if (uVar38 < uVar37) {
        *(int *)(lVar34 + (ulong)uVar28 * 4) = iVar33;
        uVar43 = *puVar39;
        *puVar39 = (uint)uVar35;
        uVar37 = *(uint *)(lVar30 + lVar31);
        uVar35 = (ulong)uVar43;
        *(uint *)(lVar30 + lVar31) = uVar28;
        uVar28 = uVar37;
        uVar37 = uVar38;
      }
      uVar43 = (uint)uVar35;
      uVar37 = uVar37 + 1;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = (ulong)(iVar33 + 1) * lVar1;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar29;
      uStack_98 = SUB168(auVar15 * auVar27,8);
      lVar30 = uStack_98 * 4;
      iVar33 = SUB164(auVar15 * auVar27,8);
      puVar39 = (uint *)(lVar32 + lVar30);
      uVar38 = *puVar39;
    } while (uVar38 != 0);
  }
  *puVar39 = uVar43;
  *(int *)(lVar34 + (ulong)uVar28 * 4) = iVar33;
  *(uint *)(lVar31 + lVar30) = uVar28;
  uVar43 = *(uint *)((long)in_RSI + 0x24);
  lVar30 = *in_RSI;
  uVar36 = uVar43 + 1;
  *(uint *)((long)in_RSI + 0x24) = uVar36;
LAB_0010aab6:
  *(uint *)(param_1 + 0xc) = uVar43;
  *(long *)param_1 = lVar30;
  *(uint *)(param_1 + 8) = uVar36;
  auVar44._8_8_ = uStack_98;
  auVar44._0_8_ = param_1;
  return auVar44;
}



/* void memdelete<NavigationMeshSourceGeometryData3D>(NavigationMeshSourceGeometryData3D*) */

void memdelete<NavigationMeshSourceGeometryData3D>(NavigationMeshSourceGeometryData3D *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  
  cVar3 = predelete_handler((Object *)param_1);
  if (cVar3 == '\0') {
    return;
  }
  if (*(code **)(*(long *)param_1 + 0x140) !=
      NavigationMeshSourceGeometryData3D::~NavigationMeshSourceGeometryData3D) {
    (**(code **)(*(long *)param_1 + 0x140))(param_1);
    Memory::free_static(param_1,false);
    return;
  }
  *(undefined ***)param_1 = &PTR__initialize_classv_0010b710;
  NavigationMeshSourceGeometryData3D::clear();
  CowData<NavigationMeshSourceGeometryData3D::ProjectedObstruction>::_unref
            ((CowData<NavigationMeshSourceGeometryData3D::ProjectedObstruction> *)(param_1 + 0x2c0))
  ;
  if (*(long *)(param_1 + 0x290) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(param_1 + 0x290) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(param_1 + 0x290);
      *(undefined8 *)(param_1 + 0x290) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      lVar2 = *(long *)(param_1 + 0x280);
      goto joined_r0x0010b007;
    }
  }
  lVar2 = *(long *)(param_1 + 0x280);
joined_r0x0010b007:
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(param_1 + 0x280);
      *(undefined8 *)(param_1 + 0x280) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  Resource::~Resource((Resource *)param_1);
  Memory::free_static(param_1,false);
  return;
}



/* void memdelete<NavigationMesh>(NavigationMesh*) */

void memdelete<NavigationMesh>(NavigationMesh *param_1)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  bool bVar5;
  
  cVar4 = predelete_handler((Object *)param_1);
  if (cVar4 == '\0') {
    return;
  }
  if (*(code **)(*(long *)param_1 + 0x140) == NavigationMesh::~NavigationMesh) {
    bVar5 = StringName::configured != '\0';
    *(undefined ***)param_1 = &PTR__initialize_classv_0010b8e8;
    if ((bVar5) && (*(long *)(param_1 + 0x2e8) != 0)) {
      StringName::unref();
    }
    if (*(long *)(param_1 + 0x298) != 0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
        pOVar3 = *(Object **)(param_1 + 0x298);
        cVar4 = predelete_handler(pOVar3);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
          Memory::free_static(pOVar3,false);
        }
      }
    }
    CowData<Vector<int>>::_unref((CowData<Vector<int>> *)(param_1 + 0x290));
    if (*(long *)(param_1 + 0x280) != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)(param_1 + 0x280) + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(param_1 + 0x280);
        *(undefined8 *)(param_1 + 0x280) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    Resource::~Resource((Resource *)param_1);
    Memory::free_static(param_1,false);
    return;
  }
  (**(code **)(*(long *)param_1 + 0x140))(param_1);
  Memory::free_static(param_1,false);
  return;
}



/* CowData<unsigned char>::_realloc(long) */

undefined8 __thiscall CowData<unsigned_char>::_realloc(CowData<unsigned_char> *this,long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           Memory::realloc_static((void *)(*(long *)this + -0x10),param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,"Parameter \"mem_new\" is null.",0,
                   0);
  return 6;
}



/* CowData<Vector<int> >::_realloc(long) */

undefined8 __thiscall CowData<Vector<int>>::_realloc(CowData<Vector<int>> *this,long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           Memory::realloc_static((void *)(*(long *)this + -0x10),param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,"Parameter \"mem_new\" is null.",0,
                   0);
  return 6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<Vector<int> >::resize<false>(long) */

undefined8 __thiscall CowData<Vector<int>>::resize<false>(CowData<Vector<int>> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  if (*(long *)this == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar6 = 0;
    lVar8 = 0;
  }
  else {
    lVar6 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar6) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar8 = lVar6 * 0x10;
    if (lVar8 != 0) {
      uVar9 = lVar8 - 1U | lVar8 - 1U >> 1;
      uVar9 = uVar9 | uVar9 >> 2;
      uVar9 = uVar9 | uVar9 >> 4;
      uVar9 = uVar9 | uVar9 >> 8;
      uVar9 = uVar9 | uVar9 >> 0x10;
      lVar8 = (uVar9 | uVar9 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x10 == 0) {
LAB_0010b540:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar9 = param_1 * 0x10 - 1;
  uVar9 = uVar9 >> 1 | uVar9;
  uVar9 = uVar9 | uVar9 >> 2;
  uVar9 = uVar9 | uVar9 >> 4;
  uVar9 = uVar9 | uVar9 >> 8;
  uVar9 = uVar9 | uVar9 >> 0x10;
  uVar9 = uVar9 | uVar9 >> 0x20;
  lVar10 = uVar9 + 1;
  if (lVar10 == 0) goto LAB_0010b540;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar9 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar9) {
LAB_0010b3f2:
        if (lVar10 != lVar8) {
          uVar4 = _realloc(this,lVar10);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          lVar6 = *(long *)this;
          if (lVar6 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
        }
        *(long *)(lVar6 + -8) = param_1;
        return 0;
      }
      while( true ) {
        lVar3 = uVar9 * 0x10 + lVar6;
        if (*(long *)(lVar3 + 8) != 0) break;
        uVar9 = uVar9 + 1;
        if (*(ulong *)(lVar6 + -8) <= uVar9) goto LAB_0010b3f2;
      }
      LOCK();
      plVar1 = (long *)(*(long *)(lVar3 + 8) + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar6 = *(long *)(lVar3 + 8);
        *(undefined8 *)(lVar3 + 8) = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
      uVar9 = uVar9 + 1;
      lVar6 = *(long *)this;
    }
    goto LAB_0010b596;
  }
  if (lVar10 == lVar8) {
LAB_0010b4af:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_0010b596:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar6 = puVar7[-1];
    if (param_1 <= lVar6) goto LAB_0010b491;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_0010b4af;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar9 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar7 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar7;
    lVar6 = 0;
  }
  puVar5 = puVar7 + lVar6 * 2;
  do {
    puVar5[1] = 0;
    puVar5 = puVar5 + 2;
  } while (puVar5 != puVar7 + param_1 * 2);
LAB_0010b491:
  puVar7[-1] = param_1;
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NavMeshGenerator3D::singleton */

void NavMeshGenerator3D::_GLOBAL__sub_I_singleton(void)

{
  undefined8 uVar1;
  
  uVar1 = _LC99;
  _baking_navmeshes = (undefined1  [16])0x0;
  _DAT_00104f90 = (undefined1  [16])0x0;
  _DAT_00104fa0 = _LC99;
  __cxa_atexit(HashSet<Ref<NavigationMesh>,HashMapHasherDefault,HashMapComparatorDefault<Ref<NavigationMesh>>>
               ::~HashSet,&baking_navmeshes,&__dso_handle);
  generator_tasks._40_8_ = uVar1;
  generator_tasks._8_16_ = (undefined1  [16])0x0;
  generator_tasks._24_16_ = (undefined1  [16])0x0;
  __cxa_atexit(HashMap<long,NavMeshGenerator3D::NavMeshGeneratorTask3D*,HashMapHasherDefault,HashMapComparatorDefault<long>,DefaultTypedAllocator<HashMapElement<long,NavMeshGenerator3D::NavMeshGeneratorTask3D*>>>
               ::~HashMap,generator_tasks,&__dso_handle);
  _generator_parsers = 0;
  DAT_00104f28 = 0;
  __cxa_atexit(LocalVector<NavMeshGeometryParser3D*,unsigned_int,false,false>::~LocalVector,
               &generator_parsers,&__dso_handle);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* HashSet<Ref<NavigationMesh>, HashMapHasherDefault, HashMapComparatorDefault<Ref<NavigationMesh> >
   >::~HashSet() */

void __thiscall
HashSet<Ref<NavigationMesh>,HashMapHasherDefault,HashMapComparatorDefault<Ref<NavigationMesh>>>::
~HashSet(HashSet<Ref<NavigationMesh>,HashMapHasherDefault,HashMapComparatorDefault<Ref<NavigationMesh>>>
         *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* NavigationMesh::~NavigationMesh() */

void __thiscall NavigationMesh::~NavigationMesh(NavigationMesh *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* NavigationMeshSourceGeometryData3D::~NavigationMeshSourceGeometryData3D() */

void __thiscall
NavigationMeshSourceGeometryData3D::~NavigationMeshSourceGeometryData3D
          (NavigationMeshSourceGeometryData3D *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* HashMap<Vector3, int, HashMapHasherDefault, HashMapComparatorDefault<Vector3>,
   DefaultTypedAllocator<HashMapElement<Vector3, int> > >::~HashMap() */

void __thiscall
HashMap<Vector3,int,HashMapHasherDefault,HashMapComparatorDefault<Vector3>,DefaultTypedAllocator<HashMapElement<Vector3,int>>>
::~HashMap(HashMap<Vector3,int,HashMapHasherDefault,HashMapComparatorDefault<Vector3>,DefaultTypedAllocator<HashMapElement<Vector3,int>>>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* HashMap<long, NavMeshGenerator3D::NavMeshGeneratorTask3D*, HashMapHasherDefault,
   HashMapComparatorDefault<long>, DefaultTypedAllocator<HashMapElement<long,
   NavMeshGenerator3D::NavMeshGeneratorTask3D*> > >::~HashMap() */

void __thiscall
HashMap<long,NavMeshGenerator3D::NavMeshGeneratorTask3D*,HashMapHasherDefault,HashMapComparatorDefault<long>,DefaultTypedAllocator<HashMapElement<long,NavMeshGenerator3D::NavMeshGeneratorTask3D*>>>
::~HashMap(HashMap<long,NavMeshGenerator3D::NavMeshGeneratorTask3D*,HashMapHasherDefault,HashMapComparatorDefault<long>,DefaultTypedAllocator<HashMapElement<long,NavMeshGenerator3D::NavMeshGeneratorTask3D*>>>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* LocalVector<NavMeshGeometryParser3D*, unsigned int, false, false>::~LocalVector() */

void __thiscall
LocalVector<NavMeshGeometryParser3D*,unsigned_int,false,false>::~LocalVector
          (LocalVector<NavMeshGeometryParser3D*,unsigned_int,false,false> *this)

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


