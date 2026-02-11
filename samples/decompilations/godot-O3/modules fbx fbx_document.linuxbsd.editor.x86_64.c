
/* FBXDocument::generate_buffer(Ref<GLTFState>) */

long FBXDocument::generate_buffer(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}



/* FBXDocument::write_to_filesystem(Ref<GLTFState>, String const&) */

undefined8 FBXDocument::write_to_filesystem(void)

{
  return 2;
}



/* FBXDocument::append_from_scene(Node*, Ref<GLTFState>, unsigned int) */

undefined8 FBXDocument::append_from_scene(void)

{
  return 2;
}



/* CowData<Vector2>::_realloc(long) [clone .part.0] */

undefined8 CowData<Vector2>::_realloc(long param_1)

{
  _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,"Parameter \"mem_new\" is null.",0,
                   0);
  return 6;
}



/* CowData<Quaternion>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Quaternion>::_copy_on_write(CowData<Quaternion> *this)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar7 = *(long *)(*(long *)this + -8);
  uVar9 = 0x10;
  lVar8 = lVar7 * 0x10;
  if (lVar8 != 0) {
    uVar9 = lVar8 - 1U | lVar8 - 1U >> 1;
    uVar9 = uVar9 | uVar9 >> 2;
    uVar9 = uVar9 | uVar9 >> 4;
    uVar9 = uVar9 | uVar9 >> 8;
    uVar9 = uVar9 | uVar9 >> 0x10;
    uVar9 = (uVar9 | uVar9 >> 0x20) + 0x11;
  }
  puVar6 = (undefined8 *)Memory::alloc_static(uVar9,false);
  if (puVar6 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  *puVar6 = 1;
  puVar6[1] = lVar7;
  lVar3 = *(long *)this;
  if (lVar7 == 0) {
    if (lVar3 == 0) goto LAB_0010029f;
  }
  else {
    lVar7 = 0;
    do {
      uVar5 = ((undefined8 *)(lVar3 + lVar7))[1];
      puVar2 = (undefined8 *)((long)puVar6 + lVar7 + 0x10);
      *puVar2 = *(undefined8 *)(lVar3 + lVar7);
      puVar2[1] = uVar5;
      lVar7 = lVar7 + 0x10;
    } while (lVar8 != lVar7);
  }
  LOCK();
  plVar1 = (long *)(lVar3 + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    lVar7 = *(long *)this;
    *(undefined8 *)this = 0;
    Memory::free_static((void *)(lVar7 + -0x10),false);
  }
LAB_0010029f:
  *(undefined8 **)this = puVar6 + 2;
  return;
}



/* CowData<Transform3D>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Transform3D>::_copy_on_write(CowData<Transform3D> *this)

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
  __n = lVar2 * 0x30;
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



/* HashMap<int, Node*, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, Node*> > >::_lookup_pos(int const&, unsigned int&)
   const [clone .isra.0] */

undefined8 __thiscall
HashMap<int,Node*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Node*>>>
::_lookup_pos(HashMap<int,Node*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Node*>>>
              *this,int *param_1,uint *param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  
  if ((*(long *)(this + 8) == 0) || (*(int *)(this + 0x2c) == 0)) {
    return 0;
  }
  uVar1 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar10 = ((uint)((ulong)param_1 >> 0x10) & 0xffff ^ (uint)param_1) * -0x7a143595;
  uVar10 = (uVar10 ^ uVar10 >> 0xd) * -0x3d4d51cb;
  uVar14 = uVar10 ^ uVar10 >> 0x10;
  if (uVar10 == uVar10 >> 0x10) {
    uVar14 = 1;
    uVar12 = uVar1;
  }
  else {
    uVar12 = uVar14 * uVar1;
  }
  uVar15 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4));
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar15;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar12;
  lVar13 = SUB168(auVar2 * auVar6,8);
  uVar10 = *(uint *)(*(long *)(this + 0x10) + lVar13 * 4);
  uVar11 = SUB164(auVar2 * auVar6,8);
  if (uVar10 != 0) {
    uVar16 = 0;
    do {
      if ((uVar14 == uVar10) &&
         (*(uint *)(*(long *)(*(long *)(this + 8) + lVar13 * 8) + 0x10) == (uint)param_1)) {
        *param_2 = uVar11;
        return 1;
      }
      uVar16 = uVar16 + 1;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (uVar11 + 1) * uVar1;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar15;
      lVar13 = SUB168(auVar3 * auVar7,8);
      uVar10 = *(uint *)(*(long *)(this + 0x10) + lVar13 * 4);
      uVar11 = SUB164(auVar3 * auVar7,8);
    } while ((uVar10 != 0) &&
            (auVar4._8_8_ = 0, auVar4._0_8_ = uVar10 * uVar1, auVar8._8_8_ = 0,
            auVar8._0_8_ = uVar15, auVar5._8_8_ = 0,
            auVar5._0_8_ = ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4) +
                            uVar11) - SUB164(auVar4 * auVar8,8)) * uVar1, auVar9._8_8_ = 0,
            auVar9._0_8_ = uVar15, uVar16 <= SUB164(auVar5 * auVar9,8)));
  }
  return 0;
}



/* Ref<Material>::TEMPNAMEPLACEHOLDERVALUE(Ref<Material> const&) [clone .isra.0] */

void __thiscall Ref<Material>::operator=(Ref<Material> *this,Ref *param_1)

{
  Object *pOVar1;
  char cVar2;
  
  pOVar1 = *(Object **)this;
  if (pOVar1 != (Object *)param_1) {
    *(Ref **)this = param_1;
    if (param_1 != (Ref *)0x0) {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *(undefined8 *)this = 0;
      }
    }
    if (pOVar1 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(pOVar1);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
          return;
        }
      }
    }
  }
  return;
}



/* Ref<GLTFMesh>::TEMPNAMEPLACEHOLDERVALUE(Ref<GLTFMesh> const&) [clone .isra.0] */

void __thiscall Ref<GLTFMesh>::operator=(Ref<GLTFMesh> *this,Ref *param_1)

{
  Object *pOVar1;
  char cVar2;
  
  pOVar1 = *(Object **)this;
  if (pOVar1 != (Object *)param_1) {
    *(Ref **)this = param_1;
    if (param_1 != (Ref *)0x0) {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *(undefined8 *)this = 0;
      }
    }
    if (pOVar1 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(pOVar1);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
          return;
        }
      }
    }
  }
  return;
}



/* Ref<GLTFSkin>::TEMPNAMEPLACEHOLDERVALUE(Ref<GLTFSkin> const&) [clone .isra.0] */

void __thiscall Ref<GLTFSkin>::operator=(Ref<GLTFSkin> *this,Ref *param_1)

{
  Object *pOVar1;
  char cVar2;
  
  pOVar1 = *(Object **)this;
  if (pOVar1 != (Object *)param_1) {
    *(Ref **)this = param_1;
    if (param_1 != (Ref *)0x0) {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *(undefined8 *)this = 0;
      }
    }
    if (pOVar1 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(pOVar1);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
          return;
        }
      }
    }
  }
  return;
}



/* Ref<Texture2D>::TEMPNAMEPLACEHOLDERVALUE(Ref<Texture2D> const&) [clone .isra.0] */

void __thiscall Ref<Texture2D>::operator=(Ref<Texture2D> *this,Ref *param_1)

{
  Object *pOVar1;
  char cVar2;
  
  pOVar1 = *(Object **)this;
  if (pOVar1 != (Object *)param_1) {
    *(Ref **)this = param_1;
    if (param_1 != (Ref *)0x0) {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *(undefined8 *)this = 0;
      }
    }
    if (pOVar1 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(pOVar1);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
          return;
        }
      }
    }
  }
  return;
}



/* Ref<GLTFNode>::TEMPNAMEPLACEHOLDERVALUE(Ref<GLTFNode> const&) [clone .isra.0] */

void __thiscall Ref<GLTFNode>::operator=(Ref<GLTFNode> *this,Ref *param_1)

{
  Object *pOVar1;
  char cVar2;
  
  pOVar1 = *(Object **)this;
  if (pOVar1 != (Object *)param_1) {
    *(Ref **)this = param_1;
    if (param_1 != (Ref *)0x0) {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *(undefined8 *)this = 0;
      }
    }
    if (pOVar1 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(pOVar1);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
          return;
        }
      }
    }
  }
  return;
}



/* Ref<FBXState>::TEMPNAMEPLACEHOLDERVALUE(Ref<FBXState> const&) [clone .isra.0] */

void __thiscall Ref<FBXState>::operator=(Ref<FBXState> *this,Ref *param_1)

{
  Object *pOVar1;
  char cVar2;
  
  pOVar1 = *(Object **)this;
  if (pOVar1 != (Object *)param_1) {
    *(Ref **)this = param_1;
    if (param_1 != (Ref *)0x0) {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *(undefined8 *)this = 0;
      }
    }
    if (pOVar1 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(pOVar1);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
          return;
        }
      }
    }
  }
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



/* CowData<unsigned int>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<unsigned_int>::_copy_on_write(CowData<unsigned_int> *this)

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



/* List<PropertyInfo, DefaultAllocator>::push_back(PropertyInfo const&) [clone .isra.0] */

void __thiscall
List<PropertyInfo,DefaultAllocator>::push_back
          (List<PropertyInfo,DefaultAllocator> *this,PropertyInfo *param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined1 (*pauVar4) [16];
  
  if (*(long *)this == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])this = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar3 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  lVar2 = *(long *)(param_1 + 8);
  *puVar3 = 0;
  puVar3[6] = 0;
  puVar3[10] = 6;
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar3 + 0xc) = (undefined1  [16])0x0;
  *puVar3 = *(undefined4 *)param_1;
  if (lVar2 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 2),(CowData *)(param_1 + 8));
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)(param_1 + 0x10));
  puVar3[6] = *(undefined4 *)(param_1 + 0x18);
  if (*(long *)(puVar3 + 8) != *(long *)(param_1 + 0x20)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)(param_1 + 0x20));
  }
  puVar3[10] = *(undefined4 *)(param_1 + 0x28);
  plVar1 = *(long **)this;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar3 + 0xc) = 0;
  *(long **)(puVar3 + 0x10) = plVar1;
  *(long *)(puVar3 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar3;
  }
  plVar1[1] = (long)puVar3;
  if (*plVar1 != 0) {
    *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
    return;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  *plVar1 = (long)puVar3;
  return;
}



/* FBXDocument::_sanitize_animation_name(String const&) */

String * FBXDocument::_sanitize_animation_name(String *param_1)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined8 local_28;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  String::validate_node_name();
  AnimationLibrary::validate_library_name(param_1);
  if (local_28 != 0) {
    LOCK();
    plVar1 = (long *)(local_28 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_28 + -0x10),false);
    }
  }
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FBXDocument::_as_vec3(ufbx_vec3 const&) */

undefined1  [16] FBXDocument::_as_vec3(ufbx_vec3 *param_1)

{
  long in_FS_OFFSET;
  undefined1 auVar1 [16];
  
  auVar1._8_4_ = (float)*(double *)(param_1 + 0x10);
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar1._0_4_ = (float)*(double *)param_1;
    auVar1._4_4_ = (float)*(double *)(param_1 + 8);
    auVar1._12_4_ = 0;
    return auVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FBXDocument::_as_string(ufbx_string const&) */

FBXDocument * __thiscall FBXDocument::_as_string(FBXDocument *this,ufbx_string *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  String::utf8((char *)this,(int)*(undefined8 *)param_1);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FBXDocument::_as_xform(ufbx_matrix const&) */

FBXDocument * __thiscall FBXDocument::_as_xform(FBXDocument *this,ufbx_matrix *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  dVar1 = *(double *)(param_1 + 0x10);
  dVar2 = *(double *)(param_1 + 0x18);
  dVar3 = *(double *)(param_1 + 0x48);
  dVar4 = *(double *)(param_1 + 0x50);
  dVar5 = *(double *)(param_1 + 0x58);
  dVar6 = *(double *)param_1;
  dVar7 = *(double *)(param_1 + 8);
  dVar8 = *(double *)(param_1 + 0x20);
  dVar9 = *(double *)(param_1 + 0x28);
  dVar10 = *(double *)(param_1 + 0x30);
  dVar11 = *(double *)(param_1 + 0x38);
  *(float *)(this + 0x20) = (float)*(double *)(param_1 + 0x40);
  *(float *)(this + 0x24) = (float)dVar3;
  *(float *)(this + 0x28) = (float)dVar4;
  *(float *)(this + 0x2c) = (float)dVar5;
  *(float *)this = (float)dVar6;
  *(float *)(this + 4) = (float)dVar2;
  *(float *)(this + 8) = (float)dVar10;
  *(float *)(this + 0xc) = (float)dVar7;
  *(float *)(this + 0x10) = (float)dVar8;
  *(float *)(this + 0x14) = (float)dVar11;
  *(float *)(this + 0x18) = (float)dVar1;
  *(float *)(this + 0x1c) = (float)dVar9;
  return this;
}



/* FBXDocument::_gen_unique_name(HashSet<String, HashMapHasherDefault,
   HashMapComparatorDefault<String> >&, String const&) */

HashSet * FBXDocument::_gen_unique_name(HashSet *param_1,String *param_2)

{
  long *plVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  ulong uVar11;
  char cVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  long in_FS_OFFSET;
  long local_88;
  long local_60;
  long local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  String::validate_node_name();
  *(undefined8 *)param_1 = 0;
  lVar14 = 0;
  local_88 = 1;
LAB_00100ff0:
  if (local_60 != lVar14) {
    CowData<char32_t>::_ref((CowData<char32_t> *)param_1,(CowData *)&local_60);
  }
  if (local_88 != 1) {
    itos((long)local_58);
    String::operator+=((String *)param_1,(String *)local_58);
    lVar14 = local_58[0];
    if (local_58[0] != 0) {
      LOCK();
      plVar1 = (long *)(local_58[0] + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58[0] = 0;
        Memory::free_static((void *)(lVar14 + -0x10),false);
      }
    }
  }
  if ((*(long *)param_2 != 0) && (*(int *)(param_2 + 0x24) != 0)) {
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x20) * 4);
    lVar14 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x20) * 8);
    uVar13 = String::hash();
    uVar11 = CONCAT44(0,uVar2);
    lVar18 = *(long *)(param_2 + 0x18);
    uVar15 = 1;
    if (uVar13 != 0) {
      uVar15 = uVar13;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar15 * lVar14;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar11;
    lVar17 = SUB168(auVar3 * auVar7,8);
    uVar13 = *(uint *)(lVar18 + lVar17 * 4);
    if (uVar13 != 0) {
      uVar19 = 0;
      iVar16 = SUB164(auVar3 * auVar7,8);
      do {
        if (uVar15 == uVar13) {
          cVar12 = String::operator==((String *)
                                      (*(long *)param_2 +
                                      (ulong)*(uint *)(*(long *)(param_2 + 8) + lVar17 * 4) * 8),
                                      (String *)param_1);
          if (cVar12 != '\0') goto LAB_00101167;
          lVar18 = *(long *)(param_2 + 0x18);
        }
        uVar19 = uVar19 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(iVar16 + 1) * lVar14;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar11;
        lVar17 = SUB168(auVar4 * auVar8,8);
        uVar13 = *(uint *)(lVar18 + lVar17 * 4);
        iVar16 = SUB164(auVar4 * auVar8,8);
        if ((uVar13 == 0) ||
           (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar13 * lVar14, auVar9._8_8_ = 0,
           auVar9._0_8_ = uVar11, auVar6._8_8_ = 0,
           auVar6._0_8_ = (ulong)((uVar2 + iVar16) - SUB164(auVar5 * auVar9,8)) * lVar14,
           auVar10._8_8_ = 0, auVar10._0_8_ = uVar11, SUB164(auVar6 * auVar10,8) < uVar19)) break;
      } while( true );
    }
  }
  HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert((String *)local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
LAB_00101167:
  local_88 = local_88 + 1;
  lVar14 = *(long *)param_1;
  goto LAB_00100ff0;
}



/* FBXDocument::_assign_node_names(Ref<FBXState>) */

void __thiscall FBXDocument::_assign_node_names(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  char *pcVar5;
  char cVar6;
  String *pSVar7;
  long lVar8;
  long in_FS_OFFSET;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  lVar8 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = *(long *)(*param_2 + 0x2a8);
  do {
    if ((lVar2 == 0) || (*(long *)(lVar2 + -8) <= lVar8)) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pSVar7 = *(String **)(lVar2 + lVar8 * 8);
    if (pSVar7 == (String *)0x0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    cVar6 = RefCounted::reference();
    if (cVar6 == '\0') {
      pSVar7 = (String *)0x0;
    }
    if (*(int *)(pSVar7 + 0x28c) < 0) {
      Resource::get_name();
      pcVar5 = local_58;
      if (local_58 == (char *)0x0) {
LAB_00101239:
        if (*(int *)(pSVar7 + 0x280) < 0) {
          if (*(int *)(pSVar7 + 0x284) < 0) {
            local_58 = "Node";
            goto LAB_0010145e;
          }
          local_50 = 8;
          local_58 = "Camera3D";
        }
        else {
          local_58 = "Mesh";
LAB_0010145e:
          local_50 = 4;
        }
        local_60 = 0;
        String::parse_latin1((StrRange *)&local_60);
        _gen_unique_name((HashSet *)&local_58,(String *)(*param_2 + 0x3f0));
        Resource::set_name(pSVar7);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      }
      else {
        uVar3 = *(undefined8 *)(local_58 + -8);
        if ((int)uVar3 == 0) {
          LOCK();
          plVar1 = (long *)(local_58 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_58 = (char *)0x0;
            Memory::free_static(pcVar5 + -0x10,false);
          }
          goto LAB_00101239;
        }
        LOCK();
        plVar1 = (long *)(local_58 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
        if ((int)uVar3 == 1) goto LAB_00101239;
      }
      Resource::get_name();
      _gen_unique_name((HashSet *)&local_58,(String *)(*param_2 + 0x3f0));
      Resource::set_name(pSVar7);
      pcVar5 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_58 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
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
    }
    cVar6 = RefCounted::unreference();
    if ((cVar6 != '\0') && (cVar6 = predelete_handler((Object *)pSVar7), cVar6 != '\0')) {
      (**(code **)(*(long *)pSVar7 + 0x140))(pSVar7);
      Memory::free_static(pSVar7,false);
    }
    lVar8 = lVar8 + 1;
    lVar2 = *(long *)(*param_2 + 0x2a8);
  } while( true );
}



/* FBXDocument::_gen_unique_animation_name(Ref<FBXState>, String const&) */

FBXDocument * __thiscall
FBXDocument::_gen_unique_animation_name(FBXDocument *this,undefined8 param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  ulong uVar12;
  char cVar13;
  uint uVar14;
  long lVar15;
  uint uVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  uint uVar21;
  long in_FS_OFFSET;
  long local_60;
  long local_58 [3];
  long local_40;
  
  lVar20 = 1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  String::validate_node_name();
  AnimationLibrary::validate_library_name((String *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  *(undefined8 *)this = 0;
  lVar15 = 0;
LAB_00101500:
  if (local_60 != lVar15) {
    CowData<char32_t>::_ref((CowData<char32_t> *)this,(CowData *)&local_60);
  }
  if (lVar20 != 1) {
    itos((long)local_58);
    String::operator+=((String *)this,(String *)local_58);
    lVar15 = local_58[0];
    if (local_58[0] != 0) {
      LOCK();
      plVar1 = (long *)(local_58[0] + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58[0] = 0;
        Memory::free_static((void *)(lVar15 + -0x10),false);
      }
    }
  }
  lVar15 = *param_3;
  if ((*(long *)(lVar15 + 0x418) != 0) && (*(int *)(lVar15 + 0x43c) != 0)) {
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar15 + 0x438) * 4);
    lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar15 + 0x438) * 8);
    uVar14 = String::hash();
    uVar12 = CONCAT44(0,uVar2);
    uVar16 = 1;
    if (uVar14 != 0) {
      uVar16 = uVar14;
    }
    lVar19 = *(long *)(lVar15 + 0x430);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (ulong)uVar16 * lVar3;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar12;
    lVar18 = SUB168(auVar4 * auVar8,8);
    uVar14 = *(uint *)(lVar19 + lVar18 * 4);
    if (uVar14 != 0) {
      uVar21 = 0;
      iVar17 = SUB164(auVar4 * auVar8,8);
      do {
        if (uVar14 == uVar16) {
          cVar13 = String::operator==((String *)
                                      (*(long *)(lVar15 + 0x418) +
                                      (ulong)*(uint *)(*(long *)(lVar15 + 0x420) + lVar18 * 4) * 8),
                                      (String *)this);
          if (cVar13 != '\0') goto LAB_001016d5;
          lVar19 = *(long *)(lVar15 + 0x430);
        }
        uVar21 = uVar21 + 1;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)(iVar17 + 1) * lVar3;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar12;
        lVar18 = SUB168(auVar5 * auVar9,8);
        uVar14 = *(uint *)(lVar19 + lVar18 * 4);
        iVar17 = SUB164(auVar5 * auVar9,8);
        if ((uVar14 == 0) ||
           (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar14 * lVar3, auVar10._8_8_ = 0,
           auVar10._0_8_ = uVar12, auVar7._8_8_ = 0,
           auVar7._0_8_ = (ulong)((uVar2 + iVar17) - SUB164(auVar6 * auVar10,8)) * lVar3,
           auVar11._8_8_ = 0, auVar11._0_8_ = uVar12, SUB164(auVar7 * auVar11,8) < uVar21)) break;
      } while( true );
    }
  }
  HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert((String *)local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
LAB_001016d5:
  lVar20 = lVar20 + 1;
  lVar15 = *(long *)this;
  goto LAB_00101500;
}



/* Resource::initialize_class() [clone .part.0] */

void Resource::initialize_class(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
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
    if ((code *)PTR__bind_methods_00137008 != RefCounted::_bind_methods) {
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
  initialize_class()::initialized = 1;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* FBXDocument::_generate_spatial(Ref<FBXState>, int) */

Node3D * __thiscall FBXDocument::_generate_spatial(undefined8 param_1,long *param_2,int param_3)

{
  long lVar1;
  code *pcVar2;
  char cVar3;
  Node3D *this;
  long lVar4;
  Object *pOVar5;
  long lVar6;
  long in_FS_OFFSET;
  CowData<char32_t> local_70 [8];
  CowData<char32_t> local_68 [8];
  Variant local_60 [8];
  int local_58 [6];
  long local_40;
  
  lVar4 = (long)param_3;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = *(long *)(*param_2 + 0x2a8);
  if (lVar4 < 0) {
    if (lVar1 != 0) {
      lVar6 = *(long *)(lVar1 + -8);
      goto LAB_00101ae9;
    }
  }
  else if (lVar1 != 0) {
    lVar6 = *(long *)(lVar1 + -8);
    if (lVar4 < lVar6) {
      pOVar5 = *(Object **)(lVar1 + lVar4 * 8);
      if (pOVar5 != (Object *)0x0) {
        cVar3 = RefCounted::reference();
        if (cVar3 == '\0') {
          pOVar5 = (Object *)0x0;
        }
      }
      this = (Node3D *)operator_new(0x528,"");
      Node3D::Node3D(this);
      postinitialize_handler((Object *)this);
      cVar3 = is_print_verbose_enabled();
      if (cVar3 != '\0') {
        Resource::get_name();
        operator+((char *)local_68,(String *)"FBX: Converting spatial: ");
        ::Variant::Variant((Variant *)local_58,(String *)local_68);
        stringify_variants(local_60);
        __print_line((String *)local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
        if (::Variant::needs_deinit[local_58[0]] != '\0') {
          ::Variant::_clear_internal();
        }
        CowData<char32_t>::_unref(local_68);
        CowData<char32_t>::_unref(local_70);
      }
      if (pOVar5 != (Object *)0x0) {
        cVar3 = RefCounted::unreference();
        if (cVar3 != '\0') {
          cVar3 = predelete_handler(pOVar5);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return this;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    goto LAB_00101ae9;
  }
  lVar6 = 0;
LAB_00101ae9:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar4,lVar6,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* FBXDocument::_generate_bone_attachment(Ref<FBXState>, Skeleton3D*, int, int) */

BoneAttachment3D * __thiscall
FBXDocument::_generate_bone_attachment
          (undefined8 param_1,long *param_2,undefined8 param_3,int param_4,int param_5)

{
  code *pcVar1;
  char cVar2;
  long lVar3;
  BoneAttachment3D *this;
  long lVar4;
  Object *pOVar5;
  Object *pOVar6;
  long lVar7;
  long in_FS_OFFSET;
  CowData<char32_t> local_70 [8];
  CowData<char32_t> local_68 [8];
  CowData<char32_t> local_60 [8];
  int local_58 [6];
  long local_40;
  
  lVar4 = (long)param_4;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = *(long *)(*param_2 + 0x2a8);
  if (lVar4 < 0) {
    if (lVar3 != 0) {
      lVar7 = *(long *)(lVar3 + -8);
      goto LAB_00101dd0;
    }
  }
  else if (lVar3 != 0) {
    lVar7 = *(long *)(lVar3 + -8);
    if (lVar7 <= lVar4) goto LAB_00101dd0;
    pOVar5 = *(Object **)(lVar3 + lVar4 * 8);
    lVar4 = (long)param_5;
    if (pOVar5 == (Object *)0x0) {
      if (lVar4 < 0) goto LAB_00101dd0;
LAB_00101be4:
      lVar7 = *(long *)(lVar3 + -8);
      if (lVar4 < lVar7) {
        pOVar6 = *(Object **)(lVar3 + lVar4 * 8);
        if ((pOVar6 != (Object *)0x0) && (cVar2 = RefCounted::reference(), cVar2 == '\0')) {
          pOVar6 = (Object *)0x0;
        }
        this = (BoneAttachment3D *)operator_new(0x558,"");
        BoneAttachment3D::BoneAttachment3D(this);
        postinitialize_handler((Object *)this);
        cVar2 = is_print_verbose_enabled();
        if (cVar2 != '\0') {
          Resource::get_name();
          operator+((char *)local_68,(String *)"FBX: Creating bone attachment for: ");
          ::Variant::Variant((Variant *)local_58,(String *)local_68);
          stringify_variants((Variant *)local_60);
          __print_line((String *)local_60);
          CowData<char32_t>::_unref(local_60);
          if (::Variant::needs_deinit[local_58[0]] != '\0') {
            ::Variant::_clear_internal();
          }
          CowData<char32_t>::_unref(local_68);
          CowData<char32_t>::_unref(local_70);
        }
        if (pOVar6[0x290] == (Object)0x0) {
          this = (BoneAttachment3D *)0x0;
          _err_print_error("_generate_bone_attachment","modules/fbx/fbx_document.cpp",0x5c9,
                           "Condition \"!bone_node->joint\" is true. Returning: nullptr",0,0);
        }
        else {
          Resource::get_name();
          BoneAttachment3D::set_bone_name((String *)this);
          CowData<char32_t>::_unref(local_60);
        }
        cVar2 = RefCounted::unreference();
        if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar6), cVar2 != '\0')) {
          (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
          Memory::free_static(pOVar6,false);
        }
        if (((pOVar5 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
           (cVar2 = predelete_handler(pOVar5), cVar2 != '\0')) {
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          Memory::free_static(pOVar5,false);
        }
        if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return this;
      }
    }
    else {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        pOVar5 = (Object *)0x0;
      }
      lVar3 = *(long *)(*param_2 + 0x2a8);
      if (param_5 < 0) {
        if (lVar3 != 0) {
          lVar7 = *(long *)(lVar3 + -8);
          goto LAB_00101dd0;
        }
      }
      else if (lVar3 != 0) goto LAB_00101be4;
      lVar7 = 0;
    }
    goto LAB_00101dd0;
  }
  lVar7 = 0;
LAB_00101dd0:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar4,lVar7,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* FBXDocument::_generate_camera(Ref<FBXState>, int) */

undefined8 __thiscall FBXDocument::_generate_camera(undefined8 param_1,long *param_2,int param_3)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  Object *pOVar7;
  Object *pOVar8;
  long lVar9;
  long in_FS_OFFSET;
  CowData<char32_t> local_70 [8];
  CowData<char32_t> local_68 [8];
  Variant local_60 [8];
  int local_58 [6];
  long local_40;
  
  lVar6 = (long)param_3;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar5 = *(long *)(*param_2 + 0x2a8);
  if (lVar6 < 0) {
LAB_00102068:
    if (lVar5 != 0) {
      lVar9 = *(long *)(lVar5 + -8);
      goto LAB_00102075;
    }
  }
  else if (lVar5 != 0) {
    lVar9 = *(long *)(lVar5 + -8);
    if (lVar9 <= lVar6) goto LAB_00102075;
    pOVar7 = *(Object **)(lVar5 + lVar6 * 8);
    if (pOVar7 == (Object *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    cVar3 = RefCounted::reference();
    if (cVar3 == '\0') {
      pOVar7 = (Object *)0x0;
    }
    iVar1 = *(int *)(pOVar7 + 0x284);
    lVar5 = *(long *)(*param_2 + 0x3d8);
    if (iVar1 < 0) {
      if (lVar5 == 0) goto LAB_00102180;
      lVar5 = *(long *)(lVar5 + -8);
    }
    else if (lVar5 == 0) {
LAB_00102180:
      lVar5 = 0;
    }
    else {
      lVar5 = *(long *)(lVar5 + -8);
      if (iVar1 < lVar5) {
        cVar3 = is_print_verbose_enabled();
        if (cVar3 != '\0') {
          Resource::get_name();
          operator+((char *)local_68,(String *)"FBX: Creating camera for: ");
          ::Variant::Variant((Variant *)local_58,(String *)local_68);
          stringify_variants(local_60);
          __print_line((String *)local_60);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
          if (::Variant::needs_deinit[local_58[0]] != '\0') {
            ::Variant::_clear_internal();
          }
          CowData<char32_t>::_unref(local_68);
          CowData<char32_t>::_unref(local_70);
        }
        lVar6 = (long)*(int *)(pOVar7 + 0x284);
        lVar5 = *(long *)(*param_2 + 0x3d8);
        if (lVar6 < 0) goto LAB_00102068;
        if (lVar5 != 0) {
          lVar9 = *(long *)(lVar5 + -8);
          if (lVar9 <= lVar6) goto LAB_00102075;
          pOVar8 = *(Object **)(lVar5 + lVar6 * 8);
          if ((pOVar8 != (Object *)0x0) && (cVar3 = RefCounted::reference(), cVar3 == '\0')) {
            pOVar8 = (Object *)0x0;
          }
          uVar4 = GLTFCamera::to_node();
          cVar3 = RefCounted::unreference();
          if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar8), cVar3 != '\0')) {
            (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
            Memory::free_static(pOVar8,false);
          }
          cVar3 = RefCounted::unreference();
          goto joined_r0x00102139;
        }
        goto LAB_00102170;
      }
    }
    uVar4 = 0;
    _err_print_index_error
              ("_generate_camera","modules/fbx/fbx_document.cpp",0x5e8,(long)iVar1,lVar5,
               "fbx_node->camera","p_state->cameras.size()","",false,false);
    cVar3 = RefCounted::unreference();
joined_r0x00102139:
    if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar7), cVar3 != '\0')) {
      (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
      Memory::free_static(pOVar7,false);
    }
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return uVar4;
  }
LAB_00102170:
  lVar9 = 0;
LAB_00102075:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar6,lVar9,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FBXDocument::_generate_light(Ref<FBXState>, int) */

String * __thiscall
FBXDocument::_generate_light
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4,int param_5)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  String *this;
  Transform3D *pTVar4;
  Transform3D *pTVar5;
  long lVar6;
  Variant *pVVar7;
  long lVar8;
  Object *pOVar9;
  long lVar10;
  Object *pOVar11;
  long in_FS_OFFSET;
  float fVar12;
  float fVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  CowData<char32_t> local_90 [8];
  Variant local_88 [8];
  long local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  long local_40;
  undefined8 extraout_XMM0_Qb;
  
  lVar8 = (long)param_5;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar6 = *(long *)(*param_4 + 0x2a8);
  if (lVar8 < 0) {
LAB_00102628:
    if (lVar6 != 0) {
      lVar10 = *(long *)(lVar6 + -8);
      goto LAB_00102635;
    }
  }
  else if (lVar6 != 0) {
    lVar10 = *(long *)(lVar6 + -8);
    if (lVar10 <= lVar8) goto LAB_00102635;
    pOVar11 = *(Object **)(lVar6 + lVar8 * 8);
    if (pOVar11 == (Object *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    cVar3 = RefCounted::reference();
    if (cVar3 == '\0') {
      pOVar11 = (Object *)0x0;
    }
    iVar1 = *(int *)(pOVar11 + 0x2a8);
    lVar6 = *(long *)(*param_4 + 1000);
    if (iVar1 < 0) {
      if (lVar6 == 0) goto LAB_001028e8;
      lVar6 = *(long *)(lVar6 + -8);
    }
    else {
      if (lVar6 != 0) {
        lVar6 = *(long *)(lVar6 + -8);
        if (lVar6 <= iVar1) goto LAB_0010283d;
        cVar3 = is_print_verbose_enabled();
        if (cVar3 != '\0') {
          Resource::get_name();
          operator+((char *)local_88,(String *)"FBX: Creating light for: ");
          ::Variant::Variant((Variant *)local_78,(String *)local_88);
          stringify_variants((Variant *)&local_80);
          __print_line((String *)&local_80);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
          if (::Variant::needs_deinit[(int)local_78._0_4_] != '\0') {
            ::Variant::_clear_internal();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
          CowData<char32_t>::_unref(local_90);
        }
        lVar8 = (long)*(int *)(pOVar11 + 0x2a8);
        lVar6 = *(long *)(*param_4 + 1000);
        if (lVar8 < 0) goto LAB_00102628;
        if (lVar6 == 0) goto LAB_001028b8;
        lVar10 = *(long *)(lVar6 + -8);
        if (lVar10 <= lVar8) goto LAB_00102635;
        pOVar9 = *(Object **)(lVar6 + lVar8 * 8);
        if ((pOVar9 != (Object *)0x0) && (cVar3 = RefCounted::reference(), cVar3 == '\0')) {
          pOVar9 = (Object *)0x0;
        }
        GLTFLight::get_light_type();
        cVar3 = String::operator==((String *)&local_80,"point");
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
        if (cVar3 == '\0') {
          GLTFLight::get_light_type();
          cVar3 = String::operator==((String *)&local_80,"directional");
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
          if (cVar3 != '\0') {
            this = (String *)operator_new(0x628,"");
            DirectionalLight3D::DirectionalLight3D((DirectionalLight3D *)this);
            postinitialize_handler((Object *)this);
            goto LAB_001022fe;
          }
          GLTFLight::get_light_type();
          cVar3 = String::operator==((String *)&local_80,"spot");
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
          if (cVar3 != '\0') {
            this = (String *)operator_new(0x618,"");
            SpotLight3D::SpotLight3D((SpotLight3D *)this);
            postinitialize_handler((Object *)this);
            goto LAB_001022fe;
          }
          this = (String *)0x0;
          _err_print_error("_generate_light","modules/fbx/fbx_document.cpp",0x601,
                           "Parameter \"light\" is null.",0,0);
        }
        else {
          this = (String *)operator_new(0x620,"");
          OmniLight3D::OmniLight3D((OmniLight3D *)this);
          postinitialize_handler((Object *)this);
LAB_001022fe:
          Resource::get_name();
          Node::set_name(this);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
          local_78._0_8_ = GLTFLight::get_color();
          local_78._8_8_ = param_2;
          Light3D::set_color((Color *)this);
          GLTFLight::get_intensity();
          Light3D::set_param(this,0);
          StringName::StringName((StringName *)&local_80,"GODOT_fbx_light",false);
          GLTFLight::get_additional_data((StringName *)local_78);
          ::Variant::operator_cast_to_Dictionary(local_88);
          if (::Variant::needs_deinit[(int)local_78._0_4_] != '\0') {
            ::Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (local_80 != 0)) {
            StringName::unref();
          }
          ::Variant::Variant((Variant *)local_78,"castShadows");
          cVar3 = Dictionary::has(local_88);
          if (::Variant::needs_deinit[(int)local_78._0_4_] != '\0') {
            ::Variant::_clear_internal();
          }
          if (cVar3 != '\0') {
            ::Variant::Variant((Variant *)local_78,"castShadows");
            pVVar7 = (Variant *)Dictionary::operator[](local_88);
            ::Variant::operator_cast_to_bool(pVVar7);
            Light3D::set_shadow(SUB81(this,0));
            if (::Variant::needs_deinit[(int)local_78._0_4_] != '\0') {
              ::Variant::_clear_internal();
            }
          }
          ::Variant::Variant((Variant *)local_78,"castLight");
          cVar3 = Dictionary::has(local_88);
          if (::Variant::needs_deinit[(int)local_78._0_4_] != '\0') {
            ::Variant::_clear_internal();
          }
          if (cVar3 != '\0') {
            ::Variant::Variant((Variant *)local_78,"castLight");
            pVVar7 = (Variant *)Dictionary::operator[](local_88);
            ::Variant::operator_cast_to_bool(pVVar7);
            Node3D::set_visible(SUB81(this,0));
            if (::Variant::needs_deinit[(int)local_78._0_4_] != '\0') {
              ::Variant::_clear_internal();
            }
          }
          local_58 = 0x3f800000;
          local_78 = ZEXT416((uint)_LC78);
          local_54 = 0;
          local_4c = 0;
          local_68 = local_78;
          pTVar4 = (Transform3D *)
                   __dynamic_cast(this,&Object::typeinfo,&DirectionalLight3D::typeinfo,0);
          pTVar5 = (Transform3D *)__dynamic_cast(this,&Object::typeinfo,&SpotLight3D::typeinfo,0);
          lVar6 = __dynamic_cast(this,&Object::typeinfo,&OmniLight3D::typeinfo,0);
          if (pTVar4 == (Transform3D *)0x0) {
            if (pTVar5 == (Transform3D *)0x0) {
              pTVar4 = (Transform3D *)0x0;
              goto LAB_001024bd;
            }
            Node3D::set_transform(pTVar5);
            auVar15._0_8_ = GLTFLight::get_outer_cone_angle();
            auVar15._8_8_ = extraout_XMM0_Qb;
            auVar16._4_12_ = auVar15._4_12_;
            auVar16._0_4_ = (float)auVar15._0_8_ * __LC79;
            Light3D::set_param(auVar16._0_8_,pTVar5,7);
            Light3D::set_param(this,4);
LAB_001026c5:
            fVar12 = (float)GLTFLight::get_inner_cone_angle();
            fVar13 = (float)GLTFLight::get_outer_cone_angle();
            dVar14 = _LC81 / (double)(_LC78 - fVar12 / fVar13) - __LC82;
            Light3D::set_param(CONCAT44((int)((ulong)dVar14 >> 0x20),(float)dVar14),this);
          }
          else {
            Node3D::set_transform(pTVar4);
            pTVar4 = pTVar5;
LAB_001024bd:
            if ((pTVar4 != (Transform3D *)0x0 || lVar6 != 0) &&
               (Light3D::set_param(this), pTVar5 != (Transform3D *)0x0)) goto LAB_001026c5;
          }
          Dictionary::~Dictionary((Dictionary *)local_88);
        }
        cVar3 = RefCounted::unreference();
        if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar9), cVar3 != '\0')) {
          (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
          Memory::free_static(pOVar9,false);
        }
        cVar3 = RefCounted::unreference();
        goto joined_r0x00102880;
      }
LAB_001028e8:
      lVar6 = 0;
    }
LAB_0010283d:
    this = (String *)0x0;
    _err_print_index_error
              ("_generate_light","modules/fbx/fbx_document.cpp",0x5f3,(long)iVar1,lVar6,
               "fbx_node->light","p_state->lights.size()","",false,false);
    cVar3 = RefCounted::unreference();
joined_r0x00102880:
    if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar11), cVar3 != '\0')) {
      (**(code **)(*(long *)pOVar11 + 0x140))(pOVar11);
      Memory::free_static(pOVar11,false);
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return this;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_001028b8:
  lVar10 = 0;
LAB_00102635:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar10,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* CowData<Vector3>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Vector3>::_copy_on_write(CowData<Vector3> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  size_t __n;
  ulong uVar4;
  
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
  __n = lVar1 * 0xc;
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



/* Vector<Vector3>::push_back(Vector3) [clone .isra.0] */

void Vector<Vector3>::push_back(undefined8 param_1,undefined4 param_2,long param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  if (*(long *)(param_3 + 8) == 0) {
    lVar3 = 1;
  }
  else {
    lVar3 = *(long *)(*(long *)(param_3 + 8) + -8) + 1;
  }
  iVar2 = CowData<Vector3>::resize<false>((CowData<Vector3> *)(param_3 + 8),lVar3);
  if (iVar2 == 0) {
    if (*(long *)(param_3 + 8) == 0) {
      lVar4 = -1;
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(*(long *)(param_3 + 8) + -8);
      lVar4 = lVar3 + -1;
      if (-1 < lVar4) {
        CowData<Vector3>::_copy_on_write((CowData<Vector3> *)(param_3 + 8));
        puVar1 = (undefined8 *)(*(long *)(param_3 + 8) + lVar4 * 0xc);
        *puVar1 = param_1;
        *(undefined4 *)(puVar1 + 1) = param_2;
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar4,lVar3,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
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



/* FBXDocument::_process_uv_set(Vector<Vector2>&) */

void __thiscall FBXDocument::_process_uv_set(FBXDocument *this,Vector *param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  bool bVar6;
  
  lVar3 = *(long *)(param_1 + 8);
  if ((lVar3 == 0) || (iVar4 = (int)*(undefined8 *)(lVar3 + -8), iVar4 < 1)) {
    return;
  }
  uVar5 = 0;
  while (lVar3 != 0) {
    lVar3 = *(long *)(lVar3 + -8);
    if (lVar3 <= (long)uVar5) goto LAB_00102eb0;
    CowData<Vector2>::_copy_on_write((CowData<Vector2> *)(param_1 + 8));
    lVar3 = *(long *)(param_1 + 8);
    lVar1 = lVar3 + uVar5 * 8;
    *(float *)(lVar1 + 4) = _LC78 - *(float *)(lVar1 + 4);
    bVar6 = uVar5 == iVar4 - 1;
    uVar5 = uVar5 + 1;
    if (bVar6) {
      return;
    }
  }
  lVar3 = 0;
LAB_00102eb0:
  _err_print_index_error
            ("operator[]","./core/templates/vector.h",0x38,uVar5,lVar3,"p_index",
             "((Vector<T> *)(this))->_cowdata.size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
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



/* FBXDocument::_parse_scenes(Ref<FBXState>) */

undefined8 __thiscall FBXDocument::_parse_scenes(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_40 = 10;
  local_48 = "Skeleton3D";
  String::parse_latin1((StrRange *)&local_50);
  HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert((String *)&local_48)
  ;
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
  lVar2 = *(long *)(*param_2 + 0x558);
  local_48 = "";
  local_40 = 0;
  String::parse_latin1((StrRange *)(*param_2 + 0x340));
  lVar2 = *(long *)(lVar2 + 0x290);
  plVar3 = *(long **)(lVar2 + 0x88);
  plVar1 = plVar3 + *(long *)(lVar2 + 0x90);
  for (; plVar1 != plVar3; plVar3 = plVar3 + 1) {
    Vector<int>::push_back((Vector<int> *)(*param_2 + 0x348),*(int *)(*plVar3 + 0x34));
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
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



/* FBXDocument::_zero_unused_elements(Vector<float>&, int, int, int) */

void __thiscall
FBXDocument::_zero_unused_elements
          (FBXDocument *this,Vector *param_1,int param_2,int param_3,int param_4)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  
  if (param_2 < param_3) {
    do {
      if (0 < param_4) {
        lVar4 = *(long *)(param_1 + 8);
        while (lVar3 = (long)(param_4 * param_2), -1 < lVar3) {
          lVar1 = param_4 + lVar3;
          do {
            if (lVar4 == 0) goto LAB_0010361b;
            if (*(long *)(lVar4 + -8) <= lVar3) goto LAB_00103625;
            CowData<float>::_copy_on_write((CowData<float> *)(param_1 + 8));
            lVar4 = *(long *)(param_1 + 8);
            *(undefined4 *)(lVar4 + lVar3 * 4) = 0;
            lVar3 = lVar3 + 1;
          } while (lVar3 != lVar1);
          param_2 = param_2 + 1;
          if (param_3 <= param_2) {
            return;
          }
        }
        if (lVar4 == 0) {
LAB_0010361b:
          lVar4 = 0;
        }
        else {
LAB_00103625:
          lVar4 = *(long *)(lVar4 + -8);
        }
        _err_print_index_error
                  ("operator[]","./core/templates/vector.h",0x38,lVar3,lVar4,"p_index",
                   "((Vector<T> *)(this))->_cowdata.size()","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      param_2 = param_2 + 1;
    } while (param_2 < param_3);
  }
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



/* FBXDocument::_import_animation(Ref<FBXState>, AnimationPlayer*, int, bool, bool) */

void FBXDocument::_import_animation
               (undefined8 param_1,undefined4 param_2,undefined8 param_3,long *param_4,
               StringName *param_5,int param_6,char param_7,char param_8)

{
  undefined8 *puVar1;
  int iVar2;
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
  code *pcVar19;
  Object *pOVar20;
  StringName *pSVar21;
  char cVar22;
  bool bVar23;
  uint uVar24;
  uint uVar25;
  Animation *this;
  long lVar26;
  Variant *pVVar27;
  long lVar28;
  ulong uVar29;
  long lVar30;
  ulong uVar31;
  long lVar32;
  uint uVar33;
  long lVar34;
  uint uVar35;
  ulong uVar36;
  uint uVar37;
  ulong uVar38;
  long *plVar39;
  long in_FS_OFFSET;
  double dVar40;
  double dVar41;
  StringName *local_1d0;
  double local_1a0;
  NodePath *local_198;
  long local_138;
  StringName *local_130;
  Object *local_128;
  Variant local_120 [8];
  Variant local_118 [8];
  long local_110;
  undefined8 local_108;
  Node local_100 [8];
  long local_f8;
  Variant local_f0 [8];
  undefined8 local_e8;
  undefined8 local_e0;
  long local_d8;
  undefined8 local_d0;
  CowData<char32_t> local_c8 [8];
  undefined8 local_c0;
  StringName *local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  StringName *local_98 [2];
  long local_88 [2];
  long local_78 [2];
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  lVar28 = (long)param_6;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar26 = *(long *)(*param_4 + 0x458);
  if (lVar28 < 0) {
LAB_00104270:
    if (lVar26 != 0) {
LAB_00104279:
      lVar34 = *(long *)(lVar26 + -8);
      goto LAB_00104298;
    }
  }
  else if (lVar26 != 0) {
    lVar34 = *(long *)(lVar26 + -8);
    if (lVar34 <= lVar28) goto LAB_00104298;
    local_138 = *(long *)(lVar26 + lVar28 * 8);
    if ((local_138 == 0) || (cVar22 = RefCounted::reference(), cVar22 == '\0')) {
      local_138 = 0;
    }
    Resource::get_name();
    if ((local_130 == (StringName *)0x0) || (*(uint *)(local_130 + -8) < 2)) {
      local_a8 = 0;
      String::parse_latin1((String *)&local_a8,"Animation");
      _gen_unique_name((HashSet *)local_98,(String *)(*param_4 + 0x3f0));
      if (local_130 != local_98[0]) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
        local_130 = local_98[0];
        local_98[0] = (StringName *)0x0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    }
    local_1d0 = (StringName *)local_98;
    local_128 = (Object *)0x0;
    this = (Animation *)operator_new(0x310,"");
    Animation::Animation(this);
    postinitialize_handler((Object *)this);
    cVar22 = RefCounted::init_ref();
    pOVar20 = local_128;
    if (cVar22 == '\0') {
      if (local_128 == (Object *)0x0) goto LAB_00103983;
      local_128 = (Object *)0x0;
      cVar22 = RefCounted::unreference();
      if (cVar22 == '\0') goto LAB_00103983;
      this = (Animation *)0x0;
      cVar22 = predelete_handler(pOVar20);
      if (cVar22 == '\0') goto LAB_00103983;
LAB_001042fa:
      (**(code **)(*(long *)pOVar20 + 0x140))(pOVar20);
      Memory::free_static(pOVar20,false);
      if (this == (Animation *)0x0) goto LAB_00103983;
    }
    else if (local_128 != (Object *)this) {
      local_128 = (Object *)this;
      cVar22 = RefCounted::reference();
      if (cVar22 == '\0') {
        local_128 = (Object *)0x0;
      }
      if (((pOVar20 != (Object *)0x0) && (cVar22 = RefCounted::unreference(), cVar22 != '\0')) &&
         (cVar22 = predelete_handler(pOVar20), cVar22 != '\0')) goto LAB_001042fa;
    }
    cVar22 = RefCounted::unreference();
    if ((cVar22 != '\0') && (cVar22 = predelete_handler((Object *)this), cVar22 != '\0')) {
      (**(code **)(*(long *)this + 0x140))(this);
      Memory::free_static(this,false);
    }
LAB_00103983:
    Resource::set_name((String *)local_128);
    Animation::set_step((float)(_LC101 / *(double *)(*param_4 + 0x288)));
    cVar22 = GLTFAnimation::get_loop();
    if (cVar22 != '\0') {
      Animation::set_loop_mode(local_128,1);
    }
    StringName::StringName(local_1d0,"GODOT_animation_time_begin_time_end",false);
    GLTFAnimation::get_additional_data((StringName *)&local_58);
    ::Variant::operator_cast_to_Dictionary(local_120);
    if (::Variant::needs_deinit[(int)local_58] != '\0') {
      ::Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_98[0] != (StringName *)0x0)) {
      StringName::unref();
    }
    local_1a0 = 0.0;
    if (param_7 != '\0') {
      ::Variant::Variant((Variant *)&local_58,"time_begin");
      pVVar27 = (Variant *)Dictionary::operator[](local_120);
      local_1a0 = ::Variant::operator_cast_to_double(pVVar27);
      if (::Variant::needs_deinit[(int)local_58] != '\0') {
        ::Variant::_clear_internal();
      }
    }
    lVar26 = GLTFAnimation::get_node_tracks();
    plVar39 = *(long **)(lVar26 + 0x18);
    if (plVar39 != (long *)0x0) {
LAB_00103a9d:
      uVar25 = *(uint *)(plVar39 + 2);
      local_e8 = 0;
      local_e0 = 0;
      lVar26 = Node::get_parent();
      if (lVar26 != 0) {
        lVar28 = *param_4;
        lVar34 = *(long *)(lVar28 + 0x468);
        if ((lVar34 != 0) && (*(int *)(lVar28 + 0x48c) != 0)) {
          uVar38 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar28 + 0x488) * 8);
          uVar24 = (uVar25 >> 0x10 ^ uVar25) * -0x7a143595;
          uVar24 = (uVar24 ^ uVar24 >> 0xd) * -0x3d4d51cb;
          uVar33 = uVar24 ^ uVar24 >> 0x10;
          if (uVar24 == uVar24 >> 0x10) {
            uVar33 = 1;
            uVar29 = uVar38;
          }
          else {
            uVar29 = uVar33 * uVar38;
          }
          uVar36 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                       (ulong)*(uint *)(lVar28 + 0x488) * 4));
          auVar3._8_8_ = 0;
          auVar3._0_8_ = uVar36;
          auVar11._8_8_ = 0;
          auVar11._0_8_ = uVar29;
          lVar30 = SUB168(auVar3 * auVar11,8);
          uVar24 = *(uint *)(*(long *)(lVar28 + 0x470) + lVar30 * 4);
          uVar35 = SUB164(auVar3 * auVar11,8);
          if (uVar24 != 0) {
            uVar37 = 0;
            while ((uVar33 != uVar24 || (uVar25 != *(uint *)(*(long *)(lVar34 + lVar30 * 8) + 0x10))
                   )) {
              uVar37 = uVar37 + 1;
              auVar4._8_8_ = 0;
              auVar4._0_8_ = (uVar35 + 1) * uVar38;
              auVar12._8_8_ = 0;
              auVar12._0_8_ = uVar36;
              lVar30 = SUB168(auVar4 * auVar12,8);
              uVar24 = *(uint *)(*(long *)(lVar28 + 0x470) + lVar30 * 4);
              uVar35 = SUB164(auVar4 * auVar12,8);
              if ((uVar24 == 0) ||
                 (auVar5._8_8_ = 0, auVar5._0_8_ = uVar24 * uVar38, auVar13._8_8_ = 0,
                 auVar13._0_8_ = uVar36, auVar6._8_8_ = 0,
                 auVar6._0_8_ = ((*(uint *)(hash_table_size_primes +
                                           (ulong)*(uint *)(lVar28 + 0x488) * 4) + uVar35) -
                                SUB164(auVar5 * auVar13,8)) * uVar38, auVar14._8_8_ = 0,
                 auVar14._0_8_ = uVar36, SUB164(auVar6 * auVar14,8) < uVar37)) goto LAB_00104540;
            }
            if (*(long *)(lVar34 + (ulong)uVar35 * 8) != 0) {
              Node::get_path_to((Node *)local_1d0,SUB81(lVar26,0));
              NodePath::operator=((NodePath *)&local_e8,(NodePath *)local_1d0);
              NodePath::~NodePath((NodePath *)local_1d0);
              lVar28 = (long)(int)plVar39[2];
              lVar26 = *(long *)(*param_4 + 0x2a8);
              if (lVar28 < 0) goto LAB_00104270;
              if (lVar26 == 0) goto LAB_001043b0;
              if (*(long *)(lVar26 + -8) <= lVar28) goto LAB_00104279;
              local_d8 = 0;
              Ref<GLTFNode>::operator=((Ref<GLTFNode> *)&local_d8,*(Ref **)(lVar26 + lVar28 * 8));
              lVar26 = local_d8;
              lVar28 = (long)*(int *)(local_d8 + 0x28c);
              if (*(int *)(local_d8 + 0x28c) < 0) {
                NodePath::operator=((NodePath *)&local_e0,(NodePath *)&local_e8);
              }
              else {
                lVar30 = *(long *)(*param_4 + 0x448);
                if (lVar30 == 0) goto LAB_001043b0;
                lVar34 = *(long *)(lVar30 + -8);
                if (lVar34 <= lVar28) goto LAB_00104298;
                if (*(long *)(*(long *)(lVar30 + lVar28 * 8) + 0x260) == 0) {
                  _err_print_error("_import_animation","modules/fbx/fbx_document.cpp",0x70b,
                                   "Parameter \"sk\" is null.",0,0);
                  Ref<GLTFNode>::unref((Ref<GLTFNode> *)&local_d8);
                  goto LAB_001044bf;
                }
                bVar23 = (bool)Node::get_parent();
                Node::get_path_to((Node *)local_1d0,bVar23);
                NodePath::operator_cast_to_String((NodePath *)&local_d0);
                NodePath::~NodePath((NodePath *)local_1d0);
                Resource::get_name();
                local_c0 = 0;
                String::parse_latin1((String *)&local_c0,":");
                String::operator+((String *)&local_b8,(String *)&local_d0);
                String::operator+((String *)&local_a8,(String *)&local_b8);
                NodePath::NodePath((NodePath *)local_1d0,(String *)&local_a8);
                NodePath::operator=((NodePath *)&local_e0,(NodePath *)local_1d0);
                NodePath::~NodePath((NodePath *)local_1d0);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
                CowData<char32_t>::_unref(local_c8);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
              }
              if (((*(int *)(lVar26 + 0x28c) < 0) && (-1 < *(int *)(lVar26 + 0x288))) ||
                 ((((plVar39[0xc] == 0 || (*(long *)(plVar39[0xc] + -8) == 0)) &&
                   ((plVar39[7] == 0 || (*(long *)(plVar39[7] + -8) == 0)))) &&
                  ((plVar39[0x11] == 0 || (*(long *)(plVar39[0x11] + -8) == 0))))))
              goto LAB_00103e80;
              uVar25 = Animation::get_track_count();
              if ((plVar39[7] == 0) || (*(long *)(plVar39[7] + -8) == 0)) goto LAB_001047f8;
              if (param_8 == '\0') goto LAB_00103dfa;
              lVar28 = (long)(int)plVar39[2];
              lVar26 = *(long *)(*param_4 + 0x2a8);
              if (lVar28 < 0) goto LAB_00104270;
              if (lVar26 == 0) goto LAB_001043b0;
              if (*(long *)(lVar26 + -8) <= lVar28) goto LAB_00104279;
              lVar26 = *(long *)(lVar26 + lVar28 * 8);
              lVar30 = 0;
              local_68 = *(undefined8 *)(lVar26 + 0x274);
              local_60 = *(undefined4 *)(lVar26 + 0x27c);
              lVar26 = plVar39[5];
              goto joined_r0x00104a69;
            }
          }
        }
LAB_00104540:
        local_a8 = 0;
        String::parse_latin1((String *)&local_a8,"Unable to find node %d for animation.");
        vformat<int>((String *)local_1d0,(int)(String *)&local_a8);
        _err_print_error("_import_animation","modules/fbx/fbx_document.cpp",0x704);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_1d0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        NodePath::~NodePath((NodePath *)&local_e0);
        NodePath::~NodePath((NodePath *)&local_e8);
        goto LAB_00103e9c;
      }
      _err_print_error("_import_animation","modules/fbx/fbx_document.cpp",0x702,
                       "Parameter \"root\" is null.",0,0);
LAB_001044bf:
      NodePath::~NodePath((NodePath *)&local_e0);
      NodePath::~NodePath((NodePath *)&local_e8);
      goto LAB_001044d6;
    }
LAB_00103ebd:
    StringName::StringName(local_1d0,"GODOT_blend_shape_animations",false);
    GLTFAnimation::get_additional_data((StringName *)&local_58);
    ::Variant::operator_cast_to_Dictionary(local_118);
    if (::Variant::needs_deinit[(int)local_58] != '\0') {
      ::Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_98[0] != (StringName *)0x0)) {
      StringName::unref();
    }
    lVar26 = *(long *)(*param_4 + 0x2a8);
    for (uVar38 = 0; (lVar26 != 0 && ((long)uVar38 < *(long *)(lVar26 + -8))); uVar38 = uVar38 + 1)
    {
      local_110 = 0;
      Ref<GLTFNode>::operator=((Ref<GLTFNode> *)&local_110,*(Ref **)(lVar26 + uVar38 * 8));
      lVar26 = local_110;
      if (-1 < *(int *)(local_110 + 0x280)) {
        local_108 = 0;
        lVar28 = Node::get_parent();
        if (lVar28 == 0) {
          _err_print_error("_import_animation","modules/fbx/fbx_document.cpp",0x783,
                           "Parameter \"root\" is null.",0,0);
          NodePath::~NodePath((NodePath *)&local_108);
          Ref<GLTFNode>::unref((Ref<GLTFNode> *)&local_110);
          Dictionary::~Dictionary((Dictionary *)local_118);
          goto LAB_001044d6;
        }
        local_98[0] = (StringName *)((ulong)local_98[0] & 0xffffffff00000000);
        lVar34 = *param_4;
        cVar22 = HashMap<int,Node*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Node*>>>
                 ::_lookup_pos((HashMap<int,Node*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Node*>>>
                                *)(lVar34 + 0x460),(int *)(uVar38 & 0xffffffff),(uint *)local_1d0);
        if ((cVar22 == '\0') ||
           (*(long *)(*(long *)(lVar34 + 0x468) + ((ulong)local_98[0] & 0xffffffff) * 8) == 0)) {
          local_a8 = 0;
          String::parse_latin1((String *)&local_a8,"Unable to find node %d for animation.");
          vformat<int>((String *)local_1d0,(int)(String *)&local_a8);
          _err_print_error("_import_animation","modules/fbx/fbx_document.cpp",0x785,
                           "Condition \"!node_element\" is true. Continuing.",local_1d0,0,0);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_1d0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        }
        else {
          Node::get_path_to(local_100,SUB81(lVar28,0));
          lVar34 = *param_4;
          lVar30 = *(long *)(lVar34 + 0x498);
          if ((lVar30 != 0) && (*(int *)(lVar34 + 0x4bc) != 0)) {
            uVar36 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                         (ulong)*(uint *)(lVar34 + 0x4b8) * 4));
            uVar29 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar34 + 0x4b8) * 8);
            uVar25 = ((uint)(uVar38 >> 0x10) & 0xffff ^ (uint)uVar38) * -0x7a143595;
            uVar25 = (uVar25 ^ uVar25 >> 0xd) * -0x3d4d51cb;
            uVar24 = uVar25 ^ uVar25 >> 0x10;
            if (uVar25 == uVar25 >> 0x10) {
              uVar24 = 1;
              uVar31 = uVar29;
            }
            else {
              uVar31 = uVar24 * uVar29;
            }
            auVar7._8_8_ = 0;
            auVar7._0_8_ = uVar36;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = uVar31;
            lVar32 = SUB168(auVar7 * auVar15,8);
            uVar25 = *(uint *)(*(long *)(lVar34 + 0x4a0) + lVar32 * 4);
            uVar33 = SUB164(auVar7 * auVar15,8);
            if (uVar25 != 0) {
              uVar35 = 0;
              while ((uVar25 != uVar24 ||
                     (*(uint *)(*(long *)(lVar30 + lVar32 * 8) + 0x10) != (uint)uVar38))) {
                uVar35 = uVar35 + 1;
                auVar8._8_8_ = 0;
                auVar8._0_8_ = (uVar33 + 1) * uVar29;
                auVar16._8_8_ = 0;
                auVar16._0_8_ = uVar36;
                lVar32 = SUB168(auVar8 * auVar16,8);
                uVar25 = *(uint *)(*(long *)(lVar34 + 0x4a0) + lVar32 * 4);
                uVar33 = SUB164(auVar8 * auVar16,8);
                if ((uVar25 == 0) ||
                   (auVar9._8_8_ = 0, auVar9._0_8_ = uVar25 * uVar29, auVar17._8_8_ = 0,
                   auVar17._0_8_ = uVar36, auVar10._8_8_ = 0,
                   auVar10._0_8_ =
                        ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar34 + 0x4b8) * 4) +
                         uVar33) - SUB164(auVar9 * auVar17,8)) * uVar29, auVar18._8_8_ = 0,
                   auVar18._0_8_ = uVar36, SUB164(auVar10 * auVar18,8) < uVar35)) goto LAB_0010546a;
              }
              if (*(long *)(lVar30 + (ulong)uVar33 * 8) != 0) {
                Node::get_path_to((Node *)local_1d0,SUB81(lVar28,0));
                NodePath::operator=((NodePath *)&local_108,(NodePath *)local_1d0);
                NodePath::~NodePath((NodePath *)local_1d0);
                goto LAB_00104eb4;
              }
            }
          }
LAB_0010546a:
          NodePath::operator=((NodePath *)&local_108,(NodePath *)local_100);
LAB_00104eb4:
          lVar28 = (long)*(int *)(lVar26 + 0x280);
          lVar26 = *(long *)(*param_4 + 0x2e8);
          if (lVar28 < 0) goto LAB_00104270;
          if (lVar26 == 0) goto LAB_001043b0;
          if (*(long *)(lVar26 + -8) <= lVar28) goto LAB_00104279;
          local_f8 = 0;
          Ref<GLTFMesh>::operator=((Ref<GLTFMesh> *)&local_f8,*(Ref **)(lVar26 + lVar28 * 8));
          if (local_f8 == 0) {
            _err_print_error("_import_animation","modules/fbx/fbx_document.cpp",0x78f,
                             "Condition \"mesh.is_null()\" is true. Continuing.",0,0);
          }
          else {
            GLTFMesh::get_mesh();
            pSVar21 = local_98[0];
            Ref<ImporterMesh>::unref((Ref<ImporterMesh> *)local_1d0);
            if (pSVar21 == (StringName *)0x0) {
              _err_print_error("_import_animation","modules/fbx/fbx_document.cpp",0x790,
                               "Condition \"mesh->get_mesh().is_null()\" is true. Continuing.",0,0);
            }
            else {
              GLTFMesh::get_mesh();
              local_a8 = 0;
              ImporterMesh::get_mesh(local_1d0);
              pSVar21 = local_98[0];
              Ref<ArrayMesh>::unref((Ref<ArrayMesh> *)local_1d0);
              Ref<ArrayMesh>::unref((Ref<ArrayMesh> *)&local_a8);
              Ref<ImporterMesh>::unref((Ref<ImporterMesh> *)&local_b8);
              if (pSVar21 == (StringName *)0x0) {
                _err_print_error("_import_animation","modules/fbx/fbx_document.cpp",0x791,
                                 "Condition \"mesh->get_mesh()->get_mesh().is_null()\" is true. Continuing."
                                 ,0,0);
              }
              else {
                StringName::StringName(local_1d0,"GODOT_mesh_blend_channels",false);
                GLTFMesh::get_additional_data((StringName *)&local_58);
                ::Variant::operator_cast_to_Dictionary(local_f0);
                if (::Variant::needs_deinit[(int)local_58] != '\0') {
                  ::Variant::_clear_internal();
                }
                if ((StringName::configured != '\0') && (local_98[0] != (StringName *)0x0)) {
                  StringName::unref();
                }
                ::Variant::Variant((Variant *)&local_58,"blend_channels");
                Dictionary::operator[](local_f0);
                ::Variant::operator_cast_to_Vector((Variant *)&local_b8);
                if (::Variant::needs_deinit[(int)local_58] != '\0') {
                  ::Variant::_clear_internal();
                }
                for (lVar26 = 0; (local_b0 != 0 && (lVar26 < *(long *)(local_b0 + -8)));
                    lVar26 = lVar26 + 1) {
                  iVar2 = *(int *)(local_b0 + lVar26 * 4);
                  ::Variant::Variant((Variant *)&local_58,iVar2);
                  cVar22 = Dictionary::has(local_118);
                  if (::Variant::needs_deinit[(int)local_58] != '\0') {
                    ::Variant::_clear_internal();
                  }
                  if (cVar22 != '\0') {
                    ::Variant::Variant((Variant *)&local_58,iVar2);
                    Dictionary::operator[](local_118);
                    ::Variant::operator_cast_to_Dictionary((Variant *)&local_e8);
                    if (::Variant::needs_deinit[(int)local_58] != '\0') {
                      ::Variant::_clear_internal();
                    }
                    local_98[0] = (StringName *)((ulong)local_98[0] & 0xffffffff00000000);
                    local_88[0] = 0;
                    local_78[0] = 0;
                    ::Variant::Variant((Variant *)&local_58,"times");
                    Dictionary::operator[]((Variant *)&local_e8);
                    ::Variant::operator_cast_to_Vector((Variant *)&local_a8);
                    lVar28 = local_a0;
                    if (local_a0 != 0) {
                      CowData<double>::_unref((CowData<double> *)local_88);
                      local_88[0] = local_a0;
                      local_a0 = 0;
                      lVar28 = local_78[0];
                    }
                    CowData<double>::_unref((CowData<double> *)&local_a0);
                    if (::Variant::needs_deinit[(int)local_58] != '\0') {
                      ::Variant::_clear_internal();
                    }
                    ::Variant::Variant((Variant *)&local_58,"values");
                    Dictionary::operator[]((Variant *)&local_e8);
                    ::Variant::operator_cast_to_Vector((Variant *)&local_a8);
                    if (lVar28 != local_a0) {
                      CowData<float>::_unref((CowData<float> *)local_78);
                      local_78[0] = local_a0;
                      local_a0 = 0;
                    }
                    CowData<float>::_unref((CowData<float> *)&local_a0);
                    if (::Variant::needs_deinit[(int)local_58] != '\0') {
                      ::Variant::_clear_internal();
                    }
                    GLTFMesh::get_mesh();
                    ImporterMesh::get_blend_shape_name((int)(Ref<ArrayMesh> *)&local_a8);
                    local_d0 = 0;
                    String::parse_latin1((String *)&local_d0,":");
                    NodePath::operator_cast_to_String((NodePath *)&local_d8);
                    String::operator+((String *)local_c8,(String *)&local_d8);
                    String::operator+((String *)&local_e0,(String *)local_c8);
                    CowData<char32_t>::_unref(local_c8);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
                    Ref<ImporterMesh>::unref((Ref<ImporterMesh> *)&local_c0);
                    uVar25 = Animation::get_track_count();
                    Animation::add_track(local_128,4,0xffffffff);
                    pOVar20 = local_128;
                    NodePath::NodePath((NodePath *)&local_a8,(String *)&local_e0);
                    Animation::track_set_path((int)pOVar20,(NodePath *)(ulong)uVar25);
                    lVar28 = 0;
                    NodePath::~NodePath((NodePath *)&local_a8);
                    Animation::track_set_imported((int)local_128,SUB41(uVar25,0));
                    Animation::track_set_interpolation_type(local_128,(NodePath *)(ulong)uVar25,1);
                    lVar30 = local_88[0];
                    if (local_88[0] != 0) {
                      for (; lVar28 < *(long *)(lVar30 + -8); lVar28 = lVar28 + 1) {
                        if (local_78[0] == 0) goto LAB_00104754;
                        lVar34 = *(long *)(local_78[0] + -8);
                        if (lVar34 <= lVar28) goto LAB_00104298;
                        Animation::blend_shape_track_insert_key
                                  ((int)local_128,*(double *)(lVar30 + lVar28 * 8) - local_1a0,
                                   *(float *)(local_78[0] + lVar28 * 4));
                      }
                    }
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
                    CowData<float>::_unref((CowData<float> *)local_78);
                    CowData<double>::_unref((CowData<double> *)local_88);
                    Dictionary::~Dictionary((Dictionary *)&local_e8);
                  }
                }
                CowData<int>::_unref((CowData<int> *)&local_b0);
                Dictionary::~Dictionary((Dictionary *)local_f0);
              }
            }
          }
          Ref<GLTFMesh>::unref((Ref<GLTFMesh> *)&local_f8);
          NodePath::~NodePath((NodePath *)local_100);
        }
        local_198 = (NodePath *)&local_108;
        NodePath::~NodePath(local_198);
      }
      Ref<GLTFNode>::unref((Ref<GLTFNode> *)&local_110);
      lVar26 = *(long *)(*param_4 + 0x2a8);
    }
    ::Variant::Variant((Variant *)&local_58,"time_begin");
    pVVar27 = (Variant *)Dictionary::operator[](local_120);
    dVar40 = ::Variant::operator_cast_to_double(pVVar27);
    if (::Variant::needs_deinit[(int)local_58] != '\0') {
      ::Variant::_clear_internal();
    }
    ::Variant::Variant((Variant *)&local_58,"time_end");
    pVVar27 = (Variant *)Dictionary::operator[](local_120);
    dVar41 = ::Variant::operator_cast_to_double(pVVar27);
    if (::Variant::needs_deinit[(int)local_58] != '\0') {
      ::Variant::_clear_internal();
    }
    if (param_7 != '\0') {
      dVar41 = dVar41 - dVar40;
    }
    Animation::set_length((float)dVar41);
    local_b8 = (StringName *)0x0;
    StringName::StringName(local_1d0,"",false);
    cVar22 = AnimationMixer::has_animation_library(param_5);
    if ((StringName::configured != '\0') && (local_98[0] != (StringName *)0x0)) {
      StringName::unref();
    }
    if (cVar22 == '\0') {
      Ref<AnimationLibrary>::instantiate<>((Ref<AnimationLibrary> *)&local_b8);
      StringName::StringName(local_1d0,"",false);
      AnimationMixer::add_animation_library(param_5,local_1d0);
      if ((StringName::configured != '\0') && (local_98[0] != (StringName *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::StringName((StringName *)&local_a8,"",false);
      AnimationMixer::get_animation_library(local_1d0);
      pSVar21 = local_b8;
      if (local_98[0] != local_b8) {
        local_b8 = local_98[0];
        if ((local_98[0] != (StringName *)0x0) && (cVar22 = RefCounted::reference(), cVar22 == '\0')
           ) {
          local_b8 = (StringName *)0x0;
        }
        if (((pSVar21 != (StringName *)0x0) && (cVar22 = RefCounted::unreference(), cVar22 != '\0'))
           && (cVar22 = predelete_handler((Object *)pSVar21), cVar22 != '\0')) {
          (**(code **)(*(long *)pSVar21 + 0x140))(pSVar21);
          Memory::free_static(pSVar21,false);
        }
      }
      Ref<AnimationLibrary>::unref((Ref<AnimationLibrary> *)local_1d0);
      if ((StringName::configured != '\0') && (local_a8 != 0)) {
        StringName::unref();
      }
    }
    pSVar21 = local_b8;
    StringName::StringName(local_1d0,(String *)&local_130,false);
    AnimationLibrary::add_animation(pSVar21,local_1d0);
    if ((StringName::configured != '\0') && (local_98[0] != (StringName *)0x0)) {
      StringName::unref();
    }
    Ref<AnimationLibrary>::unref((Ref<AnimationLibrary> *)&local_b8);
    Dictionary::~Dictionary((Dictionary *)local_118);
LAB_001044d6:
    Dictionary::~Dictionary((Dictionary *)local_120);
    if (((local_128 != (Object *)0x0) &&
        (cVar22 = RefCounted::unreference(), pOVar20 = local_128, cVar22 != '\0')) &&
       (cVar22 = predelete_handler(local_128), cVar22 != '\0')) {
      (**(code **)(*(long *)pOVar20 + 0x140))(pOVar20);
      Memory::free_static(pOVar20,false);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
    Ref<GLTFAnimation>::unref((Ref<GLTFAnimation> *)&local_138);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_001043b0:
  lVar34 = 0;
LAB_00104298:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar28,lVar34,"p_index","size()","",false,true)
  ;
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar19 = (code *)invalidInstructionException();
  (*pcVar19)();
joined_r0x00104a69:
  if ((lVar26 == 0) || (*(long *)(lVar26 + -8) <= lVar30)) goto LAB_001047f8;
  lVar28 = lVar30;
  if ((int)plVar39[3] == 3) {
    lVar28 = (long)((int)lVar30 * 3 + 1);
  }
  lVar26 = plVar39[7];
  if (lVar26 == 0) goto LAB_001043b0;
  lVar34 = *(long *)(lVar26 + -8);
  if (lVar34 <= lVar28) goto LAB_00104298;
  puVar1 = (undefined8 *)(lVar26 + lVar28 * 0xc);
  local_58 = *puVar1;
  uStack_50._4_4_ = (undefined4)((ulong)uStack_50 >> 0x20);
  uStack_50 = CONCAT44(uStack_50._4_4_,*(undefined4 *)(puVar1 + 1));
  cVar22 = Vector3::is_equal_approx((Vector3 *)&local_58);
  if (cVar22 == '\0') goto LAB_00103dfa;
  lVar26 = plVar39[5];
  lVar30 = lVar30 + 1;
  goto joined_r0x00104a69;
LAB_001047f8:
  lVar26 = plVar39[0xc];
  if (lVar26 != 0) {
    uVar33 = 0xffffffff;
    uVar24 = uVar25;
    goto LAB_00103e48;
  }
  if ((plVar39[0x11] == 0) || (*(long *)(plVar39[0x11] + -8) == 0)) goto LAB_00103e80;
  uVar24 = 0xffffffff;
  uVar33 = 0xffffffff;
  uVar35 = uVar25;
LAB_00104644:
  if (param_8 == '\0') {
LAB_0010464f:
    Animation::add_track(local_128,3,0xffffffff);
    Animation::track_set_path((int)local_128,(NodePath *)(ulong)uVar35);
    Animation::track_set_imported((int)local_128,SUB41(uVar35,0));
    uVar25 = uVar33;
    if (uVar33 != 0xffffffff) {
LAB_00104996:
      Animation::track_set_interpolation_type(local_128,uVar25,1);
      lVar26 = plVar39[5];
      if (lVar26 != 0) goto LAB_001048f4;
    }
    goto LAB_001046a1;
  }
LAB_00104bf7:
  lVar28 = (long)(int)plVar39[2];
  lVar26 = *(long *)(*param_4 + 0x2a8);
  if (lVar28 < 0) goto LAB_00104270;
  if (lVar26 == 0) goto LAB_001043b0;
  if (*(long *)(lVar26 + -8) <= lVar28) goto LAB_00104279;
  local_68 = Basis::get_scale();
  lVar26 = plVar39[0xf];
  local_60 = param_2;
  for (lVar30 = 0; (lVar26 != 0 && (lVar30 < *(long *)(lVar26 + -8))); lVar30 = lVar30 + 1) {
    lVar28 = lVar30;
    if ((int)plVar39[0xd] == 3) {
      lVar28 = (long)((int)lVar30 * 3 + 1);
    }
    lVar26 = plVar39[0x11];
    if (lVar26 == 0) goto LAB_001043b0;
    lVar34 = *(long *)(lVar26 + -8);
    if (lVar34 <= lVar28) goto LAB_00104298;
    puVar1 = (undefined8 *)(lVar26 + lVar28 * 0xc);
    local_58 = *puVar1;
    uStack_50._4_4_ = (undefined4)((ulong)uStack_50 >> 0x20);
    uStack_50 = CONCAT44(uStack_50._4_4_,*(undefined4 *)(puVar1 + 1));
    cVar22 = Vector3::is_equal_approx((Vector3 *)&local_58);
    if (cVar22 == '\0') goto LAB_0010464f;
    lVar26 = plVar39[0xf];
  }
  if (uVar33 != 0xffffffff) {
    uVar35 = 0xffffffff;
    uVar25 = uVar33;
    goto LAB_00104996;
  }
joined_r0x0010481f:
  if (uVar24 == 0xffffffff) goto LAB_00103e80;
  Animation::track_set_interpolation_type(local_128,uVar24,1);
  lVar26 = plVar39[10];
  if (lVar26 == 0) goto LAB_00103e80;
  uVar35 = 0xffffffff;
LAB_0010484c:
  lVar28 = 0;
  do {
    if (*(long *)(lVar26 + -8) <= lVar28) break;
    lVar30 = plVar39[0xc];
    if (lVar30 == 0) goto LAB_00104754;
    lVar34 = *(long *)(lVar30 + -8);
    if (lVar34 <= lVar28) goto LAB_00104298;
    puVar1 = (undefined8 *)(lVar30 + lVar28 * 0x10);
    local_58 = *puVar1;
    uStack_50 = puVar1[1];
    Animation::rotation_track_insert_key
              ((int)local_128,(double)(float)(*(double *)(lVar26 + lVar28 * 8) - local_1a0),
               (Quaternion *)(ulong)uVar24);
    lVar26 = plVar39[10];
    lVar28 = lVar28 + 1;
  } while (lVar26 != 0);
  goto LAB_001046ab;
LAB_00103dfa:
  Animation::add_track(local_128,1,0xffffffff);
  Animation::track_set_path((int)local_128,(NodePath *)(ulong)uVar25);
  Animation::track_set_imported((int)local_128,SUB41(uVar25,0));
  lVar26 = plVar39[0xc];
  uVar24 = uVar25 + 1;
  uVar33 = uVar25;
  if (lVar26 == 0) {
    if ((plVar39[0x11] != 0) && (*(long *)(plVar39[0x11] + -8) != 0)) {
      uVar24 = 0xffffffff;
      uVar35 = uVar25 + 1;
      goto LAB_00104644;
    }
  }
  else {
LAB_00103e48:
    uVar35 = uVar24;
    uVar25 = uVar33;
    if (*(long *)(lVar26 + -8) != 0) {
      if (param_8 != '\0') {
        lVar28 = (long)(int)plVar39[2];
        lVar26 = *(long *)(*param_4 + 0x2a8);
        if (lVar28 < 0) goto LAB_00104270;
        if (lVar26 == 0) goto LAB_001043b0;
        if (*(long *)(lVar26 + -8) <= lVar28) goto LAB_00104279;
        Basis::get_rotation_quaternion();
        lVar26 = plVar39[10];
        for (lVar30 = 0; (lVar26 != 0 && (lVar30 < *(long *)(lVar26 + -8))); lVar30 = lVar30 + 1) {
          lVar28 = lVar30;
          if ((int)plVar39[8] == 3) {
            lVar28 = (long)((int)lVar30 * 3 + 1);
          }
          if (plVar39[0xc] == 0) goto LAB_001043b0;
          lVar34 = *(long *)(plVar39[0xc] + -8);
          if (lVar34 <= lVar28) goto LAB_00104298;
          Quaternion::normalized();
          cVar22 = Quaternion::is_equal_approx((Quaternion *)&local_58);
          if (cVar22 == '\0') goto LAB_001045e3;
          lVar26 = plVar39[10];
        }
        if ((plVar39[0x11] == 0) || (*(long *)(plVar39[0x11] + -8) == 0)) goto LAB_00103e70;
        uVar24 = 0xffffffff;
        goto LAB_00104bf7;
      }
LAB_001045e3:
      Animation::add_track(local_128,2,0xffffffff);
      Animation::track_set_path((int)local_128,(NodePath *)(ulong)uVar24);
      Animation::track_set_imported((int)local_128,SUB41(uVar24,0));
      if ((plVar39[0x11] != 0) && (*(long *)(plVar39[0x11] + -8) != 0)) {
        uVar35 = uVar24 + 1;
        goto LAB_00104644;
      }
      if (uVar33 != 0xffffffff) {
        uVar35 = 0xffffffff;
        goto LAB_00104996;
      }
      goto joined_r0x0010481f;
    }
    if ((plVar39[0x11] != 0) && (uVar24 = 0xffffffff, *(long *)(plVar39[0x11] + -8) != 0))
    goto LAB_00104644;
  }
LAB_00103e70:
  if (uVar25 == 0xffffffff) goto LAB_00103e80;
  Animation::track_set_interpolation_type(local_128,uVar25,1);
  lVar26 = plVar39[5];
  if (lVar26 == 0) goto LAB_00103e80;
  uVar35 = 0xffffffff;
  uVar24 = 0xffffffff;
LAB_001048f4:
  lVar28 = 0;
  do {
    if (*(long *)(lVar26 + -8) <= lVar28) break;
    lVar30 = plVar39[7];
    if (lVar30 == 0) {
      lVar34 = 0;
      goto LAB_00104298;
    }
    lVar34 = *(long *)(lVar30 + -8);
    if (lVar34 <= lVar28) goto LAB_00104298;
    puVar1 = (undefined8 *)(lVar30 + lVar28 * 0xc);
    local_58 = *puVar1;
    uStack_50 = CONCAT44(uStack_50._4_4_,*(undefined4 *)(puVar1 + 1));
    Animation::position_track_insert_key
              ((int)local_128,(double)(float)(*(double *)(lVar26 + lVar28 * 8) - local_1a0),
               (Vector3 *)(ulong)uVar25);
    lVar26 = plVar39[5];
    lVar28 = lVar28 + 1;
  } while (lVar26 != 0);
LAB_001046a1:
  if (uVar24 != 0xffffffff) {
    Animation::track_set_interpolation_type(local_128,uVar24,1);
    lVar26 = plVar39[10];
    if (lVar26 != 0) goto LAB_0010484c;
  }
LAB_001046ab:
  if (uVar35 != 0xffffffff) {
    Animation::track_set_interpolation_type(local_128,uVar35,1);
    lVar26 = plVar39[0xf];
    if (lVar26 != 0) {
      lVar28 = 0;
      do {
        if (*(long *)(lVar26 + -8) <= lVar28) break;
        lVar30 = plVar39[0x11];
        if (lVar30 == 0) goto LAB_00104754;
        lVar34 = *(long *)(lVar30 + -8);
        if (lVar34 <= lVar28) goto LAB_00104298;
        puVar1 = (undefined8 *)(lVar30 + lVar28 * 0xc);
        local_58 = *puVar1;
        uStack_50 = CONCAT44(uStack_50._4_4_,*(undefined4 *)(puVar1 + 1));
        Animation::scale_track_insert_key
                  ((int)local_128,(double)(float)(*(double *)(lVar26 + lVar28 * 8) - local_1a0),
                   (Vector3 *)(ulong)uVar35);
        lVar26 = plVar39[0xf];
        lVar28 = lVar28 + 1;
      } while (lVar26 != 0);
    }
  }
LAB_00103e80:
  Ref<GLTFNode>::unref((Ref<GLTFNode> *)&local_d8);
  NodePath::~NodePath((NodePath *)&local_e0);
  NodePath::~NodePath((NodePath *)&local_e8);
LAB_00103e9c:
  plVar39 = (long *)*plVar39;
  if (plVar39 == (long *)0x0) goto LAB_00103ebd;
  goto LAB_00103a9d;
LAB_00104754:
  lVar34 = 0;
  goto LAB_00104298;
}



/* CowData<double>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<double>::_copy_on_write(CowData<double> *this)

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



/* FBXDocument::_get_texture_path(String const&, String const&) const */

String * FBXDocument::_get_texture_path(String *param_1,String *param_2)

{
  long *plVar1;
  code *pcVar2;
  char cVar3;
  undefined8 *puVar4;
  String *in_RCX;
  ulong uVar5;
  CowData *in_RDX;
  CowData<char32_t> *pCVar6;
  CowData<char32_t> *this;
  StrRange *pSVar7;
  StrRange *pSVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  CowData<char32_t> *pCVar13;
  long in_FS_OFFSET;
  bool bVar14;
  byte bVar15;
  CowData<char32_t> *local_110;
  CowData local_d8 [8];
  long local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  long local_b8;
  long local_b0;
  char *local_a8;
  CowData<char32_t> *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40 [2];
  
  bVar15 = 0;
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  cVar3 = FileAccess::exists(in_RCX);
  if (cVar3 == '\0') {
    String::get_file();
    local_a8 = "";
    local_98 = 0;
    local_a0 = (CowData<char32_t> *)0x0;
    String::parse_latin1((StrRange *)&local_98);
    local_a8 = "textures/";
    local_90 = 0;
    local_a0 = (CowData<char32_t> *)0x9;
    String::parse_latin1((StrRange *)&local_90);
    local_a8 = "Textures/";
    local_88 = 0;
    local_a0 = (CowData<char32_t> *)0x9;
    String::parse_latin1((StrRange *)&local_88);
    local_a8 = "images/";
    local_80 = 0;
    local_a0 = (CowData<char32_t> *)0x7;
    String::parse_latin1((StrRange *)&local_80);
    local_a8 = "Images/";
    local_78 = 0;
    local_a0 = (CowData<char32_t> *)0x7;
    String::parse_latin1((StrRange *)&local_78);
    local_a8 = "materials/";
    local_70 = 0;
    local_a0 = (CowData<char32_t> *)0xa;
    String::parse_latin1((StrRange *)&local_70);
    local_a8 = "Materials/";
    local_68 = 0;
    local_a0 = (CowData<char32_t> *)0xa;
    String::parse_latin1((StrRange *)&local_68);
    local_a8 = "maps/";
    local_60 = 0;
    local_a0 = (CowData<char32_t> *)0x5;
    String::parse_latin1((StrRange *)&local_60);
    local_a8 = "Maps/";
    local_58 = 0;
    local_a0 = (CowData<char32_t> *)0x5;
    String::parse_latin1((StrRange *)&local_58);
    local_a8 = "tex/";
    local_50 = 0;
    local_a0 = (CowData<char32_t> *)0x4;
    String::parse_latin1((StrRange *)&local_50);
    local_48 = 0;
    local_a8 = "Tex/";
    local_a0 = (CowData<char32_t> *)0x4;
    String::parse_latin1((StrRange *)&local_48);
    local_a0 = (CowData<char32_t> *)0x0;
    puVar4 = (undefined8 *)Memory::alloc_static(0x90,false);
    pSVar8 = (StrRange *)&local_48;
    if (puVar4 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
    }
    else {
      local_a0 = (CowData<char32_t> *)(puVar4 + 2);
      lVar12 = 0;
      *puVar4 = 1;
      puVar4[2] = 0;
      puVar4[0xc] = 0;
      puVar10 = (undefined8 *)((ulong)(puVar4 + 3) & 0xfffffffffffffff8);
      for (uVar5 = (ulong)(((int)local_a0 -
                           (int)(undefined8 *)((ulong)(puVar4 + 3) & 0xfffffffffffffff8)) + 0x58U >>
                          3); uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar10 = 0;
        puVar10 = puVar10 + (ulong)bVar15 * -2 + 1;
      }
      puVar4[1] = 0xb;
      pSVar7 = (StrRange *)&local_98;
      do {
        pCVar6 = local_a0;
        if (local_a0 == (CowData<char32_t> *)0x0) {
          lVar11 = 0;
LAB_00105ea3:
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,lVar12,lVar11,"p_index","size()","",
                     false,false);
        }
        else {
          lVar11 = *(long *)(local_a0 + -8);
          if (lVar11 <= lVar12) goto LAB_00105ea3;
          if (1 < *(ulong *)(local_a0 + -0x10)) {
            if (local_a0 == (CowData<char32_t> *)0x0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            lVar11 = *(long *)(local_a0 + -8);
            uVar5 = 0x10;
            if (lVar11 * 8 != 0) {
              uVar5 = lVar11 * 8 - 1;
              uVar5 = uVar5 | uVar5 >> 1;
              uVar5 = uVar5 | uVar5 >> 2;
              uVar5 = uVar5 | uVar5 >> 4;
              uVar5 = uVar5 | uVar5 >> 8;
              uVar5 = uVar5 | uVar5 >> 0x10;
              uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
            }
            puVar4 = (undefined8 *)Memory::alloc_static(uVar5,false);
            if (puVar4 == (undefined8 *)0x0) {
              _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                               "Parameter \"mem_new\" is null.",0,0);
            }
            else {
              pCVar6 = (CowData<char32_t> *)(puVar4 + 2);
              *puVar4 = 1;
              puVar4[1] = lVar11;
              if (lVar11 != 0) {
                lVar9 = 0;
                this = pCVar6;
                pCVar13 = local_a0;
                do {
                  *(undefined8 *)this = 0;
                  if (*(long *)pCVar13 != 0) {
                    CowData<char32_t>::_ref(this,(CowData *)pCVar13);
                  }
                  lVar9 = lVar9 + 1;
                  this = this + 8;
                  pCVar13 = (CowData<char32_t> *)((CowData *)pCVar13 + 8);
                } while (lVar11 != lVar9);
              }
              CowData<String>::_unref((CowData<String> *)&local_a0);
              local_a0 = pCVar6;
            }
          }
          if (*(long *)(pCVar6 + lVar12 * 8) != *(long *)pSVar7) {
            CowData<char32_t>::_ref(pCVar6 + lVar12 * 8,(CowData *)pSVar7);
          }
        }
        pSVar7 = (StrRange *)((CowData *)pSVar7 + 8);
        lVar12 = lVar12 + 1;
      } while (pSVar7 != (StrRange *)local_40);
    }
    do {
      if (*(long *)pSVar8 != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)pSVar8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar12 = *(long *)pSVar8;
          *(undefined8 *)pSVar8 = 0;
          Memory::free_static((void *)(lVar12 + -0x10),false);
        }
      }
      bVar14 = pSVar8 != (StrRange *)&local_98;
      pSVar8 = pSVar8 + -8;
    } while (bVar14);
    local_d0 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_d0,in_RDX);
    local_c8 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,local_d8);
    if (local_d0 != 0) {
      do {
        if (*(uint *)(local_d0 + -8) < 2) break;
        local_c0 = 0;
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_c0,(CowData *)&local_d0);
        if (local_a0 != (CowData<char32_t> *)0x0) {
          lVar12 = 0;
          do {
            if (*(long *)(local_a0 + -8) <= lVar12) break;
            String::operator+((String *)&local_b0,(String *)(local_a0 + lVar12 * 8));
            String::path_join((String *)&local_b8);
            lVar11 = local_b0;
            if (local_b0 != 0) {
              LOCK();
              plVar1 = (long *)(local_b0 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_b0 = 0;
                Memory::free_static((void *)(lVar11 + -0x10),false);
              }
            }
            cVar3 = FileAccess::exists((String *)&local_b8);
            lVar11 = local_b8;
            if (cVar3 != '\0') {
              String::strip_edges(SUB81(param_1,0),SUB81((String *)&local_b8,0));
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
              goto LAB_00105d00;
            }
            if (local_b8 != 0) {
              LOCK();
              plVar1 = (long *)(local_b8 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_b8 = 0;
                Memory::free_static((void *)(lVar11 + -0x10),false);
              }
            }
            lVar12 = lVar12 + 1;
          } while (local_a0 != (CowData<char32_t> *)0x0);
        }
        local_110 = (CowData<char32_t> *)&local_b0;
        String::get_base_dir();
        if (local_d0 != local_b0) {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
          local_d0 = local_b0;
          local_b0 = 0;
        }
        CowData<char32_t>::_unref(local_110);
        cVar3 = String::operator==((String *)&local_d0,(String *)&local_c0);
        if (cVar3 != '\0') {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
          break;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      } while (local_d0 != 0);
    }
    *(undefined8 *)param_1 = 0;
LAB_00105d00:
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
    CowData<String>::_unref((CowData<String> *)&local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
  }
  else {
    String::strip_edges(SUB81(param_1,0),SUB81(in_RCX,0));
  }
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* Ref<Image>::TEMPNAMEPLACEHOLDERVALUE(Ref<Image> const&) [clone .isra.0] */

void __thiscall Ref<Image>::operator=(Ref<Image> *this,Ref *param_1)

{
  Image *pIVar1;
  char cVar2;
  
  pIVar1 = *(Image **)this;
  if (pIVar1 != (Image *)param_1) {
    *(Ref **)this = param_1;
    if (param_1 != (Ref *)0x0) {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *(undefined8 *)this = 0;
      }
    }
    if (pIVar1 != (Image *)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        memdelete<Image>(pIVar1);
        return;
      }
    }
  }
  return;
}



/* FBXDocument::_parse_image_bytes_into_image(Ref<FBXState>, Vector<unsigned char> const&, String
   const&, int) */

undefined8 * FBXDocument::_parse_image_bytes_into_image(undefined8 *param_1)

{
  Image *pIVar1;
  char cVar2;
  Resource *this;
  long lVar3;
  Resource *pRVar4;
  Image *pIVar5;
  long in_FS_OFFSET;
  byte bVar6;
  CowData<char32_t> aCStack_68 [8];
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  bVar6 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *param_1 = 0;
  this = (Resource *)operator_new(0x268,"");
  pRVar4 = this;
  for (lVar3 = 0x4d; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined8 *)pRVar4 = 0;
    pRVar4 = pRVar4 + (ulong)bVar6 * -0x10 + 8;
  }
  Resource::Resource(this);
  this[0x260] = (Resource)0x0;
  *(code **)this = Dictionary::~Dictionary;
  *(undefined4 *)(this + 0x240) = 0;
  *(undefined8 *)(this + 0x250) = 0;
  *(undefined8 *)(this + 600) = 0;
  postinitialize_handler((Object *)this);
  cVar2 = RefCounted::init_ref();
  if (cVar2 == '\0') {
    pIVar1 = (Image *)*param_1;
    if (pIVar1 != (Image *)0x0) {
      *param_1 = 0;
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        memdelete<Image>(pIVar1);
      }
    }
  }
  else {
    pIVar1 = (Image *)*param_1;
    pIVar5 = pIVar1;
    if (this != (Resource *)pIVar1) {
      *param_1 = this;
      cVar2 = RefCounted::reference();
      pIVar5 = (Image *)this;
      if (cVar2 == '\0') {
        *param_1 = 0;
        if (pIVar1 != (Image *)0x0) {
          cVar2 = RefCounted::unreference();
joined_r0x001063d3:
          if (cVar2 != '\0') {
            memdelete<Image>(pIVar1);
          }
        }
      }
      else if (pIVar1 != (Image *)0x0) {
        cVar2 = RefCounted::unreference();
        goto joined_r0x001063d3;
      }
    }
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      memdelete<Image>(pIVar5);
    }
  }
  String::to_lower();
  cVar2 = String::ends_with((char *)aCStack_68);
  if (cVar2 == '\0') {
    cVar2 = String::ends_with((char *)aCStack_68);
    if (cVar2 != '\0') {
      Image::load_jpg_from_buffer((Vector *)*param_1);
      cVar2 = Image::is_empty();
      goto joined_r0x001062be;
    }
    cVar2 = String::ends_with((char *)aCStack_68);
    if (cVar2 != '\0') {
      Image::load_tga_from_buffer((Vector *)*param_1);
    }
  }
  else {
    Image::load_png_from_buffer((Vector *)*param_1);
  }
  cVar2 = Image::is_empty();
joined_r0x001062be:
  if (cVar2 == '\0') {
    cVar2 = Image::is_empty();
  }
  else {
    Image::load_png_from_buffer((Vector *)*param_1);
    cVar2 = Image::is_empty();
  }
  if (cVar2 == '\0') {
    cVar2 = Image::is_empty();
  }
  else {
    Image::load_jpg_from_buffer((Vector *)*param_1);
    cVar2 = Image::is_empty();
  }
  if (cVar2 == '\0') {
    cVar2 = Image::is_empty();
  }
  else {
    Image::load_jpg_from_buffer((Vector *)*param_1);
    cVar2 = Image::is_empty();
  }
  if (cVar2 != '\0') {
    local_60 = 0;
    local_50 = 0x23;
    local_58 = "FBX: Couldn\'t load image index \'%d\'";
    String::parse_latin1((StrRange *)&local_60);
    vformat<int>((String *)&local_58,(int)(StrRange *)&local_60);
    _err_print_error("_parse_image_bytes_into_image","modules/fbx/fbx_document.cpp",0x3ae,
                     (String *)&local_58,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  }
  CowData<char32_t>::_unref(aCStack_68);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Vector<double>::push_back(double) [clone .isra.0] */

void __thiscall Vector<double>::push_back(Vector<double> *this,double param_1)

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
  iVar1 = CowData<double>::resize<false>((CowData<double> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<double>::_copy_on_write((CowData<double> *)(this + 8));
        *(double *)(*(long *)(this + 8) + lVar3 * 8) = param_1;
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



/* CowData<Ref<Material> >::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Ref<Material>>::_copy_on_write(CowData<Ref<Material>> *this)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  char cVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar7 = 0x10;
  if (lVar1 * 8 != 0) {
    uVar7 = lVar1 * 8 - 1;
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar5 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  lVar8 = 0;
  *puVar5 = 1;
  puVar5[1] = lVar1;
  plVar6 = puVar5 + 2;
  if (lVar1 != 0) {
    do {
      lVar2 = *(long *)this;
      *plVar6 = 0;
      lVar2 = *(long *)(lVar2 + lVar8 * 8);
      if (lVar2 != 0) {
        *plVar6 = lVar2;
        cVar4 = RefCounted::reference();
        if (cVar4 == '\0') {
          *plVar6 = 0;
        }
      }
      lVar8 = lVar8 + 1;
      plVar6 = plVar6 + 1;
    } while (lVar1 != lVar8);
  }
  _unref(this);
  *(undefined8 **)this = puVar5 + 2;
  return;
}



/* CowData<Ref<GLTFSkin> >::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Ref<GLTFSkin>>::_copy_on_write(CowData<Ref<GLTFSkin>> *this)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  char cVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar7 = 0x10;
  if (lVar1 * 8 != 0) {
    uVar7 = lVar1 * 8 - 1;
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar5 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  lVar8 = 0;
  *puVar5 = 1;
  puVar5[1] = lVar1;
  plVar6 = puVar5 + 2;
  if (lVar1 != 0) {
    do {
      lVar2 = *(long *)this;
      *plVar6 = 0;
      lVar2 = *(long *)(lVar2 + lVar8 * 8);
      if (lVar2 != 0) {
        *plVar6 = lVar2;
        cVar4 = RefCounted::reference();
        if (cVar4 == '\0') {
          *plVar6 = 0;
        }
      }
      lVar8 = lVar8 + 1;
      plVar6 = plVar6 + 1;
    } while (lVar1 != lVar8);
  }
  _unref(this);
  *(undefined8 **)this = puVar5 + 2;
  return;
}



/* Vector<Ref<GLTFSkin> >::push_back(Ref<GLTFSkin>) [clone .isra.0] */

void __thiscall Vector<Ref<GLTFSkin>>::push_back(Vector<Ref<GLTFSkin>> *this,long *param_2)

{
  long *plVar1;
  Object *pOVar2;
  Object *pOVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)(this + 8) == 0) {
    lVar6 = 1;
  }
  else {
    lVar6 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar5 = CowData<Ref<GLTFSkin>>::resize<false>((CowData<Ref<GLTFSkin>> *)(this + 8),lVar6);
  if (iVar5 != 0) {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
    return;
  }
  if (*(long *)(this + 8) == 0) {
    lVar7 = -1;
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(*(long *)(this + 8) + -8);
    lVar7 = lVar6 + -1;
    if (-1 < lVar7) {
      CowData<Ref<GLTFSkin>>::_copy_on_write((CowData<Ref<GLTFSkin>> *)(this + 8));
      pOVar2 = (Object *)*param_2;
      plVar1 = (long *)(*(long *)(this + 8) + lVar7 * 8);
      pOVar3 = (Object *)*plVar1;
      if (pOVar2 == pOVar3) {
        return;
      }
      *plVar1 = (long)pOVar2;
      if ((pOVar2 != (Object *)0x0) && (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
        *plVar1 = 0;
      }
      if (pOVar3 == (Object *)0x0) {
        return;
      }
      cVar4 = RefCounted::unreference();
      if (cVar4 == '\0') {
        return;
      }
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 == '\0') {
        return;
      }
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
      return;
    }
  }
  _err_print_index_error
            ("set","./core/templates/cowdata.h",0xcf,lVar7,lVar6,"p_index","size()","",false,false);
  return;
}



/* CowData<Ref<GLTFNode> >::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Ref<GLTFNode>>::_copy_on_write(CowData<Ref<GLTFNode>> *this)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  char cVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar7 = 0x10;
  if (lVar1 * 8 != 0) {
    uVar7 = lVar1 * 8 - 1;
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar5 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  lVar8 = 0;
  *puVar5 = 1;
  puVar5[1] = lVar1;
  plVar6 = puVar5 + 2;
  if (lVar1 != 0) {
    do {
      lVar2 = *(long *)this;
      *plVar6 = 0;
      lVar2 = *(long *)(lVar2 + lVar8 * 8);
      if (lVar2 != 0) {
        *plVar6 = lVar2;
        cVar4 = RefCounted::reference();
        if (cVar4 == '\0') {
          *plVar6 = 0;
        }
      }
      lVar8 = lVar8 + 1;
      plVar6 = plVar6 + 1;
    } while (lVar1 != lVar8);
  }
  _unref(this);
  *(undefined8 **)this = puVar5 + 2;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FBXDocument::_parse_skins(Ref<FBXState>) */

int __thiscall FBXDocument::_parse_skins(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  Vector *pVVar3;
  Vector *pVVar4;
  CowData<Transform3D> *this;
  double dVar5;
  double dVar6;
  double dVar7;
  uint uVar8;
  undefined8 *puVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  String *pSVar16;
  String *pSVar17;
  Ref *pRVar18;
  char cVar19;
  int iVar20;
  int iVar21;
  ulong uVar22;
  undefined8 *puVar23;
  undefined1 (*pauVar24) [16];
  undefined1 (*pauVar25) [16];
  undefined8 *puVar26;
  void *pvVar27;
  long *plVar28;
  long *plVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long in_FS_OFFSET;
  bool bVar35;
  undefined1 auVar36 [16];
  undefined8 local_118;
  undefined8 local_f8;
  String *local_b8;
  CowData<char32_t> local_b0 [8];
  Ref *local_a8;
  undefined8 local_a0;
  String *local_98;
  long local_90;
  HashMap local_88 [8];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  lVar32 = *param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = (undefined1  [16])0x0;
  lVar30 = *(long *)(lVar32 + 0x558);
  local_70 = (undefined1  [16])0x0;
  local_60 = 2;
  plVar28 = *(long **)(lVar30 + 0x3b0);
  plVar1 = plVar28 + *(long *)(lVar30 + 0x3b8);
  if (plVar1 != plVar28) {
    do {
      puVar9 = (undefined8 *)*plVar28;
      if ((puVar9[0x12] == 0) || (puVar9[0x16] == 0)) {
        Vector<int>::push_back((Vector<int> *)(*param_2 + 0x5c8),-1);
      }
      else {
        local_b8 = (String *)0x0;
        Ref<GLTFSkin>::instantiate<>((Ref<GLTFSkin> *)&local_b8);
        pSVar16 = local_b8;
        lVar32 = puVar9[0x12];
        this = (CowData<Transform3D> *)(local_b8 + 0x260);
        if (lVar32 < 0) {
          _err_print_error("resize","./core/templates/cowdata.h",0x157,
                           "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0)
          ;
          goto LAB_001078d5;
        }
        lVar34 = *(long *)(local_b8 + 0x260);
        if (lVar34 != 0) {
          lVar33 = *(long *)(lVar34 + -8);
          if (lVar32 != lVar33) {
            if (lVar32 != 0) {
              CowData<Transform3D>::_copy_on_write(this);
              lVar34 = lVar33 * 0x30;
              if (lVar34 != 0) {
                uVar22 = lVar34 - 1U | lVar34 - 1U >> 1;
                uVar22 = uVar22 | uVar22 >> 2;
                uVar22 = uVar22 | uVar22 >> 4;
                uVar22 = uVar22 | uVar22 >> 8;
                uVar22 = uVar22 | uVar22 >> 0x10;
                lVar34 = (uVar22 | uVar22 >> 0x20) + 1;
              }
              goto LAB_001073c8;
            }
            LOCK();
            plVar2 = (long *)(lVar34 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar32 = *(long *)(local_b8 + 0x260);
              *(undefined8 *)(local_b8 + 0x260) = 0;
              Memory::free_static((void *)(lVar32 + -0x10),false);
              lVar32 = puVar9[0x12];
            }
            else {
              *(undefined8 *)(local_b8 + 0x260) = 0;
              lVar32 = puVar9[0x12];
            }
          }
          goto LAB_001074d0;
        }
        if (lVar32 != 0) {
          lVar33 = 0;
          CowData<Transform3D>::_copy_on_write(this);
          lVar34 = 0;
LAB_001073c8:
          if (lVar32 * 0x30 == 0) {
LAB_001079b8:
            _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                             "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                             ,0,0);
            lVar32 = puVar9[0x12];
          }
          else {
            uVar22 = lVar32 * 0x30 - 1;
            uVar22 = uVar22 | uVar22 >> 1;
            uVar22 = uVar22 | uVar22 >> 2;
            uVar22 = uVar22 | uVar22 >> 4;
            uVar22 = uVar22 | uVar22 >> 8;
            uVar22 = uVar22 | uVar22 >> 0x10;
            uVar22 = uVar22 | uVar22 >> 0x20;
            if (uVar22 == 0xffffffffffffffff) goto LAB_001079b8;
            if (lVar33 < lVar32) {
              if (uVar22 + 1 == lVar34) {
LAB_00107860:
                puVar26 = *(undefined8 **)(pSVar16 + 0x260);
                if (puVar26 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
                  pcVar10 = (code *)invalidInstructionException();
                  (*pcVar10)();
                }
                lVar34 = puVar26[-1];
              }
              else {
                if (lVar33 == 0) {
                  puVar23 = (undefined8 *)Memory::alloc_static(uVar22 + 0x11,false);
                  if (puVar23 != (undefined8 *)0x0) {
                    puVar26 = puVar23 + 2;
                    *puVar23 = 1;
                    puVar23[1] = 0;
                    *(undefined8 **)(pSVar16 + 0x260) = puVar26;
                    lVar34 = 0;
                    goto LAB_00107475;
                  }
                  _err_print_error("resize","./core/templates/cowdata.h",0x171,
                                   "Parameter \"mem_new\" is null.",0,0);
                  lVar32 = puVar9[0x12];
                  goto LAB_001074d0;
                }
                pvVar27 = (void *)(*(long *)(pSVar16 + 0x260) + -0x10);
                puVar23 = (undefined8 *)Memory::realloc_static(pvVar27,uVar22 + 0x11,false);
                if (puVar23 == (undefined8 *)0x0) {
                  iVar20 = CowData<Vector2>::_realloc((long)pvVar27);
                  if (iVar20 != 0) goto LAB_001078d5;
                  goto LAB_00107860;
                }
                puVar26 = puVar23 + 2;
                *puVar23 = 1;
                *(undefined8 **)(pSVar16 + 0x260) = puVar26;
                lVar34 = puVar23[1];
              }
LAB_00107475:
              uVar8 = _LC78;
              if (lVar34 < lVar32) {
                auVar36 = ZEXT416(_LC78);
                pauVar24 = (undefined1 (*) [16])(puVar26 + lVar34 * 6);
                do {
                  *(undefined8 *)((long)pauVar24[2] + 4) = 0;
                  pauVar25 = pauVar24 + 3;
                  *pauVar24 = auVar36;
                  pauVar24[1] = auVar36;
                  *(uint *)pauVar24[2] = uVar8;
                  *(undefined4 *)((long)pauVar24[2] + 0xc) = 0;
                  pauVar24 = pauVar25;
                } while ((undefined1 (*) [16])(puVar26 + lVar32 * 6) != pauVar25);
              }
              puVar26[-1] = lVar32;
              lVar32 = puVar9[0x12];
            }
            else {
              puVar23 = *(undefined8 **)(pSVar16 + 0x260);
              if (uVar22 + 1 == lVar34) {
LAB_001077d5:
                if (puVar23 == (undefined8 *)0x0) {
                  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
                  pcVar10 = (code *)invalidInstructionException();
                  (*pcVar10)();
                }
              }
              else {
                puVar23 = puVar23 + -2;
                puVar26 = (undefined8 *)Memory::realloc_static(puVar23,uVar22 + 0x11,false);
                if (puVar26 == (undefined8 *)0x0) {
                  iVar20 = CowData<Vector2>::_realloc((long)puVar23);
                  if (iVar20 != 0) {
LAB_001078d5:
                    lVar32 = puVar9[0x12];
                    goto LAB_001074d0;
                  }
                  puVar23 = *(undefined8 **)(pSVar16 + 0x260);
                  goto LAB_001077d5;
                }
                puVar23 = puVar26 + 2;
                *puVar26 = 1;
                *(undefined8 **)(pSVar16 + 0x260) = puVar23;
              }
              puVar23[-1] = lVar32;
              lVar32 = puVar9[0x12];
            }
          }
LAB_001074d0:
          if (0 < (int)lVar32) {
            lVar32 = 0;
            do {
              lVar34 = *(long *)(puVar9[0x11] + lVar32 * 8);
              dVar11 = *(double *)(lVar34 + 0x90);
              dVar12 = *(double *)(lVar34 + 0xd8);
              dVar13 = *(double *)(lVar34 + 0xe0);
              dVar5 = *(double *)(lVar34 + 0xb8);
              dVar14 = *(double *)(lVar34 + 0xb0);
              dVar15 = *(double *)(lVar34 + 0xc0);
              dVar6 = *(double *)(lVar34 + 0x98);
              dVar7 = *(double *)(lVar34 + 0xa8);
              lVar33 = lVar32;
              if (*(long *)(pSVar16 + 0x260) == 0) {
                lVar31 = 0;
                goto LAB_0010776f;
              }
              lVar31 = *(long *)(*(long *)(pSVar16 + 0x260) + -8);
              if (lVar31 <= lVar32) goto LAB_0010776f;
              local_f8 = CONCAT44((float)*(double *)(lVar34 + 0xa0),
                                  (float)*(double *)(lVar34 + 0x88));
              local_118 = CONCAT44((float)*(double *)(lVar34 + 0xd0),
                                   (float)*(double *)(lVar34 + 200));
              CowData<Transform3D>::_copy_on_write(this);
              puVar23 = (undefined8 *)(lVar32 * 0x30 + *(long *)(pSVar16 + 0x260));
              *puVar23 = local_f8;
              puVar23[1] = CONCAT44((float)dVar11,(float)dVar5);
              puVar23[2] = CONCAT44((float)dVar15,(float)dVar7);
              puVar23[3] = CONCAT44((float)dVar14,(float)dVar6);
              puVar23[4] = local_118;
              puVar23[5] = CONCAT44((float)dVar13,(float)dVar12);
              uVar8 = *(uint *)(*(long *)(lVar34 + 0x80) + 0x34);
              Vector<int>::push_back((Vector<int> *)(pSVar16 + 0x268),uVar8);
              Vector<int>::push_back((Vector<int> *)(pSVar16 + 0x248),uVar8);
              lVar34 = *param_2;
              lVar33 = (long)(int)uVar8;
              lVar31 = *(long *)(lVar34 + 0x2a8);
              if (lVar33 < 0) {
                if (lVar31 == 0) {
LAB_001077c0:
                  lVar31 = 0;
                }
                else {
LAB_0010774d:
                  lVar31 = *(long *)(lVar31 + -8);
                }
                goto LAB_0010776f;
              }
              if (lVar31 == 0) goto LAB_001077c0;
              if (*(long *)(lVar31 + -8) <= lVar33) goto LAB_0010774d;
              lVar32 = lVar32 + 1;
              CowData<Ref<GLTFNode>>::_copy_on_write((CowData<Ref<GLTFNode>> *)(lVar34 + 0x2a8));
              *(undefined1 *)(*(long *)(*(long *)(lVar34 + 0x2a8) + (ulong)uVar8 * 8) + 0x290) = 1;
            } while ((int)lVar32 < *(int *)(puVar9 + 0x12));
          }
        }
        pSVar17 = local_b8;
        if (puVar9[1] == 0) {
          itos((long)local_b0);
          local_a8 = (Ref *)0x0;
          String::parse_latin1((String *)&local_a8,"skin_%s");
          vformat<String>((CowData<char32_t> *)&local_98,(String *)&local_a8,local_b0);
          Resource::set_name(pSVar16);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
          CowData<char32_t>::_unref(local_b0);
        }
        else {
          String::utf8((char *)&local_98,(int)*puVar9);
          Resource::set_name(pSVar16);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        }
        lVar32 = *(long *)(*param_2 + 0x3c8);
        if (lVar32 == 0) {
          iVar20 = 0;
        }
        else {
          iVar20 = *(int *)(lVar32 + -8);
        }
        Vector<int>::push_back((Vector<int> *)(*param_2 + 0x5c8),iVar20);
        lVar32 = *param_2;
        if (pSVar17 == (String *)0x0) {
LAB_00107717:
          local_98 = (String *)0x0;
        }
        else {
          local_98 = pSVar17;
          cVar19 = RefCounted::reference();
          if (cVar19 == '\0') goto LAB_00107717;
        }
        Vector<Ref<GLTFSkin>>::push_back((Vector<Ref<GLTFSkin>> *)(lVar32 + 0x3c0));
        Ref<GLTFSkin>::unref((Ref<GLTFSkin> *)&local_98);
        Ref<GLTFSkin>::unref((Ref<GLTFSkin> *)&local_b8);
      }
      plVar28 = plVar28 + 1;
    } while (plVar1 != plVar28);
    lVar32 = *param_2;
  }
  plVar28 = *(long **)(lVar30 + 0x2f0);
  plVar1 = plVar28 + *(long *)(lVar30 + 0x2f8);
  for (; plVar1 != plVar28; plVar28 = plVar28 + 1) {
    plVar29 = *(long **)(*plVar28 + 0x38);
    plVar2 = plVar29 + *(long *)(*plVar28 + 0x40);
    for (; plVar2 != plVar29; plVar29 = plVar29 + 1) {
      lVar30 = *plVar29;
      lVar34 = *(long *)(lVar32 + 0x2a8);
      uVar8 = *(uint *)(lVar30 + 0x34);
      lVar33 = (long)(int)uVar8;
      if (lVar33 < 0) {
        if (lVar34 == 0) {
LAB_00107980:
          lVar31 = 0;
        }
        else {
LAB_00107889:
          lVar31 = *(long *)(lVar34 + -8);
        }
        goto LAB_0010776f;
      }
      if (lVar34 == 0) goto LAB_00107980;
      if (*(long *)(lVar34 + -8) <= lVar33) goto LAB_00107889;
      CowData<Ref<GLTFNode>>::_copy_on_write((CowData<Ref<GLTFNode>> *)(lVar32 + 0x2a8));
      if (*(char *)(*(long *)(*(long *)(lVar32 + 0x2a8) + (ulong)uVar8 * 8) + 0x290) == '\0') {
        lVar32 = *param_2;
        if (*(long *)(lVar32 + 0x2a8) == 0) goto LAB_00107980;
        lVar31 = *(long *)(*(long *)(lVar32 + 0x2a8) + -8);
        if (lVar31 <= lVar33) goto LAB_0010776f;
        CowData<Ref<GLTFNode>>::_copy_on_write((CowData<Ref<GLTFNode>> *)(lVar32 + 0x2a8));
        *(undefined1 *)(*(long *)(*(long *)(lVar32 + 0x2a8) + (ulong)uVar8 * 8) + 0x290) = 1;
        lVar30 = *(long *)(lVar30 + 0x80);
        if ((lVar30 != 0) && (*(int *)(lVar30 + 0xd0) == 5)) goto LAB_00106ec6;
        local_b8 = (String *)0x0;
        Ref<GLTFSkin>::instantiate<>((Ref<GLTFSkin> *)&local_b8);
        pSVar16 = local_b8;
        Vector<int>::push_back((Vector<int> *)(local_b8 + 0x268),uVar8);
        Vector<int>::push_back((Vector<int> *)(pSVar16 + 0x248),uVar8);
        itos((long)local_b0);
        local_a8 = (Ref *)0x0;
        String::parse_latin1((String *)&local_a8,"skin_%s");
        vformat<String>((CowData<char32_t> *)&local_98,(String *)&local_a8,local_b0);
        Resource::set_name(pSVar16);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        CowData<char32_t>::_unref(local_b0);
        lVar30 = *(long *)(*param_2 + 0x3c8);
        if (lVar30 == 0) {
          iVar20 = 0;
        }
        else {
          iVar20 = *(int *)(lVar30 + -8);
        }
        Vector<int>::push_back((Vector<int> *)(*param_2 + 0x5c8),iVar20);
        lVar30 = *param_2;
        if (pSVar16 == (String *)0x0) {
LAB_00106e9d:
          local_98 = (String *)0x0;
        }
        else {
          local_98 = pSVar16;
          cVar19 = RefCounted::reference();
          if (cVar19 == '\0') goto LAB_00106e9d;
        }
        Vector<Ref<GLTFSkin>>::push_back
                  ((Vector<Ref<GLTFSkin>> *)(lVar30 + 0x3c0),(CowData<char32_t> *)&local_98);
        Ref<GLTFSkin>::unref((Ref<GLTFSkin> *)&local_98);
        Ref<GLTFSkin>::unref((Ref<GLTFSkin> *)&local_b8);
      }
LAB_00106ec6:
      lVar32 = *param_2;
    }
  }
  local_90 = 0;
  lVar30 = *(long *)(lVar32 + 0x5d0);
  if (lVar30 != 0) {
    plVar1 = (long *)(lVar30 + -0x10);
    do {
      lVar30 = *plVar1;
      if (lVar30 == 0) goto LAB_00107a81;
      LOCK();
      lVar34 = *plVar1;
      bVar35 = lVar30 == lVar34;
      if (bVar35) {
        *plVar1 = lVar30 + 1;
        lVar34 = lVar30;
      }
      UNLOCK();
    } while (!bVar35);
    if (lVar34 == -1) {
LAB_00107a81:
      lVar32 = *param_2;
      lVar30 = local_90;
    }
    else {
      local_90 = *(long *)(lVar32 + 0x5d0);
      lVar32 = *param_2;
      lVar30 = local_90;
    }
  }
  if (*(long *)(lVar32 + 0x5e0) != lVar30) {
    CowData<int>::_unref((CowData<int> *)(lVar32 + 0x5e0));
    *(long *)(lVar32 + 0x5e0) = lVar30;
    local_90 = 0;
  }
  CowData<int>::_unref((CowData<int> *)&local_90);
  lVar30 = *param_2;
  local_90 = 0;
  pVVar3 = (Vector *)(lVar30 + 0x3c0);
  pVVar4 = (Vector *)(lVar30 + 0x5c8);
  if (*(long *)(lVar30 + 0x2a8) != 0) {
    plVar1 = (long *)(*(long *)(lVar30 + 0x2a8) + -0x10);
    do {
      lVar32 = *plVar1;
      if (lVar32 == 0) goto LAB_00106fd1;
      LOCK();
      lVar34 = *plVar1;
      bVar35 = lVar32 == lVar34;
      if (bVar35) {
        *plVar1 = lVar32 + 1;
        lVar34 = lVar32;
      }
      UNLOCK();
    } while (!bVar35);
    if (lVar34 != -1) {
      local_90 = *(undefined8 *)(lVar30 + 0x2a8);
    }
LAB_00106fd1:
    lVar30 = *param_2;
  }
  local_a0 = 0;
  if (*(long *)(lVar30 + 0x3c8) != 0) {
    plVar1 = (long *)(*(long *)(lVar30 + 0x3c8) + -0x10);
    do {
      lVar32 = *plVar1;
      if (lVar32 == 0) goto LAB_00107013;
      LOCK();
      lVar34 = *plVar1;
      bVar35 = lVar32 == lVar34;
      if (bVar35) {
        *plVar1 = lVar32 + 1;
        lVar34 = lVar32;
      }
      UNLOCK();
    } while (!bVar35);
    if (lVar34 != -1) {
      local_a0 = *(undefined8 *)(lVar30 + 0x3c8);
    }
LAB_00107013:
    lVar30 = *param_2;
  }
  iVar20 = SkinTool::_asset_parse_skins
                     ((Vector *)(lVar30 + 0x5d8),(Vector *)&local_a8,(Vector *)&local_98,pVVar4,
                      pVVar3,local_88);
  CowData<Ref<GLTFSkin>>::_unref((CowData<Ref<GLTFSkin>> *)&local_a0);
  CowData<Ref<GLTFNode>>::_unref((CowData<Ref<GLTFNode>> *)&local_90);
  if (iVar20 == 0) {
    lVar30 = *param_2;
    lVar32 = *(long *)(lVar30 + 0x3c8);
    if (lVar32 != 0) {
      lVar34 = 0;
      do {
        if (*(long *)(lVar32 + -8) <= lVar34) break;
        CowData<Ref<GLTFSkin>>::_copy_on_write((CowData<Ref<GLTFSkin>> *)(lVar30 + 0x3c8));
        local_a8 = (Ref *)0x0;
        Ref<GLTFSkin>::operator=
                  ((Ref<GLTFSkin> *)&local_a8,*(Ref **)(*(long *)(lVar30 + 0x3c8) + lVar34 * 8));
        pRVar18 = local_a8;
        if (local_a8 == (Ref *)0x0) {
          _err_print_error("_parse_skins","modules/fbx/fbx_document.cpp",0x984,
                           "Condition \"skin.is_null()\" is true. Returning: ERR_PARSE_ERROR",0,0);
LAB_00107ab7:
          iVar20 = 0x2b;
          Ref<GLTFSkin>::unref((Ref<GLTFSkin> *)&local_a8);
          goto LAB_0010723e;
        }
        local_98 = (String *)0x0;
        Ref<GLTFSkin>::operator=((Ref<GLTFSkin> *)&local_98,local_a8);
        iVar21 = SkinTool::_expand_skin(*param_2 + 0x2a0,(Ref<GLTFSkin> *)&local_98);
        Ref<GLTFSkin>::unref((Ref<GLTFSkin> *)&local_98);
        if (iVar21 != 0) {
          _err_print_error("_parse_skins","modules/fbx/fbx_document.cpp",0x986,
                           "Condition \"SkinTool::_expand_skin(p_state->nodes, skin)\" is true. Returning: ERR_PARSE_ERROR"
                           ,0,0);
          goto LAB_00107ab7;
        }
        local_98 = (String *)0x0;
        Ref<GLTFSkin>::operator=((Ref<GLTFSkin> *)&local_98,pRVar18);
        iVar21 = SkinTool::_verify_skin(*param_2 + 0x2a0,(Ref<GLTFSkin> *)&local_98);
        Ref<GLTFSkin>::unref((Ref<GLTFSkin> *)&local_98);
        if (iVar21 != 0) {
          _err_print_error("_parse_skins","modules/fbx/fbx_document.cpp",0x987,
                           "Condition \"SkinTool::_verify_skin(p_state->nodes, skin)\" is true. Returning: ERR_PARSE_ERROR"
                           ,0,0);
          goto LAB_00107ab7;
        }
        lVar34 = lVar34 + 1;
        Ref<GLTFSkin>::unref((Ref<GLTFSkin> *)&local_a8);
        lVar30 = *param_2;
        lVar32 = *(long *)(lVar30 + 0x3c8);
      } while (lVar32 != 0);
    }
    cVar19 = is_print_verbose_enabled();
    if (cVar19 != '\0') {
      itos((long)&local_a8);
      operator+((char *)&local_98,(String *)"FBX: Total skins: ");
      ::Variant::Variant((Variant *)local_58,(String *)&local_98);
      print_line((Variant *)local_58);
      if (::Variant::needs_deinit[local_58[0]] != '\0') {
        ::Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    }
    for (puVar9 = (undefined8 *)local_70._0_8_; puVar9 != (undefined8 *)0x0;
        puVar9 = (undefined8 *)*puVar9) {
      lVar33 = (long)*(int *)(puVar9 + 2);
      if (*(char *)((long)puVar9 + 0x14) != '\0') {
        lVar30 = *param_2;
        if (*(long *)(lVar30 + 0x2a8) == 0) {
          if (lVar33 < 0) {
            lVar31 = 0;
LAB_0010776f:
            _err_print_index_error
                      ("operator[]","./core/templates/vector.h",0x38,lVar33,lVar31,"p_index",
                       "((Vector<T> *)(this))->_cowdata.size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar10 = (code *)invalidInstructionException();
            (*pcVar10)();
          }
        }
        else {
          lVar31 = *(long *)(*(long *)(lVar30 + 0x2a8) + -8);
          if (lVar33 < lVar31) {
            if (lVar33 < 0) goto LAB_0010776f;
            CowData<Ref<GLTFNode>>::_copy_on_write((CowData<Ref<GLTFNode>> *)(lVar30 + 0x2a8));
            *(undefined1 *)(*(long *)(*(long *)(lVar30 + 0x2a8) + lVar33 * 8) + 0x290) = 1;
          }
        }
      }
    }
  }
LAB_0010723e:
  if ((void *)local_80._0_8_ != (void *)0x0) {
    pvVar27 = (void *)local_80._0_8_;
    if (local_60._4_4_ != 0) {
      uVar8 = *(uint *)(hash_table_size_primes + (local_60 & 0xffffffff) * 4);
      if (uVar8 == 0) {
        local_60 = local_60 & 0xffffffff;
        local_70 = (undefined1  [16])0x0;
      }
      else {
        lVar30 = 0;
        do {
          if (*(int *)(local_80._8_8_ + lVar30) != 0) {
            *(int *)(local_80._8_8_ + lVar30) = 0;
            Memory::free_static(*(void **)((long)pvVar27 + lVar30 * 2),false);
            *(undefined8 *)(local_80._0_8_ + lVar30 * 2) = 0;
            pvVar27 = (void *)local_80._0_8_;
          }
          lVar30 = lVar30 + 4;
        } while (lVar30 != (ulong)uVar8 * 4);
        local_60 = local_60 & 0xffffffff;
        local_70 = (undefined1  [16])0x0;
        if (pvVar27 == (void *)0x0) goto LAB_001072dc;
      }
    }
    Memory::free_static(pvVar27,false);
    Memory::free_static((void *)local_80._8_8_,false);
  }
LAB_001072dc:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar20;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FBXDocument::_parse_nodes(Ref<FBXState>) */

undefined8 __thiscall FBXDocument::_parse_nodes(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  Object *pOVar4;
  code *pcVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  Resource *this;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long extraout_RDX;
  long lVar16;
  String *pSVar17;
  long lVar18;
  Vector3 *pVVar19;
  String *pSVar20;
  Resource *pRVar21;
  Quaternion *pQVar22;
  long *plVar23;
  Object *pOVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long in_FS_OFFSET;
  byte bVar29;
  float fVar30;
  float extraout_XMM0_Da;
  undefined1 auVar31 [16];
  char local_2b3;
  char local_2b1;
  CowData<char32_t> local_288 [8];
  undefined8 local_280;
  char *local_278;
  undefined8 local_270;
  undefined8 local_268;
  float local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined1 local_248 [16];
  undefined1 local_238 [16];
  undefined4 local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  Quaternion local_218 [16];
  undefined1 local_208 [16];
  undefined4 local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  undefined4 local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined1 local_1a0 [16];
  double local_190;
  double dStack_188;
  undefined1 local_180 [16];
  double local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  float local_100;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_40;
  
  bVar29 = 0;
  lVar16 = *param_2;
  lVar10 = *(long *)(lVar16 + 0x558);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0 < *(int *)(lVar10 + 0x2b8)) {
    lVar16 = 0;
    do {
      puVar3 = *(undefined8 **)(*(long *)(lVar10 + 0x2b0) + lVar16 * 8);
      this = (Resource *)operator_new(0x2b8,"");
      pRVar21 = this;
      for (lVar15 = 0x57; lVar15 != 0; lVar15 = lVar15 + -1) {
        *(undefined8 *)pRVar21 = 0;
        pRVar21 = pRVar21 + (ulong)bVar29 * -0x10 + 8;
      }
      Resource::Resource(this);
      *(undefined8 *)(this + 0x240) = 0;
      auVar31 = ZEXT416(_LC78);
      *(undefined ***)this = &PTR__initialize_classv_0012e448;
      uVar14 = _LC39;
      *(undefined4 *)(this + 0x270) = 0x3f800000;
      *(undefined8 *)(this + 0x248) = uVar14;
      *(undefined8 *)(this + 0x274) = 0;
      *(undefined4 *)(this + 0x27c) = 0;
      this[0x290] = (Resource)0x0;
      *(undefined8 *)(this + 0x2a0) = 0;
      *(undefined4 *)(this + 0x2a8) = 0xffffffff;
      *(undefined1 (*) [16])(this + 0x250) = auVar31;
      *(undefined1 (*) [16])(this + 0x260) = auVar31;
      *(undefined4 *)(this + 0x280) = 0xffffffff;
      *(undefined4 *)(this + 0x284) = 0xffffffff;
      *(undefined4 *)(this + 0x288) = 0xffffffff;
      *(undefined4 *)(this + 0x28c) = 0xffffffff;
      Dictionary::Dictionary((Dictionary *)(this + 0x2b0));
      postinitialize_handler((Object *)this);
      cVar7 = RefCounted::init_ref();
      if (cVar7 == '\0') {
        _DAT_0000024c = 0;
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      cVar8 = RefCounted::reference();
      pSVar17 = (String *)0x0;
      if (cVar8 != '\0') {
        pSVar17 = (String *)this;
      }
      cVar8 = RefCounted::unreference();
      if ((cVar8 != '\0') && (cVar8 = predelete_handler((Object *)this), cVar8 != '\0')) {
        (**(code **)(*(long *)this + 0x140))(this);
        Memory::free_static(this,false);
      }
      *(undefined4 *)(pSVar17 + 0x24c) = *(undefined4 *)(puVar3 + 0x89);
      if (puVar3[1] == 0) {
        if (*(char *)((long)puVar3 + 0x441) != '\0') {
          local_280 = 0;
          local_278 = "RootNode";
          local_270 = 8;
          String::parse_latin1((StrRange *)&local_280);
          Resource::set_name(pSVar17);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_280);
        }
      }
      else {
        String::utf8((char *)&local_278,(int)*puVar3);
        Resource::set_name(pSVar17);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_278);
        Resource::get_name();
        GLTFNode::set_original_name(pSVar17,(CowData<char32_t> *)&local_278);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_278);
      }
      if (puVar3[0x15] != 0) {
        *(undefined4 *)(pSVar17 + 0x284) = *(undefined4 *)(puVar3[0x15] + 0x34);
      }
      if (puVar3[0x14] != 0) {
        *(undefined4 *)(pSVar17 + 0x2a8) = *(undefined4 *)(puVar3[0x14] + 0x34);
      }
      if (puVar3[0x13] != 0) {
        *(undefined4 *)(pSVar17 + 0x280) = *(undefined4 *)(puVar3[0x13] + 0x34);
      }
      local_1e8 = ZEXT416(_LC78);
      fStack_1bc = (float)(double)puVar3[0x20];
      fStack_1c4 = (float)(double)puVar3[0x1e];
      fStack_1c0 = (float)(double)puVar3[0x1f];
      local_100 = (float)(double)puVar3[0x27];
      local_108 = CONCAT44((float)(double)puVar3[0x26],(float)(double)puVar3[0x25]);
      local_1c8 = 0x3f800000;
      local_a8 = CONCAT44((float)SUB168(*(undefined1 (*) [16])(puVar3 + 0x21),8),
                          (float)SUB168(*(undefined1 (*) [16])(puVar3 + 0x21),0));
      uStack_a0 = CONCAT44((float)(double)puVar3[0x24],(float)(double)puVar3[0x23]);
      local_1d8 = local_1e8;
      Basis::set_quaternion_scale((Quaternion *)local_1e8,(Vector3 *)&local_a8);
      local_248 = ZEXT416(_LC78);
      lVar15 = puVar3[0x10];
      local_228 = 0x3f800000;
      fStack_224 = 0.0;
      fStack_220 = 0.0;
      fStack_21c = 0.0;
      *(undefined8 *)(pSVar17 + 0x250) = local_1e8._0_8_;
      *(undefined8 *)(pSVar17 + 600) = local_1e8._8_8_;
      *(undefined8 *)(pSVar17 + 0x260) = local_1d8._0_8_;
      *(undefined8 *)(pSVar17 + 0x268) = local_1d8._8_8_;
      *(ulong *)(pSVar17 + 0x270) = CONCAT44(fStack_1c4,local_1c8);
      *(ulong *)(pSVar17 + 0x278) = CONCAT44(fStack_1bc,fStack_1c0);
      local_238 = local_248;
      if (lVar15 == 0) {
LAB_00107e89:
        local_a8 = *(undefined8 *)(pSVar17 + 0x250);
        uStack_a0 = *(undefined8 *)(pSVar17 + 600);
        local_98 = *(undefined8 *)(pSVar17 + 0x260);
        uStack_90 = *(undefined8 *)(pSVar17 + 0x268);
        local_88 = *(undefined8 *)(pSVar17 + 0x270);
        uStack_80 = *(undefined8 *)(pSVar17 + 0x278);
      }
      else {
        lVar18 = puVar3[10];
        lVar15 = lVar18 + puVar3[0xb] * 0x30;
        if (lVar15 == lVar18) goto LAB_00107e89;
        local_2b3 = '\0';
        local_2b1 = '\0';
        do {
          lVar26 = ufbx_as_skin_cluster(*(undefined8 *)(lVar18 + 8));
          if (lVar26 != 0) {
            lVar25 = *(long *)(lVar26 + 0x50);
            lVar27 = lVar25 + *(long *)(lVar26 + 0x58) * 0x30;
joined_r0x001081cc:
            if (lVar25 != lVar27) {
              lVar11 = ufbx_as_skin_deformer(*(undefined8 *)(lVar25 + 8));
              if (lVar11 == 0) goto LAB_001081d8;
              lVar25 = *(long *)(puVar3[0x10] + 0x50);
              lVar27 = lVar25 + *(long *)(puVar3[0x10] + 0x58) * 0x30;
              cVar8 = local_2b3;
              cVar6 = local_2b1;
              for (; local_2b3 = cVar8, local_2b1 = cVar6, lVar27 != lVar25; lVar25 = lVar25 + 0x30)
              {
                lVar12 = ufbx_as_skin_cluster(*(undefined8 *)(lVar25 + 8));
                if (lVar12 != 0) {
                  lVar28 = *(long *)(lVar12 + 0x50);
                  lVar2 = lVar28 + *(long *)(lVar12 + 0x58) * 0x30;
                  for (; lVar28 != lVar2; lVar28 = lVar28 + 0x30) {
                    lVar13 = ufbx_as_skin_deformer(*(undefined8 *)(lVar28 + 8));
                    if (lVar13 != 0) {
                      if (lVar11 == lVar13) {
                        local_168 = *(undefined8 *)(lVar26 + 0x148);
                        uStack_160 = *(undefined8 *)(lVar26 + 0x150);
                        pQVar22 = local_218;
                        local_158 = *(undefined8 *)(lVar26 + 0x158);
                        uStack_150 = *(undefined8 *)(lVar26 + 0x160);
                        local_148 = *(undefined8 *)(lVar26 + 0x168);
                        uStack_140 = *(undefined8 *)(lVar26 + 0x170);
                        local_138 = *(undefined8 *)(lVar26 + 0x178);
                        uStack_130 = *(undefined8 *)(lVar26 + 0x180);
                        local_128 = *(undefined8 *)(lVar26 + 0x188);
                        uStack_120 = *(undefined8 *)(lVar26 + 400);
                        local_118 = *(undefined8 *)(lVar26 + 0x198);
                        uStack_110 = *(undefined8 *)(lVar26 + 0x1a0);
                        ufbx_matrix_invert((Variant *)&local_108,lVar12 + 0x148);
                        ufbx_matrix_mul((Vector3 *)&local_a8,(Variant *)&local_108,&local_168);
                        ufbx_matrix_to_transform(&local_1b8,(Vector3 *)&local_a8);
                        local_218 = (Quaternion  [16])ZEXT416(_LC78);
                        pVVar19 = (Vector3 *)&local_258;
                        fStack_1f4 = (float)local_1b8;
                        fStack_1f0 = (float)dStack_1b0;
                        fStack_1ec = (float)local_1a8;
                        local_260 = (float)local_170;
                        local_268 = CONCAT44((float)local_180._8_8_,(float)local_180._0_8_);
                        uStack_250 = CONCAT44((float)dStack_188,(float)local_190);
                        local_258 = CONCAT44((float)local_1a0._8_8_,(float)local_1a0._0_8_);
                        local_1f8 = 0x3f800000;
                        local_208 = (undefined1  [16])local_218;
                        Basis::set_quaternion_scale(pQVar22,pVVar19);
                        local_2b3 = cVar7;
                        if (cVar8 == '\0') {
                          local_248[0] = local_218[0];
                          local_248[1] = local_218[1];
                          local_248[2] = local_218[2];
                          local_248[3] = local_218[3];
                          local_248[4] = local_218[4];
                          local_248[5] = local_218[5];
                          local_248[6] = local_218[6];
                          local_248[7] = local_218[7];
                          local_248[8] = local_218[8];
                          local_248[9] = local_218[9];
                          local_248[10] = local_218[10];
                          local_248[0xb] = local_218[0xb];
                          local_248[0xc] = local_218[0xc];
                          local_248[0xd] = local_218[0xd];
                          local_248[0xe] = local_218[0xe];
                          local_248[0xf] = local_218[0xf];
                          local_228 = local_1f8;
                          fStack_224 = fStack_1f4;
                          fStack_220 = fStack_1f0;
                          fStack_21c = fStack_1ec;
                          local_238 = local_208;
                        }
                        else {
                          local_2b1 = cVar8;
                          if (cVar6 == '\0') {
                            fVar30 = (float)_relative_error((Vector3 *)pQVar22,pVVar19);
                            fVar30 = fVar30 + 0.0;
                            do {
                              lVar12 = _relative_error((Vector3 *)pQVar22,pVVar19);
                              fVar30 = fVar30 + extraout_XMM0_Da;
                            } while (extraout_RDX != lVar12);
                            local_2b1 = cVar6;
                            if (__LC148 <= fVar30) {
                              Resource::get_name();
                              local_278 = 
                              "FBX: Node \'%s\' has multiple bind poses, using initial pose as rest pose."
                              ;
                              local_280 = 0;
                              local_270 = 0x48;
                              String::parse_latin1((StrRange *)&local_280);
                              vformat<String>((CowData<char32_t> *)&local_278,(StrRange *)&local_280
                                              ,local_288);
                              _err_print_error("_parse_nodes","modules/fbx/fbx_document.cpp",0x19d,
                                               (CowData<char32_t> *)&local_278,0,1);
                              CowData<char32_t>::_unref((CowData<char32_t> *)&local_278);
                              CowData<char32_t>::_unref((CowData<char32_t> *)&local_280);
                              CowData<char32_t>::_unref(local_288);
                              local_2b1 = cVar8;
                            }
                          }
                        }
                      }
                      break;
                    }
                  }
                }
                cVar8 = local_2b3;
                cVar6 = local_2b1;
              }
            }
          }
          lVar18 = lVar18 + 0x30;
        } while (lVar18 != lVar15);
        if ((local_2b1 == '\x01') || (local_2b3 == '\0')) {
          pSVar20 = pSVar17 + 0x250;
          pVVar19 = (Vector3 *)&local_a8;
          for (lVar15 = 0xc; lVar15 != 0; lVar15 = lVar15 + -1) {
            *(undefined4 *)pVVar19 = *(undefined4 *)pSVar20;
            pSVar20 = pSVar20 + (ulong)bVar29 * -8 + 4;
            pVVar19 = pVVar19 + (ulong)bVar29 * -8 + 4;
          }
        }
        else {
          local_88 = CONCAT44(fStack_224,local_228);
          uStack_80 = CONCAT44(fStack_21c,fStack_220);
          local_a8 = local_248._0_8_;
          uStack_a0 = local_248._8_8_;
          local_98 = local_238._0_8_;
          uStack_90 = local_238._8_8_;
        }
      }
      ::Variant::Variant((Variant *)&local_108,(Transform3D *)&local_a8);
      StringName::StringName((StringName *)&local_278,"GODOT_rest_transform",false);
      GLTFNode::set_additional_data(pSVar17,(CowData<char32_t> *)&local_278,(Variant *)&local_108);
      if ((StringName::configured != '\0') && (local_278 != (char *)0x0)) {
        StringName::unref();
      }
      if (::Variant::needs_deinit[(int)local_108] != '\0') {
        ::Variant::_clear_internal();
      }
      plVar23 = (long *)puVar3[0x11];
      plVar1 = plVar23 + puVar3[0x12];
      for (; plVar1 != plVar23; plVar23 = plVar23 + 1) {
        Vector<int>::push_back((Vector<int> *)(pSVar17 + 0x298),*(int *)(*plVar23 + 0x34));
      }
      lVar15 = *param_2;
      cVar7 = RefCounted::reference();
      pOVar24 = (Object *)0x0;
      if (cVar7 != '\0') {
        pOVar24 = (Object *)pSVar17;
      }
      if (*(long *)(lVar15 + 0x2a8) == 0) {
        lVar18 = 1;
      }
      else {
        lVar18 = *(long *)(*(long *)(lVar15 + 0x2a8) + -8) + 1;
      }
      iVar9 = CowData<Ref<GLTFNode>>::resize<false>
                        ((CowData<Ref<GLTFNode>> *)(lVar15 + 0x2a8),lVar18);
      if (iVar9 == 0) {
        if (*(long *)(lVar15 + 0x2a8) != 0) {
          lVar18 = *(long *)(*(long *)(lVar15 + 0x2a8) + -8);
          lVar26 = lVar18 + -1;
          if (lVar26 < 0) goto LAB_0010880f;
          CowData<Ref<GLTFNode>>::_copy_on_write((CowData<Ref<GLTFNode>> *)(lVar15 + 0x2a8));
          puVar3 = (undefined8 *)(*(long *)(lVar15 + 0x2a8) + lVar26 * 8);
          pOVar4 = (Object *)*puVar3;
          if (pOVar4 == pOVar24) goto LAB_001084fe;
          *puVar3 = pOVar24;
          if (pOVar24 == (Object *)0x0) {
            if (((pOVar4 == (Object *)0x0) || (cVar7 = RefCounted::unreference(), cVar7 == '\0')) ||
               (cVar7 = predelete_handler(pOVar4), cVar7 == '\0')) goto LAB_00108029;
LAB_001085ec:
            (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
            Memory::free_static(pOVar4,false);
            goto joined_r0x00108606;
          }
          cVar7 = RefCounted::reference();
          if (cVar7 == '\0') {
            *puVar3 = 0;
            if (pOVar4 != (Object *)0x0) {
              cVar7 = RefCounted::unreference();
              goto joined_r0x001087af;
            }
          }
          else if (pOVar4 != (Object *)0x0) {
            cVar7 = RefCounted::unreference();
joined_r0x001087af:
            if ((cVar7 != '\0') && (cVar7 = predelete_handler(pOVar4), cVar7 != '\0'))
            goto LAB_001085ec;
          }
          cVar7 = RefCounted::unreference();
          goto joined_r0x00108023;
        }
        lVar26 = -1;
        lVar18 = 0;
LAB_0010880f:
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar26,lVar18,"p_index","size()","",false
                   ,false);
joined_r0x00108606:
        if (pOVar24 != (Object *)0x0) goto LAB_00108507;
LAB_00108029:
        cVar7 = RefCounted::unreference();
      }
      else {
        _err_print_error("push_back","./core/templates/vector.h",0x142,
                         "Condition \"err\" is true. Returning: true",0,0);
LAB_001084fe:
        if (pOVar24 == (Object *)0x0) goto LAB_00108029;
LAB_00108507:
        cVar7 = RefCounted::unreference();
joined_r0x00108023:
        if ((cVar7 == '\0') || (cVar7 = predelete_handler(pOVar24), cVar7 == '\0'))
        goto LAB_00108029;
        (**(code **)(*(long *)pOVar24 + 0x140))(pOVar24);
        Memory::free_static(pOVar24,false);
        cVar7 = RefCounted::unreference();
      }
      if ((cVar7 != '\0') && (cVar7 = predelete_handler((Object *)pSVar17), cVar7 != '\0')) {
        (**(code **)(*(long *)pSVar17 + 0x140))(pSVar17);
        Memory::free_static(pSVar17,false);
      }
      lVar16 = lVar16 + 1;
    } while ((int)lVar16 < *(int *)(lVar10 + 0x2b8));
    lVar16 = *param_2;
  }
  lVar10 = *(long *)(lVar16 + 0x2a8);
  if (lVar10 != 0) {
    lVar15 = 0;
    while (lVar15 < *(long *)(lVar10 + -8)) {
      lVar10 = *(long *)(lVar16 + 0x2a8);
      if (lVar10 == 0) {
LAB_0010811c:
        lVar26 = 0;
LAB_0010811f:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar15,lVar26,"p_index","size()","",false
                   ,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      lVar18 = 0;
      while( true ) {
        lVar26 = *(long *)(lVar10 + -8);
        if (lVar26 <= lVar15) goto LAB_0010811f;
        lVar27 = *(long *)(*(long *)(lVar10 + lVar15 * 8) + 0x2a0);
        if ((lVar27 == 0) || (*(long *)(lVar27 + -8) <= lVar18)) break;
        iVar9 = *(int *)(lVar27 + lVar18 * 4);
        lVar27 = (long)iVar9;
        if ((iVar9 < 0) || (lVar26 <= lVar27)) {
          _err_print_index_error
                    ("_parse_nodes","modules/fbx/fbx_document.cpp",0x1b8,lVar27,lVar26,"child_i",
                     "p_state->nodes.size()","",false,false);
          uVar14 = 0x10;
          goto LAB_001088a0;
        }
        if (*(int *)(*(long *)(lVar10 + lVar27 * 8) + 0x248) == -1) {
          CowData<Ref<GLTFNode>>::_copy_on_write((CowData<Ref<GLTFNode>> *)(lVar16 + 0x2a8));
          *(int *)(*(long *)(*(long *)(lVar16 + 0x2a8) + lVar27 * 8) + 0x248) = (int)lVar15;
        }
        else {
          _err_print_error("_parse_nodes","modules/fbx/fbx_document.cpp",0x1b9,
                           "Condition \"p_state->nodes[child_i]->parent != -1\" is true. Continuing."
                           ,0,0);
        }
        lVar18 = lVar18 + 1;
        lVar16 = *param_2;
        lVar10 = *(long *)(lVar16 + 0x2a8);
        if (lVar10 == 0) goto LAB_0010811c;
      }
      lVar10 = *(long *)(lVar16 + 0x2a8);
      lVar15 = lVar15 + 1;
      if (lVar10 == 0) break;
    }
  }
  uVar14 = 0;
LAB_001088a0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar14;
LAB_001081d8:
  lVar25 = lVar25 + 0x30;
  goto joined_r0x001081cc;
}



/* CowData<Ref<GLTFMesh> >::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Ref<GLTFMesh>>::_copy_on_write(CowData<Ref<GLTFMesh>> *this)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  char cVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar7 = 0x10;
  if (lVar1 * 8 != 0) {
    uVar7 = lVar1 * 8 - 1;
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar5 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  lVar8 = 0;
  *puVar5 = 1;
  puVar5[1] = lVar1;
  plVar6 = puVar5 + 2;
  if (lVar1 != 0) {
    do {
      lVar2 = *(long *)this;
      *plVar6 = 0;
      lVar2 = *(long *)(lVar2 + lVar8 * 8);
      if (lVar2 != 0) {
        *plVar6 = lVar2;
        cVar4 = RefCounted::reference();
        if (cVar4 == '\0') {
          *plVar6 = 0;
        }
      }
      lVar8 = lVar8 + 1;
      plVar6 = plVar6 + 1;
    } while (lVar1 != lVar8);
  }
  _unref(this);
  *(undefined8 **)this = puVar5 + 2;
  return;
}



/* FBXDocument::_generate_mesh_instance(Ref<FBXState>, int) */

Node3D * __thiscall
FBXDocument::_generate_mesh_instance(undefined8 param_1,long *param_2,int param_3)

{
  int iVar1;
  Object *pOVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  Node3D *this;
  long lVar6;
  Object *pOVar7;
  long lVar8;
  long lVar9;
  long in_FS_OFFSET;
  int local_7c;
  Node3D *local_78;
  CowData<char32_t> local_70 [8];
  CowData<char32_t> local_68 [8];
  Object *local_60;
  int local_58 [6];
  long local_40;
  
  lVar6 = (long)param_3;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar8 = *(long *)(*param_2 + 0x2a8);
  local_7c = param_3;
  if (lVar6 < 0) {
    if (lVar8 != 0) {
      lVar9 = *(long *)(lVar8 + -8);
      goto LAB_00108d85;
    }
  }
  else if (lVar8 != 0) {
    lVar9 = *(long *)(lVar8 + -8);
    if (lVar9 <= lVar6) goto LAB_00108d85;
    pOVar7 = *(Object **)(lVar8 + lVar6 * 8);
    if (pOVar7 == (Object *)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    cVar5 = RefCounted::reference();
    if (cVar5 == '\0') {
      pOVar7 = (Object *)0x0;
    }
    iVar1 = *(int *)(pOVar7 + 0x280);
    lVar8 = *(long *)(*param_2 + 0x2e8);
    if (iVar1 < 0) {
      if (lVar8 == 0) goto LAB_00108ea0;
      lVar8 = *(long *)(lVar8 + -8);
    }
    else if (lVar8 == 0) {
LAB_00108ea0:
      lVar8 = 0;
    }
    else {
      lVar8 = *(long *)(lVar8 + -8);
      if (iVar1 < lVar8) {
        this = (Node3D *)operator_new(0x570,"");
        Node3D::Node3D(this);
        *(undefined ***)this = &PTR__initialize_classv_0012e9d0;
        uVar4 = _LC157;
        *(undefined8 *)(this + 0x538) = 0;
        *(undefined8 *)(this + 0x550) = uVar4;
        *(undefined8 *)(this + 0x548) = 0;
        *(undefined4 *)(this + 0x568) = 0;
        *(undefined1 (*) [16])(this + 0x528) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(this + 0x558) = (undefined1  [16])0x0;
        postinitialize_handler((Object *)this);
        local_78 = this;
        cVar5 = is_print_verbose_enabled();
        if (cVar5 != '\0') {
          Resource::get_name();
          operator+((char *)local_68,(String *)"FBX: Creating mesh for: ");
          ::Variant::Variant((Variant *)local_58,(String *)local_68);
          stringify_variants((Variant *)&local_60);
          __print_line((String *)&local_60);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          if (::Variant::needs_deinit[local_58[0]] != '\0') {
            ::Variant::_clear_internal();
          }
          CowData<char32_t>::_unref(local_68);
          CowData<char32_t>::_unref(local_70);
        }
        HashMap<int,ImporterMeshInstance3D*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,ImporterMeshInstance3D*>>>
        ::insert((int *)&local_60,(ImporterMeshInstance3D **)(*param_2 + 0x490),SUB81(&local_7c,0));
        lVar8 = *param_2;
        lVar9 = (long)*(int *)(pOVar7 + 0x280);
        lVar6 = *(long *)(lVar8 + 0x2e8);
        if (lVar9 < 0) {
          if (lVar6 != 0) {
            lVar6 = *(long *)(lVar6 + -8);
            goto LAB_00108e59;
          }
        }
        else if (lVar6 != 0) {
          lVar6 = *(long *)(lVar6 + -8);
          if (lVar6 <= lVar9) goto LAB_00108e59;
          CowData<Ref<GLTFMesh>>::_copy_on_write((CowData<Ref<GLTFMesh>> *)(lVar8 + 0x2e8));
          pOVar2 = *(Object **)(*(long *)(lVar8 + 0x2e8) + lVar9 * 8);
          if ((pOVar2 != (Object *)0x0) && (cVar5 = RefCounted::reference(), cVar5 != '\0')) {
            GLTFMesh::get_mesh();
            if ((local_60 != (Object *)0x0) &&
               (((ImporterMeshInstance3D::set_mesh(this), local_60 != (Object *)0x0 &&
                 (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
                (cVar5 = predelete_handler(local_60), cVar5 != '\0')))) {
              (**(code **)(*(long *)local_60 + 0x140))(local_60);
              Memory::free_static(local_60,false);
            }
            cVar5 = RefCounted::unreference();
            if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar2), cVar5 != '\0')) {
              (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
              Memory::free_static(pOVar2,false);
            }
          }
          cVar5 = RefCounted::unreference();
          goto joined_r0x00108e18;
        }
        lVar6 = 0;
LAB_00108e59:
        _err_print_index_error
                  ("operator[]","./core/templates/vector.h",0x38,lVar9,lVar6,"p_index",
                   "((Vector<T> *)(this))->_cowdata.size()","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
    }
    this = (Node3D *)0x0;
    _err_print_index_error
              ("_generate_mesh_instance","modules/fbx/fbx_document.cpp",0x5d3,(long)iVar1,lVar8,
               "fbx_node->mesh","p_state->meshes.size()","",false,false);
    cVar5 = RefCounted::unreference();
joined_r0x00108e18:
    if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar7), cVar5 != '\0')) {
      (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
      Memory::free_static(pOVar7,false);
    }
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return this;
  }
  lVar9 = 0;
LAB_00108d85:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar6,lVar9,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* FBXDocument::_generate_skeleton_bone_node(Ref<FBXState>, int, Node*, Node*) */

void __thiscall
FBXDocument::_generate_skeleton_bone_node
          (FBXDocument *this,long *param_2,int param_3,Node *param_4,Object *param_5)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  Node *pNVar4;
  code *pcVar5;
  Object *pOVar6;
  byte bVar7;
  char cVar8;
  Node *pNVar9;
  long lVar10;
  Node *pNVar11;
  long lVar12;
  Object *pOVar13;
  long lVar14;
  Ref *pRVar15;
  long in_FS_OFFSET;
  Array *local_a0;
  byte local_90;
  int local_7c [3];
  Node *local_70;
  Object *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  lVar12 = (long)param_3;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar10 = *(long *)(*param_2 + 0x2a8);
  local_7c[0] = param_3;
  if (lVar12 < 0) {
LAB_001094a8:
    if (lVar10 != 0) {
      lVar14 = *(long *)(lVar10 + -8);
      goto LAB_001094b5;
    }
  }
  else if (lVar10 != 0) {
    lVar14 = *(long *)(lVar10 + -8);
    if (lVar14 <= lVar12) goto LAB_001094b5;
    pOVar13 = *(Object **)(lVar10 + lVar12 * 8);
    if (pOVar13 == (Object *)0x0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    cVar8 = RefCounted::reference();
    pRVar15 = (Ref *)*param_2;
    if (cVar8 == '\0') {
      pOVar13 = (Object *)0x0;
    }
    lVar10 = *(long *)(pRVar15 + 0x448);
    lVar12 = (long)*(int *)(pOVar13 + 0x28c);
    if (lVar12 < 0) goto LAB_001094a8;
    if (lVar10 == 0) goto LAB_00109570;
    lVar14 = *(long *)(lVar10 + -8);
    if (lVar14 <= lVar12) goto LAB_001094b5;
    pNVar4 = *(Node **)(*(long *)(lVar10 + lVar12 * 8) + 0x260);
    uVar1 = *(uint *)(pOVar13 + 0x288);
    uVar2 = *(uint *)(pOVar13 + 0x280);
    if ((int)uVar2 < 0) {
      if (*(int *)(pOVar13 + 0x284) < 0) {
        local_90 = (byte)~(byte)((uint)*(int *)(pOVar13 + 0x2a8) >> 0x18) >> 7;
        bVar7 = local_90;
        if (param_4 == (Node *)0x0) {
          if (pNVar4 == (Node *)0x0) {
            if (*(int *)(pOVar13 + 0x2a8) < 0) {
              pNVar9 = (Node *)0x0;
              goto LAB_0010927d;
            }
            goto LAB_001093e8;
          }
LAB_00109613:
          lVar10 = Node::get_parent();
          if (lVar10 == 0) {
            param_4 = (Node *)0x0;
LAB_001095c0:
            Node::add_child(param_4,pNVar4,1,0);
            Node::set_owner(pNVar4);
            goto LAB_00109142;
          }
          pRVar15 = (Ref *)*param_2;
LAB_0010914b:
          param_4 = pNVar4;
        }
        else {
LAB_00108fbf:
          local_90 = bVar7;
          pNVar9 = (Node *)__dynamic_cast(param_4,&Object::typeinfo,&Skeleton3D::typeinfo,0);
          if (pNVar4 != pNVar9) {
            if (pNVar9 != (Node *)0x0) {
              local_70 = (Node *)0x0;
              local_68 = (Object *)0x122d40;
              local_60 = 0x43;
              String::parse_latin1((StrRange *)&local_70);
              vformat<int>((String *)&local_68,(int)(StrRange *)&local_70);
              _err_print_error("_generate_skeleton_bone_node","modules/fbx/fbx_document.cpp",0x698,
                               (String *)&local_68,0,0);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
              uVar3 = *(undefined4 *)(pOVar13 + 0x248);
              local_68 = (Object *)0x0;
              Ref<FBXState>::operator=((Ref<FBXState> *)&local_68,(Ref *)*param_2);
              pNVar9 = (Node *)_generate_bone_attachment
                                         (this,(String *)&local_68,pNVar9,param_3,uVar3);
              Ref<FBXState>::unref((Ref<FBXState> *)&local_68);
              Node::add_child(param_4,pNVar9,1,0);
              Node::set_owner(pNVar9);
              local_68 = (Object *)0x117eb0;
              local_70 = (Node *)0x0;
              local_60 = 0x10;
              String::parse_latin1((StrRange *)&local_70);
              _gen_unique_name((HashSet *)&local_68,(String *)(*param_2 + 0x3f0));
              Node::set_name((String *)pNVar9);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
              param_4 = pNVar9;
            }
            lVar10 = Node::get_parent();
            if (lVar10 == 0) goto LAB_001095c0;
LAB_00109142:
            pRVar15 = (Ref *)*param_2;
          }
          if (pNVar4 != (Node *)0x0) goto LAB_0010914b;
        }
        pNVar9 = pNVar4;
        if (local_90 == 0) goto LAB_0010927d;
        goto LAB_0010915c;
      }
      local_90 = 1;
      bVar7 = local_90;
      if (param_4 != (Node *)0x0) goto LAB_00108fbf;
      if (pNVar4 != (Node *)0x0) goto LAB_00109613;
LAB_001093e8:
      local_68 = (Object *)0x0;
      Ref<FBXState>::operator=((Ref<FBXState> *)&local_68,pRVar15);
      pNVar11 = (Node *)_generate_bone_attachment
                                  (this,(Ref<FBXState> *)&local_68,pNVar4,param_3,param_3);
      Ref<FBXState>::unref((Ref<FBXState> *)&local_68);
      Node::add_child(param_4,pNVar11,1,0);
      Node::set_owner(pNVar11);
      Resource::get_name();
      Node::set_name((String *)pNVar11);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      pRVar15 = (Ref *)*param_2;
      if (*(int *)(pOVar13 + 0x280) < 0) goto LAB_00109178;
LAB_00109470:
      local_68 = (Object *)0x0;
      Ref<FBXState>::operator=((Ref<FBXState> *)&local_68,pRVar15);
      pNVar9 = (Node *)_generate_mesh_instance(this,(Ref<FBXState> *)&local_68,param_3);
      Ref<FBXState>::unref((Ref<FBXState> *)&local_68);
    }
    else {
      local_90 = 1;
      bVar7 = local_90;
      local_90 = 1;
      if (param_4 != (Node *)0x0) goto LAB_00108fbf;
      if (pNVar4 != (Node *)0x0) goto LAB_00109613;
LAB_0010915c:
      if ((int)(uVar1 | uVar2) < 0) goto LAB_001093e8;
      pNVar11 = param_4;
      if (-1 < *(int *)(pOVar13 + 0x280)) goto LAB_00109470;
LAB_00109178:
      local_68 = (Object *)0x0;
      if (*(int *)(pOVar13 + 0x284) < 0) {
        Ref<FBXState>::operator=((Ref<FBXState> *)&local_68,pRVar15);
        pNVar9 = (Node *)_generate_spatial(this,(Ref<FBXState> *)&local_68,param_3);
        Ref<FBXState>::unref((Ref<FBXState> *)&local_68);
      }
      else {
        Ref<FBXState>::operator=((Ref<FBXState> *)&local_68,pRVar15);
        pNVar9 = (Node *)_generate_camera(this,(Ref<FBXState> *)&local_68,param_3);
        Ref<FBXState>::unref((Ref<FBXState> *)&local_68);
      }
    }
    local_a0 = (Array *)&local_70;
    Node::add_child(pNVar11,pNVar9,1,0);
    if (pNVar9 != (Node *)param_5) {
      Array::Array(local_a0);
      ::Variant::Variant((Variant *)local_58,param_5);
      Array::push_back((Variant *)local_a0);
      if (::Variant::needs_deinit[local_58[0]] != '\0') {
        ::Variant::_clear_internal();
      }
      StringName::StringName((StringName *)&local_68,"set_owner",false);
      Node::propagate_call((StringName *)pNVar9,(Array *)&local_68,SUB81(local_a0,0));
      if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
        StringName::unref();
      }
      Array::~Array(local_a0);
    }
    Resource::get_name();
    Node::set_name((String *)pNVar9);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    pRVar15 = (Ref *)*param_2;
LAB_0010927d:
    lVar12 = 0;
    local_70 = pNVar9;
    HashMap<int,Node*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Node*>>>
    ::insert((int *)&local_68,(Node **)(pRVar15 + 0x460),SUB81(local_7c,0));
    lVar10 = *(long *)(pOVar13 + 0x2a0);
    while (lVar10 != 0) {
      while( true ) {
        if (*(long *)(lVar10 + -8) <= lVar12) goto LAB_00109378;
        uVar3 = *(undefined4 *)(lVar10 + lVar12 * 4);
        local_68 = (Object *)0x0;
        if (((Object *)*param_2 != (Object *)0x0) &&
           (local_68 = (Object *)*param_2, cVar8 = RefCounted::reference(), cVar8 == '\0')) {
          local_68 = (Object *)0x0;
        }
        _generate_scene_node(this,&local_68,uVar3,pNVar4,param_5);
        if (((local_68 != (Object *)0x0) &&
            (cVar8 = RefCounted::unreference(), pOVar6 = local_68, cVar8 != '\0')) &&
           (cVar8 = predelete_handler(local_68), cVar8 != '\0')) break;
        lVar10 = *(long *)(pOVar13 + 0x2a0);
        lVar12 = lVar12 + 1;
        if (lVar10 == 0) goto LAB_00109378;
      }
      lVar12 = lVar12 + 1;
      (**(code **)(*(long *)pOVar6 + 0x140))();
      Memory::free_static(pOVar6,false);
      lVar10 = *(long *)(pOVar13 + 0x2a0);
    }
LAB_00109378:
    cVar8 = RefCounted::unreference();
    if ((cVar8 != '\0') && (cVar8 = predelete_handler(pOVar13), cVar8 != '\0')) {
      (**(code **)(*(long *)pOVar13 + 0x140))(pOVar13);
      Memory::free_static(pOVar13,false);
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_00109570:
  lVar14 = 0;
LAB_001094b5:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar12,lVar14,"p_index","size()","",false,true)
  ;
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}



/* FBXDocument::_generate_scene_node(Ref<FBXState>, int, Node*, Node*) */

void __thiscall
FBXDocument::_generate_scene_node
          (FBXDocument *this,long *param_2,int param_3,Node *param_4,Object *param_5)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  Object *pOVar4;
  char cVar5;
  long lVar6;
  StringName *pSVar7;
  String *pSVar8;
  Node *pNVar9;
  long lVar10;
  Object *pOVar11;
  long lVar12;
  Ref *pRVar13;
  long in_FS_OFFSET;
  int local_7c [3];
  Object *local_70;
  StringName *local_68;
  Object *local_60;
  int local_58 [6];
  long local_40;
  
  lVar10 = (long)param_3;
  pRVar13 = (Ref *)*param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar6 = *(long *)(pRVar13 + 0x2a8);
  local_7c[0] = param_3;
  if (lVar10 < 0) {
    if (lVar6 != 0) {
      lVar12 = *(long *)(lVar6 + -8);
      goto LAB_00109bc1;
    }
  }
  else if (lVar6 != 0) {
    lVar12 = *(long *)(lVar6 + -8);
    if (lVar12 <= lVar10) goto LAB_00109bc1;
    pOVar11 = *(Object **)(lVar6 + lVar10 * 8);
    if (pOVar11 == (Object *)0x0) {
LAB_00109709:
      local_70 = (Object *)0x0;
      if (*(int *)(pOVar11 + 0x28c) < 0) goto LAB_00109717;
LAB_00109832:
      local_60 = (Object *)0x0;
      Ref<FBXState>::operator=((Ref<FBXState> *)&local_60,pRVar13);
      _generate_skeleton_bone_node(this,(Ref<FBXState> *)&local_60,param_3,param_4,param_5);
      Ref<FBXState>::unref((Ref<FBXState> *)&local_60);
    }
    else {
      local_70 = pOVar11;
      cVar5 = RefCounted::reference();
      if (cVar5 == '\0') {
        pRVar13 = (Ref *)*param_2;
        pOVar11 = (Object *)0x0;
        goto LAB_00109709;
      }
      pRVar13 = (Ref *)*param_2;
      if (-1 < *(int *)(pOVar11 + 0x28c)) goto LAB_00109832;
LAB_00109717:
      iVar1 = *(int *)(pOVar11 + 0x288);
      pNVar9 = param_4;
      if (param_4 == (Node *)0x0) {
LAB_00109905:
        if (-1 < *(int *)(pOVar11 + 0x288)) goto LAB_00109765;
        if (-1 < *(int *)(pOVar11 + 0x280)) goto LAB_00109921;
LAB_00109af8:
        if (*(int *)(pOVar11 + 0x284) < 0) {
          local_60 = (Object *)0x0;
          if (*(int *)(pOVar11 + 0x2a8) < 0) {
            Ref<FBXState>::operator=((Ref<FBXState> *)&local_60,pRVar13);
            pSVar7 = (StringName *)_generate_spatial(this,(Ref<FBXState> *)&local_60,param_3);
            Ref<FBXState>::unref((Ref<FBXState> *)&local_60);
          }
          else {
            Ref<FBXState>::operator=((Ref<FBXState> *)&local_60,pRVar13);
            pSVar7 = (StringName *)_generate_light(this,(Ref<FBXState> *)&local_60,param_3);
            Ref<FBXState>::unref((Ref<FBXState> *)&local_60);
          }
        }
        else {
          local_60 = (Object *)0x0;
          Ref<FBXState>::operator=((Ref<FBXState> *)&local_60,pRVar13);
          pSVar7 = (StringName *)_generate_camera(this,(Ref<FBXState> *)&local_60,param_3);
          Ref<FBXState>::unref((Ref<FBXState> *)&local_60);
        }
      }
      else {
        lVar6 = __dynamic_cast(param_4,&Object::typeinfo,&Skeleton3D::typeinfo,0);
        if (lVar6 == 0) goto LAB_00109905;
        if (iVar1 < 0) {
          uVar2 = *(undefined4 *)(pOVar11 + 0x248);
          local_60 = (Object *)0x0;
          Ref<FBXState>::operator=((Ref<FBXState> *)&local_60,pRVar13);
          pNVar9 = (Node *)_generate_bone_attachment
                                     (this,(Ref<FBXState> *)&local_60,lVar6,param_3,uVar2);
          Ref<FBXState>::unref((Ref<FBXState> *)&local_60);
          Node::add_child(param_4,pNVar9,1,0);
          Node::set_owner(pNVar9);
          Resource::get_name();
          Node::set_name((String *)pNVar9);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          pRVar13 = (Ref *)*param_2;
          goto LAB_00109905;
        }
LAB_00109765:
        if (*(int *)(pOVar11 + 0x280) < 0) goto LAB_00109af8;
        if (*(long *)(pOVar11 + 0x2a0) == 0) {
LAB_00109921:
          local_60 = (Object *)0x0;
          Ref<FBXState>::operator=((Ref<FBXState> *)&local_60,pRVar13);
          pSVar7 = (StringName *)_generate_mesh_instance(this,(Ref<FBXState> *)&local_60,param_3);
          Ref<FBXState>::unref((Ref<FBXState> *)&local_60);
        }
        else {
          local_60 = (Object *)0x0;
          Ref<FBXState>::operator=((Ref<FBXState> *)&local_60,pRVar13);
          pSVar7 = (StringName *)_generate_spatial(this,(Ref<FBXState> *)&local_60,param_3);
          Ref<FBXState>::unref((Ref<FBXState> *)&local_60);
          local_60 = (Object *)0x0;
          Ref<FBXState>::operator=((Ref<FBXState> *)&local_60,(Ref *)*param_2);
          pSVar8 = (String *)_generate_mesh_instance(this,(Ref<FBXState> *)&local_60,param_3);
          Ref<FBXState>::unref((Ref<FBXState> *)&local_60);
          Resource::get_name();
          Node::set_name(pSVar8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          Node::add_child(pSVar7,pSVar8,1,0);
        }
      }
      if (pSVar7 != (StringName *)0x0) {
        Node::add_child(pNVar9,pSVar7,1,0);
        if (pSVar7 != (StringName *)param_5) {
          Array::Array((Array *)&local_68);
          ::Variant::Variant((Variant *)local_58,param_5);
          Array::push_back((Variant *)&local_68);
          if (::Variant::needs_deinit[local_58[0]] != '\0') {
            ::Variant::_clear_internal();
          }
          StringName::StringName((StringName *)&local_60,"set_owner",false);
          Node::propagate_call(pSVar7,(Array *)&local_60,SUB81((Array *)&local_68,0));
          if ((StringName::configured != '\0') && (local_60 != (Object *)0x0)) {
            StringName::unref();
          }
          Array::~Array((Array *)&local_68);
        }
        Node3D::set_transform((Transform3D *)pSVar7);
        Resource::get_name();
        Node::set_name((String *)pSVar7);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        local_68 = pSVar7;
        HashMap<int,Node*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Node*>>>
        ::insert((int *)&local_60,(Node **)(*param_2 + 0x460),SUB81(local_7c,0));
        lVar6 = *(long *)(pOVar11 + 0x2a0);
        for (lVar10 = 0; (lVar6 != 0 && (lVar10 < *(long *)(lVar6 + -8))); lVar10 = lVar10 + 1) {
          uVar2 = *(undefined4 *)(lVar6 + lVar10 * 4);
          local_60 = (Object *)0x0;
          Ref<FBXState>::operator=((Ref<FBXState> *)&local_60,(Ref *)*param_2);
          _generate_scene_node(this,(StringName *)&local_60,uVar2,pSVar7,param_5);
          if ((local_60 != (Object *)0x0) &&
             ((cVar5 = RefCounted::unreference(), pOVar4 = local_60, cVar5 != '\0' &&
              (cVar5 = predelete_handler(local_60), cVar5 != '\0')))) {
            (**(code **)(*(long *)pOVar4 + 0x140))();
            Memory::free_static(pOVar4,false);
          }
          lVar6 = *(long *)(pOVar11 + 0x2a0);
        }
        cVar5 = RefCounted::unreference();
        if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar11), cVar5 != '\0')) {
          (**(code **)(*(long *)pOVar11 + 0x140))(pOVar11);
          Memory::free_static(pOVar11,false);
        }
        goto LAB_00109ace;
      }
      _err_print_error("_generate_scene_node","modules/fbx/fbx_document.cpp",0x678,
                       "Parameter \"current_node\" is null.",0,0);
    }
    Ref<GLTFNode>::unref((Ref<GLTFNode> *)&local_70);
LAB_00109ace:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  lVar12 = 0;
LAB_00109bc1:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar12,"p_index","size()","",false,true)
  ;
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FBXDocument::_parse_meshes(Ref<FBXState>) */

undefined8 __thiscall FBXDocument::_parse_meshes(FBXDocument *this,long *param_2)

{
  uint uVar1;
  long *plVar2;
  uint *puVar3;
  long *plVar4;
  long *plVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  int iVar12;
  long lVar13;
  undefined8 *puVar14;
  code *pcVar15;
  double dVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  Array *pAVar19;
  undefined8 *puVar20;
  String *pSVar21;
  char cVar22;
  char cVar23;
  bool bVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  int iVar29;
  void *pvVar30;
  long lVar31;
  Resource *pRVar32;
  Variant *pVVar33;
  undefined8 *puVar34;
  float *pfVar35;
  long *plVar36;
  int *piVar37;
  float *pfVar38;
  Object *pOVar39;
  Object *pOVar40;
  Variant *this_00;
  long lVar41;
  ulong uVar42;
  int iVar43;
  double *pdVar44;
  ulong uVar45;
  undefined8 uVar46;
  String *pSVar47;
  long lVar48;
  ulong uVar49;
  long lVar50;
  char *pcVar51;
  int iVar52;
  Resource *pRVar53;
  uint *puVar54;
  uint *puVar55;
  ulong uVar56;
  ulong uVar57;
  float *pfVar58;
  int iVar59;
  ulong uVar60;
  long *plVar61;
  float *pfVar62;
  long in_FS_OFFSET;
  bool bVar63;
  bool bVar64;
  byte bVar65;
  float fVar66;
  float fVar67;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  float fVar70;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  char *pcVar73;
  int *local_278;
  uint *local_268;
  Variant *local_230;
  uint local_21c;
  long *local_218;
  Array *local_210;
  CowData<float> *local_1f8;
  int local_1d8;
  CowData<int> *local_1c8;
  int local_1c0;
  Ref<SurfaceTool> *local_1b8;
  long local_1b0;
  long local_1a0;
  CowData<Vector3> *local_190;
  Resource *local_140;
  Resource *local_138;
  Resource *local_130;
  Array local_128 [8];
  Array *local_120;
  Array local_118 [8];
  Array local_110 [8];
  Array *local_108;
  Object *local_100;
  Vector<float> local_f8 [8];
  float *local_f0;
  Vector local_e8 [8];
  undefined8 local_e0 [2];
  undefined8 *local_d0;
  ufbx_vertex_vec3 local_c8 [8];
  long local_c0;
  String *local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  float *local_a0;
  Resource *local_98;
  float *local_90;
  Resource *local_88;
  float *local_80;
  int local_78 [8];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  bVar65 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar41 = *(long *)(*param_2 + 0x558);
  uVar42 = *(ulong *)(lVar41 + 0x2c8);
  uVar25 = (int)uVar42 - 1;
  uVar25 = uVar25 | uVar25 >> 1;
  uVar25 = uVar25 | uVar25 >> 2;
  uVar25 = uVar25 | uVar25 >> 4;
  uVar25 = uVar25 | uVar25 >> 8;
  uVar25 = (uVar25 >> 0x10 | uVar25) + 1;
  if (uVar25 == 0) {
    pvVar30 = (void *)0x0;
  }
  else {
    pvVar30 = (void *)Memory::realloc_static((void *)0x0,(ulong)uVar25 << 2,false);
    if (pvVar30 == (void *)0x0) {
      _err_print_error("reserve","./core/templates/local_vector.h",0x92,
                       "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar15 = (code *)invalidInstructionException();
      (*pcVar15)();
    }
    uVar42 = *(ulong *)(lVar41 + 0x2c8);
  }
  uVar57 = 0;
  if (uVar42 == 0) {
    lVar48 = *(long *)(*param_2 + 0x2a8);
    if (lVar48 == 0) goto LAB_0010a4fa;
    local_21c = 0;
    lVar50 = 0;
LAB_00109da7:
    lVar13 = *(long *)(lVar48 + -8);
    if (0 < lVar13) {
      lVar31 = 0;
      do {
        uVar25 = *(uint *)(*(long *)(lVar48 + lVar31 * 8) + 0x280);
        if ((-1 < (int)uVar25) && (uVar25 < local_21c)) {
          *(int *)((long)pvVar30 + (long)(int)uVar25 * 4) = (int)lVar31;
        }
        lVar31 = lVar31 + 1;
      } while (lVar13 != lVar31);
    }
  }
  else {
    do {
      local_21c = (uint)uVar57;
      if (uVar25 == local_21c) {
        uVar25 = uVar25 * 2;
        if (uVar25 == 0) {
          uVar25 = 1;
        }
        pvVar30 = (void *)Memory::realloc_static(pvVar30,(ulong)uVar25 << 2,false);
        if (pvVar30 == (void *)0x0) {
          _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                           "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar15 = (code *)invalidInstructionException();
          (*pcVar15)();
        }
        uVar42 = *(ulong *)(lVar41 + 0x2c8);
      }
      uVar49 = uVar57 & 0xffffffff;
      uVar57 = uVar57 + 1;
      *(undefined4 *)((long)pvVar30 + uVar49 * 4) = 0xffffffff;
    } while (uVar57 < uVar42);
    local_21c = local_21c + 1;
    lVar50 = uVar42 * 8;
    lVar48 = *(long *)(*param_2 + 0x2a8);
    if (lVar48 != 0) goto LAB_00109da7;
  }
  local_218 = *(long **)(lVar41 + 0x2c0);
  plVar2 = (long *)((long)local_218 + lVar50);
  if (plVar2 != local_218) {
    do {
      puVar14 = (undefined8 *)*local_218;
      cVar22 = is_print_verbose_enabled();
      if (cVar22 != '\0') {
        itos((long)&local_98);
        operator+((char *)&local_88,(String *)"FBX: Parsing mesh: ");
        ::Variant::Variant((Variant *)&local_58,(String *)&local_88);
        print_line((Variant *)&local_58);
        if (::Variant::needs_deinit[(int)local_58] != '\0') {
          ::Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      }
      local_140 = (Resource *)0x0;
      pRVar32 = (Resource *)operator_new(0x280,"");
      pRVar53 = pRVar32;
      for (lVar41 = 0x50; lVar41 != 0; lVar41 = lVar41 + -1) {
        *(undefined8 *)pRVar53 = 0;
        pRVar53 = pRVar53 + (ulong)bVar65 * -0x10 + 8;
      }
      Resource::Resource(pRVar32);
      *(undefined ***)pRVar32 = &PTR__initialize_classv_0012e098;
      *(undefined8 *)(pRVar32 + 0x248) = 0;
      *(undefined8 *)(pRVar32 + 600) = 0;
      *(undefined4 *)(pRVar32 + 0x260) = 0;
      *(undefined8 *)(pRVar32 + 0x278) = 0;
      *(undefined1 (*) [16])(pRVar32 + 0x268) = (undefined1  [16])0x0;
      postinitialize_handler((Object *)pRVar32);
      local_88 = (Resource *)0x0;
      local_98 = pRVar32;
      cVar22 = RefCounted::init_ref();
      if (cVar22 == '\0') {
        local_98 = (Resource *)0x0;
        Ref<ImporterMesh>::unref((Ref<ImporterMesh> *)&local_88);
      }
      else {
        Ref<ImporterMesh>::unref((Ref<ImporterMesh> *)&local_88);
        local_88 = (Resource *)0x0;
        local_140 = pRVar32;
        cVar22 = RefCounted::reference();
        if (cVar22 == '\0') {
          local_140 = (Resource *)0x0;
        }
        Ref<ImporterMesh>::unref((Ref<ImporterMesh> *)&local_88);
      }
      Ref<ImporterMesh>::unref((Ref<ImporterMesh> *)&local_98);
      local_138 = (Resource *)0x0;
      String::parse_latin1((String *)&local_138,"mesh");
      local_130 = (Resource *)0x0;
      if (puVar14[1] == 0) {
        uVar25 = *(uint *)((long)puVar14 + 0x34);
        uVar42 = (ulong)uVar25;
        lVar41 = *param_2;
        if ((*(long *)(lVar41 + 0x2a8) != 0) &&
           (uVar57 = *(ulong *)(*(long *)(lVar41 + 0x2a8) + -8), uVar25 < (uint)uVar57)) {
          if (local_21c <= uVar25) {
            iVar26 = 0xb2;
            pcVar51 = "./core/templates/local_vector.h";
            pcVar73 = "count";
            uVar49 = (ulong)local_21c;
LAB_0010af4d:
            _err_print_index_error
                      ("operator[]",pcVar51,iVar26,uVar42,uVar49,"p_index",pcVar73,"",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar15 = (code *)invalidInstructionException();
            (*pcVar15)();
          }
          iVar26 = *(int *)((long)pvVar30 + uVar42 * 4);
          if (iVar26 != -1) {
            uVar42 = (ulong)iVar26;
            if (((long)uVar57 <= (long)uVar42) || ((long)uVar42 < 0)) {
LAB_0010b6b7:
              _err_print_index_error
                        ("get","./core/templates/cowdata.h",0xdb,uVar42,uVar57,"p_index","size()",""
                         ,false,true);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar15 = (code *)invalidInstructionException();
              (*pcVar15)();
            }
            GLTFNode::get_original_name();
            if (local_88 != (Resource *)0x0) {
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
              local_130 = local_88;
              local_88 = (Resource *)0x0;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
            Resource::get_name();
            if (local_138 != local_88) {
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
              local_138 = local_88;
              local_88 = (Resource *)0x0;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
            goto LAB_0010a07e;
          }
        }
      }
      else {
        String::utf8((char *)&local_88,(int)*puVar14);
        if (local_138 != local_88) {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
          local_138 = local_88;
          local_88 = (Resource *)0x0;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        if (local_138 == (Resource *)0x0) {
LAB_0010a07e:
          lVar41 = *param_2;
        }
        else {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_130,(CowData *)&local_138);
          lVar41 = *param_2;
        }
      }
      pRVar53 = local_140;
      _gen_unique_name((HashSet *)&local_88,(String *)(lVar41 + 0x648));
      Resource::set_name((String *)pRVar53);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      local_f0 = (float *)0x0;
      local_e0[0] = 0;
      if (puVar14[0x94] == 0) {
        bVar63 = false;
      }
      else {
        cVar22 = is_print_verbose_enabled();
        if (cVar22 != '\0') {
          ::Variant::Variant((Variant *)&local_58,"FBX: Mesh has targets");
          print_line((Variant *)&local_58);
          if (::Variant::needs_deinit[(int)local_58] != '\0') {
            ::Variant::_clear_internal();
          }
        }
        ImporterMesh::set_blend_shape_mode(pRVar53);
        plVar36 = (long *)puVar14[0x93];
        plVar4 = plVar36 + puVar14[0x94];
        for (; plVar4 != plVar36; plVar36 = plVar36 + 1) {
          plVar61 = *(long **)(*plVar36 + 0x80);
          plVar5 = plVar61 + *(long *)(*plVar36 + 0x88);
          for (; plVar5 != plVar61; plVar61 = plVar61 + 1) {
            puVar34 = (undefined8 *)*plVar61;
            if (puVar34[0x12] != 0) {
              local_b8 = (String *)0x0;
              if (puVar34[1] == 0) {
                itos((long)&local_98);
                local_a8 = 0;
                local_88 = (Resource *)0x117f2b;
                local_80 = (float *)0x6;
                String::parse_latin1((StrRange *)&local_a8);
                String::operator+((String *)&local_88,(String *)&local_a8);
                if (local_b8 != (String *)local_88) {
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
                  local_b8 = (String *)local_88;
                  local_88 = (Resource *)0x0;
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
              }
              else {
                String::utf8((char *)&local_88,(int)*puVar34);
                if (local_b8 != (String *)local_88) {
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
                  local_b8 = (String *)local_88;
                  local_88 = (Resource *)0x0;
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
              }
              ImporterMesh::add_blend_shape((String *)pRVar53);
              Vector<float>::push_back(local_f8,(float)(double)puVar34[0x10]);
              Vector<int>::push_back
                        ((Vector<int> *)local_e8,(int)(float)*(uint *)((long)puVar34 + 0x34));
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
            }
          }
        }
        bVar63 = true;
      }
      local_268 = (uint *)puVar14[0x78];
      puVar3 = local_268 + puVar14[0x79] * 0x10;
      if (puVar3 != local_268) {
LAB_0010a12d:
        local_278 = &_parse_meshes(Ref<FBXState>)::primitive_types;
LAB_0010a138:
        iVar26 = *local_278;
        if (iVar26 != 1) {
          if (iVar26 == 3) {
            uVar25 = (int)*(undefined8 *)(local_268 + 4) * 3;
            if (uVar25 != 0) goto LAB_0010a786;
          }
          else if (iVar26 == 0) {
            uVar25 = local_268[8];
            goto LAB_0010a15d;
          }
          goto LAB_0010a166;
        }
        local_230._0_4_ = (int)*(undefined8 *)(local_268 + 10);
        uVar25 = (int)local_230 * 2;
LAB_0010a15d:
        if (uVar25 == 0) goto LAB_0010a166;
LAB_0010a786:
        local_d0 = (undefined8 *)0x0;
        CowData<unsigned_int>::_copy_on_write((CowData<unsigned_int> *)&local_d0);
        uVar42 = (ulong)uVar25 * 4 - 1;
        uVar42 = uVar42 | uVar42 >> 1;
        uVar42 = uVar42 | uVar42 >> 2;
        uVar42 = uVar42 | uVar42 >> 4;
        uVar42 = uVar42 | uVar42 >> 8;
        uVar42 = uVar42 | uVar42 >> 0x10;
        puVar34 = (undefined8 *)Memory::alloc_static((uVar42 | uVar42 >> 0x20) + 0x11,false);
        if (puVar34 == (undefined8 *)0x0) {
          _err_print_error("resize","./core/templates/cowdata.h",0x171,
                           "Parameter \"mem_new\" is null.",0,0);
          puVar54 = *(uint **)(local_268 + 0xc);
          puVar55 = puVar54 + *(long *)(local_268 + 0xe);
          if (puVar55 != puVar54) {
LAB_0010a828:
            uVar25 = 0;
            do {
              while( true ) {
                piVar37 = (int *)(puVar14[0x19] + (ulong)*puVar54 * 8);
                uVar46 = *(undefined8 *)piVar37;
                iVar27 = *piVar37;
                uVar28 = piVar37[1];
                if (iVar26 != 1) break;
                if (uVar28 == 2) {
                  if (local_d0 == (undefined8 *)0x0) {
LAB_0010af20:
                    uVar42 = (ulong)uVar25;
                    goto LAB_0010af23;
                  }
                  uVar49 = local_d0[-1];
                  if ((long)uVar49 <= (long)(ulong)uVar25) {
LAB_0010bdf9:
                    uVar42 = (ulong)uVar25;
                    goto LAB_0010af41;
                  }
                  CowData<unsigned_int>::_copy_on_write((CowData<unsigned_int> *)&local_d0);
                  *(int *)((long)local_d0 + (ulong)uVar25 * 4) = iVar27;
                  uVar42 = (ulong)(uVar25 + 1);
                  if (local_d0 == (undefined8 *)0x0) {
                    uVar49 = 0;
                    goto LAB_0010af41;
                  }
                  uVar49 = local_d0[-1];
                  if ((long)uVar49 <= (long)uVar42) goto LAB_0010af41;
                  uVar25 = uVar25 + 2;
                  CowData<unsigned_int>::_copy_on_write((CowData<unsigned_int> *)&local_d0);
                  *(int *)((long)local_d0 + uVar42 * 4) = iVar27 + 1;
                }
LAB_0010a849:
                puVar54 = puVar54 + 1;
                if (puVar55 == puVar54) goto LAB_0010a908;
              }
              if (iVar26 != 3) {
                if (uVar28 == 1) {
                  uVar42 = (ulong)uVar25;
                  if (local_d0 == (undefined8 *)0x0) goto LAB_0010af20;
                  uVar49 = local_d0[-1];
                  if ((long)uVar49 <= (long)uVar42) goto LAB_0010bdf9;
                  uVar25 = uVar25 + 1;
                  CowData<unsigned_int>::_copy_on_write((CowData<unsigned_int> *)&local_d0);
                  *(int *)((long)local_d0 + uVar42 * 4) = iVar27;
                }
                goto LAB_0010a849;
              }
              if (uVar28 < 3) goto LAB_0010a849;
              CowData<unsigned_int>::_copy_on_write((CowData<unsigned_int> *)&local_d0);
              lVar41 = (long)local_d0 + (ulong)uVar25 * 4;
              if (local_d0 == (undefined8 *)0x0) {
                lVar50 = 0;
              }
              else {
                lVar50 = local_d0[-1];
              }
              iVar27 = ufbx_triangulate_face(lVar41,lVar50 - (ulong)uVar25,puVar14,uVar46);
              uVar25 = uVar25 + iVar27 * 3;
              if (iVar27 == 0) goto LAB_0010a849;
              uVar28 = 2;
              do {
                uVar42 = (ulong)uVar28;
                uVar1 = uVar28 - 2;
                uVar28 = uVar28 + 3;
                puVar6 = (undefined4 *)(lVar41 + uVar42 * 4);
                puVar7 = (undefined4 *)(lVar41 + (ulong)uVar1 * 4);
                uVar11 = *puVar7;
                *puVar7 = *puVar6;
                *puVar6 = uVar11;
              } while (uVar28 != iVar27 * 3 + 2U);
              puVar54 = puVar54 + 1;
            } while (puVar55 != puVar54);
LAB_0010a908:
            uVar42 = (ulong)uVar25;
            if (local_d0 != (undefined8 *)0x0) goto LAB_0010a921;
            if (uVar42 == 0) goto LAB_0010bba8;
            goto LAB_0010baa7;
          }
          if (local_d0 != (undefined8 *)0x0) goto LAB_0010add9;
LAB_0010bba8:
          Array::Array(local_128);
          Array::resize((int)local_128);
          if (!bVar63) {
            iVar27 = 0;
            puVar34 = (undefined8 *)0x0;
            goto LAB_0010a97a;
          }
          puVar34 = (undefined8 *)0x0;
          local_80 = (float *)0x0;
          CowData<Vector3>::resize<false>((CowData<Vector3> *)&local_80,0);
          iVar27 = 0;
LAB_0010bd42:
          local_1f8 = (CowData<float> *)&local_80;
          local_210 = local_128;
          ::Variant::Variant((Variant *)&local_58,(Vector *)&local_88);
          pVVar33 = (Variant *)Array::operator[]((int)local_210);
          ::Variant::operator=(pVVar33,(Variant *)&local_58);
          if (::Variant::needs_deinit[(int)local_58] != '\0') {
            ::Variant::_clear_internal();
          }
          CowData<Vector3>::_unref((CowData<Vector3> *)local_1f8);
        }
        else {
          local_d0 = puVar34 + 2;
          *puVar34 = 1;
          puVar34[1] = (ulong)uVar25;
          puVar54 = *(uint **)(local_268 + 0xc);
          puVar55 = puVar54 + *(long *)(local_268 + 0xe);
          if (puVar55 != puVar54) goto LAB_0010a828;
LAB_0010add9:
          uVar42 = 0;
LAB_0010a921:
          puVar34 = local_d0;
          if (uVar42 != local_d0[-1]) {
LAB_0010baa7:
            _err_print_error("_parse_meshes","modules/fbx/fbx_document.cpp",0x24d,
                             "Condition \"(uint64_t)offset != (uint64_t)indices.size()\" is true. Continuing."
                             ,0,0);
            CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_d0);
            goto LAB_0010a166;
          }
          if (local_d0 == (undefined8 *)0x0) goto LAB_0010bba8;
          iVar27 = *(int *)(local_d0 + -1);
          Array::Array(local_128);
          Array::resize((int)local_128);
          if (bVar63) {
            local_80 = (float *)0x0;
            iVar52 = (int)puVar34[-1];
            CowData<Vector3>::resize<false>((CowData<Vector3> *)&local_80,(long)iVar52);
            if (0 < iVar52) {
              uVar42 = 0;
              do {
                uVar57 = puVar34[-1];
                if ((long)uVar57 <= (long)uVar42) goto LAB_0010b6b7;
                uVar25 = *(uint *)(puVar14[0x2b] + (ulong)*(uint *)((long)puVar34 + uVar42 * 4) * 4)
                ;
                if (local_80 == (float *)0x0) {
                  uVar49 = 0;
                  goto LAB_0010af41;
                }
                uVar49 = *(ulong *)(local_80 + -2);
                if ((long)uVar49 <= (long)uVar42) goto LAB_0010af41;
                CowData<Vector3>::_copy_on_write((CowData<Vector3> *)&local_80);
                (local_80 + uVar42 * 3)[2] = 0.0;
                *(ulong *)(local_80 + uVar42 * 3) =
                     CONCAT44((float)(uVar25 >> 0x10),(float)(uVar25 & 0xffff));
                bVar64 = iVar52 - 1 != uVar42;
                uVar42 = uVar42 + 1;
              } while (bVar64);
            }
            goto LAB_0010bd42;
          }
LAB_0010a97a:
          local_210 = local_128;
          _decode_vertex_attrib_vec3((ufbx_vertex_vec3 *)&local_88,(Vector *)(puVar14 + 0x31));
          ::Variant::Variant((Variant *)&local_58,(Vector *)&local_88);
          pVVar33 = (Variant *)Array::operator[]((int)local_210);
          ::Variant::operator=(pVVar33,(Variant *)&local_58);
          if (::Variant::needs_deinit[(int)local_58] != '\0') {
            ::Variant::_clear_internal();
          }
          CowData<Vector3>::_unref((CowData<Vector3> *)&local_80);
        }
        local_1f8 = (CowData<float> *)&local_80;
        local_210 = local_128;
        local_230 = (Variant *)&local_58;
        _decode_vertex_attrib_vec3(local_c8,(Vector *)(puVar14 + 0x3a));
        ::Variant::Variant(local_230,(Vector *)local_c8);
        iVar52 = (int)local_210;
        pVVar33 = (Variant *)Array::operator[](iVar52);
        ::Variant::operator=(pVVar33,local_230);
        if (::Variant::needs_deinit[(int)local_58] != '\0') {
          ::Variant::_clear_internal();
        }
        if (*(char *)(puVar14 + 0x4c) != '\0') {
          local_80 = (float *)0x0;
          if (puVar34 == (undefined8 *)0x0) {
            CowData<float>::resize<false>(local_1f8,0);
          }
          else {
            iVar59 = (int)puVar34[-1];
            CowData<float>::resize<false>(local_1f8,(long)(iVar59 * 4));
            if (0 < iVar59) {
              uVar60 = 0;
              lVar41 = 0xc;
              uVar42 = 0;
              uVar45 = 0;
              uVar57 = puVar34[-1];
              if ((long)puVar34[-1] < 1) goto LAB_0010b6b7;
              while( true ) {
                pdVar44 = (double *)
                          (puVar14[0x4d] +
                          (ulong)*(uint *)(puVar14[0x4f] +
                                          (ulong)*(uint *)((long)puVar34 + uVar60) * 4) * 0x18);
                dVar8 = pdVar44[2];
                dVar9 = pdVar44[1];
                dVar10 = *pdVar44;
                uVar42 = uVar60;
                if (local_80 == (float *)0x0) {
                  uVar49 = 0;
                  goto LAB_0010af41;
                }
                uVar49 = *(ulong *)(local_80 + -2);
                if ((long)uVar49 <= (long)uVar60) goto LAB_0010af41;
                CowData<float>::_copy_on_write(local_1f8);
                uVar42 = uVar60 + 1;
                local_80[uVar45 * 4] = (float)dVar10;
                if (local_80 == (float *)0x0) goto LAB_0010af23;
                uVar49 = *(ulong *)(local_80 + -2);
                if ((long)uVar49 <= (long)uVar42) goto LAB_0010af41;
                CowData<float>::_copy_on_write(local_1f8);
                uVar42 = uVar60 + 2;
                *(float *)((long)local_80 + lVar41 + -8) = (float)dVar9;
                if (local_80 == (float *)0x0) goto LAB_0010af23;
                uVar49 = *(ulong *)(local_80 + -2);
                if ((long)uVar49 <= (long)uVar42) goto LAB_0010af41;
                CowData<float>::_copy_on_write(local_1f8);
                uVar42 = uVar60 + 3;
                *(float *)((long)local_80 + lVar41 + -4) = (float)dVar8;
                if (local_80 == (float *)0x0) goto LAB_0010af23;
                uVar49 = *(ulong *)(local_80 + -2);
                if ((long)uVar49 <= (long)uVar42) goto LAB_0010af41;
                uVar60 = uVar60 + 4;
                CowData<float>::_copy_on_write(local_1f8);
                *(undefined4 *)((long)local_80 + lVar41) = 0x3f800000;
                uVar42 = uVar45 + 1;
                lVar41 = lVar41 + 0x10;
                if (iVar59 - 1 == uVar45) break;
                uVar45 = uVar42;
                uVar57 = puVar34[-1];
                if ((long)puVar34[-1] <= (long)uVar42) goto LAB_0010b6b7;
              }
            }
          }
          if ((*(char *)(puVar14 + 0x55) != '\0') && (0 < iVar27)) {
            uVar45 = 0;
            uVar60 = 0;
            uVar56 = 2;
            pfVar38 = local_80;
            do {
              uVar42 = uVar56;
              if (pfVar38 == (float *)0x0) {
                uVar57 = 0;
                goto LAB_0010b6b7;
              }
              uVar49 = *(ulong *)(pfVar38 + -2);
              uVar57 = uVar49;
              if ((long)uVar49 <= (long)uVar56) goto LAB_0010b6b7;
              uVar42 = uVar45 + 1;
              if (((long)uVar49 <= (long)(uVar45 + 1)) ||
                 (uVar42 = uVar45, (long)uVar49 <= (long)uVar45)) goto LAB_0010b6b7;
              uVar42 = uVar60;
              if (puVar34 == (undefined8 *)0x0) {
LAB_0010c636:
                uVar57 = 0;
                goto LAB_0010b6b7;
              }
              uVar57 = puVar34[-1];
              if ((long)uVar57 <= (long)uVar60) goto LAB_0010b6b7;
              pdVar44 = (double *)
                        (puVar14[0x56] +
                        (ulong)*(uint *)(puVar14[0x58] +
                                        (ulong)*(uint *)((long)puVar34 + uVar45) * 4) * 0x18);
              if (local_c0 == 0) goto LAB_0010c636;
              uVar57 = *(ulong *)(local_c0 + -8);
              if ((long)uVar57 <= (long)uVar60) goto LAB_0010b6b7;
              pfVar35 = (float *)(local_c0 + uVar45 * 3);
              if ((pfVar38[uVar56] * pfVar35[1] - pfVar38[uVar60 * 4 + 1] * pfVar35[2]) *
                  (float)*pdVar44 +
                  (pfVar35[2] * pfVar38[uVar60 * 4] - pfVar38[uVar56] * *pfVar35) *
                  (float)pdVar44[1] +
                  (pfVar38[uVar60 * 4 + 1] * *pfVar35 - pfVar38[uVar60 * 4] * pfVar35[1]) *
                  (float)pdVar44[2] < 0.0) {
                uVar42 = (ulong)((int)uVar45 + 3);
                if ((long)uVar49 <= (long)uVar42) goto LAB_0010af41;
                CowData<float>::_copy_on_write(local_1f8);
                local_80[uVar42] = -1.0;
                pfVar38 = local_80;
              }
              uVar60 = uVar60 + 1;
              uVar56 = uVar56 + 4;
              uVar45 = uVar45 + 4;
            } while ((long)iVar27 != uVar60);
          }
          ::Variant::Variant(local_230,(Vector *)&local_88);
          pVVar33 = (Variant *)Array::operator[](iVar52);
          ::Variant::operator=(pVVar33,local_230);
          if (::Variant::needs_deinit[(int)local_58] != '\0') {
            ::Variant::_clear_internal();
          }
          CowData<float>::_unref(local_1f8);
        }
        if (*(char *)(puVar14 + 0x43) != '\0') {
          _decode_vertex_attrib_vec2((ufbx_vertex_vec2 *)&local_88,(Vector *)(puVar14 + 0x43));
          _process_uv_set(this,(Vector *)&local_88);
          ::Variant::Variant(local_230,(Vector *)&local_88);
          pVVar33 = (Variant *)Array::operator[](iVar52);
          ::Variant::operator=(pVVar33,local_230);
          if (::Variant::needs_deinit[(int)local_58] != '\0') {
            ::Variant::_clear_internal();
          }
          CowData<Vector2>::_unref((CowData<Vector2> *)local_1f8);
        }
        uVar42 = puVar14[0x71];
        if ((1 < uVar42) && (*(char *)(puVar14[0x70] + 0x108) != '\0')) {
          _decode_vertex_attrib_vec2
                    ((ufbx_vertex_vec2 *)&local_88,(Vector *)(puVar14[0x70] + 0x108));
          _process_uv_set(this,(Vector *)&local_88);
          ::Variant::Variant(local_230,(Vector *)&local_88);
          pVVar33 = (Variant *)Array::operator[](iVar52);
          ::Variant::operator=(pVVar33,local_230);
          if (::Variant::needs_deinit[(int)local_58] != '\0') {
            ::Variant::_clear_internal();
          }
          CowData<Vector2>::_unref((CowData<Vector2> *)local_1f8);
          uVar42 = puVar14[0x71];
        }
        local_1b8._0_4_ = 3;
        local_1b0 = 0x2d0;
        uVar25 = 0;
        while( true ) {
          iVar59 = (int)uVar42;
          local_b0 = (undefined8 *)0x0;
          local_a0 = (float *)0x0;
          local_90 = (float *)0x0;
          if (iVar59 <= (int)local_1b8 + -1) break;
          lVar41 = puVar14[0x70] + -0xf0 + local_1b0;
          if (*(char *)(lVar41 + 0x18) == '\0') {
            if ((int)local_1b8 < iVar59) {
              lVar41 = puVar14[0x70] + local_1b0;
              cVar22 = *(char *)(lVar41 + 0x18);
              goto joined_r0x0010bc4b;
            }
            goto LAB_0010b7b3;
          }
          _decode_vertex_attrib_vec2((ufbx_vertex_vec2 *)&local_88,(Vector *)(lVar41 + 0x18));
          pfVar38 = local_80;
          if (local_80 != (float *)0x0) {
            CowData<Vector2>::_unref((CowData<Vector2> *)&local_a0);
            local_a0 = pfVar38;
            local_80 = (float *)0x0;
          }
          CowData<Vector2>::_unref((CowData<Vector2> *)local_1f8);
          _process_uv_set(this,(Vector *)&local_a8);
          pfVar38 = local_a0;
          if (((int)local_1b8 < *(int *)(puVar14 + 0x71)) &&
             (*(char *)(local_1b0 + puVar14[0x70] + 0x18) != '\0')) {
            _decode_vertex_attrib_vec2
                      ((ufbx_vertex_vec2 *)&local_88,(Vector *)(local_1b0 + puVar14[0x70] + 0x18));
            if (local_80 != (float *)0x0) {
LAB_0010bc7a:
              pfVar35 = local_80;
              CowData<Vector2>::_unref((CowData<Vector2> *)&local_90);
              local_90 = pfVar35;
              local_80 = (float *)0x0;
            }
            CowData<Vector2>::_unref((CowData<Vector2> *)local_1f8);
            _process_uv_set(this,(Vector *)&local_98);
            CowData<float>::resize<false>((CowData<float> *)&local_b0,(long)(iVar27 * 4));
            if (((pfVar38 == (float *)0x0) || (*(long *)(pfVar38 + -2) < 1)) || (iVar27 < 1))
            goto LAB_0010b98a;
            local_1c0 = 4;
LAB_0010b32a:
            iVar59 = 0;
            uVar45 = 0;
            do {
              fVar66 = pfVar38[uVar45 * 2];
              uVar42 = (ulong)(local_1c0 * iVar59);
              if (local_b0 == (undefined8 *)0x0) {
                uVar49 = 0;
                goto LAB_0010af41;
              }
              uVar49 = local_b0[-1];
              if ((long)uVar49 <= (long)uVar42) goto LAB_0010af41;
              CowData<float>::_copy_on_write((CowData<float> *)&local_b0);
              uVar57 = *(ulong *)(pfVar38 + -2);
              *(float *)((long)local_b0 + uVar42 * 4) = fVar66;
              uVar42 = uVar45;
              if ((long)uVar57 <= (long)uVar45) goto LAB_0010b6b7;
              fVar66 = (pfVar38 + uVar45 * 2)[1];
              uVar42 = (ulong)(local_1c0 * iVar59 + 1);
              if (local_b0 == (undefined8 *)0x0) {
                uVar49 = 0;
                goto LAB_0010af41;
              }
              uVar49 = local_b0[-1];
              if ((long)uVar49 <= (long)uVar42) goto LAB_0010af41;
              iVar59 = iVar59 + 1;
              CowData<float>::_copy_on_write((CowData<float> *)&local_b0);
              lVar41 = *(long *)(pfVar38 + -2);
              uVar45 = (ulong)iVar59;
              *(float *)((long)local_b0 + uVar42 * 4) = fVar66;
            } while (((long)uVar45 < lVar41) && (iVar59 < iVar27));
            if (local_1c0 == 4) goto LAB_0010b98a;
LAB_0010b431:
            iVar43 = (int)lVar41;
          }
          else {
            CowData<float>::resize<false>((CowData<float> *)&local_b0,(long)(iVar27 * 2));
            if (local_a0 != (float *)0x0) {
              lVar41 = *(long *)(local_a0 + -2);
              if ((0 < iVar27) && (0 < lVar41)) {
                local_1c0 = 2;
                pfVar38 = local_a0;
                goto LAB_0010b32a;
              }
              goto LAB_0010b431;
            }
            iVar43 = 0;
          }
          iVar59 = 2;
          _zero_unused_elements(this,(Vector *)&local_b8,iVar43,iVar27,2);
LAB_0010b45b:
          if (local_b0 != (undefined8 *)0x0) {
            ::Variant::Variant(local_230,(Vector *)&local_b8);
            pVVar33 = (Variant *)Array::operator[](iVar52);
            ::Variant::operator=(pVVar33,local_230);
            if (::Variant::needs_deinit[(int)local_58] != '\0') {
              ::Variant::_clear_internal();
            }
            uVar25 = uVar25 | (iVar59 != 2) + 5 + (uint)(iVar59 != 2) <<
                              ((char)((int)local_1b8 + -3 >> 1) * '\x03' + 0xdU & 0x1f);
          }
          CowData<Vector2>::_unref((CowData<Vector2> *)&local_90);
          CowData<Vector2>::_unref((CowData<Vector2> *)&local_a0);
          CowData<float>::_unref((CowData<float> *)&local_b0);
          local_1b8._0_4_ = (int)local_1b8 + 2;
          local_1b0 = local_1b0 + 0x1e0;
          if ((int)local_1b8 == 9) goto LAB_0010b7ff;
          uVar42 = puVar14[0x71];
        }
        if ((int)local_1b8 < iVar59) {
          lVar41 = local_1b0 + puVar14[0x70];
          cVar22 = *(char *)(lVar41 + 0x18);
joined_r0x0010bc4b:
          if (cVar22 != '\0') {
            _decode_vertex_attrib_vec2((ufbx_vertex_vec2 *)&local_88,(Vector *)(lVar41 + 0x18));
            if (local_80 != (float *)0x0) {
              pfVar38 = (float *)0x0;
              goto LAB_0010bc7a;
            }
            CowData<Vector2>::_unref((CowData<Vector2> *)local_1f8);
            _process_uv_set(this,(Vector *)&local_98);
            CowData<float>::resize<false>((CowData<float> *)&local_b0,(long)(iVar27 * 4));
LAB_0010b98a:
            pfVar38 = local_90;
            if (local_90 == (float *)0x0) {
              lVar41 = 0;
            }
            else {
              lVar41 = *(long *)(local_90 + -2);
              if ((0 < lVar41) && (0 < iVar27)) {
                uVar60 = 2;
                uVar45 = 0;
                do {
                  fVar66 = pfVar38[uVar45 * 2];
                  uVar42 = uVar60;
                  if (local_b0 == (undefined8 *)0x0) {
                    uVar49 = 0;
                    goto LAB_0010af41;
                  }
                  uVar49 = local_b0[-1];
                  if ((long)uVar49 <= (long)uVar60) goto LAB_0010af41;
                  CowData<float>::_copy_on_write((CowData<float> *)&local_b0);
                  uVar57 = *(ulong *)(pfVar38 + -2);
                  *(float *)((long)local_b0 + uVar60 * 4) = fVar66;
                  uVar42 = uVar45;
                  if ((long)uVar57 <= (long)uVar45) goto LAB_0010b6b7;
                  uVar11 = *(undefined4 *)((long)pfVar38 + uVar60 * 2);
                  uVar42 = uVar60 + 1;
                  if (local_b0 == (undefined8 *)0x0) goto LAB_0010af23;
                  uVar49 = local_b0[-1];
                  if ((long)uVar49 <= (long)uVar42) goto LAB_0010af41;
                  uVar60 = uVar60 + 4;
                  CowData<float>::_copy_on_write((CowData<float> *)&local_b0);
                  uVar42 = uVar45 + 1;
                  *(undefined4 *)((long)local_b0 + uVar45 * 0x10 + 0xc) = uVar11;
                  lVar41 = *(long *)(pfVar38 + -2);
                } while (((long)uVar42 < lVar41) && (uVar45 = uVar42, (int)uVar42 < iVar27));
              }
            }
            iVar59 = 4;
            _zero_unused_elements(this,(Vector *)&local_b8,(int)lVar41,iVar27,4);
            goto LAB_0010b45b;
          }
        }
LAB_0010b7b3:
        CowData<Vector2>::_unref((CowData<Vector2> *)&local_90);
        CowData<Vector2>::_unref((CowData<Vector2> *)&local_a0);
        CowData<float>::_unref((CowData<float> *)&local_b0);
LAB_0010b7ff:
        local_190 = (CowData<Vector3> *)&local_a0;
        local_1c8 = (CowData<int> *)&local_90;
        cVar22 = *(char *)(puVar14 + 0x5e);
        if (cVar22 != '\0') {
          local_80 = (float *)0x0;
          if (puVar34 == (undefined8 *)0x0) {
LAB_0010c33d:
            ::Variant::Variant(local_230,(Vector *)&local_88);
            pVVar33 = (Variant *)Array::operator[](iVar52);
            ::Variant::operator=(pVVar33,local_230);
            if (::Variant::needs_deinit[(int)local_58] != '\0') {
              ::Variant::_clear_internal();
            }
            pfVar38 = local_80;
            if (local_80 != (float *)0x0) {
              LOCK();
              pfVar35 = local_80 + -4;
              *(long *)pfVar35 = *(long *)pfVar35 + -1;
              UNLOCK();
              if (*(long *)pfVar35 == 0) {
                local_80 = (float *)0x0;
                Memory::free_static(pfVar38 + -4,false);
              }
            }
            goto LAB_0010b81a;
          }
          uVar46 = puVar34[-1];
          lVar41 = (long)(int)uVar46;
          if (lVar41 < 0) {
            _err_print_error("resize","./core/templates/cowdata.h",0x157,
                             "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0)
            ;
            goto LAB_0010c33d;
          }
          if (lVar41 == 0) goto LAB_0010c33d;
          CowData<Color>::_copy_on_write((CowData<Color> *)local_1f8);
          uVar42 = lVar41 * 0x10 - 1;
          uVar42 = uVar42 | uVar42 >> 1;
          uVar42 = uVar42 | uVar42 >> 2;
          uVar42 = uVar42 | uVar42 >> 4;
          uVar42 = uVar42 | uVar42 >> 8;
          uVar42 = uVar42 | uVar42 >> 0x10;
          pfVar38 = (float *)Memory::alloc_static((uVar42 | uVar42 >> 0x20) + 0x11,false);
          if (pfVar38 == (float *)0x0) {
            _err_print_error("resize","./core/templates/cowdata.h",0x171);
          }
          else {
            local_80 = pfVar38 + 4;
            pfVar38[0] = 1.4013e-45;
            uVar18 = _UNK_0012f4f8;
            uVar17 = __LC136;
            pfVar38[1] = 0.0;
            pfVar35 = pfVar38;
            if ((lVar41 * 0x10 & 0x10U) == 0) goto LAB_0010c26c;
            *(undefined8 *)(pfVar38 + 4) = __LC136;
            *(undefined8 *)(pfVar38 + 6) = uVar18;
            pfVar35 = local_80;
            while (pfVar35 != pfVar38 + lVar41 * 4) {
LAB_0010c26c:
              *(undefined8 *)(pfVar35 + 4) = uVar17;
              *(undefined8 *)(pfVar35 + 6) = uVar18;
              *(undefined8 *)(pfVar35 + 8) = uVar17;
              *(undefined8 *)(pfVar35 + 10) = uVar18;
              pfVar35 = pfVar35 + 8;
            }
            *(long *)(pfVar38 + 2) = lVar41;
          }
          puVar20 = local_d0;
          if (local_d0 != (undefined8 *)0x0) {
            uVar42 = 0;
            do {
              uVar57 = puVar20[-1];
              if ((long)uVar57 <= (long)uVar42) goto LAB_0010b6b7;
              pdVar44 = (double *)
                        ((ulong)*(uint *)(puVar14[0x61] +
                                         (ulong)*(uint *)((long)puVar20 + uVar42 * 4) * 4) * 0x20 +
                        puVar14[0x5f]);
              dVar8 = *pdVar44;
              dVar9 = pdVar44[1];
              dVar10 = pdVar44[2];
              dVar16 = pdVar44[3];
              if (local_80 == (float *)0x0) goto LAB_0010af23;
              uVar49 = *(ulong *)(local_80 + -2);
              if ((long)uVar49 <= (long)uVar42) goto LAB_0010af41;
              CowData<Color>::_copy_on_write((CowData<Color> *)local_1f8);
              uVar57 = uVar42 + 1;
              *(ulong *)(local_80 + uVar42 * 4) = CONCAT44((float)dVar9,(float)dVar8);
              *(ulong *)(local_80 + uVar42 * 4 + 2) = CONCAT44((float)dVar16,(float)dVar10);
              uVar42 = uVar57;
            } while ((int)uVar57 < (int)uVar46);
            goto LAB_0010c33d;
          }
          goto LAB_0010c5fe;
        }
LAB_0010b81a:
        plVar36 = (long *)puVar14[0x91];
        plVar4 = plVar36 + puVar14[0x92];
        if (plVar4 != plVar36) {
          lVar41 = *plVar36;
          uVar42 = (ulong)*(uint *)(lVar41 + 0x34);
          lVar50 = *(long *)(*param_2 + 0x5e0);
          if (lVar50 == 0) {
            uVar57 = 0;
            goto LAB_0010b6b7;
          }
          uVar57 = *(ulong *)(lVar50 + -8);
          while( true ) {
            if ((long)uVar57 <= (long)uVar42) goto LAB_0010b6b7;
            iVar59 = *(int *)(lVar50 + uVar42 * 4);
            if (-1 < iVar59) {
              plVar36 = (long *)puVar14[7];
              plVar4 = plVar36 + puVar14[8];
              if (plVar4 == plVar36) goto LAB_0010be94;
              lVar50 = *(long *)(*param_2 + 0x2a8);
              uVar42 = (ulong)*(uint *)(*plVar36 + 0x34);
              if (lVar50 == 0) {
                uVar57 = 0;
                goto LAB_0010b6b7;
              }
              uVar57 = *(ulong *)(lVar50 + -8);
              goto LAB_0010be78;
            }
            plVar36 = plVar36 + 1;
            if (plVar4 == plVar36) break;
            lVar41 = *plVar36;
            uVar42 = (ulong)*(uint *)(lVar41 + 0x34);
          }
        }
        local_1d8 = 0;
        goto LAB_0010c94a;
      }
LAB_0010a18d:
      local_b8 = (String *)0x0;
      Ref<GLTFMesh>::instantiate<>((Ref<GLTFMesh> *)&local_b8);
      Dictionary::Dictionary((Dictionary *)&local_a8);
      ::Variant::Variant((Variant *)&local_58,local_e8);
      ::Variant::Variant((Variant *)local_78,"blend_channels");
      pVVar33 = (Variant *)Dictionary::operator[]((Variant *)&local_a8);
      ::Variant::operator=(pVVar33,(Variant *)&local_58);
      if (::Variant::needs_deinit[local_78[0]] != '\0') {
        ::Variant::_clear_internal();
      }
      if (::Variant::needs_deinit[(int)local_58] != '\0') {
        ::Variant::_clear_internal();
      }
      pSVar21 = local_b8;
      ::Variant::Variant((Variant *)&local_58,(Dictionary *)&local_a8);
      StringName::StringName((StringName *)&local_88,"GODOT_mesh_blend_channels",false);
      GLTFMesh::set_additional_data(pSVar21,(String *)&local_88,(Variant *)&local_58);
      if ((StringName::configured != '\0') && (local_88 != (Resource *)0x0)) {
        StringName::unref();
      }
      if (::Variant::needs_deinit[(int)local_58] != '\0') {
        ::Variant::_clear_internal();
      }
      local_80 = (float *)0x0;
      pSVar47 = pSVar21;
      if (local_f0 != (float *)0x0) {
        pfVar38 = local_f0 + -4;
        do {
          lVar41 = *(long *)pfVar38;
          pSVar47 = local_b8;
          if (lVar41 == 0) goto LAB_0010a2e3;
          LOCK();
          lVar50 = *(long *)pfVar38;
          bVar63 = lVar41 == lVar50;
          if (bVar63) {
            *(long *)pfVar38 = lVar41 + 1;
            lVar50 = lVar41;
          }
          UNLOCK();
        } while (!bVar63);
        if (lVar50 != -1) {
          local_80 = local_f0;
        }
      }
LAB_0010a2e3:
      GLTFMesh::set_blend_weights(pSVar21,(String *)&local_88);
      CowData<float>::_unref((CowData<float> *)&local_80);
      local_98 = (Resource *)0x0;
      if (local_140 != (Resource *)0x0) {
        local_88 = (Resource *)0x0;
        local_98 = local_140;
        cVar22 = RefCounted::reference();
        if (cVar22 == '\0') {
          local_98 = (Resource *)0x0;
        }
        Ref<ImporterMesh>::unref((Ref<ImporterMesh> *)&local_88);
      }
      GLTFMesh::set_mesh(pSVar21,(Ref<GLTFMesh> *)&local_98);
      Ref<ImporterMesh>::unref((Ref<ImporterMesh> *)&local_98);
      Resource::get_name();
      Resource::set_name(pSVar21);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      local_88 = (Resource *)0x0;
      if (local_130 != (Resource *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_130);
      }
      GLTFMesh::set_original_name(pSVar21,(String *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      local_98 = (Resource *)0x0;
      lVar41 = *param_2;
      Ref<GLTFMesh>::operator=((Ref<GLTFMesh> *)&local_98,pSVar47);
      if (*(long *)(lVar41 + 0x2e8) == 0) {
        lVar50 = 1;
      }
      else {
        lVar50 = *(long *)(*(long *)(lVar41 + 0x2e8) + -8) + 1;
      }
      iVar26 = CowData<Ref<GLTFMesh>>::resize<false>
                         ((CowData<Ref<GLTFMesh>> *)(lVar41 + 0x2e8),lVar50);
      if (iVar26 == 0) {
        if (*(long *)(lVar41 + 0x2e8) == 0) {
          lVar48 = -1;
          lVar50 = 0;
        }
        else {
          lVar50 = *(long *)(*(long *)(lVar41 + 0x2e8) + -8);
          lVar48 = lVar50 + -1;
          if (-1 < lVar48) {
            CowData<Ref<GLTFMesh>>::_copy_on_write((CowData<Ref<GLTFMesh>> *)(lVar41 + 0x2e8));
            plVar4 = (long *)(*(long *)(lVar41 + 0x2e8) + lVar48 * 8);
            pRVar53 = (Resource *)*plVar4;
            if (local_98 != pRVar53) {
              *plVar4 = (long)local_98;
              local_88 = pRVar53;
              if ((local_98 != (Resource *)0x0) &&
                 (cVar22 = RefCounted::reference(), cVar22 == '\0')) {
                *plVar4 = 0;
              }
              Ref<GLTFMesh>::unref((Ref<GLTFMesh> *)&local_88);
            }
            goto LAB_0010a48e;
          }
        }
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar48,lVar50,"p_index","size()","",false
                   ,false);
      }
      else {
        _err_print_error("push_back","./core/templates/vector.h",0x142,
                         "Condition \"err\" is true. Returning: true",0,0);
      }
LAB_0010a48e:
      Ref<GLTFMesh>::unref((Ref<GLTFMesh> *)&local_98);
      Dictionary::~Dictionary((Dictionary *)&local_a8);
      Ref<GLTFMesh>::unref((Ref<GLTFMesh> *)&local_b8);
      CowData<int>::_unref((CowData<int> *)local_e0);
      CowData<float>::_unref((CowData<float> *)&local_f0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
      Ref<ImporterMesh>::unref((Ref<ImporterMesh> *)&local_140);
      local_218 = local_218 + 1;
    } while (plVar2 != local_218);
  }
LAB_0010a4fa:
  cVar22 = is_print_verbose_enabled();
  if (cVar22 != '\0') {
    itos((long)&local_98);
    operator+((char *)&local_88,(String *)"FBX: Total meshes: ");
    ::Variant::Variant((Variant *)&local_58,(String *)&local_88);
    print_line((Variant *)&local_58);
    if (::Variant::needs_deinit[(int)local_58] != '\0') {
      ::Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  }
  uVar46 = 0;
LAB_0010a511:
  if (pvVar30 != (void *)0x0) {
    Memory::free_static(pvVar30,false);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar46;
LAB_0010be78:
  if ((long)uVar57 <= (long)uVar42) goto LAB_0010b6b7;
  plVar36 = plVar36 + 1;
  *(int *)(*(long *)(lVar50 + uVar42 * 8) + 0x288) = iVar59;
  if (plVar4 == plVar36) goto LAB_0010be94;
  uVar42 = (ulong)*(uint *)(*plVar36 + 0x34);
  goto LAB_0010be78;
LAB_0010be94:
  local_90 = (float *)0x0;
  local_80 = (float *)0x0;
  local_1d8 = (-(uint)(*(ulong *)(lVar41 + 0xb8) < 5) & 0xfffffffc) + 8;
  CowData<int>::resize<false>(local_1c8,(long)(iVar27 * local_1d8));
  CowData<float>::resize<false>(local_1f8,(long)(iVar27 * local_1d8));
  if (0 < iVar27) {
    if (puVar34 != (undefined8 *)0x0) {
      iVar59 = 0;
      uVar42 = 0;
      do {
        uVar57 = puVar34[-1];
        if ((long)uVar57 <= (long)uVar42) goto LAB_0010b6b7;
        piVar37 = (int *)((ulong)*(uint *)(puVar14[0x2b] +
                                          (ulong)*(uint *)((long)puVar34 + (long)iVar59 * 4) * 4) *
                          0x10 + *(long *)(lVar41 + 0x98));
        iVar43 = piVar37[1];
        iVar12 = *piVar37;
        if (local_1d8 <= iVar43) {
          iVar43 = local_1d8;
        }
        iVar29 = local_1d8 * iVar59;
        if (iVar43 < 1) {
          uVar42 = (ulong)(iVar29 + iVar43);
          if (-1 < (long)uVar42) goto LAB_0010c6e3;
LAB_0010c7be:
          if (local_90 == (float *)0x0) {
LAB_0010af23:
            uVar49 = 0;
          }
          else {
LAB_0010c7d2:
            uVar49 = *(ulong *)(local_90 + -2);
          }
LAB_0010af41:
          pcVar73 = "((Vector<T> *)(this))->_cowdata.size()";
          iVar26 = 0x38;
          pcVar51 = "./core/templates/vector.h";
          goto LAB_0010af4d;
        }
        uVar57 = (ulong)iVar29;
        fVar66 = 0.0;
        uVar42 = uVar57;
        do {
          pfVar38 = (float *)((ulong)(uint)((iVar12 - iVar29) + (int)uVar42) * 0x10 +
                             *(long *)(lVar41 + 0xa8));
          fVar70 = (float)*(double *)(pfVar38 + 2);
          fVar67 = *pfVar38;
          if (local_90 == (float *)0x0) {
LAB_0010c44c:
            uVar49 = 0;
            goto LAB_0010af41;
          }
          uVar49 = *(ulong *)(local_90 + -2);
          if ((long)uVar49 <= (long)uVar42) goto LAB_0010af41;
          CowData<int>::_copy_on_write(local_1c8);
          local_90[uVar42] = fVar67;
          if (local_80 == (float *)0x0) goto LAB_0010c44c;
          uVar49 = *(ulong *)(local_80 + -2);
          if ((long)uVar49 <= (long)uVar42) goto LAB_0010af41;
          uVar49 = uVar42 + 1;
          CowData<float>::_copy_on_write(local_1f8);
          local_80[uVar42] = fVar70;
          fVar66 = fVar66 + fVar70;
          uVar42 = uVar49;
        } while (uVar49 != (long)iVar43 + uVar57);
        uVar42 = uVar57;
        if (0.0 < fVar66) {
          do {
            if (local_80 == (float *)0x0) {
              uVar49 = 0;
              goto LAB_0010af41;
            }
            uVar49 = *(ulong *)(local_80 + -2);
            if ((long)uVar49 <= (long)uVar42) goto LAB_0010af41;
            CowData<float>::_copy_on_write(local_1f8);
            uVar49 = uVar42 + 1;
            local_80[uVar42] = local_80[uVar42] / fVar66;
            uVar42 = uVar49;
          } while (uVar49 != (long)iVar43 + uVar57);
        }
        if (iVar43 < local_1d8) {
          uVar42 = (ulong)(iVar29 + iVar43);
LAB_0010c6e3:
          local_1a0 = (long)iVar43;
          lVar50 = uVar42 * 4;
          uVar57 = local_1a0 + iVar29;
          do {
            if (local_90 == (float *)0x0) {
LAB_0010da59:
              uVar49 = 0;
              goto LAB_0010af41;
            }
            if (*(long *)(local_90 + -2) <= (long)uVar42) goto LAB_0010c7d2;
            CowData<int>::_copy_on_write(local_1c8);
            *(undefined4 *)((long)local_90 + lVar50) = 0;
            if (local_80 == (float *)0x0) goto LAB_0010da59;
            uVar49 = *(ulong *)(local_80 + -2);
            if ((long)uVar49 <= (long)uVar42) goto LAB_0010af41;
            CowData<float>::_copy_on_write(local_1f8);
            local_1b8._0_4_ = (int)(local_1a0 + iVar29);
            *(undefined4 *)((long)local_80 + lVar50) = 0;
            if (local_1d8 <= ((iVar43 + 1) - (int)local_1b8) + (int)uVar57) break;
            uVar42 = uVar57 + 1;
            lVar50 = lVar50 + 4;
            uVar57 = uVar42;
            if ((long)uVar42 < 0) goto LAB_0010c7be;
          } while( true );
        }
        iVar59 = iVar59 + 1;
        if (iVar27 <= iVar59) goto LAB_0010c88f;
        uVar42 = (ulong)iVar59;
      } while( true );
    }
LAB_0010c5fe:
    uVar57 = 0;
    uVar42 = 0;
    goto LAB_0010b6b7;
  }
LAB_0010c88f:
  ::Variant::Variant(local_230,(Vector *)&local_98);
  pVVar33 = (Variant *)Array::operator[](iVar52);
  ::Variant::operator=(pVVar33,local_230);
  if (::Variant::needs_deinit[(int)local_58] != '\0') {
    ::Variant::_clear_internal();
  }
  ::Variant::Variant(local_230,(Vector *)&local_88);
  pVVar33 = (Variant *)Array::operator[](iVar52);
  ::Variant::operator=(pVVar33,local_230);
  if (::Variant::needs_deinit[(int)local_58] != '\0') {
    ::Variant::_clear_internal();
  }
  if (local_1d8 == 8) {
    uVar25 = uVar25 | 0x8000000;
  }
  CowData<float>::_unref(local_1f8);
  CowData<int>::_unref(local_1c8);
LAB_0010c94a:
  bVar64 = local_1d8 == 8;
  if (iVar26 == 3) {
    pVVar33 = (Variant *)Array::operator[](iVar52);
    bVar24 = ::Variant::operator_cast_to_bool(pVVar33);
    if (bVar24) goto LAB_0010c967;
    pVVar33 = (Variant *)Array::operator[](iVar52);
    bVar24 = ::Variant::operator_cast_to_bool(pVVar33);
    if (!bVar24) goto LAB_0010c967;
    pVVar33 = (Variant *)Array::operator[](iVar52);
    bVar24 = ::Variant::operator_cast_to_bool(pVVar33);
    local_120 = (Array *)0x0;
    Ref<SurfaceTool>::instantiate<>((Ref<SurfaceTool> *)&local_120);
    pAVar19 = local_120;
    SurfaceTool::create_from_triangle_arrays(local_120);
    SurfaceTool::set_skin_weight_count(pAVar19,bVar64);
    SurfaceTool::index();
    if (bVar24) {
      SurfaceTool::generate_tangents();
    }
  }
  else {
LAB_0010c967:
    bVar24 = false;
    local_120 = (Array *)0x0;
    Ref<SurfaceTool>::instantiate<>((Ref<SurfaceTool> *)&local_120);
    pAVar19 = local_120;
    SurfaceTool::create_from_triangle_arrays(local_120);
    SurfaceTool::set_skin_weight_count(pAVar19,bVar64);
    SurfaceTool::index();
  }
  local_1b8 = (Ref<SurfaceTool> *)&local_120;
  SurfaceTool::commit_to_arrays();
  Array::operator=(local_210,(Array *)&local_88);
  Array::~Array((Array *)&local_88);
  Array::Array(local_118);
  if (bVar63) {
    cVar23 = is_print_verbose_enabled();
    if (cVar23 != '\0') {
      ::Variant::Variant(local_230,"FBX: Mesh has targets");
      print_line(local_230);
      if (::Variant::needs_deinit[(int)local_58] != '\0') {
        ::Variant::_clear_internal();
      }
    }
    ImporterMesh::set_blend_shape_mode(pRVar53,0);
    plVar36 = (long *)puVar14[0x93];
    plVar4 = plVar36 + puVar14[0x94];
    for (; plVar36 != plVar4; plVar36 = plVar36 + 1) {
      plVar61 = *(long **)(*plVar36 + 0x80);
      plVar5 = plVar61 + *(long *)(*plVar36 + 0x88);
      for (; plVar5 != plVar61; plVar61 = plVar61 + 1) {
        lVar41 = *(long *)(*plVar61 + 0x90);
        if (lVar41 != 0) {
          iVar59 = 0;
          lVar41 = *(long *)(*(long *)(*plVar61 + 0x88) + (lVar41 * 3 + -3) * 8);
          Array::Array(local_110);
          iVar27 = (int)local_110;
          Array::resize(iVar27);
          do {
            pVVar33 = (Variant *)Array::operator[](iVar52);
            iVar59 = iVar59 + 1;
            this_00 = (Variant *)Array::operator[](iVar27);
            ::Variant::operator=(this_00,pVVar33);
          } while (iVar59 != 0xd);
          local_b0 = (undefined8 *)0x0;
          local_a0 = (float *)0x0;
          Array::operator[](iVar52);
          ::Variant::operator_cast_to_Vector((Variant *)&local_98);
          Array::operator[](iVar52);
          ::Variant::operator_cast_to_Vector((Variant *)&local_88);
          if ((local_90 == (float *)0x0) ||
             (iVar59 = (int)*(undefined8 *)(local_90 + -2), iVar59 == 0)) {
            _err_print_error("_parse_meshes","modules/fbx/fbx_document.cpp",799,
                             "Condition \"size == 0\" is true. Returning: ERR_PARSE_ERROR",0,0);
            CowData<Vector3>::_unref((CowData<Vector3> *)local_1f8);
            CowData<Vector3>::_unref((CowData<Vector3> *)local_1c8);
            CowData<Vector3>::_unref(local_190);
            CowData<Vector3>::_unref((CowData<Vector3> *)&local_b0);
            uVar46 = 0x2b;
            Array::~Array(local_110);
            goto LAB_0010ce22;
          }
          CowData<Vector3>::resize<false>((CowData<Vector3> *)&local_b0,(long)iVar59);
          CowData<Vector3>::resize<false>(local_190,(long)iVar59);
          CowData<Vector3>::_copy_on_write((CowData<Vector3> *)&local_b0);
          puVar34 = local_b0;
          CowData<Vector3>::_copy_on_write(local_190);
          if (0 < iVar59) {
            pfVar38 = local_90 + (ulong)(iVar59 - 1) * 3 + 3;
            pfVar35 = local_a0;
            pfVar58 = local_90;
            pfVar62 = local_80;
            do {
              uVar57 = (ulong)((int)(long)pfVar58[1] << 0x10 | (uint)(long)*pfVar58);
              uVar28 = ufbx_get_blend_shape_offset_index(lVar41,uVar57);
              uVar42 = *(ulong *)pfVar62;
              fVar66 = pfVar62[2];
              pdVar44 = (double *)(puVar14[0x2d] + uVar57 * 0x18);
              dVar8 = *pdVar44;
              dVar9 = pdVar44[1];
              fVar67 = (float)pdVar44[2];
              uVar46 = CONCAT44((float)dVar9,(float)dVar8);
              if (uVar28 == 0xffffffff) {
                *puVar34 = uVar46;
                *(float *)(puVar34 + 1) = fVar67;
LAB_0010d4ba:
                *(ulong *)pfVar35 = uVar42;
                pfVar35[2] = fVar66;
              }
              else {
                uVar57 = (ulong)uVar28;
                if (uVar57 < *(ulong *)(lVar41 + 0xa0)) {
                  pdVar44 = (double *)(*(long *)(lVar41 + 0x98) + uVar57 * 0x18);
                  dVar10 = *pdVar44;
                  dVar16 = pdVar44[1];
                  *(float *)(puVar34 + 1) = (float)pdVar44[2] + fVar67;
                  *puVar34 = CONCAT44((float)dVar16 + (float)dVar9,(float)dVar10 + (float)dVar8);
                }
                else {
                  *puVar34 = uVar46;
                  *(float *)(puVar34 + 1) = fVar67;
                }
                if (*(ulong *)(lVar41 + 0xb0) <= uVar57) goto LAB_0010d4ba;
                fVar67 = (float)(uVar42 >> 0x20);
                pdVar44 = (double *)(*(long *)(lVar41 + 0xa8) + uVar57 * 0x18);
                fVar67 = (float)uVar42 * (float)uVar42 + fVar67 * fVar67 + fVar66 * fVar66;
                auVar69 = ZEXT816(0);
                fVar70 = 0.0;
                if (fVar67 != 0.0) {
                  fVar67 = SQRT(fVar67);
                  auVar72._8_8_ = 0;
                  auVar72._0_8_ = uVar42;
                  auVar69._4_4_ = fVar67;
                  auVar69._0_4_ = fVar67;
                  auVar69._8_8_ = _LC184;
                  auVar69 = divps(auVar72,auVar69);
                  fVar70 = fVar66 / fVar67;
                }
                auVar68._0_4_ = (float)*pdVar44 + auVar69._0_4_;
                auVar68._4_4_ = (float)pdVar44[1] + auVar69._4_4_;
                auVar68._8_4_ = auVar69._8_4_ + 0.0;
                auVar68._12_4_ = auVar69._12_4_ + 0.0;
                fVar70 = fVar70 + (float)pdVar44[2];
                fVar66 = auVar68._0_4_ * auVar68._0_4_ + auVar68._4_4_ * auVar68._4_4_ +
                         fVar70 * fVar70;
                uVar46 = 0;
                fVar67 = 0.0;
                if (fVar66 != 0.0) {
                  fVar66 = SQRT(fVar66);
                  fVar67 = fVar70 / fVar66;
                  auVar71._4_4_ = fVar66;
                  auVar71._0_4_ = fVar66;
                  auVar71._8_8_ = _LC184;
                  auVar69 = divps(auVar68,auVar71);
                  uVar46 = auVar69._0_8_;
                }
                *(undefined8 *)pfVar35 = uVar46;
                pfVar35[2] = fVar67;
              }
              pfVar58 = pfVar58 + 3;
              pfVar62 = pfVar62 + 3;
              pfVar35 = pfVar35 + 3;
              puVar34 = (undefined8 *)((long)puVar34 + 0xc);
            } while (pfVar58 != pfVar38);
          }
          ::Variant::Variant(local_230,(Vector *)&local_b8);
          pVVar33 = (Variant *)Array::operator[](iVar27);
          ::Variant::operator=(pVVar33,local_230);
          if (::Variant::needs_deinit[(int)local_58] != '\0') {
            ::Variant::_clear_internal();
          }
          ::Variant::Variant(local_230,(Vector *)&local_a8);
          pVVar33 = (Variant *)Array::operator[](iVar27);
          ::Variant::operator=(pVVar33,local_230);
          if (::Variant::needs_deinit[(int)local_58] != '\0') {
            ::Variant::_clear_internal();
          }
          local_108 = (Array *)0x0;
          Ref<SurfaceTool>::instantiate<>((Ref<SurfaceTool> *)&local_108);
          pAVar19 = local_108;
          SurfaceTool::create_from_triangle_arrays(local_108);
          SurfaceTool::set_skin_weight_count(pAVar19,bVar64);
          if (bVar24 != false) {
            SurfaceTool::generate_tangents();
          }
          iVar59 = 0;
          SurfaceTool::commit_to_arrays();
          Array::operator=(local_110,(Array *)&local_100);
          Array::~Array((Array *)&local_100);
          do {
            if ((1L << ((byte)iVar59 & 0x3f) & 7U) == 0) {
              local_58 = 0;
              local_50 = (undefined1  [16])0x0;
              pVVar33 = (Variant *)Array::operator[](iVar27);
              ::Variant::operator=(pVVar33,local_230);
              if (::Variant::needs_deinit[(int)local_58] != '\0') {
                ::Variant::_clear_internal();
              }
            }
            iVar59 = iVar59 + 1;
          } while (iVar59 != 0xd);
          ::Variant::Variant(local_230,local_110);
          Array::push_back((Variant *)local_118);
          if (::Variant::needs_deinit[(int)local_58] != '\0') {
            ::Variant::_clear_internal();
          }
          Ref<SurfaceTool>::unref((Ref<SurfaceTool> *)&local_108);
          CowData<Vector3>::_unref((CowData<Vector3> *)local_1f8);
          CowData<Vector3>::_unref((CowData<Vector3> *)local_1c8);
          CowData<Vector3>::_unref(local_190);
          CowData<Vector3>::_unref((CowData<Vector3> *)&local_b0);
          Array::~Array(local_110);
        }
      }
    }
    Array::operator[](iVar52);
    ::Variant::operator_cast_to_Vector((Variant *)&local_88);
    CowData<Vector3>::_copy_on_write((CowData<Vector3> *)local_1f8);
    if (local_80 == (float *)0x0) {
      iVar27 = 0;
    }
    else {
      iVar27 = (int)*(undefined8 *)(local_80 + -2);
    }
    pfVar38 = local_80;
    for (iVar59 = 0; iVar59 < iVar27; iVar59 = iVar59 + 1) {
      pdVar44 = (double *)
                ((ulong)((int)(long)pfVar38[1] << 0x10 | (uint)(long)*pfVar38) * 0x18 +
                puVar14[0x2d]);
      dVar8 = *pdVar44;
      dVar9 = pdVar44[1];
      pfVar38[2] = (float)pdVar44[2];
      *(ulong *)pfVar38 = CONCAT44((float)dVar9,(float)dVar8);
      pfVar38 = pfVar38 + 3;
    }
    ::Variant::Variant(local_230,(Vector *)&local_88);
    pVVar33 = (Variant *)Array::operator[](iVar52);
    ::Variant::operator=(pVVar33,local_230);
    if (::Variant::needs_deinit[(int)local_58] != '\0') {
      ::Variant::_clear_internal();
    }
    CowData<Vector3>::_unref((CowData<Vector3> *)local_1f8);
  }
  local_100 = (Object *)0x0;
  local_b8 = (String *)0x0;
  if (*(char *)(*param_2 + 0x292) != '\0') goto LAB_0010cbc3;
  if (((ulong)*local_268 < (ulong)puVar14[0x75]) &&
     (lVar41 = *(long *)(puVar14[0x74] + (ulong)*local_268 * 8), lVar41 != 0)) {
    uVar28 = *(uint *)(lVar41 + 0x34);
    lVar41 = *(long *)(*param_2 + 0x338);
    if ((int)uVar28 < 0) {
      if (lVar41 == 0) {
        lVar41 = 0;
      }
      else {
LAB_0010ceb0:
        lVar41 = *(long *)(lVar41 + -8);
      }
    }
    else {
      if (lVar41 != 0) {
        if (*(long *)(lVar41 + -8) <= (long)(ulong)uVar28) goto LAB_0010ceb0;
        local_88 = (Resource *)0x0;
        Ref<Material>::operator=((Ref<Material> *)&local_88,*(Ref **)(lVar41 + (ulong)uVar28 * 8));
        pRVar32 = local_88;
        if (local_88 == (Resource *)0x0) {
          _err_print_error("_parse_meshes","modules/fbx/fbx_document.cpp",0x36c,
                           "Condition \"mat3d.is_null()\" is true. Returning: ERR_FILE_CORRUPT",0,0)
          ;
          Ref<Material>::unref((Ref<Material> *)&local_88);
          goto LAB_0010ce00;
        }
        pOVar39 = (Object *)__dynamic_cast(local_88,&Object::typeinfo,&BaseMaterial3D::typeinfo,0);
        if (pOVar39 == (Object *)0x0) {
          if (cVar22 == '\0') goto LAB_0010cd93;
LAB_0010cd55:
          Ref<Material>::operator=((Ref<Material> *)&local_100,pRVar32);
        }
        else {
          cVar23 = RefCounted::reference();
          if (cVar23 == '\0') {
            pOVar39 = (Object *)0x0;
          }
          if (cVar22 == '\0') {
LAB_0010cd93:
            Ref<Material>::operator=((Ref<Material> *)&local_100,pRVar32);
            if (pOVar39 == (Object *)0x0) goto LAB_0010cb3a;
          }
          else {
            if (pOVar39 == (Object *)0x0) goto LAB_0010cd55;
            BaseMaterial3D::set_flag(pOVar39,1,1);
            Ref<Material>::operator=((Ref<Material> *)&local_100,pRVar32);
          }
          cVar22 = RefCounted::unreference();
          if ((cVar22 != '\0') && (cVar22 = predelete_handler(pOVar39), cVar22 != '\0')) {
            (**(code **)(*(long *)pOVar39 + 0x140))(pOVar39);
            Memory::free_static(pOVar39,false);
          }
        }
LAB_0010cb3a:
        Ref<Material>::unref((Ref<Material> *)&local_88);
        goto LAB_0010cb4c;
      }
      lVar41 = 0;
    }
    _err_print_index_error
              ("_parse_meshes","modules/fbx/fbx_document.cpp",0x36a,(long)(int)uVar28,lVar41,
               "material","p_state->materials.size()","",false,false);
  }
  else {
    local_88 = (Resource *)0x0;
    Ref<StandardMaterial3D>::instantiate<>((Ref<StandardMaterial3D> *)&local_88);
    if (cVar22 != '\0') {
      BaseMaterial3D::set_flag(local_88,1,1);
    }
    pRVar32 = local_88;
    pOVar39 = local_100;
    if (local_88 == (Resource *)0x0) {
      if (local_100 != (Object *)0x0) {
        local_100 = (Object *)0x0;
LAB_0010cff8:
        cVar22 = RefCounted::unreference();
        if ((cVar22 != '\0') && (cVar22 = predelete_handler(pOVar39), cVar22 != '\0')) {
          (**(code **)(*(long *)pOVar39 + 0x140))(pOVar39);
          Memory::free_static(pOVar39,false);
        }
        if (pRVar32 == (Resource *)0x0) goto LAB_0010cb4c;
        goto LAB_0010cfc3;
      }
    }
    else {
      pOVar40 = (Object *)__dynamic_cast(local_88,&Object::typeinfo,&Material::typeinfo,0);
      if (pOVar40 != pOVar39) {
        local_100 = pOVar40;
        if ((pOVar40 != (Object *)0x0) && (cVar22 = RefCounted::reference(), cVar22 == '\0')) {
          local_100 = (Object *)0x0;
        }
        if (pOVar39 != (Object *)0x0) goto LAB_0010cff8;
      }
LAB_0010cfc3:
      cVar22 = RefCounted::unreference();
      if ((cVar22 != '\0') && (cVar22 = predelete_handler((Object *)pRVar32), cVar22 != '\0')) {
        (**(code **)(*(long *)pRVar32 + 0x140))(pRVar32);
        Memory::free_static(pRVar32,false);
      }
LAB_0010cb4c:
      if (local_100 != (Object *)0x0) {
        Resource::get_name();
        pSVar21 = local_b8;
        if (local_b8 != (String *)local_88) {
          if (local_b8 != (String *)0x0) {
            LOCK();
            local_b8 = local_b8 + -0x10;
            *(long *)local_b8 = *(long *)local_b8 + -1;
            UNLOCK();
            if (*(long *)local_b8 == 0) {
              local_b8 = (String *)0x0;
              Memory::free_static((Resource *)(pSVar21 + -0x10),false);
            }
          }
          local_b8 = (String *)local_88;
          local_88 = (Resource *)0x0;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
LAB_0010cbc3:
        Dictionary::Dictionary((Dictionary *)&local_a8);
        Array::Array((Array *)&local_98);
        local_58 = 0;
        local_50 = (undefined1  [16])0x0;
        local_88 = (Resource *)0x0;
        Array::set_typed((uint)(Ref<GLTFMesh> *)&local_98,(StringName *)0x1c,(Variant *)&local_88);
        if ((StringName::configured != '\0') && (local_88 != (Resource *)0x0)) {
          StringName::unref();
        }
        if (::Variant::needs_deinit[(int)local_58] != '\0') {
          ::Variant::_clear_internal();
        }
        cVar22 = Array::is_same_typed((Array *)&local_98);
        if (cVar22 == '\0') {
          Array::assign((Array *)&local_98);
        }
        else {
          Array::_ref((Array *)&local_98);
        }
        ImporterMesh::add_surface
                  (pRVar53,iVar26,local_210,(Ref<GLTFMesh> *)&local_98,(Dictionary *)&local_a8,
                   (Ref<Material> *)&local_100,(CowData<char32_t> *)&local_b8,uVar25);
        Array::~Array((Array *)&local_98);
        Dictionary::~Dictionary((Dictionary *)&local_a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        Ref<Material>::unref((Ref<Material> *)&local_100);
        Array::~Array(local_118);
        Ref<SurfaceTool>::unref(local_1b8);
        CowData<Vector3>::_unref((CowData<Vector3> *)&local_c0);
        Array::~Array(local_210);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_d0);
LAB_0010a166:
        local_278 = local_278 + 1;
        if (local_278 == (int *)0x12d33c) goto code_r0x0010a17b;
        goto LAB_0010a138;
      }
    }
    _err_print_error("_parse_meshes","modules/fbx/fbx_document.cpp",0x37c,
                     "Condition \"mat.is_null()\" is true. Returning: ERR_FILE_CORRUPT",0,0);
  }
LAB_0010ce00:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  uVar46 = 0x10;
  Ref<Material>::unref((Ref<Material> *)&local_100);
LAB_0010ce22:
  Array::~Array(local_118);
  Ref<SurfaceTool>::unref(local_1b8);
  CowData<Vector3>::_unref((CowData<Vector3> *)&local_c0);
  Array::~Array(local_210);
  CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_d0);
  CowData<int>::_unref((CowData<int> *)local_e0);
  CowData<float>::_unref((CowData<float> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  Ref<ImporterMesh>::unref((Ref<ImporterMesh> *)&local_140);
  goto LAB_0010a511;
code_r0x0010a17b:
  local_268 = local_268 + 0x10;
  if (puVar3 == local_268) goto LAB_0010a18d;
  goto LAB_0010a12d;
}



/* CowData<Ref<Texture2D> >::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Ref<Texture2D>>::_copy_on_write(CowData<Ref<Texture2D>> *this)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  char cVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar7 = 0x10;
  if (lVar1 * 8 != 0) {
    uVar7 = lVar1 * 8 - 1;
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar5 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  lVar8 = 0;
  *puVar5 = 1;
  puVar5[1] = lVar1;
  plVar6 = puVar5 + 2;
  if (lVar1 != 0) {
    do {
      lVar2 = *(long *)this;
      *plVar6 = 0;
      lVar2 = *(long *)(lVar2 + lVar8 * 8);
      if (lVar2 != 0) {
        *plVar6 = lVar2;
        cVar4 = RefCounted::reference();
        if (cVar4 == '\0') {
          *plVar6 = 0;
        }
      }
      lVar8 = lVar8 + 1;
      plVar6 = plVar6 + 1;
    } while (lVar1 != lVar8);
  }
  _unref(this);
  *(undefined8 **)this = puVar5 + 2;
  return;
}



/* Vector<Ref<Texture2D> >::push_back(Ref<Texture2D>) [clone .isra.0] */

void __thiscall Vector<Ref<Texture2D>>::push_back(Vector<Ref<Texture2D>> *this,long *param_2)

{
  long *plVar1;
  Object *pOVar2;
  Object *pOVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)(this + 8) == 0) {
    lVar6 = 1;
  }
  else {
    lVar6 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar5 = CowData<Ref<Texture2D>>::resize<false>((CowData<Ref<Texture2D>> *)(this + 8),lVar6);
  if (iVar5 != 0) {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
    return;
  }
  if (*(long *)(this + 8) == 0) {
    lVar7 = -1;
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(*(long *)(this + 8) + -8);
    lVar7 = lVar6 + -1;
    if (-1 < lVar7) {
      CowData<Ref<Texture2D>>::_copy_on_write((CowData<Ref<Texture2D>> *)(this + 8));
      pOVar2 = (Object *)*param_2;
      plVar1 = (long *)(*(long *)(this + 8) + lVar7 * 8);
      pOVar3 = (Object *)*plVar1;
      if (pOVar2 == pOVar3) {
        return;
      }
      *plVar1 = (long)pOVar2;
      if ((pOVar2 != (Object *)0x0) && (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
        *plVar1 = 0;
      }
      if (pOVar3 == (Object *)0x0) {
        return;
      }
      cVar4 = RefCounted::unreference();
      if (cVar4 == '\0') {
        return;
      }
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 == '\0') {
        return;
      }
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
      return;
    }
  }
  _err_print_index_error
            ("set","./core/templates/cowdata.h",0xcf,lVar7,lVar6,"p_index","size()","",false,false);
  return;
}



/* CowData<Ref<Image> >::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Ref<Image>>::_copy_on_write(CowData<Ref<Image>> *this)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  char cVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar7 = 0x10;
  if (lVar1 * 8 != 0) {
    uVar7 = lVar1 * 8 - 1;
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar5 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  lVar8 = 0;
  *puVar5 = 1;
  puVar5[1] = lVar1;
  plVar6 = puVar5 + 2;
  if (lVar1 != 0) {
    do {
      lVar2 = *(long *)this;
      *plVar6 = 0;
      lVar2 = *(long *)(lVar2 + lVar8 * 8);
      if (lVar2 != 0) {
        *plVar6 = lVar2;
        cVar4 = RefCounted::reference();
        if (cVar4 == '\0') {
          *plVar6 = 0;
        }
      }
      lVar8 = lVar8 + 1;
      plVar6 = plVar6 + 1;
    } while (lVar1 != lVar8);
  }
  _unref(this);
  *(undefined8 **)this = puVar5 + 2;
  return;
}



/* FBXDocument::_get_texture(Ref<FBXState>, int, int) */

long * FBXDocument::_get_texture
                 (long *param_1,undefined8 param_2,long *param_3,int param_4,int param_5)

{
  Object *pOVar1;
  code *pcVar2;
  Object *pOVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  Image *pIVar7;
  long *plVar8;
  Object *pOVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  char *pcVar13;
  Image *pIVar14;
  undefined8 *puVar15;
  long in_FS_OFFSET;
  char *pcVar16;
  Object *local_58;
  Image *local_50;
  Object *local_48;
  long local_40;
  
  lVar10 = (long)param_4;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar12 = *(long *)(*param_3 + 0x360);
  if (param_4 < 0) {
    if (lVar12 == 0) goto LAB_0010e288;
    lVar12 = *(long *)(lVar12 + -8);
LAB_0010e1ed:
    pcVar13 = "p_texture";
    iVar5 = 0x45a;
    pcVar16 = "p_state->textures.size()";
  }
  else {
    if (lVar12 == 0) {
LAB_0010e288:
      lVar12 = 0;
      goto LAB_0010e1ed;
    }
    lVar12 = *(long *)(lVar12 + -8);
    if (lVar12 <= lVar10) goto LAB_0010e1ed;
    iVar5 = GLTFTexture::get_src_image();
    if (iVar5 < 0) {
      if (*(long *)(*param_3 + 0x388) == 0) goto LAB_0010e290;
      lVar12 = *(long *)(*(long *)(*param_3 + 0x388) + -8);
LAB_0010e24e:
      lVar10 = (long)iVar5;
      iVar5 = 0x45c;
      pcVar13 = "image";
      pcVar16 = "p_state->images.size()";
    }
    else {
      lVar11 = *param_3;
      lVar10 = (long)iVar5;
      lVar6 = *(long *)(lVar11 + 0x388);
      if (lVar6 == 0) {
LAB_0010e290:
        lVar12 = 0;
        goto LAB_0010e24e;
      }
      lVar12 = *(long *)(lVar6 + -8);
      if (lVar12 <= lVar10) goto LAB_0010e24e;
      if (*(int *)(lVar11 + 0x298) != 2) {
LAB_0010ded6:
        *param_1 = 0;
        lVar12 = *(long *)(lVar6 + lVar10 * 8);
        if (lVar12 != 0) {
          *param_1 = lVar12;
          cVar4 = RefCounted::reference();
          if (cVar4 == '\0') {
            *param_1 = 0;
          }
        }
        goto LAB_0010df00;
      }
      if (*(long *)(lVar11 + 0x3b8) == 0) {
        lVar12 = 0;
      }
      else {
        lVar12 = *(long *)(*(long *)(lVar11 + 0x3b8) + -8);
        if (lVar10 < lVar12) {
          local_58 = (Object *)0x0;
          Ref<PortableCompressedTexture2D>::instantiate<>
                    ((Ref<PortableCompressedTexture2D> *)&local_58);
          pOVar3 = local_58;
          PortableCompressedTexture2D::set_keep_compressed_buffer(SUB81(local_58,0));
          lVar12 = *(long *)(*param_3 + 0x3b8);
          if (lVar12 == 0) {
LAB_0010e1d8:
            lVar11 = 0;
LAB_0010e191:
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar11,"p_index","size()","",
                       false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          lVar11 = *(long *)(lVar12 + -8);
          if (lVar11 <= lVar10) goto LAB_0010e191;
          plVar8 = *(long **)(lVar12 + lVar10 * 8);
          (**(code **)(*plVar8 + 0x198))((Ref<Texture2D> *)&local_48,plVar8,0);
          local_50 = (Image *)0x0;
          if (local_48 != (Object *)0x0) {
            pIVar7 = (Image *)__dynamic_cast(local_48,&Object::typeinfo,&Image::typeinfo,0);
            if (pIVar7 != (Image *)0x0) {
              local_50 = pIVar7;
              cVar4 = RefCounted::reference();
              if (cVar4 == '\0') {
                local_50 = (Image *)0x0;
              }
              if (local_48 == (Object *)0x0) goto LAB_0010e022;
            }
            cVar4 = RefCounted::unreference();
            pOVar1 = local_48;
            if ((cVar4 != '\0') && (cVar4 = predelete_handler(local_48), cVar4 != '\0')) {
              (**(code **)(*(long *)pOVar1 + 0x140))();
              Memory::free_static(pOVar1,false);
            }
          }
LAB_0010e022:
          if (local_50 == (Image *)0x0) {
            _err_print_error("_get_texture","modules/fbx/fbx_document.cpp",0x463,
                             "Condition \"new_img.is_null()\" is true. Returning: Ref<Texture2D>()",
                             0,0);
            *param_1 = 0;
            Ref<Image>::unref((Ref<Image> *)&local_50);
            cVar4 = RefCounted::unreference();
            if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar3), cVar4 != '\0')) {
              (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
              Memory::free_static(pOVar3,false);
            }
            goto LAB_0010df00;
          }
          Image::generate_mipmaps(SUB81(local_50,0));
          if (param_5 == 0) {
            PortableCompressedTexture2D::create_from_image(_LC198,pOVar3,&local_50,2,0);
          }
          else {
            PortableCompressedTexture2D::create_from_image(_LC198,pOVar3,&local_50,2,1);
          }
          lVar12 = *param_3;
          if (*(long *)(lVar12 + 0x388) != 0) {
            lVar11 = *(long *)(*(long *)(lVar12 + 0x388) + -8);
            if (lVar11 <= lVar10) goto LAB_0010e37b;
            CowData<Ref<Texture2D>>::_copy_on_write((CowData<Ref<Texture2D>> *)(lVar12 + 0x388));
            plVar8 = (long *)(*(long *)(lVar12 + 0x388) + lVar10 * 8);
            pOVar9 = (Object *)__dynamic_cast(pOVar3,&Object::typeinfo,&Texture2D::typeinfo,0);
            pOVar1 = (Object *)*plVar8;
            if (pOVar1 != pOVar9) {
              *plVar8 = (long)pOVar9;
              local_48 = pOVar1;
              if ((pOVar9 != (Object *)0x0) && (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
                *plVar8 = 0;
              }
              Ref<Texture2D>::unref((Ref<Texture2D> *)&local_48);
            }
            lVar12 = *param_3;
            if (*(long *)(lVar12 + 0x3b8) != 0) {
              lVar11 = *(long *)(*(long *)(lVar12 + 0x3b8) + -8);
              if (lVar11 <= lVar10) goto LAB_0010e37b;
              CowData<Ref<Image>>::_copy_on_write((CowData<Ref<Image>> *)(lVar12 + 0x3b8));
              puVar15 = (undefined8 *)(lVar10 * 8 + *(long *)(lVar12 + 0x3b8));
              pIVar7 = (Image *)*puVar15;
              pIVar14 = pIVar7;
              if (local_50 != pIVar7) {
                *puVar15 = local_50;
                if ((local_50 != (Image *)0x0) && (cVar4 = RefCounted::reference(), cVar4 == '\0'))
                {
                  *puVar15 = 0;
                }
                pIVar14 = local_50;
                if ((pIVar7 != (Image *)0x0) &&
                   (cVar4 = RefCounted::unreference(), pIVar14 = local_50, cVar4 != '\0')) {
                  memdelete<Image>(pIVar7);
                  pIVar14 = local_50;
                }
              }
              if ((pIVar14 != (Image *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) {
                memdelete<Image>(local_50);
              }
              cVar4 = RefCounted::unreference();
              if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar3), cVar4 != '\0')) {
                (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
                Memory::free_static(pOVar3,false);
              }
              lVar6 = *(long *)(*param_3 + 0x388);
              if (lVar6 != 0) {
                lVar11 = *(long *)(lVar6 + -8);
                if (lVar11 <= lVar10) goto LAB_0010e191;
                goto LAB_0010ded6;
              }
              goto LAB_0010e1d8;
            }
          }
          lVar11 = 0;
LAB_0010e37b:
          _err_print_index_error
                    ("operator[]","./core/templates/vector.h",0x38,lVar10,lVar11,"p_index",
                     "((Vector<T> *)(this))->_cowdata.size()","",false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
      }
      pcVar13 = "image";
      iVar5 = 0x45e;
      pcVar16 = "p_state->source_images.size()";
    }
  }
  _err_print_index_error
            ("_get_texture","modules/fbx/fbx_document.cpp",iVar5,lVar10,lVar12,pcVar13,pcVar16,"",
             false,false);
  *param_1 = 0;
LAB_0010df00:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* Vector<Ref<Image> >::push_back(Ref<Image>) [clone .isra.0] */

void __thiscall Vector<Ref<Image>>::push_back(Vector<Ref<Image>> *this,long *param_2)

{
  long *plVar1;
  Image *pIVar2;
  Image *pIVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)(this + 8) == 0) {
    lVar6 = 1;
  }
  else {
    lVar6 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar5 = CowData<Ref<Image>>::resize<false>((CowData<Ref<Image>> *)(this + 8),lVar6);
  if (iVar5 != 0) {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
    return;
  }
  if (*(long *)(this + 8) == 0) {
    lVar7 = -1;
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(*(long *)(this + 8) + -8);
    lVar7 = lVar6 + -1;
    if (-1 < lVar7) {
      CowData<Ref<Image>>::_copy_on_write((CowData<Ref<Image>> *)(this + 8));
      pIVar2 = (Image *)*param_2;
      plVar1 = (long *)(*(long *)(this + 8) + lVar7 * 8);
      pIVar3 = (Image *)*plVar1;
      if (pIVar2 == pIVar3) {
        return;
      }
      *plVar1 = (long)pIVar2;
      if ((pIVar2 != (Image *)0x0) && (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
        *plVar1 = 0;
      }
      if (pIVar3 == (Image *)0x0) {
        return;
      }
      cVar4 = RefCounted::unreference();
      if (cVar4 == '\0') {
        return;
      }
      memdelete<Image>(pIVar3);
      return;
    }
  }
  _err_print_index_error
            ("set","./core/templates/cowdata.h",0xcf,lVar7,lVar6,"p_index","size()","",false,false);
  return;
}



/* FBXDocument::_parse_image_save_image(Ref<FBXState>, Vector<unsigned char> const&, String const&,
   int, Ref<Image>) */

int __thiscall
FBXDocument::_parse_image_save_image
          (FBXDocument *this,long *param_2,undefined8 param_3,CowData *param_4,int param_5,
          undefined8 *param_6)

{
  Object *pOVar1;
  char cVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  Variant *pVVar6;
  long *plVar7;
  int iVar8;
  String *pSVar9;
  long in_FS_OFFSET;
  Variant *local_168;
  Dictionary local_110 [8];
  String local_108 [8];
  CowData<char32_t> local_100 [8];
  long *local_f8;
  String *local_f0;
  ulong local_e8;
  String *local_e0;
  long local_d8;
  uchar *local_d0;
  Object *local_c8;
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90 [16];
  int local_78 [8];
  uchar local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar8 = *(int *)(*param_2 + 0x298);
  cVar2 = Image::is_empty();
  if ((iVar8 == 0) || (cVar2 != '\0')) {
    if (-1 < param_5) {
      local_c8 = (Object *)0x0;
      Vector<Ref<Texture2D>>::push_back((Vector<Ref<Texture2D>> *)(*param_2 + 0x380),&local_c8);
      local_c8 = (Object *)0x0;
      Vector<Ref<Image>>::push_back((Vector<Ref<Image>> *)(*param_2 + 0x3b0),&local_c8);
      lVar4 = *(long *)(*param_2 + 0x388);
      goto joined_r0x0010e87b;
    }
  }
  else {
    lVar4 = Engine::get_singleton();
    if ((*(char *)(lVar4 + 0xc0) == '\0') || (iVar8 != 1)) {
      if (iVar8 == 2) {
        local_e0 = (String *)0x0;
        Ref<PortableCompressedTexture2D>::instantiate<>
                  ((Ref<PortableCompressedTexture2D> *)&local_e0);
        pSVar9 = local_e0;
        Resource::get_name();
        Resource::set_name(pSVar9);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
        PortableCompressedTexture2D::set_keep_compressed_buffer(SUB81(pSVar9,0));
        PortableCompressedTexture2D::create_from_image(pSVar9,param_6,2,0);
      }
      else {
        local_e0 = (String *)0x0;
        Ref<ImageTexture>::instantiate<>((Ref<ImageTexture> *)&local_e0);
        pSVar9 = local_e0;
        Resource::get_name();
        Resource::set_name(pSVar9);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
        ImageTexture::set_image(pSVar9);
      }
      lVar4 = *param_2;
      local_d8 = 0;
      lVar5 = __dynamic_cast(pSVar9,&Object::typeinfo,&Texture2D::typeinfo,0);
      if (lVar5 != 0) {
        local_c8 = (Object *)0x0;
        local_d8 = lVar5;
        cVar2 = RefCounted::reference();
        if (cVar2 == '\0') {
          local_d8 = 0;
        }
        Ref<Texture2D>::unref((Ref<Texture2D> *)&local_c8);
      }
      Vector<Ref<Texture2D>>::push_back
                ((Vector<Ref<Texture2D>> *)(lVar4 + 0x380),(Ref<Texture2D> *)&local_d8);
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_d8);
      lVar4 = *param_2;
      local_c8 = (Object *)0x0;
      Ref<Image>::operator=((Ref<Image> *)&local_c8,(Ref *)*param_6);
      Vector<Ref<Image>>::push_back((Vector<Ref<Image>> *)(lVar4 + 0x3b0));
      Ref<Image>::unref((Ref<Image> *)&local_c8);
      if (*(long *)(*param_2 + 0x388) == 0) {
        iVar8 = -1;
      }
      else {
        iVar8 = (int)*(undefined8 *)(*(long *)(*param_2 + 0x388) + -8) + -1;
      }
      cVar2 = RefCounted::unreference();
      if ((cVar2 != '\0') && (cVar2 = predelete_handler((Object *)pSVar9), cVar2 != '\0')) {
        (**(code **)(*(long *)pSVar9 + 0x140))(pSVar9);
        Memory::free_static(pSVar9,false);
      }
      goto LAB_0010e65e;
    }
    lVar4 = *(long *)(*param_2 + 0x240);
    if ((lVar4 == 0) || (*(uint *)(lVar4 + -8) < 2)) {
      if (param_5 < 0) goto LAB_0010e888;
      local_c8 = (Object *)0x0;
      Vector<Ref<Texture2D>>::push_back((Vector<Ref<Texture2D>> *)(*param_2 + 0x380),&local_c8);
      local_c8 = (Object *)0x0;
      Vector<Ref<Image>>::push_back((Vector<Ref<Image>> *)(*param_2 + 0x3b0),&local_c8);
    }
    else {
      Resource::get_name();
      if ((local_c8 == (Object *)0x0) || (lVar4 = *(long *)(local_c8 + -8), (int)lVar4 == 0)) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      }
      else {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
        if ((int)lVar4 != 1) {
          Image::get_data();
          Dictionary::Dictionary(local_110);
          GLTFState::get_base_path();
          Resource::get_name();
          local_f0 = (String *)0x0;
          String::parse_latin1((String *)&local_f0,"_");
          String::get_basename();
          String::operator+((String *)&local_e8,(String *)&local_f8);
          String::operator+((String *)&local_c8,(String *)&local_e8);
          String::path_join(local_108);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
          CowData<char32_t>::_unref(local_100);
          if ((*(long *)param_4 == 0) || (*(uint *)(*(long *)param_4 + -8) < 2)) {
            local_c8 = (Object *)0x0;
            String::parse_latin1((String *)&local_c8,".png");
          }
          else {
            local_c8 = (Object *)0x0;
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,param_4);
          }
          String::operator+=(local_108,(String *)&local_c8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
          local_e0 = (String *)0x0;
          String::parse_latin1((String *)&local_e0,".import");
          String::operator+((String *)&local_c8,local_108);
          cVar2 = FileAccess::exists((String *)&local_c8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
          if (cVar2 == '\0') {
LAB_0010eb42:
            local_168 = (Variant *)local_78;
            ::Variant::Variant(local_168,"md5");
            Dictionary::operator[]((Variant *)local_110);
            ::Variant::operator_cast_to_String((Variant *)&local_e0);
            if (::Variant::needs_deinit[local_78[0]] != '\0') {
              ::Variant::_clear_internal();
            }
            if (local_d0 == (uchar *)0x0) {
              iVar8 = 0;
            }
            else {
              iVar8 = (int)*(undefined8 *)(local_d0 + -8);
            }
            CryptoCore::md5(local_d0,iVar8,local_58);
            String::hex_encode_buffer((uchar *)&local_c8,(int)local_58);
            ::Variant::Variant(local_168,(String *)&local_c8);
            ::Variant::Variant((Variant *)&local_98,"md5");
            pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_110);
            ::Variant::operator=(pVVar6,local_168);
            if (::Variant::needs_deinit[(int)local_98] != '\0') {
              ::Variant::_clear_internal();
            }
            if (::Variant::needs_deinit[local_78[0]] != '\0') {
              ::Variant::_clear_internal();
            }
            cVar2 = String::operator==((String *)&local_c8,(String *)&local_e0);
            if (cVar2 != '\0') {
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
              goto LAB_0010ec5a;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
            local_e8 = local_e8 & 0xffffffff00000000;
            if ((*(long *)param_4 == 0) || (*(uint *)(*(long *)param_4 + -8) < 2)) {
              iVar8 = Image::save_png((String *)*param_6);
              local_e8 = CONCAT44(local_e8._4_4_,iVar8);
              if (iVar8 == 0) goto LAB_0010f0fe;
              _err_print_error("_parse_image_save_image","modules/fbx/fbx_document.cpp",0x3ec,
                               "Condition \"err != OK\" is true. Returning: -1",0,0);
            }
            else {
              FileAccess::open((String *)&local_c8,(int)local_108,(Error *)0x2);
              if ((int)local_e8 == 0) {
                FileAccess::store_buffer((Vector *)local_c8);
                (**(code **)(*(long *)local_c8 + 0x2d8))();
                Ref<FileAccess>::unref((Ref<FileAccess> *)&local_c8);
LAB_0010f0fe:
                local_a0 = 2;
                local_c0 = (undefined1  [16])0x0;
                local_b0 = (undefined1  [16])0x0;
                ::Variant::Variant(local_168,true);
                if ((_parse_image_save_image(Ref<FBXState>,Vector<unsigned_char>const&,String_const&,int,Ref<Image>)
                     ::{lambda()#1}::operator()()::sname == '\0') &&
                   (iVar8 = __cxa_guard_acquire(&_parse_image_save_image(Ref<FBXState>,Vector<unsigned_char>const&,String_const&,int,Ref<Image>)
                                                 ::{lambda()#1}::operator()()::sname), iVar8 != 0))
                {
                  _scs_create((char *)&_parse_image_save_image(Ref<FBXState>,Vector<unsigned_char>const&,String_const&,int,Ref<Image>)
                                       ::{lambda()#1}::operator()()::sname,true);
                  __cxa_atexit(StringName::~StringName,
                               &_parse_image_save_image(Ref<FBXState>,Vector<unsigned_char>const&,String_const&,int,Ref<Image>)
                                ::{lambda()#1}::operator()()::sname,&__dso_handle);
                  __cxa_guard_release(&_parse_image_save_image(Ref<FBXState>,Vector<unsigned_char>const&,String_const&,int,Ref<Image>)
                                       ::{lambda()#1}::operator()()::sname);
                }
                pVVar6 = (Variant *)
                         HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                         ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                                       *)&local_c8,
                                      (StringName *)
                                      &_parse_image_save_image(Ref<FBXState>,Vector<unsigned_char>const&,String_const&,int,Ref<Image>)
                                       ::{lambda()#1}::operator()()::sname);
                ::Variant::operator=(pVVar6,local_168);
                if (::Variant::needs_deinit[local_78[0]] != '\0') {
                  ::Variant::_clear_internal();
                }
                EditorFileSystem::update_file(EditorFileSystem::singleton);
                pSVar9 = EditorFileSystem::singleton;
                ::Variant::Variant(local_168,local_110);
                local_e0 = (String *)0x0;
                EditorFileSystem::reimport_append
                          (pSVar9,local_108,(CowData<char32_t> *)&local_c8,
                           (CowData<char32_t> *)&local_e0,local_168);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
                if (::Variant::needs_deinit[local_78[0]] != '\0') {
                  ::Variant::_clear_internal();
                }
                HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                ::~HashMap((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                            *)&local_c8);
                goto LAB_0010ec5a;
              }
              _err_print_error("_parse_image_save_image","modules/fbx/fbx_document.cpp",0x3f0,
                               "Condition \"err != OK\" is true. Returning: -1",0,0);
              Ref<FileAccess>::unref((Ref<FileAccess> *)&local_c8);
            }
LAB_0010f450:
            CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
            Dictionary::~Dictionary(local_110);
            CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_d0);
            goto LAB_0010e888;
          }
          local_f0 = (String *)0x0;
          Ref<ConfigFile>::instantiate<>((Ref<ConfigFile> *)&local_f0);
          pSVar9 = local_f0;
          local_e0 = (String *)0x0;
          String::parse_latin1((String *)&local_e0,".import");
          String::operator+((String *)&local_c8,local_108);
          ConfigFile::load(pSVar9);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
          local_c8 = (Object *)0x0;
          String::parse_latin1((String *)&local_c8,"generator_parameters");
          local_e0 = (String *)0x0;
          String::parse_latin1((String *)&local_e0,"remap");
          cVar2 = ConfigFile::has_section_key(pSVar9,(String *)&local_e0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
          if (cVar2 != '\0') {
            local_98 = 0;
            local_e0 = (String *)0x0;
            local_90 = (undefined1  [16])0x0;
            String::parse_latin1((String *)&local_e0,"generator_parameters");
            local_e8 = 0;
            String::parse_latin1((String *)&local_e8,"remap");
            ConfigFile::get_value((String *)local_78,pSVar9,(Variant *)&local_e8);
            ::Variant::operator_cast_to_Dictionary((Variant *)&local_c8);
            Dictionary::operator=(local_110,(Dictionary *)&local_c8);
            Dictionary::~Dictionary((Dictionary *)&local_c8);
            if (::Variant::needs_deinit[local_78[0]] != '\0') {
              ::Variant::_clear_internal();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
            if (::Variant::needs_deinit[(int)local_98] != '\0') {
              ::Variant::_clear_internal();
            }
          }
          local_168 = (Variant *)local_78;
          ::Variant::Variant(local_168,"md5");
          cVar2 = Dictionary::has((Variant *)local_110);
          if (::Variant::needs_deinit[local_78[0]] != '\0') {
            ::Variant::_clear_internal();
          }
          cVar3 = RefCounted::unreference();
          if ((cVar3 != '\0') && (cVar3 = predelete_handler((Object *)pSVar9), cVar3 != '\0')) {
            (**(code **)(*(long *)pSVar9 + 0x140))(pSVar9);
            Memory::free_static(pSVar9,false);
          }
          if (cVar2 != '\0') goto LAB_0010eb42;
LAB_0010ec5a:
          local_e0 = (String *)0x0;
          String::parse_latin1((String *)&local_e0,"Texture2D");
          GLTFState::get_base_path();
          _get_texture_path((String *)&local_e8,(String *)this);
          ResourceLoader::load
                    ((CowData<char32_t> *)&local_c8,(String *)&local_e8,
                     (CowData<char32_t> *)&local_e0,1,0);
          local_f8 = (long *)0x0;
          if (local_c8 != (Object *)0x0) {
            plVar7 = (long *)__dynamic_cast(local_c8,&Object::typeinfo,&Texture2D::typeinfo,0);
            if (plVar7 != (long *)0x0) {
              local_f8 = plVar7;
              cVar2 = RefCounted::reference();
              if (cVar2 == '\0') {
                local_f8 = (long *)0x0;
              }
              if (local_c8 == (Object *)0x0) goto LAB_0010ed28;
            }
            cVar2 = RefCounted::unreference();
            pOVar1 = local_c8;
            if ((cVar2 != '\0') && (cVar2 = predelete_handler(local_c8), cVar2 != '\0')) {
              (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
              Memory::free_static(pOVar1,false);
            }
          }
LAB_0010ed28:
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
          plVar7 = local_f8;
          if (local_f8 == (long *)0x0) {
            if (param_5 < 0) {
              Ref<Texture2D>::unref((Ref<Texture2D> *)&local_f8);
              goto LAB_0010f450;
            }
            Resource::get_name();
            local_e0 = (String *)0x0;
            String::parse_latin1
                      ((String *)&local_e0,
                       "FBX: Image index \'%d\' couldn\'t be loaded with the name: %s. Skipping it."
                      );
            vformat<int,String>((CowData<char32_t> *)&local_c8,(CowData<char32_t> *)&local_e0,
                                param_5,(String *)&local_e8);
            _err_print_error("_parse_image_save_image","modules/fbx/fbx_document.cpp",0x402,
                             (CowData<char32_t> *)&local_c8,0,1);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
            local_c8 = (Object *)0x0;
            Vector<Ref<Texture2D>>::push_back
                      ((Vector<Ref<Texture2D>> *)(*param_2 + 0x380),(CowData<char32_t> *)&local_c8);
            local_c8 = (Object *)0x0;
            Vector<Ref<Image>>::push_back
                      ((Vector<Ref<Image>> *)(*param_2 + 0x3b0),(CowData<char32_t> *)&local_c8);
          }
          else {
            lVar4 = *param_2;
            local_c8 = (Object *)0x0;
            Ref<Texture2D>::operator=((Ref<Texture2D> *)&local_c8,(Ref *)local_f8);
            Vector<Ref<Texture2D>>::push_back
                      ((Vector<Ref<Texture2D>> *)(lVar4 + 0x380),(CowData<char32_t> *)&local_c8);
            Ref<Texture2D>::unref((Ref<Texture2D> *)&local_c8);
            lVar4 = *param_2;
            (**(code **)(*plVar7 + 0x210))((CowData<char32_t> *)&local_c8,plVar7);
            Vector<Ref<Image>>::push_back
                      ((Vector<Ref<Image>> *)(lVar4 + 0x3b0),(CowData<char32_t> *)&local_c8);
            Ref<Image>::unref((Ref<Image> *)&local_c8);
          }
          Ref<Texture2D>::unref((Ref<Texture2D> *)&local_f8);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
          Dictionary::~Dictionary(local_110);
          CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_d0);
          goto LAB_0010e86e;
        }
      }
      if (param_5 < 0) goto LAB_0010e888;
      local_d8 = 0;
      String::parse_latin1
                ((String *)&local_d8,"FBX: Image index \'%d\' couldn\'t be named. Skipping it.");
      vformat<int>((String *)&local_c8,(int)(String *)&local_d8);
      _err_print_error("_parse_image_save_image","modules/fbx/fbx_document.cpp",0x3c9,
                       (CowData<char32_t> *)&local_c8,0,1);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      local_c8 = (Object *)0x0;
      Vector<Ref<Texture2D>>::push_back
                ((Vector<Ref<Texture2D>> *)(*param_2 + 0x380),(CowData<char32_t> *)&local_c8);
      local_c8 = (Object *)0x0;
      Vector<Ref<Image>>::push_back
                ((Vector<Ref<Image>> *)(*param_2 + 0x3b0),(CowData<char32_t> *)&local_c8);
    }
LAB_0010e86e:
    lVar4 = *(long *)(*param_2 + 0x388);
joined_r0x0010e87b:
    if (lVar4 != 0) {
      iVar8 = (int)*(undefined8 *)(lVar4 + -8) + -1;
      goto LAB_0010e65e;
    }
  }
LAB_0010e888:
  iVar8 = -1;
LAB_0010e65e:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<Ref<GLTFTexture> >::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Ref<GLTFTexture>>::_copy_on_write(CowData<Ref<GLTFTexture>> *this)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  char cVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar7 = 0x10;
  if (lVar1 * 8 != 0) {
    uVar7 = lVar1 * 8 - 1;
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar5 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  lVar8 = 0;
  *puVar5 = 1;
  puVar5[1] = lVar1;
  plVar6 = puVar5 + 2;
  if (lVar1 != 0) {
    do {
      lVar2 = *(long *)this;
      *plVar6 = 0;
      lVar2 = *(long *)(lVar2 + lVar8 * 8);
      if (lVar2 != 0) {
        *plVar6 = lVar2;
        cVar4 = RefCounted::reference();
        if (cVar4 == '\0') {
          *plVar6 = 0;
        }
      }
      lVar8 = lVar8 + 1;
      plVar6 = plVar6 + 1;
    } while (lVar1 != lVar8);
  }
  _unref(this);
  *(undefined8 **)this = puVar5 + 2;
  return;
}



/* Vector<Ref<GLTFTexture> >::push_back(Ref<GLTFTexture>) [clone .isra.0] */

void __thiscall Vector<Ref<GLTFTexture>>::push_back(Vector<Ref<GLTFTexture>> *this,long *param_2)

{
  long *plVar1;
  Object *pOVar2;
  Object *pOVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)(this + 8) == 0) {
    lVar6 = 1;
  }
  else {
    lVar6 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar5 = CowData<Ref<GLTFTexture>>::resize<false>((CowData<Ref<GLTFTexture>> *)(this + 8),lVar6);
  if (iVar5 != 0) {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
    return;
  }
  if (*(long *)(this + 8) == 0) {
    lVar7 = -1;
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(*(long *)(this + 8) + -8);
    lVar7 = lVar6 + -1;
    if (-1 < lVar7) {
      CowData<Ref<GLTFTexture>>::_copy_on_write((CowData<Ref<GLTFTexture>> *)(this + 8));
      pOVar2 = (Object *)*param_2;
      plVar1 = (long *)(*(long *)(this + 8) + lVar7 * 8);
      pOVar3 = (Object *)*plVar1;
      if (pOVar2 == pOVar3) {
        return;
      }
      *plVar1 = (long)pOVar2;
      if ((pOVar2 != (Object *)0x0) && (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
        *plVar1 = 0;
      }
      if (pOVar3 == (Object *)0x0) {
        return;
      }
      cVar4 = RefCounted::unreference();
      if (cVar4 == '\0') {
        return;
      }
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 == '\0') {
        return;
      }
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
      return;
    }
  }
  _err_print_index_error
            ("set","./core/templates/cowdata.h",0xcf,lVar7,lVar6,"p_index","size()","",false,false);
  return;
}



/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FBXDocument::_parse_materials(Ref<FBXState>) */

undefined8 __thiscall FBXDocument::_parse_materials(FBXDocument *this,ulong *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  Object *pOVar5;
  Ref *pRVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  String *pSVar16;
  String *pSVar17;
  char cVar18;
  int iVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  int iVar22;
  long *plVar23;
  long lVar24;
  ulong uVar25;
  Object *pOVar26;
  int *piVar27;
  Object *pOVar28;
  undefined4 *puVar29;
  uint uVar30;
  long lVar31;
  Color *pCVar32;
  uint uVar33;
  ulong uVar34;
  long lVar35;
  ulong uVar36;
  uint uVar37;
  uint uVar38;
  long lVar39;
  long in_FS_OFFSET;
  float fVar40;
  undefined8 uVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float extraout_XMM1_Da;
  float fVar44;
  float __x;
  undefined4 extraout_XMM1_Db;
  undefined4 extraout_XMM1_Db_00;
  float fVar45;
  float fVar46;
  float fVar47;
  double dVar48;
  long local_170;
  undefined1 local_138 [16];
  String *local_d8;
  Dictionary local_d0 [8];
  Object *local_c8;
  String *local_c0;
  long local_b8;
  undefined8 local_b0;
  Object *local_a8;
  undefined8 local_a0;
  Object *local_98;
  undefined8 uStack_90;
  Object *local_88;
  undefined8 local_80;
  undefined8 local_78 [2];
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined1 local_58 [8];
  undefined8 uStack_50;
  long local_40;
  undefined8 extraout_XMM0_Qb;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = *(long *)(*param_2 + 0x558);
  if (0 < *(int *)(lVar2 + 0x428)) {
    local_170 = 0;
    do {
      local_d8 = (String *)0x0;
      puVar3 = *(undefined8 **)(*(long *)(lVar2 + 0x420) + local_170 * 8);
      Ref<StandardMaterial3D>::instantiate<>((Ref<StandardMaterial3D> *)&local_d8);
      pSVar16 = local_d8;
      if (puVar3[1] == 0) {
        itos((long)&local_a0);
        local_88 = (Object *)0x118035;
        local_98 = (Object *)0x0;
        local_80 = 0xb;
        String::parse_latin1((StrRange *)&local_98);
        vformat<String>((CowData<char32_t> *)&local_88,(StrRange *)&local_98,
                        (CowData<char32_t> *)&local_a0);
        Resource::set_name(pSVar16);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      }
      else {
        String::utf8((char *)&local_88,(int)*puVar3);
        Resource::set_name(pSVar16);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      }
      BaseMaterial3D::set_flag(pSVar16,1,1);
      Dictionary::Dictionary(local_d0);
      if (*(char *)(puVar3 + 0xa9) != '\0') {
        cVar18 = *(char *)(puVar3 + 0xa2);
        dVar48 = (double)puVar3[0x9c];
        auVar42._0_8_ = _material_color((ufbx_material_map *)(puVar3 + 0xa3));
        auVar42._8_8_ = extraout_XMM0_Qb;
        auVar43 = auVar42;
        fVar45 = extraout_XMM1_Da;
        if (cVar18 != '\0') {
          fVar44 = (float)dVar48;
          fVar45 = extraout_XMM1_Da * fVar44;
          auVar43._0_4_ = fVar44 * (float)auVar42._0_8_;
          auVar43._4_4_ = fVar44 * (float)((ulong)auVar42._0_8_ >> 0x20);
          auVar43._8_4_ = (float)extraout_XMM0_Qb * 0.0;
          auVar43._12_4_ = (float)((ulong)extraout_XMM0_Qb >> 0x20) * 0.0;
        }
        fVar44 = auVar43._4_4_;
        if (_LC212 <= fVar45) {
          fVar45 = powf(fVar45,_LC214);
          auVar43 = ZEXT416(auVar43._0_4_);
          fVar45 = (float)((double)fVar45 * __LC215 - __LC216);
        }
        else {
          fVar45 = fVar45 * _LC213;
        }
        fVar46 = auVar43._0_4_;
        if (_LC212 <= fVar44) {
          fVar44 = powf(fVar44,_LC214);
          fVar44 = (float)((double)fVar44 * __LC215 - __LC216);
          if (_LC212 <= fVar46) goto LAB_00110a65;
LAB_0010f945:
          local_58._0_4_ = fVar46 * _LC213;
        }
        else {
          fVar44 = fVar44 * _LC213;
          if (fVar46 < _LC212) goto LAB_0010f945;
LAB_00110a65:
          fVar46 = powf(fVar46,_LC214);
          local_58._0_4_ = (undefined4)((double)fVar46 * __LC215 - __LC216);
        }
        local_58._4_4_ = fVar44;
        uStack_50._4_4_ = (float)extraout_XMM1_Db;
        uStack_50._0_4_ = fVar45;
        BaseMaterial3D::set_albedo((Color *)pSVar16);
      }
      if (*(char *)((long)puVar3 + 0x110e) != '\0') {
        BaseMaterial3D::set_cull_mode(pSVar16,2);
      }
      lVar35 = puVar3[0xa8];
      if (lVar35 != 0) {
        plVar23 = *(long **)(lVar35 + 0x120);
        plVar1 = plVar23 + *(long *)(lVar35 + 0x128);
        if (plVar23 != plVar1) {
LAB_0010f9cd:
          lVar35 = *plVar23;
          if (*(int *)(lVar35 + 0x100) == -1) goto LAB_0010f9c0;
          pCVar32 = (Color *)local_78;
          BaseMaterial3D::set_flag(pSVar16,0x10,*(long *)(lVar35 + 0x140) == 0);
          uVar20 = *(undefined4 *)(lVar35 + 0x100);
          local_88 = (Object *)0x0;
          Ref<FBXState>::operator=((Ref<FBXState> *)&local_88,(Ref *)*param_2);
          _get_texture((Ref<Texture2D> *)&local_c8,this,(CowData<char32_t> *)&local_88,uVar20);
          Ref<FBXState>::unref((Ref<FBXState> *)&local_88);
          local_138 = *(undefined1 (*) [16])(puVar3 + 0x4d);
          local_78[0] = puVar3[0x1ce];
          local_78[1] = local_138._0_8_;
          do {
            lVar39 = *(long *)pCVar32;
            if (lVar39 != 0) {
              plVar23 = *(long **)(lVar39 + 0x120);
              plVar1 = plVar23 + *(long *)(lVar39 + 0x128);
              for (; plVar23 != plVar1; plVar23 = plVar23 + 1) {
                if (*(int *)(*plVar23 + 0x100) != -1) {
                  uVar20 = *(undefined4 *)(*plVar23 + 0x100);
                  local_98 = (Object *)0x0;
                  Ref<FBXState>::operator=((Ref<FBXState> *)&local_98,(Ref *)*param_2);
                  _get_texture((CowData<char32_t> *)&local_88,this,(Ref<FBXState> *)&local_98,uVar20
                              );
                  pOVar26 = local_88;
                  if (local_88 != (Object *)0x0) {
                    cVar18 = RefCounted::reference();
                    if (cVar18 != '\0') {
                      cVar18 = RefCounted::unreference();
                      if (cVar18 == '\0') {
                        local_138._0_8_ = pOVar26;
                        Ref<FBXState>::unref((Ref<FBXState> *)&local_98);
                      }
                      else {
                        cVar18 = predelete_handler(pOVar26);
                        local_138._0_8_ = pOVar26;
                        auVar43 = local_138;
                        if (cVar18 != '\0') goto LAB_001110a5;
                        Ref<FBXState>::unref((Ref<FBXState> *)&local_98);
                      }
LAB_00110f75:
                      if (local_c8 == (Object *)0x0) goto LAB_0010fd07;
                      pOVar26 = (Object *)local_138._0_8_;
                      if (local_c8 == (Object *)local_138._0_8_) goto LAB_0010fb71;
                      pOVar28 = (Object *)(**(code **)(*(long *)local_c8 + 0x1c0))();
                      uStack_90 = (**(code **)(*(long *)local_138._0_8_ + 0x1c0))();
                      local_88 = (Object *)((ulong)local_88 & 0xffffffff00000000);
                      pRVar6 = (Ref *)*param_2;
                      local_98 = pOVar28;
                      cVar18 = HashMap<Pair<unsigned_long,unsigned_long>,int,PairHash<unsigned_long,unsigned_long>,HashMapComparatorDefault<Pair<unsigned_long,unsigned_long>>,DefaultTypedAllocator<HashMapElement<Pair<unsigned_long,unsigned_long>,int>>>
                               ::_lookup_pos((HashMap<Pair<unsigned_long,unsigned_long>,int,PairHash<unsigned_long,unsigned_long>,HashMapComparatorDefault<Pair<unsigned_long,unsigned_long>>,DefaultTypedAllocator<HashMapElement<Pair<unsigned_long,unsigned_long>,int>>>
                                              *)(pRVar6 + 0x598),(Pair *)&local_98,(uint *)&local_88
                                            );
                      pOVar5 = (Object *)local_138._0_8_;
                      if (cVar18 == '\0') {
                        local_88 = (Object *)0x0;
                        Ref<Texture2D>::operator=((Ref<Texture2D> *)&local_88,local_c8);
                        _get_decompressed_image((Ref<Image> *)&local_c0,local_88);
                        Ref<Texture2D>::unref((Ref<Texture2D> *)&local_88);
                        local_88 = (Object *)0x0;
                        Ref<Texture2D>::operator=
                                  ((Ref<Texture2D> *)&local_88,(Ref *)local_138._0_8_);
                        _get_decompressed_image((Ref<Image> *)&local_b8,local_88);
                        Ref<Texture2D>::unref((Ref<Texture2D> *)&local_88);
                        lVar39 = local_b8;
                        pSVar17 = local_c0;
                        if ((local_c0 != (String *)0x0) && (local_b8 != 0)) {
                          Image::convert(local_c0,5);
                          uVar20 = (**(code **)(*(long *)local_c8 + 0x1d0))();
                          uVar21 = (**(code **)(*(long *)local_c8 + 0x1c8))();
                          Image::resize(lVar39,uVar21,uVar20,4);
                          for (uVar33 = 0; iVar19 = Image::get_height(), (int)uVar33 < iVar19;
                              uVar33 = uVar33 + 1) {
                            for (iVar19 = 0; iVar22 = Image::get_width(), iVar19 < iVar22;
                                iVar19 = iVar19 + 1) {
                              _local_58 = Image::get_pixel((int)pSVar17,iVar19);
                              fVar45 = (float)Image::get_pixel((int)lVar39,iVar19);
                              uStack_50._4_4_ = fVar45 * uStack_50._4_4_;
                              Image::set_pixel((int)pSVar17,iVar19,(Color *)(ulong)uVar33);
                            }
                          }
                          Image::clear_mipmaps();
                          Image::generate_mipmaps(SUB81(pSVar17,0));
                          local_a0 = 0;
                          String::parse_latin1((String *)&local_a0,"alpha_%d");
                          vformat<unsigned_int>((String *)&local_88,(uint)(String *)&local_a0);
                          Resource::set_name(pSVar17);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
                          local_a0 = 0;
                          Ref<Image>::operator=((Ref<Image> *)&local_a0,pSVar17);
                          local_a8 = (Object *)0x0;
                          String::parse_latin1((String *)&local_a8,"");
                          local_80 = 0;
                          local_b0 = 0;
                          Ref<FBXState>::operator=((Ref<FBXState> *)&local_b0,(Ref *)*param_2);
                          iVar19 = _parse_image_save_image
                                             (this,(Ref<FBXState> *)&local_b0,
                                              (CowData<char32_t> *)&local_88,(String *)&local_a8,
                                              0xffffffff,(String *)&local_a0);
                          Ref<FBXState>::unref((Ref<FBXState> *)&local_b0);
                          CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_80);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
                          Ref<Image>::unref((Ref<Image> *)&local_a0);
                          if (iVar19 < 0) {
                            local_a0 = 0;
                            String::parse_latin1
                                      ((String *)&local_a0,
                                       "FBX: Could not save modified albedo texture from RID (%d, %d)."
                                      );
                            vformat<unsigned_long,unsigned_long>
                                      ((String *)&local_88,(ulong)&local_a0,(ulong)pOVar28);
                            _err_print_error("_parse_materials","modules/fbx/fbx_document.cpp",0x4c8
                                             ,(CowData<char32_t> *)&local_88,0,1);
                            CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                            CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
                            puVar29 = (undefined4 *)
                                      HashMap<Pair<unsigned_long,unsigned_long>,int,PairHash<unsigned_long,unsigned_long>,HashMapComparatorDefault<Pair<unsigned_long,unsigned_long>>,DefaultTypedAllocator<HashMapElement<Pair<unsigned_long,unsigned_long>,int>>>
                                      ::operator[]((
                                                  HashMap<Pair<unsigned_long,unsigned_long>,int,PairHash<unsigned_long,unsigned_long>,HashMapComparatorDefault<Pair<unsigned_long,unsigned_long>>,DefaultTypedAllocator<HashMapElement<Pair<unsigned_long,unsigned_long>,int>>>
                                                  *)(*param_2 + 0x598),(Pair *)&local_98);
                            *puVar29 = 0xffffffff;
                          }
                          else {
                            local_a8 = (Object *)0x0;
                            Ref<GLTFTexture>::instantiate<>((Ref<GLTFTexture> *)&local_a8);
                            pOVar28 = local_a8;
                            GLTFTexture::set_src_image((int)local_a8);
                            uVar34 = *param_2;
                            local_88 = pOVar28;
                            cVar18 = RefCounted::reference();
                            if (cVar18 == '\0') {
                              local_88 = (Object *)0x0;
                            }
                            Vector<Ref<GLTFTexture>>::push_back
                                      ((Vector<Ref<GLTFTexture>> *)(uVar34 + 0x358),
                                       (CowData<char32_t> *)&local_88);
                            Ref<GLTFTexture>::unref((Ref<GLTFTexture> *)&local_88);
                            lVar39 = *(long *)(*param_2 + 0x360);
                            if (lVar39 == 0) {
                              iVar19 = -1;
                            }
                            else {
                              iVar19 = (int)*(undefined8 *)(lVar39 + -8) + -1;
                            }
                            piVar27 = (int *)HashMap<Pair<unsigned_long,unsigned_long>,int,PairHash<unsigned_long,unsigned_long>,HashMapComparatorDefault<Pair<unsigned_long,unsigned_long>>,DefaultTypedAllocator<HashMapElement<Pair<unsigned_long,unsigned_long>,int>>>
                                             ::operator[]((
                                                  HashMap<Pair<unsigned_long,unsigned_long>,int,PairHash<unsigned_long,unsigned_long>,HashMapComparatorDefault<Pair<unsigned_long,unsigned_long>>,DefaultTypedAllocator<HashMapElement<Pair<unsigned_long,unsigned_long>,int>>>
                                                  *)(*param_2 + 0x598),(Pair *)&local_98);
                            *piVar27 = iVar19;
                            local_a0 = 0;
                            Ref<FBXState>::operator=((Ref<FBXState> *)&local_a0,(Ref *)*param_2);
                            _get_texture((CowData<char32_t> *)&local_88,this,(String *)&local_a0,
                                         iVar19);
                            Ref<Texture2D>::operator=((Ref<Texture2D> *)&local_c8,local_88);
                            Ref<Texture2D>::unref((Ref<Texture2D> *)&local_88);
                            Ref<FBXState>::unref((Ref<FBXState> *)&local_a0);
                            Ref<GLTFTexture>::unref((Ref<GLTFTexture> *)&local_a8);
                          }
                        }
                        Ref<Image>::unref((Ref<Image> *)&local_b8);
                        Ref<Image>::unref((Ref<Image> *)&local_c0);
                      }
                      else {
                        iVar19 = *(int *)(*(long *)(*(long *)(pRVar6 + 0x5a0) +
                                                   ((ulong)local_88 & 0xffffffff) * 8) + 0x20);
                        if (-1 < iVar19) {
                          local_a0 = 0;
                          Ref<FBXState>::operator=((Ref<FBXState> *)&local_a0,pRVar6);
                          _get_texture((CowData<char32_t> *)&local_88,this,
                                       (Ref<FBXState> *)&local_a0,iVar19);
                          Ref<Texture2D>::operator=((Ref<Texture2D> *)&local_c8,local_88);
                          Ref<Texture2D>::unref((Ref<Texture2D> *)&local_88);
                          Ref<FBXState>::unref((Ref<FBXState> *)&local_a0);
                        }
                      }
                      goto joined_r0x0011107c;
                    }
                    cVar18 = RefCounted::unreference();
                    if (cVar18 != '\0') {
                      cVar18 = predelete_handler(pOVar26);
                      auVar15._8_8_ = 0;
                      auVar15._0_8_ = local_138._8_8_;
                      local_138 = auVar15 << 0x40;
                      auVar43 = local_138;
                      if (cVar18 != '\0') {
LAB_001110a5:
                        local_138 = auVar43;
                        (**(code **)(*(long *)pOVar26 + 0x140))(pOVar26);
                        Memory::free_static(pOVar26,false);
                        Ref<FBXState>::unref((Ref<FBXState> *)&local_98);
                        if ((Object *)local_138._0_8_ != (Object *)0x0) goto LAB_00110f75;
                        break;
                      }
                    }
                  }
                  Ref<FBXState>::unref((Ref<FBXState> *)&local_98);
                  break;
                }
              }
            }
            pCVar32 = pCVar32 + 8;
          } while ((Color *)&local_68 != pCVar32);
          local_138._0_8_ = (Object *)0x0;
          pOVar5 = local_c8;
          pOVar26 = (Object *)local_138._0_8_;
joined_r0x0011107c:
          local_138._0_8_ = pOVar5;
          if (local_c8 != (Object *)0x0) {
LAB_0010fb71:
            local_138._0_8_ = pOVar26;
            uVar34 = *param_2;
            lVar24 = (**(code **)(*(long *)local_c8 + 0x1c0))();
            lVar39 = *(long *)(uVar34 + 0x570);
            if ((lVar39 == 0) || (*(int *)(uVar34 + 0x594) == 0)) {
LAB_00110d5f:
              local_88 = (Object *)0x0;
              Ref<Texture2D>::operator=((Ref<Texture2D> *)&local_88,local_c8);
              _get_decompressed_image((Ref<Image> *)&local_98,local_88);
              Ref<Texture2D>::unref((Ref<Texture2D> *)&local_88);
              iVar19 = Image::detect_alpha();
              uVar34 = *param_2;
              local_88 = (Object *)(**(code **)(*(long *)local_c8 + 0x1c0))();
              piVar27 = (int *)HashMap<unsigned_long,Image::AlphaMode,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Image::AlphaMode>>>
                               ::operator[]((HashMap<unsigned_long,Image::AlphaMode,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Image::AlphaMode>>>
                                             *)(uVar34 + 0x568),(ulong *)&local_88);
              *piVar27 = iVar19;
              Ref<Image>::unref((Ref<Image> *)&local_98);
              if (iVar19 != 2) goto LAB_0010fcee;
LAB_00110dff:
              BaseMaterial3D::set_transparency(pSVar16,4);
            }
            else {
              lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(uVar34 + 0x590) * 8);
              uVar36 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                           (ulong)*(uint *)(uVar34 + 0x590) * 4));
              uVar25 = lVar24 * 0x3ffff - 1;
              uVar25 = (uVar25 ^ uVar25 >> 0x1f) * 0x15;
              uVar25 = (uVar25 ^ uVar25 >> 0xb) * 0x41;
              uVar38 = (uint)(uVar25 >> 0x16) ^ (uint)uVar25;
              uVar33 = 1;
              if (uVar38 != 0) {
                uVar33 = uVar38;
              }
              auVar7._8_8_ = 0;
              auVar7._0_8_ = (ulong)uVar33 * lVar4;
              auVar11._8_8_ = 0;
              auVar11._0_8_ = uVar36;
              lVar31 = SUB168(auVar7 * auVar11,8);
              uVar38 = *(uint *)(*(long *)(uVar34 + 0x578) + lVar31 * 4);
              uVar30 = SUB164(auVar7 * auVar11,8);
              if (uVar38 == 0) goto LAB_00110d5f;
              uVar37 = 0;
              while ((uVar33 != uVar38 ||
                     (lVar24 != *(long *)(*(long *)(lVar39 + lVar31 * 8) + 0x10)))) {
                uVar37 = uVar37 + 1;
                auVar8._8_8_ = 0;
                auVar8._0_8_ = (ulong)(uVar30 + 1) * lVar4;
                auVar12._8_8_ = 0;
                auVar12._0_8_ = uVar36;
                lVar31 = SUB168(auVar8 * auVar12,8);
                uVar38 = *(uint *)(*(long *)(uVar34 + 0x578) + lVar31 * 4);
                uVar30 = SUB164(auVar8 * auVar12,8);
                if ((uVar38 == 0) ||
                   (auVar9._8_8_ = 0, auVar9._0_8_ = (ulong)uVar38 * lVar4, auVar13._8_8_ = 0,
                   auVar13._0_8_ = uVar36, auVar10._8_8_ = 0,
                   auVar10._0_8_ =
                        (ulong)((*(uint *)(hash_table_size_primes +
                                          (ulong)*(uint *)(uVar34 + 0x590) * 4) + uVar30) -
                               SUB164(auVar9 * auVar13,8)) * lVar4, auVar14._8_8_ = 0,
                   auVar14._0_8_ = uVar36, SUB164(auVar10 * auVar14,8) < uVar37)) goto LAB_00110d5f;
              }
              iVar19 = *(int *)(*(long *)(lVar39 + (ulong)uVar30 * 8) + 0x18);
              if (iVar19 == 2) goto LAB_00110dff;
LAB_0010fcee:
              if (iVar19 == 1) {
                BaseMaterial3D::set_transparency(pSVar16,2);
              }
            }
            BaseMaterial3D::set_texture(pSVar16,0,(Ref<Texture2D> *)&local_c8);
          }
LAB_0010fd07:
          local_68 = _LC78;
          fStack_64 = _LC78;
          fStack_60 = _LC78;
          fStack_5c = _LC78;
          if ((*(char *)(puVar3 + 0xa2) == '\0') ||
             (Color::operator*=((Color *)&local_68,(float)(double)puVar3[0x9c]), _LC212 <= fStack_60
             )) {
            fVar44 = fStack_5c;
            fVar45 = fStack_64;
            fVar46 = local_68;
            fVar47 = _LC212;
            fVar40 = powf(fStack_60,_LC214);
            fVar40 = (float)((double)fVar40 * __LC215 - __LC216);
            if (fVar45 < fVar47) goto LAB_0010fdaa;
LAB_001108bc:
            fVar45 = powf(fVar45,_LC214);
            fVar45 = (float)((double)fVar45 * __LC215 - __LC216);
            if (fVar47 <= fVar46) goto LAB_00110921;
LAB_0010fdbb:
            fVar46 = fVar46 * _LC213;
          }
          else {
            fVar40 = fStack_60 * _LC213;
            fVar45 = fStack_64;
            fVar47 = _LC212;
            fVar46 = local_68;
            fVar44 = fStack_5c;
            if (_LC212 <= fStack_64) goto LAB_001108bc;
LAB_0010fdaa:
            fVar45 = fVar45 * _LC213;
            if (fVar46 < fVar47) goto LAB_0010fdbb;
LAB_00110921:
            fVar46 = powf(fVar46,_LC214);
            fVar46 = (float)((double)fVar46 * __LC215 - __LC216);
          }
          uStack_50._4_4_ = fVar44;
          uStack_50._0_4_ = fVar40;
          local_58._4_4_ = fVar45;
          local_58._0_4_ = fVar46;
          BaseMaterial3D::set_albedo((Color *)pSVar16);
          uStack_50._0_4_ = (float)*(double *)(lVar35 + 0x160);
          auVar43 = _local_58;
          local_58._4_4_ = (float)SUB168(*(undefined1 (*) [16])(lVar35 + 0x150),8);
          local_58._0_4_ = (float)SUB168(*(undefined1 (*) [16])(lVar35 + 0x150),0);
          uStack_50 = auVar43._8_8_;
          BaseMaterial3D::set_uv1_offset((Vector3 *)pSVar16);
          uStack_50._0_4_ = (float)*(double *)(lVar35 + 0x198);
          auVar43 = _local_58;
          local_58._4_4_ = (float)*(double *)(lVar35 + 400);
          local_58._0_4_ = (float)*(double *)(lVar35 + 0x188);
          uStack_50 = auVar43._8_8_;
          BaseMaterial3D::set_uv1_scale((Vector3 *)pSVar16);
          if ((((Object *)local_138._0_8_ != (Object *)0x0) &&
              (cVar18 = RefCounted::unreference(), cVar18 != '\0')) &&
             (cVar18 = predelete_handler((Object *)local_138._0_8_), cVar18 != '\0')) {
            (**(code **)(*(long *)local_138._0_8_ + 0x140))(local_138._0_8_);
            Memory::free_static((void *)local_138._0_8_,false);
          }
          if (((local_c8 != (Object *)0x0) &&
              (cVar18 = RefCounted::unreference(), pOVar26 = local_c8, cVar18 != '\0')) &&
             (cVar18 = predelete_handler(local_c8), cVar18 != '\0')) {
            (**(code **)(*(long *)pOVar26 + 0x140))(pOVar26);
            Memory::free_static(pOVar26,false);
          }
        }
      }
LAB_0010fe80:
      if (*(char *)(puVar3 + 0x21d) != '\0') {
        if (*(char *)(puVar3 + 0xb7) == '\0') {
          BaseMaterial3D::set_metallic(_LC78);
        }
        else {
          BaseMaterial3D::set_metallic((float)(double)puVar3[0xb1]);
        }
        if (*(char *)(puVar3 + 0xb0) == '\0') {
          BaseMaterial3D::set_roughness(_LC78);
        }
        else {
          BaseMaterial3D::set_roughness((float)(double)puVar3[0xaa]);
        }
        lVar35 = puVar3[0xb6];
        if (lVar35 != 0) {
          plVar23 = *(long **)(lVar35 + 0x120);
          plVar1 = plVar23 + *(long *)(lVar35 + 0x128);
          for (; plVar23 != plVar1; plVar23 = plVar23 + 1) {
            if (*(int *)(*plVar23 + 0x100) != -1) {
              uVar20 = *(undefined4 *)(*plVar23 + 0x100);
              local_98 = (Object *)0x0;
              Ref<FBXState>::operator=((Ref<FBXState> *)&local_98,(Ref *)*param_2);
              _get_texture((CowData<char32_t> *)&local_88,this,(Ref<FBXState> *)&local_98,uVar20);
              BaseMaterial3D::set_texture(pSVar16,1,(CowData<char32_t> *)&local_88);
              if (((local_88 != (Object *)0x0) &&
                  (cVar18 = RefCounted::unreference(), pOVar26 = local_88, cVar18 != '\0')) &&
                 (cVar18 = predelete_handler(local_88), cVar18 != '\0')) {
                (**(code **)(*(long *)pOVar26 + 0x140))(pOVar26);
                Memory::free_static(pOVar26,false);
              }
              Ref<FBXState>::unref((Ref<FBXState> *)&local_98);
              BaseMaterial3D::set_metallic_texture_channel(pSVar16,0);
              BaseMaterial3D::set_metallic(_LC78);
              break;
            }
          }
        }
        lVar35 = puVar3[0xaf];
        if (lVar35 != 0) {
          plVar23 = *(long **)(lVar35 + 0x120);
          plVar1 = plVar23 + *(long *)(lVar35 + 0x128);
          for (; plVar23 != plVar1; plVar23 = plVar23 + 1) {
            if (*(int *)(*plVar23 + 0x100) != -1) {
              uVar20 = *(undefined4 *)(*plVar23 + 0x100);
              local_98 = (Object *)0x0;
              Ref<FBXState>::operator=((Ref<FBXState> *)&local_98,(Ref *)*param_2);
              _get_texture((CowData<char32_t> *)&local_88,this,(Ref<FBXState> *)&local_98,uVar20);
              BaseMaterial3D::set_texture(pSVar16,2,(CowData<char32_t> *)&local_88);
              if (((local_88 != (Object *)0x0) &&
                  (cVar18 = RefCounted::unreference(), pOVar26 = local_88, cVar18 != '\0')) &&
                 (cVar18 = predelete_handler(local_88), cVar18 != '\0')) {
                (**(code **)(*(long *)pOVar26 + 0x140))(pOVar26);
                Memory::free_static(pOVar26,false);
              }
              Ref<FBXState>::unref((Ref<FBXState> *)&local_98);
              BaseMaterial3D::set_roughness_texture_channel(pSVar16,0);
              BaseMaterial3D::set_roughness(_LC78);
              break;
            }
          }
        }
      }
      lVar35 = puVar3[0x1e3];
      if (lVar35 != 0) {
        plVar23 = *(long **)(lVar35 + 0x120);
        plVar1 = plVar23 + *(long *)(lVar35 + 0x128);
        for (; plVar23 != plVar1; plVar23 = plVar23 + 1) {
          if (*(int *)(*plVar23 + 0x100) != -1) {
            uVar20 = *(undefined4 *)(*plVar23 + 0x100);
            pOVar26 = (Object *)*param_2;
            if ((pOVar26 == (Object *)0x0) ||
               (local_98 = pOVar26, cVar18 = RefCounted::reference(), cVar18 == '\0')) {
              local_98 = (Object *)0x0;
              pOVar26 = (Object *)0x0;
            }
            _get_texture((CowData<char32_t> *)&local_88,this,&local_98,uVar20);
            BaseMaterial3D::set_texture(pSVar16,4,(CowData<char32_t> *)&local_88);
            if (((local_88 != (Object *)0x0) &&
                (cVar18 = RefCounted::unreference(), pOVar5 = local_88, cVar18 != '\0')) &&
               (cVar18 = predelete_handler(local_88), cVar18 != '\0')) {
              (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
              Memory::free_static(pOVar5,false);
            }
            if (((pOVar26 != (Object *)0x0) && (cVar18 = RefCounted::unreference(), cVar18 != '\0'))
               && (cVar18 = predelete_handler(pOVar26), cVar18 != '\0')) {
              (**(code **)(*(long *)pOVar26 + 0x140))(pOVar26);
              Memory::free_static(pOVar26,false);
            }
            BaseMaterial3D::set_feature(pSVar16,1,1);
            if (*(char *)(puVar3 + 0x1e4) != '\0') {
              BaseMaterial3D::set_normal_scale((float)(double)puVar3[0x1de]);
            }
            break;
          }
        }
      }
      lVar35 = puVar3[0x206];
      if (lVar35 != 0) {
        plVar23 = *(long **)(lVar35 + 0x120);
        plVar1 = plVar23 + *(long *)(lVar35 + 0x128);
        for (; plVar23 != plVar1; plVar23 = plVar23 + 1) {
          if (*(int *)(*plVar23 + 0x100) != -1) {
            uVar20 = *(undefined4 *)(*plVar23 + 0x100);
            pOVar26 = (Object *)*param_2;
            if ((pOVar26 == (Object *)0x0) ||
               (local_98 = pOVar26, cVar18 = RefCounted::reference(), cVar18 == '\0')) {
              local_98 = (Object *)0x0;
              pOVar26 = (Object *)0x0;
            }
            _get_texture((CowData<char32_t> *)&local_88,this,&local_98,uVar20);
            BaseMaterial3D::set_texture(pSVar16,8,(CowData<char32_t> *)&local_88);
            if (((local_88 != (Object *)0x0) &&
                (cVar18 = RefCounted::unreference(), pOVar5 = local_88, cVar18 != '\0')) &&
               (cVar18 = predelete_handler(local_88), cVar18 != '\0')) {
              (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
              Memory::free_static(pOVar5,false);
            }
            if (((pOVar26 != (Object *)0x0) && (cVar18 = RefCounted::unreference(), cVar18 != '\0'))
               && (cVar18 = predelete_handler(pOVar26), cVar18 != '\0')) {
              (**(code **)(*(long *)pOVar26 + 0x140))(pOVar26);
              Memory::free_static(pOVar26,false);
            }
            BaseMaterial3D::set_ao_texture_channel(pSVar16,0);
            BaseMaterial3D::set_feature(pSVar16,5,1);
            break;
          }
        }
      }
      if (*(char *)(puVar3 + 0x1c8) != '\0') {
        BaseMaterial3D::set_feature(pSVar16,0,1);
        uVar41 = _material_color((ufbx_material_map *)(puVar3 + 0x1c2));
        fVar45 = _LC212;
        if (_LC212 <= __x) {
          fVar44 = powf(__x,_LC214);
          fVar44 = (float)((double)fVar44 * __LC215 - __LC216);
        }
        else {
          fVar44 = __x * _LC213;
        }
        fVar47 = (float)uVar41;
        fVar46 = (float)((ulong)uVar41 >> 0x20);
        if (fVar45 <= fVar46) {
          fVar46 = powf(fVar46,_LC214);
          fVar46 = (float)((double)fVar46 * __LC215 - __LC216);
        }
        else {
          fVar46 = _LC213 * fVar46;
        }
        if (fVar45 <= fVar47) {
          fVar45 = powf(fVar47,_LC214);
          local_58._0_4_ = (undefined4)((double)fVar45 * __LC215 - __LC216);
        }
        else {
          local_58._0_4_ = fVar47 * _LC213;
        }
        local_58._4_4_ = fVar46;
        uStack_50._4_4_ = (float)extraout_XMM1_Db_00;
        uStack_50._0_4_ = fVar44;
        BaseMaterial3D::set_emission((Color *)pSVar16);
        BaseMaterial3D::set_emission_energy_multiplier((float)(double)puVar3[0x1bb]);
      }
      lVar35 = puVar3[0x1c7];
      if (lVar35 != 0) {
        plVar23 = *(long **)(lVar35 + 0x120);
        plVar1 = plVar23 + *(long *)(lVar35 + 0x128);
        for (; plVar23 != plVar1; plVar23 = plVar23 + 1) {
          if (*(int *)(*plVar23 + 0x100) != -1) {
            uVar20 = *(undefined4 *)(*plVar23 + 0x100);
            pOVar26 = (Object *)*param_2;
            if ((pOVar26 == (Object *)0x0) ||
               (local_98 = pOVar26, cVar18 = RefCounted::reference(), cVar18 == '\0')) {
              local_98 = (Object *)0x0;
              pOVar26 = (Object *)0x0;
            }
            _get_texture((CowData<char32_t> *)&local_88,this,&local_98,uVar20);
            BaseMaterial3D::set_texture(pSVar16,3,(CowData<char32_t> *)&local_88);
            if (((local_88 != (Object *)0x0) &&
                (cVar18 = RefCounted::unreference(), pOVar5 = local_88, cVar18 != '\0')) &&
               (cVar18 = predelete_handler(local_88), cVar18 != '\0')) {
              (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
              Memory::free_static(pOVar5,false);
            }
            if (((pOVar26 != (Object *)0x0) && (cVar18 = RefCounted::unreference(), cVar18 != '\0'))
               && (cVar18 = predelete_handler(pOVar26), cVar18 != '\0')) {
              (**(code **)(*(long *)pOVar26 + 0x140))(pOVar26);
              Memory::free_static(pOVar26,false);
            }
            BaseMaterial3D::set_feature(pSVar16,0,1);
            local_58._4_4_ = _UNK_0012f4f4;
            local_58._0_4_ = __LC136;
            uStack_50._0_4_ = _UNK_0012f4f8;
            uStack_50._4_4_ = (float)_UNK_0012f4fc;
            BaseMaterial3D::set_emission((Color *)pSVar16);
            break;
          }
        }
      }
      if ((*(char *)((long)puVar3 + 0x110e) == '\0') || (*(char *)((long)puVar3 + 0x110f) == '\0'))
      {
        uVar34 = *param_2;
        if (pSVar16 != (String *)0x0) goto LAB_001103f9;
LAB_00110b20:
        lVar35 = *(long *)(uVar34 + 0x338);
        pOVar26 = (Object *)0x0;
        if (lVar35 == 0) goto LAB_00110b32;
LAB_0011043c:
        lVar35 = *(long *)(lVar35 + -8) + 1;
      }
      else {
        BaseMaterial3D::set_cull_mode(pSVar16,2);
        uVar34 = *param_2;
        if (pSVar16 == (String *)0x0) goto LAB_00110b20;
LAB_001103f9:
        pOVar26 = (Object *)__dynamic_cast(pSVar16,&Object::typeinfo,&Material::typeinfo,0);
        if ((pOVar26 != (Object *)0x0) && (cVar18 = RefCounted::reference(), cVar18 == '\0')) {
          pOVar26 = (Object *)0x0;
        }
        lVar35 = *(long *)(uVar34 + 0x338);
        if (lVar35 != 0) goto LAB_0011043c;
LAB_00110b32:
        lVar35 = 1;
      }
      iVar19 = CowData<Ref<Material>>::resize<false>
                         ((CowData<Ref<Material>> *)(uVar34 + 0x338),lVar35);
      if (iVar19 == 0) {
        if (*(long *)(uVar34 + 0x338) == 0) {
          lVar39 = -1;
          lVar35 = 0;
LAB_00110e1b:
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,lVar39,lVar35,"p_index","size()","",
                     false,false);
          goto joined_r0x001106b0;
        }
        lVar35 = *(long *)(*(long *)(uVar34 + 0x338) + -8);
        lVar39 = lVar35 + -1;
        if (lVar39 < 0) goto LAB_00110e1b;
        CowData<Ref<Material>>::_copy_on_write((CowData<Ref<Material>> *)(uVar34 + 0x338));
        puVar3 = (undefined8 *)(*(long *)(uVar34 + 0x338) + lVar39 * 8);
        pOVar5 = (Object *)*puVar3;
        if (pOVar5 == pOVar26) goto joined_r0x001106b0;
        *puVar3 = pOVar26;
        if (pOVar26 != (Object *)0x0) {
          cVar18 = RefCounted::reference();
          if (cVar18 == '\0') {
            *puVar3 = 0;
            if (pOVar5 != (Object *)0x0) {
              cVar18 = RefCounted::unreference();
              goto joined_r0x0011099b;
            }
          }
          else if (pOVar5 != (Object *)0x0) {
            cVar18 = RefCounted::unreference();
joined_r0x0011099b:
            if ((cVar18 != '\0') && (cVar18 = predelete_handler(pOVar5), cVar18 != '\0'))
            goto LAB_00110809;
          }
          cVar18 = RefCounted::unreference();
          goto joined_r0x001106c0;
        }
        if (((pOVar5 != (Object *)0x0) && (cVar18 = RefCounted::unreference(), cVar18 != '\0')) &&
           (cVar18 = predelete_handler(pOVar5), cVar18 != '\0')) {
LAB_00110809:
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          Memory::free_static(pOVar5,false);
          goto joined_r0x001106b0;
        }
      }
      else {
        _err_print_error("push_back","./core/templates/vector.h",0x142,
                         "Condition \"err\" is true. Returning: true",0,0);
joined_r0x001106b0:
        if (pOVar26 != (Object *)0x0) {
          cVar18 = RefCounted::unreference();
joined_r0x001106c0:
          if ((cVar18 != '\0') && (cVar18 = predelete_handler(pOVar26), cVar18 != '\0')) {
            (**(code **)(*(long *)pOVar26 + 0x140))(pOVar26);
            Memory::free_static(pOVar26,false);
          }
        }
      }
      Dictionary::~Dictionary(local_d0);
      if (((pSVar16 != (String *)0x0) && (cVar18 = RefCounted::unreference(), cVar18 != '\0')) &&
         (cVar18 = predelete_handler((Object *)pSVar16), cVar18 != '\0')) {
        (**(code **)(*(long *)pSVar16 + 0x140))(pSVar16);
        Memory::free_static(pSVar16,false);
      }
      local_170 = local_170 + 1;
    } while ((int)local_170 < *(int *)(lVar2 + 0x428));
  }
  cVar18 = is_print_verbose_enabled();
  if (cVar18 != '\0') {
    itos((long)&local_a0);
    operator+((char *)&local_98,(String *)"Total materials: ");
    ::Variant::Variant((Variant *)local_58,(String *)&local_98);
    stringify_variants((Variant *)&local_88);
    __print_line((String *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if (::Variant::needs_deinit[(int)local_58._0_4_] != '\0') {
      ::Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0010f9c0:
  plVar23 = plVar23 + 1;
  if (plVar1 == plVar23) goto LAB_0010fe80;
  goto LAB_0010f9cd;
}



/* FBXDocument::_parse_images(Ref<FBXState>, String const&) */

undefined8 __thiscall FBXDocument::_parse_images(FBXDocument *this,long *param_2,long *param_3)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  size_t __n;
  code *pcVar4;
  String *pSVar5;
  Object *pOVar6;
  char cVar7;
  int iVar8;
  ulong *puVar9;
  Object *pOVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  int iVar13;
  void *__src;
  long lVar14;
  ulong uVar15;
  size_t __n_00;
  long in_FS_OFFSET;
  Object **local_d0;
  long local_c0;
  Object *local_a0;
  CowData<char32_t> local_98 [8];
  Object *local_90;
  String *local_88;
  Object *local_80;
  Object *local_78;
  ulong *local_70;
  Object *local_68;
  ulong *local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_2 == 0) {
    _err_print_error("_parse_images","modules/fbx/fbx_document.cpp",0x421,
                     "Condition \"p_state.is_null()\" is true. Returning: ERR_INVALID_PARAMETER",0,0
                    );
    uVar12 = 0x1f;
  }
  else {
    lVar2 = *(long *)(*param_2 + 0x558);
    if (0 < *(int *)(lVar2 + 0x548)) {
      local_c0 = 0;
      iVar13 = 0;
      do {
        lVar14 = local_c0 + *(long *)(lVar2 + 0x540);
        String::utf8((char *)&local_a0,(int)*(undefined8 *)(lVar14 + 8));
        cVar7 = String::is_absolute_path();
        if (cVar7 != '\0') {
          String::get_file();
          if (local_a0 != local_68) {
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
            local_a0 = local_68;
            local_68 = (Object *)0x0;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        }
        if ((*param_3 != 0) && (1 < *(uint *)(*param_3 + -8))) {
          String::path_join((String *)&local_68);
          if (local_a0 != local_68) {
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
            local_a0 = local_68;
            local_68 = (Object *)0x0;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        }
        String::simplify_path();
        if (local_a0 != local_68) {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
          local_a0 = local_68;
          local_68 = (Object *)0x0;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        uVar3 = *(ulong *)(lVar14 + 0x70);
        local_70 = (ulong *)0x0;
        uVar15 = uVar3 - 1;
        if (uVar15 < 0x7fffffff) {
          uVar15 = uVar15 >> 1 | uVar15;
          uVar15 = uVar15 | uVar15 >> 2;
          uVar15 = uVar15 | uVar15 >> 4;
          uVar15 = uVar15 | uVar15 >> 8;
          puVar9 = (ulong *)Memory::alloc_static((uVar15 | uVar15 >> 0x10) + 0x11,false);
          if (puVar9 == (ulong *)0x0) {
            _err_print_error("resize","./core/templates/cowdata.h",0x171,
                             "Parameter \"mem_new\" is null.",0,0);
            __n_00 = *(size_t *)(lVar14 + 0x70);
            __src = *(void **)(lVar14 + 0x68);
            if (local_70 != (ulong *)0x0) {
              uVar15 = local_70[-2];
              goto joined_r0x00111c43;
            }
          }
          else {
            local_70 = puVar9 + 2;
            *puVar9 = 1;
            puVar9[1] = uVar3;
            __n_00 = *(size_t *)(lVar14 + 0x70);
            __src = *(void **)(lVar14 + 0x68);
            uVar15 = *puVar9;
joined_r0x00111c43:
            if (1 < uVar15) {
              if (local_70 == (ulong *)0x0) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)invalidInstructionException();
                (*pcVar4)();
              }
              __n = local_70[-1];
              uVar15 = 0x10;
              if (__n != 0) {
                uVar15 = __n - 1 | __n - 1 >> 1;
                uVar15 = uVar15 | uVar15 >> 2;
                uVar15 = uVar15 | uVar15 >> 4;
                uVar15 = uVar15 | uVar15 >> 8;
                uVar15 = uVar15 | uVar15 >> 0x10;
                uVar15 = (uVar15 | uVar15 >> 0x20) + 0x11;
              }
              puVar11 = (undefined8 *)Memory::alloc_static(uVar15,false);
              if (puVar11 == (undefined8 *)0x0) {
                _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                                 "Parameter \"mem_new\" is null.",0,0);
              }
              else {
                *puVar11 = 1;
                puVar11[1] = __n;
                memcpy(puVar11 + 2,local_70,__n);
                CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_70);
                local_70 = puVar11 + 2;
              }
            }
          }
          memcpy(local_70,__src,__n_00);
LAB_0011174e:
          local_d0 = &local_80;
          local_90 = (Object *)0x0;
          pOVar10 = (Object *)*param_2;
          if ((pOVar10 == (Object *)0x0) ||
             (local_68 = pOVar10, cVar7 = RefCounted::reference(), cVar7 == '\0')) {
            _parse_image_bytes_into_image
                      (&local_88,this,(CowData<char32_t> *)&local_68,&local_78,
                       (CowData<char32_t> *)&local_a0,iVar13);
          }
          else {
            _parse_image_bytes_into_image
                      (&local_88,this,(CowData<char32_t> *)&local_68,&local_78,
                       (CowData<char32_t> *)&local_a0,iVar13);
            cVar7 = RefCounted::unreference();
            if ((cVar7 != '\0') && (cVar7 = predelete_handler(pOVar10), cVar7 != '\0')) {
              (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
              Memory::free_static(pOVar10,false);
            }
          }
          pSVar5 = local_88;
          itos((long)&local_68);
          Resource::set_name(pSVar5);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          if (pSVar5 == (String *)0x0) {
LAB_001117dd:
            local_68 = (Object *)0x0;
          }
          else {
            local_68 = (Object *)pSVar5;
            cVar7 = RefCounted::reference();
            if (cVar7 == '\0') goto LAB_001117dd;
          }
          pOVar10 = (Object *)*param_2;
          if ((pOVar10 == (Object *)0x0) ||
             (local_80 = pOVar10, cVar7 = RefCounted::reference(), cVar7 == '\0')) {
            local_80 = (Object *)0x0;
            _parse_image_save_image(this,local_d0,&local_78,(CowData<char32_t> *)&local_90);
          }
          else {
            _parse_image_save_image(this,local_d0,&local_78,(CowData<char32_t> *)&local_90);
            cVar7 = RefCounted::unreference();
            if ((cVar7 != '\0') && (cVar7 = predelete_handler(pOVar10), cVar7 != '\0')) {
              (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
              Memory::free_static(pOVar10,false);
            }
          }
          if ((local_68 != (Object *)0x0) && (cVar7 = RefCounted::unreference(), cVar7 != '\0')) {
            memdelete<Image>((Image *)local_68);
          }
          if ((pSVar5 != (String *)0x0) && (cVar7 = RefCounted::unreference(), cVar7 != '\0')) {
            memdelete<Image>((Image *)pSVar5);
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
          puVar9 = local_70;
        }
        else {
          GLTFState::get_base_path();
          local_80 = (Object *)0x0;
          local_68 = (Object *)0x11802b;
          local_60 = (ulong *)0x9;
          String::parse_latin1((StrRange *)&local_80);
          _get_texture_path((String *)&local_88,(String *)this);
          ResourceLoader::load
                    ((CowData<char32_t> *)&local_68,(String *)&local_88,(StrRange *)&local_80,1);
          local_90 = (Object *)0x0;
          if (local_68 == (Object *)0x0) {
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
LAB_00111da2:
            FileAccess::get_file_as_bytes((String *)&local_68,(CowData<char32_t> *)&local_a0);
            puVar9 = local_60;
            if (local_70 == local_60) {
              if (local_70 != (ulong *)0x0) {
                LOCK();
                puVar1 = local_70 + -2;
                *puVar1 = *puVar1 - 1;
                UNLOCK();
                if (*puVar1 == 0) {
                  local_60 = (ulong *)0x0;
                  Memory::free_static(puVar9 + -2,false);
                }
                goto joined_r0x00111e94;
              }
            }
            else {
              CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_70);
              local_70 = local_60;
joined_r0x00111e94:
              if ((local_70 != (ulong *)0x0) && (local_70[-1] != 0)) {
                Ref<Texture2D>::unref((Ref<Texture2D> *)&local_90);
                CowData<char32_t>::_unref(local_98);
                goto LAB_0011174e;
              }
            }
            local_80 = (Object *)0x0;
            if (local_a0 != (Object *)0x0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)&local_a0);
            }
            local_88 = (String *)0x0;
            local_68 = (Object *)0x123098;
            local_60 = (ulong *)0x66;
            String::parse_latin1((StrRange *)&local_88);
            vformat<int,String>((CowData<char32_t> *)&local_68,(String *)&local_88,iVar13,
                                (StrRange *)&local_80);
            _err_print_error("_parse_images","modules/fbx/fbx_document.cpp",0x43e,
                             (CowData<char32_t> *)&local_68);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
            local_68 = (Object *)0x0;
            Vector<Ref<Texture2D>>::push_back
                      ((Vector<Ref<Texture2D>> *)(*param_2 + 0x380),(CowData<char32_t> *)&local_68);
            local_68 = (Object *)0x0;
            Vector<Ref<Image>>::push_back((Vector<Ref<Image>> *)(*param_2 + 0x3b0));
            pOVar10 = local_90;
            if (local_90 != (Object *)0x0) goto LAB_00111b14;
          }
          else {
            pOVar10 = (Object *)__dynamic_cast(local_68,&Object::typeinfo,&Texture2D::typeinfo,0);
            if (pOVar10 == (Object *)0x0) {
LAB_00111a58:
              cVar7 = RefCounted::unreference();
              pOVar6 = local_68;
              pOVar10 = local_90;
              if ((cVar7 != '\0') &&
                 (cVar7 = predelete_handler(local_68), pOVar10 = local_90, cVar7 != '\0')) {
                (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
                Memory::free_static(pOVar6,false);
              }
            }
            else {
              local_90 = pOVar10;
              cVar7 = RefCounted::reference();
              if (cVar7 == '\0') {
                local_90 = (Object *)0x0;
              }
              pOVar10 = local_90;
              if (local_68 != (Object *)0x0) goto LAB_00111a58;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
            if (pOVar10 == (Object *)0x0) goto LAB_00111da2;
            lVar14 = *param_2;
            local_68 = pOVar10;
            cVar7 = RefCounted::reference();
            if (cVar7 == '\0') {
              local_68 = (Object *)0x0;
              Vector<Ref<Texture2D>>::push_back
                        ((Vector<Ref<Texture2D>> *)(lVar14 + 0x380),(CowData<char32_t> *)&local_68);
            }
            else {
              Vector<Ref<Texture2D>>::push_back((Vector<Ref<Texture2D>> *)(lVar14 + 0x380));
              cVar7 = RefCounted::unreference();
              if ((cVar7 != '\0') && (cVar7 = predelete_handler(pOVar10), cVar7 != '\0')) {
                (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
                Memory::free_static(pOVar10,false);
              }
            }
            lVar14 = *param_2;
            (**(code **)(*(long *)pOVar10 + 0x210))((CowData<char32_t> *)&local_68,pOVar10);
            Vector<Ref<Image>>::push_back((Vector<Ref<Image>> *)(lVar14 + 0x3b0));
            if ((local_68 != (Object *)0x0) && (cVar7 = RefCounted::unreference(), cVar7 != '\0')) {
              memdelete<Image>((Image *)local_68);
            }
LAB_00111b14:
            cVar7 = RefCounted::unreference();
            if ((cVar7 != '\0') && (cVar7 = predelete_handler(pOVar10), cVar7 != '\0')) {
              (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
              Memory::free_static(pOVar10,false);
            }
          }
          CowData<char32_t>::_unref(local_98);
          puVar9 = local_70;
        }
        local_70 = puVar9;
        if (puVar9 != (ulong *)0x0) {
          LOCK();
          puVar1 = puVar9 + -2;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if (*puVar1 == 0) {
            local_70 = (ulong *)0x0;
            Memory::free_static(puVar9 + -2,false);
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
        iVar13 = iVar13 + 1;
        local_c0 = local_c0 + 0x78;
        iVar8 = (int)*(undefined8 *)(lVar2 + 0x548);
      } while (iVar13 < iVar8);
      if (0 < iVar8) {
        iVar13 = 0;
        do {
          local_78 = (Object *)0x0;
          Ref<GLTFTexture>::instantiate<>((Ref<GLTFTexture> *)&local_78);
          pOVar10 = local_78;
          GLTFTexture::set_src_image((int)local_78);
          lVar14 = *param_2;
          local_68 = pOVar10;
          cVar7 = RefCounted::reference();
          if (cVar7 == '\0') {
            local_68 = (Object *)0x0;
            Vector<Ref<GLTFTexture>>::push_back((Vector<Ref<GLTFTexture>> *)(lVar14 + 0x358));
LAB_001120b8:
            cVar7 = RefCounted::unreference();
          }
          else {
            Vector<Ref<GLTFTexture>>::push_back((Vector<Ref<GLTFTexture>> *)(lVar14 + 0x358));
            cVar7 = RefCounted::unreference();
            if ((cVar7 == '\0') || (cVar7 = predelete_handler(pOVar10), cVar7 == '\0'))
            goto LAB_001120b8;
            (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
            Memory::free_static(pOVar10,false);
            cVar7 = RefCounted::unreference();
          }
          if ((cVar7 != '\0') && (cVar7 = predelete_handler(pOVar10), cVar7 != '\0')) {
            (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
            Memory::free_static(pOVar10,false);
          }
          iVar13 = iVar13 + 1;
        } while (iVar13 < *(int *)(lVar2 + 0x548));
      }
    }
    cVar7 = is_print_verbose_enabled();
    if (cVar7 != '\0') {
      itos((long)&local_80);
      operator+((char *)&local_78,(String *)"FBX: Total images: ");
      ::Variant::Variant((Variant *)local_58,(String *)&local_78);
      stringify_variants((Variant *)&local_68);
      __print_line((String *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if (::Variant::needs_deinit[local_58[0]] != '\0') {
        ::Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    }
    uVar12 = 0;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<Ref<GLTFCamera> >::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Ref<GLTFCamera>>::_copy_on_write(CowData<Ref<GLTFCamera>> *this)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  char cVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar7 = 0x10;
  if (lVar1 * 8 != 0) {
    uVar7 = lVar1 * 8 - 1;
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar5 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  lVar8 = 0;
  *puVar5 = 1;
  puVar5[1] = lVar1;
  plVar6 = puVar5 + 2;
  if (lVar1 != 0) {
    do {
      lVar2 = *(long *)this;
      *plVar6 = 0;
      lVar2 = *(long *)(lVar2 + lVar8 * 8);
      if (lVar2 != 0) {
        *plVar6 = lVar2;
        cVar4 = RefCounted::reference();
        if (cVar4 == '\0') {
          *plVar6 = 0;
        }
      }
      lVar8 = lVar8 + 1;
      plVar6 = plVar6 + 1;
    } while (lVar1 != lVar8);
  }
  _unref(this);
  *(undefined8 **)this = puVar5 + 2;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FBXDocument::_parse_cameras(Ref<FBXState>) */

undefined8 __thiscall FBXDocument::_parse_cameras(undefined8 param_1,long *param_2)

{
  long *plVar1;
  double dVar2;
  double dVar3;
  long lVar4;
  undefined8 *puVar5;
  Object *pOVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  int iVar10;
  Resource *this;
  long lVar11;
  long lVar12;
  Resource *pRVar13;
  Object *pOVar14;
  long lVar15;
  Resource *pRVar16;
  long lVar17;
  long in_FS_OFFSET;
  byte bVar18;
  CowData<char32_t> local_70 [8];
  CowData<char32_t> local_68 [8];
  long local_60;
  int local_58 [6];
  long local_40;
  
  bVar18 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = *(long *)(*param_2 + 0x558);
  if (0 < *(int *)(lVar4 + 0x2e8)) {
    lVar17 = 0;
    do {
      pRVar13 = (Resource *)0x0;
      puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x2e0) + lVar17 * 8);
      this = (Resource *)operator_new(600,"");
      pRVar16 = this;
      for (lVar11 = 0x4b; lVar11 != 0; lVar11 = lVar11 + -1) {
        *(undefined8 *)pRVar16 = 0;
        pRVar16 = pRVar16 + (ulong)bVar18 * -0x10 + 8;
      }
      Resource::Resource(this);
      uVar8 = _UNK_0012f518;
      uVar7 = __LC228;
      *(code **)this = ::Variant::Variant;
      this[0x240] = (Resource)0x1;
      *(undefined8 *)(this + 0x244) = uVar7;
      *(undefined8 *)(this + 0x24c) = uVar8;
      postinitialize_handler((Object *)this);
      cVar9 = RefCounted::init_ref();
      if (cVar9 != '\0') {
        cVar9 = RefCounted::reference();
        if (cVar9 != '\0') {
          pRVar13 = this;
        }
        cVar9 = RefCounted::unreference();
        if ((cVar9 != '\0') && (cVar9 = predelete_handler((Object *)this), cVar9 != '\0')) {
          (**(code **)(*(long *)this + 0x140))(this);
          Memory::free_static(this,false);
        }
      }
      String::utf8((char *)&local_60,(int)*puVar5);
      Resource::set_name((String *)pRVar13);
      lVar11 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar11 + -0x10),false);
        }
      }
      iVar10 = *(int *)(puVar5 + 0x10);
      if (iVar10 != 0) {
        *(float *)((String *)pRVar13 + 0x248) = (float)(_LC230 * (double)puVar5[0x19]);
      }
      else {
        *(float *)((String *)pRVar13 + 0x244) = (float)(double)puVar5[0x14] * __LC229;
      }
      dVar2 = (double)puVar5[0x1d];
      ((String *)pRVar13)[0x240] = (String)(iVar10 == 0);
      dVar3 = (double)puVar5[0x1e];
      lVar11 = *param_2;
      if (dVar2 != 0.0) {
        *(float *)((String *)pRVar13 + 0x250) = (float)dVar2;
      }
      if (dVar3 != 0.0) {
        *(float *)((String *)pRVar13 + 0x24c) = (float)dVar3;
      }
      cVar9 = RefCounted::reference();
      pOVar14 = (Object *)0x0;
      if (cVar9 != '\0') {
        pOVar14 = (Object *)pRVar13;
      }
      if (*(long *)(lVar11 + 0x3d8) == 0) {
        lVar15 = 1;
      }
      else {
        lVar15 = *(long *)(*(long *)(lVar11 + 0x3d8) + -8) + 1;
      }
      iVar10 = CowData<Ref<GLTFCamera>>::resize<false>
                         ((CowData<Ref<GLTFCamera>> *)(lVar11 + 0x3d8),lVar15);
      if (iVar10 == 0) {
        if (*(long *)(lVar11 + 0x3d8) != 0) {
          lVar15 = *(long *)(*(long *)(lVar11 + 0x3d8) + -8);
          lVar12 = lVar15 + -1;
          if (lVar12 < 0) goto LAB_00112902;
          CowData<Ref<GLTFCamera>>::_copy_on_write((CowData<Ref<GLTFCamera>> *)(lVar11 + 0x3d8));
          puVar5 = (undefined8 *)(*(long *)(lVar11 + 0x3d8) + lVar12 * 8);
          pOVar6 = (Object *)*puVar5;
          if (pOVar6 == pOVar14) goto LAB_001127b5;
          *puVar5 = pOVar14;
          if (pOVar14 == (Object *)0x0) {
            if (((pOVar6 == (Object *)0x0) || (cVar9 = RefCounted::unreference(), cVar9 == '\0')) ||
               (cVar9 = predelete_handler(pOVar6), cVar9 == '\0')) goto LAB_00112663;
LAB_00112861:
            (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
            Memory::free_static(pOVar6,false);
            goto joined_r0x0011287b;
          }
          cVar9 = RefCounted::reference();
          if (cVar9 == '\0') {
            *puVar5 = 0;
            if (pOVar6 != (Object *)0x0) {
              cVar9 = RefCounted::unreference();
              goto joined_r0x001128aa;
            }
          }
          else if (pOVar6 != (Object *)0x0) {
            cVar9 = RefCounted::unreference();
joined_r0x001128aa:
            if ((cVar9 != '\0') && (cVar9 = predelete_handler(pOVar6), cVar9 != '\0'))
            goto LAB_00112861;
          }
          cVar9 = RefCounted::unreference();
          goto joined_r0x0011265d;
        }
        lVar12 = -1;
        lVar15 = 0;
LAB_00112902:
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar12,lVar15,"p_index","size()","",false
                   ,false);
joined_r0x0011287b:
        if (pOVar14 != (Object *)0x0) goto LAB_001127be;
LAB_00112663:
        cVar9 = RefCounted::unreference();
      }
      else {
        _err_print_error("push_back","./core/templates/vector.h",0x142,
                         "Condition \"err\" is true. Returning: true",0,0);
LAB_001127b5:
        if (pOVar14 == (Object *)0x0) goto LAB_00112663;
LAB_001127be:
        cVar9 = RefCounted::unreference();
joined_r0x0011265d:
        if ((cVar9 == '\0') || (cVar9 = predelete_handler(pOVar14), cVar9 == '\0'))
        goto LAB_00112663;
        (**(code **)(*(long *)pOVar14 + 0x140))(pOVar14);
        Memory::free_static(pOVar14,false);
        cVar9 = RefCounted::unreference();
      }
      if ((cVar9 != '\0') && (cVar9 = predelete_handler((Object *)pRVar13), cVar9 != '\0')) {
        (**(code **)(*(long *)pRVar13 + 0x140))(pRVar13);
        Memory::free_static(pRVar13,false);
      }
      lVar17 = lVar17 + 1;
    } while ((int)lVar17 < *(int *)(lVar4 + 0x2e8));
  }
  cVar9 = is_print_verbose_enabled();
  if (cVar9 != '\0') {
    itos((long)local_70);
    operator+((char *)local_68,(String *)"FBX: Total cameras: ");
    ::Variant::Variant((Variant *)local_58,(String *)local_68);
    stringify_variants((Variant *)&local_60);
    __print_line((String *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (::Variant::needs_deinit[local_58[0]] != '\0') {
      ::Variant::_clear_internal();
    }
    CowData<char32_t>::_unref(local_68);
    CowData<char32_t>::_unref(local_70);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}



/* CowData<Ref<GLTFAnimation> >::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Ref<GLTFAnimation>>::_copy_on_write(CowData<Ref<GLTFAnimation>> *this)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  char cVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar7 = 0x10;
  if (lVar1 * 8 != 0) {
    uVar7 = lVar1 * 8 - 1;
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar5 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  lVar8 = 0;
  *puVar5 = 1;
  puVar5[1] = lVar1;
  plVar6 = puVar5 + 2;
  if (lVar1 != 0) {
    do {
      lVar2 = *(long *)this;
      *plVar6 = 0;
      lVar2 = *(long *)(lVar2 + lVar8 * 8);
      if (lVar2 != 0) {
        *plVar6 = lVar2;
        cVar4 = RefCounted::reference();
        if (cVar4 == '\0') {
          *plVar6 = 0;
        }
      }
      lVar8 = lVar8 + 1;
      plVar6 = plVar6 + 1;
    } while (lVar1 != lVar8);
  }
  _unref(this);
  *(undefined8 **)this = puVar5 + 2;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FBXDocument::_parse_animations(Ref<FBXState>) */

undefined8 __thiscall FBXDocument::_parse_animations(FBXDocument *this,long *param_2)

{
  long *plVar1;
  undefined4 *puVar2;
  double *pdVar3;
  uint *puVar4;
  long lVar5;
  Object *pOVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  ulong uVar11;
  char cVar12;
  int iVar13;
  GLTFAnimation *this_00;
  Variant *pVVar14;
  undefined8 *puVar15;
  HashMap<int,GLTFAnimation::NodeTrack,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GLTFAnimation::NodeTrack>>>
  *this_01;
  undefined8 uVar16;
  long lVar17;
  double *pdVar18;
  undefined8 *puVar19;
  Object *pOVar20;
  long lVar21;
  uint *puVar22;
  undefined4 *puVar23;
  long lVar24;
  undefined8 *puVar25;
  long in_FS_OFFSET;
  byte bVar26;
  String *local_6e0;
  long local_690;
  CowData<char32_t> *local_680;
  Dictionary local_658 [8];
  Dictionary local_650 [8];
  long local_648;
  long local_640;
  undefined8 local_638;
  long local_630;
  undefined8 local_628;
  long local_620;
  long local_618 [20];
  undefined8 local_578;
  undefined8 uStack_570;
  undefined8 local_558;
  undefined8 local_518;
  float local_510;
  undefined8 local_508;
  float local_500;
  int local_4f8 [8];
  int local_4d8 [2];
  undefined8 local_4d0;
  undefined8 uStack_4c8;
  int local_4b8 [2];
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined1 local_248 [520];
  long local_40;
  
  bVar26 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar5 = *(long *)(*param_2 + 0x558);
  if (0 < *(int *)(lVar5 + 0x478)) {
    local_690 = 0;
    do {
      local_680 = (CowData<char32_t> *)local_618;
      puVar15 = *(undefined8 **)(*(long *)(lVar5 + 0x470) + local_690 * 8);
      this_00 = (GLTFAnimation *)operator_new(0x2b8,"");
      GLTFAnimation::GLTFAnimation(this_00);
      postinitialize_handler((Object *)this_00);
      cVar12 = RefCounted::init_ref();
      local_6e0 = (String *)0x0;
      if (cVar12 != '\0') {
        cVar12 = RefCounted::reference();
        local_6e0 = (String *)(GLTFAnimation *)0x0;
        if (cVar12 != '\0') {
          local_6e0 = (String *)this_00;
        }
        cVar12 = RefCounted::unreference();
        if ((cVar12 != '\0') && (cVar12 = predelete_handler((Object *)this_00), cVar12 != '\0')) {
          (**(code **)(*(long *)this_00 + 0x140))(this_00);
          Memory::free_static(this_00,false);
        }
      }
      if (puVar15[1] != 0) {
        String::utf8((char *)&local_640,(int)*puVar15);
        String::to_lower();
        cVar12 = String::begins_with((char *)&local_638);
        if ((((cVar12 != '\0') || (cVar12 = String::ends_with((char *)&local_638), cVar12 != '\0'))
            || (cVar12 = String::begins_with((char *)&local_638), cVar12 != '\0')) ||
           (cVar12 = String::ends_with((char *)&local_638), cVar12 != '\0')) {
          GLTFAnimation::set_loop(SUB81(local_6e0,0));
        }
        local_618[0] = 0;
        if (local_640 != 0) {
          CowData<char32_t>::_ref(local_680,(CowData *)&local_640);
        }
        GLTFAnimation::set_original_name(local_6e0,local_680);
        CowData<char32_t>::_unref(local_680);
        pOVar20 = (Object *)*param_2;
        if ((pOVar20 == (Object *)0x0) ||
           (local_628 = pOVar20, cVar12 = RefCounted::reference(), cVar12 == '\0')) {
          local_628 = (Object *)0x0;
          _gen_unique_animation_name
                    ((FBXDocument *)local_680,this,&local_628,(CowData<char32_t> *)&local_640);
          Resource::set_name(local_6e0);
          CowData<char32_t>::_unref(local_680);
        }
        else {
          _gen_unique_animation_name
                    ((FBXDocument *)local_680,this,&local_628,(CowData<char32_t> *)&local_640);
          Resource::set_name(local_6e0);
          CowData<char32_t>::_unref(local_680);
          cVar12 = RefCounted::unreference();
          if ((cVar12 != '\0') && (cVar12 = predelete_handler(pOVar20), cVar12 != '\0')) {
            (**(code **)(*(long *)pOVar20 + 0x140))(pOVar20);
            Memory::free_static(pOVar20,false);
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_638);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_640);
      }
      Dictionary::Dictionary(local_658);
      ::Variant::Variant((Variant *)local_4b8,(double)puVar15[0x10]);
      ::Variant::Variant((Variant *)local_4d8,"time_begin");
      pVVar14 = (Variant *)Dictionary::operator[]((Variant *)local_658);
      if (pVVar14 != (Variant *)local_4b8) {
        if (::Variant::needs_deinit[*(int *)pVVar14] != '\0') {
          ::Variant::_clear_internal();
        }
        *(undefined4 *)pVVar14 = 0;
        *(int *)pVVar14 = local_4b8[0];
        *(undefined8 *)(pVVar14 + 8) = local_4b0;
        *(undefined8 *)(pVVar14 + 0x10) = uStack_4a8;
        local_4b8[0] = 0;
      }
      if (::Variant::needs_deinit[local_4d8[0]] != '\0') {
        ::Variant::_clear_internal();
      }
      if (::Variant::needs_deinit[local_4b8[0]] != '\0') {
        ::Variant::_clear_internal();
      }
      ::Variant::Variant((Variant *)local_4b8,(double)puVar15[0x11]);
      ::Variant::Variant((Variant *)local_4d8,"time_end");
      pVVar14 = (Variant *)Dictionary::operator[]((Variant *)local_658);
      if (pVVar14 != (Variant *)local_4b8) {
        if (::Variant::needs_deinit[*(int *)pVVar14] != '\0') {
          ::Variant::_clear_internal();
        }
        *(undefined4 *)pVVar14 = 0;
        *(int *)pVVar14 = local_4b8[0];
        *(undefined8 *)(pVVar14 + 8) = local_4b0;
        *(undefined8 *)(pVVar14 + 0x10) = uStack_4a8;
        local_4b8[0] = 0;
      }
      if (::Variant::needs_deinit[local_4d8[0]] != '\0') {
        ::Variant::_clear_internal();
      }
      if (::Variant::needs_deinit[local_4b8[0]] != '\0') {
        ::Variant::_clear_internal();
      }
      ::Variant::Variant((Variant *)local_4b8,local_658);
      StringName::StringName((StringName *)local_680,"GODOT_animation_time_begin_time_end",false);
      GLTFAnimation::set_additional_data(local_6e0,local_680,(Variant *)local_4b8);
      if ((StringName::configured != '\0') && (local_618[0] != 0)) {
        StringName::unref();
      }
      if (::Variant::needs_deinit[local_4b8[0]] != '\0') {
        ::Variant::_clear_internal();
      }
      uVar16 = puVar15[0x14];
      for (lVar17 = 0x20; lVar17 != 0; lVar17 = lVar17 + -1) {
        *(undefined8 *)local_680 = 0;
        local_680 = local_680 + (ulong)bVar26 * -0x10 + 8;
      }
      local_578 = *(undefined8 *)(*param_2 + 0x288);
      local_558 = 0x400;
      uStack_570 = local_578;
      puVar15 = (undefined8 *)ufbx_bake_anim(lVar5,uVar16,local_618,(Variant *)local_4b8);
      if (puVar15 == (undefined8 *)0x0) {
        ufbx_format_error(local_248,0x200,(Variant *)local_4b8);
        _err_print_error("_parse_animations","modules/fbx/fbx_document.cpp",0x56f,
                         "Method/function failed. Returning: FAILED",local_248,0,0);
        ufbx_free_baked_anim(0);
        Dictionary::~Dictionary(local_658);
        cVar12 = RefCounted::unreference();
        if ((cVar12 != '\0') && (cVar12 = predelete_handler((Object *)local_6e0), cVar12 != '\0')) {
          (**(code **)(*(long *)local_6e0 + 0x140))(local_6e0);
          Memory::free_static(local_6e0,false);
        }
        uVar16 = 1;
        goto LAB_00113607;
      }
      puVar23 = (undefined4 *)*puVar15;
      puVar2 = puVar23 + puVar15[1] * 0x10;
      for (; puVar2 != puVar23; puVar23 = puVar23 + 0x10) {
        uVar11 = (ulong)local_628 >> 0x20;
        local_628 = (Object *)CONCAT44((int)uVar11,*puVar23);
        this_01 = (HashMap<int,GLTFAnimation::NodeTrack,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GLTFAnimation::NodeTrack>>>
                   *)GLTFAnimation::get_node_tracks();
        lVar17 = HashMap<int,GLTFAnimation::NodeTrack,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GLTFAnimation::NodeTrack>>>
                 ::operator[](this_01,(int *)&local_628);
        pdVar18 = *(double **)(puVar23 + 4);
        pdVar3 = pdVar18 + *(long *)(puVar23 + 6) * 5;
        for (; pdVar3 != pdVar18; pdVar18 = pdVar18 + 5) {
          Vector<double>::push_back((Vector<double> *)(lVar17 + 8),(double)(float)*pdVar18);
          local_510 = (float)pdVar18[3];
          local_518 = CONCAT44((float)pdVar18[2],(float)pdVar18[1]);
          Vector<Vector3>::push_back(lVar17 + 0x18);
        }
        pdVar18 = *(double **)(puVar23 + 8);
        pdVar3 = pdVar18 + *(long *)(puVar23 + 10) * 6;
        for (; pdVar3 != pdVar18; pdVar18 = pdVar18 + 6) {
          Vector<double>::push_back((Vector<double> *)(lVar17 + 0x30),(double)(float)*pdVar18);
          dVar7 = pdVar18[1];
          dVar8 = pdVar18[2];
          dVar9 = pdVar18[3];
          dVar10 = pdVar18[4];
          if (*(long *)(lVar17 + 0x48) == 0) {
            lVar21 = 1;
          }
          else {
            lVar21 = *(long *)(*(long *)(lVar17 + 0x48) + -8) + 1;
          }
          iVar13 = CowData<Quaternion>::resize<false>((CowData<Quaternion> *)(lVar17 + 0x48),lVar21)
          ;
          if (iVar13 == 0) {
            if (*(long *)(lVar17 + 0x48) == 0) {
              lVar24 = -1;
              lVar21 = 0;
            }
            else {
              lVar21 = *(long *)(*(long *)(lVar17 + 0x48) + -8);
              lVar24 = lVar21 + -1;
              if (-1 < lVar24) {
                CowData<Quaternion>::_copy_on_write((CowData<Quaternion> *)(lVar17 + 0x48));
                puVar25 = (undefined8 *)(lVar24 * 0x10 + *(long *)(lVar17 + 0x48));
                *puVar25 = CONCAT44((float)dVar8,(float)dVar7);
                puVar25[1] = CONCAT44((float)dVar10,(float)dVar9);
                goto LAB_00112fa6;
              }
            }
            _err_print_index_error
                      ("set","./core/templates/cowdata.h",0xcf,lVar24,lVar21,"p_index","size()","",
                       false,false);
          }
          else {
            _err_print_error("push_back","./core/templates/vector.h",0x142,
                             "Condition \"err\" is true. Returning: true");
          }
LAB_00112fa6:
        }
        pdVar18 = *(double **)(puVar23 + 0xc);
        pdVar3 = pdVar18 + *(long *)(puVar23 + 0xe) * 5;
        for (; pdVar3 != pdVar18; pdVar18 = pdVar18 + 5) {
          Vector<double>::push_back((Vector<double> *)(lVar17 + 0x58),(double)(float)*pdVar18);
          local_500 = (float)pdVar18[3];
          local_508 = CONCAT44((float)pdVar18[2],(float)pdVar18[1]);
          Vector<Vector3>::push_back(lVar17 + 0x68);
        }
      }
      Dictionary::Dictionary(local_650);
      puVar22 = (uint *)puVar15[2];
      puVar4 = puVar22 + puVar15[3] * 6;
      for (; puVar4 != puVar22; puVar22 = puVar22 + 6) {
        puVar19 = *(undefined8 **)(puVar22 + 2);
        lVar17 = *(long *)(*(long *)(lVar5 + 0x550) + (ulong)*puVar22 * 8);
        puVar25 = puVar19 + *(long *)(puVar22 + 4) * 5;
        for (; puVar25 != puVar19; puVar19 = puVar19 + 5) {
          String::utf8((char *)&local_648,(int)*puVar19);
          if ((*(int *)(lVar17 + 0x48) == 0x14) &&
             (cVar12 = String::operator==((String *)&local_648,"DeformPercent"), cVar12 != '\0')) {
            lVar21 = ufbx_as_blend_channel(lVar17);
            pdVar18 = (double *)puVar19[3];
            iVar13 = *(int *)(lVar21 + 0x34);
            local_630 = 0;
            local_620 = 0;
            pdVar3 = pdVar18 + puVar19[4] * 5;
            for (; pdVar3 != pdVar18; pdVar18 = pdVar18 + 5) {
              Vector<float>::push_back((Vector<float> *)&local_638,(float)*pdVar18);
              Vector<float>::push_back((Vector<float> *)&local_628,(float)(pdVar18[1] / __LC238));
            }
            Dictionary::Dictionary((Dictionary *)&local_640);
            ::Variant::Variant((Variant *)local_4d8,(Vector *)&local_638);
            ::Variant::Variant((Variant *)local_4f8,"times");
            pVVar14 = (Variant *)Dictionary::operator[]((Variant *)&local_640);
            if (pVVar14 != (Variant *)local_4d8) {
              if (::Variant::needs_deinit[*(int *)pVVar14] != '\0') {
                ::Variant::_clear_internal();
              }
              *(undefined4 *)pVVar14 = 0;
              *(int *)pVVar14 = local_4d8[0];
              *(undefined8 *)(pVVar14 + 8) = local_4d0;
              *(undefined8 *)(pVVar14 + 0x10) = uStack_4c8;
              local_4d8[0] = 0;
            }
            if (::Variant::needs_deinit[local_4f8[0]] != '\0') {
              ::Variant::_clear_internal();
            }
            if (::Variant::needs_deinit[local_4d8[0]] != '\0') {
              ::Variant::_clear_internal();
            }
            ::Variant::Variant((Variant *)local_4d8,(Vector *)&local_628);
            ::Variant::Variant((Variant *)local_4f8,"values");
            pVVar14 = (Variant *)Dictionary::operator[]((Variant *)&local_640);
            if (pVVar14 != (Variant *)local_4d8) {
              if (::Variant::needs_deinit[*(int *)pVVar14] != '\0') {
                ::Variant::_clear_internal();
              }
              *(undefined4 *)pVVar14 = 0;
              *(int *)pVVar14 = local_4d8[0];
              *(undefined8 *)(pVVar14 + 8) = local_4d0;
              *(undefined8 *)(pVVar14 + 0x10) = uStack_4c8;
              local_4d8[0] = 0;
            }
            if (::Variant::needs_deinit[local_4f8[0]] != '\0') {
              ::Variant::_clear_internal();
            }
            if (::Variant::needs_deinit[local_4d8[0]] != '\0') {
              ::Variant::_clear_internal();
            }
            ::Variant::Variant((Variant *)local_4d8,(Dictionary *)&local_640);
            ::Variant::Variant((Variant *)local_4f8,iVar13);
            pVVar14 = (Variant *)Dictionary::operator[]((Variant *)local_650);
            if (pVVar14 != (Variant *)local_4d8) {
              if (::Variant::needs_deinit[*(int *)pVVar14] != '\0') {
                ::Variant::_clear_internal();
              }
              *(undefined4 *)pVVar14 = 0;
              *(int *)pVVar14 = local_4d8[0];
              *(undefined8 *)(pVVar14 + 8) = local_4d0;
              *(undefined8 *)(pVVar14 + 0x10) = uStack_4c8;
              local_4d8[0] = 0;
            }
            if (::Variant::needs_deinit[local_4f8[0]] != '\0') {
              ::Variant::_clear_internal();
            }
            if (::Variant::needs_deinit[local_4d8[0]] != '\0') {
              ::Variant::_clear_internal();
            }
            Dictionary::~Dictionary((Dictionary *)&local_640);
            lVar21 = local_620;
            if (local_620 != 0) {
              LOCK();
              plVar1 = (long *)(local_620 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_620 = 0;
                Memory::free_static((void *)(lVar21 + -0x10),false);
              }
            }
            lVar21 = local_630;
            if (local_630 != 0) {
              LOCK();
              plVar1 = (long *)(local_630 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_630 = 0;
                Memory::free_static((void *)(lVar21 + -0x10),false);
              }
            }
          }
          lVar21 = local_648;
          if (local_648 != 0) {
            LOCK();
            plVar1 = (long *)(local_648 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_648 = 0;
              Memory::free_static((void *)(lVar21 + -0x10),false);
            }
          }
        }
      }
      ::Variant::Variant((Variant *)local_4d8,local_650);
      StringName::StringName((StringName *)&local_628,"GODOT_blend_shape_animations",false);
      GLTFAnimation::set_additional_data(local_6e0,(Vector<float> *)&local_628,(Variant *)local_4d8)
      ;
      if ((StringName::configured != '\0') && (local_628 != (Object *)0x0)) {
        StringName::unref();
      }
      if (::Variant::needs_deinit[local_4d8[0]] == '\0') {
        lVar17 = *param_2;
      }
      else {
        ::Variant::_clear_internal();
        lVar17 = *param_2;
      }
      cVar12 = RefCounted::reference();
      pOVar20 = (Object *)0x0;
      if (cVar12 != '\0') {
        pOVar20 = (Object *)local_6e0;
      }
      if (*(long *)(lVar17 + 0x458) == 0) {
        lVar21 = 1;
      }
      else {
        lVar21 = *(long *)(*(long *)(lVar17 + 0x458) + -8) + 1;
      }
      iVar13 = CowData<Ref<GLTFAnimation>>::resize<false>
                         ((CowData<Ref<GLTFAnimation>> *)(lVar17 + 0x458),lVar21);
      if (iVar13 == 0) {
        if (*(long *)(lVar17 + 0x458) == 0) {
          lVar24 = -1;
          lVar21 = 0;
LAB_00113ace:
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,lVar24,lVar21,"p_index","size()","",
                     false,false);
          goto joined_r0x001136e2;
        }
        lVar21 = *(long *)(*(long *)(lVar17 + 0x458) + -8);
        lVar24 = lVar21 + -1;
        if (lVar24 < 0) goto LAB_00113ace;
        CowData<Ref<GLTFAnimation>>::_copy_on_write((CowData<Ref<GLTFAnimation>> *)(lVar17 + 0x458))
        ;
        puVar25 = (undefined8 *)(*(long *)(lVar17 + 0x458) + lVar24 * 8);
        pOVar6 = (Object *)*puVar25;
        if (pOVar6 == pOVar20) goto joined_r0x001136e2;
        *puVar25 = pOVar20;
        if (pOVar20 != (Object *)0x0) {
          cVar12 = RefCounted::reference();
          if (cVar12 == '\0') {
            *puVar25 = 0;
            if (pOVar6 != (Object *)0x0) {
              cVar12 = RefCounted::unreference();
              goto joined_r0x00113a2a;
            }
          }
          else if (pOVar6 != (Object *)0x0) {
            cVar12 = RefCounted::unreference();
joined_r0x00113a2a:
            if ((cVar12 != '\0') && (cVar12 = predelete_handler(pOVar6), cVar12 != '\0'))
            goto LAB_00113875;
          }
          cVar12 = RefCounted::unreference();
          goto joined_r0x001135a3;
        }
        if (((pOVar6 != (Object *)0x0) && (cVar12 = RefCounted::unreference(), cVar12 != '\0')) &&
           (cVar12 = predelete_handler(pOVar6), cVar12 != '\0')) {
LAB_00113875:
          (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
          Memory::free_static(pOVar6,false);
          goto joined_r0x001136e2;
        }
      }
      else {
        _err_print_error("push_back","./core/templates/vector.h",0x142,
                         "Condition \"err\" is true. Returning: true",0);
joined_r0x001136e2:
        if (pOVar20 != (Object *)0x0) {
          cVar12 = RefCounted::unreference();
joined_r0x001135a3:
          if ((cVar12 != '\0') && (cVar12 = predelete_handler(pOVar20), cVar12 != '\0')) {
            (**(code **)(*(long *)pOVar20 + 0x140))(pOVar20);
            Memory::free_static(pOVar20,false);
          }
        }
      }
      Dictionary::~Dictionary(local_650);
      ufbx_free_baked_anim(puVar15);
      Dictionary::~Dictionary(local_658);
      cVar12 = RefCounted::unreference();
      if ((cVar12 != '\0') && (cVar12 = predelete_handler((Object *)local_6e0), cVar12 != '\0')) {
        (**(code **)(*(long *)local_6e0 + 0x140))(local_6e0);
        Memory::free_static(local_6e0,false);
      }
      local_690 = local_690 + 1;
    } while ((int)local_690 < *(int *)(lVar5 + 0x478));
  }
  cVar12 = is_print_verbose_enabled();
  if (cVar12 != '\0') {
    local_638 = 0;
    String::parse_latin1((String *)&local_638,"\'.");
    itos((long)&local_648);
    operator+((char *)&local_640,(String *)"FBX: Total animations \'");
    String::operator+((String *)&local_628,(String *)&local_640);
    ::Variant::Variant((Variant *)local_4b8,(String *)&local_628);
    stringify_variants((Variant *)local_618);
    __print_line((String *)local_618);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_618);
    if (::Variant::needs_deinit[local_4b8[0]] != '\0') {
      ::Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_628);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_640);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_648);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_638);
  }
  uVar16 = 0;
LAB_00113607:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar16;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FBXDocument::_process_mesh_instances(Ref<FBXState>, Node*) */

void FBXDocument::_process_mesh_instances(undefined8 param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  code *pcVar12;
  char cVar13;
  uint uVar14;
  Node *pNVar15;
  Node *pNVar16;
  undefined8 *puVar17;
  ulong uVar18;
  long *plVar19;
  uint uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  Object *pOVar24;
  uint uVar25;
  ulong uVar26;
  long *plVar27;
  StringName *pSVar28;
  ulong uVar29;
  uint uVar30;
  uint uVar31;
  ulong uVar32;
  long lVar33;
  long in_FS_OFFSET;
  Object *local_98;
  undefined8 local_90;
  long local_88;
  uint local_80 [2];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  long local_40;
  
  lVar21 = *param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar33 = *(long *)(lVar21 + 0x2a8);
  if (lVar33 != 0) {
    uVar26 = 0;
    do {
      while( true ) {
        if (*(long *)(lVar33 + -8) <= (long)uVar26) goto LAB_00114108;
        pOVar24 = *(Object **)(lVar33 + uVar26 * 8);
        if (pOVar24 != (Object *)0x0) break;
LAB_001141ec:
        lVar33 = *(long *)(lVar21 + 0x2a8);
        uVar26 = uVar26 + 1;
        if (lVar33 == 0) goto LAB_00114108;
      }
      local_98 = pOVar24;
      cVar13 = RefCounted::reference();
      if (cVar13 == '\0') {
LAB_001141e4:
        lVar21 = *param_2;
        goto LAB_001141ec;
      }
      iVar1 = *(int *)(pOVar24 + 0x288);
      if ((iVar1 < 0) || (*(int *)(pOVar24 + 0x280) < 0)) {
LAB_001141d8:
        cVar13 = RefCounted::unreference();
        if ((cVar13 != '\0') && (cVar13 = predelete_handler(pOVar24), cVar13 != '\0')) {
          (**(code **)(*(long *)pOVar24 + 0x140))(pOVar24);
          Memory::free_static(pOVar24,false);
        }
        goto LAB_001141e4;
      }
      uVar25 = (uint)uVar26;
      lVar21 = *param_2;
      lVar33 = *(long *)(lVar21 + 0x498);
      if ((lVar33 != 0) && (*(int *)(lVar21 + 0x4bc) != 0)) {
        uVar32 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar21 + 0x4b8) * 4)
                         );
        uVar29 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar21 + 0x4b8) * 8);
        uVar14 = ((uint)(uVar26 >> 0x10) & 0xffff ^ uVar25) * -0x7a143595;
        uVar14 = (uVar14 ^ uVar14 >> 0xd) * -0x3d4d51cb;
        uVar31 = uVar14 ^ uVar14 >> 0x10;
        if (uVar14 == uVar14 >> 0x10) {
          uVar31 = 1;
          uVar18 = uVar29;
        }
        else {
          uVar18 = uVar31 * uVar29;
        }
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar32;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar18;
        lVar22 = SUB168(auVar4 * auVar8,8);
        uVar14 = *(uint *)(*(long *)(lVar21 + 0x4a0) + lVar22 * 4);
        uVar20 = SUB164(auVar4 * auVar8,8);
        if (uVar14 != 0) {
          uVar30 = 0;
          while ((uVar14 != uVar31 || (*(uint *)(*(long *)(lVar33 + lVar22 * 8) + 0x10) != uVar25)))
          {
            uVar30 = uVar30 + 1;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (uVar20 + 1) * uVar29;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = uVar32;
            lVar22 = SUB168(auVar5 * auVar9,8);
            uVar14 = *(uint *)(*(long *)(lVar21 + 0x4a0) + lVar22 * 4);
            uVar20 = SUB164(auVar5 * auVar9,8);
            if ((uVar14 == 0) ||
               (auVar6._8_8_ = 0, auVar6._0_8_ = uVar14 * uVar29, auVar10._8_8_ = 0,
               auVar10._0_8_ = uVar32, auVar7._8_8_ = 0,
               auVar7._0_8_ = ((*(uint *)(hash_table_size_primes +
                                         (ulong)*(uint *)(lVar21 + 0x4b8) * 4) + uVar20) -
                              SUB164(auVar6 * auVar10,8)) * uVar29, auVar11._8_8_ = 0,
               auVar11._0_8_ = uVar32, SUB164(auVar7 * auVar11,8) < uVar30)) goto LAB_0011413d;
          }
          lVar33 = *(long *)(lVar33 + (ulong)uVar20 * 8);
          if (lVar33 != 0) {
            pNVar16 = *(Node **)(lVar33 + 0x18);
            goto LAB_00113ed2;
          }
        }
      }
LAB_0011413d:
      local_80[0] = 0;
      cVar13 = HashMap<int,Node*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Node*>>>
               ::_lookup_pos((HashMap<int,Node*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Node*>>>
                              *)(lVar21 + 0x460),(int *)(uVar26 & 0xffffffff),local_80);
      if ((cVar13 == '\0') ||
         (lVar33 = *(long *)(*(long *)(lVar21 + 0x468) + (ulong)local_80[0] * 8), lVar33 == 0)) {
        local_88 = 0;
        String::parse_latin1((String *)&local_88,"Unable to find node %d");
        vformat<int>((String *)local_80,(int)(String *)&local_88);
        _err_print_error("_process_mesh_instances","modules/fbx/fbx_document.cpp",0x7cd,
                         "Condition \"!si_element\" is true. Continuing.",(String *)local_80,0,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        goto LAB_001141d8;
      }
      plVar19 = *(long **)(lVar33 + 0x18);
      if ((plVar19 == (long *)0x0) ||
         (pNVar16 = (Node *)__dynamic_cast(plVar19,&Object::typeinfo,
                                           &ImporterMeshInstance3D::typeinfo,0),
         pNVar16 == (Node *)0x0)) {
        if (plVar19[1] == 0) {
          pSVar28 = (StringName *)plVar19[0x23];
          if (pSVar28 == (StringName *)0x0) {
            pSVar28 = (StringName *)(**(code **)(*plVar19 + 0x40))(plVar19);
          }
        }
        else {
          pSVar28 = (StringName *)(plVar19[1] + 0x20);
        }
        StringName::StringName((StringName *)&local_88,pSVar28);
        local_90 = 0;
        String::parse_latin1
                  ((String *)&local_90,"Unable to cast node %d of type %s to ImporterMeshInstance3D"
                  );
        vformat<int,StringName>
                  ((String *)local_80,(String *)&local_90,uVar25,(StringName *)&local_88);
        _err_print_error("_process_mesh_instances","modules/fbx/fbx_document.cpp",1999,
                         "Condition \"mi == nullptr\" is true. Continuing.",(String *)local_80,0,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
        if ((StringName::configured != '\0') && (local_88 != 0)) {
          StringName::unref();
        }
        goto LAB_001141d8;
      }
LAB_00113ed2:
      lVar33 = (long)iVar1;
      if (((*(long *)(lVar21 + 0x3c8) == 0) || (*(long *)(*(long *)(lVar21 + 0x3c8) + -8) <= lVar33)
          ) || (CowData<Ref<GLTFSkin>>::_copy_on_write((CowData<Ref<GLTFSkin>> *)(lVar21 + 0x3c8)),
               *(int *)(*(long *)(*(long *)(lVar21 + 0x3c8) + lVar33 * 8) + 0x298) < 0))
      goto LAB_001141d8;
      lVar23 = (long)*(int *)(pOVar24 + 0x288);
      lVar21 = *param_2;
      lVar22 = *(long *)(lVar21 + 0x3c8);
      if (lVar23 < 0) {
LAB_00114234:
        if (lVar22 != 0) {
LAB_0011423d:
          lVar33 = lVar23;
          lVar21 = *(long *)(lVar22 + -8);
          goto LAB_0011425f;
        }
LAB_0011437f:
        lVar33 = lVar23;
        lVar21 = 0;
LAB_0011425f:
        _err_print_index_error
                  ("operator[]","./core/templates/vector.h",0x38,lVar33,lVar21,"p_index",
                   "((Vector<T> *)(this))->_cowdata.size()","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar12 = (code *)invalidInstructionException();
        (*pcVar12)();
      }
      if (lVar22 == 0) goto LAB_0011437f;
      if (*(long *)(lVar22 + -8) <= lVar23) goto LAB_0011423d;
      CowData<Ref<GLTFSkin>>::_copy_on_write((CowData<Ref<GLTFSkin>> *)(lVar21 + 0x3c8));
      lVar2 = *param_2;
      lVar23 = (long)*(int *)(*(long *)(*(long *)(lVar21 + 0x3c8) + lVar23 * 8) + 0x298);
      if (lVar23 < 0) {
        lVar22 = *(long *)(lVar2 + 0x448);
        goto LAB_00114234;
      }
      lVar22 = *(long *)(lVar2 + 0x448);
      if (lVar22 == 0) goto LAB_0011437f;
      if (*(long *)(lVar22 + -8) <= lVar23) goto LAB_0011423d;
      if (*(ulong *)(lVar22 + -0x10) < 2) {
LAB_00113fa6:
        plVar19 = *(long **)(lVar2 + 0x448);
      }
      else {
        if (*(long *)(lVar2 + 0x448) == 0) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)invalidInstructionException();
          (*pcVar12)();
        }
        lVar21 = *(long *)(*(long *)(lVar2 + 0x448) + -8);
        uVar29 = 0x10;
        if (lVar21 * 8 != 0) {
          uVar29 = lVar21 * 8 - 1;
          uVar29 = uVar29 | uVar29 >> 1;
          uVar29 = uVar29 | uVar29 >> 2;
          uVar29 = uVar29 | uVar29 >> 4;
          uVar29 = uVar29 | uVar29 >> 8;
          uVar29 = uVar29 | uVar29 >> 0x10;
          uVar29 = (uVar29 | uVar29 >> 0x20) + 0x11;
        }
        puVar17 = (undefined8 *)Memory::alloc_static(uVar29,false);
        if (puVar17 == (undefined8 *)0x0) {
          _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                           "Parameter \"mem_new\" is null.");
          goto LAB_00113fa6;
        }
        plVar19 = puVar17 + 2;
        lVar22 = 0;
        *puVar17 = 1;
        puVar17[1] = lVar21;
        plVar27 = plVar19;
        if (lVar21 != 0) {
          do {
            lVar3 = *(long *)(lVar2 + 0x448);
            *plVar27 = 0;
            lVar3 = *(long *)(lVar3 + lVar22 * 8);
            if (lVar3 != 0) {
              *plVar27 = lVar3;
              cVar13 = RefCounted::reference();
              if (cVar13 == '\0') {
                *plVar27 = 0;
              }
            }
            lVar22 = lVar22 + 1;
            plVar27 = plVar27 + 1;
          } while (lVar21 != lVar22);
        }
        CowData<Ref<GLTFSkeleton>>::_unref((CowData<Ref<GLTFSkeleton>> *)(lVar2 + 0x448));
        *(long **)(lVar2 + 0x448) = plVar19;
      }
      pOVar24 = (Object *)plVar19[lVar23];
      if (pOVar24 == (Object *)0x0) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)invalidInstructionException();
        (*pcVar12)();
      }
      cVar13 = RefCounted::reference();
      if (cVar13 == '\0') {
        pOVar24 = (Object *)0x0;
      }
      lVar21 = *(long *)(pOVar24 + 0x260);
      if (lVar21 == 0) {
        local_88 = 0;
        String::parse_latin1((String *)&local_88,"Unable to find Skeleton for node %d skin %d");
        vformat<int,int>((String *)local_80,(int)(String *)&local_88,uVar25);
        _err_print_error("_process_mesh_instances","modules/fbx/fbx_document.cpp",0x7df,
                         "Condition \"skeleton == nullptr\" is true. Continuing.",(String *)local_80
                         ,0,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        cVar13 = RefCounted::unreference();
        if ((cVar13 != '\0') && (cVar13 = predelete_handler(pOVar24), cVar13 != '\0')) {
          (**(code **)(*(long *)pOVar24 + 0x140))(pOVar24);
          Memory::free_static(pOVar24,false);
        }
        pOVar24 = local_98;
        if (local_98 == (Object *)0x0) goto LAB_001141e4;
        goto LAB_001141d8;
      }
      pNVar15 = (Node *)Node::get_parent();
      Node::remove_child(pNVar15);
      Node::set_owner(pNVar16);
      Node::add_child(lVar21,pNVar16,1);
      Node::get_owner();
      Node::set_owner(pNVar16);
      lVar21 = *(long *)(*param_2 + 0x3c8);
      if (lVar21 == 0) {
        lVar21 = 0;
        goto LAB_0011425f;
      }
      lVar21 = *(long *)(lVar21 + -8);
      if (lVar21 <= lVar33) goto LAB_0011425f;
      CowData<Ref<GLTFSkin>>::_copy_on_write((CowData<Ref<GLTFSkin>> *)(*param_2 + 0x3c8));
      ImporterMeshInstance3D::set_skin(pNVar16);
      Node::get_path_to((Node *)local_80,SUB81(pNVar16,0));
      ImporterMeshInstance3D::set_skeleton_path((NodePath *)pNVar16);
      NodePath::~NodePath((NodePath *)local_80);
      local_58 = 0x3f800000;
      local_54 = 0;
      local_4c = 0;
      local_78 = ZEXT416(_LC78);
      local_68 = ZEXT416(_LC78);
      Node3D::set_transform((Transform3D *)pNVar16);
      cVar13 = RefCounted::unreference();
      if ((cVar13 != '\0') && (cVar13 = predelete_handler(pOVar24), cVar13 != '\0')) {
        (**(code **)(*(long *)pOVar24 + 0x140))(pOVar24);
        Memory::free_static(pOVar24,false);
      }
      uVar26 = uVar26 + 1;
      Ref<GLTFNode>::unref((Ref<GLTFNode> *)&local_98);
      lVar21 = *param_2;
      lVar33 = *(long *)(lVar21 + 0x2a8);
    } while (lVar33 != 0);
  }
LAB_00114108:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* FBXDocument::generate_scene(Ref<GLTFState>, float, bool, bool) */

long __thiscall
FBXDocument::generate_scene
          (float param_1,FBXDocument *this,long *param_3,undefined1 param_4,undefined1 param_5)

{
  char cVar1;
  Object *pOVar2;
  long lVar3;
  long lVar4;
  AnimationPlayer *this_00;
  ulong uVar5;
  long in_FS_OFFSET;
  Object *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_3 != 0) {
    pOVar2 = (Object *)__dynamic_cast(*param_3,&Object::typeinfo,&FBXState::typeinfo);
    if (pOVar2 != (Object *)0x0) {
      cVar1 = RefCounted::reference();
      if (cVar1 != '\0') {
        if (*(long *)(pOVar2 + 0x350) == 0) {
          lVar3 = 0;
LAB_001149a3:
          _err_print_index_error
                    ("generate_scene","modules/fbx/fbx_document.cpp",0x847,0,lVar3,"0",
                     "state->root_nodes.size()","",false,false);
LAB_00114905:
          lVar3 = 0;
        }
        else {
          lVar3 = *(long *)(*(long *)(pOVar2 + 0x350) + -8);
          if (lVar3 < 1) goto LAB_001149a3;
          *(double *)(*param_3 + 0x288) = (double)param_1;
          CowData<int>::_copy_on_write((CowData<int> *)(pOVar2 + 0x350));
          lVar3 = GLTFState::get_scene_node((int)pOVar2);
          if (lVar3 == 0) {
LAB_001148e0:
            _err_print_error("generate_scene","modules/fbx/fbx_document.cpp",0x84f,
                             "Parameter \"root\" is null.",0,0);
            goto LAB_00114905;
          }
          lVar4 = Node::get_owner();
          if (lVar4 != 0) {
            lVar4 = Node::get_owner();
            if (lVar3 != lVar4) {
              lVar3 = Node::get_owner();
              if (lVar3 == 0) goto LAB_001148e0;
            }
          }
          local_48 = pOVar2;
          cVar1 = RefCounted::reference();
          if (cVar1 == '\0') {
            local_48 = (Object *)0x0;
            _process_mesh_instances(this,&local_48,lVar3);
          }
          else {
            _process_mesh_instances(this,&local_48,lVar3);
            cVar1 = RefCounted::unreference();
            if (cVar1 != '\0') {
              cVar1 = predelete_handler(pOVar2);
              if (cVar1 != '\0') {
                (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
                Memory::free_static(pOVar2,false);
              }
            }
          }
          cVar1 = GLTFState::get_create_animations();
          if (((cVar1 != '\0') && (*(long *)(pOVar2 + 0x458) != 0)) &&
             (*(long *)(*(long *)(pOVar2 + 0x458) + -8) != 0)) {
            this_00 = (AnimationPlayer *)operator_new(0x6b0,"");
            AnimationPlayer::AnimationPlayer(this_00);
            postinitialize_handler((Object *)this_00);
            Node::add_child(lVar3,this_00,1,0);
            Node::set_owner((Node *)this_00);
            lVar4 = *(long *)(pOVar2 + 0x458);
            if (lVar4 != 0) {
              uVar5 = 0;
              do {
                if (*(long *)(lVar4 + -8) <= (long)uVar5) break;
                local_48 = pOVar2;
                cVar1 = RefCounted::reference();
                if (cVar1 == '\0') {
                  local_48 = (Object *)0x0;
                  _import_animation(this,&local_48,this_00,uVar5 & 0xffffffff,param_4,param_5);
                }
                else {
                  _import_animation(this,&local_48,this_00,uVar5 & 0xffffffff,param_4,param_5);
                  cVar1 = RefCounted::unreference();
                  if (cVar1 != '\0') {
                    cVar1 = predelete_handler(pOVar2);
                    if (cVar1 != '\0') {
                      (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
                      Memory::free_static(pOVar2,false);
                    }
                  }
                }
                lVar4 = *(long *)(pOVar2 + 0x458);
                uVar5 = uVar5 + 1;
              } while (lVar4 != 0);
            }
          }
        }
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar2);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            Memory::free_static(pOVar2,false);
          }
        }
        goto LAB_001146ab;
      }
    }
  }
  lVar3 = 0;
  _err_print_error("generate_scene","modules/fbx/fbx_document.cpp",0x846,
                   "Condition \"state.is_null()\" is true. Returning: nullptr",0,0);
LAB_001146ab:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<Ref<GLTFLight> >::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Ref<GLTFLight>>::_copy_on_write(CowData<Ref<GLTFLight>> *this)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  char cVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar7 = 0x10;
  if (lVar1 * 8 != 0) {
    uVar7 = lVar1 * 8 - 1;
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar5 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  lVar8 = 0;
  *puVar5 = 1;
  puVar5[1] = lVar1;
  plVar6 = puVar5 + 2;
  if (lVar1 != 0) {
    do {
      lVar2 = *(long *)this;
      *plVar6 = 0;
      lVar2 = *(long *)(lVar2 + lVar8 * 8);
      if (lVar2 != 0) {
        *plVar6 = lVar2;
        cVar4 = RefCounted::reference();
        if (cVar4 == '\0') {
          *plVar6 = 0;
        }
      }
      lVar8 = lVar8 + 1;
      plVar6 = plVar6 + 1;
    } while (lVar1 != lVar8);
  }
  _unref(this);
  *(undefined8 **)this = puVar5 + 2;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FBXDocument::_parse_lights(Ref<FBXState>) */

undefined8 __thiscall FBXDocument::_parse_lights(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  Object *pOVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  int iVar8;
  Resource *this;
  Variant *pVVar9;
  long lVar10;
  long lVar11;
  Resource *pRVar12;
  char *pcVar13;
  long lVar14;
  Resource *pRVar15;
  Object *pOVar16;
  long in_FS_OFFSET;
  byte bVar17;
  ulong local_c0;
  CowData<char32_t> local_98 [8];
  undefined8 local_90;
  char *local_88;
  undefined8 local_80;
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  bVar17 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = *(long *)(*param_2 + 0x558);
  if (*(long *)(lVar1 + 0x2d8) != 0) {
    local_c0 = 0;
    do {
      pRVar12 = (Resource *)0x0;
      puVar2 = *(undefined8 **)(*(long *)(lVar1 + 0x2d0) + local_c0 * 8);
      this = (Resource *)operator_new(0x278,"");
      pRVar15 = this;
      for (lVar10 = 0x4f; lVar10 != 0; lVar10 = lVar10 + -1) {
        *(undefined8 *)pRVar15 = 0;
        pRVar15 = pRVar15 + (ulong)bVar17 * -0x10 + 8;
      }
      Resource::Resource(this);
      uVar6 = _UNK_0012f508;
      uVar5 = _LC184;
      *(undefined4 *)(this + 0x250) = 0x3f800000;
      *(undefined ***)this = &PTR__initialize_classv_0012dcc0;
      uVar4 = _LC254;
      *(undefined8 *)(this + 600) = 0;
      *(undefined8 *)(this + 0x260) = uVar4;
      *(undefined4 *)(this + 0x268) = 0x3f490fdb;
      *(undefined8 *)(this + 0x240) = uVar5;
      *(undefined8 *)(this + 0x248) = uVar6;
      Dictionary::Dictionary((Dictionary *)(this + 0x270));
      postinitialize_handler((Object *)this);
      cVar7 = RefCounted::init_ref();
      if (cVar7 != '\0') {
        cVar7 = RefCounted::reference();
        if (cVar7 != '\0') {
          pRVar12 = this;
        }
        cVar7 = RefCounted::unreference();
        if ((cVar7 != '\0') && (cVar7 = predelete_handler((Object *)this), cVar7 != '\0')) {
          (**(code **)(*(long *)this + 0x140))(this);
          Memory::free_static(this,false);
        }
      }
      String::utf8((char *)&local_88,(int)*puVar2);
      Resource::set_name((String *)pRVar12);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      GLTFLight::set_color
                (CONCAT44((float)(double)puVar2[0x11],(float)(double)puVar2[0x10]),
                 (ulong)(uint)(float)(double)puVar2[0x12] | 0x3f80000000000000,pRVar12);
      GLTFLight::set_intensity((float)(double)puVar2[0x13]);
      switch(*(undefined4 *)(puVar2 + 0x17)) {
      case 0:
        local_80 = 5;
        local_88 = "point";
        break;
      case 1:
        local_80 = 0xb;
        local_88 = "directional";
        break;
      case 2:
        local_80 = 4;
        local_88 = "spot";
        break;
      case 3:
        local_80 = 4;
        local_88 = "area";
        break;
      case 4:
        local_80 = 6;
        local_88 = "volume";
        break;
      default:
        local_88 = "unknown";
        local_80 = 7;
      }
      local_90 = 0;
      String::parse_latin1((StrRange *)&local_90);
      GLTFLight::set_light_type(pRVar12,(StrRange *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      Dictionary::Dictionary((Dictionary *)&local_90);
      ::Variant::Variant((Variant *)local_58,*(bool *)((long)puVar2 + 0xd9));
      ::Variant::Variant((Variant *)local_78,"shadow");
      pVVar9 = (Variant *)Dictionary::operator[]((Variant *)&local_90);
      if (pVVar9 != (Variant *)local_58) {
        if (::Variant::needs_deinit[*(int *)pVVar9] != '\0') {
          ::Variant::_clear_internal();
        }
        *(undefined4 *)pVVar9 = 0;
        *(int *)pVVar9 = local_58[0];
        *(undefined8 *)(pVVar9 + 8) = local_50;
        *(undefined8 *)(pVVar9 + 0x10) = uStack_48;
        local_58[0] = 0;
      }
      if (::Variant::needs_deinit[local_78[0]] == '\0') {
        cVar7 = ::Variant::needs_deinit[local_58[0]];
      }
      else {
        ::Variant::_clear_internal();
        cVar7 = ::Variant::needs_deinit[local_58[0]];
      }
      if (cVar7 != '\0') {
        ::Variant::_clear_internal();
      }
      iVar8 = *(int *)((long)puVar2 + 0xbc);
      pcVar13 = "none";
      if ((iVar8 == 0) || (pcVar13 = "linear", iVar8 == 1)) {
LAB_00115220:
        ::Variant::Variant((Variant *)local_58,pcVar13);
        ::Variant::Variant((Variant *)local_78,"decay");
        pVVar9 = (Variant *)Dictionary::operator[]((Variant *)&local_90);
        if (pVVar9 != (Variant *)local_58) {
          if (::Variant::needs_deinit[*(int *)pVVar9] != '\0') {
            ::Variant::_clear_internal();
          }
          *(undefined4 *)pVVar9 = 0;
          *(int *)pVVar9 = local_58[0];
          *(undefined8 *)(pVVar9 + 8) = local_50;
          *(undefined8 *)(pVVar9 + 0x10) = uStack_48;
          local_58[0] = 0;
        }
LAB_0011527c:
        cVar7 = ::Variant::needs_deinit[local_78[0]];
joined_r0x00115285:
        if (cVar7 != '\0') {
          ::Variant::_clear_internal();
        }
        if (::Variant::needs_deinit[local_58[0]] != '\0') {
          ::Variant::_clear_internal();
        }
      }
      else {
        if (iVar8 == 2) {
          pcVar13 = "quadratic";
          goto LAB_00115220;
        }
        if (iVar8 == 3) {
          ::Variant::Variant((Variant *)local_58,"cubic");
          ::Variant::Variant((Variant *)local_78,"decay");
          pVVar9 = (Variant *)Dictionary::operator[]((Variant *)&local_90);
          if (pVVar9 == (Variant *)local_58) goto LAB_0011527c;
          if (::Variant::needs_deinit[*(int *)pVVar9] != '\0') {
            ::Variant::_clear_internal();
          }
          *(undefined4 *)pVVar9 = 0;
          *(int *)pVVar9 = local_58[0];
          *(undefined8 *)(pVVar9 + 8) = local_50;
          *(undefined8 *)(pVVar9 + 0x10) = uStack_48;
          local_58[0] = 0;
          cVar7 = ::Variant::needs_deinit[local_78[0]];
          goto joined_r0x00115285;
        }
      }
      pcVar13 = "rectangle";
      if (*(int *)(puVar2 + 0x18) == 0) {
LAB_001152b7:
        ::Variant::Variant((Variant *)local_58,pcVar13);
        ::Variant::Variant((Variant *)local_78,"areaShape");
        pVVar9 = (Variant *)Dictionary::operator[]((Variant *)&local_90);
        if (pVVar9 != (Variant *)local_58) {
          if (::Variant::needs_deinit[*(int *)pVVar9] != '\0') {
            ::Variant::_clear_internal();
          }
          *(undefined4 *)pVVar9 = 0;
          *(int *)pVVar9 = local_58[0];
          *(undefined8 *)(pVVar9 + 8) = local_50;
          *(undefined8 *)(pVVar9 + 0x10) = uStack_48;
          local_58[0] = 0;
        }
        if (::Variant::needs_deinit[local_78[0]] != '\0') {
          ::Variant::_clear_internal();
        }
        if (::Variant::needs_deinit[local_58[0]] != '\0') {
          ::Variant::_clear_internal();
        }
      }
      else if (*(int *)(puVar2 + 0x18) == 1) {
        pcVar13 = "sphere";
        goto LAB_001152b7;
      }
      GLTFLight::set_inner_cone_angle((float)(double)puVar2[0x19]);
      GLTFLight::set_outer_cone_angle((float)(double)puVar2[0x1a]);
      ::Variant::Variant((Variant *)local_58,*(bool *)(puVar2 + 0x1b));
      ::Variant::Variant((Variant *)local_78,"castLight");
      pVVar9 = (Variant *)Dictionary::operator[]((Variant *)&local_90);
      if (pVVar9 != (Variant *)local_58) {
        if (::Variant::needs_deinit[*(int *)pVVar9] != '\0') {
          ::Variant::_clear_internal();
        }
        *(undefined4 *)pVVar9 = 0;
        *(int *)pVVar9 = local_58[0];
        *(undefined8 *)(pVVar9 + 8) = local_50;
        *(undefined8 *)(pVVar9 + 0x10) = uStack_48;
        local_58[0] = 0;
      }
      if (::Variant::needs_deinit[local_78[0]] != '\0') {
        ::Variant::_clear_internal();
      }
      if (::Variant::needs_deinit[local_58[0]] != '\0') {
        ::Variant::_clear_internal();
      }
      ::Variant::Variant((Variant *)local_58,*(bool *)((long)puVar2 + 0xd9));
      ::Variant::Variant((Variant *)local_78,"castShadows");
      pVVar9 = (Variant *)Dictionary::operator[]((Variant *)&local_90);
      if (pVVar9 != (Variant *)local_58) {
        if (::Variant::needs_deinit[*(int *)pVVar9] != '\0') {
          ::Variant::_clear_internal();
        }
        *(undefined4 *)pVVar9 = 0;
        *(int *)pVVar9 = local_58[0];
        *(undefined8 *)(pVVar9 + 8) = local_50;
        *(undefined8 *)(pVVar9 + 0x10) = uStack_48;
        local_58[0] = 0;
      }
      if (::Variant::needs_deinit[local_78[0]] != '\0') {
        ::Variant::_clear_internal();
      }
      if (::Variant::needs_deinit[local_58[0]] != '\0') {
        ::Variant::_clear_internal();
      }
      ::Variant::Variant((Variant *)local_58,(Dictionary *)&local_90);
      StringName::StringName((StringName *)&local_88,"GODOT_fbx_light",false);
      GLTFLight::set_additional_data(pRVar12,(StringName *)&local_88,(Variant *)local_58);
      if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
        StringName::unref();
      }
      if (::Variant::needs_deinit[local_58[0]] == '\0') {
        lVar10 = *param_2;
      }
      else {
        ::Variant::_clear_internal();
        lVar10 = *param_2;
      }
      cVar7 = RefCounted::reference();
      pOVar16 = (Object *)0x0;
      if (cVar7 != '\0') {
        pOVar16 = (Object *)pRVar12;
      }
      if (*(long *)(lVar10 + 1000) == 0) {
        lVar14 = 1;
      }
      else {
        lVar14 = *(long *)(*(long *)(lVar10 + 1000) + -8) + 1;
      }
      iVar8 = CowData<Ref<GLTFLight>>::resize<false>
                        ((CowData<Ref<GLTFLight>> *)(lVar10 + 1000),lVar14);
      if (iVar8 == 0) {
        if (*(long *)(lVar10 + 1000) == 0) {
          lVar11 = -1;
          lVar14 = 0;
LAB_0011556a:
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,lVar11,lVar14,"p_index","size()","",
                     false,false);
          goto joined_r0x00115368;
        }
        lVar14 = *(long *)(*(long *)(lVar10 + 1000) + -8);
        lVar11 = lVar14 + -1;
        if (lVar11 < 0) goto LAB_0011556a;
        CowData<Ref<GLTFLight>>::_copy_on_write((CowData<Ref<GLTFLight>> *)(lVar10 + 1000));
        puVar2 = (undefined8 *)(*(long *)(lVar10 + 1000) + lVar11 * 8);
        pOVar3 = (Object *)*puVar2;
        if (pOVar3 == pOVar16) goto joined_r0x00115368;
        *puVar2 = pOVar16;
        if (pOVar16 != (Object *)0x0) {
          cVar7 = RefCounted::reference();
          if (cVar7 == '\0') {
            *puVar2 = 0;
            if (pOVar3 != (Object *)0x0) {
              cVar7 = RefCounted::unreference();
              goto joined_r0x0011541a;
            }
          }
          else if (pOVar3 != (Object *)0x0) {
            cVar7 = RefCounted::unreference();
joined_r0x0011541a:
            if ((cVar7 != '\0') && (cVar7 = predelete_handler(pOVar3), cVar7 != '\0'))
            goto LAB_001153d9;
          }
          cVar7 = RefCounted::unreference();
          goto joined_r0x00115081;
        }
        if (((pOVar3 != (Object *)0x0) && (cVar7 = RefCounted::unreference(), cVar7 != '\0')) &&
           (cVar7 = predelete_handler(pOVar3), cVar7 != '\0')) {
LAB_001153d9:
          (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
          Memory::free_static(pOVar3,false);
          goto joined_r0x00115368;
        }
      }
      else {
        _err_print_error("push_back","./core/templates/vector.h",0x142,
                         "Condition \"err\" is true. Returning: true",0,0);
joined_r0x00115368:
        if (pOVar16 != (Object *)0x0) {
          cVar7 = RefCounted::unreference();
joined_r0x00115081:
          if ((cVar7 != '\0') && (cVar7 = predelete_handler(pOVar16), cVar7 != '\0')) {
            (**(code **)(*(long *)pOVar16 + 0x140))(pOVar16);
            Memory::free_static(pOVar16,false);
          }
        }
      }
      Dictionary::~Dictionary((Dictionary *)&local_90);
      cVar7 = RefCounted::unreference();
      if ((cVar7 != '\0') && (cVar7 = predelete_handler((Object *)pRVar12), cVar7 != '\0')) {
        (**(code **)(*(long *)pRVar12 + 0x140))(pRVar12);
        Memory::free_static(pRVar12,false);
      }
      local_c0 = local_c0 + 1;
    } while (local_c0 < *(ulong *)(lVar1 + 0x2d8));
  }
  cVar7 = is_print_verbose_enabled();
  if (cVar7 != '\0') {
    itos((long)local_98);
    operator+((char *)&local_90,(String *)"FBX: Total lights: ");
    ::Variant::Variant((Variant *)local_58,(String *)&local_90);
    stringify_variants((Variant *)&local_88);
    __print_line((String *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if (::Variant::needs_deinit[local_58[0]] != '\0') {
      ::Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref(local_98);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FBXDocument::_parse_fbx_state(Ref<FBXState>, String const&) */

undefined4 __thiscall
FBXDocument::_parse_fbx_state(FBXDocument *this,long *param_2,undefined8 param_3)

{
  long *plVar1;
  undefined4 uVar2;
  Object *pOVar3;
  char cVar4;
  int iVar5;
  Node3D *this_00;
  long lVar6;
  Ref *pRVar7;
  long lVar8;
  long lVar9;
  long in_FS_OFFSET;
  bool bVar10;
  undefined4 local_5c;
  Object *local_58;
  undefined8 local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)((Ref *)*param_2 + 0x558) == 0) {
    _err_print_error("_parse_fbx_state","modules/fbx/fbx_document.cpp",0x878,
                     "Parameter \"p_state->scene.get()\" is null.",0,0);
  }
  else {
    local_58 = (Object *)0x0;
    Ref<FBXState>::operator=((Ref<FBXState> *)&local_58,(Ref *)*param_2);
    iVar5 = _parse_scenes(this);
    pOVar3 = local_58;
    if (((local_58 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
       (cVar4 = predelete_handler(pOVar3), cVar4 != '\0')) {
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
    }
    if (iVar5 == 0) {
      local_58 = (Object *)0x0;
      Ref<FBXState>::operator=((Ref<FBXState> *)&local_58,(Ref *)*param_2);
      iVar5 = _parse_nodes(this);
      pOVar3 = local_58;
      if (((local_58 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
         (cVar4 = predelete_handler(pOVar3), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
      if (iVar5 == 0) {
        pRVar7 = (Ref *)*param_2;
        if (pRVar7[0x292] == '\0') {
          local_58 = (Object *)0x0;
          Ref<FBXState>::operator=((Ref<FBXState> *)&local_58,pRVar7);
          iVar5 = _parse_images(this,(Ref<FBXState> *)&local_58,param_3);
          Ref<FBXState>::unref((Ref<FBXState> *)&local_58);
          if (iVar5 == 0) {
            local_58 = (Object *)0x0;
            Ref<FBXState>::operator=((Ref<FBXState> *)&local_58,(Ref *)*param_2);
            iVar5 = _parse_materials(this,(Ref<FBXState> *)&local_58);
            Ref<FBXState>::unref((Ref<FBXState> *)&local_58);
            if (iVar5 == 0) {
              pRVar7 = (Ref *)*param_2;
              goto LAB_00115811;
            }
            _err_print_error("_parse_fbx_state","modules/fbx/fbx_document.cpp",0x88b,
                             "Condition \"err != OK\" is true. Returning: ERR_PARSE_ERROR",0,0);
          }
          else {
            _err_print_error("_parse_fbx_state","modules/fbx/fbx_document.cpp",0x886,
                             "Condition \"err != OK\" is true. Returning: ERR_PARSE_ERROR",0,0);
          }
        }
        else {
LAB_00115811:
          local_58 = (Object *)0x0;
          Ref<FBXState>::operator=((Ref<FBXState> *)&local_58,pRVar7);
          iVar5 = _parse_skins(this,(Ref<FBXState> *)&local_58);
          Ref<FBXState>::unref((Ref<FBXState> *)&local_58);
          if (iVar5 == 0) {
            cVar4 = GLTFState::get_import_as_skeleton_bones();
            if (cVar4 == '\0') {
LAB_0011585b:
              local_50[0] = 0;
              lVar8 = *param_2;
            }
            else {
              local_50[0] = 0;
              lVar8 = *param_2;
              if (*(long *)(lVar8 + 0x350) != 0) {
                plVar1 = (long *)(*(long *)(lVar8 + 0x350) + -0x10);
                do {
                  lVar9 = *plVar1;
                  if (lVar9 == 0) goto LAB_0011585b;
                  LOCK();
                  lVar6 = *plVar1;
                  bVar10 = lVar9 == lVar6;
                  if (bVar10) {
                    *plVar1 = lVar9 + 1;
                    lVar6 = lVar9;
                  }
                  UNLOCK();
                } while (!bVar10);
                if (lVar6 == -1) goto LAB_0011585b;
                local_50[0] = *(undefined8 *)(lVar8 + 0x350);
                lVar8 = *param_2;
              }
            }
            iVar5 = SkinTool::_determine_skeletons
                              ((Vector *)(lVar8 + 0x3c0),(Vector *)(lVar8 + 0x2a0),
                               (Vector *)(lVar8 + 0x440),(Vector *)&local_58);
            CowData<int>::_unref((CowData<int> *)local_50);
            if (iVar5 == 0) {
              lVar8 = *param_2;
              iVar5 = SkinTool::_create_skeletons
                                ((HashSet *)(lVar8 + 0x3f0),(Vector *)(lVar8 + 0x3c0),
                                 (Vector *)(lVar8 + 0x2a0),(HashMap *)(lVar8 + 0x5e8),
                                 (Vector *)(lVar8 + 0x440),(HashMap *)(lVar8 + 0x460));
              if (iVar5 == 0) {
                lVar8 = *param_2;
                iVar5 = SkinTool::_create_skins
                                  ((Vector *)(lVar8 + 0x3c0),(Vector *)(lVar8 + 0x2a0),
                                   *(bool *)(lVar8 + 0x290),(HashSet *)(lVar8 + 0x3f0));
                if (iVar5 == 0) {
                  local_58 = (Object *)0x0;
                  Ref<FBXState>::operator=((Ref<FBXState> *)&local_58,(Ref *)*param_2);
                  iVar5 = _parse_meshes(this,(Ref<FBXState> *)&local_58);
                  Ref<FBXState>::unref((Ref<FBXState> *)&local_58);
                  if (iVar5 == 0) {
                    local_58 = (Object *)0x0;
                    Ref<FBXState>::operator=((Ref<FBXState> *)&local_58,(Ref *)*param_2);
                    iVar5 = _parse_lights(this,(Ref<FBXState> *)&local_58);
                    Ref<FBXState>::unref((Ref<FBXState> *)&local_58);
                    if (iVar5 == 0) {
                      local_58 = (Object *)0x0;
                      Ref<FBXState>::operator=((Ref<FBXState> *)&local_58,(Ref *)*param_2);
                      iVar5 = _parse_cameras(this,(Ref<FBXState> *)&local_58);
                      Ref<FBXState>::unref((Ref<FBXState> *)&local_58);
                      if (iVar5 == 0) {
                        local_58 = (Object *)0x0;
                        Ref<FBXState>::operator=((Ref<FBXState> *)&local_58,(Ref *)*param_2);
                        iVar5 = _parse_animations(this,(Ref<FBXState> *)&local_58);
                        Ref<FBXState>::unref((Ref<FBXState> *)&local_58);
                        if (iVar5 == 0) {
                          local_58 = (Object *)0x0;
                          Ref<FBXState>::operator=((Ref<FBXState> *)&local_58,(Ref *)*param_2);
                          _assign_node_names(this,(Ref<FBXState> *)&local_58);
                          Ref<FBXState>::unref((Ref<FBXState> *)&local_58);
                          this_00 = (Node3D *)operator_new(0x528,"");
                          Node3D::Node3D(this_00);
                          postinitialize_handler((Object *)this_00);
                          pOVar3 = (Object *)*param_2;
                          lVar8 = *(long *)(pOVar3 + 0x350);
                          local_5c = 0;
                          for (lVar9 = 0; (lVar8 != 0 && (lVar9 < *(long *)(lVar8 + -8)));
                              lVar9 = lVar9 + 1) {
                            uVar2 = *(undefined4 *)(lVar8 + lVar9 * 4);
                            local_58 = pOVar3;
                            cVar4 = RefCounted::reference();
                            if (cVar4 == '\0') {
                              local_58 = (Object *)0x0;
                              _generate_scene_node
                                        (this,(Ref<FBXState> *)&local_58,uVar2,this_00,this_00);
                            }
                            else {
                              _generate_scene_node
                                        (this,(Ref<FBXState> *)&local_58,uVar2,this_00,this_00);
                              if (((pOVar3 != (Object *)0x0) &&
                                  (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
                                 (cVar4 = predelete_handler(pOVar3), cVar4 != '\0')) {
                                (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
                                Memory::free_static(pOVar3,false);
                              }
                            }
                            pOVar3 = (Object *)*param_2;
                            lVar8 = *(long *)(pOVar3 + 0x350);
                          }
                          goto LAB_00115b70;
                        }
                        _err_print_error("_parse_fbx_state","modules/fbx/fbx_document.cpp",0x8ac,
                                         "Condition \"err != OK\" is true. Returning: ERR_PARSE_ERROR"
                                         ,0,0);
                      }
                      else {
                        _err_print_error("_parse_fbx_state","modules/fbx/fbx_document.cpp",0x8a8,
                                         "Condition \"err != OK\" is true. Returning: ERR_PARSE_ERROR"
                                         ,0,0);
                      }
                    }
                    else {
                      _err_print_error("_parse_fbx_state","modules/fbx/fbx_document.cpp",0x8a4,
                                       "Condition \"err != OK\" is true. Returning: ERR_PARSE_ERROR"
                                       ,0,0);
                    }
                  }
                  else {
                    _err_print_error("_parse_fbx_state","modules/fbx/fbx_document.cpp",0x8a0,
                                     "Condition \"err != OK\" is true. Returning: ERR_PARSE_ERROR",0
                                     ,0);
                  }
                }
                else {
                  _err_print_error("_parse_fbx_state","modules/fbx/fbx_document.cpp",0x89c,
                                   "Condition \"err != OK\" is true. Returning: ERR_PARSE_ERROR",0,0
                                  );
                }
              }
              else {
                _err_print_error("_parse_fbx_state","modules/fbx/fbx_document.cpp",0x898,
                                 "Condition \"err != OK\" is true. Returning: ERR_PARSE_ERROR",0,0);
              }
            }
            else {
              _err_print_error("_parse_fbx_state","modules/fbx/fbx_document.cpp",0x894,
                               "Condition \"err != OK\" is true. Returning: ERR_PARSE_ERROR",0,0);
            }
          }
          else {
            _err_print_error("_parse_fbx_state","modules/fbx/fbx_document.cpp",0x890,
                             "Condition \"err != OK\" is true. Returning: ERR_PARSE_ERROR",0,0);
          }
        }
      }
      else {
        _err_print_error("_parse_fbx_state","modules/fbx/fbx_document.cpp",0x880,
                         "Condition \"err != OK\" is true. Returning: ERR_PARSE_ERROR",0,0);
      }
    }
    else {
      _err_print_error("_parse_fbx_state","modules/fbx/fbx_document.cpp",0x87c,
                       "Condition \"err != OK\" is true. Returning: ERR_PARSE_ERROR",0,0);
    }
  }
  local_5c = 0x2b;
LAB_00115b70:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_5c;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FBXDocument::_parse(Ref<FBXState>, String, Ref<FileAccess>) [clone .part.0] */

int __thiscall
FBXDocument::_parse(FBXDocument *this,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  int *piVar1;
  ulong uVar2;
  undefined4 uVar3;
  Object *pOVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  Ref *pRVar10;
  undefined8 *puVar11;
  StrRange *this_00;
  CowData<char32_t> *this_01;
  CowData<char32_t> *this_02;
  int *piVar12;
  StrRange *this_03;
  long in_FS_OFFSET;
  byte bVar13;
  int local_854;
  Object *local_838;
  undefined8 local_830;
  undefined8 local_828;
  undefined8 local_820;
  Object *local_818;
  undefined8 local_810;
  undefined8 local_808;
  code *pcStack_800;
  undefined1 local_7f8 [16];
  undefined8 local_7e8;
  undefined1 local_7d8 [16];
  undefined1 local_7c8 [16];
  undefined1 local_7b8 [16];
  undefined4 local_7a8;
  undefined8 local_798;
  undefined8 local_790 [13];
  undefined8 local_728 [19];
  code *local_690;
  code *pcStack_688;
  code *local_680;
  undefined8 *local_670;
  undefined8 local_660;
  undefined1 local_658;
  undefined1 local_656;
  undefined1 local_64e;
  undefined1 local_640;
  undefined4 local_63c;
  int local_5e0;
  int local_5dc;
  undefined4 local_5d8;
  undefined4 local_5d4;
  undefined8 local_5c8;
  undefined4 local_5c0;
  undefined8 local_5b8;
  undefined8 local_5b0;
  undefined4 local_5a8;
  undefined8 local_5a4;
  undefined4 local_59c;
  char *local_598;
  undefined8 local_590;
  char *local_588;
  undefined8 local_580;
  undefined1 local_4b8 [624];
  undefined1 local_248 [520];
  long local_40;
  
  uVar3 = _get_allow_geometry_helper_nodes;
  uVar7 = _ufbx_axes_right_handed_y_up;
  bVar13 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar11 = local_728;
  for (lVar8 = 0x4d; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  local_5c0 = _get_allow_geometry_helper_nodes;
  local_5c8 = _ufbx_axes_right_handed_y_up;
  local_5b8 = _LC101;
  local_5d4 = 2;
  cVar5 = FBXState::get_allow_geometry_helper_nodes();
  local_5a8 = uVar3;
  local_59c = uVar3;
  lVar8 = *param_2;
  local_5d8 = 1;
  local_590 = 0xffffffffffffffff;
  local_5dc = 3 - (uint)(cVar5 != '\0');
  local_580 = 0xffffffffffffffff;
  local_5b0 = uVar7;
  local_5e0 = (-(uint)(cVar5 == '\0') & 2) + 1;
  local_63c = 0x200;
  local_598 = "GeometryTransformHelper";
  local_588 = "ScaleHelper";
  local_5a4 = uVar7;
  local_64e = 1;
  if (*(char *)(lVar8 + 0x292) != '\0') {
    local_658 = 1;
    local_656 = 1;
  }
  puVar11 = local_790;
  for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar11 = 0;
    puVar11 = puVar11 + (ulong)bVar13 * -2 + 1;
  }
  local_640 = 1;
  local_798 = WorkerThreadPool::singleton;
  local_660 = 0x4000000;
  local_680 = _thread_pool_wait_fn;
  local_670 = &local_798;
  local_690 = _thread_pool_init_fn;
  pcStack_688 = _thread_pool_run_fn;
  local_7e8 = *param_4;
  local_7f8 = (undefined1  [16])0x0;
  local_808 = 0x100000;
  pcStack_800 = _file_access_skip_fn;
  uVar7 = ufbx_load_stream(&local_808,local_728,local_4b8);
  ufbx_free_scene(*(undefined8 *)(lVar8 + 0x558));
  *(undefined8 *)(lVar8 + 0x558) = uVar7;
  pRVar10 = (Ref *)*param_2;
  puVar11 = *(undefined8 **)(pRVar10 + 0x558);
  if (puVar11 == (undefined8 *)0x0) {
    ufbx_format_error(local_248,0x200,local_4b8);
    iVar6 = 0x2b;
    _err_print_error("_parse","modules/fbx/fbx_document.cpp",0x821,
                     "Method/function failed. Returning: ERR_PARSE_ERROR",local_248,0);
  }
  else {
    piVar12 = (int *)*puVar11;
    local_7a8 = 0;
    local_7d8 = (undefined1  [16])0x0;
    local_7c8 = (undefined1  [16])0x0;
    piVar1 = piVar12 + puVar11[1] * 10;
    local_7b8 = (undefined1  [16])0x0;
    if (piVar12 != piVar1) {
      local_854 = 0;
      do {
        while (iVar6 = *(int *)(local_7d8 + (long)*piVar12 * 4),
              *(int *)(local_7d8 + (long)*piVar12 * 4) = iVar6 + 1, 9 < iVar6) {
          local_854 = local_854 + 1;
          piVar12 = piVar12 + 10;
          if (piVar1 == piVar12) goto LAB_0011622f;
        }
        uVar2 = *(ulong *)(piVar12 + 8);
        if (uVar2 < 2) {
          local_838 = (Object *)0x0;
          if (piVar12[6] == -1) {
LAB_00116348:
            iVar6 = (int)*(undefined8 *)(piVar12 + 2);
LAB_00116169:
            String::utf8((char *)&local_820,iVar6);
            local_818 = (Object *)0x118225;
            local_828 = 0;
            local_810 = 0x15;
            String::parse_latin1((StrRange *)&local_828);
            vformat<String>((ufbx_element *)&local_818,(StrRange *)&local_828,&local_820);
            _err_print_error("_parse","modules/fbx/fbx_document.cpp",0x833,
                             (ufbx_element *)&local_818,0,1);
            this_00 = (StrRange *)&local_818;
          }
          else {
            _find_element_name((ufbx_element *)&local_818);
            if (local_818 == (Object *)0x0) {
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_818);
              goto LAB_00116348;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_838);
            pOVar4 = local_818;
            local_818 = (Object *)0x0;
            local_838 = pOVar4;
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_818);
            iVar6 = (int)*(undefined8 *)(piVar12 + 2);
            if ((pOVar4 == (Object *)0x0) || (*(uint *)(pOVar4 + -8) < 2)) goto LAB_00116169;
            this_00 = (StrRange *)&local_830;
            String::utf8((char *)&local_820,iVar6);
            local_828 = 0;
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_828,(CowData *)&local_838);
            local_818 = (Object *)0x118207;
            local_830 = 0;
            local_810 = 0x1d;
            String::parse_latin1(this_00);
            vformat<String,String>
                      ((ufbx_element *)&local_818,this_00,(CowData<char32_t> *)&local_828,&local_820
                      );
            _err_print_error("_parse","modules/fbx/fbx_document.cpp",0x831,
                             (ufbx_element *)&local_818,0,1);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_818);
          }
          this_03 = (StrRange *)&local_820;
          this_02 = (CowData<char32_t> *)&local_838;
          CowData<char32_t>::_unref((CowData<char32_t> *)this_00);
          this_01 = (CowData<char32_t> *)&local_828;
        }
        else {
          this_02 = (CowData<char32_t> *)&local_820;
          this_03 = (StrRange *)&local_828;
          String::utf8((char *)this_02,(int)*(undefined8 *)(piVar12 + 2));
          local_818 = (Object *)0x1181eb;
          local_828 = 0;
          local_810 = 0x1b;
          String::parse_latin1(this_03);
          vformat<String,int>((ufbx_element *)&local_818,this_03,this_02,uVar2 & 0xffffffff);
          _err_print_error("_parse","modules/fbx/fbx_document.cpp",0x82a,(ufbx_element *)&local_818,
                           0,1);
          this_01 = (CowData<char32_t> *)&local_818;
        }
        CowData<char32_t>::_unref(this_01);
        piVar12 = piVar12 + 10;
        CowData<char32_t>::_unref((CowData<char32_t> *)this_03);
        CowData<char32_t>::_unref(this_02);
      } while (piVar1 != piVar12);
LAB_0011622f:
      if (local_854 < 1) {
        pRVar10 = (Ref *)*param_2;
      }
      else {
        local_820 = 0;
        local_818 = (Object *)0x123318;
        local_810 = 0x25;
        String::parse_latin1((StrRange *)&local_820);
        vformat<int>((String *)&local_818,(int)(StrRange *)&local_820);
        _err_print_error("_parse","modules/fbx/fbx_document.cpp",0x83b,(ufbx_element *)&local_818,0,
                         1);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_818);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_820);
        pRVar10 = (Ref *)*param_2;
      }
    }
    local_818 = (Object *)0x0;
    Ref<FBXState>::operator=((Ref<FBXState> *)&local_818,pRVar10);
    iVar6 = _parse_fbx_state(this,(Ref<FBXState> *)&local_818,param_3);
    pOVar4 = local_818;
    if (local_818 != (Object *)0x0) {
      cVar5 = RefCounted::unreference();
      if (cVar5 != '\0') {
        cVar5 = predelete_handler(pOVar4);
        if (cVar5 != '\0') {
          (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
          Memory::free_static(pOVar4,false);
        }
      }
    }
    if (iVar6 != 0) {
      _err_print_error("_parse","modules/fbx/fbx_document.cpp",0x83f,
                       "Condition \"err != OK\" is true. Returning: err",0,0);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FBXDocument::_parse(Ref<FBXState>, String, Ref<FileAccess>) */

undefined8 __thiscall
FBXDocument::_parse(FBXDocument *this,long *param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = *param_2;
  ufbx_free_scene(*(undefined8 *)(lVar1 + 0x558));
  lVar2 = *param_4;
  *(undefined8 *)(lVar1 + 0x558) = 0;
  if (lVar2 != 0) {
    uVar3 = _parse(this,param_2,param_3,param_4);
    return uVar3;
  }
  return 1;
}



/* FBXDocument::append_from_buffer(Vector<unsigned char>, String, Ref<GLTFState>, unsigned int) */

int __thiscall
FBXDocument::append_from_buffer
          (FBXDocument *this,long param_2,undefined8 param_3,long *param_4,ulong param_5)

{
  long lVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  Object *pOVar5;
  RefCounted *this_00;
  Object *pOVar6;
  undefined8 uVar7;
  Object *pOVar8;
  Object *pOVar9;
  long in_FS_OFFSET;
  Object *local_58;
  undefined8 local_50;
  Object *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_4 != 0) {
    pOVar5 = (Object *)__dynamic_cast(*param_4,&Object::typeinfo,&FBXState::typeinfo,0);
    if ((pOVar5 != (Object *)0x0) && (cVar3 = RefCounted::reference(), cVar3 != '\0')) {
      if (*(long *)(param_2 + 8) == 0) {
        iVar4 = 0x1e;
        _err_print_error("append_from_buffer","modules/fbx/fbx_document.cpp",0x860,
                         "Parameter \"p_bytes.ptr()\" is null.",0,0);
      }
      else {
        pOVar5[0x292] = (Object)((byte)((uint)param_5 >> 5) & 1);
        pOVar5[0x290] = (Object)((byte)((param_5 & 0xffffffff) >> 4) & 1);
        this_00 = (RefCounted *)operator_new(0x1a8,"");
        RefCounted::RefCounted(this_00);
        *(undefined2 *)(this_00 + 0x17c) = 0;
        *(undefined4 *)(this_00 + 0x180) = 2;
        *(undefined2 *)(this_00 + 0x184) = 0;
        *(undefined **)this_00 = &GLTFDocument::vtable;
        *(undefined1 (*) [16])(this_00 + 0x188) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(this_00 + 0x198) = (undefined1  [16])0x0;
        postinitialize_handler((Object *)this_00);
        cVar3 = RefCounted::init_ref();
        if (cVar3 == '\0') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        cVar3 = RefCounted::reference();
        pOVar8 = (Object *)0x0;
        if (cVar3 != '\0') {
          pOVar8 = (Object *)this_00;
        }
        cVar3 = RefCounted::unreference();
        if ((cVar3 != '\0') && (cVar3 = predelete_handler((Object *)this_00), cVar3 != '\0')) {
          (**(code **)(*(long *)this_00 + 0x140))(this_00);
          Memory::free_static(this_00,false);
        }
        lVar1 = *(long *)(param_2 + 8);
        if (lVar1 == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined8 *)(lVar1 + -8);
        }
        (**(code **)(*(long *)pOVar8 + 0x2f0))(pOVar8,lVar1,uVar7);
        String::get_base_dir();
        if (*(Object **)(pOVar5 + 0x240) == local_48) {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
        }
        else {
          CowData<char32_t>::_unref((CowData<char32_t> *)(pOVar5 + 0x240));
          *(Object **)(pOVar5 + 0x240) = local_48;
          local_48 = (Object *)0x0;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
        }
        local_48 = (Object *)0x0;
        pOVar6 = (Object *)__dynamic_cast(pOVar8,&Object::typeinfo,&FileAccess::typeinfo,0);
        if (pOVar6 == (Object *)0x0) {
          local_50 = 0;
          pOVar6 = local_48;
          if (*(long *)(pOVar5 + 0x240) != 0) goto LAB_001167f7;
LAB_00116807:
          local_58 = (Object *)0x0;
          Ref<FBXState>::operator=((Ref<FBXState> *)&local_58,pOVar5);
          pOVar9 = local_58;
          ufbx_free_scene(*(undefined8 *)(local_58 + 0x558));
          *(undefined8 *)(pOVar9 + 0x558) = 0;
          if (pOVar6 != (Object *)0x0) goto LAB_0011684f;
LAB_00116977:
          cVar3 = RefCounted::unreference();
          if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar9), cVar3 != '\0')) {
            iVar4 = 1;
            pOVar6 = (Object *)0x0;
            goto LAB_00116884;
          }
          iVar4 = 1;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_00116995:
          _err_print_error("append_from_buffer","modules/fbx/fbx_document.cpp",0x86a,
                           "Condition \"err != OK\" is true. Returning: err",0,0);
          cVar3 = RefCounted::unreference();
        }
        else {
          local_48 = pOVar6;
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            local_48 = (Object *)0x0;
            local_50 = 0;
            if (*(long *)(pOVar5 + 0x240) != 0) {
              pOVar6 = (Object *)0x0;
              goto LAB_001167f7;
            }
            local_58 = (Object *)0x0;
            Ref<FBXState>::operator=((Ref<FBXState> *)&local_58,pOVar5);
            pOVar9 = local_58;
            ufbx_free_scene(*(undefined8 *)(local_58 + 0x558));
            *(undefined8 *)(pOVar9 + 0x558) = 0;
            goto LAB_00116977;
          }
          local_50 = 0;
          if (*(long *)(pOVar5 + 0x240) != 0) {
LAB_001167f7:
            local_50 = 0;
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_50,(CowData *)(pOVar5 + 0x240));
            goto LAB_00116807;
          }
          local_58 = (Object *)0x0;
          Ref<FBXState>::operator=((Ref<FBXState> *)&local_58,pOVar5);
          pOVar9 = local_58;
          ufbx_free_scene(*(undefined8 *)(local_58 + 0x558));
          *(undefined8 *)(pOVar9 + 0x558) = 0;
LAB_0011684f:
          iVar4 = _parse(this,&local_58,(CowData<char32_t> *)&local_50,
                         (CowData<char32_t> *)&local_48);
          cVar3 = RefCounted::unreference();
          if ((cVar3 == '\0') || (cVar3 = predelete_handler(pOVar9), cVar3 == '\0')) {
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_00116a48:
            cVar3 = RefCounted::unreference();
            if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar6), cVar3 != '\0')) {
              (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
              Memory::free_static(pOVar6,false);
            }
          }
          else {
LAB_00116884:
            (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
            Memory::free_static(pOVar9,false);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
            if (pOVar6 != (Object *)0x0) goto LAB_00116a48;
          }
          if (iVar4 != 0) goto LAB_00116995;
          cVar3 = RefCounted::unreference();
        }
        if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar8), cVar3 != '\0')) {
          (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
          Memory::free_static(pOVar8,false);
        }
      }
      cVar3 = RefCounted::unreference();
      if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar5), cVar3 != '\0')) {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
      goto LAB_0011662e;
    }
  }
  iVar4 = 0x1f;
  _err_print_error("append_from_buffer","modules/fbx/fbx_document.cpp",0x85f,
                   "Condition \"state.is_null()\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
LAB_0011662e:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FBXDocument::append_from_file(String, Ref<GLTFState>, unsigned int, String) */

int __thiscall
FBXDocument::append_from_file
          (FBXDocument *this,long *param_2,Ref<GLTFState> *param_3,uint param_4,CowData *param_5)

{
  char cVar1;
  Object *pOVar2;
  long lVar3;
  Object *pOVar4;
  long in_FS_OFFSET;
  int local_74;
  Object *local_70;
  long local_68;
  long local_60;
  undefined8 local_58;
  Object *local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*(long *)param_3 == 0) ||
      (pOVar2 = (Object *)__dynamic_cast(*(long *)param_3,&Object::typeinfo,&FBXState::typeinfo,0),
      pOVar2 == (Object *)0x0)) || (cVar1 = RefCounted::reference(), cVar1 == '\0')) {
    local_74 = 0x1f;
    _err_print_error("append_from_file","modules/fbx/fbx_document.cpp",0x8bb,
                     "Condition \"state.is_null()\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    goto LAB_00116bd0;
  }
  if ((*param_2 == 0) || (*(uint *)(*param_2 + -8) < 2)) {
    local_74 = 7;
    _err_print_error("append_from_file","modules/fbx/fbx_document.cpp",0x8bc,
                     "Condition \"p_path.is_empty()\" is true. Returning: ERR_FILE_NOT_FOUND",0,0);
  }
  else {
    if (*(long *)param_3 == 0) {
      Ref<GLTFState>::instantiate<>(param_3);
    }
    String::get_file();
    String::get_basename();
    if (*(long *)(pOVar2 + 600) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(pOVar2 + 600));
      *(long *)(pOVar2 + 600) = local_48;
      local_48 = 0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    pOVar2[0x292] = (Object)((byte)(param_4 >> 5) & 1);
    pOVar2[0x290] = (Object)((byte)(param_4 >> 4) & 1);
    FileAccess::open((String *)&local_70,(int)param_2,(Error *)0x1);
    if (local_74 == 0) {
      if (local_70 == (Object *)0x0) {
        _err_print_error("append_from_file","modules/fbx/fbx_document.cpp",0x8c6,
                         "Condition \"file.is_null()\" is true. Returning: ERR_FILE_CANT_OPEN",0,0);
        goto LAB_00117005;
      }
      local_68 = 0;
      if ((*(long *)param_5 == 0) ||
         (CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,param_5), local_68 == 0)) {
        lVar3 = 0;
LAB_00116d0e:
        String::get_base_dir();
        if (local_48 != lVar3) {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          local_68 = local_48;
          local_48 = 0;
        }
        lVar3 = local_68;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      }
      else {
        lVar3 = local_68;
        if (*(uint *)(local_68 + -8) < 2) goto LAB_00116d0e;
      }
      if (*(long *)(pOVar2 + 0x240) != lVar3) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(pOVar2 + 0x240),(CowData *)&local_68);
      }
      pOVar4 = local_70;
      if (local_70 == (Object *)0x0) {
LAB_00116d90:
        local_50 = (Object *)0x0;
        pOVar4 = (Object *)0x0;
      }
      else {
        local_50 = local_70;
        cVar1 = RefCounted::reference();
        if (cVar1 == '\0') goto LAB_00116d90;
      }
      local_58 = 0;
      if (lVar3 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_68);
      }
      local_60 = 0;
      lVar3 = *(long *)param_3;
      if ((lVar3 != 0) &&
         (lVar3 = __dynamic_cast(lVar3,&Object::typeinfo,&FBXState::typeinfo,0), lVar3 != 0)) {
        local_48 = 0;
        local_60 = lVar3;
        cVar1 = RefCounted::reference();
        if (cVar1 == '\0') {
          local_60 = 0;
          lVar3 = 0;
        }
        Ref<FBXState>::unref((Ref<FBXState> *)&local_48);
      }
      ufbx_free_scene(*(undefined8 *)(lVar3 + 0x558));
      *(undefined8 *)(lVar3 + 0x558) = 0;
      if (pOVar4 == (Object *)0x0) {
        local_74 = 1;
        Ref<FBXState>::unref((Ref<FBXState> *)&local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      }
      else {
        local_74 = _parse(this,(Ref<FBXState> *)&local_60,(CowData<char32_t> *)&local_58,
                          (CowData<char32_t> *)&local_50);
        Ref<FBXState>::unref((Ref<FBXState> *)&local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        cVar1 = RefCounted::unreference();
        if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar4), cVar1 != '\0')) {
          (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
          Memory::free_static(pOVar4,false);
        }
      }
      if (local_74 != 0) {
        _err_print_error("append_from_file","modules/fbx/fbx_document.cpp",0x8cd,
                         "Condition \"err != OK\" is true. Returning: err",0,0);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    }
    else {
      _err_print_error("append_from_file","modules/fbx/fbx_document.cpp",0x8c5,
                       "Condition \"err != OK\" is true. Returning: ERR_FILE_CANT_OPEN",0,0);
LAB_00117005:
      local_74 = 0xc;
    }
    if (((local_70 != (Object *)0x0) && (cVar1 = RefCounted::unreference(), cVar1 != '\0')) &&
       (cVar1 = predelete_handler(local_70), cVar1 != '\0')) {
      (**(code **)(*(long *)local_70 + 0x140))(local_70);
      Memory::free_static(local_70,false);
    }
  }
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar2), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
  }
LAB_00116bd0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_74;
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



/* Object::_set(StringName const&, Variant const&) */

undefined8 Object::_set(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Object::_validate_property(PropertyInfo&) const */

void Object::_validate_property(PropertyInfo *param_1)

{
  return;
}



/* Object::_property_can_revert(StringName const&) const */

undefined8 Object::_property_can_revert(StringName *param_1)

{
  return 0;
}



/* Object::_property_get_revert(StringName const&, Variant&) const */

undefined8 Object::_property_get_revert(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Object::_notification(int) */

void Object::_notification(int param_1)

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



/* RefCounted::is_class_ptr(void*) const */

uint __thiscall RefCounted::is_class_ptr(RefCounted *this,void *param_1)

{
  return (uint)CONCAT71(0x12f2,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12f2,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
}



/* RefCounted::_getv(StringName const&, Variant&) const */

undefined8 RefCounted::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RefCounted::_setv(StringName const&, Variant const&) */

undefined8 RefCounted::_setv(StringName *param_1,Variant *param_2)

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

undefined8 RefCounted::_property_get_revertv(StringName *param_1,Variant *param_2)

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



/* GLTFLight::is_class_ptr(void*) const */

uint __thiscall GLTFLight::is_class_ptr(GLTFLight *this,void *param_1)

{
  return (uint)CONCAT71(0x12f2,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12f2,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12f2,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12f2,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* GLTFLight::_getv(StringName const&, Variant&) const */

undefined8 GLTFLight::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GLTFLight::_setv(StringName const&, Variant const&) */

undefined8 GLTFLight::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GLTFLight::_validate_propertyv(PropertyInfo&) const */

void GLTFLight::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* GLTFLight::_property_can_revertv(StringName const&) const */

undefined8 GLTFLight::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* GLTFLight::_property_get_revertv(StringName const&, Variant&) const */

undefined8 GLTFLight::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GLTFLight::_notificationv(int, bool) */

void GLTFLight::_notificationv(int param_1,bool param_2)

{
  return;
}



/* BaseMaterial3D::_can_do_next_pass() const */

undefined8 BaseMaterial3D::_can_do_next_pass(void)

{
  return 1;
}



/* BaseMaterial3D::_can_use_render_priority() const */

undefined8 BaseMaterial3D::_can_use_render_priority(void)

{
  return 1;
}



/* StandardMaterial3D::is_class_ptr(void*) const */

uint StandardMaterial3D::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  return (uint)CONCAT71(0x12f2,in_RSI == &BaseMaterial3D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12f2,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12f2,in_RSI == &Material::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12f2,in_RSI == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12f2,in_RSI == &RefCounted::get_class_ptr_static()::ptr) |
         CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
}



/* StandardMaterial3D::_getv(StringName const&, Variant&) const */

undefined8 StandardMaterial3D::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* StandardMaterial3D::_property_can_revertv(StringName const&) const */

undefined8 StandardMaterial3D::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* StandardMaterial3D::_property_get_revertv(StringName const&, Variant&) const */

undefined8 StandardMaterial3D::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* StandardMaterial3D::_notificationv(int, bool) */

void StandardMaterial3D::_notificationv(int param_1,bool param_2)

{
  return;
}



/* ImporterMesh::is_class_ptr(void*) const */

uint __thiscall ImporterMesh::is_class_ptr(ImporterMesh *this,void *param_1)

{
  return (uint)CONCAT71(0x12f2,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12f2,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12f2,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12f2,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* ImporterMesh::_getv(StringName const&, Variant&) const */

undefined8 ImporterMesh::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ImporterMesh::_setv(StringName const&, Variant const&) */

undefined8 ImporterMesh::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ImporterMesh::_validate_propertyv(PropertyInfo&) const */

void ImporterMesh::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* ImporterMesh::_property_can_revertv(StringName const&) const */

undefined8 ImporterMesh::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* ImporterMesh::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ImporterMesh::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ImporterMesh::_notificationv(int, bool) */

void ImporterMesh::_notificationv(int param_1,bool param_2)

{
  return;
}



/* GLTFMesh::is_class_ptr(void*) const */

uint __thiscall GLTFMesh::is_class_ptr(GLTFMesh *this,void *param_1)

{
  return (uint)CONCAT71(0x12f2,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12f1,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12f2,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12f2,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* GLTFMesh::_getv(StringName const&, Variant&) const */

undefined8 GLTFMesh::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GLTFMesh::_setv(StringName const&, Variant const&) */

undefined8 GLTFMesh::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GLTFMesh::_validate_propertyv(PropertyInfo&) const */

void GLTFMesh::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* GLTFMesh::_property_can_revertv(StringName const&) const */

undefined8 GLTFMesh::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* GLTFMesh::_property_get_revertv(StringName const&, Variant&) const */

undefined8 GLTFMesh::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GLTFMesh::_notificationv(int, bool) */

void GLTFMesh::_notificationv(int param_1,bool param_2)

{
  return;
}



/* GLTFNode::is_class_ptr(void*) const */

uint __thiscall GLTFNode::is_class_ptr(GLTFNode *this,void *param_1)

{
  return (uint)CONCAT71(0x12f2,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12f1,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12f2,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12f2,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* GLTFNode::_getv(StringName const&, Variant&) const */

undefined8 GLTFNode::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GLTFNode::_setv(StringName const&, Variant const&) */

undefined8 GLTFNode::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GLTFNode::_validate_propertyv(PropertyInfo&) const */

void GLTFNode::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* GLTFNode::_property_can_revertv(StringName const&) const */

undefined8 GLTFNode::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* GLTFNode::_property_get_revertv(StringName const&, Variant&) const */

undefined8 GLTFNode::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GLTFNode::_notificationv(int, bool) */

void GLTFNode::_notificationv(int param_1,bool param_2)

{
  return;
}



/* Node3D::set_transform_gizmo_visible(bool) */

void __thiscall Node3D::set_transform_gizmo_visible(Node3D *this,bool param_1)

{
  this[0x518] = (Node3D)((byte)this[0x518] & 0xfb | param_1 * '\x04');
  return;
}



/* Node3D::is_transform_gizmo_visible() const */

byte __thiscall Node3D::is_transform_gizmo_visible(Node3D *this)

{
  return (byte)this[0x518] >> 2 & 1;
}



/* GLTFSkin::is_class_ptr(void*) const */

uint __thiscall GLTFSkin::is_class_ptr(GLTFSkin *this,void *param_1)

{
  return (uint)CONCAT71(0x12f2,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12f1,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12f2,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12f2,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* GLTFSkin::_getv(StringName const&, Variant&) const */

undefined8 GLTFSkin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GLTFSkin::_setv(StringName const&, Variant const&) */

undefined8 GLTFSkin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GLTFSkin::_validate_propertyv(PropertyInfo&) const */

void GLTFSkin::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* GLTFSkin::_property_can_revertv(StringName const&) const */

undefined8 GLTFSkin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* GLTFSkin::_property_get_revertv(StringName const&, Variant&) const */

undefined8 GLTFSkin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GLTFSkin::_notificationv(int, bool) */

void GLTFSkin::_notificationv(int param_1,bool param_2)

{
  return;
}



/* GLTFTexture::is_class_ptr(void*) const */

uint __thiscall GLTFTexture::is_class_ptr(GLTFTexture *this,void *param_1)

{
  return (uint)CONCAT71(0x12f2,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12f1,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12f2,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12f2,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* GLTFTexture::_getv(StringName const&, Variant&) const */

undefined8 GLTFTexture::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GLTFTexture::_setv(StringName const&, Variant const&) */

undefined8 GLTFTexture::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GLTFTexture::_validate_propertyv(PropertyInfo&) const */

void GLTFTexture::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* GLTFTexture::_property_can_revertv(StringName const&) const */

undefined8 GLTFTexture::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* GLTFTexture::_property_get_revertv(StringName const&, Variant&) const */

undefined8 GLTFTexture::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GLTFTexture::_notificationv(int, bool) */

void GLTFTexture::_notificationv(int param_1,bool param_2)

{
  return;
}



/* ImporterMeshInstance3D::is_class_ptr(void*) const */

uint __thiscall ImporterMeshInstance3D::is_class_ptr(ImporterMeshInstance3D *this,void *param_1)

{
  return (uint)CONCAT71(0x12f1,(undefined4 *)param_1 == &Node3D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12f1,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12f1,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12f2,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* ImporterMeshInstance3D::_getv(StringName const&, Variant&) const */

undefined8 ImporterMeshInstance3D::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ImporterMeshInstance3D::_setv(StringName const&, Variant const&) */

undefined8 ImporterMeshInstance3D::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GLTFState::is_class_ptr(void*) const */

uint __thiscall GLTFState::is_class_ptr(GLTFState *this,void *param_1)

{
  return (uint)CONCAT71(0x12f2,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12f1,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12f2,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12f2,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* GLTFState::_getv(StringName const&, Variant&) const */

undefined8 GLTFState::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GLTFState::_setv(StringName const&, Variant const&) */

undefined8 GLTFState::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GLTFState::_validate_propertyv(PropertyInfo&) const */

void GLTFState::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* GLTFState::_property_can_revertv(StringName const&) const */

undefined8 GLTFState::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* GLTFState::_property_get_revertv(StringName const&, Variant&) const */

undefined8 GLTFState::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GLTFState::_notificationv(int, bool) */

void GLTFState::_notificationv(int param_1,bool param_2)

{
  return;
}



/* FBXDocument::is_class_ptr(void*) const */

uint __thiscall FBXDocument::is_class_ptr(FBXDocument *this,void *param_1)

{
  return (uint)CONCAT71(0x12f1,(undefined4 *)param_1 == &GLTFDocument::get_class_ptr_static()::ptr)
         | (uint)CONCAT71(0x12f1,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12f2,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12f2,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12f2,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* FBXDocument::_getv(StringName const&, Variant&) const */

undefined8 FBXDocument::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* FBXDocument::_setv(StringName const&, Variant const&) */

undefined8 FBXDocument::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* FBXDocument::_validate_propertyv(PropertyInfo&) const */

void FBXDocument::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* FBXDocument::_property_can_revertv(StringName const&) const */

undefined8 FBXDocument::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* FBXDocument::_property_get_revertv(StringName const&, Variant&) const */

undefined8 FBXDocument::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* FBXDocument::_notificationv(int, bool) */

void FBXDocument::_notificationv(int param_1,bool param_2)

{
  return;
}



/* ConfigFile::is_class_ptr(void*) const */

uint __thiscall ConfigFile::is_class_ptr(ConfigFile *this,void *param_1)

{
  return (uint)CONCAT71(0x12f2,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12f0,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12f2,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* ConfigFile::_getv(StringName const&, Variant&) const */

undefined8 ConfigFile::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ConfigFile::_setv(StringName const&, Variant const&) */

undefined8 ConfigFile::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ConfigFile::_validate_propertyv(PropertyInfo&) const */

void ConfigFile::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* ConfigFile::_property_can_revertv(StringName const&) const */

undefined8 ConfigFile::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* ConfigFile::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ConfigFile::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ConfigFile::_notificationv(int, bool) */

void ConfigFile::_notificationv(int param_1,bool param_2)

{
  return;
}



/* GLTFTexture::~GLTFTexture() */

void __thiscall GLTFTexture::~GLTFTexture(GLTFTexture *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0012e7f8;
  Resource::~Resource((Resource *)this);
  return;
}



/* GLTFTexture::~GLTFTexture() */

void __thiscall GLTFTexture::~GLTFTexture(GLTFTexture *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0012e7f8;
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x248);
  return;
}



/* StandardMaterial3D::~StandardMaterial3D() */

void __thiscall StandardMaterial3D::~StandardMaterial3D(StandardMaterial3D *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0012de98;
  BaseMaterial3D::~BaseMaterial3D((BaseMaterial3D *)this);
  return;
}



/* StandardMaterial3D::~StandardMaterial3D() */

void __thiscall StandardMaterial3D::~StandardMaterial3D(StandardMaterial3D *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0012de98;
  BaseMaterial3D::~BaseMaterial3D((BaseMaterial3D *)this);
  operator_delete(this,0x558);
  return;
}



/* StandardMaterial3D::_setv(StringName const&, Variant const&) */

undefined8 StandardMaterial3D::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__set_00137010 != Object::_set) {
    uVar1 = StandardMaterial3D::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0012db60;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0012db60;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* ImporterMeshInstance3D::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ImporterMeshInstance3D::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00137018 != Object::_property_get_revert) {
    uVar1 = Node3D::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* ImporterMeshInstance3D::_property_can_revertv(StringName const&) const */

undefined8 ImporterMeshInstance3D::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00137020 != Object::_property_can_revert) {
    uVar1 = Node3D::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* CowData<Quaternion>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Quaternion>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Transform3D>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Transform3D>::_copy_on_write(void)

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



/* CowData<unsigned int>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<unsigned_int>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* FBXDocument::_assign_node_names(Ref<FBXState>) [clone .cold] */

void FBXDocument::_assign_node_names(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* FBXDocument::_generate_camera(Ref<FBXState>, int) [clone .cold] */

void FBXDocument::_generate_camera(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* FBXDocument::_generate_light(Ref<FBXState>, int) [clone .cold] */

void FBXDocument::_generate_light(void)

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



/* CowData<float>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<float>::_copy_on_write(void)

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



/* FBXDocument::_get_texture_path(String const&, String const&) const [clone .cold] */

void FBXDocument::_get_texture_path(String *param_1,String *param_2)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Ref<Material> >::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Ref<Material>>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Ref<GLTFSkin> >::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Ref<GLTFSkin>>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Ref<GLTFNode> >::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Ref<GLTFNode>>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FBXDocument::_parse_skins(Ref<FBXState>) [clone .cold] */

void FBXDocument::_parse_skins(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FBXDocument::_parse_nodes(Ref<FBXState>) [clone .cold] */

void FBXDocument::_parse_nodes(void)

{
  code *pcVar1;
  
  _DAT_0000024c = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Ref<GLTFMesh> >::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Ref<GLTFMesh>>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* FBXDocument::_generate_mesh_instance(Ref<FBXState>, int) [clone .cold] */

void FBXDocument::_generate_mesh_instance(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* FBXDocument::_generate_skeleton_bone_node(Ref<FBXState>, int, Node*, Node*) [clone .cold] */

void FBXDocument::_generate_skeleton_bone_node(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Ref<Texture2D> >::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Ref<Texture2D>>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Ref<Image> >::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Ref<Image>>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Ref<GLTFTexture> >::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Ref<GLTFTexture>>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* FBXDocument::_parse_images(Ref<FBXState>, String const&) [clone .cold] */

void FBXDocument::_parse_images(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Ref<GLTFCamera> >::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Ref<GLTFCamera>>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Ref<GLTFAnimation> >::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Ref<GLTFAnimation>>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* FBXDocument::_process_mesh_instances(Ref<FBXState>, Node*) [clone .cold] */

void FBXDocument::_process_mesh_instances(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Ref<GLTFLight> >::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Ref<GLTFLight>>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* FBXDocument::append_from_buffer(Vector<unsigned char>, String, Ref<GLTFState>, unsigned int)
   [clone .cold] */

void FBXDocument::append_from_buffer(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* ConfigFile::_get_class_namev() const */

undefined8 * ConfigFile::_get_class_namev(void)

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
LAB_001183f3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001183f3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ConfigFile");
      goto LAB_0011845e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ConfigFile");
LAB_0011845e:
  return &_get_class_namev()::_class_name_static;
}



/* StandardMaterial3D::_validate_propertyv(PropertyInfo&) const */

void StandardMaterial3D::_validate_propertyv(PropertyInfo *param_1)

{
  Material::_validate_property(param_1);
  if ((code *)PTR__validate_property_00137028 == Material::_validate_property) {
    return;
  }
  BaseMaterial3D::_validate_property(param_1);
  return;
}



/* ImporterMeshInstance3D::_validate_propertyv(PropertyInfo&) const */

void ImporterMeshInstance3D::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  if ((code *)PTR__validate_property_00137030 == Node::_validate_property) {
    return;
  }
  Node3D::_validate_property(param_1);
  return;
}



/* ImporterMeshInstance3D::_notificationv(int, bool) */

void __thiscall
ImporterMeshInstance3D::_notificationv(ImporterMeshInstance3D *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00137038 != Node::_notification) {
      Node3D::_notification(iVar1);
    }
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  if ((code *)PTR__notification_00137038 == Node::_notification) {
    return;
  }
  Node3D::_notification(iVar1);
  return;
}



/* Material::get_save_class() const */

Material * __thiscall Material::get_save_class(Material *this)

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



/* Material::get_base_extension() const */

Material * __thiscall Material::get_base_extension(Material *this)

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



/* CowData<Quaternion>::_ref(CowData<Quaternion> const&) [clone .part.0] */

void __thiscall CowData<Quaternion>::_ref(CowData<Quaternion> *this,CowData *param_1)

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



/* GLTFState::_get_class_namev() const */

undefined8 * GLTFState::_get_class_namev(void)

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
LAB_001187c3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001187c3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"GLTFState");
      goto LAB_0011882e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"GLTFState");
LAB_0011882e:
  return &_get_class_namev()::_class_name_static;
}



/* GLTFTexture::_get_class_namev() const */

undefined8 * GLTFTexture::_get_class_namev(void)

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
LAB_001188a3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001188a3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"GLTFTexture");
      goto LAB_0011890e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"GLTFTexture");
LAB_0011890e:
  return &_get_class_namev()::_class_name_static;
}



/* GLTFSkin::_get_class_namev() const */

undefined8 * GLTFSkin::_get_class_namev(void)

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
LAB_00118983:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00118983;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"GLTFSkin");
      goto LAB_001189ee;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"GLTFSkin");
LAB_001189ee:
  return &_get_class_namev()::_class_name_static;
}



/* GLTFLight::_get_class_namev() const */

undefined8 * GLTFLight::_get_class_namev(void)

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
LAB_00118a63:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00118a63;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"GLTFLight");
      goto LAB_00118ace;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"GLTFLight");
LAB_00118ace:
  return &_get_class_namev()::_class_name_static;
}



/* FBXDocument::_get_class_namev() const */

undefined8 * FBXDocument::_get_class_namev(void)

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
LAB_00118b43:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00118b43;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"FBXDocument");
      goto LAB_00118bae;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"FBXDocument");
LAB_00118bae:
  return &_get_class_namev()::_class_name_static;
}



/* GLTFMesh::_get_class_namev() const */

undefined8 * GLTFMesh::_get_class_namev(void)

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
LAB_00118c23:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00118c23;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"GLTFMesh");
      goto LAB_00118c8e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"GLTFMesh");
LAB_00118c8e:
  return &_get_class_namev()::_class_name_static;
}



/* StandardMaterial3D::_get_class_namev() const */

undefined8 * StandardMaterial3D::_get_class_namev(void)

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
LAB_00118d13:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00118d13;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"StandardMaterial3D");
      goto LAB_00118d7e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"StandardMaterial3D");
LAB_00118d7e:
  return &_get_class_namev()::_class_name_static;
}



/* ImporterMesh::_get_class_namev() const */

undefined8 * ImporterMesh::_get_class_namev(void)

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
LAB_00118e03:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00118e03;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ImporterMesh");
      goto LAB_00118e6e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ImporterMesh");
LAB_00118e6e:
  return &_get_class_namev()::_class_name_static;
}



/* GLTFNode::_get_class_namev() const */

undefined8 * GLTFNode::_get_class_namev(void)

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
LAB_00118ee3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00118ee3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"GLTFNode");
      goto LAB_00118f4e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"GLTFNode");
LAB_00118f4e:
  return &_get_class_namev()::_class_name_static;
}



/* ImporterMeshInstance3D::_get_class_namev() const */

undefined8 * ImporterMeshInstance3D::_get_class_namev(void)

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
LAB_00118fd3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00118fd3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ImporterMeshInstance3D");
      goto LAB_0011903e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ImporterMeshInstance3D");
LAB_0011903e:
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
LAB_001190b3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001190b3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_0011911e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_0011911e:
  return &_get_class_namev()::_class_name_static;
}



/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
  long *plVar1;
  long lVar2;
  
  *(code **)this = Dictionary::~Dictionary;
  if (*(long *)(this + 0x250) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x250) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x250);
      *(undefined8 *)(this + 0x250) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      Resource::~Resource((Resource *)this);
      return;
    }
  }
  Resource::~Resource((Resource *)this);
  return;
}



/* CowData<double>::_ref(CowData<double> const&) [clone .part.0] */

void __thiscall CowData<double>::_ref(CowData<double> *this,CowData *param_1)

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



/* CowData<ImporterMesh::Surface>::_unref() [clone .part.0] */

void __thiscall CowData<ImporterMesh::Surface>::_unref(CowData<ImporterMesh::Surface> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  Array *pAVar6;
  Object *pOVar7;
  code *pcVar8;
  char cVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  Array *this_00;
  long lVar13;
  long lVar14;
  
  lVar2 = *(long *)this;
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + -8);
    *(undefined8 *)this = 0;
    if (lVar3 != 0) {
      lVar11 = 0;
      lVar10 = lVar2;
      do {
        if (*(long *)(lVar10 + 0x38) != 0) {
          LOCK();
          plVar1 = (long *)(*(long *)(lVar10 + 0x38) + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar4 = *(long *)(lVar10 + 0x38);
            *(undefined8 *)(lVar10 + 0x38) = 0;
            Memory::free_static((void *)(lVar4 + -0x10),false);
          }
        }
        if (*(long *)(lVar10 + 0x30) != 0) {
          cVar9 = RefCounted::unreference();
          if (cVar9 != '\0') {
            pOVar7 = *(Object **)(lVar10 + 0x30);
            cVar9 = predelete_handler(pOVar7);
            if (cVar9 != '\0') {
              (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
              Memory::free_static(pOVar7,false);
            }
          }
        }
        if (*(long *)(lVar10 + 0x28) != 0) {
          LOCK();
          plVar1 = (long *)(*(long *)(lVar10 + 0x28) + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar4 = *(long *)(lVar10 + 0x28);
            if (lVar4 == 0) goto LAB_00119400;
            lVar13 = *(long *)(lVar4 + -8);
            *(undefined8 *)(lVar10 + 0x28) = 0;
            if (lVar13 != 0) {
              lVar12 = 0;
              lVar14 = lVar4;
              do {
                if (*(long *)(lVar14 + 8) != 0) {
                  LOCK();
                  plVar1 = (long *)(*(long *)(lVar14 + 8) + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    lVar5 = *(long *)(lVar14 + 8);
                    *(undefined8 *)(lVar14 + 8) = 0;
                    Memory::free_static((void *)(lVar5 + -0x10),false);
                  }
                }
                lVar12 = lVar12 + 1;
                lVar14 = lVar14 + 0x18;
              } while (lVar13 != lVar12);
            }
            Memory::free_static((void *)(lVar4 + -0x10),false);
          }
        }
        if (*(long *)(lVar10 + 0x18) != 0) {
          LOCK();
          plVar1 = (long *)(*(long *)(lVar10 + 0x18) + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            pAVar6 = *(Array **)(lVar10 + 0x18);
            if (pAVar6 == (Array *)0x0) goto LAB_00119400;
            lVar4 = *(long *)(pAVar6 + -8);
            *(undefined8 *)(lVar10 + 0x18) = 0;
            if (lVar4 != 0) {
              lVar13 = 0;
              this_00 = pAVar6;
              do {
                lVar13 = lVar13 + 1;
                Array::~Array(this_00);
                this_00 = this_00 + 8;
              } while (lVar4 != lVar13);
            }
            Memory::free_static(pAVar6 + -0x10,false);
          }
        }
        pAVar6 = (Array *)(lVar10 + 8);
        lVar11 = lVar11 + 1;
        lVar10 = lVar10 + 0x48;
        Array::~Array(pAVar6);
      } while (lVar3 != lVar11);
    }
    Memory::free_static((void *)(lVar2 + -0x10),false);
    return;
  }
LAB_00119400:
                    /* WARNING: Does not return */
  pcVar8 = (code *)invalidInstructionException();
  (*pcVar8)();
}



/* String::~String() */

void __thiscall String::~String(String *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* CowData<Vector3>::_ref(CowData<Vector3> const&) [clone .part.0] */

void __thiscall CowData<Vector3>::_ref(CowData<Vector3> *this,CowData *param_1)

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



/* GLTFLight::~GLTFLight() */

void __thiscall GLTFLight::~GLTFLight(GLTFLight *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0012dcc0;
  Dictionary::~Dictionary((Dictionary *)(this + 0x270));
  if (*(long *)(this + 600) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 600) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 600);
      *(undefined8 *)(this + 600) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      Resource::~Resource((Resource *)this);
      return;
    }
  }
  Resource::~Resource((Resource *)this);
  return;
}



/* GLTFLight::~GLTFLight() */

void __thiscall GLTFLight::~GLTFLight(GLTFLight *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0012dcc0;
  Dictionary::~Dictionary((Dictionary *)(this + 0x270));
  if (*(long *)(this + 600) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 600) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 600);
      *(undefined8 *)(this + 600) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x278);
  return;
}



/* GLTFNode::~GLTFNode() */

void __thiscall GLTFNode::~GLTFNode(GLTFNode *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0012e448;
  Dictionary::~Dictionary((Dictionary *)(this + 0x2b0));
  if (*(long *)(this + 0x2a0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x2a0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x2a0);
      *(undefined8 *)(this + 0x2a0) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
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



/* GLTFLight::get_class() const */

void GLTFLight::get_class(void)

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



/* ConfigFile::get_class() const */

void ConfigFile::get_class(void)

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



/* StandardMaterial3D::get_class() const */

void StandardMaterial3D::get_class(void)

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



/* ImporterMesh::get_class() const */

void ImporterMesh::get_class(void)

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



/* GLTFNode::get_class() const */

void GLTFNode::get_class(void)

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



/* GLTFState::get_class() const */

void GLTFState::get_class(void)

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



/* ImporterMeshInstance3D::get_class() const */

void ImporterMeshInstance3D::get_class(void)

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



/* FBXDocument::get_class() const */

void FBXDocument::get_class(void)

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



/* GLTFTexture::get_class() const */

void GLTFTexture::get_class(void)

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



/* GLTFSkin::get_class() const */

void GLTFSkin::get_class(void)

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



/* GLTFMesh::get_class() const */

void GLTFMesh::get_class(void)

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



/* GLTFNode::~GLTFNode() */

void __thiscall GLTFNode::~GLTFNode(GLTFNode *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0012e448;
  Dictionary::~Dictionary((Dictionary *)(this + 0x2b0));
  if (*(long *)(this + 0x2a0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x2a0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x2a0);
      *(undefined8 *)(this + 0x2a0) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
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
  operator_delete(this,0x2b8);
  return;
}



/* RefCounted::is_class(String const&) const */

undefined8 __thiscall RefCounted::is_class(RefCounted *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
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
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_0011a11f;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar3 == lVar7;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar7 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0011a11f:
    cVar6 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar6 != '\0') goto LAB_0011a1d3;
  }
  cVar6 = String::operator==(param_1,"RefCounted");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar4 == (char *)0x0) {
          if (*(long *)(lVar5 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
          }
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String *)&local_60);
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
      if (cVar6 != '\0') goto LAB_0011a1d3;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar8 = String::operator==(param_1,"Object");
      return uVar8;
    }
  }
  else {
LAB_0011a1d3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ConfigFile::is_class(String const&) const */

undefined8 __thiscall ConfigFile::is_class(ConfigFile *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0011a37f;
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
LAB_0011a37f:
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
    if (cVar5 != '\0') goto LAB_0011a433;
  }
  cVar5 = String::operator==(param_1,"ConfigFile");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0011a433:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GLTFMesh::~GLTFMesh() */

void __thiscall GLTFMesh::~GLTFMesh(GLTFMesh *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  
  *(undefined ***)this = &PTR__initialize_classv_0012e270;
  Dictionary::~Dictionary((Dictionary *)(this + 0x268));
  Array::~Array((Array *)(this + 0x260));
  if (*(long *)(this + 600) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 600) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 600);
      *(undefined8 *)(this + 600) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x248) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x248);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
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



/* GLTFMesh::~GLTFMesh() */

void __thiscall GLTFMesh::~GLTFMesh(GLTFMesh *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  
  *(undefined ***)this = &PTR__initialize_classv_0012e270;
  Dictionary::~Dictionary((Dictionary *)(this + 0x268));
  Array::~Array((Array *)(this + 0x260));
  if (*(long *)(this + 600) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 600) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 600);
      *(undefined8 *)(this + 600) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x248) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x248);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
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

void __thiscall Variant::operator=(Variant *this,Variant *param_1)

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



/* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */

void __thiscall
PropertyInfo::PropertyInfo
          (PropertyInfo *this,undefined4 param_2,CowData *param_3,int param_4,CowData *param_5,
          undefined4 param_6,StringName *param_7)

{
  long lVar1;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 8) = 0;
  lVar1 = *(long *)param_3;
  *(undefined4 *)this = param_2;
  if (lVar1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 8),param_3);
  }
  *(undefined8 *)(this + 0x20) = 0;
  lVar1 = *(long *)param_5;
  *(undefined8 *)(this + 0x10) = 0;
  *(int *)(this + 0x18) = param_4;
  if (lVar1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),param_5);
    param_4 = *(int *)(this + 0x18);
  }
  *(undefined4 *)(this + 0x28) = param_6;
  if (param_4 == 0x11) {
    StringName::StringName((StringName *)&local_48,(String *)(this + 0x20),false);
    if (*(long *)(this + 0x10) == local_48) {
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(long *)(this + 0x10) = local_48;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    StringName::operator=((StringName *)(this + 0x10),param_7);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Object::is_class(String const&) const */

ulong __thiscall Object::is_class(Object *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  bool bVar8;
  long local_50;
  char *local_48;
  size_t local_40;
  long local_30;
  
  lVar2 = *(long *)(this + 8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    if (lVar2 == 0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = String::operator==(param_1,"Object");
        return uVar7;
      }
LAB_0011aa0f:
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
            if (lVar4 == 0) goto LAB_0011a923;
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
LAB_0011a923:
    uVar5 = String::operator==(param_1,(String *)&local_50);
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
      goto LAB_0011aa0f;
    }
    lVar2 = *(long *)(lVar2 + 8);
  } while( true );
}



/* print_line(Variant const&) */

void print_line(Variant *param_1)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  stringify_variants((Variant *)&local_18);
  __print_line((String *)&local_18);
  lVar2 = local_18;
  if (local_18 != 0) {
    LOCK();
    plVar1 = (long *)(local_18 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_18 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
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
            if (lVar4 == 0) goto LAB_0011ab1f;
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
LAB_0011ab1f:
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
    if (cVar5 != '\0') goto LAB_0011abd3;
  }
  cVar5 = String::operator==(param_1,"Resource");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0011abd3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GLTFNode::is_class(String const&) const */

undefined8 __thiscall GLTFNode::is_class(GLTFNode *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0011ac9f;
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
LAB_0011ac9f:
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
    if (cVar5 != '\0') goto LAB_0011ad53;
  }
  cVar5 = String::operator==(param_1,"GLTFNode");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = Resource::is_class((Resource *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0011ad53:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ImporterMesh::is_class(String const&) const */

undefined8 __thiscall ImporterMesh::is_class(ImporterMesh *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0011ae1f;
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
LAB_0011ae1f:
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
    if (cVar5 != '\0') goto LAB_0011aed3;
  }
  cVar5 = String::operator==(param_1,"ImporterMesh");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = Resource::is_class((Resource *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0011aed3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GLTFMesh::is_class(String const&) const */

undefined8 __thiscall GLTFMesh::is_class(GLTFMesh *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0011af9f;
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
LAB_0011af9f:
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
    if (cVar5 != '\0') goto LAB_0011b053;
  }
  cVar5 = String::operator==(param_1,"GLTFMesh");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = Resource::is_class((Resource *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0011b053:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GLTFState::is_class(String const&) const */

undefined8 __thiscall GLTFState::is_class(GLTFState *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0011b11f;
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
LAB_0011b11f:
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
    if (cVar5 != '\0') goto LAB_0011b1d3;
  }
  cVar5 = String::operator==(param_1,"GLTFState");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = Resource::is_class((Resource *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0011b1d3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GLTFTexture::is_class(String const&) const */

undefined8 __thiscall GLTFTexture::is_class(GLTFTexture *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0011b29f;
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
LAB_0011b29f:
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
    if (cVar5 != '\0') goto LAB_0011b353;
  }
  cVar5 = String::operator==(param_1,"GLTFTexture");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = Resource::is_class((Resource *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0011b353:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GLTFSkin::is_class(String const&) const */

undefined8 __thiscall GLTFSkin::is_class(GLTFSkin *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0011b41f;
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
LAB_0011b41f:
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
    if (cVar5 != '\0') goto LAB_0011b4d3;
  }
  cVar5 = String::operator==(param_1,"GLTFSkin");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = Resource::is_class((Resource *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0011b4d3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GLTFLight::is_class(String const&) const */

undefined8 __thiscall GLTFLight::is_class(GLTFLight *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0011b59f;
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
LAB_0011b59f:
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
    if (cVar5 != '\0') goto LAB_0011b653;
  }
  cVar5 = String::operator==(param_1,"GLTFLight");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = Resource::is_class((Resource *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0011b653:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FBXDocument::is_class(String const&) const */

undefined8 __thiscall FBXDocument::is_class(FBXDocument *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
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
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_0011b72f;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar3 == lVar7;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar7 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0011b72f:
    cVar6 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar6 != '\0') goto LAB_0011b7e3;
  }
  cVar6 = String::operator==(param_1,"FBXDocument");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar4 == (char *)0x0) {
          if (*(long *)(lVar5 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
          }
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String *)&local_60);
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
      if (cVar6 != '\0') goto LAB_0011b7e3;
    }
    cVar6 = String::operator==(param_1,"GLTFDocument");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = Resource::is_class((Resource *)this,param_1);
        return uVar8;
      }
      goto LAB_0011b928;
    }
  }
LAB_0011b7e3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011b928:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
  long *plVar1;
  long lVar2;
  
  *(code **)this = Dictionary::~Dictionary;
  if (*(long *)(this + 0x250) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x250) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x250);
      *(undefined8 *)(this + 0x250) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x268);
  return;
}



/* BaseMaterial3D::is_class(String const&) const */

undefined8 __thiscall BaseMaterial3D::is_class(BaseMaterial3D *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
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
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_0011ba0f;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar3 == lVar7;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar7 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0011ba0f:
    cVar6 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar6 != '\0') goto LAB_0011bac3;
  }
  cVar6 = String::operator==(param_1,"BaseMaterial3D");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar4 == (char *)0x0) {
          if (*(long *)(lVar5 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
          }
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String *)&local_60);
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
      if (cVar6 != '\0') goto LAB_0011bac3;
    }
    cVar6 = String::operator==(param_1,"Material");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = Resource::is_class((Resource *)this,param_1);
        return uVar8;
      }
      goto LAB_0011bc08;
    }
  }
LAB_0011bac3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011bc08:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* StandardMaterial3D::is_class(String const&) const */

undefined8 __thiscall StandardMaterial3D::is_class(StandardMaterial3D *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0011bc7f;
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
LAB_0011bc7f:
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
    if (cVar5 != '\0') goto LAB_0011bd33;
  }
  cVar5 = String::operator==(param_1,"StandardMaterial3D");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = BaseMaterial3D::is_class((BaseMaterial3D *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0011bd33:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<char32_t>::_ref(CowData<char32_t> const&) */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    _ref(this,param_1);
    return;
  }
  return;
}



/* HashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > >::~HashMap() */

void __thiscall
HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
::~HashMap(HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
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
          pvVar3 = *(void **)((long)pvVar3 + lVar2 * 2);
          *(int *)(*(long *)(this + 0x10) + lVar2) = 0;
          if (::Variant::needs_deinit[*(int *)((long)pvVar3 + 0x18)] != '\0') {
            ::Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (*(long *)((long)pvVar3 + 0x10) != 0)) {
            StringName::unref();
          }
          Memory::free_static(pvVar3,false);
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<String, HashMapHasherDefault, HashMapComparatorDefault<String> >::insert(String const&)
    */

String * HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert
                   (String *param_1)

{
  CowData<char32_t> *this;
  void *pvVar1;
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
  char cVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  ulong uVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  int iVar35;
  uint uVar36;
  String *in_RDX;
  ulong uVar37;
  long lVar38;
  long *in_RSI;
  long lVar39;
  uint uVar40;
  ulong uVar41;
  undefined4 uVar42;
  ulong uVar43;
  uint uVar44;
  uint *puVar45;
  uint local_88;
  long local_68;
  
  uVar28 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  if (*in_RSI == 0) {
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
    iVar35 = *(int *)((long)in_RSI + 0x24);
    if (*in_RSI != 0) goto LAB_0011bfcc;
  }
  else {
    iVar35 = *(int *)((long)in_RSI + 0x24);
LAB_0011bfcc:
    if (iVar35 != 0) {
      uVar29 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
      lVar32 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
      uVar44 = String::hash();
      uVar31 = CONCAT44(0,uVar29);
      lVar39 = in_RSI[3];
      uVar36 = 1;
      if (uVar44 != 0) {
        uVar36 = uVar44;
      }
      uVar40 = 0;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = (ulong)uVar36 * lVar32;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar31;
      lVar38 = SUB168(auVar11 * auVar23,8);
      uVar44 = *(uint *)(lVar39 + lVar38 * 4);
      iVar35 = SUB164(auVar11 * auVar23,8);
      if (uVar44 == 0) {
        iVar35 = *(int *)((long)in_RSI + 0x24);
      }
      else {
        do {
          if (uVar36 == uVar44) {
            cVar27 = String::operator==((String *)
                                        (*in_RSI + (ulong)*(uint *)(in_RSI[1] + lVar38 * 4) * 8),
                                        in_RDX);
            if (cVar27 != '\0') {
              iVar35 = *(int *)((long)in_RSI + 0x24);
              iVar30 = *(int *)(in_RSI[1] + lVar38 * 4);
              goto LAB_0011c32b;
            }
            lVar39 = in_RSI[3];
          }
          uVar40 = uVar40 + 1;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)(iVar35 + 1) * lVar32;
          auVar24._8_8_ = 0;
          auVar24._0_8_ = uVar31;
          lVar38 = SUB168(auVar12 * auVar24,8);
          uVar44 = *(uint *)(lVar39 + lVar38 * 4);
          iVar35 = SUB164(auVar12 * auVar24,8);
        } while ((uVar44 != 0) &&
                (auVar13._8_8_ = 0, auVar13._0_8_ = (ulong)uVar44 * lVar32, auVar25._8_8_ = 0,
                auVar25._0_8_ = uVar31, auVar14._8_8_ = 0,
                auVar14._0_8_ = (ulong)((uVar29 + iVar35) - SUB164(auVar13 * auVar25,8)) * lVar32,
                auVar26._8_8_ = 0, auVar26._0_8_ = uVar31, uVar40 <= SUB164(auVar14 * auVar26,8)));
        iVar35 = *(int *)((long)in_RSI + 0x24);
      }
    }
  }
  if ((float)uVar28 * __LC29 < (float)(iVar35 + 1)) {
    if ((int)in_RSI[4] == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      iVar35 = *(int *)((long)in_RSI + 0x24);
      iVar30 = -1;
      goto LAB_0011c32b;
    }
    uVar28 = (int)in_RSI[4] + 1;
    uVar31 = (ulong)uVar28;
    if (uVar28 < 2) {
      uVar31 = 2;
    }
    uVar28 = *(uint *)(hash_table_size_primes + uVar31 * 4);
    *(int *)(in_RSI + 4) = (int)uVar31;
    pvVar1 = (void *)in_RSI[3];
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
      lVar39 = in_RSI[3];
      lVar38 = in_RSI[2];
      do {
        uVar43 = uVar31 & 0xffffffff;
        uVar42 = (undefined4)uVar31;
        uVar44 = 0;
        uVar28 = *(uint *)((long)pvVar1 + (ulong)*(uint *)((long)pvVar2 + uVar31 * 4) * 4);
        uVar37 = (ulong)uVar28;
        uVar29 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
        uVar41 = CONCAT44(0,uVar29);
        lVar33 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uVar37 * lVar33;
        auVar15._8_8_ = 0;
        auVar15._0_8_ = uVar41;
        lVar34 = SUB168(auVar3 * auVar15,8) * 4;
        iVar35 = SUB164(auVar3 * auVar15,8);
        puVar45 = (uint *)(lVar39 + lVar34);
        uVar36 = *puVar45;
        if (uVar36 == 0) {
          lVar33 = uVar31 * 4;
        }
        else {
          do {
            auVar4._8_8_ = 0;
            auVar4._0_8_ = (ulong)uVar36 * lVar33;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = uVar41;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)((uVar29 + iVar35) - SUB164(auVar4 * auVar16,8)) * lVar33;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = uVar41;
            local_88 = SUB164(auVar5 * auVar17,8);
            if (local_88 < uVar44) {
              *(int *)(lVar38 + uVar43 * 4) = iVar35;
              uVar28 = *puVar45;
              *puVar45 = (uint)uVar37;
              uVar36 = *(uint *)(lVar34 + lVar32);
              uVar37 = (ulong)uVar28;
              *(uint *)(lVar34 + lVar32) = (uint)uVar43;
              uVar43 = (ulong)uVar36;
              uVar44 = local_88;
            }
            uVar42 = (undefined4)uVar43;
            uVar28 = (uint)uVar37;
            uVar44 = uVar44 + 1;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)(iVar35 + 1) * lVar33;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = uVar41;
            lVar34 = SUB168(auVar6 * auVar18,8) * 4;
            iVar35 = SUB164(auVar6 * auVar18,8);
            puVar45 = (uint *)(lVar39 + lVar34);
            uVar36 = *puVar45;
          } while (uVar36 != 0);
          lVar33 = uVar43 << 2;
        }
        *puVar45 = uVar28;
        uVar31 = uVar31 + 1;
        *(int *)(lVar38 + lVar33) = iVar35;
        *(undefined4 *)(lVar32 + lVar34) = uVar42;
      } while ((uint)uVar31 < *(uint *)((long)in_RSI + 0x24));
    }
    Memory::free_static(pvVar1,false);
    Memory::free_static(pvVar2,false);
  }
  uVar29 = String::hash();
  uVar28 = 1;
  if (uVar29 != 0) {
    uVar28 = uVar29;
  }
  uVar31 = (ulong)uVar28;
  this = (CowData<char32_t> *)(*in_RSI + (ulong)*(uint *)((long)in_RSI + 0x24) * 8);
  *(undefined8 *)this = 0;
  CowData<char32_t>::_ref(this,(CowData *)in_RDX);
  uVar29 = *(uint *)((long)in_RSI + 0x24);
  lVar39 = in_RSI[3];
  uVar36 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  uVar37 = CONCAT44(0,uVar36);
  lVar38 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar31 * lVar38;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar37;
  lVar32 = SUB168(auVar7 * auVar19,8) * 4;
  iVar35 = SUB164(auVar7 * auVar19,8);
  puVar45 = (uint *)(lVar39 + lVar32);
  uVar44 = *puVar45;
  if (uVar44 == 0) {
    local_68 = in_RSI[2];
    lVar34 = in_RSI[1];
  }
  else {
    uVar40 = 0;
    local_68 = in_RSI[2];
    lVar34 = in_RSI[1];
    do {
      auVar8._8_8_ = 0;
      auVar8._0_8_ = (ulong)uVar44 * lVar38;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar37;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)((uVar36 + iVar35) - SUB164(auVar8 * auVar20,8)) * lVar38;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar37;
      local_88 = SUB164(auVar9 * auVar21,8);
      if (local_88 < uVar40) {
        *(int *)(local_68 + (ulong)uVar29 * 4) = iVar35;
        uVar28 = *puVar45;
        *puVar45 = (uint)uVar31;
        uVar44 = *(uint *)(lVar32 + lVar34);
        uVar31 = (ulong)uVar28;
        *(uint *)(lVar32 + lVar34) = uVar29;
        uVar29 = uVar44;
        uVar40 = local_88;
      }
      uVar28 = (uint)uVar31;
      uVar40 = uVar40 + 1;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)(iVar35 + 1) * lVar38;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar37;
      lVar32 = SUB168(auVar10 * auVar22,8) * 4;
      iVar35 = SUB164(auVar10 * auVar22,8);
      puVar45 = (uint *)(lVar39 + lVar32);
      uVar44 = *puVar45;
    } while (uVar44 != 0);
  }
  *puVar45 = uVar28;
  *(int *)(local_68 + (ulong)uVar29 * 4) = iVar35;
  *(uint *)(lVar34 + lVar32) = uVar29;
  iVar30 = *(int *)((long)in_RSI + 0x24);
  iVar35 = iVar30 + 1;
  *(int *)((long)in_RSI + 0x24) = iVar35;
LAB_0011c32b:
  lVar32 = *in_RSI;
  *(int *)(param_1 + 0xc) = iVar30;
  *(long *)param_1 = lVar32;
  *(int *)(param_1 + 8) = iVar35;
  return param_1;
}



/* void Ref<SurfaceTool>::instantiate<>() */

void __thiscall Ref<SurfaceTool>::instantiate<>(Ref<SurfaceTool> *this)

{
  char cVar1;
  SurfaceTool *this_00;
  Object *pOVar2;
  Object *pOVar3;
  
  this_00 = (SurfaceTool *)operator_new(0x270,"");
  SurfaceTool::SurfaceTool(this_00);
  postinitialize_handler((Object *)this_00);
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    pOVar3 = *(Object **)this;
    if (pOVar3 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
    cVar1 = RefCounted::unreference();
    if (cVar1 == '\0') {
      return;
    }
    this_00 = (SurfaceTool *)0x0;
    cVar1 = predelete_handler(pOVar3);
    if (cVar1 == '\0') {
      return;
    }
  }
  else {
    pOVar3 = *(Object **)this;
    pOVar2 = pOVar3;
    if (this_00 == (SurfaceTool *)pOVar3) goto LAB_0011c675;
    *(SurfaceTool **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar2 = (Object *)this_00;
    if (((pOVar3 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar3), cVar1 == '\0')) goto LAB_0011c675;
  }
  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
  Memory::free_static(pOVar3,false);
  pOVar2 = (Object *)this_00;
  if (this_00 == (SurfaceTool *)0x0) {
    return;
  }
LAB_0011c675:
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar2), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
    return;
  }
  return;
}



/* void Ref<StandardMaterial3D>::instantiate<>() */

void __thiscall Ref<StandardMaterial3D>::instantiate<>(Ref<StandardMaterial3D> *this)

{
  char cVar1;
  BaseMaterial3D *this_00;
  Object *pOVar2;
  Object *pOVar3;
  
  this_00 = (BaseMaterial3D *)operator_new(0x558,"");
  BaseMaterial3D::BaseMaterial3D(this_00,false);
  *(undefined ***)this_00 = &PTR__initialize_classv_0012de98;
  postinitialize_handler((Object *)this_00);
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    pOVar3 = *(Object **)this;
    if (pOVar3 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
    cVar1 = RefCounted::unreference();
    if (cVar1 == '\0') {
      return;
    }
    this_00 = (BaseMaterial3D *)0x0;
    cVar1 = predelete_handler(pOVar3);
    if (cVar1 == '\0') {
      return;
    }
  }
  else {
    pOVar3 = *(Object **)this;
    pOVar2 = pOVar3;
    if (this_00 == (BaseMaterial3D *)pOVar3) goto LAB_0011c7b5;
    *(BaseMaterial3D **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar2 = (Object *)this_00;
    if (((pOVar3 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar3), cVar1 == '\0')) goto LAB_0011c7b5;
  }
  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
  Memory::free_static(pOVar3,false);
  pOVar2 = (Object *)this_00;
  if (this_00 == (BaseMaterial3D *)0x0) {
    return;
  }
LAB_0011c7b5:
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar2), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
    return;
  }
  return;
}



/* void Ref<ConfigFile>::instantiate<>() */

void __thiscall Ref<ConfigFile>::instantiate<>(Ref<ConfigFile> *this)

{
  char cVar1;
  RefCounted *this_00;
  long lVar2;
  RefCounted *pRVar3;
  Object *pOVar4;
  Object *pOVar5;
  byte bVar6;
  
  bVar6 = 0;
  this_00 = (RefCounted *)operator_new(0x1b0,"");
  pRVar3 = this_00;
  for (lVar2 = 0x36; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined8 *)pRVar3 = 0;
    pRVar3 = pRVar3 + (ulong)bVar6 * -0x10 + 8;
  }
  RefCounted::RefCounted(this_00);
  *(undefined ***)this_00 = &PTR__initialize_classv_0012ed90;
  *(undefined8 *)(this_00 + 0x1a8) = 2;
  *(undefined1 (*) [16])(this_00 + 0x188) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x198) = (undefined1  [16])0x0;
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
    this_00 = (RefCounted *)0x0;
    cVar1 = predelete_handler(pOVar5);
    if (cVar1 == '\0') {
      return;
    }
  }
  else {
    pOVar5 = *(Object **)this;
    pOVar4 = pOVar5;
    if (this_00 == (RefCounted *)pOVar5) goto LAB_0011c915;
    *(RefCounted **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar4 = (Object *)this_00;
    if (((pOVar5 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar5), cVar1 == '\0')) goto LAB_0011c915;
  }
  (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
  Memory::free_static(pOVar5,false);
  pOVar4 = (Object *)this_00;
  if (this_00 == (RefCounted *)0x0) {
    return;
  }
LAB_0011c915:
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar4), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
    Memory::free_static(pOVar4,false);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > >::operator[](StringName const&) */

Variant * __thiscall
HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
::operator[](HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
             *this,StringName *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *__s;
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
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  uint uVar36;
  uint uVar37;
  uint uVar38;
  ulong uVar39;
  undefined8 uVar40;
  void *__s_00;
  undefined8 *puVar41;
  void *pvVar42;
  ulong uVar43;
  int iVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  ulong uVar48;
  undefined8 uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  long lVar53;
  undefined8 *puVar54;
  long in_FS_OFFSET;
  Variant *local_c8;
  int local_98 [2];
  undefined1 local_90 [16];
  undefined1 local_78 [16];
  long local_68;
  int local_60 [8];
  long local_40;
  
  lVar53 = *(long *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar39 = CONCAT44(0,uVar37);
  if (lVar53 == 0) {
LAB_0011d168:
    local_90 = (undefined1  [16])0x0;
    local_98[0] = 0;
    local_98[1] = 0;
    uVar43 = uVar39 * 4;
    uVar48 = uVar39 * 8;
    uVar40 = Memory::alloc_static(uVar43,false);
    *(undefined8 *)(this + 0x10) = uVar40;
    pvVar42 = (void *)Memory::alloc_static(uVar48,false);
    *(void **)(this + 8) = pvVar42;
    if ((int)uVar39 != 0) {
      pvVar3 = *(void **)(this + 0x10);
      if ((pvVar3 < (void *)((long)pvVar42 + uVar48)) && (pvVar42 < (void *)((long)pvVar3 + uVar43))
         ) {
        uVar43 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar43 * 4) = 0;
          *(undefined8 *)((long)pvVar42 + uVar43 * 8) = 0;
          uVar43 = uVar43 + 1;
        } while (uVar39 != uVar43);
      }
      else {
        memset(pvVar3,0,uVar43);
        memset(pvVar42,0,uVar48);
      }
LAB_0011cb7e:
      iVar44 = *(int *)(this + 0x2c);
      if (iVar44 != 0) {
LAB_0011cb8e:
        uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        uVar43 = CONCAT44(0,uVar37);
        lVar53 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        if (*(long *)param_1 == 0) {
          uVar38 = StringName::get_empty_hash();
        }
        else {
          uVar38 = *(uint *)(*(long *)param_1 + 0x20);
        }
        if (uVar38 == 0) {
          uVar38 = 1;
        }
        uVar52 = 0;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = (ulong)uVar38 * lVar53;
        auVar24._8_8_ = 0;
        auVar24._0_8_ = uVar43;
        lVar46 = SUB168(auVar8 * auVar24,8);
        uVar51 = SUB164(auVar8 * auVar24,8);
        uVar50 = *(uint *)(*(long *)(this + 0x10) + lVar46 * 4);
        if (uVar50 != 0) {
          do {
            if ((uVar38 == uVar50) &&
               (*(long *)(*(long *)(*(long *)(this + 8) + lVar46 * 8) + 0x10) == *(long *)param_1))
            {
              ::Variant::operator=
                        ((Variant *)(*(long *)(*(long *)(this + 8) + (ulong)uVar51 * 8) + 0x18),
                         (Variant *)local_98);
              local_c8 = (Variant *)(*(long *)(*(long *)(this + 8) + (ulong)uVar51 * 8) + 0x18);
              goto LAB_0011d0ab;
            }
            uVar52 = uVar52 + 1;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)(uVar51 + 1) * lVar53;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar43;
            lVar46 = SUB168(auVar9 * auVar25,8);
            uVar50 = *(uint *)(*(long *)(this + 0x10) + lVar46 * 4);
            uVar51 = SUB164(auVar9 * auVar25,8);
          } while ((uVar50 != 0) &&
                  (auVar10._8_8_ = 0, auVar10._0_8_ = (ulong)uVar50 * lVar53, auVar26._8_8_ = 0,
                  auVar26._0_8_ = uVar43, auVar11._8_8_ = 0,
                  auVar11._0_8_ = (ulong)((uVar37 + uVar51) - SUB164(auVar10 * auVar26,8)) * lVar53,
                  auVar27._8_8_ = 0, auVar27._0_8_ = uVar43, uVar52 <= SUB164(auVar11 * auVar27,8)))
          ;
        }
        iVar44 = *(int *)(this + 0x2c);
      }
      goto LAB_0011ccb5;
    }
    iVar44 = *(int *)(this + 0x2c);
    if (pvVar42 == (void *)0x0) goto LAB_0011ccb5;
    if (*(int *)(this + 0x2c) != 0) goto LAB_0011cb8e;
LAB_0011ccdb:
    uVar37 = *(uint *)(this + 0x28);
    if (uVar37 == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_c8 = (Variant *)0x18;
      goto LAB_0011d0ab;
    }
    uVar39 = (ulong)(uVar37 + 1);
    uVar38 = *(uint *)(hash_table_size_primes + (ulong)uVar37 * 4);
    *(undefined4 *)(this + 0x2c) = 0;
    if (uVar37 + 1 < 2) {
      uVar39 = 2;
    }
    uVar37 = *(uint *)(hash_table_size_primes + uVar39 * 4);
    uVar48 = (ulong)uVar37;
    *(int *)(this + 0x28) = (int)uVar39;
    pvVar42 = *(void **)(this + 8);
    uVar39 = uVar48 * 4;
    uVar43 = uVar48 * 8;
    pvVar3 = *(void **)(this + 0x10);
    uVar40 = Memory::alloc_static(uVar39,false);
    *(undefined8 *)(this + 0x10) = uVar40;
    __s_00 = (void *)Memory::alloc_static(uVar43,false);
    *(void **)(this + 8) = __s_00;
    if (uVar37 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar43)) && (__s_00 < (void *)((long)__s + uVar39))) {
        uVar39 = 0;
        do {
          *(undefined4 *)((long)__s + uVar39 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar39 * 8) = 0;
          uVar39 = uVar39 + 1;
        } while (uVar39 != uVar48);
      }
      else {
        memset(__s,0,uVar39);
        memset(__s_00,0,uVar43);
      }
    }
    if (uVar38 != 0) {
      local_c8 = (Variant *)0x0;
      do {
        uVar37 = *(uint *)((long)pvVar3 + (long)local_c8 * 4);
        if (uVar37 != 0) {
          uVar52 = 0;
          lVar53 = *(long *)(this + 0x10);
          uVar50 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar39 = CONCAT44(0,uVar50);
          lVar46 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)uVar37 * lVar46;
          auVar28._8_8_ = 0;
          auVar28._0_8_ = uVar39;
          lVar45 = SUB168(auVar12 * auVar28,8);
          puVar1 = (uint *)(lVar53 + lVar45 * 4);
          iVar44 = SUB164(auVar12 * auVar28,8);
          uVar51 = *puVar1;
          uVar40 = *(undefined8 *)((long)pvVar42 + (long)local_c8 * 8);
          while (uVar51 != 0) {
            auVar13._8_8_ = 0;
            auVar13._0_8_ = (ulong)uVar51 * lVar46;
            auVar29._8_8_ = 0;
            auVar29._0_8_ = uVar39;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = (ulong)((uVar50 + iVar44) - SUB164(auVar13 * auVar29,8)) * lVar46;
            auVar30._8_8_ = 0;
            auVar30._0_8_ = uVar39;
            uVar36 = SUB164(auVar14 * auVar30,8);
            uVar49 = uVar40;
            if (uVar36 < uVar52) {
              puVar41 = (undefined8 *)((long)__s_00 + lVar45 * 8);
              *puVar1 = uVar37;
              uVar49 = *puVar41;
              *puVar41 = uVar40;
              uVar37 = uVar51;
              uVar52 = uVar36;
            }
            uVar52 = uVar52 + 1;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = (ulong)(iVar44 + 1) * lVar46;
            auVar31._8_8_ = 0;
            auVar31._0_8_ = uVar39;
            lVar45 = SUB168(auVar15 * auVar31,8);
            puVar1 = (uint *)(lVar53 + lVar45 * 4);
            iVar44 = SUB164(auVar15 * auVar31,8);
            uVar40 = uVar49;
            uVar51 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar45 * 8) = uVar40;
          *puVar1 = uVar37;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        local_c8 = (Variant *)((long)local_c8 + 1);
      } while ((Variant *)(ulong)uVar38 != local_c8);
      Memory::free_static(pvVar42,false);
      Memory::free_static(pvVar3,false);
    }
  }
  else {
    if (*(int *)(this + 0x2c) != 0) {
      lVar46 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      if (*(long *)param_1 == 0) {
        uVar38 = StringName::get_empty_hash();
        lVar53 = *(long *)(this + 8);
      }
      else {
        uVar38 = *(uint *)(*(long *)param_1 + 0x20);
      }
      if (uVar38 == 0) {
        uVar38 = 1;
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (ulong)uVar38 * lVar46;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar39;
      lVar45 = SUB168(auVar4 * auVar20,8);
      uVar51 = SUB164(auVar4 * auVar20,8);
      uVar50 = *(uint *)(*(long *)(this + 0x10) + lVar45 * 4);
      if (uVar50 != 0) {
        uVar52 = 0;
        do {
          if ((uVar38 == uVar50) &&
             (*(long *)(*(long *)(lVar53 + lVar45 * 8) + 0x10) == *(long *)param_1)) {
            local_c8 = (Variant *)(*(long *)(lVar53 + (ulong)uVar51 * 8) + 0x18);
            goto LAB_0011cb24;
          }
          uVar52 = uVar52 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)(uVar51 + 1) * lVar46;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar39;
          lVar45 = SUB168(auVar5 * auVar21,8);
          uVar50 = *(uint *)(*(long *)(this + 0x10) + lVar45 * 4);
          uVar51 = SUB164(auVar5 * auVar21,8);
        } while ((uVar50 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar50 * lVar46, auVar22._8_8_ = 0,
                auVar22._0_8_ = uVar39, auVar7._8_8_ = 0,
                auVar7._0_8_ = (ulong)((uVar51 + uVar37) - SUB164(auVar6 * auVar22,8)) * lVar46,
                auVar23._8_8_ = 0, auVar23._0_8_ = uVar39, uVar52 <= SUB164(auVar7 * auVar23,8)));
      }
      local_98[0] = 0;
      local_98[1] = 0;
      local_90 = (undefined1  [16])0x0;
      uVar39 = (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (lVar53 == 0) goto LAB_0011d168;
      goto LAB_0011cb7e;
    }
    local_98[0] = 0;
    local_98[1] = 0;
    local_90 = (undefined1  [16])0x0;
    iVar44 = 0;
LAB_0011ccb5:
    if ((float)uVar39 * __LC29 < (float)(iVar44 + 1)) goto LAB_0011ccdb;
  }
  local_78 = (undefined1  [16])0x0;
  StringName::StringName((StringName *)&local_68,param_1);
  ::Variant::Variant((Variant *)local_60,(Variant *)local_98);
  puVar41 = (undefined8 *)operator_new(0x30,"");
  *puVar41 = local_78._0_8_;
  puVar41[1] = local_78._8_8_;
  StringName::StringName((StringName *)(puVar41 + 2),(StringName *)&local_68);
  local_c8 = (Variant *)(puVar41 + 3);
  ::Variant::Variant(local_c8,(Variant *)local_60);
  if (::Variant::needs_deinit[local_60[0]] != '\0') {
    ::Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  if (*(undefined8 **)(this + 0x20) == (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x18) = puVar41;
  }
  else {
    **(undefined8 **)(this + 0x20) = puVar41;
    puVar41[1] = *(undefined8 *)(this + 0x20);
  }
  *(undefined8 **)(this + 0x20) = puVar41;
  if (*(long *)param_1 == 0) {
    uVar37 = StringName::get_empty_hash();
  }
  else {
    uVar37 = *(uint *)(*(long *)param_1 + 0x20);
  }
  if (uVar37 == 0) {
    uVar37 = 1;
  }
  uVar39 = (ulong)uVar37;
  uVar51 = 0;
  lVar53 = *(long *)(this + 0x10);
  uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar43 = CONCAT44(0,uVar38);
  lVar46 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar39 * lVar46;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = uVar43;
  lVar47 = SUB168(auVar16 * auVar32,8);
  lVar45 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar53 + lVar47 * 4);
  iVar44 = SUB164(auVar16 * auVar32,8);
  uVar50 = *puVar1;
  while (uVar50 != 0) {
    auVar17._8_8_ = 0;
    auVar17._0_8_ = (ulong)uVar50 * lVar46;
    auVar33._8_8_ = 0;
    auVar33._0_8_ = uVar43;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = (ulong)((uVar38 + iVar44) - SUB164(auVar17 * auVar33,8)) * lVar46;
    auVar34._8_8_ = 0;
    auVar34._0_8_ = uVar43;
    uVar37 = SUB164(auVar18 * auVar34,8);
    puVar54 = puVar41;
    if (uVar37 < uVar51) {
      puVar2 = (undefined8 *)(lVar45 + lVar47 * 8);
      *puVar1 = (uint)uVar39;
      uVar39 = (ulong)uVar50;
      puVar54 = (undefined8 *)*puVar2;
      *puVar2 = puVar41;
      uVar51 = uVar37;
    }
    uVar37 = (uint)uVar39;
    uVar51 = uVar51 + 1;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = (ulong)(iVar44 + 1) * lVar46;
    auVar35._8_8_ = 0;
    auVar35._0_8_ = uVar43;
    lVar47 = SUB168(auVar19 * auVar35,8);
    puVar1 = (uint *)(lVar53 + lVar47 * 4);
    iVar44 = SUB164(auVar19 * auVar35,8);
    puVar41 = puVar54;
    uVar50 = *puVar1;
  }
  *(undefined8 **)(lVar45 + lVar47 * 8) = puVar41;
  *puVar1 = uVar37;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0011d0ab:
  if (::Variant::needs_deinit[local_98[0]] != '\0') {
    ::Variant::_clear_internal();
  }
LAB_0011cb24:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_c8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void Ref<PortableCompressedTexture2D>::instantiate<>() */

void __thiscall
Ref<PortableCompressedTexture2D>::instantiate<>(Ref<PortableCompressedTexture2D> *this)

{
  char cVar1;
  PortableCompressedTexture2D *this_00;
  Object *pOVar2;
  Object *pOVar3;
  
  this_00 = (PortableCompressedTexture2D *)operator_new(0x330,"");
  PortableCompressedTexture2D::PortableCompressedTexture2D(this_00);
  postinitialize_handler((Object *)this_00);
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    pOVar3 = *(Object **)this;
    if (pOVar3 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
    cVar1 = RefCounted::unreference();
    if (cVar1 == '\0') {
      return;
    }
    this_00 = (PortableCompressedTexture2D *)0x0;
    cVar1 = predelete_handler(pOVar3);
    if (cVar1 == '\0') {
      return;
    }
  }
  else {
    pOVar3 = *(Object **)this;
    pOVar2 = pOVar3;
    if (this_00 == (PortableCompressedTexture2D *)pOVar3) goto LAB_0011d355;
    *(PortableCompressedTexture2D **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar2 = (Object *)this_00;
    if (((pOVar3 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar3), cVar1 == '\0')) goto LAB_0011d355;
  }
  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
  Memory::free_static(pOVar3,false);
  pOVar2 = (Object *)this_00;
  if (this_00 == (PortableCompressedTexture2D *)0x0) {
    return;
  }
LAB_0011d355:
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar2), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
    return;
  }
  return;
}



/* void Ref<ImageTexture>::instantiate<>() */

void __thiscall Ref<ImageTexture>::instantiate<>(Ref<ImageTexture> *this)

{
  char cVar1;
  ImageTexture *this_00;
  Object *pOVar2;
  Object *pOVar3;
  
  this_00 = (ImageTexture *)operator_new(0x318,"");
  ImageTexture::ImageTexture(this_00);
  postinitialize_handler((Object *)this_00);
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    pOVar3 = *(Object **)this;
    if (pOVar3 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
    cVar1 = RefCounted::unreference();
    if (cVar1 == '\0') {
      return;
    }
    this_00 = (ImageTexture *)0x0;
    cVar1 = predelete_handler(pOVar3);
    if (cVar1 == '\0') {
      return;
    }
  }
  else {
    pOVar3 = *(Object **)this;
    pOVar2 = pOVar3;
    if (this_00 == (ImageTexture *)pOVar3) goto LAB_0011d485;
    *(ImageTexture **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar2 = (Object *)this_00;
    if (((pOVar3 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar3), cVar1 == '\0')) goto LAB_0011d485;
  }
  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
  Memory::free_static(pOVar3,false);
  pOVar2 = (Object *)this_00;
  if (this_00 == (ImageTexture *)0x0) {
    return;
  }
LAB_0011d485:
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar2), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
    return;
  }
  return;
}



/* void Ref<GLTFTexture>::instantiate<>() */

void __thiscall Ref<GLTFTexture>::instantiate<>(Ref<GLTFTexture> *this)

{
  char cVar1;
  Resource *this_00;
  long lVar2;
  Resource *pRVar3;
  Object *pOVar4;
  Object *pOVar5;
  byte bVar6;
  
  bVar6 = 0;
  this_00 = (Resource *)operator_new(0x248,"");
  pRVar3 = this_00;
  for (lVar2 = 0x49; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined8 *)pRVar3 = 0;
    pRVar3 = pRVar3 + (ulong)bVar6 * -0x10 + 8;
  }
  Resource::Resource(this_00);
  *(undefined8 *)(this_00 + 0x240) = 0xffffffffffffffff;
  *(undefined ***)this_00 = &PTR__initialize_classv_0012e7f8;
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
    if (this_00 == (Resource *)pOVar5) goto LAB_0011d5d5;
    *(Resource **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar4 = (Object *)this_00;
    if (((pOVar5 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar5), cVar1 == '\0')) goto LAB_0011d5d5;
  }
  (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
  Memory::free_static(pOVar5,false);
  pOVar4 = (Object *)this_00;
  if (this_00 == (Resource *)0x0) {
    return;
  }
LAB_0011d5d5:
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar4), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
    Memory::free_static(pOVar4,false);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<unsigned long, Image::AlphaMode, HashMapHasherDefault, HashMapComparatorDefault<unsigned
   long>, DefaultTypedAllocator<HashMapElement<unsigned long, Image::AlphaMode> >
   >::operator[](unsigned long const&) */

undefined1  [16] __thiscall
HashMap<unsigned_long,Image::AlphaMode,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Image::AlphaMode>>>
::operator[](HashMap<unsigned_long,Image::AlphaMode,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Image::AlphaMode>>>
             *this,ulong *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  long lVar3;
  void *pvVar4;
  void *__s;
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
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 (*pauVar37) [16];
  uint uVar38;
  ulong uVar39;
  ulong uVar40;
  undefined8 uVar41;
  void *__s_00;
  undefined1 (*pauVar42) [16];
  int iVar43;
  uint uVar44;
  long lVar45;
  long lVar46;
  uint uVar47;
  ulong uVar48;
  undefined8 uVar49;
  uint uVar50;
  uint uVar51;
  ulong uVar52;
  long lVar53;
  uint uVar54;
  ulong uVar55;
  ulong uVar56;
  undefined1 (*pauVar57) [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  long lStack_90;
  void *local_70;
  
  local_70 = *(void **)(this + 8);
  uVar56 = (ulong)*(uint *)(this + 0x28);
  uVar40 = *param_1;
  uVar47 = *(uint *)(hash_table_size_primes + uVar56 * 4);
  uVar48 = CONCAT44(0,uVar47);
  if (local_70 == (void *)0x0) {
    uVar40 = uVar48 * 4;
    uVar56 = uVar48 * 8;
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    lStack_90 = 0x11dc92;
    local_70 = (void *)Memory::alloc_static(uVar56,false);
    *(void **)(this + 8) = local_70;
    if (uVar47 == 0) {
      iVar43 = *(int *)(this + 0x2c);
      uVar40 = *param_1;
      if (local_70 == (void *)0x0) goto LAB_0011d7bb;
    }
    else {
      pvVar4 = *(void **)(this + 0x10);
      if ((pvVar4 < (void *)((long)local_70 + uVar56)) &&
         (local_70 < (void *)((long)pvVar4 + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)pvVar4 + uVar40 * 4) = 0;
          *(undefined8 *)((long)local_70 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar48 != uVar40);
        iVar43 = *(int *)(this + 0x2c);
        uVar40 = *param_1;
      }
      else {
        memset(pvVar4,0,uVar40);
        lStack_90 = 0x11dcda;
        memset(local_70,0,uVar56);
        iVar43 = *(int *)(this + 0x2c);
        uVar40 = *param_1;
      }
    }
    if (iVar43 != 0) {
      uVar56 = (ulong)*(uint *)(this + 0x28);
      lVar53 = *(long *)(this + 0x10);
      goto LAB_0011db63;
    }
  }
  else {
    iVar43 = *(int *)(this + 0x2c);
    if (iVar43 != 0) {
      lVar53 = *(long *)(this + 0x10);
      lVar3 = *(long *)(hash_table_size_primes_inv + uVar56 * 8);
      uVar39 = uVar40 * 0x3ffff - 1;
      uVar39 = (uVar39 ^ uVar39 >> 0x1f) * 0x15;
      uVar39 = (uVar39 ^ uVar39 >> 0xb) * 0x41;
      uVar39 = uVar39 >> 0x16 ^ uVar39;
      uVar55 = uVar39 & 0xffffffff;
      if ((int)uVar39 == 0) {
        uVar55 = 1;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar55 * lVar3;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar48;
      lVar45 = SUB168(auVar5 * auVar21,8);
      uVar44 = *(uint *)(lVar53 + lVar45 * 4);
      uVar54 = SUB164(auVar5 * auVar21,8);
      if (uVar44 != 0) {
        uVar51 = 0;
        lVar46 = lVar45;
        do {
          if (((uint)uVar55 == uVar44) &&
             (uVar40 == *(ulong *)(*(long *)((long)local_70 + lVar45 * 8) + 0x10))) {
            auVar58._0_8_ = *(long *)((long)local_70 + (ulong)uVar54 * 8) + 0x18;
            auVar58._8_8_ = lVar46;
            return auVar58;
          }
          uVar51 = uVar51 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)(uVar54 + 1) * lVar3;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar48;
          lVar45 = SUB168(auVar6 * auVar22,8);
          uVar44 = *(uint *)(lVar53 + lVar45 * 4);
          uVar54 = SUB164(auVar6 * auVar22,8);
        } while ((uVar44 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar44 * lVar3, auVar23._8_8_ = 0,
                auVar23._0_8_ = uVar48, auVar8._8_8_ = 0,
                auVar8._0_8_ = (ulong)((uVar54 + uVar47) - SUB164(auVar7 * auVar23,8)) * lVar3,
                auVar24._8_8_ = 0, auVar24._0_8_ = uVar48, lVar46 = SUB168(auVar8 * auVar24,8),
                uVar51 <= SUB164(auVar8 * auVar24,8)));
      }
LAB_0011db63:
      uVar52 = CONCAT44(0,*(uint *)(hash_table_size_primes + uVar56 * 4));
      lVar3 = *(long *)(hash_table_size_primes_inv + uVar56 * 8);
      uVar39 = uVar40 * 0x3ffff - 1;
      uVar39 = (uVar39 ^ uVar39 >> 0x1f) * 0x15;
      uVar39 = (uVar39 ^ uVar39 >> 0xb) * 0x41;
      uVar39 = uVar39 >> 0x16 ^ uVar39;
      uVar55 = uVar39 & 0xffffffff;
      if ((int)uVar39 == 0) {
        uVar55 = 1;
      }
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar55 * lVar3;
      auVar33._8_8_ = 0;
      auVar33._0_8_ = uVar52;
      lVar45 = SUB168(auVar17 * auVar33,8);
      uVar47 = *(uint *)(lVar53 + lVar45 * 4);
      uVar44 = SUB164(auVar17 * auVar33,8);
      if (uVar47 != 0) {
        uVar54 = 0;
        lVar46 = lVar45;
        do {
          if (((uint)uVar55 == uVar47) &&
             (*(ulong *)(*(long *)((long)local_70 + lVar45 * 8) + 0x10) == uVar40)) {
            pauVar42 = *(undefined1 (**) [16])((long)local_70 + (ulong)uVar44 * 8);
            *(undefined4 *)(pauVar42[1] + 8) = 0;
            lStack_90 = lVar46;
            goto LAB_0011db44;
          }
          uVar54 = uVar54 + 1;
          auVar18._8_8_ = 0;
          auVar18._0_8_ = (ulong)(uVar44 + 1) * lVar3;
          auVar34._8_8_ = 0;
          auVar34._0_8_ = uVar52;
          lVar45 = SUB168(auVar18 * auVar34,8);
          uVar47 = *(uint *)(lVar53 + lVar45 * 4);
          uVar44 = SUB164(auVar18 * auVar34,8);
        } while ((uVar47 != 0) &&
                (auVar19._8_8_ = 0, auVar19._0_8_ = (ulong)uVar47 * lVar3, auVar35._8_8_ = 0,
                auVar35._0_8_ = uVar52, auVar20._8_8_ = 0,
                auVar20._0_8_ =
                     (ulong)((*(uint *)(hash_table_size_primes + uVar56 * 4) + uVar44) -
                            SUB164(auVar19 * auVar35,8)) * lVar3, auVar36._8_8_ = 0,
                auVar36._0_8_ = uVar52, lVar46 = SUB168(auVar20 * auVar36,8),
                uVar54 <= SUB164(auVar20 * auVar36,8)));
      }
    }
  }
LAB_0011d7bb:
  if ((float)uVar48 * __LC29 < (float)(iVar43 + 1)) {
    uVar47 = *(uint *)(this + 0x28);
    if (uVar47 == 0x1c) {
      pauVar42 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0011db44;
    }
    uVar40 = (ulong)(uVar47 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar44 = *(uint *)(hash_table_size_primes + (ulong)uVar47 * 4);
    if (uVar47 + 1 < 2) {
      uVar40 = 2;
    }
    uVar47 = *(uint *)(hash_table_size_primes + uVar40 * 4);
    uVar48 = (ulong)uVar47;
    *(int *)(this + 0x28) = (int)uVar40;
    pvVar4 = *(void **)(this + 0x10);
    uVar40 = uVar48 * 4;
    uVar56 = uVar48 * 8;
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    __s_00 = (void *)Memory::alloc_static(uVar56,false);
    *(void **)(this + 8) = __s_00;
    if (uVar47 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar56)) && (__s_00 < (void *)((long)__s + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)__s + uVar40 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar48 != uVar40);
      }
      else {
        memset(__s,0,uVar40);
        memset(__s_00,0,uVar56);
      }
    }
    if (uVar44 != 0) {
      uVar40 = 0;
      do {
        uVar47 = *(uint *)((long)pvVar4 + uVar40 * 4);
        if (uVar47 != 0) {
          lVar53 = *(long *)(this + 0x10);
          uVar50 = 0;
          uVar54 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar56 = CONCAT44(0,uVar54);
          lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (ulong)uVar47 * lVar3;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar56;
          lVar45 = SUB168(auVar9 * auVar25,8);
          puVar1 = (uint *)(lVar53 + lVar45 * 4);
          iVar43 = SUB164(auVar9 * auVar25,8);
          uVar51 = *puVar1;
          uVar41 = *(undefined8 *)((long)local_70 + uVar40 * 8);
          while (uVar51 != 0) {
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)uVar51 * lVar3;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar56;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)((uVar54 + iVar43) - SUB164(auVar10 * auVar26,8)) * lVar3;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar56;
            uVar38 = SUB164(auVar11 * auVar27,8);
            uVar49 = uVar41;
            if (uVar38 < uVar50) {
              *puVar1 = uVar47;
              puVar2 = (undefined8 *)((long)__s_00 + lVar45 * 8);
              uVar49 = *puVar2;
              *puVar2 = uVar41;
              uVar47 = uVar51;
              uVar50 = uVar38;
            }
            uVar50 = uVar50 + 1;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)(iVar43 + 1) * lVar3;
            auVar28._8_8_ = 0;
            auVar28._0_8_ = uVar56;
            lVar45 = SUB168(auVar12 * auVar28,8);
            puVar1 = (uint *)(lVar53 + lVar45 * 4);
            iVar43 = SUB164(auVar12 * auVar28,8);
            uVar41 = uVar49;
            uVar51 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar45 * 8) = uVar41;
          *puVar1 = uVar47;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar40 = uVar40 + 1;
      } while (uVar40 != uVar44);
      Memory::free_static(local_70,false);
      Memory::free_static(pvVar4,false);
    }
  }
  uVar40 = *param_1;
  pauVar42 = (undefined1 (*) [16])operator_new(0x20,"");
  *(ulong *)pauVar42[1] = uVar40;
  *(undefined4 *)(pauVar42[1] + 8) = 0;
  *pauVar42 = (undefined1  [16])0x0;
  puVar2 = *(undefined8 **)(this + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar42;
  }
  else {
    *puVar2 = pauVar42;
    *(undefined8 **)(*pauVar42 + 8) = puVar2;
  }
  lVar53 = *(long *)(this + 0x10);
  *(undefined1 (**) [16])(this + 0x20) = pauVar42;
  uVar40 = *param_1 * 0x3ffff - 1;
  uVar40 = (uVar40 ^ uVar40 >> 0x1f) * 0x15;
  uVar40 = (uVar40 ^ uVar40 >> 0xb) * 0x41;
  uVar40 = uVar40 >> 0x16 ^ uVar40;
  uVar56 = uVar40 & 0xffffffff;
  if ((int)uVar40 == 0) {
    uVar56 = 1;
  }
  uVar51 = 0;
  lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar54 = (uint)uVar56;
  uVar47 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar40 = CONCAT44(0,uVar47);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar56 * lVar3;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = uVar40;
  lStack_90 = SUB168(auVar13 * auVar29,8);
  lVar45 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar53 + lStack_90 * 4);
  iVar43 = SUB164(auVar13 * auVar29,8);
  uVar44 = *puVar1;
  pauVar37 = pauVar42;
  while (uVar44 != 0) {
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)uVar44 * lVar3;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar40;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)((uVar47 + iVar43) - SUB164(auVar14 * auVar30,8)) * lVar3;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar40;
    uVar54 = SUB164(auVar15 * auVar31,8);
    pauVar57 = pauVar37;
    if (uVar54 < uVar51) {
      *puVar1 = (uint)uVar56;
      uVar56 = (ulong)uVar44;
      puVar2 = (undefined8 *)(lVar45 + lStack_90 * 8);
      pauVar57 = (undefined1 (*) [16])*puVar2;
      *puVar2 = pauVar37;
      uVar51 = uVar54;
    }
    uVar54 = (uint)uVar56;
    uVar51 = uVar51 + 1;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)(iVar43 + 1) * lVar3;
    auVar32._8_8_ = 0;
    auVar32._0_8_ = uVar40;
    lStack_90 = SUB168(auVar16 * auVar32,8);
    puVar1 = (uint *)(lVar53 + lStack_90 * 4);
    iVar43 = SUB164(auVar16 * auVar32,8);
    pauVar37 = pauVar57;
    uVar44 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar45 + lStack_90 * 8) = pauVar37;
  *puVar1 = uVar54;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0011db44:
  auVar59._8_8_ = lStack_90;
  auVar59._0_8_ = pauVar42[1] + 8;
  return auVar59;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<int, ImporterMeshInstance3D*, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, ImporterMeshInstance3D*> > >::insert(int const&,
   ImporterMeshInstance3D* const&, bool) */

void HashMap<int,ImporterMeshInstance3D*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,ImporterMeshInstance3D*>>>
     ::insert(int *param_1,ImporterMeshInstance3D **param_2,bool param_3)

{
  ImporterMeshInstance3D *pIVar1;
  ImporterMeshInstance3D *pIVar2;
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
  ImporterMeshInstance3D *pIVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  ulong uVar32;
  ImporterMeshInstance3D *pIVar33;
  ImporterMeshInstance3D *pIVar34;
  undefined8 *in_RCX;
  int iVar35;
  undefined7 in_register_00000011;
  uint *puVar36;
  ulong uVar37;
  long lVar38;
  long lVar39;
  ulong uVar40;
  undefined8 uVar41;
  char in_R8B;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  ImporterMeshInstance3D *pIVar45;
  ImporterMeshInstance3D *local_78;
  
  puVar36 = (uint *)CONCAT71(in_register_00000011,param_3);
  uVar30 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 5) * 4);
  local_78 = param_2[1];
  if (local_78 == (ImporterMeshInstance3D *)0x0) {
    uVar40 = (ulong)uVar30;
    uVar32 = uVar40 * 4;
    uVar37 = uVar40 * 8;
    pIVar34 = (ImporterMeshInstance3D *)Memory::alloc_static(uVar32,false);
    param_2[2] = pIVar34;
    local_78 = (ImporterMeshInstance3D *)Memory::alloc_static(uVar37,false);
    param_2[1] = local_78;
    if (uVar30 != 0) {
      pIVar34 = param_2[2];
      if ((pIVar34 < local_78 + uVar37) && (local_78 < pIVar34 + uVar32)) {
        uVar32 = 0;
        do {
          *(undefined4 *)(pIVar34 + uVar32 * 4) = 0;
          *(undefined8 *)(local_78 + uVar32 * 8) = 0;
          uVar32 = uVar32 + 1;
        } while (uVar40 != uVar32);
        goto LAB_0011de2b;
      }
      memset(pIVar34,0,uVar32);
      memset(local_78,0,uVar37);
      uVar31 = *puVar36;
      iVar35 = *(int *)((long)param_2 + 0x2c);
      goto LAB_0011de3b;
    }
    uVar31 = *puVar36;
    iVar35 = *(int *)((long)param_2 + 0x2c);
    if (local_78 != (ImporterMeshInstance3D *)0x0) goto LAB_0011de3b;
  }
  else {
LAB_0011de2b:
    uVar31 = *puVar36;
    iVar35 = *(int *)((long)param_2 + 0x2c);
LAB_0011de3b:
    if (iVar35 != 0) {
      uVar32 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 5) * 8);
      uVar29 = (uVar31 >> 0x10 ^ uVar31) * -0x7a143595;
      uVar29 = (uVar29 ^ uVar29 >> 0xd) * -0x3d4d51cb;
      uVar44 = uVar29 ^ uVar29 >> 0x10;
      if (uVar29 == uVar29 >> 0x10) {
        uVar44 = 1;
        uVar37 = uVar32;
      }
      else {
        uVar37 = uVar44 * uVar32;
      }
      uVar40 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 5) * 4));
      uVar43 = 0;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar40;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar37;
      lVar38 = SUB168(auVar4 * auVar16,8);
      uVar42 = SUB164(auVar4 * auVar16,8);
      uVar29 = *(uint *)(param_2[2] + lVar38 * 4);
      if (uVar29 != 0) {
        do {
          if ((uVar44 == uVar29) && (*(uint *)(*(long *)(local_78 + lVar38 * 8) + 0x10) == uVar31))
          {
            pIVar34 = *(ImporterMeshInstance3D **)(local_78 + (ulong)uVar42 * 8);
            *(undefined8 *)(pIVar34 + 0x18) = *in_RCX;
            goto LAB_0011e2b8;
          }
          uVar43 = uVar43 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (uVar42 + 1) * uVar32;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar40;
          lVar38 = SUB168(auVar5 * auVar17,8);
          uVar29 = *(uint *)(param_2[2] + lVar38 * 4);
          uVar42 = SUB164(auVar5 * auVar17,8);
        } while ((uVar29 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = uVar29 * uVar32, auVar18._8_8_ = 0,
                auVar18._0_8_ = uVar40, auVar7._8_8_ = 0,
                auVar7._0_8_ = ((*(uint *)(hash_table_size_primes +
                                          (ulong)*(uint *)(param_2 + 5) * 4) + uVar42) -
                               SUB164(auVar6 * auVar18,8)) * uVar32, auVar19._8_8_ = 0,
                auVar19._0_8_ = uVar40, uVar43 <= SUB164(auVar7 * auVar19,8)));
      }
    }
  }
  if ((float)uVar30 * __LC29 < (float)(iVar35 + 1)) {
    uVar30 = *(uint *)(param_2 + 5);
    if (uVar30 == 0x1c) {
      pIVar34 = (ImporterMeshInstance3D *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0011e2b8;
    }
    uVar32 = (ulong)(uVar30 + 1);
    uVar31 = *(uint *)(hash_table_size_primes + (ulong)uVar30 * 4);
    *(undefined4 *)((long)param_2 + 0x2c) = 0;
    if (uVar30 + 1 < 2) {
      uVar32 = 2;
    }
    uVar30 = *(uint *)(hash_table_size_primes + uVar32 * 4);
    *(int *)(param_2 + 5) = (int)uVar32;
    pIVar34 = param_2[2];
    uVar40 = (ulong)uVar30;
    uVar32 = uVar40 * 4;
    uVar37 = uVar40 * 8;
    pIVar33 = (ImporterMeshInstance3D *)Memory::alloc_static(uVar32,false);
    param_2[2] = pIVar33;
    pIVar33 = (ImporterMeshInstance3D *)Memory::alloc_static(uVar37,false);
    param_2[1] = pIVar33;
    if (uVar30 != 0) {
      pIVar1 = param_2[2];
      if ((pIVar1 < pIVar33 + uVar37) && (pIVar33 < pIVar1 + uVar32)) {
        uVar32 = 0;
        do {
          *(undefined4 *)(pIVar1 + uVar32 * 4) = 0;
          *(undefined8 *)(pIVar33 + uVar32 * 8) = 0;
          uVar32 = uVar32 + 1;
        } while (uVar32 != uVar40);
      }
      else {
        memset(pIVar1,0,uVar32);
        memset(pIVar33,0,uVar37);
      }
    }
    uVar32 = 0;
    if (uVar31 != 0) {
      do {
        uVar30 = *(uint *)(pIVar34 + uVar32 * 4);
        if (uVar30 != 0) {
          uVar42 = 0;
          pIVar2 = param_2[2];
          uVar29 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 5) * 4);
          uVar37 = CONCAT44(0,uVar29);
          lVar38 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 5) * 8);
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)uVar30 * lVar38;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = uVar37;
          lVar39 = SUB168(auVar8 * auVar20,8);
          pIVar1 = pIVar2 + lVar39 * 4;
          iVar35 = SUB164(auVar8 * auVar20,8);
          uVar44 = *(uint *)pIVar1;
          uVar3 = *(undefined8 *)(local_78 + uVar32 * 8);
          while (uVar44 != 0) {
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)uVar44 * lVar38;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar37;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)((uVar29 + iVar35) - SUB164(auVar9 * auVar21,8)) * lVar38;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar37;
            uVar43 = SUB164(auVar10 * auVar22,8);
            uVar41 = uVar3;
            if (uVar43 < uVar42) {
              *(uint *)pIVar1 = uVar30;
              uVar41 = *(undefined8 *)(pIVar33 + lVar39 * 8);
              *(undefined8 *)(pIVar33 + lVar39 * 8) = uVar3;
              uVar30 = uVar44;
              uVar42 = uVar43;
            }
            uVar42 = uVar42 + 1;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)(iVar35 + 1) * lVar38;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar37;
            lVar39 = SUB168(auVar11 * auVar23,8);
            pIVar1 = pIVar2 + lVar39 * 4;
            iVar35 = SUB164(auVar11 * auVar23,8);
            uVar3 = uVar41;
            uVar44 = *(uint *)pIVar1;
          }
          *(undefined8 *)(pIVar33 + lVar39 * 8) = uVar3;
          *(uint *)pIVar1 = uVar30;
          *(int *)((long)param_2 + 0x2c) = *(int *)((long)param_2 + 0x2c) + 1;
        }
        uVar32 = uVar32 + 1;
      } while (uVar31 != uVar32);
      Memory::free_static(local_78,false);
      Memory::free_static(pIVar34,false);
    }
  }
  uVar30 = *puVar36;
  uVar3 = *in_RCX;
  pIVar34 = (ImporterMeshInstance3D *)operator_new(0x20,"");
  *(uint *)(pIVar34 + 0x10) = uVar30;
  *(undefined8 *)(pIVar34 + 0x18) = uVar3;
  *(undefined1 (*) [16])pIVar34 = (undefined1  [16])0x0;
  pIVar33 = param_2[4];
  if (pIVar33 == (ImporterMeshInstance3D *)0x0) {
    param_2[3] = pIVar34;
    param_2[4] = pIVar34;
  }
  else if (in_R8B == '\0') {
    *(ImporterMeshInstance3D **)pIVar33 = pIVar34;
    *(ImporterMeshInstance3D **)(pIVar34 + 8) = pIVar33;
    param_2[4] = pIVar34;
  }
  else {
    pIVar33 = param_2[3];
    *(ImporterMeshInstance3D **)(pIVar33 + 8) = pIVar34;
    *(ImporterMeshInstance3D **)pIVar34 = pIVar33;
    param_2[3] = pIVar34;
  }
  uVar30 = (*puVar36 >> 0x10 ^ *puVar36) * -0x7a143595;
  uVar31 = (uVar30 ^ uVar30 >> 0xd) * -0x3d4d51cb;
  uVar30 = uVar31 ^ uVar31 >> 0x10;
  if (uVar31 == uVar31 >> 0x10) {
    uVar32 = 1;
    uVar30 = 1;
  }
  else {
    uVar32 = (ulong)uVar30;
  }
  uVar44 = 0;
  pIVar1 = param_2[2];
  uVar31 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 5) * 4);
  uVar37 = CONCAT44(0,uVar31);
  lVar38 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 5) * 8);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar32 * lVar38;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar37;
  lVar39 = SUB168(auVar12 * auVar24,8);
  pIVar2 = param_2[1];
  pIVar33 = pIVar1 + lVar39 * 4;
  iVar35 = SUB164(auVar12 * auVar24,8);
  uVar29 = *(uint *)pIVar33;
  pIVar28 = pIVar34;
  while (uVar29 != 0) {
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)uVar29 * lVar38;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar37;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)((uVar31 + iVar35) - SUB164(auVar13 * auVar25,8)) * lVar38;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar37;
    uVar42 = SUB164(auVar14 * auVar26,8);
    pIVar45 = pIVar28;
    if (uVar42 < uVar44) {
      *(uint *)pIVar33 = uVar30;
      pIVar33 = pIVar2 + lVar39 * 8;
      pIVar45 = *(ImporterMeshInstance3D **)pIVar33;
      *(ImporterMeshInstance3D **)pIVar33 = pIVar28;
      uVar30 = uVar29;
      uVar44 = uVar42;
    }
    uVar44 = uVar44 + 1;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)(iVar35 + 1) * lVar38;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar37;
    lVar39 = SUB168(auVar15 * auVar27,8);
    pIVar33 = pIVar1 + lVar39 * 4;
    iVar35 = SUB164(auVar15 * auVar27,8);
    pIVar28 = pIVar45;
    uVar29 = *(uint *)pIVar33;
  }
  *(ImporterMeshInstance3D **)(pIVar2 + lVar39 * 8) = pIVar28;
  *(uint *)pIVar33 = uVar30;
  *(int *)((long)param_2 + 0x2c) = *(int *)((long)param_2 + 0x2c) + 1;
LAB_0011e2b8:
  *(ImporterMeshInstance3D **)param_1 = pIVar34;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<int, Node*, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, Node*> > >::insert(int const&, Node* const&, bool) */

void HashMap<int,Node*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Node*>>>
     ::insert(int *param_1,Node **param_2,bool param_3)

{
  Node *pNVar1;
  Node *pNVar2;
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
  Node *pNVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  ulong uVar32;
  Node *pNVar33;
  Node *pNVar34;
  undefined8 *in_RCX;
  int iVar35;
  undefined7 in_register_00000011;
  uint *puVar36;
  ulong uVar37;
  long lVar38;
  long lVar39;
  ulong uVar40;
  undefined8 uVar41;
  char in_R8B;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  Node *pNVar45;
  Node *local_78;
  
  puVar36 = (uint *)CONCAT71(in_register_00000011,param_3);
  uVar30 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 5) * 4);
  local_78 = param_2[1];
  if (local_78 == (Node *)0x0) {
    uVar40 = (ulong)uVar30;
    uVar32 = uVar40 * 4;
    uVar37 = uVar40 * 8;
    pNVar34 = (Node *)Memory::alloc_static(uVar32,false);
    param_2[2] = pNVar34;
    local_78 = (Node *)Memory::alloc_static(uVar37,false);
    param_2[1] = local_78;
    if (uVar30 != 0) {
      pNVar34 = param_2[2];
      if ((pNVar34 < local_78 + uVar37) && (local_78 < pNVar34 + uVar32)) {
        uVar32 = 0;
        do {
          *(undefined4 *)(pNVar34 + uVar32 * 4) = 0;
          *(undefined8 *)(local_78 + uVar32 * 8) = 0;
          uVar32 = uVar32 + 1;
        } while (uVar40 != uVar32);
        goto LAB_0011e4bb;
      }
      memset(pNVar34,0,uVar32);
      memset(local_78,0,uVar37);
      uVar31 = *puVar36;
      iVar35 = *(int *)((long)param_2 + 0x2c);
      goto LAB_0011e4cb;
    }
    uVar31 = *puVar36;
    iVar35 = *(int *)((long)param_2 + 0x2c);
    if (local_78 != (Node *)0x0) goto LAB_0011e4cb;
  }
  else {
LAB_0011e4bb:
    uVar31 = *puVar36;
    iVar35 = *(int *)((long)param_2 + 0x2c);
LAB_0011e4cb:
    if (iVar35 != 0) {
      uVar32 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 5) * 8);
      uVar29 = (uVar31 >> 0x10 ^ uVar31) * -0x7a143595;
      uVar29 = (uVar29 ^ uVar29 >> 0xd) * -0x3d4d51cb;
      uVar44 = uVar29 ^ uVar29 >> 0x10;
      if (uVar29 == uVar29 >> 0x10) {
        uVar44 = 1;
        uVar37 = uVar32;
      }
      else {
        uVar37 = uVar44 * uVar32;
      }
      uVar40 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 5) * 4));
      uVar43 = 0;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar40;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar37;
      lVar38 = SUB168(auVar4 * auVar16,8);
      uVar42 = SUB164(auVar4 * auVar16,8);
      uVar29 = *(uint *)(param_2[2] + lVar38 * 4);
      if (uVar29 != 0) {
        do {
          if ((uVar44 == uVar29) && (*(uint *)(*(long *)(local_78 + lVar38 * 8) + 0x10) == uVar31))
          {
            pNVar34 = *(Node **)(local_78 + (ulong)uVar42 * 8);
            *(undefined8 *)(pNVar34 + 0x18) = *in_RCX;
            goto LAB_0011e948;
          }
          uVar43 = uVar43 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (uVar42 + 1) * uVar32;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar40;
          lVar38 = SUB168(auVar5 * auVar17,8);
          uVar29 = *(uint *)(param_2[2] + lVar38 * 4);
          uVar42 = SUB164(auVar5 * auVar17,8);
        } while ((uVar29 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = uVar29 * uVar32, auVar18._8_8_ = 0,
                auVar18._0_8_ = uVar40, auVar7._8_8_ = 0,
                auVar7._0_8_ = ((*(uint *)(hash_table_size_primes +
                                          (ulong)*(uint *)(param_2 + 5) * 4) + uVar42) -
                               SUB164(auVar6 * auVar18,8)) * uVar32, auVar19._8_8_ = 0,
                auVar19._0_8_ = uVar40, uVar43 <= SUB164(auVar7 * auVar19,8)));
      }
    }
  }
  if ((float)uVar30 * __LC29 < (float)(iVar35 + 1)) {
    uVar30 = *(uint *)(param_2 + 5);
    if (uVar30 == 0x1c) {
      pNVar34 = (Node *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0011e948;
    }
    uVar32 = (ulong)(uVar30 + 1);
    uVar31 = *(uint *)(hash_table_size_primes + (ulong)uVar30 * 4);
    *(undefined4 *)((long)param_2 + 0x2c) = 0;
    if (uVar30 + 1 < 2) {
      uVar32 = 2;
    }
    uVar30 = *(uint *)(hash_table_size_primes + uVar32 * 4);
    *(int *)(param_2 + 5) = (int)uVar32;
    pNVar34 = param_2[2];
    uVar40 = (ulong)uVar30;
    uVar32 = uVar40 * 4;
    uVar37 = uVar40 * 8;
    pNVar33 = (Node *)Memory::alloc_static(uVar32,false);
    param_2[2] = pNVar33;
    pNVar33 = (Node *)Memory::alloc_static(uVar37,false);
    param_2[1] = pNVar33;
    if (uVar30 != 0) {
      pNVar1 = param_2[2];
      if ((pNVar1 < pNVar33 + uVar37) && (pNVar33 < pNVar1 + uVar32)) {
        uVar32 = 0;
        do {
          *(undefined4 *)(pNVar1 + uVar32 * 4) = 0;
          *(undefined8 *)(pNVar33 + uVar32 * 8) = 0;
          uVar32 = uVar32 + 1;
        } while (uVar32 != uVar40);
      }
      else {
        memset(pNVar1,0,uVar32);
        memset(pNVar33,0,uVar37);
      }
    }
    uVar32 = 0;
    if (uVar31 != 0) {
      do {
        uVar30 = *(uint *)(pNVar34 + uVar32 * 4);
        if (uVar30 != 0) {
          uVar42 = 0;
          pNVar2 = param_2[2];
          uVar29 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 5) * 4);
          uVar37 = CONCAT44(0,uVar29);
          lVar38 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 5) * 8);
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)uVar30 * lVar38;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = uVar37;
          lVar39 = SUB168(auVar8 * auVar20,8);
          pNVar1 = pNVar2 + lVar39 * 4;
          iVar35 = SUB164(auVar8 * auVar20,8);
          uVar44 = *(uint *)pNVar1;
          uVar3 = *(undefined8 *)(local_78 + uVar32 * 8);
          while (uVar44 != 0) {
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)uVar44 * lVar38;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar37;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)((uVar29 + iVar35) - SUB164(auVar9 * auVar21,8)) * lVar38;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar37;
            uVar43 = SUB164(auVar10 * auVar22,8);
            uVar41 = uVar3;
            if (uVar43 < uVar42) {
              *(uint *)pNVar1 = uVar30;
              uVar41 = *(undefined8 *)(pNVar33 + lVar39 * 8);
              *(undefined8 *)(pNVar33 + lVar39 * 8) = uVar3;
              uVar30 = uVar44;
              uVar42 = uVar43;
            }
            uVar42 = uVar42 + 1;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)(iVar35 + 1) * lVar38;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar37;
            lVar39 = SUB168(auVar11 * auVar23,8);
            pNVar1 = pNVar2 + lVar39 * 4;
            iVar35 = SUB164(auVar11 * auVar23,8);
            uVar3 = uVar41;
            uVar44 = *(uint *)pNVar1;
          }
          *(undefined8 *)(pNVar33 + lVar39 * 8) = uVar3;
          *(uint *)pNVar1 = uVar30;
          *(int *)((long)param_2 + 0x2c) = *(int *)((long)param_2 + 0x2c) + 1;
        }
        uVar32 = uVar32 + 1;
      } while (uVar31 != uVar32);
      Memory::free_static(local_78,false);
      Memory::free_static(pNVar34,false);
    }
  }
  uVar30 = *puVar36;
  uVar3 = *in_RCX;
  pNVar34 = (Node *)operator_new(0x20,"");
  *(uint *)(pNVar34 + 0x10) = uVar30;
  *(undefined8 *)(pNVar34 + 0x18) = uVar3;
  *(undefined1 (*) [16])pNVar34 = (undefined1  [16])0x0;
  pNVar33 = param_2[4];
  if (pNVar33 == (Node *)0x0) {
    param_2[3] = pNVar34;
    param_2[4] = pNVar34;
  }
  else if (in_R8B == '\0') {
    *(Node **)pNVar33 = pNVar34;
    *(Node **)(pNVar34 + 8) = pNVar33;
    param_2[4] = pNVar34;
  }
  else {
    pNVar33 = param_2[3];
    *(Node **)(pNVar33 + 8) = pNVar34;
    *(Node **)pNVar34 = pNVar33;
    param_2[3] = pNVar34;
  }
  uVar30 = (*puVar36 >> 0x10 ^ *puVar36) * -0x7a143595;
  uVar31 = (uVar30 ^ uVar30 >> 0xd) * -0x3d4d51cb;
  uVar30 = uVar31 ^ uVar31 >> 0x10;
  if (uVar31 == uVar31 >> 0x10) {
    uVar32 = 1;
    uVar30 = 1;
  }
  else {
    uVar32 = (ulong)uVar30;
  }
  uVar44 = 0;
  pNVar1 = param_2[2];
  uVar31 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 5) * 4);
  uVar37 = CONCAT44(0,uVar31);
  lVar38 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 5) * 8);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar32 * lVar38;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar37;
  lVar39 = SUB168(auVar12 * auVar24,8);
  pNVar2 = param_2[1];
  pNVar33 = pNVar1 + lVar39 * 4;
  iVar35 = SUB164(auVar12 * auVar24,8);
  uVar29 = *(uint *)pNVar33;
  pNVar28 = pNVar34;
  while (uVar29 != 0) {
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)uVar29 * lVar38;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar37;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)((uVar31 + iVar35) - SUB164(auVar13 * auVar25,8)) * lVar38;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar37;
    uVar42 = SUB164(auVar14 * auVar26,8);
    pNVar45 = pNVar28;
    if (uVar42 < uVar44) {
      *(uint *)pNVar33 = uVar30;
      pNVar33 = pNVar2 + lVar39 * 8;
      pNVar45 = *(Node **)pNVar33;
      *(Node **)pNVar33 = pNVar28;
      uVar30 = uVar29;
      uVar44 = uVar42;
    }
    uVar44 = uVar44 + 1;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)(iVar35 + 1) * lVar38;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar37;
    lVar39 = SUB168(auVar15 * auVar27,8);
    pNVar33 = pNVar1 + lVar39 * 4;
    iVar35 = SUB164(auVar15 * auVar27,8);
    pNVar28 = pNVar45;
    uVar29 = *(uint *)pNVar33;
  }
  *(Node **)(pNVar2 + lVar39 * 8) = pNVar28;
  *(uint *)pNVar33 = uVar30;
  *(int *)((long)param_2 + 0x2c) = *(int *)((long)param_2 + 0x2c) + 1;
LAB_0011e948:
  *(Node **)param_1 = pNVar34;
  return;
}



/* void Ref<AnimationLibrary>::instantiate<>() */

void __thiscall Ref<AnimationLibrary>::instantiate<>(Ref<AnimationLibrary> *this)

{
  char cVar1;
  AnimationLibrary *this_00;
  Object *pOVar2;
  Object *pOVar3;
  
  this_00 = (AnimationLibrary *)operator_new(0x270,"");
  AnimationLibrary::AnimationLibrary(this_00);
  postinitialize_handler((Object *)this_00);
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    pOVar3 = *(Object **)this;
    if (pOVar3 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
    cVar1 = RefCounted::unreference();
    if (cVar1 == '\0') {
      return;
    }
    this_00 = (AnimationLibrary *)0x0;
    cVar1 = predelete_handler(pOVar3);
    if (cVar1 == '\0') {
      return;
    }
  }
  else {
    pOVar3 = *(Object **)this;
    pOVar2 = pOVar3;
    if (this_00 == (AnimationLibrary *)pOVar3) goto LAB_0011eba5;
    *(AnimationLibrary **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar2 = (Object *)this_00;
    if (((pOVar3 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar3), cVar1 == '\0')) goto LAB_0011eba5;
  }
  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
  Memory::free_static(pOVar3,false);
  pOVar2 = (Object *)this_00;
  if (this_00 == (AnimationLibrary *)0x0) {
    return;
  }
LAB_0011eba5:
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar2), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
    return;
  }
  return;
}



/* void Ref<GLTFState>::instantiate<>() */

void __thiscall Ref<GLTFState>::instantiate<>(Ref<GLTFState> *this)

{
  undefined8 uVar1;
  char cVar2;
  Resource *this_00;
  long lVar3;
  Object *pOVar4;
  Resource *pRVar5;
  Object *pOVar6;
  byte bVar7;
  
  bVar7 = 0;
  this_00 = (Resource *)operator_new(0x558,"");
  pRVar5 = this_00;
  for (lVar3 = 0xab; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined8 *)pRVar5 = 0;
    pRVar5 = pRVar5 + (ulong)bVar7 * -0x10 + 8;
  }
  Resource::Resource(this_00);
  *(undefined ***)this_00 = &PTR__initialize_classv_0012ebb8;
  *(undefined1 (*) [16])(this_00 + 0x240) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x250) = (undefined1  [16])0x0;
  Dictionary::Dictionary((Dictionary *)(this_00 + 0x260));
  uVar1 = _LC40;
  *(undefined8 *)(this_00 + 0x268) = 0;
  *(undefined1 (*) [16])(this_00 + 0x308) = (undefined1  [16])0x0;
  *(undefined8 *)(this_00 + 0x288) = uVar1;
  *(undefined2 *)(this_00 + 0x294) = 1;
  uVar1 = _LC34;
  *(undefined1 (*) [16])(this_00 + 0x318) = (undefined1  [16])0x0;
  *(undefined8 *)(this_00 + 0x328) = uVar1;
  *(undefined1 (*) [16])(this_00 + 0x338) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x370) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 1000) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x3f8) = (undefined1  [16])0x0;
  *(undefined8 *)(this_00 + 0x270) = 0;
  *(undefined8 *)(this_00 + 0x280) = 0;
  *(undefined4 *)(this_00 + 0x290) = 0;
  this_00[0x296] = (Resource)0x0;
  *(undefined4 *)(this_00 + 0x298) = 1;
  *(undefined8 *)(this_00 + 0x2a8) = 0;
  *(undefined8 *)(this_00 + 0x2b8) = 0;
  *(undefined8 *)(this_00 + 0x2c8) = 0;
  *(undefined8 *)(this_00 + 0x2d8) = 0;
  *(undefined8 *)(this_00 + 0x2e8) = 0;
  *(undefined8 *)(this_00 + 0x2f8) = 0;
  *(undefined8 *)(this_00 + 0x350) = 0;
  *(undefined8 *)(this_00 + 0x360) = 0;
  *(undefined8 *)(this_00 + 0x388) = 0;
  *(undefined8 *)(this_00 + 0x398) = 0;
  *(undefined8 *)(this_00 + 0x3a8) = 0;
  *(undefined8 *)(this_00 + 0x3b8) = 0;
  *(undefined8 *)(this_00 + 0x3c8) = 0;
  *(undefined8 *)(this_00 + 0x3d8) = 0;
  *(undefined8 *)(this_00 + 0x408) = 0;
  *(undefined8 *)(this_00 + 0x410) = uVar1;
  *(undefined8 *)(this_00 + 0x438) = uVar1;
  *(undefined8 *)(this_00 + 0x488) = uVar1;
  *(undefined8 *)(this_00 + 0x4b8) = uVar1;
  *(undefined8 *)(this_00 + 0x4e8) = uVar1;
  *(undefined8 *)(this_00 + 0x518) = uVar1;
  *(undefined8 *)(this_00 + 0x548) = uVar1;
  *(undefined8 *)(this_00 + 0x448) = 0;
  *(undefined8 *)(this_00 + 0x458) = 0;
  *(undefined1 (*) [16])(this_00 + 0x418) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x428) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x468) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x478) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x498) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x4a8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x4c8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x4d8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x4f8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x508) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x528) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x538) = (undefined1  [16])0x0;
  Dictionary::Dictionary((Dictionary *)(this_00 + 0x550));
  postinitialize_handler((Object *)this_00);
  cVar2 = RefCounted::init_ref();
  if (cVar2 == '\0') {
    pOVar6 = *(Object **)this;
    if (pOVar6 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
    cVar2 = RefCounted::unreference();
    if (cVar2 == '\0') {
      return;
    }
    this_00 = (Resource *)0x0;
    cVar2 = predelete_handler(pOVar6);
    if (cVar2 == '\0') {
      return;
    }
  }
  else {
    pOVar6 = *(Object **)this;
    pOVar4 = pOVar6;
    if (this_00 == (Resource *)pOVar6) goto LAB_0011eee5;
    *(Resource **)this = this_00;
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar4 = (Object *)this_00;
    if (((pOVar6 == (Object *)0x0) || (cVar2 = RefCounted::unreference(), cVar2 == '\0')) ||
       (cVar2 = predelete_handler(pOVar6), cVar2 == '\0')) goto LAB_0011eee5;
  }
  (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
  Memory::free_static(pOVar6,false);
  pOVar4 = (Object *)this_00;
  if (this_00 == (Resource *)0x0) {
    return;
  }
LAB_0011eee5:
  cVar2 = RefCounted::unreference();
  if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar4), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
    Memory::free_static(pOVar4,false);
    return;
  }
  return;
}



/* void Ref<GLTFSkin>::instantiate<>() */

void __thiscall Ref<GLTFSkin>::instantiate<>(Ref<GLTFSkin> *this)

{
  undefined8 uVar1;
  char cVar2;
  Resource *this_00;
  long lVar3;
  Resource *pRVar4;
  Object *pOVar5;
  Object *pOVar6;
  byte bVar7;
  
  bVar7 = 0;
  this_00 = (Resource *)operator_new(0x308,"");
  pRVar4 = this_00;
  for (lVar3 = 0x61; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined8 *)pRVar4 = 0;
    pRVar4 = pRVar4 + (ulong)bVar7 * -0x10 + 8;
  }
  Resource::Resource(this_00);
  *(undefined ***)this_00 = &PTR__initialize_classv_0012e620;
  uVar1 = _LC34;
  *(undefined4 *)(this_00 + 0x240) = 0xffffffff;
  *(undefined8 *)(this_00 + 0x250) = 0;
  *(undefined8 *)(this_00 + 0x260) = 0;
  *(undefined8 *)(this_00 + 0x270) = 0;
  *(undefined8 *)(this_00 + 0x280) = 0;
  *(undefined8 *)(this_00 + 0x290) = 0;
  *(undefined4 *)(this_00 + 0x298) = 0xffffffff;
  *(undefined8 *)(this_00 + 0x2c8) = uVar1;
  *(undefined8 *)(this_00 + 0x2f8) = uVar1;
  *(undefined8 *)(this_00 + 0x300) = 0;
  *(undefined1 (*) [16])(this_00 + 0x2a8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x2b8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x2d8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x2e8) = (undefined1  [16])0x0;
  postinitialize_handler((Object *)this_00);
  cVar2 = RefCounted::init_ref();
  if (cVar2 == '\0') {
    pOVar6 = *(Object **)this;
    if (pOVar6 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
    cVar2 = RefCounted::unreference();
    if (cVar2 == '\0') {
      return;
    }
    this_00 = (Resource *)0x0;
    cVar2 = predelete_handler(pOVar6);
    if (cVar2 == '\0') {
      return;
    }
  }
  else {
    pOVar6 = *(Object **)this;
    pOVar5 = pOVar6;
    if (this_00 == (Resource *)pOVar6) goto LAB_0011f0b5;
    *(Resource **)this = this_00;
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar5 = (Object *)this_00;
    if (((pOVar6 == (Object *)0x0) || (cVar2 = RefCounted::unreference(), cVar2 == '\0')) ||
       (cVar2 = predelete_handler(pOVar6), cVar2 == '\0')) goto LAB_0011f0b5;
  }
  (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
  Memory::free_static(pOVar6,false);
  pOVar5 = (Object *)this_00;
  if (this_00 == (Resource *)0x0) {
    return;
  }
LAB_0011f0b5:
  cVar2 = RefCounted::unreference();
  if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar5), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
    Memory::free_static(pOVar5,false);
    return;
  }
  return;
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



/* ImporterMeshInstance3D::_initialize_classv() */

void ImporterMeshInstance3D::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (Node3D::initialize_class()::initialized == '\0') {
      if (Node::initialize_class()::initialized == '\0') {
        Object::initialize_class();
        local_68 = 0;
        local_50 = 6;
        local_58 = "Object";
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "Node";
        local_70 = 0;
        local_50 = 4;
        String::parse_latin1((StrRange *)&local_70);
        StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
        if ((StringName::configured != '\0') && (local_58 != (undefined *)0x0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        if ((code *)PTR__bind_methods_00137008 != Node::_bind_methods) {
          Node::_bind_methods();
        }
        Node::initialize_class()::initialized = '\x01';
      }
      local_68 = 0;
      local_58 = "Node";
      local_50 = 4;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "Node3D";
      local_70 = 0;
      local_50 = 6;
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
      Node3D::_bind_methods();
      Node3D::initialize_class()::initialized = '\x01';
    }
    local_58 = "Node3D";
    local_68 = 0;
    local_50 = 6;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "ImporterMeshInstance3D";
    local_70 = 0;
    local_50 = 0x16;
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
    if ((code *)PTR__bind_methods_00137040 != Node3D::_bind_methods) {
      ImporterMeshInstance3D::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x0011f698) */
/* String vformat<String>(String const&, String const) */

undefined8 * vformat<String>(undefined8 *param_1,bool *param_2,String *param_3)

{
  char cVar1;
  Variant *this;
  int iVar2;
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
  iVar2 = (int)local_c8;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,param_2);
  *param_1 = local_c0[0];
  local_c0[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
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



/* WARNING: Removing unreachable block (ram,0x0011f998) */
/* String vformat<int>(String const&, int const) */

String * vformat<int>(String *param_1,int param_2)

{
  char cVar1;
  Variant *this;
  int in_EDX;
  undefined4 in_register_00000034;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c8 [8];
  undefined8 local_c0 [9];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,in_EDX);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c8);
  iVar2 = (int)local_c8;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,(bool *)CONCAT44(in_register_00000034,param_2));
  *(undefined8 *)param_1 = local_c0[0];
  local_c0[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
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



/* WARNING: Removing unreachable block (ram,0x0011fcd0) */
/* String vformat<int, String>(String const&, int const, String const) */

undefined8 * vformat<int,String>(undefined8 *param_1,bool *param_2,int param_3,String *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  int iVar3;
  long in_FS_OFFSET;
  Array local_d8 [8];
  undefined8 local_d0 [9];
  Variant local_88 [24];
  Variant local_70 [24];
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
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((Array *)local_d0,param_2);
  *param_1 = local_d0[0];
  local_d0[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_d0);
  pVVar2 = (Variant *)local_40;
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



/* WARNING: Removing unreachable block (ram,0x0011ff88) */
/* String vformat<unsigned int>(String const&, unsigned int const) */

String * vformat<unsigned_int>(String *param_1,uint param_2)

{
  char cVar1;
  Variant *this;
  uint in_EDX;
  undefined4 in_register_00000034;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c8 [8];
  undefined8 local_c0 [9];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,in_EDX);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c8);
  iVar2 = (int)local_c8;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,(bool *)CONCAT44(in_register_00000034,param_2));
  *(undefined8 *)param_1 = local_c0[0];
  local_c0[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
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



/* WARNING: Removing unreachable block (ram,0x001202c0) */
/* String vformat<unsigned long, unsigned long>(String const&, unsigned long const, unsigned long
   const) */

String * vformat<unsigned_long,unsigned_long>(String *param_1,ulong param_2,ulong param_3)

{
  Variant *pVVar1;
  Variant *pVVar2;
  ulong in_RCX;
  int iVar3;
  long in_FS_OFFSET;
  Array local_d8 [8];
  undefined8 local_d0 [9];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_88,param_3);
  Variant::Variant(local_70,in_RCX);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_d8);
  iVar3 = (int)local_d8;
  Array::resize(iVar3);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((Array *)local_d0,(bool *)param_2);
  *(undefined8 *)param_1 = local_d0[0];
  local_d0[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_d0);
  pVVar2 = (Variant *)local_40;
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



/* WARNING: Removing unreachable block (ram,0x001205b0) */
/* String vformat<int, StringName>(String const&, int const, StringName const) */

undefined8 *
vformat<int,StringName>(undefined8 *param_1,bool *param_2,int param_3,StringName *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  int iVar3;
  long in_FS_OFFSET;
  Array local_d8 [8];
  undefined8 local_d0 [9];
  Variant local_88 [24];
  Variant local_70 [24];
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
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((Array *)local_d0,param_2);
  *param_1 = local_d0[0];
  local_d0[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_d0);
  pVVar2 = (Variant *)local_40;
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



/* WARNING: Removing unreachable block (ram,0x001208a0) */
/* String vformat<int, int>(String const&, int const, int const) */

String * vformat<int,int>(String *param_1,int param_2,int param_3)

{
  Variant *pVVar1;
  Variant *pVVar2;
  int in_ECX;
  undefined4 in_register_00000034;
  int iVar3;
  long in_FS_OFFSET;
  Array local_d8 [8];
  undefined8 local_d0 [9];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_88,param_3);
  Variant::Variant(local_70,in_ECX);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_d8);
  iVar3 = (int)local_d8;
  Array::resize(iVar3);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((Array *)local_d0,(bool *)CONCAT44(in_register_00000034,param_2));
  *(undefined8 *)param_1 = local_d0[0];
  local_d0[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_d0);
  pVVar2 = (Variant *)local_40;
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



/* WARNING: Removing unreachable block (ram,0x00120b90) */
/* String vformat<String, int>(String const&, String const, int const) */

undefined8 * vformat<String,int>(undefined8 *param_1,bool *param_2,String *param_3,int param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  int iVar3;
  long in_FS_OFFSET;
  Array local_d8 [8];
  undefined8 local_d0 [9];
  Variant local_88 [24];
  Variant local_70 [24];
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
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((Array *)local_d0,param_2);
  *param_1 = local_d0[0];
  local_d0[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_d0);
  pVVar2 = (Variant *)local_40;
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



/* WARNING: Removing unreachable block (ram,0x00120e80) */
/* String vformat<String, String>(String const&, String const, String const) */

undefined8 *
vformat<String,String>(undefined8 *param_1,bool *param_2,String *param_3,String *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  int iVar3;
  long in_FS_OFFSET;
  Array local_d8 [8];
  undefined8 local_d0 [9];
  Variant local_88 [24];
  Variant local_70 [24];
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
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((Array *)local_d0,param_2);
  *param_1 = local_d0[0];
  local_d0[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_d0);
  pVVar2 = (Variant *)local_40;
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



/* void Ref<GLTFMesh>::instantiate<>() */

void __thiscall Ref<GLTFMesh>::instantiate<>(Ref<GLTFMesh> *this)

{
  char cVar1;
  Resource *this_00;
  long lVar2;
  Resource *pRVar3;
  Object *pOVar4;
  long in_FS_OFFSET;
  byte bVar5;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  bVar5 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this_00 = (Resource *)operator_new(0x270,"");
  pRVar3 = this_00;
  for (lVar2 = 0x4e; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined8 *)pRVar3 = 0;
    pRVar3 = pRVar3 + (ulong)bVar5 * -0x10 + 8;
  }
  Resource::Resource(this_00);
  *(undefined ***)this_00 = &PTR__initialize_classv_0012e270;
  *(undefined8 *)(this_00 + 600) = 0;
  *(undefined1 (*) [16])(this_00 + 0x240) = (undefined1  [16])0x0;
  Array::Array((Array *)(this_00 + 0x260));
  local_50 = (undefined1  [16])0x0;
  local_68 = "Material";
  local_58 = 0;
  local_70 = 0;
  local_60 = 8;
  String::parse_latin1((StrRange *)&local_70);
  StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
  Array::set_typed((uint)(Array *)(this_00 + 0x260),(StringName *)0x18,(Variant *)&local_68);
  if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  if (::Variant::needs_deinit[(int)local_58] != '\0') {
    ::Variant::_clear_internal();
  }
  Dictionary::Dictionary((Dictionary *)(this_00 + 0x268));
  postinitialize_handler((Object *)this_00);
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    pOVar4 = *(Object **)this;
    if (pOVar4 != (Object *)0x0) {
      *(undefined8 *)this = 0;
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
        this_00 = (Resource *)0x0;
        cVar1 = predelete_handler(pOVar4);
        if (cVar1 != '\0') goto LAB_00121233;
      }
    }
  }
  else {
    pOVar4 = *(Object **)this;
    pRVar3 = (Resource *)pOVar4;
    if (this_00 != (Resource *)pOVar4) {
      *(Resource **)this = this_00;
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)this = 0;
      }
      pRVar3 = this_00;
      if (((pOVar4 != (Object *)0x0) && (cVar1 = RefCounted::unreference(), cVar1 != '\0')) &&
         (cVar1 = predelete_handler(pOVar4), cVar1 != '\0')) {
LAB_00121233:
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
        pRVar3 = this_00;
        if (this_00 == (Resource *)0x0) goto LAB_0012116f;
      }
    }
    cVar1 = RefCounted::unreference();
    if ((cVar1 != '\0') && (cVar1 = predelete_handler((Object *)pRVar3), cVar1 != '\0')) {
      (**(code **)(*(long *)pRVar3 + 0x140))(pRVar3);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(pRVar3,false);
        return;
      }
      goto LAB_00121280;
    }
  }
LAB_0012116f:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00121280:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  
  pvVar5 = *(void **)(this + 0x18);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x3c) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x38) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x3c) = 0;
        *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x20) + lVar4) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            *(int *)(*(long *)(this + 0x20) + lVar4) = 0;
            if (::Variant::needs_deinit[*(int *)((long)pvVar5 + 0x48)] != '\0') {
              ::Variant::_clear_internal();
            }
            if (*(long *)((long)pvVar5 + 0x38) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar5 + 0x38) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar5 + 0x38);
                *(undefined8 *)((long)pvVar5 + 0x38) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar5 + 0x28) != 0)) {
              StringName::unref();
            }
            if (*(long *)((long)pvVar5 + 0x20) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar5 + 0x20) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar5 + 0x20);
                *(undefined8 *)((long)pvVar5 + 0x20) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            if (*(long *)((long)pvVar5 + 0x10) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar5 + 0x10) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar5 + 0x10);
                *(undefined8 *)((long)pvVar5 + 0x10) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            Memory::free_static(pvVar5,false);
            pvVar5 = *(void **)(this + 0x18);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0x3c) = 0;
        *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_001213e4;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_001213e4:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* RefCounted::_initialize_classv() */

void RefCounted::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_58 = 0;
    local_40 = 6;
    local_48 = "Object";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "RefCounted";
    local_60 = 0;
    local_40 = 10;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if ((code *)PTR__bind_methods_00137048 != Object::_bind_methods) {
      RefCounted::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GLTFLight::_initialize_classv() */

void GLTFLight::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (Resource::initialize_class()::initialized == '\0') {
      Resource::initialize_class();
    }
    local_58 = 0;
    local_40 = 8;
    local_48 = "Resource";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "GLTFLight";
    local_60 = 0;
    local_40 = 9;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if ((code *)PTR__bind_methods_00137050 != Resource::_bind_methods) {
      GLTFLight::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ImporterMesh::_initialize_classv() */

void ImporterMesh::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (Resource::initialize_class()::initialized == '\0') {
      Resource::initialize_class();
    }
    local_58 = 0;
    local_40 = 8;
    local_48 = "Resource";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "ImporterMesh";
    local_60 = 0;
    local_40 = 0xc;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if ((code *)PTR__bind_methods_00137058 != Resource::_bind_methods) {
      ImporterMesh::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GLTFMesh::_initialize_classv() */

void GLTFMesh::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (Resource::initialize_class()::initialized == '\0') {
      Resource::initialize_class();
    }
    local_58 = 0;
    local_40 = 8;
    local_48 = "Resource";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "GLTFMesh";
    local_60 = 0;
    local_40 = 8;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if ((code *)PTR__bind_methods_00137060 != Resource::_bind_methods) {
      GLTFMesh::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GLTFNode::_initialize_classv() */

void GLTFNode::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (Resource::initialize_class()::initialized == '\0') {
      Resource::initialize_class();
    }
    local_58 = 0;
    local_40 = 8;
    local_48 = "Resource";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "GLTFNode";
    local_60 = 0;
    local_40 = 8;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if ((code *)PTR__bind_methods_00137068 != Resource::_bind_methods) {
      GLTFNode::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GLTFSkin::_initialize_classv() */

void GLTFSkin::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (Resource::initialize_class()::initialized == '\0') {
      Resource::initialize_class();
    }
    local_58 = 0;
    local_40 = 8;
    local_48 = "Resource";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "GLTFSkin";
    local_60 = 0;
    local_40 = 8;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if ((code *)PTR__bind_methods_00137070 != Resource::_bind_methods) {
      GLTFSkin::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GLTFTexture::_initialize_classv() */

void GLTFTexture::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (Resource::initialize_class()::initialized == '\0') {
      Resource::initialize_class();
    }
    local_58 = 0;
    local_40 = 8;
    local_48 = "Resource";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "GLTFTexture";
    local_60 = 0;
    local_40 = 0xb;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if ((code *)PTR__bind_methods_00137078 != Resource::_bind_methods) {
      GLTFTexture::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FBXDocument::_initialize_classv() */

void FBXDocument::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (GLTFDocument::initialize_class()::initialized == '\0') {
      if (Resource::initialize_class()::initialized == '\0') {
        Resource::initialize_class();
      }
      local_58 = 0;
      local_40 = 8;
      local_48 = "Resource";
      String::parse_latin1((StrRange *)&local_58);
      StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
      local_48 = "GLTFDocument";
      local_60 = 0;
      local_40 = 0xc;
      String::parse_latin1((StrRange *)&local_60);
      StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
      ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_50 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      if ((code *)PTR__bind_methods_00137080 != Resource::_bind_methods) {
        GLTFDocument::_bind_methods();
      }
      GLTFDocument::initialize_class()::initialized = '\x01';
    }
    local_48 = "GLTFDocument";
    local_58 = 0;
    local_40 = 0xc;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "FBXDocument";
    local_60 = 0;
    local_40 = 0xb;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    initialize_class()::initialized = '\x01';
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* GLTFState::_initialize_classv() */

void GLTFState::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (Resource::initialize_class()::initialized == '\0') {
      Resource::initialize_class();
    }
    local_58 = 0;
    local_40 = 8;
    local_48 = "Resource";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "GLTFState";
    local_60 = 0;
    local_40 = 9;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if ((code *)PTR__bind_methods_00137088 != Resource::_bind_methods) {
      GLTFState::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ConfigFile::_initialize_classv() */

void ConfigFile::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
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
      if ((code *)PTR__bind_methods_00137008 != RefCounted::_bind_methods) {
        RefCounted::_bind_methods();
      }
      RefCounted::initialize_class()::initialized = '\x01';
    }
    local_58 = "RefCounted";
    local_68 = 0;
    local_50 = 10;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "ConfigFile";
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
    if ((code *)PTR__bind_methods_00137090 != RefCounted::_bind_methods) {
      ConfigFile::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ImporterMeshInstance3D::is_class(String const&) const */

undefined8 __thiscall ImporterMeshInstance3D::is_class(ImporterMeshInstance3D *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
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
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_001223bf;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar3 == lVar7;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar7 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_001223bf:
    cVar6 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar6 != '\0') goto LAB_00122473;
  }
  cVar6 = String::operator==(param_1,"ImporterMeshInstance3D");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar4 == (char *)0x0) {
          if (*(long *)(lVar5 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
          }
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_00122473;
    }
    cVar6 = String::operator==(param_1,"Node3D");
    if (cVar6 == '\0') {
      for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
        lVar5 = *(long *)(lVar2 + 0x20);
        if (lVar5 == 0) {
          local_60 = 0;
        }
        else {
          pcVar4 = *(char **)(lVar5 + 8);
          local_60 = 0;
          if (pcVar4 == (char *)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
          }
          else {
            local_50 = strlen(pcVar4);
            local_58 = pcVar4;
            String::parse_latin1((StrRange *)&local_60);
          }
        }
        cVar6 = String::operator==(param_1,(String *)&local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if (cVar6 != '\0') goto LAB_00122473;
      }
      cVar6 = String::operator==(param_1,"Node");
      if (cVar6 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar8 = Object::is_class((Object *)this,param_1);
          return uVar8;
        }
        goto LAB_0012263e;
      }
    }
  }
LAB_00122473:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0012263e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* StandardMaterial3D::_initialize_classv() */

void StandardMaterial3D::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (BaseMaterial3D::initialize_class()::initialized == '\0') {
      if (Material::initialize_class()::initialized == '\0') {
        if (Resource::initialize_class()::initialized == '\0') {
          Resource::initialize_class();
        }
        local_68 = 0;
        local_50 = 8;
        local_58 = "Resource";
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "Material";
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
        if ((code *)_GLOBAL_OFFSET_TABLE_ != Material::_bind_methods) {
          Material::_bind_methods();
        }
        Material::initialize_class()::initialized = '\x01';
      }
      local_58 = "Material";
      local_68 = 0;
      local_50 = 8;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "BaseMaterial3D";
      local_70 = 0;
      local_50 = 0xe;
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
      if ((code *)PTR__bind_methods_00137098 != Material::_bind_methods) {
        BaseMaterial3D::_bind_methods();
      }
      BaseMaterial3D::initialize_class()::initialized = '\x01';
    }
    local_58 = "BaseMaterial3D";
    local_68 = 0;
    local_50 = 0xe;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "StandardMaterial3D";
    local_70 = 0;
    local_50 = 0x12;
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
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void RefCounted::_get_property_listv(List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  undefined7 in_register_00000031;
  List *pLVar5;
  long in_FS_OFFSET;
  StringName *local_a8;
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
  
  pLVar5 = (List *)CONCAT71(in_register_00000031,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = "RefCounted";
  local_88 = 0;
  local_90 = 0;
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
LAB_0012363d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0012363d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar5;
      local_68 = local_80;
      goto joined_r0x0012365f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar5;
joined_r0x0012365f:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])pLVar5 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_a8 = (StringName *)&local_68;
  puVar4 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *puVar4 = 0;
  puVar4[6] = 0;
  puVar4[10] = 6;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar4 + 0xc) = (undefined1  [16])0x0;
  *puVar4 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar4 + 4),local_a8);
  puVar4[6] = local_60;
  if (*(long *)(puVar4 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_58);
  }
  puVar4[10] = local_50;
  plVar1 = *(long **)pLVar5;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar4 + 0xc) = 0;
  *(long **)(puVar4 + 0x10) = plVar1;
  *(long *)(puVar4 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar4;
  }
  plVar1[1] = (long)puVar4;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar4;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"RefCounted",false);
  ClassDB::get_property_list((StringName *)&local_78,pLVar5,true,(Object *)param_1);
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
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
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
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_00123991;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00123991:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
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



/* ImporterMesh::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall ImporterMesh::_get_property_listv(ImporterMesh *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Resource::_get_property_listv((Resource *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "ImporterMesh";
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ImporterMesh";
  local_98 = 0;
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_00123c41;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00123c41:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"ImporterMesh",false);
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



/* GLTFDocument::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall GLTFDocument::_get_property_listv(GLTFDocument *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Resource::_get_property_listv((Resource *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "GLTFDocument";
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "GLTFDocument";
  local_98 = 0;
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_00123ef1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00123ef1:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"GLTFDocument",false);
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



/* GLTFSkin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall GLTFSkin::_get_property_listv(GLTFSkin *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  long in_FS_OFFSET;
  StringName *local_a8;
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
  local_78 = "GLTFSkin";
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "GLTFSkin";
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
LAB_001241cd:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001241cd;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001241ef;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001241ef:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_a8 = (StringName *)&local_68;
  puVar4 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *puVar4 = 0;
  puVar4[6] = 0;
  puVar4[10] = 6;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar4 + 0xc) = (undefined1  [16])0x0;
  *puVar4 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar4 + 4),local_a8);
  puVar4[6] = local_60;
  if (*(long *)(puVar4 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_58);
  }
  puVar4[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar4 + 0xc) = 0;
  *(long **)(puVar4 + 0x10) = plVar1;
  *(long *)(puVar4 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar4;
  }
  plVar1[1] = (long)puVar4;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar4;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"GLTFSkin",false);
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



/* GLTFLight::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall GLTFLight::_get_property_listv(GLTFLight *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Resource::_get_property_listv((Resource *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "GLTFLight";
  local_70 = 9;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "GLTFLight";
  local_98 = 0;
  local_70 = 9;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_00124581;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00124581:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"GLTFLight",false);
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



/* ConfigFile::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall ConfigFile::_get_property_listv(ConfigFile *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "ConfigFile";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ConfigFile";
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
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_00124831;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00124831:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"ConfigFile",false);
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



/* GLTFTexture::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall GLTFTexture::_get_property_listv(GLTFTexture *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  long in_FS_OFFSET;
  StringName *local_a8;
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
  local_78 = "GLTFTexture";
  local_70 = 0xb;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "GLTFTexture";
  local_98 = 0;
  local_70 = 0xb;
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
LAB_00124b0d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00124b0d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00124b2f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00124b2f:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_a8 = (StringName *)&local_68;
  puVar4 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *puVar4 = 0;
  puVar4[6] = 0;
  puVar4[10] = 6;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar4 + 0xc) = (undefined1  [16])0x0;
  *puVar4 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar4 + 4),local_a8);
  puVar4[6] = local_60;
  if (*(long *)(puVar4 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_58);
  }
  puVar4[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar4 + 0xc) = 0;
  *(long **)(puVar4 + 0x10) = plVar1;
  *(long *)(puVar4 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar4;
  }
  plVar1[1] = (long)puVar4;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar4;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"GLTFTexture",false);
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



/* GLTFMesh::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall GLTFMesh::_get_property_listv(GLTFMesh *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Resource::_get_property_listv((Resource *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "GLTFMesh";
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "GLTFMesh";
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
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_00124ec1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00124ec1:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"GLTFMesh",false);
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



/* FBXDocument::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall FBXDocument::_get_property_listv(FBXDocument *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    GLTFDocument::_get_property_listv((GLTFDocument *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "FBXDocument";
  local_70 = 0xb;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "FBXDocument";
  local_98 = 0;
  local_70 = 0xb;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_00125171;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00125171:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"FBXDocument",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      GLTFDocument::_get_property_listv((GLTFDocument *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GLTFState::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall GLTFState::_get_property_listv(GLTFState *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Resource::_get_property_listv((Resource *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "GLTFState";
  local_70 = 9;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "GLTFState";
  local_98 = 0;
  local_70 = 9;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_00125421;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00125421:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"GLTFState",false);
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



/* GLTFNode::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall GLTFNode::_get_property_listv(GLTFNode *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Resource::_get_property_listv((Resource *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "GLTFNode";
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "GLTFNode";
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
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_001256d1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001256d1:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"GLTFNode",false);
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



/* Material::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Material::_get_property_listv(Material *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Resource::_get_property_listv((Resource *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Material";
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Material";
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
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_00125981;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00125981:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Material",false);
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



/* BaseMaterial3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall BaseMaterial3D::_get_property_listv(BaseMaterial3D *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Material::_get_property_listv((Material *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "BaseMaterial3D";
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "BaseMaterial3D";
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
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_00125c31;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00125c31:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"BaseMaterial3D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Material::_get_property_listv((Material *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* StandardMaterial3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
StandardMaterial3D::_get_property_listv(StandardMaterial3D *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    BaseMaterial3D::_get_property_listv((BaseMaterial3D *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "StandardMaterial3D";
  local_70 = 0x12;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "StandardMaterial3D";
  local_98 = 0;
  local_70 = 0x12;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_00125ee1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00125ee1:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"StandardMaterial3D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      BaseMaterial3D::_get_property_listv((BaseMaterial3D *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Node3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Node3D::_get_property_listv(Node3D *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b8;
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    local_80 = 0;
    local_88 = 0;
    local_78 = "Node";
    local_70 = 4;
    String::parse_latin1((StrRange *)&local_88);
    local_78 = "Node";
    local_90 = 0;
    local_70 = 4;
    String::parse_latin1((StrRange *)&local_90);
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
               &local_80);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_78,"Node",false);
    ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
    if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
      StringName::unref();
    }
  }
  local_b0 = (CowData<char32_t> *)&local_70;
  local_b8 = (CowData<char32_t> *)&local_58;
  local_88 = 0;
  local_90 = 0;
  local_78 = "Node3D";
  local_70 = 6;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Node3D";
  local_98 = 0;
  local_70 = 6;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref(local_b0,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref(local_b8,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)local_b8,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0012618f;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0012618f:
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b8);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref(local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Node3D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    local_80 = 0;
    local_78 = "Node";
    local_88 = 0;
    local_70 = 4;
    String::parse_latin1((StrRange *)&local_88);
    local_78 = "Node";
    local_90 = 0;
    local_70 = 4;
    String::parse_latin1((StrRange *)&local_90);
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
               &local_80);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
    CowData<char32_t>::_unref(local_b8);
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref(local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_78,"Node",false);
    ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
    if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
      StringName::unref();
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ImporterMeshInstance3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
ImporterMeshInstance3D::_get_property_listv(ImporterMeshInstance3D *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Node3D::_get_property_listv((Node3D *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "ImporterMeshInstance3D";
  local_70 = 0x16;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ImporterMeshInstance3D";
  local_98 = 0;
  local_70 = 0x16;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_00126681;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00126681:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"ImporterMeshInstance3D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Node3D::_get_property_listv((Node3D *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Ref<Material>::unref() */

void __thiscall Ref<Material>::unref(Ref<Material> *this)

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



/* Ref<ArrayMesh>::unref() */

void __thiscall Ref<ArrayMesh>::unref(Ref<ArrayMesh> *this)

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



/* Ref<GLTFNode>::unref() */

void __thiscall Ref<GLTFNode>::unref(Ref<GLTFNode> *this)

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



/* Ref<GLTFTexture>::unref() */

void __thiscall Ref<GLTFTexture>::unref(Ref<GLTFTexture> *this)

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



/* Ref<FileAccess>::unref() */

void __thiscall Ref<FileAccess>::unref(Ref<FileAccess> *this)

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



/* Ref<ImporterMesh>::unref() */

void __thiscall Ref<ImporterMesh>::unref(Ref<ImporterMesh> *this)

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



/* Ref<SurfaceTool>::unref() */

void __thiscall Ref<SurfaceTool>::unref(Ref<SurfaceTool> *this)

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



/* Ref<GLTFMesh>::unref() */

void __thiscall Ref<GLTFMesh>::unref(Ref<GLTFMesh> *this)

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



/* Ref<Texture2D>::unref() */

void __thiscall Ref<Texture2D>::unref(Ref<Texture2D> *this)

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



/* Ref<FBXState>::unref() */

void __thiscall Ref<FBXState>::unref(Ref<FBXState> *this)

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



/* HashMap<Pair<unsigned long, unsigned long>, int, PairHash<unsigned long, unsigned long>,
   HashMapComparatorDefault<Pair<unsigned long, unsigned long> >,
   DefaultTypedAllocator<HashMapElement<Pair<unsigned long, unsigned long>, int> >
   >::_lookup_pos(Pair<unsigned long, unsigned long> const&, unsigned int&) const */

undefined8 __thiscall
HashMap<Pair<unsigned_long,unsigned_long>,int,PairHash<unsigned_long,unsigned_long>,HashMapComparatorDefault<Pair<unsigned_long,unsigned_long>>,DefaultTypedAllocator<HashMapElement<Pair<unsigned_long,unsigned_long>,int>>>
::_lookup_pos(HashMap<Pair<unsigned_long,unsigned_long>,int,PairHash<unsigned_long,unsigned_long>,HashMapComparatorDefault<Pair<unsigned_long,unsigned_long>>,DefaultTypedAllocator<HashMapElement<Pair<unsigned_long,unsigned_long>,int>>>
              *this,Pair *param_1,uint *param_2)

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
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  
  if ((*(long *)(this + 8) != 0) && (*(int *)(this + 0x2c) != 0)) {
    uVar15 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4));
    lVar1 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar10 = *(long *)param_1 * 0x3ffff - 1;
    uVar10 = (uVar10 ^ uVar10 >> 0x1f) * 0x15;
    uVar10 = (uVar10 ^ uVar10 >> 0xb) * 0x41;
    uVar11 = *(long *)(param_1 + 8) * 0x3ffff - 1;
    uVar11 = (uVar11 ^ uVar11 >> 0x1f) * 0x15;
    uVar11 = (uVar11 ^ uVar11 >> 0xb) * 0x41;
    uVar10 = ((ulong)((uint)(uVar11 >> 0x16) ^ (uint)uVar11) | (uVar10 >> 0x16 ^ uVar10) << 0x20) *
             0x3ffff - 1;
    uVar10 = (uVar10 ^ uVar10 >> 0x1f) * 0x15;
    uVar10 = (uVar10 ^ uVar10 >> 0xb) * 0x41;
    uVar10 = uVar10 >> 0x16 ^ uVar10;
    uVar11 = uVar10 & 0xffffffff;
    if ((int)uVar10 == 0) {
      uVar11 = 1;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar11 * lVar1;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar15;
    lVar13 = SUB168(auVar2 * auVar6,8);
    uVar14 = *(uint *)(*(long *)(this + 0x10) + lVar13 * 4);
    uVar12 = SUB164(auVar2 * auVar6,8);
    if (uVar14 != 0) {
      uVar16 = 0;
      while ((((uint)uVar11 != uVar14 ||
              (lVar13 = *(long *)(*(long *)(this + 8) + lVar13 * 8),
              *(long *)(lVar13 + 0x10) != *(long *)param_1)) ||
             (*(long *)(lVar13 + 0x18) != *(long *)(param_1 + 8)))) {
        uVar16 = uVar16 + 1;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (ulong)(uVar12 + 1) * lVar1;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar15;
        lVar13 = SUB168(auVar3 * auVar7,8);
        uVar14 = *(uint *)(*(long *)(this + 0x10) + lVar13 * 4);
        uVar12 = SUB164(auVar3 * auVar7,8);
        if ((uVar14 == 0) ||
           (auVar4._8_8_ = 0, auVar4._0_8_ = (ulong)uVar14 * lVar1, auVar8._8_8_ = 0,
           auVar8._0_8_ = uVar15, auVar5._8_8_ = 0,
           auVar5._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                            (ulong)*(uint *)(this + 0x28) * 4) + uVar12) -
                                 SUB164(auVar4 * auVar8,8)) * lVar1, auVar9._8_8_ = 0,
           auVar9._0_8_ = uVar15, SUB164(auVar5 * auVar9,8) < uVar16)) {
          return 0;
        }
      }
      *param_2 = uVar12;
      return 1;
    }
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<Pair<unsigned long, unsigned long>, int, PairHash<unsigned long, unsigned long>,
   HashMapComparatorDefault<Pair<unsigned long, unsigned long> >,
   DefaultTypedAllocator<HashMapElement<Pair<unsigned long, unsigned long>, int> >
   >::operator[](Pair<unsigned long, unsigned long> const&) */

undefined1 (*) [16] __thiscall
HashMap<Pair<unsigned_long,unsigned_long>,int,PairHash<unsigned_long,unsigned_long>,HashMapComparatorDefault<Pair<unsigned_long,unsigned_long>>,DefaultTypedAllocator<HashMapElement<Pair<unsigned_long,unsigned_long>,int>>>
::operator[](HashMap<Pair<unsigned_long,unsigned_long>,int,PairHash<unsigned_long,unsigned_long>,HashMapComparatorDefault<Pair<unsigned_long,unsigned_long>>,DefaultTypedAllocator<HashMapElement<Pair<unsigned_long,unsigned_long>,int>>>
             *this,Pair *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  void *pvVar4;
  void *__s;
  long lVar5;
  long lVar6;
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
  undefined1 (*pauVar23) [16];
  char cVar24;
  ulong uVar25;
  undefined8 uVar26;
  void *__s_00;
  undefined1 (*pauVar27) [16];
  ulong uVar28;
  void *pvVar29;
  int iVar30;
  long lVar31;
  long lVar32;
  uint uVar33;
  ulong uVar34;
  undefined8 uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  undefined1 (*pauVar39) [16];
  long in_FS_OFFSET;
  uint local_c8;
  uint local_70;
  uint local_6c [5];
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = 0;
  cVar24 = _lookup_pos(this,param_1,&local_70);
  if (cVar24 == '\0') {
    uVar33 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (*(long *)(this + 8) == 0) {
      uVar34 = (ulong)uVar33;
      uVar25 = uVar34 * 4;
      uVar28 = uVar34 * 8;
      uVar26 = Memory::alloc_static(uVar25,false);
      *(undefined8 *)(this + 0x10) = uVar26;
      pvVar29 = (void *)Memory::alloc_static(uVar28,false);
      *(void **)(this + 8) = pvVar29;
      if (uVar33 != 0) {
        pvVar4 = *(void **)(this + 0x10);
        if ((pvVar4 < (void *)((long)pvVar29 + uVar28)) &&
           (pvVar29 < (void *)((long)pvVar4 + uVar25))) {
          uVar25 = 0;
          do {
            *(undefined4 *)((long)pvVar4 + uVar25 * 4) = 0;
            *(undefined8 *)((long)pvVar29 + uVar25 * 8) = 0;
            uVar25 = uVar25 + 1;
          } while (uVar34 != uVar25);
        }
        else {
          memset(pvVar4,0,uVar25);
          memset(pvVar29,0,uVar28);
        }
      }
    }
    local_6c[0] = 0;
    cVar24 = _lookup_pos(this,param_1,local_6c);
    if (cVar24 == '\0') {
      if ((float)uVar33 * __LC29 < (float)(*(int *)(this + 0x2c) + 1)) {
        uVar33 = *(uint *)(this + 0x28);
        if (uVar33 == 0x1c) {
          pauVar27 = (undefined1 (*) [16])0x0;
          _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                           "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                           ,"Hash table maximum capacity reached, aborting insertion.",0,0);
          goto LAB_001272d7;
        }
        uVar25 = (ulong)(uVar33 + 1);
        *(undefined4 *)(this + 0x2c) = 0;
        uVar3 = *(uint *)(hash_table_size_primes + (ulong)uVar33 * 4);
        if (uVar33 + 1 < 2) {
          uVar25 = 2;
        }
        uVar33 = *(uint *)(hash_table_size_primes + uVar25 * 4);
        uVar34 = (ulong)uVar33;
        *(int *)(this + 0x28) = (int)uVar25;
        pvVar29 = *(void **)(this + 8);
        uVar25 = uVar34 * 4;
        uVar28 = uVar34 * 8;
        pvVar4 = *(void **)(this + 0x10);
        uVar26 = Memory::alloc_static(uVar25,false);
        *(undefined8 *)(this + 0x10) = uVar26;
        __s_00 = (void *)Memory::alloc_static(uVar28,false);
        *(void **)(this + 8) = __s_00;
        if (uVar33 != 0) {
          __s = *(void **)(this + 0x10);
          if ((__s < (void *)((long)__s_00 + uVar28)) && (__s_00 < (void *)((long)__s + uVar25))) {
            uVar25 = 0;
            do {
              *(undefined4 *)((long)__s + uVar25 * 4) = 0;
              *(undefined8 *)((long)__s_00 + uVar25 * 8) = 0;
              uVar25 = uVar25 + 1;
            } while (uVar25 != uVar34);
          }
          else {
            memset(__s,0,uVar25);
            memset(__s_00,0,uVar28);
          }
        }
        if (uVar3 != 0) {
          uVar25 = 0;
          do {
            uVar33 = *(uint *)((long)pvVar4 + uVar25 * 4);
            if (uVar33 != 0) {
              uVar36 = 0;
              lVar5 = *(long *)(this + 0x10);
              lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
              uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
              uVar28 = CONCAT44(0,uVar38);
              auVar7._8_8_ = 0;
              auVar7._0_8_ = (ulong)uVar33 * lVar6;
              auVar15._8_8_ = 0;
              auVar15._0_8_ = uVar28;
              lVar31 = SUB168(auVar7 * auVar15,8);
              puVar1 = (uint *)(lVar5 + lVar31 * 4);
              iVar30 = SUB164(auVar7 * auVar15,8);
              uVar37 = *puVar1;
              uVar26 = *(undefined8 *)((long)pvVar29 + uVar25 * 8);
              while (uVar37 != 0) {
                auVar8._8_8_ = 0;
                auVar8._0_8_ = (ulong)uVar37 * lVar6;
                auVar16._8_8_ = 0;
                auVar16._0_8_ = uVar28;
                auVar9._8_8_ = 0;
                auVar9._0_8_ = (ulong)((uVar38 + iVar30) - SUB164(auVar8 * auVar16,8)) * lVar6;
                auVar17._8_8_ = 0;
                auVar17._0_8_ = uVar28;
                local_c8 = SUB164(auVar9 * auVar17,8);
                uVar35 = uVar26;
                if (local_c8 < uVar36) {
                  *puVar1 = uVar33;
                  puVar2 = (undefined8 *)((long)__s_00 + lVar31 * 8);
                  uVar35 = *puVar2;
                  *puVar2 = uVar26;
                  uVar33 = uVar37;
                  uVar36 = local_c8;
                }
                uVar36 = uVar36 + 1;
                auVar10._8_8_ = 0;
                auVar10._0_8_ = (ulong)(iVar30 + 1) * lVar6;
                auVar18._8_8_ = 0;
                auVar18._0_8_ = uVar28;
                lVar31 = SUB168(auVar10 * auVar18,8);
                puVar1 = (uint *)(lVar5 + lVar31 * 4);
                iVar30 = SUB164(auVar10 * auVar18,8);
                uVar26 = uVar35;
                uVar37 = *puVar1;
              }
              *(undefined8 *)((long)__s_00 + lVar31 * 8) = uVar26;
              *puVar1 = uVar33;
              *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
            }
            uVar25 = uVar25 + 1;
          } while (uVar25 != uVar3);
          Memory::free_static(pvVar29,false);
          Memory::free_static(pvVar4,false);
        }
      }
      local_58 = *(undefined8 *)param_1;
      uStack_50 = *(undefined8 *)(param_1 + 8);
      pauVar27 = (undefined1 (*) [16])operator_new(0x28,"");
      *(undefined4 *)pauVar27[2] = 0;
      *pauVar27 = (undefined1  [16])0x0;
      *(undefined8 *)pauVar27[1] = local_58;
      *(undefined8 *)(pauVar27[1] + 8) = uStack_50;
      puVar2 = *(undefined8 **)(this + 0x20);
      if (puVar2 == (undefined8 *)0x0) {
        *(undefined1 (**) [16])(this + 0x18) = pauVar27;
      }
      else {
        *puVar2 = pauVar27;
        *(undefined8 **)(*pauVar27 + 8) = puVar2;
      }
      lVar5 = *(long *)param_1;
      lVar6 = *(long *)(param_1 + 8);
      *(undefined1 (**) [16])(this + 0x20) = pauVar27;
      lVar31 = *(long *)(this + 0x10);
      uVar25 = lVar5 * 0x3ffff - 1;
      uVar25 = (uVar25 ^ uVar25 >> 0x1f) * 0x15;
      uVar25 = (uVar25 ^ uVar25 >> 0xb) * 0x41;
      uVar28 = lVar6 * 0x3ffff - 1;
      uVar28 = (uVar28 ^ uVar28 >> 0x1f) * 0x15;
      uVar28 = (uVar28 ^ uVar28 >> 0xb) * 0x41;
      uVar25 = ((ulong)((uint)(uVar28 >> 0x16) ^ (uint)uVar28) | (uVar25 >> 0x16 ^ uVar25) << 0x20)
               * 0x3ffff - 1;
      uVar25 = (uVar25 ^ uVar25 >> 0x1f) * 0x15;
      uVar25 = (uVar25 ^ uVar25 >> 0xb) * 0x41;
      uVar25 = uVar25 >> 0x16 ^ uVar25;
      uVar28 = uVar25 & 0xffffffff;
      if ((int)uVar25 == 0) {
        uVar28 = 1;
      }
      uVar37 = 0;
      lVar5 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar38 = (uint)uVar28;
      uVar33 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      uVar25 = CONCAT44(0,uVar33);
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar28 * lVar5;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar25;
      lVar32 = SUB168(auVar11 * auVar19,8);
      lVar6 = *(long *)(this + 8);
      puVar1 = (uint *)(lVar31 + lVar32 * 4);
      iVar30 = SUB164(auVar11 * auVar19,8);
      uVar3 = *puVar1;
      pauVar23 = pauVar27;
      while (uVar3 != 0) {
        auVar12._8_8_ = 0;
        auVar12._0_8_ = (ulong)uVar3 * lVar5;
        auVar20._8_8_ = 0;
        auVar20._0_8_ = uVar25;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = (ulong)((uVar33 + iVar30) - SUB164(auVar12 * auVar20,8)) * lVar5;
        auVar21._8_8_ = 0;
        auVar21._0_8_ = uVar25;
        local_c8 = SUB164(auVar13 * auVar21,8);
        pauVar39 = pauVar23;
        if (local_c8 < uVar37) {
          *puVar1 = (uint)uVar28;
          uVar28 = (ulong)uVar3;
          puVar2 = (undefined8 *)(lVar6 + lVar32 * 8);
          pauVar39 = (undefined1 (*) [16])*puVar2;
          *puVar2 = pauVar23;
          uVar37 = local_c8;
        }
        uVar38 = (uint)uVar28;
        uVar37 = uVar37 + 1;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = (ulong)(iVar30 + 1) * lVar5;
        auVar22._8_8_ = 0;
        auVar22._0_8_ = uVar25;
        lVar32 = SUB168(auVar14 * auVar22,8);
        puVar1 = (uint *)(lVar31 + lVar32 * 4);
        iVar30 = SUB164(auVar14 * auVar22,8);
        pauVar23 = pauVar39;
        uVar3 = *puVar1;
      }
      *(undefined1 (**) [16])(lVar6 + lVar32 * 8) = pauVar23;
      *puVar1 = uVar38;
      *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
    }
    else {
      pauVar27 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)local_6c[0] * 8);
      *(undefined4 *)pauVar27[2] = 0;
    }
  }
  else {
    pauVar27 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)local_70 * 8);
  }
LAB_001272d7:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar27 + 2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Ref<GLTFAnimation>::unref() */

void __thiscall Ref<GLTFAnimation>::unref(Ref<GLTFAnimation> *this)

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



/* Ref<AnimationLibrary>::unref() */

void __thiscall Ref<AnimationLibrary>::unref(Ref<AnimationLibrary> *this)

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



/* HashMap<ObjectID, HashMap<ObjectID, int, HashMapHasherDefault,
   HashMapComparatorDefault<ObjectID>, DefaultTypedAllocator<HashMapElement<ObjectID, int> > >,
   HashMapHasherDefault, HashMapComparatorDefault<ObjectID>,
   DefaultTypedAllocator<HashMapElement<ObjectID, HashMap<ObjectID, int, HashMapHasherDefault,
   HashMapComparatorDefault<ObjectID>, DefaultTypedAllocator<HashMapElement<ObjectID, int> > > > >
   >::~HashMap() */

void __thiscall
HashMap<ObjectID,HashMap<ObjectID,int,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,int>>>,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,HashMap<ObjectID,int,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,int>>>>>>
::~HashMap(HashMap<ObjectID,HashMap<ObjectID,int,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,int>>>,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,HashMap<ObjectID,int,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,int>>>>>>
           *this)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  long lVar7;
  
  pvVar6 = *(void **)(this + 8);
  if (pvVar6 == (void *)0x0) {
    return;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (uVar1 == 0) {
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    }
    else {
      lVar7 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x10) + lVar7) != 0) {
          pvVar6 = *(void **)((long)pvVar6 + lVar7 * 2);
          *(int *)(*(long *)(this + 0x10) + lVar7) = 0;
          pvVar5 = *(void **)((long)pvVar6 + 0x20);
          if (pvVar5 != (void *)0x0) {
            if (*(int *)((long)pvVar6 + 0x44) != 0) {
              uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)((long)pvVar6 + 0x40) * 4);
              if (uVar2 == 0) {
                *(undefined4 *)((long)pvVar6 + 0x44) = 0;
                *(undefined1 (*) [16])((long)pvVar6 + 0x30) = (undefined1  [16])0x0;
              }
              else {
                lVar4 = 0;
                do {
                  piVar3 = (int *)(*(long *)((long)pvVar6 + 0x28) + lVar4);
                  if (*piVar3 != 0) {
                    *piVar3 = 0;
                    Memory::free_static(*(void **)((long)pvVar5 + lVar4 * 2),false);
                    pvVar5 = *(void **)((long)pvVar6 + 0x20);
                    *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
                  }
                  lVar4 = lVar4 + 4;
                } while (lVar4 != (ulong)uVar2 * 4);
                *(undefined4 *)((long)pvVar6 + 0x44) = 0;
                *(undefined1 (*) [16])((long)pvVar6 + 0x30) = (undefined1  [16])0x0;
                if (pvVar5 == (void *)0x0) goto LAB_0012760b;
              }
            }
            Memory::free_static(pvVar5,false);
            Memory::free_static(*(void **)((long)pvVar6 + 0x28),false);
          }
LAB_0012760b:
          Memory::free_static(pvVar6,false);
          pvVar6 = *(void **)(this + 8);
          *(undefined8 *)((long)pvVar6 + lVar7 * 2) = 0;
        }
        lVar7 = lVar7 + 4;
      } while (lVar7 != (ulong)uVar1 << 2);
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
      if (pvVar6 == (void *)0x0) {
        return;
      }
    }
  }
  Memory::free_static(pvVar6,false);
  Memory::free_static(*(void **)(this + 0x10),false);
  return;
}



/* Ref<GLTFSkin>::unref() */

void __thiscall Ref<GLTFSkin>::unref(Ref<GLTFSkin> *this)

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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<Vector3>::resize<false>(long) */

undefined8 __thiscall CowData<Vector3>::resize<false>(CowData<Vector3> *this,long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  void *pvVar7;
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
    lVar2 = lVar8 * 0xc;
    if (lVar2 != 0) {
      uVar3 = lVar2 - 1U | lVar2 - 1U >> 1;
      uVar3 = uVar3 | uVar3 >> 2;
      uVar3 = uVar3 | uVar3 >> 4;
      uVar3 = uVar3 | uVar3 >> 8;
      uVar3 = uVar3 | uVar3 >> 0x10;
      lVar2 = (uVar3 | uVar3 >> 0x20) + 1;
    }
  }
  if (param_1 * 0xc == 0) {
LAB_00127aa0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar3 = param_1 * 0xc - 1;
  uVar3 = uVar3 >> 1 | uVar3;
  uVar3 = uVar3 | uVar3 >> 2;
  uVar3 = uVar3 | uVar3 >> 4;
  uVar3 = uVar3 | uVar3 >> 8;
  uVar3 = uVar3 | uVar3 >> 0x10;
  uVar3 = uVar3 | uVar3 >> 0x20;
  if (uVar3 == 0xffffffffffffffff) goto LAB_00127aa0;
  if (param_1 <= lVar8) {
    puVar4 = *(undefined8 **)this;
    if (uVar3 + 1 != lVar2) {
      puVar4 = puVar4 + -2;
      puVar5 = (undefined8 *)Memory::realloc_static(puVar4,uVar3 + 0x11,false);
      if (puVar5 != (undefined8 *)0x0) {
        puVar4 = puVar5 + 2;
        *puVar5 = 1;
        *(undefined8 **)this = puVar4;
        goto LAB_001279a2;
      }
      uVar6 = CowData<Vector2>::_realloc((long)puVar4);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      puVar4 = *(undefined8 **)this;
    }
    if (puVar4 == (undefined8 *)0x0) {
      _DAT_00000000 = 0;
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
LAB_001279a2:
    puVar4[-1] = param_1;
    return 0;
  }
  if (uVar3 + 1 == lVar2) {
LAB_001279e8:
    puVar5 = *(undefined8 **)this;
    if (puVar5 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar8 = puVar5[-1];
LAB_001279f9:
    if (param_1 <= lVar8) goto LAB_0012796f;
  }
  else {
    if (lVar8 != 0) {
      pvVar7 = (void *)(*(long *)this + -0x10);
      puVar4 = (undefined8 *)Memory::realloc_static(pvVar7,uVar3 + 0x11,false);
      if (puVar4 == (undefined8 *)0x0) {
        uVar6 = CowData<Vector2>::_realloc((long)pvVar7);
        if ((int)uVar6 != 0) {
          return uVar6;
        }
        goto LAB_001279e8;
      }
      puVar5 = puVar4 + 2;
      *puVar4 = 1;
      *(undefined8 **)this = puVar5;
      lVar8 = puVar4[1];
      goto LAB_001279f9;
    }
    puVar4 = (undefined8 *)Memory::alloc_static(uVar3 + 0x11,false);
    if (puVar4 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar5 = puVar4 + 2;
    *puVar4 = 1;
    puVar4[1] = 0;
    *(undefined8 **)this = puVar5;
    lVar8 = 0;
  }
  memset((void *)((long)puVar5 + lVar8 * 0xc),0,(param_1 - lVar8) * 0xc);
LAB_0012796f:
  puVar5[-1] = param_1;
  return 0;
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



/* GLTFSkin::~GLTFSkin() */

void __thiscall GLTFSkin::~GLTFSkin(GLTFSkin *this)

{
  long *plVar1;
  uint uVar2;
  Object *pOVar3;
  char cVar4;
  long lVar5;
  void *pvVar6;
  bool bVar7;
  
  *(undefined ***)this = &PTR__initialize_classv_0012e620;
  if (*(long *)(this + 0x300) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x300);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  pvVar6 = *(void **)(this + 0x2d8);
  if (pvVar6 != (void *)0x0) {
    if (*(int *)(this + 0x2fc) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x2f8) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x2fc) = 0;
        *(undefined1 (*) [16])(this + 0x2e8) = (undefined1  [16])0x0;
      }
      else {
        lVar5 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x2e0) + lVar5) != 0) {
            bVar7 = StringName::configured != '\0';
            *(int *)(*(long *)(this + 0x2e0) + lVar5) = 0;
            pvVar6 = *(void **)((long)pvVar6 + lVar5 * 2);
            if ((bVar7) && (*(long *)((long)pvVar6 + 0x18) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar6,false);
            pvVar6 = *(void **)(this + 0x2d8);
            *(undefined8 *)((long)pvVar6 + lVar5 * 2) = 0;
          }
          lVar5 = lVar5 + 4;
        } while ((ulong)uVar2 << 2 != lVar5);
        *(undefined4 *)(this + 0x2fc) = 0;
        *(undefined1 (*) [16])(this + 0x2e8) = (undefined1  [16])0x0;
        if (pvVar6 == (void *)0x0) goto LAB_00127ca2;
      }
    }
    Memory::free_static(pvVar6,false);
    Memory::free_static(*(void **)(this + 0x2e0),false);
  }
LAB_00127ca2:
  pvVar6 = *(void **)(this + 0x2a8);
  if (pvVar6 != (void *)0x0) {
    if (*(int *)(this + 0x2cc) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x2c8) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x2cc) = 0;
        *(undefined1 (*) [16])(this + 0x2b8) = (undefined1  [16])0x0;
      }
      else {
        lVar5 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x2b0) + lVar5) != 0) {
            *(int *)(*(long *)(this + 0x2b0) + lVar5) = 0;
            Memory::free_static(*(void **)((long)pvVar6 + lVar5 * 2),false);
            pvVar6 = *(void **)(this + 0x2a8);
            *(undefined8 *)((long)pvVar6 + lVar5 * 2) = 0;
          }
          lVar5 = lVar5 + 4;
        } while (lVar5 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0x2cc) = 0;
        *(undefined1 (*) [16])(this + 0x2b8) = (undefined1  [16])0x0;
        if (pvVar6 == (void *)0x0) goto LAB_00127d37;
      }
    }
    Memory::free_static(pvVar6,false);
    Memory::free_static(*(void **)(this + 0x2b0),false);
  }
LAB_00127d37:
  CowData<int>::_unref((CowData<int> *)(this + 0x290));
  CowData<int>::_unref((CowData<int> *)(this + 0x280));
  CowData<int>::_unref((CowData<int> *)(this + 0x270));
  if (*(long *)(this + 0x260) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x260) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar5 = *(long *)(this + 0x260);
      *(undefined8 *)(this + 0x260) = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
  }
  CowData<int>::_unref((CowData<int> *)(this + 0x250));
  Resource::~Resource((Resource *)this);
  return;
}



/* GLTFSkin::~GLTFSkin() */

void __thiscall GLTFSkin::~GLTFSkin(GLTFSkin *this)

{
  ~GLTFSkin(this);
  operator_delete(this,0x308);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<int>::resize<false>(long) */

undefined8 __thiscall CowData<int>::resize<false>(CowData<int> *this,long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  void *pvVar7;
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
LAB_001280b0:
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
  if (uVar3 == 0xffffffffffffffff) goto LAB_001280b0;
  if (param_1 <= lVar8) {
    puVar4 = *(undefined8 **)this;
    if (uVar3 + 1 != lVar2) {
      puVar4 = puVar4 + -2;
      puVar5 = (undefined8 *)Memory::realloc_static(puVar4,uVar3 + 0x11,false);
      if (puVar5 != (undefined8 *)0x0) {
        puVar4 = puVar5 + 2;
        *puVar5 = 1;
        *(undefined8 **)this = puVar4;
        goto LAB_00127fce;
      }
      uVar6 = CowData<Vector2>::_realloc((long)puVar4);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      puVar4 = *(undefined8 **)this;
    }
    if (puVar4 != (undefined8 *)0x0) {
LAB_00127fce:
      puVar4[-1] = param_1;
      return 0;
    }
    goto LAB_00128019;
  }
  if (uVar3 + 1 == lVar2) {
LAB_00128010:
    puVar4 = *(undefined8 **)this;
    if (puVar4 == (undefined8 *)0x0) {
LAB_00128019:
      _DAT_00000000 = 0;
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  else {
    if (lVar8 == 0) {
      puVar4 = (undefined8 *)Memory::alloc_static(uVar3 + 0x11,false);
      if (puVar4 == (undefined8 *)0x0) {
        _err_print_error("resize","./core/templates/cowdata.h",0x171,
                         "Parameter \"mem_new\" is null.",0,0);
        return 6;
      }
      *puVar4 = 1;
      puVar4[1] = 0;
    }
    else {
      pvVar7 = (void *)(*(long *)this + -0x10);
      puVar4 = (undefined8 *)Memory::realloc_static(pvVar7,uVar3 + 0x11,false);
      if (puVar4 == (undefined8 *)0x0) {
        uVar6 = CowData<Vector2>::_realloc((long)pvVar7);
        if ((int)uVar6 != 0) {
          return uVar6;
        }
        goto LAB_00128010;
      }
      *puVar4 = 1;
    }
    puVar4 = puVar4 + 2;
    *(undefined8 **)this = puVar4;
  }
  puVar4[-1] = param_1;
  return 0;
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<float>::resize<false>(long) */

undefined8 __thiscall CowData<float>::resize<false>(CowData<float> *this,long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  void *pvVar7;
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
LAB_001283d0:
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
  if (uVar3 == 0xffffffffffffffff) goto LAB_001283d0;
  if (param_1 <= lVar8) {
    puVar4 = *(undefined8 **)this;
    if (uVar3 + 1 != lVar2) {
      puVar4 = puVar4 + -2;
      puVar5 = (undefined8 *)Memory::realloc_static(puVar4,uVar3 + 0x11,false);
      if (puVar5 != (undefined8 *)0x0) {
        puVar4 = puVar5 + 2;
        *puVar5 = 1;
        *(undefined8 **)this = puVar4;
        goto LAB_001282ee;
      }
      uVar6 = CowData<Vector2>::_realloc((long)puVar4);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      puVar4 = *(undefined8 **)this;
    }
    if (puVar4 != (undefined8 *)0x0) {
LAB_001282ee:
      puVar4[-1] = param_1;
      return 0;
    }
    goto LAB_00128339;
  }
  if (uVar3 + 1 == lVar2) {
LAB_00128330:
    puVar4 = *(undefined8 **)this;
    if (puVar4 == (undefined8 *)0x0) {
LAB_00128339:
      _DAT_00000000 = 0;
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  else {
    if (lVar8 == 0) {
      puVar4 = (undefined8 *)Memory::alloc_static(uVar3 + 0x11,false);
      if (puVar4 == (undefined8 *)0x0) {
        _err_print_error("resize","./core/templates/cowdata.h",0x171,
                         "Parameter \"mem_new\" is null.",0,0);
        return 6;
      }
      *puVar4 = 1;
      puVar4[1] = 0;
    }
    else {
      pvVar7 = (void *)(*(long *)this + -0x10);
      puVar4 = (undefined8 *)Memory::realloc_static(pvVar7,uVar3 + 0x11,false);
      if (puVar4 == (undefined8 *)0x0) {
        uVar6 = CowData<Vector2>::_realloc((long)pvVar7);
        if ((int)uVar6 != 0) {
          return uVar6;
        }
        goto LAB_00128330;
      }
      *puVar4 = 1;
    }
    puVar4 = puVar4 + 2;
    *(undefined8 **)this = puVar4;
  }
  puVar4[-1] = param_1;
  return 0;
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



/* ImporterMesh::~ImporterMesh() */

void __thiscall ImporterMesh::~ImporterMesh(ImporterMesh *this)

{
  long *plVar1;
  Object *pOVar2;
  char cVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_0012e098;
  if (*(long *)(this + 0x270) != 0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      pOVar2 = *(Object **)(this + 0x270);
      cVar3 = predelete_handler(pOVar2);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
  if (*(long *)(this + 0x268) != 0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      pOVar2 = *(Object **)(this + 0x268);
      cVar3 = predelete_handler(pOVar2);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
  CowData<String>::_unref((CowData<String> *)(this + 600));
  if (*(long *)(this + 0x248) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x248) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      CowData<ImporterMesh::Surface>::_unref((CowData<ImporterMesh::Surface> *)(this + 0x248));
    }
  }
  Resource::~Resource((Resource *)this);
  return;
}



/* ImporterMesh::~ImporterMesh() */

void __thiscall ImporterMesh::~ImporterMesh(ImporterMesh *this)

{
  long *plVar1;
  Object *pOVar2;
  char cVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_0012e098;
  if (*(long *)(this + 0x270) != 0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      pOVar2 = *(Object **)(this + 0x270);
      cVar3 = predelete_handler(pOVar2);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
  if (*(long *)(this + 0x268) != 0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      pOVar2 = *(Object **)(this + 0x268);
      cVar3 = predelete_handler(pOVar2);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
  CowData<String>::_unref((CowData<String> *)(this + 600));
  if (*(long *)(this + 0x248) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x248) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      CowData<ImporterMesh::Surface>::_unref((CowData<ImporterMesh::Surface> *)(this + 0x248));
    }
  }
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x280);
  return;
}



/* CowData<unsigned int>::_unref() */

void __thiscall CowData<unsigned_int>::_unref(CowData<unsigned_int> *this)

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



/* void memdelete<Image>(Image*) */

void memdelete<Image>(Image *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  
  cVar3 = predelete_handler((Object *)param_1);
  if (cVar3 == '\0') {
    return;
  }
  if (*(code **)(*(long *)param_1 + 0x140) == Image::~Image) {
    *(code **)param_1 = Dictionary::~Dictionary;
    if (*(long *)(param_1 + 0x250) != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)(param_1 + 0x250) + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(param_1 + 0x250);
        *(undefined8 *)(param_1 + 0x250) = 0;
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



/* Ref<Image>::unref() */

void __thiscall Ref<Image>::unref(Ref<Image> *this)

{
  char cVar1;
  
  if (*(long *)this != 0) {
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      memdelete<Image>(*(Image **)this);
      *(undefined8 *)this = 0;
      return;
    }
  }
  *(undefined8 *)this = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<double>::resize<false>(long) */

undefined8 __thiscall CowData<double>::resize<false>(CowData<double> *this,long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  void *pvVar7;
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
    lVar2 = lVar8 * 8;
    if (lVar2 != 0) {
      uVar3 = lVar2 - 1U | lVar2 - 1U >> 1;
      uVar3 = uVar3 | uVar3 >> 2;
      uVar3 = uVar3 | uVar3 >> 4;
      uVar3 = uVar3 | uVar3 >> 8;
      uVar3 = uVar3 | uVar3 >> 0x10;
      lVar2 = (uVar3 | uVar3 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_00128a70:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar3 = param_1 * 8 - 1;
  uVar3 = uVar3 | uVar3 >> 1;
  uVar3 = uVar3 | uVar3 >> 2;
  uVar3 = uVar3 | uVar3 >> 4;
  uVar3 = uVar3 | uVar3 >> 8;
  uVar3 = uVar3 | uVar3 >> 0x10;
  uVar3 = uVar3 | uVar3 >> 0x20;
  if (uVar3 == 0xffffffffffffffff) goto LAB_00128a70;
  if (param_1 <= lVar8) {
    puVar4 = *(undefined8 **)this;
    if (uVar3 + 1 != lVar2) {
      puVar4 = puVar4 + -2;
      puVar5 = (undefined8 *)Memory::realloc_static(puVar4,uVar3 + 0x11,false);
      if (puVar5 != (undefined8 *)0x0) {
        puVar4 = puVar5 + 2;
        *puVar5 = 1;
        *(undefined8 **)this = puVar4;
        goto LAB_0012898e;
      }
      uVar6 = CowData<Vector2>::_realloc((long)puVar4);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      puVar4 = *(undefined8 **)this;
    }
    if (puVar4 != (undefined8 *)0x0) {
LAB_0012898e:
      puVar4[-1] = param_1;
      return 0;
    }
    goto LAB_001289d9;
  }
  if (uVar3 + 1 == lVar2) {
LAB_001289d0:
    puVar4 = *(undefined8 **)this;
    if (puVar4 == (undefined8 *)0x0) {
LAB_001289d9:
      _DAT_00000000 = 0;
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  else {
    if (lVar8 == 0) {
      puVar4 = (undefined8 *)Memory::alloc_static(uVar3 + 0x11,false);
      if (puVar4 == (undefined8 *)0x0) {
        _err_print_error("resize","./core/templates/cowdata.h",0x171,
                         "Parameter \"mem_new\" is null.",0,0);
        return 6;
      }
      *puVar4 = 1;
      puVar4[1] = 0;
    }
    else {
      pvVar7 = (void *)(*(long *)this + -0x10);
      puVar4 = (undefined8 *)Memory::realloc_static(pvVar7,uVar3 + 0x11,false);
      if (puVar4 == (undefined8 *)0x0) {
        uVar6 = CowData<Vector2>::_realloc((long)pvVar7);
        if ((int)uVar6 != 0) {
          return uVar6;
        }
        goto LAB_001289d0;
      }
      *puVar4 = 1;
    }
    puVar4 = puVar4 + 2;
    *(undefined8 **)this = puVar4;
  }
  puVar4[-1] = param_1;
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<Quaternion>::resize<false>(long) */

undefined8 __thiscall CowData<Quaternion>::resize<false>(CowData<Quaternion> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  void *pvVar11;
  long lVar12;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  lVar4 = *(long *)this;
  if (lVar4 == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar12 = 0;
    lVar4 = 0;
  }
  else {
    lVar12 = *(long *)(lVar4 + -8);
    if (param_1 == lVar12) {
      return 0;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar4 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return 0;
      }
      lVar4 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
      return 0;
    }
    _copy_on_write(this);
    lVar4 = lVar12 * 0x10;
    if (lVar4 != 0) {
      uVar5 = lVar4 - 1U | lVar4 - 1U >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      lVar4 = (uVar5 | uVar5 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x10 == 0) {
LAB_00128da0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar5 = param_1 * 0x10 - 1;
  uVar5 = uVar5 >> 1 | uVar5;
  uVar5 = uVar5 | uVar5 >> 2;
  uVar5 = uVar5 | uVar5 >> 4;
  uVar5 = uVar5 | uVar5 >> 8;
  uVar5 = uVar5 | uVar5 >> 0x10;
  uVar5 = uVar5 | uVar5 >> 0x20;
  if (uVar5 == 0xffffffffffffffff) goto LAB_00128da0;
  if (param_1 <= lVar12) {
    puVar6 = *(undefined8 **)this;
    if (uVar5 + 1 != lVar4) {
      puVar6 = puVar6 + -2;
      puVar9 = (undefined8 *)Memory::realloc_static(puVar6,uVar5 + 0x11,false);
      if (puVar9 != (undefined8 *)0x0) {
        puVar6 = puVar9 + 2;
        *puVar9 = 1;
        *(undefined8 **)this = puVar6;
        goto LAB_00128c72;
      }
      uVar10 = CowData<Vector2>::_realloc((long)puVar6);
      if ((int)uVar10 != 0) {
        return uVar10;
      }
      puVar6 = *(undefined8 **)this;
    }
    if (puVar6 == (undefined8 *)0x0) {
      _DAT_00000000 = 0;
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
LAB_00128c72:
    puVar6[-1] = param_1;
    return 0;
  }
  if (uVar5 + 1 == lVar4) {
LAB_00128cd0:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar4 = puVar9[-1];
LAB_00128ce1:
    if (param_1 <= lVar4) goto LAB_00128c50;
  }
  else {
    if (lVar12 != 0) {
      pvVar11 = (void *)(*(long *)this + -0x10);
      puVar6 = (undefined8 *)Memory::realloc_static(pvVar11,uVar5 + 0x11,false);
      if (puVar6 == (undefined8 *)0x0) {
        uVar10 = CowData<Vector2>::_realloc((long)pvVar11);
        if ((int)uVar10 != 0) {
          return uVar10;
        }
        goto LAB_00128cd0;
      }
      puVar9 = puVar6 + 2;
      *puVar6 = 1;
      *(undefined8 **)this = puVar9;
      lVar4 = puVar6[1];
      goto LAB_00128ce1;
    }
    puVar6 = (undefined8 *)Memory::alloc_static(uVar5 + 0x11,false);
    if (puVar6 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar9 = puVar6 + 2;
    *puVar6 = 1;
    puVar6[1] = 0;
    *(undefined8 **)this = puVar9;
    lVar4 = 0;
  }
  uVar3 = _UNK_0012f4f8;
  uVar10 = __LC136;
  puVar7 = puVar9 + lVar4 * 2;
  puVar6 = puVar7;
  if (((param_1 - lVar4) * 0x10 & 0x10U) != 0) {
    *puVar7 = __LC136;
    puVar7[1] = uVar3;
    puVar6 = puVar7 + 2;
    if (puVar7 + (param_1 - lVar4) * 2 == puVar7 + 2) goto LAB_00128c50;
  }
  do {
    *puVar6 = uVar10;
    puVar6[1] = uVar3;
    puVar8 = puVar6 + 4;
    puVar6[2] = uVar10;
    puVar6[3] = uVar3;
    puVar6 = puVar8;
  } while (puVar7 + (param_1 - lVar4) * 2 != puVar8);
LAB_00128c50:
  puVar9[-1] = param_1;
  return 0;
}



/* CowData<Ref<Material> >::_unref() */

void __thiscall CowData<Ref<Material>>::_unref(CowData<Ref<Material>> *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  code *pcVar4;
  char cVar5;
  long *plVar6;
  long lVar7;
  
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
  plVar1 = *(long **)this;
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar2 = plVar1[-1];
  *(undefined8 *)this = 0;
  if (lVar2 != 0) {
    lVar7 = 0;
    plVar6 = plVar1;
LAB_00128e8d:
    do {
      if (*plVar6 != 0) {
        cVar5 = RefCounted::unreference();
        if (cVar5 != '\0') {
          pOVar3 = (Object *)*plVar6;
          cVar5 = predelete_handler(pOVar3);
          if (cVar5 != '\0') {
            lVar7 = lVar7 + 1;
            plVar6 = plVar6 + 1;
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
            if (lVar2 == lVar7) break;
            goto LAB_00128e8d;
          }
        }
      }
      lVar7 = lVar7 + 1;
      plVar6 = plVar6 + 1;
    } while (lVar2 != lVar7);
  }
  Memory::free_static(plVar1 + -2,false);
  return;
}



/* ImporterMeshInstance3D::~ImporterMeshInstance3D() */

void __thiscall ImporterMeshInstance3D::~ImporterMeshInstance3D(ImporterMeshInstance3D *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0012e9d0;
  CowData<Ref<Material>>::_unref((CowData<Ref<Material>> *)(this + 0x548));
  NodePath::~NodePath((NodePath *)(this + 0x538));
  if (*(long *)(this + 0x530) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x530);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0x528) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x528);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        Node3D::~Node3D((Node3D *)this);
        return;
      }
    }
  }
  Node3D::~Node3D((Node3D *)this);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<Ref<Material> >::resize<false>(long) */

undefined8 __thiscall
CowData<Ref<Material>>::resize<false>(CowData<Ref<Material>> *this,long param_1)

{
  Object *pOVar1;
  code *pcVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  void *pvVar9;
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
    lVar11 = 0;
    lVar7 = 0;
  }
  else {
    lVar11 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar11) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar7 = lVar11 * 8;
    if (lVar7 != 0) {
      uVar8 = lVar7 - 1U | lVar7 - 1U >> 1;
      uVar8 = uVar8 | uVar8 >> 2;
      uVar8 = uVar8 | uVar8 >> 4;
      uVar8 = uVar8 | uVar8 >> 8;
      uVar8 = uVar8 | uVar8 >> 0x10;
      lVar7 = (uVar8 | uVar8 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_001292e8:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar8 = param_1 * 8 - 1;
  uVar8 = uVar8 >> 1 | uVar8;
  uVar8 = uVar8 | uVar8 >> 2;
  uVar8 = uVar8 | uVar8 >> 4;
  uVar8 = uVar8 | uVar8 >> 8;
  uVar8 = uVar8 | uVar8 >> 0x10;
  uVar8 = uVar8 | uVar8 >> 0x20;
  if (uVar8 == 0xffffffffffffffff) goto LAB_001292e8;
  if (param_1 <= lVar11) {
    puVar5 = *(undefined8 **)this;
    uVar10 = param_1;
    while (puVar5 != (undefined8 *)0x0) {
      if ((ulong)puVar5[-1] <= uVar10) {
LAB_0012915a:
        if (uVar8 + 1 != lVar7) {
          puVar5 = puVar5 + -2;
          puVar4 = (undefined8 *)Memory::realloc_static(puVar5,uVar8 + 0x11,false);
          if (puVar4 == (undefined8 *)0x0) {
            uVar6 = CowData<Vector2>::_realloc((long)puVar5);
            if ((int)uVar6 != 0) {
              return uVar6;
            }
            puVar5 = *(undefined8 **)this;
            if (puVar5 == (undefined8 *)0x0) {
              _DAT_00000000 = 0;
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
          }
          else {
            puVar5 = puVar4 + 2;
            *puVar4 = 1;
            *(undefined8 **)this = puVar5;
          }
        }
        puVar5[-1] = param_1;
        return 0;
      }
      while (puVar5[uVar10] == 0) {
        uVar10 = uVar10 + 1;
        if ((ulong)puVar5[-1] <= uVar10) goto LAB_0012915a;
      }
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
        pOVar1 = (Object *)puVar5[uVar10];
        cVar3 = predelete_handler(pOVar1);
        if (cVar3 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
        }
      }
      uVar10 = uVar10 + 1;
      puVar5 = *(undefined8 **)this;
    }
    goto LAB_0012912a;
  }
  if (uVar8 + 1 == lVar7) {
LAB_00129230:
    puVar4 = *(undefined8 **)this;
    if (puVar4 == (undefined8 *)0x0) {
LAB_0012912a:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar11 = puVar4[-1];
LAB_00129240:
    if (param_1 <= lVar11) goto LAB_00129213;
  }
  else {
    if (lVar11 != 0) {
      pvVar9 = (void *)(*(long *)this + -0x10);
      puVar5 = (undefined8 *)Memory::realloc_static(pvVar9,uVar8 + 0x11,false);
      if (puVar5 == (undefined8 *)0x0) {
        uVar6 = CowData<Vector2>::_realloc((long)pvVar9);
        if ((int)uVar6 != 0) {
          return uVar6;
        }
        goto LAB_00129230;
      }
      puVar4 = puVar5 + 2;
      *puVar5 = 1;
      *(undefined8 **)this = puVar4;
      lVar11 = puVar5[1];
      goto LAB_00129240;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar8 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar4 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar4;
    lVar11 = 0;
  }
  memset(puVar4 + lVar11,0,(param_1 - lVar11) * 8);
LAB_00129213:
  puVar4[-1] = param_1;
  return 0;
}



/* ImporterMeshInstance3D::~ImporterMeshInstance3D() */

void __thiscall ImporterMeshInstance3D::~ImporterMeshInstance3D(ImporterMeshInstance3D *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0012e9d0;
  CowData<Ref<Material>>::_unref((CowData<Ref<Material>> *)(this + 0x548));
  NodePath::~NodePath((NodePath *)(this + 0x538));
  if (*(long *)(this + 0x530) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x530);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0x528) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x528);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  Node3D::~Node3D((Node3D *)this);
  operator_delete(this,0x570);
  return;
}



/* CowData<Ref<GLTFSkin> >::_unref() */

void __thiscall CowData<Ref<GLTFSkin>>::_unref(CowData<Ref<GLTFSkin>> *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  code *pcVar4;
  char cVar5;
  long *plVar6;
  long lVar7;
  
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
  plVar1 = *(long **)this;
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar2 = plVar1[-1];
  *(undefined8 *)this = 0;
  if (lVar2 != 0) {
    lVar7 = 0;
    plVar6 = plVar1;
LAB_001294ad:
    do {
      if (*plVar6 != 0) {
        cVar5 = RefCounted::unreference();
        if (cVar5 != '\0') {
          pOVar3 = (Object *)*plVar6;
          cVar5 = predelete_handler(pOVar3);
          if (cVar5 != '\0') {
            lVar7 = lVar7 + 1;
            plVar6 = plVar6 + 1;
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
            if (lVar2 == lVar7) break;
            goto LAB_001294ad;
          }
        }
      }
      lVar7 = lVar7 + 1;
      plVar6 = plVar6 + 1;
    } while (lVar2 != lVar7);
  }
  Memory::free_static(plVar1 + -2,false);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<Ref<GLTFSkin> >::resize<false>(long) */

undefined8 __thiscall
CowData<Ref<GLTFSkin>>::resize<false>(CowData<Ref<GLTFSkin>> *this,long param_1)

{
  Object *pOVar1;
  code *pcVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  void *pvVar9;
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
    lVar11 = 0;
    lVar7 = 0;
  }
  else {
    lVar11 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar11) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar7 = lVar11 * 8;
    if (lVar7 != 0) {
      uVar8 = lVar7 - 1U | lVar7 - 1U >> 1;
      uVar8 = uVar8 | uVar8 >> 2;
      uVar8 = uVar8 | uVar8 >> 4;
      uVar8 = uVar8 | uVar8 >> 8;
      uVar8 = uVar8 | uVar8 >> 0x10;
      lVar7 = (uVar8 | uVar8 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_00129828:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar8 = param_1 * 8 - 1;
  uVar8 = uVar8 >> 1 | uVar8;
  uVar8 = uVar8 | uVar8 >> 2;
  uVar8 = uVar8 | uVar8 >> 4;
  uVar8 = uVar8 | uVar8 >> 8;
  uVar8 = uVar8 | uVar8 >> 0x10;
  uVar8 = uVar8 | uVar8 >> 0x20;
  if (uVar8 == 0xffffffffffffffff) goto LAB_00129828;
  if (param_1 <= lVar11) {
    puVar5 = *(undefined8 **)this;
    uVar10 = param_1;
    while (puVar5 != (undefined8 *)0x0) {
      if ((ulong)puVar5[-1] <= uVar10) {
LAB_0012969a:
        if (uVar8 + 1 != lVar7) {
          puVar5 = puVar5 + -2;
          puVar4 = (undefined8 *)Memory::realloc_static(puVar5,uVar8 + 0x11,false);
          if (puVar4 == (undefined8 *)0x0) {
            uVar6 = CowData<Vector2>::_realloc((long)puVar5);
            if ((int)uVar6 != 0) {
              return uVar6;
            }
            puVar5 = *(undefined8 **)this;
            if (puVar5 == (undefined8 *)0x0) {
              _DAT_00000000 = 0;
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
          }
          else {
            puVar5 = puVar4 + 2;
            *puVar4 = 1;
            *(undefined8 **)this = puVar5;
          }
        }
        puVar5[-1] = param_1;
        return 0;
      }
      while (puVar5[uVar10] == 0) {
        uVar10 = uVar10 + 1;
        if ((ulong)puVar5[-1] <= uVar10) goto LAB_0012969a;
      }
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
        pOVar1 = (Object *)puVar5[uVar10];
        cVar3 = predelete_handler(pOVar1);
        if (cVar3 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
        }
      }
      uVar10 = uVar10 + 1;
      puVar5 = *(undefined8 **)this;
    }
    goto LAB_0012966a;
  }
  if (uVar8 + 1 == lVar7) {
LAB_00129770:
    puVar4 = *(undefined8 **)this;
    if (puVar4 == (undefined8 *)0x0) {
LAB_0012966a:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar11 = puVar4[-1];
LAB_00129780:
    if (param_1 <= lVar11) goto LAB_00129753;
  }
  else {
    if (lVar11 != 0) {
      pvVar9 = (void *)(*(long *)this + -0x10);
      puVar5 = (undefined8 *)Memory::realloc_static(pvVar9,uVar8 + 0x11,false);
      if (puVar5 == (undefined8 *)0x0) {
        uVar6 = CowData<Vector2>::_realloc((long)pvVar9);
        if ((int)uVar6 != 0) {
          return uVar6;
        }
        goto LAB_00129770;
      }
      puVar4 = puVar5 + 2;
      *puVar5 = 1;
      *(undefined8 **)this = puVar4;
      lVar11 = puVar5[1];
      goto LAB_00129780;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar8 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar4 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar4;
    lVar11 = 0;
  }
  memset(puVar4 + lVar11,0,(param_1 - lVar11) * 8);
LAB_00129753:
  puVar4[-1] = param_1;
  return 0;
}



/* CowData<Ref<GLTFNode> >::_unref() */

void __thiscall CowData<Ref<GLTFNode>>::_unref(CowData<Ref<GLTFNode>> *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  code *pcVar4;
  char cVar5;
  long *plVar6;
  long lVar7;
  
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
  plVar1 = *(long **)this;
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar2 = plVar1[-1];
  *(undefined8 *)this = 0;
  if (lVar2 != 0) {
    lVar7 = 0;
    plVar6 = plVar1;
LAB_0012990d:
    do {
      if (*plVar6 != 0) {
        cVar5 = RefCounted::unreference();
        if (cVar5 != '\0') {
          pOVar3 = (Object *)*plVar6;
          cVar5 = predelete_handler(pOVar3);
          if (cVar5 != '\0') {
            lVar7 = lVar7 + 1;
            plVar6 = plVar6 + 1;
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
            if (lVar2 == lVar7) break;
            goto LAB_0012990d;
          }
        }
      }
      lVar7 = lVar7 + 1;
      plVar6 = plVar6 + 1;
    } while (lVar2 != lVar7);
  }
  Memory::free_static(plVar1 + -2,false);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<Ref<GLTFNode> >::resize<false>(long) */

undefined8 __thiscall
CowData<Ref<GLTFNode>>::resize<false>(CowData<Ref<GLTFNode>> *this,long param_1)

{
  Object *pOVar1;
  code *pcVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  void *pvVar9;
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
    lVar11 = 0;
    lVar7 = 0;
  }
  else {
    lVar11 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar11) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar7 = lVar11 * 8;
    if (lVar7 != 0) {
      uVar8 = lVar7 - 1U | lVar7 - 1U >> 1;
      uVar8 = uVar8 | uVar8 >> 2;
      uVar8 = uVar8 | uVar8 >> 4;
      uVar8 = uVar8 | uVar8 >> 8;
      uVar8 = uVar8 | uVar8 >> 0x10;
      lVar7 = (uVar8 | uVar8 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_00129c88:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar8 = param_1 * 8 - 1;
  uVar8 = uVar8 >> 1 | uVar8;
  uVar8 = uVar8 | uVar8 >> 2;
  uVar8 = uVar8 | uVar8 >> 4;
  uVar8 = uVar8 | uVar8 >> 8;
  uVar8 = uVar8 | uVar8 >> 0x10;
  uVar8 = uVar8 | uVar8 >> 0x20;
  if (uVar8 == 0xffffffffffffffff) goto LAB_00129c88;
  if (param_1 <= lVar11) {
    puVar5 = *(undefined8 **)this;
    uVar10 = param_1;
    while (puVar5 != (undefined8 *)0x0) {
      if ((ulong)puVar5[-1] <= uVar10) {
LAB_00129afa:
        if (uVar8 + 1 != lVar7) {
          puVar5 = puVar5 + -2;
          puVar4 = (undefined8 *)Memory::realloc_static(puVar5,uVar8 + 0x11,false);
          if (puVar4 == (undefined8 *)0x0) {
            uVar6 = CowData<Vector2>::_realloc((long)puVar5);
            if ((int)uVar6 != 0) {
              return uVar6;
            }
            puVar5 = *(undefined8 **)this;
            if (puVar5 == (undefined8 *)0x0) {
              _DAT_00000000 = 0;
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
          }
          else {
            puVar5 = puVar4 + 2;
            *puVar4 = 1;
            *(undefined8 **)this = puVar5;
          }
        }
        puVar5[-1] = param_1;
        return 0;
      }
      while (puVar5[uVar10] == 0) {
        uVar10 = uVar10 + 1;
        if ((ulong)puVar5[-1] <= uVar10) goto LAB_00129afa;
      }
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
        pOVar1 = (Object *)puVar5[uVar10];
        cVar3 = predelete_handler(pOVar1);
        if (cVar3 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
        }
      }
      uVar10 = uVar10 + 1;
      puVar5 = *(undefined8 **)this;
    }
    goto LAB_00129aca;
  }
  if (uVar8 + 1 == lVar7) {
LAB_00129bd0:
    puVar4 = *(undefined8 **)this;
    if (puVar4 == (undefined8 *)0x0) {
LAB_00129aca:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar11 = puVar4[-1];
LAB_00129be0:
    if (param_1 <= lVar11) goto LAB_00129bb3;
  }
  else {
    if (lVar11 != 0) {
      pvVar9 = (void *)(*(long *)this + -0x10);
      puVar5 = (undefined8 *)Memory::realloc_static(pvVar9,uVar8 + 0x11,false);
      if (puVar5 == (undefined8 *)0x0) {
        uVar6 = CowData<Vector2>::_realloc((long)pvVar9);
        if ((int)uVar6 != 0) {
          return uVar6;
        }
        goto LAB_00129bd0;
      }
      puVar4 = puVar5 + 2;
      *puVar5 = 1;
      *(undefined8 **)this = puVar4;
      lVar11 = puVar5[1];
      goto LAB_00129be0;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar8 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar4 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar4;
    lVar11 = 0;
  }
  memset(puVar4 + lVar11,0,(param_1 - lVar11) * 8);
LAB_00129bb3:
  puVar4[-1] = param_1;
  return 0;
}



/* CowData<Ref<GLTFMesh> >::_unref() */

void __thiscall CowData<Ref<GLTFMesh>>::_unref(CowData<Ref<GLTFMesh>> *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  code *pcVar4;
  char cVar5;
  long *plVar6;
  long lVar7;
  
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
  plVar1 = *(long **)this;
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar2 = plVar1[-1];
  *(undefined8 *)this = 0;
  if (lVar2 != 0) {
    lVar7 = 0;
    plVar6 = plVar1;
LAB_00129d6d:
    do {
      if (*plVar6 != 0) {
        cVar5 = RefCounted::unreference();
        if (cVar5 != '\0') {
          pOVar3 = (Object *)*plVar6;
          cVar5 = predelete_handler(pOVar3);
          if (cVar5 != '\0') {
            lVar7 = lVar7 + 1;
            plVar6 = plVar6 + 1;
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
            if (lVar2 == lVar7) break;
            goto LAB_00129d6d;
          }
        }
      }
      lVar7 = lVar7 + 1;
      plVar6 = plVar6 + 1;
    } while (lVar2 != lVar7);
  }
  Memory::free_static(plVar1 + -2,false);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<Ref<GLTFMesh> >::resize<false>(long) */

undefined8 __thiscall
CowData<Ref<GLTFMesh>>::resize<false>(CowData<Ref<GLTFMesh>> *this,long param_1)

{
  Object *pOVar1;
  code *pcVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  void *pvVar9;
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
    lVar11 = 0;
    lVar7 = 0;
  }
  else {
    lVar11 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar11) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar7 = lVar11 * 8;
    if (lVar7 != 0) {
      uVar8 = lVar7 - 1U | lVar7 - 1U >> 1;
      uVar8 = uVar8 | uVar8 >> 2;
      uVar8 = uVar8 | uVar8 >> 4;
      uVar8 = uVar8 | uVar8 >> 8;
      uVar8 = uVar8 | uVar8 >> 0x10;
      lVar7 = (uVar8 | uVar8 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_0012a0e8:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar8 = param_1 * 8 - 1;
  uVar8 = uVar8 >> 1 | uVar8;
  uVar8 = uVar8 | uVar8 >> 2;
  uVar8 = uVar8 | uVar8 >> 4;
  uVar8 = uVar8 | uVar8 >> 8;
  uVar8 = uVar8 | uVar8 >> 0x10;
  uVar8 = uVar8 | uVar8 >> 0x20;
  if (uVar8 == 0xffffffffffffffff) goto LAB_0012a0e8;
  if (param_1 <= lVar11) {
    puVar5 = *(undefined8 **)this;
    uVar10 = param_1;
    while (puVar5 != (undefined8 *)0x0) {
      if ((ulong)puVar5[-1] <= uVar10) {
LAB_00129f5a:
        if (uVar8 + 1 != lVar7) {
          puVar5 = puVar5 + -2;
          puVar4 = (undefined8 *)Memory::realloc_static(puVar5,uVar8 + 0x11,false);
          if (puVar4 == (undefined8 *)0x0) {
            uVar6 = CowData<Vector2>::_realloc((long)puVar5);
            if ((int)uVar6 != 0) {
              return uVar6;
            }
            puVar5 = *(undefined8 **)this;
            if (puVar5 == (undefined8 *)0x0) {
              _DAT_00000000 = 0;
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
          }
          else {
            puVar5 = puVar4 + 2;
            *puVar4 = 1;
            *(undefined8 **)this = puVar5;
          }
        }
        puVar5[-1] = param_1;
        return 0;
      }
      while (puVar5[uVar10] == 0) {
        uVar10 = uVar10 + 1;
        if ((ulong)puVar5[-1] <= uVar10) goto LAB_00129f5a;
      }
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
        pOVar1 = (Object *)puVar5[uVar10];
        cVar3 = predelete_handler(pOVar1);
        if (cVar3 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
        }
      }
      uVar10 = uVar10 + 1;
      puVar5 = *(undefined8 **)this;
    }
    goto LAB_00129f2a;
  }
  if (uVar8 + 1 == lVar7) {
LAB_0012a030:
    puVar4 = *(undefined8 **)this;
    if (puVar4 == (undefined8 *)0x0) {
LAB_00129f2a:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar11 = puVar4[-1];
LAB_0012a040:
    if (param_1 <= lVar11) goto LAB_0012a013;
  }
  else {
    if (lVar11 != 0) {
      pvVar9 = (void *)(*(long *)this + -0x10);
      puVar5 = (undefined8 *)Memory::realloc_static(pvVar9,uVar8 + 0x11,false);
      if (puVar5 == (undefined8 *)0x0) {
        uVar6 = CowData<Vector2>::_realloc((long)pvVar9);
        if ((int)uVar6 != 0) {
          return uVar6;
        }
        goto LAB_0012a030;
      }
      puVar4 = puVar5 + 2;
      *puVar5 = 1;
      *(undefined8 **)this = puVar4;
      lVar11 = puVar5[1];
      goto LAB_0012a040;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar8 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar4 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar4;
    lVar11 = 0;
  }
  memset(puVar4 + lVar11,0,(param_1 - lVar11) * 8);
LAB_0012a013:
  puVar4[-1] = param_1;
  return 0;
}



/* CowData<Ref<Texture2D> >::_unref() */

void __thiscall CowData<Ref<Texture2D>>::_unref(CowData<Ref<Texture2D>> *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  code *pcVar4;
  char cVar5;
  long *plVar6;
  long lVar7;
  
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
  plVar1 = *(long **)this;
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar2 = plVar1[-1];
  *(undefined8 *)this = 0;
  if (lVar2 != 0) {
    lVar7 = 0;
    plVar6 = plVar1;
LAB_0012a1cd:
    do {
      if (*plVar6 != 0) {
        cVar5 = RefCounted::unreference();
        if (cVar5 != '\0') {
          pOVar3 = (Object *)*plVar6;
          cVar5 = predelete_handler(pOVar3);
          if (cVar5 != '\0') {
            lVar7 = lVar7 + 1;
            plVar6 = plVar6 + 1;
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
            if (lVar2 == lVar7) break;
            goto LAB_0012a1cd;
          }
        }
      }
      lVar7 = lVar7 + 1;
      plVar6 = plVar6 + 1;
    } while (lVar2 != lVar7);
  }
  Memory::free_static(plVar1 + -2,false);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<Ref<Texture2D> >::resize<false>(long) */

undefined8 __thiscall
CowData<Ref<Texture2D>>::resize<false>(CowData<Ref<Texture2D>> *this,long param_1)

{
  Object *pOVar1;
  code *pcVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  void *pvVar9;
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
    lVar11 = 0;
    lVar7 = 0;
  }
  else {
    lVar11 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar11) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar7 = lVar11 * 8;
    if (lVar7 != 0) {
      uVar8 = lVar7 - 1U | lVar7 - 1U >> 1;
      uVar8 = uVar8 | uVar8 >> 2;
      uVar8 = uVar8 | uVar8 >> 4;
      uVar8 = uVar8 | uVar8 >> 8;
      uVar8 = uVar8 | uVar8 >> 0x10;
      lVar7 = (uVar8 | uVar8 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_0012a548:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar8 = param_1 * 8 - 1;
  uVar8 = uVar8 >> 1 | uVar8;
  uVar8 = uVar8 | uVar8 >> 2;
  uVar8 = uVar8 | uVar8 >> 4;
  uVar8 = uVar8 | uVar8 >> 8;
  uVar8 = uVar8 | uVar8 >> 0x10;
  uVar8 = uVar8 | uVar8 >> 0x20;
  if (uVar8 == 0xffffffffffffffff) goto LAB_0012a548;
  if (param_1 <= lVar11) {
    puVar5 = *(undefined8 **)this;
    uVar10 = param_1;
    while (puVar5 != (undefined8 *)0x0) {
      if ((ulong)puVar5[-1] <= uVar10) {
LAB_0012a3ba:
        if (uVar8 + 1 != lVar7) {
          puVar5 = puVar5 + -2;
          puVar4 = (undefined8 *)Memory::realloc_static(puVar5,uVar8 + 0x11,false);
          if (puVar4 == (undefined8 *)0x0) {
            uVar6 = CowData<Vector2>::_realloc((long)puVar5);
            if ((int)uVar6 != 0) {
              return uVar6;
            }
            puVar5 = *(undefined8 **)this;
            if (puVar5 == (undefined8 *)0x0) {
              _DAT_00000000 = 0;
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
          }
          else {
            puVar5 = puVar4 + 2;
            *puVar4 = 1;
            *(undefined8 **)this = puVar5;
          }
        }
        puVar5[-1] = param_1;
        return 0;
      }
      while (puVar5[uVar10] == 0) {
        uVar10 = uVar10 + 1;
        if ((ulong)puVar5[-1] <= uVar10) goto LAB_0012a3ba;
      }
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
        pOVar1 = (Object *)puVar5[uVar10];
        cVar3 = predelete_handler(pOVar1);
        if (cVar3 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
        }
      }
      uVar10 = uVar10 + 1;
      puVar5 = *(undefined8 **)this;
    }
    goto LAB_0012a38a;
  }
  if (uVar8 + 1 == lVar7) {
LAB_0012a490:
    puVar4 = *(undefined8 **)this;
    if (puVar4 == (undefined8 *)0x0) {
LAB_0012a38a:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar11 = puVar4[-1];
LAB_0012a4a0:
    if (param_1 <= lVar11) goto LAB_0012a473;
  }
  else {
    if (lVar11 != 0) {
      pvVar9 = (void *)(*(long *)this + -0x10);
      puVar5 = (undefined8 *)Memory::realloc_static(pvVar9,uVar8 + 0x11,false);
      if (puVar5 == (undefined8 *)0x0) {
        uVar6 = CowData<Vector2>::_realloc((long)pvVar9);
        if ((int)uVar6 != 0) {
          return uVar6;
        }
        goto LAB_0012a490;
      }
      puVar4 = puVar5 + 2;
      *puVar5 = 1;
      *(undefined8 **)this = puVar4;
      lVar11 = puVar5[1];
      goto LAB_0012a4a0;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar8 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar4 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar4;
    lVar11 = 0;
  }
  memset(puVar4 + lVar11,0,(param_1 - lVar11) * 8);
LAB_0012a473:
  puVar4[-1] = param_1;
  return 0;
}



/* CowData<Ref<Image> >::_unref() */

void __thiscall CowData<Ref<Image>>::_unref(CowData<Ref<Image>> *this)

{
  long *plVar1;
  long lVar2;
  Image *pIVar3;
  code *pcVar4;
  char cVar5;
  long *plVar6;
  long lVar7;
  
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
  plVar1 = *(long **)this;
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar2 = plVar1[-1];
  *(undefined8 *)this = 0;
  if (lVar2 != 0) {
    lVar7 = 0;
    plVar6 = plVar1;
LAB_0012a625:
    do {
      if (*plVar6 != 0) {
        cVar5 = RefCounted::unreference();
        if (cVar5 != '\0') {
          pIVar3 = (Image *)*plVar6;
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 1;
          memdelete<Image>(pIVar3);
          if (lVar2 == lVar7) break;
          goto LAB_0012a625;
        }
      }
      lVar7 = lVar7 + 1;
      plVar6 = plVar6 + 1;
    } while (lVar2 != lVar7);
  }
  Memory::free_static(plVar1 + -2,false);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<Ref<Image> >::resize<false>(long) */

undefined8 __thiscall CowData<Ref<Image>>::resize<false>(CowData<Ref<Image>> *this,long param_1)

{
  code *pcVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  void *pvVar8;
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
    lVar10 = 0;
    lVar6 = 0;
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
    lVar6 = lVar10 * 8;
    if (lVar6 != 0) {
      uVar7 = lVar6 - 1U | lVar6 - 1U >> 1;
      uVar7 = uVar7 | uVar7 >> 2;
      uVar7 = uVar7 | uVar7 >> 4;
      uVar7 = uVar7 | uVar7 >> 8;
      uVar7 = uVar7 | uVar7 >> 0x10;
      lVar6 = (uVar7 | uVar7 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_0012a958:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar7 = param_1 * 8 - 1;
  uVar7 = uVar7 >> 1 | uVar7;
  uVar7 = uVar7 | uVar7 >> 2;
  uVar7 = uVar7 | uVar7 >> 4;
  uVar7 = uVar7 | uVar7 >> 8;
  uVar7 = uVar7 | uVar7 >> 0x10;
  uVar7 = uVar7 | uVar7 >> 0x20;
  if (uVar7 == 0xffffffffffffffff) goto LAB_0012a958;
  if (param_1 <= lVar10) {
    puVar4 = *(undefined8 **)this;
    uVar9 = param_1;
    while (puVar4 != (undefined8 *)0x0) {
      if ((ulong)puVar4[-1] <= uVar9) {
LAB_0012a7ea:
        if (uVar7 + 1 != lVar6) {
          puVar4 = puVar4 + -2;
          puVar3 = (undefined8 *)Memory::realloc_static(puVar4,uVar7 + 0x11,false);
          if (puVar3 == (undefined8 *)0x0) {
            uVar5 = CowData<Vector2>::_realloc((long)puVar4);
            if ((int)uVar5 != 0) {
              return uVar5;
            }
            puVar4 = *(undefined8 **)this;
            if (puVar4 == (undefined8 *)0x0) {
              _DAT_00000000 = 0;
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
          }
          else {
            puVar4 = puVar3 + 2;
            *puVar3 = 1;
            *(undefined8 **)this = puVar4;
          }
        }
        puVar4[-1] = param_1;
        return 0;
      }
      while (puVar4[uVar9] == 0) {
        uVar9 = uVar9 + 1;
        if ((ulong)puVar4[-1] <= uVar9) goto LAB_0012a7ea;
      }
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        memdelete<Image>((Image *)puVar4[uVar9]);
      }
      uVar9 = uVar9 + 1;
      puVar4 = *(undefined8 **)this;
    }
    goto LAB_0012a7ba;
  }
  if (uVar7 + 1 == lVar6) {
LAB_0012a8a0:
    puVar3 = *(undefined8 **)this;
    if (puVar3 == (undefined8 *)0x0) {
LAB_0012a7ba:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar10 = puVar3[-1];
LAB_0012a8b0:
    if (param_1 <= lVar10) goto LAB_0012a883;
  }
  else {
    if (lVar10 != 0) {
      pvVar8 = (void *)(*(long *)this + -0x10);
      puVar4 = (undefined8 *)Memory::realloc_static(pvVar8,uVar7 + 0x11,false);
      if (puVar4 == (undefined8 *)0x0) {
        uVar5 = CowData<Vector2>::_realloc((long)pvVar8);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        goto LAB_0012a8a0;
      }
      puVar3 = puVar4 + 2;
      *puVar4 = 1;
      *(undefined8 **)this = puVar3;
      lVar10 = puVar4[1];
      goto LAB_0012a8b0;
    }
    puVar4 = (undefined8 *)Memory::alloc_static(uVar7 + 0x11,false);
    if (puVar4 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar3 = puVar4 + 2;
    *puVar4 = 1;
    puVar4[1] = 0;
    *(undefined8 **)this = puVar3;
    lVar10 = 0;
  }
  memset(puVar3 + lVar10,0,(param_1 - lVar10) * 8);
LAB_0012a883:
  puVar3[-1] = param_1;
  return 0;
}



/* CowData<Ref<GLTFTexture> >::_unref() */

void __thiscall CowData<Ref<GLTFTexture>>::_unref(CowData<Ref<GLTFTexture>> *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  code *pcVar4;
  char cVar5;
  long *plVar6;
  long lVar7;
  
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
  plVar1 = *(long **)this;
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar2 = plVar1[-1];
  *(undefined8 *)this = 0;
  if (lVar2 != 0) {
    lVar7 = 0;
    plVar6 = plVar1;
LAB_0012aa3d:
    do {
      if (*plVar6 != 0) {
        cVar5 = RefCounted::unreference();
        if (cVar5 != '\0') {
          pOVar3 = (Object *)*plVar6;
          cVar5 = predelete_handler(pOVar3);
          if (cVar5 != '\0') {
            lVar7 = lVar7 + 1;
            plVar6 = plVar6 + 1;
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
            if (lVar2 == lVar7) break;
            goto LAB_0012aa3d;
          }
        }
      }
      lVar7 = lVar7 + 1;
      plVar6 = plVar6 + 1;
    } while (lVar2 != lVar7);
  }
  Memory::free_static(plVar1 + -2,false);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<Ref<GLTFTexture> >::resize<false>(long) */

undefined8 __thiscall
CowData<Ref<GLTFTexture>>::resize<false>(CowData<Ref<GLTFTexture>> *this,long param_1)

{
  Object *pOVar1;
  code *pcVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  void *pvVar9;
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
    lVar11 = 0;
    lVar7 = 0;
  }
  else {
    lVar11 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar11) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar7 = lVar11 * 8;
    if (lVar7 != 0) {
      uVar8 = lVar7 - 1U | lVar7 - 1U >> 1;
      uVar8 = uVar8 | uVar8 >> 2;
      uVar8 = uVar8 | uVar8 >> 4;
      uVar8 = uVar8 | uVar8 >> 8;
      uVar8 = uVar8 | uVar8 >> 0x10;
      lVar7 = (uVar8 | uVar8 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_0012adb8:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar8 = param_1 * 8 - 1;
  uVar8 = uVar8 >> 1 | uVar8;
  uVar8 = uVar8 | uVar8 >> 2;
  uVar8 = uVar8 | uVar8 >> 4;
  uVar8 = uVar8 | uVar8 >> 8;
  uVar8 = uVar8 | uVar8 >> 0x10;
  uVar8 = uVar8 | uVar8 >> 0x20;
  if (uVar8 == 0xffffffffffffffff) goto LAB_0012adb8;
  if (param_1 <= lVar11) {
    puVar5 = *(undefined8 **)this;
    uVar10 = param_1;
    while (puVar5 != (undefined8 *)0x0) {
      if ((ulong)puVar5[-1] <= uVar10) {
LAB_0012ac2a:
        if (uVar8 + 1 != lVar7) {
          puVar5 = puVar5 + -2;
          puVar4 = (undefined8 *)Memory::realloc_static(puVar5,uVar8 + 0x11,false);
          if (puVar4 == (undefined8 *)0x0) {
            uVar6 = CowData<Vector2>::_realloc((long)puVar5);
            if ((int)uVar6 != 0) {
              return uVar6;
            }
            puVar5 = *(undefined8 **)this;
            if (puVar5 == (undefined8 *)0x0) {
              _DAT_00000000 = 0;
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
          }
          else {
            puVar5 = puVar4 + 2;
            *puVar4 = 1;
            *(undefined8 **)this = puVar5;
          }
        }
        puVar5[-1] = param_1;
        return 0;
      }
      while (puVar5[uVar10] == 0) {
        uVar10 = uVar10 + 1;
        if ((ulong)puVar5[-1] <= uVar10) goto LAB_0012ac2a;
      }
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
        pOVar1 = (Object *)puVar5[uVar10];
        cVar3 = predelete_handler(pOVar1);
        if (cVar3 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
        }
      }
      uVar10 = uVar10 + 1;
      puVar5 = *(undefined8 **)this;
    }
    goto LAB_0012abfa;
  }
  if (uVar8 + 1 == lVar7) {
LAB_0012ad00:
    puVar4 = *(undefined8 **)this;
    if (puVar4 == (undefined8 *)0x0) {
LAB_0012abfa:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar11 = puVar4[-1];
LAB_0012ad10:
    if (param_1 <= lVar11) goto LAB_0012ace3;
  }
  else {
    if (lVar11 != 0) {
      pvVar9 = (void *)(*(long *)this + -0x10);
      puVar5 = (undefined8 *)Memory::realloc_static(pvVar9,uVar8 + 0x11,false);
      if (puVar5 == (undefined8 *)0x0) {
        uVar6 = CowData<Vector2>::_realloc((long)pvVar9);
        if ((int)uVar6 != 0) {
          return uVar6;
        }
        goto LAB_0012ad00;
      }
      puVar4 = puVar5 + 2;
      *puVar5 = 1;
      *(undefined8 **)this = puVar4;
      lVar11 = puVar5[1];
      goto LAB_0012ad10;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar8 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar4 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar4;
    lVar11 = 0;
  }
  memset(puVar4 + lVar11,0,(param_1 - lVar11) * 8);
LAB_0012ace3:
  puVar4[-1] = param_1;
  return 0;
}



/* CowData<Ref<GLTFCamera> >::_unref() */

void __thiscall CowData<Ref<GLTFCamera>>::_unref(CowData<Ref<GLTFCamera>> *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  code *pcVar4;
  char cVar5;
  long *plVar6;
  long lVar7;
  
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
  plVar1 = *(long **)this;
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar2 = plVar1[-1];
  *(undefined8 *)this = 0;
  if (lVar2 != 0) {
    lVar7 = 0;
    plVar6 = plVar1;
LAB_0012ae9d:
    do {
      if (*plVar6 != 0) {
        cVar5 = RefCounted::unreference();
        if (cVar5 != '\0') {
          pOVar3 = (Object *)*plVar6;
          cVar5 = predelete_handler(pOVar3);
          if (cVar5 != '\0') {
            lVar7 = lVar7 + 1;
            plVar6 = plVar6 + 1;
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
            if (lVar2 == lVar7) break;
            goto LAB_0012ae9d;
          }
        }
      }
      lVar7 = lVar7 + 1;
      plVar6 = plVar6 + 1;
    } while (lVar2 != lVar7);
  }
  Memory::free_static(plVar1 + -2,false);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<Ref<GLTFCamera> >::resize<false>(long) */

undefined8 __thiscall
CowData<Ref<GLTFCamera>>::resize<false>(CowData<Ref<GLTFCamera>> *this,long param_1)

{
  Object *pOVar1;
  code *pcVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  void *pvVar9;
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
    lVar11 = 0;
    lVar7 = 0;
  }
  else {
    lVar11 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar11) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar7 = lVar11 * 8;
    if (lVar7 != 0) {
      uVar8 = lVar7 - 1U | lVar7 - 1U >> 1;
      uVar8 = uVar8 | uVar8 >> 2;
      uVar8 = uVar8 | uVar8 >> 4;
      uVar8 = uVar8 | uVar8 >> 8;
      uVar8 = uVar8 | uVar8 >> 0x10;
      lVar7 = (uVar8 | uVar8 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_0012b218:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar8 = param_1 * 8 - 1;
  uVar8 = uVar8 >> 1 | uVar8;
  uVar8 = uVar8 | uVar8 >> 2;
  uVar8 = uVar8 | uVar8 >> 4;
  uVar8 = uVar8 | uVar8 >> 8;
  uVar8 = uVar8 | uVar8 >> 0x10;
  uVar8 = uVar8 | uVar8 >> 0x20;
  if (uVar8 == 0xffffffffffffffff) goto LAB_0012b218;
  if (param_1 <= lVar11) {
    puVar5 = *(undefined8 **)this;
    uVar10 = param_1;
    while (puVar5 != (undefined8 *)0x0) {
      if ((ulong)puVar5[-1] <= uVar10) {
LAB_0012b08a:
        if (uVar8 + 1 != lVar7) {
          puVar5 = puVar5 + -2;
          puVar4 = (undefined8 *)Memory::realloc_static(puVar5,uVar8 + 0x11,false);
          if (puVar4 == (undefined8 *)0x0) {
            uVar6 = CowData<Vector2>::_realloc((long)puVar5);
            if ((int)uVar6 != 0) {
              return uVar6;
            }
            puVar5 = *(undefined8 **)this;
            if (puVar5 == (undefined8 *)0x0) {
              _DAT_00000000 = 0;
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
          }
          else {
            puVar5 = puVar4 + 2;
            *puVar4 = 1;
            *(undefined8 **)this = puVar5;
          }
        }
        puVar5[-1] = param_1;
        return 0;
      }
      while (puVar5[uVar10] == 0) {
        uVar10 = uVar10 + 1;
        if ((ulong)puVar5[-1] <= uVar10) goto LAB_0012b08a;
      }
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
        pOVar1 = (Object *)puVar5[uVar10];
        cVar3 = predelete_handler(pOVar1);
        if (cVar3 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
        }
      }
      uVar10 = uVar10 + 1;
      puVar5 = *(undefined8 **)this;
    }
    goto LAB_0012b05a;
  }
  if (uVar8 + 1 == lVar7) {
LAB_0012b160:
    puVar4 = *(undefined8 **)this;
    if (puVar4 == (undefined8 *)0x0) {
LAB_0012b05a:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar11 = puVar4[-1];
LAB_0012b170:
    if (param_1 <= lVar11) goto LAB_0012b143;
  }
  else {
    if (lVar11 != 0) {
      pvVar9 = (void *)(*(long *)this + -0x10);
      puVar5 = (undefined8 *)Memory::realloc_static(pvVar9,uVar8 + 0x11,false);
      if (puVar5 == (undefined8 *)0x0) {
        uVar6 = CowData<Vector2>::_realloc((long)pvVar9);
        if ((int)uVar6 != 0) {
          return uVar6;
        }
        goto LAB_0012b160;
      }
      puVar4 = puVar5 + 2;
      *puVar5 = 1;
      *(undefined8 **)this = puVar4;
      lVar11 = puVar5[1];
      goto LAB_0012b170;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar8 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar4 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar4;
    lVar11 = 0;
  }
  memset(puVar4 + lVar11,0,(param_1 - lVar11) * 8);
LAB_0012b143:
  puVar4[-1] = param_1;
  return 0;
}



/* CowData<GLTFAnimation::Channel<float> >::_unref() */

void __thiscall
CowData<GLTFAnimation::Channel<float>>::_unref(CowData<GLTFAnimation::Channel<float>> *this)

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
          if (*(long *)(lVar6 + 0x20) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 0x20) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar6 + 0x20);
              *(undefined8 *)(lVar6 + 0x20) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (*(long *)(lVar6 + 0x10) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 0x10) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar6 + 0x10);
              *(undefined8 *)(lVar6 + 0x10) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 0x28;
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



/* CowData<GLTFAnimation::Channel<float> >::_ref(CowData<GLTFAnimation::Channel<float> > const&)
   [clone .part.0] */

void __thiscall
CowData<GLTFAnimation::Channel<float>>::_ref
          (CowData<GLTFAnimation::Channel<float>> *this,CowData *param_1)

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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<int, GLTFAnimation::NodeTrack, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, GLTFAnimation::NodeTrack> > >::operator[](int const&)
    */

undefined1 * __thiscall
HashMap<int,GLTFAnimation::NodeTrack,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GLTFAnimation::NodeTrack>>>
::operator[](HashMap<int,GLTFAnimation::NodeTrack,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GLTFAnimation::NodeTrack>>>
             *this,int *param_1)

{
  long *plVar1;
  uint *puVar2;
  void *pvVar3;
  void *__s;
  long lVar4;
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
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 (*pauVar37) [16];
  uint uVar38;
  uint uVar39;
  uint uVar40;
  ulong uVar41;
  undefined8 uVar42;
  void *__s_00;
  undefined1 (*pauVar43) [16];
  ulong uVar44;
  ulong uVar45;
  int iVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  undefined8 uVar50;
  undefined8 *puVar51;
  uint uVar52;
  ulong uVar53;
  uint uVar54;
  uint uVar55;
  undefined1 (*pauVar56) [16];
  long in_FS_OFFSET;
  void *local_1a0;
  undefined8 local_178 [2];
  CowData local_168 [16];
  CowData local_158 [24];
  CowData local_140 [16];
  long local_130 [3];
  undefined8 local_118 [2];
  undefined8 local_108 [2];
  undefined8 local_f8 [2];
  undefined1 local_e8 [16];
  int local_d8;
  undefined4 local_d0;
  undefined8 local_c0 [2];
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_98 [2];
  long local_88;
  undefined4 local_80;
  undefined8 local_70 [2];
  undefined8 local_60 [2];
  undefined8 local_50 [2];
  long local_40;
  
  local_1a0 = *(void **)(this + 8);
  uVar40 = *param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar41 = CONCAT44(0,uVar39);
  if ((local_1a0 != (void *)0x0) && (*(int *)(this + 0x2c) != 0)) {
    uVar44 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar38 = (uVar40 >> 0x10 ^ uVar40) * -0x7a143595;
    uVar38 = (uVar38 ^ uVar38 >> 0xd) * -0x3d4d51cb;
    uVar55 = uVar38 ^ uVar38 >> 0x10;
    if (uVar38 == uVar38 >> 0x10) {
      uVar55 = 1;
      uVar45 = uVar44;
    }
    else {
      uVar45 = uVar55 * uVar44;
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar41;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar45;
    lVar47 = SUB168(auVar5 * auVar21,8);
    uVar52 = SUB164(auVar5 * auVar21,8);
    uVar38 = *(uint *)(*(long *)(this + 0x10) + lVar47 * 4);
    if (uVar38 != 0) {
      uVar54 = 0;
      do {
        if ((uVar55 == uVar38) &&
           (uVar40 == *(uint *)(*(long *)((long)local_1a0 + lVar47 * 8) + 0x10))) {
          pauVar43 = *(undefined1 (**) [16])((long)local_1a0 + (ulong)uVar52 * 8);
          goto LAB_0012bc8c;
        }
        uVar54 = uVar54 + 1;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = (uVar52 + 1) * uVar44;
        auVar22._8_8_ = 0;
        auVar22._0_8_ = uVar41;
        lVar47 = SUB168(auVar6 * auVar22,8);
        uVar38 = *(uint *)(*(long *)(this + 0x10) + lVar47 * 4);
        uVar52 = SUB164(auVar6 * auVar22,8);
      } while ((uVar38 != 0) &&
              (auVar7._8_8_ = 0, auVar7._0_8_ = uVar38 * uVar44, auVar23._8_8_ = 0,
              auVar23._0_8_ = uVar41, auVar8._8_8_ = 0,
              auVar8._0_8_ = ((uVar52 + uVar39) - SUB164(auVar7 * auVar23,8)) * uVar44,
              auVar24._8_8_ = 0, auVar24._0_8_ = uVar41, uVar54 <= SUB164(auVar8 * auVar24,8)));
    }
  }
  puVar51 = local_178;
  for (lVar47 = 0xb; lVar47 != 0; lVar47 = lVar47 + -1) {
    *puVar51 = 0;
    puVar51 = puVar51 + 1;
  }
  local_118[0] = 0;
  local_108[0] = 0;
  local_f8[0] = 0;
  if (local_1a0 == (void *)0x0) {
    uVar44 = uVar41 * 4;
    uVar45 = uVar41 * 8;
    uVar42 = Memory::alloc_static(uVar44,false);
    *(undefined8 *)(this + 0x10) = uVar42;
    local_1a0 = (void *)Memory::alloc_static(uVar45,false);
    *(void **)(this + 8) = local_1a0;
    if (uVar39 != 0) {
      pvVar3 = *(void **)(this + 0x10);
      if ((pvVar3 < (void *)((long)local_1a0 + uVar45)) &&
         (local_1a0 < (void *)((long)pvVar3 + uVar44))) {
        uVar44 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar44 * 4) = 0;
          *(undefined8 *)((long)local_1a0 + uVar44 * 8) = 0;
          uVar44 = uVar44 + 1;
        } while (uVar41 != uVar44);
      }
      else {
        memset(pvVar3,0,uVar44);
        memset(local_1a0,0,uVar45);
      }
      uVar40 = *param_1;
      goto LAB_0012b557;
    }
    uVar40 = *param_1;
    iVar46 = *(int *)(this + 0x2c);
    if (local_1a0 != (void *)0x0) goto LAB_0012b560;
  }
  else {
LAB_0012b557:
    iVar46 = *(int *)(this + 0x2c);
LAB_0012b560:
    if (iVar46 != 0) {
      uVar44 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar39 = (uVar40 >> 0x10 ^ uVar40) * -0x7a143595;
      uVar39 = (uVar39 ^ uVar39 >> 0xd) * -0x3d4d51cb;
      uVar38 = uVar39 ^ uVar39 >> 0x10;
      if (uVar39 == uVar39 >> 0x10) {
        uVar38 = 1;
        uVar45 = uVar44;
      }
      else {
        uVar45 = uVar38 * uVar44;
      }
      uVar53 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4));
      uVar52 = 0;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar53;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar45;
      lVar47 = SUB168(auVar9 * auVar25,8);
      uVar55 = SUB164(auVar9 * auVar25,8);
      uVar39 = *(uint *)(*(long *)(this + 0x10) + lVar47 * 4);
      if (uVar39 != 0) {
        do {
          if ((uVar38 == uVar39) &&
             (*(uint *)(*(long *)((long)local_1a0 + lVar47 * 8) + 0x10) == uVar40)) {
            lVar47 = *(long *)((long)local_1a0 + (ulong)uVar55 * 8);
            *(undefined4 *)(lVar47 + 0x18) = 0;
            if (*(long *)(lVar47 + 0x28) != 0) {
              CowData<double>::_ref((CowData<double> *)(lVar47 + 0x28),local_168);
            }
            if (*(long *)(lVar47 + 0x38) != 0) {
              CowData<Vector3>::_ref((CowData<Vector3> *)(lVar47 + 0x38),local_158);
            }
            *(undefined4 *)(lVar47 + 0x40) = 0;
            if (*(long *)(lVar47 + 0x50) != 0) {
              CowData<double>::_ref((CowData<double> *)(lVar47 + 0x50),local_140);
            }
            if (*(long *)(lVar47 + 0x60) != 0) {
              CowData<Quaternion>::_ref((CowData<Quaternion> *)(lVar47 + 0x60),(CowData *)local_130)
              ;
            }
            *(undefined4 *)(lVar47 + 0x68) = 0;
            if (*(long *)(lVar47 + 0x78) != 0) {
              CowData<double>::_ref((CowData<double> *)(lVar47 + 0x78),(CowData *)local_118);
            }
            if (*(long *)(lVar47 + 0x88) != 0) {
              CowData<Vector3>::_ref((CowData<Vector3> *)(lVar47 + 0x88),(CowData *)local_108);
            }
            if (*(long *)(lVar47 + 0x98) != 0) {
              CowData<GLTFAnimation::Channel<float>>::_ref
                        ((CowData<GLTFAnimation::Channel<float>> *)(lVar47 + 0x98),
                         (CowData *)local_f8);
            }
            pauVar43 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar55 * 8);
            goto LAB_0012bc30;
          }
          uVar52 = uVar52 + 1;
          auVar10._8_8_ = 0;
          auVar10._0_8_ = (uVar55 + 1) * uVar44;
          auVar26._8_8_ = 0;
          auVar26._0_8_ = uVar53;
          lVar47 = SUB168(auVar10 * auVar26,8);
          uVar39 = *(uint *)(*(long *)(this + 0x10) + lVar47 * 4);
          uVar55 = SUB164(auVar10 * auVar26,8);
        } while ((uVar39 != 0) &&
                (auVar11._8_8_ = 0, auVar11._0_8_ = uVar39 * uVar44, auVar27._8_8_ = 0,
                auVar27._0_8_ = uVar53, auVar12._8_8_ = 0,
                auVar12._0_8_ =
                     ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4) +
                      uVar55) - SUB164(auVar11 * auVar27,8)) * uVar44, auVar28._8_8_ = 0,
                auVar28._0_8_ = uVar53, uVar52 <= SUB164(auVar12 * auVar28,8)));
      }
    }
  }
  if ((float)uVar41 * __LC29 < (float)(iVar46 + 1)) {
    uVar40 = *(uint *)(this + 0x28);
    if (uVar40 == 0x1c) {
      pauVar43 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0012bc30;
    }
    uVar41 = (ulong)(uVar40 + 1);
    uVar39 = *(uint *)(hash_table_size_primes + (ulong)uVar40 * 4);
    *(undefined4 *)(this + 0x2c) = 0;
    if (uVar40 + 1 < 2) {
      uVar41 = 2;
    }
    uVar40 = *(uint *)(hash_table_size_primes + uVar41 * 4);
    *(int *)(this + 0x28) = (int)uVar41;
    pvVar3 = *(void **)(this + 0x10);
    uVar45 = (ulong)uVar40;
    uVar41 = uVar45 * 4;
    uVar44 = uVar45 * 8;
    uVar42 = Memory::alloc_static(uVar41,false);
    *(undefined8 *)(this + 0x10) = uVar42;
    __s_00 = (void *)Memory::alloc_static(uVar44,false);
    *(void **)(this + 8) = __s_00;
    if (uVar40 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar44)) && (__s_00 < (void *)((long)__s + uVar41))) {
        uVar41 = 0;
        do {
          *(undefined4 *)((long)__s + uVar41 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar41 * 8) = 0;
          uVar41 = uVar41 + 1;
        } while (uVar41 != uVar45);
      }
      else {
        memset(__s,0,uVar41);
        memset(__s_00,0,uVar44);
      }
    }
    uVar41 = 0;
    if (uVar39 != 0) {
      do {
        uVar40 = *(uint *)((long)pvVar3 + uVar41 * 4);
        if (uVar40 != 0) {
          uVar52 = 0;
          lVar47 = *(long *)(this + 0x10);
          uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar44 = CONCAT44(0,uVar38);
          lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)uVar40 * lVar4;
          auVar29._8_8_ = 0;
          auVar29._0_8_ = uVar44;
          lVar48 = SUB168(auVar13 * auVar29,8);
          puVar2 = (uint *)(lVar47 + lVar48 * 4);
          iVar46 = SUB164(auVar13 * auVar29,8);
          uVar55 = *puVar2;
          uVar42 = *(undefined8 *)((long)local_1a0 + uVar41 * 8);
          while (uVar55 != 0) {
            auVar14._8_8_ = 0;
            auVar14._0_8_ = (ulong)uVar55 * lVar4;
            auVar30._8_8_ = 0;
            auVar30._0_8_ = uVar44;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = (ulong)((iVar46 + uVar38) - SUB164(auVar14 * auVar30,8)) * lVar4;
            auVar31._8_8_ = 0;
            auVar31._0_8_ = uVar44;
            uVar54 = SUB164(auVar15 * auVar31,8);
            uVar50 = uVar42;
            if (uVar54 < uVar52) {
              *puVar2 = uVar40;
              puVar51 = (undefined8 *)((long)__s_00 + lVar48 * 8);
              uVar50 = *puVar51;
              *puVar51 = uVar42;
              uVar40 = uVar55;
              uVar52 = uVar54;
            }
            uVar52 = uVar52 + 1;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = (ulong)(iVar46 + 1) * lVar4;
            auVar32._8_8_ = 0;
            auVar32._0_8_ = uVar44;
            lVar48 = SUB168(auVar16 * auVar32,8);
            puVar2 = (uint *)(lVar47 + lVar48 * 4);
            iVar46 = SUB164(auVar16 * auVar32,8);
            uVar42 = uVar50;
            uVar55 = *puVar2;
          }
          *(undefined8 *)((long)__s_00 + lVar48 * 8) = uVar42;
          *puVar2 = uVar40;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar41 = uVar41 + 1;
      } while (uVar39 != uVar41);
      Memory::free_static(local_1a0,false);
      Memory::free_static(pvVar3,false);
    }
  }
  local_e8 = (undefined1  [16])0x0;
  local_d0 = 0;
  iVar46 = *param_1;
  local_c0[0] = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_98[0] = 0;
  local_88 = 0;
  local_80 = 0;
  local_70[0] = 0;
  local_60[0] = 0;
  local_50[0] = 0;
  local_d8 = iVar46;
  pauVar43 = (undefined1 (*) [16])operator_new(0xa0,"");
  *(int *)pauVar43[1] = iVar46;
  *(undefined4 *)(pauVar43[1] + 8) = 0;
  *(undefined8 *)(pauVar43[2] + 8) = 0;
  *(undefined8 *)(pauVar43[3] + 8) = 0;
  *(undefined4 *)pauVar43[4] = 0;
  *(undefined8 *)pauVar43[5] = 0;
  *(undefined8 *)pauVar43[6] = 0;
  *(undefined4 *)(pauVar43[6] + 8) = 0;
  *(undefined8 *)(pauVar43[7] + 8) = 0;
  *(undefined8 *)(pauVar43[8] + 8) = 0;
  *(undefined8 *)(pauVar43[9] + 8) = 0;
  *pauVar43 = (undefined1  [16])0x0;
  CowData<GLTFAnimation::Channel<float>>::_unref((CowData<GLTFAnimation::Channel<float>> *)local_50)
  ;
  CowData<Vector3>::_unref((CowData<Vector3> *)local_60);
  CowData<double>::_unref((CowData<double> *)local_70);
  if (local_88 != 0) {
    LOCK();
    plVar1 = (long *)(local_88 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_88 + -0x10),false);
    }
  }
  CowData<double>::_unref((CowData<double> *)local_98);
  CowData<Vector3>::_unref((CowData<Vector3> *)&local_b0);
  CowData<double>::_unref((CowData<double> *)local_c0);
  puVar51 = *(undefined8 **)(this + 0x20);
  if (puVar51 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar43;
  }
  else {
    *puVar51 = pauVar43;
    *(undefined8 **)(*pauVar43 + 8) = puVar51;
  }
  *(undefined1 (**) [16])(this + 0x20) = pauVar43;
  uVar40 = ((uint)*param_1 >> 0x10 ^ *param_1) * -0x7a143595;
  uVar39 = (uVar40 ^ uVar40 >> 0xd) * -0x3d4d51cb;
  uVar40 = uVar39 ^ uVar39 >> 0x10;
  if (uVar39 == uVar39 >> 0x10) {
    uVar41 = 1;
    uVar40 = 1;
  }
  else {
    uVar41 = (ulong)uVar40;
  }
  uVar55 = 0;
  lVar47 = *(long *)(this + 0x10);
  uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar44 = CONCAT44(0,uVar39);
  lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar41 * lVar4;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = uVar44;
  lVar49 = SUB168(auVar17 * auVar33,8);
  lVar48 = *(long *)(this + 8);
  puVar2 = (uint *)(lVar47 + lVar49 * 4);
  iVar46 = SUB164(auVar17 * auVar33,8);
  uVar38 = *puVar2;
  pauVar37 = pauVar43;
  while (uVar38 != 0) {
    auVar18._8_8_ = 0;
    auVar18._0_8_ = (ulong)uVar38 * lVar4;
    auVar34._8_8_ = 0;
    auVar34._0_8_ = uVar44;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = (ulong)((iVar46 + uVar39) - SUB164(auVar18 * auVar34,8)) * lVar4;
    auVar35._8_8_ = 0;
    auVar35._0_8_ = uVar44;
    uVar52 = SUB164(auVar19 * auVar35,8);
    pauVar56 = pauVar37;
    if (uVar52 < uVar55) {
      *puVar2 = uVar40;
      puVar51 = (undefined8 *)(lVar48 + lVar49 * 8);
      pauVar56 = (undefined1 (*) [16])*puVar51;
      *puVar51 = pauVar37;
      uVar40 = uVar38;
      uVar55 = uVar52;
    }
    uVar55 = uVar55 + 1;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = (ulong)(iVar46 + 1) * lVar4;
    auVar36._8_8_ = 0;
    auVar36._0_8_ = uVar44;
    lVar49 = SUB168(auVar20 * auVar36,8);
    puVar2 = (uint *)(lVar47 + lVar49 * 4);
    iVar46 = SUB164(auVar20 * auVar36,8);
    pauVar37 = pauVar56;
    uVar38 = *puVar2;
  }
  *(undefined1 (**) [16])(lVar48 + lVar49 * 8) = pauVar37;
  *puVar2 = uVar40;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0012bc30:
  CowData<GLTFAnimation::Channel<float>>::_unref((CowData<GLTFAnimation::Channel<float>> *)local_f8)
  ;
  CowData<Vector3>::_unref((CowData<Vector3> *)local_108);
  CowData<double>::_unref((CowData<double> *)local_118);
  if (local_130[0] != 0) {
    LOCK();
    plVar1 = (long *)(local_130[0] + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_130[0] + -0x10),false);
    }
  }
  CowData<double>::_unref((CowData<double> *)local_140);
  CowData<Vector3>::_unref((CowData<Vector3> *)local_158);
  CowData<double>::_unref((CowData<double> *)local_168);
LAB_0012bc8c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pauVar43[1] + 8;
}



/* CowData<Ref<GLTFAnimation> >::_unref() */

void __thiscall CowData<Ref<GLTFAnimation>>::_unref(CowData<Ref<GLTFAnimation>> *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  code *pcVar4;
  char cVar5;
  long *plVar6;
  long lVar7;
  
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
  plVar1 = *(long **)this;
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar2 = plVar1[-1];
  *(undefined8 *)this = 0;
  if (lVar2 != 0) {
    lVar7 = 0;
    plVar6 = plVar1;
LAB_0012becd:
    do {
      if (*plVar6 != 0) {
        cVar5 = RefCounted::unreference();
        if (cVar5 != '\0') {
          pOVar3 = (Object *)*plVar6;
          cVar5 = predelete_handler(pOVar3);
          if (cVar5 != '\0') {
            lVar7 = lVar7 + 1;
            plVar6 = plVar6 + 1;
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
            if (lVar2 == lVar7) break;
            goto LAB_0012becd;
          }
        }
      }
      lVar7 = lVar7 + 1;
      plVar6 = plVar6 + 1;
    } while (lVar2 != lVar7);
  }
  Memory::free_static(plVar1 + -2,false);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<Ref<GLTFAnimation> >::resize<false>(long) */

undefined8 __thiscall
CowData<Ref<GLTFAnimation>>::resize<false>(CowData<Ref<GLTFAnimation>> *this,long param_1)

{
  Object *pOVar1;
  code *pcVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  void *pvVar9;
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
    lVar11 = 0;
    lVar7 = 0;
  }
  else {
    lVar11 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar11) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar7 = lVar11 * 8;
    if (lVar7 != 0) {
      uVar8 = lVar7 - 1U | lVar7 - 1U >> 1;
      uVar8 = uVar8 | uVar8 >> 2;
      uVar8 = uVar8 | uVar8 >> 4;
      uVar8 = uVar8 | uVar8 >> 8;
      uVar8 = uVar8 | uVar8 >> 0x10;
      lVar7 = (uVar8 | uVar8 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_0012c248:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar8 = param_1 * 8 - 1;
  uVar8 = uVar8 >> 1 | uVar8;
  uVar8 = uVar8 | uVar8 >> 2;
  uVar8 = uVar8 | uVar8 >> 4;
  uVar8 = uVar8 | uVar8 >> 8;
  uVar8 = uVar8 | uVar8 >> 0x10;
  uVar8 = uVar8 | uVar8 >> 0x20;
  if (uVar8 == 0xffffffffffffffff) goto LAB_0012c248;
  if (param_1 <= lVar11) {
    puVar5 = *(undefined8 **)this;
    uVar10 = param_1;
    while (puVar5 != (undefined8 *)0x0) {
      if ((ulong)puVar5[-1] <= uVar10) {
LAB_0012c0ba:
        if (uVar8 + 1 != lVar7) {
          puVar5 = puVar5 + -2;
          puVar4 = (undefined8 *)Memory::realloc_static(puVar5,uVar8 + 0x11,false);
          if (puVar4 == (undefined8 *)0x0) {
            uVar6 = CowData<Vector2>::_realloc((long)puVar5);
            if ((int)uVar6 != 0) {
              return uVar6;
            }
            puVar5 = *(undefined8 **)this;
            if (puVar5 == (undefined8 *)0x0) {
              _DAT_00000000 = 0;
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
          }
          else {
            puVar5 = puVar4 + 2;
            *puVar4 = 1;
            *(undefined8 **)this = puVar5;
          }
        }
        puVar5[-1] = param_1;
        return 0;
      }
      while (puVar5[uVar10] == 0) {
        uVar10 = uVar10 + 1;
        if ((ulong)puVar5[-1] <= uVar10) goto LAB_0012c0ba;
      }
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
        pOVar1 = (Object *)puVar5[uVar10];
        cVar3 = predelete_handler(pOVar1);
        if (cVar3 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
        }
      }
      uVar10 = uVar10 + 1;
      puVar5 = *(undefined8 **)this;
    }
    goto LAB_0012c08a;
  }
  if (uVar8 + 1 == lVar7) {
LAB_0012c190:
    puVar4 = *(undefined8 **)this;
    if (puVar4 == (undefined8 *)0x0) {
LAB_0012c08a:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar11 = puVar4[-1];
LAB_0012c1a0:
    if (param_1 <= lVar11) goto LAB_0012c173;
  }
  else {
    if (lVar11 != 0) {
      pvVar9 = (void *)(*(long *)this + -0x10);
      puVar5 = (undefined8 *)Memory::realloc_static(pvVar9,uVar8 + 0x11,false);
      if (puVar5 == (undefined8 *)0x0) {
        uVar6 = CowData<Vector2>::_realloc((long)pvVar9);
        if ((int)uVar6 != 0) {
          return uVar6;
        }
        goto LAB_0012c190;
      }
      puVar4 = puVar5 + 2;
      *puVar5 = 1;
      *(undefined8 **)this = puVar4;
      lVar11 = puVar5[1];
      goto LAB_0012c1a0;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar8 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar4 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar4;
    lVar11 = 0;
  }
  memset(puVar4 + lVar11,0,(param_1 - lVar11) * 8);
LAB_0012c173:
  puVar4[-1] = param_1;
  return 0;
}



/* CowData<Ref<GLTFSkeleton> >::_unref() */

void __thiscall CowData<Ref<GLTFSkeleton>>::_unref(CowData<Ref<GLTFSkeleton>> *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  code *pcVar4;
  char cVar5;
  long *plVar6;
  long lVar7;
  
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
  plVar1 = *(long **)this;
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar2 = plVar1[-1];
  *(undefined8 *)this = 0;
  if (lVar2 != 0) {
    lVar7 = 0;
    plVar6 = plVar1;
LAB_0012c32d:
    do {
      if (*plVar6 != 0) {
        cVar5 = RefCounted::unreference();
        if (cVar5 != '\0') {
          pOVar3 = (Object *)*plVar6;
          cVar5 = predelete_handler(pOVar3);
          if (cVar5 != '\0') {
            lVar7 = lVar7 + 1;
            plVar6 = plVar6 + 1;
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
            if (lVar2 == lVar7) break;
            goto LAB_0012c32d;
          }
        }
      }
      lVar7 = lVar7 + 1;
      plVar6 = plVar6 + 1;
    } while (lVar2 != lVar7);
  }
  Memory::free_static(plVar1 + -2,false);
  return;
}



/* CowData<Ref<GLTFLight> >::_unref() */

void __thiscall CowData<Ref<GLTFLight>>::_unref(CowData<Ref<GLTFLight>> *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  code *pcVar4;
  char cVar5;
  long *plVar6;
  long lVar7;
  
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
  plVar1 = *(long **)this;
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar2 = plVar1[-1];
  *(undefined8 *)this = 0;
  if (lVar2 != 0) {
    lVar7 = 0;
    plVar6 = plVar1;
LAB_0012c40d:
    do {
      if (*plVar6 != 0) {
        cVar5 = RefCounted::unreference();
        if (cVar5 != '\0') {
          pOVar3 = (Object *)*plVar6;
          cVar5 = predelete_handler(pOVar3);
          if (cVar5 != '\0') {
            lVar7 = lVar7 + 1;
            plVar6 = plVar6 + 1;
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
            if (lVar2 == lVar7) break;
            goto LAB_0012c40d;
          }
        }
      }
      lVar7 = lVar7 + 1;
      plVar6 = plVar6 + 1;
    } while (lVar2 != lVar7);
  }
  Memory::free_static(plVar1 + -2,false);
  return;
}



/* GLTFState::~GLTFState() */

void __thiscall GLTFState::~GLTFState(GLTFState *this)

{
  long *plVar1;
  uint uVar2;
  Object *pOVar3;
  long lVar4;
  code *pcVar5;
  char cVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  void *pvVar10;
  long lVar11;
  long lVar12;
  
  *(undefined ***)this = &PTR__initialize_classv_0012ebb8;
  Dictionary::~Dictionary((Dictionary *)(this + 0x550));
  HashMap<ObjectID,HashMap<ObjectID,int,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,int>>>,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,HashMap<ObjectID,int,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,int>>>>>>
  ::~HashMap((HashMap<ObjectID,HashMap<ObjectID,int,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,int>>>,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,HashMap<ObjectID,int,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,int>>>>>>
              *)(this + 0x520));
  pvVar10 = *(void **)(this + 0x4f8);
  if (pvVar10 != (void *)0x0) {
    if (*(int *)(this + 0x51c) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x518) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x51c) = 0;
        *(undefined1 (*) [16])(this + 0x508) = (undefined1  [16])0x0;
      }
      else {
        lVar7 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x500) + lVar7) != 0) {
            *(int *)(*(long *)(this + 0x500) + lVar7) = 0;
            Memory::free_static(*(void **)((long)pvVar10 + lVar7 * 2),false);
            pvVar10 = *(void **)(this + 0x4f8);
            *(undefined8 *)((long)pvVar10 + lVar7 * 2) = 0;
          }
          lVar7 = lVar7 + 4;
        } while ((ulong)uVar2 << 2 != lVar7);
        *(undefined4 *)(this + 0x51c) = 0;
        *(undefined1 (*) [16])(this + 0x508) = (undefined1  [16])0x0;
        if (pvVar10 == (void *)0x0) goto LAB_0012c567;
      }
    }
    Memory::free_static(pvVar10,false);
    Memory::free_static(*(void **)(this + 0x500),false);
  }
LAB_0012c567:
  pvVar10 = *(void **)(this + 0x4c8);
  if (pvVar10 != (void *)0x0) {
    if (*(int *)(this + 0x4ec) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x4e8) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x4ec) = 0;
        *(undefined1 (*) [16])(this + 0x4d8) = (undefined1  [16])0x0;
      }
      else {
        lVar7 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x4d0) + lVar7) != 0) {
            pvVar10 = *(void **)((long)pvVar10 + lVar7 * 2);
            *(int *)(*(long *)(this + 0x4d0) + lVar7) = 0;
            if ((*(long *)((long)pvVar10 + 0x18) != 0) &&
               (cVar6 = RefCounted::unreference(), cVar6 != '\0')) {
              pOVar3 = *(Object **)((long)pvVar10 + 0x18);
              cVar6 = predelete_handler(pOVar3);
              if (cVar6 != '\0') {
                (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
                Memory::free_static(pOVar3,false);
              }
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar10 + 0x10));
            Memory::free_static(pvVar10,false);
            pvVar10 = *(void **)(this + 0x4c8);
            *(undefined8 *)((long)pvVar10 + lVar7 * 2) = 0;
          }
          lVar7 = lVar7 + 4;
        } while (lVar7 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0x4ec) = 0;
        *(undefined1 (*) [16])(this + 0x4d8) = (undefined1  [16])0x0;
        if (pvVar10 == (void *)0x0) goto LAB_0012c62a;
      }
    }
    Memory::free_static(pvVar10,false);
    Memory::free_static(*(void **)(this + 0x4d0),false);
  }
LAB_0012c62a:
  pvVar10 = *(void **)(this + 0x498);
  if (pvVar10 != (void *)0x0) {
    if (*(int *)(this + 0x4bc) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x4b8) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x4bc) = 0;
        *(undefined1 (*) [16])(this + 0x4a8) = (undefined1  [16])0x0;
      }
      else {
        lVar7 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x4a0) + lVar7) != 0) {
            *(int *)(*(long *)(this + 0x4a0) + lVar7) = 0;
            Memory::free_static(*(void **)((long)pvVar10 + lVar7 * 2),false);
            pvVar10 = *(void **)(this + 0x498);
            *(undefined8 *)((long)pvVar10 + lVar7 * 2) = 0;
          }
          lVar7 = lVar7 + 4;
        } while ((ulong)uVar2 << 2 != lVar7);
        *(undefined4 *)(this + 0x4bc) = 0;
        *(undefined1 (*) [16])(this + 0x4a8) = (undefined1  [16])0x0;
        if (pvVar10 == (void *)0x0) goto LAB_0012c6c9;
      }
    }
    Memory::free_static(pvVar10,false);
    Memory::free_static(*(void **)(this + 0x4a0),false);
  }
LAB_0012c6c9:
  pvVar10 = *(void **)(this + 0x468);
  if (pvVar10 != (void *)0x0) {
    if (*(int *)(this + 0x48c) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x488) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x48c) = 0;
        *(undefined1 (*) [16])(this + 0x478) = (undefined1  [16])0x0;
      }
      else {
        lVar7 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x470) + lVar7) != 0) {
            *(int *)(*(long *)(this + 0x470) + lVar7) = 0;
            Memory::free_static(*(void **)((long)pvVar10 + lVar7 * 2),false);
            pvVar10 = *(void **)(this + 0x468);
            *(undefined8 *)((long)pvVar10 + lVar7 * 2) = 0;
          }
          lVar7 = lVar7 + 4;
        } while ((ulong)uVar2 << 2 != lVar7);
        *(undefined4 *)(this + 0x48c) = 0;
        *(undefined1 (*) [16])(this + 0x478) = (undefined1  [16])0x0;
        if (pvVar10 == (void *)0x0) goto LAB_0012c769;
      }
    }
    Memory::free_static(pvVar10,false);
    Memory::free_static(*(void **)(this + 0x470),false);
  }
LAB_0012c769:
  CowData<Ref<GLTFAnimation>>::_unref((CowData<Ref<GLTFAnimation>> *)(this + 0x458));
  CowData<Ref<GLTFSkeleton>>::_unref((CowData<Ref<GLTFSkeleton>> *)(this + 0x448));
  pvVar10 = *(void **)(this + 0x418);
  if (pvVar10 != (void *)0x0) {
    if ((*(int *)(this + 0x43c) != 0) &&
       ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x438) * 4) == 0 ||
        (memset(*(void **)(this + 0x430),0,
                (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x438) * 4) << 2),
        *(int *)(this + 0x43c) != 0)))) {
      lVar7 = 0;
      do {
        lVar11 = lVar7 * 8;
        lVar7 = lVar7 + 1;
        CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar10 + lVar11));
        pvVar10 = *(void **)(this + 0x418);
      } while ((uint)lVar7 < *(uint *)(this + 0x43c));
      *(undefined4 *)(this + 0x43c) = 0;
      if (pvVar10 == (void *)0x0) goto LAB_0012c807;
    }
    Memory::free_static(pvVar10,false);
    Memory::free_static(*(void **)(this + 0x428),false);
    Memory::free_static(*(void **)(this + 0x420),false);
    Memory::free_static(*(void **)(this + 0x430),false);
  }
LAB_0012c807:
  pvVar10 = *(void **)(this + 0x3f0);
  if (pvVar10 != (void *)0x0) {
    if ((*(int *)(this + 0x414) != 0) &&
       ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x410) * 4) == 0 ||
        (memset(*(void **)(this + 0x408),0,
                (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x410) * 4) << 2),
        *(int *)(this + 0x414) != 0)))) {
      lVar7 = 0;
      do {
        lVar11 = lVar7 * 8;
        lVar7 = lVar7 + 1;
        CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar10 + lVar11));
        pvVar10 = *(void **)(this + 0x3f0);
      } while ((uint)lVar7 < *(uint *)(this + 0x414));
      *(undefined4 *)(this + 0x414) = 0;
      if (pvVar10 == (void *)0x0) goto LAB_0012c88f;
    }
    Memory::free_static(pvVar10,false);
    Memory::free_static(*(void **)(this + 0x400),false);
    Memory::free_static(*(void **)(this + 0x3f8),false);
    Memory::free_static(*(void **)(this + 0x408),false);
  }
LAB_0012c88f:
  CowData<Ref<GLTFLight>>::_unref((CowData<Ref<GLTFLight>> *)(this + 1000));
  CowData<Ref<GLTFCamera>>::_unref((CowData<Ref<GLTFCamera>> *)(this + 0x3d8));
  CowData<Ref<GLTFSkin>>::_unref((CowData<Ref<GLTFSkin>> *)(this + 0x3c8));
  CowData<Ref<Image>>::_unref((CowData<Ref<Image>> *)(this + 0x3b8));
  CowData<String>::_unref((CowData<String> *)(this + 0x3a8));
  CowData<String>::_unref((CowData<String> *)(this + 0x398));
  CowData<Ref<Texture2D>>::_unref((CowData<Ref<Texture2D>> *)(this + 0x388));
  if ((*(long *)(this + 0x378) != 0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) {
    pOVar3 = *(Object **)(this + 0x378);
    cVar6 = predelete_handler(pOVar3);
    if (cVar6 != '\0') {
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
    }
  }
  if (*(long *)(this + 0x370) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x370) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      plVar1 = *(long **)(this + 0x370);
      if (plVar1 == (long *)0x0) goto LAB_0012cf73;
      lVar7 = plVar1[-1];
      lVar11 = 0;
      *(undefined8 *)(this + 0x370) = 0;
      plVar8 = plVar1;
      if (lVar7 != 0) {
        do {
          while ((*plVar8 == 0 || (cVar6 = RefCounted::unreference(), cVar6 == '\0'))) {
LAB_0012c948:
            lVar11 = lVar11 + 1;
            plVar8 = plVar8 + 1;
            if (lVar7 == lVar11) goto LAB_0012c9a0;
          }
          pOVar3 = (Object *)*plVar8;
          cVar6 = predelete_handler(pOVar3);
          if (cVar6 == '\0') goto LAB_0012c948;
          lVar11 = lVar11 + 1;
          plVar8 = plVar8 + 1;
          (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
          Memory::free_static(pOVar3,false);
        } while (lVar7 != lVar11);
      }
LAB_0012c9a0:
      Memory::free_static(plVar1 + -2,false);
    }
  }
  CowData<Ref<GLTFTexture>>::_unref((CowData<Ref<GLTFTexture>> *)(this + 0x360));
  CowData<int>::_unref((CowData<int> *)(this + 0x350));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x340));
  CowData<Ref<Material>>::_unref((CowData<Ref<Material>> *)(this + 0x338));
  pvVar10 = *(void **)(this + 0x308);
  if (pvVar10 != (void *)0x0) {
    if (*(int *)(this + 0x32c) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x328) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x32c) = 0;
        *(undefined1 (*) [16])(this + 0x318) = (undefined1  [16])0x0;
      }
      else {
        lVar7 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x310) + lVar7) != 0) {
            pvVar10 = *(void **)((long)pvVar10 + lVar7 * 2);
            *(int *)(*(long *)(this + 0x310) + lVar7) = 0;
            if ((*(long *)((long)pvVar10 + 0x10) != 0) &&
               (cVar6 = RefCounted::unreference(), cVar6 != '\0')) {
              pOVar3 = *(Object **)((long)pvVar10 + 0x10);
              cVar6 = predelete_handler(pOVar3);
              if (cVar6 != '\0') {
                (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
                Memory::free_static(pOVar3,false);
              }
            }
            Memory::free_static(pvVar10,false);
            pvVar10 = *(void **)(this + 0x308);
            *(undefined8 *)((long)pvVar10 + lVar7 * 2) = 0;
          }
          lVar7 = lVar7 + 4;
        } while ((ulong)uVar2 << 2 != lVar7);
        *(undefined4 *)(this + 0x32c) = 0;
        *(undefined1 (*) [16])(this + 0x318) = (undefined1  [16])0x0;
        if (pvVar10 == (void *)0x0) goto LAB_0012ca95;
      }
    }
    Memory::free_static(pvVar10,false);
    Memory::free_static(*(void **)(this + 0x310),false);
  }
LAB_0012ca95:
  if (*(long *)(this + 0x2f8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x2f8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar7 = *(long *)(this + 0x2f8);
      *(undefined8 *)(this + 0x2f8) = 0;
      Memory::free_static((void *)(lVar7 + -0x10),false);
    }
  }
  CowData<Ref<GLTFMesh>>::_unref((CowData<Ref<GLTFMesh>> *)(this + 0x2e8));
  if (*(long *)(this + 0x2d8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x2d8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      plVar1 = *(long **)(this + 0x2d8);
      if (plVar1 == (long *)0x0) goto LAB_0012cf73;
      lVar7 = plVar1[-1];
      lVar11 = 0;
      *(undefined8 *)(this + 0x2d8) = 0;
      plVar8 = plVar1;
      if (lVar7 != 0) {
        do {
          while ((*plVar8 == 0 || (cVar6 = RefCounted::unreference(), cVar6 == '\0'))) {
LAB_0012cb08:
            lVar11 = lVar11 + 1;
            plVar8 = plVar8 + 1;
            if (lVar7 == lVar11) goto LAB_0012cb60;
          }
          pOVar3 = (Object *)*plVar8;
          cVar6 = predelete_handler(pOVar3);
          if (cVar6 == '\0') goto LAB_0012cb08;
          lVar11 = lVar11 + 1;
          plVar8 = plVar8 + 1;
          (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
          Memory::free_static(pOVar3,false);
        } while (lVar7 != lVar11);
      }
LAB_0012cb60:
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if (*(long *)(this + 0x2c8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x2c8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      plVar1 = *(long **)(this + 0x2c8);
      if (plVar1 == (long *)0x0) goto LAB_0012cf73;
      lVar7 = plVar1[-1];
      lVar11 = 0;
      *(undefined8 *)(this + 0x2c8) = 0;
      plVar8 = plVar1;
      if (lVar7 != 0) {
        do {
          while ((*plVar8 == 0 || (cVar6 = RefCounted::unreference(), cVar6 == '\0'))) {
LAB_0012cbb8:
            lVar11 = lVar11 + 1;
            plVar8 = plVar8 + 1;
            if (lVar7 == lVar11) goto LAB_0012cc10;
          }
          pOVar3 = (Object *)*plVar8;
          cVar6 = predelete_handler(pOVar3);
          if (cVar6 == '\0') goto LAB_0012cbb8;
          lVar11 = lVar11 + 1;
          plVar8 = plVar8 + 1;
          (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
          Memory::free_static(pOVar3,false);
        } while (lVar7 != lVar11);
      }
LAB_0012cc10:
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if (*(long *)(this + 0x2b8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x2b8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar7 = *(long *)(this + 0x2b8);
      if (lVar7 == 0) {
LAB_0012cf73:
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      lVar11 = *(long *)(lVar7 + -8);
      lVar12 = 0;
      *(undefined8 *)(this + 0x2b8) = 0;
      lVar9 = lVar7;
      if (lVar11 != 0) {
        do {
          if (*(long *)(lVar9 + 8) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar9 + 8) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar9 + 8);
              *(undefined8 *)(lVar9 + 8) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar12 = lVar12 + 1;
          lVar9 = lVar9 + 0x10;
        } while (lVar11 != lVar12);
      }
      Memory::free_static((void *)(lVar7 + -0x10),false);
    }
  }
  CowData<Ref<GLTFNode>>::_unref((CowData<Ref<GLTFNode>> *)(this + 0x2a8));
  CowData<unsigned_char>::_unref((CowData<unsigned_char> *)(this + 0x280));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x270));
  Dictionary::~Dictionary((Dictionary *)(this + 0x260));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 600));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x250));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x248));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x240));
  Resource::~Resource((Resource *)this);
  return;
}



/* GLTFState::~GLTFState() */

void __thiscall GLTFState::~GLTFState(GLTFState *this)

{
  ~GLTFState(this);
  operator_delete(this,0x558);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<Ref<GLTFLight> >::resize<false>(long) */

undefined8 __thiscall
CowData<Ref<GLTFLight>>::resize<false>(CowData<Ref<GLTFLight>> *this,long param_1)

{
  Object *pOVar1;
  code *pcVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  void *pvVar9;
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
    lVar11 = 0;
    lVar7 = 0;
  }
  else {
    lVar11 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar11) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar7 = lVar11 * 8;
    if (lVar7 != 0) {
      uVar8 = lVar7 - 1U | lVar7 - 1U >> 1;
      uVar8 = uVar8 | uVar8 >> 2;
      uVar8 = uVar8 | uVar8 >> 4;
      uVar8 = uVar8 | uVar8 >> 8;
      uVar8 = uVar8 | uVar8 >> 0x10;
      lVar7 = (uVar8 | uVar8 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_0012d298:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar8 = param_1 * 8 - 1;
  uVar8 = uVar8 >> 1 | uVar8;
  uVar8 = uVar8 | uVar8 >> 2;
  uVar8 = uVar8 | uVar8 >> 4;
  uVar8 = uVar8 | uVar8 >> 8;
  uVar8 = uVar8 | uVar8 >> 0x10;
  uVar8 = uVar8 | uVar8 >> 0x20;
  if (uVar8 == 0xffffffffffffffff) goto LAB_0012d298;
  if (param_1 <= lVar11) {
    puVar5 = *(undefined8 **)this;
    uVar10 = param_1;
    while (puVar5 != (undefined8 *)0x0) {
      if ((ulong)puVar5[-1] <= uVar10) {
LAB_0012d10a:
        if (uVar8 + 1 != lVar7) {
          puVar5 = puVar5 + -2;
          puVar4 = (undefined8 *)Memory::realloc_static(puVar5,uVar8 + 0x11,false);
          if (puVar4 == (undefined8 *)0x0) {
            uVar6 = CowData<Vector2>::_realloc((long)puVar5);
            if ((int)uVar6 != 0) {
              return uVar6;
            }
            puVar5 = *(undefined8 **)this;
            if (puVar5 == (undefined8 *)0x0) {
              _DAT_00000000 = 0;
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
          }
          else {
            puVar5 = puVar4 + 2;
            *puVar4 = 1;
            *(undefined8 **)this = puVar5;
          }
        }
        puVar5[-1] = param_1;
        return 0;
      }
      while (puVar5[uVar10] == 0) {
        uVar10 = uVar10 + 1;
        if ((ulong)puVar5[-1] <= uVar10) goto LAB_0012d10a;
      }
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
        pOVar1 = (Object *)puVar5[uVar10];
        cVar3 = predelete_handler(pOVar1);
        if (cVar3 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
        }
      }
      uVar10 = uVar10 + 1;
      puVar5 = *(undefined8 **)this;
    }
    goto LAB_0012d0da;
  }
  if (uVar8 + 1 == lVar7) {
LAB_0012d1e0:
    puVar4 = *(undefined8 **)this;
    if (puVar4 == (undefined8 *)0x0) {
LAB_0012d0da:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar11 = puVar4[-1];
LAB_0012d1f0:
    if (param_1 <= lVar11) goto LAB_0012d1c3;
  }
  else {
    if (lVar11 != 0) {
      pvVar9 = (void *)(*(long *)this + -0x10);
      puVar5 = (undefined8 *)Memory::realloc_static(pvVar9,uVar8 + 0x11,false);
      if (puVar5 == (undefined8 *)0x0) {
        uVar6 = CowData<Vector2>::_realloc((long)pvVar9);
        if ((int)uVar6 != 0) {
          return uVar6;
        }
        goto LAB_0012d1e0;
      }
      puVar4 = puVar5 + 2;
      *puVar5 = 1;
      *(undefined8 **)this = puVar4;
      lVar11 = puVar5[1];
      goto LAB_0012d1f0;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar8 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar4 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar4;
    lVar11 = 0;
  }
  memset(puVar4 + lVar11,0,(param_1 - lVar11) * 8);
LAB_0012d1c3:
  puVar4[-1] = param_1;
  return 0;
}



/* void memdelete<HashMapElement<String, HashMap<String, Variant, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String, Variant> > > >
   >(HashMapElement<String, HashMap<String, Variant, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String, Variant> > > >*)
    */

void memdelete<HashMapElement<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>>>
               (HashMapElement *param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  
  pvVar5 = *(void **)(param_1 + 0x20);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(param_1 + 0x44) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x40) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(param_1 + 0x44) = 0;
        *(undefined1 (*) [16])(param_1 + 0x30) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(param_1 + 0x28) + lVar4) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            *(int *)(*(long *)(param_1 + 0x28) + lVar4) = 0;
            if (Variant::needs_deinit[*(int *)((long)pvVar5 + 0x18)] != '\0') {
              Variant::_clear_internal();
            }
            if (*(long *)((long)pvVar5 + 0x10) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar5 + 0x10) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar5 + 0x10);
                *(undefined8 *)((long)pvVar5 + 0x10) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            Memory::free_static(pvVar5,false);
            pvVar5 = *(void **)(param_1 + 0x20);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar2 << 2);
        *(undefined4 *)(param_1 + 0x44) = 0;
        *(undefined1 (*) [16])(param_1 + 0x30) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_0012d421;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(param_1 + 0x28),false);
  }
LAB_0012d421:
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x10));
  Memory::free_static(param_1,false);
  return;
}



/* ConfigFile::~ConfigFile() */

void __thiscall ConfigFile::~ConfigFile(ConfigFile *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_0012ed90;
  pvVar3 = *(void **)(this + 0x188);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x1ac) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a8) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x1ac) = 0;
        *(undefined1 (*) [16])(this + 0x198) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 400) + lVar2) != 0) {
            *(int *)(*(long *)(this + 400) + lVar2) = 0;
            memdelete<HashMapElement<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>>>
                      (*(HashMapElement **)((long)pvVar3 + lVar2 * 2));
            pvVar3 = *(void **)(this + 0x188);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x1ac) = 0;
        *(undefined1 (*) [16])(this + 0x198) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_0012d531;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 400),false);
  }
LAB_0012d531:
  *(undefined ***)this = &PTR__initialize_classv_0012db60;
  Object::~Object((Object *)this);
  return;
}



/* ConfigFile::~ConfigFile() */

void __thiscall ConfigFile::~ConfigFile(ConfigFile *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_0012ed90;
  pvVar3 = *(void **)(this + 0x188);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x1ac) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a8) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x1ac) = 0;
        *(undefined1 (*) [16])(this + 0x198) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 400) + lVar2) != 0) {
            *(int *)(*(long *)(this + 400) + lVar2) = 0;
            memdelete<HashMapElement<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>>>
                      (*(HashMapElement **)((long)pvVar3 + lVar2 * 2));
            pvVar3 = *(void **)(this + 0x188);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x1ac) = 0;
        *(undefined1 (*) [16])(this + 0x198) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_0012d621;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 400),false);
  }
LAB_0012d621:
  *(undefined ***)this = &PTR__initialize_classv_0012db60;
  Object::~Object((Object *)this);
  operator_delete(this,0x1b0);
  return;
}



/* GLTFDocument::~GLTFDocument() */

void __thiscall GLTFDocument::~GLTFDocument(GLTFDocument *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  code *pcVar4;
  char cVar5;
  long *plVar6;
  long lVar7;
  
  *(undefined **)this = &Resource::typeinfo;
  if (*(long *)(this + 0x270) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x270) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      plVar1 = *(long **)(this + 0x270);
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar2 = plVar1[-1];
      *(undefined8 *)(this + 0x270) = 0;
      if (lVar2 != 0) {
        lVar7 = 0;
        plVar6 = plVar1;
LAB_0012d6fd:
        do {
          if (*plVar6 != 0) {
            cVar5 = RefCounted::unreference();
            if (cVar5 != '\0') {
              pOVar3 = (Object *)*plVar6;
              cVar5 = predelete_handler(pOVar3);
              if (cVar5 != '\0') {
                lVar7 = lVar7 + 1;
                plVar6 = plVar6 + 1;
                (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
                Memory::free_static(pOVar3,false);
                if (lVar2 == lVar7) break;
                goto LAB_0012d6fd;
              }
            }
          }
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 1;
        } while (lVar2 != lVar7);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if (*(long *)(this + 600) != 0) {
    cVar5 = RefCounted::unreference();
    if (cVar5 != '\0') {
      pOVar3 = *(Object **)(this + 600);
      cVar5 = predelete_handler(pOVar3);
      if (cVar5 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x248));
  Resource::~Resource((Resource *)this);
  return;
}



/* FBXDocument::~FBXDocument() */

void __thiscall FBXDocument::~FBXDocument(FBXDocument *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0012eef0;
  GLTFDocument::~GLTFDocument((GLTFDocument *)this);
  return;
}



/* FBXDocument::~FBXDocument() */

void __thiscall FBXDocument::~FBXDocument(FBXDocument *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0012eef0;
  GLTFDocument::~GLTFDocument((GLTFDocument *)this);
  operator_delete(this,0x278);
  return;
}



/* GLTFDocument::~GLTFDocument() */

void __thiscall GLTFDocument::~GLTFDocument(GLTFDocument *this)

{
  ~GLTFDocument(this);
  operator_delete(this,0x278);
  return;
}



/* FBXDocument::_gen_unique_name(HashSet<String, HashMapHasherDefault,
   HashMapComparatorDefault<String> >&, String const&) */

void FBXDocument::_GLOBAL__sub_I__gen_unique_name(void)

{
  if (Animation::PARAMETERS_BASE_PATH == '\0') {
    Animation::PARAMETERS_BASE_PATH = '\x01';
    Animation::PARAMETERS_BASE_PATH = 0;
    String::parse_latin1((String *)&Animation::PARAMETERS_BASE_PATH,"parameters/");
    __cxa_atexit(String::~String,&Animation::PARAMETERS_BASE_PATH,&__dso_handle);
  }
  if (AudioStreamRandomizer::base_property_helper != '\0') {
    return;
  }
  AudioStreamRandomizer::base_property_helper = 1;
  AudioStreamRandomizer::base_property_helper._56_8_ = 2;
  AudioStreamRandomizer::base_property_helper._64_8_ = 0;
  AudioStreamRandomizer::base_property_helper._0_16_ = (undefined1  [16])0x0;
  AudioStreamRandomizer::base_property_helper._24_16_ = (undefined1  [16])0x0;
  AudioStreamRandomizer::base_property_helper._40_16_ = (undefined1  [16])0x0;
  __cxa_atexit(PropertyListHelper::~PropertyListHelper,AudioStreamRandomizer::base_property_helper,
               &__dso_handle);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* FBXDocument::~FBXDocument() */

void __thiscall FBXDocument::~FBXDocument(FBXDocument *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* GLTFDocument::~GLTFDocument() */

void __thiscall GLTFDocument::~GLTFDocument(GLTFDocument *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ConfigFile::~ConfigFile() */

void __thiscall ConfigFile::~ConfigFile(ConfigFile *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* GLTFState::~GLTFState() */

void __thiscall GLTFState::~GLTFState(GLTFState *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ImporterMeshInstance3D::~ImporterMeshInstance3D() */

void __thiscall ImporterMeshInstance3D::~ImporterMeshInstance3D(ImporterMeshInstance3D *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* GLTFSkin::~GLTFSkin() */

void __thiscall GLTFSkin::~GLTFSkin(GLTFSkin *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* HashMap<ObjectID, HashMap<ObjectID, int, HashMapHasherDefault,
   HashMapComparatorDefault<ObjectID>, DefaultTypedAllocator<HashMapElement<ObjectID, int> > >,
   HashMapHasherDefault, HashMapComparatorDefault<ObjectID>,
   DefaultTypedAllocator<HashMapElement<ObjectID, HashMap<ObjectID, int, HashMapHasherDefault,
   HashMapComparatorDefault<ObjectID>, DefaultTypedAllocator<HashMapElement<ObjectID, int> > > > >
   >::~HashMap() */

void __thiscall
HashMap<ObjectID,HashMap<ObjectID,int,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,int>>>,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,HashMap<ObjectID,int,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,int>>>>>>
::~HashMap(HashMap<ObjectID,HashMap<ObjectID,int,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,int>>>,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,HashMap<ObjectID,int,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,int>>>>>>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* HashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > >::~HashMap() */

void __thiscall
HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
::~HashMap(HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */

void __thiscall PropertyInfo::PropertyInfo(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* GLTFMesh::~GLTFMesh() */

void __thiscall GLTFMesh::~GLTFMesh(GLTFMesh *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* GLTFNode::~GLTFNode() */

void __thiscall GLTFNode::~GLTFNode(GLTFNode *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* GLTFLight::~GLTFLight() */

void __thiscall GLTFLight::~GLTFLight(GLTFLight *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* String::~String() */

void __thiscall String::~String(String *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ImporterMesh::~ImporterMesh() */

void __thiscall ImporterMesh::~ImporterMesh(ImporterMesh *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

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
/* StandardMaterial3D::~StandardMaterial3D() */

void __thiscall StandardMaterial3D::~StandardMaterial3D(StandardMaterial3D *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* GLTFTexture::~GLTFTexture() */

void __thiscall GLTFTexture::~GLTFTexture(GLTFTexture *this)

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


