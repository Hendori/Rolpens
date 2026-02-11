
/* NavigationMeshSourceGeometryData2D::has_data() */

ulong __thiscall
NavigationMeshSourceGeometryData2D::has_data(NavigationMeshSourceGeometryData2D *this)

{
  int iVar1;
  ulong uVar2;
  
  do {
    iVar1 = pthread_rwlock_rdlock((pthread_rwlock_t *)(this + 0x240));
  } while (iVar1 == 0xb);
  if (iVar1 != 0x23) {
    if (*(long *)(this + 0x280) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = CONCAT71((int7)((ulong)this >> 8),*(long *)(*(long *)(this + 0x280) + -8) != 0);
    }
    pthread_rwlock_unlock((pthread_rwlock_t *)(this + 0x240));
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(0x23);
}



/* NavigationMeshSourceGeometryData2D::get_traversable_outlines() const */

void NavigationMeshSourceGeometryData2D::get_traversable_outlines(void)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  Variant *pVVar4;
  long in_RSI;
  uint uVar5;
  Array *in_RDI;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  long local_60;
  int local_58 [2];
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    iVar3 = pthread_rwlock_rdlock((pthread_rwlock_t *)(in_RSI + 0x240));
  } while (iVar3 == 0xb);
  if (iVar3 == 0x23) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(0x23);
  }
  Array::Array(in_RDI);
  local_58[0] = 0;
  local_58[1] = 0;
  local_60 = 0;
  local_50 = (undefined1  [16])0x0;
  uVar5 = (uint)in_RDI;
  Array::set_typed(uVar5,(StringName *)0x23,(Variant *)&local_60);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar7 = 0;
  Array::resize(uVar5);
  while( true ) {
    iVar3 = Array::size();
    if (iVar3 <= (int)lVar7) {
      pthread_rwlock_unlock((pthread_rwlock_t *)(in_RSI + 0x240));
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar1 = *(long *)(in_RSI + 0x280);
    if (lVar1 == 0) break;
    lVar6 = *(long *)(lVar1 + -8);
    if (lVar6 <= lVar7) goto LAB_001001d3;
    Variant::Variant((Variant *)local_58,(Vector *)(lVar1 + lVar7 * 0x10));
    pVVar4 = (Variant *)Array::operator[](uVar5);
    if (pVVar4 == (Variant *)local_58) {
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    else {
      if (Variant::needs_deinit[*(int *)pVVar4] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)pVVar4 = 0;
      *(int *)pVVar4 = local_58[0];
      *(undefined8 *)(pVVar4 + 8) = local_50._0_8_;
      *(undefined8 *)(pVVar4 + 0x10) = local_50._8_8_;
    }
    lVar7 = lVar7 + 1;
  }
  lVar6 = 0;
LAB_001001d3:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar6,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* NavigationMeshSourceGeometryData2D::get_obstruction_outlines() const */

void NavigationMeshSourceGeometryData2D::get_obstruction_outlines(void)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  Variant *pVVar4;
  long in_RSI;
  uint uVar5;
  Array *in_RDI;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  long local_60;
  int local_58 [2];
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    iVar3 = pthread_rwlock_rdlock((pthread_rwlock_t *)(in_RSI + 0x240));
  } while (iVar3 == 0xb);
  if (iVar3 == 0x23) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(0x23);
  }
  Array::Array(in_RDI);
  local_58[0] = 0;
  local_58[1] = 0;
  local_60 = 0;
  local_50 = (undefined1  [16])0x0;
  uVar5 = (uint)in_RDI;
  Array::set_typed(uVar5,(StringName *)0x23,(Variant *)&local_60);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar7 = 0;
  Array::resize(uVar5);
  while( true ) {
    iVar3 = Array::size();
    if (iVar3 <= (int)lVar7) {
      pthread_rwlock_unlock((pthread_rwlock_t *)(in_RSI + 0x240));
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar1 = *(long *)(in_RSI + 0x290);
    if (lVar1 == 0) break;
    lVar6 = *(long *)(lVar1 + -8);
    if (lVar6 <= lVar7) goto LAB_001003f3;
    Variant::Variant((Variant *)local_58,(Vector *)(lVar1 + lVar7 * 0x10));
    pVVar4 = (Variant *)Array::operator[](uVar5);
    if (pVVar4 == (Variant *)local_58) {
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    else {
      if (Variant::needs_deinit[*(int *)pVVar4] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)pVVar4 = 0;
      *(int *)pVVar4 = local_58[0];
      *(undefined8 *)(pVVar4 + 8) = local_50._0_8_;
      *(undefined8 *)(pVVar4 + 0x10) = local_50._8_8_;
    }
    lVar7 = lVar7 + 1;
  }
  lVar6 = 0;
LAB_001003f3:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar6,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* NavigationMeshSourceGeometryData2D::get_projected_obstructions() const */

Array * NavigationMeshSourceGeometryData2D::get_projected_obstructions(void)

{
  Vector *pVVar1;
  char cVar2;
  long lVar3;
  int iVar4;
  Variant *pVVar5;
  long in_RSI;
  Array *in_RDI;
  long lVar6;
  long in_FS_OFFSET;
  Variant local_80 [8];
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    iVar4 = pthread_rwlock_rdlock((pthread_rwlock_t *)(in_RSI + 0x240));
  } while (iVar4 == 0xb);
  if (iVar4 == 0x23) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(0x23);
  }
  Array::Array(in_RDI);
  Array::resize((int)in_RDI);
  lVar3 = *(long *)(in_RSI + 0x2b8);
  for (lVar6 = 0; (lVar3 != 0 && (lVar6 < *(long *)(lVar3 + -8))); lVar6 = lVar6 + 1) {
    pVVar1 = (Vector *)(lVar3 + lVar6 * 0x18);
    Dictionary::Dictionary((Dictionary *)local_80);
    Variant::Variant((Variant *)local_58,ProjectedObstruction::VERSION);
    Variant::Variant((Variant *)local_78,"version");
    pVVar5 = (Variant *)Dictionary::operator[](local_80);
    if (pVVar5 != (Variant *)local_58) {
      if (Variant::needs_deinit[*(int *)pVVar5] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)pVVar5 = 0;
      *(int *)pVVar5 = local_58[0];
      *(undefined8 *)(pVVar5 + 8) = local_50;
      *(undefined8 *)(pVVar5 + 0x10) = uStack_48;
      local_58[0] = 0;
    }
    if (Variant::needs_deinit[local_78[0]] == '\0') {
      cVar2 = Variant::needs_deinit[local_58[0]];
    }
    else {
      Variant::_clear_internal();
      cVar2 = Variant::needs_deinit[local_58[0]];
    }
    if (cVar2 != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_58,pVVar1);
    Variant::Variant((Variant *)local_78,"vertices");
    pVVar5 = (Variant *)Dictionary::operator[](local_80);
    if (pVVar5 != (Variant *)local_58) {
      if (Variant::needs_deinit[*(int *)pVVar5] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)pVVar5 = 0;
      *(int *)pVVar5 = local_58[0];
      *(undefined8 *)(pVVar5 + 8) = local_50;
      *(undefined8 *)(pVVar5 + 0x10) = uStack_48;
      local_58[0] = 0;
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_58,(bool)pVVar1[0x10]);
    Variant::Variant((Variant *)local_78,"carve");
    pVVar5 = (Variant *)Dictionary::operator[](local_80);
    if (pVVar5 != (Variant *)local_58) {
      if (Variant::needs_deinit[*(int *)pVVar5] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)pVVar5 = 0;
      *(int *)pVVar5 = local_58[0];
      *(undefined8 *)(pVVar5 + 8) = local_50;
      *(undefined8 *)(pVVar5 + 0x10) = uStack_48;
      local_58[0] = 0;
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_58,(Dictionary *)local_80);
    pVVar5 = (Variant *)Array::operator[]((int)in_RDI);
    if (pVVar5 == (Variant *)local_58) {
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    else {
      if (Variant::needs_deinit[*(int *)pVVar5] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)pVVar5 = 0;
      *(int *)pVVar5 = local_58[0];
      *(undefined8 *)(pVVar5 + 8) = local_50;
      *(undefined8 *)(pVVar5 + 0x10) = uStack_48;
    }
    Dictionary::~Dictionary((Dictionary *)local_80);
    lVar3 = *(long *)(in_RSI + 0x2b8);
  }
  pthread_rwlock_unlock((pthread_rwlock_t *)(in_RSI + 0x240));
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return in_RDI;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<float>::_ref(CowData<float> const&) [clone .part.0] */

void __thiscall CowData<float>::_ref(CowData<float> *this,CowData *param_1)

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



/* CowData<Vector2>::_ref(CowData<Vector2> const&) [clone .part.0] */

void __thiscall CowData<Vector2>::_ref(CowData<Vector2> *this,CowData *param_1)

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



/* NavigationMeshSourceGeometryData2D::_get_traversable_outlines() const */

NavigationMeshSourceGeometryData2D * __thiscall
NavigationMeshSourceGeometryData2D::_get_traversable_outlines
          (NavigationMeshSourceGeometryData2D *this)

{
  int iVar1;
  
  do {
    iVar1 = pthread_rwlock_rdlock((pthread_rwlock_t *)(this + 0x240));
  } while (iVar1 == 0xb);
  if (iVar1 != 0x23) {
    pthread_rwlock_unlock((pthread_rwlock_t *)(this + 0x240));
    return this + 0x278;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(0x23);
}



/* NavigationMeshSourceGeometryData2D::_get_obstruction_outlines() const */

NavigationMeshSourceGeometryData2D * __thiscall
NavigationMeshSourceGeometryData2D::_get_obstruction_outlines
          (NavigationMeshSourceGeometryData2D *this)

{
  int iVar1;
  
  do {
    iVar1 = pthread_rwlock_rdlock((pthread_rwlock_t *)(this + 0x240));
  } while (iVar1 == 0xb);
  if (iVar1 != 0x23) {
    pthread_rwlock_unlock((pthread_rwlock_t *)(this + 0x240));
    return this + 0x288;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(0x23);
}



/* NavigationMeshSourceGeometryData2D::_get(StringName const&, Variant&) const */

undefined4 __thiscall
NavigationMeshSourceGeometryData2D::_get
          (NavigationMeshSourceGeometryData2D *this,StringName *param_1,Variant *param_2)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  Array local_50 [8];
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = StringName::operator==(param_1,"projected_obstructions");
  if ((char)uVar1 != '\0') {
    get_projected_obstructions();
    Variant::Variant((Variant *)local_48,local_50);
    if (Variant::needs_deinit[*(int *)param_2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_2 = local_48[0];
    *(undefined8 *)(param_2 + 8) = local_40;
    *(undefined8 *)(param_2 + 0x10) = uStack_38;
    Array::~Array(local_50);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationMeshSourceGeometryData2D::_bind_methods() */

void NavigationMeshSourceGeometryData2D::_bind_methods(void)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  MethodBind *pMVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  long in_FS_OFFSET;
  CowData<char32_t> *local_118;
  undefined8 local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  char *local_c8;
  undefined8 local_c0;
  char *local_b8;
  undefined8 local_b0;
  long *local_a8;
  int local_a0;
  undefined8 local_98;
  undefined4 local_90;
  char *local_88;
  undefined8 local_80;
  char *local_78;
  char *pcStack_70;
  undefined8 local_68;
  char **local_58;
  undefined1 auStack_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  D_METHODP((char *)&local_b8,(char ***)"clear",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<NavigationMeshSourceGeometryData2D>(clear);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_a8;
  if (local_a8 != (long *)0x0) {
    LOCK();
    plVar6 = local_a8 + -2;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      if (local_a8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_a8[-1];
      lVar7 = 0;
      local_a8 = (long *)0x0;
      plVar6 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar6 != 0)) {
            StringName::unref();
          }
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 1;
        } while (lVar1 != lVar7);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_b8,(char ***)"has_data",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<NavigationMeshSourceGeometryData2D,bool>(has_data);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_a8;
  if (local_a8 != (long *)0x0) {
    LOCK();
    plVar6 = local_a8 + -2;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      if (local_a8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_a8[-1];
      lVar7 = 0;
      local_a8 = (long *)0x0;
      plVar6 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar6 != 0)) {
            StringName::unref();
          }
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 1;
        } while (lVar1 != lVar7);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  local_88 = "traversable_outlines";
  uVar5 = (uint)&local_58;
  local_58 = &local_88;
  D_METHODP((char *)&local_b8,(char ***)"set_traversable_outlines",uVar5);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<NavigationMeshSourceGeometryData2D,TypedArray<Vector<Vector2>>const&>
                     (set_traversable_outlines);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_a8;
  if (local_a8 != (long *)0x0) {
    LOCK();
    plVar6 = local_a8 + -2;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      if (local_a8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_a8[-1];
      lVar7 = 0;
      local_a8 = (long *)0x0;
      plVar6 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar6 != 0)) {
            StringName::unref();
          }
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 1;
        } while (lVar1 != lVar7);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_b8,(char ***)"get_traversable_outlines",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<NavigationMeshSourceGeometryData2D,TypedArray<Vector<Vector2>>>
                     (get_traversable_outlines);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_a8;
  if (local_a8 != (long *)0x0) {
    LOCK();
    plVar6 = local_a8 + -2;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      if (local_a8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_a8[-1];
      lVar7 = 0;
      local_a8 = (long *)0x0;
      plVar6 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar6 != 0)) {
            StringName::unref();
          }
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 1;
        } while (lVar1 != lVar7);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  local_88 = "obstruction_outlines";
  local_80 = 0;
  local_58 = &local_88;
  D_METHODP((char *)&local_b8,(char ***)"set_obstruction_outlines",uVar5);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<NavigationMeshSourceGeometryData2D,TypedArray<Vector<Vector2>>const&>
                     (set_obstruction_outlines);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_a8;
  if (local_a8 != (long *)0x0) {
    LOCK();
    plVar6 = local_a8 + -2;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      if (local_a8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_a8[-1];
      lVar7 = 0;
      local_a8 = (long *)0x0;
      plVar6 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar6 != 0)) {
            StringName::unref();
          }
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 1;
        } while (lVar1 != lVar7);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_b8,(char ***)"get_obstruction_outlines",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<NavigationMeshSourceGeometryData2D,TypedArray<Vector<Vector2>>>
                     (get_obstruction_outlines);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_a8;
  if (local_a8 != (long *)0x0) {
    LOCK();
    plVar6 = local_a8 + -2;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      if (local_a8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_a8[-1];
      lVar7 = 0;
      local_a8 = (long *)0x0;
      plVar6 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar6 != 0)) {
            StringName::unref();
          }
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 1;
        } while (lVar1 != lVar7);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  local_88 = "traversable_outlines";
  local_58 = &local_88;
  D_METHODP((char *)&local_b8,(char ***)"append_traversable_outlines",uVar5);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<NavigationMeshSourceGeometryData2D,TypedArray<Vector<Vector2>>const&>
                     (append_traversable_outlines);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_a8;
  if (local_a8 != (long *)0x0) {
    LOCK();
    plVar6 = local_a8 + -2;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      if (local_a8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_a8[-1];
      lVar7 = 0;
      local_a8 = (long *)0x0;
      plVar6 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar6 != 0)) {
            StringName::unref();
          }
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 1;
        } while (lVar1 != lVar7);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  local_88 = "obstruction_outlines";
  local_80 = 0;
  local_58 = &local_88;
  D_METHODP((char *)&local_b8,(char ***)"append_obstruction_outlines",uVar5);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<NavigationMeshSourceGeometryData2D,TypedArray<Vector<Vector2>>const&>
                     (append_obstruction_outlines);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_a8;
  if (local_a8 != (long *)0x0) {
    LOCK();
    plVar6 = local_a8 + -2;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      if (local_a8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_a8[-1];
      lVar7 = 0;
      local_a8 = (long *)0x0;
      plVar6 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar6 != 0)) {
            StringName::unref();
          }
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 1;
        } while (lVar1 != lVar7);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  local_88 = "shape_outline";
  local_80 = 0;
  local_58 = &local_88;
  D_METHODP((char *)&local_b8,(char ***)"add_traversable_outline",uVar5);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<NavigationMeshSourceGeometryData2D,Vector<Vector2>const&>
                     (add_traversable_outline);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_a8;
  if (local_a8 != (long *)0x0) {
    LOCK();
    plVar6 = local_a8 + -2;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      if (local_a8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_a8[-1];
      lVar7 = 0;
      local_a8 = (long *)0x0;
      plVar6 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar6 != 0)) {
            StringName::unref();
          }
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 1;
        } while (lVar1 != lVar7);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  local_88 = "shape_outline";
  local_80 = 0;
  local_58 = &local_88;
  D_METHODP((char *)&local_b8,(char ***)"add_obstruction_outline",uVar5);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<NavigationMeshSourceGeometryData2D,Vector<Vector2>const&>
                     (add_obstruction_outline);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_a8;
  if (local_a8 != (long *)0x0) {
    LOCK();
    plVar6 = local_a8 + -2;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      if (local_a8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_a8[-1];
      lVar7 = 0;
      local_a8 = (long *)0x0;
      plVar6 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar6 != 0)) {
            StringName::unref();
          }
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 1;
        } while (lVar1 != lVar7);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  local_88 = "other_geometry";
  local_80 = 0;
  local_58 = &local_88;
  D_METHODP((char *)&local_b8,(char ***)"merge",uVar5);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<NavigationMeshSourceGeometryData2D,Ref<NavigationMeshSourceGeometryData2D>const&>
                     (merge);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_a8;
  if (local_a8 != (long *)0x0) {
    LOCK();
    plVar6 = local_a8 + -2;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      if (local_a8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_a8[-1];
      lVar7 = 0;
      local_a8 = (long *)0x0;
      plVar6 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar6 != 0)) {
            StringName::unref();
          }
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 1;
        } while (lVar1 != lVar7);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  local_68 = 0;
  auStack_50._0_8_ = &pcStack_70;
  local_78 = "vertices";
  pcStack_70 = "carve";
  local_58 = &local_78;
  D_METHODP((char *)&local_b8,(char ***)"add_projected_obstruction",uVar5);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<NavigationMeshSourceGeometryData2D,Vector<Vector2>const&,bool>
                     (add_projected_obstruction);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_a8;
  if (local_a8 != (long *)0x0) {
    LOCK();
    plVar6 = local_a8 + -2;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      if (local_a8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_a8[-1];
      lVar7 = 0;
      local_a8 = (long *)0x0;
      plVar6 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar6 != 0)) {
            StringName::unref();
          }
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 1;
        } while (lVar1 != lVar7);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_b8,(char ***)"clear_projected_obstructions",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<NavigationMeshSourceGeometryData2D>(clear_projected_obstructions);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_a8;
  if (local_a8 != (long *)0x0) {
    LOCK();
    plVar6 = local_a8 + -2;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      if (local_a8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_a8[-1];
      lVar7 = 0;
      local_a8 = (long *)0x0;
      plVar6 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar6 != 0)) {
            StringName::unref();
          }
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 1;
        } while (lVar1 != lVar7);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  local_78 = "projected_obstructions";
  pcStack_70 = (char *)0x0;
  local_58 = &local_78;
  D_METHODP((char *)&local_b8,(char ***)"set_projected_obstructions",uVar5);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<NavigationMeshSourceGeometryData2D,Array_const&>
                     (set_projected_obstructions);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_a8;
  if (local_a8 != (long *)0x0) {
    LOCK();
    plVar6 = local_a8 + -2;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      if (local_a8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_a8[-1];
      lVar7 = 0;
      local_a8 = (long *)0x0;
      plVar6 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar6 != 0)) {
            StringName::unref();
          }
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 1;
        } while (lVar1 != lVar7);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_b8,(char ***)"get_projected_obstructions",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<NavigationMeshSourceGeometryData2D,Array>(get_projected_obstructions);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_a8;
  if (local_a8 != (long *)0x0) {
    LOCK();
    plVar6 = local_a8 + -2;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      if (local_a8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_a8[-1];
      lVar7 = 0;
      local_a8 = (long *)0x0;
      plVar6 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar6 != 0)) {
            StringName::unref();
          }
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 1;
        } while (lVar1 != lVar7);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_b8,(char ***)"get_bounds",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<NavigationMeshSourceGeometryData2D,Rect2>(get_bounds);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_a8;
  if (local_a8 != (long *)0x0) {
    LOCK();
    plVar6 = local_a8 + -2;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      if (local_a8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_a8[-1];
      lVar7 = 0;
      local_a8 = (long *)0x0;
      plVar6 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar6 != 0)) {
            StringName::unref();
          }
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 1;
        } while (lVar1 != lVar7);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_d0,true);
  _scs_create((char *)&local_d8,true);
  local_b8 = "";
  local_e0 = 0;
  local_e8 = 0;
  local_b0 = 0;
  String::parse_latin1((StrRange *)&local_e8);
  local_b8 = "traversable_outlines";
  local_f0 = 0;
  local_b0 = 0x14;
  String::parse_latin1((StrRange *)&local_f0);
  local_b8 = (char *)CONCAT44(local_b8._4_4_,0x1c);
  local_b0 = 0;
  if (local_f0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)&local_f0);
  }
  local_a8 = (long *)0x0;
  local_a0 = 0;
  local_98 = 0;
  if (local_e8 == 0) {
LAB_00102010:
    local_90 = 10;
    StringName::operator=((StringName *)&local_a8,(StringName *)&local_e0);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,(CowData *)&local_e8);
    local_90 = 10;
    if (local_a0 != 0x11) goto LAB_00102010;
    StringName::StringName((StringName *)&local_c8,(String *)&local_98,false);
    if (local_a8 == (long *)local_c8) {
      if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_a8 = (long *)local_c8;
    }
  }
  local_118 = (CowData<char32_t> *)&local_98;
  local_f8 = 0;
  local_c8 = "NavigationMeshSourceGeometryData2D";
  local_c0 = 0x22;
  String::parse_latin1((StrRange *)&local_f8);
  StringName::StringName((StringName *)&local_c8,(String *)&local_f8,false);
  ClassDB::add_property
            ((StringName *)&local_c8,(PropertyInfo *)&local_b8,(StringName *)&local_d8,
             (StringName *)&local_d0,-1);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  CowData<char32_t>::_unref(local_118);
  if ((StringName::configured != '\0') && (local_a8 != (long *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((((StringName::configured != '\0') &&
       ((local_e0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_d8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_d0 != 0)
     ) {
    StringName::unref();
  }
  _scs_create((char *)&local_d0,true);
  _scs_create((char *)&local_d8,true);
  local_b8 = "";
  local_e0 = 0;
  local_e8 = 0;
  local_b0 = 0;
  String::parse_latin1((StrRange *)&local_e8);
  local_f0 = 0;
  local_b8 = "obstruction_outlines";
  local_b0 = 0x14;
  String::parse_latin1((StrRange *)&local_f0);
  local_b8 = (char *)CONCAT44(local_b8._4_4_,0x1c);
  local_b0 = 0;
  if (local_f0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)&local_f0);
  }
  local_a8 = (long *)0x0;
  local_a0 = 0;
  local_98 = 0;
  if (local_e8 == 0) {
LAB_0010226b:
    local_90 = 10;
    StringName::operator=((StringName *)&local_a8,(StringName *)&local_e0);
  }
  else {
    CowData<char32_t>::_ref(local_118,(CowData *)&local_e8);
    local_90 = 10;
    if (local_a0 != 0x11) goto LAB_0010226b;
    StringName::StringName((StringName *)&local_c8,(String *)local_118,false);
    if (local_a8 == (long *)local_c8) {
      if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_a8 = (long *)local_c8;
    }
  }
  local_f8 = 0;
  local_c8 = "NavigationMeshSourceGeometryData2D";
  local_c0 = 0x22;
  String::parse_latin1((StrRange *)&local_f8);
  StringName::StringName((StringName *)&local_c8,(String *)&local_f8,false);
  ClassDB::add_property
            ((StringName *)&local_c8,(PropertyInfo *)&local_b8,(StringName *)&local_d8,
             (StringName *)&local_d0,-1);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  CowData<char32_t>::_unref(local_118);
  if ((StringName::configured != '\0') && (local_a8 != (long *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((((StringName::configured != '\0') &&
       ((local_e0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_d8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_d0 != 0)
     ) {
    StringName::unref();
  }
  _scs_create((char *)&local_d0,true);
  _scs_create((char *)&local_d8,true);
  local_b8 = "";
  local_e0 = 0;
  local_e8 = 0;
  local_b0 = 0;
  String::parse_latin1((StrRange *)&local_e8);
  local_f0 = 0;
  local_b8 = "projected_obstructions";
  local_b0 = 0x16;
  String::parse_latin1((StrRange *)&local_f0);
  local_b8 = (char *)CONCAT44(local_b8._4_4_,0x1c);
  local_b0 = 0;
  if (local_f0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)&local_f0);
  }
  local_a8 = (long *)0x0;
  local_a0 = 0;
  local_98 = 0;
  if (local_e8 != 0) {
    CowData<char32_t>::_ref(local_118,(CowData *)&local_e8);
    local_90 = 10;
    if (local_a0 == 0x11) {
      StringName::StringName((StringName *)&local_c8,(String *)local_118,false);
      if (local_a8 == (long *)local_c8) {
        if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_a8 = (long *)local_c8;
      }
      goto LAB_001024cd;
    }
  }
  local_90 = 10;
  StringName::operator=((StringName *)&local_a8,(StringName *)&local_e0);
LAB_001024cd:
  local_f8 = 0;
  local_c8 = "NavigationMeshSourceGeometryData2D";
  local_c0 = 0x22;
  String::parse_latin1((StrRange *)&local_f8);
  StringName::StringName((StringName *)&local_c8,(String *)&local_f8,false);
  ClassDB::add_property
            ((StringName *)&local_c8,(PropertyInfo *)&local_b8,(StringName *)&local_d8,
             (StringName *)&local_d0,-1);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  CowData<char32_t>::_unref(local_118);
  if ((StringName::configured != '\0') && (local_a8 != (long *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((((StringName::configured != '\0') &&
       ((local_e0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_d8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_d0 != 0)
     ) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<Vector2>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Vector2>::_copy_on_write(CowData<Vector2> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  size_t __n;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar4 = 0x10;
  __n = lVar1 * 8;
  if (__n != 0) {
    uVar4 = __n - 1 | __n - 1 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    uVar4 = (uVar4 | uVar4 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar4,false);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 1;
    puVar3[1] = lVar1;
    memcpy(puVar3 + 2,*(void **)this,__n);
    _unref(this);
    *(undefined8 **)this = puVar3 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* Error CowData<Vector2>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<Vector2>::resize<false>(CowData<Vector2> *this,long param_1)

{
  long *plVar1;
  int iVar2;
  CowData<Vector2> *pCVar3;
  ulong uVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined8 uVar7;
  CowData<Vector2> *pCVar8;
  CowData<Vector2> *pCVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  lVar10 = *(long *)this;
  if (lVar10 == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
    lVar11 = 0;
    pCVar3 = (CowData<Vector2> *)0x0;
  }
  else {
    lVar11 = *(long *)(lVar10 + -8);
    if (param_1 == lVar11) {
      return;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar10 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return;
      }
      lVar10 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar10 + -0x10),false);
      return;
    }
    _copy_on_write(this);
    pCVar3 = (CowData<Vector2> *)(lVar11 * 8);
    if (pCVar3 != (CowData<Vector2> *)0x0) {
      uVar4 = (ulong)(pCVar3 + -1) | (ulong)(pCVar3 + -1) >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      pCVar3 = (CowData<Vector2> *)((uVar4 | uVar4 >> 0x20) + 1);
    }
  }
  if (param_1 * 8 != 0) {
    uVar4 = param_1 * 8 - 1;
    uVar4 = uVar4 | uVar4 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    pCVar9 = (CowData<Vector2> *)(uVar4 | uVar4 >> 0x20);
    pCVar8 = pCVar9 + 1;
    if (pCVar8 != (CowData<Vector2> *)0x0) {
      if (param_1 <= lVar11) {
        if ((pCVar8 != pCVar3) && (iVar2 = _realloc(this,(long)pCVar8), iVar2 != 0)) {
          return;
        }
        if (*(long *)this != 0) {
          *(long *)(*(long *)this + -8) = param_1;
          return;
        }
        FUN_00108adc();
        return;
      }
      if (pCVar8 == pCVar3) {
LAB_00102a3c:
        puVar12 = *(undefined8 **)this;
        if (puVar12 == (undefined8 *)0x0) {
          resize<false>((long)pCVar9);
          return;
        }
        lVar10 = puVar12[-1];
        if (param_1 <= lVar10) goto LAB_001029cd;
      }
      else {
        if (lVar11 != 0) {
          pCVar9 = this;
          iVar2 = _realloc(this,(long)pCVar8);
          if (iVar2 != 0) {
            return;
          }
          goto LAB_00102a3c;
        }
        puVar5 = (undefined8 *)Memory::alloc_static((ulong)(pCVar9 + 0x11),false);
        if (puVar5 == (undefined8 *)0x0) {
          uVar7 = 0x171;
          pcVar6 = "Parameter \"mem_new\" is null.";
          goto LAB_00102ae2;
        }
        puVar12 = puVar5 + 2;
        *puVar5 = 1;
        puVar5[1] = 0;
        *(undefined8 **)this = puVar12;
        lVar10 = 0;
      }
      memset(puVar12 + lVar10,0,(param_1 - lVar10) * 8);
LAB_001029cd:
      puVar12[-1] = param_1;
      return;
    }
  }
  uVar7 = 0x16a;
  pcVar6 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
LAB_00102ae2:
  _err_print_error("resize","./core/templates/cowdata.h",uVar7,pcVar6,0,0);
  return;
}



/* CowData<Vector<Vector2> >::_ref(CowData<Vector<Vector2> > const&) [clone .part.0] */

void __thiscall CowData<Vector<Vector2>>::_ref(CowData<Vector<Vector2>> *this,CowData *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  _unref(this);
  if (*(long *)param_1 != 0) {
    plVar1 = (long *)(*(long *)param_1 + -0x10);
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



/* NavigationMeshSourceGeometryData2D::_set_traversable_outlines(Vector<Vector<Vector2> > const&) */

void __thiscall
NavigationMeshSourceGeometryData2D::_set_traversable_outlines
          (NavigationMeshSourceGeometryData2D *this,Vector *param_1)

{
  int iVar1;
  
  iVar1 = pthread_rwlock_wrlock((pthread_rwlock_t *)(this + 0x240));
  if (iVar1 != 0x23) {
    if (*(long *)(this + 0x280) != *(long *)(param_1 + 8)) {
      CowData<Vector<Vector2>>::_ref
                ((CowData<Vector<Vector2>> *)(this + 0x280),(CowData *)(param_1 + 8));
    }
    this[0x2a8] = (NavigationMeshSourceGeometryData2D)0x1;
    pthread_rwlock_unlock((pthread_rwlock_t *)(this + 0x240));
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(0x23);
}



/* NavigationMeshSourceGeometryData2D::_set_obstruction_outlines(Vector<Vector<Vector2> > const&) */

void __thiscall
NavigationMeshSourceGeometryData2D::_set_obstruction_outlines
          (NavigationMeshSourceGeometryData2D *this,Vector *param_1)

{
  int iVar1;
  
  iVar1 = pthread_rwlock_wrlock((pthread_rwlock_t *)(this + 0x240));
  if (iVar1 != 0x23) {
    if (*(long *)(this + 0x290) != *(long *)(param_1 + 8)) {
      CowData<Vector<Vector2>>::_ref
                ((CowData<Vector<Vector2>> *)(this + 0x290),(CowData *)(param_1 + 8));
    }
    this[0x2a8] = (NavigationMeshSourceGeometryData2D)0x1;
    pthread_rwlock_unlock((pthread_rwlock_t *)(this + 0x240));
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(0x23);
}



/* CowData<Vector<Vector2> >::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Vector<Vector2>>::_copy_on_write(CowData<Vector<Vector2>> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  CowData<Vector2> *this_00;
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
  this_00 = (CowData<Vector2> *)(puVar3 + 3);
  lVar6 = 0;
  *puVar3 = 1;
  puVar3[1] = lVar1;
  if (lVar1 != 0) {
    do {
      lVar4 = lVar6 * 0x10 + *(long *)this;
      *(undefined8 *)this_00 = 0;
      if (*(long *)(lVar4 + 8) != 0) {
        CowData<Vector2>::_ref(this_00,(CowData *)(lVar4 + 8));
      }
      lVar6 = lVar6 + 1;
      this_00 = this_00 + 0x10;
    } while (lVar1 != lVar6);
  }
  _unref(this);
  *(undefined8 **)this = puVar3 + 2;
  return;
}



/* CowData<NavigationMeshSourceGeometryData2D::ProjectedObstruction>::_ref(CowData<NavigationMeshSourceGeometryData2D::ProjectedObstruction>
   const&) [clone .part.0] */

void __thiscall
CowData<NavigationMeshSourceGeometryData2D::ProjectedObstruction>::_ref
          (CowData<NavigationMeshSourceGeometryData2D::ProjectedObstruction> *this,CowData *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  _unref(this);
  if (*(long *)param_1 != 0) {
    plVar1 = (long *)(*(long *)param_1 + -0x10);
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



/* NavigationMeshSourceGeometryData2D::_get_projected_obstructions() const */

void NavigationMeshSourceGeometryData2D::_get_projected_obstructions(void)

{
  int iVar1;
  long in_RSI;
  long in_RDI;
  
  do {
    iVar1 = pthread_rwlock_rdlock((pthread_rwlock_t *)(in_RSI + 0x240));
  } while (iVar1 == 0xb);
  if (iVar1 != 0x23) {
    *(undefined8 *)(in_RDI + 8) = 0;
    if (*(long *)(in_RSI + 0x2b8) != 0) {
      CowData<NavigationMeshSourceGeometryData2D::ProjectedObstruction>::_ref
                ((CowData<NavigationMeshSourceGeometryData2D::ProjectedObstruction> *)(in_RDI + 8),
                 (CowData *)(in_RSI + 0x2b8));
    }
    pthread_rwlock_unlock((pthread_rwlock_t *)(in_RSI + 0x240));
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(0x23);
}



/* NavigationMeshSourceGeometryData2D::set_data(Vector<Vector<Vector2> > const&,
   Vector<Vector<Vector2> > const&,
   Vector<NavigationMeshSourceGeometryData2D::ProjectedObstruction>&) */

void __thiscall
NavigationMeshSourceGeometryData2D::set_data
          (NavigationMeshSourceGeometryData2D *this,Vector *param_1,Vector *param_2,Vector *param_3)

{
  int iVar1;
  
  iVar1 = pthread_rwlock_wrlock((pthread_rwlock_t *)(this + 0x240));
  if (iVar1 != 0x23) {
    if (*(long *)(this + 0x280) != *(long *)(param_1 + 8)) {
      CowData<Vector<Vector2>>::_ref
                ((CowData<Vector<Vector2>> *)(this + 0x280),(CowData *)(param_1 + 8));
    }
    if (*(long *)(this + 0x290) != *(long *)(param_2 + 8)) {
      CowData<Vector<Vector2>>::_ref
                ((CowData<Vector<Vector2>> *)(this + 0x290),(CowData *)(param_2 + 8));
    }
    if (*(long *)(this + 0x2b8) != *(long *)(param_3 + 8)) {
      CowData<NavigationMeshSourceGeometryData2D::ProjectedObstruction>::_ref
                ((CowData<NavigationMeshSourceGeometryData2D::ProjectedObstruction> *)(this + 0x2b8)
                 ,(CowData *)(param_3 + 8));
    }
    this[0x2a8] = (NavigationMeshSourceGeometryData2D)0x1;
    pthread_rwlock_unlock((pthread_rwlock_t *)(this + 0x240));
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(0x23);
}



/* NavigationMeshSourceGeometryData2D::get_data(Vector<Vector<Vector2> >&, Vector<Vector<Vector2>
   >&, Vector<NavigationMeshSourceGeometryData2D::ProjectedObstruction>&) */

void __thiscall
NavigationMeshSourceGeometryData2D::get_data
          (NavigationMeshSourceGeometryData2D *this,Vector *param_1,Vector *param_2,Vector *param_3)

{
  int iVar1;
  
  do {
    iVar1 = pthread_rwlock_rdlock((pthread_rwlock_t *)(this + 0x240));
  } while (iVar1 == 0xb);
  if (iVar1 != 0x23) {
    if (*(long *)(param_1 + 8) != *(long *)(this + 0x280)) {
      CowData<Vector<Vector2>>::_ref
                ((CowData<Vector<Vector2>> *)(param_1 + 8),(CowData *)(this + 0x280));
    }
    if (*(long *)(param_2 + 8) != *(long *)(this + 0x290)) {
      CowData<Vector<Vector2>>::_ref
                ((CowData<Vector<Vector2>> *)(param_2 + 8),(CowData *)(this + 0x290));
    }
    if (*(long *)(param_3 + 8) != *(long *)(this + 0x2b8)) {
      CowData<NavigationMeshSourceGeometryData2D::ProjectedObstruction>::_ref
                ((CowData<NavigationMeshSourceGeometryData2D::ProjectedObstruction> *)(param_3 + 8),
                 (CowData *)(this + 0x2b8));
    }
    pthread_rwlock_unlock((pthread_rwlock_t *)(this + 0x240));
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(0x23);
}



/* CowData<NavigationMeshSourceGeometryData2D::ProjectedObstruction>::_copy_on_write() [clone
   .isra.0] */

void __thiscall
CowData<NavigationMeshSourceGeometryData2D::ProjectedObstruction>::_copy_on_write
          (CowData<NavigationMeshSourceGeometryData2D::ProjectedObstruction> *this)

{
  CowData<float> *pCVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  CowData<float> *pCVar5;
  CowData<float> *this_00;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar6 = 0x10;
  if (lVar2 * 0x18 != 0) {
    uVar6 = lVar2 * 0x18 - 1;
    uVar6 = uVar6 | uVar6 >> 1;
    uVar6 = uVar6 | uVar6 >> 2;
    uVar6 = uVar6 | uVar6 >> 4;
    uVar6 = uVar6 | uVar6 >> 8;
    uVar6 = uVar6 | uVar6 >> 0x10;
    uVar6 = (uVar6 | uVar6 >> 0x20) + 0x11;
  }
  pCVar5 = (CowData<float> *)Memory::alloc_static(uVar6,false);
  if (pCVar5 == (CowData<float> *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  pCVar1 = pCVar5 + 0x10;
  lVar8 = 0;
  lVar7 = -0x18 - (long)pCVar5;
  *(undefined8 *)pCVar5 = 1;
  *(long *)(pCVar5 + 8) = lVar2;
  if (lVar2 != 0) {
    do {
      this_00 = pCVar5 + 0x18;
      lVar4 = *(long *)this + lVar7;
      *(undefined8 *)this_00 = 0;
      if (*(long *)(this_00 + lVar4 + 8) != 0) {
        CowData<float>::_ref(this_00,(CowData *)(this_00 + lVar4 + 8));
      }
      lVar8 = lVar8 + 1;
      pCVar5[0x20] = this_00[lVar4 + 0x10];
      pCVar5 = this_00;
    } while (lVar2 != lVar8);
  }
  _unref(this);
  *(CowData<float> **)this = pCVar1;
  return;
}



/* NavigationMeshSourceGeometryData2D::get_bounds() */

undefined1  [16] __thiscall
NavigationMeshSourceGeometryData2D::get_bounds(NavigationMeshSourceGeometryData2D *this)

{
  pthread_rwlock_t *__rwlock;
  float *pfVar1;
  float fVar2;
  float fVar3;
  long lVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  int iVar7;
  NavigationMeshSourceGeometryData2D NVar8;
  long lVar9;
  long lVar10;
  float *pfVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  __rwlock = (pthread_rwlock_t *)(this + 0x240);
  do {
    iVar7 = pthread_rwlock_rdlock(__rwlock);
  } while (iVar7 == 0xb);
  if (iVar7 != 0x23) {
    NVar8 = this[0x2a8];
    if (NVar8 == (NavigationMeshSourceGeometryData2D)0x0) {
      pthread_rwlock_unlock(__rwlock);
    }
    else {
      pthread_rwlock_unlock(__rwlock);
      iVar7 = pthread_rwlock_wrlock(__rwlock);
      if (iVar7 == 0x23) goto LAB_0010366b;
      this[0x2a8] = (NavigationMeshSourceGeometryData2D)0x0;
      *(undefined8 *)(this + 0x298) = 0;
      *(undefined8 *)(this + 0x2a0) = 0;
      CowData<Vector<Vector2>>::_copy_on_write((CowData<Vector<Vector2>> *)(this + 0x280));
      lVar13 = *(long *)(this + 0x280);
      CowData<Vector<Vector2>>::_copy_on_write((CowData<Vector<Vector2>> *)(this + 0x280));
      lVar15 = *(long *)(this + 0x280);
      if (lVar15 != 0) {
        lVar15 = lVar15 + *(long *)(lVar15 + -8) * 0x10;
      }
      for (; lVar15 != lVar13; lVar13 = lVar13 + 0x10) {
        pfVar11 = *(float **)(lVar13 + 8);
        if ((pfVar11 != (float *)0x0) &&
           (pfVar1 = pfVar11 + *(long *)(pfVar11 + -2) * 2, pfVar1 != pfVar11)) {
          if (NVar8 == (NavigationMeshSourceGeometryData2D)0x0) goto LAB_001031e4;
          *(undefined8 *)(this + 0x298) = *(undefined8 *)pfVar11;
          while (pfVar11 = pfVar11 + 2, pfVar1 != pfVar11) {
LAB_001031e4:
            fVar16 = *(float *)(this + 0x2a0);
            if ((fVar16 < 0.0) || (fVar17 = *(float *)(this + 0x2a4), fVar17 < 0.0)) {
              _err_print_error("expand_to","./core/math/rect2.h",0x100,
                               "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                               ,0,0);
              fVar17 = *(float *)(this + 0x2a4);
              fVar16 = *(float *)(this + 0x2a0);
            }
            fVar19 = *(float *)(this + 0x298);
            fVar18 = pfVar11[1];
            fVar2 = *(float *)(this + 0x29c);
            fVar3 = *pfVar11;
            fVar21 = fVar18;
            if (fVar2 <= fVar18) {
              fVar21 = fVar2;
            }
            fVar20 = fVar3;
            if (fVar19 <= fVar3) {
              fVar20 = fVar19;
            }
            if (fVar3 <= fVar16 + fVar19) {
              fVar3 = fVar16 + fVar19;
            }
            if (fVar18 <= fVar17 + fVar2) {
              fVar18 = fVar17 + fVar2;
            }
            *(ulong *)(this + 0x298) = CONCAT44(fVar21,fVar20);
            *(ulong *)(this + 0x2a0) = CONCAT44(fVar18 - fVar21,fVar3 - fVar20);
          }
          NVar8 = (NavigationMeshSourceGeometryData2D)0x0;
        }
      }
      CowData<Vector<Vector2>>::_copy_on_write((CowData<Vector<Vector2>> *)(this + 0x290));
      lVar13 = *(long *)(this + 0x290);
      CowData<Vector<Vector2>>::_copy_on_write((CowData<Vector<Vector2>> *)(this + 0x290));
      lVar15 = *(long *)(this + 0x290);
      if (lVar15 != 0) {
        lVar15 = lVar15 + *(long *)(lVar15 + -8) * 0x10;
      }
      for (; lVar13 != lVar15; lVar13 = lVar13 + 0x10) {
        pfVar11 = *(float **)(lVar13 + 8);
        if ((pfVar11 != (float *)0x0) &&
           (pfVar1 = pfVar11 + *(long *)(pfVar11 + -2) * 2, pfVar1 != pfVar11)) {
          if (NVar8 == (NavigationMeshSourceGeometryData2D)0x0) goto LAB_0010330c;
          *(undefined8 *)(this + 0x298) = *(undefined8 *)pfVar11;
          while (pfVar11 = pfVar11 + 2, pfVar1 != pfVar11) {
LAB_0010330c:
            fVar16 = *(float *)(this + 0x2a0);
            if ((fVar16 < 0.0) || (fVar17 = *(float *)(this + 0x2a4), fVar17 < 0.0)) {
              _err_print_error("expand_to","./core/math/rect2.h",0x100,
                               "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                               ,0,0);
              fVar17 = *(float *)(this + 0x2a4);
              fVar16 = *(float *)(this + 0x2a0);
            }
            fVar19 = *(float *)(this + 0x298);
            fVar18 = pfVar11[1];
            fVar2 = *(float *)(this + 0x29c);
            fVar3 = *pfVar11;
            fVar21 = fVar18;
            if (fVar2 <= fVar18) {
              fVar21 = fVar2;
            }
            fVar20 = fVar3;
            if (fVar19 <= fVar3) {
              fVar20 = fVar19;
            }
            if (fVar3 <= fVar16 + fVar19) {
              fVar3 = fVar16 + fVar19;
            }
            if (fVar18 <= fVar17 + fVar2) {
              fVar18 = fVar17 + fVar2;
            }
            *(ulong *)(this + 0x298) = CONCAT44(fVar21,fVar20);
            *(ulong *)(this + 0x2a0) = CONCAT44(fVar18 - fVar21,fVar3 - fVar20);
          }
          NVar8 = (NavigationMeshSourceGeometryData2D)0x0;
        }
      }
      CowData<NavigationMeshSourceGeometryData2D::ProjectedObstruction>::_copy_on_write
                ((CowData<NavigationMeshSourceGeometryData2D::ProjectedObstruction> *)(this + 0x2b8)
                );
      lVar15 = *(long *)(this + 0x2b8);
      CowData<NavigationMeshSourceGeometryData2D::ProjectedObstruction>::_copy_on_write
                ((CowData<NavigationMeshSourceGeometryData2D::ProjectedObstruction> *)(this + 0x2b8)
                );
      lVar13 = *(long *)(this + 0x2b8);
      if (lVar13 != 0) {
        lVar13 = lVar13 + *(long *)(lVar13 + -8) * 0x18;
      }
      for (; lVar15 != lVar13; lVar15 = lVar15 + 0x18) {
        lVar10 = *(long *)(lVar15 + 8);
        if (lVar10 != 0) {
          lVar14 = 1;
          lVar12 = 0;
          do {
            lVar4 = *(long *)(lVar10 + -8);
            if (lVar4 / 2 <= lVar12) break;
            lVar9 = lVar14;
            if (lVar4 <= lVar14) {
LAB_001035d2:
              _err_print_index_error
                        ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar4,"p_index","size()","",
                         false,true);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar5 = (code *)invalidInstructionException();
              (*pcVar5)();
            }
            lVar9 = lVar12 * 2;
            fVar16 = *(float *)(lVar10 + lVar14 * 4);
            if (lVar4 <= lVar9) goto LAB_001035d2;
            fVar17 = *(float *)(lVar10 + lVar12 * 8);
            if (NVar8 == (NavigationMeshSourceGeometryData2D)0x0) {
              fVar19 = *(float *)(this + 0x2a0);
              if ((fVar19 < 0.0) || (fVar18 = *(float *)(this + 0x2a4), fVar18 < 0.0)) {
                _err_print_error("expand_to","./core/math/rect2.h",0x100,
                                 "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                                 ,0,0);
                fVar18 = *(float *)(this + 0x2a4);
                fVar19 = *(float *)(this + 0x2a0);
              }
              fVar2 = *(float *)(this + 0x298);
              fVar3 = *(float *)(this + 0x29c);
              fVar21 = fVar17;
              if (fVar2 <= fVar17) {
                fVar21 = fVar2;
              }
              if (fVar17 <= fVar19 + fVar2) {
                fVar17 = fVar19 + fVar2;
              }
              fVar19 = fVar16;
              if (fVar3 <= fVar16) {
                fVar19 = fVar3;
              }
              if (fVar16 <= fVar18 + fVar3) {
                fVar16 = fVar18 + fVar3;
              }
              *(float *)(this + 0x298) = fVar21;
              *(float *)(this + 0x29c) = fVar19;
              *(float *)(this + 0x2a0) = fVar17 - fVar21;
              *(float *)(this + 0x2a4) = fVar16 - fVar19;
              lVar10 = *(long *)(lVar15 + 8);
            }
            else {
              *(ulong *)(this + 0x298) = CONCAT44(fVar16,fVar17);
            }
            lVar12 = lVar12 + 1;
            lVar14 = lVar14 + 2;
            NVar8 = (NavigationMeshSourceGeometryData2D)0x0;
          } while (lVar10 != 0);
        }
      }
      pthread_rwlock_unlock(__rwlock);
    }
    do {
      iVar7 = pthread_rwlock_rdlock(__rwlock);
    } while (iVar7 == 0xb);
    if (iVar7 != 0x23) {
      auVar6 = *(undefined1 (*) [16])(this + 0x298);
      pthread_rwlock_unlock(__rwlock);
      return auVar6;
    }
  }
LAB_0010366b:
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(0x23);
}



/* NavigationMeshSourceGeometryData2D::clear_projected_obstructions() */

void __thiscall
NavigationMeshSourceGeometryData2D::clear_projected_obstructions
          (NavigationMeshSourceGeometryData2D *this)

{
  int iVar1;
  
  iVar1 = pthread_rwlock_wrlock((pthread_rwlock_t *)(this + 0x240));
  if (iVar1 != 0x23) {
    if ((*(long *)(this + 0x2b8) != 0) && (*(long *)(*(long *)(this + 0x2b8) + -8) != 0)) {
      CowData<NavigationMeshSourceGeometryData2D::ProjectedObstruction>::_unref
                ((CowData<NavigationMeshSourceGeometryData2D::ProjectedObstruction> *)(this + 0x2b8)
                );
    }
    this[0x2a8] = (NavigationMeshSourceGeometryData2D)0x1;
    pthread_rwlock_unlock((pthread_rwlock_t *)(this + 0x240));
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(0x23);
}



/* NavigationMeshSourceGeometryData2D::clear() */

void __thiscall NavigationMeshSourceGeometryData2D::clear(NavigationMeshSourceGeometryData2D *this)

{
  int iVar1;
  
  iVar1 = pthread_rwlock_wrlock((pthread_rwlock_t *)(this + 0x240));
  if (iVar1 != 0x23) {
    if ((*(long *)(this + 0x280) != 0) && (*(long *)(*(long *)(this + 0x280) + -8) != 0)) {
      CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)(this + 0x280));
    }
    if ((*(long *)(this + 0x290) != 0) && (*(long *)(*(long *)(this + 0x290) + -8) != 0)) {
      CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)(this + 0x290));
    }
    if ((*(long *)(this + 0x2b8) != 0) && (*(long *)(*(long *)(this + 0x2b8) + -8) != 0)) {
      CowData<NavigationMeshSourceGeometryData2D::ProjectedObstruction>::_unref
                ((CowData<NavigationMeshSourceGeometryData2D::ProjectedObstruction> *)(this + 0x2b8)
                );
    }
    this[0x2a8] = (NavigationMeshSourceGeometryData2D)0x1;
    pthread_rwlock_unlock((pthread_rwlock_t *)(this + 0x240));
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(0x23);
}



/* NavigationMeshSourceGeometryData2D::set_traversable_outlines(TypedArray<Vector<Vector2> > const&)
    */

void __thiscall
NavigationMeshSourceGeometryData2D::set_traversable_outlines
          (NavigationMeshSourceGeometryData2D *this,TypedArray *param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  Variant local_58 [8];
  long local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = pthread_rwlock_wrlock((pthread_rwlock_t *)(this + 0x240));
  if (iVar4 == 0x23) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(0x23);
  }
  lVar6 = 0;
  iVar4 = Array::size();
  CowData<Vector<Vector2>>::resize<false>((CowData<Vector<Vector2>> *)(this + 0x280),(long)iVar4);
  while( true ) {
    iVar4 = Array::size();
    if (iVar4 <= (int)lVar6) {
      this[0x2a8] = (NavigationMeshSourceGeometryData2D)0x1;
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        pthread_rwlock_unlock((pthread_rwlock_t *)(this + 0x240));
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    Array::operator[]((int)param_1);
    Variant::operator_cast_to_Vector(local_58);
    if (*(long *)(this + 0x280) == 0) break;
    lVar7 = *(long *)(*(long *)(this + 0x280) + -8);
    if (lVar7 <= lVar6) goto LAB_001038eb;
    CowData<Vector<Vector2>>::_copy_on_write((CowData<Vector<Vector2>> *)(this + 0x280));
    lVar3 = local_50;
    lVar5 = lVar6 * 0x10 + *(long *)(this + 0x280);
    lVar7 = *(long *)(lVar5 + 8);
    if (lVar7 == local_50) {
      if (lVar7 != 0) {
        LOCK();
        plVar1 = (long *)(lVar7 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
    }
    else {
      if (lVar7 != 0) {
        LOCK();
        plVar1 = (long *)(lVar7 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar7 = *(long *)(lVar5 + 8);
          *(undefined8 *)(lVar5 + 8) = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
        else {
          *(undefined8 *)(lVar5 + 8) = 0;
        }
      }
      *(long *)(lVar5 + 8) = local_50;
    }
    lVar6 = lVar6 + 1;
  }
  lVar7 = 0;
LAB_001038eb:
  _err_print_index_error
            ("operator[]","./core/templates/vector.h",0x38,lVar6,lVar7,"p_index",
             "((Vector<T> *)(this))->_cowdata.size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* NavigationMeshSourceGeometryData2D::set_obstruction_outlines(TypedArray<Vector<Vector2> > const&)
    */

void __thiscall
NavigationMeshSourceGeometryData2D::set_obstruction_outlines
          (NavigationMeshSourceGeometryData2D *this,TypedArray *param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  Variant local_58 [8];
  long local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = pthread_rwlock_wrlock((pthread_rwlock_t *)(this + 0x240));
  if (iVar4 == 0x23) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(0x23);
  }
  lVar6 = 0;
  iVar4 = Array::size();
  CowData<Vector<Vector2>>::resize<false>((CowData<Vector<Vector2>> *)(this + 0x290),(long)iVar4);
  while( true ) {
    iVar4 = Array::size();
    if (iVar4 <= (int)lVar6) {
      this[0x2a8] = (NavigationMeshSourceGeometryData2D)0x1;
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        pthread_rwlock_unlock((pthread_rwlock_t *)(this + 0x240));
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    Array::operator[]((int)param_1);
    Variant::operator_cast_to_Vector(local_58);
    if (*(long *)(this + 0x290) == 0) break;
    lVar7 = *(long *)(*(long *)(this + 0x290) + -8);
    if (lVar7 <= lVar6) goto LAB_00103adb;
    CowData<Vector<Vector2>>::_copy_on_write((CowData<Vector<Vector2>> *)(this + 0x290));
    lVar3 = local_50;
    lVar5 = lVar6 * 0x10 + *(long *)(this + 0x290);
    lVar7 = *(long *)(lVar5 + 8);
    if (lVar7 == local_50) {
      if (lVar7 != 0) {
        LOCK();
        plVar1 = (long *)(lVar7 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
    }
    else {
      if (lVar7 != 0) {
        LOCK();
        plVar1 = (long *)(lVar7 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar7 = *(long *)(lVar5 + 8);
          *(undefined8 *)(lVar5 + 8) = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
        else {
          *(undefined8 *)(lVar5 + 8) = 0;
        }
      }
      *(long *)(lVar5 + 8) = local_50;
    }
    lVar6 = lVar6 + 1;
  }
  lVar7 = 0;
LAB_00103adb:
  _err_print_index_error
            ("operator[]","./core/templates/vector.h",0x38,lVar6,lVar7,"p_index",
             "((Vector<T> *)(this))->_cowdata.size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* NavigationMeshSourceGeometryData2D::append_traversable_outlines(TypedArray<Vector<Vector2> >
   const&) */

void __thiscall
NavigationMeshSourceGeometryData2D::append_traversable_outlines
          (NavigationMeshSourceGeometryData2D *this,TypedArray *param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long in_FS_OFFSET;
  Variant local_58 [8];
  long local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = pthread_rwlock_wrlock((pthread_rwlock_t *)(this + 0x240));
  if (iVar4 == 0x23) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(0x23);
  }
  if (*(long *)(this + 0x280) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(long *)(this + 0x280) + -8);
  }
  lVar7 = (long)iVar4;
  iVar5 = Array::size();
  CowData<Vector<Vector2>>::resize<false>
            ((CowData<Vector<Vector2>> *)(this + 0x280),(long)(iVar5 + iVar4));
  iVar5 = Array::size();
  if (iVar4 < iVar5) {
    do {
      Array::operator[]((int)param_1);
      Variant::operator_cast_to_Vector(local_58);
      lVar8 = *(long *)(this + 0x280);
      if (lVar7 < 0) {
        if (lVar8 != 0) {
LAB_00103d25:
          lVar8 = *(long *)(lVar8 + -8);
          goto LAB_00103d29;
        }
LAB_00103d70:
        lVar8 = 0;
LAB_00103d29:
        _err_print_index_error
                  ("operator[]","./core/templates/vector.h",0x38,lVar7,lVar8,"p_index",
                   "((Vector<T> *)(this))->_cowdata.size()","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if (lVar8 == 0) goto LAB_00103d70;
      if (*(long *)(lVar8 + -8) <= lVar7) goto LAB_00103d25;
      CowData<Vector<Vector2>>::_copy_on_write((CowData<Vector<Vector2>> *)(this + 0x280));
      lVar3 = local_50;
      lVar6 = lVar7 * 0x10 + *(long *)(this + 0x280);
      lVar8 = *(long *)(lVar6 + 8);
      if (lVar8 == local_50) {
        if (lVar8 != 0) {
          LOCK();
          plVar1 = (long *)(lVar8 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_50 = 0;
            Memory::free_static((void *)(lVar3 + -0x10),false);
          }
        }
      }
      else {
        if (lVar8 != 0) {
          LOCK();
          plVar1 = (long *)(lVar8 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar8 = *(long *)(lVar6 + 8);
            *(undefined8 *)(lVar6 + 8) = 0;
            Memory::free_static((void *)(lVar8 + -0x10),false);
          }
          else {
            *(undefined8 *)(lVar6 + 8) = 0;
          }
        }
        *(long *)(lVar6 + 8) = local_50;
      }
      iVar4 = iVar4 + 1;
      lVar7 = lVar7 + 1;
      iVar5 = Array::size();
    } while (iVar4 < iVar5);
  }
  this[0x2a8] = (NavigationMeshSourceGeometryData2D)0x1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    pthread_rwlock_unlock((pthread_rwlock_t *)(this + 0x240));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationMeshSourceGeometryData2D::append_obstruction_outlines(TypedArray<Vector<Vector2> >
   const&) */

void __thiscall
NavigationMeshSourceGeometryData2D::append_obstruction_outlines
          (NavigationMeshSourceGeometryData2D *this,TypedArray *param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long in_FS_OFFSET;
  Variant local_58 [8];
  long local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = pthread_rwlock_wrlock((pthread_rwlock_t *)(this + 0x240));
  if (iVar4 == 0x23) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(0x23);
  }
  if (*(long *)(this + 0x290) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(long *)(this + 0x290) + -8);
  }
  lVar7 = (long)iVar4;
  iVar5 = Array::size();
  CowData<Vector<Vector2>>::resize<false>
            ((CowData<Vector<Vector2>> *)(this + 0x290),(long)(iVar5 + iVar4));
  iVar5 = Array::size();
  if (iVar4 < iVar5) {
    do {
      Array::operator[]((int)param_1);
      Variant::operator_cast_to_Vector(local_58);
      lVar8 = *(long *)(this + 0x290);
      if (lVar7 < 0) {
        if (lVar8 != 0) {
LAB_00103f55:
          lVar8 = *(long *)(lVar8 + -8);
          goto LAB_00103f59;
        }
LAB_00103fa0:
        lVar8 = 0;
LAB_00103f59:
        _err_print_index_error
                  ("operator[]","./core/templates/vector.h",0x38,lVar7,lVar8,"p_index",
                   "((Vector<T> *)(this))->_cowdata.size()","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if (lVar8 == 0) goto LAB_00103fa0;
      if (*(long *)(lVar8 + -8) <= lVar7) goto LAB_00103f55;
      CowData<Vector<Vector2>>::_copy_on_write((CowData<Vector<Vector2>> *)(this + 0x290));
      lVar3 = local_50;
      lVar6 = lVar7 * 0x10 + *(long *)(this + 0x290);
      lVar8 = *(long *)(lVar6 + 8);
      if (lVar8 == local_50) {
        if (lVar8 != 0) {
          LOCK();
          plVar1 = (long *)(lVar8 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_50 = 0;
            Memory::free_static((void *)(lVar3 + -0x10),false);
          }
        }
      }
      else {
        if (lVar8 != 0) {
          LOCK();
          plVar1 = (long *)(lVar8 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar8 = *(long *)(lVar6 + 8);
            *(undefined8 *)(lVar6 + 8) = 0;
            Memory::free_static((void *)(lVar8 + -0x10),false);
          }
          else {
            *(undefined8 *)(lVar6 + 8) = 0;
          }
        }
        *(long *)(lVar6 + 8) = local_50;
      }
      iVar4 = iVar4 + 1;
      lVar7 = lVar7 + 1;
      iVar5 = Array::size();
    } while (iVar4 < iVar5);
  }
  this[0x2a8] = (NavigationMeshSourceGeometryData2D)0x1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    pthread_rwlock_unlock((pthread_rwlock_t *)(this + 0x240));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Vector<Vector<Vector2> >::push_back(Vector<Vector2>) [clone .isra.0] */

void __thiscall Vector<Vector<Vector2>>::push_back(Vector<Vector<Vector2>> *this,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(this + 8) == 0) {
    lVar3 = 1;
  }
  else {
    lVar3 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar1 = CowData<Vector<Vector2>>::resize<false>((CowData<Vector<Vector2>> *)(this + 8),lVar3);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar2 = -1;
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(*(long *)(this + 8) + -8);
      lVar2 = lVar3 + -1;
      if (-1 < lVar2) {
        CowData<Vector<Vector2>>::_copy_on_write((CowData<Vector<Vector2>> *)(this + 8));
        lVar3 = *(long *)(this + 8) + lVar2 * 0x10;
        if (*(long *)(lVar3 + 8) == *(long *)(param_2 + 8)) {
          return;
        }
        CowData<Vector2>::_ref((CowData<Vector2> *)(lVar3 + 8),(CowData *)(param_2 + 8));
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar2,lVar3,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* NavigationMeshSourceGeometryData2D::add_obstruction_outline(Vector<Vector2> const&) */

void __thiscall
NavigationMeshSourceGeometryData2D::add_obstruction_outline
          (NavigationMeshSourceGeometryData2D *this,Vector *param_1)

{
  long *plVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  bool bVar7;
  long local_60 [2];
  long local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(param_1 + 8) == 0) || (*(long *)(*(long *)(param_1 + 8) + -8) < 2)) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    iVar3 = pthread_rwlock_wrlock((pthread_rwlock_t *)(this + 0x240));
    if (iVar3 == 0x23) {
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(0x23);
    }
    local_60[0] = 0;
    if (*(long *)(param_1 + 8) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(*(long *)(param_1 + 8) + -8);
    }
    CowData<Vector2>::resize<false>((CowData<Vector2> *)local_60,lVar4);
    lVar4 = *(long *)(param_1 + 8);
    for (lVar6 = 0; (lVar4 != 0 && (lVar6 < *(long *)(lVar4 + -8))); lVar6 = lVar6 + 1) {
      if (local_60[0] == 0) {
        lVar5 = 0;
LAB_001041e4:
        _err_print_index_error
                  ("operator[]","./core/templates/vector.h",0x38,lVar6,lVar5,"p_index",
                   "((Vector<T> *)(this))->_cowdata.size()","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar5 = *(long *)(local_60[0] + -8);
      if (lVar5 <= lVar6) goto LAB_001041e4;
      CowData<Vector2>::_copy_on_write((CowData<Vector2> *)local_60);
      *(undefined8 *)(local_60[0] + lVar6 * 8) = *(undefined8 *)(lVar4 + lVar6 * 8);
      lVar4 = *(long *)(param_1 + 8);
    }
    local_50 = 0;
    plVar1 = (long *)(local_60[0] + -0x10);
    if (local_60[0] == 0) {
      Vector<Vector<Vector2>>::push_back((Vector<Vector<Vector2>> *)(this + 0x288));
    }
    else {
      do {
        lVar4 = *plVar1;
        if (lVar4 == 0) goto LAB_00104271;
        LOCK();
        lVar6 = *plVar1;
        bVar7 = lVar4 == lVar6;
        if (bVar7) {
          *plVar1 = lVar4 + 1;
          lVar6 = lVar4;
        }
        UNLOCK();
      } while (!bVar7);
      if (lVar6 != -1) {
        local_50 = local_60[0];
      }
LAB_00104271:
      lVar4 = local_50;
      Vector<Vector<Vector2>>::push_back((Vector<Vector<Vector2>> *)(this + 0x288));
      if (lVar4 != 0) {
        LOCK();
        plVar1 = (long *)(lVar4 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_50 + -0x10),false);
        }
      }
    }
    this[0x2a8] = (NavigationMeshSourceGeometryData2D)0x1;
    if (local_60[0] != 0) {
      LOCK();
      plVar1 = (long *)(local_60[0] + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_60[0] + -0x10),false);
      }
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      pthread_rwlock_unlock((pthread_rwlock_t *)(this + 0x240));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationMeshSourceGeometryData2D::add_traversable_outline(Vector<Vector2> const&) */

void __thiscall
NavigationMeshSourceGeometryData2D::add_traversable_outline
          (NavigationMeshSourceGeometryData2D *this,Vector *param_1)

{
  long *plVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  bool bVar7;
  long local_60 [2];
  long local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(param_1 + 8) == 0) || (*(long *)(*(long *)(param_1 + 8) + -8) < 2)) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    iVar3 = pthread_rwlock_wrlock((pthread_rwlock_t *)(this + 0x240));
    if (iVar3 == 0x23) {
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(0x23);
    }
    local_60[0] = 0;
    if (*(long *)(param_1 + 8) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(*(long *)(param_1 + 8) + -8);
    }
    CowData<Vector2>::resize<false>((CowData<Vector2> *)local_60,lVar4);
    lVar4 = *(long *)(param_1 + 8);
    for (lVar6 = 0; (lVar4 != 0 && (lVar6 < *(long *)(lVar4 + -8))); lVar6 = lVar6 + 1) {
      if (local_60[0] == 0) {
        lVar5 = 0;
LAB_00104434:
        _err_print_index_error
                  ("operator[]","./core/templates/vector.h",0x38,lVar6,lVar5,"p_index",
                   "((Vector<T> *)(this))->_cowdata.size()","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar5 = *(long *)(local_60[0] + -8);
      if (lVar5 <= lVar6) goto LAB_00104434;
      CowData<Vector2>::_copy_on_write((CowData<Vector2> *)local_60);
      *(undefined8 *)(local_60[0] + lVar6 * 8) = *(undefined8 *)(lVar4 + lVar6 * 8);
      lVar4 = *(long *)(param_1 + 8);
    }
    local_50 = 0;
    plVar1 = (long *)(local_60[0] + -0x10);
    if (local_60[0] == 0) {
      Vector<Vector<Vector2>>::push_back((Vector<Vector<Vector2>> *)(this + 0x278));
    }
    else {
      do {
        lVar4 = *plVar1;
        if (lVar4 == 0) goto LAB_001044c1;
        LOCK();
        lVar6 = *plVar1;
        bVar7 = lVar4 == lVar6;
        if (bVar7) {
          *plVar1 = lVar4 + 1;
          lVar6 = lVar4;
        }
        UNLOCK();
      } while (!bVar7);
      if (lVar6 != -1) {
        local_50 = local_60[0];
      }
LAB_001044c1:
      lVar4 = local_50;
      Vector<Vector<Vector2>>::push_back((Vector<Vector<Vector2>> *)(this + 0x278));
      if (lVar4 != 0) {
        LOCK();
        plVar1 = (long *)(lVar4 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_50 + -0x10),false);
        }
      }
    }
    this[0x2a8] = (NavigationMeshSourceGeometryData2D)0x1;
    if (local_60[0] != 0) {
      LOCK();
      plVar1 = (long *)(local_60[0] + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_60[0] + -0x10),false);
      }
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      pthread_rwlock_unlock((pthread_rwlock_t *)(this + 0x240));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationMeshSourceGeometryData2D::_add_obstruction_outline(Vector<Vector2> const&) */

void __thiscall
NavigationMeshSourceGeometryData2D::_add_obstruction_outline
          (NavigationMeshSourceGeometryData2D *this,Vector *param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long in_FS_OFFSET;
  bool bVar5;
  undefined1 auStack_38 [8];
  long local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(param_1 + 8) == 0) || (*(long *)(*(long *)(param_1 + 8) + -8) < 2)) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    iVar3 = pthread_rwlock_wrlock((pthread_rwlock_t *)(this + 0x240));
    if (iVar3 == 0x23) {
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(0x23);
    }
    local_30 = 0;
    plVar1 = (long *)(*(long *)(param_1 + 8) + -0x10);
    if (*(long *)(param_1 + 8) == 0) {
      Vector<Vector<Vector2>>::push_back((Vector<Vector<Vector2>> *)(this + 0x288),auStack_38);
    }
    else {
      do {
        lVar2 = *plVar1;
        if (lVar2 == 0) goto LAB_00104631;
        LOCK();
        lVar4 = *plVar1;
        bVar5 = lVar2 == lVar4;
        if (bVar5) {
          *plVar1 = lVar2 + 1;
          lVar4 = lVar2;
        }
        UNLOCK();
      } while (!bVar5);
      if (lVar4 != -1) {
        local_30 = *(long *)(param_1 + 8);
      }
LAB_00104631:
      lVar2 = local_30;
      Vector<Vector<Vector2>>::push_back((Vector<Vector<Vector2>> *)(this + 0x288));
      if (lVar2 != 0) {
        LOCK();
        plVar1 = (long *)(lVar2 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_30 + -0x10),false);
        }
      }
    }
    this[0x2a8] = (NavigationMeshSourceGeometryData2D)0x1;
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      pthread_rwlock_unlock((pthread_rwlock_t *)(this + 0x240));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationMeshSourceGeometryData2D::_add_traversable_outline(Vector<Vector2> const&) */

void __thiscall
NavigationMeshSourceGeometryData2D::_add_traversable_outline
          (NavigationMeshSourceGeometryData2D *this,Vector *param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long in_FS_OFFSET;
  bool bVar5;
  undefined1 auStack_38 [8];
  long local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(param_1 + 8) == 0) || (*(long *)(*(long *)(param_1 + 8) + -8) < 2)) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    iVar3 = pthread_rwlock_wrlock((pthread_rwlock_t *)(this + 0x240));
    if (iVar3 == 0x23) {
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(0x23);
    }
    local_30 = 0;
    plVar1 = (long *)(*(long *)(param_1 + 8) + -0x10);
    if (*(long *)(param_1 + 8) == 0) {
      Vector<Vector<Vector2>>::push_back((Vector<Vector<Vector2>> *)(this + 0x278),auStack_38);
    }
    else {
      do {
        lVar2 = *plVar1;
        if (lVar2 == 0) goto LAB_00104761;
        LOCK();
        lVar4 = *plVar1;
        bVar5 = lVar2 == lVar4;
        if (bVar5) {
          *plVar1 = lVar2 + 1;
          lVar4 = lVar2;
        }
        UNLOCK();
      } while (!bVar5);
      if (lVar4 != -1) {
        local_30 = *(long *)(param_1 + 8);
      }
LAB_00104761:
      lVar2 = local_30;
      Vector<Vector<Vector2>>::push_back((Vector<Vector<Vector2>> *)(this + 0x278));
      if (lVar2 != 0) {
        LOCK();
        plVar1 = (long *)(lVar2 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_30 + -0x10),false);
        }
      }
    }
    this[0x2a8] = (NavigationMeshSourceGeometryData2D)0x1;
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      pthread_rwlock_unlock((pthread_rwlock_t *)(this + 0x240));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationMeshSourceGeometryData2D::merge(Ref<NavigationMeshSourceGeometryData2D> const&) */

void __thiscall
NavigationMeshSourceGeometryData2D::merge(NavigationMeshSourceGeometryData2D *this,Ref *param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  Vector local_88 [8];
  long local_80;
  Vector local_78 [8];
  long local_70;
  Vector local_68 [8];
  long local_60;
  undefined1 local_58 [8];
  undefined8 local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(NavigationMeshSourceGeometryData2D **)param_1 == (NavigationMeshSourceGeometryData2D *)0x0)
  {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("merge","scene/resources/2d/navigation_mesh_source_geometry_data_2d.cpp",0xb3
                       ,"Condition \"p_other_geometry.is_null()\" is true.",0,0);
      return;
    }
  }
  else {
    local_80 = 0;
    local_70 = 0;
    local_60 = 0;
    get_data(*(NavigationMeshSourceGeometryData2D **)param_1,local_88,local_78,local_68);
    iVar1 = pthread_rwlock_wrlock((pthread_rwlock_t *)(this + 0x240));
    if (iVar1 == 0x23) {
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(0x23);
    }
    local_50[0] = 0;
    if (local_80 != 0) {
      CowData<Vector<Vector2>>::_ref((CowData<Vector<Vector2>> *)local_50,(CowData *)&local_80);
    }
    Vector<Vector<Vector2>>::append_array((Vector<Vector<Vector2>> *)(this + 0x278),local_58);
    CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)local_50);
    local_50[0] = 0;
    if (local_70 != 0) {
      CowData<Vector<Vector2>>::_ref((CowData<Vector<Vector2>> *)local_50,(CowData *)&local_70);
    }
    Vector<Vector<Vector2>>::append_array((Vector<Vector<Vector2>> *)(this + 0x288),local_58);
    CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)local_50);
    local_50[0] = 0;
    if (local_60 != 0) {
      CowData<NavigationMeshSourceGeometryData2D::ProjectedObstruction>::_ref
                ((CowData<NavigationMeshSourceGeometryData2D::ProjectedObstruction> *)local_50,
                 (CowData *)&local_60);
    }
    Vector<NavigationMeshSourceGeometryData2D::ProjectedObstruction>::append_array
              ((Vector<NavigationMeshSourceGeometryData2D::ProjectedObstruction> *)(this + 0x2b0),
               local_58);
    CowData<NavigationMeshSourceGeometryData2D::ProjectedObstruction>::_unref
              ((CowData<NavigationMeshSourceGeometryData2D::ProjectedObstruction> *)local_50);
    this[0x2a8] = (NavigationMeshSourceGeometryData2D)0x1;
    pthread_rwlock_unlock((pthread_rwlock_t *)(this + 0x240));
    CowData<NavigationMeshSourceGeometryData2D::ProjectedObstruction>::_unref
              ((CowData<NavigationMeshSourceGeometryData2D::ProjectedObstruction> *)&local_60);
    CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)&local_70);
    CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)&local_80);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Vector<NavigationMeshSourceGeometryData2D::ProjectedObstruction>::push_back(NavigationMeshSourceGeometryData2D::ProjectedObstruction)
   [clone .isra.0] */

void __thiscall
Vector<NavigationMeshSourceGeometryData2D::ProjectedObstruction>::push_back
          (Vector<NavigationMeshSourceGeometryData2D::ProjectedObstruction> *this,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(this + 8) == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar1 = CowData<NavigationMeshSourceGeometryData2D::ProjectedObstruction>::resize<false>
                    ((CowData<NavigationMeshSourceGeometryData2D::ProjectedObstruction> *)(this + 8)
                     ,lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<NavigationMeshSourceGeometryData2D::ProjectedObstruction>::_copy_on_write
                  ((CowData<NavigationMeshSourceGeometryData2D::ProjectedObstruction> *)(this + 8));
        lVar2 = *(long *)(this + 8) + lVar3 * 0x18;
        if (*(long *)(lVar2 + 8) != *(long *)(param_2 + 8)) {
          CowData<float>::_ref((CowData<float> *)(lVar2 + 8),(CowData *)(param_2 + 8));
        }
        *(undefined1 *)(lVar2 + 0x10) = *(undefined1 *)(param_2 + 0x10);
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar3,lVar2,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00104e69) */
/* NavigationMeshSourceGeometryData2D::set_projected_obstructions(Array const&) */

void __thiscall
NavigationMeshSourceGeometryData2D::set_projected_obstructions
          (NavigationMeshSourceGeometryData2D *this,Array *param_1)

{
  pthread_rwlock_t *__rwlock;
  Vector<NavigationMeshSourceGeometryData2D::ProjectedObstruction> *pVVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  Variant *pVVar12;
  long in_FS_OFFSET;
  Variant local_80 [8];
  Variant local_78 [8];
  long local_70;
  undefined1 local_68;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  __rwlock = (pthread_rwlock_t *)(this + 0x240);
  iVar8 = pthread_rwlock_wrlock(__rwlock);
  if (iVar8 == 0x23) {
LAB_00104f2d:
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(0x23);
  }
  if ((*(long *)(this + 0x2b8) != 0) && (*(long *)(*(long *)(this + 0x2b8) + -8) != 0)) {
    CowData<NavigationMeshSourceGeometryData2D::ProjectedObstruction>::_unref
              ((CowData<NavigationMeshSourceGeometryData2D::ProjectedObstruction> *)(this + 0x2b8));
  }
  this[0x2a8] = (NavigationMeshSourceGeometryData2D)0x1;
  iVar8 = 0;
  pthread_rwlock_unlock(__rwlock);
  do {
    iVar9 = Array::size();
    if (iVar9 <= iVar8) {
LAB_00104df0:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    Array::operator[]((int)param_1);
    Variant::operator_cast_to_Dictionary(local_80);
    Variant::Variant((Variant *)local_58,"version");
    cVar7 = Dictionary::has(local_80);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (cVar7 == '\0') {
      _err_print_error("set_projected_obstructions",
                       "scene/resources/2d/navigation_mesh_source_geometry_data_2d.cpp",0xdb,
                       "Condition \"!data.has(\"version\")\" is true.",0,0);
LAB_00104e95:
      Dictionary::~Dictionary((Dictionary *)local_80);
      goto LAB_00104df0;
    }
    Variant::Variant((Variant *)local_58,"version");
    pVVar12 = (Variant *)Dictionary::operator[](local_80);
    uVar10 = Variant::operator_cast_to_unsigned_int(pVVar12);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (uVar10 == 1) {
      Variant::Variant((Variant *)local_58,"vertices");
      cVar7 = Dictionary::has(local_80);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (cVar7 == '\0') {
        _err_print_error("set_projected_obstructions",
                         "scene/resources/2d/navigation_mesh_source_geometry_data_2d.cpp",0xe0,
                         "Condition \"!data.has(\"vertices\")\" is true.",0,0);
        goto LAB_00104e95;
      }
      Variant::Variant((Variant *)local_58,"carve");
      cVar7 = Dictionary::has(local_80);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (cVar7 == '\0') {
        _err_print_error("set_projected_obstructions",
                         "scene/resources/2d/navigation_mesh_source_geometry_data_2d.cpp",0xe1,
                         "Condition \"!data.has(\"carve\")\" is true.",0,0);
        Dictionary::~Dictionary((Dictionary *)local_80);
        goto LAB_00104df0;
      }
    }
    Variant::Variant((Variant *)local_58,"vertices");
    Dictionary::operator[](local_80);
    Variant::operator_cast_to_Vector(local_78);
    lVar5 = local_70;
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_58,"carve");
    pVVar12 = (Variant *)Dictionary::operator[](local_80);
    bVar6 = Variant::operator_cast_to_bool(pVVar12);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    iVar9 = pthread_rwlock_wrlock(__rwlock);
    if (iVar9 == 0x23) goto LAB_00104f2d;
    local_70 = 0;
    pVVar1 = (Vector<NavigationMeshSourceGeometryData2D::ProjectedObstruction> *)(this + 0x2b0);
    local_68 = bVar6;
    if (lVar5 == 0) {
      Vector<NavigationMeshSourceGeometryData2D::ProjectedObstruction>::push_back(pVVar1,local_78);
      this[0x2a8] = (NavigationMeshSourceGeometryData2D)0x1;
      pthread_rwlock_unlock(__rwlock);
    }
    else {
      plVar2 = (long *)(lVar5 + -0x10);
      do {
        lVar4 = *plVar2;
        if (lVar4 == 0) goto LAB_00104e48;
        LOCK();
        lVar11 = *plVar2;
        bVar6 = lVar4 == lVar11;
        if (bVar6) {
          *plVar2 = lVar4 + 1;
          lVar11 = lVar4;
        }
        UNLOCK();
      } while (!bVar6);
      if (lVar11 == -1) {
LAB_00104e48:
        Vector<NavigationMeshSourceGeometryData2D::ProjectedObstruction>::push_back(pVVar1);
      }
      else {
        local_70 = lVar5;
        Vector<NavigationMeshSourceGeometryData2D::ProjectedObstruction>::push_back(pVVar1);
        LOCK();
        plVar3 = (long *)(lVar5 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          Memory::free_static((void *)(local_70 + -0x10),false);
        }
      }
      this[0x2a8] = (NavigationMeshSourceGeometryData2D)0x1;
      pthread_rwlock_unlock(__rwlock);
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        Memory::free_static(plVar2,false);
      }
    }
    iVar8 = iVar8 + 1;
    Dictionary::~Dictionary((Dictionary *)local_80);
  } while( true );
}



/* NavigationMeshSourceGeometryData2D::_set(StringName const&, Variant const&) */

ulong NavigationMeshSourceGeometryData2D::_set(StringName *param_1,Variant *param_2)

{
  ulong uVar1;
  long in_FS_OFFSET;
  Variant local_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = StringName::operator==((StringName *)param_2,"projected_obstructions");
  if ((char)uVar1 != '\0') {
    Variant::operator_cast_to_Array(local_28);
    set_projected_obstructions((NavigationMeshSourceGeometryData2D *)param_1,(Array *)local_28);
    Array::~Array((Array *)local_28);
    uVar1 = uVar1 & 0xff;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x001051fd) */
/* NavigationMeshSourceGeometryData2D::add_projected_obstruction(Vector<Vector2> const&, bool) */

void __thiscall
NavigationMeshSourceGeometryData2D::add_projected_obstruction
          (NavigationMeshSourceGeometryData2D *this,Vector *param_1,bool param_2)

{
  ulong *__dest;
  long lVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  ulong *puVar5;
  long lVar6;
  undefined8 *puVar7;
  size_t __n;
  ulong *puVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  bool bVar10;
  undefined1 local_58 [8];
  ulong *local_50;
  undefined1 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(param_1 + 8) == 0) || (lVar2 = *(long *)(*(long *)(param_1 + 8) + -8), lVar2 < 2))
  {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("add_projected_obstruction",
                       "scene/resources/2d/navigation_mesh_source_geometry_data_2d.cpp",0xc3,
                       "Condition \"p_vertices.size() < 2\" is true.",0,0);
      return;
    }
  }
  else {
    if ((lVar2 * 8 == 0) ||
       (uVar4 = lVar2 * 8 - 1, uVar4 = uVar4 | uVar4 >> 1, uVar4 = uVar4 | uVar4 >> 2,
       uVar4 = uVar4 | uVar4 >> 4, uVar4 = uVar4 | uVar4 >> 8, uVar4 = uVar4 | uVar4 >> 0x10,
       uVar4 = uVar4 | uVar4 >> 0x20, uVar4 == 0xffffffffffffffff)) {
      puVar8 = (ulong *)0x0;
      _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                       "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                       ,0,0);
    }
    else {
      puVar5 = (ulong *)Memory::alloc_static(uVar4 + 0x11,false);
      if (puVar5 == (ulong *)0x0) {
        puVar8 = (ulong *)0x0;
        _err_print_error("resize","./core/templates/cowdata.h",0x171,
                         "Parameter \"mem_new\" is null.",0,0);
      }
      else {
        puVar8 = puVar5 + 2;
        *puVar5 = 1;
        puVar5[1] = lVar2 * 2;
        if (1 < *puVar5) {
          uVar4 = puVar5[1];
          uVar9 = 0x10;
          __n = uVar4 * 4;
          if (__n != 0) {
            uVar9 = __n - 1 | __n - 1 >> 1;
            uVar9 = uVar9 | uVar9 >> 2;
            uVar9 = uVar9 | uVar9 >> 4;
            uVar9 = uVar9 | uVar9 >> 8;
            uVar9 = uVar9 | uVar9 >> 0x10;
            uVar9 = (uVar9 | uVar9 >> 0x20) + 0x11;
          }
          puVar7 = (undefined8 *)Memory::alloc_static(uVar9,false);
          if (puVar7 == (undefined8 *)0x0) {
            _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                             "Parameter \"mem_new\" is null.",0,0);
          }
          else {
            __dest = puVar7 + 2;
            *puVar7 = 1;
            puVar7[1] = uVar4;
            memcpy(__dest,puVar8,__n);
            LOCK();
            *puVar5 = *puVar5 - 1;
            UNLOCK();
            puVar8 = __dest;
            if (*puVar5 == 0) {
              Memory::free_static(puVar5,false);
            }
          }
        }
      }
    }
    lVar2 = *(long *)(param_1 + 8);
    local_48 = param_2;
    if ((lVar2 == 0) || (lVar1 = lVar2 + *(long *)(lVar2 + -8) * 8, lVar1 == lVar2)) {
      iVar3 = pthread_rwlock_wrlock((pthread_rwlock_t *)(this + 0x240));
      if (iVar3 == 0x23) goto LAB_001053f7;
      local_50 = (ulong *)0x0;
      if (puVar8 == (ulong *)0x0) {
        Vector<NavigationMeshSourceGeometryData2D::ProjectedObstruction>::push_back
                  ((Vector<NavigationMeshSourceGeometryData2D::ProjectedObstruction> *)
                   (this + 0x2b0),local_58);
        this[0x2a8] = (NavigationMeshSourceGeometryData2D)0x1;
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          pthread_rwlock_unlock((pthread_rwlock_t *)(this + 0x240));
          return;
        }
        goto LAB_001053f2;
      }
    }
    else {
      lVar6 = 4;
      do {
        *(undefined4 *)((long)puVar8 + lVar6 + -4) = *(undefined4 *)(lVar2 + -4 + lVar6);
        *(undefined4 *)((long)puVar8 + lVar6) = *(undefined4 *)(lVar2 + lVar6);
        lVar6 = lVar6 + 8;
      } while (lVar6 != (lVar1 - lVar2) + 4);
      iVar3 = pthread_rwlock_wrlock((pthread_rwlock_t *)(this + 0x240));
      if (iVar3 == 0x23) {
LAB_001053f7:
                    /* WARNING: Subroutine does not return */
        std::__throw_system_error(0x23);
      }
    }
    local_50 = (ulong *)0x0;
    puVar5 = puVar8 + -2;
    do {
      uVar4 = *puVar5;
      if (uVar4 == 0) goto LAB_001051e0;
      LOCK();
      uVar9 = *puVar5;
      bVar10 = uVar4 == uVar9;
      if (bVar10) {
        *puVar5 = uVar4 + 1;
        uVar9 = uVar4;
      }
      UNLOCK();
    } while (!bVar10);
    if (uVar9 == 0xffffffffffffffff) {
LAB_001051e0:
      Vector<NavigationMeshSourceGeometryData2D::ProjectedObstruction>::push_back
                ((Vector<NavigationMeshSourceGeometryData2D::ProjectedObstruction> *)(this + 0x2b0))
      ;
    }
    else {
      local_50 = puVar8;
      Vector<NavigationMeshSourceGeometryData2D::ProjectedObstruction>::push_back
                ((Vector<NavigationMeshSourceGeometryData2D::ProjectedObstruction> *)(this + 0x2b0))
      ;
      LOCK();
      puVar8 = puVar8 + -2;
      *puVar8 = *puVar8 - 1;
      UNLOCK();
      if (*puVar8 == 0) {
        Memory::free_static(local_50 + -2,false);
      }
    }
    this[0x2a8] = (NavigationMeshSourceGeometryData2D)0x1;
    pthread_rwlock_unlock((pthread_rwlock_t *)(this + 0x240));
    LOCK();
    *puVar5 = *puVar5 - 1;
    UNLOCK();
    if (*puVar5 == 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(puVar5,false);
        return;
      }
    }
    else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
LAB_001053f2:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* NavigationMeshSourceGeometryData2D::is_class_ptr(void*) const */

uint __thiscall
NavigationMeshSourceGeometryData2D::is_class_ptr
          (NavigationMeshSourceGeometryData2D *this,void *param_1)

{
  return (uint)CONCAT71(0x1102,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1102,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1102,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1102,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* NavigationMeshSourceGeometryData2D::_validate_propertyv(PropertyInfo&) const */

void NavigationMeshSourceGeometryData2D::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* NavigationMeshSourceGeometryData2D::_property_can_revertv(StringName const&) const */

undefined8 NavigationMeshSourceGeometryData2D::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* NavigationMeshSourceGeometryData2D::_property_get_revertv(StringName const&, Variant&) const */

undefined8
NavigationMeshSourceGeometryData2D::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* NavigationMeshSourceGeometryData2D::_notificationv(int, bool) */

void NavigationMeshSourceGeometryData2D::_notificationv(int param_1,bool param_2)

{
  return;
}



/* MethodBindTR<Rect2>::_gen_argument_type(int) const */

undefined8 MethodBindTR<Rect2>::_gen_argument_type(int param_1)

{
  return 7;
}



/* MethodBindTR<Rect2>::get_argument_meta(int) const */

undefined8 MethodBindTR<Rect2>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<Array>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Array>::_gen_argument_type(int param_1)

{
  return 0x1c;
}



/* MethodBindTRC<Array>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Array>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Array const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Array_const&>::_gen_argument_type(MethodBindT<Array_const&> *this,int param_1)

{
  return -(param_1 == 0) & 0x1c;
}



/* MethodBindT<Array const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Array_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Vector<Vector2> const&, bool>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<Vector<Vector2>const&,bool>::_gen_argument_type
          (MethodBindT<Vector<Vector2>const&,bool> *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  if ((uint)param_1 < 2) {
    cVar1 = (-(param_1 == 0) & 0x22U) + 1;
  }
  return cVar1;
}



/* MethodBindT<Vector<Vector2> const&, bool>::get_argument_meta(int) const */

undefined8 MethodBindT<Vector<Vector2>const&,bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Ref<NavigationMeshSourceGeometryData2D> const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Ref<NavigationMeshSourceGeometryData2D>const&>::_gen_argument_type
          (MethodBindT<Ref<NavigationMeshSourceGeometryData2D>const&> *this,int param_1)

{
  return -(param_1 == 0) & 0x18;
}



/* MethodBindT<Ref<NavigationMeshSourceGeometryData2D> const&>::get_argument_meta(int) const */

undefined8
MethodBindT<Ref<NavigationMeshSourceGeometryData2D>const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Vector<Vector2> const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Vector<Vector2>const&>::_gen_argument_type
          (MethodBindT<Vector<Vector2>const&> *this,int param_1)

{
  return -(param_1 == 0) & 0x23;
}



/* MethodBindT<Vector<Vector2> const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Vector<Vector2>const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<TypedArray<Vector<Vector2> >>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<TypedArray<Vector<Vector2>>>::_gen_argument_type(int param_1)

{
  return 0x1c;
}



/* MethodBindTRC<TypedArray<Vector<Vector2> >>::get_argument_meta(int) const */

undefined8 MethodBindTRC<TypedArray<Vector<Vector2>>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<TypedArray<Vector<Vector2> > const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<TypedArray<Vector<Vector2>>const&>::_gen_argument_type
          (MethodBindT<TypedArray<Vector<Vector2>>const&> *this,int param_1)

{
  return -(param_1 == 0) & 0x1c;
}



/* MethodBindT<TypedArray<Vector<Vector2> > const&>::get_argument_meta(int) const */

undefined8 MethodBindT<TypedArray<Vector<Vector2>>const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<bool>::_gen_argument_type(int) const */

undefined8 MethodBindTR<bool>::_gen_argument_type(int param_1)

{
  return 1;
}



/* MethodBindTR<bool>::get_argument_meta(int) const */

undefined8 MethodBindTR<bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<>::_gen_argument_type(int) const */

undefined8 MethodBindT<>::_gen_argument_type(int param_1)

{
  return 0;
}



/* MethodBindT<>::_gen_argument_type_info(int) const */

undefined8 MethodBindT<>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  
  *(undefined4 *)CONCAT44(in_register_0000003c,param_1) = 0;
  *(undefined4 *)(CONCAT44(in_register_0000003c,param_1) + 0x18) = 0;
  *(undefined8 *)(CONCAT44(in_register_0000003c,param_1) + 0x20) = 0;
  *(undefined4 *)(CONCAT44(in_register_0000003c,param_1) + 0x28) = 6;
  *(undefined1 (*) [16])(CONCAT44(in_register_0000003c,param_1) + 8) = (undefined1  [16])0x0;
  return CONCAT44(in_register_0000003c,param_1);
}



/* MethodBindT<>::get_argument_meta(int) const */

undefined8 MethodBindT<>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<bool>::~MethodBindTR() */

void __thiscall MethodBindTR<bool>::~MethodBindTR(MethodBindTR<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010fee0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<bool>::~MethodBindTR() */

void __thiscall MethodBindTR<bool>::~MethodBindTR(MethodBindTR<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010fee0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<TypedArray<Vector<Vector2> >>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TypedArray<Vector<Vector2>>>::~MethodBindTRC
          (MethodBindTRC<TypedArray<Vector<Vector2>>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010ffa0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<TypedArray<Vector<Vector2> >>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TypedArray<Vector<Vector2>>>::~MethodBindTRC
          (MethodBindTRC<TypedArray<Vector<Vector2>>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010ffa0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<TypedArray<Vector<Vector2> > const&>::~MethodBindT() */

void __thiscall
MethodBindT<TypedArray<Vector<Vector2>>const&>::~MethodBindT
          (MethodBindT<TypedArray<Vector<Vector2>>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010ff40;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<TypedArray<Vector<Vector2> > const&>::~MethodBindT() */

void __thiscall
MethodBindT<TypedArray<Vector<Vector2>>const&>::~MethodBindT
          (MethodBindT<TypedArray<Vector<Vector2>>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010ff40;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Vector<Vector2> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Vector<Vector2>const&>::~MethodBindT(MethodBindT<Vector<Vector2>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00110000;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Vector<Vector2> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Vector<Vector2>const&>::~MethodBindT(MethodBindT<Vector<Vector2>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00110000;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Ref<NavigationMeshSourceGeometryData2D> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<NavigationMeshSourceGeometryData2D>const&>::~MethodBindT
          (MethodBindT<Ref<NavigationMeshSourceGeometryData2D>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00110060;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Ref<NavigationMeshSourceGeometryData2D> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<NavigationMeshSourceGeometryData2D>const&>::~MethodBindT
          (MethodBindT<Ref<NavigationMeshSourceGeometryData2D>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00110060;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Vector<Vector2> const&, bool>::~MethodBindT() */

void __thiscall
MethodBindT<Vector<Vector2>const&,bool>::~MethodBindT(MethodBindT<Vector<Vector2>const&,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001100c0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Vector<Vector2> const&, bool>::~MethodBindT() */

void __thiscall
MethodBindT<Vector<Vector2>const&,bool>::~MethodBindT(MethodBindT<Vector<Vector2>const&,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001100c0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010fe80;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010fe80;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Array const&>::~MethodBindT() */

void __thiscall MethodBindT<Array_const&>::~MethodBindT(MethodBindT<Array_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00110120;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Array const&>::~MethodBindT() */

void __thiscall MethodBindT<Array_const&>::~MethodBindT(MethodBindT<Array_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00110120;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Array>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Array>::~MethodBindTRC(MethodBindTRC<Array> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00110180;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Array>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Array>::~MethodBindTRC(MethodBindTRC<Array> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00110180;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Rect2>::~MethodBindTR() */

void __thiscall MethodBindTR<Rect2>::~MethodBindTR(MethodBindTR<Rect2> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001101e0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Rect2>::~MethodBindTR() */

void __thiscall MethodBindTR<Rect2>::~MethodBindTR(MethodBindTR<Rect2> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001101e0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* NavigationMeshSourceGeometryData2D::_get_class_namev() const */

undefined8 * NavigationMeshSourceGeometryData2D::_get_class_namev(void)

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
LAB_00105a43:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00105a43;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "NavigationMeshSourceGeometryData2D");
      goto LAB_00105aae;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,
             "NavigationMeshSourceGeometryData2D");
LAB_00105aae:
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



/* NavigationMeshSourceGeometryData2D::_getv(StringName const&, Variant&) const */

undefined4 __thiscall
NavigationMeshSourceGeometryData2D::_getv
          (NavigationMeshSourceGeometryData2D *this,StringName *param_1,Variant *param_2)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  Array local_50 [8];
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = StringName::operator==(param_1,"projected_obstructions");
  if ((char)uVar1 != '\0') {
    get_projected_obstructions();
    Variant::Variant((Variant *)local_48,local_50);
    if (Variant::needs_deinit[*(int *)param_2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_2 = local_48[0];
    *(undefined8 *)(param_2 + 8) = local_40;
    *(undefined8 *)(param_2 + 0x10) = uStack_38;
    Array::~Array(local_50);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationMeshSourceGeometryData2D::get_class() const */

void NavigationMeshSourceGeometryData2D::get_class(void)

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



/* MethodBindTRC<TypedArray<Vector<Vector2> >>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<TypedArray<Vector<Vector2>>>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  long local_28;
  long local_20;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = 0;
  Variant::get_type_name(&local_38,0x23);
  *puVar3 = 0x1c;
  puVar3[6] = 0x1f;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_38 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_38);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_28,(String *)(puVar3 + 8),false);
      if (*(long *)(puVar3 + 4) == local_28) {
        lVar2 = local_38;
        if ((StringName::configured != '\0') && (local_28 != 0)) {
          StringName::unref();
          lVar2 = local_38;
        }
      }
      else {
        StringName::unref();
        *(long *)(puVar3 + 4) = local_28;
        lVar2 = local_38;
      }
      goto joined_r0x0010608c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_30);
  lVar2 = local_38;
joined_r0x0010608c:
  local_38 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_38 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_30 != 0)) {
    StringName::unref();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<bool>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC4;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 1;
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
      goto joined_r0x0010620c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010620c:
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



/* MethodBindTRC<Array>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Array>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC4;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 0x1c;
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
      goto joined_r0x0010638c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010638c:
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



/* MethodBindTR<Rect2>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<Rect2>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC4;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 7;
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
      goto joined_r0x0010650c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010650c:
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
LAB_001066c8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001066c8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x001066e6;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x001066e6:
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
LAB_00106ac8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00106ac8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00106ae5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00106ae5:
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



/* NavigationMeshSourceGeometryData2D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*,
   bool) const */

void __thiscall
NavigationMeshSourceGeometryData2D::_get_property_listv
          (NavigationMeshSourceGeometryData2D *this,List *param_1,bool param_2)

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
  local_78 = "NavigationMeshSourceGeometryData2D";
  local_70 = 0x22;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "NavigationMeshSourceGeometryData2D";
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
LAB_00106f18:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00106f18;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00106f35;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00106f35:
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
  StringName::StringName((StringName *)&local_78,"NavigationMeshSourceGeometryData2D",false);
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



/* NavigationMeshSourceGeometryData2D::is_class(String const&) const */

undefined8 __thiscall
NavigationMeshSourceGeometryData2D::is_class
          (NavigationMeshSourceGeometryData2D *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
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
            if (lVar5 == 0) goto LAB_001072af;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar5 == lVar7;
            if (bVar9) {
              *plVar1 = lVar5 + 1;
              lVar7 = lVar5;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
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
LAB_001072af:
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
    if (cVar6 != '\0') goto LAB_00107363;
  }
  cVar6 = String::operator==(param_1,"NavigationMeshSourceGeometryData2D");
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
              if (lVar5 == 0) goto LAB_001074ab;
              LOCK();
              lVar7 = *plVar1;
              bVar9 = lVar5 == lVar7;
              if (bVar9) {
                *plVar1 = lVar5 + 1;
                lVar7 = lVar5;
              }
              UNLOCK();
            } while (!bVar9);
            if (lVar7 != -1) {
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
LAB_001074ab:
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
      if (cVar6 != '\0') goto LAB_00107363;
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
                if (lVar5 == 0) goto LAB_0010758b;
                LOCK();
                lVar7 = *plVar1;
                bVar9 = lVar5 == lVar7;
                if (bVar9) {
                  *plVar1 = lVar5 + 1;
                  lVar7 = lVar5;
                }
                UNLOCK();
              } while (!bVar9);
              if (lVar7 != -1) {
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
LAB_0010758b:
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
        if (cVar6 != '\0') goto LAB_00107363;
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
                  if (lVar5 == 0) goto LAB_00107433;
                  LOCK();
                  lVar7 = *plVar1;
                  bVar9 = lVar5 == lVar7;
                  if (bVar9) {
                    *plVar1 = lVar5 + 1;
                    lVar7 = lVar5;
                  }
                  UNLOCK();
                } while (!bVar9);
                if (lVar7 != -1) {
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
LAB_00107433:
          cVar6 = String::operator==(param_1,(String *)&local_60);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          if (cVar6 != '\0') goto LAB_00107363;
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar8 = String::operator==(param_1,"Object");
          return uVar8;
        }
        goto LAB_001076a1;
      }
    }
  }
LAB_00107363:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001076a1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<TypedArray<Vector<Vector2> > const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<TypedArray<Vector<Vector2>>const&>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long lVar4;
  undefined8 uVar5;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar6;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  long local_60;
  undefined4 local_58;
  undefined1 local_50 [16];
  int local_40;
  long local_38;
  undefined4 local_30;
  long local_20;
  
  puVar6 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar6 = 0;
  puVar6[6] = 0;
  *(undefined8 *)(puVar6 + 8) = 0;
  puVar6[10] = 6;
  *(undefined1 (*) [16])(puVar6 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_001076f7;
  local_68 = 0;
  Variant::get_type_name((CowData *)&local_70,0x23);
  local_58 = 0x1c;
  local_40 = 0x1f;
  local_38 = 0;
  local_50 = (undefined1  [16])0x0;
  if (local_70 == 0) {
LAB_001077c8:
    local_30 = 6;
    StringName::operator=((StringName *)(local_50 + 8),(StringName *)&local_68);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_38,(CowData *)&local_70);
    local_30 = 6;
    if (local_40 != 0x11) goto LAB_001077c8;
    StringName::StringName((StringName *)&local_60,(String *)&local_38,false);
    if (local_50._8_8_ == local_60) {
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_50._8_8_ = local_60;
    }
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
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  *puVar6 = local_58;
  if (*(long *)(puVar6 + 2) != local_50._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar6 + 2));
    uVar5 = local_50._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_50._8_8_;
    local_50 = auVar2 << 0x40;
    *(undefined8 *)(puVar6 + 2) = uVar5;
  }
  if (*(long *)(puVar6 + 4) != local_50._8_8_) {
    StringName::unref();
    uVar5 = local_50._8_8_;
    local_50._8_8_ = 0;
    *(undefined8 *)(puVar6 + 4) = uVar5;
  }
  lVar4 = local_38;
  puVar6[6] = local_40;
  if (*(long *)(puVar6 + 8) == local_38) {
    puVar6[10] = local_30;
    if (local_38 != 0) {
      LOCK();
      plVar1 = (long *)(local_38 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_38 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar6 + 8));
    *(long *)(puVar6 + 8) = local_38;
    puVar6[10] = local_30;
  }
  if ((StringName::configured != '\0') && (local_50._8_8_ != 0)) {
    StringName::unref();
  }
  uVar5 = local_50._0_8_;
  if (local_50._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_50._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_50._8_8_;
      local_50 = auVar3 << 0x40;
      Memory::free_static((void *)(uVar5 + -0x10),false);
    }
  }
LAB_001076f7:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar6;
}



/* MethodBindT<Array const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Array_const&>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  long lVar5;
  undefined8 uVar6;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar7;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  long local_60;
  undefined *local_58;
  undefined1 local_50 [16];
  int local_40;
  long local_38;
  undefined4 local_30;
  long local_20;
  
  puVar7 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar7 = 0;
  puVar7[6] = 0;
  *(undefined8 *)(puVar7 + 8) = 0;
  puVar7[10] = 6;
  *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_00107997;
  local_68 = 0;
  local_58 = &_LC4;
  local_70 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_50._8_8_;
  local_50 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_70);
  local_58 = (undefined *)CONCAT44(local_58._4_4_,0x1c);
  local_40 = 0;
  local_38 = 0;
  local_50 = (undefined1  [16])0x0;
  if (local_70 == 0) {
LAB_00107a88:
    local_30 = 6;
    StringName::operator=((StringName *)(local_50 + 8),(StringName *)&local_68);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_38,(CowData *)&local_70);
    local_30 = 6;
    if (local_40 != 0x11) goto LAB_00107a88;
    StringName::StringName((StringName *)&local_60,(String *)&local_38,false);
    if (local_50._8_8_ == local_60) {
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_50._8_8_ = local_60;
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
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  *puVar7 = local_58._0_4_;
  if (*(long *)(puVar7 + 2) != local_50._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar7 + 2));
    uVar6 = local_50._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_50._8_8_;
    local_50 = auVar3 << 0x40;
    *(undefined8 *)(puVar7 + 2) = uVar6;
  }
  if (*(long *)(puVar7 + 4) != local_50._8_8_) {
    StringName::unref();
    uVar6 = local_50._8_8_;
    local_50._8_8_ = 0;
    *(undefined8 *)(puVar7 + 4) = uVar6;
  }
  lVar5 = local_38;
  puVar7[6] = local_40;
  if (*(long *)(puVar7 + 8) == local_38) {
    puVar7[10] = local_30;
    if (local_38 != 0) {
      LOCK();
      plVar1 = (long *)(local_38 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_38 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar7 + 8));
    *(long *)(puVar7 + 8) = local_38;
    puVar7[10] = local_30;
  }
  if ((StringName::configured != '\0') && (local_50._8_8_ != 0)) {
    StringName::unref();
  }
  uVar6 = local_50._0_8_;
  if (local_50._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_50._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_50._8_8_;
      local_50 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar6 + -0x10),false);
    }
  }
LAB_00107997:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar7;
}



/* MethodBindT<Ref<NavigationMeshSourceGeometryData2D> const&>::_gen_argument_type_info(int) const
    */

undefined4 *
MethodBindT<Ref<NavigationMeshSourceGeometryData2D>const&>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long lVar4;
  undefined8 uVar5;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar6;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined1 local_50 [16];
  int local_40;
  long local_38;
  undefined4 local_30;
  long local_20;
  
  puVar6 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar6 = 0;
  puVar6[6] = 0;
  *(undefined8 *)(puVar6 + 8) = 0;
  puVar6[10] = 6;
  *(undefined1 (*) [16])(puVar6 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_00107c57;
  local_68 = 0;
  local_58 = "NavigationMeshSourceGeometryData2D";
  local_70 = 0;
  local_50._0_8_ = 0x22;
  String::parse_latin1((StrRange *)&local_70);
  local_58 = (char *)CONCAT44(local_58._4_4_,0x18);
  local_40 = 0x11;
  local_38 = 0;
  local_50 = (undefined1  [16])0x0;
  if (local_70 == 0) {
LAB_00107e4d:
    local_30 = 6;
    StringName::StringName((StringName *)&local_60,(String *)&local_38,false);
    if (local_50._8_8_ == local_60) {
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_50._8_8_ = local_60;
    }
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_38,(CowData *)&local_70);
    local_30 = 6;
    if (local_40 == 0x11) goto LAB_00107e4d;
    StringName::operator=((StringName *)(local_50 + 8),(StringName *)&local_68);
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
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  *puVar6 = local_58._0_4_;
  if (*(long *)(puVar6 + 2) != local_50._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar6 + 2));
    uVar5 = local_50._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_50._8_8_;
    local_50 = auVar2 << 0x40;
    *(undefined8 *)(puVar6 + 2) = uVar5;
  }
  if (*(long *)(puVar6 + 4) != local_50._8_8_) {
    StringName::unref();
    uVar5 = local_50._8_8_;
    local_50._8_8_ = 0;
    *(undefined8 *)(puVar6 + 4) = uVar5;
  }
  puVar6[6] = local_40;
  if (*(long *)(puVar6 + 8) != local_38) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar6 + 8));
    lVar4 = local_38;
    local_38 = 0;
    *(long *)(puVar6 + 8) = lVar4;
  }
  puVar6[10] = local_30;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
  if ((StringName::configured != '\0') && (local_50._8_8_ != 0)) {
    StringName::unref();
  }
  uVar5 = local_50._0_8_;
  if (local_50._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_50._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_50._8_8_;
      local_50 = auVar3 << 0x40;
      Memory::free_static((void *)(uVar5 + -0x10),false);
    }
  }
LAB_00107c57:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar6;
}



/* MethodBind* create_method_bind<NavigationMeshSourceGeometryData2D>(void
   (NavigationMeshSourceGeometryData2D::*)()) */

MethodBind * create_method_bind<NavigationMeshSourceGeometryData2D>(_func_void *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void **)(this + 0x58) = param_1;
  *(undefined8 *)(this + 0x60) = in_RSI;
  *(undefined ***)this = &PTR__gen_argument_type_0010fe80;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "NavigationMeshSourceGeometryData2D";
  local_30 = 0x22;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
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



/* MethodBind* create_method_bind<NavigationMeshSourceGeometryData2D, bool>(bool
   (NavigationMeshSourceGeometryData2D::*)()) */

MethodBind * create_method_bind<NavigationMeshSourceGeometryData2D,bool>(_func_bool *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010fee0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "NavigationMeshSourceGeometryData2D";
  local_30 = 0x22;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
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



/* MethodBind* create_method_bind<NavigationMeshSourceGeometryData2D, TypedArray<Vector<Vector2> >
   const&>(void (NavigationMeshSourceGeometryData2D::*)(TypedArray<Vector<Vector2> > const&)) */

MethodBind *
create_method_bind<NavigationMeshSourceGeometryData2D,TypedArray<Vector<Vector2>>const&>
          (_func_void_TypedArray_ptr *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_TypedArray_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010ff40;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "NavigationMeshSourceGeometryData2D";
  local_30 = 0x22;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
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



/* MethodBind* create_method_bind<NavigationMeshSourceGeometryData2D, TypedArray<Vector<Vector2>
   >>(TypedArray<Vector<Vector2> > (NavigationMeshSourceGeometryData2D::*)() const) */

MethodBind *
create_method_bind<NavigationMeshSourceGeometryData2D,TypedArray<Vector<Vector2>>>
          (_func_TypedArray *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_TypedArray **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010ffa0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "NavigationMeshSourceGeometryData2D";
  local_30 = 0x22;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
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



/* MethodBind* create_method_bind<NavigationMeshSourceGeometryData2D, Vector<Vector2> const&>(void
   (NavigationMeshSourceGeometryData2D::*)(Vector<Vector2> const&)) */

MethodBind *
create_method_bind<NavigationMeshSourceGeometryData2D,Vector<Vector2>const&>
          (_func_void_Vector_ptr *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_Vector_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00110000;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "NavigationMeshSourceGeometryData2D";
  local_30 = 0x22;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
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



/* MethodBind* create_method_bind<NavigationMeshSourceGeometryData2D,
   Ref<NavigationMeshSourceGeometryData2D> const&>(void
   (NavigationMeshSourceGeometryData2D::*)(Ref<NavigationMeshSourceGeometryData2D> const&)) */

MethodBind *
create_method_bind<NavigationMeshSourceGeometryData2D,Ref<NavigationMeshSourceGeometryData2D>const&>
          (_func_void_Ref_ptr *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_Ref_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00110060;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "NavigationMeshSourceGeometryData2D";
  local_30 = 0x22;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
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



/* MethodBind* create_method_bind<NavigationMeshSourceGeometryData2D, Vector<Vector2> const&,
   bool>(void (NavigationMeshSourceGeometryData2D::*)(Vector<Vector2> const&, bool)) */

MethodBind *
create_method_bind<NavigationMeshSourceGeometryData2D,Vector<Vector2>const&,bool>
          (_func_void_Vector_ptr_bool *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_Vector_ptr_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001100c0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "NavigationMeshSourceGeometryData2D";
  local_30 = 0x22;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
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



/* MethodBind* create_method_bind<NavigationMeshSourceGeometryData2D, Array const&>(void
   (NavigationMeshSourceGeometryData2D::*)(Array const&)) */

MethodBind *
create_method_bind<NavigationMeshSourceGeometryData2D,Array_const&>(_func_void_Array_ptr *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_Array_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00110120;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "NavigationMeshSourceGeometryData2D";
  local_30 = 0x22;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
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



/* MethodBind* create_method_bind<NavigationMeshSourceGeometryData2D, Array>(Array
   (NavigationMeshSourceGeometryData2D::*)() const) */

MethodBind * create_method_bind<NavigationMeshSourceGeometryData2D,Array>(_func_Array *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Array **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00110180;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "NavigationMeshSourceGeometryData2D";
  local_30 = 0x22;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
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



/* MethodBind* create_method_bind<NavigationMeshSourceGeometryData2D, Rect2>(Rect2
   (NavigationMeshSourceGeometryData2D::*)()) */

MethodBind * create_method_bind<NavigationMeshSourceGeometryData2D,Rect2>(_func_Rect2 *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Rect2 **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001101e0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "NavigationMeshSourceGeometryData2D";
  local_30 = 0x22;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
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



/* NavigationMeshSourceGeometryData2D::_bind_methods() [clone .cold] */

void NavigationMeshSourceGeometryData2D::_bind_methods(void)

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



/* Error CowData<Vector2>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<Vector2>::resize<false>(long param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00108adc(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Vector<Vector2> >::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector<Vector2>>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<NavigationMeshSourceGeometryData2D::ProjectedObstruction>::_copy_on_write() [clone
   .isra.0] [clone .cold] */

void CowData<NavigationMeshSourceGeometryData2D::ProjectedObstruction>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* NavigationMeshSourceGeometryData2D::_initialize_classv() */

void NavigationMeshSourceGeometryData2D::_initialize_classv(void)

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
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        if ((code *)PTR__bind_methods_00114008 != RefCounted::_bind_methods) {
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
      if ((code *)_GLOBAL_OFFSET_TABLE_ != RefCounted::_bind_methods) {
        Resource::_bind_methods();
      }
      Resource::initialize_class()::initialized = '\x01';
    }
    local_58 = "Resource";
    local_68 = 0;
    local_50 = 8;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "NavigationMeshSourceGeometryData2D";
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
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



/* CowData<Vector2>::_realloc(long) */

undefined8 __thiscall CowData<Vector2>::_realloc(CowData<Vector2> *this,long param_1)

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



/* CowData<Vector<Vector2> >::_unref() */

void __thiscall CowData<Vector<Vector2>>::_unref(CowData<Vector<Vector2>> *this)

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



/* CowData<NavigationMeshSourceGeometryData2D::ProjectedObstruction>::_unref() */

void __thiscall
CowData<NavigationMeshSourceGeometryData2D::ProjectedObstruction>::_unref
          (CowData<NavigationMeshSourceGeometryData2D::ProjectedObstruction> *this)

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
          lVar6 = lVar6 + 0x18;
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



/* NavigationMeshSourceGeometryData2D::~NavigationMeshSourceGeometryData2D() */

void __thiscall
NavigationMeshSourceGeometryData2D::~NavigationMeshSourceGeometryData2D
          (NavigationMeshSourceGeometryData2D *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010fca8;
  clear(this);
  CowData<NavigationMeshSourceGeometryData2D::ProjectedObstruction>::_unref
            ((CowData<NavigationMeshSourceGeometryData2D::ProjectedObstruction> *)(this + 0x2b8));
  CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)(this + 0x290));
  CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)(this + 0x280));
  Resource::~Resource((Resource *)this);
  return;
}



/* NavigationMeshSourceGeometryData2D::~NavigationMeshSourceGeometryData2D() */

void __thiscall
NavigationMeshSourceGeometryData2D::~NavigationMeshSourceGeometryData2D
          (NavigationMeshSourceGeometryData2D *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010fca8;
  clear(this);
  CowData<NavigationMeshSourceGeometryData2D::ProjectedObstruction>::_unref
            ((CowData<NavigationMeshSourceGeometryData2D::ProjectedObstruction> *)(this + 0x2b8));
  CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)(this + 0x290));
  CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)(this + 0x280));
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x2d8);
  return;
}



/* CowData<Vector<Vector2> >::_realloc(long) */

undefined8 __thiscall
CowData<Vector<Vector2>>::_realloc(CowData<Vector<Vector2>> *this,long param_1)

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
/* Error CowData<Vector<Vector2> >::resize<false>(long) */

undefined8 __thiscall
CowData<Vector<Vector2>>::resize<false>(CowData<Vector<Vector2>> *this,long param_1)

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
LAB_00109770:
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
  if (lVar10 == 0) goto LAB_00109770;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar9 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar9) {
LAB_00109622:
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
        if (*(ulong *)(lVar6 + -8) <= uVar9) goto LAB_00109622;
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
    goto LAB_001097c6;
  }
  if (lVar10 == lVar8) {
LAB_001096df:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_001097c6:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar6 = puVar7[-1];
    if (param_1 <= lVar6) goto LAB_001096c1;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_001096df;
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
LAB_001096c1:
  puVar7[-1] = param_1;
  return 0;
}



/* Vector<Vector<Vector2> >::append_array(Vector<Vector<Vector2> >) */

void __thiscall Vector<Vector<Vector2>>::append_array(Vector<Vector<Vector2>> *this,long param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_2 + 8) == 0) {
    return;
  }
  lVar1 = *(long *)(*(long *)(param_2 + 8) + -8);
  if (lVar1 != 0) {
    if (*(long *)(this + 8) == 0) {
      lVar4 = 0;
      lVar6 = lVar1;
    }
    else {
      lVar4 = *(long *)(*(long *)(this + 8) + -8);
      lVar6 = lVar1 + lVar4;
    }
    CowData<Vector<Vector2>>::resize<false>((CowData<Vector<Vector2>> *)(this + 8),lVar6);
    if (0 < lVar1) {
      lVar4 = lVar4 << 4;
      lVar6 = 0;
      do {
        lVar2 = *(long *)(param_2 + 8);
        if (lVar2 == 0) {
          lVar5 = 0;
LAB_00109896:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar6,lVar5,"p_index","size()","",false
                     ,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        lVar5 = *(long *)(lVar2 + -8);
        if (lVar5 <= lVar6) goto LAB_00109896;
        lVar2 = lVar2 + lVar6 * 0x10;
        CowData<Vector<Vector2>>::_copy_on_write((CowData<Vector<Vector2>> *)(this + 8));
        if (*(long *)(*(long *)(this + 8) + lVar4 + 8) != *(long *)(lVar2 + 8)) {
          CowData<Vector2>::_ref
                    ((CowData<Vector2> *)(*(long *)(this + 8) + lVar4 + 8),(CowData *)(lVar2 + 8));
        }
        lVar6 = lVar6 + 1;
        lVar4 = lVar4 + 0x10;
      } while (lVar6 != lVar1);
    }
  }
  return;
}



/* CowData<float>::_realloc(long) */

undefined8 __thiscall CowData<float>::_realloc(CowData<float> *this,long param_1)

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



/* CowData<NavigationMeshSourceGeometryData2D::ProjectedObstruction>::_realloc(long) */

undefined8 __thiscall
CowData<NavigationMeshSourceGeometryData2D::ProjectedObstruction>::_realloc
          (CowData<NavigationMeshSourceGeometryData2D::ProjectedObstruction> *this,long param_1)

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
/* Error CowData<NavigationMeshSourceGeometryData2D::ProjectedObstruction>::resize<false>(long) */

undefined8 __thiscall
CowData<NavigationMeshSourceGeometryData2D::ProjectedObstruction>::resize<false>
          (CowData<NavigationMeshSourceGeometryData2D::ProjectedObstruction> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
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
    lVar10 = 0;
    lVar7 = 0;
  }
  else {
    lVar10 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar10) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar7 = lVar10 * 0x18;
    if (lVar7 != 0) {
      uVar8 = lVar7 - 1U | lVar7 - 1U >> 1;
      uVar8 = uVar8 | uVar8 >> 2;
      uVar8 = uVar8 | uVar8 >> 4;
      uVar8 = uVar8 | uVar8 >> 8;
      uVar8 = uVar8 | uVar8 >> 0x10;
      lVar7 = (uVar8 | uVar8 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x18 == 0) {
LAB_00109c80:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar8 = param_1 * 0x18 - 1;
  uVar8 = uVar8 >> 1 | uVar8;
  uVar8 = uVar8 | uVar8 >> 2;
  uVar8 = uVar8 | uVar8 >> 4;
  uVar8 = uVar8 | uVar8 >> 8;
  uVar8 = uVar8 | uVar8 >> 0x10;
  uVar8 = uVar8 | uVar8 >> 0x20;
  lVar9 = uVar8 + 1;
  if (lVar9 == 0) goto LAB_00109c80;
  if (param_1 <= lVar10) {
    puVar6 = *(undefined8 **)this;
    uVar8 = param_1;
    while (puVar6 != (undefined8 *)0x0) {
      if ((ulong)puVar6[-1] <= uVar8) {
LAB_00109b41:
        if (lVar9 != lVar7) {
          uVar3 = _realloc(this,lVar9);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          puVar6 = *(undefined8 **)this;
          if (puVar6 == (undefined8 *)0x0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
        }
        goto LAB_00109be5;
      }
      while (puVar6[uVar8 * 3 + 1] == 0) {
        uVar8 = uVar8 + 1;
        if ((ulong)puVar6[-1] <= uVar8) goto LAB_00109b41;
      }
      LOCK();
      plVar1 = (long *)(puVar6[uVar8 * 3 + 1] + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar10 = puVar6[uVar8 * 3 + 1];
        puVar6[uVar8 * 3 + 1] = 0;
        Memory::free_static((void *)(lVar10 + -0x10),false);
      }
      uVar8 = uVar8 + 1;
      puVar6 = *(undefined8 **)this;
    }
    goto LAB_00109cd6;
  }
  if (lVar9 == lVar7) {
LAB_00109c03:
    puVar6 = *(undefined8 **)this;
    if (puVar6 == (undefined8 *)0x0) {
LAB_00109cd6:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar10 = puVar6[-1];
    if (param_1 <= lVar10) goto LAB_00109be5;
  }
  else {
    if (lVar10 != 0) {
      uVar3 = _realloc(this,lVar9);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      goto LAB_00109c03;
    }
    puVar4 = (undefined8 *)Memory::alloc_static(uVar8 + 0x11,false);
    if (puVar4 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar6 = puVar4 + 2;
    *puVar4 = 1;
    puVar4[1] = 0;
    *(undefined8 **)this = puVar6;
    lVar10 = 0;
  }
  puVar4 = puVar6 + lVar10 * 3;
  do {
    puVar4[1] = 0;
    puVar5 = puVar4 + 3;
    *(undefined1 *)(puVar4 + 2) = 0;
    puVar4 = puVar5;
  } while (puVar5 != puVar6 + param_1 * 3);
LAB_00109be5:
  puVar6[-1] = param_1;
  return 0;
}



/* Vector<NavigationMeshSourceGeometryData2D::ProjectedObstruction>::append_array(Vector<NavigationMeshSourceGeometryData2D::ProjectedObstruction>)
    */

void __thiscall
Vector<NavigationMeshSourceGeometryData2D::ProjectedObstruction>::append_array
          (Vector<NavigationMeshSourceGeometryData2D::ProjectedObstruction> *this,long param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if ((*(long *)(param_2 + 8) != 0) && (lVar1 = *(long *)(*(long *)(param_2 + 8) + -8), lVar1 != 0))
  {
    if (*(long *)(this + 8) == 0) {
      lVar5 = 0;
      lVar4 = lVar1;
    }
    else {
      lVar5 = *(long *)(*(long *)(this + 8) + -8);
      lVar4 = lVar1 + lVar5;
    }
    CowData<NavigationMeshSourceGeometryData2D::ProjectedObstruction>::resize<false>
              ((CowData<NavigationMeshSourceGeometryData2D::ProjectedObstruction> *)(this + 8),lVar4
              );
    if (0 < lVar1) {
      lVar4 = 0;
      lVar5 = lVar5 * 0x18;
      do {
        lVar2 = *(long *)(param_2 + 8);
        if (lVar2 == 0) {
          lVar6 = 0;
LAB_00109db8:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar4,lVar6,"p_index","size()","",false
                     ,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        lVar6 = *(long *)(lVar2 + -8);
        if (lVar6 <= lVar4) goto LAB_00109db8;
        lVar2 = lVar2 + lVar4 * 0x18;
        CowData<NavigationMeshSourceGeometryData2D::ProjectedObstruction>::_copy_on_write
                  ((CowData<NavigationMeshSourceGeometryData2D::ProjectedObstruction> *)(this + 8));
        lVar6 = *(long *)(this + 8) + lVar5;
        if (*(long *)(lVar6 + 8) != *(long *)(lVar2 + 8)) {
          CowData<float>::_ref((CowData<float> *)(lVar6 + 8),(CowData *)(lVar2 + 8));
        }
        lVar4 = lVar4 + 1;
        lVar5 = lVar5 + 0x18;
        *(undefined1 *)(lVar6 + 0x10) = *(undefined1 *)(lVar2 + 0x10);
      } while (lVar4 != lVar1);
    }
  }
  return;
}



/* NavigationMeshSourceGeometryData2D::_setv(StringName const&, Variant const&) */

ulong NavigationMeshSourceGeometryData2D::_setv(StringName *param_1,Variant *param_2)

{
  ulong uVar1;
  long in_FS_OFFSET;
  Variant local_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = StringName::operator==((StringName *)param_2,"projected_obstructions");
  if ((char)uVar1 != '\0') {
    Variant::operator_cast_to_Array(local_28);
    set_projected_obstructions((NavigationMeshSourceGeometryData2D *)param_1,(Array *)local_28);
    Array::~Array((Array *)local_28);
    uVar1 = uVar1 & 0xff;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x0010a038) */
/* WARNING: Removing unreachable block (ram,0x0010a1cd) */
/* WARNING: Removing unreachable block (ram,0x0010a1d9) */
/* String vformat<StringName>(String const&, StringName const) */

undefined8 * vformat<StringName>(undefined8 *param_1,bool *param_2,StringName *param_3)

{
  Variant *this;
  int iVar1;
  long in_FS_OFFSET;
  Array local_c8 [8];
  undefined8 local_c0 [9];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,param_3);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c8);
  iVar1 = (int)local_c8;
  Array::resize(iVar1);
  this = (Variant *)Array::operator[](iVar1);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,param_2);
  *param_1 = local_c0[0];
  Array::~Array(local_c8);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTR<Rect2>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<Rect2>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  Variant *pVVar4;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_78;
  long local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58 [2];
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar6 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar6 != (long *)0x0) && (plVar6[1] != 0)) && (*(char *)(plVar6[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar6[1] == 0) {
      plVar5 = (long *)plVar6[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6);
      }
    }
    else {
      plVar5 = (long *)(plVar6[1] + 0x20);
    }
    if (local_68 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC70,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      pcVar3 = local_68;
      if (local_68 != (char *)0x0) {
        LOCK();
        plVar6 = (long *)(local_68 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_68 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar6 = (long *)(local_70 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0010a3e0;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar4 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar4 & 1) != 0) {
        pVVar4 = *(Variant **)(pVVar4 + *(long *)((long)plVar6 + (long)pVVar1) + -1);
      }
      local_58[0] = (*(code *)pVVar4)();
      Variant::Variant((Variant *)local_48,(Rect2 *)local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
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
LAB_0010a3e0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Rect2>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindTR<Rect2>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  code *pcVar4;
  Variant *pVVar5;
  long in_RCX;
  long in_FS_OFFSET;
  undefined8 uVar6;
  undefined8 in_XMM1_Qa;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar5 = param_2[0x23];
      if (pVVar5 == (Variant *)0x0) {
        pVVar5 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar5 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar5) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar3 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
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
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010a6db;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(param_1 + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  uVar6 = (*pcVar4)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
  *(undefined8 *)(in_RCX + 8) = uVar6;
  *(undefined8 *)(in_RCX + 0x10) = in_XMM1_Qa;
LAB_0010a6db:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Rect2>::ptrcall(Object*, void const**, void*) const */

void MethodBindTR<Rect2>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 *in_RCX;
  long in_FS_OFFSET;
  undefined8 uVar5;
  undefined8 in_XMM1_Qa;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar4 = (long *)param_2[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar4 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_48 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010a8ea;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(param_1 + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  uVar5 = (*pcVar3)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
  *in_RCX = uVar5;
  in_RCX[1] = in_XMM1_Qa;
LAB_0010a8ea:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Array>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Array>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  Variant *pVVar4;
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
      _err_print_error(&_LC70,"./core/object/method_bind.h",0x267,
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
      goto LAB_0010ab70;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar4 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar4 & 1) != 0) {
        pVVar4 = *(Variant **)(pVVar4 + *(long *)((long)plVar6 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar4)((Array *)&local_58);
      Variant::Variant((Variant *)local_48,(Array *)&local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      Array::~Array((Array *)&local_58);
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
LAB_0010ab70:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Array>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Array>::validated_call
          (MethodBindTRC<Array> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  Variant **ppVVar1;
  long lVar2;
  Variant **ppVVar3;
  code *pcVar4;
  long *plVar5;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  Variant **local_48;
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
    if (local_48 == (Variant **)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x10a228;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Array *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Array *)&local_48,0,0);
      ppVVar3 = local_48;
      if (local_48 != (Variant **)0x0) {
        LOCK();
        ppVVar1 = local_48 + -2;
        *ppVVar1 = *ppVVar1 + -1;
        UNLOCK();
        if (*ppVVar1 == (Variant *)0x0) {
          local_48 = (Variant **)0x0;
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
      goto LAB_0010ade9;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar4 = *(code **)(pcVar4 + (long)param_2 + -1);
  }
  (*pcVar4)((Array *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  Array::operator=((Array *)(param_3 + 8),(Array *)&local_48);
  Array::~Array((Array *)&local_48);
LAB_0010ade9:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Array>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Array>::ptrcall
          (MethodBindTRC<Array> *this,Object *param_1,void **param_2,void *param_3)

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
      local_48 = (void **)0x10a228;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Array *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Array *)&local_48,0,0);
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
      goto LAB_0010affa;
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
  (*pcVar4)((Array *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  Array::operator=((Array *)param_3,(Array *)&local_48);
  Array::~Array((Array *)&local_48);
LAB_0010affa:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Array const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Array_const&>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar4;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar4 = param_2[0x23];
      if (pVVar4 == (Variant *)0x0) {
        pVVar4 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
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
      goto LAB_0010b3c5;
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
                    /* WARNING: Could not recover jumptable at 0x0010b209. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_0010b3c5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Array const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Array_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0010b5e5;
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
                    /* WARNING: Could not recover jumptable at 0x0010b425. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_0010b5e5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector<Vector2> const&, bool>::validated_call(Object*, Variant const**, Variant*)
   const */

void MethodBindT<Vector<Vector2>const&,bool>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar4;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar4 = param_2[0x23];
      if (pVVar4 == (Variant *)0x0) {
        pVVar4 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
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
      goto LAB_0010b815;
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
                    /* WARNING: Could not recover jumptable at 0x0010b657. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(long *)(*(long *)param_3 + 8) + 0x10,*(undefined1 *)(*(long *)(param_3 + 8) + 8));
    return;
  }
LAB_0010b815:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector<Vector2> const&, bool>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Vector<Vector2>const&,bool>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0010ba45;
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
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x0010b884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3,
               **(char **)((long)param_3 + 8) != '\0');
    return;
  }
LAB_0010ba45:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector<Vector2> const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Vector<Vector2>const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar4;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar4 = param_2[0x23];
      if (pVVar4 == (Variant *)0x0) {
        pVVar4 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
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
      goto LAB_0010bc65;
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
                    /* WARNING: Could not recover jumptable at 0x0010baad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(long *)(*(long *)param_3 + 8) + 0x10);
    return;
  }
LAB_0010bc65:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector<Vector2> const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Vector<Vector2>const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0010be85;
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
                    /* WARNING: Could not recover jumptable at 0x0010bcc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_0010be85:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TypedArray<Vector<Vector2> >>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<TypedArray<Vector<Vector2>>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  Variant *pVVar4;
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
      _err_print_error(&_LC70,"./core/object/method_bind.h",0x267,
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
      goto LAB_0010bf60;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar4 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar4 & 1) != 0) {
        pVVar4 = *(Variant **)(pVVar4 + *(long *)((long)plVar6 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar4)((Array *)&local_58);
      Variant::Variant((Variant *)local_48,(Array *)&local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      Array::~Array((Array *)&local_58);
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
LAB_0010bf60:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  bool bVar4;
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
  Variant *pVVar5;
  
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
      _err_print_error(&_LC70,"./core/object/method_bind.h",0x207,
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
      goto LAB_0010c240;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar5 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar5 & 1) != 0) {
        pVVar5 = *(Variant **)(pVVar5 + *(long *)((long)plVar7 + (long)pVVar1) + -1);
      }
      bVar4 = (bool)(*(code *)pVVar5)();
      Variant::Variant((Variant *)local_48,bVar4);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
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
LAB_0010c240:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<bool>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<bool>::validated_call
          (MethodBindTR<bool> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  char *pcVar2;
  Variant VVar3;
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
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
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
      goto LAB_0010c4a2;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  VVar3 = (Variant)(*pcVar4)(param_1 + *(long *)(this + 0x60));
  param_3[8] = VVar3;
LAB_0010c4a2:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<bool>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<bool>::ptrcall(MethodBindTR<bool> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  undefined1 uVar3;
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
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
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
      goto LAB_0010c6a1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60));
  *(undefined1 *)param_3 = uVar3;
LAB_0010c6a1:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  Variant *pVVar4;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar6 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar6 != (long *)0x0) && (plVar6[1] != 0)) && (*(char *)(plVar6[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar6[1] == 0) {
      plVar5 = (long *)plVar6[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6);
      }
    }
    else {
      plVar5 = (long *)(plVar6[1] + 0x20);
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
      _err_print_error(&_LC70,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar3 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar6 = (long *)(local_48 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar6 = (long *)(local_50 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010c970;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar4 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar4 & 1) != 0) {
        pVVar4 = *(Variant **)(pVVar4 + *(long *)((long)plVar6 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar4)();
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
LAB_0010c970:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar4;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar4 = param_2[0x23];
      if (pVVar4 == (Variant *)0x0) {
        pVVar4 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
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
      local_30 = 0x35;
      local_40 = 0;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0,0);
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
      goto LAB_0010cd6b;
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
                    /* WARNING: Could not recover jumptable at 0x0010cbd2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0010cd6b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      local_30 = 0x35;
      local_40 = 0;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0,0);
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
      goto LAB_0010cf5b;
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
                    /* WARNING: Could not recover jumptable at 0x0010cdc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0010cf5b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TypedArray<Vector<Vector2> >>::validated_call(Object*, Variant const**, Variant*)
   const */

void __thiscall
MethodBindTRC<TypedArray<Vector<Vector2>>>::validated_call
          (MethodBindTRC<TypedArray<Vector<Vector2>>> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  Variant **ppVVar1;
  long lVar2;
  Variant **ppVVar3;
  code *pcVar4;
  long *plVar5;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  Variant **local_48;
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
    if (local_48 == (Variant **)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x10a228;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Array *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Array *)&local_48,0,0);
      ppVVar3 = local_48;
      if (local_48 != (Variant **)0x0) {
        LOCK();
        ppVVar1 = local_48 + -2;
        *ppVVar1 = *ppVVar1 + -1;
        UNLOCK();
        if (*ppVVar1 == (Variant *)0x0) {
          local_48 = (Variant **)0x0;
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
      goto LAB_0010cfb9;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar4 = *(code **)(pcVar4 + (long)param_2 + -1);
  }
  (*pcVar4)((Array *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  Array::operator=((Array *)(param_3 + 8),(Array *)&local_48);
  Array::~Array((Array *)&local_48);
LAB_0010cfb9:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TypedArray<Vector<Vector2> >>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<TypedArray<Vector<Vector2>>>::ptrcall
          (MethodBindTRC<TypedArray<Vector<Vector2>>> *this,Object *param_1,void **param_2,
          void *param_3)

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
      local_48 = (void **)0x10a228;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Array *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Array *)&local_48,0,0);
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
      goto LAB_0010d1ca;
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
  (*pcVar4)((Array *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  Array::operator=((Array *)param_3,(Array *)&local_48);
  Array::~Array((Array *)&local_48);
LAB_0010d1ca:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<TypedArray<Vector<Vector2> > const&>::validated_call(Object*, Variant const**,
   Variant*) const */

void MethodBindT<TypedArray<Vector<Vector2>>const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  char cVar4;
  Variant *pVVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  long local_78;
  long local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar5 = param_2[0x23];
      if (pVVar5 == (Variant *)0x0) {
        pVVar5 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar5 = param_2[1] + 0x20;
    }
    if (local_68 == (char *)*(long *)pVVar5) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_68,0);
      pcVar3 = local_68;
      if (local_68 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
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
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0010d469;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(param_1 + 0x58);
  lVar2 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)((long)param_2 + lVar2) + -1);
  }
  Array::Array((Array *)&local_70);
  local_58 = 0;
  local_68 = (char *)0x0;
  local_50 = (undefined1  [16])0x0;
  Array::set_typed((uint)(Array *)&local_70,(StringName *)0x23,(Variant *)&local_68);
  if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  cVar4 = Array::is_same_typed((Array *)&local_70);
  if (cVar4 == '\0') {
    Array::assign((Array *)&local_70);
  }
  else {
    Array::_ref((Array *)&local_70);
  }
  (*pcVar6)((long *)((long)param_2 + lVar2),(Array *)&local_70);
  Array::~Array((Array *)&local_70);
LAB_0010d469:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<TypedArray<Vector<Vector2> > const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<TypedArray<Vector<Vector2>>const&>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  char cVar3;
  long *plVar4;
  code *pcVar5;
  long in_FS_OFFSET;
  long local_78;
  long local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar4 = (long *)param_2[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar4 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_68 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_68,0);
      pcVar2 = local_68;
      if (local_68 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_68 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_68 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar4 = (long *)(local_70 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0010d755;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar5 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar5 & 1) != 0) {
    pcVar5 = *(code **)(pcVar5 + *(long *)((long)param_2 + lVar1) + -1);
  }
  Array::Array((Array *)&local_70);
  local_58 = 0;
  local_68 = (char *)0x0;
  local_50 = (undefined1  [16])0x0;
  Array::set_typed((uint)(Array *)&local_70,(StringName *)0x23,(Variant *)&local_68);
  if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  cVar3 = Array::is_same_typed((Array *)&local_70);
  if (cVar3 == '\0') {
    Array::assign((Array *)&local_70);
  }
  else {
    Array::_ref((Array *)&local_70);
  }
  (*pcVar5)((long *)((long)param_2 + lVar1),(Array *)&local_70);
  Array::~Array((Array *)&local_70);
LAB_0010d755:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Array const&>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<Array_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  char cVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  undefined4 in_register_00000014;
  long *plVar10;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar11;
  Variant *pVVar12;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_48 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC70,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0);
      pcVar5 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar10 = (long *)(local_48 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      lVar2 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar10 = (long *)(local_50 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010da70;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0010dac0;
LAB_0010dab0:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010dac0:
        uVar7 = 4;
        goto LAB_0010da65;
      }
      if (in_R8D == 1) goto LAB_0010dab0;
      lVar9 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar9) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar11 = pVVar11 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar12 & 1) != 0) {
      pVVar12 = *(Variant **)(pVVar12 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar11,0x1c);
    uVar4 = _LC75;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_Array((Variant *)&local_48);
    (*(code *)pVVar12)((Variant *)((long)plVar10 + (long)pVVar1),(Variant *)&local_48);
    Array::~Array((Array *)&local_48);
  }
  else {
    uVar7 = 3;
LAB_0010da65:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_0010da70:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector<Vector2> const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<Vector<Vector2>const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  char cVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  undefined4 in_register_00000014;
  long *plVar10;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar11;
  Variant *pVVar12;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40 [2];
  long local_30;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_48 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40[0] = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC70,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0);
      pcVar5 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar10 = (long *)(local_48 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      lVar2 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar10 = (long *)(local_50 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010ddf0;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0010de40;
LAB_0010de30:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010de40:
        uVar7 = 4;
        goto LAB_0010dde5;
      }
      if (in_R8D == 1) goto LAB_0010de30;
      lVar9 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar9) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar11 = pVVar11 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar12 & 1) != 0) {
      pVVar12 = *(Variant **)(pVVar12 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar11,0x23);
    uVar4 = _LC77;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_Vector((Variant *)&local_48);
    (*(code *)pVVar12)((Variant *)((long)plVar10 + (long)pVVar1),(Variant *)&local_48);
    CowData<Vector2>::_unref((CowData<Vector2> *)local_40);
  }
  else {
    uVar7 = 3;
LAB_0010dde5:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_0010ddf0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<TypedArray<Vector<Vector2> > const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<TypedArray<Vector<Vector2>>const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  char cVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  undefined4 in_register_00000014;
  long *plVar10;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar11;
  Variant *pVVar12;
  long in_FS_OFFSET;
  long local_78;
  long local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_68 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC70,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_68,0);
      pcVar5 = local_68;
      if (local_68 != (char *)0x0) {
        LOCK();
        plVar10 = (long *)(local_68 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_68 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      lVar2 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar10 = (long *)(local_70 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0010e200;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0010e250;
LAB_0010e240:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010e250:
        uVar7 = 4;
        goto LAB_0010e1f5;
      }
      if (in_R8D == 1) goto LAB_0010e240;
      lVar9 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar9) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar11 = pVVar11 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar12 & 1) != 0) {
      pVVar12 = *(Variant **)(pVVar12 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar11,0x1c);
    uVar4 = _LC75;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_Array((Variant *)&local_68);
    Array::Array((Array *)&local_78);
    local_58 = 0;
    local_70 = 0;
    local_50 = (undefined1  [16])0x0;
    Array::set_typed((uint)(Array *)&local_78,(StringName *)0x23,(Variant *)&local_70);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    cVar6 = Array::is_same_typed((Array *)&local_78);
    if (cVar6 == '\0') {
      Array::assign((Array *)&local_78);
    }
    else {
      Array::_ref((Array *)&local_78);
    }
    Array::~Array((Array *)&local_68);
    (*(code *)pVVar12)((Variant *)((long)plVar10 + (long)pVVar1),(Array *)&local_78);
    Array::~Array((Array *)&local_78);
  }
  else {
    uVar7 = 3;
LAB_0010e1f5:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_0010e200:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, Vector<Vector2> const&,
   bool>(__UnexistingClass*, void (__UnexistingClass::*)(Vector<Vector2> const&, bool), Variant
   const**, int, Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,Vector<Vector2>const&,bool>
               (__UnexistingClass *param_1,_func_void_Vector_ptr_bool *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 in_register_0000000c;
  long *plVar8;
  long lVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  Variant *this;
  long in_FS_OFFSET;
  long in_stack_00000008;
  Variant aVStack_48 [8];
  long local_40;
  long local_30;
  
  plVar8 = (long *)CONCAT44(in_register_0000000c,param_4);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar11 = (uint)param_5;
  if (uVar11 < 3) {
    lVar1 = *(long *)(in_stack_00000008 + 8);
    iVar6 = 2 - uVar11;
    if (lVar1 == 0) {
      if (iVar6 != 0) goto LAB_0010e618;
      puVar10 = (undefined4 *)*plVar8;
LAB_0010e66d:
      this = (Variant *)plVar8[1];
    }
    else {
      lVar2 = *(long *)(lVar1 + -8);
      iVar12 = (int)lVar2;
      if (iVar12 < iVar6) {
LAB_0010e618:
        uVar7 = 4;
        goto LAB_0010e61d;
      }
      if (uVar11 == 0) {
        lVar9 = (long)(iVar12 + -2);
        if (lVar2 <= lVar9) goto LAB_0010e688;
        puVar10 = (undefined4 *)(lVar1 + lVar9 * 0x18);
      }
      else {
        puVar10 = (undefined4 *)*plVar8;
        if (uVar11 == 2) goto LAB_0010e66d;
      }
      lVar9 = (long)(int)((uVar11 ^ 1) + (iVar12 - iVar6));
      if (lVar2 <= lVar9) {
LAB_0010e688:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this = (Variant *)(lVar1 + lVar9 * 0x18);
    }
    *(undefined4 *)param_6 = 0;
    if (((ulong)param_2 & 1) != 0) {
      param_2 = *(_func_void_Vector_ptr_bool **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)this,1);
    uVar4 = _LC78;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    Variant::operator_cast_to_bool(this);
    cVar5 = Variant::can_convert_strict(*puVar10,0x23);
    uVar4 = _LC77;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    Variant::operator_cast_to_Vector(aVStack_48);
    (*param_2)((Vector *)(param_1 + (long)param_3),SUB81(aVStack_48,0));
    lVar1 = local_40;
    if (local_40 != 0) {
      LOCK();
      plVar8 = (long *)(local_40 + -0x10);
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
        local_40 = 0;
        Memory::free_static((void *)(lVar1 + -0x10),false);
      }
    }
  }
  else {
    uVar7 = 3;
LAB_0010e61d:
    *(undefined4 *)param_6 = uVar7;
    *(undefined4 *)(param_6 + 8) = 2;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector<Vector2> const&, bool>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<Vector<Vector2>const&,bool>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var4;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var4 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var4 != (__UnexistingClass *)0x0) && (*(long *)(p_Var4 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var4 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var4 + 8) == 0) {
      plVar3 = *(long **)(p_Var4 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)p_Var4 + 0x40))(p_Var4);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(p_Var4 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC70,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar3 = (long *)(local_50 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0010e726;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,Vector<Vector2>const&,bool>
            (p_Var4,(_func_void_Vector_ptr_bool *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4
             ,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0010e726:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<Vector<Vector2> const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<Vector<Vector2>const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  long lVar5;
  undefined8 uVar6;
  int iVar7;
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
  iVar7 = *param_2;
  if (iVar7 != param_1) goto LAB_0010e965;
  local_78 = 0;
  local_68 = &_LC4;
  local_80 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._8_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0x23);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_0010ea58:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0010ea58;
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
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)param_3 = local_68._0_4_;
  if (*(long *)(param_3 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
    uVar6 = local_60._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_60._8_8_;
    local_60 = auVar3 << 0x40;
    *(undefined8 *)(param_3 + 8) = uVar6;
  }
  if (*(long *)(param_3 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar6 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar6;
  }
  lVar5 = local_48;
  *(int *)(param_3 + 0x18) = local_50;
  if (*(long *)(param_3 + 0x20) == local_48) {
    *(undefined4 *)(param_3 + 0x28) = local_40;
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
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
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
  iVar7 = *param_2;
LAB_0010e965:
  *param_2 = iVar7 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<Vector<Vector2> const&>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<Vector<Vector2>const&>::_gen_argument_type_info(int param_1)

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
  call_get_argument_type_info_helper<Vector<Vector2>const&>(in_EDX,&local_14,pPVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector<Vector2> const&, bool>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<Vector<Vector2>const&,bool>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  long lVar5;
  undefined8 uVar6;
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar7;
  long in_FS_OFFSET;
  int local_74;
  long local_70;
  long local_68;
  long local_60;
  undefined *local_58;
  undefined1 local_50 [16];
  int local_40;
  long local_38;
  undefined4 local_30;
  long local_20;
  
  pPVar7 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar7 = 0;
  *(undefined4 *)(pPVar7 + 0x18) = 0;
  *(undefined8 *)(pPVar7 + 0x20) = 0;
  *(undefined4 *)(pPVar7 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar7 + 8) = (undefined1  [16])0x0;
  local_74 = 0;
  call_get_argument_type_info_helper<Vector<Vector2>const&>(in_EDX,&local_74,pPVar7);
  if (in_EDX != local_74) goto LAB_0010ecc2;
  local_68 = 0;
  local_58 = &_LC4;
  local_70 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_50._8_8_;
  local_50 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_70);
  local_58 = (undefined *)CONCAT44(local_58._4_4_,1);
  local_40 = 0;
  local_38 = 0;
  local_50 = (undefined1  [16])0x0;
  if (local_70 == 0) {
LAB_0010edb5:
    local_30 = 6;
    StringName::operator=((StringName *)(local_50 + 8),(StringName *)&local_68);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_38,(CowData *)&local_70);
    local_30 = 6;
    if (local_40 != 0x11) goto LAB_0010edb5;
    StringName::StringName((StringName *)&local_60,(String *)&local_38,false);
    if (local_50._8_8_ == local_60) {
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_50._8_8_ = local_60;
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
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)pPVar7 = local_58._0_4_;
  if (*(long *)(pPVar7 + 8) != local_50._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar7 + 8));
    uVar6 = local_50._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_50._8_8_;
    local_50 = auVar3 << 0x40;
    *(undefined8 *)(pPVar7 + 8) = uVar6;
  }
  if (*(long *)(pPVar7 + 0x10) != local_50._8_8_) {
    StringName::unref();
    uVar6 = local_50._8_8_;
    local_50._8_8_ = 0;
    *(undefined8 *)(pPVar7 + 0x10) = uVar6;
  }
  *(int *)(pPVar7 + 0x18) = local_40;
  if (*(long *)(pPVar7 + 0x20) != local_38) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar7 + 0x20));
    lVar5 = local_38;
    local_38 = 0;
    *(long *)(pPVar7 + 0x20) = lVar5;
  }
  *(undefined4 *)(pPVar7 + 0x28) = local_30;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
  if ((StringName::configured != '\0') && (local_50._8_8_ != 0)) {
    StringName::unref();
  }
  uVar6 = local_50._0_8_;
  if (local_50._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_50._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_50._8_8_;
      local_50 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar6 + -0x10),false);
    }
  }
LAB_0010ecc2:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pPVar7;
}



/* void memdelete<NavigationMeshSourceGeometryData2D>(NavigationMeshSourceGeometryData2D*) */

void memdelete<NavigationMeshSourceGeometryData2D>(NavigationMeshSourceGeometryData2D *param_1)

{
  char cVar1;
  
  cVar1 = predelete_handler((Object *)param_1);
  if (cVar1 == '\0') {
    return;
  }
  if (*(code **)(*(long *)param_1 + 0x140) ==
      NavigationMeshSourceGeometryData2D::~NavigationMeshSourceGeometryData2D) {
    *(undefined ***)param_1 = &PTR__initialize_classv_0010fca8;
    NavigationMeshSourceGeometryData2D::clear(param_1);
    CowData<NavigationMeshSourceGeometryData2D::ProjectedObstruction>::_unref
              ((CowData<NavigationMeshSourceGeometryData2D::ProjectedObstruction> *)
               (param_1 + 0x2b8));
    CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)(param_1 + 0x290));
    CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)(param_1 + 0x280));
    Resource::~Resource((Resource *)param_1);
    Memory::free_static(param_1,false);
    return;
  }
  (**(code **)(*(long *)param_1 + 0x140))(param_1);
  Memory::free_static(param_1,false);
  return;
}



/* MethodBindT<Ref<NavigationMeshSourceGeometryData2D> const&>::validated_call(Object*, Variant
   const**, Variant*) const */

void MethodBindT<Ref<NavigationMeshSourceGeometryData2D>const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  long lVar2;
  NavigationMeshSourceGeometryData2D *pNVar3;
  char cVar4;
  NavigationMeshSourceGeometryData2D *pNVar5;
  Variant *pVVar6;
  code *pcVar7;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  NavigationMeshSourceGeometryData2D *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar6 = param_2[0x23];
      if (pVVar6 == (Variant *)0x0) {
        pVVar6 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar6 = param_2[1] + 0x20;
    }
    if (local_58 == (NavigationMeshSourceGeometryData2D *)*(long *)pVVar6) {
      if ((StringName::configured != '\0') &&
         (local_58 != (NavigationMeshSourceGeometryData2D *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (NavigationMeshSourceGeometryData2D *)0x10a228;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      pNVar3 = local_58;
      if (local_58 != (NavigationMeshSourceGeometryData2D *)0x0) {
        LOCK();
        pNVar5 = local_58 + -0x10;
        *(long *)pNVar5 = *(long *)pNVar5 + -1;
        UNLOCK();
        if (*(long *)pNVar5 == 0) {
          local_58 = (NavigationMeshSourceGeometryData2D *)0x0;
          Memory::free_static(pNVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010f0a8;
    }
    if ((StringName::configured != '\0') && (local_58 != (NavigationMeshSourceGeometryData2D *)0x0))
    {
      StringName::unref();
    }
  }
  pcVar7 = *(code **)(param_1 + 0x58);
  lVar2 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar7 & 1) != 0) {
    pcVar7 = *(code **)(pcVar7 + *(long *)((long)param_2 + lVar2) + -1);
  }
  Variant::Variant((Variant *)local_48,*(Object **)(*(long *)param_3 + 0x10));
  local_58 = (NavigationMeshSourceGeometryData2D *)0x0;
  pNVar5 = (NavigationMeshSourceGeometryData2D *)Variant::get_validated_object();
  pNVar3 = local_58;
  if (pNVar5 != local_58) {
    if (pNVar5 == (NavigationMeshSourceGeometryData2D *)0x0) {
      if (local_58 != (NavigationMeshSourceGeometryData2D *)0x0) {
        local_58 = (NavigationMeshSourceGeometryData2D *)0x0;
LAB_0010f066:
        cVar4 = RefCounted::unreference();
        if (cVar4 != '\0') {
          memdelete<NavigationMeshSourceGeometryData2D>(pNVar3);
        }
      }
    }
    else {
      pNVar5 = (NavigationMeshSourceGeometryData2D *)
               __dynamic_cast(pNVar5,&Object::typeinfo,&NavigationMeshSourceGeometryData2D::typeinfo
                              ,0);
      if (pNVar3 != pNVar5) {
        local_58 = pNVar5;
        if (pNVar5 != (NavigationMeshSourceGeometryData2D *)0x0) {
          cVar4 = RefCounted::reference();
          if (cVar4 == '\0') {
            local_58 = (NavigationMeshSourceGeometryData2D *)0x0;
          }
        }
        if (pNVar3 != (NavigationMeshSourceGeometryData2D *)0x0) goto LAB_0010f066;
      }
    }
  }
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  (*pcVar7)((long *)((long)param_2 + lVar2),(StringName *)&local_58);
  if (local_58 != (NavigationMeshSourceGeometryData2D *)0x0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      memdelete<NavigationMeshSourceGeometryData2D>(local_58);
    }
  }
LAB_0010f0a8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<NavigationMeshSourceGeometryData2D> const&>::ptrcall(Object*, void const**,
   void*) const */

void MethodBindT<Ref<NavigationMeshSourceGeometryData2D>const&>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

{
  NavigationMeshSourceGeometryData2D *pNVar1;
  long lVar2;
  NavigationMeshSourceGeometryData2D *pNVar3;
  char cVar4;
  long *plVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  NavigationMeshSourceGeometryData2D *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar5 = (long *)param_2[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar5 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (NavigationMeshSourceGeometryData2D *)*plVar5) {
      if ((StringName::configured != '\0') &&
         (local_48 != (NavigationMeshSourceGeometryData2D *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (NavigationMeshSourceGeometryData2D *)0x10a228;
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pNVar3 = local_48;
      if (local_48 != (NavigationMeshSourceGeometryData2D *)0x0) {
        LOCK();
        pNVar1 = local_48 + -0x10;
        *(long *)pNVar1 = *(long *)pNVar1 + -1;
        UNLOCK();
        if (*(long *)pNVar1 == 0) {
          local_48 = (NavigationMeshSourceGeometryData2D *)0x0;
          Memory::free_static(pNVar3 + -0x10,false);
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
      goto LAB_0010f37c;
    }
    if ((StringName::configured != '\0') && (local_48 != (NavigationMeshSourceGeometryData2D *)0x0))
    {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  lVar2 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)((long)param_2 + lVar2) + -1);
  }
  if ((*param_3 == (long *)0x0) ||
     (local_48 = (NavigationMeshSourceGeometryData2D *)**param_3,
     local_48 == (NavigationMeshSourceGeometryData2D *)0x0)) {
LAB_0010f358:
    local_48 = (NavigationMeshSourceGeometryData2D *)0x0;
  }
  else {
    cVar4 = RefCounted::init_ref();
    if (cVar4 == '\0') goto LAB_0010f358;
  }
  (*pcVar6)((long *)((long)param_2 + lVar2),(StringName *)&local_48);
  if (local_48 != (NavigationMeshSourceGeometryData2D *)0x0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      memdelete<NavigationMeshSourceGeometryData2D>(local_48);
    }
  }
LAB_0010f37c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<NavigationMeshSourceGeometryData2D> const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<Ref<NavigationMeshSourceGeometryData2D>const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  NavigationMeshSourceGeometryData2D *pNVar5;
  char cVar6;
  undefined4 uVar7;
  NavigationMeshSourceGeometryData2D *pNVar8;
  long *plVar9;
  long lVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar12;
  Variant *pVVar13;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  NavigationMeshSourceGeometryData2D *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar9 = (long *)plVar11[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar9 = (long *)(plVar11[1] + 0x20);
    }
    if (local_48 == (NavigationMeshSourceGeometryData2D *)*plVar9) {
      if ((StringName::configured != '\0') &&
         (local_48 != (NavigationMeshSourceGeometryData2D *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (NavigationMeshSourceGeometryData2D *)0x10a228;
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC70,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pNVar5 = local_48;
      if (local_48 != (NavigationMeshSourceGeometryData2D *)0x0) {
        LOCK();
        pNVar8 = local_48 + -0x10;
        *(long *)pNVar8 = *(long *)pNVar8 + -1;
        UNLOCK();
        if (*(long *)pNVar8 == 0) {
          local_48 = (NavigationMeshSourceGeometryData2D *)0x0;
          Memory::free_static(pNVar5 + -0x10,false);
        }
      }
      lVar2 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar11 = (long *)(local_50 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010f6d0;
    }
    if ((StringName::configured != '\0') && (local_48 != (NavigationMeshSourceGeometryData2D *)0x0))
    {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (1 < in_R8D) {
    uVar7 = 3;
LAB_0010f6c5:
    *in_R9 = uVar7;
    in_R9[2] = 1;
    goto LAB_0010f6d0;
  }
  pVVar12 = param_2[5];
  if (pVVar12 == (Variant *)0x0) {
    if (in_R8D != 1) goto LAB_0010f720;
LAB_0010f710:
    pVVar12 = *(Variant **)param_4;
  }
  else {
    lVar2 = *(long *)(pVVar12 + -8);
    if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010f720:
      uVar7 = 4;
      goto LAB_0010f6c5;
    }
    if (in_R8D == 1) goto LAB_0010f710;
    lVar10 = (long)((int)lVar2 + -1);
    if (lVar2 <= lVar10) {
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar2,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    pVVar12 = pVVar12 + lVar10 * 0x18;
  }
  *in_R9 = 0;
  if (((ulong)pVVar13 & 1) != 0) {
    pVVar13 = *(Variant **)(pVVar13 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
  }
  cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar12,0x18);
  uVar4 = _LC79;
  if (cVar6 == '\0') {
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar4;
  }
  local_48 = (NavigationMeshSourceGeometryData2D *)0x0;
  pNVar8 = (NavigationMeshSourceGeometryData2D *)Variant::get_validated_object();
  pNVar5 = local_48;
  if (pNVar8 != local_48) {
    if (pNVar8 == (NavigationMeshSourceGeometryData2D *)0x0) {
      if (local_48 != (NavigationMeshSourceGeometryData2D *)0x0) {
        local_48 = (NavigationMeshSourceGeometryData2D *)0x0;
LAB_0010f83d:
        cVar6 = RefCounted::unreference();
        if (cVar6 != '\0') {
          memdelete<NavigationMeshSourceGeometryData2D>(pNVar5);
        }
      }
    }
    else {
      pNVar8 = (NavigationMeshSourceGeometryData2D *)
               __dynamic_cast(pNVar8,&Object::typeinfo,&NavigationMeshSourceGeometryData2D::typeinfo
                              ,0);
      if (pNVar5 != pNVar8) {
        local_48 = pNVar8;
        if (pNVar8 != (NavigationMeshSourceGeometryData2D *)0x0) {
          cVar6 = RefCounted::reference();
          if (cVar6 == '\0') {
            local_48 = (NavigationMeshSourceGeometryData2D *)0x0;
          }
        }
        if (pNVar5 != (NavigationMeshSourceGeometryData2D *)0x0) goto LAB_0010f83d;
      }
    }
  }
  (*(code *)pVVar13)((Variant *)((long)plVar11 + (long)pVVar1),&local_48);
  if (local_48 != (NavigationMeshSourceGeometryData2D *)0x0) {
    cVar6 = RefCounted::unreference();
    if (cVar6 != '\0') {
      memdelete<NavigationMeshSourceGeometryData2D>(local_48);
    }
  }
LAB_0010f6d0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Rect2>::~MethodBindTR() */

void __thiscall MethodBindTR<Rect2>::~MethodBindTR(MethodBindTR<Rect2> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Array>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Array>::~MethodBindTRC(MethodBindTRC<Array> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Array const&>::~MethodBindT() */

void __thiscall MethodBindT<Array_const&>::~MethodBindT(MethodBindT<Array_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Vector<Vector2> const&, bool>::~MethodBindT() */

void __thiscall
MethodBindT<Vector<Vector2>const&,bool>::~MethodBindT(MethodBindT<Vector<Vector2>const&,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Ref<NavigationMeshSourceGeometryData2D> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<NavigationMeshSourceGeometryData2D>const&>::~MethodBindT
          (MethodBindT<Ref<NavigationMeshSourceGeometryData2D>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Vector<Vector2> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Vector<Vector2>const&>::~MethodBindT(MethodBindT<Vector<Vector2>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<TypedArray<Vector<Vector2> > const&>::~MethodBindT() */

void __thiscall
MethodBindT<TypedArray<Vector<Vector2>>const&>::~MethodBindT
          (MethodBindT<TypedArray<Vector<Vector2>>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<TypedArray<Vector<Vector2> >>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TypedArray<Vector<Vector2>>>::~MethodBindTRC
          (MethodBindTRC<TypedArray<Vector<Vector2>>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<bool>::~MethodBindTR() */

void __thiscall MethodBindTR<bool>::~MethodBindTR(MethodBindTR<bool> *this)

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



/* WARNING: Control flow encountered bad instruction data */
/* NavigationMeshSourceGeometryData2D::~NavigationMeshSourceGeometryData2D() */

void __thiscall
NavigationMeshSourceGeometryData2D::~NavigationMeshSourceGeometryData2D
          (NavigationMeshSourceGeometryData2D *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


