
/* NavigationMeshSourceGeometryData3D::get_vertices() const */

NavigationMeshSourceGeometryData3D * __thiscall
NavigationMeshSourceGeometryData3D::get_vertices(NavigationMeshSourceGeometryData3D *this)

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



/* NavigationMeshSourceGeometryData3D::get_indices() const */

NavigationMeshSourceGeometryData3D * __thiscall
NavigationMeshSourceGeometryData3D::get_indices(NavigationMeshSourceGeometryData3D *this)

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



/* NavigationMeshSourceGeometryData3D::has_data() */

bool __thiscall
NavigationMeshSourceGeometryData3D::has_data(NavigationMeshSourceGeometryData3D *this)

{
  int iVar1;
  bool bVar2;
  
  do {
    iVar1 = pthread_rwlock_rdlock((pthread_rwlock_t *)(this + 0x240));
  } while (iVar1 == 0xb);
  if (iVar1 != 0x23) {
    bVar2 = false;
    if (((*(long *)(this + 0x280) != 0) && (*(long *)(*(long *)(this + 0x280) + -8) != 0)) &&
       (*(long *)(this + 0x290) != 0)) {
      bVar2 = *(long *)(*(long *)(this + 0x290) + -8) != 0;
    }
    pthread_rwlock_unlock((pthread_rwlock_t *)(this + 0x240));
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(0x23);
}



/* NavigationMeshSourceGeometryData3D::get_projected_obstructions() const */

Array * NavigationMeshSourceGeometryData3D::get_projected_obstructions(void)

{
  char cVar1;
  long lVar2;
  int iVar3;
  Variant *pVVar4;
  long in_RSI;
  Array *in_RDI;
  Vector *pVVar5;
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
    iVar3 = pthread_rwlock_rdlock((pthread_rwlock_t *)(in_RSI + 0x240));
  } while (iVar3 == 0xb);
  if (iVar3 == 0x23) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(0x23);
  }
  Array::Array(in_RDI);
  Array::resize((int)in_RDI);
  lVar2 = *(long *)(in_RSI + 0x2c0);
  for (lVar6 = 0; (lVar2 != 0 && (lVar6 < *(long *)(lVar2 + -8))); lVar6 = lVar6 + 1) {
    pVVar5 = (Vector *)(lVar2 + lVar6 * 0x20);
    Dictionary::Dictionary((Dictionary *)local_80);
    Variant::Variant((Variant *)local_58,ProjectedObstruction::VERSION);
    Variant::Variant((Variant *)local_78,"version");
    pVVar4 = (Variant *)Dictionary::operator[](local_80);
    if (pVVar4 != (Variant *)local_58) {
      if (Variant::needs_deinit[*(int *)pVVar4] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)pVVar4 = 0;
      *(int *)pVVar4 = local_58[0];
      *(undefined8 *)(pVVar4 + 8) = local_50;
      *(undefined8 *)(pVVar4 + 0x10) = uStack_48;
      local_58[0] = 0;
    }
    if (Variant::needs_deinit[local_78[0]] == '\0') {
      cVar1 = Variant::needs_deinit[local_58[0]];
    }
    else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[local_58[0]];
    }
    if (cVar1 != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_58,pVVar5);
    Variant::Variant((Variant *)local_78,"vertices");
    pVVar4 = (Variant *)Dictionary::operator[](local_80);
    if (pVVar4 != (Variant *)local_58) {
      if (Variant::needs_deinit[*(int *)pVVar4] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)pVVar4 = 0;
      *(int *)pVVar4 = local_58[0];
      *(undefined8 *)(pVVar4 + 8) = local_50;
      *(undefined8 *)(pVVar4 + 0x10) = uStack_48;
      local_58[0] = 0;
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_58,*(float *)(pVVar5 + 0x10));
    Variant::Variant((Variant *)local_78,"elevation");
    pVVar4 = (Variant *)Dictionary::operator[](local_80);
    if (pVVar4 != (Variant *)local_58) {
      if (Variant::needs_deinit[*(int *)pVVar4] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)pVVar4 = 0;
      *(int *)pVVar4 = local_58[0];
      *(undefined8 *)(pVVar4 + 8) = local_50;
      *(undefined8 *)(pVVar4 + 0x10) = uStack_48;
      local_58[0] = 0;
    }
    if (Variant::needs_deinit[local_78[0]] == '\0') {
      cVar1 = Variant::needs_deinit[local_58[0]];
    }
    else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[local_58[0]];
    }
    if (cVar1 != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_58,*(float *)(pVVar5 + 0x14));
    Variant::Variant((Variant *)local_78,"height");
    pVVar4 = (Variant *)Dictionary::operator[](local_80);
    if (pVVar4 != (Variant *)local_58) {
      if (Variant::needs_deinit[*(int *)pVVar4] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)pVVar4 = 0;
      *(int *)pVVar4 = local_58[0];
      *(undefined8 *)(pVVar4 + 8) = local_50;
      *(undefined8 *)(pVVar4 + 0x10) = uStack_48;
      local_58[0] = 0;
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_58,(bool)pVVar5[0x18]);
    Variant::Variant((Variant *)local_78,"carve");
    pVVar4 = (Variant *)Dictionary::operator[](local_80);
    if (pVVar4 != (Variant *)local_58) {
      if (Variant::needs_deinit[*(int *)pVVar4] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)pVVar4 = 0;
      *(int *)pVVar4 = local_58[0];
      *(undefined8 *)(pVVar4 + 8) = local_50;
      *(undefined8 *)(pVVar4 + 0x10) = uStack_48;
      local_58[0] = 0;
    }
    if (Variant::needs_deinit[local_78[0]] == '\0') {
      cVar1 = Variant::needs_deinit[local_58[0]];
    }
    else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[local_58[0]];
    }
    if (cVar1 != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_58,(Dictionary *)local_80);
    pVVar4 = (Variant *)Array::operator[]((int)in_RDI);
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
      *(undefined8 *)(pVVar4 + 8) = local_50;
      *(undefined8 *)(pVVar4 + 0x10) = uStack_48;
    }
    Dictionary::~Dictionary((Dictionary *)local_80);
    lVar2 = *(long *)(in_RSI + 0x2c0);
  }
  pthread_rwlock_unlock((pthread_rwlock_t *)(in_RSI + 0x240));
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return in_RDI;
}



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



/* NavigationMeshSourceGeometryData3D::set_indices(Vector<int> const&) */

void __thiscall
NavigationMeshSourceGeometryData3D::set_indices
          (NavigationMeshSourceGeometryData3D *this,Vector *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 8);
  if (*(long *)(this + 0x280) == 0) {
    lVar2 = 0;
    if (lVar3 == 0) goto LAB_00100738;
LAB_0010072f:
    lVar3 = *(long *)(lVar3 + -8);
  }
  else {
    lVar2 = *(long *)(*(long *)(this + 0x280) + -8);
    if (lVar3 != 0) goto LAB_0010072f;
    lVar3 = 0;
  }
  if (lVar2 < lVar3) {
    _err_print_error("set_indices","scene/resources/3d/navigation_mesh_source_geometry_data_3d.cpp",
                     0x2d,"Condition \"vertices.size() < p_indices.size()\" is true.",0,0);
    return;
  }
LAB_00100738:
  iVar1 = pthread_rwlock_wrlock((pthread_rwlock_t *)(this + 0x240));
  if (iVar1 == 0x23) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(0x23);
  }
  if (*(long *)(this + 0x290) != *(long *)(param_1 + 8)) {
    CowData<int>::_ref((CowData<int> *)(this + 0x290),(CowData *)(param_1 + 8));
  }
  this[0x2b0] = (NavigationMeshSourceGeometryData3D)0x1;
  pthread_rwlock_unlock((pthread_rwlock_t *)(this + 0x240));
  return;
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



/* NavigationMeshSourceGeometryData3D::set_vertices(Vector<float> const&) */

void __thiscall
NavigationMeshSourceGeometryData3D::set_vertices
          (NavigationMeshSourceGeometryData3D *this,Vector *param_1)

{
  int iVar1;
  
  iVar1 = pthread_rwlock_wrlock((pthread_rwlock_t *)(this + 0x240));
  if (iVar1 != 0x23) {
    if (*(long *)(this + 0x280) != *(long *)(param_1 + 8)) {
      CowData<float>::_ref((CowData<float> *)(this + 0x280),(CowData *)(param_1 + 8));
    }
    this[0x2b0] = (NavigationMeshSourceGeometryData3D)0x1;
    pthread_rwlock_unlock((pthread_rwlock_t *)(this + 0x240));
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(0x23);
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



/* NavigationMeshSourceGeometryData3D::_get(StringName const&, Variant&) const */

undefined4 __thiscall
NavigationMeshSourceGeometryData3D::_get
          (NavigationMeshSourceGeometryData3D *this,StringName *param_1,Variant *param_2)

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



/* NavigationMeshSourceGeometryData3D::_bind_methods() */

void NavigationMeshSourceGeometryData3D::_bind_methods(void)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  MethodBind *pMVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  long in_FS_OFFSET;
  CowData<char32_t> *local_258;
  undefined8 local_198;
  long local_190;
  long local_188;
  long local_180;
  long local_178;
  long local_170;
  char *local_168;
  undefined8 local_160;
  char *local_158;
  undefined8 local_150;
  long *local_148;
  int local_140;
  undefined8 local_138;
  undefined4 local_130;
  char *local_128;
  undefined8 local_120;
  char *local_118;
  char *pcStack_110;
  undefined8 local_108;
  char *local_f8;
  char *pcStack_f0;
  undefined8 local_e8;
  char *local_d8;
  char *pcStack_d0;
  undefined8 local_c8;
  char *local_b8;
  undefined *puStack_b0;
  undefined8 local_a8;
  char *local_98;
  char *pcStack_90;
  char *local_88;
  char *pcStack_80;
  undefined8 local_78;
  char **local_68;
  undefined1 auStack_60 [16];
  char **ppcStack_50;
  long local_40;
  
  puVar4 = PTR__LC19_00114cd0;
  puVar3 = PTR__LC3_00114cc8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_120 = 0;
  local_128 = "vertices";
  uVar7 = (uint)&local_68;
  local_68 = &local_128;
  D_METHODP((char *)&local_158,(char ***)"set_vertices",uVar7);
  auStack_60 = (undefined1  [16])0x0;
  local_68 = (char **)0x0;
  pMVar6 = create_method_bind<NavigationMeshSourceGeometryData3D,Vector<float>const&>(set_vertices);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_158,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  plVar5 = local_148;
  if (local_148 != (long *)0x0) {
    LOCK();
    plVar9 = local_148 + -2;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (*plVar9 == 0) {
      if (local_148 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_148[-1];
      lVar8 = 0;
      local_148 = (long *)0x0;
      plVar9 = plVar5;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar9 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar9 = plVar9 + 1;
        } while (lVar1 != lVar8);
      }
      Memory::free_static(plVar5 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_158 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_158,(char ***)"get_vertices",0);
  auStack_60 = (undefined1  [16])0x0;
  local_68 = (char **)0x0;
  pMVar6 = create_method_bind<NavigationMeshSourceGeometryData3D,Vector<float>const&>(get_vertices);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_158,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  plVar5 = local_148;
  if (local_148 != (long *)0x0) {
    LOCK();
    plVar9 = local_148 + -2;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (*plVar9 == 0) {
      if (local_148 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_148[-1];
      lVar8 = 0;
      local_148 = (long *)0x0;
      plVar9 = plVar5;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar9 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar9 = plVar9 + 1;
        } while (lVar1 != lVar8);
      }
      Memory::free_static(plVar5 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_158 != (char *)0x0)) {
    StringName::unref();
  }
  local_128 = "indices";
  local_120 = 0;
  local_68 = &local_128;
  D_METHODP((char *)&local_158,(char ***)"set_indices",uVar7);
  auStack_60 = (undefined1  [16])0x0;
  local_68 = (char **)0x0;
  pMVar6 = create_method_bind<NavigationMeshSourceGeometryData3D,Vector<int>const&>(set_indices);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_158,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  plVar5 = local_148;
  if (local_148 != (long *)0x0) {
    LOCK();
    plVar9 = local_148 + -2;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (*plVar9 == 0) {
      if (local_148 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_148[-1];
      lVar8 = 0;
      local_148 = (long *)0x0;
      plVar9 = plVar5;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar9 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar9 = plVar9 + 1;
        } while (lVar1 != lVar8);
      }
      Memory::free_static(plVar5 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_158 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_158,(char ***)"get_indices",0);
  auStack_60 = (undefined1  [16])0x0;
  local_68 = (char **)0x0;
  pMVar6 = create_method_bind<NavigationMeshSourceGeometryData3D,Vector<int>const&>(get_indices);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_158,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  plVar5 = local_148;
  if (local_148 != (long *)0x0) {
    LOCK();
    plVar9 = local_148 + -2;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (*plVar9 == 0) {
      if (local_148 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_148[-1];
      lVar8 = 0;
      local_148 = (long *)0x0;
      plVar9 = plVar5;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar9 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar9 = plVar9 + 1;
        } while (lVar1 != lVar8);
      }
      Memory::free_static(plVar5 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_158 != (char *)0x0)) {
    StringName::unref();
  }
  local_a8 = 0;
  local_b8 = puVar3;
  puStack_b0 = puVar4;
  auStack_60._0_8_ = &puStack_b0;
  local_68 = &local_b8;
  D_METHODP((char *)&local_158,(char ***)"append_arrays",uVar7);
  auStack_60 = (undefined1  [16])0x0;
  local_68 = (char **)0x0;
  pMVar6 = create_method_bind<NavigationMeshSourceGeometryData3D,Vector<float>const&,Vector<int>const&>
                     (append_arrays);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_158,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  plVar5 = local_148;
  if (local_148 != (long *)0x0) {
    LOCK();
    plVar9 = local_148 + -2;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (*plVar9 == 0) {
      if (local_148 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_148[-1];
      lVar8 = 0;
      local_148 = (long *)0x0;
      plVar9 = plVar5;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar9 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar9 = plVar9 + 1;
        } while (lVar1 != lVar8);
      }
      Memory::free_static(plVar5 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_158 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_158,(char ***)"clear",0);
  auStack_60 = (undefined1  [16])0x0;
  local_68 = (char **)0x0;
  pMVar6 = create_method_bind<NavigationMeshSourceGeometryData3D>(clear);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_158,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  plVar5 = local_148;
  if (local_148 != (long *)0x0) {
    LOCK();
    plVar9 = local_148 + -2;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (*plVar9 == 0) {
      if (local_148 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_148[-1];
      lVar8 = 0;
      local_148 = (long *)0x0;
      plVar9 = plVar5;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar9 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar9 = plVar9 + 1;
        } while (lVar1 != lVar8);
      }
      Memory::free_static(plVar5 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_158 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_158,(char ***)"has_data",0);
  auStack_60 = (undefined1  [16])0x0;
  local_68 = (char **)0x0;
  pMVar6 = create_method_bind<NavigationMeshSourceGeometryData3D,bool>(has_data);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_158,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  plVar5 = local_148;
  if (local_148 != (long *)0x0) {
    LOCK();
    plVar9 = local_148 + -2;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (*plVar9 == 0) {
      if (local_148 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_148[-1];
      lVar8 = 0;
      local_148 = (long *)0x0;
      plVar9 = plVar5;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar9 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar9 = plVar9 + 1;
        } while (lVar1 != lVar8);
      }
      Memory::free_static(plVar5 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_158 != (char *)0x0)) {
    StringName::unref();
  }
  local_c8 = 0;
  auStack_60._0_8_ = &pcStack_d0;
  local_d8 = "mesh";
  pcStack_d0 = "xform";
  local_68 = &local_d8;
  D_METHODP((char *)&local_158,(char ***)"add_mesh",uVar7);
  auStack_60 = (undefined1  [16])0x0;
  local_68 = (char **)0x0;
  pMVar6 = create_method_bind<NavigationMeshSourceGeometryData3D,Ref<Mesh>const&,Transform3D_const&>
                     (add_mesh);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_158,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  plVar5 = local_148;
  if (local_148 != (long *)0x0) {
    LOCK();
    plVar9 = local_148 + -2;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (*plVar9 == 0) {
      if (local_148 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_148[-1];
      lVar8 = 0;
      local_148 = (long *)0x0;
      plVar9 = plVar5;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar9 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar9 = plVar9 + 1;
        } while (lVar1 != lVar8);
      }
      Memory::free_static(plVar5 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_158 != (char *)0x0)) {
    StringName::unref();
  }
  local_e8 = 0;
  local_f8 = "mesh_array";
  pcStack_f0 = "xform";
  auStack_60._0_8_ = &pcStack_f0;
  local_68 = &local_f8;
  D_METHODP((char *)&local_158,(char ***)"add_mesh_array",uVar7);
  auStack_60 = (undefined1  [16])0x0;
  local_68 = (char **)0x0;
  pMVar6 = create_method_bind<NavigationMeshSourceGeometryData3D,Array_const&,Transform3D_const&>
                     (add_mesh_array);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_158,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  plVar5 = local_148;
  if (local_148 != (long *)0x0) {
    LOCK();
    plVar9 = local_148 + -2;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (*plVar9 == 0) {
      if (local_148 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_148[-1];
      lVar8 = 0;
      local_148 = (long *)0x0;
      plVar9 = plVar5;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar9 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar9 = plVar9 + 1;
        } while (lVar1 != lVar8);
      }
      Memory::free_static(plVar5 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_158 != (char *)0x0)) {
    StringName::unref();
  }
  local_108 = 0;
  local_118 = "faces";
  pcStack_110 = "xform";
  auStack_60._0_8_ = &pcStack_110;
  local_68 = &local_118;
  D_METHODP((char *)&local_158,(char ***)"add_faces",uVar7);
  auStack_60 = (undefined1  [16])0x0;
  local_68 = (char **)0x0;
  pMVar6 = create_method_bind<NavigationMeshSourceGeometryData3D,Vector<Vector3>const&,Transform3D_const&>
                     (add_faces);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_158,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  plVar5 = local_148;
  if (local_148 != (long *)0x0) {
    LOCK();
    plVar9 = local_148 + -2;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (*plVar9 == 0) {
      if (local_148 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_148[-1];
      lVar8 = 0;
      local_148 = (long *)0x0;
      plVar9 = plVar5;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar9 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar9 = plVar9 + 1;
        } while (lVar1 != lVar8);
      }
      Memory::free_static(plVar5 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_158 != (char *)0x0)) {
    StringName::unref();
  }
  local_b8 = "other_geometry";
  puStack_b0 = (undefined *)0x0;
  local_68 = &local_b8;
  D_METHODP((char *)&local_158,(char ***)"merge",uVar7);
  auStack_60 = (undefined1  [16])0x0;
  local_68 = (char **)0x0;
  pMVar6 = create_method_bind<NavigationMeshSourceGeometryData3D,Ref<NavigationMeshSourceGeometryData3D>const&>
                     (merge);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_158,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  plVar5 = local_148;
  if (local_148 != (long *)0x0) {
    LOCK();
    plVar9 = local_148 + -2;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (*plVar9 == 0) {
      if (local_148 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_148[-1];
      lVar8 = 0;
      local_148 = (long *)0x0;
      plVar9 = plVar5;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar9 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar9 = plVar9 + 1;
        } while (lVar1 != lVar8);
      }
      Memory::free_static(plVar5 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_158 != (char *)0x0)) {
    StringName::unref();
  }
  local_98 = puVar3;
  pcStack_90 = "elevation";
  auStack_60._8_8_ = &local_88;
  auStack_60._0_8_ = &pcStack_90;
  local_88 = "height";
  pcStack_80 = "carve";
  local_78 = 0;
  local_68 = &local_98;
  ppcStack_50 = &pcStack_80;
  D_METHODP((char *)&local_158,(char ***)"add_projected_obstruction",uVar7);
  auStack_60 = (undefined1  [16])0x0;
  local_68 = (char **)0x0;
  pMVar6 = create_method_bind<NavigationMeshSourceGeometryData3D,Vector<Vector3>const&,float,float,bool>
                     (add_projected_obstruction);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_158,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  plVar5 = local_148;
  if (local_148 != (long *)0x0) {
    LOCK();
    plVar9 = local_148 + -2;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (*plVar9 == 0) {
      if (local_148 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_148[-1];
      lVar8 = 0;
      local_148 = (long *)0x0;
      plVar9 = plVar5;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar9 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar9 = plVar9 + 1;
        } while (lVar1 != lVar8);
      }
      Memory::free_static(plVar5 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_158 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_158,(char ***)"clear_projected_obstructions",0);
  auStack_60 = (undefined1  [16])0x0;
  local_68 = (char **)0x0;
  pMVar6 = create_method_bind<NavigationMeshSourceGeometryData3D>(clear_projected_obstructions);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_158,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  plVar5 = local_148;
  if (local_148 != (long *)0x0) {
    LOCK();
    plVar9 = local_148 + -2;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (*plVar9 == 0) {
      if (local_148 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_148[-1];
      lVar8 = 0;
      local_148 = (long *)0x0;
      plVar9 = plVar5;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar9 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar9 = plVar9 + 1;
        } while (lVar1 != lVar8);
      }
      Memory::free_static(plVar5 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_158 != (char *)0x0)) {
    StringName::unref();
  }
  local_98 = "projected_obstructions";
  pcStack_90 = (char *)0x0;
  local_68 = &local_98;
  D_METHODP((char *)&local_158,(char ***)"set_projected_obstructions",uVar7);
  auStack_60 = (undefined1  [16])0x0;
  local_68 = (char **)0x0;
  pMVar6 = create_method_bind<NavigationMeshSourceGeometryData3D,Array_const&>
                     (set_projected_obstructions);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_158,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  plVar5 = local_148;
  if (local_148 != (long *)0x0) {
    LOCK();
    plVar9 = local_148 + -2;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (*plVar9 == 0) {
      if (local_148 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_148[-1];
      lVar8 = 0;
      local_148 = (long *)0x0;
      plVar9 = plVar5;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar9 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar9 = plVar9 + 1;
        } while (lVar1 != lVar8);
      }
      Memory::free_static(plVar5 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_158 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_158,(char ***)"get_projected_obstructions",0);
  auStack_60 = (undefined1  [16])0x0;
  local_68 = (char **)0x0;
  pMVar6 = create_method_bind<NavigationMeshSourceGeometryData3D,Array>(get_projected_obstructions);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_158,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  plVar5 = local_148;
  if (local_148 != (long *)0x0) {
    LOCK();
    plVar9 = local_148 + -2;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (*plVar9 == 0) {
      if (local_148 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_148[-1];
      lVar8 = 0;
      local_148 = (long *)0x0;
      plVar9 = plVar5;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar9 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar9 = plVar9 + 1;
        } while (lVar1 != lVar8);
      }
      Memory::free_static(plVar5 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_158 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_158,(char ***)"get_bounds",0);
  auStack_60 = (undefined1  [16])0x0;
  local_68 = (char **)0x0;
  pMVar6 = create_method_bind<NavigationMeshSourceGeometryData3D,AABB>(get_bounds);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_158,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  plVar5 = local_148;
  if (local_148 != (long *)0x0) {
    LOCK();
    plVar9 = local_148 + -2;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (*plVar9 == 0) {
      if (local_148 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_148[-1];
      lVar8 = 0;
      local_148 = (long *)0x0;
      plVar9 = plVar5;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar9 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar9 = plVar9 + 1;
        } while (lVar1 != lVar8);
      }
      Memory::free_static(plVar5 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_158 != (char *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_170,true);
  _scs_create((char *)&local_178,true);
  local_180 = 0;
  local_158 = "";
  local_188 = 0;
  local_150 = 0;
  String::parse_latin1((StrRange *)&local_188);
  local_158 = "vertices";
  local_190 = 0;
  local_150 = 8;
  String::parse_latin1((StrRange *)&local_190);
  local_158 = (char *)CONCAT44(local_158._4_4_,0x24);
  local_150 = 0;
  if (local_190 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_150,(CowData *)&local_190);
  }
  local_148 = (long *)0x0;
  local_140 = 0;
  local_138 = 0;
  if (local_188 == 0) {
LAB_00101fc0:
    local_130 = 10;
    StringName::operator=((StringName *)&local_148,(StringName *)&local_180);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_138,(CowData *)&local_188);
    local_130 = 10;
    if (local_140 != 0x11) goto LAB_00101fc0;
    StringName::StringName((StringName *)&local_168,(String *)&local_138,false);
    if (local_148 == (long *)local_168) {
      if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_148 = (long *)local_168;
    }
  }
  local_258 = (CowData<char32_t> *)&local_138;
  local_198 = 0;
  local_168 = "NavigationMeshSourceGeometryData3D";
  local_160 = 0x22;
  String::parse_latin1((StrRange *)&local_198);
  StringName::StringName((StringName *)&local_168,(String *)&local_198,false);
  ClassDB::add_property
            ((StringName *)&local_168,(PropertyInfo *)&local_158,(StringName *)&local_178,
             (StringName *)&local_170,-1);
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
  CowData<char32_t>::_unref(local_258);
  if ((StringName::configured != '\0') && (local_148 != (long *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  if ((((StringName::configured != '\0') &&
       ((local_180 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_178 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_170 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_170,true);
  _scs_create((char *)&local_178,true);
  local_158 = "";
  local_180 = 0;
  local_188 = 0;
  local_150 = 0;
  String::parse_latin1((StrRange *)&local_188);
  local_190 = 0;
  local_158 = "indices";
  local_150 = 7;
  String::parse_latin1((StrRange *)&local_190);
  local_158 = (char *)CONCAT44(local_158._4_4_,0x1e);
  local_150 = 0;
  if (local_190 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_150,(CowData *)&local_190);
  }
  local_148 = (long *)0x0;
  local_140 = 0;
  local_138 = 0;
  if (local_188 == 0) {
LAB_00102263:
    local_130 = 10;
    StringName::operator=((StringName *)&local_148,(StringName *)&local_180);
  }
  else {
    CowData<char32_t>::_ref(local_258,(CowData *)&local_188);
    local_130 = 10;
    if (local_140 != 0x11) goto LAB_00102263;
    StringName::StringName((StringName *)&local_168,(String *)local_258,false);
    if (local_148 == (long *)local_168) {
      if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_148 = (long *)local_168;
    }
  }
  local_198 = 0;
  local_168 = "NavigationMeshSourceGeometryData3D";
  local_160 = 0x22;
  String::parse_latin1((StrRange *)&local_198);
  StringName::StringName((StringName *)&local_168,(String *)&local_198,false);
  ClassDB::add_property
            ((StringName *)&local_168,(PropertyInfo *)&local_158,(StringName *)&local_178,
             (StringName *)&local_170,-1);
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
  CowData<char32_t>::_unref(local_258);
  if ((StringName::configured != '\0') && (local_148 != (long *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  if ((((StringName::configured != '\0') &&
       ((local_180 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_178 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_170 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_170,true);
  _scs_create((char *)&local_178,true);
  local_158 = "";
  local_180 = 0;
  local_188 = 0;
  local_150 = 0;
  String::parse_latin1((StrRange *)&local_188);
  local_190 = 0;
  local_158 = "projected_obstructions";
  local_150 = 0x16;
  String::parse_latin1((StrRange *)&local_190);
  local_158 = (char *)CONCAT44(local_158._4_4_,0x1c);
  local_150 = 0;
  if (local_190 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_150,(CowData *)&local_190);
  }
  local_148 = (long *)0x0;
  local_140 = 0;
  local_138 = 0;
  if (local_188 != 0) {
    CowData<char32_t>::_ref(local_258,(CowData *)&local_188);
    local_130 = 10;
    if (local_140 == 0x11) {
      StringName::StringName((StringName *)&local_168,(String *)local_258,false);
      if (local_148 == (long *)local_168) {
        if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_148 = (long *)local_168;
      }
      goto LAB_00102510;
    }
  }
  local_130 = 10;
  StringName::operator=((StringName *)&local_148,(StringName *)&local_180);
LAB_00102510:
  local_198 = 0;
  local_168 = "NavigationMeshSourceGeometryData3D";
  local_160 = 0x22;
  String::parse_latin1((StrRange *)&local_198);
  StringName::StringName((StringName *)&local_168,(String *)&local_198,false);
  ClassDB::add_property
            ((StringName *)&local_168,(PropertyInfo *)&local_158,(StringName *)&local_178,
             (StringName *)&local_170,-1);
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
  CowData<char32_t>::_unref(local_258);
  if ((StringName::configured != '\0') && (local_148 != (long *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  if ((((StringName::configured != '\0') &&
       ((local_180 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_178 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_170 != 0)) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<int>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<int>::_copy_on_write(CowData<int> *this)

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
  __n = lVar1 * 4;
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



/* CowData<float>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<float>::_copy_on_write(CowData<float> *this)

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
  __n = lVar1 * 4;
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



/* Vector<int>::push_back(int) [clone .isra.0] */

void __thiscall Vector<int>::push_back(Vector<int> *this,int param_1)

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
  iVar1 = CowData<int>::resize<false>((CowData<int> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<int>::_copy_on_write((CowData<int> *)(this + 8));
        *(int *)(*(long *)(this + 8) + lVar3 * 4) = param_1;
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



/* CowData<NavigationMeshSourceGeometryData3D::ProjectedObstruction>::_ref(CowData<NavigationMeshSourceGeometryData3D::ProjectedObstruction>
   const&) [clone .part.0] */

void __thiscall
CowData<NavigationMeshSourceGeometryData3D::ProjectedObstruction>::_ref
          (CowData<NavigationMeshSourceGeometryData3D::ProjectedObstruction> *this,CowData *param_1)

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



/* NavigationMeshSourceGeometryData3D::_get_projected_obstructions() const */

void NavigationMeshSourceGeometryData3D::_get_projected_obstructions(void)

{
  int iVar1;
  long in_RSI;
  long in_RDI;
  
  do {
    iVar1 = pthread_rwlock_rdlock((pthread_rwlock_t *)(in_RSI + 0x240));
  } while (iVar1 == 0xb);
  if (iVar1 != 0x23) {
    *(undefined8 *)(in_RDI + 8) = 0;
    if (*(long *)(in_RSI + 0x2c0) != 0) {
      CowData<NavigationMeshSourceGeometryData3D::ProjectedObstruction>::_ref
                ((CowData<NavigationMeshSourceGeometryData3D::ProjectedObstruction> *)(in_RDI + 8),
                 (CowData *)(in_RSI + 0x2c0));
    }
    pthread_rwlock_unlock((pthread_rwlock_t *)(in_RSI + 0x240));
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(0x23);
}



/* NavigationMeshSourceGeometryData3D::set_data(Vector<float> const&, Vector<int> const&,
   Vector<NavigationMeshSourceGeometryData3D::ProjectedObstruction>&) */

void __thiscall
NavigationMeshSourceGeometryData3D::set_data
          (NavigationMeshSourceGeometryData3D *this,Vector *param_1,Vector *param_2,Vector *param_3)

{
  int iVar1;
  
  iVar1 = pthread_rwlock_wrlock((pthread_rwlock_t *)(this + 0x240));
  if (iVar1 != 0x23) {
    if (*(long *)(this + 0x280) != *(long *)(param_1 + 8)) {
      CowData<float>::_ref((CowData<float> *)(this + 0x280),(CowData *)(param_1 + 8));
    }
    if (*(long *)(this + 0x290) != *(long *)(param_2 + 8)) {
      CowData<int>::_ref((CowData<int> *)(this + 0x290),(CowData *)(param_2 + 8));
    }
    if (*(long *)(this + 0x2c0) != *(long *)(param_3 + 8)) {
      CowData<NavigationMeshSourceGeometryData3D::ProjectedObstruction>::_ref
                ((CowData<NavigationMeshSourceGeometryData3D::ProjectedObstruction> *)(this + 0x2c0)
                 ,(CowData *)(param_3 + 8));
    }
    this[0x2b0] = (NavigationMeshSourceGeometryData3D)0x1;
    pthread_rwlock_unlock((pthread_rwlock_t *)(this + 0x240));
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(0x23);
}



/* NavigationMeshSourceGeometryData3D::get_data(Vector<float>&, Vector<int>&,
   Vector<NavigationMeshSourceGeometryData3D::ProjectedObstruction>&) */

void __thiscall
NavigationMeshSourceGeometryData3D::get_data
          (NavigationMeshSourceGeometryData3D *this,Vector *param_1,Vector *param_2,Vector *param_3)

{
  int iVar1;
  
  do {
    iVar1 = pthread_rwlock_rdlock((pthread_rwlock_t *)(this + 0x240));
  } while (iVar1 == 0xb);
  if (iVar1 != 0x23) {
    if (*(long *)(param_1 + 8) != *(long *)(this + 0x280)) {
      CowData<float>::_ref((CowData<float> *)(param_1 + 8),(CowData *)(this + 0x280));
    }
    if (*(long *)(param_2 + 8) != *(long *)(this + 0x290)) {
      CowData<int>::_ref((CowData<int> *)(param_2 + 8),(CowData *)(this + 0x290));
    }
    if (*(long *)(param_3 + 8) != *(long *)(this + 0x2c0)) {
      CowData<NavigationMeshSourceGeometryData3D::ProjectedObstruction>::_ref
                ((CowData<NavigationMeshSourceGeometryData3D::ProjectedObstruction> *)(param_3 + 8),
                 (CowData *)(this + 0x2c0));
    }
    pthread_rwlock_unlock((pthread_rwlock_t *)(this + 0x240));
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(0x23);
}



/* CowData<NavigationMeshSourceGeometryData3D::ProjectedObstruction>::_copy_on_write() [clone
   .isra.0] */

void __thiscall
CowData<NavigationMeshSourceGeometryData3D::ProjectedObstruction>::_copy_on_write
          (CowData<NavigationMeshSourceGeometryData3D::ProjectedObstruction> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  CowData<float> *this_00;
  ulong uVar4;
  long lVar5;
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
  uVar4 = 0x10;
  if (lVar1 * 0x20 != 0) {
    uVar4 = lVar1 * 0x20 - 1;
    uVar4 = uVar4 | uVar4 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    uVar4 = (uVar4 | uVar4 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar4,false);
  if (puVar3 != (undefined8 *)0x0) {
    lVar6 = 0;
    *puVar3 = 1;
    puVar3[1] = lVar1;
    this_00 = (CowData<float> *)(puVar3 + 3);
    if (lVar1 != 0) {
      do {
        lVar5 = lVar6 * 0x20 + *(long *)this;
        *(undefined8 *)this_00 = 0;
        if (*(long *)(lVar5 + 8) != 0) {
          CowData<float>::_ref(this_00,(CowData *)(lVar5 + 8));
        }
        lVar6 = lVar6 + 1;
        *(undefined8 *)(this_00 + 8) = *(undefined8 *)(lVar5 + 0x10);
        this_00[0x10] = *(CowData<float> *)(lVar5 + 0x18);
        this_00 = this_00 + 0x20;
      } while (lVar1 != lVar6);
    }
    _unref(this);
    *(undefined8 **)this = puVar3 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* NavigationMeshSourceGeometryData3D::get_bounds() */

void NavigationMeshSourceGeometryData3D::get_bounds(void)

{
  pthread_rwlock_t *__rwlock;
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  long lVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  char cVar10;
  int iVar11;
  long lVar12;
  char cVar13;
  long in_RSI;
  undefined8 *in_RDI;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long in_FS_OFFSET;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  
  __rwlock = (pthread_rwlock_t *)(in_RSI + 0x240);
  lVar5 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    iVar11 = pthread_rwlock_rdlock(__rwlock);
  } while (iVar11 == 0xb);
  if (iVar11 != 0x23) {
    cVar13 = *(char *)(in_RSI + 0x2b0);
    if (cVar13 == '\0') {
      pthread_rwlock_unlock(__rwlock);
    }
    else {
      pthread_rwlock_unlock(__rwlock);
      iVar11 = pthread_rwlock_wrlock(__rwlock);
      if (iVar11 == 0x23) goto LAB_0010348b;
      lVar19 = *(long *)(in_RSI + 0x280);
      auVar9._12_4_ = 0;
      auVar9._0_12_ = ZEXT812(0);
      *(undefined1 *)(in_RSI + 0x2b0) = 0;
      *(undefined8 *)(in_RSI + 0x2a8) = 0;
      *(undefined1 (*) [16])(in_RSI + 0x298) = auVar9;
      if (lVar19 != 0) {
        lVar15 = 0;
        lVar17 = 0;
        cVar10 = cVar13;
        do {
          cVar13 = cVar10;
          lVar14 = *(long *)(lVar19 + -8);
          if (lVar14 / 3 <= lVar17) break;
          lVar12 = lVar15 + 2;
          if (lVar14 <= lVar15 + 2) {
LAB_0010324e:
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,lVar12,lVar14,"p_index","size()","",
                       false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar6 = (code *)invalidInstructionException();
            (*pcVar6)();
          }
          lVar16 = lVar15 * 4;
          fVar21 = *(float *)(lVar19 + 8 + lVar16);
          lVar12 = lVar15 + 1;
          if ((lVar14 <= lVar15 + 1) ||
             (fVar20 = *(float *)(lVar19 + 4 + lVar16), lVar12 = lVar15, lVar14 <= lVar15))
          goto LAB_0010324e;
          fVar22 = *(float *)(lVar19 + lVar16);
          if (cVar13 == '\0') {
            fVar23 = *(float *)(in_RSI + 0x2a4);
            if (((fVar23 < 0.0) || (fVar24 = *(float *)(in_RSI + 0x2a8), fVar24 < 0.0)) ||
               (fVar25 = *(float *)(in_RSI + 0x2ac), fVar25 < 0.0)) {
              _err_print_error("expand_to","./core/math/aabb.h",0x158,
                               "AABB size is negative, this is not supported. Use AABB.abs() to get an AABB with a positive size."
                               ,0,0);
              lVar19 = *(long *)(in_RSI + 0x280);
              fVar25 = *(float *)(in_RSI + 0x2ac);
              fVar24 = *(float *)(in_RSI + 0x2a8);
              fVar23 = *(float *)(in_RSI + 0x2a4);
            }
            fVar2 = *(float *)(in_RSI + 0x298);
            fVar3 = *(float *)(in_RSI + 0x29c);
            fVar4 = *(float *)(in_RSI + 0x2a0);
            fVar26 = fVar22;
            if (fVar2 <= fVar22) {
              fVar26 = fVar2;
            }
            fVar27 = fVar20;
            if (fVar3 <= fVar20) {
              fVar27 = fVar3;
            }
            fVar28 = fVar21;
            if (fVar4 <= fVar21) {
              fVar28 = fVar4;
            }
            if (fVar22 <= fVar23 + fVar2) {
              fVar22 = fVar23 + fVar2;
            }
            if (fVar20 <= fVar24 + fVar3) {
              fVar20 = fVar24 + fVar3;
            }
            if (fVar21 <= fVar25 + fVar4) {
              fVar21 = fVar25 + fVar4;
            }
            *(ulong *)(in_RSI + 0x298) = CONCAT44(fVar27,fVar26);
            *(ulong *)(in_RSI + 0x2a0) = CONCAT44(fVar22 - fVar26,fVar28);
            *(ulong *)(in_RSI + 0x2a8) = CONCAT44(fVar21 - fVar28,fVar20 - fVar27);
          }
          else {
            *(ulong *)(in_RSI + 0x298) = CONCAT44(fVar20,fVar22);
            *(float *)(in_RSI + 0x2a0) = fVar21;
          }
          lVar17 = lVar17 + 1;
          lVar15 = lVar15 + 3;
          cVar13 = '\0';
          cVar10 = '\0';
        } while (lVar19 != 0);
      }
      CowData<NavigationMeshSourceGeometryData3D::ProjectedObstruction>::_copy_on_write
                ((CowData<NavigationMeshSourceGeometryData3D::ProjectedObstruction> *)
                 (in_RSI + 0x2c0));
      lVar19 = *(long *)(in_RSI + 0x2c0);
      CowData<NavigationMeshSourceGeometryData3D::ProjectedObstruction>::_copy_on_write
                ((CowData<NavigationMeshSourceGeometryData3D::ProjectedObstruction> *)
                 (in_RSI + 0x2c0));
      lVar15 = *(long *)(in_RSI + 0x2c0);
      if (lVar15 != 0) {
        lVar15 = lVar15 + *(long *)(lVar15 + -8) * 0x20;
      }
      for (; lVar19 != lVar15; lVar19 = lVar19 + 0x20) {
        lVar17 = *(long *)(lVar19 + 8);
        if (lVar17 != 0) {
          lVar16 = 0;
          lVar18 = 0;
          do {
            lVar14 = *(long *)(lVar17 + -8);
            if (lVar14 / 3 <= lVar18) break;
            lVar12 = lVar16 + 2;
            if (lVar14 <= lVar16 + 2) goto LAB_0010324e;
            lVar1 = lVar16 * 4;
            fVar21 = *(float *)(lVar17 + 8 + lVar1);
            lVar12 = lVar16 + 1;
            if ((lVar14 <= lVar16 + 1) ||
               (fVar20 = *(float *)(lVar17 + 4 + lVar1), lVar12 = lVar16, lVar14 <= lVar16))
            goto LAB_0010324e;
            fVar22 = *(float *)(lVar17 + lVar1);
            if (cVar13 == '\0') {
              fVar23 = *(float *)(in_RSI + 0x2a4);
              if (((fVar23 < 0.0) || (fVar24 = *(float *)(in_RSI + 0x2a8), fVar24 < 0.0)) ||
                 (fVar25 = *(float *)(in_RSI + 0x2ac), fVar25 < 0.0)) {
                _err_print_error("expand_to","./core/math/aabb.h",0x158,
                                 "AABB size is negative, this is not supported. Use AABB.abs() to get an AABB with a positive size."
                                 ,0,0);
                fVar25 = *(float *)(in_RSI + 0x2ac);
                fVar24 = *(float *)(in_RSI + 0x2a8);
                fVar23 = *(float *)(in_RSI + 0x2a4);
              }
              fVar2 = *(float *)(in_RSI + 0x298);
              fVar3 = *(float *)(in_RSI + 0x29c);
              fVar4 = *(float *)(in_RSI + 0x2a0);
              fVar26 = fVar22;
              if (fVar2 <= fVar22) {
                fVar26 = fVar2;
              }
              fVar27 = fVar20;
              if (fVar3 <= fVar20) {
                fVar27 = fVar3;
              }
              fVar28 = fVar21;
              if (fVar4 <= fVar21) {
                fVar28 = fVar4;
              }
              if (fVar22 <= fVar23 + fVar2) {
                fVar22 = fVar23 + fVar2;
              }
              if (fVar20 <= fVar24 + fVar3) {
                fVar20 = fVar24 + fVar3;
              }
              if (fVar21 <= fVar25 + fVar4) {
                fVar21 = fVar25 + fVar4;
              }
              *(ulong *)(in_RSI + 0x298) = CONCAT44(fVar27,fVar26);
              *(ulong *)(in_RSI + 0x2a0) = CONCAT44(fVar22 - fVar26,fVar28);
              lVar17 = *(long *)(lVar19 + 8);
              *(ulong *)(in_RSI + 0x2a8) = CONCAT44(fVar21 - fVar28,fVar20 - fVar27);
            }
            else {
              *(ulong *)(in_RSI + 0x298) = CONCAT44(fVar20,fVar22);
              *(float *)(in_RSI + 0x2a0) = fVar21;
            }
            lVar18 = lVar18 + 1;
            lVar16 = lVar16 + 3;
            cVar13 = '\0';
          } while (lVar17 != 0);
        }
      }
      pthread_rwlock_unlock(__rwlock);
    }
    do {
      iVar11 = pthread_rwlock_rdlock(__rwlock);
    } while (iVar11 == 0xb);
    if (iVar11 != 0x23) {
      uVar7 = *(undefined8 *)(in_RSI + 0x298);
      uVar8 = *(undefined8 *)(in_RSI + 0x2a0);
      in_RDI[2] = *(undefined8 *)(in_RSI + 0x2a8);
      *in_RDI = uVar7;
      in_RDI[1] = uVar8;
      pthread_rwlock_unlock(__rwlock);
      if (lVar5 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
LAB_0010348b:
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(0x23);
}



/* NavigationMeshSourceGeometryData3D::clear_projected_obstructions() */

void __thiscall
NavigationMeshSourceGeometryData3D::clear_projected_obstructions
          (NavigationMeshSourceGeometryData3D *this)

{
  int iVar1;
  
  iVar1 = pthread_rwlock_wrlock((pthread_rwlock_t *)(this + 0x240));
  if (iVar1 != 0x23) {
    if ((*(long *)(this + 0x2c0) != 0) && (*(long *)(*(long *)(this + 0x2c0) + -8) != 0)) {
      CowData<NavigationMeshSourceGeometryData3D::ProjectedObstruction>::_unref
                ((CowData<NavigationMeshSourceGeometryData3D::ProjectedObstruction> *)(this + 0x2c0)
                );
    }
    this[0x2b0] = (NavigationMeshSourceGeometryData3D)0x1;
    pthread_rwlock_unlock((pthread_rwlock_t *)(this + 0x240));
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(0x23);
}



/* NavigationMeshSourceGeometryData3D::clear() */

void __thiscall NavigationMeshSourceGeometryData3D::clear(NavigationMeshSourceGeometryData3D *this)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = pthread_rwlock_wrlock((pthread_rwlock_t *)(this + 0x240));
  if (iVar3 != 0x23) {
    lVar2 = *(long *)(this + 0x280);
    if ((lVar2 != 0) && (*(long *)(lVar2 + -8) != 0)) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(this + 0x280);
        *(undefined8 *)(this + 0x280) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
      else {
        *(undefined8 *)(this + 0x280) = 0;
      }
    }
    lVar2 = *(long *)(this + 0x290);
    if ((lVar2 != 0) && (*(long *)(lVar2 + -8) != 0)) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(this + 0x290);
        *(undefined8 *)(this + 0x290) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
      else {
        *(undefined8 *)(this + 0x290) = 0;
      }
    }
    if ((*(long *)(this + 0x2c0) != 0) && (*(long *)(*(long *)(this + 0x2c0) + -8) != 0)) {
      CowData<NavigationMeshSourceGeometryData3D::ProjectedObstruction>::_unref
                ((CowData<NavigationMeshSourceGeometryData3D::ProjectedObstruction> *)(this + 0x2c0)
                );
    }
    this[0x2b0] = (NavigationMeshSourceGeometryData3D)0x1;
    pthread_rwlock_unlock((pthread_rwlock_t *)(this + 0x240));
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(0x23);
}



/* NavigationMeshSourceGeometryData3D::append_arrays(Vector<float> const&, Vector<int> const&) */

void __thiscall
NavigationMeshSourceGeometryData3D::append_arrays
          (NavigationMeshSourceGeometryData3D *this,Vector *param_1,Vector *param_2)

{
  long *plVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  bool bVar8;
  undefined1 local_58 [8];
  long local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = pthread_rwlock_wrlock((pthread_rwlock_t *)(this + 0x240));
  if (iVar3 == 0x23) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(0x23);
  }
  if (*(long *)(this + 0x280) == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(long *)(*(long *)(this + 0x280) + -8);
  }
  if (*(long *)(this + 0x290) == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(*(long *)(this + 0x290) + -8);
  }
  local_50 = 0;
  plVar1 = (long *)(*(long *)(param_1 + 8) + -0x10);
  if (*(long *)(param_1 + 8) == 0) {
    Vector<float>::append_array((Vector<float> *)(this + 0x278),local_58);
  }
  else {
    do {
      lVar5 = *plVar1;
      if (lVar5 == 0) goto LAB_001036b6;
      LOCK();
      lVar4 = *plVar1;
      bVar8 = lVar5 == lVar4;
      if (bVar8) {
        *plVar1 = lVar5 + 1;
        lVar4 = lVar5;
      }
      UNLOCK();
    } while (!bVar8);
    if (lVar4 != -1) {
      local_50 = *(long *)(param_1 + 8);
    }
LAB_001036b6:
    lVar5 = local_50;
    Vector<float>::append_array((Vector<float> *)(this + 0x278));
    if (lVar5 != 0) {
      LOCK();
      plVar1 = (long *)(lVar5 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_50 + -0x10),false);
      }
    }
  }
  local_50 = 0;
  plVar1 = (long *)(*(long *)(param_2 + 8) + -0x10);
  if (*(long *)(param_2 + 8) == 0) {
    Vector<int>::append_array((Vector<int> *)(this + 0x288),local_58);
  }
  else {
    do {
      lVar5 = *plVar1;
      if (lVar5 == 0) goto LAB_00103737;
      LOCK();
      lVar4 = *plVar1;
      bVar8 = lVar5 == lVar4;
      if (bVar8) {
        *plVar1 = lVar5 + 1;
        lVar4 = lVar5;
      }
      UNLOCK();
    } while (!bVar8);
    if (lVar4 != -1) {
      local_50 = *(long *)(param_2 + 8);
    }
LAB_00103737:
    lVar5 = local_50;
    Vector<int>::append_array((Vector<int> *)(this + 0x288));
    if (lVar5 != 0) {
      LOCK();
      plVar1 = (long *)(lVar5 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_50 + -0x10),false);
      }
    }
  }
  lVar5 = *(long *)(this + 0x290);
  if (lVar5 == 0) {
    if (lVar6 < 0) {
      lVar4 = 0;
LAB_00103818:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar6,lVar4,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
  }
  else {
    lVar4 = *(long *)(lVar5 + -8);
    if (lVar6 < lVar4) {
      if (lVar6 < 0) goto LAB_00103818;
      do {
        iVar3 = *(int *)(lVar5 + lVar6 * 4);
        CowData<int>::_copy_on_write((CowData<int> *)(this + 0x290));
        lVar5 = *(long *)(this + 0x290);
        *(int *)(lVar5 + lVar6 * 4) = iVar3 + (int)(lVar7 / 3);
        lVar6 = lVar6 + 1;
        if (lVar5 == 0) break;
      } while (lVar6 < *(long *)(lVar5 + -8));
    }
  }
  this[0x2b0] = (NavigationMeshSourceGeometryData3D)0x1;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  pthread_rwlock_unlock((pthread_rwlock_t *)(this + 0x240));
  return;
}



/* Vector<float>::push_back(float) [clone .isra.0] */

void __thiscall Vector<float>::push_back(Vector<float> *this,float param_1)

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
  iVar1 = CowData<float>::resize<false>((CowData<float> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<float>::_copy_on_write((CowData<float> *)(this + 8));
        *(float *)(*(long *)(this + 8) + lVar3 * 4) = param_1;
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



/* NavigationMeshSourceGeometryData3D::_add_vertex(Vector3 const&) */

void __thiscall
NavigationMeshSourceGeometryData3D::_add_vertex
          (NavigationMeshSourceGeometryData3D *this,Vector3 *param_1)

{
  Vector<float> *this_00;
  
  this_00 = (Vector<float> *)(this + 0x278);
  Vector<float>::push_back(this_00,*(float *)param_1);
  Vector<float>::push_back(this_00,*(float *)(param_1 + 4));
  Vector<float>::push_back(this_00,*(float *)(param_1 + 8));
  return;
}



/* NavigationMeshSourceGeometryData3D::_add_mesh_array(Array const&, Transform3D const&) */

void __thiscall
NavigationMeshSourceGeometryData3D::_add_mesh_array
          (NavigationMeshSourceGeometryData3D *this,Array *param_1,Transform3D *param_2)

{
  long *plVar1;
  float *pfVar2;
  Vector<float> *this_00;
  Vector<int> *this_01;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int *piVar14;
  int iVar15;
  int *piVar16;
  int *piVar17;
  float *pfVar18;
  long lVar19;
  long in_FS_OFFSET;
  int local_70;
  Variant local_68 [8];
  float *local_60;
  Variant local_58 [8];
  int *local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar15 = Array::size();
  if (iVar15 != 0xd) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("_add_mesh_array",
                       "scene/resources/3d/navigation_mesh_source_geometry_data_3d.cpp",0x9b,
                       "Condition \"p_mesh_array.size() != Mesh::ARRAY_MAX\" is true.",0,0);
      return;
    }
    goto LAB_00103d7c;
  }
  Array::operator[]((int)param_1);
  Variant::operator_cast_to_Vector(local_68);
  pfVar18 = local_60;
  if (local_60 == (float *)0x0) {
    _err_print_error("_add_mesh_array",
                     "scene/resources/3d/navigation_mesh_source_geometry_data_3d.cpp",0x9e,
                     "Condition \"mesh_vertices.is_empty()\" is true.",0,0);
  }
  else {
    Array::operator[]((int)param_1);
    Variant::operator_cast_to_Vector(local_58);
    piVar14 = local_50[0];
    if (local_50[0] == (int *)0x0) {
      _err_print_error("_add_mesh_array",
                       "scene/resources/3d/navigation_mesh_source_geometry_data_3d.cpp",0xa2,
                       "Condition \"mesh_indices.is_empty()\" is true.",0,0);
      CowData<int>::_unref((CowData<int> *)local_50);
    }
    else {
      if (*(long *)(this + 0x280) == 0) {
        iVar15 = 0;
      }
      else {
        iVar15 = (int)(*(long *)(*(long *)(this + 0x280) + -8) / 3);
      }
      local_70 = (int)(*(long *)(local_50[0] + -2) / 3);
      if (local_60 == (float *)0x0) {
        if (0 < local_70) goto LAB_00103bd8;
      }
      else {
        lVar19 = 0;
        this_00 = (Vector<float> *)(this + 0x278);
        do {
          if (*(long *)(local_60 + -2) <= lVar19) break;
          fVar3 = *pfVar18;
          fVar4 = pfVar18[1];
          lVar19 = lVar19 + 1;
          fVar5 = *(float *)(param_2 + 0x18);
          fVar6 = *(float *)(param_2 + 0x1c);
          fVar7 = pfVar18[2];
          fVar8 = *(float *)(param_2 + 0xc);
          fVar9 = *(float *)(param_2 + 0x28);
          fVar10 = *(float *)(param_2 + 0x20);
          fVar11 = *(float *)(param_2 + 0x10);
          fVar12 = *(float *)(param_2 + 0x2c);
          fVar13 = *(float *)(param_2 + 0x14);
          Vector<float>::push_back
                    (this_00,fVar7 * *(float *)(param_2 + 8) +
                             fVar3 * *(float *)param_2 + fVar4 * *(float *)(param_2 + 4) +
                             *(float *)(param_2 + 0x24));
          Vector<float>::push_back(this_00,fVar9 + fVar8 * fVar3 + fVar11 * fVar4 + fVar13 * fVar7);
          Vector<float>::push_back(this_00,fVar5 * fVar3 + fVar6 * fVar4 + fVar10 * fVar7 + fVar12);
          pfVar18 = pfVar18 + 3;
        } while (local_60 != (float *)0x0);
        if (0 < local_70) {
LAB_00103bd8:
          this_01 = (Vector<int> *)(this + 0x288);
          piVar16 = piVar14;
          do {
            piVar17 = piVar16 + 3;
            Vector<int>::push_back(this_01,*piVar16 + iVar15);
            Vector<int>::push_back(this_01,piVar16[2] + iVar15);
            Vector<int>::push_back(this_01,piVar16[1] + iVar15);
            piVar16 = piVar17;
          } while (piVar14 + (ulong)(local_70 - 1) * 3 + 3 != piVar17);
        }
        if (local_50[0] == (int *)0x0) goto LAB_00103c39;
      }
      piVar14 = local_50[0];
      LOCK();
      plVar1 = (long *)(local_50[0] + -4);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50[0] = (int *)0x0;
        Memory::free_static(piVar14 + -4,false);
      }
    }
  }
LAB_00103c39:
  pfVar18 = local_60;
  if (local_60 != (float *)0x0) {
    LOCK();
    pfVar2 = local_60 + -4;
    *(long *)pfVar2 = *(long *)pfVar2 + -1;
    UNLOCK();
    if (*(long *)pfVar2 == 0) {
      local_60 = (float *)0x0;
      Memory::free_static(pfVar18 + -4,false);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00103d7c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationMeshSourceGeometryData3D::add_mesh_array(Array const&, Transform3D const&) */

void NavigationMeshSourceGeometryData3D::add_mesh_array(Array *param_1,Transform3D *param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  Transform3D aTStack_68 [56];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = Array::size();
  if (iVar1 == 0xd) {
    iVar1 = pthread_rwlock_wrlock((pthread_rwlock_t *)(param_1 + 0x240));
    if (iVar1 == 0x23) {
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(0x23);
    }
    Transform3D::operator*(aTStack_68,(Transform3D *)(param_1 + 0x2c8));
    _add_mesh_array((NavigationMeshSourceGeometryData3D *)param_1,(Array *)param_2,aTStack_68);
    param_1[0x2b0] = (Array)0x1;
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      pthread_rwlock_unlock((pthread_rwlock_t *)(param_1 + 0x240));
      return;
    }
  }
  else if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    _err_print_error("add_mesh_array",
                     "scene/resources/3d/navigation_mesh_source_geometry_data_3d.cpp",0xd4,
                     "Condition \"p_mesh_array.size() != Mesh::ARRAY_MAX\" is true.",0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationMeshSourceGeometryData3D::_add_mesh(Ref<Mesh> const&, Transform3D const&) */

void __thiscall
NavigationMeshSourceGeometryData3D::_add_mesh
          (NavigationMeshSourceGeometryData3D *this,Ref *param_1,Transform3D *param_2)

{
  Vector<float> *pVVar1;
  Vector<int> *pVVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  long *plVar14;
  char cVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  ulong uVar19;
  long lVar20;
  float *pfVar21;
  int *piVar22;
  long in_FS_OFFSET;
  int local_ac;
  Array local_70 [8];
  Variant local_68 [8];
  float *local_60;
  Variant local_58 [8];
  int *local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_ac = 0;
  do {
    iVar16 = (**(code **)(**(long **)param_1 + 0x1c8))();
    if (iVar16 <= local_ac) {
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    if (*(long *)(this + 0x280) == 0) {
      iVar16 = 0;
    }
    else {
      iVar16 = (int)(*(long *)(*(long *)(this + 0x280) + -8) / 3);
    }
    iVar17 = (**(code **)(**(long **)param_1 + 0x200))(*(long **)param_1,local_ac);
    if (iVar17 == 3) {
      uVar19 = (**(code **)(**(long **)param_1 + 0x1f8))(*(long **)param_1,local_ac);
      plVar14 = *(long **)param_1;
      if ((uVar19 & 0x1000) == 0) {
        iVar17 = (**(code **)(*plVar14 + 0x1d0))(plVar14,local_ac);
      }
      else {
        iVar17 = (**(code **)(*plVar14 + 0x1d8))(plVar14,local_ac);
      }
      if ((iVar17 == 0) || (lVar20 = (long)iVar17, iVar17 % 3 != 0)) {
        _err_print_error("_add_mesh",
                         "scene/resources/3d/navigation_mesh_source_geometry_data_3d.cpp",0x70,
                         "Condition \"(index_count == 0 || (index_count % 3) != 0)\" is true. Continuing."
                         ,0,0);
      }
      else {
        (**(code **)(**(long **)param_1 + 0x1e0))(local_70,*(long **)param_1,local_ac);
        cVar15 = Array::is_empty();
        if ((cVar15 == '\0') && (iVar18 = Array::size(), iVar18 == 0xd)) {
          iVar18 = (int)local_70;
          Array::operator[](iVar18);
          Variant::operator_cast_to_Vector(local_68);
          pfVar21 = local_60;
          if (local_60 == (float *)0x0) {
            _err_print_error("_add_mesh",
                             "scene/resources/3d/navigation_mesh_source_geometry_data_3d.cpp",0x78,
                             "Condition \"mesh_vertices.is_empty()\" is true. Continuing.",0,0);
LAB_001045f5:
            if (local_60 == (float *)0x0) goto LAB_0010430c;
            LOCK();
            pfVar21 = local_60 + -4;
            *(long *)pfVar21 = *(long *)pfVar21 + -1;
            lVar20 = *(long *)pfVar21;
            UNLOCK();
            pfVar21 = local_60;
          }
          else {
            uVar19 = (**(code **)(**(long **)param_1 + 0x1f8))(*(long **)param_1,local_ac);
            if ((uVar19 & 0x1000) == 0) {
              if ((local_60 == (float *)0x0) || (lVar20 != *(long *)(local_60 + -2))) {
                _err_print_error("_add_mesh",
                                 "scene/resources/3d/navigation_mesh_source_geometry_data_3d.cpp",
                                 0x8b,
                                 "Condition \"mesh_vertices.size() != index_count\" is true. Continuing."
                                 ,0,0);
                goto LAB_001045f5;
              }
              if (2 < lVar20) {
                iVar17 = (iVar17 / 3) * 3 + iVar16;
                pVVar1 = (Vector<float> *)(this + 0x278);
                pVVar2 = (Vector<int> *)(this + 0x288);
                do {
                  fVar3 = *pfVar21;
                  fVar4 = pfVar21[1];
                  fVar5 = *(float *)(param_2 + 0x18);
                  fVar6 = *(float *)(param_2 + 0x1c);
                  fVar7 = pfVar21[2];
                  fVar8 = *(float *)(param_2 + 0xc);
                  fVar9 = *(float *)(param_2 + 0x20);
                  fVar10 = *(float *)(param_2 + 0x10);
                  fVar11 = *(float *)(param_2 + 0x2c);
                  fVar12 = *(float *)(param_2 + 0x14);
                  fVar13 = *(float *)(param_2 + 0x28);
                  Vector<float>::push_back
                            (pVVar1,fVar3 * *(float *)param_2 + fVar4 * *(float *)(param_2 + 4) +
                                    fVar7 * *(float *)(param_2 + 8) + *(float *)(param_2 + 0x24));
                  Vector<float>::push_back
                            (pVVar1,fVar8 * fVar3 + fVar10 * fVar4 + fVar12 * fVar7 + fVar13);
                  Vector<float>::push_back
                            (pVVar1,fVar5 * fVar3 + fVar6 * fVar4 + fVar9 * fVar7 + fVar11);
                  fVar3 = pfVar21[6];
                  fVar4 = pfVar21[7];
                  fVar5 = *(float *)(param_2 + 0x18);
                  fVar6 = *(float *)(param_2 + 0x1c);
                  fVar7 = pfVar21[8];
                  fVar8 = *(float *)(param_2 + 0xc);
                  fVar9 = *(float *)(param_2 + 0x20);
                  fVar10 = *(float *)(param_2 + 0x10);
                  fVar11 = *(float *)(param_2 + 0x2c);
                  fVar12 = *(float *)(param_2 + 0x14);
                  fVar13 = *(float *)(param_2 + 0x28);
                  Vector<float>::push_back
                            (pVVar1,fVar3 * *(float *)param_2 + fVar4 * *(float *)(param_2 + 4) +
                                    fVar7 * *(float *)(param_2 + 8) + *(float *)(param_2 + 0x24));
                  Vector<float>::push_back
                            (pVVar1,fVar8 * fVar3 + fVar10 * fVar4 + fVar12 * fVar7 + fVar13);
                  Vector<float>::push_back
                            (pVVar1,fVar5 * fVar3 + fVar6 * fVar4 + fVar9 * fVar7 + fVar11);
                  fVar3 = pfVar21[3];
                  fVar4 = pfVar21[4];
                  fVar5 = *(float *)(param_2 + 0x18);
                  fVar6 = *(float *)(param_2 + 0x1c);
                  fVar7 = pfVar21[5];
                  fVar8 = *(float *)(param_2 + 0xc);
                  fVar9 = *(float *)(param_2 + 0x20);
                  fVar10 = *(float *)(param_2 + 0x10);
                  fVar11 = *(float *)(param_2 + 0x2c);
                  fVar12 = *(float *)(param_2 + 0x14);
                  fVar13 = *(float *)(param_2 + 0x28);
                  Vector<float>::push_back
                            (pVVar1,fVar3 * *(float *)param_2 + fVar4 * *(float *)(param_2 + 4) +
                                    fVar7 * *(float *)(param_2 + 8) + *(float *)(param_2 + 0x24));
                  Vector<float>::push_back
                            (pVVar1,fVar8 * fVar3 + fVar10 * fVar4 + fVar12 * fVar7 + fVar13);
                  Vector<float>::push_back
                            (pVVar1,fVar5 * fVar3 + fVar6 * fVar4 + fVar9 * fVar7 + fVar11);
                  Vector<int>::push_back(pVVar2,iVar16);
                  Vector<int>::push_back(pVVar2,iVar16 + 1);
                  iVar18 = iVar16 + 2;
                  iVar16 = iVar16 + 3;
                  Vector<int>::push_back(pVVar2,iVar18);
                  pfVar21 = pfVar21 + 9;
                } while (iVar17 != iVar16);
                goto LAB_001042e1;
              }
            }
            else {
              Array::operator[](iVar18);
              Variant::operator_cast_to_Vector(local_58);
              piVar22 = local_50[0];
              if ((local_50[0] == (int *)0x0) || (lVar20 != *(long *)(local_50[0] + -2))) {
                _err_print_error("_add_mesh",
                                 "scene/resources/3d/navigation_mesh_source_geometry_data_3d.cpp",
                                 0x7d,
                                 "Condition \"mesh_indices.is_empty() || (mesh_indices.size() != index_count)\" is true. Continuing."
                                 ,0,0);
                CowData<int>::_unref((CowData<int> *)local_50);
                goto LAB_001045f5;
              }
              if (local_60 == (float *)0x0) {
                if (2 < iVar17) goto LAB_001044eb;
              }
              else {
                lVar20 = 0;
                pVVar1 = (Vector<float> *)(this + 0x278);
                do {
                  if (*(long *)(local_60 + -2) <= lVar20) break;
                  fVar3 = *pfVar21;
                  fVar4 = pfVar21[1];
                  lVar20 = lVar20 + 1;
                  fVar5 = *(float *)(param_2 + 0x18);
                  fVar6 = *(float *)(param_2 + 0x1c);
                  fVar7 = pfVar21[2];
                  fVar8 = *(float *)(param_2 + 0xc);
                  fVar9 = *(float *)(param_2 + 0x20);
                  fVar10 = *(float *)(param_2 + 0x10);
                  fVar11 = *(float *)(param_2 + 0x2c);
                  fVar12 = *(float *)(param_2 + 0x14);
                  fVar13 = *(float *)(param_2 + 0x28);
                  Vector<float>::push_back
                            (pVVar1,fVar3 * *(float *)param_2 + fVar4 * *(float *)(param_2 + 4) +
                                    fVar7 * *(float *)(param_2 + 8) + *(float *)(param_2 + 0x24));
                  Vector<float>::push_back
                            (pVVar1,fVar8 * fVar3 + fVar10 * fVar4 + fVar12 * fVar7 + fVar13);
                  Vector<float>::push_back
                            (pVVar1,fVar5 * fVar3 + fVar6 * fVar4 + fVar9 * fVar7 + fVar11);
                  pfVar21 = pfVar21 + 3;
                } while (local_60 != (float *)0x0);
                if (2 < iVar17) {
LAB_001044eb:
                  pVVar2 = (Vector<int> *)(this + 0x288);
                  iVar18 = 0;
                  do {
                    iVar18 = iVar18 + 1;
                    Vector<int>::push_back(pVVar2,*piVar22 + iVar16);
                    Vector<int>::push_back(pVVar2,piVar22[2] + iVar16);
                    Vector<int>::push_back(pVVar2,piVar22[1] + iVar16);
                    piVar22 = piVar22 + 3;
                  } while (iVar18 < iVar17 / 3);
                }
                if (local_50[0] == (int *)0x0) goto LAB_001042e1;
              }
              piVar22 = local_50[0];
              LOCK();
              plVar14 = (long *)(local_50[0] + -4);
              *plVar14 = *plVar14 + -1;
              UNLOCK();
              if (*plVar14 == 0) {
                local_50[0] = (int *)0x0;
                Memory::free_static(piVar22 + -4,false);
              }
LAB_001042e1:
              if (local_60 == (float *)0x0) goto LAB_0010430c;
            }
            LOCK();
            pfVar21 = local_60 + -4;
            *(long *)pfVar21 = *(long *)pfVar21 + -1;
            lVar20 = *(long *)pfVar21;
            UNLOCK();
            pfVar21 = local_60;
          }
          local_60 = pfVar21;
          if (lVar20 == 0) {
            local_60 = (float *)0x0;
            Memory::free_static(pfVar21 + -4,false);
          }
        }
        else {
          _err_print_error("_add_mesh",
                           "scene/resources/3d/navigation_mesh_source_geometry_data_3d.cpp",0x75,
                           "Condition \"a.is_empty() || (a.size() != Mesh::ARRAY_MAX)\" is true. Continuing."
                           ,0,0);
        }
LAB_0010430c:
        Array::~Array(local_70);
      }
    }
    local_ac = local_ac + 1;
  } while( true );
}



/* NavigationMeshSourceGeometryData3D::add_mesh(Ref<Mesh> const&, Transform3D const&) */

void NavigationMeshSourceGeometryData3D::add_mesh(Ref *param_1,Transform3D *param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  Transform3D aTStack_68 [56];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)param_2 == 0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("add_mesh","scene/resources/3d/navigation_mesh_source_geometry_data_3d.cpp",
                       0xc6,"Condition \"p_mesh.is_null()\" is true.",0,0);
      return;
    }
  }
  else {
    lVar1 = Engine::get_singleton();
    if ((*(char *)(lVar1 + 0xc0) == '\0') &&
       (add_mesh(Ref<Mesh>const&,Transform3D_const&)::first_print != '\0')) {
      _err_print_error("add_mesh","scene/resources/3d/navigation_mesh_source_geometry_data_3d.cpp",
                       0xca,
                       "Source geometry parsing for navigation mesh baking had to parse RenderingServer meshes at runtime.\n\t\tThis poses a significant performance issues as visual meshes store geometry data on the GPU and transferring this data back to the CPU blocks the rendering.\n\t\tFor runtime (re)baking navigation meshes use and parse collision shapes as source geometry or create geometry data procedurally in scripts."
                       ,0,1);
      add_mesh(Ref<Mesh>const&,Transform3D_const&)::first_print = '\0';
    }
    Transform3D::operator*(aTStack_68,(Transform3D *)(param_1 + 0x2c8));
    _add_mesh((NavigationMeshSourceGeometryData3D *)param_1,(Ref *)param_2,aTStack_68);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationMeshSourceGeometryData3D::_add_faces(Vector<Vector3> const&, Transform3D const&) */

ulong __thiscall
NavigationMeshSourceGeometryData3D::_add_faces
          (NavigationMeshSourceGeometryData3D *this,Vector *param_1,Transform3D *param_2)

{
  Vector<float> *this_00;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  long lVar12;
  code *pcVar13;
  uint uVar14;
  ulong uVar15;
  float *pfVar16;
  Vector<int> *this_01;
  long lVar17;
  char *pcVar18;
  undefined8 uVar19;
  uint uVar20;
  int iVar21;
  long lVar22;
  long lVar23;
  long local_40;
  
  lVar12 = *(long *)(param_1 + 8);
  if (lVar12 == 0) {
    uVar19 = 0xb5;
    pcVar18 = "Condition \"p_faces.is_empty()\" is true.";
  }
  else {
    if (*(long *)(lVar12 + -8) % 3 == 0) {
      if (*(long *)(this + 0x280) == 0) {
        uVar20 = 0;
        uVar15 = 0;
      }
      else {
        lVar23 = *(long *)(*(long *)(this + 0x280) + -8);
        uVar15 = lVar23 * 0x5555555555555556;
        uVar20 = (uint)(lVar23 / 3);
      }
      iVar21 = (int)(*(long *)(lVar12 + -8) / 3);
      if (iVar21 < 1) {
        return uVar15;
      }
      lVar23 = 0x18;
      lVar22 = 0;
      uVar14 = iVar21 * 3 + uVar20;
      this_00 = (Vector<float> *)(this + 0x278);
      while ((lVar17 = lVar22, local_40 = 0, lVar12 != 0 &&
             (local_40 = *(long *)(lVar12 + -8), lVar22 < *(long *)(lVar12 + -8)))) {
        pfVar16 = (float *)(lVar12 + -0x18 + lVar23);
        fVar1 = *(float *)(param_2 + 0x18);
        fVar2 = *(float *)(param_2 + 0x1c);
        fVar3 = *pfVar16;
        fVar4 = pfVar16[1];
        fVar5 = pfVar16[2];
        fVar6 = *(float *)(param_2 + 0xc);
        fVar7 = *(float *)(param_2 + 0x28);
        fVar8 = *(float *)(param_2 + 0x20);
        fVar9 = *(float *)(param_2 + 0x10);
        fVar10 = *(float *)(param_2 + 0x2c);
        fVar11 = *(float *)(param_2 + 0x14);
        Vector<float>::push_back
                  (this_00,fVar5 * *(float *)(param_2 + 8) +
                           fVar3 * *(float *)param_2 + fVar4 * *(float *)(param_2 + 4) +
                           *(float *)(param_2 + 0x24));
        Vector<float>::push_back(this_00,fVar7 + fVar6 * fVar3 + fVar9 * fVar4 + fVar11 * fVar5);
        Vector<float>::push_back(this_00,fVar1 * fVar3 + fVar2 * fVar4 + fVar8 * fVar5 + fVar10);
        lVar12 = *(long *)(param_1 + 8);
        lVar17 = lVar22 + 1;
        local_40 = 0;
        if ((lVar12 == 0) || (local_40 = *(long *)(lVar12 + -8), local_40 <= lVar17)) break;
        pfVar16 = (float *)(lVar12 + -0xc + lVar23);
        fVar1 = *(float *)(param_2 + 0x18);
        fVar2 = *(float *)(param_2 + 0x1c);
        fVar3 = *pfVar16;
        fVar4 = pfVar16[1];
        fVar5 = pfVar16[2];
        fVar6 = *(float *)(param_2 + 0xc);
        fVar7 = *(float *)(param_2 + 0x20);
        fVar8 = *(float *)(param_2 + 0x10);
        fVar9 = *(float *)(param_2 + 0x2c);
        fVar10 = *(float *)(param_2 + 0x28);
        fVar11 = *(float *)(param_2 + 0x14);
        Vector<float>::push_back
                  (this_00,fVar5 * *(float *)(param_2 + 8) +
                           fVar3 * *(float *)param_2 + fVar4 * *(float *)(param_2 + 4) +
                           *(float *)(param_2 + 0x24));
        Vector<float>::push_back(this_00,fVar10 + fVar6 * fVar3 + fVar8 * fVar4 + fVar11 * fVar5);
        Vector<float>::push_back(this_00,fVar1 * fVar3 + fVar2 * fVar4 + fVar7 * fVar5 + fVar9);
        lVar12 = *(long *)(param_1 + 8);
        lVar17 = lVar22 + 2;
        local_40 = 0;
        if ((lVar12 == 0) || (local_40 = *(long *)(lVar12 + -8), local_40 <= lVar17)) break;
        pfVar16 = (float *)(lVar12 + lVar23);
        fVar1 = *(float *)(param_2 + 0x18);
        lVar22 = lVar22 + 3;
        fVar2 = *pfVar16;
        fVar3 = pfVar16[1];
        lVar23 = lVar23 + 0x24;
        fVar4 = *(float *)(param_2 + 0x1c);
        fVar5 = pfVar16[2];
        fVar6 = *(float *)(param_2 + 0xc);
        fVar7 = *(float *)(param_2 + 0x28);
        fVar8 = *(float *)(param_2 + 0x20);
        fVar9 = *(float *)(param_2 + 0x10);
        fVar10 = *(float *)(param_2 + 0x2c);
        fVar11 = *(float *)(param_2 + 0x14);
        Vector<float>::push_back
                  (this_00,fVar5 * *(float *)(param_2 + 8) +
                           fVar2 * *(float *)param_2 + fVar3 * *(float *)(param_2 + 4) +
                           *(float *)(param_2 + 0x24));
        Vector<float>::push_back(this_00,fVar7 + fVar6 * fVar2 + fVar9 * fVar3 + fVar11 * fVar5);
        Vector<float>::push_back(this_00,fVar1 * fVar2 + fVar4 * fVar3 + fVar8 * fVar5 + fVar10);
        this_01 = (Vector<int> *)(this + 0x288);
        Vector<int>::push_back(this_01,uVar20);
        Vector<int>::push_back(this_01,uVar20 + 2);
        iVar21 = uVar20 + 1;
        uVar20 = uVar20 + 3;
        Vector<int>::push_back(this_01,iVar21);
        if (uVar20 == uVar14) {
          return (ulong)uVar14;
        }
        lVar12 = *(long *)(param_1 + 8);
      }
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar17,local_40,"p_index","size()","",false
                 ,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar13 = (code *)invalidInstructionException();
      (*pcVar13)();
    }
    uVar19 = 0xb6;
    pcVar18 = "Condition \"p_faces.size() % 3 != 0\" is true.";
  }
  uVar15 = _err_print_error("_add_faces",
                            "scene/resources/3d/navigation_mesh_source_geometry_data_3d.cpp",uVar19,
                            pcVar18,0,0);
  return uVar15;
}



/* NavigationMeshSourceGeometryData3D::add_faces(Vector<Vector3> const&, Transform3D const&) */

void NavigationMeshSourceGeometryData3D::add_faces(Vector *param_1,Transform3D *param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  Transform3D aTStack_68 [56];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(param_2 + 8) == 0) ||
     (*(long *)(*(long *)(param_2 + 8) + -8) * -0x5555555555555555 + 0x2aaaaaaaaaaaaaaaU <
      0x5555555555555555)) {
    iVar1 = pthread_rwlock_wrlock((pthread_rwlock_t *)(param_1 + 0x240));
    if (iVar1 == 0x23) {
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(0x23);
    }
    Transform3D::operator*(aTStack_68,(Transform3D *)(param_1 + 0x2c8));
    _add_faces((NavigationMeshSourceGeometryData3D *)param_1,(Vector *)param_2,aTStack_68);
    param_1[0x2b0] = (Vector)0x1;
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      pthread_rwlock_unlock((pthread_rwlock_t *)(param_1 + 0x240));
      return;
    }
  }
  else if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    _err_print_error("add_faces","scene/resources/3d/navigation_mesh_source_geometry_data_3d.cpp",
                     0xdb,"Condition \"p_faces.size() % 3 != 0\" is true.",0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationMeshSourceGeometryData3D::merge(Ref<NavigationMeshSourceGeometryData3D> const&) */

void __thiscall
NavigationMeshSourceGeometryData3D::merge(NavigationMeshSourceGeometryData3D *this,Ref *param_1)

{
  long *plVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  bool bVar8;
  Vector local_88 [8];
  long local_80;
  Vector local_78 [8];
  long local_70;
  Vector local_68 [8];
  long local_60;
  undefined1 local_58 [8];
  long local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(NavigationMeshSourceGeometryData3D **)param_1 == (NavigationMeshSourceGeometryData3D *)0x0)
  {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("merge","scene/resources/3d/navigation_mesh_source_geometry_data_3d.cpp",0xe2
                       ,"Condition \"p_other_geometry.is_null()\" is true.",0,0);
      return;
    }
  }
  else {
    local_80 = 0;
    local_70 = 0;
    local_60 = 0;
    get_data(*(NavigationMeshSourceGeometryData3D **)param_1,local_88,local_78,local_68);
    iVar3 = pthread_rwlock_wrlock((pthread_rwlock_t *)(this + 0x240));
    if (iVar3 == 0x23) {
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(0x23);
    }
    if (*(long *)(this + 0x280) == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = *(long *)(*(long *)(this + 0x280) + -8);
    }
    if (*(long *)(this + 0x290) == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = *(long *)(*(long *)(this + 0x290) + -8);
    }
    local_50[0] = 0;
    plVar1 = (long *)(local_80 + -0x10);
    if (local_80 == 0) {
      Vector<float>::append_array((Vector<float> *)(this + 0x278),local_58);
    }
    else {
      do {
        lVar5 = *plVar1;
        if (lVar5 == 0) goto LAB_00104e42;
        LOCK();
        lVar4 = *plVar1;
        bVar8 = lVar5 == lVar4;
        if (bVar8) {
          *plVar1 = lVar5 + 1;
          lVar4 = lVar5;
        }
        UNLOCK();
      } while (!bVar8);
      if (lVar4 != -1) {
        local_50[0] = local_80;
      }
LAB_00104e42:
      lVar5 = local_50[0];
      Vector<float>::append_array((Vector<float> *)(this + 0x278));
      if (lVar5 != 0) {
        LOCK();
        plVar1 = (long *)(lVar5 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_50[0] + -0x10),false);
        }
      }
    }
    local_50[0] = 0;
    plVar1 = (long *)(local_70 + -0x10);
    if (local_70 == 0) {
      Vector<int>::append_array((Vector<int> *)(this + 0x288),local_58);
    }
    else {
      do {
        lVar5 = *plVar1;
        if (lVar5 == 0) goto LAB_00104eba;
        LOCK();
        lVar4 = *plVar1;
        bVar8 = lVar5 == lVar4;
        if (bVar8) {
          *plVar1 = lVar5 + 1;
          lVar4 = lVar5;
        }
        UNLOCK();
      } while (!bVar8);
      if (lVar4 != -1) {
        local_50[0] = local_70;
      }
LAB_00104eba:
      lVar5 = local_50[0];
      Vector<int>::append_array((Vector<int> *)(this + 0x288));
      if (lVar5 != 0) {
        LOCK();
        plVar1 = (long *)(lVar5 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_50[0] + -0x10),false);
        }
      }
    }
    lVar5 = *(long *)(this + 0x290);
    if (lVar5 == 0) {
      if (lVar6 < 0) {
        lVar4 = 0;
LAB_0010500c:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar6,lVar4,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    else {
      lVar4 = *(long *)(lVar5 + -8);
      if (lVar6 < lVar4) {
        if (lVar6 < 0) goto LAB_0010500c;
        do {
          iVar3 = *(int *)(lVar5 + lVar6 * 4);
          CowData<int>::_copy_on_write((CowData<int> *)(this + 0x290));
          lVar5 = *(long *)(this + 0x290);
          *(int *)(lVar5 + lVar6 * 4) = iVar3 + (int)(lVar7 / 3);
          lVar6 = lVar6 + 1;
          if (lVar5 == 0) break;
        } while (lVar6 < *(long *)(lVar5 + -8));
      }
    }
    local_50[0] = 0;
    if (local_60 != 0) {
      CowData<NavigationMeshSourceGeometryData3D::ProjectedObstruction>::_ref
                ((CowData<NavigationMeshSourceGeometryData3D::ProjectedObstruction> *)local_50,
                 (CowData *)&local_60);
    }
    Vector<NavigationMeshSourceGeometryData3D::ProjectedObstruction>::append_array
              ((Vector<NavigationMeshSourceGeometryData3D::ProjectedObstruction> *)(this + 0x2b8));
    CowData<NavigationMeshSourceGeometryData3D::ProjectedObstruction>::_unref
              ((CowData<NavigationMeshSourceGeometryData3D::ProjectedObstruction> *)local_50);
    this[0x2b0] = (NavigationMeshSourceGeometryData3D)0x1;
    pthread_rwlock_unlock((pthread_rwlock_t *)(this + 0x240));
    CowData<NavigationMeshSourceGeometryData3D::ProjectedObstruction>::_unref
              ((CowData<NavigationMeshSourceGeometryData3D::ProjectedObstruction> *)&local_60);
    if (local_70 != 0) {
      LOCK();
      plVar1 = (long *)(local_70 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_70 + -0x10),false);
      }
    }
    CowData<float>::_unref((CowData<float> *)&local_80);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Vector<NavigationMeshSourceGeometryData3D::ProjectedObstruction>::push_back(NavigationMeshSourceGeometryData3D::ProjectedObstruction)
   [clone .isra.0] */

void __thiscall
Vector<NavigationMeshSourceGeometryData3D::ProjectedObstruction>::push_back
          (Vector<NavigationMeshSourceGeometryData3D::ProjectedObstruction> *this,long param_2)

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
  iVar1 = CowData<NavigationMeshSourceGeometryData3D::ProjectedObstruction>::resize<false>
                    ((CowData<NavigationMeshSourceGeometryData3D::ProjectedObstruction> *)(this + 8)
                     ,lVar3);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar2 = -1;
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(*(long *)(this + 8) + -8);
      lVar2 = lVar3 + -1;
      if (-1 < lVar2) {
        CowData<NavigationMeshSourceGeometryData3D::ProjectedObstruction>::_copy_on_write
                  ((CowData<NavigationMeshSourceGeometryData3D::ProjectedObstruction> *)(this + 8));
        lVar3 = lVar2 * 0x20 + *(long *)(this + 8);
        if (*(long *)(lVar3 + 8) != *(long *)(param_2 + 8)) {
          CowData<float>::_ref((CowData<float> *)(lVar3 + 8),(CowData *)(param_2 + 8));
        }
        *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(param_2 + 0x10);
        *(undefined1 *)(lVar3 + 0x18) = *(undefined1 *)(param_2 + 0x18);
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



/* NavigationMeshSourceGeometryData3D::set_projected_obstructions(Array const&) */

void __thiscall
NavigationMeshSourceGeometryData3D::set_projected_obstructions
          (NavigationMeshSourceGeometryData3D *this,Array *param_1)

{
  long *plVar1;
  pthread_rwlock_t *__rwlock;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  Variant *pVVar8;
  long lVar9;
  int iVar10;
  long in_FS_OFFSET;
  float fVar11;
  Variant local_a0 [16];
  long local_90;
  float local_88;
  float local_84;
  undefined1 local_80;
  Variant local_78 [8];
  long local_70;
  undefined8 local_68;
  undefined1 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  __rwlock = (pthread_rwlock_t *)(this + 0x240);
  iVar6 = pthread_rwlock_wrlock(__rwlock);
  if (iVar6 == 0x23) {
LAB_001058d5:
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(0x23);
  }
  if ((*(long *)(this + 0x2c0) != 0) && (*(long *)(*(long *)(this + 0x2c0) + -8) != 0)) {
    CowData<NavigationMeshSourceGeometryData3D::ProjectedObstruction>::_unref
              ((CowData<NavigationMeshSourceGeometryData3D::ProjectedObstruction> *)(this + 0x2c0));
  }
  iVar10 = 0;
  this[0x2b0] = (NavigationMeshSourceGeometryData3D)0x1;
  pthread_rwlock_unlock(__rwlock);
  iVar6 = Array::size();
  if (0 < iVar6) {
    do {
      Array::operator[]((int)param_1);
      Variant::operator_cast_to_Dictionary(local_a0);
      Variant::Variant((Variant *)local_58,"version");
      cVar4 = Dictionary::has(local_a0);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (cVar4 == '\0') {
        _err_print_error("set_projected_obstructions",
                         "scene/resources/3d/navigation_mesh_source_geometry_data_3d.cpp",0x116,
                         "Condition \"!data.has(\"version\")\" is true.",0,0);
LAB_0010574d:
        Dictionary::~Dictionary((Dictionary *)local_a0);
        break;
      }
      Variant::Variant((Variant *)local_58,"version");
      pVVar8 = (Variant *)Dictionary::operator[](local_a0);
      uVar7 = Variant::operator_cast_to_unsigned_int(pVVar8);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (uVar7 == 1) {
        Variant::Variant((Variant *)local_58,"vertices");
        cVar4 = Dictionary::has(local_a0);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (cVar4 == '\0') {
          _err_print_error("set_projected_obstructions",
                           "scene/resources/3d/navigation_mesh_source_geometry_data_3d.cpp",0x11b,
                           "Condition \"!data.has(\"vertices\")\" is true.",0,0);
        }
        else {
          Variant::Variant((Variant *)local_58,"elevation");
          cVar4 = Dictionary::has(local_a0);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (cVar4 == '\0') {
            _err_print_error("set_projected_obstructions",
                             "scene/resources/3d/navigation_mesh_source_geometry_data_3d.cpp",0x11c,
                             "Condition \"!data.has(\"elevation\")\" is true.",0,0);
          }
          else {
            Variant::Variant((Variant *)local_58,"height");
            cVar4 = Dictionary::has(local_a0);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            if (cVar4 == '\0') {
              _err_print_error("set_projected_obstructions",
                               "scene/resources/3d/navigation_mesh_source_geometry_data_3d.cpp",
                               0x11d,"Condition \"!data.has(\"height\")\" is true.",0,0);
            }
            else {
              Variant::Variant((Variant *)local_58,"carve");
              cVar4 = Dictionary::has(local_a0);
              if (Variant::needs_deinit[local_58[0]] != '\0') {
                Variant::_clear_internal();
              }
              if (cVar4 != '\0') goto LAB_0010539a;
              _err_print_error("set_projected_obstructions",
                               "scene/resources/3d/navigation_mesh_source_geometry_data_3d.cpp",
                               0x11e,"Condition \"!data.has(\"carve\")\" is true.",0,0);
            }
          }
        }
        goto LAB_0010574d;
      }
LAB_0010539a:
      local_90 = 0;
      Variant::Variant((Variant *)local_58,"vertices");
      Dictionary::operator[](local_a0);
      Variant::operator_cast_to_Vector(local_78);
      if (local_70 != 0) {
        local_90 = local_70;
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_58,"elevation");
      pVVar8 = (Variant *)Dictionary::operator[](local_a0);
      fVar11 = Variant::operator_cast_to_float(pVVar8);
      local_88 = fVar11;
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_58,"height");
      pVVar8 = (Variant *)Dictionary::operator[](local_a0);
      local_84 = Variant::operator_cast_to_float(pVVar8);
      uVar2 = CONCAT44(local_84,fVar11);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_58,"carve");
      pVVar8 = (Variant *)Dictionary::operator[](local_a0);
      bVar5 = Variant::operator_cast_to_bool(pVVar8);
      local_80 = bVar5;
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      iVar6 = pthread_rwlock_wrlock(__rwlock);
      lVar9 = local_90;
      if (iVar6 == 0x23) goto LAB_001058d5;
      local_70 = 0;
      if (local_90 == 0) {
        local_68 = uVar2;
        local_60 = bVar5;
        Vector<NavigationMeshSourceGeometryData3D::ProjectedObstruction>::push_back
                  ((Vector<NavigationMeshSourceGeometryData3D::ProjectedObstruction> *)
                   (this + 0x2b8),local_78);
        this[0x2b0] = (NavigationMeshSourceGeometryData3D)0x1;
        pthread_rwlock_unlock(__rwlock);
      }
      else {
        CowData<float>::_ref((CowData<float> *)&local_70,(CowData *)&local_90);
        lVar3 = local_70;
        local_68 = uVar2;
        local_60 = bVar5;
        Vector<NavigationMeshSourceGeometryData3D::ProjectedObstruction>::push_back
                  ((Vector<NavigationMeshSourceGeometryData3D::ProjectedObstruction> *)
                   (this + 0x2b8));
        if (lVar3 == 0) {
          this[0x2b0] = (NavigationMeshSourceGeometryData3D)0x1;
          pthread_rwlock_unlock(__rwlock);
        }
        else {
          LOCK();
          plVar1 = (long *)(lVar3 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_70 + -0x10),false);
          }
          lVar9 = local_90;
          this[0x2b0] = (NavigationMeshSourceGeometryData3D)0x1;
          pthread_rwlock_unlock(__rwlock);
          if (lVar9 == 0) goto LAB_00105581;
        }
        LOCK();
        plVar1 = (long *)(lVar9 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_90 + -0x10),false);
        }
      }
LAB_00105581:
      iVar10 = iVar10 + 1;
      Dictionary::~Dictionary((Dictionary *)local_a0);
      iVar6 = Array::size();
    } while (iVar10 < iVar6);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationMeshSourceGeometryData3D::_set(StringName const&, Variant const&) */

ulong NavigationMeshSourceGeometryData3D::_set(StringName *param_1,Variant *param_2)

{
  ulong uVar1;
  long in_FS_OFFSET;
  Variant local_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = StringName::operator==((StringName *)param_2,"projected_obstructions");
  if ((char)uVar1 != '\0') {
    Variant::operator_cast_to_Array(local_28);
    set_projected_obstructions((NavigationMeshSourceGeometryData3D *)param_1,(Array *)local_28);
    Array::~Array((Array *)local_28);
    uVar1 = uVar1 & 0xff;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationMeshSourceGeometryData3D::add_projected_obstruction(Vector<Vector3> const&, float,
   float, bool) */

void __thiscall
NavigationMeshSourceGeometryData3D::add_projected_obstruction
          (NavigationMeshSourceGeometryData3D *this,Vector *param_1,float param_2,float param_3,
          bool param_4)

{
  long *plVar1;
  pthread_rwlock_t *__rwlock;
  undefined4 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  long in_FS_OFFSET;
  undefined4 *local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined1 local_68 [8];
  long local_60;
  undefined8 local_58;
  undefined1 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(param_1 + 8) == 0) || (lVar3 = *(long *)(*(long *)(param_1 + 8) + -8), lVar3 < 3))
  {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar8 = 0xfa;
      pcVar7 = "Condition \"p_vertices.size() < 3\" is true.";
LAB_00105bfa:
      _err_print_error("add_projected_obstruction",
                       "scene/resources/3d/navigation_mesh_source_geometry_data_3d.cpp",uVar8,pcVar7
                       ,0,0);
      return;
    }
    goto LAB_00105c44;
  }
  if (param_3 < 0.0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar8 = 0xfb;
      pcVar7 = "Condition \"p_height < 0.0\" is true.";
      goto LAB_00105bfa;
    }
    goto LAB_00105c44;
  }
  local_80 = (undefined4 *)0x0;
  local_78 = 0;
  local_70 = 0;
  CowData<float>::resize<false>((CowData<float> *)&local_80,lVar3 * 3);
  local_78 = CONCAT44(param_3,param_2);
  local_70 = param_4;
  CowData<float>::_copy_on_write((CowData<float> *)&local_80);
  puVar9 = local_80;
  puVar6 = *(undefined4 **)(param_1 + 8);
  if (puVar6 != (undefined4 *)0x0) {
    puVar2 = puVar6 + *(long *)(puVar6 + -2) * 3;
    puVar4 = local_80;
    for (; puVar2 != puVar6; puVar6 = puVar6 + 3) {
      *puVar4 = *puVar6;
      puVar4[1] = puVar6[1];
      puVar4[2] = puVar6[2];
      puVar4 = puVar4 + 3;
    }
  }
  __rwlock = (pthread_rwlock_t *)(this + 0x240);
  iVar5 = pthread_rwlock_wrlock(__rwlock);
  if (iVar5 == 0x23) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(0x23);
  }
  local_60 = 0;
  if (puVar9 == (undefined4 *)0x0) {
    local_58 = local_78;
    local_50 = local_70;
    Vector<NavigationMeshSourceGeometryData3D::ProjectedObstruction>::push_back
              ((Vector<NavigationMeshSourceGeometryData3D::ProjectedObstruction> *)(this + 0x2b8),
               local_68);
    this[0x2b0] = (NavigationMeshSourceGeometryData3D)0x1;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      pthread_rwlock_unlock(__rwlock);
      return;
    }
    goto LAB_00105c44;
  }
  CowData<float>::_ref((CowData<float> *)&local_60,(CowData *)&local_80);
  lVar3 = local_60;
  local_58 = local_78;
  local_50 = local_70;
  Vector<NavigationMeshSourceGeometryData3D::ProjectedObstruction>::push_back
            ((Vector<NavigationMeshSourceGeometryData3D::ProjectedObstruction> *)(this + 0x2b8));
  if (lVar3 == 0) {
    this[0x2b0] = (NavigationMeshSourceGeometryData3D)0x1;
    pthread_rwlock_unlock(__rwlock);
LAB_00105afa:
    LOCK();
    plVar1 = (long *)(puVar9 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(local_80 + -4,false);
        return;
      }
      goto LAB_00105c44;
    }
  }
  else {
    LOCK();
    plVar1 = (long *)(lVar3 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_60 + -0x10),false);
    }
    puVar9 = local_80;
    this[0x2b0] = (NavigationMeshSourceGeometryData3D)0x1;
    pthread_rwlock_unlock(__rwlock);
    if (puVar9 != (undefined4 *)0x0) goto LAB_00105afa;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00105c44:
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



/* NavigationMeshSourceGeometryData3D::is_class_ptr(void*) const */

uint __thiscall
NavigationMeshSourceGeometryData3D::is_class_ptr
          (NavigationMeshSourceGeometryData3D *this,void *param_1)

{
  return (uint)CONCAT71(0x114c,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x114c,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x114c,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x114c,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
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



/* MethodBindTR<AABB>::_gen_argument_type(int) const */

undefined8 MethodBindTR<AABB>::_gen_argument_type(int param_1)

{
  return 0x10;
}



/* MethodBindTR<AABB>::get_argument_meta(int) const */

undefined8 MethodBindTR<AABB>::get_argument_meta(int param_1)

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



/* MethodBindT<Vector<Vector3> const&, float, float, bool>::get_argument_meta(int) const */

byte __thiscall
MethodBindT<Vector<Vector3>const&,float,float,bool>::get_argument_meta
          (MethodBindT<Vector<Vector3>const&,float,float,bool> *this,int param_1)

{
  return -(param_1 - 1U < 2) & 9;
}



/* MethodBindT<Ref<NavigationMeshSourceGeometryData3D> const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Ref<NavigationMeshSourceGeometryData3D>const&>::_gen_argument_type
          (MethodBindT<Ref<NavigationMeshSourceGeometryData3D>const&> *this,int param_1)

{
  return -(param_1 == 0) & 0x18;
}



/* MethodBindT<Ref<NavigationMeshSourceGeometryData3D> const&>::get_argument_meta(int) const */

undefined8
MethodBindT<Ref<NavigationMeshSourceGeometryData3D>const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Vector<Vector3> const&, Transform3D const&>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<Vector<Vector3>const&,Transform3D_const&>::_gen_argument_type
          (MethodBindT<Vector<Vector3>const&,Transform3D_const&> *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  if ((uint)param_1 < 2) {
    cVar1 = (-(param_1 == 0) & 0x12U) + 0x12;
  }
  return cVar1;
}



/* MethodBindT<Vector<Vector3> const&, Transform3D const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Vector<Vector3>const&,Transform3D_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Array const&, Transform3D const&>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<Array_const&,Transform3D_const&>::_gen_argument_type
          (MethodBindT<Array_const&,Transform3D_const&> *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  if ((uint)param_1 < 2) {
    cVar1 = (-(param_1 == 0) & 10U) + 0x12;
  }
  return cVar1;
}



/* MethodBindT<Array const&, Transform3D const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Array_const&,Transform3D_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Ref<Mesh> const&, Transform3D const&>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<Ref<Mesh>const&,Transform3D_const&>::_gen_argument_type
          (MethodBindT<Ref<Mesh>const&,Transform3D_const&> *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  if ((uint)param_1 < 2) {
    cVar1 = (-(param_1 == 0) & 6U) + 0x12;
  }
  return cVar1;
}



/* MethodBindT<Ref<Mesh> const&, Transform3D const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Ref<Mesh>const&,Transform3D_const&>::get_argument_meta(int param_1)

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



/* MethodBindT<Vector<float> const&, Vector<int> const&>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<Vector<float>const&,Vector<int>const&>::_gen_argument_type
          (MethodBindT<Vector<float>const&,Vector<int>const&> *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  if ((uint)param_1 < 2) {
    cVar1 = (-(param_1 == 0) & 2U) + 0x1e;
  }
  return cVar1;
}



/* MethodBindT<Vector<float> const&, Vector<int> const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Vector<float>const&,Vector<int>const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<Vector<int> const&>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Vector<int>const&>::_gen_argument_type(int param_1)

{
  return 0x1e;
}



/* MethodBindTRC<Vector<int> const&>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Vector<int>const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Vector<int> const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Vector<int>const&>::_gen_argument_type(MethodBindT<Vector<int>const&> *this,int param_1)

{
  return -(param_1 == 0) & 0x1e;
}



/* MethodBindT<Vector<int> const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Vector<int>const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<Vector<float> const&>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Vector<float>const&>::_gen_argument_type(int param_1)

{
  return 0x20;
}



/* MethodBindTRC<Vector<float> const&>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Vector<float>const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Vector<float> const&>::_gen_argument_type(int) const */

long __thiscall
MethodBindT<Vector<float>const&>::_gen_argument_type
          (MethodBindT<Vector<float>const&> *this,int param_1)

{
  return (ulong)(param_1 == 0) << 5;
}



/* MethodBindT<Vector<float> const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Vector<float>const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Vector<float> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Vector<float>const&>::~MethodBindT(MethodBindT<Vector<float>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001146d8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Vector<float> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Vector<float>const&>::~MethodBindT(MethodBindT<Vector<float>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001146d8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Vector<float> const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Vector<float>const&>::~MethodBindTRC(MethodBindTRC<Vector<float>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114738;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Vector<float> const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Vector<float>const&>::~MethodBindTRC(MethodBindTRC<Vector<float>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114738;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Vector<int> const&>::~MethodBindT() */

void __thiscall MethodBindT<Vector<int>const&>::~MethodBindT(MethodBindT<Vector<int>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114798;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Vector<int> const&>::~MethodBindT() */

void __thiscall MethodBindT<Vector<int>const&>::~MethodBindT(MethodBindT<Vector<int>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114798;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Vector<int> const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Vector<int>const&>::~MethodBindTRC(MethodBindTRC<Vector<int>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001147f8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Vector<int> const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Vector<int>const&>::~MethodBindTRC(MethodBindTRC<Vector<int>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001147f8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Vector<float> const&, Vector<int> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Vector<float>const&,Vector<int>const&>::~MethodBindT
          (MethodBindT<Vector<float>const&,Vector<int>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114858;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Vector<float> const&, Vector<int> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Vector<float>const&,Vector<int>const&>::~MethodBindT
          (MethodBindT<Vector<float>const&,Vector<int>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114858;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<bool>::~MethodBindTR() */

void __thiscall MethodBindTR<bool>::~MethodBindTR(MethodBindTR<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114918;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<bool>::~MethodBindTR() */

void __thiscall MethodBindTR<bool>::~MethodBindTR(MethodBindTR<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114918;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Ref<Mesh> const&, Transform3D const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<Mesh>const&,Transform3D_const&>::~MethodBindT
          (MethodBindT<Ref<Mesh>const&,Transform3D_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114978;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Ref<Mesh> const&, Transform3D const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<Mesh>const&,Transform3D_const&>::~MethodBindT
          (MethodBindT<Ref<Mesh>const&,Transform3D_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114978;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Array const&, Transform3D const&>::~MethodBindT() */

void __thiscall
MethodBindT<Array_const&,Transform3D_const&>::~MethodBindT
          (MethodBindT<Array_const&,Transform3D_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001149d8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Array const&, Transform3D const&>::~MethodBindT() */

void __thiscall
MethodBindT<Array_const&,Transform3D_const&>::~MethodBindT
          (MethodBindT<Array_const&,Transform3D_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001149d8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Vector<Vector3> const&, Transform3D const&>::~MethodBindT() */

void __thiscall
MethodBindT<Vector<Vector3>const&,Transform3D_const&>::~MethodBindT
          (MethodBindT<Vector<Vector3>const&,Transform3D_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114a38;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Vector<Vector3> const&, Transform3D const&>::~MethodBindT() */

void __thiscall
MethodBindT<Vector<Vector3>const&,Transform3D_const&>::~MethodBindT
          (MethodBindT<Vector<Vector3>const&,Transform3D_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114a38;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Ref<NavigationMeshSourceGeometryData3D> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<NavigationMeshSourceGeometryData3D>const&>::~MethodBindT
          (MethodBindT<Ref<NavigationMeshSourceGeometryData3D>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114a98;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Ref<NavigationMeshSourceGeometryData3D> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<NavigationMeshSourceGeometryData3D>const&>::~MethodBindT
          (MethodBindT<Ref<NavigationMeshSourceGeometryData3D>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114a98;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Vector<Vector3> const&, float, float, bool>::~MethodBindT() */

void __thiscall
MethodBindT<Vector<Vector3>const&,float,float,bool>::~MethodBindT
          (MethodBindT<Vector<Vector3>const&,float,float,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114af8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Vector<Vector3> const&, float, float, bool>::~MethodBindT() */

void __thiscall
MethodBindT<Vector<Vector3>const&,float,float,bool>::~MethodBindT
          (MethodBindT<Vector<Vector3>const&,float,float,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114af8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001148b8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001148b8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Array const&>::~MethodBindT() */

void __thiscall MethodBindT<Array_const&>::~MethodBindT(MethodBindT<Array_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114b58;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Array const&>::~MethodBindT() */

void __thiscall MethodBindT<Array_const&>::~MethodBindT(MethodBindT<Array_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114b58;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Array>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Array>::~MethodBindTRC(MethodBindTRC<Array> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114bb8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Array>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Array>::~MethodBindTRC(MethodBindTRC<Array> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114bb8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<AABB>::~MethodBindTR() */

void __thiscall MethodBindTR<AABB>::~MethodBindTR(MethodBindTR<AABB> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114c18;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<AABB>::~MethodBindTR() */

void __thiscall MethodBindTR<AABB>::~MethodBindTR(MethodBindTR<AABB> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114c18;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Vector<Vector3> const&, float, float, bool>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<Vector<Vector3>const&,float,float,bool>::_gen_argument_type
          (MethodBindT<Vector<Vector3>const&,float,float,bool> *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  if (((uint)param_1 < 4) && (cVar1 = '$', param_1 != 0)) {
    cVar1 = (param_1 != 3) * '\x02' + '\x01';
  }
  return cVar1;
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
LAB_00106523:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00106523;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "NavigationMeshSourceGeometryData3D");
      goto LAB_0010658e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,
             "NavigationMeshSourceGeometryData3D");
LAB_0010658e:
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



/* NavigationMeshSourceGeometryData3D::_getv(StringName const&, Variant&) const */

undefined4 __thiscall
NavigationMeshSourceGeometryData3D::_getv
          (NavigationMeshSourceGeometryData3D *this,StringName *param_1,Variant *param_2)

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
  local_48 = &_LC11;
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
      goto joined_r0x001071cc;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x001071cc:
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
  local_48 = &_LC11;
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
      goto joined_r0x0010734c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010734c:
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



/* MethodBindTRC<Vector<float> const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Vector<float>const&>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC11;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 0x20;
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
      goto joined_r0x001074cc;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x001074cc:
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



/* MethodBindTRC<Vector<int> const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Vector<int>const&>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC11;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 0x1e;
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
      goto joined_r0x0010764c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010764c:
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



/* MethodBindTR<AABB>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<AABB>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC11;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 0x10;
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
      goto joined_r0x001077cc;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x001077cc:
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
            if (lVar5 == 0) goto LAB_0010788f;
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
LAB_0010788f:
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
    if (cVar6 != '\0') goto LAB_00107943;
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
              if (lVar5 == 0) goto LAB_001079f3;
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
LAB_001079f3:
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
      if (cVar6 != '\0') goto LAB_00107943;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_00107943:
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
            if (lVar5 == 0) goto LAB_00107b1f;
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
LAB_00107b1f:
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
    if (cVar6 != '\0') goto LAB_00107bd3;
  }
  cVar6 = String::operator==(param_1,"NavigationMeshSourceGeometryData3D");
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
              if (lVar5 == 0) goto LAB_00107c93;
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
LAB_00107c93:
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
      if (cVar6 != '\0') goto LAB_00107bd3;
    }
    cVar6 = String::operator==(param_1,"Resource");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar7;
      }
      goto LAB_00107d3c;
    }
  }
LAB_00107bd3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00107d3c:
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
LAB_00107eb8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00107eb8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00107ed6;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00107ed6:
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
LAB_001082b8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001082b8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001082d5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001082d5:
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
LAB_00108708:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00108708;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00108725;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00108725:
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



/* MethodBindT<Ref<NavigationMeshSourceGeometryData3D> const&>::_gen_argument_type_info(int) const
    */

undefined4 *
MethodBindT<Ref<NavigationMeshSourceGeometryData3D>const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  char *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar4 = 0;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  puVar4[10] = 6;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_00108a69;
  local_78 = 0;
  local_68 = "NavigationMeshSourceGeometryData3D";
  local_80 = 0;
  local_60._0_8_ = 0x22;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (char *)CONCAT44(local_68._4_4_,0x18);
  local_50 = 0x11;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00108c25:
    local_40 = 6;
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
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 == 0x11) goto LAB_00108c25;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *puVar4 = local_68._0_4_;
  if (*(long *)(puVar4 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 2));
    uVar2 = local_60._0_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *(undefined8 *)(puVar4 + 2) = uVar2;
  }
  if (*(long *)(puVar4 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar2 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar4 + 4) = uVar2;
  }
  puVar4[6] = local_50;
  if (*(long *)(puVar4 + 8) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 8));
    lVar3 = local_48;
    local_48 = 0;
    *(long *)(puVar4 + 8) = lVar3;
  }
  puVar4[10] = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_00108a69:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar4;
}



/* MethodBindT<Vector<int> const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Vector<int>const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
  long in_FS_OFFSET;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar5 = 0;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  puVar5[10] = 6;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_00108cd9;
  local_78 = 0;
  local_68 = &_LC11;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0x1e);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00108dd5:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00108dd5;
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *puVar5 = local_68._0_4_;
  if (*(long *)(puVar5 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 2));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(puVar5 + 2) = uVar3;
  }
  if (*(long *)(puVar5 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar5 + 4) = uVar3;
  }
  puVar5[6] = local_50;
  if (*(long *)(puVar5 + 8) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 8));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(puVar5 + 8) = lVar4;
  }
  puVar5[10] = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_00108cd9:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBindT<Vector<float> const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Vector<float>const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
  long in_FS_OFFSET;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar5 = 0;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  puVar5[10] = 6;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_00108f49;
  local_78 = 0;
  local_68 = &_LC11;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0x20);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00109045:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00109045;
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *puVar5 = local_68._0_4_;
  if (*(long *)(puVar5 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 2));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(puVar5 + 2) = uVar3;
  }
  if (*(long *)(puVar5 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar5 + 4) = uVar3;
  }
  puVar5[6] = local_50;
  if (*(long *)(puVar5 + 8) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 8));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(puVar5 + 8) = lVar4;
  }
  puVar5[10] = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_00108f49:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBindT<Vector<float> const&, Vector<int> const&>::_gen_argument_type_info(int) const */

undefined4 *
MethodBindT<Vector<float>const&,Vector<int>const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  long lVar5;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar6;
  long in_FS_OFFSET;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar6 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar6 = 0;
  puVar6[6] = 0;
  *(undefined8 *)(puVar6 + 8) = 0;
  puVar6[10] = 6;
  *(undefined1 (*) [16])(puVar6 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_78 = 0;
    local_68 = &_LC11;
    local_80 = 0;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    String::parse_latin1((StrRange *)&local_80);
    local_68 = (undefined *)CONCAT44(local_68._4_4_,0x20);
  }
  else {
    if (in_EDX != 1) goto LAB_001091c8;
    local_78 = 0;
    local_68 = &_LC11;
    local_80 = 0;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_60._8_8_;
    local_60 = auVar3 << 0x40;
    String::parse_latin1((StrRange *)&local_80);
    local_68 = (undefined *)CONCAT44(local_68._4_4_,0x1e);
  }
  local_88 = 0;
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_001092c5:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_001092c5;
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *puVar6 = local_68._0_4_;
  if (*(long *)(puVar6 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar6 + 2));
    uVar4 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(puVar6 + 2) = uVar4;
  }
  if (*(long *)(puVar6 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar4 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar6 + 4) = uVar4;
  }
  puVar6[6] = local_50;
  if (*(long *)(puVar6 + 8) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar6 + 8));
    lVar5 = local_48;
    local_48 = 0;
    *(long *)(puVar6 + 8) = lVar5;
  }
  puVar6[10] = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_001091c8:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar6;
}



/* MethodBind* create_method_bind<NavigationMeshSourceGeometryData3D, Vector<float> const&>(void
   (NavigationMeshSourceGeometryData3D::*)(Vector<float> const&)) */

MethodBind *
create_method_bind<NavigationMeshSourceGeometryData3D,Vector<float>const&>
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
  *(undefined ***)this = &PTR__gen_argument_type_001146d8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "NavigationMeshSourceGeometryData3D";
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



/* MethodBind* create_method_bind<NavigationMeshSourceGeometryData3D, Vector<float>
   const&>(Vector<float> const& (NavigationMeshSourceGeometryData3D::*)() const) */

MethodBind *
create_method_bind<NavigationMeshSourceGeometryData3D,Vector<float>const&>
          (_func_Vector_ptr *param_1)

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
  *(_func_Vector_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00114738;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "NavigationMeshSourceGeometryData3D";
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



/* MethodBind* create_method_bind<NavigationMeshSourceGeometryData3D, Vector<int> const&>(void
   (NavigationMeshSourceGeometryData3D::*)(Vector<int> const&)) */

MethodBind *
create_method_bind<NavigationMeshSourceGeometryData3D,Vector<int>const&>
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
  *(undefined ***)this = &PTR__gen_argument_type_00114798;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "NavigationMeshSourceGeometryData3D";
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



/* MethodBind* create_method_bind<NavigationMeshSourceGeometryData3D, Vector<int>
   const&>(Vector<int> const& (NavigationMeshSourceGeometryData3D::*)() const) */

MethodBind *
create_method_bind<NavigationMeshSourceGeometryData3D,Vector<int>const&>(_func_Vector_ptr *param_1)

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
  *(_func_Vector_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001147f8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "NavigationMeshSourceGeometryData3D";
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



/* MethodBind* create_method_bind<NavigationMeshSourceGeometryData3D, Vector<float> const&,
   Vector<int> const&>(void (NavigationMeshSourceGeometryData3D::*)(Vector<float> const&,
   Vector<int> const&)) */

MethodBind *
create_method_bind<NavigationMeshSourceGeometryData3D,Vector<float>const&,Vector<int>const&>
          (_func_void_Vector_ptr_Vector_ptr *param_1)

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
  *(_func_void_Vector_ptr_Vector_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00114858;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "NavigationMeshSourceGeometryData3D";
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



/* MethodBind* create_method_bind<NavigationMeshSourceGeometryData3D>(void
   (NavigationMeshSourceGeometryData3D::*)()) */

MethodBind * create_method_bind<NavigationMeshSourceGeometryData3D>(_func_void *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_001148b8;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "NavigationMeshSourceGeometryData3D";
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



/* MethodBind* create_method_bind<NavigationMeshSourceGeometryData3D, bool>(bool
   (NavigationMeshSourceGeometryData3D::*)()) */

MethodBind * create_method_bind<NavigationMeshSourceGeometryData3D,bool>(_func_bool *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00114918;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "NavigationMeshSourceGeometryData3D";
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



/* MethodBind* create_method_bind<NavigationMeshSourceGeometryData3D, Ref<Mesh> const&, Transform3D
   const&>(void (NavigationMeshSourceGeometryData3D::*)(Ref<Mesh> const&, Transform3D const&)) */

MethodBind *
create_method_bind<NavigationMeshSourceGeometryData3D,Ref<Mesh>const&,Transform3D_const&>
          (_func_void_Ref_ptr_Transform3D_ptr *param_1)

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
  *(_func_void_Ref_ptr_Transform3D_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00114978;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "NavigationMeshSourceGeometryData3D";
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



/* MethodBind* create_method_bind<NavigationMeshSourceGeometryData3D, Array const&, Transform3D
   const&>(void (NavigationMeshSourceGeometryData3D::*)(Array const&, Transform3D const&)) */

MethodBind *
create_method_bind<NavigationMeshSourceGeometryData3D,Array_const&,Transform3D_const&>
          (_func_void_Array_ptr_Transform3D_ptr *param_1)

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
  *(_func_void_Array_ptr_Transform3D_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001149d8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "NavigationMeshSourceGeometryData3D";
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



/* MethodBind* create_method_bind<NavigationMeshSourceGeometryData3D, Vector<Vector3> const&,
   Transform3D const&>(void (NavigationMeshSourceGeometryData3D::*)(Vector<Vector3> const&,
   Transform3D const&)) */

MethodBind *
create_method_bind<NavigationMeshSourceGeometryData3D,Vector<Vector3>const&,Transform3D_const&>
          (_func_void_Vector_ptr_Transform3D_ptr *param_1)

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
  *(_func_void_Vector_ptr_Transform3D_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00114a38;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "NavigationMeshSourceGeometryData3D";
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



/* MethodBind* create_method_bind<NavigationMeshSourceGeometryData3D,
   Ref<NavigationMeshSourceGeometryData3D> const&>(void
   (NavigationMeshSourceGeometryData3D::*)(Ref<NavigationMeshSourceGeometryData3D> const&)) */

MethodBind *
create_method_bind<NavigationMeshSourceGeometryData3D,Ref<NavigationMeshSourceGeometryData3D>const&>
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
  *(undefined ***)this = &PTR__gen_argument_type_00114a98;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "NavigationMeshSourceGeometryData3D";
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



/* MethodBind* create_method_bind<NavigationMeshSourceGeometryData3D, Vector<Vector3> const&, float,
   float, bool>(void (NavigationMeshSourceGeometryData3D::*)(Vector<Vector3> const&, float, float,
   bool)) */

MethodBind *
create_method_bind<NavigationMeshSourceGeometryData3D,Vector<Vector3>const&,float,float,bool>
          (_func_void_Vector_ptr_float_float_bool *param_1)

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
  *(_func_void_Vector_ptr_float_float_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00114af8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 4;
  local_40 = 0;
  local_38 = "NavigationMeshSourceGeometryData3D";
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



/* MethodBind* create_method_bind<NavigationMeshSourceGeometryData3D, Array const&>(void
   (NavigationMeshSourceGeometryData3D::*)(Array const&)) */

MethodBind *
create_method_bind<NavigationMeshSourceGeometryData3D,Array_const&>(_func_void_Array_ptr *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00114b58;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "NavigationMeshSourceGeometryData3D";
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



/* MethodBind* create_method_bind<NavigationMeshSourceGeometryData3D, Array>(Array
   (NavigationMeshSourceGeometryData3D::*)() const) */

MethodBind * create_method_bind<NavigationMeshSourceGeometryData3D,Array>(_func_Array *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00114bb8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "NavigationMeshSourceGeometryData3D";
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



/* MethodBind* create_method_bind<NavigationMeshSourceGeometryData3D, AABB>(AABB
   (NavigationMeshSourceGeometryData3D::*)()) */

MethodBind * create_method_bind<NavigationMeshSourceGeometryData3D,AABB>(_func_AABB *param_1)

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
  *(_func_AABB **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00114c18;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "NavigationMeshSourceGeometryData3D";
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



/* NavigationMeshSourceGeometryData3D::_bind_methods() [clone .cold] */

void NavigationMeshSourceGeometryData3D::_bind_methods(void)

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



/* CowData<float>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<float>::_copy_on_write(void)

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



/* NavigationMeshSourceGeometryData3D::_initialize_classv() */

void NavigationMeshSourceGeometryData3D::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_70;
  undefined8 local_68;
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
        if ((code *)PTR__bind_methods_00119008 != RefCounted::_bind_methods) {
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
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
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<int>::resize<false>(long) */

undefined8 __thiscall CowData<int>::resize<false>(CowData<int> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  
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
    lVar9 = 0;
    lVar3 = 0;
  }
  else {
    lVar9 = *(long *)(lVar3 + -8);
    if (param_1 == lVar9) {
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
    lVar3 = lVar9 * 4;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 4 == 0) {
LAB_0010ad50:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 4 - 1;
  uVar4 = uVar4 | uVar4 >> 1;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar8 = uVar4 + 1;
  if (lVar8 == 0) goto LAB_0010ad50;
  if (lVar9 < param_1) {
    if (lVar8 != lVar3) {
      if (lVar9 == 0) {
        puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
        if (puVar5 == (undefined8 *)0x0) {
          _err_print_error("resize","./core/templates/cowdata.h",0x171,
                           "Parameter \"mem_new\" is null.",0,0);
          return 6;
        }
        puVar7 = puVar5 + 2;
        *puVar5 = 1;
        puVar5[1] = 0;
        *(undefined8 **)this = puVar7;
        goto LAB_0010ac61;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_0010ac61:
      puVar7[-1] = param_1;
      return 0;
    }
  }
  else {
    if ((lVar8 != lVar3) && (uVar6 = _realloc(this,lVar8), (int)uVar6 != 0)) {
      return uVar6;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
  }
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* Vector<int>::append_array(Vector<int>) */

void __thiscall Vector<int>::append_array(Vector<int> *this,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)(param_2 + 8) == 0) {
    return;
  }
  lVar2 = *(long *)(*(long *)(param_2 + 8) + -8);
  if (lVar2 != 0) {
    if (*(long *)(this + 8) == 0) {
      lVar6 = 0;
      lVar5 = lVar2;
    }
    else {
      lVar6 = *(long *)(*(long *)(this + 8) + -8);
      lVar5 = lVar2 + lVar6;
    }
    CowData<int>::resize<false>((CowData<int> *)(this + 8),lVar5);
    if (0 < lVar2) {
      lVar6 = lVar6 << 2;
      lVar5 = 0;
      do {
        lVar3 = *(long *)(param_2 + 8);
        if (lVar3 == 0) {
          lVar7 = 0;
LAB_0010ae69:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar5,lVar7,"p_index","size()","",false
                     ,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        lVar7 = *(long *)(lVar3 + -8);
        if (lVar7 <= lVar5) goto LAB_0010ae69;
        uVar1 = *(undefined4 *)(lVar3 + lVar5 * 4);
        lVar5 = lVar5 + 1;
        CowData<int>::_copy_on_write((CowData<int> *)(this + 8));
        *(undefined4 *)(*(long *)(this + 8) + lVar6) = uVar1;
        lVar6 = lVar6 + 4;
      } while (lVar5 != lVar2);
    }
  }
  return;
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
  
  *(undefined ***)this = &PTR__initialize_classv_00114500;
  clear(this);
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
  
  *(undefined ***)this = &PTR__initialize_classv_00114500;
  clear(this);
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<float>::resize<false>(long) */

undefined8 __thiscall CowData<float>::resize<false>(CowData<float> *this,long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  
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
    lVar8 = 0;
    lVar2 = 0;
  }
  else {
    lVar8 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar8) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar2 = lVar8 * 4;
    if (lVar2 != 0) {
      uVar3 = lVar2 - 1U | lVar2 - 1U >> 1;
      uVar3 = uVar3 | uVar3 >> 2;
      uVar3 = uVar3 | uVar3 >> 4;
      uVar3 = uVar3 | uVar3 >> 8;
      uVar3 = uVar3 | uVar3 >> 0x10;
      lVar2 = (uVar3 | uVar3 >> 0x20) + 1;
    }
  }
  if (param_1 * 4 == 0) {
LAB_0010b350:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar3 = param_1 * 4 - 1;
  uVar3 = uVar3 | uVar3 >> 1;
  uVar3 = uVar3 | uVar3 >> 2;
  uVar3 = uVar3 | uVar3 >> 4;
  uVar3 = uVar3 | uVar3 >> 8;
  uVar3 = uVar3 | uVar3 >> 0x10;
  uVar3 = uVar3 | uVar3 >> 0x20;
  lVar7 = uVar3 + 1;
  if (lVar7 == 0) goto LAB_0010b350;
  if (lVar8 < param_1) {
    if (lVar7 != lVar2) {
      if (lVar8 == 0) {
        puVar4 = (undefined8 *)Memory::alloc_static(uVar3 + 0x11,false);
        if (puVar4 == (undefined8 *)0x0) {
          _err_print_error("resize","./core/templates/cowdata.h",0x171,
                           "Parameter \"mem_new\" is null.",0,0);
          return 6;
        }
        puVar6 = puVar4 + 2;
        *puVar4 = 1;
        puVar4[1] = 0;
        *(undefined8 **)this = puVar6;
        goto LAB_0010b281;
      }
      uVar5 = _realloc(this,lVar7);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
    }
    puVar6 = *(undefined8 **)this;
    if (puVar6 != (undefined8 *)0x0) {
LAB_0010b281:
      puVar6[-1] = param_1;
      return 0;
    }
  }
  else {
    if ((lVar7 != lVar2) && (uVar5 = _realloc(this,lVar7), (int)uVar5 != 0)) {
      return uVar5;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
  }
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Vector<float>::append_array(Vector<float>) */

void __thiscall Vector<float>::append_array(Vector<float> *this,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)(param_2 + 8) == 0) {
    return;
  }
  lVar2 = *(long *)(*(long *)(param_2 + 8) + -8);
  if (lVar2 != 0) {
    if (*(long *)(this + 8) == 0) {
      lVar6 = 0;
      lVar5 = lVar2;
    }
    else {
      lVar6 = *(long *)(*(long *)(this + 8) + -8);
      lVar5 = lVar2 + lVar6;
    }
    CowData<float>::resize<false>((CowData<float> *)(this + 8),lVar5);
    if (0 < lVar2) {
      lVar6 = lVar6 << 2;
      lVar5 = 0;
      do {
        lVar3 = *(long *)(param_2 + 8);
        if (lVar3 == 0) {
          lVar7 = 0;
LAB_0010b45d:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar5,lVar7,"p_index","size()","",false
                     ,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        lVar7 = *(long *)(lVar3 + -8);
        if (lVar7 <= lVar5) goto LAB_0010b45d;
        uVar1 = *(undefined4 *)(lVar3 + lVar5 * 4);
        lVar5 = lVar5 + 1;
        CowData<float>::_copy_on_write((CowData<float> *)(this + 8));
        *(undefined4 *)(*(long *)(this + 8) + lVar6) = uVar1;
        lVar6 = lVar6 + 4;
      } while (lVar5 != lVar2);
    }
  }
  return;
}



/* CowData<NavigationMeshSourceGeometryData3D::ProjectedObstruction>::_realloc(long) */

undefined8 __thiscall
CowData<NavigationMeshSourceGeometryData3D::ProjectedObstruction>::_realloc
          (CowData<NavigationMeshSourceGeometryData3D::ProjectedObstruction> *this,long param_1)

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
/* Error CowData<NavigationMeshSourceGeometryData3D::ProjectedObstruction>::resize<false>(long) */

undefined8 __thiscall
CowData<NavigationMeshSourceGeometryData3D::ProjectedObstruction>::resize<false>
          (CowData<NavigationMeshSourceGeometryData3D::ProjectedObstruction> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  
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
    lVar7 = 0;
    lVar9 = 0;
  }
  else {
    lVar7 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar7) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar9 = lVar7 * 0x20;
    if (lVar9 != 0) {
      uVar10 = lVar9 - 1U | lVar9 - 1U >> 1;
      uVar10 = uVar10 | uVar10 >> 2;
      uVar10 = uVar10 | uVar10 >> 4;
      uVar10 = uVar10 | uVar10 >> 8;
      uVar10 = uVar10 | uVar10 >> 0x10;
      lVar9 = (uVar10 | uVar10 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x20 == 0) {
LAB_0010b7e0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar10 = param_1 * 0x20 - 1;
  uVar10 = uVar10 >> 1 | uVar10;
  uVar10 = uVar10 | uVar10 >> 2;
  uVar10 = uVar10 | uVar10 >> 4;
  uVar10 = uVar10 | uVar10 >> 8;
  uVar10 = uVar10 | uVar10 >> 0x10;
  uVar10 = uVar10 | uVar10 >> 0x20;
  lVar11 = uVar10 + 1;
  if (lVar11 == 0) goto LAB_0010b7e0;
  if (param_1 <= lVar7) {
    lVar7 = *(long *)this;
    uVar10 = param_1;
    while (lVar7 != 0) {
      if (*(ulong *)(lVar7 + -8) <= uVar10) {
LAB_0010b692:
        if (lVar11 != lVar9) {
          uVar4 = _realloc(this,lVar11);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          lVar7 = *(long *)this;
          if (lVar7 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
        }
        *(long *)(lVar7 + -8) = param_1;
        return 0;
      }
      while( true ) {
        lVar3 = uVar10 * 0x20 + lVar7;
        if (*(long *)(lVar3 + 8) != 0) break;
        uVar10 = uVar10 + 1;
        if (*(ulong *)(lVar7 + -8) <= uVar10) goto LAB_0010b692;
      }
      LOCK();
      plVar1 = (long *)(*(long *)(lVar3 + 8) + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar7 = *(long *)(lVar3 + 8);
        *(undefined8 *)(lVar3 + 8) = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
      uVar10 = uVar10 + 1;
      lVar7 = *(long *)this;
    }
    goto LAB_0010b836;
  }
  if (lVar11 == lVar9) {
LAB_0010b75b:
    puVar8 = *(undefined8 **)this;
    if (puVar8 == (undefined8 *)0x0) {
LAB_0010b836:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar7 = puVar8[-1];
    if (param_1 <= lVar7) goto LAB_0010b73d;
  }
  else {
    if (lVar7 != 0) {
      uVar4 = _realloc(this,lVar11);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_0010b75b;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar10 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar8 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar8;
    lVar7 = 0;
  }
  puVar5 = puVar8 + lVar7 * 4;
  do {
    puVar5[1] = 0;
    puVar6 = puVar5 + 4;
    puVar5[2] = 0;
    *(undefined1 *)(puVar5 + 3) = 0;
    puVar5 = puVar6;
  } while (puVar6 != puVar8 + param_1 * 4);
LAB_0010b73d:
  puVar8[-1] = param_1;
  return 0;
}



/* Vector<NavigationMeshSourceGeometryData3D::ProjectedObstruction>::append_array(Vector<NavigationMeshSourceGeometryData3D::ProjectedObstruction>)
    */

void __thiscall
Vector<NavigationMeshSourceGeometryData3D::ProjectedObstruction>::append_array
          (Vector<NavigationMeshSourceGeometryData3D::ProjectedObstruction> *this,long param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_2 + 8) == 0) {
    return;
  }
  lVar1 = *(long *)(*(long *)(param_2 + 8) + -8);
  if (lVar1 != 0) {
    if (*(long *)(this + 8) == 0) {
      lVar5 = 0;
      lVar6 = lVar1;
    }
    else {
      lVar5 = *(long *)(*(long *)(this + 8) + -8);
      lVar6 = lVar1 + lVar5;
    }
    CowData<NavigationMeshSourceGeometryData3D::ProjectedObstruction>::resize<false>
              ((CowData<NavigationMeshSourceGeometryData3D::ProjectedObstruction> *)(this + 8),lVar6
              );
    if (0 < lVar1) {
      lVar5 = lVar5 << 5;
      lVar6 = 0;
      do {
        lVar4 = *(long *)(param_2 + 8);
        if (lVar4 == 0) {
          lVar3 = 0;
LAB_0010b91c:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar6,lVar3,"p_index","size()","",false
                     ,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        lVar3 = *(long *)(lVar4 + -8);
        if (lVar3 <= lVar6) goto LAB_0010b91c;
        lVar4 = lVar4 + lVar6 * 0x20;
        CowData<NavigationMeshSourceGeometryData3D::ProjectedObstruction>::_copy_on_write
                  ((CowData<NavigationMeshSourceGeometryData3D::ProjectedObstruction> *)(this + 8));
        lVar3 = *(long *)(this + 8) + lVar5;
        if (*(long *)(lVar3 + 8) != *(long *)(lVar4 + 8)) {
          CowData<float>::_ref((CowData<float> *)(lVar3 + 8),(CowData *)(lVar4 + 8));
        }
        lVar6 = lVar6 + 1;
        lVar5 = lVar5 + 0x20;
        *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar4 + 0x10);
        *(undefined1 *)(lVar3 + 0x18) = *(undefined1 *)(lVar4 + 0x18);
      } while (lVar6 != lVar1);
    }
  }
  return;
}



/* NavigationMeshSourceGeometryData3D::_setv(StringName const&, Variant const&) */

ulong NavigationMeshSourceGeometryData3D::_setv(StringName *param_1,Variant *param_2)

{
  ulong uVar1;
  long in_FS_OFFSET;
  Variant local_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = StringName::operator==((StringName *)param_2,"projected_obstructions");
  if ((char)uVar1 != '\0') {
    Variant::operator_cast_to_Array(local_28);
    set_projected_obstructions((NavigationMeshSourceGeometryData3D *)param_1,(Array *)local_28);
    Array::~Array((Array *)local_28);
    uVar1 = uVar1 & 0xff;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x0010bba8) */
/* WARNING: Removing unreachable block (ram,0x0010bd3d) */
/* WARNING: Removing unreachable block (ram,0x0010bd49) */
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



/* MethodBindTR<AABB>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<AABB>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  long *plVar4;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_88;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  undefined4 local_68 [2];
  undefined8 local_60;
  undefined8 uStack_58;
  AABB local_48 [24];
  long local_30;
  
  plVar4 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar4 != (long *)0x0) && (plVar4[1] != 0)) && (*(char *)(plVar4[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_78,(StringName *)(param_2 + 3));
    if (plVar4[1] == 0) {
      plVar3 = (long *)plVar4[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    else {
      plVar3 = (long *)(plVar4[1] + 0x20);
    }
    if (local_78 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_78 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_80 = 0;
      local_70 = 0x35;
      String::parse_latin1((StrRange *)&local_80);
      vformat<StringName>((StringName *)&local_78,(StrRange *)&local_80,&local_88);
      _err_print_error(&_LC92,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_78,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      if ((StringName::configured != '\0') && (local_88 != 0)) {
        StringName::unref();
      }
      goto LAB_0010bf50;
    }
    if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar2 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar2 & 1) != 0) {
        pVVar2 = *(Variant **)(pVVar2 + *(long *)((long)plVar4 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar2)(local_48);
      Variant::Variant((Variant *)local_68,local_48);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_68[0];
      *(undefined8 *)(param_1 + 8) = local_60;
      *(undefined8 *)(param_1 + 0x10) = uStack_58;
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
LAB_0010bf50:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<AABB>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<AABB>::validated_call
          (MethodBindTR<AABB> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  long *plVar3;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  Variant **local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_58 == (Variant **)*plVar3) {
      if ((StringName::configured != '\0') && (local_58 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Variant **)0x10bd98;
      local_50 = 0x35;
      local_60 = 0;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010c209;
    }
    param_2 = local_58;
    if ((StringName::configured != '\0') && (local_58 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar2 = *(code **)(pcVar2 + (long)param_2 + -1);
  }
  (*pcVar2)(&local_48,param_1 + *(long *)(this + 0x60),param_2);
  puVar1 = *(undefined8 **)(param_3 + 8);
  puVar1[2] = local_38;
  *puVar1 = local_48;
  puVar1[1] = uStack_40;
LAB_0010c209:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<AABB>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<AABB>::ptrcall(MethodBindTR<AABB> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  void **extraout_RDX;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  void **local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_58 == (void **)*plVar2) {
      if ((StringName::configured != '\0') && (local_58 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (void **)0x10bd98;
      local_50 = 0x35;
      local_60 = 0;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010c3d7;
    }
    param_2 = local_58;
    if ((StringName::configured != '\0') && (local_58 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar1 = *(code **)(pcVar1 + (long)param_2 + -1);
  }
  (*pcVar1)(&local_48,param_1 + *(long *)(this + 0x60),param_2);
  *(undefined8 *)((long)param_3 + 0x10) = local_38;
  *(undefined8 *)param_3 = local_48;
  *(undefined8 *)((long)param_3 + 8) = uStack_40;
LAB_0010c3d7:
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
  Variant *pVVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  long *plVar4;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar4 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar4 != (long *)0x0) && (plVar4[1] != 0)) && (*(char *)(plVar4[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar4[1] == 0) {
      plVar3 = (long *)plVar4[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    else {
      plVar3 = (long *)(plVar4[1] + 0x20);
    }
    if (local_58 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC92,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010c620;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar2 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar2 & 1) != 0) {
        pVVar2 = *(Variant **)(pVVar2 + *(long *)((long)plVar4 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar2)((Array *)&local_58);
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
LAB_0010c620:
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
  code *pcVar1;
  long *plVar2;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Variant **local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Variant **)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x10bd98;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Array *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Array *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010c849;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar1 = *(code **)(pcVar1 + (long)param_2 + -1);
  }
  (*pcVar1)((Array *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  Array::operator=((Array *)(param_3 + 8),(Array *)&local_48);
  Array::~Array((Array *)&local_48);
LAB_0010c849:
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
  code *pcVar1;
  long *plVar2;
  void **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  void **local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (void **)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (void **)0x10bd98;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Array *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Array *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010ca1a;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar1 = *(code **)(pcVar1 + (long)param_2 + -1);
  }
  (*pcVar1)((Array *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  Array::operator=((Array *)param_3,(Array *)&local_48);
  Array::~Array((Array *)&local_48);
LAB_0010ca1a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Array const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Array_const&>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010cd61;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010cbed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_0010cd61:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Array const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Array_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010cf41;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010cdc9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_0010cf41:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector<Vector3> const&, float, float, bool>::validated_call(Object*, Variant const**,
   Variant*) const */

void MethodBindT<Vector<Vector3>const&,float,float,bool>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010d155;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar2._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar2._0_4_ = (float)*(double *)(*(long *)(param_3 + 8) + 8);
    auVar3._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar3._0_4_ = (float)*(double *)(*(long *)(param_3 + 0x10) + 8);
                    /* WARNING: Could not recover jumptable at 0x0010cfd7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (auVar2._0_8_,auVar3._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(long *)(*(long *)param_3 + 8) + 0x10,*(undefined1 *)(*(long *)(param_3 + 0x18) + 8)
              );
    return;
  }
LAB_0010d155:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector<Vector3> const&, float, float, bool>::ptrcall(Object*, void const**, void*)
   const */

void MethodBindT<Vector<Vector3>const&,float,float,bool>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010d359;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar2._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar2._0_4_ = (float)**(double **)((long)param_3 + 8);
                    /* WARNING: Load size is inaccurate */
    auVar3._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar3._0_4_ = (float)**(double **)((long)param_3 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0010d1e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (auVar2._0_8_,auVar3._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *param_3,**(char **)((long)param_3 + 0x18) != '\0');
    return;
  }
LAB_0010d359:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector<Vector3> const&, Transform3D const&>::validated_call(Object*, Variant const**,
   Variant*) const */

void MethodBindT<Vector<Vector3>const&,Transform3D_const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010d541;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010d3cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(long *)(*(long *)param_3 + 8) + 0x10,*(undefined8 *)(*(long *)(param_3 + 8) + 8));
    return;
  }
LAB_0010d541:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector<Vector3> const&, Transform3D const&>::ptrcall(Object*, void const**, void*)
   const */

void MethodBindT<Vector<Vector3>const&,Transform3D_const&>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010d729;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x0010d5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3,
               *(undefined8 *)((long)param_3 + 8));
    return;
  }
LAB_0010d729:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Array const&, Transform3D const&>::validated_call(Object*, Variant const**, Variant*)
   const */

void MethodBindT<Array_const&,Transform3D_const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010d911;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010d798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8,
               *(undefined8 *)(*(long *)(param_3 + 8) + 8));
    return;
  }
LAB_0010d911:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Array const&, Transform3D const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Array_const&,Transform3D_const&>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010daf9;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x0010d980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3,
               *(undefined8 *)((long)param_3 + 8));
    return;
  }
LAB_0010daf9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  char *pcVar2;
  bool bVar3;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar4;
  
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
      _err_print_error(&_LC92,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar2 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar6 = (long *)(local_58 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010dbc0;
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
      bVar3 = (bool)(*(code *)pVVar4)();
      Variant::Variant((Variant *)local_48,bVar3);
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
LAB_0010dbc0:
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
  Variant VVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010de02;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  VVar1 = (Variant)(*pcVar2)(param_1 + *(long *)(this + 0x60));
  param_3[8] = VVar1;
LAB_0010de02:
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
  undefined1 uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010dfb1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(undefined1 *)param_3 = uVar1;
LAB_0010dfb1:
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
      _err_print_error(&_LC92,"./core/object/method_bind.h",0x154,
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
      goto LAB_0010e230;
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
LAB_0010e230:
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
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010e5ef;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010e496. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0010e5ef:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010e7af;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010e656. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0010e7af:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector<float> const&, Vector<int> const&>::validated_call(Object*, Variant const**,
   Variant*) const */

void MethodBindT<Vector<float>const&,Vector<int>const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010e987;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010e832. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(long *)(*(long *)param_3 + 8) + 0x10,*(long *)(*(long *)(param_3 + 8) + 8) + 0x10);
    return;
  }
LAB_0010e987:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector<float> const&, Vector<int> const&>::ptrcall(Object*, void const**, void*)
   const */

void MethodBindT<Vector<float>const&,Vector<int>const&>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010eb69;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x0010e9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3,
               *(undefined8 *)((long)param_3 + 8));
    return;
  }
LAB_0010eb69:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector<int> const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<Vector<int>const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Vector *pVVar2;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar3;
  
  plVar5 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar5 != (long *)0x0) && (plVar5[1] != 0)) && (*(char *)(plVar5[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC92,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010ec30;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar3 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar3 & 1) != 0) {
        pVVar3 = *(Variant **)(pVVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      pVVar2 = (Vector *)(*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,pVVar2);
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
LAB_0010ec30:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector<int> const&>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Vector<int>const&>::validated_call
          (MethodBindTRC<Vector<int>const&> *this,Object *param_1,Variant **param_2,Variant *param_3
          )

{
  long lVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 == (Object *)0x0) || (*(long *)(param_1 + 8) == 0)) ||
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) == '\0')) {
LAB_0010ee30:
    pcVar2 = *(code **)(this + 0x58);
    if (((ulong)pcVar2 & 1) != 0) {
      pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
    }
    lVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
    if (*(long *)(*(long *)(param_3 + 8) + 0x18) != *(long *)(lVar1 + 8)) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        CowData<int>::_ref((CowData<int> *)(*(long *)(param_3 + 8) + 0x18),(CowData *)(lVar1 + 8));
        return;
      }
      goto LAB_0010efdf;
    }
  }
  else {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 != (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      goto LAB_0010ee30;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
    MethodBind::get_name();
    local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
    local_40 = 0x35;
    local_50 = 0;
    String::parse_latin1((StrRange *)&local_50);
    vformat<StringName>((CowData<char32_t> *)&local_48,(StrRange *)&local_50,&local_58);
    _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                     "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                     ,(CowData<char32_t> *)&local_48,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010efdf:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector<int> const&>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Vector<int>const&>::ptrcall
          (MethodBindTRC<Vector<int>const&> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  long lVar2;
  long lVar4;
  long *plVar5;
  long in_FS_OFFSET;
  bool bVar6;
  long local_58;
  undefined8 local_50;
  char *local_48;
  long local_40 [2];
  long local_30;
  code *pcVar3;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 == (Object *)0x0) || (*(long *)(param_1 + 8) == 0)) ||
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) == '\0')) {
LAB_0010f020:
    pcVar3 = *(code **)(this + 0x58);
    if (((ulong)pcVar3 & 1) != 0) {
      pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
    }
    lVar2 = (*pcVar3)(param_1 + *(long *)(this + 0x60));
    local_40[0] = 0;
    if (*(long *)(lVar2 + 8) == 0) {
      if (*(long *)((long)param_3 + 8) != 0) {
        CowData<int>::_ref((CowData<int> *)((long)param_3 + 8),(CowData *)local_40);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(lVar2 + 8) + -0x10);
      do {
        lVar1 = *plVar5;
        if (lVar1 == 0) goto LAB_0010f082;
        LOCK();
        lVar4 = *plVar5;
        bVar6 = lVar1 == lVar4;
        if (bVar6) {
          *plVar5 = lVar1 + 1;
          lVar4 = lVar1;
        }
        UNLOCK();
      } while (!bVar6);
      if (lVar4 != -1) {
        local_40[0] = *(long *)(lVar2 + 8);
      }
LAB_0010f082:
      lVar2 = local_40[0];
      if (local_40[0] != *(long *)((long)param_3 + 8)) {
        CowData<int>::_ref((CowData<int> *)((long)param_3 + 8),(CowData *)local_40);
      }
      if (lVar2 != 0) {
        LOCK();
        plVar5 = (long *)(lVar2 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
            Memory::free_static((void *)(local_40[0] + -0x10),false);
            return;
          }
          goto LAB_0010f259;
        }
      }
    }
  }
  else {
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
    if (local_48 != (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      goto LAB_0010f020;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
    MethodBind::get_name();
    local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
    local_40[0] = 0x35;
    local_50 = 0;
    String::parse_latin1((StrRange *)&local_50);
    vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
    _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                     "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                     ,(StringName *)&local_48,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010f259:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector<int> const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Vector<int>const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010f439;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010f2c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(long *)(*(long *)param_3 + 8) + 0x10);
    return;
  }
LAB_0010f439:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector<int> const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Vector<int>const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010f611;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010f499. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_0010f611:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector<float> const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<Vector<float>const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  Vector *pVVar3;
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
  Variant *pVVar4;
  
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
      _err_print_error(&_LC92,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
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
      goto LAB_0010f6e0;
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
      pVVar3 = (Vector *)(*(code *)pVVar4)();
      Variant::Variant((Variant *)local_48,pVVar3);
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
LAB_0010f6e0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector<float> const&>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Vector<float>const&>::validated_call
          (MethodBindTRC<Vector<float>const&> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  long lVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 == (Object *)0x0) || (*(long *)(param_1 + 8) == 0)) ||
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) == '\0')) {
LAB_0010f910:
    pcVar2 = *(code **)(this + 0x58);
    if (((ulong)pcVar2 & 1) != 0) {
      pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
    }
    lVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
    if (*(long *)(*(long *)(param_3 + 8) + 0x18) != *(long *)(lVar1 + 8)) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        CowData<float>::_ref
                  ((CowData<float> *)(*(long *)(param_3 + 8) + 0x18),(CowData *)(lVar1 + 8));
        return;
      }
      goto LAB_0010fabf;
    }
  }
  else {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 != (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      goto LAB_0010f910;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
    MethodBind::get_name();
    local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
    local_40 = 0x35;
    local_50 = 0;
    String::parse_latin1((StrRange *)&local_50);
    vformat<StringName>((CowData<char32_t> *)&local_48,(StrRange *)&local_50,&local_58);
    _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                     "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                     ,(CowData<char32_t> *)&local_48,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010fabf:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector<float> const&>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Vector<float>const&>::ptrcall
          (MethodBindTRC<Vector<float>const&> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  long lVar2;
  long lVar4;
  long *plVar5;
  long in_FS_OFFSET;
  bool bVar6;
  long local_58;
  undefined8 local_50;
  char *local_48;
  long local_40 [2];
  long local_30;
  code *pcVar3;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 == (Object *)0x0) || (*(long *)(param_1 + 8) == 0)) ||
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) == '\0')) {
LAB_0010fb00:
    pcVar3 = *(code **)(this + 0x58);
    if (((ulong)pcVar3 & 1) != 0) {
      pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
    }
    lVar2 = (*pcVar3)(param_1 + *(long *)(this + 0x60));
    local_40[0] = 0;
    if (*(long *)(lVar2 + 8) == 0) {
      if (*(long *)((long)param_3 + 8) != 0) {
        CowData<float>::_ref((CowData<float> *)((long)param_3 + 8),(CowData *)local_40);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(lVar2 + 8) + -0x10);
      do {
        lVar1 = *plVar5;
        if (lVar1 == 0) goto LAB_0010fb62;
        LOCK();
        lVar4 = *plVar5;
        bVar6 = lVar1 == lVar4;
        if (bVar6) {
          *plVar5 = lVar1 + 1;
          lVar4 = lVar1;
        }
        UNLOCK();
      } while (!bVar6);
      if (lVar4 != -1) {
        local_40[0] = *(long *)(lVar2 + 8);
      }
LAB_0010fb62:
      lVar2 = local_40[0];
      if (local_40[0] != *(long *)((long)param_3 + 8)) {
        CowData<float>::_ref((CowData<float> *)((long)param_3 + 8),(CowData *)local_40);
      }
      if (lVar2 != 0) {
        LOCK();
        plVar5 = (long *)(lVar2 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
            Memory::free_static((void *)(local_40[0] + -0x10),false);
            return;
          }
          goto LAB_0010fd39;
        }
      }
    }
  }
  else {
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
    if (local_48 != (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      goto LAB_0010fb00;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
    MethodBind::get_name();
    local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
    local_40[0] = 0x35;
    local_50 = 0;
    String::parse_latin1((StrRange *)&local_50);
    vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
    _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                     "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                     ,(StringName *)&local_48,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010fd39:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector<float> const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Vector<float>const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010ff19;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010fda1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(long *)(*(long *)param_3 + 8) + 0x10);
    return;
  }
LAB_0010ff19:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector<float> const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Vector<float>const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001100f1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010ff79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_001100f1:
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
  char cVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  undefined4 in_register_00000014;
  long *plVar9;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar10;
  Variant *pVVar11;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
    }
    if (local_48 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC92,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00110210;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar11 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar10 = param_2[5];
    if (pVVar10 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00110260;
LAB_00110250:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00110260:
        uVar6 = 4;
        goto LAB_00110205;
      }
      if (in_R8D == 1) goto LAB_00110250;
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
      pVVar11 = *(Variant **)(pVVar11 + *(long *)((long)plVar9 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,0x1c);
    uVar4 = _LC97;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_Array((Variant *)&local_48);
    (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1),(Variant *)&local_48);
    Array::~Array((Array *)&local_48);
  }
  else {
    uVar6 = 3;
LAB_00110205:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_00110210:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector<Vector3> const&, float, float, bool>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<Vector<Vector3>const&,float,float,bool>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  undefined4 uVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  int iVar11;
  undefined4 in_register_00000014;
  long *plVar12;
  Variant *pVVar13;
  long lVar14;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar15;
  long in_FS_OFFSET;
  long local_88;
  undefined8 local_80;
  char *local_78;
  long local_70;
  Variant *local_68 [5];
  long local_40;
  
  plVar12 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar12 != (long *)0x0) && (plVar12[1] != 0)) && (*(char *)(plVar12[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_78,(StringName *)(param_2 + 3));
    if (plVar12[1] == 0) {
      plVar9 = (long *)plVar12[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar12 + 0x40))(plVar12);
      }
    }
    else {
      plVar9 = (long *)(plVar12[1] + 0x20);
    }
    if (local_78 == (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_78 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_80 = 0;
      local_70 = 0x35;
      String::parse_latin1((StrRange *)&local_80);
      vformat<StringName>((StringName *)&local_78,(StrRange *)&local_80,&local_88);
      _err_print_error(&_LC92,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_78,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      if ((StringName::configured != '\0') && (local_88 != 0)) {
        StringName::unref();
      }
      goto LAB_00110652;
    }
    if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar15 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 5) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar11 = 0;
      lVar14 = 0;
    }
    else {
      lVar14 = *(long *)(pVVar2 + -8);
      iVar11 = (int)lVar14;
    }
    if ((int)(4 - in_R8D) <= iVar11) {
      lVar8 = 0;
      do {
        if ((int)lVar8 < (int)in_R8D) {
          pVVar13 = *(Variant **)(param_4 + lVar8 * 8);
        }
        else {
          uVar10 = iVar11 + -4 + (int)lVar8;
          if (lVar14 <= (int)uVar10) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar10,lVar14,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          pVVar13 = pVVar2 + (ulong)uVar10 * 0x18;
        }
        local_68[lVar8] = pVVar13;
        lVar8 = lVar8 + 1;
      } while (lVar8 != 4);
      *in_R9 = 0;
      if (((ulong)pVVar15 & 1) != 0) {
        pVVar15 = *(Variant **)(pVVar15 + *(long *)((long)plVar12 + (long)pVVar1) + -1);
      }
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_68[3],1);
      uVar4 = _LC99;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      bVar6 = Variant::operator_cast_to_bool(local_68[3]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_68[2],3);
      uVar4 = _LC100;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_float(local_68[2]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_68[1],3);
      uVar4 = _LC101;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_float(local_68[1]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_68[0],0x24);
      uVar4 = _LC102;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_Vector((Variant *)&local_78);
      (*(code *)pVVar15)((Variant *)((long)plVar12 + (long)pVVar1),(Variant *)&local_78,bVar6);
      lVar14 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar12 = (long *)(local_70 + -0x10);
        *plVar12 = *plVar12 + -1;
        UNLOCK();
        if (*plVar12 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar14 + -0x10),false);
        }
      }
      goto LAB_00110652;
    }
    uVar7 = 4;
  }
  else {
    uVar7 = 3;
  }
  *in_R9 = uVar7;
  in_R9[2] = 4;
LAB_00110652:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector<float> const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<Vector<float>const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  undefined4 in_register_00000014;
  long *plVar9;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar10;
  Variant *pVVar11;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40 [2];
  long local_30;
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
    }
    if (local_48 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40[0] = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC92,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00110970;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar11 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar10 = param_2[5];
    if (pVVar10 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_001109c0;
LAB_001109b0:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_001109c0:
        uVar6 = 4;
        goto LAB_00110965;
      }
      if (in_R8D == 1) goto LAB_001109b0;
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
      pVVar11 = *(Variant **)(pVVar11 + *(long *)((long)plVar9 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,0x20);
    uVar4 = _LC103;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_Vector((Variant *)&local_48);
    (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1),(Variant *)&local_48);
    CowData<float>::_unref((CowData<float> *)local_40);
  }
  else {
    uVar6 = 3;
LAB_00110965:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_00110970:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector<int> const&>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindT<Vector<int>const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  undefined4 in_register_00000014;
  long *plVar9;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar10;
  Variant *pVVar11;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40 [2];
  long local_30;
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
    }
    if (local_48 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40[0] = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC92,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00110ca0;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar11 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar10 = param_2[5];
    if (pVVar10 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00110cf0;
LAB_00110ce0:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00110cf0:
        uVar6 = 4;
        goto LAB_00110c95;
      }
      if (in_R8D == 1) goto LAB_00110ce0;
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
      pVVar11 = *(Variant **)(pVVar11 + *(long *)((long)plVar9 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,0x1e);
    uVar4 = _LC104;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_Vector((Variant *)&local_48);
    (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1),(Variant *)&local_48);
    CowData<int>::_unref((CowData<int> *)local_40);
  }
  else {
    uVar6 = 3;
LAB_00110c95:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_00110ca0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Mesh> const&, Transform3D const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Ref<Mesh>const&,Transform3D_const&>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  undefined8 uVar2;
  Object *pOVar3;
  char cVar4;
  long *plVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Object *local_48;
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
    if (local_48 == (Object *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x10bd98;
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00110f53;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)((long)param_2 + lVar1) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  uVar2 = *(undefined8 *)((long)param_3 + 8);
  if ((*param_3 == (long *)0x0) || (local_48 = (Object *)**param_3, local_48 == (Object *)0x0)) {
LAB_00110f2c:
    local_48 = (Object *)0x0;
  }
  else {
    cVar4 = RefCounted::init_ref();
    if (cVar4 == '\0') goto LAB_00110f2c;
  }
  (*pcVar6)((long *)((long)param_2 + lVar1),(StringName *)&local_48,uVar2);
  if (local_48 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    pOVar3 = local_48;
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_48);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
LAB_00110f53:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Mesh> const&, Transform3D const&>::validated_call(Object*, Variant const**,
   Variant*) const */

void MethodBindT<Ref<Mesh>const&,Transform3D_const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  undefined8 uVar2;
  Object *pOVar3;
  char cVar4;
  Object *pOVar5;
  Variant *pVVar6;
  code *pcVar7;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  Object *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar6 = param_2[0x23];
      if (pVVar6 == (Variant *)0x0) {
        pVVar6 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar6 = param_2[1] + 0x20;
    }
    if (local_68 == (Object *)*(long *)pVVar6) {
      if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = (Object *)0x10bd98;
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00111219;
    }
    if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar7 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar7 & 1) != 0) {
    pcVar7 = *(code **)(pcVar7 + *(long *)((long)param_2 + lVar1) + -1);
  }
  uVar2 = *(undefined8 *)(*(long *)(param_3 + 8) + 8);
  Variant::Variant((Variant *)local_58,*(Object **)(*(long *)param_3 + 0x10));
  local_68 = (Object *)0x0;
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar3 = local_68;
  if (pOVar5 != local_68) {
    if (pOVar5 == (Object *)0x0) {
      if (local_68 != (Object *)0x0) {
        local_68 = (Object *)0x0;
LAB_001111d4:
        cVar4 = RefCounted::unreference();
        if (cVar4 != '\0') {
          cVar4 = predelete_handler(pOVar3);
          if (cVar4 != '\0') {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
          }
        }
      }
    }
    else {
      pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&Mesh::typeinfo,0);
      if (pOVar3 != pOVar5) {
        local_68 = pOVar5;
        if (pOVar5 != (Object *)0x0) {
          cVar4 = RefCounted::reference();
          if (cVar4 == '\0') {
            local_68 = (Object *)0x0;
          }
        }
        if (pOVar3 != (Object *)0x0) goto LAB_001111d4;
      }
    }
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  (*pcVar7)((long *)((long)param_2 + lVar1),(StringName *)&local_68,uVar2);
  if (local_68 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    pOVar3 = local_68;
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_68);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
LAB_00111219:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Mesh> const&, Transform3D const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<Ref<Mesh>const&,Transform3D_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  Object *pOVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  Object *pOVar9;
  long *plVar10;
  long lVar11;
  undefined4 in_register_00000014;
  long *plVar12;
  Variant *pVVar13;
  Variant *pVVar14;
  int iVar15;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar16;
  long in_FS_OFFSET;
  long local_98;
  undefined8 local_90;
  Object *local_88;
  undefined8 local_80;
  Variant local_78 [56];
  long local_40;
  
  plVar12 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar12 != (long *)0x0) && (plVar12[1] != 0)) && (*(char *)(plVar12[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_88,(StringName *)(param_2 + 3));
    if (plVar12[1] == 0) {
      plVar10 = (long *)plVar12[0x23];
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)(**(code **)(*plVar12 + 0x40))(plVar12);
      }
    }
    else {
      plVar10 = (long *)(plVar12[1] + 0x20);
    }
    if (local_88 == (Object *)*plVar10) {
      if ((StringName::configured != '\0') && (local_88 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_88 = (Object *)0x10bd98;
      local_90 = 0;
      local_80 = 0x35;
      String::parse_latin1((StrRange *)&local_90);
      vformat<StringName>((StringName *)&local_88,(StrRange *)&local_90,&local_98);
      _err_print_error(&_LC92,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_88,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      if ((StringName::configured != '\0') && (local_98 != 0)) {
        StringName::unref();
      }
      goto LAB_00111640;
    }
    if ((StringName::configured != '\0') && (local_88 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar16 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (2 < in_R8D) {
    uVar8 = 3;
LAB_00111635:
    *in_R9 = uVar8;
    in_R9[2] = 2;
    goto LAB_00111640;
  }
  pVVar13 = param_2[5];
  iVar7 = 2 - in_R8D;
  if (pVVar13 == (Variant *)0x0) {
    if (iVar7 != 0) goto LAB_00111678;
    pVVar14 = *(Variant **)param_4;
LAB_0011168d:
    pVVar13 = *(Variant **)(param_4 + 8);
  }
  else {
    lVar2 = *(long *)(pVVar13 + -8);
    iVar15 = (int)lVar2;
    if (iVar15 < iVar7) {
LAB_00111678:
      uVar8 = 4;
      goto LAB_00111635;
    }
    if (in_R8D == 0) {
      lVar11 = (long)(iVar15 + -2);
      if (lVar2 <= lVar11) goto LAB_001117b0;
      pVVar14 = pVVar13 + lVar11 * 0x18;
    }
    else {
      pVVar14 = *(Variant **)param_4;
      if (in_R8D == 2) goto LAB_0011168d;
    }
    lVar11 = (long)(int)((in_R8D ^ 1) + (iVar15 - iVar7));
    if (lVar2 <= lVar11) {
LAB_001117b0:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar11,lVar2,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    pVVar13 = pVVar13 + lVar11 * 0x18;
  }
  *in_R9 = 0;
  if (((ulong)pVVar16 & 1) != 0) {
    pVVar16 = *(Variant **)(pVVar16 + *(long *)((long)plVar12 + (long)pVVar1) + -1);
  }
  cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar13,0x12);
  uVar4 = _LC105;
  if (cVar6 == '\0') {
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar4;
  }
  Variant::operator_cast_to_Transform3D(local_78);
  cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar14);
  uVar4 = _LC106;
  if (cVar6 == '\0') {
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar4;
  }
  local_88 = (Object *)0x0;
  pOVar9 = (Object *)Variant::get_validated_object();
  pOVar5 = local_88;
  if (pOVar9 != local_88) {
    if (pOVar9 == (Object *)0x0) {
      if (local_88 != (Object *)0x0) {
        local_88 = (Object *)0x0;
LAB_001115d3:
        cVar6 = RefCounted::unreference();
        if (cVar6 != '\0') {
          cVar6 = predelete_handler(pOVar5);
          if (cVar6 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
    }
    else {
      pOVar9 = (Object *)__dynamic_cast(pOVar9,&Object::typeinfo,&Mesh::typeinfo,0);
      if (pOVar5 != pOVar9) {
        local_88 = pOVar9;
        if (pOVar9 != (Object *)0x0) {
          cVar6 = RefCounted::reference();
          if (cVar6 == '\0') {
            local_88 = (Object *)0x0;
          }
        }
        if (pOVar5 != (Object *)0x0) goto LAB_001115d3;
      }
    }
  }
  (*(code *)pVVar16)((Variant *)((long)plVar12 + (long)pVVar1),&local_88,local_78);
  if (local_88 != (Object *)0x0) {
    cVar6 = RefCounted::unreference();
    pOVar5 = local_88;
    if (cVar6 != '\0') {
      cVar6 = predelete_handler(local_88);
      if (cVar6 != '\0') {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
    }
  }
LAB_00111640:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, Vector<Vector3> const&, Transform3D
   const&>(__UnexistingClass*, void (__UnexistingClass::*)(Vector<Vector3> const&, Transform3D
   const&), Variant const**, int, Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,Vector<Vector3>const&,Transform3D_const&>
               (__UnexistingClass *param_1,_func_void_Vector_ptr_Transform3D_ptr *param_2,
               Variant **param_3,int param_4,CallError *param_5,Vector *param_6)

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
  undefined4 *puVar13;
  long in_FS_OFFSET;
  long in_stack_00000008;
  Variant aVStack_88 [8];
  long local_80;
  Variant local_78 [56];
  long local_40;
  
  plVar8 = (long *)CONCAT44(in_register_0000000c,param_4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar11 = (uint)param_5;
  if (uVar11 < 3) {
    lVar1 = *(long *)(in_stack_00000008 + 8);
    iVar6 = 2 - uVar11;
    if (lVar1 == 0) {
      if (iVar6 != 0) goto LAB_00111a50;
      puVar10 = (undefined4 *)*plVar8;
LAB_00111a9d:
      puVar13 = (undefined4 *)plVar8[1];
    }
    else {
      lVar2 = *(long *)(lVar1 + -8);
      iVar12 = (int)lVar2;
      if (iVar12 < iVar6) {
LAB_00111a50:
        uVar7 = 4;
        goto LAB_00111a55;
      }
      if (uVar11 == 0) {
        lVar9 = (long)(iVar12 + -2);
        if (lVar2 <= lVar9) goto LAB_00111ab8;
        puVar10 = (undefined4 *)(lVar1 + lVar9 * 0x18);
      }
      else {
        puVar10 = (undefined4 *)*plVar8;
        if (uVar11 == 2) goto LAB_00111a9d;
      }
      lVar9 = (long)(int)((uVar11 ^ 1) + (iVar12 - iVar6));
      if (lVar2 <= lVar9) {
LAB_00111ab8:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      puVar13 = (undefined4 *)(lVar1 + lVar9 * 0x18);
    }
    *(undefined4 *)param_6 = 0;
    if (((ulong)param_2 & 1) != 0) {
      param_2 = *(_func_void_Vector_ptr_Transform3D_ptr **)
                 (param_2 + *(long *)(param_1 + (long)param_3) + -1);
    }
    cVar5 = Variant::can_convert_strict(*puVar13,0x12);
    uVar4 = _LC105;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    Variant::operator_cast_to_Transform3D(local_78);
    cVar5 = Variant::can_convert_strict(*puVar10,0x24);
    uVar4 = _LC102;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    Variant::operator_cast_to_Vector(aVStack_88);
    (*param_2)((Vector *)(param_1 + (long)param_3),(Transform3D *)aVStack_88);
    lVar1 = local_80;
    if (local_80 != 0) {
      LOCK();
      plVar8 = (long *)(local_80 + -0x10);
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
        local_80 = 0;
        Memory::free_static((void *)(lVar1 + -0x10),false);
      }
    }
  }
  else {
    uVar7 = 3;
LAB_00111a55:
    *(undefined4 *)param_6 = uVar7;
    *(undefined4 *)(param_6 + 8) = 2;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector<Vector3> const&, Transform3D const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<Vector<Vector3>const&,Transform3D_const&>::call
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
      _err_print_error(&_LC92,"./core/object/method_bind.h",0x154,
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
      goto LAB_00111b56;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,Vector<Vector3>const&,Transform3D_const&>
            (p_Var4,(_func_void_Vector_ptr_Transform3D_ptr *)param_2[0xb],(Variant **)param_2[0xc],
             (int)param_4,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00111b56:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, Array const&, Transform3D
   const&>(__UnexistingClass*, void (__UnexistingClass::*)(Array const&, Transform3D const&),
   Variant const**, int, Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,Array_const&,Transform3D_const&>
               (__UnexistingClass *param_1,_func_void_Array_ptr_Transform3D_ptr *param_2,
               Variant **param_3,int param_4,CallError *param_5,Vector *param_6)

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
  undefined4 *puVar13;
  long in_FS_OFFSET;
  long in_stack_00000008;
  Variant local_80 [8];
  Variant local_78 [56];
  long local_40;
  
  plVar8 = (long *)CONCAT44(in_register_0000000c,param_4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar11 = (uint)param_5;
  if (uVar11 < 3) {
    lVar1 = *(long *)(in_stack_00000008 + 8);
    iVar6 = 2 - uVar11;
    if (lVar1 == 0) {
      if (iVar6 != 0) goto LAB_00111eb0;
      puVar10 = (undefined4 *)*plVar8;
LAB_00111efd:
      puVar13 = (undefined4 *)plVar8[1];
    }
    else {
      lVar2 = *(long *)(lVar1 + -8);
      iVar12 = (int)lVar2;
      if (iVar12 < iVar6) {
LAB_00111eb0:
        uVar7 = 4;
        goto LAB_00111eb5;
      }
      if (uVar11 == 0) {
        lVar9 = (long)(iVar12 + -2);
        if (lVar2 <= lVar9) goto LAB_00111f18;
        puVar10 = (undefined4 *)(lVar1 + lVar9 * 0x18);
      }
      else {
        puVar10 = (undefined4 *)*plVar8;
        if (uVar11 == 2) goto LAB_00111efd;
      }
      lVar9 = (long)(int)((uVar11 ^ 1) + (iVar12 - iVar6));
      if (lVar2 <= lVar9) {
LAB_00111f18:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      puVar13 = (undefined4 *)(lVar1 + lVar9 * 0x18);
    }
    *(undefined4 *)param_6 = 0;
    if (((ulong)param_2 & 1) != 0) {
      param_2 = *(_func_void_Array_ptr_Transform3D_ptr **)
                 (param_2 + *(long *)(param_1 + (long)param_3) + -1);
    }
    cVar5 = Variant::can_convert_strict(*puVar13,0x12);
    uVar4 = _LC105;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    Variant::operator_cast_to_Transform3D(local_78);
    cVar5 = Variant::can_convert_strict(*puVar10,0x1c);
    uVar4 = _LC97;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    Variant::operator_cast_to_Array(local_80);
    (*param_2)((Array *)(param_1 + (long)param_3),(Transform3D *)local_80);
    Array::~Array((Array *)local_80);
  }
  else {
    uVar7 = 3;
LAB_00111eb5:
    *(undefined4 *)param_6 = uVar7;
    *(undefined4 *)(param_6 + 8) = 2;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Array const&, Transform3D const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<Array_const&,Transform3D_const&>::call
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
      _err_print_error(&_LC92,"./core/object/method_bind.h",0x154,
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
      goto LAB_00111fb6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,Array_const&,Transform3D_const&>
            (p_Var4,(_func_void_Array_ptr_Transform3D_ptr *)param_2[0xb],(Variant **)param_2[0xc],
             (int)param_4,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00111fb6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, Vector<float> const&, Vector<int>
   const&>(__UnexistingClass*, void (__UnexistingClass::*)(Vector<float> const&, Vector<int>
   const&), Variant const**, int, Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,Vector<float>const&,Vector<int>const&>
               (__UnexistingClass *param_1,_func_void_Vector_ptr_Vector_ptr *param_2,
               Variant **param_3,int param_4,CallError *param_5,Vector *param_6)

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
  undefined4 *puVar13;
  long in_FS_OFFSET;
  long in_stack_00000008;
  Variant aVStack_68 [8];
  long local_60;
  Variant local_58 [8];
  long local_50;
  long local_40;
  
  plVar8 = (long *)CONCAT44(in_register_0000000c,param_4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar11 = (uint)param_5;
  if (uVar11 < 3) {
    lVar1 = *(long *)(in_stack_00000008 + 8);
    iVar6 = 2 - uVar11;
    if (lVar1 == 0) {
      if (iVar6 != 0) goto LAB_00112358;
      puVar10 = (undefined4 *)*plVar8;
LAB_001123ad:
      puVar13 = (undefined4 *)plVar8[1];
    }
    else {
      lVar2 = *(long *)(lVar1 + -8);
      iVar12 = (int)lVar2;
      if (iVar12 < iVar6) {
LAB_00112358:
        uVar7 = 4;
        goto LAB_0011235d;
      }
      if (uVar11 == 0) {
        lVar9 = (long)(iVar12 + -2);
        if (lVar2 <= lVar9) goto LAB_001123c8;
        puVar10 = (undefined4 *)(lVar1 + lVar9 * 0x18);
      }
      else {
        puVar10 = (undefined4 *)*plVar8;
        if (uVar11 == 2) goto LAB_001123ad;
      }
      lVar9 = (long)(int)((uVar11 ^ 1) + (iVar12 - iVar6));
      if (lVar2 <= lVar9) {
LAB_001123c8:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      puVar13 = (undefined4 *)(lVar1 + lVar9 * 0x18);
    }
    *(undefined4 *)param_6 = 0;
    if (((ulong)param_2 & 1) != 0) {
      param_2 = *(_func_void_Vector_ptr_Vector_ptr **)
                 (param_2 + *(long *)(param_1 + (long)param_3) + -1);
    }
    cVar5 = Variant::can_convert_strict(*puVar13,0x1e);
    uVar4 = _LC107;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    Variant::operator_cast_to_Vector(aVStack_68);
    cVar5 = Variant::can_convert_strict(*puVar10,0x20);
    uVar4 = _LC103;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    Variant::operator_cast_to_Vector(local_58);
    (*param_2)((Vector *)(param_1 + (long)param_3),(Vector *)local_58);
    lVar1 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar8 = (long *)(local_50 + -0x10);
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar1 + -0x10),false);
      }
    }
    lVar1 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar8 = (long *)(local_60 + -0x10);
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar1 + -0x10),false);
      }
    }
  }
  else {
    uVar7 = 3;
LAB_0011235d:
    *(undefined4 *)param_6 = uVar7;
    *(undefined4 *)(param_6 + 8) = 2;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector<float> const&, Vector<int> const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<Vector<float>const&,Vector<int>const&>::call
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
      _err_print_error(&_LC92,"./core/object/method_bind.h",0x154,
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
      goto LAB_00112466;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,Vector<float>const&,Vector<int>const&>
            (p_Var4,(_func_void_Vector_ptr_Vector_ptr *)param_2[0xb],(Variant **)param_2[0xc],
             (int)param_4,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00112466:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<Array const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<Array_const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  long in_FS_OFFSET;
  undefined8 local_88;
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
  iVar5 = *param_2;
  if (iVar5 != param_1) goto LAB_001126a7;
  local_78 = 0;
  local_68 = &_LC11;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0x1c);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_001127a5:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_001127a5;
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)param_3 = local_68._0_4_;
  if (*(long *)(param_3 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(param_3 + 8) = uVar3;
  }
  if (*(long *)(param_3 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar3;
  }
  *(int *)(param_3 + 0x18) = local_50;
  if (*(long *)(param_3 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(param_3 + 0x20) = lVar4;
  }
  *(undefined4 *)(param_3 + 0x28) = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  iVar5 = *param_2;
LAB_001126a7:
  *param_2 = iVar5 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<Array const&>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<Array_const&>::_gen_argument_type_info(int param_1)

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
  call_get_argument_type_info_helper<Array_const&>(in_EDX,&local_14,pPVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<Vector<Vector3> const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<Vector<Vector3>const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  long in_FS_OFFSET;
  undefined8 local_88;
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
  iVar5 = *param_2;
  if (iVar5 != param_1) goto LAB_00112977;
  local_78 = 0;
  local_68 = &_LC11;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0x24);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00112a75:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00112a75;
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)param_3 = local_68._0_4_;
  if (*(long *)(param_3 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(param_3 + 8) = uVar3;
  }
  if (*(long *)(param_3 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar3;
  }
  *(int *)(param_3 + 0x18) = local_50;
  if (*(long *)(param_3 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(param_3 + 0x20) = lVar4;
  }
  *(undefined4 *)(param_3 + 0x28) = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  iVar5 = *param_2;
LAB_00112977:
  *param_2 = iVar5 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* void call_get_argument_type_info_helper<float>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<float>(int param_1,int *param_2,PropertyInfo *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  long in_FS_OFFSET;
  undefined8 local_88;
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
  iVar5 = *param_2;
  if (iVar5 != param_1) goto LAB_00112bc7;
  local_78 = 0;
  local_68 = &_LC11;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,3);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00112cc5:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00112cc5;
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)param_3 = local_68._0_4_;
  if (*(long *)(param_3 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(param_3 + 8) = uVar3;
  }
  if (*(long *)(param_3 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar3;
  }
  *(int *)(param_3 + 0x18) = local_50;
  if (*(long *)(param_3 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(param_3 + 0x20) = lVar4;
  }
  *(undefined4 *)(param_3 + 0x28) = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  iVar5 = *param_2;
LAB_00112bc7:
  *param_2 = iVar5 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<Vector<Vector3> const&, float, float, bool>::_gen_argument_type_info(int) const */

PropertyInfo *
MethodBindT<Vector<Vector3>const&,float,float,bool>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar5;
  long in_FS_OFFSET;
  int local_8c;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  pPVar5 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar5 = 0;
  *(undefined4 *)(pPVar5 + 0x18) = 0;
  *(undefined8 *)(pPVar5 + 0x20) = 0;
  *(undefined4 *)(pPVar5 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar5 + 8) = (undefined1  [16])0x0;
  local_8c = 0;
  call_get_argument_type_info_helper<Vector<Vector3>const&>(in_EDX,&local_8c,pPVar5);
  call_get_argument_type_info_helper<float>(in_EDX,&local_8c,pPVar5);
  call_get_argument_type_info_helper<float>(in_EDX,&local_8c,pPVar5);
  if (in_EDX != local_8c) goto LAB_00112e71;
  local_78 = 0;
  local_68 = &_LC11;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,1);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00112f6d:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00112f6d;
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)pPVar5 = local_68._0_4_;
  if (*(long *)(pPVar5 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar5 + 8));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(pPVar5 + 8) = uVar3;
  }
  if (*(long *)(pPVar5 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(pPVar5 + 0x10) = uVar3;
  }
  *(int *)(pPVar5 + 0x18) = local_50;
  if (*(long *)(pPVar5 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar5 + 0x20));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(pPVar5 + 0x20) = lVar4;
  }
  *(undefined4 *)(pPVar5 + 0x28) = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_00112e71:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pPVar5;
}



/* void call_get_argument_type_info_helper<Transform3D const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<Transform3D_const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  long in_FS_OFFSET;
  undefined8 local_88;
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
  iVar5 = *param_2;
  if (iVar5 != param_1) goto LAB_001130b7;
  local_78 = 0;
  local_68 = &_LC11;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0x12);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_001131b5:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_001131b5;
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)param_3 = local_68._0_4_;
  if (*(long *)(param_3 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(param_3 + 8) = uVar3;
  }
  if (*(long *)(param_3 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar3;
  }
  *(int *)(param_3 + 0x18) = local_50;
  if (*(long *)(param_3 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(param_3 + 0x20) = lVar4;
  }
  *(undefined4 *)(param_3 + 0x28) = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  iVar5 = *param_2;
LAB_001130b7:
  *param_2 = iVar5 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<Array const&, Transform3D const&>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<Array_const&,Transform3D_const&>::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  local_24 = 0;
  call_get_argument_type_info_helper<Array_const&>(in_EDX,&local_24,pPVar1);
  call_get_argument_type_info_helper<Transform3D_const&>(in_EDX,&local_24,pPVar1);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector<Vector3> const&, Transform3D const&>::_gen_argument_type_info(int) const */

PropertyInfo *
MethodBindT<Vector<Vector3>const&,Transform3D_const&>::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  local_24 = 0;
  call_get_argument_type_info_helper<Vector<Vector3>const&>(in_EDX,&local_24,pPVar1);
  call_get_argument_type_info_helper<Transform3D_const&>(in_EDX,&local_24,pPVar1);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Mesh> const&, Transform3D const&>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<Ref<Mesh>const&,Transform3D_const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar4;
  long in_FS_OFFSET;
  int local_8c;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  pPVar4 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar4 = 0;
  *(undefined4 *)(pPVar4 + 0x18) = 0;
  *(undefined8 *)(pPVar4 + 0x20) = 0;
  *(undefined4 *)(pPVar4 + 0x28) = 6;
  local_8c = 0;
  *(undefined1 (*) [16])(pPVar4 + 8) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_00113465;
  local_78 = 0;
  local_68 = &_LC108;
  local_80 = 0;
  local_60._0_8_ = 4;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0x18);
  local_50 = 0x11;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_0011363d:
    local_40 = 6;
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
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 == 0x11) goto LAB_0011363d;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)pPVar4 = local_68._0_4_;
  if (*(long *)(pPVar4 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar4 + 8));
    uVar2 = local_60._0_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *(undefined8 *)(pPVar4 + 8) = uVar2;
  }
  if (*(long *)(pPVar4 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar2 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(pPVar4 + 0x10) = uVar2;
  }
  *(int *)(pPVar4 + 0x18) = local_50;
  if (*(long *)(pPVar4 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar4 + 0x20));
    lVar3 = local_48;
    local_48 = 0;
    *(long *)(pPVar4 + 0x20) = lVar3;
  }
  *(undefined4 *)(pPVar4 + 0x28) = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_00113465:
  local_8c = 1;
  call_get_argument_type_info_helper<Transform3D_const&>(in_EDX,&local_8c,pPVar4);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pPVar4;
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
  *(undefined ***)param_1 = &PTR__initialize_classv_00114500;
  NavigationMeshSourceGeometryData3D::clear(param_1);
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
      goto joined_r0x00113707;
    }
  }
  lVar2 = *(long *)(param_1 + 0x280);
joined_r0x00113707:
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



/* MethodBindT<Ref<NavigationMeshSourceGeometryData3D> const&>::validated_call(Object*, Variant
   const**, Variant*) const */

void MethodBindT<Ref<NavigationMeshSourceGeometryData3D>const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  NavigationMeshSourceGeometryData3D *pNVar2;
  char cVar3;
  NavigationMeshSourceGeometryData3D *pNVar4;
  Variant *pVVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  NavigationMeshSourceGeometryData3D *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar5 = param_2[0x23];
      if (pVVar5 == (Variant *)0x0) {
        pVVar5 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar5 = param_2[1] + 0x20;
    }
    if (local_58 == (NavigationMeshSourceGeometryData3D *)*(long *)pVVar5) {
      if ((StringName::configured != '\0') &&
         (local_58 != (NavigationMeshSourceGeometryData3D *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (NavigationMeshSourceGeometryData3D *)0x10bd98;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00113888;
    }
    if ((StringName::configured != '\0') && (local_58 != (NavigationMeshSourceGeometryData3D *)0x0))
    {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)((long)param_2 + lVar1) + -1);
  }
  Variant::Variant((Variant *)local_48,*(Object **)(*(long *)param_3 + 0x10));
  local_58 = (NavigationMeshSourceGeometryData3D *)0x0;
  pNVar4 = (NavigationMeshSourceGeometryData3D *)Variant::get_validated_object();
  pNVar2 = local_58;
  if (pNVar4 != local_58) {
    if (pNVar4 == (NavigationMeshSourceGeometryData3D *)0x0) {
      if (local_58 != (NavigationMeshSourceGeometryData3D *)0x0) {
        local_58 = (NavigationMeshSourceGeometryData3D *)0x0;
LAB_00113846:
        cVar3 = RefCounted::unreference();
        if (cVar3 != '\0') {
          memdelete<NavigationMeshSourceGeometryData3D>(pNVar2);
        }
      }
    }
    else {
      pNVar4 = (NavigationMeshSourceGeometryData3D *)
               __dynamic_cast(pNVar4,&Object::typeinfo,&NavigationMeshSourceGeometryData3D::typeinfo
                              ,0);
      if (pNVar2 != pNVar4) {
        local_58 = pNVar4;
        if (pNVar4 != (NavigationMeshSourceGeometryData3D *)0x0) {
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            local_58 = (NavigationMeshSourceGeometryData3D *)0x0;
          }
        }
        if (pNVar2 != (NavigationMeshSourceGeometryData3D *)0x0) goto LAB_00113846;
      }
    }
  }
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  (*pcVar6)((long *)((long)param_2 + lVar1),(StringName *)&local_58);
  if (local_58 != (NavigationMeshSourceGeometryData3D *)0x0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      memdelete<NavigationMeshSourceGeometryData3D>(local_58);
    }
  }
LAB_00113888:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<NavigationMeshSourceGeometryData3D> const&>::ptrcall(Object*, void const**,
   void*) const */

void MethodBindT<Ref<NavigationMeshSourceGeometryData3D>const&>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char cVar2;
  long *plVar3;
  code *pcVar4;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  NavigationMeshSourceGeometryData3D *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar3 = (long *)param_2[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar3 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (NavigationMeshSourceGeometryData3D *)*plVar3) {
      if ((StringName::configured != '\0') &&
         (local_48 != (NavigationMeshSourceGeometryData3D *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (NavigationMeshSourceGeometryData3D *)0x10bd98;
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00113b0c;
    }
    if ((StringName::configured != '\0') && (local_48 != (NavigationMeshSourceGeometryData3D *)0x0))
    {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)((long)param_2 + lVar1) + -1);
  }
  if ((*param_3 == (long *)0x0) ||
     (local_48 = (NavigationMeshSourceGeometryData3D *)**param_3,
     local_48 == (NavigationMeshSourceGeometryData3D *)0x0)) {
LAB_00113ae8:
    local_48 = (NavigationMeshSourceGeometryData3D *)0x0;
  }
  else {
    cVar2 = RefCounted::init_ref();
    if (cVar2 == '\0') goto LAB_00113ae8;
  }
  (*pcVar4)((long *)((long)param_2 + lVar1),(StringName *)&local_48);
  if (local_48 != (NavigationMeshSourceGeometryData3D *)0x0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      memdelete<NavigationMeshSourceGeometryData3D>(local_48);
    }
  }
LAB_00113b0c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<NavigationMeshSourceGeometryData3D> const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<Ref<NavigationMeshSourceGeometryData3D>const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  NavigationMeshSourceGeometryData3D *pNVar5;
  char cVar6;
  undefined4 uVar7;
  NavigationMeshSourceGeometryData3D *pNVar8;
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
  undefined8 local_50;
  NavigationMeshSourceGeometryData3D *local_48;
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
    if (local_48 == (NavigationMeshSourceGeometryData3D *)*plVar9) {
      if ((StringName::configured != '\0') &&
         (local_48 != (NavigationMeshSourceGeometryData3D *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (NavigationMeshSourceGeometryData3D *)0x10bd98;
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC92,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00113e10;
    }
    if ((StringName::configured != '\0') && (local_48 != (NavigationMeshSourceGeometryData3D *)0x0))
    {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (1 < in_R8D) {
    uVar7 = 3;
LAB_00113e05:
    *in_R9 = uVar7;
    in_R9[2] = 1;
    goto LAB_00113e10;
  }
  pVVar12 = param_2[5];
  if (pVVar12 == (Variant *)0x0) {
    if (in_R8D != 1) goto LAB_00113e60;
LAB_00113e50:
    pVVar12 = *(Variant **)param_4;
  }
  else {
    lVar2 = *(long *)(pVVar12 + -8);
    if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00113e60:
      uVar7 = 4;
      goto LAB_00113e05;
    }
    if (in_R8D == 1) goto LAB_00113e50;
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
  uVar4 = _LC106;
  if (cVar6 == '\0') {
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar4;
  }
  local_48 = (NavigationMeshSourceGeometryData3D *)0x0;
  pNVar8 = (NavigationMeshSourceGeometryData3D *)Variant::get_validated_object();
  pNVar5 = local_48;
  if (pNVar8 != local_48) {
    if (pNVar8 == (NavigationMeshSourceGeometryData3D *)0x0) {
      if (local_48 != (NavigationMeshSourceGeometryData3D *)0x0) {
        local_48 = (NavigationMeshSourceGeometryData3D *)0x0;
LAB_00113f7d:
        cVar6 = RefCounted::unreference();
        if (cVar6 != '\0') {
          memdelete<NavigationMeshSourceGeometryData3D>(pNVar5);
        }
      }
    }
    else {
      pNVar8 = (NavigationMeshSourceGeometryData3D *)
               __dynamic_cast(pNVar8,&Object::typeinfo,&NavigationMeshSourceGeometryData3D::typeinfo
                              ,0);
      if (pNVar5 != pNVar8) {
        local_48 = pNVar8;
        if (pNVar8 != (NavigationMeshSourceGeometryData3D *)0x0) {
          cVar6 = RefCounted::reference();
          if (cVar6 == '\0') {
            local_48 = (NavigationMeshSourceGeometryData3D *)0x0;
          }
        }
        if (pNVar5 != (NavigationMeshSourceGeometryData3D *)0x0) goto LAB_00113f7d;
      }
    }
  }
  (*(code *)pVVar13)((Variant *)((long)plVar11 + (long)pVVar1),&local_48);
  if (local_48 != (NavigationMeshSourceGeometryData3D *)0x0) {
    cVar6 = RefCounted::unreference();
    if (cVar6 != '\0') {
      memdelete<NavigationMeshSourceGeometryData3D>(local_48);
    }
  }
LAB_00113e10:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
/* MethodBindTR<AABB>::~MethodBindTR() */

void __thiscall MethodBindTR<AABB>::~MethodBindTR(MethodBindTR<AABB> *this)

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
/* MethodBindT<Vector<Vector3> const&, float, float, bool>::~MethodBindT() */

void __thiscall
MethodBindT<Vector<Vector3>const&,float,float,bool>::~MethodBindT
          (MethodBindT<Vector<Vector3>const&,float,float,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Ref<NavigationMeshSourceGeometryData3D> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<NavigationMeshSourceGeometryData3D>const&>::~MethodBindT
          (MethodBindT<Ref<NavigationMeshSourceGeometryData3D>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Vector<Vector3> const&, Transform3D const&>::~MethodBindT() */

void __thiscall
MethodBindT<Vector<Vector3>const&,Transform3D_const&>::~MethodBindT
          (MethodBindT<Vector<Vector3>const&,Transform3D_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Array const&, Transform3D const&>::~MethodBindT() */

void __thiscall
MethodBindT<Array_const&,Transform3D_const&>::~MethodBindT
          (MethodBindT<Array_const&,Transform3D_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Ref<Mesh> const&, Transform3D const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<Mesh>const&,Transform3D_const&>::~MethodBindT
          (MethodBindT<Ref<Mesh>const&,Transform3D_const&> *this)

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
/* MethodBindT<Vector<float> const&, Vector<int> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Vector<float>const&,Vector<int>const&>::~MethodBindT
          (MethodBindT<Vector<float>const&,Vector<int>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Vector<int> const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Vector<int>const&>::~MethodBindTRC(MethodBindTRC<Vector<int>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Vector<int> const&>::~MethodBindT() */

void __thiscall MethodBindT<Vector<int>const&>::~MethodBindT(MethodBindT<Vector<int>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Vector<float> const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Vector<float>const&>::~MethodBindTRC(MethodBindTRC<Vector<float>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Vector<float> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Vector<float>const&>::~MethodBindT(MethodBindT<Vector<float>const&> *this)

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


